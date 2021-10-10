/*
==============
R_Flare_Draw
==============
*/

void __fastcall R_Flare_Draw(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, const GfxWrappedBuffer *perFlareDataBuffer, MaterialTechniqueType techType)
{
  ?R_Flare_Draw@@YAXUGfxCmdBufContext@@PEBUGfxViewInfo@@PEBUGfxWrappedBuffer@@W4MaterialTechniqueType@@@Z(gfxContext, viewInfo, perFlareDataBuffer, techType);
}

/*
==============
RB_Flare_UnmapGfxMeshFlare
==============
*/

void __fastcall RB_Flare_UnmapGfxMeshFlare(const GfxViewInfo *viewInfo)
{
  ?RB_Flare_UnmapGfxMeshFlare@@YAXPEBUGfxViewInfo@@@Z(viewInfo);
}

/*
==============
RB_Flare_MapGfxMeshFlare
==============
*/

void __fastcall RB_Flare_MapGfxMeshFlare(const GfxViewInfo *viewInfo)
{
  ?RB_Flare_MapGfxMeshFlare@@YAXPEBUGfxViewInfo@@@Z(viewInfo);
}

/*
==============
R_Flare_CalculateOcclusion
==============
*/

void __fastcall R_Flare_CalculateOcclusion(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo, const GfxBackEndData *data, const R_RT_ColorHandle *sceneAlphaRT, const GfxImage *volScatterImage, const GfxImage *volExtinctionImage, const GfxImage *scopeImage, const GfxShaderBufferRWView *perFlareDataBuffer, bool vrsInlineResolve)
{
  ?R_Flare_CalculateOcclusion@@YAXPEAUComputeCmdBufState@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@AEBVR_RT_ColorHandle@@PEBUGfxImage@@44AEBUGfxShaderBufferRWView@@_N@Z(computeState, viewInfo, data, sceneAlphaRT, volScatterImage, volExtinctionImage, scopeImage, perFlareDataBuffer, vrsInlineResolve);
}

/*
==============
RB_Flare_Draw
==============
*/

void __fastcall RB_Flare_Draw(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  ?RB_Flare_Draw@@YAXUGfxCmdBufContext@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@@Z(gfxContext, viewInfo, data);
}

/*
==============
RB_Flare_Draw
==============
*/
void RB_Flare_Draw(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  __int128 v3; 
  const R_RT_Surface *Surface; 
  const GfxShaderBufferRWView *p_rwView; 
  ComputeCmdBufState *GfxComputeCmdBufState; 
  GfxCmdBufState *state; 
  const R_RT_Surface *v13; 
  const GfxDevice *device; 
  int integer; 
  const R_RT_Surface *v16; 
  GfxCmdBufContext v17; 
  GfxImage *visibility[2]; 
  GfxImage *extinction; 
  GfxImage *scattering; 
  R_RT_ColorHandle m_mainSceneAlphaRt; 
  R_RT_BufferHandle result; 
  __int128 v23; 

  R_GPU_BeginTimer(GPU_TIMER_FLARES);
  if ( viewInfo->flareCount )
  {
    v23 = v3;
    R_RT_CreateBufferInternal(&result, 8u, 0x100u, GFX_DATA_FORMAT_R32_UINT, R_RT_Flag_BufferStructured|R_RT_Flag_RWView, R_RT_FlagInternal_None, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "per flare rw data", 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_flare.cpp(260)");
    Surface = R_RT_Handle::GetSurface(&result);
    if ( (Surface->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 589, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
      __debugbreak();
    if ( (Surface->m_rtFlags & 0x1000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 590, ASSERT_TYPE_ASSERT, "(surface->m_rtFlags & R_RT_Flag_RWView)", (const char *)&queryFormat, "surface->m_rtFlags & R_RT_Flag_RWView") )
      __debugbreak();
    _XMM0 = *gfxContext;
    __asm { vpextrq rbp, xmm0, 1 }
    p_rwView = &Surface->m_buffer.m_wrappedBuffer.rwView;
    GfxComputeCmdBufState = R_GetGfxComputeCmdBufState(_RBP);
    R_ProfBeginNamedEvent(GfxComputeCmdBufState, "Flare occlusion");
    R_HW_AddResourceTransition(GfxComputeCmdBufState, p_rwView, 0xFFFFFFFF, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    m_mainSceneAlphaRt = viewInfo->sceneRtInput.m_mainSceneAlphaRt;
    R_AddRenderTargetTransition(_RBP, &m_mainSceneAlphaRt, RENDERTARGET_TRANSITION_MODE_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(_RBP);
    R_VOL_GetAccumImages(viewInfo, (const GfxImage **)&scattering, (const GfxImage **)&extinction, (const GfxImage **)visibility);
    R_Flare_CalculateOcclusion(GfxComputeCmdBufState, viewInfo, data, &viewInfo->sceneRtInput.m_mainSceneAlphaRt, scattering, extinction, rgp.blackImage, p_rwView, 0);
    R_HW_AddResourceTransition(GfxComputeCmdBufState, p_rwView, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    m_mainSceneAlphaRt = viewInfo->sceneRtInput.m_mainSceneAlphaRt;
    R_AddRenderTargetTransition(_RBP, &m_mainSceneAlphaRt, RENDERTARGET_TRANSITION_MODE_WRITE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(_RBP);
    R_ProfEndNamedEvent(GfxComputeCmdBufState);
    state = gfxContext->state;
    R_ProfBeginNamedEvent(state, "flares");
    v13 = R_RT_Handle::GetSurface(&result);
    if ( (v13->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
      __debugbreak();
    *(GfxCmdBufContext *)visibility = *gfxContext;
    R_Flare_Draw((GfxCmdBufContext *)visibility, viewInfo, (const GfxWrappedBuffer *)&v13->1080, TECHNIQUE_EMISSIVE);
    R_ProfEndNamedEvent(state);
    if ( viewInfo->dualViewScopeState.m_fade > 0.0 )
    {
      device = state->device;
      state->depthBoundsMin = 0.0;
      state->depthBoundsMax = 1.0;
      if ( !R_IsLockedIfGfxImmediateContext(device) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 29, ASSERT_TYPE_ASSERT, "(R_IsLockedIfGfxImmediateContext( device ))", (const char *)&queryFormat, "R_IsLockedIfGfxImmediateContext( device )") )
        __debugbreak();
      state->device->m_pFunction[22].Release(state->device);
    }
    integer = r_showTris->current.integer;
    if ( ((integer - 1) & 0xFFFFFFFA) == 0 && integer != 6 )
    {
      v16 = R_RT_Handle::GetSurface(&result);
      if ( (v16->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
        __debugbreak();
      *(GfxCmdBufContext *)visibility = *gfxContext;
      R_Flare_Draw((GfxCmdBufContext *)visibility, viewInfo, (const GfxWrappedBuffer *)&v16->1080, TECHNIQUE_WIREFRAME_SOLID);
    }
    v17 = *gfxContext;
    m_mainSceneAlphaRt = (R_RT_ColorHandle)result;
    *(GfxCmdBufContext *)visibility = v17;
    R_RT_Destroy((GfxCmdBufContext *)visibility, (R_RT_BufferHandle *)&m_mainSceneAlphaRt);
  }
  R_GPU_EndTimer();
}

/*
==============
RB_Flare_MapGfxMeshFlare
==============
*/
void RB_Flare_MapGfxMeshFlare(const GfxViewInfo *viewInfo)
{
  ;
}

/*
==============
RB_Flare_UnmapGfxMeshFlare
==============
*/
void RB_Flare_UnmapGfxMeshFlare(const GfxViewInfo *viewInfo)
{
  ;
}

/*
==============
R_Flare_CalculateOcclusion
==============
*/
void R_Flare_CalculateOcclusion(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo, const GfxBackEndData *data, const R_RT_ColorHandle *sceneAlphaRT, const GfxImage *volScatterImage, const GfxImage *volExtinctionImage, const GfxImage *scopeImage, const GfxShaderBufferRWView *perFlareDataBuffer, bool vrsInlineResolve)
{
  ComputeCmdBufState *v9; 
  const GfxImage *v10; 
  R_RT_ColorHandle *v11; 
  const GfxImage *v12; 
  const GfxViewInfo *v13; 
  unsigned __int16 flareCount; 
  __m256i v15; 
  bool v16; 
  float value; 
  unsigned int v18; 
  __int64 v19; 
  unsigned int frameCount; 
  __int64 unsignedInt; 
  unsigned int v22; 
  __int64 v23; 
  int volumetricsIndex; 
  float width; 
  float height; 
  const GfxBackEndData *v27; 
  GfxTextureId textureId; 
  const R_RT_Surface *Surface; 
  const GfxImage *Image; 
  GfxImage *MagmaHeightfield; 
  ComputeShader *flareOcclusionVrsInlineResolve; 
  int v33; 
  __int64 v34; 
  __int64 v35; 
  ID3D12Resource *buffers; 
  GfxShaderBufferRWView *views; 
  GfxTexture *textures; 
  ComputeCmdBufState *v39; 
  const GfxViewInfo *v40; 
  const R_RT_ColorHandle *v41; 
  const GfxImage *v42; 
  const GfxImage *v43; 
  __int128 v44; 
  _BYTE dataa[64]; 
  int integer; 
  int v47; 
  float v48; 
  float v49; 
  int v50; 
  int firstFlare; 
  __int128 v52; 
  int v53; 
  float v54; 
  float v55; 
  float v56; 
  float v57; 

  v9 = computeState;
  v10 = volScatterImage;
  v11 = (R_RT_ColorHandle *)sceneAlphaRT;
  v12 = volExtinctionImage;
  v13 = viewInfo;
  v39 = computeState;
  flareCount = viewInfo->flareCount;
  textures = (GfxTexture *)scopeImage;
  views = (GfxShaderBufferRWView *)perFlareDataBuffer;
  v41 = sceneAlphaRT;
  buffers = (ID3D12Resource *)data;
  v40 = viewInfo;
  v42 = volScatterImage;
  v43 = volExtinctionImage;
  if ( flareCount )
  {
    v15 = *(__m256i *)viewInfo->viewParms.viewProjectionMatrix.m.m[0].v;
    *(__m256i *)&dataa[32] = *(__m256i *)viewInfo->viewParms.viewProjectionMatrix.m.row2.v;
    *(__m256i *)dataa = v15;
    integer = r_flareOcclusionScale->current.integer;
    v16 = vrsInlineResolve;
    v47 = r_flareOcclusionMin->current.integer;
    value = r_flareOcclusionExtinctionBias->current.value;
    v50 = flareCount;
    firstFlare = viewInfo->firstFlare;
    v48 = value;
    v49 = 0.0;
    if ( vrsInlineResolve )
    {
      v18 = 0;
      v19 = 0i64;
      frameCount = viewInfo->input.data->frameCount;
      do
      {
        unsignedInt = frameCount & 3;
        if ( r_vrsDebugFrameSamplePattern->current.integer != -1 )
          unsignedInt = r_vrsDebugFrameSamplePattern->current.unsignedInt;
        if ( (unsigned int)unsignedInt >= 4 )
        {
          LODWORD(v35) = 4;
          LODWORD(v34) = unsignedInt;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_variable_rate_shading.h", 76, ASSERT_TYPE_ASSERT, "(unsigned)( samplePattern ) < (unsigned)( 4 )", "samplePattern doesn't index VRS_MAX_SAMPLES\n\t%i not in [0, %i)", v34, v35) )
            __debugbreak();
        }
        v22 = s_VRSPixelToSampleOrdered_6[unsignedInt][v19];
        v23 = (int)v18;
        ++v19;
        ++v18;
        *(_DWORD *)&dataa[4 * v23 - 16] = v22;
      }
      while ( v18 < 4 );
      v9 = v39;
      v13 = v40;
      v16 = vrsInlineResolve;
      v11 = (R_RT_ColorHandle *)v41;
      v10 = v42;
      v12 = v43;
      v52 = v44;
    }
    volumetricsIndex = v13->input.data->volumetricsIndex;
    width = (float)v13->sceneViewport.width;
    height = (float)v13->sceneViewport.height;
    v54 = width;
    v53 = volumetricsIndex;
    v57 = 1.0 / height;
    v55 = height;
    v56 = 1.0 / width;
    R_UploadAndSetComputeConstants(v9, 0, dataa, 0x90u, NULL);
    buffers = (ID3D12Resource *)**((_QWORD **)&buffers[1962].IGraphicsUnknown + 1);
    R_SetComputeConstantBuffers(v9, 7, 1, &buffers);
    v27 = backEndData;
    if ( R_RT_Handle::IsValid(v11) )
      textureId = R_RT_Handle::GetSurface(v11)->m_image.m_base.textureId;
    else
      textureId = rgp.zeroImage->textureId;
    buffers = (ID3D12Resource *)R_Texture_GetResident(textureId);
    R_SetComputeTextures(v9, 1, 1, (const GfxTexture *const *)&buffers);
    if ( v16 )
    {
      Surface = R_RT_Handle::GetSurface(v11);
      buffers = (ID3D12Resource *)R_Texture_GetResident(Surface->m_color.m_fmaskImage.m_base.textureId);
      R_SetComputeTextures(v9, 2, 1, (const GfxTexture *const *)&buffers);
    }
    buffers = (ID3D12Resource *)R_Texture_GetResident(v10->textureId);
    R_SetComputeTextures(v9, 3, 1, (const GfxTexture *const *)&buffers);
    buffers = (ID3D12Resource *)R_Texture_GetResident(v12->textureId);
    R_SetComputeTextures(v9, 4, 1, (const GfxTexture *const *)&buffers);
    buffers = (ID3D12Resource *)&v27->mesh[3].perFlareDataBuffer.view;
    R_SetComputeViews(v9, 0, 1, (const GfxShaderBufferView *const *)&buffers);
    R_SetComputeRWViewsWithCounters(v9, 0, 1, (const GfxShaderBufferRWView *const *)&views, NULL);
    Image = RB_FogSpline_GetImage(&v13->fog, v13->clientIndex);
    views = (GfxShaderBufferRWView *)R_Texture_GetResident(Image->textureId);
    R_SetComputeTextures(v9, 5, 1, (const GfxTexture *const *)&views);
    textures = (GfxTexture *)R_Texture_GetResident((GfxTextureId)textures->shaderView.view);
    R_SetComputeTextures(v9, 6, 1, (const GfxTexture *const *)&textures);
    MagmaHeightfield = (GfxImage *)Particle_GetMagmaHeightfield();
    if ( !MagmaHeightfield )
      MagmaHeightfield = rgp.blackImage;
    textures = (GfxTexture *)R_Texture_GetResident(MagmaHeightfield->textureId);
    R_SetComputeTextures(v9, 7, 1, (const GfxTexture *const *)&textures);
    flareOcclusionVrsInlineResolve = rgp.flareOcclusionVrsInlineResolve;
    if ( !v16 )
      flareOcclusionVrsInlineResolve = rgp.flareOcclusion;
    R_SetComputeShader(v9, flareOcclusionVrsInlineResolve);
    v33 = v13->flareCount;
    if ( !v13->flareCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.h", 558, ASSERT_TYPE_ASSERT, "(xThreads > 0 && yThreads > 0 && zThreads > 0 && xGroupSize > 0 && yGroupSize > 0 && zGroupSize > 0)", "%s\n\tCompute thread count or group size is 0.", "xThreads > 0 && yThreads > 0 && zThreads > 0 && xGroupSize > 0 && yGroupSize > 0 && zGroupSize > 0") )
      __debugbreak();
    R_Dispatch(v9, (unsigned int)(v33 + 63) >> 6, 1u, 1u);
  }
}

/*
==============
R_Flare_Draw
==============
*/
void R_Flare_Draw(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, const GfxWrappedBuffer *perFlareDataBuffer, MaterialTechniqueType techType)
{
  GfxCmdBufState *state; 
  GfxCmdBufSourceState *source; 
  GfxFlareSurf *flareSurfs; 
  const GfxBackEndData *v10; 
  unsigned int firstFlare; 
  unsigned int v12; 
  GfxCmdBufState *v13; 
  GfxFlareSurf *v14; 
  const Material *material; 
  const MaterialTechniqueSet *techniqueSet; 
  const MaterialTechnique *TechSetTechnique; 
  GfxCmdBufState *v18; 
  GfxCmdBufInput *p_input; 
  __int64 viewStatsTarget; 
  int endSwapFrame; 
  GfxCmdBufState *v22; 
  unsigned int vertCount; 
  GfxDrawPrimArgs args; 

  if ( !viewInfo->flareCount )
    return;
  *(GfxCmdBufContext *)&args.vertexCount = *gfxContext;
  RB_SetIdentity((GfxCmdBufContext *)&args);
  state = gfxContext->state;
  R_SetViewportAndScissorSeparate(state, &viewInfo->sceneGeoViewport, &viewInfo->scissorGeoViewport);
  source = gfxContext->source;
  R_UpdateViewport(gfxContext->source, &viewInfo->sceneViewport);
  if ( state->vertDeclType != VERTDECL_SPRITE )
    state->pipelineStateDirty = 1;
  state->vertDeclType = VERTDECL_SPRITE;
  if ( viewInfo->dualViewScopeState.m_fade > 0.0 )
    R_SetDepthBoundsEnable(state, 0.0, 0.984375);
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1494, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  source->input.codeBuffers[49] = perFlareDataBuffer;
  flareSurfs = backEndData->flareSurfs;
  if ( backEndData == (const GfxBackEndData *)-5156864i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_flare.cpp", 174, ASSERT_TYPE_ASSERT, "(flareSurfStart)", (const char *)&queryFormat, "flareSurfStart") )
    __debugbreak();
  v10 = backEndData;
  firstFlare = viewInfo->firstFlare;
  v12 = firstFlare + viewInfo->flareCount;
  vertCount = backEndData->mesh[3].vb.total / backEndData->mesh[3].vertSize;
  if ( v12 > 0x300 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_flare.cpp", 186, ASSERT_TYPE_ASSERT, "( flareEnd ) <= ( ( 6*128 ) )", "%s <= %s\n\t%i, %i", "flareEnd", "GFX_FRAME_FLARE_SURF_LIMIT", firstFlare + viewInfo->flareCount, 768) )
    __debugbreak();
  v13 = gfxContext->state;
  v13->techType = techType;
  if ( firstFlare >= v12 )
    goto LABEL_44;
  while ( 1 )
  {
    v14 = &flareSurfs[firstFlare];
    material = v14->material;
    if ( !v14->material && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 464, ASSERT_TYPE_ASSERT, "(material)", (const char *)&queryFormat, "material") )
      __debugbreak();
    if ( !material->techniqueSet && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 465, ASSERT_TYPE_ASSERT, "( ( material->techniqueSet ) )", "( material->name ) = %s", material->name) )
      __debugbreak();
    techniqueSet = material->techniqueSet;
    if ( !techniqueSet && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 506, ASSERT_TYPE_ASSERT, "(techSet)", (const char *)&queryFormat, "techSet") )
      __debugbreak();
    TechSetTechnique = Material_GetTechSetTechnique(techniqueSet, techType);
    if ( TechSetTechnique )
      break;
    v13 = gfxContext->state;
    ++firstFlare;
LABEL_43:
    if ( firstFlare >= v12 )
      goto LABEL_44;
  }
  v18 = gfxContext->state;
  v18->material = material;
  v18->technique = TechSetTechnique;
  if ( !v18->material && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_flare.cpp", 205, ASSERT_TYPE_ASSERT, "(gfxContext.state->material)", (const char *)&queryFormat, "gfxContext.state->material") )
    __debugbreak();
  v13 = v18;
  if ( !v18->technique && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_flare.cpp", 206, ASSERT_TYPE_ASSERT, "( ( gfxContext.state->technique ) )", "( gfxContext.state->material->name ) = %s", v18->material->name) )
  {
    __debugbreak();
    v13 = gfxContext->state;
  }
  R_ProfBeginMaterial(v13);
  *(GfxCmdBufContext *)&args.vertexCount = *gfxContext;
  if ( !R_SetupPass((GfxCmdBufContext *)&args) )
    goto LABEL_43;
  p_input = &gfxContext->source->input;
  if ( gfxContext->source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1494, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
  {
    __debugbreak();
    v13 = gfxContext->state;
  }
  p_input->codeBuffers[48] = &v10->mesh[3].perEmitterBuffer;
  R_SetMeshStream(v13, &v10->mesh[3], vertCount);
  *(GfxCmdBufContext *)&args.vertexCount = *gfxContext;
  R_SetupPassStableArgsInternal((GfxCmdBufContext *)&args, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_flare.cpp(226)");
  *(GfxCmdBufContext *)&args.vertexCount = *gfxContext;
  R_SetupPassPerObjectArgsInternal((GfxCmdBufContext *)&args, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_flare.cpp(227)");
  while ( 1 )
  {
    viewStatsTarget = gfxContext->source->viewStatsTarget;
    endSwapFrame = gfxContext->source->input.data->endSwapFrame;
    args.vertexCount = v14->args.vertexCount;
    args.primCount = v14->args.primCount;
    args.baseIndex = v14->args.baseIndex;
    args.vertIndexBase = v14->args.vertIndexBase;
    args.trackFrameIndex = endSwapFrame;
    if ( (unsigned int)(viewStatsTarget + 128) > 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "char __cdecl truncate_cast_impl<char,enum GfxViewStatsTarget>(enum GfxViewStatsTarget)", "signed", (char)viewStatsTarget, "signed", viewStatsTarget) )
      __debugbreak();
    args.viewStatsTarget = viewStatsTarget;
    v22 = gfxContext->state;
    *(_WORD *)&args.primStatsTarget = 262;
    R_DrawIndexedPrimitive(v22, &args);
    ++firstFlare;
    v13 = v22;
    v14 = &flareSurfs[firstFlare];
    if ( firstFlare >= v12 )
      break;
    if ( v14->material != v22->material )
      goto LABEL_43;
  }
LABEL_44:
  R_ProfEndMaterial(v13);
}

