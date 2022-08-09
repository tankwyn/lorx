# -*- encoding: utf-8 -*-

import os
import collections

from gen.orxparse import enums, flist, doxygen, otdict, qtdict
from gen.typemapping import typemap
from gen.conversion import fn_l2o, fn_o2l, l2oarr_in, l2oarr_out, o2larr
from gen.dochelper import *
from gen.verbose import *
from gen.cfg import apdict, halfmovedict


def _check_movable_param(f, p):
    """check whether a function param can be moved to the left side in the returning list"""

    doxparam = doxygen[f["name"]][0]
    if doxparam[p['name']]["direction"] == 'in,out':
        is_in = True
        is_out = True
    elif doxparam[p['name']]["direction"] == 'out':
        is_in = False
        is_out = True
    else:
        is_in = True
        is_out = False

    movable = False

    # note: void* and orxHANDLE are not movable
    
    if p["type"].endswith('*'): # pointers
        # out and in,out basic type pointers are movable 
        if p['type'][:-1] in typemap.keys() and is_out:
            movable = True
        # out and in,out enum pointers are movable
        elif p["type"][:-1] in enums.keys() and is_out:
            movable = True
        # out open utype pointers are movable
        elif p['type'][:-1] in otdict.keys() and (not is_in and is_out):
            movable = True
        # opaque type pointers are always not movable
        elif p['type'][:-1] in qtdict.keys():
            movable = False
        else:
            movable = False
    elif p['type'].endswith('@'): # arrays
        if not is_in and is_out:
            movable = True

    return movable, is_in, is_out


def _process_movable_pointer_param(p, i, _in):
    """process movable basic types, enums and open utypes (out only for utypes)"""

    assert(p['type'].endswith('*') and p["name"].startswith('_p') and i is not None)

    # param type
    t = p["type"]
    t0 = p['type'][:-1]

    # var name
    n = '_' + p["name"][2:] # remove 'p'

    if p['const']:
        const = 'const '
    else:
        const = ''

    # prep for orx call inputs
    if _in:
        # conversion func name to get a struct
        inconvf = fn_l2o(t0, p['const'])
        # get a struct
        prep = f"{const}{t0} {n} = {inconvf}(L, {i});\n"
    else:
        prep = f"{const}{t0} {n};\nmemset(&{n}, 0, sizeof({t0}));\n"

    # processing prepared variables
    proc = ''

    # post-processing (write back to lua)
    outconvf = fn_o2l(t0, p['const'])
    if t0 in otdict.keys():
        post = f"{outconvf}(L, &{n});\n"
    else:
        post = f"{outconvf}(L, {n});\n"

    # arg to pass to orx call
    arg = '&' + n

    return prep, proc, post, arg


def _get_array_len(f, p):
    """get array param's length"""

    alen = None
    if f["name"] in apdict.keys() and p["name"] in apdict[f["name"]].keys():
        tmp = apdict[f["name"]][p["name"]]
        if tmp:
            alen = tmp[0]
    else:
        verbose >= 1 and print("warning: function {} or its param {} is missing from apdict!".format(f["name"], p["name"]))
    return alen


def _process_movable_array_param(p, i, _in, al):
    """process movable array param"""

    assert(p['type'].endswith('@') and p["name"].startswith('_a') and al is not None and i is not None)
    
    # array var name
    n = p["name"]
    t = p['type']
    t0 = p['type'][:-1]

    if p['const']:
        const = 'const '
    else:
        const = ''

    if _in:
        # get a c array filled from the lua table of function param
        r0, r1, r2 = l2oarr_out('L', str(i), t, n, al, p['const'], _in=_in)
    else:
        # make a new array and a new table and store the elements of the c array in it after c call
        r0 = f"""{const}{t0}* {n} = malloc(sizeof({t0})*{al});
memset({n}, 0, sizeof({t0})*{al});
"""
        r1 = ''
        r2 = o2larr('L', p['type'], p['name'], al) + "free({});\n".format(p['name'])

    # prep for orx call inputs
    prep = r0

    # processing prepared variables
    proc = r1

    # post-processing (write array back to lua table)
    post = r2

    # arg to pass to orx call
    arg = n

    return prep, proc, post, arg


def _ccall_snippet(f, argsstr, retval):
    """generate orx api call snippet"""

    if f["return"]["type"] == 'void' or retval is None:
        lcall = f"""{f["name"]}({argsstr});
"""
        n = 0
    else:
        if f["return"]["const"]:
            rt = "const " + f["return"]["type"]
        else:
            rt = f["return"]["type"]
        lcall = f"""{rt} {retval} = {f["name"]}({argsstr});
"""
        n = 1
    return lcall, n


movedret_fnames = None
def gen_bindings():
    """generate bindings to all parsed orx apis, and put them in a single header file"""

    global movedret_fnames
    if movedret_fnames is None:
        movedret_fnames = []

    hfn = "bindings.h"
    sfn = "bindings.c"

    hg = '__LORX_' + hfn.replace('.', '_').upper() + '__'

    bind_map = collections.OrderedDict()

    header = """/*
** Lua function bindings to Orx C API
** (generated with {})
*/


#ifndef {}
#define {}

#include <lua.h>
#include <orx.h>
#include "helpers.h"

""".format(os.path.basename(__file__), hg, hg)

    src = """/*
** Lua function bindings to Orx C API
** (generated with {})
*/


#include <lua.h>
#include <lualib.h>
#include <lauxlib.h>
#include <string.h>
#include <orx.h>
#include "conbasic.h"
#include "conenum.h"
#include "conenumex.h"
#include "conutype.h"
#include "{}"

""".format(os.path.basename(__file__), hfn)

    hmlist = []

    for f in flist:
        lname = f["name"]
        if lname.startswith('orx'):
            lname = lname[3:]

        lprep = ""
        lcheck = ""
        lpost = ""

        params = []
        returns = []

        args = []
        lpn = 1
        mpn = 0
        discarded = False
        for i, p in enumerate(f["params"]):
            pname = p['name']
            ptype = p['type']

            if p["type"] == '$VARARGS': # ignore varargs (these are all string stuff)
                continue

            movable, is_in, _ = _check_movable_param(f, p)
            if movable:
                if is_in:
                    lpn += 1 # increase lua args count

                if p['type'].endswith('*'):
                    prep, proc, post, arg = _process_movable_pointer_param(p, lpn, is_in)
                elif p['type'].endswith('@'):
                    if ptype[:-1] == 'orxENUM':
                        verbose >= 1 and print(f'warning: encuntered a super enum array in {lname}, fallback to u32 integer array!')
                    al = _get_array_len(f, p)
                    assert(al is not None)
                    prep, proc, post, arg = _process_movable_array_param(p, lpn, is_in, al)
                else:
                    raise Exception("unexpected movable type: {}".format(p['type']))

                # discard the return of the first movable param that has the same type with the C return value
                if not discarded and f['name'] in halfmovedict.keys() and p['type'] == f['return']['type'] and i == halfmovedict[f['name']]:
                    verbose >= 2 and print("info: {} of {} is movable, but it will not be moved to the return list since the original return value points to it!".format(pname, f['name']))
                    post = ''
                    hmlist.append(f['name'])
                else:
                    verbose >= 2 and print("info: {} of {} have been moved from arg list to the return list!".format(pname, f['name']))

                    if f['name'] not in movedret_fnames:
                        movedret_fnames.append(f['name'])

                    if p['type'].endswith('*'):
                        tmp = p['type'][:-1]
                    else:
                        tmp = p['type']
                    returns.append({
                        'type' : doc_trans_type(tmp, p['const']),
                        # 'const' : doc_trans_const(p['const']),
                        'description' : doc_trans_description(doxygen[f['name']][0][pname]['description'])
                    })
                    del tmp

                    mpn += 1 # increase moved params count
            else:
                if ptype.endswith('@'):
                    al = _get_array_len(f, p)
                    if ptype[:-1] == 'orxENUM':
                        verbose >= 1 and print(f'warning: encuntered a super enum array in {lname}, fallback to u32 integer array!')
                    # al can be None here (unspecified array length, copy all elements)
                    prep, proc, post = l2oarr_in('L', str(lpn), ptype, pname, al, p['const'])
                    arg = pname
                else:
                    if p['const']:
                        const = 'const '
                    else:
                        const = ''

                    if ptype == 'orxENUM':
                        if f['params'][i-1]['type'] == 'orxINPUT_TYPE':
                            et = f['params'][i-1]['name']
                            prep = f"{const}{ptype} {pname} = lorx_lenumstr_to_input_orxENUM(L, {lpn}, {et});\n"
                        elif f['params'][i-1]['type'] == 'orxEVENT_TYPE':
                            et = f['params'][i-1]['name']
                            prep = f"{const}{ptype} {pname} = lorx_lenumstr_to_event_orxENUM(L, {lpn}, {et});\n"
                        else:
                            verbose >= 1 and print(f'warning: encountered a super enum in {lname}, and there is no pre-defined conversion for it, fallback to u32 integer!')
                            inconvf = fn_l2o(ptype, p['const'])
                            prep = f"{const}{ptype} {pname} = {inconvf}(L, {lpn});\n"
                    else:
                        inconvf = fn_l2o(ptype, p['const'])
                        prep = f"{const}{ptype} {pname} = {inconvf}(L, {lpn});\n"

                    proc = ''
                    post = ''
                    arg = pname

                params.append({
                    'name' : doc_remove_vprefix(p['name']).lower(),
                    'type' : doc_trans_type(p['type'], p['const']),
                    'dir' : doc_simple_inout(doxygen[f['name']][0][pname]['direction']),
                    'description' : doc_trans_description(doxygen[f['name']][0][pname]['description'])
                })

                lpn += 1 # increase lua args count

            lprep += prep
            lcheck += proc
            lpost += post
            args.append(arg)
            
        # call orx api with all prepared args
        argliststr = ', '.join(args)
        lcall, n = _ccall_snippet(f, argliststr, '_retval')

        if n == 1:
            if f['return']['type'].endswith('*') and f['return']['type'][:-1] in otdict.keys():
                if not f['name'] in halfmovedict.keys():
                    verbose >= 1 and print('warning: encountered an open struct pointer return ({}), return duplicated value instead!'.format(f['name']))
                outconvf = fn_o2l(f['return']['type'][:-1], f['return']['const'])
                lpost = f"{outconvf}(L, _retval);\n" + lpost
            elif f['return']['type'] in otdict.keys(): # pass address
                outconvf = fn_o2l(f['return']['type'], f['return']['const'])
                lpost = f"{outconvf}(L, &_retval);\n" + lpost
            else:
                outconvf = fn_o2l(f['return']['type'], f['return']['const'])
                lpost = f"{outconvf}(L, _retval);\n" + lpost

            returns.insert(0, {
                'type' : doc_trans_type(f['return']['type'], f['return']['const']),
                # 'const' : doc_trans_const(f['return']['const']),
                'description' : doc_trans_description(doxygen[f['name']][1])
            })
        else:
            assert(n == 0)
            lprep = "(void)L;\n" + lprep
        
        lpost += f"return {n+mpn};"

        # indent
        lprep = lprep.replace('\n', '\n  ')
        lcheck = lcheck.replace('\n', '\n  ')
        lcall = lcall.replace('\n', '\n  ')
        lpost = lpost.replace('\n', '\n  ')

        header += f"""LORX_API int l_{lname}(lua_State *L);
"""
        # build the binding function
        src += f"""
LORX_API int l_{lname}(lua_State *L)
{{
  /* get arguments */
  {lprep}
  /* arguments processing & checks */
  {lcheck}
  /* call orx function */
  {lcall}
  /* post processing */
  {lpost}
}}

"""
        bind_map[f["name"]] = {
            'name' : lname,
            'description' : f['description'],
            'params' : params,
            'returns' : returns,
            'hfile' : f['file'],
            'hln' : f['line'],
            'csig' : doc_simple_csig(f['signature']),
            # 'csig' : re.sub(r'\s+', ' ', f['signature'])
        }

    # check
    tmp = [x for x in halfmovedict.keys() if x not in hmlist]
    if len(tmp) > 0:
        if verbose >= 1:
            print('warning: some functions in `halfmovedict` are not used:')
            [print(x) for x in tmp]
    del tmp

    header += f"""
#endif /* {hg} */
"""

    with open('src/' + hfn, 'w', newline='\n') as f:
        f.write(header)
    with open('src/' + sfn, 'w', newline='\n') as f:
        f.write(src)

    return bind_map