/*
==============
UI_DrawLoadBar
==============
*/

void __fastcall UI_DrawLoadBar(const ScreenPlacement *scrPlace, float x, float y, float w, float h, int horzAlign, int vertAlign, const vec4_t *color, Material *material)
{
  ?UI_DrawLoadBar@@YAXPEBUScreenPlacement@@MMMMHHAEBTvec4_t@@PEAUMaterial@@@Z(scrPlace, x, y, w, h, horzAlign, vertAlign, color, material);
}

/*
==============
UI_DrawHandlePic
==============
*/

void __fastcall UI_DrawHandlePic(const ScreenPlacement *scrPlace, float x, float y, float w, float h, int horzAlign, int vertAlign, const vec4_t *color, Material *material)
{
  ?UI_DrawHandlePic@@YAXPEBUScreenPlacement@@MMMMHHAEBTvec4_t@@PEAUMaterial@@@Z(scrPlace, x, y, w, h, horzAlign, vertAlign, color, material);
}

/*
==============
UI_DrawMaterialWithUVs
==============
*/

void __fastcall UI_DrawMaterialWithUVs(const ScreenPlacement *scrPlace, float x, float y, float w, float h, int horzAlign, int vertAlign, const vec4_t *color, Material *material, const vec4_t *stuv)
{
  ?UI_DrawMaterialWithUVs@@YAXPEBUScreenPlacement@@MMMMHHAEBTvec4_t@@PEAUMaterial@@1@Z(scrPlace, x, y, w, h, horzAlign, vertAlign, color, material, stuv);
}

/*
==============
UI_FillRect
==============
*/

void __fastcall UI_FillRect(const ScreenPlacement *scrPlace, float x, float y, float width, float height, int horzAlign, int vertAlign, const vec4_t *color)
{
  ?UI_FillRect@@YAXPEBUScreenPlacement@@MMMMHHAEBTvec4_t@@@Z(scrPlace, x, y, width, height, horzAlign, vertAlign, color);
}

/*
==============
UI_FillRectPhysical
==============
*/

void __fastcall UI_FillRectPhysical(float x, float y, float width, float height, const vec4_t *color)
{
  ?UI_FillRectPhysical@@YAXMMMMAEBTvec4_t@@@Z(x, y, width, height, color);
}

/*
==============
UI_DrawHandlePic
==============
*/

void __fastcall UI_DrawHandlePic(const ScreenPlacement *scrPlace, float x, double y, double w, float h, int horzAlign, int vertAlign, const vec4_t *color, Material *material)
{
  float v40; 
  float v41; 
  float v42; 
  float v43; 
  float v44; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovss  xmm4, cs:__real@3f800000
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovss  xmm8, [rsp+0D8h+h]
    vmovaps xmmword ptr [rax-48h], xmm9
    vxorps  xmm6, xmm6, xmm6
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmm9, xmm3
    vmovaps xmmword ptr [rax-68h], xmm11
    vcmpltss xmm0, xmm8, xmm6
    vblendvps xmm7, xmm4, xmm6, xmm0
    vmovss  [rsp+0D8h+var_88], xmm7
    vcmpltss xmm0, xmm9, xmm6
    vblendvps xmm5, xmm4, xmm6, xmm0
    vmovss  [rsp+0D8h+var_90], xmm5
    vcmpltss xmm0, xmm8, xmm6
    vandps  xmm8, xmm8, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vblendvps xmm3, xmm6, xmm4, xmm0
    vmovss  [rsp+0D8h+var_98], xmm3
    vcmpltss xmm0, xmm9, xmm6
    vandps  xmm9, xmm9, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovaps xmm10, xmm2
    vblendvps xmm2, xmm6, xmm4, xmm0
    vmovss  [rsp+0D8h+var_A0], xmm2
    vmovaps xmm3, xmm9; w
    vmovaps xmm2, xmm10; y
    vmovss  [rsp+0D8h+var_B8], xmm8
  }
  CL_DrawStretchPic(scrPlace, x, *(float *)&_XMM2, *(float *)&_XMM3, v40, horzAlign, vertAlign, v41, v42, v43, v44, color, material);
  _R11 = &retaddr;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm10, xmmword ptr [r11-58h]
    vmovaps xmm11, xmmword ptr [r11-68h]
  }
}

/*
==============
UI_DrawLoadBar
==============
*/

void __fastcall UI_DrawLoadBar(const ScreenPlacement *scrPlace, double x, double y, double w, float h, int horzAlign, int vertAlign, const vec4_t *color, Material *material)
{
  float v27; 
  float v28; 
  float v29; 
  float v30; 
  float v31; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmm8, xmm1
    vmovaps xmm6, xmm3
    vmovaps xmm7, xmm2
  }
  LoadBar_UpdateProgress();
  *(double *)&_XMM0 = LoadBar_GetLoadedFraction();
  __asm
  {
    vmovss  xmm4, cs:__real@3f800000
    vmovss  [rsp+0A8h+var_58], xmm4
    vmovss  [rsp+0A8h+var_60], xmm0
    vmulss  xmm3, xmm0, xmm6; w
    vxorps  xmm0, xmm0, xmm0
    vmovss  [rsp+0A8h+var_68], xmm0
    vmovss  [rsp+0A8h+var_70], xmm0
    vmovss  xmm0, [rsp+0A8h+h]
    vmovaps xmm2, xmm7; y
    vmovaps xmm1, xmm8; x
    vmovss  [rsp+0A8h+var_88], xmm0
  }
  CL_DrawStretchPic(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v27, horzAlign, vertAlign, v28, v29, v30, v31, color, material);
  __asm
  {
    vmovaps xmm6, [rsp+0A8h+var_18]
    vmovaps xmm7, [rsp+0A8h+var_28]
    vmovaps xmm8, [rsp+0A8h+var_38]
  }
}

/*
==============
UI_DrawMaterialWithUVs
==============
*/

void __fastcall UI_DrawMaterialWithUVs(const ScreenPlacement *scrPlace, double x, double y, double w, float h, int horzAlign, int vertAlign, const vec4_t *color, Material *material, const vec4_t *stuv)
{
  const vec4_t *v10; 
  Material *v11; 
  float v21; 
  int v22; 
  int v23; 
  int v24; 
  vec2_t verts; 

  v10 = color;
  v11 = material;
  _RSI = stuv;
  __asm
  {
    vmovss  [rsp+98h+var_58], xmm1
    vmovss  [rsp+98h+var_48], xmm2
    vmovss  [rsp+98h+var_50], xmm3
  }
  ScrPlace_ApplyRect(scrPlace, (float *)&v22, (float *)&v24, (float *)&v23, &h, horzAlign, vertAlign);
  __asm
  {
    vmovss  xmm2, [rsp+98h+var_48]
    vmovss  xmm5, [rsp+98h+var_58]
    vaddss  xmm3, xmm5, [rsp+98h+var_50]
    vaddss  xmm4, xmm2, [rsp+98h+h]
    vmovss  xmm0, dword ptr [rsi+0Ch]
    vmovss  xmm1, dword ptr [rsi]; s0
    vmovss  [rsp+98h+var_38], xmm3
    vmovss  [rsp+98h+var_30], xmm3
    vmovss  xmm3, dword ptr [rsi+8]; s1
    vmovss  dword ptr [rsp+98h+verts+4], xmm2
    vmovss  [rsp+98h+var_34], xmm2
    vmovss  xmm2, dword ptr [rsi+4]; t0
    vmovss  dword ptr [rsp+98h+verts], xmm5
    vmovss  [rsp+98h+var_2C], xmm4
    vmovss  [rsp+98h+var_28], xmm5
    vmovss  [rsp+98h+var_24], xmm4
    vmovss  [rsp+98h+var_78], xmm0
  }
  R_AddCmdDrawQuadPicST(&verts, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v21, v10, v11);
}

/*
==============
UI_FillRect
==============
*/
void UI_FillRect(const ScreenPlacement *scrPlace, float x, float y, float width, float height, int horzAlign, int vertAlign, const vec4_t *color)
{
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 

  if ( sharedUiInfo.assets.whiteMaterial )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vmovss  [rsp+78h+var_28], xmm0
      vmovss  [rsp+78h+var_30], xmm0
      vmovss  [rsp+78h+var_38], xmm0
      vmovss  [rsp+78h+var_40], xmm0
      vmovss  xmm0, [rsp+78h+height]
      vmovss  [rsp+78h+var_58], xmm0
    }
    CL_DrawStretchPic(scrPlace, x, y, width, v11, horzAlign, vertAlign, v12, v13, v14, v15, color, sharedUiInfo.assets.whiteMaterial);
  }
}

/*
==============
UI_FillRectPhysical
==============
*/
void UI_FillRectPhysical(float x, float y, float width, float height, const vec4_t *color)
{
  float v7; 
  float v8; 
  float v9; 
  float v10; 

  if ( sharedUiInfo.assets.whiteMaterial )
  {
    __asm
    {
      vxorps  xmm4, xmm4, xmm4
      vmovss  [rsp+58h+var_20], xmm4
      vmovss  [rsp+58h+var_28], xmm4
      vmovss  [rsp+58h+var_30], xmm4
      vmovss  [rsp+58h+var_38], xmm4
    }
    CL_DrawStretchPicPhysical(x, y, width, height, v7, v8, v9, v10, color, sharedUiInfo.assets.whiteMaterial);
  }
}

