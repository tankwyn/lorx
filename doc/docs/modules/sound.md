# module sound

## functions

### **`addBusFilter`**

* Signature:

```lua
r1 = addBusFilter(busid, filterdata, usecustomparam)
```

* Description:

> Adds a filter to a bus \(cascading\)

* Params:

name | type | description 
--- | --- | ---
busid | integer | Concerned bus ID
filterdata | [orxSOUND_FILTER_DATA\#](../types/orxSOUND_FILTER_DATA.md) | Concerned filter data
usecustomparam | boolean | Filter uses custom parameters

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxSound_AddBusFilter(orxSTRINGID _stBusID, const orxSOUND_FILTER_DATA *_pstFilterData, orxBOOL _bUseCustomParam)
```

---

### **`addBusFilterFromConfig`**

* Signature:

```lua
r1 = addBusFilterFromConfig(busid, filterconfigid)
```

* Description:

> Adds a filter to a bus \(cascading\) from config

* Params:

name | type | description 
--- | --- | ---
busid | integer | Concerned bus ID
filterconfigid | string | Config ID of the filter to add

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxSound_AddBusFilterFromConfig(orxSTRINGID _stBusID, const orxSTRING _zFilterConfigID)
```

---

### **`clearCache`**

* Signature:

```lua
r1 = clearCache()
```

* Description:

> Clears cache \(if any sound sample is still in active use, it'll remain in memory until not referenced anymore\)

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxSound_ClearCache()
```

---

### **`create`**

* Signature:

```lua
r1 = create()
```

* Description:

> Creates an empty sound

* Params:

* Returns:

type | description 
--- | ---
[orxSOUND](../types/orxSOUND.md)  | Created [orxSOUND](../types/orxSOUND.md) / nil

* C signature:

```c
  orxSOUND * orxSound_Create()
```

---

### **`createFromConfig`**

* Signature:

```lua
r1 = createFromConfig(configid)
```

* Description:

> Creates sound from config

* Params:

name | type | description 
--- | --- | ---
configid | string | Config ID

* Returns:

type | description 
--- | ---
[orxSOUND](../types/orxSOUND.md)  | [orxSOUND](../types/orxSOUND.md) / nil

* C signature:

```c
  orxSOUND * orxSound_CreateFromConfig(const orxSTRING _zConfigID)
```

---

### **`createSample`**

* Signature:

```lua
r1 = createSample(channelnumber, framenumber, samplerate, name)
```

* Description:

> Creates a sample

* Params:

name | type | description 
--- | --- | ---
channelnumber | integer | Number of channels of the sample
framenumber | integer | Number of frame of the sample \(number of "samples" = number of frames \* number of channels\)
samplerate | integer | Sampling rate of the sample \(ie. number of frames per second\)
name | string | Name to associate with the sample

* Returns:

type | description 
--- | ---
[orxSOUNDSYSTEM_SAMPLE](../types/orxSOUNDSYSTEM_SAMPLE.md)  | [orxSOUNDSYSTEM_SAMPLE](../types/orxSOUNDSYSTEM_SAMPLE.md) / nil

* C signature:

```c
  orxSOUNDSYSTEM_SAMPLE * orxSound_CreateSample(orxU32 _u32ChannelNumber, orxU32 _u32FrameNumber, orxU32 _u32SampleRate, const orxSTRING _zName)
```

---

### **`createWithEmptyStream`**

* Signature:

```lua
r1 = createWithEmptyStream(channelnumber, samplerate, name)
```

* Description:

> Creates a sound with an empty stream \(ie. you'll need to provide actual sound data for each packet sent to the sound card using the event system\)

* Params:

name | type | description 
--- | --- | ---
channelnumber | integer | Number of channels of the stream
samplerate | integer | Sampling rate of the stream \(ie. number of frames per second\)
name | string | Name to associate with this sound

* Returns:

type | description 
--- | ---
[orxSOUND](../types/orxSOUND.md)  | [orxSOUND](../types/orxSOUND.md) / nil

* C signature:

```c
  orxSOUND * orxSound_CreateWithEmptyStream(orxU32 _u32ChannelNumber, orxU32 _u32SampleRate, const orxSTRING _zName)
```

---

### **`deleteSample`**

* Signature:

```lua
r1 = deleteSample(name)
```

* Description:

> Deletes a sample

* Params:

name | type | description 
--- | --- | ---
name | string | Sample's name

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxSound_DeleteSample(const orxSTRING _zName)
```

---

### **`exit`**

* Signature:

```lua
exit()
```

* Description:

> Exits from the sound module

* Params:

* Returns:

* C signature:

```c
  void  orxSound_Exit()
```

---

### **`filterDataBandPass`**

* Signature:

```lua
r1 = filterDataBandPass(nameid, frequency, order)
```

* Description:

> Create a [orxSOUND_FILTER_DATA](../types/orxSOUND_FILTER_DATA.md) of band pass type

* Params:

name | type | description 
--- | --- | ---
nameid | integer | 
frequency | number | 
order | integer | 

* Returns:

type | description 
--- | ---
[orxSOUND_FILTER_DATA](../types/orxSOUND_FILTER_DATA.md)  | The new instance

---

### **`filterDataBiquad`**

* Signature:

```lua
r1 = filterDataBiquad(nameid, a0, a1, a2, b0, b1, b2)
```

* Description:

> Create a [orxSOUND_FILTER_DATA](../types/orxSOUND_FILTER_DATA.md) of biquad type

* Params:

name | type | description 
--- | --- | ---
nameid | integer | 
a0 | number | 
a1 | number | 
a2 | number | 
b0 | number | 
b1 | number | 
b2 | number | 

* Returns:

type | description 
--- | ---
[orxSOUND_FILTER_DATA](../types/orxSOUND_FILTER_DATA.md)  | The new instance

---

### **`filterDataDelay`**

* Signature:

```lua
r1 = filterDataDelay(nameid, delay, decay)
```

* Description:

> Create a [orxSOUND_FILTER_DATA](../types/orxSOUND_FILTER_DATA.md) of delay type

* Params:

name | type | description 
--- | --- | ---
nameid | integer | 
delay | number | 
decay | number | 

* Returns:

type | description 
--- | ---
[orxSOUND_FILTER_DATA](../types/orxSOUND_FILTER_DATA.md)  | The new instance

---

### **`filterDataHighPass`**

* Signature:

```lua
r1 = filterDataHighPass(nameid, frequency, order)
```

* Description:

> Create a [orxSOUND_FILTER_DATA](../types/orxSOUND_FILTER_DATA.md) of high pass type

* Params:

name | type | description 
--- | --- | ---
nameid | integer | 
frequency | number | 
order | integer | 

* Returns:

type | description 
--- | ---
[orxSOUND_FILTER_DATA](../types/orxSOUND_FILTER_DATA.md)  | The new instance

---

### **`filterDataHighShelf`**

* Signature:

```lua
r1 = filterDataHighShelf(nameid, frequency, q, gain)
```

* Description:

> Create a [orxSOUND_FILTER_DATA](../types/orxSOUND_FILTER_DATA.md) of low shelf type

* Params:

name | type | description 
--- | --- | ---
nameid | integer | 
frequency | number | 
q | number | 
gain | number | 

* Returns:

type | description 
--- | ---
[orxSOUND_FILTER_DATA](../types/orxSOUND_FILTER_DATA.md)  | The new instance

---

### **`filterDataLowPass`**

* Signature:

```lua
r1 = filterDataLowPass(nameid, frequency, order)
```

* Description:

> Create a [orxSOUND_FILTER_DATA](../types/orxSOUND_FILTER_DATA.md) of low pass type

* Params:

name | type | description 
--- | --- | ---
nameid | integer | 
frequency | number | 
order | integer | 

* Returns:

type | description 
--- | ---
[orxSOUND_FILTER_DATA](../types/orxSOUND_FILTER_DATA.md)  | The new instance

---

### **`filterDataLowShelf`**

* Signature:

```lua
r1 = filterDataLowShelf(nameid, frequency, q, gain)
```

* Description:

> Create a [orxSOUND_FILTER_DATA](../types/orxSOUND_FILTER_DATA.md) of low shelf type

* Params:

name | type | description 
--- | --- | ---
nameid | integer | 
frequency | number | 
q | number | 
gain | number | 

* Returns:

type | description 
--- | ---
[orxSOUND_FILTER_DATA](../types/orxSOUND_FILTER_DATA.md)  | The new instance

---

### **`filterDataNotch`**

* Signature:

```lua
r1 = filterDataNotch(nameid, frequency, q)
```

* Description:

> Create a [orxSOUND_FILTER_DATA](../types/orxSOUND_FILTER_DATA.md) of notch type

* Params:

name | type | description 
--- | --- | ---
nameid | integer | 
frequency | number | 
q | number | 

* Returns:

type | description 
--- | ---
[orxSOUND_FILTER_DATA](../types/orxSOUND_FILTER_DATA.md)  | The new instance

---

### **`filterDataPeaking`**

* Signature:

```lua
r1 = filterDataPeaking(nameid, frequency, q, gain)
```

* Description:

> Create a [orxSOUND_FILTER_DATA](../types/orxSOUND_FILTER_DATA.md) of peaking type

* Params:

name | type | description 
--- | --- | ---
nameid | integer | 
frequency | number | 
q | number | 
gain | number | 

* Returns:

type | description 
--- | ---
[orxSOUND_FILTER_DATA](../types/orxSOUND_FILTER_DATA.md)  | The new instance

---

### **`getBusChild`**

* Signature:

```lua
r1 = getBusChild(busid)
```

* Description:

> Gets bus child

* Params:

name | type | description 
--- | --- | ---
busid | integer | Concerned bus ID

* Returns:

type | description 
--- | ---
integer | Child bus ID / [orxSTRINGID_UNDEFINED](./constants.md#orxstringid_undefined) 

* C signature:

```c
  orxSTRINGID  orxSound_GetBusChild(orxSTRINGID _stBusID)
```

---

### **`getBusGlobalPitch`**

* Signature:

```lua
r1 = getBusGlobalPitch(busid)
```

* Description:

> Gets bus global pitch, ie. taking into account the whole bus hierarchy

* Params:

name | type | description 
--- | --- | ---
busid | integer | Concerned bus ID

* Returns:

type | description 
--- | ---
number | number

* C signature:

```c
  orxFLOAT  orxSound_GetBusGlobalPitch(orxSTRINGID _stBusID)
```

---

### **`getBusGlobalVolume`**

* Signature:

```lua
r1 = getBusGlobalVolume(busid)
```

* Description:

> Gets bus global volume, ie. taking into account the whole bus hierarchy

* Params:

name | type | description 
--- | --- | ---
busid | integer | Concerned bus ID

* Returns:

type | description 
--- | ---
number | number

* C signature:

```c
  orxFLOAT  orxSound_GetBusGlobalVolume(orxSTRINGID _stBusID)
```

---

### **`getBusParent`**

* Signature:

```lua
r1 = getBusParent(busid)
```

* Description:

> Gets bus parent

* Params:

name | type | description 
--- | --- | ---
busid | integer | Concerned bus ID

* Returns:

type | description 
--- | ---
integer | Parent bus ID / [orxSTRINGID_UNDEFINED](./constants.md#orxstringid_undefined) 

* C signature:

```c
  orxSTRINGID  orxSound_GetBusParent(orxSTRINGID _stBusID)
```

---

### **`getBusPitch`**

* Signature:

```lua
r1 = getBusPitch(busid)
```

* Description:

> Gets bus pitch \(local, ie. unaffected by the whole bus hierarchy\)

* Params:

name | type | description 
--- | --- | ---
busid | integer | Concerned bus ID

* Returns:

type | description 
--- | ---
number | number

* C signature:

```c
  orxFLOAT  orxSound_GetBusPitch(orxSTRINGID _stBusID)
```

---

### **`getBusSibling`**

* Signature:

```lua
r1 = getBusSibling(busid)
```

* Description:

> Gets bus sibling

* Params:

name | type | description 
--- | --- | ---
busid | integer | Concerned bus ID

* Returns:

type | description 
--- | ---
integer | Sibling bus ID / [orxSTRINGID_UNDEFINED](./constants.md#orxstringid_undefined) 

* C signature:

```c
  orxSTRINGID  orxSound_GetBusSibling(orxSTRINGID _stBusID)
```

---

### **`getBusVolume`**

* Signature:

```lua
r1 = getBusVolume(busid)
```

* Description:

> Gets bus volume \(local, ie. unaffected by the whole bus hierarchy\)

* Params:

name | type | description 
--- | --- | ---
busid | integer | Concerned bus ID

* Returns:

type | description 
--- | ---
number | number

* C signature:

```c
  orxFLOAT  orxSound_GetBusVolume(orxSTRINGID _stBusID)
```

---

### **`getMasterBusID`**

* Signature:

```lua
r1 = getMasterBusID()
```

* Description:

> Gets master bus ID

* Params:

* Returns:

type | description 
--- | ---
integer | Master bus ID

* C signature:

```c
  orxSTRINGID  orxSound_GetMasterBusID()
```

---

### **`getNext`**

* Signature:

```lua
r1 = getNext(sound, busid)
```

* Description:

> Gets next sound in bus

* Params:

name | type | description 
--- | --- | ---
sound | [orxSOUND\#](../types/orxSOUND.md) | Concerned sound, nil to get the first one
busid | integer | Bus ID to consider, [orxSTRINGID_UNDEFINED](./constants.md#orxstringid_undefined) for all

* Returns:

type | description 
--- | ---
[orxSOUND](../types/orxSOUND.md)  | [orxSOUND](../types/orxSOUND.md) / nil

* C signature:

```c
  orxSOUND * orxSound_GetNext(const orxSOUND *_pstSound, orxSTRINGID _stBusID)
```

---

### **`getSample`**

* Signature:

```lua
r1 = getSample(name)
```

* Description:

> Gets a sample

* Params:

name | type | description 
--- | --- | ---
name | string | Sample's name

* Returns:

type | description 
--- | ---
[orxSOUNDSYSTEM_SAMPLE](../types/orxSOUNDSYSTEM_SAMPLE.md)  | success / failure

* C signature:

```c
  orxSOUNDSYSTEM_SAMPLE * orxSound_GetSample(const orxSTRING _zName)
```

---

### **`hasRecordingSupport`**

* Signature:

```lua
r1 = hasRecordingSupport()
```

* Description:

> Is recording possible on the current system?

* Params:

* Returns:

type | description 
--- | ---
boolean | true / false

* C signature:

```c
  orxBOOL  orxSound_HasRecordingSupport()
```

---

### **`init`**

* Signature:

```lua
r1 = init()
```

* Description:

> Initializes the sound module

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxSound_Init()
```

---

### **`removeAllBusFilters`**

* Signature:

```lua
r1 = removeAllBusFilters(busid)
```

* Description:

> Removes all filters from a bus

* Params:

name | type | description 
--- | --- | ---
busid | integer | Concerned bus ID

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxSound_RemoveAllBusFilters(orxSTRINGID _stBusID)
```

---

### **`removeLastBusFilter`**

* Signature:

```lua
r1 = removeLastBusFilter(busid)
```

* Description:

> Removes last added filter from a bus

* Params:

name | type | description 
--- | --- | ---
busid | integer | Concerned bus ID

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxSound_RemoveLastBusFilter(orxSTRINGID _stBusID)
```

---

### **`setBusParent`**

* Signature:

```lua
r1 = setBusParent(busid, parentbusid)
```

* Description:

> Sets a bus parent

* Params:

name | type | description 
--- | --- | ---
busid | integer | Concerned bus ID, will create it if not already existing
parentbusid | integer | ID of the bus to use as parent, will create it if not already existing

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxSound_SetBusParent(orxSTRINGID _stBusID, orxSTRINGID _stParentBusID)
```

---

### **`setBusPitch`**

* Signature:

```lua
r1 = setBusPitch(busid, pitch)
```

* Description:

> Sets bus pitch

* Params:

name | type | description 
--- | --- | ---
busid | integer | Concerned bus ID, will create it if not already existing
pitch | number | Desired pitch

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxSound_SetBusPitch(orxSTRINGID _stBusID, orxFLOAT _fPitch)
```

---

### **`setBusVolume`**

* Signature:

```lua
r1 = setBusVolume(busid, volume)
```

* Description:

> Sets bus volume

* Params:

name | type | description 
--- | --- | ---
busid | integer | Concerned bus ID, will create it if not already existing
volume | number | Desired volume \(0.0 - 1.0\)

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxSound_SetBusVolume(orxSTRINGID _stBusID, orxFLOAT _fVolume)
```

---

### **`setup`**

* Signature:

```lua
setup()
```

* Description:

> Sound module setup

* Params:

* Returns:

* C signature:

```c
  void  orxSound_Setup()
```

---

### **`startRecording`**

* Signature:

```lua
r1 = startRecording(name, writetofile, samplerate, channelnumber)
```

* Description:

> Starts recording

* Params:

name | type | description 
--- | --- | ---
name | string | Name for the recorded sound/file
writetofile | boolean | Should write to file?
samplerate | integer | Sample rate, 0 for default rate \(48000Hz\)
channelnumber | integer | Channel number, 0 for default mono channel

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxSound_StartRecording(const orxCHAR *_zName, orxBOOL _bWriteToFile, orxU32 _u32SampleRate, orxU32 _u32ChannelNumber)
```

---

### **`stopRecording`**

* Signature:

```lua
r1 = stopRecording()
```

* Description:

> Stops recording

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxSound_StopRecording()
```

---

