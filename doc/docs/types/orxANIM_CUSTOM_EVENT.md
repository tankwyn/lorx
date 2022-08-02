# type orxANIM_CUSTOM_EVENT

> 

constructors: [lorx.anim.animCustomEvent](../modules/anim.md#animcustomevent)

## Properties

name | type 
--- | --- 
name | string
fvalue | number
timestamp | number

## Methods

### **`orxANIM_CUSTOM_EVENT:addr`**

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

### **`orxANIM_CUSTOM_EVENT:aeq`**

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

### **`orxANIM_CUSTOM_EVENT:asVoid`**

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

### **`orxANIM_CUSTOM_EVENT:type`**

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

