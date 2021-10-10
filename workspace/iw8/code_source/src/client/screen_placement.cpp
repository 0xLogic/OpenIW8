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
void ClampDimension(float *o, float *size, float min, float max)
{
  float v7; 
  __int128 v9; 

  if ( max <= min && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.cpp", 530, ASSERT_TYPE_ASSERT, "(max > min)", (const char *)&queryFormat, "max > min") )
    __debugbreak();
  v7 = *o;
  if ( *o <= max )
  {
    if ( v7 < min )
    {
      v9 = *(unsigned int *)size;
      *(float *)&v9 = *size - (float)(min - v7);
      _XMM2 = v9;
      __asm { vmaxss  xmm2, xmm2, xmm1 }
      *size = *(float *)&_XMM2;
      *o = min;
      v7 = min;
    }
  }
  else
  {
    *o = max;
    *size = 0.0;
    v7 = *o;
  }
  if ( (float)(v7 + *size) > max )
    *size = max - v7;
}

/*
==============
ScrPlace_ApplyRect
==============
*/
void ScrPlace_ApplyRect(const ScreenPlacement *scrPlace, float *x, float *y, float *w, float *h, int horzAlign, int vertAlign)
{
  const dvar_t *v11; 

  if ( *x != 0.0 || *y != 0.0 || 640.0 != *w || 480.0 != *h || horzAlign != 4 || vertAlign != 4 )
  {
    if ( !y && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.cpp", 365, ASSERT_TYPE_ASSERT, "(y)", (const char *)&queryFormat, "y") )
      __debugbreak();
    if ( !w && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.cpp", 366, ASSERT_TYPE_ASSERT, "(w)", (const char *)&queryFormat, "w") )
      __debugbreak();
    if ( !h && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.cpp", 367, ASSERT_TYPE_ASSERT, "(h)", (const char *)&queryFormat, "h") )
      __debugbreak();
    v11 = DVARBOOL_cg_hudSplitscreenOffsetsUseScale;
    if ( !DVARBOOL_cg_hudSplitscreenOffsetsUseScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_hudSplitscreenOffsetsUseScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    if ( v11->current.enabled )
    {
      *x = cg_hudSplitscreenScale * *x;
      *y = cg_hudSplitscreenScale * *y;
    }
    *w = cg_hudSplitscreenScale * *w;
    *h = cg_hudSplitscreenScale * *h;
  }
  ScrPlace_ApplyRectWithoutSplitScreenScaling(scrPlace, x, y, w, h, horzAlign, vertAlign);
}

/*
==============
ScrPlace_ApplyRectClamped
==============
*/
void ScrPlace_ApplyRectClamped(const ScreenPlacement *scrPlace, float *x, float *y, float *w, float *h, int horzAlign, int vertAlign)
{
  const dvar_t *v11; 

  if ( *x != 0.0 || *y != 0.0 || 640.0 != *w || 480.0 != *h || horzAlign != 4 || vertAlign != 4 )
  {
    if ( !y && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.cpp", 365, ASSERT_TYPE_ASSERT, "(y)", (const char *)&queryFormat, "y") )
      __debugbreak();
    if ( !w && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.cpp", 366, ASSERT_TYPE_ASSERT, "(w)", (const char *)&queryFormat, "w") )
      __debugbreak();
    if ( !h && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.cpp", 367, ASSERT_TYPE_ASSERT, "(h)", (const char *)&queryFormat, "h") )
      __debugbreak();
    v11 = DVARBOOL_cg_hudSplitscreenOffsetsUseScale;
    if ( !DVARBOOL_cg_hudSplitscreenOffsetsUseScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_hudSplitscreenOffsetsUseScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    if ( v11->current.enabled )
    {
      *x = cg_hudSplitscreenScale * *x;
      *y = cg_hudSplitscreenScale * *y;
    }
    *w = cg_hudSplitscreenScale * *w;
    *h = cg_hudSplitscreenScale * *h;
  }
  ScrPlace_ApplyRectWithoutSplitScreenScaling(scrPlace, x, y, w, h, horzAlign, vertAlign);
  ClampDimension(x, w, scrPlace->realViewableMin.v[0], scrPlace->realViewableMax.v[0]);
  ClampDimension(y, h, scrPlace->realViewableMin.v[1], scrPlace->realViewableMax.v[1]);
}

/*
==============
ScrPlace_ApplyRectWithoutSplitScreenScaling
==============
*/
void ScrPlace_ApplyRectWithoutSplitScreenScaling(const ScreenPlacement *scrPlace, float *x, float *y, float *w, float *h, int horzAlign, int vertAlign)
{
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 

  if ( !x && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.cpp", 383, ASSERT_TYPE_ASSERT, "(x)", (const char *)&queryFormat, "x") )
    __debugbreak();
  if ( !y && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.cpp", 384, ASSERT_TYPE_ASSERT, "(y)", (const char *)&queryFormat, "y") )
    __debugbreak();
  if ( !w && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.cpp", 385, ASSERT_TYPE_ASSERT, "(w)", (const char *)&queryFormat, "w") )
    __debugbreak();
  if ( !h && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.cpp", 386, ASSERT_TYPE_ASSERT, "(h)", (const char *)&queryFormat, "h") )
    __debugbreak();
  switch ( horzAlign )
  {
    case 0:
      goto $LN17_83;
    case 1:
      v11 = (float)(scrPlace->scaleVirtualToReal.v[0] * *x) + scrPlace->realViewableMin.v[0];
      goto LABEL_30;
    case 2:
      *x = (float)(scrPlace->scaleVirtualToReal.v[0] * *x) + (float)(0.5 * scrPlace->realViewportSize.v[0]);
      *w = scrPlace->scaleVirtualToReal.v[0] * *w;
      break;
    case 3:
      v11 = (float)(scrPlace->scaleVirtualToReal.v[0] * *x) + scrPlace->realViewableMax.v[0];
      goto LABEL_30;
    case 4:
      *x = *x * scrPlace->scaleVirtualToFull.v[0];
      *w = *w * scrPlace->scaleVirtualToFull.v[0];
      break;
    case 5:
      break;
    case 6:
      *x = *x * scrPlace->scaleRealToVirtual.v[0];
      *w = *w * scrPlace->scaleRealToVirtual.v[0];
      break;
    case 7:
      v12 = scrPlace->realViewableMax.v[0] + scrPlace->realViewableMin.v[0];
      goto LABEL_17;
    case 8:
      v11 = (float)(scrPlace->scaleVirtualToReal.v[0] * *x) + scrPlace->realAdjustableMin.v[0];
      goto LABEL_30;
    case 9:
      v12 = scrPlace->realAdjustableMax.v[0] + scrPlace->realAdjustableMin.v[0];
LABEL_17:
      v13 = (float)(v12 * 0.5) + (float)(scrPlace->scaleVirtualToReal.v[0] * *x);
      goto LABEL_18;
    case 10:
      v11 = (float)(scrPlace->scaleVirtualToReal.v[0] * *x) + scrPlace->realAdjustableMax.v[0];
      goto LABEL_30;
    case 11:
      *x = (float)(0.5 * *w) + *x;
      v14 = scrPlace->scaleVirtualToReal.v[0] * *w;
      *w = v14;
      *x = *x - (float)(v14 * 0.5);
      break;
    case 12:
      v13 = scrPlace->scaleVirtualToReal.v[0] * *x;
LABEL_18:
      *x = v13;
      *w = scrPlace->scaleVirtualToReal.v[0] * *w;
      break;
    default:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.cpp", 391, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "invalid horizontal alignment case") )
        __debugbreak();
$LN17_83:
      v11 = (float)(scrPlace->scaleVirtualToReal.v[0] * *x) + scrPlace->subScreenLeft;
LABEL_30:
      *x = v11;
      *w = scrPlace->scaleVirtualToReal.v[0] * *w;
      break;
  }
  switch ( vertAlign )
  {
    case 0:
    case 13:
      goto $LN22_92;
    case 1:
      v15 = (float)(*y * scrPlace->scaleVirtualToReal.v[1]) + scrPlace->realViewableMin.v[1];
      goto LABEL_33;
    case 2:
      *y = (float)(*y * scrPlace->scaleVirtualToReal.v[1]) + (float)(0.5 * scrPlace->realViewportSize.v[1]);
      *h = *h * scrPlace->scaleVirtualToReal.v[1];
      return;
    case 3:
      v15 = (float)(*y * scrPlace->scaleVirtualToReal.v[1]) + scrPlace->realViewableMax.v[1];
      goto LABEL_33;
    case 4:
      *y = *y * scrPlace->scaleVirtualToFull.v[1];
      v18 = *h * scrPlace->scaleVirtualToFull.v[1];
      goto LABEL_48;
    case 5:
      return;
    case 6:
      *y = *y * scrPlace->scaleRealToVirtual.v[1];
      v18 = *h * scrPlace->scaleRealToVirtual.v[1];
      goto LABEL_48;
    case 7:
      v16 = scrPlace->realViewableMax.v[1] + scrPlace->realViewableMin.v[1];
      goto LABEL_36;
    case 8:
      v15 = (float)(*y * scrPlace->scaleVirtualToReal.v[1]) + scrPlace->realAdjustableMin.v[1];
      goto LABEL_33;
    case 9:
      v16 = scrPlace->realAdjustableMax.v[1] + scrPlace->realAdjustableMin.v[1];
LABEL_36:
      v17 = (float)(v16 * 0.5) + (float)(*y * scrPlace->scaleVirtualToReal.v[1]);
      goto LABEL_47;
    case 10:
      v15 = (float)(*y * scrPlace->scaleVirtualToReal.v[1]) + scrPlace->realAdjustableMax.v[1];
LABEL_33:
      *y = v15;
      *h = *h * scrPlace->scaleVirtualToReal.v[1];
      return;
    case 11:
      *y = (float)(0.5 * *h) + *y;
      v19 = scrPlace->scaleVirtualToReal.v[1] * *h;
      *h = v19;
      *y = *y - (float)(v19 * 0.5);
      return;
    default:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.cpp", 448, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "invalid vertical alignment case") )
        __debugbreak();
$LN22_92:
      v17 = *y * scrPlace->scaleVirtualToReal.v[1];
LABEL_47:
      *y = v17;
      v18 = *h * scrPlace->scaleVirtualToReal.v[1];
LABEL_48:
      *h = v18;
      return;
  }
}

/*
==============
ScrPlace_ApplyX
==============
*/
float ScrPlace_ApplyX(const ScreenPlacement *scrPlace, float x, int horzAlign)
{
  const dvar_t *v3; 
  float v6; 
  float v7; 
  __int64 v9; 

  v3 = DVARBOOL_cg_hudSplitscreenOffsetsUseScale;
  v6 = x;
  if ( !DVARBOOL_cg_hudSplitscreenOffsetsUseScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_hudSplitscreenOffsetsUseScale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( v3->current.enabled )
    v6 = x * cg_hudSplitscreenScale;
  switch ( horzAlign )
  {
    case 1:
      v6 = (float)(v6 * scrPlace->scaleVirtualToReal.v[0]) + scrPlace->realViewableMin.v[0];
      break;
    case 2:
      v6 = (float)(v6 * scrPlace->scaleVirtualToReal.v[0]) + (float)(scrPlace->realViewportSize.v[0] * 0.5);
      break;
    case 3:
      v6 = (float)(v6 * scrPlace->scaleVirtualToReal.v[0]) + scrPlace->realViewableMax.v[0];
      break;
    case 4:
      v6 = v6 * scrPlace->scaleVirtualToFull.v[0];
      break;
    case 5:
      return v6;
    case 6:
      v6 = v6 * scrPlace->scaleRealToVirtual.v[0];
      break;
    case 7:
      v7 = scrPlace->realViewableMax.v[0] + scrPlace->realViewableMin.v[0];
      goto LABEL_10;
    case 8:
      v6 = (float)(v6 * scrPlace->scaleVirtualToReal.v[0]) + scrPlace->realAdjustableMin.v[0];
      break;
    case 9:
      v7 = scrPlace->realAdjustableMax.v[0] + scrPlace->realAdjustableMin.v[0];
LABEL_10:
      v6 = (float)(v7 * 0.5) + (float)(v6 * scrPlace->scaleVirtualToReal.v[0]);
      break;
    case 10:
      v6 = (float)(v6 * scrPlace->scaleVirtualToReal.v[0]) + scrPlace->realAdjustableMax.v[0];
      break;
    case 12:
      v6 = v6 * scrPlace->scaleVirtualToReal.v[0];
      break;
    default:
      if ( horzAlign )
      {
        LODWORD(v9) = horzAlign;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.cpp", 233, ASSERT_TYPE_ASSERT, "( ( horzAlign == 0 ) )", "( horzAlign ) = %i", v9) )
          __debugbreak();
      }
      v6 = (float)(v6 * scrPlace->scaleVirtualToReal.v[0]) + scrPlace->subScreenLeft;
      break;
  }
  return v6;
}

/*
==============
ScrPlace_ApplyXWithoutSplitScreenScaling
==============
*/
float ScrPlace_ApplyXWithoutSplitScreenScaling(const ScreenPlacement *scrPlace, float x, int horzAlign)
{
  float result; 
  float v6; 

  switch ( horzAlign )
  {
    case 1:
      result = (float)(x * scrPlace->scaleVirtualToReal.v[0]) + scrPlace->realViewableMin.v[0];
      break;
    case 2:
      result = (float)(x * scrPlace->scaleVirtualToReal.v[0]) + (float)(scrPlace->realViewportSize.v[0] * 0.5);
      break;
    case 3:
      result = (float)(x * scrPlace->scaleVirtualToReal.v[0]) + scrPlace->realViewableMax.v[0];
      break;
    case 4:
      result = x * scrPlace->scaleVirtualToFull.v[0];
      break;
    case 5:
      result = x;
      break;
    case 6:
      result = x * scrPlace->scaleRealToVirtual.v[0];
      break;
    case 7:
      v6 = scrPlace->realViewableMax.v[0] + scrPlace->realViewableMin.v[0];
      goto LABEL_5;
    case 8:
      result = (float)(x * scrPlace->scaleVirtualToReal.v[0]) + scrPlace->realAdjustableMin.v[0];
      break;
    case 9:
      v6 = scrPlace->realAdjustableMax.v[0] + scrPlace->realAdjustableMin.v[0];
LABEL_5:
      result = (float)(v6 * 0.5) + (float)(x * scrPlace->scaleVirtualToReal.v[0]);
      break;
    case 10:
      result = (float)(x * scrPlace->scaleVirtualToReal.v[0]) + scrPlace->realAdjustableMax.v[0];
      break;
    case 12:
      result = x * scrPlace->scaleVirtualToReal.v[0];
      break;
    default:
      if ( horzAlign )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.cpp", 233, ASSERT_TYPE_ASSERT, "( ( horzAlign == 0 ) )", "( horzAlign ) = %i", horzAlign) )
          __debugbreak();
      }
      result = (float)(x * scrPlace->scaleVirtualToReal.v[0]) + scrPlace->subScreenLeft;
      break;
  }
  return result;
}

/*
==============
ScrPlace_ApplyY
==============
*/
float ScrPlace_ApplyY(const ScreenPlacement *scrPlace, float y, int vertAlign)
{
  const dvar_t *v3; 
  float v6; 
  float v7; 
  __int64 v9; 

  v3 = DVARBOOL_cg_hudSplitscreenOffsetsUseScale;
  v6 = y;
  if ( !DVARBOOL_cg_hudSplitscreenOffsetsUseScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_hudSplitscreenOffsetsUseScale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( v3->current.enabled )
    v6 = y * cg_hudSplitscreenScale;
  switch ( vertAlign )
  {
    case 1:
      return (float)(v6 * scrPlace->scaleVirtualToReal.v[1]) + scrPlace->realViewableMin.v[1];
    case 2:
      return (float)(v6 * scrPlace->scaleVirtualToReal.v[1]) + (float)(scrPlace->realViewportSize.v[1] * 0.5);
    case 3:
      return (float)(v6 * scrPlace->scaleVirtualToReal.v[1]) + scrPlace->realViewableMax.v[1];
    case 4:
      return v6 * scrPlace->scaleVirtualToFull.v[1];
    case 5:
      return v6;
    case 6:
      return v6 * scrPlace->scaleRealToVirtual.v[1];
    case 7:
      v7 = scrPlace->realViewableMax.v[1] + scrPlace->realViewableMin.v[1];
      return (float)(v7 * 0.5) + (float)(v6 * scrPlace->scaleVirtualToReal.v[1]);
    case 8:
      return (float)(v6 * scrPlace->scaleVirtualToReal.v[1]) + scrPlace->realAdjustableMin.v[1];
    case 9:
      v7 = scrPlace->realAdjustableMax.v[1] + scrPlace->realAdjustableMin.v[1];
      return (float)(v7 * 0.5) + (float)(v6 * scrPlace->scaleVirtualToReal.v[1]);
    case 10:
      return (float)(v6 * scrPlace->scaleVirtualToReal.v[1]) + scrPlace->realAdjustableMax.v[1];
    case 13:
      return v6 * scrPlace->scaleVirtualToReal.v[1];
    default:
      if ( vertAlign )
      {
        LODWORD(v9) = vertAlign;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.cpp", 299, ASSERT_TYPE_ASSERT, "( ( vertAlign == 0 ) )", "( vertAlign ) = %i", v9) )
          __debugbreak();
      }
      return v6 * scrPlace->scaleVirtualToReal.v[1];
  }
}

/*
==============
ScrPlace_ApplyYWithoutSplitScreenScaling
==============
*/
float ScrPlace_ApplyYWithoutSplitScreenScaling(const ScreenPlacement *scrPlace, float y, int vertAlign)
{
  float v6; 

  switch ( vertAlign )
  {
    case 1:
      return (float)(y * scrPlace->scaleVirtualToReal.v[1]) + scrPlace->realViewableMin.v[1];
    case 2:
      return (float)(y * scrPlace->scaleVirtualToReal.v[1]) + (float)(scrPlace->realViewportSize.v[1] * 0.5);
    case 3:
      return (float)(y * scrPlace->scaleVirtualToReal.v[1]) + scrPlace->realViewableMax.v[1];
    case 4:
      return y * scrPlace->scaleVirtualToFull.v[1];
    case 5:
      return y;
    case 6:
      return y * scrPlace->scaleRealToVirtual.v[1];
    case 7:
      v6 = scrPlace->realViewableMax.v[1] + scrPlace->realViewableMin.v[1];
      return (float)(v6 * 0.5) + (float)(y * scrPlace->scaleVirtualToReal.v[1]);
    case 8:
      return (float)(y * scrPlace->scaleVirtualToReal.v[1]) + scrPlace->realAdjustableMin.v[1];
    case 9:
      v6 = scrPlace->realAdjustableMax.v[1] + scrPlace->realAdjustableMin.v[1];
      return (float)(v6 * 0.5) + (float)(y * scrPlace->scaleVirtualToReal.v[1]);
    case 10:
      return (float)(y * scrPlace->scaleVirtualToReal.v[1]) + scrPlace->realAdjustableMax.v[1];
    case 13:
      return y * scrPlace->scaleVirtualToReal.v[1];
    default:
      if ( vertAlign )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.cpp", 299, ASSERT_TYPE_ASSERT, "( ( vertAlign == 0 ) )", "( vertAlign ) = %i", vertAlign) )
          __debugbreak();
      }
      return y * scrPlace->scaleVirtualToReal.v[1];
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
void ScrPlace_CalcSafeAreaOffsets(ScreenPlacement *scrPlace, float viewportX, float viewportY, float viewportWidth, float viewportHeight, float horzAspectScale, int renderTargetWidth, int renderTargetHeight)
{
  const dvar_t *v8; 
  float safeAreaRatioHorz; 
  const dvar_t *v11; 
  const dvar_t *v12; 
  float value; 
  const dvar_t *v14; 

  v8 = DVARFLT_safeArea_horizontal;
  if ( !DVARFLT_safeArea_horizontal && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "safeArea_horizontal") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  safeAreaRatioHorz = v8->current.value;
  v11 = DVARFLT_safeArea_vertical;
  if ( !DVARFLT_safeArea_vertical && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "safeArea_vertical") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  ScrPlace_CalcSpecificSafeAreaOffsets(viewportX, viewportY, viewportWidth, viewportHeight, horzAspectScale, safeAreaRatioHorz, v11->current.value, &scrPlace->realViewableMin, &scrPlace->realViewableMax, &scrPlace->virtualViewableMin, &scrPlace->virtualViewableMax, renderTargetWidth, renderTargetHeight);
  v12 = DVARFLT_safeArea_adjusted_horizontal;
  if ( !DVARFLT_safeArea_adjusted_horizontal && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "safeArea_adjusted_horizontal") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  value = v12->current.value;
  v14 = DVARFLT_safeArea_adjusted_vertical;
  if ( !DVARFLT_safeArea_adjusted_vertical && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "safeArea_adjusted_vertical") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v14);
  ScrPlace_CalcSpecificSafeAreaOffsets(viewportX, viewportY, viewportWidth, viewportHeight, horzAspectScale, value, v14->current.value, &scrPlace->realAdjustableMin, &scrPlace->realAdjustableMax, &scrPlace->virtualAdjustableMin, &scrPlace->virtualAdjustableMax, renderTargetWidth, renderTargetHeight);
}

/*
==============
ScrPlace_CalcSpecificSafeAreaOffsets
==============
*/
void ScrPlace_CalcSpecificSafeAreaOffsets(float viewportX, float viewportY, float viewportWidth, float viewportHeight, float horzAspectScale, float safeAreaRatioHorz, float safeAreaRatioVert, vec2_t *outRealViewableMin, vec2_t *outRealViewableMax, vec2_t *outVirtualViewableMin, vec2_t *outVirtualViewableMax, int renderTargetWidth, int renderTargetHeight)
{
  float v18; 
  __int128 v19; 
  __int128 v20; 
  __int128 v21; 
  __int128 v22; 
  __int128 v27; 
  __int128 v33; 
  __int64 v35; 
  __int64 v36; 

  __asm { vxorpd  xmm13, xmm13, xmm13 }
  if ( safeAreaRatioHorz < 0.0 || (v18 = FLOAT_1_0, safeAreaRatioHorz > 1.0) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.cpp", 67, ASSERT_TYPE_ASSERT, "( 0 ) <= ( safeAreaRatioHorz ) && ( safeAreaRatioHorz ) <= ( 1 )", "safeAreaRatioHorz not in [0, 1]\n\t%g not in [%g, %g]", safeAreaRatioHorz, *(double *)&_XMM13, DOUBLE_1_0) )
      __debugbreak();
    v18 = FLOAT_1_0;
  }
  if ( (safeAreaRatioVert < 0.0 || safeAreaRatioVert > v18) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.cpp", 68, ASSERT_TYPE_ASSERT, "( 0 ) <= ( safeAreaRatioVert ) && ( safeAreaRatioVert ) <= ( 1 )", "safeAreaRatioVert not in [0, 1]\n\t%g not in [%g, %g]", safeAreaRatioVert, *(double *)&_XMM13, DOUBLE_1_0) )
    __debugbreak();
  if ( renderTargetWidth <= 0 )
  {
    LODWORD(v35) = renderTargetWidth;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.cpp", 69, ASSERT_TYPE_ASSERT, "( ( renderTargetWidth > 0 ) )", "( renderTargetWidth ) = %i", v35) )
      __debugbreak();
  }
  if ( renderTargetHeight <= 0 )
  {
    LODWORD(v35) = renderTargetHeight;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.cpp", 70, ASSERT_TYPE_ASSERT, "( ( renderTargetHeight > 0 ) )", "( renderTargetHeight ) = %i", v35) )
      __debugbreak();
  }
  if ( viewportX < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.cpp", 71, ASSERT_TYPE_ASSERT, "( ( viewportX >= 0 ) )", "( viewportX ) = %g", viewportX) )
    __debugbreak();
  if ( viewportY < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.cpp", 72, ASSERT_TYPE_ASSERT, "( ( viewportY >= 0 ) )", "( viewportY ) = %g", viewportY) )
    __debugbreak();
  if ( viewportWidth <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.cpp", 73, ASSERT_TYPE_ASSERT, "( ( viewportWidth > 0 ) )", "( viewportWidth ) = %g", viewportWidth) )
    __debugbreak();
  if ( viewportHeight <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.cpp", 74, ASSERT_TYPE_ASSERT, "( ( viewportHeight > 0 ) )", "( viewportHeight ) = %g", viewportHeight) )
    __debugbreak();
  v20 = 0i64;
  *(float *)&v20 = (float)renderTargetWidth;
  v19 = v20;
  if ( (float)(viewportWidth + viewportX) > *(float *)&v20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.cpp", 75, ASSERT_TYPE_ASSERT, "(viewportX + viewportWidth <= renderTargetWidth)", "%s\n\t%g + %g > %i", "viewportX + viewportWidth <= renderTargetWidth", viewportX, viewportWidth, renderTargetWidth) )
    __debugbreak();
  v22 = 0i64;
  *(float *)&v22 = (float)renderTargetHeight;
  v21 = v22;
  if ( (float)(viewportHeight + viewportY) > *(float *)&v22 )
  {
    LODWORD(v36) = renderTargetHeight;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.cpp", 76, ASSERT_TYPE_ASSERT, "(viewportY + viewportHeight <= renderTargetHeight)", "%s\n\t%g + %g > %i", "viewportY + viewportHeight <= renderTargetHeight", viewportY, viewportHeight, v36) )
      __debugbreak();
  }
  _XMM5 = 0i64;
  __asm
  {
    vroundss xmm5, xmm5, xmm2, 1
    vmaxss  xmm0, xmm5, xmm7
  }
  outRealViewableMin->v[0] = *(float *)&_XMM0 - viewportX;
  v27 = v19;
  *(float *)&v27 = *(float *)&v19 - *(float *)&_XMM5;
  _XMM2 = v27;
  _XMM4 = 0i64;
  __asm
  {
    vroundss xmm4, xmm4, xmm3, 1
    vmaxss  xmm0, xmm4, xmm8
  }
  outRealViewableMin->v[1] = *(float *)&_XMM0 - viewportY;
  __asm { vminss  xmm0, xmm2, xmm15 }
  outRealViewableMax->v[0] = *(float *)&_XMM0 - viewportX;
  v33 = v21;
  *(float *)&v33 = *(float *)&v21 - *(float *)&_XMM4;
  _XMM0 = v33;
  __asm { vminss  xmm1, xmm0, xmm12 }
  outRealViewableMax->v[1] = *(float *)&_XMM1 - viewportY;
  outVirtualViewableMin->v[0] = (float)(horzAspectScale * outRealViewableMin->v[0]) * (float)(640.0 / viewportWidth);
  outVirtualViewableMin->v[1] = (float)(480.0 / viewportHeight) * outRealViewableMin->v[1];
  outVirtualViewableMax->v[0] = (float)(horzAspectScale * outRealViewableMax->v[0]) * (float)(640.0 / viewportWidth);
  outVirtualViewableMax->v[1] = (float)(480.0 / viewportHeight) * outRealViewableMax->v[1];
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
  cg_hudSplitscreenScale = FLOAT_1_0;
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
  const dvar_t *v0; 

  if ( CL_IsRenderingSplitScreen() )
  {
    v0 = DVARFLT_cg_hudLegacySplitscreenScale;
    if ( !DVARFLT_cg_hudLegacySplitscreenScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_hudLegacySplitscreenScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v0);
    cg_hudSplitscreenScale = v0->current.value;
  }
  else
  {
    cg_hudSplitscreenScale = FLOAT_1_0;
  }
}

/*
==============
ScrPlace_SetNormalSplitscreenScaling
==============
*/
void ScrPlace_SetNormalSplitscreenScaling(void)
{
  cg_hudSplitscreenScale = FLOAT_1_0;
}

/*
==============
ScrPlace_SetupClientViewports
==============
*/
void ScrPlace_SetupClientViewports(void)
{
  ScreenPlacement *v0; 
  __int64 v1; 

  v0 = scrPlaceViewDisplay;
  v1 = 2i64;
  do
  {
    ScrPlace_SetupFloatRenderTargetViewport(v0++, 0.0, 0.0, (float)(int)cls.vidConfig.displayWidth, (float)(int)cls.vidConfig.displayHeight, cls.vidConfig.displayWidth, cls.vidConfig.displayHeight);
    --v1;
  }
  while ( v1 );
}

/*
==============
ScrPlace_SetupFloatRenderTargetViewport
==============
*/
void ScrPlace_SetupFloatRenderTargetViewport(ScreenPlacement *scrPlace, float viewportX, float viewportY, float viewportWidth, float viewportHeight, int renderTargetWidth, int renderTargetHeight)
{
  __int128 v9; 
  float v12; 

  memset_0(scrPlace, -1330597712, sizeof(ScreenPlacement));
  scrPlace->realViewportSize.v[1] = viewportHeight;
  scrPlace->realViewportSize.v[0] = viewportWidth;
  scrPlace->realViewportPosition.v[0] = viewportX;
  scrPlace->realViewportPosition.v[1] = viewportY;
  if ( (LODWORD(cls.vidConfig.aspectRatioDisplayPixel) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.cpp", 141, ASSERT_TYPE_SANITY, "( !IS_NAN( cls.vidConfig.aspectRatioDisplayPixel ) )", (const char *)&queryFormat, "!IS_NAN( cls.vidConfig.aspectRatioDisplayPixel )") )
    __debugbreak();
  if ( cls.vidConfig.aspectRatioDisplayPixel == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.cpp", 142, ASSERT_TYPE_ASSERT, "(cls.vidConfig.aspectRatioDisplayPixel)", (const char *)&queryFormat, "cls.vidConfig.aspectRatioDisplayPixel") )
    __debugbreak();
  if ( (LODWORD(viewportWidth) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.cpp", 144, ASSERT_TYPE_SANITY, "( !IS_NAN( viewportWidth ) )", (const char *)&queryFormat, "!IS_NAN( viewportWidth )") )
    __debugbreak();
  if ( viewportWidth == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.cpp", 145, ASSERT_TYPE_ASSERT, "(viewportWidth)", (const char *)&queryFormat, "viewportWidth") )
    __debugbreak();
  if ( (LODWORD(viewportHeight) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.cpp", 147, ASSERT_TYPE_SANITY, "( !IS_NAN( viewportHeight ) )", (const char *)&queryFormat, "!IS_NAN( viewportHeight )") )
    __debugbreak();
  if ( viewportHeight == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.cpp", 148, ASSERT_TYPE_ASSERT, "(viewportHeight)", (const char *)&queryFormat, "viewportHeight") )
    __debugbreak();
  v9 = LODWORD(viewportHeight);
  *(float *)&v9 = (float)(viewportHeight * 1.3333334) / cls.vidConfig.aspectRatioDisplayPixel;
  _XMM1 = v9;
  __asm { vminss  xmm10, xmm1, xmm9 }
  if ( (_XMM10 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.cpp", 157, ASSERT_TYPE_SANITY, "( !IS_NAN( adjustedRealWidth ) )", (const char *)&queryFormat, "!IS_NAN( adjustedRealWidth )") )
    __debugbreak();
  if ( *(float *)&_XMM10 == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.cpp", 158, ASSERT_TYPE_ASSERT, "(adjustedRealWidth)", (const char *)&queryFormat, "adjustedRealWidth") )
    __debugbreak();
  v12 = viewportWidth - *(float *)&_XMM10;
  ScrPlace_CalcSafeAreaOffsets(scrPlace, viewportX, viewportY, viewportWidth, viewportHeight, (float)(1.0 / *(float *)&_XMM10) * viewportWidth, renderTargetWidth, renderTargetHeight);
  scrPlace->scaleVirtualToReal.v[0] = *(float *)&_XMM10 * 0.0015625;
  scrPlace->scaleVirtualToReal.v[1] = viewportHeight * 0.0020833334;
  scrPlace->scaleVirtualToFull.v[1] = viewportHeight * 0.0020833334;
  scrPlace->scaleVirtualToFull.v[0] = viewportWidth * 0.0015625;
  scrPlace->scaleRealToVirtual.v[0] = (float)(1.0 / *(float *)&_XMM10) * 640.0;
  scrPlace->scaleRealToVirtual.v[1] = 480.0 / viewportHeight;
  if ( (float)(viewportWidth - *(float *)&_XMM10) < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.cpp", 169, ASSERT_TYPE_ASSERT, "( ( horzAspectPixelDiff >= 0 ) )", "( horzAspectPixelDiff ) = %g", v12) )
    __debugbreak();
  scrPlace->subScreenLeft = v12 * 0.5;
}

/*
==============
ScrPlace_SetupFloatViewport
==============
*/
void ScrPlace_SetupFloatViewport(ScreenPlacement *scrPlace, float viewportX, float viewportY, float viewportWidth, float viewportHeight)
{
  ScrPlace_SetupFloatRenderTargetViewport(scrPlace, viewportX, viewportY, viewportWidth, viewportHeight, cls.vidConfig.displayWidth, cls.vidConfig.displayHeight);
}

/*
==============
ScrPlace_SetupFullscreenViewports
==============
*/
void ScrPlace_SetupFullscreenViewports(void)
{
  ScrPlace_SetupUnsafeViewport(&scrPlaceFullUnsafe, 0, 0, cls.vidConfig.displayWidth, cls.vidConfig.displayHeight);
  ScrPlace_SetupFloatRenderTargetViewport(&scrPlaceFull, 0.0, 0.0, (float)(int)cls.vidConfig.displayWidth, (float)(int)cls.vidConfig.displayHeight, cls.vidConfig.displayWidth, cls.vidConfig.displayHeight);
}

/*
==============
ScrPlace_SetupRenderTargetViewport
==============
*/
void ScrPlace_SetupRenderTargetViewport(ScreenPlacement *scrPlace, int viewportX, int viewportY, int viewportWidth, int viewportHeight, int renderTargetWidth, int renderTargetHeight)
{
  ScrPlace_SetupFloatRenderTargetViewport(scrPlace, (float)viewportX, (float)viewportY, (float)viewportWidth, (float)viewportHeight, renderTargetWidth, renderTargetHeight);
}

/*
==============
ScrPlace_SetupUnsafeViewport
==============
*/
void ScrPlace_SetupUnsafeViewport(ScreenPlacement *scrPlace, int viewportX, int viewportY, int viewportWidth, int viewportHeight)
{
  const dvar_t *v5; 
  float value; 
  const dvar_t *v11; 
  float v12; 
  const dvar_t *v13; 
  float v14; 
  const dvar_t *v15; 
  float v16; 

  v5 = DVARFLT_safeArea_horizontal;
  if ( !DVARFLT_safeArea_horizontal && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "safeArea_horizontal") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  value = v5->current.value;
  v11 = DVARFLT_safeArea_vertical;
  if ( !DVARFLT_safeArea_vertical && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "safeArea_vertical") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  v12 = v11->current.value;
  v13 = DVARFLT_safeArea_adjusted_horizontal;
  if ( !DVARFLT_safeArea_adjusted_horizontal && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "safeArea_adjusted_horizontal") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v13);
  v14 = v13->current.value;
  v15 = DVARFLT_safeArea_adjusted_vertical;
  if ( !DVARFLT_safeArea_adjusted_vertical && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "safeArea_adjusted_vertical") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v15);
  v16 = v15->current.value;
  Dvar_SetFloat_Internal(DVARFLT_safeArea_horizontal, 1.0);
  Dvar_SetFloat_Internal(DVARFLT_safeArea_vertical, 1.0);
  Dvar_SetFloat_Internal(DVARFLT_safeArea_adjusted_horizontal, 1.0);
  Dvar_SetFloat_Internal(DVARFLT_safeArea_adjusted_vertical, 1.0);
  ScrPlace_SetupFloatRenderTargetViewport(scrPlace, (float)viewportX, (float)viewportY, (float)viewportWidth, (float)viewportHeight, cls.vidConfig.displayWidth, cls.vidConfig.displayHeight);
  Dvar_SetFloat_Internal(DVARFLT_safeArea_horizontal, value);
  Dvar_SetFloat_Internal(DVARFLT_safeArea_vertical, v12);
  Dvar_SetFloat_Internal(DVARFLT_safeArea_adjusted_horizontal, v14);
  Dvar_SetFloat_Internal(DVARFLT_safeArea_adjusted_vertical, v16);
}

/*
==============
ScrPlace_SetupViewport
==============
*/
void ScrPlace_SetupViewport(ScreenPlacement *scrPlace, int viewportX, int viewportY, int viewportWidth, int viewportHeight)
{
  ScrPlace_SetupFloatRenderTargetViewport(scrPlace, (float)viewportX, (float)viewportY, (float)viewportWidth, (float)viewportHeight, cls.vidConfig.displayWidth, cls.vidConfig.displayHeight);
}

