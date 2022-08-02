# module module

## functions

### **`addDependency`**

* Signature:

```lua
addDependency(moduleid, dependid)
```

* Description:

> Adds dependencies between 2 modules

* Params:

name | type | description 
--- | --- | ---
moduleid | [orxMODULE_ID](../enums.md#orxmodule_id)  | Concerned module ID
dependid | [orxMODULE_ID](../enums.md#orxmodule_id)  | Module ID of the needed module

* Returns:

* C signature:

```c
  void  orxModule_AddDependency(orxMODULE_ID _eModuleID, orxMODULE_ID _eDependID)
```

---

### **`addOptionalDependency`**

* Signature:

```lua
addOptionalDependency(moduleid, dependid)
```

* Description:

> Adds optional dependencies between 2 modules

* Params:

name | type | description 
--- | --- | ---
moduleid | [orxMODULE_ID](../enums.md#orxmodule_id)  | Concerned module ID
dependid | [orxMODULE_ID](../enums.md#orxmodule_id)  | Module ID of the optionally needed module

* Returns:

* C signature:

```c
  void  orxModule_AddOptionalDependency(orxMODULE_ID _eModuleID, orxMODULE_ID _eDependID)
```

---

### **`exit`**

* Signature:

```lua
exit(moduleid)
```

* Description:

> Exits from a module

* Params:

name | type | description 
--- | --- | ---
moduleid | [orxMODULE_ID](../enums.md#orxmodule_id)  | Concerned module ID

* Returns:

* C signature:

```c
  void  orxModule_Exit(orxMODULE_ID _eModuleID)
```

---

### **`getName`**

* Signature:

```lua
r1 = getName(moduleid)
```

* Description:

> Gets module name

* Params:

name | type | description 
--- | --- | ---
moduleid | [orxMODULE_ID](../enums.md#orxmodule_id)  | Concerned module ID

* Returns:

type | description 
--- | ---
string | Module name / empty string

* C signature:

```c
  const orxSTRING  orxModule_GetName(orxMODULE_ID _eModuleID)
```

---

### **`init`**

* Signature:

```lua
r1 = init(moduleid)
```

* Description:

> Inits a module

* Params:

name | type | description 
--- | --- | ---
moduleid | [orxMODULE_ID](../enums.md#orxmodule_id)  | Concerned module ID

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxModule_Init(orxMODULE_ID _eModuleID)
```

---

### **`isInitialized`**

* Signature:

```lua
r1 = isInitialized(moduleid)
```

* Description:

> Is module initialized?

* Params:

name | type | description 
--- | --- | ---
moduleid | [orxMODULE_ID](../enums.md#orxmodule_id)  | Concerned module ID

* Returns:

type | description 
--- | ---
boolean | true / false

* C signature:

```c
  orxBOOL  orxModule_IsInitialized(orxMODULE_ID _eModuleID)
```

---

