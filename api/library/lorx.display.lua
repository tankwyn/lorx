---@meta

---@class lorx.display
lorx.display = {}

---
---Create a new orxCHARACTER_GLYPH
---
---@param _fX number # 
---@param _fY number # 
---@param _fWidth number # 
---@return orxCHARACTER_GLYPH # The new instance
function lorx.display.characterGlyph(_fX, _fY, _fWidth) end

---
---Clears a bitmap
---
---@param _bitmap orxBITMAP # Concerned bitmap, if nil all the current destination bitmaps will be cleared instead
---@param _color orxRGBA # Color to clear the bitmap with
---@return orxSTATUS # success / failure
function lorx.display.clearBitmap(_bitmap, _color) end

---
---Create a new orxCOLOR
---
---@param _vRGB orxVECTOR # 
---@param _fAlpha number # 
---@return orxCOLOR # The new instance
function lorx.display.color(_vRGB, _fAlpha) end

---
---Creates a bitmap
---
---@param _width integer # Bitmap width
---@param _height integer # Bitmap height
---@return orxBITMAP # orxBITMAP / nil
function lorx.display.createBitmap(_width, _height) end

---
---Deletes a compiled shader
---
---@param _shader orxHANDLE # Shader to delete
function lorx.display.deleteShader(_shader) end

---
---Create a new orxDISPLAY_TRANSFORM
---
---@param _fSrcX number # 
---@param _fSrcY number # 
---@param _fDstX number # 
---@param _fDstY number # 
---@param _fRepeatX number # 
---@param _fRepeatY number # 
---@param _fScaleX number # 
---@param _fScaleY number # 
---@param _fRotation number # 
---@return orxDISPLAY_TRANSFORM # The new instance
function lorx.display.displayTransform(_fSrcX, _fSrcY, _fDstX, _fDstY, _fRepeatX, _fRepeatY, _fScaleX, _fScaleY, _fRotation) end

---
---Create a new orxDISPLAY_VIDEO_MODE
---
---@param _u32Width integer # 
---@param _u32Height integer # 
---@param _u32Depth integer # 
---@param _u32RefreshRate integer # 
---@param _bFullScreen boolean # 
---@return orxDISPLAY_VIDEO_MODE # The new instance
function lorx.display.displayVideoMode(_u32Width, _u32Height, _u32Depth, _u32RefreshRate, _bFullScreen) end

---
---Draws a circle
---
---@param _center orxVECTOR # (const) Center
---@param _radius number # Radius
---@param _color orxRGBA # Color
---@param _fill boolean # If true, the polygon will be filled otherwise only its outline will be drawn
---@return orxSTATUS # success / failure
function lorx.display.drawCircle(_center, _radius, _color, _fill) end

---
---Draws a line
---
---@param _start orxVECTOR # (const) Start point
---@param _end orxVECTOR # (const) End point
---@param _color orxRGBA # Color
---@return orxSTATUS # success / failure
function lorx.display.drawLine(_start, _end, _color) end

---
---Draws a textured mesh
---
---@param _mesh orxDISPLAY_MESH # (const) Mesh to draw, if no primitive and no index buffer is given, separate quads arrangement will be assumed
---@param _bitmap orxBITMAP # (const) Bitmap to use for texturing, nil to use the current one
---@param _smoothing orxDISPLAY_SMOOTHING # Bitmap smoothing type
---@param _blendmode orxDISPLAY_BLEND_MODE # Blend mode
---@return orxSTATUS # success / failure
function lorx.display.drawMesh(_mesh, _bitmap, _smoothing, _blendmode) end

---
---Draws an oriented box
---
---@param _box orxOBOX # (const) Box to draw
---@param _color orxRGBA # Color
---@param _fill boolean # If true, the polygon will be filled otherwise only its outline will be drawn
---@return orxSTATUS # success / failure
function lorx.display.drawOBox(_box, _color, _fill) end

---
---Draws a (closed) polygon; filled polygons *need* to be either convex or star-shaped concave with the first vertex part of the polygon's kernel
---
---@param _vertexlist orxVECTOR[] # List of vertices
---@param _vertexnumber integer # Number of vertices in the list
---@param _color orxRGBA # Color
---@param _fill boolean # If true, the polygon will be filled otherwise only its outline will be drawn
---@return orxSTATUS # success / failure
function lorx.display.drawPolygon(_vertexlist, _vertexnumber, _color, _fill) end

---
---Draws a polyline (aka open polygon)
---
---@param _vertexlist orxVECTOR[] # List of vertices
---@param _vertexnumber integer # Number of vertices in the list
---@param _color orxRGBA # Color
---@return orxSTATUS # success / failure
function lorx.display.drawPolyline(_vertexlist, _vertexnumber, _color) end

---
---Enables / disables vertical synchro
---
---@param _enable boolean # Enable / disable
---@return orxSTATUS # success / failure
function lorx.display.enableVSync(_enable) end

---
---Exits from the display module
---
function lorx.display.exit() end

---
---Gets blend mode from a string
---
---@param _blendmode string # String to evaluate
---@return orxDISPLAY_BLEND_MODE # orxDISPLAY_BLEND_MODE
function lorx.display.getBlendModeFromString(_blendmode) end

---
---Gets a shader parameter's ID
---
---@param _shader orxHANDLE # Concerned shader
---@param _param string # Parameter name
---@param _index integer # Parameter index, -1 for non-array types
---@param _istexture boolean # Is parameter a texture?
---@return integer # Parameter ID
function lorx.display.getParameterID(_shader, _param, _index, _istexture) end

---
---Gets screen bitmap
---
---@return orxBITMAP # orxBITMAP / nil
function lorx.display.getScreenBitmap() end

---
---Gets screen size
---
---@return orxSTATUS # success / failure
---@return number # Screen width
---@return number # Screen height
function lorx.display.getScreenSize() end

---
---Gets a shader (internal) ID
---
---@param _shader orxHANDLE # Concerned bitmap
---@return integer # integer (u32)
function lorx.display.getShaderID(_shader) end

---
---Gets current temp bitmap
---
---@return orxBITMAP # (const) orxBITMAP, if non-null, load operations are currently asynchronous, otherwise they're synchronous
function lorx.display.getTempBitmapConst() end

---
---Gets an available video mode
---
---@param _index integer # Video mode index, pass _u32Index < orxDisplay_GetVideoModeCount() for an available listed mode, orxU32_UNDEFINED for the the default (desktop) mode and any other value for current mode
---@return orxDISPLAY_VIDEO_MODE # orxDISPLAY_VIDEO_MODE / nil if invalid
function lorx.display.getVideoMode(_index) end

---
---Gets available video mode count
---
---@return integer # Available video mode count
function lorx.display.getVideoModeCount() end

---
---Has shader support?
---
---@return boolean # true / false
function lorx.display.hasShaderSupport() end

---
---Inits the display module
---
---@return orxSTATUS # success / failure
function lorx.display.init() end

---
---Is in full screen mode?
---
---@return boolean # true if full screen, false otherwise
function lorx.display.isFullScreen() end

---
---Is vertical synchro enabled?
---
---@return boolean # true if enabled, false otherwise
function lorx.display.isVSyncEnabled() end

---
---Is video mode available
---
---@param _videomode orxDISPLAY_VIDEO_MODE # (const) Video mode to test
---@return boolean # true is available, false otherwise
function lorx.display.isVideoModeAvailable(_videomode) end

---
---Loads a bitmap from file (an event of ID orxDISPLAY_EVENT_BITMAP_LOAD will be sent upon completion, whether the loading is asynchronous or not)
---
---@param _filename string # Name of the file to load
---@return orxBITMAP # orxBITMAP * / nil
function lorx.display.loadBitmap(_filename) end

---
---Create a new orxRGBA
---
---@param _u8R integer # 
---@param _u8G integer # 
---@param _u8B integer # 
---@param _u8A integer # 
---@return orxRGBA # The new instance
function lorx.display.rgba(_u8R, _u8G, _u8B, _u8A) end

---
---Sets all components of an orxRGBA
---
---@param _r integer # Red value to set
---@param _g integer # Green value to set
---@param _b integer # Blue value to set
---@param _a integer # Alpha value to set
---@return orxRGBA # orxRGBA
function lorx.display.rgbaSet(_r, _g, _b, _a) end

---
---Sets a bitmap clipping for blitting (both as source and destination)
---
---@param _bitmap orxBITMAP # Concerned bitmap, nil to target the first destination bitmap
---@param _tlx integer # Top left X coord in pixels
---@param _tly integer # Top left Y coord in pixels
---@param _brx integer # Bottom right X coord in pixels
---@param _bry integer # Bottom right Y coord in pixels
---@return orxSTATUS # success / failure
function lorx.display.setBitmapClipping(_bitmap, _tlx, _tly, _brx, _bry) end

---
---Sets current blend mode
---
---@param _blendmode orxDISPLAY_BLEND_MODE # Blend mode to set
---@return orxSTATUS # success / failure
function lorx.display.setBlendMode(_blendmode) end

---
---Sets destination bitmaps
---
---@param _bitmaplist orxBITMAP[] # Destination bitmap list
---@param _number integer # Number of destination bitmaps
---@return orxSTATUS # success / failure
function lorx.display.setDestinationBitmaps(_bitmaplist, _number) end

---
---Sets full screen mode
---
---@param _fullscreen boolean # true / false
---@return orxSTATUS # success / failure
function lorx.display.setFullScreen(_fullscreen) end

---
---Sets a shader parameter (orxBITMAP)
---
---@param _shader orxHANDLE # Concerned shader
---@param _id integer # ID of parameter to set
---@param _value orxBITMAP # (const) Value (orxBITMAP) for this parameter
---@return orxSTATUS # success / failure
function lorx.display.setShaderBitmap(_shader, _id, _value) end

---
---Sets a shader parameter (orxFLOAT)
---
---@param _shader orxHANDLE # Concerned shader
---@param _id integer # ID of parameter to set
---@param _value number # Value (orxFLOAT) for this parameter
---@return orxSTATUS # success / failure
function lorx.display.setShaderFloat(_shader, _id, _value) end

---
---Sets a shader parameter (orxVECTOR)
---
---@param _shader orxHANDLE # Concerned shader
---@param _id integer # ID of parameter to set
---@param _value orxVECTOR # (const) Value (orxVECTOR) for this parameter
---@return orxSTATUS # success / failure
function lorx.display.setShaderVector(_shader, _id, _value) end

---
---Sets temp bitmap, if a valid temp bitmap is given, load operations will be asynchronous
---
---@param _bitmap orxBITMAP # (const) Concerned bitmap, nil for forcing synchronous load operations
---@return orxSTATUS # success / failure
function lorx.display.setTempBitmap(_bitmap) end

---
---Sets a video mode
---
---@param _videomode orxDISPLAY_VIDEO_MODE # (const) Video mode to set, if width, height, depth or refresh rate are 0, the monitor's default values will be used instead
---@return orxSTATUS # success / failure
function lorx.display.setVideoMode(_videomode) end

---
---Display module setup
---
function lorx.display.setup() end

---
---Starts a shader rendering
---
---@param _shader orxHANDLE # Shader to start
---@return orxSTATUS # success / failure
function lorx.display.startShader(_shader) end

---
---Stops a shader rendering
---
---@param _shader orxHANDLE # Shader to stop
---@return orxSTATUS # success / failure
function lorx.display.stopShader(_shader) end

---
---Swaps/flips bufers (display on screen the current frame)
---
---@return orxSTATUS # success / failure
function lorx.display.swap() end

---
---Transforms (and blits onto another) a bitmap
---
---@param _src orxBITMAP # (const) Bitmap to transform and draw
---@param _transform orxDISPLAY_TRANSFORM # (const) Transformation info (position, scale, rotation, ...)
---@param _color orxRGBA # Color
---@param _smoothing orxDISPLAY_SMOOTHING # Bitmap smoothing type
---@param _blendmode orxDISPLAY_BLEND_MODE # Blend mode
---@return orxSTATUS # success / failure
function lorx.display.transformBitmap(_src, _transform, _color, _smoothing, _blendmode) end

---
---Transforms a text (onto a bitmap)
---
---@param _string string # String to display
---@param _font orxBITMAP # (const) Font bitmap
---@param _map orxCHARACTER_MAP # (const) Character map
---@param _transform orxDISPLAY_TRANSFORM # (const) Transformation info (position, scale, rotation, ...)
---@param _color orxRGBA # Color
---@param _smoothing orxDISPLAY_SMOOTHING # Bitmap smoothing type
---@param _blendmode orxDISPLAY_BLEND_MODE # Blend mode
---@return orxSTATUS # success / failure
function lorx.display.transformText(_string, _font, _map, _transform, _color, _smoothing, _blendmode) end

