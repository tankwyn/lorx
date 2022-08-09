# type orxOBJECT

> 

## Methods

### **`orxOBJECT:addFX`**

* Signature:

```lua
r1 = addFX(fxconfigid)
```

* Description:

> Adds an FX using its config ID. (non-const self only)

* Params:

name | type | description 
--- | --- | ---
fxconfigid | string | Config ID of the FX to add

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxObject_AddFX(orxOBJECT *_pstObject, const orxSTRING _zFXConfigID)
```

---

### **`orxOBJECT:addFXRecursive`**

* Signature:

```lua
addFXRecursive(fxconfigid, propagationdelay)
```

* Description:

> Adds an FX to an object and its owned children. (non-const self only)

* Params:

name | type | description 
--- | --- | ---
fxconfigid | string | Config ID of the FX to add
propagationdelay | number | Propagation delay for each child

* Returns:

* C signature:

```c
  void  orxObject_AddFXRecursive(orxOBJECT *_pstObject, const orxSTRING _zFXConfigID, orxFLOAT _fPropagationDelay)
```

---

### **`orxOBJECT:addFilter`**

* Signature:

```lua
r1 = addFilter(filterconfigid)
```

* Description:

> Adds a filter to the sounds of an object \(cascading\). (non-const self only)

* Params:

name | type | description 
--- | --- | ---
filterconfigid | string | Config ID of the filter to add

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxObject_AddFilter(orxOBJECT *_pstObject, const orxSTRING _zFilterConfigID)
```

---

### **`orxOBJECT:addShader`**

* Signature:

```lua
r1 = addShader(shaderconfigid)
```

* Description:

> Adds a shader to an object using its config ID. (non-const self only)

* Params:

name | type | description 
--- | --- | ---
shaderconfigid | string | Config ID of the shader to add

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxObject_AddShader(orxOBJECT *_pstObject, const orxSTRING _zShaderConfigID)
```

---

### **`orxOBJECT:addShaderRecursive`**

* Signature:

```lua
addShaderRecursive(shaderconfigid)
```

* Description:

> Adds a shader to an object and its owned children. (non-const self only)

* Params:

name | type | description 
--- | --- | ---
shaderconfigid | string | Config ID of the shader to add

* Returns:

* C signature:

```c
  void  orxObject_AddShaderRecursive(orxOBJECT *_pstObject, const orxSTRING _zShaderConfigID)
```

---

### **`orxOBJECT:addSound`**

* Signature:

```lua
r1 = addSound(soundconfigid)
```

* Description:

> Adds a sound using its config ID. (non-const self only)

* Params:

name | type | description 
--- | --- | ---
soundconfigid | string | Config ID of the sound to add

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxObject_AddSound(orxOBJECT *_pstObject, const orxSTRING _zSoundConfigID)
```

---

### **`orxOBJECT:addTimeLineTrack`**

* Signature:

```lua
r1 = addTimeLineTrack(trackconfigid)
```

* Description:

> Adds a timeline track to an object using its config ID. (non-const self only)

* Params:

name | type | description 
--- | --- | ---
trackconfigid | string | Config ID of the timeline track to add

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxObject_AddTimeLineTrack(orxOBJECT *_pstObject, const orxSTRING _zTrackConfigID)
```

---

### **`orxOBJECT:addTimeLineTrackRecursive`**

* Signature:

```lua
addTimeLineTrackRecursive(trackconfigid)
```

* Description:

> Adds a timeline track to an object and its owned children. (non-const self only)

* Params:

name | type | description 
--- | --- | ---
trackconfigid | string | Config ID of the timeline track to add

* Returns:

* C signature:

```c
  void  orxObject_AddTimeLineTrackRecursive(orxOBJECT *_pstObject, const orxSTRING _zTrackConfigID)
```

---

### **`orxOBJECT:addUniqueFX`**

* Signature:

```lua
r1 = addUniqueFX(fxconfigid)
```

* Description:

> Adds a unique FX using its config ID. (non-const self only)

* Params:

name | type | description 
--- | --- | ---
fxconfigid | string | Config ID of the FX to add

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxObject_AddUniqueFX(orxOBJECT *_pstObject, const orxSTRING _zFXConfigID)
```

---

### **`orxOBJECT:addUniqueFXRecursive`**

* Signature:

```lua
addUniqueFXRecursive(fxconfigid, propagationdelay)
```

* Description:

> Adds a unique FX to an object and its owned children. (non-const self only)

* Params:

name | type | description 
--- | --- | ---
fxconfigid | string | Config ID of the FX to add
propagationdelay | number | Propagation delay for each child

* Returns:

* C signature:

```c
  void  orxObject_AddUniqueFXRecursive(orxOBJECT *_pstObject, const orxSTRING _zFXConfigID, orxFLOAT _fPropagationDelay)
```

---

### **`orxOBJECT:addr`**

* Signature:

```lua
r1 = addr()
```

* Description:

> get the c memory address of the lorx userdata

* Params:

* Returns:

type | description 
--- | ---
string | address string

---

### **`orxOBJECT:aeq`**

* Signature:

```lua
r1 = aeq(u)
```

* Description:

> check if the memory address of this lorx userdata equals to another

* Params:

name | type | description 
--- | --- | ---
u | any lorx utype | another lorx userdata

* Returns:

type | description 
--- | ---
boolean | true or false

---

### **`orxOBJECT:applyForce`**

* Signature:

```lua
r1 = applyForce(force, point)
```

* Description:

> Applies a force. (non-const self only)

* Params:

name | type | description 
--- | --- | ---
force | [orxVECTOR\#](./orxVECTOR.md) | Force to apply
point | [orxVECTOR\#](./orxVECTOR.md) | Point (world coordinates) where the force will be applied, if orxNULL, center of mass will be used

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxObject_ApplyForce(orxOBJECT *_pstObject, const orxVECTOR *_pvForce, const orxVECTOR *_pvPoint)
```

---

### **`orxOBJECT:applyImpulse`**

* Signature:

```lua
r1 = applyImpulse(impulse, point)
```

* Description:

> Applies an impulse. (non-const self only)

* Params:

name | type | description 
--- | --- | ---
impulse | [orxVECTOR\#](./orxVECTOR.md) | Impulse to apply
point | [orxVECTOR\#](./orxVECTOR.md) | Point (world coordinates) where the impulse will be applied, if orxNULL, center of mass will be used

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxObject_ApplyImpulse(orxOBJECT *_pstObject, const orxVECTOR *_pvImpulse, const orxVECTOR *_pvPoint)
```

---

### **`orxOBJECT:applyTorque`**

* Signature:

```lua
r1 = applyTorque(torque)
```

* Description:

> Applies a torque. (non-const self only)

* Params:

name | type | description 
--- | --- | ---
torque | number | Torque to apply

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxObject_ApplyTorque(orxOBJECT *_pstObject, orxFLOAT _fTorque)
```

---

### **`orxOBJECT:asVoid`**

* Signature:

```lua
r1 = asVoid()
```

* Description:

> convert to a void\*

* Params:

* Returns:

type | description 
--- | ---
void\* | the converted void\*

---

### **`orxOBJECT:attach`**

* Signature:

```lua
r1 = attach(parent)
```

* Description:

> Attaches an object to a parent while maintaining the object's world position. (non-const self only)

* Params:

name | type | description 
--- | --- | ---
parent | void\* | Parent structure to attach to (object, spawner, camera or frame)

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | orsSTATUS_SUCCESS / failure

* C signature:

```c
  orxSTATUS  orxObject_Attach(orxOBJECT *_pstObject, void *_pParent)
```

---

### **`orxOBJECT:decreaseCount`**

* Signature:

```lua
decreaseCount()
```

* Description:

> Decreases structure reference count (non-const self only)

* Params:

* Returns:

* C signature:

```c
  void orxStructure_DecreaseCount(void *_pStructure)
```

---

### **`orxOBJECT:delete`**

* Signature:

```lua
r1 = delete()
```

* Description:

> Deletes an object, \*unsafe\* when called from an event handler: call orxObject_SetLifeTime\(orxFLOAT_0\) instead (non-const self only)

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxObject_Delete(orxOBJECT *_pstObject)
```

---

### **`orxOBJECT:detach`**

* Signature:

```lua
r1 = detach()
```

* Description:

> Detaches an object from a parent while maintaining the object's world position. (non-const self only)

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | orsSTATUS_SUCCESS / failure

* C signature:

```c
  orxSTATUS  orxObject_Detach(orxOBJECT *_pstObject)
```

---

### **`orxOBJECT:enable`**

* Signature:

```lua
enable(enable)
```

* Description:

> Enables/disables an object. Note that enabling/disabling an object is not recursive, so its children will not be affected, see orxObject_EnableRecursive\(\). (non-const self only)

* Params:

name | type | description 
--- | --- | ---
enable | boolean | Enable / disable

* Returns:

* C signature:

```c
  void  orxObject_Enable(orxOBJECT *_pstObject, orxBOOL _bEnable)
```

---

### **`orxOBJECT:enableRecursive`**

* Signature:

```lua
enableRecursive(enable)
```

* Description:

> Enables/disables an object and all its owned children. (non-const self only)

* Params:

name | type | description 
--- | --- | ---
enable | boolean | Enable / disable

* Returns:

* C signature:

```c
  void  orxObject_EnableRecursive(orxOBJECT *_pstObject, orxBOOL _bEnable)
```

---

### **`orxOBJECT:enableShader`**

* Signature:

```lua
enableShader(enable)
```

* Description:

> Enables an object's shader. (non-const self only)

* Params:

name | type | description 
--- | --- | ---
enable | boolean | Enable / disable

* Returns:

* C signature:

```c
  void  orxObject_EnableShader(orxOBJECT *_pstObject, orxBOOL _bEnable)
```

---

### **`orxOBJECT:enableTimeLine`**

* Signature:

```lua
enableTimeLine(enable)
```

* Description:

> Enables an object's timeline. (non-const self only)

* Params:

name | type | description 
--- | --- | ---
enable | boolean | Enable / disable

* Returns:

* C signature:

```c
  void  orxObject_EnableTimeLine(orxOBJECT *_pstObject, orxBOOL _bEnable)
```

---

### **`orxOBJECT:getActiveTime`**

* Signature:

```lua
r1 = getActiveTime()
```

* Description:

> Gets object active time, i.e. the amount of time that the object has been alive taking into account the object's clock multiplier and object's periods of pause.

* Params:

* Returns:

type | description 
--- | ---
number | Active time

* C signature:

```c
  orxFLOAT  orxObject_GetActiveTime(const orxOBJECT *_pstObject)
```

---

### **`orxOBJECT:getAngularVelocity`**

* Signature:

```lua
r1 = getAngularVelocity()
```

* Description:

> Gets an object angular velocity.

* Params:

* Returns:

type | description 
--- | ---
number | Object angular velocity \(radians/seconds\)

* C signature:

```c
  orxFLOAT  orxObject_GetAngularVelocity(const orxOBJECT *_pstObject)
```

---

### **`orxOBJECT:getAnimFrequency`**

* Signature:

```lua
r1 = getAnimFrequency()
```

* Description:

> Gets an object's relative animation frequency.

* Params:

* Returns:

type | description 
--- | ---
number | Animation frequency / -orxFLOAT_1

* C signature:

```c
  orxFLOAT  orxObject_GetAnimFrequency(const orxOBJECT *_pstObject)
```

---

### **`orxOBJECT:getAnimPointer`**

* Signature:

```lua
r1 = getAnimPointer()
```

* Description:

> Get the [orxANIMPOINTER](./orxANIMPOINTER.md) linked to the [orxSTRUCTURE](./orxSTRUCTURE.md) 

* Params:

* Returns:

type | description 
--- | ---
[orxANIMPOINTER](./orxANIMPOINTER.md)  | The [orxANIMPOINTER](./orxANIMPOINTER.md) or nil

* C signature:

```c
#define orxOBJECT_GET_STRUCTURE(OBJECT, TYPE)
```

---

### **`orxOBJECT:getBlendMode`**

* Signature:

```lua
r1 = getBlendMode()
```

* Description:

> Gets object blend mode.

* Params:

* Returns:

type | description 
--- | ---
[orxDISPLAY_BLEND_MODE](../enums.md#orxdisplay_blend_mode)  | Blend mode \(alpha, multiply, add or none\)

* C signature:

```c
  orxDISPLAY_BLEND_MODE  orxObject_GetBlendMode(const orxOBJECT *_pstObject)
```

---

### **`orxOBJECT:getBody`**

* Signature:

```lua
r1 = getBody()
```

* Description:

> Get the [orxBODY](./orxBODY.md) linked to the [orxSTRUCTURE](./orxSTRUCTURE.md) 

* Params:

* Returns:

type | description 
--- | ---
[orxBODY](./orxBODY.md)  | The [orxBODY](./orxBODY.md) or nil

* C signature:

```c
#define orxOBJECT_GET_STRUCTURE(OBJECT, TYPE)
```

---

### **`orxOBJECT:getBoundingBox`**

* Signature:

```lua
r1 = getBoundingBox()
```

* Description:

> Gets object's bounding box \(OBB\).

* Params:

* Returns:

type | description 
--- | ---
[orxOBOX](./orxOBOX.md)  | Bounding box / nil

* C signature:

```c
  orxOBOX * orxObject_GetBoundingBox(const orxOBJECT *_pstObject, orxOBOX *_pstBoundingBox)
```

---

### **`orxOBJECT:getChild`**

* Signature:

```lua
r1 = getChild()
```

* Description:

> Gets object's first child object. See orxObject_SetOwner\(\) and orxObject_SetParent\(\) for a comparison of ownership and parenthood in Orx. Note: this function will filter out any camera or spawner and retrieve the first child object. This function is typically used to iterate over the children objects of an object. For example: @code for\([orxOBJECT](./orxOBJECT.md) \*pstChild = orxObject_GetChild\(pstObject\); pstChild != orxNULL; pstChild = orxObject_GetSibling\(pstChild\)\) { DoSomething\(pstChild\); // DoSomething\(\) can recurse into the children of pstChild for a depth-first traversal } @endcode

* Params:

* Returns:

type | description 
--- | ---
[orxOBJECT](./orxOBJECT.md)  | First child object / nil

* C signature:

```c
  orxOBJECT * orxObject_GetChild(const orxOBJECT *_pstObject)
```

---

### **`orxOBJECT:getClock`**

* Signature:

```lua
r1 = getClock()
```

* Description:

> Get the [orxCLOCK](./orxCLOCK.md) linked to the [orxSTRUCTURE](./orxSTRUCTURE.md) 

* Params:

* Returns:

type | description 
--- | ---
[orxCLOCK](./orxCLOCK.md)  | The [orxCLOCK](./orxCLOCK.md) or nil

* C signature:

```c
#define orxOBJECT_GET_STRUCTURE(OBJECT, TYPE)
```

---

### **`orxOBJECT:getColor`**

* Signature:

```lua
r1 = getColor()
```

* Description:

> Gets object color.

* Params:

* Returns:

type | description 
--- | ---
[orxCOLOR](./orxCOLOR.md)  | [orxCOLOR](./orxCOLOR.md) / nil

* C signature:

```c
  orxCOLOR * orxObject_GetColor(const orxOBJECT *_pstObject, orxCOLOR *_pstColor)
```

---

### **`orxOBJECT:getCurrentAnim`**

* Signature:

```lua
r1 = getCurrentAnim()
```

* Description:

> Gets current animation.

* Params:

* Returns:

type | description 
--- | ---
string | Current animation / empty string

* C signature:

```c
  const orxSTRING  orxObject_GetCurrentAnim(const orxOBJECT *_pstObject)
```

---

### **`orxOBJECT:getCustomGravity`**

* Signature:

```lua
r1 = getCustomGravity()
```

* Description:

> Gets an object custom gravity.

* Params:

* Returns:

type | description 
--- | ---
[orxVECTOR](./orxVECTOR.md)  | Object custom gravity / nil is object doesn't have any

* C signature:

```c
  orxVECTOR * orxObject_GetCustomGravity(const orxOBJECT *_pstObject, orxVECTOR *_pvCustomGravity)
```

---

### **`orxOBJECT:getFXFrequency`**

* Signature:

```lua
r1 = getFXFrequency()
```

* Description:

> Gets an object's relative FX frequency.

* Params:

* Returns:

type | description 
--- | ---
number | FX frequency / -orxFLOAT_1

* C signature:

```c
  orxFLOAT  orxObject_GetFXFrequency(const orxOBJECT *_pstObject)
```

---

### **`orxOBJECT:getFXPointer`**

* Signature:

```lua
r1 = getFXPointer()
```

* Description:

> Get the [orxFXPOINTER](./orxFXPOINTER.md) linked to the [orxSTRUCTURE](./orxSTRUCTURE.md) 

* Params:

* Returns:

type | description 
--- | ---
[orxFXPOINTER](./orxFXPOINTER.md)  | The [orxFXPOINTER](./orxFXPOINTER.md) or nil

* C signature:

```c
#define orxOBJECT_GET_STRUCTURE(OBJECT, TYPE)
```

---

### **`orxOBJECT:getFlags`**

* Signature:

```lua
r1 = getFlags()
```

* Description:

> Gets structure flags

* Params:

* Returns:

type | description 
--- | ---
integer | integer \(u32\)

* C signature:

```c
  orxU32 orxStructure_GetFlags(const void *_pStructure, orxU32 _u32Mask)
```

---

### **`orxOBJECT:getFlip`**

* Signature:

```lua
r1, r2, r3 = getFlip()
```

* Description:

> Gets object flipping.

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure
boolean | X axis flipping
boolean | Y axis flipping

* C signature:

```c
  orxSTATUS  orxObject_GetFlip(const orxOBJECT *_pstObject, orxBOOL *_pbFlipX, orxBOOL *_pbFlipY)
```

---

### **`orxOBJECT:getFrame`**

* Signature:

```lua
r1 = getFrame()
```

* Description:

> Get the [orxFRAME](./orxFRAME.md) linked to the [orxSTRUCTURE](./orxSTRUCTURE.md) 

* Params:

* Returns:

type | description 
--- | ---
[orxFRAME](./orxFRAME.md)  | The [orxFRAME](./orxFRAME.md) or nil

* C signature:

```c
#define orxOBJECT_GET_STRUCTURE(OBJECT, TYPE)
```

---

### **`orxOBJECT:getGUID`**

* Signature:

```lua
r1 = getGUID()
```

* Description:

> Gets structure GUID

* Params:

* Returns:

type | description 
--- | ---
integer | integer \(u64\)

* C signature:

```c
  orxU64 orxStructure_GetGUID(const void *_pStructure)
```

---

### **`orxOBJECT:getGraphic`**

* Signature:

```lua
r1 = getGraphic()
```

* Description:

> Get the [orxGRAPHIC](./orxGRAPHIC.md) linked to the [orxSTRUCTURE](./orxSTRUCTURE.md) 

* Params:

* Returns:

type | description 
--- | ---
[orxGRAPHIC](./orxGRAPHIC.md)  | The [orxGRAPHIC](./orxGRAPHIC.md) or nil

* C signature:

```c
#define orxOBJECT_GET_STRUCTURE(OBJECT, TYPE)
```

---

### **`orxOBJECT:getGroupID`**

* Signature:

```lua
r1 = getGroupID()
```

* Description:

> Gets object's group ID.

* Params:

* Returns:

type | description 
--- | ---
integer | Object's group ID. This is the string ID \(see orxString_GetFromID\(\)\) of the object's group name.

* C signature:

```c
  orxSTRINGID  orxObject_GetGroupID(const orxOBJECT *_pstObject)
```

---

### **`orxOBJECT:getID`**

* Signature:

```lua
r1 = getID()
```

* Description:

> Gets structure ID

* Params:

* Returns:

type | description 
--- | ---
[orxSTRUCTURE_ID](../enums.md#orxstructure_id)  | [orxSTRUCTURE_ID](../enums.md#orxstructure_id) 

* C signature:

```c
  orxSTRUCTURE_ID orxStructure_GetID(const void *_pStructure)
```

---

### **`orxOBJECT:getIgnoreFlags`**

* Signature:

```lua
r1 = getIgnoreFlags()
```

* Description:

> Gets object's ignore flags.

* Params:

* Returns:

type | description 
--- | ---
integer | Ignore flags

* C signature:

```c
  orxU32  orxObject_GetIgnoreFlags(const orxOBJECT *_pstObject)
```

---

### **`orxOBJECT:getLastAddedSound`**

* Signature:

```lua
r1 = getLastAddedSound()
```

* Description:

> Gets last added sound \(Do \*NOT\* destroy it directly before removing it!!!\).

* Params:

* Returns:

type | description 
--- | ---
[orxSOUND](./orxSOUND.md)  | [orxSOUND](./orxSOUND.md) / nil

* C signature:

```c
  orxSOUND * orxObject_GetLastAddedSound(const orxOBJECT *_pstObject)
```

---

### **`orxOBJECT:getLifeTime`**

* Signature:

```lua
r1 = getLifeTime()
```

* Description:

> Gets object lifetime.

* Params:

* Returns:

type | description 
--- | ---
number | Lifetime / negative value if none

* C signature:

```c
  orxFLOAT  orxObject_GetLifeTime(const orxOBJECT *_pstObject)
```

---

### **`orxOBJECT:getLiteralIgnoreFlags`**

* Signature:

```lua
r1 = getLiteralIgnoreFlags()
```

* Description:

> Gets object's ignore flags literals. The result will not persist through other calls to this function or to orxFrame_GetIgnoreFlagNames\(\).

* Params:

* Returns:

type | description 
--- | ---
string | Ignore flags literals

* C signature:

```c
  const orxSTRING  orxObject_GetLiteralIgnoreFlags(const orxOBJECT *_pstObject)
```

---

### **`orxOBJECT:getMass`**

* Signature:

```lua
r1 = getMass()
```

* Description:

> Gets an object mass.

* Params:

* Returns:

type | description 
--- | ---
number | Object mass

* C signature:

```c
  orxFLOAT  orxObject_GetMass(const orxOBJECT *_pstObject)
```

---

### **`orxOBJECT:getMassCenter`**

* Signature:

```lua
r1 = getMassCenter()
```

* Description:

> Gets an object center of mass \(object space\).

* Params:

* Returns:

type | description 
--- | ---
[orxVECTOR](./orxVECTOR.md)  | Mass center / nil

* C signature:

```c
  orxVECTOR * orxObject_GetMassCenter(const orxOBJECT *_pstObject, orxVECTOR *_pvMassCenter)
```

---

### **`orxOBJECT:getName`**

* Signature:

```lua
r1 = getName()
```

* Description:

> Gets object config name.

* Params:

* Returns:

type | description 
--- | ---
string | string / empty string

* C signature:

```c
  const orxSTRING  orxObject_GetName(const orxOBJECT *_pstObject)
```

---

### **`orxOBJECT:getNext`**

* Signature:

```lua
r1 = getNext()
```

* Description:

> Gets structure list next

* Params:

* Returns:

type | description 
--- | ---
[orxSTRUCTURE](./orxSTRUCTURE.md)  | [orxSTRUCTURE](./orxSTRUCTURE.md) 

* C signature:

```c
  orxSTRUCTURE * orxStructure_GetNext(const void *_pStructure)
```

---

### **`orxOBJECT:getNextChild`**

* Signature:

```lua
r1 = getNextChild(child, structureid)
```

* Description:

> Gets object's next child structure of a given type \(camera, object or spawner\). See orxObject_SetOwner\(\) and orxObject_SetParent\(\) for a comparison of ownership and parenthood in Orx. See orxObject_GetChild\(\)/orxObject_GetSibling\(\) if you want to only consider children objects. This function is typically used to iterate over the children of an object. For example, iterating over the immediate children cameras: @code for\([orxCAMERA](./orxCAMERA.md) \*pstChild = orxCAMERA\(orxObject_GetNextChild\(pstObject, orxNULL, orxSTRUCTURE_ID_CAMERA\)\); pstChild != orxNULL; pstChild = orxCAMERA\(orxObject_GetNextChild\(pstObject, pstChild, orxSTRUCTURE_ID_CAMERA\)\)\) { DoSomethingWithCamera\(pstChild\); } @endcode

* Params:

name | type | description 
--- | --- | ---
child | void\* | Concerned child to retrieve the next sibling, nil to retrieve the first child
structureid | [orxSTRUCTURE_ID](../enums.md#orxstructure_id)  | ID of the structure to consider (camera, spawner, object or frame)

* Returns:

type | description 
--- | ---
[orxSTRUCTURE](./orxSTRUCTURE.md)  | Next child/sibling structure \(camera, spawner, object or frame\) / nil

* C signature:

```c
  orxSTRUCTURE * orxObject_GetNextChild(const orxOBJECT *_pstObject, void *_pChild, orxSTRUCTURE_ID _eStructureID)
```

---

### **`orxOBJECT:getOrigin`**

* Signature:

```lua
r1 = getOrigin()
```

* Description:

> Get object origin. See orxObject_SetOrigin\(\) for a more detailed explanation.

* Params:

* Returns:

type | description 
--- | ---
[orxVECTOR](./orxVECTOR.md)  | [orxVECTOR](./orxVECTOR.md) / nil

* C signature:

```c
  orxVECTOR * orxObject_GetOrigin(const orxOBJECT *_pstObject, orxVECTOR *_pvOrigin)
```

---

### **`orxOBJECT:getOwnedChild`**

* Signature:

```lua
r1 = getOwnedChild()
```

* Description:

> Gets object's first owned child \(only if created with a config ChildList / has an owner set with orxObject_SetOwner\) see orxObject_SetOwner\(\) and orxObject_SetParent\(\) for a comparison of ownership and parenthood in Orx. \* This function is typically used to iterate over the owned children of an object. For example; @code for\([orxOBJECT](./orxOBJECT.md) \* pstChild = orxObject_GetOwnedChild\(pstObject\); pstChild; pstChild = orxObject_GetOwnedSibling\(pstChild\)\) { do_something\(pstChild\); } @endcode

* Params:

* Returns:

type | description 
--- | ---
[orxOBJECT](./orxOBJECT.md)  | First owned child object / nil

* C signature:

```c
  orxOBJECT * orxObject_GetOwnedChild(const orxOBJECT *_pstObject)
```

---

### **`orxOBJECT:getOwnedSibling`**

* Signature:

```lua
r1 = getOwnedSibling()
```

* Description:

> Gets object's next owned sibling \(only if created with a config ChildList / has an owner set with orxObject_SetOwner\) This function is typically used to iterate over the owned children of an object, see orxObject_GetOwnedChild\(\) for an example.

* Params:

* Returns:

type | description 
--- | ---
[orxOBJECT](./orxOBJECT.md)  | Next sibling object / nil

* C signature:

```c
  orxOBJECT * orxObject_GetOwnedSibling(const orxOBJECT *_pstObject)
```

---

### **`orxOBJECT:getOwner`**

* Signature:

```lua
r1 = getOwner()
```

* Description:

> Gets object's owner. See orxObject_SetOwner\(\).

* Params:

* Returns:

type | description 
--- | ---
[orxSTRUCTURE](./orxSTRUCTURE.md)  | Owner / nil

* C signature:

```c
  orxSTRUCTURE * orxObject_GetOwner(const orxOBJECT *_pstObject)
```

---

### **`orxOBJECT:getParent`**

* Signature:

```lua
r1 = getParent()
```

* Description:

> Gets object's parent. See orxObject_SetParent\(\) for a more detailed explanation.

* Params:

* Returns:

type | description 
--- | ---
[orxSTRUCTURE](./orxSTRUCTURE.md)  | Parent \(object, spawner, camera or frame\) / nil

* C signature:

```c
  orxSTRUCTURE * orxObject_GetParent(const orxOBJECT *_pstObject)
```

---

### **`orxOBJECT:getPivot`**

* Signature:

```lua
r1 = getPivot()
```

* Description:

> Get object pivot. See orxObject_SetPivot\(\) for a more detailed explanation.

* Params:

* Returns:

type | description 
--- | ---
[orxVECTOR](./orxVECTOR.md)  | [orxVECTOR](./orxVECTOR.md) / nil

* C signature:

```c
  orxVECTOR * orxObject_GetPivot(const orxOBJECT *_pstObject, orxVECTOR *_pvPivot)
```

---

### **`orxOBJECT:getPosition`**

* Signature:

```lua
r1 = getPosition()
```

* Description:

> Get object position. See orxObject_SetPosition\(\).

* Params:

* Returns:

type | description 
--- | ---
[orxVECTOR](./orxVECTOR.md)  | [orxVECTOR](./orxVECTOR.md) / nil

* C signature:

```c
  orxVECTOR * orxObject_GetPosition(const orxOBJECT *_pstObject, orxVECTOR *_pvPosition)
```

---

### **`orxOBJECT:getPrevious`**

* Signature:

```lua
r1 = getPrevious()
```

* Description:

> Gets structure list previous

* Params:

* Returns:

type | description 
--- | ---
[orxSTRUCTURE](./orxSTRUCTURE.md)  | [orxSTRUCTURE](./orxSTRUCTURE.md) 

* C signature:

```c
  orxSTRUCTURE * orxStructure_GetPrevious(const void *_pStructure)
```

---

### **`orxOBJECT:getRefCount`**

* Signature:

```lua
r1 = getRefCount()
```

* Description:

> Gets structure reference count

* Params:

* Returns:

type | description 
--- | ---
integer | integer \(u32\)

* C signature:

```c
  orxU32 orxStructure_GetRefCount(const void *_pStructure)
```

---

### **`orxOBJECT:getRelativeSpeed`**

* Signature:

```lua
r1 = getRelativeSpeed()
```

* Description:

> Gets an object relative speed.

* Params:

* Returns:

type | description 
--- | ---
[orxVECTOR](./orxVECTOR.md)  | Object relative speed / nil

* C signature:

```c
  orxVECTOR * orxObject_GetRelativeSpeed(const orxOBJECT *_pstObject, orxVECTOR *_pvRelativeSpeed)
```

---

### **`orxOBJECT:getRepeat`**

* Signature:

```lua
r1, r2, r3 = getRepeat()
```

* Description:

> Gets object repeat \(wrap\) values.

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure
number | X-axis repeat value
number | Y-axis repeat value

* C signature:

```c
  orxSTATUS  orxObject_GetRepeat(const orxOBJECT *_pstObject, orxFLOAT *_pfRepeatX, orxFLOAT *_pfRepeatY)
```

---

### **`orxOBJECT:getRotation`**

* Signature:

```lua
r1 = getRotation()
```

* Description:

> Get object rotation. See orxObject_SetRotation\(\).

* Params:

* Returns:

type | description 
--- | ---
number | number \(radians\)

* C signature:

```c
  orxFLOAT  orxObject_GetRotation(const orxOBJECT *_pstObject)
```

---

### **`orxOBJECT:getScale`**

* Signature:

```lua
r1 = getScale()
```

* Description:

> Get object scale. See orxObject_SetScale\(\).

* Params:

* Returns:

type | description 
--- | ---
[orxVECTOR](./orxVECTOR.md)  | [orxVECTOR](./orxVECTOR.md) / nil

* C signature:

```c
  orxVECTOR * orxObject_GetScale(const orxOBJECT *_pstObject, orxVECTOR *_pvScale)
```

---

### **`orxOBJECT:getShaderPointer`**

* Signature:

```lua
r1 = getShaderPointer()
```

* Description:

> Get the [orxSHADERPOINTER](./orxSHADERPOINTER.md) linked to the [orxSTRUCTURE](./orxSTRUCTURE.md) 

* Params:

* Returns:

type | description 
--- | ---
[orxSHADERPOINTER](./orxSHADERPOINTER.md)  | The [orxSHADERPOINTER](./orxSHADERPOINTER.md) or nil

* C signature:

```c
#define orxOBJECT_GET_STRUCTURE(OBJECT, TYPE)
```

---

### **`orxOBJECT:getSibling`**

* Signature:

```lua
r1 = getSibling()
```

* Description:

> Gets object's next sibling object. This function is typically used for iterating over the children objects of an object, see orxObject_GetChild\(\) for an iteration example. Note: this function will filter out any camera or spawner and retrieve the next sibling object.

* Params:

* Returns:

type | description 
--- | ---
[orxOBJECT](./orxOBJECT.md)  | Next sibling object / nil

* C signature:

```c
  orxOBJECT * orxObject_GetSibling(const orxOBJECT *_pstObject)
```

---

### **`orxOBJECT:getSize`**

* Signature:

```lua
r1 = getSize()
```

* Description:

> Gets object size. See orxObject_SetSize\(\) for a more detailed explanation.

* Params:

* Returns:

type | description 
--- | ---
[orxVECTOR](./orxVECTOR.md)  | [orxVECTOR](./orxVECTOR.md) / nil

* C signature:

```c
  orxVECTOR * orxObject_GetSize(const orxOBJECT *_pstObject, orxVECTOR *_pvSize)
```

---

### **`orxOBJECT:getSmoothing`**

* Signature:

```lua
r1 = getSmoothing()
```

* Description:

> Gets object smoothing.

* Params:

* Returns:

type | description 
--- | ---
[orxDISPLAY_SMOOTHING](../enums.md#orxdisplay_smoothing)  | Smoothing type \(enabled, default or none\)

* C signature:

```c
  orxDISPLAY_SMOOTHING  orxObject_GetSmoothing(const orxOBJECT *_pstObject)
```

---

### **`orxOBJECT:getSoundPointer`**

* Signature:

```lua
r1 = getSoundPointer()
```

* Description:

> Get the [orxSOUNDPOINTER](./orxSOUNDPOINTER.md) linked to the [orxSTRUCTURE](./orxSTRUCTURE.md) 

* Params:

* Returns:

type | description 
--- | ---
[orxSOUNDPOINTER](./orxSOUNDPOINTER.md)  | The [orxSOUNDPOINTER](./orxSOUNDPOINTER.md) or nil

* C signature:

```c
#define orxOBJECT_GET_STRUCTURE(OBJECT, TYPE)
```

---

### **`orxOBJECT:getSpawner`**

* Signature:

```lua
r1 = getSpawner()
```

* Description:

> Get the [orxSPAWNER](./orxSPAWNER.md) linked to the [orxSTRUCTURE](./orxSTRUCTURE.md) 

* Params:

* Returns:

type | description 
--- | ---
[orxSPAWNER](./orxSPAWNER.md)  | The [orxSPAWNER](./orxSPAWNER.md) or nil

* C signature:

```c
#define orxOBJECT_GET_STRUCTURE(OBJECT, TYPE)
```

---

### **`orxOBJECT:getSpeed`**

* Signature:

```lua
r1 = getSpeed()
```

* Description:

> Gets an object speed.

* Params:

* Returns:

type | description 
--- | ---
[orxVECTOR](./orxVECTOR.md)  | Object speed / nil

* C signature:

```c
  orxVECTOR * orxObject_GetSpeed(const orxOBJECT *_pstObject, orxVECTOR *_pvSpeed)
```

---

### **`orxOBJECT:getTargetAnim`**

* Signature:

```lua
r1 = getTargetAnim()
```

* Description:

> Gets target animation.

* Params:

* Returns:

type | description 
--- | ---
string | Target animation / empty string

* C signature:

```c
  const orxSTRING  orxObject_GetTargetAnim(const orxOBJECT *_pstObject)
```

---

### **`orxOBJECT:getTextString`**

* Signature:

```lua
r1 = getTextString()
```

* Description:

> Gets object text string, if object is associated to a text. (non-const self only)

* Params:

* Returns:

type | description 
--- | ---
string | string / empty string

* C signature:

```c
  const orxSTRING  orxObject_GetTextString(orxOBJECT *_pstObject)
```

---

### **`orxOBJECT:getTimeline`**

* Signature:

```lua
r1 = getTimeline()
```

* Description:

> Get the [orxTIMELINE](./orxTIMELINE.md) linked to the [orxSTRUCTURE](./orxSTRUCTURE.md) 

* Params:

* Returns:

type | description 
--- | ---
[orxTIMELINE](./orxTIMELINE.md)  | The [orxTIMELINE](./orxTIMELINE.md) or nil

* C signature:

```c
#define orxOBJECT_GET_STRUCTURE(OBJECT, TYPE)
```

---

### **`orxOBJECT:getUserData`**

* Signature:

```lua
r1 = getUserData()
```

* Description:

> Gets object's user data.

* Params:

* Returns:

type | description 
--- | ---
void\* | Stored user data / nil

* C signature:

```c
  void * orxObject_GetUserData(const orxOBJECT *_pstObject)
```

---

### **`orxOBJECT:getWorkingGraphic`**

* Signature:

```lua
r1 = getWorkingGraphic()
```

* Description:

> Gets object working graphic.

* Params:

* Returns:

type | description 
--- | ---
[orxGRAPHIC](./orxGRAPHIC.md)  | [orxGRAPHIC](./orxGRAPHIC.md) / nil

* C signature:

```c
  orxGRAPHIC * orxObject_GetWorkingGraphic(const orxOBJECT *_pstObject)
```

---

### **`orxOBJECT:getWorkingTexture`**

* Signature:

```lua
r1 = getWorkingTexture()
```

* Description:

> Gets object working texture.

* Params:

* Returns:

type | description 
--- | ---
[orxTEXTURE](./orxTEXTURE.md)  | [orxTEXTURE](./orxTEXTURE.md) / nil

* C signature:

```c
  orxTEXTURE * orxObject_GetWorkingTexture(const orxOBJECT *_pstObject)
```

---

### **`orxOBJECT:getWorldPosition`**

* Signature:

```lua
r1 = getWorldPosition()
```

* Description:

> Get object world position. See orxObject_SetWorldPosition\(\).

* Params:

* Returns:

type | description 
--- | ---
[orxVECTOR](./orxVECTOR.md)  | [orxVECTOR](./orxVECTOR.md) / nil

* C signature:

```c
  orxVECTOR * orxObject_GetWorldPosition(const orxOBJECT *_pstObject, orxVECTOR *_pvPosition)
```

---

### **`orxOBJECT:getWorldRotation`**

* Signature:

```lua
r1 = getWorldRotation()
```

* Description:

> Get object world rotation. See orxObject_SetWorldRotation\(\).

* Params:

* Returns:

type | description 
--- | ---
number | number \(radians\)

* C signature:

```c
  orxFLOAT  orxObject_GetWorldRotation(const orxOBJECT *_pstObject)
```

---

### **`orxOBJECT:getWorldScale`**

* Signature:

```lua
r1 = getWorldScale()
```

* Description:

> Gets object world scale. See orxObject_SetWorldScale\(\).

* Params:

* Returns:

type | description 
--- | ---
[orxVECTOR](./orxVECTOR.md)  | [orxVECTOR](./orxVECTOR.md) / nil

* C signature:

```c
  orxVECTOR * orxObject_GetWorldScale(const orxOBJECT *_pstObject, orxVECTOR *_pvScale)
```

---

### **`orxOBJECT:hasBlendMode`**

* Signature:

```lua
r1 = hasBlendMode()
```

* Description:

> Object has blend mode accessor?

* Params:

* Returns:

type | description 
--- | ---
boolean | true / false

* C signature:

```c
  orxBOOL  orxObject_HasBlendMode(const orxOBJECT *_pstObject)
```

---

### **`orxOBJECT:hasColor`**

* Signature:

```lua
r1 = hasColor()
```

* Description:

> Object has color accessor?

* Params:

* Returns:

type | description 
--- | ---
boolean | true / false

* C signature:

```c
  orxBOOL  orxObject_HasColor(const orxOBJECT *_pstObject)
```

---

### **`orxOBJECT:increaseCount`**

* Signature:

```lua
increaseCount()
```

* Description:

> Increases structure reference count (non-const self only)

* Params:

* Returns:

* C signature:

```c
  void orxStructure_IncreaseCount(void *_pStructure)
```

---

### **`orxOBJECT:isCurrentAnim`**

* Signature:

```lua
r1 = isCurrentAnim(animname)
```

* Description:

> Is current animation test.

* Params:

name | type | description 
--- | --- | ---
animname | string | Animation name (config's one) to test

* Returns:

type | description 
--- | ---
boolean | true / false

* C signature:

```c
  orxBOOL  orxObject_IsCurrentAnim(const orxOBJECT *_pstObject, const orxSTRING _zAnimName)
```

---

### **`orxOBJECT:isEnabled`**

* Signature:

```lua
r1 = isEnabled()
```

* Description:

> Is object enabled?

* Params:

* Returns:

type | description 
--- | ---
boolean | true if enabled, false otherwise

* C signature:

```c
  orxBOOL  orxObject_IsEnabled(const orxOBJECT *_pstObject)
```

---

### **`orxOBJECT:isPaused`**

* Signature:

```lua
r1 = isPaused()
```

* Description:

> Is object paused?

* Params:

* Returns:

type | description 
--- | ---
boolean | true if paused, false otherwise

* C signature:

```c
  orxBOOL  orxObject_IsPaused(const orxOBJECT *_pstObject)
```

---

### **`orxOBJECT:isShaderEnabled`**

* Signature:

```lua
r1 = isShaderEnabled()
```

* Description:

> Is an object's shader enabled?

* Params:

* Returns:

type | description 
--- | ---
boolean | true if enabled, false otherwise

* C signature:

```c
  orxBOOL  orxObject_IsShaderEnabled(const orxOBJECT *_pstObject)
```

---

### **`orxOBJECT:isTargetAnim`**

* Signature:

```lua
r1 = isTargetAnim(animname)
```

* Description:

> Is target animation test.

* Params:

name | type | description 
--- | --- | ---
animname | string | Animation name (config's one) to test

* Returns:

type | description 
--- | ---
boolean | true / false

* C signature:

```c
  orxBOOL  orxObject_IsTargetAnim(const orxOBJECT *_pstObject, const orxSTRING _zAnimName)
```

---

### **`orxOBJECT:isTimeLineEnabled`**

* Signature:

```lua
r1 = isTimeLineEnabled()
```

* Description:

> Is an object's timeline enabled?

* Params:

* Returns:

type | description 
--- | ---
boolean | true if enabled, false otherwise

* C signature:

```c
  orxBOOL  orxObject_IsTimeLineEnabled(const orxOBJECT *_pstObject)
```

---

### **`orxOBJECT:linkStructure`**

* Signature:

```lua
r1 = linkStructure(structure)
```

* Description:

> Links a structure to an object. (non-const self only)

* Params:

name | type | description 
--- | --- | ---
structure | [orxSTRUCTURE](./orxSTRUCTURE.md)  | Structure to link

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxObject_LinkStructure(orxOBJECT *_pstObject, orxSTRUCTURE *_pstStructure)
```

---

### **`orxOBJECT:logParents`**

* Signature:

```lua
r1 = logParents()
```

* Description:

> Logs all parents of an object, including their frame data.

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxObject_LogParents(const orxOBJECT *_pstObject)
```

---

### **`orxOBJECT:pause`**

* Signature:

```lua
pause(pause)
```

* Description:

> Pauses/unpauses an object. Note that pausing an object is not recursive, so its children will not be affected, see orxObject_PauseRecursive\(\). (non-const self only)

* Params:

name | type | description 
--- | --- | ---
pause | boolean | Pause / unpause

* Returns:

* C signature:

```c
  void  orxObject_Pause(orxOBJECT *_pstObject, orxBOOL _bPause)
```

---

### **`orxOBJECT:pauseRecursive`**

* Signature:

```lua
pauseRecursive(pause)
```

* Description:

> Pauses/unpauses an object and its owned children. (non-const self only)

* Params:

name | type | description 
--- | --- | ---
pause | boolean | Pause / unpause

* Returns:

* C signature:

```c
  void  orxObject_PauseRecursive(orxOBJECT *_pstObject, orxBOOL _bPause)
```

---

### **`orxOBJECT:play`**

* Signature:

```lua
r1 = play()
```

* Description:

> Plays all the sounds of an object. (non-const self only)

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxObject_Play(orxOBJECT *_pstObject)
```

---

### **`orxOBJECT:removeAllFXs`**

* Signature:

```lua
r1 = removeAllFXs()
```

* Description:

> Removes all FXs. (non-const self only)

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxObject_RemoveAllFXs(orxOBJECT *_pstObject)
```

---

### **`orxOBJECT:removeAllFXsRecursive`**

* Signature:

```lua
r1 = removeAllFXsRecursive()
```

* Description:

> Removes all FXs from an object and its owned children. (non-const self only)

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxObject_RemoveAllFXsRecursive(orxOBJECT *_pstObject)
```

---

### **`orxOBJECT:removeAllFilters`**

* Signature:

```lua
r1 = removeAllFilters()
```

* Description:

> Removes all filters from the sounds of an object. (non-const self only)

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxObject_RemoveAllFilters(orxOBJECT *_pstObject)
```

---

### **`orxOBJECT:removeFX`**

* Signature:

```lua
r1 = removeFX(fxconfigid)
```

* Description:

> Removes an FX using its config ID. (non-const self only)

* Params:

name | type | description 
--- | --- | ---
fxconfigid | string | Config ID of the FX to remove

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxObject_RemoveFX(orxOBJECT *_pstObject, const orxSTRING _zFXConfigID)
```

---

### **`orxOBJECT:removeFXRecursive`**

* Signature:

```lua
removeFXRecursive(fxconfigid)
```

* Description:

> Removes an FX from an object and its owned children. (non-const self only)

* Params:

name | type | description 
--- | --- | ---
fxconfigid | string | Config ID of the FX to remove

* Returns:

* C signature:

```c
  void  orxObject_RemoveFXRecursive(orxOBJECT *_pstObject, const orxSTRING _zFXConfigID)
```

---

### **`orxOBJECT:removeLastFilter`**

* Signature:

```lua
r1 = removeLastFilter()
```

* Description:

> Removes last added filter from the sounds of an object. (non-const self only)

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxObject_RemoveLastFilter(orxOBJECT *_pstObject)
```

---

### **`orxOBJECT:removeShader`**

* Signature:

```lua
r1 = removeShader(shaderconfigid)
```

* Description:

> Removes a shader using its config ID. (non-const self only)

* Params:

name | type | description 
--- | --- | ---
shaderconfigid | string | Config ID of the shader to remove

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxObject_RemoveShader(orxOBJECT *_pstObject, const orxSTRING _zShaderConfigID)
```

---

### **`orxOBJECT:removeShaderRecursive`**

* Signature:

```lua
removeShaderRecursive(shaderconfigid)
```

* Description:

> Removes a shader from an object and its owned children. (non-const self only)

* Params:

name | type | description 
--- | --- | ---
shaderconfigid | string | Config ID of the shader to remove

* Returns:

* C signature:

```c
  void  orxObject_RemoveShaderRecursive(orxOBJECT *_pstObject, const orxSTRING _zShaderConfigID)
```

---

### **`orxOBJECT:removeSound`**

* Signature:

```lua
r1 = removeSound(soundconfigid)
```

* Description:

> Removes a sound using its config ID. (non-const self only)

* Params:

name | type | description 
--- | --- | ---
soundconfigid | string | Config ID of the sound to remove

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxObject_RemoveSound(orxOBJECT *_pstObject, const orxSTRING _zSoundConfigID)
```

---

### **`orxOBJECT:removeTimeLineTrack`**

* Signature:

```lua
r1 = removeTimeLineTrack(trackconfigid)
```

* Description:

> Removes a timeline track using its config ID (non-const self only)

* Params:

name | type | description 
--- | --- | ---
trackconfigid | string | Config ID of the timeline track to remove

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxObject_RemoveTimeLineTrack(orxOBJECT *_pstObject, const orxSTRING _zTrackConfigID)
```

---

### **`orxOBJECT:removeTimeLineTrackRecursive`**

* Signature:

```lua
removeTimeLineTrackRecursive(trackconfigid)
```

* Description:

> Removes a timeline track from an object and its owned children. (non-const self only)

* Params:

name | type | description 
--- | --- | ---
trackconfigid | string | Config ID of the timeline track to remove

* Returns:

* C signature:

```c
  void  orxObject_RemoveTimeLineTrackRecursive(orxOBJECT *_pstObject, const orxSTRING _zTrackConfigID)
```

---

### **`orxOBJECT:setAlpha`**

* Signature:

```lua
r1 = setAlpha(alpha)
```

* Description:

> Sets object alpha. (non-const self only)

* Params:

name | type | description 
--- | --- | ---
alpha | number | Alpha value to set

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxObject_SetAlpha(orxOBJECT *_pstObject, orxFLOAT _fAlpha)
```

---

### **`orxOBJECT:setAlphaRecursive`**

* Signature:

```lua
setAlphaRecursive(alpha)
```

* Description:

> Sets alpha of an object and all its owned children. (non-const self only)

* Params:

name | type | description 
--- | --- | ---
alpha | number | Alpha value to set

* Returns:

* C signature:

```c
  void  orxObject_SetAlphaRecursive(orxOBJECT *_pstObject, orxFLOAT _fAlpha)
```

---

### **`orxOBJECT:setAngularVelocity`**

* Signature:

```lua
r1 = setAngularVelocity(velocity)
```

* Description:

> Sets an object angular velocity. (non-const self only)

* Params:

name | type | description 
--- | --- | ---
velocity | number | Angular velocity to set (radians/seconds)

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxObject_SetAngularVelocity(orxOBJECT *_pstObject, orxFLOAT _fVelocity)
```

---

### **`orxOBJECT:setAnimFrequency`**

* Signature:

```lua
r1 = setAnimFrequency(frequency)
```

* Description:

> Sets an object's relative animation frequency. (non-const self only)

* Params:

name | type | description 
--- | --- | ---
frequency | number | Frequency to set: < 1.0 for slower than initial, > 1.0 for faster than initial

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxObject_SetAnimFrequency(orxOBJECT *_pstObject, orxFLOAT _fFrequency)
```

---

### **`orxOBJECT:setAnimFrequencyRecursive`**

* Signature:

```lua
setAnimFrequencyRecursive(frequency)
```

* Description:

> Sets the relative animation frequency for an object and its owned children. (non-const self only)

* Params:

name | type | description 
--- | --- | ---
frequency | number | Frequency to set: < 1.0 for slower than initial, > 1.0 for faster than initial

* Returns:

* C signature:

```c
  void  orxObject_SetAnimFrequencyRecursive(orxOBJECT *_pstObject, orxFLOAT _fFrequency)
```

---

### **`orxOBJECT:setAnimSet`**

* Signature:

```lua
r1 = setAnimSet(animset)
```

* Description:

> Sets an object animset. (non-const self only)

* Params:

name | type | description 
--- | --- | ---
animset | [orxANIMSET](./orxANIMSET.md)  | Animation set to set / nil

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxObject_SetAnimSet(orxOBJECT *_pstObject, orxANIMSET *_pstAnimSet)
```

---

### **`orxOBJECT:setBlendMode`**

* Signature:

```lua
r1 = setBlendMode(blendmode)
```

* Description:

> Sets object blend mode. (non-const self only)

* Params:

name | type | description 
--- | --- | ---
blendmode | [orxDISPLAY_BLEND_MODE](../enums.md#orxdisplay_blend_mode)  | Blend mode (alpha, multiply, add or none)

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxObject_SetBlendMode(orxOBJECT *_pstObject, orxDISPLAY_BLEND_MODE _eBlendMode)
```

---

### **`orxOBJECT:setBlendModeRecursive`**

* Signature:

```lua
setBlendModeRecursive(blendmode)
```

* Description:

> Sets blend mode of an object and its owned children. (non-const self only)

* Params:

name | type | description 
--- | --- | ---
blendmode | [orxDISPLAY_BLEND_MODE](../enums.md#orxdisplay_blend_mode)  | Blend mode (alpha, multiply, add or none)

* Returns:

* C signature:

```c
  void  orxObject_SetBlendModeRecursive(orxOBJECT *_pstObject, orxDISPLAY_BLEND_MODE _eBlendMode)
```

---

### **`orxOBJECT:setClock`**

* Signature:

```lua
r1 = setClock(clock)
```

* Description:

> Sets associated clock for an object. (non-const self only)

* Params:

name | type | description 
--- | --- | ---
clock | [orxCLOCK](./orxCLOCK.md)  | Clock to associate / nil

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxObject_SetClock(orxOBJECT *_pstObject, orxCLOCK *_pstClock)
```

---

### **`orxOBJECT:setClockRecursive`**

* Signature:

```lua
setClockRecursive(clock)
```

* Description:

> Sets associated clock for an object and its owned children. (non-const self only)

* Params:

name | type | description 
--- | --- | ---
clock | [orxCLOCK](./orxCLOCK.md)  | Clock to associate / nil

* Returns:

* C signature:

```c
  void  orxObject_SetClockRecursive(orxOBJECT *_pstObject, orxCLOCK *_pstClock)
```

---

### **`orxOBJECT:setColor`**

* Signature:

```lua
r1 = setColor(color)
```

* Description:

> Sets object color. (non-const self only)

* Params:

name | type | description 
--- | --- | ---
color | [orxCOLOR\#](./orxCOLOR.md) | Color to set, nil to remove any specific color

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxObject_SetColor(orxOBJECT *_pstObject, const orxCOLOR *_pstColor)
```

---

### **`orxOBJECT:setColorRecursive`**

* Signature:

```lua
setColorRecursive(color)
```

* Description:

> Sets color of an object and all its owned children. (non-const self only)

* Params:

name | type | description 
--- | --- | ---
color | [orxCOLOR\#](./orxCOLOR.md) | Color to set, nil to remove any specific color

* Returns:

* C signature:

```c
  void  orxObject_SetColorRecursive(orxOBJECT *_pstObject, const orxCOLOR *_pstColor)
```

---

### **`orxOBJECT:setCurrentAnim`**

* Signature:

```lua
r1 = setCurrentAnim(animname)
```

* Description:

> Sets current animation for an object. This function switches the currently displayed animation of the object immediately. Compare this with orxObject_SetTargetAnim\(\). (non-const self only)

* Params:

name | type | description 
--- | --- | ---
animname | string | Animation name (config's one) to set / nil

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxObject_SetCurrentAnim(orxOBJECT *_pstObject, const orxSTRING _zAnimName)
```

---

### **`orxOBJECT:setCurrentAnimRecursive`**

* Signature:

```lua
setCurrentAnimRecursive(animname)
```

* Description:

> Sets current animation for an object and its owned children. (non-const self only)

* Params:

name | type | description 
--- | --- | ---
animname | string | Animation name (config's one) to set / nil

* Returns:

* C signature:

```c
  void  orxObject_SetCurrentAnimRecursive(orxOBJECT *_pstObject, const orxSTRING _zAnimName)
```

---

### **`orxOBJECT:setCustomGravity`**

* Signature:

```lua
r1 = setCustomGravity(customgravity)
```

* Description:

> Sets an object custom gravity. (non-const self only)

* Params:

name | type | description 
--- | --- | ---
customgravity | [orxVECTOR\#](./orxVECTOR.md) | Custom gravity to set / nil to remove it

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxObject_SetCustomGravity(orxOBJECT *_pstObject, const orxVECTOR *_pvCustomGravity)
```

---

### **`orxOBJECT:setFXFrequency`**

* Signature:

```lua
r1 = setFXFrequency(frequency)
```

* Description:

> Sets an object's relative FX frequency. (non-const self only)

* Params:

name | type | description 
--- | --- | ---
frequency | number | Frequency to set: < 1.0 for slower than initial, > 1.0 for faster than initial

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxObject_SetFXFrequency(orxOBJECT *_pstObject, orxFLOAT _fFrequency)
```

---

### **`orxOBJECT:setFXFrequencyRecursive`**

* Signature:

```lua
setFXFrequencyRecursive(frequency)
```

* Description:

> Sets the relative FX frequency for an object and its owned children. (non-const self only)

* Params:

name | type | description 
--- | --- | ---
frequency | number | Frequency to set: < 1.0 for slower than initial, > 1.0 for faster than initial

* Returns:

* C signature:

```c
  void  orxObject_SetFXFrequencyRecursive(orxOBJECT *_pstObject, orxFLOAT _fFrequency)
```

---

### **`orxOBJECT:setFlags`**

* Signature:

```lua
setFlags(removeflags)
```

* Description:

> Sets structure flags (non-const self only)

* Params:

name | type | description 
--- | --- | ---
removeflags | integer | Flags to remove

* Returns:

* C signature:

```c
  void orxStructure_SetFlags(void *_pStructure, orxU32 _u32AddFlags, orxU32 _u32RemoveFlags)
```

---

### **`orxOBJECT:setFlip`**

* Signature:

```lua
r1 = setFlip(flipx, flipy)
```

* Description:

> Sets object flipping. (non-const self only)

* Params:

name | type | description 
--- | --- | ---
flipx | boolean | Flip it on X axis
flipy | boolean | Flip it on Y axis

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxObject_SetFlip(orxOBJECT *_pstObject, orxBOOL _bFlipX, orxBOOL _bFlipY)
```

---

### **`orxOBJECT:setGroupID`**

* Signature:

```lua
r1 = setGroupID(groupid)
```

* Description:

> Sets object's group ID. (non-const self only)

* Params:

name | type | description 
--- | --- | ---
groupid | integer | Group ID to set. This is the string ID (see orxString_GetID()) of the object's group name.

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxObject_SetGroupID(orxOBJECT *_pstObject, orxSTRINGID _stGroupID)
```

---

### **`orxOBJECT:setGroupIDRecursive`**

* Signature:

```lua
setGroupIDRecursive(groupid)
```

* Description:

> Sets group ID of an object and all its owned children. (non-const self only)

* Params:

name | type | description 
--- | --- | ---
groupid | integer | Group ID to set. This is the string ID (see orxString_GetID()) of the object's group name.

* Returns:

* C signature:

```c
  void  orxObject_SetGroupIDRecursive(orxOBJECT *_pstObject, orxSTRINGID _stGroupID)
```

---

### **`orxOBJECT:setIgnoreFlags`**

* Signature:

```lua
r1 = setIgnoreFlags(ignoreflags)
```

* Description:

> Sets object's ignore flags. (non-const self only)

* Params:

name | type | description 
--- | --- | ---
ignoreflags | integer | Ignore flags to set (all other ignore flags will get cleared)

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxObject_SetIgnoreFlags(orxOBJECT *_pstObject, orxU32 _u32IgnoreFlags)
```

---

### **`orxOBJECT:setLifeTime`**

* Signature:

```lua
r1 = setLifeTime(lifetime)
```

* Description:

> Sets object lifetime. (non-const self only)

* Params:

name | type | description 
--- | --- | ---
lifetime | number | Lifetime to set, negative value to disable it

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxObject_SetLifeTime(orxOBJECT *_pstObject, orxFLOAT _fLifeTime)
```

---

### **`orxOBJECT:setLiteralIgnoreFlags`**

* Signature:

```lua
r1 = setLiteralIgnoreFlags(ignoreflags)
```

* Description:

> Sets object's ignore flags using literals. (non-const self only)

* Params:

name | type | description 
--- | --- | ---
ignoreflags [in,out] | string | Literals of the ignore flags to set (all other ignore flags will get cleared)

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxObject_SetLiteralIgnoreFlags(orxOBJECT *_pstObject, const orxSTRING _zIgnoreFlags)
```

---

### **`orxOBJECT:setLiteralLifeTime`**

* Signature:

```lua
r1 = setLiteralLifeTime(lifetime)
```

* Description:

> Sets object literal lifetime. (non-const self only)

* Params:

name | type | description 
--- | --- | ---
lifetime | string | Lifetime to set, can be composed of multiple tags, separated by space: anim, child, fx, sound, spawner and track

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxObject_SetLiteralLifeTime(orxOBJECT *_pstObject, const orxSTRING _zLifeTime)
```

---

### **`orxOBJECT:setOrigin`**

* Signature:

```lua
r1 = setOrigin(origin)
```

* Description:

> Sets object origin. This is a convenience wrapper around orxGraphic_SetOrigin\(\). The "origin" of a graphic is essentially what is indicated by the "TextureOrigin" field of a config graphic section. The "origin" together with "size" \(see orxObject_SetSize\(\)\) defines the sprite of an object. (non-const self only)

* Params:

name | type | description 
--- | --- | ---
origin | [orxVECTOR\#](./orxVECTOR.md) | Object origin

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxObject_SetOrigin(orxOBJECT *_pstObject, const orxVECTOR *_pvOrigin)
```

---

### **`orxOBJECT:setOwner`**

* Signature:

```lua
setOwner(owner)
```

* Description:

> Sets owner for an object. Ownership in Orx is only about lifetime management. That is, when an object dies, it also kills its owned children. Compare this with orxObject_SetParent\(\). \* Note that the "ChildList" field of an object's config section implies two things; that the object is both the owner \(orxObject_SetOwner\(\)\) and the parent \(orxObject_SetParent\(\)\) of its owned children. There is an exception to this though; when an object's child has a parent camera, the object is only the owner, and the camera is the parent. (non-const self only)

* Params:

name | type | description 
--- | --- | ---
owner | void\* | Owner to set / orxNULL, if owner is an orxOBJECT, the owned object will be added to it as a children

* Returns:

* C signature:

```c
  void  orxObject_SetOwner(orxOBJECT *_pstObject, void *_pOwner)
```

---

### **`orxOBJECT:setPanning`**

* Signature:

```lua
r1 = setPanning(panning, mix)
```

* Description:

> Sets panning of all sounds of an object. (non-const self only)

* Params:

name | type | description 
--- | --- | ---
panning | number | Sound panning, -1.0f for full left, 0.0f for center, 1.0f for full right
mix | boolean | Left/Right channels will be mixed if true or act like a balance otherwise

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxObject_SetPanning(orxOBJECT *_pstObject, orxFLOAT _fPanning, orxBOOL _bMix)
```

---

### **`orxOBJECT:setParent`**

* Signature:

```lua
r1 = setParent(parent)
```

* Description:

> Sets an object parent \(in the frame hierarchy\). Parenthood in orx is about the transformation \(position, rotation, scale\) of objects. Transformation of objects are compounded in a frame hierarchy. Compare this with orxObject_SetOwner\(\) \* Note that the "ChildList" field of an object's config section implies two things; that the object is both the owner \(orxObject_SetOwner\(\)\) and the parent \(orxObject_SetParent\(\)\) of its children. There is an exception to this though; when an object's child has a parent camera, the object is only the owner, and the camera is the parent. (non-const self only)

* Params:

name | type | description 
--- | --- | ---
parent | void\* | Parent structure to set (object, spawner, camera or frame) / nil

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | orsSTATUS_SUCCESS / failure

* C signature:

```c
  orxSTATUS  orxObject_SetParent(orxOBJECT *_pstObject, void *_pParent)
```

---

### **`orxOBJECT:setPitch`**

* Signature:

```lua
r1 = setPitch(pitch)
```

* Description:

> Sets pitch for all sounds of an object. (non-const self only)

* Params:

name | type | description 
--- | --- | ---
pitch | number | Desired pitch (0.0 - 1.0)

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxObject_SetPitch(orxOBJECT *_pstObject, orxFLOAT _fPitch)
```

---

### **`orxOBJECT:setPivot`**

* Signature:

```lua
r1 = setPivot(pivot)
```

* Description:

> Sets object pivot. This is a convenience wrapper around orxGraphic_SetPivot\(\). The "pivot" is essentially what is indicated by the "Pivot" field of a config graphic section. (non-const self only)

* Params:

name | type | description 
--- | --- | ---
pivot | [orxVECTOR\#](./orxVECTOR.md) | Object pivot

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxObject_SetPivot(orxOBJECT *_pstObject, const orxVECTOR *_pvPivot)
```

---

### **`orxOBJECT:setPosition`**

* Signature:

```lua
r1 = setPosition(position)
```

* Description:

> Sets object position in its parent's reference frame. See orxObject_SetWorldPosition\(\) for setting an object's position in the global reference frame. (non-const self only)

* Params:

name | type | description 
--- | --- | ---
position | [orxVECTOR\#](./orxVECTOR.md) | Object position

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxObject_SetPosition(orxOBJECT *_pstObject, const orxVECTOR *_pvPosition)
```

---

### **`orxOBJECT:setRGB`**

* Signature:

```lua
r1 = setRGB(rgb)
```

* Description:

> Sets object RGB values. (non-const self only)

* Params:

name | type | description 
--- | --- | ---
rgb | [orxVECTOR\#](./orxVECTOR.md) | RGB values to set

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxObject_SetRGB(orxOBJECT *_pstObject, const orxVECTOR *_pvRGB)
```

---

### **`orxOBJECT:setRGBRecursive`**

* Signature:

```lua
setRGBRecursive(rgb)
```

* Description:

> Sets color of an object and all its owned children. (non-const self only)

* Params:

name | type | description 
--- | --- | ---
rgb | [orxVECTOR\#](./orxVECTOR.md) | RGB values to set

* Returns:

* C signature:

```c
  void  orxObject_SetRGBRecursive(orxOBJECT *_pstObject, const orxVECTOR *_pvRGB)
```

---

### **`orxOBJECT:setRelativeSpeed`**

* Signature:

```lua
r1 = setRelativeSpeed(relativespeed)
```

* Description:

> Sets an object speed relative to its rotation/scale. (non-const self only)

* Params:

name | type | description 
--- | --- | ---
relativespeed | [orxVECTOR\#](./orxVECTOR.md) | Relative speed to set

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxObject_SetRelativeSpeed(orxOBJECT *_pstObject, const orxVECTOR *_pvRelativeSpeed)
```

---

### **`orxOBJECT:setRepeat`**

* Signature:

```lua
r1 = setRepeat(repeatx, repeaty)
```

* Description:

> Sets object repeat \(wrap\) values. (non-const self only)

* Params:

name | type | description 
--- | --- | ---
repeatx | number | X-axis repeat value
repeaty | number | Y-axis repeat value

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxObject_SetRepeat(orxOBJECT *_pstObject, orxFLOAT _fRepeatX, orxFLOAT _fRepeatY)
```

---

### **`orxOBJECT:setRotation`**

* Signature:

```lua
r1 = setRotation(rotation)
```

* Description:

> Sets object rotation in its parent's reference frame. See orxObject_SetWorldRotation\(\) for setting an object's rotation in the global reference frame. (non-const self only)

* Params:

name | type | description 
--- | --- | ---
rotation | number | Object rotation (radians)

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxObject_SetRotation(orxOBJECT *_pstObject, orxFLOAT _fRotation)
```

---

### **`orxOBJECT:setScale`**

* Signature:

```lua
r1 = setScale(scale)
```

* Description:

> Sets object scale in its parent's reference frame. See orxObject_SetWorldScale\(\) for setting an object's scale in the global reference frame. See orxObject_SetSize\(\) for a deeper explanation of the "size" of an object. (non-const self only)

* Params:

name | type | description 
--- | --- | ---
scale | [orxVECTOR\#](./orxVECTOR.md) | Object scale vector

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxObject_SetScale(orxOBJECT *_pstObject, const orxVECTOR *_pvScale)
```

---

### **`orxOBJECT:setSize`**

* Signature:

```lua
r1 = setSize(size)
```

* Description:

> Sets object size. For objects that have a graphic attached it's simply a convenience wrapper for orxGraphic_SetSize\(\), but an object can also have a size without a graphic. \* Note the difference between "Scale" and "Size". The size of an object with a non-text graphic is the sprite size in pixels on its texture. The object's effective size for rendering and intersection purposes \(see orxObject_Pick\(\) and friends\) is proportional to its "size" multiplied by its "scale". Another important distinction is that the scale of an object also affects its children \(see orxObject_SetParent\(\) and note the distinction between parenthood and ownership\). (non-const self only)

* Params:

name | type | description 
--- | --- | ---
size | [orxVECTOR\#](./orxVECTOR.md) | Object size

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxObject_SetSize(orxOBJECT *_pstObject, const orxVECTOR *_pvSize)
```

---

### **`orxOBJECT:setSmoothing`**

* Signature:

```lua
r1 = setSmoothing(smoothing)
```

* Description:

> Sets object smoothing. (non-const self only)

* Params:

name | type | description 
--- | --- | ---
smoothing | [orxDISPLAY_SMOOTHING](../enums.md#orxdisplay_smoothing)  | Smoothing type (enabled, default or none)

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxObject_SetSmoothing(orxOBJECT *_pstObject, orxDISPLAY_SMOOTHING _eSmoothing)
```

---

### **`orxOBJECT:setSmoothingRecursive`**

* Signature:

```lua
setSmoothingRecursive(smoothing)
```

* Description:

> Sets smoothing for an object and its owned children. (non-const self only)

* Params:

name | type | description 
--- | --- | ---
smoothing | [orxDISPLAY_SMOOTHING](../enums.md#orxdisplay_smoothing)  | Smoothing type (enabled, default or none)

* Returns:

* C signature:

```c
  void  orxObject_SetSmoothingRecursive(orxOBJECT *_pstObject, orxDISPLAY_SMOOTHING _eSmoothing)
```

---

### **`orxOBJECT:setSpeed`**

* Signature:

```lua
r1 = setSpeed(speed)
```

* Description:

> Sets an object speed. (non-const self only)

* Params:

name | type | description 
--- | --- | ---
speed | [orxVECTOR\#](./orxVECTOR.md) | Speed to set

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxObject_SetSpeed(orxOBJECT *_pstObject, const orxVECTOR *_pvSpeed)
```

---

### **`orxOBJECT:setTargetAnim`**

* Signature:

```lua
r1 = setTargetAnim(animname)
```

* Description:

> Sets target animation for an object. The animations are sequenced on an object according to the animation link graph defined by its AnimationSet. The sequence follows the graph and tries to reach the target animation. Use orxObject_SetCurrentAnim\(\) to switch the animation without using the link graph. (non-const self only)

* Params:

name | type | description 
--- | --- | ---
animname | string | Animation name (config's one) to set / nil

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxObject_SetTargetAnim(orxOBJECT *_pstObject, const orxSTRING _zAnimName)
```

---

### **`orxOBJECT:setTargetAnimRecursive`**

* Signature:

```lua
setTargetAnimRecursive(animname)
```

* Description:

> Sets target animation for an object and its owned children. (non-const self only)

* Params:

name | type | description 
--- | --- | ---
animname | string | Animation name (config's one) to set / nil

* Returns:

* C signature:

```c
  void  orxObject_SetTargetAnimRecursive(orxOBJECT *_pstObject, const orxSTRING _zAnimName)
```

---

### **`orxOBJECT:setTextString`**

* Signature:

```lua
r1 = setTextString(string)
```

* Description:

> Sets object text string, if object is associated to a text. (non-const self only)

* Params:

name | type | description 
--- | --- | ---
string | string | String to set

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxObject_SetTextString(orxOBJECT *_pstObject, const orxSTRING _zString)
```

---

### **`orxOBJECT:setUserData`**

* Signature:

```lua
setUserData(userdata)
```

* Description:

> Sets user data for an object. Orx ignores the user data, this is a mechanism for attaching custom data to be used later by user code. (non-const self only)

* Params:

name | type | description 
--- | --- | ---
userdata | void\* | User data to store / nil

* Returns:

* C signature:

```c
  void  orxObject_SetUserData(orxOBJECT *_pstObject, void *_pUserData)
```

---

### **`orxOBJECT:setVolume`**

* Signature:

```lua
r1 = setVolume(volume)
```

* Description:

> Sets volume for all sounds of an object. (non-const self only)

* Params:

name | type | description 
--- | --- | ---
volume | number | Desired volume (0.0 - 1.0)

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxObject_SetVolume(orxOBJECT *_pstObject, orxFLOAT _fVolume)
```

---

### **`orxOBJECT:setWorldPosition`**

* Signature:

```lua
r1 = setWorldPosition(position)
```

* Description:

> Sets object position in the global reference frame. See orxObject_SetPosition\(\) for setting an object's position in its parent's reference frame. (non-const self only)

* Params:

name | type | description 
--- | --- | ---
position | [orxVECTOR\#](./orxVECTOR.md) | Object world position

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxObject_SetWorldPosition(orxOBJECT *_pstObject, const orxVECTOR *_pvPosition)
```

---

### **`orxOBJECT:setWorldRotation`**

* Signature:

```lua
r1 = setWorldRotation(rotation)
```

* Description:

> Sets object rotation in the global reference frame. See orxObject_SetRotation\(\) for setting an object's rotation in its parent's reference frame. (non-const self only)

* Params:

name | type | description 
--- | --- | ---
rotation | number | Object world rotation (radians)

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxObject_SetWorldRotation(orxOBJECT *_pstObject, orxFLOAT _fRotation)
```

---

### **`orxOBJECT:setWorldScale`**

* Signature:

```lua
r1 = setWorldScale(scale)
```

* Description:

> Sets object scale in the global reference frame. See orxObject_SetScale\(\) for setting an object's scale in its parent's reference frame. (non-const self only)

* Params:

name | type | description 
--- | --- | ---
scale | [orxVECTOR\#](./orxVECTOR.md) | Object world scale vector

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxObject_SetWorldScale(orxOBJECT *_pstObject, const orxVECTOR *_pvScale)
```

---

### **`orxOBJECT:stop`**

* Signature:

```lua
r1 = stop()
```

* Description:

> Stops all the sounds of an object. (non-const self only)

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxObject_Stop(orxOBJECT *_pstObject)
```

---

### **`orxOBJECT:synchronizeFX`**

* Signature:

```lua
r1 = synchronizeFX(model)
```

* Description:

> Synchronizes FXs with another object's ones \(if FXs are not matching on both objects the behavior is undefined\). (non-const self only)

* Params:

name | type | description 
--- | --- | ---
model | [orxOBJECT\#](./orxOBJECT.md) | Model object on which to synchronize FXs

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxObject_SynchronizeFX(orxOBJECT *_pstObject, const orxOBJECT *_pstModel)
```

---

### **`orxOBJECT:testAllFlags`**

* Signature:

```lua
r1 = testAllFlags()
```

* Description:

> Tests all flags against structure ones

* Params:

* Returns:

type | description 
--- | ---
boolean | true / false

* C signature:

```c
  orxBOOL orxStructure_TestAllFlags(const void *_pStructure, orxU32 _u32Flags)
```

---

### **`orxOBJECT:testFlags`**

* Signature:

```lua
r1 = testFlags()
```

* Description:

> Tests flags against structure ones

* Params:

* Returns:

type | description 
--- | ---
boolean | true / false

* C signature:

```c
  orxBOOL orxStructure_TestFlags(const void *_pStructure, orxU32 _u32Flags)
```

---

### **`orxOBJECT:type`**

* Signature:

```lua
r1 = type()
```

* Description:

> get the type name of the lorx userdata

* Params:

* Returns:

type | description 
--- | ---
string | the type name

---

### **`orxOBJECT:unlinkStructure`**

* Signature:

```lua
unlinkStructure(structureid)
```

* Description:

> Unlinks structure from an object, given its structure ID. (non-const self only)

* Params:

name | type | description 
--- | --- | ---
structureid | [orxSTRUCTURE_ID](../enums.md#orxstructure_id)  | ID of structure to unlink

* Returns:

* C signature:

```c
  void  orxObject_UnlinkStructure(orxOBJECT *_pstObject, orxSTRUCTURE_ID _eStructureID)
```

---

### **`orxOBJECT:update`**

* Signature:

```lua
r1 = update(clockinfo)
```

* Description:

> Updates an object. (non-const self only)

* Params:

name | type | description 
--- | --- | ---
clockinfo | [orxCLOCK_INFO\#](./orxCLOCK_INFO.md) | Clock information used to compute new object's state

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxObject_Update(orxOBJECT *_pstObject, const orxCLOCK_INFO *_pstClockInfo)
```

---

