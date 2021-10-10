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
  unsigned int v7; 
  unsigned int v8; 
  unsigned int m_allocWidth; 
  unsigned int m_allocHeight; 
  unsigned int DownsampleScale; 
  unsigned int v12; 
  unsigned __int16 v13; 
  const dvar_t *v14; 
  unsigned int v15; 
  const dvar_t *v16; 
  int v17; 
  const dvar_t *v18; 
  int v19; 
  unsigned int v20; 
  int rtFlags; 
  unsigned int v26; 
  const R_RT_Surface *Surface; 
  R_RT_Handle result; 
  R_RT_Handle v29; 
  unsigned int width; 
  unsigned int allocWidth; 
  R_RT_Handle v32; 
  R_RT_Handle v33; 
  R_RT_Handle v34; 
  R_RT_Handle v35; 
  unsigned int height; 

  if ( R_DroneCamera_Enabled(viewInfo) )
  {
    R_ProfBeginNamedEvent(gfxContext->state, "Drone Camera Effect");
    R_GPU_BeginTimer(GPU_TIMER_DRONE_CAMERA);
    if ( activeGroup->m_colorRtCount != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 559, ASSERT_TYPE_ASSERT, "(this->m_colorRtCount == 1)", (const char *)&queryFormat, "this->m_colorRtCount == 1") )
      __debugbreak();
    v34 = (R_RT_Handle)activeGroup->m_colorRts[0];
    v32 = v34;
    v7 = R_RT_Handle::GetSurface(&v32)->m_image.m_base.width;
    v8 = R_RT_Handle::GetSurface(&v32)->m_image.m_base.height;
    m_allocWidth = R_RT_Handle::GetSurface(&v32)->m_allocWidth;
    m_allocHeight = R_RT_Handle::GetSurface(&v32)->m_allocHeight;
    DownsampleScale = R_DroneCamera_GetDownsampleScale(viewInfo);
    width = truncate_cast<unsigned short,unsigned int>(v7 / DownsampleScale);
    height = truncate_cast<unsigned short,unsigned int>(v8 / DownsampleScale);
    v12 = truncate_cast<unsigned short,unsigned int>(m_allocWidth / DownsampleScale);
    allocWidth = v12;
    v13 = truncate_cast<unsigned short,unsigned int>(m_allocHeight / DownsampleScale);
    v14 = r_deviceDebug;
    v15 = v13;
    if ( !r_deviceDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 620, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v14);
    if ( v14->current.enabled )
      goto LABEL_13;
    v16 = DCONST_DVARBOOL_r_esramPostFX;
    if ( !DCONST_DVARBOOL_r_esramPostFX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_esramPostFX") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v16);
    v17 = 2112;
    if ( !v16->current.enabled )
LABEL_13:
      v17 = 2048;
    v18 = DCONST_DVARINT_r_dccPostFX;
    if ( !DCONST_DVARINT_r_dccPostFX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_dccPostFX") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v18);
    v19 = 0;
    if ( v18->current.integer == 1 )
      v19 = 8;
    v20 = width;
    rtFlags = v19 | v17;
    v32 = *R_RT_CreateInternal(&result, width, height, v12, v15, 1u, 1u, 1u, g_R_RT_renderTargetFmts[1], (R_RT_Flags)rtFlags, R_RT_FlagInternal_None, &colorBlack, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "R_RENDERTARGET_DRONE_CAMERA_1", 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_drone_camera.cpp(255)");
    v33 = v32;
    if ( (_WORD)_XMM0 )
    {
      R_RT_Handle::GetSurface(&v33);
      if ( (R_RT_Handle::GetSurface(&v33)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
      {
        v32 = v33;
        __debugbreak();
      }
      else
      {
        v32 = v33;
      }
    }
    else
    {
      __asm { vpextrd rax, xmm0, 2 }
      if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
    }
    v33 = *R_RT_CreateInternal(&result, v20, height, allocWidth, v15, 1u, 1u, 1u, g_R_RT_renderTargetFmts[1], (R_RT_Flags)rtFlags, R_RT_FlagInternal_None, &colorBlack, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "R_RENDERTARGET_DRONE_CAMERA_2", 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_drone_camera.cpp(256)");
    v29 = v33;
    if ( (_WORD)_XMM0 )
    {
      R_RT_Handle::GetSurface(&v29);
      if ( (R_RT_Handle::GetSurface(&v29)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
      {
        v33 = v29;
        __debugbreak();
      }
      else
      {
        v33 = v29;
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
    *(GfxCmdBufContext *)&v29.m_surfaceID = *gfxContext;
    R_DroneCamera_SetConstants((GfxCmdBufContext *)&v29, viewInfo);
    v35 = v32;
    *(GfxCmdBufContext *)&v29.m_surfaceID = *gfxContext;
    result = v34;
    RB_DroneCamera_DownsampleBayerDebayer((GfxCmdBufContext *)&v29, viewInfo, (const R_RT_ColorHandle *)&result, (const R_RT_ColorHandle *)&v35);
    result = v33;
    v35 = v32;
    *(GfxCmdBufContext *)&v29.m_surfaceID = *gfxContext;
    RB_DroneCamera_ChromaSubsampling((GfxCmdBufContext *)&v29, viewInfo, (const R_RT_ColorHandle *)&v35, (const R_RT_ColorHandle *)&result);
    result = v32;
    *(GfxCmdBufContext *)&v29.m_surfaceID = *gfxContext;
    R_RT_Destroy((GfxCmdBufContext *)&v29, (R_RT_ColorHandle *)&result);
    _XMM0 = *gfxContext;
    __asm { vpextrq rdi, xmm0, 1 }
    R_ProfBeginNamedEvent(_RDI, "Drone Camera Effect - Upsampling");
    result = v33;
    R_AddRenderTargetTransition(_RDI, (R_RT_ColorHandle *)&result, RENDERTARGET_TRANSITION_MODE_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    result = v34;
    R_AddRenderTargetTransition(_RDI, (R_RT_ColorHandle *)&result, RENDERTARGET_TRANSITION_MODE_WRITE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(_RDI);
    v32 = v34;
    v26 = R_RT_Handle::GetSurface(&v32)->m_image.m_base.height;
    Surface = R_RT_Handle::GetSurface(&v32);
    R_SetRenderTargetSize(gfxContext->source, Surface->m_image.m_base.width, v26, GFX_USE_VIEWPORT_FULL);
    result = v34;
    *(GfxCmdBufContext *)&v29.m_surfaceID = *gfxContext;
    R_SetRenderTargetsInternal_ColorOnly((GfxCmdBufContext *)&v29, (R_RT_ColorHandle *)&result, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_drone_camera.cpp(217)");
    result = (R_RT_Handle)viewInfo->sceneRtInput.m_packedStencilRt;
    v35 = v33;
    *(GfxCmdBufContext *)&v29.m_surfaceID = *gfxContext;
    R_DroneCamera_Upsampling((GfxCmdBufContext *)&v29, viewInfo, (const R_RT_ColorHandle *)&v35, (const R_RT_ColorHandle *)&result);
    result = v34;
    R_AddRenderTargetTransition(_RDI, (R_RT_ColorHandle *)&result, RENDERTARGET_TRANSITION_MODE_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(_RDI);
    R_ProfEndNamedEvent(_RDI);
    result = v33;
    *(GfxCmdBufContext *)&v29.m_surfaceID = *gfxContext;
    R_RT_Destroy((GfxCmdBufContext *)&v29, (R_RT_ColorHandle *)&result);
    R_GPU_EndTimer();
    R_ProfEndNamedEvent(gfxContext->state);
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
  GfxCmdBufContext v10; 
  GfxCmdBufContext v11; 
  R_RT_Image *p_m_image; 
  bool v13; 
  float renderTargetWidth; 
  float renderTargetHeight; 
  GfxCmdBufState *v16; 
  R_RT_Handle v17; 
  GfxCmdBufContext v18; 

  state = gfxContext->state;
  R_ProfBeginNamedEvent(state, "Drone Camera Effect - Chroma Subsampling");
  v17 = inputTextureHandle->R_RT_Handle;
  R_AddRenderTargetTransition(state, (R_RT_ColorHandle *)&v17, RENDERTARGET_TRANSITION_MODE_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  v17 = outputTextureHandle->R_RT_Handle;
  R_AddRenderTargetTransition(state, (R_RT_ColorHandle *)&v17, RENDERTARGET_TRANSITION_MODE_WRITE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(state);
  v17 = outputTextureHandle->R_RT_Handle;
  LODWORD(state) = R_RT_Handle::GetSurface(&v17)->m_image.m_base.height;
  Surface = R_RT_Handle::GetSurface(&v17);
  R_SetRenderTargetSize(gfxContext->source, Surface->m_image.m_base.width, (unsigned int)state, GFX_USE_VIEWPORT_FULL);
  v10 = *gfxContext;
  v17 = outputTextureHandle->R_RT_Handle;
  v18 = v10;
  R_SetRenderTargetsInternal_ColorOnly(&v18, (R_RT_ColorHandle *)&v17, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_drone_camera.cpp(177)");
  v11 = *gfxContext;
  v17 = inputTextureHandle->R_RT_Handle;
  p_m_image = &R_RT_Handle::GetSurface(&v17)->m_image;
  if ( !v11.source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( v11.source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v11.source->input.codeImages[22] = &p_m_image->m_base;
  v13 = !viewInfo->thermalParams.useScopedNVG;
  *(GfxCmdBufContext *)&v17.m_surfaceID = v11;
  if ( v13 )
  {
    RB_FullScreenFilterInternal((GfxCmdBufContext *)&v17, rgp.dronePass1ChromaSubsamplingMaterial, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_drone_camera.cpp(161)");
  }
  else
  {
    renderTargetWidth = (float)v11.source->renderTargetWidth;
    renderTargetHeight = (float)v11.source->renderTargetHeight;
    *(float *)&v18.source = 1.0 / renderTargetWidth;
    *((float *)&v18.source + 1) = 1.0 / renderTargetHeight;
    RB_ScopeSizeScreenFilter((GfxCmdBufContext *)&v17, viewInfo, rgp.dronePass1ChromaSubsamplingMaterial, (const vec2_t *)&v18);
  }
  if ( !v11.source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source", *(_QWORD *)&v17.m_surfaceID, *(_QWORD *)&v17.m_tracking.m_allocCounter) )
    __debugbreak();
  if ( v11.source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v16 = gfxContext->state;
  v11.source->input.codeImages[22] = NULL;
  R_ProfEndNamedEvent(v16);
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
  GfxCmdBufContext v10; 
  GfxCmdBufContext v11; 
  R_RT_Image *p_m_image; 
  bool v13; 
  GfxCmdBufState *v14; 
  R_RT_Handle v15; 
  GfxCmdBufContext v16; 

  state = gfxContext->state;
  R_ProfBeginNamedEvent(state, "Drone Camera Effect - Downsampling, Bayer and Debayer filter");
  v15 = outputTextureHandle->R_RT_Handle;
  R_AddRenderTargetTransition(state, (R_RT_ColorHandle *)&v15, RENDERTARGET_TRANSITION_MODE_WRITE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(state);
  v15 = outputTextureHandle->R_RT_Handle;
  LODWORD(state) = R_RT_Handle::GetSurface(&v15)->m_image.m_base.height;
  Surface = R_RT_Handle::GetSurface(&v15);
  R_SetRenderTargetSize(gfxContext->source, Surface->m_image.m_base.width, (unsigned int)state, GFX_USE_VIEWPORT_FULL);
  v10 = *gfxContext;
  v15 = outputTextureHandle->R_RT_Handle;
  v16 = v10;
  R_SetRenderTargetsInternal_ColorOnly(&v16, (R_RT_ColorHandle *)&v15, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_drone_camera.cpp(140)");
  v11 = *gfxContext;
  v15 = inputTextureHandle->R_RT_Handle;
  p_m_image = &R_RT_Handle::GetSurface(&v15)->m_image;
  if ( !v11.source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( v11.source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v11.source->input.codeImages[22] = &p_m_image->m_base;
  v13 = !viewInfo->thermalParams.useScopedNVG;
  *(GfxCmdBufContext *)&v15.m_surfaceID = v11;
  if ( v13 )
  {
    RB_FullScreenFilterInternal((GfxCmdBufContext *)&v15, rgp.dronePass0DownsampleBayerDebayerMaterial, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_drone_camera.cpp(125)");
  }
  else
  {
    *(float *)&v16.source = (float)((float)(1.0 / viewInfo->droneCameraEffects.shakeCameraVal1) + viewInfo->droneCameraEffects.deformScreenThreshold) + viewInfo->droneCameraEffects.zoomUV;
    *((float *)&v16.source + 1) = *(float *)&v16.source;
    RB_ScopeSizeScreenFilter((GfxCmdBufContext *)&v15, viewInfo, rgp.dronePass0DownsampleBayerDebayerMaterial, (const vec2_t *)&v16);
  }
  if ( !v11.source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source", *(_QWORD *)&v15.m_surfaceID, *(_QWORD *)&v15.m_tracking.m_allocCounter) )
    __debugbreak();
  if ( v11.source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v14 = gfxContext->state;
  v11.source->input.codeImages[22] = NULL;
  R_ProfEndNamedEvent(v14);
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
  float renderTargetHeight; 
  float renderTargetWidth; 
  GfxCmdBufSourceState *v11; 
  GfxCmdBufInput *v12; 
  GfxCmdBufContext v13; 
  vec2_t v14; 

  Surface = R_RT_Handle::GetSurface(&inputTextureHandle->R_RT_Handle);
  source = gfxContext->source;
  p_m_image = &Surface->m_image;
  if ( !gfxContext->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  p_input = &source->input;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codeImages[22] = &p_m_image->m_base;
  if ( viewInfo->thermalParams.useScopedNVG )
  {
    renderTargetHeight = (float)gfxContext->source->renderTargetHeight;
    renderTargetWidth = (float)gfxContext->source->renderTargetWidth;
    v14.v[0] = 1.0 / renderTargetWidth;
    v13 = *gfxContext;
    v14.v[1] = 1.0 / renderTargetHeight;
    RB_ScopeSizeScreenFilter(&v13, viewInfo, rgp.dronePass1ChromaSubsamplingMaterial, &v14);
  }
  else
  {
    v13 = *gfxContext;
    RB_FullScreenFilterInternal(&v13, rgp.dronePass1ChromaSubsamplingMaterial, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_drone_camera.cpp(161)");
  }
  v11 = gfxContext->source;
  if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  v12 = &v11->input;
  if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v12->codeImages[22] = NULL;
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
  GfxCmdBufContext v9; 
  GfxCmdBufSourceState *v10; 
  GfxCmdBufInput *v11; 
  GfxCmdBufContext v12; 
  vec2_t v13; 

  Surface = R_RT_Handle::GetSurface(&inputTextureHandle->R_RT_Handle);
  source = gfxContext->source;
  p_m_image = &Surface->m_image;
  if ( !gfxContext->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  p_input = &source->input;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codeImages[22] = &p_m_image->m_base;
  if ( viewInfo->thermalParams.useScopedNVG )
  {
    v9 = *gfxContext;
    v13.v[0] = (float)((float)(1.0 / viewInfo->droneCameraEffects.shakeCameraVal1) + viewInfo->droneCameraEffects.deformScreenThreshold) + viewInfo->droneCameraEffects.zoomUV;
    v13.v[1] = v13.v[0];
    v12 = v9;
    RB_ScopeSizeScreenFilter(&v12, viewInfo, rgp.dronePass0DownsampleBayerDebayerMaterial, &v13);
  }
  else
  {
    v12 = *gfxContext;
    RB_FullScreenFilterInternal(&v12, rgp.dronePass0DownsampleBayerDebayerMaterial, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_drone_camera.cpp(125)");
  }
  v10 = gfxContext->source;
  if ( !gfxContext->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  v11 = &v10->input;
  if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v11->codeImages[22] = NULL;
}

/*
==============
R_DroneCamera_SetConstants
==============
*/
void R_DroneCamera_SetConstants(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo)
{
  float filterShakeStrength; 
  GfxCmdBufSourceState *source; 
  float filterType; 
  float pixelSize; 
  BOOL levelsOnOff; 
  float levelsGamma; 
  float levelsMax; 
  BOOL posterizationOnOff; 
  float saturation; 
  float posterizationPower; 
  BOOL deformScreenOnOff; 
  float deformScreenProbability; 
  float deformScreenScale; 
  BOOL shakeCameraOnOff; 
  float shakeCameraVal3; 
  float shakeCameraVal2; 
  BOOL scanlinesOnOff; 
  float deformScreenSeed; 
  float scanline2_InterpolationPower; 
  float scanline2_Speed; 
  float scanline2_Size; 
  float scanline1_Size; 
  float vignetteEdges; 
  float vignetteSmoothness; 
  BOOL vignetteOnOff; 
  __int64 width; 
  __int64 v28; 
  float v29; 
  float v30; 
  float v31; 
  float height; 
  float zoomUV; 
  float v34; 

  filterShakeStrength = viewInfo->droneCameraEffects.filterShakeStrength;
  source = gfxContext->source;
  filterType = (float)viewInfo->droneCameraEffects.filterType;
  pixelSize = viewInfo->droneCameraEffects.pixelSize;
  source->input.consts[38].v[1] = (float)viewInfo->droneCameraEffects.filterMultiplier;
  source->input.consts[38].v[2] = filterType;
  source->input.consts[38].v[3] = filterShakeStrength;
  source->input.consts[38].v[0] = pixelSize;
  ++source->constVersions[38];
  levelsOnOff = viewInfo->droneCameraEffects.levelsOnOff;
  levelsGamma = viewInfo->droneCameraEffects.levelsGamma;
  levelsMax = viewInfo->droneCameraEffects.levelsMax;
  source->input.consts[39].v[1] = viewInfo->droneCameraEffects.levelsMin;
  source->input.consts[39].v[2] = levelsMax;
  source->input.consts[39].v[3] = levelsGamma;
  source->input.consts[39].v[0] = (float)levelsOnOff;
  ++source->constVersions[39];
  posterizationOnOff = viewInfo->droneCameraEffects.posterizationOnOff;
  saturation = viewInfo->droneCameraEffects.saturation;
  posterizationPower = viewInfo->droneCameraEffects.posterizationPower;
  source->input.consts[40].v[1] = viewInfo->droneCameraEffects.posterizationGamma;
  source->input.consts[40].v[2] = posterizationPower;
  source->input.consts[40].v[3] = saturation;
  source->input.consts[40].v[0] = (float)posterizationOnOff;
  ++source->constVersions[40];
  deformScreenOnOff = viewInfo->droneCameraEffects.deformScreenOnOff;
  deformScreenProbability = viewInfo->droneCameraEffects.deformScreenProbability;
  deformScreenScale = viewInfo->droneCameraEffects.deformScreenScale;
  source->input.consts[41].v[1] = viewInfo->droneCameraEffects.deformScreenThreshold;
  source->input.consts[41].v[2] = deformScreenScale;
  source->input.consts[41].v[3] = deformScreenProbability;
  source->input.consts[41].v[0] = (float)deformScreenOnOff;
  ++source->constVersions[41];
  shakeCameraOnOff = viewInfo->droneCameraEffects.shakeCameraOnOff;
  shakeCameraVal3 = viewInfo->droneCameraEffects.shakeCameraVal3;
  shakeCameraVal2 = viewInfo->droneCameraEffects.shakeCameraVal2;
  source->input.consts[42].v[1] = viewInfo->droneCameraEffects.shakeCameraVal1;
  source->input.consts[42].v[2] = shakeCameraVal2;
  source->input.consts[42].v[3] = shakeCameraVal3;
  source->input.consts[42].v[0] = (float)shakeCameraOnOff;
  ++source->constVersions[42];
  scanlinesOnOff = viewInfo->droneCameraEffects.scanlinesOnOff;
  deformScreenSeed = viewInfo->droneCameraEffects.deformScreenSeed;
  scanline2_InterpolationPower = viewInfo->droneCameraEffects.scanline2_InterpolationPower;
  source->input.consts[43].v[1] = viewInfo->droneCameraEffects.scanline1_InterpolationPower;
  source->input.consts[43].v[2] = scanline2_InterpolationPower;
  source->input.consts[43].v[3] = deformScreenSeed;
  source->input.consts[43].v[0] = (float)scanlinesOnOff;
  ++source->constVersions[43];
  scanline2_Speed = viewInfo->droneCameraEffects.scanline2_Speed;
  scanline2_Size = viewInfo->droneCameraEffects.scanline2_Size;
  scanline1_Size = viewInfo->droneCameraEffects.scanline1_Size;
  source->input.consts[44].v[1] = viewInfo->droneCameraEffects.scanline1_Speed;
  source->input.consts[44].v[2] = scanline2_Size;
  source->input.consts[44].v[3] = scanline2_Speed;
  source->input.consts[44].v[0] = scanline1_Size;
  ++source->constVersions[44];
  vignetteEdges = viewInfo->droneCameraEffects.vignetteEdges;
  vignetteSmoothness = viewInfo->droneCameraEffects.vignetteSmoothness;
  vignetteOnOff = viewInfo->droneCameraEffects.vignetteOnOff;
  source->input.consts[45].v[1] = viewInfo->droneCameraEffects.vignetteSize;
  source->input.consts[45].v[2] = vignetteSmoothness;
  source->input.consts[45].v[3] = vignetteEdges;
  source->input.consts[45].v[0] = (float)vignetteOnOff;
  ++source->constVersions[45];
  width = viewInfo->sceneViewport.width;
  v28 = viewInfo->displayViewport.width;
  if ( (unsigned int)width >= viewInfo->sceneViewport.height )
  {
    v31 = FLOAT_1_0;
  }
  else
  {
    v29 = (float)v28;
    v30 = (float)width;
    v31 = 1.0 / (float)(v29 / v30);
  }
  height = (float)viewInfo->displayViewport.height;
  zoomUV = viewInfo->droneCameraEffects.zoomUV;
  v34 = (float)v28;
  source->input.consts[46].v[2] = height / v34;
  source->input.consts[46].v[1] = v31;
  source->input.consts[46].v[0] = zoomUV;
  source->input.consts[46].v[3] = 0.0;
  ++source->constVersions[46];
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
  GfxCmdBufContext v15; 
  GfxCmdBufSourceState *v16; 
  GfxCmdBufInput *v17; 
  GfxCmdBufSourceState *v18; 
  GfxCmdBufInput *v19; 
  GfxCmdBufContext v20[3]; 

  Surface = R_RT_Handle::GetSurface(&inputTextureHandle->R_RT_Handle);
  source = gfxContext->source;
  p_m_image = &Surface->m_image;
  if ( !gfxContext->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  p_input = &source->input;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codeImages[22] = &p_m_image->m_base;
  if ( viewInfo->thermalParams.useScopedNVG )
  {
    v11 = R_RT_Handle::GetSurface(&srcPackedStencil->R_RT_Handle);
    v12 = gfxContext->source;
    v13 = &v11->m_image;
    if ( !gfxContext->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
      __debugbreak();
    v14 = &v12->input;
    if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
      __debugbreak();
    v15 = *gfxContext;
    v14->codeImages[79] = &v13->m_base;
    v20[0] = v15;
    RB_ScopeSizeScreenFilter(v20, viewInfo, rgp.dronePass2UpsampleScopedMaterial, NULL);
    v16 = gfxContext->source;
    if ( !gfxContext->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
      __debugbreak();
    v17 = &v16->input;
    if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
      __debugbreak();
    v17->codeImages[79] = NULL;
  }
  else
  {
    v20[0] = *gfxContext;
    RB_FullScreenFilterInternal(v20, rgp.dronePass2UpsampleMaterial, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_drone_camera.cpp(200)");
  }
  v18 = gfxContext->source;
  if ( !gfxContext->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  v19 = &v18->input;
  if ( !v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v19->codeImages[22] = NULL;
}

