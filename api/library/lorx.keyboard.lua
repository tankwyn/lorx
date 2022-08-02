---@meta

---@class lorx.keyboard
lorx.keyboard = {}

---
---Empties the keyboard buffer (both keys and chars)
---
function lorx.keyboard.clearBuffer() end

---
---Exits from the keyboard module
---
function lorx.keyboard.exit() end

---
---Gets key display name, layout-dependent
---
---@param _key orxKEYBOARD_KEY # Concerned key
---@return string # UTF-8 encoded key's name if valid, empty string otherwise
function lorx.keyboard.getKeyDisplayName(_key) end

---
---Gets key literal name
---
---@param _key orxKEYBOARD_KEY # Concerned key
---@return string # Key's name
function lorx.keyboard.getKeyName(_key) end

---
---Inits the keyboard module
---
---@return orxSTATUS # 
function lorx.keyboard.init() end

---
---Is key pressed?
---
---@param _key orxKEYBOARD_KEY # Key to check
---@return boolean # true if pressed / false otherwise
function lorx.keyboard.isKeyPressed(_key) end

---
---Gets the next key from the keyboard buffer and removes it from there
---
---@return orxKEYBOARD_KEY # orxKEYBOARD_KEY, orxKEYBOARD_KEY_NONE if the buffer is empty
function lorx.keyboard.readKey() end

---
---Gets the next UTF-8 encoded string from the keyboard buffer and removes it from there
---
---@return string # UTF-8 encoded string
function lorx.keyboard.readString() end

---
---Keyboard module setup
---
function lorx.keyboard.setup() end

---
---Show/Hide the virtual keyboard
---
---@param _show boolean # Show/hide virtual keyboard
---@return orxSTATUS # success if supported by platform, failure otherwise
function lorx.keyboard.show(_show) end

