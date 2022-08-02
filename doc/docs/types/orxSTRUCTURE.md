# type orxSTRUCTURE

> 

## Methods

### **`orxSTRUCTURE:addr`**

* Signature:

```lua
r1 = addr()
```

* Description:

> get the c memory address of the lorx userdata

* Params:

* Returns:

type | description 
--- | ---
string | address string

---

### **`orxSTRUCTURE:aeq`**

* Signature:

```lua
r1 = aeq(u)
```

* Description:

> check if the c memory address of this lorx userdata equals to another

* Params:

name | type | description 
--- | --- | ---
u | any lorx utype | another lorx userdata

* Returns:

type | description 
--- | ---
boolean | true or false

---

### **`orxSTRUCTURE:asVoid`**

* Signature:

```lua
r1 = asVoid()
```

* Description:

> convert to a void\*

* Params:

* Returns:

type | description 
--- | ---
void\* | the converted void\*

---

### **`orxSTRUCTURE:toAnim`**

* Signature:

```lua
r1 = toAnim()
```

* Description:

> Convert the [orxSTRUCTURE](./orxSTRUCTURE.md) to an [orxANIM](./orxANIM.md) \(pointer cast\)

* Params:

* Returns:

type | description 
--- | ---
[orxANIM](./orxANIM.md)  | The converted [orxANIM](./orxANIM.md) or nil

* C signature:

```c
#define orxANIM(STRUCTURE)
```

---

### **`orxSTRUCTURE:toAnimConst`**

* Signature:

```lua
r1 = toAnimConst()
```

* Description:

> Convert the [orxSTRUCTURE](./orxSTRUCTURE.md) to an [orxANIM\#](./orxANIM.md) \(pointer cast\)

* Params:

* Returns:

type | description 
--- | ---
[orxANIM\#](./orxANIM.md) | The converted [orxANIM](./orxANIM.md) or nil

* C signature:

```c
#define orxANIM(STRUCTURE)
```

---

### **`orxSTRUCTURE:toAnimPointer`**

* Signature:

```lua
r1 = toAnimPointer()
```

* Description:

> Convert the [orxSTRUCTURE](./orxSTRUCTURE.md) to an [orxANIMPOINTER](./orxANIMPOINTER.md) \(pointer cast\)

* Params:

* Returns:

type | description 
--- | ---
[orxANIMPOINTER](./orxANIMPOINTER.md)  | The converted [orxANIMPOINTER](./orxANIMPOINTER.md) or nil

* C signature:

```c
#define orxANIMPOINTER(STRUCTURE)
```

---

### **`orxSTRUCTURE:toAnimPointerConst`**

* Signature:

```lua
r1 = toAnimPointerConst()
```

* Description:

> Convert the [orxSTRUCTURE](./orxSTRUCTURE.md) to an [orxANIMPOINTER\#](./orxANIMPOINTER.md) \(pointer cast\)

* Params:

* Returns:

type | description 
--- | ---
[orxANIMPOINTER\#](./orxANIMPOINTER.md) | The converted [orxANIMPOINTER](./orxANIMPOINTER.md) or nil

* C signature:

```c
#define orxANIMPOINTER(STRUCTURE)
```

---

### **`orxSTRUCTURE:toAnimSet`**

* Signature:

```lua
r1 = toAnimSet()
```

* Description:

> Convert the [orxSTRUCTURE](./orxSTRUCTURE.md) to an [orxANIMSET](./orxANIMSET.md) \(pointer cast\)

* Params:

* Returns:

type | description 
--- | ---
[orxANIMSET](./orxANIMSET.md)  | The converted [orxANIMSET](./orxANIMSET.md) or nil

* C signature:

```c
#define orxANIMSET(STRUCTURE)
```

---

### **`orxSTRUCTURE:toAnimSetConst`**

* Signature:

```lua
r1 = toAnimSetConst()
```

* Description:

> Convert the [orxSTRUCTURE](./orxSTRUCTURE.md) to an [orxANIMSET\#](./orxANIMSET.md) \(pointer cast\)

* Params:

* Returns:

type | description 
--- | ---
[orxANIMSET\#](./orxANIMSET.md) | The converted [orxANIMSET](./orxANIMSET.md) or nil

* C signature:

```c
#define orxANIMSET(STRUCTURE)
```

---

### **`orxSTRUCTURE:toBody`**

* Signature:

```lua
r1 = toBody()
```

* Description:

> Convert the [orxSTRUCTURE](./orxSTRUCTURE.md) to an [orxBODY](./orxBODY.md) \(pointer cast\)

* Params:

* Returns:

type | description 
--- | ---
[orxBODY](./orxBODY.md)  | The converted [orxBODY](./orxBODY.md) or nil

* C signature:

```c
#define orxBODY(STRUCTURE)
```

---

### **`orxSTRUCTURE:toBodyConst`**

* Signature:

```lua
r1 = toBodyConst()
```

* Description:

> Convert the [orxSTRUCTURE](./orxSTRUCTURE.md) to an [orxBODY\#](./orxBODY.md) \(pointer cast\)

* Params:

* Returns:

type | description 
--- | ---
[orxBODY\#](./orxBODY.md) | The converted [orxBODY](./orxBODY.md) or nil

* C signature:

```c
#define orxBODY(STRUCTURE)
```

---

### **`orxSTRUCTURE:toCamera`**

* Signature:

```lua
r1 = toCamera()
```

* Description:

> Convert the [orxSTRUCTURE](./orxSTRUCTURE.md) to an [orxCAMERA](./orxCAMERA.md) \(pointer cast\)

* Params:

* Returns:

type | description 
--- | ---
[orxCAMERA](./orxCAMERA.md)  | The converted [orxCAMERA](./orxCAMERA.md) or nil

* C signature:

```c
#define orxCAMERA(STRUCTURE)
```

---

### **`orxSTRUCTURE:toCameraConst`**

* Signature:

```lua
r1 = toCameraConst()
```

* Description:

> Convert the [orxSTRUCTURE](./orxSTRUCTURE.md) to an [orxCAMERA\#](./orxCAMERA.md) \(pointer cast\)

* Params:

* Returns:

type | description 
--- | ---
[orxCAMERA\#](./orxCAMERA.md) | The converted [orxCAMERA](./orxCAMERA.md) or nil

* C signature:

```c
#define orxCAMERA(STRUCTURE)
```

---

### **`orxSTRUCTURE:toClock`**

* Signature:

```lua
r1 = toClock()
```

* Description:

> Convert the [orxSTRUCTURE](./orxSTRUCTURE.md) to an [orxCLOCK](./orxCLOCK.md) \(pointer cast\)

* Params:

* Returns:

type | description 
--- | ---
[orxCLOCK](./orxCLOCK.md)  | The converted [orxCLOCK](./orxCLOCK.md) or nil

* C signature:

```c
#define orxCLOCK(STRUCTURE)
```

---

### **`orxSTRUCTURE:toClockConst`**

* Signature:

```lua
r1 = toClockConst()
```

* Description:

> Convert the [orxSTRUCTURE](./orxSTRUCTURE.md) to an [orxCLOCK\#](./orxCLOCK.md) \(pointer cast\)

* Params:

* Returns:

type | description 
--- | ---
[orxCLOCK\#](./orxCLOCK.md) | The converted [orxCLOCK](./orxCLOCK.md) or nil

* C signature:

```c
#define orxCLOCK(STRUCTURE)
```

---

### **`orxSTRUCTURE:toFX`**

* Signature:

```lua
r1 = toFX()
```

* Description:

> Convert the [orxSTRUCTURE](./orxSTRUCTURE.md) to an [orxFX](./orxFX.md) \(pointer cast\)

* Params:

* Returns:

type | description 
--- | ---
[orxFX](./orxFX.md)  | The converted [orxFX](./orxFX.md) or nil

* C signature:

```c
#define orxFX(STRUCTURE)
```

---

### **`orxSTRUCTURE:toFXConst`**

* Signature:

```lua
r1 = toFXConst()
```

* Description:

> Convert the [orxSTRUCTURE](./orxSTRUCTURE.md) to an [orxFX\#](./orxFX.md) \(pointer cast\)

* Params:

* Returns:

type | description 
--- | ---
[orxFX\#](./orxFX.md) | The converted [orxFX](./orxFX.md) or nil

* C signature:

```c
#define orxFX(STRUCTURE)
```

---

### **`orxSTRUCTURE:toFXPointer`**

* Signature:

```lua
r1 = toFXPointer()
```

* Description:

> Convert the [orxSTRUCTURE](./orxSTRUCTURE.md) to an [orxFXPOINTER](./orxFXPOINTER.md) \(pointer cast\)

* Params:

* Returns:

type | description 
--- | ---
[orxFXPOINTER](./orxFXPOINTER.md)  | The converted [orxFXPOINTER](./orxFXPOINTER.md) or nil

* C signature:

```c
#define orxFXPOINTER(STRUCTURE)
```

---

### **`orxSTRUCTURE:toFXPointerConst`**

* Signature:

```lua
r1 = toFXPointerConst()
```

* Description:

> Convert the [orxSTRUCTURE](./orxSTRUCTURE.md) to an [orxFXPOINTER\#](./orxFXPOINTER.md) \(pointer cast\)

* Params:

* Returns:

type | description 
--- | ---
[orxFXPOINTER\#](./orxFXPOINTER.md) | The converted [orxFXPOINTER](./orxFXPOINTER.md) or nil

* C signature:

```c
#define orxFXPOINTER(STRUCTURE)
```

---

### **`orxSTRUCTURE:toFont`**

* Signature:

```lua
r1 = toFont()
```

* Description:

> Convert the [orxSTRUCTURE](./orxSTRUCTURE.md) to an [orxFONT](./orxFONT.md) \(pointer cast\)

* Params:

* Returns:

type | description 
--- | ---
[orxFONT](./orxFONT.md)  | The converted [orxFONT](./orxFONT.md) or nil

* C signature:

```c
#define orxFONT(STRUCTURE)
```

---

### **`orxSTRUCTURE:toFontConst`**

* Signature:

```lua
r1 = toFontConst()
```

* Description:

> Convert the [orxSTRUCTURE](./orxSTRUCTURE.md) to an [orxFONT\#](./orxFONT.md) \(pointer cast\)

* Params:

* Returns:

type | description 
--- | ---
[orxFONT\#](./orxFONT.md) | The converted [orxFONT](./orxFONT.md) or nil

* C signature:

```c
#define orxFONT(STRUCTURE)
```

---

### **`orxSTRUCTURE:toFrame`**

* Signature:

```lua
r1 = toFrame()
```

* Description:

> Convert the [orxSTRUCTURE](./orxSTRUCTURE.md) to an [orxFRAME](./orxFRAME.md) \(pointer cast\)

* Params:

* Returns:

type | description 
--- | ---
[orxFRAME](./orxFRAME.md)  | The converted [orxFRAME](./orxFRAME.md) or nil

* C signature:

```c
#define orxFRAME(STRUCTURE)
```

---

### **`orxSTRUCTURE:toFrameConst`**

* Signature:

```lua
r1 = toFrameConst()
```

* Description:

> Convert the [orxSTRUCTURE](./orxSTRUCTURE.md) to an [orxFRAME\#](./orxFRAME.md) \(pointer cast\)

* Params:

* Returns:

type | description 
--- | ---
[orxFRAME\#](./orxFRAME.md) | The converted [orxFRAME](./orxFRAME.md) or nil

* C signature:

```c
#define orxFRAME(STRUCTURE)
```

---

### **`orxSTRUCTURE:toGraphic`**

* Signature:

```lua
r1 = toGraphic()
```

* Description:

> Convert the [orxSTRUCTURE](./orxSTRUCTURE.md) to an [orxGRAPHIC](./orxGRAPHIC.md) \(pointer cast\)

* Params:

* Returns:

type | description 
--- | ---
[orxGRAPHIC](./orxGRAPHIC.md)  | The converted [orxGRAPHIC](./orxGRAPHIC.md) or nil

* C signature:

```c
#define orxGRAPHIC(STRUCTURE)
```

---

### **`orxSTRUCTURE:toGraphicConst`**

* Signature:

```lua
r1 = toGraphicConst()
```

* Description:

> Convert the [orxSTRUCTURE](./orxSTRUCTURE.md) to an [orxGRAPHIC\#](./orxGRAPHIC.md) \(pointer cast\)

* Params:

* Returns:

type | description 
--- | ---
[orxGRAPHIC\#](./orxGRAPHIC.md) | The converted [orxGRAPHIC](./orxGRAPHIC.md) or nil

* C signature:

```c
#define orxGRAPHIC(STRUCTURE)
```

---

### **`orxSTRUCTURE:toObject`**

* Signature:

```lua
r1 = toObject()
```

* Description:

> Convert the [orxSTRUCTURE](./orxSTRUCTURE.md) to an [orxOBJECT](./orxOBJECT.md) \(pointer cast\)

* Params:

* Returns:

type | description 
--- | ---
[orxOBJECT](./orxOBJECT.md)  | The converted [orxOBJECT](./orxOBJECT.md) or nil

* C signature:

```c
#define orxOBJECT(STRUCTURE)
```

---

### **`orxSTRUCTURE:toObjectConst`**

* Signature:

```lua
r1 = toObjectConst()
```

* Description:

> Convert the [orxSTRUCTURE](./orxSTRUCTURE.md) to an [orxOBJECT\#](./orxOBJECT.md) \(pointer cast\)

* Params:

* Returns:

type | description 
--- | ---
[orxOBJECT\#](./orxOBJECT.md) | The converted [orxOBJECT](./orxOBJECT.md) or nil

* C signature:

```c
#define orxOBJECT(STRUCTURE)
```

---

### **`orxSTRUCTURE:toShader`**

* Signature:

```lua
r1 = toShader()
```

* Description:

> Convert the [orxSTRUCTURE](./orxSTRUCTURE.md) to an [orxSHADER](./orxSHADER.md) \(pointer cast\)

* Params:

* Returns:

type | description 
--- | ---
[orxSHADER](./orxSHADER.md)  | The converted [orxSHADER](./orxSHADER.md) or nil

* C signature:

```c
#define orxSHADER(STRUCTURE)
```

---

### **`orxSTRUCTURE:toShaderConst`**

* Signature:

```lua
r1 = toShaderConst()
```

* Description:

> Convert the [orxSTRUCTURE](./orxSTRUCTURE.md) to an [orxSHADER\#](./orxSHADER.md) \(pointer cast\)

* Params:

* Returns:

type | description 
--- | ---
[orxSHADER\#](./orxSHADER.md) | The converted [orxSHADER](./orxSHADER.md) or nil

* C signature:

```c
#define orxSHADER(STRUCTURE)
```

---

### **`orxSTRUCTURE:toShaderPointer`**

* Signature:

```lua
r1 = toShaderPointer()
```

* Description:

> Convert the [orxSTRUCTURE](./orxSTRUCTURE.md) to an [orxSHADERPOINTER](./orxSHADERPOINTER.md) \(pointer cast\)

* Params:

* Returns:

type | description 
--- | ---
[orxSHADERPOINTER](./orxSHADERPOINTER.md)  | The converted [orxSHADERPOINTER](./orxSHADERPOINTER.md) or nil

* C signature:

```c
#define orxSHADERPOINTER(STRUCTURE)
```

---

### **`orxSTRUCTURE:toShaderPointerConst`**

* Signature:

```lua
r1 = toShaderPointerConst()
```

* Description:

> Convert the [orxSTRUCTURE](./orxSTRUCTURE.md) to an [orxSHADERPOINTER\#](./orxSHADERPOINTER.md) \(pointer cast\)

* Params:

* Returns:

type | description 
--- | ---
[orxSHADERPOINTER\#](./orxSHADERPOINTER.md) | The converted [orxSHADERPOINTER](./orxSHADERPOINTER.md) or nil

* C signature:

```c
#define orxSHADERPOINTER(STRUCTURE)
```

---

### **`orxSTRUCTURE:toSound`**

* Signature:

```lua
r1 = toSound()
```

* Description:

> Convert the [orxSTRUCTURE](./orxSTRUCTURE.md) to an [orxSOUND](./orxSOUND.md) \(pointer cast\)

* Params:

* Returns:

type | description 
--- | ---
[orxSOUND](./orxSOUND.md)  | The converted [orxSOUND](./orxSOUND.md) or nil

* C signature:

```c
#define orxSOUND(STRUCTURE)
```

---

### **`orxSTRUCTURE:toSoundConst`**

* Signature:

```lua
r1 = toSoundConst()
```

* Description:

> Convert the [orxSTRUCTURE](./orxSTRUCTURE.md) to an [orxSOUND\#](./orxSOUND.md) \(pointer cast\)

* Params:

* Returns:

type | description 
--- | ---
[orxSOUND\#](./orxSOUND.md) | The converted [orxSOUND](./orxSOUND.md) or nil

* C signature:

```c
#define orxSOUND(STRUCTURE)
```

---

### **`orxSTRUCTURE:toSoundPointer`**

* Signature:

```lua
r1 = toSoundPointer()
```

* Description:

> Convert the [orxSTRUCTURE](./orxSTRUCTURE.md) to an [orxSOUNDPOINTER](./orxSOUNDPOINTER.md) \(pointer cast\)

* Params:

* Returns:

type | description 
--- | ---
[orxSOUNDPOINTER](./orxSOUNDPOINTER.md)  | The converted [orxSOUNDPOINTER](./orxSOUNDPOINTER.md) or nil

* C signature:

```c
#define orxSOUNDPOINTER(STRUCTURE)
```

---

### **`orxSTRUCTURE:toSoundPointerConst`**

* Signature:

```lua
r1 = toSoundPointerConst()
```

* Description:

> Convert the [orxSTRUCTURE](./orxSTRUCTURE.md) to an [orxSOUNDPOINTER\#](./orxSOUNDPOINTER.md) \(pointer cast\)

* Params:

* Returns:

type | description 
--- | ---
[orxSOUNDPOINTER\#](./orxSOUNDPOINTER.md) | The converted [orxSOUNDPOINTER](./orxSOUNDPOINTER.md) or nil

* C signature:

```c
#define orxSOUNDPOINTER(STRUCTURE)
```

---

### **`orxSTRUCTURE:toSpawner`**

* Signature:

```lua
r1 = toSpawner()
```

* Description:

> Convert the [orxSTRUCTURE](./orxSTRUCTURE.md) to an [orxSPAWNER](./orxSPAWNER.md) \(pointer cast\)

* Params:

* Returns:

type | description 
--- | ---
[orxSPAWNER](./orxSPAWNER.md)  | The converted [orxSPAWNER](./orxSPAWNER.md) or nil

* C signature:

```c
#define orxSPAWNER(STRUCTURE)
```

---

### **`orxSTRUCTURE:toSpawnerConst`**

* Signature:

```lua
r1 = toSpawnerConst()
```

* Description:

> Convert the [orxSTRUCTURE](./orxSTRUCTURE.md) to an [orxSPAWNER\#](./orxSPAWNER.md) \(pointer cast\)

* Params:

* Returns:

type | description 
--- | ---
[orxSPAWNER\#](./orxSPAWNER.md) | The converted [orxSPAWNER](./orxSPAWNER.md) or nil

* C signature:

```c
#define orxSPAWNER(STRUCTURE)
```

---

### **`orxSTRUCTURE:toText`**

* Signature:

```lua
r1 = toText()
```

* Description:

> Convert the [orxSTRUCTURE](./orxSTRUCTURE.md) to an [orxTEXT](./orxTEXT.md) \(pointer cast\)

* Params:

* Returns:

type | description 
--- | ---
[orxTEXT](./orxTEXT.md)  | The converted [orxTEXT](./orxTEXT.md) or nil

* C signature:

```c
#define orxTEXT(STRUCTURE)
```

---

### **`orxSTRUCTURE:toTextConst`**

* Signature:

```lua
r1 = toTextConst()
```

* Description:

> Convert the [orxSTRUCTURE](./orxSTRUCTURE.md) to an [orxTEXT\#](./orxTEXT.md) \(pointer cast\)

* Params:

* Returns:

type | description 
--- | ---
[orxTEXT\#](./orxTEXT.md) | The converted [orxTEXT](./orxTEXT.md) or nil

* C signature:

```c
#define orxTEXT(STRUCTURE)
```

---

### **`orxSTRUCTURE:toTexture`**

* Signature:

```lua
r1 = toTexture()
```

* Description:

> Convert the [orxSTRUCTURE](./orxSTRUCTURE.md) to an [orxTEXTURE](./orxTEXTURE.md) \(pointer cast\)

* Params:

* Returns:

type | description 
--- | ---
[orxTEXTURE](./orxTEXTURE.md)  | The converted [orxTEXTURE](./orxTEXTURE.md) or nil

* C signature:

```c
#define orxTEXTURE(STRUCTURE)
```

---

### **`orxSTRUCTURE:toTextureConst`**

* Signature:

```lua
r1 = toTextureConst()
```

* Description:

> Convert the [orxSTRUCTURE](./orxSTRUCTURE.md) to an [orxTEXTURE\#](./orxTEXTURE.md) \(pointer cast\)

* Params:

* Returns:

type | description 
--- | ---
[orxTEXTURE\#](./orxTEXTURE.md) | The converted [orxTEXTURE](./orxTEXTURE.md) or nil

* C signature:

```c
#define orxTEXTURE(STRUCTURE)
```

---

### **`orxSTRUCTURE:toTimeline`**

* Signature:

```lua
r1 = toTimeline()
```

* Description:

> Convert the [orxSTRUCTURE](./orxSTRUCTURE.md) to an [orxTIMELINE](./orxTIMELINE.md) \(pointer cast\)

* Params:

* Returns:

type | description 
--- | ---
[orxTIMELINE](./orxTIMELINE.md)  | The converted [orxTIMELINE](./orxTIMELINE.md) or nil

* C signature:

```c
#define orxTIMELINE(STRUCTURE)
```

---

### **`orxSTRUCTURE:toTimelineConst`**

* Signature:

```lua
r1 = toTimelineConst()
```

* Description:

> Convert the [orxSTRUCTURE](./orxSTRUCTURE.md) to an [orxTIMELINE\#](./orxTIMELINE.md) \(pointer cast\)

* Params:

* Returns:

type | description 
--- | ---
[orxTIMELINE\#](./orxTIMELINE.md) | The converted [orxTIMELINE](./orxTIMELINE.md) or nil

* C signature:

```c
#define orxTIMELINE(STRUCTURE)
```

---

### **`orxSTRUCTURE:toViewport`**

* Signature:

```lua
r1 = toViewport()
```

* Description:

> Convert the [orxSTRUCTURE](./orxSTRUCTURE.md) to an [orxVIEWPORT](./orxVIEWPORT.md) \(pointer cast\)

* Params:

* Returns:

type | description 
--- | ---
[orxVIEWPORT](./orxVIEWPORT.md)  | The converted [orxVIEWPORT](./orxVIEWPORT.md) or nil

* C signature:

```c
#define orxVIEWPORT(STRUCTURE)
```

---

### **`orxSTRUCTURE:toViewportConst`**

* Signature:

```lua
r1 = toViewportConst()
```

* Description:

> Convert the [orxSTRUCTURE](./orxSTRUCTURE.md) to an [orxVIEWPORT\#](./orxVIEWPORT.md) \(pointer cast\)

* Params:

* Returns:

type | description 
--- | ---
[orxVIEWPORT\#](./orxVIEWPORT.md) | The converted [orxVIEWPORT](./orxVIEWPORT.md) or nil

* C signature:

```c
#define orxVIEWPORT(STRUCTURE)
```

---

### **`orxSTRUCTURE:type`**

* Signature:

```lua
r1 = type()
```

* Description:

> get the type name of the lorx userdata

* Params:

* Returns:

type | description 
--- | ---
string | the type name

---

