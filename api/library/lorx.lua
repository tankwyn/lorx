---@meta


---@class lorx
lorx = {}

---@class voidptr
voidptr = {}

---@class orxHANDLE
orxHANDLE = {}


---@class lorxANIM_EVENT
---@field id orxANIM_EVENT
---@field sender orxSTRUCTURE
---@field recipient orxSTRUCTURE
---@field anim orxANIM
---@field animname string
---@field count integer # when id is 'loop'
---@field time number # when id is 'cut' or 'custom_event'
---@field name string # when id is 'custom_event'
---@field value number # when id is 'custom_event'
---@field raw voidptr # raw pointer of orxEVENT
local lorxANIM_EVENT = {}

---@class lorxCLOCK_EVENT
---@field id orxCLOCK_EVENT
---@field sender orxCLOCK
---@field recipient voidptr
---@field raw voidptr # raw pointer of orxEVENT
local lorxCLOCK_EVENT = {}

---@class lorxCONFIG_EVENT
---@field id orxCONFIG_EVENT
---@field sender voidptr
---@field recipient voidptr
---@field raw voidptr # raw pointer of orxEVENT
local lorxCONFIG_EVENT = {}

---@class lorxDISPLAY_EVENT
---@field id orxDISPLAY_EVENT
---@field sender voidptr|orxBITMAP
---@field recipient voidptr|orxBITMAP
---@field width integer # when id is 'set_video_mode'
---@field height integer # when id is 'set_video_mode'
---@field depth integer # when id is 'set_video_mode'
---@field refreshrate integer # when id is 'set_video_mode'
---@field previouswidth integer # when id is 'set_video_mode'
---@field previousheight integer # when id is 'set_video_mode'
---@field previousdepth integer # when id is 'set_video_mode'
---@field previousrefreshrate integer # when id is 'set_video_mode'
---@field fullscreen boolean # when id is 'set_video_mode'
---@field location string # when id is 'load_bitmap'
---@field filenameid integer # when id is 'load_bitmap'
---@field bitmapid integer # when id is 'load_bitmap'
---@field raw voidptr # raw pointer of orxEVENT
local lorxDISPLAY_EVENT = {}

---@class lorxFX_EVENT
---@field id orxFX_EVENT
---@field sender orxSTRUCTURE
---@field recipient orxSTRUCTURE
---@field fx orxFX
---@field fxname string
---@field raw voidptr # raw pointer of orxEVENT
local lorxFX_EVENT = {}

---@class lorxINPUT_EVENT
---@field id orxINPUT_EVENT
---@field sender voidptr
---@field recipient voidptr
---@field setname string
---@field inputname string
---@field typelist orxINPUT_TYPE[] # when id is 'on' or 'off'
---@field idlist string[] # when id is 'on' or 'off' (will be integer array only if type is 'external')
---@field modelist orxINPUT_MODE[] # when id is 'on' or 'off'
---@field valuelist number[] # when id is 'on' or 'off'
---@field raw voidptr # raw pointer of orxEVENT
local lorxINPUT_EVENT = {}

---@class lorxLOCALE_EVENT
---@field id orxLOCALE_EVENT
---@field sender voidptr
---@field recipient voidptr
---@field language string
---@field group string
---@field stringkey string
---@field stringvalue string
---@field raw voidptr # raw pointer of orxEVENT
local lorxLOCALE_EVENT = {}

---@class lorxOBJECT_EVENT
---@field id orxOBJECT_EVENT
---@field sender orxOBJECT
---@field recipient orxOBJECT
---@field raw voidptr # raw pointer of orxEVENT
local lorxOBJECT_EVENT = {}

---@class lorxRENDER_EVENT
---@field id orxRENDER_EVENT
---@field sender orxVIEWPORT|orxOBJECT|voidptr
---@field recipient orxVIEWPORT|orxOBJECT|voidptr
---@field transform orxDISPLAY_TRANSFORM # when id is 'object_start' or 'object_stop'
---@field raw voidptr # raw pointer of orxEVENT
local lorxRENDER_EVENT = {}

---@class lorxVIEWPORT_EVENT
---@field id orxVIEWPORT_EVENT
---@field sender orxVIEWPORT
---@field recipient orxVIEWPORT
---@field raw voidptr # raw pointer of orxEVENT
local lorxVIEWPORT_EVENT = {}

---@class lorxTIMELINE_EVENT
---@field id orxTIMELINE_EVENT
---@field sender orxSTRUCTURE
---@field recipient orxSTRUCTURE
---@field timeline orxTIMELINE
---@field trackname string
---@field event string
---@field timestamp number
---@field raw voidptr # raw pointer of orxEVENT
local lorxTIMELINE_EVENT = {}

---@class lorxTEXTURE_EVENT
---@field id orxTEXTURE_EVENT
---@field sender orxTEXTURE
---@field recipient orxTEXTURE
---@field raw voidptr # raw pointer of orxEVENT
local lorxTEXTURE_EVENT = {}

---@class lorxSYSTEM_EVENT
---@field id orxSYSTEM_EVENT
---@field sender voidptr # should be NULL
---@field recipient voidptr # should be NULL
---@field time number # when id is 'touch_*' or 'accelerate'
---@field touchid integer # when id is 'touch_*'
---@field pressure number # when id is 'touch_*'
---@field x number # when id is 'touch_*'
---@field y number # when id is 'touch_*'
---@field acceleration orxVECTOR  # when id is 'accelerate'
---@field valuelist string[] # when id is 'drop'
---@field value string # when id is 'clipboard'
---@field framecount integer # when id is 'game_loop_start' or 'game_loop_stop'
---@field raw voidptr # raw pointer of orxEVENT
local lorxSYSTEM_EVENT = {}

---@class lorxSHADER_EVENT
---@field id orxSHADER_EVENT
---@field sender orxSTRUCTURE
---@field recipient orxSTRUCTURE
---@field shader orxSHADER
---@field shadername string
---@field paramname string
---@field paramtype orxSHADER_PARAM_TYPE
---@field paramindex integer
---@field value number|orxTEXTURE|orxVECTOR # the type of this field depends on `paramtype`
---@field raw voidptr # raw pointer of orxEVENT
local lorxSHADER_EVENT = {}

---@class lorxSPAWNER_EVENT
---@field id orxSPAWNER_EVENT
---@field sender orxSPAWNER
---@field recipient orxOBJECT
---@field raw voidptr # raw pointer of orxEVENT
local lorxSPAWNER_EVENT = {}

---@class lorxSOUND_EVENT
---@field id orxSOUND_EVENT
---@field sender orxHANDLE|orxOBJECT|orxSTRUCTURE|voidptr
---@field recipient orxOBJECT|voidptr
---@field streaminfo orxSOUND_STREAM_INFO # when id is 'packet' or 'recording_*'
---@field streampacket orxSOUND_STREAM_PACKET # when id is 'packet' or 'recording_*'
---@field filterdata orxSOUND_FILTER_DATA # when id is 'set_filter_param'
---@field filterbusid integer # when id is 'set_filter_param'
---@field raw voidptr # raw pointer of orxEVENT
local lorxSOUND_EVENT = {}

---@class lorxRESOURCE_EVENT
---@field id orxRESOURCE_EVENT
---@field sender voidptr
---@field recipient voidptr
---@field time integer
---@field location string
---@field groupid integer
---@field nameid integer
---@field typetag string
---@field raw voidptr # raw pointer of orxEVENT
local lorxRESOURCE_EVENT = {}

---@class lorxPHYSICS_EVENT
---@field id orxPHYSICS_EVENT
---@field sender orxOBJECT
---@field recipient orxOBJECT
---@field position orxVECTOR
---@field normal orxVECTOR
---@field raw voidptr # raw pointer of orxEVENT
local lorxPHYSICS_EVENT = {}


---
---Run lorx
---
---@param _init lorxINIT_CALLBACK
---@param _update lorxUPDATE_CALLBACK
---@param _exit lorxEXIT_CALLBACK # optional
function lorx.execute(_init, _update, _exit) end

---
---Stop lorx (stop the main loop and cause normal exit)
---
function lorx.stop() end

---
---Get Lorx version
---
---@return string
function lorx.getVersion() end

---
---Get runtime Orx version
---
---@return string
function lorx.getOrxVersion() end

---
---Get bind Orx version
---
---@return string
function lorx.getBindOrxVersion() end

---
---Register the update callback, will unregister the existing one
---
---@param _update lorxUPDATE_CALLBACK
function lorx.registerUpdate(_update) end

---
---Unregister current update callback
---
---@return boolean # false if the callback was not set
function lorx.unregisterUpdate() end

---
---Register anim event handler, will unregister the existing one
---
---@param _ecb fun(e:lorxANIM_EVENT):orxSTATUS
---@return orxSTATUS # success / failure
function lorx.registerAnimHandler(_ecb) end

---
---Unregister current anim event handler
---
---@return boolean # false if the callback was not set
function lorx.unregisterAnimHandler() end

---
---Register clock event handler, will unregister the existing one
---
---@param _ecb fun(e:lorxCLOCK_EVENT):orxSTATUS
---@return orxSTATUS # success / failure
function lorx.registerClockHandler(_ecb) end

---
---Unregister current clock event handler
---
---@return boolean # false if the callback was not set
function lorx.unregisterClockHandler() end

---
---Register config event handler, will unregister the existing one
---
---@param _ecb fun(e:lorxCONFIG_EVENT):orxSTATUS
---@return orxSTATUS # success / failure
function lorx.registerConfigHandler(_ecb) end

---
---Unregister current config event handler
---
---@return boolean # false if the callback was not set
function lorx.unregisterConfigHandler() end

---
---Register display event handler, will unregister the existing one
---
---@param _ecb fun(e:lorxDISPLAY_EVENT):orxSTATUS
---@return orxSTATUS # success / failure
function lorx.registerDisplayHandler(_ecb) end

---
---Unregister current display event handler
---
---@return boolean # false if the callback was not set
function lorx.unregisterDisplayHandler() end

---
---Register fx event handler, will unregister the existing one
---
---@param _ecb fun(e:lorxFX_EVENT):orxSTATUS
---@return orxSTATUS # success / failure
function lorx.registerFXHandler(_ecb) end

---
---Unregister current fx event handler
---
---@return boolean # false if the callback was not set
function lorx.unregisterFXHandler() end

---
---Register input event handler, will unregister the existing one
---
---@param _ecb fun(e:lorxINPUT_EVENT):orxSTATUS
---@return orxSTATUS # success / failure
function lorx.registerInputHandler(_ecb) end

---
---Unregister current input event handler
---
---@return boolean # false if the callback was not set
function lorx.unregisterInputHandler() end

---
---Register locale event handler, will unregister the existing one
---
---@param _ecb fun(e:lorxLOCALE_EVENT):orxSTATUS
---@return orxSTATUS # success / failure
function lorx.registerLocaleHandler(_ecb) end

---
---Unregister current locale event handler
---
---@return boolean # false if the callback was not set
function lorx.unregisterLocaleHandler() end

---
---Register object event handler, will unregister the existing one
---
---@param _ecb fun(e:lorxOBJECT_EVENT):orxSTATUS
---@return orxSTATUS # success / failure
function lorx.registerObjectHandler(_ecb) end

---
---Unregister current object event handler
---
---@return boolean # false if the callback was not set
function lorx.unregisterObjectHandler() end

---
---Register render event handler, will unregister the existing one
---
---@param _ecb fun(e:lorxRENDER_EVENT):orxSTATUS
---@return orxSTATUS # success / failure
function lorx.registerRenderHandler(_ecb) end

---
---Unregister current render event handler
---
---@return boolean # false if the callback was not set
function lorx.unregisterRenderHandler() end

---
---Register physics event handler, will unregister the existing one
---
---@param _ecb fun(e:lorxPHYSICS_EVENT):orxSTATUS
---@return orxSTATUS # success / failure
function lorx.registerPhysicsHandler(_ecb) end

---
---Unregister current physics event handler
---
---@return boolean # false if the callback was not set
function lorx.unregisterPhysicsHandler() end

---
---Register resource event handler, will unregister the existing one
---
---@param _ecb fun(e:lorxRESOURCE_EVENT):orxSTATUS
---@return orxSTATUS # success / failure
function lorx.registerResourceHandler(_ecb) end

---
---Unregister current resource event handler
---
---@return boolean # false if the callback was not set
function lorx.unregisterResourceHandler() end

---
---Register shader event handler, will unregister the existing one
---
---@param _ecb fun(e:lorxSHADER_EVENT):orxSTATUS
---@return orxSTATUS # success / failure
function lorx.registerShaderHandler(_ecb) end

---
---Unregister current shader event handler
---
---@return boolean # false if the callback was not set
function lorx.unregisterShaderHandler() end

---
---Register sound event handler, will unregister the existing one
---
---@param _ecb fun(e:lorxSOUND_EVENT):orxSTATUS
---@return orxSTATUS # success / failure
function lorx.registerSoundHandler(_ecb) end

---
---Unregister current sound event handler
---
---@return boolean # false if the callback was not set
function lorx.unregisterSoundHandler() end

---
---Register spawner event handler, will unregister the existing one
---
---@param _ecb fun(e:lorxSPAWNER_EVENT):orxSTATUS
---@return orxSTATUS # success / failure
function lorx.registerSpawnerHandler(_ecb) end

---
---Unregister current spawner event handler
---
---@return boolean # false if the callback was not set
function lorx.unregisterSpawnerHandler() end

---
---Register system event handler, will unregister the existing one
---
---@param _ecb fun(e:lorxSYSTEM_EVENT):orxSTATUS
---@return orxSTATUS # success / failure
function lorx.registerSystemHandler(_ecb) end

---
---Unregister current system event handler
---
---@return boolean # false if the callback was not set
function lorx.unregisterSystemHandler() end

---
---Register texture event handler, will unregister the existing one
---
---@param _ecb fun(e:lorxTEXTURE_EVENT):orxSTATUS
---@return orxSTATUS # success / failure
function lorx.registerTextureHandler(_ecb) end

---
---Unregister current texture event handler
---
---@return boolean # false if the callback was not set
function lorx.unregisterTextureHandler() end

---
---Register timeline event handler, will unregister the existing one
---
---@param _ecb fun(e:lorxTIMELINE_EVENT):orxSTATUS
---@return orxSTATUS # success / failure
function lorx.registerTimelineHandler(_ecb) end

---
---Unregister current timeline event handler
---
---@return boolean # false if the callback was not set
function lorx.unregisterTimelineHandler() end

---
---Register viewport event handler, will unregister the existing one
---
---@param _ecb fun(e:lorxVIEWPORT_EVENT):orxSTATUS
---@return orxSTATUS # success / failure
function lorx.registerViewportHandler(_ecb) end

---
---Unregister current viewport event handler
---
---@return boolean # false if the callback was not set
function lorx.unregisterViewportHandler() end


---@alias lorxLOG_CALLBACK fun(level:orxDEBUG_LEVEL, func:string, file:string, line:integer, log:string):orxSTATUS

---@alias lorxCLOCK_CALLBACK fun(ci:orxCLOCK_INFO)

---@alias lorxINIT_CALLBACK fun():orxSTATUS

---@alias lorxUPDATE_CALLBACK fun(ci:orxCLOCK_INFO)

---@alias lorxEXIT_CALLBACK fun()

---@alias lorxCFGSAVE_CALLBACK fun(section:string, key:string, file:string, useencryption:boolean):boolean

---@alias lorxCFGCLEAR_CALLBACK fun(section:string, key:string):boolean


---@alias orxANIM_EVENT string | "'start'" | "'stop'" | "'cut'" | "'loop'" | "'update'" | "'custom_event'" | "'none'"

---@alias orxCLOCK_EVENT string | "'restart'" | "'resync'" | "'pause'" | "'unpause'" | "'none'"

---@alias orxCLOCK_MODIFIER string | "'fixed'" | "'multiply'" | "'maxed'" | "'average'" | "'none'"

---@alias orxCLOCK_PRIORITY string | "'lowest'" | "'lower'" | "'low'" | "'normal'" | "'high'" | "'higher'" | "'highest'" | "'none'"

---@alias orxCOMMAND_VAR_TYPE string | "'string'" | "'float'" | "'s32'" | "'u32'" | "'s64'" | "'u64'" | "'bool'" | "'vector'" | "'numeric'" | "'none'"

---@alias orxCONFIG_EVENT string | "'reload_start'" | "'reload_stop'" | "'none'"

---@alias orxDEBUG_LEVEL string | "'anim'" | "'config'" | "'clock'" | "'command'" | "'display'" | "'file'" | "'input'" | "'joystick'" | "'keyboard'" | "'memory'" | "'mouse'" | "'object'" | "'param'" | "'physics'" | "'plugin'" | "'profiler'" | "'render'" | "'screenshot'" | "'sound'" | "'system'" | "'timer'" | "'log'" | "'assert'" | "'user'" | "'all'" | "'none'"

---@alias orxDISPLAY_BLEND_MODE string | "'alpha'" | "'multiply'" | "'add'" | "'premul'" | "'none'"

---@alias orxDISPLAY_EVENT string | "'set_video_mode'" | "'load_bitmap'" | "'none'"

---@alias orxDISPLAY_PRIMITIVE string | "'points'" | "'lines'" | "'line_loop'" | "'line_strip'" | "'triangles'" | "'triangle_strip'" | "'triangle_fan'" | "'none'"

---@alias orxDISPLAY_SMOOTHING string | "'default'" | "'on'" | "'off'" | "'none'"

---@alias orxEVENT_TYPE string | "'anim'" | "'clock'" | "'config'" | "'display'" | "'fx'" | "'input'" | "'locale'" | "'object'" | "'render'" | "'physics'" | "'resource'" | "'shader'" | "'sound'" | "'spawner'" | "'system'" | "'texture'" | "'timeline'" | "'viewport'" | "'first_reserved'" | "'last_reserved'" | "'user_defined'" | "'none'"

---@alias orxFRAME_SPACE string | "'global'" | "'local'" | "'none'"

---@alias orxFX_CURVE string | "'linear'" | "'smooth'" | "'smoother'" | "'triangle'" | "'sine'" | "'square'" | "'none'"

---@alias orxFX_EVENT string | "'start'" | "'stop'" | "'add'" | "'remove'" | "'loop'" | "'none'"

---@alias orxINPUT_EVENT string | "'on'" | "'off'" | "'select_set'" | "'remove_set'" | "'none'"

---@alias orxINPUT_MODE string | "'full'" | "'positive'" | "'negative'" | "'none'"

---@alias orxINPUT_TYPE string | "'keyboard_key'" | "'mouse_button'" | "'mouse_axis'" | "'joystick_button'" | "'joystick_axis'" | "'external'" | "'none'"

---@alias orxJOYSTICK_AXIS string | "'lx_1'" | "'ly_1'" | "'rx_1'" | "'ry_1'" | "'ltrigger_1'" | "'rtrigger_1'" | "'lx_2'" | "'ly_2'" | "'rx_2'" | "'ry_2'" | "'ltrigger_2'" | "'rtrigger_2'" | "'lx_3'" | "'ly_3'" | "'rx_3'" | "'ry_3'" | "'ltrigger_3'" | "'rtrigger_3'" | "'lx_4'" | "'ly_4'" | "'rx_4'" | "'ry_4'" | "'ltrigger_4'" | "'rtrigger_4'" | "'lx_5'" | "'ly_5'" | "'rx_5'" | "'ry_5'" | "'ltrigger_5'" | "'rtrigger_5'" | "'lx_6'" | "'ly_6'" | "'rx_6'" | "'ry_6'" | "'ltrigger_6'" | "'rtrigger_6'" | "'lx_7'" | "'ly_7'" | "'rx_7'" | "'ry_7'" | "'ltrigger_7'" | "'rtrigger_7'" | "'lx_8'" | "'ly_8'" | "'rx_8'" | "'ry_8'" | "'ltrigger_8'" | "'rtrigger_8'" | "'lx_9'" | "'ly_9'" | "'rx_9'" | "'ry_9'" | "'ltrigger_9'" | "'rtrigger_9'" | "'lx_10'" | "'ly_10'" | "'rx_10'" | "'ry_10'" | "'ltrigger_10'" | "'rtrigger_10'" | "'lx_11'" | "'ly_11'" | "'rx_11'" | "'ry_11'" | "'ltrigger_11'" | "'rtrigger_11'" | "'lx_12'" | "'ly_12'" | "'rx_12'" | "'ry_12'" | "'ltrigger_12'" | "'rtrigger_12'" | "'lx_13'" | "'ly_13'" | "'rx_13'" | "'ry_13'" | "'ltrigger_13'" | "'rtrigger_13'" | "'lx_14'" | "'ly_14'" | "'rx_14'" | "'ry_14'" | "'ltrigger_14'" | "'rtrigger_14'" | "'lx_15'" | "'ly_15'" | "'rx_15'" | "'ry_15'" | "'ltrigger_15'" | "'rtrigger_15'" | "'lx_16'" | "'ly_16'" | "'rx_16'" | "'ry_16'" | "'ltrigger_16'" | "'rtrigger_16'" | "'none'"

---@alias orxJOYSTICK_BUTTON string | "'a_1'" | "'b_1'" | "'x_1'" | "'y_1'" | "'lbumper_1'" | "'rbumper_1'" | "'back_1'" | "'start_1'" | "'guide_1'" | "'lthumb_1'" | "'rthumb_1'" | "'up_1'" | "'right_1'" | "'down_1'" | "'left_1'" | "'1_1'" | "'2_1'" | "'3_1'" | "'4_1'" | "'5_1'" | "'6_1'" | "'7_1'" | "'8_1'" | "'9_1'" | "'10_1'" | "'11_1'" | "'12_1'" | "'13_1'" | "'14_1'" | "'15_1'" | "'16_1'" | "'17_1'" | "'18_1'" | "'19_1'" | "'20_1'" | "'21_1'" | "'22_1'" | "'23_1'" | "'24_1'" | "'25_1'" | "'a_2'" | "'b_2'" | "'x_2'" | "'y_2'" | "'lbumper_2'" | "'rbumper_2'" | "'back_2'" | "'start_2'" | "'guide_2'" | "'lthumb_2'" | "'rthumb_2'" | "'up_2'" | "'right_2'" | "'down_2'" | "'left_2'" | "'1_2'" | "'2_2'" | "'3_2'" | "'4_2'" | "'5_2'" | "'6_2'" | "'7_2'" | "'8_2'" | "'9_2'" | "'10_2'" | "'11_2'" | "'12_2'" | "'13_2'" | "'14_2'" | "'15_2'" | "'16_2'" | "'17_2'" | "'18_2'" | "'19_2'" | "'20_2'" | "'21_2'" | "'22_2'" | "'23_2'" | "'24_2'" | "'25_2'" | "'a_3'" | "'b_3'" | "'x_3'" | "'y_3'" | "'lbumper_3'" | "'rbumper_3'" | "'back_3'" | "'start_3'" | "'guide_3'" | "'lthumb_3'" | "'rthumb_3'" | "'up_3'" | "'right_3'" | "'down_3'" | "'left_3'" | "'1_3'" | "'2_3'" | "'3_3'" | "'4_3'" | "'5_3'" | "'6_3'" | "'7_3'" | "'8_3'" | "'9_3'" | "'10_3'" | "'11_3'" | "'12_3'" | "'13_3'" | "'14_3'" | "'15_3'" | "'16_3'" | "'17_3'" | "'18_3'" | "'19_3'" | "'20_3'" | "'21_3'" | "'22_3'" | "'23_3'" | "'24_3'" | "'25_3'" | "'a_4'" | "'b_4'" | "'x_4'" | "'y_4'" | "'lbumper_4'" | "'rbumper_4'" | "'back_4'" | "'start_4'" | "'guide_4'" | "'lthumb_4'" | "'rthumb_4'" | "'up_4'" | "'right_4'" | "'down_4'" | "'left_4'" | "'1_4'" | "'2_4'" | "'3_4'" | "'4_4'" | "'5_4'" | "'6_4'" | "'7_4'" | "'8_4'" | "'9_4'" | "'10_4'" | "'11_4'" | "'12_4'" | "'13_4'" | "'14_4'" | "'15_4'" | "'16_4'" | "'17_4'" | "'18_4'" | "'19_4'" | "'20_4'" | "'21_4'" | "'22_4'" | "'23_4'" | "'24_4'" | "'25_4'" | "'a_5'" | "'b_5'" | "'x_5'" | "'y_5'" | "'lbumper_5'" | "'rbumper_5'" | "'back_5'" | "'start_5'" | "'guide_5'" | "'lthumb_5'" | "'rthumb_5'" | "'up_5'" | "'right_5'" | "'down_5'" | "'left_5'" | "'1_5'" | "'2_5'" | "'3_5'" | "'4_5'" | "'5_5'" | "'6_5'" | "'7_5'" | "'8_5'" | "'9_5'" | "'10_5'" | "'11_5'" | "'12_5'" | "'13_5'" | "'14_5'" | "'15_5'" | "'16_5'" | "'17_5'" | "'18_5'" | "'19_5'" | "'20_5'" | "'21_5'" | "'22_5'" | "'23_5'" | "'24_5'" | "'25_5'" | "'a_6'" | "'b_6'" | "'x_6'" | "'y_6'" | "'lbumper_6'" | "'rbumper_6'" | "'back_6'" | "'start_6'" | "'guide_6'" | "'lthumb_6'" | "'rthumb_6'" | "'up_6'" | "'right_6'" | "'down_6'" | "'left_6'" | "'1_6'" | "'2_6'" | "'3_6'" | "'4_6'" | "'5_6'" | "'6_6'" | "'7_6'" | "'8_6'" | "'9_6'" | "'10_6'" | "'11_6'" | "'12_6'" | "'13_6'" | "'14_6'" | "'15_6'" | "'16_6'" | "'17_6'" | "'18_6'" | "'19_6'" | "'20_6'" | "'21_6'" | "'22_6'" | "'23_6'" | "'24_6'" | "'25_6'" | "'a_7'" | "'b_7'" | "'x_7'" | "'y_7'" | "'lbumper_7'" | "'rbumper_7'" | "'back_7'" | "'start_7'" | "'guide_7'" | "'lthumb_7'" | "'rthumb_7'" | "'up_7'" | "'right_7'" | "'down_7'" | "'left_7'" | "'1_7'" | "'2_7'" | "'3_7'" | "'4_7'" | "'5_7'" | "'6_7'" | "'7_7'" | "'8_7'" | "'9_7'" | "'10_7'" | "'11_7'" | "'12_7'" | "'13_7'" | "'14_7'" | "'15_7'" | "'16_7'" | "'17_7'" | "'18_7'" | "'19_7'" | "'20_7'" | "'21_7'" | "'22_7'" | "'23_7'" | "'24_7'" | "'25_7'" | "'a_8'" | "'b_8'" | "'x_8'" | "'y_8'" | "'lbumper_8'" | "'rbumper_8'" | "'back_8'" | "'start_8'" | "'guide_8'" | "'lthumb_8'" | "'rthumb_8'" | "'up_8'" | "'right_8'" | "'down_8'" | "'left_8'" | "'1_8'" | "'2_8'" | "'3_8'" | "'4_8'" | "'5_8'" | "'6_8'" | "'7_8'" | "'8_8'" | "'9_8'" | "'10_8'" | "'11_8'" | "'12_8'" | "'13_8'" | "'14_8'" | "'15_8'" | "'16_8'" | "'17_8'" | "'18_8'" | "'19_8'" | "'20_8'" | "'21_8'" | "'22_8'" | "'23_8'" | "'24_8'" | "'25_8'" | "'a_9'" | "'b_9'" | "'x_9'" | "'y_9'" | "'lbumper_9'" | "'rbumper_9'" | "'back_9'" | "'start_9'" | "'guide_9'" | "'lthumb_9'" | "'rthumb_9'" | "'up_9'" | "'right_9'" | "'down_9'" | "'left_9'" | "'1_9'" | "'2_9'" | "'3_9'" | "'4_9'" | "'5_9'" | "'6_9'" | "'7_9'" | "'8_9'" | "'9_9'" | "'10_9'" | "'11_9'" | "'12_9'" | "'13_9'" | "'14_9'" | "'15_9'" | "'16_9'" | "'17_9'" | "'18_9'" | "'19_9'" | "'20_9'" | "'21_9'" | "'22_9'" | "'23_9'" | "'24_9'" | "'25_9'" | "'a_10'" | "'b_10'" | "'x_10'" | "'y_10'" | "'lbumper_10'" | "'rbumper_10'" | "'back_10'" | "'start_10'" | "'guide_10'" | "'lthumb_10'" | "'rthumb_10'" | "'up_10'" | "'right_10'" | "'down_10'" | "'left_10'" | "'1_10'" | "'2_10'" | "'3_10'" | "'4_10'" | "'5_10'" | "'6_10'" | "'7_10'" | "'8_10'" | "'9_10'" | "'10_10'" | "'11_10'" | "'12_10'" | "'13_10'" | "'14_10'" | "'15_10'" | "'16_10'" | "'17_10'" | "'18_10'" | "'19_10'" | "'20_10'" | "'21_10'" | "'22_10'" | "'23_10'" | "'24_10'" | "'25_10'" | "'a_11'" | "'b_11'" | "'x_11'" | "'y_11'" | "'lbumper_11'" | "'rbumper_11'" | "'back_11'" | "'start_11'" | "'guide_11'" | "'lthumb_11'" | "'rthumb_11'" | "'up_11'" | "'right_11'" | "'down_11'" | "'left_11'" | "'1_11'" | "'2_11'" | "'3_11'" | "'4_11'" | "'5_11'" | "'6_11'" | "'7_11'" | "'8_11'" | "'9_11'" | "'10_11'" | "'11_11'" | "'12_11'" | "'13_11'" | "'14_11'" | "'15_11'" | "'16_11'" | "'17_11'" | "'18_11'" | "'19_11'" | "'20_11'" | "'21_11'" | "'22_11'" | "'23_11'" | "'24_11'" | "'25_11'" | "'a_12'" | "'b_12'" | "'x_12'" | "'y_12'" | "'lbumper_12'" | "'rbumper_12'" | "'back_12'" | "'start_12'" | "'guide_12'" | "'lthumb_12'" | "'rthumb_12'" | "'up_12'" | "'right_12'" | "'down_12'" | "'left_12'" | "'1_12'" | "'2_12'" | "'3_12'" | "'4_12'" | "'5_12'" | "'6_12'" | "'7_12'" | "'8_12'" | "'9_12'" | "'10_12'" | "'11_12'" | "'12_12'" | "'13_12'" | "'14_12'" | "'15_12'" | "'16_12'" | "'17_12'" | "'18_12'" | "'19_12'" | "'20_12'" | "'21_12'" | "'22_12'" | "'23_12'" | "'24_12'" | "'25_12'" | "'a_13'" | "'b_13'" | "'x_13'" | "'y_13'" | "'lbumper_13'" | "'rbumper_13'" | "'back_13'" | "'start_13'" | "'guide_13'" | "'lthumb_13'" | "'rthumb_13'" | "'up_13'" | "'right_13'" | "'down_13'" | "'left_13'" | "'1_13'" | "'2_13'" | "'3_13'" | "'4_13'" | "'5_13'" | "'6_13'" | "'7_13'" | "'8_13'" | "'9_13'" | "'10_13'" | "'11_13'" | "'12_13'" | "'13_13'" | "'14_13'" | "'15_13'" | "'16_13'" | "'17_13'" | "'18_13'" | "'19_13'" | "'20_13'" | "'21_13'" | "'22_13'" | "'23_13'" | "'24_13'" | "'25_13'" | "'a_14'" | "'b_14'" | "'x_14'" | "'y_14'" | "'lbumper_14'" | "'rbumper_14'" | "'back_14'" | "'start_14'" | "'guide_14'" | "'lthumb_14'" | "'rthumb_14'" | "'up_14'" | "'right_14'" | "'down_14'" | "'left_14'" | "'1_14'" | "'2_14'" | "'3_14'" | "'4_14'" | "'5_14'" | "'6_14'" | "'7_14'" | "'8_14'" | "'9_14'" | "'10_14'" | "'11_14'" | "'12_14'" | "'13_14'" | "'14_14'" | "'15_14'" | "'16_14'" | "'17_14'" | "'18_14'" | "'19_14'" | "'20_14'" | "'21_14'" | "'22_14'" | "'23_14'" | "'24_14'" | "'25_14'" | "'a_15'" | "'b_15'" | "'x_15'" | "'y_15'" | "'lbumper_15'" | "'rbumper_15'" | "'back_15'" | "'start_15'" | "'guide_15'" | "'lthumb_15'" | "'rthumb_15'" | "'up_15'" | "'right_15'" | "'down_15'" | "'left_15'" | "'1_15'" | "'2_15'" | "'3_15'" | "'4_15'" | "'5_15'" | "'6_15'" | "'7_15'" | "'8_15'" | "'9_15'" | "'10_15'" | "'11_15'" | "'12_15'" | "'13_15'" | "'14_15'" | "'15_15'" | "'16_15'" | "'17_15'" | "'18_15'" | "'19_15'" | "'20_15'" | "'21_15'" | "'22_15'" | "'23_15'" | "'24_15'" | "'25_15'" | "'a_16'" | "'b_16'" | "'x_16'" | "'y_16'" | "'lbumper_16'" | "'rbumper_16'" | "'back_16'" | "'start_16'" | "'guide_16'" | "'lthumb_16'" | "'rthumb_16'" | "'up_16'" | "'right_16'" | "'down_16'" | "'left_16'" | "'1_16'" | "'2_16'" | "'3_16'" | "'4_16'" | "'5_16'" | "'6_16'" | "'7_16'" | "'8_16'" | "'9_16'" | "'10_16'" | "'11_16'" | "'12_16'" | "'13_16'" | "'14_16'" | "'15_16'" | "'16_16'" | "'17_16'" | "'18_16'" | "'19_16'" | "'20_16'" | "'21_16'" | "'22_16'" | "'23_16'" | "'24_16'" | "'25_16'" | "'none'"

---@alias orxKEYBOARD_KEY string | "'0'" | "'1'" | "'2'" | "'3'" | "'4'" | "'5'" | "'6'" | "'7'" | "'8'" | "'9'" | "'a'" | "'b'" | "'c'" | "'d'" | "'e'" | "'f'" | "'g'" | "'h'" | "'i'" | "'j'" | "'k'" | "'l'" | "'m'" | "'n'" | "'o'" | "'p'" | "'q'" | "'r'" | "'s'" | "'t'" | "'u'" | "'v'" | "'w'" | "'x'" | "'y'" | "'z'" | "'space'" | "'quote'" | "'comma'" | "'dash'" | "'period'" | "'slash'" | "'semicolon'" | "'equal'" | "'lbracket'" | "'backslash'" | "'rbracket'" | "'backquote'" | "'world_1'" | "'world_2'" | "'escape'" | "'enter'" | "'tab'" | "'backspace'" | "'insert'" | "'delete'" | "'right'" | "'left'" | "'down'" | "'up'" | "'page_up'" | "'page_down'" | "'home'" | "'end'" | "'caps_lock'" | "'scroll_lock'" | "'num_lock'" | "'print_screen'" | "'pause'" | "'volume_down'" | "'volume_up'" | "'f1'" | "'f2'" | "'f3'" | "'f4'" | "'f5'" | "'f6'" | "'f7'" | "'f8'" | "'f9'" | "'f10'" | "'f11'" | "'f12'" | "'f13'" | "'f14'" | "'f15'" | "'f16'" | "'f17'" | "'f18'" | "'f19'" | "'f20'" | "'f21'" | "'f22'" | "'f23'" | "'f24'" | "'f25'" | "'numpad_0'" | "'numpad_1'" | "'numpad_2'" | "'numpad_3'" | "'numpad_4'" | "'numpad_5'" | "'numpad_6'" | "'numpad_7'" | "'numpad_8'" | "'numpad_9'" | "'numpad_decimal'" | "'numpad_divide'" | "'numpad_multiply'" | "'numpad_subtract'" | "'numpad_add'" | "'numpad_enter'" | "'numpad_equal'" | "'lshift'" | "'lctrl'" | "'lalt'" | "'lsystem'" | "'rshift'" | "'rctrl'" | "'ralt'" | "'rsystem'" | "'menu'" | "'none'"

---@alias orxLOCALE_EVENT string | "'select_language'" | "'set_string'" | "'none'"

---@alias orxMODULE_ID string | "'anim'" | "'animpointer'" | "'animset'" | "'bank'" | "'body'" | "'camera'" | "'clock'" | "'command'" | "'config'" | "'console'" | "'display'" | "'event'" | "'file'" | "'font'" | "'fps'" | "'frame'" | "'fx'" | "'fxpointer'" | "'graphic'" | "'input'" | "'joystick'" | "'keyboard'" | "'locale'" | "'main'" | "'memory'" | "'mouse'" | "'object'" | "'param'" | "'physics'" | "'plugin'" | "'profiler'" | "'render'" | "'resource'" | "'screenshot'" | "'shader'" | "'shaderpointer'" | "'sound'" | "'soundpointer'" | "'soundsystem'" | "'spawner'" | "'string'" | "'structure'" | "'system'" | "'text'" | "'texture'" | "'thread'" | "'timeline'" | "'viewport'" | "'user_defined'" | "'none'"

---@alias orxMOUSE_AXIS string | "'x'" | "'y'" | "'none'"

---@alias orxMOUSE_BUTTON string | "'left'" | "'right'" | "'middle'" | "'extra_1'" | "'extra_2'" | "'extra_3'" | "'extra_4'" | "'extra_5'" | "'wheel_up'" | "'wheel_down'" | "'none'"

---@alias orxOBJECT_EVENT string | "'create'" | "'delete'" | "'prepare'" | "'enable'" | "'disable'" | "'pause'" | "'unpause'" | "'none'"

---@alias orxPHYSICS_EVENT string | "'contact_add'" | "'contact_remove'" | "'none'"

---@alias orxRENDER_EVENT string | "'start'" | "'stop'" | "'viewport_start'" | "'viewport_stop'" | "'object_start'" | "'object_stop'" | "'console_start'" | "'console_stop'" | "'profiler_start'" | "'profiler_stop'" | "'none'"

---@alias orxRESOURCE_EVENT string | "'update'" | "'add'" | "'remove'" | "'none'"

---@alias orxSEEK_OFFSET_WHENCE string | "'start'" | "'current'" | "'end'" | "'none'"

---@alias orxSHADER_EVENT string | "'set_param'" | "'none'"

---@alias orxSHADER_PARAM_TYPE string | "'float'" | "'texture'" | "'vector'" | "'time'" | "'none'"

---@alias orxSOUNDSYSTEM_STATUS string | "'play'" | "'pause'" | "'stop'" | "'none'"

---@alias orxSOUND_EVENT string | "'start'" | "'stop'" | "'add'" | "'remove'" | "'packet'" | "'recording_start'" | "'recording_stop'" | "'recording_packet'" | "'set_filter_param'" | "'none'"

---@alias orxSOUND_FILTER_TYPE string | "'biquad'" | "'low_pass'" | "'high_pass'" | "'band_pass'" | "'low_shelf'" | "'high_shelf'" | "'notch'" | "'peaking'" | "'delay'" | "'custom'" | "'none'"

---@alias orxSOUND_STATUS string | "'play'" | "'pause'" | "'stop'" | "'none'"

---@alias orxSPAWNER_EVENT string | "'spawn'" | "'create'" | "'delete'" | "'reset'" | "'empty'" | "'wave_start'" | "'wave_stop'" | "'none'"

---@alias orxSTATUS string | "'failure'" | "'success'" | "'none'"

---@alias orxSTRUCTURE_ID string | "'animpointer'" | "'body'" | "'clock'" | "'frame'" | "'fxpointer'" | "'graphic'" | "'shaderpointer'" | "'soundpointer'" | "'spawner'" | "'timeline'" | "'anim'" | "'animset'" | "'camera'" | "'font'" | "'fx'" | "'object'" | "'shader'" | "'sound'" | "'text'" | "'texture'" | "'viewport'" | "'none'"

---@alias orxSTRUCTURE_STORAGE_TYPE string | "'linklist'" | "'tree'" | "'none'"

---@alias orxSYSTEM_EVENT string | "'close'" | "'focus_gained'" | "'focus_lost'" | "'background'" | "'foreground'" | "'game_loop_start'" | "'game_loop_stop'" | "'touch_begin'" | "'touch_move'" | "'touch_end'" | "'accelerate'" | "'motion_shake'" | "'drop'" | "'clipboard'" | "'none'"

---@alias orxTEXTURE_EVENT string | "'create'" | "'delete'" | "'load'" | "'none'"

---@alias orxTIMELINE_EVENT string | "'track_start'" | "'track_stop'" | "'track_add'" | "'track_remove'" | "'loop'" | "'trigger'" | "'none'"

---@alias orxVIEWPORT_EVENT string | "'resize'" | "'none'"



---@class orxAABOX
---@field public tl orxVECTOR # 
---@field public br orxVECTOR # 
local orxAABOX = {}

---
---get the c memory address of the lorx userdata
---
---@return string # address string
function orxAABOX:addr() end

---
---check if the c memory address of this lorx userdata equals to another
---
---@param _u any lorx utype # another lorx userdata
---@return boolean # true or false
function orxAABOX:aeq(_u) end

---
---convert to a void*
---
---@return voidptr # the converted void*
function orxAABOX:asVoid() end

---
---Copies an AABox onto another one
---
---@return orxAABOX # Destination AABox
function orxAABOX:copy() end

---
---Gets AABox center position
---
---@return orxVECTOR # Center position vector
function orxAABOX:getCenter() end

---
---Is position inside axis aligned box test
---
---@param _position orxVECTOR # (const) Position to test against the box
---@return boolean # true if position is inside the box, false otherwise
function orxAABOX:isInside(_position) end

---
---Moves an AABox
---
---@param _move orxVECTOR # (const) Move vector
---@return orxAABOX # Moved AABox
function orxAABOX:move(_move) end

---
---(non-const self) Reorders AABox corners
---
---@return orxAABOX # Reordered AABox
function orxAABOX:reorder() end

---
---(non-const self) Sets axis aligned box values
---
---@param _tl orxVECTOR # (const) Top left corner
---@param _br orxVECTOR # (const) Bottom right corner
---@return orxAABOX # orxAABOX / nil
function orxAABOX:set(_tl, _br) end

---
---Tests axis aligned box 2D intersection (no Z-axis test)
---
---@param _box2 orxAABOX # (const) Second box operand
---@return boolean # true if boxes intersect in 2D, false otherwise
function orxAABOX:test2DIntersection(_box2) end

---
---Tests axis aligned box intersection
---
---@param _box2 orxAABOX # (const) Second box operand
---@return boolean # true if boxes intersect, false otherwise
function orxAABOX:testIntersection(_box2) end

---
---get the type name of the lorx userdata
---
---@return string # the type name
function orxAABOX:type() end

---@class orxANIM
local orxANIM = {}

---
---(non-const self) Adds an event to an animation
---
---@param _eventname string # Event name to add
---@param _timestamp number # Timestamp for this event
---@param _value number # Value for this event
---@return orxSTATUS # success / failure
function orxANIM:addEvent(_eventname, _timestamp, _value) end

---
---(non-const self) Adds a key to an animation
---
---@param _data orxSTRUCTURE # Key data to add
---@param _timestamp number # Timestamp for this key
---@return orxSTATUS # success / failure
function orxANIM:addKey(_data, _timestamp) end

---
---get the c memory address of the lorx userdata
---
---@return string # address string
function orxANIM:addr() end

---
---check if the c memory address of this lorx userdata equals to another
---
---@param _u any lorx utype # another lorx userdata
---@return boolean # true or false
function orxANIM:aeq(_u) end

---
---convert to a void*
---
---@return voidptr # the converted void*
function orxANIM:asVoid() end

---
---(non-const self) Decreases structure reference count
---
function orxANIM:decreaseCount() end

---
---(non-const self) Deletes an animation
---
---@return orxSTATUS # success / failure
function orxANIM:delete() end

---
---Gets structure tree child
---
---@return orxSTRUCTURE # orxSTRUCTURE
function orxANIM:getChild() end

---
---Gets event strictly after given timestamp
---
---@param _timestamp number # Time stamp, excluded
---@return orxANIM_CUSTOM_EVENT # (const) success / failure
function orxANIM:getEventAfter(_timestamp) end

---
---Anim event count accessor
---
---@return integer # Anim event count
function orxANIM:getEventCount() end

---
---Anim event storage size accessor
---
---@return integer # Anim event storage size
function orxANIM:getEventStorageSize() end

---
---Gets structure flags
---
---@return integer # integer (u32)
function orxANIM:getFlags() end

---
---Gets structure GUID
---
---@return integer # integer (u64)
function orxANIM:getGUID() end

---
---Gets structure ID
---
---@return orxSTRUCTURE_ID # orxSTRUCTURE_ID
function orxANIM:getID() end

---
---Gets animation's key index from a time stamp
---
---@param _timestamp number # TimeStamp of the desired animation key
---@return integer # Animation key index / orxU32_UNDEFINED
function orxANIM:getKey(_timestamp) end

---
---Anim key count accessor
---
---@return integer # Anim key count
function orxANIM:getKeyCount() end

---
---Anim key data accessor
---
---@param _index integer # Index of desired key data
---@return orxSTRUCTURE # Desired orxSTRUCTURE / nil
function orxANIM:getKeyData(_index) end

---
---Anim key storage size accessor
---
---@return integer # Anim key storage size
function orxANIM:getKeyStorageSize() end

---
---Anim time length accessor
---
---@return number # Anim time length
function orxANIM:getLength() end

---
---Anim name get accessor
---
---@return string # string / empty string
function orxANIM:getName() end

---
---Gets structure list next
---
---@return orxSTRUCTURE # orxSTRUCTURE
function orxANIM:getNext() end

---
---Gets next event
---
---@param _event orxANIM_CUSTOM_EVENT # (const) Event, nil for first
---@return orxANIM_CUSTOM_EVENT # (const) success / failure
function orxANIM:getNextEvent(_event) end

---
---Gets structure's owner
---
---@return orxSTRUCTURE # orxSTRUCTURE / nil if not found/alive
function orxANIM:getOwner() end

---
---Gets structure tree parent
---
---@return orxSTRUCTURE # orxSTRUCTURE
function orxANIM:getParent() end

---
---Gets structure list previous
---
---@return orxSTRUCTURE # orxSTRUCTURE
function orxANIM:getPrevious() end

---
---Gets structure reference count
---
---@return integer # integer (u32)
function orxANIM:getRefCount() end

---
---Gets structure tree sibling
---
---@return orxSTRUCTURE # orxSTRUCTURE
function orxANIM:getSibling() end

---
---(non-const self) Increases structure reference count
---
function orxANIM:increaseCount() end

---
---(non-const self) Removes all events from an animation
---
function orxANIM:removeAllEvents() end

---
---(non-const self) Removes all keys from an animation
---
function orxANIM:removeAllKeys() end

---
---(non-const self) Removes last added event from an animation
---
---@return orxSTATUS # success / failure
function orxANIM:removeLastEvent() end

---
---(non-const self) Removes last added key from an animation
---
---@return orxSTATUS # success / failure
function orxANIM:removeLastKey() end

---
---(non-const self) Sets structure flags
---
---@param _removeflags integer # Flags to remove
function orxANIM:setFlags(_removeflags) end

---
---(non-const self) Sets structure owner
---
---@return orxSTATUS # success / failure
function orxANIM:setOwner() end

---
---(non-const self) Sets structure tree parent
---
---@return orxSTATUS # success / failure
function orxANIM:setParent() end

---
---Tests all flags against structure ones
---
---@return boolean # true / false
function orxANIM:testAllFlags() end

---
---Tests flags against structure ones
---
---@return boolean # true / false
function orxANIM:testFlags() end

---
---get the type name of the lorx userdata
---
---@return string # the type name
function orxANIM:type() end

---
---(non-const self) Updates structure if update function was registered for the structure type
---
---@param _clockinfo orxCLOCK_INFO # (const) Update associated clock info
---@return orxSTATUS # success / failure
function orxANIM:update(_clockinfo) end

---@class orxANIMPOINTER
local orxANIMPOINTER = {}

---
---get the c memory address of the lorx userdata
---
---@return string # address string
function orxANIMPOINTER:addr() end

---
---check if the c memory address of this lorx userdata equals to another
---
---@param _u any lorx utype # another lorx userdata
---@return boolean # true or false
function orxANIMPOINTER:aeq(_u) end

---
---convert to a void*
---
---@return voidptr # the converted void*
function orxANIMPOINTER:asVoid() end

---
---(non-const self) Decreases structure reference count
---
function orxANIMPOINTER:decreaseCount() end

---
---(non-const self) Deletes an AnimPointer
---
---@return orxSTATUS # success / failure
function orxANIMPOINTER:delete() end

---
---Gets the referenced AnimSet
---
---@return orxANIMSET # Referenced orxANIMSET
function orxANIMPOINTER:getAnimSet() end

---
---Gets structure tree child
---
---@return orxSTRUCTURE # orxSTRUCTURE
function orxANIMPOINTER:getChild() end

---
---AnimPointer current Animation get accessor
---
---@return integer # Current Animation ID
function orxANIMPOINTER:getCurrentAnim() end

---
---AnimPointer current anim data get accessor
---
---@return orxSTRUCTURE # Current anim data / nil
function orxANIMPOINTER:getCurrentAnimData() end

---
---AnimPointer current Animation name get accessor
---
---@return string # Current Animation name / empty string
function orxANIMPOINTER:getCurrentAnimName() end

---
---Gets structure flags
---
---@return integer # integer (u32)
function orxANIMPOINTER:getFlags() end

---
---AnimPointer frequency get accessor
---
---@return number # AnimPointer frequency
function orxANIMPOINTER:getFrequency() end

---
---Gets structure GUID
---
---@return integer # integer (u64)
function orxANIMPOINTER:getGUID() end

---
---Gets structure ID
---
---@return orxSTRUCTURE_ID # orxSTRUCTURE_ID
function orxANIMPOINTER:getID() end

---
---Gets structure list next
---
---@return orxSTRUCTURE # orxSTRUCTURE
function orxANIMPOINTER:getNext() end

---
---Gets structure's owner
---
---@return orxSTRUCTURE # orxSTRUCTURE / nil if not found/alive
function orxANIMPOINTER:getOwner() end

---
---Gets structure tree parent
---
---@return orxSTRUCTURE # orxSTRUCTURE
function orxANIMPOINTER:getParent() end

---
---Gets structure list previous
---
---@return orxSTRUCTURE # orxSTRUCTURE
function orxANIMPOINTER:getPrevious() end

---
---Gets structure reference count
---
---@return integer # integer (u32)
function orxANIMPOINTER:getRefCount() end

---
---Gets structure tree sibling
---
---@return orxSTRUCTURE # orxSTRUCTURE
function orxANIMPOINTER:getSibling() end

---
---AnimPointer target Animation get accessor
---
---@return integer # Target Animation ID
function orxANIMPOINTER:getTargetAnim() end

---
---AnimPointer target Animation ID get accessor
---
---@return string # Target Animation name / empty string
function orxANIMPOINTER:getTargetAnimName() end

---
---AnimPointer time get accessor
---
---@return number # Current time
function orxANIMPOINTER:getTime() end

---
---(non-const self) Increases structure reference count
---
function orxANIMPOINTER:increaseCount() end

---
---(non-const self) AnimPointer pause accessor
---
---@param _pause boolean # Pause / Unpause
---@return orxSTATUS # success / failure
function orxANIMPOINTER:pause(_pause) end

---
---(non-const self) AnimPointer current Animation set accessor
---
---@param _animid integer # Animation ID to set
---@return orxSTATUS # success / failure
function orxANIMPOINTER:setCurrentAnim(_animid) end

---
---(non-const self) AnimPointer current Animation set accessor using name
---
---@param _animname string # Animation name (config's name) to set
---@return orxSTATUS # success / failure
function orxANIMPOINTER:setCurrentAnimFromName(_animname) end

---
---(non-const self) Sets structure flags
---
---@param _removeflags integer # Flags to remove
function orxANIMPOINTER:setFlags(_removeflags) end

---
---(non-const self) AnimPointer frequency set accessor
---
---@param _frequency number # Frequency to set
---@return orxSTATUS # success / failure
function orxANIMPOINTER:setFrequency(_frequency) end

---
---(non-const self) Sets structure owner
---
---@return orxSTATUS # success / failure
function orxANIMPOINTER:setOwner() end

---
---(non-const self) Sets structure tree parent
---
---@return orxSTATUS # success / failure
function orxANIMPOINTER:setParent() end

---
---(non-const self) AnimPointer target Animation set accessor
---
---@param _animid integer # Animation ID to set / orxU32_UNDEFINED
---@return orxSTATUS # success / failure
function orxANIMPOINTER:setTargetAnim(_animid) end

---
---(non-const self) AnimPointer target Animation set accessor using name
---
---@param _animname string # Animation name (config's name) to set / nil
---@return orxSTATUS # success / failure
function orxANIMPOINTER:setTargetAnimFromName(_animname) end

---
---(non-const self) AnimPointer current time set accessor
---
---@param _time number # Time to set
---@return orxSTATUS # success / failure
function orxANIMPOINTER:setTime(_time) end

---
---Tests all flags against structure ones
---
---@return boolean # true / false
function orxANIMPOINTER:testAllFlags() end

---
---Tests flags against structure ones
---
---@return boolean # true / false
function orxANIMPOINTER:testFlags() end

---
---get the type name of the lorx userdata
---
---@return string # the type name
function orxANIMPOINTER:type() end

---
---(non-const self) Updates structure if update function was registered for the structure type
---
---@param _clockinfo orxCLOCK_INFO # (const) Update associated clock info
---@return orxSTATUS # success / failure
function orxANIMPOINTER:update(_clockinfo) end

---@class orxANIMSET
local orxANIMSET = {}

---
---(non-const self) Adds an Anim to an AnimSet
---
---@param _anim orxANIM # Anim to add
---@return integer # Anim ID in the specified AnimSet
function orxANIMSET:addAnim(_anim) end

---
---(non-const self) Adds a link between two Anims of the AnimSet
---
---@param _srcanim integer # Source Anim of the link
---@param _dstanim integer # Destination Anim of the link
---@return integer # ID of the created link / orxU32_UNDEFINED
function orxANIMSET:addLink(_srcanim, _dstanim) end

---
---(non-const self) Adds a reference to an AnimSet
---
function orxANIMSET:addReference() end

---
---get the c memory address of the lorx userdata
---
---@return string # address string
function orxANIMSET:addr() end

---
---check if the c memory address of this lorx userdata equals to another
---
---@param _u any lorx utype # another lorx userdata
---@return boolean # true or false
function orxANIMSET:aeq(_u) end

---
---convert to a void*
---
---@return voidptr # the converted void*
function orxANIMSET:asVoid() end

---
---Clones an AnimSet Link Table
---
---@return orxANIMSET_LINK_TABLE # An internally allocated clone of the AnimSet
function orxANIMSET:cloneLinkTable() end

---
---(non-const self) Computes active Anim given current and destination Anim IDs & a relative timestamp
---
---@param _srcanim integer # Source (current) Anim ID
---@param _dstanim integer # Destination Anim ID, if none (auto mode) set it to orxU32_UNDEFINED
---@param _linktable orxANIMSET_LINK_TABLE # Anim Pointer link table (updated if AnimSet link table isn't static, when using loop counts for example)
---@return integer # Current Anim ID. If it's not the source one, _pu32Time will contain the new timestamp, relative to the new Anim
---@return number # Pointer to the current timestamp relative to the source Anim (time elapsed since the beginning of this anim)
---@return boolean # Animation has been cut
---@return boolean # Animation has requested a target clearing
function orxANIMSET:computeAnim(_srcanim, _dstanim, _linktable) end

---
---(non-const self) Decreases structure reference count
---
function orxANIMSET:decreaseCount() end

---
---(non-const self) Deletes an AnimSet
---
---@return orxSTATUS # 
function orxANIMSET:delete() end

---
---(non-const self) Finds next Anim given current and destination Anim IDs
---
---@param _srcanim integer # Source (current) Anim ID
---@param _dstanim integer # Destination Anim ID, if none (auto mode) set it to orxU32_UNDEFINED
---@return integer # Next Anim ID if found, orxU32_UNDEFINED otherwise
function orxANIMSET:findNextAnim(_srcanim, _dstanim) end

---
---AnimSet Anim get accessor
---
---@param _animid integer # Anim ID
---@return orxANIM # Anim pointer / nil
function orxANIMSET:getAnim(_animid) end

---
---AnimSet Anim count get accessor
---
---@return integer # Anim count / orxU32_UNDEFINED
function orxANIMSET:getAnimCount() end

---
---Gets animation ID from name
---
---@param _animname string # Animation name (config's section)
---@return integer # Anim ID / orxU32_UNDEFINED
function orxANIMSET:getAnimIDFromName(_animname) end

---
---AnimSet Anim storage size get accessor
---
---@return integer # AnimSet Storage size / orxU32_UNDEFINED
function orxANIMSET:getAnimStorageSize() end

---
---Gets structure tree child
---
---@return orxSTRUCTURE # orxSTRUCTURE
function orxANIMSET:getChild() end

---
---Gets structure flags
---
---@return integer # integer (u32)
function orxANIMSET:getFlags() end

---
---Gets structure GUID
---
---@return integer # integer (u64)
function orxANIMSET:getGUID() end

---
---Gets structure ID
---
---@return orxSTRUCTURE_ID # orxSTRUCTURE_ID
function orxANIMSET:getID() end

---
---Gets a direct link between two Anims, if exists
---
---@param _srcanim integer # ID of the source Anim
---@param _dstanim integer # ID of the destination Anim
---@return integer # ID of the direct link, orxU32_UNDEFINED if none
function orxANIMSET:getLink(_srcanim, _dstanim) end

---
---Gets a link property
---
---@param _linkid integer # ID of the concerned link
---@param _property integer # ID of the property to get
---@return integer # Property value / orxU32_UNDEFINED
function orxANIMSET:getLinkProperty(_linkid, _property) end

---
---AnimSet name get accessor
---
---@return string # string / empty string
function orxANIMSET:getName() end

---
---Gets structure list next
---
---@return orxSTRUCTURE # orxSTRUCTURE
function orxANIMSET:getNext() end

---
---Gets structure's owner
---
---@return orxSTRUCTURE # orxSTRUCTURE / nil if not found/alive
function orxANIMSET:getOwner() end

---
---Gets structure tree parent
---
---@return orxSTRUCTURE # orxSTRUCTURE
function orxANIMSET:getParent() end

---
---Gets structure list previous
---
---@return orxSTRUCTURE # orxSTRUCTURE
function orxANIMSET:getPrevious() end

---
---Gets structure reference count
---
---@return integer # integer (u32)
function orxANIMSET:getRefCount() end

---
---Gets structure tree sibling
---
---@return orxSTRUCTURE # orxSTRUCTURE
function orxANIMSET:getSibling() end

---
---(non-const self) Increases structure reference count
---
function orxANIMSET:increaseCount() end

---
---(non-const self) Removes all Anim from the AnimSet
---
---@return orxSTATUS # success / failure
function orxANIMSET:removeAllAnims() end

---
---(non-const self) Removes an Anim from an AnimSet
---
---@param _animid integer # ID of the anim to remove
---@return orxSTATUS # orxSTATUS_SUCESS / failure
function orxANIMSET:removeAnim(_animid) end

---
---(non-const self) Removes a link from the AnimSet
---
---@param _linkid integer # ID of the link
---@return orxSTATUS # success / failure
function orxANIMSET:removeLink(_linkid) end

---
---(non-const self) Removes a reference from an AnimSet
---
function orxANIMSET:removeReference() end

---
---(non-const self) Sets structure flags
---
---@param _removeflags integer # Flags to remove
function orxANIMSET:setFlags(_removeflags) end

---
---(non-const self) Sets a link property
---
---@param _linkid integer # ID of the concerned link
---@param _property integer # ID of the property to set
---@param _value integer # Value of the property to set
---@return orxSTATUS # success / failure
function orxANIMSET:setLinkProperty(_linkid, _property, _value) end

---
---(non-const self) Sets structure owner
---
---@return orxSTATUS # success / failure
function orxANIMSET:setOwner() end

---
---(non-const self) Sets structure tree parent
---
---@return orxSTATUS # success / failure
function orxANIMSET:setParent() end

---
---Tests all flags against structure ones
---
---@return boolean # true / false
function orxANIMSET:testAllFlags() end

---
---Tests flags against structure ones
---
---@return boolean # true / false
function orxANIMSET:testFlags() end

---
---get the type name of the lorx userdata
---
---@return string # the type name
function orxANIMSET:type() end

---
---(non-const self) Updates structure if update function was registered for the structure type
---
---@param _clockinfo orxCLOCK_INFO # (const) Update associated clock info
---@return orxSTATUS # success / failure
function orxANIMSET:update(_clockinfo) end

---@class orxANIMSET_LINK_TABLE
local orxANIMSET_LINK_TABLE = {}

---
---get the c memory address of the lorx userdata
---
---@return string # address string
function orxANIMSET_LINK_TABLE:addr() end

---
---check if the c memory address of this lorx userdata equals to another
---
---@param _u any lorx utype # another lorx userdata
---@return boolean # true or false
function orxANIMSET_LINK_TABLE:aeq(_u) end

---
---convert to a void*
---
---@return voidptr # the converted void*
function orxANIMSET_LINK_TABLE:asVoid() end

---
---(non-const self) Deletes a Link table
---
function orxANIMSET_LINK_TABLE:deleteLink() end

---
---get the type name of the lorx userdata
---
---@return string # the type name
function orxANIMSET_LINK_TABLE:type() end

---@class orxANIM_CUSTOM_EVENT
---@field public name string # 
---@field public fvalue number # 
---@field public timestamp number # 
local orxANIM_CUSTOM_EVENT = {}

---
---get the c memory address of the lorx userdata
---
---@return string # address string
function orxANIM_CUSTOM_EVENT:addr() end

---
---check if the c memory address of this lorx userdata equals to another
---
---@param _u any lorx utype # another lorx userdata
---@return boolean # true or false
function orxANIM_CUSTOM_EVENT:aeq(_u) end

---
---convert to a void*
---
---@return voidptr # the converted void*
function orxANIM_CUSTOM_EVENT:asVoid() end

---
---get the type name of the lorx userdata
---
---@return string # the type name
function orxANIM_CUSTOM_EVENT:type() end

---@class orxBITMAP
local orxBITMAP = {}

---
---get the c memory address of the lorx userdata
---
---@return string # address string
function orxBITMAP:addr() end

---
---check if the c memory address of this lorx userdata equals to another
---
---@param _u any lorx utype # another lorx userdata
---@return boolean # true or false
function orxBITMAP:aeq(_u) end

---
---convert to a void*
---
---@return voidptr # the converted void*
function orxBITMAP:asVoid() end

---
---(non-const self) Deletes a bitmap
---
function orxBITMAP:delete() end

---
---Gets a bitmap data (RGBA memory format)
---
---@param _data integer[] # Output buffer (4 channels, RGBA)
---@param _bytenumber integer # Number of bytes of the buffer
---@return orxSTATUS # success / failure
function orxBITMAP:getData(_data, _bytenumber) end

---
---Gets a bitmap (internal) ID
---
---@return integer # integer (u32)
function orxBITMAP:getID() end

---
---Gets a bitmap size
---
---@return orxSTATUS # success / failure
---@return number # Bitmap width
---@return number # Bitmap height
function orxBITMAP:getSize() end

---
---Saves a bitmap to file
---
---@param _filename string # Name of the file where to store the bitmap
---@return orxSTATUS # success / failure
function orxBITMAP:save(_filename) end

---
---(non-const self) Sets a bitmap data (RGBA memory format)
---
---@param _data integer[] # Data (4 channels, RGBA)
---@param _bytenumber integer # Number of bytes
---@return orxSTATUS # success / failure
function orxBITMAP:setData(_data, _bytenumber) end

---
---(non-const self) Sets a partial (rectangle) bitmap data (RGBA memory format)
---
---@param _data integer[] # Data (4 channels, RGBA)
---@param _x integer # Origin's X coord of the rectangle area to set
---@param _y integer # Origin's Y coord of the rectangle area to set
---@param _width integer # Width of the rectangle area to set
---@param _height integer # Height of the rectangle area to set
---@return orxSTATUS # success / failure
function orxBITMAP:setPartialData(_data, _x, _y, _width, _height) end

---
---get the type name of the lorx userdata
---
---@return string # the type name
function orxBITMAP:type() end

---@class orxBODY
local orxBODY = {}

---
---(non-const self) Adds a joint from config to link two bodies together
---
---@param _dstbody orxBODY # Concerned destination body
---@param _configid string # Body joint config ID
---@return orxBODY_JOINT # orxBODY_JOINT / nil
function orxBODY:addJointFromConfig(_dstbody, _configid) end

---
---(non-const self) Adds a part to body from config
---
---@param _configid string # Body part config ID
---@return orxBODY_PART # orxBODY_PART / nil
function orxBODY:addPartFromConfig(_configid) end

---
---get the c memory address of the lorx userdata
---
---@return string # address string
function orxBODY:addr() end

---
---check if the c memory address of this lorx userdata equals to another
---
---@param _u any lorx utype # another lorx userdata
---@return boolean # true or false
function orxBODY:aeq(_u) end

---
---(non-const self) Applies a force
---
---@param _force orxVECTOR # (const) Force to apply
---@param _point orxVECTOR # (const) Point (world coordinates) where the force will be applied, if orxNULL, center of mass will be used
---@return orxSTATUS # success / failure
function orxBODY:applyForce(_force, _point) end

---
---(non-const self) Applies an impulse
---
---@param _impulse orxVECTOR # (const) Impulse to apply
---@param _point orxVECTOR # (const) Point (world coordinates) where the impulse will be applied, if orxNULL, center of mass will be used
---@return orxSTATUS # success / failure
function orxBODY:applyImpulse(_impulse, _point) end

---
---(non-const self) Applies a torque
---
---@param _torque number # Torque to apply
---@return orxSTATUS # success / failure
function orxBODY:applyTorque(_torque) end

---
---convert to a void*
---
---@return voidptr # the converted void*
function orxBODY:asVoid() end

---
---(non-const self) Decreases structure reference count
---
function orxBODY:decreaseCount() end

---
---(non-const self) Deletes a body
---
---@return orxSTATUS # success / failure
function orxBODY:delete() end

---
---Gets the "allow moving" property of a body, only relevant for non-dynamic bodies
---
---@return boolean # true / false
function orxBODY:getAllowMoving() end

---
---Gets a body angular damping
---
---@return number # Body's angular damping
function orxBODY:getAngularDamping() end

---
---Gets a body angular velocity
---
---@return number # Body angular velocity (radians/seconds)
function orxBODY:getAngularVelocity() end

---
---Gets structure tree child
---
---@return orxSTRUCTURE # orxSTRUCTURE
function orxBODY:getChild() end

---
---Gets a body custom gravity
---
---@return orxVECTOR # Body custom gravity / nil is object doesn't have any
function orxBODY:getCustomGravity() end

---
---Gets body definition flags
---
---@param _mask integer # Mask to use for getting flags
---@return integer # integer (u32)
function orxBODY:getDefFlags(_mask) end

---
---Gets structure flags
---
---@return integer # integer (u32)
function orxBODY:getFlags() end

---
---Gets structure GUID
---
---@return integer # integer (u64)
function orxBODY:getGUID() end

---
---Gets structure ID
---
---@return orxSTRUCTURE_ID # orxSTRUCTURE_ID
function orxBODY:getID() end

---
---Gets a body linear damping
---
---@return number # Body's linear damping
function orxBODY:getLinearDamping() end

---
---Gets a body mass
---
---@return number # Body mass
function orxBODY:getMass() end

---
---Gets a body center of mass (object space)
---
---@return orxVECTOR # Mass center / nil
function orxBODY:getMassCenter() end

---
---Gets body config name
---
---@return string # string / empty string
function orxBODY:getName() end

---
---Gets structure list next
---
---@return orxSTRUCTURE # orxSTRUCTURE
function orxBODY:getNext() end

---
---Gets next body joint
---
---@param _bodyjoint orxBODY_JOINT # (const) Current body joint (nil to get the first one)
---@return orxBODY_JOINT # orxBODY_JOINT / nil
function orxBODY:getNextJoint(_bodyjoint) end

---
---Gets next body part
---
---@param _bodypart orxBODY_PART # (const) Current body part (nil to get the first one)
---@return orxBODY_PART # orxBODY_PART / nil
function orxBODY:getNextPart(_bodypart) end

---
---Gets structure's owner
---
---@return orxSTRUCTURE # orxSTRUCTURE / nil if not found/alive
function orxBODY:getOwner() end

---
---Gets structure tree parent
---
---@return orxSTRUCTURE # orxSTRUCTURE
function orxBODY:getParent() end

---
---Gets a body position
---
---@return orxVECTOR # Body position / nil
function orxBODY:getPosition() end

---
---Gets structure list previous
---
---@return orxSTRUCTURE # orxSTRUCTURE
function orxBODY:getPrevious() end

---
---Gets structure reference count
---
---@return integer # integer (u32)
function orxBODY:getRefCount() end

---
---Gets a body rotation
---
---@return number # Body rotation (radians)
function orxBODY:getRotation() end

---
---Gets structure tree sibling
---
---@return orxSTRUCTURE # orxSTRUCTURE
function orxBODY:getSibling() end

---
---Gets a body speed
---
---@return orxVECTOR # Body speed / nil
function orxBODY:getSpeed() end

---
---Gets a body speed at a specified world position
---
---@param _position orxVECTOR # (const) Concerned world position
---@return orxVECTOR # Body speed / nil
function orxBODY:getSpeedAtWorldPosition(_position) end

---
---(non-const self) Increases structure reference count
---
function orxBODY:increaseCount() end

---
---Gets the dynamic property of a body
---
---@return boolean # true / false
function orxBODY:isDynamic() end

---
---Is a body using a fixed rotation
---
---@return boolean # true if fixed rotation, false otherwise
function orxBODY:isFixedRotation() end

---
---Is point inside body? (Using world coordinates)
---
---@param _position orxVECTOR # (const) Position to test (world coordinates)
---@return boolean # true / false
function orxBODY:isInside(_position) end

---
---(non-const self) Removes a part using its config ID
---
---@param _configid string # Config ID of the part to remove
---@return orxSTATUS # success / failure
function orxBODY:removePartFromConfig(_configid) end

---
---(non-const self) Sets the "allow moving" property of a body
---
---@param _allowmoving boolean # Only used for non-dynamic bodies, Kinematic / Static
---@return orxSTATUS # success / failure
function orxBODY:setAllowMoving(_allowmoving) end

---
---(non-const self) Sets a body angular damping
---
---@param _damping number # Angular damping to set
---@return orxSTATUS # success / failure
function orxBODY:setAngularDamping(_damping) end

---
---(non-const self) Sets a body angular velocity
---
---@param _velocity number # Angular velocity to set (radians/seconds)
---@return orxSTATUS # success / failure
function orxBODY:setAngularVelocity(_velocity) end

---
---(non-const self) Sets a body custom gravity
---
---@param _customgravity orxVECTOR # (const) Custom gravity to set / nil to remove it
---@return orxSTATUS # success / failure
function orxBODY:setCustomGravity(_customgravity) end

---
---(non-const self) Sets the dynamic property of a body
---
---@param _dynamic boolean # Dynamic / Static (or Kinematic depending on the "allow moving" property)
---@return orxSTATUS # success / failure
function orxBODY:setDynamic(_dynamic) end

---
---(non-const self) Sets a body fixed rotation
---
---@param _fixed boolean # Fixed / not fixed
---@return orxSTATUS # success / failure
function orxBODY:setFixedRotation(_fixed) end

---
---(non-const self) Sets structure flags
---
---@param _removeflags integer # Flags to remove
function orxBODY:setFlags(_removeflags) end

---
---(non-const self) Sets a body linear damping
---
---@param _damping number # Linear damping to set
---@return orxSTATUS # success / failure
function orxBODY:setLinearDamping(_damping) end

---
---(non-const self) Sets structure owner
---
---@return orxSTATUS # success / failure
function orxBODY:setOwner() end

---
---(non-const self) Sets structure tree parent
---
---@return orxSTATUS # success / failure
function orxBODY:setParent() end

---
---(non-const self) Sets a body position
---
---@param _position orxVECTOR # (const) Position to set
---@return orxSTATUS # success / failure
function orxBODY:setPosition(_position) end

---
---(non-const self) Sets a body rotation
---
---@param _rotation number # Rotation to set (radians)
---@return orxSTATUS # success / failure
function orxBODY:setRotation(_rotation) end

---
---(non-const self) Sets a body scale
---
---@param _scale orxVECTOR # (const) Scale to set
---@return orxSTATUS # success / failure
function orxBODY:setScale(_scale) end

---
---(non-const self) Sets a body speed
---
---@param _speed orxVECTOR # (const) Speed to set
---@return orxSTATUS # success / failure
function orxBODY:setSpeed(_speed) end

---
---Tests all flags against body definition ones
---
---@param _flags integer # Flags to test
---@return boolean # true / false
function orxBODY:testAllDefFlags(_flags) end

---
---Tests all flags against structure ones
---
---@return boolean # true / false
function orxBODY:testAllFlags() end

---
---Tests flags against body definition ones
---
---@param _flags integer # Flags to test
---@return boolean # true / false
function orxBODY:testDefFlags(_flags) end

---
---Tests flags against structure ones
---
---@return boolean # true / false
function orxBODY:testFlags() end

---
---get the type name of the lorx userdata
---
---@return string # the type name
function orxBODY:type() end

---
---(non-const self) Updates structure if update function was registered for the structure type
---
---@param _clockinfo orxCLOCK_INFO # (const) Update associated clock info
---@return orxSTATUS # success / failure
function orxBODY:update(_clockinfo) end

---@class orxBODY_JOINT
local orxBODY_JOINT = {}

---
---get the c memory address of the lorx userdata
---
---@return string # address string
function orxBODY_JOINT:addr() end

---
---check if the c memory address of this lorx userdata equals to another
---
---@param _u any lorx utype # another lorx userdata
---@return boolean # true or false
function orxBODY_JOINT:aeq(_u) end

---
---convert to a void*
---
---@return voidptr # the converted void*
function orxBODY_JOINT:asVoid() end

---
---(non-const self) Enables a (revolute) body joint motor
---
---@param _enable boolean # Enable / Disable
---@return orxSTATUS # success / failure
function orxBODY_JOINT:enableMotor(_enable) end

---
---Gets a body joint name
---
---@return string # string / nil
function orxBODY_JOINT:getName() end

---
---Gets the reaction force on the attached body at the joint anchor
---
---@return orxVECTOR # Reaction force in Newtons
function orxBODY_JOINT:getReactionForce() end

---
---Gets the reaction torque on the attached body
---
---@return number # Reaction torque
function orxBODY_JOINT:getReactionTorque() end

---
---(non-const self) Removes a body joint
---
---@return orxSTATUS # success / failure
function orxBODY_JOINT:remove() end

---
---(non-const self) Sets a (revolute) body joint maximum motor torque
---
---@param _maxtorque number # Maximum motor torque
---@return orxSTATUS # success / failure
function orxBODY_JOINT:setMaxMotorTorque(_maxtorque) end

---
---(non-const self) Sets a (revolute) body joint motor speed
---
---@param _speed number # Speed
---@return orxSTATUS # success / failure
function orxBODY_JOINT:setMotorSpeed(_speed) end

---
---get the type name of the lorx userdata
---
---@return string # the type name
function orxBODY_JOINT:type() end

---@class orxBODY_PART
local orxBODY_PART = {}

---
---get the c memory address of the lorx userdata
---
---@return string # address string
function orxBODY_PART:addr() end

---
---check if the c memory address of this lorx userdata equals to another
---
---@param _u any lorx utype # another lorx userdata
---@return boolean # true or false
function orxBODY_PART:aeq(_u) end

---
---convert to a void*
---
---@return voidptr # the converted void*
function orxBODY_PART:asVoid() end

---
---Gets a body part body (ie. owner)
---
---@return orxBODY # orxBODY / nil
function orxBODY_PART:getBody() end

---
---Gets check mask of a body part
---
---@return integer # Check mask of the body part
function orxBODY_PART:getCheckMask() end

---
---Gets density of a body part
---
---@return number # Density
function orxBODY_PART:getDensity() end

---
---Gets friction of a body part
---
---@return number # Friction
function orxBODY_PART:getFriction() end

---
---Gets a body part name
---
---@return string # string / nil
function orxBODY_PART:getName() end

---
---Gets restitution of a body part
---
---@return number # Restitution
function orxBODY_PART:getRestitution() end

---
---Gets self flags of a body part
---
---@return integer # Self flags of the body part
function orxBODY_PART:getSelfFlags() end

---
---Is point inside part? (Using world coordinates)
---
---@param _position orxVECTOR # (const) Position to test (world coordinates)
---@return boolean # true / false
function orxBODY_PART:isInside(_position) end

---
---Is a body part solid?
---
---@return boolean # true / false
function orxBODY_PART:isSolid() end

---
---(non-const self) Removes a body part
---
---@return orxSTATUS # success / failure
function orxBODY_PART:remove() end

---
---(non-const self) Sets check mask of a body part
---
---@param _checkmask integer # Check mask to set
---@return orxSTATUS # success / failure
function orxBODY_PART:setCheckMask(_checkmask) end

---
---(non-const self) Sets density of a body part
---
---@param _density number # Density
---@return orxSTATUS # success / failure
function orxBODY_PART:setDensity(_density) end

---
---(non-const self) Sets friction of a body part
---
---@param _friction number # Friction
---@return orxSTATUS # success / failure
function orxBODY_PART:setFriction(_friction) end

---
---(non-const self) Sets restitution of a body part
---
---@param _restitution number # Restitution
---@return orxSTATUS # success / failure
function orxBODY_PART:setRestitution(_restitution) end

---
---(non-const self) Sets self flags of a body part
---
---@param _selfflags integer # Self flags to set
---@return orxSTATUS # success / failure
function orxBODY_PART:setSelfFlags(_selfflags) end

---
---(non-const self) Sets a body part solid
---
---@param _solid boolean # Solid or sensor?
---@return orxSTATUS # success / failure
function orxBODY_PART:setSolid(_solid) end

---
---get the type name of the lorx userdata
---
---@return string # the type name
function orxBODY_PART:type() end

---@class orxCAMERA
local orxCAMERA = {}

---
---(non-const self) Adds a group ID to a camera
---
---@param _groupid integer # ID of the group to add
---@param _addfirst boolean # If true this group will be used *before* any already added ones, otherwise it'll be used *after* all of them
---@return orxSTATUS # success / failure
function orxCAMERA:addGroupID(_groupid, _addfirst) end

---
---get the c memory address of the lorx userdata
---
---@return string # address string
function orxCAMERA:addr() end

---
---check if the c memory address of this lorx userdata equals to another
---
---@param _u any lorx utype # another lorx userdata
---@return boolean # true or false
function orxCAMERA:aeq(_u) end

---
---convert to a void*
---
---@return voidptr # the converted void*
function orxCAMERA:asVoid() end

---
---(non-const self) Decreases structure reference count
---
function orxCAMERA:decreaseCount() end

---
---(non-const self) Deletes a camera
---
---@return orxSTATUS # success / failure
function orxCAMERA:delete() end

---
---Gets structure tree child
---
---@return orxSTRUCTURE # orxSTRUCTURE
function orxCAMERA:getChild() end

---
---Gets structure flags
---
---@return integer # integer (u32)
function orxCAMERA:getFlags() end

---
---Gets camera frame
---
---@return orxFRAME # orxFRAME
function orxCAMERA:getFrame() end

---
---Gets camera frustum (3D box for 2D camera)
---
---@return orxAABOX # Frustum orxAABOX
function orxCAMERA:getFrustum() end

---
---Gets structure GUID
---
---@return integer # integer (u64)
function orxCAMERA:getGUID() end

---
---Gets the group ID of a camera at the given index
---
---@param _index integer # Index of group ID
---@return integer # Group ID if index is valid, orxSTRINGID_UNDEFINED otherwise
function orxCAMERA:getGroupID(_index) end

---
---Gets number of group IDs of camera
---
---@return integer # Number of group IDs of this camera
function orxCAMERA:getGroupIDCount() end

---
---Gets structure ID
---
---@return orxSTRUCTURE_ID # orxSTRUCTURE_ID
function orxCAMERA:getID() end

---
---Gets camera config name
---
---@return string # string / empty string
function orxCAMERA:getName() end

---
---Gets structure list next
---
---@return orxSTRUCTURE # orxSTRUCTURE
function orxCAMERA:getNext() end

---
---Gets structure's owner
---
---@return orxSTRUCTURE # orxSTRUCTURE / nil if not found/alive
function orxCAMERA:getOwner() end

---
---Gets camera parent
---
---@return orxSTRUCTURE # Parent (object, spawner, camera or frame) / nil
function orxCAMERA:getParent() end

---
---Get camera position
---
---@return orxVECTOR # orxVECTOR
function orxCAMERA:getPosition() end

---
---Gets structure list previous
---
---@return orxSTRUCTURE # orxSTRUCTURE
function orxCAMERA:getPrevious() end

---
---Gets structure reference count
---
---@return integer # integer (u32)
function orxCAMERA:getRefCount() end

---
---Get camera rotation
---
---@return number # Rotation value (radians)
function orxCAMERA:getRotation() end

---
---Gets structure tree sibling
---
---@return orxSTRUCTURE # orxSTRUCTURE
function orxCAMERA:getSibling() end

---
---Get camera zoom
---
---@return number # Zoom value
function orxCAMERA:getZoom() end

---
---(non-const self) Increases structure reference count
---
function orxCAMERA:increaseCount() end

---
---(non-const self) Removes a group ID from a camera
---
---@param _groupid integer # ID of the group to remove
---@return orxSTATUS # success / failure
function orxCAMERA:removeGroupID(_groupid) end

---
---(non-const self) Sets structure flags
---
---@param _removeflags integer # Flags to remove
function orxCAMERA:setFlags(_removeflags) end

---
---(non-const self) Sets camera frustum
---
---@param _width number # Width of frustum
---@param _height number # Height of frustum
---@param _near number # Near distance of frustum
---@param _far number # Far distance of frustum
---@return orxSTATUS # success / failure
function orxCAMERA:setFrustum(_width, _height, _near, _far) end

---
---(non-const self) Sets structure owner
---
---@return orxSTATUS # success / failure
function orxCAMERA:setOwner() end

---
---(non-const self) Sets camera parent
---
---@param _parent voidptr # Parent structure to set (object, spawner, camera or frame) / nil
---@return orxSTATUS # orsSTATUS_SUCCESS / failure
function orxCAMERA:setParent(_parent) end

---
---(non-const self) Sets camera position
---
---@param _position orxVECTOR # (const) Camera position
---@return orxSTATUS # success / failure
function orxCAMERA:setPosition(_position) end

---
---(non-const self) Sets camera rotation
---
---@param _rotation number # Camera rotation (radians)
---@return orxSTATUS # success / failure
function orxCAMERA:setRotation(_rotation) end

---
---(non-const self) Sets camera zoom
---
---@param _zoom number # Camera zoom
---@return orxSTATUS # success / failure
function orxCAMERA:setZoom(_zoom) end

---
---Tests all flags against structure ones
---
---@return boolean # true / false
function orxCAMERA:testAllFlags() end

---
---Tests flags against structure ones
---
---@return boolean # true / false
function orxCAMERA:testFlags() end

---
---get the type name of the lorx userdata
---
---@return string # the type name
function orxCAMERA:type() end

---
---(non-const self) Updates structure if update function was registered for the structure type
---
---@param _clockinfo orxCLOCK_INFO # (const) Update associated clock info
---@return orxSTATUS # success / failure
function orxCAMERA:update(_clockinfo) end

---@class orxCHARACTER_GLYPH
---@field public x number # 
---@field public y number # 
---@field public width number # 
local orxCHARACTER_GLYPH = {}

---
---get the c memory address of the lorx userdata
---
---@return string # address string
function orxCHARACTER_GLYPH:addr() end

---
---check if the c memory address of this lorx userdata equals to another
---
---@param _u any lorx utype # another lorx userdata
---@return boolean # true or false
function orxCHARACTER_GLYPH:aeq(_u) end

---
---convert to a void*
---
---@return voidptr # the converted void*
function orxCHARACTER_GLYPH:asVoid() end

---
---get the type name of the lorx userdata
---
---@return string # the type name
function orxCHARACTER_GLYPH:type() end

---@class orxCHARACTER_MAP
---@field public characterheight number # 
local orxCHARACTER_MAP = {}

---
---get the c memory address of the lorx userdata
---
---@return string # address string
function orxCHARACTER_MAP:addr() end

---
---check if the c memory address of this lorx userdata equals to another
---
---@param _u any lorx utype # another lorx userdata
---@return boolean # true or false
function orxCHARACTER_MAP:aeq(_u) end

---
---convert to a void*
---
---@return voidptr # the converted void*
function orxCHARACTER_MAP:asVoid() end

---
---get the type name of the lorx userdata
---
---@return string # the type name
function orxCHARACTER_MAP:type() end

---@class orxCLOCK
local orxCLOCK = {}

---
---Adds a timer function to a clock
---
---@param _func lorxCLOCK_CALLBACK # Callback to register
---@param _delay number # Timer's delay between 2 calls, must be strictly positive
---@param _repetition integer # Number of times this timer should be called before removed, -1 for infinite
---@return orxSTATUS # success / failure
function orxCLOCK:addTimer(_func, _delay, _repetition) end

---
---get the c memory address of the lorx userdata
---
---@return string # address string
function orxCLOCK:addr() end

---
---check if the c memory address of this lorx userdata equals to another
---
---@param _u any lorx utype # another lorx userdata
---@return boolean # true or false
function orxCLOCK:aeq(_u) end

---
---convert to a void*
---
---@return voidptr # the converted void*
function orxCLOCK:asVoid() end

---
---(non-const self) Decreases structure reference count
---
function orxCLOCK:decreaseCount() end

---
---(non-const self) Deletes a clock
---
---@return orxSTATUS # success / failure
function orxCLOCK:delete() end

---
---Gets structure tree child
---
---@return orxSTRUCTURE # orxSTRUCTURE
function orxCLOCK:getChild() end

---
---Gets structure flags
---
---@return integer # integer (u32)
function orxCLOCK:getFlags() end

---
---Gets structure GUID
---
---@return integer # integer (u64)
function orxCLOCK:getGUID() end

---
---Gets structure ID
---
---@return orxSTRUCTURE_ID # orxSTRUCTURE_ID
function orxCLOCK:getID() end

---
---Gets clock info
---
---@return orxCLOCK_INFO # (const) orxCLOCK_INFO / nil
function orxCLOCK:getInfo() end

---
---(non-const self) Gets a clock's modifier
---
---@param _modifier orxCLOCK_MODIFIER # Concerned modifier
---@return number # Modifier value / orxFLOAT_0 if deactivated
function orxCLOCK:getModifier(_modifier) end

---
---Gets clock config name
---
---@return string # string / empty string
function orxCLOCK:getName() end

---
---Gets next existing clock in list (can be used to parse all existing clocks)
---
---@return orxCLOCK # orxCLOCK / nil
function orxCLOCK:getNext() end

---
---Gets structure's owner
---
---@return orxSTRUCTURE # orxSTRUCTURE / nil if not found/alive
function orxCLOCK:getOwner() end

---
---Gets structure tree parent
---
---@return orxSTRUCTURE # orxSTRUCTURE
function orxCLOCK:getParent() end

---
---Gets structure list previous
---
---@return orxSTRUCTURE # orxSTRUCTURE
function orxCLOCK:getPrevious() end

---
---Gets structure reference count
---
---@return integer # integer (u32)
function orxCLOCK:getRefCount() end

---
---Gets structure tree sibling
---
---@return orxSTRUCTURE # orxSTRUCTURE
function orxCLOCK:getSibling() end

---
---(non-const self) Increases structure reference count
---
function orxCLOCK:increaseCount() end

---
---Is a clock paused?
---
---@return boolean # true if paused, false otherwise
function orxCLOCK:isPaused() end

---
---(non-const self) Pauses a clock
---
---@return orxSTATUS # success / failure
function orxCLOCK:pause() end

---
---Registers a callback function to a clock (the previous one will be discarded)
---
---@param _func lorxCLOCK_CALLBACK # Callback to register
---@param _moduleid orxMODULE_ID # ID of the module related to this callback
---@param _priority orxCLOCK_PRIORITY # Priority for the function
---@return orxSTATUS # success / failure
function orxCLOCK:register(_func, _moduleid, _priority) end

---
---Removes a timer function from a clock
---
---@param _func lorxCLOCK_CALLBACK # Callback to register
---@param _delay number # Timer's delay between 2 calls, must be strictly positive
---@return orxSTATUS # success / failure
function orxCLOCK:removeTimer(_func, _delay) end

---
---(non-const self) Restarts a clock
---
---@return orxSTATUS # success / failure
function orxCLOCK:restart() end

---
---(non-const self) Resyncs a clock (accumulated DT => 0)
---
---@return orxSTATUS # 
function orxCLOCK:resync() end

---
---(non-const self) Sets structure flags
---
---@param _removeflags integer # Flags to remove
function orxCLOCK:setFlags(_removeflags) end

---
---(non-const self) Sets a clock's modifier
---
---@param _modifier orxCLOCK_MODIFIER # Concerned modifier
---@param _value number # Modifier value, orxFLOAT_0 to deactivate the modifier
---@return orxSTATUS # success / failure
function orxCLOCK:setModifier(_modifier, _value) end

---
---(non-const self) Sets structure owner
---
---@return orxSTATUS # success / failure
function orxCLOCK:setOwner() end

---
---(non-const self) Sets structure tree parent
---
---@return orxSTATUS # success / failure
function orxCLOCK:setParent() end

---
---(non-const self) Sets a clock tick size
---
---@param _ticksize number # Tick size, -1 for 'display'
---@return orxSTATUS # success / failure
function orxCLOCK:setTickSize(_ticksize) end

---
---Tests all flags against structure ones
---
---@return boolean # true / false
function orxCLOCK:testAllFlags() end

---
---Tests flags against structure ones
---
---@return boolean # true / false
function orxCLOCK:testFlags() end

---
---get the type name of the lorx userdata
---
---@return string # the type name
function orxCLOCK:type() end

---
---(non-const self) Unpauses a clock
---
---@return orxSTATUS # success / failure
function orxCLOCK:unpause() end

---
---Unregisters the callback function of a clock
---
---@return orxSTATUS # success / failure
function orxCLOCK:unregister() end

---
---(non-const self) Updates structure if update function was registered for the structure type
---
---@param _clockinfo orxCLOCK_INFO # (const) Update associated clock info
---@return orxSTATUS # success / failure
function orxCLOCK:update(_clockinfo) end

---@class orxCLOCK_INFO
---@field public ticksize number # 
---@field public dt number # 
---@field public time number # 
---@field public modifierlistlist number[] # 
local orxCLOCK_INFO = {}

---
---get the c memory address of the lorx userdata
---
---@return string # address string
function orxCLOCK_INFO:addr() end

---
---check if the c memory address of this lorx userdata equals to another
---
---@param _u any lorx utype # another lorx userdata
---@return boolean # true or false
function orxCLOCK_INFO:aeq(_u) end

---
---convert to a void*
---
---@return voidptr # the converted void*
function orxCLOCK_INFO:asVoid() end

---
---get the type name of the lorx userdata
---
---@return string # the type name
function orxCLOCK_INFO:type() end

---@class orxCOLOR
---@field public rgb orxVECTOR # 
---@field public hsl orxVECTOR # 
---@field public hsv orxVECTOR # 
---@field public alpha number # 
local orxCOLOR = {}

---
---get the c memory address of the lorx userdata
---
---@return string # address string
function orxCOLOR:addr() end

---
---check if the c memory address of this lorx userdata equals to another
---
---@param _u any lorx utype # another lorx userdata
---@return boolean # true or false
function orxCOLOR:aeq(_u) end

---
---convert to a void*
---
---@return voidptr # the converted void*
function orxCOLOR:asVoid() end

---
---Copies an orxCOLOR into another one
---
---@return orxCOLOR # orxCOLOR
function orxCOLOR:copy() end

---
---Converts from HSL color space to RGB one
---
---@return orxCOLOR # orxCOLOR
function orxCOLOR:fromHSLToRGB() end

---
---Converts from HSV color space to RGB one
---
---@return orxCOLOR # orxCOLOR
function orxCOLOR:fromHSVToRGB() end

---
---Converts from RGB color space to HSL one
---
---@return orxCOLOR # orxCOLOR
function orxCOLOR:fromRGBToHSL() end

---
---Converts from RGB color space to HSV one
---
---@return orxCOLOR # orxCOLOR
function orxCOLOR:fromRGBToHSV() end

---
---(non-const self) Sets all components
---
---@param _rgb orxVECTOR # (const) RGB components
---@param _alpha number # Normalized alpha component
---@return orxCOLOR # orxCOLOR
function orxCOLOR:set(_rgb, _alpha) end

---
---(non-const self) Sets alpha component
---
---@param _alpha number # Normalized alpha component
---@return orxCOLOR # orxCOLOR / nil
function orxCOLOR:setAlpha(_alpha) end

---
---(non-const self) Sets RGB components
---
---@param _rgb orxVECTOR # (const) RGB components
---@return orxCOLOR # orxCOLOR
function orxCOLOR:setRGB(_rgb) end

---
---(non-const self) Sets all components from an orxRGBA
---
---@param _rgba orxRGBA # RGBA values to set
---@return orxCOLOR # orxCOLOR
function orxCOLOR:setRGBA(_rgba) end

---
---Gets orxRGBA from an orxCOLOR
---
---@return orxRGBA # orxRGBA
function orxCOLOR:toRGBA() end

---
---get the type name of the lorx userdata
---
---@return string # the type name
function orxCOLOR:type() end

---@class orxCOMMAND_VAR
---@field public vvalue orxVECTOR # 
---@field public zvalue string # 
---@field public u32value integer # 
---@field public s32value integer # 
---@field public u64value integer # 
---@field public s64value integer # 
---@field public fvalue number # 
---@field public bvalue boolean # 
---@field public type orxCOMMAND_VAR_TYPE # 
local orxCOMMAND_VAR = {}

---
---get the c memory address of the lorx userdata
---
---@return string # address string
function orxCOMMAND_VAR:addr() end

---
---check if the c memory address of this lorx userdata equals to another
---
---@param _u any lorx utype # another lorx userdata
---@return boolean # true or false
function orxCOMMAND_VAR:aeq(_u) end

---
---convert to a void*
---
---@return voidptr # the converted void*
function orxCOMMAND_VAR:asVoid() end

---
---get the type name of the lorx userdata
---
---@return string # the type name
function orxCOMMAND_VAR:type() end

---@class orxDISPLAY_MESH
local orxDISPLAY_MESH = {}

---
---get the c memory address of the lorx userdata
---
---@return string # address string
function orxDISPLAY_MESH:addr() end

---
---check if the c memory address of this lorx userdata equals to another
---
---@param _u any lorx utype # another lorx userdata
---@return boolean # true or false
function orxDISPLAY_MESH:aeq(_u) end

---
---convert to a void*
---
---@return voidptr # the converted void*
function orxDISPLAY_MESH:asVoid() end

---
---get the type name of the lorx userdata
---
---@return string # the type name
function orxDISPLAY_MESH:type() end

---@class orxDISPLAY_TRANSFORM
---@field public srcx number # 
---@field public srcy number # 
---@field public dstx number # 
---@field public dsty number # 
---@field public repeatx number # 
---@field public repeaty number # 
---@field public scalex number # 
---@field public scaley number # 
---@field public rotation number # 
local orxDISPLAY_TRANSFORM = {}

---
---get the c memory address of the lorx userdata
---
---@return string # address string
function orxDISPLAY_TRANSFORM:addr() end

---
---check if the c memory address of this lorx userdata equals to another
---
---@param _u any lorx utype # another lorx userdata
---@return boolean # true or false
function orxDISPLAY_TRANSFORM:aeq(_u) end

---
---convert to a void*
---
---@return voidptr # the converted void*
function orxDISPLAY_TRANSFORM:asVoid() end

---
---get the type name of the lorx userdata
---
---@return string # the type name
function orxDISPLAY_TRANSFORM:type() end

---@class orxDISPLAY_VIDEO_MODE
---@field public width integer # 
---@field public height integer # 
---@field public depth integer # 
---@field public refreshrate integer # 
---@field public fullscreen boolean # 
local orxDISPLAY_VIDEO_MODE = {}

---
---get the c memory address of the lorx userdata
---
---@return string # address string
function orxDISPLAY_VIDEO_MODE:addr() end

---
---check if the c memory address of this lorx userdata equals to another
---
---@param _u any lorx utype # another lorx userdata
---@return boolean # true or false
function orxDISPLAY_VIDEO_MODE:aeq(_u) end

---
---convert to a void*
---
---@return voidptr # the converted void*
function orxDISPLAY_VIDEO_MODE:asVoid() end

---
---get the type name of the lorx userdata
---
---@return string # the type name
function orxDISPLAY_VIDEO_MODE:type() end

---@class orxFILE
local orxFILE = {}

---
---get the c memory address of the lorx userdata
---
---@return string # address string
function orxFILE:addr() end

---
---check if the c memory address of this lorx userdata equals to another
---
---@param _u any lorx utype # another lorx userdata
---@return boolean # true or false
function orxFILE:aeq(_u) end

---
---convert to a void*
---
---@return voidptr # the converted void*
function orxFILE:asVoid() end

---
---(non-const self) Closes an oppened file
---
---@return orxSTATUS # Returns the status of the operation
function orxFILE:close() end

---
---Retrieves a file's size
---
---@return integer # Returns the length of the file, <= 0 if invalid
function orxFILE:getSize() end

---
---Retrieves a file's time of last modification
---
---@return integer # Returns the time of the last modification, in seconds, since epoch
function orxFILE:getTime() end

---
---(non-const self) Prints a formatted string to a file
---
---@param _string string # Formatted string
---@return integer # Returns the number of written characters
function orxFILE:print(_string) end

---
---(non-const self) Seeks to a position in the given file
---
---@param _position integer # Position (from start) where to set the indicator
---@param _whence orxSEEK_OFFSET_WHENCE # Starting point for the offset computation (start, current position or end)
---@return integer # Absolute cursor position if successful, -1 otherwise
function orxFILE:seek(_position, _whence) end

---
---Tells the current position of the indicator in a file
---
---@return integer # Returns the current position of the file indicator, -1 is invalid
function orxFILE:tell() end

---
---get the type name of the lorx userdata
---
---@return string # the type name
function orxFILE:type() end

---@class orxFILE_INFO
---@field public size integer # 
---@field public timestamp integer # 
---@field public flags integer # 
---@field public internal orxHANDLE # 
---@field public name string  # length-limited
---@field public pattern string  # length-limited
---@field public path string  # length-limited
---@field public fullname string  # length-limited
local orxFILE_INFO = {}

---
---get the c memory address of the lorx userdata
---
---@return string # address string
function orxFILE_INFO:addr() end

---
---check if the c memory address of this lorx userdata equals to another
---
---@param _u any lorx utype # another lorx userdata
---@return boolean # true or false
function orxFILE_INFO:aeq(_u) end

---
---convert to a void*
---
---@return voidptr # the converted void*
function orxFILE_INFO:asVoid() end

---
---(non-const self) Closes a search (frees the memory allocated for this search)
---
function orxFILE_INFO:findClose() end

---
---(non-const self) Continues a file search: finds the next occurrence of a pattern, the search has to be started with orxFile_FindFirst
---
---@return orxSTATUS # success / failure
function orxFILE_INFO:findNext() end

---
---get the type name of the lorx userdata
---
---@return string # the type name
function orxFILE_INFO:type() end

---@class orxFONT
local orxFONT = {}

---
---get the c memory address of the lorx userdata
---
---@return string # address string
function orxFONT:addr() end

---
---check if the c memory address of this lorx userdata equals to another
---
---@param _u any lorx utype # another lorx userdata
---@return boolean # true or false
function orxFONT:aeq(_u) end

---
---convert to a void*
---
---@return voidptr # the converted void*
function orxFONT:asVoid() end

---
---(non-const self) Decreases structure reference count
---
function orxFONT:decreaseCount() end

---
---(non-const self) Deletes a font
---
---@return orxSTATUS # success / failure
function orxFONT:delete() end

---
---Gets font's character height
---
---@return number # number
function orxFONT:getCharacterHeight() end

---
---Gets font's character list
---
---@return string # Font's character list / nil
function orxFONT:getCharacterList() end

---
---Gets font's character spacing
---
---@return orxVECTOR # orxVECTOR / nil
function orxFONT:getCharacterSpacing() end

---
---Gets font's character width
---
---@param _charactercodepoint integer # Character code point
---@return number # number
function orxFONT:getCharacterWidth(_charactercodepoint) end

---
---Gets structure tree child
---
---@return orxSTRUCTURE # orxSTRUCTURE
function orxFONT:getChild() end

---
---Gets structure flags
---
---@return integer # integer (u32)
function orxFONT:getFlags() end

---
---Gets structure GUID
---
---@return integer # integer (u64)
function orxFONT:getGUID() end

---
---Gets structure ID
---
---@return orxSTRUCTURE_ID # orxSTRUCTURE_ID
function orxFONT:getID() end

---
---Gets font's map
---
---@return orxCHARACTER_MAP # (const) orxCHARACTER_MAP / nil
function orxFONT:getMap() end

---
---Gets font name
---
---@return string # Font name / empty string
function orxFONT:getName() end

---
---Gets structure list next
---
---@return orxSTRUCTURE # orxSTRUCTURE
function orxFONT:getNext() end

---
---Gets font's origin
---
---@return orxVECTOR # orxVECTOR / nil
function orxFONT:getOrigin() end

---
---Gets structure's owner
---
---@return orxSTRUCTURE # orxSTRUCTURE / nil if not found/alive
function orxFONT:getOwner() end

---
---Gets structure tree parent
---
---@return orxSTRUCTURE # orxSTRUCTURE
function orxFONT:getParent() end

---
---Gets structure list previous
---
---@return orxSTRUCTURE # orxSTRUCTURE
function orxFONT:getPrevious() end

---
---Gets structure reference count
---
---@return integer # integer (u32)
function orxFONT:getRefCount() end

---
---Gets structure tree sibling
---
---@return orxSTRUCTURE # orxSTRUCTURE
function orxFONT:getSibling() end

---
---Gets font's size
---
---@return orxVECTOR # orxVECTOR / nil
function orxFONT:getSize() end

---
---Gets font's texture
---
---@return orxTEXTURE # Font texture / nil
function orxFONT:getTexture() end

---
---(non-const self) Increases structure reference count
---
function orxFONT:increaseCount() end

---
---(non-const self) Sets font's character height
---
---@param _characterheight number # Character's height
---@return orxSTATUS # success / failure
function orxFONT:setCharacterHeight(_characterheight) end

---
---(non-const self) Sets font's character list
---
---@param _list string # Character list
---@return orxSTATUS # success / failure
function orxFONT:setCharacterList(_list) end

---
---(non-const self) Sets font's character spacing
---
---@param _spacing orxVECTOR # (const) Character's spacing
---@return orxSTATUS # success / failure
function orxFONT:setCharacterSpacing(_spacing) end

---
---(non-const self) Sets font's character width list
---
---@param _characternumber integer # Character's number
---@param _characterwidthlist number[] # List of widths for all the characters
---@return orxSTATUS # success / failure
function orxFONT:setCharacterWidthList(_characternumber, _characterwidthlist) end

---
---(non-const self) Sets structure flags
---
---@param _removeflags integer # Flags to remove
function orxFONT:setFlags(_removeflags) end

---
---(non-const self) Sets font's origin
---
---@param _origin orxVECTOR # (const) Font's origin
---@return orxSTATUS # success / failure
function orxFONT:setOrigin(_origin) end

---
---(non-const self) Sets structure owner
---
---@return orxSTATUS # success / failure
function orxFONT:setOwner() end

---
---(non-const self) Sets structure tree parent
---
---@return orxSTATUS # success / failure
function orxFONT:setParent() end

---
---(non-const self) Sets font's size
---
---@param _size orxVECTOR # (const) Font's size
---@return orxSTATUS # success / failure
function orxFONT:setSize(_size) end

---
---(non-const self) Sets font's texture
---
---@param _texture orxTEXTURE # Texture to set
---@return orxSTATUS # success / failure
function orxFONT:setTexture(_texture) end

---
---Tests all flags against structure ones
---
---@return boolean # true / false
function orxFONT:testAllFlags() end

---
---Tests flags against structure ones
---
---@return boolean # true / false
function orxFONT:testFlags() end

---
---get the type name of the lorx userdata
---
---@return string # the type name
function orxFONT:type() end

---
---(non-const self) Updates structure if update function was registered for the structure type
---
---@param _clockinfo orxCLOCK_INFO # (const) Update associated clock info
---@return orxSTATUS # success / failure
function orxFONT:update(_clockinfo) end

---@class orxFRAME
local orxFRAME = {}

---
---get the c memory address of the lorx userdata
---
---@return string # address string
function orxFRAME:addr() end

---
---check if the c memory address of this lorx userdata equals to another
---
---@param _u any lorx utype # another lorx userdata
---@return boolean # true or false
function orxFRAME:aeq(_u) end

---
---convert to a void*
---
---@return voidptr # the converted void*
function orxFRAME:asVoid() end

---
---(non-const self) Decreases structure reference count
---
function orxFRAME:decreaseCount() end

---
---(non-const self) Deletes a frame
---
---@return orxSTATUS # success / failure
function orxFRAME:delete() end

---
---Gets frame first child
---
---@return orxFRAME # orxFRAME / nil
function orxFRAME:getChild() end

---
---Gets structure flags
---
---@return integer # integer (u32)
function orxFRAME:getFlags() end

---
---Gets structure GUID
---
---@return integer # integer (u64)
function orxFRAME:getGUID() end

---
---Gets structure ID
---
---@return orxSTRUCTURE_ID # orxSTRUCTURE_ID
function orxFRAME:getID() end

---
---Gets structure list next
---
---@return orxSTRUCTURE # orxSTRUCTURE
function orxFRAME:getNext() end

---
---Gets structure's owner
---
---@return orxSTRUCTURE # orxSTRUCTURE / nil if not found/alive
function orxFRAME:getOwner() end

---
---Get frame parent
---
---@return orxFRAME # orxFRAME / nil
function orxFRAME:getParent() end

---
---(non-const self) Gets frame position
---
---@param _space orxFRAME_SPACE # Coordinate space system to use
---@return orxVECTOR # orxVECTOR / nil
function orxFRAME:getPosition(_space) end

---
---Gets structure list previous
---
---@return orxSTRUCTURE # orxSTRUCTURE
function orxFRAME:getPrevious() end

---
---Gets structure reference count
---
---@return integer # integer (u32)
function orxFRAME:getRefCount() end

---
---(non-const self) Gets frame rotation
---
---@param _space orxFRAME_SPACE # Coordinate space system to use
---@return number # Rotation of the given frame (radians)
function orxFRAME:getRotation(_space) end

---
---(non-const self) Gets frame scale
---
---@param _space orxFRAME_SPACE # Coordinate space system to use
---@return orxVECTOR # orxVECTOR / nil
function orxFRAME:getScale(_space) end

---
---Gets frame next sibling
---
---@return orxFRAME # orxFRAME / nil
function orxFRAME:getSibling() end

---
---(non-const self) Increases structure reference count
---
function orxFRAME:increaseCount() end

---
---Is a root child?
---
---@return boolean # true if its parent is root, false otherwise
function orxFRAME:isRootChild() end

---
---(non-const self) Sets structure flags
---
---@param _removeflags integer # Flags to remove
function orxFRAME:setFlags(_removeflags) end

---
---(non-const self) Sets structure owner
---
---@return orxSTATUS # success / failure
function orxFRAME:setOwner() end

---
---(non-const self) Sets frame parent
---
---@param _parent orxFRAME # Parent frame to set
function orxFRAME:setParent(_parent) end

---
---(non-const self) Sets frame position
---
---@param _space orxFRAME_SPACE # Coordinate space system to use
---@param _pos orxVECTOR # (const) Position to set
function orxFRAME:setPosition(_space, _pos) end

---
---(non-const self) Sets frame rotation
---
---@param _space orxFRAME_SPACE # Coordinate space system to use
---@param _rotation number # Rotation angle to set (radians)
function orxFRAME:setRotation(_space, _rotation) end

---
---(non-const self) Sets frame scale
---
---@param _space orxFRAME_SPACE # Coordinate space system to use
---@param _scale orxVECTOR # (const) Scale to set
function orxFRAME:setScale(_space, _scale) end

---
---Tests all flags against structure ones
---
---@return boolean # true / false
function orxFRAME:testAllFlags() end

---
---Tests flags against structure ones
---
---@return boolean # true / false
function orxFRAME:testFlags() end

---
---(non-const self) Transforms a position given its input space (local -> global or global -> local)
---
---@param _space orxFRAME_SPACE # Input coordinate space system to use
---@return orxVECTOR # orxVECTOR / nil
function orxFRAME:transformPosition(_space) end

---
---(non-const self) Transforms a rotation given its input space (local -> global or global -> local)
---
---@param _space orxFRAME_SPACE # Input coordinate space system to use
---@param _rotation number # Concerned rotation
---@return number # Transformed rotation (radians)
function orxFRAME:transformRotation(_space, _rotation) end

---
---(non-const self) Transforms a scale given its input space (local -> global or global -> local)
---
---@param _space orxFRAME_SPACE # Input coordinate space system to use
---@return orxVECTOR # orxVECTOR / nil
function orxFRAME:transformScale(_space) end

---
---get the type name of the lorx userdata
---
---@return string # the type name
function orxFRAME:type() end

---
---(non-const self) Updates structure if update function was registered for the structure type
---
---@param _clockinfo orxCLOCK_INFO # (const) Update associated clock info
---@return orxSTATUS # success / failure
function orxFRAME:update(_clockinfo) end

---@class orxFX
local orxFX = {}

---
---(non-const self) Adds alpha to an FX
---
---@param _starttime number # Time start
---@param _endtime number # Time end
---@param _cycleperiod number # Cycle period
---@param _cyclephase number # Cycle phase (at start)
---@param _amplification number # Curve linear amplification over time (1.0 for none)
---@param _acceleration number # Curve linear acceleration over time (1.0 for none)
---@param _startalpha number # Starting alpha value
---@param _endalpha number # Ending alpha value
---@param _curve orxFX_CURVE # Blending curve type
---@param _pow number # Blending curve exponent
---@param _flags integer # Param flags
---@return orxSTATUS # success / failure
function orxFX:addAlpha(_starttime, _endtime, _cycleperiod, _cyclephase, _amplification, _acceleration, _startalpha, _endalpha, _curve, _pow, _flags) end

---
---(non-const self) Adds HSL color to an FX
---
---@param _starttime number # Time start
---@param _endtime number # Time end
---@param _cycleperiod number # Cycle period
---@param _cyclephase number # Cycle phase (at start)
---@param _amplification number # Curve linear amplification over time (1.0 for none)
---@param _acceleration number # Curve linear acceleration over time (1.0 for none)
---@param _startcolor orxVECTOR # Starting color value
---@param _endcolor orxVECTOR # Ending color value
---@param _curve orxFX_CURVE # Blending curve type
---@param _pow number # Blending curve exponent
---@param _flags integer # Param flags
---@return orxSTATUS # success / failure
function orxFX:addHSL(_starttime, _endtime, _cycleperiod, _cyclephase, _amplification, _acceleration, _startcolor, _endcolor, _curve, _pow, _flags) end

---
---(non-const self) Adds HSV color to an FX
---
---@param _starttime number # Time start
---@param _endtime number # Time end
---@param _cycleperiod number # Cycle period
---@param _cyclephase number # Cycle phase (at start)
---@param _amplification number # Curve linear amplification over time (1.0 for none)
---@param _acceleration number # Curve linear acceleration over time (1.0 for none)
---@param _startcolor orxVECTOR # Starting color value
---@param _endcolor orxVECTOR # Ending color value
---@param _curve orxFX_CURVE # Blending curve type
---@param _pow number # Blending curve exponent
---@param _flags integer # Param flags
---@return orxSTATUS # success / failure
function orxFX:addHSV(_starttime, _endtime, _cycleperiod, _cyclephase, _amplification, _acceleration, _startcolor, _endcolor, _curve, _pow, _flags) end

---
---(non-const self) Adds pitch to an FX
---
---@param _starttime number # Time start
---@param _endtime number # Time end
---@param _cycleperiod number # Cycle period
---@param _cyclephase number # Cycle phase (at start)
---@param _amplification number # Curve linear amplification over time (1.0 for none)
---@param _acceleration number # Curve linear acceleration over time (1.0 for none)
---@param _startpitch number # Starting pitch value
---@param _endpitch number # Ending pitch value
---@param _curve orxFX_CURVE # Blending curve type
---@param _pow number # Blending curve exponent
---@param _flags integer # Param flags
---@return orxSTATUS # success / failure
function orxFX:addPitch(_starttime, _endtime, _cycleperiod, _cyclephase, _amplification, _acceleration, _startpitch, _endpitch, _curve, _pow, _flags) end

---
---(non-const self) Adds position to an FX
---
---@param _starttime number # Time start
---@param _endtime number # Time end
---@param _cycleperiod number # Cycle period
---@param _cyclephase number # Cycle phase (at start)
---@param _amplification number # Curve linear amplification over time (1.0 for none)
---@param _acceleration number # Curve linear acceleration over time (1.0 for none)
---@param _starttranslation orxVECTOR # (const) Starting position value
---@param _endtranslation orxVECTOR # (const) Ending position value
---@param _curve orxFX_CURVE # Blending curve type
---@param _pow number # Blending curve exponent
---@param _flags integer # Param flags
---@return orxSTATUS # success / failure
function orxFX:addPosition(_starttime, _endtime, _cycleperiod, _cyclephase, _amplification, _acceleration, _starttranslation, _endtranslation, _curve, _pow, _flags) end

---
---(non-const self) Adds RGB color to an FX
---
---@param _starttime number # Time start
---@param _endtime number # Time end
---@param _cycleperiod number # Cycle period
---@param _cyclephase number # Cycle phase (at start)
---@param _amplification number # Curve linear amplification over time (1.0 for none)
---@param _acceleration number # Curve linear acceleration over time (1.0 for none)
---@param _startcolor orxVECTOR # Starting color value
---@param _endcolor orxVECTOR # Ending color value
---@param _curve orxFX_CURVE # Blending curve type
---@param _pow number # Blending curve exponent
---@param _flags integer # Param flags
---@return orxSTATUS # success / failure
function orxFX:addRGB(_starttime, _endtime, _cycleperiod, _cyclephase, _amplification, _acceleration, _startcolor, _endcolor, _curve, _pow, _flags) end

---
---(non-const self) Adds rotation to an FX
---
---@param _starttime number # Time start
---@param _endtime number # Time end
---@param _cycleperiod number # Cycle period
---@param _cyclephase number # Cycle phase (at start)
---@param _amplification number # Curve linear amplification over time (1.0 for none)
---@param _acceleration number # Curve linear acceleration over time (1.0 for none)
---@param _startrotation number # Starting rotation value (radians)
---@param _endrotation number # Ending rotation value (radians)
---@param _curve orxFX_CURVE # Blending curve type
---@param _pow number # Blending curve exponent
---@param _flags integer # Param flags
---@return orxSTATUS # success / failure
function orxFX:addRotation(_starttime, _endtime, _cycleperiod, _cyclephase, _amplification, _acceleration, _startrotation, _endrotation, _curve, _pow, _flags) end

---
---(non-const self) Adds scale to an FX
---
---@param _starttime number # Time start
---@param _endtime number # Time end
---@param _cycleperiod number # Cycle period
---@param _cyclephase number # Cycle phase (at start)
---@param _amplification number # Curve linear amplification over time (1.0 for none)
---@param _acceleration number # Curve linear acceleration over time (1.0 for none)
---@param _startscale orxVECTOR # (const) Starting scale value
---@param _endscale orxVECTOR # (const) Ending scale value
---@param _curve orxFX_CURVE # Blending curve type
---@param _pow number # Blending curve exponent
---@param _flags integer # Param flags
---@return orxSTATUS # success / failure
function orxFX:addScale(_starttime, _endtime, _cycleperiod, _cyclephase, _amplification, _acceleration, _startscale, _endscale, _curve, _pow, _flags) end

---
---(non-const self) Adds a slot to an FX from config
---
---@param _slotid string # Config ID
---@return orxSTATUS # 
function orxFX:addSlotFromConfig(_slotid) end

---
---(non-const self) Adds speed to an FX
---
---@param _starttime number # Time start
---@param _endtime number # Time end
---@param _cycleperiod number # Cycle period
---@param _cyclephase number # Cycle phase (at start)
---@param _amplification number # Curve linear amplification over time (1.0 for none)
---@param _acceleration number # Curve linear acceleration over time (1.0 for none)
---@param _startspeed orxVECTOR # (const) Starting speed value
---@param _endspeed orxVECTOR # (const) Ending speed value
---@param _curve orxFX_CURVE # Blending curve type
---@param _pow number # Blending curve exponent
---@param _flags integer # Param flags
---@return orxSTATUS # success / failure
function orxFX:addSpeed(_starttime, _endtime, _cycleperiod, _cyclephase, _amplification, _acceleration, _startspeed, _endspeed, _curve, _pow, _flags) end

---
---(non-const self) Adds volume to an FX
---
---@param _starttime number # Time start
---@param _endtime number # Time end
---@param _cycleperiod number # Cycle period
---@param _cyclephase number # Cycle phase (at start)
---@param _amplification number # Curve linear amplification over time (1.0 for none)
---@param _acceleration number # Curve linear acceleration over time (1.0 for none)
---@param _startvolume number # Starting volume value
---@param _endvolume number # Ending volume value
---@param _curve orxFX_CURVE # Blending curve type
---@param _pow number # Blending curve exponent
---@param _flags integer # Param flags
---@return orxSTATUS # success / failure
function orxFX:addVolume(_starttime, _endtime, _cycleperiod, _cyclephase, _amplification, _acceleration, _startvolume, _endvolume, _curve, _pow, _flags) end

---
---get the c memory address of the lorx userdata
---
---@return string # address string
function orxFX:addr() end

---
---check if the c memory address of this lorx userdata equals to another
---
---@param _u any lorx utype # another lorx userdata
---@return boolean # true or false
function orxFX:aeq(_u) end

---
---Applies FX on object
---
---@param _object orxOBJECT # Object on which to apply the FX
---@param _starttime number # FX local application start time
---@param _endtime number # FX local application end time
---@return orxSTATUS # success / failure
function orxFX:apply(_object, _starttime, _endtime) end

---
---convert to a void*
---
---@return voidptr # the converted void*
function orxFX:asVoid() end

---
---(non-const self) Decreases structure reference count
---
function orxFX:decreaseCount() end

---
---(non-const self) Deletes an FX
---
---@return orxSTATUS # success / failure
function orxFX:delete() end

---
---(non-const self) Enables/disables an FX
---
---@param _enable boolean # Enable / disable
function orxFX:enable(_enable) end

---
---Gets structure tree child
---
---@return orxSTRUCTURE # orxSTRUCTURE
function orxFX:getChild() end

---
---Gets FX duration
---
---@return number # number
function orxFX:getDuration() end

---
---Gets structure flags
---
---@return integer # integer (u32)
function orxFX:getFlags() end

---
---Gets structure GUID
---
---@return integer # integer (u64)
function orxFX:getGUID() end

---
---Gets structure ID
---
---@return orxSTRUCTURE_ID # orxSTRUCTURE_ID
function orxFX:getID() end

---
---Gets FX name
---
---@return string # string / empty string
function orxFX:getName() end

---
---Gets structure list next
---
---@return orxSTRUCTURE # orxSTRUCTURE
function orxFX:getNext() end

---
---Gets structure's owner
---
---@return orxSTRUCTURE # orxSTRUCTURE / nil if not found/alive
function orxFX:getOwner() end

---
---Gets structure tree parent
---
---@return orxSTRUCTURE # orxSTRUCTURE
function orxFX:getParent() end

---
---Gets structure list previous
---
---@return orxSTRUCTURE # orxSTRUCTURE
function orxFX:getPrevious() end

---
---Gets structure reference count
---
---@return integer # integer (u32)
function orxFX:getRefCount() end

---
---Gets structure tree sibling
---
---@return orxSTRUCTURE # orxSTRUCTURE
function orxFX:getSibling() end

---
---Get FX stagger / offset
---
---@return boolean # true if staggered, false otherwise
---@return number # If non null, will contain the initial offset
function orxFX:getStagger() end

---
---(non-const self) Increases structure reference count
---
function orxFX:increaseCount() end

---
---Is FX enabled?
---
---@return boolean # true if enabled, false otherwise
function orxFX:isEnabled() end

---
---Is FX looping
---
---@return boolean # true if looping, false otherwise
function orxFX:isLooping() end

---
---(non-const self) Set FX loop property
---
---@param _loop boolean # Loop / don't loop
---@return orxSTATUS # success / failure
function orxFX:loop(_loop) end

---
---(non-const self) Sets structure flags
---
---@param _removeflags integer # Flags to remove
function orxFX:setFlags(_removeflags) end

---
---(non-const self) Sets structure owner
---
---@return orxSTATUS # success / failure
function orxFX:setOwner() end

---
---(non-const self) Sets structure tree parent
---
---@return orxSTATUS # success / failure
function orxFX:setParent() end

---
---(non-const self) Sets FX stagger / offset
---
---@param _stagger boolean # If true, this FX will be added after all current FXs
---@param _offset number # Initial offset, in seconds. Cannot result in a negative start time
---@return orxSTATUS # success / failure
function orxFX:setStagger(_stagger, _offset) end

---
---Tests all flags against structure ones
---
---@return boolean # true / false
function orxFX:testAllFlags() end

---
---Tests flags against structure ones
---
---@return boolean # true / false
function orxFX:testFlags() end

---
---get the type name of the lorx userdata
---
---@return string # the type name
function orxFX:type() end

---
---(non-const self) Updates structure if update function was registered for the structure type
---
---@param _clockinfo orxCLOCK_INFO # (const) Update associated clock info
---@return orxSTATUS # success / failure
function orxFX:update(_clockinfo) end

---@class orxFXPOINTER
local orxFXPOINTER = {}

---
---(non-const self) Adds a delayed FX
---
---@param _fx orxFX # FX to add
---@param _delay number # Delay time, ignored if the FX is staggered and other FXs are already present
---@return orxSTATUS # success / failure
function orxFXPOINTER:addDelayedFX(_fx, _delay) end

---
---(non-const self) Adds a delayed FX using its config ID
---
---@param _fxconfigid string # Config ID of the FX to add
---@param _delay number # Delay time, ignored if the FX is staggered and other FXs are already present
---@return orxSTATUS # success / failure
function orxFXPOINTER:addDelayedFXFromConfig(_fxconfigid, _delay) end

---
---(non-const self) Adds an FX
---
---@param _fx orxFX # FX to add
---@return orxSTATUS # success / failure
function orxFXPOINTER:addFX(_fx) end

---
---(non-const self) Adds an FX using its config ID
---
---@param _fxconfigid string # Config ID of the FX to add
---@return orxSTATUS # success / failure
function orxFXPOINTER:addFXFromConfig(_fxconfigid) end

---
---(non-const self) Adds a unique delayed FX using its config ID
---
---@param _fxconfigid string # Config ID of the FX to add
---@param _delay number # Delay time, ignored if the FX is staggered and other FXs are already present
---@return orxSTATUS # success / failure
function orxFXPOINTER:addUniqueDelayedFXFromConfig(_fxconfigid, _delay) end

---
---(non-const self) Adds a unique FX using its config ID
---
---@param _fxconfigid string # Config ID of the FX to add
---@return orxSTATUS # success / failure
function orxFXPOINTER:addUniqueFXFromConfig(_fxconfigid) end

---
---get the c memory address of the lorx userdata
---
---@return string # address string
function orxFXPOINTER:addr() end

---
---check if the c memory address of this lorx userdata equals to another
---
---@param _u any lorx utype # another lorx userdata
---@return boolean # true or false
function orxFXPOINTER:aeq(_u) end

---
---convert to a void*
---
---@return voidptr # the converted void*
function orxFXPOINTER:asVoid() end

---
---(non-const self) Decreases structure reference count
---
function orxFXPOINTER:decreaseCount() end

---
---(non-const self) Deletes an FXPointer
---
---@return orxSTATUS # success / failure
function orxFXPOINTER:delete() end

---
---(non-const self) Enables/disables an FXPointer
---
---@param _enable boolean # Enable / disable
function orxFXPOINTER:enable(_enable) end

---
---Gets structure tree child
---
---@return orxSTRUCTURE # orxSTRUCTURE
function orxFXPOINTER:getChild() end

---
---Gets how many FXs are currently in use
---
---@return integer # integer (u32)
function orxFXPOINTER:getCount() end

---
---Gets structure flags
---
---@return integer # integer (u32)
function orxFXPOINTER:getFlags() end

---
---FXPointer frequency get accessor
---
---@return number # FXPointer frequency
function orxFXPOINTER:getFrequency() end

---
---Gets structure GUID
---
---@return integer # integer (u64)
function orxFXPOINTER:getGUID() end

---
---Gets structure ID
---
---@return orxSTRUCTURE_ID # orxSTRUCTURE_ID
function orxFXPOINTER:getID() end

---
---Gets structure list next
---
---@return orxSTRUCTURE # orxSTRUCTURE
function orxFXPOINTER:getNext() end

---
---Gets structure's owner
---
---@return orxSTRUCTURE # orxSTRUCTURE / nil if not found/alive
function orxFXPOINTER:getOwner() end

---
---Gets structure tree parent
---
---@return orxSTRUCTURE # orxSTRUCTURE
function orxFXPOINTER:getParent() end

---
---Gets structure list previous
---
---@return orxSTRUCTURE # orxSTRUCTURE
function orxFXPOINTER:getPrevious() end

---
---Gets structure reference count
---
---@return integer # integer (u32)
function orxFXPOINTER:getRefCount() end

---
---Gets structure tree sibling
---
---@return orxSTRUCTURE # orxSTRUCTURE
function orxFXPOINTER:getSibling() end

---
---FXPointer time get accessor
---
---@return number # number
function orxFXPOINTER:getTime() end

---
---(non-const self) Increases structure reference count
---
function orxFXPOINTER:increaseCount() end

---
---Is FXPointer enabled?
---
---@return boolean # true if enabled, false otherwise
function orxFXPOINTER:isEnabled() end

---
---(non-const self) Removes all FXs
---
---@return orxSTATUS # success / failure
function orxFXPOINTER:removeAllFXs() end

---
---(non-const self) Removes an FX
---
---@param _fx orxFX # FX to remove
---@return orxSTATUS # success / failure
function orxFXPOINTER:removeFX(_fx) end

---
---(non-const self) Removes an FX using its config ID
---
---@param _fxconfigid string # Config ID of the FX to remove
---@return orxSTATUS # success / failure
function orxFXPOINTER:removeFXFromConfig(_fxconfigid) end

---
---(non-const self) Sets structure flags
---
---@param _removeflags integer # Flags to remove
function orxFXPOINTER:setFlags(_removeflags) end

---
---(non-const self) FXPointer frequency set accessor
---
---@param _frequency number # Frequency to set
---@return orxSTATUS # success / failure
function orxFXPOINTER:setFrequency(_frequency) end

---
---(non-const self) Sets structure owner
---
---@return orxSTATUS # success / failure
function orxFXPOINTER:setOwner() end

---
---(non-const self) Sets structure tree parent
---
---@return orxSTATUS # success / failure
function orxFXPOINTER:setParent() end

---
---(non-const self) FXPointer time set accessor
---
---@param _time number # Time to set
---@return orxSTATUS # success / failure
function orxFXPOINTER:setTime(_time) end

---
---(non-const self) Synchronizes FX times with an other orxFXPointer if they share common FXs
---
---@param _model orxFXPOINTER # (const) Model FX pointer to use for synchronization
---@return orxSTATUS # success / failure
function orxFXPOINTER:synchronize(_model) end

---
---Tests all flags against structure ones
---
---@return boolean # true / false
function orxFXPOINTER:testAllFlags() end

---
---Tests flags against structure ones
---
---@return boolean # true / false
function orxFXPOINTER:testFlags() end

---
---get the type name of the lorx userdata
---
---@return string # the type name
function orxFXPOINTER:type() end

---
---(non-const self) Updates structure if update function was registered for the structure type
---
---@param _clockinfo orxCLOCK_INFO # (const) Update associated clock info
---@return orxSTATUS # success / failure
function orxFXPOINTER:update(_clockinfo) end

---@class orxGRAPHIC
local orxGRAPHIC = {}

---
---get the c memory address of the lorx userdata
---
---@return string # address string
function orxGRAPHIC:addr() end

---
---check if the c memory address of this lorx userdata equals to another
---
---@param _u any lorx utype # another lorx userdata
---@return boolean # true or false
function orxGRAPHIC:aeq(_u) end

---
---convert to a void*
---
---@return voidptr # the converted void*
function orxGRAPHIC:asVoid() end

---
---(non-const self) Clears graphic blend mode
---
---@return orxSTATUS # success / failure
function orxGRAPHIC:clearBlendMode() end

---
---(non-const self) Clears graphic color
---
---@return orxSTATUS # success / failure
function orxGRAPHIC:clearColor() end

---
---Clones a graphic
---
---@return orxGRAPHIC # orxGRAPHIC / nil
function orxGRAPHIC:clone() end

---
---(non-const self) Decreases structure reference count
---
function orxGRAPHIC:decreaseCount() end

---
---(non-const self) Deletes a graphic
---
---@return orxSTATUS # success / failure
function orxGRAPHIC:delete() end

---
---Gets graphic blend mode
---
---@return orxDISPLAY_BLEND_MODE # Blend mode (alpha, multiply, add or none)
function orxGRAPHIC:getBlendMode() end

---
---Gets structure tree child
---
---@return orxSTRUCTURE # orxSTRUCTURE
function orxGRAPHIC:getChild() end

---
---Gets graphic color
---
---@return orxCOLOR # orxCOLOR / nil
function orxGRAPHIC:getColor() end

---
---Gets graphic data
---
---@return orxSTRUCTURE # OrxSTRUCTURE / nil
function orxGRAPHIC:getData() end

---
---Gets structure flags
---
---@return integer # integer (u32)
function orxGRAPHIC:getFlags() end

---
---Gets graphic flipping
---
---@return orxSTATUS # success / failure
---@return boolean # X axis flipping
---@return boolean # Y axis flipping
function orxGRAPHIC:getFlip() end

---
---Gets structure GUID
---
---@return integer # integer (u64)
function orxGRAPHIC:getGUID() end

---
---Gets structure ID
---
---@return orxSTRUCTURE_ID # orxSTRUCTURE_ID
function orxGRAPHIC:getID() end

---
---Gets graphic config name
---
---@return string # string / empty string
function orxGRAPHIC:getName() end

---
---Gets structure list next
---
---@return orxSTRUCTURE # orxSTRUCTURE
function orxGRAPHIC:getNext() end

---
---Gets graphic origin
---
---@return orxVECTOR # Origin coordinates
function orxGRAPHIC:getOrigin() end

---
---Gets structure's owner
---
---@return orxSTRUCTURE # orxSTRUCTURE / nil if not found/alive
function orxGRAPHIC:getOwner() end

---
---Gets structure tree parent
---
---@return orxSTRUCTURE # orxSTRUCTURE
function orxGRAPHIC:getParent() end

---
---Gets graphic pivot
---
---@return orxVECTOR # orxPIVOT / nil
function orxGRAPHIC:getPivot() end

---
---Gets structure list previous
---
---@return orxSTRUCTURE # orxSTRUCTURE
function orxGRAPHIC:getPrevious() end

---
---Gets structure reference count
---
---@return integer # integer (u32)
function orxGRAPHIC:getRefCount() end

---
---Gets graphic repeat (wrap) values
---
---@return orxSTATUS # success / failure
---@return number # X-axis repeat value
---@return number # Y-axis repeat value
function orxGRAPHIC:getRepeat() end

---
---Gets structure tree sibling
---
---@return orxSTRUCTURE # orxSTRUCTURE
function orxGRAPHIC:getSibling() end

---
---Gets graphic size
---
---@return orxVECTOR # orxVECTOR / nil
function orxGRAPHIC:getSize() end

---
---Gets graphic smoothing
---
---@return orxDISPLAY_SMOOTHING # Smoothing type (enabled, default or none)
function orxGRAPHIC:getSmoothing() end

---
---Graphic has blend mode accessor
---
---@return boolean # true / false
function orxGRAPHIC:hasBlendMode() end

---
---Graphic has color accessor
---
---@return boolean # true / false
function orxGRAPHIC:hasColor() end

---
---(non-const self) Increases structure reference count
---
function orxGRAPHIC:increaseCount() end

---
---(non-const self) Sets object blend mode
---
---@param _blendmode orxDISPLAY_BLEND_MODE # Blend mode (alpha, multiply, add or none)
---@return orxSTATUS # success / failure
function orxGRAPHIC:setBlendMode(_blendmode) end

---
---(non-const self) Sets graphic color
---
---@param _color orxCOLOR # (const) Color to set
---@return orxSTATUS # success / failure
function orxGRAPHIC:setColor(_color) end

---
---(non-const self) Sets graphic data
---
---@param _data orxSTRUCTURE # Data structure to set / nil
---@return orxSTATUS # success / failure
function orxGRAPHIC:setData(_data) end

---
---(non-const self) Sets structure flags
---
---@param _removeflags integer # Flags to remove
function orxGRAPHIC:setFlags(_removeflags) end

---
---(non-const self) Sets graphic flipping
---
---@param _flipx boolean # Flip it on X axis
---@param _flipy boolean # Flip it on Y axis
---@return orxSTATUS # success / failure
function orxGRAPHIC:setFlip(_flipx, _flipy) end

---
---(non-const self) Sets graphic origin
---
---@param _origin orxVECTOR # (const) Origin coordinates
---@return orxSTATUS # success / failure
function orxGRAPHIC:setOrigin(_origin) end

---
---(non-const self) Sets structure owner
---
---@return orxSTATUS # success / failure
function orxGRAPHIC:setOwner() end

---
---(non-const self) Sets structure tree parent
---
---@return orxSTATUS # success / failure
function orxGRAPHIC:setParent() end

---
---(non-const self) Sets graphic pivot
---
---@param _pivot orxVECTOR # (const) Pivot to set
---@return orxSTATUS # success / failure
function orxGRAPHIC:setPivot(_pivot) end

---
---(non-const self) Sets relative graphic pivot
---
---@param _alignflags integer # Alignment flags
---@return orxSTATUS # success / failure
function orxGRAPHIC:setRelativePivot(_alignflags) end

---
---(non-const self) Sets graphic repeat (wrap) value
---
---@param _repeatx number # X-axis repeat value
---@param _repeaty number # Y-axis repeat value
---@return orxSTATUS # success / failure
function orxGRAPHIC:setRepeat(_repeatx, _repeaty) end

---
---(non-const self) Sets graphic size
---
---@param _size orxVECTOR # (const) Size to set
---@return orxSTATUS # success / failure
function orxGRAPHIC:setSize(_size) end

---
---(non-const self) Sets graphic smoothing
---
---@param _smoothing orxDISPLAY_SMOOTHING # Smoothing type (enabled, default or none)
---@return orxSTATUS # success / failure
function orxGRAPHIC:setSmoothing(_smoothing) end

---
---Tests all flags against structure ones
---
---@return boolean # true / false
function orxGRAPHIC:testAllFlags() end

---
---Tests flags against structure ones
---
---@return boolean # true / false
function orxGRAPHIC:testFlags() end

---
---get the type name of the lorx userdata
---
---@return string # the type name
function orxGRAPHIC:type() end

---
---(non-const self) Updates structure if update function was registered for the structure type
---
---@param _clockinfo orxCLOCK_INFO # (const) Update associated clock info
---@return orxSTATUS # success / failure
function orxGRAPHIC:update(_clockinfo) end

---
---(non-const self) Updates graphic size (recompute)
---
---@return orxSTATUS # success / failure
function orxGRAPHIC:updateSize() end

---@class orxOBJECT
local orxOBJECT = {}

---
---(non-const self) Adds an FX using its config ID.
---
---@param _fxconfigid string # Config ID of the FX to add
---@return orxSTATUS # success / failure
function orxOBJECT:addFX(_fxconfigid) end

---
---(non-const self) Adds an FX to an object and its owned children.
---
---@param _fxconfigid string # Config ID of the FX to add
---@param _propagationdelay number # Propagation delay for each child
function orxOBJECT:addFXRecursive(_fxconfigid, _propagationdelay) end

---
---(non-const self) Adds a filter to the sounds of an object (cascading).
---
---@param _filterconfigid string # Config ID of the filter to add
---@return orxSTATUS # success / failure
function orxOBJECT:addFilter(_filterconfigid) end

---
---(non-const self) Adds a shader to an object using its config ID.
---
---@param _shaderconfigid string # Config ID of the shader to add
---@return orxSTATUS # success / failure
function orxOBJECT:addShader(_shaderconfigid) end

---
---(non-const self) Adds a shader to an object and its owned children.
---
---@param _shaderconfigid string # Config ID of the shader to add
function orxOBJECT:addShaderRecursive(_shaderconfigid) end

---
---(non-const self) Adds a sound using its config ID.
---
---@param _soundconfigid string # Config ID of the sound to add
---@return orxSTATUS # success / failure
function orxOBJECT:addSound(_soundconfigid) end

---
---(non-const self) Adds a timeline track to an object using its config ID.
---
---@param _trackconfigid string # Config ID of the timeline track to add
---@return orxSTATUS # success / failure
function orxOBJECT:addTimeLineTrack(_trackconfigid) end

---
---(non-const self) Adds a timeline track to an object and its owned children.
---
---@param _trackconfigid string # Config ID of the timeline track to add
function orxOBJECT:addTimeLineTrackRecursive(_trackconfigid) end

---
---(non-const self) Adds a unique FX using its config ID.
---
---@param _fxconfigid string # Config ID of the FX to add
---@return orxSTATUS # success / failure
function orxOBJECT:addUniqueFX(_fxconfigid) end

---
---(non-const self) Adds a unique FX to an object and its owned children.
---
---@param _fxconfigid string # Config ID of the FX to add
---@param _propagationdelay number # Propagation delay for each child
function orxOBJECT:addUniqueFXRecursive(_fxconfigid, _propagationdelay) end

---
---get the c memory address of the lorx userdata
---
---@return string # address string
function orxOBJECT:addr() end

---
---check if the c memory address of this lorx userdata equals to another
---
---@param _u any lorx utype # another lorx userdata
---@return boolean # true or false
function orxOBJECT:aeq(_u) end

---
---(non-const self) Applies a force.
---
---@param _force orxVECTOR # (const) Force to apply
---@param _point orxVECTOR # (const) Point (world coordinates) where the force will be applied, if orxNULL, center of mass will be used
---@return orxSTATUS # success / failure
function orxOBJECT:applyForce(_force, _point) end

---
---(non-const self) Applies an impulse.
---
---@param _impulse orxVECTOR # (const) Impulse to apply
---@param _point orxVECTOR # (const) Point (world coordinates) where the impulse will be applied, if orxNULL, center of mass will be used
---@return orxSTATUS # success / failure
function orxOBJECT:applyImpulse(_impulse, _point) end

---
---(non-const self) Applies a torque.
---
---@param _torque number # Torque to apply
---@return orxSTATUS # success / failure
function orxOBJECT:applyTorque(_torque) end

---
---convert to a void*
---
---@return voidptr # the converted void*
function orxOBJECT:asVoid() end

---
---(non-const self) Attaches an object to a parent while maintaining the object's world position.
---
---@param _parent voidptr # Parent structure to attach to (object, spawner, camera or frame)
---@return orxSTATUS # orsSTATUS_SUCCESS / failure
function orxOBJECT:attach(_parent) end

---
---(non-const self) Decreases structure reference count
---
function orxOBJECT:decreaseCount() end

---
---(non-const self) Deletes an object, *unsafe* when called from an event handler: call orxObject_SetLifeTime(orxFLOAT_0) instead
---
---@return orxSTATUS # success / failure
function orxOBJECT:delete() end

---
---(non-const self) Detaches an object from a parent while maintaining the object's world position.
---
---@return orxSTATUS # orsSTATUS_SUCCESS / failure
function orxOBJECT:detach() end

---
---(non-const self) Enables/disables an object. Note that enabling/disabling an object is not recursive, so its children will not be affected, see orxObject_EnableRecursive().
---
---@param _enable boolean # Enable / disable
function orxOBJECT:enable(_enable) end

---
---(non-const self) Enables/disables an object and all its owned children.
---
---@param _enable boolean # Enable / disable
function orxOBJECT:enableRecursive(_enable) end

---
---(non-const self) Enables an object's shader.
---
---@param _enable boolean # Enable / disable
function orxOBJECT:enableShader(_enable) end

---
---(non-const self) Enables an object's timeline.
---
---@param _enable boolean # Enable / disable
function orxOBJECT:enableTimeLine(_enable) end

---
---Gets object active time, i.e. the amount of time that the object has been alive taking into account the object's clock multiplier and object's periods of pause.
---
---@return number # Active time
function orxOBJECT:getActiveTime() end

---
---Gets an object angular velocity.
---
---@return number # Object angular velocity (radians/seconds)
function orxOBJECT:getAngularVelocity() end

---
---Gets an object's relative animation frequency.
---
---@return number # Animation frequency / -orxFLOAT_1
function orxOBJECT:getAnimFrequency() end

---
---Get the orxANIMPOINTER linked to the orxSTRUCTURE
---
---@return orxANIMPOINTER # The orxANIMPOINTER or nil
function orxOBJECT:getAnimPointer() end

---
---Gets object blend mode.
---
---@return orxDISPLAY_BLEND_MODE # Blend mode (alpha, multiply, add or none)
function orxOBJECT:getBlendMode() end

---
---Get the orxBODY linked to the orxSTRUCTURE
---
---@return orxBODY # The orxBODY or nil
function orxOBJECT:getBody() end

---
---Gets object's bounding box (OBB).
---
---@return orxOBOX # Bounding box / nil
function orxOBJECT:getBoundingBox() end

---
---Gets object's first child object. See orxObject_SetOwner() and orxObject_SetParent() for a comparison of ownership and parenthood in Orx. Note: this function will filter out any camera or spawner and retrieve the first child object. This function is typically used to iterate over the children objects of an object. For example: @code for(orxOBJECT *pstChild = orxObject_GetChild(pstObject); pstChild != orxNULL; pstChild = orxObject_GetSibling(pstChild)) { DoSomething(pstChild); // DoSomething() can recurse into the children of pstChild for a depth-first traversal } @endcode
---
---@return orxOBJECT # First child object / nil
function orxOBJECT:getChild() end

---
---Get the orxCLOCK linked to the orxSTRUCTURE
---
---@return orxCLOCK # The orxCLOCK or nil
function orxOBJECT:getClock() end

---
---Gets object color.
---
---@return orxCOLOR # orxCOLOR / nil
function orxOBJECT:getColor() end

---
---Gets current animation.
---
---@return string # Current animation / empty string
function orxOBJECT:getCurrentAnim() end

---
---Gets an object custom gravity.
---
---@return orxVECTOR # Object custom gravity / nil is object doesn't have any
function orxOBJECT:getCustomGravity() end

---
---Gets an object's relative FX frequency.
---
---@return number # FX frequency / -orxFLOAT_1
function orxOBJECT:getFXFrequency() end

---
---Get the orxFXPOINTER linked to the orxSTRUCTURE
---
---@return orxFXPOINTER # The orxFXPOINTER or nil
function orxOBJECT:getFXPointer() end

---
---Gets structure flags
---
---@return integer # integer (u32)
function orxOBJECT:getFlags() end

---
---Gets object flipping.
---
---@return orxSTATUS # success / failure
---@return boolean # X axis flipping
---@return boolean # Y axis flipping
function orxOBJECT:getFlip() end

---
---Get the orxFRAME linked to the orxSTRUCTURE
---
---@return orxFRAME # The orxFRAME or nil
function orxOBJECT:getFrame() end

---
---Gets structure GUID
---
---@return integer # integer (u64)
function orxOBJECT:getGUID() end

---
---Get the orxGRAPHIC linked to the orxSTRUCTURE
---
---@return orxGRAPHIC # The orxGRAPHIC or nil
function orxOBJECT:getGraphic() end

---
---Gets object's group ID.
---
---@return integer # Object's group ID. This is the string ID (see orxString_GetFromID()) of the object's group name.
function orxOBJECT:getGroupID() end

---
---Gets structure ID
---
---@return orxSTRUCTURE_ID # orxSTRUCTURE_ID
function orxOBJECT:getID() end

---
---Gets object's ignore flags.
---
---@return integer # Ignore flags
function orxOBJECT:getIgnoreFlags() end

---
---Gets last added sound (Do *NOT* destroy it directly before removing it!!!).
---
---@return orxSOUND # orxSOUND / nil
function orxOBJECT:getLastAddedSound() end

---
---Gets object lifetime.
---
---@return number # Lifetime / negative value if none
function orxOBJECT:getLifeTime() end

---
---Gets object's ignore flags literals. The result will not persist through other calls to this function or to orxFrame_GetIgnoreFlagNames().
---
---@return string # Ignore flags literals
function orxOBJECT:getLiteralIgnoreFlags() end

---
---Gets an object mass.
---
---@return number # Object mass
function orxOBJECT:getMass() end

---
---Gets an object center of mass (object space).
---
---@return orxVECTOR # Mass center / nil
function orxOBJECT:getMassCenter() end

---
---Gets object config name.
---
---@return string # string / empty string
function orxOBJECT:getName() end

---
---Gets structure list next
---
---@return orxSTRUCTURE # orxSTRUCTURE
function orxOBJECT:getNext() end

---
---Gets object's next child structure of a given type (camera, object or spawner). See orxObject_SetOwner() and orxObject_SetParent() for a comparison of ownership and parenthood in Orx. See orxObject_GetChild()/orxObject_GetSibling() if you want to only consider children objects. This function is typically used to iterate over the children of an object. For example, iterating over the immediate children cameras: @code for(orxCAMERA *pstChild = orxCAMERA(orxObject_GetNextChild(pstObject, orxNULL, orxSTRUCTURE_ID_CAMERA)); pstChild != orxNULL; pstChild = orxCAMERA(orxObject_GetNextChild(pstObject, pstChild, orxSTRUCTURE_ID_CAMERA))) { DoSomethingWithCamera(pstChild); } @endcode
---
---@param _child voidptr # Concerned child to retrieve the next sibling, nil to retrieve the first child
---@param _structureid orxSTRUCTURE_ID # ID of the structure to consider (camera, spawner, object or frame)
---@return orxSTRUCTURE # Next child/sibling structure (camera, spawner, object or frame) / nil
function orxOBJECT:getNextChild(_child, _structureid) end

---
---Get object origin. See orxObject_SetOrigin() for a more detailed explanation.
---
---@return orxVECTOR # orxVECTOR / nil
function orxOBJECT:getOrigin() end

---
---Gets object's first owned child (only if created with a config ChildList / has an owner set with orxObject_SetOwner) see orxObject_SetOwner() and orxObject_SetParent() for a comparison of ownership and parenthood in Orx. * This function is typically used to iterate over the owned children of an object. For example; @code for(orxOBJECT * pstChild = orxObject_GetOwnedChild(pstObject); pstChild; pstChild = orxObject_GetOwnedSibling(pstChild)) { do_something(pstChild); } @endcode
---
---@return orxOBJECT # First owned child object / nil
function orxOBJECT:getOwnedChild() end

---
---Gets object's next owned sibling (only if created with a config ChildList / has an owner set with orxObject_SetOwner) This function is typically used to iterate over the owned children of an object, see orxObject_GetOwnedChild() for an example.
---
---@return orxOBJECT # Next sibling object / nil
function orxOBJECT:getOwnedSibling() end

---
---Gets object's owner. See orxObject_SetOwner().
---
---@return orxSTRUCTURE # Owner / nil
function orxOBJECT:getOwner() end

---
---Gets object's parent. See orxObject_SetParent() for a more detailed explanation.
---
---@return orxSTRUCTURE # Parent (object, spawner, camera or frame) / nil
function orxOBJECT:getParent() end

---
---Get object pivot. See orxObject_SetPivot() for a more detailed explanation.
---
---@return orxVECTOR # orxVECTOR / nil
function orxOBJECT:getPivot() end

---
---Get object position. See orxObject_SetPosition().
---
---@return orxVECTOR # orxVECTOR / nil
function orxOBJECT:getPosition() end

---
---Gets structure list previous
---
---@return orxSTRUCTURE # orxSTRUCTURE
function orxOBJECT:getPrevious() end

---
---Gets structure reference count
---
---@return integer # integer (u32)
function orxOBJECT:getRefCount() end

---
---Gets an object relative speed.
---
---@return orxVECTOR # Object relative speed / nil
function orxOBJECT:getRelativeSpeed() end

---
---Gets object repeat (wrap) values.
---
---@return orxSTATUS # success / failure
---@return number # X-axis repeat value
---@return number # Y-axis repeat value
function orxOBJECT:getRepeat() end

---
---Get object rotation. See orxObject_SetRotation().
---
---@return number # number (radians)
function orxOBJECT:getRotation() end

---
---Get object scale. See orxObject_SetScale().
---
---@return orxVECTOR # orxVECTOR / nil
function orxOBJECT:getScale() end

---
---Get the orxSHADERPOINTER linked to the orxSTRUCTURE
---
---@return orxSHADERPOINTER # The orxSHADERPOINTER or nil
function orxOBJECT:getShaderPointer() end

---
---Gets object's next sibling object. This function is typically used for iterating over the children objects of an object, see orxObject_GetChild() for an iteration example. Note: this function will filter out any camera or spawner and retrieve the next sibling object.
---
---@return orxOBJECT # Next sibling object / nil
function orxOBJECT:getSibling() end

---
---Gets object size. See orxObject_SetSize() for a more detailed explanation.
---
---@return orxVECTOR # orxVECTOR / nil
function orxOBJECT:getSize() end

---
---Gets object smoothing.
---
---@return orxDISPLAY_SMOOTHING # Smoothing type (enabled, default or none)
function orxOBJECT:getSmoothing() end

---
---Get the orxSOUNDPOINTER linked to the orxSTRUCTURE
---
---@return orxSOUNDPOINTER # The orxSOUNDPOINTER or nil
function orxOBJECT:getSoundPointer() end

---
---Get the orxSPAWNER linked to the orxSTRUCTURE
---
---@return orxSPAWNER # The orxSPAWNER or nil
function orxOBJECT:getSpawner() end

---
---Gets an object speed.
---
---@return orxVECTOR # Object speed / nil
function orxOBJECT:getSpeed() end

---
---Gets target animation.
---
---@return string # Target animation / empty string
function orxOBJECT:getTargetAnim() end

---
---(non-const self) Gets object text string, if object is associated to a text.
---
---@return string # string / empty string
function orxOBJECT:getTextString() end

---
---Get the orxTIMELINE linked to the orxSTRUCTURE
---
---@return orxTIMELINE # The orxTIMELINE or nil
function orxOBJECT:getTimeline() end

---
---Gets object's user data.
---
---@return voidptr # Stored user data / nil
function orxOBJECT:getUserData() end

---
---Gets object working graphic.
---
---@return orxGRAPHIC # orxGRAPHIC / nil
function orxOBJECT:getWorkingGraphic() end

---
---Gets object working texture.
---
---@return orxTEXTURE # orxTEXTURE / nil
function orxOBJECT:getWorkingTexture() end

---
---Get object world position. See orxObject_SetWorldPosition().
---
---@return orxVECTOR # orxVECTOR / nil
function orxOBJECT:getWorldPosition() end

---
---Get object world rotation. See orxObject_SetWorldRotation().
---
---@return number # number (radians)
function orxOBJECT:getWorldRotation() end

---
---Gets object world scale. See orxObject_SetWorldScale().
---
---@return orxVECTOR # orxVECTOR / nil
function orxOBJECT:getWorldScale() end

---
---Object has blend mode accessor?
---
---@return boolean # true / false
function orxOBJECT:hasBlendMode() end

---
---Object has color accessor?
---
---@return boolean # true / false
function orxOBJECT:hasColor() end

---
---(non-const self) Increases structure reference count
---
function orxOBJECT:increaseCount() end

---
---Is current animation test.
---
---@param _animname string # Animation name (config's one) to test
---@return boolean # true / false
function orxOBJECT:isCurrentAnim(_animname) end

---
---Is object enabled?
---
---@return boolean # true if enabled, false otherwise
function orxOBJECT:isEnabled() end

---
---Is object paused?
---
---@return boolean # true if paused, false otherwise
function orxOBJECT:isPaused() end

---
---Is an object's shader enabled?
---
---@return boolean # true if enabled, false otherwise
function orxOBJECT:isShaderEnabled() end

---
---Is target animation test.
---
---@param _animname string # Animation name (config's one) to test
---@return boolean # true / false
function orxOBJECT:isTargetAnim(_animname) end

---
---Is an object's timeline enabled?
---
---@return boolean # true if enabled, false otherwise
function orxOBJECT:isTimeLineEnabled() end

---
---(non-const self) Links a structure to an object.
---
---@param _structure orxSTRUCTURE # Structure to link
---@return orxSTATUS # success / failure
function orxOBJECT:linkStructure(_structure) end

---
---Logs all parents of an object, including their frame data.
---
---@return orxSTATUS # success / failure
function orxOBJECT:logParents() end

---
---(non-const self) Pauses/unpauses an object. Note that pausing an object is not recursive, so its children will not be affected, see orxObject_PauseRecursive().
---
---@param _pause boolean # Pause / unpause
function orxOBJECT:pause(_pause) end

---
---(non-const self) Pauses/unpauses an object and its owned children.
---
---@param _pause boolean # Pause / unpause
function orxOBJECT:pauseRecursive(_pause) end

---
---(non-const self) Plays all the sounds of an object.
---
---@return orxSTATUS # success / failure
function orxOBJECT:play() end

---
---(non-const self) Removes all FXs.
---
---@return orxSTATUS # success / failure
function orxOBJECT:removeAllFXs() end

---
---(non-const self) Removes all FXs from an object and its owned children.
---
---@return orxSTATUS # success / failure
function orxOBJECT:removeAllFXsRecursive() end

---
---(non-const self) Removes all filters from the sounds of an object.
---
---@return orxSTATUS # success / failure
function orxOBJECT:removeAllFilters() end

---
---(non-const self) Removes an FX using its config ID.
---
---@param _fxconfigid string # Config ID of the FX to remove
---@return orxSTATUS # success / failure
function orxOBJECT:removeFX(_fxconfigid) end

---
---(non-const self) Removes an FX from an object and its owned children.
---
---@param _fxconfigid string # Config ID of the FX to remove
function orxOBJECT:removeFXRecursive(_fxconfigid) end

---
---(non-const self) Removes last added filter from the sounds of an object.
---
---@return orxSTATUS # success / failure
function orxOBJECT:removeLastFilter() end

---
---(non-const self) Removes a shader using its config ID.
---
---@param _shaderconfigid string # Config ID of the shader to remove
---@return orxSTATUS # success / failure
function orxOBJECT:removeShader(_shaderconfigid) end

---
---(non-const self) Removes a shader from an object and its owned children.
---
---@param _shaderconfigid string # Config ID of the shader to remove
function orxOBJECT:removeShaderRecursive(_shaderconfigid) end

---
---(non-const self) Removes a sound using its config ID.
---
---@param _soundconfigid string # Config ID of the sound to remove
---@return orxSTATUS # success / failure
function orxOBJECT:removeSound(_soundconfigid) end

---
---(non-const self) Removes a timeline track using its config ID
---
---@param _trackconfigid string # Config ID of the timeline track to remove
---@return orxSTATUS # success / failure
function orxOBJECT:removeTimeLineTrack(_trackconfigid) end

---
---(non-const self) Removes a timeline track from an object and its owned children.
---
---@param _trackconfigid string # Config ID of the timeline track to remove
function orxOBJECT:removeTimeLineTrackRecursive(_trackconfigid) end

---
---(non-const self) Sets object alpha.
---
---@param _alpha number # Alpha value to set
---@return orxSTATUS # success / failure
function orxOBJECT:setAlpha(_alpha) end

---
---(non-const self) Sets alpha of an object and all its owned children.
---
---@param _alpha number # Alpha value to set
function orxOBJECT:setAlphaRecursive(_alpha) end

---
---(non-const self) Sets an object angular velocity.
---
---@param _velocity number # Angular velocity to set (radians/seconds)
---@return orxSTATUS # success / failure
function orxOBJECT:setAngularVelocity(_velocity) end

---
---(non-const self) Sets an object's relative animation frequency.
---
---@param _frequency number # Frequency to set: < 1.0 for slower than initial, > 1.0 for faster than initial
---@return orxSTATUS # success / failure
function orxOBJECT:setAnimFrequency(_frequency) end

---
---(non-const self) Sets the relative animation frequency for an object and its owned children.
---
---@param _frequency number # Frequency to set: < 1.0 for slower than initial, > 1.0 for faster than initial
function orxOBJECT:setAnimFrequencyRecursive(_frequency) end

---
---(non-const self) Sets an object animset.
---
---@param _animset orxANIMSET # Animation set to set / nil
---@return orxSTATUS # success / failure
function orxOBJECT:setAnimSet(_animset) end

---
---(non-const self) Sets object blend mode.
---
---@param _blendmode orxDISPLAY_BLEND_MODE # Blend mode (alpha, multiply, add or none)
---@return orxSTATUS # success / failure
function orxOBJECT:setBlendMode(_blendmode) end

---
---(non-const self) Sets blend mode of an object and its owned children.
---
---@param _blendmode orxDISPLAY_BLEND_MODE # Blend mode (alpha, multiply, add or none)
function orxOBJECT:setBlendModeRecursive(_blendmode) end

---
---(non-const self) Sets associated clock for an object.
---
---@param _clock orxCLOCK # Clock to associate / nil
---@return orxSTATUS # success / failure
function orxOBJECT:setClock(_clock) end

---
---(non-const self) Sets associated clock for an object and its owned children.
---
---@param _clock orxCLOCK # Clock to associate / nil
function orxOBJECT:setClockRecursive(_clock) end

---
---(non-const self) Sets object color.
---
---@param _color orxCOLOR # (const) Color to set, nil to remove any specific color
---@return orxSTATUS # success / failure
function orxOBJECT:setColor(_color) end

---
---(non-const self) Sets color of an object and all its owned children.
---
---@param _color orxCOLOR # (const) Color to set, nil to remove any specific color
function orxOBJECT:setColorRecursive(_color) end

---
---(non-const self) Sets current animation for an object. This function switches the currently displayed animation of the object immediately. Compare this with orxObject_SetTargetAnim().
---
---@param _animname string # Animation name (config's one) to set / nil
---@return orxSTATUS # success / failure
function orxOBJECT:setCurrentAnim(_animname) end

---
---(non-const self) Sets current animation for an object and its owned children.
---
---@param _animname string # Animation name (config's one) to set / nil
function orxOBJECT:setCurrentAnimRecursive(_animname) end

---
---(non-const self) Sets an object custom gravity.
---
---@param _customgravity orxVECTOR # (const) Custom gravity to set / nil to remove it
---@return orxSTATUS # success / failure
function orxOBJECT:setCustomGravity(_customgravity) end

---
---(non-const self) Sets an object's relative FX frequency.
---
---@param _frequency number # Frequency to set: < 1.0 for slower than initial, > 1.0 for faster than initial
---@return orxSTATUS # success / failure
function orxOBJECT:setFXFrequency(_frequency) end

---
---(non-const self) Sets the relative FX frequency for an object and its owned children.
---
---@param _frequency number # Frequency to set: < 1.0 for slower than initial, > 1.0 for faster than initial
function orxOBJECT:setFXFrequencyRecursive(_frequency) end

---
---(non-const self) Sets structure flags
---
---@param _removeflags integer # Flags to remove
function orxOBJECT:setFlags(_removeflags) end

---
---(non-const self) Sets object flipping.
---
---@param _flipx boolean # Flip it on X axis
---@param _flipy boolean # Flip it on Y axis
---@return orxSTATUS # success / failure
function orxOBJECT:setFlip(_flipx, _flipy) end

---
---(non-const self) Sets object's group ID.
---
---@param _groupid integer # Group ID to set. This is the string ID (see orxString_GetID()) of the object's group name.
---@return orxSTATUS # success / failure
function orxOBJECT:setGroupID(_groupid) end

---
---(non-const self) Sets group ID of an object and all its owned children.
---
---@param _groupid integer # Group ID to set. This is the string ID (see orxString_GetID()) of the object's group name.
function orxOBJECT:setGroupIDRecursive(_groupid) end

---
---(non-const self) Sets object's ignore flags.
---
---@param _ignoreflags integer # Ignore flags to set (all other ignore flags will get cleared)
---@return orxSTATUS # success / failure
function orxOBJECT:setIgnoreFlags(_ignoreflags) end

---
---(non-const self) Sets object lifetime.
---
---@param _lifetime number # Lifetime to set, negative value to disable it
---@return orxSTATUS # success / failure
function orxOBJECT:setLifeTime(_lifetime) end

---
---(non-const self) Sets object's ignore flags using literals.
---
---@param _ignoreflags string # Literals of the ignore flags to set (all other ignore flags will get cleared)
---@return orxSTATUS # success / failure
function orxOBJECT:setLiteralIgnoreFlags(_ignoreflags) end

---
---(non-const self) Sets object literal lifetime.
---
---@param _lifetime string # Lifetime to set, can be composed of multiple tags, separated by space: anim, child, fx, sound, spawner and track
---@return orxSTATUS # success / failure
function orxOBJECT:setLiteralLifeTime(_lifetime) end

---
---(non-const self) Sets object origin. This is a convenience wrapper around orxGraphic_SetOrigin(). The "origin" of a graphic is essentially what is indicated by the "TextureOrigin" field of a config graphic section. The "origin" together with "size" (see orxObject_SetSize()) defines the sprite of an object.
---
---@param _origin orxVECTOR # (const) Object origin
---@return orxSTATUS # success / failure
function orxOBJECT:setOrigin(_origin) end

---
---(non-const self) Sets owner for an object. Ownership in Orx is only about lifetime management. That is, when an object dies, it also kills its owned children. Compare this with orxObject_SetParent(). * Note that the "ChildList" field of an object's config section implies two things; that the object is both the owner (orxObject_SetOwner()) and the parent (orxObject_SetParent()) of its owned children. There is an exception to this though; when an object's child has a parent camera, the object is only the owner, and the camera is the parent.
---
---@param _owner voidptr # Owner to set / orxNULL, if owner is an orxOBJECT, the owned object will be added to it as a children
function orxOBJECT:setOwner(_owner) end

---
---(non-const self) Sets panning of all sounds of an object.
---
---@param _panning number # Sound panning, -1.0f for full left, 0.0f for center, 1.0f for full right
---@param _mix boolean # Left/Right channels will be mixed if true or act like a balance otherwise
---@return orxSTATUS # success / failure
function orxOBJECT:setPanning(_panning, _mix) end

---
---(non-const self) Sets an object parent (in the frame hierarchy). Parenthood in orx is about the transformation (position, rotation, scale) of objects. Transformation of objects are compounded in a frame hierarchy. Compare this with orxObject_SetOwner() * Note that the "ChildList" field of an object's config section implies two things; that the object is both the owner (orxObject_SetOwner()) and the parent (orxObject_SetParent()) of its children. There is an exception to this though; when an object's child has a parent camera, the object is only the owner, and the camera is the parent.
---
---@param _parent voidptr # Parent structure to set (object, spawner, camera or frame) / nil
---@return orxSTATUS # orsSTATUS_SUCCESS / failure
function orxOBJECT:setParent(_parent) end

---
---(non-const self) Sets pitch for all sounds of an object.
---
---@param _pitch number # Desired pitch (0.0 - 1.0)
---@return orxSTATUS # success / failure
function orxOBJECT:setPitch(_pitch) end

---
---(non-const self) Sets object pivot. This is a convenience wrapper around orxGraphic_SetPivot(). The "pivot" is essentially what is indicated by the "Pivot" field of a config graphic section.
---
---@param _pivot orxVECTOR # (const) Object pivot
---@return orxSTATUS # success / failure
function orxOBJECT:setPivot(_pivot) end

---
---(non-const self) Sets object position in its parent's reference frame. See orxObject_SetWorldPosition() for setting an object's position in the global reference frame.
---
---@param _position orxVECTOR # (const) Object position
---@return orxSTATUS # success / failure
function orxOBJECT:setPosition(_position) end

---
---(non-const self) Sets object RGB values.
---
---@param _rgb orxVECTOR # (const) RGB values to set
---@return orxSTATUS # success / failure
function orxOBJECT:setRGB(_rgb) end

---
---(non-const self) Sets color of an object and all its owned children.
---
---@param _rgb orxVECTOR # (const) RGB values to set
function orxOBJECT:setRGBRecursive(_rgb) end

---
---(non-const self) Sets an object speed relative to its rotation/scale.
---
---@param _relativespeed orxVECTOR # (const) Relative speed to set
---@return orxSTATUS # success / failure
function orxOBJECT:setRelativeSpeed(_relativespeed) end

---
---(non-const self) Sets object repeat (wrap) values.
---
---@param _repeatx number # X-axis repeat value
---@param _repeaty number # Y-axis repeat value
---@return orxSTATUS # success / failure
function orxOBJECT:setRepeat(_repeatx, _repeaty) end

---
---(non-const self) Sets object rotation in its parent's reference frame. See orxObject_SetWorldRotation() for setting an object's rotation in the global reference frame.
---
---@param _rotation number # Object rotation (radians)
---@return orxSTATUS # success / failure
function orxOBJECT:setRotation(_rotation) end

---
---(non-const self) Sets object scale in its parent's reference frame. See orxObject_SetWorldScale() for setting an object's scale in the global reference frame. See orxObject_SetSize() for a deeper explanation of the "size" of an object.
---
---@param _scale orxVECTOR # (const) Object scale vector
---@return orxSTATUS # success / failure
function orxOBJECT:setScale(_scale) end

---
---(non-const self) Sets object size. For objects that have a graphic attached it's simply a convenience wrapper for orxGraphic_SetSize(), but an object can also have a size without a graphic. * Note the difference between "Scale" and "Size". The size of an object with a non-text graphic is the sprite size in pixels on its texture. The object's effective size for rendering and intersection purposes (see orxObject_Pick() and friends) is proportional to its "size" multiplied by its "scale". Another important distinction is that the scale of an object also affects its children (see orxObject_SetParent() and note the distinction between parenthood and ownership).
---
---@param _size orxVECTOR # (const) Object size
---@return orxSTATUS # success / failure
function orxOBJECT:setSize(_size) end

---
---(non-const self) Sets object smoothing.
---
---@param _smoothing orxDISPLAY_SMOOTHING # Smoothing type (enabled, default or none)
---@return orxSTATUS # success / failure
function orxOBJECT:setSmoothing(_smoothing) end

---
---(non-const self) Sets smoothing for an object and its owned children.
---
---@param _smoothing orxDISPLAY_SMOOTHING # Smoothing type (enabled, default or none)
function orxOBJECT:setSmoothingRecursive(_smoothing) end

---
---(non-const self) Sets an object speed.
---
---@param _speed orxVECTOR # (const) Speed to set
---@return orxSTATUS # success / failure
function orxOBJECT:setSpeed(_speed) end

---
---(non-const self) Sets target animation for an object. The animations are sequenced on an object according to the animation link graph defined by its AnimationSet. The sequence follows the graph and tries to reach the target animation. Use orxObject_SetCurrentAnim() to switch the animation without using the link graph.
---
---@param _animname string # Animation name (config's one) to set / nil
---@return orxSTATUS # success / failure
function orxOBJECT:setTargetAnim(_animname) end

---
---(non-const self) Sets target animation for an object and its owned children.
---
---@param _animname string # Animation name (config's one) to set / nil
function orxOBJECT:setTargetAnimRecursive(_animname) end

---
---(non-const self) Sets object text string, if object is associated to a text.
---
---@param _string string # String to set
---@return orxSTATUS # success / failure
function orxOBJECT:setTextString(_string) end

---
---(non-const self) Sets user data for an object. Orx ignores the user data, this is a mechanism for attaching custom data to be used later by user code.
---
---@param _userdata voidptr # User data to store / nil
function orxOBJECT:setUserData(_userdata) end

---
---(non-const self) Sets volume for all sounds of an object.
---
---@param _volume number # Desired volume (0.0 - 1.0)
---@return orxSTATUS # success / failure
function orxOBJECT:setVolume(_volume) end

---
---(non-const self) Sets object position in the global reference frame. See orxObject_SetPosition() for setting an object's position in its parent's reference frame.
---
---@param _position orxVECTOR # (const) Object world position
---@return orxSTATUS # success / failure
function orxOBJECT:setWorldPosition(_position) end

---
---(non-const self) Sets object rotation in the global reference frame. See orxObject_SetRotation() for setting an object's rotation in its parent's reference frame.
---
---@param _rotation number # Object world rotation (radians)
---@return orxSTATUS # success / failure
function orxOBJECT:setWorldRotation(_rotation) end

---
---(non-const self) Sets object scale in the global reference frame. See orxObject_SetScale() for setting an object's scale in its parent's reference frame.
---
---@param _scale orxVECTOR # (const) Object world scale vector
---@return orxSTATUS # success / failure
function orxOBJECT:setWorldScale(_scale) end

---
---(non-const self) Stops all the sounds of an object.
---
---@return orxSTATUS # success / failure
function orxOBJECT:stop() end

---
---(non-const self) Synchronizes FXs with another object's ones (if FXs are not matching on both objects the behavior is undefined).
---
---@param _model orxOBJECT # (const) Model object on which to synchronize FXs
---@return orxSTATUS # success / failure
function orxOBJECT:synchronizeFX(_model) end

---
---Tests all flags against structure ones
---
---@return boolean # true / false
function orxOBJECT:testAllFlags() end

---
---Tests flags against structure ones
---
---@return boolean # true / false
function orxOBJECT:testFlags() end

---
---get the type name of the lorx userdata
---
---@return string # the type name
function orxOBJECT:type() end

---
---(non-const self) Unlinks structure from an object, given its structure ID.
---
---@param _structureid orxSTRUCTURE_ID # ID of structure to unlink
function orxOBJECT:unlinkStructure(_structureid) end

---
---(non-const self) Updates an object.
---
---@param _clockinfo orxCLOCK_INFO # (const) Clock information used to compute new object's state
---@return orxSTATUS # success / failure
function orxOBJECT:update(_clockinfo) end

---@class orxOBOX
---@field public position orxVECTOR # 
---@field public pivot orxVECTOR # 
---@field public x orxVECTOR # 
---@field public y orxVECTOR # 
---@field public z orxVECTOR # 
local orxOBOX = {}

---
---Is 2D position inside oriented box test
---
---@param _position orxVECTOR # (const) Position to test against the box (no Z-test)
---@return boolean # true if position is inside the box, false otherwise
function orxOBOX:_2DIsInside(_position) end

---
---Rotates in 2D an OBox
---
---@param _angle number # Z-axis rotation angle (radians)
---@return orxOBOX # Rotated OBox
function orxOBOX:_2DRotate(_angle) end

---
---(non-const self) Sets 2D oriented box values
---
---@param _worldposition orxVECTOR # (const) World space position vector
---@param _pivot orxVECTOR # (const) Pivot vector
---@param _size orxVECTOR # (const) Size vector
---@param _angle number # Z-axis angle (radians)
---@return orxOBOX # orxOBOX / nil
function orxOBOX:_2DSet(_worldposition, _pivot, _size, _angle) end

---
---get the c memory address of the lorx userdata
---
---@return string # address string
function orxOBOX:addr() end

---
---check if the c memory address of this lorx userdata equals to another
---
---@param _u any lorx utype # another lorx userdata
---@return boolean # true or false
function orxOBOX:aeq(_u) end

---
---convert to a void*
---
---@return voidptr # the converted void*
function orxOBOX:asVoid() end

---
---Copies an OBox onto another one
---
---@return orxOBOX # Destination OBox
function orxOBOX:copy() end

---
---Gets OBox center position
---
---@return orxVECTOR # Center position vector
function orxOBOX:getCenter() end

---
---Is position inside oriented box test
---
---@param _position orxVECTOR # (const) Position to test against the box
---@return boolean # true if position is inside the box, false otherwise
function orxOBOX:isInside(_position) end

---
---Moves an OBox
---
---@param _move orxVECTOR # (const) Move vector
---@return orxOBOX # Moved OBox
function orxOBOX:move(_move) end

---
---get the type name of the lorx userdata
---
---@return string # the type name
function orxOBOX:type() end

---
---Tests oriented box intersection (simple Z-axis test, to use with Z-axis aligned orxOBOX)
---
---@param _box2 orxOBOX # (const) Second box operand
---@return boolean # true if boxes intersect, false otherwise
function orxOBOX:zAlignedTestIntersection(_box2) end

---@class orxPHYSICS_BODY
local orxPHYSICS_BODY = {}

---
---get the c memory address of the lorx userdata
---
---@return string # address string
function orxPHYSICS_BODY:addr() end

---
---check if the c memory address of this lorx userdata equals to another
---
---@param _u any lorx utype # another lorx userdata
---@return boolean # true or false
function orxPHYSICS_BODY:aeq(_u) end

---
---(non-const self) Applies a force to a physical body
---
---@param _force orxVECTOR # (const) Force to apply
---@param _point orxVECTOR # (const) Point of application (world coordinates) (if null, center of mass will be used)
---@return orxSTATUS # success / failure
function orxPHYSICS_BODY:applyForce(_force, _point) end

---
---(non-const self) Applies an impulse to a physical body
---
---@param _impulse orxVECTOR # (const) Impulse to apply
---@param _point orxVECTOR # (const) Point of application (world coordinates) (if null, center of mass will be used)
---@return orxSTATUS # success / failure
function orxPHYSICS_BODY:applyImpulse(_impulse, _point) end

---
---(non-const self) Applies a torque to a physical body
---
---@param _torque number # Torque to apply
---@return orxSTATUS # success / failure
function orxPHYSICS_BODY:applyTorque(_torque) end

---
---convert to a void*
---
---@return voidptr # the converted void*
function orxPHYSICS_BODY:asVoid() end

---
---(non-const self) Deletes a physical body
---
function orxPHYSICS_BODY:delete() end

---
---Gets angular damping of a physical body
---
---@return number # Angular damping of the physical body
function orxPHYSICS_BODY:getAngularDamping() end

---
---Gets the angular velocity of a physical body
---
---@return number # Angular velocity (radians/seconds) of the physical body
function orxPHYSICS_BODY:getAngularVelocity() end

---
---Gets the custom gravity of a physical body
---
---@return orxVECTOR # Physical body custom gravity / nil is object doesn't have any
function orxPHYSICS_BODY:getCustomGravity() end

---
---Gets linear damping of a physical body
---
---@return number # Linear damping of the physical body
function orxPHYSICS_BODY:getLinearDamping() end

---
---Gets the mass of a physical body
---
---@return number # Mass of the physical body
function orxPHYSICS_BODY:getMass() end

---
---Gets the center of mass of a physical body (object space but scale isn't accounted for)
---
---@return orxVECTOR # Center of mass of the physical body
function orxPHYSICS_BODY:getMassCenter() end

---
---Gets the position of a physical body
---
---@return orxVECTOR # Position of the physical body
function orxPHYSICS_BODY:getPosition() end

---
---Gets the rotation of a physical body
---
---@return number # Rotation (radians) of the physical body
function orxPHYSICS_BODY:getRotation() end

---
---Gets the speed of a physical body
---
---@return orxVECTOR # Speed of the physical body
function orxPHYSICS_BODY:getSpeed() end

---
---Gets the speed of a physical body at a specified world position
---
---@param _position orxVECTOR # (const) Concerned world position
---@return orxVECTOR # Speed of the physical body
function orxPHYSICS_BODY:getSpeedAtWorldPosition(_position) end

---
---Is a physical body using a fixed rotation
---
---@return boolean # true if fixed rotation, false otherwise
function orxPHYSICS_BODY:isFixedRotation() end

---
---(non-const self) Sets the "allow moving" property of a body
---
---@param _allowmoving boolean # Only used for non-dynamic bodies, Kinematic / Static
---@return orxSTATUS # success / failure
function orxPHYSICS_BODY:setAllowMoving(_allowmoving) end

---
---(non-const self) Sets angular damping of a physical body
---
---@param _damping number # Angular damping to set
---@return orxSTATUS # success / failure
function orxPHYSICS_BODY:setAngularDamping(_damping) end

---
---(non-const self) Sets the angular velocity of a physical body
---
---@param _velocity number # Angular velocity (radians/seconds) to set
---@return orxSTATUS # success / failure
function orxPHYSICS_BODY:setAngularVelocity(_velocity) end

---
---(non-const self) Sets the custom gravity of a physical body
---
---@param _customgravity orxVECTOR # (const) Custom gravity multiplier to set / nil to remove it
---@return orxSTATUS # success / failure
function orxPHYSICS_BODY:setCustomGravity(_customgravity) end

---
---(non-const self) Sets the dynamic property of a body
---
---@param _dynamic boolean # Dynamic / Static (or Kinematic depending on the "allow moving" property)
---@return orxSTATUS # success / failure
function orxPHYSICS_BODY:setDynamic(_dynamic) end

---
---(non-const self) Sets the fixed rotation property of a physical body
---
---@param _fixed boolean # Fixed / not fixed
---@return orxSTATUS # success / failure
function orxPHYSICS_BODY:setFixedRotation(_fixed) end

---
---(non-const self) Sets linear damping of a physical body
---
---@param _damping number # Linear damping to set
---@return orxSTATUS # success / failure
function orxPHYSICS_BODY:setLinearDamping(_damping) end

---
---(non-const self) Sets the position of a physical body
---
---@param _position orxVECTOR # (const) Position to set
---@return orxSTATUS # success / failure
function orxPHYSICS_BODY:setPosition(_position) end

---
---(non-const self) Sets the rotation of a physical body
---
---@param _rotation number # Rotation (radians) to set
---@return orxSTATUS # success / failure
function orxPHYSICS_BODY:setRotation(_rotation) end

---
---(non-const self) Sets the speed of a physical body
---
---@param _speed orxVECTOR # (const) Speed to set
---@return orxSTATUS # success / failure
function orxPHYSICS_BODY:setSpeed(_speed) end

---
---get the type name of the lorx userdata
---
---@return string # the type name
function orxPHYSICS_BODY:type() end

---@class orxPHYSICS_BODY_JOINT
local orxPHYSICS_BODY_JOINT = {}

---
---get the c memory address of the lorx userdata
---
---@return string # address string
function orxPHYSICS_BODY_JOINT:addr() end

---
---check if the c memory address of this lorx userdata equals to another
---
---@param _u any lorx utype # another lorx userdata
---@return boolean # true or false
function orxPHYSICS_BODY_JOINT:aeq(_u) end

---
---convert to a void*
---
---@return voidptr # the converted void*
function orxPHYSICS_BODY_JOINT:asVoid() end

---
---(non-const self) Deletes a physical body joint
---
function orxPHYSICS_BODY_JOINT:delete() end

---
---(non-const self) Enables a (revolute) body joint motor
---
---@param _enable boolean # Enable / Disable
function orxPHYSICS_BODY_JOINT:enableMotor(_enable) end

---
---Gets the reaction force on the attached body at the joint anchor
---
---@return orxVECTOR # Reaction force in Newtons
function orxPHYSICS_BODY_JOINT:getReactionForce() end

---
---Gets the reaction torque on the attached body
---
---@return number # Reaction torque
function orxPHYSICS_BODY_JOINT:getReactionTorque() end

---
---(non-const self) Sets a (revolute) body joint maximum motor torque
---
---@param _maxtorque number # Maximum motor torque
function orxPHYSICS_BODY_JOINT:setMaxMotorTorque(_maxtorque) end

---
---(non-const self) Sets a (revolute) body joint motor speed
---
---@param _speed number # Speed
function orxPHYSICS_BODY_JOINT:setMotorSpeed(_speed) end

---
---get the type name of the lorx userdata
---
---@return string # the type name
function orxPHYSICS_BODY_JOINT:type() end

---@class orxPHYSICS_BODY_PART
local orxPHYSICS_BODY_PART = {}

---
---get the c memory address of the lorx userdata
---
---@return string # address string
function orxPHYSICS_BODY_PART:addr() end

---
---check if the c memory address of this lorx userdata equals to another
---
---@param _u any lorx utype # another lorx userdata
---@return boolean # true or false
function orxPHYSICS_BODY_PART:aeq(_u) end

---
---convert to a void*
---
---@return voidptr # the converted void*
function orxPHYSICS_BODY_PART:asVoid() end

---
---(non-const self) Deletes a physical body part
---
function orxPHYSICS_BODY_PART:delete() end

---
---Gets check mask of a physical body part
---
---@return integer # Check mask of the physical body part
function orxPHYSICS_BODY_PART:getCheckMask() end

---
---Gets density of a physical body part
---
---@return number # Density
function orxPHYSICS_BODY_PART:getDensity() end

---
---Gets friction of a physical body part
---
---@return number # Friction
function orxPHYSICS_BODY_PART:getFriction() end

---
---Gets restitution of a physical body part
---
---@return number # Restitution
function orxPHYSICS_BODY_PART:getRestitution() end

---
---Gets self flags of a physical body part
---
---@return integer # Self flags of the physical body part
function orxPHYSICS_BODY_PART:getSelfFlags() end

---
---Is point inside part? (Using world coordinates)
---
---@param _position orxVECTOR # (const) Position to test (world coordinates)
---@return boolean # true / false
function orxPHYSICS_BODY_PART:isInside(_position) end

---
---Is a physical body part solid?
---
---@return boolean # true / false
function orxPHYSICS_BODY_PART:isSolid() end

---
---(non-const self) Sets check mask of a physical body part
---
---@param _checkmask integer # Check mask to set
---@return orxSTATUS # success / failure
function orxPHYSICS_BODY_PART:setCheckMask(_checkmask) end

---
---(non-const self) Sets density of a physical body part
---
---@param _density number # Density
---@return orxSTATUS # success / failure
function orxPHYSICS_BODY_PART:setDensity(_density) end

---
---(non-const self) Sets friction of a physical body part
---
---@param _friction number # Friction
---@return orxSTATUS # success / failure
function orxPHYSICS_BODY_PART:setFriction(_friction) end

---
---(non-const self) Sets restitution of a physical body part
---
---@param _restitution number # Restitution
---@return orxSTATUS # success / failure
function orxPHYSICS_BODY_PART:setRestitution(_restitution) end

---
---(non-const self) Sets self flags of a physical body part
---
---@param _selfflags integer # Self flags to set
---@return orxSTATUS # success / failure
function orxPHYSICS_BODY_PART:setSelfFlags(_selfflags) end

---
---(non-const self) Sets a physical body part solid
---
---@param _solid boolean # Solid or sensor?
---@return orxSTATUS # success / failure
function orxPHYSICS_BODY_PART:setSolid(_solid) end

---
---get the type name of the lorx userdata
---
---@return string # the type name
function orxPHYSICS_BODY_PART:type() end

---@class orxRGBA
---@field public r integer # 
---@field public g integer # 
---@field public b integer # 
---@field public a integer # 
---@field public rgba integer # 
local orxRGBA = {}

---
---get the c memory address of the lorx userdata
---
---@return string # address string
function orxRGBA:addr() end

---
---check if the c memory address of this lorx userdata equals to another
---
---@param _u any lorx utype # another lorx userdata
---@return boolean # true or false
function orxRGBA:aeq(_u) end

---
---convert to a void*
---
---@return voidptr # the converted void*
function orxRGBA:asVoid() end

---
---get the type name of the lorx userdata
---
---@return string # the type name
function orxRGBA:type() end

---@class orxSHADER
local orxSHADER = {}

---
---(non-const self) Adds a float parameter definition to a shader (parameters need to be set before compiling the shader code)
---
---@param _name string # Parameter's literal name
---@param _arraysize integer # Parameter's array size, 0 for simple variable
---@param _valuelist number[] # Parameter's float value list
---@return orxSTATUS # success / failure
function orxSHADER:addFloatParam(_name, _arraysize, _valuelist) end

---
---(non-const self) Adds a texture parameter definition to a shader (parameters need to be set before compiling the shader code)
---
---@param _name string # Parameter's literal name
---@param _arraysize integer # Parameter's array size, 0 simple variable
---@param _valuelist orxTEXTURE[] # (const) Parameter's texture value list
---@return orxSTATUS # success / failure
function orxSHADER:addTextureParam(_name, _arraysize, _valuelist) end

---
---(non-const self) Adds a time parameter definition to a shader (parameters need to be set before compiling the shader code)
---
---@param _name string # Parameter's literal name
---@return orxSTATUS # success / failure
function orxSHADER:addTimeParam(_name) end

---
---(non-const self) Adds a vector parameter definition to a shader (parameters need to be set before compiling the shader code)
---
---@param _name string # Parameter's literal name
---@param _arraysize integer # Parameter's array size, 0 for simple variable
---@param _valuelist orxVECTOR[] # Parameter's vector value list
---@return orxSTATUS # success / failure
function orxSHADER:addVectorParam(_name, _arraysize, _valuelist) end

---
---get the c memory address of the lorx userdata
---
---@return string # address string
function orxSHADER:addr() end

---
---check if the c memory address of this lorx userdata equals to another
---
---@param _u any lorx utype # another lorx userdata
---@return boolean # true or false
function orxSHADER:aeq(_u) end

---
---convert to a void*
---
---@return voidptr # the converted void*
function orxSHADER:asVoid() end

---
---(non-const self) Sets shader code & compiles it (parameters need to be set before compiling the shader code)
---
---@param _codelist string[] # List of shader codes to compile (parameters need to be set beforehand), will be processed in order
---@param _size integer # Size of the shader code list
---@return orxSTATUS # success / failure
function orxSHADER:compileCode(_codelist, _size) end

---
---(non-const self) Decreases structure reference count
---
function orxSHADER:decreaseCount() end

---
---(non-const self) Deletes a shader
---
---@return orxSTATUS # success / failure
function orxSHADER:delete() end

---
---(non-const self) Enables/disables a shader
---
---@param _enable boolean # Enable / disable
function orxSHADER:enable(_enable) end

---
---Gets structure tree child
---
---@return orxSTRUCTURE # orxSTRUCTURE
function orxSHADER:getChild() end

---
---Gets structure flags
---
---@return integer # integer (u32)
function orxSHADER:getFlags() end

---
---Gets structure GUID
---
---@return integer # integer (u64)
function orxSHADER:getGUID() end

---
---Gets shader (internal) ID
---
---@return integer # ID
function orxSHADER:getID() end

---
---Gets shader name
---
---@return string # string / empty string
function orxSHADER:getName() end

---
---Gets structure list next
---
---@return orxSTRUCTURE # orxSTRUCTURE
function orxSHADER:getNext() end

---
---Gets structure's owner
---
---@return orxSTRUCTURE # orxSTRUCTURE / nil if not found/alive
function orxSHADER:getOwner() end

---
---Gets structure tree parent
---
---@return orxSTRUCTURE # orxSTRUCTURE
function orxSHADER:getParent() end

---
---Gets structure list previous
---
---@return orxSTRUCTURE # orxSTRUCTURE
function orxSHADER:getPrevious() end

---
---Gets structure reference count
---
---@return integer # integer (u32)
function orxSHADER:getRefCount() end

---
---Gets structure tree sibling
---
---@return orxSTRUCTURE # orxSTRUCTURE
function orxSHADER:getSibling() end

---
---(non-const self) Increases structure reference count
---
function orxSHADER:increaseCount() end

---
---Is shader enabled?
---
---@return boolean # true if enabled, false otherwise
function orxSHADER:isEnabled() end

---
---(non-const self) Sets structure flags
---
---@param _removeflags integer # Flags to remove
function orxSHADER:setFlags(_removeflags) end

---
---Sets the default value for a given float parameter in a shader (parameters need to be added beforehand)
---
---@param _name string # Parameter's literal name
---@param _arraysize integer # Parameter's array size, 0 for simple variable, has to match the size used when declaring the parameter
---@param _valuelist number[] # Parameter's float value list
---@return orxSTATUS # success / failure
function orxSHADER:setFloatParam(_name, _arraysize, _valuelist) end

---
---(non-const self) Sets structure owner
---
---@return orxSTATUS # success / failure
function orxSHADER:setOwner() end

---
---(non-const self) Sets structure tree parent
---
---@return orxSTATUS # success / failure
function orxSHADER:setParent() end

---
---Sets the default value for a given float parameter in a shader (parameters need to be added beforehand)
---
---@param _name string # Parameter's literal name
---@param _arraysize integer # Parameter's array size, 0 for simple variable, has to match the size used when declaring the parameter
---@param _valuelist orxTEXTURE[] # (const) Parameter's texture value list
---@return orxSTATUS # success / failure
function orxSHADER:setTextureParam(_name, _arraysize, _valuelist) end

---
---Sets the default value for a given float parameter in a shader (parameters need to be added beforehand)
---
---@param _name string # Parameter's literal name
---@param _arraysize integer # Parameter's array size, 0 for simple variable, has to match the size used when declaring the parameter
---@param _valuelist orxVECTOR[] # Parameter's vector value list
---@return orxSTATUS # success / failure
function orxSHADER:setVectorParam(_name, _arraysize, _valuelist) end

---
---Starts a shader
---
---@param _owner orxSTRUCTURE # (const) Owner structure (orxOBJECT / orxVIEWPORT / orxNULL)
---@return orxSTATUS # success / failure
function orxSHADER:start(_owner) end

---
---Stops a shader
---
---@return orxSTATUS # success / failure
function orxSHADER:stop() end

---
---Tests all flags against structure ones
---
---@return boolean # true / false
function orxSHADER:testAllFlags() end

---
---Tests flags against structure ones
---
---@return boolean # true / false
function orxSHADER:testFlags() end

---
---get the type name of the lorx userdata
---
---@return string # the type name
function orxSHADER:type() end

---
---(non-const self) Updates structure if update function was registered for the structure type
---
---@param _clockinfo orxCLOCK_INFO # (const) Update associated clock info
---@return orxSTATUS # success / failure
function orxSHADER:update(_clockinfo) end

---@class orxSHADERPOINTER
local orxSHADERPOINTER = {}

---
---(non-const self) Adds a shader
---
---@param _shader orxSHADER # Shader to add
---@return orxSTATUS # success / failure
function orxSHADERPOINTER:addShader(_shader) end

---
---(non-const self) Adds a shader using its config ID
---
---@param _shaderconfigid string # Config ID of the shader to add
---@return orxSTATUS # success / failure
function orxSHADERPOINTER:addShaderFromConfig(_shaderconfigid) end

---
---get the c memory address of the lorx userdata
---
---@return string # address string
function orxSHADERPOINTER:addr() end

---
---check if the c memory address of this lorx userdata equals to another
---
---@param _u any lorx utype # another lorx userdata
---@return boolean # true or false
function orxSHADERPOINTER:aeq(_u) end

---
---convert to a void*
---
---@return voidptr # the converted void*
function orxSHADERPOINTER:asVoid() end

---
---(non-const self) Decreases structure reference count
---
function orxSHADERPOINTER:decreaseCount() end

---
---(non-const self) Deletes an ShaderPointer
---
---@return orxSTATUS # success / failure
function orxSHADERPOINTER:delete() end

---
---(non-const self) Enables/disables an ShaderPointer
---
---@param _enable boolean # Enable / disable
function orxSHADERPOINTER:enable(_enable) end

---
---Gets structure tree child
---
---@return orxSTRUCTURE # orxSTRUCTURE
function orxSHADERPOINTER:getChild() end

---
---Gets structure flags
---
---@return integer # integer (u32)
function orxSHADERPOINTER:getFlags() end

---
---Gets structure GUID
---
---@return integer # integer (u64)
function orxSHADERPOINTER:getGUID() end

---
---Gets structure ID
---
---@return orxSTRUCTURE_ID # orxSTRUCTURE_ID
function orxSHADERPOINTER:getID() end

---
---Gets structure list next
---
---@return orxSTRUCTURE # orxSTRUCTURE
function orxSHADERPOINTER:getNext() end

---
---Gets structure's owner
---
---@return orxSTRUCTURE # orxSTRUCTURE / nil if not found/alive
function orxSHADERPOINTER:getOwner() end

---
---Gets structure tree parent
---
---@return orxSTRUCTURE # orxSTRUCTURE
function orxSHADERPOINTER:getParent() end

---
---Gets structure list previous
---
---@return orxSTRUCTURE # orxSTRUCTURE
function orxSHADERPOINTER:getPrevious() end

---
---Gets structure reference count
---
---@return integer # integer (u32)
function orxSHADERPOINTER:getRefCount() end

---
---Gets a shader
---
---@param _index integer # Index of shader to get
---@return orxSHADER # (const) orxSHADER / nil
function orxSHADERPOINTER:getShader(_index) end

---
---Gets structure tree sibling
---
---@return orxSTRUCTURE # orxSTRUCTURE
function orxSHADERPOINTER:getSibling() end

---
---(non-const self) Increases structure reference count
---
function orxSHADERPOINTER:increaseCount() end

---
---Is ShaderPointer enabled?
---
---@return boolean # true if enabled, false otherwise
function orxSHADERPOINTER:isEnabled() end

---
---(non-const self) Removes a shader
---
---@param _shader orxSHADER # Shader to remove
---@return orxSTATUS # success / failure
function orxSHADERPOINTER:removeShader(_shader) end

---
---(non-const self) Removes a shader using its config ID
---
---@param _shaderconfigid string # Config ID of the shader to remove
---@return orxSTATUS # success / failure
function orxSHADERPOINTER:removeShaderFromConfig(_shaderconfigid) end

---
---(non-const self) Sets structure flags
---
---@param _removeflags integer # Flags to remove
function orxSHADERPOINTER:setFlags(_removeflags) end

---
---(non-const self) Sets structure owner
---
---@return orxSTATUS # success / failure
function orxSHADERPOINTER:setOwner() end

---
---(non-const self) Sets structure tree parent
---
---@return orxSTATUS # success / failure
function orxSHADERPOINTER:setParent() end

---
---Starts a ShaderPointer
---
---@return orxSTATUS # success / failure
function orxSHADERPOINTER:start() end

---
---Stops a ShaderPointer
---
---@return orxSTATUS # success / failure
function orxSHADERPOINTER:stop() end

---
---Tests all flags against structure ones
---
---@return boolean # true / false
function orxSHADERPOINTER:testAllFlags() end

---
---Tests flags against structure ones
---
---@return boolean # true / false
function orxSHADERPOINTER:testFlags() end

---
---get the type name of the lorx userdata
---
---@return string # the type name
function orxSHADERPOINTER:type() end

---
---(non-const self) Updates structure if update function was registered for the structure type
---
---@param _clockinfo orxCLOCK_INFO # (const) Update associated clock info
---@return orxSTATUS # success / failure
function orxSHADERPOINTER:update(_clockinfo) end

---@class orxSOUND
local orxSOUND = {}

---
---(non-const self) Adds a filter to a sound (cascading)
---
---@param _filterdata orxSOUND_FILTER_DATA # (const) Concerned filter data
---@param _usecustomparam boolean # Filter uses custom parameters
---@return orxSTATUS # success / failure
function orxSOUND:addFilter(_filterdata, _usecustomparam) end

---
---(non-const self) Adds a filter to a sound (cascading) from config
---
---@param _filterconfigid string # Config ID of the filter to add
---@return orxSTATUS # success / failure
function orxSOUND:addFilterFromConfig(_filterconfigid) end

---
---get the c memory address of the lorx userdata
---
---@return string # address string
function orxSOUND:addr() end

---
---check if the c memory address of this lorx userdata equals to another
---
---@param _u any lorx utype # another lorx userdata
---@return boolean # true or false
function orxSOUND:aeq(_u) end

---
---convert to a void*
---
---@return voidptr # the converted void*
function orxSOUND:asVoid() end

---
---(non-const self) Decreases structure reference count
---
function orxSOUND:decreaseCount() end

---
---(non-const self) Deletes sound
---
---@return orxSTATUS # success / failure
function orxSOUND:delete() end

---
---Gets sound's bus ID
---
---@return integer # Sound's bus ID
function orxSOUND:getBusID() end

---
---Gets structure tree child
---
---@return orxSTRUCTURE # orxSTRUCTURE
function orxSOUND:getChild() end

---
---Gets sound duration
---
---@return number # number
function orxSOUND:getDuration() end

---
---Gets structure flags
---
---@return integer # integer (u32)
function orxSOUND:getFlags() end

---
---Gets structure GUID
---
---@return integer # integer (u64)
function orxSOUND:getGUID() end

---
---Gets structure ID
---
---@return orxSTRUCTURE_ID # orxSTRUCTURE_ID
function orxSOUND:getID() end

---
---Gets sound config name
---
---@return string # string / empty string
function orxSOUND:getName() end

---
---Gets structure list next
---
---@return orxSTRUCTURE # orxSTRUCTURE
function orxSOUND:getNext() end

---
---Gets structure's owner
---
---@return orxSTRUCTURE # orxSTRUCTURE / nil if not found/alive
function orxSOUND:getOwner() end

---
---Gets a sound panning
---
---@return orxSTATUS # success / failure
---@return number # Sound panning, -1.0f for full left, 0.0f for center, 1.0f for full right
---@return boolean # Left/Right channels are be mixed if true or act like a balance otherwise
function orxSOUND:getPanning() end

---
---Gets structure tree parent
---
---@return orxSTRUCTURE # orxSTRUCTURE
function orxSOUND:getParent() end

---
---Gets sound pitch
---
---@return number # number
function orxSOUND:getPitch() end

---
---Gets sound position
---
---@return orxVECTOR # orxVECTOR / nil
function orxSOUND:getPosition() end

---
---Gets structure list previous
---
---@return orxSTRUCTURE # orxSTRUCTURE
function orxSOUND:getPrevious() end

---
---Gets structure reference count
---
---@return integer # integer (u32)
function orxSOUND:getRefCount() end

---
---Gets structure tree sibling
---
---@return orxSTRUCTURE # orxSTRUCTURE
function orxSOUND:getSibling() end

---
---Gets a sound spatialization information
---
---@return orxSTATUS # success / failure
---@return number # Min distance, inside which the max gain will be used, will be strictly negative if the sound isn't spatialized
---@return number # Max distance, outside which the gain will stop decreasing, will be strictly negative if the sound isn't spatialized
---@return number # Min gain in [0.0f - 1.0f]
---@return number # Max gain in [0.0f - 1.0f]
---@return number # RollOff factor applied when interpolating the gain between inner and outer distances, defaults to 1.0f
function orxSOUND:getSpatialization() end

---
---Gets sound status
---
---@return orxSOUND_STATUS # orxSOUND_STATUS
function orxSOUND:getStatus() end

---
---Gets a sound's time (ie. cursor/play position from beginning)
---
---@return number # Sound's time (cursor/play position), in seconds
function orxSOUND:getTime() end

---
---Gets sound volume
---
---@return number # number
function orxSOUND:getVolume() end

---
---(non-const self) Increases structure reference count
---
function orxSOUND:increaseCount() end

---
---Is sound looping?
---
---@return boolean # true / false
function orxSOUND:isLooping() end

---
---(non-const self) Is a stream (ie. music)?
---
---@return boolean # true / false
function orxSOUND:isStream() end

---
---(non-const self) Links a sample
---
---@param _samplename string # Name of the sample to link (must already be loaded/created)
---@return orxSTATUS # success / failure
function orxSOUND:linkSample(_samplename) end

---
---(non-const self) Loops sound
---
---@param _loop boolean # true / false
---@return orxSTATUS # success / failure
function orxSOUND:loop(_loop) end

---
---(non-const self) Pauses sound
---
---@return orxSTATUS # success / failure
function orxSOUND:pause() end

---
---(non-const self) Plays sound
---
---@return orxSTATUS # success / failure
function orxSOUND:play() end

---
---(non-const self) Removes all filters from a sound
---
---@return orxSTATUS # success / failure
function orxSOUND:removeAllFilters() end

---
---(non-const self) Removes last added filter from a sound
---
---@return orxSTATUS # success / failure
function orxSOUND:removeLastFilter() end

---
---(non-const self) Sets sound's bus ID
---
---@param _busid integer # Bus ID to set
---@return orxSTATUS # success / failure
function orxSOUND:setBusID(_busid) end

---
---(non-const self) Sets structure flags
---
---@param _removeflags integer # Flags to remove
function orxSOUND:setFlags(_removeflags) end

---
---(non-const self) Sets structure owner
---
---@return orxSTATUS # success / failure
function orxSOUND:setOwner() end

---
---(non-const self) Sets a sound panning
---
---@param _panning number # Sound panning, -1.0f for full left, 0.0f for center, 1.0f for full right
---@param _mix boolean # Left/Right channels will be mixed if true or act like a balance otherwise
---@return orxSTATUS # success / failure
function orxSOUND:setPanning(_panning, _mix) end

---
---(non-const self) Sets structure tree parent
---
---@return orxSTATUS # success / failure
function orxSOUND:setParent() end

---
---(non-const self) Sets sound pitch
---
---@param _pitch number # Desired pitch
---@return orxSTATUS # success / failure
function orxSOUND:setPitch(_pitch) end

---
---(non-const self) Sets sound position
---
---@param _position orxVECTOR # (const) Desired position
---@return orxSTATUS # success / failure
function orxSOUND:setPosition(_position) end

---
---(non-const self) Sets a sound spatialization, with gain decreasing between the minimum and maximum distances, when enabled
---
---@param _mindistance number # Min distance, inside which the max gain will be used, strictly negative value to disable spatialization entirely
---@param _maxdistance number # Max distance, outside which the gain will stop decreasing, strictly negative value to disable spatialization entirely
---@param _mingain number # Min gain in [0.0f - 1.0f]
---@param _maxgain number # Max gain in [0.0f - 1.0f]
---@param _rolloff number # RollOff factor applied when interpolating the gain between inner and outer distances, defaults to 1.0f
---@return orxSTATUS # success / failure
function orxSOUND:setSpatialization(_mindistance, _maxdistance, _mingain, _maxgain, _rolloff) end

---
---(non-const self) Sets a sound time (ie. cursor/play position from beginning)
---
---@param _time number # Time, in seconds
---@return orxSTATUS # success / failure
function orxSOUND:setTime(_time) end

---
---(non-const self) Sets sound volume
---
---@param _volume number # Desired volume (0.0 - 1.0)
---@return orxSTATUS # success / failure
function orxSOUND:setVolume(_volume) end

---
---(non-const self) Stops sound
---
---@return orxSTATUS # success / failure
function orxSOUND:stop() end

---
---Tests all flags against structure ones
---
---@return boolean # true / false
function orxSOUND:testAllFlags() end

---
---Tests flags against structure ones
---
---@return boolean # true / false
function orxSOUND:testFlags() end

---
---get the type name of the lorx userdata
---
---@return string # the type name
function orxSOUND:type() end

---
---(non-const self) Unlinks (and deletes if not used anymore) a sample
---
---@return orxSTATUS # success / failure
function orxSOUND:unlinkSample() end

---
---(non-const self) Updates structure if update function was registered for the structure type
---
---@param _clockinfo orxCLOCK_INFO # (const) Update associated clock info
---@return orxSTATUS # success / failure
function orxSOUND:update(_clockinfo) end

---@class orxSOUNDPOINTER
local orxSOUNDPOINTER = {}

---
---(non-const self) Adds a filter to all related sounds (cascading)
---
---@param _filterdata orxSOUND_FILTER_DATA # (const) Concerned filter data
---@param _usecustomparam boolean # Filter uses custom parameters
---@return orxSTATUS # success / failure
function orxSOUNDPOINTER:addFilter(_filterdata, _usecustomparam) end

---
---(non-const self) Adds a filter to all related sounds from config (cascading)
---
---@param _filterconfigid string # Config ID of the filter to add
---@return orxSTATUS # success / failure
function orxSOUNDPOINTER:addFilterFromConfig(_filterconfigid) end

---
---(non-const self) Adds a sound
---
---@param _sound orxSOUND # Sound to add
---@return orxSTATUS # success / failure
function orxSOUNDPOINTER:addSound(_sound) end

---
---(non-const self) Adds a sound using its config ID
---
---@param _soundconfigid string # Config ID of the sound to add
---@return orxSTATUS # success / failure
function orxSOUNDPOINTER:addSoundFromConfig(_soundconfigid) end

---
---get the c memory address of the lorx userdata
---
---@return string # address string
function orxSOUNDPOINTER:addr() end

---
---check if the c memory address of this lorx userdata equals to another
---
---@param _u any lorx utype # another lorx userdata
---@return boolean # true or false
function orxSOUNDPOINTER:aeq(_u) end

---
---convert to a void*
---
---@return voidptr # the converted void*
function orxSOUNDPOINTER:asVoid() end

---
---(non-const self) Decreases structure reference count
---
function orxSOUNDPOINTER:decreaseCount() end

---
---(non-const self) Deletes a SoundPointer
---
---@return orxSTATUS # success / failure
function orxSOUNDPOINTER:delete() end

---
---(non-const self) Enables/disables a SoundPointer
---
---@param _enable boolean # Enable / disable
function orxSOUNDPOINTER:enable(_enable) end

---
---Gets structure tree child
---
---@return orxSTRUCTURE # orxSTRUCTURE
function orxSOUNDPOINTER:getChild() end

---
---Gets how many sounds are currently in use
---
---@return integer # integer (u32)
function orxSOUNDPOINTER:getCount() end

---
---Gets structure flags
---
---@return integer # integer (u32)
function orxSOUNDPOINTER:getFlags() end

---
---Gets structure GUID
---
---@return integer # integer (u64)
function orxSOUNDPOINTER:getGUID() end

---
---Gets structure ID
---
---@return orxSTRUCTURE_ID # orxSTRUCTURE_ID
function orxSOUNDPOINTER:getID() end

---
---Gets last added sound (Do *NOT* destroy it directly before removing it!!!)
---
---@return orxSOUND # orxSOUND / nil
function orxSOUNDPOINTER:getLastAddedSound() end

---
---Gets structure list next
---
---@return orxSTRUCTURE # orxSTRUCTURE
function orxSOUNDPOINTER:getNext() end

---
---Gets structure's owner
---
---@return orxSTRUCTURE # orxSTRUCTURE / nil if not found/alive
function orxSOUNDPOINTER:getOwner() end

---
---Gets structure tree parent
---
---@return orxSTRUCTURE # orxSTRUCTURE
function orxSOUNDPOINTER:getParent() end

---
---Gets structure list previous
---
---@return orxSTRUCTURE # orxSTRUCTURE
function orxSOUNDPOINTER:getPrevious() end

---
---Gets structure reference count
---
---@return integer # integer (u32)
function orxSOUNDPOINTER:getRefCount() end

---
---Gets structure tree sibling
---
---@return orxSTRUCTURE # orxSTRUCTURE
function orxSOUNDPOINTER:getSibling() end

---
---(non-const self) Increases structure reference count
---
function orxSOUNDPOINTER:increaseCount() end

---
---Is SoundPointer enabled?
---
---@return boolean # true if enabled, false otherwise
function orxSOUNDPOINTER:isEnabled() end

---
---(non-const self) Pauses all related sounds
---
---@return orxSTATUS # success / failure
function orxSOUNDPOINTER:pause() end

---
---(non-const self) Plays all related sounds
---
---@return orxSTATUS # success / failure
function orxSOUNDPOINTER:play() end

---
---(non-const self) Removes all filters from all related sounds
---
---@return orxSTATUS # success / failure
function orxSOUNDPOINTER:removeAllFilters() end

---
---(non-const self) Removes all sounds
---
---@return orxSTATUS # success / failure
function orxSOUNDPOINTER:removeAllSounds() end

---
---(non-const self) Removes last added filter from all related sounds
---
---@return orxSTATUS # success / failure
function orxSOUNDPOINTER:removeLastFilter() end

---
---(non-const self) Removes a sound
---
---@param _sound orxSOUND # Sound to remove
---@return orxSTATUS # success / failure
function orxSOUNDPOINTER:removeSound(_sound) end

---
---(non-const self) Removes a sound using its config ID
---
---@param _soundconfigid string # Config ID of the sound to remove
---@return orxSTATUS # success / failure
function orxSOUNDPOINTER:removeSoundFromConfig(_soundconfigid) end

---
---(non-const self) Sets structure flags
---
---@param _removeflags integer # Flags to remove
function orxSOUNDPOINTER:setFlags(_removeflags) end

---
---(non-const self) Sets structure owner
---
---@return orxSTATUS # success / failure
function orxSOUNDPOINTER:setOwner() end

---
---(non-const self) Sets panning of all related sounds
---
---@param _panning number # Sound panning, -1.0f for full left, 0.0f for center, 1.0f for full right
---@param _mix boolean # Left/Right channels will be mixed if true or act like a balance otherwise
---@return orxSTATUS # success / failure
function orxSOUNDPOINTER:setPanning(_panning, _mix) end

---
---(non-const self) Sets structure tree parent
---
---@return orxSTATUS # success / failure
function orxSOUNDPOINTER:setParent() end

---
---(non-const self) Sets pitch of all related sounds
---
---@param _pitch number # Desired pitch
---@return orxSTATUS # success / failure
function orxSOUNDPOINTER:setPitch(_pitch) end

---
---(non-const self) Sets volume of all related sounds
---
---@param _volume number # Desired volume (0.0 - 1.0)
---@return orxSTATUS # success / failure
function orxSOUNDPOINTER:setVolume(_volume) end

---
---(non-const self) Stops all related sounds
---
---@return orxSTATUS # success / failure
function orxSOUNDPOINTER:stop() end

---
---Tests all flags against structure ones
---
---@return boolean # true / false
function orxSOUNDPOINTER:testAllFlags() end

---
---Tests flags against structure ones
---
---@return boolean # true / false
function orxSOUNDPOINTER:testFlags() end

---
---get the type name of the lorx userdata
---
---@return string # the type name
function orxSOUNDPOINTER:type() end

---
---(non-const self) Updates structure if update function was registered for the structure type
---
---@param _clockinfo orxCLOCK_INFO # (const) Update associated clock info
---@return orxSTATUS # success / failure
function orxSOUNDPOINTER:update(_clockinfo) end

---@class orxSOUNDSYSTEM_SAMPLE
local orxSOUNDSYSTEM_SAMPLE = {}

---
---get the c memory address of the lorx userdata
---
---@return string # address string
function orxSOUNDSYSTEM_SAMPLE:addr() end

---
---check if the c memory address of this lorx userdata equals to another
---
---@param _u any lorx utype # another lorx userdata
---@return boolean # true or false
function orxSOUNDSYSTEM_SAMPLE:aeq(_u) end

---
---convert to a void*
---
---@return voidptr # the converted void*
function orxSOUNDSYSTEM_SAMPLE:asVoid() end

---
---(non-const self) Deletes a sound sample
---
---@return orxSTATUS # success / failure
function orxSOUNDSYSTEM_SAMPLE:delete() end

---
---Gets sample info
---
---@return orxSTATUS # success / failure
---@return integer # Number of channels of the sample
---@return integer # Number of frame of the sample (number of "samples" = number of frames * number of channels)
---@return integer # Sampling rate of the sample (ie. number of frames per second)
function orxSOUNDSYSTEM_SAMPLE:getInfo() end

---
---(non-const self) Sets sample data
---
---@param _data number[] # Data to set (samples are expected to be signed/normalized)
---@param _samplenumber integer # Number of samples in the data array
---@return orxSTATUS # success / failure
function orxSOUNDSYSTEM_SAMPLE:setData(_data, _samplenumber) end

---
---get the type name of the lorx userdata
---
---@return string # the type name
function orxSOUNDSYSTEM_SAMPLE:type() end

---@class orxSOUNDSYSTEM_SOUND
local orxSOUNDSYSTEM_SOUND = {}

---
---(non-const self) Adds a filter to a sound (cascading)
---
---@param _filterdata orxSOUND_FILTER_DATA # (const) Concerned filter data
---@param _usecustomparam boolean # Filter uses custom parameters
---@return orxSTATUS # success / failure
function orxSOUNDSYSTEM_SOUND:addFilter(_filterdata, _usecustomparam) end

---
---get the c memory address of the lorx userdata
---
---@return string # address string
function orxSOUNDSYSTEM_SOUND:addr() end

---
---check if the c memory address of this lorx userdata equals to another
---
---@param _u any lorx utype # another lorx userdata
---@return boolean # true or false
function orxSOUNDSYSTEM_SOUND:aeq(_u) end

---
---convert to a void*
---
---@return voidptr # the converted void*
function orxSOUNDSYSTEM_SOUND:asVoid() end

---
---(non-const self) Deletes a sound
---
---@return orxSTATUS # success / failure
function orxSOUNDSYSTEM_SOUND:delete() end

---
---Gets a sound duration
---
---@return number # Sound's duration (seconds)
function orxSOUNDSYSTEM_SOUND:getDuration() end

---
---Gets a sound panning
---
---@return orxSTATUS # success / failure
---@return number # Sound panning, -1.0f for full left, 0.0f for center, 1.0f for full right
---@return boolean # Left/Right channels are be mixed if true or act like a balance otherwise
function orxSOUNDSYSTEM_SOUND:getPanning() end

---
---Gets a sound pitch
---
---@return number # Sound's pitch
function orxSOUNDSYSTEM_SOUND:getPitch() end

---
---Gets a sound position
---
---@return orxVECTOR # Sound's position
function orxSOUNDSYSTEM_SOUND:getPosition() end

---
---Gets a sound spatialization information
---
---@return orxSTATUS # success / failure
---@return number # Min distance, inside which the max gain will be used, will be strictly negative if the sound isn't spatialized
---@return number # Max distance, outside which the gain will stop decreasing, will be strictly negative if the sound isn't spatialized
---@return number # Min gain in [0.0f - 1.0f]
---@return number # Max gain in [0.0f - 1.0f]
---@return number # RollOff factor applied when interpolating the gain between inner and outer distances, defaults to 1.0f
function orxSOUNDSYSTEM_SOUND:getSpatialization() end

---
---Gets a sound status (play/pause/stop)
---
---@return orxSOUNDSYSTEM_STATUS # orxSOUNDSYSTEM_STATUS
function orxSOUNDSYSTEM_SOUND:getStatus() end

---
---Gets a sound's time (ie. cursor/play position from beginning)
---
---@return number # Sound's time (cursor/play position), in seconds
function orxSOUNDSYSTEM_SOUND:getTime() end

---
---Gets a sound volume
---
---@return number # Sound's volume
function orxSOUNDSYSTEM_SOUND:getVolume() end

---
---Is sound looping?
---
---@return boolean # true if looping, false otherwise
function orxSOUNDSYSTEM_SOUND:isLooping() end

---
---(non-const self) Loops a sound
---
---@param _loop boolean # Loop / no loop
---@return orxSTATUS # success / failure
function orxSOUNDSYSTEM_SOUND:loop(_loop) end

---
---(non-const self) Pauses a sound
---
---@return orxSTATUS # success / failure
function orxSOUNDSYSTEM_SOUND:pause() end

---
---(non-const self) Plays a sound
---
---@return orxSTATUS # success / failure
function orxSOUNDSYSTEM_SOUND:play() end

---
---(non-const self) Removes all filters from a sound
---
---@return orxSTATUS # success / failure
function orxSOUNDSYSTEM_SOUND:removeAllFilters() end

---
---(non-const self) Removes last added filter from a sound
---
---@return orxSTATUS # success / failure
function orxSOUNDSYSTEM_SOUND:removeLastFilter() end

---
---(non-const self) Sets a sound's bus
---
---@param _bus orxHANDLE # Concerned bus
---@return orxSTATUS # success / failure
function orxSOUNDSYSTEM_SOUND:setBus(_bus) end

---
---(non-const self) Sets a sound panning
---
---@param _panning number # Sound panning, -1.0f for full left, 0.0f for center, 1.0f for full right
---@param _mix boolean # Left/Right channels will be mixed if true or act like a balance otherwise
---@return orxSTATUS # success / failure
function orxSOUNDSYSTEM_SOUND:setPanning(_panning, _mix) end

---
---(non-const self) Sets a sound pitch
---
---@param _pitch number # Pitch to set
---@return orxSTATUS # success / failure
function orxSOUNDSYSTEM_SOUND:setPitch(_pitch) end

---
---(non-const self) Sets a sound position
---
---@param _position orxVECTOR # (const) Position to set
---@return orxSTATUS # success / failure
function orxSOUNDSYSTEM_SOUND:setPosition(_position) end

---
---(non-const self) Sets a sound spatialization, with gain decreasing between the minimum and maximum distances, when enabled
---
---@param _mindistance number # Min distance, inside which the max gain will be used, strictly negative value to disable spatialization entirely
---@param _maxdistance number # Max distance, outside which the gain will stop decreasing, strictly negative value to disable spatialization entirely
---@param _mingain number # Min gain in [0.0f - 1.0f]
---@param _maxgain number # Max gain in [0.0f - 1.0f]
---@param _rolloff number # RollOff factor applied when interpolating the gain between inner and outer distances, defaults to 1.0f
---@return orxSTATUS # success / failure
function orxSOUNDSYSTEM_SOUND:setSpatialization(_mindistance, _maxdistance, _mingain, _maxgain, _rolloff) end

---
---(non-const self) Sets a sound time (ie. cursor/play position from beginning)
---
---@param _time number # Time, in seconds
---@return orxSTATUS # success / failure
function orxSOUNDSYSTEM_SOUND:setTime(_time) end

---
---(non-const self) Sets a sound volume
---
---@param _volume number # Volume to set [0, 1]
---@return orxSTATUS # success / failure
function orxSOUNDSYSTEM_SOUND:setVolume(_volume) end

---
---(non-const self) Stops a sound
---
---@return orxSTATUS # success / failure
function orxSOUNDSYSTEM_SOUND:stop() end

---
---get the type name of the lorx userdata
---
---@return string # the type name
function orxSOUNDSYSTEM_SOUND:type() end

---@class orxSOUND_FILTER_DATA
---@field public type orxSOUND_FILTER_TYPE # 
---@field public nameid integer # 
---@field public a0 number # 
---@field public a1 number # 
---@field public a2 number # 
---@field public b0 number # 
---@field public b1 number # 
---@field public b2 number # 
---@field public frequency number # 
---@field public order integer # 
---@field public q number # 
---@field public gain number # 
---@field public delay number # 
---@field public decay number # 
local orxSOUND_FILTER_DATA = {}

---
---get the c memory address of the lorx userdata
---
---@return string # address string
function orxSOUND_FILTER_DATA:addr() end

---
---check if the c memory address of this lorx userdata equals to another
---
---@param _u any lorx utype # another lorx userdata
---@return boolean # true or false
function orxSOUND_FILTER_DATA:aeq(_u) end

---
---convert to a void*
---
---@return voidptr # the converted void*
function orxSOUND_FILTER_DATA:asVoid() end

---
---get the type name of the lorx userdata
---
---@return string # the type name
function orxSOUND_FILTER_DATA:type() end

---@class orxSOUND_STREAM_INFO
---@field public name string # 
---@field public samplerate integer # 
---@field public channelnumber integer # 
local orxSOUND_STREAM_INFO = {}

---
---get the c memory address of the lorx userdata
---
---@return string # address string
function orxSOUND_STREAM_INFO:addr() end

---
---check if the c memory address of this lorx userdata equals to another
---
---@param _u any lorx utype # another lorx userdata
---@return boolean # true or false
function orxSOUND_STREAM_INFO:aeq(_u) end

---
---convert to a void*
---
---@return voidptr # the converted void*
function orxSOUND_STREAM_INFO:asVoid() end

---
---get the type name of the lorx userdata
---
---@return string # the type name
function orxSOUND_STREAM_INFO:type() end

---@class orxSOUND_STREAM_PACKET
---@field public samplelistlist number[] # 
---@field public samplenumber integer # 
---@field public timestamp number # 
---@field public time number # 
---@field public id integer # 
---@field public discard boolean # 
---@field public last boolean # 
local orxSOUND_STREAM_PACKET = {}

---
---get the c memory address of the lorx userdata
---
---@return string # address string
function orxSOUND_STREAM_PACKET:addr() end

---
---check if the c memory address of this lorx userdata equals to another
---
---@param _u any lorx utype # another lorx userdata
---@return boolean # true or false
function orxSOUND_STREAM_PACKET:aeq(_u) end

---
---convert to a void*
---
---@return voidptr # the converted void*
function orxSOUND_STREAM_PACKET:asVoid() end

---
---get the type name of the lorx userdata
---
---@return string # the type name
function orxSOUND_STREAM_PACKET:type() end

---@class orxSPAWNER
local orxSPAWNER = {}

---
---get the c memory address of the lorx userdata
---
---@return string # address string
function orxSPAWNER:addr() end

---
---check if the c memory address of this lorx userdata equals to another
---
---@param _u any lorx utype # another lorx userdata
---@return boolean # true or false
function orxSPAWNER:aeq(_u) end

---
---convert to a void*
---
---@return voidptr # the converted void*
function orxSPAWNER:asVoid() end

---
---(non-const self) Decreases structure reference count
---
function orxSPAWNER:decreaseCount() end

---
---(non-const self) Deletes a spawner
---
---@return orxSTATUS # success / failure
function orxSPAWNER:delete() end

---
---(non-const self) Enables/disables a spawner
---
---@param _enable boolean # Enable / disable
function orxSPAWNER:enable(_enable) end

---
---Gets spawner active object count
---
---@return integer # Active object count
function orxSPAWNER:getActiveObjectCount() end

---
---Gets spawner active object limit
---
---@return integer # Active object limit, 0 for unlimited
function orxSPAWNER:getActiveObjectLimit() end

---
---Gets structure tree child
---
---@return orxSTRUCTURE # orxSTRUCTURE
function orxSPAWNER:getChild() end

---
---Gets structure flags
---
---@return integer # integer (u32)
function orxSPAWNER:getFlags() end

---
---Gets spawner frame
---
---@return orxFRAME # orxFRAME
function orxSPAWNER:getFrame() end

---
---Gets structure GUID
---
---@return integer # integer (u64)
function orxSPAWNER:getGUID() end

---
---Gets structure ID
---
---@return orxSTRUCTURE_ID # orxSTRUCTURE_ID
function orxSPAWNER:getID() end

---
---Gets spawner name
---
---@return string # string / empty string
function orxSPAWNER:getName() end

---
---Gets structure list next
---
---@return orxSTRUCTURE # orxSTRUCTURE
function orxSPAWNER:getNext() end

---
---Gets spawner next wave delay
---
---@return number # Delay before next wave is spawned / -1 if not in wave mode
function orxSPAWNER:getNextWaveDelay() end

---
---Gets spawner object speed
---
---@return orxVECTOR # Speed applied to every spawned object / nil if none is applied
function orxSPAWNER:getObjectSpeed() end

---
---Gets structure's owner
---
---@return orxSTRUCTURE # orxSTRUCTURE / nil if not found/alive
function orxSPAWNER:getOwner() end

---
---Gets spawner parent
---
---@return orxSTRUCTURE # Parent (object, spawner, camera or frame) / nil
function orxSPAWNER:getParent() end

---
---Get spawner position
---
---@return orxVECTOR # orxVECTOR / nil
function orxSPAWNER:getPosition() end

---
---Gets structure list previous
---
---@return orxSTRUCTURE # orxSTRUCTURE
function orxSPAWNER:getPrevious() end

---
---Gets structure reference count
---
---@return integer # integer (u32)
function orxSPAWNER:getRefCount() end

---
---Get spawner rotation
---
---@return number # number (radians)
function orxSPAWNER:getRotation() end

---
---Get spawner scale
---
---@return orxVECTOR # Scale vector
function orxSPAWNER:getScale() end

---
---Gets structure tree sibling
---
---@return orxSTRUCTURE # orxSTRUCTURE
function orxSPAWNER:getSibling() end

---
---Gets spawner total object count
---
---@return integer # Total object count
function orxSPAWNER:getTotalObjectCount() end

---
---Gets spawner total object limit
---
---@return integer # Total object limit, 0 for unlimited
function orxSPAWNER:getTotalObjectLimit() end

---
---Gets spawner wave delay
---
---@return number # Delay between two waves / -1 if not in wave mode
function orxSPAWNER:getWaveDelay() end

---
---Gets spawner wave size
---
---@return integer # Number of objects spawned in a wave
function orxSPAWNER:getWaveSize() end

---
---Get spawner world position
---
---@return orxVECTOR # orxVECTOR / nil
function orxSPAWNER:getWorldPosition() end

---
---Get spawner world rotation
---
---@return number # number (radians)
function orxSPAWNER:getWorldRotation() end

---
---Gets spawner world scale
---
---@return orxVECTOR # success / failure
function orxSPAWNER:getWorldScale() end

---
---(non-const self) Increases structure reference count
---
function orxSPAWNER:increaseCount() end

---
---Is spawner enabled?
---
---@return boolean # true if enabled, false otherwise
function orxSPAWNER:isEnabled() end

---
---(non-const self) Resets (and disables) a spawner
---
function orxSPAWNER:reset() end

---
---(non-const self) Sets spawner active object limit
---
---@param _activeobjectlimit integer # Active object limit, 0 for unlimited
---@return orxSTATUS # success / failure
function orxSPAWNER:setActiveObjectLimit(_activeobjectlimit) end

---
---(non-const self) Sets structure flags
---
---@param _removeflags integer # Flags to remove
function orxSPAWNER:setFlags(_removeflags) end

---
---(non-const self) Sets spawner next wave delay (without affecting the normal wave delay)
---
---@param _wavedelay number # Delay before next wave / -1 for the current full wave delay
---@return orxSTATUS # success / failure
function orxSPAWNER:setNextWaveDelay(_wavedelay) end

---
---(non-const self) Sets spawner object speed
---
---@param _objectspeed orxVECTOR # (const) Speed to apply to every spawned object / nil to not apply any speed
---@return orxSTATUS # success / failure
function orxSPAWNER:setObjectSpeed(_objectspeed) end

---
---(non-const self) Sets structure owner
---
---@return orxSTATUS # success / failure
function orxSPAWNER:setOwner() end

---
---(non-const self) Sets spawner parent
---
---@param _parent voidptr # Parent structure to set (object, spawner, camera or frame) / nil
---@return orxSTATUS # orsSTATUS_SUCCESS / failure
function orxSPAWNER:setParent(_parent) end

---
---(non-const self) Sets spawner position
---
---@param _position orxVECTOR # (const) Spawner position
---@return orxSTATUS # success / failure
function orxSPAWNER:setPosition(_position) end

---
---(non-const self) Sets spawner rotation
---
---@param _rotation number # Spawner rotation (radians)
---@return orxSTATUS # success / failure
function orxSPAWNER:setRotation(_rotation) end

---
---(non-const self) Sets spawner scale
---
---@param _scale orxVECTOR # (const) Spawner scale vector
---@return orxSTATUS # success / failure
function orxSPAWNER:setScale(_scale) end

---
---(non-const self) Sets spawner total object limit
---
---@param _totalobjectlimit integer # Total object limit, 0 for unlimited
---@return orxSTATUS # success / failure
function orxSPAWNER:setTotalObjectLimit(_totalobjectlimit) end

---
---(non-const self) Sets spawner wave delay
---
---@param _wavedelay number # Delay between two waves / -1 for deactivating wave mode
---@return orxSTATUS # success / failure
function orxSPAWNER:setWaveDelay(_wavedelay) end

---
---(non-const self) Sets spawner wave size
---
---@param _wavesize integer # Number of objects to spawn in a wave / 0 for deactivating wave mode
---@return orxSTATUS # success / failure
function orxSPAWNER:setWaveSize(_wavesize) end

---
---(non-const self) Spawns items
---
---@param _number integer # Number of items to spawn, if orxU32_UNDEFINED, the spawner's wave size will be used instead
---@return integer # Number of spawned items
function orxSPAWNER:spawn(_number) end

---
---Tests all flags against structure ones
---
---@return boolean # true / false
function orxSPAWNER:testAllFlags() end

---
---Tests flags against structure ones
---
---@return boolean # true / false
function orxSPAWNER:testFlags() end

---
---get the type name of the lorx userdata
---
---@return string # the type name
function orxSPAWNER:type() end

---
---(non-const self) Updates structure if update function was registered for the structure type
---
---@param _clockinfo orxCLOCK_INFO # (const) Update associated clock info
---@return orxSTATUS # success / failure
function orxSPAWNER:update(_clockinfo) end

---@class orxSTRUCTURE
local orxSTRUCTURE = {}

---
---get the c memory address of the lorx userdata
---
---@return string # address string
function orxSTRUCTURE:addr() end

---
---check if the c memory address of this lorx userdata equals to another
---
---@param _u any lorx utype # another lorx userdata
---@return boolean # true or false
function orxSTRUCTURE:aeq(_u) end

---
---convert to a void*
---
---@return voidptr # the converted void*
function orxSTRUCTURE:asVoid() end

---
---Convert the orxSTRUCTURE to an orxANIM (pointer cast)
---
---@return orxANIM # The converted orxANIM or nil
function orxSTRUCTURE:toAnim() end

---
---Convert the orxSTRUCTURE to an orxANIM# (pointer cast)
---
---@return orxANIM # (const) The converted orxANIM or nil
function orxSTRUCTURE:toAnimConst() end

---
---Convert the orxSTRUCTURE to an orxANIMPOINTER (pointer cast)
---
---@return orxANIMPOINTER # The converted orxANIMPOINTER or nil
function orxSTRUCTURE:toAnimPointer() end

---
---Convert the orxSTRUCTURE to an orxANIMPOINTER# (pointer cast)
---
---@return orxANIMPOINTER # (const) The converted orxANIMPOINTER or nil
function orxSTRUCTURE:toAnimPointerConst() end

---
---Convert the orxSTRUCTURE to an orxANIMSET (pointer cast)
---
---@return orxANIMSET # The converted orxANIMSET or nil
function orxSTRUCTURE:toAnimSet() end

---
---Convert the orxSTRUCTURE to an orxANIMSET# (pointer cast)
---
---@return orxANIMSET # (const) The converted orxANIMSET or nil
function orxSTRUCTURE:toAnimSetConst() end

---
---Convert the orxSTRUCTURE to an orxBODY (pointer cast)
---
---@return orxBODY # The converted orxBODY or nil
function orxSTRUCTURE:toBody() end

---
---Convert the orxSTRUCTURE to an orxBODY# (pointer cast)
---
---@return orxBODY # (const) The converted orxBODY or nil
function orxSTRUCTURE:toBodyConst() end

---
---Convert the orxSTRUCTURE to an orxCAMERA (pointer cast)
---
---@return orxCAMERA # The converted orxCAMERA or nil
function orxSTRUCTURE:toCamera() end

---
---Convert the orxSTRUCTURE to an orxCAMERA# (pointer cast)
---
---@return orxCAMERA # (const) The converted orxCAMERA or nil
function orxSTRUCTURE:toCameraConst() end

---
---Convert the orxSTRUCTURE to an orxCLOCK (pointer cast)
---
---@return orxCLOCK # The converted orxCLOCK or nil
function orxSTRUCTURE:toClock() end

---
---Convert the orxSTRUCTURE to an orxCLOCK# (pointer cast)
---
---@return orxCLOCK # (const) The converted orxCLOCK or nil
function orxSTRUCTURE:toClockConst() end

---
---Convert the orxSTRUCTURE to an orxFX (pointer cast)
---
---@return orxFX # The converted orxFX or nil
function orxSTRUCTURE:toFX() end

---
---Convert the orxSTRUCTURE to an orxFX# (pointer cast)
---
---@return orxFX # (const) The converted orxFX or nil
function orxSTRUCTURE:toFXConst() end

---
---Convert the orxSTRUCTURE to an orxFXPOINTER (pointer cast)
---
---@return orxFXPOINTER # The converted orxFXPOINTER or nil
function orxSTRUCTURE:toFXPointer() end

---
---Convert the orxSTRUCTURE to an orxFXPOINTER# (pointer cast)
---
---@return orxFXPOINTER # (const) The converted orxFXPOINTER or nil
function orxSTRUCTURE:toFXPointerConst() end

---
---Convert the orxSTRUCTURE to an orxFONT (pointer cast)
---
---@return orxFONT # The converted orxFONT or nil
function orxSTRUCTURE:toFont() end

---
---Convert the orxSTRUCTURE to an orxFONT# (pointer cast)
---
---@return orxFONT # (const) The converted orxFONT or nil
function orxSTRUCTURE:toFontConst() end

---
---Convert the orxSTRUCTURE to an orxFRAME (pointer cast)
---
---@return orxFRAME # The converted orxFRAME or nil
function orxSTRUCTURE:toFrame() end

---
---Convert the orxSTRUCTURE to an orxFRAME# (pointer cast)
---
---@return orxFRAME # (const) The converted orxFRAME or nil
function orxSTRUCTURE:toFrameConst() end

---
---Convert the orxSTRUCTURE to an orxGRAPHIC (pointer cast)
---
---@return orxGRAPHIC # The converted orxGRAPHIC or nil
function orxSTRUCTURE:toGraphic() end

---
---Convert the orxSTRUCTURE to an orxGRAPHIC# (pointer cast)
---
---@return orxGRAPHIC # (const) The converted orxGRAPHIC or nil
function orxSTRUCTURE:toGraphicConst() end

---
---Convert the orxSTRUCTURE to an orxOBJECT (pointer cast)
---
---@return orxOBJECT # The converted orxOBJECT or nil
function orxSTRUCTURE:toObject() end

---
---Convert the orxSTRUCTURE to an orxOBJECT# (pointer cast)
---
---@return orxOBJECT # (const) The converted orxOBJECT or nil
function orxSTRUCTURE:toObjectConst() end

---
---Convert the orxSTRUCTURE to an orxSHADER (pointer cast)
---
---@return orxSHADER # The converted orxSHADER or nil
function orxSTRUCTURE:toShader() end

---
---Convert the orxSTRUCTURE to an orxSHADER# (pointer cast)
---
---@return orxSHADER # (const) The converted orxSHADER or nil
function orxSTRUCTURE:toShaderConst() end

---
---Convert the orxSTRUCTURE to an orxSHADERPOINTER (pointer cast)
---
---@return orxSHADERPOINTER # The converted orxSHADERPOINTER or nil
function orxSTRUCTURE:toShaderPointer() end

---
---Convert the orxSTRUCTURE to an orxSHADERPOINTER# (pointer cast)
---
---@return orxSHADERPOINTER # (const) The converted orxSHADERPOINTER or nil
function orxSTRUCTURE:toShaderPointerConst() end

---
---Convert the orxSTRUCTURE to an orxSOUND (pointer cast)
---
---@return orxSOUND # The converted orxSOUND or nil
function orxSTRUCTURE:toSound() end

---
---Convert the orxSTRUCTURE to an orxSOUND# (pointer cast)
---
---@return orxSOUND # (const) The converted orxSOUND or nil
function orxSTRUCTURE:toSoundConst() end

---
---Convert the orxSTRUCTURE to an orxSOUNDPOINTER (pointer cast)
---
---@return orxSOUNDPOINTER # The converted orxSOUNDPOINTER or nil
function orxSTRUCTURE:toSoundPointer() end

---
---Convert the orxSTRUCTURE to an orxSOUNDPOINTER# (pointer cast)
---
---@return orxSOUNDPOINTER # (const) The converted orxSOUNDPOINTER or nil
function orxSTRUCTURE:toSoundPointerConst() end

---
---Convert the orxSTRUCTURE to an orxSPAWNER (pointer cast)
---
---@return orxSPAWNER # The converted orxSPAWNER or nil
function orxSTRUCTURE:toSpawner() end

---
---Convert the orxSTRUCTURE to an orxSPAWNER# (pointer cast)
---
---@return orxSPAWNER # (const) The converted orxSPAWNER or nil
function orxSTRUCTURE:toSpawnerConst() end

---
---Convert the orxSTRUCTURE to an orxTEXT (pointer cast)
---
---@return orxTEXT # The converted orxTEXT or nil
function orxSTRUCTURE:toText() end

---
---Convert the orxSTRUCTURE to an orxTEXT# (pointer cast)
---
---@return orxTEXT # (const) The converted orxTEXT or nil
function orxSTRUCTURE:toTextConst() end

---
---Convert the orxSTRUCTURE to an orxTEXTURE (pointer cast)
---
---@return orxTEXTURE # The converted orxTEXTURE or nil
function orxSTRUCTURE:toTexture() end

---
---Convert the orxSTRUCTURE to an orxTEXTURE# (pointer cast)
---
---@return orxTEXTURE # (const) The converted orxTEXTURE or nil
function orxSTRUCTURE:toTextureConst() end

---
---Convert the orxSTRUCTURE to an orxTIMELINE (pointer cast)
---
---@return orxTIMELINE # The converted orxTIMELINE or nil
function orxSTRUCTURE:toTimeline() end

---
---Convert the orxSTRUCTURE to an orxTIMELINE# (pointer cast)
---
---@return orxTIMELINE # (const) The converted orxTIMELINE or nil
function orxSTRUCTURE:toTimelineConst() end

---
---Convert the orxSTRUCTURE to an orxVIEWPORT (pointer cast)
---
---@return orxVIEWPORT # The converted orxVIEWPORT or nil
function orxSTRUCTURE:toViewport() end

---
---Convert the orxSTRUCTURE to an orxVIEWPORT# (pointer cast)
---
---@return orxVIEWPORT # (const) The converted orxVIEWPORT or nil
function orxSTRUCTURE:toViewportConst() end

---
---get the type name of the lorx userdata
---
---@return string # the type name
function orxSTRUCTURE:type() end

---@class orxTEXT
local orxTEXT = {}

---
---get the c memory address of the lorx userdata
---
---@return string # address string
function orxTEXT:addr() end

---
---check if the c memory address of this lorx userdata equals to another
---
---@param _u any lorx utype # another lorx userdata
---@return boolean # true or false
function orxTEXT:aeq(_u) end

---
---convert to a void*
---
---@return voidptr # the converted void*
function orxTEXT:asVoid() end

---
---(non-const self) Decreases structure reference count
---
function orxTEXT:decreaseCount() end

---
---(non-const self) Deletes a text
---
---@return orxSTATUS # success / failure
function orxTEXT:delete() end

---
---Gets structure tree child
---
---@return orxSTRUCTURE # orxSTRUCTURE
function orxTEXT:getChild() end

---
---Gets structure flags
---
---@return integer # integer (u32)
function orxTEXT:getFlags() end

---
---Gets text font
---
---@return orxFONT # Text font / nil
function orxTEXT:getFont() end

---
---Gets structure GUID
---
---@return integer # integer (u64)
function orxTEXT:getGUID() end

---
---Gets structure ID
---
---@return orxSTRUCTURE_ID # orxSTRUCTURE_ID
function orxTEXT:getID() end

---
---Gets text's line count
---
---@return integer # integer (u32)
function orxTEXT:getLineCount() end

---
---Gets text's line size
---
---@param _line integer # Line index
---@return orxSTATUS # success / failure
---@return number # Line's width
---@return number # Line's height
function orxTEXT:getLineSize(_line) end

---
---Gets text name
---
---@return string # Text name / nil
function orxTEXT:getName() end

---
---Gets structure list next
---
---@return orxSTRUCTURE # orxSTRUCTURE
function orxTEXT:getNext() end

---
---Gets structure's owner
---
---@return orxSTRUCTURE # orxSTRUCTURE / nil if not found/alive
function orxTEXT:getOwner() end

---
---Gets structure tree parent
---
---@return orxSTRUCTURE # orxSTRUCTURE
function orxTEXT:getParent() end

---
---Gets structure list previous
---
---@return orxSTRUCTURE # orxSTRUCTURE
function orxTEXT:getPrevious() end

---
---Gets structure reference count
---
---@return integer # integer (u32)
function orxTEXT:getRefCount() end

---
---Gets structure tree sibling
---
---@return orxSTRUCTURE # orxSTRUCTURE
function orxTEXT:getSibling() end

---
---Gets text size
---
---@return orxSTATUS # success / failure
---@return number # Text's width
---@return number # Text's height
function orxTEXT:getSize() end

---
---Gets text string
---
---@return string # Text string / empty string
function orxTEXT:getString() end

---
---(non-const self) Increases structure reference count
---
function orxTEXT:increaseCount() end

---
---Is text's size fixed? (ie. manually constrained with orxText_SetSize())
---
---@return boolean # true / false
function orxTEXT:isFixedSize() end

---
---(non-const self) Sets structure flags
---
---@param _removeflags integer # Flags to remove
function orxTEXT:setFlags(_removeflags) end

---
---(non-const self) Sets text font
---
---@param _font orxFONT # Font / nil to use default
---@return orxSTATUS # success / failure
function orxTEXT:setFont(_font) end

---
---(non-const self) Sets structure owner
---
---@return orxSTATUS # success / failure
function orxTEXT:setOwner() end

---
---(non-const self) Sets structure tree parent
---
---@return orxSTATUS # success / failure
function orxTEXT:setParent() end

---
---(non-const self) Sets text's size, will lead to reformatting if text doesn't fit (pass width = -1.0f to restore text's original size, ie. unconstrained)
---
---@param _width number # Max width for the text, remove any size constraint if negative
---@param _height number # Max height for the text, ignored if negative (ie. unconstrained height)
---@return orxSTATUS # success / failure
---@return string # Text that wouldn't fit inside the box if height is provided, empty string if no extra, nil to ignore
function orxTEXT:setSize(_width, _height) end

---
---(non-const self) Sets text string
---
---@param _string string # String to contain
---@return orxSTATUS # success / failure
function orxTEXT:setString(_string) end

---
---Tests all flags against structure ones
---
---@return boolean # true / false
function orxTEXT:testAllFlags() end

---
---Tests flags against structure ones
---
---@return boolean # true / false
function orxTEXT:testFlags() end

---
---get the type name of the lorx userdata
---
---@return string # the type name
function orxTEXT:type() end

---
---(non-const self) Updates structure if update function was registered for the structure type
---
---@param _clockinfo orxCLOCK_INFO # (const) Update associated clock info
---@return orxSTATUS # success / failure
function orxTEXT:update(_clockinfo) end

---@class orxTEXTURE
local orxTEXTURE = {}

---
---get the c memory address of the lorx userdata
---
---@return string # address string
function orxTEXTURE:addr() end

---
---check if the c memory address of this lorx userdata equals to another
---
---@param _u any lorx utype # another lorx userdata
---@return boolean # true or false
function orxTEXTURE:aeq(_u) end

---
---convert to a void*
---
---@return voidptr # the converted void*
function orxTEXTURE:asVoid() end

---
---(non-const self) Decreases structure reference count
---
function orxTEXTURE:decreaseCount() end

---
---(non-const self) Deletes a texture (and its referenced bitmap)
---
---@return orxSTATUS # success / failure
function orxTEXTURE:delete() end

---
---Gets texture bitmap
---
---@return orxBITMAP # orxBITMAP / nil
function orxTEXTURE:getBitmap() end

---
---Gets structure tree child
---
---@return orxSTRUCTURE # orxSTRUCTURE
function orxTEXTURE:getChild() end

---
---Gets structure flags
---
---@return integer # integer (u32)
function orxTEXTURE:getFlags() end

---
---Gets structure GUID
---
---@return integer # integer (u64)
function orxTEXTURE:getGUID() end

---
---Gets structure ID
---
---@return orxSTRUCTURE_ID # orxSTRUCTURE_ID
function orxTEXTURE:getID() end

---
---Gets texture name
---
---@return string # Texture name / empty string
function orxTEXTURE:getName() end

---
---Gets structure list next
---
---@return orxSTRUCTURE # orxSTRUCTURE
function orxTEXTURE:getNext() end

---
---Gets structure's owner
---
---@return orxSTRUCTURE # orxSTRUCTURE / nil if not found/alive
function orxTEXTURE:getOwner() end

---
---Gets structure tree parent
---
---@return orxSTRUCTURE # orxSTRUCTURE
function orxTEXTURE:getParent() end

---
---Gets structure list previous
---
---@return orxSTRUCTURE # orxSTRUCTURE
function orxTEXTURE:getPrevious() end

---
---Gets structure reference count
---
---@return integer # integer (u32)
function orxTEXTURE:getRefCount() end

---
---Gets structure tree sibling
---
---@return orxSTRUCTURE # orxSTRUCTURE
function orxTEXTURE:getSibling() end

---
---Gets texture size
---
---@return orxSTATUS # success / failure
---@return number # Texture's width
---@return number # Texture's height
function orxTEXTURE:getSize() end

---
---(non-const self) Increases structure reference count
---
function orxTEXTURE:increaseCount() end

---
---(non-const self) Links a bitmap
---
---@param _bitmap orxBITMAP # (const) Bitmap to link
---@param _dataname string # Name associated with the bitmap (usually filename)
---@param _transferownership boolean # If set to true, the texture will become the bitmap's owner and will have it deleted upon its own deletion
---@return orxSTATUS # success / failure
function orxTEXTURE:linkBitmap(_bitmap, _dataname, _transferownership) end

---
---(non-const self) Sets structure flags
---
---@param _removeflags integer # Flags to remove
function orxTEXTURE:setFlags(_removeflags) end

---
---(non-const self) Sets structure owner
---
---@return orxSTATUS # success / failure
function orxTEXTURE:setOwner() end

---
---(non-const self) Sets structure tree parent
---
---@return orxSTATUS # success / failure
function orxTEXTURE:setParent() end

---
---Tests all flags against structure ones
---
---@return boolean # true / false
function orxTEXTURE:testAllFlags() end

---
---Tests flags against structure ones
---
---@return boolean # true / false
function orxTEXTURE:testFlags() end

---
---get the type name of the lorx userdata
---
---@return string # the type name
function orxTEXTURE:type() end

---
---(non-const self) Unlinks (and deletes if not used anymore) a bitmap
---
---@return orxSTATUS # success / failure
function orxTEXTURE:unlinkBitmap() end

---
---(non-const self) Updates structure if update function was registered for the structure type
---
---@param _clockinfo orxCLOCK_INFO # (const) Update associated clock info
---@return orxSTATUS # success / failure
function orxTEXTURE:update(_clockinfo) end

---@class orxTHREAD_SEMAPHORE
local orxTHREAD_SEMAPHORE = {}

---
---get the c memory address of the lorx userdata
---
---@return string # address string
function orxTHREAD_SEMAPHORE:addr() end

---
---check if the c memory address of this lorx userdata equals to another
---
---@param _u any lorx utype # another lorx userdata
---@return boolean # true or false
function orxTHREAD_SEMAPHORE:aeq(_u) end

---
---convert to a void*
---
---@return voidptr # the converted void*
function orxTHREAD_SEMAPHORE:asVoid() end

---
---(non-const self) Deletes a semaphore
---
---@return orxSTATUS # success / failure
function orxTHREAD_SEMAPHORE:delete() end

---
---(non-const self) Signals a semaphore
---
---@return orxSTATUS # success / failure
function orxTHREAD_SEMAPHORE:signal() end

---
---get the type name of the lorx userdata
---
---@return string # the type name
function orxTHREAD_SEMAPHORE:type() end

---
---(non-const self) Waits for a semaphore
---
---@return orxSTATUS # success / failure
function orxTHREAD_SEMAPHORE:wait() end

---@class orxTIMELINE
local orxTIMELINE = {}

---
---(non-const self) Adds a track to a TimeLine from config
---
---@param _trackid string # Config ID
---@return orxSTATUS # 
function orxTIMELINE:addTrackFromConfig(_trackid) end

---
---get the c memory address of the lorx userdata
---
---@return string # address string
function orxTIMELINE:addr() end

---
---check if the c memory address of this lorx userdata equals to another
---
---@param _u any lorx utype # another lorx userdata
---@return boolean # true or false
function orxTIMELINE:aeq(_u) end

---
---convert to a void*
---
---@return voidptr # the converted void*
function orxTIMELINE:asVoid() end

---
---(non-const self) Decreases structure reference count
---
function orxTIMELINE:decreaseCount() end

---
---(non-const self) Deletes a TimeLine
---
---@return orxSTATUS # success / failure
function orxTIMELINE:delete() end

---
---(non-const self) Enables/disables a TimeLine
---
---@param _enable boolean # Enable / disable
function orxTIMELINE:enable(_enable) end

---
---Gets structure tree child
---
---@return orxSTRUCTURE # orxSTRUCTURE
function orxTIMELINE:getChild() end

---
---Gets how many tracks are currently in use
---
---@return integer # integer (u32)
function orxTIMELINE:getCount() end

---
---Gets structure flags
---
---@return integer # integer (u32)
function orxTIMELINE:getFlags() end

---
---Gets structure GUID
---
---@return integer # integer (u64)
function orxTIMELINE:getGUID() end

---
---Gets structure ID
---
---@return orxSTRUCTURE_ID # orxSTRUCTURE_ID
function orxTIMELINE:getID() end

---
---Gets structure list next
---
---@return orxSTRUCTURE # orxSTRUCTURE
function orxTIMELINE:getNext() end

---
---Gets structure's owner
---
---@return orxSTRUCTURE # orxSTRUCTURE / nil if not found/alive
function orxTIMELINE:getOwner() end

---
---Gets structure tree parent
---
---@return orxSTRUCTURE # orxSTRUCTURE
function orxTIMELINE:getParent() end

---
---Gets structure list previous
---
---@return orxSTRUCTURE # orxSTRUCTURE
function orxTIMELINE:getPrevious() end

---
---Gets structure reference count
---
---@return integer # integer (u32)
function orxTIMELINE:getRefCount() end

---
---Gets structure tree sibling
---
---@return orxSTRUCTURE # orxSTRUCTURE
function orxTIMELINE:getSibling() end

---
---(non-const self) Increases structure reference count
---
function orxTIMELINE:increaseCount() end

---
---Is TimeLine enabled?
---
---@return boolean # true if enabled, false otherwise
function orxTIMELINE:isEnabled() end

---
---(non-const self) Removes a track using its config ID
---
---@param _trackid string # Config ID of the track to remove
---@return orxSTATUS # success / failure
function orxTIMELINE:removeTrackFromConfig(_trackid) end

---
---(non-const self) Sets structure flags
---
---@param _removeflags integer # Flags to remove
function orxTIMELINE:setFlags(_removeflags) end

---
---(non-const self) Sets structure owner
---
---@return orxSTATUS # success / failure
function orxTIMELINE:setOwner() end

---
---(non-const self) Sets structure tree parent
---
---@return orxSTATUS # success / failure
function orxTIMELINE:setParent() end

---
---Tests all flags against structure ones
---
---@return boolean # true / false
function orxTIMELINE:testAllFlags() end

---
---Tests flags against structure ones
---
---@return boolean # true / false
function orxTIMELINE:testFlags() end

---
---get the type name of the lorx userdata
---
---@return string # the type name
function orxTIMELINE:type() end

---
---(non-const self) Updates structure if update function was registered for the structure type
---
---@param _clockinfo orxCLOCK_INFO # (const) Update associated clock info
---@return orxSTATUS # success / failure
function orxTIMELINE:update(_clockinfo) end

---@class orxVECTOR
---@field public x number # 
---@field public rho number # 
---@field public r number # 
---@field public h number # 
---@field public y number # 
---@field public theta number # 
---@field public g number # 
---@field public s number # 
---@field public z number # 
---@field public phi number # 
---@field public b number # 
---@field public l number # 
---@field public v number # 
local orxVECTOR = {}

---
---Rotates a 2D vector (along Z-axis)
---
---@param _angle number # Angle of rotation (radians)
---@return orxVECTOR # Rotated vector
function orxVECTOR:_2DRotate(_angle) end

---
---get the c memory address of the lorx userdata
---
---@return string # address string
function orxVECTOR:addr() end

---
---check if the c memory address of this lorx userdata equals to another
---
---@param _u any lorx utype # another lorx userdata
---@return boolean # true or false
function orxVECTOR:aeq(_u) end

---
---convert to a void*
---
---@return voidptr # the converted void*
function orxVECTOR:asVoid() end

---
---Computes an interpolated point on a cubic Bezier curve segment for a given parameter
---
---@param _point2 orxVECTOR # (const) First control point for this curve segment
---@param _point3 orxVECTOR # (const) Second control point for this curve segment
---@param _point4 orxVECTOR # (const) Last point for this curve segment
---@param _t number # Interpolation parameter in [0.0, 1.0]
---@return orxVECTOR # Interpolated point on the cubic Bezier curve segment
function orxVECTOR:bezier(_point2, _point3, _point4, _t) end

---
---Computes an interpolated point on a Catmull-Rom curve segment for a given parameter
---
---@param _point2 orxVECTOR # (const) Second control point for this curve segment
---@param _point3 orxVECTOR # (const) Third control point for this curve segment
---@param _point4 orxVECTOR # (const) Fourth control point for this curve segment
---@param _t number # Interpolation parameter in [0.0, 1.0]
---@return orxVECTOR # Interpolated point on the Catmull-Rom curve segment
function orxVECTOR:catmullRom(_point2, _point3, _point4, _t) end

---
---Clamps a vector between two others
---
---@param _min orxVECTOR # (const) Minimum boundary
---@param _max orxVECTOR # (const) Maximum boundary
---@return orxVECTOR # Resulting vector CLAMP(Op, MIN, MAX)
function orxVECTOR:clamp(_min, _max) end

---
---Copies a vector onto another one
---
---@return orxVECTOR # Destination vector
function orxVECTOR:copy() end

---
---Gets floored vector and stores the result in another one
---
---@return orxVECTOR # Resulting vector Floor(Op)
function orxVECTOR:floor() end

---
---Transforms a cartesian vector into a spherical one
---
---@return orxVECTOR # Transformed vector
function orxVECTOR:fromCartesianToSpherical() end

---
---Transforms a spherical vector into a cartesian one
---
---@return orxVECTOR # Transformed vector
function orxVECTOR:fromSphericalToCartesian() end

---
---Gets vector size
---
---@return number # Vector's size
function orxVECTOR:getSize() end

---
---Gets vector squared size
---
---@return number # Vector's squared size
function orxVECTOR:getSquareSize() end

---
---Is vector null?
---
---@return boolean # true if vector's null, false otherwise
function orxVECTOR:isNull() end

---
---Negates a vector and stores result in another one
---
---@return orxVECTOR # Resulting vector (-Op)
function orxVECTOR:neg() end

---
---Normalizes a vector
---
---@return orxVECTOR # Normalized vector
function orxVECTOR:normalize() end

---
---Gets reciprocal (1.0 /) vector and stores the result in another one
---
---@return orxVECTOR # Resulting vector (1 / Op)
function orxVECTOR:rec() end

---
---Gets rounded vector and stores the result in another one
---
---@return orxVECTOR # Resulting vector Round(Op)
function orxVECTOR:round() end

---
---(non-const self) Sets vector XYZ values (also work for other coordinate system)
---
---@param _x number # First coordinate value
---@param _y number # Second coordinate value
---@param _z number # Third coordinate value
---@return orxVECTOR # Vector
function orxVECTOR:set(_x, _y, _z) end

---
---(non-const self) Sets all the vector coordinates with the given value
---
---@param _value number # Value to set
---@return orxVECTOR # Vector
function orxVECTOR:setAll(_value) end

---
---get the type name of the lorx userdata
---
---@return string # the type name
function orxVECTOR:type() end

---@class orxVIEWPORT
local orxVIEWPORT = {}

---
---(non-const self) Adds a shader to a viewport using its config ID
---
---@param _shaderconfigid string # Config ID of the shader to add
---@return orxSTATUS # success / failure
function orxVIEWPORT:addShader(_shaderconfigid) end

---
---get the c memory address of the lorx userdata
---
---@return string # address string
function orxVIEWPORT:addr() end

---
---check if the c memory address of this lorx userdata equals to another
---
---@param _u any lorx utype # another lorx userdata
---@return boolean # true or false
function orxVIEWPORT:aeq(_u) end

---
---convert to a void*
---
---@return voidptr # the converted void*
function orxVIEWPORT:asVoid() end

---
---(non-const self) Clears viewport background color
---
---@return orxSTATUS # success / failure
function orxVIEWPORT:clearBackgroundColor() end

---
---(non-const self) Decreases structure reference count
---
function orxVIEWPORT:decreaseCount() end

---
---(non-const self) Deletes a viewport
---
---@return orxSTATUS # success / failure
function orxVIEWPORT:delete() end

---
---(non-const self) Enables / disables a viewport
---
---@param _enable boolean # Enable / disable
function orxVIEWPORT:enable(_enable) end

---
---(non-const self) Enables a viewport's shader
---
---@param _enable boolean # Enable / disable
function orxVIEWPORT:enableShader(_enable) end

---
---Gets a viewport background color
---
---@return orxCOLOR # Current background color
function orxVIEWPORT:getBackgroundColor() end

---
---Gets a viewport blend mode
---
---@return orxDISPLAY_BLEND_MODE # orxDISPLAY_BLEND_MODE
function orxVIEWPORT:getBlendMode() end

---
---Gets an axis aligned box of viewport
---
---@return orxAABOX # orxAABOX / nil
function orxVIEWPORT:getBox() end

---
---Gets a viewport camera
---
---@return orxCAMERA # Associated camera / nil
function orxVIEWPORT:getCamera() end

---
---Gets structure tree child
---
---@return orxSTRUCTURE # orxSTRUCTURE
function orxVIEWPORT:getChild() end

---
---Get viewport correction ratio
---
---@return number # Correction ratio value
function orxVIEWPORT:getCorrectionRatio() end

---
---Gets structure flags
---
---@return integer # integer (u32)
function orxVIEWPORT:getFlags() end

---
---Gets structure GUID
---
---@return integer # integer (u64)
function orxVIEWPORT:getGUID() end

---
---Gets structure ID
---
---@return orxSTRUCTURE_ID # orxSTRUCTURE_ID
function orxVIEWPORT:getID() end

---
---Gets viewport config name
---
---@return string # string / empty string
function orxVIEWPORT:getName() end

---
---Gets structure list next
---
---@return orxSTRUCTURE # orxSTRUCTURE
function orxVIEWPORT:getNext() end

---
---Gets structure's owner
---
---@return orxSTRUCTURE # orxSTRUCTURE / nil if not found/alive
function orxVIEWPORT:getOwner() end

---
---Gets structure tree parent
---
---@return orxSTRUCTURE # orxSTRUCTURE
function orxVIEWPORT:getParent() end

---
---Gets a viewport position
---
---@return number # X axis position (top left corner)
---@return number # Y axis position (top left corner)
function orxVIEWPORT:getPosition() end

---
---Gets structure list previous
---
---@return orxSTRUCTURE # orxSTRUCTURE
function orxVIEWPORT:getPrevious() end

---
---Gets structure reference count
---
---@return integer # integer (u32)
function orxVIEWPORT:getRefCount() end

---
---Gets a viewport relative size
---
---@return number # Relative width
---@return number # Relative height
function orxVIEWPORT:getRelativeSize() end

---
---Gets a viewport's shader pointer
---
---@return orxSHADERPOINTER # (const) orxSHADERPOINTER / nil
function orxVIEWPORT:getShaderPointer() end

---
---Gets structure tree sibling
---
---@return orxSTRUCTURE # orxSTRUCTURE
function orxVIEWPORT:getSibling() end

---
---Gets a viewport size
---
---@return number # Width
---@return number # Height
function orxVIEWPORT:getSize() end

---
---Gets a viewport texture count
---
---@return integer # Number of textures associated with the viewport
function orxVIEWPORT:getTextureCount() end

---
---Gets a viewport texture list
---
---@param _texturenumber integer # Number of textures to be retrieved
---@return orxSTATUS # success / failure
---@return orxTEXTURE[] # List of textures associated with the viewport
function orxVIEWPORT:getTextureList(_texturenumber) end

---
---Viewport has background color accessor
---
---@return boolean # true / false
function orxVIEWPORT:hasBackgroundColor() end

---
---(non-const self) Increases structure reference count
---
function orxVIEWPORT:increaseCount() end

---
---Is a viewport enabled?
---
---@return boolean # true / false
function orxVIEWPORT:isEnabled() end

---
---Is a viewport's shader enabled?
---
---@return boolean # true if enabled, false otherwise
function orxVIEWPORT:isShaderEnabled() end

---
---(non-const self) Removes a shader using its config ID
---
---@param _shaderconfigid string # Config ID of the shader to remove
---@return orxSTATUS # success / failure
function orxVIEWPORT:removeShader(_shaderconfigid) end

---
---(non-const self) Sets a viewport background color
---
---@param _color orxCOLOR # (const) Color to use for background
---@return orxSTATUS # success / failure
function orxVIEWPORT:setBackgroundColor(_color) end

---
---(non-const self) Sets a viewport blend mode (only used when has active shaders attached)
---
---@param _blendmode orxDISPLAY_BLEND_MODE # Blend mode to set
---@return orxSTATUS # 
function orxVIEWPORT:setBlendMode(_blendmode) end

---
---(non-const self) Sets a viewport camera
---
---@param _camera orxCAMERA # Associated camera
function orxVIEWPORT:setCamera(_camera) end

---
---(non-const self) Sets structure flags
---
---@param _removeflags integer # Flags to remove
function orxVIEWPORT:setFlags(_removeflags) end

---
---(non-const self) Sets structure owner
---
---@return orxSTATUS # success / failure
function orxVIEWPORT:setOwner() end

---
---(non-const self) Sets structure tree parent
---
---@return orxSTATUS # success / failure
function orxVIEWPORT:setParent() end

---
---(non-const self) Sets a viewport position
---
---@param _x number # X axis position (top left corner)
---@param _y number # Y axis position (top left corner)
function orxVIEWPORT:setPosition(_x, _y) end

---
---(non-const self) Sets a viewport relative position
---
---@param _alignflags integer # Alignment flags
---@return orxSTATUS # success / failure
function orxVIEWPORT:setRelativePosition(_alignflags) end

---
---(non-const self) Sets a viewport relative size
---
---@param _width number # Relative width (0.0f - 1.0f)
---@param _height number # Relative height (0.0f - 1.0f)
---@return orxSTATUS # success / failure
function orxVIEWPORT:setRelativeSize(_width, _height) end

---
---(non-const self) Sets a viewport size
---
---@param _width number # Width
---@param _height number # Height
function orxVIEWPORT:setSize(_width, _height) end

---
---(non-const self) Sets a viewport texture list
---
---@param _texturenumber integer # Number of textures to associate with the viewport
---@param _texturelist orxTEXTURE[] # List of textures to associate with the viewport
function orxVIEWPORT:setTextureList(_texturenumber, _texturelist) end

---
---Tests all flags against structure ones
---
---@return boolean # true / false
function orxVIEWPORT:testAllFlags() end

---
---Tests flags against structure ones
---
---@return boolean # true / false
function orxVIEWPORT:testFlags() end

---
---get the type name of the lorx userdata
---
---@return string # the type name
function orxVIEWPORT:type() end

---
---(non-const self) Updates structure if update function was registered for the structure type
---
---@param _clockinfo orxCLOCK_INFO # (const) Update associated clock info
---@return orxSTATUS # success / failure
function orxVIEWPORT:update(_clockinfo) end


