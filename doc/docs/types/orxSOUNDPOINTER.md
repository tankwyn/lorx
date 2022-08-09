# type orxSOUNDPOINTER

> 

## Methods

### **`orxSOUNDPOINTER:addFilter`**

* Signature:

```lua
r1 = addFilter(filterdata, usecustomparam)
```

* Description:

> Adds a filter to all related sounds \(cascading\) (non-const self only)

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
  orxSTATUS  orxSoundPointer_AddFilter(orxSOUNDPOINTER *_pstSoundPointer, const orxSOUND_FILTER_DATA *_pstFilterData, orxBOOL _bUseCustomParam)
```

---

### **`orxSOUNDPOINTER:addFilterFromConfig`**

* Signature:

```lua
r1 = addFilterFromConfig(filterconfigid)
```

* Description:

> Adds a filter to all related sounds from config \(cascading\) (non-const self only)

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
  orxSTATUS  orxSoundPointer_AddFilterFromConfig(orxSOUNDPOINTER *_pstSoundPointer, const orxSTRING _zFilterConfigID)
```

---

### **`orxSOUNDPOINTER:addSound`**

* Signature:

```lua
r1 = addSound(sound)
```

* Description:

> Adds a sound (non-const self only)

* Params:

name | type | description 
--- | --- | ---
sound | [orxSOUND](./orxSOUND.md)  | Sound to add

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxSoundPointer_AddSound(orxSOUNDPOINTER *_pstSoundPointer, orxSOUND *_pstSound)
```

---

### **`orxSOUNDPOINTER:addSoundFromConfig`**

* Signature:

```lua
r1 = addSoundFromConfig(soundconfigid)
```

* Description:

> Adds a sound using its config ID (non-const self only)

* Params:

name | type | description 
--- | --- | ---
soundconfigid | string | Config ID of the sound to add

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxSoundPointer_AddSoundFromConfig(orxSOUNDPOINTER *_pstSoundPointer, const orxSTRING _zSoundConfigID)
```

---

### **`orxSOUNDPOINTER:addr`**

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

### **`orxSOUNDPOINTER:aeq`**

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

### **`orxSOUNDPOINTER:asVoid`**

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

### **`orxSOUNDPOINTER:decreaseCount`**

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

### **`orxSOUNDPOINTER:delete`**

* Signature:

```lua
r1 = delete()
```

* Description:

> Deletes a SoundPointer (non-const self only)

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxSoundPointer_Delete(orxSOUNDPOINTER *_pstSoundPointer)
```

---

### **`orxSOUNDPOINTER:enable`**

* Signature:

```lua
enable(enable)
```

* Description:

> Enables/disables a SoundPointer (non-const self only)

* Params:

name | type | description 
--- | --- | ---
enable | boolean | Enable / disable

* Returns:

* C signature:

```c
  void  orxSoundPointer_Enable(orxSOUNDPOINTER *_pstSoundPointer, orxBOOL _bEnable)
```

---

### **`orxSOUNDPOINTER:getChild`**

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

### **`orxSOUNDPOINTER:getCount`**

* Signature:

```lua
r1 = getCount()
```

* Description:

> Gets how many sounds are currently in use

* Params:

* Returns:

type | description 
--- | ---
integer | integer \(u32\)

* C signature:

```c
  orxU32  orxSoundPointer_GetCount(const orxSOUNDPOINTER *_pstSoundPointer)
```

---

### **`orxSOUNDPOINTER:getFlags`**

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

### **`orxSOUNDPOINTER:getGUID`**

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

### **`orxSOUNDPOINTER:getID`**

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

### **`orxSOUNDPOINTER:getLastAddedSound`**

* Signature:

```lua
r1 = getLastAddedSound()
```

* Description:

> Gets last added sound \(Do \*NOT\* destroy it directly before removing it!!!\)

* Params:

* Returns:

type | description 
--- | ---
[orxSOUND](./orxSOUND.md)  | [orxSOUND](./orxSOUND.md) / nil

* C signature:

```c
  orxSOUND * orxSoundPointer_GetLastAddedSound(const orxSOUNDPOINTER *_pstSoundPointer)
```

---

### **`orxSOUNDPOINTER:getNext`**

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

### **`orxSOUNDPOINTER:getOwner`**

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

### **`orxSOUNDPOINTER:getParent`**

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

### **`orxSOUNDPOINTER:getPrevious`**

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

### **`orxSOUNDPOINTER:getRefCount`**

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

### **`orxSOUNDPOINTER:getSibling`**

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

### **`orxSOUNDPOINTER:increaseCount`**

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

### **`orxSOUNDPOINTER:isEnabled`**

* Signature:

```lua
r1 = isEnabled()
```

* Description:

> Is SoundPointer enabled?

* Params:

* Returns:

type | description 
--- | ---
boolean | true if enabled, false otherwise

* C signature:

```c
  orxBOOL  orxSoundPointer_IsEnabled(const orxSOUNDPOINTER *_pstSoundPointer)
```

---

### **`orxSOUNDPOINTER:pause`**

* Signature:

```lua
r1 = pause()
```

* Description:

> Pauses all related sounds (non-const self only)

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxSoundPointer_Pause(orxSOUNDPOINTER *_pstSoundPointer)
```

---

### **`orxSOUNDPOINTER:play`**

* Signature:

```lua
r1 = play()
```

* Description:

> Plays all related sounds (non-const self only)

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxSoundPointer_Play(orxSOUNDPOINTER *_pstSoundPointer)
```

---

### **`orxSOUNDPOINTER:removeAllFilters`**

* Signature:

```lua
r1 = removeAllFilters()
```

* Description:

> Removes all filters from all related sounds (non-const self only)

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxSoundPointer_RemoveAllFilters(orxSOUNDPOINTER *_pstSoundPointer)
```

---

### **`orxSOUNDPOINTER:removeAllSounds`**

* Signature:

```lua
r1 = removeAllSounds()
```

* Description:

> Removes all sounds (non-const self only)

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxSoundPointer_RemoveAllSounds(orxSOUNDPOINTER *_pstSoundPointer)
```

---

### **`orxSOUNDPOINTER:removeLastFilter`**

* Signature:

```lua
r1 = removeLastFilter()
```

* Description:

> Removes last added filter from all related sounds (non-const self only)

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxSoundPointer_RemoveLastFilter(orxSOUNDPOINTER *_pstSoundPointer)
```

---

### **`orxSOUNDPOINTER:removeSound`**

* Signature:

```lua
r1 = removeSound(sound)
```

* Description:

> Removes a sound (non-const self only)

* Params:

name | type | description 
--- | --- | ---
sound | [orxSOUND](./orxSOUND.md)  | Sound to remove

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxSoundPointer_RemoveSound(orxSOUNDPOINTER *_pstSoundPointer, orxSOUND *_pstSound)
```

---

### **`orxSOUNDPOINTER:removeSoundFromConfig`**

* Signature:

```lua
r1 = removeSoundFromConfig(soundconfigid)
```

* Description:

> Removes a sound using its config ID (non-const self only)

* Params:

name | type | description 
--- | --- | ---
soundconfigid | string | Config ID of the sound to remove

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxSoundPointer_RemoveSoundFromConfig(orxSOUNDPOINTER *_pstSoundPointer, const orxSTRING _zSoundConfigID)
```

---

### **`orxSOUNDPOINTER:setFlags`**

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

### **`orxSOUNDPOINTER:setOwner`**

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

### **`orxSOUNDPOINTER:setPanning`**

* Signature:

```lua
r1 = setPanning(panning, mix)
```

* Description:

> Sets panning of all related sounds (non-const self only)

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
  orxSTATUS  orxSoundPointer_SetPanning(orxSOUNDPOINTER *_pstSoundPointer, orxFLOAT _fPanning, orxBOOL _bMix)
```

---

### **`orxSOUNDPOINTER:setParent`**

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

### **`orxSOUNDPOINTER:setPitch`**

* Signature:

```lua
r1 = setPitch(pitch)
```

* Description:

> Sets pitch of all related sounds (non-const self only)

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
  orxSTATUS  orxSoundPointer_SetPitch(orxSOUNDPOINTER *_pstSoundPointer, orxFLOAT _fPitch)
```

---

### **`orxSOUNDPOINTER:setVolume`**

* Signature:

```lua
r1 = setVolume(volume)
```

* Description:

> Sets volume of all related sounds (non-const self only)

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
  orxSTATUS  orxSoundPointer_SetVolume(orxSOUNDPOINTER *_pstSoundPointer, orxFLOAT _fVolume)
```

---

### **`orxSOUNDPOINTER:stop`**

* Signature:

```lua
r1 = stop()
```

* Description:

> Stops all related sounds (non-const self only)

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxSoundPointer_Stop(orxSOUNDPOINTER *_pstSoundPointer)
```

---

### **`orxSOUNDPOINTER:testAllFlags`**

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

### **`orxSOUNDPOINTER:testFlags`**

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

### **`orxSOUNDPOINTER:type`**

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

### **`orxSOUNDPOINTER:update`**

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

