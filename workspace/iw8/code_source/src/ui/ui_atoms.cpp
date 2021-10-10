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

void __fastcall UI_DrawHandlePic(const ScreenPlacement *scrPlace, float x, float y, double w, float h, int horzAlign, int vertAlign, const vec4_t *color, Material *material)
{
  _XMM4 = LODWORD(FLOAT_1_0);
  _XMM8 = LODWORD(h);
  _XMM6 = 0i64;
  _XMM9 = *(_OWORD *)&w;
  __asm
  {
    vcmpltss xmm0, xmm8, xmm6
    vblendvps xmm7, xmm4, xmm6, xmm0
    vcmpltss xmm0, xmm9, xmm6
    vblendvps xmm5, xmm4, xmm6, xmm0
    vcmpltss xmm0, xmm8, xmm6
    vblendvps xmm3, xmm6, xmm4, xmm0
    vcmpltss xmm0, xmm9, xmm6
    vblendvps xmm2, xmm6, xmm4, xmm0
  }
  CL_DrawStretchPic(scrPlace, x, y, COERCE_FLOAT(_XMM9 & _xmm), COERCE_FLOAT(LODWORD(h) & _xmm), horzAlign, vertAlign, *(float *)&_XMM2, *(float *)&_XMM3, *(float *)&_XMM5, *(float *)&_XMM7, color, material);
}

/*
==============
UI_DrawLoadBar
==============
*/
void UI_DrawLoadBar(const ScreenPlacement *scrPlace, float x, float y, float w, float h, int horzAlign, int vertAlign, const vec4_t *color, Material *material)
{
  double LoadedFraction; 

  LoadBar_UpdateProgress();
  LoadedFraction = LoadBar_GetLoadedFraction();
  CL_DrawStretchPic(scrPlace, x, y, *(float *)&LoadedFraction * w, h, horzAlign, vertAlign, 0.0, 0.0, *(float *)&LoadedFraction, 1.0, color, material);
}

/*
==============
UI_DrawMaterialWithUVs
==============
*/
void UI_DrawMaterialWithUVs(const ScreenPlacement *scrPlace, float x, float y, float w, float h, int horzAlign, int vertAlign, const vec4_t *color, Material *material, const vec4_t *stuv)
{
  const vec4_t *v10; 
  Material *v11; 
  const vec4_t *v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  vec2_t verts; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 

  v10 = color;
  v11 = material;
  v12 = stuv;
  v17 = x;
  v19 = y;
  v18 = w;
  ScrPlace_ApplyRect(scrPlace, &v17, &v19, &v18, &h, horzAlign, vertAlign);
  v13 = v12->v[3];
  v14 = v12->v[0];
  v21 = v17 + v18;
  v23 = v17 + v18;
  v15 = v12->v[2];
  verts.v[1] = v19;
  v22 = v19;
  v16 = v12->v[1];
  verts.v[0] = v17;
  v24 = v19 + h;
  v25 = v17;
  v26 = v19 + h;
  R_AddCmdDrawQuadPicST(&verts, v14, v16, v15, v13, v10, v11);
}

/*
==============
UI_FillRect
==============
*/
void UI_FillRect(const ScreenPlacement *scrPlace, float x, float y, float width, float height, int horzAlign, int vertAlign, const vec4_t *color)
{
  if ( sharedUiInfo.assets.whiteMaterial )
    CL_DrawStretchPic(scrPlace, x, y, width, height, horzAlign, vertAlign, 0.0, 0.0, 0.0, 0.0, color, sharedUiInfo.assets.whiteMaterial);
}

/*
==============
UI_FillRectPhysical
==============
*/
void UI_FillRectPhysical(float x, float y, float width, float height, const vec4_t *color)
{
  if ( sharedUiInfo.assets.whiteMaterial )
    CL_DrawStretchPicPhysical(x, y, width, height, 0.0, 0.0, 0.0, 0.0, color, sharedUiInfo.assets.whiteMaterial);
}

