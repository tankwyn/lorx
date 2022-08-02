# type orxFX

> 

## Methods

### **`orxFX:addAlpha`**

* Signature:

```lua
r1 = addAlpha(starttime, endtime, cycleperiod, cyclephase, amplification, acceleration, startalpha, endalpha, curve, pow, flags)
```

* Description:

> Adds alpha to an FX (non-const self only)

* Params:

name | type | description 
--- | --- | ---
starttime | number | Time start
endtime | number | Time end
cycleperiod | number | Cycle period
cyclephase | number | Cycle phase (at start)
amplification | number | Curve linear amplification over time (1.0 for none)
acceleration | number | Curve linear acceleration over time (1.0 for none)
startalpha | number | Starting alpha value
endalpha | number | Ending alpha value
curve | [orxFX_CURVE](../enums.md#orxfx_curve)  | Blending curve type
pow | number | Blending curve exponent
flags | integer | Param flags

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxFX_AddAlpha(orxFX *_pstFX, orxFLOAT _fStartTime, orxFLOAT _fEndTime, orxFLOAT _fCyclePeriod, orxFLOAT _fCyclePhase, orxFLOAT _fAmplification, orxFLOAT _fAcceleration, orxFLOAT _fStartAlpha, orxFLOAT _fEndAlpha, orxFX_CURVE _eCurve, orxFLOAT _fPow, orxU32 _u32Flags)
```

---

### **`orxFX:addHSL`**

* Signature:

```lua
r1 = addHSL(starttime, endtime, cycleperiod, cyclephase, amplification, acceleration, startcolor, endcolor, curve, pow, flags)
```

* Description:

> Adds HSL color to an FX (non-const self only)

* Params:

name | type | description 
--- | --- | ---
starttime | number | Time start
endtime | number | Time end
cycleperiod | number | Cycle period
cyclephase | number | Cycle phase (at start)
amplification | number | Curve linear amplification over time (1.0 for none)
acceleration | number | Curve linear acceleration over time (1.0 for none)
startcolor | [orxVECTOR](./orxVECTOR.md)  | Starting color value
endcolor | [orxVECTOR](./orxVECTOR.md)  | Ending color value
curve | [orxFX_CURVE](../enums.md#orxfx_curve)  | Blending curve type
pow | number | Blending curve exponent
flags | integer | Param flags

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxFX_AddHSL(orxFX *_pstFX, orxFLOAT _fStartTime, orxFLOAT _fEndTime, orxFLOAT _fCyclePeriod, orxFLOAT _fCyclePhase, orxFLOAT _fAmplification, orxFLOAT _fAcceleration, orxVECTOR *_pvStartColor, orxVECTOR *_pvEndColor, orxFX_CURVE _eCurve, orxFLOAT _fPow, orxU32 _u32Flags)
```

---

### **`orxFX:addHSV`**

* Signature:

```lua
r1 = addHSV(starttime, endtime, cycleperiod, cyclephase, amplification, acceleration, startcolor, endcolor, curve, pow, flags)
```

* Description:

> Adds HSV color to an FX (non-const self only)

* Params:

name | type | description 
--- | --- | ---
starttime | number | Time start
endtime | number | Time end
cycleperiod | number | Cycle period
cyclephase | number | Cycle phase (at start)
amplification | number | Curve linear amplification over time (1.0 for none)
acceleration | number | Curve linear acceleration over time (1.0 for none)
startcolor | [orxVECTOR](./orxVECTOR.md)  | Starting color value
endcolor | [orxVECTOR](./orxVECTOR.md)  | Ending color value
curve | [orxFX_CURVE](../enums.md#orxfx_curve)  | Blending curve type
pow | number | Blending curve exponent
flags | integer | Param flags

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxFX_AddHSV(orxFX *_pstFX, orxFLOAT _fStartTime, orxFLOAT _fEndTime, orxFLOAT _fCyclePeriod, orxFLOAT _fCyclePhase, orxFLOAT _fAmplification, orxFLOAT _fAcceleration, orxVECTOR *_pvStartColor, orxVECTOR *_pvEndColor, orxFX_CURVE _eCurve, orxFLOAT _fPow, orxU32 _u32Flags)
```

---

### **`orxFX:addPitch`**

* Signature:

```lua
r1 = addPitch(starttime, endtime, cycleperiod, cyclephase, amplification, acceleration, startpitch, endpitch, curve, pow, flags)
```

* Description:

> Adds pitch to an FX (non-const self only)

* Params:

name | type | description 
--- | --- | ---
starttime | number | Time start
endtime | number | Time end
cycleperiod | number | Cycle period
cyclephase | number | Cycle phase (at start)
amplification | number | Curve linear amplification over time (1.0 for none)
acceleration | number | Curve linear acceleration over time (1.0 for none)
startpitch | number | Starting pitch value
endpitch | number | Ending pitch value
curve | [orxFX_CURVE](../enums.md#orxfx_curve)  | Blending curve type
pow | number | Blending curve exponent
flags | integer | Param flags

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxFX_AddPitch(orxFX *_pstFX, orxFLOAT _fStartTime, orxFLOAT _fEndTime, orxFLOAT _fCyclePeriod, orxFLOAT _fCyclePhase, orxFLOAT _fAmplification, orxFLOAT _fAcceleration, orxFLOAT _fStartPitch, orxFLOAT _fEndPitch, orxFX_CURVE _eCurve, orxFLOAT _fPow, orxU32 _u32Flags)
```

---

### **`orxFX:addPosition`**

* Signature:

```lua
r1 = addPosition(starttime, endtime, cycleperiod, cyclephase, amplification, acceleration, starttranslation, endtranslation, curve, pow, flags)
```

* Description:

> Adds position to an FX (non-const self only)

* Params:

name | type | description 
--- | --- | ---
starttime | number | Time start
endtime | number | Time end
cycleperiod | number | Cycle period
cyclephase | number | Cycle phase (at start)
amplification | number | Curve linear amplification over time (1.0 for none)
acceleration | number | Curve linear acceleration over time (1.0 for none)
starttranslation | [orxVECTOR\#](./orxVECTOR.md) | Starting position value
endtranslation | [orxVECTOR\#](./orxVECTOR.md) | Ending position value
curve | [orxFX_CURVE](../enums.md#orxfx_curve)  | Blending curve type
pow | number | Blending curve exponent
flags | integer | Param flags

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxFX_AddPosition(orxFX *_pstFX, orxFLOAT _fStartTime, orxFLOAT _fEndTime, orxFLOAT _fCyclePeriod, orxFLOAT _fCyclePhase, orxFLOAT _fAmplification, orxFLOAT _fAcceleration, const orxVECTOR *_pvStartTranslation, const orxVECTOR *_pvEndTranslation, orxFX_CURVE _eCurve, orxFLOAT _fPow, orxU32 _u32Flags)
```

---

### **`orxFX:addRGB`**

* Signature:

```lua
r1 = addRGB(starttime, endtime, cycleperiod, cyclephase, amplification, acceleration, startcolor, endcolor, curve, pow, flags)
```

* Description:

> Adds RGB color to an FX (non-const self only)

* Params:

name | type | description 
--- | --- | ---
starttime | number | Time start
endtime | number | Time end
cycleperiod | number | Cycle period
cyclephase | number | Cycle phase (at start)
amplification | number | Curve linear amplification over time (1.0 for none)
acceleration | number | Curve linear acceleration over time (1.0 for none)
startcolor | [orxVECTOR](./orxVECTOR.md)  | Starting color value
endcolor | [orxVECTOR](./orxVECTOR.md)  | Ending color value
curve | [orxFX_CURVE](../enums.md#orxfx_curve)  | Blending curve type
pow | number | Blending curve exponent
flags | integer | Param flags

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxFX_AddRGB(orxFX *_pstFX, orxFLOAT _fStartTime, orxFLOAT _fEndTime, orxFLOAT _fCyclePeriod, orxFLOAT _fCyclePhase, orxFLOAT _fAmplification, orxFLOAT _fAcceleration, orxVECTOR *_pvStartColor, orxVECTOR *_pvEndColor, orxFX_CURVE _eCurve, orxFLOAT _fPow, orxU32 _u32Flags)
```

---

### **`orxFX:addRotation`**

* Signature:

```lua
r1 = addRotation(starttime, endtime, cycleperiod, cyclephase, amplification, acceleration, startrotation, endrotation, curve, pow, flags)
```

* Description:

> Adds rotation to an FX (non-const self only)

* Params:

name | type | description 
--- | --- | ---
starttime | number | Time start
endtime | number | Time end
cycleperiod | number | Cycle period
cyclephase | number | Cycle phase (at start)
amplification | number | Curve linear amplification over time (1.0 for none)
acceleration | number | Curve linear acceleration over time (1.0 for none)
startrotation | number | Starting rotation value (radians)
endrotation | number | Ending rotation value (radians)
curve | [orxFX_CURVE](../enums.md#orxfx_curve)  | Blending curve type
pow | number | Blending curve exponent
flags | integer | Param flags

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxFX_AddRotation(orxFX *_pstFX, orxFLOAT _fStartTime, orxFLOAT _fEndTime, orxFLOAT _fCyclePeriod, orxFLOAT _fCyclePhase, orxFLOAT _fAmplification, orxFLOAT _fAcceleration, orxFLOAT _fStartRotation, orxFLOAT _fEndRotation, orxFX_CURVE _eCurve, orxFLOAT _fPow, orxU32 _u32Flags)
```

---

### **`orxFX:addScale`**

* Signature:

```lua
r1 = addScale(starttime, endtime, cycleperiod, cyclephase, amplification, acceleration, startscale, endscale, curve, pow, flags)
```

* Description:

> Adds scale to an FX (non-const self only)

* Params:

name | type | description 
--- | --- | ---
starttime | number | Time start
endtime | number | Time end
cycleperiod | number | Cycle period
cyclephase | number | Cycle phase (at start)
amplification | number | Curve linear amplification over time (1.0 for none)
acceleration | number | Curve linear acceleration over time (1.0 for none)
startscale | [orxVECTOR\#](./orxVECTOR.md) | Starting scale value
endscale | [orxVECTOR\#](./orxVECTOR.md) | Ending scale value
curve | [orxFX_CURVE](../enums.md#orxfx_curve)  | Blending curve type
pow | number | Blending curve exponent
flags | integer | Param flags

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxFX_AddScale(orxFX *_pstFX, orxFLOAT _fStartTime, orxFLOAT _fEndTime, orxFLOAT _fCyclePeriod, orxFLOAT _fCyclePhase, orxFLOAT _fAmplification, orxFLOAT _fAcceleration, const orxVECTOR *_pvStartScale, const orxVECTOR *_pvEndScale, orxFX_CURVE _eCurve, orxFLOAT _fPow, orxU32 _u32Flags)
```

---

### **`orxFX:addSlotFromConfig`**

* Signature:

```lua
r1 = addSlotFromConfig(slotid)
```

* Description:

> Adds a slot to an FX from config (non-const self only)

* Params:

name | type | description 
--- | --- | ---
slotid | string | Config ID

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | 

* C signature:

```c
  orxSTATUS  orxFX_AddSlotFromConfig(orxFX *_pstFX, const orxSTRING _zSlotID)
```

---

### **`orxFX:addSpeed`**

* Signature:

```lua
r1 = addSpeed(starttime, endtime, cycleperiod, cyclephase, amplification, acceleration, startspeed, endspeed, curve, pow, flags)
```

* Description:

> Adds speed to an FX (non-const self only)

* Params:

name | type | description 
--- | --- | ---
starttime | number | Time start
endtime | number | Time end
cycleperiod | number | Cycle period
cyclephase | number | Cycle phase (at start)
amplification | number | Curve linear amplification over time (1.0 for none)
acceleration | number | Curve linear acceleration over time (1.0 for none)
startspeed | [orxVECTOR\#](./orxVECTOR.md) | Starting speed value
endspeed | [orxVECTOR\#](./orxVECTOR.md) | Ending speed value
curve | [orxFX_CURVE](../enums.md#orxfx_curve)  | Blending curve type
pow | number | Blending curve exponent
flags | integer | Param flags

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxFX_AddSpeed(orxFX *_pstFX, orxFLOAT _fStartTime, orxFLOAT _fEndTime, orxFLOAT _fCyclePeriod, orxFLOAT _fCyclePhase, orxFLOAT _fAmplification, orxFLOAT _fAcceleration, const orxVECTOR *_pvStartSpeed, const orxVECTOR *_pvEndSpeed, orxFX_CURVE _eCurve, orxFLOAT _fPow, orxU32 _u32Flags)
```

---

### **`orxFX:addVolume`**

* Signature:

```lua
r1 = addVolume(starttime, endtime, cycleperiod, cyclephase, amplification, acceleration, startvolume, endvolume, curve, pow, flags)
```

* Description:

> Adds volume to an FX (non-const self only)

* Params:

name | type | description 
--- | --- | ---
starttime | number | Time start
endtime | number | Time end
cycleperiod | number | Cycle period
cyclephase | number | Cycle phase (at start)
amplification | number | Curve linear amplification over time (1.0 for none)
acceleration | number | Curve linear acceleration over time (1.0 for none)
startvolume | number | Starting volume value
endvolume | number | Ending volume value
curve | [orxFX_CURVE](../enums.md#orxfx_curve)  | Blending curve type
pow | number | Blending curve exponent
flags | integer | Param flags

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxFX_AddVolume(orxFX *_pstFX, orxFLOAT _fStartTime, orxFLOAT _fEndTime, orxFLOAT _fCyclePeriod, orxFLOAT _fCyclePhase, orxFLOAT _fAmplification, orxFLOAT _fAcceleration, orxFLOAT _fStartVolume, orxFLOAT _fEndVolume, orxFX_CURVE _eCurve, orxFLOAT _fPow, orxU32 _u32Flags)
```

---

### **`orxFX:addr`**

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

### **`orxFX:aeq`**

* Signature:

```lua
r1 = aeq(u)
```

* Description:

> check if the c memory address of this lorx userdata equals to another

* Params:

name | type | description 
--- | --- | ---
u | any lorx utype | another lorx userdata

* Returns:

type | description 
--- | ---
boolean | true or false

---

### **`orxFX:apply`**

* Signature:

```lua
r1 = apply(object, starttime, endtime)
```

* Description:

> Applies FX on object

* Params:

name | type | description 
--- | --- | ---
object | [orxOBJECT](./orxOBJECT.md)  | Object on which to apply the FX
starttime | number | FX local application start time
endtime | number | FX local application end time

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxFX_Apply(const orxFX *_pstFX, orxOBJECT *_pstObject, orxFLOAT _fStartTime, orxFLOAT _fEndTime)
```

---

### **`orxFX:asVoid`**

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

### **`orxFX:decreaseCount`**

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

### **`orxFX:delete`**

* Signature:

```lua
r1 = delete()
```

* Description:

> Deletes an FX (non-const self only)

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxFX_Delete(orxFX *_pstFX)
```

---

### **`orxFX:enable`**

* Signature:

```lua
enable(enable)
```

* Description:

> Enables/disables an FX (non-const self only)

* Params:

name | type | description 
--- | --- | ---
enable | boolean | Enable / disable

* Returns:

* C signature:

```c
  void  orxFX_Enable(orxFX *_pstFX, orxBOOL _bEnable)
```

---

### **`orxFX:getChild`**

* Signature:

```lua
r1 = getChild()
```

* Description:

> Gets structure tree child

* Params:

* Returns:

type | description 
--- | ---
[orxSTRUCTURE](./orxSTRUCTURE.md)  | [orxSTRUCTURE](./orxSTRUCTURE.md) 

* C signature:

```c
  orxSTRUCTURE * orxStructure_GetChild(const void *_pStructure)
```

---

### **`orxFX:getDuration`**

* Signature:

```lua
r1 = getDuration()
```

* Description:

> Gets FX duration

* Params:

* Returns:

type | description 
--- | ---
number | number

* C signature:

```c
  orxFLOAT  orxFX_GetDuration(const orxFX *_pstFX)
```

---

### **`orxFX:getFlags`**

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

### **`orxFX:getGUID`**

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

### **`orxFX:getID`**

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

### **`orxFX:getName`**

* Signature:

```lua
r1 = getName()
```

* Description:

> Gets FX name

* Params:

* Returns:

type | description 
--- | ---
string | string / empty string

* C signature:

```c
  const orxSTRING  orxFX_GetName(const orxFX *_pstFX)
```

---

### **`orxFX:getNext`**

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

### **`orxFX:getOwner`**

* Signature:

```lua
r1 = getOwner()
```

* Description:

> Gets structure's owner

* Params:

* Returns:

type | description 
--- | ---
[orxSTRUCTURE](./orxSTRUCTURE.md)  | [orxSTRUCTURE](./orxSTRUCTURE.md) / nil if not found/alive

* C signature:

```c
  orxSTRUCTURE * orxStructure_GetOwner(const void *_pStructure)
```

---

### **`orxFX:getParent`**

* Signature:

```lua
r1 = getParent()
```

* Description:

> Gets structure tree parent

* Params:

* Returns:

type | description 
--- | ---
[orxSTRUCTURE](./orxSTRUCTURE.md)  | [orxSTRUCTURE](./orxSTRUCTURE.md) 

* C signature:

```c
  orxSTRUCTURE * orxStructure_GetParent(const void *_pStructure)
```

---

### **`orxFX:getPrevious`**

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

### **`orxFX:getRefCount`**

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

### **`orxFX:getSibling`**

* Signature:

```lua
r1 = getSibling()
```

* Description:

> Gets structure tree sibling

* Params:

* Returns:

type | description 
--- | ---
[orxSTRUCTURE](./orxSTRUCTURE.md)  | [orxSTRUCTURE](./orxSTRUCTURE.md) 

* C signature:

```c
  orxSTRUCTURE * orxStructure_GetSibling(const void *_pStructure)
```

---

### **`orxFX:getStagger`**

* Signature:

```lua
r1, r2 = getStagger()
```

* Description:

> Get FX stagger / offset

* Params:

* Returns:

type | description 
--- | ---
boolean | true if staggered, false otherwise
number | If non null, will contain the initial offset

* C signature:

```c
  orxBOOL  orxFX_GetStagger(const orxFX *_pstFX, orxFLOAT *_pfOffset)
```

---

### **`orxFX:increaseCount`**

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

### **`orxFX:isEnabled`**

* Signature:

```lua
r1 = isEnabled()
```

* Description:

> Is FX enabled?

* Params:

* Returns:

type | description 
--- | ---
boolean | true if enabled, false otherwise

* C signature:

```c
  orxBOOL  orxFX_IsEnabled(const orxFX *_pstFX)
```

---

### **`orxFX:isLooping`**

* Signature:

```lua
r1 = isLooping()
```

* Description:

> Is FX looping

* Params:

* Returns:

type | description 
--- | ---
boolean | true if looping, false otherwise

* C signature:

```c
  orxBOOL  orxFX_IsLooping(const orxFX *_pstFX)
```

---

### **`orxFX:loop`**

* Signature:

```lua
r1 = loop(loop)
```

* Description:

> Set FX loop property (non-const self only)

* Params:

name | type | description 
--- | --- | ---
loop | boolean | Loop / don't loop

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxFX_Loop(orxFX *_pstFX, orxBOOL _bLoop)
```

---

### **`orxFX:setFlags`**

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

### **`orxFX:setOwner`**

* Signature:

```lua
r1 = setOwner()
```

* Description:

> Sets structure owner (non-const self only)

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxStructure_SetOwner(void *_pStructure, void *_pOwner)
```

---

### **`orxFX:setParent`**

* Signature:

```lua
r1 = setParent()
```

* Description:

> Sets structure tree parent (non-const self only)

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxStructure_SetParent(void *_pStructure, void *_phParent)
```

---

### **`orxFX:setStagger`**

* Signature:

```lua
r1 = setStagger(stagger, offset)
```

* Description:

> Sets FX stagger / offset (non-const self only)

* Params:

name | type | description 
--- | --- | ---
stagger | boolean | If true, this FX will be added after all current FXs
offset | number | Initial offset, in seconds. Cannot result in a negative start time

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxFX_SetStagger(orxFX *_pstFX, orxBOOL _bStagger, orxFLOAT _fOffset)
```

---

### **`orxFX:testAllFlags`**

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

### **`orxFX:testFlags`**

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

### **`orxFX:type`**

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

### **`orxFX:update`**

* Signature:

```lua
r1 = update(clockinfo)
```

* Description:

> Updates structure if update function was registered for the structure type (non-const self only)

* Params:

name | type | description 
--- | --- | ---
clockinfo | [orxCLOCK_INFO\#](./orxCLOCK_INFO.md) | Update associated clock info

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxStructure_Update(void *_pStructure, const void *_phCaller, const orxCLOCK_INFO *_pstClockInfo)
```

---

