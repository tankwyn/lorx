/*
** Properties for open data structures (generated with oaccess.py)
*/


#ifndef __LORX_PROPERTIES_H__
#define __LORX_PROPERTIES_H__

#include <lua.h>
#include <lauxlib.h>
#include <orx.h>
#include "conbasic.h"
#include "conutype.h"
#include "conenum.h"

static int l_lorx_orxAABOX___index(lua_State *L)
{
  const orxAABOX* self = lorx_luserdata_to_orxAABOX(L, 1);
  const char* key = luaL_checkstring(L, 2);
  if (strcmp(key, "tl") == 0)
  {
    lorx_orxVECTOR_to_luserdata_struct(L, &(self->vTL));
  }
  else if (strcmp(key, "br") == 0)
  {
    lorx_orxVECTOR_to_luserdata_struct(L, &(self->vBR));
  }
  else
  {
    luaL_getmetatable(L, "lorx.orxAABOX");
    lua_pushvalue(L, 2);
    lua_rawget(L, -2);
  }
  return 1;
}
static int l_lorx_orxAABOX_const___index(lua_State *L)
{
  const orxAABOX* self = lorx_luserdata_to_orxAABOX_const(L, 1);
  const char* key = luaL_checkstring(L, 2);
  if (strcmp(key, "tl") == 0)
  {
    lorx_orxVECTOR_to_luserdata_struct(L, &(self->vTL));
  }
  else if (strcmp(key, "br") == 0)
  {
    lorx_orxVECTOR_to_luserdata_struct(L, &(self->vBR));
  }
  else
  {
    luaL_getmetatable(L, "lorx.orxAABOX#");
    lua_pushvalue(L, 2);
    lua_rawget(L, -2);
  }
  return 1;
}
static int l_lorx_orxAABOX___newindex(lua_State *L)
{
  orxAABOX* self = lorx_luserdata_to_orxAABOX(L, 1);
  const char* key = luaL_checkstring(L, 2);
  if (strcmp(key, "tl") == 0)
  {
    self->vTL = lorx_luserdata_to_orxVECTOR_struct(L, 3);
  }
  else if (strcmp(key, "br") == 0)
  {
    self->vBR = lorx_luserdata_to_orxVECTOR_struct(L, 3);
  }
  else
  {
    luaL_getmetatable(L, "lorx.orxAABOX");
    lua_pushvalue(L, 2);
    lua_pushvalue(L, 3);
    lua_rawset(L, -3);
  }
  return 0;
}

static const luaL_Reg l_lorx_aabox_mm[] = {
  { "__index", l_lorx_orxAABOX___index },
  { "__newindex", l_lorx_orxAABOX___newindex },
  { NULL, NULL }
};

static const luaL_Reg l_lorx_aabox_const_mm[] = {
  { "__index", l_lorx_orxAABOX_const___index },
  { NULL, NULL }
};
static int l_lorx_orxANIM_CUSTOM_EVENT___index(lua_State *L)
{
  const orxANIM_CUSTOM_EVENT* self = lorx_luserdata_to_orxANIM_CUSTOM_EVENT(L, 1);
  const char* key = luaL_checkstring(L, 2);
  if (strcmp(key, "name") == 0)
  {
    lorx_orxSTRING_to_lstring(L, self->zName);
  }
  else if (strcmp(key, "fvalue") == 0)
  {
    lorx_orxFLOAT_to_lnumber(L, self->fValue);
  }
  else if (strcmp(key, "timestamp") == 0)
  {
    lorx_orxFLOAT_to_lnumber(L, self->fTimeStamp);
  }
  else
  {
    luaL_getmetatable(L, "lorx.orxANIM_CUSTOM_EVENT");
    lua_pushvalue(L, 2);
    lua_rawget(L, -2);
  }
  return 1;
}
static int l_lorx_orxANIM_CUSTOM_EVENT_const___index(lua_State *L)
{
  const orxANIM_CUSTOM_EVENT* self = lorx_luserdata_to_orxANIM_CUSTOM_EVENT_const(L, 1);
  const char* key = luaL_checkstring(L, 2);
  if (strcmp(key, "name") == 0)
  {
    lorx_orxSTRING_to_lstring(L, self->zName);
  }
  else if (strcmp(key, "fvalue") == 0)
  {
    lorx_orxFLOAT_to_lnumber(L, self->fValue);
  }
  else if (strcmp(key, "timestamp") == 0)
  {
    lorx_orxFLOAT_to_lnumber(L, self->fTimeStamp);
  }
  else
  {
    luaL_getmetatable(L, "lorx.orxANIM_CUSTOM_EVENT#");
    lua_pushvalue(L, 2);
    lua_rawget(L, -2);
  }
  return 1;
}
static int l_lorx_orxANIM_CUSTOM_EVENT___newindex(lua_State *L)
{
  orxANIM_CUSTOM_EVENT* self = lorx_luserdata_to_orxANIM_CUSTOM_EVENT(L, 1);
  const char* key = luaL_checkstring(L, 2);
  if (strcmp(key, "name") == 0)
  {
    self->zName = lorx_lstring_to_orxSTRING(L, 3);
  }
  else if (strcmp(key, "fvalue") == 0)
  {
    self->fValue = lorx_lnumber_to_orxFLOAT(L, 3);
  }
  else if (strcmp(key, "timestamp") == 0)
  {
    self->fTimeStamp = lorx_lnumber_to_orxFLOAT(L, 3);
  }
  else
  {
    luaL_getmetatable(L, "lorx.orxANIM_CUSTOM_EVENT");
    lua_pushvalue(L, 2);
    lua_pushvalue(L, 3);
    lua_rawset(L, -3);
  }
  return 0;
}

static const luaL_Reg l_lorx_anim_custom_event_mm[] = {
  { "__index", l_lorx_orxANIM_CUSTOM_EVENT___index },
  { "__newindex", l_lorx_orxANIM_CUSTOM_EVENT___newindex },
  { NULL, NULL }
};

static const luaL_Reg l_lorx_anim_custom_event_const_mm[] = {
  { "__index", l_lorx_orxANIM_CUSTOM_EVENT_const___index },
  { NULL, NULL }
};
static int l_lorx_orxCHARACTER_GLYPH___index(lua_State *L)
{
  const orxCHARACTER_GLYPH* self = lorx_luserdata_to_orxCHARACTER_GLYPH(L, 1);
  const char* key = luaL_checkstring(L, 2);
  if (strcmp(key, "x") == 0)
  {
    lorx_orxFLOAT_to_lnumber(L, self->fX);
  }
  else if (strcmp(key, "y") == 0)
  {
    lorx_orxFLOAT_to_lnumber(L, self->fY);
  }
  else if (strcmp(key, "width") == 0)
  {
    lorx_orxFLOAT_to_lnumber(L, self->fWidth);
  }
  else
  {
    luaL_getmetatable(L, "lorx.orxCHARACTER_GLYPH");
    lua_pushvalue(L, 2);
    lua_rawget(L, -2);
  }
  return 1;
}
static int l_lorx_orxCHARACTER_GLYPH_const___index(lua_State *L)
{
  const orxCHARACTER_GLYPH* self = lorx_luserdata_to_orxCHARACTER_GLYPH_const(L, 1);
  const char* key = luaL_checkstring(L, 2);
  if (strcmp(key, "x") == 0)
  {
    lorx_orxFLOAT_to_lnumber(L, self->fX);
  }
  else if (strcmp(key, "y") == 0)
  {
    lorx_orxFLOAT_to_lnumber(L, self->fY);
  }
  else if (strcmp(key, "width") == 0)
  {
    lorx_orxFLOAT_to_lnumber(L, self->fWidth);
  }
  else
  {
    luaL_getmetatable(L, "lorx.orxCHARACTER_GLYPH#");
    lua_pushvalue(L, 2);
    lua_rawget(L, -2);
  }
  return 1;
}
static int l_lorx_orxCHARACTER_GLYPH___newindex(lua_State *L)
{
  orxCHARACTER_GLYPH* self = lorx_luserdata_to_orxCHARACTER_GLYPH(L, 1);
  const char* key = luaL_checkstring(L, 2);
  if (strcmp(key, "x") == 0)
  {
    self->fX = lorx_lnumber_to_orxFLOAT(L, 3);
  }
  else if (strcmp(key, "y") == 0)
  {
    self->fY = lorx_lnumber_to_orxFLOAT(L, 3);
  }
  else if (strcmp(key, "width") == 0)
  {
    self->fWidth = lorx_lnumber_to_orxFLOAT(L, 3);
  }
  else
  {
    luaL_getmetatable(L, "lorx.orxCHARACTER_GLYPH");
    lua_pushvalue(L, 2);
    lua_pushvalue(L, 3);
    lua_rawset(L, -3);
  }
  return 0;
}

static const luaL_Reg l_lorx_character_glyph_mm[] = {
  { "__index", l_lorx_orxCHARACTER_GLYPH___index },
  { "__newindex", l_lorx_orxCHARACTER_GLYPH___newindex },
  { NULL, NULL }
};

static const luaL_Reg l_lorx_character_glyph_const_mm[] = {
  { "__index", l_lorx_orxCHARACTER_GLYPH_const___index },
  { NULL, NULL }
};
static int l_lorx_orxCHARACTER_MAP___index(lua_State *L)
{
  const orxCHARACTER_MAP* self = lorx_luserdata_to_orxCHARACTER_MAP(L, 1);
  const char* key = luaL_checkstring(L, 2);
  if (strcmp(key, "characterheight") == 0)
  {
    lorx_orxFLOAT_to_lnumber(L, self->fCharacterHeight);
  }
  else
  {
    luaL_getmetatable(L, "lorx.orxCHARACTER_MAP");
    lua_pushvalue(L, 2);
    lua_rawget(L, -2);
  }
  return 1;
}
static int l_lorx_orxCHARACTER_MAP_const___index(lua_State *L)
{
  const orxCHARACTER_MAP* self = lorx_luserdata_to_orxCHARACTER_MAP_const(L, 1);
  const char* key = luaL_checkstring(L, 2);
  if (strcmp(key, "characterheight") == 0)
  {
    lorx_orxFLOAT_to_lnumber(L, self->fCharacterHeight);
  }
  else
  {
    luaL_getmetatable(L, "lorx.orxCHARACTER_MAP#");
    lua_pushvalue(L, 2);
    lua_rawget(L, -2);
  }
  return 1;
}
static int l_lorx_orxCHARACTER_MAP___newindex(lua_State *L)
{
  orxCHARACTER_MAP* self = lorx_luserdata_to_orxCHARACTER_MAP(L, 1);
  const char* key = luaL_checkstring(L, 2);
  if (strcmp(key, "characterheight") == 0)
  {
    self->fCharacterHeight = lorx_lnumber_to_orxFLOAT(L, 3);
  }
  else
  {
    luaL_getmetatable(L, "lorx.orxCHARACTER_MAP");
    lua_pushvalue(L, 2);
    lua_pushvalue(L, 3);
    lua_rawset(L, -3);
  }
  return 0;
}

static const luaL_Reg l_lorx_character_map_mm[] = {
  { "__index", l_lorx_orxCHARACTER_MAP___index },
  { "__newindex", l_lorx_orxCHARACTER_MAP___newindex },
  { NULL, NULL }
};

static const luaL_Reg l_lorx_character_map_const_mm[] = {
  { "__index", l_lorx_orxCHARACTER_MAP_const___index },
  { NULL, NULL }
};
static int l_lorx_orxCLOCK_INFO___index(lua_State *L)
{
  const orxCLOCK_INFO* self = lorx_luserdata_to_orxCLOCK_INFO(L, 1);
  const char* key = luaL_checkstring(L, 2);
  if (strcmp(key, "ticksize") == 0)
  {
    lorx_orxFLOAT_to_lnumber(L, self->fTickSize);
  }
  else if (strcmp(key, "dt") == 0)
  {
    lorx_orxFLOAT_to_lnumber(L, self->fDT);
  }
  else if (strcmp(key, "time") == 0)
  {
    lorx_orxFLOAT_to_lnumber(L, self->fTime);
  }
  else if (strcmp(key, "modifierlistlist") == 0)
  {
    lua_createtable(L, orxCLOCK_MODIFIER_NUMBER, 0);
    for (size_t i = 0; i < orxCLOCK_MODIFIER_NUMBER; i++)
    {
      lorx_orxFLOAT_to_lnumber(L, self->afModifierList[i]);
      lua_seti(L, -2, i+1);
    }
  }
  else
  {
    luaL_getmetatable(L, "lorx.orxCLOCK_INFO");
    lua_pushvalue(L, 2);
    lua_rawget(L, -2);
  }
  return 1;
}
static int l_lorx_orxCLOCK_INFO_const___index(lua_State *L)
{
  const orxCLOCK_INFO* self = lorx_luserdata_to_orxCLOCK_INFO_const(L, 1);
  const char* key = luaL_checkstring(L, 2);
  if (strcmp(key, "ticksize") == 0)
  {
    lorx_orxFLOAT_to_lnumber(L, self->fTickSize);
  }
  else if (strcmp(key, "dt") == 0)
  {
    lorx_orxFLOAT_to_lnumber(L, self->fDT);
  }
  else if (strcmp(key, "time") == 0)
  {
    lorx_orxFLOAT_to_lnumber(L, self->fTime);
  }
  else if (strcmp(key, "modifierlistlist") == 0)
  {
    lua_createtable(L, orxCLOCK_MODIFIER_NUMBER, 0);
    for (size_t i = 0; i < orxCLOCK_MODIFIER_NUMBER; i++)
    {
      lorx_orxFLOAT_to_lnumber(L, self->afModifierList[i]);
      lua_seti(L, -2, i+1);
    }
  }
  else
  {
    luaL_getmetatable(L, "lorx.orxCLOCK_INFO#");
    lua_pushvalue(L, 2);
    lua_rawget(L, -2);
  }
  return 1;
}
static int l_lorx_orxCLOCK_INFO___newindex(lua_State *L)
{
  orxCLOCK_INFO* self = lorx_luserdata_to_orxCLOCK_INFO(L, 1);
  const char* key = luaL_checkstring(L, 2);
  if (strcmp(key, "ticksize") == 0)
  {
    self->fTickSize = lorx_lnumber_to_orxFLOAT(L, 3);
  }
  else if (strcmp(key, "dt") == 0)
  {
    self->fDT = lorx_lnumber_to_orxFLOAT(L, 3);
  }
  else if (strcmp(key, "time") == 0)
  {
    self->fTime = lorx_lnumber_to_orxFLOAT(L, 3);
  }
  else if (strcmp(key, "modifierlistlist") == 0)
  {
    luaL_checktype(L, 3, LUA_TTABLE);
  }
  else
  {
    luaL_getmetatable(L, "lorx.orxCLOCK_INFO");
    lua_pushvalue(L, 2);
    lua_pushvalue(L, 3);
    lua_rawset(L, -3);
  }
  return 0;
}

static const luaL_Reg l_lorx_clock_info_mm[] = {
  { "__index", l_lorx_orxCLOCK_INFO___index },
  { "__newindex", l_lorx_orxCLOCK_INFO___newindex },
  { NULL, NULL }
};

static const luaL_Reg l_lorx_clock_info_const_mm[] = {
  { "__index", l_lorx_orxCLOCK_INFO_const___index },
  { NULL, NULL }
};
static int l_lorx_orxCOLOR___index(lua_State *L)
{
  const orxCOLOR* self = lorx_luserdata_to_orxCOLOR(L, 1);
  const char* key = luaL_checkstring(L, 2);
  if (strcmp(key, "rgb") == 0)
  {
    lorx_orxVECTOR_to_luserdata_struct(L, &(self->vRGB));
  }
  else if (strcmp(key, "hsl") == 0)
  {
    lorx_orxVECTOR_to_luserdata_struct(L, &(self->vHSL));
  }
  else if (strcmp(key, "hsv") == 0)
  {
    lorx_orxVECTOR_to_luserdata_struct(L, &(self->vHSV));
  }
  else if (strcmp(key, "alpha") == 0)
  {
    lorx_orxFLOAT_to_lnumber(L, self->fAlpha);
  }
  else
  {
    luaL_getmetatable(L, "lorx.orxCOLOR");
    lua_pushvalue(L, 2);
    lua_rawget(L, -2);
  }
  return 1;
}
static int l_lorx_orxCOLOR_const___index(lua_State *L)
{
  const orxCOLOR* self = lorx_luserdata_to_orxCOLOR_const(L, 1);
  const char* key = luaL_checkstring(L, 2);
  if (strcmp(key, "rgb") == 0)
  {
    lorx_orxVECTOR_to_luserdata_struct(L, &(self->vRGB));
  }
  else if (strcmp(key, "hsl") == 0)
  {
    lorx_orxVECTOR_to_luserdata_struct(L, &(self->vHSL));
  }
  else if (strcmp(key, "hsv") == 0)
  {
    lorx_orxVECTOR_to_luserdata_struct(L, &(self->vHSV));
  }
  else if (strcmp(key, "alpha") == 0)
  {
    lorx_orxFLOAT_to_lnumber(L, self->fAlpha);
  }
  else
  {
    luaL_getmetatable(L, "lorx.orxCOLOR#");
    lua_pushvalue(L, 2);
    lua_rawget(L, -2);
  }
  return 1;
}
static int l_lorx_orxCOLOR___newindex(lua_State *L)
{
  orxCOLOR* self = lorx_luserdata_to_orxCOLOR(L, 1);
  const char* key = luaL_checkstring(L, 2);
  if (strcmp(key, "rgb") == 0)
  {
    self->vRGB = lorx_luserdata_to_orxVECTOR_struct(L, 3);
  }
  else if (strcmp(key, "hsl") == 0)
  {
    self->vHSL = lorx_luserdata_to_orxVECTOR_struct(L, 3);
  }
  else if (strcmp(key, "hsv") == 0)
  {
    self->vHSV = lorx_luserdata_to_orxVECTOR_struct(L, 3);
  }
  else if (strcmp(key, "alpha") == 0)
  {
    self->fAlpha = lorx_lnumber_to_orxFLOAT(L, 3);
  }
  else
  {
    luaL_getmetatable(L, "lorx.orxCOLOR");
    lua_pushvalue(L, 2);
    lua_pushvalue(L, 3);
    lua_rawset(L, -3);
  }
  return 0;
}

static const luaL_Reg l_lorx_color_mm[] = {
  { "__index", l_lorx_orxCOLOR___index },
  { "__newindex", l_lorx_orxCOLOR___newindex },
  { NULL, NULL }
};

static const luaL_Reg l_lorx_color_const_mm[] = {
  { "__index", l_lorx_orxCOLOR_const___index },
  { NULL, NULL }
};
static int l_lorx_orxCOMMAND_VAR___index(lua_State *L)
{
  const orxCOMMAND_VAR* self = lorx_luserdata_to_orxCOMMAND_VAR(L, 1);
  const char* key = luaL_checkstring(L, 2);
  if (strcmp(key, "vvalue") == 0)
  {
    lorx_orxVECTOR_to_luserdata_struct(L, &(self->vValue));
  }
  else if (strcmp(key, "zvalue") == 0)
  {
    lorx_orxSTRING_to_lstring(L, self->zValue);
  }
  else if (strcmp(key, "u32value") == 0)
  {
    lorx_orxU32_to_linteger(L, self->u32Value);
  }
  else if (strcmp(key, "s32value") == 0)
  {
    lorx_orxS32_to_linteger(L, self->s32Value);
  }
  else if (strcmp(key, "u64value") == 0)
  {
    lorx_orxU64_to_linteger(L, self->u64Value);
  }
  else if (strcmp(key, "s64value") == 0)
  {
    lorx_orxS64_to_linteger(L, self->s64Value);
  }
  else if (strcmp(key, "fvalue") == 0)
  {
    lorx_orxFLOAT_to_lnumber(L, self->fValue);
  }
  else if (strcmp(key, "bvalue") == 0)
  {
    lorx_orxBOOL_to_lboolean(L, self->bValue);
  }
  else if (strcmp(key, "type") == 0)
  {
    lorx_orxCOMMAND_VAR_TYPE_to_lenumstr(L, self->eType);
  }
  else
  {
    luaL_getmetatable(L, "lorx.orxCOMMAND_VAR");
    lua_pushvalue(L, 2);
    lua_rawget(L, -2);
  }
  return 1;
}
static int l_lorx_orxCOMMAND_VAR_const___index(lua_State *L)
{
  const orxCOMMAND_VAR* self = lorx_luserdata_to_orxCOMMAND_VAR_const(L, 1);
  const char* key = luaL_checkstring(L, 2);
  if (strcmp(key, "vvalue") == 0)
  {
    lorx_orxVECTOR_to_luserdata_struct(L, &(self->vValue));
  }
  else if (strcmp(key, "zvalue") == 0)
  {
    lorx_orxSTRING_to_lstring(L, self->zValue);
  }
  else if (strcmp(key, "u32value") == 0)
  {
    lorx_orxU32_to_linteger(L, self->u32Value);
  }
  else if (strcmp(key, "s32value") == 0)
  {
    lorx_orxS32_to_linteger(L, self->s32Value);
  }
  else if (strcmp(key, "u64value") == 0)
  {
    lorx_orxU64_to_linteger(L, self->u64Value);
  }
  else if (strcmp(key, "s64value") == 0)
  {
    lorx_orxS64_to_linteger(L, self->s64Value);
  }
  else if (strcmp(key, "fvalue") == 0)
  {
    lorx_orxFLOAT_to_lnumber(L, self->fValue);
  }
  else if (strcmp(key, "bvalue") == 0)
  {
    lorx_orxBOOL_to_lboolean(L, self->bValue);
  }
  else if (strcmp(key, "type") == 0)
  {
    lorx_orxCOMMAND_VAR_TYPE_to_lenumstr(L, self->eType);
  }
  else
  {
    luaL_getmetatable(L, "lorx.orxCOMMAND_VAR#");
    lua_pushvalue(L, 2);
    lua_rawget(L, -2);
  }
  return 1;
}
static int l_lorx_orxCOMMAND_VAR___newindex(lua_State *L)
{
  orxCOMMAND_VAR* self = lorx_luserdata_to_orxCOMMAND_VAR(L, 1);
  const char* key = luaL_checkstring(L, 2);
  if (strcmp(key, "vvalue") == 0)
  {
    self->vValue = lorx_luserdata_to_orxVECTOR_struct(L, 3);
  }
  else if (strcmp(key, "zvalue") == 0)
  {
    self->zValue = lorx_lstring_to_orxSTRING(L, 3);
  }
  else if (strcmp(key, "u32value") == 0)
  {
    self->u32Value = lorx_linteger_to_orxU32(L, 3);
  }
  else if (strcmp(key, "s32value") == 0)
  {
    self->s32Value = lorx_linteger_to_orxS32(L, 3);
  }
  else if (strcmp(key, "u64value") == 0)
  {
    self->u64Value = lorx_linteger_to_orxU64(L, 3);
  }
  else if (strcmp(key, "s64value") == 0)
  {
    self->s64Value = lorx_linteger_to_orxS64(L, 3);
  }
  else if (strcmp(key, "fvalue") == 0)
  {
    self->fValue = lorx_lnumber_to_orxFLOAT(L, 3);
  }
  else if (strcmp(key, "bvalue") == 0)
  {
    self->bValue = lorx_lboolean_to_orxBOOL(L, 3);
  }
  else if (strcmp(key, "type") == 0)
  {
    self->eType = lorx_lenumstr_to_orxCOMMAND_VAR_TYPE(L, 3);
  }
  else
  {
    luaL_getmetatable(L, "lorx.orxCOMMAND_VAR");
    lua_pushvalue(L, 2);
    lua_pushvalue(L, 3);
    lua_rawset(L, -3);
  }
  return 0;
}

static const luaL_Reg l_lorx_command_var_mm[] = {
  { "__index", l_lorx_orxCOMMAND_VAR___index },
  { "__newindex", l_lorx_orxCOMMAND_VAR___newindex },
  { NULL, NULL }
};

static const luaL_Reg l_lorx_command_var_const_mm[] = {
  { "__index", l_lorx_orxCOMMAND_VAR_const___index },
  { NULL, NULL }
};
static int l_lorx_orxDISPLAY_TRANSFORM___index(lua_State *L)
{
  const orxDISPLAY_TRANSFORM* self = lorx_luserdata_to_orxDISPLAY_TRANSFORM(L, 1);
  const char* key = luaL_checkstring(L, 2);
  if (strcmp(key, "srcx") == 0)
  {
    lorx_orxFLOAT_to_lnumber(L, self->fSrcX);
  }
  else if (strcmp(key, "srcy") == 0)
  {
    lorx_orxFLOAT_to_lnumber(L, self->fSrcY);
  }
  else if (strcmp(key, "dstx") == 0)
  {
    lorx_orxFLOAT_to_lnumber(L, self->fDstX);
  }
  else if (strcmp(key, "dsty") == 0)
  {
    lorx_orxFLOAT_to_lnumber(L, self->fDstY);
  }
  else if (strcmp(key, "repeatx") == 0)
  {
    lorx_orxFLOAT_to_lnumber(L, self->fRepeatX);
  }
  else if (strcmp(key, "repeaty") == 0)
  {
    lorx_orxFLOAT_to_lnumber(L, self->fRepeatY);
  }
  else if (strcmp(key, "scalex") == 0)
  {
    lorx_orxFLOAT_to_lnumber(L, self->fScaleX);
  }
  else if (strcmp(key, "scaley") == 0)
  {
    lorx_orxFLOAT_to_lnumber(L, self->fScaleY);
  }
  else if (strcmp(key, "rotation") == 0)
  {
    lorx_orxFLOAT_to_lnumber(L, self->fRotation);
  }
  else
  {
    luaL_getmetatable(L, "lorx.orxDISPLAY_TRANSFORM");
    lua_pushvalue(L, 2);
    lua_rawget(L, -2);
  }
  return 1;
}
static int l_lorx_orxDISPLAY_TRANSFORM_const___index(lua_State *L)
{
  const orxDISPLAY_TRANSFORM* self = lorx_luserdata_to_orxDISPLAY_TRANSFORM_const(L, 1);
  const char* key = luaL_checkstring(L, 2);
  if (strcmp(key, "srcx") == 0)
  {
    lorx_orxFLOAT_to_lnumber(L, self->fSrcX);
  }
  else if (strcmp(key, "srcy") == 0)
  {
    lorx_orxFLOAT_to_lnumber(L, self->fSrcY);
  }
  else if (strcmp(key, "dstx") == 0)
  {
    lorx_orxFLOAT_to_lnumber(L, self->fDstX);
  }
  else if (strcmp(key, "dsty") == 0)
  {
    lorx_orxFLOAT_to_lnumber(L, self->fDstY);
  }
  else if (strcmp(key, "repeatx") == 0)
  {
    lorx_orxFLOAT_to_lnumber(L, self->fRepeatX);
  }
  else if (strcmp(key, "repeaty") == 0)
  {
    lorx_orxFLOAT_to_lnumber(L, self->fRepeatY);
  }
  else if (strcmp(key, "scalex") == 0)
  {
    lorx_orxFLOAT_to_lnumber(L, self->fScaleX);
  }
  else if (strcmp(key, "scaley") == 0)
  {
    lorx_orxFLOAT_to_lnumber(L, self->fScaleY);
  }
  else if (strcmp(key, "rotation") == 0)
  {
    lorx_orxFLOAT_to_lnumber(L, self->fRotation);
  }
  else
  {
    luaL_getmetatable(L, "lorx.orxDISPLAY_TRANSFORM#");
    lua_pushvalue(L, 2);
    lua_rawget(L, -2);
  }
  return 1;
}
static int l_lorx_orxDISPLAY_TRANSFORM___newindex(lua_State *L)
{
  orxDISPLAY_TRANSFORM* self = lorx_luserdata_to_orxDISPLAY_TRANSFORM(L, 1);
  const char* key = luaL_checkstring(L, 2);
  if (strcmp(key, "srcx") == 0)
  {
    self->fSrcX = lorx_lnumber_to_orxFLOAT(L, 3);
  }
  else if (strcmp(key, "srcy") == 0)
  {
    self->fSrcY = lorx_lnumber_to_orxFLOAT(L, 3);
  }
  else if (strcmp(key, "dstx") == 0)
  {
    self->fDstX = lorx_lnumber_to_orxFLOAT(L, 3);
  }
  else if (strcmp(key, "dsty") == 0)
  {
    self->fDstY = lorx_lnumber_to_orxFLOAT(L, 3);
  }
  else if (strcmp(key, "repeatx") == 0)
  {
    self->fRepeatX = lorx_lnumber_to_orxFLOAT(L, 3);
  }
  else if (strcmp(key, "repeaty") == 0)
  {
    self->fRepeatY = lorx_lnumber_to_orxFLOAT(L, 3);
  }
  else if (strcmp(key, "scalex") == 0)
  {
    self->fScaleX = lorx_lnumber_to_orxFLOAT(L, 3);
  }
  else if (strcmp(key, "scaley") == 0)
  {
    self->fScaleY = lorx_lnumber_to_orxFLOAT(L, 3);
  }
  else if (strcmp(key, "rotation") == 0)
  {
    self->fRotation = lorx_lnumber_to_orxFLOAT(L, 3);
  }
  else
  {
    luaL_getmetatable(L, "lorx.orxDISPLAY_TRANSFORM");
    lua_pushvalue(L, 2);
    lua_pushvalue(L, 3);
    lua_rawset(L, -3);
  }
  return 0;
}

static const luaL_Reg l_lorx_display_transform_mm[] = {
  { "__index", l_lorx_orxDISPLAY_TRANSFORM___index },
  { "__newindex", l_lorx_orxDISPLAY_TRANSFORM___newindex },
  { NULL, NULL }
};

static const luaL_Reg l_lorx_display_transform_const_mm[] = {
  { "__index", l_lorx_orxDISPLAY_TRANSFORM_const___index },
  { NULL, NULL }
};
static int l_lorx_orxDISPLAY_VIDEO_MODE___index(lua_State *L)
{
  const orxDISPLAY_VIDEO_MODE* self = lorx_luserdata_to_orxDISPLAY_VIDEO_MODE(L, 1);
  const char* key = luaL_checkstring(L, 2);
  if (strcmp(key, "width") == 0)
  {
    lorx_orxU32_to_linteger(L, self->u32Width);
  }
  else if (strcmp(key, "height") == 0)
  {
    lorx_orxU32_to_linteger(L, self->u32Height);
  }
  else if (strcmp(key, "depth") == 0)
  {
    lorx_orxU32_to_linteger(L, self->u32Depth);
  }
  else if (strcmp(key, "refreshrate") == 0)
  {
    lorx_orxU32_to_linteger(L, self->u32RefreshRate);
  }
  else if (strcmp(key, "fullscreen") == 0)
  {
    lorx_orxBOOL_to_lboolean(L, self->bFullScreen);
  }
  else
  {
    luaL_getmetatable(L, "lorx.orxDISPLAY_VIDEO_MODE");
    lua_pushvalue(L, 2);
    lua_rawget(L, -2);
  }
  return 1;
}
static int l_lorx_orxDISPLAY_VIDEO_MODE_const___index(lua_State *L)
{
  const orxDISPLAY_VIDEO_MODE* self = lorx_luserdata_to_orxDISPLAY_VIDEO_MODE_const(L, 1);
  const char* key = luaL_checkstring(L, 2);
  if (strcmp(key, "width") == 0)
  {
    lorx_orxU32_to_linteger(L, self->u32Width);
  }
  else if (strcmp(key, "height") == 0)
  {
    lorx_orxU32_to_linteger(L, self->u32Height);
  }
  else if (strcmp(key, "depth") == 0)
  {
    lorx_orxU32_to_linteger(L, self->u32Depth);
  }
  else if (strcmp(key, "refreshrate") == 0)
  {
    lorx_orxU32_to_linteger(L, self->u32RefreshRate);
  }
  else if (strcmp(key, "fullscreen") == 0)
  {
    lorx_orxBOOL_to_lboolean(L, self->bFullScreen);
  }
  else
  {
    luaL_getmetatable(L, "lorx.orxDISPLAY_VIDEO_MODE#");
    lua_pushvalue(L, 2);
    lua_rawget(L, -2);
  }
  return 1;
}
static int l_lorx_orxDISPLAY_VIDEO_MODE___newindex(lua_State *L)
{
  orxDISPLAY_VIDEO_MODE* self = lorx_luserdata_to_orxDISPLAY_VIDEO_MODE(L, 1);
  const char* key = luaL_checkstring(L, 2);
  if (strcmp(key, "width") == 0)
  {
    self->u32Width = lorx_linteger_to_orxU32(L, 3);
  }
  else if (strcmp(key, "height") == 0)
  {
    self->u32Height = lorx_linteger_to_orxU32(L, 3);
  }
  else if (strcmp(key, "depth") == 0)
  {
    self->u32Depth = lorx_linteger_to_orxU32(L, 3);
  }
  else if (strcmp(key, "refreshrate") == 0)
  {
    self->u32RefreshRate = lorx_linteger_to_orxU32(L, 3);
  }
  else if (strcmp(key, "fullscreen") == 0)
  {
    self->bFullScreen = lorx_lboolean_to_orxBOOL(L, 3);
  }
  else
  {
    luaL_getmetatable(L, "lorx.orxDISPLAY_VIDEO_MODE");
    lua_pushvalue(L, 2);
    lua_pushvalue(L, 3);
    lua_rawset(L, -3);
  }
  return 0;
}

static const luaL_Reg l_lorx_display_video_mode_mm[] = {
  { "__index", l_lorx_orxDISPLAY_VIDEO_MODE___index },
  { "__newindex", l_lorx_orxDISPLAY_VIDEO_MODE___newindex },
  { NULL, NULL }
};

static const luaL_Reg l_lorx_display_video_mode_const_mm[] = {
  { "__index", l_lorx_orxDISPLAY_VIDEO_MODE_const___index },
  { NULL, NULL }
};
static int l_lorx_orxFILE_INFO___index(lua_State *L)
{
  const orxFILE_INFO* self = lorx_luserdata_to_orxFILE_INFO(L, 1);
  const char* key = luaL_checkstring(L, 2);
  if (strcmp(key, "size") == 0)
  {
    lorx_orxS64_to_linteger(L, self->s64Size);
  }
  else if (strcmp(key, "timestamp") == 0)
  {
    lorx_orxS64_to_linteger(L, self->s64TimeStamp);
  }
  else if (strcmp(key, "flags") == 0)
  {
    lorx_orxU32_to_linteger(L, self->u32Flags);
  }
  else if (strcmp(key, "internal") == 0)
  {
    lorx_orxHANDLE_to_luserdata(L, self->hInternal);
  }
  else if (strcmp(key, "name") == 0)
  {
    lorx_orxCHAR_ptr_to_lstring(L, self->zName);
  }
  else if (strcmp(key, "pattern") == 0)
  {
    lorx_orxCHAR_ptr_to_lstring(L, self->zPattern);
  }
  else if (strcmp(key, "path") == 0)
  {
    lorx_orxCHAR_ptr_to_lstring(L, self->zPath);
  }
  else if (strcmp(key, "fullname") == 0)
  {
    lorx_orxCHAR_ptr_to_lstring(L, self->zFullName);
  }
  else
  {
    luaL_getmetatable(L, "lorx.orxFILE_INFO");
    lua_pushvalue(L, 2);
    lua_rawget(L, -2);
  }
  return 1;
}
static int l_lorx_orxFILE_INFO_const___index(lua_State *L)
{
  const orxFILE_INFO* self = lorx_luserdata_to_orxFILE_INFO_const(L, 1);
  const char* key = luaL_checkstring(L, 2);
  if (strcmp(key, "size") == 0)
  {
    lorx_orxS64_to_linteger(L, self->s64Size);
  }
  else if (strcmp(key, "timestamp") == 0)
  {
    lorx_orxS64_to_linteger(L, self->s64TimeStamp);
  }
  else if (strcmp(key, "flags") == 0)
  {
    lorx_orxU32_to_linteger(L, self->u32Flags);
  }
  else if (strcmp(key, "internal") == 0)
  {
    lorx_orxHANDLE_to_luserdata(L, self->hInternal);
  }
  else if (strcmp(key, "name") == 0)
  {
    lorx_orxCHAR_ptr_to_lstring(L, self->zName);
  }
  else if (strcmp(key, "pattern") == 0)
  {
    lorx_orxCHAR_ptr_to_lstring(L, self->zPattern);
  }
  else if (strcmp(key, "path") == 0)
  {
    lorx_orxCHAR_ptr_to_lstring(L, self->zPath);
  }
  else if (strcmp(key, "fullname") == 0)
  {
    lorx_orxCHAR_ptr_to_lstring(L, self->zFullName);
  }
  else
  {
    luaL_getmetatable(L, "lorx.orxFILE_INFO#");
    lua_pushvalue(L, 2);
    lua_rawget(L, -2);
  }
  return 1;
}
static int l_lorx_orxFILE_INFO___newindex(lua_State *L)
{
  orxFILE_INFO* self = lorx_luserdata_to_orxFILE_INFO(L, 1);
  const char* key = luaL_checkstring(L, 2);
  if (strcmp(key, "size") == 0)
  {
    self->s64Size = lorx_linteger_to_orxS64(L, 3);
  }
  else if (strcmp(key, "timestamp") == 0)
  {
    self->s64TimeStamp = lorx_linteger_to_orxS64(L, 3);
  }
  else if (strcmp(key, "flags") == 0)
  {
    self->u32Flags = lorx_linteger_to_orxU32(L, 3);
  }
  else if (strcmp(key, "internal") == 0)
  {
    self->hInternal = lorx_luserdata_to_orxHANDLE(L, 3);
  }
  else if (strcmp(key, "name") == 0)
  {
    {
      const char* s = luaL_checkstring(L, 3);
      if (strlen(s) > 256)
      {
        luaL_error(L, "the provided string is longer than the char array!");
      }
      strncpy(self->zName, s, 256-1);
    }
  }
  else if (strcmp(key, "pattern") == 0)
  {
    {
      const char* s = luaL_checkstring(L, 3);
      if (strlen(s) > 256)
      {
        luaL_error(L, "the provided string is longer than the char array!");
      }
      strncpy(self->zPattern, s, 256-1);
    }
  }
  else if (strcmp(key, "path") == 0)
  {
    {
      const char* s = luaL_checkstring(L, 3);
      if (strlen(s) > 1024)
      {
        luaL_error(L, "the provided string is longer than the char array!");
      }
      strncpy(self->zPath, s, 1024-1);
    }
  }
  else if (strcmp(key, "fullname") == 0)
  {
    {
      const char* s = luaL_checkstring(L, 3);
      if (strlen(s) > 1280)
      {
        luaL_error(L, "the provided string is longer than the char array!");
      }
      strncpy(self->zFullName, s, 1280-1);
    }
  }
  else
  {
    luaL_getmetatable(L, "lorx.orxFILE_INFO");
    lua_pushvalue(L, 2);
    lua_pushvalue(L, 3);
    lua_rawset(L, -3);
  }
  return 0;
}

static const luaL_Reg l_lorx_file_info_mm[] = {
  { "__index", l_lorx_orxFILE_INFO___index },
  { "__newindex", l_lorx_orxFILE_INFO___newindex },
  { NULL, NULL }
};

static const luaL_Reg l_lorx_file_info_const_mm[] = {
  { "__index", l_lorx_orxFILE_INFO_const___index },
  { NULL, NULL }
};
static int l_lorx_orxOBOX___index(lua_State *L)
{
  const orxOBOX* self = lorx_luserdata_to_orxOBOX(L, 1);
  const char* key = luaL_checkstring(L, 2);
  if (strcmp(key, "position") == 0)
  {
    lorx_orxVECTOR_to_luserdata_struct(L, &(self->vPosition));
  }
  else if (strcmp(key, "pivot") == 0)
  {
    lorx_orxVECTOR_to_luserdata_struct(L, &(self->vPivot));
  }
  else if (strcmp(key, "x") == 0)
  {
    lorx_orxVECTOR_to_luserdata_struct(L, &(self->vX));
  }
  else if (strcmp(key, "y") == 0)
  {
    lorx_orxVECTOR_to_luserdata_struct(L, &(self->vY));
  }
  else if (strcmp(key, "z") == 0)
  {
    lorx_orxVECTOR_to_luserdata_struct(L, &(self->vZ));
  }
  else
  {
    luaL_getmetatable(L, "lorx.orxOBOX");
    lua_pushvalue(L, 2);
    lua_rawget(L, -2);
  }
  return 1;
}
static int l_lorx_orxOBOX_const___index(lua_State *L)
{
  const orxOBOX* self = lorx_luserdata_to_orxOBOX_const(L, 1);
  const char* key = luaL_checkstring(L, 2);
  if (strcmp(key, "position") == 0)
  {
    lorx_orxVECTOR_to_luserdata_struct(L, &(self->vPosition));
  }
  else if (strcmp(key, "pivot") == 0)
  {
    lorx_orxVECTOR_to_luserdata_struct(L, &(self->vPivot));
  }
  else if (strcmp(key, "x") == 0)
  {
    lorx_orxVECTOR_to_luserdata_struct(L, &(self->vX));
  }
  else if (strcmp(key, "y") == 0)
  {
    lorx_orxVECTOR_to_luserdata_struct(L, &(self->vY));
  }
  else if (strcmp(key, "z") == 0)
  {
    lorx_orxVECTOR_to_luserdata_struct(L, &(self->vZ));
  }
  else
  {
    luaL_getmetatable(L, "lorx.orxOBOX#");
    lua_pushvalue(L, 2);
    lua_rawget(L, -2);
  }
  return 1;
}
static int l_lorx_orxOBOX___newindex(lua_State *L)
{
  orxOBOX* self = lorx_luserdata_to_orxOBOX(L, 1);
  const char* key = luaL_checkstring(L, 2);
  if (strcmp(key, "position") == 0)
  {
    self->vPosition = lorx_luserdata_to_orxVECTOR_struct(L, 3);
  }
  else if (strcmp(key, "pivot") == 0)
  {
    self->vPivot = lorx_luserdata_to_orxVECTOR_struct(L, 3);
  }
  else if (strcmp(key, "x") == 0)
  {
    self->vX = lorx_luserdata_to_orxVECTOR_struct(L, 3);
  }
  else if (strcmp(key, "y") == 0)
  {
    self->vY = lorx_luserdata_to_orxVECTOR_struct(L, 3);
  }
  else if (strcmp(key, "z") == 0)
  {
    self->vZ = lorx_luserdata_to_orxVECTOR_struct(L, 3);
  }
  else
  {
    luaL_getmetatable(L, "lorx.orxOBOX");
    lua_pushvalue(L, 2);
    lua_pushvalue(L, 3);
    lua_rawset(L, -3);
  }
  return 0;
}

static const luaL_Reg l_lorx_obox_mm[] = {
  { "__index", l_lorx_orxOBOX___index },
  { "__newindex", l_lorx_orxOBOX___newindex },
  { NULL, NULL }
};

static const luaL_Reg l_lorx_obox_const_mm[] = {
  { "__index", l_lorx_orxOBOX_const___index },
  { NULL, NULL }
};
static int l_lorx_orxRGBA___index(lua_State *L)
{
  const orxRGBA* self = lorx_luserdata_to_orxRGBA(L, 1);
  const char* key = luaL_checkstring(L, 2);
  if (strcmp(key, "r") == 0)
  {
    lorx_orxU8_to_linteger(L, self->u8R);
  }
  else if (strcmp(key, "g") == 0)
  {
    lorx_orxU8_to_linteger(L, self->u8G);
  }
  else if (strcmp(key, "b") == 0)
  {
    lorx_orxU8_to_linteger(L, self->u8B);
  }
  else if (strcmp(key, "a") == 0)
  {
    lorx_orxU8_to_linteger(L, self->u8A);
  }
  else if (strcmp(key, "rgba") == 0)
  {
    lorx_orxU32_to_linteger(L, self->u32RGBA);
  }
  else
  {
    luaL_getmetatable(L, "lorx.orxRGBA");
    lua_pushvalue(L, 2);
    lua_rawget(L, -2);
  }
  return 1;
}
static int l_lorx_orxRGBA_const___index(lua_State *L)
{
  const orxRGBA* self = lorx_luserdata_to_orxRGBA_const(L, 1);
  const char* key = luaL_checkstring(L, 2);
  if (strcmp(key, "r") == 0)
  {
    lorx_orxU8_to_linteger(L, self->u8R);
  }
  else if (strcmp(key, "g") == 0)
  {
    lorx_orxU8_to_linteger(L, self->u8G);
  }
  else if (strcmp(key, "b") == 0)
  {
    lorx_orxU8_to_linteger(L, self->u8B);
  }
  else if (strcmp(key, "a") == 0)
  {
    lorx_orxU8_to_linteger(L, self->u8A);
  }
  else if (strcmp(key, "rgba") == 0)
  {
    lorx_orxU32_to_linteger(L, self->u32RGBA);
  }
  else
  {
    luaL_getmetatable(L, "lorx.orxRGBA#");
    lua_pushvalue(L, 2);
    lua_rawget(L, -2);
  }
  return 1;
}
static int l_lorx_orxRGBA___newindex(lua_State *L)
{
  orxRGBA* self = lorx_luserdata_to_orxRGBA(L, 1);
  const char* key = luaL_checkstring(L, 2);
  if (strcmp(key, "r") == 0)
  {
    self->u8R = lorx_linteger_to_orxU8(L, 3);
  }
  else if (strcmp(key, "g") == 0)
  {
    self->u8G = lorx_linteger_to_orxU8(L, 3);
  }
  else if (strcmp(key, "b") == 0)
  {
    self->u8B = lorx_linteger_to_orxU8(L, 3);
  }
  else if (strcmp(key, "a") == 0)
  {
    self->u8A = lorx_linteger_to_orxU8(L, 3);
  }
  else if (strcmp(key, "rgba") == 0)
  {
    self->u32RGBA = lorx_linteger_to_orxU32(L, 3);
  }
  else
  {
    luaL_getmetatable(L, "lorx.orxRGBA");
    lua_pushvalue(L, 2);
    lua_pushvalue(L, 3);
    lua_rawset(L, -3);
  }
  return 0;
}

static const luaL_Reg l_lorx_rgba_mm[] = {
  { "__index", l_lorx_orxRGBA___index },
  { "__newindex", l_lorx_orxRGBA___newindex },
  { NULL, NULL }
};

static const luaL_Reg l_lorx_rgba_const_mm[] = {
  { "__index", l_lorx_orxRGBA_const___index },
  { NULL, NULL }
};

static const luaL_Reg l_lorx_sound_filter_data_mm[] = {
  { NULL, NULL }
};

static const luaL_Reg l_lorx_sound_filter_data_const_mm[] = {
  { NULL, NULL }
};
static int l_lorx_orxSOUND_STREAM_INFO___index(lua_State *L)
{
  const orxSOUND_STREAM_INFO* self = lorx_luserdata_to_orxSOUND_STREAM_INFO(L, 1);
  const char* key = luaL_checkstring(L, 2);
  if (strcmp(key, "name") == 0)
  {
    lorx_orxSTRING_to_lstring(L, self->zName);
  }
  else if (strcmp(key, "samplerate") == 0)
  {
    lorx_orxU32_to_linteger(L, self->u32SampleRate);
  }
  else if (strcmp(key, "channelnumber") == 0)
  {
    lorx_orxU32_to_linteger(L, self->u32ChannelNumber);
  }
  else
  {
    luaL_getmetatable(L, "lorx.orxSOUND_STREAM_INFO");
    lua_pushvalue(L, 2);
    lua_rawget(L, -2);
  }
  return 1;
}
static int l_lorx_orxSOUND_STREAM_INFO_const___index(lua_State *L)
{
  const orxSOUND_STREAM_INFO* self = lorx_luserdata_to_orxSOUND_STREAM_INFO_const(L, 1);
  const char* key = luaL_checkstring(L, 2);
  if (strcmp(key, "name") == 0)
  {
    lorx_orxSTRING_to_lstring(L, self->zName);
  }
  else if (strcmp(key, "samplerate") == 0)
  {
    lorx_orxU32_to_linteger(L, self->u32SampleRate);
  }
  else if (strcmp(key, "channelnumber") == 0)
  {
    lorx_orxU32_to_linteger(L, self->u32ChannelNumber);
  }
  else
  {
    luaL_getmetatable(L, "lorx.orxSOUND_STREAM_INFO#");
    lua_pushvalue(L, 2);
    lua_rawget(L, -2);
  }
  return 1;
}
static int l_lorx_orxSOUND_STREAM_INFO___newindex(lua_State *L)
{
  orxSOUND_STREAM_INFO* self = lorx_luserdata_to_orxSOUND_STREAM_INFO(L, 1);
  const char* key = luaL_checkstring(L, 2);
  if (strcmp(key, "name") == 0)
  {
    self->zName = lorx_lstring_to_orxSTRING(L, 3);
  }
  else if (strcmp(key, "samplerate") == 0)
  {
    self->u32SampleRate = lorx_linteger_to_orxU32(L, 3);
  }
  else if (strcmp(key, "channelnumber") == 0)
  {
    self->u32ChannelNumber = lorx_linteger_to_orxU32(L, 3);
  }
  else
  {
    luaL_getmetatable(L, "lorx.orxSOUND_STREAM_INFO");
    lua_pushvalue(L, 2);
    lua_pushvalue(L, 3);
    lua_rawset(L, -3);
  }
  return 0;
}

static const luaL_Reg l_lorx_sound_stream_info_mm[] = {
  { "__index", l_lorx_orxSOUND_STREAM_INFO___index },
  { "__newindex", l_lorx_orxSOUND_STREAM_INFO___newindex },
  { NULL, NULL }
};

static const luaL_Reg l_lorx_sound_stream_info_const_mm[] = {
  { "__index", l_lorx_orxSOUND_STREAM_INFO_const___index },
  { NULL, NULL }
};
static int l_lorx_orxSOUND_STREAM_PACKET___index(lua_State *L)
{
  const orxSOUND_STREAM_PACKET* self = lorx_luserdata_to_orxSOUND_STREAM_PACKET(L, 1);
  const char* key = luaL_checkstring(L, 2);
  if (strcmp(key, "samplelistlist") == 0)
  {
    lua_createtable(L, self->u32SampleNumber, 0);
    for (size_t i = 0; i < self->u32SampleNumber; i++)
    {
      lorx_orxFLOAT_to_lnumber(L, self->afSampleList[i]);
      lua_seti(L, -2, i+1);
    }
  }
  else if (strcmp(key, "samplenumber") == 0)
  {
    lorx_orxU32_to_linteger(L, self->u32SampleNumber);
  }
  else if (strcmp(key, "timestamp") == 0)
  {
    lorx_orxFLOAT_to_lnumber(L, self->fTimeStamp);
  }
  else if (strcmp(key, "time") == 0)
  {
    lorx_orxFLOAT_to_lnumber(L, self->fTime);
  }
  else if (strcmp(key, "id") == 0)
  {
    lorx_orxS32_to_linteger(L, self->s32ID);
  }
  else if (strcmp(key, "discard") == 0)
  {
    lorx_orxBOOL_to_lboolean(L, self->bDiscard);
  }
  else if (strcmp(key, "last") == 0)
  {
    lorx_orxBOOL_to_lboolean(L, self->bLast);
  }
  else
  {
    luaL_getmetatable(L, "lorx.orxSOUND_STREAM_PACKET");
    lua_pushvalue(L, 2);
    lua_rawget(L, -2);
  }
  return 1;
}
static int l_lorx_orxSOUND_STREAM_PACKET_const___index(lua_State *L)
{
  const orxSOUND_STREAM_PACKET* self = lorx_luserdata_to_orxSOUND_STREAM_PACKET_const(L, 1);
  const char* key = luaL_checkstring(L, 2);
  if (strcmp(key, "samplelistlist") == 0)
  {
    lua_createtable(L, self->u32SampleNumber, 0);
    for (size_t i = 0; i < self->u32SampleNumber; i++)
    {
      lorx_orxFLOAT_to_lnumber(L, self->afSampleList[i]);
      lua_seti(L, -2, i+1);
    }
  }
  else if (strcmp(key, "samplenumber") == 0)
  {
    lorx_orxU32_to_linteger(L, self->u32SampleNumber);
  }
  else if (strcmp(key, "timestamp") == 0)
  {
    lorx_orxFLOAT_to_lnumber(L, self->fTimeStamp);
  }
  else if (strcmp(key, "time") == 0)
  {
    lorx_orxFLOAT_to_lnumber(L, self->fTime);
  }
  else if (strcmp(key, "id") == 0)
  {
    lorx_orxS32_to_linteger(L, self->s32ID);
  }
  else if (strcmp(key, "discard") == 0)
  {
    lorx_orxBOOL_to_lboolean(L, self->bDiscard);
  }
  else if (strcmp(key, "last") == 0)
  {
    lorx_orxBOOL_to_lboolean(L, self->bLast);
  }
  else
  {
    luaL_getmetatable(L, "lorx.orxSOUND_STREAM_PACKET#");
    lua_pushvalue(L, 2);
    lua_rawget(L, -2);
  }
  return 1;
}
static int l_lorx_orxSOUND_STREAM_PACKET___newindex(lua_State *L)
{
  orxSOUND_STREAM_PACKET* self = lorx_luserdata_to_orxSOUND_STREAM_PACKET(L, 1);
  const char* key = luaL_checkstring(L, 2);
  if (strcmp(key, "samplelistlist") == 0)
  {
    luaL_checktype(L, 3, LUA_TTABLE);
    
    if (self->afSampleList != NULL)
    {
      for (size_t i = 0; i < self->u32SampleNumber; i++)
      {
        lua_geti(L, 3, i+1);
        self->afSampleList[i] = lorx_lnumber_to_orxFLOAT(L, -1);
        lua_pop(L, 1);
      }
      
    }
  }
  else if (strcmp(key, "timestamp") == 0)
  {
    self->fTimeStamp = lorx_lnumber_to_orxFLOAT(L, 3);
  }
  else if (strcmp(key, "time") == 0)
  {
    self->fTime = lorx_lnumber_to_orxFLOAT(L, 3);
  }
  else if (strcmp(key, "id") == 0)
  {
    self->s32ID = lorx_linteger_to_orxS32(L, 3);
  }
  else if (strcmp(key, "discard") == 0)
  {
    self->bDiscard = lorx_lboolean_to_orxBOOL(L, 3);
  }
  else if (strcmp(key, "last") == 0)
  {
    self->bLast = lorx_lboolean_to_orxBOOL(L, 3);
  }
  else
  {
    luaL_getmetatable(L, "lorx.orxSOUND_STREAM_PACKET");
    lua_pushvalue(L, 2);
    lua_pushvalue(L, 3);
    lua_rawset(L, -3);
  }
  return 0;
}

static const luaL_Reg l_lorx_sound_stream_packet_mm[] = {
  { "__index", l_lorx_orxSOUND_STREAM_PACKET___index },
  { "__newindex", l_lorx_orxSOUND_STREAM_PACKET___newindex },
  { NULL, NULL }
};

static const luaL_Reg l_lorx_sound_stream_packet_const_mm[] = {
  { "__index", l_lorx_orxSOUND_STREAM_PACKET_const___index },
  { NULL, NULL }
};
static int l_lorx_orxVECTOR___index(lua_State *L)
{
  const orxVECTOR* self = lorx_luserdata_to_orxVECTOR(L, 1);
  const char* key = luaL_checkstring(L, 2);
  if (strcmp(key, "x") == 0)
  {
    lorx_orxFLOAT_to_lnumber(L, self->fX);
  }
  else if (strcmp(key, "rho") == 0)
  {
    lorx_orxFLOAT_to_lnumber(L, self->fRho);
  }
  else if (strcmp(key, "r") == 0)
  {
    lorx_orxFLOAT_to_lnumber(L, self->fR);
  }
  else if (strcmp(key, "h") == 0)
  {
    lorx_orxFLOAT_to_lnumber(L, self->fH);
  }
  else if (strcmp(key, "y") == 0)
  {
    lorx_orxFLOAT_to_lnumber(L, self->fY);
  }
  else if (strcmp(key, "theta") == 0)
  {
    lorx_orxFLOAT_to_lnumber(L, self->fTheta);
  }
  else if (strcmp(key, "g") == 0)
  {
    lorx_orxFLOAT_to_lnumber(L, self->fG);
  }
  else if (strcmp(key, "s") == 0)
  {
    lorx_orxFLOAT_to_lnumber(L, self->fS);
  }
  else if (strcmp(key, "z") == 0)
  {
    lorx_orxFLOAT_to_lnumber(L, self->fZ);
  }
  else if (strcmp(key, "phi") == 0)
  {
    lorx_orxFLOAT_to_lnumber(L, self->fPhi);
  }
  else if (strcmp(key, "b") == 0)
  {
    lorx_orxFLOAT_to_lnumber(L, self->fB);
  }
  else if (strcmp(key, "l") == 0)
  {
    lorx_orxFLOAT_to_lnumber(L, self->fL);
  }
  else if (strcmp(key, "v") == 0)
  {
    lorx_orxFLOAT_to_lnumber(L, self->fV);
  }
  else
  {
    luaL_getmetatable(L, "lorx.orxVECTOR");
    lua_pushvalue(L, 2);
    lua_rawget(L, -2);
  }
  return 1;
}
static int l_lorx_orxVECTOR_const___index(lua_State *L)
{
  const orxVECTOR* self = lorx_luserdata_to_orxVECTOR_const(L, 1);
  const char* key = luaL_checkstring(L, 2);
  if (strcmp(key, "x") == 0)
  {
    lorx_orxFLOAT_to_lnumber(L, self->fX);
  }
  else if (strcmp(key, "rho") == 0)
  {
    lorx_orxFLOAT_to_lnumber(L, self->fRho);
  }
  else if (strcmp(key, "r") == 0)
  {
    lorx_orxFLOAT_to_lnumber(L, self->fR);
  }
  else if (strcmp(key, "h") == 0)
  {
    lorx_orxFLOAT_to_lnumber(L, self->fH);
  }
  else if (strcmp(key, "y") == 0)
  {
    lorx_orxFLOAT_to_lnumber(L, self->fY);
  }
  else if (strcmp(key, "theta") == 0)
  {
    lorx_orxFLOAT_to_lnumber(L, self->fTheta);
  }
  else if (strcmp(key, "g") == 0)
  {
    lorx_orxFLOAT_to_lnumber(L, self->fG);
  }
  else if (strcmp(key, "s") == 0)
  {
    lorx_orxFLOAT_to_lnumber(L, self->fS);
  }
  else if (strcmp(key, "z") == 0)
  {
    lorx_orxFLOAT_to_lnumber(L, self->fZ);
  }
  else if (strcmp(key, "phi") == 0)
  {
    lorx_orxFLOAT_to_lnumber(L, self->fPhi);
  }
  else if (strcmp(key, "b") == 0)
  {
    lorx_orxFLOAT_to_lnumber(L, self->fB);
  }
  else if (strcmp(key, "l") == 0)
  {
    lorx_orxFLOAT_to_lnumber(L, self->fL);
  }
  else if (strcmp(key, "v") == 0)
  {
    lorx_orxFLOAT_to_lnumber(L, self->fV);
  }
  else
  {
    luaL_getmetatable(L, "lorx.orxVECTOR#");
    lua_pushvalue(L, 2);
    lua_rawget(L, -2);
  }
  return 1;
}
static int l_lorx_orxVECTOR___newindex(lua_State *L)
{
  orxVECTOR* self = lorx_luserdata_to_orxVECTOR(L, 1);
  const char* key = luaL_checkstring(L, 2);
  if (strcmp(key, "x") == 0)
  {
    self->fX = lorx_lnumber_to_orxFLOAT(L, 3);
  }
  else if (strcmp(key, "rho") == 0)
  {
    self->fRho = lorx_lnumber_to_orxFLOAT(L, 3);
  }
  else if (strcmp(key, "r") == 0)
  {
    self->fR = lorx_lnumber_to_orxFLOAT(L, 3);
  }
  else if (strcmp(key, "h") == 0)
  {
    self->fH = lorx_lnumber_to_orxFLOAT(L, 3);
  }
  else if (strcmp(key, "y") == 0)
  {
    self->fY = lorx_lnumber_to_orxFLOAT(L, 3);
  }
  else if (strcmp(key, "theta") == 0)
  {
    self->fTheta = lorx_lnumber_to_orxFLOAT(L, 3);
  }
  else if (strcmp(key, "g") == 0)
  {
    self->fG = lorx_lnumber_to_orxFLOAT(L, 3);
  }
  else if (strcmp(key, "s") == 0)
  {
    self->fS = lorx_lnumber_to_orxFLOAT(L, 3);
  }
  else if (strcmp(key, "z") == 0)
  {
    self->fZ = lorx_lnumber_to_orxFLOAT(L, 3);
  }
  else if (strcmp(key, "phi") == 0)
  {
    self->fPhi = lorx_lnumber_to_orxFLOAT(L, 3);
  }
  else if (strcmp(key, "b") == 0)
  {
    self->fB = lorx_lnumber_to_orxFLOAT(L, 3);
  }
  else if (strcmp(key, "l") == 0)
  {
    self->fL = lorx_lnumber_to_orxFLOAT(L, 3);
  }
  else if (strcmp(key, "v") == 0)
  {
    self->fV = lorx_lnumber_to_orxFLOAT(L, 3);
  }
  else
  {
    luaL_getmetatable(L, "lorx.orxVECTOR");
    lua_pushvalue(L, 2);
    lua_pushvalue(L, 3);
    lua_rawset(L, -3);
  }
  return 0;
}

static const luaL_Reg l_lorx_vector_mm[] = {
  { "__index", l_lorx_orxVECTOR___index },
  { "__newindex", l_lorx_orxVECTOR___newindex },
  { NULL, NULL }
};

static const luaL_Reg l_lorx_vector_const_mm[] = {
  { "__index", l_lorx_orxVECTOR_const___index },
  { NULL, NULL }
};

#endif /* __LORX_PROPERTIES_H__ */