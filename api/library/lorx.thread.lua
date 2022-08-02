---@meta

---@class lorx.thread
lorx.thread = {}

---
---Inits a semaphore with a given value
---
---@param _value integer # Value with which to init the semaphore
---@return orxTHREAD_SEMAPHORE # orxTHREAD_SEMAPHORE / nil
function lorx.thread.createSemaphore(_value) end

---
---Enables / disables threads
---
---@param _enablethreads integer # Mask of threads to enable (1 << ThreadID)
---@param _disablethreads integer # Mask of threads to disable (1 << ThreadID)
---@return orxSTATUS # success / failure
function lorx.thread.enable(_enablethreads, _disablethreads) end

---
---Exits from the thread module
---
function lorx.thread.exit() end

---
---Gets current thread ID
---
---@return integer # Current thread ID
function lorx.thread.getCurrent() end

---
---Gets a thread name
---
---@param _threadid integer # ID of the concerned thread
---@return string # Thread name
function lorx.thread.getName(_threadid) end

---
---Gets number of pending asynchronous tasks awaiting full completion (might pump task notifications if called from main thread)
---
---@return integer # Number of pending asynchronous tasks
function lorx.thread.getTaskCount() end

---
---Inits the thread module
---
---@return orxSTATUS # success / failure
function lorx.thread.init() end

---
---Joins a thread (blocks & waits until the other thread finishes)
---
---@param _threadid integer # ID of the thread for which to wait
---@return orxSTATUS # success / failure
function lorx.thread.join(_threadid) end

---
---Joins all threads (blocks & waits until the other threads finish)
---
---@return orxSTATUS # success / failure
function lorx.thread.joinAll() end

---
---Thread module setup
---
function lorx.thread.setup() end

---
---Yields to other threads
---
function lorx.thread.yield() end

