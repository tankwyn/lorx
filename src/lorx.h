#ifndef __LORX_H__
#define __LORX_H__

/*
 * Main module: lorx
 */

#include <lua.h>
#include <lualib.h>
#include <lauxlib.h>
#include "helpers.h"

// Lorx version
#define LORX_VERSION_MAJOR 0
#define LORX_VERSION_MINOR 1
#define LORX_VERSION_PATCH 0


LORX_API int luaopen_lorx(lua_State *L);

#endif /* __LORX_H__ */