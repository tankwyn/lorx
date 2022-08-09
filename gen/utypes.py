# -*- encoding: utf-8 -*-

import copy
import os
import collections

from gen.orxparse import otdict, qtdict
from gen.conversion import maketname
from gen.dochelper import doc_autolink, doc_escapemd, emmy_process_type, emmy_process_param_name
from gen.cfg import structuremethodslist, structuresubtypes, extdocdict, gmdoclist, luakws

smlist = structuremethodslist
sslist = structuresubtypes


def _generate_regarr(mdict, const, bmap):
    """generate luaL_Reg array for all types"""

    src0 = """/*
** Userdata types generated with {}
*/


""".format(os.path.basename(__file__))

    mregs = collections.OrderedDict()

    o2ldict = collections.OrderedDict()

    strcs = (list(otdict.keys()) + list(qtdict.keys()))
    strcs.sort()
    for sn in strcs:
        assert(sn.startswith('orx'))
        oname = sn[3:].lower()

        body = ""

        names = []
        if sn in list(mdict.keys()) + sslist:
            if sn in mdict.keys():
                ml = copy.deepcopy(mdict[sn])
            else:
                ml = []
            if sn in sslist:
                ml += smlist
            assert(len(ml) != 0)
            for orxn in ml:
                # check the type of the first param
                params = bmap[orxn]['params']
                if (len(params) < 1):
                    raise Exception(f"function {orxn} cannot be a method, it doesn't have any param!")
                tmp = params[0]['type'].replace('#', '')
                if tmp not in ('void*', 'void*#') and tmp != sn:
                    raise Exception("the type of the first param ({}) of method {}:{} is different from `self`!".format(tmp, sn, orxn))
                del tmp

                # skip non-const methods for const generation
                if const and not params[0]['type'].endswith('#'):
                    continue

                # return const ?
                retconst = False
                frets = bmap[orxn]['returns']
                if len(frets) > 0 and frets[0]['type'].endswith('*#'):
                    retconst = True
                del frets

                # remove redundant self name (Shader.GetShaderName -> Shader.GetName, e.g.)
                ssuffix = sn[sn.rfind('_')+1:].lower()
                if ssuffix.startswith('orx'):
                    ssuffix = ssuffix[3:]
                ssuffix = ssuffix[0].upper() + ssuffix[1:]
                mname = orxn[orxn.find('_')+1:]
                mname = mname.replace(ssuffix, '')

                mname = mname[0].lower() + mname[1:]

                if retconst:
                    mname += "Const"

                if mname[0].isdigit():
                    mname = '_' + mname

                if mname in luakws:
                    mname = '_' + mname
                
                assert(orxn.startswith('orx'))
                lname = orxn[3:]

                if mname in names:
                    if sn in sslist and orxn in smlist:
                        print(f"warning: method {orxn} from orxSTRUCTURE conflicts with {sn}'s own methods, skip it!")
                        continue
                    else:
                        raise Exception(f'method name confliction in {sn}: {mname} for l_{lname}!')
                names.append(mname)
                body += f"""{{ "{mname}", l_{lname} }},
"""

                o2ldict[orxn] = mname

        if const:
            oname += "_const"

        body = body.replace('\n', '\n  ')
        src0 += f"""static const struct luaL_Reg l_lorx_{oname}_m[] = {{
  {body}
  {{ NULL, NULL }}
}};
"""
        mregs[sn] = oname

    return src0, mregs, o2ldict


def _gen_register_alltypes(mregs_nc, mregs_c, mmlist):
    tmp = "static void lorx_register_orx_utypes(lua_State *L)"

    src = f"""
// utype registration
{tmp}
{{
"""
    # for sn,oname in mregs_nc.items():
    strcs = (list(otdict.keys()) + list(qtdict.keys()))
    strcs.sort()
    for sn in strcs:
        assert(sn.startswith('orx'))
        oname = sn[3:].lower()

        if sn in mregs_nc.keys():
            tname = maketname(sn, False)
            # oname = mregs_nc[sn]
            if sn in mmlist:
                src += f"""  lorx_register_type(L, "{tname}", 2, l_lorx_{oname}_m, l_lorx_{oname}_mm);
"""
            else:
                src += f"""  lorx_register_type(L, "{tname}", 1, l_lorx_{oname}_m);
"""
        if sn in mregs_c.keys():
            tname_c = maketname(sn, True)
            # oname_c = mregs_c[sn]
            oname_c = oname + '_const'
            if sn in mmlist:
                src += f"""  lorx_register_type(L, "{tname_c}", 2, l_lorx_{oname_c}_m, l_lorx_{oname_c}_mm);
"""
            else:
                src += f"""  lorx_register_type(L, "{tname_c}", 1, l_lorx_{oname_c}_m);
"""

        if sn not in mregs_c.keys() and sn not in mregs_nc.keys():
            oname_c = oname + '_const'
            src += f"""  lorx_register_type(L, "{tname_c}", 1, l_lorx_{oname}_mm);
"""
            src += f"""  lorx_register_type(L, "{tname_c}", 1, l_lorx_{oname_c}_mm);
"""

    src += "\n}\n"

    return src


def gen_utypes(mdict, bmap, mmlist, propdocs):
    """generate utypes (methods and properties)"""

    hfn = "utypes.h"

    # method list for all orxSTRUCTURE subtypes
    ssmdoclsit = []
    for fn in smlist:
        mname = fn[fn.find('_')+1:]
        mname = mname[0].lower() + mname[1:]
        if bmap[fn]['params'][0]['type'][-1] == '#':
            ncs = 'no'
        else:
            ncs = 'yes'
        
        if mname in luakws:
            mname = '_' + mname
        
        ssmdoclsit.append({
            'name': mname,
            'description': bmap[fn]['description'],
            'params': bmap[fn]['params'][1:],
            'returns': bmap[fn]['returns'],
            'csig': bmap[fn]['csig'],
            'non_const_self': ncs,
        })
    del fn, mname, ncs

    # group methods to non-const utypes
    src_ncon, mregs_nc, o2ldict_nc = _generate_regarr(mdict, False, bmap)
    # group methods to const utypes
    src_con, mregs_c, o2ldict_c = _generate_regarr(mdict, True, bmap)
    # metatable creation
    src_reg = _gen_register_alltypes(mregs_nc, mregs_c, mmlist)

    s = src_ncon + src_con + src_reg

    hg = '__LORX_' + hfn.replace('.', '_').upper() + '__'
    h = f"""#ifndef {hg}
#define {hg}

#include <orx.h>
#include <lua.h>
#include <lualib.h>
#include <lauxlib.h>
#include "bindings.h"
#include "generics.h"
#include "helpers.h"
#include "properties.h"


""" + s + f"\n#endif /* {hg} */"

    with open('src/' + hfn, 'w') as f:
        f.write(h)

    mdoc = collections.OrderedDict()
    strcs = list(set(list(mdict.keys()) + mmlist + sslist))
    strcs.sort()
    for t in strcs:
        mdoc[t] = collections.OrderedDict()
        if t in mmlist and t in propdocs:
            mdoc[t]['properties'] = propdocs[t]
        else:
            mdoc[t]['properties'] = []
        
        mdoc[t]['methods'] = []
        if t in mdict.keys():
            for fname in mdict[t]:
                if bmap[fname]['params'][0]['type'].endswith('#'):
                    ncs = 'no'
                else:
                    ncs = 'yes'
                mdoc[t]['methods'].append({
                    'name': o2ldict_nc[fname],
                    'description': bmap[fname]['description'],
                    'params': bmap[fname]['params'],
                    'returns': bmap[fname]['returns'],
                    'csig': bmap[fname]['csig'],
                    'non_const_self': ncs,
                })

        if t in sslist:
            tmp = [x['name'] for x in mdoc[t]['methods']]
            tmp1 = [x for x in ssmdoclsit if x['name'] not in tmp]
            mdoc[t]['methods'] += tmp1
            del tmp, tmp1

        mdoc[t]['description'] = ''

    return mdoc


def gen_utype_docs(mdoc, cinfo):
    types_str = ''

    _mdoc = copy.deepcopy(mdoc)
    _extdocdict = copy.deepcopy(extdocdict)

    tlist = list(otdict.keys()) + list(qtdict.keys())
    tlist.sort()

    for t in tlist:
        types_str += f'        - {t}: types/{t}.md\n'

    for t in tlist:
        # merge
        if t in _mdoc.keys():
            docdict = _mdoc[t]
        else:
            docdict = None
        if t in _extdocdict.keys():
            if docdict is None:
                docdict = _extdocdict[t]
            else:
                pnames = [p['name'] for p in docdict['properties']]
                mnames = [m['name'] for m in docdict['methods']]
                # discard auto-generated doc if hand-written one exists
                for _p in _extdocdict[t]['properties']:
                    if _p['name'] in pnames:
                        i = pnames.index(_p['name'])
                        docdict['properties'].pop(i)
                        pnames.pop(i)
                for _m in _extdocdict[t]['methods']:
                    if _m['name'] in mnames:
                        i = mnames.index(_m['name'])
                        docdict['methods'].pop(i)
                        mnames.pop(i)
                docdict['properties'] += _extdocdict[t]['properties']
                docdict['methods'] += _extdocdict[t]['methods']
                # concatenate descriptions
                docdict['description'] = docdict['description'] + _extdocdict[t]['description']

        # dummpy            
        if docdict is None:
            docdict = {
                'properties': [],
                'methods': [],
                'description': "This type doesn't have any property or method",
            }

        fp = f'doc/docs/types/{t}.md'
        with open(fp, 'w') as f:
            props = docdict['properties']
            methods = copy.deepcopy(docdict['methods']) + gmdoclist
            methods.sort(key=(lambda m: m['name']))
            dsp = docdict['description']

            f.write(f'# type {t}\n\n')

            f.write("> {}\n\n".format(doc_autolink(doc_escapemd(dsp), fp)))

            if t in _extdocdict.keys() and 'constructors' in _extdocdict[t]:
                f.write(f"constructors:\n\n")
                for _c in _extdocdict[t]['constructors']:
                    mod = _c['module']
                    fun = _c['funcname']
                    literal = f'lorx.{mod}.{fun}'
                    link = f"../modules/{mod}.md#{fun.lower()}"
                    f.write(f"* [{literal}]({link})\n")
                f.write('\n')
            elif t in cinfo.keys():
                mod = cinfo[t]['module']
                fun = cinfo[t]['funcname']
                literal = f'lorx.{mod}.{fun}'
                link = f"../modules/{mod}.md#{fun.lower()}"
                f.write(f"constructors: [{literal}]({link})\n\n")

            if len(props) > 0:
                f.write('## Properties\n\n')
                f.write('name | type \n')
                f.write('--- | --- \n')
                for p in props:
                    f.write(p['name'] + ' | ' + doc_autolink(doc_escapemd(p['type']), fp) + '\n')
                f.write('\n')
            
            if len(methods) > 0:
                f.write('## Methods\n\n')
                for m in methods:
                    name = m['name']
                    dsp = m['description']
                    params = m['params']
                    returns = m['returns']
                    csig = m['csig']
                    ncs = m['non_const_self']

                    if ncs == 'yes':
                        xxx = ' (non-const self only)'
                    else:
                        xxx = ''

                    if len(returns) > 0:
                        tmp = ', '.join([f'r{i+1}' for i in range(len(returns))]) + ' = '
                    else:
                        tmp = ''
                    sig = tmp + name + '(' + ', '.join([p['name'] for p in params[1:]]) + ')'

                    f.write(f'### **`{t}:{name}`**\n\n')
                    f.write(f'* Signature:\n\n')
                    f.write('```lua\n' + sig + '\n```' + '\n\n')
                    f.write('* Description:\n\n')
                    f.write('> ' + doc_autolink(doc_escapemd(dsp), fp) + xxx + '\n\n')
                    f.write('* Params:\n\n')
                    if len(params) > 1:
                        f.write('name | type | description \n')
                        f.write('--- | --- | ---\n')
                        for p in params[1:]:
                            f.write(p['name'] + p['dir'] + ' | ' + doc_autolink(doc_escapemd(p['type']), fp) + ' | ' + p['description'] + '\n')
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

    return types_str


def gen_utype_emmy(mdoc):
    types_emmy = ''

    _mdoc = copy.deepcopy(mdoc)
    _extdocdict = copy.deepcopy(extdocdict)

    tlist = list(otdict.keys()) + list(qtdict.keys())
    tlist.sort()

    for t in tlist:
        # merge
        if t in _mdoc.keys():
            docdict = _mdoc[t]
        else:
            docdict = None
        if t in _extdocdict.keys():
            if docdict is None:
                docdict = _extdocdict[t]
            else:
                pnames = [p['name'] for p in docdict['properties']]
                mnames = [m['name'] for m in docdict['methods']]
                # discard auto-generated doc if hand-written one exists
                for _p in _extdocdict[t]['properties']:
                    if _p['name'] in pnames:
                        i = pnames.index(_p['name'])
                        docdict['properties'].pop(i)
                        pnames.pop(i)
                for _m in _extdocdict[t]['methods']:
                    if _m['name'] in mnames:
                        i = mnames.index(_m['name'])
                        docdict['methods'].pop(i)
                        mnames.pop(i)
                docdict['properties'] += _extdocdict[t]['properties']
                docdict['methods'] += _extdocdict[t]['methods']
                # concatenate descriptions
                docdict['description'] = docdict['description'] + _extdocdict[t]['description']

        # dummpy            
        if docdict is None:
            docdict = {
                'properties': [],
                'methods': [],
                'description': "This type doesn't have any properties or methods",
            }

        types_emmy += f"---@class {t}\n"
        props = docdict['properties']
        methods = copy.deepcopy(docdict['methods']) + gmdoclist
        methods.sort(key=(lambda m: m['name']))
        # dsp = docdict['description']

        for p in props:
            dsp = ''
            tmp, dsp = emmy_process_type(p['type'], dsp)
            types_emmy += "---@field public {} {} # {}\n".format(p['name'], tmp, dsp)
            del tmp

        types_emmy += f"local {t} = {{}}\n\n"

        for m in methods:
            mname = m['name']
            mdsp = m['description']
            mparams = m['params']
            mreturns = m['returns']
            ncs = m['non_const_self']

            if ncs == 'yes':
                mdsp = '(non-const self) ' + mdsp

            types_emmy += "---\n"
            types_emmy += f"---{mdsp}\n"
            types_emmy += "---\n"
            for p in mparams[1:]:
                pname = emmy_process_param_name(p['name'])
                ptype = p['type']
                pdsp = p['description']
                ptype, pdsp = emmy_process_type(ptype, pdsp)
                types_emmy += f"---@param {pname} {ptype} # {pdsp}\n"
            if len(mparams) > 1:
                del pname, ptype, pdsp
            for r in mreturns:
                rtype = r['type']
                rdsp = r['description']
                rtype, rdsp = emmy_process_type(rtype, rdsp)
                types_emmy += f'---@return {rtype} # {rdsp}\n'
            if len(mreturns) > 0:
                del rdsp, rtype
            sig = t + ':' + mname + '(' + ', '.join(['_' + p['name'] for p in mparams[1:]]) + ')'
            types_emmy += f"function {sig} end\n\n"

    return types_emmy