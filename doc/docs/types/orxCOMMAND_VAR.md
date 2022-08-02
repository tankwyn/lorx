# type orxCOMMAND_VAR

> 

constructors: [lorx.command.commandVar](../modules/command.md#commandvar)

## Properties

name | type 
--- | --- 
vvalue | [orxVECTOR](./orxVECTOR.md) 
zvalue | string
u32value | integer
s32value | integer
u64value | integer
s64value | integer
fvalue | number
bvalue | boolean
type | [orxCOMMAND_VAR_TYPE](../enums.md#orxcommand_var_type) 

## Methods

### **`orxCOMMAND_VAR:addr`**

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

### **`orxCOMMAND_VAR:aeq`**

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

### **`orxCOMMAND_VAR:asVoid`**

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

### **`orxCOMMAND_VAR:type`**

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

