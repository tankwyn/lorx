---@meta

---@class lorx.soundsystem
lorx.soundsystem = {}

---
---Adds a filter to a bus (cascading)
---
---@param _bus orxHANDLE # Concerned bus
---@param _filterdata orxSOUND_FILTER_DATA # (const) Concerned filter data
---@param _usecustomparam boolean # Filter uses custom parameters
---@return orxSTATUS # success / failure
function lorx.soundsystem.addBusFilter(_bus, _filterdata, _usecustomparam) end

---
---Creates a bus
---
---@param _busid integer # Concerned bus ID
---@return orxHANDLE # orxHANDLE / orxHANDLE_UNDEFINED
function lorx.soundsystem.createBus(_busid) end

---
---Creates a sound from preloaded sample (can be played directly)
---
---@param _userdata orxHANDLE # User data to associate with this sound
---@param _sample orxSOUNDSYSTEM_SAMPLE # (const) Concerned sample
---@return orxSOUNDSYSTEM_SOUND # orxSOUNDSYSTEM_SOUND / nil
function lorx.soundsystem.createFromSample(_userdata, _sample) end

---
---Creates an empty sample
---
---@param _channelnumber integer # Number of channels of the sample
---@param _framenumber integer # Number of frame of the sample (number of "samples" = number of frames * number of channels)
---@param _samplerate integer # Sampling rate of the sample (ie. number of frames per second)
---@return orxSOUNDSYSTEM_SAMPLE # orxSOUNDSYSTEM_SAMPLE / nil
function lorx.soundsystem.createSample(_channelnumber, _framenumber, _samplerate) end

---
---Creates an empty stream
---
---@param _userdata orxHANDLE # User data to associate with this sound
---@param _channelnumber integer # Number of channels for the stream
---@param _samplerate integer # Sampling rate of the stream (ie. number of frames per second)
---@return orxSOUNDSYSTEM_SOUND # orxSOUNDSYSTEM_SOUND / nil
function lorx.soundsystem.createStream(_userdata, _channelnumber, _samplerate) end

---
---Creates a streamed sound from file (can be played directly)
---
---@param _userdata orxHANDLE # User data to associate with this sound
---@param _filename string # Name of the file to load as a stream (won't be completely loaded in memory, useful for musics)
---@return orxSOUNDSYSTEM_SOUND # orxSOUNDSYSTEM_SOUND / nil
function lorx.soundsystem.createStreamFromFile(_userdata, _filename) end

---
---Deletes a bus
---
---@param _bus orxHANDLE # Concerned bus
---@return orxSTATUS # success / failure
function lorx.soundsystem.deleteBus(_bus) end

---
---Enables/disables a listener
---
---@param _listenerindex integer # Concerned listener index
---@param _enable boolean # Enable / disable
function lorx.soundsystem.enableListener(_listenerindex, _enable) end

---
---Exits from the sound system module
---
function lorx.soundsystem.exit() end

---
---Gets global volume
---
---@return number # Gobal volume
function lorx.soundsystem.getGlobalVolume() end

---
---Gets listener count
---
---@return integer # Listener count
function lorx.soundsystem.getListenerCount() end

---
---Gets listener position
---
---@param _index integer # Listener index, 0-based
---@return orxVECTOR # orxVECTOR / nil
function lorx.soundsystem.getListenerPosition(_index) end

---
---Is recording possible on the current system?
---
---@return boolean # true / false
function lorx.soundsystem.hasRecordingSupport() end

---
---Inits the sound system module
---
---@return orxSTATUS # success / failure
function lorx.soundsystem.init() end

---
---Is listener enabled?
---
---@param _listenerindex integer # Concerned listener index
---@return boolean # true if enabled, false otherwise
function lorx.soundsystem.isListenerEnabled(_listenerindex) end

---
---Loads a sound sample from file (cannot be played directly)
---
---@param _filename string # Name of the file to load as a sample (completely loaded in memory, useful for sound effects)
---@return orxSOUNDSYSTEM_SAMPLE # orxSOUNDSYSTEM_SAMPLE / nil
function lorx.soundsystem.loadSample(_filename) end

---
---Removes all filters from a bus
---
---@param _bus orxHANDLE # Concerned bus
---@return orxSTATUS # success / failure
function lorx.soundsystem.removeAllBusFilters(_bus) end

---
---Removes last added filter from a bus
---
---@param _bus orxHANDLE # Concerned bus
---@return orxSTATUS # success / failure
function lorx.soundsystem.removeLastBusFilter(_bus) end

---
---Sets a bus's parent
---
---@param _bus orxHANDLE # Concerned bus
---@param _parentbus orxHANDLE # Handle of the bus to use as parent
---@return orxSTATUS # success / failure
function lorx.soundsystem.setBusParent(_bus, _parentbus) end

---
---Sets global volume
---
---@param _globalvolume number # Global volume to set
---@return orxSTATUS # success / failure
function lorx.soundsystem.setGlobalVolume(_globalvolume) end

---
---Sets listener position
---
---@param _index integer # Listener index, 0-based
---@param _position orxVECTOR # (const) Desired position
---@return orxSTATUS # success / failure
function lorx.soundsystem.setListenerPosition(_index, _position) end

---
---Sound system module setup
---
function lorx.soundsystem.setup() end

---
---Starts recording
---
---@param _name string # Name for the recorded sound/file
---@param _writetofile boolean # Should write to file?
---@param _samplerate integer # Sample rate, 0 for default rate (48000Hz)
---@param _channelnumber integer # Channel number, 0 for default mono channel
---@return orxSTATUS # success / failure
function lorx.soundsystem.startRecording(_name, _writetofile, _samplerate, _channelnumber) end

---
---Stops recording
---
---@return orxSTATUS # success / failure
function lorx.soundsystem.stopRecording() end

