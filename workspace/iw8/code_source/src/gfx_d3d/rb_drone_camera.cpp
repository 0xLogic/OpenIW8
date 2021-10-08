/*
==============
R_DroneCamera_SetConstants
==============
*/

void __fastcall R_DroneCamera_SetConstants(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo)
{
  ?R_DroneCamera_SetConstants@@YAXUGfxCmdBufContext@@PEBUGfxViewInfo@@@Z(gfxContext, viewInfo);
}

/*
==============
RB_DroneCamera_Apply
==============
*/

void __fastcall RB_DroneCamera_Apply(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, R_RT_Group *activeGroup)
{
  ?RB_DroneCamera_Apply@@YAXUGfxCmdBufContext@@PEBUGfxViewInfo@@AEAUR_RT_Group@@@Z(gfxContext, viewInfo, activeGroup);
}

/*
==============
R_DroneCamera_ChromaSubsampling
==============
*/

void __fastcall R_DroneCamera_ChromaSubsampling(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, const R_RT_ColorHandle *inputTextureHandle)
{
  ?R_DroneCamera_ChromaSubsampling@@YAXUGfxCmdBufContext@@PEBUGfxViewInfo@@VR_RT_ColorHandle@@@Z(gfxContext, viewInfo, inputTextureHandle);
}

/*
==============
R_DroneCamera_DownsampleBayerDebayer
==============
*/

void __fastcall R_DroneCamera_DownsampleBayerDebayer(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, const R_RT_ColorHandle *inputTextureHandle)
{
  ?R_DroneCamera_DownsampleBayerDebayer@@YAXUGfxCmdBufContext@@PEBUGfxViewInfo@@VR_RT_ColorHandle@@@Z(gfxContext, viewInfo, inputTextureHandle);
}

/*
==============
R_DroneCamera_Upsampling
==============
*/

void __fastcall R_DroneCamera_Upsampling(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, const R_RT_ColorHandle *inputTextureHandle, const R_RT_ColorHandle *srcPackedStencil)
{
  ?R_DroneCamera_Upsampling@@YAXUGfxCmdBufContext@@PEBUGfxViewInfo@@VR_RT_ColorHandle@@2@Z(gfxContext, viewInfo, inputTextureHandle, srcPackedStencil);
}

/*
==============
RB_DroneCamera_Apply
==============
*/
void RB_DroneCamera_Apply(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, R_RT_Group *activeGroup)
{
  unsigned int v8; 
  unsigned int v9; 
  unsigned int m_allocWidth; 
  unsigned int m_allocHeight; 
  unsigned int DownsampleScale; 
  unsigned int v13; 
  unsigned __int16 v14; 
  const dvar_t *v15; 
  unsigned int v16; 
  const dvar_t *v17; 
  int v18; 
  const dvar_t *v19; 
  int v20; 
  unsigned int v21; 
  int rtFlags; 
  unsigned int v47; 
  const R_RT_Surface *Surface; 
  R_RT_Handle result; 
  R_RT_Handle v58; 
  unsigned int width; 
  unsigned int allocWidth; 
  R_RT_Handle v61; 
  R_RT_Handle v62; 
  R_RT_ColorHandle v64; 
  unsigned int height; 

  _R13 = gfxContext;
  _RBX = activeGroup;
  _R12 = viewInfo;
  if ( R_DroneCamera_Enabled(viewInfo) )
  {
    R_ProfBeginNamedEvent(_R13->state, "Drone Camera Effect");
    R_GPU_BeginTimer(GPU_TIMER_DRONE_CAMERA);
    if ( _RBX->m_colorRtCount != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 559, ASSERT_TYPE_ASSERT, "(this->m_colorRtCount == 1)", (const char *)&queryFormat, "this->m_colorRtCount == 1") )
      __debugbreak();
    __asm
    {
      vmovups ymm0, ymmword ptr [rbx+8]
      vmovups [rbp+70h+var_60], ymm0
      vmovups ymmword ptr [rbp+70h+var_A0.m_surfaceID], ymm0
    }
    v8 = R_RT_Handle::GetSurface(&v61)->m_image.m_base.width;
    v9 = R_RT_Handle::GetSurface(&v61)->m_image.m_base.height;
    m_allocWidth = R_RT_Handle::GetSurface(&v61)->m_allocWidth;
    m_allocHeight = R_RT_Handle::GetSurface(&v61)->m_allocHeight;
    DownsampleScale = R_DroneCamera_GetDownsampleScale(_R12);
    width = truncate_cast<unsigned short,unsigned int>(v8 / DownsampleScale);
    height = truncate_cast<unsigned short,unsigned int>(v9 / DownsampleScale);
    v13 = truncate_cast<unsigned short,unsigned int>(m_allocWidth / DownsampleScale);
    allocWidth = v13;
    v14 = truncate_cast<unsigned short,unsigned int>(m_allocHeight / DownsampleScale);
    v15 = r_deviceDebug;
    v16 = v14;
    if ( !r_deviceDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 620, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v15);
    if ( v15->current.enabled )
      goto LABEL_13;
    v17 = DCONST_DVARBOOL_r_esramPostFX;
    if ( !DCONST_DVARBOOL_r_esramPostFX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_esramPostFX") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v17);
    v18 = 2112;
    if ( !v17->current.enabled )
LABEL_13:
      v18 = 2048;
    v19 = DCONST_DVARINT_r_dccPostFX;
    if ( !DCONST_DVARINT_r_dccPostFX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_dccPostFX") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v19);
    v20 = 0;
    if ( v19->current.integer == 1 )
      v20 = 8;
    v21 = width;
    rtFlags = v20 | v18;
    _RAX = R_RT_CreateInternal(&result, width, height, v13, v16, 1u, 1u, 1u, g_R_RT_renderTargetFmts[1], (R_RT_Flags)rtFlags, R_RT_FlagInternal_None, &colorBlack, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "R_RENDERTARGET_DRONE_CAMERA_1", 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_drone_camera.cpp(255)");
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovd   eax, xmm0
      vmovups ymmword ptr [rbp+70h+var_A0.m_surfaceID], ymm0
      vmovups ymmword ptr [rbp+70h+var_80.m_surfaceID], ymm0
    }
    if ( (_WORD)_RAX )
    {
      R_RT_Handle::GetSurface(&v62);
      if ( (R_RT_Handle::GetSurface(&v62)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
      {
        __asm
        {
          vmovups ymm0, ymmword ptr [rbp+70h+var_80.m_surfaceID]
          vmovups ymmword ptr [rbp+70h+var_A0.m_surfaceID], ymm0
        }
        __debugbreak();
      }
      else
      {
        __asm
        {
          vmovups ymm0, ymmword ptr [rbp+70h+var_80.m_surfaceID]
          vmovups ymmword ptr [rbp+70h+var_A0.m_surfaceID], ymm0
        }
      }
    }
    else
    {
      __asm { vpextrd rax, xmm0, 2 }
      if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
    }
    _RAX = R_RT_CreateInternal(&result, v21, height, allocWidth, v16, 1u, 1u, 1u, g_R_RT_renderTargetFmts[1], (R_RT_Flags)rtFlags, R_RT_FlagInternal_None, &colorBlack, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "R_RENDERTARGET_DRONE_CAMERA_2", 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_drone_camera.cpp(256)");
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovd   eax, xmm0
      vmovups ymmword ptr [rbp+70h+var_80.m_surfaceID], ymm0
      vmovups ymmword ptr [rbp+70h+var_D0.m_surfaceID], ymm0
    }
    if ( (_WORD)_RAX )
    {
      R_RT_Handle::GetSurface(&v58);
      if ( (R_RT_Handle::GetSurface(&v58)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
      {
        __asm
        {
          vmovups ymm0, ymmword ptr [rbp+70h+var_D0.m_surfaceID]
          vmovups ymmword ptr [rbp+70h+var_80.m_surfaceID], ymm0
        }
        __debugbreak();
      }
      else
      {
        __asm
        {
          vmovups ymm0, ymmword ptr [rbp+70h+var_D0.m_surfaceID]
          vmovups ymmword ptr [rbp+70h+var_80.m_surfaceID], ymm0
        }
      }
    }
    else
    {
      __asm { vpextrd rax, xmm0, 2 }
      if ( (_DWORD)_RAX )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
          __debugbreak();
      }
    }
    __asm
    {
      vmovups xmm0, xmmword ptr [r13+0]
      vmovups xmmword ptr [rbp+70h+var_D0.m_surfaceID], xmm0
    }
    R_DroneCamera_SetConstants((GfxCmdBufContext *)&v58, _R12);
    __asm
    {
      vmovups ymm0, ymmword ptr [rbp+70h+var_A0.m_surfaceID]
      vmovups ymm1, [rbp+70h+var_60]
      vmovups [rbp+70h+var_40], ymm0
      vmovups xmm0, xmmword ptr [r13+0]
      vmovups xmmword ptr [rbp+70h+var_D0.m_surfaceID], xmm0
      vmovups ymmword ptr [rbp+70h+result.m_surfaceID], ymm1
    }
    RB_DroneCamera_DownsampleBayerDebayer((GfxCmdBufContext *)&v58, _R12, (const R_RT_ColorHandle *)&result, &v64);
    __asm
    {
      vmovups ymm0, ymmword ptr [rbp+70h+var_80.m_surfaceID]
      vmovups ymmword ptr [rbp+70h+result.m_surfaceID], ymm0
      vmovups ymm0, ymmword ptr [rbp+70h+var_A0.m_surfaceID]
      vmovups [rbp+70h+var_40], ymm0
      vmovups xmm0, xmmword ptr [r13+0]
      vmovups xmmword ptr [rbp+70h+var_D0.m_surfaceID], xmm0
    }
    RB_DroneCamera_ChromaSubsampling((GfxCmdBufContext *)&v58, _R12, &v64, (const R_RT_ColorHandle *)&result);
    __asm
    {
      vmovups ymm0, ymmword ptr [rbp+70h+var_A0.m_surfaceID]
      vmovups ymmword ptr [rbp+70h+result.m_surfaceID], ymm0
      vmovups xmm0, xmmword ptr [r13+0]
      vmovups xmmword ptr [rbp+70h+var_D0.m_surfaceID], xmm0
    }
    R_RT_Destroy((GfxCmdBufContext *)&v58, (R_RT_ColorHandle *)&result);
    __asm
    {
      vmovups xmm0, xmmword ptr [r13+0]
      vpextrq rdi, xmm0, 1
    }
    R_ProfBeginNamedEvent(_RDI, "Drone Camera Effect - Upsampling");
    __asm
    {
      vmovups ymm0, ymmword ptr [rbp+70h+var_80.m_surfaceID]
      vmovups ymmword ptr [rbp+70h+result.m_surfaceID], ymm0
    }
    R_AddRenderTargetTransition(_RDI, (R_RT_ColorHandle *)&result, RENDERTARGET_TRANSITION_MODE_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    __asm
    {
      vmovups ymm0, [rbp+70h+var_60]
      vmovups ymmword ptr [rbp+70h+result.m_surfaceID], ymm0
    }
    R_AddRenderTargetTransition(_RDI, (R_RT_ColorHandle *)&result, RENDERTARGET_TRANSITION_MODE_WRITE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(_RDI);
    __asm
    {
      vmovups ymm0, [rbp+70h+var_60]
      vmovups ymmword ptr [rbp+70h+var_A0.m_surfaceID], ymm0
    }
    v47 = R_RT_Handle::GetSurface(&v61)->m_image.m_base.height;
    Surface = R_RT_Handle::GetSurface(&v61);
    R_SetRenderTargetSize(_R13->source, Surface->m_image.m_base.width, v47, GFX_USE_VIEWPORT_FULL);
    __asm
    {
      vmovups ymm0, [rbp+70h+var_60]
      vmovups ymmword ptr [rbp+70h+result.m_surfaceID], ymm0
      vmovups xmm0, xmmword ptr [r13+0]
      vmovups xmmword ptr [rbp+70h+var_D0.m_surfaceID], xmm0
    }
    R_SetRenderTargetsInternal_ColorOnly((GfxCmdBufContext *)&v58, (R_RT_ColorHandle *)&result, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_drone_camera.cpp(217)");
    __asm
    {
      vmovups ymm0, ymmword ptr [r12+33C0h]
      vmovups ymmword ptr [rbp+70h+result.m_surfaceID], ymm0
      vmovups ymm0, ymmword ptr [rbp+70h+var_80.m_surfaceID]
      vmovups [rbp+70h+var_40], ymm0
      vmovups xmm0, xmmword ptr [r13+0]
      vmovups xmmword ptr [rbp+70h+var_D0.m_surfaceID], xmm0
    }
    R_DroneCamera_Upsampling((GfxCmdBufContext *)&v58, _R12, &v64, (const R_RT_ColorHandle *)&result);
    __asm
    {
      vmovups ymm0, [rbp+70h+var_60]
      vmovups ymmword ptr [rbp+70h+result.m_surfaceID], ymm0
    }
    R_AddRenderTargetTransition(_RDI, (R_RT_ColorHandle *)&result, RENDERTARGET_TRANSITION_MODE_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(_RDI);
    R_ProfEndNamedEvent(_RDI);
    __asm
    {
      vmovups ymm0, ymmword ptr [rbp+70h+var_80.m_surfaceID]
      vmovups ymmword ptr [rbp+70h+result.m_surfaceID], ymm0
      vmovups xmm0, xmmword ptr [r13+0]
      vmovups xmmword ptr [rbp+70h+var_D0.m_surfaceID], xmm0
    }
    R_RT_Destroy((GfxCmdBufContext *)&v58, (R_RT_ColorHandle *)&result);
    R_GPU_EndTimer();
    R_ProfEndNamedEvent(_R13->state);
  }
}

/*
==============
RB_DroneCamera_ChromaSubsampling
==============
*/
void RB_DroneCamera_ChromaSubsampling(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, const R_RT_ColorHandle *inputTextureHandle, const R_RT_ColorHandle *outputTextureHandle)
{
  GfxCmdBufState *state; 
  const R_RT_Surface *Surface; 
  R_RT_Image *p_m_image; 
  bool v21; 
  __int64 v29; 
  CmdBufState *v30; 
  R_RT_Handle v32; 
  GfxCmdBufContext v33; 

  __asm { vmovaps [rsp+0C8h+var_58], xmm6 }
  state = gfxContext->state;
  _R14 = gfxContext;
  _RDI = outputTextureHandle;
  _RSI = inputTextureHandle;
  R_ProfBeginNamedEvent(state, "Drone Camera Effect - Chroma Subsampling");
  __asm
  {
    vmovups ymm0, ymmword ptr [rsi]
    vmovups ymmword ptr [rsp+0C8h+var_98.m_surfaceID], ymm0
  }
  R_AddRenderTargetTransition(state, (R_RT_ColorHandle *)&v32, RENDERTARGET_TRANSITION_MODE_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  __asm
  {
    vmovups ymm0, ymmword ptr [rdi]
    vmovups ymmword ptr [rsp+0C8h+var_98.m_surfaceID], ymm0
  }
  R_AddRenderTargetTransition(state, (R_RT_ColorHandle *)&v32, RENDERTARGET_TRANSITION_MODE_WRITE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(state);
  __asm
  {
    vmovups ymm0, ymmword ptr [rdi]
    vmovups ymmword ptr [rsp+0C8h+var_98.m_surfaceID], ymm0
  }
  LODWORD(state) = R_RT_Handle::GetSurface(&v32)->m_image.m_base.height;
  Surface = R_RT_Handle::GetSurface(&v32);
  R_SetRenderTargetSize(_R14->source, Surface->m_image.m_base.width, (unsigned int)state, GFX_USE_VIEWPORT_FULL);
  __asm
  {
    vmovups ymm0, ymmword ptr [rdi]
    vmovups xmm1, xmmword ptr [r14]
    vmovups ymmword ptr [rsp+0C8h+var_98.m_surfaceID], ymm0
    vmovups [rsp+0C8h+var_78], xmm1
  }
  R_SetRenderTargetsInternal_ColorOnly(&v33, (R_RT_ColorHandle *)&v32, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_drone_camera.cpp(177)");
  __asm
  {
    vmovups ymm0, ymmword ptr [rsi]
    vmovups xmm6, xmmword ptr [r14]
    vmovups ymmword ptr [rsp+0C8h+var_98.m_surfaceID], ymm0
    vmovq   rbx, xmm6
  }
  p_m_image = &R_RT_Handle::GetSurface(&v32)->m_image;
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( _RBX == -1792 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  *(_QWORD *)(_RBX + 8112) = p_m_image;
  v21 = !viewInfo->thermalParams.useScopedNVG;
  __asm { vmovdqa xmmword ptr [rsp+0C8h+var_98.m_surfaceID], xmm6 }
  if ( v21 )
  {
    RB_FullScreenFilterInternal((GfxCmdBufContext *)&v32, rgp.dronePass1ChromaSubsamplingMaterial, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_drone_camera.cpp(161)");
  }
  else
  {
    __asm
    {
      vmovss  xmm2, cs:__real@3f800000
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rax
      vdivss  xmm0, xmm2, xmm0
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, rax
      vmovss  dword ptr [rsp+0C8h+var_78], xmm0
      vdivss  xmm0, xmm2, xmm1
      vmovss  dword ptr [rsp+0C8h+var_78+4], xmm0
    }
    RB_ScopeSizeScreenFilter((GfxCmdBufContext *)&v32, viewInfo, rgp.dronePass1ChromaSubsamplingMaterial, (const vec2_t *)&v33);
  }
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source", *(_QWORD *)&v32.m_surfaceID, *(_QWORD *)&v32.m_tracking.m_allocCounter) )
    __debugbreak();
  v29 = _RBX + 1792;
  if ( !v29 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v30 = _R14->state;
  *(_QWORD *)(v29 + 6320) = 0i64;
  R_ProfEndNamedEvent(v30);
  __asm { vmovaps xmm6, [rsp+0C8h+var_58] }
}

/*
==============
RB_DroneCamera_DownsampleBayerDebayer
==============
*/
void RB_DroneCamera_DownsampleBayerDebayer(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, const R_RT_ColorHandle *inputTextureHandle, const R_RT_ColorHandle *outputTextureHandle)
{
  GfxCmdBufState *state; 
  const R_RT_Surface *Surface; 
  R_RT_Image *p_m_image; 
  bool v19; 
  __int64 v24; 
  CmdBufState *v25; 
  R_RT_Handle v27; 
  GfxCmdBufContext v28; 

  __asm { vmovaps [rsp+0C8h+var_58], xmm6 }
  state = gfxContext->state;
  _R14 = gfxContext;
  _RDI = outputTextureHandle;
  _RSI = inputTextureHandle;
  R_ProfBeginNamedEvent(state, "Drone Camera Effect - Downsampling, Bayer and Debayer filter");
  __asm
  {
    vmovups ymm0, ymmword ptr [rdi]
    vmovups ymmword ptr [rsp+0C8h+var_98.m_surfaceID], ymm0
  }
  R_AddRenderTargetTransition(state, (R_RT_ColorHandle *)&v27, RENDERTARGET_TRANSITION_MODE_WRITE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(state);
  __asm
  {
    vmovups ymm0, ymmword ptr [rdi]
    vmovups ymmword ptr [rsp+0C8h+var_98.m_surfaceID], ymm0
  }
  LODWORD(state) = R_RT_Handle::GetSurface(&v27)->m_image.m_base.height;
  Surface = R_RT_Handle::GetSurface(&v27);
  R_SetRenderTargetSize(_R14->source, Surface->m_image.m_base.width, (unsigned int)state, GFX_USE_VIEWPORT_FULL);
  __asm
  {
    vmovups ymm0, ymmword ptr [rdi]
    vmovups xmm1, xmmword ptr [r14]
    vmovups ymmword ptr [rsp+0C8h+var_98.m_surfaceID], ymm0
    vmovups [rsp+0C8h+var_78], xmm1
  }
  R_SetRenderTargetsInternal_ColorOnly(&v28, (R_RT_ColorHandle *)&v27, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_drone_camera.cpp(140)");
  __asm
  {
    vmovups ymm0, ymmword ptr [rsi]
    vmovups xmm6, xmmword ptr [r14]
    vmovups ymmword ptr [rsp+0C8h+var_98.m_surfaceID], ymm0
    vmovq   rbx, xmm6
  }
  p_m_image = &R_RT_Handle::GetSurface(&v27)->m_image;
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( _RBX == -1792 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  *(_QWORD *)(_RBX + 8112) = p_m_image;
  v19 = !viewInfo->thermalParams.useScopedNVG;
  __asm { vmovdqa xmmword ptr [rsp+0C8h+var_98.m_surfaceID], xmm6 }
  if ( v19 )
  {
    RB_FullScreenFilterInternal((GfxCmdBufContext *)&v27, rgp.dronePass0DownsampleBayerDebayerMaterial, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_drone_camera.cpp(125)");
  }
  else
  {
    __asm
    {
      vmovss  xmm0, cs:__real@3f800000
      vdivss  xmm1, xmm0, dword ptr [rbp+0CF4h]
      vaddss  xmm2, xmm1, dword ptr [rbp+0CE4h]
      vaddss  xmm3, xmm2, dword ptr [rbp+0D24h]
      vmovss  dword ptr [rsp+0C8h+var_78], xmm3
      vmovss  dword ptr [rsp+0C8h+var_78+4], xmm3
    }
    RB_ScopeSizeScreenFilter((GfxCmdBufContext *)&v27, viewInfo, rgp.dronePass0DownsampleBayerDebayerMaterial, (const vec2_t *)&v28);
  }
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source", *(_QWORD *)&v27.m_surfaceID, *(_QWORD *)&v27.m_tracking.m_allocCounter) )
    __debugbreak();
  v24 = _RBX + 1792;
  if ( !v24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v25 = _R14->state;
  *(_QWORD *)(v24 + 6320) = 0i64;
  R_ProfEndNamedEvent(v25);
  __asm { vmovaps xmm6, [rsp+0C8h+var_58] }
}

/*
==============
R_DroneCamera_ChromaSubsampling
==============
*/
void R_DroneCamera_ChromaSubsampling(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, const R_RT_ColorHandle *inputTextureHandle)
{
  const R_RT_Surface *Surface; 
  GfxCmdBufSourceState *source; 
  R_RT_Image *p_m_image; 
  GfxCmdBufInput *p_input; 
  GfxCmdBufSourceState *v20; 
  GfxCmdBufInput *v21; 
  GfxCmdBufContext v22; 
  vec2_t v23; 

  _RBX = gfxContext;
  Surface = R_RT_Handle::GetSurface(&inputTextureHandle->R_RT_Handle);
  source = _RBX->source;
  p_m_image = &Surface->m_image;
  if ( !_RBX->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  p_input = &source->input;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codeImages[22] = &p_m_image->m_base;
  if ( viewInfo->thermalParams.useScopedNVG )
  {
    __asm
    {
      vmovss  xmm1, cs:__real@3f800000
      vxorps  xmm0, xmm0, xmm0
      vxorps  xmm2, xmm2, xmm2
      vcvtsi2ss xmm2, xmm2, rax
      vcvtsi2ss xmm0, xmm0, rax
      vdivss  xmm0, xmm1, xmm0
      vmovss  [rsp+88h+var_48], xmm0
      vmovups xmm0, xmmword ptr [rbx]
      vdivss  xmm1, xmm1, xmm2
      vmovups [rsp+88h+var_58], xmm0
      vmovss  [rsp+88h+var_44], xmm1
    }
    RB_ScopeSizeScreenFilter(&v22, viewInfo, rgp.dronePass1ChromaSubsamplingMaterial, &v23);
  }
  else
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rbx]
      vmovups [rsp+88h+var_58], xmm0
    }
    RB_FullScreenFilterInternal(&v22, rgp.dronePass1ChromaSubsamplingMaterial, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_drone_camera.cpp(161)");
  }
  v20 = _RBX->source;
  if ( !v20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  v21 = &v20->input;
  if ( !v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v21->codeImages[22] = NULL;
}

/*
==============
R_DroneCamera_DownsampleBayerDebayer
==============
*/
void R_DroneCamera_DownsampleBayerDebayer(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, const R_RT_ColorHandle *inputTextureHandle)
{
  const R_RT_Surface *Surface; 
  GfxCmdBufSourceState *source; 
  R_RT_Image *p_m_image; 
  GfxCmdBufInput *p_input; 
  GfxCmdBufSourceState *v15; 
  GfxCmdBufInput *v16; 
  GfxCmdBufContext v17; 
  vec2_t v18; 

  _RDI = gfxContext;
  Surface = R_RT_Handle::GetSurface(&inputTextureHandle->R_RT_Handle);
  source = _RDI->source;
  p_m_image = &Surface->m_image;
  if ( !_RDI->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  p_input = &source->input;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codeImages[22] = &p_m_image->m_base;
  if ( viewInfo->thermalParams.useScopedNVG )
  {
    __asm
    {
      vmovss  xmm0, cs:__real@3f800000
      vdivss  xmm1, xmm0, dword ptr [rsi+0CF4h]
      vaddss  xmm2, xmm1, dword ptr [rsi+0CE4h]
      vaddss  xmm3, xmm2, dword ptr [rsi+0D24h]
      vmovups xmm0, xmmword ptr [rdi]
      vmovss  [rsp+88h+var_48], xmm3
      vmovss  [rsp+88h+var_44], xmm3
      vmovups [rsp+88h+var_58], xmm0
    }
    RB_ScopeSizeScreenFilter(&v17, viewInfo, rgp.dronePass0DownsampleBayerDebayerMaterial, &v18);
  }
  else
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rdi]
      vmovups [rsp+88h+var_58], xmm0
    }
    RB_FullScreenFilterInternal(&v17, rgp.dronePass0DownsampleBayerDebayerMaterial, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_drone_camera.cpp(125)");
  }
  v15 = _RDI->source;
  if ( !_RDI->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  v16 = &v15->input;
  if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v16->codeImages[22] = NULL;
}

/*
==============
R_DroneCamera_SetConstants
==============
*/
void R_DroneCamera_SetConstants(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo)
{
  float pixelSize; 
  float scanline1_Size; 
  float zoomUV; 

  __asm { vmovss  xmm2, dword ptr [rdx+0CC8h] }
  _R8 = gfxContext->source;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, eax
    vcvtsi2ss xmm0, xmm0, eax
  }
  pixelSize = viewInfo->droneCameraEffects.pixelSize;
  __asm
  {
    vmovss  dword ptr [r8+964h], xmm0
    vmovss  dword ptr [r8+968h], xmm1
    vmovss  dword ptr [r8+96Ch], xmm2
  }
  _R8->input.consts[38].v[0] = pixelSize;
  ++_R8->constVersions[38];
  __asm
  {
    vmovss  xmm3, dword ptr [rdx+0CD4h]
    vmovss  xmm2, dword ptr [rdx+0CD0h]
    vmovss  xmm1, dword ptr [rdx+0CCCh]
    vmovss  dword ptr [r8+974h], xmm1
    vmovss  dword ptr [r8+978h], xmm2
    vmovss  dword ptr [r8+97Ch], xmm3
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmovss  dword ptr [r8+970h], xmm0
  }
  ++_R8->constVersions[39];
  __asm
  {
    vmovss  xmm3, dword ptr [rdx+0CE0h]
    vmovss  xmm2, dword ptr [rdx+0CDCh]
    vmovss  xmm1, dword ptr [rdx+0CD8h]
    vmovss  dword ptr [r8+984h], xmm1
    vmovss  dword ptr [r8+988h], xmm2
    vmovss  dword ptr [r8+98Ch], xmm3
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmovss  dword ptr [r8+980h], xmm0
  }
  ++_R8->constVersions[40];
  __asm
  {
    vmovss  xmm3, dword ptr [rdx+0CF0h]
    vmovss  xmm2, dword ptr [rdx+0CE8h]
    vmovss  xmm1, dword ptr [rdx+0CE4h]
    vmovss  dword ptr [r8+994h], xmm1
    vmovss  dword ptr [r8+998h], xmm2
    vmovss  dword ptr [r8+99Ch], xmm3
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmovss  dword ptr [r8+990h], xmm0
  }
  ++_R8->constVersions[41];
  __asm
  {
    vmovss  xmm3, dword ptr [rdx+0CFCh]
    vmovss  xmm2, dword ptr [rdx+0CF8h]
    vmovss  xmm1, dword ptr [rdx+0CF4h]
    vmovss  dword ptr [r8+9A4h], xmm1
    vmovss  dword ptr [r8+9A8h], xmm2
    vmovss  dword ptr [r8+9ACh], xmm3
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmovss  dword ptr [r8+9A0h], xmm0
  }
  ++_R8->constVersions[42];
  __asm
  {
    vmovss  xmm3, dword ptr [rdx+0CECh]
    vmovss  xmm2, dword ptr [rdx+0D04h]
    vmovss  xmm1, dword ptr [rdx+0D00h]
    vmovss  dword ptr [r8+9B4h], xmm1
    vmovss  dword ptr [r8+9B8h], xmm2
    vmovss  dword ptr [r8+9BCh], xmm3
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmovss  dword ptr [r8+9B0h], xmm0
  }
  ++_R8->constVersions[43];
  __asm
  {
    vmovss  xmm2, dword ptr [rdx+0D14h]
    vmovss  xmm1, dword ptr [rdx+0D10h]
    vmovss  xmm0, dword ptr [rdx+0D0Ch]
  }
  scanline1_Size = viewInfo->droneCameraEffects.scanline1_Size;
  __asm
  {
    vmovss  dword ptr [r8+9C4h], xmm0
    vmovss  dword ptr [r8+9C8h], xmm1
    vmovss  dword ptr [r8+9CCh], xmm2
  }
  _R8->input.consts[44].v[0] = scanline1_Size;
  ++_R8->constVersions[44];
  __asm
  {
    vmovss  xmm3, dword ptr [rdx+0D20h]
    vmovss  xmm2, dword ptr [rdx+0D1Ch]
    vmovss  xmm1, dword ptr [rdx+0D18h]
    vmovss  dword ptr [r8+9D4h], xmm1
    vmovss  dword ptr [r8+9D8h], xmm2
    vmovss  dword ptr [r8+9DCh], xmm3
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmovss  dword ptr [r8+9D0h], xmm0
  }
  ++_R8->constVersions[45];
  if ( viewInfo->sceneViewport.width >= viewInfo->sceneViewport.height )
  {
    __asm { vmovss  xmm3, cs:__real@3f800000 }
  }
  else
  {
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, rcx
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, r9
      vdivss  xmm2, xmm1, xmm0
      vmovss  xmm1, cs:__real@3f800000
      vdivss  xmm3, xmm1, xmm2
    }
  }
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, rax
  }
  zoomUV = viewInfo->droneCameraEffects.zoomUV;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rcx
    vdivss  xmm2, xmm1, xmm0
    vmovss  dword ptr [r8+9E8h], xmm2
    vmovss  dword ptr [r8+9E4h], xmm3
  }
  _R8->input.consts[46].v[0] = zoomUV;
  _R8->input.consts[46].v[3] = 0.0;
  ++_R8->constVersions[46];
}

/*
==============
R_DroneCamera_Upsampling
==============
*/
void R_DroneCamera_Upsampling(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, const R_RT_ColorHandle *inputTextureHandle, const R_RT_ColorHandle *srcPackedStencil)
{
  const R_RT_Surface *Surface; 
  GfxCmdBufSourceState *source; 
  R_RT_Image *p_m_image; 
  GfxCmdBufInput *p_input; 
  const R_RT_Surface *v11; 
  GfxCmdBufSourceState *v12; 
  R_RT_Image *v13; 
  GfxCmdBufInput *v14; 
  GfxCmdBufSourceState *v16; 
  GfxCmdBufInput *v17; 
  GfxCmdBufSourceState *v19; 
  GfxCmdBufInput *v20; 
  GfxCmdBufContext v21[3]; 

  _RDI = gfxContext;
  Surface = R_RT_Handle::GetSurface(&inputTextureHandle->R_RT_Handle);
  source = _RDI->source;
  p_m_image = &Surface->m_image;
  if ( !_RDI->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  p_input = &source->input;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codeImages[22] = &p_m_image->m_base;
  if ( viewInfo->thermalParams.useScopedNVG )
  {
    v11 = R_RT_Handle::GetSurface(&srcPackedStencil->R_RT_Handle);
    v12 = _RDI->source;
    v13 = &v11->m_image;
    if ( !_RDI->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
      __debugbreak();
    v14 = &v12->input;
    if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
      __debugbreak();
    __asm { vmovups xmm0, xmmword ptr [rdi] }
    v14->codeImages[79] = &v13->m_base;
    __asm { vmovups [rsp+68h+var_38], xmm0 }
    RB_ScopeSizeScreenFilter(v21, viewInfo, rgp.dronePass2UpsampleScopedMaterial, NULL);
    v16 = _RDI->source;
    if ( !_RDI->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
      __debugbreak();
    v17 = &v16->input;
    if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
      __debugbreak();
    v17->codeImages[79] = NULL;
  }
  else
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rdi]
      vmovups [rsp+68h+var_38], xmm0
    }
    RB_FullScreenFilterInternal(v21, rgp.dronePass2UpsampleMaterial, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_drone_camera.cpp(200)");
  }
  v19 = _RDI->source;
  if ( !_RDI->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  v20 = &v19->input;
  if ( !v20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v20->codeImages[22] = NULL;
}

