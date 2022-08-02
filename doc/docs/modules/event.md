# module event

## functions

### **`exit`**

* Signature:

```lua
exit()
```

* Description:

> Exits from the event Module

* Params:

* Returns:

* C signature:

```c
  void  orxEvent_Exit()
```

---

### **`init`**

* Signature:

```lua
r1 = init()
```

* Description:

> Initializes the event Module

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxEvent_Init()
```

---

### **`isSending`**

* Signature:

```lua
r1 = isSending()
```

* Description:

> Is currently sending an event?

* Params:

* Returns:

type | description 
--- | ---
boolean | true / false

* C signature:

```c
  orxBOOL  orxEvent_IsSending()
```

---

### **`sendShort`**

* Signature:

```lua
r1 = sendShort(eventtype, eventid)
```

* Description:

> Sends a simple event

* Params:

name | type | description 
--- | --- | ---
eventtype | [orxEVENT_TYPE](../enums.md#orxevent_type)  | Event type
eventid | string | Event ID

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxEvent_SendShort(orxEVENT_TYPE _eEventType, orxENUM _eEventID)
```

---

### **`setup`**

* Signature:

```lua
setup()
```

* Description:

> Event module setup

* Params:

* Returns:

* C signature:

```c
  void  orxEvent_Setup()
```

---

