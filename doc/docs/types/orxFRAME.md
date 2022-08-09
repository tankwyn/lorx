# type orxFRAME

> 

## Methods

### **`orxFRAME:addr`**

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

### **`orxFRAME:aeq`**

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

### **`orxFRAME:asVoid`**

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

### **`orxFRAME:decreaseCount`**

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

### **`orxFRAME:delete`**

* Signature:

```lua
r1 = delete()
```

* Description:

> Deletes a frame (non-const self only)

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxFrame_Delete(orxFRAME *_pstFrame)
```

---

### **`orxFRAME:getChild`**

* Signature:

```lua
r1 = getChild()
```

* Description:

> Gets frame first child

* Params:

* Returns:

type | description 
--- | ---
[orxFRAME](./orxFRAME.md)  | [orxFRAME](./orxFRAME.md) / nil

* C signature:

```c
  orxFRAME * orxFrame_GetChild(const orxFRAME *_pstFrame)
```

---

### **`orxFRAME:getFlags`**

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

### **`orxFRAME:getGUID`**

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

### **`orxFRAME:getID`**

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

### **`orxFRAME:getNext`**

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

### **`orxFRAME:getOwner`**

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

### **`orxFRAME:getParent`**

* Signature:

```lua
r1 = getParent()
```

* Description:

> Get frame parent

* Params:

* Returns:

type | description 
--- | ---
[orxFRAME](./orxFRAME.md)  | [orxFRAME](./orxFRAME.md) / nil

* C signature:

```c
  orxFRAME * orxFrame_GetParent(const orxFRAME *_pstFrame)
```

---

### **`orxFRAME:getPosition`**

* Signature:

```lua
r1 = getPosition(space)
```

* Description:

> Gets frame position (non-const self only)

* Params:

name | type | description 
--- | --- | ---
space | [orxFRAME_SPACE](../enums.md#orxframe_space)  | Coordinate space system to use

* Returns:

type | description 
--- | ---
[orxVECTOR](./orxVECTOR.md)  | [orxVECTOR](./orxVECTOR.md) / nil

* C signature:

```c
  orxVECTOR * orxFrame_GetPosition(orxFRAME *_pstFrame, orxFRAME_SPACE _eSpace, orxVECTOR *_pvPos)
```

---

### **`orxFRAME:getPrevious`**

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

### **`orxFRAME:getRefCount`**

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

### **`orxFRAME:getRotation`**

* Signature:

```lua
r1 = getRotation(space)
```

* Description:

> Gets frame rotation (non-const self only)

* Params:

name | type | description 
--- | --- | ---
space | [orxFRAME_SPACE](../enums.md#orxframe_space)  | Coordinate space system to use

* Returns:

type | description 
--- | ---
number | Rotation of the given frame \(radians\)

* C signature:

```c
  orxFLOAT  orxFrame_GetRotation(orxFRAME *_pstFrame, orxFRAME_SPACE _eSpace)
```

---

### **`orxFRAME:getScale`**

* Signature:

```lua
r1 = getScale(space)
```

* Description:

> Gets frame scale (non-const self only)

* Params:

name | type | description 
--- | --- | ---
space | [orxFRAME_SPACE](../enums.md#orxframe_space)  | Coordinate space system to use

* Returns:

type | description 
--- | ---
[orxVECTOR](./orxVECTOR.md)  | [orxVECTOR](./orxVECTOR.md) / nil

* C signature:

```c
  orxVECTOR * orxFrame_GetScale(orxFRAME *_pstFrame, orxFRAME_SPACE _eSpace, orxVECTOR *_pvScale)
```

---

### **`orxFRAME:getSibling`**

* Signature:

```lua
r1 = getSibling()
```

* Description:

> Gets frame next sibling

* Params:

* Returns:

type | description 
--- | ---
[orxFRAME](./orxFRAME.md)  | [orxFRAME](./orxFRAME.md) / nil

* C signature:

```c
  orxFRAME * orxFrame_GetSibling(const orxFRAME *_pstFrame)
```

---

### **`orxFRAME:increaseCount`**

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

### **`orxFRAME:isRootChild`**

* Signature:

```lua
r1 = isRootChild()
```

* Description:

> Is a root child?

* Params:

* Returns:

type | description 
--- | ---
boolean | true if its parent is root, false otherwise

* C signature:

```c
  orxBOOL  orxFrame_IsRootChild(const orxFRAME *_pstFrame)
```

---

### **`orxFRAME:setFlags`**

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

### **`orxFRAME:setOwner`**

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

### **`orxFRAME:setParent`**

* Signature:

```lua
setParent(parent)
```

* Description:

> Sets frame parent (non-const self only)

* Params:

name | type | description 
--- | --- | ---
parent | [orxFRAME](./orxFRAME.md)  | Parent frame to set

* Returns:

* C signature:

```c
  void  orxFrame_SetParent(orxFRAME *_pstFrame, orxFRAME * _pstParent)
```

---

### **`orxFRAME:setPosition`**

* Signature:

```lua
setPosition(space, pos)
```

* Description:

> Sets frame position (non-const self only)

* Params:

name | type | description 
--- | --- | ---
space | [orxFRAME_SPACE](../enums.md#orxframe_space)  | Coordinate space system to use
pos | [orxVECTOR\#](./orxVECTOR.md) | Position to set

* Returns:

* C signature:

```c
  void  orxFrame_SetPosition(orxFRAME *_pstFrame, orxFRAME_SPACE _eSpace, const orxVECTOR *_pvPos)
```

---

### **`orxFRAME:setRotation`**

* Signature:

```lua
setRotation(space, rotation)
```

* Description:

> Sets frame rotation (non-const self only)

* Params:

name | type | description 
--- | --- | ---
space | [orxFRAME_SPACE](../enums.md#orxframe_space)  | Coordinate space system to use
rotation | number | Rotation angle to set (radians)

* Returns:

* C signature:

```c
  void  orxFrame_SetRotation(orxFRAME *_pstFrame, orxFRAME_SPACE _eSpace, orxFLOAT _fRotation)
```

---

### **`orxFRAME:setScale`**

* Signature:

```lua
setScale(space, scale)
```

* Description:

> Sets frame scale (non-const self only)

* Params:

name | type | description 
--- | --- | ---
space | [orxFRAME_SPACE](../enums.md#orxframe_space)  | Coordinate space system to use
scale | [orxVECTOR\#](./orxVECTOR.md) | Scale to set

* Returns:

* C signature:

```c
  void  orxFrame_SetScale(orxFRAME *_pstFrame, orxFRAME_SPACE _eSpace, const orxVECTOR *_pvScale)
```

---

### **`orxFRAME:testAllFlags`**

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

### **`orxFRAME:testFlags`**

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

### **`orxFRAME:transformPosition`**

* Signature:

```lua
r1 = transformPosition(space)
```

* Description:

> Transforms a position given its input space \(local -\> global or global -\> local\) (non-const self only)

* Params:

name | type | description 
--- | --- | ---
space | [orxFRAME_SPACE](../enums.md#orxframe_space)  | Input coordinate space system to use

* Returns:

type | description 
--- | ---
[orxVECTOR](./orxVECTOR.md)  | [orxVECTOR](./orxVECTOR.md) / nil

* C signature:

```c
  orxVECTOR * orxFrame_TransformPosition(orxFRAME *_pstFrame, orxFRAME_SPACE _eSpace, orxVECTOR *_pvPos)
```

---

### **`orxFRAME:transformRotation`**

* Signature:

```lua
r1 = transformRotation(space, rotation)
```

* Description:

> Transforms a rotation given its input space \(local -\> global or global -\> local\) (non-const self only)

* Params:

name | type | description 
--- | --- | ---
space | [orxFRAME_SPACE](../enums.md#orxframe_space)  | Input coordinate space system to use
rotation | number | Concerned rotation

* Returns:

type | description 
--- | ---
number | Transformed rotation \(radians\)

* C signature:

```c
  orxFLOAT  orxFrame_TransformRotation(orxFRAME *_pstFrame, orxFRAME_SPACE _eSpace, orxFLOAT _fRotation)
```

---

### **`orxFRAME:transformScale`**

* Signature:

```lua
r1 = transformScale(space)
```

* Description:

> Transforms a scale given its input space \(local -\> global or global -\> local\) (non-const self only)

* Params:

name | type | description 
--- | --- | ---
space | [orxFRAME_SPACE](../enums.md#orxframe_space)  | Input coordinate space system to use

* Returns:

type | description 
--- | ---
[orxVECTOR](./orxVECTOR.md)  | [orxVECTOR](./orxVECTOR.md) / nil

* C signature:

```c
  orxVECTOR * orxFrame_TransformScale(orxFRAME *_pstFrame, orxFRAME_SPACE _eSpace, orxVECTOR *_pvScale)
```

---

### **`orxFRAME:type`**

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

### **`orxFRAME:update`**

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

