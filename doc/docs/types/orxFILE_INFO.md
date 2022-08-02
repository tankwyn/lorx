# type orxFILE_INFO

> 

constructors: [lorx.file.fileInfo](../modules/file.md#fileinfo)

## Properties

name | type 
--- | --- 
size | integer
timestamp | integer
flags | integer
internal | orxHANDLE
name | string \(length-limited\)
pattern | string \(length-limited\)
path | string \(length-limited\)
fullname | string \(length-limited\)

## Methods

### **`orxFILE_INFO:addr`**

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

### **`orxFILE_INFO:aeq`**

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

### **`orxFILE_INFO:asVoid`**

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

### **`orxFILE_INFO:findClose`**

* Signature:

```lua
findClose()
```

* Description:

> Closes a search \(frees the memory allocated for this search\) (non-const self only)

* Params:

* Returns:

* C signature:

```c
  void  orxFile_FindClose(orxFILE_INFO *_pstFileInfo)
```

---

### **`orxFILE_INFO:findNext`**

* Signature:

```lua
r1 = findNext()
```

* Description:

> Continues a file search: finds the next occurrence of a pattern, the search has to be started with orxFile_FindFirst (non-const self only)

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxFile_FindNext(orxFILE_INFO *_pstFileInfo)
```

---

### **`orxFILE_INFO:type`**

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

