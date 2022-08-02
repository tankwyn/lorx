# module string

## functions

### **`compare`**

* Signature:

```lua
r1 = compare(string1, string2)
```

* Description:

> Compare two strings, case sensitive. If the first one is smaller than the second it returns -1, 1 if the second one is bigger than the first, and 0 if they are equals

* Params:

name | type | description 
--- | --- | ---
string1 | string | First String to compare
string2 | string | Second string to compare

* Returns:

type | description 
--- | ---
integer | -1, 0 or 1 as indicated in the description.

* C signature:

```c
  orxS32 orxString_Compare(const orxSTRING _zString1, const orxSTRING _zString2)
```

---

### **`duplicate`**

* Signature:

```lua
r1 = duplicate(srcstring)
```

* Description:

> Duplicate a string.

* Params:

name | type | description 
--- | --- | ---
srcstring | string | String to duplicate.

* Returns:

type | description 
--- | ---
string | Duplicated string.

* C signature:

```c
  orxSTRING orxString_Duplicate(const orxSTRING _zSrcString)
```

---

### **`exit`**

* Signature:

```lua
exit()
```

* Description:

> Exits from the structure module

* Params:

* Returns:

* C signature:

```c
  void  orxString_Exit()
```

---

### **`extractBase`**

* Signature:

```lua
r1, r2 = extractBase(string)
```

* Description:

> Extracts the base \(2, 8, 10 or 16\) from a literal number

* Params:

name | type | description 
--- | --- | ---
string | string | String from which to extract the base

* Returns:

type | description 
--- | ---
integer | Base or the numerical value, defaults to 10 \(decimal\) when no prefix is found or the literal value couldn't be identified
string | If non null, will contain the remaining literal number, right after the base prefix \(0x, 0b or 0\)

* C signature:

```c
  orxU32 orxString_ExtractBase(const orxSTRING _zString, const orxSTRING *_pzRemaining)
```

---

### **`getCharacterCount`**

* Signature:

```lua
r1 = getCharacterCount(string)
```

* Description:

> Returns the number of valid unicode characters \(UTF-8\) in the string \(for ASCII string, it will be the same result as orxString_GetLength\(\)\)

* Params:

name | type | description 
--- | --- | ---
string | string | Concerned string

* Returns:

type | description 
--- | ---
integer | Number of valid unicode characters contained in the string, [orxU32_UNDEFINED](./constants.md#orxu32_undefined) for an invalid UTF-8 string

* C signature:

```c
  orxU32 orxString_GetCharacterCount(const orxSTRING _zString)
```

---

### **`getExtension`**

* Signature:

```lua
r1 = getExtension(filename)
```

* Description:

> Gets the extension from a file name

* Params:

name | type | description 
--- | --- | ---
filename | string | Concerned file name

* Returns:

type | description 
--- | ---
string | Extension if exists, empty string otherwise

* C signature:

```c
  const orxSTRING orxString_GetExtension(const orxSTRING _zFileName)
```

---

### **`getFirstCharacterCodePoint`**

* Signature:

```lua
r1, r2 = getFirstCharacterCodePoint(string)
```

* Description:

> Returns the code of the first character of the UTF-8 string

* Params:

name | type | description 
--- | --- | ---
string | string | Concerned string

* Returns:

type | description 
--- | ---
integer | Code of the first UTF-8 character of the string, [orxU32_UNDEFINED](./constants.md#orxu32_undefined) if it's an invalid character
string | If non null, will contain the remaining string after the first UTF-8 character

* C signature:

```c
 orxU32  orxString_GetFirstCharacterCodePoint(const orxSTRING _zString, const orxSTRING *_pzRemaining)
```

---

### **`getFromID`**

* Signature:

```lua
r1 = getFromID(id)
```

* Description:

> Gets a string from an ID \(it should have already been stored internally with a call to orxString_GetID\)

* Params:

name | type | description 
--- | --- | ---
id | integer | Concerned string ID

* Returns:

type | description 
--- | ---
string | string if ID's found, empty string otherwise

* C signature:

```c
  const orxSTRING  orxString_GetFromID(orxSTRINGID _stID)
```

---

### **`getID`**

* Signature:

```lua
r1 = getID(string)
```

* Description:

> Gets a string's ID \(and stores the string internally to prevent duplication\)

* Params:

name | type | description 
--- | --- | ---
string | string | Concerned string

* Returns:

type | description 
--- | ---
integer | String's ID

* C signature:

```c
  orxSTRINGID  orxString_GetID(const orxSTRING _zString)
```

---

### **`getLength`**

* Signature:

```lua
r1 = getLength(string)
```

* Description:

> Returns the number of orxCHAR in the string \(for non-ASCII UTF-8 string, it won't be the actual number of unicode characters\)

* Params:

name | type | description 
--- | --- | ---
string | string | String used for length computation

* Returns:

type | description 
--- | ---
integer | Length of the string \(doesn't count final orxCHAR_NULL\)

* C signature:

```c
  orxU32 orxString_GetLength(const orxSTRING _zString)
```

---

### **`getUTF8CharacterLength`**

* Signature:

```lua
r1 = getUTF8CharacterLength(charactercodepoint)
```

* Description:

> Gets the UTF-8 encoding length of given character

* Params:

name | type | description 
--- | --- | ---
charactercodepoint | integer | Concerned character code

* Returns:

type | description 
--- | ---
integer | Encoding length in UTF-8 for given character if valid, [orxU32_UNDEFINED](./constants.md#orxu32_undefined) otherwise

* C signature:

```c
  orxU32 orxString_GetUTF8CharacterLength(orxU32 _u32CharacterCodePoint)
```

---

### **`hash`**

* Signature:

```lua
r1 = hash(string)
```

* Description:

> Gets a string's ID \(aka hash\), without storing the string internally

* Params:

name | type | description 
--- | --- | ---
string | string | Concerned string

* Returns:

type | description 
--- | ---
integer | String's ID/hash

* C signature:

```c
  orxSTRINGID  orxString_Hash(const orxSTRING _zString)
```

---

### **`iCompare`**

* Signature:

```lua
r1 = iCompare(string1, string2)
```

* Description:

> Compare two strings, case insensitive. If the first one is smaller than the second, it returns -1, If the second one is bigger than the first, and 0 if they are equals

* Params:

name | type | description 
--- | --- | ---
string1 | string | First String to compare
string2 | string | Second string to compare

* Returns:

type | description 
--- | ---
integer | -1, 0 or 1 as indicated in the description.

* C signature:

```c
  orxS32 orxString_ICompare(const orxSTRING _zString1, const orxSTRING _zString2)
```

---

### **`init`**

* Signature:

```lua
r1 = init()
```

* Description:

> Initializess the structure module

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxString_Init()
```

---

### **`isCharacterASCII`**

* Signature:

```lua
r1 = isCharacterASCII(charactercodepoint)
```

* Description:

> Tells if a character is ASCII from its ID

* Params:

name | type | description 
--- | --- | ---
charactercodepoint | integer | Concerned character code

* Returns:

type | description 
--- | ---
boolean | true is it's a non-extended ASCII character, false otherwise

* C signature:

```c
  orxBOOL orxString_IsCharacterASCII(orxU32 _u32CharacterCodePoint)
```

---

### **`isCharacterAlphaNumeric`**

* Signature:

```lua
r1 = isCharacterAlphaNumeric(charactercodepoint)
```

* Description:

> Tells if a character is alpha-numeric from its ID

* Params:

name | type | description 
--- | --- | ---
charactercodepoint | integer | Concerned character code

* Returns:

type | description 
--- | ---
boolean | true is it's a non-extended ASCII alpha-numerical character, false otherwise

* C signature:

```c
  orxBOOL orxString_IsCharacterAlphaNumeric(orxU32 _u32CharacterCodePoint)
```

---

### **`nCompare`**

* Signature:

```lua
r1 = nCompare(string1, string2, charnumber)
```

* Description:

> Compare N first character from two strings, case sensitive. If the first one is smaller than the second it returns -1, 1 if the second one is bigger than the first and 0 if they are equals.

* Params:

name | type | description 
--- | --- | ---
string1 | string | First String to compare
string2 | string | Second string to compare
charnumber | integer | Number of character to compare

* Returns:

type | description 
--- | ---
integer | -1, 0 or 1 as indicated in the description.

* C signature:

```c
  orxS32 orxString_NCompare(const orxSTRING _zString1, const orxSTRING _zString2, orxU32 _u32CharNumber)
```

---

### **`nHash`**

* Signature:

```lua
r1 = nHash(string, charnumber)
```

* Description:

> Gets a string's ID \(aka hash\), without storing the string internally

* Params:

name | type | description 
--- | --- | ---
string | string | Concerned string
charnumber | integer | Number of character to process, should be <= orxString_GetLength\(_zString\)

* Returns:

type | description 
--- | ---
integer | String's ID/hash

* C signature:

```c
  orxSTRINGID  orxString_NHash(const orxSTRING _zString, orxU32 _u32CharNumber)
```

---

### **`nICompare`**

* Signature:

```lua
r1 = nICompare(string1, string2, charnumber)
```

* Description:

> Compare N first character from two strings, case insensitive. If the first one is smaller than the second, it returns -1, If the second one is bigger than the first, and 0 if they are equals.

* Params:

name | type | description 
--- | --- | ---
string1 | string | First String to compare
string2 | string | Second string to compare
charnumber | integer | Number of character to compare

* Returns:

type | description 
--- | ---
integer | -1, 0 or 1 as indicated in the description.

* C signature:

```c
  orxS32 orxString_NICompare(const orxSTRING _zString1, const orxSTRING _zString2, orxU32 _u32CharNumber)
```

---

### **`scan`**

* Signature:

```lua
r1 = scan(string, format)
```

* Description:

> Scans a formated string from a memory buffer

* Params:

name | type | description 
--- | --- | ---
string | string | String to scan
format | string | Format string

* Returns:

type | description 
--- | ---
integer | The number of scanned items

* C signature:

```c
  orxS32  orxString_Scan(const orxSTRING _zString, const orxSTRING _zFormat, ...)
```

---

### **`searchChar`**

* Signature:

```lua
r1 = searchChar(string, char)
```

* Description:

> Returns the first occurrence of _cChar in _zString

* Params:

name | type | description 
--- | --- | ---
string | string | String to analyze
char | string | The character to find

* Returns:

type | description 
--- | ---
string | The pointer of the first occurrence of _cChar, or nil if not found

* C signature:

```c
  const orxSTRING orxString_SearchChar(const orxSTRING _zString, orxCHAR _cChar)
```

---

### **`searchCharIndex`**

* Signature:

```lua
r1 = searchCharIndex(string, char, position)
```

* Description:

> Returns the first occurrence of _cChar in _zString

* Params:

name | type | description 
--- | --- | ---
string | string | String to analyze
char | string | The character to find
position | integer | Search begin position

* Returns:

type | description 
--- | ---
integer | The index of the next occurrence of requested character, starting at given position / -1 if not found

* C signature:

```c
  orxS32 orxString_SearchCharIndex(const orxSTRING _zString, orxCHAR _cChar, orxS32 _s32Position)
```

---

### **`searchString`**

* Signature:

```lua
r1 = searchString(string1, string2)
```

* Description:

> Returns the first occurrence of _zString2 in _zString1

* Params:

name | type | description 
--- | --- | ---
string1 | string | String to analyze
string2 | string | String that must be inside _zString1

* Returns:

type | description 
--- | ---
string | The pointer of the first occurrence of _zString2, or nil if not found

* C signature:

```c
  const orxSTRING orxString_SearchString(const orxSTRING _zString1, const orxSTRING _zString2)
```

---

### **`setup`**

* Signature:

```lua
setup()
```

* Description:

> Structure module setup

* Params:

* Returns:

* C signature:

```c
  void  orxString_Setup()
```

---

### **`skipPath`**

* Signature:

```lua
r1 = skipPath(string)
```

* Description:

> Skips path

* Params:

name | type | description 
--- | --- | ---
string | string | Concerned string

* Returns:

type | description 
--- | ---
string | Sub string located after all non-terminal directory separators

* C signature:

```c
  const orxSTRING orxString_SkipPath(const orxSTRING _zString)
```

---

### **`skipWhiteSpaces`**

* Signature:

```lua
r1 = skipWhiteSpaces(string)
```

* Description:

> Skips all white spaces

* Params:

name | type | description 
--- | --- | ---
string | string | Concerned string

* Returns:

type | description 
--- | ---
string | Sub string located after all leading white spaces, including EOL characters

* C signature:

```c
  const orxSTRING orxString_SkipWhiteSpaces(const orxSTRING _zString)
```

---

### **`store`**

* Signature:

```lua
r1 = store(string)
```

* Description:

> Stores a string internally: equivalent to an optimized call to orxString_GetFromID\(orxString_GetID\(_zString\)\)

* Params:

name | type | description 
--- | --- | ---
string | string | Concerned string

* Returns:

type | description 
--- | ---
string | Stored string

* C signature:

```c
  const orxSTRING  orxString_Store(const orxSTRING _zString)
```

---

### **`toBool`**

* Signature:

```lua
r1, r2, r3 = toBool(string)
```

* Description:

> Convert a string to a boolean

* Params:

name | type | description 
--- | --- | ---
string | string | String To convert

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure
boolean | Converted value
string | If non null, will contain the remaining string after the boolean conversion

* C signature:

```c
  orxSTATUS orxString_ToBool(const orxSTRING _zString, orxBOOL *_pbOutValue, const orxSTRING *_pzRemaining)
```

---

### **`toFloat`**

* Signature:

```lua
r1, r2, r3 = toFloat(string)
```

* Description:

> Convert a string to a value

* Params:

name | type | description 
--- | --- | ---
string | string | String To convert

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure
number | Converted value
string | If non null, will contain the remaining string after the number conversion

* C signature:

```c
  orxSTATUS orxString_ToFloat(const orxSTRING _zString, orxFLOAT *_pfOutValue, const orxSTRING *_pzRemaining)
```

---

### **`toS32`**

* Signature:

```lua
r1, r2, r3 = toS32(string)
```

* Description:

> Converts a String to a signed int value, guessing the base

* Params:

name | type | description 
--- | --- | ---
string | string | String To convert

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure
integer | Converted value
string | If non null, will contain the remaining string after the number conversion

* C signature:

```c
  orxSTATUS orxString_ToS32(const orxSTRING _zString, orxS32 *_ps32OutValue, const orxSTRING *_pzRemaining)
```

---

### **`toS32Base`**

* Signature:

```lua
r1, r2, r3 = toS32Base(string, base)
```

* Description:

> Converts a String to a signed int value using the given base

* Params:

name | type | description 
--- | --- | ---
string | string | String To convert
base | integer | Base of the read value \(generally 10, but can be 16 to read hexa\)

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure
integer | Converted value
string | If non null, will contain the remaining string after the number conversion

* C signature:

```c
  orxSTATUS orxString_ToS32Base(const orxSTRING _zString, orxU32 _u32Base, orxS32 *_ps32OutValue, const orxSTRING *_pzRemaining)
```

---

### **`toS64`**

* Signature:

```lua
r1, r2, r3 = toS64(string)
```

* Description:

> Converts a String to a signed int value, guessing the base

* Params:

name | type | description 
--- | --- | ---
string | string | String To convert

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure
integer | Converted value
string | If non null, will contain the remaining string after the number conversion

* C signature:

```c
  orxSTATUS orxString_ToS64(const orxSTRING _zString, orxS64 *_ps64OutValue, const orxSTRING *_pzRemaining)
```

---

### **`toS64Base`**

* Signature:

```lua
r1, r2, r3 = toS64Base(string, base)
```

* Description:

> Converts a String to a signed int value using the given base

* Params:

name | type | description 
--- | --- | ---
string | string | String To convert
base | integer | Base of the read value \(generally 10, but can be 16 to read hexa\)

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure
integer | Converted value
string | If non null, will contain the remaining string after the number conversion

* C signature:

```c
  orxSTATUS orxString_ToS64Base(const orxSTRING _zString, orxU32 _u32Base, orxS64 *_ps64OutValue, const orxSTRING *_pzRemaining)
```

---

### **`toU32`**

* Signature:

```lua
r1, r2, r3 = toU32(string)
```

* Description:

> Converts a String to an unsigned int value, guessing the base

* Params:

name | type | description 
--- | --- | ---
string | string | String To convert

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure
integer | Converted value
string | If non null, will contain the remaining string after the number conversion

* C signature:

```c
  orxSTATUS orxString_ToU32(const orxSTRING _zString, orxU32 *_pu32OutValue, const orxSTRING *_pzRemaining)
```

---

### **`toU32Base`**

* Signature:

```lua
r1, r2, r3 = toU32Base(string, base)
```

* Description:

> Converts a String to an unsigned int value using the given base

* Params:

name | type | description 
--- | --- | ---
string | string | String To convert
base | integer | Base of the read value \(generally 10, but can be 16 to read hexa\)

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure
integer | Converted value
string | If non null, will contain the remaining string after the number conversion

* C signature:

```c
  orxSTATUS orxString_ToU32Base(const orxSTRING _zString, orxU32 _u32Base, orxU32 *_pu32OutValue, const orxSTRING *_pzRemaining)
```

---

### **`toU64`**

* Signature:

```lua
r1, r2, r3 = toU64(string)
```

* Description:

> Converts a String to an unsigned int value, guessing the base

* Params:

name | type | description 
--- | --- | ---
string | string | String To convert

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure
integer | Converted value
string | If non null, will contain the remaining string after the number conversion

* C signature:

```c
  orxSTATUS orxString_ToU64(const orxSTRING _zString, orxU64 *_pu64OutValue, const orxSTRING *_pzRemaining)
```

---

### **`toU64Base`**

* Signature:

```lua
r1, r2, r3 = toU64Base(string, base)
```

* Description:

> Converts a String to an unsigned int value using the given base

* Params:

name | type | description 
--- | --- | ---
string | string | String To convert
base | integer | Base of the read value \(generally 10, but can be 16 to read hexa\)

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure
integer | Converted value
string | If non null, will contain the remaining string after the number conversion

* C signature:

```c
  orxSTATUS orxString_ToU64Base(const orxSTRING _zString, orxU32 _u32Base, orxU64 *_pu64OutValue, const orxSTRING *_pzRemaining)
```

---

### **`toVector`**

* Signature:

```lua
r1, r2, r3 = toVector(string)
```

* Description:

> Convert a string to a vector

* Params:

name | type | description 
--- | --- | ---
string | string | String To convert

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure
[orxVECTOR](../types/orxVECTOR.md)  | Converted value. N.B.: if only two components \(x, y\) are defined, the z component will be set to zero
string | If non null, will contain the remaining string after the number conversion

* C signature:

```c
  orxSTATUS orxString_ToVector(const orxSTRING _zString, orxVECTOR *_pvOutValue, const orxSTRING *_pzRemaining)
```

---

