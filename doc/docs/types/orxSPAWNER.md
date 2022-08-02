# type orxSPAWNER

> 

## Methods

### **`orxSPAWNER:addr`**

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

### **`orxSPAWNER:aeq`**

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

### **`orxSPAWNER:asVoid`**

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

### **`orxSPAWNER:decreaseCount`**

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

### **`orxSPAWNER:delete`**

* Signature:

```lua
r1 = delete()
```

* Description:

> Deletes a spawner (non-const self only)

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxSpawner_Delete(orxSPAWNER *_pstSpawner)
```

---

### **`orxSPAWNER:enable`**

* Signature:

```lua
enable(enable)
```

* Description:

> Enables/disables a spawner (non-const self only)

* Params:

name | type | description 
--- | --- | ---
enable | boolean | Enable / disable

* Returns:

* C signature:

```c
  void  orxSpawner_Enable(orxSPAWNER *_pstSpawner, orxBOOL _bEnable)
```

---

### **`orxSPAWNER:getActiveObjectCount`**

* Signature:

```lua
r1 = getActiveObjectCount()
```

* Description:

> Gets spawner active object count

* Params:

* Returns:

type | description 
--- | ---
integer | Active object count

* C signature:

```c
  orxU32  orxSpawner_GetActiveObjectCount(const orxSPAWNER *_pstSpawner)
```

---

### **`orxSPAWNER:getActiveObjectLimit`**

* Signature:

```lua
r1 = getActiveObjectLimit()
```

* Description:

> Gets spawner active object limit

* Params:

* Returns:

type | description 
--- | ---
integer | Active object limit, 0 for unlimited

* C signature:

```c
  orxU32  orxSpawner_GetActiveObjectLimit(const orxSPAWNER *_pstSpawner)
```

---

### **`orxSPAWNER:getChild`**

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

### **`orxSPAWNER:getFlags`**

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

### **`orxSPAWNER:getFrame`**

* Signature:

```lua
r1 = getFrame()
```

* Description:

> Gets spawner frame

* Params:

* Returns:

type | description 
--- | ---
[orxFRAME](./orxFRAME.md)  | [orxFRAME](./orxFRAME.md) 

* C signature:

```c
  orxFRAME * orxSpawner_GetFrame(const orxSPAWNER *_pstSpawner)
```

---

### **`orxSPAWNER:getGUID`**

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

### **`orxSPAWNER:getID`**

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

### **`orxSPAWNER:getName`**

* Signature:

```lua
r1 = getName()
```

* Description:

> Gets spawner name

* Params:

* Returns:

type | description 
--- | ---
string | string / empty string

* C signature:

```c
  const orxSTRING  orxSpawner_GetName(const orxSPAWNER *_pstSpawner)
```

---

### **`orxSPAWNER:getNext`**

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

### **`orxSPAWNER:getNextWaveDelay`**

* Signature:

```lua
r1 = getNextWaveDelay()
```

* Description:

> Gets spawner next wave delay

* Params:

* Returns:

type | description 
--- | ---
number | Delay before next wave is spawned / -1 if not in wave mode

* C signature:

```c
  orxFLOAT  orxSpawner_GetNextWaveDelay(const orxSPAWNER *_pstSpawner)
```

---

### **`orxSPAWNER:getObjectSpeed`**

* Signature:

```lua
r1 = getObjectSpeed()
```

* Description:

> Gets spawner object speed

* Params:

* Returns:

type | description 
--- | ---
[orxVECTOR](./orxVECTOR.md)  | Speed applied to every spawned object / nil if none is applied

* C signature:

```c
  orxVECTOR * orxSpawner_GetObjectSpeed(const orxSPAWNER *_pstSpawner, orxVECTOR *_pvObjectSpeed)
```

---

### **`orxSPAWNER:getOwner`**

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

### **`orxSPAWNER:getParent`**

* Signature:

```lua
r1 = getParent()
```

* Description:

> Gets spawner parent

* Params:

* Returns:

type | description 
--- | ---
[orxSTRUCTURE](./orxSTRUCTURE.md)  | Parent \(object, spawner, camera or frame\) / nil

* C signature:

```c
  orxSTRUCTURE * orxSpawner_GetParent(const orxSPAWNER *_pstSpawner)
```

---

### **`orxSPAWNER:getPosition`**

* Signature:

```lua
r1 = getPosition()
```

* Description:

> Get spawner position

* Params:

* Returns:

type | description 
--- | ---
[orxVECTOR](./orxVECTOR.md)  | [orxVECTOR](./orxVECTOR.md) / nil

* C signature:

```c
  orxVECTOR * orxSpawner_GetPosition(const orxSPAWNER *_pstSpawner, orxVECTOR *_pvPosition)
```

---

### **`orxSPAWNER:getPrevious`**

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

### **`orxSPAWNER:getRefCount`**

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

### **`orxSPAWNER:getRotation`**

* Signature:

```lua
r1 = getRotation()
```

* Description:

> Get spawner rotation

* Params:

* Returns:

type | description 
--- | ---
number | number \(radians\)

* C signature:

```c
  orxFLOAT  orxSpawner_GetRotation(const orxSPAWNER *_pstSpawner)
```

---

### **`orxSPAWNER:getScale`**

* Signature:

```lua
r1 = getScale()
```

* Description:

> Get spawner scale

* Params:

* Returns:

type | description 
--- | ---
[orxVECTOR](./orxVECTOR.md)  | Scale vector

* C signature:

```c
  orxVECTOR * orxSpawner_GetScale(const orxSPAWNER *_pstSpawner, orxVECTOR *_pvScale)
```

---

### **`orxSPAWNER:getSibling`**

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

### **`orxSPAWNER:getTotalObjectCount`**

* Signature:

```lua
r1 = getTotalObjectCount()
```

* Description:

> Gets spawner total object count

* Params:

* Returns:

type | description 
--- | ---
integer | Total object count

* C signature:

```c
  orxU32  orxSpawner_GetTotalObjectCount(const orxSPAWNER *_pstSpawner)
```

---

### **`orxSPAWNER:getTotalObjectLimit`**

* Signature:

```lua
r1 = getTotalObjectLimit()
```

* Description:

> Gets spawner total object limit

* Params:

* Returns:

type | description 
--- | ---
integer | Total object limit, 0 for unlimited

* C signature:

```c
  orxU32  orxSpawner_GetTotalObjectLimit(const orxSPAWNER *_pstSpawner)
```

---

### **`orxSPAWNER:getWaveDelay`**

* Signature:

```lua
r1 = getWaveDelay()
```

* Description:

> Gets spawner wave delay

* Params:

* Returns:

type | description 
--- | ---
number | Delay between two waves / -1 if not in wave mode

* C signature:

```c
  orxFLOAT  orxSpawner_GetWaveDelay(const orxSPAWNER *_pstSpawner)
```

---

### **`orxSPAWNER:getWaveSize`**

* Signature:

```lua
r1 = getWaveSize()
```

* Description:

> Gets spawner wave size

* Params:

* Returns:

type | description 
--- | ---
integer | Number of objects spawned in a wave

* C signature:

```c
  orxU32  orxSpawner_GetWaveSize(const orxSPAWNER *_pstSpawner)
```

---

### **`orxSPAWNER:getWorldPosition`**

* Signature:

```lua
r1 = getWorldPosition()
```

* Description:

> Get spawner world position

* Params:

* Returns:

type | description 
--- | ---
[orxVECTOR](./orxVECTOR.md)  | [orxVECTOR](./orxVECTOR.md) / nil

* C signature:

```c
  orxVECTOR * orxSpawner_GetWorldPosition(const orxSPAWNER *_pstSpawner, orxVECTOR *_pvPosition)
```

---

### **`orxSPAWNER:getWorldRotation`**

* Signature:

```lua
r1 = getWorldRotation()
```

* Description:

> Get spawner world rotation

* Params:

* Returns:

type | description 
--- | ---
number | number \(radians\)

* C signature:

```c
  orxFLOAT  orxSpawner_GetWorldRotation(const orxSPAWNER *_pstSpawner)
```

---

### **`orxSPAWNER:getWorldScale`**

* Signature:

```lua
r1 = getWorldScale()
```

* Description:

> Gets spawner world scale

* Params:

* Returns:

type | description 
--- | ---
[orxVECTOR](./orxVECTOR.md)  | success / failure

* C signature:

```c
  orxVECTOR * orxSpawner_GetWorldScale(const orxSPAWNER *_pstSpawner, orxVECTOR *_pvScale)
```

---

### **`orxSPAWNER:increaseCount`**

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

### **`orxSPAWNER:isEnabled`**

* Signature:

```lua
r1 = isEnabled()
```

* Description:

> Is spawner enabled?

* Params:

* Returns:

type | description 
--- | ---
boolean | true if enabled, false otherwise

* C signature:

```c
  orxBOOL  orxSpawner_IsEnabled(const orxSPAWNER *_pstSpawner)
```

---

### **`orxSPAWNER:reset`**

* Signature:

```lua
reset()
```

* Description:

> Resets \(and disables\) a spawner (non-const self only)

* Params:

* Returns:

* C signature:

```c
  void  orxSpawner_Reset(orxSPAWNER *_pstSpawner)
```

---

### **`orxSPAWNER:setActiveObjectLimit`**

* Signature:

```lua
r1 = setActiveObjectLimit(activeobjectlimit)
```

* Description:

> Sets spawner active object limit (non-const self only)

* Params:

name | type | description 
--- | --- | ---
activeobjectlimit | integer | Active object limit, 0 for unlimited

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxSpawner_SetActiveObjectLimit(orxSPAWNER *_pstSpawner, orxU32 _u32ActiveObjectLimit)
```

---

### **`orxSPAWNER:setFlags`**

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

### **`orxSPAWNER:setNextWaveDelay`**

* Signature:

```lua
r1 = setNextWaveDelay(wavedelay)
```

* Description:

> Sets spawner next wave delay \(without affecting the normal wave delay\) (non-const self only)

* Params:

name | type | description 
--- | --- | ---
wavedelay | number | Delay before next wave / -1 for the current full wave delay

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxSpawner_SetNextWaveDelay(orxSPAWNER *_pstSpawner, orxFLOAT _fWaveDelay)
```

---

### **`orxSPAWNER:setObjectSpeed`**

* Signature:

```lua
r1 = setObjectSpeed(objectspeed)
```

* Description:

> Sets spawner object speed (non-const self only)

* Params:

name | type | description 
--- | --- | ---
objectspeed | [orxVECTOR\#](./orxVECTOR.md) | Speed to apply to every spawned object / nil to not apply any speed

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxSpawner_SetObjectSpeed(orxSPAWNER *_pstSpawner, const orxVECTOR *_pvObjectSpeed)
```

---

### **`orxSPAWNER:setOwner`**

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

### **`orxSPAWNER:setParent`**

* Signature:

```lua
r1 = setParent(parent)
```

* Description:

> Sets spawner parent (non-const self only)

* Params:

name | type | description 
--- | --- | ---
parent | void\* | Parent structure to set (object, spawner, camera or frame) / nil

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | orsSTATUS_SUCCESS / failure

* C signature:

```c
  orxSTATUS  orxSpawner_SetParent(orxSPAWNER *_pstSpawner, void *_pParent)
```

---

### **`orxSPAWNER:setPosition`**

* Signature:

```lua
r1 = setPosition(position)
```

* Description:

> Sets spawner position (non-const self only)

* Params:

name | type | description 
--- | --- | ---
position | [orxVECTOR\#](./orxVECTOR.md) | Spawner position

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxSpawner_SetPosition(orxSPAWNER *_pstSpawner, const orxVECTOR *_pvPosition)
```

---

### **`orxSPAWNER:setRotation`**

* Signature:

```lua
r1 = setRotation(rotation)
```

* Description:

> Sets spawner rotation (non-const self only)

* Params:

name | type | description 
--- | --- | ---
rotation | number | Spawner rotation (radians)

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxSpawner_SetRotation(orxSPAWNER *_pstSpawner, orxFLOAT _fRotation)
```

---

### **`orxSPAWNER:setScale`**

* Signature:

```lua
r1 = setScale(scale)
```

* Description:

> Sets spawner scale (non-const self only)

* Params:

name | type | description 
--- | --- | ---
scale | [orxVECTOR\#](./orxVECTOR.md) | Spawner scale vector

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxSpawner_SetScale(orxSPAWNER *_pstSpawner, const orxVECTOR *_pvScale)
```

---

### **`orxSPAWNER:setTotalObjectLimit`**

* Signature:

```lua
r1 = setTotalObjectLimit(totalobjectlimit)
```

* Description:

> Sets spawner total object limit (non-const self only)

* Params:

name | type | description 
--- | --- | ---
totalobjectlimit | integer | Total object limit, 0 for unlimited

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxSpawner_SetTotalObjectLimit(orxSPAWNER *_pstSpawner, orxU32 _u32TotalObjectLimit)
```

---

### **`orxSPAWNER:setWaveDelay`**

* Signature:

```lua
r1 = setWaveDelay(wavedelay)
```

* Description:

> Sets spawner wave delay (non-const self only)

* Params:

name | type | description 
--- | --- | ---
wavedelay | number | Delay between two waves / -1 for deactivating wave mode

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxSpawner_SetWaveDelay(orxSPAWNER *_pstSpawner, orxFLOAT _fWaveDelay)
```

---

### **`orxSPAWNER:setWaveSize`**

* Signature:

```lua
r1 = setWaveSize(wavesize)
```

* Description:

> Sets spawner wave size (non-const self only)

* Params:

name | type | description 
--- | --- | ---
wavesize | integer | Number of objects to spawn in a wave / 0 for deactivating wave mode

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxSpawner_SetWaveSize(orxSPAWNER *_pstSpawner, orxU32 _u32WaveSize)
```

---

### **`orxSPAWNER:spawn`**

* Signature:

```lua
r1 = spawn(number)
```

* Description:

> Spawns items (non-const self only)

* Params:

name | type | description 
--- | --- | ---
number | integer | Number of items to spawn, if orxU32_UNDEFINED, the spawner's wave size will be used instead

* Returns:

type | description 
--- | ---
integer | Number of spawned items

* C signature:

```c
  orxU32  orxSpawner_Spawn(orxSPAWNER *_pstSpawner, orxU32 _u32Number)
```

---

### **`orxSPAWNER:testAllFlags`**

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

### **`orxSPAWNER:testFlags`**

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

### **`orxSPAWNER:type`**

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

### **`orxSPAWNER:update`**

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

