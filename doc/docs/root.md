# root module (lorx\.\*)

## functions

### **`execute`**

* Signature:

```lua
execute(init, update, exit)
```

* Description:

> Run the Orx engine, similar to orxExecute. The difference been that instead of a 'run' callback, this function asks for an 'update' callback.

* Params:

name | type | description 
--- | --- | ---
init | [lorxINIT_CALLBACK](callbacks.md#lorxinit_callback) | init callback to be called when Orx is initalizing
update | [lorxUPDATE_CALLBACK](callbacks.md#lorxupdate_callback) | update callback to be called on every frame
exit | [lorxEXIT_CALLBACK](callbacks.md#lorxexit_callback) | exit callback to be called when Orx is exiting

* Returns:


---

### **`stop`**

* Signature:

```lua
stop()
```

* Description:

> Stop the Orx engine (cause normal exit)

* Params:

* Returns:

---

### **`getVersion`**

* Signature:

```lua
r1 = getVersion()
```

* Description:

> Get Lorx version

* Params:

* Returns:

type | description
--- | ---
string | Lorx version string


---

### **`getOrxVersion`**

* Signature:

```lua
r1 = getOrxVersion()
```

* Description:

> Get runtime Orx Version

* Params:

* Returns:

type | description
--- | ---
string | runtime Orx version string


---

### **`getBindOrxVersion`**

* Signature:

```lua
r1 = getBindOrxVersion()
```

* Description:

> Get bind Orx Version

* Params:

* Returns:

type | description
--- | ---
string | bind Orx version string


---

### **`registerUpdate`**

* Signature:

```lua
registerUpdate(update)
```

* Description:

> Register the update callback. (will discard the previous one).

* Params:

name | type | description 
--- | --- | ---
update | lorxUPDATE_CALLBACK | new update callback

* Returns:


---

### **`unregisterUpdate`**

* Signature:

```lua
r1 = unregisterUpdate()
```

* Description:

> Unregister current update callback

* Params:

* Returns:

type | description
--- | ---
boolean | false if the callback was not yet set


---

### **`registerAnimHandler`**

* Signature:

```lua
r1 = registerAnimHandler(handler)
```

* Description:

> Register a callback to handle anim events. (The previous one will be discarded)

* Params:

name | type | description
--- | --- | ---
handler | [lorxANIM_EVENT_HANDLER](callbacks.md#lorxanim_event_handler) | -

* Returns:

type | description
--- | ---
[orxSTATUS](enums.md#orxstatus) | success / failure


---

### **`registerClockHandler`**

* Signature:

```lua
r1 = registerClockHandler(handler)
```

* Description:

> Register a callback to handle clock events. (The previous one will be discarded)

* Params:

name | type | description
--- | --- | ---
handler | [lorxCLOCK_EVENT_HANDLER](callbacks.md#lorxclock_event_handler) | -

* Returns:

type | description
--- | ---
[orxSTATUS](enums.md#orxstatus) | success / failure


---

### **`registerConfigHandler`**

* Signature:

```lua
r1 = registerConfigHandler(handler)
```

* Description:

> Register a callback to handle config events. (The previous one will be discarded)

* Params:

name | type | description
--- | --- | ---
handler | [lorxCONFIG_EVENT_HANDLER](callbacks.md#lorxconfig_event_handler) | -

* Returns:

type | description
--- | ---
[orxSTATUS](enums.md#orxstatus) | success / failure


---

### **`registerDisplayHandler`**

* Signature:

```lua
r1 = registerDisplayHandler(handler)
```

* Description:

> Register a callback to handle display events. (The previous one will be discarded)

* Params:

name | type | description
--- | --- | ---
handler | [lorxDISPLAY_EVENT_HANDLER](callbacks.md#lorxdisplay_event_handler) | -

* Returns:

type | description
--- | ---
[orxSTATUS](enums.md#orxstatus) | success / failure


---

### **`registerFXHandler`**

* Signature:

```lua
r1 = registerFXHandler(handler)
```

* Description:

> Register a callback to handle fx events. (The previous one will be discarded)

* Params:

name | type | description
--- | --- | ---
handler | [lorxFX_EVENT_HANDLER](callbacks.md#lorxfx_event_handler) | -

* Returns:

type | description
--- | ---
[orxSTATUS](enums.md#orxstatus) | success / failure


---

### **`registerInputHandler`**

* Signature:

```lua
r1 = registerInputHandler(handler)
```

* Description:

> Register a callback to handle input events. (The previous one will be discarded)

* Params:

name | type | description
--- | --- | ---
handler | [lorxINPUT_EVENT_HANDLER](callbacks.md#lorxinput_event_handler) | -

* Returns:

type | description
--- | ---
[orxSTATUS](enums.md#orxstatus) | success / failure


---

### **`registerLocaleHandler`**

* Signature:

```lua
r1 = registerLocaleHandler(handler)
```

* Description:

> Register a callback to handle locale events. (The previous one will be discarded)

* Params:

name | type | description
--- | --- | ---
handler | [lorxLOCALE_EVENT_HANDLER](callbacks.md#lorxlocale_event_handler) | -

* Returns:

type | description
--- | ---
[orxSTATUS](enums.md#orxstatus) | success / failure


---

### **`registerObjectHandler`**

* Signature:

```lua
r1 = registerObjectHandler(handler)
```

* Description:

> Register a callback to handle object events. (The previous one will be discarded)

* Params:

name | type | description
--- | --- | ---
handler | [lorxOBJECT_EVENT_HANDLER](callbacks.md#lorxobject_event_handler) | -

* Returns:

type | description
--- | ---
[orxSTATUS](enums.md#orxstatus) | success / failure


---

### **`registerRenderHandler`**

* Signature:

```lua
r1 = registerRenderHandler(handler)
```

* Description:

> Register a callback to handle render events. (The previous one will be discarded)

* Params:

name | type | description
--- | --- | ---
handler | [lorxRENDER_EVENT_HANDLER](callbacks.md#lorxrender_event_handler) | -

* Returns:

type | description
--- | ---
[orxSTATUS](enums.md#orxstatus) | success / failure


---

### **`registerViewportHandler`**

* Signature:

```lua
r1 = registerViewportHandler(handler)
```

* Description:

> Register a callback to handle viewport events. (The previous one will be discarded)

* Params:

name | type | description
--- | --- | ---
handler | [lorxVIEWPORT_EVENT_HANDLER](callbacks.md#lorxviewport_event_handler) | -

* Returns:

type | description
--- | ---
[orxSTATUS](enums.md#orxstatus) | success / failure


---

### **`registerTimelineHandler`**

* Signature:

```lua
r1 = registerTimelineHandler(handler)
```

* Description:

> Register a callback to handle timeline events. (The previous one will be discarded)

* Params:

name | type | description
--- | --- | ---
handler | [lorxTIMELINE_EVENT_HANDLER](callbacks.md#lorxtimeline_event_handler) | -

* Returns:

type | description
--- | ---
[orxSTATUS](enums.md#orxstatus) | success / failure


---

### **`registerTextureHandler`**

* Signature:

```lua
r1 = registerTextureHandler(handler)
```

* Description:

> Register a callback to handle texture events. (The previous one will be discarded)

* Params:

name | type | description
--- | --- | ---
handler | [lorxTEXTURE_EVENT_HANDLER](callbacks.md#lorxtexture_event_handler) | -

* Returns:

type | description
--- | ---
[orxSTATUS](enums.md#orxstatus) | success / failure


---

### **`registerSystemHandler`**

* Signature:

```lua
r1 = registerSystemHandler(handler)
```

* Description:

> Register a callback to handle system events. (The previous one will be discarded)

* Params:

name | type | description
--- | --- | ---
handler | [lorxSYSTEM_EVENT_HANDLER](callbacks.md#lorxsystem_event_handler) | -

* Returns:

type | description
--- | ---
[orxSTATUS](enums.md#orxstatus) | success / failure


---

### **`registerShaderHandler`**

* Signature:

```lua
r1 = registerShaderHandler(handler)
```

* Description:

> Register a callback to handle shader events. (The previous one will be discarded)

* Params:

name | type | description
--- | --- | ---
handler | [lorxSHADER_EVENT_HANDLER](callbacks.md#lorxshader_event_handler) | -

* Returns:

type | description
--- | ---
[orxSTATUS](enums.md#orxstatus) | success / failure


---

### **`registerSpawnerHandler`**

* Signature:

```lua
r1 = registerSpawnerHandler(handler)
```

* Description:

> Register a callback to handle spawner events. (The previous one will be discarded)

* Params:

name | type | description
--- | --- | ---
handler | [lorxSPAWNER_EVENT_HANDLER](callbacks.md#lorxspawner_event_handler) | -

* Returns:

type | description
--- | ---
[orxSTATUS](enums.md#orxstatus) | success / failure


---

### **`registerSoundHandler`**

* Signature:

```lua
r1 = registerSoundHandler(handler)
```

* Description:

> Register a callback to handle sound events. (The previous one will be discarded)

* Params:

name | type | description
--- | --- | ---
handler | [lorxSOUND_EVENT_HANDLER](callbacks.md#lorxsound_event_handler) | -

* Returns:

type | description
--- | ---
[orxSTATUS](enums.md#orxstatus) | success / failure


---

### **`registerResourceHandler`**

* Signature:

```lua
r1 = registerResourceHandler(handler)
```

* Description:

> Register a callback to handle resource events. (The previous one will be discarded)

* Params:

name | type | description
--- | --- | ---
handler | [lorxRESOURCE_EVENT_HANDLER](callbacks.md#lorxresource_event_handler) | -

* Returns:

type | description
--- | ---
[orxSTATUS](enums.md#orxstatus) | success / failure


---

### **`registerPhysicsHandler`**

* Signature:

```lua
r1 = registerPhysicsHandler(handler)
```

* Description:

> Register a callback to handle physics events. (The previous one will be discarded)

* Params:

name | type | description
--- | --- | ---
handler | [lorxPHYSICS_EVENT_HANDLER](callbacks.md#lorxphysics_event_handler) | -

* Returns:

type | description
--- | ---
[orxSTATUS](enums.md#orxstatus) | success / failure
