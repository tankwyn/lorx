# -*- encoding: utf-8 -*-

# map basic orx types to lua types
typemap = {
    "orxFLOAT" : "number",
    "orxDOUBLE" : "number",
    "orxU64" : "integer",
    "orxU32" : "integer",
    "orxU16" : "integer",
    "orxU8" : "integer",
    "orxS64" : "integer",
    "orxS32" : "integer",
    "orxS16" : "integer",
    "orxS8" : "integer",
    "orxBOOL" : "boolean", # u32
    "orxCHAR" : "string",
    "char" : "string",
    "orxCHAR*" : "string",
    "char*" : "string",
    "orxHANDLE" : "userdata",
    "void*" : "userdata",

    # available since 1.14
    "orxSPTR" : "integer", # s32/s64
    "orxUPTR" : "integer", # u32/u64

    "orxSTRINGID" : "integer", #u64
    "orxENUM" : "integer", # u32
    "orxSTRING" : "string",
}

# map lua types to basic orx types
typemaprev = {}
for k, v in typemap.items():
    if v in typemaprev.keys():
        typemaprev[v].append(k)
    else:
        typemaprev[v] = [k,]
