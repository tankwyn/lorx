# module display

## functions

### **`characterGlyph`**

* Signature:

```lua
r1 = characterGlyph(fX, fY, fWidth)
```

* Description:

> Create a new [orxCHARACTER_GLYPH](../types/orxCHARACTER_GLYPH.md) 

* Params:

name | type | description 
--- | --- | ---
fX | number | 
fY | number | 
fWidth | number | 

* Returns:

type | description 
--- | ---
[orxCHARACTER_GLYPH](../types/orxCHARACTER_GLYPH.md)  | The new instance

---

### **`clearBitmap`**

* Signature:

```lua
r1 = clearBitmap(bitmap, color)
```

* Description:

> Clears a bitmap

* Params:

name | type | description 
--- | --- | ---
bitmap | [orxBITMAP](../types/orxBITMAP.md)  | Concerned bitmap, if nil all the current destination bitmaps will be cleared instead
color | [orxRGBA](../types/orxRGBA.md)  | Color to clear the bitmap with

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxDisplay_ClearBitmap(orxBITMAP *_pstBitmap, orxRGBA _stColor)
```

---

### **`color`**

* Signature:

```lua
r1 = color(vRGB, fAlpha)
```

* Description:

> Create a new [orxCOLOR](../types/orxCOLOR.md) 

* Params:

name | type | description 
--- | --- | ---
vRGB | [orxVECTOR](../types/orxVECTOR.md)  | 
fAlpha | number | 

* Returns:

type | description 
--- | ---
[orxCOLOR](../types/orxCOLOR.md)  | The new instance

---

### **`createBitmap`**

* Signature:

```lua
r1 = createBitmap(width, height)
```

* Description:

> Creates a bitmap

* Params:

name | type | description 
--- | --- | ---
width | integer | Bitmap width
height | integer | Bitmap height

* Returns:

type | description 
--- | ---
[orxBITMAP](../types/orxBITMAP.md)  | [orxBITMAP](../types/orxBITMAP.md) / nil

* C signature:

```c
  orxBITMAP * orxDisplay_CreateBitmap(orxU32 _u32Width, orxU32 _u32Height)
```

---

### **`deleteShader`**

* Signature:

```lua
deleteShader(shader)
```

* Description:

> Deletes a compiled shader

* Params:

name | type | description 
--- | --- | ---
shader | orxHANDLE | Shader to delete

* Returns:

* C signature:

```c
  void  orxDisplay_DeleteShader(orxHANDLE _hShader)
```

---

### **`displayTransform`**

* Signature:

```lua
r1 = displayTransform(fSrcX, fSrcY, fDstX, fDstY, fRepeatX, fRepeatY, fScaleX, fScaleY, fRotation)
```

* Description:

> Create a new [orxDISPLAY_TRANSFORM](../types/orxDISPLAY_TRANSFORM.md) 

* Params:

name | type | description 
--- | --- | ---
fSrcX | number | 
fSrcY | number | 
fDstX | number | 
fDstY | number | 
fRepeatX | number | 
fRepeatY | number | 
fScaleX | number | 
fScaleY | number | 
fRotation | number | 

* Returns:

type | description 
--- | ---
[orxDISPLAY_TRANSFORM](../types/orxDISPLAY_TRANSFORM.md)  | The new instance

---

### **`displayVideoMode`**

* Signature:

```lua
r1 = displayVideoMode(u32Width, u32Height, u32Depth, u32RefreshRate, bFullScreen)
```

* Description:

> Create a new [orxDISPLAY_VIDEO_MODE](../types/orxDISPLAY_VIDEO_MODE.md) 

* Params:

name | type | description 
--- | --- | ---
u32Width | integer | 
u32Height | integer | 
u32Depth | integer | 
u32RefreshRate | integer | 
bFullScreen | boolean | 

* Returns:

type | description 
--- | ---
[orxDISPLAY_VIDEO_MODE](../types/orxDISPLAY_VIDEO_MODE.md)  | The new instance

---

### **`drawCircle`**

* Signature:

```lua
r1 = drawCircle(center, radius, color, fill)
```

* Description:

> Draws a circle

* Params:

name | type | description 
--- | --- | ---
center | [orxVECTOR\#](../types/orxVECTOR.md) | Center
radius | number | Radius
color | [orxRGBA](../types/orxRGBA.md)  | Color
fill | boolean | If true, the polygon will be filled otherwise only its outline will be drawn

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxDisplay_DrawCircle(const orxVECTOR *_pvCenter, orxFLOAT _fRadius, orxRGBA _stColor, orxBOOL _bFill)
```

---

### **`drawLine`**

* Signature:

```lua
r1 = drawLine(start, end, color)
```

* Description:

> Draws a line

* Params:

name | type | description 
--- | --- | ---
start | [orxVECTOR\#](../types/orxVECTOR.md) | Start point
end | [orxVECTOR\#](../types/orxVECTOR.md) | End point
color | [orxRGBA](../types/orxRGBA.md)  | Color

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxDisplay_DrawLine(const orxVECTOR *_pvStart, const orxVECTOR *_pvEnd, orxRGBA _stColor)
```

---

### **`drawMesh`**

* Signature:

```lua
r1 = drawMesh(mesh, bitmap, smoothing, blendmode)
```

* Description:

> Draws a textured mesh

* Params:

name | type | description 
--- | --- | ---
mesh | [orxDISPLAY_MESH\#](../types/orxDISPLAY_MESH.md) | Mesh to draw, if no primitive and no index buffer is given, separate quads arrangement will be assumed
bitmap | [orxBITMAP\#](../types/orxBITMAP.md) | Bitmap to use for texturing, nil to use the current one
smoothing | [orxDISPLAY_SMOOTHING](../enums.md#orxdisplay_smoothing)  | Bitmap smoothing type
blendmode | [orxDISPLAY_BLEND_MODE](../enums.md#orxdisplay_blend_mode)  | Blend mode

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxDisplay_DrawMesh(const orxDISPLAY_MESH *_pstMesh, const orxBITMAP *_pstBitmap, orxDISPLAY_SMOOTHING _eSmoothing, orxDISPLAY_BLEND_MODE _eBlendMode)
```

---

### **`drawOBox`**

* Signature:

```lua
r1 = drawOBox(box, color, fill)
```

* Description:

> Draws an oriented box

* Params:

name | type | description 
--- | --- | ---
box | [orxOBOX\#](../types/orxOBOX.md) | Box to draw
color | [orxRGBA](../types/orxRGBA.md)  | Color
fill | boolean | If true, the polygon will be filled otherwise only its outline will be drawn

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxDisplay_DrawOBox(const orxOBOX *_pstBox, orxRGBA _stColor, orxBOOL _bFill)
```

---

### **`drawPolygon`**

* Signature:

```lua
r1 = drawPolygon(vertexlist, vertexnumber, color, fill)
```

* Description:

> Draws a \(closed\) polygon; filled polygons \*need\* to be either convex or star-shaped concave with the first vertex part of the polygon's kernel

* Params:

name | type | description 
--- | --- | ---
vertexlist | table of [orxVECTOR](../types/orxVECTOR.md)  | List of vertices
vertexnumber | integer | Number of vertices in the list
color | [orxRGBA](../types/orxRGBA.md)  | Color
fill | boolean | If true, the polygon will be filled otherwise only its outline will be drawn

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxDisplay_DrawPolygon(const orxVECTOR *_avVertexList, orxU32 _u32VertexNumber, orxRGBA _stColor, orxBOOL _bFill)
```

---

### **`drawPolyline`**

* Signature:

```lua
r1 = drawPolyline(vertexlist, vertexnumber, color)
```

* Description:

> Draws a polyline \(aka open polygon\)

* Params:

name | type | description 
--- | --- | ---
vertexlist | table of [orxVECTOR](../types/orxVECTOR.md)  | List of vertices
vertexnumber | integer | Number of vertices in the list
color | [orxRGBA](../types/orxRGBA.md)  | Color

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxDisplay_DrawPolyline(const orxVECTOR *_avVertexList, orxU32 _u32VertexNumber, orxRGBA _stColor)
```

---

### **`enableVSync`**

* Signature:

```lua
r1 = enableVSync(enable)
```

* Description:

> Enables / disables vertical synchro

* Params:

name | type | description 
--- | --- | ---
enable | boolean | Enable / disable

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxDisplay_EnableVSync(orxBOOL _bEnable)
```

---

### **`exit`**

* Signature:

```lua
exit()
```

* Description:

> Exits from the display module

* Params:

* Returns:

* C signature:

```c
  void  orxDisplay_Exit()
```

---

### **`getBlendModeFromString`**

* Signature:

```lua
r1 = getBlendModeFromString(blendmode)
```

* Description:

> Gets blend mode from a string

* Params:

name | type | description 
--- | --- | ---
blendmode | string | String to evaluate

* Returns:

type | description 
--- | ---
[orxDISPLAY_BLEND_MODE](../enums.md#orxdisplay_blend_mode)  | [orxDISPLAY_BLEND_MODE](../enums.md#orxdisplay_blend_mode) 

* C signature:

```c
  orxDISPLAY_BLEND_MODE  orxDisplay_GetBlendModeFromString(const orxSTRING _zBlendMode)
```

---

### **`getParameterID`**

* Signature:

```lua
r1 = getParameterID(shader, param, index, istexture)
```

* Description:

> Gets a shader parameter's ID

* Params:

name | type | description 
--- | --- | ---
shader | orxHANDLE | Concerned shader
param | string | Parameter name
index | integer | Parameter index, -1 for non-array types
istexture | boolean | Is parameter a texture?

* Returns:

type | description 
--- | ---
integer | Parameter ID

* C signature:

```c
  orxS32  orxDisplay_GetParameterID(orxHANDLE _hShader, const orxSTRING _zParam, orxS32 _s32Index, orxBOOL _bIsTexture)
```

---

### **`getScreenBitmap`**

* Signature:

```lua
r1 = getScreenBitmap()
```

* Description:

> Gets screen bitmap

* Params:

* Returns:

type | description 
--- | ---
[orxBITMAP](../types/orxBITMAP.md)  | [orxBITMAP](../types/orxBITMAP.md) / nil

* C signature:

```c
  orxBITMAP * orxDisplay_GetScreenBitmap()
```

---

### **`getScreenSize`**

* Signature:

```lua
r1, r2, r3 = getScreenSize()
```

* Description:

> Gets screen size

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure
number | Screen width
number | Screen height

* C signature:

```c
  orxSTATUS  orxDisplay_GetScreenSize(orxFLOAT *_pfWidth, orxFLOAT *_pfHeight)
```

---

### **`getShaderID`**

* Signature:

```lua
r1 = getShaderID(shader)
```

* Description:

> Gets a shader \(internal\) ID

* Params:

name | type | description 
--- | --- | ---
shader | orxHANDLE | Concerned bitmap

* Returns:

type | description 
--- | ---
integer | integer \(u32\)

* C signature:

```c
  orxU32  orxDisplay_GetShaderID(const orxHANDLE _hShader)
```

---

### **`getTempBitmapConst`**

* Signature:

```lua
r1 = getTempBitmapConst()
```

* Description:

> Gets current temp bitmap

* Params:

* Returns:

type | description 
--- | ---
[orxBITMAP\#](../types/orxBITMAP.md) | orxBITMAP, if non-null, load operations are currently asynchronous, otherwise they're synchronous

* C signature:

```c
  const orxBITMAP * orxDisplay_GetTempBitmap()
```

---

### **`getVideoMode`**

* Signature:

```lua
r1 = getVideoMode(index)
```

* Description:

> Gets an available video mode

* Params:

name | type | description 
--- | --- | ---
index | integer | Video mode index, pass _u32Index < orxDisplay_GetVideoModeCount\(\) for an available listed mode, [orxU32_UNDEFINED](./constants.md#orxu32_undefined) for the the default \(desktop\) mode and any other value for current mode

* Returns:

type | description 
--- | ---
[orxDISPLAY_VIDEO_MODE](../types/orxDISPLAY_VIDEO_MODE.md)  | [orxDISPLAY_VIDEO_MODE](../types/orxDISPLAY_VIDEO_MODE.md) / nil if invalid

* C signature:

```c
  orxDISPLAY_VIDEO_MODE * orxDisplay_GetVideoMode(orxU32 _u32Index, orxDISPLAY_VIDEO_MODE *_pstVideoMode)
```

---

### **`getVideoModeCount`**

* Signature:

```lua
r1 = getVideoModeCount()
```

* Description:

> Gets available video mode count

* Params:

* Returns:

type | description 
--- | ---
integer | Available video mode count

* C signature:

```c
  orxU32  orxDisplay_GetVideoModeCount()
```

---

### **`hasShaderSupport`**

* Signature:

```lua
r1 = hasShaderSupport()
```

* Description:

> Has shader support?

* Params:

* Returns:

type | description 
--- | ---
boolean | true / false

* C signature:

```c
  orxBOOL  orxDisplay_HasShaderSupport()
```

---

### **`init`**

* Signature:

```lua
r1 = init()
```

* Description:

> Inits the display module

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxDisplay_Init()
```

---

### **`isFullScreen`**

* Signature:

```lua
r1 = isFullScreen()
```

* Description:

> Is in full screen mode?

* Params:

* Returns:

type | description 
--- | ---
boolean | true if full screen, false otherwise

* C signature:

```c
  orxBOOL  orxDisplay_IsFullScreen()
```

---

### **`isVSyncEnabled`**

* Signature:

```lua
r1 = isVSyncEnabled()
```

* Description:

> Is vertical synchro enabled?

* Params:

* Returns:

type | description 
--- | ---
boolean | true if enabled, false otherwise

* C signature:

```c
  orxBOOL  orxDisplay_IsVSyncEnabled()
```

---

### **`isVideoModeAvailable`**

* Signature:

```lua
r1 = isVideoModeAvailable(videomode)
```

* Description:

> Is video mode available

* Params:

name | type | description 
--- | --- | ---
videomode | [orxDISPLAY_VIDEO_MODE\#](../types/orxDISPLAY_VIDEO_MODE.md) | Video mode to test

* Returns:

type | description 
--- | ---
boolean | true is available, false otherwise

* C signature:

```c
  orxBOOL  orxDisplay_IsVideoModeAvailable(const orxDISPLAY_VIDEO_MODE *_pstVideoMode)
```

---

### **`loadBitmap`**

* Signature:

```lua
r1 = loadBitmap(filename)
```

* Description:

> Loads a bitmap from file \(an event of ID orxDISPLAY_EVENT_BITMAP_LOAD will be sent upon completion, whether the loading is asynchronous or not\)

* Params:

name | type | description 
--- | --- | ---
filename | string | Name of the file to load

* Returns:

type | description 
--- | ---
[orxBITMAP](../types/orxBITMAP.md)  | [orxBITMAP](../types/orxBITMAP.md) \* / nil

* C signature:

```c
  orxBITMAP * orxDisplay_LoadBitmap(const orxSTRING _zFileName)
```

---

### **`rgba`**

* Signature:

```lua
r1 = rgba(u8R, u8G, u8B, u8A)
```

* Description:

> Create a new [orxRGBA](../types/orxRGBA.md) 

* Params:

name | type | description 
--- | --- | ---
u8R | integer | 
u8G | integer | 
u8B | integer | 
u8A | integer | 

* Returns:

type | description 
--- | ---
[orxRGBA](../types/orxRGBA.md)  | The new instance

---

### **`rgbaSet`**

* Signature:

```lua
r1 = rgbaSet(r, g, b, a)
```

* Description:

> Sets all components of an [orxRGBA](../types/orxRGBA.md) 

* Params:

name | type | description 
--- | --- | ---
r | integer | Red value to set
g | integer | Green value to set
b | integer | Blue value to set
a | integer | Alpha value to set

* Returns:

type | description 
--- | ---
[orxRGBA](../types/orxRGBA.md)  | [orxRGBA](../types/orxRGBA.md) 

* C signature:

```c
  orxRGBA orxRGBA_Set(orxU8 _u8R, orxU8 _u8G, orxU8 _u8B, orxU8 _u8A)
```

---

### **`setBitmapClipping`**

* Signature:

```lua
r1 = setBitmapClipping(bitmap, tlx, tly, brx, bry)
```

* Description:

> Sets a bitmap clipping for blitting \(both as source and destination\)

* Params:

name | type | description 
--- | --- | ---
bitmap | [orxBITMAP](../types/orxBITMAP.md)  | Concerned bitmap, nil to target the first destination bitmap
tlx | integer | Top left X coord in pixels
tly | integer | Top left Y coord in pixels
brx | integer | Bottom right X coord in pixels
bry | integer | Bottom right Y coord in pixels

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxDisplay_SetBitmapClipping(orxBITMAP *_pstBitmap, orxU32 _u32TLX, orxU32 _u32TLY, orxU32 _u32BRX, orxU32 _u32BRY)
```

---

### **`setBlendMode`**

* Signature:

```lua
r1 = setBlendMode(blendmode)
```

* Description:

> Sets current blend mode

* Params:

name | type | description 
--- | --- | ---
blendmode | [orxDISPLAY_BLEND_MODE](../enums.md#orxdisplay_blend_mode)  | Blend mode to set

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxDisplay_SetBlendMode(orxDISPLAY_BLEND_MODE _eBlendMode)
```

---

### **`setDestinationBitmaps`**

* Signature:

```lua
r1 = setDestinationBitmaps(bitmaplist, number)
```

* Description:

> Sets destination bitmaps

* Params:

name | type | description 
--- | --- | ---
bitmaplist | table of [orxBITMAP](../types/orxBITMAP.md)  | Destination bitmap list
number | integer | Number of destination bitmaps

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxDisplay_SetDestinationBitmaps(orxBITMAP **_apstBitmapList, orxU32 _u32Number)
```

---

### **`setFullScreen`**

* Signature:

```lua
r1 = setFullScreen(fullscreen)
```

* Description:

> Sets full screen mode

* Params:

name | type | description 
--- | --- | ---
fullscreen | boolean | true / false

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxDisplay_SetFullScreen(orxBOOL _bFullScreen)
```

---

### **`setShaderBitmap`**

* Signature:

```lua
r1 = setShaderBitmap(shader, id, value)
```

* Description:

> Sets a shader parameter \(orxBITMAP\)

* Params:

name | type | description 
--- | --- | ---
shader | orxHANDLE | Concerned shader
id | integer | ID of parameter to set
value | [orxBITMAP\#](../types/orxBITMAP.md) | Value \(orxBITMAP\) for this parameter

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxDisplay_SetShaderBitmap(orxHANDLE _hShader, orxS32 _s32ID, const orxBITMAP *_pstValue)
```

---

### **`setShaderFloat`**

* Signature:

```lua
r1 = setShaderFloat(shader, id, value)
```

* Description:

> Sets a shader parameter \(orxFLOAT\)

* Params:

name | type | description 
--- | --- | ---
shader | orxHANDLE | Concerned shader
id | integer | ID of parameter to set
value | number | Value \(orxFLOAT\) for this parameter

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxDisplay_SetShaderFloat(orxHANDLE _hShader, orxS32 _s32ID, orxFLOAT _fValue)
```

---

### **`setShaderVector`**

* Signature:

```lua
r1 = setShaderVector(shader, id, value)
```

* Description:

> Sets a shader parameter \(orxVECTOR\)

* Params:

name | type | description 
--- | --- | ---
shader | orxHANDLE | Concerned shader
id | integer | ID of parameter to set
value | [orxVECTOR\#](../types/orxVECTOR.md) | Value \(orxVECTOR\) for this parameter

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxDisplay_SetShaderVector(orxHANDLE _hShader, orxS32 _s32ID, const orxVECTOR *_pvValue)
```

---

### **`setTempBitmap`**

* Signature:

```lua
r1 = setTempBitmap(bitmap)
```

* Description:

> Sets temp bitmap, if a valid temp bitmap is given, load operations will be asynchronous

* Params:

name | type | description 
--- | --- | ---
bitmap | [orxBITMAP\#](../types/orxBITMAP.md) | Concerned bitmap, nil for forcing synchronous load operations

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxDisplay_SetTempBitmap(const orxBITMAP *_pstBitmap)
```

---

### **`setVideoMode`**

* Signature:

```lua
r1 = setVideoMode(videomode)
```

* Description:

> Sets a video mode

* Params:

name | type | description 
--- | --- | ---
videomode | [orxDISPLAY_VIDEO_MODE\#](../types/orxDISPLAY_VIDEO_MODE.md) | Video mode to set, if width, height, depth or refresh rate are 0, the monitor's default values will be used instead

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxDisplay_SetVideoMode(const orxDISPLAY_VIDEO_MODE *_pstVideoMode)
```

---

### **`setup`**

* Signature:

```lua
setup()
```

* Description:

> Display module setup

* Params:

* Returns:

* C signature:

```c
  void  orxDisplay_Setup()
```

---

### **`startShader`**

* Signature:

```lua
r1 = startShader(shader)
```

* Description:

> Starts a shader rendering

* Params:

name | type | description 
--- | --- | ---
shader | orxHANDLE | Shader to start

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxDisplay_StartShader(const orxHANDLE _hShader)
```

---

### **`stopShader`**

* Signature:

```lua
r1 = stopShader(shader)
```

* Description:

> Stops a shader rendering

* Params:

name | type | description 
--- | --- | ---
shader | orxHANDLE | Shader to stop

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxDisplay_StopShader(const orxHANDLE _hShader)
```

---

### **`swap`**

* Signature:

```lua
r1 = swap()
```

* Description:

> Swaps/flips bufers \(display on screen the current frame\)

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxDisplay_Swap()
```

---

### **`transformBitmap`**

* Signature:

```lua
r1 = transformBitmap(src, transform, color, smoothing, blendmode)
```

* Description:

> Transforms \(and blits onto another\) a bitmap

* Params:

name | type | description 
--- | --- | ---
src | [orxBITMAP\#](../types/orxBITMAP.md) | Bitmap to transform and draw
transform | [orxDISPLAY_TRANSFORM\#](../types/orxDISPLAY_TRANSFORM.md) | Transformation info \(position, scale, rotation, ...\)
color | [orxRGBA](../types/orxRGBA.md)  | Color
smoothing | [orxDISPLAY_SMOOTHING](../enums.md#orxdisplay_smoothing)  | Bitmap smoothing type
blendmode | [orxDISPLAY_BLEND_MODE](../enums.md#orxdisplay_blend_mode)  | Blend mode

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxDisplay_TransformBitmap(const orxBITMAP *_pstSrc, const orxDISPLAY_TRANSFORM *_pstTransform, orxRGBA _stColor, orxDISPLAY_SMOOTHING _eSmoothing, orxDISPLAY_BLEND_MODE _eBlendMode)
```

---

### **`transformText`**

* Signature:

```lua
r1 = transformText(string, font, map, transform, color, smoothing, blendmode)
```

* Description:

> Transforms a text \(onto a bitmap\)

* Params:

name | type | description 
--- | --- | ---
string | string | String to display
font | [orxBITMAP\#](../types/orxBITMAP.md) | Font bitmap
map | [orxCHARACTER_MAP\#](../types/orxCHARACTER_MAP.md) | Character map
transform | [orxDISPLAY_TRANSFORM\#](../types/orxDISPLAY_TRANSFORM.md) | Transformation info \(position, scale, rotation, ...\)
color | [orxRGBA](../types/orxRGBA.md)  | Color
smoothing | [orxDISPLAY_SMOOTHING](../enums.md#orxdisplay_smoothing)  | Bitmap smoothing type
blendmode | [orxDISPLAY_BLEND_MODE](../enums.md#orxdisplay_blend_mode)  | Blend mode

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxDisplay_TransformText(const orxSTRING _zString, const orxBITMAP *_pstFont, const orxCHARACTER_MAP *_pstMap, const orxDISPLAY_TRANSFORM *_pstTransform, orxRGBA _stColor, orxDISPLAY_SMOOTHING _eSmoothing, orxDISPLAY_BLEND_MODE _eBlendMode)
```

---

