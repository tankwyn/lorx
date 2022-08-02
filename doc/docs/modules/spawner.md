# module spawner

## functions

### **`create`**

* Signature:

```lua
r1 = create()
```

* Description:

> Creates an empty spawner

* Params:

* Returns:

type | description 
--- | ---
[orxSPAWNER](../types/orxSPAWNER.md)  | [orxSPAWNER](../types/orxSPAWNER.md) / nil

* C signature:

```c
  orxSPAWNER * orxSpawner_Create()
```

---

### **`createFromConfig`**

* Signature:

```lua
r1 = createFromConfig(configid)
```

* Description:

> Creates a spawner from config

* Params:

name | type | description 
--- | --- | ---
configid | string | Config ID

* Returns:

type | description 
--- | ---
[orxSPAWNER](../types/orxSPAWNER.md)  | [orxSPAWNER](../types/orxSPAWNER.md) / nil

* C signature:

```c
  orxSPAWNER * orxSpawner_CreateFromConfig(const orxSTRING _zConfigID)
```

---

### **`exit`**

* Signature:

```lua
exit()
```

* Description:

> Exits from the spawner module

* Params:

* Returns:

* C signature:

```c
  void  orxSpawner_Exit()
```

---

### **`init`**

* Signature:

```lua
r1 = init()
```

* Description:

> Inits the spawner module

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxSpawner_Init()
```

---

### **`setup`**

* Signature:

```lua
setup()
```

* Description:

> Spawner module setup

* Params:

* Returns:

* C signature:

```c
  void  orxSpawner_Setup()
```

---

