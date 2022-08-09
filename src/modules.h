/*
** Lorx sub-modules (generated with modules.py)
*/


#ifndef __LORX_MODULES_H__
#define __LORX_MODULES_H__

#include <lua.h>
#include <lauxlib.h>
#include "helpers.h"

LORX_API int luaopen_lorx_debug(lua_State *L);
LORX_API int luaopen_lorx_object(lua_State *L);
LORX_API int luaopen_lorx_structure(lua_State *L);
LORX_API int luaopen_lorx_animpointer(lua_State *L);
LORX_API int luaopen_lorx_animset(lua_State *L);
LORX_API int luaopen_lorx_anim(lua_State *L);
LORX_API int luaopen_lorx_body(lua_State *L);
LORX_API int luaopen_lorx_camera(lua_State *L);
LORX_API int luaopen_lorx_clock(lua_State *L);
LORX_API int luaopen_lorx_command(lua_State *L);
LORX_API int luaopen_lorx_config(lua_State *L);
LORX_API int luaopen_lorx_console(lua_State *L);
LORX_API int luaopen_lorx_display(lua_State *L);
LORX_API int luaopen_lorx_event(lua_State *L);
LORX_API int luaopen_lorx_fps(lua_State *L);
LORX_API int luaopen_lorx_fxpointer(lua_State *L);
LORX_API int luaopen_lorx_fx(lua_State *L);
LORX_API int luaopen_lorx_file(lua_State *L);
LORX_API int luaopen_lorx_font(lua_State *L);
LORX_API int luaopen_lorx_frame(lua_State *L);
LORX_API int luaopen_lorx_graphic(lua_State *L);
LORX_API int luaopen_lorx_input(lua_State *L);
LORX_API int luaopen_lorx_joystick(lua_State *L);
LORX_API int luaopen_lorx_keyboard(lua_State *L);
LORX_API int luaopen_lorx_locale(lua_State *L);
LORX_API int luaopen_lorx_math(lua_State *L);
LORX_API int luaopen_lorx_module(lua_State *L);
LORX_API int luaopen_lorx_mouse(lua_State *L);
LORX_API int luaopen_lorx_physics(lua_State *L);
LORX_API int luaopen_lorx_profiler(lua_State *L);
LORX_API int luaopen_lorx_render(lua_State *L);
LORX_API int luaopen_lorx_resource(lua_State *L);
LORX_API int luaopen_lorx_screenshot(lua_State *L);
LORX_API int luaopen_lorx_shaderpointer(lua_State *L);
LORX_API int luaopen_lorx_shader(lua_State *L);
LORX_API int luaopen_lorx_soundpointer(lua_State *L);
LORX_API int luaopen_lorx_soundsystem(lua_State *L);
LORX_API int luaopen_lorx_sound(lua_State *L);
LORX_API int luaopen_lorx_spawner(lua_State *L);
LORX_API int luaopen_lorx_string(lua_State *L);
LORX_API int luaopen_lorx_system(lua_State *L);
LORX_API int luaopen_lorx_text(lua_State *L);
LORX_API int luaopen_lorx_texture(lua_State *L);
LORX_API int luaopen_lorx_thread(lua_State *L);
LORX_API int luaopen_lorx_timeline(lua_State *L);
LORX_API int luaopen_lorx_vector(lua_State *L);
LORX_API int luaopen_lorx_viewport(lua_State *L);
LORX_API int luaopen_lorx_aabox(lua_State *L);
LORX_API int luaopen_lorx_obox(lua_State *L);
LORX_API int luaopen_lorx_constants(lua_State *L);


// sub-module list
static const struct luaL_Reg lorx_orx_modules[] = {
  { "lorx.aabox", luaopen_lorx_aabox },
  { "lorx.anim", luaopen_lorx_anim },
  { "lorx.animpointer", luaopen_lorx_animpointer },
  { "lorx.animset", luaopen_lorx_animset },
  { "lorx.body", luaopen_lorx_body },
  { "lorx.camera", luaopen_lorx_camera },
  { "lorx.clock", luaopen_lorx_clock },
  { "lorx.command", luaopen_lorx_command },
  { "lorx.config", luaopen_lorx_config },
  { "lorx.console", luaopen_lorx_console },
  { "lorx.constants", luaopen_lorx_constants },
  { "lorx.debug", luaopen_lorx_debug },
  { "lorx.display", luaopen_lorx_display },
  { "lorx.event", luaopen_lorx_event },
  { "lorx.file", luaopen_lorx_file },
  { "lorx.font", luaopen_lorx_font },
  { "lorx.fps", luaopen_lorx_fps },
  { "lorx.frame", luaopen_lorx_frame },
  { "lorx.fx", luaopen_lorx_fx },
  { "lorx.fxpointer", luaopen_lorx_fxpointer },
  { "lorx.graphic", luaopen_lorx_graphic },
  { "lorx.input", luaopen_lorx_input },
  { "lorx.joystick", luaopen_lorx_joystick },
  { "lorx.keyboard", luaopen_lorx_keyboard },
  { "lorx.locale", luaopen_lorx_locale },
  { "lorx.math", luaopen_lorx_math },
  { "lorx.module", luaopen_lorx_module },
  { "lorx.mouse", luaopen_lorx_mouse },
  { "lorx.object", luaopen_lorx_object },
  { "lorx.obox", luaopen_lorx_obox },
  { "lorx.physics", luaopen_lorx_physics },
  { "lorx.profiler", luaopen_lorx_profiler },
  { "lorx.render", luaopen_lorx_render },
  { "lorx.resource", luaopen_lorx_resource },
  { "lorx.screenshot", luaopen_lorx_screenshot },
  { "lorx.shader", luaopen_lorx_shader },
  { "lorx.shaderpointer", luaopen_lorx_shaderpointer },
  { "lorx.sound", luaopen_lorx_sound },
  { "lorx.soundpointer", luaopen_lorx_soundpointer },
  { "lorx.soundsystem", luaopen_lorx_soundsystem },
  { "lorx.spawner", luaopen_lorx_spawner },
  { "lorx.string", luaopen_lorx_string },
  { "lorx.structure", luaopen_lorx_structure },
  { "lorx.system", luaopen_lorx_system },
  { "lorx.text", luaopen_lorx_text },
  { "lorx.texture", luaopen_lorx_texture },
  { "lorx.thread", luaopen_lorx_thread },
  { "lorx.timeline", luaopen_lorx_timeline },
  { "lorx.vector", luaopen_lorx_vector },
  { "lorx.viewport", luaopen_lorx_viewport },
};
static const size_t lorx_orx_module_number = 50;

#endif /* __LORX_MODULES_H__ */