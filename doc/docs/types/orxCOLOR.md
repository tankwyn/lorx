# type orxCOLOR

> 

constructors: [lorx.display.color](../modules/display.md#color)

## Properties

name | type 
--- | --- 
rgb | [orxVECTOR](./orxVECTOR.md) 
hsl | [orxVECTOR](./orxVECTOR.md) 
hsv | [orxVECTOR](./orxVECTOR.md) 
alpha | number

## Methods

### **`orxCOLOR:addr`**

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

### **`orxCOLOR:aeq`**

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

### **`orxCOLOR:asVoid`**

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

### **`orxCOLOR:copy`**

* Signature:

```lua
r1 = copy()
```

* Description:

> Copies an [orxCOLOR](./orxCOLOR.md) into another one

* Params:

* Returns:

type | description 
--- | ---
[orxCOLOR](./orxCOLOR.md)  | [orxCOLOR](./orxCOLOR.md) 

* C signature:

```c
  orxCOLOR * orxColor_Copy(orxCOLOR *_pstDst, const orxCOLOR *_pstSrc)
```

---

### **`orxCOLOR:fromHSLToRGB`**

* Signature:

```lua
r1 = fromHSLToRGB()
```

* Description:

> Converts from HSL color space to RGB one

* Params:

* Returns:

type | description 
--- | ---
[orxCOLOR](./orxCOLOR.md)  | [orxCOLOR](./orxCOLOR.md) 

* C signature:

```c
 orxCOLOR * orxColor_FromHSLToRGB(orxCOLOR *_pstDst, const orxCOLOR *_pstSrc)
```

---

### **`orxCOLOR:fromHSVToRGB`**

* Signature:

```lua
r1 = fromHSVToRGB()
```

* Description:

> Converts from HSV color space to RGB one

* Params:

* Returns:

type | description 
--- | ---
[orxCOLOR](./orxCOLOR.md)  | [orxCOLOR](./orxCOLOR.md) 

* C signature:

```c
 orxCOLOR * orxColor_FromHSVToRGB(orxCOLOR *_pstDst, const orxCOLOR *_pstSrc)
```

---

### **`orxCOLOR:fromRGBToHSL`**

* Signature:

```lua
r1 = fromRGBToHSL()
```

* Description:

> Converts from RGB color space to HSL one

* Params:

* Returns:

type | description 
--- | ---
[orxCOLOR](./orxCOLOR.md)  | [orxCOLOR](./orxCOLOR.md) 

* C signature:

```c
 orxCOLOR * orxColor_FromRGBToHSL(orxCOLOR *_pstDst, const orxCOLOR *_pstSrc)
```

---

### **`orxCOLOR:fromRGBToHSV`**

* Signature:

```lua
r1 = fromRGBToHSV()
```

* Description:

> Converts from RGB color space to HSV one

* Params:

* Returns:

type | description 
--- | ---
[orxCOLOR](./orxCOLOR.md)  | [orxCOLOR](./orxCOLOR.md) 

* C signature:

```c
 orxCOLOR * orxColor_FromRGBToHSV(orxCOLOR *_pstDst, const orxCOLOR *_pstSrc)
```

---

### **`orxCOLOR:set`**

* Signature:

```lua
r1 = set(rgb, alpha)
```

* Description:

> Sets all components (non-const self only)

* Params:

name | type | description 
--- | --- | ---
rgb | [orxVECTOR\#](./orxVECTOR.md) | RGB components
alpha | number | Normalized alpha component

* Returns:

type | description 
--- | ---
[orxCOLOR](./orxCOLOR.md)  | [orxCOLOR](./orxCOLOR.md) 

* C signature:

```c
  orxCOLOR * orxColor_Set(orxCOLOR *_pstColor, const orxVECTOR *_pvRGB, orxFLOAT _fAlpha)
```

---

### **`orxCOLOR:setAlpha`**

* Signature:

```lua
r1 = setAlpha(alpha)
```

* Description:

> Sets alpha component (non-const self only)

* Params:

name | type | description 
--- | --- | ---
alpha | number | Normalized alpha component

* Returns:

type | description 
--- | ---
[orxCOLOR](./orxCOLOR.md)  | [orxCOLOR](./orxCOLOR.md) / nil

* C signature:

```c
  orxCOLOR * orxColor_SetAlpha(orxCOLOR *_pstColor, orxFLOAT _fAlpha)
```

---

### **`orxCOLOR:setRGB`**

* Signature:

```lua
r1 = setRGB(rgb)
```

* Description:

> Sets RGB components (non-const self only)

* Params:

name | type | description 
--- | --- | ---
rgb | [orxVECTOR\#](./orxVECTOR.md) | RGB components

* Returns:

type | description 
--- | ---
[orxCOLOR](./orxCOLOR.md)  | [orxCOLOR](./orxCOLOR.md) 

* C signature:

```c
  orxCOLOR * orxColor_SetRGB(orxCOLOR *_pstColor, const orxVECTOR *_pvRGB)
```

---

### **`orxCOLOR:setRGBA`**

* Signature:

```lua
r1 = setRGBA(rgba)
```

* Description:

> Sets all components from an [orxRGBA](./orxRGBA.md)  (non-const self only)

* Params:

name | type | description 
--- | --- | ---
rgba | [orxRGBA](./orxRGBA.md)  | RGBA values to set

* Returns:

type | description 
--- | ---
[orxCOLOR](./orxCOLOR.md)  | [orxCOLOR](./orxCOLOR.md) 

* C signature:

```c
  orxCOLOR * orxColor_SetRGBA(orxCOLOR *_pstColor, orxRGBA _stRGBA)
```

---

### **`orxCOLOR:toRGBA`**

* Signature:

```lua
r1 = toRGBA()
```

* Description:

> Gets [orxRGBA](./orxRGBA.md) from an [orxCOLOR](./orxCOLOR.md) 

* Params:

* Returns:

type | description 
--- | ---
[orxRGBA](./orxRGBA.md)  | [orxRGBA](./orxRGBA.md) 

* C signature:

```c
  orxRGBA orxColor_ToRGBA(const orxCOLOR *_pstColor)
```

---

### **`orxCOLOR:type`**

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

