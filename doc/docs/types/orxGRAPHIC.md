# type orxGRAPHIC

> 

## Methods

### **`orxGRAPHIC:addr`**

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

### **`orxGRAPHIC:aeq`**

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

### **`orxGRAPHIC:asVoid`**

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

### **`orxGRAPHIC:clearBlendMode`**

* Signature:

```lua
r1 = clearBlendMode()
```

* Description:

> Clears graphic blend mode (non-const self only)

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxGraphic_ClearBlendMode(orxGRAPHIC *_pstGraphic)
```

---

### **`orxGRAPHIC:clearColor`**

* Signature:

```lua
r1 = clearColor()
```

* Description:

> Clears graphic color (non-const self only)

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxGraphic_ClearColor(orxGRAPHIC *_pstGraphic)
```

---

### **`orxGRAPHIC:clone`**

* Signature:

```lua
r1 = clone()
```

* Description:

> Clones a graphic

* Params:

* Returns:

type | description 
--- | ---
[orxGRAPHIC](./orxGRAPHIC.md)  | [orxGRAPHIC](./orxGRAPHIC.md) / nil

* C signature:

```c
  orxGRAPHIC * orxGraphic_Clone(const orxGRAPHIC *_pstGraphic)
```

---

### **`orxGRAPHIC:decreaseCount`**

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

### **`orxGRAPHIC:delete`**

* Signature:

```lua
r1 = delete()
```

* Description:

> Deletes a graphic (non-const self only)

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxGraphic_Delete(orxGRAPHIC *_pstGraphic)
```

---

### **`orxGRAPHIC:getBlendMode`**

* Signature:

```lua
r1 = getBlendMode()
```

* Description:

> Gets graphic blend mode

* Params:

* Returns:

type | description 
--- | ---
[orxDISPLAY_BLEND_MODE](../enums.md#orxdisplay_blend_mode)  | Blend mode \(alpha, multiply, add or none\)

* C signature:

```c
  orxDISPLAY_BLEND_MODE  orxGraphic_GetBlendMode(const orxGRAPHIC *_pstGraphic)
```

---

### **`orxGRAPHIC:getChild`**

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

### **`orxGRAPHIC:getColor`**

* Signature:

```lua
r1 = getColor()
```

* Description:

> Gets graphic color

* Params:

* Returns:

type | description 
--- | ---
[orxCOLOR](./orxCOLOR.md)  | [orxCOLOR](./orxCOLOR.md) / nil

* C signature:

```c
  orxCOLOR * orxGraphic_GetColor(const orxGRAPHIC *_pstGraphic, orxCOLOR *_pstColor)
```

---

### **`orxGRAPHIC:getData`**

* Signature:

```lua
r1 = getData()
```

* Description:

> Gets graphic data

* Params:

* Returns:

type | description 
--- | ---
[orxSTRUCTURE](./orxSTRUCTURE.md)  | OrxSTRUCTURE / nil

* C signature:

```c
  orxSTRUCTURE * orxGraphic_GetData(const orxGRAPHIC *_pstGraphic)
```

---

### **`orxGRAPHIC:getFlags`**

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

### **`orxGRAPHIC:getFlip`**

* Signature:

```lua
r1, r2, r3 = getFlip()
```

* Description:

> Gets graphic flipping

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure
boolean | X axis flipping
boolean | Y axis flipping

* C signature:

```c
  orxSTATUS  orxGraphic_GetFlip(const orxGRAPHIC *_pstGraphic, orxBOOL *_pbFlipX, orxBOOL *_pbFlipY)
```

---

### **`orxGRAPHIC:getGUID`**

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

### **`orxGRAPHIC:getID`**

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

### **`orxGRAPHIC:getName`**

* Signature:

```lua
r1 = getName()
```

* Description:

> Gets graphic config name

* Params:

* Returns:

type | description 
--- | ---
string | string / empty string

* C signature:

```c
  const orxSTRING  orxGraphic_GetName(const orxGRAPHIC *_pstGraphic)
```

---

### **`orxGRAPHIC:getNext`**

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

### **`orxGRAPHIC:getOrigin`**

* Signature:

```lua
r1 = getOrigin()
```

* Description:

> Gets graphic origin

* Params:

* Returns:

type | description 
--- | ---
[orxVECTOR](./orxVECTOR.md)  | Origin coordinates

* C signature:

```c
  orxVECTOR * orxGraphic_GetOrigin(const orxGRAPHIC *_pstGraphic, orxVECTOR *_pvOrigin)
```

---

### **`orxGRAPHIC:getOwner`**

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

### **`orxGRAPHIC:getParent`**

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

### **`orxGRAPHIC:getPivot`**

* Signature:

```lua
r1 = getPivot()
```

* Description:

> Gets graphic pivot

* Params:

* Returns:

type | description 
--- | ---
[orxVECTOR](./orxVECTOR.md)  | orxPIVOT / nil

* C signature:

```c
  orxVECTOR * orxGraphic_GetPivot(const orxGRAPHIC *_pstGraphic, orxVECTOR *_pvPivot)
```

---

### **`orxGRAPHIC:getPrevious`**

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

### **`orxGRAPHIC:getRefCount`**

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

### **`orxGRAPHIC:getRepeat`**

* Signature:

```lua
r1, r2, r3 = getRepeat()
```

* Description:

> Gets graphic repeat \(wrap\) values

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure
number | X-axis repeat value
number | Y-axis repeat value

* C signature:

```c
  orxSTATUS  orxGraphic_GetRepeat(const orxGRAPHIC *_pstGraphic, orxFLOAT *_pfRepeatX, orxFLOAT *_pfRepeatY)
```

---

### **`orxGRAPHIC:getSibling`**

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

### **`orxGRAPHIC:getSize`**

* Signature:

```lua
r1 = getSize()
```

* Description:

> Gets graphic size

* Params:

* Returns:

type | description 
--- | ---
[orxVECTOR](./orxVECTOR.md)  | [orxVECTOR](./orxVECTOR.md) / nil

* C signature:

```c
  orxVECTOR * orxGraphic_GetSize(const orxGRAPHIC *_pstGraphic, orxVECTOR *_pvSize)
```

---

### **`orxGRAPHIC:getSmoothing`**

* Signature:

```lua
r1 = getSmoothing()
```

* Description:

> Gets graphic smoothing

* Params:

* Returns:

type | description 
--- | ---
[orxDISPLAY_SMOOTHING](../enums.md#orxdisplay_smoothing)  | Smoothing type \(enabled, default or none\)

* C signature:

```c
  orxDISPLAY_SMOOTHING  orxGraphic_GetSmoothing(const orxGRAPHIC *_pstGraphic)
```

---

### **`orxGRAPHIC:hasBlendMode`**

* Signature:

```lua
r1 = hasBlendMode()
```

* Description:

> Graphic has blend mode accessor

* Params:

* Returns:

type | description 
--- | ---
boolean | true / false

* C signature:

```c
  orxBOOL  orxGraphic_HasBlendMode(const orxGRAPHIC *_pstGraphic)
```

---

### **`orxGRAPHIC:hasColor`**

* Signature:

```lua
r1 = hasColor()
```

* Description:

> Graphic has color accessor

* Params:

* Returns:

type | description 
--- | ---
boolean | true / false

* C signature:

```c
  orxBOOL  orxGraphic_HasColor(const orxGRAPHIC *_pstGraphic)
```

---

### **`orxGRAPHIC:increaseCount`**

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

### **`orxGRAPHIC:setBlendMode`**

* Signature:

```lua
r1 = setBlendMode(blendmode)
```

* Description:

> Sets object blend mode (non-const self only)

* Params:

name | type | description 
--- | --- | ---
blendmode | [orxDISPLAY_BLEND_MODE](../enums.md#orxdisplay_blend_mode)  | Blend mode (alpha, multiply, add or none)

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxGraphic_SetBlendMode(orxGRAPHIC *_pstGraphic, orxDISPLAY_BLEND_MODE _eBlendMode)
```

---

### **`orxGRAPHIC:setColor`**

* Signature:

```lua
r1 = setColor(color)
```

* Description:

> Sets graphic color (non-const self only)

* Params:

name | type | description 
--- | --- | ---
color | [orxCOLOR\#](./orxCOLOR.md) | Color to set

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxGraphic_SetColor(orxGRAPHIC *_pstGraphic, const orxCOLOR *_pstColor)
```

---

### **`orxGRAPHIC:setData`**

* Signature:

```lua
r1 = setData(data)
```

* Description:

> Sets graphic data (non-const self only)

* Params:

name | type | description 
--- | --- | ---
data | [orxSTRUCTURE](./orxSTRUCTURE.md)  | Data structure to set / nil

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxGraphic_SetData(orxGRAPHIC *_pstGraphic, orxSTRUCTURE *_pstData)
```

---

### **`orxGRAPHIC:setFlags`**

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

### **`orxGRAPHIC:setFlip`**

* Signature:

```lua
r1 = setFlip(flipx, flipy)
```

* Description:

> Sets graphic flipping (non-const self only)

* Params:

name | type | description 
--- | --- | ---
flipx | boolean | Flip it on X axis
flipy | boolean | Flip it on Y axis

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxGraphic_SetFlip(orxGRAPHIC *_pstGraphic, orxBOOL _bFlipX, orxBOOL _bFlipY)
```

---

### **`orxGRAPHIC:setOrigin`**

* Signature:

```lua
r1 = setOrigin(origin)
```

* Description:

> Sets graphic origin (non-const self only)

* Params:

name | type | description 
--- | --- | ---
origin | [orxVECTOR\#](./orxVECTOR.md) | Origin coordinates

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxGraphic_SetOrigin(orxGRAPHIC *_pstGraphic, const orxVECTOR *_pvOrigin)
```

---

### **`orxGRAPHIC:setOwner`**

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

### **`orxGRAPHIC:setParent`**

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

### **`orxGRAPHIC:setPivot`**

* Signature:

```lua
r1 = setPivot(pivot)
```

* Description:

> Sets graphic pivot (non-const self only)

* Params:

name | type | description 
--- | --- | ---
pivot | [orxVECTOR\#](./orxVECTOR.md) | Pivot to set

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxGraphic_SetPivot(orxGRAPHIC *_pstGraphic, const orxVECTOR *_pvPivot)
```

---

### **`orxGRAPHIC:setRelativePivot`**

* Signature:

```lua
r1 = setRelativePivot(alignflags)
```

* Description:

> Sets relative graphic pivot (non-const self only)

* Params:

name | type | description 
--- | --- | ---
alignflags | integer | Alignment flags

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxGraphic_SetRelativePivot(orxGRAPHIC *_pstGraphic, orxU32 _u32AlignFlags)
```

---

### **`orxGRAPHIC:setRepeat`**

* Signature:

```lua
r1 = setRepeat(repeatx, repeaty)
```

* Description:

> Sets graphic repeat \(wrap\) value (non-const self only)

* Params:

name | type | description 
--- | --- | ---
repeatx | number | X-axis repeat value
repeaty | number | Y-axis repeat value

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxGraphic_SetRepeat(orxGRAPHIC *_pstGraphic, orxFLOAT _fRepeatX, orxFLOAT _fRepeatY)
```

---

### **`orxGRAPHIC:setSize`**

* Signature:

```lua
r1 = setSize(size)
```

* Description:

> Sets graphic size (non-const self only)

* Params:

name | type | description 
--- | --- | ---
size | [orxVECTOR\#](./orxVECTOR.md) | Size to set

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxGraphic_SetSize(orxGRAPHIC *_pstGraphic, const orxVECTOR *_pvSize)
```

---

### **`orxGRAPHIC:setSmoothing`**

* Signature:

```lua
r1 = setSmoothing(smoothing)
```

* Description:

> Sets graphic smoothing (non-const self only)

* Params:

name | type | description 
--- | --- | ---
smoothing | [orxDISPLAY_SMOOTHING](../enums.md#orxdisplay_smoothing)  | Smoothing type (enabled, default or none)

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxGraphic_SetSmoothing(orxGRAPHIC *_pstGraphic, orxDISPLAY_SMOOTHING _eSmoothing)
```

---

### **`orxGRAPHIC:testAllFlags`**

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

### **`orxGRAPHIC:testFlags`**

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

### **`orxGRAPHIC:type`**

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

### **`orxGRAPHIC:update`**

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

### **`orxGRAPHIC:updateSize`**

* Signature:

```lua
r1 = updateSize()
```

* Description:

> Updates graphic size \(recompute\) (non-const self only)

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxGraphic_UpdateSize(orxGRAPHIC *_pstGraphic)
```

---

