# type orxVIEWPORT

> 

## Methods

### **`orxVIEWPORT:addShader`**

* Signature:

```lua
r1 = addShader(shaderconfigid)
```

* Description:

> Adds a shader to a viewport using its config ID (non-const self only)

* Params:

name | type | description 
--- | --- | ---
shaderconfigid | string | Config ID of the shader to add

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxViewport_AddShader(orxVIEWPORT *_pstViewport, const orxSTRING _zShaderConfigID)
```

---

### **`orxVIEWPORT:addr`**

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

### **`orxVIEWPORT:aeq`**

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

### **`orxVIEWPORT:asVoid`**

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

### **`orxVIEWPORT:clearBackgroundColor`**

* Signature:

```lua
r1 = clearBackgroundColor()
```

* Description:

> Clears viewport background color (non-const self only)

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxViewport_ClearBackgroundColor(orxVIEWPORT *_pstViewport)
```

---

### **`orxVIEWPORT:decreaseCount`**

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

### **`orxVIEWPORT:delete`**

* Signature:

```lua
r1 = delete()
```

* Description:

> Deletes a viewport (non-const self only)

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxViewport_Delete(orxVIEWPORT *_pstViewport)
```

---

### **`orxVIEWPORT:enable`**

* Signature:

```lua
enable(enable)
```

* Description:

> Enables / disables a viewport (non-const self only)

* Params:

name | type | description 
--- | --- | ---
enable | boolean | Enable / disable

* Returns:

* C signature:

```c
  void  orxViewport_Enable(orxVIEWPORT *_pstViewport, orxBOOL _bEnable)
```

---

### **`orxVIEWPORT:enableShader`**

* Signature:

```lua
enableShader(enable)
```

* Description:

> Enables a viewport's shader (non-const self only)

* Params:

name | type | description 
--- | --- | ---
enable | boolean | Enable / disable

* Returns:

* C signature:

```c
  void  orxViewport_EnableShader(orxVIEWPORT *_pstViewport, orxBOOL _bEnable)
```

---

### **`orxVIEWPORT:getBackgroundColor`**

* Signature:

```lua
r1 = getBackgroundColor()
```

* Description:

> Gets a viewport background color

* Params:

* Returns:

type | description 
--- | ---
[orxCOLOR](./orxCOLOR.md)  | Current background color

* C signature:

```c
  orxCOLOR * orxViewport_GetBackgroundColor(const orxVIEWPORT *_pstViewport, orxCOLOR *_pstColor)
```

---

### **`orxVIEWPORT:getBlendMode`**

* Signature:

```lua
r1 = getBlendMode()
```

* Description:

> Gets a viewport blend mode

* Params:

* Returns:

type | description 
--- | ---
[orxDISPLAY_BLEND_MODE](../enums.md#orxdisplay_blend_mode)  | [orxDISPLAY_BLEND_MODE](../enums.md#orxdisplay_blend_mode) 

* C signature:

```c
  orxDISPLAY_BLEND_MODE  orxViewport_GetBlendMode(const orxVIEWPORT *_pstViewport)
```

---

### **`orxVIEWPORT:getBox`**

* Signature:

```lua
r1 = getBox()
```

* Description:

> Gets an axis aligned box of viewport

* Params:

* Returns:

type | description 
--- | ---
[orxAABOX](./orxAABOX.md)  | [orxAABOX](./orxAABOX.md) / nil

* C signature:

```c
  orxAABOX * orxViewport_GetBox(const orxVIEWPORT *_pstViewport, orxAABOX *_pstBox)
```

---

### **`orxVIEWPORT:getCamera`**

* Signature:

```lua
r1 = getCamera()
```

* Description:

> Gets a viewport camera

* Params:

* Returns:

type | description 
--- | ---
[orxCAMERA](./orxCAMERA.md)  | Associated camera / nil

* C signature:

```c
  orxCAMERA * orxViewport_GetCamera(const orxVIEWPORT *_pstViewport)
```

---

### **`orxVIEWPORT:getChild`**

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

### **`orxVIEWPORT:getCorrectionRatio`**

* Signature:

```lua
r1 = getCorrectionRatio()
```

* Description:

> Get viewport correction ratio

* Params:

* Returns:

type | description 
--- | ---
number | Correction ratio value

* C signature:

```c
  orxFLOAT  orxViewport_GetCorrectionRatio(const orxVIEWPORT *_pstViewport)
```

---

### **`orxVIEWPORT:getFlags`**

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

### **`orxVIEWPORT:getGUID`**

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

### **`orxVIEWPORT:getID`**

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

### **`orxVIEWPORT:getName`**

* Signature:

```lua
r1 = getName()
```

* Description:

> Gets viewport config name

* Params:

* Returns:

type | description 
--- | ---
string | string / empty string

* C signature:

```c
  const orxSTRING  orxViewport_GetName(const orxVIEWPORT *_pstViewport)
```

---

### **`orxVIEWPORT:getNext`**

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

### **`orxVIEWPORT:getOwner`**

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

### **`orxVIEWPORT:getParent`**

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

### **`orxVIEWPORT:getPosition`**

* Signature:

```lua
r1, r2 = getPosition()
```

* Description:

> Gets a viewport position

* Params:

* Returns:

type | description 
--- | ---
number | X axis position \(top left corner\)
number | Y axis position \(top left corner\)

* C signature:

```c
  void  orxViewport_GetPosition(const orxVIEWPORT *_pstViewport, orxFLOAT *_pfX, orxFLOAT *_pfY)
```

---

### **`orxVIEWPORT:getPrevious`**

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

### **`orxVIEWPORT:getRefCount`**

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

### **`orxVIEWPORT:getRelativeSize`**

* Signature:

```lua
r1, r2 = getRelativeSize()
```

* Description:

> Gets a viewport relative size

* Params:

* Returns:

type | description 
--- | ---
number | Relative width
number | Relative height

* C signature:

```c
  void  orxViewport_GetRelativeSize(const orxVIEWPORT *_pstViewport, orxFLOAT *_pfWidth, orxFLOAT *_pfHeight)
```

---

### **`orxVIEWPORT:getShaderPointer`**

* Signature:

```lua
r1 = getShaderPointer()
```

* Description:

> Gets a viewport's shader pointer

* Params:

* Returns:

type | description 
--- | ---
[orxSHADERPOINTER\#](./orxSHADERPOINTER.md) | [orxSHADERPOINTER](./orxSHADERPOINTER.md) / nil

* C signature:

```c
  const orxSHADERPOINTER * orxViewport_GetShaderPointer(const orxVIEWPORT *_pstViewport)
```

---

### **`orxVIEWPORT:getSibling`**

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

### **`orxVIEWPORT:getSize`**

* Signature:

```lua
r1, r2 = getSize()
```

* Description:

> Gets a viewport size

* Params:

* Returns:

type | description 
--- | ---
number | Width
number | Height

* C signature:

```c
  void  orxViewport_GetSize(const orxVIEWPORT *_pstViewport, orxFLOAT *_pfWidth, orxFLOAT *_pfHeight)
```

---

### **`orxVIEWPORT:getTextureCount`**

* Signature:

```lua
r1 = getTextureCount()
```

* Description:

> Gets a viewport texture count

* Params:

* Returns:

type | description 
--- | ---
integer | Number of textures associated with the viewport

* C signature:

```c
  orxU32  orxViewport_GetTextureCount(const orxVIEWPORT *_pstViewport)
```

---

### **`orxVIEWPORT:getTextureList`**

* Signature:

```lua
r1, r2 = getTextureList(texturenumber)
```

* Description:

> Gets a viewport texture list

* Params:

name | type | description 
--- | --- | ---
texturenumber | integer | Number of textures to be retrieved

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure
table of [orxTEXTURE](./orxTEXTURE.md)  | List of textures associated with the viewport

* C signature:

```c
  orxSTATUS  orxViewport_GetTextureList(const orxVIEWPORT *_pstViewport, orxU32 _u32TextureNumber, orxTEXTURE **_apstTextureList)
```

---

### **`orxVIEWPORT:hasBackgroundColor`**

* Signature:

```lua
r1 = hasBackgroundColor()
```

* Description:

> Viewport has background color accessor

* Params:

* Returns:

type | description 
--- | ---
boolean | true / false

* C signature:

```c
  orxBOOL  orxViewport_HasBackgroundColor(const orxVIEWPORT *_pstViewport)
```

---

### **`orxVIEWPORT:increaseCount`**

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

### **`orxVIEWPORT:isEnabled`**

* Signature:

```lua
r1 = isEnabled()
```

* Description:

> Is a viewport enabled?

* Params:

* Returns:

type | description 
--- | ---
boolean | true / false

* C signature:

```c
  orxBOOL  orxViewport_IsEnabled(const orxVIEWPORT *_pstViewport)
```

---

### **`orxVIEWPORT:isShaderEnabled`**

* Signature:

```lua
r1 = isShaderEnabled()
```

* Description:

> Is a viewport's shader enabled?

* Params:

* Returns:

type | description 
--- | ---
boolean | true if enabled, false otherwise

* C signature:

```c
  orxBOOL  orxViewport_IsShaderEnabled(const orxVIEWPORT *_pstViewport)
```

---

### **`orxVIEWPORT:removeShader`**

* Signature:

```lua
r1 = removeShader(shaderconfigid)
```

* Description:

> Removes a shader using its config ID (non-const self only)

* Params:

name | type | description 
--- | --- | ---
shaderconfigid | string | Config ID of the shader to remove

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxViewport_RemoveShader(orxVIEWPORT *_pstViewport, const orxSTRING _zShaderConfigID)
```

---

### **`orxVIEWPORT:setBackgroundColor`**

* Signature:

```lua
r1 = setBackgroundColor(color)
```

* Description:

> Sets a viewport background color (non-const self only)

* Params:

name | type | description 
--- | --- | ---
color | [orxCOLOR\#](./orxCOLOR.md) | Color to use for background

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxViewport_SetBackgroundColor(orxVIEWPORT *_pstViewport, const orxCOLOR *_pstColor)
```

---

### **`orxVIEWPORT:setBlendMode`**

* Signature:

```lua
r1 = setBlendMode(blendmode)
```

* Description:

> Sets a viewport blend mode \(only used when has active shaders attached\) (non-const self only)

* Params:

name | type | description 
--- | --- | ---
blendmode | [orxDISPLAY_BLEND_MODE](../enums.md#orxdisplay_blend_mode)  | Blend mode to set

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | 

* C signature:

```c
  orxSTATUS  orxViewport_SetBlendMode(orxVIEWPORT *_pstViewport, orxDISPLAY_BLEND_MODE _eBlendMode)
```

---

### **`orxVIEWPORT:setCamera`**

* Signature:

```lua
setCamera(camera)
```

* Description:

> Sets a viewport camera (non-const self only)

* Params:

name | type | description 
--- | --- | ---
camera | [orxCAMERA](./orxCAMERA.md)  | Associated camera

* Returns:

* C signature:

```c
  void  orxViewport_SetCamera(orxVIEWPORT *_pstViewport, orxCAMERA *_pstCamera)
```

---

### **`orxVIEWPORT:setFlags`**

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

### **`orxVIEWPORT:setOwner`**

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

### **`orxVIEWPORT:setParent`**

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

### **`orxVIEWPORT:setPosition`**

* Signature:

```lua
setPosition(x, y)
```

* Description:

> Sets a viewport position (non-const self only)

* Params:

name | type | description 
--- | --- | ---
x | number | X axis position (top left corner)
y | number | Y axis position (top left corner)

* Returns:

* C signature:

```c
  void  orxViewport_SetPosition(orxVIEWPORT *_pstViewport, orxFLOAT _fX, orxFLOAT _fY)
```

---

### **`orxVIEWPORT:setRelativePosition`**

* Signature:

```lua
r1 = setRelativePosition(alignflags)
```

* Description:

> Sets a viewport relative position (non-const self only)

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
  orxSTATUS  orxViewport_SetRelativePosition(orxVIEWPORT *_pstViewport, orxU32 _u32AlignFlags)
```

---

### **`orxVIEWPORT:setRelativeSize`**

* Signature:

```lua
r1 = setRelativeSize(width, height)
```

* Description:

> Sets a viewport relative size (non-const self only)

* Params:

name | type | description 
--- | --- | ---
width | number | Relative width (0.0f - 1.0f)
height | number | Relative height (0.0f - 1.0f)

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxViewport_SetRelativeSize(orxVIEWPORT *_pstViewport, orxFLOAT _fWidth, orxFLOAT _fHeight)
```

---

### **`orxVIEWPORT:setSize`**

* Signature:

```lua
setSize(width, height)
```

* Description:

> Sets a viewport size (non-const self only)

* Params:

name | type | description 
--- | --- | ---
width | number | Width
height | number | Height

* Returns:

* C signature:

```c
  void  orxViewport_SetSize(orxVIEWPORT *_pstViewport, orxFLOAT _fWidth, orxFLOAT _fHeight)
```

---

### **`orxVIEWPORT:setTextureList`**

* Signature:

```lua
setTextureList(texturenumber, texturelist)
```

* Description:

> Sets a viewport texture list (non-const self only)

* Params:

name | type | description 
--- | --- | ---
texturenumber | integer | Number of textures to associate with the viewport
texturelist | table of [orxTEXTURE](./orxTEXTURE.md)  | List of textures to associate with the viewport

* Returns:

* C signature:

```c
  void  orxViewport_SetTextureList(orxVIEWPORT *_pstViewport, orxU32 _u32TextureNumber, orxTEXTURE **_apstTextureList)
```

---

### **`orxVIEWPORT:testAllFlags`**

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

### **`orxVIEWPORT:testFlags`**

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

### **`orxVIEWPORT:type`**

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

### **`orxVIEWPORT:update`**

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

