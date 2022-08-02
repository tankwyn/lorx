# module object

## functions

### **`boxPick`**

* Signature:

```lua
r1 = boxPick(box, groupid)
```

* Description:

> Picks the first active object with size in contact with the given box, withing a given group. Use orxObject_CreateNeighborList\(\) to get all the objects in the box.

* Params:

name | type | description 
--- | --- | ---
box | [orxOBOX\#](../types/orxOBOX.md) | Box to use for picking
groupid | integer | Group ID to consider, [orxSTRINGID_UNDEFINED](./constants.md#orxstringid_undefined) for all

* Returns:

type | description 
--- | ---
[orxOBJECT](../types/orxOBJECT.md)  | [orxOBJECT](../types/orxOBJECT.md) / nil

* C signature:

```c
  orxOBJECT * orxObject_BoxPick(const orxOBOX *_pstBox, orxSTRINGID _stGroupID)
```

---

### **`create`**

* Signature:

```lua
r1 = create()
```

* Description:

> Creates an empty object.

* Params:

* Returns:

type | description 
--- | ---
[orxOBJECT](../types/orxOBJECT.md)  | [orxOBJECT](../types/orxOBJECT.md) / nil

* C signature:

```c
  orxOBJECT * orxObject_Create()
```

---

### **`createFromConfig`**

* Signature:

```lua
r1 = createFromConfig(configid)
```

* Description:

> Creates an object from config.

* Params:

name | type | description 
--- | --- | ---
configid | string | Config ID

* Returns:

type | description 
--- | ---
[orxOBJECT](../types/orxOBJECT.md)  | [orxOBJECT](../types/orxOBJECT.md) / nil

* C signature:

```c
  orxOBJECT * orxObject_CreateFromConfig(const orxSTRING _zConfigID)
```

---

### **`exit`**

* Signature:

```lua
exit()
```

* Description:

> Exits from the object module.

* Params:

* Returns:

* C signature:

```c
  void  orxObject_Exit()
```

---

### **`getDefaultGroupID`**

* Signature:

```lua
r1 = getDefaultGroupID()
```

* Description:

> Gets default group ID.

* Params:

* Returns:

type | description 
--- | ---
integer | Default group ID

* C signature:

```c
  orxSTRINGID  orxObject_GetDefaultGroupID()
```

---

### **`getNeighborList`**

* Signature:

```lua
r1 = getNeighborList(box, groupid)
```

* Description:

> Get the neighboring objects

* Params:

name | type | description 
--- | --- | ---
box | [orxOBOX](../types/orxOBOX.md)  | Box to select objects
groupid | integer | Group ID, [orxSTRINGID_UNDEFINED](./constants.md#orxstringid_undefined) for all

* Returns:

type | description 
--- | ---
table of [orxOBJECT](../types/orxOBJECT.md)  | Objects in the box

* C signature:

```c
orxBANK *orxObject_CreateNeighborList(const orxOBOX *_pstCheckBox, orxSTRINGID _stGroupID);
void orxObject_DeleteNeighborList(orxBANK *_pstObjectList);
```

---

### **`getNext`**

* Signature:

```lua
r1 = getNext(object, groupid)
```

* Description:

> Gets next object in group.

* Params:

name | type | description 
--- | --- | ---
object | [orxOBJECT\#](../types/orxOBJECT.md) | Concerned object, nil to get the first one
groupid | integer | Group ID to consider, [orxSTRINGID_UNDEFINED](./constants.md#orxstringid_undefined) for all

* Returns:

type | description 
--- | ---
[orxOBJECT](../types/orxOBJECT.md)  | [orxOBJECT](../types/orxOBJECT.md) / nil

* C signature:

```c
  orxOBJECT * orxObject_GetNext(const orxOBJECT *_pstObject, orxSTRINGID _stGroupID)
```

---

### **`getNextEnabled`**

* Signature:

```lua
r1 = getNextEnabled(object, groupid)
```

* Description:

> Gets next enabled object.

* Params:

name | type | description 
--- | --- | ---
object | [orxOBJECT\#](../types/orxOBJECT.md) | Concerned object, nil to get the first one
groupid | integer | Group ID to consider, [orxSTRINGID_UNDEFINED](./constants.md#orxstringid_undefined) for all

* Returns:

type | description 
--- | ---
[orxOBJECT](../types/orxOBJECT.md)  | [orxOBJECT](../types/orxOBJECT.md) / nil

* C signature:

```c
  orxOBJECT * orxObject_GetNextEnabled(const orxOBJECT *_pstObject, orxSTRINGID _stGroupID)
```

---

### **`getStructure`**

* Signature:

```lua
r1 = getStructure(object, structureid)
```

* Description:

> Structure used by an object get accessor, given its structure ID. Structure must then be cast correctly. \(see helper macro \#orxOBJECT_GET_STRUCTURE\(\)\)

* Params:

name | type | description 
--- | --- | ---
object | [orxOBJECT\#](../types/orxOBJECT.md) | Concerned object
structureid | [orxSTRUCTURE_ID](../enums.md#orxstructure_id)  | ID of the structure to get

* Returns:

type | description 
--- | ---
[orxSTRUCTURE](../types/orxSTRUCTURE.md)  | [orxSTRUCTURE](../types/orxSTRUCTURE.md) / nil

* C signature:

```c
  orxSTRUCTURE * _orxObject_GetStructure(const orxOBJECT *_pstObject, orxSTRUCTURE_ID _eStructureID)
```

---

### **`init`**

* Signature:

```lua
r1 = init()
```

* Description:

> Inits the object module.

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxObject_Init()
```

---

### **`pick`**

* Signature:

```lua
r1 = pick(position, groupid)
```

* Description:

> Picks the first active object with size "under" the given position, within a given group. See orxObject_BoxPick\(\), orxObject_CreateNeighborList\(\) and orxObject_Raycast for other ways of picking objects.

* Params:

name | type | description 
--- | --- | ---
position | [orxVECTOR\#](../types/orxVECTOR.md) | Position to pick from
groupid | integer | Group ID to consider, [orxSTRINGID_UNDEFINED](./constants.md#orxstringid_undefined) for all

* Returns:

type | description 
--- | ---
[orxOBJECT](../types/orxOBJECT.md)  | [orxOBJECT](../types/orxOBJECT.md) / nil

* C signature:

```c
  orxOBJECT * orxObject_Pick(const orxVECTOR *_pvPosition, orxSTRINGID _stGroupID)
```

---

### **`raycast`**

* Signature:

```lua
r1 = raycast(begin, end, selfflags, checkmask, earlyexit, contact, normal)
```

* Description:

> Issues a raycast to test for potential objects in the way.

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
[orxOBJECT](../types/orxOBJECT.md)  | Colliding [orxOBJECT](../types/orxOBJECT.md) / nil

* C signature:

```c
  orxOBJECT * orxObject_Raycast(const orxVECTOR *_pvBegin, const orxVECTOR *_pvEnd, orxU16 _u16SelfFlags, orxU16 _u16CheckMask, orxBOOL _bEarlyExit, orxVECTOR *_pvContact, orxVECTOR *_pvNormal)
```

---

### **`setup`**

* Signature:

```lua
setup()
```

* Description:

> Object module setup

* Params:

* Returns:

* C signature:

```c
  void  orxObject_Setup()
```

---

