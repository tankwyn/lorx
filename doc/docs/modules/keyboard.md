# module keyboard

## functions

### **`clearBuffer`**

* Signature:

```lua
clearBuffer()
```

* Description:

> Empties the keyboard buffer \(both keys and chars\)

* Params:

* Returns:

* C signature:

```c
  void  orxKeyboard_ClearBuffer()
```

---

### **`exit`**

* Signature:

```lua
exit()
```

* Description:

> Exits from the keyboard module

* Params:

* Returns:

* C signature:

```c
  void  orxKeyboard_Exit()
```

---

### **`getKeyDisplayName`**

* Signature:

```lua
r1 = getKeyDisplayName(key)
```

* Description:

> Gets key display name, layout-dependent

* Params:

name | type | description 
--- | --- | ---
key | [orxKEYBOARD_KEY](../enums.md#orxkeyboard_key)  | Concerned key

* Returns:

type | description 
--- | ---
string | UTF-8 encoded key's name if valid, empty string otherwise

* C signature:

```c
  const orxSTRING  orxKeyboard_GetKeyDisplayName(orxKEYBOARD_KEY _eKey)
```

---

### **`getKeyName`**

* Signature:

```lua
r1 = getKeyName(key)
```

* Description:

> Gets key literal name

* Params:

name | type | description 
--- | --- | ---
key | [orxKEYBOARD_KEY](../enums.md#orxkeyboard_key)  | Concerned key

* Returns:

type | description 
--- | ---
string | Key's name

* C signature:

```c
  const orxSTRING  orxKeyboard_GetKeyName(orxKEYBOARD_KEY _eKey)
```

---

### **`init`**

* Signature:

```lua
r1 = init()
```

* Description:

> Inits the keyboard module

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | 

* C signature:

```c
  orxSTATUS  orxKeyboard_Init()
```

---

### **`isKeyPressed`**

* Signature:

```lua
r1 = isKeyPressed(key)
```

* Description:

> Is key pressed?

* Params:

name | type | description 
--- | --- | ---
key | [orxKEYBOARD_KEY](../enums.md#orxkeyboard_key)  | Key to check

* Returns:

type | description 
--- | ---
boolean | true if pressed / false otherwise

* C signature:

```c
  orxBOOL  orxKeyboard_IsKeyPressed(orxKEYBOARD_KEY _eKey)
```

---

### **`readKey`**

* Signature:

```lua
r1 = readKey()
```

* Description:

> Gets the next key from the keyboard buffer and removes it from there

* Params:

* Returns:

type | description 
--- | ---
[orxKEYBOARD_KEY](../enums.md#orxkeyboard_key)  | orxKEYBOARD_KEY, orxKEYBOARD_KEY_NONE if the buffer is empty

* C signature:

```c
  orxKEYBOARD_KEY  orxKeyboard_ReadKey()
```

---

### **`readString`**

* Signature:

```lua
r1 = readString()
```

* Description:

> Gets the next UTF-8 encoded string from the keyboard buffer and removes it from there

* Params:

* Returns:

type | description 
--- | ---
string | UTF-8 encoded string

* C signature:

```c
  const orxSTRING  orxKeyboard_ReadString()
```

---

### **`setup`**

* Signature:

```lua
setup()
```

* Description:

> Keyboard module setup

* Params:

* Returns:

* C signature:

```c
  void  orxKeyboard_Setup()
```

---

### **`show`**

* Signature:

```lua
r1 = show(show)
```

* Description:

> Show/Hide the virtual keyboard

* Params:

name | type | description 
--- | --- | ---
show | boolean | Show/hide virtual keyboard

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success if supported by platform, failure otherwise

* C signature:

```c
  orxSTATUS  orxKeyboard_Show(orxBOOL _bShow)
```

---

