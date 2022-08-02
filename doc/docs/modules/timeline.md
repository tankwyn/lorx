# module timeline

## functions

### **`clearCache`**

* Signature:

```lua
r1 = clearCache()
```

* Description:

> Clears cache \(if any TimeLine track is still in active use, it'll remain in memory until not referenced anymore\)

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxTimeLine_ClearCache()
```

---

### **`create`**

* Signature:

```lua
r1 = create()
```

* Description:

> Creates an empty TimeLine

* Params:

* Returns:

type | description 
--- | ---
[orxTIMELINE](../types/orxTIMELINE.md)  | [orxTIMELINE](../types/orxTIMELINE.md) / nil

* C signature:

```c
  orxTIMELINE * orxTimeLine_Create()
```

---

### **`exit`**

* Signature:

```lua
exit()
```

* Description:

> Exits from the TimeLine module

* Params:

* Returns:

* C signature:

```c
  void  orxTimeLine_Exit()
```

---

### **`getTrackDuration`**

* Signature:

```lua
r1 = getTrackDuration(trackid)
```

* Description:

> Gets a track duration using its config ID

* Params:

name | type | description 
--- | --- | ---
trackid | string | Config ID of the concerned track

* Returns:

type | description 
--- | ---
number | Duration if found, -orxFLOAT_1 otherwise

* C signature:

```c
  orxFLOAT  orxTimeLine_GetTrackDuration(const orxSTRING _zTrackID)
```

---

### **`init`**

* Signature:

```lua
r1 = init()
```

* Description:

> Inits the TimeLine module

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxTimeLine_Init()
```

---

### **`setup`**

* Signature:

```lua
setup()
```

* Description:

> TimeLine module setup

* Params:

* Returns:

* C signature:

```c
  void  orxTimeLine_Setup()
```

---

