/*
==============
ScrPlace_ApplyY
==============
*/

double __fastcall ScrPlace_ApplyY(const ScreenPlacement *scrPlace, float y, int vertAlign)
{
  double result; 

  *(float *)&result = ?ScrPlace_ApplyY@@YAMPEBUScreenPlacement@@MH@Z(scrPlace, y, vertAlign);
  return result;
}

/*
==============
ScrPlace_SetupFloatViewport
==============
*/

void __fastcall ScrPlace_SetupFloatViewport(ScreenPlacement *scrPlace, float viewportX, float viewportY, float viewportWidth, float viewportHeight)
{
  ?ScrPlace_SetupFloatViewport@@YAXPEAUScreenPlacement@@MMMM@Z(scrPlace, viewportX, viewportY, viewportWidth, viewportHeight);
}

/*
==============
ScrPlace_SetLegacySplitscreenScaling
==============
*/

void ScrPlace_SetLegacySplitscreenScaling(void)
{
  ?ScrPlace_SetLegacySplitscreenScaling@@YAXXZ();
}

/*
==============
ScrPlace_ApplyYWithoutSplitScreenScaling
==============
*/

double __fastcall ScrPlace_ApplyYWithoutSplitScreenScaling(const ScreenPlacement *scrPlace, float y, int vertAlign)
{
  double result; 

  *(float *)&result = ?ScrPlace_ApplyYWithoutSplitScreenScaling@@YAMPEBUScreenPlacement@@MH@Z(scrPlace, y, vertAlign);
  return result;
}

/*
==============
ScrPlace_SetupFloatRenderTargetViewport
==============
*/

void __fastcall ScrPlace_SetupFloatRenderTargetViewport(ScreenPlacement *scrPlace, float viewportX, float viewportY, float viewportWidth, float viewportHeight, int renderTargetWidth, int renderTargetHeight)
{
  ?ScrPlace_SetupFloatRenderTargetViewport@@YAXPEAUScreenPlacement@@MMMMHH@Z(scrPlace, viewportX, viewportY, viewportWidth, viewportHeight, renderTargetWidth, renderTargetHeight);
}

/*
==============
ScrPlace_ApplyRect
==============
*/

void __fastcall ScrPlace_ApplyRect(const ScreenPlacement *scrPlace, float *x, float *y, float *w, float *h, int horzAlign, int vertAlign)
{
  ?ScrPlace_ApplyRect@@YAXPEBUScreenPlacement@@PEAM111HH@Z(scrPlace, x, y, w, h, horzAlign, vertAlign);
}

/*
==============
ScrPlace_ApplyRectWithoutSplitScreenScaling
==============
*/

void __fastcall ScrPlace_ApplyRectWithoutSplitScreenScaling(const ScreenPlacement *scrPlace, float *x, float *y, float *w, float *h, int horzAlign, int vertAlign)
{
  ?ScrPlace_ApplyRectWithoutSplitScreenScaling@@YAXPEBUScreenPlacement@@PEAM111HH@Z(scrPlace, x, y, w, h, horzAlign, vertAlign);
}

/*
==============
ScrPlace_HiResScaleRect
==============
*/

void __fastcall ScrPlace_HiResScaleRect(float *x, float *y, float *w, float *h)
{
  ?ScrPlace_HiResScaleRect@@YAXPEAM000@Z(x, y, w, h);
}

/*
==============
ScrPlace_SetupClientViewports
==============
*/

void ScrPlace_SetupClientViewports(void)
{
  ?ScrPlace_SetupClientViewports@@YAXXZ();
}

/*
==============
ScrPlace_EndFrame
==============
*/

void ScrPlace_EndFrame(void)
{
  ?ScrPlace_EndFrame@@YAXXZ();
}

/*
==============
ScrPlace_SetupFullscreenViewports
==============
*/

void ScrPlace_SetupFullscreenViewports(void)
{
  ?ScrPlace_SetupFullscreenViewports@@YAXXZ();
}

/*
==============
ScrPlace_ApplyX
==============
*/

double __fastcall ScrPlace_ApplyX(const ScreenPlacement *scrPlace, float x, int horzAlign)
{
  double result; 

  *(float *)&result = ?ScrPlace_ApplyX@@YAMPEBUScreenPlacement@@MH@Z(scrPlace, x, horzAlign);
  return result;
}

/*
==============
ScrPlace_Init
==============
*/

void ScrPlace_Init(void)
{
  ?ScrPlace_Init@@YAXXZ();
}

/*
==============
ScrPlace_ApplyRectClamped
==============
*/

void __fastcall ScrPlace_ApplyRectClamped(const ScreenPlacement *scrPlace, float *x, float *y, float *w, float *h, int horzAlign, int vertAlign)
{
  ?ScrPlace_ApplyRectClamped@@YAXPEBUScreenPlacement@@PEAM111HH@Z(scrPlace, x, y, w, h, horzAlign, vertAlign);
}

/*
==============
ScrPlace_SetupUnsafeViewport
==============
*/

void __fastcall ScrPlace_SetupUnsafeViewport(ScreenPlacement *scrPlace, int viewportX, int viewportY, int viewportWidth, int viewportHeight)
{
  ?ScrPlace_SetupUnsafeViewport@@YAXPEAUScreenPlacement@@HHHH@Z(scrPlace, viewportX, viewportY, viewportWidth, viewportHeight);
}

/*
==============
ScrPlace_SetNormalSplitscreenScaling
==============
*/

void ScrPlace_SetNormalSplitscreenScaling(void)
{
  ?ScrPlace_SetNormalSplitscreenScaling@@YAXXZ();
}

/*
==============
ScrPlace_ApplyXWithoutSplitScreenScaling
==============
*/

double __fastcall ScrPlace_ApplyXWithoutSplitScreenScaling(const ScreenPlacement *scrPlace, float x, int horzAlign)
{
  double result; 

  *(float *)&result = ?ScrPlace_ApplyXWithoutSplitScreenScaling@@YAMPEBUScreenPlacement@@MH@Z(scrPlace, x, horzAlign);
  return result;
}

/*
==============
ScrPlace_HiResApplyRect
==============
*/

void __fastcall ScrPlace_HiResApplyRect(float *x, float *y, float *w, float *h)
{
  ?ScrPlace_HiResApplyRect@@YAXPEAM000@Z(x, y, w, h);
}

/*
==============
ScrPlace_SetupViewport
==============
*/

void __fastcall ScrPlace_SetupViewport(ScreenPlacement *scrPlace, int viewportX, int viewportY, int viewportWidth, int viewportHeight)
{
  ?ScrPlace_SetupViewport@@YAXPEAUScreenPlacement@@HHHH@Z(scrPlace, viewportX, viewportY, viewportWidth, viewportHeight);
}

/*
==============
ScrPlace_IsFullScreenActive
==============
*/

int __fastcall ScrPlace_IsFullScreenActive()
{
  return ?ScrPlace_IsFullScreenActive@@YAHXZ();
}

/*
==============
ScrPlace_IsDisplayViewActive
==============
*/

int __fastcall ScrPlace_IsDisplayViewActive()
{
  return ?ScrPlace_IsDisplayViewActive@@YAHXZ();
}

/*
==============
ScrPlace_BeginDisplayView
==============
*/

void ScrPlace_BeginDisplayView(void)
{
  ?ScrPlace_BeginDisplayView@@YAXXZ();
}

/*
==============
ScrPlace_BeginFullScreen
==============
*/

void ScrPlace_BeginFullScreen(void)
{
  ?ScrPlace_BeginFullScreen@@YAXXZ();
}

/*
==============
ScrPlace_SetupRenderTargetViewport
==============
*/

void __fastcall ScrPlace_SetupRenderTargetViewport(ScreenPlacement *scrPlace, int viewportX, int viewportY, int viewportWidth, int viewportHeight, int renderTargetWidth, int renderTargetHeight)
{
  ?ScrPlace_SetupRenderTargetViewport@@YAXPEAUScreenPlacement@@HHHHHH@Z(scrPlace, viewportX, viewportY, viewportWidth, viewportHeight, renderTargetWidth, renderTargetHeight);
}

/*
==============
ClampDimension
==============
*/

void __fastcall ClampDimension(float *o, float *size, double min, double max)
{
  __asm
  {
    vcomiss xmm3, xmm2
    vmovaps [rsp+58h+var_18], xmm6
  }
  _RBX = size;
  __asm { vmovaps [rsp+58h+var_28], xmm7 }
  _RDI = o;
  __asm
  {
    vmovaps xmm7, xmm2
    vmovaps xmm6, xmm3
    vmovss  xmm1, dword ptr [rdi]
    vcomiss xmm1, xmm6
    vmovss  dword ptr [rdi], xmm6
  }
  *size = 0.0;
  __asm
  {
    vmovss  xmm1, dword ptr [rdi]
    vaddss  xmm0, xmm1, dword ptr [rbx]
    vcomiss xmm0, xmm6
    vsubss  xmm0, xmm6, xmm1
    vmovss  dword ptr [rbx], xmm0
    vmovaps xmm6, [rsp+58h+var_18]
    vmovaps xmm7, [rsp+58h+var_28]
  }
}

/*
==============
ScrPlace_ApplyRect
==============
*/
void ScrPlace_ApplyRect(const ScreenPlacement *scrPlace, float *x, float *y, float *w, float *h, int horzAlign, int vertAlign)
{
  const dvar_t *v14; 

  _RDI = w;
  _RBP = y;
  _RSI = h;
  _R14 = x;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vucomiss xmm0, dword ptr [rdx]
  }
  if ( !y && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.cpp", 365, ASSERT_TYPE_ASSERT, "(y)", (const char *)&queryFormat, "y") )
    __debugbreak();
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.cpp", 366, ASSERT_TYPE_ASSERT, "(w)", (const char *)&queryFormat, "w") )
    __debugbreak();
  if ( !h && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.cpp", 367, ASSERT_TYPE_ASSERT, "(h)", (const char *)&queryFormat, "h") )
    __debugbreak();
  v14 = DVARBOOL_cg_hudSplitscreenOffsetsUseScale;
  if ( !DVARBOOL_cg_hudSplitscreenOffsetsUseScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_hudSplitscreenOffsetsUseScale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v14);
  if ( v14->current.enabled )
  {
    __asm
    {
      vmovss  xmm0, cs:?cg_hudSplitscreenScale@@3MA; float cg_hudSplitscreenScale
      vmulss  xmm1, xmm0, dword ptr [r14]
      vmovss  dword ptr [r14], xmm1
      vmovss  xmm2, cs:?cg_hudSplitscreenScale@@3MA; float cg_hudSplitscreenScale
      vmulss  xmm0, xmm2, dword ptr [rbp+0]
      vmovss  dword ptr [rbp+0], xmm0
    }
  }
  __asm
  {
    vmovss  xmm0, cs:?cg_hudSplitscreenScale@@3MA; float cg_hudSplitscreenScale
    vmulss  xmm1, xmm0, dword ptr [rdi]
    vmovss  dword ptr [rdi], xmm1
    vmovss  xmm2, cs:?cg_hudSplitscreenScale@@3MA; float cg_hudSplitscreenScale
    vmulss  xmm0, xmm2, dword ptr [rsi]
    vmovss  dword ptr [rsi], xmm0
  }
  ScrPlace_ApplyRectWithoutSplitScreenScaling(scrPlace, _R14, _RBP, _RDI, h, horzAlign, vertAlign);
}

/*
==============
ScrPlace_ApplyRectClamped
==============
*/
void ScrPlace_ApplyRectClamped(const ScreenPlacement *scrPlace, float *x, float *y, float *w, float *h, int horzAlign, int vertAlign)
{
  const dvar_t *v14; 

  _RDI = w;
  _RBP = y;
  _RSI = h;
  _R14 = x;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vucomiss xmm0, dword ptr [rdx]
  }
  _R13 = scrPlace;
  if ( !y && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.cpp", 365, ASSERT_TYPE_ASSERT, "(y)", (const char *)&queryFormat, "y") )
    __debugbreak();
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.cpp", 366, ASSERT_TYPE_ASSERT, "(w)", (const char *)&queryFormat, "w") )
    __debugbreak();
  if ( !h && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.cpp", 367, ASSERT_TYPE_ASSERT, "(h)", (const char *)&queryFormat, "h") )
    __debugbreak();
  v14 = DVARBOOL_cg_hudSplitscreenOffsetsUseScale;
  if ( !DVARBOOL_cg_hudSplitscreenOffsetsUseScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_hudSplitscreenOffsetsUseScale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v14);
  if ( v14->current.enabled )
  {
    __asm
    {
      vmovss  xmm0, cs:?cg_hudSplitscreenScale@@3MA; float cg_hudSplitscreenScale
      vmulss  xmm1, xmm0, dword ptr [r14]
      vmovss  dword ptr [r14], xmm1
      vmovss  xmm2, cs:?cg_hudSplitscreenScale@@3MA; float cg_hudSplitscreenScale
      vmulss  xmm0, xmm2, dword ptr [rbp+0]
      vmovss  dword ptr [rbp+0], xmm0
    }
  }
  __asm
  {
    vmovss  xmm0, cs:?cg_hudSplitscreenScale@@3MA; float cg_hudSplitscreenScale
    vmulss  xmm1, xmm0, dword ptr [rdi]
    vmovss  dword ptr [rdi], xmm1
    vmovss  xmm2, cs:?cg_hudSplitscreenScale@@3MA; float cg_hudSplitscreenScale
    vmulss  xmm0, xmm2, dword ptr [rsi]
    vmovss  dword ptr [rsi], xmm0
  }
  ScrPlace_ApplyRectWithoutSplitScreenScaling(_R13, _R14, _RBP, _RDI, h, horzAlign, vertAlign);
  __asm
  {
    vmovss  xmm3, dword ptr [r13+40h]; max
    vmovss  xmm2, dword ptr [r13+38h]; min
  }
  ClampDimension(_R14, _RDI, *(double *)&_XMM2, *(double *)&_XMM3);
  __asm
  {
    vmovss  xmm3, dword ptr [r13+44h]
    vmovss  xmm2, dword ptr [r13+3Ch]
  }
  ClampDimension(_RBP, h, *(double *)&_XMM2, *(double *)&_XMM3);
}

/*
==============
ScrPlace_ApplyRectWithoutSplitScreenScaling
==============
*/
void ScrPlace_ApplyRectWithoutSplitScreenScaling(const ScreenPlacement *scrPlace, float *x, float *y, float *w, float *h, int horzAlign, int vertAlign)
{
  __asm { vmovaps [rsp+58h+var_28], xmm6 }
  _RBP = w;
  _RSI = y;
  _R14 = x;
  _RBX = scrPlace;
  if ( !x && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.cpp", 383, ASSERT_TYPE_ASSERT, "(x)", (const char *)&queryFormat, "x") )
    __debugbreak();
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.cpp", 384, ASSERT_TYPE_ASSERT, "(y)", (const char *)&queryFormat, "y") )
    __debugbreak();
  if ( !_RBP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.cpp", 385, ASSERT_TYPE_ASSERT, "(w)", (const char *)&queryFormat, "w") )
    __debugbreak();
  _RDI = h;
  if ( !h && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.cpp", 386, ASSERT_TYPE_ASSERT, "(h)", (const char *)&queryFormat, "h") )
    __debugbreak();
  __asm { vmovss  xmm6, cs:__real@3f000000 }
  switch ( horzAlign )
  {
    case 0:
      goto $LN17_83;
    case 1:
      __asm
      {
        vmovss  xmm0, dword ptr [rbx]; jumptable 0000000141A7325C case 1
        vmulss  xmm1, xmm0, dword ptr [r14]
        vaddss  xmm2, xmm1, dword ptr [rbx+38h]
      }
      goto LABEL_30;
    case 2:
      __asm
      {
        vmovss  xmm0, dword ptr [rbx]; jumptable 0000000141A7325C case 2
        vmulss  xmm2, xmm6, dword ptr [rbx+20h]
        vmulss  xmm3, xmm0, dword ptr [r14]
        vaddss  xmm0, xmm3, xmm2
        vmovss  dword ptr [r14], xmm0
        vmovss  xmm1, dword ptr [rbx]
        vmulss  xmm2, xmm1, dword ptr [rbp+0]
        vmovss  dword ptr [rbp+0], xmm2
      }
      break;
    case 3:
      __asm
      {
        vmovss  xmm0, dword ptr [rbx]; jumptable 0000000141A7325C case 3
        vmulss  xmm1, xmm0, dword ptr [r14]
        vaddss  xmm2, xmm1, dword ptr [rbx+40h]
      }
      goto LABEL_30;
    case 4:
      __asm
      {
        vmovss  xmm0, dword ptr [r14]; jumptable 0000000141A7325C case 4
        vmulss  xmm1, xmm0, dword ptr [rbx+8]
        vmovss  dword ptr [r14], xmm1
        vmovss  xmm2, dword ptr [rbp+0]
        vmulss  xmm0, xmm2, dword ptr [rbx+8]
        vmovss  dword ptr [rbp+0], xmm0
      }
      break;
    case 5:
      break;
    case 6:
      __asm
      {
        vmovss  xmm0, dword ptr [r14]; jumptable 0000000141A7325C case 6
        vmulss  xmm1, xmm0, dword ptr [rbx+10h]
        vmovss  dword ptr [r14], xmm1
        vmovss  xmm2, dword ptr [rbp+0]
        vmulss  xmm0, xmm2, dword ptr [rbx+10h]
        vmovss  dword ptr [rbp+0], xmm0
      }
      break;
    case 7:
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+40h]; jumptable 0000000141A7325C case 7
        vaddss  xmm1, xmm0, dword ptr [rbx+38h]
      }
      goto LABEL_17;
    case 8:
      __asm
      {
        vmovss  xmm0, dword ptr [rbx]; jumptable 0000000141A7325C case 8
        vmulss  xmm1, xmm0, dword ptr [r14]
        vaddss  xmm2, xmm1, dword ptr [rbx+58h]
      }
      goto LABEL_30;
    case 9:
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+60h]; jumptable 0000000141A7325C case 9
        vaddss  xmm1, xmm0, dword ptr [rbx+58h]
      }
LABEL_17:
      __asm
      {
        vmovss  xmm2, dword ptr [rbx]
        vmulss  xmm0, xmm2, dword ptr [r14]
        vmulss  xmm3, xmm1, xmm6
        vaddss  xmm1, xmm3, xmm0
      }
      goto LABEL_18;
    case 10:
      __asm
      {
        vmovss  xmm0, dword ptr [rbx]; jumptable 0000000141A7325C case 10
        vmulss  xmm1, xmm0, dword ptr [r14]
        vaddss  xmm2, xmm1, dword ptr [rbx+60h]
      }
      goto LABEL_30;
    case 11:
      __asm
      {
        vmulss  xmm1, xmm6, dword ptr [rbp+0]; jumptable 0000000141A7325C case 11
        vaddss  xmm2, xmm1, dword ptr [r14]
        vmovss  dword ptr [r14], xmm2
        vmovss  xmm0, dword ptr [rbx]
        vmulss  xmm1, xmm0, dword ptr [rbp+0]
        vmovss  dword ptr [rbp+0], xmm1
        vmovss  xmm0, dword ptr [r14]
        vmulss  xmm2, xmm1, xmm6
        vsubss  xmm1, xmm0, xmm2
        vmovss  dword ptr [r14], xmm1
      }
      break;
    case 12:
      __asm
      {
        vmovss  xmm0, dword ptr [rbx]; jumptable 0000000141A7325C case 12
        vmulss  xmm1, xmm0, dword ptr [r14]
      }
LABEL_18:
      __asm
      {
        vmovss  dword ptr [r14], xmm1
        vmovss  xmm2, dword ptr [rbx]
        vmulss  xmm0, xmm2, dword ptr [rbp+0]
        vmovss  dword ptr [rbp+0], xmm0
      }
      break;
    default:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.cpp", 391, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "invalid horizontal alignment case") )
        __debugbreak();
$LN17_83:
      __asm
      {
        vmovss  xmm0, dword ptr [rbx]; jumptable 0000000141A7325C case 0
        vmulss  xmm1, xmm0, dword ptr [r14]
        vaddss  xmm2, xmm1, dword ptr [rbx+68h]
      }
LABEL_30:
      __asm
      {
        vmovss  dword ptr [r14], xmm2
        vmovss  xmm0, dword ptr [rbx]
        vmulss  xmm1, xmm0, dword ptr [rbp+0]
        vmovss  dword ptr [rbp+0], xmm1
      }
      break;
  }
  switch ( vertAlign )
  {
    case 0:
    case 13:
      goto $LN22_92;
    case 1:
      __asm
      {
        vmovss  xmm0, dword ptr [rsi]; jumptable 0000000141A733FE case 1
        vmulss  xmm1, xmm0, dword ptr [rbx+4]
        vaddss  xmm2, xmm1, dword ptr [rbx+3Ch]
      }
      goto LABEL_33;
    case 2:
      __asm
      {
        vmovss  xmm0, dword ptr [rsi]; jumptable 0000000141A733FE case 2
        vmulss  xmm2, xmm6, dword ptr [rbx+24h]
        vmulss  xmm3, xmm0, dword ptr [rbx+4]
        vaddss  xmm0, xmm3, xmm2
        vmovss  dword ptr [rsi], xmm0
        vmovss  xmm1, dword ptr [rdi]
        vmulss  xmm2, xmm1, dword ptr [rbx+4]
        vmovss  dword ptr [rdi], xmm2
      }
      goto $LN19_80;
    case 3:
      __asm
      {
        vmovss  xmm0, dword ptr [rsi]; jumptable 0000000141A733FE case 3
        vmulss  xmm1, xmm0, dword ptr [rbx+4]
        vaddss  xmm2, xmm1, dword ptr [rbx+44h]
      }
      goto LABEL_33;
    case 4:
      __asm
      {
        vmovss  xmm0, dword ptr [rsi]; jumptable 0000000141A733FE case 4
        vmulss  xmm1, xmm0, dword ptr [rbx+0Ch]
        vmovss  dword ptr [rsi], xmm1
        vmovss  xmm2, dword ptr [rdi]
        vmulss  xmm0, xmm2, dword ptr [rbx+0Ch]
      }
      goto LABEL_48;
    case 5:
      goto $LN19_80;
    case 6:
      __asm
      {
        vmovss  xmm0, dword ptr [rsi]; jumptable 0000000141A733FE case 6
        vmulss  xmm1, xmm0, dword ptr [rbx+14h]
        vmovss  dword ptr [rsi], xmm1
        vmovss  xmm2, dword ptr [rdi]
        vmulss  xmm0, xmm2, dword ptr [rbx+14h]
      }
      goto LABEL_48;
    case 7:
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+44h]; jumptable 0000000141A733FE case 7
        vaddss  xmm1, xmm0, dword ptr [rbx+3Ch]
      }
      goto LABEL_36;
    case 8:
      __asm
      {
        vmovss  xmm0, dword ptr [rsi]; jumptable 0000000141A733FE case 8
        vmulss  xmm1, xmm0, dword ptr [rbx+4]
        vaddss  xmm2, xmm1, dword ptr [rbx+5Ch]
      }
      goto LABEL_33;
    case 9:
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+64h]; jumptable 0000000141A733FE case 9
        vaddss  xmm1, xmm0, dword ptr [rbx+5Ch]
      }
LABEL_36:
      __asm
      {
        vmovss  xmm2, dword ptr [rsi]
        vmulss  xmm0, xmm2, dword ptr [rbx+4]
        vmulss  xmm3, xmm1, xmm6
        vaddss  xmm1, xmm3, xmm0
      }
      goto LABEL_47;
    case 10:
      __asm
      {
        vmovss  xmm0, dword ptr [rsi]; jumptable 0000000141A733FE case 10
        vmulss  xmm1, xmm0, dword ptr [rbx+4]
        vaddss  xmm2, xmm1, dword ptr [rbx+64h]
      }
LABEL_33:
      __asm
      {
        vmovss  dword ptr [rsi], xmm2
        vmovss  xmm0, dword ptr [rdi]
        vmulss  xmm1, xmm0, dword ptr [rbx+4]
        vmovss  dword ptr [rdi], xmm1
      }
      goto $LN19_80;
    case 11:
      __asm
      {
        vmulss  xmm1, xmm6, dword ptr [rdi]; jumptable 0000000141A733FE case 11
        vaddss  xmm2, xmm1, dword ptr [rsi]
        vmovss  dword ptr [rsi], xmm2
        vmovss  xmm0, dword ptr [rbx+4]
        vmulss  xmm1, xmm0, dword ptr [rdi]
        vmovss  dword ptr [rdi], xmm1
        vmovss  xmm0, dword ptr [rsi]
        vmulss  xmm2, xmm1, xmm6
        vsubss  xmm1, xmm0, xmm2
        vmovss  dword ptr [rsi], xmm1
      }
      goto $LN19_80;
    default:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.cpp", 448, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "invalid vertical alignment case") )
        __debugbreak();
$LN22_92:
      __asm
      {
        vmovss  xmm0, dword ptr [rsi]; jumptable 0000000141A733FE cases 0,13
        vmulss  xmm1, xmm0, dword ptr [rbx+4]
      }
LABEL_47:
      __asm
      {
        vmovss  dword ptr [rsi], xmm1
        vmovss  xmm2, dword ptr [rdi]
        vmulss  xmm0, xmm2, dword ptr [rbx+4]
      }
LABEL_48:
      __asm { vmovss  dword ptr [rdi], xmm0 }
$LN19_80:
      __asm { vmovaps xmm6, [rsp+58h+var_28] }
      return;
  }
}

/*
==============
ScrPlace_ApplyX
==============
*/

float __fastcall ScrPlace_ApplyX(const ScreenPlacement *scrPlace, double x, int horzAlign)
{
  const dvar_t *v4; 
  __int64 v24; 

  v4 = DVARBOOL_cg_hudSplitscreenOffsetsUseScale;
  __asm { vmovaps [rsp+58h+var_18], xmm6 }
  _RBX = scrPlace;
  __asm { vmovaps xmm6, xmm1 }
  if ( !DVARBOOL_cg_hudSplitscreenOffsetsUseScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_hudSplitscreenOffsetsUseScale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( v4->current.enabled )
    __asm { vmulss  xmm6, xmm6, cs:?cg_hudSplitscreenScale@@3MA; float cg_hudSplitscreenScale }
  switch ( horzAlign )
  {
    case 1:
      __asm
      {
        vmulss  xmm0, xmm6, dword ptr [rbx]; jumptable 0000000141A737B4 case 1
        vaddss  xmm6, xmm0, dword ptr [rbx+38h]
      }
      break;
    case 2:
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+20h]; jumptable 0000000141A737B4 case 2
        vmulss  xmm1, xmm0, cs:__real@3f000000
        vmulss  xmm2, xmm6, dword ptr [rbx]
        vaddss  xmm6, xmm2, xmm1
      }
      break;
    case 3:
      __asm
      {
        vmulss  xmm0, xmm6, dword ptr [rbx]; jumptable 0000000141A737B4 case 3
        vaddss  xmm6, xmm0, dword ptr [rbx+40h]
      }
      break;
    case 4:
      __asm { vmulss  xmm6, xmm6, dword ptr [rbx+8]; jumptable 0000000141A737B4 case 4 }
      break;
    case 5:
      break;
    case 6:
      __asm { vmulss  xmm6, xmm6, dword ptr [rbx+10h]; jumptable 0000000141A737B4 case 6 }
      break;
    case 7:
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+40h]; jumptable 0000000141A737B4 case 7
        vaddss  xmm1, xmm0, dword ptr [rbx+38h]
      }
      goto LABEL_10;
    case 8:
      __asm
      {
        vmulss  xmm0, xmm6, dword ptr [rbx]; jumptable 0000000141A737B4 case 8
        vaddss  xmm6, xmm0, dword ptr [rbx+58h]
      }
      break;
    case 9:
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+60h]; jumptable 0000000141A737B4 case 9
        vaddss  xmm1, xmm0, dword ptr [rbx+58h]
      }
LABEL_10:
      __asm
      {
        vmulss  xmm2, xmm1, cs:__real@3f000000
        vmulss  xmm0, xmm6, dword ptr [rbx]
        vaddss  xmm6, xmm2, xmm0
      }
      break;
    case 10:
      __asm
      {
        vmulss  xmm0, xmm6, dword ptr [rbx]; jumptable 0000000141A737B4 case 10
        vaddss  xmm6, xmm0, dword ptr [rbx+60h]
      }
      break;
    case 12:
      __asm { vmulss  xmm6, xmm6, dword ptr [rbx]; jumptable 0000000141A737B4 case 12 }
      break;
    default:
      if ( horzAlign )
      {
        LODWORD(v24) = horzAlign;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.cpp", 233, ASSERT_TYPE_ASSERT, "( ( horzAlign == 0 ) )", "( horzAlign ) = %i", v24) )
          __debugbreak();
      }
      __asm
      {
        vmulss  xmm1, xmm6, dword ptr [rbx]
        vaddss  xmm6, xmm1, dword ptr [rbx+68h]
      }
      break;
  }
  __asm
  {
    vmovaps xmm0, xmm6
    vmovaps xmm6, [rsp+58h+var_18]
  }
  return *(float *)&_XMM0;
}

/*
==============
ScrPlace_ApplyXWithoutSplitScreenScaling
==============
*/

float __fastcall ScrPlace_ApplyXWithoutSplitScreenScaling(const ScreenPlacement *scrPlace, double x, int horzAlign)
{
  __asm { vmovaps [rsp+48h+var_18], xmm6 }
  _RBX = scrPlace;
  __asm { vmovaps xmm6, xmm1 }
  switch ( horzAlign )
  {
    case 1:
      __asm
      {
        vmulss  xmm0, xmm6, dword ptr [rbx]; jumptable 0000000141A73973 case 1
        vaddss  xmm0, xmm0, dword ptr [rbx+38h]
        vmovaps xmm6, [rsp+48h+var_18]
      }
      break;
    case 2:
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+20h]; jumptable 0000000141A73973 case 2
        vmulss  xmm1, xmm0, cs:__real@3f000000
        vmulss  xmm2, xmm6, dword ptr [rbx]
        vaddss  xmm0, xmm2, xmm1
        vmovaps xmm6, [rsp+48h+var_18]
      }
      break;
    case 3:
      __asm
      {
        vmulss  xmm0, xmm6, dword ptr [rbx]; jumptable 0000000141A73973 case 3
        vaddss  xmm0, xmm0, dword ptr [rbx+40h]
        vmovaps xmm6, [rsp+48h+var_18]
      }
      break;
    case 4:
      __asm
      {
        vmulss  xmm0, xmm6, dword ptr [rbx+8]; jumptable 0000000141A73973 case 4
        vmovaps xmm6, [rsp+48h+var_18]
      }
      break;
    case 5:
      __asm
      {
        vmovaps xmm0, xmm6; jumptable 0000000141A73973 case 5
        vmovaps xmm6, [rsp+48h+var_18]
      }
      break;
    case 6:
      __asm
      {
        vmulss  xmm0, xmm6, dword ptr [rbx+10h]; jumptable 0000000141A73973 case 6
        vmovaps xmm6, [rsp+48h+var_18]
      }
      break;
    case 7:
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+40h]; jumptable 0000000141A73973 case 7
        vaddss  xmm1, xmm0, dword ptr [rbx+38h]
      }
      goto LABEL_5;
    case 8:
      __asm
      {
        vmulss  xmm0, xmm6, dword ptr [rbx]; jumptable 0000000141A73973 case 8
        vaddss  xmm0, xmm0, dword ptr [rbx+58h]
        vmovaps xmm6, [rsp+48h+var_18]
      }
      break;
    case 9:
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+60h]; jumptable 0000000141A73973 case 9
        vaddss  xmm1, xmm0, dword ptr [rbx+58h]
      }
LABEL_5:
      __asm
      {
        vmulss  xmm2, xmm1, cs:__real@3f000000
        vmulss  xmm0, xmm6, dword ptr [rbx]
        vaddss  xmm0, xmm2, xmm0
        vmovaps xmm6, [rsp+48h+var_18]
      }
      break;
    case 10:
      __asm
      {
        vmulss  xmm0, xmm6, dword ptr [rbx]; jumptable 0000000141A73973 case 10
        vaddss  xmm0, xmm0, dword ptr [rbx+60h]
        vmovaps xmm6, [rsp+48h+var_18]
      }
      break;
    case 12:
      __asm
      {
        vmulss  xmm0, xmm6, dword ptr [rbx]; jumptable 0000000141A73973 case 12
        vmovaps xmm6, [rsp+48h+var_18]
      }
      break;
    default:
      if ( horzAlign && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.cpp", 233, ASSERT_TYPE_ASSERT, "( ( horzAlign == 0 ) )", "( horzAlign ) = %i", horzAlign) )
        __debugbreak();
      __asm
      {
        vmulss  xmm0, xmm6, dword ptr [rbx]
        vaddss  xmm0, xmm0, dword ptr [rbx+68h]
        vmovaps xmm6, [rsp+48h+var_18]
      }
      break;
  }
  return *(float *)&_XMM0;
}

/*
==============
ScrPlace_ApplyY
==============
*/

float __fastcall ScrPlace_ApplyY(const ScreenPlacement *scrPlace, double y, int vertAlign)
{
  const dvar_t *v4; 
  __int64 v23; 

  v4 = DVARBOOL_cg_hudSplitscreenOffsetsUseScale;
  __asm { vmovaps [rsp+58h+var_18], xmm6 }
  _RBX = scrPlace;
  __asm { vmovaps xmm6, xmm1 }
  if ( !DVARBOOL_cg_hudSplitscreenOffsetsUseScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_hudSplitscreenOffsetsUseScale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( v4->current.enabled )
    __asm { vmulss  xmm6, xmm6, cs:?cg_hudSplitscreenScale@@3MA; float cg_hudSplitscreenScale }
  switch ( vertAlign )
  {
    case 1:
      __asm
      {
        vmulss  xmm0, xmm6, dword ptr [rbx+4]; jumptable 0000000141A73BF4 case 1
        vaddss  xmm6, xmm0, dword ptr [rbx+3Ch]
      }
      goto LABEL_21;
    case 2:
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+24h]; jumptable 0000000141A73BF4 case 2
        vmulss  xmm1, xmm0, cs:__real@3f000000
        vmulss  xmm2, xmm6, dword ptr [rbx+4]
        vaddss  xmm6, xmm2, xmm1
      }
      goto LABEL_21;
    case 3:
      __asm
      {
        vmulss  xmm0, xmm6, dword ptr [rbx+4]; jumptable 0000000141A73BF4 case 3
        vaddss  xmm6, xmm0, dword ptr [rbx+44h]
      }
      goto LABEL_21;
    case 4:
      __asm { vmulss  xmm6, xmm6, dword ptr [rbx+0Ch]; jumptable 0000000141A73BF4 case 4 }
      goto LABEL_21;
    case 5:
      goto LABEL_21;
    case 6:
      __asm { vmulss  xmm6, xmm6, dword ptr [rbx+14h]; jumptable 0000000141A73BF4 case 6 }
      goto LABEL_21;
    case 7:
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+44h]; jumptable 0000000141A73BF4 case 7
        vaddss  xmm1, xmm0, dword ptr [rbx+3Ch]
      }
      goto LABEL_10;
    case 8:
      __asm
      {
        vmulss  xmm0, xmm6, dword ptr [rbx+4]; jumptable 0000000141A73BF4 case 8
        vaddss  xmm6, xmm0, dword ptr [rbx+5Ch]
      }
      goto LABEL_21;
    case 9:
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+64h]; jumptable 0000000141A73BF4 case 9
        vaddss  xmm1, xmm0, dword ptr [rbx+5Ch]
      }
LABEL_10:
      __asm
      {
        vmulss  xmm2, xmm1, cs:__real@3f000000
        vmulss  xmm0, xmm6, dword ptr [rbx+4]
        vaddss  xmm6, xmm2, xmm0
      }
      goto LABEL_21;
    case 10:
      __asm
      {
        vmulss  xmm0, xmm6, dword ptr [rbx+4]; jumptable 0000000141A73BF4 case 10
        vaddss  xmm6, xmm0, dword ptr [rbx+64h]
      }
      goto LABEL_21;
    case 13:
      goto LABEL_20;
    default:
      if ( vertAlign )
      {
        LODWORD(v23) = vertAlign;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.cpp", 299, ASSERT_TYPE_ASSERT, "( ( vertAlign == 0 ) )", "( vertAlign ) = %i", v23) )
          __debugbreak();
      }
LABEL_20:
      __asm { vmulss  xmm6, xmm6, dword ptr [rbx+4]; jumptable 0000000141A73BF4 case 13 }
LABEL_21:
      __asm
      {
        vmovaps xmm0, xmm6
        vmovaps xmm6, [rsp+58h+var_18]
      }
      return *(float *)&_XMM0;
  }
}

/*
==============
ScrPlace_ApplyYWithoutSplitScreenScaling
==============
*/

float __fastcall ScrPlace_ApplyYWithoutSplitScreenScaling(const ScreenPlacement *scrPlace, double y, int vertAlign)
{
  __asm { vmovaps [rsp+48h+var_18], xmm6 }
  _RBX = scrPlace;
  __asm { vmovaps xmm6, xmm1 }
  switch ( vertAlign )
  {
    case 1:
      __asm
      {
        vmulss  xmm0, xmm6, dword ptr [rbx+4]; jumptable 0000000141A73DB3 case 1
        vaddss  xmm0, xmm0, dword ptr [rbx+3Ch]
        vmovaps xmm6, [rsp+48h+var_18]
      }
      return *(float *)&_XMM0;
    case 2:
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+24h]; jumptable 0000000141A73DB3 case 2
        vmulss  xmm1, xmm0, cs:__real@3f000000
        vmulss  xmm2, xmm6, dword ptr [rbx+4]
        vaddss  xmm0, xmm2, xmm1
        vmovaps xmm6, [rsp+48h+var_18]
      }
      return *(float *)&_XMM0;
    case 3:
      __asm
      {
        vmulss  xmm0, xmm6, dword ptr [rbx+4]; jumptable 0000000141A73DB3 case 3
        vaddss  xmm0, xmm0, dword ptr [rbx+44h]
        vmovaps xmm6, [rsp+48h+var_18]
      }
      return *(float *)&_XMM0;
    case 4:
      __asm
      {
        vmulss  xmm0, xmm6, dword ptr [rbx+0Ch]; jumptable 0000000141A73DB3 case 4
        vmovaps xmm6, [rsp+48h+var_18]
      }
      return *(float *)&_XMM0;
    case 5:
      __asm
      {
        vmovaps xmm0, xmm6; jumptable 0000000141A73DB3 case 5
        vmovaps xmm6, [rsp+48h+var_18]
      }
      return *(float *)&_XMM0;
    case 6:
      __asm
      {
        vmulss  xmm0, xmm6, dword ptr [rbx+14h]; jumptable 0000000141A73DB3 case 6
        vmovaps xmm6, [rsp+48h+var_18]
      }
      return *(float *)&_XMM0;
    case 7:
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+44h]; jumptable 0000000141A73DB3 case 7
        vaddss  xmm1, xmm0, dword ptr [rbx+3Ch]
      }
      goto LABEL_5;
    case 8:
      __asm
      {
        vmulss  xmm0, xmm6, dword ptr [rbx+4]; jumptable 0000000141A73DB3 case 8
        vaddss  xmm0, xmm0, dword ptr [rbx+5Ch]
        vmovaps xmm6, [rsp+48h+var_18]
      }
      return *(float *)&_XMM0;
    case 9:
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+64h]; jumptable 0000000141A73DB3 case 9
        vaddss  xmm1, xmm0, dword ptr [rbx+5Ch]
      }
LABEL_5:
      __asm
      {
        vmulss  xmm2, xmm1, cs:__real@3f000000
        vmulss  xmm0, xmm6, dword ptr [rbx+4]
        vaddss  xmm0, xmm2, xmm0
        vmovaps xmm6, [rsp+48h+var_18]
      }
      return *(float *)&_XMM0;
    case 10:
      __asm
      {
        vmulss  xmm0, xmm6, dword ptr [rbx+4]; jumptable 0000000141A73DB3 case 10
        vaddss  xmm0, xmm0, dword ptr [rbx+64h]
        vmovaps xmm6, [rsp+48h+var_18]
      }
      return *(float *)&_XMM0;
    case 13:
      goto $LN4_100;
    default:
      if ( vertAlign && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.cpp", 299, ASSERT_TYPE_ASSERT, "( ( vertAlign == 0 ) )", "( vertAlign ) = %i", vertAlign) )
        __debugbreak();
$LN4_100:
      __asm
      {
        vmulss  xmm0, xmm6, dword ptr [rbx+4]; jumptable 0000000141A73DB3 case 13
        vmovaps xmm6, [rsp+48h+var_18]
      }
      return *(float *)&_XMM0;
  }
}

/*
==============
ScrPlace_BeginDisplayView
==============
*/
void ScrPlace_BeginDisplayView(void)
{
  activeScreenPlacementMode = SCRMODE_DISPLAY;
}

/*
==============
ScrPlace_BeginFullScreen
==============
*/
void ScrPlace_BeginFullScreen(void)
{
  activeScreenPlacementMode = SCRMODE_FULL;
}

/*
==============
ScrPlace_CalcSafeAreaOffsets
==============
*/

void __fastcall ScrPlace_CalcSafeAreaOffsets(ScreenPlacement *scrPlace, double viewportX, double viewportY, double viewportWidth, float viewportHeight, float horzAspectScale, int renderTargetWidth, int renderTargetHeight)
{
  float fmt; 
  float fmta; 
  float safeAreaRatioHorz; 
  float safeAreaRatioHorza; 
  float safeAreaRatioVert; 
  float safeAreaRatioVerta; 
  char v47; 
  void *retaddr; 

  _RAX = &retaddr;
  _RBX = DVARFLT_safeArea_horizontal;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
    vmovaps xmmword ptr [rax-68h], xmm10
    vmovaps xmm9, xmm1
    vmovaps xmm7, xmm3
    vmovaps xmm8, xmm2
  }
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "safeArea_horizontal") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm6, dword ptr [rbx+28h] }
  _RBX = DVARFLT_safeArea_vertical;
  if ( !DVARFLT_safeArea_vertical && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "safeArea_vertical") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+28h]
    vmovss  xmm10, [rsp+0D8h+horzAspectScale]
    vmovss  xmm3, [rsp+0D8h+viewportHeight]; viewportHeight
    vmovss  [rsp+0D8h+safeAreaRatioVert], xmm0
    vmovss  [rsp+0D8h+safeAreaRatioHorz], xmm6
    vmovaps xmm0, xmm9; viewportX
    vmovaps xmm2, xmm7; viewportWidth
    vmovaps xmm1, xmm8; viewportY
    vmovss  dword ptr [rsp+0D8h+fmt], xmm10
  }
  ScrPlace_CalcSpecificSafeAreaOffsets(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmt, safeAreaRatioHorz, safeAreaRatioVert, &scrPlace->realViewableMin, &scrPlace->realViewableMax, &scrPlace->virtualViewableMin, &scrPlace->virtualViewableMax, renderTargetWidth, renderTargetHeight);
  _RBX = DVARFLT_safeArea_adjusted_horizontal;
  if ( !DVARFLT_safeArea_adjusted_horizontal && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "safeArea_adjusted_horizontal") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm6, dword ptr [rbx+28h] }
  _RBX = DVARFLT_safeArea_adjusted_vertical;
  if ( !DVARFLT_safeArea_adjusted_vertical && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "safeArea_adjusted_vertical") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+28h]
    vmovss  xmm3, [rsp+0D8h+viewportHeight]; viewportHeight
    vmovss  [rsp+0D8h+safeAreaRatioVert], xmm0
    vmovss  [rsp+0D8h+safeAreaRatioHorz], xmm6
    vmovaps xmm0, xmm9; viewportX
    vmovaps xmm2, xmm7; viewportWidth
    vmovaps xmm1, xmm8; viewportY
    vmovss  dword ptr [rsp+0D8h+fmt], xmm10
  }
  ScrPlace_CalcSpecificSafeAreaOffsets(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmta, safeAreaRatioHorza, safeAreaRatioVerta, &scrPlace->realAdjustableMin, &scrPlace->realAdjustableMax, &scrPlace->virtualAdjustableMin, &scrPlace->virtualAdjustableMax, renderTargetWidth, renderTargetHeight);
  _R11 = &v47;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
  }
}

/*
==============
ScrPlace_CalcSpecificSafeAreaOffsets
==============
*/

void __fastcall ScrPlace_CalcSpecificSafeAreaOffsets(double viewportX, double viewportY, double viewportWidth, double viewportHeight, float horzAspectScale, float safeAreaRatioHorz, float safeAreaRatioVert, vec2_t *outRealViewableMin, vec2_t *outRealViewableMax, vec2_t *outVirtualViewableMin, vec2_t *outVirtualViewableMax, int renderTargetWidth, int renderTargetHeight)
{
  bool v38; 
  bool v43; 
  bool v44; 
  bool v46; 
  bool v48; 
  bool v54; 
  double v106; 
  __int64 v107; 
  double v108; 
  double v109; 
  double v110; 
  double v111; 
  double v112; 
  double v113; 
  double v114; 
  double v115; 
  double v116; 
  double v117; 
  double v118; 
  __int64 v119; 
  char v124; 
  void *retaddr; 

  _RAX = &retaddr;
  _RSI = outRealViewableMin;
  _RBP = outRealViewableMax;
  _R14 = outVirtualViewableMin;
  _R15 = outVirtualViewableMax;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
    vmovaps xmmword ptr [rax-98h], xmm11
    vmovaps xmmword ptr [rax-0A8h], xmm12
    vmovsd  xmm12, cs:__real@3ff0000000000000
    vmovaps [rsp+128h+var_B8], xmm13
    vmovaps [rsp+128h+var_C8], xmm14
    vmovss  xmm14, [rsp+128h+safeAreaRatioHorz]
    vxorps  xmm6, xmm6, xmm6
    vcomiss xmm14, xmm6
    vmovaps [rsp+128h+var_D8], xmm15
    vmovaps xmm10, xmm3
    vmovaps xmm9, xmm2
    vmovaps xmm8, xmm1
    vmovaps xmm7, xmm0
    vxorpd  xmm13, xmm13, xmm13
    vmovss  xmm0, cs:__real@3f800000
    vcomiss xmm14, xmm0
    vmovsd  [rsp+128h+var_F0], xmm12
    vcvtss2sd xmm0, xmm14, xmm14
    vmovsd  [rsp+128h+var_F8], xmm13
    vmovsd  [rsp+128h+var_100], xmm0
  }
  v38 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.cpp", 67, ASSERT_TYPE_ASSERT, "( 0 ) <= ( safeAreaRatioHorz ) && ( safeAreaRatioHorz ) <= ( 1 )", "safeAreaRatioHorz not in [0, 1]\n\t%g not in [%g, %g]", v106, v111, v115);
  if ( v38 )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, cs:__real@3f800000
    vmovss  xmm11, [rsp+128h+safeAreaRatioVert]
    vcomiss xmm11, xmm6
    vcomiss xmm11, xmm0
  }
  if ( v38 )
  {
    __asm
    {
      vmovsd  [rsp+128h+var_F0], xmm12
      vcvtss2sd xmm0, xmm11, xmm11
      vmovsd  [rsp+128h+var_F8], xmm13
      vmovsd  [rsp+128h+var_100], xmm0
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.cpp", 68, ASSERT_TYPE_ASSERT, "( 0 ) <= ( safeAreaRatioVert ) && ( safeAreaRatioVert ) <= ( 1 )", "safeAreaRatioVert not in [0, 1]\n\t%g not in [%g, %g]", v108, v112, v116) )
      __debugbreak();
  }
  if ( renderTargetWidth <= 0 )
  {
    LODWORD(v107) = renderTargetWidth;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.cpp", 69, ASSERT_TYPE_ASSERT, "( ( renderTargetWidth > 0 ) )", "( renderTargetWidth ) = %i", v107) )
      __debugbreak();
  }
  v43 = renderTargetHeight == 0;
  if ( renderTargetHeight <= 0 )
  {
    LODWORD(v107) = renderTargetHeight;
    v44 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.cpp", 70, ASSERT_TYPE_ASSERT, "( ( renderTargetHeight > 0 ) )", "( renderTargetHeight ) = %i", v107);
    v43 = !v44;
    if ( v44 )
      __debugbreak();
  }
  __asm
  {
    vcomiss xmm7, xmm6
    vcomiss xmm8, xmm6
    vcomiss xmm9, xmm6
  }
  if ( v43 )
  {
    __asm
    {
      vcvtss2sd xmm0, xmm9, xmm9
      vmovsd  [rsp+128h+var_100], xmm0
    }
    v46 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.cpp", 73, ASSERT_TYPE_ASSERT, "( ( viewportWidth > 0 ) )", "( viewportWidth ) = %g", v109);
    v43 = !v46;
    if ( v46 )
      __debugbreak();
  }
  __asm { vcomiss xmm10, xmm6 }
  if ( v43 )
  {
    __asm
    {
      vcvtss2sd xmm0, xmm10, xmm10
      vmovsd  [rsp+128h+var_100], xmm0
    }
    v48 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.cpp", 74, ASSERT_TYPE_ASSERT, "( ( viewportHeight > 0 ) )", "( viewportHeight ) = %g", v110);
    v43 = !v48;
    if ( v48 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm13, xmm13, xmm13
    vcvtsi2ss xmm13, xmm13, ebx
    vaddss  xmm15, xmm9, xmm7
    vcomiss xmm15, xmm13
  }
  if ( !v43 )
  {
    __asm
    {
      vcvtss2sd xmm0, xmm9, xmm9
      vmovsd  [rsp+128h+var_F0], xmm0
      vcvtss2sd xmm1, xmm7, xmm7
      vmovsd  [rsp+128h+var_F8], xmm1
    }
    v54 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.cpp", 75, ASSERT_TYPE_ASSERT, "(viewportX + viewportWidth <= renderTargetWidth)", "%s\n\t%g + %g > %i", "viewportX + viewportWidth <= renderTargetWidth", v113, v117, renderTargetWidth);
    v43 = !v54;
    if ( v54 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vcvtsi2ss xmm6, xmm6, edi
    vaddss  xmm12, xmm10, xmm8
    vcomiss xmm12, xmm6
  }
  if ( !v43 )
  {
    LODWORD(v119) = renderTargetHeight;
    __asm
    {
      vcvtss2sd xmm0, xmm10, xmm10
      vmovsd  [rsp+128h+var_F0], xmm0
      vcvtss2sd xmm1, xmm8, xmm8
      vmovsd  [rsp+128h+var_F8], xmm1
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.cpp", 76, ASSERT_TYPE_ASSERT, "(viewportY + viewportHeight <= renderTargetHeight)", "%s\n\t%g + %g > %i", "viewportY + viewportHeight <= renderTargetHeight", v114, v118, v119) )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm3, cs:__real@3f000000
    vmovss  xmm4, cs:__real@3f800000
  }
  _R11 = &v124;
  __asm
  {
    vsubss  xmm0, xmm4, xmm14
    vmovaps xmm14, [rsp+128h+var_C8]
    vmulss  xmm0, xmm0, xmm3
    vmulss  xmm1, xmm0, xmm13
    vaddss  xmm2, xmm1, xmm3
    vsubss  xmm0, xmm4, xmm11
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmulss  xmm1, xmm0, xmm3
    vxorps  xmm5, xmm5, xmm5
    vroundss xmm5, xmm5, xmm2, 1
    vmulss  xmm2, xmm1, xmm6
    vaddss  xmm3, xmm2, xmm3
    vmaxss  xmm0, xmm5, xmm7
    vsubss  xmm1, xmm0, xmm7
    vmovss  dword ptr [rsi], xmm1
    vsubss  xmm2, xmm13, xmm5
    vmovaps xmm13, xmmword ptr [r11-80h]
    vxorps  xmm4, xmm4, xmm4
    vroundss xmm4, xmm4, xmm3, 1
    vmaxss  xmm0, xmm4, xmm8
    vsubss  xmm1, xmm0, xmm8
    vmovss  dword ptr [rsi+4], xmm1
    vminss  xmm0, xmm2, xmm15
    vmovaps xmm15, [rsp+128h+var_D8]
    vsubss  xmm1, xmm0, xmm7
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovss  dword ptr [rbp+0], xmm1
    vsubss  xmm0, xmm6, xmm4
    vmovss  xmm4, [rsp+128h+horzAspectScale]
    vmovaps xmm6, xmmword ptr [r11-10h]
    vminss  xmm1, xmm0, xmm12
    vmovss  xmm0, cs:__real@44200000
    vmovaps xmm12, xmmword ptr [r11-70h]
    vsubss  xmm2, xmm1, xmm8
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovss  dword ptr [rbp+4], xmm2
    vmulss  xmm1, xmm4, dword ptr [rsi]
    vmovss  xmm2, cs:__real@43f00000
    vdivss  xmm5, xmm0, xmm9
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmulss  xmm0, xmm1, xmm5
    vmovss  dword ptr [r14], xmm0
    vdivss  xmm3, xmm2, xmm10
    vmulss  xmm0, xmm3, dword ptr [rsi+4]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovss  dword ptr [r14+4], xmm0
    vmulss  xmm1, xmm4, dword ptr [rbp+0]
    vmulss  xmm0, xmm1, xmm5
    vmovss  dword ptr [r15], xmm0
    vmulss  xmm1, xmm3, dword ptr [rbp+4]
    vmovss  dword ptr [r15+4], xmm1
  }
}

/*
==============
ScrPlace_EndFrame
==============
*/
void ScrPlace_EndFrame(void)
{
  activeScreenPlacementMode = SCRMODE_INVALID;
}

/*
==============
ScrPlace_HiResApplyRect
==============
*/
void ScrPlace_HiResApplyRect(float *x, float *y, float *w, float *h)
{
  ;
}

/*
==============
ScrPlace_HiResScaleRect
==============
*/
void ScrPlace_HiResScaleRect(float *x, float *y, float *w, float *h)
{
  ;
}

/*
==============
ScrPlace_Init
==============
*/
void ScrPlace_Init(void)
{
  __asm
  {
    vmovss  xmm0, cs:__real@3f800000
    vmovss  cs:?cg_hudSplitscreenScale@@3MA, xmm0; float cg_hudSplitscreenScale
  }
  activeScreenPlacementMode = SCRMODE_INVALID;
}

/*
==============
ScrPlace_IsDisplayViewActive
==============
*/
_BOOL8 ScrPlace_IsDisplayViewActive()
{
  return activeScreenPlacementMode == SCRMODE_DISPLAY;
}

/*
==============
ScrPlace_IsFullScreenActive
==============
*/
_BOOL8 ScrPlace_IsFullScreenActive()
{
  return activeScreenPlacementMode == SCRMODE_FULL;
}

/*
==============
ScrPlace_SetLegacySplitscreenScaling
==============
*/
void ScrPlace_SetLegacySplitscreenScaling(void)
{
  if ( CL_IsRenderingSplitScreen() )
  {
    _RBX = DVARFLT_cg_hudLegacySplitscreenScale;
    if ( !DVARFLT_cg_hudLegacySplitscreenScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_hudLegacySplitscreenScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+28h]
      vmovss  cs:?cg_hudSplitscreenScale@@3MA, xmm0; float cg_hudSplitscreenScale
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm0, cs:__real@3f800000
      vmovss  cs:?cg_hudSplitscreenScale@@3MA, xmm0; float cg_hudSplitscreenScale
    }
  }
}

/*
==============
ScrPlace_SetNormalSplitscreenScaling
==============
*/
void ScrPlace_SetNormalSplitscreenScaling(void)
{
  __asm
  {
    vmovss  xmm0, cs:__real@3f800000
    vmovss  cs:?cg_hudSplitscreenScale@@3MA, xmm0; float cg_hudSplitscreenScale
  }
}

/*
==============
ScrPlace_SetupClientViewports
==============
*/

void __fastcall ScrPlace_SetupClientViewports(double _XMM0_8, double _XMM1_8, double _XMM2_8, double _XMM3_8)
{
  ScreenPlacement *v4; 
  __int64 v5; 
  float v8; 

  v4 = scrPlaceViewDisplay;
  v5 = 2i64;
  do
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, ecx
      vxorps  xmm3, xmm3, xmm3
      vcvtsi2ss xmm3, xmm3, eax; viewportWidth
      vxorps  xmm2, xmm2, xmm2; viewportY
      vxorps  xmm1, xmm1, xmm1; viewportX
      vmovss  [rsp+48h+var_28], xmm0
    }
    ScrPlace_SetupFloatRenderTargetViewport(v4++, *(float *)&_XMM1_8, *(float *)&_XMM2_8, *(float *)&_XMM3_8, v8, cls.vidConfig.displayWidth, cls.vidConfig.displayHeight);
    --v5;
  }
  while ( v5 );
}

/*
==============
ScrPlace_SetupFloatRenderTargetViewport
==============
*/

void __fastcall ScrPlace_SetupFloatRenderTargetViewport(ScreenPlacement *scrPlace, double viewportX, double viewportY, double viewportWidth, float viewportHeight, int renderTargetWidth, int renderTargetHeight)
{
  bool v22; 
  bool v23; 
  bool v26; 
  bool v27; 
  bool v28; 
  bool v29; 
  bool v33; 
  bool v34; 
  char v48; 
  float fmt; 
  float horzAspectScale; 
  double horzAspectScalea; 
  char v64; 
  void *retaddr; 
  int viewportHeighta; 
  int viewportHeightb; 
  int viewportHeightc; 
  int viewportHeightd; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
  }
  _RBX = scrPlace;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovaps xmmword ptr [rax-78h], xmm12
    vmovaps [rsp+0C8h+var_88], xmm13
    vmovaps xmm13, xmm1
    vmovaps xmm9, xmm3
    vmovaps xmm12, xmm2
  }
  memset_0(scrPlace, -1330597712, sizeof(ScreenPlacement));
  __asm
  {
    vmovss  xmm11, [rsp+0C8h+viewportHeight]
    vmovss  dword ptr [rbx+24h], xmm11
    vmovss  dword ptr [rbx+20h], xmm9
    vmovss  dword ptr [rbx+18h], xmm13
    vmovss  dword ptr [rbx+1Ch], xmm12
    vmovss  xmm0, cs:?cls@@3UClStatic@@A.vidConfig.aspectRatioDisplayPixel; ClStatic cls
    vmovss  [rsp+0C8h+viewportHeight], xmm0
  }
  v22 = (viewportHeighta & 0x7F800000) == 2139095040;
  if ( (viewportHeighta & 0x7F800000) == 2139095040 )
  {
    v23 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.cpp", 141, ASSERT_TYPE_SANITY, "( !IS_NAN( cls.vidConfig.aspectRatioDisplayPixel ) )", (const char *)&queryFormat, "!IS_NAN( cls.vidConfig.aspectRatioDisplayPixel )");
    v22 = !v23;
    if ( v23 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, cs:?cls@@3UClStatic@@A.vidConfig.aspectRatioDisplayPixel; ClStatic cls
    vxorps  xmm8, xmm8, xmm8
    vucomiss xmm0, xmm8
  }
  if ( v22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.cpp", 142, ASSERT_TYPE_ASSERT, "(cls.vidConfig.aspectRatioDisplayPixel)", (const char *)&queryFormat, "cls.vidConfig.aspectRatioDisplayPixel") )
    __debugbreak();
  __asm { vmovss  [rsp+0C8h+viewportHeight], xmm9 }
  v26 = (viewportHeightb & 0x7F800000) == 2139095040;
  if ( (viewportHeightb & 0x7F800000) == 2139095040 )
  {
    v27 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.cpp", 144, ASSERT_TYPE_SANITY, "( !IS_NAN( viewportWidth ) )", (const char *)&queryFormat, "!IS_NAN( viewportWidth )");
    v26 = !v27;
    if ( v27 )
      __debugbreak();
  }
  __asm { vucomiss xmm9, xmm8 }
  if ( v26 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.cpp", 145, ASSERT_TYPE_ASSERT, "(viewportWidth)", (const char *)&queryFormat, "viewportWidth") )
    __debugbreak();
  __asm { vmovss  [rsp+0C8h+viewportHeight], xmm11 }
  v28 = (viewportHeightc & 0x7F800000) == 2139095040;
  if ( (viewportHeightc & 0x7F800000) == 2139095040 )
  {
    v29 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.cpp", 147, ASSERT_TYPE_SANITY, "( !IS_NAN( viewportHeight ) )", (const char *)&queryFormat, "!IS_NAN( viewportHeight )");
    v28 = !v29;
    if ( v29 )
      __debugbreak();
  }
  __asm { vucomiss xmm11, xmm8 }
  if ( v28 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.cpp", 148, ASSERT_TYPE_ASSERT, "(viewportHeight)", (const char *)&queryFormat, "viewportHeight") )
    __debugbreak();
  __asm
  {
    vmulss  xmm0, xmm11, cs:__real@3faaaaab
    vdivss  xmm1, xmm0, cs:?cls@@3UClStatic@@A.vidConfig.aspectRatioDisplayPixel; ClStatic cls
    vminss  xmm10, xmm1, xmm9
    vmovss  [rsp+0C8h+viewportHeight], xmm10
  }
  v33 = (viewportHeightd & 0x7F800000) == 2139095040;
  if ( (viewportHeightd & 0x7F800000) == 2139095040 )
  {
    v34 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.cpp", 157, ASSERT_TYPE_SANITY, "( !IS_NAN( adjustedRealWidth ) )", (const char *)&queryFormat, "!IS_NAN( adjustedRealWidth )");
    v33 = !v34;
    if ( v34 )
      __debugbreak();
  }
  __asm { vucomiss xmm10, xmm8 }
  if ( v33 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.cpp", 158, ASSERT_TYPE_ASSERT, "(adjustedRealWidth)", (const char *)&queryFormat, "adjustedRealWidth") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, cs:__real@3f800000
    vdivss  xmm6, xmm0, xmm10
    vmulss  xmm1, xmm6, xmm9
    vmovss  [rsp+0C8h+horzAspectScale], xmm1
    vmovaps xmm1, xmm13; viewportX
    vmovaps xmm3, xmm9; viewportWidth
    vmovaps xmm2, xmm12; viewportY
    vmovss  dword ptr [rsp+0C8h+fmt], xmm11
    vsubss  xmm7, xmm9, xmm10
  }
  ScrPlace_CalcSafeAreaOffsets(_RBX, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, fmt, horzAspectScale, renderTargetWidth, renderTargetHeight);
  __asm
  {
    vcomiss xmm7, xmm8
    vmulss  xmm1, xmm11, cs:__real@3b088889
    vmulss  xmm0, xmm10, cs:__real@3acccccd
    vmovss  dword ptr [rbx], xmm0
    vmulss  xmm0, xmm9, cs:__real@3acccccd
    vmovss  dword ptr [rbx+4], xmm1
    vmovss  dword ptr [rbx+0Ch], xmm1
    vmovss  xmm1, cs:__real@43f00000
    vmovss  dword ptr [rbx+8], xmm0
    vmulss  xmm0, xmm6, cs:__real@44200000
    vdivss  xmm2, xmm1, xmm11
    vmovss  dword ptr [rbx+10h], xmm0
    vmovss  dword ptr [rbx+14h], xmm2
  }
  if ( v48 )
  {
    __asm
    {
      vcvtss2sd xmm0, xmm7, xmm7
      vmovsd  qword ptr [rsp+0C8h+horzAspectScale], xmm0
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.cpp", 169, ASSERT_TYPE_ASSERT, "( ( horzAspectPixelDiff >= 0 ) )", "( horzAspectPixelDiff ) = %g", horzAspectScalea) )
      __debugbreak();
  }
  __asm { vmulss  xmm0, xmm7, cs:__real@3f000000 }
  _R11 = &v64;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
    vmovss  dword ptr [rbx+68h], xmm0
  }
}

/*
==============
ScrPlace_SetupFloatViewport
==============
*/
void ScrPlace_SetupFloatViewport(ScreenPlacement *scrPlace, float viewportX, float viewportY, float viewportWidth, float viewportHeight)
{
  float v6; 

  __asm
  {
    vmovss  xmm0, [rsp+48h+viewportHeight]
    vmovss  [rsp+48h+var_28], xmm0
  }
  ScrPlace_SetupFloatRenderTargetViewport(scrPlace, viewportX, viewportY, viewportWidth, v6, cls.vidConfig.displayWidth, cls.vidConfig.displayHeight);
}

/*
==============
ScrPlace_SetupFullscreenViewports
==============
*/

void __fastcall ScrPlace_SetupFullscreenViewports(double _XMM0_8, double _XMM1_8, double _XMM2_8, double _XMM3_8)
{
  int viewportHeight; 

  ScrPlace_SetupUnsafeViewport(&scrPlaceFullUnsafe, 0, 0, cls.vidConfig.displayWidth, cls.vidConfig.displayHeight);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, ecx
    vxorps  xmm3, xmm3, xmm3
    vcvtsi2ss xmm3, xmm3, eax; viewportWidth
    vxorps  xmm2, xmm2, xmm2; viewportY
    vxorps  xmm1, xmm1, xmm1; viewportX
    vmovss  [rsp+48h+viewportHeight], xmm0
  }
  ScrPlace_SetupFloatRenderTargetViewport(&scrPlaceFull, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, *(float *)&viewportHeight, cls.vidConfig.displayWidth, cls.vidConfig.displayHeight);
}

/*
==============
ScrPlace_SetupRenderTargetViewport
==============
*/
void ScrPlace_SetupRenderTargetViewport(ScreenPlacement *scrPlace, int viewportX, int viewportY, int viewportWidth, int viewportHeight, int renderTargetWidth, int renderTargetHeight)
{
  float v19; 

  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, [rsp+arg_20]
    vxorps  xmm3, xmm3, xmm3
    vxorps  xmm2, xmm2, xmm2
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm3, xmm3, r9d; viewportWidth
    vcvtsi2ss xmm2, xmm2, r8d; viewportY
    vcvtsi2ss xmm1, xmm1, edx; viewportX
    vmovss  [rsp+arg_20], xmm0
  }
  ScrPlace_SetupFloatRenderTargetViewport(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v19, renderTargetWidth, renderTargetHeight);
}

/*
==============
ScrPlace_SetupUnsafeViewport
==============
*/
void ScrPlace_SetupUnsafeViewport(ScreenPlacement *scrPlace, int viewportX, int viewportY, int viewportWidth, int viewportHeight)
{
  float fmt; 
  char v48; 
  void *retaddr; 

  _RAX = &retaddr;
  _RBX = DVARFLT_safeArea_horizontal;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
    vmovaps xmmword ptr [rax-68h], xmm10
  }
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "safeArea_horizontal") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm10, dword ptr [rbx+28h] }
  _RBX = DVARFLT_safeArea_vertical;
  if ( !DVARFLT_safeArea_vertical && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "safeArea_vertical") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm9, dword ptr [rbx+28h] }
  _RBX = DVARFLT_safeArea_adjusted_horizontal;
  if ( !DVARFLT_safeArea_adjusted_horizontal && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "safeArea_adjusted_horizontal") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm8, dword ptr [rbx+28h] }
  _RBX = DVARFLT_safeArea_adjusted_vertical;
  if ( !DVARFLT_safeArea_adjusted_vertical && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "safeArea_adjusted_vertical") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm6, cs:__real@3f800000
    vmovss  xmm7, dword ptr [rbx+28h]
    vmovaps xmm1, xmm6; value
  }
  Dvar_SetFloat_Internal(DVARFLT_safeArea_horizontal, *(float *)&_XMM1);
  __asm { vmovaps xmm1, xmm6; value }
  Dvar_SetFloat_Internal(DVARFLT_safeArea_vertical, *(float *)&_XMM1);
  __asm { vmovaps xmm1, xmm6; value }
  Dvar_SetFloat_Internal(DVARFLT_safeArea_adjusted_horizontal, *(float *)&_XMM1);
  __asm { vmovaps xmm1, xmm6; value }
  Dvar_SetFloat_Internal(DVARFLT_safeArea_adjusted_vertical, *(float *)&_XMM1);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, [rsp+0A8h+viewportHeight]
    vxorps  xmm3, xmm3, xmm3
    vxorps  xmm2, xmm2, xmm2
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm3, xmm3, edi; viewportWidth
    vcvtsi2ss xmm2, xmm2, esi; viewportY
    vcvtsi2ss xmm1, xmm1, ebp; viewportX
    vmovss  dword ptr [rsp+0A8h+fmt], xmm0
  }
  ScrPlace_SetupFloatRenderTargetViewport(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmt, cls.vidConfig.displayWidth, cls.vidConfig.displayHeight);
  __asm { vmovaps xmm1, xmm10; value }
  Dvar_SetFloat_Internal(DVARFLT_safeArea_horizontal, *(float *)&_XMM1);
  __asm { vmovaps xmm1, xmm9; value }
  Dvar_SetFloat_Internal(DVARFLT_safeArea_vertical, *(float *)&_XMM1);
  __asm { vmovaps xmm1, xmm8; value }
  Dvar_SetFloat_Internal(DVARFLT_safeArea_adjusted_horizontal, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm1, xmm7; value
    vmovaps xmm7, [rsp+0A8h+var_38]
  }
  _R11 = &v48;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
  }
  Dvar_SetFloat_Internal(DVARFLT_safeArea_adjusted_vertical, *(float *)&_XMM1);
}

/*
==============
ScrPlace_SetupViewport
==============
*/
void ScrPlace_SetupViewport(ScreenPlacement *scrPlace, int viewportX, int viewportY, int viewportWidth)
{
  float v16; 

  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, [rsp+48h+viewportHeight]
    vxorps  xmm3, xmm3, xmm3
    vxorps  xmm2, xmm2, xmm2
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm3, xmm3, r9d; viewportWidth
    vcvtsi2ss xmm2, xmm2, r8d; viewportY
    vcvtsi2ss xmm1, xmm1, edx; viewportX
    vmovss  [rsp+48h+var_28], xmm0
  }
  ScrPlace_SetupFloatRenderTargetViewport(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v16, cls.vidConfig.displayWidth, cls.vidConfig.displayHeight);
}

