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

void __fastcall RB_HDRToSDR_Process(const GfxCmdBufContext *gfxContext, double _XMM1_8, double _XMM2_8, double _XMM3_8)
{
  GfxTexture *Resident; 
  GfxCmdBufSourceState *source; 
  GfxCmdBufState *v9; 
  const R_RT_Surface *Surface; 
  CmdBufState *v14; 
  unsigned int m_subresourceToTransition; 
  GfxCmdBufSourceState *v17; 
  unsigned int height; 
  const R_RT_Surface *v19; 
  const char *v37; 
  const R_RT_Surface *v39; 
  GfxCmdBufSourceState *v40; 
  R_RT_Image *p_m_image; 
  GfxCmdBufInput *p_input; 
  GfxCmdBufSourceState *v44; 
  GfxImage *clutImage; 
  GfxCmdBufInput *v46; 
  const GfxViewport *p_sceneViewport; 
  const R_RT_Surface *v56; 
  CmdBufState *v58; 
  unsigned int v59; 
  GfxCmdBufState *v60; 
  GfxCmdBufSourceState *v61; 
  float after; 
  float flag; 
  float v67; 
  float v68; 
  float v69; 
  float v70; 
  float v71; 
  float v72; 
  GfxTexture *textures; 
  R_RT_ColorHandle v74; 
  R_RT_ColorHandle result; 
  R_RT_Handle v76; 
  R_RT_Handle v77; 
  char v78; 
  const char *v81; 
  R_RT_Handle data; 
  R_RT_Group v83; 
  ComputeCmdBufState state; 

  _RSI = gfxContext;
  if ( s_hdrToSdr.clutImage && r_hdrToSdr->current.enabled && R_RT_Handle::IsValid(&g_R_RT_globals[2]) )
  {
    __asm { vmovaps [rsp+0CF0h+var_30], xmm6 }
    R_LockGfxImmediateContext();
    R_InitGfxComputeCmdBufState(&state, _RSI->state);
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
    R_ProfBeginNamedEvent(_RSI->state, "HDR To SDR (GameDVR)");
    R_RT_GetGlobalColor(&result, R_RENDERTARGET_DISPLAY_BUFFER);
    R_RT_GetGlobalColor(&v74, R_RENDERTARGET_GAMEDVR_SDR_BUFFER);
    __asm
    {
      vmovups xmm0, xmmword ptr [rsi]
      vmovups xmmword ptr [rbp+0BF0h+data], xmm0
    }
    RB_InitSceneViewport((GfxCmdBufContext *)&data);
    source = _RSI->source;
    v9 = _RSI->state;
    if ( (*((_BYTE *)&_RSI->source->input + 7920) & 1) != 0 )
    {
      R_LockIfGfxImmediateContext(v9->device);
      R_InitCmdBufState(v9);
    }
    else
    {
      R_LockGfxImmediateContext();
      _RAX = RB_GetBackendCmdBufContext((const GfxCmdBufContext *)&data);
      __asm
      {
        vmovups xmm0, xmmword ptr [rax]
        vpextrq rdx, xmm0, 1; in
      }
      if ( v9 != _RDX )
        GfxCmdBufState::Copy(v9, _RDX);
    }
    memset_0(v9->perPrimConstantState, 255, sizeof(v9->perPrimConstantState));
    memset_0(v9->perObjectConstantState, 255, sizeof(v9->perObjectConstantState));
    memset_0(v9->stableConstantState, 255, sizeof(v9->stableConstantState));
    v9->data = source->input.data;
    Surface = R_RT_Handle::GetSurface(&result);
    __asm { vmovups ymm0, ymmword ptr [rbp+0BF0h+result.baseclass_0.m_surfaceID] }
    v14 = _RSI->state;
    m_subresourceToTransition = Surface->m_subresourceToTransition;
    __asm { vmovups [rbp+0BF0h+var_C30], ymm0 }
    R_HW_AddResourceTransition(v14, &v76, m_subresourceToTransition, D3D12_RESOURCE_STATE_RENDER_TARGET, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(_RSI->state);
    __asm { vmovups ymm0, ymmword ptr [rsp+0CF0h+var_C78.baseclass_0.m_surfaceID] }
    v17 = _RSI->source;
    __asm
    {
      vmovups [rbp+0BF0h+var_C30], ymm0
      vmovups [rbp+0BF0h+data], ymm0
    }
    height = R_RT_Handle::GetSurface(&data)->m_image.m_base.height;
    v19 = R_RT_Handle::GetSurface(&data);
    R_SetRenderTargetSize(v17, v19->m_image.m_base.width, height, GFX_USE_VIEWPORT_FOR_VIEW);
    __asm
    {
      vmovups ymm0, ymmword ptr [rsp+0CF0h+var_C78.baseclass_0.m_surfaceID]
      vmovups xmm6, xmmword ptr [rsi]
      vmovd   eax, xmm0
      vmovups [rbp+0BF0h+data], ymm0
    }
    if ( (_WORD)_EAX )
    {
      R_RT_Handle::GetSurface(&data);
      __asm
      {
        vmovups ymm0, [rbp+0BF0h+data]
        vmovups [rbp+0BF0h+var_C30], ymm0
      }
    }
    else
    {
      if ( v74.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 453, ASSERT_TYPE_ASSERT, "(colorRt)", (const char *)&queryFormat, "colorRt") )
        __debugbreak();
    }
    __asm
    {
      vpxor   xmm0, xmm0, xmm0
      vmovdqu xmmword ptr [rbp+0BF0h+var_C78.baseclass_0.m_tracking.m_name], xmm0
      vmovups ymm0, [rbp+0BF0h+var_C30]
      vmovd   eax, xmm0
    }
    v74.m_surfaceID = 0;
    v74.m_tracking.m_allocCounter = 0;
    v78 = 1;
    __asm { vmovups ymmword ptr [rbp+0BF0h+var_C10.m_surfaceID], ymm0 }
    if ( (_WORD)_EAX )
    {
      R_RT_Handle::GetSurface(&v77);
    }
    else
    {
      if ( data.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 442, ASSERT_TYPE_ASSERT, "(colorRt)", (const char *)&queryFormat, "colorRt") )
        __debugbreak();
    }
    __asm
    {
      vmovups ymm0, [rbp+0BF0h+var_C30]
      vmovups [rbp+0BF0h+var_BE8], ymm0
      vmovups ymm0, ymmword ptr [rsp+0CF0h+var_C78.baseclass_0.m_surfaceID]
      vmovups [rbp+0BF0h+var_B68], ymm0
    }
    _RCX = &v83;
    _RAX = &v78;
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr [rcx], ymm0
      vmovups ymm0, ymmword ptr [rax+20h]
      vmovups ymmword ptr [rcx+20h], ymm0
      vmovups ymm0, ymmword ptr [rax+40h]
      vmovups ymmword ptr [rcx+40h], ymm0
      vmovups ymm0, ymmword ptr [rax+60h]
      vmovups ymmword ptr [rcx+60h], ymm0
      vmovups ymm0, ymmword ptr [rax+80h]
      vmovups ymmword ptr [rcx+80h], ymm0
      vmovups ymm0, ymmword ptr [rax+0A0h]
    }
    v37 = v81;
    __asm { vmovups ymmword ptr [rcx+0A0h], ymm0 }
    v83.m_vrsRt.m_tracking.m_location = v37;
    __asm { vmovdqa xmmword ptr [rbp+0BF0h+data], xmm6 }
    R_SetRenderTargetsInternal((GfxCmdBufContext *)&data, &v83, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_hdr_to_sdr.cpp(175)");
    R_SetFullViewport(_RSI->source);
    __asm
    {
      vmovups xmm0, xmmword ptr [rsi]
      vmovups xmmword ptr [rbp+0BF0h+data], xmm0
    }
    RB_EndSurfaceIfNeeded((GfxCmdBufContext *)&data);
    v39 = R_RT_Handle::GetSurface(&result);
    v40 = _RSI->source;
    __asm { vmovaps xmm6, [rsp+0CF0h+var_30] }
    p_m_image = &v39->m_image;
    if ( !_RSI->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
      __debugbreak();
    p_input = &v40->input;
    if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
      __debugbreak();
    p_input->codeImages[4] = &p_m_image->m_base;
    v44 = _RSI->source;
    clutImage = s_hdrToSdr.clutImage;
    if ( !_RSI->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
      __debugbreak();
    v46 = &v44->input;
    if ( !v46 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
      __debugbreak();
    v46->codeImages[69] = clutImage;
    __asm { vmovups xmm0, xmmword ptr [rsi] }
    p_sceneViewport = &_RSI->source->sceneViewport;
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vxorps  xmm3, xmm3, xmm3
      vxorps  xmm2, xmm2, xmm2
      vcvtsi2ss xmm3, xmm3, rax
      vcvtsi2ss xmm2, xmm2, rax
      vmovups xmmword ptr [rbp+0BF0h+data], xmm0
      vmovss  xmm0, cs:__real@3f800000
      vmovss  [rsp+0CF0h+var_C98], xmm0
      vmovss  [rsp+0CF0h+var_CA0], xmm0
      vmovss  [rsp+0CF0h+var_CA8], xmm1
      vmovss  [rsp+0CF0h+var_CB0], xmm1
      vmovss  [rsp+0CF0h+var_CB8], xmm3
      vmovss  [rsp+0CF0h+var_CC0], xmm2
      vmovss  [rsp+0CF0h+flag], xmm1
      vmovss  [rsp+0CF0h+after], xmm1
    }
    RB_ViewportFilterDirectInternal((GfxCmdBufContext *)&data, rgp.hdrToSdrMaterial, 0xFFFFFFFF, p_sceneViewport, after, flag, v67, v68, v69, v70, v71, v72, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_hdr_to_sdr.cpp(185)");
    __asm
    {
      vmovups xmm0, xmmword ptr [rsi]
      vmovups xmmword ptr [rbp+0BF0h+data], xmm0
    }
    RB_EndSurfaceIfNeeded((GfxCmdBufContext *)&data);
    v56 = R_RT_Handle::GetSurface(&result);
    __asm { vmovups ymm0, ymmword ptr [rbp+0BF0h+result.baseclass_0.m_surfaceID] }
    v58 = _RSI->state;
    v59 = v56->m_subresourceToTransition;
    __asm { vmovups ymmword ptr [rbp+0BF0h+var_C10.m_surfaceID], ymm0 }
    R_HW_AddResourceTransition(v58, &v77, v59, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_RENDER_TARGET, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(_RSI->state);
    v60 = _RSI->state;
    v61 = _RSI->source;
    R_ResetRenderTargets(v60);
    if ( (*((_BYTE *)&v61->input + 7920) & 1) != 0 )
    {
      R_ShutdownCmdBufState(v60);
      R_UnlockIfGfxImmediateContext(v60->device);
    }
    else
    {
      _RAX = RB_GetBackendCmdBufContext((const GfxCmdBufContext *)&data);
      __asm
      {
        vmovups xmm0, xmmword ptr [rax]
        vpextrq rcx, xmm0, 1; out
      }
      if ( v60 != _RCX )
      {
        GfxCmdBufState::Copy(_RCX, v60);
        R_FlushImmediateContext();
      }
      R_UnlockGfxImmediateContext();
    }
    R_ProfEndNamedEvent(_RSI->state);
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
  __m256i v6; 
  __m256i v7; 
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
    v6.m256i_i64[0] = *(_QWORD *)&s_hdrToSdr.clutWidth;
    __asm
    {
      vpxor   xmm0, xmm0, xmm0
      vmovdqu xmmword ptr [rsp+0B8h+var_68+8], xmm0
    }
    v6.m256i_i32[2] = s_hdrToSdr.clutDepth;
    *(__int64 *)((char *)&v6.m256i_i64[1] + 4) = 1i64;
    v7.m256i_i64[0] = 0i64;
    v7.m256i_i32[6] = -1;
    __asm { vmovups ymm1, [rsp+0B8h+var_68] }
    v6.m256i_i32[5] = 8454146;
    v6.m256i_i32[6] = v1;
    __asm
    {
      vmovups ymm0, [rsp+0B8h+var_88]
      vmovups ymmword ptr [rsp+0B8h+params.width], ymm0
      vmovups ymmword ptr [rsp+0B8h+params.customAllocFunc], ymm1
    }
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

