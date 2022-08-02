---@meta

---@class lorx.timeline
lorx.timeline = {}

---
---Clears cache (if any TimeLine track is still in active use, it'll remain in memory until not referenced anymore)
---
---@return orxSTATUS # success / failure
function lorx.timeline.clearCache() end

---
---Creates an empty TimeLine
---
---@return orxTIMELINE # orxTIMELINE / nil
function lorx.timeline.create() end

---
---Exits from the TimeLine module
---
function lorx.timeline.exit() end

---
---Gets a track duration using its config ID
---
---@param _trackid string # Config ID of the concerned track
---@return number # Duration if found, -orxFLOAT_1 otherwise
function lorx.timeline.getTrackDuration(_trackid) end

---
---Inits the TimeLine module
---
---@return orxSTATUS # success / failure
function lorx.timeline.init() end

---
---TimeLine module setup
---
function lorx.timeline.setup() end

