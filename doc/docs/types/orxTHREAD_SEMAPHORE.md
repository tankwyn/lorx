# type orxTHREAD_SEMAPHORE

> 

## Methods

### **`orxTHREAD_SEMAPHORE:addr`**

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

### **`orxTHREAD_SEMAPHORE:aeq`**

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

### **`orxTHREAD_SEMAPHORE:asVoid`**

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

### **`orxTHREAD_SEMAPHORE:delete`**

* Signature:

```lua
r1 = delete()
```

* Description:

> Deletes a semaphore (non-const self only)

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxThread_DeleteSemaphore(orxTHREAD_SEMAPHORE *_pstSemaphore)
```

---

### **`orxTHREAD_SEMAPHORE:signal`**

* Signature:

```lua
r1 = signal()
```

* Description:

> Signals a semaphore (non-const self only)

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxThread_SignalSemaphore(orxTHREAD_SEMAPHORE *_pstSemaphore)
```

---

### **`orxTHREAD_SEMAPHORE:type`**

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

### **`orxTHREAD_SEMAPHORE:wait`**

* Signature:

```lua
r1 = wait()
```

* Description:

> Waits for a semaphore (non-const self only)

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxThread_WaitSemaphore(orxTHREAD_SEMAPHORE *_pstSemaphore)
```

---

