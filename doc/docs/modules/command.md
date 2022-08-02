# module command

## functions

### **`addAlias`**

* Signature:

```lua
r1 = addAlias(alias, command, args)
```

* Description:

> Adds a command alias

* Params:

name | type | description 
--- | --- | ---
alias | string | Command alias
command | string | Command name
args | string | Command argument, nil for none

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxCommand_AddAlias(const orxSTRING _zAlias, const orxSTRING _zCommand, const orxSTRING _zArgs)
```

---

### **`commandVar`**

* Signature:

```lua
r1 = commandVar()
```

* Description:

> Create a new [orxCOMMAND_VAR](../types/orxCOMMAND_VAR.md) 

* Params:

* Returns:

type | description 
--- | ---
[orxCOMMAND_VAR](../types/orxCOMMAND_VAR.md)  | The new instance

---

### **`evaluate`**

* Signature:

```lua
r1 = evaluate(commandline)
```

* Description:

> Evaluates a command

* Params:

name | type | description 
--- | --- | ---
commandline | string | Command name + arguments

* Returns:

type | description 
--- | ---
[orxCOMMAND_VAR](../types/orxCOMMAND_VAR.md)  | Command result if found, nil otherwise

* C signature:

```c
  orxCOMMAND_VAR * orxCommand_Evaluate(const orxSTRING _zCommandLine, orxCOMMAND_VAR *_pstResult)
```

---

### **`evaluateWithGUID`**

* Signature:

```lua
r1 = evaluateWithGUID(commandline, guid)
```

* Description:

> Evaluates a command with a specific GUID

* Params:

name | type | description 
--- | --- | ---
commandline | string | Command name + arguments
guid | integer | GUID to use in place of the GUID markers in the command

* Returns:

type | description 
--- | ---
[orxCOMMAND_VAR](../types/orxCOMMAND_VAR.md)  | Command result if found, nil otherwise

* C signature:

```c
  orxCOMMAND_VAR * orxCommand_EvaluateWithGUID(const orxSTRING _zCommandLine, orxU64 _u64GUID, orxCOMMAND_VAR *_pstResult)
```

---

### **`execute`**

* Signature:

```lua
r1 = execute(command, argnumber, arglist)
```

* Description:

> Executes a command

* Params:

name | type | description 
--- | --- | ---
command | string | Command name
argnumber | integer | Number of arguments sent to the command
arglist | table of [orxCOMMAND_VAR](../types/orxCOMMAND_VAR.md)  | List of arguments sent to the command

* Returns:

type | description 
--- | ---
[orxCOMMAND_VAR](../types/orxCOMMAND_VAR.md)  | Command result if found, nil otherwise

* C signature:

```c
  orxCOMMAND_VAR * orxCommand_Execute(const orxSTRING _zCommand, orxU32 _u32ArgNumber, const orxCOMMAND_VAR *_astArgList, orxCOMMAND_VAR *_pstResult)
```

---

### **`exit`**

* Signature:

```lua
exit()
```

* Description:

> Exits from the command module

* Params:

* Returns:

* C signature:

```c
  void  orxCommand_Exit()
```

---

### **`getNext`**

* Signature:

```lua
r1, r2 = getNext(base, previous)
```

* Description:

> Gets next command using an optional base

* Params:

name | type | description 
--- | --- | ---
base | string | Base name, can be set to nil for no base
previous | string | Previous command, nil to get the first command

* Returns:

type | description 
--- | ---
string | Next command found, nil if none
integer | Length of the common prefix of all potential results, nil to ignore

* C signature:

```c
  const orxSTRING  orxCommand_GetNext(const orxSTRING _zBase, const orxSTRING _zPrevious, orxU32 *_pu32CommonLength)
```

---

### **`getPrototype`**

* Signature:

```lua
r1 = getPrototype(command)
```

* Description:

> Gets a command's \(text\) prototype \(beware: result won't persist from one call to the other\)

* Params:

name | type | description 
--- | --- | ---
command | string | Command name

* Returns:

type | description 
--- | ---
string | Command prototype / empty string

* C signature:

```c
  const orxSTRING  orxCommand_GetPrototype(const orxSTRING _zCommand)
```

---

### **`init`**

* Signature:

```lua
r1 = init()
```

* Description:

> Inits the command module

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxCommand_Init()
```

---

### **`isAlias`**

* Signature:

```lua
r1 = isAlias(alias)
```

* Description:

> Is a command alias?

* Params:

name | type | description 
--- | --- | ---
alias | string | Command alias

* Returns:

type | description 
--- | ---
boolean | true / false

* C signature:

```c
  orxBOOL  orxCommand_IsAlias(const orxSTRING _zAlias)
```

---

### **`isRegistered`**

* Signature:

```lua
r1 = isRegistered(command)
```

* Description:

> Is a command registered?

* Params:

name | type | description 
--- | --- | ---
command | string | Command name

* Returns:

type | description 
--- | ---
boolean | true / false

* C signature:

```c
  orxBOOL  orxCommand_IsRegistered(const orxSTRING _zCommand)
```

---

### **`parseNumericalArguments`**

* Signature:

```lua
r1, r2 = parseNumericalArguments(argnumber, arglist)
```

* Description:

> Parses numerical arguments, string arguments will be evaluated to vectors or float when possible

* Params:

name | type | description 
--- | --- | ---
argnumber | integer | Number of arguments to parse
arglist | table of [orxCOMMAND_VAR](../types/orxCOMMAND_VAR.md)  | List of arguments to parse

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success if all numerical arguments have been correctly interpreted, failure otherwise
table of [orxCOMMAND_VAR](../types/orxCOMMAND_VAR.md)  | List of parsed arguments

* C signature:

```c
  orxSTATUS  orxCommand_ParseNumericalArguments(orxU32 _u32ArgNumber, const orxCOMMAND_VAR *_astArgList, orxCOMMAND_VAR *_astOperandList)
```

---

### **`removeAlias`**

* Signature:

```lua
r1 = removeAlias(alias)
```

* Description:

> Removes a command alias

* Params:

name | type | description 
--- | --- | ---
alias | string | Command alias

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxCommand_RemoveAlias(const orxSTRING _zAlias)
```

---

### **`sComment`**

* Signature:

```lua
r1 = sComment(name, description, ret, ...)
```

* Description:

> Comment on a Lorx sub-command

* Params:

name | type | description 
--- | --- | ---
name | string | Sub-command name
description | string | description
ret | string | Returning name
... | string | arg name, must be specified multiple times to match with the number of args

* Returns:

type | description 
--- | ---
boolean | false if the sub-command is not yet registered

---

### **`sIsRegistered`**

* Signature:

```lua
r1 = sIsRegistered(name)
```

* Description:

> Query if a Lorx sub-command is registered or not

* Params:

name | type | description 
--- | --- | ---
name | string | Sub-command name

* Returns:

type | description 
--- | ---
boolean | true or false

---

### **`sRegister`**

* Signature:

```lua
r1 = sRegister(func, name, rtype, reqargs, optargs, ...)
```

* Description:

> Register a Lorx sub-command

* Params:

name | type | description 
--- | --- | ---
func | function | command function, just like any common lua functions, but conforms to registering prototype
name | string | Sub-command name
rtype | [orxCOMMAND_VAR_TYPE](../enums.md#orxcommand_var_type)  | returning type
reqargs | integer | number of required args
optargs | integer | number of optional args
... | [orxCOMMAND_VAR_TYPE](../enums.md#orxcommand_var_type)  | arg type, must be specified multiple times to match with `reqargs + optargs`

* Returns:

type | description 
--- | ---
boolean | true on success, false on failure \(e.g. if a sub-command with the specified name has already been registered\)

---

### **`sUnregister`**

* Signature:

```lua
r1 = sUnregister(name)
```

* Description:

> Unregister a Lorx sub-command

* Params:

name | type | description 
--- | --- | ---
name | string | Sub-command name

* Returns:

type | description 
--- | ---
boolean | true on success, false on failure \(e.g. if the sub-command is not yet registered\)

---

### **`setup`**

* Signature:

```lua
setup()
```

* Description:

> Command module setup

* Params:

* Returns:

* C signature:

```c
  void  orxCommand_Setup()
```

---

### **`unregister`**

* Signature:

```lua
r1 = unregister(command)
```

* Description:

> Unregisters a command

* Params:

name | type | description 
--- | --- | ---
command | string | Command name

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxCommand_Unregister(const orxSTRING _zCommand)
```

---

