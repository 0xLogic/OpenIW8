/*
==============
DevGui_GetIntDvarValue
==============
*/

int __fastcall DevGui_GetIntDvarValue(const char *dvarName)
{
  return ?DevGui_GetIntDvarValue@@YAHPEBD@Z(dvarName);
}

/*
==============
DevGui_GetFontWidth
==============
*/

int __fastcall DevGui_GetFontWidth(const char *text)
{
  return ?DevGui_GetFontWidth@@YAHPEBD@Z(text);
}

/*
==============
DevGui_DrawBox
==============
*/

void __fastcall DevGui_DrawBox(int x, int y, int w, int h, const unsigned __int8 *color)
{
  ?DevGui_DrawBox@@YAXHHHHQEBE@Z(x, y, w, h, color);
}

/*
==============
DevGui_DrawBevelBox
==============
*/

void __fastcall DevGui_DrawBevelBox(int x, int y, int w, int h, float shade, const unsigned __int8 *color)
{
  ?DevGui_DrawBevelBox@@YAXHHHHMQEBE@Z(x, y, w, h, shade, color);
}

/*
==============
DevGui_GetFontHeight
==============
*/

int __fastcall DevGui_GetFontHeight()
{
  return ?DevGui_GetFontHeight@@YAHXZ();
}

/*
==============
DevGui_GetScreenBottom
==============
*/

int __fastcall DevGui_GetScreenBottom(const ScreenPlacement *scrPlace)
{
  return ?DevGui_GetScreenBottom@@YAHPEBUScreenPlacement@@@Z(scrPlace);
}

/*
==============
DevGui_SetIntDvarValue
==============
*/

void __fastcall DevGui_SetIntDvarValue(const char *dvarName, int value)
{
  ?DevGui_SetIntDvarValue@@YAXPEBDH@Z(dvarName, value);
}

/*
==============
DevGui_DrawBoxCentered
==============
*/

void __fastcall DevGui_DrawBoxCentered(int centerX, int centerY, int w, int h, const unsigned __int8 *color)
{
  ?DevGui_DrawBoxCentered@@YAXHHHHQEBE@Z(centerX, centerY, w, h, color);
}

/*
==============
DevGui_DrawFont
==============
*/

void __fastcall DevGui_DrawFont(int x, int y, const unsigned __int8 *color, const char *text)
{
  ?DevGui_DrawFont@@YAXHHQEBEPEBD@Z(x, y, color, text);
}

/*
==============
DevGui_GetFloatDvarValue
==============
*/

double __fastcall DevGui_GetFloatDvarValue(const char *dvarName)
{
  double result; 

  *(float *)&result = ?DevGui_GetFloatDvarValue@@YAMPEBD@Z(dvarName);
  return result;
}

/*
==============
DevGui_SetFloatDvarValue
==============
*/

void __fastcall DevGui_SetFloatDvarValue(const char *dvarName, float value)
{
  ?DevGui_SetFloatDvarValue@@YAXPEBDM@Z(dvarName, value);
}

/*
==============
DevGui_GetScreenRight
==============
*/

int __fastcall DevGui_GetScreenRight(const ScreenPlacement *scrPlace)
{
  return ?DevGui_GetScreenRight@@YAHPEBUScreenPlacement@@@Z(scrPlace);
}

/*
==============
DevGui_DrawFontCentered
==============
*/

void __fastcall DevGui_DrawFontCentered(int x, int y, const unsigned __int8 *color, const char *text)
{
  ?DevGui_DrawFontCentered@@YAXHHQEBEPEBD@Z(x, y, color, text);
}

/*
==============
DevGui_DrawLine
==============
*/

void __fastcall DevGui_DrawLine(const vec2_t *start, const vec2_t *end, int width, const unsigned __int8 *color)
{
  ?DevGui_DrawLine@@YAXAEBTvec2_t@@0HQEBE@Z(start, end, width, color);
}

/*
==============
DevGui_GetScreenLeft
==============
*/

int __fastcall DevGui_GetScreenLeft(const ScreenPlacement *scrPlace)
{
  return ?DevGui_GetScreenLeft@@YAHPEBUScreenPlacement@@@Z(scrPlace);
}

/*
==============
DevGui_GetScreenTop
==============
*/

int __fastcall DevGui_GetScreenTop(const ScreenPlacement *scrPlace)
{
  return ?DevGui_GetScreenTop@@YAHPEBUScreenPlacement@@@Z(scrPlace);
}

/*
==============
DevGui_DrawBevelBox
==============
*/
void DevGui_DrawBevelBox(int x, int y, int w, int h, float shade, const unsigned __int8 *color)
{
  float v10; 
  int v11; 
  float v12; 
  float v13; 
  double v14; 
  double v15; 
  double v16; 
  double v17; 
  double v18; 
  double v19; 
  double v20; 
  double v21; 
  double v22; 
  double v23; 
  double v24; 
  double v25; 
  vec4_t v26; 
  vec2_t verts; 
  float v28; 
  float v29; 
  float v30; 
  float v31; 
  float v32; 
  float v33; 

  if ( (float)w < 8.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui_util.cpp", 151, ASSERT_TYPE_ASSERT, "(w >= (4 * 2.0f))", (const char *)&queryFormat, "w >= (DEVGUI_BEVEL_SIZE * 2.0f)") )
    __debugbreak();
  if ( (float)h < 8.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui_util.cpp", 152, ASSERT_TYPE_ASSERT, "(h >= (4 * 2.0f))", (const char *)&queryFormat, "h >= (DEVGUI_BEVEL_SIZE * 2.0f)") )
    __debugbreak();
  v10 = (float)color[1];
  v11 = color[2];
  v26.v[0] = (float)*color * 0.0039215689;
  v12 = v10 * 0.0039215689;
  v13 = (float)v11;
  v26.v[3] = (float)color[3] * 0.0039215689;
  DevGui_DrawBox(x, y, w, h, color);
  v26.v[1] = shade * v12;
  v26.v[2] = shade * (float)(v13 * 0.0039215689);
  v14 = I_fclamp(shade * v26.v[0], 0.0, 1.0);
  v26.v[0] = *(float *)&v14;
  v15 = I_fclamp(v26.v[1], 0.0, 1.0);
  v26.v[1] = *(float *)&v15;
  v16 = I_fclamp(v26.v[2], 0.0, 1.0);
  v31 = (float)(h + y - 4);
  v26.v[2] = *(float *)&v16;
  verts.v[0] = (float)x;
  verts.v[1] = (float)y;
  v28 = (float)(x + 4);
  v29 = (float)(y + 4);
  v30 = v28;
  v32 = (float)x;
  v33 = (float)(h + y);
  R_AddCmdDrawQuadPic(&verts, &v26, cls.whiteMaterial);
  v26.v[0] = shade * v26.v[0];
  v26.v[1] = shade * v26.v[1];
  v26.v[2] = shade * v26.v[2];
  v17 = I_fclamp(v26.v[0], 0.0, 1.0);
  v26.v[0] = *(float *)&v17;
  v18 = I_fclamp(v26.v[1], 0.0, 1.0);
  v26.v[1] = *(float *)&v18;
  v19 = I_fclamp(v26.v[2], 0.0, 1.0);
  v30 = (float)(w + x - 4);
  v26.v[2] = *(float *)&v19;
  verts.v[0] = (float)x;
  verts.v[1] = (float)y;
  v28 = (float)(w + x);
  v29 = (float)y;
  v31 = (float)(y + 4);
  v32 = (float)(x + 4);
  v33 = v31;
  R_AddCmdDrawQuadPic(&verts, &v26, cls.whiteMaterial);
  v26.v[1] = shade * v26.v[1];
  v26.v[2] = shade * v26.v[2];
  v26.v[0] = shade * v26.v[0];
  v20 = I_fclamp(v26.v[0], 0.0, 1.0);
  v26.v[0] = *(float *)&v20;
  v21 = I_fclamp(v26.v[1], 0.0, 1.0);
  v26.v[1] = *(float *)&v21;
  v22 = I_fclamp(v26.v[2], 0.0, 1.0);
  v26.v[2] = *(float *)&v22;
  verts.v[0] = (float)x;
  verts.v[1] = (float)(h + y);
  v28 = (float)(x + 4);
  v29 = (float)(h + y - 4);
  v30 = (float)(w + x - 4);
  v31 = v29;
  v32 = (float)(w + x);
  v33 = verts.v[1];
  R_AddCmdDrawQuadPic(&verts, &v26, cls.whiteMaterial);
  v26.v[0] = shade * v26.v[0];
  v26.v[1] = shade * v26.v[1];
  v26.v[2] = shade * v26.v[2];
  v23 = I_fclamp(v26.v[0], 0.0, 1.0);
  v26.v[0] = *(float *)&v23;
  v24 = I_fclamp(v26.v[1], 0.0, 1.0);
  v26.v[1] = *(float *)&v24;
  v25 = I_fclamp(v26.v[2], 0.0, 1.0);
  v26.v[2] = *(float *)&v25;
  verts.v[0] = (float)(w + x);
  v29 = (float)(h + y);
  v28 = verts.v[0];
  v31 = (float)(h + y - 4);
  v30 = (float)(w + x - 4);
  v33 = (float)(y + 4);
  verts.v[1] = (float)y;
  v32 = v30;
  R_AddCmdDrawQuadPic(&verts, &v26, cls.whiteMaterial);
}

/*
==============
DevGui_DrawBox
==============
*/
void DevGui_DrawBox(int x, int y, int w, int h, const unsigned __int8 *color)
{
  vec4_t v11; 

  if ( !w && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui_util.cpp", 115, ASSERT_TYPE_ASSERT, "(w)", (const char *)&queryFormat, "w") )
    __debugbreak();
  if ( !h && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui_util.cpp", 116, ASSERT_TYPE_ASSERT, "(h)", (const char *)&queryFormat, "h") )
    __debugbreak();
  _XMM0 = *(unsigned int *)color;
  __asm { vpmovzxbd xmm1, xmm0 }
  v11 = (vec4_t)_mm128_mul_ps(_mm_cvtepi32_ps(_XMM1), (__m128)_xmm);
  R_AddCmdDrawStretchPic((float)x, (float)y, (float)w, (float)h, 0.0, 0.0, 0.0, 0.0, &v11, cls.whiteMaterial);
}

/*
==============
DevGui_DrawBoxCentered
==============
*/
void DevGui_DrawBoxCentered(int centerX, int centerY, int w, int h, const unsigned __int8 *color)
{
  DevGui_DrawBox(centerX - w / 2, centerY - h / 2, w, h, color);
}

/*
==============
DevGui_DrawFont
==============
*/
void DevGui_DrawFont(int x, int y, const unsigned __int8 *color, const char *text)
{
  int v10; 
  vec4_t v11; 

  if ( !text && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui_util.cpp", 289, ASSERT_TYPE_ASSERT, "(text)", (const char *)&queryFormat, "text") )
    __debugbreak();
  if ( *text )
  {
    _XMM0 = *(unsigned int *)color;
    __asm { vpmovzxbd xmm1, xmm0 }
    v11 = (vec4_t)_mm128_mul_ps(_mm_cvtepi32_ps(_XMM1), (__m128)_xmm);
    v10 = R_TextHeight(cls.consoleFont);
    R_AddCmdDrawText(text, 0x7FFFFFFF, cls.consoleFont, v10, (float)x, (float)(y + v10), 1.0, 1.0, 0.0, &v11);
  }
}

/*
==============
DevGui_DrawFontCentered
==============
*/
void DevGui_DrawFontCentered(int x, int y, const unsigned __int8 *color, const char *text)
{
  int v8; 
  int v9; 
  int v12; 
  vec4_t v13; 

  if ( (!text || !*text) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui_util.cpp", 307, ASSERT_TYPE_ASSERT, "(text && text[0])", (const char *)&queryFormat, "text && text[0]") )
    __debugbreak();
  v8 = R_TextWidth(text, 0, cls.consoleFont) / -2 + x;
  v9 = y - R_TextHeight(cls.consoleFont) / 2;
  if ( !text && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui_util.cpp", 289, ASSERT_TYPE_ASSERT, "(text)", (const char *)&queryFormat, "text") )
    __debugbreak();
  if ( *text )
  {
    _XMM0 = *(unsigned int *)color;
    __asm { vpmovzxbd xmm1, xmm0 }
    v13 = (vec4_t)_mm128_mul_ps(_mm_cvtepi32_ps(_XMM1), (__m128)_xmm);
    v12 = R_TextHeight(cls.consoleFont);
    R_AddCmdDrawText(text, 0x7FFFFFFF, cls.consoleFont, v12, (float)v8, (float)(v12 + v9), 1.0, 1.0, 0.0, &v13);
  }
}

/*
==============
DevGui_DrawLine
==============
*/
void DevGui_DrawLine(const vec2_t *start, const vec2_t *end, int width, const unsigned __int8 *color)
{
  __int128 v5; 
  __int128 v8; 
  __int128 v9; 
  float v11; 
  __int128 v14; 
  float v15; 
  __int128 v19; 
  __int128 v22; 
  __int128 v23; 
  __int128 v24; 
  __int128 v25; 
  __int128 v26; 
  vec4_t v29; 

  _XMM0 = LODWORD(start->v[0]);
  v5 = LODWORD(end->v[1]);
  _XMM6 = LODWORD(start->v[1]);
  __asm { vminss  xmm2, xmm0, xmm1 }
  v9 = LODWORD(end->v[0]);
  *(float *)&v9 = end->v[0] - *(float *)&_XMM0;
  v8 = v9;
  __asm { vmaxss  xmm0, xmm0, xmm1 }
  v11 = (float)((float)(*(float *)&_XMM0 - *(float *)&_XMM2) * 0.5) + *(float *)&_XMM2;
  __asm
  {
    vminss  xmm4, xmm6, xmm7
    vmaxss  xmm0, xmm6, xmm7
  }
  v14 = v5;
  v15 = (float)((float)(*(float *)&_XMM0 - *(float *)&_XMM4) * 0.5) + *(float *)&_XMM4;
  *(float *)&v14 = fsqrt((float)((float)(*(float *)&v5 - *(float *)&_XMM6) * (float)(*(float *)&v5 - *(float *)&_XMM6)) + (float)(*(float *)&v8 * *(float *)&v8));
  _XMM8 = v14;
  __asm
  {
    vcmpless xmm0, xmm8, cs:__real@80000000
    vblendvps xmm0, xmm8, xmm9, xmm0
  }
  v19 = v8;
  *(float *)&v19 = *(float *)&v8 / *(float *)&_XMM0;
  v22 = v19;
  *(float *)&v22 = acosf_0(*(float *)&v19);
  v24 = v22;
  *(float *)&v24 = *(float *)&v22 * 57.295776;
  v23 = v24;
  if ( *(float *)&v5 < *(float *)&_XMM6 )
  {
    v25 = v22;
    *(float *)&v25 = *(float *)&v22 * -57.295776;
    v23 = v25;
  }
  if ( *(float *)&v23 < 0.0 )
  {
    do
    {
      v26 = v23;
      *(float *)&v26 = *(float *)&v23 + 360.0;
      v23 = v26;
    }
    while ( *(float *)&v26 < 0.0 );
  }
  _XMM0 = *(unsigned int *)color;
  __asm { vpmovzxbd xmm1, xmm0 }
  v29 = (vec4_t)_mm128_mul_ps(_mm_cvtepi32_ps(_XMM1), (__m128)_xmm);
  R_AddCmdDrawStretchPicRotateXY(v11 - (float)(*(float *)&_XMM8 * 0.5), v15 - (float)(width / 2), *(float *)&_XMM8, (float)width, 0.0, 0.0, 1.0, 1.0, *(float *)&v23, 0, 1, &v29, cls.whiteMaterial);
}

/*
==============
DevGui_GetFloatDvarValue
==============
*/

double __fastcall DevGui_GetFloatDvarValue(const char *dvarName)
{
  return Dvar_GetFloatSafe(dvarName);
}

/*
==============
DevGui_GetFontHeight
==============
*/
int DevGui_GetFontHeight()
{
  return R_TextHeight(cls.consoleFont);
}

/*
==============
DevGui_GetFontWidth
==============
*/
int DevGui_GetFontWidth(const char *text)
{
  return R_TextWidth(text, 0, cls.consoleFont);
}

/*
==============
DevGui_GetIntDvarValue
==============
*/
int DevGui_GetIntDvarValue(const char *dvarName)
{
  const char *VariantString; 

  VariantString = Dvar_GetVariantString(dvarName);
  return atoi(VariantString);
}

/*
==============
DevGui_GetScreenBottom
==============
*/
__int64 DevGui_GetScreenBottom(const ScreenPlacement *scrPlace)
{
  ScrPlace_ApplyY(scrPlace, 0.0, 3);
  _XMM0 = 0i64;
  __asm { vroundss xmm4, xmm0, xmm3, 1 }
  return (unsigned int)(int)*(float *)&_XMM4;
}

/*
==============
DevGui_GetScreenLeft
==============
*/
__int64 DevGui_GetScreenLeft(const ScreenPlacement *scrPlace)
{
  ScrPlace_ApplyX(scrPlace, 0.0, 1);
  _XMM0 = 0i64;
  __asm { vroundss xmm4, xmm0, xmm3, 1 }
  return (unsigned int)(int)*(float *)&_XMM4;
}

/*
==============
DevGui_GetScreenRight
==============
*/
__int64 DevGui_GetScreenRight(const ScreenPlacement *scrPlace)
{
  ScrPlace_ApplyX(scrPlace, 0.0, 3);
  _XMM0 = 0i64;
  __asm { vroundss xmm4, xmm0, xmm3, 1 }
  return (unsigned int)(int)*(float *)&_XMM4;
}

/*
==============
DevGui_GetScreenTop
==============
*/
__int64 DevGui_GetScreenTop(const ScreenPlacement *scrPlace)
{
  ScrPlace_ApplyX(scrPlace, 0.0, 1);
  _XMM0 = 0i64;
  __asm { vroundss xmm4, xmm0, xmm3, 1 }
  return (unsigned int)(int)*(float *)&_XMM4;
}

/*
==============
DevGui_SetFloatDvarValue
==============
*/
void DevGui_SetFloatDvarValue(const char *dvarName, float value)
{
  const char *v3; 

  v3 = j_va("%g", value);
  Dvar_SetFromStringByNameFromSource(dvarName, v3, DVAR_SOURCE_DEVGUI);
}

/*
==============
DevGui_SetIntDvarValue
==============
*/
void DevGui_SetIntDvarValue(const char *dvarName, __int64 value)
{
  const char *v3; 

  v3 = j_va("%i", value);
  Dvar_SetFromStringByNameFromSource(dvarName, v3, DVAR_SOURCE_DEVGUI);
}

