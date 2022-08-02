---@meta

---@class lorx.string
lorx.string = {}

---
---Compare two strings, case sensitive. If the first one is smaller than the second it returns -1, 1 if the second one is bigger than the first, and 0 if they are equals
---
---@param _string1 string # First String to compare
---@param _string2 string # Second string to compare
---@return integer # -1, 0 or 1 as indicated in the description.
function lorx.string.compare(_string1, _string2) end

---
---Duplicate a string.
---
---@param _srcstring string # String to duplicate.
---@return string # Duplicated string.
function lorx.string.duplicate(_srcstring) end

---
---Exits from the structure module
---
function lorx.string.exit() end

---
---Extracts the base (2, 8, 10 or 16) from a literal number
---
---@param _string string # String from which to extract the base
---@return integer # Base or the numerical value, defaults to 10 (decimal) when no prefix is found or the literal value couldn't be identified
---@return string # If non null, will contain the remaining literal number, right after the base prefix (0x, 0b or 0)
function lorx.string.extractBase(_string) end

---
---Returns the number of valid unicode characters (UTF-8) in the string (for ASCII string, it will be the same result as orxString_GetLength())
---
---@param _string string # Concerned string
---@return integer # Number of valid unicode characters contained in the string, orxU32_UNDEFINED for an invalid UTF-8 string
function lorx.string.getCharacterCount(_string) end

---
---Gets the extension from a file name
---
---@param _filename string # Concerned file name
---@return string # Extension if exists, empty string otherwise
function lorx.string.getExtension(_filename) end

---
---Returns the code of the first character of the UTF-8 string
---
---@param _string string # Concerned string
---@return integer # Code of the first UTF-8 character of the string, orxU32_UNDEFINED if it's an invalid character
---@return string # If non null, will contain the remaining string after the first UTF-8 character
function lorx.string.getFirstCharacterCodePoint(_string) end

---
---Gets a string from an ID (it should have already been stored internally with a call to orxString_GetID)
---
---@param _id integer # Concerned string ID
---@return string # string if ID's found, empty string otherwise
function lorx.string.getFromID(_id) end

---
---Gets a string's ID (and stores the string internally to prevent duplication)
---
---@param _string string # Concerned string
---@return integer # String's ID
function lorx.string.getID(_string) end

---
---Returns the number of orxCHAR in the string (for non-ASCII UTF-8 string, it won't be the actual number of unicode characters)
---
---@param _string string # String used for length computation
---@return integer # Length of the string (doesn't count final orxCHAR_NULL)
function lorx.string.getLength(_string) end

---
---Gets the UTF-8 encoding length of given character
---
---@param _charactercodepoint integer # Concerned character code
---@return integer # Encoding length in UTF-8 for given character if valid, orxU32_UNDEFINED otherwise
function lorx.string.getUTF8CharacterLength(_charactercodepoint) end

---
---Gets a string's ID (aka hash), without storing the string internally
---
---@param _string string # Concerned string
---@return integer # String's ID/hash
function lorx.string.hash(_string) end

---
---Compare two strings, case insensitive. If the first one is smaller than the second, it returns -1, If the second one is bigger than the first, and 0 if they are equals
---
---@param _string1 string # First String to compare
---@param _string2 string # Second string to compare
---@return integer # -1, 0 or 1 as indicated in the description.
function lorx.string.iCompare(_string1, _string2) end

---
---Initializess the structure module
---
---@return orxSTATUS # success / failure
function lorx.string.init() end

---
---Tells if a character is ASCII from its ID
---
---@param _charactercodepoint integer # Concerned character code
---@return boolean # true is it's a non-extended ASCII character, false otherwise
function lorx.string.isCharacterASCII(_charactercodepoint) end

---
---Tells if a character is alpha-numeric from its ID
---
---@param _charactercodepoint integer # Concerned character code
---@return boolean # true is it's a non-extended ASCII alpha-numerical character, false otherwise
function lorx.string.isCharacterAlphaNumeric(_charactercodepoint) end

---
---Compare N first character from two strings, case sensitive. If the first one is smaller than the second it returns -1, 1 if the second one is bigger than the first and 0 if they are equals.
---
---@param _string1 string # First String to compare
---@param _string2 string # Second string to compare
---@param _charnumber integer # Number of character to compare
---@return integer # -1, 0 or 1 as indicated in the description.
function lorx.string.nCompare(_string1, _string2, _charnumber) end

---
---Gets a string's ID (aka hash), without storing the string internally
---
---@param _string string # Concerned string
---@param _charnumber integer # Number of character to process, should be <= orxString_GetLength(_zString)
---@return integer # String's ID/hash
function lorx.string.nHash(_string, _charnumber) end

---
---Compare N first character from two strings, case insensitive. If the first one is smaller than the second, it returns -1, If the second one is bigger than the first, and 0 if they are equals.
---
---@param _string1 string # First String to compare
---@param _string2 string # Second string to compare
---@param _charnumber integer # Number of character to compare
---@return integer # -1, 0 or 1 as indicated in the description.
function lorx.string.nICompare(_string1, _string2, _charnumber) end

---
---Scans a formated string from a memory buffer
---
---@param _string string # String to scan
---@param _format string # Format string
---@return integer # The number of scanned items
function lorx.string.scan(_string, _format) end

---
---Returns the first occurrence of _cChar in _zString
---
---@param _string string # String to analyze
---@param _char string # The character to find
---@return string # The pointer of the first occurrence of _cChar, or nil if not found
function lorx.string.searchChar(_string, _char) end

---
---Returns the first occurrence of _cChar in _zString
---
---@param _string string # String to analyze
---@param _char string # The character to find
---@param _position integer # Search begin position
---@return integer # The index of the next occurrence of requested character, starting at given position / -1 if not found
function lorx.string.searchCharIndex(_string, _char, _position) end

---
---Returns the first occurrence of _zString2 in _zString1
---
---@param _string1 string # String to analyze
---@param _string2 string # String that must be inside _zString1
---@return string # The pointer of the first occurrence of _zString2, or nil if not found
function lorx.string.searchString(_string1, _string2) end

---
---Structure module setup
---
function lorx.string.setup() end

---
---Skips path
---
---@param _string string # Concerned string
---@return string # Sub string located after all non-terminal directory separators
function lorx.string.skipPath(_string) end

---
---Skips all white spaces
---
---@param _string string # Concerned string
---@return string # Sub string located after all leading white spaces, including EOL characters
function lorx.string.skipWhiteSpaces(_string) end

---
---Stores a string internally: equivalent to an optimized call to orxString_GetFromID(orxString_GetID(_zString))
---
---@param _string string # Concerned string
---@return string # Stored string
function lorx.string.store(_string) end

---
---Convert a string to a boolean
---
---@param _string string # String To convert
---@return orxSTATUS # success / failure
---@return boolean # Converted value
---@return string # If non null, will contain the remaining string after the boolean conversion
function lorx.string.toBool(_string) end

---
---Convert a string to a value
---
---@param _string string # String To convert
---@return orxSTATUS # success / failure
---@return number # Converted value
---@return string # If non null, will contain the remaining string after the number conversion
function lorx.string.toFloat(_string) end

---
---Converts a String to a signed int value, guessing the base
---
---@param _string string # String To convert
---@return orxSTATUS # success / failure
---@return integer # Converted value
---@return string # If non null, will contain the remaining string after the number conversion
function lorx.string.toS32(_string) end

---
---Converts a String to a signed int value using the given base
---
---@param _string string # String To convert
---@param _base integer # Base of the read value (generally 10, but can be 16 to read hexa)
---@return orxSTATUS # success / failure
---@return integer # Converted value
---@return string # If non null, will contain the remaining string after the number conversion
function lorx.string.toS32Base(_string, _base) end

---
---Converts a String to a signed int value, guessing the base
---
---@param _string string # String To convert
---@return orxSTATUS # success / failure
---@return integer # Converted value
---@return string # If non null, will contain the remaining string after the number conversion
function lorx.string.toS64(_string) end

---
---Converts a String to a signed int value using the given base
---
---@param _string string # String To convert
---@param _base integer # Base of the read value (generally 10, but can be 16 to read hexa)
---@return orxSTATUS # success / failure
---@return integer # Converted value
---@return string # If non null, will contain the remaining string after the number conversion
function lorx.string.toS64Base(_string, _base) end

---
---Converts a String to an unsigned int value, guessing the base
---
---@param _string string # String To convert
---@return orxSTATUS # success / failure
---@return integer # Converted value
---@return string # If non null, will contain the remaining string after the number conversion
function lorx.string.toU32(_string) end

---
---Converts a String to an unsigned int value using the given base
---
---@param _string string # String To convert
---@param _base integer # Base of the read value (generally 10, but can be 16 to read hexa)
---@return orxSTATUS # success / failure
---@return integer # Converted value
---@return string # If non null, will contain the remaining string after the number conversion
function lorx.string.toU32Base(_string, _base) end

---
---Converts a String to an unsigned int value, guessing the base
---
---@param _string string # String To convert
---@return orxSTATUS # success / failure
---@return integer # Converted value
---@return string # If non null, will contain the remaining string after the number conversion
function lorx.string.toU64(_string) end

---
---Converts a String to an unsigned int value using the given base
---
---@param _string string # String To convert
---@param _base integer # Base of the read value (generally 10, but can be 16 to read hexa)
---@return orxSTATUS # success / failure
---@return integer # Converted value
---@return string # If non null, will contain the remaining string after the number conversion
function lorx.string.toU64Base(_string, _base) end

---
---Convert a string to a vector
---
---@param _string string # String To convert
---@return orxSTATUS # success / failure
---@return orxVECTOR # Converted value. N.B.: if only two components (x, y) are defined, the z component will be set to zero
---@return string # If non null, will contain the remaining string after the number conversion
function lorx.string.toVector(_string) end

