# module thread

## functions

### **`createSemaphore`**

* Signature:

```lua
r1 = createSemaphore(value)
```

* Description:

> Inits a semaphore with a given value

* Params:

name | type | description 
--- | --- | ---
value | integer | Value with which to init the semaphore

* Returns:

type | description 
--- | ---
[orxTHREAD_SEMAPHORE](../types/orxTHREAD_SEMAPHORE.md)  | [orxTHREAD_SEMAPHORE](../types/orxTHREAD_SEMAPHORE.md) / nil

* C signature:

```c
  orxTHREAD_SEMAPHORE * orxThread_CreateSemaphore(orxU32 _u32Value)
```

---

### **`enable`**

* Signature:

```lua
r1 = enable(enablethreads, disablethreads)
```

* Description:

> Enables / disables threads

* Params:

name | type | description 
--- | --- | ---
enablethreads | integer | Mask of threads to enable \(1 << ThreadID\)
disablethreads | integer | Mask of threads to disable \(1 << ThreadID\)

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxThread_Enable(orxU32 _u32EnableThreads, orxU32 _u32DisableThreads)
```

---

### **`exit`**

* Signature:

```lua
exit()
```

* Description:

> Exits from the thread module

* Params:

* Returns:

* C signature:

```c
  void  orxThread_Exit()
```

---

### **`getCurrent`**

* Signature:

```lua
r1 = getCurrent()
```

* Description:

> Gets current thread ID

* Params:

* Returns:

type | description 
--- | ---
integer | Current thread ID

* C signature:

```c
  orxU32  orxThread_GetCurrent()
```

---

### **`getName`**

* Signature:

```lua
r1 = getName(threadid)
```

* Description:

> Gets a thread name

* Params:

name | type | description 
--- | --- | ---
threadid | integer | ID of the concerned thread

* Returns:

type | description 
--- | ---
string | Thread name

* C signature:

```c
  const orxSTRING  orxThread_GetName(orxU32 _u32ThreadID)
```

---

### **`getTaskCount`**

* Signature:

```lua
r1 = getTaskCount()
```

* Description:

> Gets number of pending asynchronous tasks awaiting full completion \(might pump task notifications if called from main thread\)

* Params:

* Returns:

type | description 
--- | ---
integer | Number of pending asynchronous tasks

* C signature:

```c
  orxU32  orxThread_GetTaskCount()
```

---

### **`init`**

* Signature:

```lua
r1 = init()
```

* Description:

> Inits the thread module

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxThread_Init()
```

---

### **`join`**

* Signature:

```lua
r1 = join(threadid)
```

* Description:

> Joins a thread \(blocks & waits until the other thread finishes\)

* Params:

name | type | description 
--- | --- | ---
threadid | integer | ID of the thread for which to wait

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxThread_Join(orxU32 _u32ThreadID)
```

---

### **`joinAll`**

* Signature:

```lua
r1 = joinAll()
```

* Description:

> Joins all threads \(blocks & waits until the other threads finish\)

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxThread_JoinAll()
```

---

### **`setup`**

* Signature:

```lua
setup()
```

* Description:

> Thread module setup

* Params:

* Returns:

* C signature:

```c
  void  orxThread_Setup()
```

---

### **`yield`**

* Signature:

```lua
yield()
```

* Description:

> Yields to other threads

* Params:

* Returns:

* C signature:

```c
  void  orxThread_Yield()
```

---

