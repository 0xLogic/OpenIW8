/*
==============
R_RT_BuildDynamicResolutionTable
==============
*/

void __fastcall R_RT_BuildDynamicResolutionTable(unsigned int width, unsigned int height, vec2_t *out_pDynamicResolutionTable)
{
  ?R_RT_BuildDynamicResolutionTable@@YAXIIPEATvec2_t@@@Z(width, height, out_pDynamicResolutionTable);
}

/*
==============
R_RT_FindMatchingDynamicResolutionTable
==============
*/

const vec2_t *__fastcall R_RT_FindMatchingDynamicResolutionTable(unsigned int width, unsigned int height)
{
  return ?R_RT_FindMatchingDynamicResolutionTable@@YAPEBTvec2_t@@II@Z(width, height);
}

/*
==============
R_RT_ChangeOutputVideoModeIfRequired
==============
*/

void R_RT_ChangeOutputVideoModeIfRequired(void)
{
  ?R_RT_ChangeOutputVideoModeIfRequired@@YAXXZ();
}

/*
==============
R_RT_DestroyAndClearGlobal
==============
*/

void __fastcall R_RT_DestroyAndClearGlobal(GfxRenderTargetId rtId)
{
  ?R_RT_DestroyAndClearGlobal@@YAXW4GfxRenderTargetId@@@Z(rtId);
}

/*
==============
R_RT_MakeDivisibleBy8
==============
*/

unsigned int __fastcall R_RT_MakeDivisibleBy8(float x)
{
  return ?R_RT_MakeDivisibleBy8@@YAIM@Z(x);
}

/*
==============
R_RT_AdjustForDynamicResolution
==============
*/

void __fastcall R_RT_AdjustForDynamicResolution(const vec2_t *table, unsigned int width, unsigned int height, GfxResolutionStep step, unsigned int *outWidth, unsigned int *outHeight)
{
  ?R_RT_AdjustForDynamicResolution@@YAXPEBTvec2_t@@IIW4GfxResolutionStep@@PEAI2@Z(table, width, height, step, outWidth, outHeight);
}

/*
==============
R_RT_Globals_CreateDisplay
==============
*/

void __fastcall R_RT_Globals_CreateDisplay(const R_RT_Globals_DisplayConfig *displayConfig)
{
  ?R_RT_Globals_CreateDisplay@@YAXPEBUR_RT_Globals_DisplayConfig@@@Z(displayConfig);
}

/*
==============
R_RT_Globals_DestroyDisplay
==============
*/

void R_RT_Globals_DestroyDisplay(void)
{
  ?R_RT_Globals_DestroyDisplay@@YAXXZ();
}

/*
==============
R_RT_AdjustForDynamicResolution
==============
*/
void R_RT_AdjustForDynamicResolution(const vec2_t *table, unsigned int width, unsigned int height, GfxResolutionStep step, unsigned int *outWidth, unsigned int *outHeight)
{
  __int64 v6; 
  __int64 v8; 
  float v10; 
  unsigned int v11; 
  float v12; 

  v6 = height;
  v8 = width;
  if ( (unsigned __int8)step >= 0x10u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_globals_impl.h", 335, ASSERT_TYPE_ASSERT, "(unsigned)( step ) < (unsigned)( 16 )", "step doesn't index R_DYNAMIC_SCENE_RESOLUTION_COUNT\n\t%i not in [0, %i)", (unsigned __int8)step, 16) )
    __debugbreak();
  if ( !table && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_globals_impl.h", 336, ASSERT_TYPE_ASSERT, "(table)", (const char *)&queryFormat, "table") )
    __debugbreak();
  if ( step )
  {
    v10 = (float)v6;
    v11 = (int)(float)((float)(v10 * table[(unsigned __int8)step].v[1]) / table->v[1]);
    v12 = (float)v8;
    *outWidth = (int)(float)((float)(v12 * table[(unsigned __int8)step].v[0]) / table->v[0]);
    *outHeight = v11;
  }
  else
  {
    *outWidth = v8;
    *outHeight = v6;
  }
}

/*
==============
R_RT_BuildDynamicResolutionTable
==============
*/
void R_RT_BuildDynamicResolutionTable(unsigned int width, unsigned int height, vec2_t *out_pDynamicResolutionTable)
{
  bool Bool_Internal_DebugName; 

  Bool_Internal_DebugName = Dvar_GetBool_Internal_DebugName(DVARBOOL_r_sceneResSquareRatio, "r_sceneResSquareRatio");
  R_RT_BuildResolutionTable(width, height, Bool_Internal_DebugName, out_pDynamicResolutionTable);
}

/*
==============
R_RT_BuildResolutionTable
==============
*/
void R_RT_BuildResolutionTable(unsigned int baseWidth, unsigned int baseHeight, bool squareRatio, vec2_t *out_pDynamicResolutionTable)
{
  unsigned int v6; 
  float v7; 
  float v8; 
  float v9; 
  __int128 v12; 
  __int128 v13; 
  __int128 v17; 
  __int128 v18; 
  int v22; 
  __int128 v26; 
  __int128 v27; 
  __int128 v30; 
  __int128 v31; 
  unsigned int v35; 
  __int128 v39; 
  __int128 v41; 
  __int128 v43; 
  float v47; 
  float v48; 
  float v49; 
  float v50; 
  __int128 v54; 
  __int128 v55; 
  __int128 v58; 
  __int128 v59; 
  vec2_t *v63; 
  __int64 v64; 
  unsigned int v65; 
  float v66; 
  float v67; 
  __int128 v73; 
  __int128 v74; 
  float v78; 
  float v79; 
  __int128 v83; 
  __int128 v84; 
  __int128 v87; 
  __int128 v88; 
  float v92; 

  v6 = baseWidth / 0x1E;
  v7 = (float)baseHeight;
  v8 = (float)baseWidth;
  v9 = (float)(baseWidth / 0x1E);
  _XMM1 = 0i64;
  __asm { vroundss xmm1, xmm1, xmm2, 1 }
  v13 = _XMM1;
  *(float *)&v13 = *(float *)&_XMM1 * 8.0;
  v12 = v13;
  _XMM1 = 0i64;
  __asm { vroundss xmm1, xmm1, xmm2, 2 }
  v17 = _XMM1;
  *(float *)&v17 = *(float *)&_XMM1 * 8.0;
  _XMM3 = v17;
  v18 = v12;
  *(float *)&v18 = *(float *)&v12 - (float)((float)(v7 / v8) * v9);
  _XMM2 = v18 & (unsigned int)_xmm;
  __asm
  {
    vcmpltss xmm1, xmm2, xmm0
    vblendvps xmm0, xmm3, xmm4, xmm1
  }
  v22 = (int)*(float *)&_XMM0;
  _XMM1 = 0i64;
  _XMM0 = 0i64;
  __asm { vroundss xmm1, xmm1, xmm2, 1 }
  v27 = _XMM1;
  *(float *)&v27 = *(float *)&_XMM1 * 8.0;
  v26 = v27;
  __asm { vroundss xmm0, xmm0, xmm2, 2 }
  v30 = _XMM0;
  *(float *)&v30 = *(float *)&_XMM0 * 8.0;
  _XMM3 = v30;
  v31 = v26;
  *(float *)&v31 = *(float *)&v26 - v8;
  _XMM1 = v31 & (unsigned int)_xmm;
  __asm
  {
    vcmpltss xmm1, xmm1, xmm0
    vblendvps xmm0, xmm3, xmm4, xmm1
  }
  v35 = (int)*(float *)&_XMM0;
  _XMM1 = 0i64;
  _XMM0 = 0i64;
  __asm { vroundss xmm1, xmm1, xmm2, 1 }
  v39 = _XMM1;
  __asm { vroundss xmm0, xmm0, xmm2, 2 }
  *(float *)&v39 = (float)(*(float *)&_XMM1 * 8.0) - v7;
  v41 = v39;
  v43 = _XMM0;
  *(float *)&v43 = *(float *)&_XMM0 * 8.0;
  _XMM3 = v43;
  _XMM1 = v41 & (unsigned int)_xmm;
  if ( squareRatio )
    v6 = v22;
  __asm
  {
    vcmpltss xmm1, xmm1, xmm0
    vblendvps xmm0, xmm3, xmm4, xmm1
  }
  v47 = (float)v35;
  v48 = (float)(unsigned int)(int)*(float *)&_XMM0;
  v49 = v48 / v47;
  v50 = (float)(v48 / v47) * v47;
  out_pDynamicResolutionTable->v[0] = v47;
  _XMM1 = 0i64;
  _XMM0 = 0i64;
  __asm { vroundss xmm1, xmm1, xmm2, 1 }
  v55 = _XMM1;
  *(float *)&v55 = *(float *)&_XMM1 * 8.0;
  v54 = v55;
  __asm { vroundss xmm0, xmm0, xmm2, 2 }
  v58 = _XMM0;
  *(float *)&v58 = *(float *)&_XMM0 * 8.0;
  _XMM3 = v58;
  v59 = v54;
  *(float *)&v59 = *(float *)&v54 - v50;
  _XMM1 = v59 & (unsigned int)_xmm;
  __asm
  {
    vcmpltss xmm1, xmm1, xmm0
    vblendvps xmm0, xmm3, xmm5, xmm1
  }
  v63 = out_pDynamicResolutionTable + 1;
  *(float *)&v59 = (float)(unsigned int)(int)*(float *)&_XMM0;
  out_pDynamicResolutionTable->v[1] = *(float *)&v59;
  v64 = 15i64;
  v65 = v6;
  do
  {
    v66 = (float)v65;
    v67 = v47 - v66;
    _XMM0 = 0i64;
    _XMM1 = 0i64;
    __asm
    {
      vroundss xmm0, xmm0, xmm2, 1
      vroundss xmm1, xmm1, xmm2, 2
    }
    v73 = _XMM1;
    *(float *)&v73 = *(float *)&_XMM1 * 8.0;
    _XMM4 = v73;
    v74 = _XMM0;
    *(float *)&v74 = (float)(*(float *)&_XMM0 * 8.0) - v67;
    _XMM3 = v74 & (unsigned int)_xmm;
    __asm
    {
      vcmpltss xmm1, xmm3, xmm0
      vblendvps xmm0, xmm4, xmm6, xmm1
    }
    v78 = (float)(unsigned int)(int)*(float *)&_XMM0;
    v63->v[0] = v78;
    if ( squareRatio )
    {
      v79 = v78 * v49;
      _XMM1 = 0i64;
      _XMM0 = 0i64;
      __asm { vroundss xmm1, xmm1, xmm2, 1 }
      v84 = _XMM1;
      *(float *)&v84 = *(float *)&_XMM1 * 8.0;
      v83 = v84;
      __asm { vroundss xmm0, xmm0, xmm2, 2 }
      v87 = _XMM0;
      *(float *)&v87 = *(float *)&_XMM0 * 8.0;
      _XMM3 = v87;
      v88 = v83;
      *(float *)&v88 = *(float *)&v83 - v79;
      _XMM1 = v88 & (unsigned int)_xmm;
      __asm
      {
        vcmpltss xmm1, xmm1, xmm0
        vblendvps xmm0, xmm3, xmm5, xmm1
      }
      v92 = (float)(unsigned int)(int)*(float *)&_XMM0;
    }
    else
    {
      v92 = out_pDynamicResolutionTable->v[1];
    }
    v63->v[1] = v92;
    ++v63;
    v65 += v6;
    --v64;
  }
  while ( v64 );
}

/*
==============
R_RT_ChangeOutputVideoModeIfRequired
==============
*/
void R_RT_ChangeOutputVideoModeIfRequired(void)
{
  ;
}

/*
==============
R_RT_DestroyAndClearGlobal
==============
*/
void R_RT_DestroyAndClearGlobal(GfxRenderTargetId rtId)
{
  R_RT_Handle *Global; 
  __int16 v3; 
  R_RT_Surface *Surface; 
  R_RT_Handle *v5; 
  R_RT_Handle v6; 
  R_RT_Handle result; 
  R_RT_AllocationLockSentry v8; 

  if ( R_RT_HaveGlobal(rtId) )
  {
    Global = R_RT_GetGlobal(&result, rtId);
    v3 = Global->m_surfaceID & 0x7FFF;
    if ( !v3 )
      v3 = 0;
    v6.m_surfaceID = v3;
    *(_OWORD *)&v6.m_tracking.m_allocCounter = *(_OWORD *)&Global->m_tracking.m_allocCounter;
    v6.m_tracking.m_location = Global->m_tracking.m_location;
    result = v6;
    if ( v3 )
    {
      R_RT_Handle::GetSurface(&result);
      Profile_Begin(114);
      Profile_Begin(115);
      R_RT_AllocationLockSentry::R_RT_AllocationLockSentry(&v8);
      Profile_EndInternal(NULL);
      Surface = (R_RT_Surface *)R_RT_Handle::GetSurface(&result);
      R_RT_DestroyInternal(Surface);
      R_RT_AllocationLockSentry::~R_RT_AllocationLockSentry(&v8);
      Profile_EndInternal(NULL);
    }
    else if ( v6.m_tracking.m_allocCounter )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter", -2i64) )
        __debugbreak();
    }
    v5 = &g_R_RT_globals[(unsigned __int8)rtId];
    v5->m_surfaceID = 0;
    v5->m_tracking.m_allocCounter = 0;
    v5->m_tracking.m_name = NULL;
    v5->m_tracking.m_location = NULL;
  }
}

/*
==============
R_RT_FindMatchingDynamicResolutionTable
==============
*/
const vec2_t *R_RT_FindMatchingDynamicResolutionTable(unsigned int width, unsigned int height)
{
  bool Bool_Internal_DebugName; 
  bool v5; 
  const vec2_t *result; 

  Bool_Internal_DebugName = Dvar_GetBool_Internal_DebugName(DVARBOOL_r_sceneResSquareRatio, "r_sceneResSquareRatio");
  v5 = Bool_Internal_DebugName;
  if ( s_dynamicResolutionTableInitialized && s_currentSquareRatio == Bool_Internal_DebugName )
    return s_dynamicResolutionTable;
  R_RT_BuildResolutionTable(width, height, Bool_Internal_DebugName, s_dynamicResolutionTable);
  result = s_dynamicResolutionTable;
  s_dynamicResolutionTableInitialized = 1;
  s_currentSquareRatio = v5;
  return result;
}

/*
==============
R_RT_Globals_CreateDisplay
==============
*/
void R_RT_Globals_CreateDisplay(const R_RT_Globals_DisplayConfig *displayConfig)
{
  unsigned int m_displayWidth; 
  unsigned int allocHeight; 
  R_RT_Handle v5; 
  bool v7; 
  R_RT_Handle v8; 
  bool v10; 
  R_RT_Handle v11; 
  bool v13; 
  R_RT_Handle v14; 
  bool v16; 
  R_RT_Handle v17; 
  bool v19; 
  R_RT_DisplayContext optionalDisplayContext[2]; 
  R_RT_Handle v21; 
  R_RT_Handle result; 
  R_RT_Handle v23; 

  m_displayWidth = displayConfig->m_displayWidth;
  allocHeight = displayConfig->m_displayHeight;
  optionalDisplayContext[0].m_swapChain = displayConfig->m_displaySwapChain;
  optionalDisplayContext[0].m_swapChainBufferIndex = 0;
  v5 = *R_RT_CreateInternal(&result, m_displayWidth, allocHeight, m_displayWidth, allocHeight, 1u, 1u, 1u, g_R_RT_renderTargetFmts[1], R_RT_Flag_RWView|R_RT_Flag_RTView, R_RT_FlagInternal_MaskLifetime|R_RT_FlagInternal_Display, &colorBlack, D3D12_RESOURCE_STATE_GENERIC_READ, "Display", 0, NULL, NULL, optionalDisplayContext, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_globals_impl.h(152)");
  v21 = v5;
  *(R_RT_Handle *)&optionalDisplayContext[0].m_swapChain = v5;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface((R_RT_Handle *)optionalDisplayContext);
    if ( (R_RT_Handle::GetSurface((R_RT_Handle *)optionalDisplayContext)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      v5 = *(R_RT_Handle *)&optionalDisplayContext[0].m_swapChain;
      v21 = *(R_RT_Handle *)&optionalDisplayContext[0].m_swapChain;
      __debugbreak();
    }
    else
    {
      v5 = *(R_RT_Handle *)&optionalDisplayContext[0].m_swapChain;
      v21 = *(R_RT_Handle *)&optionalDisplayContext[0].m_swapChain;
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v7 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      v5 = v21;
      if ( v7 )
        __debugbreak();
    }
  }
  result = v5;
  R_RT_SetGlobal(R_RENDERTARGET_DISPLAY_BUFFER, &result);
  if ( R_IsDisplayHDRCapable() )
  {
    optionalDisplayContext[0].m_swapChain = displayConfig->m_gameDvrSdrSwapChain;
    optionalDisplayContext[0].m_swapChainBufferIndex = 0;
    v8 = *R_RT_CreateInternal(&v23, m_displayWidth, allocHeight, m_displayWidth, allocHeight, 1u, 1u, 1u, g_R_RT_renderTargetFmts[1], R_RT_Flag_RTView, R_RT_FlagInternal_MaskLifetime|R_RT_FlagInternal_Display, &colorBlack, D3D12_RESOURCE_STATE_GENERIC_READ, "GameDVR", 0, NULL, NULL, optionalDisplayContext, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_globals_impl.h(159)");
    result = v8;
    *(R_RT_Handle *)&optionalDisplayContext[0].m_swapChain = v8;
    if ( (_WORD)_XMM0 )
    {
      R_RT_Handle::GetSurface((R_RT_Handle *)optionalDisplayContext);
      if ( (R_RT_Handle::GetSurface((R_RT_Handle *)optionalDisplayContext)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
      {
        v8 = *(R_RT_Handle *)&optionalDisplayContext[0].m_swapChain;
        __debugbreak();
      }
      else
      {
        v8 = *(R_RT_Handle *)&optionalDisplayContext[0].m_swapChain;
      }
    }
    else
    {
      __asm { vpextrd rax, xmm0, 2 }
      if ( (_DWORD)_RAX )
      {
        v10 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
        v8 = result;
        if ( v10 )
          __debugbreak();
      }
    }
    result = v8;
    R_RT_SetGlobal(R_RENDERTARGET_GAMEDVR_SDR_BUFFER, &result);
  }
  else
  {
    __asm { vpxor   xmm0, xmm0, xmm0 }
    *(_OWORD *)&g_R_RT_globals[2].m_tracking.m_name = _XMM0;
    *(_OWORD *)&g_R_RT_globals[3].m_tracking.m_name = _XMM0;
    g_R_RT_globals[2].m_surfaceID = 0;
    g_R_RT_globals[2].m_tracking.m_allocCounter = 0;
    g_R_RT_globals[3].m_surfaceID = 0;
    g_R_RT_globals[3].m_tracking.m_allocCounter = 0;
  }
  optionalDisplayContext[0].m_swapChain = displayConfig->m_displaySwapChain;
  optionalDisplayContext[0].m_swapChainBufferIndex = 1;
  v11 = *R_RT_CreateInternal(&v23, m_displayWidth, allocHeight, m_displayWidth, allocHeight, 1u, 1u, 1u, g_R_RT_renderTargetFmts[1], R_RT_Flag_RWView|R_RT_Flag_RTView, R_RT_FlagInternal_MaskLifetime|R_RT_FlagInternal_Display, &colorBlack, D3D12_RESOURCE_STATE_GENERIC_READ, "Display1", 0, NULL, NULL, optionalDisplayContext, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_globals_impl.h(200)");
  result = v11;
  *(R_RT_Handle *)&optionalDisplayContext[0].m_swapChain = v11;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface((R_RT_Handle *)optionalDisplayContext);
    if ( (R_RT_Handle::GetSurface((R_RT_Handle *)optionalDisplayContext)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      v11 = *(R_RT_Handle *)&optionalDisplayContext[0].m_swapChain;
      __debugbreak();
    }
    else
    {
      v11 = *(R_RT_Handle *)&optionalDisplayContext[0].m_swapChain;
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v13 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      v11 = result;
      if ( v13 )
        __debugbreak();
    }
  }
  result = v11;
  R_RT_SetGlobal(R_RENDERTARGET_DISPLAY_BUFFER_PREV, &result);
  if ( R_IsDisplayHDRCapable() )
  {
    optionalDisplayContext[0].m_swapChain = displayConfig->m_gameDvrSdrSwapChain;
    optionalDisplayContext[0].m_swapChainBufferIndex = 1;
    v14 = *R_RT_CreateInternal(&v23, m_displayWidth, allocHeight, m_displayWidth, allocHeight, 1u, 1u, 1u, g_R_RT_renderTargetFmts[1], R_RT_Flag_RTView, R_RT_FlagInternal_MaskLifetime|R_RT_FlagInternal_Display, &colorBlack, D3D12_RESOURCE_STATE_GENERIC_READ, "GameDVR1", 0, NULL, NULL, optionalDisplayContext, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_globals_impl.h(206)");
    result = v14;
    *(R_RT_Handle *)&optionalDisplayContext[0].m_swapChain = v14;
    if ( (_WORD)_XMM0 )
    {
      R_RT_Handle::GetSurface((R_RT_Handle *)optionalDisplayContext);
      if ( (R_RT_Handle::GetSurface((R_RT_Handle *)optionalDisplayContext)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
      {
        v14 = *(R_RT_Handle *)&optionalDisplayContext[0].m_swapChain;
        __debugbreak();
      }
      else
      {
        v14 = *(R_RT_Handle *)&optionalDisplayContext[0].m_swapChain;
      }
    }
    else
    {
      __asm { vpextrd rax, xmm0, 2 }
      if ( (_DWORD)_RAX )
      {
        v16 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
        v14 = result;
        if ( v16 )
          __debugbreak();
      }
    }
    result = v14;
    R_RT_SetGlobal(R_RENDERTARGET_GAMEDVR_SDR_BUFFER_PREV, &result);
  }
  v17 = *R_RT_GetGlobal(&v23, R_RENDERTARGET_DISPLAY_BUFFER_PREV);
  result = v17;
  *(R_RT_Handle *)&optionalDisplayContext[0].m_swapChain = v17;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface((R_RT_Handle *)optionalDisplayContext);
    if ( (R_RT_Handle::GetSurface((R_RT_Handle *)optionalDisplayContext)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      v17 = *(R_RT_Handle *)&optionalDisplayContext[0].m_swapChain;
      __debugbreak();
    }
    else
    {
      v17 = *(R_RT_Handle *)&optionalDisplayContext[0].m_swapChain;
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v19 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      v17 = result;
      if ( v19 )
        __debugbreak();
    }
  }
  result = v17;
  R_RT_SetGlobal(R_RENDERTARGET_DISPLAY_BUFFER_FRONTEND, &result);
  result = v21;
  R_RT_SetGlobal(R_RENDERTARGET_DISPLAY_BUFFER_PREV_FRONTEND, &result);
}

/*
==============
R_RT_Globals_DestroyDisplay
==============
*/
void R_RT_Globals_DestroyDisplay(void)
{
  R_RT_DestroyAndClearGlobal(R_RENDERTARGET_DISPLAY_BUFFER);
  R_RT_DestroyAndClearGlobal(R_RENDERTARGET_DISPLAY_BUFFER_PREV);
  R_RT_DestroyAndClearGlobal(R_RENDERTARGET_GAMEDVR_SDR_BUFFER);
  R_RT_DestroyAndClearGlobal(R_RENDERTARGET_GAMEDVR_SDR_BUFFER_PREV);
}

/*
==============
R_RT_MakeDivisibleBy8
==============
*/
__int64 R_RT_MakeDivisibleBy8(float x)
{
  __int128 v3; 
  __int128 v4; 
  __int128 v8; 
  __int128 v9; 

  _XMM2 = 0i64;
  __asm { vroundss xmm2, xmm2, xmm4, 1 }
  v4 = _XMM2;
  *(float *)&v4 = *(float *)&_XMM2 * 8.0;
  v3 = v4;
  _XMM2 = 0i64;
  __asm { vroundss xmm2, xmm2, xmm4, 2 }
  v8 = _XMM2;
  *(float *)&v8 = *(float *)&_XMM2 * 8.0;
  _XMM5 = v8;
  v9 = v3;
  *(float *)&v9 = *(float *)&v3 - x;
  _XMM4 = v9 & _xmm;
  __asm
  {
    vcmpltss xmm2, xmm4, xmm0
    vblendvps xmm0, xmm5, xmm6, xmm2
  }
  return (unsigned int)(int)*(float *)&_XMM0;
}

