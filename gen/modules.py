# -*- encoding: utf-8 -*-

import copy
import os

from gen.typemapping import typemap
from gen.orxparse import fdict, otdict, mdefs
from gen.conversion import fn_o2lbasic
from gen.dochelper import doc_autolink, doc_escapemd, doc_trans_type, emmy_process_type, emmy_process_param_name
from gen.cfg import exmdocdict, luakws
from gen.verbose import *


def _generate_defs_submodule():
    """generate lorx.defs module which contains most constants in Orx"""

    header = ''
    src = ''
    body = ''
    for k,x in mdefs.items():
        t = x['type']
        d = typemap[t]
        v = x['value']
        convf = fn_o2lbasic(t, d, False)
        body += f"""  {convf}(L, {v});
  lua_setfield(L, -2, "{k}");
"""
    tmp = f"LORX_API int luaopen_lorx_constants(lua_State *L)"
    header += tmp + ';\n'
    src += f"""{tmp}
{{
  lorx_insistglobal(L, "lorx");
  lua_newtable(L);
{body}
  lua_pushvalue(L, -1);
  lua_setfield(L, -3, "constants");
  lua_remove(L, -2);

  return 1;
}}

"""

    return header, src



def gen_modules(bind_map, creators, creatordocs):
    def _make_camel(s):
        """make a camel-style name"""

        tmp = s.split('_')
        for i in range(len(tmp)):
            if i == 0:
                tmp[i] = tmp[i].lower()
            else:
                tmp[i] = tmp[i][0].upper() + tmp[i][1:].lower()
        r = ''.join(tmp)

        return r

    hfn = "modules.h"
    sfn = "modules.c"

    hg = '__LORX_' + hfn.replace('.', '_').upper() + '__'

    header = f"""/*
** Lorx sub-modules (generated with {os.path.basename(__file__)})
*/


#ifndef {hg}
#define {hg}

#include <lua.h>
#include <lauxlib.h>
#include "helpers.h"

"""

    # build submodules from api bindings
    submodules = {}
    moddoc = {}
    for ofn, lf in bind_map.items():
        lfn = lf['name']

        # return const ?
        fret = fdict[ofn]['return']
        if (fret['type'] not in ('orxSTRING', 'char*', 'orxCHAR*') and fret['type'].endswith('*')) and fret['const']:
            retconst = True
        else:
            retconst = False
        del fret

        if ofn.startswith('_orxDebug'):
            modname = 'debug'
            mfname = ofn[9:].replace('_', '') # remove prefix and '_'
            mfname = mfname[0].lower() + mfname[1:]
        elif ofn.startswith('orx') or ofn.startswith('_orx'):
            tmp = os.path.splitext(os.path.basename(lf['hfile']))[0]
            assert(tmp.startswith('orx'))
            tmp = tmp[3:]
            modname = tmp.lower()
            if lfn.find(tmp+'_') == 0:
                tmp = lfn[len(tmp)+1:]
            elif lfn.find('_orx' + tmp + '_') == 0:
                tmp = lfn[len(tmp)+5:]
            else:
                tmp = lfn
            if '_' in tmp:
                mfname = _make_camel(tmp)
            else:
                mfname = tmp[0].lower() + tmp[1:]
        else:
            raise Exception(f'unexpected function name: {ofn}')

        if retconst:
            mfname += 'Const'

        if mfname[0].isdigit():
            mfname = '_' + mfname

        if modname in luakws:
            modname = '_' + modname
            
        if mfname in luakws:
            mfname = '_' + mfname
        
        if modname not in submodules.keys():
            submodules[modname] = {}
        else:
            if mfname in submodules[modname].keys():
                raise Exception(f"module {modname} already has a function call '{mfname}'!")
        submodules[modname][mfname] = lfn

        if modname not in moddoc.keys():
            moddoc[modname] = []

        moddoc[modname].append({
            'name' : mfname,
            'description' : lf['description'],
            'params' : lf['params'],
            'returns' : lf['returns'],
            'csig' : lf['csig'],
        })

    # add creators
    cinfo = {}
    for sn,fname in creators.items():
        tmp = os.path.splitext(os.path.basename(otdict[sn]['file']))[0]
        assert(tmp.startswith('orx'))
        tmp = tmp[3:]
        modname = tmp.lower()
        assert(sn.startswith('orx'))
        mfname = _make_camel(sn[3:])

        if modname not in submodules.keys():
            submodules[modname] = {}
        else:
            if mfname in submodules[modname].keys():
                raise Exception(f"module {modname} already has a function called '{mfname}'!")
        submodules[modname][mfname] = fname

        cinfo[sn] = {
            'module' : modname,
            'funcname': mfname,
        }

        if modname not in moddoc.keys():
            moddoc[modname] = []
        moddoc[modname].append({
            'name' : mfname,
            'description' : creatordocs[sn]['description'],
            'params' : creatordocs[sn]['params'],
            'returns' : creatordocs[sn]['returns'],
            'csig' : None,
        })

    # generate luaL_Reg arrays
    src_mr = ""

    for m, reg in submodules.items():
        src_mr += f"""

// Sub-module: {m}
static const struct luaL_Reg l_lorx_{m}[] = {{
"""
        for l,r in reg.items():
            src_mr += f"""  {{ "{l}", l_{r} }},
"""
        src_mr += f"""  {{ NULL, NULL }}
}};
"""
        tmp = f"LORX_API int luaopen_lorx_{m}(lua_State *L)"
        header += tmp + ';\n'
        src_mr += f"""
{tmp}
{{
  return lorx_register_submodule(L, "{m}", l_lorx_{m});
}}
"""

    head = """/*
** Lorx sub-modules (generated with {})
*/


#include <lua.h>
#include <lualib.h>
#include <lauxlib.h>
#include <orx.h>
#include "helpers.h"
#include "bindings.h"
#include "constructors.h"
#include "{}"

""".format(os.path.basename(__file__), hfn)

    submodlist = """

// sub-module list
static const struct luaL_Reg lorx_orx_modules[] = {
"""
    
    hd, sd = _generate_defs_submodule()
    submodnames = list(submodules.keys()) + ['constants',]

    n = len(submodnames)
    for m in submodnames:
        submodlist += f"""  {{ "lorx.{m}", luaopen_lorx_{m} }},
"""

    submodlist += f"""}};
static const size_t lorx_orx_module_number = {n};
"""

    h = header + hd + submodlist + f'\n#endif /* {hg} */'
    s = head + sd + src_mr
    with open('src/' + hfn, 'w') as f:
        f.write(h)
    with open('src/' + sfn, 'w') as f:
        f.write(s)

    return moddoc, cinfo


def gen_module_doc(moddoc):
    """generate docs for all sub-modules"""

    modules_str = ''

    _moddoc = copy.deepcopy(moddoc)
    _exmdocdict = copy.deepcopy(exmdocdict)

    mlist = list(set(list(_moddoc.keys())+list(_exmdocdict.keys())))
    mlist.sort()

    for m in mlist:
        modules_str += f'        - {m}: modules/{m}.md\n'

    for m in mlist:
        # merge (override existing function entries)
        if m in _moddoc.keys():
            doclist = _moddoc[m]
        else:
            doclist = None
        if m in _exmdocdict.keys():
            if doclist is None:
                doclist = _exmdocdict[m]
            else:
                names = [ x['name'] for x in doclist ]
                for x in _exmdocdict[m]:
                    if x['name'] in names:
                        i = names.index(x['name'])
                        doclist.pop(i)
                        names.pop(i)
                doclist += _exmdocdict[m]

        doclist.sort(key=(lambda d: d['name']))
        fp = f'doc/docs/modules/{m}.md'
        with open(fp, 'w') as f:
            f.write(f'# module {m}\n\n')
            f.write('## functions\n\n')
            for doc in doclist:
                name = doc['name']
                dsp = doc['description']
                params = doc['params']
                returns = doc['returns']
                csig = doc['csig']
                if len(returns) > 0:
                    tmp = ', '.join([f'r{i+1}' for i in range(len(returns))]) + ' = '
                else:
                    tmp = ''
                sig = tmp + name + '(' + ', '.join([p['name'] for p in params]) + ')'
                f.write(f'### **`{name}`**\n\n')
                f.write('* Signature:\n\n')
                f.write('```lua\n' + sig + '\n```' + '\n\n')
                f.write('* Description:\n\n')
                f.write('> ' + doc_autolink(doc_escapemd(dsp), fp) +'\n\n')
                f.write('* Params:\n\n')
                if len(params) > 0:
                    f.write('name | type | description \n')
                    f.write('--- | --- | ---\n')
                    for p in params:
                        f.write(p['name'] + p['dir'] + ' | ' + doc_autolink(doc_escapemd(p['type']), fp) + ' | ' + doc_autolink(doc_escapemd(p['description']), fp) + '\n')
                    f.write('\n')
                f.write('* Returns:\n\n')
                if len(returns) > 0:
                    f.write('type | description \n')
                    f.write('--- | ---\n')
                    for r in returns:
                        f.write(doc_autolink(doc_escapemd(r['type']), fp) + ' | ' + doc_autolink(doc_escapemd(r['description']), fp) + '\n')
                    f.write('\n')
                if csig is not None:
                    f.write('* C signature:\n\n')
                    f.write('```c\n' + csig + '\n```\n\n')
                f.write('---\n\n')

    # add lorx.constants
    modules_str = f'        - constants: modules/constants.md\n' + modules_str
    fp = f'doc/docs/modules/constants.md'
    with open(fp, 'w') as f:
        f.write(f'# module constants\n\n')
        f.write('## constants\n\n')
        f.write('name | type | value\n')
        f.write('--- | --- | ---\n')
        for k,info in mdefs.items():
            f.write('{} | {} | {}\n'.format(k, doc_trans_type(info['type'], False), info['value']))
        f.write('\n')

    return modules_str


def gen_module_emmy(moddoc):
    """generate emmy annotations for all sub-modules"""

    _moddoc = copy.deepcopy(moddoc)
    _exmdocdict = copy.deepcopy(exmdocdict)

    mlist = list(_moddoc.keys())
    mlist.sort()

    for m in mlist:
        # merge (override existing function entries)
        if m in _moddoc.keys():
            doclist = _moddoc[m]
        else:
            doclist = None
        if m in _exmdocdict.keys():
            if doclist is None:
                doclist = _exmdocdict[m]
            else:
                names = [ x['name'] for x in doclist ]
                for x in _exmdocdict[m]:
                    if x['name'] in names:
                        i = names.index(x['name'])
                        doclist.pop(i)
                        names.pop(i)
                doclist += _exmdocdict[m]

        doclist.sort(key=(lambda d: d['name']))

        fp = f'api/library/lorx.{m}.lua'
        with open(fp, 'w') as f:
            f.write('---@meta\n\n')
            f.write(f'---@class lorx.{m}\n')
            f.write(f"lorx.{m} = {{}}\n\n")
            for doc in doclist:
                name = doc['name']
                dsp = doc['description']
                params = doc['params']
                returns = doc['returns']

                f.write('---\n')
                f.write(f'---{dsp}\n')
                f.write('---\n')
                for p in params:
                    pname = emmy_process_param_name(p['name'])
                    pdsp = p['description']
                    ptype = p['type']
                    ptype, pdsp = emmy_process_type(ptype, pdsp)
                    if pname == '...':
                        f.write(f'---@vararg {ptype} # {pdsp}\n')
                    else:
                        f.write(f'---@param {pname} {ptype} # {pdsp}\n')
                if len(params) > 0:
                    del pname, pdsp, ptype
                for r in returns:
                    rdsp = r['description']
                    rtype = r['type']
                    rtype, rdsp = emmy_process_type(rtype, rdsp)
                    f.write(f'---@return {rtype} # {rdsp}\n')
                if len(returns) > 0:
                    del rdsp, rtype
                sig = f'lorx.{m}.' + name + '(' + ', '.join([emmy_process_param_name(p['name']) for p in params]) + ')'
                f.write(f'function {sig} end\n\n')

    fp = f'api/library/lorx.constants.lua'
    with open(fp, 'w') as f:
        f.write('---@meta\n\n')
        f.write(f'---@class lorx.constants\n')
        for k,info in mdefs.items():
            f.write('---@field public {} {}\n'.format(k, doc_trans_type(info['type'], False)))
        f.write(f"lorx.constants = {{}}\n\n")