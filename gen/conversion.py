import hashlib
import math
import os

from gen.typemapping import typemap, typemaprev
from gen.orxparse import otdict, qtdict, enums
from gen.cfg import structuresubtypes as sslist


# userdata tnames
def maketname(utype, const):
    if const:
        tname = f"lorx.{utype}#"
    else:
        tname = f"lorx.{utype}"
    return tname


################################
# conversion function names
################################

def fn_l2obasic(lt, ot, c):
    """get basic lua to orx conversion function name"""

    if ot == 'orxHANDLE':
        name = 'lorx_luserdata_to_orxHANDLE'
    elif ot == 'void*':
        if c:
            name = 'lorx_luserdata_to_void_ptr_const'
        else:
            name = 'lorx_luserdata_to_void_ptr'
    else:
        name = f"lorx_l{lt}_to_{ot}".replace('*', '_ptr')
    return name


def fn_o2lbasic(ot, lt, c):
    """get basic orx to lua conversion function name"""

    if ot == 'orxHANDLE':
        name = 'lorx_orxHANDLE_to_luserdata'
    elif ot == 'void*':
        if c:
            name = 'lorx_void_ptr_to_luserdata_const'
        else:
            name = 'lorx_void_ptr_to_luserdata'
    else:
        name = f"lorx_{ot}_to_l{lt}".replace('*', '_ptr')
    return name

def fn_l2oenum(oet):
    """get lua string to orx enum conversion function name"""

    name = f"lorx_lenumstr_to_{oet}"
    return name

def fn_o2lenum(oet):
    """get orx enum to lua string conversion function name"""

    name = f"lorx_{oet}_to_lenumstr"
    return name

def fn_l2outype(utype, const):
    """get lua userdata to orx pointer type conversion function name"""

    assert(utype in qtdict.keys() or utype in otdict.keys())
    if const:
        name = f"lorx_luserdata_to_{utype}_const"
    else:
        name = f"lorx_luserdata_to_{utype}"
    return name

def fn_o2lutype(utype, const):
    """get orx struct pointer to lua userdata conversion function name"""

    assert(utype in qtdict.keys())
    if const:
        name = f"lorx_{utype}_to_luserdata_const"
    else:
        name = f"lorx_{utype}_to_luserdata"
    return name

def fn_l2outype_struct(utype):
    """get lua userdata to orx struct type conversion function name"""

    # userdata type structs are always non-const
    assert(utype in otdict.keys())
    name = f"lorx_luserdata_to_{utype}_struct"
    return name

def fn_o2lutype_struct(utype):
    """get orx struct type to lua userdata conversion function name"""
    
    assert(utype in otdict.keys())
    name = f"lorx_{utype}_to_luserdata_struct"
    return name


def _lua4orx(ot):
    if ot in otdict.keys() or ot in qtdict.keys():
        return 'userdata'
    elif ot in enums.keys():
        return 'string'
    elif ot in typemap.keys():
        return typemap[ot]
    else:
        raise Exception(f'undefined type mapping for {ot}')


def fn_o2l(s, c):
    """get any type orx to lua conversion function name (except for array conversions)"""

    if s in typemap.keys():
        d = _lua4orx(s)
        return fn_o2lbasic(s, d, c)
    elif s.endswith('*'):
        assert(s[:-1] in otdict.keys() or s[:-1] in qtdict.keys())
        return fn_o2lutype(s[:-1], c)
    elif s in otdict.keys():
        return fn_o2lutype_struct(s)
    elif s in enums.keys():
        return fn_o2lenum(s)
    else:
        raise Exception(f"undefined conversion for {s}")

def fn_l2o(d, c):
    """get any type lua to orx conversion function name (except for array conversions)"""

    if d in typemap.keys():
        s = _lua4orx(d)
        return fn_l2obasic(s, d, c)
    elif d.endswith('*'):
        return fn_l2outype(d[:-1], c)
    elif d in otdict.keys():
        return fn_l2outype_struct(d)
    elif d in enums.keys():
        return fn_l2oenum(d)
    else:
        raise Exception(f"undefined conversion for {s}")



########################################################
# conversion for advanced types (enum, struct and array)
########################################################

def orx2enumstr(L, s, v, r):
    """snippet for converting orx enum to an enum string"""

    if s not in enums.keys():
        raise Exception(f"invalid enum type: {s}!")

    edict = enums[s]

    isFirst = True
    snippet = ""

    if len(list(edict.keys())) <= 126:
        for o, l in edict.items():
            if isFirst:
                snippet += f"""
const char* {r} = NULL;
if ({v} == {o})
{{
  {r} = "{l}";
}}"""
                isFirst = False
            else:
                snippet += f"""
else if ({v} == {o})
{{
  {r} = "{l}";
}}"""

        snippet += f"""
else
{{
  LORX_ERROR("unexpected enum type: %u!\\n", {v});
}}
"""
    else: # for cl.exe
        keys = list(edict.keys())
        snippet += f"""
const char* {r} = NULL;
{{
  int flag = 0;
"""
        n = math.ceil(len(keys) / 126)
        for i in range(n):
            if i != 0:
                snippet += """  if (flag)
  {
    flag = 0;"""
            else:
                snippet += """  {"""

            for _i, o in enumerate(keys[i*126:(min(len(keys), (i+1)*126))]):
                l = edict[o]
                if _i == 0:
                    snippet += f"""
    if ({v} == {o})
    {{
      {r} = "{l}";
    }}"""
                else:
                    snippet += f"""
    else if ({v} == {o})
    {{
      {r} = "{l}";
    }}"""

            if i == n - 1:
                snippet += f"""
    else
    {{
      LORX_ERROR("unexpected enum type: %u!\\n", {v});
    }}
"""
            else:
                snippet += f"""
    else
    {{
      flag = 1;
    }}
"""
            snippet += "  }\n"
            
        snippet += """}
"""

    return snippet


def orx2lenumstr(L, s, v):
    """snippet for converting orx enum to a lua enum string"""

    if s not in enums.keys():
        raise Exception(f"invalid enum type: {s}!")

    r = v + '_str'
    snippet = orx2enumstr(L, s, v, r)
    snippet += f"""lua_pushstring({L}, {r});
"""
    return snippet


def enumstr2orx(L, d, v, r):
    """snippet for converting a enum string to an orx enum"""

    if d not in enums.keys():
        raise Exception(f"invalid dest type {d}")

    edict = enums[d]

    snippet = f"""
{d} {r} = orxENUM_NONE;"""

    if len(list(edict.keys())) <= 126:
        isFirst = True
        for o, l in edict.items():
            assert(o.index(d) == 0)
            if isFirst:
                snippet += f"""
if (strcmp({v}, "{l}") == 0)
{{"""
                isFirst = False
            else:
                snippet += f"""
else if (strcmp({v}, "{l}") == 0)
{{"""
            snippet += f"""
  {r} = {o};
}}"""

        snippet += f"""
else
{{
  luaL_error({L}, "unrecognized enum %s!", {v});
}}"""
    else: # for cl.exe
        keys = list(edict.keys())
        snippet += f"""
{{
  int flag = 0;
"""
        n = math.ceil(len(keys) / 126)
        for i in range(n):
            if i != 0:
                snippet += """  if (flag)
  {
    flag = 0;"""
            else:
                snippet += """  {"""

            for _i, o in enumerate(keys[i*126:(min(len(keys), (i+1)*126))]):
                l = edict[o]
                if _i == 0:
                    snippet += f"""
    if (strcmp({v}, "{l}") == 0)
    {{
      {r} = {o};
    }}"""
                else:
                    snippet += f"""
    else if (strcmp({v}, "{l}") == 0)
    {{
      {r} = {o};
    }}"""

            if i == n - 1:
                snippet += f"""
    else
    {{
      luaL_error({L}, "unrecognized enum %s!", {v});
    }}
"""
            else:
                snippet += f"""
    else
    {{
      flag = 1;
    }}
"""
            snippet += "  }\n"
            
        snippet += """}
"""

    return snippet


def lenumstr2orx(L, i, d, v):
    """snippet for converting a lua enum string to an orx enum"""

    if d not in enums.keys():
        raise Exception(f"invalid dest type {d}")

    snippet = f"""
const char* s = luaL_checkstring({L}, {i});""" + enumstr2orx(L, d, 's', v)

    return snippet


def orx2luserdata(L, s, v, isconst):
    """snippet for converting orx struct pointer to a lua userdata"""

    if s not in otdict.keys() and s not in qtdict.keys():
        raise Exception(f"invalid src type: {s}")

    if v == 'pp':
        raise Exception("v cannot be 'pp'!")

    if isconst:
        const = "const "
    else:
        const = ""

    tname = maketname(s, isconst)

    snippet = f"""
if ({v})
{{
  {const}{s}** pp = lua_newuserdata(L, sizeof(void*));
  luaL_setmetatable({L}, "{tname}");
  *pp = {v};
}}
else
{{
  lua_pushnil({L});
}}"""
    return snippet


def luserdata2orx(L, i, d, v, isconst):
    """snippet for converting a lua userdata to an orx struct pointer"""

    if d not in otdict.keys() and d not in qtdict.keys():
        raise Exception(f"invalid dest type: {d}")

    if v == 'pp':
        raise Exception("'pp' is not a safe name!")

    if d == 'orxSTRUCTURE':
        tmp = []
        if isconst:
            const = "const "
            for sn in sslist + [d,]:
                tname0 = maketname(sn, False)
                tname1 = maketname(sn, True)
                tmp.append(f"""(pp = luaL_testudata({L}, {i}, "{tname1}")) || (pp = luaL_testudata({L}, {i}, "{tname0}"))""")
            cond = " || ".join(tmp)
            errmsg = f"""expect userdata of '{tname0}', '{tname1}' or their subtypes!"""
        else:
            const = ""
            for sn in sslist + [d,]:
                tname0 = maketname(sn, False)
                tmp.append(f"""(pp = luaL_testudata({L}, {i}, "{tname0}"))""")
            cond = " || ".join(tmp)
            errmsg = f"""expect userdata of '{tname0}' or its subtypes!"""
    else:
        tname0 = maketname(d, False)
        tname1 = maketname(d, True)
        if isconst:
            const = "const "
            cond = f"""(pp = luaL_testudata({L}, {i}, "{tname1}")) || (pp = luaL_testudata({L}, {i}, "{tname0}"))"""
            errmsg = f"""expect userdata of '{tname0}' or '{tname1}'!"""
        else:
            const = ""
            cond = f"""(pp = luaL_testudata({L}, {i}, "{tname0}"))"""
            errmsg = f"""expect userdata of '{tname0}'!"""

    snippet = f"""
{const}{d}* {v} = NULL;
if (lua_isnil({L}, {i}))
{{
  {v} = NULL;
}}
else
{{
  {const}{d}** pp;
  if ({cond})
  {{
    {v} = *pp;
  }}
  else
  {{
    luaL_error({L}, "{errmsg}");
  }}
}}"""

    return snippet


def orx2luserdata_struct(L, s, v):
    """make a new userdata and copy the memory of a struct into it"""

    if s not in otdict.keys():
        raise Exception(f"invalid struct type: {s}!")

    if v.startswith('*'):
        x = v[1:]
    else:
        x = f"&({v})"

    # structs created by lorx is always non-const
    tname = maketname(s, False)
    snippet = f"""
if ({x})
{{
  {s}** pp = lua_newuserdata({L}, sizeof({s}*)+sizeof({s}));
  *pp = ({s}*)(pp + 1);
  luaL_setmetatable({L}, "{tname}");
  memcpy(*pp, {x}, sizeof({s}));
}}
else
{{
  lua_pushnil({L});
}}"""
    return snippet


def luserdata2orx_struct(L, i, d, v):
    """make a copy from the struct stored in a lua userdata"""

    if d not in otdict.keys():
        raise Exception(f"invalid struct type: {d}!")

    # get a struct pointer from lua
    pv = 'p'
    getpv = luserdata2orx(L, i, d, pv, True).replace('\n', '\n  ')

    snippet = f"""
{d} {v};
{{
  {getpv}
  if ({pv} == NULL)
  {{
    luaL_error({L}, "expect non-NULL userdata!");
  }}
  memcpy(&({v}), {pv}, sizeof({d}));
}}"""
    return snippet


def l2oarr_in(L, i, d, v, vl, c, decl=True, check=True):
    """snippet for converting a lua table to an orx array. (for `in` function param)"""

    assert(d.endswith('@'))
    d = d[:-1]

    # if c and d.endswith('*'):
    if c and (d == 'orxSTRING' or d.endswith('*')):
        const = 'const '
    else:
        const = ''

    if vl is None:
        vl = '_auto_' + str(int(hashlib.sha1(v.encode("utf-8")).hexdigest(), 16) % (10 ** 8)) + '_len_'
        xxx = f"""lua_Integer _{vl} = luaL_len({L}, {i});
if (_{vl} <= 0)
{{
  luaL_error({L}, "expect non-empty array-table!");
}}
size_t {vl} = (size_t)_{vl};
"""
    else:
        xxx = ''

    convf = fn_l2o(d, False)
    writein = f"""for (size_t i = 0; i < {vl}; i++)
{{
  lua_geti({L}, {i}, i+1);
  {v}[i] = {convf}({L}, -1);
  lua_pop({L}, 1);
}}
"""

    snippet0 = f"""luaL_checktype({L}, {i}, LUA_TTABLE);
"""

    if decl:
        xxx += f"{const}{d}* {v} = malloc(sizeof({d})*{vl});"
        # after all args (array length) are read
        snippet1 = f"""
{xxx}
{writein}
"""
    elif check:
        writein = writein.replace('\n', '\n  ')
        snippet1 = f"""
if ({v} != NULL)
{{
  {writein}
}}
"""
    else:
        snippet1 = ''

    # after call
    if decl:
        snippet2 = f"""free({v});
"""
    else:
        snippet2 = ''

    return snippet0, snippet1, snippet2


def l2oarr_out(L, i, d, v, vl, c, _in=False):
    """snippet for converting a lua table to an orx array. (for `out` or `in,out` function params)"""

    assert(d.endswith('@') and vl is not None)
    d = d[:-1]

    # if c and d.endswith('*'):
    if c and (d == 'orxSTRING' or d.endswith('*')):
        const = 'const '
    else:
        const = ''

    convf0 = fn_l2o(d, False)
    convf1 = fn_o2l(d, False)

    if d in otdict.keys():
        frag0 = f"{convf1}({L}, &({v}[i]))"
    else:
        frag0 = f"{convf1}({L}, {v}[i])"

    # read in as c array
    if _in:
        frag1 = f"""
for (size_t i = 0; i < {vl}; i++)
{{
  lua_geti({L}, {i}, i+1);
  {v}[i] = {convf0}({L}, -1);
  lua_pop({L}, 1);
}}
"""
    else: # set to zero if out only
        frag1 = f"memset({v}, 0, sizeof({d})*{vl});"

    prep = f"""luaL_checktype({L}, {i}, LUA_TTABLE);
"""

    # length check & make c array on stack
    check = f"""
if ({vl} <= 0)
{{
  luaL_error({L}, "expect non-empty array-table!");
}}
{const}{d}* {v} = malloc(sizeof({d})*{vl});
{frag1}
"""

    # write back to lua table
    post = f"""
for (orxU32 i = 0; i < {vl}; i++)
{{
  {frag0};
  lua_seti({L}, {i}, i+1);
}}
free({v});
"""
    return prep, check, post


def o2larr(L, s, v, vl, check=True):
    """snippet for converting an orx array to a lua table"""

    assert(s.endswith('@') and vl is not None)
    s = s[:-1]

    convf = fn_o2l(s, False)

    if s in otdict.keys():
        x = f"{convf}({L}, &({v}[i]))"
    else:
        x = f"{convf}({L}, {v}[i])"

    if check:
        snippet = f"""
if ({vl} <= 0)
{{
  lua_pushnil({L});
}}
else
{{
  lua_createtable({L}, {vl}, 0);
  for (size_t i = 0; i < {vl}; i++)
  {{
    {x};
    lua_seti({L}, -2, i+1);
  }}
}}
"""
    else:
        snippet = f"""
lua_createtable({L}, {vl}, 0);
for (size_t i = 0; i < {vl}; i++)
{{
  {x};
  lua_seti({L}, -2, i+1);
}}
"""

    return snippet


def lstring2orx_chararr(L, i, v, vl):
    """copy the characters of a lua string to a char buf"""

    snippet = f"""{{
  const char* s = luaL_checkstring({L}, {i});
  if (strlen(s) > {vl})
  {{
    luaL_error({L}, "the provided string is longer than the char array!");
  }}
  strncpy({v}, s, {vl}-1);
}}
"""
    return snippet


#########################################################
# generate conversion functions for enums and utypes
#########################################################

def gen_conenum():
    """generate enum conversion functions"""

    hfn = "conenum.h"
    sfn = "conenum.c"

    hg = '__LORX_' + hfn.replace('.', '_').upper() + '__'

    header = """/*
** Strictly-typed Orx enums conversion functions
** (generated with {})
*/


#ifndef {}
#define {}

#include <lua.h>
#include <orx.h>
#include "helpers.h"

""".format(os.path.basename(__file__), hg, hg)
    src0 = """/*
** Strictly-typed Orx enums conversion functions
** (generated with {})
*/


#include <stdio.h>
#include <lua.h>
#include <lualib.h>
#include <lauxlib.h>
#include <string.h>
#include <orx.h>
#include "helpers.h"
#include "{}"

/*
 * Conversion functions for converting a lua enum string to an Orx enum variable (strictly typed)
 */
""".format(os.path.basename(__file__), hfn)

    src1 = """
/*
 * Conversion functions for converting an Orx enum variable to a lua enum string (strictly typed)
 */
"""

    elist = list(enums.keys())
    elist.sort()
    for oet in elist:
        fname0 = fn_l2oenum(oet)
        fname1 = fn_o2lenum(oet)

        tmp0 = f"LORX_API {oet} {fname0}(lua_State *L, int i)"
        tmp1 = f"LORX_API int {fname1}(lua_State *L, {oet} src)"

        header += tmp0 + ';\n'
        header += tmp1 + ';\n'

        src0 += tmp0 + '\n{' + lenumstr2orx('L', 'i', oet, '_retval').replace('\n', '\n  ')
        src1 += tmp1 + '\n{' + orx2lenumstr('L', oet, 'src').replace('\n', '\n  ')
        
        src0 += "\n  return _retval;\n}\n\n"
        src1 += "\n  return 1;\n}\n\n"

    header += f"\n#endif /* {hg} */"
    src = src0 + src1

    with open('src/' + hfn, 'w') as f:
        f.write(header)

    with open('src/' + sfn, 'w') as f:
        f.write(src)


def gen_conutype():
    """generate utype conversion functions"""

    hfn = "conutype.h"
    sfn = "conutype.c"

    hg = '__LORX_' + hfn.replace('.', '_').upper() + '__'

    # utype names
    utypes = list(otdict.keys()) + list(qtdict.keys())
    utypes.sort()

    header = """/*
** Orx struct types conversions
** (generated with {})
*/


#ifndef {}
#define {}

#include <lua.h>
#include <orx.h>
#include "helpers.h"

""".format(os.path.basename(__file__), hg, hg)

    src0 = """/*
** Orx struct types conversions
** (generated with {})
*/


#include <lua.h>
#include <lualib.h>
#include <lauxlib.h>
#include <string.h>
#include <orx.h>
#include "{}"

/*
 * Conversion functions for converting from Orx types (pointers) to lua userdata
 */
""".format(os.path.basename(__file__), hfn)
    src00 = """
/*
 * Conversion functions for converting from Orx types (pointers) to lua userdata (const)
 */
"""
    src1 = """
/*
 * Conversion functions for converting from lua userdata to Orx types (pointers)
 */
"""
    src10 = """
/*
 * Conversion functions for converting from lua userdata to Orx types (pointers) (const)
 */
"""
    src01 = """
/*
 * Conversion functions for converting from Orx types (structs) to lua userdata (non-const only)
 */
"""
    src11 = """
/*
 * Conversion functions for converting from lua userdata to Orx types (structs) (non-const only)
 */
"""

    for ut in utypes:
        if ut in qtdict.keys(): # pointer to userdata is only for opaque types
            fname0 = fn_o2lutype(ut, False)
            fname00 = fn_o2lutype(ut, True)
            tmp0 = f"LORX_API int {fname0}(lua_State *L, {ut}* src)"
            tmp00 = f"LORX_API int {fname00}(lua_State *L, const {ut}* src)"
            header += tmp0 + ';\n'
            header += tmp00 + ';\n'
            src0 += tmp0 + '\n{' + orx2luserdata('L', ut, 'src', False).replace('\n', '\n  ')
            src00 += tmp00 + '\n{' + orx2luserdata('L', ut, 'src', True).replace('\n', '\n  ')
            src0 += "\n  return 1;\n}\n\n"
            src00 += "\n  return 1;\n}\n\n"
        elif ut in otdict.keys(): # struct to userdata is only for open types
            fname01 = fn_o2lutype_struct(ut)
            fname11 = fn_l2outype_struct(ut)
            tmp01 = f"LORX_API int {fname01}(lua_State *L, const {ut} *src)"
            tmp11 = f"LORX_API {ut} {fname11}(lua_State *L, int i)"
            header += tmp01 + ';\n'
            header += tmp11 + ';\n'
            src01 += tmp01 + '\n{' + orx2luserdata_struct('L', ut, '*src').replace('\n', '\n  ')
            src11 += tmp11 + '\n{' + luserdata2orx_struct('L', 'i', ut, '_retval').replace('\n', '\n  ')
            src01 += "\n  return 1;\n}\n\n"
            src11 += "\n  return _retval;\n}\n\n"

        # userdata to pointer is for all types
        fname1 = fn_l2outype(ut, False)
        fname10 = fn_l2outype(ut, True)
        tmp1 = f"LORX_API {ut}* {fname1}(lua_State *L, int i)"
        tmp10 = f"LORX_API const {ut}* {fname10}(lua_State *L, int i)"
        header += tmp1 + ';\n'
        header += tmp10 + ';\n'
        src1 += tmp1 + '\n{' + luserdata2orx('L', 'i', ut, '_retval', False).replace('\n', '\n  ')
        src10 += tmp10 + '\n{' + luserdata2orx('L', 'i', ut, '_retval', True).replace('\n', '\n  ')
        src1 += "\n  return _retval;\n}\n\n"
        src10 += "\n  return _retval;\n}\n\n"

    header += f'\n#endif /* {hg} */'
    src = src0 + src00 + src01 + src1 + src10 + src11

    with open('src/' + hfn, 'w') as f:
        f.write(header)

    with open('src/' + sfn, 'w') as f:
        f.write(src)
