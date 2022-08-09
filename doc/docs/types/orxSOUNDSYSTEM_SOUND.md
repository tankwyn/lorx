# type orxSOUNDSYSTEM_SOUND

> 

## Methods

### **`orxSOUNDSYSTEM_SOUND:addFilter`**

* Signature:

```lua
r1 = addFilter(filterdata, usecustomparam)
```

* Description:

> Adds a filter to a sound \(cascading\) (non-const self only)

* Params:

name | type | description 
--- | --- | ---
filterdata | [orxSOUND_FILTER_DATA\#](./orxSOUND_FILTER_DATA.md) | Concerned filter data
usecustomparam | boolean | Filter uses custom parameters

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxSoundSystem_AddFilter(orxSOUNDSYSTEM_SOUND *_pstSound, const orxSOUND_FILTER_DATA *_pstFilterData, orxBOOL _bUseCustomParam)
```

---

### **`orxSOUNDSYSTEM_SOUND:addr`**

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

### **`orxSOUNDSYSTEM_SOUND:aeq`**

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

### **`orxSOUNDSYSTEM_SOUND:asVoid`**

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

### **`orxSOUNDSYSTEM_SOUND:delete`**

* Signature:

```lua
r1 = delete()
```

* Description:

> Deletes a sound (non-const self only)

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxSoundSystem_Delete(orxSOUNDSYSTEM_SOUND *_pstSound)
```

---

### **`orxSOUNDSYSTEM_SOUND:getDuration`**

* Signature:

```lua
r1 = getDuration()
```

* Description:

> Gets a sound duration

* Params:

* Returns:

type | description 
--- | ---
number | Sound's duration \(seconds\)

* C signature:

```c
  orxFLOAT  orxSoundSystem_GetDuration(const orxSOUNDSYSTEM_SOUND *_pstSound)
```

---

### **`orxSOUNDSYSTEM_SOUND:getPanning`**

* Signature:

```lua
r1, r2, r3 = getPanning()
```

* Description:

> Gets a sound panning

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure
number | Sound panning, -1.0f for full left, 0.0f for center, 1.0f for full right
boolean | Left/Right channels are be mixed if true or act like a balance otherwise

* C signature:

```c
  orxSTATUS  orxSoundSystem_GetPanning(const orxSOUNDSYSTEM_SOUND *_pstSound, orxFLOAT *_pfPanning, orxBOOL *_pbMix)
```

---

### **`orxSOUNDSYSTEM_SOUND:getPitch`**

* Signature:

```lua
r1 = getPitch()
```

* Description:

> Gets a sound pitch

* Params:

* Returns:

type | description 
--- | ---
number | Sound's pitch

* C signature:

```c
  orxFLOAT  orxSoundSystem_GetPitch(const orxSOUNDSYSTEM_SOUND *_pstSound)
```

---

### **`orxSOUNDSYSTEM_SOUND:getPosition`**

* Signature:

```lua
r1 = getPosition()
```

* Description:

> Gets a sound position

* Params:

* Returns:

type | description 
--- | ---
[orxVECTOR](./orxVECTOR.md)  | Sound's position

* C signature:

```c
  orxVECTOR * orxSoundSystem_GetPosition(const orxSOUNDSYSTEM_SOUND *_pstSound, orxVECTOR *_pvPosition)
```

---

### **`orxSOUNDSYSTEM_SOUND:getSpatialization`**

* Signature:

```lua
r1, r2, r3, r4, r5, r6 = getSpatialization()
```

* Description:

> Gets a sound spatialization information

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure
number | Min distance, inside which the max gain will be used, will be strictly negative if the sound isn't spatialized
number | Max distance, outside which the gain will stop decreasing, will be strictly negative if the sound isn't spatialized
number | Min gain in \[0.0f - 1.0f\]
number | Max gain in \[0.0f - 1.0f\]
number | RollOff factor applied when interpolating the gain between inner and outer distances, defaults to 1.0f

* C signature:

```c
  orxSTATUS  orxSoundSystem_GetSpatialization(const orxSOUNDSYSTEM_SOUND *_pstSound, orxFLOAT *_pfMinDistance, orxFLOAT *_pfMaxDistance, orxFLOAT *_pfMinGain, orxFLOAT *_pfMaxGain, orxFLOAT *_pfRollOff)
```

---

### **`orxSOUNDSYSTEM_SOUND:getStatus`**

* Signature:

```lua
r1 = getStatus()
```

* Description:

> Gets a sound status \(play/pause/stop\)

* Params:

* Returns:

type | description 
--- | ---
[orxSOUNDSYSTEM_STATUS](../enums.md#orxsoundsystem_status)  | [orxSOUNDSYSTEM_STATUS](../enums.md#orxsoundsystem_status) 

* C signature:

```c
  orxSOUNDSYSTEM_STATUS  orxSoundSystem_GetStatus(const orxSOUNDSYSTEM_SOUND *_pstSound)
```

---

### **`orxSOUNDSYSTEM_SOUND:getTime`**

* Signature:

```lua
r1 = getTime()
```

* Description:

> Gets a sound's time \(ie. cursor/play position from beginning\)

* Params:

* Returns:

type | description 
--- | ---
number | Sound's time \(cursor/play position\), in seconds

* C signature:

```c
  orxFLOAT  orxSoundSystem_GetTime(const orxSOUNDSYSTEM_SOUND *_pstSound)
```

---

### **`orxSOUNDSYSTEM_SOUND:getVolume`**

* Signature:

```lua
r1 = getVolume()
```

* Description:

> Gets a sound volume

* Params:

* Returns:

type | description 
--- | ---
number | Sound's volume

* C signature:

```c
  orxFLOAT  orxSoundSystem_GetVolume(const orxSOUNDSYSTEM_SOUND *_pstSound)
```

---

### **`orxSOUNDSYSTEM_SOUND:isLooping`**

* Signature:

```lua
r1 = isLooping()
```

* Description:

> Is sound looping?

* Params:

* Returns:

type | description 
--- | ---
boolean | true if looping, false otherwise

* C signature:

```c
  orxBOOL  orxSoundSystem_IsLooping(const orxSOUNDSYSTEM_SOUND *_pstSound)
```

---

### **`orxSOUNDSYSTEM_SOUND:loop`**

* Signature:

```lua
r1 = loop(loop)
```

* Description:

> Loops a sound (non-const self only)

* Params:

name | type | description 
--- | --- | ---
loop | boolean | Loop / no loop

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxSoundSystem_Loop(orxSOUNDSYSTEM_SOUND *_pstSound, orxBOOL _bLoop)
```

---

### **`orxSOUNDSYSTEM_SOUND:pause`**

* Signature:

```lua
r1 = pause()
```

* Description:

> Pauses a sound (non-const self only)

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxSoundSystem_Pause(orxSOUNDSYSTEM_SOUND *_pstSound)
```

---

### **`orxSOUNDSYSTEM_SOUND:play`**

* Signature:

```lua
r1 = play()
```

* Description:

> Plays a sound (non-const self only)

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxSoundSystem_Play(orxSOUNDSYSTEM_SOUND *_pstSound)
```

---

### **`orxSOUNDSYSTEM_SOUND:removeAllFilters`**

* Signature:

```lua
r1 = removeAllFilters()
```

* Description:

> Removes all filters from a sound (non-const self only)

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxSoundSystem_RemoveAllFilters(orxSOUNDSYSTEM_SOUND *_pstSound)
```

---

### **`orxSOUNDSYSTEM_SOUND:removeLastFilter`**

* Signature:

```lua
r1 = removeLastFilter()
```

* Description:

> Removes last added filter from a sound (non-const self only)

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxSoundSystem_RemoveLastFilter(orxSOUNDSYSTEM_SOUND *_pstSound)
```

---

### **`orxSOUNDSYSTEM_SOUND:setBus`**

* Signature:

```lua
r1 = setBus(bus)
```

* Description:

> Sets a sound's bus (non-const self only)

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
  orxSTATUS  orxSoundSystem_SetBus(orxSOUNDSYSTEM_SOUND *_pstSound, orxHANDLE _hBus)
```

---

### **`orxSOUNDSYSTEM_SOUND:setPanning`**

* Signature:

```lua
r1 = setPanning(panning, mix)
```

* Description:

> Sets a sound panning (non-const self only)

* Params:

name | type | description 
--- | --- | ---
panning | number | Sound panning, -1.0f for full left, 0.0f for center, 1.0f for full right
mix | boolean | Left/Right channels will be mixed if true or act like a balance otherwise

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxSoundSystem_SetPanning(orxSOUNDSYSTEM_SOUND *_pstSound, orxFLOAT _fPanning, orxBOOL _bMix)
```

---

### **`orxSOUNDSYSTEM_SOUND:setPitch`**

* Signature:

```lua
r1 = setPitch(pitch)
```

* Description:

> Sets a sound pitch (non-const self only)

* Params:

name | type | description 
--- | --- | ---
pitch | number | Pitch to set

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxSoundSystem_SetPitch(orxSOUNDSYSTEM_SOUND *_pstSound, orxFLOAT _fPitch)
```

---

### **`orxSOUNDSYSTEM_SOUND:setPosition`**

* Signature:

```lua
r1 = setPosition(position)
```

* Description:

> Sets a sound position (non-const self only)

* Params:

name | type | description 
--- | --- | ---
position | [orxVECTOR\#](./orxVECTOR.md) | Position to set

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxSoundSystem_SetPosition(orxSOUNDSYSTEM_SOUND *_pstSound, const orxVECTOR *_pvPosition)
```

---

### **`orxSOUNDSYSTEM_SOUND:setSpatialization`**

* Signature:

```lua
r1 = setSpatialization(mindistance, maxdistance, mingain, maxgain, rolloff)
```

* Description:

> Sets a sound spatialization, with gain decreasing between the minimum and maximum distances, when enabled (non-const self only)

* Params:

name | type | description 
--- | --- | ---
mindistance | number | Min distance, inside which the max gain will be used, strictly negative value to disable spatialization entirely
maxdistance | number | Max distance, outside which the gain will stop decreasing, strictly negative value to disable spatialization entirely
mingain | number | Min gain in [0.0f - 1.0f]
maxgain | number | Max gain in [0.0f - 1.0f]
rolloff | number | RollOff factor applied when interpolating the gain between inner and outer distances, defaults to 1.0f

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxSoundSystem_SetSpatialization(orxSOUNDSYSTEM_SOUND *_pstSound, orxFLOAT _fMinDistance, orxFLOAT _fMaxDistance, orxFLOAT _fMinGain, orxFLOAT _fMaxGain, orxFLOAT _fRollOff)
```

---

### **`orxSOUNDSYSTEM_SOUND:setTime`**

* Signature:

```lua
r1 = setTime(time)
```

* Description:

> Sets a sound time \(ie. cursor/play position from beginning\) (non-const self only)

* Params:

name | type | description 
--- | --- | ---
time | number | Time, in seconds

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxSoundSystem_SetTime(orxSOUNDSYSTEM_SOUND *_pstSound, orxFLOAT _fTime)
```

---

### **`orxSOUNDSYSTEM_SOUND:setVolume`**

* Signature:

```lua
r1 = setVolume(volume)
```

* Description:

> Sets a sound volume (non-const self only)

* Params:

name | type | description 
--- | --- | ---
volume | number | Volume to set [0, 1]

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxSoundSystem_SetVolume(orxSOUNDSYSTEM_SOUND *_pstSound, orxFLOAT _fVolume)
```

---

### **`orxSOUNDSYSTEM_SOUND:stop`**

* Signature:

```lua
r1 = stop()
```

* Description:

> Stops a sound (non-const self only)

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxSoundSystem_Stop(orxSOUNDSYSTEM_SOUND *_pstSound)
```

---

### **`orxSOUNDSYSTEM_SOUND:type`**

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

