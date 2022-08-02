# type orxSOUNDSYSTEM_SAMPLE

> 

## Methods

### **`orxSOUNDSYSTEM_SAMPLE:addr`**

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

### **`orxSOUNDSYSTEM_SAMPLE:aeq`**

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

### **`orxSOUNDSYSTEM_SAMPLE:asVoid`**

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

### **`orxSOUNDSYSTEM_SAMPLE:delete`**

* Signature:

```lua
r1 = delete()
```

* Description:

> Deletes a sound sample (non-const self only)

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxSoundSystem_DeleteSample(orxSOUNDSYSTEM_SAMPLE *_pstSample)
```

---

### **`orxSOUNDSYSTEM_SAMPLE:getInfo`**

* Signature:

```lua
r1, r2, r3, r4 = getInfo()
```

* Description:

> Gets sample info

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure
integer | Number of channels of the sample
integer | Number of frame of the sample \(number of "samples" = number of frames \* number of channels\)
integer | Sampling rate of the sample \(ie. number of frames per second\)

* C signature:

```c
  orxSTATUS  orxSoundSystem_GetSampleInfo(const orxSOUNDSYSTEM_SAMPLE *_pstSample, orxU32 *_pu32ChannelNumber, orxU32 *_pu32FrameNumber, orxU32 *_pu32SampleRate)
```

---

### **`orxSOUNDSYSTEM_SAMPLE:setData`**

* Signature:

```lua
r1 = setData(data, samplenumber)
```

* Description:

> Sets sample data (non-const self only)

* Params:

name | type | description 
--- | --- | ---
data | table of number | Data to set (samples are expected to be signed/normalized)
samplenumber | integer | Number of samples in the data array

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxSoundSystem_SetSampleData(orxSOUNDSYSTEM_SAMPLE *_pstSample, const orxFLOAT *_afData, orxU32 _u32SampleNumber)
```

---

### **`orxSOUNDSYSTEM_SAMPLE:type`**

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

