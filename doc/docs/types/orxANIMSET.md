# type orxANIMSET

> 

## Methods

### **`orxANIMSET:addAnim`**

* Signature:

```lua
r1 = addAnim(anim)
```

* Description:

> Adds an Anim to an AnimSet (non-const self only)

* Params:

name | type | description 
--- | --- | ---
anim | [orxANIM](./orxANIM.md)  | Anim to add

* Returns:

type | description 
--- | ---
integer | Anim ID in the specified AnimSet

* C signature:

```c
  orxU32  orxAnimSet_AddAnim(orxANIMSET *_pstAnimSet, orxANIM *_pstAnim)
```

---

### **`orxANIMSET:addLink`**

* Signature:

```lua
r1 = addLink(srcanim, dstanim)
```

* Description:

> Adds a link between two Anims of the AnimSet (non-const self only)

* Params:

name | type | description 
--- | --- | ---
srcanim | integer | Source Anim of the link
dstanim | integer | Destination Anim of the link

* Returns:

type | description 
--- | ---
integer | ID of the created link / [orxU32_UNDEFINED](../modules/constants.md#orxu32_undefined) 

* C signature:

```c
  orxU32  orxAnimSet_AddLink(orxANIMSET *_pstAnimSet, orxU32 _u32SrcAnim, orxU32 _u32DstAnim)
```

---

### **`orxANIMSET:addReference`**

* Signature:

```lua
addReference()
```

* Description:

> Adds a reference to an AnimSet (non-const self only)

* Params:

* Returns:

* C signature:

```c
  void  orxAnimSet_AddReference(orxANIMSET *_pstAnimSet)
```

---

### **`orxANIMSET:addr`**

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

### **`orxANIMSET:aeq`**

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

### **`orxANIMSET:asVoid`**

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

### **`orxANIMSET:cloneLinkTable`**

* Signature:

```lua
r1 = cloneLinkTable()
```

* Description:

> Clones an AnimSet Link Table

* Params:

* Returns:

type | description 
--- | ---
[orxANIMSET_LINK_TABLE](./orxANIMSET_LINK_TABLE.md)  | An internally allocated clone of the AnimSet

* C signature:

```c
  orxANIMSET_LINK_TABLE * orxAnimSet_CloneLinkTable(const orxANIMSET *_pstAnimSet)
```

---

### **`orxANIMSET:computeAnim`**

* Signature:

```lua
r1, r2, r3, r4 = computeAnim(srcanim, dstanim, linktable)
```

* Description:

> Computes active Anim given current and destination Anim IDs & a relative timestamp (non-const self only)

* Params:

name | type | description 
--- | --- | ---
srcanim | integer | Source (current) Anim ID
dstanim | integer | Destination Anim ID, if none (auto mode) set it to orxU32_UNDEFINED
linktable [in,out] | [orxANIMSET_LINK_TABLE](./orxANIMSET_LINK_TABLE.md)  | Anim Pointer link table (updated if AnimSet link table isn't static, when using loop counts for example)

* Returns:

type | description 
--- | ---
integer | Current Anim ID. If it's not the source one, _pu32Time will contain the new timestamp, relative to the new Anim
number | Pointer to the current timestamp relative to the source Anim \(time elapsed since the beginning of this anim\)
boolean | Animation has been cut
boolean | Animation has requested a target clearing

* C signature:

```c
  orxU32  orxAnimSet_ComputeAnim(orxANIMSET *_pstAnimSet, orxU32 _u32SrcAnim, orxU32 _u32DstAnim, orxFLOAT *_pfTime, orxANIMSET_LINK_TABLE *_pstLinkTable, orxBOOL *_pbCut, orxBOOL *_pbClearTarget)
```

---

### **`orxANIMSET:decreaseCount`**

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

### **`orxANIMSET:delete`**

* Signature:

```lua
r1 = delete()
```

* Description:

> Deletes an AnimSet (non-const self only)

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | 

* C signature:

```c
  orxSTATUS  orxAnimSet_Delete(orxANIMSET *_pstAnimSet)
```

---

### **`orxANIMSET:findNextAnim`**

* Signature:

```lua
r1 = findNextAnim(srcanim, dstanim)
```

* Description:

> Finds next Anim given current and destination Anim IDs (non-const self only)

* Params:

name | type | description 
--- | --- | ---
srcanim | integer | Source (current) Anim ID
dstanim | integer | Destination Anim ID, if none (auto mode) set it to orxU32_UNDEFINED

* Returns:

type | description 
--- | ---
integer | Next Anim ID if found, [orxU32_UNDEFINED](../modules/constants.md#orxu32_undefined) otherwise

* C signature:

```c
  orxU32  orxAnimSet_FindNextAnim(orxANIMSET *_pstAnimSet, orxU32 _u32SrcAnim, orxU32 _u32DstAnim)
```

---

### **`orxANIMSET:getAnim`**

* Signature:

```lua
r1 = getAnim(animid)
```

* Description:

> AnimSet Anim get accessor

* Params:

name | type | description 
--- | --- | ---
animid | integer | Anim ID

* Returns:

type | description 
--- | ---
[orxANIM](./orxANIM.md)  | Anim pointer / nil

* C signature:

```c
  orxANIM * orxAnimSet_GetAnim(const orxANIMSET *_pstAnimSet, orxU32 _u32AnimID)
```

---

### **`orxANIMSET:getAnimCount`**

* Signature:

```lua
r1 = getAnimCount()
```

* Description:

> AnimSet Anim count get accessor

* Params:

* Returns:

type | description 
--- | ---
integer | Anim count / [orxU32_UNDEFINED](../modules/constants.md#orxu32_undefined) 

* C signature:

```c
  orxU32  orxAnimSet_GetAnimCount(const orxANIMSET *_pstAnimSet)
```

---

### **`orxANIMSET:getAnimIDFromName`**

* Signature:

```lua
r1 = getAnimIDFromName(animname)
```

* Description:

> Gets animation ID from name

* Params:

name | type | description 
--- | --- | ---
animname | string | Animation name (config's section)

* Returns:

type | description 
--- | ---
integer | Anim ID / [orxU32_UNDEFINED](../modules/constants.md#orxu32_undefined) 

* C signature:

```c
  orxU32  orxAnimSet_GetAnimIDFromName(const orxANIMSET *_pstAnimSet, const orxSTRING _zAnimName)
```

---

### **`orxANIMSET:getAnimStorageSize`**

* Signature:

```lua
r1 = getAnimStorageSize()
```

* Description:

> AnimSet Anim storage size get accessor

* Params:

* Returns:

type | description 
--- | ---
integer | AnimSet Storage size / [orxU32_UNDEFINED](../modules/constants.md#orxu32_undefined) 

* C signature:

```c
  orxU32  orxAnimSet_GetAnimStorageSize(const orxANIMSET *_pstAnimSet)
```

---

### **`orxANIMSET:getChild`**

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

### **`orxANIMSET:getFlags`**

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

### **`orxANIMSET:getGUID`**

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

### **`orxANIMSET:getID`**

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

### **`orxANIMSET:getLink`**

* Signature:

```lua
r1 = getLink(srcanim, dstanim)
```

* Description:

> Gets a direct link between two Anims, if exists

* Params:

name | type | description 
--- | --- | ---
srcanim | integer | ID of the source Anim
dstanim | integer | ID of the destination Anim

* Returns:

type | description 
--- | ---
integer | ID of the direct link, [orxU32_UNDEFINED](../modules/constants.md#orxu32_undefined) if none

* C signature:

```c
  orxU32  orxAnimSet_GetLink(const orxANIMSET *_pstAnimSet, orxU32 _u32SrcAnim, orxU32 _u32DstAnim)
```

---

### **`orxANIMSET:getLinkProperty`**

* Signature:

```lua
r1 = getLinkProperty(linkid, property)
```

* Description:

> Gets a link property

* Params:

name | type | description 
--- | --- | ---
linkid | integer | ID of the concerned link
property | integer | ID of the property to get

* Returns:

type | description 
--- | ---
integer | Property value / [orxU32_UNDEFINED](../modules/constants.md#orxu32_undefined) 

* C signature:

```c
  orxU32  orxAnimSet_GetLinkProperty(const orxANIMSET *_pstAnimSet, orxU32 _u32LinkID, orxU32 _u32Property)
```

---

### **`orxANIMSET:getName`**

* Signature:

```lua
r1 = getName()
```

* Description:

> AnimSet name get accessor

* Params:

* Returns:

type | description 
--- | ---
string | string / empty string

* C signature:

```c
  const orxSTRING  orxAnimSet_GetName(const orxANIMSET *_pstAnimSet)
```

---

### **`orxANIMSET:getNext`**

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

### **`orxANIMSET:getOwner`**

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

### **`orxANIMSET:getParent`**

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

### **`orxANIMSET:getPrevious`**

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

### **`orxANIMSET:getRefCount`**

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

### **`orxANIMSET:getSibling`**

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

### **`orxANIMSET:increaseCount`**

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

### **`orxANIMSET:removeAllAnims`**

* Signature:

```lua
r1 = removeAllAnims()
```

* Description:

> Removes all Anim from the AnimSet (non-const self only)

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxAnimSet_RemoveAllAnims(orxANIMSET *_pstAnimSet)
```

---

### **`orxANIMSET:removeAnim`**

* Signature:

```lua
r1 = removeAnim(animid)
```

* Description:

> Removes an Anim from an AnimSet (non-const self only)

* Params:

name | type | description 
--- | --- | ---
animid | integer | ID of the anim to remove

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | orxSTATUS_SUCESS / failure

* C signature:

```c
  orxSTATUS  orxAnimSet_RemoveAnim(orxANIMSET *_pstAnimSet, orxU32 _u32AnimID)
```

---

### **`orxANIMSET:removeLink`**

* Signature:

```lua
r1 = removeLink(linkid)
```

* Description:

> Removes a link from the AnimSet (non-const self only)

* Params:

name | type | description 
--- | --- | ---
linkid | integer | ID of the link

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxAnimSet_RemoveLink(orxANIMSET *_pstAnimSet, orxU32 _u32LinkID)
```

---

### **`orxANIMSET:removeReference`**

* Signature:

```lua
removeReference()
```

* Description:

> Removes a reference from an AnimSet (non-const self only)

* Params:

* Returns:

* C signature:

```c
  void  orxAnimSet_RemoveReference(orxANIMSET *_pstAnimSet)
```

---

### **`orxANIMSET:setFlags`**

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

### **`orxANIMSET:setLinkProperty`**

* Signature:

```lua
r1 = setLinkProperty(linkid, property, value)
```

* Description:

> Sets a link property (non-const self only)

* Params:

name | type | description 
--- | --- | ---
linkid | integer | ID of the concerned link
property | integer | ID of the property to set
value | integer | Value of the property to set

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxAnimSet_SetLinkProperty(orxANIMSET *_pstAnimSet, orxU32 _u32LinkID, orxU32 _u32Property, orxU32 _u32Value)
```

---

### **`orxANIMSET:setOwner`**

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

### **`orxANIMSET:setParent`**

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

### **`orxANIMSET:testAllFlags`**

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

### **`orxANIMSET:testFlags`**

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

### **`orxANIMSET:type`**

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

### **`orxANIMSET:update`**

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

