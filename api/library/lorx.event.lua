---@meta

---@class lorx.event
lorx.event = {}

---
---Exits from the event Module
---
function lorx.event.exit() end

---
---Initializes the event Module
---
---@return orxSTATUS # success / failure
function lorx.event.init() end

---
---Is currently sending an event?
---
---@return boolean # true / false
function lorx.event.isSending() end

---
---Sends a simple event
---
---@param _eventtype orxEVENT_TYPE # Event type
---@param _eventid string # Event ID
---@return orxSTATUS # success / failure
function lorx.event.sendShort(_eventtype, _eventid) end

---
---Event module setup
---
function lorx.event.setup() end

