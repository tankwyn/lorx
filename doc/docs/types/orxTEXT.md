# type orxTEXT

> 

## Methods

### **`orxTEXT:addr`**

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

### **`orxTEXT:aeq`**

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

### **`orxTEXT:asVoid`**

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

### **`orxTEXT:decreaseCount`**

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

### **`orxTEXT:delete`**

* Signature:

```lua
r1 = delete()
```

* Description:

> Deletes a text (non-const self only)

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxText_Delete(orxTEXT *_pstText)
```

---

### **`orxTEXT:getChild`**

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

### **`orxTEXT:getFlags`**

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

### **`orxTEXT:getFont`**

* Signature:

```lua
r1 = getFont()
```

* Description:

> Gets text font

* Params:

* Returns:

type | description 
--- | ---
[orxFONT](./orxFONT.md)  | Text font / nil

* C signature:

```c
  orxFONT * orxText_GetFont(const orxTEXT *_pstText)
```

---

### **`orxTEXT:getGUID`**

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

### **`orxTEXT:getID`**

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

### **`orxTEXT:getLineCount`**

* Signature:

```lua
r1 = getLineCount()
```

* Description:

> Gets text's line count

* Params:

* Returns:

type | description 
--- | ---
integer | integer \(u32\)

* C signature:

```c
  orxU32  orxText_GetLineCount(const orxTEXT *_pstText)
```

---

### **`orxTEXT:getLineSize`**

* Signature:

```lua
r1, r2, r3 = getLineSize(line)
```

* Description:

> Gets text's line size

* Params:

name | type | description 
--- | --- | ---
line | integer | Line index

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure
number | Line's width
number | Line's height

* C signature:

```c
  orxSTATUS  orxText_GetLineSize(const orxTEXT *_pstText, orxU32 _u32Line, orxFLOAT *_pfWidth, orxFLOAT *_pfHeight)
```

---

### **`orxTEXT:getName`**

* Signature:

```lua
r1 = getName()
```

* Description:

> Gets text name

* Params:

* Returns:

type | description 
--- | ---
string | Text name / nil

* C signature:

```c
  const orxSTRING  orxText_GetName(const orxTEXT *_pstText)
```

---

### **`orxTEXT:getNext`**

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

### **`orxTEXT:getOwner`**

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

### **`orxTEXT:getParent`**

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

### **`orxTEXT:getPrevious`**

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

### **`orxTEXT:getRefCount`**

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

### **`orxTEXT:getSibling`**

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

### **`orxTEXT:getSize`**

* Signature:

```lua
r1, r2, r3 = getSize()
```

* Description:

> Gets text size

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure
number | Text's width
number | Text's height

* C signature:

```c
  orxSTATUS  orxText_GetSize(const orxTEXT *_pstText, orxFLOAT *_pfWidth, orxFLOAT *_pfHeight)
```

---

### **`orxTEXT:getString`**

* Signature:

```lua
r1 = getString()
```

* Description:

> Gets text string

* Params:

* Returns:

type | description 
--- | ---
string | Text string / empty string

* C signature:

```c
  const orxSTRING  orxText_GetString(const orxTEXT *_pstText)
```

---

### **`orxTEXT:increaseCount`**

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

### **`orxTEXT:isFixedSize`**

* Signature:

```lua
r1 = isFixedSize()
```

* Description:

> Is text's size fixed? \(ie. manually constrained with orxText_SetSize\(\)\)

* Params:

* Returns:

type | description 
--- | ---
boolean | true / false

* C signature:

```c
  orxBOOL  orxText_IsFixedSize(const orxTEXT *_pstText)
```

---

### **`orxTEXT:setFlags`**

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

### **`orxTEXT:setFont`**

* Signature:

```lua
r1 = setFont(font)
```

* Description:

> Sets text font (non-const self only)

* Params:

name | type | description 
--- | --- | ---
font | [orxFONT](./orxFONT.md)  | Font / nil to use default

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxText_SetFont(orxTEXT *_pstText, orxFONT *_pstFont)
```

---

### **`orxTEXT:setOwner`**

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

### **`orxTEXT:setParent`**

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

### **`orxTEXT:setSize`**

* Signature:

```lua
r1, r2 = setSize(width, height)
```

* Description:

> Sets text's size, will lead to reformatting if text doesn't fit \(pass width = -1.0f to restore text's original size, ie. unconstrained\) (non-const self only)

* Params:

name | type | description 
--- | --- | ---
width | number | Max width for the text, remove any size constraint if negative
height | number | Max height for the text, ignored if negative (ie. unconstrained height)

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure
string | Text that wouldn't fit inside the box if height is provided, empty string if no extra, nil to ignore

* C signature:

```c
  orxSTATUS  orxText_SetSize(orxTEXT *_pstText, orxFLOAT _fWidth, orxFLOAT _fHeight, const orxSTRING *_pzExtra)
```

---

### **`orxTEXT:setString`**

* Signature:

```lua
r1 = setString(string)
```

* Description:

> Sets text string (non-const self only)

* Params:

name | type | description 
--- | --- | ---
string | string | String to contain

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxText_SetString(orxTEXT *_pstText, const orxSTRING _zString)
```

---

### **`orxTEXT:testAllFlags`**

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

### **`orxTEXT:testFlags`**

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

### **`orxTEXT:type`**

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

### **`orxTEXT:update`**

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

