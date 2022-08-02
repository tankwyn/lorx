---@meta

---@class lorx.locale
lorx.locale = {}

---
---Exits from the Locale Module
---
function lorx.locale.exit() end

---
---Gets current language
---
---@param _group string # Concerned group, nil for default/fallback one
---@return string # Current selected language
function lorx.locale.getCurrentLanguage(_group) end

---
---Gets key for the current language at the given index
---
---@param _keyindex integer # Index of the desired key
---@param _group string # Concerned group, nil for default/fallback one
---@return string # string if exist, nil otherwise
function lorx.locale.getKey(_keyindex, _group) end

---
---Gets key count for the current language
---
---@param _group string # Concerned group, nil for default/fallback one
---@return integer # Key count the current language if valid, 0 otherwise
function lorx.locale.getKeyCount(_group) end

---
---Gets language at the given index
---
---@param _languageindex integer # Index of the desired language
---@return string # string if exist, empty string otherwise
function lorx.locale.getLanguage(_languageindex) end

---
---Gets language count
---
---@return integer # Number of languages defined
function lorx.locale.getLanguageCount() end

---
---Reads a string in the current language for the given key
---
---@param _key string # Key name
---@param _group string # Concerned group, nil for default/fallback one
---@return string # The value
function lorx.locale.getString(_key, _group) end

---
---Has given language? (if not correctly defined, false will be returned)
---
---@param _language string # Concerned language
---@return boolean # true / false
function lorx.locale.hasLanguage(_language) end

---
---Has string for the given key?
---
---@param _key string # Key name
---@param _group string # Concerned group, nil for default/fallback one
---@return boolean # true / false
function lorx.locale.hasString(_key, _group) end

---
---Initializes the Locale Module
---
---@return orxSTATUS # success / failure
function lorx.locale.init() end

---
---Selects current working language
---
---@param _language string # Language to select
---@param _group string # Concerned group, nil for default/fallback one
---@return orxSTATUS # 
function lorx.locale.selectLanguage(_language, _group) end

---
---Writes a string in the current language for the given key
---
---@param _key string # Key name
---@param _value string # Value
---@param _group string # Concerned group, nil for default/fallback one
---@return orxSTATUS # success / failure
function lorx.locale.setString(_key, _value, _group) end

---
---Locale module setup
---
function lorx.locale.setup() end

