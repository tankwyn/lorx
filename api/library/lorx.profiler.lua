---@meta

---@class lorx.profiler
lorx.profiler = {}

---
---Are marker push/pop operations enabled?
---
---@return boolean # true / false
function lorx.profiler.areMarkerOperationsEnabled() end

---
---Enables marker push/pop operations
---
---@param _enable boolean # Enable
function lorx.profiler.enableMarkerOperations(_enable) end

---
---
---
function lorx.profiler.exit() end

---
---Gets a marker ID given a name
---
---@param _name string # Name of the marker
---@return integer # Marker's ID / orxPROFILER_KS32_MARKER_ID_NONE
function lorx.profiler.getIDFromName(_name) end

---
---Gets the number of registered markers used on the queried thread
---
---@return integer # Number of registered markers
function lorx.profiler.getMarkerCount() end

---
---Gets the marker's maximum cumulated time
---
---@param _markerid integer # Concerned marker ID
---@return number # Marker's max cumulated time
function lorx.profiler.getMarkerMaxTime(_markerid) end

---
---Gets the marker's name
---
---@param _markerid integer # Concerned marker ID
---@return string # Marker's name
function lorx.profiler.getMarkerName(_markerid) end

---
---Gets the marker's push count
---
---@param _markerid integer # Concerned marker ID
---@return integer # Number of time the marker has been pushed since last reset
function lorx.profiler.getMarkerPushCount(_markerid) end

---
---Gets the marker's cumulated time
---
---@param _markerid integer # Concerned marker ID
---@return number # Marker's cumulated time
function lorx.profiler.getMarkerTime(_markerid) end

---
---Gets the maximum reset time
---
---@return number # Max reset time, in seconds
function lorx.profiler.getMaxResetTime() end

---
---Gets the next registered marker ID
---
---@param _markerid integer # ID of the current marker, orxPROFILER_KS32_MARKER_ID_NONE to get the first one
---@return integer # Next registered marker's ID / orxPROFILER_KS32_MARKER_ID_NONE if the current marker was the last one
function lorx.profiler.getNextMarkerID(_markerid) end

---
---Gets the ID of the next marker, sorted by their push time
---
---@param _markerid integer # ID of the current pushed marker, orxPROFILER_KS32_MARKER_ID_NONE to get the first one
---@return integer # Next registered marker's ID / orxPROFILER_KS32_MARKER_ID_NONE if the current marker was the last one
function lorx.profiler.getNextSortedMarkerID(_markerid) end

---
---Gets the time elapsed since last reset
---
---@return number # Time elapsed since the last reset, in seconds
function lorx.profiler.getResetTime() end

---
---Gets the uniquely pushed marker's depth, 1 being the depth of the top level
---
---@param _markerid integer # Concerned marker ID
---@return integer # Marker's push depth / 0 if this marker hasn't been uniquely pushed
function lorx.profiler.getUniqueMarkerDepth(_markerid) end

---
---Gets the uniquely pushed marker's start time
---
---@param _markerid integer # Concerned marker ID
---@return number # Marker's start time / 0.0
function lorx.profiler.getUniqueMarkerStartTime(_markerid) end

---
---Inits the Profiler module
---
---@return orxSTATUS # success / failure
function lorx.profiler.init() end

---
---Is the given marker valid? (Useful when storing markers in static variables and still allow normal hot restart)
---
---@param _markerid integer # ID of the marker to test
---@return boolean # true / false
function lorx.profiler.isMarkerIDValid(_markerid) end

---
---Is profiler paused?
---
---@return boolean # true / false
function lorx.profiler.isPaused() end

---
---Has the marker been pushed by a unique parent?
---
---@param _markerid integer # Concerned marker ID
---@return boolean # true / false
function lorx.profiler.isUniqueMarker(_markerid) end

---
---Pauses/unpauses the profiler
---
---@param _pause boolean # Pause
function lorx.profiler.pause(_pause) end

---
---Pops a marker (from the stack) and updates its cumulated time (using the last marker push time)
---
function lorx.profiler.popMarker() end

---
---Pushes a marker (on a stack) and starts a timer for it
---
---@param _markerid integer # ID of the marker to push
function lorx.profiler.pushMarker(_markerid) end

---
---Resets all markers (usually called at the end of the frame)
---
function lorx.profiler.resetAllMarkers() end

---
---Resets all maxima (usually called at a regular interval)
---
function lorx.profiler.resetAllMaxima() end

---
---Selects the query frame for all GetMarker* functions below, in number of frame elapsed from the last one
---
---@param _queryframe integer # Query frame, in number of frame elapsed since the last one (ie. 0 -> last frame, 1 -> frame before last, ...)
---@param _threadid integer # Concerned thread ID, if no data is found for this thread, failure is returned
---@return orxSTATUS # success / failure
function lorx.profiler.selectQueryFrame(_queryframe, _threadid) end

---
---
---
function lorx.profiler.setup() end

