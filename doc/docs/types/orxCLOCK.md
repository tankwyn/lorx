# type orxCLOCK

> 

## Methods

### **`orxCLOCK:addTimer`**

* Signature:

```lua
r1 = addTimer(func, delay, repetition)
```

* Description:

> Adds a timer function to a clock

* Params:

name | type | description 
--- | --- | ---
func | [lorxCLOCK_CALLBACK](../callbacks.md#lorxclock_callback)  | Callback to register
delay | number | Timer's delay between 2 calls, must be strictly positive
repetition | integer | Number of times this timer should be called before removed, -1 for infinite

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
orxSTATUS orxClock_AddTimer(orxCLOCK *_pstClock, const orxCLOCK_FUNCTION _pfnCallback, orxFLOAT _fDelay, orxS32 _s32Repetition, void *_pContext)
```

---

### **`orxCLOCK:addr`**

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

### **`orxCLOCK:aeq`**

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

### **`orxCLOCK:asVoid`**

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

### **`orxCLOCK:decreaseCount`**

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

### **`orxCLOCK:delete`**

* Signature:

```lua
r1 = delete()
```

* Description:

> Deletes a clock (non-const self only)

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxClock_Delete(orxCLOCK *_pstClock)
```

---

### **`orxCLOCK:getChild`**

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

### **`orxCLOCK:getFlags`**

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

### **`orxCLOCK:getGUID`**

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

### **`orxCLOCK:getID`**

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

### **`orxCLOCK:getInfo`**

* Signature:

```lua
r1 = getInfo()
```

* Description:

> Gets clock info

* Params:

* Returns:

type | description 
--- | ---
[orxCLOCK_INFO\#](./orxCLOCK_INFO.md) | [orxCLOCK_INFO](./orxCLOCK_INFO.md) / nil

* C signature:

```c
  const orxCLOCK_INFO * orxClock_GetInfo(const orxCLOCK *_pstClock)
```

---

### **`orxCLOCK:getModifier`**

* Signature:

```lua
r1 = getModifier(modifier)
```

* Description:

> Gets a clock's modifier (non-const self only)

* Params:

name | type | description 
--- | --- | ---
modifier | [orxCLOCK_MODIFIER](../enums.md#orxclock_modifier)  | Concerned modifier

* Returns:

type | description 
--- | ---
number | Modifier value / orxFLOAT_0 if deactivated

* C signature:

```c
  orxFLOAT  orxClock_GetModifier(orxCLOCK *_pstClock, orxCLOCK_MODIFIER _eModifier)
```

---

### **`orxCLOCK:getName`**

* Signature:

```lua
r1 = getName()
```

* Description:

> Gets clock config name

* Params:

* Returns:

type | description 
--- | ---
string | string / empty string

* C signature:

```c
  const orxSTRING  orxClock_GetName(const orxCLOCK *_pstClock)
```

---

### **`orxCLOCK:getNext`**

* Signature:

```lua
r1 = getNext()
```

* Description:

> Gets next existing clock in list \(can be used to parse all existing clocks\)

* Params:

* Returns:

type | description 
--- | ---
[orxCLOCK](./orxCLOCK.md)  | [orxCLOCK](./orxCLOCK.md) / nil

* C signature:

```c
  orxCLOCK * orxClock_GetNext(const orxCLOCK *_pstClock)
```

---

### **`orxCLOCK:getOwner`**

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

### **`orxCLOCK:getParent`**

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

### **`orxCLOCK:getPrevious`**

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

### **`orxCLOCK:getRefCount`**

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

### **`orxCLOCK:getSibling`**

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

### **`orxCLOCK:increaseCount`**

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

### **`orxCLOCK:isPaused`**

* Signature:

```lua
r1 = isPaused()
```

* Description:

> Is a clock paused?

* Params:

* Returns:

type | description 
--- | ---
boolean | true if paused, false otherwise

* C signature:

```c
  orxBOOL  orxClock_IsPaused(const orxCLOCK *_pstClock)
```

---

### **`orxCLOCK:pause`**

* Signature:

```lua
r1 = pause()
```

* Description:

> Pauses a clock (non-const self only)

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxClock_Pause(orxCLOCK *_pstClock)
```

---

### **`orxCLOCK:register`**

* Signature:

```lua
r1 = register(func, moduleid, priority)
```

* Description:

> Registers a callback function to a clock \(the previous one will be discarded\)

* Params:

name | type | description 
--- | --- | ---
func | [lorxCLOCK_CALLBACK](../callbacks.md#lorxclock_callback)  | Callback to register
moduleid | [orxMODULE_ID](../enums.md#orxmodule_id)  | ID of the module related to this callback
priority | [orxCLOCK_PRIORITY](../enums.md#orxclock_priority)  | Priority for the function

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
orxSTATUS orxClock_Register(orxCLOCK *_pstClock, const orxCLOCK_FUNCTION _pfnCallback, void *_pContext, orxMODULE_ID _eModuleID, orxCLOCK_PRIORITY _ePriority)
```

---

### **`orxCLOCK:removeTimer`**

* Signature:

```lua
r1 = removeTimer(func, delay)
```

* Description:

> Removes a timer function from a clock

* Params:

name | type | description 
--- | --- | ---
func | [lorxCLOCK_CALLBACK](../callbacks.md#lorxclock_callback)  | Callback to register
delay | number | Timer's delay between 2 calls, must be strictly positive

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
orxSTATUS orxClock_RemoveTimer(orxCLOCK *_pstClock, const orxCLOCK_FUNCTION _pfnCallback, orxFLOAT _fDelay, void *_pContext)
```

---

### **`orxCLOCK:restart`**

* Signature:

```lua
r1 = restart()
```

* Description:

> Restarts a clock (non-const self only)

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxClock_Restart(orxCLOCK *_pstClock)
```

---

### **`orxCLOCK:resync`**

* Signature:

```lua
r1 = resync()
```

* Description:

> Resyncs a clock \(accumulated DT =\> 0\) (non-const self only)

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | 

* C signature:

```c
  orxSTATUS  orxClock_Resync(orxCLOCK *_pstClock)
```

---

### **`orxCLOCK:setFlags`**

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

### **`orxCLOCK:setModifier`**

* Signature:

```lua
r1 = setModifier(modifier, value)
```

* Description:

> Sets a clock's modifier (non-const self only)

* Params:

name | type | description 
--- | --- | ---
modifier | [orxCLOCK_MODIFIER](../enums.md#orxclock_modifier)  | Concerned modifier
value | number | Modifier value, orxFLOAT_0 to deactivate the modifier

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxClock_SetModifier(orxCLOCK *_pstClock, orxCLOCK_MODIFIER _eModifier, orxFLOAT _fValue)
```

---

### **`orxCLOCK:setOwner`**

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

### **`orxCLOCK:setParent`**

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

### **`orxCLOCK:setTickSize`**

* Signature:

```lua
r1 = setTickSize(ticksize)
```

* Description:

> Sets a clock tick size (non-const self only)

* Params:

name | type | description 
--- | --- | ---
ticksize | number | Tick size, -1 for 'display'

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxClock_SetTickSize(orxCLOCK *_pstClock, orxFLOAT _fTickSize)
```

---

### **`orxCLOCK:testAllFlags`**

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

### **`orxCLOCK:testFlags`**

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

### **`orxCLOCK:type`**

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

### **`orxCLOCK:unpause`**

* Signature:

```lua
r1 = unpause()
```

* Description:

> Unpauses a clock (non-const self only)

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxClock_Unpause(orxCLOCK *_pstClock)
```

---

### **`orxCLOCK:unregister`**

* Signature:

```lua
r1 = unregister()
```

* Description:

> Unregisters the callback function of a clock

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
orxSTATUS orxClock_Unregister(orxCLOCK *_pstClock, const orxCLOCK_FUNCTION _pfnCallback);
```

---

### **`orxCLOCK:update`**

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

