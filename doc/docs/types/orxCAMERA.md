# type orxCAMERA

> 

## Methods

### **`orxCAMERA:addGroupID`**

* Signature:

```lua
r1 = addGroupID(groupid, addfirst)
```

* Description:

> Adds a group ID to a camera (non-const self only)

* Params:

name | type | description 
--- | --- | ---
groupid | integer | ID of the group to add
addfirst | boolean | If true this group will be used *before* any already added ones, otherwise it'll be used *after* all of them

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxCamera_AddGroupID(orxCAMERA *_pstCamera, orxSTRINGID _stGroupID, orxBOOL _bAddFirst)
```

---

### **`orxCAMERA:addr`**

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

### **`orxCAMERA:aeq`**

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

### **`orxCAMERA:asVoid`**

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

### **`orxCAMERA:decreaseCount`**

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

### **`orxCAMERA:delete`**

* Signature:

```lua
r1 = delete()
```

* Description:

> Deletes a camera (non-const self only)

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxCamera_Delete(orxCAMERA *_pstCamera)
```

---

### **`orxCAMERA:getChild`**

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

### **`orxCAMERA:getFlags`**

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

### **`orxCAMERA:getFrame`**

* Signature:

```lua
r1 = getFrame()
```

* Description:

> Gets camera frame

* Params:

* Returns:

type | description 
--- | ---
[orxFRAME](./orxFRAME.md)  | [orxFRAME](./orxFRAME.md) 

* C signature:

```c
  orxFRAME * orxCamera_GetFrame(const orxCAMERA *_pstCamera)
```

---

### **`orxCAMERA:getFrustum`**

* Signature:

```lua
r1 = getFrustum()
```

* Description:

> Gets camera frustum \(3D box for 2D camera\)

* Params:

* Returns:

type | description 
--- | ---
[orxAABOX](./orxAABOX.md)  | Frustum [orxAABOX](./orxAABOX.md) 

* C signature:

```c
  orxAABOX * orxCamera_GetFrustum(const orxCAMERA *_pstCamera, orxAABOX *_pstFrustum)
```

---

### **`orxCAMERA:getGUID`**

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

### **`orxCAMERA:getGroupID`**

* Signature:

```lua
r1 = getGroupID(index)
```

* Description:

> Gets the group ID of a camera at the given index

* Params:

name | type | description 
--- | --- | ---
index | integer | Index of group ID

* Returns:

type | description 
--- | ---
integer | Group ID if index is valid, [orxSTRINGID_UNDEFINED](../modules/constants.md#orxstringid_undefined) otherwise

* C signature:

```c
  orxSTRINGID  orxCamera_GetGroupID(const orxCAMERA *_pstCamera, orxU32 _u32Index)
```

---

### **`orxCAMERA:getGroupIDCount`**

* Signature:

```lua
r1 = getGroupIDCount()
```

* Description:

> Gets number of group IDs of camera

* Params:

* Returns:

type | description 
--- | ---
integer | Number of group IDs of this camera

* C signature:

```c
  orxU32  orxCamera_GetGroupIDCount(const orxCAMERA *_pstCamera)
```

---

### **`orxCAMERA:getID`**

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

### **`orxCAMERA:getName`**

* Signature:

```lua
r1 = getName()
```

* Description:

> Gets camera config name

* Params:

* Returns:

type | description 
--- | ---
string | string / empty string

* C signature:

```c
  const orxSTRING  orxCamera_GetName(const orxCAMERA *_pstCamera)
```

---

### **`orxCAMERA:getNext`**

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

### **`orxCAMERA:getOwner`**

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

### **`orxCAMERA:getParent`**

* Signature:

```lua
r1 = getParent()
```

* Description:

> Gets camera parent

* Params:

* Returns:

type | description 
--- | ---
[orxSTRUCTURE](./orxSTRUCTURE.md)  | Parent \(object, spawner, camera or frame\) / nil

* C signature:

```c
  orxSTRUCTURE * orxCamera_GetParent(const orxCAMERA *_pstCamera)
```

---

### **`orxCAMERA:getPosition`**

* Signature:

```lua
r1 = getPosition()
```

* Description:

> Get camera position

* Params:

* Returns:

type | description 
--- | ---
[orxVECTOR](./orxVECTOR.md)  | [orxVECTOR](./orxVECTOR.md) 

* C signature:

```c
  orxVECTOR * orxCamera_GetPosition(const orxCAMERA *_pstCamera, orxVECTOR *_pvPosition)
```

---

### **`orxCAMERA:getPrevious`**

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

### **`orxCAMERA:getRefCount`**

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

### **`orxCAMERA:getRotation`**

* Signature:

```lua
r1 = getRotation()
```

* Description:

> Get camera rotation

* Params:

* Returns:

type | description 
--- | ---
number | Rotation value \(radians\)

* C signature:

```c
  orxFLOAT  orxCamera_GetRotation(const orxCAMERA *_pstCamera)
```

---

### **`orxCAMERA:getSibling`**

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

### **`orxCAMERA:getZoom`**

* Signature:

```lua
r1 = getZoom()
```

* Description:

> Get camera zoom

* Params:

* Returns:

type | description 
--- | ---
number | Zoom value

* C signature:

```c
  orxFLOAT  orxCamera_GetZoom(const orxCAMERA *_pstCamera)
```

---

### **`orxCAMERA:increaseCount`**

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

### **`orxCAMERA:removeGroupID`**

* Signature:

```lua
r1 = removeGroupID(groupid)
```

* Description:

> Removes a group ID from a camera (non-const self only)

* Params:

name | type | description 
--- | --- | ---
groupid | integer | ID of the group to remove

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxCamera_RemoveGroupID(orxCAMERA *_pstCamera, orxSTRINGID _stGroupID)
```

---

### **`orxCAMERA:setFlags`**

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

### **`orxCAMERA:setFrustum`**

* Signature:

```lua
r1 = setFrustum(width, height, near, far)
```

* Description:

> Sets camera frustum (non-const self only)

* Params:

name | type | description 
--- | --- | ---
width | number | Width of frustum
height | number | Height of frustum
near | number | Near distance of frustum
far | number | Far distance of frustum

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxCamera_SetFrustum(orxCAMERA *_pstCamera, orxFLOAT _fWidth, orxFLOAT _fHeight, orxFLOAT _fNear, orxFLOAT _fFar)
```

---

### **`orxCAMERA:setOwner`**

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

### **`orxCAMERA:setParent`**

* Signature:

```lua
r1 = setParent(parent)
```

* Description:

> Sets camera parent (non-const self only)

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
  orxSTATUS  orxCamera_SetParent(orxCAMERA *_pstCamera, void *_pParent)
```

---

### **`orxCAMERA:setPosition`**

* Signature:

```lua
r1 = setPosition(position)
```

* Description:

> Sets camera position (non-const self only)

* Params:

name | type | description 
--- | --- | ---
position | [orxVECTOR\#](./orxVECTOR.md) | Camera position

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxCamera_SetPosition(orxCAMERA *_pstCamera, const orxVECTOR *_pvPosition)
```

---

### **`orxCAMERA:setRotation`**

* Signature:

```lua
r1 = setRotation(rotation)
```

* Description:

> Sets camera rotation (non-const self only)

* Params:

name | type | description 
--- | --- | ---
rotation | number | Camera rotation (radians)

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxCamera_SetRotation(orxCAMERA *_pstCamera, orxFLOAT _fRotation)
```

---

### **`orxCAMERA:setZoom`**

* Signature:

```lua
r1 = setZoom(zoom)
```

* Description:

> Sets camera zoom (non-const self only)

* Params:

name | type | description 
--- | --- | ---
zoom | number | Camera zoom

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxCamera_SetZoom(orxCAMERA *_pstCamera, orxFLOAT _fZoom)
```

---

### **`orxCAMERA:testAllFlags`**

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

### **`orxCAMERA:testFlags`**

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

### **`orxCAMERA:type`**

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

### **`orxCAMERA:update`**

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

