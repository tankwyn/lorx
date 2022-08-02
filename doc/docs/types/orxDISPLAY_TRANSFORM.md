# type orxDISPLAY_TRANSFORM

> 

constructors: [lorx.display.displayTransform](../modules/display.md#displaytransform)

## Properties

name | type 
--- | --- 
srcx | number
srcy | number
dstx | number
dsty | number
repeatx | number
repeaty | number
scalex | number
scaley | number
rotation | number

## Methods

### **`orxDISPLAY_TRANSFORM:addr`**

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

### **`orxDISPLAY_TRANSFORM:aeq`**

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

### **`orxDISPLAY_TRANSFORM:asVoid`**

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

### **`orxDISPLAY_TRANSFORM:type`**

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

