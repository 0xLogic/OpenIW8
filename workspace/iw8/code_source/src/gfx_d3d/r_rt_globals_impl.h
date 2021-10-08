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
  if ( (unsigned __int8)step >= 0x10u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_globals_impl.h", 335, ASSERT_TYPE_ASSERT, "(unsigned)( step ) < (unsigned)( 16 )", "step doesn't index R_DYNAMIC_SCENE_RESOLUTION_COUNT\n\t%i not in [0, %i)", (unsigned __int8)step, 16) )
    __debugbreak();
  if ( !table && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_globals_impl.h", 336, ASSERT_TYPE_ASSERT, "(table)", (const char *)&queryFormat, "table") )
    __debugbreak();
  if ( step )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rsi
      vmulss  xmm0, xmm0, dword ptr [rdi+rcx*8+4]
      vdivss  xmm1, xmm0, dword ptr [rdi+4]
      vcvttss2si rdx, xmm1
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rbp
      vmulss  xmm1, xmm0, dword ptr [rdi+rcx*8]
      vdivss  xmm2, xmm1, dword ptr [rdi]
      vcvttss2si rcx, xmm2
    }
    *outWidth = _RCX;
    *outHeight = _RDX;
  }
  else
  {
    *outWidth = width;
    *outHeight = height;
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
  unsigned int v17; 
  __int64 v90; 
  unsigned int v91; 

  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovaps [rsp+68h+var_18], xmm6
    vmovaps [rsp+68h+var_28], xmm7
  }
  _RBX = out_pDynamicResolutionTable;
  __asm
  {
    vmovaps [rsp+68h+var_38], xmm8
    vmovss  xmm8, cs:__real@41000000
    vmovaps [rsp+68h+var_48], xmm9
    vmovss  xmm9, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovaps [rsp+68h+var_58], xmm10
    vmovaps [rsp+68h+var_68], xmm11
    vmovss  xmm10, cs:__real@3e000000
  }
  v17 = baseWidth / 0x1E;
  __asm
  {
    vxorps  xmm7, xmm7, xmm7
    vcvtsi2ss xmm7, xmm7, r11
    vxorps  xmm6, xmm6, xmm6
    vcvtsi2ss xmm6, xmm6, rax
    vcvtsi2ss xmm0, xmm0, rax
    vdivss  xmm1, xmm7, xmm6
    vmulss  xmm5, xmm1, xmm0
    vxorps  xmm1, xmm1, xmm1
    vmulss  xmm2, xmm5, xmm10
    vroundss xmm1, xmm1, xmm2, 1
    vmulss  xmm4, xmm1, xmm8
    vxorps  xmm1, xmm1, xmm1
    vroundss xmm1, xmm1, xmm2, 2
    vmulss  xmm3, xmm1, xmm8
    vsubss  xmm2, xmm4, xmm5
    vsubss  xmm0, xmm3, xmm5
    vandps  xmm0, xmm0, xmm9
    vandps  xmm2, xmm2, xmm9
    vcmpltss xmm1, xmm2, xmm0
    vblendvps xmm0, xmm3, xmm4, xmm1
    vcvttss2si rax, xmm0
    vxorps  xmm1, xmm1, xmm1
    vxorps  xmm0, xmm0, xmm0
    vmulss  xmm2, xmm6, xmm10
    vroundss xmm1, xmm1, xmm2, 1
    vmulss  xmm4, xmm1, xmm8
    vroundss xmm0, xmm0, xmm2, 2
    vmulss  xmm3, xmm0, xmm8
    vsubss  xmm1, xmm4, xmm6
    vandps  xmm1, xmm1, xmm9
    vsubss  xmm0, xmm3, xmm6
    vandps  xmm0, xmm0, xmm9
    vcmpltss xmm1, xmm1, xmm0
    vblendvps xmm0, xmm3, xmm4, xmm1
    vcvttss2si rcx, xmm0
    vxorps  xmm1, xmm1, xmm1
    vxorps  xmm0, xmm0, xmm0
    vmulss  xmm2, xmm7, xmm10
    vroundss xmm1, xmm1, xmm2, 1
    vmulss  xmm4, xmm1, xmm8
    vroundss xmm0, xmm0, xmm2, 2
    vsubss  xmm1, xmm4, xmm7
    vmulss  xmm3, xmm0, xmm8
    vandps  xmm1, xmm1, xmm9
  }
  if ( squareRatio )
    v17 = _RAX;
  __asm
  {
    vsubss  xmm0, xmm3, xmm7
    vandps  xmm0, xmm0, xmm9
    vcmpltss xmm1, xmm1, xmm0
    vblendvps xmm0, xmm3, xmm4, xmm1
    vxorps  xmm11, xmm11, xmm11
    vcvtsi2ss xmm11, xmm11, rcx
    vcvttss2si rcx, xmm0
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, rcx
    vdivss  xmm7, xmm1, xmm11
    vmulss  xmm4, xmm7, xmm11
    vmovss  dword ptr [r9], xmm11
    vxorps  xmm1, xmm1, xmm1
    vxorps  xmm0, xmm0, xmm0
    vmulss  xmm2, xmm4, xmm10
    vroundss xmm1, xmm1, xmm2, 1
    vmulss  xmm5, xmm1, xmm8
    vroundss xmm0, xmm0, xmm2, 2
    vmulss  xmm3, xmm0, xmm8
    vsubss  xmm1, xmm5, xmm4
    vandps  xmm1, xmm1, xmm9
    vsubss  xmm0, xmm3, xmm4
    vandps  xmm0, xmm0, xmm9
    vcmpltss xmm1, xmm1, xmm0
    vblendvps xmm0, xmm3, xmm5, xmm1
    vcvttss2si rcx, xmm0
  }
  _RDX = out_pDynamicResolutionTable + 1;
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, rcx
    vmovss  dword ptr [r9+4], xmm1
  }
  v90 = 15i64;
  v91 = v17;
  do
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rax
      vsubss  xmm5, xmm11, xmm0
      vxorps  xmm0, xmm0, xmm0
      vxorps  xmm1, xmm1, xmm1
      vmulss  xmm2, xmm5, xmm10
      vroundss xmm0, xmm0, xmm2, 1
      vroundss xmm1, xmm1, xmm2, 2
      vmulss  xmm4, xmm1, xmm8
      vmulss  xmm6, xmm0, xmm8
      vsubss  xmm3, xmm6, xmm5
      vsubss  xmm0, xmm4, xmm5
      vandps  xmm0, xmm0, xmm9
      vandps  xmm3, xmm3, xmm9
      vcmpltss xmm1, xmm3, xmm0
      vblendvps xmm0, xmm4, xmm6, xmm1
      vcvttss2si rcx, xmm0
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, rcx
      vmovss  dword ptr [rdx], xmm1
    }
    if ( squareRatio )
    {
      __asm
      {
        vmulss  xmm4, xmm1, xmm7
        vxorps  xmm1, xmm1, xmm1
        vxorps  xmm0, xmm0, xmm0
        vmulss  xmm2, xmm4, xmm10
        vroundss xmm1, xmm1, xmm2, 1
        vmulss  xmm5, xmm1, xmm8
        vroundss xmm0, xmm0, xmm2, 2
        vmulss  xmm3, xmm0, xmm8
        vsubss  xmm1, xmm5, xmm4
        vandps  xmm1, xmm1, xmm9
        vsubss  xmm0, xmm3, xmm4
        vandps  xmm0, xmm0, xmm9
        vcmpltss xmm1, xmm1, xmm0
        vblendvps xmm0, xmm3, xmm5, xmm1
        vcvttss2si rcx, xmm0
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, rcx
      }
    }
    else
    {
      __asm { vmovss  xmm1, dword ptr [rbx+4] }
    }
    __asm { vmovss  dword ptr [rdx+4], xmm1 }
    ++_RDX;
    v91 += v17;
    --v90;
  }
  while ( v90 );
  __asm
  {
    vmovaps xmm6, [rsp+68h+var_18]
    vmovaps xmm7, [rsp+68h+var_28]
    vmovaps xmm8, [rsp+68h+var_38]
    vmovaps xmm9, [rsp+68h+var_48]
    vmovaps xmm10, [rsp+68h+var_58]
    vmovaps xmm11, [rsp+68h+var_68]
  }
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
  __int16 v3; 
  R_RT_Surface *Surface; 
  R_RT_Handle *v9; 
  __m256i v10; 
  R_RT_Handle result; 
  R_RT_AllocationLockSentry v12; 

  if ( R_RT_HaveGlobal(rtId) )
  {
    _RAX = R_RT_GetGlobal(&result, rtId);
    v3 = _RAX->m_surfaceID & 0x7FFF;
    if ( !v3 )
      v3 = 0;
    v10.m256i_i16[0] = v3;
    __asm
    {
      vmovups xmm0, xmmword ptr [rax+8]
      vmovups xmmword ptr [rsp+98h+var_60+8], xmm0
      vmovsd  xmm1, qword ptr [rax+18h]
      vmovsd  qword ptr [rsp+98h+var_60+18h], xmm1
      vmovups ymm0, ymmword ptr [rsp+98h+var_60]
      vmovups ymmword ptr [rsp+98h+result.m_surfaceID], ymm0
    }
    if ( v3 )
    {
      R_RT_Handle::GetSurface(&result);
      Profile_Begin(114);
      Profile_Begin(115);
      R_RT_AllocationLockSentry::R_RT_AllocationLockSentry(&v12);
      Profile_EndInternal(NULL);
      __asm
      {
        vmovups ymm0, ymmword ptr [rsp+98h+result.m_surfaceID]
        vmovups ymmword ptr [rsp+98h+result.m_surfaceID], ymm0
      }
      Surface = (R_RT_Surface *)R_RT_Handle::GetSurface(&result);
      R_RT_DestroyInternal(Surface);
      R_RT_AllocationLockSentry::~R_RT_AllocationLockSentry(&v12);
      Profile_EndInternal(NULL);
    }
    else if ( v10.m256i_i32[2] )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter", -2i64) )
        __debugbreak();
    }
    v9 = &g_R_RT_globals[(unsigned __int8)rtId];
    v9->m_surfaceID = 0;
    v9->m_tracking.m_allocCounter = 0;
    v9->m_tracking.m_name = NULL;
    v9->m_tracking.m_location = NULL;
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
  bool v8; 
  bool v12; 
  bool v16; 
  bool v20; 
  bool v24; 
  R_RT_DisplayContext optionalDisplayContext[2]; 
  R_RT_Handle result; 
  R_RT_Handle v29; 

  m_displayWidth = displayConfig->m_displayWidth;
  allocHeight = displayConfig->m_displayHeight;
  optionalDisplayContext[0].m_swapChain = displayConfig->m_displaySwapChain;
  optionalDisplayContext[0].m_swapChainBufferIndex = 0;
  _RAX = R_RT_CreateInternal(&result, m_displayWidth, allocHeight, m_displayWidth, allocHeight, 1u, 1u, 1u, g_R_RT_renderTargetFmts[1], R_RT_Flag_RWView|R_RT_Flag_RTView, R_RT_FlagInternal_MaskLifetime|R_RT_FlagInternal_Display, &colorBlack, D3D12_RESOURCE_STATE_GENERIC_READ, "Display", 0, NULL, NULL, optionalDisplayContext, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_globals_impl.h(152)");
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovd   eax, xmm0
    vmovups [rbp+var_60], ymm0
    vmovups ymmword ptr [rbp+var_80.m_swapChain], ymm0
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface((R_RT_Handle *)optionalDisplayContext);
    if ( (R_RT_Handle::GetSurface((R_RT_Handle *)optionalDisplayContext)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rbp+var_80.m_swapChain]
        vmovups [rbp+var_60], ymm0
      }
      __debugbreak();
    }
    else
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rbp+var_80.m_swapChain]
        vmovups [rbp+var_60], ymm0
      }
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v8 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      __asm { vmovups ymm0, [rbp+var_60] }
      if ( v8 )
        __debugbreak();
    }
  }
  __asm { vmovups ymmword ptr [rbp+result.m_surfaceID], ymm0 }
  R_RT_SetGlobal(R_RENDERTARGET_DISPLAY_BUFFER, &result);
  if ( R_IsDisplayHDRCapable() )
  {
    optionalDisplayContext[0].m_swapChain = displayConfig->m_gameDvrSdrSwapChain;
    optionalDisplayContext[0].m_swapChainBufferIndex = 0;
    _RAX = R_RT_CreateInternal(&v29, m_displayWidth, allocHeight, m_displayWidth, allocHeight, 1u, 1u, 1u, g_R_RT_renderTargetFmts[1], R_RT_Flag_RTView, R_RT_FlagInternal_MaskLifetime|R_RT_FlagInternal_Display, &colorBlack, D3D12_RESOURCE_STATE_GENERIC_READ, "GameDVR", 0, NULL, NULL, optionalDisplayContext, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_globals_impl.h(159)");
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovd   eax, xmm0
      vmovups ymmword ptr [rbp+result.m_surfaceID], ymm0
      vmovups ymmword ptr [rbp+var_80.m_swapChain], ymm0
    }
    if ( (_WORD)_RAX )
    {
      R_RT_Handle::GetSurface((R_RT_Handle *)optionalDisplayContext);
      if ( (R_RT_Handle::GetSurface((R_RT_Handle *)optionalDisplayContext)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
      {
        __asm { vmovups ymm0, ymmword ptr [rbp+var_80.m_swapChain] }
        __debugbreak();
      }
      else
      {
        __asm { vmovups ymm0, ymmword ptr [rbp+var_80.m_swapChain] }
      }
    }
    else
    {
      __asm { vpextrd rax, xmm0, 2 }
      if ( (_DWORD)_RAX )
      {
        v12 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
        __asm { vmovups ymm0, ymmword ptr [rbp+result.m_surfaceID] }
        if ( v12 )
          __debugbreak();
      }
    }
    __asm { vmovups ymmword ptr [rbp+result.m_surfaceID], ymm0 }
    R_RT_SetGlobal(R_RENDERTARGET_GAMEDVR_SDR_BUFFER, &result);
  }
  else
  {
    __asm
    {
      vpxor   xmm0, xmm0, xmm0
      vmovdqu xmmword ptr cs:?g_R_RT_globals@@3PAVR_RT_Handle@@A.m_tracking.m_allocCounter+48h, xmm0; R_RT_Handle near * g_R_RT_globals
      vmovdqu xmmword ptr cs:?g_R_RT_globals@@3PAVR_RT_Handle@@A.m_tracking.m_name+60h, xmm0; R_RT_Handle near * g_R_RT_globals
    }
    g_R_RT_globals[2].m_surfaceID = 0;
    g_R_RT_globals[2].m_tracking.m_allocCounter = 0;
    g_R_RT_globals[3].m_surfaceID = 0;
    g_R_RT_globals[3].m_tracking.m_allocCounter = 0;
  }
  optionalDisplayContext[0].m_swapChain = displayConfig->m_displaySwapChain;
  optionalDisplayContext[0].m_swapChainBufferIndex = 1;
  _RAX = R_RT_CreateInternal(&v29, m_displayWidth, allocHeight, m_displayWidth, allocHeight, 1u, 1u, 1u, g_R_RT_renderTargetFmts[1], R_RT_Flag_RWView|R_RT_Flag_RTView, R_RT_FlagInternal_MaskLifetime|R_RT_FlagInternal_Display, &colorBlack, D3D12_RESOURCE_STATE_GENERIC_READ, "Display1", 0, NULL, NULL, optionalDisplayContext, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_globals_impl.h(200)");
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovd   eax, xmm0
    vmovups ymmword ptr [rbp+result.m_surfaceID], ymm0
    vmovups ymmword ptr [rbp+var_80.m_swapChain], ymm0
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface((R_RT_Handle *)optionalDisplayContext);
    if ( (R_RT_Handle::GetSurface((R_RT_Handle *)optionalDisplayContext)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      __asm { vmovups ymm0, ymmword ptr [rbp+var_80.m_swapChain] }
      __debugbreak();
    }
    else
    {
      __asm { vmovups ymm0, ymmword ptr [rbp+var_80.m_swapChain] }
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v16 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      __asm { vmovups ymm0, ymmword ptr [rbp+result.m_surfaceID] }
      if ( v16 )
        __debugbreak();
    }
  }
  __asm { vmovups ymmword ptr [rbp+result.m_surfaceID], ymm0 }
  R_RT_SetGlobal(R_RENDERTARGET_DISPLAY_BUFFER_PREV, &result);
  if ( R_IsDisplayHDRCapable() )
  {
    optionalDisplayContext[0].m_swapChain = displayConfig->m_gameDvrSdrSwapChain;
    optionalDisplayContext[0].m_swapChainBufferIndex = 1;
    _RAX = R_RT_CreateInternal(&v29, m_displayWidth, allocHeight, m_displayWidth, allocHeight, 1u, 1u, 1u, g_R_RT_renderTargetFmts[1], R_RT_Flag_RTView, R_RT_FlagInternal_MaskLifetime|R_RT_FlagInternal_Display, &colorBlack, D3D12_RESOURCE_STATE_GENERIC_READ, "GameDVR1", 0, NULL, NULL, optionalDisplayContext, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_globals_impl.h(206)");
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovd   eax, xmm0
      vmovups ymmword ptr [rbp+result.m_surfaceID], ymm0
      vmovups ymmword ptr [rbp+var_80.m_swapChain], ymm0
    }
    if ( (_WORD)_RAX )
    {
      R_RT_Handle::GetSurface((R_RT_Handle *)optionalDisplayContext);
      if ( (R_RT_Handle::GetSurface((R_RT_Handle *)optionalDisplayContext)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
      {
        __asm { vmovups ymm0, ymmword ptr [rbp+var_80.m_swapChain] }
        __debugbreak();
      }
      else
      {
        __asm { vmovups ymm0, ymmword ptr [rbp+var_80.m_swapChain] }
      }
    }
    else
    {
      __asm { vpextrd rax, xmm0, 2 }
      if ( (_DWORD)_RAX )
      {
        v20 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
        __asm { vmovups ymm0, ymmword ptr [rbp+result.m_surfaceID] }
        if ( v20 )
          __debugbreak();
      }
    }
    __asm { vmovups ymmword ptr [rbp+result.m_surfaceID], ymm0 }
    R_RT_SetGlobal(R_RENDERTARGET_GAMEDVR_SDR_BUFFER_PREV, &result);
  }
  _RAX = R_RT_GetGlobal(&v29, R_RENDERTARGET_DISPLAY_BUFFER_PREV);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovd   eax, xmm0
    vmovups ymmword ptr [rbp+result.m_surfaceID], ymm0
    vmovups ymmword ptr [rbp+var_80.m_swapChain], ymm0
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface((R_RT_Handle *)optionalDisplayContext);
    if ( (R_RT_Handle::GetSurface((R_RT_Handle *)optionalDisplayContext)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      __asm { vmovups ymm0, ymmword ptr [rbp+var_80.m_swapChain] }
      __debugbreak();
    }
    else
    {
      __asm { vmovups ymm0, ymmword ptr [rbp+var_80.m_swapChain] }
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v24 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      __asm { vmovups ymm0, ymmword ptr [rbp+result.m_surfaceID] }
      if ( v24 )
        __debugbreak();
    }
  }
  __asm { vmovups ymmword ptr [rbp+result.m_surfaceID], ymm0 }
  R_RT_SetGlobal(R_RENDERTARGET_DISPLAY_BUFFER_FRONTEND, &result);
  __asm
  {
    vmovups ymm0, [rbp+var_60]
    vmovups ymmword ptr [rbp+result.m_surfaceID], ymm0
  }
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

__int64 __fastcall R_RT_MakeDivisibleBy8(double x, __int64 a2, double _XMM2_8)
{
  __int64 result; 

  __asm
  {
    vmulss  xmm4, xmm0, cs:__real@3e000000
    vxorps  xmm2, xmm2, xmm2
    vroundss xmm2, xmm2, xmm4, 1
    vmovaps [rsp+18h+var_18], xmm6
    vmulss  xmm6, xmm2, cs:__real@41000000
    vxorps  xmm2, xmm2, xmm2
    vroundss xmm2, xmm2, xmm4, 2
    vmulss  xmm5, xmm2, cs:__real@41000000
    vsubss  xmm4, xmm6, xmm0
    vandps  xmm4, xmm4, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vsubss  xmm0, xmm5, xmm0
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcmpltss xmm2, xmm4, xmm0
    vblendvps xmm0, xmm5, xmm6, xmm2
    vmovaps xmm6, [rsp+18h+var_18]
    vcvttss2si rax, xmm0
  }
  return result;
}

