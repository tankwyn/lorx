# module soundsystem

## functions

### **`addBusFilter`**

* Signature:

```lua
r1 = addBusFilter(bus, filterdata, usecustomparam)
```

* Description:

> Adds a filter to a bus \(cascading\)

* Params:

name | type | description 
--- | --- | ---
bus | orxHANDLE | Concerned bus
filterdata | [orxSOUND_FILTER_DATA\#](../types/orxSOUND_FILTER_DATA.md) | Concerned filter data
usecustomparam | boolean | Filter uses custom parameters

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxSoundSystem_AddBusFilter(orxHANDLE _hBus, const orxSOUND_FILTER_DATA *_pstFilterData, orxBOOL _bUseCustomParam)
```

---

### **`createBus`**

* Signature:

```lua
r1 = createBus(busid)
```

* Description:

> Creates a bus

* Params:

name | type | description 
--- | --- | ---
busid | integer | Concerned bus ID

* Returns:

type | description 
--- | ---
orxHANDLE | orxHANDLE / [orxHANDLE_UNDEFINED](./constants.md#orxhandle_undefined) 

* C signature:

```c
  orxHANDLE  orxSoundSystem_CreateBus(orxSTRINGID _stBusID)
```

---

### **`createFromSample`**

* Signature:

```lua
r1 = createFromSample(userdata, sample)
```

* Description:

> Creates a sound from preloaded sample \(can be played directly\)

* Params:

name | type | description 
--- | --- | ---
userdata | orxHANDLE | User data to associate with this sound
sample | [orxSOUNDSYSTEM_SAMPLE\#](../types/orxSOUNDSYSTEM_SAMPLE.md) | Concerned sample

* Returns:

type | description 
--- | ---
[orxSOUNDSYSTEM_SOUND](../types/orxSOUNDSYSTEM_SOUND.md)  | [orxSOUNDSYSTEM_SOUND](../types/orxSOUNDSYSTEM_SOUND.md) / nil

* C signature:

```c
  orxSOUNDSYSTEM_SOUND * orxSoundSystem_CreateFromSample(orxHANDLE _hUserData, const orxSOUNDSYSTEM_SAMPLE *_pstSample)
```

---

### **`createSample`**

* Signature:

```lua
r1 = createSample(channelnumber, framenumber, samplerate)
```

* Description:

> Creates an empty sample

* Params:

name | type | description 
--- | --- | ---
channelnumber | integer | Number of channels of the sample
framenumber | integer | Number of frame of the sample \(number of "samples" = number of frames \* number of channels\)
samplerate | integer | Sampling rate of the sample \(ie. number of frames per second\)

* Returns:

type | description 
--- | ---
[orxSOUNDSYSTEM_SAMPLE](../types/orxSOUNDSYSTEM_SAMPLE.md)  | [orxSOUNDSYSTEM_SAMPLE](../types/orxSOUNDSYSTEM_SAMPLE.md) / nil

* C signature:

```c
  orxSOUNDSYSTEM_SAMPLE * orxSoundSystem_CreateSample(orxU32 _u32ChannelNumber, orxU32 _u32FrameNumber, orxU32 _u32SampleRate)
```

---

### **`createStream`**

* Signature:

```lua
r1 = createStream(userdata, channelnumber, samplerate)
```

* Description:

> Creates an empty stream

* Params:

name | type | description 
--- | --- | ---
userdata | orxHANDLE | User data to associate with this sound
channelnumber | integer | Number of channels for the stream
samplerate | integer | Sampling rate of the stream \(ie. number of frames per second\)

* Returns:

type | description 
--- | ---
[orxSOUNDSYSTEM_SOUND](../types/orxSOUNDSYSTEM_SOUND.md)  | [orxSOUNDSYSTEM_SOUND](../types/orxSOUNDSYSTEM_SOUND.md) / nil

* C signature:

```c
  orxSOUNDSYSTEM_SOUND * orxSoundSystem_CreateStream(orxHANDLE _hUserData, orxU32 _u32ChannelNumber, orxU32 _u32SampleRate)
```

---

### **`createStreamFromFile`**

* Signature:

```lua
r1 = createStreamFromFile(userdata, filename)
```

* Description:

> Creates a streamed sound from file \(can be played directly\)

* Params:

name | type | description 
--- | --- | ---
userdata | orxHANDLE | User data to associate with this sound
filename | string | Name of the file to load as a stream \(won't be completely loaded in memory, useful for musics\)

* Returns:

type | description 
--- | ---
[orxSOUNDSYSTEM_SOUND](../types/orxSOUNDSYSTEM_SOUND.md)  | [orxSOUNDSYSTEM_SOUND](../types/orxSOUNDSYSTEM_SOUND.md) / nil

* C signature:

```c
  orxSOUNDSYSTEM_SOUND * orxSoundSystem_CreateStreamFromFile(orxHANDLE _hUserData, const orxSTRING _zFilename)
```

---

### **`deleteBus`**

* Signature:

```lua
r1 = deleteBus(bus)
```

* Description:

> Deletes a bus

* Params:

name | type | description 
--- | --- | ---
bus | orxHANDLE | Concerned bus

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxSoundSystem_DeleteBus(orxHANDLE _hBus)
```

---

### **`enableListener`**

* Signature:

```lua
enableListener(listenerindex, enable)
```

* Description:

> Enables/disables a listener

* Params:

name | type | description 
--- | --- | ---
listenerindex | integer | Concerned listener index
enable | boolean | Enable / disable

* Returns:

* C signature:

```c
  void  orxSoundSystem_EnableListener(orxU32 _u32ListenerIndex, orxBOOL _bEnable)
```

---

### **`exit`**

* Signature:

```lua
exit()
```

* Description:

> Exits from the sound system module

* Params:

* Returns:

* C signature:

```c
  void  orxSoundSystem_Exit()
```

---

### **`getGlobalVolume`**

* Signature:

```lua
r1 = getGlobalVolume()
```

* Description:

> Gets global volume

* Params:

* Returns:

type | description 
--- | ---
number | Gobal volume

* C signature:

```c
  orxFLOAT  orxSoundSystem_GetGlobalVolume()
```

---

### **`getListenerCount`**

* Signature:

```lua
r1 = getListenerCount()
```

* Description:

> Gets listener count

* Params:

* Returns:

type | description 
--- | ---
integer | Listener count

* C signature:

```c
  orxU32  orxSoundSystem_GetListenerCount()
```

---

### **`getListenerPosition`**

* Signature:

```lua
r1 = getListenerPosition(index)
```

* Description:

> Gets listener position

* Params:

name | type | description 
--- | --- | ---
index | integer | Listener index, 0-based

* Returns:

type | description 
--- | ---
[orxVECTOR](../types/orxVECTOR.md)  | [orxVECTOR](../types/orxVECTOR.md) / nil

* C signature:

```c
  orxVECTOR * orxSoundSystem_GetListenerPosition(orxU32 _u32Index, orxVECTOR *_pvPosition)
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
  orxBOOL  orxSoundSystem_HasRecordingSupport()
```

---

### **`init`**

* Signature:

```lua
r1 = init()
```

* Description:

> Inits the sound system module

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxSoundSystem_Init()
```

---

### **`isListenerEnabled`**

* Signature:

```lua
r1 = isListenerEnabled(listenerindex)
```

* Description:

> Is listener enabled?

* Params:

name | type | description 
--- | --- | ---
listenerindex | integer | Concerned listener index

* Returns:

type | description 
--- | ---
boolean | true if enabled, false otherwise

* C signature:

```c
  orxBOOL  orxSoundSystem_IsListenerEnabled(orxU32 _u32ListenerIndex)
```

---

### **`loadSample`**

* Signature:

```lua
r1 = loadSample(filename)
```

* Description:

> Loads a sound sample from file \(cannot be played directly\)

* Params:

name | type | description 
--- | --- | ---
filename | string | Name of the file to load as a sample \(completely loaded in memory, useful for sound effects\)

* Returns:

type | description 
--- | ---
[orxSOUNDSYSTEM_SAMPLE](../types/orxSOUNDSYSTEM_SAMPLE.md)  | [orxSOUNDSYSTEM_SAMPLE](../types/orxSOUNDSYSTEM_SAMPLE.md) / nil

* C signature:

```c
  orxSOUNDSYSTEM_SAMPLE * orxSoundSystem_LoadSample(const orxSTRING _zFilename)
```

---

### **`removeAllBusFilters`**

* Signature:

```lua
r1 = removeAllBusFilters(bus)
```

* Description:

> Removes all filters from a bus

* Params:

name | type | description 
--- | --- | ---
bus | orxHANDLE | Concerned bus

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxSoundSystem_RemoveAllBusFilters(orxHANDLE _hBus)
```

---

### **`removeLastBusFilter`**

* Signature:

```lua
r1 = removeLastBusFilter(bus)
```

* Description:

> Removes last added filter from a bus

* Params:

name | type | description 
--- | --- | ---
bus | orxHANDLE | Concerned bus

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxSoundSystem_RemoveLastBusFilter(orxHANDLE _hBus)
```

---

### **`setBusParent`**

* Signature:

```lua
r1 = setBusParent(bus, parentbus)
```

* Description:

> Sets a bus's parent

* Params:

name | type | description 
--- | --- | ---
bus | orxHANDLE | Concerned bus
parentbus | orxHANDLE | Handle of the bus to use as parent

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxSoundSystem_SetBusParent(orxHANDLE _hBus, orxHANDLE _hParentBus)
```

---

### **`setGlobalVolume`**

* Signature:

```lua
r1 = setGlobalVolume(globalvolume)
```

* Description:

> Sets global volume

* Params:

name | type | description 
--- | --- | ---
globalvolume | number | Global volume to set

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxSoundSystem_SetGlobalVolume(orxFLOAT _fGlobalVolume)
```

---

### **`setListenerPosition`**

* Signature:

```lua
r1 = setListenerPosition(index, position)
```

* Description:

> Sets listener position

* Params:

name | type | description 
--- | --- | ---
index | integer | Listener index, 0-based
position | [orxVECTOR\#](../types/orxVECTOR.md) | Desired position

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxSoundSystem_SetListenerPosition(orxU32 _u32Index, const orxVECTOR *_pvPosition)
```

---

### **`setup`**

* Signature:

```lua
setup()
```

* Description:

> Sound system module setup

* Params:

* Returns:

* C signature:

```c
  void  orxSoundSystem_Setup()
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
  orxSTATUS  orxSoundSystem_StartRecording(const orxCHAR *_zName, orxBOOL _bWriteToFile, orxU32 _u32SampleRate, orxU32 _u32ChannelNumber)
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
  orxSTATUS  orxSoundSystem_StopRecording()
```

---

