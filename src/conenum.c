/*
** Strictly-typed Orx enums conversion functions
** (generated with conversion.py)
*/


#include <stdio.h>
#include <lua.h>
#include <lualib.h>
#include <lauxlib.h>
#include <string.h>
#include <orx.h>
#include "helpers.h"
#include "conenum.h"

/*
 * Conversion functions for converting a lua enum string to an Orx enum variable (strictly typed)
 */
LORX_API orxANIM_EVENT lorx_lenumstr_to_orxANIM_EVENT(lua_State *L, int i)
{
  const char* s = luaL_checkstring(L, i);
  orxANIM_EVENT _retval = orxENUM_NONE;
  if (strcmp(s, "start") == 0)
  {
    _retval = orxANIM_EVENT_START;
  }
  else if (strcmp(s, "stop") == 0)
  {
    _retval = orxANIM_EVENT_STOP;
  }
  else if (strcmp(s, "cut") == 0)
  {
    _retval = orxANIM_EVENT_CUT;
  }
  else if (strcmp(s, "loop") == 0)
  {
    _retval = orxANIM_EVENT_LOOP;
  }
  else if (strcmp(s, "update") == 0)
  {
    _retval = orxANIM_EVENT_UPDATE;
  }
  else if (strcmp(s, "custom_event") == 0)
  {
    _retval = orxANIM_EVENT_CUSTOM_EVENT;
  }
  else if (strcmp(s, "none") == 0)
  {
    _retval = orxANIM_EVENT_NONE;
  }
  else
  {
    luaL_error(L, "unrecognized enum %s!", s);
  }
  return _retval;
}

LORX_API orxCLOCK_EVENT lorx_lenumstr_to_orxCLOCK_EVENT(lua_State *L, int i)
{
  const char* s = luaL_checkstring(L, i);
  orxCLOCK_EVENT _retval = orxENUM_NONE;
  if (strcmp(s, "restart") == 0)
  {
    _retval = orxCLOCK_EVENT_RESTART;
  }
  else if (strcmp(s, "resync") == 0)
  {
    _retval = orxCLOCK_EVENT_RESYNC;
  }
  else if (strcmp(s, "pause") == 0)
  {
    _retval = orxCLOCK_EVENT_PAUSE;
  }
  else if (strcmp(s, "unpause") == 0)
  {
    _retval = orxCLOCK_EVENT_UNPAUSE;
  }
  else if (strcmp(s, "none") == 0)
  {
    _retval = orxCLOCK_EVENT_NONE;
  }
  else
  {
    luaL_error(L, "unrecognized enum %s!", s);
  }
  return _retval;
}

LORX_API orxCLOCK_MODIFIER lorx_lenumstr_to_orxCLOCK_MODIFIER(lua_State *L, int i)
{
  const char* s = luaL_checkstring(L, i);
  orxCLOCK_MODIFIER _retval = orxENUM_NONE;
  if (strcmp(s, "fixed") == 0)
  {
    _retval = orxCLOCK_MODIFIER_FIXED;
  }
  else if (strcmp(s, "multiply") == 0)
  {
    _retval = orxCLOCK_MODIFIER_MULTIPLY;
  }
  else if (strcmp(s, "maxed") == 0)
  {
    _retval = orxCLOCK_MODIFIER_MAXED;
  }
  else if (strcmp(s, "average") == 0)
  {
    _retval = orxCLOCK_MODIFIER_AVERAGE;
  }
  else if (strcmp(s, "none") == 0)
  {
    _retval = orxCLOCK_MODIFIER_NONE;
  }
  else
  {
    luaL_error(L, "unrecognized enum %s!", s);
  }
  return _retval;
}

LORX_API orxCLOCK_PRIORITY lorx_lenumstr_to_orxCLOCK_PRIORITY(lua_State *L, int i)
{
  const char* s = luaL_checkstring(L, i);
  orxCLOCK_PRIORITY _retval = orxENUM_NONE;
  if (strcmp(s, "lowest") == 0)
  {
    _retval = orxCLOCK_PRIORITY_LOWEST;
  }
  else if (strcmp(s, "lower") == 0)
  {
    _retval = orxCLOCK_PRIORITY_LOWER;
  }
  else if (strcmp(s, "low") == 0)
  {
    _retval = orxCLOCK_PRIORITY_LOW;
  }
  else if (strcmp(s, "normal") == 0)
  {
    _retval = orxCLOCK_PRIORITY_NORMAL;
  }
  else if (strcmp(s, "high") == 0)
  {
    _retval = orxCLOCK_PRIORITY_HIGH;
  }
  else if (strcmp(s, "higher") == 0)
  {
    _retval = orxCLOCK_PRIORITY_HIGHER;
  }
  else if (strcmp(s, "highest") == 0)
  {
    _retval = orxCLOCK_PRIORITY_HIGHEST;
  }
  else if (strcmp(s, "none") == 0)
  {
    _retval = orxCLOCK_PRIORITY_NONE;
  }
  else
  {
    luaL_error(L, "unrecognized enum %s!", s);
  }
  return _retval;
}

LORX_API orxCOMMAND_VAR_TYPE lorx_lenumstr_to_orxCOMMAND_VAR_TYPE(lua_State *L, int i)
{
  const char* s = luaL_checkstring(L, i);
  orxCOMMAND_VAR_TYPE _retval = orxENUM_NONE;
  if (strcmp(s, "string") == 0)
  {
    _retval = orxCOMMAND_VAR_TYPE_STRING;
  }
  else if (strcmp(s, "float") == 0)
  {
    _retval = orxCOMMAND_VAR_TYPE_FLOAT;
  }
  else if (strcmp(s, "s32") == 0)
  {
    _retval = orxCOMMAND_VAR_TYPE_S32;
  }
  else if (strcmp(s, "u32") == 0)
  {
    _retval = orxCOMMAND_VAR_TYPE_U32;
  }
  else if (strcmp(s, "s64") == 0)
  {
    _retval = orxCOMMAND_VAR_TYPE_S64;
  }
  else if (strcmp(s, "u64") == 0)
  {
    _retval = orxCOMMAND_VAR_TYPE_U64;
  }
  else if (strcmp(s, "bool") == 0)
  {
    _retval = orxCOMMAND_VAR_TYPE_BOOL;
  }
  else if (strcmp(s, "vector") == 0)
  {
    _retval = orxCOMMAND_VAR_TYPE_VECTOR;
  }
  else if (strcmp(s, "numeric") == 0)
  {
    _retval = orxCOMMAND_VAR_TYPE_NUMERIC;
  }
  else if (strcmp(s, "none") == 0)
  {
    _retval = orxCOMMAND_VAR_TYPE_NONE;
  }
  else
  {
    luaL_error(L, "unrecognized enum %s!", s);
  }
  return _retval;
}

LORX_API orxCONFIG_EVENT lorx_lenumstr_to_orxCONFIG_EVENT(lua_State *L, int i)
{
  const char* s = luaL_checkstring(L, i);
  orxCONFIG_EVENT _retval = orxENUM_NONE;
  if (strcmp(s, "reload_start") == 0)
  {
    _retval = orxCONFIG_EVENT_RELOAD_START;
  }
  else if (strcmp(s, "reload_stop") == 0)
  {
    _retval = orxCONFIG_EVENT_RELOAD_STOP;
  }
  else if (strcmp(s, "none") == 0)
  {
    _retval = orxCONFIG_EVENT_NONE;
  }
  else
  {
    luaL_error(L, "unrecognized enum %s!", s);
  }
  return _retval;
}

LORX_API orxDEBUG_LEVEL lorx_lenumstr_to_orxDEBUG_LEVEL(lua_State *L, int i)
{
  const char* s = luaL_checkstring(L, i);
  orxDEBUG_LEVEL _retval = orxENUM_NONE;
  if (strcmp(s, "anim") == 0)
  {
    _retval = orxDEBUG_LEVEL_ANIM;
  }
  else if (strcmp(s, "config") == 0)
  {
    _retval = orxDEBUG_LEVEL_CONFIG;
  }
  else if (strcmp(s, "clock") == 0)
  {
    _retval = orxDEBUG_LEVEL_CLOCK;
  }
  else if (strcmp(s, "command") == 0)
  {
    _retval = orxDEBUG_LEVEL_COMMAND;
  }
  else if (strcmp(s, "display") == 0)
  {
    _retval = orxDEBUG_LEVEL_DISPLAY;
  }
  else if (strcmp(s, "file") == 0)
  {
    _retval = orxDEBUG_LEVEL_FILE;
  }
  else if (strcmp(s, "input") == 0)
  {
    _retval = orxDEBUG_LEVEL_INPUT;
  }
  else if (strcmp(s, "joystick") == 0)
  {
    _retval = orxDEBUG_LEVEL_JOYSTICK;
  }
  else if (strcmp(s, "keyboard") == 0)
  {
    _retval = orxDEBUG_LEVEL_KEYBOARD;
  }
  else if (strcmp(s, "memory") == 0)
  {
    _retval = orxDEBUG_LEVEL_MEMORY;
  }
  else if (strcmp(s, "mouse") == 0)
  {
    _retval = orxDEBUG_LEVEL_MOUSE;
  }
  else if (strcmp(s, "object") == 0)
  {
    _retval = orxDEBUG_LEVEL_OBJECT;
  }
  else if (strcmp(s, "param") == 0)
  {
    _retval = orxDEBUG_LEVEL_PARAM;
  }
  else if (strcmp(s, "physics") == 0)
  {
    _retval = orxDEBUG_LEVEL_PHYSICS;
  }
  else if (strcmp(s, "plugin") == 0)
  {
    _retval = orxDEBUG_LEVEL_PLUGIN;
  }
  else if (strcmp(s, "profiler") == 0)
  {
    _retval = orxDEBUG_LEVEL_PROFILER;
  }
  else if (strcmp(s, "render") == 0)
  {
    _retval = orxDEBUG_LEVEL_RENDER;
  }
  else if (strcmp(s, "screenshot") == 0)
  {
    _retval = orxDEBUG_LEVEL_SCREENSHOT;
  }
  else if (strcmp(s, "sound") == 0)
  {
    _retval = orxDEBUG_LEVEL_SOUND;
  }
  else if (strcmp(s, "system") == 0)
  {
    _retval = orxDEBUG_LEVEL_SYSTEM;
  }
  else if (strcmp(s, "timer") == 0)
  {
    _retval = orxDEBUG_LEVEL_TIMER;
  }
  else if (strcmp(s, "log") == 0)
  {
    _retval = orxDEBUG_LEVEL_LOG;
  }
  else if (strcmp(s, "assert") == 0)
  {
    _retval = orxDEBUG_LEVEL_ASSERT;
  }
  else if (strcmp(s, "user") == 0)
  {
    _retval = orxDEBUG_LEVEL_USER;
  }
  else if (strcmp(s, "all") == 0)
  {
    _retval = orxDEBUG_LEVEL_ALL;
  }
  else if (strcmp(s, "none") == 0)
  {
    _retval = orxDEBUG_LEVEL_NONE;
  }
  else
  {
    luaL_error(L, "unrecognized enum %s!", s);
  }
  return _retval;
}

LORX_API orxDISPLAY_BLEND_MODE lorx_lenumstr_to_orxDISPLAY_BLEND_MODE(lua_State *L, int i)
{
  const char* s = luaL_checkstring(L, i);
  orxDISPLAY_BLEND_MODE _retval = orxENUM_NONE;
  if (strcmp(s, "alpha") == 0)
  {
    _retval = orxDISPLAY_BLEND_MODE_ALPHA;
  }
  else if (strcmp(s, "multiply") == 0)
  {
    _retval = orxDISPLAY_BLEND_MODE_MULTIPLY;
  }
  else if (strcmp(s, "add") == 0)
  {
    _retval = orxDISPLAY_BLEND_MODE_ADD;
  }
  else if (strcmp(s, "premul") == 0)
  {
    _retval = orxDISPLAY_BLEND_MODE_PREMUL;
  }
  else if (strcmp(s, "none") == 0)
  {
    _retval = orxDISPLAY_BLEND_MODE_NONE;
  }
  else
  {
    luaL_error(L, "unrecognized enum %s!", s);
  }
  return _retval;
}

LORX_API orxDISPLAY_EVENT lorx_lenumstr_to_orxDISPLAY_EVENT(lua_State *L, int i)
{
  const char* s = luaL_checkstring(L, i);
  orxDISPLAY_EVENT _retval = orxENUM_NONE;
  if (strcmp(s, "set_video_mode") == 0)
  {
    _retval = orxDISPLAY_EVENT_SET_VIDEO_MODE;
  }
  else if (strcmp(s, "load_bitmap") == 0)
  {
    _retval = orxDISPLAY_EVENT_LOAD_BITMAP;
  }
  else if (strcmp(s, "none") == 0)
  {
    _retval = orxDISPLAY_EVENT_NONE;
  }
  else
  {
    luaL_error(L, "unrecognized enum %s!", s);
  }
  return _retval;
}

LORX_API orxDISPLAY_PRIMITIVE lorx_lenumstr_to_orxDISPLAY_PRIMITIVE(lua_State *L, int i)
{
  const char* s = luaL_checkstring(L, i);
  orxDISPLAY_PRIMITIVE _retval = orxENUM_NONE;
  if (strcmp(s, "points") == 0)
  {
    _retval = orxDISPLAY_PRIMITIVE_POINTS;
  }
  else if (strcmp(s, "lines") == 0)
  {
    _retval = orxDISPLAY_PRIMITIVE_LINES;
  }
  else if (strcmp(s, "line_loop") == 0)
  {
    _retval = orxDISPLAY_PRIMITIVE_LINE_LOOP;
  }
  else if (strcmp(s, "line_strip") == 0)
  {
    _retval = orxDISPLAY_PRIMITIVE_LINE_STRIP;
  }
  else if (strcmp(s, "triangles") == 0)
  {
    _retval = orxDISPLAY_PRIMITIVE_TRIANGLES;
  }
  else if (strcmp(s, "triangle_strip") == 0)
  {
    _retval = orxDISPLAY_PRIMITIVE_TRIANGLE_STRIP;
  }
  else if (strcmp(s, "triangle_fan") == 0)
  {
    _retval = orxDISPLAY_PRIMITIVE_TRIANGLE_FAN;
  }
  else if (strcmp(s, "none") == 0)
  {
    _retval = orxDISPLAY_PRIMITIVE_NONE;
  }
  else
  {
    luaL_error(L, "unrecognized enum %s!", s);
  }
  return _retval;
}

LORX_API orxDISPLAY_SMOOTHING lorx_lenumstr_to_orxDISPLAY_SMOOTHING(lua_State *L, int i)
{
  const char* s = luaL_checkstring(L, i);
  orxDISPLAY_SMOOTHING _retval = orxENUM_NONE;
  if (strcmp(s, "default") == 0)
  {
    _retval = orxDISPLAY_SMOOTHING_DEFAULT;
  }
  else if (strcmp(s, "on") == 0)
  {
    _retval = orxDISPLAY_SMOOTHING_ON;
  }
  else if (strcmp(s, "off") == 0)
  {
    _retval = orxDISPLAY_SMOOTHING_OFF;
  }
  else if (strcmp(s, "none") == 0)
  {
    _retval = orxDISPLAY_SMOOTHING_NONE;
  }
  else
  {
    luaL_error(L, "unrecognized enum %s!", s);
  }
  return _retval;
}

LORX_API orxEVENT_TYPE lorx_lenumstr_to_orxEVENT_TYPE(lua_State *L, int i)
{
  const char* s = luaL_checkstring(L, i);
  orxEVENT_TYPE _retval = orxENUM_NONE;
  if (strcmp(s, "anim") == 0)
  {
    _retval = orxEVENT_TYPE_ANIM;
  }
  else if (strcmp(s, "clock") == 0)
  {
    _retval = orxEVENT_TYPE_CLOCK;
  }
  else if (strcmp(s, "config") == 0)
  {
    _retval = orxEVENT_TYPE_CONFIG;
  }
  else if (strcmp(s, "display") == 0)
  {
    _retval = orxEVENT_TYPE_DISPLAY;
  }
  else if (strcmp(s, "fx") == 0)
  {
    _retval = orxEVENT_TYPE_FX;
  }
  else if (strcmp(s, "input") == 0)
  {
    _retval = orxEVENT_TYPE_INPUT;
  }
  else if (strcmp(s, "locale") == 0)
  {
    _retval = orxEVENT_TYPE_LOCALE;
  }
  else if (strcmp(s, "object") == 0)
  {
    _retval = orxEVENT_TYPE_OBJECT;
  }
  else if (strcmp(s, "render") == 0)
  {
    _retval = orxEVENT_TYPE_RENDER;
  }
  else if (strcmp(s, "physics") == 0)
  {
    _retval = orxEVENT_TYPE_PHYSICS;
  }
  else if (strcmp(s, "resource") == 0)
  {
    _retval = orxEVENT_TYPE_RESOURCE;
  }
  else if (strcmp(s, "shader") == 0)
  {
    _retval = orxEVENT_TYPE_SHADER;
  }
  else if (strcmp(s, "sound") == 0)
  {
    _retval = orxEVENT_TYPE_SOUND;
  }
  else if (strcmp(s, "spawner") == 0)
  {
    _retval = orxEVENT_TYPE_SPAWNER;
  }
  else if (strcmp(s, "system") == 0)
  {
    _retval = orxEVENT_TYPE_SYSTEM;
  }
  else if (strcmp(s, "texture") == 0)
  {
    _retval = orxEVENT_TYPE_TEXTURE;
  }
  else if (strcmp(s, "timeline") == 0)
  {
    _retval = orxEVENT_TYPE_TIMELINE;
  }
  else if (strcmp(s, "viewport") == 0)
  {
    _retval = orxEVENT_TYPE_VIEWPORT;
  }
  else if (strcmp(s, "first_reserved") == 0)
  {
    _retval = orxEVENT_TYPE_FIRST_RESERVED;
  }
  else if (strcmp(s, "last_reserved") == 0)
  {
    _retval = orxEVENT_TYPE_LAST_RESERVED;
  }
  else if (strcmp(s, "user_defined") == 0)
  {
    _retval = orxEVENT_TYPE_USER_DEFINED;
  }
  else if (strcmp(s, "none") == 0)
  {
    _retval = orxEVENT_TYPE_NONE;
  }
  else
  {
    luaL_error(L, "unrecognized enum %s!", s);
  }
  return _retval;
}

LORX_API orxFRAME_SPACE lorx_lenumstr_to_orxFRAME_SPACE(lua_State *L, int i)
{
  const char* s = luaL_checkstring(L, i);
  orxFRAME_SPACE _retval = orxENUM_NONE;
  if (strcmp(s, "global") == 0)
  {
    _retval = orxFRAME_SPACE_GLOBAL;
  }
  else if (strcmp(s, "local") == 0)
  {
    _retval = orxFRAME_SPACE_LOCAL;
  }
  else if (strcmp(s, "none") == 0)
  {
    _retval = orxFRAME_SPACE_NONE;
  }
  else
  {
    luaL_error(L, "unrecognized enum %s!", s);
  }
  return _retval;
}

LORX_API orxFX_CURVE lorx_lenumstr_to_orxFX_CURVE(lua_State *L, int i)
{
  const char* s = luaL_checkstring(L, i);
  orxFX_CURVE _retval = orxENUM_NONE;
  if (strcmp(s, "linear") == 0)
  {
    _retval = orxFX_CURVE_LINEAR;
  }
  else if (strcmp(s, "smooth") == 0)
  {
    _retval = orxFX_CURVE_SMOOTH;
  }
  else if (strcmp(s, "smoother") == 0)
  {
    _retval = orxFX_CURVE_SMOOTHER;
  }
  else if (strcmp(s, "triangle") == 0)
  {
    _retval = orxFX_CURVE_TRIANGLE;
  }
  else if (strcmp(s, "sine") == 0)
  {
    _retval = orxFX_CURVE_SINE;
  }
  else if (strcmp(s, "square") == 0)
  {
    _retval = orxFX_CURVE_SQUARE;
  }
  else if (strcmp(s, "none") == 0)
  {
    _retval = orxFX_CURVE_NONE;
  }
  else
  {
    luaL_error(L, "unrecognized enum %s!", s);
  }
  return _retval;
}

LORX_API orxFX_EVENT lorx_lenumstr_to_orxFX_EVENT(lua_State *L, int i)
{
  const char* s = luaL_checkstring(L, i);
  orxFX_EVENT _retval = orxENUM_NONE;
  if (strcmp(s, "start") == 0)
  {
    _retval = orxFX_EVENT_START;
  }
  else if (strcmp(s, "stop") == 0)
  {
    _retval = orxFX_EVENT_STOP;
  }
  else if (strcmp(s, "add") == 0)
  {
    _retval = orxFX_EVENT_ADD;
  }
  else if (strcmp(s, "remove") == 0)
  {
    _retval = orxFX_EVENT_REMOVE;
  }
  else if (strcmp(s, "loop") == 0)
  {
    _retval = orxFX_EVENT_LOOP;
  }
  else if (strcmp(s, "none") == 0)
  {
    _retval = orxFX_EVENT_NONE;
  }
  else
  {
    luaL_error(L, "unrecognized enum %s!", s);
  }
  return _retval;
}

LORX_API orxINPUT_EVENT lorx_lenumstr_to_orxINPUT_EVENT(lua_State *L, int i)
{
  const char* s = luaL_checkstring(L, i);
  orxINPUT_EVENT _retval = orxENUM_NONE;
  if (strcmp(s, "on") == 0)
  {
    _retval = orxINPUT_EVENT_ON;
  }
  else if (strcmp(s, "off") == 0)
  {
    _retval = orxINPUT_EVENT_OFF;
  }
  else if (strcmp(s, "select_set") == 0)
  {
    _retval = orxINPUT_EVENT_SELECT_SET;
  }
  else if (strcmp(s, "remove_set") == 0)
  {
    _retval = orxINPUT_EVENT_REMOVE_SET;
  }
  else if (strcmp(s, "none") == 0)
  {
    _retval = orxINPUT_EVENT_NONE;
  }
  else
  {
    luaL_error(L, "unrecognized enum %s!", s);
  }
  return _retval;
}

LORX_API orxINPUT_MODE lorx_lenumstr_to_orxINPUT_MODE(lua_State *L, int i)
{
  const char* s = luaL_checkstring(L, i);
  orxINPUT_MODE _retval = orxENUM_NONE;
  if (strcmp(s, "full") == 0)
  {
    _retval = orxINPUT_MODE_FULL;
  }
  else if (strcmp(s, "positive") == 0)
  {
    _retval = orxINPUT_MODE_POSITIVE;
  }
  else if (strcmp(s, "negative") == 0)
  {
    _retval = orxINPUT_MODE_NEGATIVE;
  }
  else if (strcmp(s, "none") == 0)
  {
    _retval = orxINPUT_MODE_NONE;
  }
  else
  {
    luaL_error(L, "unrecognized enum %s!", s);
  }
  return _retval;
}

LORX_API orxINPUT_TYPE lorx_lenumstr_to_orxINPUT_TYPE(lua_State *L, int i)
{
  const char* s = luaL_checkstring(L, i);
  orxINPUT_TYPE _retval = orxENUM_NONE;
  if (strcmp(s, "keyboard_key") == 0)
  {
    _retval = orxINPUT_TYPE_KEYBOARD_KEY;
  }
  else if (strcmp(s, "mouse_button") == 0)
  {
    _retval = orxINPUT_TYPE_MOUSE_BUTTON;
  }
  else if (strcmp(s, "mouse_axis") == 0)
  {
    _retval = orxINPUT_TYPE_MOUSE_AXIS;
  }
  else if (strcmp(s, "joystick_button") == 0)
  {
    _retval = orxINPUT_TYPE_JOYSTICK_BUTTON;
  }
  else if (strcmp(s, "joystick_axis") == 0)
  {
    _retval = orxINPUT_TYPE_JOYSTICK_AXIS;
  }
  else if (strcmp(s, "external") == 0)
  {
    _retval = orxINPUT_TYPE_EXTERNAL;
  }
  else if (strcmp(s, "none") == 0)
  {
    _retval = orxINPUT_TYPE_NONE;
  }
  else
  {
    luaL_error(L, "unrecognized enum %s!", s);
  }
  return _retval;
}

LORX_API orxJOYSTICK_AXIS lorx_lenumstr_to_orxJOYSTICK_AXIS(lua_State *L, int i)
{
  const char* s = luaL_checkstring(L, i);
  orxJOYSTICK_AXIS _retval = orxENUM_NONE;
  if (strcmp(s, "lx_1") == 0)
  {
    _retval = orxJOYSTICK_AXIS_LX_1;
  }
  else if (strcmp(s, "ly_1") == 0)
  {
    _retval = orxJOYSTICK_AXIS_LY_1;
  }
  else if (strcmp(s, "rx_1") == 0)
  {
    _retval = orxJOYSTICK_AXIS_RX_1;
  }
  else if (strcmp(s, "ry_1") == 0)
  {
    _retval = orxJOYSTICK_AXIS_RY_1;
  }
  else if (strcmp(s, "ltrigger_1") == 0)
  {
    _retval = orxJOYSTICK_AXIS_LTRIGGER_1;
  }
  else if (strcmp(s, "rtrigger_1") == 0)
  {
    _retval = orxJOYSTICK_AXIS_RTRIGGER_1;
  }
  else if (strcmp(s, "lx_2") == 0)
  {
    _retval = orxJOYSTICK_AXIS_LX_2;
  }
  else if (strcmp(s, "ly_2") == 0)
  {
    _retval = orxJOYSTICK_AXIS_LY_2;
  }
  else if (strcmp(s, "rx_2") == 0)
  {
    _retval = orxJOYSTICK_AXIS_RX_2;
  }
  else if (strcmp(s, "ry_2") == 0)
  {
    _retval = orxJOYSTICK_AXIS_RY_2;
  }
  else if (strcmp(s, "ltrigger_2") == 0)
  {
    _retval = orxJOYSTICK_AXIS_LTRIGGER_2;
  }
  else if (strcmp(s, "rtrigger_2") == 0)
  {
    _retval = orxJOYSTICK_AXIS_RTRIGGER_2;
  }
  else if (strcmp(s, "lx_3") == 0)
  {
    _retval = orxJOYSTICK_AXIS_LX_3;
  }
  else if (strcmp(s, "ly_3") == 0)
  {
    _retval = orxJOYSTICK_AXIS_LY_3;
  }
  else if (strcmp(s, "rx_3") == 0)
  {
    _retval = orxJOYSTICK_AXIS_RX_3;
  }
  else if (strcmp(s, "ry_3") == 0)
  {
    _retval = orxJOYSTICK_AXIS_RY_3;
  }
  else if (strcmp(s, "ltrigger_3") == 0)
  {
    _retval = orxJOYSTICK_AXIS_LTRIGGER_3;
  }
  else if (strcmp(s, "rtrigger_3") == 0)
  {
    _retval = orxJOYSTICK_AXIS_RTRIGGER_3;
  }
  else if (strcmp(s, "lx_4") == 0)
  {
    _retval = orxJOYSTICK_AXIS_LX_4;
  }
  else if (strcmp(s, "ly_4") == 0)
  {
    _retval = orxJOYSTICK_AXIS_LY_4;
  }
  else if (strcmp(s, "rx_4") == 0)
  {
    _retval = orxJOYSTICK_AXIS_RX_4;
  }
  else if (strcmp(s, "ry_4") == 0)
  {
    _retval = orxJOYSTICK_AXIS_RY_4;
  }
  else if (strcmp(s, "ltrigger_4") == 0)
  {
    _retval = orxJOYSTICK_AXIS_LTRIGGER_4;
  }
  else if (strcmp(s, "rtrigger_4") == 0)
  {
    _retval = orxJOYSTICK_AXIS_RTRIGGER_4;
  }
  else if (strcmp(s, "lx_5") == 0)
  {
    _retval = orxJOYSTICK_AXIS_LX_5;
  }
  else if (strcmp(s, "ly_5") == 0)
  {
    _retval = orxJOYSTICK_AXIS_LY_5;
  }
  else if (strcmp(s, "rx_5") == 0)
  {
    _retval = orxJOYSTICK_AXIS_RX_5;
  }
  else if (strcmp(s, "ry_5") == 0)
  {
    _retval = orxJOYSTICK_AXIS_RY_5;
  }
  else if (strcmp(s, "ltrigger_5") == 0)
  {
    _retval = orxJOYSTICK_AXIS_LTRIGGER_5;
  }
  else if (strcmp(s, "rtrigger_5") == 0)
  {
    _retval = orxJOYSTICK_AXIS_RTRIGGER_5;
  }
  else if (strcmp(s, "lx_6") == 0)
  {
    _retval = orxJOYSTICK_AXIS_LX_6;
  }
  else if (strcmp(s, "ly_6") == 0)
  {
    _retval = orxJOYSTICK_AXIS_LY_6;
  }
  else if (strcmp(s, "rx_6") == 0)
  {
    _retval = orxJOYSTICK_AXIS_RX_6;
  }
  else if (strcmp(s, "ry_6") == 0)
  {
    _retval = orxJOYSTICK_AXIS_RY_6;
  }
  else if (strcmp(s, "ltrigger_6") == 0)
  {
    _retval = orxJOYSTICK_AXIS_LTRIGGER_6;
  }
  else if (strcmp(s, "rtrigger_6") == 0)
  {
    _retval = orxJOYSTICK_AXIS_RTRIGGER_6;
  }
  else if (strcmp(s, "lx_7") == 0)
  {
    _retval = orxJOYSTICK_AXIS_LX_7;
  }
  else if (strcmp(s, "ly_7") == 0)
  {
    _retval = orxJOYSTICK_AXIS_LY_7;
  }
  else if (strcmp(s, "rx_7") == 0)
  {
    _retval = orxJOYSTICK_AXIS_RX_7;
  }
  else if (strcmp(s, "ry_7") == 0)
  {
    _retval = orxJOYSTICK_AXIS_RY_7;
  }
  else if (strcmp(s, "ltrigger_7") == 0)
  {
    _retval = orxJOYSTICK_AXIS_LTRIGGER_7;
  }
  else if (strcmp(s, "rtrigger_7") == 0)
  {
    _retval = orxJOYSTICK_AXIS_RTRIGGER_7;
  }
  else if (strcmp(s, "lx_8") == 0)
  {
    _retval = orxJOYSTICK_AXIS_LX_8;
  }
  else if (strcmp(s, "ly_8") == 0)
  {
    _retval = orxJOYSTICK_AXIS_LY_8;
  }
  else if (strcmp(s, "rx_8") == 0)
  {
    _retval = orxJOYSTICK_AXIS_RX_8;
  }
  else if (strcmp(s, "ry_8") == 0)
  {
    _retval = orxJOYSTICK_AXIS_RY_8;
  }
  else if (strcmp(s, "ltrigger_8") == 0)
  {
    _retval = orxJOYSTICK_AXIS_LTRIGGER_8;
  }
  else if (strcmp(s, "rtrigger_8") == 0)
  {
    _retval = orxJOYSTICK_AXIS_RTRIGGER_8;
  }
  else if (strcmp(s, "lx_9") == 0)
  {
    _retval = orxJOYSTICK_AXIS_LX_9;
  }
  else if (strcmp(s, "ly_9") == 0)
  {
    _retval = orxJOYSTICK_AXIS_LY_9;
  }
  else if (strcmp(s, "rx_9") == 0)
  {
    _retval = orxJOYSTICK_AXIS_RX_9;
  }
  else if (strcmp(s, "ry_9") == 0)
  {
    _retval = orxJOYSTICK_AXIS_RY_9;
  }
  else if (strcmp(s, "ltrigger_9") == 0)
  {
    _retval = orxJOYSTICK_AXIS_LTRIGGER_9;
  }
  else if (strcmp(s, "rtrigger_9") == 0)
  {
    _retval = orxJOYSTICK_AXIS_RTRIGGER_9;
  }
  else if (strcmp(s, "lx_10") == 0)
  {
    _retval = orxJOYSTICK_AXIS_LX_10;
  }
  else if (strcmp(s, "ly_10") == 0)
  {
    _retval = orxJOYSTICK_AXIS_LY_10;
  }
  else if (strcmp(s, "rx_10") == 0)
  {
    _retval = orxJOYSTICK_AXIS_RX_10;
  }
  else if (strcmp(s, "ry_10") == 0)
  {
    _retval = orxJOYSTICK_AXIS_RY_10;
  }
  else if (strcmp(s, "ltrigger_10") == 0)
  {
    _retval = orxJOYSTICK_AXIS_LTRIGGER_10;
  }
  else if (strcmp(s, "rtrigger_10") == 0)
  {
    _retval = orxJOYSTICK_AXIS_RTRIGGER_10;
  }
  else if (strcmp(s, "lx_11") == 0)
  {
    _retval = orxJOYSTICK_AXIS_LX_11;
  }
  else if (strcmp(s, "ly_11") == 0)
  {
    _retval = orxJOYSTICK_AXIS_LY_11;
  }
  else if (strcmp(s, "rx_11") == 0)
  {
    _retval = orxJOYSTICK_AXIS_RX_11;
  }
  else if (strcmp(s, "ry_11") == 0)
  {
    _retval = orxJOYSTICK_AXIS_RY_11;
  }
  else if (strcmp(s, "ltrigger_11") == 0)
  {
    _retval = orxJOYSTICK_AXIS_LTRIGGER_11;
  }
  else if (strcmp(s, "rtrigger_11") == 0)
  {
    _retval = orxJOYSTICK_AXIS_RTRIGGER_11;
  }
  else if (strcmp(s, "lx_12") == 0)
  {
    _retval = orxJOYSTICK_AXIS_LX_12;
  }
  else if (strcmp(s, "ly_12") == 0)
  {
    _retval = orxJOYSTICK_AXIS_LY_12;
  }
  else if (strcmp(s, "rx_12") == 0)
  {
    _retval = orxJOYSTICK_AXIS_RX_12;
  }
  else if (strcmp(s, "ry_12") == 0)
  {
    _retval = orxJOYSTICK_AXIS_RY_12;
  }
  else if (strcmp(s, "ltrigger_12") == 0)
  {
    _retval = orxJOYSTICK_AXIS_LTRIGGER_12;
  }
  else if (strcmp(s, "rtrigger_12") == 0)
  {
    _retval = orxJOYSTICK_AXIS_RTRIGGER_12;
  }
  else if (strcmp(s, "lx_13") == 0)
  {
    _retval = orxJOYSTICK_AXIS_LX_13;
  }
  else if (strcmp(s, "ly_13") == 0)
  {
    _retval = orxJOYSTICK_AXIS_LY_13;
  }
  else if (strcmp(s, "rx_13") == 0)
  {
    _retval = orxJOYSTICK_AXIS_RX_13;
  }
  else if (strcmp(s, "ry_13") == 0)
  {
    _retval = orxJOYSTICK_AXIS_RY_13;
  }
  else if (strcmp(s, "ltrigger_13") == 0)
  {
    _retval = orxJOYSTICK_AXIS_LTRIGGER_13;
  }
  else if (strcmp(s, "rtrigger_13") == 0)
  {
    _retval = orxJOYSTICK_AXIS_RTRIGGER_13;
  }
  else if (strcmp(s, "lx_14") == 0)
  {
    _retval = orxJOYSTICK_AXIS_LX_14;
  }
  else if (strcmp(s, "ly_14") == 0)
  {
    _retval = orxJOYSTICK_AXIS_LY_14;
  }
  else if (strcmp(s, "rx_14") == 0)
  {
    _retval = orxJOYSTICK_AXIS_RX_14;
  }
  else if (strcmp(s, "ry_14") == 0)
  {
    _retval = orxJOYSTICK_AXIS_RY_14;
  }
  else if (strcmp(s, "ltrigger_14") == 0)
  {
    _retval = orxJOYSTICK_AXIS_LTRIGGER_14;
  }
  else if (strcmp(s, "rtrigger_14") == 0)
  {
    _retval = orxJOYSTICK_AXIS_RTRIGGER_14;
  }
  else if (strcmp(s, "lx_15") == 0)
  {
    _retval = orxJOYSTICK_AXIS_LX_15;
  }
  else if (strcmp(s, "ly_15") == 0)
  {
    _retval = orxJOYSTICK_AXIS_LY_15;
  }
  else if (strcmp(s, "rx_15") == 0)
  {
    _retval = orxJOYSTICK_AXIS_RX_15;
  }
  else if (strcmp(s, "ry_15") == 0)
  {
    _retval = orxJOYSTICK_AXIS_RY_15;
  }
  else if (strcmp(s, "ltrigger_15") == 0)
  {
    _retval = orxJOYSTICK_AXIS_LTRIGGER_15;
  }
  else if (strcmp(s, "rtrigger_15") == 0)
  {
    _retval = orxJOYSTICK_AXIS_RTRIGGER_15;
  }
  else if (strcmp(s, "lx_16") == 0)
  {
    _retval = orxJOYSTICK_AXIS_LX_16;
  }
  else if (strcmp(s, "ly_16") == 0)
  {
    _retval = orxJOYSTICK_AXIS_LY_16;
  }
  else if (strcmp(s, "rx_16") == 0)
  {
    _retval = orxJOYSTICK_AXIS_RX_16;
  }
  else if (strcmp(s, "ry_16") == 0)
  {
    _retval = orxJOYSTICK_AXIS_RY_16;
  }
  else if (strcmp(s, "ltrigger_16") == 0)
  {
    _retval = orxJOYSTICK_AXIS_LTRIGGER_16;
  }
  else if (strcmp(s, "rtrigger_16") == 0)
  {
    _retval = orxJOYSTICK_AXIS_RTRIGGER_16;
  }
  else if (strcmp(s, "none") == 0)
  {
    _retval = orxJOYSTICK_AXIS_NONE;
  }
  else
  {
    luaL_error(L, "unrecognized enum %s!", s);
  }
  return _retval;
}

LORX_API orxJOYSTICK_BUTTON lorx_lenumstr_to_orxJOYSTICK_BUTTON(lua_State *L, int i)
{
  const char* s = luaL_checkstring(L, i);
  orxJOYSTICK_BUTTON _retval = orxENUM_NONE;
  {
    int flag = 0;
    {
      if (strcmp(s, "a_1") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_A_1;
      }
      else if (strcmp(s, "b_1") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_B_1;
      }
      else if (strcmp(s, "x_1") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_X_1;
      }
      else if (strcmp(s, "y_1") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_Y_1;
      }
      else if (strcmp(s, "lbumper_1") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_LBUMPER_1;
      }
      else if (strcmp(s, "rbumper_1") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_RBUMPER_1;
      }
      else if (strcmp(s, "back_1") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_BACK_1;
      }
      else if (strcmp(s, "start_1") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_START_1;
      }
      else if (strcmp(s, "guide_1") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_GUIDE_1;
      }
      else if (strcmp(s, "lthumb_1") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_LTHUMB_1;
      }
      else if (strcmp(s, "rthumb_1") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_RTHUMB_1;
      }
      else if (strcmp(s, "up_1") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_UP_1;
      }
      else if (strcmp(s, "right_1") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_RIGHT_1;
      }
      else if (strcmp(s, "down_1") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_DOWN_1;
      }
      else if (strcmp(s, "left_1") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_LEFT_1;
      }
      else if (strcmp(s, "1_1") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_1_1;
      }
      else if (strcmp(s, "2_1") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_2_1;
      }
      else if (strcmp(s, "3_1") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_3_1;
      }
      else if (strcmp(s, "4_1") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_4_1;
      }
      else if (strcmp(s, "5_1") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_5_1;
      }
      else if (strcmp(s, "6_1") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_6_1;
      }
      else if (strcmp(s, "7_1") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_7_1;
      }
      else if (strcmp(s, "8_1") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_8_1;
      }
      else if (strcmp(s, "9_1") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_9_1;
      }
      else if (strcmp(s, "10_1") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_10_1;
      }
      else if (strcmp(s, "11_1") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_11_1;
      }
      else if (strcmp(s, "12_1") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_12_1;
      }
      else if (strcmp(s, "13_1") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_13_1;
      }
      else if (strcmp(s, "14_1") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_14_1;
      }
      else if (strcmp(s, "15_1") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_15_1;
      }
      else if (strcmp(s, "16_1") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_16_1;
      }
      else if (strcmp(s, "17_1") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_17_1;
      }
      else if (strcmp(s, "18_1") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_18_1;
      }
      else if (strcmp(s, "19_1") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_19_1;
      }
      else if (strcmp(s, "20_1") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_20_1;
      }
      else if (strcmp(s, "21_1") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_21_1;
      }
      else if (strcmp(s, "22_1") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_22_1;
      }
      else if (strcmp(s, "23_1") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_23_1;
      }
      else if (strcmp(s, "24_1") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_24_1;
      }
      else if (strcmp(s, "25_1") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_25_1;
      }
      else if (strcmp(s, "a_2") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_A_2;
      }
      else if (strcmp(s, "b_2") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_B_2;
      }
      else if (strcmp(s, "x_2") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_X_2;
      }
      else if (strcmp(s, "y_2") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_Y_2;
      }
      else if (strcmp(s, "lbumper_2") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_LBUMPER_2;
      }
      else if (strcmp(s, "rbumper_2") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_RBUMPER_2;
      }
      else if (strcmp(s, "back_2") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_BACK_2;
      }
      else if (strcmp(s, "start_2") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_START_2;
      }
      else if (strcmp(s, "guide_2") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_GUIDE_2;
      }
      else if (strcmp(s, "lthumb_2") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_LTHUMB_2;
      }
      else if (strcmp(s, "rthumb_2") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_RTHUMB_2;
      }
      else if (strcmp(s, "up_2") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_UP_2;
      }
      else if (strcmp(s, "right_2") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_RIGHT_2;
      }
      else if (strcmp(s, "down_2") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_DOWN_2;
      }
      else if (strcmp(s, "left_2") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_LEFT_2;
      }
      else if (strcmp(s, "1_2") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_1_2;
      }
      else if (strcmp(s, "2_2") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_2_2;
      }
      else if (strcmp(s, "3_2") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_3_2;
      }
      else if (strcmp(s, "4_2") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_4_2;
      }
      else if (strcmp(s, "5_2") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_5_2;
      }
      else if (strcmp(s, "6_2") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_6_2;
      }
      else if (strcmp(s, "7_2") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_7_2;
      }
      else if (strcmp(s, "8_2") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_8_2;
      }
      else if (strcmp(s, "9_2") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_9_2;
      }
      else if (strcmp(s, "10_2") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_10_2;
      }
      else if (strcmp(s, "11_2") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_11_2;
      }
      else if (strcmp(s, "12_2") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_12_2;
      }
      else if (strcmp(s, "13_2") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_13_2;
      }
      else if (strcmp(s, "14_2") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_14_2;
      }
      else if (strcmp(s, "15_2") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_15_2;
      }
      else if (strcmp(s, "16_2") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_16_2;
      }
      else if (strcmp(s, "17_2") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_17_2;
      }
      else if (strcmp(s, "18_2") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_18_2;
      }
      else if (strcmp(s, "19_2") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_19_2;
      }
      else if (strcmp(s, "20_2") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_20_2;
      }
      else if (strcmp(s, "21_2") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_21_2;
      }
      else if (strcmp(s, "22_2") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_22_2;
      }
      else if (strcmp(s, "23_2") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_23_2;
      }
      else if (strcmp(s, "24_2") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_24_2;
      }
      else if (strcmp(s, "25_2") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_25_2;
      }
      else if (strcmp(s, "a_3") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_A_3;
      }
      else if (strcmp(s, "b_3") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_B_3;
      }
      else if (strcmp(s, "x_3") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_X_3;
      }
      else if (strcmp(s, "y_3") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_Y_3;
      }
      else if (strcmp(s, "lbumper_3") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_LBUMPER_3;
      }
      else if (strcmp(s, "rbumper_3") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_RBUMPER_3;
      }
      else if (strcmp(s, "back_3") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_BACK_3;
      }
      else if (strcmp(s, "start_3") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_START_3;
      }
      else if (strcmp(s, "guide_3") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_GUIDE_3;
      }
      else if (strcmp(s, "lthumb_3") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_LTHUMB_3;
      }
      else if (strcmp(s, "rthumb_3") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_RTHUMB_3;
      }
      else if (strcmp(s, "up_3") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_UP_3;
      }
      else if (strcmp(s, "right_3") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_RIGHT_3;
      }
      else if (strcmp(s, "down_3") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_DOWN_3;
      }
      else if (strcmp(s, "left_3") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_LEFT_3;
      }
      else if (strcmp(s, "1_3") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_1_3;
      }
      else if (strcmp(s, "2_3") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_2_3;
      }
      else if (strcmp(s, "3_3") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_3_3;
      }
      else if (strcmp(s, "4_3") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_4_3;
      }
      else if (strcmp(s, "5_3") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_5_3;
      }
      else if (strcmp(s, "6_3") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_6_3;
      }
      else if (strcmp(s, "7_3") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_7_3;
      }
      else if (strcmp(s, "8_3") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_8_3;
      }
      else if (strcmp(s, "9_3") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_9_3;
      }
      else if (strcmp(s, "10_3") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_10_3;
      }
      else if (strcmp(s, "11_3") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_11_3;
      }
      else if (strcmp(s, "12_3") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_12_3;
      }
      else if (strcmp(s, "13_3") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_13_3;
      }
      else if (strcmp(s, "14_3") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_14_3;
      }
      else if (strcmp(s, "15_3") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_15_3;
      }
      else if (strcmp(s, "16_3") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_16_3;
      }
      else if (strcmp(s, "17_3") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_17_3;
      }
      else if (strcmp(s, "18_3") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_18_3;
      }
      else if (strcmp(s, "19_3") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_19_3;
      }
      else if (strcmp(s, "20_3") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_20_3;
      }
      else if (strcmp(s, "21_3") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_21_3;
      }
      else if (strcmp(s, "22_3") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_22_3;
      }
      else if (strcmp(s, "23_3") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_23_3;
      }
      else if (strcmp(s, "24_3") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_24_3;
      }
      else if (strcmp(s, "25_3") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_25_3;
      }
      else if (strcmp(s, "a_4") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_A_4;
      }
      else if (strcmp(s, "b_4") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_B_4;
      }
      else if (strcmp(s, "x_4") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_X_4;
      }
      else if (strcmp(s, "y_4") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_Y_4;
      }
      else if (strcmp(s, "lbumper_4") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_LBUMPER_4;
      }
      else if (strcmp(s, "rbumper_4") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_RBUMPER_4;
      }
      else
      {
        flag = 1;
      }
    }
    if (flag)
    {
      flag = 0;
      if (strcmp(s, "back_4") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_BACK_4;
      }
      else if (strcmp(s, "start_4") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_START_4;
      }
      else if (strcmp(s, "guide_4") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_GUIDE_4;
      }
      else if (strcmp(s, "lthumb_4") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_LTHUMB_4;
      }
      else if (strcmp(s, "rthumb_4") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_RTHUMB_4;
      }
      else if (strcmp(s, "up_4") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_UP_4;
      }
      else if (strcmp(s, "right_4") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_RIGHT_4;
      }
      else if (strcmp(s, "down_4") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_DOWN_4;
      }
      else if (strcmp(s, "left_4") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_LEFT_4;
      }
      else if (strcmp(s, "1_4") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_1_4;
      }
      else if (strcmp(s, "2_4") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_2_4;
      }
      else if (strcmp(s, "3_4") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_3_4;
      }
      else if (strcmp(s, "4_4") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_4_4;
      }
      else if (strcmp(s, "5_4") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_5_4;
      }
      else if (strcmp(s, "6_4") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_6_4;
      }
      else if (strcmp(s, "7_4") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_7_4;
      }
      else if (strcmp(s, "8_4") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_8_4;
      }
      else if (strcmp(s, "9_4") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_9_4;
      }
      else if (strcmp(s, "10_4") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_10_4;
      }
      else if (strcmp(s, "11_4") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_11_4;
      }
      else if (strcmp(s, "12_4") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_12_4;
      }
      else if (strcmp(s, "13_4") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_13_4;
      }
      else if (strcmp(s, "14_4") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_14_4;
      }
      else if (strcmp(s, "15_4") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_15_4;
      }
      else if (strcmp(s, "16_4") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_16_4;
      }
      else if (strcmp(s, "17_4") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_17_4;
      }
      else if (strcmp(s, "18_4") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_18_4;
      }
      else if (strcmp(s, "19_4") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_19_4;
      }
      else if (strcmp(s, "20_4") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_20_4;
      }
      else if (strcmp(s, "21_4") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_21_4;
      }
      else if (strcmp(s, "22_4") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_22_4;
      }
      else if (strcmp(s, "23_4") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_23_4;
      }
      else if (strcmp(s, "24_4") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_24_4;
      }
      else if (strcmp(s, "25_4") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_25_4;
      }
      else if (strcmp(s, "a_5") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_A_5;
      }
      else if (strcmp(s, "b_5") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_B_5;
      }
      else if (strcmp(s, "x_5") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_X_5;
      }
      else if (strcmp(s, "y_5") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_Y_5;
      }
      else if (strcmp(s, "lbumper_5") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_LBUMPER_5;
      }
      else if (strcmp(s, "rbumper_5") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_RBUMPER_5;
      }
      else if (strcmp(s, "back_5") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_BACK_5;
      }
      else if (strcmp(s, "start_5") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_START_5;
      }
      else if (strcmp(s, "guide_5") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_GUIDE_5;
      }
      else if (strcmp(s, "lthumb_5") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_LTHUMB_5;
      }
      else if (strcmp(s, "rthumb_5") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_RTHUMB_5;
      }
      else if (strcmp(s, "up_5") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_UP_5;
      }
      else if (strcmp(s, "right_5") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_RIGHT_5;
      }
      else if (strcmp(s, "down_5") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_DOWN_5;
      }
      else if (strcmp(s, "left_5") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_LEFT_5;
      }
      else if (strcmp(s, "1_5") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_1_5;
      }
      else if (strcmp(s, "2_5") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_2_5;
      }
      else if (strcmp(s, "3_5") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_3_5;
      }
      else if (strcmp(s, "4_5") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_4_5;
      }
      else if (strcmp(s, "5_5") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_5_5;
      }
      else if (strcmp(s, "6_5") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_6_5;
      }
      else if (strcmp(s, "7_5") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_7_5;
      }
      else if (strcmp(s, "8_5") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_8_5;
      }
      else if (strcmp(s, "9_5") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_9_5;
      }
      else if (strcmp(s, "10_5") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_10_5;
      }
      else if (strcmp(s, "11_5") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_11_5;
      }
      else if (strcmp(s, "12_5") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_12_5;
      }
      else if (strcmp(s, "13_5") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_13_5;
      }
      else if (strcmp(s, "14_5") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_14_5;
      }
      else if (strcmp(s, "15_5") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_15_5;
      }
      else if (strcmp(s, "16_5") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_16_5;
      }
      else if (strcmp(s, "17_5") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_17_5;
      }
      else if (strcmp(s, "18_5") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_18_5;
      }
      else if (strcmp(s, "19_5") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_19_5;
      }
      else if (strcmp(s, "20_5") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_20_5;
      }
      else if (strcmp(s, "21_5") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_21_5;
      }
      else if (strcmp(s, "22_5") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_22_5;
      }
      else if (strcmp(s, "23_5") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_23_5;
      }
      else if (strcmp(s, "24_5") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_24_5;
      }
      else if (strcmp(s, "25_5") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_25_5;
      }
      else if (strcmp(s, "a_6") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_A_6;
      }
      else if (strcmp(s, "b_6") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_B_6;
      }
      else if (strcmp(s, "x_6") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_X_6;
      }
      else if (strcmp(s, "y_6") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_Y_6;
      }
      else if (strcmp(s, "lbumper_6") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_LBUMPER_6;
      }
      else if (strcmp(s, "rbumper_6") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_RBUMPER_6;
      }
      else if (strcmp(s, "back_6") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_BACK_6;
      }
      else if (strcmp(s, "start_6") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_START_6;
      }
      else if (strcmp(s, "guide_6") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_GUIDE_6;
      }
      else if (strcmp(s, "lthumb_6") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_LTHUMB_6;
      }
      else if (strcmp(s, "rthumb_6") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_RTHUMB_6;
      }
      else if (strcmp(s, "up_6") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_UP_6;
      }
      else if (strcmp(s, "right_6") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_RIGHT_6;
      }
      else if (strcmp(s, "down_6") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_DOWN_6;
      }
      else if (strcmp(s, "left_6") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_LEFT_6;
      }
      else if (strcmp(s, "1_6") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_1_6;
      }
      else if (strcmp(s, "2_6") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_2_6;
      }
      else if (strcmp(s, "3_6") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_3_6;
      }
      else if (strcmp(s, "4_6") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_4_6;
      }
      else if (strcmp(s, "5_6") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_5_6;
      }
      else if (strcmp(s, "6_6") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_6_6;
      }
      else if (strcmp(s, "7_6") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_7_6;
      }
      else if (strcmp(s, "8_6") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_8_6;
      }
      else if (strcmp(s, "9_6") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_9_6;
      }
      else if (strcmp(s, "10_6") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_10_6;
      }
      else if (strcmp(s, "11_6") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_11_6;
      }
      else if (strcmp(s, "12_6") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_12_6;
      }
      else if (strcmp(s, "13_6") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_13_6;
      }
      else if (strcmp(s, "14_6") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_14_6;
      }
      else if (strcmp(s, "15_6") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_15_6;
      }
      else if (strcmp(s, "16_6") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_16_6;
      }
      else if (strcmp(s, "17_6") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_17_6;
      }
      else if (strcmp(s, "18_6") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_18_6;
      }
      else if (strcmp(s, "19_6") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_19_6;
      }
      else if (strcmp(s, "20_6") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_20_6;
      }
      else if (strcmp(s, "21_6") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_21_6;
      }
      else if (strcmp(s, "22_6") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_22_6;
      }
      else if (strcmp(s, "23_6") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_23_6;
      }
      else if (strcmp(s, "24_6") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_24_6;
      }
      else if (strcmp(s, "25_6") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_25_6;
      }
      else if (strcmp(s, "a_7") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_A_7;
      }
      else if (strcmp(s, "b_7") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_B_7;
      }
      else if (strcmp(s, "x_7") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_X_7;
      }
      else if (strcmp(s, "y_7") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_Y_7;
      }
      else if (strcmp(s, "lbumper_7") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_LBUMPER_7;
      }
      else if (strcmp(s, "rbumper_7") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_RBUMPER_7;
      }
      else if (strcmp(s, "back_7") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_BACK_7;
      }
      else if (strcmp(s, "start_7") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_START_7;
      }
      else if (strcmp(s, "guide_7") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_GUIDE_7;
      }
      else if (strcmp(s, "lthumb_7") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_LTHUMB_7;
      }
      else if (strcmp(s, "rthumb_7") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_RTHUMB_7;
      }
      else if (strcmp(s, "up_7") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_UP_7;
      }
      else
      {
        flag = 1;
      }
    }
    if (flag)
    {
      flag = 0;
      if (strcmp(s, "right_7") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_RIGHT_7;
      }
      else if (strcmp(s, "down_7") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_DOWN_7;
      }
      else if (strcmp(s, "left_7") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_LEFT_7;
      }
      else if (strcmp(s, "1_7") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_1_7;
      }
      else if (strcmp(s, "2_7") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_2_7;
      }
      else if (strcmp(s, "3_7") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_3_7;
      }
      else if (strcmp(s, "4_7") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_4_7;
      }
      else if (strcmp(s, "5_7") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_5_7;
      }
      else if (strcmp(s, "6_7") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_6_7;
      }
      else if (strcmp(s, "7_7") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_7_7;
      }
      else if (strcmp(s, "8_7") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_8_7;
      }
      else if (strcmp(s, "9_7") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_9_7;
      }
      else if (strcmp(s, "10_7") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_10_7;
      }
      else if (strcmp(s, "11_7") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_11_7;
      }
      else if (strcmp(s, "12_7") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_12_7;
      }
      else if (strcmp(s, "13_7") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_13_7;
      }
      else if (strcmp(s, "14_7") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_14_7;
      }
      else if (strcmp(s, "15_7") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_15_7;
      }
      else if (strcmp(s, "16_7") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_16_7;
      }
      else if (strcmp(s, "17_7") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_17_7;
      }
      else if (strcmp(s, "18_7") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_18_7;
      }
      else if (strcmp(s, "19_7") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_19_7;
      }
      else if (strcmp(s, "20_7") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_20_7;
      }
      else if (strcmp(s, "21_7") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_21_7;
      }
      else if (strcmp(s, "22_7") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_22_7;
      }
      else if (strcmp(s, "23_7") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_23_7;
      }
      else if (strcmp(s, "24_7") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_24_7;
      }
      else if (strcmp(s, "25_7") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_25_7;
      }
      else if (strcmp(s, "a_8") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_A_8;
      }
      else if (strcmp(s, "b_8") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_B_8;
      }
      else if (strcmp(s, "x_8") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_X_8;
      }
      else if (strcmp(s, "y_8") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_Y_8;
      }
      else if (strcmp(s, "lbumper_8") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_LBUMPER_8;
      }
      else if (strcmp(s, "rbumper_8") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_RBUMPER_8;
      }
      else if (strcmp(s, "back_8") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_BACK_8;
      }
      else if (strcmp(s, "start_8") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_START_8;
      }
      else if (strcmp(s, "guide_8") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_GUIDE_8;
      }
      else if (strcmp(s, "lthumb_8") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_LTHUMB_8;
      }
      else if (strcmp(s, "rthumb_8") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_RTHUMB_8;
      }
      else if (strcmp(s, "up_8") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_UP_8;
      }
      else if (strcmp(s, "right_8") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_RIGHT_8;
      }
      else if (strcmp(s, "down_8") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_DOWN_8;
      }
      else if (strcmp(s, "left_8") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_LEFT_8;
      }
      else if (strcmp(s, "1_8") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_1_8;
      }
      else if (strcmp(s, "2_8") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_2_8;
      }
      else if (strcmp(s, "3_8") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_3_8;
      }
      else if (strcmp(s, "4_8") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_4_8;
      }
      else if (strcmp(s, "5_8") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_5_8;
      }
      else if (strcmp(s, "6_8") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_6_8;
      }
      else if (strcmp(s, "7_8") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_7_8;
      }
      else if (strcmp(s, "8_8") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_8_8;
      }
      else if (strcmp(s, "9_8") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_9_8;
      }
      else if (strcmp(s, "10_8") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_10_8;
      }
      else if (strcmp(s, "11_8") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_11_8;
      }
      else if (strcmp(s, "12_8") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_12_8;
      }
      else if (strcmp(s, "13_8") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_13_8;
      }
      else if (strcmp(s, "14_8") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_14_8;
      }
      else if (strcmp(s, "15_8") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_15_8;
      }
      else if (strcmp(s, "16_8") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_16_8;
      }
      else if (strcmp(s, "17_8") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_17_8;
      }
      else if (strcmp(s, "18_8") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_18_8;
      }
      else if (strcmp(s, "19_8") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_19_8;
      }
      else if (strcmp(s, "20_8") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_20_8;
      }
      else if (strcmp(s, "21_8") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_21_8;
      }
      else if (strcmp(s, "22_8") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_22_8;
      }
      else if (strcmp(s, "23_8") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_23_8;
      }
      else if (strcmp(s, "24_8") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_24_8;
      }
      else if (strcmp(s, "25_8") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_25_8;
      }
      else if (strcmp(s, "a_9") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_A_9;
      }
      else if (strcmp(s, "b_9") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_B_9;
      }
      else if (strcmp(s, "x_9") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_X_9;
      }
      else if (strcmp(s, "y_9") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_Y_9;
      }
      else if (strcmp(s, "lbumper_9") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_LBUMPER_9;
      }
      else if (strcmp(s, "rbumper_9") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_RBUMPER_9;
      }
      else if (strcmp(s, "back_9") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_BACK_9;
      }
      else if (strcmp(s, "start_9") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_START_9;
      }
      else if (strcmp(s, "guide_9") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_GUIDE_9;
      }
      else if (strcmp(s, "lthumb_9") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_LTHUMB_9;
      }
      else if (strcmp(s, "rthumb_9") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_RTHUMB_9;
      }
      else if (strcmp(s, "up_9") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_UP_9;
      }
      else if (strcmp(s, "right_9") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_RIGHT_9;
      }
      else if (strcmp(s, "down_9") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_DOWN_9;
      }
      else if (strcmp(s, "left_9") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_LEFT_9;
      }
      else if (strcmp(s, "1_9") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_1_9;
      }
      else if (strcmp(s, "2_9") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_2_9;
      }
      else if (strcmp(s, "3_9") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_3_9;
      }
      else if (strcmp(s, "4_9") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_4_9;
      }
      else if (strcmp(s, "5_9") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_5_9;
      }
      else if (strcmp(s, "6_9") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_6_9;
      }
      else if (strcmp(s, "7_9") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_7_9;
      }
      else if (strcmp(s, "8_9") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_8_9;
      }
      else if (strcmp(s, "9_9") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_9_9;
      }
      else if (strcmp(s, "10_9") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_10_9;
      }
      else if (strcmp(s, "11_9") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_11_9;
      }
      else if (strcmp(s, "12_9") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_12_9;
      }
      else if (strcmp(s, "13_9") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_13_9;
      }
      else if (strcmp(s, "14_9") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_14_9;
      }
      else if (strcmp(s, "15_9") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_15_9;
      }
      else if (strcmp(s, "16_9") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_16_9;
      }
      else if (strcmp(s, "17_9") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_17_9;
      }
      else if (strcmp(s, "18_9") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_18_9;
      }
      else if (strcmp(s, "19_9") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_19_9;
      }
      else if (strcmp(s, "20_9") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_20_9;
      }
      else if (strcmp(s, "21_9") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_21_9;
      }
      else if (strcmp(s, "22_9") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_22_9;
      }
      else if (strcmp(s, "23_9") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_23_9;
      }
      else if (strcmp(s, "24_9") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_24_9;
      }
      else if (strcmp(s, "25_9") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_25_9;
      }
      else if (strcmp(s, "a_10") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_A_10;
      }
      else if (strcmp(s, "b_10") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_B_10;
      }
      else if (strcmp(s, "x_10") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_X_10;
      }
      else if (strcmp(s, "y_10") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_Y_10;
      }
      else if (strcmp(s, "lbumper_10") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_LBUMPER_10;
      }
      else if (strcmp(s, "rbumper_10") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_RBUMPER_10;
      }
      else if (strcmp(s, "back_10") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_BACK_10;
      }
      else if (strcmp(s, "start_10") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_START_10;
      }
      else if (strcmp(s, "guide_10") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_GUIDE_10;
      }
      else if (strcmp(s, "lthumb_10") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_LTHUMB_10;
      }
      else if (strcmp(s, "rthumb_10") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_RTHUMB_10;
      }
      else if (strcmp(s, "up_10") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_UP_10;
      }
      else if (strcmp(s, "right_10") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_RIGHT_10;
      }
      else if (strcmp(s, "down_10") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_DOWN_10;
      }
      else if (strcmp(s, "left_10") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_LEFT_10;
      }
      else if (strcmp(s, "1_10") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_1_10;
      }
      else if (strcmp(s, "2_10") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_2_10;
      }
      else if (strcmp(s, "3_10") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_3_10;
      }
      else
      {
        flag = 1;
      }
    }
    if (flag)
    {
      flag = 0;
      if (strcmp(s, "4_10") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_4_10;
      }
      else if (strcmp(s, "5_10") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_5_10;
      }
      else if (strcmp(s, "6_10") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_6_10;
      }
      else if (strcmp(s, "7_10") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_7_10;
      }
      else if (strcmp(s, "8_10") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_8_10;
      }
      else if (strcmp(s, "9_10") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_9_10;
      }
      else if (strcmp(s, "10_10") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_10_10;
      }
      else if (strcmp(s, "11_10") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_11_10;
      }
      else if (strcmp(s, "12_10") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_12_10;
      }
      else if (strcmp(s, "13_10") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_13_10;
      }
      else if (strcmp(s, "14_10") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_14_10;
      }
      else if (strcmp(s, "15_10") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_15_10;
      }
      else if (strcmp(s, "16_10") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_16_10;
      }
      else if (strcmp(s, "17_10") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_17_10;
      }
      else if (strcmp(s, "18_10") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_18_10;
      }
      else if (strcmp(s, "19_10") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_19_10;
      }
      else if (strcmp(s, "20_10") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_20_10;
      }
      else if (strcmp(s, "21_10") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_21_10;
      }
      else if (strcmp(s, "22_10") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_22_10;
      }
      else if (strcmp(s, "23_10") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_23_10;
      }
      else if (strcmp(s, "24_10") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_24_10;
      }
      else if (strcmp(s, "25_10") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_25_10;
      }
      else if (strcmp(s, "a_11") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_A_11;
      }
      else if (strcmp(s, "b_11") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_B_11;
      }
      else if (strcmp(s, "x_11") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_X_11;
      }
      else if (strcmp(s, "y_11") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_Y_11;
      }
      else if (strcmp(s, "lbumper_11") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_LBUMPER_11;
      }
      else if (strcmp(s, "rbumper_11") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_RBUMPER_11;
      }
      else if (strcmp(s, "back_11") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_BACK_11;
      }
      else if (strcmp(s, "start_11") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_START_11;
      }
      else if (strcmp(s, "guide_11") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_GUIDE_11;
      }
      else if (strcmp(s, "lthumb_11") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_LTHUMB_11;
      }
      else if (strcmp(s, "rthumb_11") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_RTHUMB_11;
      }
      else if (strcmp(s, "up_11") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_UP_11;
      }
      else if (strcmp(s, "right_11") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_RIGHT_11;
      }
      else if (strcmp(s, "down_11") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_DOWN_11;
      }
      else if (strcmp(s, "left_11") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_LEFT_11;
      }
      else if (strcmp(s, "1_11") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_1_11;
      }
      else if (strcmp(s, "2_11") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_2_11;
      }
      else if (strcmp(s, "3_11") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_3_11;
      }
      else if (strcmp(s, "4_11") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_4_11;
      }
      else if (strcmp(s, "5_11") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_5_11;
      }
      else if (strcmp(s, "6_11") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_6_11;
      }
      else if (strcmp(s, "7_11") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_7_11;
      }
      else if (strcmp(s, "8_11") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_8_11;
      }
      else if (strcmp(s, "9_11") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_9_11;
      }
      else if (strcmp(s, "10_11") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_10_11;
      }
      else if (strcmp(s, "11_11") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_11_11;
      }
      else if (strcmp(s, "12_11") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_12_11;
      }
      else if (strcmp(s, "13_11") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_13_11;
      }
      else if (strcmp(s, "14_11") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_14_11;
      }
      else if (strcmp(s, "15_11") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_15_11;
      }
      else if (strcmp(s, "16_11") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_16_11;
      }
      else if (strcmp(s, "17_11") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_17_11;
      }
      else if (strcmp(s, "18_11") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_18_11;
      }
      else if (strcmp(s, "19_11") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_19_11;
      }
      else if (strcmp(s, "20_11") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_20_11;
      }
      else if (strcmp(s, "21_11") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_21_11;
      }
      else if (strcmp(s, "22_11") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_22_11;
      }
      else if (strcmp(s, "23_11") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_23_11;
      }
      else if (strcmp(s, "24_11") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_24_11;
      }
      else if (strcmp(s, "25_11") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_25_11;
      }
      else if (strcmp(s, "a_12") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_A_12;
      }
      else if (strcmp(s, "b_12") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_B_12;
      }
      else if (strcmp(s, "x_12") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_X_12;
      }
      else if (strcmp(s, "y_12") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_Y_12;
      }
      else if (strcmp(s, "lbumper_12") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_LBUMPER_12;
      }
      else if (strcmp(s, "rbumper_12") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_RBUMPER_12;
      }
      else if (strcmp(s, "back_12") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_BACK_12;
      }
      else if (strcmp(s, "start_12") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_START_12;
      }
      else if (strcmp(s, "guide_12") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_GUIDE_12;
      }
      else if (strcmp(s, "lthumb_12") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_LTHUMB_12;
      }
      else if (strcmp(s, "rthumb_12") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_RTHUMB_12;
      }
      else if (strcmp(s, "up_12") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_UP_12;
      }
      else if (strcmp(s, "right_12") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_RIGHT_12;
      }
      else if (strcmp(s, "down_12") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_DOWN_12;
      }
      else if (strcmp(s, "left_12") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_LEFT_12;
      }
      else if (strcmp(s, "1_12") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_1_12;
      }
      else if (strcmp(s, "2_12") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_2_12;
      }
      else if (strcmp(s, "3_12") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_3_12;
      }
      else if (strcmp(s, "4_12") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_4_12;
      }
      else if (strcmp(s, "5_12") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_5_12;
      }
      else if (strcmp(s, "6_12") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_6_12;
      }
      else if (strcmp(s, "7_12") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_7_12;
      }
      else if (strcmp(s, "8_12") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_8_12;
      }
      else if (strcmp(s, "9_12") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_9_12;
      }
      else if (strcmp(s, "10_12") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_10_12;
      }
      else if (strcmp(s, "11_12") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_11_12;
      }
      else if (strcmp(s, "12_12") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_12_12;
      }
      else if (strcmp(s, "13_12") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_13_12;
      }
      else if (strcmp(s, "14_12") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_14_12;
      }
      else if (strcmp(s, "15_12") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_15_12;
      }
      else if (strcmp(s, "16_12") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_16_12;
      }
      else if (strcmp(s, "17_12") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_17_12;
      }
      else if (strcmp(s, "18_12") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_18_12;
      }
      else if (strcmp(s, "19_12") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_19_12;
      }
      else if (strcmp(s, "20_12") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_20_12;
      }
      else if (strcmp(s, "21_12") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_21_12;
      }
      else if (strcmp(s, "22_12") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_22_12;
      }
      else if (strcmp(s, "23_12") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_23_12;
      }
      else if (strcmp(s, "24_12") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_24_12;
      }
      else if (strcmp(s, "25_12") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_25_12;
      }
      else if (strcmp(s, "a_13") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_A_13;
      }
      else if (strcmp(s, "b_13") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_B_13;
      }
      else if (strcmp(s, "x_13") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_X_13;
      }
      else if (strcmp(s, "y_13") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_Y_13;
      }
      else if (strcmp(s, "lbumper_13") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_LBUMPER_13;
      }
      else if (strcmp(s, "rbumper_13") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_RBUMPER_13;
      }
      else if (strcmp(s, "back_13") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_BACK_13;
      }
      else if (strcmp(s, "start_13") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_START_13;
      }
      else if (strcmp(s, "guide_13") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_GUIDE_13;
      }
      else if (strcmp(s, "lthumb_13") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_LTHUMB_13;
      }
      else if (strcmp(s, "rthumb_13") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_RTHUMB_13;
      }
      else if (strcmp(s, "up_13") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_UP_13;
      }
      else if (strcmp(s, "right_13") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_RIGHT_13;
      }
      else if (strcmp(s, "down_13") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_DOWN_13;
      }
      else if (strcmp(s, "left_13") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_LEFT_13;
      }
      else if (strcmp(s, "1_13") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_1_13;
      }
      else if (strcmp(s, "2_13") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_2_13;
      }
      else if (strcmp(s, "3_13") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_3_13;
      }
      else if (strcmp(s, "4_13") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_4_13;
      }
      else if (strcmp(s, "5_13") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_5_13;
      }
      else if (strcmp(s, "6_13") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_6_13;
      }
      else if (strcmp(s, "7_13") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_7_13;
      }
      else if (strcmp(s, "8_13") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_8_13;
      }
      else if (strcmp(s, "9_13") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_9_13;
      }
      else
      {
        flag = 1;
      }
    }
    if (flag)
    {
      flag = 0;
      if (strcmp(s, "10_13") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_10_13;
      }
      else if (strcmp(s, "11_13") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_11_13;
      }
      else if (strcmp(s, "12_13") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_12_13;
      }
      else if (strcmp(s, "13_13") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_13_13;
      }
      else if (strcmp(s, "14_13") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_14_13;
      }
      else if (strcmp(s, "15_13") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_15_13;
      }
      else if (strcmp(s, "16_13") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_16_13;
      }
      else if (strcmp(s, "17_13") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_17_13;
      }
      else if (strcmp(s, "18_13") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_18_13;
      }
      else if (strcmp(s, "19_13") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_19_13;
      }
      else if (strcmp(s, "20_13") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_20_13;
      }
      else if (strcmp(s, "21_13") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_21_13;
      }
      else if (strcmp(s, "22_13") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_22_13;
      }
      else if (strcmp(s, "23_13") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_23_13;
      }
      else if (strcmp(s, "24_13") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_24_13;
      }
      else if (strcmp(s, "25_13") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_25_13;
      }
      else if (strcmp(s, "a_14") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_A_14;
      }
      else if (strcmp(s, "b_14") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_B_14;
      }
      else if (strcmp(s, "x_14") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_X_14;
      }
      else if (strcmp(s, "y_14") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_Y_14;
      }
      else if (strcmp(s, "lbumper_14") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_LBUMPER_14;
      }
      else if (strcmp(s, "rbumper_14") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_RBUMPER_14;
      }
      else if (strcmp(s, "back_14") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_BACK_14;
      }
      else if (strcmp(s, "start_14") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_START_14;
      }
      else if (strcmp(s, "guide_14") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_GUIDE_14;
      }
      else if (strcmp(s, "lthumb_14") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_LTHUMB_14;
      }
      else if (strcmp(s, "rthumb_14") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_RTHUMB_14;
      }
      else if (strcmp(s, "up_14") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_UP_14;
      }
      else if (strcmp(s, "right_14") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_RIGHT_14;
      }
      else if (strcmp(s, "down_14") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_DOWN_14;
      }
      else if (strcmp(s, "left_14") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_LEFT_14;
      }
      else if (strcmp(s, "1_14") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_1_14;
      }
      else if (strcmp(s, "2_14") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_2_14;
      }
      else if (strcmp(s, "3_14") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_3_14;
      }
      else if (strcmp(s, "4_14") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_4_14;
      }
      else if (strcmp(s, "5_14") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_5_14;
      }
      else if (strcmp(s, "6_14") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_6_14;
      }
      else if (strcmp(s, "7_14") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_7_14;
      }
      else if (strcmp(s, "8_14") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_8_14;
      }
      else if (strcmp(s, "9_14") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_9_14;
      }
      else if (strcmp(s, "10_14") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_10_14;
      }
      else if (strcmp(s, "11_14") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_11_14;
      }
      else if (strcmp(s, "12_14") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_12_14;
      }
      else if (strcmp(s, "13_14") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_13_14;
      }
      else if (strcmp(s, "14_14") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_14_14;
      }
      else if (strcmp(s, "15_14") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_15_14;
      }
      else if (strcmp(s, "16_14") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_16_14;
      }
      else if (strcmp(s, "17_14") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_17_14;
      }
      else if (strcmp(s, "18_14") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_18_14;
      }
      else if (strcmp(s, "19_14") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_19_14;
      }
      else if (strcmp(s, "20_14") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_20_14;
      }
      else if (strcmp(s, "21_14") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_21_14;
      }
      else if (strcmp(s, "22_14") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_22_14;
      }
      else if (strcmp(s, "23_14") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_23_14;
      }
      else if (strcmp(s, "24_14") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_24_14;
      }
      else if (strcmp(s, "25_14") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_25_14;
      }
      else if (strcmp(s, "a_15") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_A_15;
      }
      else if (strcmp(s, "b_15") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_B_15;
      }
      else if (strcmp(s, "x_15") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_X_15;
      }
      else if (strcmp(s, "y_15") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_Y_15;
      }
      else if (strcmp(s, "lbumper_15") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_LBUMPER_15;
      }
      else if (strcmp(s, "rbumper_15") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_RBUMPER_15;
      }
      else if (strcmp(s, "back_15") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_BACK_15;
      }
      else if (strcmp(s, "start_15") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_START_15;
      }
      else if (strcmp(s, "guide_15") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_GUIDE_15;
      }
      else if (strcmp(s, "lthumb_15") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_LTHUMB_15;
      }
      else if (strcmp(s, "rthumb_15") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_RTHUMB_15;
      }
      else if (strcmp(s, "up_15") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_UP_15;
      }
      else if (strcmp(s, "right_15") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_RIGHT_15;
      }
      else if (strcmp(s, "down_15") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_DOWN_15;
      }
      else if (strcmp(s, "left_15") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_LEFT_15;
      }
      else if (strcmp(s, "1_15") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_1_15;
      }
      else if (strcmp(s, "2_15") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_2_15;
      }
      else if (strcmp(s, "3_15") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_3_15;
      }
      else if (strcmp(s, "4_15") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_4_15;
      }
      else if (strcmp(s, "5_15") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_5_15;
      }
      else if (strcmp(s, "6_15") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_6_15;
      }
      else if (strcmp(s, "7_15") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_7_15;
      }
      else if (strcmp(s, "8_15") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_8_15;
      }
      else if (strcmp(s, "9_15") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_9_15;
      }
      else if (strcmp(s, "10_15") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_10_15;
      }
      else if (strcmp(s, "11_15") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_11_15;
      }
      else if (strcmp(s, "12_15") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_12_15;
      }
      else if (strcmp(s, "13_15") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_13_15;
      }
      else if (strcmp(s, "14_15") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_14_15;
      }
      else if (strcmp(s, "15_15") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_15_15;
      }
      else if (strcmp(s, "16_15") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_16_15;
      }
      else if (strcmp(s, "17_15") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_17_15;
      }
      else if (strcmp(s, "18_15") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_18_15;
      }
      else if (strcmp(s, "19_15") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_19_15;
      }
      else if (strcmp(s, "20_15") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_20_15;
      }
      else if (strcmp(s, "21_15") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_21_15;
      }
      else if (strcmp(s, "22_15") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_22_15;
      }
      else if (strcmp(s, "23_15") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_23_15;
      }
      else if (strcmp(s, "24_15") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_24_15;
      }
      else if (strcmp(s, "25_15") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_25_15;
      }
      else if (strcmp(s, "a_16") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_A_16;
      }
      else if (strcmp(s, "b_16") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_B_16;
      }
      else if (strcmp(s, "x_16") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_X_16;
      }
      else if (strcmp(s, "y_16") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_Y_16;
      }
      else if (strcmp(s, "lbumper_16") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_LBUMPER_16;
      }
      else if (strcmp(s, "rbumper_16") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_RBUMPER_16;
      }
      else if (strcmp(s, "back_16") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_BACK_16;
      }
      else if (strcmp(s, "start_16") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_START_16;
      }
      else if (strcmp(s, "guide_16") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_GUIDE_16;
      }
      else if (strcmp(s, "lthumb_16") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_LTHUMB_16;
      }
      else if (strcmp(s, "rthumb_16") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_RTHUMB_16;
      }
      else if (strcmp(s, "up_16") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_UP_16;
      }
      else if (strcmp(s, "right_16") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_RIGHT_16;
      }
      else if (strcmp(s, "down_16") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_DOWN_16;
      }
      else if (strcmp(s, "left_16") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_LEFT_16;
      }
      else if (strcmp(s, "1_16") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_1_16;
      }
      else if (strcmp(s, "2_16") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_2_16;
      }
      else if (strcmp(s, "3_16") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_3_16;
      }
      else if (strcmp(s, "4_16") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_4_16;
      }
      else if (strcmp(s, "5_16") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_5_16;
      }
      else if (strcmp(s, "6_16") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_6_16;
      }
      else if (strcmp(s, "7_16") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_7_16;
      }
      else if (strcmp(s, "8_16") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_8_16;
      }
      else if (strcmp(s, "9_16") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_9_16;
      }
      else if (strcmp(s, "10_16") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_10_16;
      }
      else if (strcmp(s, "11_16") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_11_16;
      }
      else if (strcmp(s, "12_16") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_12_16;
      }
      else if (strcmp(s, "13_16") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_13_16;
      }
      else if (strcmp(s, "14_16") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_14_16;
      }
      else if (strcmp(s, "15_16") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_15_16;
      }
      else
      {
        flag = 1;
      }
    }
    if (flag)
    {
      flag = 0;
      if (strcmp(s, "16_16") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_16_16;
      }
      else if (strcmp(s, "17_16") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_17_16;
      }
      else if (strcmp(s, "18_16") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_18_16;
      }
      else if (strcmp(s, "19_16") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_19_16;
      }
      else if (strcmp(s, "20_16") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_20_16;
      }
      else if (strcmp(s, "21_16") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_21_16;
      }
      else if (strcmp(s, "22_16") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_22_16;
      }
      else if (strcmp(s, "23_16") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_23_16;
      }
      else if (strcmp(s, "24_16") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_24_16;
      }
      else if (strcmp(s, "25_16") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_25_16;
      }
      else if (strcmp(s, "none") == 0)
      {
        _retval = orxJOYSTICK_BUTTON_NONE;
      }
      else
      {
        luaL_error(L, "unrecognized enum %s!", s);
      }
    }
  }
  
  return _retval;
}

LORX_API orxKEYBOARD_KEY lorx_lenumstr_to_orxKEYBOARD_KEY(lua_State *L, int i)
{
  const char* s = luaL_checkstring(L, i);
  orxKEYBOARD_KEY _retval = orxENUM_NONE;
  if (strcmp(s, "0") == 0)
  {
    _retval = orxKEYBOARD_KEY_0;
  }
  else if (strcmp(s, "1") == 0)
  {
    _retval = orxKEYBOARD_KEY_1;
  }
  else if (strcmp(s, "2") == 0)
  {
    _retval = orxKEYBOARD_KEY_2;
  }
  else if (strcmp(s, "3") == 0)
  {
    _retval = orxKEYBOARD_KEY_3;
  }
  else if (strcmp(s, "4") == 0)
  {
    _retval = orxKEYBOARD_KEY_4;
  }
  else if (strcmp(s, "5") == 0)
  {
    _retval = orxKEYBOARD_KEY_5;
  }
  else if (strcmp(s, "6") == 0)
  {
    _retval = orxKEYBOARD_KEY_6;
  }
  else if (strcmp(s, "7") == 0)
  {
    _retval = orxKEYBOARD_KEY_7;
  }
  else if (strcmp(s, "8") == 0)
  {
    _retval = orxKEYBOARD_KEY_8;
  }
  else if (strcmp(s, "9") == 0)
  {
    _retval = orxKEYBOARD_KEY_9;
  }
  else if (strcmp(s, "a") == 0)
  {
    _retval = orxKEYBOARD_KEY_A;
  }
  else if (strcmp(s, "b") == 0)
  {
    _retval = orxKEYBOARD_KEY_B;
  }
  else if (strcmp(s, "c") == 0)
  {
    _retval = orxKEYBOARD_KEY_C;
  }
  else if (strcmp(s, "d") == 0)
  {
    _retval = orxKEYBOARD_KEY_D;
  }
  else if (strcmp(s, "e") == 0)
  {
    _retval = orxKEYBOARD_KEY_E;
  }
  else if (strcmp(s, "f") == 0)
  {
    _retval = orxKEYBOARD_KEY_F;
  }
  else if (strcmp(s, "g") == 0)
  {
    _retval = orxKEYBOARD_KEY_G;
  }
  else if (strcmp(s, "h") == 0)
  {
    _retval = orxKEYBOARD_KEY_H;
  }
  else if (strcmp(s, "i") == 0)
  {
    _retval = orxKEYBOARD_KEY_I;
  }
  else if (strcmp(s, "j") == 0)
  {
    _retval = orxKEYBOARD_KEY_J;
  }
  else if (strcmp(s, "k") == 0)
  {
    _retval = orxKEYBOARD_KEY_K;
  }
  else if (strcmp(s, "l") == 0)
  {
    _retval = orxKEYBOARD_KEY_L;
  }
  else if (strcmp(s, "m") == 0)
  {
    _retval = orxKEYBOARD_KEY_M;
  }
  else if (strcmp(s, "n") == 0)
  {
    _retval = orxKEYBOARD_KEY_N;
  }
  else if (strcmp(s, "o") == 0)
  {
    _retval = orxKEYBOARD_KEY_O;
  }
  else if (strcmp(s, "p") == 0)
  {
    _retval = orxKEYBOARD_KEY_P;
  }
  else if (strcmp(s, "q") == 0)
  {
    _retval = orxKEYBOARD_KEY_Q;
  }
  else if (strcmp(s, "r") == 0)
  {
    _retval = orxKEYBOARD_KEY_R;
  }
  else if (strcmp(s, "s") == 0)
  {
    _retval = orxKEYBOARD_KEY_S;
  }
  else if (strcmp(s, "t") == 0)
  {
    _retval = orxKEYBOARD_KEY_T;
  }
  else if (strcmp(s, "u") == 0)
  {
    _retval = orxKEYBOARD_KEY_U;
  }
  else if (strcmp(s, "v") == 0)
  {
    _retval = orxKEYBOARD_KEY_V;
  }
  else if (strcmp(s, "w") == 0)
  {
    _retval = orxKEYBOARD_KEY_W;
  }
  else if (strcmp(s, "x") == 0)
  {
    _retval = orxKEYBOARD_KEY_X;
  }
  else if (strcmp(s, "y") == 0)
  {
    _retval = orxKEYBOARD_KEY_Y;
  }
  else if (strcmp(s, "z") == 0)
  {
    _retval = orxKEYBOARD_KEY_Z;
  }
  else if (strcmp(s, "space") == 0)
  {
    _retval = orxKEYBOARD_KEY_SPACE;
  }
  else if (strcmp(s, "quote") == 0)
  {
    _retval = orxKEYBOARD_KEY_QUOTE;
  }
  else if (strcmp(s, "comma") == 0)
  {
    _retval = orxKEYBOARD_KEY_COMMA;
  }
  else if (strcmp(s, "dash") == 0)
  {
    _retval = orxKEYBOARD_KEY_DASH;
  }
  else if (strcmp(s, "period") == 0)
  {
    _retval = orxKEYBOARD_KEY_PERIOD;
  }
  else if (strcmp(s, "slash") == 0)
  {
    _retval = orxKEYBOARD_KEY_SLASH;
  }
  else if (strcmp(s, "semicolon") == 0)
  {
    _retval = orxKEYBOARD_KEY_SEMICOLON;
  }
  else if (strcmp(s, "equal") == 0)
  {
    _retval = orxKEYBOARD_KEY_EQUAL;
  }
  else if (strcmp(s, "lbracket") == 0)
  {
    _retval = orxKEYBOARD_KEY_LBRACKET;
  }
  else if (strcmp(s, "backslash") == 0)
  {
    _retval = orxKEYBOARD_KEY_BACKSLASH;
  }
  else if (strcmp(s, "rbracket") == 0)
  {
    _retval = orxKEYBOARD_KEY_RBRACKET;
  }
  else if (strcmp(s, "backquote") == 0)
  {
    _retval = orxKEYBOARD_KEY_BACKQUOTE;
  }
  else if (strcmp(s, "world_1") == 0)
  {
    _retval = orxKEYBOARD_KEY_WORLD_1;
  }
  else if (strcmp(s, "world_2") == 0)
  {
    _retval = orxKEYBOARD_KEY_WORLD_2;
  }
  else if (strcmp(s, "escape") == 0)
  {
    _retval = orxKEYBOARD_KEY_ESCAPE;
  }
  else if (strcmp(s, "enter") == 0)
  {
    _retval = orxKEYBOARD_KEY_ENTER;
  }
  else if (strcmp(s, "tab") == 0)
  {
    _retval = orxKEYBOARD_KEY_TAB;
  }
  else if (strcmp(s, "backspace") == 0)
  {
    _retval = orxKEYBOARD_KEY_BACKSPACE;
  }
  else if (strcmp(s, "insert") == 0)
  {
    _retval = orxKEYBOARD_KEY_INSERT;
  }
  else if (strcmp(s, "delete") == 0)
  {
    _retval = orxKEYBOARD_KEY_DELETE;
  }
  else if (strcmp(s, "right") == 0)
  {
    _retval = orxKEYBOARD_KEY_RIGHT;
  }
  else if (strcmp(s, "left") == 0)
  {
    _retval = orxKEYBOARD_KEY_LEFT;
  }
  else if (strcmp(s, "down") == 0)
  {
    _retval = orxKEYBOARD_KEY_DOWN;
  }
  else if (strcmp(s, "up") == 0)
  {
    _retval = orxKEYBOARD_KEY_UP;
  }
  else if (strcmp(s, "page_up") == 0)
  {
    _retval = orxKEYBOARD_KEY_PAGE_UP;
  }
  else if (strcmp(s, "page_down") == 0)
  {
    _retval = orxKEYBOARD_KEY_PAGE_DOWN;
  }
  else if (strcmp(s, "home") == 0)
  {
    _retval = orxKEYBOARD_KEY_HOME;
  }
  else if (strcmp(s, "end") == 0)
  {
    _retval = orxKEYBOARD_KEY_END;
  }
  else if (strcmp(s, "caps_lock") == 0)
  {
    _retval = orxKEYBOARD_KEY_CAPS_LOCK;
  }
  else if (strcmp(s, "scroll_lock") == 0)
  {
    _retval = orxKEYBOARD_KEY_SCROLL_LOCK;
  }
  else if (strcmp(s, "num_lock") == 0)
  {
    _retval = orxKEYBOARD_KEY_NUM_LOCK;
  }
  else if (strcmp(s, "print_screen") == 0)
  {
    _retval = orxKEYBOARD_KEY_PRINT_SCREEN;
  }
  else if (strcmp(s, "pause") == 0)
  {
    _retval = orxKEYBOARD_KEY_PAUSE;
  }
  else if (strcmp(s, "volume_down") == 0)
  {
    _retval = orxKEYBOARD_KEY_VOLUME_DOWN;
  }
  else if (strcmp(s, "volume_up") == 0)
  {
    _retval = orxKEYBOARD_KEY_VOLUME_UP;
  }
  else if (strcmp(s, "f1") == 0)
  {
    _retval = orxKEYBOARD_KEY_F1;
  }
  else if (strcmp(s, "f2") == 0)
  {
    _retval = orxKEYBOARD_KEY_F2;
  }
  else if (strcmp(s, "f3") == 0)
  {
    _retval = orxKEYBOARD_KEY_F3;
  }
  else if (strcmp(s, "f4") == 0)
  {
    _retval = orxKEYBOARD_KEY_F4;
  }
  else if (strcmp(s, "f5") == 0)
  {
    _retval = orxKEYBOARD_KEY_F5;
  }
  else if (strcmp(s, "f6") == 0)
  {
    _retval = orxKEYBOARD_KEY_F6;
  }
  else if (strcmp(s, "f7") == 0)
  {
    _retval = orxKEYBOARD_KEY_F7;
  }
  else if (strcmp(s, "f8") == 0)
  {
    _retval = orxKEYBOARD_KEY_F8;
  }
  else if (strcmp(s, "f9") == 0)
  {
    _retval = orxKEYBOARD_KEY_F9;
  }
  else if (strcmp(s, "f10") == 0)
  {
    _retval = orxKEYBOARD_KEY_F10;
  }
  else if (strcmp(s, "f11") == 0)
  {
    _retval = orxKEYBOARD_KEY_F11;
  }
  else if (strcmp(s, "f12") == 0)
  {
    _retval = orxKEYBOARD_KEY_F12;
  }
  else if (strcmp(s, "f13") == 0)
  {
    _retval = orxKEYBOARD_KEY_F13;
  }
  else if (strcmp(s, "f14") == 0)
  {
    _retval = orxKEYBOARD_KEY_F14;
  }
  else if (strcmp(s, "f15") == 0)
  {
    _retval = orxKEYBOARD_KEY_F15;
  }
  else if (strcmp(s, "f16") == 0)
  {
    _retval = orxKEYBOARD_KEY_F16;
  }
  else if (strcmp(s, "f17") == 0)
  {
    _retval = orxKEYBOARD_KEY_F17;
  }
  else if (strcmp(s, "f18") == 0)
  {
    _retval = orxKEYBOARD_KEY_F18;
  }
  else if (strcmp(s, "f19") == 0)
  {
    _retval = orxKEYBOARD_KEY_F19;
  }
  else if (strcmp(s, "f20") == 0)
  {
    _retval = orxKEYBOARD_KEY_F20;
  }
  else if (strcmp(s, "f21") == 0)
  {
    _retval = orxKEYBOARD_KEY_F21;
  }
  else if (strcmp(s, "f22") == 0)
  {
    _retval = orxKEYBOARD_KEY_F22;
  }
  else if (strcmp(s, "f23") == 0)
  {
    _retval = orxKEYBOARD_KEY_F23;
  }
  else if (strcmp(s, "f24") == 0)
  {
    _retval = orxKEYBOARD_KEY_F24;
  }
  else if (strcmp(s, "f25") == 0)
  {
    _retval = orxKEYBOARD_KEY_F25;
  }
  else if (strcmp(s, "numpad_0") == 0)
  {
    _retval = orxKEYBOARD_KEY_NUMPAD_0;
  }
  else if (strcmp(s, "numpad_1") == 0)
  {
    _retval = orxKEYBOARD_KEY_NUMPAD_1;
  }
  else if (strcmp(s, "numpad_2") == 0)
  {
    _retval = orxKEYBOARD_KEY_NUMPAD_2;
  }
  else if (strcmp(s, "numpad_3") == 0)
  {
    _retval = orxKEYBOARD_KEY_NUMPAD_3;
  }
  else if (strcmp(s, "numpad_4") == 0)
  {
    _retval = orxKEYBOARD_KEY_NUMPAD_4;
  }
  else if (strcmp(s, "numpad_5") == 0)
  {
    _retval = orxKEYBOARD_KEY_NUMPAD_5;
  }
  else if (strcmp(s, "numpad_6") == 0)
  {
    _retval = orxKEYBOARD_KEY_NUMPAD_6;
  }
  else if (strcmp(s, "numpad_7") == 0)
  {
    _retval = orxKEYBOARD_KEY_NUMPAD_7;
  }
  else if (strcmp(s, "numpad_8") == 0)
  {
    _retval = orxKEYBOARD_KEY_NUMPAD_8;
  }
  else if (strcmp(s, "numpad_9") == 0)
  {
    _retval = orxKEYBOARD_KEY_NUMPAD_9;
  }
  else if (strcmp(s, "numpad_decimal") == 0)
  {
    _retval = orxKEYBOARD_KEY_NUMPAD_DECIMAL;
  }
  else if (strcmp(s, "numpad_divide") == 0)
  {
    _retval = orxKEYBOARD_KEY_NUMPAD_DIVIDE;
  }
  else if (strcmp(s, "numpad_multiply") == 0)
  {
    _retval = orxKEYBOARD_KEY_NUMPAD_MULTIPLY;
  }
  else if (strcmp(s, "numpad_subtract") == 0)
  {
    _retval = orxKEYBOARD_KEY_NUMPAD_SUBTRACT;
  }
  else if (strcmp(s, "numpad_add") == 0)
  {
    _retval = orxKEYBOARD_KEY_NUMPAD_ADD;
  }
  else if (strcmp(s, "numpad_enter") == 0)
  {
    _retval = orxKEYBOARD_KEY_NUMPAD_ENTER;
  }
  else if (strcmp(s, "numpad_equal") == 0)
  {
    _retval = orxKEYBOARD_KEY_NUMPAD_EQUAL;
  }
  else if (strcmp(s, "lshift") == 0)
  {
    _retval = orxKEYBOARD_KEY_LSHIFT;
  }
  else if (strcmp(s, "lctrl") == 0)
  {
    _retval = orxKEYBOARD_KEY_LCTRL;
  }
  else if (strcmp(s, "lalt") == 0)
  {
    _retval = orxKEYBOARD_KEY_LALT;
  }
  else if (strcmp(s, "lsystem") == 0)
  {
    _retval = orxKEYBOARD_KEY_LSYSTEM;
  }
  else if (strcmp(s, "rshift") == 0)
  {
    _retval = orxKEYBOARD_KEY_RSHIFT;
  }
  else if (strcmp(s, "rctrl") == 0)
  {
    _retval = orxKEYBOARD_KEY_RCTRL;
  }
  else if (strcmp(s, "ralt") == 0)
  {
    _retval = orxKEYBOARD_KEY_RALT;
  }
  else if (strcmp(s, "rsystem") == 0)
  {
    _retval = orxKEYBOARD_KEY_RSYSTEM;
  }
  else if (strcmp(s, "menu") == 0)
  {
    _retval = orxKEYBOARD_KEY_MENU;
  }
  else if (strcmp(s, "none") == 0)
  {
    _retval = orxKEYBOARD_KEY_NONE;
  }
  else
  {
    luaL_error(L, "unrecognized enum %s!", s);
  }
  return _retval;
}

LORX_API orxLOCALE_EVENT lorx_lenumstr_to_orxLOCALE_EVENT(lua_State *L, int i)
{
  const char* s = luaL_checkstring(L, i);
  orxLOCALE_EVENT _retval = orxENUM_NONE;
  if (strcmp(s, "select_language") == 0)
  {
    _retval = orxLOCALE_EVENT_SELECT_LANGUAGE;
  }
  else if (strcmp(s, "set_string") == 0)
  {
    _retval = orxLOCALE_EVENT_SET_STRING;
  }
  else if (strcmp(s, "none") == 0)
  {
    _retval = orxLOCALE_EVENT_NONE;
  }
  else
  {
    luaL_error(L, "unrecognized enum %s!", s);
  }
  return _retval;
}

LORX_API orxMODULE_ID lorx_lenumstr_to_orxMODULE_ID(lua_State *L, int i)
{
  const char* s = luaL_checkstring(L, i);
  orxMODULE_ID _retval = orxENUM_NONE;
  if (strcmp(s, "anim") == 0)
  {
    _retval = orxMODULE_ID_ANIM;
  }
  else if (strcmp(s, "animpointer") == 0)
  {
    _retval = orxMODULE_ID_ANIMPOINTER;
  }
  else if (strcmp(s, "animset") == 0)
  {
    _retval = orxMODULE_ID_ANIMSET;
  }
  else if (strcmp(s, "bank") == 0)
  {
    _retval = orxMODULE_ID_BANK;
  }
  else if (strcmp(s, "body") == 0)
  {
    _retval = orxMODULE_ID_BODY;
  }
  else if (strcmp(s, "camera") == 0)
  {
    _retval = orxMODULE_ID_CAMERA;
  }
  else if (strcmp(s, "clock") == 0)
  {
    _retval = orxMODULE_ID_CLOCK;
  }
  else if (strcmp(s, "command") == 0)
  {
    _retval = orxMODULE_ID_COMMAND;
  }
  else if (strcmp(s, "config") == 0)
  {
    _retval = orxMODULE_ID_CONFIG;
  }
  else if (strcmp(s, "console") == 0)
  {
    _retval = orxMODULE_ID_CONSOLE;
  }
  else if (strcmp(s, "display") == 0)
  {
    _retval = orxMODULE_ID_DISPLAY;
  }
  else if (strcmp(s, "event") == 0)
  {
    _retval = orxMODULE_ID_EVENT;
  }
  else if (strcmp(s, "file") == 0)
  {
    _retval = orxMODULE_ID_FILE;
  }
  else if (strcmp(s, "font") == 0)
  {
    _retval = orxMODULE_ID_FONT;
  }
  else if (strcmp(s, "fps") == 0)
  {
    _retval = orxMODULE_ID_FPS;
  }
  else if (strcmp(s, "frame") == 0)
  {
    _retval = orxMODULE_ID_FRAME;
  }
  else if (strcmp(s, "fx") == 0)
  {
    _retval = orxMODULE_ID_FX;
  }
  else if (strcmp(s, "fxpointer") == 0)
  {
    _retval = orxMODULE_ID_FXPOINTER;
  }
  else if (strcmp(s, "graphic") == 0)
  {
    _retval = orxMODULE_ID_GRAPHIC;
  }
  else if (strcmp(s, "input") == 0)
  {
    _retval = orxMODULE_ID_INPUT;
  }
  else if (strcmp(s, "joystick") == 0)
  {
    _retval = orxMODULE_ID_JOYSTICK;
  }
  else if (strcmp(s, "keyboard") == 0)
  {
    _retval = orxMODULE_ID_KEYBOARD;
  }
  else if (strcmp(s, "locale") == 0)
  {
    _retval = orxMODULE_ID_LOCALE;
  }
  else if (strcmp(s, "main") == 0)
  {
    _retval = orxMODULE_ID_MAIN;
  }
  else if (strcmp(s, "memory") == 0)
  {
    _retval = orxMODULE_ID_MEMORY;
  }
  else if (strcmp(s, "mouse") == 0)
  {
    _retval = orxMODULE_ID_MOUSE;
  }
  else if (strcmp(s, "object") == 0)
  {
    _retval = orxMODULE_ID_OBJECT;
  }
  else if (strcmp(s, "param") == 0)
  {
    _retval = orxMODULE_ID_PARAM;
  }
  else if (strcmp(s, "physics") == 0)
  {
    _retval = orxMODULE_ID_PHYSICS;
  }
  else if (strcmp(s, "plugin") == 0)
  {
    _retval = orxMODULE_ID_PLUGIN;
  }
  else if (strcmp(s, "profiler") == 0)
  {
    _retval = orxMODULE_ID_PROFILER;
  }
  else if (strcmp(s, "render") == 0)
  {
    _retval = orxMODULE_ID_RENDER;
  }
  else if (strcmp(s, "resource") == 0)
  {
    _retval = orxMODULE_ID_RESOURCE;
  }
  else if (strcmp(s, "screenshot") == 0)
  {
    _retval = orxMODULE_ID_SCREENSHOT;
  }
  else if (strcmp(s, "shader") == 0)
  {
    _retval = orxMODULE_ID_SHADER;
  }
  else if (strcmp(s, "shaderpointer") == 0)
  {
    _retval = orxMODULE_ID_SHADERPOINTER;
  }
  else if (strcmp(s, "sound") == 0)
  {
    _retval = orxMODULE_ID_SOUND;
  }
  else if (strcmp(s, "soundpointer") == 0)
  {
    _retval = orxMODULE_ID_SOUNDPOINTER;
  }
  else if (strcmp(s, "soundsystem") == 0)
  {
    _retval = orxMODULE_ID_SOUNDSYSTEM;
  }
  else if (strcmp(s, "spawner") == 0)
  {
    _retval = orxMODULE_ID_SPAWNER;
  }
  else if (strcmp(s, "string") == 0)
  {
    _retval = orxMODULE_ID_STRING;
  }
  else if (strcmp(s, "structure") == 0)
  {
    _retval = orxMODULE_ID_STRUCTURE;
  }
  else if (strcmp(s, "system") == 0)
  {
    _retval = orxMODULE_ID_SYSTEM;
  }
  else if (strcmp(s, "text") == 0)
  {
    _retval = orxMODULE_ID_TEXT;
  }
  else if (strcmp(s, "texture") == 0)
  {
    _retval = orxMODULE_ID_TEXTURE;
  }
  else if (strcmp(s, "thread") == 0)
  {
    _retval = orxMODULE_ID_THREAD;
  }
  else if (strcmp(s, "timeline") == 0)
  {
    _retval = orxMODULE_ID_TIMELINE;
  }
  else if (strcmp(s, "viewport") == 0)
  {
    _retval = orxMODULE_ID_VIEWPORT;
  }
  else if (strcmp(s, "user_defined") == 0)
  {
    _retval = orxMODULE_ID_USER_DEFINED;
  }
  else if (strcmp(s, "none") == 0)
  {
    _retval = orxMODULE_ID_NONE;
  }
  else
  {
    luaL_error(L, "unrecognized enum %s!", s);
  }
  return _retval;
}

LORX_API orxMOUSE_AXIS lorx_lenumstr_to_orxMOUSE_AXIS(lua_State *L, int i)
{
  const char* s = luaL_checkstring(L, i);
  orxMOUSE_AXIS _retval = orxENUM_NONE;
  if (strcmp(s, "x") == 0)
  {
    _retval = orxMOUSE_AXIS_X;
  }
  else if (strcmp(s, "y") == 0)
  {
    _retval = orxMOUSE_AXIS_Y;
  }
  else if (strcmp(s, "none") == 0)
  {
    _retval = orxMOUSE_AXIS_NONE;
  }
  else
  {
    luaL_error(L, "unrecognized enum %s!", s);
  }
  return _retval;
}

LORX_API orxMOUSE_BUTTON lorx_lenumstr_to_orxMOUSE_BUTTON(lua_State *L, int i)
{
  const char* s = luaL_checkstring(L, i);
  orxMOUSE_BUTTON _retval = orxENUM_NONE;
  if (strcmp(s, "left") == 0)
  {
    _retval = orxMOUSE_BUTTON_LEFT;
  }
  else if (strcmp(s, "right") == 0)
  {
    _retval = orxMOUSE_BUTTON_RIGHT;
  }
  else if (strcmp(s, "middle") == 0)
  {
    _retval = orxMOUSE_BUTTON_MIDDLE;
  }
  else if (strcmp(s, "extra_1") == 0)
  {
    _retval = orxMOUSE_BUTTON_EXTRA_1;
  }
  else if (strcmp(s, "extra_2") == 0)
  {
    _retval = orxMOUSE_BUTTON_EXTRA_2;
  }
  else if (strcmp(s, "extra_3") == 0)
  {
    _retval = orxMOUSE_BUTTON_EXTRA_3;
  }
  else if (strcmp(s, "extra_4") == 0)
  {
    _retval = orxMOUSE_BUTTON_EXTRA_4;
  }
  else if (strcmp(s, "extra_5") == 0)
  {
    _retval = orxMOUSE_BUTTON_EXTRA_5;
  }
  else if (strcmp(s, "wheel_up") == 0)
  {
    _retval = orxMOUSE_BUTTON_WHEEL_UP;
  }
  else if (strcmp(s, "wheel_down") == 0)
  {
    _retval = orxMOUSE_BUTTON_WHEEL_DOWN;
  }
  else if (strcmp(s, "none") == 0)
  {
    _retval = orxMOUSE_BUTTON_NONE;
  }
  else
  {
    luaL_error(L, "unrecognized enum %s!", s);
  }
  return _retval;
}

LORX_API orxOBJECT_EVENT lorx_lenumstr_to_orxOBJECT_EVENT(lua_State *L, int i)
{
  const char* s = luaL_checkstring(L, i);
  orxOBJECT_EVENT _retval = orxENUM_NONE;
  if (strcmp(s, "create") == 0)
  {
    _retval = orxOBJECT_EVENT_CREATE;
  }
  else if (strcmp(s, "delete") == 0)
  {
    _retval = orxOBJECT_EVENT_DELETE;
  }
  else if (strcmp(s, "prepare") == 0)
  {
    _retval = orxOBJECT_EVENT_PREPARE;
  }
  else if (strcmp(s, "enable") == 0)
  {
    _retval = orxOBJECT_EVENT_ENABLE;
  }
  else if (strcmp(s, "disable") == 0)
  {
    _retval = orxOBJECT_EVENT_DISABLE;
  }
  else if (strcmp(s, "pause") == 0)
  {
    _retval = orxOBJECT_EVENT_PAUSE;
  }
  else if (strcmp(s, "unpause") == 0)
  {
    _retval = orxOBJECT_EVENT_UNPAUSE;
  }
  else if (strcmp(s, "none") == 0)
  {
    _retval = orxOBJECT_EVENT_NONE;
  }
  else
  {
    luaL_error(L, "unrecognized enum %s!", s);
  }
  return _retval;
}

LORX_API orxPHYSICS_EVENT lorx_lenumstr_to_orxPHYSICS_EVENT(lua_State *L, int i)
{
  const char* s = luaL_checkstring(L, i);
  orxPHYSICS_EVENT _retval = orxENUM_NONE;
  if (strcmp(s, "contact_add") == 0)
  {
    _retval = orxPHYSICS_EVENT_CONTACT_ADD;
  }
  else if (strcmp(s, "contact_remove") == 0)
  {
    _retval = orxPHYSICS_EVENT_CONTACT_REMOVE;
  }
  else if (strcmp(s, "none") == 0)
  {
    _retval = orxPHYSICS_EVENT_NONE;
  }
  else
  {
    luaL_error(L, "unrecognized enum %s!", s);
  }
  return _retval;
}

LORX_API orxRENDER_EVENT lorx_lenumstr_to_orxRENDER_EVENT(lua_State *L, int i)
{
  const char* s = luaL_checkstring(L, i);
  orxRENDER_EVENT _retval = orxENUM_NONE;
  if (strcmp(s, "start") == 0)
  {
    _retval = orxRENDER_EVENT_START;
  }
  else if (strcmp(s, "stop") == 0)
  {
    _retval = orxRENDER_EVENT_STOP;
  }
  else if (strcmp(s, "viewport_start") == 0)
  {
    _retval = orxRENDER_EVENT_VIEWPORT_START;
  }
  else if (strcmp(s, "viewport_stop") == 0)
  {
    _retval = orxRENDER_EVENT_VIEWPORT_STOP;
  }
  else if (strcmp(s, "object_start") == 0)
  {
    _retval = orxRENDER_EVENT_OBJECT_START;
  }
  else if (strcmp(s, "object_stop") == 0)
  {
    _retval = orxRENDER_EVENT_OBJECT_STOP;
  }
  else if (strcmp(s, "console_start") == 0)
  {
    _retval = orxRENDER_EVENT_CONSOLE_START;
  }
  else if (strcmp(s, "console_stop") == 0)
  {
    _retval = orxRENDER_EVENT_CONSOLE_STOP;
  }
  else if (strcmp(s, "profiler_start") == 0)
  {
    _retval = orxRENDER_EVENT_PROFILER_START;
  }
  else if (strcmp(s, "profiler_stop") == 0)
  {
    _retval = orxRENDER_EVENT_PROFILER_STOP;
  }
  else if (strcmp(s, "none") == 0)
  {
    _retval = orxRENDER_EVENT_NONE;
  }
  else
  {
    luaL_error(L, "unrecognized enum %s!", s);
  }
  return _retval;
}

LORX_API orxRESOURCE_EVENT lorx_lenumstr_to_orxRESOURCE_EVENT(lua_State *L, int i)
{
  const char* s = luaL_checkstring(L, i);
  orxRESOURCE_EVENT _retval = orxENUM_NONE;
  if (strcmp(s, "update") == 0)
  {
    _retval = orxRESOURCE_EVENT_UPDATE;
  }
  else if (strcmp(s, "add") == 0)
  {
    _retval = orxRESOURCE_EVENT_ADD;
  }
  else if (strcmp(s, "remove") == 0)
  {
    _retval = orxRESOURCE_EVENT_REMOVE;
  }
  else if (strcmp(s, "none") == 0)
  {
    _retval = orxRESOURCE_EVENT_NONE;
  }
  else
  {
    luaL_error(L, "unrecognized enum %s!", s);
  }
  return _retval;
}

LORX_API orxSEEK_OFFSET_WHENCE lorx_lenumstr_to_orxSEEK_OFFSET_WHENCE(lua_State *L, int i)
{
  const char* s = luaL_checkstring(L, i);
  orxSEEK_OFFSET_WHENCE _retval = orxENUM_NONE;
  if (strcmp(s, "start") == 0)
  {
    _retval = orxSEEK_OFFSET_WHENCE_START;
  }
  else if (strcmp(s, "current") == 0)
  {
    _retval = orxSEEK_OFFSET_WHENCE_CURRENT;
  }
  else if (strcmp(s, "end") == 0)
  {
    _retval = orxSEEK_OFFSET_WHENCE_END;
  }
  else if (strcmp(s, "none") == 0)
  {
    _retval = orxSEEK_OFFSET_WHENCE_NONE;
  }
  else
  {
    luaL_error(L, "unrecognized enum %s!", s);
  }
  return _retval;
}

LORX_API orxSHADER_EVENT lorx_lenumstr_to_orxSHADER_EVENT(lua_State *L, int i)
{
  const char* s = luaL_checkstring(L, i);
  orxSHADER_EVENT _retval = orxENUM_NONE;
  if (strcmp(s, "set_param") == 0)
  {
    _retval = orxSHADER_EVENT_SET_PARAM;
  }
  else if (strcmp(s, "none") == 0)
  {
    _retval = orxSHADER_EVENT_NONE;
  }
  else
  {
    luaL_error(L, "unrecognized enum %s!", s);
  }
  return _retval;
}

LORX_API orxSHADER_PARAM_TYPE lorx_lenumstr_to_orxSHADER_PARAM_TYPE(lua_State *L, int i)
{
  const char* s = luaL_checkstring(L, i);
  orxSHADER_PARAM_TYPE _retval = orxENUM_NONE;
  if (strcmp(s, "float") == 0)
  {
    _retval = orxSHADER_PARAM_TYPE_FLOAT;
  }
  else if (strcmp(s, "texture") == 0)
  {
    _retval = orxSHADER_PARAM_TYPE_TEXTURE;
  }
  else if (strcmp(s, "vector") == 0)
  {
    _retval = orxSHADER_PARAM_TYPE_VECTOR;
  }
  else if (strcmp(s, "time") == 0)
  {
    _retval = orxSHADER_PARAM_TYPE_TIME;
  }
  else if (strcmp(s, "none") == 0)
  {
    _retval = orxSHADER_PARAM_TYPE_NONE;
  }
  else
  {
    luaL_error(L, "unrecognized enum %s!", s);
  }
  return _retval;
}

LORX_API orxSOUNDSYSTEM_STATUS lorx_lenumstr_to_orxSOUNDSYSTEM_STATUS(lua_State *L, int i)
{
  const char* s = luaL_checkstring(L, i);
  orxSOUNDSYSTEM_STATUS _retval = orxENUM_NONE;
  if (strcmp(s, "play") == 0)
  {
    _retval = orxSOUNDSYSTEM_STATUS_PLAY;
  }
  else if (strcmp(s, "pause") == 0)
  {
    _retval = orxSOUNDSYSTEM_STATUS_PAUSE;
  }
  else if (strcmp(s, "stop") == 0)
  {
    _retval = orxSOUNDSYSTEM_STATUS_STOP;
  }
  else if (strcmp(s, "none") == 0)
  {
    _retval = orxSOUNDSYSTEM_STATUS_NONE;
  }
  else
  {
    luaL_error(L, "unrecognized enum %s!", s);
  }
  return _retval;
}

LORX_API orxSOUND_EVENT lorx_lenumstr_to_orxSOUND_EVENT(lua_State *L, int i)
{
  const char* s = luaL_checkstring(L, i);
  orxSOUND_EVENT _retval = orxENUM_NONE;
  if (strcmp(s, "start") == 0)
  {
    _retval = orxSOUND_EVENT_START;
  }
  else if (strcmp(s, "stop") == 0)
  {
    _retval = orxSOUND_EVENT_STOP;
  }
  else if (strcmp(s, "add") == 0)
  {
    _retval = orxSOUND_EVENT_ADD;
  }
  else if (strcmp(s, "remove") == 0)
  {
    _retval = orxSOUND_EVENT_REMOVE;
  }
  else if (strcmp(s, "packet") == 0)
  {
    _retval = orxSOUND_EVENT_PACKET;
  }
  else if (strcmp(s, "recording_start") == 0)
  {
    _retval = orxSOUND_EVENT_RECORDING_START;
  }
  else if (strcmp(s, "recording_stop") == 0)
  {
    _retval = orxSOUND_EVENT_RECORDING_STOP;
  }
  else if (strcmp(s, "recording_packet") == 0)
  {
    _retval = orxSOUND_EVENT_RECORDING_PACKET;
  }
  else if (strcmp(s, "set_filter_param") == 0)
  {
    _retval = orxSOUND_EVENT_SET_FILTER_PARAM;
  }
  else if (strcmp(s, "none") == 0)
  {
    _retval = orxSOUND_EVENT_NONE;
  }
  else
  {
    luaL_error(L, "unrecognized enum %s!", s);
  }
  return _retval;
}

LORX_API orxSOUND_FILTER_TYPE lorx_lenumstr_to_orxSOUND_FILTER_TYPE(lua_State *L, int i)
{
  const char* s = luaL_checkstring(L, i);
  orxSOUND_FILTER_TYPE _retval = orxENUM_NONE;
  if (strcmp(s, "biquad") == 0)
  {
    _retval = orxSOUND_FILTER_TYPE_BIQUAD;
  }
  else if (strcmp(s, "low_pass") == 0)
  {
    _retval = orxSOUND_FILTER_TYPE_LOW_PASS;
  }
  else if (strcmp(s, "high_pass") == 0)
  {
    _retval = orxSOUND_FILTER_TYPE_HIGH_PASS;
  }
  else if (strcmp(s, "band_pass") == 0)
  {
    _retval = orxSOUND_FILTER_TYPE_BAND_PASS;
  }
  else if (strcmp(s, "low_shelf") == 0)
  {
    _retval = orxSOUND_FILTER_TYPE_LOW_SHELF;
  }
  else if (strcmp(s, "high_shelf") == 0)
  {
    _retval = orxSOUND_FILTER_TYPE_HIGH_SHELF;
  }
  else if (strcmp(s, "notch") == 0)
  {
    _retval = orxSOUND_FILTER_TYPE_NOTCH;
  }
  else if (strcmp(s, "peaking") == 0)
  {
    _retval = orxSOUND_FILTER_TYPE_PEAKING;
  }
  else if (strcmp(s, "delay") == 0)
  {
    _retval = orxSOUND_FILTER_TYPE_DELAY;
  }
  else if (strcmp(s, "custom") == 0)
  {
    _retval = orxSOUND_FILTER_TYPE_CUSTOM;
  }
  else if (strcmp(s, "none") == 0)
  {
    _retval = orxSOUND_FILTER_TYPE_NONE;
  }
  else
  {
    luaL_error(L, "unrecognized enum %s!", s);
  }
  return _retval;
}

LORX_API orxSOUND_STATUS lorx_lenumstr_to_orxSOUND_STATUS(lua_State *L, int i)
{
  const char* s = luaL_checkstring(L, i);
  orxSOUND_STATUS _retval = orxENUM_NONE;
  if (strcmp(s, "play") == 0)
  {
    _retval = orxSOUND_STATUS_PLAY;
  }
  else if (strcmp(s, "pause") == 0)
  {
    _retval = orxSOUND_STATUS_PAUSE;
  }
  else if (strcmp(s, "stop") == 0)
  {
    _retval = orxSOUND_STATUS_STOP;
  }
  else if (strcmp(s, "none") == 0)
  {
    _retval = orxSOUND_STATUS_NONE;
  }
  else
  {
    luaL_error(L, "unrecognized enum %s!", s);
  }
  return _retval;
}

LORX_API orxSPAWNER_EVENT lorx_lenumstr_to_orxSPAWNER_EVENT(lua_State *L, int i)
{
  const char* s = luaL_checkstring(L, i);
  orxSPAWNER_EVENT _retval = orxENUM_NONE;
  if (strcmp(s, "spawn") == 0)
  {
    _retval = orxSPAWNER_EVENT_SPAWN;
  }
  else if (strcmp(s, "create") == 0)
  {
    _retval = orxSPAWNER_EVENT_CREATE;
  }
  else if (strcmp(s, "delete") == 0)
  {
    _retval = orxSPAWNER_EVENT_DELETE;
  }
  else if (strcmp(s, "reset") == 0)
  {
    _retval = orxSPAWNER_EVENT_RESET;
  }
  else if (strcmp(s, "empty") == 0)
  {
    _retval = orxSPAWNER_EVENT_EMPTY;
  }
  else if (strcmp(s, "wave_start") == 0)
  {
    _retval = orxSPAWNER_EVENT_WAVE_START;
  }
  else if (strcmp(s, "wave_stop") == 0)
  {
    _retval = orxSPAWNER_EVENT_WAVE_STOP;
  }
  else if (strcmp(s, "none") == 0)
  {
    _retval = orxSPAWNER_EVENT_NONE;
  }
  else
  {
    luaL_error(L, "unrecognized enum %s!", s);
  }
  return _retval;
}

LORX_API orxSTATUS lorx_lenumstr_to_orxSTATUS(lua_State *L, int i)
{
  const char* s = luaL_checkstring(L, i);
  orxSTATUS _retval = orxENUM_NONE;
  if (strcmp(s, "failure") == 0)
  {
    _retval = orxSTATUS_FAILURE;
  }
  else if (strcmp(s, "success") == 0)
  {
    _retval = orxSTATUS_SUCCESS;
  }
  else if (strcmp(s, "none") == 0)
  {
    _retval = orxSTATUS_NONE;
  }
  else
  {
    luaL_error(L, "unrecognized enum %s!", s);
  }
  return _retval;
}

LORX_API orxSTRUCTURE_ID lorx_lenumstr_to_orxSTRUCTURE_ID(lua_State *L, int i)
{
  const char* s = luaL_checkstring(L, i);
  orxSTRUCTURE_ID _retval = orxENUM_NONE;
  if (strcmp(s, "animpointer") == 0)
  {
    _retval = orxSTRUCTURE_ID_ANIMPOINTER;
  }
  else if (strcmp(s, "body") == 0)
  {
    _retval = orxSTRUCTURE_ID_BODY;
  }
  else if (strcmp(s, "clock") == 0)
  {
    _retval = orxSTRUCTURE_ID_CLOCK;
  }
  else if (strcmp(s, "frame") == 0)
  {
    _retval = orxSTRUCTURE_ID_FRAME;
  }
  else if (strcmp(s, "fxpointer") == 0)
  {
    _retval = orxSTRUCTURE_ID_FXPOINTER;
  }
  else if (strcmp(s, "graphic") == 0)
  {
    _retval = orxSTRUCTURE_ID_GRAPHIC;
  }
  else if (strcmp(s, "shaderpointer") == 0)
  {
    _retval = orxSTRUCTURE_ID_SHADERPOINTER;
  }
  else if (strcmp(s, "soundpointer") == 0)
  {
    _retval = orxSTRUCTURE_ID_SOUNDPOINTER;
  }
  else if (strcmp(s, "spawner") == 0)
  {
    _retval = orxSTRUCTURE_ID_SPAWNER;
  }
  else if (strcmp(s, "timeline") == 0)
  {
    _retval = orxSTRUCTURE_ID_TIMELINE;
  }
  else if (strcmp(s, "anim") == 0)
  {
    _retval = orxSTRUCTURE_ID_ANIM;
  }
  else if (strcmp(s, "animset") == 0)
  {
    _retval = orxSTRUCTURE_ID_ANIMSET;
  }
  else if (strcmp(s, "camera") == 0)
  {
    _retval = orxSTRUCTURE_ID_CAMERA;
  }
  else if (strcmp(s, "font") == 0)
  {
    _retval = orxSTRUCTURE_ID_FONT;
  }
  else if (strcmp(s, "fx") == 0)
  {
    _retval = orxSTRUCTURE_ID_FX;
  }
  else if (strcmp(s, "object") == 0)
  {
    _retval = orxSTRUCTURE_ID_OBJECT;
  }
  else if (strcmp(s, "shader") == 0)
  {
    _retval = orxSTRUCTURE_ID_SHADER;
  }
  else if (strcmp(s, "sound") == 0)
  {
    _retval = orxSTRUCTURE_ID_SOUND;
  }
  else if (strcmp(s, "text") == 0)
  {
    _retval = orxSTRUCTURE_ID_TEXT;
  }
  else if (strcmp(s, "texture") == 0)
  {
    _retval = orxSTRUCTURE_ID_TEXTURE;
  }
  else if (strcmp(s, "viewport") == 0)
  {
    _retval = orxSTRUCTURE_ID_VIEWPORT;
  }
  else if (strcmp(s, "none") == 0)
  {
    _retval = orxSTRUCTURE_ID_NONE;
  }
  else
  {
    luaL_error(L, "unrecognized enum %s!", s);
  }
  return _retval;
}

LORX_API orxSTRUCTURE_STORAGE_TYPE lorx_lenumstr_to_orxSTRUCTURE_STORAGE_TYPE(lua_State *L, int i)
{
  const char* s = luaL_checkstring(L, i);
  orxSTRUCTURE_STORAGE_TYPE _retval = orxENUM_NONE;
  if (strcmp(s, "linklist") == 0)
  {
    _retval = orxSTRUCTURE_STORAGE_TYPE_LINKLIST;
  }
  else if (strcmp(s, "tree") == 0)
  {
    _retval = orxSTRUCTURE_STORAGE_TYPE_TREE;
  }
  else if (strcmp(s, "none") == 0)
  {
    _retval = orxSTRUCTURE_STORAGE_TYPE_NONE;
  }
  else
  {
    luaL_error(L, "unrecognized enum %s!", s);
  }
  return _retval;
}

LORX_API orxSYSTEM_EVENT lorx_lenumstr_to_orxSYSTEM_EVENT(lua_State *L, int i)
{
  const char* s = luaL_checkstring(L, i);
  orxSYSTEM_EVENT _retval = orxENUM_NONE;
  if (strcmp(s, "close") == 0)
  {
    _retval = orxSYSTEM_EVENT_CLOSE;
  }
  else if (strcmp(s, "focus_gained") == 0)
  {
    _retval = orxSYSTEM_EVENT_FOCUS_GAINED;
  }
  else if (strcmp(s, "focus_lost") == 0)
  {
    _retval = orxSYSTEM_EVENT_FOCUS_LOST;
  }
  else if (strcmp(s, "background") == 0)
  {
    _retval = orxSYSTEM_EVENT_BACKGROUND;
  }
  else if (strcmp(s, "foreground") == 0)
  {
    _retval = orxSYSTEM_EVENT_FOREGROUND;
  }
  else if (strcmp(s, "game_loop_start") == 0)
  {
    _retval = orxSYSTEM_EVENT_GAME_LOOP_START;
  }
  else if (strcmp(s, "game_loop_stop") == 0)
  {
    _retval = orxSYSTEM_EVENT_GAME_LOOP_STOP;
  }
  else if (strcmp(s, "touch_begin") == 0)
  {
    _retval = orxSYSTEM_EVENT_TOUCH_BEGIN;
  }
  else if (strcmp(s, "touch_move") == 0)
  {
    _retval = orxSYSTEM_EVENT_TOUCH_MOVE;
  }
  else if (strcmp(s, "touch_end") == 0)
  {
    _retval = orxSYSTEM_EVENT_TOUCH_END;
  }
  else if (strcmp(s, "accelerate") == 0)
  {
    _retval = orxSYSTEM_EVENT_ACCELERATE;
  }
  else if (strcmp(s, "motion_shake") == 0)
  {
    _retval = orxSYSTEM_EVENT_MOTION_SHAKE;
  }
  else if (strcmp(s, "drop") == 0)
  {
    _retval = orxSYSTEM_EVENT_DROP;
  }
  else if (strcmp(s, "clipboard") == 0)
  {
    _retval = orxSYSTEM_EVENT_CLIPBOARD;
  }
  else if (strcmp(s, "none") == 0)
  {
    _retval = orxSYSTEM_EVENT_NONE;
  }
  else
  {
    luaL_error(L, "unrecognized enum %s!", s);
  }
  return _retval;
}

LORX_API orxTEXTURE_EVENT lorx_lenumstr_to_orxTEXTURE_EVENT(lua_State *L, int i)
{
  const char* s = luaL_checkstring(L, i);
  orxTEXTURE_EVENT _retval = orxENUM_NONE;
  if (strcmp(s, "create") == 0)
  {
    _retval = orxTEXTURE_EVENT_CREATE;
  }
  else if (strcmp(s, "delete") == 0)
  {
    _retval = orxTEXTURE_EVENT_DELETE;
  }
  else if (strcmp(s, "load") == 0)
  {
    _retval = orxTEXTURE_EVENT_LOAD;
  }
  else if (strcmp(s, "none") == 0)
  {
    _retval = orxTEXTURE_EVENT_NONE;
  }
  else
  {
    luaL_error(L, "unrecognized enum %s!", s);
  }
  return _retval;
}

LORX_API orxTIMELINE_EVENT lorx_lenumstr_to_orxTIMELINE_EVENT(lua_State *L, int i)
{
  const char* s = luaL_checkstring(L, i);
  orxTIMELINE_EVENT _retval = orxENUM_NONE;
  if (strcmp(s, "track_start") == 0)
  {
    _retval = orxTIMELINE_EVENT_TRACK_START;
  }
  else if (strcmp(s, "track_stop") == 0)
  {
    _retval = orxTIMELINE_EVENT_TRACK_STOP;
  }
  else if (strcmp(s, "track_add") == 0)
  {
    _retval = orxTIMELINE_EVENT_TRACK_ADD;
  }
  else if (strcmp(s, "track_remove") == 0)
  {
    _retval = orxTIMELINE_EVENT_TRACK_REMOVE;
  }
  else if (strcmp(s, "loop") == 0)
  {
    _retval = orxTIMELINE_EVENT_LOOP;
  }
  else if (strcmp(s, "trigger") == 0)
  {
    _retval = orxTIMELINE_EVENT_TRIGGER;
  }
  else if (strcmp(s, "none") == 0)
  {
    _retval = orxTIMELINE_EVENT_NONE;
  }
  else
  {
    luaL_error(L, "unrecognized enum %s!", s);
  }
  return _retval;
}

LORX_API orxVIEWPORT_EVENT lorx_lenumstr_to_orxVIEWPORT_EVENT(lua_State *L, int i)
{
  const char* s = luaL_checkstring(L, i);
  orxVIEWPORT_EVENT _retval = orxENUM_NONE;
  if (strcmp(s, "resize") == 0)
  {
    _retval = orxVIEWPORT_EVENT_RESIZE;
  }
  else if (strcmp(s, "none") == 0)
  {
    _retval = orxVIEWPORT_EVENT_NONE;
  }
  else
  {
    luaL_error(L, "unrecognized enum %s!", s);
  }
  return _retval;
}


/*
 * Conversion functions for converting an Orx enum variable to a lua enum string (strictly typed)
 */
LORX_API int lorx_orxANIM_EVENT_to_lenumstr(lua_State *L, orxANIM_EVENT src)
{
  const char* src_str = NULL;
  if (src == orxANIM_EVENT_START)
  {
    src_str = "start";
  }
  else if (src == orxANIM_EVENT_STOP)
  {
    src_str = "stop";
  }
  else if (src == orxANIM_EVENT_CUT)
  {
    src_str = "cut";
  }
  else if (src == orxANIM_EVENT_LOOP)
  {
    src_str = "loop";
  }
  else if (src == orxANIM_EVENT_UPDATE)
  {
    src_str = "update";
  }
  else if (src == orxANIM_EVENT_CUSTOM_EVENT)
  {
    src_str = "custom_event";
  }
  else if (src == orxANIM_EVENT_NONE)
  {
    src_str = "none";
  }
  else
  {
    LORX_ERROR("unexpected enum type: %u!\n", src);
  }
  lua_pushstring(L, src_str);
  
  return 1;
}

LORX_API int lorx_orxCLOCK_EVENT_to_lenumstr(lua_State *L, orxCLOCK_EVENT src)
{
  const char* src_str = NULL;
  if (src == orxCLOCK_EVENT_RESTART)
  {
    src_str = "restart";
  }
  else if (src == orxCLOCK_EVENT_RESYNC)
  {
    src_str = "resync";
  }
  else if (src == orxCLOCK_EVENT_PAUSE)
  {
    src_str = "pause";
  }
  else if (src == orxCLOCK_EVENT_UNPAUSE)
  {
    src_str = "unpause";
  }
  else if (src == orxCLOCK_EVENT_NONE)
  {
    src_str = "none";
  }
  else
  {
    LORX_ERROR("unexpected enum type: %u!\n", src);
  }
  lua_pushstring(L, src_str);
  
  return 1;
}

LORX_API int lorx_orxCLOCK_MODIFIER_to_lenumstr(lua_State *L, orxCLOCK_MODIFIER src)
{
  const char* src_str = NULL;
  if (src == orxCLOCK_MODIFIER_FIXED)
  {
    src_str = "fixed";
  }
  else if (src == orxCLOCK_MODIFIER_MULTIPLY)
  {
    src_str = "multiply";
  }
  else if (src == orxCLOCK_MODIFIER_MAXED)
  {
    src_str = "maxed";
  }
  else if (src == orxCLOCK_MODIFIER_AVERAGE)
  {
    src_str = "average";
  }
  else if (src == orxCLOCK_MODIFIER_NONE)
  {
    src_str = "none";
  }
  else
  {
    LORX_ERROR("unexpected enum type: %u!\n", src);
  }
  lua_pushstring(L, src_str);
  
  return 1;
}

LORX_API int lorx_orxCLOCK_PRIORITY_to_lenumstr(lua_State *L, orxCLOCK_PRIORITY src)
{
  const char* src_str = NULL;
  if (src == orxCLOCK_PRIORITY_LOWEST)
  {
    src_str = "lowest";
  }
  else if (src == orxCLOCK_PRIORITY_LOWER)
  {
    src_str = "lower";
  }
  else if (src == orxCLOCK_PRIORITY_LOW)
  {
    src_str = "low";
  }
  else if (src == orxCLOCK_PRIORITY_NORMAL)
  {
    src_str = "normal";
  }
  else if (src == orxCLOCK_PRIORITY_HIGH)
  {
    src_str = "high";
  }
  else if (src == orxCLOCK_PRIORITY_HIGHER)
  {
    src_str = "higher";
  }
  else if (src == orxCLOCK_PRIORITY_HIGHEST)
  {
    src_str = "highest";
  }
  else if (src == orxCLOCK_PRIORITY_NONE)
  {
    src_str = "none";
  }
  else
  {
    LORX_ERROR("unexpected enum type: %u!\n", src);
  }
  lua_pushstring(L, src_str);
  
  return 1;
}

LORX_API int lorx_orxCOMMAND_VAR_TYPE_to_lenumstr(lua_State *L, orxCOMMAND_VAR_TYPE src)
{
  const char* src_str = NULL;
  if (src == orxCOMMAND_VAR_TYPE_STRING)
  {
    src_str = "string";
  }
  else if (src == orxCOMMAND_VAR_TYPE_FLOAT)
  {
    src_str = "float";
  }
  else if (src == orxCOMMAND_VAR_TYPE_S32)
  {
    src_str = "s32";
  }
  else if (src == orxCOMMAND_VAR_TYPE_U32)
  {
    src_str = "u32";
  }
  else if (src == orxCOMMAND_VAR_TYPE_S64)
  {
    src_str = "s64";
  }
  else if (src == orxCOMMAND_VAR_TYPE_U64)
  {
    src_str = "u64";
  }
  else if (src == orxCOMMAND_VAR_TYPE_BOOL)
  {
    src_str = "bool";
  }
  else if (src == orxCOMMAND_VAR_TYPE_VECTOR)
  {
    src_str = "vector";
  }
  else if (src == orxCOMMAND_VAR_TYPE_NUMERIC)
  {
    src_str = "numeric";
  }
  else if (src == orxCOMMAND_VAR_TYPE_NONE)
  {
    src_str = "none";
  }
  else
  {
    LORX_ERROR("unexpected enum type: %u!\n", src);
  }
  lua_pushstring(L, src_str);
  
  return 1;
}

LORX_API int lorx_orxCONFIG_EVENT_to_lenumstr(lua_State *L, orxCONFIG_EVENT src)
{
  const char* src_str = NULL;
  if (src == orxCONFIG_EVENT_RELOAD_START)
  {
    src_str = "reload_start";
  }
  else if (src == orxCONFIG_EVENT_RELOAD_STOP)
  {
    src_str = "reload_stop";
  }
  else if (src == orxCONFIG_EVENT_NONE)
  {
    src_str = "none";
  }
  else
  {
    LORX_ERROR("unexpected enum type: %u!\n", src);
  }
  lua_pushstring(L, src_str);
  
  return 1;
}

LORX_API int lorx_orxDEBUG_LEVEL_to_lenumstr(lua_State *L, orxDEBUG_LEVEL src)
{
  const char* src_str = NULL;
  if (src == orxDEBUG_LEVEL_ANIM)
  {
    src_str = "anim";
  }
  else if (src == orxDEBUG_LEVEL_CONFIG)
  {
    src_str = "config";
  }
  else if (src == orxDEBUG_LEVEL_CLOCK)
  {
    src_str = "clock";
  }
  else if (src == orxDEBUG_LEVEL_COMMAND)
  {
    src_str = "command";
  }
  else if (src == orxDEBUG_LEVEL_DISPLAY)
  {
    src_str = "display";
  }
  else if (src == orxDEBUG_LEVEL_FILE)
  {
    src_str = "file";
  }
  else if (src == orxDEBUG_LEVEL_INPUT)
  {
    src_str = "input";
  }
  else if (src == orxDEBUG_LEVEL_JOYSTICK)
  {
    src_str = "joystick";
  }
  else if (src == orxDEBUG_LEVEL_KEYBOARD)
  {
    src_str = "keyboard";
  }
  else if (src == orxDEBUG_LEVEL_MEMORY)
  {
    src_str = "memory";
  }
  else if (src == orxDEBUG_LEVEL_MOUSE)
  {
    src_str = "mouse";
  }
  else if (src == orxDEBUG_LEVEL_OBJECT)
  {
    src_str = "object";
  }
  else if (src == orxDEBUG_LEVEL_PARAM)
  {
    src_str = "param";
  }
  else if (src == orxDEBUG_LEVEL_PHYSICS)
  {
    src_str = "physics";
  }
  else if (src == orxDEBUG_LEVEL_PLUGIN)
  {
    src_str = "plugin";
  }
  else if (src == orxDEBUG_LEVEL_PROFILER)
  {
    src_str = "profiler";
  }
  else if (src == orxDEBUG_LEVEL_RENDER)
  {
    src_str = "render";
  }
  else if (src == orxDEBUG_LEVEL_SCREENSHOT)
  {
    src_str = "screenshot";
  }
  else if (src == orxDEBUG_LEVEL_SOUND)
  {
    src_str = "sound";
  }
  else if (src == orxDEBUG_LEVEL_SYSTEM)
  {
    src_str = "system";
  }
  else if (src == orxDEBUG_LEVEL_TIMER)
  {
    src_str = "timer";
  }
  else if (src == orxDEBUG_LEVEL_LOG)
  {
    src_str = "log";
  }
  else if (src == orxDEBUG_LEVEL_ASSERT)
  {
    src_str = "assert";
  }
  else if (src == orxDEBUG_LEVEL_USER)
  {
    src_str = "user";
  }
  else if (src == orxDEBUG_LEVEL_ALL)
  {
    src_str = "all";
  }
  else if (src == orxDEBUG_LEVEL_NONE)
  {
    src_str = "none";
  }
  else
  {
    LORX_ERROR("unexpected enum type: %u!\n", src);
  }
  lua_pushstring(L, src_str);
  
  return 1;
}

LORX_API int lorx_orxDISPLAY_BLEND_MODE_to_lenumstr(lua_State *L, orxDISPLAY_BLEND_MODE src)
{
  const char* src_str = NULL;
  if (src == orxDISPLAY_BLEND_MODE_ALPHA)
  {
    src_str = "alpha";
  }
  else if (src == orxDISPLAY_BLEND_MODE_MULTIPLY)
  {
    src_str = "multiply";
  }
  else if (src == orxDISPLAY_BLEND_MODE_ADD)
  {
    src_str = "add";
  }
  else if (src == orxDISPLAY_BLEND_MODE_PREMUL)
  {
    src_str = "premul";
  }
  else if (src == orxDISPLAY_BLEND_MODE_NONE)
  {
    src_str = "none";
  }
  else
  {
    LORX_ERROR("unexpected enum type: %u!\n", src);
  }
  lua_pushstring(L, src_str);
  
  return 1;
}

LORX_API int lorx_orxDISPLAY_EVENT_to_lenumstr(lua_State *L, orxDISPLAY_EVENT src)
{
  const char* src_str = NULL;
  if (src == orxDISPLAY_EVENT_SET_VIDEO_MODE)
  {
    src_str = "set_video_mode";
  }
  else if (src == orxDISPLAY_EVENT_LOAD_BITMAP)
  {
    src_str = "load_bitmap";
  }
  else if (src == orxDISPLAY_EVENT_NONE)
  {
    src_str = "none";
  }
  else
  {
    LORX_ERROR("unexpected enum type: %u!\n", src);
  }
  lua_pushstring(L, src_str);
  
  return 1;
}

LORX_API int lorx_orxDISPLAY_PRIMITIVE_to_lenumstr(lua_State *L, orxDISPLAY_PRIMITIVE src)
{
  const char* src_str = NULL;
  if (src == orxDISPLAY_PRIMITIVE_POINTS)
  {
    src_str = "points";
  }
  else if (src == orxDISPLAY_PRIMITIVE_LINES)
  {
    src_str = "lines";
  }
  else if (src == orxDISPLAY_PRIMITIVE_LINE_LOOP)
  {
    src_str = "line_loop";
  }
  else if (src == orxDISPLAY_PRIMITIVE_LINE_STRIP)
  {
    src_str = "line_strip";
  }
  else if (src == orxDISPLAY_PRIMITIVE_TRIANGLES)
  {
    src_str = "triangles";
  }
  else if (src == orxDISPLAY_PRIMITIVE_TRIANGLE_STRIP)
  {
    src_str = "triangle_strip";
  }
  else if (src == orxDISPLAY_PRIMITIVE_TRIANGLE_FAN)
  {
    src_str = "triangle_fan";
  }
  else if (src == orxDISPLAY_PRIMITIVE_NONE)
  {
    src_str = "none";
  }
  else
  {
    LORX_ERROR("unexpected enum type: %u!\n", src);
  }
  lua_pushstring(L, src_str);
  
  return 1;
}

LORX_API int lorx_orxDISPLAY_SMOOTHING_to_lenumstr(lua_State *L, orxDISPLAY_SMOOTHING src)
{
  const char* src_str = NULL;
  if (src == orxDISPLAY_SMOOTHING_DEFAULT)
  {
    src_str = "default";
  }
  else if (src == orxDISPLAY_SMOOTHING_ON)
  {
    src_str = "on";
  }
  else if (src == orxDISPLAY_SMOOTHING_OFF)
  {
    src_str = "off";
  }
  else if (src == orxDISPLAY_SMOOTHING_NONE)
  {
    src_str = "none";
  }
  else
  {
    LORX_ERROR("unexpected enum type: %u!\n", src);
  }
  lua_pushstring(L, src_str);
  
  return 1;
}

LORX_API int lorx_orxEVENT_TYPE_to_lenumstr(lua_State *L, orxEVENT_TYPE src)
{
  const char* src_str = NULL;
  if (src == orxEVENT_TYPE_ANIM)
  {
    src_str = "anim";
  }
  else if (src == orxEVENT_TYPE_CLOCK)
  {
    src_str = "clock";
  }
  else if (src == orxEVENT_TYPE_CONFIG)
  {
    src_str = "config";
  }
  else if (src == orxEVENT_TYPE_DISPLAY)
  {
    src_str = "display";
  }
  else if (src == orxEVENT_TYPE_FX)
  {
    src_str = "fx";
  }
  else if (src == orxEVENT_TYPE_INPUT)
  {
    src_str = "input";
  }
  else if (src == orxEVENT_TYPE_LOCALE)
  {
    src_str = "locale";
  }
  else if (src == orxEVENT_TYPE_OBJECT)
  {
    src_str = "object";
  }
  else if (src == orxEVENT_TYPE_RENDER)
  {
    src_str = "render";
  }
  else if (src == orxEVENT_TYPE_PHYSICS)
  {
    src_str = "physics";
  }
  else if (src == orxEVENT_TYPE_RESOURCE)
  {
    src_str = "resource";
  }
  else if (src == orxEVENT_TYPE_SHADER)
  {
    src_str = "shader";
  }
  else if (src == orxEVENT_TYPE_SOUND)
  {
    src_str = "sound";
  }
  else if (src == orxEVENT_TYPE_SPAWNER)
  {
    src_str = "spawner";
  }
  else if (src == orxEVENT_TYPE_SYSTEM)
  {
    src_str = "system";
  }
  else if (src == orxEVENT_TYPE_TEXTURE)
  {
    src_str = "texture";
  }
  else if (src == orxEVENT_TYPE_TIMELINE)
  {
    src_str = "timeline";
  }
  else if (src == orxEVENT_TYPE_VIEWPORT)
  {
    src_str = "viewport";
  }
  else if (src == orxEVENT_TYPE_FIRST_RESERVED)
  {
    src_str = "first_reserved";
  }
  else if (src == orxEVENT_TYPE_LAST_RESERVED)
  {
    src_str = "last_reserved";
  }
  else if (src == orxEVENT_TYPE_USER_DEFINED)
  {
    src_str = "user_defined";
  }
  else if (src == orxEVENT_TYPE_NONE)
  {
    src_str = "none";
  }
  else
  {
    LORX_ERROR("unexpected enum type: %u!\n", src);
  }
  lua_pushstring(L, src_str);
  
  return 1;
}

LORX_API int lorx_orxFRAME_SPACE_to_lenumstr(lua_State *L, orxFRAME_SPACE src)
{
  const char* src_str = NULL;
  if (src == orxFRAME_SPACE_GLOBAL)
  {
    src_str = "global";
  }
  else if (src == orxFRAME_SPACE_LOCAL)
  {
    src_str = "local";
  }
  else if (src == orxFRAME_SPACE_NONE)
  {
    src_str = "none";
  }
  else
  {
    LORX_ERROR("unexpected enum type: %u!\n", src);
  }
  lua_pushstring(L, src_str);
  
  return 1;
}

LORX_API int lorx_orxFX_CURVE_to_lenumstr(lua_State *L, orxFX_CURVE src)
{
  const char* src_str = NULL;
  if (src == orxFX_CURVE_LINEAR)
  {
    src_str = "linear";
  }
  else if (src == orxFX_CURVE_SMOOTH)
  {
    src_str = "smooth";
  }
  else if (src == orxFX_CURVE_SMOOTHER)
  {
    src_str = "smoother";
  }
  else if (src == orxFX_CURVE_TRIANGLE)
  {
    src_str = "triangle";
  }
  else if (src == orxFX_CURVE_SINE)
  {
    src_str = "sine";
  }
  else if (src == orxFX_CURVE_SQUARE)
  {
    src_str = "square";
  }
  else if (src == orxFX_CURVE_NONE)
  {
    src_str = "none";
  }
  else
  {
    LORX_ERROR("unexpected enum type: %u!\n", src);
  }
  lua_pushstring(L, src_str);
  
  return 1;
}

LORX_API int lorx_orxFX_EVENT_to_lenumstr(lua_State *L, orxFX_EVENT src)
{
  const char* src_str = NULL;
  if (src == orxFX_EVENT_START)
  {
    src_str = "start";
  }
  else if (src == orxFX_EVENT_STOP)
  {
    src_str = "stop";
  }
  else if (src == orxFX_EVENT_ADD)
  {
    src_str = "add";
  }
  else if (src == orxFX_EVENT_REMOVE)
  {
    src_str = "remove";
  }
  else if (src == orxFX_EVENT_LOOP)
  {
    src_str = "loop";
  }
  else if (src == orxFX_EVENT_NONE)
  {
    src_str = "none";
  }
  else
  {
    LORX_ERROR("unexpected enum type: %u!\n", src);
  }
  lua_pushstring(L, src_str);
  
  return 1;
}

LORX_API int lorx_orxINPUT_EVENT_to_lenumstr(lua_State *L, orxINPUT_EVENT src)
{
  const char* src_str = NULL;
  if (src == orxINPUT_EVENT_ON)
  {
    src_str = "on";
  }
  else if (src == orxINPUT_EVENT_OFF)
  {
    src_str = "off";
  }
  else if (src == orxINPUT_EVENT_SELECT_SET)
  {
    src_str = "select_set";
  }
  else if (src == orxINPUT_EVENT_REMOVE_SET)
  {
    src_str = "remove_set";
  }
  else if (src == orxINPUT_EVENT_NONE)
  {
    src_str = "none";
  }
  else
  {
    LORX_ERROR("unexpected enum type: %u!\n", src);
  }
  lua_pushstring(L, src_str);
  
  return 1;
}

LORX_API int lorx_orxINPUT_MODE_to_lenumstr(lua_State *L, orxINPUT_MODE src)
{
  const char* src_str = NULL;
  if (src == orxINPUT_MODE_FULL)
  {
    src_str = "full";
  }
  else if (src == orxINPUT_MODE_POSITIVE)
  {
    src_str = "positive";
  }
  else if (src == orxINPUT_MODE_NEGATIVE)
  {
    src_str = "negative";
  }
  else if (src == orxINPUT_MODE_NONE)
  {
    src_str = "none";
  }
  else
  {
    LORX_ERROR("unexpected enum type: %u!\n", src);
  }
  lua_pushstring(L, src_str);
  
  return 1;
}

LORX_API int lorx_orxINPUT_TYPE_to_lenumstr(lua_State *L, orxINPUT_TYPE src)
{
  const char* src_str = NULL;
  if (src == orxINPUT_TYPE_KEYBOARD_KEY)
  {
    src_str = "keyboard_key";
  }
  else if (src == orxINPUT_TYPE_MOUSE_BUTTON)
  {
    src_str = "mouse_button";
  }
  else if (src == orxINPUT_TYPE_MOUSE_AXIS)
  {
    src_str = "mouse_axis";
  }
  else if (src == orxINPUT_TYPE_JOYSTICK_BUTTON)
  {
    src_str = "joystick_button";
  }
  else if (src == orxINPUT_TYPE_JOYSTICK_AXIS)
  {
    src_str = "joystick_axis";
  }
  else if (src == orxINPUT_TYPE_EXTERNAL)
  {
    src_str = "external";
  }
  else if (src == orxINPUT_TYPE_NONE)
  {
    src_str = "none";
  }
  else
  {
    LORX_ERROR("unexpected enum type: %u!\n", src);
  }
  lua_pushstring(L, src_str);
  
  return 1;
}

LORX_API int lorx_orxJOYSTICK_AXIS_to_lenumstr(lua_State *L, orxJOYSTICK_AXIS src)
{
  const char* src_str = NULL;
  if (src == orxJOYSTICK_AXIS_LX_1)
  {
    src_str = "lx_1";
  }
  else if (src == orxJOYSTICK_AXIS_LY_1)
  {
    src_str = "ly_1";
  }
  else if (src == orxJOYSTICK_AXIS_RX_1)
  {
    src_str = "rx_1";
  }
  else if (src == orxJOYSTICK_AXIS_RY_1)
  {
    src_str = "ry_1";
  }
  else if (src == orxJOYSTICK_AXIS_LTRIGGER_1)
  {
    src_str = "ltrigger_1";
  }
  else if (src == orxJOYSTICK_AXIS_RTRIGGER_1)
  {
    src_str = "rtrigger_1";
  }
  else if (src == orxJOYSTICK_AXIS_LX_2)
  {
    src_str = "lx_2";
  }
  else if (src == orxJOYSTICK_AXIS_LY_2)
  {
    src_str = "ly_2";
  }
  else if (src == orxJOYSTICK_AXIS_RX_2)
  {
    src_str = "rx_2";
  }
  else if (src == orxJOYSTICK_AXIS_RY_2)
  {
    src_str = "ry_2";
  }
  else if (src == orxJOYSTICK_AXIS_LTRIGGER_2)
  {
    src_str = "ltrigger_2";
  }
  else if (src == orxJOYSTICK_AXIS_RTRIGGER_2)
  {
    src_str = "rtrigger_2";
  }
  else if (src == orxJOYSTICK_AXIS_LX_3)
  {
    src_str = "lx_3";
  }
  else if (src == orxJOYSTICK_AXIS_LY_3)
  {
    src_str = "ly_3";
  }
  else if (src == orxJOYSTICK_AXIS_RX_3)
  {
    src_str = "rx_3";
  }
  else if (src == orxJOYSTICK_AXIS_RY_3)
  {
    src_str = "ry_3";
  }
  else if (src == orxJOYSTICK_AXIS_LTRIGGER_3)
  {
    src_str = "ltrigger_3";
  }
  else if (src == orxJOYSTICK_AXIS_RTRIGGER_3)
  {
    src_str = "rtrigger_3";
  }
  else if (src == orxJOYSTICK_AXIS_LX_4)
  {
    src_str = "lx_4";
  }
  else if (src == orxJOYSTICK_AXIS_LY_4)
  {
    src_str = "ly_4";
  }
  else if (src == orxJOYSTICK_AXIS_RX_4)
  {
    src_str = "rx_4";
  }
  else if (src == orxJOYSTICK_AXIS_RY_4)
  {
    src_str = "ry_4";
  }
  else if (src == orxJOYSTICK_AXIS_LTRIGGER_4)
  {
    src_str = "ltrigger_4";
  }
  else if (src == orxJOYSTICK_AXIS_RTRIGGER_4)
  {
    src_str = "rtrigger_4";
  }
  else if (src == orxJOYSTICK_AXIS_LX_5)
  {
    src_str = "lx_5";
  }
  else if (src == orxJOYSTICK_AXIS_LY_5)
  {
    src_str = "ly_5";
  }
  else if (src == orxJOYSTICK_AXIS_RX_5)
  {
    src_str = "rx_5";
  }
  else if (src == orxJOYSTICK_AXIS_RY_5)
  {
    src_str = "ry_5";
  }
  else if (src == orxJOYSTICK_AXIS_LTRIGGER_5)
  {
    src_str = "ltrigger_5";
  }
  else if (src == orxJOYSTICK_AXIS_RTRIGGER_5)
  {
    src_str = "rtrigger_5";
  }
  else if (src == orxJOYSTICK_AXIS_LX_6)
  {
    src_str = "lx_6";
  }
  else if (src == orxJOYSTICK_AXIS_LY_6)
  {
    src_str = "ly_6";
  }
  else if (src == orxJOYSTICK_AXIS_RX_6)
  {
    src_str = "rx_6";
  }
  else if (src == orxJOYSTICK_AXIS_RY_6)
  {
    src_str = "ry_6";
  }
  else if (src == orxJOYSTICK_AXIS_LTRIGGER_6)
  {
    src_str = "ltrigger_6";
  }
  else if (src == orxJOYSTICK_AXIS_RTRIGGER_6)
  {
    src_str = "rtrigger_6";
  }
  else if (src == orxJOYSTICK_AXIS_LX_7)
  {
    src_str = "lx_7";
  }
  else if (src == orxJOYSTICK_AXIS_LY_7)
  {
    src_str = "ly_7";
  }
  else if (src == orxJOYSTICK_AXIS_RX_7)
  {
    src_str = "rx_7";
  }
  else if (src == orxJOYSTICK_AXIS_RY_7)
  {
    src_str = "ry_7";
  }
  else if (src == orxJOYSTICK_AXIS_LTRIGGER_7)
  {
    src_str = "ltrigger_7";
  }
  else if (src == orxJOYSTICK_AXIS_RTRIGGER_7)
  {
    src_str = "rtrigger_7";
  }
  else if (src == orxJOYSTICK_AXIS_LX_8)
  {
    src_str = "lx_8";
  }
  else if (src == orxJOYSTICK_AXIS_LY_8)
  {
    src_str = "ly_8";
  }
  else if (src == orxJOYSTICK_AXIS_RX_8)
  {
    src_str = "rx_8";
  }
  else if (src == orxJOYSTICK_AXIS_RY_8)
  {
    src_str = "ry_8";
  }
  else if (src == orxJOYSTICK_AXIS_LTRIGGER_8)
  {
    src_str = "ltrigger_8";
  }
  else if (src == orxJOYSTICK_AXIS_RTRIGGER_8)
  {
    src_str = "rtrigger_8";
  }
  else if (src == orxJOYSTICK_AXIS_LX_9)
  {
    src_str = "lx_9";
  }
  else if (src == orxJOYSTICK_AXIS_LY_9)
  {
    src_str = "ly_9";
  }
  else if (src == orxJOYSTICK_AXIS_RX_9)
  {
    src_str = "rx_9";
  }
  else if (src == orxJOYSTICK_AXIS_RY_9)
  {
    src_str = "ry_9";
  }
  else if (src == orxJOYSTICK_AXIS_LTRIGGER_9)
  {
    src_str = "ltrigger_9";
  }
  else if (src == orxJOYSTICK_AXIS_RTRIGGER_9)
  {
    src_str = "rtrigger_9";
  }
  else if (src == orxJOYSTICK_AXIS_LX_10)
  {
    src_str = "lx_10";
  }
  else if (src == orxJOYSTICK_AXIS_LY_10)
  {
    src_str = "ly_10";
  }
  else if (src == orxJOYSTICK_AXIS_RX_10)
  {
    src_str = "rx_10";
  }
  else if (src == orxJOYSTICK_AXIS_RY_10)
  {
    src_str = "ry_10";
  }
  else if (src == orxJOYSTICK_AXIS_LTRIGGER_10)
  {
    src_str = "ltrigger_10";
  }
  else if (src == orxJOYSTICK_AXIS_RTRIGGER_10)
  {
    src_str = "rtrigger_10";
  }
  else if (src == orxJOYSTICK_AXIS_LX_11)
  {
    src_str = "lx_11";
  }
  else if (src == orxJOYSTICK_AXIS_LY_11)
  {
    src_str = "ly_11";
  }
  else if (src == orxJOYSTICK_AXIS_RX_11)
  {
    src_str = "rx_11";
  }
  else if (src == orxJOYSTICK_AXIS_RY_11)
  {
    src_str = "ry_11";
  }
  else if (src == orxJOYSTICK_AXIS_LTRIGGER_11)
  {
    src_str = "ltrigger_11";
  }
  else if (src == orxJOYSTICK_AXIS_RTRIGGER_11)
  {
    src_str = "rtrigger_11";
  }
  else if (src == orxJOYSTICK_AXIS_LX_12)
  {
    src_str = "lx_12";
  }
  else if (src == orxJOYSTICK_AXIS_LY_12)
  {
    src_str = "ly_12";
  }
  else if (src == orxJOYSTICK_AXIS_RX_12)
  {
    src_str = "rx_12";
  }
  else if (src == orxJOYSTICK_AXIS_RY_12)
  {
    src_str = "ry_12";
  }
  else if (src == orxJOYSTICK_AXIS_LTRIGGER_12)
  {
    src_str = "ltrigger_12";
  }
  else if (src == orxJOYSTICK_AXIS_RTRIGGER_12)
  {
    src_str = "rtrigger_12";
  }
  else if (src == orxJOYSTICK_AXIS_LX_13)
  {
    src_str = "lx_13";
  }
  else if (src == orxJOYSTICK_AXIS_LY_13)
  {
    src_str = "ly_13";
  }
  else if (src == orxJOYSTICK_AXIS_RX_13)
  {
    src_str = "rx_13";
  }
  else if (src == orxJOYSTICK_AXIS_RY_13)
  {
    src_str = "ry_13";
  }
  else if (src == orxJOYSTICK_AXIS_LTRIGGER_13)
  {
    src_str = "ltrigger_13";
  }
  else if (src == orxJOYSTICK_AXIS_RTRIGGER_13)
  {
    src_str = "rtrigger_13";
  }
  else if (src == orxJOYSTICK_AXIS_LX_14)
  {
    src_str = "lx_14";
  }
  else if (src == orxJOYSTICK_AXIS_LY_14)
  {
    src_str = "ly_14";
  }
  else if (src == orxJOYSTICK_AXIS_RX_14)
  {
    src_str = "rx_14";
  }
  else if (src == orxJOYSTICK_AXIS_RY_14)
  {
    src_str = "ry_14";
  }
  else if (src == orxJOYSTICK_AXIS_LTRIGGER_14)
  {
    src_str = "ltrigger_14";
  }
  else if (src == orxJOYSTICK_AXIS_RTRIGGER_14)
  {
    src_str = "rtrigger_14";
  }
  else if (src == orxJOYSTICK_AXIS_LX_15)
  {
    src_str = "lx_15";
  }
  else if (src == orxJOYSTICK_AXIS_LY_15)
  {
    src_str = "ly_15";
  }
  else if (src == orxJOYSTICK_AXIS_RX_15)
  {
    src_str = "rx_15";
  }
  else if (src == orxJOYSTICK_AXIS_RY_15)
  {
    src_str = "ry_15";
  }
  else if (src == orxJOYSTICK_AXIS_LTRIGGER_15)
  {
    src_str = "ltrigger_15";
  }
  else if (src == orxJOYSTICK_AXIS_RTRIGGER_15)
  {
    src_str = "rtrigger_15";
  }
  else if (src == orxJOYSTICK_AXIS_LX_16)
  {
    src_str = "lx_16";
  }
  else if (src == orxJOYSTICK_AXIS_LY_16)
  {
    src_str = "ly_16";
  }
  else if (src == orxJOYSTICK_AXIS_RX_16)
  {
    src_str = "rx_16";
  }
  else if (src == orxJOYSTICK_AXIS_RY_16)
  {
    src_str = "ry_16";
  }
  else if (src == orxJOYSTICK_AXIS_LTRIGGER_16)
  {
    src_str = "ltrigger_16";
  }
  else if (src == orxJOYSTICK_AXIS_RTRIGGER_16)
  {
    src_str = "rtrigger_16";
  }
  else if (src == orxJOYSTICK_AXIS_NONE)
  {
    src_str = "none";
  }
  else
  {
    LORX_ERROR("unexpected enum type: %u!\n", src);
  }
  lua_pushstring(L, src_str);
  
  return 1;
}

LORX_API int lorx_orxJOYSTICK_BUTTON_to_lenumstr(lua_State *L, orxJOYSTICK_BUTTON src)
{
  const char* src_str = NULL;
  {
    int flag = 0;
    {
      if (src == orxJOYSTICK_BUTTON_A_1)
      {
        src_str = "a_1";
      }
      else if (src == orxJOYSTICK_BUTTON_B_1)
      {
        src_str = "b_1";
      }
      else if (src == orxJOYSTICK_BUTTON_X_1)
      {
        src_str = "x_1";
      }
      else if (src == orxJOYSTICK_BUTTON_Y_1)
      {
        src_str = "y_1";
      }
      else if (src == orxJOYSTICK_BUTTON_LBUMPER_1)
      {
        src_str = "lbumper_1";
      }
      else if (src == orxJOYSTICK_BUTTON_RBUMPER_1)
      {
        src_str = "rbumper_1";
      }
      else if (src == orxJOYSTICK_BUTTON_BACK_1)
      {
        src_str = "back_1";
      }
      else if (src == orxJOYSTICK_BUTTON_START_1)
      {
        src_str = "start_1";
      }
      else if (src == orxJOYSTICK_BUTTON_GUIDE_1)
      {
        src_str = "guide_1";
      }
      else if (src == orxJOYSTICK_BUTTON_LTHUMB_1)
      {
        src_str = "lthumb_1";
      }
      else if (src == orxJOYSTICK_BUTTON_RTHUMB_1)
      {
        src_str = "rthumb_1";
      }
      else if (src == orxJOYSTICK_BUTTON_UP_1)
      {
        src_str = "up_1";
      }
      else if (src == orxJOYSTICK_BUTTON_RIGHT_1)
      {
        src_str = "right_1";
      }
      else if (src == orxJOYSTICK_BUTTON_DOWN_1)
      {
        src_str = "down_1";
      }
      else if (src == orxJOYSTICK_BUTTON_LEFT_1)
      {
        src_str = "left_1";
      }
      else if (src == orxJOYSTICK_BUTTON_1_1)
      {
        src_str = "1_1";
      }
      else if (src == orxJOYSTICK_BUTTON_2_1)
      {
        src_str = "2_1";
      }
      else if (src == orxJOYSTICK_BUTTON_3_1)
      {
        src_str = "3_1";
      }
      else if (src == orxJOYSTICK_BUTTON_4_1)
      {
        src_str = "4_1";
      }
      else if (src == orxJOYSTICK_BUTTON_5_1)
      {
        src_str = "5_1";
      }
      else if (src == orxJOYSTICK_BUTTON_6_1)
      {
        src_str = "6_1";
      }
      else if (src == orxJOYSTICK_BUTTON_7_1)
      {
        src_str = "7_1";
      }
      else if (src == orxJOYSTICK_BUTTON_8_1)
      {
        src_str = "8_1";
      }
      else if (src == orxJOYSTICK_BUTTON_9_1)
      {
        src_str = "9_1";
      }
      else if (src == orxJOYSTICK_BUTTON_10_1)
      {
        src_str = "10_1";
      }
      else if (src == orxJOYSTICK_BUTTON_11_1)
      {
        src_str = "11_1";
      }
      else if (src == orxJOYSTICK_BUTTON_12_1)
      {
        src_str = "12_1";
      }
      else if (src == orxJOYSTICK_BUTTON_13_1)
      {
        src_str = "13_1";
      }
      else if (src == orxJOYSTICK_BUTTON_14_1)
      {
        src_str = "14_1";
      }
      else if (src == orxJOYSTICK_BUTTON_15_1)
      {
        src_str = "15_1";
      }
      else if (src == orxJOYSTICK_BUTTON_16_1)
      {
        src_str = "16_1";
      }
      else if (src == orxJOYSTICK_BUTTON_17_1)
      {
        src_str = "17_1";
      }
      else if (src == orxJOYSTICK_BUTTON_18_1)
      {
        src_str = "18_1";
      }
      else if (src == orxJOYSTICK_BUTTON_19_1)
      {
        src_str = "19_1";
      }
      else if (src == orxJOYSTICK_BUTTON_20_1)
      {
        src_str = "20_1";
      }
      else if (src == orxJOYSTICK_BUTTON_21_1)
      {
        src_str = "21_1";
      }
      else if (src == orxJOYSTICK_BUTTON_22_1)
      {
        src_str = "22_1";
      }
      else if (src == orxJOYSTICK_BUTTON_23_1)
      {
        src_str = "23_1";
      }
      else if (src == orxJOYSTICK_BUTTON_24_1)
      {
        src_str = "24_1";
      }
      else if (src == orxJOYSTICK_BUTTON_25_1)
      {
        src_str = "25_1";
      }
      else if (src == orxJOYSTICK_BUTTON_A_2)
      {
        src_str = "a_2";
      }
      else if (src == orxJOYSTICK_BUTTON_B_2)
      {
        src_str = "b_2";
      }
      else if (src == orxJOYSTICK_BUTTON_X_2)
      {
        src_str = "x_2";
      }
      else if (src == orxJOYSTICK_BUTTON_Y_2)
      {
        src_str = "y_2";
      }
      else if (src == orxJOYSTICK_BUTTON_LBUMPER_2)
      {
        src_str = "lbumper_2";
      }
      else if (src == orxJOYSTICK_BUTTON_RBUMPER_2)
      {
        src_str = "rbumper_2";
      }
      else if (src == orxJOYSTICK_BUTTON_BACK_2)
      {
        src_str = "back_2";
      }
      else if (src == orxJOYSTICK_BUTTON_START_2)
      {
        src_str = "start_2";
      }
      else if (src == orxJOYSTICK_BUTTON_GUIDE_2)
      {
        src_str = "guide_2";
      }
      else if (src == orxJOYSTICK_BUTTON_LTHUMB_2)
      {
        src_str = "lthumb_2";
      }
      else if (src == orxJOYSTICK_BUTTON_RTHUMB_2)
      {
        src_str = "rthumb_2";
      }
      else if (src == orxJOYSTICK_BUTTON_UP_2)
      {
        src_str = "up_2";
      }
      else if (src == orxJOYSTICK_BUTTON_RIGHT_2)
      {
        src_str = "right_2";
      }
      else if (src == orxJOYSTICK_BUTTON_DOWN_2)
      {
        src_str = "down_2";
      }
      else if (src == orxJOYSTICK_BUTTON_LEFT_2)
      {
        src_str = "left_2";
      }
      else if (src == orxJOYSTICK_BUTTON_1_2)
      {
        src_str = "1_2";
      }
      else if (src == orxJOYSTICK_BUTTON_2_2)
      {
        src_str = "2_2";
      }
      else if (src == orxJOYSTICK_BUTTON_3_2)
      {
        src_str = "3_2";
      }
      else if (src == orxJOYSTICK_BUTTON_4_2)
      {
        src_str = "4_2";
      }
      else if (src == orxJOYSTICK_BUTTON_5_2)
      {
        src_str = "5_2";
      }
      else if (src == orxJOYSTICK_BUTTON_6_2)
      {
        src_str = "6_2";
      }
      else if (src == orxJOYSTICK_BUTTON_7_2)
      {
        src_str = "7_2";
      }
      else if (src == orxJOYSTICK_BUTTON_8_2)
      {
        src_str = "8_2";
      }
      else if (src == orxJOYSTICK_BUTTON_9_2)
      {
        src_str = "9_2";
      }
      else if (src == orxJOYSTICK_BUTTON_10_2)
      {
        src_str = "10_2";
      }
      else if (src == orxJOYSTICK_BUTTON_11_2)
      {
        src_str = "11_2";
      }
      else if (src == orxJOYSTICK_BUTTON_12_2)
      {
        src_str = "12_2";
      }
      else if (src == orxJOYSTICK_BUTTON_13_2)
      {
        src_str = "13_2";
      }
      else if (src == orxJOYSTICK_BUTTON_14_2)
      {
        src_str = "14_2";
      }
      else if (src == orxJOYSTICK_BUTTON_15_2)
      {
        src_str = "15_2";
      }
      else if (src == orxJOYSTICK_BUTTON_16_2)
      {
        src_str = "16_2";
      }
      else if (src == orxJOYSTICK_BUTTON_17_2)
      {
        src_str = "17_2";
      }
      else if (src == orxJOYSTICK_BUTTON_18_2)
      {
        src_str = "18_2";
      }
      else if (src == orxJOYSTICK_BUTTON_19_2)
      {
        src_str = "19_2";
      }
      else if (src == orxJOYSTICK_BUTTON_20_2)
      {
        src_str = "20_2";
      }
      else if (src == orxJOYSTICK_BUTTON_21_2)
      {
        src_str = "21_2";
      }
      else if (src == orxJOYSTICK_BUTTON_22_2)
      {
        src_str = "22_2";
      }
      else if (src == orxJOYSTICK_BUTTON_23_2)
      {
        src_str = "23_2";
      }
      else if (src == orxJOYSTICK_BUTTON_24_2)
      {
        src_str = "24_2";
      }
      else if (src == orxJOYSTICK_BUTTON_25_2)
      {
        src_str = "25_2";
      }
      else if (src == orxJOYSTICK_BUTTON_A_3)
      {
        src_str = "a_3";
      }
      else if (src == orxJOYSTICK_BUTTON_B_3)
      {
        src_str = "b_3";
      }
      else if (src == orxJOYSTICK_BUTTON_X_3)
      {
        src_str = "x_3";
      }
      else if (src == orxJOYSTICK_BUTTON_Y_3)
      {
        src_str = "y_3";
      }
      else if (src == orxJOYSTICK_BUTTON_LBUMPER_3)
      {
        src_str = "lbumper_3";
      }
      else if (src == orxJOYSTICK_BUTTON_RBUMPER_3)
      {
        src_str = "rbumper_3";
      }
      else if (src == orxJOYSTICK_BUTTON_BACK_3)
      {
        src_str = "back_3";
      }
      else if (src == orxJOYSTICK_BUTTON_START_3)
      {
        src_str = "start_3";
      }
      else if (src == orxJOYSTICK_BUTTON_GUIDE_3)
      {
        src_str = "guide_3";
      }
      else if (src == orxJOYSTICK_BUTTON_LTHUMB_3)
      {
        src_str = "lthumb_3";
      }
      else if (src == orxJOYSTICK_BUTTON_RTHUMB_3)
      {
        src_str = "rthumb_3";
      }
      else if (src == orxJOYSTICK_BUTTON_UP_3)
      {
        src_str = "up_3";
      }
      else if (src == orxJOYSTICK_BUTTON_RIGHT_3)
      {
        src_str = "right_3";
      }
      else if (src == orxJOYSTICK_BUTTON_DOWN_3)
      {
        src_str = "down_3";
      }
      else if (src == orxJOYSTICK_BUTTON_LEFT_3)
      {
        src_str = "left_3";
      }
      else if (src == orxJOYSTICK_BUTTON_1_3)
      {
        src_str = "1_3";
      }
      else if (src == orxJOYSTICK_BUTTON_2_3)
      {
        src_str = "2_3";
      }
      else if (src == orxJOYSTICK_BUTTON_3_3)
      {
        src_str = "3_3";
      }
      else if (src == orxJOYSTICK_BUTTON_4_3)
      {
        src_str = "4_3";
      }
      else if (src == orxJOYSTICK_BUTTON_5_3)
      {
        src_str = "5_3";
      }
      else if (src == orxJOYSTICK_BUTTON_6_3)
      {
        src_str = "6_3";
      }
      else if (src == orxJOYSTICK_BUTTON_7_3)
      {
        src_str = "7_3";
      }
      else if (src == orxJOYSTICK_BUTTON_8_3)
      {
        src_str = "8_3";
      }
      else if (src == orxJOYSTICK_BUTTON_9_3)
      {
        src_str = "9_3";
      }
      else if (src == orxJOYSTICK_BUTTON_10_3)
      {
        src_str = "10_3";
      }
      else if (src == orxJOYSTICK_BUTTON_11_3)
      {
        src_str = "11_3";
      }
      else if (src == orxJOYSTICK_BUTTON_12_3)
      {
        src_str = "12_3";
      }
      else if (src == orxJOYSTICK_BUTTON_13_3)
      {
        src_str = "13_3";
      }
      else if (src == orxJOYSTICK_BUTTON_14_3)
      {
        src_str = "14_3";
      }
      else if (src == orxJOYSTICK_BUTTON_15_3)
      {
        src_str = "15_3";
      }
      else if (src == orxJOYSTICK_BUTTON_16_3)
      {
        src_str = "16_3";
      }
      else if (src == orxJOYSTICK_BUTTON_17_3)
      {
        src_str = "17_3";
      }
      else if (src == orxJOYSTICK_BUTTON_18_3)
      {
        src_str = "18_3";
      }
      else if (src == orxJOYSTICK_BUTTON_19_3)
      {
        src_str = "19_3";
      }
      else if (src == orxJOYSTICK_BUTTON_20_3)
      {
        src_str = "20_3";
      }
      else if (src == orxJOYSTICK_BUTTON_21_3)
      {
        src_str = "21_3";
      }
      else if (src == orxJOYSTICK_BUTTON_22_3)
      {
        src_str = "22_3";
      }
      else if (src == orxJOYSTICK_BUTTON_23_3)
      {
        src_str = "23_3";
      }
      else if (src == orxJOYSTICK_BUTTON_24_3)
      {
        src_str = "24_3";
      }
      else if (src == orxJOYSTICK_BUTTON_25_3)
      {
        src_str = "25_3";
      }
      else if (src == orxJOYSTICK_BUTTON_A_4)
      {
        src_str = "a_4";
      }
      else if (src == orxJOYSTICK_BUTTON_B_4)
      {
        src_str = "b_4";
      }
      else if (src == orxJOYSTICK_BUTTON_X_4)
      {
        src_str = "x_4";
      }
      else if (src == orxJOYSTICK_BUTTON_Y_4)
      {
        src_str = "y_4";
      }
      else if (src == orxJOYSTICK_BUTTON_LBUMPER_4)
      {
        src_str = "lbumper_4";
      }
      else if (src == orxJOYSTICK_BUTTON_RBUMPER_4)
      {
        src_str = "rbumper_4";
      }
      else
      {
        flag = 1;
      }
    }
    if (flag)
    {
      flag = 0;
      if (src == orxJOYSTICK_BUTTON_BACK_4)
      {
        src_str = "back_4";
      }
      else if (src == orxJOYSTICK_BUTTON_START_4)
      {
        src_str = "start_4";
      }
      else if (src == orxJOYSTICK_BUTTON_GUIDE_4)
      {
        src_str = "guide_4";
      }
      else if (src == orxJOYSTICK_BUTTON_LTHUMB_4)
      {
        src_str = "lthumb_4";
      }
      else if (src == orxJOYSTICK_BUTTON_RTHUMB_4)
      {
        src_str = "rthumb_4";
      }
      else if (src == orxJOYSTICK_BUTTON_UP_4)
      {
        src_str = "up_4";
      }
      else if (src == orxJOYSTICK_BUTTON_RIGHT_4)
      {
        src_str = "right_4";
      }
      else if (src == orxJOYSTICK_BUTTON_DOWN_4)
      {
        src_str = "down_4";
      }
      else if (src == orxJOYSTICK_BUTTON_LEFT_4)
      {
        src_str = "left_4";
      }
      else if (src == orxJOYSTICK_BUTTON_1_4)
      {
        src_str = "1_4";
      }
      else if (src == orxJOYSTICK_BUTTON_2_4)
      {
        src_str = "2_4";
      }
      else if (src == orxJOYSTICK_BUTTON_3_4)
      {
        src_str = "3_4";
      }
      else if (src == orxJOYSTICK_BUTTON_4_4)
      {
        src_str = "4_4";
      }
      else if (src == orxJOYSTICK_BUTTON_5_4)
      {
        src_str = "5_4";
      }
      else if (src == orxJOYSTICK_BUTTON_6_4)
      {
        src_str = "6_4";
      }
      else if (src == orxJOYSTICK_BUTTON_7_4)
      {
        src_str = "7_4";
      }
      else if (src == orxJOYSTICK_BUTTON_8_4)
      {
        src_str = "8_4";
      }
      else if (src == orxJOYSTICK_BUTTON_9_4)
      {
        src_str = "9_4";
      }
      else if (src == orxJOYSTICK_BUTTON_10_4)
      {
        src_str = "10_4";
      }
      else if (src == orxJOYSTICK_BUTTON_11_4)
      {
        src_str = "11_4";
      }
      else if (src == orxJOYSTICK_BUTTON_12_4)
      {
        src_str = "12_4";
      }
      else if (src == orxJOYSTICK_BUTTON_13_4)
      {
        src_str = "13_4";
      }
      else if (src == orxJOYSTICK_BUTTON_14_4)
      {
        src_str = "14_4";
      }
      else if (src == orxJOYSTICK_BUTTON_15_4)
      {
        src_str = "15_4";
      }
      else if (src == orxJOYSTICK_BUTTON_16_4)
      {
        src_str = "16_4";
      }
      else if (src == orxJOYSTICK_BUTTON_17_4)
      {
        src_str = "17_4";
      }
      else if (src == orxJOYSTICK_BUTTON_18_4)
      {
        src_str = "18_4";
      }
      else if (src == orxJOYSTICK_BUTTON_19_4)
      {
        src_str = "19_4";
      }
      else if (src == orxJOYSTICK_BUTTON_20_4)
      {
        src_str = "20_4";
      }
      else if (src == orxJOYSTICK_BUTTON_21_4)
      {
        src_str = "21_4";
      }
      else if (src == orxJOYSTICK_BUTTON_22_4)
      {
        src_str = "22_4";
      }
      else if (src == orxJOYSTICK_BUTTON_23_4)
      {
        src_str = "23_4";
      }
      else if (src == orxJOYSTICK_BUTTON_24_4)
      {
        src_str = "24_4";
      }
      else if (src == orxJOYSTICK_BUTTON_25_4)
      {
        src_str = "25_4";
      }
      else if (src == orxJOYSTICK_BUTTON_A_5)
      {
        src_str = "a_5";
      }
      else if (src == orxJOYSTICK_BUTTON_B_5)
      {
        src_str = "b_5";
      }
      else if (src == orxJOYSTICK_BUTTON_X_5)
      {
        src_str = "x_5";
      }
      else if (src == orxJOYSTICK_BUTTON_Y_5)
      {
        src_str = "y_5";
      }
      else if (src == orxJOYSTICK_BUTTON_LBUMPER_5)
      {
        src_str = "lbumper_5";
      }
      else if (src == orxJOYSTICK_BUTTON_RBUMPER_5)
      {
        src_str = "rbumper_5";
      }
      else if (src == orxJOYSTICK_BUTTON_BACK_5)
      {
        src_str = "back_5";
      }
      else if (src == orxJOYSTICK_BUTTON_START_5)
      {
        src_str = "start_5";
      }
      else if (src == orxJOYSTICK_BUTTON_GUIDE_5)
      {
        src_str = "guide_5";
      }
      else if (src == orxJOYSTICK_BUTTON_LTHUMB_5)
      {
        src_str = "lthumb_5";
      }
      else if (src == orxJOYSTICK_BUTTON_RTHUMB_5)
      {
        src_str = "rthumb_5";
      }
      else if (src == orxJOYSTICK_BUTTON_UP_5)
      {
        src_str = "up_5";
      }
      else if (src == orxJOYSTICK_BUTTON_RIGHT_5)
      {
        src_str = "right_5";
      }
      else if (src == orxJOYSTICK_BUTTON_DOWN_5)
      {
        src_str = "down_5";
      }
      else if (src == orxJOYSTICK_BUTTON_LEFT_5)
      {
        src_str = "left_5";
      }
      else if (src == orxJOYSTICK_BUTTON_1_5)
      {
        src_str = "1_5";
      }
      else if (src == orxJOYSTICK_BUTTON_2_5)
      {
        src_str = "2_5";
      }
      else if (src == orxJOYSTICK_BUTTON_3_5)
      {
        src_str = "3_5";
      }
      else if (src == orxJOYSTICK_BUTTON_4_5)
      {
        src_str = "4_5";
      }
      else if (src == orxJOYSTICK_BUTTON_5_5)
      {
        src_str = "5_5";
      }
      else if (src == orxJOYSTICK_BUTTON_6_5)
      {
        src_str = "6_5";
      }
      else if (src == orxJOYSTICK_BUTTON_7_5)
      {
        src_str = "7_5";
      }
      else if (src == orxJOYSTICK_BUTTON_8_5)
      {
        src_str = "8_5";
      }
      else if (src == orxJOYSTICK_BUTTON_9_5)
      {
        src_str = "9_5";
      }
      else if (src == orxJOYSTICK_BUTTON_10_5)
      {
        src_str = "10_5";
      }
      else if (src == orxJOYSTICK_BUTTON_11_5)
      {
        src_str = "11_5";
      }
      else if (src == orxJOYSTICK_BUTTON_12_5)
      {
        src_str = "12_5";
      }
      else if (src == orxJOYSTICK_BUTTON_13_5)
      {
        src_str = "13_5";
      }
      else if (src == orxJOYSTICK_BUTTON_14_5)
      {
        src_str = "14_5";
      }
      else if (src == orxJOYSTICK_BUTTON_15_5)
      {
        src_str = "15_5";
      }
      else if (src == orxJOYSTICK_BUTTON_16_5)
      {
        src_str = "16_5";
      }
      else if (src == orxJOYSTICK_BUTTON_17_5)
      {
        src_str = "17_5";
      }
      else if (src == orxJOYSTICK_BUTTON_18_5)
      {
        src_str = "18_5";
      }
      else if (src == orxJOYSTICK_BUTTON_19_5)
      {
        src_str = "19_5";
      }
      else if (src == orxJOYSTICK_BUTTON_20_5)
      {
        src_str = "20_5";
      }
      else if (src == orxJOYSTICK_BUTTON_21_5)
      {
        src_str = "21_5";
      }
      else if (src == orxJOYSTICK_BUTTON_22_5)
      {
        src_str = "22_5";
      }
      else if (src == orxJOYSTICK_BUTTON_23_5)
      {
        src_str = "23_5";
      }
      else if (src == orxJOYSTICK_BUTTON_24_5)
      {
        src_str = "24_5";
      }
      else if (src == orxJOYSTICK_BUTTON_25_5)
      {
        src_str = "25_5";
      }
      else if (src == orxJOYSTICK_BUTTON_A_6)
      {
        src_str = "a_6";
      }
      else if (src == orxJOYSTICK_BUTTON_B_6)
      {
        src_str = "b_6";
      }
      else if (src == orxJOYSTICK_BUTTON_X_6)
      {
        src_str = "x_6";
      }
      else if (src == orxJOYSTICK_BUTTON_Y_6)
      {
        src_str = "y_6";
      }
      else if (src == orxJOYSTICK_BUTTON_LBUMPER_6)
      {
        src_str = "lbumper_6";
      }
      else if (src == orxJOYSTICK_BUTTON_RBUMPER_6)
      {
        src_str = "rbumper_6";
      }
      else if (src == orxJOYSTICK_BUTTON_BACK_6)
      {
        src_str = "back_6";
      }
      else if (src == orxJOYSTICK_BUTTON_START_6)
      {
        src_str = "start_6";
      }
      else if (src == orxJOYSTICK_BUTTON_GUIDE_6)
      {
        src_str = "guide_6";
      }
      else if (src == orxJOYSTICK_BUTTON_LTHUMB_6)
      {
        src_str = "lthumb_6";
      }
      else if (src == orxJOYSTICK_BUTTON_RTHUMB_6)
      {
        src_str = "rthumb_6";
      }
      else if (src == orxJOYSTICK_BUTTON_UP_6)
      {
        src_str = "up_6";
      }
      else if (src == orxJOYSTICK_BUTTON_RIGHT_6)
      {
        src_str = "right_6";
      }
      else if (src == orxJOYSTICK_BUTTON_DOWN_6)
      {
        src_str = "down_6";
      }
      else if (src == orxJOYSTICK_BUTTON_LEFT_6)
      {
        src_str = "left_6";
      }
      else if (src == orxJOYSTICK_BUTTON_1_6)
      {
        src_str = "1_6";
      }
      else if (src == orxJOYSTICK_BUTTON_2_6)
      {
        src_str = "2_6";
      }
      else if (src == orxJOYSTICK_BUTTON_3_6)
      {
        src_str = "3_6";
      }
      else if (src == orxJOYSTICK_BUTTON_4_6)
      {
        src_str = "4_6";
      }
      else if (src == orxJOYSTICK_BUTTON_5_6)
      {
        src_str = "5_6";
      }
      else if (src == orxJOYSTICK_BUTTON_6_6)
      {
        src_str = "6_6";
      }
      else if (src == orxJOYSTICK_BUTTON_7_6)
      {
        src_str = "7_6";
      }
      else if (src == orxJOYSTICK_BUTTON_8_6)
      {
        src_str = "8_6";
      }
      else if (src == orxJOYSTICK_BUTTON_9_6)
      {
        src_str = "9_6";
      }
      else if (src == orxJOYSTICK_BUTTON_10_6)
      {
        src_str = "10_6";
      }
      else if (src == orxJOYSTICK_BUTTON_11_6)
      {
        src_str = "11_6";
      }
      else if (src == orxJOYSTICK_BUTTON_12_6)
      {
        src_str = "12_6";
      }
      else if (src == orxJOYSTICK_BUTTON_13_6)
      {
        src_str = "13_6";
      }
      else if (src == orxJOYSTICK_BUTTON_14_6)
      {
        src_str = "14_6";
      }
      else if (src == orxJOYSTICK_BUTTON_15_6)
      {
        src_str = "15_6";
      }
      else if (src == orxJOYSTICK_BUTTON_16_6)
      {
        src_str = "16_6";
      }
      else if (src == orxJOYSTICK_BUTTON_17_6)
      {
        src_str = "17_6";
      }
      else if (src == orxJOYSTICK_BUTTON_18_6)
      {
        src_str = "18_6";
      }
      else if (src == orxJOYSTICK_BUTTON_19_6)
      {
        src_str = "19_6";
      }
      else if (src == orxJOYSTICK_BUTTON_20_6)
      {
        src_str = "20_6";
      }
      else if (src == orxJOYSTICK_BUTTON_21_6)
      {
        src_str = "21_6";
      }
      else if (src == orxJOYSTICK_BUTTON_22_6)
      {
        src_str = "22_6";
      }
      else if (src == orxJOYSTICK_BUTTON_23_6)
      {
        src_str = "23_6";
      }
      else if (src == orxJOYSTICK_BUTTON_24_6)
      {
        src_str = "24_6";
      }
      else if (src == orxJOYSTICK_BUTTON_25_6)
      {
        src_str = "25_6";
      }
      else if (src == orxJOYSTICK_BUTTON_A_7)
      {
        src_str = "a_7";
      }
      else if (src == orxJOYSTICK_BUTTON_B_7)
      {
        src_str = "b_7";
      }
      else if (src == orxJOYSTICK_BUTTON_X_7)
      {
        src_str = "x_7";
      }
      else if (src == orxJOYSTICK_BUTTON_Y_7)
      {
        src_str = "y_7";
      }
      else if (src == orxJOYSTICK_BUTTON_LBUMPER_7)
      {
        src_str = "lbumper_7";
      }
      else if (src == orxJOYSTICK_BUTTON_RBUMPER_7)
      {
        src_str = "rbumper_7";
      }
      else if (src == orxJOYSTICK_BUTTON_BACK_7)
      {
        src_str = "back_7";
      }
      else if (src == orxJOYSTICK_BUTTON_START_7)
      {
        src_str = "start_7";
      }
      else if (src == orxJOYSTICK_BUTTON_GUIDE_7)
      {
        src_str = "guide_7";
      }
      else if (src == orxJOYSTICK_BUTTON_LTHUMB_7)
      {
        src_str = "lthumb_7";
      }
      else if (src == orxJOYSTICK_BUTTON_RTHUMB_7)
      {
        src_str = "rthumb_7";
      }
      else if (src == orxJOYSTICK_BUTTON_UP_7)
      {
        src_str = "up_7";
      }
      else
      {
        flag = 1;
      }
    }
    if (flag)
    {
      flag = 0;
      if (src == orxJOYSTICK_BUTTON_RIGHT_7)
      {
        src_str = "right_7";
      }
      else if (src == orxJOYSTICK_BUTTON_DOWN_7)
      {
        src_str = "down_7";
      }
      else if (src == orxJOYSTICK_BUTTON_LEFT_7)
      {
        src_str = "left_7";
      }
      else if (src == orxJOYSTICK_BUTTON_1_7)
      {
        src_str = "1_7";
      }
      else if (src == orxJOYSTICK_BUTTON_2_7)
      {
        src_str = "2_7";
      }
      else if (src == orxJOYSTICK_BUTTON_3_7)
      {
        src_str = "3_7";
      }
      else if (src == orxJOYSTICK_BUTTON_4_7)
      {
        src_str = "4_7";
      }
      else if (src == orxJOYSTICK_BUTTON_5_7)
      {
        src_str = "5_7";
      }
      else if (src == orxJOYSTICK_BUTTON_6_7)
      {
        src_str = "6_7";
      }
      else if (src == orxJOYSTICK_BUTTON_7_7)
      {
        src_str = "7_7";
      }
      else if (src == orxJOYSTICK_BUTTON_8_7)
      {
        src_str = "8_7";
      }
      else if (src == orxJOYSTICK_BUTTON_9_7)
      {
        src_str = "9_7";
      }
      else if (src == orxJOYSTICK_BUTTON_10_7)
      {
        src_str = "10_7";
      }
      else if (src == orxJOYSTICK_BUTTON_11_7)
      {
        src_str = "11_7";
      }
      else if (src == orxJOYSTICK_BUTTON_12_7)
      {
        src_str = "12_7";
      }
      else if (src == orxJOYSTICK_BUTTON_13_7)
      {
        src_str = "13_7";
      }
      else if (src == orxJOYSTICK_BUTTON_14_7)
      {
        src_str = "14_7";
      }
      else if (src == orxJOYSTICK_BUTTON_15_7)
      {
        src_str = "15_7";
      }
      else if (src == orxJOYSTICK_BUTTON_16_7)
      {
        src_str = "16_7";
      }
      else if (src == orxJOYSTICK_BUTTON_17_7)
      {
        src_str = "17_7";
      }
      else if (src == orxJOYSTICK_BUTTON_18_7)
      {
        src_str = "18_7";
      }
      else if (src == orxJOYSTICK_BUTTON_19_7)
      {
        src_str = "19_7";
      }
      else if (src == orxJOYSTICK_BUTTON_20_7)
      {
        src_str = "20_7";
      }
      else if (src == orxJOYSTICK_BUTTON_21_7)
      {
        src_str = "21_7";
      }
      else if (src == orxJOYSTICK_BUTTON_22_7)
      {
        src_str = "22_7";
      }
      else if (src == orxJOYSTICK_BUTTON_23_7)
      {
        src_str = "23_7";
      }
      else if (src == orxJOYSTICK_BUTTON_24_7)
      {
        src_str = "24_7";
      }
      else if (src == orxJOYSTICK_BUTTON_25_7)
      {
        src_str = "25_7";
      }
      else if (src == orxJOYSTICK_BUTTON_A_8)
      {
        src_str = "a_8";
      }
      else if (src == orxJOYSTICK_BUTTON_B_8)
      {
        src_str = "b_8";
      }
      else if (src == orxJOYSTICK_BUTTON_X_8)
      {
        src_str = "x_8";
      }
      else if (src == orxJOYSTICK_BUTTON_Y_8)
      {
        src_str = "y_8";
      }
      else if (src == orxJOYSTICK_BUTTON_LBUMPER_8)
      {
        src_str = "lbumper_8";
      }
      else if (src == orxJOYSTICK_BUTTON_RBUMPER_8)
      {
        src_str = "rbumper_8";
      }
      else if (src == orxJOYSTICK_BUTTON_BACK_8)
      {
        src_str = "back_8";
      }
      else if (src == orxJOYSTICK_BUTTON_START_8)
      {
        src_str = "start_8";
      }
      else if (src == orxJOYSTICK_BUTTON_GUIDE_8)
      {
        src_str = "guide_8";
      }
      else if (src == orxJOYSTICK_BUTTON_LTHUMB_8)
      {
        src_str = "lthumb_8";
      }
      else if (src == orxJOYSTICK_BUTTON_RTHUMB_8)
      {
        src_str = "rthumb_8";
      }
      else if (src == orxJOYSTICK_BUTTON_UP_8)
      {
        src_str = "up_8";
      }
      else if (src == orxJOYSTICK_BUTTON_RIGHT_8)
      {
        src_str = "right_8";
      }
      else if (src == orxJOYSTICK_BUTTON_DOWN_8)
      {
        src_str = "down_8";
      }
      else if (src == orxJOYSTICK_BUTTON_LEFT_8)
      {
        src_str = "left_8";
      }
      else if (src == orxJOYSTICK_BUTTON_1_8)
      {
        src_str = "1_8";
      }
      else if (src == orxJOYSTICK_BUTTON_2_8)
      {
        src_str = "2_8";
      }
      else if (src == orxJOYSTICK_BUTTON_3_8)
      {
        src_str = "3_8";
      }
      else if (src == orxJOYSTICK_BUTTON_4_8)
      {
        src_str = "4_8";
      }
      else if (src == orxJOYSTICK_BUTTON_5_8)
      {
        src_str = "5_8";
      }
      else if (src == orxJOYSTICK_BUTTON_6_8)
      {
        src_str = "6_8";
      }
      else if (src == orxJOYSTICK_BUTTON_7_8)
      {
        src_str = "7_8";
      }
      else if (src == orxJOYSTICK_BUTTON_8_8)
      {
        src_str = "8_8";
      }
      else if (src == orxJOYSTICK_BUTTON_9_8)
      {
        src_str = "9_8";
      }
      else if (src == orxJOYSTICK_BUTTON_10_8)
      {
        src_str = "10_8";
      }
      else if (src == orxJOYSTICK_BUTTON_11_8)
      {
        src_str = "11_8";
      }
      else if (src == orxJOYSTICK_BUTTON_12_8)
      {
        src_str = "12_8";
      }
      else if (src == orxJOYSTICK_BUTTON_13_8)
      {
        src_str = "13_8";
      }
      else if (src == orxJOYSTICK_BUTTON_14_8)
      {
        src_str = "14_8";
      }
      else if (src == orxJOYSTICK_BUTTON_15_8)
      {
        src_str = "15_8";
      }
      else if (src == orxJOYSTICK_BUTTON_16_8)
      {
        src_str = "16_8";
      }
      else if (src == orxJOYSTICK_BUTTON_17_8)
      {
        src_str = "17_8";
      }
      else if (src == orxJOYSTICK_BUTTON_18_8)
      {
        src_str = "18_8";
      }
      else if (src == orxJOYSTICK_BUTTON_19_8)
      {
        src_str = "19_8";
      }
      else if (src == orxJOYSTICK_BUTTON_20_8)
      {
        src_str = "20_8";
      }
      else if (src == orxJOYSTICK_BUTTON_21_8)
      {
        src_str = "21_8";
      }
      else if (src == orxJOYSTICK_BUTTON_22_8)
      {
        src_str = "22_8";
      }
      else if (src == orxJOYSTICK_BUTTON_23_8)
      {
        src_str = "23_8";
      }
      else if (src == orxJOYSTICK_BUTTON_24_8)
      {
        src_str = "24_8";
      }
      else if (src == orxJOYSTICK_BUTTON_25_8)
      {
        src_str = "25_8";
      }
      else if (src == orxJOYSTICK_BUTTON_A_9)
      {
        src_str = "a_9";
      }
      else if (src == orxJOYSTICK_BUTTON_B_9)
      {
        src_str = "b_9";
      }
      else if (src == orxJOYSTICK_BUTTON_X_9)
      {
        src_str = "x_9";
      }
      else if (src == orxJOYSTICK_BUTTON_Y_9)
      {
        src_str = "y_9";
      }
      else if (src == orxJOYSTICK_BUTTON_LBUMPER_9)
      {
        src_str = "lbumper_9";
      }
      else if (src == orxJOYSTICK_BUTTON_RBUMPER_9)
      {
        src_str = "rbumper_9";
      }
      else if (src == orxJOYSTICK_BUTTON_BACK_9)
      {
        src_str = "back_9";
      }
      else if (src == orxJOYSTICK_BUTTON_START_9)
      {
        src_str = "start_9";
      }
      else if (src == orxJOYSTICK_BUTTON_GUIDE_9)
      {
        src_str = "guide_9";
      }
      else if (src == orxJOYSTICK_BUTTON_LTHUMB_9)
      {
        src_str = "lthumb_9";
      }
      else if (src == orxJOYSTICK_BUTTON_RTHUMB_9)
      {
        src_str = "rthumb_9";
      }
      else if (src == orxJOYSTICK_BUTTON_UP_9)
      {
        src_str = "up_9";
      }
      else if (src == orxJOYSTICK_BUTTON_RIGHT_9)
      {
        src_str = "right_9";
      }
      else if (src == orxJOYSTICK_BUTTON_DOWN_9)
      {
        src_str = "down_9";
      }
      else if (src == orxJOYSTICK_BUTTON_LEFT_9)
      {
        src_str = "left_9";
      }
      else if (src == orxJOYSTICK_BUTTON_1_9)
      {
        src_str = "1_9";
      }
      else if (src == orxJOYSTICK_BUTTON_2_9)
      {
        src_str = "2_9";
      }
      else if (src == orxJOYSTICK_BUTTON_3_9)
      {
        src_str = "3_9";
      }
      else if (src == orxJOYSTICK_BUTTON_4_9)
      {
        src_str = "4_9";
      }
      else if (src == orxJOYSTICK_BUTTON_5_9)
      {
        src_str = "5_9";
      }
      else if (src == orxJOYSTICK_BUTTON_6_9)
      {
        src_str = "6_9";
      }
      else if (src == orxJOYSTICK_BUTTON_7_9)
      {
        src_str = "7_9";
      }
      else if (src == orxJOYSTICK_BUTTON_8_9)
      {
        src_str = "8_9";
      }
      else if (src == orxJOYSTICK_BUTTON_9_9)
      {
        src_str = "9_9";
      }
      else if (src == orxJOYSTICK_BUTTON_10_9)
      {
        src_str = "10_9";
      }
      else if (src == orxJOYSTICK_BUTTON_11_9)
      {
        src_str = "11_9";
      }
      else if (src == orxJOYSTICK_BUTTON_12_9)
      {
        src_str = "12_9";
      }
      else if (src == orxJOYSTICK_BUTTON_13_9)
      {
        src_str = "13_9";
      }
      else if (src == orxJOYSTICK_BUTTON_14_9)
      {
        src_str = "14_9";
      }
      else if (src == orxJOYSTICK_BUTTON_15_9)
      {
        src_str = "15_9";
      }
      else if (src == orxJOYSTICK_BUTTON_16_9)
      {
        src_str = "16_9";
      }
      else if (src == orxJOYSTICK_BUTTON_17_9)
      {
        src_str = "17_9";
      }
      else if (src == orxJOYSTICK_BUTTON_18_9)
      {
        src_str = "18_9";
      }
      else if (src == orxJOYSTICK_BUTTON_19_9)
      {
        src_str = "19_9";
      }
      else if (src == orxJOYSTICK_BUTTON_20_9)
      {
        src_str = "20_9";
      }
      else if (src == orxJOYSTICK_BUTTON_21_9)
      {
        src_str = "21_9";
      }
      else if (src == orxJOYSTICK_BUTTON_22_9)
      {
        src_str = "22_9";
      }
      else if (src == orxJOYSTICK_BUTTON_23_9)
      {
        src_str = "23_9";
      }
      else if (src == orxJOYSTICK_BUTTON_24_9)
      {
        src_str = "24_9";
      }
      else if (src == orxJOYSTICK_BUTTON_25_9)
      {
        src_str = "25_9";
      }
      else if (src == orxJOYSTICK_BUTTON_A_10)
      {
        src_str = "a_10";
      }
      else if (src == orxJOYSTICK_BUTTON_B_10)
      {
        src_str = "b_10";
      }
      else if (src == orxJOYSTICK_BUTTON_X_10)
      {
        src_str = "x_10";
      }
      else if (src == orxJOYSTICK_BUTTON_Y_10)
      {
        src_str = "y_10";
      }
      else if (src == orxJOYSTICK_BUTTON_LBUMPER_10)
      {
        src_str = "lbumper_10";
      }
      else if (src == orxJOYSTICK_BUTTON_RBUMPER_10)
      {
        src_str = "rbumper_10";
      }
      else if (src == orxJOYSTICK_BUTTON_BACK_10)
      {
        src_str = "back_10";
      }
      else if (src == orxJOYSTICK_BUTTON_START_10)
      {
        src_str = "start_10";
      }
      else if (src == orxJOYSTICK_BUTTON_GUIDE_10)
      {
        src_str = "guide_10";
      }
      else if (src == orxJOYSTICK_BUTTON_LTHUMB_10)
      {
        src_str = "lthumb_10";
      }
      else if (src == orxJOYSTICK_BUTTON_RTHUMB_10)
      {
        src_str = "rthumb_10";
      }
      else if (src == orxJOYSTICK_BUTTON_UP_10)
      {
        src_str = "up_10";
      }
      else if (src == orxJOYSTICK_BUTTON_RIGHT_10)
      {
        src_str = "right_10";
      }
      else if (src == orxJOYSTICK_BUTTON_DOWN_10)
      {
        src_str = "down_10";
      }
      else if (src == orxJOYSTICK_BUTTON_LEFT_10)
      {
        src_str = "left_10";
      }
      else if (src == orxJOYSTICK_BUTTON_1_10)
      {
        src_str = "1_10";
      }
      else if (src == orxJOYSTICK_BUTTON_2_10)
      {
        src_str = "2_10";
      }
      else if (src == orxJOYSTICK_BUTTON_3_10)
      {
        src_str = "3_10";
      }
      else
      {
        flag = 1;
      }
    }
    if (flag)
    {
      flag = 0;
      if (src == orxJOYSTICK_BUTTON_4_10)
      {
        src_str = "4_10";
      }
      else if (src == orxJOYSTICK_BUTTON_5_10)
      {
        src_str = "5_10";
      }
      else if (src == orxJOYSTICK_BUTTON_6_10)
      {
        src_str = "6_10";
      }
      else if (src == orxJOYSTICK_BUTTON_7_10)
      {
        src_str = "7_10";
      }
      else if (src == orxJOYSTICK_BUTTON_8_10)
      {
        src_str = "8_10";
      }
      else if (src == orxJOYSTICK_BUTTON_9_10)
      {
        src_str = "9_10";
      }
      else if (src == orxJOYSTICK_BUTTON_10_10)
      {
        src_str = "10_10";
      }
      else if (src == orxJOYSTICK_BUTTON_11_10)
      {
        src_str = "11_10";
      }
      else if (src == orxJOYSTICK_BUTTON_12_10)
      {
        src_str = "12_10";
      }
      else if (src == orxJOYSTICK_BUTTON_13_10)
      {
        src_str = "13_10";
      }
      else if (src == orxJOYSTICK_BUTTON_14_10)
      {
        src_str = "14_10";
      }
      else if (src == orxJOYSTICK_BUTTON_15_10)
      {
        src_str = "15_10";
      }
      else if (src == orxJOYSTICK_BUTTON_16_10)
      {
        src_str = "16_10";
      }
      else if (src == orxJOYSTICK_BUTTON_17_10)
      {
        src_str = "17_10";
      }
      else if (src == orxJOYSTICK_BUTTON_18_10)
      {
        src_str = "18_10";
      }
      else if (src == orxJOYSTICK_BUTTON_19_10)
      {
        src_str = "19_10";
      }
      else if (src == orxJOYSTICK_BUTTON_20_10)
      {
        src_str = "20_10";
      }
      else if (src == orxJOYSTICK_BUTTON_21_10)
      {
        src_str = "21_10";
      }
      else if (src == orxJOYSTICK_BUTTON_22_10)
      {
        src_str = "22_10";
      }
      else if (src == orxJOYSTICK_BUTTON_23_10)
      {
        src_str = "23_10";
      }
      else if (src == orxJOYSTICK_BUTTON_24_10)
      {
        src_str = "24_10";
      }
      else if (src == orxJOYSTICK_BUTTON_25_10)
      {
        src_str = "25_10";
      }
      else if (src == orxJOYSTICK_BUTTON_A_11)
      {
        src_str = "a_11";
      }
      else if (src == orxJOYSTICK_BUTTON_B_11)
      {
        src_str = "b_11";
      }
      else if (src == orxJOYSTICK_BUTTON_X_11)
      {
        src_str = "x_11";
      }
      else if (src == orxJOYSTICK_BUTTON_Y_11)
      {
        src_str = "y_11";
      }
      else if (src == orxJOYSTICK_BUTTON_LBUMPER_11)
      {
        src_str = "lbumper_11";
      }
      else if (src == orxJOYSTICK_BUTTON_RBUMPER_11)
      {
        src_str = "rbumper_11";
      }
      else if (src == orxJOYSTICK_BUTTON_BACK_11)
      {
        src_str = "back_11";
      }
      else if (src == orxJOYSTICK_BUTTON_START_11)
      {
        src_str = "start_11";
      }
      else if (src == orxJOYSTICK_BUTTON_GUIDE_11)
      {
        src_str = "guide_11";
      }
      else if (src == orxJOYSTICK_BUTTON_LTHUMB_11)
      {
        src_str = "lthumb_11";
      }
      else if (src == orxJOYSTICK_BUTTON_RTHUMB_11)
      {
        src_str = "rthumb_11";
      }
      else if (src == orxJOYSTICK_BUTTON_UP_11)
      {
        src_str = "up_11";
      }
      else if (src == orxJOYSTICK_BUTTON_RIGHT_11)
      {
        src_str = "right_11";
      }
      else if (src == orxJOYSTICK_BUTTON_DOWN_11)
      {
        src_str = "down_11";
      }
      else if (src == orxJOYSTICK_BUTTON_LEFT_11)
      {
        src_str = "left_11";
      }
      else if (src == orxJOYSTICK_BUTTON_1_11)
      {
        src_str = "1_11";
      }
      else if (src == orxJOYSTICK_BUTTON_2_11)
      {
        src_str = "2_11";
      }
      else if (src == orxJOYSTICK_BUTTON_3_11)
      {
        src_str = "3_11";
      }
      else if (src == orxJOYSTICK_BUTTON_4_11)
      {
        src_str = "4_11";
      }
      else if (src == orxJOYSTICK_BUTTON_5_11)
      {
        src_str = "5_11";
      }
      else if (src == orxJOYSTICK_BUTTON_6_11)
      {
        src_str = "6_11";
      }
      else if (src == orxJOYSTICK_BUTTON_7_11)
      {
        src_str = "7_11";
      }
      else if (src == orxJOYSTICK_BUTTON_8_11)
      {
        src_str = "8_11";
      }
      else if (src == orxJOYSTICK_BUTTON_9_11)
      {
        src_str = "9_11";
      }
      else if (src == orxJOYSTICK_BUTTON_10_11)
      {
        src_str = "10_11";
      }
      else if (src == orxJOYSTICK_BUTTON_11_11)
      {
        src_str = "11_11";
      }
      else if (src == orxJOYSTICK_BUTTON_12_11)
      {
        src_str = "12_11";
      }
      else if (src == orxJOYSTICK_BUTTON_13_11)
      {
        src_str = "13_11";
      }
      else if (src == orxJOYSTICK_BUTTON_14_11)
      {
        src_str = "14_11";
      }
      else if (src == orxJOYSTICK_BUTTON_15_11)
      {
        src_str = "15_11";
      }
      else if (src == orxJOYSTICK_BUTTON_16_11)
      {
        src_str = "16_11";
      }
      else if (src == orxJOYSTICK_BUTTON_17_11)
      {
        src_str = "17_11";
      }
      else if (src == orxJOYSTICK_BUTTON_18_11)
      {
        src_str = "18_11";
      }
      else if (src == orxJOYSTICK_BUTTON_19_11)
      {
        src_str = "19_11";
      }
      else if (src == orxJOYSTICK_BUTTON_20_11)
      {
        src_str = "20_11";
      }
      else if (src == orxJOYSTICK_BUTTON_21_11)
      {
        src_str = "21_11";
      }
      else if (src == orxJOYSTICK_BUTTON_22_11)
      {
        src_str = "22_11";
      }
      else if (src == orxJOYSTICK_BUTTON_23_11)
      {
        src_str = "23_11";
      }
      else if (src == orxJOYSTICK_BUTTON_24_11)
      {
        src_str = "24_11";
      }
      else if (src == orxJOYSTICK_BUTTON_25_11)
      {
        src_str = "25_11";
      }
      else if (src == orxJOYSTICK_BUTTON_A_12)
      {
        src_str = "a_12";
      }
      else if (src == orxJOYSTICK_BUTTON_B_12)
      {
        src_str = "b_12";
      }
      else if (src == orxJOYSTICK_BUTTON_X_12)
      {
        src_str = "x_12";
      }
      else if (src == orxJOYSTICK_BUTTON_Y_12)
      {
        src_str = "y_12";
      }
      else if (src == orxJOYSTICK_BUTTON_LBUMPER_12)
      {
        src_str = "lbumper_12";
      }
      else if (src == orxJOYSTICK_BUTTON_RBUMPER_12)
      {
        src_str = "rbumper_12";
      }
      else if (src == orxJOYSTICK_BUTTON_BACK_12)
      {
        src_str = "back_12";
      }
      else if (src == orxJOYSTICK_BUTTON_START_12)
      {
        src_str = "start_12";
      }
      else if (src == orxJOYSTICK_BUTTON_GUIDE_12)
      {
        src_str = "guide_12";
      }
      else if (src == orxJOYSTICK_BUTTON_LTHUMB_12)
      {
        src_str = "lthumb_12";
      }
      else if (src == orxJOYSTICK_BUTTON_RTHUMB_12)
      {
        src_str = "rthumb_12";
      }
      else if (src == orxJOYSTICK_BUTTON_UP_12)
      {
        src_str = "up_12";
      }
      else if (src == orxJOYSTICK_BUTTON_RIGHT_12)
      {
        src_str = "right_12";
      }
      else if (src == orxJOYSTICK_BUTTON_DOWN_12)
      {
        src_str = "down_12";
      }
      else if (src == orxJOYSTICK_BUTTON_LEFT_12)
      {
        src_str = "left_12";
      }
      else if (src == orxJOYSTICK_BUTTON_1_12)
      {
        src_str = "1_12";
      }
      else if (src == orxJOYSTICK_BUTTON_2_12)
      {
        src_str = "2_12";
      }
      else if (src == orxJOYSTICK_BUTTON_3_12)
      {
        src_str = "3_12";
      }
      else if (src == orxJOYSTICK_BUTTON_4_12)
      {
        src_str = "4_12";
      }
      else if (src == orxJOYSTICK_BUTTON_5_12)
      {
        src_str = "5_12";
      }
      else if (src == orxJOYSTICK_BUTTON_6_12)
      {
        src_str = "6_12";
      }
      else if (src == orxJOYSTICK_BUTTON_7_12)
      {
        src_str = "7_12";
      }
      else if (src == orxJOYSTICK_BUTTON_8_12)
      {
        src_str = "8_12";
      }
      else if (src == orxJOYSTICK_BUTTON_9_12)
      {
        src_str = "9_12";
      }
      else if (src == orxJOYSTICK_BUTTON_10_12)
      {
        src_str = "10_12";
      }
      else if (src == orxJOYSTICK_BUTTON_11_12)
      {
        src_str = "11_12";
      }
      else if (src == orxJOYSTICK_BUTTON_12_12)
      {
        src_str = "12_12";
      }
      else if (src == orxJOYSTICK_BUTTON_13_12)
      {
        src_str = "13_12";
      }
      else if (src == orxJOYSTICK_BUTTON_14_12)
      {
        src_str = "14_12";
      }
      else if (src == orxJOYSTICK_BUTTON_15_12)
      {
        src_str = "15_12";
      }
      else if (src == orxJOYSTICK_BUTTON_16_12)
      {
        src_str = "16_12";
      }
      else if (src == orxJOYSTICK_BUTTON_17_12)
      {
        src_str = "17_12";
      }
      else if (src == orxJOYSTICK_BUTTON_18_12)
      {
        src_str = "18_12";
      }
      else if (src == orxJOYSTICK_BUTTON_19_12)
      {
        src_str = "19_12";
      }
      else if (src == orxJOYSTICK_BUTTON_20_12)
      {
        src_str = "20_12";
      }
      else if (src == orxJOYSTICK_BUTTON_21_12)
      {
        src_str = "21_12";
      }
      else if (src == orxJOYSTICK_BUTTON_22_12)
      {
        src_str = "22_12";
      }
      else if (src == orxJOYSTICK_BUTTON_23_12)
      {
        src_str = "23_12";
      }
      else if (src == orxJOYSTICK_BUTTON_24_12)
      {
        src_str = "24_12";
      }
      else if (src == orxJOYSTICK_BUTTON_25_12)
      {
        src_str = "25_12";
      }
      else if (src == orxJOYSTICK_BUTTON_A_13)
      {
        src_str = "a_13";
      }
      else if (src == orxJOYSTICK_BUTTON_B_13)
      {
        src_str = "b_13";
      }
      else if (src == orxJOYSTICK_BUTTON_X_13)
      {
        src_str = "x_13";
      }
      else if (src == orxJOYSTICK_BUTTON_Y_13)
      {
        src_str = "y_13";
      }
      else if (src == orxJOYSTICK_BUTTON_LBUMPER_13)
      {
        src_str = "lbumper_13";
      }
      else if (src == orxJOYSTICK_BUTTON_RBUMPER_13)
      {
        src_str = "rbumper_13";
      }
      else if (src == orxJOYSTICK_BUTTON_BACK_13)
      {
        src_str = "back_13";
      }
      else if (src == orxJOYSTICK_BUTTON_START_13)
      {
        src_str = "start_13";
      }
      else if (src == orxJOYSTICK_BUTTON_GUIDE_13)
      {
        src_str = "guide_13";
      }
      else if (src == orxJOYSTICK_BUTTON_LTHUMB_13)
      {
        src_str = "lthumb_13";
      }
      else if (src == orxJOYSTICK_BUTTON_RTHUMB_13)
      {
        src_str = "rthumb_13";
      }
      else if (src == orxJOYSTICK_BUTTON_UP_13)
      {
        src_str = "up_13";
      }
      else if (src == orxJOYSTICK_BUTTON_RIGHT_13)
      {
        src_str = "right_13";
      }
      else if (src == orxJOYSTICK_BUTTON_DOWN_13)
      {
        src_str = "down_13";
      }
      else if (src == orxJOYSTICK_BUTTON_LEFT_13)
      {
        src_str = "left_13";
      }
      else if (src == orxJOYSTICK_BUTTON_1_13)
      {
        src_str = "1_13";
      }
      else if (src == orxJOYSTICK_BUTTON_2_13)
      {
        src_str = "2_13";
      }
      else if (src == orxJOYSTICK_BUTTON_3_13)
      {
        src_str = "3_13";
      }
      else if (src == orxJOYSTICK_BUTTON_4_13)
      {
        src_str = "4_13";
      }
      else if (src == orxJOYSTICK_BUTTON_5_13)
      {
        src_str = "5_13";
      }
      else if (src == orxJOYSTICK_BUTTON_6_13)
      {
        src_str = "6_13";
      }
      else if (src == orxJOYSTICK_BUTTON_7_13)
      {
        src_str = "7_13";
      }
      else if (src == orxJOYSTICK_BUTTON_8_13)
      {
        src_str = "8_13";
      }
      else if (src == orxJOYSTICK_BUTTON_9_13)
      {
        src_str = "9_13";
      }
      else
      {
        flag = 1;
      }
    }
    if (flag)
    {
      flag = 0;
      if (src == orxJOYSTICK_BUTTON_10_13)
      {
        src_str = "10_13";
      }
      else if (src == orxJOYSTICK_BUTTON_11_13)
      {
        src_str = "11_13";
      }
      else if (src == orxJOYSTICK_BUTTON_12_13)
      {
        src_str = "12_13";
      }
      else if (src == orxJOYSTICK_BUTTON_13_13)
      {
        src_str = "13_13";
      }
      else if (src == orxJOYSTICK_BUTTON_14_13)
      {
        src_str = "14_13";
      }
      else if (src == orxJOYSTICK_BUTTON_15_13)
      {
        src_str = "15_13";
      }
      else if (src == orxJOYSTICK_BUTTON_16_13)
      {
        src_str = "16_13";
      }
      else if (src == orxJOYSTICK_BUTTON_17_13)
      {
        src_str = "17_13";
      }
      else if (src == orxJOYSTICK_BUTTON_18_13)
      {
        src_str = "18_13";
      }
      else if (src == orxJOYSTICK_BUTTON_19_13)
      {
        src_str = "19_13";
      }
      else if (src == orxJOYSTICK_BUTTON_20_13)
      {
        src_str = "20_13";
      }
      else if (src == orxJOYSTICK_BUTTON_21_13)
      {
        src_str = "21_13";
      }
      else if (src == orxJOYSTICK_BUTTON_22_13)
      {
        src_str = "22_13";
      }
      else if (src == orxJOYSTICK_BUTTON_23_13)
      {
        src_str = "23_13";
      }
      else if (src == orxJOYSTICK_BUTTON_24_13)
      {
        src_str = "24_13";
      }
      else if (src == orxJOYSTICK_BUTTON_25_13)
      {
        src_str = "25_13";
      }
      else if (src == orxJOYSTICK_BUTTON_A_14)
      {
        src_str = "a_14";
      }
      else if (src == orxJOYSTICK_BUTTON_B_14)
      {
        src_str = "b_14";
      }
      else if (src == orxJOYSTICK_BUTTON_X_14)
      {
        src_str = "x_14";
      }
      else if (src == orxJOYSTICK_BUTTON_Y_14)
      {
        src_str = "y_14";
      }
      else if (src == orxJOYSTICK_BUTTON_LBUMPER_14)
      {
        src_str = "lbumper_14";
      }
      else if (src == orxJOYSTICK_BUTTON_RBUMPER_14)
      {
        src_str = "rbumper_14";
      }
      else if (src == orxJOYSTICK_BUTTON_BACK_14)
      {
        src_str = "back_14";
      }
      else if (src == orxJOYSTICK_BUTTON_START_14)
      {
        src_str = "start_14";
      }
      else if (src == orxJOYSTICK_BUTTON_GUIDE_14)
      {
        src_str = "guide_14";
      }
      else if (src == orxJOYSTICK_BUTTON_LTHUMB_14)
      {
        src_str = "lthumb_14";
      }
      else if (src == orxJOYSTICK_BUTTON_RTHUMB_14)
      {
        src_str = "rthumb_14";
      }
      else if (src == orxJOYSTICK_BUTTON_UP_14)
      {
        src_str = "up_14";
      }
      else if (src == orxJOYSTICK_BUTTON_RIGHT_14)
      {
        src_str = "right_14";
      }
      else if (src == orxJOYSTICK_BUTTON_DOWN_14)
      {
        src_str = "down_14";
      }
      else if (src == orxJOYSTICK_BUTTON_LEFT_14)
      {
        src_str = "left_14";
      }
      else if (src == orxJOYSTICK_BUTTON_1_14)
      {
        src_str = "1_14";
      }
      else if (src == orxJOYSTICK_BUTTON_2_14)
      {
        src_str = "2_14";
      }
      else if (src == orxJOYSTICK_BUTTON_3_14)
      {
        src_str = "3_14";
      }
      else if (src == orxJOYSTICK_BUTTON_4_14)
      {
        src_str = "4_14";
      }
      else if (src == orxJOYSTICK_BUTTON_5_14)
      {
        src_str = "5_14";
      }
      else if (src == orxJOYSTICK_BUTTON_6_14)
      {
        src_str = "6_14";
      }
      else if (src == orxJOYSTICK_BUTTON_7_14)
      {
        src_str = "7_14";
      }
      else if (src == orxJOYSTICK_BUTTON_8_14)
      {
        src_str = "8_14";
      }
      else if (src == orxJOYSTICK_BUTTON_9_14)
      {
        src_str = "9_14";
      }
      else if (src == orxJOYSTICK_BUTTON_10_14)
      {
        src_str = "10_14";
      }
      else if (src == orxJOYSTICK_BUTTON_11_14)
      {
        src_str = "11_14";
      }
      else if (src == orxJOYSTICK_BUTTON_12_14)
      {
        src_str = "12_14";
      }
      else if (src == orxJOYSTICK_BUTTON_13_14)
      {
        src_str = "13_14";
      }
      else if (src == orxJOYSTICK_BUTTON_14_14)
      {
        src_str = "14_14";
      }
      else if (src == orxJOYSTICK_BUTTON_15_14)
      {
        src_str = "15_14";
      }
      else if (src == orxJOYSTICK_BUTTON_16_14)
      {
        src_str = "16_14";
      }
      else if (src == orxJOYSTICK_BUTTON_17_14)
      {
        src_str = "17_14";
      }
      else if (src == orxJOYSTICK_BUTTON_18_14)
      {
        src_str = "18_14";
      }
      else if (src == orxJOYSTICK_BUTTON_19_14)
      {
        src_str = "19_14";
      }
      else if (src == orxJOYSTICK_BUTTON_20_14)
      {
        src_str = "20_14";
      }
      else if (src == orxJOYSTICK_BUTTON_21_14)
      {
        src_str = "21_14";
      }
      else if (src == orxJOYSTICK_BUTTON_22_14)
      {
        src_str = "22_14";
      }
      else if (src == orxJOYSTICK_BUTTON_23_14)
      {
        src_str = "23_14";
      }
      else if (src == orxJOYSTICK_BUTTON_24_14)
      {
        src_str = "24_14";
      }
      else if (src == orxJOYSTICK_BUTTON_25_14)
      {
        src_str = "25_14";
      }
      else if (src == orxJOYSTICK_BUTTON_A_15)
      {
        src_str = "a_15";
      }
      else if (src == orxJOYSTICK_BUTTON_B_15)
      {
        src_str = "b_15";
      }
      else if (src == orxJOYSTICK_BUTTON_X_15)
      {
        src_str = "x_15";
      }
      else if (src == orxJOYSTICK_BUTTON_Y_15)
      {
        src_str = "y_15";
      }
      else if (src == orxJOYSTICK_BUTTON_LBUMPER_15)
      {
        src_str = "lbumper_15";
      }
      else if (src == orxJOYSTICK_BUTTON_RBUMPER_15)
      {
        src_str = "rbumper_15";
      }
      else if (src == orxJOYSTICK_BUTTON_BACK_15)
      {
        src_str = "back_15";
      }
      else if (src == orxJOYSTICK_BUTTON_START_15)
      {
        src_str = "start_15";
      }
      else if (src == orxJOYSTICK_BUTTON_GUIDE_15)
      {
        src_str = "guide_15";
      }
      else if (src == orxJOYSTICK_BUTTON_LTHUMB_15)
      {
        src_str = "lthumb_15";
      }
      else if (src == orxJOYSTICK_BUTTON_RTHUMB_15)
      {
        src_str = "rthumb_15";
      }
      else if (src == orxJOYSTICK_BUTTON_UP_15)
      {
        src_str = "up_15";
      }
      else if (src == orxJOYSTICK_BUTTON_RIGHT_15)
      {
        src_str = "right_15";
      }
      else if (src == orxJOYSTICK_BUTTON_DOWN_15)
      {
        src_str = "down_15";
      }
      else if (src == orxJOYSTICK_BUTTON_LEFT_15)
      {
        src_str = "left_15";
      }
      else if (src == orxJOYSTICK_BUTTON_1_15)
      {
        src_str = "1_15";
      }
      else if (src == orxJOYSTICK_BUTTON_2_15)
      {
        src_str = "2_15";
      }
      else if (src == orxJOYSTICK_BUTTON_3_15)
      {
        src_str = "3_15";
      }
      else if (src == orxJOYSTICK_BUTTON_4_15)
      {
        src_str = "4_15";
      }
      else if (src == orxJOYSTICK_BUTTON_5_15)
      {
        src_str = "5_15";
      }
      else if (src == orxJOYSTICK_BUTTON_6_15)
      {
        src_str = "6_15";
      }
      else if (src == orxJOYSTICK_BUTTON_7_15)
      {
        src_str = "7_15";
      }
      else if (src == orxJOYSTICK_BUTTON_8_15)
      {
        src_str = "8_15";
      }
      else if (src == orxJOYSTICK_BUTTON_9_15)
      {
        src_str = "9_15";
      }
      else if (src == orxJOYSTICK_BUTTON_10_15)
      {
        src_str = "10_15";
      }
      else if (src == orxJOYSTICK_BUTTON_11_15)
      {
        src_str = "11_15";
      }
      else if (src == orxJOYSTICK_BUTTON_12_15)
      {
        src_str = "12_15";
      }
      else if (src == orxJOYSTICK_BUTTON_13_15)
      {
        src_str = "13_15";
      }
      else if (src == orxJOYSTICK_BUTTON_14_15)
      {
        src_str = "14_15";
      }
      else if (src == orxJOYSTICK_BUTTON_15_15)
      {
        src_str = "15_15";
      }
      else if (src == orxJOYSTICK_BUTTON_16_15)
      {
        src_str = "16_15";
      }
      else if (src == orxJOYSTICK_BUTTON_17_15)
      {
        src_str = "17_15";
      }
      else if (src == orxJOYSTICK_BUTTON_18_15)
      {
        src_str = "18_15";
      }
      else if (src == orxJOYSTICK_BUTTON_19_15)
      {
        src_str = "19_15";
      }
      else if (src == orxJOYSTICK_BUTTON_20_15)
      {
        src_str = "20_15";
      }
      else if (src == orxJOYSTICK_BUTTON_21_15)
      {
        src_str = "21_15";
      }
      else if (src == orxJOYSTICK_BUTTON_22_15)
      {
        src_str = "22_15";
      }
      else if (src == orxJOYSTICK_BUTTON_23_15)
      {
        src_str = "23_15";
      }
      else if (src == orxJOYSTICK_BUTTON_24_15)
      {
        src_str = "24_15";
      }
      else if (src == orxJOYSTICK_BUTTON_25_15)
      {
        src_str = "25_15";
      }
      else if (src == orxJOYSTICK_BUTTON_A_16)
      {
        src_str = "a_16";
      }
      else if (src == orxJOYSTICK_BUTTON_B_16)
      {
        src_str = "b_16";
      }
      else if (src == orxJOYSTICK_BUTTON_X_16)
      {
        src_str = "x_16";
      }
      else if (src == orxJOYSTICK_BUTTON_Y_16)
      {
        src_str = "y_16";
      }
      else if (src == orxJOYSTICK_BUTTON_LBUMPER_16)
      {
        src_str = "lbumper_16";
      }
      else if (src == orxJOYSTICK_BUTTON_RBUMPER_16)
      {
        src_str = "rbumper_16";
      }
      else if (src == orxJOYSTICK_BUTTON_BACK_16)
      {
        src_str = "back_16";
      }
      else if (src == orxJOYSTICK_BUTTON_START_16)
      {
        src_str = "start_16";
      }
      else if (src == orxJOYSTICK_BUTTON_GUIDE_16)
      {
        src_str = "guide_16";
      }
      else if (src == orxJOYSTICK_BUTTON_LTHUMB_16)
      {
        src_str = "lthumb_16";
      }
      else if (src == orxJOYSTICK_BUTTON_RTHUMB_16)
      {
        src_str = "rthumb_16";
      }
      else if (src == orxJOYSTICK_BUTTON_UP_16)
      {
        src_str = "up_16";
      }
      else if (src == orxJOYSTICK_BUTTON_RIGHT_16)
      {
        src_str = "right_16";
      }
      else if (src == orxJOYSTICK_BUTTON_DOWN_16)
      {
        src_str = "down_16";
      }
      else if (src == orxJOYSTICK_BUTTON_LEFT_16)
      {
        src_str = "left_16";
      }
      else if (src == orxJOYSTICK_BUTTON_1_16)
      {
        src_str = "1_16";
      }
      else if (src == orxJOYSTICK_BUTTON_2_16)
      {
        src_str = "2_16";
      }
      else if (src == orxJOYSTICK_BUTTON_3_16)
      {
        src_str = "3_16";
      }
      else if (src == orxJOYSTICK_BUTTON_4_16)
      {
        src_str = "4_16";
      }
      else if (src == orxJOYSTICK_BUTTON_5_16)
      {
        src_str = "5_16";
      }
      else if (src == orxJOYSTICK_BUTTON_6_16)
      {
        src_str = "6_16";
      }
      else if (src == orxJOYSTICK_BUTTON_7_16)
      {
        src_str = "7_16";
      }
      else if (src == orxJOYSTICK_BUTTON_8_16)
      {
        src_str = "8_16";
      }
      else if (src == orxJOYSTICK_BUTTON_9_16)
      {
        src_str = "9_16";
      }
      else if (src == orxJOYSTICK_BUTTON_10_16)
      {
        src_str = "10_16";
      }
      else if (src == orxJOYSTICK_BUTTON_11_16)
      {
        src_str = "11_16";
      }
      else if (src == orxJOYSTICK_BUTTON_12_16)
      {
        src_str = "12_16";
      }
      else if (src == orxJOYSTICK_BUTTON_13_16)
      {
        src_str = "13_16";
      }
      else if (src == orxJOYSTICK_BUTTON_14_16)
      {
        src_str = "14_16";
      }
      else if (src == orxJOYSTICK_BUTTON_15_16)
      {
        src_str = "15_16";
      }
      else
      {
        flag = 1;
      }
    }
    if (flag)
    {
      flag = 0;
      if (src == orxJOYSTICK_BUTTON_16_16)
      {
        src_str = "16_16";
      }
      else if (src == orxJOYSTICK_BUTTON_17_16)
      {
        src_str = "17_16";
      }
      else if (src == orxJOYSTICK_BUTTON_18_16)
      {
        src_str = "18_16";
      }
      else if (src == orxJOYSTICK_BUTTON_19_16)
      {
        src_str = "19_16";
      }
      else if (src == orxJOYSTICK_BUTTON_20_16)
      {
        src_str = "20_16";
      }
      else if (src == orxJOYSTICK_BUTTON_21_16)
      {
        src_str = "21_16";
      }
      else if (src == orxJOYSTICK_BUTTON_22_16)
      {
        src_str = "22_16";
      }
      else if (src == orxJOYSTICK_BUTTON_23_16)
      {
        src_str = "23_16";
      }
      else if (src == orxJOYSTICK_BUTTON_24_16)
      {
        src_str = "24_16";
      }
      else if (src == orxJOYSTICK_BUTTON_25_16)
      {
        src_str = "25_16";
      }
      else if (src == orxJOYSTICK_BUTTON_NONE)
      {
        src_str = "none";
      }
      else
      {
        LORX_ERROR("unexpected enum type: %u!\n", src);
      }
    }
  }
  lua_pushstring(L, src_str);
  
  return 1;
}

LORX_API int lorx_orxKEYBOARD_KEY_to_lenumstr(lua_State *L, orxKEYBOARD_KEY src)
{
  const char* src_str = NULL;
  if (src == orxKEYBOARD_KEY_0)
  {
    src_str = "0";
  }
  else if (src == orxKEYBOARD_KEY_1)
  {
    src_str = "1";
  }
  else if (src == orxKEYBOARD_KEY_2)
  {
    src_str = "2";
  }
  else if (src == orxKEYBOARD_KEY_3)
  {
    src_str = "3";
  }
  else if (src == orxKEYBOARD_KEY_4)
  {
    src_str = "4";
  }
  else if (src == orxKEYBOARD_KEY_5)
  {
    src_str = "5";
  }
  else if (src == orxKEYBOARD_KEY_6)
  {
    src_str = "6";
  }
  else if (src == orxKEYBOARD_KEY_7)
  {
    src_str = "7";
  }
  else if (src == orxKEYBOARD_KEY_8)
  {
    src_str = "8";
  }
  else if (src == orxKEYBOARD_KEY_9)
  {
    src_str = "9";
  }
  else if (src == orxKEYBOARD_KEY_A)
  {
    src_str = "a";
  }
  else if (src == orxKEYBOARD_KEY_B)
  {
    src_str = "b";
  }
  else if (src == orxKEYBOARD_KEY_C)
  {
    src_str = "c";
  }
  else if (src == orxKEYBOARD_KEY_D)
  {
    src_str = "d";
  }
  else if (src == orxKEYBOARD_KEY_E)
  {
    src_str = "e";
  }
  else if (src == orxKEYBOARD_KEY_F)
  {
    src_str = "f";
  }
  else if (src == orxKEYBOARD_KEY_G)
  {
    src_str = "g";
  }
  else if (src == orxKEYBOARD_KEY_H)
  {
    src_str = "h";
  }
  else if (src == orxKEYBOARD_KEY_I)
  {
    src_str = "i";
  }
  else if (src == orxKEYBOARD_KEY_J)
  {
    src_str = "j";
  }
  else if (src == orxKEYBOARD_KEY_K)
  {
    src_str = "k";
  }
  else if (src == orxKEYBOARD_KEY_L)
  {
    src_str = "l";
  }
  else if (src == orxKEYBOARD_KEY_M)
  {
    src_str = "m";
  }
  else if (src == orxKEYBOARD_KEY_N)
  {
    src_str = "n";
  }
  else if (src == orxKEYBOARD_KEY_O)
  {
    src_str = "o";
  }
  else if (src == orxKEYBOARD_KEY_P)
  {
    src_str = "p";
  }
  else if (src == orxKEYBOARD_KEY_Q)
  {
    src_str = "q";
  }
  else if (src == orxKEYBOARD_KEY_R)
  {
    src_str = "r";
  }
  else if (src == orxKEYBOARD_KEY_S)
  {
    src_str = "s";
  }
  else if (src == orxKEYBOARD_KEY_T)
  {
    src_str = "t";
  }
  else if (src == orxKEYBOARD_KEY_U)
  {
    src_str = "u";
  }
  else if (src == orxKEYBOARD_KEY_V)
  {
    src_str = "v";
  }
  else if (src == orxKEYBOARD_KEY_W)
  {
    src_str = "w";
  }
  else if (src == orxKEYBOARD_KEY_X)
  {
    src_str = "x";
  }
  else if (src == orxKEYBOARD_KEY_Y)
  {
    src_str = "y";
  }
  else if (src == orxKEYBOARD_KEY_Z)
  {
    src_str = "z";
  }
  else if (src == orxKEYBOARD_KEY_SPACE)
  {
    src_str = "space";
  }
  else if (src == orxKEYBOARD_KEY_QUOTE)
  {
    src_str = "quote";
  }
  else if (src == orxKEYBOARD_KEY_COMMA)
  {
    src_str = "comma";
  }
  else if (src == orxKEYBOARD_KEY_DASH)
  {
    src_str = "dash";
  }
  else if (src == orxKEYBOARD_KEY_PERIOD)
  {
    src_str = "period";
  }
  else if (src == orxKEYBOARD_KEY_SLASH)
  {
    src_str = "slash";
  }
  else if (src == orxKEYBOARD_KEY_SEMICOLON)
  {
    src_str = "semicolon";
  }
  else if (src == orxKEYBOARD_KEY_EQUAL)
  {
    src_str = "equal";
  }
  else if (src == orxKEYBOARD_KEY_LBRACKET)
  {
    src_str = "lbracket";
  }
  else if (src == orxKEYBOARD_KEY_BACKSLASH)
  {
    src_str = "backslash";
  }
  else if (src == orxKEYBOARD_KEY_RBRACKET)
  {
    src_str = "rbracket";
  }
  else if (src == orxKEYBOARD_KEY_BACKQUOTE)
  {
    src_str = "backquote";
  }
  else if (src == orxKEYBOARD_KEY_WORLD_1)
  {
    src_str = "world_1";
  }
  else if (src == orxKEYBOARD_KEY_WORLD_2)
  {
    src_str = "world_2";
  }
  else if (src == orxKEYBOARD_KEY_ESCAPE)
  {
    src_str = "escape";
  }
  else if (src == orxKEYBOARD_KEY_ENTER)
  {
    src_str = "enter";
  }
  else if (src == orxKEYBOARD_KEY_TAB)
  {
    src_str = "tab";
  }
  else if (src == orxKEYBOARD_KEY_BACKSPACE)
  {
    src_str = "backspace";
  }
  else if (src == orxKEYBOARD_KEY_INSERT)
  {
    src_str = "insert";
  }
  else if (src == orxKEYBOARD_KEY_DELETE)
  {
    src_str = "delete";
  }
  else if (src == orxKEYBOARD_KEY_RIGHT)
  {
    src_str = "right";
  }
  else if (src == orxKEYBOARD_KEY_LEFT)
  {
    src_str = "left";
  }
  else if (src == orxKEYBOARD_KEY_DOWN)
  {
    src_str = "down";
  }
  else if (src == orxKEYBOARD_KEY_UP)
  {
    src_str = "up";
  }
  else if (src == orxKEYBOARD_KEY_PAGE_UP)
  {
    src_str = "page_up";
  }
  else if (src == orxKEYBOARD_KEY_PAGE_DOWN)
  {
    src_str = "page_down";
  }
  else if (src == orxKEYBOARD_KEY_HOME)
  {
    src_str = "home";
  }
  else if (src == orxKEYBOARD_KEY_END)
  {
    src_str = "end";
  }
  else if (src == orxKEYBOARD_KEY_CAPS_LOCK)
  {
    src_str = "caps_lock";
  }
  else if (src == orxKEYBOARD_KEY_SCROLL_LOCK)
  {
    src_str = "scroll_lock";
  }
  else if (src == orxKEYBOARD_KEY_NUM_LOCK)
  {
    src_str = "num_lock";
  }
  else if (src == orxKEYBOARD_KEY_PRINT_SCREEN)
  {
    src_str = "print_screen";
  }
  else if (src == orxKEYBOARD_KEY_PAUSE)
  {
    src_str = "pause";
  }
  else if (src == orxKEYBOARD_KEY_VOLUME_DOWN)
  {
    src_str = "volume_down";
  }
  else if (src == orxKEYBOARD_KEY_VOLUME_UP)
  {
    src_str = "volume_up";
  }
  else if (src == orxKEYBOARD_KEY_F1)
  {
    src_str = "f1";
  }
  else if (src == orxKEYBOARD_KEY_F2)
  {
    src_str = "f2";
  }
  else if (src == orxKEYBOARD_KEY_F3)
  {
    src_str = "f3";
  }
  else if (src == orxKEYBOARD_KEY_F4)
  {
    src_str = "f4";
  }
  else if (src == orxKEYBOARD_KEY_F5)
  {
    src_str = "f5";
  }
  else if (src == orxKEYBOARD_KEY_F6)
  {
    src_str = "f6";
  }
  else if (src == orxKEYBOARD_KEY_F7)
  {
    src_str = "f7";
  }
  else if (src == orxKEYBOARD_KEY_F8)
  {
    src_str = "f8";
  }
  else if (src == orxKEYBOARD_KEY_F9)
  {
    src_str = "f9";
  }
  else if (src == orxKEYBOARD_KEY_F10)
  {
    src_str = "f10";
  }
  else if (src == orxKEYBOARD_KEY_F11)
  {
    src_str = "f11";
  }
  else if (src == orxKEYBOARD_KEY_F12)
  {
    src_str = "f12";
  }
  else if (src == orxKEYBOARD_KEY_F13)
  {
    src_str = "f13";
  }
  else if (src == orxKEYBOARD_KEY_F14)
  {
    src_str = "f14";
  }
  else if (src == orxKEYBOARD_KEY_F15)
  {
    src_str = "f15";
  }
  else if (src == orxKEYBOARD_KEY_F16)
  {
    src_str = "f16";
  }
  else if (src == orxKEYBOARD_KEY_F17)
  {
    src_str = "f17";
  }
  else if (src == orxKEYBOARD_KEY_F18)
  {
    src_str = "f18";
  }
  else if (src == orxKEYBOARD_KEY_F19)
  {
    src_str = "f19";
  }
  else if (src == orxKEYBOARD_KEY_F20)
  {
    src_str = "f20";
  }
  else if (src == orxKEYBOARD_KEY_F21)
  {
    src_str = "f21";
  }
  else if (src == orxKEYBOARD_KEY_F22)
  {
    src_str = "f22";
  }
  else if (src == orxKEYBOARD_KEY_F23)
  {
    src_str = "f23";
  }
  else if (src == orxKEYBOARD_KEY_F24)
  {
    src_str = "f24";
  }
  else if (src == orxKEYBOARD_KEY_F25)
  {
    src_str = "f25";
  }
  else if (src == orxKEYBOARD_KEY_NUMPAD_0)
  {
    src_str = "numpad_0";
  }
  else if (src == orxKEYBOARD_KEY_NUMPAD_1)
  {
    src_str = "numpad_1";
  }
  else if (src == orxKEYBOARD_KEY_NUMPAD_2)
  {
    src_str = "numpad_2";
  }
  else if (src == orxKEYBOARD_KEY_NUMPAD_3)
  {
    src_str = "numpad_3";
  }
  else if (src == orxKEYBOARD_KEY_NUMPAD_4)
  {
    src_str = "numpad_4";
  }
  else if (src == orxKEYBOARD_KEY_NUMPAD_5)
  {
    src_str = "numpad_5";
  }
  else if (src == orxKEYBOARD_KEY_NUMPAD_6)
  {
    src_str = "numpad_6";
  }
  else if (src == orxKEYBOARD_KEY_NUMPAD_7)
  {
    src_str = "numpad_7";
  }
  else if (src == orxKEYBOARD_KEY_NUMPAD_8)
  {
    src_str = "numpad_8";
  }
  else if (src == orxKEYBOARD_KEY_NUMPAD_9)
  {
    src_str = "numpad_9";
  }
  else if (src == orxKEYBOARD_KEY_NUMPAD_DECIMAL)
  {
    src_str = "numpad_decimal";
  }
  else if (src == orxKEYBOARD_KEY_NUMPAD_DIVIDE)
  {
    src_str = "numpad_divide";
  }
  else if (src == orxKEYBOARD_KEY_NUMPAD_MULTIPLY)
  {
    src_str = "numpad_multiply";
  }
  else if (src == orxKEYBOARD_KEY_NUMPAD_SUBTRACT)
  {
    src_str = "numpad_subtract";
  }
  else if (src == orxKEYBOARD_KEY_NUMPAD_ADD)
  {
    src_str = "numpad_add";
  }
  else if (src == orxKEYBOARD_KEY_NUMPAD_ENTER)
  {
    src_str = "numpad_enter";
  }
  else if (src == orxKEYBOARD_KEY_NUMPAD_EQUAL)
  {
    src_str = "numpad_equal";
  }
  else if (src == orxKEYBOARD_KEY_LSHIFT)
  {
    src_str = "lshift";
  }
  else if (src == orxKEYBOARD_KEY_LCTRL)
  {
    src_str = "lctrl";
  }
  else if (src == orxKEYBOARD_KEY_LALT)
  {
    src_str = "lalt";
  }
  else if (src == orxKEYBOARD_KEY_LSYSTEM)
  {
    src_str = "lsystem";
  }
  else if (src == orxKEYBOARD_KEY_RSHIFT)
  {
    src_str = "rshift";
  }
  else if (src == orxKEYBOARD_KEY_RCTRL)
  {
    src_str = "rctrl";
  }
  else if (src == orxKEYBOARD_KEY_RALT)
  {
    src_str = "ralt";
  }
  else if (src == orxKEYBOARD_KEY_RSYSTEM)
  {
    src_str = "rsystem";
  }
  else if (src == orxKEYBOARD_KEY_MENU)
  {
    src_str = "menu";
  }
  else if (src == orxKEYBOARD_KEY_NONE)
  {
    src_str = "none";
  }
  else
  {
    LORX_ERROR("unexpected enum type: %u!\n", src);
  }
  lua_pushstring(L, src_str);
  
  return 1;
}

LORX_API int lorx_orxLOCALE_EVENT_to_lenumstr(lua_State *L, orxLOCALE_EVENT src)
{
  const char* src_str = NULL;
  if (src == orxLOCALE_EVENT_SELECT_LANGUAGE)
  {
    src_str = "select_language";
  }
  else if (src == orxLOCALE_EVENT_SET_STRING)
  {
    src_str = "set_string";
  }
  else if (src == orxLOCALE_EVENT_NONE)
  {
    src_str = "none";
  }
  else
  {
    LORX_ERROR("unexpected enum type: %u!\n", src);
  }
  lua_pushstring(L, src_str);
  
  return 1;
}

LORX_API int lorx_orxMODULE_ID_to_lenumstr(lua_State *L, orxMODULE_ID src)
{
  const char* src_str = NULL;
  if (src == orxMODULE_ID_ANIM)
  {
    src_str = "anim";
  }
  else if (src == orxMODULE_ID_ANIMPOINTER)
  {
    src_str = "animpointer";
  }
  else if (src == orxMODULE_ID_ANIMSET)
  {
    src_str = "animset";
  }
  else if (src == orxMODULE_ID_BANK)
  {
    src_str = "bank";
  }
  else if (src == orxMODULE_ID_BODY)
  {
    src_str = "body";
  }
  else if (src == orxMODULE_ID_CAMERA)
  {
    src_str = "camera";
  }
  else if (src == orxMODULE_ID_CLOCK)
  {
    src_str = "clock";
  }
  else if (src == orxMODULE_ID_COMMAND)
  {
    src_str = "command";
  }
  else if (src == orxMODULE_ID_CONFIG)
  {
    src_str = "config";
  }
  else if (src == orxMODULE_ID_CONSOLE)
  {
    src_str = "console";
  }
  else if (src == orxMODULE_ID_DISPLAY)
  {
    src_str = "display";
  }
  else if (src == orxMODULE_ID_EVENT)
  {
    src_str = "event";
  }
  else if (src == orxMODULE_ID_FILE)
  {
    src_str = "file";
  }
  else if (src == orxMODULE_ID_FONT)
  {
    src_str = "font";
  }
  else if (src == orxMODULE_ID_FPS)
  {
    src_str = "fps";
  }
  else if (src == orxMODULE_ID_FRAME)
  {
    src_str = "frame";
  }
  else if (src == orxMODULE_ID_FX)
  {
    src_str = "fx";
  }
  else if (src == orxMODULE_ID_FXPOINTER)
  {
    src_str = "fxpointer";
  }
  else if (src == orxMODULE_ID_GRAPHIC)
  {
    src_str = "graphic";
  }
  else if (src == orxMODULE_ID_INPUT)
  {
    src_str = "input";
  }
  else if (src == orxMODULE_ID_JOYSTICK)
  {
    src_str = "joystick";
  }
  else if (src == orxMODULE_ID_KEYBOARD)
  {
    src_str = "keyboard";
  }
  else if (src == orxMODULE_ID_LOCALE)
  {
    src_str = "locale";
  }
  else if (src == orxMODULE_ID_MAIN)
  {
    src_str = "main";
  }
  else if (src == orxMODULE_ID_MEMORY)
  {
    src_str = "memory";
  }
  else if (src == orxMODULE_ID_MOUSE)
  {
    src_str = "mouse";
  }
  else if (src == orxMODULE_ID_OBJECT)
  {
    src_str = "object";
  }
  else if (src == orxMODULE_ID_PARAM)
  {
    src_str = "param";
  }
  else if (src == orxMODULE_ID_PHYSICS)
  {
    src_str = "physics";
  }
  else if (src == orxMODULE_ID_PLUGIN)
  {
    src_str = "plugin";
  }
  else if (src == orxMODULE_ID_PROFILER)
  {
    src_str = "profiler";
  }
  else if (src == orxMODULE_ID_RENDER)
  {
    src_str = "render";
  }
  else if (src == orxMODULE_ID_RESOURCE)
  {
    src_str = "resource";
  }
  else if (src == orxMODULE_ID_SCREENSHOT)
  {
    src_str = "screenshot";
  }
  else if (src == orxMODULE_ID_SHADER)
  {
    src_str = "shader";
  }
  else if (src == orxMODULE_ID_SHADERPOINTER)
  {
    src_str = "shaderpointer";
  }
  else if (src == orxMODULE_ID_SOUND)
  {
    src_str = "sound";
  }
  else if (src == orxMODULE_ID_SOUNDPOINTER)
  {
    src_str = "soundpointer";
  }
  else if (src == orxMODULE_ID_SOUNDSYSTEM)
  {
    src_str = "soundsystem";
  }
  else if (src == orxMODULE_ID_SPAWNER)
  {
    src_str = "spawner";
  }
  else if (src == orxMODULE_ID_STRING)
  {
    src_str = "string";
  }
  else if (src == orxMODULE_ID_STRUCTURE)
  {
    src_str = "structure";
  }
  else if (src == orxMODULE_ID_SYSTEM)
  {
    src_str = "system";
  }
  else if (src == orxMODULE_ID_TEXT)
  {
    src_str = "text";
  }
  else if (src == orxMODULE_ID_TEXTURE)
  {
    src_str = "texture";
  }
  else if (src == orxMODULE_ID_THREAD)
  {
    src_str = "thread";
  }
  else if (src == orxMODULE_ID_TIMELINE)
  {
    src_str = "timeline";
  }
  else if (src == orxMODULE_ID_VIEWPORT)
  {
    src_str = "viewport";
  }
  else if (src == orxMODULE_ID_USER_DEFINED)
  {
    src_str = "user_defined";
  }
  else if (src == orxMODULE_ID_NONE)
  {
    src_str = "none";
  }
  else
  {
    LORX_ERROR("unexpected enum type: %u!\n", src);
  }
  lua_pushstring(L, src_str);
  
  return 1;
}

LORX_API int lorx_orxMOUSE_AXIS_to_lenumstr(lua_State *L, orxMOUSE_AXIS src)
{
  const char* src_str = NULL;
  if (src == orxMOUSE_AXIS_X)
  {
    src_str = "x";
  }
  else if (src == orxMOUSE_AXIS_Y)
  {
    src_str = "y";
  }
  else if (src == orxMOUSE_AXIS_NONE)
  {
    src_str = "none";
  }
  else
  {
    LORX_ERROR("unexpected enum type: %u!\n", src);
  }
  lua_pushstring(L, src_str);
  
  return 1;
}

LORX_API int lorx_orxMOUSE_BUTTON_to_lenumstr(lua_State *L, orxMOUSE_BUTTON src)
{
  const char* src_str = NULL;
  if (src == orxMOUSE_BUTTON_LEFT)
  {
    src_str = "left";
  }
  else if (src == orxMOUSE_BUTTON_RIGHT)
  {
    src_str = "right";
  }
  else if (src == orxMOUSE_BUTTON_MIDDLE)
  {
    src_str = "middle";
  }
  else if (src == orxMOUSE_BUTTON_EXTRA_1)
  {
    src_str = "extra_1";
  }
  else if (src == orxMOUSE_BUTTON_EXTRA_2)
  {
    src_str = "extra_2";
  }
  else if (src == orxMOUSE_BUTTON_EXTRA_3)
  {
    src_str = "extra_3";
  }
  else if (src == orxMOUSE_BUTTON_EXTRA_4)
  {
    src_str = "extra_4";
  }
  else if (src == orxMOUSE_BUTTON_EXTRA_5)
  {
    src_str = "extra_5";
  }
  else if (src == orxMOUSE_BUTTON_WHEEL_UP)
  {
    src_str = "wheel_up";
  }
  else if (src == orxMOUSE_BUTTON_WHEEL_DOWN)
  {
    src_str = "wheel_down";
  }
  else if (src == orxMOUSE_BUTTON_NONE)
  {
    src_str = "none";
  }
  else
  {
    LORX_ERROR("unexpected enum type: %u!\n", src);
  }
  lua_pushstring(L, src_str);
  
  return 1;
}

LORX_API int lorx_orxOBJECT_EVENT_to_lenumstr(lua_State *L, orxOBJECT_EVENT src)
{
  const char* src_str = NULL;
  if (src == orxOBJECT_EVENT_CREATE)
  {
    src_str = "create";
  }
  else if (src == orxOBJECT_EVENT_DELETE)
  {
    src_str = "delete";
  }
  else if (src == orxOBJECT_EVENT_PREPARE)
  {
    src_str = "prepare";
  }
  else if (src == orxOBJECT_EVENT_ENABLE)
  {
    src_str = "enable";
  }
  else if (src == orxOBJECT_EVENT_DISABLE)
  {
    src_str = "disable";
  }
  else if (src == orxOBJECT_EVENT_PAUSE)
  {
    src_str = "pause";
  }
  else if (src == orxOBJECT_EVENT_UNPAUSE)
  {
    src_str = "unpause";
  }
  else if (src == orxOBJECT_EVENT_NONE)
  {
    src_str = "none";
  }
  else
  {
    LORX_ERROR("unexpected enum type: %u!\n", src);
  }
  lua_pushstring(L, src_str);
  
  return 1;
}

LORX_API int lorx_orxPHYSICS_EVENT_to_lenumstr(lua_State *L, orxPHYSICS_EVENT src)
{
  const char* src_str = NULL;
  if (src == orxPHYSICS_EVENT_CONTACT_ADD)
  {
    src_str = "contact_add";
  }
  else if (src == orxPHYSICS_EVENT_CONTACT_REMOVE)
  {
    src_str = "contact_remove";
  }
  else if (src == orxPHYSICS_EVENT_NONE)
  {
    src_str = "none";
  }
  else
  {
    LORX_ERROR("unexpected enum type: %u!\n", src);
  }
  lua_pushstring(L, src_str);
  
  return 1;
}

LORX_API int lorx_orxRENDER_EVENT_to_lenumstr(lua_State *L, orxRENDER_EVENT src)
{
  const char* src_str = NULL;
  if (src == orxRENDER_EVENT_START)
  {
    src_str = "start";
  }
  else if (src == orxRENDER_EVENT_STOP)
  {
    src_str = "stop";
  }
  else if (src == orxRENDER_EVENT_VIEWPORT_START)
  {
    src_str = "viewport_start";
  }
  else if (src == orxRENDER_EVENT_VIEWPORT_STOP)
  {
    src_str = "viewport_stop";
  }
  else if (src == orxRENDER_EVENT_OBJECT_START)
  {
    src_str = "object_start";
  }
  else if (src == orxRENDER_EVENT_OBJECT_STOP)
  {
    src_str = "object_stop";
  }
  else if (src == orxRENDER_EVENT_CONSOLE_START)
  {
    src_str = "console_start";
  }
  else if (src == orxRENDER_EVENT_CONSOLE_STOP)
  {
    src_str = "console_stop";
  }
  else if (src == orxRENDER_EVENT_PROFILER_START)
  {
    src_str = "profiler_start";
  }
  else if (src == orxRENDER_EVENT_PROFILER_STOP)
  {
    src_str = "profiler_stop";
  }
  else if (src == orxRENDER_EVENT_NONE)
  {
    src_str = "none";
  }
  else
  {
    LORX_ERROR("unexpected enum type: %u!\n", src);
  }
  lua_pushstring(L, src_str);
  
  return 1;
}

LORX_API int lorx_orxRESOURCE_EVENT_to_lenumstr(lua_State *L, orxRESOURCE_EVENT src)
{
  const char* src_str = NULL;
  if (src == orxRESOURCE_EVENT_UPDATE)
  {
    src_str = "update";
  }
  else if (src == orxRESOURCE_EVENT_ADD)
  {
    src_str = "add";
  }
  else if (src == orxRESOURCE_EVENT_REMOVE)
  {
    src_str = "remove";
  }
  else if (src == orxRESOURCE_EVENT_NONE)
  {
    src_str = "none";
  }
  else
  {
    LORX_ERROR("unexpected enum type: %u!\n", src);
  }
  lua_pushstring(L, src_str);
  
  return 1;
}

LORX_API int lorx_orxSEEK_OFFSET_WHENCE_to_lenumstr(lua_State *L, orxSEEK_OFFSET_WHENCE src)
{
  const char* src_str = NULL;
  if (src == orxSEEK_OFFSET_WHENCE_START)
  {
    src_str = "start";
  }
  else if (src == orxSEEK_OFFSET_WHENCE_CURRENT)
  {
    src_str = "current";
  }
  else if (src == orxSEEK_OFFSET_WHENCE_END)
  {
    src_str = "end";
  }
  else if (src == orxSEEK_OFFSET_WHENCE_NONE)
  {
    src_str = "none";
  }
  else
  {
    LORX_ERROR("unexpected enum type: %u!\n", src);
  }
  lua_pushstring(L, src_str);
  
  return 1;
}

LORX_API int lorx_orxSHADER_EVENT_to_lenumstr(lua_State *L, orxSHADER_EVENT src)
{
  const char* src_str = NULL;
  if (src == orxSHADER_EVENT_SET_PARAM)
  {
    src_str = "set_param";
  }
  else if (src == orxSHADER_EVENT_NONE)
  {
    src_str = "none";
  }
  else
  {
    LORX_ERROR("unexpected enum type: %u!\n", src);
  }
  lua_pushstring(L, src_str);
  
  return 1;
}

LORX_API int lorx_orxSHADER_PARAM_TYPE_to_lenumstr(lua_State *L, orxSHADER_PARAM_TYPE src)
{
  const char* src_str = NULL;
  if (src == orxSHADER_PARAM_TYPE_FLOAT)
  {
    src_str = "float";
  }
  else if (src == orxSHADER_PARAM_TYPE_TEXTURE)
  {
    src_str = "texture";
  }
  else if (src == orxSHADER_PARAM_TYPE_VECTOR)
  {
    src_str = "vector";
  }
  else if (src == orxSHADER_PARAM_TYPE_TIME)
  {
    src_str = "time";
  }
  else if (src == orxSHADER_PARAM_TYPE_NONE)
  {
    src_str = "none";
  }
  else
  {
    LORX_ERROR("unexpected enum type: %u!\n", src);
  }
  lua_pushstring(L, src_str);
  
  return 1;
}

LORX_API int lorx_orxSOUNDSYSTEM_STATUS_to_lenumstr(lua_State *L, orxSOUNDSYSTEM_STATUS src)
{
  const char* src_str = NULL;
  if (src == orxSOUNDSYSTEM_STATUS_PLAY)
  {
    src_str = "play";
  }
  else if (src == orxSOUNDSYSTEM_STATUS_PAUSE)
  {
    src_str = "pause";
  }
  else if (src == orxSOUNDSYSTEM_STATUS_STOP)
  {
    src_str = "stop";
  }
  else if (src == orxSOUNDSYSTEM_STATUS_NONE)
  {
    src_str = "none";
  }
  else
  {
    LORX_ERROR("unexpected enum type: %u!\n", src);
  }
  lua_pushstring(L, src_str);
  
  return 1;
}

LORX_API int lorx_orxSOUND_EVENT_to_lenumstr(lua_State *L, orxSOUND_EVENT src)
{
  const char* src_str = NULL;
  if (src == orxSOUND_EVENT_START)
  {
    src_str = "start";
  }
  else if (src == orxSOUND_EVENT_STOP)
  {
    src_str = "stop";
  }
  else if (src == orxSOUND_EVENT_ADD)
  {
    src_str = "add";
  }
  else if (src == orxSOUND_EVENT_REMOVE)
  {
    src_str = "remove";
  }
  else if (src == orxSOUND_EVENT_PACKET)
  {
    src_str = "packet";
  }
  else if (src == orxSOUND_EVENT_RECORDING_START)
  {
    src_str = "recording_start";
  }
  else if (src == orxSOUND_EVENT_RECORDING_STOP)
  {
    src_str = "recording_stop";
  }
  else if (src == orxSOUND_EVENT_RECORDING_PACKET)
  {
    src_str = "recording_packet";
  }
  else if (src == orxSOUND_EVENT_SET_FILTER_PARAM)
  {
    src_str = "set_filter_param";
  }
  else if (src == orxSOUND_EVENT_NONE)
  {
    src_str = "none";
  }
  else
  {
    LORX_ERROR("unexpected enum type: %u!\n", src);
  }
  lua_pushstring(L, src_str);
  
  return 1;
}

LORX_API int lorx_orxSOUND_FILTER_TYPE_to_lenumstr(lua_State *L, orxSOUND_FILTER_TYPE src)
{
  const char* src_str = NULL;
  if (src == orxSOUND_FILTER_TYPE_BIQUAD)
  {
    src_str = "biquad";
  }
  else if (src == orxSOUND_FILTER_TYPE_LOW_PASS)
  {
    src_str = "low_pass";
  }
  else if (src == orxSOUND_FILTER_TYPE_HIGH_PASS)
  {
    src_str = "high_pass";
  }
  else if (src == orxSOUND_FILTER_TYPE_BAND_PASS)
  {
    src_str = "band_pass";
  }
  else if (src == orxSOUND_FILTER_TYPE_LOW_SHELF)
  {
    src_str = "low_shelf";
  }
  else if (src == orxSOUND_FILTER_TYPE_HIGH_SHELF)
  {
    src_str = "high_shelf";
  }
  else if (src == orxSOUND_FILTER_TYPE_NOTCH)
  {
    src_str = "notch";
  }
  else if (src == orxSOUND_FILTER_TYPE_PEAKING)
  {
    src_str = "peaking";
  }
  else if (src == orxSOUND_FILTER_TYPE_DELAY)
  {
    src_str = "delay";
  }
  else if (src == orxSOUND_FILTER_TYPE_CUSTOM)
  {
    src_str = "custom";
  }
  else if (src == orxSOUND_FILTER_TYPE_NONE)
  {
    src_str = "none";
  }
  else
  {
    LORX_ERROR("unexpected enum type: %u!\n", src);
  }
  lua_pushstring(L, src_str);
  
  return 1;
}

LORX_API int lorx_orxSOUND_STATUS_to_lenumstr(lua_State *L, orxSOUND_STATUS src)
{
  const char* src_str = NULL;
  if (src == orxSOUND_STATUS_PLAY)
  {
    src_str = "play";
  }
  else if (src == orxSOUND_STATUS_PAUSE)
  {
    src_str = "pause";
  }
  else if (src == orxSOUND_STATUS_STOP)
  {
    src_str = "stop";
  }
  else if (src == orxSOUND_STATUS_NONE)
  {
    src_str = "none";
  }
  else
  {
    LORX_ERROR("unexpected enum type: %u!\n", src);
  }
  lua_pushstring(L, src_str);
  
  return 1;
}

LORX_API int lorx_orxSPAWNER_EVENT_to_lenumstr(lua_State *L, orxSPAWNER_EVENT src)
{
  const char* src_str = NULL;
  if (src == orxSPAWNER_EVENT_SPAWN)
  {
    src_str = "spawn";
  }
  else if (src == orxSPAWNER_EVENT_CREATE)
  {
    src_str = "create";
  }
  else if (src == orxSPAWNER_EVENT_DELETE)
  {
    src_str = "delete";
  }
  else if (src == orxSPAWNER_EVENT_RESET)
  {
    src_str = "reset";
  }
  else if (src == orxSPAWNER_EVENT_EMPTY)
  {
    src_str = "empty";
  }
  else if (src == orxSPAWNER_EVENT_WAVE_START)
  {
    src_str = "wave_start";
  }
  else if (src == orxSPAWNER_EVENT_WAVE_STOP)
  {
    src_str = "wave_stop";
  }
  else if (src == orxSPAWNER_EVENT_NONE)
  {
    src_str = "none";
  }
  else
  {
    LORX_ERROR("unexpected enum type: %u!\n", src);
  }
  lua_pushstring(L, src_str);
  
  return 1;
}

LORX_API int lorx_orxSTATUS_to_lenumstr(lua_State *L, orxSTATUS src)
{
  const char* src_str = NULL;
  if (src == orxSTATUS_FAILURE)
  {
    src_str = "failure";
  }
  else if (src == orxSTATUS_SUCCESS)
  {
    src_str = "success";
  }
  else if (src == orxSTATUS_NONE)
  {
    src_str = "none";
  }
  else
  {
    LORX_ERROR("unexpected enum type: %u!\n", src);
  }
  lua_pushstring(L, src_str);
  
  return 1;
}

LORX_API int lorx_orxSTRUCTURE_ID_to_lenumstr(lua_State *L, orxSTRUCTURE_ID src)
{
  const char* src_str = NULL;
  if (src == orxSTRUCTURE_ID_ANIMPOINTER)
  {
    src_str = "animpointer";
  }
  else if (src == orxSTRUCTURE_ID_BODY)
  {
    src_str = "body";
  }
  else if (src == orxSTRUCTURE_ID_CLOCK)
  {
    src_str = "clock";
  }
  else if (src == orxSTRUCTURE_ID_FRAME)
  {
    src_str = "frame";
  }
  else if (src == orxSTRUCTURE_ID_FXPOINTER)
  {
    src_str = "fxpointer";
  }
  else if (src == orxSTRUCTURE_ID_GRAPHIC)
  {
    src_str = "graphic";
  }
  else if (src == orxSTRUCTURE_ID_SHADERPOINTER)
  {
    src_str = "shaderpointer";
  }
  else if (src == orxSTRUCTURE_ID_SOUNDPOINTER)
  {
    src_str = "soundpointer";
  }
  else if (src == orxSTRUCTURE_ID_SPAWNER)
  {
    src_str = "spawner";
  }
  else if (src == orxSTRUCTURE_ID_TIMELINE)
  {
    src_str = "timeline";
  }
  else if (src == orxSTRUCTURE_ID_ANIM)
  {
    src_str = "anim";
  }
  else if (src == orxSTRUCTURE_ID_ANIMSET)
  {
    src_str = "animset";
  }
  else if (src == orxSTRUCTURE_ID_CAMERA)
  {
    src_str = "camera";
  }
  else if (src == orxSTRUCTURE_ID_FONT)
  {
    src_str = "font";
  }
  else if (src == orxSTRUCTURE_ID_FX)
  {
    src_str = "fx";
  }
  else if (src == orxSTRUCTURE_ID_OBJECT)
  {
    src_str = "object";
  }
  else if (src == orxSTRUCTURE_ID_SHADER)
  {
    src_str = "shader";
  }
  else if (src == orxSTRUCTURE_ID_SOUND)
  {
    src_str = "sound";
  }
  else if (src == orxSTRUCTURE_ID_TEXT)
  {
    src_str = "text";
  }
  else if (src == orxSTRUCTURE_ID_TEXTURE)
  {
    src_str = "texture";
  }
  else if (src == orxSTRUCTURE_ID_VIEWPORT)
  {
    src_str = "viewport";
  }
  else if (src == orxSTRUCTURE_ID_NONE)
  {
    src_str = "none";
  }
  else
  {
    LORX_ERROR("unexpected enum type: %u!\n", src);
  }
  lua_pushstring(L, src_str);
  
  return 1;
}

LORX_API int lorx_orxSTRUCTURE_STORAGE_TYPE_to_lenumstr(lua_State *L, orxSTRUCTURE_STORAGE_TYPE src)
{
  const char* src_str = NULL;
  if (src == orxSTRUCTURE_STORAGE_TYPE_LINKLIST)
  {
    src_str = "linklist";
  }
  else if (src == orxSTRUCTURE_STORAGE_TYPE_TREE)
  {
    src_str = "tree";
  }
  else if (src == orxSTRUCTURE_STORAGE_TYPE_NONE)
  {
    src_str = "none";
  }
  else
  {
    LORX_ERROR("unexpected enum type: %u!\n", src);
  }
  lua_pushstring(L, src_str);
  
  return 1;
}

LORX_API int lorx_orxSYSTEM_EVENT_to_lenumstr(lua_State *L, orxSYSTEM_EVENT src)
{
  const char* src_str = NULL;
  if (src == orxSYSTEM_EVENT_CLOSE)
  {
    src_str = "close";
  }
  else if (src == orxSYSTEM_EVENT_FOCUS_GAINED)
  {
    src_str = "focus_gained";
  }
  else if (src == orxSYSTEM_EVENT_FOCUS_LOST)
  {
    src_str = "focus_lost";
  }
  else if (src == orxSYSTEM_EVENT_BACKGROUND)
  {
    src_str = "background";
  }
  else if (src == orxSYSTEM_EVENT_FOREGROUND)
  {
    src_str = "foreground";
  }
  else if (src == orxSYSTEM_EVENT_GAME_LOOP_START)
  {
    src_str = "game_loop_start";
  }
  else if (src == orxSYSTEM_EVENT_GAME_LOOP_STOP)
  {
    src_str = "game_loop_stop";
  }
  else if (src == orxSYSTEM_EVENT_TOUCH_BEGIN)
  {
    src_str = "touch_begin";
  }
  else if (src == orxSYSTEM_EVENT_TOUCH_MOVE)
  {
    src_str = "touch_move";
  }
  else if (src == orxSYSTEM_EVENT_TOUCH_END)
  {
    src_str = "touch_end";
  }
  else if (src == orxSYSTEM_EVENT_ACCELERATE)
  {
    src_str = "accelerate";
  }
  else if (src == orxSYSTEM_EVENT_MOTION_SHAKE)
  {
    src_str = "motion_shake";
  }
  else if (src == orxSYSTEM_EVENT_DROP)
  {
    src_str = "drop";
  }
  else if (src == orxSYSTEM_EVENT_CLIPBOARD)
  {
    src_str = "clipboard";
  }
  else if (src == orxSYSTEM_EVENT_NONE)
  {
    src_str = "none";
  }
  else
  {
    LORX_ERROR("unexpected enum type: %u!\n", src);
  }
  lua_pushstring(L, src_str);
  
  return 1;
}

LORX_API int lorx_orxTEXTURE_EVENT_to_lenumstr(lua_State *L, orxTEXTURE_EVENT src)
{
  const char* src_str = NULL;
  if (src == orxTEXTURE_EVENT_CREATE)
  {
    src_str = "create";
  }
  else if (src == orxTEXTURE_EVENT_DELETE)
  {
    src_str = "delete";
  }
  else if (src == orxTEXTURE_EVENT_LOAD)
  {
    src_str = "load";
  }
  else if (src == orxTEXTURE_EVENT_NONE)
  {
    src_str = "none";
  }
  else
  {
    LORX_ERROR("unexpected enum type: %u!\n", src);
  }
  lua_pushstring(L, src_str);
  
  return 1;
}

LORX_API int lorx_orxTIMELINE_EVENT_to_lenumstr(lua_State *L, orxTIMELINE_EVENT src)
{
  const char* src_str = NULL;
  if (src == orxTIMELINE_EVENT_TRACK_START)
  {
    src_str = "track_start";
  }
  else if (src == orxTIMELINE_EVENT_TRACK_STOP)
  {
    src_str = "track_stop";
  }
  else if (src == orxTIMELINE_EVENT_TRACK_ADD)
  {
    src_str = "track_add";
  }
  else if (src == orxTIMELINE_EVENT_TRACK_REMOVE)
  {
    src_str = "track_remove";
  }
  else if (src == orxTIMELINE_EVENT_LOOP)
  {
    src_str = "loop";
  }
  else if (src == orxTIMELINE_EVENT_TRIGGER)
  {
    src_str = "trigger";
  }
  else if (src == orxTIMELINE_EVENT_NONE)
  {
    src_str = "none";
  }
  else
  {
    LORX_ERROR("unexpected enum type: %u!\n", src);
  }
  lua_pushstring(L, src_str);
  
  return 1;
}

LORX_API int lorx_orxVIEWPORT_EVENT_to_lenumstr(lua_State *L, orxVIEWPORT_EVENT src)
{
  const char* src_str = NULL;
  if (src == orxVIEWPORT_EVENT_RESIZE)
  {
    src_str = "resize";
  }
  else if (src == orxVIEWPORT_EVENT_NONE)
  {
    src_str = "none";
  }
  else
  {
    LORX_ERROR("unexpected enum type: %u!\n", src);
  }
  lua_pushstring(L, src_str);
  
  return 1;
}

