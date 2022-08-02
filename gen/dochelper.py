# -*- encoding: utf-8 -*-

import os
import re

from gen.orxparse import enums, otdict, qtdict, ignorable_words, mdefs
from gen.typemapping import typemap


def doc_remove_vprefix(v):
    """remove type prefixes in a variable name"""

    for i in range(len(v)):
        if v[i].isupper():
            break
    return v[i:]


def doc_trans_const(const):
    if const:
        return 'yes'
    else:
        return 'no'


doc_transbook = { 
    'orxFLOAT' : 'number',
    'orxDOUBLE' : 'number',
    'orxU64' : 'integer (u64)',
    'orxU32' : 'integer (u32)',
    'orxU16' : 'intger (u16)',
    'orxU8' : 'integer (u8)',
    'orxS64' : 'integer (s64)',
    'orxS32' : 'integer (s32)',
    'orxS16' : 'integer (s16)',
    'orxS8' : 'integer (s8)',
    'orxBOOL' : 'boolean',
    'orxCHAR' : 'string (single char)',
    'char' : 'string (single char)',
    'orxCHAR*' : 'string',
    'char*' : 'string',
    'orxSTRING' : 'string',
    'orxSPTR' : 'integer (s32/s64)',
    'orxUPTR' : 'integer (u32/u64)',
    'orxSTRINGID' : 'integer (u64)',
    'orxENUM' : 'integer (enum)',
    'orxNULL' : 'nil',
    'null' : 'nil',
    'NULL' : 'nil',
    'orxSTRING_EMPTY' : 'empty string',
    'orxSTRING_TRUE' : '"true"',
    'orxSTRING_FALSE' : '"false"',
    'orxFALSE' : 'false',
    'orxTRUE' : 'true',
    'orxFLOAT0' : '0.0',
    'orxFLOAT1' : '1.0',
    'orxDOUBLE0' : '0.0',
    'orxDOUBLE1' : '1.0',
    'orxVECTOR_X' : '(1.0, 0.0, 0.0)',
    'orxVECTOR_Y' : '(0.0, 1.0, 0.0)',
    'orxVECTOR_Z' : '(1.0, 0.0, 1.0)',
    'orxVECTOR_0' : '(0.0, 0.0, 1.0)',
    'orxVECTOR_1' : '(1.0, 1.0, 1.0)',
    'orxSTATUS_SUCCESS' : 'success',
    'orxSTATUS_FAILURE' : 'failure',
}
def doc_trans_description(d):
    """replace some words in descriptions"""

    for k,v in doc_transbook.items():
        d = d.replace(k + ' ', v + ' ')
        d = re.sub(f'{k}$', f'{v}', d)
    return d


def doc_trans_type(ot, const):
    """convert an orx type to a description string fit for lua"""

    if ot in ('void*', 'orxHANDLE'):
        if ot == 'void*' and const:
            return ot + '#'
        else:
            return ot
    elif ot == 'orxENUM':
        return 'string'
    elif ot in typemap.keys():
        return typemap[ot]
    elif ot in enums.keys():
        return f'{ot}'
    elif ot in otdict.keys() or ot in qtdict.keys():
        return ot
    elif ot.endswith('*'):
        assert(not ot[:-1].endswith('*'))
        assert(ot[:-1] in otdict.keys() or ot[:-1] in qtdict.keys())
        if const:
            return ot[:-1] + '#'
        else:
            return ot[:-1]
    elif ot.endswith('@'):
        if ot in ('char@', 'orxCHAR@'):
            return 'string (length-limited)'
        else:
            return 'table of {}'.format(doc_trans_type(ot[:-1], const))
    else:
        raise Exception(f'unexpcted type {ot}')


def doc_simple_inout(inout):
    if 'out' in inout:
        return " [in,out]"
    else:
        return ''


def doc_simple_csig(csig):
    csig = re.sub(r'\s+', ' ', csig)
    for mod in ignorable_words:
        csig = csig.replace(mod, '')
    return csig


def doc_escapemd(s):
    s = s.replace('\\', '\\\\').replace('#', '\\#').replace('*', '\\*').replace('---', '\\-\\-\\-').replace('>', '\\>').replace('[', '\\[').replace(']', '\\]').replace('(', '\\(').replace(')', '\\)')
    return s


utypes = None
def doc_autolink(s, path):
    """make possible links to types, enums ..."""

    global utypes
    if utypes is None:
        utypes = list(otdict.keys()) + list(qtdict.keys())

    # link to utypes
    rpath = os.path.relpath('doc/docs/types', os.path.dirname(path))
    rpath = rpath.replace('\\', '/')
    for t in utypes:
        # replace occurrences in sentence
        s = s.replace(t + ' ', f'[{t}]({rpath}/{t}.md) ')
        # replace occurrences in sentence (const)
        s = s.replace(t + '\#', f'[{t}\#]({rpath}/{t}.md)')
        # replace tail occurrence
        s = re.sub(f'{t}$', f'[{t}]({rpath}/{t}.md) ', s)
    del rpath, t

    # link to enums
    rpath = os.path.relpath('doc/docs', os.path.dirname(path))
    rpath = rpath.replace('\\', '/')
    for et in enums.keys():
        # replace occurrences in sentence
        s = s.replace(et + ' ', f'[{et}]({rpath}/enums.md#{et.lower()}) ')
        # replace tail occurrence
        s = re.sub(f'{et}$', f'[{et}]({rpath}/enums.md#{et.lower()}) ', s)
    del rpath, et

    # link to constants
    rpath = os.path.relpath('doc/docs/modules', os.path.dirname(path))
    rpath = rpath.replace('\\', '/')
    for d in mdefs.keys():
        # replace occurrences in sentence
        s = s.replace(d + ' ', f'[{d}]({rpath}/constants.md#{d.lower()}) ')
        # replace tail occurrence
        s = re.sub(f'{d}$', f'[{d}]({rpath}/constants.md#{d.lower()}) ', s)
    del rpath, d

    # link to callbacks
    rpath = os.path.relpath('doc/docs', os.path.dirname(path))
    rpath = rpath.replace('\\', '/')
    for d in ('lorxLOG_CALLBACK', 'lorxCLOCK_CALLBACK', 'lorxINIT_CALLBACK', 'lorxUPDATE_CALLBACK', 'lorxEXIT_CALLBACK', 'lorxCFGSAVE_CALLBACK', 'lorxCFGCLEAR_CALLBACK'):
        # replace occurrences in sentence
        s = s.replace(d + ' ', f'[{d}]({rpath}/callbacks.md#{d.lower()}) ')
        # replace tail occurrence
        s = re.sub(f'{d}$', f'[{d}]({rpath}/callbacks.md#{d.lower()}) ', s)
    del rpath, d

    return s


def emmy_process_type(t, dsp):
    """process a type strings and description in docs to make them valid for using in emmy"""

    # discard const signs
    if t.endswith('#'):
        dsp = '(const) ' + dsp
        t = t.replace('#', '')
    # 'table of' -> '[]'
    if t.startswith('table of'):
        t = t.split(maxsplit=3)[-1].strip() + '[]'
    # 'void*' -> voidptr (* is not valid in lua names)
    if t == 'void*':
        t = 'voidptr'
    # move (.*) to dsp
    res = re.findall(r'\(.*?\)', t)
    if len(res) > 0:
        for x in res:
            t = t.replace(x, '')
        dsp = '; '.join([x[1:-1] for x in res]) + dsp
    
    return t, dsp


def emmy_process_param_name(_pname):
    """process a function param name to make it valid for using in emmy"""

    if _pname.startswith('[') and _pname.endswith(']'):
        pname = '_' + _pname[1:-1]
    elif _pname == '...':
        pname = '...'
    else:
        pname = '_' + _pname
    return pname

