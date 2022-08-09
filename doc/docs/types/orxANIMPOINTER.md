# type orxANIMPOINTER

> 

## Methods

### **`orxANIMPOINTER:addr`**

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

### **`orxANIMPOINTER:aeq`**

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

### **`orxANIMPOINTER:asVoid`**

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

### **`orxANIMPOINTER:decreaseCount`**

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

### **`orxANIMPOINTER:delete`**

* Signature:

```lua
r1 = delete()
```

* Description:

> Deletes an AnimPointer (non-const self only)

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxAnimPointer_Delete(orxANIMPOINTER *_pstAnimPointer)
```

---

### **`orxANIMPOINTER:getAnimSet`**

* Signature:

```lua
r1 = getAnimSet()
```

* Description:

> Gets the referenced AnimSet

* Params:

* Returns:

type | description 
--- | ---
[orxANIMSET](./orxANIMSET.md)  | Referenced [orxANIMSET](./orxANIMSET.md) 

* C signature:

```c
  orxANIMSET * orxAnimPointer_GetAnimSet(const orxANIMPOINTER *_pstAnimPointer)
```

---

### **`orxANIMPOINTER:getChild`**

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

### **`orxANIMPOINTER:getCurrentAnim`**

* Signature:

```lua
r1 = getCurrentAnim()
```

* Description:

> AnimPointer current Animation get accessor

* Params:

* Returns:

type | description 
--- | ---
integer | Current Animation ID

* C signature:

```c
  orxU32  orxAnimPointer_GetCurrentAnim(const orxANIMPOINTER *_pstAnimPointer)
```

---

### **`orxANIMPOINTER:getCurrentAnimData`**

* Signature:

```lua
r1 = getCurrentAnimData()
```

* Description:

> AnimPointer current anim data get accessor

* Params:

* Returns:

type | description 
--- | ---
[orxSTRUCTURE](./orxSTRUCTURE.md)  | Current anim data / nil

* C signature:

```c
  orxSTRUCTURE * orxAnimPointer_GetCurrentAnimData(const orxANIMPOINTER *_pstAnimPointer)
```

---

### **`orxANIMPOINTER:getCurrentAnimName`**

* Signature:

```lua
r1 = getCurrentAnimName()
```

* Description:

> AnimPointer current Animation name get accessor

* Params:

* Returns:

type | description 
--- | ---
string | Current Animation name / empty string

* C signature:

```c
  const orxSTRING  orxAnimPointer_GetCurrentAnimName(const orxANIMPOINTER *_pstAnimPointer)
```

---

### **`orxANIMPOINTER:getFlags`**

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

### **`orxANIMPOINTER:getFrequency`**

* Signature:

```lua
r1 = getFrequency()
```

* Description:

> AnimPointer frequency get accessor

* Params:

* Returns:

type | description 
--- | ---
number | AnimPointer frequency

* C signature:

```c
  orxFLOAT  orxAnimPointer_GetFrequency(const orxANIMPOINTER *_pstAnimPointer)
```

---

### **`orxANIMPOINTER:getGUID`**

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

### **`orxANIMPOINTER:getID`**

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

### **`orxANIMPOINTER:getNext`**

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

### **`orxANIMPOINTER:getOwner`**

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

### **`orxANIMPOINTER:getParent`**

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

### **`orxANIMPOINTER:getPrevious`**

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

### **`orxANIMPOINTER:getRefCount`**

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

### **`orxANIMPOINTER:getSibling`**

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

### **`orxANIMPOINTER:getTargetAnim`**

* Signature:

```lua
r1 = getTargetAnim()
```

* Description:

> AnimPointer target Animation get accessor

* Params:

* Returns:

type | description 
--- | ---
integer | Target Animation ID

* C signature:

```c
  orxU32  orxAnimPointer_GetTargetAnim(const orxANIMPOINTER *_pstAnimPointer)
```

---

### **`orxANIMPOINTER:getTargetAnimName`**

* Signature:

```lua
r1 = getTargetAnimName()
```

* Description:

> AnimPointer target Animation ID get accessor

* Params:

* Returns:

type | description 
--- | ---
string | Target Animation name / empty string

* C signature:

```c
  const orxSTRING  orxAnimPointer_GetTargetAnimName(const orxANIMPOINTER *_pstAnimPointer)
```

---

### **`orxANIMPOINTER:getTime`**

* Signature:

```lua
r1 = getTime()
```

* Description:

> AnimPointer time get accessor

* Params:

* Returns:

type | description 
--- | ---
number | Current time

* C signature:

```c
  orxFLOAT  orxAnimPointer_GetTime(const orxANIMPOINTER *_pstAnimPointer)
```

---

### **`orxANIMPOINTER:increaseCount`**

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

### **`orxANIMPOINTER:pause`**

* Signature:

```lua
r1 = pause(pause)
```

* Description:

> AnimPointer pause accessor (non-const self only)

* Params:

name | type | description 
--- | --- | ---
pause | boolean | Pause / Unpause

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxAnimPointer_Pause(orxANIMPOINTER *_pstAnimPointer, orxBOOL _bPause)
```

---

### **`orxANIMPOINTER:setCurrentAnim`**

* Signature:

```lua
r1 = setCurrentAnim(animid)
```

* Description:

> AnimPointer current Animation set accessor (non-const self only)

* Params:

name | type | description 
--- | --- | ---
animid | integer | Animation ID to set

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxAnimPointer_SetCurrentAnim(orxANIMPOINTER *_pstAnimPointer, orxU32 _u32AnimID)
```

---

### **`orxANIMPOINTER:setCurrentAnimFromName`**

* Signature:

```lua
r1 = setCurrentAnimFromName(animname)
```

* Description:

> AnimPointer current Animation set accessor using name (non-const self only)

* Params:

name | type | description 
--- | --- | ---
animname | string | Animation name (config's name) to set

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxAnimPointer_SetCurrentAnimFromName(orxANIMPOINTER *_pstAnimPointer, const orxSTRING _zAnimName)
```

---

### **`orxANIMPOINTER:setFlags`**

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

### **`orxANIMPOINTER:setFrequency`**

* Signature:

```lua
r1 = setFrequency(frequency)
```

* Description:

> AnimPointer frequency set accessor (non-const self only)

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
  orxSTATUS  orxAnimPointer_SetFrequency(orxANIMPOINTER *_pstAnimPointer, orxFLOAT _fFrequency)
```

---

### **`orxANIMPOINTER:setOwner`**

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

### **`orxANIMPOINTER:setParent`**

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

### **`orxANIMPOINTER:setTargetAnim`**

* Signature:

```lua
r1 = setTargetAnim(animid)
```

* Description:

> AnimPointer target Animation set accessor (non-const self only)

* Params:

name | type | description 
--- | --- | ---
animid | integer | Animation ID to set / orxU32_UNDEFINED

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxAnimPointer_SetTargetAnim(orxANIMPOINTER *_pstAnimPointer, orxU32 _u32AnimID)
```

---

### **`orxANIMPOINTER:setTargetAnimFromName`**

* Signature:

```lua
r1 = setTargetAnimFromName(animname)
```

* Description:

> AnimPointer target Animation set accessor using name (non-const self only)

* Params:

name | type | description 
--- | --- | ---
animname | string | Animation name (config's name) to set / nil

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxAnimPointer_SetTargetAnimFromName(orxANIMPOINTER *_pstAnimPointer, const orxSTRING _zAnimName)
```

---

### **`orxANIMPOINTER:setTime`**

* Signature:

```lua
r1 = setTime(time)
```

* Description:

> AnimPointer current time set accessor (non-const self only)

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
  orxSTATUS  orxAnimPointer_SetTime(orxANIMPOINTER *_pstAnimPointer, orxFLOAT _fTime)
```

---

### **`orxANIMPOINTER:testAllFlags`**

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

### **`orxANIMPOINTER:testFlags`**

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

### **`orxANIMPOINTER:type`**

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

### **`orxANIMPOINTER:update`**

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

