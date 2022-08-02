/*
** Orx struct types conversions
** (generated with conversion.py)
*/


#include <lua.h>
#include <lualib.h>
#include <lauxlib.h>
#include <string.h>
#include <orx.h>
#include "conutype.h"

/*
 * Conversion functions for converting from Orx types (pointers) to lua userdata
 */
LORX_API int lorx_orxFILE_to_luserdata(lua_State *L, orxFILE* src)
{
  if (src)
  {
    orxFILE** pp = lua_newuserdata(L, sizeof(void*));
    luaL_setmetatable(L, "lorx.orxFILE");
    *pp = src;
  }
  else
  {
    lua_pushnil(L);
  }
  return 1;
}

LORX_API int lorx_orxTHREAD_SEMAPHORE_to_luserdata(lua_State *L, orxTHREAD_SEMAPHORE* src)
{
  if (src)
  {
    orxTHREAD_SEMAPHORE** pp = lua_newuserdata(L, sizeof(void*));
    luaL_setmetatable(L, "lorx.orxTHREAD_SEMAPHORE");
    *pp = src;
  }
  else
  {
    lua_pushnil(L);
  }
  return 1;
}

LORX_API int lorx_orxCLOCK_to_luserdata(lua_State *L, orxCLOCK* src)
{
  if (src)
  {
    orxCLOCK** pp = lua_newuserdata(L, sizeof(void*));
    luaL_setmetatable(L, "lorx.orxCLOCK");
    *pp = src;
  }
  else
  {
    lua_pushnil(L);
  }
  return 1;
}

LORX_API int lorx_orxCLOCK_INFO_to_luserdata(lua_State *L, orxCLOCK_INFO* src)
{
  if (src)
  {
    orxCLOCK_INFO** pp = lua_newuserdata(L, sizeof(void*));
    luaL_setmetatable(L, "lorx.orxCLOCK_INFO");
    *pp = src;
  }
  else
  {
    lua_pushnil(L);
  }
  return 1;
}

LORX_API int lorx_orxANIMPOINTER_to_luserdata(lua_State *L, orxANIMPOINTER* src)
{
  if (src)
  {
    orxANIMPOINTER** pp = lua_newuserdata(L, sizeof(void*));
    luaL_setmetatable(L, "lorx.orxANIMPOINTER");
    *pp = src;
  }
  else
  {
    lua_pushnil(L);
  }
  return 1;
}

LORX_API int lorx_orxANIMSET_to_luserdata(lua_State *L, orxANIMSET* src)
{
  if (src)
  {
    orxANIMSET** pp = lua_newuserdata(L, sizeof(void*));
    luaL_setmetatable(L, "lorx.orxANIMSET");
    *pp = src;
  }
  else
  {
    lua_pushnil(L);
  }
  return 1;
}

LORX_API int lorx_orxANIMSET_LINK_TABLE_to_luserdata(lua_State *L, orxANIMSET_LINK_TABLE* src)
{
  if (src)
  {
    orxANIMSET_LINK_TABLE** pp = lua_newuserdata(L, sizeof(void*));
    luaL_setmetatable(L, "lorx.orxANIMSET_LINK_TABLE");
    *pp = src;
  }
  else
  {
    lua_pushnil(L);
  }
  return 1;
}

LORX_API int lorx_orxANIM_to_luserdata(lua_State *L, orxANIM* src)
{
  if (src)
  {
    orxANIM** pp = lua_newuserdata(L, sizeof(void*));
    luaL_setmetatable(L, "lorx.orxANIM");
    *pp = src;
  }
  else
  {
    lua_pushnil(L);
  }
  return 1;
}

LORX_API int lorx_orxSHADERPOINTER_to_luserdata(lua_State *L, orxSHADERPOINTER* src)
{
  if (src)
  {
    orxSHADERPOINTER** pp = lua_newuserdata(L, sizeof(void*));
    luaL_setmetatable(L, "lorx.orxSHADERPOINTER");
    *pp = src;
  }
  else
  {
    lua_pushnil(L);
  }
  return 1;
}

LORX_API int lorx_orxSHADER_to_luserdata(lua_State *L, orxSHADER* src)
{
  if (src)
  {
    orxSHADER** pp = lua_newuserdata(L, sizeof(void*));
    luaL_setmetatable(L, "lorx.orxSHADER");
    *pp = src;
  }
  else
  {
    lua_pushnil(L);
  }
  return 1;
}

LORX_API int lorx_orxVIEWPORT_to_luserdata(lua_State *L, orxVIEWPORT* src)
{
  if (src)
  {
    orxVIEWPORT** pp = lua_newuserdata(L, sizeof(void*));
    luaL_setmetatable(L, "lorx.orxVIEWPORT");
    *pp = src;
  }
  else
  {
    lua_pushnil(L);
  }
  return 1;
}

LORX_API int lorx_orxCAMERA_to_luserdata(lua_State *L, orxCAMERA* src)
{
  if (src)
  {
    orxCAMERA** pp = lua_newuserdata(L, sizeof(void*));
    luaL_setmetatable(L, "lorx.orxCAMERA");
    *pp = src;
  }
  else
  {
    lua_pushnil(L);
  }
  return 1;
}

LORX_API int lorx_orxBITMAP_to_luserdata(lua_State *L, orxBITMAP* src)
{
  if (src)
  {
    orxBITMAP** pp = lua_newuserdata(L, sizeof(void*));
    luaL_setmetatable(L, "lorx.orxBITMAP");
    *pp = src;
  }
  else
  {
    lua_pushnil(L);
  }
  return 1;
}

LORX_API int lorx_orxDISPLAY_MESH_to_luserdata(lua_State *L, orxDISPLAY_MESH* src)
{
  if (src)
  {
    orxDISPLAY_MESH** pp = lua_newuserdata(L, sizeof(void*));
    luaL_setmetatable(L, "lorx.orxDISPLAY_MESH");
    *pp = src;
  }
  else
  {
    lua_pushnil(L);
  }
  return 1;
}

LORX_API int lorx_orxCHARACTER_MAP_to_luserdata(lua_State *L, orxCHARACTER_MAP* src)
{
  if (src)
  {
    orxCHARACTER_MAP** pp = lua_newuserdata(L, sizeof(void*));
    luaL_setmetatable(L, "lorx.orxCHARACTER_MAP");
    *pp = src;
  }
  else
  {
    lua_pushnil(L);
  }
  return 1;
}

LORX_API int lorx_orxFONT_to_luserdata(lua_State *L, orxFONT* src)
{
  if (src)
  {
    orxFONT** pp = lua_newuserdata(L, sizeof(void*));
    luaL_setmetatable(L, "lorx.orxFONT");
    *pp = src;
  }
  else
  {
    lua_pushnil(L);
  }
  return 1;
}

LORX_API int lorx_orxTEXTURE_to_luserdata(lua_State *L, orxTEXTURE* src)
{
  if (src)
  {
    orxTEXTURE** pp = lua_newuserdata(L, sizeof(void*));
    luaL_setmetatable(L, "lorx.orxTEXTURE");
    *pp = src;
  }
  else
  {
    lua_pushnil(L);
  }
  return 1;
}

LORX_API int lorx_orxTEXT_to_luserdata(lua_State *L, orxTEXT* src)
{
  if (src)
  {
    orxTEXT** pp = lua_newuserdata(L, sizeof(void*));
    luaL_setmetatable(L, "lorx.orxTEXT");
    *pp = src;
  }
  else
  {
    lua_pushnil(L);
  }
  return 1;
}

LORX_API int lorx_orxGRAPHIC_to_luserdata(lua_State *L, orxGRAPHIC* src)
{
  if (src)
  {
    orxGRAPHIC** pp = lua_newuserdata(L, sizeof(void*));
    luaL_setmetatable(L, "lorx.orxGRAPHIC");
    *pp = src;
  }
  else
  {
    lua_pushnil(L);
  }
  return 1;
}

LORX_API int lorx_orxBODY_to_luserdata(lua_State *L, orxBODY* src)
{
  if (src)
  {
    orxBODY** pp = lua_newuserdata(L, sizeof(void*));
    luaL_setmetatable(L, "lorx.orxBODY");
    *pp = src;
  }
  else
  {
    lua_pushnil(L);
  }
  return 1;
}

LORX_API int lorx_orxBODY_PART_to_luserdata(lua_State *L, orxBODY_PART* src)
{
  if (src)
  {
    orxBODY_PART** pp = lua_newuserdata(L, sizeof(void*));
    luaL_setmetatable(L, "lorx.orxBODY_PART");
    *pp = src;
  }
  else
  {
    lua_pushnil(L);
  }
  return 1;
}

LORX_API int lorx_orxBODY_JOINT_to_luserdata(lua_State *L, orxBODY_JOINT* src)
{
  if (src)
  {
    orxBODY_JOINT** pp = lua_newuserdata(L, sizeof(void*));
    luaL_setmetatable(L, "lorx.orxBODY_JOINT");
    *pp = src;
  }
  else
  {
    lua_pushnil(L);
  }
  return 1;
}

LORX_API int lorx_orxPHYSICS_BODY_to_luserdata(lua_State *L, orxPHYSICS_BODY* src)
{
  if (src)
  {
    orxPHYSICS_BODY** pp = lua_newuserdata(L, sizeof(void*));
    luaL_setmetatable(L, "lorx.orxPHYSICS_BODY");
    *pp = src;
  }
  else
  {
    lua_pushnil(L);
  }
  return 1;
}

LORX_API int lorx_orxPHYSICS_BODY_PART_to_luserdata(lua_State *L, orxPHYSICS_BODY_PART* src)
{
  if (src)
  {
    orxPHYSICS_BODY_PART** pp = lua_newuserdata(L, sizeof(void*));
    luaL_setmetatable(L, "lorx.orxPHYSICS_BODY_PART");
    *pp = src;
  }
  else
  {
    lua_pushnil(L);
  }
  return 1;
}

LORX_API int lorx_orxPHYSICS_BODY_JOINT_to_luserdata(lua_State *L, orxPHYSICS_BODY_JOINT* src)
{
  if (src)
  {
    orxPHYSICS_BODY_JOINT** pp = lua_newuserdata(L, sizeof(void*));
    luaL_setmetatable(L, "lorx.orxPHYSICS_BODY_JOINT");
    *pp = src;
  }
  else
  {
    lua_pushnil(L);
  }
  return 1;
}

LORX_API int lorx_orxSOUNDSYSTEM_SOUND_to_luserdata(lua_State *L, orxSOUNDSYSTEM_SOUND* src)
{
  if (src)
  {
    orxSOUNDSYSTEM_SOUND** pp = lua_newuserdata(L, sizeof(void*));
    luaL_setmetatable(L, "lorx.orxSOUNDSYSTEM_SOUND");
    *pp = src;
  }
  else
  {
    lua_pushnil(L);
  }
  return 1;
}

LORX_API int lorx_orxSOUNDSYSTEM_SAMPLE_to_luserdata(lua_State *L, orxSOUNDSYSTEM_SAMPLE* src)
{
  if (src)
  {
    orxSOUNDSYSTEM_SAMPLE** pp = lua_newuserdata(L, sizeof(void*));
    luaL_setmetatable(L, "lorx.orxSOUNDSYSTEM_SAMPLE");
    *pp = src;
  }
  else
  {
    lua_pushnil(L);
  }
  return 1;
}

LORX_API int lorx_orxSOUND_to_luserdata(lua_State *L, orxSOUND* src)
{
  if (src)
  {
    orxSOUND** pp = lua_newuserdata(L, sizeof(void*));
    luaL_setmetatable(L, "lorx.orxSOUND");
    *pp = src;
  }
  else
  {
    lua_pushnil(L);
  }
  return 1;
}

LORX_API int lorx_orxSOUND_STREAM_INFO_to_luserdata(lua_State *L, orxSOUND_STREAM_INFO* src)
{
  if (src)
  {
    orxSOUND_STREAM_INFO** pp = lua_newuserdata(L, sizeof(void*));
    luaL_setmetatable(L, "lorx.orxSOUND_STREAM_INFO");
    *pp = src;
  }
  else
  {
    lua_pushnil(L);
  }
  return 1;
}

LORX_API int lorx_orxSOUND_STREAM_PACKET_to_luserdata(lua_State *L, orxSOUND_STREAM_PACKET* src)
{
  if (src)
  {
    orxSOUND_STREAM_PACKET** pp = lua_newuserdata(L, sizeof(void*));
    luaL_setmetatable(L, "lorx.orxSOUND_STREAM_PACKET");
    *pp = src;
  }
  else
  {
    lua_pushnil(L);
  }
  return 1;
}

LORX_API int lorx_orxSOUNDPOINTER_to_luserdata(lua_State *L, orxSOUNDPOINTER* src)
{
  if (src)
  {
    orxSOUNDPOINTER** pp = lua_newuserdata(L, sizeof(void*));
    luaL_setmetatable(L, "lorx.orxSOUNDPOINTER");
    *pp = src;
  }
  else
  {
    lua_pushnil(L);
  }
  return 1;
}

LORX_API int lorx_orxSTRUCTURE_to_luserdata(lua_State *L, orxSTRUCTURE* src)
{
  if (src)
  {
    orxSTRUCTURE** pp = lua_newuserdata(L, sizeof(void*));
    luaL_setmetatable(L, "lorx.orxSTRUCTURE");
    *pp = src;
  }
  else
  {
    lua_pushnil(L);
  }
  return 1;
}

LORX_API int lorx_orxSPAWNER_to_luserdata(lua_State *L, orxSPAWNER* src)
{
  if (src)
  {
    orxSPAWNER** pp = lua_newuserdata(L, sizeof(void*));
    luaL_setmetatable(L, "lorx.orxSPAWNER");
    *pp = src;
  }
  else
  {
    lua_pushnil(L);
  }
  return 1;
}

LORX_API int lorx_orxFRAME_to_luserdata(lua_State *L, orxFRAME* src)
{
  if (src)
  {
    orxFRAME** pp = lua_newuserdata(L, sizeof(void*));
    luaL_setmetatable(L, "lorx.orxFRAME");
    *pp = src;
  }
  else
  {
    lua_pushnil(L);
  }
  return 1;
}

LORX_API int lorx_orxFXPOINTER_to_luserdata(lua_State *L, orxFXPOINTER* src)
{
  if (src)
  {
    orxFXPOINTER** pp = lua_newuserdata(L, sizeof(void*));
    luaL_setmetatable(L, "lorx.orxFXPOINTER");
    *pp = src;
  }
  else
  {
    lua_pushnil(L);
  }
  return 1;
}

LORX_API int lorx_orxOBJECT_to_luserdata(lua_State *L, orxOBJECT* src)
{
  if (src)
  {
    orxOBJECT** pp = lua_newuserdata(L, sizeof(void*));
    luaL_setmetatable(L, "lorx.orxOBJECT");
    *pp = src;
  }
  else
  {
    lua_pushnil(L);
  }
  return 1;
}

LORX_API int lorx_orxFX_to_luserdata(lua_State *L, orxFX* src)
{
  if (src)
  {
    orxFX** pp = lua_newuserdata(L, sizeof(void*));
    luaL_setmetatable(L, "lorx.orxFX");
    *pp = src;
  }
  else
  {
    lua_pushnil(L);
  }
  return 1;
}

LORX_API int lorx_orxTIMELINE_to_luserdata(lua_State *L, orxTIMELINE* src)
{
  if (src)
  {
    orxTIMELINE** pp = lua_newuserdata(L, sizeof(void*));
    luaL_setmetatable(L, "lorx.orxTIMELINE");
    *pp = src;
  }
  else
  {
    lua_pushnil(L);
  }
  return 1;
}


/*
 * Conversion functions for converting from Orx types (pointers) to lua userdata (const)
 */
LORX_API int lorx_orxFILE_to_luserdata_const(lua_State *L, const orxFILE* src)
{
  if (src)
  {
    const orxFILE** pp = lua_newuserdata(L, sizeof(void*));
    luaL_setmetatable(L, "lorx.orxFILE#");
    *pp = src;
  }
  else
  {
    lua_pushnil(L);
  }
  return 1;
}

LORX_API int lorx_orxTHREAD_SEMAPHORE_to_luserdata_const(lua_State *L, const orxTHREAD_SEMAPHORE* src)
{
  if (src)
  {
    const orxTHREAD_SEMAPHORE** pp = lua_newuserdata(L, sizeof(void*));
    luaL_setmetatable(L, "lorx.orxTHREAD_SEMAPHORE#");
    *pp = src;
  }
  else
  {
    lua_pushnil(L);
  }
  return 1;
}

LORX_API int lorx_orxCLOCK_to_luserdata_const(lua_State *L, const orxCLOCK* src)
{
  if (src)
  {
    const orxCLOCK** pp = lua_newuserdata(L, sizeof(void*));
    luaL_setmetatable(L, "lorx.orxCLOCK#");
    *pp = src;
  }
  else
  {
    lua_pushnil(L);
  }
  return 1;
}

LORX_API int lorx_orxCLOCK_INFO_to_luserdata_const(lua_State *L, const orxCLOCK_INFO* src)
{
  if (src)
  {
    const orxCLOCK_INFO** pp = lua_newuserdata(L, sizeof(void*));
    luaL_setmetatable(L, "lorx.orxCLOCK_INFO#");
    *pp = src;
  }
  else
  {
    lua_pushnil(L);
  }
  return 1;
}

LORX_API int lorx_orxANIMPOINTER_to_luserdata_const(lua_State *L, const orxANIMPOINTER* src)
{
  if (src)
  {
    const orxANIMPOINTER** pp = lua_newuserdata(L, sizeof(void*));
    luaL_setmetatable(L, "lorx.orxANIMPOINTER#");
    *pp = src;
  }
  else
  {
    lua_pushnil(L);
  }
  return 1;
}

LORX_API int lorx_orxANIMSET_to_luserdata_const(lua_State *L, const orxANIMSET* src)
{
  if (src)
  {
    const orxANIMSET** pp = lua_newuserdata(L, sizeof(void*));
    luaL_setmetatable(L, "lorx.orxANIMSET#");
    *pp = src;
  }
  else
  {
    lua_pushnil(L);
  }
  return 1;
}

LORX_API int lorx_orxANIMSET_LINK_TABLE_to_luserdata_const(lua_State *L, const orxANIMSET_LINK_TABLE* src)
{
  if (src)
  {
    const orxANIMSET_LINK_TABLE** pp = lua_newuserdata(L, sizeof(void*));
    luaL_setmetatable(L, "lorx.orxANIMSET_LINK_TABLE#");
    *pp = src;
  }
  else
  {
    lua_pushnil(L);
  }
  return 1;
}

LORX_API int lorx_orxANIM_to_luserdata_const(lua_State *L, const orxANIM* src)
{
  if (src)
  {
    const orxANIM** pp = lua_newuserdata(L, sizeof(void*));
    luaL_setmetatable(L, "lorx.orxANIM#");
    *pp = src;
  }
  else
  {
    lua_pushnil(L);
  }
  return 1;
}

LORX_API int lorx_orxSHADERPOINTER_to_luserdata_const(lua_State *L, const orxSHADERPOINTER* src)
{
  if (src)
  {
    const orxSHADERPOINTER** pp = lua_newuserdata(L, sizeof(void*));
    luaL_setmetatable(L, "lorx.orxSHADERPOINTER#");
    *pp = src;
  }
  else
  {
    lua_pushnil(L);
  }
  return 1;
}

LORX_API int lorx_orxSHADER_to_luserdata_const(lua_State *L, const orxSHADER* src)
{
  if (src)
  {
    const orxSHADER** pp = lua_newuserdata(L, sizeof(void*));
    luaL_setmetatable(L, "lorx.orxSHADER#");
    *pp = src;
  }
  else
  {
    lua_pushnil(L);
  }
  return 1;
}

LORX_API int lorx_orxVIEWPORT_to_luserdata_const(lua_State *L, const orxVIEWPORT* src)
{
  if (src)
  {
    const orxVIEWPORT** pp = lua_newuserdata(L, sizeof(void*));
    luaL_setmetatable(L, "lorx.orxVIEWPORT#");
    *pp = src;
  }
  else
  {
    lua_pushnil(L);
  }
  return 1;
}

LORX_API int lorx_orxCAMERA_to_luserdata_const(lua_State *L, const orxCAMERA* src)
{
  if (src)
  {
    const orxCAMERA** pp = lua_newuserdata(L, sizeof(void*));
    luaL_setmetatable(L, "lorx.orxCAMERA#");
    *pp = src;
  }
  else
  {
    lua_pushnil(L);
  }
  return 1;
}

LORX_API int lorx_orxBITMAP_to_luserdata_const(lua_State *L, const orxBITMAP* src)
{
  if (src)
  {
    const orxBITMAP** pp = lua_newuserdata(L, sizeof(void*));
    luaL_setmetatable(L, "lorx.orxBITMAP#");
    *pp = src;
  }
  else
  {
    lua_pushnil(L);
  }
  return 1;
}

LORX_API int lorx_orxDISPLAY_MESH_to_luserdata_const(lua_State *L, const orxDISPLAY_MESH* src)
{
  if (src)
  {
    const orxDISPLAY_MESH** pp = lua_newuserdata(L, sizeof(void*));
    luaL_setmetatable(L, "lorx.orxDISPLAY_MESH#");
    *pp = src;
  }
  else
  {
    lua_pushnil(L);
  }
  return 1;
}

LORX_API int lorx_orxCHARACTER_MAP_to_luserdata_const(lua_State *L, const orxCHARACTER_MAP* src)
{
  if (src)
  {
    const orxCHARACTER_MAP** pp = lua_newuserdata(L, sizeof(void*));
    luaL_setmetatable(L, "lorx.orxCHARACTER_MAP#");
    *pp = src;
  }
  else
  {
    lua_pushnil(L);
  }
  return 1;
}

LORX_API int lorx_orxFONT_to_luserdata_const(lua_State *L, const orxFONT* src)
{
  if (src)
  {
    const orxFONT** pp = lua_newuserdata(L, sizeof(void*));
    luaL_setmetatable(L, "lorx.orxFONT#");
    *pp = src;
  }
  else
  {
    lua_pushnil(L);
  }
  return 1;
}

LORX_API int lorx_orxTEXTURE_to_luserdata_const(lua_State *L, const orxTEXTURE* src)
{
  if (src)
  {
    const orxTEXTURE** pp = lua_newuserdata(L, sizeof(void*));
    luaL_setmetatable(L, "lorx.orxTEXTURE#");
    *pp = src;
  }
  else
  {
    lua_pushnil(L);
  }
  return 1;
}

LORX_API int lorx_orxTEXT_to_luserdata_const(lua_State *L, const orxTEXT* src)
{
  if (src)
  {
    const orxTEXT** pp = lua_newuserdata(L, sizeof(void*));
    luaL_setmetatable(L, "lorx.orxTEXT#");
    *pp = src;
  }
  else
  {
    lua_pushnil(L);
  }
  return 1;
}

LORX_API int lorx_orxGRAPHIC_to_luserdata_const(lua_State *L, const orxGRAPHIC* src)
{
  if (src)
  {
    const orxGRAPHIC** pp = lua_newuserdata(L, sizeof(void*));
    luaL_setmetatable(L, "lorx.orxGRAPHIC#");
    *pp = src;
  }
  else
  {
    lua_pushnil(L);
  }
  return 1;
}

LORX_API int lorx_orxBODY_to_luserdata_const(lua_State *L, const orxBODY* src)
{
  if (src)
  {
    const orxBODY** pp = lua_newuserdata(L, sizeof(void*));
    luaL_setmetatable(L, "lorx.orxBODY#");
    *pp = src;
  }
  else
  {
    lua_pushnil(L);
  }
  return 1;
}

LORX_API int lorx_orxBODY_PART_to_luserdata_const(lua_State *L, const orxBODY_PART* src)
{
  if (src)
  {
    const orxBODY_PART** pp = lua_newuserdata(L, sizeof(void*));
    luaL_setmetatable(L, "lorx.orxBODY_PART#");
    *pp = src;
  }
  else
  {
    lua_pushnil(L);
  }
  return 1;
}

LORX_API int lorx_orxBODY_JOINT_to_luserdata_const(lua_State *L, const orxBODY_JOINT* src)
{
  if (src)
  {
    const orxBODY_JOINT** pp = lua_newuserdata(L, sizeof(void*));
    luaL_setmetatable(L, "lorx.orxBODY_JOINT#");
    *pp = src;
  }
  else
  {
    lua_pushnil(L);
  }
  return 1;
}

LORX_API int lorx_orxPHYSICS_BODY_to_luserdata_const(lua_State *L, const orxPHYSICS_BODY* src)
{
  if (src)
  {
    const orxPHYSICS_BODY** pp = lua_newuserdata(L, sizeof(void*));
    luaL_setmetatable(L, "lorx.orxPHYSICS_BODY#");
    *pp = src;
  }
  else
  {
    lua_pushnil(L);
  }
  return 1;
}

LORX_API int lorx_orxPHYSICS_BODY_PART_to_luserdata_const(lua_State *L, const orxPHYSICS_BODY_PART* src)
{
  if (src)
  {
    const orxPHYSICS_BODY_PART** pp = lua_newuserdata(L, sizeof(void*));
    luaL_setmetatable(L, "lorx.orxPHYSICS_BODY_PART#");
    *pp = src;
  }
  else
  {
    lua_pushnil(L);
  }
  return 1;
}

LORX_API int lorx_orxPHYSICS_BODY_JOINT_to_luserdata_const(lua_State *L, const orxPHYSICS_BODY_JOINT* src)
{
  if (src)
  {
    const orxPHYSICS_BODY_JOINT** pp = lua_newuserdata(L, sizeof(void*));
    luaL_setmetatable(L, "lorx.orxPHYSICS_BODY_JOINT#");
    *pp = src;
  }
  else
  {
    lua_pushnil(L);
  }
  return 1;
}

LORX_API int lorx_orxSOUNDSYSTEM_SOUND_to_luserdata_const(lua_State *L, const orxSOUNDSYSTEM_SOUND* src)
{
  if (src)
  {
    const orxSOUNDSYSTEM_SOUND** pp = lua_newuserdata(L, sizeof(void*));
    luaL_setmetatable(L, "lorx.orxSOUNDSYSTEM_SOUND#");
    *pp = src;
  }
  else
  {
    lua_pushnil(L);
  }
  return 1;
}

LORX_API int lorx_orxSOUNDSYSTEM_SAMPLE_to_luserdata_const(lua_State *L, const orxSOUNDSYSTEM_SAMPLE* src)
{
  if (src)
  {
    const orxSOUNDSYSTEM_SAMPLE** pp = lua_newuserdata(L, sizeof(void*));
    luaL_setmetatable(L, "lorx.orxSOUNDSYSTEM_SAMPLE#");
    *pp = src;
  }
  else
  {
    lua_pushnil(L);
  }
  return 1;
}

LORX_API int lorx_orxSOUND_to_luserdata_const(lua_State *L, const orxSOUND* src)
{
  if (src)
  {
    const orxSOUND** pp = lua_newuserdata(L, sizeof(void*));
    luaL_setmetatable(L, "lorx.orxSOUND#");
    *pp = src;
  }
  else
  {
    lua_pushnil(L);
  }
  return 1;
}

LORX_API int lorx_orxSOUND_STREAM_INFO_to_luserdata_const(lua_State *L, const orxSOUND_STREAM_INFO* src)
{
  if (src)
  {
    const orxSOUND_STREAM_INFO** pp = lua_newuserdata(L, sizeof(void*));
    luaL_setmetatable(L, "lorx.orxSOUND_STREAM_INFO#");
    *pp = src;
  }
  else
  {
    lua_pushnil(L);
  }
  return 1;
}

LORX_API int lorx_orxSOUND_STREAM_PACKET_to_luserdata_const(lua_State *L, const orxSOUND_STREAM_PACKET* src)
{
  if (src)
  {
    const orxSOUND_STREAM_PACKET** pp = lua_newuserdata(L, sizeof(void*));
    luaL_setmetatable(L, "lorx.orxSOUND_STREAM_PACKET#");
    *pp = src;
  }
  else
  {
    lua_pushnil(L);
  }
  return 1;
}

LORX_API int lorx_orxSOUNDPOINTER_to_luserdata_const(lua_State *L, const orxSOUNDPOINTER* src)
{
  if (src)
  {
    const orxSOUNDPOINTER** pp = lua_newuserdata(L, sizeof(void*));
    luaL_setmetatable(L, "lorx.orxSOUNDPOINTER#");
    *pp = src;
  }
  else
  {
    lua_pushnil(L);
  }
  return 1;
}

LORX_API int lorx_orxSTRUCTURE_to_luserdata_const(lua_State *L, const orxSTRUCTURE* src)
{
  if (src)
  {
    const orxSTRUCTURE** pp = lua_newuserdata(L, sizeof(void*));
    luaL_setmetatable(L, "lorx.orxSTRUCTURE#");
    *pp = src;
  }
  else
  {
    lua_pushnil(L);
  }
  return 1;
}

LORX_API int lorx_orxSPAWNER_to_luserdata_const(lua_State *L, const orxSPAWNER* src)
{
  if (src)
  {
    const orxSPAWNER** pp = lua_newuserdata(L, sizeof(void*));
    luaL_setmetatable(L, "lorx.orxSPAWNER#");
    *pp = src;
  }
  else
  {
    lua_pushnil(L);
  }
  return 1;
}

LORX_API int lorx_orxFRAME_to_luserdata_const(lua_State *L, const orxFRAME* src)
{
  if (src)
  {
    const orxFRAME** pp = lua_newuserdata(L, sizeof(void*));
    luaL_setmetatable(L, "lorx.orxFRAME#");
    *pp = src;
  }
  else
  {
    lua_pushnil(L);
  }
  return 1;
}

LORX_API int lorx_orxFXPOINTER_to_luserdata_const(lua_State *L, const orxFXPOINTER* src)
{
  if (src)
  {
    const orxFXPOINTER** pp = lua_newuserdata(L, sizeof(void*));
    luaL_setmetatable(L, "lorx.orxFXPOINTER#");
    *pp = src;
  }
  else
  {
    lua_pushnil(L);
  }
  return 1;
}

LORX_API int lorx_orxOBJECT_to_luserdata_const(lua_State *L, const orxOBJECT* src)
{
  if (src)
  {
    const orxOBJECT** pp = lua_newuserdata(L, sizeof(void*));
    luaL_setmetatable(L, "lorx.orxOBJECT#");
    *pp = src;
  }
  else
  {
    lua_pushnil(L);
  }
  return 1;
}

LORX_API int lorx_orxFX_to_luserdata_const(lua_State *L, const orxFX* src)
{
  if (src)
  {
    const orxFX** pp = lua_newuserdata(L, sizeof(void*));
    luaL_setmetatable(L, "lorx.orxFX#");
    *pp = src;
  }
  else
  {
    lua_pushnil(L);
  }
  return 1;
}

LORX_API int lorx_orxTIMELINE_to_luserdata_const(lua_State *L, const orxTIMELINE* src)
{
  if (src)
  {
    const orxTIMELINE** pp = lua_newuserdata(L, sizeof(void*));
    luaL_setmetatable(L, "lorx.orxTIMELINE#");
    *pp = src;
  }
  else
  {
    lua_pushnil(L);
  }
  return 1;
}


/*
 * Conversion functions for converting from Orx types (structs) to lua userdata (non-const only)
 */
LORX_API int lorx_orxFILE_INFO_to_luserdata_struct(lua_State *L, const orxFILE_INFO *src)
{
  if (src)
  {
    orxFILE_INFO** pp = lua_newuserdata(L, sizeof(orxFILE_INFO*)+sizeof(orxFILE_INFO));
    *pp = (orxFILE_INFO*)(pp + 1);
    luaL_setmetatable(L, "lorx.orxFILE_INFO");
    memcpy(*pp, src, sizeof(orxFILE_INFO));
  }
  else
  {
    lua_pushnil(L);
  }
  return 1;
}

LORX_API int lorx_orxCOMMAND_VAR_to_luserdata_struct(lua_State *L, const orxCOMMAND_VAR *src)
{
  if (src)
  {
    orxCOMMAND_VAR** pp = lua_newuserdata(L, sizeof(orxCOMMAND_VAR*)+sizeof(orxCOMMAND_VAR));
    *pp = (orxCOMMAND_VAR*)(pp + 1);
    luaL_setmetatable(L, "lorx.orxCOMMAND_VAR");
    memcpy(*pp, src, sizeof(orxCOMMAND_VAR));
  }
  else
  {
    lua_pushnil(L);
  }
  return 1;
}

LORX_API int lorx_orxANIM_CUSTOM_EVENT_to_luserdata_struct(lua_State *L, const orxANIM_CUSTOM_EVENT *src)
{
  if (src)
  {
    orxANIM_CUSTOM_EVENT** pp = lua_newuserdata(L, sizeof(orxANIM_CUSTOM_EVENT*)+sizeof(orxANIM_CUSTOM_EVENT));
    *pp = (orxANIM_CUSTOM_EVENT*)(pp + 1);
    luaL_setmetatable(L, "lorx.orxANIM_CUSTOM_EVENT");
    memcpy(*pp, src, sizeof(orxANIM_CUSTOM_EVENT));
  }
  else
  {
    lua_pushnil(L);
  }
  return 1;
}

LORX_API int lorx_orxOBOX_to_luserdata_struct(lua_State *L, const orxOBOX *src)
{
  if (src)
  {
    orxOBOX** pp = lua_newuserdata(L, sizeof(orxOBOX*)+sizeof(orxOBOX));
    *pp = (orxOBOX*)(pp + 1);
    luaL_setmetatable(L, "lorx.orxOBOX");
    memcpy(*pp, src, sizeof(orxOBOX));
  }
  else
  {
    lua_pushnil(L);
  }
  return 1;
}

LORX_API int lorx_orxVECTOR_to_luserdata_struct(lua_State *L, const orxVECTOR *src)
{
  if (src)
  {
    orxVECTOR** pp = lua_newuserdata(L, sizeof(orxVECTOR*)+sizeof(orxVECTOR));
    *pp = (orxVECTOR*)(pp + 1);
    luaL_setmetatable(L, "lorx.orxVECTOR");
    memcpy(*pp, src, sizeof(orxVECTOR));
  }
  else
  {
    lua_pushnil(L);
  }
  return 1;
}

LORX_API int lorx_orxAABOX_to_luserdata_struct(lua_State *L, const orxAABOX *src)
{
  if (src)
  {
    orxAABOX** pp = lua_newuserdata(L, sizeof(orxAABOX*)+sizeof(orxAABOX));
    *pp = (orxAABOX*)(pp + 1);
    luaL_setmetatable(L, "lorx.orxAABOX");
    memcpy(*pp, src, sizeof(orxAABOX));
  }
  else
  {
    lua_pushnil(L);
  }
  return 1;
}

LORX_API int lorx_orxRGBA_to_luserdata_struct(lua_State *L, const orxRGBA *src)
{
  if (src)
  {
    orxRGBA** pp = lua_newuserdata(L, sizeof(orxRGBA*)+sizeof(orxRGBA));
    *pp = (orxRGBA*)(pp + 1);
    luaL_setmetatable(L, "lorx.orxRGBA");
    memcpy(*pp, src, sizeof(orxRGBA));
  }
  else
  {
    lua_pushnil(L);
  }
  return 1;
}

LORX_API int lorx_orxDISPLAY_TRANSFORM_to_luserdata_struct(lua_State *L, const orxDISPLAY_TRANSFORM *src)
{
  if (src)
  {
    orxDISPLAY_TRANSFORM** pp = lua_newuserdata(L, sizeof(orxDISPLAY_TRANSFORM*)+sizeof(orxDISPLAY_TRANSFORM));
    *pp = (orxDISPLAY_TRANSFORM*)(pp + 1);
    luaL_setmetatable(L, "lorx.orxDISPLAY_TRANSFORM");
    memcpy(*pp, src, sizeof(orxDISPLAY_TRANSFORM));
  }
  else
  {
    lua_pushnil(L);
  }
  return 1;
}

LORX_API int lorx_orxDISPLAY_VIDEO_MODE_to_luserdata_struct(lua_State *L, const orxDISPLAY_VIDEO_MODE *src)
{
  if (src)
  {
    orxDISPLAY_VIDEO_MODE** pp = lua_newuserdata(L, sizeof(orxDISPLAY_VIDEO_MODE*)+sizeof(orxDISPLAY_VIDEO_MODE));
    *pp = (orxDISPLAY_VIDEO_MODE*)(pp + 1);
    luaL_setmetatable(L, "lorx.orxDISPLAY_VIDEO_MODE");
    memcpy(*pp, src, sizeof(orxDISPLAY_VIDEO_MODE));
  }
  else
  {
    lua_pushnil(L);
  }
  return 1;
}

LORX_API int lorx_orxCHARACTER_GLYPH_to_luserdata_struct(lua_State *L, const orxCHARACTER_GLYPH *src)
{
  if (src)
  {
    orxCHARACTER_GLYPH** pp = lua_newuserdata(L, sizeof(orxCHARACTER_GLYPH*)+sizeof(orxCHARACTER_GLYPH));
    *pp = (orxCHARACTER_GLYPH*)(pp + 1);
    luaL_setmetatable(L, "lorx.orxCHARACTER_GLYPH");
    memcpy(*pp, src, sizeof(orxCHARACTER_GLYPH));
  }
  else
  {
    lua_pushnil(L);
  }
  return 1;
}

LORX_API int lorx_orxCOLOR_to_luserdata_struct(lua_State *L, const orxCOLOR *src)
{
  if (src)
  {
    orxCOLOR** pp = lua_newuserdata(L, sizeof(orxCOLOR*)+sizeof(orxCOLOR));
    *pp = (orxCOLOR*)(pp + 1);
    luaL_setmetatable(L, "lorx.orxCOLOR");
    memcpy(*pp, src, sizeof(orxCOLOR));
  }
  else
  {
    lua_pushnil(L);
  }
  return 1;
}

LORX_API int lorx_orxSOUND_FILTER_DATA_to_luserdata_struct(lua_State *L, const orxSOUND_FILTER_DATA *src)
{
  if (src)
  {
    orxSOUND_FILTER_DATA** pp = lua_newuserdata(L, sizeof(orxSOUND_FILTER_DATA*)+sizeof(orxSOUND_FILTER_DATA));
    *pp = (orxSOUND_FILTER_DATA*)(pp + 1);
    luaL_setmetatable(L, "lorx.orxSOUND_FILTER_DATA");
    memcpy(*pp, src, sizeof(orxSOUND_FILTER_DATA));
  }
  else
  {
    lua_pushnil(L);
  }
  return 1;
}


/*
 * Conversion functions for converting from lua userdata to Orx types (pointers)
 */
LORX_API orxFILE_INFO* lorx_luserdata_to_orxFILE_INFO(lua_State *L, int i)
{
  orxFILE_INFO* _retval = NULL;
  if (lua_isnil(L, i))
  {
    _retval = NULL;
  }
  else
  {
    orxFILE_INFO** pp;
    if ((pp = luaL_testudata(L, i, "lorx.orxFILE_INFO")))
    {
      _retval = *pp;
    }
    else
    {
      luaL_error(L, "expect userdata of 'lorx.orxFILE_INFO'!");
    }
  }
  return _retval;
}

LORX_API orxCOMMAND_VAR* lorx_luserdata_to_orxCOMMAND_VAR(lua_State *L, int i)
{
  orxCOMMAND_VAR* _retval = NULL;
  if (lua_isnil(L, i))
  {
    _retval = NULL;
  }
  else
  {
    orxCOMMAND_VAR** pp;
    if ((pp = luaL_testudata(L, i, "lorx.orxCOMMAND_VAR")))
    {
      _retval = *pp;
    }
    else
    {
      luaL_error(L, "expect userdata of 'lorx.orxCOMMAND_VAR'!");
    }
  }
  return _retval;
}

LORX_API orxANIM_CUSTOM_EVENT* lorx_luserdata_to_orxANIM_CUSTOM_EVENT(lua_State *L, int i)
{
  orxANIM_CUSTOM_EVENT* _retval = NULL;
  if (lua_isnil(L, i))
  {
    _retval = NULL;
  }
  else
  {
    orxANIM_CUSTOM_EVENT** pp;
    if ((pp = luaL_testudata(L, i, "lorx.orxANIM_CUSTOM_EVENT")))
    {
      _retval = *pp;
    }
    else
    {
      luaL_error(L, "expect userdata of 'lorx.orxANIM_CUSTOM_EVENT'!");
    }
  }
  return _retval;
}

LORX_API orxOBOX* lorx_luserdata_to_orxOBOX(lua_State *L, int i)
{
  orxOBOX* _retval = NULL;
  if (lua_isnil(L, i))
  {
    _retval = NULL;
  }
  else
  {
    orxOBOX** pp;
    if ((pp = luaL_testudata(L, i, "lorx.orxOBOX")))
    {
      _retval = *pp;
    }
    else
    {
      luaL_error(L, "expect userdata of 'lorx.orxOBOX'!");
    }
  }
  return _retval;
}

LORX_API orxVECTOR* lorx_luserdata_to_orxVECTOR(lua_State *L, int i)
{
  orxVECTOR* _retval = NULL;
  if (lua_isnil(L, i))
  {
    _retval = NULL;
  }
  else
  {
    orxVECTOR** pp;
    if ((pp = luaL_testudata(L, i, "lorx.orxVECTOR")))
    {
      _retval = *pp;
    }
    else
    {
      luaL_error(L, "expect userdata of 'lorx.orxVECTOR'!");
    }
  }
  return _retval;
}

LORX_API orxAABOX* lorx_luserdata_to_orxAABOX(lua_State *L, int i)
{
  orxAABOX* _retval = NULL;
  if (lua_isnil(L, i))
  {
    _retval = NULL;
  }
  else
  {
    orxAABOX** pp;
    if ((pp = luaL_testudata(L, i, "lorx.orxAABOX")))
    {
      _retval = *pp;
    }
    else
    {
      luaL_error(L, "expect userdata of 'lorx.orxAABOX'!");
    }
  }
  return _retval;
}

LORX_API orxRGBA* lorx_luserdata_to_orxRGBA(lua_State *L, int i)
{
  orxRGBA* _retval = NULL;
  if (lua_isnil(L, i))
  {
    _retval = NULL;
  }
  else
  {
    orxRGBA** pp;
    if ((pp = luaL_testudata(L, i, "lorx.orxRGBA")))
    {
      _retval = *pp;
    }
    else
    {
      luaL_error(L, "expect userdata of 'lorx.orxRGBA'!");
    }
  }
  return _retval;
}

LORX_API orxDISPLAY_TRANSFORM* lorx_luserdata_to_orxDISPLAY_TRANSFORM(lua_State *L, int i)
{
  orxDISPLAY_TRANSFORM* _retval = NULL;
  if (lua_isnil(L, i))
  {
    _retval = NULL;
  }
  else
  {
    orxDISPLAY_TRANSFORM** pp;
    if ((pp = luaL_testudata(L, i, "lorx.orxDISPLAY_TRANSFORM")))
    {
      _retval = *pp;
    }
    else
    {
      luaL_error(L, "expect userdata of 'lorx.orxDISPLAY_TRANSFORM'!");
    }
  }
  return _retval;
}

LORX_API orxDISPLAY_VIDEO_MODE* lorx_luserdata_to_orxDISPLAY_VIDEO_MODE(lua_State *L, int i)
{
  orxDISPLAY_VIDEO_MODE* _retval = NULL;
  if (lua_isnil(L, i))
  {
    _retval = NULL;
  }
  else
  {
    orxDISPLAY_VIDEO_MODE** pp;
    if ((pp = luaL_testudata(L, i, "lorx.orxDISPLAY_VIDEO_MODE")))
    {
      _retval = *pp;
    }
    else
    {
      luaL_error(L, "expect userdata of 'lorx.orxDISPLAY_VIDEO_MODE'!");
    }
  }
  return _retval;
}

LORX_API orxCHARACTER_GLYPH* lorx_luserdata_to_orxCHARACTER_GLYPH(lua_State *L, int i)
{
  orxCHARACTER_GLYPH* _retval = NULL;
  if (lua_isnil(L, i))
  {
    _retval = NULL;
  }
  else
  {
    orxCHARACTER_GLYPH** pp;
    if ((pp = luaL_testudata(L, i, "lorx.orxCHARACTER_GLYPH")))
    {
      _retval = *pp;
    }
    else
    {
      luaL_error(L, "expect userdata of 'lorx.orxCHARACTER_GLYPH'!");
    }
  }
  return _retval;
}

LORX_API orxCOLOR* lorx_luserdata_to_orxCOLOR(lua_State *L, int i)
{
  orxCOLOR* _retval = NULL;
  if (lua_isnil(L, i))
  {
    _retval = NULL;
  }
  else
  {
    orxCOLOR** pp;
    if ((pp = luaL_testudata(L, i, "lorx.orxCOLOR")))
    {
      _retval = *pp;
    }
    else
    {
      luaL_error(L, "expect userdata of 'lorx.orxCOLOR'!");
    }
  }
  return _retval;
}

LORX_API orxSOUND_FILTER_DATA* lorx_luserdata_to_orxSOUND_FILTER_DATA(lua_State *L, int i)
{
  orxSOUND_FILTER_DATA* _retval = NULL;
  if (lua_isnil(L, i))
  {
    _retval = NULL;
  }
  else
  {
    orxSOUND_FILTER_DATA** pp;
    if ((pp = luaL_testudata(L, i, "lorx.orxSOUND_FILTER_DATA")))
    {
      _retval = *pp;
    }
    else
    {
      luaL_error(L, "expect userdata of 'lorx.orxSOUND_FILTER_DATA'!");
    }
  }
  return _retval;
}

LORX_API orxFILE* lorx_luserdata_to_orxFILE(lua_State *L, int i)
{
  orxFILE* _retval = NULL;
  if (lua_isnil(L, i))
  {
    _retval = NULL;
  }
  else
  {
    orxFILE** pp;
    if ((pp = luaL_testudata(L, i, "lorx.orxFILE")))
    {
      _retval = *pp;
    }
    else
    {
      luaL_error(L, "expect userdata of 'lorx.orxFILE'!");
    }
  }
  return _retval;
}

LORX_API orxTHREAD_SEMAPHORE* lorx_luserdata_to_orxTHREAD_SEMAPHORE(lua_State *L, int i)
{
  orxTHREAD_SEMAPHORE* _retval = NULL;
  if (lua_isnil(L, i))
  {
    _retval = NULL;
  }
  else
  {
    orxTHREAD_SEMAPHORE** pp;
    if ((pp = luaL_testudata(L, i, "lorx.orxTHREAD_SEMAPHORE")))
    {
      _retval = *pp;
    }
    else
    {
      luaL_error(L, "expect userdata of 'lorx.orxTHREAD_SEMAPHORE'!");
    }
  }
  return _retval;
}

LORX_API orxCLOCK* lorx_luserdata_to_orxCLOCK(lua_State *L, int i)
{
  orxCLOCK* _retval = NULL;
  if (lua_isnil(L, i))
  {
    _retval = NULL;
  }
  else
  {
    orxCLOCK** pp;
    if ((pp = luaL_testudata(L, i, "lorx.orxCLOCK")))
    {
      _retval = *pp;
    }
    else
    {
      luaL_error(L, "expect userdata of 'lorx.orxCLOCK'!");
    }
  }
  return _retval;
}

LORX_API orxCLOCK_INFO* lorx_luserdata_to_orxCLOCK_INFO(lua_State *L, int i)
{
  orxCLOCK_INFO* _retval = NULL;
  if (lua_isnil(L, i))
  {
    _retval = NULL;
  }
  else
  {
    orxCLOCK_INFO** pp;
    if ((pp = luaL_testudata(L, i, "lorx.orxCLOCK_INFO")))
    {
      _retval = *pp;
    }
    else
    {
      luaL_error(L, "expect userdata of 'lorx.orxCLOCK_INFO'!");
    }
  }
  return _retval;
}

LORX_API orxANIMPOINTER* lorx_luserdata_to_orxANIMPOINTER(lua_State *L, int i)
{
  orxANIMPOINTER* _retval = NULL;
  if (lua_isnil(L, i))
  {
    _retval = NULL;
  }
  else
  {
    orxANIMPOINTER** pp;
    if ((pp = luaL_testudata(L, i, "lorx.orxANIMPOINTER")))
    {
      _retval = *pp;
    }
    else
    {
      luaL_error(L, "expect userdata of 'lorx.orxANIMPOINTER'!");
    }
  }
  return _retval;
}

LORX_API orxANIMSET* lorx_luserdata_to_orxANIMSET(lua_State *L, int i)
{
  orxANIMSET* _retval = NULL;
  if (lua_isnil(L, i))
  {
    _retval = NULL;
  }
  else
  {
    orxANIMSET** pp;
    if ((pp = luaL_testudata(L, i, "lorx.orxANIMSET")))
    {
      _retval = *pp;
    }
    else
    {
      luaL_error(L, "expect userdata of 'lorx.orxANIMSET'!");
    }
  }
  return _retval;
}

LORX_API orxANIMSET_LINK_TABLE* lorx_luserdata_to_orxANIMSET_LINK_TABLE(lua_State *L, int i)
{
  orxANIMSET_LINK_TABLE* _retval = NULL;
  if (lua_isnil(L, i))
  {
    _retval = NULL;
  }
  else
  {
    orxANIMSET_LINK_TABLE** pp;
    if ((pp = luaL_testudata(L, i, "lorx.orxANIMSET_LINK_TABLE")))
    {
      _retval = *pp;
    }
    else
    {
      luaL_error(L, "expect userdata of 'lorx.orxANIMSET_LINK_TABLE'!");
    }
  }
  return _retval;
}

LORX_API orxANIM* lorx_luserdata_to_orxANIM(lua_State *L, int i)
{
  orxANIM* _retval = NULL;
  if (lua_isnil(L, i))
  {
    _retval = NULL;
  }
  else
  {
    orxANIM** pp;
    if ((pp = luaL_testudata(L, i, "lorx.orxANIM")))
    {
      _retval = *pp;
    }
    else
    {
      luaL_error(L, "expect userdata of 'lorx.orxANIM'!");
    }
  }
  return _retval;
}

LORX_API orxSHADERPOINTER* lorx_luserdata_to_orxSHADERPOINTER(lua_State *L, int i)
{
  orxSHADERPOINTER* _retval = NULL;
  if (lua_isnil(L, i))
  {
    _retval = NULL;
  }
  else
  {
    orxSHADERPOINTER** pp;
    if ((pp = luaL_testudata(L, i, "lorx.orxSHADERPOINTER")))
    {
      _retval = *pp;
    }
    else
    {
      luaL_error(L, "expect userdata of 'lorx.orxSHADERPOINTER'!");
    }
  }
  return _retval;
}

LORX_API orxSHADER* lorx_luserdata_to_orxSHADER(lua_State *L, int i)
{
  orxSHADER* _retval = NULL;
  if (lua_isnil(L, i))
  {
    _retval = NULL;
  }
  else
  {
    orxSHADER** pp;
    if ((pp = luaL_testudata(L, i, "lorx.orxSHADER")))
    {
      _retval = *pp;
    }
    else
    {
      luaL_error(L, "expect userdata of 'lorx.orxSHADER'!");
    }
  }
  return _retval;
}

LORX_API orxVIEWPORT* lorx_luserdata_to_orxVIEWPORT(lua_State *L, int i)
{
  orxVIEWPORT* _retval = NULL;
  if (lua_isnil(L, i))
  {
    _retval = NULL;
  }
  else
  {
    orxVIEWPORT** pp;
    if ((pp = luaL_testudata(L, i, "lorx.orxVIEWPORT")))
    {
      _retval = *pp;
    }
    else
    {
      luaL_error(L, "expect userdata of 'lorx.orxVIEWPORT'!");
    }
  }
  return _retval;
}

LORX_API orxCAMERA* lorx_luserdata_to_orxCAMERA(lua_State *L, int i)
{
  orxCAMERA* _retval = NULL;
  if (lua_isnil(L, i))
  {
    _retval = NULL;
  }
  else
  {
    orxCAMERA** pp;
    if ((pp = luaL_testudata(L, i, "lorx.orxCAMERA")))
    {
      _retval = *pp;
    }
    else
    {
      luaL_error(L, "expect userdata of 'lorx.orxCAMERA'!");
    }
  }
  return _retval;
}

LORX_API orxBITMAP* lorx_luserdata_to_orxBITMAP(lua_State *L, int i)
{
  orxBITMAP* _retval = NULL;
  if (lua_isnil(L, i))
  {
    _retval = NULL;
  }
  else
  {
    orxBITMAP** pp;
    if ((pp = luaL_testudata(L, i, "lorx.orxBITMAP")))
    {
      _retval = *pp;
    }
    else
    {
      luaL_error(L, "expect userdata of 'lorx.orxBITMAP'!");
    }
  }
  return _retval;
}

LORX_API orxDISPLAY_MESH* lorx_luserdata_to_orxDISPLAY_MESH(lua_State *L, int i)
{
  orxDISPLAY_MESH* _retval = NULL;
  if (lua_isnil(L, i))
  {
    _retval = NULL;
  }
  else
  {
    orxDISPLAY_MESH** pp;
    if ((pp = luaL_testudata(L, i, "lorx.orxDISPLAY_MESH")))
    {
      _retval = *pp;
    }
    else
    {
      luaL_error(L, "expect userdata of 'lorx.orxDISPLAY_MESH'!");
    }
  }
  return _retval;
}

LORX_API orxCHARACTER_MAP* lorx_luserdata_to_orxCHARACTER_MAP(lua_State *L, int i)
{
  orxCHARACTER_MAP* _retval = NULL;
  if (lua_isnil(L, i))
  {
    _retval = NULL;
  }
  else
  {
    orxCHARACTER_MAP** pp;
    if ((pp = luaL_testudata(L, i, "lorx.orxCHARACTER_MAP")))
    {
      _retval = *pp;
    }
    else
    {
      luaL_error(L, "expect userdata of 'lorx.orxCHARACTER_MAP'!");
    }
  }
  return _retval;
}

LORX_API orxFONT* lorx_luserdata_to_orxFONT(lua_State *L, int i)
{
  orxFONT* _retval = NULL;
  if (lua_isnil(L, i))
  {
    _retval = NULL;
  }
  else
  {
    orxFONT** pp;
    if ((pp = luaL_testudata(L, i, "lorx.orxFONT")))
    {
      _retval = *pp;
    }
    else
    {
      luaL_error(L, "expect userdata of 'lorx.orxFONT'!");
    }
  }
  return _retval;
}

LORX_API orxTEXTURE* lorx_luserdata_to_orxTEXTURE(lua_State *L, int i)
{
  orxTEXTURE* _retval = NULL;
  if (lua_isnil(L, i))
  {
    _retval = NULL;
  }
  else
  {
    orxTEXTURE** pp;
    if ((pp = luaL_testudata(L, i, "lorx.orxTEXTURE")))
    {
      _retval = *pp;
    }
    else
    {
      luaL_error(L, "expect userdata of 'lorx.orxTEXTURE'!");
    }
  }
  return _retval;
}

LORX_API orxTEXT* lorx_luserdata_to_orxTEXT(lua_State *L, int i)
{
  orxTEXT* _retval = NULL;
  if (lua_isnil(L, i))
  {
    _retval = NULL;
  }
  else
  {
    orxTEXT** pp;
    if ((pp = luaL_testudata(L, i, "lorx.orxTEXT")))
    {
      _retval = *pp;
    }
    else
    {
      luaL_error(L, "expect userdata of 'lorx.orxTEXT'!");
    }
  }
  return _retval;
}

LORX_API orxGRAPHIC* lorx_luserdata_to_orxGRAPHIC(lua_State *L, int i)
{
  orxGRAPHIC* _retval = NULL;
  if (lua_isnil(L, i))
  {
    _retval = NULL;
  }
  else
  {
    orxGRAPHIC** pp;
    if ((pp = luaL_testudata(L, i, "lorx.orxGRAPHIC")))
    {
      _retval = *pp;
    }
    else
    {
      luaL_error(L, "expect userdata of 'lorx.orxGRAPHIC'!");
    }
  }
  return _retval;
}

LORX_API orxBODY* lorx_luserdata_to_orxBODY(lua_State *L, int i)
{
  orxBODY* _retval = NULL;
  if (lua_isnil(L, i))
  {
    _retval = NULL;
  }
  else
  {
    orxBODY** pp;
    if ((pp = luaL_testudata(L, i, "lorx.orxBODY")))
    {
      _retval = *pp;
    }
    else
    {
      luaL_error(L, "expect userdata of 'lorx.orxBODY'!");
    }
  }
  return _retval;
}

LORX_API orxBODY_PART* lorx_luserdata_to_orxBODY_PART(lua_State *L, int i)
{
  orxBODY_PART* _retval = NULL;
  if (lua_isnil(L, i))
  {
    _retval = NULL;
  }
  else
  {
    orxBODY_PART** pp;
    if ((pp = luaL_testudata(L, i, "lorx.orxBODY_PART")))
    {
      _retval = *pp;
    }
    else
    {
      luaL_error(L, "expect userdata of 'lorx.orxBODY_PART'!");
    }
  }
  return _retval;
}

LORX_API orxBODY_JOINT* lorx_luserdata_to_orxBODY_JOINT(lua_State *L, int i)
{
  orxBODY_JOINT* _retval = NULL;
  if (lua_isnil(L, i))
  {
    _retval = NULL;
  }
  else
  {
    orxBODY_JOINT** pp;
    if ((pp = luaL_testudata(L, i, "lorx.orxBODY_JOINT")))
    {
      _retval = *pp;
    }
    else
    {
      luaL_error(L, "expect userdata of 'lorx.orxBODY_JOINT'!");
    }
  }
  return _retval;
}

LORX_API orxPHYSICS_BODY* lorx_luserdata_to_orxPHYSICS_BODY(lua_State *L, int i)
{
  orxPHYSICS_BODY* _retval = NULL;
  if (lua_isnil(L, i))
  {
    _retval = NULL;
  }
  else
  {
    orxPHYSICS_BODY** pp;
    if ((pp = luaL_testudata(L, i, "lorx.orxPHYSICS_BODY")))
    {
      _retval = *pp;
    }
    else
    {
      luaL_error(L, "expect userdata of 'lorx.orxPHYSICS_BODY'!");
    }
  }
  return _retval;
}

LORX_API orxPHYSICS_BODY_PART* lorx_luserdata_to_orxPHYSICS_BODY_PART(lua_State *L, int i)
{
  orxPHYSICS_BODY_PART* _retval = NULL;
  if (lua_isnil(L, i))
  {
    _retval = NULL;
  }
  else
  {
    orxPHYSICS_BODY_PART** pp;
    if ((pp = luaL_testudata(L, i, "lorx.orxPHYSICS_BODY_PART")))
    {
      _retval = *pp;
    }
    else
    {
      luaL_error(L, "expect userdata of 'lorx.orxPHYSICS_BODY_PART'!");
    }
  }
  return _retval;
}

LORX_API orxPHYSICS_BODY_JOINT* lorx_luserdata_to_orxPHYSICS_BODY_JOINT(lua_State *L, int i)
{
  orxPHYSICS_BODY_JOINT* _retval = NULL;
  if (lua_isnil(L, i))
  {
    _retval = NULL;
  }
  else
  {
    orxPHYSICS_BODY_JOINT** pp;
    if ((pp = luaL_testudata(L, i, "lorx.orxPHYSICS_BODY_JOINT")))
    {
      _retval = *pp;
    }
    else
    {
      luaL_error(L, "expect userdata of 'lorx.orxPHYSICS_BODY_JOINT'!");
    }
  }
  return _retval;
}

LORX_API orxSOUNDSYSTEM_SOUND* lorx_luserdata_to_orxSOUNDSYSTEM_SOUND(lua_State *L, int i)
{
  orxSOUNDSYSTEM_SOUND* _retval = NULL;
  if (lua_isnil(L, i))
  {
    _retval = NULL;
  }
  else
  {
    orxSOUNDSYSTEM_SOUND** pp;
    if ((pp = luaL_testudata(L, i, "lorx.orxSOUNDSYSTEM_SOUND")))
    {
      _retval = *pp;
    }
    else
    {
      luaL_error(L, "expect userdata of 'lorx.orxSOUNDSYSTEM_SOUND'!");
    }
  }
  return _retval;
}

LORX_API orxSOUNDSYSTEM_SAMPLE* lorx_luserdata_to_orxSOUNDSYSTEM_SAMPLE(lua_State *L, int i)
{
  orxSOUNDSYSTEM_SAMPLE* _retval = NULL;
  if (lua_isnil(L, i))
  {
    _retval = NULL;
  }
  else
  {
    orxSOUNDSYSTEM_SAMPLE** pp;
    if ((pp = luaL_testudata(L, i, "lorx.orxSOUNDSYSTEM_SAMPLE")))
    {
      _retval = *pp;
    }
    else
    {
      luaL_error(L, "expect userdata of 'lorx.orxSOUNDSYSTEM_SAMPLE'!");
    }
  }
  return _retval;
}

LORX_API orxSOUND* lorx_luserdata_to_orxSOUND(lua_State *L, int i)
{
  orxSOUND* _retval = NULL;
  if (lua_isnil(L, i))
  {
    _retval = NULL;
  }
  else
  {
    orxSOUND** pp;
    if ((pp = luaL_testudata(L, i, "lorx.orxSOUND")))
    {
      _retval = *pp;
    }
    else
    {
      luaL_error(L, "expect userdata of 'lorx.orxSOUND'!");
    }
  }
  return _retval;
}

LORX_API orxSOUND_STREAM_INFO* lorx_luserdata_to_orxSOUND_STREAM_INFO(lua_State *L, int i)
{
  orxSOUND_STREAM_INFO* _retval = NULL;
  if (lua_isnil(L, i))
  {
    _retval = NULL;
  }
  else
  {
    orxSOUND_STREAM_INFO** pp;
    if ((pp = luaL_testudata(L, i, "lorx.orxSOUND_STREAM_INFO")))
    {
      _retval = *pp;
    }
    else
    {
      luaL_error(L, "expect userdata of 'lorx.orxSOUND_STREAM_INFO'!");
    }
  }
  return _retval;
}

LORX_API orxSOUND_STREAM_PACKET* lorx_luserdata_to_orxSOUND_STREAM_PACKET(lua_State *L, int i)
{
  orxSOUND_STREAM_PACKET* _retval = NULL;
  if (lua_isnil(L, i))
  {
    _retval = NULL;
  }
  else
  {
    orxSOUND_STREAM_PACKET** pp;
    if ((pp = luaL_testudata(L, i, "lorx.orxSOUND_STREAM_PACKET")))
    {
      _retval = *pp;
    }
    else
    {
      luaL_error(L, "expect userdata of 'lorx.orxSOUND_STREAM_PACKET'!");
    }
  }
  return _retval;
}

LORX_API orxSOUNDPOINTER* lorx_luserdata_to_orxSOUNDPOINTER(lua_State *L, int i)
{
  orxSOUNDPOINTER* _retval = NULL;
  if (lua_isnil(L, i))
  {
    _retval = NULL;
  }
  else
  {
    orxSOUNDPOINTER** pp;
    if ((pp = luaL_testudata(L, i, "lorx.orxSOUNDPOINTER")))
    {
      _retval = *pp;
    }
    else
    {
      luaL_error(L, "expect userdata of 'lorx.orxSOUNDPOINTER'!");
    }
  }
  return _retval;
}

LORX_API orxSTRUCTURE* lorx_luserdata_to_orxSTRUCTURE(lua_State *L, int i)
{
  orxSTRUCTURE* _retval = NULL;
  if (lua_isnil(L, i))
  {
    _retval = NULL;
  }
  else
  {
    orxSTRUCTURE** pp;
    if ((pp = luaL_testudata(L, i, "lorx.orxANIMPOINTER")) || (pp = luaL_testudata(L, i, "lorx.orxBODY")) || (pp = luaL_testudata(L, i, "lorx.orxCLOCK")) || (pp = luaL_testudata(L, i, "lorx.orxFRAME")) || (pp = luaL_testudata(L, i, "lorx.orxFXPOINTER")) || (pp = luaL_testudata(L, i, "lorx.orxGRAPHIC")) || (pp = luaL_testudata(L, i, "lorx.orxSHADERPOINTER")) || (pp = luaL_testudata(L, i, "lorx.orxSOUNDPOINTER")) || (pp = luaL_testudata(L, i, "lorx.orxSPAWNER")) || (pp = luaL_testudata(L, i, "lorx.orxTIMELINE")) || (pp = luaL_testudata(L, i, "lorx.orxANIM")) || (pp = luaL_testudata(L, i, "lorx.orxANIMSET")) || (pp = luaL_testudata(L, i, "lorx.orxCAMERA")) || (pp = luaL_testudata(L, i, "lorx.orxFONT")) || (pp = luaL_testudata(L, i, "lorx.orxFX")) || (pp = luaL_testudata(L, i, "lorx.orxOBJECT")) || (pp = luaL_testudata(L, i, "lorx.orxSHADER")) || (pp = luaL_testudata(L, i, "lorx.orxSOUND")) || (pp = luaL_testudata(L, i, "lorx.orxTEXT")) || (pp = luaL_testudata(L, i, "lorx.orxTEXTURE")) || (pp = luaL_testudata(L, i, "lorx.orxVIEWPORT")) || (pp = luaL_testudata(L, i, "lorx.orxSTRUCTURE")))
    {
      _retval = *pp;
    }
    else
    {
      luaL_error(L, "expect userdata of 'lorx.orxSTRUCTURE' or its subtypes!");
    }
  }
  return _retval;
}

LORX_API orxSPAWNER* lorx_luserdata_to_orxSPAWNER(lua_State *L, int i)
{
  orxSPAWNER* _retval = NULL;
  if (lua_isnil(L, i))
  {
    _retval = NULL;
  }
  else
  {
    orxSPAWNER** pp;
    if ((pp = luaL_testudata(L, i, "lorx.orxSPAWNER")))
    {
      _retval = *pp;
    }
    else
    {
      luaL_error(L, "expect userdata of 'lorx.orxSPAWNER'!");
    }
  }
  return _retval;
}

LORX_API orxFRAME* lorx_luserdata_to_orxFRAME(lua_State *L, int i)
{
  orxFRAME* _retval = NULL;
  if (lua_isnil(L, i))
  {
    _retval = NULL;
  }
  else
  {
    orxFRAME** pp;
    if ((pp = luaL_testudata(L, i, "lorx.orxFRAME")))
    {
      _retval = *pp;
    }
    else
    {
      luaL_error(L, "expect userdata of 'lorx.orxFRAME'!");
    }
  }
  return _retval;
}

LORX_API orxFXPOINTER* lorx_luserdata_to_orxFXPOINTER(lua_State *L, int i)
{
  orxFXPOINTER* _retval = NULL;
  if (lua_isnil(L, i))
  {
    _retval = NULL;
  }
  else
  {
    orxFXPOINTER** pp;
    if ((pp = luaL_testudata(L, i, "lorx.orxFXPOINTER")))
    {
      _retval = *pp;
    }
    else
    {
      luaL_error(L, "expect userdata of 'lorx.orxFXPOINTER'!");
    }
  }
  return _retval;
}

LORX_API orxOBJECT* lorx_luserdata_to_orxOBJECT(lua_State *L, int i)
{
  orxOBJECT* _retval = NULL;
  if (lua_isnil(L, i))
  {
    _retval = NULL;
  }
  else
  {
    orxOBJECT** pp;
    if ((pp = luaL_testudata(L, i, "lorx.orxOBJECT")))
    {
      _retval = *pp;
    }
    else
    {
      luaL_error(L, "expect userdata of 'lorx.orxOBJECT'!");
    }
  }
  return _retval;
}

LORX_API orxFX* lorx_luserdata_to_orxFX(lua_State *L, int i)
{
  orxFX* _retval = NULL;
  if (lua_isnil(L, i))
  {
    _retval = NULL;
  }
  else
  {
    orxFX** pp;
    if ((pp = luaL_testudata(L, i, "lorx.orxFX")))
    {
      _retval = *pp;
    }
    else
    {
      luaL_error(L, "expect userdata of 'lorx.orxFX'!");
    }
  }
  return _retval;
}

LORX_API orxTIMELINE* lorx_luserdata_to_orxTIMELINE(lua_State *L, int i)
{
  orxTIMELINE* _retval = NULL;
  if (lua_isnil(L, i))
  {
    _retval = NULL;
  }
  else
  {
    orxTIMELINE** pp;
    if ((pp = luaL_testudata(L, i, "lorx.orxTIMELINE")))
    {
      _retval = *pp;
    }
    else
    {
      luaL_error(L, "expect userdata of 'lorx.orxTIMELINE'!");
    }
  }
  return _retval;
}


/*
 * Conversion functions for converting from lua userdata to Orx types (pointers) (const)
 */
LORX_API const orxFILE_INFO* lorx_luserdata_to_orxFILE_INFO_const(lua_State *L, int i)
{
  const orxFILE_INFO* _retval = NULL;
  if (lua_isnil(L, i))
  {
    _retval = NULL;
  }
  else
  {
    const orxFILE_INFO** pp;
    if ((pp = luaL_testudata(L, i, "lorx.orxFILE_INFO#")) || (pp = luaL_testudata(L, i, "lorx.orxFILE_INFO")))
    {
      _retval = *pp;
    }
    else
    {
      luaL_error(L, "expect userdata of 'lorx.orxFILE_INFO' or 'lorx.orxFILE_INFO#'!");
    }
  }
  return _retval;
}

LORX_API const orxCOMMAND_VAR* lorx_luserdata_to_orxCOMMAND_VAR_const(lua_State *L, int i)
{
  const orxCOMMAND_VAR* _retval = NULL;
  if (lua_isnil(L, i))
  {
    _retval = NULL;
  }
  else
  {
    const orxCOMMAND_VAR** pp;
    if ((pp = luaL_testudata(L, i, "lorx.orxCOMMAND_VAR#")) || (pp = luaL_testudata(L, i, "lorx.orxCOMMAND_VAR")))
    {
      _retval = *pp;
    }
    else
    {
      luaL_error(L, "expect userdata of 'lorx.orxCOMMAND_VAR' or 'lorx.orxCOMMAND_VAR#'!");
    }
  }
  return _retval;
}

LORX_API const orxANIM_CUSTOM_EVENT* lorx_luserdata_to_orxANIM_CUSTOM_EVENT_const(lua_State *L, int i)
{
  const orxANIM_CUSTOM_EVENT* _retval = NULL;
  if (lua_isnil(L, i))
  {
    _retval = NULL;
  }
  else
  {
    const orxANIM_CUSTOM_EVENT** pp;
    if ((pp = luaL_testudata(L, i, "lorx.orxANIM_CUSTOM_EVENT#")) || (pp = luaL_testudata(L, i, "lorx.orxANIM_CUSTOM_EVENT")))
    {
      _retval = *pp;
    }
    else
    {
      luaL_error(L, "expect userdata of 'lorx.orxANIM_CUSTOM_EVENT' or 'lorx.orxANIM_CUSTOM_EVENT#'!");
    }
  }
  return _retval;
}

LORX_API const orxOBOX* lorx_luserdata_to_orxOBOX_const(lua_State *L, int i)
{
  const orxOBOX* _retval = NULL;
  if (lua_isnil(L, i))
  {
    _retval = NULL;
  }
  else
  {
    const orxOBOX** pp;
    if ((pp = luaL_testudata(L, i, "lorx.orxOBOX#")) || (pp = luaL_testudata(L, i, "lorx.orxOBOX")))
    {
      _retval = *pp;
    }
    else
    {
      luaL_error(L, "expect userdata of 'lorx.orxOBOX' or 'lorx.orxOBOX#'!");
    }
  }
  return _retval;
}

LORX_API const orxVECTOR* lorx_luserdata_to_orxVECTOR_const(lua_State *L, int i)
{
  const orxVECTOR* _retval = NULL;
  if (lua_isnil(L, i))
  {
    _retval = NULL;
  }
  else
  {
    const orxVECTOR** pp;
    if ((pp = luaL_testudata(L, i, "lorx.orxVECTOR#")) || (pp = luaL_testudata(L, i, "lorx.orxVECTOR")))
    {
      _retval = *pp;
    }
    else
    {
      luaL_error(L, "expect userdata of 'lorx.orxVECTOR' or 'lorx.orxVECTOR#'!");
    }
  }
  return _retval;
}

LORX_API const orxAABOX* lorx_luserdata_to_orxAABOX_const(lua_State *L, int i)
{
  const orxAABOX* _retval = NULL;
  if (lua_isnil(L, i))
  {
    _retval = NULL;
  }
  else
  {
    const orxAABOX** pp;
    if ((pp = luaL_testudata(L, i, "lorx.orxAABOX#")) || (pp = luaL_testudata(L, i, "lorx.orxAABOX")))
    {
      _retval = *pp;
    }
    else
    {
      luaL_error(L, "expect userdata of 'lorx.orxAABOX' or 'lorx.orxAABOX#'!");
    }
  }
  return _retval;
}

LORX_API const orxRGBA* lorx_luserdata_to_orxRGBA_const(lua_State *L, int i)
{
  const orxRGBA* _retval = NULL;
  if (lua_isnil(L, i))
  {
    _retval = NULL;
  }
  else
  {
    const orxRGBA** pp;
    if ((pp = luaL_testudata(L, i, "lorx.orxRGBA#")) || (pp = luaL_testudata(L, i, "lorx.orxRGBA")))
    {
      _retval = *pp;
    }
    else
    {
      luaL_error(L, "expect userdata of 'lorx.orxRGBA' or 'lorx.orxRGBA#'!");
    }
  }
  return _retval;
}

LORX_API const orxDISPLAY_TRANSFORM* lorx_luserdata_to_orxDISPLAY_TRANSFORM_const(lua_State *L, int i)
{
  const orxDISPLAY_TRANSFORM* _retval = NULL;
  if (lua_isnil(L, i))
  {
    _retval = NULL;
  }
  else
  {
    const orxDISPLAY_TRANSFORM** pp;
    if ((pp = luaL_testudata(L, i, "lorx.orxDISPLAY_TRANSFORM#")) || (pp = luaL_testudata(L, i, "lorx.orxDISPLAY_TRANSFORM")))
    {
      _retval = *pp;
    }
    else
    {
      luaL_error(L, "expect userdata of 'lorx.orxDISPLAY_TRANSFORM' or 'lorx.orxDISPLAY_TRANSFORM#'!");
    }
  }
  return _retval;
}

LORX_API const orxDISPLAY_VIDEO_MODE* lorx_luserdata_to_orxDISPLAY_VIDEO_MODE_const(lua_State *L, int i)
{
  const orxDISPLAY_VIDEO_MODE* _retval = NULL;
  if (lua_isnil(L, i))
  {
    _retval = NULL;
  }
  else
  {
    const orxDISPLAY_VIDEO_MODE** pp;
    if ((pp = luaL_testudata(L, i, "lorx.orxDISPLAY_VIDEO_MODE#")) || (pp = luaL_testudata(L, i, "lorx.orxDISPLAY_VIDEO_MODE")))
    {
      _retval = *pp;
    }
    else
    {
      luaL_error(L, "expect userdata of 'lorx.orxDISPLAY_VIDEO_MODE' or 'lorx.orxDISPLAY_VIDEO_MODE#'!");
    }
  }
  return _retval;
}

LORX_API const orxCHARACTER_GLYPH* lorx_luserdata_to_orxCHARACTER_GLYPH_const(lua_State *L, int i)
{
  const orxCHARACTER_GLYPH* _retval = NULL;
  if (lua_isnil(L, i))
  {
    _retval = NULL;
  }
  else
  {
    const orxCHARACTER_GLYPH** pp;
    if ((pp = luaL_testudata(L, i, "lorx.orxCHARACTER_GLYPH#")) || (pp = luaL_testudata(L, i, "lorx.orxCHARACTER_GLYPH")))
    {
      _retval = *pp;
    }
    else
    {
      luaL_error(L, "expect userdata of 'lorx.orxCHARACTER_GLYPH' or 'lorx.orxCHARACTER_GLYPH#'!");
    }
  }
  return _retval;
}

LORX_API const orxCOLOR* lorx_luserdata_to_orxCOLOR_const(lua_State *L, int i)
{
  const orxCOLOR* _retval = NULL;
  if (lua_isnil(L, i))
  {
    _retval = NULL;
  }
  else
  {
    const orxCOLOR** pp;
    if ((pp = luaL_testudata(L, i, "lorx.orxCOLOR#")) || (pp = luaL_testudata(L, i, "lorx.orxCOLOR")))
    {
      _retval = *pp;
    }
    else
    {
      luaL_error(L, "expect userdata of 'lorx.orxCOLOR' or 'lorx.orxCOLOR#'!");
    }
  }
  return _retval;
}

LORX_API const orxSOUND_FILTER_DATA* lorx_luserdata_to_orxSOUND_FILTER_DATA_const(lua_State *L, int i)
{
  const orxSOUND_FILTER_DATA* _retval = NULL;
  if (lua_isnil(L, i))
  {
    _retval = NULL;
  }
  else
  {
    const orxSOUND_FILTER_DATA** pp;
    if ((pp = luaL_testudata(L, i, "lorx.orxSOUND_FILTER_DATA#")) || (pp = luaL_testudata(L, i, "lorx.orxSOUND_FILTER_DATA")))
    {
      _retval = *pp;
    }
    else
    {
      luaL_error(L, "expect userdata of 'lorx.orxSOUND_FILTER_DATA' or 'lorx.orxSOUND_FILTER_DATA#'!");
    }
  }
  return _retval;
}

LORX_API const orxFILE* lorx_luserdata_to_orxFILE_const(lua_State *L, int i)
{
  const orxFILE* _retval = NULL;
  if (lua_isnil(L, i))
  {
    _retval = NULL;
  }
  else
  {
    const orxFILE** pp;
    if ((pp = luaL_testudata(L, i, "lorx.orxFILE#")) || (pp = luaL_testudata(L, i, "lorx.orxFILE")))
    {
      _retval = *pp;
    }
    else
    {
      luaL_error(L, "expect userdata of 'lorx.orxFILE' or 'lorx.orxFILE#'!");
    }
  }
  return _retval;
}

LORX_API const orxTHREAD_SEMAPHORE* lorx_luserdata_to_orxTHREAD_SEMAPHORE_const(lua_State *L, int i)
{
  const orxTHREAD_SEMAPHORE* _retval = NULL;
  if (lua_isnil(L, i))
  {
    _retval = NULL;
  }
  else
  {
    const orxTHREAD_SEMAPHORE** pp;
    if ((pp = luaL_testudata(L, i, "lorx.orxTHREAD_SEMAPHORE#")) || (pp = luaL_testudata(L, i, "lorx.orxTHREAD_SEMAPHORE")))
    {
      _retval = *pp;
    }
    else
    {
      luaL_error(L, "expect userdata of 'lorx.orxTHREAD_SEMAPHORE' or 'lorx.orxTHREAD_SEMAPHORE#'!");
    }
  }
  return _retval;
}

LORX_API const orxCLOCK* lorx_luserdata_to_orxCLOCK_const(lua_State *L, int i)
{
  const orxCLOCK* _retval = NULL;
  if (lua_isnil(L, i))
  {
    _retval = NULL;
  }
  else
  {
    const orxCLOCK** pp;
    if ((pp = luaL_testudata(L, i, "lorx.orxCLOCK#")) || (pp = luaL_testudata(L, i, "lorx.orxCLOCK")))
    {
      _retval = *pp;
    }
    else
    {
      luaL_error(L, "expect userdata of 'lorx.orxCLOCK' or 'lorx.orxCLOCK#'!");
    }
  }
  return _retval;
}

LORX_API const orxCLOCK_INFO* lorx_luserdata_to_orxCLOCK_INFO_const(lua_State *L, int i)
{
  const orxCLOCK_INFO* _retval = NULL;
  if (lua_isnil(L, i))
  {
    _retval = NULL;
  }
  else
  {
    const orxCLOCK_INFO** pp;
    if ((pp = luaL_testudata(L, i, "lorx.orxCLOCK_INFO#")) || (pp = luaL_testudata(L, i, "lorx.orxCLOCK_INFO")))
    {
      _retval = *pp;
    }
    else
    {
      luaL_error(L, "expect userdata of 'lorx.orxCLOCK_INFO' or 'lorx.orxCLOCK_INFO#'!");
    }
  }
  return _retval;
}

LORX_API const orxANIMPOINTER* lorx_luserdata_to_orxANIMPOINTER_const(lua_State *L, int i)
{
  const orxANIMPOINTER* _retval = NULL;
  if (lua_isnil(L, i))
  {
    _retval = NULL;
  }
  else
  {
    const orxANIMPOINTER** pp;
    if ((pp = luaL_testudata(L, i, "lorx.orxANIMPOINTER#")) || (pp = luaL_testudata(L, i, "lorx.orxANIMPOINTER")))
    {
      _retval = *pp;
    }
    else
    {
      luaL_error(L, "expect userdata of 'lorx.orxANIMPOINTER' or 'lorx.orxANIMPOINTER#'!");
    }
  }
  return _retval;
}

LORX_API const orxANIMSET* lorx_luserdata_to_orxANIMSET_const(lua_State *L, int i)
{
  const orxANIMSET* _retval = NULL;
  if (lua_isnil(L, i))
  {
    _retval = NULL;
  }
  else
  {
    const orxANIMSET** pp;
    if ((pp = luaL_testudata(L, i, "lorx.orxANIMSET#")) || (pp = luaL_testudata(L, i, "lorx.orxANIMSET")))
    {
      _retval = *pp;
    }
    else
    {
      luaL_error(L, "expect userdata of 'lorx.orxANIMSET' or 'lorx.orxANIMSET#'!");
    }
  }
  return _retval;
}

LORX_API const orxANIMSET_LINK_TABLE* lorx_luserdata_to_orxANIMSET_LINK_TABLE_const(lua_State *L, int i)
{
  const orxANIMSET_LINK_TABLE* _retval = NULL;
  if (lua_isnil(L, i))
  {
    _retval = NULL;
  }
  else
  {
    const orxANIMSET_LINK_TABLE** pp;
    if ((pp = luaL_testudata(L, i, "lorx.orxANIMSET_LINK_TABLE#")) || (pp = luaL_testudata(L, i, "lorx.orxANIMSET_LINK_TABLE")))
    {
      _retval = *pp;
    }
    else
    {
      luaL_error(L, "expect userdata of 'lorx.orxANIMSET_LINK_TABLE' or 'lorx.orxANIMSET_LINK_TABLE#'!");
    }
  }
  return _retval;
}

LORX_API const orxANIM* lorx_luserdata_to_orxANIM_const(lua_State *L, int i)
{
  const orxANIM* _retval = NULL;
  if (lua_isnil(L, i))
  {
    _retval = NULL;
  }
  else
  {
    const orxANIM** pp;
    if ((pp = luaL_testudata(L, i, "lorx.orxANIM#")) || (pp = luaL_testudata(L, i, "lorx.orxANIM")))
    {
      _retval = *pp;
    }
    else
    {
      luaL_error(L, "expect userdata of 'lorx.orxANIM' or 'lorx.orxANIM#'!");
    }
  }
  return _retval;
}

LORX_API const orxSHADERPOINTER* lorx_luserdata_to_orxSHADERPOINTER_const(lua_State *L, int i)
{
  const orxSHADERPOINTER* _retval = NULL;
  if (lua_isnil(L, i))
  {
    _retval = NULL;
  }
  else
  {
    const orxSHADERPOINTER** pp;
    if ((pp = luaL_testudata(L, i, "lorx.orxSHADERPOINTER#")) || (pp = luaL_testudata(L, i, "lorx.orxSHADERPOINTER")))
    {
      _retval = *pp;
    }
    else
    {
      luaL_error(L, "expect userdata of 'lorx.orxSHADERPOINTER' or 'lorx.orxSHADERPOINTER#'!");
    }
  }
  return _retval;
}

LORX_API const orxSHADER* lorx_luserdata_to_orxSHADER_const(lua_State *L, int i)
{
  const orxSHADER* _retval = NULL;
  if (lua_isnil(L, i))
  {
    _retval = NULL;
  }
  else
  {
    const orxSHADER** pp;
    if ((pp = luaL_testudata(L, i, "lorx.orxSHADER#")) || (pp = luaL_testudata(L, i, "lorx.orxSHADER")))
    {
      _retval = *pp;
    }
    else
    {
      luaL_error(L, "expect userdata of 'lorx.orxSHADER' or 'lorx.orxSHADER#'!");
    }
  }
  return _retval;
}

LORX_API const orxVIEWPORT* lorx_luserdata_to_orxVIEWPORT_const(lua_State *L, int i)
{
  const orxVIEWPORT* _retval = NULL;
  if (lua_isnil(L, i))
  {
    _retval = NULL;
  }
  else
  {
    const orxVIEWPORT** pp;
    if ((pp = luaL_testudata(L, i, "lorx.orxVIEWPORT#")) || (pp = luaL_testudata(L, i, "lorx.orxVIEWPORT")))
    {
      _retval = *pp;
    }
    else
    {
      luaL_error(L, "expect userdata of 'lorx.orxVIEWPORT' or 'lorx.orxVIEWPORT#'!");
    }
  }
  return _retval;
}

LORX_API const orxCAMERA* lorx_luserdata_to_orxCAMERA_const(lua_State *L, int i)
{
  const orxCAMERA* _retval = NULL;
  if (lua_isnil(L, i))
  {
    _retval = NULL;
  }
  else
  {
    const orxCAMERA** pp;
    if ((pp = luaL_testudata(L, i, "lorx.orxCAMERA#")) || (pp = luaL_testudata(L, i, "lorx.orxCAMERA")))
    {
      _retval = *pp;
    }
    else
    {
      luaL_error(L, "expect userdata of 'lorx.orxCAMERA' or 'lorx.orxCAMERA#'!");
    }
  }
  return _retval;
}

LORX_API const orxBITMAP* lorx_luserdata_to_orxBITMAP_const(lua_State *L, int i)
{
  const orxBITMAP* _retval = NULL;
  if (lua_isnil(L, i))
  {
    _retval = NULL;
  }
  else
  {
    const orxBITMAP** pp;
    if ((pp = luaL_testudata(L, i, "lorx.orxBITMAP#")) || (pp = luaL_testudata(L, i, "lorx.orxBITMAP")))
    {
      _retval = *pp;
    }
    else
    {
      luaL_error(L, "expect userdata of 'lorx.orxBITMAP' or 'lorx.orxBITMAP#'!");
    }
  }
  return _retval;
}

LORX_API const orxDISPLAY_MESH* lorx_luserdata_to_orxDISPLAY_MESH_const(lua_State *L, int i)
{
  const orxDISPLAY_MESH* _retval = NULL;
  if (lua_isnil(L, i))
  {
    _retval = NULL;
  }
  else
  {
    const orxDISPLAY_MESH** pp;
    if ((pp = luaL_testudata(L, i, "lorx.orxDISPLAY_MESH#")) || (pp = luaL_testudata(L, i, "lorx.orxDISPLAY_MESH")))
    {
      _retval = *pp;
    }
    else
    {
      luaL_error(L, "expect userdata of 'lorx.orxDISPLAY_MESH' or 'lorx.orxDISPLAY_MESH#'!");
    }
  }
  return _retval;
}

LORX_API const orxCHARACTER_MAP* lorx_luserdata_to_orxCHARACTER_MAP_const(lua_State *L, int i)
{
  const orxCHARACTER_MAP* _retval = NULL;
  if (lua_isnil(L, i))
  {
    _retval = NULL;
  }
  else
  {
    const orxCHARACTER_MAP** pp;
    if ((pp = luaL_testudata(L, i, "lorx.orxCHARACTER_MAP#")) || (pp = luaL_testudata(L, i, "lorx.orxCHARACTER_MAP")))
    {
      _retval = *pp;
    }
    else
    {
      luaL_error(L, "expect userdata of 'lorx.orxCHARACTER_MAP' or 'lorx.orxCHARACTER_MAP#'!");
    }
  }
  return _retval;
}

LORX_API const orxFONT* lorx_luserdata_to_orxFONT_const(lua_State *L, int i)
{
  const orxFONT* _retval = NULL;
  if (lua_isnil(L, i))
  {
    _retval = NULL;
  }
  else
  {
    const orxFONT** pp;
    if ((pp = luaL_testudata(L, i, "lorx.orxFONT#")) || (pp = luaL_testudata(L, i, "lorx.orxFONT")))
    {
      _retval = *pp;
    }
    else
    {
      luaL_error(L, "expect userdata of 'lorx.orxFONT' or 'lorx.orxFONT#'!");
    }
  }
  return _retval;
}

LORX_API const orxTEXTURE* lorx_luserdata_to_orxTEXTURE_const(lua_State *L, int i)
{
  const orxTEXTURE* _retval = NULL;
  if (lua_isnil(L, i))
  {
    _retval = NULL;
  }
  else
  {
    const orxTEXTURE** pp;
    if ((pp = luaL_testudata(L, i, "lorx.orxTEXTURE#")) || (pp = luaL_testudata(L, i, "lorx.orxTEXTURE")))
    {
      _retval = *pp;
    }
    else
    {
      luaL_error(L, "expect userdata of 'lorx.orxTEXTURE' or 'lorx.orxTEXTURE#'!");
    }
  }
  return _retval;
}

LORX_API const orxTEXT* lorx_luserdata_to_orxTEXT_const(lua_State *L, int i)
{
  const orxTEXT* _retval = NULL;
  if (lua_isnil(L, i))
  {
    _retval = NULL;
  }
  else
  {
    const orxTEXT** pp;
    if ((pp = luaL_testudata(L, i, "lorx.orxTEXT#")) || (pp = luaL_testudata(L, i, "lorx.orxTEXT")))
    {
      _retval = *pp;
    }
    else
    {
      luaL_error(L, "expect userdata of 'lorx.orxTEXT' or 'lorx.orxTEXT#'!");
    }
  }
  return _retval;
}

LORX_API const orxGRAPHIC* lorx_luserdata_to_orxGRAPHIC_const(lua_State *L, int i)
{
  const orxGRAPHIC* _retval = NULL;
  if (lua_isnil(L, i))
  {
    _retval = NULL;
  }
  else
  {
    const orxGRAPHIC** pp;
    if ((pp = luaL_testudata(L, i, "lorx.orxGRAPHIC#")) || (pp = luaL_testudata(L, i, "lorx.orxGRAPHIC")))
    {
      _retval = *pp;
    }
    else
    {
      luaL_error(L, "expect userdata of 'lorx.orxGRAPHIC' or 'lorx.orxGRAPHIC#'!");
    }
  }
  return _retval;
}

LORX_API const orxBODY* lorx_luserdata_to_orxBODY_const(lua_State *L, int i)
{
  const orxBODY* _retval = NULL;
  if (lua_isnil(L, i))
  {
    _retval = NULL;
  }
  else
  {
    const orxBODY** pp;
    if ((pp = luaL_testudata(L, i, "lorx.orxBODY#")) || (pp = luaL_testudata(L, i, "lorx.orxBODY")))
    {
      _retval = *pp;
    }
    else
    {
      luaL_error(L, "expect userdata of 'lorx.orxBODY' or 'lorx.orxBODY#'!");
    }
  }
  return _retval;
}

LORX_API const orxBODY_PART* lorx_luserdata_to_orxBODY_PART_const(lua_State *L, int i)
{
  const orxBODY_PART* _retval = NULL;
  if (lua_isnil(L, i))
  {
    _retval = NULL;
  }
  else
  {
    const orxBODY_PART** pp;
    if ((pp = luaL_testudata(L, i, "lorx.orxBODY_PART#")) || (pp = luaL_testudata(L, i, "lorx.orxBODY_PART")))
    {
      _retval = *pp;
    }
    else
    {
      luaL_error(L, "expect userdata of 'lorx.orxBODY_PART' or 'lorx.orxBODY_PART#'!");
    }
  }
  return _retval;
}

LORX_API const orxBODY_JOINT* lorx_luserdata_to_orxBODY_JOINT_const(lua_State *L, int i)
{
  const orxBODY_JOINT* _retval = NULL;
  if (lua_isnil(L, i))
  {
    _retval = NULL;
  }
  else
  {
    const orxBODY_JOINT** pp;
    if ((pp = luaL_testudata(L, i, "lorx.orxBODY_JOINT#")) || (pp = luaL_testudata(L, i, "lorx.orxBODY_JOINT")))
    {
      _retval = *pp;
    }
    else
    {
      luaL_error(L, "expect userdata of 'lorx.orxBODY_JOINT' or 'lorx.orxBODY_JOINT#'!");
    }
  }
  return _retval;
}

LORX_API const orxPHYSICS_BODY* lorx_luserdata_to_orxPHYSICS_BODY_const(lua_State *L, int i)
{
  const orxPHYSICS_BODY* _retval = NULL;
  if (lua_isnil(L, i))
  {
    _retval = NULL;
  }
  else
  {
    const orxPHYSICS_BODY** pp;
    if ((pp = luaL_testudata(L, i, "lorx.orxPHYSICS_BODY#")) || (pp = luaL_testudata(L, i, "lorx.orxPHYSICS_BODY")))
    {
      _retval = *pp;
    }
    else
    {
      luaL_error(L, "expect userdata of 'lorx.orxPHYSICS_BODY' or 'lorx.orxPHYSICS_BODY#'!");
    }
  }
  return _retval;
}

LORX_API const orxPHYSICS_BODY_PART* lorx_luserdata_to_orxPHYSICS_BODY_PART_const(lua_State *L, int i)
{
  const orxPHYSICS_BODY_PART* _retval = NULL;
  if (lua_isnil(L, i))
  {
    _retval = NULL;
  }
  else
  {
    const orxPHYSICS_BODY_PART** pp;
    if ((pp = luaL_testudata(L, i, "lorx.orxPHYSICS_BODY_PART#")) || (pp = luaL_testudata(L, i, "lorx.orxPHYSICS_BODY_PART")))
    {
      _retval = *pp;
    }
    else
    {
      luaL_error(L, "expect userdata of 'lorx.orxPHYSICS_BODY_PART' or 'lorx.orxPHYSICS_BODY_PART#'!");
    }
  }
  return _retval;
}

LORX_API const orxPHYSICS_BODY_JOINT* lorx_luserdata_to_orxPHYSICS_BODY_JOINT_const(lua_State *L, int i)
{
  const orxPHYSICS_BODY_JOINT* _retval = NULL;
  if (lua_isnil(L, i))
  {
    _retval = NULL;
  }
  else
  {
    const orxPHYSICS_BODY_JOINT** pp;
    if ((pp = luaL_testudata(L, i, "lorx.orxPHYSICS_BODY_JOINT#")) || (pp = luaL_testudata(L, i, "lorx.orxPHYSICS_BODY_JOINT")))
    {
      _retval = *pp;
    }
    else
    {
      luaL_error(L, "expect userdata of 'lorx.orxPHYSICS_BODY_JOINT' or 'lorx.orxPHYSICS_BODY_JOINT#'!");
    }
  }
  return _retval;
}

LORX_API const orxSOUNDSYSTEM_SOUND* lorx_luserdata_to_orxSOUNDSYSTEM_SOUND_const(lua_State *L, int i)
{
  const orxSOUNDSYSTEM_SOUND* _retval = NULL;
  if (lua_isnil(L, i))
  {
    _retval = NULL;
  }
  else
  {
    const orxSOUNDSYSTEM_SOUND** pp;
    if ((pp = luaL_testudata(L, i, "lorx.orxSOUNDSYSTEM_SOUND#")) || (pp = luaL_testudata(L, i, "lorx.orxSOUNDSYSTEM_SOUND")))
    {
      _retval = *pp;
    }
    else
    {
      luaL_error(L, "expect userdata of 'lorx.orxSOUNDSYSTEM_SOUND' or 'lorx.orxSOUNDSYSTEM_SOUND#'!");
    }
  }
  return _retval;
}

LORX_API const orxSOUNDSYSTEM_SAMPLE* lorx_luserdata_to_orxSOUNDSYSTEM_SAMPLE_const(lua_State *L, int i)
{
  const orxSOUNDSYSTEM_SAMPLE* _retval = NULL;
  if (lua_isnil(L, i))
  {
    _retval = NULL;
  }
  else
  {
    const orxSOUNDSYSTEM_SAMPLE** pp;
    if ((pp = luaL_testudata(L, i, "lorx.orxSOUNDSYSTEM_SAMPLE#")) || (pp = luaL_testudata(L, i, "lorx.orxSOUNDSYSTEM_SAMPLE")))
    {
      _retval = *pp;
    }
    else
    {
      luaL_error(L, "expect userdata of 'lorx.orxSOUNDSYSTEM_SAMPLE' or 'lorx.orxSOUNDSYSTEM_SAMPLE#'!");
    }
  }
  return _retval;
}

LORX_API const orxSOUND* lorx_luserdata_to_orxSOUND_const(lua_State *L, int i)
{
  const orxSOUND* _retval = NULL;
  if (lua_isnil(L, i))
  {
    _retval = NULL;
  }
  else
  {
    const orxSOUND** pp;
    if ((pp = luaL_testudata(L, i, "lorx.orxSOUND#")) || (pp = luaL_testudata(L, i, "lorx.orxSOUND")))
    {
      _retval = *pp;
    }
    else
    {
      luaL_error(L, "expect userdata of 'lorx.orxSOUND' or 'lorx.orxSOUND#'!");
    }
  }
  return _retval;
}

LORX_API const orxSOUND_STREAM_INFO* lorx_luserdata_to_orxSOUND_STREAM_INFO_const(lua_State *L, int i)
{
  const orxSOUND_STREAM_INFO* _retval = NULL;
  if (lua_isnil(L, i))
  {
    _retval = NULL;
  }
  else
  {
    const orxSOUND_STREAM_INFO** pp;
    if ((pp = luaL_testudata(L, i, "lorx.orxSOUND_STREAM_INFO#")) || (pp = luaL_testudata(L, i, "lorx.orxSOUND_STREAM_INFO")))
    {
      _retval = *pp;
    }
    else
    {
      luaL_error(L, "expect userdata of 'lorx.orxSOUND_STREAM_INFO' or 'lorx.orxSOUND_STREAM_INFO#'!");
    }
  }
  return _retval;
}

LORX_API const orxSOUND_STREAM_PACKET* lorx_luserdata_to_orxSOUND_STREAM_PACKET_const(lua_State *L, int i)
{
  const orxSOUND_STREAM_PACKET* _retval = NULL;
  if (lua_isnil(L, i))
  {
    _retval = NULL;
  }
  else
  {
    const orxSOUND_STREAM_PACKET** pp;
    if ((pp = luaL_testudata(L, i, "lorx.orxSOUND_STREAM_PACKET#")) || (pp = luaL_testudata(L, i, "lorx.orxSOUND_STREAM_PACKET")))
    {
      _retval = *pp;
    }
    else
    {
      luaL_error(L, "expect userdata of 'lorx.orxSOUND_STREAM_PACKET' or 'lorx.orxSOUND_STREAM_PACKET#'!");
    }
  }
  return _retval;
}

LORX_API const orxSOUNDPOINTER* lorx_luserdata_to_orxSOUNDPOINTER_const(lua_State *L, int i)
{
  const orxSOUNDPOINTER* _retval = NULL;
  if (lua_isnil(L, i))
  {
    _retval = NULL;
  }
  else
  {
    const orxSOUNDPOINTER** pp;
    if ((pp = luaL_testudata(L, i, "lorx.orxSOUNDPOINTER#")) || (pp = luaL_testudata(L, i, "lorx.orxSOUNDPOINTER")))
    {
      _retval = *pp;
    }
    else
    {
      luaL_error(L, "expect userdata of 'lorx.orxSOUNDPOINTER' or 'lorx.orxSOUNDPOINTER#'!");
    }
  }
  return _retval;
}

LORX_API const orxSTRUCTURE* lorx_luserdata_to_orxSTRUCTURE_const(lua_State *L, int i)
{
  const orxSTRUCTURE* _retval = NULL;
  if (lua_isnil(L, i))
  {
    _retval = NULL;
  }
  else
  {
    const orxSTRUCTURE** pp;
    if ((pp = luaL_testudata(L, i, "lorx.orxANIMPOINTER#")) || (pp = luaL_testudata(L, i, "lorx.orxANIMPOINTER")) || (pp = luaL_testudata(L, i, "lorx.orxBODY#")) || (pp = luaL_testudata(L, i, "lorx.orxBODY")) || (pp = luaL_testudata(L, i, "lorx.orxCLOCK#")) || (pp = luaL_testudata(L, i, "lorx.orxCLOCK")) || (pp = luaL_testudata(L, i, "lorx.orxFRAME#")) || (pp = luaL_testudata(L, i, "lorx.orxFRAME")) || (pp = luaL_testudata(L, i, "lorx.orxFXPOINTER#")) || (pp = luaL_testudata(L, i, "lorx.orxFXPOINTER")) || (pp = luaL_testudata(L, i, "lorx.orxGRAPHIC#")) || (pp = luaL_testudata(L, i, "lorx.orxGRAPHIC")) || (pp = luaL_testudata(L, i, "lorx.orxSHADERPOINTER#")) || (pp = luaL_testudata(L, i, "lorx.orxSHADERPOINTER")) || (pp = luaL_testudata(L, i, "lorx.orxSOUNDPOINTER#")) || (pp = luaL_testudata(L, i, "lorx.orxSOUNDPOINTER")) || (pp = luaL_testudata(L, i, "lorx.orxSPAWNER#")) || (pp = luaL_testudata(L, i, "lorx.orxSPAWNER")) || (pp = luaL_testudata(L, i, "lorx.orxTIMELINE#")) || (pp = luaL_testudata(L, i, "lorx.orxTIMELINE")) || (pp = luaL_testudata(L, i, "lorx.orxANIM#")) || (pp = luaL_testudata(L, i, "lorx.orxANIM")) || (pp = luaL_testudata(L, i, "lorx.orxANIMSET#")) || (pp = luaL_testudata(L, i, "lorx.orxANIMSET")) || (pp = luaL_testudata(L, i, "lorx.orxCAMERA#")) || (pp = luaL_testudata(L, i, "lorx.orxCAMERA")) || (pp = luaL_testudata(L, i, "lorx.orxFONT#")) || (pp = luaL_testudata(L, i, "lorx.orxFONT")) || (pp = luaL_testudata(L, i, "lorx.orxFX#")) || (pp = luaL_testudata(L, i, "lorx.orxFX")) || (pp = luaL_testudata(L, i, "lorx.orxOBJECT#")) || (pp = luaL_testudata(L, i, "lorx.orxOBJECT")) || (pp = luaL_testudata(L, i, "lorx.orxSHADER#")) || (pp = luaL_testudata(L, i, "lorx.orxSHADER")) || (pp = luaL_testudata(L, i, "lorx.orxSOUND#")) || (pp = luaL_testudata(L, i, "lorx.orxSOUND")) || (pp = luaL_testudata(L, i, "lorx.orxTEXT#")) || (pp = luaL_testudata(L, i, "lorx.orxTEXT")) || (pp = luaL_testudata(L, i, "lorx.orxTEXTURE#")) || (pp = luaL_testudata(L, i, "lorx.orxTEXTURE")) || (pp = luaL_testudata(L, i, "lorx.orxVIEWPORT#")) || (pp = luaL_testudata(L, i, "lorx.orxVIEWPORT")) || (pp = luaL_testudata(L, i, "lorx.orxSTRUCTURE#")) || (pp = luaL_testudata(L, i, "lorx.orxSTRUCTURE")))
    {
      _retval = *pp;
    }
    else
    {
      luaL_error(L, "expect userdata of 'lorx.orxSTRUCTURE', 'lorx.orxSTRUCTURE#' or their subtypes!");
    }
  }
  return _retval;
}

LORX_API const orxSPAWNER* lorx_luserdata_to_orxSPAWNER_const(lua_State *L, int i)
{
  const orxSPAWNER* _retval = NULL;
  if (lua_isnil(L, i))
  {
    _retval = NULL;
  }
  else
  {
    const orxSPAWNER** pp;
    if ((pp = luaL_testudata(L, i, "lorx.orxSPAWNER#")) || (pp = luaL_testudata(L, i, "lorx.orxSPAWNER")))
    {
      _retval = *pp;
    }
    else
    {
      luaL_error(L, "expect userdata of 'lorx.orxSPAWNER' or 'lorx.orxSPAWNER#'!");
    }
  }
  return _retval;
}

LORX_API const orxFRAME* lorx_luserdata_to_orxFRAME_const(lua_State *L, int i)
{
  const orxFRAME* _retval = NULL;
  if (lua_isnil(L, i))
  {
    _retval = NULL;
  }
  else
  {
    const orxFRAME** pp;
    if ((pp = luaL_testudata(L, i, "lorx.orxFRAME#")) || (pp = luaL_testudata(L, i, "lorx.orxFRAME")))
    {
      _retval = *pp;
    }
    else
    {
      luaL_error(L, "expect userdata of 'lorx.orxFRAME' or 'lorx.orxFRAME#'!");
    }
  }
  return _retval;
}

LORX_API const orxFXPOINTER* lorx_luserdata_to_orxFXPOINTER_const(lua_State *L, int i)
{
  const orxFXPOINTER* _retval = NULL;
  if (lua_isnil(L, i))
  {
    _retval = NULL;
  }
  else
  {
    const orxFXPOINTER** pp;
    if ((pp = luaL_testudata(L, i, "lorx.orxFXPOINTER#")) || (pp = luaL_testudata(L, i, "lorx.orxFXPOINTER")))
    {
      _retval = *pp;
    }
    else
    {
      luaL_error(L, "expect userdata of 'lorx.orxFXPOINTER' or 'lorx.orxFXPOINTER#'!");
    }
  }
  return _retval;
}

LORX_API const orxOBJECT* lorx_luserdata_to_orxOBJECT_const(lua_State *L, int i)
{
  const orxOBJECT* _retval = NULL;
  if (lua_isnil(L, i))
  {
    _retval = NULL;
  }
  else
  {
    const orxOBJECT** pp;
    if ((pp = luaL_testudata(L, i, "lorx.orxOBJECT#")) || (pp = luaL_testudata(L, i, "lorx.orxOBJECT")))
    {
      _retval = *pp;
    }
    else
    {
      luaL_error(L, "expect userdata of 'lorx.orxOBJECT' or 'lorx.orxOBJECT#'!");
    }
  }
  return _retval;
}

LORX_API const orxFX* lorx_luserdata_to_orxFX_const(lua_State *L, int i)
{
  const orxFX* _retval = NULL;
  if (lua_isnil(L, i))
  {
    _retval = NULL;
  }
  else
  {
    const orxFX** pp;
    if ((pp = luaL_testudata(L, i, "lorx.orxFX#")) || (pp = luaL_testudata(L, i, "lorx.orxFX")))
    {
      _retval = *pp;
    }
    else
    {
      luaL_error(L, "expect userdata of 'lorx.orxFX' or 'lorx.orxFX#'!");
    }
  }
  return _retval;
}

LORX_API const orxTIMELINE* lorx_luserdata_to_orxTIMELINE_const(lua_State *L, int i)
{
  const orxTIMELINE* _retval = NULL;
  if (lua_isnil(L, i))
  {
    _retval = NULL;
  }
  else
  {
    const orxTIMELINE** pp;
    if ((pp = luaL_testudata(L, i, "lorx.orxTIMELINE#")) || (pp = luaL_testudata(L, i, "lorx.orxTIMELINE")))
    {
      _retval = *pp;
    }
    else
    {
      luaL_error(L, "expect userdata of 'lorx.orxTIMELINE' or 'lorx.orxTIMELINE#'!");
    }
  }
  return _retval;
}


/*
 * Conversion functions for converting from lua userdata to Orx types (structs) (non-const only)
 */
LORX_API orxFILE_INFO lorx_luserdata_to_orxFILE_INFO_struct(lua_State *L, int i)
{
  orxFILE_INFO _retval;
  {
    
    const orxFILE_INFO* p = NULL;
    if (lua_isnil(L, i))
    {
      p = NULL;
    }
    else
    {
      const orxFILE_INFO** pp;
      if ((pp = luaL_testudata(L, i, "lorx.orxFILE_INFO#")) || (pp = luaL_testudata(L, i, "lorx.orxFILE_INFO")))
      {
        p = *pp;
      }
      else
      {
        luaL_error(L, "expect userdata of 'lorx.orxFILE_INFO' or 'lorx.orxFILE_INFO#'!");
      }
    }
    if (p == NULL)
    {
      luaL_error(L, "expect non-NULL userdata!");
    }
    memcpy(&(_retval), p, sizeof(orxFILE_INFO));
  }
  return _retval;
}

LORX_API orxCOMMAND_VAR lorx_luserdata_to_orxCOMMAND_VAR_struct(lua_State *L, int i)
{
  orxCOMMAND_VAR _retval;
  {
    
    const orxCOMMAND_VAR* p = NULL;
    if (lua_isnil(L, i))
    {
      p = NULL;
    }
    else
    {
      const orxCOMMAND_VAR** pp;
      if ((pp = luaL_testudata(L, i, "lorx.orxCOMMAND_VAR#")) || (pp = luaL_testudata(L, i, "lorx.orxCOMMAND_VAR")))
      {
        p = *pp;
      }
      else
      {
        luaL_error(L, "expect userdata of 'lorx.orxCOMMAND_VAR' or 'lorx.orxCOMMAND_VAR#'!");
      }
    }
    if (p == NULL)
    {
      luaL_error(L, "expect non-NULL userdata!");
    }
    memcpy(&(_retval), p, sizeof(orxCOMMAND_VAR));
  }
  return _retval;
}

LORX_API orxANIM_CUSTOM_EVENT lorx_luserdata_to_orxANIM_CUSTOM_EVENT_struct(lua_State *L, int i)
{
  orxANIM_CUSTOM_EVENT _retval;
  {
    
    const orxANIM_CUSTOM_EVENT* p = NULL;
    if (lua_isnil(L, i))
    {
      p = NULL;
    }
    else
    {
      const orxANIM_CUSTOM_EVENT** pp;
      if ((pp = luaL_testudata(L, i, "lorx.orxANIM_CUSTOM_EVENT#")) || (pp = luaL_testudata(L, i, "lorx.orxANIM_CUSTOM_EVENT")))
      {
        p = *pp;
      }
      else
      {
        luaL_error(L, "expect userdata of 'lorx.orxANIM_CUSTOM_EVENT' or 'lorx.orxANIM_CUSTOM_EVENT#'!");
      }
    }
    if (p == NULL)
    {
      luaL_error(L, "expect non-NULL userdata!");
    }
    memcpy(&(_retval), p, sizeof(orxANIM_CUSTOM_EVENT));
  }
  return _retval;
}

LORX_API orxOBOX lorx_luserdata_to_orxOBOX_struct(lua_State *L, int i)
{
  orxOBOX _retval;
  {
    
    const orxOBOX* p = NULL;
    if (lua_isnil(L, i))
    {
      p = NULL;
    }
    else
    {
      const orxOBOX** pp;
      if ((pp = luaL_testudata(L, i, "lorx.orxOBOX#")) || (pp = luaL_testudata(L, i, "lorx.orxOBOX")))
      {
        p = *pp;
      }
      else
      {
        luaL_error(L, "expect userdata of 'lorx.orxOBOX' or 'lorx.orxOBOX#'!");
      }
    }
    if (p == NULL)
    {
      luaL_error(L, "expect non-NULL userdata!");
    }
    memcpy(&(_retval), p, sizeof(orxOBOX));
  }
  return _retval;
}

LORX_API orxVECTOR lorx_luserdata_to_orxVECTOR_struct(lua_State *L, int i)
{
  orxVECTOR _retval;
  {
    
    const orxVECTOR* p = NULL;
    if (lua_isnil(L, i))
    {
      p = NULL;
    }
    else
    {
      const orxVECTOR** pp;
      if ((pp = luaL_testudata(L, i, "lorx.orxVECTOR#")) || (pp = luaL_testudata(L, i, "lorx.orxVECTOR")))
      {
        p = *pp;
      }
      else
      {
        luaL_error(L, "expect userdata of 'lorx.orxVECTOR' or 'lorx.orxVECTOR#'!");
      }
    }
    if (p == NULL)
    {
      luaL_error(L, "expect non-NULL userdata!");
    }
    memcpy(&(_retval), p, sizeof(orxVECTOR));
  }
  return _retval;
}

LORX_API orxAABOX lorx_luserdata_to_orxAABOX_struct(lua_State *L, int i)
{
  orxAABOX _retval;
  {
    
    const orxAABOX* p = NULL;
    if (lua_isnil(L, i))
    {
      p = NULL;
    }
    else
    {
      const orxAABOX** pp;
      if ((pp = luaL_testudata(L, i, "lorx.orxAABOX#")) || (pp = luaL_testudata(L, i, "lorx.orxAABOX")))
      {
        p = *pp;
      }
      else
      {
        luaL_error(L, "expect userdata of 'lorx.orxAABOX' or 'lorx.orxAABOX#'!");
      }
    }
    if (p == NULL)
    {
      luaL_error(L, "expect non-NULL userdata!");
    }
    memcpy(&(_retval), p, sizeof(orxAABOX));
  }
  return _retval;
}

LORX_API orxRGBA lorx_luserdata_to_orxRGBA_struct(lua_State *L, int i)
{
  orxRGBA _retval;
  {
    
    const orxRGBA* p = NULL;
    if (lua_isnil(L, i))
    {
      p = NULL;
    }
    else
    {
      const orxRGBA** pp;
      if ((pp = luaL_testudata(L, i, "lorx.orxRGBA#")) || (pp = luaL_testudata(L, i, "lorx.orxRGBA")))
      {
        p = *pp;
      }
      else
      {
        luaL_error(L, "expect userdata of 'lorx.orxRGBA' or 'lorx.orxRGBA#'!");
      }
    }
    if (p == NULL)
    {
      luaL_error(L, "expect non-NULL userdata!");
    }
    memcpy(&(_retval), p, sizeof(orxRGBA));
  }
  return _retval;
}

LORX_API orxDISPLAY_TRANSFORM lorx_luserdata_to_orxDISPLAY_TRANSFORM_struct(lua_State *L, int i)
{
  orxDISPLAY_TRANSFORM _retval;
  {
    
    const orxDISPLAY_TRANSFORM* p = NULL;
    if (lua_isnil(L, i))
    {
      p = NULL;
    }
    else
    {
      const orxDISPLAY_TRANSFORM** pp;
      if ((pp = luaL_testudata(L, i, "lorx.orxDISPLAY_TRANSFORM#")) || (pp = luaL_testudata(L, i, "lorx.orxDISPLAY_TRANSFORM")))
      {
        p = *pp;
      }
      else
      {
        luaL_error(L, "expect userdata of 'lorx.orxDISPLAY_TRANSFORM' or 'lorx.orxDISPLAY_TRANSFORM#'!");
      }
    }
    if (p == NULL)
    {
      luaL_error(L, "expect non-NULL userdata!");
    }
    memcpy(&(_retval), p, sizeof(orxDISPLAY_TRANSFORM));
  }
  return _retval;
}

LORX_API orxDISPLAY_VIDEO_MODE lorx_luserdata_to_orxDISPLAY_VIDEO_MODE_struct(lua_State *L, int i)
{
  orxDISPLAY_VIDEO_MODE _retval;
  {
    
    const orxDISPLAY_VIDEO_MODE* p = NULL;
    if (lua_isnil(L, i))
    {
      p = NULL;
    }
    else
    {
      const orxDISPLAY_VIDEO_MODE** pp;
      if ((pp = luaL_testudata(L, i, "lorx.orxDISPLAY_VIDEO_MODE#")) || (pp = luaL_testudata(L, i, "lorx.orxDISPLAY_VIDEO_MODE")))
      {
        p = *pp;
      }
      else
      {
        luaL_error(L, "expect userdata of 'lorx.orxDISPLAY_VIDEO_MODE' or 'lorx.orxDISPLAY_VIDEO_MODE#'!");
      }
    }
    if (p == NULL)
    {
      luaL_error(L, "expect non-NULL userdata!");
    }
    memcpy(&(_retval), p, sizeof(orxDISPLAY_VIDEO_MODE));
  }
  return _retval;
}

LORX_API orxCHARACTER_GLYPH lorx_luserdata_to_orxCHARACTER_GLYPH_struct(lua_State *L, int i)
{
  orxCHARACTER_GLYPH _retval;
  {
    
    const orxCHARACTER_GLYPH* p = NULL;
    if (lua_isnil(L, i))
    {
      p = NULL;
    }
    else
    {
      const orxCHARACTER_GLYPH** pp;
      if ((pp = luaL_testudata(L, i, "lorx.orxCHARACTER_GLYPH#")) || (pp = luaL_testudata(L, i, "lorx.orxCHARACTER_GLYPH")))
      {
        p = *pp;
      }
      else
      {
        luaL_error(L, "expect userdata of 'lorx.orxCHARACTER_GLYPH' or 'lorx.orxCHARACTER_GLYPH#'!");
      }
    }
    if (p == NULL)
    {
      luaL_error(L, "expect non-NULL userdata!");
    }
    memcpy(&(_retval), p, sizeof(orxCHARACTER_GLYPH));
  }
  return _retval;
}

LORX_API orxCOLOR lorx_luserdata_to_orxCOLOR_struct(lua_State *L, int i)
{
  orxCOLOR _retval;
  {
    
    const orxCOLOR* p = NULL;
    if (lua_isnil(L, i))
    {
      p = NULL;
    }
    else
    {
      const orxCOLOR** pp;
      if ((pp = luaL_testudata(L, i, "lorx.orxCOLOR#")) || (pp = luaL_testudata(L, i, "lorx.orxCOLOR")))
      {
        p = *pp;
      }
      else
      {
        luaL_error(L, "expect userdata of 'lorx.orxCOLOR' or 'lorx.orxCOLOR#'!");
      }
    }
    if (p == NULL)
    {
      luaL_error(L, "expect non-NULL userdata!");
    }
    memcpy(&(_retval), p, sizeof(orxCOLOR));
  }
  return _retval;
}

LORX_API orxSOUND_FILTER_DATA lorx_luserdata_to_orxSOUND_FILTER_DATA_struct(lua_State *L, int i)
{
  orxSOUND_FILTER_DATA _retval;
  {
    
    const orxSOUND_FILTER_DATA* p = NULL;
    if (lua_isnil(L, i))
    {
      p = NULL;
    }
    else
    {
      const orxSOUND_FILTER_DATA** pp;
      if ((pp = luaL_testudata(L, i, "lorx.orxSOUND_FILTER_DATA#")) || (pp = luaL_testudata(L, i, "lorx.orxSOUND_FILTER_DATA")))
      {
        p = *pp;
      }
      else
      {
        luaL_error(L, "expect userdata of 'lorx.orxSOUND_FILTER_DATA' or 'lorx.orxSOUND_FILTER_DATA#'!");
      }
    }
    if (p == NULL)
    {
      luaL_error(L, "expect non-NULL userdata!");
    }
    memcpy(&(_retval), p, sizeof(orxSOUND_FILTER_DATA));
  }
  return _retval;
}

