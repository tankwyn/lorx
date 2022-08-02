# module file

## functions

### **`delete`**

* Signature:

```lua
r1 = delete(filename)
```

* Description:

> Deletes a file

* Params:

name | type | description 
--- | --- | ---
filename | string | Full file's path to delete

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success upon success, failure otherwise

* C signature:

```c
  orxSTATUS  orxFile_Delete(const orxSTRING _zFileName)
```

---

### **`exists`**

* Signature:

```lua
r1 = exists(filename)
```

* Description:

> Checks if a file/directory exists

* Params:

name | type | description 
--- | --- | ---
filename | string | Concerned file/directory

* Returns:

type | description 
--- | ---
boolean | false if _zFileName doesn't exist, true otherwise

* C signature:

```c
  orxBOOL  orxFile_Exists(const orxSTRING _zFileName)
```

---

### **`exit`**

* Signature:

```lua
exit()
```

* Description:

> Exits from the File Module

* Params:

* Returns:

* C signature:

```c
  void  orxFile_Exit()
```

---

### **`fileInfo`**

* Signature:

```lua
r1 = fileInfo(s64Size, s64TimeStamp, u32Flags, hInternal, zName, zPattern, zPath, zFullName)
```

* Description:

> Create a new [orxFILE_INFO](../types/orxFILE_INFO.md) 

* Params:

name | type | description 
--- | --- | ---
s64Size | integer | 
s64TimeStamp | integer | 
u32Flags | integer | 
hInternal | orxHANDLE | 
zName | string \(length-limited\) | 
zPattern | string \(length-limited\) | 
zPath | string \(length-limited\) | 
zFullName | string \(length-limited\) | 

* Returns:

type | description 
--- | ---
[orxFILE_INFO](../types/orxFILE_INFO.md)  | The new instance

---

### **`findFirst`**

* Signature:

```lua
r1, r2 = findFirst(searchpattern)
```

* Description:

> Starts a new file search: finds the first file/directory that will match to the given pattern \(ex: /bin/foo\*\)

* Params:

name | type | description 
--- | --- | ---
searchpattern | string | Pattern used for file/directory search

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure
[orxFILE_INFO](../types/orxFILE_INFO.md)  | Information about the first file found

* C signature:

```c
  orxSTATUS  orxFile_FindFirst(const orxSTRING _zSearchPattern, orxFILE_INFO *_pstFileInfo)
```

---

### **`getApplicationSaveDirectory`**

* Signature:

```lua
r1 = getApplicationSaveDirectory(subpath)
```

* Description:

> Gets current user's application save directory using linux separators \(without trailing separator\)

* Params:

name | type | description 
--- | --- | ---
subpath | string | Sub-path to append to the application save directory, nil for none

* Returns:

type | description 
--- | ---
string | Current user's application save directory, use it immediately or copy it as it will be modified by the next call to orxFile_GetHomeDirectory\(\) or orxFile_GetApplicationSaveDirectory\(\)

* C signature:

```c
  const orxSTRING  orxFile_GetApplicationSaveDirectory(const orxSTRING _zSubPath)
```

---

### **`getHomeDirectory`**

* Signature:

```lua
r1 = getHomeDirectory(subpath)
```

* Description:

> Gets current user's home directory using linux separators \(without trailing separator\)

* Params:

name | type | description 
--- | --- | ---
subpath | string | Sub-path to append to the home directory, nil for none

* Returns:

type | description 
--- | ---
string | Current user's home directory, use it immediately or copy it as will be modified by the next call to orxFile_GetHomeDirectory\(\) or orxFile_GetApplicationSaveDirectory\(\)

* C signature:

```c
  const orxSTRING  orxFile_GetHomeDirectory(const orxSTRING _zSubPath)
```

---

### **`getInfo`**

* Signature:

```lua
r1, r2 = getInfo(filename)
```

* Description:

> Retrieves a file/directory information

* Params:

name | type | description 
--- | --- | ---
filename | string | Concerned file/directory name

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure
[orxFILE_INFO](../types/orxFILE_INFO.md)  | Information of the file/directory

* C signature:

```c
  orxSTATUS  orxFile_GetInfo(const orxSTRING _zFileName, orxFILE_INFO *_pstFileInfo)
```

---

### **`init`**

* Signature:

```lua
r1 = init()
```

* Description:

> Inits the File Module

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | 

* C signature:

```c
  orxSTATUS  orxFile_Init()
```

---

### **`makeDirectory`**

* Signature:

```lua
r1 = makeDirectory(name)
```

* Description:

> Makes a directory, works recursively if needed

* Params:

name | type | description 
--- | --- | ---
name | string | Name of the directory to make

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxFile_MakeDirectory(const orxSTRING _zName)
```

---

### **`open`**

* Signature:

```lua
r1 = open(filename, openflags)
```

* Description:

> Opens a file for later read or write operation

* Params:

name | type | description 
--- | --- | ---
filename | string | Full file's path to open
openflags | integer | List of used flags when opened

* Returns:

type | description 
--- | ---
[orxFILE](../types/orxFILE.md)  | a File pointer \(or nil if an error has occurred\)

* C signature:

```c
  orxFILE * orxFile_Open(const orxSTRING _zFileName, orxU32 _u32OpenFlags)
```

---

### **`read`**

* Signature:

```lua
r1 = read(readdata, elemsize, nbelem, file)
```

* Description:

> Reads data from a file

* Params:

name | type | description 
--- | --- | ---
readdata [in,out] | void\* | Buffer that will contain read data
elemsize | integer | Size of 1 element
nbelem | integer | Number of elements
file | [orxFILE](../types/orxFILE.md)  | Pointer to the file descriptor

* Returns:

type | description 
--- | ---
integer | Returns the number of read elements \(not bytes\)

* C signature:

```c
  orxS64  orxFile_Read(void *_pReadData, orxS64 _s64ElemSize, orxS64 _s64NbElem, orxFILE *_pstFile)
```

---

### **`remove`**

* Signature:

```lua
r1 = remove(filename)
```

* Description:

> Removes a file or an empty directory

* Params:

name | type | description 
--- | --- | ---
filename | string | Concerned file / directory

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxFile_Remove(const orxSTRING _zFileName)
```

---

### **`setup`**

* Signature:

```lua
setup()
```

* Description:

> 

* Params:

* Returns:

* C signature:

```c
  void  orxFile_Setup()
```

---

### **`write`**

* Signature:

```lua
r1 = write(datatowrite, elemsize, nbelem, file)
```

* Description:

> Writes data to a file

* Params:

name | type | description 
--- | --- | ---
datatowrite | void\*\# | Buffer that contains the data to write
elemsize | integer | Size of 1 element
nbelem | integer | Number of elements
file | [orxFILE](../types/orxFILE.md)  | Pointer to the file descriptor

* Returns:

type | description 
--- | ---
integer | Returns the number of written elements \(not bytes\)

* C signature:

```c
  orxS64  orxFile_Write(const void *_pDataToWrite, orxS64 _s64ElemSize, orxS64 _s64NbElem, orxFILE *_pstFile)
```

---

