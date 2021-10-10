/*
==============
RB_HDRToSDR_Process
==============
*/

void __fastcall RB_HDRToSDR_Process(const GfxCmdBufContext *gfxContext)
{
  ?RB_HDRToSDR_Process@@YAXAEBUGfxCmdBufContext@@@Z(gfxContext);
}

/*
==============
R_HDRToSDR_DestroyResources
==============
*/

void R_HDRToSDR_DestroyResources(void)
{
  ?R_HDRToSDR_DestroyResources@@YAXXZ();
}

/*
==============
R_HDRToSDR_CreateResources
==============
*/

void R_HDRToSDR_CreateResources(void)
{
  ?R_HDRToSDR_CreateResources@@YAXXZ();
}

/*
==============
RB_HDRToSDR_Process
==============
*/
void RB_HDRToSDR_Process(const GfxCmdBufContext *gfxContext)
{
  __int128 v1; 
  GfxTexture *Resident; 
  GfxCmdBufSourceState *source; 
  GfxCmdBufState *v6; 
  const R_RT_Surface *Surface; 
  GfxCmdBufState *v9; 
  unsigned int m_subresourceToTransition; 
  GfxCmdBufSourceState *v11; 
  unsigned int height; 
  const R_RT_Surface *v13; 
  GfxCmdBufContext v14; 
  const R_RT_Surface *v16; 
  GfxCmdBufSourceState *v17; 
  R_RT_Image *p_m_image; 
  GfxCmdBufInput *p_input; 
  GfxCmdBufSourceState *v20; 
  GfxImage *clutImage; 
  GfxCmdBufInput *v22; 
  GfxViewport *p_sceneViewport; 
  float v24; 
  float width; 
  const R_RT_Surface *v26; 
  GfxCmdBufState *v27; 
  unsigned int v28; 
  GfxCmdBufState *v29; 
  GfxCmdBufSourceState *v30; 
  GfxTexture *textures; 
  R_RT_ColorHandle v34; 
  R_RT_ColorHandle result; 
  R_RT_Handle v36; 
  R_RT_Handle v37; 
  R_RT_Group v38; 
  R_RT_Handle data; 
  R_RT_Group v40; 
  ComputeCmdBufState state; 
  __int128 v42; 

  if ( s_hdrToSdr.clutImage && r_hdrToSdr->current.enabled && R_RT_Handle::IsValid(&g_R_RT_globals[2]) )
  {
    v42 = v1;
    R_LockGfxImmediateContext();
    R_InitGfxComputeCmdBufState(&state, gfxContext->state);
    if ( s_hdrToSdr.needToGenerateClut )
    {
      R_ProfBeginNamedEvent(&state, "HDR To SDR Generate CLUT");
      R_SetComputeShader(&state, rgp.hdrToSdrClutGenerateShader);
      Resident = (GfxTexture *)R_Texture_GetResident(s_hdrToSdr.clutImage->textureId);
      R_HW_AddResourceTransition(&state, Resident, 0xFFFFFFFF, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
      R_HW_FlushResourceTransitions(&state);
      textures = Resident;
      R_SetComputeRWTextures(&state, 0, 1, (const GfxTexture *const *)&textures);
      *(_DWORD *)&data.m_surfaceID = s_hdrToSdr.clutWidth;
      *((_DWORD *)&data.m_surfaceID + 1) = s_hdrToSdr.clutHeight;
      data.m_tracking.m_allocCounter = s_hdrToSdr.clutDepth;
      R_UploadAndSetComputeConstants(&state, 0, &data, 0x10u, NULL);
      R_Dispatch(&state, (s_hdrToSdr.clutWidth + 7) >> 3, (s_hdrToSdr.clutHeight + 7) >> 3, s_hdrToSdr.clutDepth);
      R_HW_AddResourceTransition(&state, Resident, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
      R_HW_FlushResourceTransitions(&state);
      R_ProfEndNamedEvent(&state);
      s_hdrToSdr.needToGenerateClut = 0;
    }
    R_ProfBeginNamedEvent(gfxContext->state, "HDR To SDR (GameDVR)");
    R_RT_GetGlobalColor(&result, R_RENDERTARGET_DISPLAY_BUFFER);
    R_RT_GetGlobalColor(&v34, R_RENDERTARGET_GAMEDVR_SDR_BUFFER);
    _XMM0 = *gfxContext;
    *(GfxCmdBufContext *)&data.m_surfaceID = *gfxContext;
    RB_InitSceneViewport((GfxCmdBufContext *)&data);
    source = gfxContext->source;
    v6 = gfxContext->state;
    if ( (*((_BYTE *)&gfxContext->source->input + 7920) & 1) != 0 )
    {
      R_LockIfGfxImmediateContext(v6->device);
      R_InitCmdBufState(v6);
    }
    else
    {
      R_LockGfxImmediateContext();
      _XMM0 = *RB_GetBackendCmdBufContext((const GfxCmdBufContext *)&data);
      __asm { vpextrq rdx, xmm0, 1; in }
      if ( v6 != _RDX )
        GfxCmdBufState::Copy(v6, _RDX);
    }
    memset_0(v6->perPrimConstantState, 255, sizeof(v6->perPrimConstantState));
    memset_0(v6->perObjectConstantState, 255, sizeof(v6->perObjectConstantState));
    memset_0(v6->stableConstantState, 255, sizeof(v6->stableConstantState));
    v6->data = source->input.data;
    Surface = R_RT_Handle::GetSurface(&result);
    v9 = gfxContext->state;
    m_subresourceToTransition = Surface->m_subresourceToTransition;
    v36 = (R_RT_Handle)result;
    R_HW_AddResourceTransition(v9, &v36, m_subresourceToTransition, D3D12_RESOURCE_STATE_RENDER_TARGET, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(gfxContext->state);
    v11 = gfxContext->source;
    v36 = (R_RT_Handle)v34;
    data = (R_RT_Handle)v34;
    height = R_RT_Handle::GetSurface(&data)->m_image.m_base.height;
    v13 = R_RT_Handle::GetSurface(&data);
    R_SetRenderTargetSize(v11, v13->m_image.m_base.width, height, GFX_USE_VIEWPORT_FOR_VIEW);
    v14 = *gfxContext;
    data = (R_RT_Handle)v34;
    if ( LOWORD(_XMM0.source) )
    {
      R_RT_Handle::GetSurface(&data);
      v36 = data;
    }
    else
    {
      if ( v34.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 453, ASSERT_TYPE_ASSERT, "(colorRt)", (const char *)&queryFormat, "colorRt") )
        __debugbreak();
    }
    __asm { vpxor   xmm0, xmm0, xmm0 }
    *(_OWORD *)&v34.m_tracking.m_name = _XMM0;
    v34.m_surfaceID = 0;
    v34.m_tracking.m_allocCounter = 0;
    v38.m_colorRtCount = 1;
    v37 = v36;
    if ( (_WORD)_XMM0 )
    {
      R_RT_Handle::GetSurface(&v37);
    }
    else
    {
      if ( data.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 442, ASSERT_TYPE_ASSERT, "(colorRt)", (const char *)&queryFormat, "colorRt") )
        __debugbreak();
    }
    v38.m_colorRts[0] = (R_RT_ColorHandle)v36;
    v38.m_depthRt = (R_RT_DepthHandle)v34;
    v40 = v38;
    *(GfxCmdBufContext *)&data.m_surfaceID = v14;
    R_SetRenderTargetsInternal((GfxCmdBufContext *)&data, &v40, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_hdr_to_sdr.cpp(175)");
    R_SetFullViewport(gfxContext->source);
    *(GfxCmdBufContext *)&data.m_surfaceID = *gfxContext;
    RB_EndSurfaceIfNeeded((GfxCmdBufContext *)&data);
    v16 = R_RT_Handle::GetSurface(&result);
    v17 = gfxContext->source;
    p_m_image = &v16->m_image;
    if ( !gfxContext->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
      __debugbreak();
    p_input = &v17->input;
    if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
      __debugbreak();
    p_input->codeImages[4] = &p_m_image->m_base;
    v20 = gfxContext->source;
    clutImage = s_hdrToSdr.clutImage;
    if ( !gfxContext->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
      __debugbreak();
    v22 = &v20->input;
    if ( !v22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
      __debugbreak();
    v22->codeImages[69] = clutImage;
    p_sceneViewport = &gfxContext->source->sceneViewport;
    v24 = (float)gfxContext->source->sceneViewport.height;
    width = (float)gfxContext->source->sceneViewport.width;
    *(GfxCmdBufContext *)&data.m_surfaceID = *gfxContext;
    RB_ViewportFilterDirectInternal((GfxCmdBufContext *)&data, rgp.hdrToSdrMaterial, 0xFFFFFFFF, p_sceneViewport, 0.0, 0.0, width, v24, 0.0, 0.0, 1.0, 1.0, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_hdr_to_sdr.cpp(185)");
    *(GfxCmdBufContext *)&data.m_surfaceID = *gfxContext;
    RB_EndSurfaceIfNeeded((GfxCmdBufContext *)&data);
    v26 = R_RT_Handle::GetSurface(&result);
    v27 = gfxContext->state;
    v28 = v26->m_subresourceToTransition;
    v37 = (R_RT_Handle)result;
    R_HW_AddResourceTransition(v27, &v37, v28, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_RENDER_TARGET, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(gfxContext->state);
    v29 = gfxContext->state;
    v30 = gfxContext->source;
    R_ResetRenderTargets(v29);
    if ( (*((_BYTE *)&v30->input + 7920) & 1) != 0 )
    {
      R_ShutdownCmdBufState(v29);
      R_UnlockIfGfxImmediateContext(v29->device);
    }
    else
    {
      _XMM0 = (__int128)*RB_GetBackendCmdBufContext((const GfxCmdBufContext *)&data);
      __asm { vpextrq rcx, xmm0, 1; out }
      if ( v29 != _RCX )
      {
        GfxCmdBufState::Copy(_RCX, v29);
        R_FlushImmediateContext();
      }
      R_UnlockGfxImmediateContext();
    }
    R_ProfEndNamedEvent(gfxContext->state);
    R_UnlockGfxImmediateContext();
  }
}

/*
==============
R_HDRToSDR_CreateResources
==============
*/

void __fastcall R_HDRToSDR_CreateResources(double _XMM0_8)
{
  int v1; 
  GfxImage *v2; 
  __m256i v4; 
  __m256i v5; 
  Image_SetupParams params; 

  s_hdrToSdr.clutImage = NULL;
  if ( R_IsDisplayHDRCapable() && r_hdrToSdr->current.enabled )
  {
    v1 = g_R_RT_renderTargetFmts[1];
    s_hdrToSdr.clutWidth = 32;
    s_hdrToSdr.clutHeight = 32;
    s_hdrToSdr.clutDepth = 32;
    v2 = Image_AllocProg(IMAGE_PROG_HDR_TO_SDR_CLUT, IMG_CATEGORY_RAW, TS_FUNCTION);
    if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_hdr_to_sdr.cpp", 63, ASSERT_TYPE_SANITY, "( clutImage )", (const char *)&queryFormat, "clutImage") )
      __debugbreak();
    v4.m256i_i64[0] = *(_QWORD *)&s_hdrToSdr.clutWidth;
    __asm { vpxor   xmm0, xmm0, xmm0 }
    *(_OWORD *)&v5.m256i_u64[1] = _XMM0;
    v4.m256i_i32[2] = s_hdrToSdr.clutDepth;
    *(__int64 *)((char *)&v4.m256i_i64[1] + 4) = 1i64;
    v5.m256i_i64[0] = 0i64;
    v5.m256i_i32[6] = -1;
    v4.m256i_i32[5] = 8454146;
    v4.m256i_i32[6] = v1;
    *(__m256i *)&params.width = v4;
    *(__m256i *)&params.customAllocFunc = v5;
    Image_Setup(v2, &params);
    s_hdrToSdr.clutImage = v2;
    s_hdrToSdr.needToGenerateClut = 1;
  }
}

/*
==============
R_HDRToSDR_DestroyResources
==============
*/
void R_HDRToSDR_DestroyResources(void)
{
  if ( s_hdrToSdr.clutImage )
    Image_Release(s_hdrToSdr.clutImage);
  s_hdrToSdr.clutImage = NULL;
}

