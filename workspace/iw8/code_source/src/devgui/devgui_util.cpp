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
  vec4_t v125; 
  vec2_t verts; 
  __int64 v134; 
  char v135; 
  void *retaddr; 

  _RAX = &retaddr;
  _RBP = &v134;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmmword ptr [rax-78h], xmm8
    vmovaps xmmword ptr [rax-88h], xmm9
    vmovaps xmmword ptr [rax-98h], xmm10
    vmovaps xmmword ptr [rax-0A8h], xmm11
    vmovaps xmmword ptr [rax-0B8h], xmm12
    vmovaps xmmword ptr [rax-0C8h], xmm13
    vmovaps xmmword ptr [rax-0D8h], xmm14
    vmovaps xmmword ptr [rsp+150h+var_E8+8], xmm15
    vmovss  xmm6, cs:__real@41000000
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, r8d
    vcomiss xmm0, xmm6
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, ebx
    vcomiss xmm0, xmm6
    vmovss  xmm2, cs:__real@3b808081
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, eax
    vmulss  xmm0, xmm0, xmm2
    vmovss  dword ptr [rsp+150h+var_120], xmm0
    vmulss  xmm0, xmm1, xmm2
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, eax
    vmovss  dword ptr [rsp+150h+var_120+4], xmm0
    vmulss  xmm0, xmm1, xmm2
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, eax
    vmovss  dword ptr [rsp+150h+var_120+8], xmm0
    vmulss  xmm0, xmm1, xmm2
    vmovss  dword ptr [rsp+150h+var_120+0Ch], xmm0
  }
  DevGui_DrawBox(x, y, w, h, color);
  __asm
  {
    vmovss  xmm14, [rbp+50h+shade]
    vmulss  xmm2, xmm14, dword ptr [rsp+150h+var_120+4]
    vmulss  xmm1, xmm14, dword ptr [rsp+150h+var_120+8]
    vmulss  xmm0, xmm14, dword ptr [rsp+150h+var_120]; val
    vmovss  xmm15, cs:__real@3f800000
    vmovss  dword ptr [rsp+150h+var_120+4], xmm2
    vmovss  dword ptr [rsp+150h+var_120+8], xmm1
    vmovaps xmm2, xmm15; max
    vxorps  xmm1, xmm1, xmm1; min
    vmovss  dword ptr [rsp+150h+var_120], xmm0
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  dword ptr [rsp+150h+var_120], xmm0
    vmovss  xmm0, dword ptr [rsp+150h+var_120+4]; val
    vmovaps xmm2, xmm15; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  dword ptr [rsp+150h+var_120+4], xmm0
    vmovss  xmm0, dword ptr [rsp+150h+var_120+8]; val
    vmovaps xmm2, xmm15; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vxorps  xmm12, xmm12, xmm12
    vcvtsi2ss xmm12, xmm12, r13d
    vxorps  xmm13, xmm13, xmm13
    vxorps  xmm11, xmm11, xmm11
    vcvtsi2ss xmm11, xmm11, eax
    vxorps  xmm8, xmm8, xmm8
    vxorps  xmm10, xmm10, xmm10
    vxorps  xmm9, xmm9, xmm9
    vcvtsi2ss xmm10, xmm10, r14d
    vcvtsi2ss xmm13, xmm13, r12d
    vcvtsi2ss xmm8, xmm8, r15d
    vcvtsi2ss xmm9, xmm9, esi
    vmovss  [rsp+150h+var_FC], xmm10
    vmovss  dword ptr [rsp+150h+var_120+8], xmm0
    vmovss  dword ptr [rsp+150h+verts], xmm12
    vmovss  dword ptr [rsp+150h+verts+4], xmm13
    vmovss  [rsp+150h+var_108], xmm11
    vmovss  [rsp+150h+var_104], xmm8
    vmovss  [rsp+150h+var_100], xmm11
    vmovss  dword ptr [rsp+150h+var_F8], xmm12
    vmovss  dword ptr [rsp+150h+var_F8+4], xmm9
  }
  R_AddCmdDrawQuadPic(&verts, &v125, cls.whiteMaterial);
  __asm
  {
    vmulss  xmm0, xmm14, dword ptr [rsp+150h+var_120]; val
    vmulss  xmm2, xmm14, dword ptr [rsp+150h+var_120+4]
    vmovss  dword ptr [rsp+150h+var_120], xmm0
    vmovss  dword ptr [rsp+150h+var_120+4], xmm2
    vmulss  xmm1, xmm14, dword ptr [rsp+150h+var_120+8]
    vmovss  dword ptr [rsp+150h+var_120+8], xmm1
    vxorps  xmm1, xmm1, xmm1; min
    vmovaps xmm2, xmm15; max
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  dword ptr [rsp+150h+var_120], xmm0
    vmovss  xmm0, dword ptr [rsp+150h+var_120+4]; val
    vmovaps xmm2, xmm15; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  dword ptr [rsp+150h+var_120+4], xmm0
    vmovss  xmm0, dword ptr [rsp+150h+var_120+8]; val
    vmovaps xmm2, xmm15; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vxorps  xmm7, xmm7, xmm7
    vxorps  xmm6, xmm6, xmm6
    vcvtsi2ss xmm6, xmm6, edi
    vcvtsi2ss xmm7, xmm7, ebx
    vmovss  [rsp+150h+var_100], xmm6
    vmovss  dword ptr [rsp+150h+var_120+8], xmm0
    vmovss  dword ptr [rsp+150h+verts], xmm12
    vmovss  dword ptr [rsp+150h+verts+4], xmm13
    vmovss  [rsp+150h+var_108], xmm7
    vmovss  [rsp+150h+var_104], xmm13
    vmovss  [rsp+150h+var_FC], xmm8
    vmovss  dword ptr [rsp+150h+var_F8], xmm11
    vmovss  dword ptr [rsp+150h+var_F8+4], xmm8
  }
  R_AddCmdDrawQuadPic(&verts, &v125, cls.whiteMaterial);
  __asm
  {
    vmulss  xmm2, xmm14, dword ptr [rsp+150h+var_120+4]
    vmulss  xmm1, xmm14, dword ptr [rsp+150h+var_120+8]
    vmulss  xmm0, xmm14, dword ptr [rsp+150h+var_120]; val
    vmovss  dword ptr [rsp+150h+var_120+4], xmm2
    vmovss  dword ptr [rsp+150h+var_120+8], xmm1
    vmovaps xmm2, xmm15; max
    vxorps  xmm1, xmm1, xmm1; min
    vmovss  dword ptr [rsp+150h+var_120], xmm0
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  dword ptr [rsp+150h+var_120], xmm0
    vmovss  xmm0, dword ptr [rsp+150h+var_120+4]; val
    vmovaps xmm2, xmm15; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  dword ptr [rsp+150h+var_120+4], xmm0
    vmovss  xmm0, dword ptr [rsp+150h+var_120+8]; val
    vmovaps xmm2, xmm15; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  dword ptr [rsp+150h+var_120+8], xmm0
    vmovss  dword ptr [rsp+150h+verts], xmm12
    vmovss  dword ptr [rsp+150h+verts+4], xmm9
    vmovss  [rsp+150h+var_108], xmm11
    vmovss  [rsp+150h+var_104], xmm10
    vmovss  [rsp+150h+var_100], xmm6
    vmovss  [rsp+150h+var_FC], xmm10
    vmovss  dword ptr [rsp+150h+var_F8], xmm7
    vmovss  dword ptr [rsp+150h+var_F8+4], xmm9
  }
  R_AddCmdDrawQuadPic(&verts, &v125, cls.whiteMaterial);
  __asm
  {
    vmulss  xmm0, xmm14, dword ptr [rsp+150h+var_120]; val
    vmulss  xmm3, xmm14, dword ptr [rsp+150h+var_120+4]
    vmulss  xmm5, xmm14, dword ptr [rsp+150h+var_120+8]
    vmovaps xmm2, xmm15; max
    vxorps  xmm1, xmm1, xmm1; min
    vmovss  dword ptr [rsp+150h+var_120], xmm0
    vmovss  dword ptr [rsp+150h+var_120+4], xmm3
    vmovss  dword ptr [rsp+150h+var_120+8], xmm5
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  dword ptr [rsp+150h+var_120], xmm0
    vmovss  xmm0, dword ptr [rsp+150h+var_120+4]; val
    vmovaps xmm2, xmm15; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  dword ptr [rsp+150h+var_120+4], xmm0
    vmovss  xmm0, dword ptr [rsp+150h+var_120+8]; val
    vmovaps xmm2, xmm15; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  dword ptr [rsp+150h+var_120+8], xmm0
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, ebx
    vmovss  dword ptr [rsp+150h+verts], xmm0
    vxorps  xmm0, xmm0, xmm0
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm0, xmm0, esi
    vcvtsi2ss xmm1, xmm1, ebx
    vmovss  [rsp+150h+var_104], xmm0
    vmovss  [rsp+150h+var_108], xmm1
    vxorps  xmm0, xmm0, xmm0
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm0, xmm0, r14d
    vcvtsi2ss xmm1, xmm1, edi
    vmovss  [rsp+150h+var_FC], xmm0
    vmovss  [rsp+150h+var_100], xmm1
    vxorps  xmm0, xmm0, xmm0
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm0, xmm0, r15d
    vcvtsi2ss xmm1, xmm1, edi
    vmovss  dword ptr [rsp+150h+var_F8+4], xmm0
    vmovss  dword ptr [rsp+150h+verts+4], xmm13
    vmovss  dword ptr [rsp+150h+var_F8], xmm1
  }
  R_AddCmdDrawQuadPic(&verts, &v125, cls.whiteMaterial);
  _R11 = &v135;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm10, xmmword ptr [r11-58h]
    vmovaps xmm11, xmmword ptr [r11-68h]
    vmovaps xmm12, xmmword ptr [r11-78h]
    vmovaps xmm13, xmmword ptr [r11-88h]
    vmovaps xmm14, xmmword ptr [r11-98h]
    vmovaps xmm15, xmmword ptr [rsp+150h+var_E8+8]
  }
}

/*
==============
DevGui_DrawBox
==============
*/
void DevGui_DrawBox(int x, int y, int w, int h, const unsigned __int8 *color)
{
  float fmt; 
  float t0; 
  float v24; 
  float v25; 
  vec4_t v26; 

  if ( !w && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui_util.cpp", 115, ASSERT_TYPE_ASSERT, "(w)", (const char *)&queryFormat, "w") )
    __debugbreak();
  if ( !h && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui_util.cpp", 116, ASSERT_TYPE_ASSERT, "(h)", (const char *)&queryFormat, "h") )
    __debugbreak();
  _RAX = color;
  __asm
  {
    vxorps  xmm4, xmm4, xmm4
    vxorps  xmm2, xmm2, xmm2
    vcvtsi2ss xmm2, xmm2, edi; w
    vmovd   xmm0, dword ptr [rax]
    vpmovzxbd xmm1, xmm0
    vcvtdq2ps xmm3, xmm1
    vmulps  xmm0, xmm3, cs:__xmm@3b8080813b8080813b8080813b808081
    vmovss  [rsp+98h+var_60], xmm4
    vmovups xmmword ptr [rsp+98h+var_48], xmm0
    vmovss  [rsp+98h+var_68], xmm4
    vxorps  xmm0, xmm0, xmm0
    vxorps  xmm3, xmm3, xmm3
    vxorps  xmm1, xmm1, xmm1
    vmovss  [rsp+98h+t0], xmm4
    vcvtsi2ss xmm0, xmm0, esi; x
    vcvtsi2ss xmm3, xmm3, ebx; h
    vcvtsi2ss xmm1, xmm1, ebp; y
    vmovss  dword ptr [rsp+98h+fmt], xmm4
  }
  R_AddCmdDrawStretchPic(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmt, t0, v24, v25, &v26, cls.whiteMaterial);
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
  int v11; 
  float fmt; 
  float ya; 
  float v20; 
  float v21; 
  float v22; 
  vec4_t v23; 

  _RDI = color;
  if ( !text && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui_util.cpp", 289, ASSERT_TYPE_ASSERT, "(text)", (const char *)&queryFormat, "text") )
    __debugbreak();
  if ( *text )
  {
    __asm
    {
      vmovd   xmm0, dword ptr [rdi]
      vpmovzxbd xmm1, xmm0
      vcvtdq2ps xmm3, xmm1
      vmulps  xmm0, xmm3, cs:__xmm@3b8080813b8080813b8080813b808081
      vmovups xmmword ptr [rsp+88h+var_38], xmm0
    }
    v11 = R_TextHeight(cls.consoleFont);
    __asm
    {
      vmovss  xmm1, cs:__real@3f800000
      vxorps  xmm2, xmm2, xmm2
      vcvtsi2ss xmm2, xmm2, ecx
      vxorps  xmm0, xmm0, xmm0
      vmovss  [rsp+88h+var_48], xmm0
      vmovss  [rsp+88h+var_50], xmm1
      vmovss  [rsp+88h+var_58], xmm1
      vxorps  xmm3, xmm3, xmm3
      vcvtsi2ss xmm3, xmm3, esi
      vmovss  [rsp+88h+y], xmm2
      vmovss  dword ptr [rsp+88h+fmt], xmm3
    }
    R_AddCmdDrawText(text, 0x7FFFFFFF, cls.consoleFont, v11, fmt, ya, v20, v21, v22, &v23);
  }
}

/*
==============
DevGui_DrawFontCentered
==============
*/
void DevGui_DrawFontCentered(int x, int y, const unsigned __int8 *color, const char *text)
{
  int v11; 
  float fmt; 
  float ya; 
  float v20; 
  float v21; 
  float v22; 
  vec4_t v23; 

  _RBP = color;
  if ( (!text || !*text) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui_util.cpp", 307, ASSERT_TYPE_ASSERT, "(text && text[0])", (const char *)&queryFormat, "text && text[0]") )
    __debugbreak();
  R_TextWidth(text, 0, cls.consoleFont);
  R_TextHeight(cls.consoleFont);
  if ( !text && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui_util.cpp", 289, ASSERT_TYPE_ASSERT, "(text)", (const char *)&queryFormat, "text") )
    __debugbreak();
  if ( *text )
  {
    __asm
    {
      vmovd   xmm0, dword ptr [rbp+0]
      vpmovzxbd xmm1, xmm0
      vcvtdq2ps xmm3, xmm1
      vmulps  xmm0, xmm3, cs:__xmm@3b8080813b8080813b8080813b808081
      vmovups xmmword ptr [rsp+98h+var_48], xmm0
    }
    v11 = R_TextHeight(cls.consoleFont);
    __asm
    {
      vmovss  xmm1, cs:__real@3f800000
      vxorps  xmm2, xmm2, xmm2
      vcvtsi2ss xmm2, xmm2, ecx
      vxorps  xmm0, xmm0, xmm0
      vmovss  [rsp+98h+var_58], xmm0
      vmovss  [rsp+98h+var_60], xmm1
      vmovss  [rsp+98h+var_68], xmm1
      vxorps  xmm3, xmm3, xmm3
      vcvtsi2ss xmm3, xmm3, edi
      vmovss  [rsp+98h+y], xmm2
      vmovss  dword ptr [rsp+98h+fmt], xmm3
    }
    R_AddCmdDrawText(text, 0x7FFFFFFF, cls.consoleFont, v11, fmt, ya, v20, v21, v22, &v23);
  }
}

/*
==============
DevGui_DrawLine
==============
*/
void DevGui_DrawLine(const vec2_t *start, const vec2_t *end, int width, const unsigned __int8 *color)
{
  char v35; 
  float v60; 
  float v61; 
  float v62; 
  float v63; 
  float v64; 
  vec4_t v65; 
  char v66; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm11
    vmovaps xmmword ptr [rax-68h], xmm12
    vmovss  xmm1, dword ptr [rdx]
    vmovss  xmm0, dword ptr [rcx]
    vmovss  xmm7, dword ptr [rdx+4]
    vmovss  xmm6, dword ptr [rcx+4]
    vmovss  xmm9, cs:__real@3f800000
    vminss  xmm2, xmm0, xmm1
    vsubss  xmm5, xmm1, xmm0
    vmaxss  xmm0, xmm0, xmm1
    vsubss  xmm1, xmm0, xmm2
    vmulss  xmm1, xmm1, cs:__real@3f000000
    vaddss  xmm11, xmm1, xmm2
    vminss  xmm4, xmm6, xmm7
    vmaxss  xmm0, xmm6, xmm7
    vsubss  xmm2, xmm0, xmm4
    vmulss  xmm1, xmm2, cs:__real@3f000000
    vmulss  xmm0, xmm5, xmm5
    vsubss  xmm3, xmm7, xmm6
    vmulss  xmm3, xmm3, xmm3
    vaddss  xmm12, xmm1, xmm4
    vaddss  xmm1, xmm3, xmm0
    vsqrtss xmm8, xmm1, xmm1
    vcmpless xmm0, xmm8, cs:__real@80000000
    vblendvps xmm0, xmm8, xmm9, xmm0
    vdivss  xmm0, xmm5, xmm0; X
  }
  _RDI = color;
  *(float *)&_XMM0 = acosf_0(*(float *)&_XMM0);
  __asm
  {
    vcomiss xmm7, xmm6
    vmulss  xmm4, xmm0, cs:__real@42652ee0
  }
  if ( v35 )
    __asm { vmulss  xmm4, xmm0, cs:__real@c2652ee0 }
  __asm
  {
    vxorps  xmm5, xmm5, xmm5
    vcomiss xmm4, xmm5
  }
  if ( v35 )
  {
    __asm { vmovss  xmm0, cs:__real@43b40000 }
    do
    {
      __asm
      {
        vaddss  xmm4, xmm4, xmm0
        vcomiss xmm4, xmm5
      }
    }
    while ( v35 );
  }
  __asm
  {
    vmovd   xmm0, dword ptr [rdi]
    vmulss  xmm2, xmm8, cs:__real@3f000000
    vpmovzxbd xmm1, xmm0
    vcvtdq2ps xmm3, xmm1
    vmulps  xmm0, xmm3, cs:__xmm@3b8080813b8080813b8080813b808081
    vmovups xmmword ptr [rsp+0F8h+var_88], xmm0
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmovss  [rsp+0F8h+var_B8], xmm4
    vmovss  [rsp+0F8h+var_C0], xmm9
    vxorps  xmm3, xmm3, xmm3
    vsubss  xmm1, xmm12, xmm0; y
    vmovss  [rsp+0F8h+var_C8], xmm9
    vsubss  xmm0, xmm11, xmm2; x
    vmovss  [rsp+0F8h+var_D0], xmm5
    vcvtsi2ss xmm3, xmm3, ebx; h
    vmovaps xmm2, xmm8; w
    vmovss  [rsp+0F8h+var_D8], xmm5
  }
  R_AddCmdDrawStretchPicRotateXY(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v60, v61, v62, v63, v64, 0, 1, &v65, cls.whiteMaterial);
  _R11 = &v66;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm11, xmmword ptr [r11-50h]
    vmovaps xmm12, xmmword ptr [r11-60h]
  }
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

int __fastcall DevGui_GetScreenBottom(const ScreenPlacement *scrPlace, double _XMM1_8)
{
  int result; 

  __asm { vxorps  xmm1, xmm1, xmm1; y }
  *(double *)&_XMM0 = ScrPlace_ApplyY(scrPlace, *(float *)&_XMM1, 3);
  __asm
  {
    vaddss  xmm2, xmm0, cs:__real@3f000000
    vxorps  xmm1, xmm1, xmm1
    vmovss  xmm3, xmm1, xmm2
    vxorps  xmm0, xmm0, xmm0
    vroundss xmm4, xmm0, xmm3, 1
    vcvttss2si eax, xmm4
  }
  return result;
}

/*
==============
DevGui_GetScreenLeft
==============
*/

int __fastcall DevGui_GetScreenLeft(const ScreenPlacement *scrPlace, double _XMM1_8)
{
  int result; 

  __asm { vxorps  xmm1, xmm1, xmm1; x }
  *(double *)&_XMM0 = ScrPlace_ApplyX(scrPlace, *(float *)&_XMM1, 1);
  __asm
  {
    vaddss  xmm2, xmm0, cs:__real@3f000000
    vxorps  xmm1, xmm1, xmm1
    vmovss  xmm3, xmm1, xmm2
    vxorps  xmm0, xmm0, xmm0
    vroundss xmm4, xmm0, xmm3, 1
    vcvttss2si eax, xmm4
  }
  return result;
}

/*
==============
DevGui_GetScreenRight
==============
*/

int __fastcall DevGui_GetScreenRight(const ScreenPlacement *scrPlace, double _XMM1_8)
{
  int result; 

  __asm { vxorps  xmm1, xmm1, xmm1; x }
  *(double *)&_XMM0 = ScrPlace_ApplyX(scrPlace, *(float *)&_XMM1, 3);
  __asm
  {
    vaddss  xmm2, xmm0, cs:__real@3f000000
    vxorps  xmm1, xmm1, xmm1
    vmovss  xmm3, xmm1, xmm2
    vxorps  xmm0, xmm0, xmm0
    vroundss xmm4, xmm0, xmm3, 1
    vcvttss2si eax, xmm4
  }
  return result;
}

/*
==============
DevGui_GetScreenTop
==============
*/

int __fastcall DevGui_GetScreenTop(const ScreenPlacement *scrPlace, double _XMM1_8)
{
  int result; 

  __asm { vxorps  xmm1, xmm1, xmm1; x }
  *(double *)&_XMM0 = ScrPlace_ApplyX(scrPlace, *(float *)&_XMM1, 1);
  __asm
  {
    vaddss  xmm2, xmm0, cs:__real@3f000000
    vxorps  xmm1, xmm1, xmm1
    vmovss  xmm3, xmm1, xmm2
    vxorps  xmm0, xmm0, xmm0
    vroundss xmm4, xmm0, xmm3, 1
    vcvttss2si eax, xmm4
  }
  return result;
}

/*
==============
DevGui_SetFloatDvarValue
==============
*/

void __fastcall DevGui_SetFloatDvarValue(const char *dvarName, double value)
{
  const char *v5; 

  __asm
  {
    vcvtss2sd xmm1, xmm1, xmm1
    vmovq   rdx, xmm1
  }
  v5 = j_va("%g", _RDX);
  Dvar_SetFromStringByNameFromSource(dvarName, v5, DVAR_SOURCE_DEVGUI);
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

