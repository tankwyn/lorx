# module body

## functions

### **`boxPick`**

* Signature:

```lua
r1 = boxPick(box, selfflags, checkmask, bodylist, number)
```

* Description:

> Picks bodies in contact with the given axis aligned box.

* Params:

name | type | description 
--- | --- | ---
box | [orxAABOX\#](../types/orxAABOX.md) | Box used for picking
selfflags | integer | Selfs flags used for filtering \(0xFFFF for no filtering\)
checkmask | integer | Check mask used for filtering \(0xFFFF for no filtering\)
bodylist | table of [orxBODY](../types/orxBODY.md)  | List of bodies to fill
number | integer | Number of bodies

* Returns:

type | description 
--- | ---
integer | Count of actual found bodies. It might be larger than the given array, in which case you'd need to pass a larger array to retrieve them all.

* C signature:

```c
  orxU32  orxBody_BoxPick(const orxAABOX *_pstBox, orxU16 _u16SelfFlags, orxU16 _u16CheckMask, orxBODY *_apstBodyList[], orxU32 _u32Number)
```

---

### **`createFromConfig`**

* Signature:

```lua
r1 = createFromConfig(owner, configid)
```

* Description:

> Creates a body from config

* Params:

name | type | description 
--- | --- | ---
owner | [orxSTRUCTURE\#](../types/orxSTRUCTURE.md) | Body's owner used for collision callbacks \(usually an orxOBJECT\)
configid | string | Body config ID

* Returns:

type | description 
--- | ---
[orxBODY](../types/orxBODY.md)  | Created [orxGRAPHIC](../types/orxGRAPHIC.md) / nil

* C signature:

```c
  orxBODY * orxBody_CreateFromConfig(const orxSTRUCTURE *_pstOwner, const orxSTRING _zConfigID)
```

---

### **`exit`**

* Signature:

```lua
exit()
```

* Description:

> Exits from the Body module

* Params:

* Returns:

* C signature:

```c
  void  orxBody_Exit()
```

---

### **`init`**

* Signature:

```lua
r1 = init()
```

* Description:

> Inits the Body module

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | 

* C signature:

```c
  orxSTATUS  orxBody_Init()
```

---

### **`raycast`**

* Signature:

```lua
r1 = raycast(begin, end, selfflags, checkmask, earlyexit, contact, normal)
```

* Description:

> Issues a raycast to test for potential bodies in the way

* Params:

name | type | description 
--- | --- | ---
begin | [orxVECTOR\#](../types/orxVECTOR.md) | Beginning of raycast
end | [orxVECTOR\#](../types/orxVECTOR.md) | End of raycast
selfflags | integer | Selfs flags used for filtering \(0xFFFF for no filtering\)
checkmask | integer | Check mask used for filtering \(0xFFFF for no filtering\)
earlyexit | boolean | Should stop as soon as an object has been hit \(which might not be the closest\)
contact | [orxVECTOR](../types/orxVECTOR.md)  | If non-nil and a contact is found it will be stored here
normal | [orxVECTOR](../types/orxVECTOR.md)  | If non-nil and a contact is found, its normal will be stored here

* Returns:

type | description 
--- | ---
[orxBODY](../types/orxBODY.md)  | Colliding [orxBODY](../types/orxBODY.md) / nil

* C signature:

```c
  orxBODY * orxBody_Raycast(const orxVECTOR *_pvBegin, const orxVECTOR *_pvEnd, orxU16 _u16SelfFlags, orxU16 _u16CheckMask, orxBOOL _bEarlyExit, orxVECTOR *_pvContact, orxVECTOR *_pvNormal)
```

---

### **`setup`**

* Signature:

```lua
setup()
```

* Description:

> Body module setup

* Params:

* Returns:

* C signature:

```c
  void  orxBody_Setup()
```

---

