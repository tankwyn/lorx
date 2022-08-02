# module locale

## functions

### **`exit`**

* Signature:

```lua
exit()
```

* Description:

> Exits from the Locale Module

* Params:

* Returns:

* C signature:

```c
  void  orxLocale_Exit()
```

---

### **`getCurrentLanguage`**

* Signature:

```lua
r1 = getCurrentLanguage(group)
```

* Description:

> Gets current language

* Params:

name | type | description 
--- | --- | ---
group | string | Concerned group, nil for default/fallback one

* Returns:

type | description 
--- | ---
string | Current selected language

* C signature:

```c
  const orxSTRING  orxLocale_GetCurrentLanguage(const orxSTRING _zGroup)
```

---

### **`getKey`**

* Signature:

```lua
r1 = getKey(keyindex, group)
```

* Description:

> Gets key for the current language at the given index

* Params:

name | type | description 
--- | --- | ---
keyindex | integer | Index of the desired key
group | string | Concerned group, nil for default/fallback one

* Returns:

type | description 
--- | ---
string | string if exist, nil otherwise

* C signature:

```c
  const orxSTRING  orxLocale_GetKey(orxU32 _u32KeyIndex, const orxSTRING _zGroup)
```

---

### **`getKeyCount`**

* Signature:

```lua
r1 = getKeyCount(group)
```

* Description:

> Gets key count for the current language

* Params:

name | type | description 
--- | --- | ---
group | string | Concerned group, nil for default/fallback one

* Returns:

type | description 
--- | ---
integer | Key count the current language if valid, 0 otherwise

* C signature:

```c
  orxU32  orxLocale_GetKeyCount(const orxSTRING _zGroup)
```

---

### **`getLanguage`**

* Signature:

```lua
r1 = getLanguage(languageindex)
```

* Description:

> Gets language at the given index

* Params:

name | type | description 
--- | --- | ---
languageindex | integer | Index of the desired language

* Returns:

type | description 
--- | ---
string | string if exist, empty string otherwise

* C signature:

```c
  const orxSTRING  orxLocale_GetLanguage(orxU32 _u32LanguageIndex)
```

---

### **`getLanguageCount`**

* Signature:

```lua
r1 = getLanguageCount()
```

* Description:

> Gets language count

* Params:

* Returns:

type | description 
--- | ---
integer | Number of languages defined

* C signature:

```c
  orxU32  orxLocale_GetLanguageCount()
```

---

### **`getString`**

* Signature:

```lua
r1 = getString(key, group)
```

* Description:

> Reads a string in the current language for the given key

* Params:

name | type | description 
--- | --- | ---
key | string | Key name
group | string | Concerned group, nil for default/fallback one

* Returns:

type | description 
--- | ---
string | The value

* C signature:

```c
  const orxSTRING  orxLocale_GetString(const orxSTRING _zKey, const orxSTRING _zGroup)
```

---

### **`hasLanguage`**

* Signature:

```lua
r1 = hasLanguage(language)
```

* Description:

> Has given language? \(if not correctly defined, false will be returned\)

* Params:

name | type | description 
--- | --- | ---
language | string | Concerned language

* Returns:

type | description 
--- | ---
boolean | true / false

* C signature:

```c
  orxBOOL  orxLocale_HasLanguage(const orxSTRING _zLanguage)
```

---

### **`hasString`**

* Signature:

```lua
r1 = hasString(key, group)
```

* Description:

> Has string for the given key?

* Params:

name | type | description 
--- | --- | ---
key | string | Key name
group | string | Concerned group, nil for default/fallback one

* Returns:

type | description 
--- | ---
boolean | true / false

* C signature:

```c
  orxBOOL  orxLocale_HasString(const orxSTRING _zKey, const orxSTRING _zGroup)
```

---

### **`init`**

* Signature:

```lua
r1 = init()
```

* Description:

> Initializes the Locale Module

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxLocale_Init()
```

---

### **`selectLanguage`**

* Signature:

```lua
r1 = selectLanguage(language, group)
```

* Description:

> Selects current working language

* Params:

name | type | description 
--- | --- | ---
language | string | Language to select
group | string | Concerned group, nil for default/fallback one

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | 

* C signature:

```c
  orxSTATUS  orxLocale_SelectLanguage(const orxSTRING _zLanguage, const orxSTRING _zGroup)
```

---

### **`setString`**

* Signature:

```lua
r1 = setString(key, value, group)
```

* Description:

> Writes a string in the current language for the given key

* Params:

name | type | description 
--- | --- | ---
key | string | Key name
value | string | Value
group | string | Concerned group, nil for default/fallback one

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxLocale_SetString(const orxSTRING _zKey, const orxSTRING _zValue, const orxSTRING _zGroup)
```

---

### **`setup`**

* Signature:

```lua
setup()
```

* Description:

> Locale module setup

* Params:

* Returns:

* C signature:

```c
  void  orxLocale_Setup()
```

---

