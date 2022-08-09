# type orxSOUND

> 

## Methods

### **`orxSOUND:addFilter`**

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
  orxSTATUS  orxSound_AddFilter(orxSOUND *_pstSound, const orxSOUND_FILTER_DATA *_pstFilterData, orxBOOL _bUseCustomParam)
```

---

### **`orxSOUND:addFilterFromConfig`**

* Signature:

```lua
r1 = addFilterFromConfig(filterconfigid)
```

* Description:

> Adds a filter to a sound \(cascading\) from config (non-const self only)

* Params:

name | type | description 
--- | --- | ---
filterconfigid | string | Config ID of the filter to add

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxSound_AddFilterFromConfig(orxSOUND *_pstSound, const orxSTRING _zFilterConfigID)
```

---

### **`orxSOUND:addr`**

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

### **`orxSOUND:aeq`**

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

### **`orxSOUND:asVoid`**

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

### **`orxSOUND:decreaseCount`**

* Signature:

```lua
decreaseCount()
```

* Description:

> Decreases structure reference count (non-const self only)

* Params:

* Returns:

* C signature:

```c
  void orxStructure_DecreaseCount(void *_pStructure)
```

---

### **`orxSOUND:delete`**

* Signature:

```lua
r1 = delete()
```

* Description:

> Deletes sound (non-const self only)

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxSound_Delete(orxSOUND *_pstSound)
```

---

### **`orxSOUND:getBusID`**

* Signature:

```lua
r1 = getBusID()
```

* Description:

> Gets sound's bus ID

* Params:

* Returns:

type | description 
--- | ---
integer | Sound's bus ID

* C signature:

```c
  orxSTRINGID  orxSound_GetBusID(const orxSOUND *_pstSound)
```

---

### **`orxSOUND:getChild`**

* Signature:

```lua
r1 = getChild()
```

* Description:

> Gets structure tree child

* Params:

* Returns:

type | description 
--- | ---
[orxSTRUCTURE](./orxSTRUCTURE.md)  | [orxSTRUCTURE](./orxSTRUCTURE.md) 

* C signature:

```c
  orxSTRUCTURE * orxStructure_GetChild(const void *_pStructure)
```

---

### **`orxSOUND:getDuration`**

* Signature:

```lua
r1 = getDuration()
```

* Description:

> Gets sound duration

* Params:

* Returns:

type | description 
--- | ---
number | number

* C signature:

```c
  orxFLOAT  orxSound_GetDuration(const orxSOUND *_pstSound)
```

---

### **`orxSOUND:getFlags`**

* Signature:

```lua
r1 = getFlags()
```

* Description:

> Gets structure flags

* Params:

* Returns:

type | description 
--- | ---
integer | integer \(u32\)

* C signature:

```c
  orxU32 orxStructure_GetFlags(const void *_pStructure, orxU32 _u32Mask)
```

---

### **`orxSOUND:getGUID`**

* Signature:

```lua
r1 = getGUID()
```

* Description:

> Gets structure GUID

* Params:

* Returns:

type | description 
--- | ---
integer | integer \(u64\)

* C signature:

```c
  orxU64 orxStructure_GetGUID(const void *_pStructure)
```

---

### **`orxSOUND:getID`**

* Signature:

```lua
r1 = getID()
```

* Description:

> Gets structure ID

* Params:

* Returns:

type | description 
--- | ---
[orxSTRUCTURE_ID](../enums.md#orxstructure_id)  | [orxSTRUCTURE_ID](../enums.md#orxstructure_id) 

* C signature:

```c
  orxSTRUCTURE_ID orxStructure_GetID(const void *_pStructure)
```

---

### **`orxSOUND:getName`**

* Signature:

```lua
r1 = getName()
```

* Description:

> Gets sound config name

* Params:

* Returns:

type | description 
--- | ---
string | string / empty string

* C signature:

```c
  const orxSTRING  orxSound_GetName(const orxSOUND *_pstSound)
```

---

### **`orxSOUND:getNext`**

* Signature:

```lua
r1 = getNext()
```

* Description:

> Gets structure list next

* Params:

* Returns:

type | description 
--- | ---
[orxSTRUCTURE](./orxSTRUCTURE.md)  | [orxSTRUCTURE](./orxSTRUCTURE.md) 

* C signature:

```c
  orxSTRUCTURE * orxStructure_GetNext(const void *_pStructure)
```

---

### **`orxSOUND:getOwner`**

* Signature:

```lua
r1 = getOwner()
```

* Description:

> Gets structure's owner

* Params:

* Returns:

type | description 
--- | ---
[orxSTRUCTURE](./orxSTRUCTURE.md)  | [orxSTRUCTURE](./orxSTRUCTURE.md) / nil if not found/alive

* C signature:

```c
  orxSTRUCTURE * orxStructure_GetOwner(const void *_pStructure)
```

---

### **`orxSOUND:getPanning`**

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
  orxSTATUS  orxSound_GetPanning(const orxSOUND *_pstSound, orxFLOAT *_pfPanning, orxBOOL *_pbMix)
```

---

### **`orxSOUND:getParent`**

* Signature:

```lua
r1 = getParent()
```

* Description:

> Gets structure tree parent

* Params:

* Returns:

type | description 
--- | ---
[orxSTRUCTURE](./orxSTRUCTURE.md)  | [orxSTRUCTURE](./orxSTRUCTURE.md) 

* C signature:

```c
  orxSTRUCTURE * orxStructure_GetParent(const void *_pStructure)
```

---

### **`orxSOUND:getPitch`**

* Signature:

```lua
r1 = getPitch()
```

* Description:

> Gets sound pitch

* Params:

* Returns:

type | description 
--- | ---
number | number

* C signature:

```c
  orxFLOAT  orxSound_GetPitch(const orxSOUND *_pstSound)
```

---

### **`orxSOUND:getPosition`**

* Signature:

```lua
r1 = getPosition()
```

* Description:

> Gets sound position

* Params:

* Returns:

type | description 
--- | ---
[orxVECTOR](./orxVECTOR.md)  | [orxVECTOR](./orxVECTOR.md) / nil

* C signature:

```c
  orxVECTOR * orxSound_GetPosition(const orxSOUND *_pstSound, orxVECTOR *_pvPosition)
```

---

### **`orxSOUND:getPrevious`**

* Signature:

```lua
r1 = getPrevious()
```

* Description:

> Gets structure list previous

* Params:

* Returns:

type | description 
--- | ---
[orxSTRUCTURE](./orxSTRUCTURE.md)  | [orxSTRUCTURE](./orxSTRUCTURE.md) 

* C signature:

```c
  orxSTRUCTURE * orxStructure_GetPrevious(const void *_pStructure)
```

---

### **`orxSOUND:getRefCount`**

* Signature:

```lua
r1 = getRefCount()
```

* Description:

> Gets structure reference count

* Params:

* Returns:

type | description 
--- | ---
integer | integer \(u32\)

* C signature:

```c
  orxU32 orxStructure_GetRefCount(const void *_pStructure)
```

---

### **`orxSOUND:getSibling`**

* Signature:

```lua
r1 = getSibling()
```

* Description:

> Gets structure tree sibling

* Params:

* Returns:

type | description 
--- | ---
[orxSTRUCTURE](./orxSTRUCTURE.md)  | [orxSTRUCTURE](./orxSTRUCTURE.md) 

* C signature:

```c
  orxSTRUCTURE * orxStructure_GetSibling(const void *_pStructure)
```

---

### **`orxSOUND:getSpatialization`**

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
  orxSTATUS  orxSound_GetSpatialization(const orxSOUND *_pstSound, orxFLOAT *_pfMinDistance, orxFLOAT *_pfMaxDistance, orxFLOAT *_pfMinGain, orxFLOAT *_pfMaxGain, orxFLOAT *_pfRollOff)
```

---

### **`orxSOUND:getStatus`**

* Signature:

```lua
r1 = getStatus()
```

* Description:

> Gets sound status

* Params:

* Returns:

type | description 
--- | ---
[orxSOUND_STATUS](../enums.md#orxsound_status)  | [orxSOUND_STATUS](../enums.md#orxsound_status) 

* C signature:

```c
  orxSOUND_STATUS  orxSound_GetStatus(const orxSOUND *_pstSound)
```

---

### **`orxSOUND:getTime`**

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
  orxFLOAT  orxSound_GetTime(const orxSOUND *_pstSound)
```

---

### **`orxSOUND:getVolume`**

* Signature:

```lua
r1 = getVolume()
```

* Description:

> Gets sound volume

* Params:

* Returns:

type | description 
--- | ---
number | number

* C signature:

```c
  orxFLOAT  orxSound_GetVolume(const orxSOUND *_pstSound)
```

---

### **`orxSOUND:increaseCount`**

* Signature:

```lua
increaseCount()
```

* Description:

> Increases structure reference count (non-const self only)

* Params:

* Returns:

* C signature:

```c
  void orxStructure_IncreaseCount(void *_pStructure)
```

---

### **`orxSOUND:isLooping`**

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
boolean | true / false

* C signature:

```c
  orxBOOL  orxSound_IsLooping(const orxSOUND *_pstSound)
```

---

### **`orxSOUND:isStream`**

* Signature:

```lua
r1 = isStream()
```

* Description:

> Is a stream \(ie. music\)? (non-const self only)

* Params:

* Returns:

type | description 
--- | ---
boolean | true / false

* C signature:

```c
  orxBOOL  orxSound_IsStream(orxSOUND *_pstSound)
```

---

### **`orxSOUND:linkSample`**

* Signature:

```lua
r1 = linkSample(samplename)
```

* Description:

> Links a sample (non-const self only)

* Params:

name | type | description 
--- | --- | ---
samplename | string | Name of the sample to link (must already be loaded/created)

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxSound_LinkSample(orxSOUND *_pstSound, const orxSTRING _zSampleName)
```

---

### **`orxSOUND:loop`**

* Signature:

```lua
r1 = loop(loop)
```

* Description:

> Loops sound (non-const self only)

* Params:

name | type | description 
--- | --- | ---
loop | boolean | true / false

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxSound_Loop(orxSOUND *_pstSound, orxBOOL _bLoop)
```

---

### **`orxSOUND:pause`**

* Signature:

```lua
r1 = pause()
```

* Description:

> Pauses sound (non-const self only)

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxSound_Pause(orxSOUND *_pstSound)
```

---

### **`orxSOUND:play`**

* Signature:

```lua
r1 = play()
```

* Description:

> Plays sound (non-const self only)

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxSound_Play(orxSOUND *_pstSound)
```

---

### **`orxSOUND:removeAllFilters`**

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
  orxSTATUS  orxSound_RemoveAllFilters(orxSOUND *_pstSound)
```

---

### **`orxSOUND:removeLastFilter`**

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
  orxSTATUS  orxSound_RemoveLastFilter(orxSOUND *_pstSound)
```

---

### **`orxSOUND:setBusID`**

* Signature:

```lua
r1 = setBusID(busid)
```

* Description:

> Sets sound's bus ID (non-const self only)

* Params:

name | type | description 
--- | --- | ---
busid | integer | Bus ID to set

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxSound_SetBusID(orxSOUND *_pstSound, orxSTRINGID _stBusID)
```

---

### **`orxSOUND:setFlags`**

* Signature:

```lua
setFlags(removeflags)
```

* Description:

> Sets structure flags (non-const self only)

* Params:

name | type | description 
--- | --- | ---
removeflags | integer | Flags to remove

* Returns:

* C signature:

```c
  void orxStructure_SetFlags(void *_pStructure, orxU32 _u32AddFlags, orxU32 _u32RemoveFlags)
```

---

### **`orxSOUND:setOwner`**

* Signature:

```lua
r1 = setOwner()
```

* Description:

> Sets structure owner (non-const self only)

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxStructure_SetOwner(void *_pStructure, void *_pOwner)
```

---

### **`orxSOUND:setPanning`**

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
  orxSTATUS  orxSound_SetPanning(orxSOUND *_pstSound, orxFLOAT _fPanning, orxBOOL _bMix)
```

---

### **`orxSOUND:setParent`**

* Signature:

```lua
r1 = setParent()
```

* Description:

> Sets structure tree parent (non-const self only)

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxStructure_SetParent(void *_pStructure, void *_phParent)
```

---

### **`orxSOUND:setPitch`**

* Signature:

```lua
r1 = setPitch(pitch)
```

* Description:

> Sets sound pitch (non-const self only)

* Params:

name | type | description 
--- | --- | ---
pitch | number | Desired pitch

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxSound_SetPitch(orxSOUND *_pstSound, orxFLOAT _fPitch)
```

---

### **`orxSOUND:setPosition`**

* Signature:

```lua
r1 = setPosition(position)
```

* Description:

> Sets sound position (non-const self only)

* Params:

name | type | description 
--- | --- | ---
position | [orxVECTOR\#](./orxVECTOR.md) | Desired position

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxSound_SetPosition(orxSOUND *_pstSound, const orxVECTOR *_pvPosition)
```

---

### **`orxSOUND:setSpatialization`**

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
  orxSTATUS  orxSound_SetSpatialization(orxSOUND *_pstSound, orxFLOAT _fMinDistance, orxFLOAT _fMaxDistance, orxFLOAT _fMinGain, orxFLOAT _fMaxGain, orxFLOAT _fRollOff)
```

---

### **`orxSOUND:setTime`**

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
  orxSTATUS  orxSound_SetTime(orxSOUND *_pstSound, orxFLOAT _fTime)
```

---

### **`orxSOUND:setVolume`**

* Signature:

```lua
r1 = setVolume(volume)
```

* Description:

> Sets sound volume (non-const self only)

* Params:

name | type | description 
--- | --- | ---
volume | number | Desired volume (0.0 - 1.0)

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxSound_SetVolume(orxSOUND *_pstSound, orxFLOAT _fVolume)
```

---

### **`orxSOUND:stop`**

* Signature:

```lua
r1 = stop()
```

* Description:

> Stops sound (non-const self only)

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxSound_Stop(orxSOUND *_pstSound)
```

---

### **`orxSOUND:testAllFlags`**

* Signature:

```lua
r1 = testAllFlags()
```

* Description:

> Tests all flags against structure ones

* Params:

* Returns:

type | description 
--- | ---
boolean | true / false

* C signature:

```c
  orxBOOL orxStructure_TestAllFlags(const void *_pStructure, orxU32 _u32Flags)
```

---

### **`orxSOUND:testFlags`**

* Signature:

```lua
r1 = testFlags()
```

* Description:

> Tests flags against structure ones

* Params:

* Returns:

type | description 
--- | ---
boolean | true / false

* C signature:

```c
  orxBOOL orxStructure_TestFlags(const void *_pStructure, orxU32 _u32Flags)
```

---

### **`orxSOUND:type`**

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

### **`orxSOUND:unlinkSample`**

* Signature:

```lua
r1 = unlinkSample()
```

* Description:

> Unlinks \(and deletes if not used anymore\) a sample (non-const self only)

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxSound_UnlinkSample(orxSOUND *_pstSound)
```

---

### **`orxSOUND:update`**

* Signature:

```lua
r1 = update(clockinfo)
```

* Description:

> Updates structure if update function was registered for the structure type (non-const self only)

* Params:

name | type | description 
--- | --- | ---
clockinfo | [orxCLOCK_INFO\#](./orxCLOCK_INFO.md) | Update associated clock info

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxStructure_Update(void *_pStructure, const void *_phCaller, const orxCLOCK_INFO *_pstClockInfo)
```

---

