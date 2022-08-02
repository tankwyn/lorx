# module input

## functions

### **`bind`**

* Signature:

```lua
r1 = bind(name, type, id, mode, bindingindex)
```

* Description:

> Binds an input to a mouse/joystick button, keyboard key or joystick axis

* Params:

name | type | description 
--- | --- | ---
name | string | Concerned input name
type | [orxINPUT_TYPE](../enums.md#orxinput_type)  | Type of peripheral to bind
id | string | ID of button/key/axis to bind
mode | [orxINPUT_MODE](../enums.md#orxinput_mode)  | Mode \(only used for axis input\)
bindingindex | integer | Index of the desired binding, if < 0 the oldest binding will be replaced

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxInput_Bind(const orxSTRING _zName, orxINPUT_TYPE _eType, orxENUM _eID, orxINPUT_MODE _eMode, orxS32 _s32BindingIndex)
```

---

### **`enableSet`**

* Signature:

```lua
r1 = enableSet(setname, enable)
```

* Description:

> Enables/disables working set \(without selecting it\)

* Params:

name | type | description 
--- | --- | ---
setname | string | Set name to enable/disable
enable | boolean | Enable / Disable

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxInput_EnableSet(const orxSTRING _zSetName, orxBOOL _bEnable)
```

---

### **`exit`**

* Signature:

```lua
exit()
```

* Description:

> Exits from Input module

* Params:

* Returns:

* C signature:

```c
  void  orxInput_Exit()
```

---

### **`getActiveBinding`**

* Signature:

```lua
r1, r2, r3, r4 = getActiveBinding()
```

* Description:

> Gets active binding \(current pressed key/button/...\) so as to allow on-the-fly user rebinding

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success if one active binding is found, failure otherwise
[orxINPUT_TYPE](../enums.md#orxinput_type)  | Active binding's type \(mouse/joystick button, keyboard key or joystick axis\)
string | Active binding's ID \(ID of button/key/axis to bind\)
number | Active binding's value \(optional\)

* C signature:

```c
  orxSTATUS  orxInput_GetActiveBinding(orxINPUT_TYPE *_peType, orxENUM *_peID, orxFLOAT *_pfValue)
```

---

### **`getBinding`**

* Signature:

```lua
r1, r2, r3, r4 = getBinding(name, bindingindex)
```

* Description:

> Gets an input binding \(mouse/joystick button, keyboard key or joystick axis\) at a given index

* Params:

name | type | description 
--- | --- | ---
name | string | Concerned input name
bindingindex | integer | Index of the desired binding, should be less than [orxINPUT_KU32_BINDING_NUMBER](./constants.md#orxinput_ku32_binding_number) 

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success if input exists, failure otherwise
[orxINPUT_TYPE](../enums.md#orxinput_type)  | Binding type \(if a slot is not bound, its value is orxINPUT_TYPE_NONE\)
string | Binding ID \(button/key/axis\)
[orxINPUT_MODE](../enums.md#orxinput_mode)  | Mode \(only used for axis inputs\)

* C signature:

```c
  orxSTATUS  orxInput_GetBinding(const orxSTRING _zName, orxU32 _u32BindingIndex, orxINPUT_TYPE *_peType, orxENUM *_peID, orxINPUT_MODE *_peMode)
```

---

### **`getBindingList`**

* Signature:

```lua
r1, r2, r3, r4 = getBindingList(name)
```

* Description:

> Get an input binding list \(mouse/keyboard/joystick\)

* Params:

name | type | description 
--- | --- | ---
name | string | Concerned input name

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure
table of [orxINPUT_TYPE](../enums.md#orxinput_type)  | List of binding types \(if a slot is not bound, its value is orxINPUT_TYPE_NONE\)
table of string | List of binding IDs \(button/key/axis\)
table of [orxINPUT_MODE](../enums.md#orxinput_mode)  | List of modes \(only used for axis inputs\)

* C signature:

```c
orxSTATUS orxInput_GetBindingList(const orxSTRING _zName, orxINPUT_TYPE _aeTypeList[orxINPUT_KU32_BINDING_NUMBER], orxENUM _aeIDList[orxINPUT_KU32_BINDING_NUMBER], orxINPUT_MODE _aeModeList[orxINPUT_KU32_BINDING_NUMBER])
```

---

### **`getBindingName`**

* Signature:

```lua
r1 = getBindingName(type, id, mode)
```

* Description:

> Gets a binding name, don't keep the result as is as it'll get overridden during the next call to this function

* Params:

name | type | description 
--- | --- | ---
type | [orxINPUT_TYPE](../enums.md#orxinput_type)  | Binding type \(mouse/joystick button, keyboard key or joystick axis\)
id | string | Binding ID \(ID of button/key/axis to bind\)
mode | [orxINPUT_MODE](../enums.md#orxinput_mode)  | Mode \(only used for axis input\)

* Returns:

type | description 
--- | ---
string | string \(binding's name\) if success, empty string otherwise

* C signature:

```c
  const orxSTRING  orxInput_GetBindingName(orxINPUT_TYPE _eType, orxENUM _eID, orxINPUT_MODE _eMode)
```

---

### **`getBindingType`**

* Signature:

```lua
r1, r2, r3, r4 = getBindingType(name)
```

* Description:

> Gets a binding type and ID from its name

* Params:

name | type | description 
--- | --- | ---
name | string | Concerned input name

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success if input is valid, failure otherwise
[orxINPUT_TYPE](../enums.md#orxinput_type)  | Binding type \(mouse/joystick button, keyboard key or joystick axis\)
string | Binding ID \(ID of button/key/axis to bind\)
[orxINPUT_MODE](../enums.md#orxinput_mode)  | Binding mode \(only used for axis input\)

* C signature:

```c
  orxSTATUS  orxInput_GetBindingType(const orxSTRING _zName, orxINPUT_TYPE *_peType, orxENUM *_peID, orxINPUT_MODE *_peMode)
```

---

### **`getBoundInput`**

* Signature:

```lua
r1, r2, r3 = getBoundInput(type, id, mode, inputindex)
```

* Description:

> Gets the input name to which a mouse/joystick button, keyboard key or joystick axis is bound \(at given index\)

* Params:

name | type | description 
--- | --- | ---
type | [orxINPUT_TYPE](../enums.md#orxinput_type)  | Type of peripheral to test
id | string | ID of button/key/axis to test
mode | [orxINPUT_MODE](../enums.md#orxinput_mode)  | Mode \(only used for axis input\)
inputindex | integer | Index of the desired input

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success if binding exists / failure otherwise
string | Input name, mandatory
integer | Binding index for this input, ignored if nil

* C signature:

```c
  orxSTATUS  orxInput_GetBoundInput(orxINPUT_TYPE _eType, orxENUM _eID, orxINPUT_MODE _eMode, orxU32 _u32InputIndex, const orxSTRING *_pzName, orxU32 *_pu32BindingIndex)
```

---

### **`getBoundInputCount`**

* Signature:

```lua
r1 = getBoundInputCount(type, id, mode)
```

* Description:

> Gets the input count to which a mouse/joystick button, keyboard key or joystick axis is bound

* Params:

name | type | description 
--- | --- | ---
type | [orxINPUT_TYPE](../enums.md#orxinput_type)  | Type of peripheral to test
id | string | ID of button/key/axis to test
mode | [orxINPUT_MODE](../enums.md#orxinput_mode)  | Mode \(only used for axis input\)

* Returns:

type | description 
--- | ---
integer | Number of bound inputs

* C signature:

```c
  orxU32  orxInput_GetBoundInputCount(orxINPUT_TYPE _eType, orxENUM _eID, orxINPUT_MODE _eMode)
```

---

### **`getCurrentSet`**

* Signature:

```lua
r1 = getCurrentSet()
```

* Description:

> Gets current working set

* Params:

* Returns:

type | description 
--- | ---
string | Current selected set

* C signature:

```c
  const orxSTRING  orxInput_GetCurrentSet()
```

---

### **`getMultiplier`**

* Signature:

```lua
r1 = getMultiplier(inputname)
```

* Description:

> Gets input multiplier

* Params:

name | type | description 
--- | --- | ---
inputname | string | Concerned input name

* Returns:

type | description 
--- | ---
number | Input multiplier if found, -1.0f otherwise

* C signature:

```c
  orxFLOAT  orxInput_GetMultiplier(const orxSTRING _zInputName)
```

---

### **`getThreshold`**

* Signature:

```lua
r1 = getThreshold(inputname)
```

* Description:

> Gets input threshold

* Params:

name | type | description 
--- | --- | ---
inputname | string | Concerned input name

* Returns:

type | description 
--- | ---
number | Input threshold

* C signature:

```c
  orxFLOAT  orxInput_GetThreshold(const orxSTRING _zInputName)
```

---

### **`getValue`**

* Signature:

```lua
r1 = getValue(inputname)
```

* Description:

> Gets input value

* Params:

name | type | description 
--- | --- | ---
inputname | string | Concerned input name

* Returns:

type | description 
--- | ---
number | number

* C signature:

```c
  orxFLOAT  orxInput_GetValue(const orxSTRING _zInputName)
```

---

### **`hasBeenActivated`**

* Signature:

```lua
r1 = hasBeenActivated(inputname)
```

* Description:

> Has input been activated \(this frame\)?

* Params:

name | type | description 
--- | --- | ---
inputname | string | Concerned input name

* Returns:

type | description 
--- | ---
boolean | true if newly activated since last frame, false otherwise

* C signature:

```c
  orxBOOL  orxInput_HasBeenActivated(const orxSTRING _zInputName)
```

---

### **`hasBeenDeactivated`**

* Signature:

```lua
r1 = hasBeenDeactivated(inputname)
```

* Description:

> Has input been deactivated \(this frame\)?

* Params:

name | type | description 
--- | --- | ---
inputname | string | Concerned input name

* Returns:

type | description 
--- | ---
boolean | true if newly deactivated since last frame, false otherwise

* C signature:

```c
  orxBOOL  orxInput_HasBeenDeactivated(const orxSTRING _zInputName)
```

---

### **`hasNewStatus`**

* Signature:

```lua
r1 = hasNewStatus(inputname)
```

* Description:

> Has a new active status since this frame?

* Params:

name | type | description 
--- | --- | ---
inputname | string | Concerned input name

* Returns:

type | description 
--- | ---
boolean | true if active status is new, false otherwise

* C signature:

```c
  orxBOOL  orxInput_HasNewStatus(const orxSTRING _zInputName)
```

---

### **`init`**

* Signature:

```lua
r1 = init()
```

* Description:

> Initializes Input module

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxInput_Init()
```

---

### **`isActive`**

* Signature:

```lua
r1 = isActive(inputname)
```

* Description:

> Is input active?

* Params:

name | type | description 
--- | --- | ---
inputname | string | Concerned input name

* Returns:

type | description 
--- | ---
boolean | true if active, false otherwise

* C signature:

```c
  orxBOOL  orxInput_IsActive(const orxSTRING _zInputName)
```

---

### **`isInCombineMode`**

* Signature:

```lua
r1 = isInCombineMode(name)
```

* Description:

> Is an input in combine mode?

* Params:

name | type | description 
--- | --- | ---
name | string | Concerned input name

* Returns:

type | description 
--- | ---
boolean | true if the input is in combine mode, false otherwise

* C signature:

```c
  orxBOOL  orxInput_IsInCombineMode(const orxSTRING _zName)
```

---

### **`isSetEnabled`**

* Signature:

```lua
r1 = isSetEnabled(setname)
```

* Description:

> Is working set enabled \(includes current working set\)?

* Params:

name | type | description 
--- | --- | ---
setname | string | Set name to check

* Returns:

type | description 
--- | ---
boolean | true / false

* C signature:

```c
  orxBOOL  orxInput_IsSetEnabled(const orxSTRING _zSetName)
```

---

### **`load`**

* Signature:

```lua
r1 = load(filename)
```

* Description:

> Loads inputs from config

* Params:

name | type | description 
--- | --- | ---
filename | string | File name to load, will use current loaded config if orxSTRING_EMPTY/nil

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxInput_Load(const orxSTRING _zFileName)
```

---

### **`removeSet`**

* Signature:

```lua
r1 = removeSet(setname)
```

* Description:

> Removes a set

* Params:

name | type | description 
--- | --- | ---
setname | string | Set name to remove

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxInput_RemoveSet(const orxSTRING _zSetName)
```

---

### **`resetValue`**

* Signature:

```lua
r1 = resetValue(inputname)
```

* Description:

> Resets input value \(peripheral inputs will then be used instead of code ones\)

* Params:

name | type | description 
--- | --- | ---
inputname | string | Concerned input name

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxInput_ResetValue(const orxSTRING _zInputName)
```

---

### **`save`**

* Signature:

```lua
r1 = save(filename)
```

* Description:

> Saves inputs to config

* Params:

name | type | description 
--- | --- | ---
filename | string | File name

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxInput_Save(const orxSTRING _zFileName)
```

---

### **`selectSet`**

* Signature:

```lua
r1 = selectSet(setname)
```

* Description:

> Selects \(and enables\) current working set

* Params:

name | type | description 
--- | --- | ---
setname | string | Set name to select

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxInput_SelectSet(const orxSTRING _zSetName)
```

---

### **`setCombineMode`**

* Signature:

```lua
r1 = setCombineMode(name, combine)
```

* Description:

> Sets an input combine mode

* Params:

name | type | description 
--- | --- | ---
name | string | Concerned input name
combine | boolean | If orxTRUE, all assigned bindings need to be active in order to activate input, otherwise input will be considered active if any of its binding is

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxInput_SetCombineMode(const orxSTRING _zName, orxBOOL _bCombine)
```

---

### **`setMultiplier`**

* Signature:

```lua
r1 = setMultiplier(inputname, multiplier)
```

* Description:

> Sets input multiplier, if not set the default global multiplier will be used

* Params:

name | type | description 
--- | --- | ---
inputname | string | Concerned input name
multiplier | number | Multiplier value, can be negative

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxInput_SetMultiplier(const orxSTRING _zInputName, orxFLOAT _fMultiplier)
```

---

### **`setPermanentValue`**

* Signature:

```lua
r1 = setPermanentValue(inputname, value)
```

* Description:

> Sets permanent input value \(will prevail on peripheral inputs till reset\)

* Params:

name | type | description 
--- | --- | ---
inputname | string | Concerned input name
value | number | Value to set, orxFLOAT_0 to deactivate

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxInput_SetPermanentValue(const orxSTRING _zInputName, orxFLOAT _fValue)
```

---

### **`setThreshold`**

* Signature:

```lua
r1 = setThreshold(inputname, threshold)
```

* Description:

> Sets input threshold, if not set the default global threshold will be used

* Params:

name | type | description 
--- | --- | ---
inputname | string | Concerned input name
threshold | number | Threshold value \(between 0.0f and 1.0f\)

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxInput_SetThreshold(const orxSTRING _zInputName, orxFLOAT _fThreshold)
```

---

### **`setTypeFlags`**

* Signature:

```lua
r1 = setTypeFlags(addtypeflags, removetypeflags)
```

* Description:

> Sets current set's type flags, only set types will be polled when updating the set \(use orxINPUT_GET_FLAG\(TYPE\) in order to get the flag that matches a type\)

* Params:

name | type | description 
--- | --- | ---
addtypeflags | integer | Type flags to add
removetypeflags | integer | Type flags to remove

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxInput_SetTypeFlags(orxU32 _u32AddTypeFlags, orxU32 _u32RemoveTypeFlags)
```

---

### **`setValue`**

* Signature:

```lua
r1 = setValue(inputname, value)
```

* Description:

> Sets input value \(will prevail on peripheral inputs only once\)

* Params:

name | type | description 
--- | --- | ---
inputname | string | Concerned input name
value | number | Value to set, orxFLOAT_0 to deactivate

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxInput_SetValue(const orxSTRING _zInputName, orxFLOAT _fValue)
```

---

### **`setup`**

* Signature:

```lua
setup()
```

* Description:

> Input module setup

* Params:

* Returns:

* C signature:

```c
  void  orxInput_Setup()
```

---

### **`unbind`**

* Signature:

```lua
r1 = unbind(name, bindingindex)
```

* Description:

> Unbinds an input

* Params:

name | type | description 
--- | --- | ---
name | string | Concerned input name
bindingindex | integer | Index of the desired binding, if < 0 all the bindings will be removed

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxInput_Unbind(const orxSTRING _zName, orxS32 _s32BindingIndex)
```

---

