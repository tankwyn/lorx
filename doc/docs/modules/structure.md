# module structure

## functions

### **`create`**

* Signature:

```lua
r1 = create(structureid)
```

* Description:

> Creates a clean structure for given type

* Params:

name | type | description 
--- | --- | ---
structureid | [orxSTRUCTURE_ID](../enums.md#orxstructure_id)  | Concerned structure ID

* Returns:

type | description 
--- | ---
[orxSTRUCTURE](../types/orxSTRUCTURE.md)  | [orxSTRUCTURE](../types/orxSTRUCTURE.md) / nil

* C signature:

```c
  orxSTRUCTURE * orxStructure_Create(orxSTRUCTURE_ID _eStructureID)
```

---

### **`decreaseCount`**

* Signature:

```lua
decreaseCount(structure)
```

* Description:

> Decreases structure reference count

* Params:

name | type | description 
--- | --- | ---
structure | void\* | Concerned structure

* Returns:

* C signature:

```c
  void orxStructure_DecreaseCount(void *_pStructure)
```

---

### **`delete`**

* Signature:

```lua
r1 = delete(structure)
```

* Description:

> Deletes a structure \(needs to be cleaned beforehand\)

* Params:

name | type | description 
--- | --- | ---
structure | void\* | Concerned structure

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxStructure_Delete(void *_pStructure)
```

---

### **`exit`**

* Signature:

```lua
exit()
```

* Description:

> Exits from the structure module

* Params:

* Returns:

* C signature:

```c
  void  orxStructure_Exit()
```

---

### **`get`**

* Signature:

```lua
r1 = get(guid)
```

* Description:

> Gets structure given its GUID

* Params:

name | type | description 
--- | --- | ---
guid | integer | Structure's GUID

* Returns:

type | description 
--- | ---
[orxSTRUCTURE](../types/orxSTRUCTURE.md)  | [orxSTRUCTURE](../types/orxSTRUCTURE.md) / nil if not found/alive

* C signature:

```c
  orxSTRUCTURE * orxStructure_Get(orxU64 _u64GUID)
```

---

### **`getChild`**

* Signature:

```lua
r1 = getChild(structure)
```

* Description:

> Gets structure tree child

* Params:

name | type | description 
--- | --- | ---
structure | void\*\# | Concerned structure

* Returns:

type | description 
--- | ---
[orxSTRUCTURE](../types/orxSTRUCTURE.md)  | [orxSTRUCTURE](../types/orxSTRUCTURE.md) 

* C signature:

```c
  orxSTRUCTURE * orxStructure_GetChild(const void *_pStructure)
```

---

### **`getCount`**

* Signature:

```lua
r1 = getCount(structureid)
```

* Description:

> Gets given type structure count

* Params:

name | type | description 
--- | --- | ---
structureid | [orxSTRUCTURE_ID](../enums.md#orxstructure_id)  | Concerned structure ID

* Returns:

type | description 
--- | ---
integer | integer \(u32\) / [orxU32_UNDEFINED](./constants.md#orxu32_undefined) 

* C signature:

```c
  orxU32  orxStructure_GetCount(orxSTRUCTURE_ID _eStructureID)
```

---

### **`getFirst`**

* Signature:

```lua
r1 = getFirst(structureid)
```

* Description:

> Gets first stored structure \(first list cell or tree root depending on storage type\)

* Params:

name | type | description 
--- | --- | ---
structureid | [orxSTRUCTURE_ID](../enums.md#orxstructure_id)  | Concerned structure ID

* Returns:

type | description 
--- | ---
[orxSTRUCTURE](../types/orxSTRUCTURE.md)  | [orxSTRUCTURE](../types/orxSTRUCTURE.md) 

* C signature:

```c
  orxSTRUCTURE * orxStructure_GetFirst(orxSTRUCTURE_ID _eStructureID)
```

---

### **`getFlags`**

* Signature:

```lua
r1 = getFlags(structure, mask)
```

* Description:

> Gets structure flags

* Params:

name | type | description 
--- | --- | ---
structure | void\*\# | Concerned structure
mask | integer | Mask to use for getting flags

* Returns:

type | description 
--- | ---
integer | integer \(u32\)

* C signature:

```c
  orxU32 orxStructure_GetFlags(const void *_pStructure, orxU32 _u32Mask)
```

---

### **`getGUID`**

* Signature:

```lua
r1 = getGUID(structure)
```

* Description:

> Gets structure GUID

* Params:

name | type | description 
--- | --- | ---
structure | void\*\# | Concerned structure

* Returns:

type | description 
--- | ---
integer | integer \(u64\)

* C signature:

```c
  orxU64 orxStructure_GetGUID(const void *_pStructure)
```

---

### **`getID`**

* Signature:

```lua
r1 = getID(structure)
```

* Description:

> Gets structure ID

* Params:

name | type | description 
--- | --- | ---
structure | void\*\# | Concerned structure

* Returns:

type | description 
--- | ---
[orxSTRUCTURE_ID](../enums.md#orxstructure_id)  | [orxSTRUCTURE_ID](../enums.md#orxstructure_id) 

* C signature:

```c
  orxSTRUCTURE_ID orxStructure_GetID(const void *_pStructure)
```

---

### **`getIDString`**

* Signature:

```lua
r1 = getIDString(id)
```

* Description:

> Gets structure ID string

* Params:

name | type | description 
--- | --- | ---
id | [orxSTRUCTURE_ID](../enums.md#orxstructure_id)  | Concerned ID

* Returns:

type | description 
--- | ---
string | Corresponding literal string

* C signature:

```c
  const orxSTRING orxStructure_GetIDString(orxSTRUCTURE_ID _eID)
```

---

### **`getLast`**

* Signature:

```lua
r1 = getLast(structureid)
```

* Description:

> Gets last stored structure \(last list cell or tree root depending on storage type\)

* Params:

name | type | description 
--- | --- | ---
structureid | [orxSTRUCTURE_ID](../enums.md#orxstructure_id)  | Concerned structure ID

* Returns:

type | description 
--- | ---
[orxSTRUCTURE](../types/orxSTRUCTURE.md)  | [orxSTRUCTURE](../types/orxSTRUCTURE.md) 

* C signature:

```c
  orxSTRUCTURE * orxStructure_GetLast(orxSTRUCTURE_ID _eStructureID)
```

---

### **`getNext`**

* Signature:

```lua
r1 = getNext(structure)
```

* Description:

> Gets structure list next

* Params:

name | type | description 
--- | --- | ---
structure | void\*\# | Concerned structure

* Returns:

type | description 
--- | ---
[orxSTRUCTURE](../types/orxSTRUCTURE.md)  | [orxSTRUCTURE](../types/orxSTRUCTURE.md) 

* C signature:

```c
  orxSTRUCTURE * orxStructure_GetNext(const void *_pStructure)
```

---

### **`getOwner`**

* Signature:

```lua
r1 = getOwner(structure)
```

* Description:

> Gets structure's owner

* Params:

name | type | description 
--- | --- | ---
structure | void\*\# | Concerned structure

* Returns:

type | description 
--- | ---
[orxSTRUCTURE](../types/orxSTRUCTURE.md)  | [orxSTRUCTURE](../types/orxSTRUCTURE.md) / nil if not found/alive

* C signature:

```c
  orxSTRUCTURE * orxStructure_GetOwner(const void *_pStructure)
```

---

### **`getParent`**

* Signature:

```lua
r1 = getParent(structure)
```

* Description:

> Gets structure tree parent

* Params:

name | type | description 
--- | --- | ---
structure | void\*\# | Concerned structure

* Returns:

type | description 
--- | ---
[orxSTRUCTURE](../types/orxSTRUCTURE.md)  | [orxSTRUCTURE](../types/orxSTRUCTURE.md) 

* C signature:

```c
  orxSTRUCTURE * orxStructure_GetParent(const void *_pStructure)
```

---

### **`getPointer`**

* Signature:

```lua
r1 = getPointer(structure, structureid)
```

* Description:

> Gets structure pointer / debug mode

* Params:

name | type | description 
--- | --- | ---
structure | void\*\# | Concerned structure
structureid | [orxSTRUCTURE_ID](../enums.md#orxstructure_id)  | ID to test the structure against

* Returns:

type | description 
--- | ---
[orxSTRUCTURE](../types/orxSTRUCTURE.md)  | Valid orxSTRUCTURE, nil otherwise

* C signature:

```c
  orxSTRUCTURE *_orxStructure_GetPointer(const void *_pStructure, orxSTRUCTURE_ID _eStructureID)
```

---

### **`getPrevious`**

* Signature:

```lua
r1 = getPrevious(structure)
```

* Description:

> Gets structure list previous

* Params:

name | type | description 
--- | --- | ---
structure | void\*\# | Concerned structure

* Returns:

type | description 
--- | ---
[orxSTRUCTURE](../types/orxSTRUCTURE.md)  | [orxSTRUCTURE](../types/orxSTRUCTURE.md) 

* C signature:

```c
  orxSTRUCTURE * orxStructure_GetPrevious(const void *_pStructure)
```

---

### **`getRefCount`**

* Signature:

```lua
r1 = getRefCount(structure)
```

* Description:

> Gets structure reference count

* Params:

name | type | description 
--- | --- | ---
structure | void\*\# | Concerned structure

* Returns:

type | description 
--- | ---
integer | integer \(u32\)

* C signature:

```c
  orxU32 orxStructure_GetRefCount(const void *_pStructure)
```

---

### **`getSibling`**

* Signature:

```lua
r1 = getSibling(structure)
```

* Description:

> Gets structure tree sibling

* Params:

name | type | description 
--- | --- | ---
structure | void\*\# | Concerned structure

* Returns:

type | description 
--- | ---
[orxSTRUCTURE](../types/orxSTRUCTURE.md)  | [orxSTRUCTURE](../types/orxSTRUCTURE.md) 

* C signature:

```c
  orxSTRUCTURE * orxStructure_GetSibling(const void *_pStructure)
```

---

### **`getStorageType`**

* Signature:

```lua
r1 = getStorageType(structureid)
```

* Description:

> Gets structure storage type

* Params:

name | type | description 
--- | --- | ---
structureid | [orxSTRUCTURE_ID](../enums.md#orxstructure_id)  | Concerned structure ID

* Returns:

type | description 
--- | ---
[orxSTRUCTURE_STORAGE_TYPE](../enums.md#orxstructure_storage_type)  | [orxSTRUCTURE_STORAGE_TYPE](../enums.md#orxstructure_storage_type) 

* C signature:

```c
  orxSTRUCTURE_STORAGE_TYPE  orxStructure_GetStorageType(orxSTRUCTURE_ID _eStructureID)
```

---

### **`increaseCount`**

* Signature:

```lua
increaseCount(structure)
```

* Description:

> Increases structure reference count

* Params:

name | type | description 
--- | --- | ---
structure | void\* | Concerned structure

* Returns:

* C signature:

```c
  void orxStructure_IncreaseCount(void *_pStructure)
```

---

### **`init`**

* Signature:

```lua
r1 = init()
```

* Description:

> Initializess the structure module

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxStructure_Init()
```

---

### **`logAll`**

* Signature:

```lua
r1 = logAll(private)
```

* Description:

> Logs all user-generated \(& optionally private\) active structures

* Params:

name | type | description 
--- | --- | ---
private | boolean | Include all private structures in the log

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxStructure_LogAll(orxBOOL _bPrivate)
```

---

### **`setFlags`**

* Signature:

```lua
setFlags(structure, addflags, removeflags)
```

* Description:

> Sets structure flags

* Params:

name | type | description 
--- | --- | ---
structure | void\* | Concerned structure
addflags | integer | Flags to add
removeflags | integer | Flags to remove

* Returns:

* C signature:

```c
  void orxStructure_SetFlags(void *_pStructure, orxU32 _u32AddFlags, orxU32 _u32RemoveFlags)
```

---

### **`setOwner`**

* Signature:

```lua
r1 = setOwner(structure, owner)
```

* Description:

> Sets structure owner

* Params:

name | type | description 
--- | --- | ---
structure | void\* | Concerned structure
owner | void\* | Structure to set as owner

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxStructure_SetOwner(void *_pStructure, void *_pOwner)
```

---

### **`setParent`**

* Signature:

```lua
r1 = setParent(structure, parent)
```

* Description:

> Sets structure tree parent

* Params:

name | type | description 
--- | --- | ---
structure | void\* | Concerned structure
parent | void\* | Structure to set as parent

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxStructure_SetParent(void *_pStructure, void *_phParent)
```

---

### **`setup`**

* Signature:

```lua
setup()
```

* Description:

> Structure module setup

* Params:

* Returns:

* C signature:

```c
  void  orxStructure_Setup()
```

---

### **`testAllFlags`**

* Signature:

```lua
r1 = testAllFlags(structure, flags)
```

* Description:

> Tests all flags against structure ones

* Params:

name | type | description 
--- | --- | ---
structure | void\*\# | Concerned structure
flags | integer | Flags to test

* Returns:

type | description 
--- | ---
boolean | true / false

* C signature:

```c
  orxBOOL orxStructure_TestAllFlags(const void *_pStructure, orxU32 _u32Flags)
```

---

### **`testFlags`**

* Signature:

```lua
r1 = testFlags(structure, flags)
```

* Description:

> Tests flags against structure ones

* Params:

name | type | description 
--- | --- | ---
structure | void\*\# | Concerned structure
flags | integer | Flags to test

* Returns:

type | description 
--- | ---
boolean | true / false

* C signature:

```c
  orxBOOL orxStructure_TestFlags(const void *_pStructure, orxU32 _u32Flags)
```

---

### **`unregister`**

* Signature:

```lua
r1 = unregister(structureid)
```

* Description:

> Unregisters a given ID

* Params:

name | type | description 
--- | --- | ---
structureid | [orxSTRUCTURE_ID](../enums.md#orxstructure_id)  | Concerned structure ID

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxStructure_Unregister(orxSTRUCTURE_ID _eStructureID)
```

---

### **`update`**

* Signature:

```lua
r1 = update(structure, caller, clockinfo)
```

* Description:

> Updates structure if update function was registered for the structure type

* Params:

name | type | description 
--- | --- | ---
structure | void\* | Concerned structure
caller | void\*\# | Caller structure
clockinfo | [orxCLOCK_INFO\#](../types/orxCLOCK_INFO.md) | Update associated clock info

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxStructure_Update(void *_pStructure, const void *_phCaller, const orxCLOCK_INFO *_pstClockInfo)
```

---

