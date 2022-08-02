# module fps

## functions

### **`exit`**

* Signature:

```lua
exit()
```

* Description:

> 

* Params:

* Returns:

* C signature:

```c
  void  orxFPS_Exit()
```

---

### **`getFPS`**

* Signature:

```lua
r1 = getFPS()
```

* Description:

> Gets current FTP value

* Params:

* Returns:

type | description 
--- | ---
integer | integer \(u32\)

* C signature:

```c
  orxU32  orxFPS_GetFPS()
```

---

### **`increaseFrameCount`**

* Signature:

```lua
increaseFrameCount()
```

* Description:

> 

* Params:

* Returns:

* C signature:

```c
  void  orxFPS_IncreaseFrameCount()
```

---

### **`init`**

* Signature:

```lua
r1 = init()
```

* Description:

> Inits the FPS module

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxFPS_Init()
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
  void  orxFPS_Setup()
```

---

