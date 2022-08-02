# -*- encoding: utf-8 -*-

import os

from gen.orxparse import otdict
from gen.conversion import fn_l2o, fn_o2l, l2oarr_in, fn_l2outype, lstring2orx_chararr, maketname, o2larr
from gen.dochelper import *
from gen.cfg import fieldsdict, cdict
from gen.verbose import *


def _makename(field):
    name = field['name']
    const = field['const']
    ftype = field['type']
    
    # an exception for 'Value', which is frequently used in unions
    if name.find('Value') >= 0 and name.find('.') < 0:
        rm_type_prefix = False
    else:
        rm_type_prefix = True

    tmp = name.split('.')

    # remove type prefix
    if rm_type_prefix:
        tmp1 = [None,]*len(tmp)
        for i in range(len(tmp)):
            x = tmp[i]
            k = None
            for j in range(len(x)):
                if x[j].isupper():
                    k = j
                    break
            if k is not None:
                tmp1[i] = x[k:]
    else:
        tmp1 = tmp

    newname = ''.join(tmp1).lower()

    # for arrays, append 'list' at the end if it's not already ended with that
    if ftype.endswith('@') and ftype not in ('char@', 'orxCHAR@') and not newname.endswith('List'):
        newname += 'list'

    # for const struct pointers, append '_const' at the end
    if (ftype not in ('orxSTRING', 'char*', 'orxCHAR*') and ftype.endswith('*')) and const:
        newname += '_const'

    return newname


def _ensure_alens():
    """check the fields of all open structs and ensure they have corresponding array length"""

    for sn,strc in otdict.items():
        for f in strc['fields']:
            t = f['type']
            v = f['name']

            if 'alen' in f.keys():
                al = f['alen']
            else:
                al = None

            if t.endswith('@') and al is None:
                raise Exception('warning: mssing array length for {} of {}'.format(v, sn))

al_check = False
if not al_check:
    _ensure_alens()
    al_check = True


def _setter_snippet(sn, f, i):
    v = f['name']
    t = f['type']
    c = f['const']
    al = f['alen']

    # if const, only pointers can be modified
    if c and (t != 'orxSTRING' and not t.endswith('*')):
        raise Exception("{}.{} shouldn't be const!".format(sn, f['name']))

    if t.endswith('@'): # arrays
        # throw on pointer-array fields
        if t[:-1].endswith('*'):
            raise Exception("no pointer array field is allowed!")

        if t[:-1] in ('char', 'orxCHAR'): # length-limited string
            r0 = lstring2orx_chararr('L', i, 'self->'+v, al)
            r1 = r2 = ''
        else: # common array
            if al.startswith('self->'):
                _check = True
            else:
                _check = False # fixed length array needs no NULL-check
            r0, r1, r2 = l2oarr_in('L', i, t, 'self->'+v, al, True, decl=False, check=_check)

        if r0.strip() == '':
            r0 = ''
        if r1.strip() == '':
            r1 = ''
        if r2.strip() == '':
            r2 = ''
        body = r0 + r1 + r2
    else:
        # throw on pointer-field
        if t.endswith('*'):
            raise Exception("no pointer field is allowed!")

        # const or non-const
        convf = fn_l2o(t, True)
        body = f"self->{v} = {convf}(L, {i});\n"

    return body


def gen_constructors():
    hfn = "constructors.h"

    hg = '__LORX_' + hfn.replace('.', '_').upper() + '__'

    constructors = {}
    constructors_docs = {}
    header = """/*
** Constructors for open data structures (generated with {})
*/


#ifndef {}
#define {}

#include <lua.h>
#include <lualib.h>
#include <lauxlib.h>
#include <orx.h>
#include "conbasic.h"
#include "conenum.h"
#include "conutype.h"

""".format(os.path.basename(__file__), hg, hg)

    for sn,strc in otdict.items():
        fields = strc['fields']

        if len(fields) == 0:
            continue

        fname = 'lorx_' + sn + '_create'
        tname = maketname(sn, False)
        body = f"""{sn}** pself = lua_newuserdata(L, sizeof({sn}*)+sizeof({sn}));
{sn}* self = ({sn}*)(pself + 1);
luaL_setmetatable(L, "{tname}");
*pself = self;"""

        if sn in cdict.keys():
            cfg = cdict[sn]
            assert(type(cfg) == list)
            if len(cfg) == 0: # no init
                fields1 = []
            else: # optional init
                fields1 = []
                for c in cfg[0]: # currently only support to create one creator
                    f = None
                    for _f in fields:
                        if _f['name'] == c:
                            f = _f
                            break
                    if f is None:
                        raise Exception(f'specified field {c} for {sn} does not exist!')
                    fields1.append(f)
                    del f
        else:
            fields1 = fields # full init

        body1 = '  '
        params = []
        for i,f in enumerate(fields1):
            tmp = _setter_snippet(sn, f, str(i+1))
            body1 += tmp
            params.append({
                'name': f['name'],
                'type': doc_trans_type(f['type'], f['const']),
                # 'const': doc_trans_const(f['const']),
                'dir': '',
                'description': ''
            })

        body = body.replace('\n', '\n  ') + '\n' + body1.replace('\n', '\n  ')
        sig = f"static int l_{fname}(lua_State *L)"
        header += f"""{sig}
{{
  {body}
  return 1;
}}

"""
        constructors[sn] = fname

        constructors_docs[sn] = {
            'description': f'Create a new {sn}',
            'params': params,
            'returns' : [{
                'type': doc_trans_type(sn, False),
                # 'const': 'no',
                'description': 'The new instance',
            },]
        }

    header += f"\n#endif /* {hg} */"

    with open('src/' + hfn, 'w') as f:
        f.write(header)

    return constructors, constructors_docs


def _generate___index(t, const, fields):
    """generate __index meta function"""

    tname = maketname(t, const)
    convf = fn_l2outype(t, const)
    if const:
        c = "_const"
    else:
        c = ''
    sig = f"static int l_lorx_{t}{c}___index(lua_State *L)"
    src = f"""{sig}
{{
  const {t}* self = {convf}(L, 1);
  const char* key = luaL_checkstring(L, 2);
"""
    names = []
    for i,f in enumerate(fields):
        v = f['name']
        t = f['type']
        c = f['const']
        al = f['alen']
        
        lv = _makename(f)
        if t.endswith('@'): # arrays
            # throw on pointer-array fields
            if t[:-1].endswith('*'):
                raise Exception("no pointer array field is allowed!")
            if t[:-1] in ('orxCHAR', 'char'): # char array converts to string
                t1 = t[:-1] + '*'
                convff = fn_o2l(t1, True)
                frag = f"{convff}(L, self->{v});\n"
            else:
                frag = o2larr('L', t, 'self->'+v, al, check=False).strip().replace('\n', '\n    ') + '\n'
        else: # non-array
            # throw on pointer-fields
            if t.endswith('*'):
                raise Exception("no pointer field is allowed!")
            # make non-const copy
            convff = fn_o2l(t, False)
            if t in otdict.keys():
                frag = f"{convff}(L, &(self->{v}));\n"
            else:
                frag = f"{convff}(L, self->{v});\n"

        if lv in names:
            raise Exception(f'name confliction for {t}.{v}')
        names.append(lv)

        if i == 0:
            src += f"""  if (strcmp(key, "{lv}") == 0)
  {{
    """
        else:
            src += f"""  else if (strcmp(key, "{lv}") == 0)
  {{
    """
        src += frag
        src += "  }\n"
    src += f"""  else
  {{
    luaL_getmetatable(L, "{tname}");
    lua_pushvalue(L, 2);
    lua_rawget(L, -2);
  }}
  return 1;
}}
"""
    return src


def _generate___newindex(t, fields):
    """generate __newindex meta-function"""

    const = False
    tname = maketname(t, const)
    convf = fn_l2outype(t, const)
    sig = f"static int l_lorx_{t}___newindex(lua_State *L)"
    src = f"""{sig}
{{
  {t}* self = {convf}(L, 1);
  const char* key = luaL_checkstring(L, 2);
"""

    excluded = []
    for x in fields:
        if x['alen'] is not None and x['alen'].startswith('self->'):
            excluded.append(x['alen'][len('self->'):])
    
    names = []
    for i,f in enumerate(fields):
        v = f['name']
        t = f['type']

        if v in excluded:
            continue

        frag = '    ' + _setter_snippet(t, f, '3').strip().replace('\n', '\n    ') + '\n'
        
        lv = _makename(f)

        if lv in names:
            raise Exception(f'name confliction for {t}.{v}')
        names.append(lv)

        if i == 0:
            src += f"""  if (strcmp(key, "{lv}") == 0)
  {{
"""
        else:
            src += f"""  else if (strcmp(key, "{lv}") == 0)
  {{
"""
        src += frag
        src += "  }\n"

    src += f"""  else
  {{
    luaL_getmetatable(L, "{tname}");
    lua_pushvalue(L, 2);
    lua_pushvalue(L, 3);
    lua_rawset(L, -3);
  }}
  return 0;
}}
"""
    return src


def gen_properties():
    hfn = "properties.h"
    
    hg = '__LORX_' + hfn.replace('.', '_').upper() + '__'

    header = """/*
** Properties for open data structures (generated with {})
*/


#ifndef {}
#define {}

#include <lua.h>
#include <lauxlib.h>
#include <orx.h>
#include "conbasic.h"
#include "conutype.h"
#include "conenum.h"

""".format(os.path.basename(__file__), hg, hg)

    strcs_with_mm = list(otdict.keys()) + list(fieldsdict.keys())

    propdocs = {}

    # __index and __newindex
    for sn in strcs_with_mm:
        if sn in fieldsdict.keys():
            fields = fieldsdict[sn]
            strc = { 'name' : sn, 'fields': fields, 'file': 'dummpy' }
        else:
            strc = otdict[sn]
            fields = strc['fields']

        assert(sn.startswith('orx'))
        oname = sn[3:].lower()

        # dummpy
        if len(fields) == 0:
            header += f"""
static const luaL_Reg l_lorx_{oname}_mm[] = {{
  {{ NULL, NULL }}
}};
"""
            header += f"""
static const luaL_Reg l_lorx_{oname}_const_mm[] = {{
  {{ NULL, NULL }}
}};
"""
            continue

        header += _generate___index(sn, False, fields)
        header += _generate___index(sn, True, fields)
        header += _generate___newindex(sn, fields)

        header += f"""
static const luaL_Reg l_lorx_{oname}_mm[] = {{
  {{ "__index", l_lorx_{sn}___index }},
  {{ "__newindex", l_lorx_{sn}___newindex }},
  {{ NULL, NULL }}
}};

static const luaL_Reg l_lorx_{oname}_const_mm[] = {{
  {{ "__index", l_lorx_{sn}_const___index }},
  {{ NULL, NULL }}
}};
"""
        propdocs[sn] = []
        for f in fields:
            propdocs[sn].append({
                'name' : _makename(f),
                'type' : doc_trans_type(f['type'], False),
            })

    header += f"\n#endif /* {hg} */"

    with open('src/' + hfn, 'w') as f:
        f.write(header)


    return strcs_with_mm, propdocs
