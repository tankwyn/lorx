# type orxFONT

> 

## Methods

### **`orxFONT:addr`**

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

### **`orxFONT:aeq`**

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

### **`orxFONT:asVoid`**

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

### **`orxFONT:decreaseCount`**

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

### **`orxFONT:delete`**

* Signature:

```lua
r1 = delete()
```

* Description:

> Deletes a font (non-const self only)

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxFont_Delete(orxFONT *_pstFont)
```

---

### **`orxFONT:getCharacterHeight`**

* Signature:

```lua
r1 = getCharacterHeight()
```

* Description:

> Gets font's character height

* Params:

* Returns:

type | description 
--- | ---
number | number

* C signature:

```c
  orxFLOAT  orxFont_GetCharacterHeight(const orxFONT *_pstFont)
```

---

### **`orxFONT:getCharacterList`**

* Signature:

```lua
r1 = getCharacterList()
```

* Description:

> Gets font's character list

* Params:

* Returns:

type | description 
--- | ---
string | Font's character list / nil

* C signature:

```c
  const orxSTRING  orxFont_GetCharacterList(const orxFONT *_pstFont)
```

---

### **`orxFONT:getCharacterSpacing`**

* Signature:

```lua
r1 = getCharacterSpacing()
```

* Description:

> Gets font's character spacing

* Params:

* Returns:

type | description 
--- | ---
[orxVECTOR](./orxVECTOR.md)  | [orxVECTOR](./orxVECTOR.md) / nil

* C signature:

```c
  orxVECTOR * orxFont_GetCharacterSpacing(const orxFONT *_pstFont, orxVECTOR *_pvSpacing)
```

---

### **`orxFONT:getCharacterWidth`**

* Signature:

```lua
r1 = getCharacterWidth(charactercodepoint)
```

* Description:

> Gets font's character width

* Params:

name | type | description 
--- | --- | ---
charactercodepoint | integer | Character code point

* Returns:

type | description 
--- | ---
number | number

* C signature:

```c
  orxFLOAT  orxFont_GetCharacterWidth(const orxFONT *_pstFont, orxU32 _u32CharacterCodePoint)
```

---

### **`orxFONT:getChild`**

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

### **`orxFONT:getFlags`**

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

### **`orxFONT:getGUID`**

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

### **`orxFONT:getID`**

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

### **`orxFONT:getMap`**

* Signature:

```lua
r1 = getMap()
```

* Description:

> Gets font's map

* Params:

* Returns:

type | description 
--- | ---
[orxCHARACTER_MAP\#](./orxCHARACTER_MAP.md) | [orxCHARACTER_MAP](./orxCHARACTER_MAP.md) / nil

* C signature:

```c
  const orxCHARACTER_MAP * orxFont_GetMap(const orxFONT *_pstFont)
```

---

### **`orxFONT:getName`**

* Signature:

```lua
r1 = getName()
```

* Description:

> Gets font name

* Params:

* Returns:

type | description 
--- | ---
string | Font name / empty string

* C signature:

```c
  const orxSTRING  orxFont_GetName(const orxFONT *_pstFont)
```

---

### **`orxFONT:getNext`**

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

### **`orxFONT:getOrigin`**

* Signature:

```lua
r1 = getOrigin()
```

* Description:

> Gets font's origin

* Params:

* Returns:

type | description 
--- | ---
[orxVECTOR](./orxVECTOR.md)  | [orxVECTOR](./orxVECTOR.md) / nil

* C signature:

```c
  orxVECTOR * orxFont_GetOrigin(const orxFONT *_pstFont, orxVECTOR *_pvOrigin)
```

---

### **`orxFONT:getOwner`**

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

### **`orxFONT:getParent`**

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

### **`orxFONT:getPrevious`**

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

### **`orxFONT:getRefCount`**

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

### **`orxFONT:getSibling`**

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

### **`orxFONT:getSize`**

* Signature:

```lua
r1 = getSize()
```

* Description:

> Gets font's size

* Params:

* Returns:

type | description 
--- | ---
[orxVECTOR](./orxVECTOR.md)  | [orxVECTOR](./orxVECTOR.md) / nil

* C signature:

```c
  orxVECTOR * orxFont_GetSize(const orxFONT *_pstFont, orxVECTOR *_pvSize)
```

---

### **`orxFONT:getTexture`**

* Signature:

```lua
r1 = getTexture()
```

* Description:

> Gets font's texture

* Params:

* Returns:

type | description 
--- | ---
[orxTEXTURE](./orxTEXTURE.md)  | Font texture / nil

* C signature:

```c
  orxTEXTURE * orxFont_GetTexture(const orxFONT *_pstFont)
```

---

### **`orxFONT:increaseCount`**

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

### **`orxFONT:setCharacterHeight`**

* Signature:

```lua
r1 = setCharacterHeight(characterheight)
```

* Description:

> Sets font's character height (non-const self only)

* Params:

name | type | description 
--- | --- | ---
characterheight | number | Character's height

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxFont_SetCharacterHeight(orxFONT *_pstFont, orxFLOAT _fCharacterHeight)
```

---

### **`orxFONT:setCharacterList`**

* Signature:

```lua
r1 = setCharacterList(list)
```

* Description:

> Sets font's character list (non-const self only)

* Params:

name | type | description 
--- | --- | ---
list | string | Character list

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxFont_SetCharacterList(orxFONT *_pstFont, const orxSTRING _zList)
```

---

### **`orxFONT:setCharacterSpacing`**

* Signature:

```lua
r1 = setCharacterSpacing(spacing)
```

* Description:

> Sets font's character spacing (non-const self only)

* Params:

name | type | description 
--- | --- | ---
spacing | [orxVECTOR\#](./orxVECTOR.md) | Character's spacing

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxFont_SetCharacterSpacing(orxFONT *_pstFont, const orxVECTOR *_pvSpacing)
```

---

### **`orxFONT:setCharacterWidthList`**

* Signature:

```lua
r1 = setCharacterWidthList(characternumber, characterwidthlist)
```

* Description:

> Sets font's character width list (non-const self only)

* Params:

name | type | description 
--- | --- | ---
characternumber | integer | Character's number
characterwidthlist | table of number | List of widths for all the characters

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxFont_SetCharacterWidthList(orxFONT *_pstFont, orxU32 _u32CharacterNumber, const orxFLOAT *_afCharacterWidthList)
```

---

### **`orxFONT:setFlags`**

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

### **`orxFONT:setOrigin`**

* Signature:

```lua
r1 = setOrigin(origin)
```

* Description:

> Sets font's origin (non-const self only)

* Params:

name | type | description 
--- | --- | ---
origin | [orxVECTOR\#](./orxVECTOR.md) | Font's origin

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxFont_SetOrigin(orxFONT *_pstFont, const orxVECTOR *_pvOrigin)
```

---

### **`orxFONT:setOwner`**

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

### **`orxFONT:setParent`**

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

### **`orxFONT:setSize`**

* Signature:

```lua
r1 = setSize(size)
```

* Description:

> Sets font's size (non-const self only)

* Params:

name | type | description 
--- | --- | ---
size | [orxVECTOR\#](./orxVECTOR.md) | Font's size

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxFont_SetSize(orxFONT *_pstFont, const orxVECTOR *_pvSize)
```

---

### **`orxFONT:setTexture`**

* Signature:

```lua
r1 = setTexture(texture)
```

* Description:

> Sets font's texture (non-const self only)

* Params:

name | type | description 
--- | --- | ---
texture | [orxTEXTURE](./orxTEXTURE.md)  | Texture to set

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxFont_SetTexture(orxFONT *_pstFont, orxTEXTURE *_pstTexture)
```

---

### **`orxFONT:testAllFlags`**

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

### **`orxFONT:testFlags`**

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

### **`orxFONT:type`**

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

### **`orxFONT:update`**

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

