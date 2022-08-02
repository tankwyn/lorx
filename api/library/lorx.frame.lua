---@meta

---@class lorx.frame
lorx.frame = {}

---
---Creates a frame
---
---@param _flags integer # Flags for created animation
---@return orxFRAME # Created orxFRAME / nil
function lorx.frame.create(_flags) end

---
---Exits from the frame module
---
function lorx.frame.exit() end

---
---Get ignore flag names (beware: result won't persist from one call to the other)
---
---@param _flags integer # Literal ignore flags
---@return string # Ignore flags names
function lorx.frame.getIgnoreFlagNames(_flags) end

---
---Get ignore flag values
---
---@param _flags string # Literal ignore flags
---@return integer # Ignore flags
function lorx.frame.getIgnoreFlagValues(_flags) end

---
---Inits the frame module
---
---@return orxSTATUS # success / failure
function lorx.frame.init() end

---
---Setups the frame module
---
function lorx.frame.setup() end

