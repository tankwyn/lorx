#include "lua.h"
#include "lualib.h"
#include "lauxlib.h"
#include "conbasic.h"
#include "helpers.h"


#if defined(_LORX_WIN_)
#define DLL_EXPORT __declspec(dllexport)
#else
#define DLL_EXPORT
#endif

static int l_foo(lua_State *L)
{
  lua_pushstring(L, "foo!");
  return 1;
}

static int l_bar(lua_State *L)
{
  lorx_orxFLOAT_to_lnumber(L, 0.1);
  return 1;
}

static const luaL_Reg mylib[] =
{
  { "foo", l_foo },
  { "bar", l_bar },
  { NULL, NULL },
};

extern DLL_EXPORT int luaopen_mylib(lua_State *L)
{
  luaL_newlib(L, mylib);
  return 1;
}


//// notes on building:

// build on win:
// cl.exe /DLORX_BUILD_DLL /LD /I..\..\src /ID:\workspace\gamedev\lua-5.3.6\msvc64d /ID:\workspace\gamedev\orx-1.13-dev\dev-vs2022-64\include mylib.c /link /DLL /libpath:..\..\bin lorx.lib /libpath:D:\workspace\gamedev\lua-5.3.6\msvc64d lua53.lib /libpath:D:\workspace\gamedev\orx-1.13-dev\dev-vs2022-64\lib orx.lib

// build with mingw:
// gcc -fPIC -shared mylib.c -o mylib.dll -I..\src -ID:\\workspace\gamedev\orx-1.13-mingw\dev-mingw-64\include -ID:\\workspace\gamedev\lua-5.3.6\src -L..\bin -lorx -llorx -llua53

// build on linux:
// gcc -fPIC -shared mylib.c -o mylib.so -I../../src -I${HOME}/workspace/orx-1.13-dev/dev-linux64/include -I${HOME}/workspace/lua-5.3.6/src