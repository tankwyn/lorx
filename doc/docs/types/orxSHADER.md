# type orxSHADER

> 

## Methods

### **`orxSHADER:addFloatParam`**

* Signature:

```lua
r1 = addFloatParam(name, arraysize, valuelist)
```

* Description:

> Adds a float parameter definition to a shader \(parameters need to be set before compiling the shader code\) (non-const self only)

* Params:

name | type | description 
--- | --- | ---
name | string | Parameter's literal name
arraysize | integer | Parameter's array size, 0 for simple variable
valuelist | table of number | Parameter's float value list

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxShader_AddFloatParam(orxSHADER *_pstShader, const orxSTRING _zName, orxU32 _u32ArraySize, const orxFLOAT *_afValueList)
```

---

### **`orxSHADER:addTextureParam`**

* Signature:

```lua
r1 = addTextureParam(name, arraysize, valuelist)
```

* Description:

> Adds a texture parameter definition to a shader \(parameters need to be set before compiling the shader code\) (non-const self only)

* Params:

name | type | description 
--- | --- | ---
name | string | Parameter's literal name
arraysize | integer | Parameter's array size, 0 simple variable
valuelist | table of [orxTEXTURE\#](./orxTEXTURE.md) | Parameter's texture value list

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxShader_AddTextureParam(orxSHADER *_pstShader, const orxSTRING _zName, orxU32 _u32ArraySize, const orxTEXTURE **_apstValueList)
```

---

### **`orxSHADER:addTimeParam`**

* Signature:

```lua
r1 = addTimeParam(name)
```

* Description:

> Adds a time parameter definition to a shader \(parameters need to be set before compiling the shader code\) (non-const self only)

* Params:

name | type | description 
--- | --- | ---
name | string | Parameter's literal name

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxShader_AddTimeParam(orxSHADER *_pstShader, const orxSTRING _zName)
```

---

### **`orxSHADER:addVectorParam`**

* Signature:

```lua
r1 = addVectorParam(name, arraysize, valuelist)
```

* Description:

> Adds a vector parameter definition to a shader \(parameters need to be set before compiling the shader code\) (non-const self only)

* Params:

name | type | description 
--- | --- | ---
name | string | Parameter's literal name
arraysize | integer | Parameter's array size, 0 for simple variable
valuelist | table of [orxVECTOR](./orxVECTOR.md)  | Parameter's vector value list

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxShader_AddVectorParam(orxSHADER *_pstShader, const orxSTRING _zName, orxU32 _u32ArraySize, const orxVECTOR *_avValueList)
```

---

### **`orxSHADER:addr`**

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

### **`orxSHADER:aeq`**

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

### **`orxSHADER:asVoid`**

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

### **`orxSHADER:compileCode`**

* Signature:

```lua
r1 = compileCode(codelist, size)
```

* Description:

> Sets shader code & compiles it \(parameters need to be set before compiling the shader code\) (non-const self only)

* Params:

name | type | description 
--- | --- | ---
codelist | table of string | List of shader codes to compile (parameters need to be set beforehand), will be processed in order
size | integer | Size of the shader code list

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxShader_CompileCode(orxSHADER *_pstShader, const orxSTRING *_azCodeList, orxU32 _u32Size)
```

---

### **`orxSHADER:decreaseCount`**

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

### **`orxSHADER:delete`**

* Signature:

```lua
r1 = delete()
```

* Description:

> Deletes a shader (non-const self only)

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxShader_Delete(orxSHADER *_pstShader)
```

---

### **`orxSHADER:enable`**

* Signature:

```lua
enable(enable)
```

* Description:

> Enables/disables a shader (non-const self only)

* Params:

name | type | description 
--- | --- | ---
enable | boolean | Enable / disable

* Returns:

* C signature:

```c
  void  orxShader_Enable(orxSHADER *_pstShader, orxBOOL _bEnable)
```

---

### **`orxSHADER:getChild`**

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

### **`orxSHADER:getFlags`**

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

### **`orxSHADER:getGUID`**

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

### **`orxSHADER:getID`**

* Signature:

```lua
r1 = getID()
```

* Description:

> Gets shader \(internal\) ID

* Params:

* Returns:

type | description 
--- | ---
integer | ID

* C signature:

```c
  orxU32  orxShader_GetID(const orxSHADER *_pstShader)
```

---

### **`orxSHADER:getName`**

* Signature:

```lua
r1 = getName()
```

* Description:

> Gets shader name

* Params:

* Returns:

type | description 
--- | ---
string | string / empty string

* C signature:

```c
  const orxSTRING  orxShader_GetName(const orxSHADER *_pstShader)
```

---

### **`orxSHADER:getNext`**

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

### **`orxSHADER:getOwner`**

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

### **`orxSHADER:getParent`**

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

### **`orxSHADER:getPrevious`**

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

### **`orxSHADER:getRefCount`**

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

### **`orxSHADER:getSibling`**

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

### **`orxSHADER:increaseCount`**

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

### **`orxSHADER:isEnabled`**

* Signature:

```lua
r1 = isEnabled()
```

* Description:

> Is shader enabled?

* Params:

* Returns:

type | description 
--- | ---
boolean | true if enabled, false otherwise

* C signature:

```c
  orxBOOL  orxShader_IsEnabled(const orxSHADER *_pstShader)
```

---

### **`orxSHADER:setFlags`**

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

### **`orxSHADER:setFloatParam`**

* Signature:

```lua
r1 = setFloatParam(name, arraysize, valuelist)
```

* Description:

> Sets the default value for a given float parameter in a shader \(parameters need to be added beforehand\)

* Params:

name | type | description 
--- | --- | ---
name | string | Parameter's literal name
arraysize | integer | Parameter's array size, 0 for simple variable, has to match the size used when declaring the parameter
valuelist | table of number | Parameter's float value list

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxShader_SetFloatParam(const orxSHADER *_pstShader, const orxSTRING _zName, orxU32 _u32ArraySize, const orxFLOAT *_afValueList)
```

---

### **`orxSHADER:setOwner`**

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

### **`orxSHADER:setParent`**

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

### **`orxSHADER:setTextureParam`**

* Signature:

```lua
r1 = setTextureParam(name, arraysize, valuelist)
```

* Description:

> Sets the default value for a given float parameter in a shader \(parameters need to be added beforehand\)

* Params:

name | type | description 
--- | --- | ---
name | string | Parameter's literal name
arraysize | integer | Parameter's array size, 0 for simple variable, has to match the size used when declaring the parameter
valuelist | table of [orxTEXTURE\#](./orxTEXTURE.md) | Parameter's texture value list

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxShader_SetTextureParam(const orxSHADER *_pstShader, const orxSTRING _zName, orxU32 _u32ArraySize, const orxTEXTURE **_apstValueList)
```

---

### **`orxSHADER:setVectorParam`**

* Signature:

```lua
r1 = setVectorParam(name, arraysize, valuelist)
```

* Description:

> Sets the default value for a given float parameter in a shader \(parameters need to be added beforehand\)

* Params:

name | type | description 
--- | --- | ---
name | string | Parameter's literal name
arraysize | integer | Parameter's array size, 0 for simple variable, has to match the size used when declaring the parameter
valuelist | table of [orxVECTOR](./orxVECTOR.md)  | Parameter's vector value list

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxShader_SetVectorParam(const orxSHADER *_pstShader, const orxSTRING _zName, orxU32 _u32ArraySize, const orxVECTOR *_avValueList)
```

---

### **`orxSHADER:start`**

* Signature:

```lua
r1 = start(owner)
```

* Description:

> Starts a shader

* Params:

name | type | description 
--- | --- | ---
owner | [orxSTRUCTURE\#](./orxSTRUCTURE.md) | Owner structure (orxOBJECT / orxVIEWPORT / orxNULL)

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxShader_Start(const orxSHADER *_pstShader, const orxSTRUCTURE *_pstOwner)
```

---

### **`orxSHADER:stop`**

* Signature:

```lua
r1 = stop()
```

* Description:

> Stops a shader

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxShader_Stop(const orxSHADER *_pstShader)
```

---

### **`orxSHADER:testAllFlags`**

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

### **`orxSHADER:testFlags`**

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

### **`orxSHADER:type`**

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

### **`orxSHADER:update`**

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

