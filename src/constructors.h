/*
** Constructors for open data structures (generated with oaccess.py)
*/


#ifndef __LORX_CONSTRUCTORS_H__
#define __LORX_CONSTRUCTORS_H__

#include <lua.h>
#include <lualib.h>
#include <lauxlib.h>
#include <orx.h>
#include "conbasic.h"
#include "conenum.h"
#include "conutype.h"

static int l_lorx_orxAABOX_create(lua_State *L)
{
  orxAABOX** pself = lua_newuserdata(L, sizeof(orxAABOX*)+sizeof(orxAABOX));
  orxAABOX* self = (orxAABOX*)(pself + 1);
  luaL_setmetatable(L, "lorx.orxAABOX");
  *pself = self;
  self->vTL = lorx_luserdata_to_orxVECTOR_struct(L, 1);
  self->vBR = lorx_luserdata_to_orxVECTOR_struct(L, 2);
  
  return 1;
}

static int l_lorx_orxANIM_CUSTOM_EVENT_create(lua_State *L)
{
  orxANIM_CUSTOM_EVENT** pself = lua_newuserdata(L, sizeof(orxANIM_CUSTOM_EVENT*)+sizeof(orxANIM_CUSTOM_EVENT));
  orxANIM_CUSTOM_EVENT* self = (orxANIM_CUSTOM_EVENT*)(pself + 1);
  luaL_setmetatable(L, "lorx.orxANIM_CUSTOM_EVENT");
  *pself = self;
  
  return 1;
}

static int l_lorx_orxCHARACTER_GLYPH_create(lua_State *L)
{
  orxCHARACTER_GLYPH** pself = lua_newuserdata(L, sizeof(orxCHARACTER_GLYPH*)+sizeof(orxCHARACTER_GLYPH));
  orxCHARACTER_GLYPH* self = (orxCHARACTER_GLYPH*)(pself + 1);
  luaL_setmetatable(L, "lorx.orxCHARACTER_GLYPH");
  *pself = self;
  self->fX = lorx_lnumber_to_orxFLOAT(L, 1);
  self->fY = lorx_lnumber_to_orxFLOAT(L, 2);
  self->fWidth = lorx_lnumber_to_orxFLOAT(L, 3);
  
  return 1;
}

static int l_lorx_orxCOLOR_create(lua_State *L)
{
  orxCOLOR** pself = lua_newuserdata(L, sizeof(orxCOLOR*)+sizeof(orxCOLOR));
  orxCOLOR* self = (orxCOLOR*)(pself + 1);
  luaL_setmetatable(L, "lorx.orxCOLOR");
  *pself = self;
  self->vRGB = lorx_luserdata_to_orxVECTOR_struct(L, 1);
  self->fAlpha = lorx_lnumber_to_orxFLOAT(L, 2);
  
  return 1;
}

static int l_lorx_orxCOMMAND_VAR_create(lua_State *L)
{
  orxCOMMAND_VAR** pself = lua_newuserdata(L, sizeof(orxCOMMAND_VAR*)+sizeof(orxCOMMAND_VAR));
  orxCOMMAND_VAR* self = (orxCOMMAND_VAR*)(pself + 1);
  luaL_setmetatable(L, "lorx.orxCOMMAND_VAR");
  *pself = self;
  
  return 1;
}

static int l_lorx_orxDISPLAY_TRANSFORM_create(lua_State *L)
{
  orxDISPLAY_TRANSFORM** pself = lua_newuserdata(L, sizeof(orxDISPLAY_TRANSFORM*)+sizeof(orxDISPLAY_TRANSFORM));
  orxDISPLAY_TRANSFORM* self = (orxDISPLAY_TRANSFORM*)(pself + 1);
  luaL_setmetatable(L, "lorx.orxDISPLAY_TRANSFORM");
  *pself = self;
  self->fSrcX = lorx_lnumber_to_orxFLOAT(L, 1);
  self->fSrcY = lorx_lnumber_to_orxFLOAT(L, 2);
  self->fDstX = lorx_lnumber_to_orxFLOAT(L, 3);
  self->fDstY = lorx_lnumber_to_orxFLOAT(L, 4);
  self->fRepeatX = lorx_lnumber_to_orxFLOAT(L, 5);
  self->fRepeatY = lorx_lnumber_to_orxFLOAT(L, 6);
  self->fScaleX = lorx_lnumber_to_orxFLOAT(L, 7);
  self->fScaleY = lorx_lnumber_to_orxFLOAT(L, 8);
  self->fRotation = lorx_lnumber_to_orxFLOAT(L, 9);
  
  return 1;
}

static int l_lorx_orxDISPLAY_VIDEO_MODE_create(lua_State *L)
{
  orxDISPLAY_VIDEO_MODE** pself = lua_newuserdata(L, sizeof(orxDISPLAY_VIDEO_MODE*)+sizeof(orxDISPLAY_VIDEO_MODE));
  orxDISPLAY_VIDEO_MODE* self = (orxDISPLAY_VIDEO_MODE*)(pself + 1);
  luaL_setmetatable(L, "lorx.orxDISPLAY_VIDEO_MODE");
  *pself = self;
  self->u32Width = lorx_linteger_to_orxU32(L, 1);
  self->u32Height = lorx_linteger_to_orxU32(L, 2);
  self->u32Depth = lorx_linteger_to_orxU32(L, 3);
  self->u32RefreshRate = lorx_linteger_to_orxU32(L, 4);
  self->bFullScreen = lorx_lboolean_to_orxBOOL(L, 5);
  
  return 1;
}

static int l_lorx_orxFILE_INFO_create(lua_State *L)
{
  orxFILE_INFO** pself = lua_newuserdata(L, sizeof(orxFILE_INFO*)+sizeof(orxFILE_INFO));
  orxFILE_INFO* self = (orxFILE_INFO*)(pself + 1);
  luaL_setmetatable(L, "lorx.orxFILE_INFO");
  *pself = self;
  self->s64Size = lorx_linteger_to_orxS64(L, 1);
  self->s64TimeStamp = lorx_linteger_to_orxS64(L, 2);
  self->u32Flags = lorx_linteger_to_orxU32(L, 3);
  self->hInternal = lorx_luserdata_to_orxHANDLE(L, 4);
  {
    const char* s = luaL_checkstring(L, 5);
    if (strlen(s) > 256)
    {
      luaL_error(L, "the provided string is longer than the char array!");
    }
    strncpy(self->zName, s, 256-1);
  }
  {
    const char* s = luaL_checkstring(L, 6);
    if (strlen(s) > 256)
    {
      luaL_error(L, "the provided string is longer than the char array!");
    }
    strncpy(self->zPattern, s, 256-1);
  }
  {
    const char* s = luaL_checkstring(L, 7);
    if (strlen(s) > 1024)
    {
      luaL_error(L, "the provided string is longer than the char array!");
    }
    strncpy(self->zPath, s, 1024-1);
  }
  {
    const char* s = luaL_checkstring(L, 8);
    if (strlen(s) > 1280)
    {
      luaL_error(L, "the provided string is longer than the char array!");
    }
    strncpy(self->zFullName, s, 1280-1);
  }
  
  return 1;
}

static int l_lorx_orxOBOX_create(lua_State *L)
{
  orxOBOX** pself = lua_newuserdata(L, sizeof(orxOBOX*)+sizeof(orxOBOX));
  orxOBOX* self = (orxOBOX*)(pself + 1);
  luaL_setmetatable(L, "lorx.orxOBOX");
  *pself = self;
  self->vPosition = lorx_luserdata_to_orxVECTOR_struct(L, 1);
  self->vPivot = lorx_luserdata_to_orxVECTOR_struct(L, 2);
  self->vX = lorx_luserdata_to_orxVECTOR_struct(L, 3);
  self->vY = lorx_luserdata_to_orxVECTOR_struct(L, 4);
  self->vZ = lorx_luserdata_to_orxVECTOR_struct(L, 5);
  
  return 1;
}

static int l_lorx_orxRGBA_create(lua_State *L)
{
  orxRGBA** pself = lua_newuserdata(L, sizeof(orxRGBA*)+sizeof(orxRGBA));
  orxRGBA* self = (orxRGBA*)(pself + 1);
  luaL_setmetatable(L, "lorx.orxRGBA");
  *pself = self;
  self->u8R = lorx_linteger_to_orxU8(L, 1);
  self->u8G = lorx_linteger_to_orxU8(L, 2);
  self->u8B = lorx_linteger_to_orxU8(L, 3);
  self->u8A = lorx_linteger_to_orxU8(L, 4);
  
  return 1;
}

static int l_lorx_orxVECTOR_create(lua_State *L)
{
  orxVECTOR** pself = lua_newuserdata(L, sizeof(orxVECTOR*)+sizeof(orxVECTOR));
  orxVECTOR* self = (orxVECTOR*)(pself + 1);
  luaL_setmetatable(L, "lorx.orxVECTOR");
  *pself = self;
  self->fX = lorx_lnumber_to_orxFLOAT(L, 1);
  self->fY = lorx_lnumber_to_orxFLOAT(L, 2);
  self->fZ = lorx_lnumber_to_orxFLOAT(L, 3);
  
  return 1;
}


#endif /* __LORX_CONSTRUCTORS_H__ */