# module profiler

## functions

### **`areMarkerOperationsEnabled`**

* Signature:

```lua
r1 = areMarkerOperationsEnabled()
```

* Description:

> Are marker push/pop operations enabled?

* Params:

* Returns:

type | description 
--- | ---
boolean | true / false

* C signature:

```c
  orxBOOL  orxProfiler_AreMarkerOperationsEnabled()
```

---

### **`enableMarkerOperations`**

* Signature:

```lua
enableMarkerOperations(enable)
```

* Description:

> Enables marker push/pop operations

* Params:

name | type | description 
--- | --- | ---
enable | boolean | Enable

* Returns:

* C signature:

```c
  void  orxProfiler_EnableMarkerOperations(orxBOOL _bEnable)
```

---

### **`exit`**

* Signature:

```lua
exit()
```

* Description:

> 

* Params:

* Returns:

* C signature:

```c
  void  orxProfiler_Exit()
```

---

### **`getIDFromName`**

* Signature:

```lua
r1 = getIDFromName(name)
```

* Description:

> Gets a marker ID given a name

* Params:

name | type | description 
--- | --- | ---
name | string | Name of the marker

* Returns:

type | description 
--- | ---
integer | Marker's ID / [orxPROFILER_KS32_MARKER_ID_NONE](./constants.md#orxprofiler_ks32_marker_id_none) 

* C signature:

```c
  orxS32  orxProfiler_GetIDFromName(const orxSTRING _zName)
```

---

### **`getMarkerCount`**

* Signature:

```lua
r1 = getMarkerCount()
```

* Description:

> Gets the number of registered markers used on the queried thread

* Params:

* Returns:

type | description 
--- | ---
integer | Number of registered markers

* C signature:

```c
  orxS32  orxProfiler_GetMarkerCount()
```

---

### **`getMarkerMaxTime`**

* Signature:

```lua
r1 = getMarkerMaxTime(markerid)
```

* Description:

> Gets the marker's maximum cumulated time

* Params:

name | type | description 
--- | --- | ---
markerid | integer | Concerned marker ID

* Returns:

type | description 
--- | ---
number | Marker's max cumulated time

* C signature:

```c
  orxDOUBLE  orxProfiler_GetMarkerMaxTime(orxS32 _s32MarkerID)
```

---

### **`getMarkerName`**

* Signature:

```lua
r1 = getMarkerName(markerid)
```

* Description:

> Gets the marker's name

* Params:

name | type | description 
--- | --- | ---
markerid | integer | Concerned marker ID

* Returns:

type | description 
--- | ---
string | Marker's name

* C signature:

```c
  const orxSTRING  orxProfiler_GetMarkerName(orxS32 _s32MarkerID)
```

---

### **`getMarkerPushCount`**

* Signature:

```lua
r1 = getMarkerPushCount(markerid)
```

* Description:

> Gets the marker's push count

* Params:

name | type | description 
--- | --- | ---
markerid | integer | Concerned marker ID

* Returns:

type | description 
--- | ---
integer | Number of time the marker has been pushed since last reset

* C signature:

```c
  orxU32  orxProfiler_GetMarkerPushCount(orxS32 _s32MarkerID)
```

---

### **`getMarkerTime`**

* Signature:

```lua
r1 = getMarkerTime(markerid)
```

* Description:

> Gets the marker's cumulated time

* Params:

name | type | description 
--- | --- | ---
markerid | integer | Concerned marker ID

* Returns:

type | description 
--- | ---
number | Marker's cumulated time

* C signature:

```c
  orxDOUBLE  orxProfiler_GetMarkerTime(orxS32 _s32MarkerID)
```

---

### **`getMaxResetTime`**

* Signature:

```lua
r1 = getMaxResetTime()
```

* Description:

> Gets the maximum reset time

* Params:

* Returns:

type | description 
--- | ---
number | Max reset time, in seconds

* C signature:

```c
  orxDOUBLE  orxProfiler_GetMaxResetTime()
```

---

### **`getNextMarkerID`**

* Signature:

```lua
r1 = getNextMarkerID(markerid)
```

* Description:

> Gets the next registered marker ID

* Params:

name | type | description 
--- | --- | ---
markerid | integer | ID of the current marker, [orxPROFILER_KS32_MARKER_ID_NONE](./constants.md#orxprofiler_ks32_marker_id_none) to get the first one

* Returns:

type | description 
--- | ---
integer | Next registered marker's ID / [orxPROFILER_KS32_MARKER_ID_NONE](./constants.md#orxprofiler_ks32_marker_id_none) if the current marker was the last one

* C signature:

```c
  orxS32  orxProfiler_GetNextMarkerID(orxS32 _s32MarkerID)
```

---

### **`getNextSortedMarkerID`**

* Signature:

```lua
r1 = getNextSortedMarkerID(markerid)
```

* Description:

> Gets the ID of the next marker, sorted by their push time

* Params:

name | type | description 
--- | --- | ---
markerid | integer | ID of the current pushed marker, [orxPROFILER_KS32_MARKER_ID_NONE](./constants.md#orxprofiler_ks32_marker_id_none) to get the first one

* Returns:

type | description 
--- | ---
integer | Next registered marker's ID / [orxPROFILER_KS32_MARKER_ID_NONE](./constants.md#orxprofiler_ks32_marker_id_none) if the current marker was the last one

* C signature:

```c
  orxS32  orxProfiler_GetNextSortedMarkerID(orxS32 _s32MarkerID)
```

---

### **`getResetTime`**

* Signature:

```lua
r1 = getResetTime()
```

* Description:

> Gets the time elapsed since last reset

* Params:

* Returns:

type | description 
--- | ---
number | Time elapsed since the last reset, in seconds

* C signature:

```c
  orxDOUBLE  orxProfiler_GetResetTime()
```

---

### **`getUniqueMarkerDepth`**

* Signature:

```lua
r1 = getUniqueMarkerDepth(markerid)
```

* Description:

> Gets the uniquely pushed marker's depth, 1 being the depth of the top level

* Params:

name | type | description 
--- | --- | ---
markerid | integer | Concerned marker ID

* Returns:

type | description 
--- | ---
integer | Marker's push depth / 0 if this marker hasn't been uniquely pushed

* C signature:

```c
  orxU32  orxProfiler_GetUniqueMarkerDepth(orxS32 _s32MarkerID)
```

---

### **`getUniqueMarkerStartTime`**

* Signature:

```lua
r1 = getUniqueMarkerStartTime(markerid)
```

* Description:

> Gets the uniquely pushed marker's start time

* Params:

name | type | description 
--- | --- | ---
markerid | integer | Concerned marker ID

* Returns:

type | description 
--- | ---
number | Marker's start time / 0.0

* C signature:

```c
  orxDOUBLE  orxProfiler_GetUniqueMarkerStartTime(orxS32 _s32MarkerID)
```

---

### **`init`**

* Signature:

```lua
r1 = init()
```

* Description:

> Inits the Profiler module

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxProfiler_Init()
```

---

### **`isMarkerIDValid`**

* Signature:

```lua
r1 = isMarkerIDValid(markerid)
```

* Description:

> Is the given marker valid? \(Useful when storing markers in static variables and still allow normal hot restart\)

* Params:

name | type | description 
--- | --- | ---
markerid | integer | ID of the marker to test

* Returns:

type | description 
--- | ---
boolean | true / false

* C signature:

```c
  orxBOOL  orxProfiler_IsMarkerIDValid(orxS32 _s32MarkerID)
```

---

### **`isPaused`**

* Signature:

```lua
r1 = isPaused()
```

* Description:

> Is profiler paused?

* Params:

* Returns:

type | description 
--- | ---
boolean | true / false

* C signature:

```c
  orxBOOL  orxProfiler_IsPaused()
```

---

### **`isUniqueMarker`**

* Signature:

```lua
r1 = isUniqueMarker(markerid)
```

* Description:

> Has the marker been pushed by a unique parent?

* Params:

name | type | description 
--- | --- | ---
markerid | integer | Concerned marker ID

* Returns:

type | description 
--- | ---
boolean | true / false

* C signature:

```c
  orxBOOL  orxProfiler_IsUniqueMarker(orxS32 _s32MarkerID)
```

---

### **`pause`**

* Signature:

```lua
pause(pause)
```

* Description:

> Pauses/unpauses the profiler

* Params:

name | type | description 
--- | --- | ---
pause | boolean | Pause

* Returns:

* C signature:

```c
  void  orxProfiler_Pause(orxBOOL _bPause)
```

---

### **`popMarker`**

* Signature:

```lua
popMarker()
```

* Description:

> Pops a marker \(from the stack\) and updates its cumulated time \(using the last marker push time\)

* Params:

* Returns:

* C signature:

```c
  void  orxProfiler_PopMarker()
```

---

### **`pushMarker`**

* Signature:

```lua
pushMarker(markerid)
```

* Description:

> Pushes a marker \(on a stack\) and starts a timer for it

* Params:

name | type | description 
--- | --- | ---
markerid | integer | ID of the marker to push

* Returns:

* C signature:

```c
  void  orxProfiler_PushMarker(orxS32 _s32MarkerID)
```

---

### **`resetAllMarkers`**

* Signature:

```lua
resetAllMarkers()
```

* Description:

> Resets all markers \(usually called at the end of the frame\)

* Params:

* Returns:

* C signature:

```c
  void  orxProfiler_ResetAllMarkers()
```

---

### **`resetAllMaxima`**

* Signature:

```lua
resetAllMaxima()
```

* Description:

> Resets all maxima \(usually called at a regular interval\)

* Params:

* Returns:

* C signature:

```c
  void  orxProfiler_ResetAllMaxima()
```

---

### **`selectQueryFrame`**

* Signature:

```lua
r1 = selectQueryFrame(queryframe, threadid)
```

* Description:

> Selects the query frame for all GetMarker\* functions below, in number of frame elapsed from the last one

* Params:

name | type | description 
--- | --- | ---
queryframe | integer | Query frame, in number of frame elapsed since the last one \(ie. 0 -\> last frame, 1 -\> frame before last, ...\)
threadid | integer | Concerned thread ID, if no data is found for this thread, failure is returned

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxProfiler_SelectQueryFrame(orxU32 _u32QueryFrame, orxU32 _u32ThreadID)
```

---

### **`setup`**

* Signature:

```lua
setup()
```

* Description:

> 

* Params:

* Returns:

* C signature:

```c
  void  orxProfiler_Setup()
```

---

