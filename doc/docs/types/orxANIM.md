# type orxANIM

> 

## Methods

### **`orxANIM:addEvent`**

* Signature:

```lua
r1 = addEvent(eventname, timestamp, value)
```

* Description:

> Adds an event to an animation (non-const self only)

* Params:

name | type | description 
--- | --- | ---
eventname | string | Event name to add
timestamp | number | Timestamp for this event
value | number | Value for this event

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxAnim_AddEvent(orxANIM *_pstAnim, const orxSTRING _zEventName, orxFLOAT _fTimeStamp, orxFLOAT _fValue)
```

---

### **`orxANIM:addKey`**

* Signature:

```lua
r1 = addKey(data, timestamp)
```

* Description:

> Adds a key to an animation (non-const self only)

* Params:

name | type | description 
--- | --- | ---
data | [orxSTRUCTURE](./orxSTRUCTURE.md)  | Key data to add
timestamp | number | Timestamp for this key

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxAnim_AddKey(orxANIM *_pstAnim, orxSTRUCTURE *_pstData, orxFLOAT _fTimeStamp)
```

---

### **`orxANIM:addr`**

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

### **`orxANIM:aeq`**

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

### **`orxANIM:asVoid`**

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

### **`orxANIM:decreaseCount`**

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

### **`orxANIM:delete`**

* Signature:

```lua
r1 = delete()
```

* Description:

> Deletes an animation (non-const self only)

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxAnim_Delete(orxANIM *_pstAnim)
```

---

### **`orxANIM:getChild`**

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

### **`orxANIM:getEventAfter`**

* Signature:

```lua
r1 = getEventAfter(timestamp)
```

* Description:

> Gets event strictly after given timestamp

* Params:

name | type | description 
--- | --- | ---
timestamp | number | Time stamp, excluded

* Returns:

type | description 
--- | ---
[orxANIM_CUSTOM_EVENT\#](./orxANIM_CUSTOM_EVENT.md) | success / failure

* C signature:

```c
  const orxANIM_CUSTOM_EVENT * orxAnim_GetEventAfter(const orxANIM *_pstAnim, orxFLOAT _fTimeStamp)
```

---

### **`orxANIM:getEventCount`**

* Signature:

```lua
r1 = getEventCount()
```

* Description:

> Anim event count accessor

* Params:

* Returns:

type | description 
--- | ---
integer | Anim event count

* C signature:

```c
  orxU32  orxAnim_GetEventCount(const orxANIM *_pstAnim)
```

---

### **`orxANIM:getEventStorageSize`**

* Signature:

```lua
r1 = getEventStorageSize()
```

* Description:

> Anim event storage size accessor

* Params:

* Returns:

type | description 
--- | ---
integer | Anim event storage size

* C signature:

```c
  orxU32  orxAnim_GetEventStorageSize(const orxANIM *_pstAnim)
```

---

### **`orxANIM:getFlags`**

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

### **`orxANIM:getGUID`**

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

### **`orxANIM:getID`**

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

### **`orxANIM:getKey`**

* Signature:

```lua
r1 = getKey(timestamp)
```

* Description:

> Gets animation's key index from a time stamp

* Params:

name | type | description 
--- | --- | ---
timestamp | number | TimeStamp of the desired animation key

* Returns:

type | description 
--- | ---
integer | Animation key index / [orxU32_UNDEFINED](../modules/constants.md#orxu32_undefined) 

* C signature:

```c
  orxU32  orxAnim_GetKey(const orxANIM *_pstAnim, orxFLOAT _fTimeStamp)
```

---

### **`orxANIM:getKeyCount`**

* Signature:

```lua
r1 = getKeyCount()
```

* Description:

> Anim key count accessor

* Params:

* Returns:

type | description 
--- | ---
integer | Anim key count

* C signature:

```c
  orxU32  orxAnim_GetKeyCount(const orxANIM *_pstAnim)
```

---

### **`orxANIM:getKeyData`**

* Signature:

```lua
r1 = getKeyData(index)
```

* Description:

> Anim key data accessor

* Params:

name | type | description 
--- | --- | ---
index | integer | Index of desired key data

* Returns:

type | description 
--- | ---
[orxSTRUCTURE](./orxSTRUCTURE.md)  | Desired [orxSTRUCTURE](./orxSTRUCTURE.md) / nil

* C signature:

```c
  orxSTRUCTURE * orxAnim_GetKeyData(const orxANIM *_pstAnim, orxU32 _u32Index)
```

---

### **`orxANIM:getKeyStorageSize`**

* Signature:

```lua
r1 = getKeyStorageSize()
```

* Description:

> Anim key storage size accessor

* Params:

* Returns:

type | description 
--- | ---
integer | Anim key storage size

* C signature:

```c
  orxU32  orxAnim_GetKeyStorageSize(const orxANIM *_pstAnim)
```

---

### **`orxANIM:getLength`**

* Signature:

```lua
r1 = getLength()
```

* Description:

> Anim time length accessor

* Params:

* Returns:

type | description 
--- | ---
number | Anim time length

* C signature:

```c
  orxFLOAT  orxAnim_GetLength(const orxANIM *_pstAnim)
```

---

### **`orxANIM:getName`**

* Signature:

```lua
r1 = getName()
```

* Description:

> Anim name get accessor

* Params:

* Returns:

type | description 
--- | ---
string | string / empty string

* C signature:

```c
  const orxSTRING  orxAnim_GetName(const orxANIM *_pstAnim)
```

---

### **`orxANIM:getNext`**

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

### **`orxANIM:getNextEvent`**

* Signature:

```lua
r1 = getNextEvent(event)
```

* Description:

> Gets next event

* Params:

name | type | description 
--- | --- | ---
event | [orxANIM_CUSTOM_EVENT\#](./orxANIM_CUSTOM_EVENT.md) | Event, nil for first

* Returns:

type | description 
--- | ---
[orxANIM_CUSTOM_EVENT\#](./orxANIM_CUSTOM_EVENT.md) | success / failure

* C signature:

```c
  const orxANIM_CUSTOM_EVENT * orxAnim_GetNextEvent(const orxANIM *_pstAnim, const orxANIM_CUSTOM_EVENT *_pstEvent)
```

---

### **`orxANIM:getOwner`**

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

### **`orxANIM:getParent`**

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

### **`orxANIM:getPrevious`**

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

### **`orxANIM:getRefCount`**

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

### **`orxANIM:getSibling`**

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

### **`orxANIM:increaseCount`**

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

### **`orxANIM:removeAllEvents`**

* Signature:

```lua
removeAllEvents()
```

* Description:

> Removes all events from an animation (non-const self only)

* Params:

* Returns:

* C signature:

```c
  void  orxAnim_RemoveAllEvents(orxANIM *_pstAnim)
```

---

### **`orxANIM:removeAllKeys`**

* Signature:

```lua
removeAllKeys()
```

* Description:

> Removes all keys from an animation (non-const self only)

* Params:

* Returns:

* C signature:

```c
  void  orxAnim_RemoveAllKeys(orxANIM *_pstAnim)
```

---

### **`orxANIM:removeLastEvent`**

* Signature:

```lua
r1 = removeLastEvent()
```

* Description:

> Removes last added event from an animation (non-const self only)

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxAnim_RemoveLastEvent(orxANIM *_pstAnim)
```

---

### **`orxANIM:removeLastKey`**

* Signature:

```lua
r1 = removeLastKey()
```

* Description:

> Removes last added key from an animation (non-const self only)

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxAnim_RemoveLastKey(orxANIM *_pstAnim)
```

---

### **`orxANIM:setFlags`**

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

### **`orxANIM:setOwner`**

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

### **`orxANIM:setParent`**

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

### **`orxANIM:testAllFlags`**

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

### **`orxANIM:testFlags`**

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

### **`orxANIM:type`**

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

### **`orxANIM:update`**

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

