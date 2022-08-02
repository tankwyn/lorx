# callbacks

## lorxLOG_CALLBACK

* Signature:

```lua
r1 = callback(level, func, file, line, log)
```

* Description:

> Callback function prototype for [lorx.debug.log](modules/debug.md#log) (see [lorx.debug.setLogCallback](modules/debug.md#setlogcallback))

* Params:

name | type | description 
--- | --- | ---
level | [orxDEBUG_LEVEL](modules/constants.md#orxdebug_level) | debug level
func | string | function name
file | string | file name
line | integer | line number
log | string | log message

* Returns:

type | description
--- | ---
[orxSTATUS](enums.md#orxstatus) | if 'failure', the log entry will be entirely inhibited


---

## lorxCLOCK_CALLBACK

* Signature:

```lua
callback(ci)
```

* Description:

> Callback function for clocks and timers. (see [lorx.clock.addGlobalTimer](modules/clock.md#addglobaltimer), [lorx.clock.removeGlobalTimer](modules/clock.md#removeglobaltimer), [lorx.clock:register](types/orxCLOCK.md#register), [lorx.clock:unregister](types/orxCLOCK.md#unregister), [lorx.clock:addTimer](types/orxCLOCK.md#addtimer), [lorx.clock:removeTimer](types/orxCLOCK.md#removetimer))

* Params:

name | type | description
--- | --- | ---
ci | orxCLOCK_INFO | -

* Returns:


---

## lorxINIT_CALLBACK

* Signature:

```lua
r1 = callback()
```

* Description:

> Callback function to be called when Orx is initializing (see [lorx.execute](root.md#execute))

* Params:

* Returns:

type | description
--- | ---
[orxSTATUS](enums.md#orxstatus) | success / failure


---

## lorxUPDATE_CALLBACK

* Signature:

```lua
callback(ci)
```

* Description:

> Callback to be called on every frame (see [lorx.execute](root.md#execute) and [lorx.registerUpdate](root.md#registerupdate))

* Params:

name | type | description
--- | --- | ---
ci | [orxCLOCK_INFO](types/orxCLOCK_INFO.md) | -

* Returns:


---

## lorxEXIT_CALLBACK

* Signature:

```lua
callback()
```

* Description:

> Exit callback, will be called when Orx is exiting normally. (see [lorx.execute](root.md#execute))

* Params:

* Returns:


---

## lorxCFGSAVE_CALLBACK

* Signature:

```lua
r1 = callback(section, key, file, useencryption)
```

* Description:

> Filter config content when saving. (see [lorx.config.save](modules/config.md#save))

* Params:

name | type | description
--- | --- | ---
section | string | section name
key | string | entry key name
file | string | file name
useencryption | boolean | use encryption or not

* Returns:

type | description
--- | ---
boolean | false to filter out


---

## lorxCFGCLEAR_CALLBACK

* Signature:

```lua
r1 = callback(section, key)
```

* Description:

> Filter config content when clearing. (see [lorx.config.clear](modules/config.md#clear))

* Params:

name | type | description
--- | --- | ---
section | string | section name
key | string | entry key name

* Returns:

type | description
--- | ---
boolean | false to filter out


---

## lorxANIM_EVENT_HANDLER

* Signature:

```lua
r1 = callback(e)
```

* Description:

> Handler for handling anim events. Event data are passed as a table (e). Return 'success' to pass on the event, 'failure' otherwise.

* Event data:

name | type | condition | description
--- | --- | --- | ---
id | [orxANIM_EVENT](enums.md#orxanim_event) |  | anim event type
sender | [orxSTRUCTURE](types/orxSTRUCTURE.md) |  | sender
recipient | [orxSTRUCTURE](types/orxSTRUCTURE.md) |  | recipient
anim | [orxSTRUCTURE](types/orxSTRUCTURE.md) |  | concerned [orxANIM](types/orxANIM.md)
animname | string |  | anim name
count | integer | id == 'loop' | loop count
time | number | id == 'cut' or 'custom_event' | time
name | string | id == 'custom_event' | custom event name
value | number | id == 'custom_event' | custom event value
raw | void\* |  | raw pointer of the event


---

## lorxCLOCK_EVENT_HANDLER

* Signature:

```lua
r1 = callback(e)
```

* Description:

> Handler for handling anim events. Event data are passed as a table (e). Return 'success' to pass on the event, 'failure' otherwise.

* Event data:

name | type | condition | description
--- | --- | --- | ---
id | [orxCLOCK_EVENT](enums.md#orxclock_event) |  | clock event type
sender | [orxCLOCK](types/orxCLOCK.md) |  | sender
recipient | void\* |  | recipient
raw | void\* |  | raw pointer of the event


---

## lorxCONFIG_EVENT_HANDLER

* Signature:

```lua
r1 = callback(e)
```

* Description:

> Handler for handling anim events. Event data are passed as a table (e). Return 'success' to pass on the event, 'failure' otherwise.

* Event data:

name | type | condition | description
--- | --- | --- | ---
id | [orxCONFIG_EVENT](enums.md#orxconfig_event) |  | config event type
sender | void\* |  | sender
recipient | void\* |  | recipient
raw | void\* |  | raw pointer of the event


---

## lorxDISPLAY_EVENT_HANDLER

* Signature:

```lua
r1 = callback(e)
```

* Description:

> Handler for handling anim events. Event data are passed as a table (e). Return 'success' to pass on the event, 'failure' otherwise.

* Event data:

name | type | condition | description
--- | --- | --- | ---
id | [orxDISPLAY_EVENT](enums.md#orxdisplay_event) |  | display event type
sender | [orxBITMAP](types/orxBITMAP.md) | id == 'load_bitmap' | sender
recipient | [orxBITMAP](types/orxBITMAP.md) | id == 'load_bitmap' | recipient
width | integer | id == 'set_video_mode' | video mode width
height | integer | id == 'set_video_mode' | video mode height
depth | integer | id == 'set_video_mode' | video mode depth
refreshrate | integer | id == 'set_video_mode' | video mode refreshrate
previouswidth | integer | id == 'set_video_mode' | video mode previouswidth
previousheight | integer | id == 'set_video_mode' | video mode previousheight
previousdepth | integer | id == 'set_video_mode' | video mode previousdepth
previousrefreshrate | integer | id == 'set_video_mode' | video mode previousrefreshrate
fullscreen | boolean | id == 'set_video_mode' | video mode fullscreen
location | string | id == 'load_bitmap' | bitmap location
filenameid | integer | id == 'load_bitmap' | bitmap file name string ID
bitmapid | integer | id == 'load_bitmap' | bitmap ID
raw | void\* |  | raw pointer of the event


---

## lorxFX_EVENT_HANDLER

* Signature:

```lua
r1 = callback(e)
```

* Description:

> Handler for handling anim events. Event data are passed as a table (e). Return 'success' to pass on the event, 'failure' otherwise.

* Event data:

name | type | condition | description
--- | --- | --- | ---
id | [orxFX_EVENT](enums.md#orxfx_event) |  | FX event type
sender | [orxSTRUCTURE](types/orxSTRUCTURE.md) |  | sender
recipient | [orxSTRUCTURE](types/orxSTRUCTURE.md) |  | recipient
fx | [orxFX](types/orxFX.md) |  | the FX
fxname | string |  | the name of the FX
raw | void\* |  | raw pointer of the event


---

## lorxINPUT_EVENT_HANDLER

* Signature:

```lua
r1 = callback(e)
```

* Description:

> Handler for handling anim events. Event data are passed as a table (e). Return 'success' to pass on the event, 'failure' otherwise.

* Event data:

name | type | condition | description
--- | --- | --- | ---
id | [orxINPUT_EVENT](enums.md#orxinput_event) |  | input event type
sender | void\* |  | sender
recipient | void\* |  | recipient
setname | string |  | the name of the input set
inputname | string |  | the name of the input
typelist | table of [orxINPUT_TYPE](enums.md#orxinput_type) | id == 'on' or 'off' | input type list
idlist | table of string | id == 'on' or 'off' | input ID list
modelist | table of [orxINPUT_MODE](enums.md#orxinput_mode) | id == 'on' or 'off' | input ID list
valuelist | table of number | id == 'on' or 'off' | value list
raw | void\* |  | raw pointer of the event


---

## lorxLOCALE_EVENT_HANDLER

* Signature:

```lua
r1 = callback(e)
```

* Description:

> Handler for handling anim events. Event data are passed as a table (e). Return 'success' to pass on the event, 'failure' otherwise.

* Event data:

name | type | condition | description
--- | --- | --- | ---
id | [orxLOCALE_EVENT](enums.md#orxlocale_event) |  | locale event type
sender | void\* |  | sender
recipient | void\* |  | recipient
language | string |  | language
group | string |  | group
stringkey | string |  | string key
stringvalue | string |  | string value
raw | void\* |  | raw pointer of the event


---

## lorxOBJECT_EVENT_HANDLER

* Signature:

```lua
r1 = callback(e)
```

* Description:

> Handler for handling anim events. Event data are passed as a table (e). Return 'success' to pass on the event, 'failure' otherwise.

* Event data:

name | type | condition | description
--- | --- | --- | ---
id | [orxOBJECT_EVENT](enums.md#orxobject_event) |  | bbject event type
sender | [orxOBJECT](types/orxOBJECT.md) |  | sender
recipient | [orxOBJECT](types/orxOBJECT.md) |  | recipient
raw | void\* |  | raw pointer of the event


---

## lorxRENDER_EVENT_HANDLER

* Signature:

```lua
r1 = callback(e)
```

* Description:

> Handler for handling anim events. Event data are passed as a table (e). Return 'success' to pass on the event, 'failure' otherwise.

* Event data:

name | type | condition | description
--- | --- | --- | ---
id | [orxRENDER_EVENT](enums.md#orxrender_event) |  | render event type
sender | [orxOBJECT](types/orxOBJECT.md) \| [orxVIEWPORT](types/orxVIEWPORT.md) | id == 'viewport_\*' \| id == 'object_\*' | sender
recipient | [orxOBJECT](types/orxOBJECT.md) \| [orxVIEWPORT](types/orxVIEWPORT.md) | id == 'viewport_\*' \| id == 'object_\*' | recipient
transform | [orxDISPLAY_TRANSFORM](types/orxDISPLAY_TRANSFORM.md) | id == 'object_\*' | transform
raw | void\* |  | raw pointer of the event


---

## lorxVIEWPORT_EVENT_HANDLER

* Signature:

```lua
r1 = callback(e)
```

* Description:

> Handler for handling anim events. Event data are passed as a table (e). Return 'success' to pass on the event, 'failure' otherwise.

* Event data:

name | type | condition | description
--- | --- | --- | ---
id | [orxVIEWPORT_EVENT](enums.md#orxviewport_event) |  | viewport event type
sender | [orxVIEWPORT](types/orxVIEWPORT.md) |  | sender
recipient | [orxVIEWPORT](types/orxVIEWPORT.md) |  | recipient
raw | void\* |  | raw pointer of the event


---

## lorxTIMELINE_EVENT_HANDLER

* Signature:

```lua
r1 = callback(e)
```

* Description:

> Handler for handling anim events. Event data are passed as a table (e). Return 'success' to pass on the event, 'failure' otherwise.

* Event data:

name | type | condition | description
--- | --- | --- | ---
id | [orxTIMELINE_EVENT](enums.md#orxtimeline_event) |  | timeline event type
sender | [orxSTRUCTURE](types/orxSTRUCTURE.md) |  | sender
recipient | [orxSTRUCTURE](types/orxSTRUCTURE.md) |  | recipient
timeline | [orxTIMELINE](types/orxTIMELINE.md) |  | the timeline
trackname | string |  | the name of the track
event | string |  | timeline event string
timestamp | number |  | timestamp
raw | void\* |  | raw pointer of the event


---

## lorxTEXTURE_EVENT_HANDLER

* Signature:

```lua
r1 = callback(e)
```

* Description:

> Handler for handling anim events. Event data are passed as a table (e). Return 'success' to pass on the event, 'failure' otherwise.

* Event data:

name | type | condition | description
--- | --- | --- | ---
id | [orxTIMELINE_EVENT](enums.md#orxtexture_event) |  | texture event type
sender | void\* |  | sender
recipient | [orxTEXTURE](types/orxTEXTURE.md) |  | recipient
raw | void\* |  | raw pointer of the event


---

## lorxSYSTEM_EVENT_HANDLER

* Signature:

```lua
r1 = callback(e)
```

* Description:

> Handler for handling anim events. Event data are passed as a table (e). Return 'success' to pass on the event, 'failure' otherwise.

* Event data:

name | type | condition | description
--- | --- | --- | ---
id | [orxSYSTEM_EVENT](enums.md#orxsystem_event) |  | system event type
sender | void\* |  | sender
recipient | void\* |  | recipient
time | number | id == 'touch_\*' or 'accelerate' | touch time or acceleration time
touchid | integer | id == 'touch_\*' | touch ID
pressure | number | id == 'touch_\*' | pressure
x | number | id == 'touch_\*' | x of touch position
y | number | id == 'touch_\*' | y of touch position
acceleration | [orxVECTOR](types/orxVECTOR.md) | id == 'accelerate' | the acceleration
valuelist | table of string | id == 'drop' | drop value list
value | string | id == 'clipboard' | clipboard value
framecount | integer | id == 'game_loop_\*' | frame count
raw | void\* |  | raw pointer of the event


---

## lorxSHADER_EVENT_HANDLER

* Signature:

```lua
r1 = callback(e)
```

* Description:

> Handler for handling anim events. Event data are passed as a table (e). Return 'success' to pass on the event, 'failure' otherwise.

* Event data:

name | type | condition | description
--- | --- | --- | ---
id | [orxSHADER_EVENT](enums.md#orxshader_event) |  | shader event type
sender | [orxSTRUCTURE](types/orxSTRUCTURE.md) |  | sender
recipient | [orxSTRUCTURE](types/orxSTRUCTURE.md) |  | recipient
shader | [orxShader](types/orxSHADER.md) |  | the shader
shadername | string |  | the name of the shader
paramname | string |  | the name of the shader param
paramtype | [orxSHADER_PARAM_TYPE](enums.md#orxshader_param_type.md) |  | the type of the shader param
paramindex | integer |  | the index of the shader param
value | number \| [orxTEXTURE](types/orxTEXTURE.md) \| [orxVECTOR](types/orxVECTOR.md) | depends on `paramtype` | shader param value
raw | void\* |  | raw pointer of the event


---

## lorxSPAWNER_EVENT_HANDLER

* Signature:

```lua
r1 = callback(e)
```

* Description:

> Handler for handling anim events. Event data are passed as a table (e). Return 'success' to pass on the event, 'failure' otherwise.

* Event data:

name | type | condition | description
--- | --- | --- | ---
id | [orxSPAWNER_EVENT](enums.md#orxspawner_event) |  | spawner event type
sender | [orxSPAWNER](types/orxSPAWNER.md) |  | sender
recipient | [orxOBJECT](types/orxOBJECT.md) |  | recipient
raw | void\* |  | raw pointer of the event


---

## lorxSOUND_EVENT_HANDLER

* Signature:

```lua
r1 = callback(e)
```

* Description:

> Handler for handling anim events. Event data are passed as a table (e). Return 'success' to pass on the event, 'failure' otherwise.

* Event data:

name | type | condition | description
--- | --- | --- | ---
id | [orxSOUND_EVENT](enums.md#orxsound_event) |  | sound event type
sender | orxHANDLE \| [orxOBJECT](types/orxOBJECT.md) \| [orxSTRUCTURE](types/orxSTRUCTURE.md) |  | sender
recipient | [orxOBJECT](types/orxOBJECT.md) |  | recipient
streaminfo | [orxSOUND_STREAM_INFO](types/orxSOUND_STREAM_INFO.md) | id == 'packet' or 'recording_\*' | stream info
streampacket | [orxSOUND_STREAM_PACKET](types/orxSOUND_STREAM_PACKET.md) | id == 'packet' or 'recording_\*' | stream packet
filterdata | [orxSOUND_FILTER_DATA](types/orxSOUND_FILTER_DATA.md) | id == 'set_filter_param' | filter data
filterbusid | integer | id == 'set_filter_param' | filter bus ID
raw | void\* |  | raw pointer of the event


---

## lorxRESOURCE_EVENT_HANDLER

* Signature:

```lua
r1 = callback(e)
```

* Description:

> Handler for handling anim events. Event data are passed as a table (e). Return 'success' to pass on the event, 'failure' otherwise.

* Event data:

name | type | condition | description
--- | --- | --- | ---
id | [orxRESOURCE_EVENT](enums.md#orxresource_event) |  | resource event type
sender | void\* |  | sender
recipient | void\* |  | recipient
time | integer |  | event time
location | string |  | resource location
groupid | integer |  | resource group ID
nameid | integer |  | resource name ID
typetag | string |  | resource tag
raw | void\* |  | raw pointer of the event


---

## lorxPHYSICS_EVENT_HANDLER

* Signature:

```lua
r1 = callback(e)
```

* Description:

> Handler for handling anim events. Event data are passed as a table (e). Return 'success' to pass on the event, 'failure' otherwise.

* Event data:

name | type | condition | description
--- | --- | --- | ---
id | [orxPHYSICS_EVENT](enums.md#orxphysics_event) |  | physics event type
sender | [orxOBJECT](types/orxOBJECT.md) |  | sender
recipient | [orxOBJECT](types/orxOBJECT.md) |  | recipient
position | [orxVECTOR](types/orxVECTOR.md) |  | contact position
normal | [orxVECTOR](types/orxVECTOR.md) |  | normal direction of contact
raw | void\* |  | raw pointer of the event
