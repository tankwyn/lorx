# type orxFILE

> 

## Methods

### **`orxFILE:addr`**

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

### **`orxFILE:aeq`**

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

### **`orxFILE:asVoid`**

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

### **`orxFILE:close`**

* Signature:

```lua
r1 = close()
```

* Description:

> Closes an oppened file (non-const self only)

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | Returns the status of the operation

* C signature:

```c
  orxSTATUS  orxFile_Close(orxFILE *_pstFile)
```

---

### **`orxFILE:getSize`**

* Signature:

```lua
r1 = getSize()
```

* Description:

> Retrieves a file's size

* Params:

* Returns:

type | description 
--- | ---
integer | Returns the length of the file, <= 0 if invalid

* C signature:

```c
  orxS64  orxFile_GetSize(const orxFILE *_pstFile)
```

---

### **`orxFILE:getTime`**

* Signature:

```lua
r1 = getTime()
```

* Description:

> Retrieves a file's time of last modification

* Params:

* Returns:

type | description 
--- | ---
integer | Returns the time of the last modification, in seconds, since epoch

* C signature:

```c
  orxS64  orxFile_GetTime(const orxFILE *_pstFile)
```

---

### **`orxFILE:print`**

* Signature:

```lua
r1 = print(string)
```

* Description:

> Prints a formatted string to a file (non-const self only)

* Params:

name | type | description 
--- | --- | ---
string | string | Formatted string

* Returns:

type | description 
--- | ---
integer | Returns the number of written characters

* C signature:

```c
  orxS32  orxFile_Print(orxFILE *_pstFile, const orxSTRING _zString, ...)
```

---

### **`orxFILE:seek`**

* Signature:

```lua
r1 = seek(position, whence)
```

* Description:

> Seeks to a position in the given file (non-const self only)

* Params:

name | type | description 
--- | --- | ---
position | integer | Position (from start) where to set the indicator
whence | [orxSEEK_OFFSET_WHENCE](../enums.md#orxseek_offset_whence)  | Starting point for the offset computation (start, current position or end)

* Returns:

type | description 
--- | ---
integer | Absolute cursor position if successful, -1 otherwise

* C signature:

```c
  orxS64  orxFile_Seek(orxFILE *_pstFile, orxS64 _s64Position, orxSEEK_OFFSET_WHENCE _eWhence)
```

---

### **`orxFILE:tell`**

* Signature:

```lua
r1 = tell()
```

* Description:

> Tells the current position of the indicator in a file

* Params:

* Returns:

type | description 
--- | ---
integer | Returns the current position of the file indicator, -1 is invalid

* C signature:

```c
  orxS64  orxFile_Tell(const orxFILE *_pstFile)
```

---

### **`orxFILE:type`**

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

