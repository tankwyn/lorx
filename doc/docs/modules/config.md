# module config

## functions

### **`appendListString`**

* Signature:

```lua
r1 = appendListString(key, value, number)
```

* Description:

> Appends string values to a config list \(will create a new entry if not already present\)

* Params:

name | type | description 
--- | --- | ---
key | string | Key name
value | table of string | Values
number | integer | Number of values

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxConfig_AppendListString(const orxSTRING _zKey, const orxSTRING _azValue[], orxU32 _u32Number)
```

---

### **`clear`**

* Signature:

```lua
r1 = clear([func])
```

* Description:

> Clear all config info \(set the lorx.tmpcfgclear callback to filter\)

* Params:

name | type | description 
--- | --- | ---
[func] | [lorxCFGCLEAR_CALLBACK](../callbacks.md#lorxcfgclear_callback)  | Callback used to filter sections/keys to clear. If null, all sections/keys will be cleared

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
orxSTATUS orxFASTCALL orxConfig_Clear(const orxCONFIG_CLEAR_FUNCTION _pfnClearCallback)
```

---

### **`clearSection`**

* Signature:

```lua
r1 = clearSection(sectionname)
```

* Description:

> Clears section

* Params:

name | type | description 
--- | --- | ---
sectionname | string | Section name to clear

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | 

* C signature:

```c
  orxSTATUS  orxConfig_ClearSection(const orxSTRING _zSectionName)
```

---

### **`clearValue`**

* Signature:

```lua
r1 = clearValue(key)
```

* Description:

> Clears a value from current selected section

* Params:

name | type | description 
--- | --- | ---
key | string | Key name

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxConfig_ClearValue(const orxSTRING _zKey)
```

---

### **`copyFile`**

* Signature:

```lua
r1 = copyFile(dstfilename, srcfilename, encryptionkey)
```

* Description:

> Copies a file with optional encryption

* Params:

name | type | description 
--- | --- | ---
dstfilename | string | Name of the destination file
srcfilename | string | Name of the source file
encryptionkey | string | Encryption key to use when writing destination file, nil for no encryption

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxConfig_CopyFile(const orxSTRING _zDstFileName, const orxSTRING _zSrcFileName, const orxSTRING _zEncryptionKey)
```

---

### **`duplicateRawValue`**

* Signature:

```lua
r1 = duplicateRawValue(key)
```

* Description:

> Duplicates a raw value \(string\) from config

* Params:

name | type | description 
--- | --- | ---
key | string | Key name

* Returns:

type | description 
--- | ---
string | The value. If non-null, needs to be deleted by the caller with orxString_Delete\(\)

* C signature:

```c
  orxSTRING  orxConfig_DuplicateRawValue(const orxSTRING _zKey)
```

---

### **`exit`**

* Signature:

```lua
exit()
```

* Description:

> Exits from the Config Module

* Params:

* Returns:

* C signature:

```c
  void  orxConfig_Exit()
```

---

### **`getBool`**

* Signature:

```lua
r1 = getBool(key)
```

* Description:

> Reads a boolean value from config \(will take a random value if a list is provided for this key\)

* Params:

name | type | description 
--- | --- | ---
key | string | Key name

* Returns:

type | description 
--- | ---
boolean | The value

* C signature:

```c
  orxBOOL  orxConfig_GetBool(const orxSTRING _zKey)
```

---

### **`getCurrentSection`**

* Signature:

```lua
r1 = getCurrentSection()
```

* Description:

> Gets current working section

* Params:

* Returns:

type | description 
--- | ---
string | Current selected section

* C signature:

```c
  const orxSTRING  orxConfig_GetCurrentSection()
```

---

### **`getEncryptionKey`**

* Signature:

```lua
r1 = getEncryptionKey()
```

* Description:

> Gets encryption key

* Params:

* Returns:

type | description 
--- | ---
string | Current encryption key / empty string

* C signature:

```c
  const orxSTRING  orxConfig_GetEncryptionKey()
```

---

### **`getFloat`**

* Signature:

```lua
r1 = getFloat(key)
```

* Description:

> Reads a float value from config \(will take a random value if a list is provided for this key\)

* Params:

name | type | description 
--- | --- | ---
key | string | Key name

* Returns:

type | description 
--- | ---
number | The value

* C signature:

```c
  orxFLOAT  orxConfig_GetFloat(const orxSTRING _zKey)
```

---

### **`getKey`**

* Signature:

```lua
r1 = getKey(keyindex)
```

* Description:

> Gets key for the current section at the given index

* Params:

name | type | description 
--- | --- | ---
keyindex | integer | Index of the desired key

* Returns:

type | description 
--- | ---
string | string if exist, empty string otherwise

* C signature:

```c
  const orxSTRING  orxConfig_GetKey(orxU32 _u32KeyIndex)
```

---

### **`getKeyCount`**

* Signature:

```lua
r1 = getKeyCount()
```

* Description:

> Gets key count of the current section

* Params:

* Returns:

type | description 
--- | ---
integer | Key count of the current section if valid, 0 otherwise

* C signature:

```c
  orxU32  orxConfig_GetKeyCount()
```

---

### **`getListBool`**

* Signature:

```lua
r1 = getListBool(key, listindex)
```

* Description:

> Reads a boolean value from config list

* Params:

name | type | description 
--- | --- | ---
key | string | Key name
listindex | integer | Index of desired item in list / -1 for random

* Returns:

type | description 
--- | ---
boolean | The value

* C signature:

```c
  orxBOOL  orxConfig_GetListBool(const orxSTRING _zKey, orxS32 _s32ListIndex)
```

---

### **`getListCount`**

* Signature:

```lua
r1 = getListCount(key)
```

* Description:

> Gets list count for a given key

* Params:

name | type | description 
--- | --- | ---
key | string | Key name

* Returns:

type | description 
--- | ---
integer | List count if it's a valid list, 0 otherwise

* C signature:

```c
  orxS32  orxConfig_GetListCount(const orxSTRING _zKey)
```

---

### **`getListFloat`**

* Signature:

```lua
r1 = getListFloat(key, listindex)
```

* Description:

> Reads a float value from config list

* Params:

name | type | description 
--- | --- | ---
key | string | Key name
listindex | integer | Index of desired item in list / -1 for random

* Returns:

type | description 
--- | ---
number | The value

* C signature:

```c
  orxFLOAT  orxConfig_GetListFloat(const orxSTRING _zKey, orxS32 _s32ListIndex)
```

---

### **`getListS32`**

* Signature:

```lua
r1 = getListS32(key, listindex)
```

* Description:

> Reads a signed integer value from config list

* Params:

name | type | description 
--- | --- | ---
key | string | Key name
listindex | integer | Index of desired item in list / -1 for random

* Returns:

type | description 
--- | ---
integer | The value

* C signature:

```c
  orxS32  orxConfig_GetListS32(const orxSTRING _zKey, orxS32 _s32ListIndex)
```

---

### **`getListS64`**

* Signature:

```lua
r1 = getListS64(key, listindex)
```

* Description:

> Reads a signed integer value from config list

* Params:

name | type | description 
--- | --- | ---
key | string | Key name
listindex | integer | Index of desired item in list / -1 for random

* Returns:

type | description 
--- | ---
integer | The value

* C signature:

```c
  orxS64  orxConfig_GetListS64(const orxSTRING _zKey, orxS32 _s32ListIndex)
```

---

### **`getListString`**

* Signature:

```lua
r1 = getListString(key, listindex)
```

* Description:

> Reads a string value from config list

* Params:

name | type | description 
--- | --- | ---
key | string | Key name
listindex | integer | Index of desired item in list / -1 for random

* Returns:

type | description 
--- | ---
string | The value

* C signature:

```c
  const orxSTRING  orxConfig_GetListString(const orxSTRING _zKey, orxS32 _s32ListIndex)
```

---

### **`getListU32`**

* Signature:

```lua
r1 = getListU32(key, listindex)
```

* Description:

> Reads an unsigned integer value from config list

* Params:

name | type | description 
--- | --- | ---
key | string | Key name
listindex | integer | Index of desired item in list / -1 for random

* Returns:

type | description 
--- | ---
integer | The value

* C signature:

```c
  orxU32  orxConfig_GetListU32(const orxSTRING _zKey, orxS32 _s32ListIndex)
```

---

### **`getListU64`**

* Signature:

```lua
r1 = getListU64(key, listindex)
```

* Description:

> Reads an unsigned integer value from config list

* Params:

name | type | description 
--- | --- | ---
key | string | Key name
listindex | integer | Index of desired item in list / -1 for random

* Returns:

type | description 
--- | ---
integer | The value

* C signature:

```c
  orxU64  orxConfig_GetListU64(const orxSTRING _zKey, orxS32 _s32ListIndex)
```

---

### **`getListVector`**

* Signature:

```lua
r1 = getListVector(key, listindex)
```

* Description:

> Reads a vector value from config list

* Params:

name | type | description 
--- | --- | ---
key | string | Key name
listindex | integer | Index of desired item in list / -1 for random

* Returns:

type | description 
--- | ---
[orxVECTOR](../types/orxVECTOR.md)  | The value

* C signature:

```c
  orxVECTOR * orxConfig_GetListVector(const orxSTRING _zKey, orxS32 _s32ListIndex, orxVECTOR *_pvVector)
```

---

### **`getMainFileName`**

* Signature:

```lua
r1 = getMainFileName()
```

* Description:

> Gets config main file name

* Params:

* Returns:

type | description 
--- | ---
string | Config main file name / empty string

* C signature:

```c
  const orxSTRING  orxConfig_GetMainFileName()
```

---

### **`getOrigin`**

* Signature:

```lua
r1 = getOrigin(sectionname)
```

* Description:

> Gets section origin \(ie. the file where it was defined for the first time or orxSTRING_EMPTY if not defined via a file\)

* Params:

name | type | description 
--- | --- | ---
sectionname | string | Concerned section name

* Returns:

type | description 
--- | ---
string | string if found, empty string otherwise

* C signature:

```c
  const orxSTRING  orxConfig_GetOrigin(const orxSTRING _zSectionName)
```

---

### **`getOriginID`**

* Signature:

```lua
r1 = getOriginID(sectionname)
```

* Description:

> Gets section origin ID \(ie. the file where it was defined for the first time or orxSTRING_EMPTY if not defined via a file\)

* Params:

name | type | description 
--- | --- | ---
sectionname | string | Concerned section name

* Returns:

type | description 
--- | ---
integer | String ID if found, [orxSTRINGID_UNDEFINED](./constants.md#orxstringid_undefined) otherwise

* C signature:

```c
  orxSTRINGID  orxConfig_GetOriginID(const orxSTRING _zSectionName)
```

---

### **`getParent`**

* Signature:

```lua
r1 = getParent(sectionname)
```

* Description:

> Gets a section's parent

* Params:

name | type | description 
--- | --- | ---
sectionname | string | Concerned section

* Returns:

type | description 
--- | ---
string | Section's parent name if set or empty string if no parent has been forced, nil otherwise

* C signature:

```c
  const orxSTRING  orxConfig_GetParent(const orxSTRING _zSectionName)
```

---

### **`getS32`**

* Signature:

```lua
r1 = getS32(key)
```

* Description:

> Reads a signed integer value from config \(will take a random value if a list is provided for this key\)

* Params:

name | type | description 
--- | --- | ---
key | string | Key name

* Returns:

type | description 
--- | ---
integer | The value

* C signature:

```c
  orxS32  orxConfig_GetS32(const orxSTRING _zKey)
```

---

### **`getS64`**

* Signature:

```lua
r1 = getS64(key)
```

* Description:

> Reads a signed integer value from config \(will take a random value if a list is provided for this key\)

* Params:

name | type | description 
--- | --- | ---
key | string | Key name

* Returns:

type | description 
--- | ---
integer | The value

* C signature:

```c
  orxS64  orxConfig_GetS64(const orxSTRING _zKey)
```

---

### **`getSection`**

* Signature:

```lua
r1 = getSection(sectionindex)
```

* Description:

> Gets section at the given index

* Params:

name | type | description 
--- | --- | ---
sectionindex | integer | Index of the desired section

* Returns:

type | description 
--- | ---
string | string if exist, empty string otherwise

* C signature:

```c
  const orxSTRING  orxConfig_GetSection(orxU32 _u32SectionIndex)
```

---

### **`getSectionCount`**

* Signature:

```lua
r1 = getSectionCount()
```

* Description:

> Gets section count

* Params:

* Returns:

type | description 
--- | ---
integer | Section count

* C signature:

```c
  orxU32  orxConfig_GetSectionCount()
```

---

### **`getString`**

* Signature:

```lua
r1 = getString(key)
```

* Description:

> Reads a string value from config \(will take a random value if a list is provided for this key\)

* Params:

name | type | description 
--- | --- | ---
key | string | Key name

* Returns:

type | description 
--- | ---
string | The value

* C signature:

```c
  const orxSTRING  orxConfig_GetString(const orxSTRING _zKey)
```

---

### **`getU32`**

* Signature:

```lua
r1 = getU32(key)
```

* Description:

> Reads an unsigned integer value from config \(will take a random value if a list is provided for this key\)

* Params:

name | type | description 
--- | --- | ---
key | string | Key name

* Returns:

type | description 
--- | ---
integer | The value

* C signature:

```c
  orxU32  orxConfig_GetU32(const orxSTRING _zKey)
```

---

### **`getU64`**

* Signature:

```lua
r1 = getU64(key)
```

* Description:

> Reads an unsigned integer value from config \(will take a random value if a list is provided for this key\)

* Params:

name | type | description 
--- | --- | ---
key | string | Key name

* Returns:

type | description 
--- | ---
integer | The value

* C signature:

```c
  orxU64  orxConfig_GetU64(const orxSTRING _zKey)
```

---

### **`getValueSource`**

* Signature:

```lua
r1 = getValueSource(key)
```

* Description:

> Gets a value's source section \(ie. the section where the value is explicitly defined\), only considering section inheritance, not local one

* Params:

name | type | description 
--- | --- | ---
key | string | Key name

* Returns:

type | description 
--- | ---
string | Name of the section that explicitly contains the value, empty string if not found

* C signature:

```c
  const orxSTRING  orxConfig_GetValueSource(const orxSTRING _zKey)
```

---

### **`getVector`**

* Signature:

```lua
r1 = getVector(key)
```

* Description:

> Reads a vector value from config \(will take a random value if a list is provided for this key\)

* Params:

name | type | description 
--- | --- | ---
key | string | Key name

* Returns:

type | description 
--- | ---
[orxVECTOR](../types/orxVECTOR.md)  | The value if valid, nil otherwise

* C signature:

```c
  orxVECTOR * orxConfig_GetVector(const orxSTRING _zKey, orxVECTOR *_pvVector)
```

---

### **`hasSection`**

* Signature:

```lua
r1 = hasSection(sectionname)
```

* Description:

> Has section for the given section name?

* Params:

name | type | description 
--- | --- | ---
sectionname | string | Section name

* Returns:

type | description 
--- | ---
boolean | true / false

* C signature:

```c
  orxBOOL  orxConfig_HasSection(const orxSTRING _zSectionName)
```

---

### **`hasValue`**

* Signature:

```lua
r1 = hasValue(key)
```

* Description:

> Has specified value for the given key?

* Params:

name | type | description 
--- | --- | ---
key | string | Key name

* Returns:

type | description 
--- | ---
boolean | true / false

* C signature:

```c
  orxBOOL  orxConfig_HasValue(const orxSTRING _zKey)
```

---

### **`init`**

* Signature:

```lua
r1 = init()
```

* Description:

> Initializes the Config Module

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxConfig_Init()
```

---

### **`isCommandValue`**

* Signature:

```lua
r1 = isCommandValue(key)
```

* Description:

> Is this a command value? \(ie. lazily evaluated command: %...\)

* Params:

name | type | description 
--- | --- | ---
key | string | Key name

* Returns:

type | description 
--- | ---
boolean | true / false

* C signature:

```c
  orxBOOL  orxConfig_IsCommandValue(const orxSTRING _zKey)
```

---

### **`isDynamicValue`**

* Signature:

```lua
r1 = isDynamicValue(key)
```

* Description:

> Is this value dynamic? \(ie. random and/or a list or command\)

* Params:

name | type | description 
--- | --- | ---
key | string | Key name

* Returns:

type | description 
--- | ---
boolean | true / false

* C signature:

```c
  orxBOOL  orxConfig_IsDynamicValue(const orxSTRING _zKey)
```

---

### **`isInheritedValue`**

* Signature:

```lua
r1 = isInheritedValue(key)
```

* Description:

> Is this value inherited from another one \(either locally or at section level\)?

* Params:

name | type | description 
--- | --- | ---
key | string | Key name

* Returns:

type | description 
--- | ---
boolean | true / false

* C signature:

```c
  orxBOOL  orxConfig_IsInheritedValue(const orxSTRING _zKey)
```

---

### **`isList`**

* Signature:

```lua
r1 = isList(key)
```

* Description:

> Is value a list for the given key?

* Params:

name | type | description 
--- | --- | ---
key | string | Key name

* Returns:

type | description 
--- | ---
boolean | true / false

* C signature:

```c
  orxBOOL  orxConfig_IsList(const orxSTRING _zKey)
```

---

### **`isLocallyInheritedValue`**

* Signature:

```lua
r1 = isLocallyInheritedValue(key)
```

* Description:

> Is this value locally inherited from another one \(ie. with a Value = @... syntax\)?

* Params:

name | type | description 
--- | --- | ---
key | string | Key name

* Returns:

type | description 
--- | ---
boolean | true / false

* C signature:

```c
  orxBOOL  orxConfig_IsLocallyInheritedValue(const orxSTRING _zKey)
```

---

### **`isRandomValue`**

* Signature:

```lua
r1 = isRandomValue(key)
```

* Description:

> Is this value random? \(ie. using '~' character, within or without a list\)

* Params:

name | type | description 
--- | --- | ---
key | string | Key name

* Returns:

type | description 
--- | ---
boolean | true / false

* C signature:

```c
  orxBOOL  orxConfig_IsRandomValue(const orxSTRING _zKey)
```

---

### **`load`**

* Signature:

```lua
r1 = load(filename)
```

* Description:

> Loads config file from source

* Params:

name | type | description 
--- | --- | ---
filename | string | File name

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxConfig_Load(const orxSTRING _zFileName)
```

---

### **`loadFromMemory`**

* Signature:

```lua
r1 = loadFromMemory(buffer, buffersize)
```

* Description:

> Loads config data from a memory buffer. NB: the buffer will be modified during processing!

* Params:

name | type | description 
--- | --- | ---
buffer | string \(length-limited\) | Buffer to process, will be modified during processing
buffersize | integer | Size of the buffer

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxConfig_LoadFromMemory(orxCHAR *_acBuffer, orxU32 _u32BufferSize)
```

---

### **`mergeFiles`**

* Signature:

```lua
r1 = mergeFiles(dstfilename, srcfilename, number, encryptionkey)
```

* Description:

> Merges multiple files into a single one, with optional encryption

* Params:

name | type | description 
--- | --- | ---
dstfilename | string | Name of the destination file
srcfilename | table of string | List of the names of the source files
number | integer | Number of source file names
encryptionkey | string | Encryption key to use when writing destination file, nil for no encryption

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxConfig_MergeFiles(const orxSTRING _zDstFileName, const orxSTRING *_azSrcFileName, orxU32 _u32Number, const orxSTRING _zEncryptionKey)
```

---

### **`popSection`**

* Signature:

```lua
r1 = popSection()
```

* Description:

> Pops last section from section stack

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxConfig_PopSection()
```

---

### **`protectSection`**

* Signature:

```lua
r1 = protectSection(sectionname, protect)
```

* Description:

> Protects/unprotects a section from deletion \(content might still be changed or deleted, but the section itself will resist delete/clear calls\)

* Params:

name | type | description 
--- | --- | ---
sectionname | string | Section name to protect
protect | boolean | true for protecting the section, false to remove the protection

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxConfig_ProtectSection(const orxSTRING _zSectionName, orxBOOL _bProtect)
```

---

### **`pushSection`**

* Signature:

```lua
r1 = pushSection(sectionname)
```

* Description:

> Pushes a section \(storing the current one on section stack\)

* Params:

name | type | description 
--- | --- | ---
sectionname | string | Section name to push

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxConfig_PushSection(const orxSTRING _zSectionName)
```

---

### **`reloadHistory`**

* Signature:

```lua
r1 = reloadHistory()
```

* Description:

> Reloads config files from history

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxConfig_ReloadHistory()
```

---

### **`renameSection`**

* Signature:

```lua
r1 = renameSection(sectionname, newsectionname)
```

* Description:

> Renames a section

* Params:

name | type | description 
--- | --- | ---
sectionname | string | Section to rename
newsectionname | string | New name for the section

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxConfig_RenameSection(const orxSTRING _zSectionName, const orxSTRING _zNewSectionName)
```

---

### **`save`**

* Signature:

```lua
r1 = save(filename, useencryption, [func])
```

* Description:

> Save all config info \(set the lorx.tmpcfgsave callback to filter\)

* Params:

name | type | description 
--- | --- | ---
filename | string | File name, if null or empty the default file name will be used
useencryption | boolean | Use file encryption to make it human non-readable?
[func] | [lorxCFGSAVE_CALLBACK](../callbacks.md#lorxcfgsave_callback)  | Callback used to filter sections/keys to save. If null, all sections/keys will be saved

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
orxSTATUS orxConfig_Save(const orxSTRING _zFileName, orxBOOL _bUseEncryption, const orxCONFIG_SAVE_FUNCTION _pfnSaveCallback)
```

---

### **`selectSection`**

* Signature:

```lua
r1 = selectSection(sectionname)
```

* Description:

> Selects current working section

* Params:

name | type | description 
--- | --- | ---
sectionname | string | Section name to select

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxConfig_SelectSection(const orxSTRING _zSectionName)
```

---

### **`setBaseName`**

* Signature:

```lua
r1 = setBaseName(basename)
```

* Description:

> Sets config base name

* Params:

name | type | description 
--- | --- | ---
basename | string | Base name used for default config file

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxConfig_SetBaseName(const orxSTRING _zBaseName)
```

---

### **`setBool`**

* Signature:

```lua
r1 = setBool(key, value)
```

* Description:

> Writes a boolean value to config

* Params:

name | type | description 
--- | --- | ---
key | string | Key name
value | boolean | Value

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxConfig_SetBool(const orxSTRING _zKey, orxBOOL _bValue)
```

---

### **`setDefaultParent`**

* Signature:

```lua
r1 = setDefaultParent(sectionname)
```

* Description:

> Sets default parent for all sections

* Params:

name | type | description 
--- | --- | ---
sectionname | string | Section name that will be used as an implicit default parent section for all config sections, if nil is provided, default parent will be removed

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxConfig_SetDefaultParent(const orxSTRING _zSectionName)
```

---

### **`setEncryptionKey`**

* Signature:

```lua
r1 = setEncryptionKey(encryptionkey)
```

* Description:

> Sets encryption key

* Params:

name | type | description 
--- | --- | ---
encryptionkey | string | Encryption key to use, nil to clear

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxConfig_SetEncryptionKey(const orxSTRING _zEncryptionKey)
```

---

### **`setFloat`**

* Signature:

```lua
r1 = setFloat(key, value)
```

* Description:

> Writes a float value to config

* Params:

name | type | description 
--- | --- | ---
key | string | Key name
value | number | Value

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxConfig_SetFloat(const orxSTRING _zKey, orxFLOAT _fValue)
```

---

### **`setListString`**

* Signature:

```lua
r1 = setListString(key, value, number)
```

* Description:

> Writes a list of string values to config

* Params:

name | type | description 
--- | --- | ---
key | string | Key name
value | table of string | Values
number | integer | Number of values

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxConfig_SetListString(const orxSTRING _zKey, const orxSTRING _azValue[], orxU32 _u32Number)
```

---

### **`setParent`**

* Signature:

```lua
r1 = setParent(sectionname, parentname)
```

* Description:

> Sets a section's parent

* Params:

name | type | description 
--- | --- | ---
sectionname | string | Concerned section, if the section doesn't exist, it will be created
parentname | string | Parent section's name, if the section doesn't exist, it will be created, if nil is provided, the former parent will be erased, if empty string is provided, "no default parent" will be enforced

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxConfig_SetParent(const orxSTRING _zSectionName, const orxSTRING _zParentName)
```

---

### **`setS32`**

* Signature:

```lua
r1 = setS32(key, value)
```

* Description:

> Writes a signed integer value to config

* Params:

name | type | description 
--- | --- | ---
key | string | Key name
value | integer | Value

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxConfig_SetS32(const orxSTRING _zKey, orxS32 _s32Value)
```

---

### **`setS64`**

* Signature:

```lua
r1 = setS64(key, value)
```

* Description:

> Writes a signed integer value to config

* Params:

name | type | description 
--- | --- | ---
key | string | Key name
value | integer | Value

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxConfig_SetS64(const orxSTRING _zKey, orxS64 _s64Value)
```

---

### **`setString`**

* Signature:

```lua
r1 = setString(key, value)
```

* Description:

> Writes a string value to config

* Params:

name | type | description 
--- | --- | ---
key | string | Key name
value | string | Value

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxConfig_SetString(const orxSTRING _zKey, const orxSTRING _zValue)
```

---

### **`setStringBlock`**

* Signature:

```lua
r1 = setStringBlock(key, value)
```

* Description:

> Writes a string value to config, in block mode

* Params:

name | type | description 
--- | --- | ---
key | string | Key name
value | string | Value to write in block mode

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxConfig_SetStringBlock(const orxSTRING _zKey, const orxSTRING _zValue)
```

---

### **`setU32`**

* Signature:

```lua
r1 = setU32(key, value)
```

* Description:

> Writes an unsigned integer value to config

* Params:

name | type | description 
--- | --- | ---
key | string | Key name
value | integer | Value

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxConfig_SetU32(const orxSTRING _zKey, orxU32 _u32Value)
```

---

### **`setU64`**

* Signature:

```lua
r1 = setU64(key, value)
```

* Description:

> Writes an unsigned integer value to config

* Params:

name | type | description 
--- | --- | ---
key | string | Key name
value | integer | Value

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxConfig_SetU64(const orxSTRING _zKey, orxU64 _u64Value)
```

---

### **`setVector`**

* Signature:

```lua
r1 = setVector(key, value)
```

* Description:

> Writes a vector value to config

* Params:

name | type | description 
--- | --- | ---
key | string | Key name
value | [orxVECTOR\#](../types/orxVECTOR.md) | Value

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxConfig_SetVector(const orxSTRING _zKey, const orxVECTOR *_pvValue)
```

---

### **`setup`**

* Signature:

```lua
setup()
```

* Description:

> Config module setup

* Params:

* Returns:

* C signature:

```c
  void  orxConfig_Setup()
```

---

