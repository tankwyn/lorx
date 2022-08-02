#include <assert.h>
#include <string.h>
#include <limits.h>
#include <lua.h>
#include <lualib.h>
#include <lauxlib.h>
#include <orx.h>
#include "helpers.h"
#include "conbasic.h"


/////////////////////////
// orx type limits
/////////////////////////

#define ORXU64_MAX ULLONG_MAX

#if defined(__orx64__)
  #define ORXU32_MAX UINT_MAX
#else
  #define ORXU32_MAX ULONG_MAX
#endif

#define ORXU16_MAX USHRT_MAX

#define ORXU8_MAX UCHAR_MAX

#define ORXS64_MIN LLONG_MIN
#define ORXS64_MAX LLONG_MAX

#if defined(__orx64__)
  #define ORXS32_MIN INT_MIN
  #define ORXS32_MAX INT_MAX
#else
  #define ORXS32_MIN LONG_MIN
  #define ORXS32_MAX LONG_MAX
#endif

#define ORXS16_MIN SHRT_MIN
#define ORXS16_MAX SHRT_MAX

#define ORXS8_MIN CHAR_MIN
#define ORXS8_MAX CHAR_MAX

#if defined(__orx64__)
  #define ORXSPTR_MIN ORXS64_MIN
  #define ORXSPTR_MAX ORXS64_MAX
#else
  #define ORXSPTR_MIN ORXS32_MIN
  #define ORXSPTR_MAX ORXS32_MAX
#endif

#if defined(__orx64__)
  #define ORXUPTR_MAX ORXU64_MAX
#else
  #define ORXUPTR_MAX ORXU32_MAX
#endif

#define ORXSTRINGID_MAX ORXU64_MAX
#define ORXENUM_MAX ORXU32_MAX


/////////////////////////////////////
// conversions
/////////////////////////////////////

LORX_API int lorx_orxFLOAT_to_lnumber(lua_State *L, orxFLOAT src)
{
  lua_pushnumber(L, (lua_Number)src);
  return 1;
}

LORX_API int lorx_orxDOUBLE_to_lnumber(lua_State *L, orxDOUBLE src)
{
  lua_pushnumber(L, (lua_Number)src);
  return 1;
}

LORX_API int lorx_orxU64_to_linteger(lua_State *L, orxU64 src)
{
  lua_pushinteger(L, (lua_Integer)src);
  return 1;
}

LORX_API int lorx_orxU32_to_linteger(lua_State *L, orxU32 src)
{
  lua_pushinteger(L, (lua_Integer)src);
  return 1;
}

LORX_API int lorx_orxU16_to_linteger(lua_State *L, orxU16 src)
{
  lua_pushinteger(L, (lua_Integer)src);
  return 1;
}

LORX_API int lorx_orxU8_to_linteger(lua_State *L, orxU8 src)
{
  lua_pushinteger(L, (lua_Integer)src);
  return 1;
}

LORX_API int lorx_orxS64_to_linteger(lua_State *L, orxS64 src)
{
  lua_pushinteger(L, (lua_Integer)src);
  return 1;
}

LORX_API int lorx_orxS32_to_linteger(lua_State *L, orxS32 src)
{
  lua_pushinteger(L, (lua_Integer)src);
  return 1;
}

LORX_API int lorx_orxS16_to_linteger(lua_State *L, orxS16 src)
{
  lua_pushinteger(L, (lua_Integer)src);
  return 1;
}

LORX_API int lorx_orxS8_to_linteger(lua_State *L, orxS8 src)
{
  lua_pushinteger(L, (lua_Integer)src);
  return 1;
}

LORX_API int lorx_orxBOOL_to_lboolean(lua_State *L, orxBOOL src)
{
  if (src == orxFALSE)
  {
    lua_pushboolean(L, 0);
  }
  else
  {
    lua_pushboolean(L, 1);
  }
  return 1;
}

LORX_API int lorx_orxCHAR_to_lstring(lua_State *L, orxCHAR src)
{
  char buf[2] = { src, '\0' };
  lua_pushstring(L, (const char*)buf);
  return 1;
}

LORX_API int lorx_char_to_lstring(lua_State *L, char src)
{
  char buf[2] = { src, '\0' };
  lua_pushstring(L, (const char*)buf);
  return 1;
}

LORX_API int lorx_orxSTRINGID_to_linteger(lua_State *L, orxSTRINGID src)
{
  lua_pushinteger(L, (lua_Integer)src);
  return 1;
}

LORX_API int lorx_orxENUM_to_linteger(lua_State *L, orxENUM src)
{
  lua_pushinteger(L, (lua_Integer)src);
  return 1;
}

LORX_API int lorx_orxCHAR_ptr_to_lstring(lua_State *L, const orxCHAR* src)
{
  lua_pushstring(L, (const char*)src);
  return 1;
}

LORX_API int lorx_char_ptr_to_lstring(lua_State *L, const char* src)
{
  lua_pushstring(L, (const char*)src);
  return 1;
}

LORX_API int lorx_orxSTRING_to_lstring(lua_State *L, const orxSTRING src)
{
  lua_pushstring(L, (const char*)src);
  return 1;
}


LORX_API orxFLOAT lorx_lnumber_to_orxFLOAT(lua_State *L, int i)
{
  orxFLOAT retval = luaL_checknumber(L, i);
  return retval;
}

LORX_API orxDOUBLE lorx_lnumber_to_orxDOUBLE(lua_State *L, int i)
{
  orxDOUBLE retval = luaL_checknumber(L, i);
  return retval;
}

LORX_API orxU64 lorx_linteger_to_orxU64(lua_State *L, int i)
{
  lua_Integer n = luaL_checkinteger(L, i);
  orxU64 retval = (orxU64)n;
  return retval;
}

LORX_API orxU32 lorx_linteger_to_orxU32(lua_State *L, int i)
{
  orxU32 retval;
  lua_Integer n = luaL_checkinteger(L, i);
  // check if a lua_Integer can be safely converted to an orx integer
  if (n > (lua_Integer)ORXU32_MAX)
  {
    luaL_error(L, "integer overflow when converting to orxU32!");
  }
  retval = (orxU32)n;
  return retval;
}

LORX_API orxU16 lorx_linteger_to_orxU16(lua_State *L, int i)
{
  orxU16 retval;
  lua_Integer n = luaL_checkinteger(L, i);
  // check if a lua_Integer can be safely converted to an orx integer
  if (n > ORXU16_MAX)
  {
    luaL_error(L, "integer overflow when converting to orxU16!");
  }
  retval = (orxU16)n;
  return retval;
}

LORX_API orxU8 lorx_linteger_to_orxU8(lua_State *L, int i)
{
  orxU8 retval;
  lua_Integer n = luaL_checkinteger(L, i);
  // check if a lua_Integer can be safely converted to an orx integer
  if (n > ORXU8_MAX)
  {
    luaL_error(L, "integer overflow when converting to orxU8!");
  }
  retval = (orxU8)n;
  return retval;
}

LORX_API orxS64 lorx_linteger_to_orxS64(lua_State *L, int i)
{
  lua_Integer n = luaL_checkinteger(L, i);
  orxS64 retval = (orxS64)n;
  return retval;
}

LORX_API orxS32 lorx_linteger_to_orxS32(lua_State *L, int i)
{
  orxS32 retval;
  lua_Integer n = luaL_checkinteger(L, i);
  // check if a lua_Integer can be safely converted to an orx integer
  if (n < ORXS32_MIN || n > ORXS32_MAX)
  {
    luaL_error(L, "integer underflow or overflow when converting to orxS32!");
  }
  retval = (orxS32)n;
  return retval;
}

LORX_API orxS16 lorx_linteger_to_orxS16(lua_State *L, int i)
{
  orxS16 retval;
  lua_Integer n = luaL_checkinteger(L, i);
  // check if a lua_Integer can be safely converted to an orx integer
  if (n < ORXS16_MIN || n > ORXS16_MAX)
  {
    luaL_error(L, "integer underflow or overflow when converting to orxS16!");
  }
  retval = (orxS16)n;
  return retval;
}

LORX_API orxS8 lorx_linteger_to_orxS8(lua_State *L, int i)
{
  orxS8 retval;
  lua_Integer n = luaL_checkinteger(L, i);
  // check if a lua_Integer can be safely converted to an orx integer
  if (n < ORXS8_MIN || n > ORXS8_MAX)
  {
    luaL_error(L, "integer underflow or overflow when converting to orxS8!");
  }
  retval = (orxS8)n;
  return retval;
}

LORX_API orxSTRINGID lorx_linteger_to_orxSTRINGID(lua_State *L, int i)
{
  lua_Integer n = luaL_checkinteger(L, i);
  orxSTRINGID retval = (orxSTRINGID)n;
  return retval;
}

LORX_API orxENUM lorx_linteger_to_orxENUM(lua_State *L, int i)
{
  orxENUM retval;
  lua_Integer n = luaL_checkinteger(L, i);
  // check if a lua_Integer can be safely converted to an orx integer
  if (n > (lua_Integer)ORXENUM_MAX)
  {
    luaL_error(L, "integer overflow when converting to orxENUM!");
  }
  retval = (orxENUM)n;
  return retval;
}

LORX_API orxBOOL lorx_lboolean_to_orxBOOL(lua_State *L, int i)
{
  orxBOOL retval;
  int b = lua_toboolean(L, i);
  if (b == 0)
  {
    retval = orxFALSE;
  }
  else
  {
    retval = orxTRUE;
  }
  return retval;
}

LORX_API orxCHAR lorx_lstring_to_orxCHAR(lua_State *L, int i)
{
  orxCHAR retval = '\0';
  const char* s = luaL_checkstring(L, i);
  if (strlen((s)) == 1)
  {
    retval = s[0];
  }
  else
  {
    luaL_error(L, "expect a single char, got a char sequence: %s!", s);
  }
  return retval;
}

LORX_API char lorx_lstring_to_char(lua_State *L, int i)
{
  orxCHAR retval = '\0';
  const char* s = luaL_checkstring(L, i);
  if (strlen(s) == 1)
  {
    retval = s[0];
  }
  else
  {
    luaL_error(L, "expect a single char, got a char sequence: %s!", s);
  }
  return retval;
}

LORX_API const orxCHAR* lorx_lstring_to_orxCHAR_ptr(lua_State *L, int i)
{
  // store lstring copy in orx
  const orxCHAR* retval = orxString_Store(luaL_checkstring(L, i));
  return retval;
}

LORX_API const char* lorx_lstring_to_char_ptr(lua_State *L, int i)
{
  // store lstring copy in orx
  const orxCHAR* retval = orxString_Store(luaL_checkstring(L, i));
  return retval;
}

LORX_API const orxSTRING lorx_lstring_to_orxSTRING(lua_State *L, int i)
{
  const char*s = luaL_checkstring(L, i);
  // store lstring in orx
  const orxSTRING retval = orxString_Store(s);
  return retval;
}


/* 
** void pointers and orxHANDLE
*/
LORX_API int lorx_void_ptr_to_luserdata(lua_State *L, void* src)
{
  if (src)
  {
    void** pp = lua_newuserdata(L, sizeof(void*));
    luaL_setmetatable(L, "lorx.void*");
    *pp = src;
  }
  else
  {
    lua_pushnil(L);
  }
  return 1;
}

LORX_API int lorx_void_ptr_to_luserdata_const(lua_State *L, const void* src)
{
  if (src)
  {
    const void **pp = lua_newuserdata(L, sizeof(void*));
    luaL_setmetatable(L, "lorx.void*#");
    *pp = src;
  }
  else
  {
    lua_pushnil(L);
  }
  return 1;
}

/*
** convert userdata to void*
** any non-const lorx userdata will be recognized as valid input!
*/
LORX_API void* lorx_luserdata_to_void_ptr(lua_State *L, int i)
{
  void* retval;
  if (lua_isnil(L, i))
  {
    retval = NULL;
  }
  else
  {
    const char* tname = lorx_get_lorx_userdata_tname(L, i);
    size_t len = strlen(tname);
    if (tname[len-1] == '#')
    {
      luaL_error(L, "only a non-const type can be auto casted to void*!");
    }
    void** pp = lua_touserdata(L, i);
    retval = *pp;
  }
  return retval;
}

/*
** convert userdata to const void*
** any const lorx userdata can be converted to a const void*
*/
LORX_API const void* lorx_luserdata_to_void_ptr_const(lua_State *L, int i)
{
  const void* retval;
  if (lua_isnil(L, i))
  {
    retval = NULL;
  }
  else
  {
    lorx_get_lorx_userdata_tname(L, i);
    const void** pp = lua_touserdata(L, i);
    retval = *pp;
  }
  return retval;
}

/*
** convert orxHANDLE to userdata
*/
LORX_API int lorx_orxHANDLE_to_luserdata(lua_State *L, orxHANDLE src)
{
  if (src)
  {
    orxHANDLE* pp = lua_newuserdata(L, sizeof(orxHANDLE));
    luaL_setmetatable(L, "lorx.orxHANDLE");
    *pp = src;
  }
  else
  {
    lua_pushnil(L);
  }
  return 1;
}

/*
** convert userdata to orxHANDLE
** note: no auto-cast, so it requires exactly an orxHANDLE
*/
LORX_API orxHANDLE lorx_luserdata_to_orxHANDLE(lua_State *L, int i)
{
  orxHANDLE* retval;
  if (lua_isnil(L, i))
  {
    retval = NULL;
  }
  else
  {
    orxHANDLE** pp = luaL_checkudata(L, i, "lorx.orxHANDLE");
    retval = *pp;
  }
  return retval;
}


#if __orxVERSION_MAJOR__ == 1 && __orxVERSION_MINOR__ >= 14

LORX_API orxSPTR lorx_linteger_to_orxSPTR(lua_State *L, int i)
{
  orxSPTR retval;
  lua_Integer n = luaL_checkinteger(L, i);
  // check if a lua_Integer can be safely converted to an orx integer
  if (n < ORXSPTR_MIN || n > ORXSPTR_MAX)
  {
    luaL_error(L, "integer underflow or overflow when converting to orxSPTR!");
  }
  retval = (orxSPTR)n;
  return retval;
}

LORX_API orxUPTR lorx_linteger_to_orxUPTR(lua_State *L, int i)
{
  orxUPTR retval;
  lua_Integer n = luaL_checkinteger(L, i);
  // check if a lua_Integer can be safely converted to an orx integer
  if (n > 0 && (orxU64)n > ORXUPTR_MAX)
  {
    luaL_error(L, "integer overflow when converting to orxUPTR!");
  }
  retval = (orxUPTR)n;
  return retval;
}

LORX_API int lorx_orxSPTR_to_linteger(lua_State *L, orxSPTR src)
{
  lua_pushinteger(L, (lua_Integer)src);
  return 1;
}

LORX_API int lorx_orxUPTR_to_linteger(lua_State *L, orxUPTR src)
{
  lua_pushinteger(L, (lua_Integer)src);
  return 1;
}

#endif /* __orxVERSION_MAJOR__ == 1 && __orxVERSION_MINOR__ >= 14 */
