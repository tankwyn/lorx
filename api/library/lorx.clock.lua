---@meta

---@class lorx.clock
lorx.clock = {}

---
---Add a global timer function (ie. using the main core clock)
---
---@param _timercb lorxCLOCK_CALLBACK # Concerned timer callback
---@param _delay number # Timer's delay between 2 calls, must be strictly positive
---@param _repetition integer # Number of times this timer should be called before removed, -1 for infinite
---@return orxSTATUS # success / failure
function lorx.clock.addGlobalTimer(_timercb, _delay, _repetition) end

---
---Creates a clock
---
---@param _ticksize number # Tick size for the clock (in seconds)
---@return orxCLOCK # orxCLOCK / nil
function lorx.clock.create(_ticksize) end

---
---Creates a clock from config
---
---@param _configid string # Config ID
---@return orxCLOCK # orxCLOCK / nil
function lorx.clock.createFromConfig(_configid) end

---
---Exits from the clock module
---
function lorx.clock.exit() end

---
---Gets clock given its name
---
---@param _name string # Clock name
---@return orxCLOCK # orxCLOCK / nil
function lorx.clock.get(_name) end

---
---Gets clock from its info
---
---@param _clockinfo orxCLOCK_INFO # (const) Concerned clock info
---@return orxCLOCK # orxCLOCK / nil
function lorx.clock.getFromInfo(_clockinfo) end

---
---Inits the clock module
---
---@return orxSTATUS # success / failure
function lorx.clock.init() end

---
---Removes a global timer function (ie. from the main core clock)
---
---@param _timercb lorxCLOCK_CALLBACK # Concerned timer callback
---@param _delay number # Timer's delay between 2 calls, must be strictly positive
---@return orxSTATUS # success / failure
function lorx.clock.removeGlobalTimer(_timercb, _delay) end

---
---Resyncs all clocks (accumulated DT => 0)
---
---@return orxSTATUS # success / failure
function lorx.clock.resyncAll() end

---
---Clock module setup
---
function lorx.clock.setup() end

---
---Updates the clock system
---
---@return orxSTATUS # success / failure
function lorx.clock.update() end

