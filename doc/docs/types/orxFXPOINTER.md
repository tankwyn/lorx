# type orxFXPOINTER

> 

## Methods

### **`orxFXPOINTER:addDelayedFX`**

* Signature:

```lua
r1 = addDelayedFX(fx, delay)
```

* Description:

> Adds a delayed FX (non-const self only)

* Params:

name | type | description 
--- | --- | ---
fx | [orxFX](./orxFX.md)  | FX to add
delay | number | Delay time, ignored if the FX is staggered and other FXs are already present

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxFXPointer_AddDelayedFX(orxFXPOINTER *_pstFXPointer, orxFX *_pstFX, orxFLOAT _fDelay)
```

---

### **`orxFXPOINTER:addDelayedFXFromConfig`**

* Signature:

```lua
r1 = addDelayedFXFromConfig(fxconfigid, delay)
```

* Description:

> Adds a delayed FX using its config ID (non-const self only)

* Params:

name | type | description 
--- | --- | ---
fxconfigid | string | Config ID of the FX to add
delay | number | Delay time, ignored if the FX is staggered and other FXs are already present

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxFXPointer_AddDelayedFXFromConfig(orxFXPOINTER *_pstFXPointer, const orxSTRING _zFXConfigID, orxFLOAT _fDelay)
```

---

### **`orxFXPOINTER:addFX`**

* Signature:

```lua
r1 = addFX(fx)
```

* Description:

> Adds an FX (non-const self only)

* Params:

name | type | description 
--- | --- | ---
fx | [orxFX](./orxFX.md)  | FX to add

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxFXPointer_AddFX(orxFXPOINTER *_pstFXPointer, orxFX *_pstFX)
```

---

### **`orxFXPOINTER:addFXFromConfig`**

* Signature:

```lua
r1 = addFXFromConfig(fxconfigid)
```

* Description:

> Adds an FX using its config ID (non-const self only)

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
  orxSTATUS  orxFXPointer_AddFXFromConfig(orxFXPOINTER *_pstFXPointer, const orxSTRING _zFXConfigID)
```

---

### **`orxFXPOINTER:addUniqueDelayedFXFromConfig`**

* Signature:

```lua
r1 = addUniqueDelayedFXFromConfig(fxconfigid, delay)
```

* Description:

> Adds a unique delayed FX using its config ID (non-const self only)

* Params:

name | type | description 
--- | --- | ---
fxconfigid | string | Config ID of the FX to add
delay | number | Delay time, ignored if the FX is staggered and other FXs are already present

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxFXPointer_AddUniqueDelayedFXFromConfig(orxFXPOINTER *_pstFXPointer, const orxSTRING _zFXConfigID, orxFLOAT _fDelay)
```

---

### **`orxFXPOINTER:addUniqueFXFromConfig`**

* Signature:

```lua
r1 = addUniqueFXFromConfig(fxconfigid)
```

* Description:

> Adds a unique FX using its config ID (non-const self only)

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
  orxSTATUS  orxFXPointer_AddUniqueFXFromConfig(orxFXPOINTER *_pstFXPointer, const orxSTRING _zFXConfigID)
```

---

### **`orxFXPOINTER:addr`**

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

### **`orxFXPOINTER:aeq`**

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

### **`orxFXPOINTER:asVoid`**

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

### **`orxFXPOINTER:decreaseCount`**

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

### **`orxFXPOINTER:delete`**

* Signature:

```lua
r1 = delete()
```

* Description:

> Deletes an FXPointer (non-const self only)

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxFXPointer_Delete(orxFXPOINTER *_pstFXPointer)
```

---

### **`orxFXPOINTER:enable`**

* Signature:

```lua
enable(enable)
```

* Description:

> Enables/disables an FXPointer (non-const self only)

* Params:

name | type | description 
--- | --- | ---
enable | boolean | Enable / disable

* Returns:

* C signature:

```c
  void  orxFXPointer_Enable(orxFXPOINTER *_pstFXPointer, orxBOOL _bEnable)
```

---

### **`orxFXPOINTER:getChild`**

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

### **`orxFXPOINTER:getCount`**

* Signature:

```lua
r1 = getCount()
```

* Description:

> Gets how many FXs are currently in use

* Params:

* Returns:

type | description 
--- | ---
integer | integer \(u32\)

* C signature:

```c
  orxU32  orxFXPointer_GetCount(const orxFXPOINTER *_pstFXPointer)
```

---

### **`orxFXPOINTER:getFlags`**

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

### **`orxFXPOINTER:getFrequency`**

* Signature:

```lua
r1 = getFrequency()
```

* Description:

> FXPointer frequency get accessor

* Params:

* Returns:

type | description 
--- | ---
number | FXPointer frequency

* C signature:

```c
  orxFLOAT  orxFXPointer_GetFrequency(const orxFXPOINTER *_pstFXPointer)
```

---

### **`orxFXPOINTER:getGUID`**

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

### **`orxFXPOINTER:getID`**

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

### **`orxFXPOINTER:getNext`**

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

### **`orxFXPOINTER:getOwner`**

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

### **`orxFXPOINTER:getParent`**

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

### **`orxFXPOINTER:getPrevious`**

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

### **`orxFXPOINTER:getRefCount`**

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

### **`orxFXPOINTER:getSibling`**

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

### **`orxFXPOINTER:getTime`**

* Signature:

```lua
r1 = getTime()
```

* Description:

> FXPointer time get accessor

* Params:

* Returns:

type | description 
--- | ---
number | number

* C signature:

```c
  orxFLOAT  orxFXPointer_GetTime(const orxFXPOINTER *_pstFXPointer)
```

---

### **`orxFXPOINTER:increaseCount`**

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

### **`orxFXPOINTER:isEnabled`**

* Signature:

```lua
r1 = isEnabled()
```

* Description:

> Is FXPointer enabled?

* Params:

* Returns:

type | description 
--- | ---
boolean | true if enabled, false otherwise

* C signature:

```c
  orxBOOL  orxFXPointer_IsEnabled(const orxFXPOINTER *_pstFXPointer)
```

---

### **`orxFXPOINTER:removeAllFXs`**

* Signature:

```lua
r1 = removeAllFXs()
```

* Description:

> Removes all FXs (non-const self only)

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxFXPointer_RemoveAllFXs(orxFXPOINTER *_pstFXPointer)
```

---

### **`orxFXPOINTER:removeFX`**

* Signature:

```lua
r1 = removeFX(fx)
```

* Description:

> Removes an FX (non-const self only)

* Params:

name | type | description 
--- | --- | ---
fx | [orxFX](./orxFX.md)  | FX to remove

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxFXPointer_RemoveFX(orxFXPOINTER *_pstFXPointer, orxFX *_pstFX)
```

---

### **`orxFXPOINTER:removeFXFromConfig`**

* Signature:

```lua
r1 = removeFXFromConfig(fxconfigid)
```

* Description:

> Removes an FX using its config ID (non-const self only)

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
  orxSTATUS  orxFXPointer_RemoveFXFromConfig(orxFXPOINTER *_pstFXPointer, const orxSTRING _zFXConfigID)
```

---

### **`orxFXPOINTER:setFlags`**

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

### **`orxFXPOINTER:setFrequency`**

* Signature:

```lua
r1 = setFrequency(frequency)
```

* Description:

> FXPointer frequency set accessor (non-const self only)

* Params:

name | type | description 
--- | --- | ---
frequency | number | Frequency to set

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxFXPointer_SetFrequency(orxFXPOINTER *_pstFXPointer, orxFLOAT _fFrequency)
```

---

### **`orxFXPOINTER:setOwner`**

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

### **`orxFXPOINTER:setParent`**

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

### **`orxFXPOINTER:setTime`**

* Signature:

```lua
r1 = setTime(time)
```

* Description:

> FXPointer time set accessor (non-const self only)

* Params:

name | type | description 
--- | --- | ---
time | number | Time to set

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxFXPointer_SetTime(orxFXPOINTER *_pstFXPointer, orxFLOAT _fTime)
```

---

### **`orxFXPOINTER:synchronize`**

* Signature:

```lua
r1 = synchronize(model)
```

* Description:

> Synchronizes FX times with an other orxFXPointer if they share common FXs (non-const self only)

* Params:

name | type | description 
--- | --- | ---
model | [orxFXPOINTER\#](./orxFXPOINTER.md) | Model FX pointer to use for synchronization

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxFXPointer_Synchronize(orxFXPOINTER *_pstFXPointer, const orxFXPOINTER *_pstModel)
```

---

### **`orxFXPOINTER:testAllFlags`**

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

### **`orxFXPOINTER:testFlags`**

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

### **`orxFXPOINTER:type`**

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

### **`orxFXPOINTER:update`**

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

