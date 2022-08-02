#ifndef __LORX_HELPERS_H__
#define __LORX_HELPERS_H__

#include <stdarg.h>
#include <assert.h>
#include <string.h>
#include <orx.h>
#include <lua.h>
#include <lualib.h>
#include <lauxlib.h>
#include "generics.h"


#if defined(__amd64__) || defined(__amd64) || defined(__x86_64__) || defined(__x86_64) || defined(_M_X64) || defined(_M_AMD64)
  #define _LORX_AMD64_
#elif defined(i386) || defined(__i386) || defined(__i386__) || defined(__i386__) || defined(_M_IX86)
  #define _LORX_X86_
#elif defined(__arm__) || defined(_M_ARM) || defined(_M_ARMT)
  #define _LORX_ARM_
#endif

#if defined(_WIN32) || defined(WIN32)
  #define _LORX_WIN_
#elif defined(linux) || defined(__linux__)
  #define _LORX_LINUX_
#endif

#if defined(_LORX_WIN_)
  #if defined(LORX_BUILD_DLL)
    #define LORX_API __declspec(dllexport)
  #else
    #define LORX_API __declspec(dllimport)
  #endif
#else
  #define LORX_API extern
#endif

/*
** check if the object at the specified index is a valid lorx userdata and return its tname
*/
static const char* lorx_get_lorx_userdata_tname(lua_State *L, int i)
{
  assert(lua_isuserdata(L, i));

  // has __name ?
  lua_pushliteral(L, "__name");
  lua_gettable(L, i);
  if (lua_isnil(L, -1))
  {
    luaL_error(L, "expect a full userdata with '__name'!");
  }

  // __name starts with 'lorx.' ?
  const char* tname = lua_tostring(L, -1);
  size_t tnamelen = strlen(tname);
  if (tnamelen < 6 || !(tname[0] == 'l' && tname[1] == 'o' && tname[2] == 'r' && tname[3] == 'x' && tname[4] == '.'))
  {
    luaL_error(L, "expect a lorx userdata");
  }

  return tname;
}

static int lorx_package_preload(lua_State *L, lua_CFunction f, const char *name)
{
  lua_getglobal(L, "package");
  lua_getfield(L, -1, "preload");
  lua_pushcfunction(L, f);
  lua_setfield(L, -2, name);
  lua_pop(L, 2);
  return 0;
}

static int lorx_insistglobal(lua_State *L, const char* name)
{
  lua_getglobal(L, name);

  if (!lua_istable(L, -1))
  {
    lua_pop(L, 1);
    lua_newtable(L);
    lua_pushvalue(L, -1);
    lua_setglobal(L, name);
  }

  return 0;
}

static int lorx_register_type(lua_State *L, const char* tname, int n, ...)
{
  // make metatable
  assert(luaL_newmetatable(L, tname));

  // mt.__index = mt
  lua_pushliteral(L, "__index");
  lua_pushvalue(L, -2);
  lua_rawset(L, -3);

  // set generic methods
  luaL_setfuncs(L, l_lorx_generic_m, 0);

  // set additional methods/meta-functions
  va_list fs;
  va_start(fs, n);
  const luaL_Reg *f;
  for (int i = 0; i < n; i++)
  {
    f = va_arg(fs, const luaL_Reg*);
    luaL_setfuncs(L, f, 0);
  }
  va_end(fs);

  // pop mt
  lua_pop(L, 1);

  return 0;
}


static int lorx_register_submodule(lua_State *L, const char* name, const luaL_Reg* funcs)
{
  lorx_insistglobal(L, "lorx"); // get lorx
  lua_newtable(L); // lorx.<module>
  luaL_setfuncs(L, funcs, 0); // attach all functions
  lua_pushvalue(L, -1); // dup table
  lua_setfield(L, -3, name); // lorx.sudmodule = table
  lua_remove(L, -2); // lorx

  return 1;
}


static void lorx_break()
{
// MSVC
#if defined(_MSC_VER)
  __debugbreak();
// Clang
#elif defined( __clang__ )
  #if __has_builtin(__builtin_debugtrap)
    #define DEBUG_BREAK __builtin_debugtrap()
  #else
    #define DEBUG_BREAK __builtin_trap()
  #endif
// GCC
#elif defined(__GNUC__)
  __builtin_trap();
#endif /* _MSC_VER */
  return;
}


#define LORX_ERROR(e, ...) \
do \
{ \
  fprintf(stderr, "Error occurred at %s:%d, in function %s:\n", __FILE__, __LINE__, __FUNCTION__); \
  fprintf(stderr, e, ##__VA_ARGS__); \
  lorx_break(); \
} while(0);


#endif /* __LORX_HELPERS_H__ */