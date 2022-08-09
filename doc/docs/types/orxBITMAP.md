# type orxBITMAP

> 

## Methods

### **`orxBITMAP:addr`**

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

### **`orxBITMAP:aeq`**

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

### **`orxBITMAP:asVoid`**

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

### **`orxBITMAP:delete`**

* Signature:

```lua
delete()
```

* Description:

> Deletes a bitmap (non-const self only)

* Params:

* Returns:

* C signature:

```c
  void  orxDisplay_DeleteBitmap(orxBITMAP *_pstBitmap)
```

---

### **`orxBITMAP:getData`**

* Signature:

```lua
r1 = getData(data, bytenumber)
```

* Description:

> Gets a bitmap data \(RGBA memory format\)

* Params:

name | type | description 
--- | --- | ---
data | table of integer | Output buffer (4 channels, RGBA)
bytenumber | integer | Number of bytes of the buffer

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxDisplay_GetBitmapData(const orxBITMAP *_pstBitmap, orxU8 *_au8Data, orxU32 _u32ByteNumber)
```

---

### **`orxBITMAP:getID`**

* Signature:

```lua
r1 = getID()
```

* Description:

> Gets a bitmap \(internal\) ID

* Params:

* Returns:

type | description 
--- | ---
integer | integer \(u32\)

* C signature:

```c
  orxU32  orxDisplay_GetBitmapID(const orxBITMAP *_pstBitmap)
```

---

### **`orxBITMAP:getSize`**

* Signature:

```lua
r1, r2, r3 = getSize()
```

* Description:

> Gets a bitmap size

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure
number | Bitmap width
number | Bitmap height

* C signature:

```c
  orxSTATUS  orxDisplay_GetBitmapSize(const orxBITMAP *_pstBitmap, orxFLOAT *_pfWidth, orxFLOAT *_pfHeight)
```

---

### **`orxBITMAP:save`**

* Signature:

```lua
r1 = save(filename)
```

* Description:

> Saves a bitmap to file

* Params:

name | type | description 
--- | --- | ---
filename | string | Name of the file where to store the bitmap

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxDisplay_SaveBitmap(const orxBITMAP *_pstBitmap, const orxSTRING _zFileName)
```

---

### **`orxBITMAP:setData`**

* Signature:

```lua
r1 = setData(data, bytenumber)
```

* Description:

> Sets a bitmap data \(RGBA memory format\) (non-const self only)

* Params:

name | type | description 
--- | --- | ---
data | table of integer | Data (4 channels, RGBA)
bytenumber | integer | Number of bytes

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxDisplay_SetBitmapData(orxBITMAP *_pstBitmap, const orxU8 *_au8Data, orxU32 _u32ByteNumber)
```

---

### **`orxBITMAP:setPartialData`**

* Signature:

```lua
r1 = setPartialData(data, x, y, width, height)
```

* Description:

> Sets a partial \(rectangle\) bitmap data \(RGBA memory format\) (non-const self only)

* Params:

name | type | description 
--- | --- | ---
data | table of integer | Data (4 channels, RGBA)
x | integer | Origin's X coord of the rectangle area to set
y | integer | Origin's Y coord of the rectangle area to set
width | integer | Width of the rectangle area to set
height | integer | Height of the rectangle area to set

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxDisplay_SetPartialBitmapData(orxBITMAP *_pstBitmap, const orxU8 *_au8Data, orxU32 _u32X, orxU32 _u32Y, orxU32 _u32Width, orxU32 _u32Height)
```

---

### **`orxBITMAP:type`**

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

