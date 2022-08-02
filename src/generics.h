#ifndef __LORX_GENERIC_METHODS_H__
#define __LORX_GENERIC_METHODS_H__

#include <assert.h>
#include <lua.h>
#include <lualib.h>
#include <lauxlib.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>


/*
** converts any lorx userdata to a void pointer (can wash const modifier)
*/
static int l_lorx_generic_as_void(lua_State *L)
{
  if (!lua_isuserdata(L, 1))
  {
    luaL_error(L, "expect an userdata!");
  }

  void **p = lua_touserdata(L, 1);
  void **pp = lua_newuserdata(L, sizeof(void*));
  luaL_setmetatable(L, "lorx.void");
  *pp = *p;

  return 1;
}


/*
** get the orx type of an userdata (including the const suffix if const)
*/
static int l_lorx_generic_type(lua_State *L)
{
  if (!lua_isuserdata(L, 1))
  {
    luaL_error(L, "expect an userdata, got %s!", luaL_typename(L, 1));
  }

  if (lua_getmetatable(L, 1))
  {
    lua_pushstring(L, "__name");
    lua_rawget(L, -2);
    assert(lua_isstring(L, -1));
    const char* tname = lua_tostring(L, -1);
    size_t len = strlen(tname);
    int n = 0;
    for (int i = (int)len - 1; i > 0; i--)
    {
      if (tname[i] == '.')
      {
        n = i;
        break;
      }
    }
    lua_pushstring(L, tname+n+1);
  }
  else
  {
    luaL_error(L, "invalid userdata!");
  }

  return 1;
}

/*
** test if the underlying pointers of two userdata point to a sample block of memory
*/
static int l_lorx_generic_addr_equals(lua_State *L)
{
  if (!lua_isuserdata(L, 1) || !lua_isuserdata(L, 2))
  {
    luaL_error(L, "expect two userdatas! (got %s and %s)", luaL_typename(L, 1), luaL_typename(L, 2));
  }

  void **pp0 = lua_touserdata(L, 1);
  void **pp1 = lua_touserdata(L, 2);

  if (*pp0 == *pp1)
  {
    lua_pushboolean(L, 1);
  }
  else
  {
    lua_pushboolean(L, 0);
  }

  return 1;
}

/*
** get the c data address of an userdata
*/
static int l_lorx_generic_addr(lua_State *L)
{
  assert(lua_isuserdata(L, 1));
  void **p = lua_touserdata(L, 1);
  char buf[128];
  snprintf(buf, 128, "%p", *p);
  lua_pushstring(L, (const char*)buf);
  return 1;
}

static const struct luaL_Reg l_lorx_generic_m[] = {
  { "asVoid", l_lorx_generic_as_void },
  { "type", l_lorx_generic_type },
  { "aeq", l_lorx_generic_addr_equals },
  { "addr", l_lorx_generic_addr },
  { NULL, NULL }
};


#endif /* __LORX_GENERIC_METHODS_H__ */