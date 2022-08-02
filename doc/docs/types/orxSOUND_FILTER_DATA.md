# type orxSOUND_FILTER_DATA

> not all the properties are available at the same time, refer to the constructors to find out about that

constructors:

* [lorx.sound.filterDataBiquad](../modules/sound.md#filterdatabiquad)
* [lorx.sound.filterDataLowPass](../modules/sound.md#filterdatalowpass)
* [lorx.sound.filterDataHighPass](../modules/sound.md#filterdatahighpass)
* [lorx.sound.filterDataLowShelf](../modules/sound.md#filterdatalowshelf)
* [lorx.sound.filterDataHighShelf](../modules/sound.md#filterdatahighshelf)
* [lorx.sound.filterDataNotch](../modules/sound.md#filterdatanotch)
* [lorx.sound.filterDataPeaking](../modules/sound.md#filterdatapeaking)
* [lorx.sound.filterDataDelay](../modules/sound.md#filterdatadelay)

## Properties

name | type 
--- | --- 
type | [orxSOUND_FILTER_TYPE](../enums.md#orxsound_filter_type) 
nameid | integer
a0 | number
a1 | number
a2 | number
b0 | number
b1 | number
b2 | number
frequency | number
order | integer
q | number
gain | number
delay | number
decay | number

## Methods

### **`orxSOUND_FILTER_DATA:addr`**

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

### **`orxSOUND_FILTER_DATA:aeq`**

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

### **`orxSOUND_FILTER_DATA:asVoid`**

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

### **`orxSOUND_FILTER_DATA:type`**

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

