---@meta

---@class lorx.sound
lorx.sound = {}

---
---Adds a filter to a bus (cascading)
---
---@param _busid integer # Concerned bus ID
---@param _filterdata orxSOUND_FILTER_DATA # (const) Concerned filter data
---@param _usecustomparam boolean # Filter uses custom parameters
---@return orxSTATUS # success / failure
function lorx.sound.addBusFilter(_busid, _filterdata, _usecustomparam) end

---
---Adds a filter to a bus (cascading) from config
---
---@param _busid integer # Concerned bus ID
---@param _filterconfigid string # Config ID of the filter to add
---@return orxSTATUS # success / failure
function lorx.sound.addBusFilterFromConfig(_busid, _filterconfigid) end

---
---Clears cache (if any sound sample is still in active use, it'll remain in memory until not referenced anymore)
---
---@return orxSTATUS # success / failure
function lorx.sound.clearCache() end

---
---Creates an empty sound
---
---@return orxSOUND # Created orxSOUND / nil
function lorx.sound.create() end

---
---Creates sound from config
---
---@param _configid string # Config ID
---@return orxSOUND # orxSOUND / nil
function lorx.sound.createFromConfig(_configid) end

---
---Creates a sample
---
---@param _channelnumber integer # Number of channels of the sample
---@param _framenumber integer # Number of frame of the sample (number of "samples" = number of frames * number of channels)
---@param _samplerate integer # Sampling rate of the sample (ie. number of frames per second)
---@param _name string # Name to associate with the sample
---@return orxSOUNDSYSTEM_SAMPLE # orxSOUNDSYSTEM_SAMPLE / nil
function lorx.sound.createSample(_channelnumber, _framenumber, _samplerate, _name) end

---
---Creates a sound with an empty stream (ie. you'll need to provide actual sound data for each packet sent to the sound card using the event system)
---
---@param _channelnumber integer # Number of channels of the stream
---@param _samplerate integer # Sampling rate of the stream (ie. number of frames per second)
---@param _name string # Name to associate with this sound
---@return orxSOUND # orxSOUND / nil
function lorx.sound.createWithEmptyStream(_channelnumber, _samplerate, _name) end

---
---Deletes a sample
---
---@param _name string # Sample's name
---@return orxSTATUS # success / failure
function lorx.sound.deleteSample(_name) end

---
---Exits from the sound module
---
function lorx.sound.exit() end

---
---Create a orxSOUND_FILTER_DATA of band pass type
---
---@param _nameid integer # 
---@param _frequency number # 
---@param _order integer # 
---@return orxSOUND_FILTER_DATA # The new instance
function lorx.sound.filterDataBandPass(_nameid, _frequency, _order) end

---
---Create a orxSOUND_FILTER_DATA of biquad type
---
---@param _nameid integer # 
---@param _a0 number # 
---@param _a1 number # 
---@param _a2 number # 
---@param _b0 number # 
---@param _b1 number # 
---@param _b2 number # 
---@return orxSOUND_FILTER_DATA # The new instance
function lorx.sound.filterDataBiquad(_nameid, _a0, _a1, _a2, _b0, _b1, _b2) end

---
---Create a orxSOUND_FILTER_DATA of delay type
---
---@param _nameid integer # 
---@param _delay number # 
---@param _decay number # 
---@return orxSOUND_FILTER_DATA # The new instance
function lorx.sound.filterDataDelay(_nameid, _delay, _decay) end

---
---Create a orxSOUND_FILTER_DATA of high pass type
---
---@param _nameid integer # 
---@param _frequency number # 
---@param _order integer # 
---@return orxSOUND_FILTER_DATA # The new instance
function lorx.sound.filterDataHighPass(_nameid, _frequency, _order) end

---
---Create a orxSOUND_FILTER_DATA of low shelf type
---
---@param _nameid integer # 
---@param _frequency number # 
---@param _q number # 
---@param _gain number # 
---@return orxSOUND_FILTER_DATA # The new instance
function lorx.sound.filterDataHighShelf(_nameid, _frequency, _q, _gain) end

---
---Create a orxSOUND_FILTER_DATA of low pass type
---
---@param _nameid integer # 
---@param _frequency number # 
---@param _order integer # 
---@return orxSOUND_FILTER_DATA # The new instance
function lorx.sound.filterDataLowPass(_nameid, _frequency, _order) end

---
---Create a orxSOUND_FILTER_DATA of low shelf type
---
---@param _nameid integer # 
---@param _frequency number # 
---@param _q number # 
---@param _gain number # 
---@return orxSOUND_FILTER_DATA # The new instance
function lorx.sound.filterDataLowShelf(_nameid, _frequency, _q, _gain) end

---
---Create a orxSOUND_FILTER_DATA of notch type
---
---@param _nameid integer # 
---@param _frequency number # 
---@param _q number # 
---@return orxSOUND_FILTER_DATA # The new instance
function lorx.sound.filterDataNotch(_nameid, _frequency, _q) end

---
---Create a orxSOUND_FILTER_DATA of peaking type
---
---@param _nameid integer # 
---@param _frequency number # 
---@param _q number # 
---@param _gain number # 
---@return orxSOUND_FILTER_DATA # The new instance
function lorx.sound.filterDataPeaking(_nameid, _frequency, _q, _gain) end

---
---Gets bus child
---
---@param _busid integer # Concerned bus ID
---@return integer # Child bus ID / orxSTRINGID_UNDEFINED
function lorx.sound.getBusChild(_busid) end

---
---Gets bus global pitch, ie. taking into account the whole bus hierarchy
---
---@param _busid integer # Concerned bus ID
---@return number # number
function lorx.sound.getBusGlobalPitch(_busid) end

---
---Gets bus global volume, ie. taking into account the whole bus hierarchy
---
---@param _busid integer # Concerned bus ID
---@return number # number
function lorx.sound.getBusGlobalVolume(_busid) end

---
---Gets bus parent
---
---@param _busid integer # Concerned bus ID
---@return integer # Parent bus ID / orxSTRINGID_UNDEFINED
function lorx.sound.getBusParent(_busid) end

---
---Gets bus pitch (local, ie. unaffected by the whole bus hierarchy)
---
---@param _busid integer # Concerned bus ID
---@return number # number
function lorx.sound.getBusPitch(_busid) end

---
---Gets bus sibling
---
---@param _busid integer # Concerned bus ID
---@return integer # Sibling bus ID / orxSTRINGID_UNDEFINED
function lorx.sound.getBusSibling(_busid) end

---
---Gets bus volume (local, ie. unaffected by the whole bus hierarchy)
---
---@param _busid integer # Concerned bus ID
---@return number # number
function lorx.sound.getBusVolume(_busid) end

---
---Gets master bus ID
---
---@return integer # Master bus ID
function lorx.sound.getMasterBusID() end

---
---Gets next sound in bus
---
---@param _sound orxSOUND # (const) Concerned sound, nil to get the first one
---@param _busid integer # Bus ID to consider, orxSTRINGID_UNDEFINED for all
---@return orxSOUND # orxSOUND / nil
function lorx.sound.getNext(_sound, _busid) end

---
---Gets a sample
---
---@param _name string # Sample's name
---@return orxSOUNDSYSTEM_SAMPLE # success / failure
function lorx.sound.getSample(_name) end

---
---Is recording possible on the current system?
---
---@return boolean # true / false
function lorx.sound.hasRecordingSupport() end

---
---Initializes the sound module
---
---@return orxSTATUS # success / failure
function lorx.sound.init() end

---
---Removes all filters from a bus
---
---@param _busid integer # Concerned bus ID
---@return orxSTATUS # success / failure
function lorx.sound.removeAllBusFilters(_busid) end

---
---Removes last added filter from a bus
---
---@param _busid integer # Concerned bus ID
---@return orxSTATUS # success / failure
function lorx.sound.removeLastBusFilter(_busid) end

---
---Sets a bus parent
---
---@param _busid integer # Concerned bus ID, will create it if not already existing
---@param _parentbusid integer # ID of the bus to use as parent, will create it if not already existing
---@return orxSTATUS # success / failure
function lorx.sound.setBusParent(_busid, _parentbusid) end

---
---Sets bus pitch
---
---@param _busid integer # Concerned bus ID, will create it if not already existing
---@param _pitch number # Desired pitch
---@return orxSTATUS # success / failure
function lorx.sound.setBusPitch(_busid, _pitch) end

---
---Sets bus volume
---
---@param _busid integer # Concerned bus ID, will create it if not already existing
---@param _volume number # Desired volume (0.0 - 1.0)
---@return orxSTATUS # success / failure
function lorx.sound.setBusVolume(_busid, _volume) end

---
---Sound module setup
---
function lorx.sound.setup() end

---
---Starts recording
---
---@param _name string # Name for the recorded sound/file
---@param _writetofile boolean # Should write to file?
---@param _samplerate integer # Sample rate, 0 for default rate (48000Hz)
---@param _channelnumber integer # Channel number, 0 for default mono channel
---@return orxSTATUS # success / failure
function lorx.sound.startRecording(_name, _writetofile, _samplerate, _channelnumber) end

---
---Stops recording
---
---@return orxSTATUS # success / failure
function lorx.sound.stopRecording() end

