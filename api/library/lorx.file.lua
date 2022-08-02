---@meta

---@class lorx.file
lorx.file = {}

---
---Deletes a file
---
---@param _filename string # Full file's path to delete
---@return orxSTATUS # success upon success, failure otherwise
function lorx.file.delete(_filename) end

---
---Checks if a file/directory exists
---
---@param _filename string # Concerned file/directory
---@return boolean # false if _zFileName doesn't exist, true otherwise
function lorx.file.exists(_filename) end

---
---Exits from the File Module
---
function lorx.file.exit() end

---
---Create a new orxFILE_INFO
---
---@param _s64Size integer # 
---@param _s64TimeStamp integer # 
---@param _u32Flags integer # 
---@param _hInternal orxHANDLE # 
---@param _zName string  # length-limited
---@param _zPattern string  # length-limited
---@param _zPath string  # length-limited
---@param _zFullName string  # length-limited
---@return orxFILE_INFO # The new instance
function lorx.file.fileInfo(_s64Size, _s64TimeStamp, _u32Flags, _hInternal, _zName, _zPattern, _zPath, _zFullName) end

---
---Starts a new file search: finds the first file/directory that will match to the given pattern (ex: /bin/foo*)
---
---@param _searchpattern string # Pattern used for file/directory search
---@return orxSTATUS # success / failure
---@return orxFILE_INFO # Information about the first file found
function lorx.file.findFirst(_searchpattern) end

---
---Gets current user's application save directory using linux separators (without trailing separator)
---
---@param _subpath string # Sub-path to append to the application save directory, nil for none
---@return string # Current user's application save directory, use it immediately or copy it as it will be modified by the next call to orxFile_GetHomeDirectory() or orxFile_GetApplicationSaveDirectory()
function lorx.file.getApplicationSaveDirectory(_subpath) end

---
---Gets current user's home directory using linux separators (without trailing separator)
---
---@param _subpath string # Sub-path to append to the home directory, nil for none
---@return string # Current user's home directory, use it immediately or copy it as will be modified by the next call to orxFile_GetHomeDirectory() or orxFile_GetApplicationSaveDirectory()
function lorx.file.getHomeDirectory(_subpath) end

---
---Retrieves a file/directory information
---
---@param _filename string # Concerned file/directory name
---@return orxSTATUS # success / failure
---@return orxFILE_INFO # Information of the file/directory
function lorx.file.getInfo(_filename) end

---
---Inits the File Module
---
---@return orxSTATUS # 
function lorx.file.init() end

---
---Makes a directory, works recursively if needed
---
---@param _name string # Name of the directory to make
---@return orxSTATUS # success / failure
function lorx.file.makeDirectory(_name) end

---
---Opens a file for later read or write operation
---
---@param _filename string # Full file's path to open
---@param _openflags integer # List of used flags when opened
---@return orxFILE # a File pointer (or nil if an error has occurred)
function lorx.file.open(_filename, _openflags) end

---
---Reads data from a file
---
---@param _readdata voidptr # Buffer that will contain read data
---@param _elemsize integer # Size of 1 element
---@param _nbelem integer # Number of elements
---@param _file orxFILE # Pointer to the file descriptor
---@return integer # Returns the number of read elements (not bytes)
function lorx.file.read(_readdata, _elemsize, _nbelem, _file) end

---
---Removes a file or an empty directory
---
---@param _filename string # Concerned file / directory
---@return orxSTATUS # success / failure
function lorx.file.remove(_filename) end

---
---
---
function lorx.file.setup() end

---
---Writes data to a file
---
---@param _datatowrite voidptr # (const) Buffer that contains the data to write
---@param _elemsize integer # Size of 1 element
---@param _nbelem integer # Number of elements
---@param _file orxFILE # Pointer to the file descriptor
---@return integer # Returns the number of written elements (not bytes)
function lorx.file.write(_datatowrite, _elemsize, _nbelem, _file) end

