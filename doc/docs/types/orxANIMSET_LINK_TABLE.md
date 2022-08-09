# type orxANIMSET_LINK_TABLE

> 

## Methods

### **`orxANIMSET_LINK_TABLE:addr`**

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

### **`orxANIMSET_LINK_TABLE:aeq`**

* Signature:

```lua
r1 = aeq(u)
```

* Description:

> check if the memory address of this lorx userdata equals to another

* Params:

name | type | description 
--- | --- | ---
u | any lorx utype | another lorx userdata

* Returns:

type | description 
--- | ---
boolean | true or false

---

### **`orxANIMSET_LINK_TABLE:asVoid`**

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

### **`orxANIMSET_LINK_TABLE:deleteLink`**

* Signature:

```lua
deleteLink()
```

* Description:

> Deletes a Link table (non-const self only)

* Params:

* Returns:

* C signature:

```c
  void  orxAnimSet_DeleteLinkTable(orxANIMSET_LINK_TABLE *_pstLinkTable)
```

---

### **`orxANIMSET_LINK_TABLE:type`**

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

