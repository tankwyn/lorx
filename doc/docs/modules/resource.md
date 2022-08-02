# module resource

## functions

### **`addStorage`**

* Signature:

```lua
r1 = addStorage(group, storage, addfirst)
```

* Description:

> Adds a storage for a given resource group

* Params:

name | type | description 
--- | --- | ---
group | string | Concerned resource group
storage | string | Description of the storage, as understood by one of the resource type
addfirst | boolean | If true this storage will be used \*before\* any already added ones, otherwise it'll be used \*after\* all those

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxResource_AddStorage(const orxSTRING _zGroup, const orxSTRING _zStorage, orxBOOL _bAddFirst)
```

---

### **`clearCache`**

* Signature:

```lua
r1 = clearCache(group)
```

* Description:

> Clears cache for specific resource group\(s\)

* Params:

name | type | description 
--- | --- | ---
group | string | Concerned resource group, nil for all groups

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxResource_ClearCache(const orxSTRING _zGroup)
```

---

### **`close`**

* Signature:

```lua
close(resource)
```

* Description:

> Closes a resource

* Params:

name | type | description 
--- | --- | ---
resource | orxHANDLE | Concerned resource

* Returns:

* C signature:

```c
  void  orxResource_Close(orxHANDLE _hResource)
```

---

### **`delete`**

* Signature:

```lua
r1 = delete(location)
```

* Description:

> Deletes a resource, given its location

* Params:

name | type | description 
--- | --- | ---
location | string | Location of the resource to delete

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success upon success, failure otherwise

* C signature:

```c
  orxSTATUS  orxResource_Delete(const orxSTRING _zLocation)
```

---

### **`exit`**

* Signature:

```lua
exit()
```

* Description:

> Exits from the resource module

* Params:

* Returns:

* C signature:

```c
  void  orxResource_Exit()
```

---

### **`getGroup`**

* Signature:

```lua
r1 = getGroup(index)
```

* Description:

> Gets resource group at given index

* Params:

name | type | description 
--- | --- | ---
index | integer | Index of resource group

* Returns:

type | description 
--- | ---
string | Resource group if index is valid, nil otherwise

* C signature:

```c
  const orxSTRING  orxResource_GetGroup(orxU32 _u32Index)
```

---

### **`getGroupCount`**

* Signature:

```lua
r1 = getGroupCount()
```

* Description:

> Gets number of resource groups

* Params:

* Returns:

type | description 
--- | ---
integer | Number of resource groups

* C signature:

```c
  orxU32  orxResource_GetGroupCount()
```

---

### **`getLocation`**

* Signature:

```lua
r1 = getLocation(resource)
```

* Description:

> Gets the literal location of a resource

* Params:

name | type | description 
--- | --- | ---
resource | orxHANDLE | Concerned resource

* Returns:

type | description 
--- | ---
string | Literal location string

* C signature:

```c
  const orxSTRING  orxResource_GetLocation(orxHANDLE _hResource)
```

---

### **`getPath`**

* Signature:

```lua
r1 = getPath(location)
```

* Description:

> Gets the resource path from a location

* Params:

name | type | description 
--- | --- | ---
location | string | Location of the concerned resource

* Returns:

type | description 
--- | ---
string | Path string if valid, empty string otherwise

* C signature:

```c
  const orxSTRING  orxResource_GetPath(const orxSTRING _zLocation)
```

---

### **`getPendingOpCount`**

* Signature:

```lua
r1 = getPendingOpCount(resource)
```

* Description:

> Gets pending operation count for a given resource

* Params:

name | type | description 
--- | --- | ---
resource | orxHANDLE | Concerned resource

* Returns:

type | description 
--- | ---
integer | Number of pending asynchronous operations for that resource

* C signature:

```c
  orxU32  orxResource_GetPendingOpCount(const orxHANDLE _hResource)
```

---

### **`getSize`**

* Signature:

```lua
r1 = getSize(resource)
```

* Description:

> Gets the size, in bytes, of a resource

* Params:

name | type | description 
--- | --- | ---
resource | orxHANDLE | Concerned resource

* Returns:

type | description 
--- | ---
integer | Size of the resource, in bytes

* C signature:

```c
  orxS64  orxResource_GetSize(orxHANDLE _hResource)
```

---

### **`getStorage`**

* Signature:

```lua
r1 = getStorage(group, index)
```

* Description:

> Gets storage at given index for a given resource group

* Params:

name | type | description 
--- | --- | ---
group | string | Concerned resource group
index | integer | Index of storage

* Returns:

type | description 
--- | ---
string | Storage if index is valid, nil otherwise

* C signature:

```c
  const orxSTRING  orxResource_GetStorage(const orxSTRING _zGroup, orxU32 _u32Index)
```

---

### **`getStorageCount`**

* Signature:

```lua
r1 = getStorageCount(group)
```

* Description:

> Gets number of storages for a given resource group

* Params:

name | type | description 
--- | --- | ---
group | string | Concerned resource group

* Returns:

type | description 
--- | ---
integer | Number of storages for this resource group

* C signature:

```c
  orxU32  orxResource_GetStorageCount(const orxSTRING _zGroup)
```

---

### **`getTime`**

* Signature:

```lua
r1 = getTime(location)
```

* Description:

> Gets the time of last modification of a resource

* Params:

name | type | description 
--- | --- | ---
location | string | Location of the concerned resource

* Returns:

type | description 
--- | ---
integer | Time of last modification, in seconds since epoch, if found, 0 otherwise

* C signature:

```c
  orxS64  orxResource_GetTime(const orxSTRING _zLocation)
```

---

### **`getTotalPendingOpCount`**

* Signature:

```lua
r1 = getTotalPendingOpCount()
```

* Description:

> Gets total pending operation count

* Params:

* Returns:

type | description 
--- | ---
integer | Number of total pending asynchronous operations

* C signature:

```c
  orxU32  orxResource_GetTotalPendingOpCount()
```

---

### **`getTypeCount`**

* Signature:

```lua
r1 = getTypeCount()
```

* Description:

> Gets number of registered resource types

* Params:

* Returns:

type | description 
--- | ---
integer | Number of registered resource types

* C signature:

```c
  orxU32  orxResource_GetTypeCount()
```

---

### **`getTypeTag`**

* Signature:

```lua
r1 = getTypeTag(index)
```

* Description:

> Gets registered type info at given index

* Params:

name | type | description 
--- | --- | ---
index | integer | Index of storage

* Returns:

type | description 
--- | ---
string | Type tag string if index is valid, nil otherwise

* C signature:

```c
  const orxSTRING  orxResource_GetTypeTag(orxU32 _u32Index)
```

---

### **`init`**

* Signature:

```lua
r1 = init()
```

* Description:

> Inits the resource module

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxResource_Init()
```

---

### **`locate`**

* Signature:

```lua
r1 = locate(group, name)
```

* Description:

> Gets the location of an \*existing\* resource for a given group, location gets cached if found

* Params:

name | type | description 
--- | --- | ---
group | string | Concerned resource group
name | string | Name of the resource to locate

* Returns:

type | description 
--- | ---
string | Location string if found, nil otherwise

* C signature:

```c
  const orxSTRING  orxResource_Locate(const orxSTRING _zGroup, const orxSTRING _zName)
```

---

### **`locateInStorage`**

* Signature:

```lua
r1 = locateInStorage(group, storage, name)
```

* Description:

> Gets the location for a resource \(existing or not\) in a \*specific storage\*, for a given group. The location doesn't get cached and thus needs to be copied by the caller before the next call

* Params:

name | type | description 
--- | --- | ---
group | string | Concerned resource group
storage | string | Concerned storage, if nil then the highest priority storage will be used
name | string | Name of the resource

* Returns:

type | description 
--- | ---
string | Location string if found, nil otherwise

* C signature:

```c
  const orxSTRING  orxResource_LocateInStorage(const orxSTRING _zGroup, const orxSTRING _zStorage, const orxSTRING _zName)
```

---

### **`open`**

* Signature:

```lua
r1 = open(location, erasemode)
```

* Description:

> Opens the resource at the given location

* Params:

name | type | description 
--- | --- | ---
location | string | Location of the resource to open
erasemode | boolean | If true, the file will be erased if existing or created otherwise, if false, no content will get destroyed when opening

* Returns:

type | description 
--- | ---
orxHANDLE | Handle to the open location, [orxHANDLE_UNDEFINED](./constants.md#orxhandle_undefined) otherwise

* C signature:

```c
  orxHANDLE  orxResource_Open(const orxSTRING _zLocation, orxBOOL _bEraseMode)
```

---

### **`reloadStorage`**

* Signature:

```lua
r1 = reloadStorage()
```

* Description:

> Reloads storage from config

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxResource_ReloadStorage()
```

---

### **`removeStorage`**

* Signature:

```lua
r1 = removeStorage(group, storage)
```

* Description:

> Removes storage\(s\) for specific resource group\(s\)

* Params:

name | type | description 
--- | --- | ---
group | string | Concerned resource group, nil for all groups
storage | string | Concerned storage, nil for all storages \(except default one\)

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxResource_RemoveStorage(const orxSTRING _zGroup, const orxSTRING _zStorage)
```

---

### **`seek`**

* Signature:

```lua
r1 = seek(resource, offset, whence)
```

* Description:

> Seeks a position in a given resource \(moves cursor\)

* Params:

name | type | description 
--- | --- | ---
resource | orxHANDLE | Concerned resource
offset | integer | Number of bytes to offset from 'origin'
whence | [orxSEEK_OFFSET_WHENCE](../enums.md#orxseek_offset_whence)  | Starting point for the offset computation \(start, current position or end\)

* Returns:

type | description 
--- | ---
integer | Absolute cursor position if successful, -1 otherwise

* C signature:

```c
  orxS64  orxResource_Seek(orxHANDLE _hResource, orxS64 _s64Offset, orxSEEK_OFFSET_WHENCE _eWhence)
```

---

### **`setup`**

* Signature:

```lua
setup()
```

* Description:

> Resource module setup

* Params:

* Returns:

* C signature:

```c
  void  orxResource_Setup()
```

---

### **`sync`**

* Signature:

```lua
r1 = sync(group)
```

* Description:

> Syncs all cached resources for specific resource group\(s\): update, add or remove events will be sent for all resources that are not located in their original storage anymore

* Params:

name | type | description 
--- | --- | ---
group | string | Concerned resource group, nil for all groups

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxResource_Sync(const orxSTRING _zGroup)
```

---

### **`tell`**

* Signature:

```lua
r1 = tell(resource)
```

* Description:

> Tells the position of the cursor in a given resource

* Params:

name | type | description 
--- | --- | ---
resource | orxHANDLE | Concerned resource

* Returns:

type | description 
--- | ---
integer | Position \(offset\), in bytes

* C signature:

```c
  orxS64  orxResource_Tell(orxHANDLE _hResource)
```

---

