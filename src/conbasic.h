#ifndef __LORX_CONV_BASIC_H__
#define __LORX_CONV_BASIC_H__

#include <stddef.h>
#include <lua.h>
#include <orx.h>
#include "helpers.h"


/* 
** Conversion functions for converting between basic Orx types and Lua types 
** (orx structs are not included here)
** About basic type conversion:
** 1) all strings are const, including orxSTRING (a #define)
** 2) void pointers are distinguished in the sense of `const`
** 3) all other types are non-const (including orxHANDLE, a typedef)
** 4) NULL translates to nil and nil translates to NULL (this also applys to orx struct pointers)
*/

LORX_API int lorx_orxFLOAT_to_lnumber(lua_State *L, orxFLOAT src);
LORX_API int lorx_orxDOUBLE_to_lnumber(lua_State *L, orxDOUBLE src);
LORX_API int lorx_orxU64_to_linteger(lua_State *L, orxU64 src);
LORX_API int lorx_orxU32_to_linteger(lua_State *L, orxU32 src);
LORX_API int lorx_orxU16_to_linteger(lua_State *L, orxU16 src);
LORX_API int lorx_orxU8_to_linteger(lua_State *L, orxU8 src);
LORX_API int lorx_orxS64_to_linteger(lua_State *L, orxS64 src);
LORX_API int lorx_orxS32_to_linteger(lua_State *L, orxS32 src);
LORX_API int lorx_orxS16_to_linteger(lua_State *L, orxS16 src);
LORX_API int lorx_orxS8_to_linteger(lua_State *L, orxS8 src);
LORX_API int lorx_orxBOOL_to_lboolean(lua_State *L, orxBOOL src);
LORX_API int lorx_orxCHAR_to_lstring(lua_State *L, orxCHAR src);
LORX_API int lorx_char_to_lstring(lua_State *L, char src);
LORX_API int lorx_orxSTRINGID_to_linteger(lua_State *L, orxSTRINGID src);
LORX_API int lorx_orxENUM_to_linteger(lua_State *L, orxENUM src);
LORX_API int lorx_orxCHAR_ptr_to_lstring(lua_State *L, const orxCHAR* src);
LORX_API int lorx_char_ptr_to_lstring(lua_State *L, const char* src);
LORX_API int lorx_orxSTRING_to_lstring(lua_State *L, const orxSTRING src);
LORX_API orxFLOAT lorx_lnumber_to_orxFLOAT(lua_State *L, int i);
LORX_API orxDOUBLE lorx_lnumber_to_orxDOUBLE(lua_State *L, int i);
LORX_API orxU64 lorx_linteger_to_orxU64(lua_State *L, int i);
LORX_API orxU32 lorx_linteger_to_orxU32(lua_State *L, int i);
LORX_API orxU16 lorx_linteger_to_orxU16(lua_State *L, int i);
LORX_API orxU8 lorx_linteger_to_orxU8(lua_State *L, int i);
LORX_API orxS64 lorx_linteger_to_orxS64(lua_State *L, int i);
LORX_API orxS32 lorx_linteger_to_orxS32(lua_State *L, int i);
LORX_API orxS16 lorx_linteger_to_orxS16(lua_State *L, int i);
LORX_API orxS8 lorx_linteger_to_orxS8(lua_State *L, int i);
LORX_API orxSTRINGID lorx_linteger_to_orxSTRINGID(lua_State *L, int i);
LORX_API orxENUM lorx_linteger_to_orxENUM(lua_State *L, int i);
LORX_API orxBOOL lorx_lboolean_to_orxBOOL(lua_State *L, int i);
LORX_API orxCHAR lorx_lstring_to_orxCHAR(lua_State *L, int i);
LORX_API char lorx_lstring_to_char(lua_State *L, int i);
LORX_API const orxCHAR* lorx_lstring_to_orxCHAR_ptr(lua_State *L, int i);
LORX_API const char* lorx_lstring_to_char_ptr(lua_State *L, int i);
LORX_API const orxSTRING lorx_lstring_to_orxSTRING(lua_State *L, int i);
LORX_API orxHANDLE lorx_luserdata_to_orxHANDLE(lua_State *L, int i);
LORX_API int lorx_orxHANDLE_to_luserdata(lua_State *L, orxHANDLE src);
LORX_API void* lorx_luserdata_to_void_ptr(lua_State *L, int i);
LORX_API const void* lorx_luserdata_to_void_ptr_const(lua_State *L, int i);
LORX_API int lorx_void_ptr_to_luserdata(lua_State *L, void* src);
LORX_API int lorx_void_ptr_to_luserdata_const(lua_State *L, const void* src);

// orxSPTR and orxUPTR is available since 1.14 
#if __orxVERSION_MAJOR__ == 1 && __orxVERSION_MINOR__ >= 14
LORX_API int lorx_orxSPTR_to_linteger(lua_State *L, orxSPTR src);
LORX_API int lorx_orxUPTR_to_linteger(lua_State *L, orxUPTR src);
LORX_API orxSPTR lorx_linteger_to_orxSPTR(lua_State *L, int i);
LORX_API orxUPTR lorx_linteger_to_orxUPTR(lua_State *L, int i);
#endif /* __orxVERSION_MAJOR__ == 1 && __orxVERSION_MINOR__ >= 14 */


#endif /* __LORX_CONV_BASIC_H__ */