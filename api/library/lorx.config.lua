---@meta

---@class lorx.config
lorx.config = {}

---
---Appends string values to a config list (will create a new entry if not already present)
---
---@param _key string # Key name
---@param _value string[] # Values
---@param _number integer # Number of values
---@return orxSTATUS # success / failure
function lorx.config.appendListString(_key, _value, _number) end

---
---Clear all config info (set the lorx.tmpcfgclear callback to filter)
---
---@param _func lorxCFGCLEAR_CALLBACK # Callback used to filter sections/keys to clear. If null, all sections/keys will be cleared
---@return orxSTATUS # success / failure
function lorx.config.clear(_func) end

---
---Clears section
---
---@param _sectionname string # Section name to clear
---@return orxSTATUS # 
function lorx.config.clearSection(_sectionname) end

---
---Clears a value from current selected section
---
---@param _key string # Key name
---@return orxSTATUS # success / failure
function lorx.config.clearValue(_key) end

---
---Copies a file with optional encryption
---
---@param _dstfilename string # Name of the destination file
---@param _srcfilename string # Name of the source file
---@param _encryptionkey string # Encryption key to use when writing destination file, nil for no encryption
---@return orxSTATUS # success / failure
function lorx.config.copyFile(_dstfilename, _srcfilename, _encryptionkey) end

---
---Duplicates a raw value (string) from config
---
---@param _key string # Key name
---@return string # The value. If non-null, needs to be deleted by the caller with orxString_Delete()
function lorx.config.duplicateRawValue(_key) end

---
---Exits from the Config Module
---
function lorx.config.exit() end

---
---Reads a boolean value from config (will take a random value if a list is provided for this key)
---
---@param _key string # Key name
---@return boolean # The value
function lorx.config.getBool(_key) end

---
---Gets current working section
---
---@return string # Current selected section
function lorx.config.getCurrentSection() end

---
---Gets encryption key
---
---@return string # Current encryption key / empty string
function lorx.config.getEncryptionKey() end

---
---Reads a float value from config (will take a random value if a list is provided for this key)
---
---@param _key string # Key name
---@return number # The value
function lorx.config.getFloat(_key) end

---
---Gets key for the current section at the given index
---
---@param _keyindex integer # Index of the desired key
---@return string # string if exist, empty string otherwise
function lorx.config.getKey(_keyindex) end

---
---Gets key count of the current section
---
---@return integer # Key count of the current section if valid, 0 otherwise
function lorx.config.getKeyCount() end

---
---Reads a boolean value from config list
---
---@param _key string # Key name
---@param _listindex integer # Index of desired item in list / -1 for random
---@return boolean # The value
function lorx.config.getListBool(_key, _listindex) end

---
---Gets list count for a given key
---
---@param _key string # Key name
---@return integer # List count if it's a valid list, 0 otherwise
function lorx.config.getListCount(_key) end

---
---Reads a float value from config list
---
---@param _key string # Key name
---@param _listindex integer # Index of desired item in list / -1 for random
---@return number # The value
function lorx.config.getListFloat(_key, _listindex) end

---
---Reads a signed integer value from config list
---
---@param _key string # Key name
---@param _listindex integer # Index of desired item in list / -1 for random
---@return integer # The value
function lorx.config.getListS32(_key, _listindex) end

---
---Reads a signed integer value from config list
---
---@param _key string # Key name
---@param _listindex integer # Index of desired item in list / -1 for random
---@return integer # The value
function lorx.config.getListS64(_key, _listindex) end

---
---Reads a string value from config list
---
---@param _key string # Key name
---@param _listindex integer # Index of desired item in list / -1 for random
---@return string # The value
function lorx.config.getListString(_key, _listindex) end

---
---Reads an unsigned integer value from config list
---
---@param _key string # Key name
---@param _listindex integer # Index of desired item in list / -1 for random
---@return integer # The value
function lorx.config.getListU32(_key, _listindex) end

---
---Reads an unsigned integer value from config list
---
---@param _key string # Key name
---@param _listindex integer # Index of desired item in list / -1 for random
---@return integer # The value
function lorx.config.getListU64(_key, _listindex) end

---
---Reads a vector value from config list
---
---@param _key string # Key name
---@param _listindex integer # Index of desired item in list / -1 for random
---@return orxVECTOR # The value
function lorx.config.getListVector(_key, _listindex) end

---
---Gets config main file name
---
---@return string # Config main file name / empty string
function lorx.config.getMainFileName() end

---
---Gets section origin (ie. the file where it was defined for the first time or orxSTRING_EMPTY if not defined via a file)
---
---@param _sectionname string # Concerned section name
---@return string # string if found, empty string otherwise
function lorx.config.getOrigin(_sectionname) end

---
---Gets section origin ID (ie. the file where it was defined for the first time or orxSTRING_EMPTY if not defined via a file)
---
---@param _sectionname string # Concerned section name
---@return integer # String ID if found, orxSTRINGID_UNDEFINED otherwise
function lorx.config.getOriginID(_sectionname) end

---
---Gets a section's parent
---
---@param _sectionname string # Concerned section
---@return string # Section's parent name if set or empty string if no parent has been forced, nil otherwise
function lorx.config.getParent(_sectionname) end

---
---Reads a signed integer value from config (will take a random value if a list is provided for this key)
---
---@param _key string # Key name
---@return integer # The value
function lorx.config.getS32(_key) end

---
---Reads a signed integer value from config (will take a random value if a list is provided for this key)
---
---@param _key string # Key name
---@return integer # The value
function lorx.config.getS64(_key) end

---
---Gets section at the given index
---
---@param _sectionindex integer # Index of the desired section
---@return string # string if exist, empty string otherwise
function lorx.config.getSection(_sectionindex) end

---
---Gets section count
---
---@return integer # Section count
function lorx.config.getSectionCount() end

---
---Reads a string value from config (will take a random value if a list is provided for this key)
---
---@param _key string # Key name
---@return string # The value
function lorx.config.getString(_key) end

---
---Reads an unsigned integer value from config (will take a random value if a list is provided for this key)
---
---@param _key string # Key name
---@return integer # The value
function lorx.config.getU32(_key) end

---
---Reads an unsigned integer value from config (will take a random value if a list is provided for this key)
---
---@param _key string # Key name
---@return integer # The value
function lorx.config.getU64(_key) end

---
---Gets a value's source section (ie. the section where the value is explicitly defined), only considering section inheritance, not local one
---
---@param _key string # Key name
---@return string # Name of the section that explicitly contains the value, empty string if not found
function lorx.config.getValueSource(_key) end

---
---Reads a vector value from config (will take a random value if a list is provided for this key)
---
---@param _key string # Key name
---@return orxVECTOR # The value if valid, nil otherwise
function lorx.config.getVector(_key) end

---
---Has section for the given section name?
---
---@param _sectionname string # Section name
---@return boolean # true / false
function lorx.config.hasSection(_sectionname) end

---
---Has specified value for the given key?
---
---@param _key string # Key name
---@return boolean # true / false
function lorx.config.hasValue(_key) end

---
---Initializes the Config Module
---
---@return orxSTATUS # success / failure
function lorx.config.init() end

---
---Is this a command value? (ie. lazily evaluated command: %...)
---
---@param _key string # Key name
---@return boolean # true / false
function lorx.config.isCommandValue(_key) end

---
---Is this value dynamic? (ie. random and/or a list or command)
---
---@param _key string # Key name
---@return boolean # true / false
function lorx.config.isDynamicValue(_key) end

---
---Is this value inherited from another one (either locally or at section level)?
---
---@param _key string # Key name
---@return boolean # true / false
function lorx.config.isInheritedValue(_key) end

---
---Is value a list for the given key?
---
---@param _key string # Key name
---@return boolean # true / false
function lorx.config.isList(_key) end

---
---Is this value locally inherited from another one (ie. with a Value = @... syntax)?
---
---@param _key string # Key name
---@return boolean # true / false
function lorx.config.isLocallyInheritedValue(_key) end

---
---Is this value random? (ie. using '~' character, within or without a list)
---
---@param _key string # Key name
---@return boolean # true / false
function lorx.config.isRandomValue(_key) end

---
---Loads config file from source
---
---@param _filename string # File name
---@return orxSTATUS # success / failure
function lorx.config.load(_filename) end

---
---Loads config data from a memory buffer. NB: the buffer will be modified during processing!
---
---@param _buffer string  # length-limitedBuffer to process, will be modified during processing
---@param _buffersize integer # Size of the buffer
---@return orxSTATUS # success / failure
function lorx.config.loadFromMemory(_buffer, _buffersize) end

---
---Merges multiple files into a single one, with optional encryption
---
---@param _dstfilename string # Name of the destination file
---@param _srcfilename string[] # List of the names of the source files
---@param _number integer # Number of source file names
---@param _encryptionkey string # Encryption key to use when writing destination file, nil for no encryption
---@return orxSTATUS # success / failure
function lorx.config.mergeFiles(_dstfilename, _srcfilename, _number, _encryptionkey) end

---
---Pops last section from section stack
---
---@return orxSTATUS # success / failure
function lorx.config.popSection() end

---
---Protects/unprotects a section from deletion (content might still be changed or deleted, but the section itself will resist delete/clear calls)
---
---@param _sectionname string # Section name to protect
---@param _protect boolean # true for protecting the section, false to remove the protection
---@return orxSTATUS # success / failure
function lorx.config.protectSection(_sectionname, _protect) end

---
---Pushes a section (storing the current one on section stack)
---
---@param _sectionname string # Section name to push
---@return orxSTATUS # success / failure
function lorx.config.pushSection(_sectionname) end

---
---Reloads config files from history
---
---@return orxSTATUS # success / failure
function lorx.config.reloadHistory() end

---
---Renames a section
---
---@param _sectionname string # Section to rename
---@param _newsectionname string # New name for the section
---@return orxSTATUS # success / failure
function lorx.config.renameSection(_sectionname, _newsectionname) end

---
---Save all config info (set the lorx.tmpcfgsave callback to filter)
---
---@param _filename string # File name, if null or empty the default file name will be used
---@param _useencryption boolean # Use file encryption to make it human non-readable?
---@param _func lorxCFGSAVE_CALLBACK # Callback used to filter sections/keys to save. If null, all sections/keys will be saved
---@return orxSTATUS # success / failure
function lorx.config.save(_filename, _useencryption, _func) end

---
---Selects current working section
---
---@param _sectionname string # Section name to select
---@return orxSTATUS # success / failure
function lorx.config.selectSection(_sectionname) end

---
---Sets config base name
---
---@param _basename string # Base name used for default config file
---@return orxSTATUS # success / failure
function lorx.config.setBaseName(_basename) end

---
---Writes a boolean value to config
---
---@param _key string # Key name
---@param _value boolean # Value
---@return orxSTATUS # success / failure
function lorx.config.setBool(_key, _value) end

---
---Sets default parent for all sections
---
---@param _sectionname string # Section name that will be used as an implicit default parent section for all config sections, if nil is provided, default parent will be removed
---@return orxSTATUS # success / failure
function lorx.config.setDefaultParent(_sectionname) end

---
---Sets encryption key
---
---@param _encryptionkey string # Encryption key to use, nil to clear
---@return orxSTATUS # success / failure
function lorx.config.setEncryptionKey(_encryptionkey) end

---
---Writes a float value to config
---
---@param _key string # Key name
---@param _value number # Value
---@return orxSTATUS # success / failure
function lorx.config.setFloat(_key, _value) end

---
---Writes a list of string values to config
---
---@param _key string # Key name
---@param _value string[] # Values
---@param _number integer # Number of values
---@return orxSTATUS # success / failure
function lorx.config.setListString(_key, _value, _number) end

---
---Sets a section's parent
---
---@param _sectionname string # Concerned section, if the section doesn't exist, it will be created
---@param _parentname string # Parent section's name, if the section doesn't exist, it will be created, if nil is provided, the former parent will be erased, if empty string is provided, "no default parent" will be enforced
---@return orxSTATUS # success / failure
function lorx.config.setParent(_sectionname, _parentname) end

---
---Writes a signed integer value to config
---
---@param _key string # Key name
---@param _value integer # Value
---@return orxSTATUS # success / failure
function lorx.config.setS32(_key, _value) end

---
---Writes a signed integer value to config
---
---@param _key string # Key name
---@param _value integer # Value
---@return orxSTATUS # success / failure
function lorx.config.setS64(_key, _value) end

---
---Writes a string value to config
---
---@param _key string # Key name
---@param _value string # Value
---@return orxSTATUS # success / failure
function lorx.config.setString(_key, _value) end

---
---Writes a string value to config, in block mode
---
---@param _key string # Key name
---@param _value string # Value to write in block mode
---@return orxSTATUS # success / failure
function lorx.config.setStringBlock(_key, _value) end

---
---Writes an unsigned integer value to config
---
---@param _key string # Key name
---@param _value integer # Value
---@return orxSTATUS # success / failure
function lorx.config.setU32(_key, _value) end

---
---Writes an unsigned integer value to config
---
---@param _key string # Key name
---@param _value integer # Value
---@return orxSTATUS # success / failure
function lorx.config.setU64(_key, _value) end

---
---Writes a vector value to config
---
---@param _key string # Key name
---@param _value orxVECTOR # (const) Value
---@return orxSTATUS # success / failure
function lorx.config.setVector(_key, _value) end

---
---Config module setup
---
function lorx.config.setup() end

