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
  const R_RT_Surface *Surface; 
  const GfxShaderBufferRWView *p_rwView; 
  ComputeCmdBufState *GfxComputeCmdBufState; 
  GfxCmdBufState *state; 
  const R_RT_Surface *v16; 
  char v19; 
  const GfxDevice *device; 
  int integer; 
  const R_RT_Surface *v25; 
  GfxImage *visibility[2]; 
  GfxImage *extinction; 
  GfxImage *scattering; 
  R_RT_ColorHandle v32; 
  R_RT_BufferHandle result; 

  _R14 = gfxContext;
  _R15 = viewInfo;
  R_GPU_BeginTimer(GPU_TIMER_FLARES);
  if ( _R15->flareCount )
  {
    __asm { vmovaps [rsp+118h+var_48], xmm6 }
    R_RT_CreateBufferInternal(&result, 8u, 0x100u, GFX_DATA_FORMAT_R32_UINT, R_RT_Flag_BufferStructured|R_RT_Flag_RWView, R_RT_FlagInternal_None, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "per flare rw data", 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_flare.cpp(260)");
    Surface = R_RT_Handle::GetSurface(&result);
    if ( (Surface->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 589, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
      __debugbreak();
    if ( (Surface->m_rtFlags & 0x1000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 590, ASSERT_TYPE_ASSERT, "(surface->m_rtFlags & R_RT_Flag_RWView)", (const char *)&queryFormat, "surface->m_rtFlags & R_RT_Flag_RWView") )
      __debugbreak();
    __asm
    {
      vmovups xmm0, xmmword ptr [r14]
      vpextrq rbp, xmm0, 1
    }
    p_rwView = &Surface->m_buffer.m_wrappedBuffer.rwView;
    GfxComputeCmdBufState = R_GetGfxComputeCmdBufState(_RBP);
    R_ProfBeginNamedEvent(GfxComputeCmdBufState, "Flare occlusion");
    R_HW_AddResourceTransition(GfxComputeCmdBufState, p_rwView, 0xFFFFFFFF, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    __asm
    {
      vmovups ymm0, ymmword ptr [r15+30E0h]
      vmovups [rsp+118h+var_98], ymm0
    }
    R_AddRenderTargetTransition(_RBP, &v32, RENDERTARGET_TRANSITION_MODE_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(_RBP);
    R_VOL_GetAccumImages(_R15, (const GfxImage **)&scattering, (const GfxImage **)&extinction, (const GfxImage **)visibility);
    R_Flare_CalculateOcclusion(GfxComputeCmdBufState, _R15, data, &_R15->sceneRtInput.m_mainSceneAlphaRt, scattering, extinction, rgp.blackImage, p_rwView, 0);
    R_HW_AddResourceTransition(GfxComputeCmdBufState, p_rwView, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    __asm
    {
      vmovups ymm0, ymmword ptr [r15+30E0h]
      vmovups [rsp+118h+var_98], ymm0
    }
    R_AddRenderTargetTransition(_RBP, &v32, RENDERTARGET_TRANSITION_MODE_WRITE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(_RBP);
    R_ProfEndNamedEvent(GfxComputeCmdBufState);
    state = _R14->state;
    R_ProfBeginNamedEvent(state, "flares");
    v16 = R_RT_Handle::GetSurface(&result);
    if ( (v16->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
      __debugbreak();
    __asm
    {
      vmovups xmm0, xmmword ptr [r14]
      vmovups xmmword ptr [rsp+118h+visibility], xmm0
    }
    R_Flare_Draw((GfxCmdBufContext *)visibility, _R15, (const GfxWrappedBuffer *)&v16->1080, TECHNIQUE_EMISSIVE);
    R_ProfEndNamedEvent(state);
    __asm
    {
      vxorps  xmm6, xmm6, xmm6
      vcomiss xmm6, dword ptr [r15+9ACh]
    }
    if ( v19 )
    {
      device = state->device;
      state->depthBoundsMin = 0.0;
      state->depthBoundsMax = 1.0;
      if ( !R_IsLockedIfGfxImmediateContext(device) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 29, ASSERT_TYPE_ASSERT, "(R_IsLockedIfGfxImmediateContext( device ))", (const char *)&queryFormat, "R_IsLockedIfGfxImmediateContext( device )") )
        __debugbreak();
      __asm
      {
        vmovss  xmm2, cs:__real@3f800000
        vxorps  xmm1, xmm1, xmm1
      }
      state->device->m_pFunction[22].Release(state->device);
    }
    __asm { vmovaps xmm6, [rsp+118h+var_48] }
    integer = r_showTris->current.integer;
    if ( ((integer - 1) & 0xFFFFFFFA) == 0 && integer != 6 )
    {
      v25 = R_RT_Handle::GetSurface(&result);
      if ( (v25->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
        __debugbreak();
      __asm
      {
        vmovups xmm0, xmmword ptr [r14]
        vmovups xmmword ptr [rsp+118h+visibility], xmm0
      }
      R_Flare_Draw((GfxCmdBufContext *)visibility, _R15, (const GfxWrappedBuffer *)&v25->1080, TECHNIQUE_WIREFRAME_SOLID);
    }
    __asm
    {
      vmovups ymm0, ymmword ptr [rsp+118h+result.baseclass_0.m_surfaceID]
      vmovups xmm1, xmmword ptr [r14]
      vmovups [rsp+118h+var_98], ymm0
      vmovups xmmword ptr [rsp+118h+visibility], xmm1
    }
    R_RT_Destroy((GfxCmdBufContext *)visibility, (R_RT_BufferHandle *)&v32);
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
  ComputeCmdBufState *v10; 
  const GfxImage *v11; 
  R_RT_ColorHandle *v12; 
  const GfxImage *v13; 
  const GfxViewInfo *v14; 
  unsigned __int16 flareCount; 
  bool v23; 
  unsigned int v26; 
  __int64 v27; 
  unsigned int frameCount; 
  __int64 unsignedInt; 
  unsigned int v30; 
  __int64 v31; 
  int volumetricsIndex; 
  const GfxBackEndData *v40; 
  GfxTextureId textureId; 
  const R_RT_Surface *Surface; 
  const GfxImage *Image; 
  GfxImage *MagmaHeightfield; 
  ComputeShader *flareOcclusionVrsInlineResolve; 
  int v46; 
  __int64 v47; 
  __int64 v48; 
  ID3D12Resource *buffers; 
  GfxShaderBufferRWView *views; 
  GfxTexture *textures; 
  ComputeCmdBufState *v52; 
  const GfxViewInfo *v53; 
  const R_RT_ColorHandle *v54; 
  const GfxImage *v55; 
  const GfxImage *v56; 
  _BYTE dataa[64]; 
  int v63; 
  int firstFlare; 
  int v66; 

  v10 = computeState;
  v11 = volScatterImage;
  v12 = (R_RT_ColorHandle *)sceneAlphaRT;
  v13 = volExtinctionImage;
  v14 = viewInfo;
  v52 = computeState;
  flareCount = viewInfo->flareCount;
  textures = (GfxTexture *)scopeImage;
  views = (GfxShaderBufferRWView *)perFlareDataBuffer;
  v54 = sceneAlphaRT;
  buffers = (ID3D12Resource *)data;
  v53 = viewInfo;
  v55 = volScatterImage;
  v56 = volExtinctionImage;
  if ( flareCount )
  {
    _RAX = r_flareOcclusionScale;
    __asm
    {
      vmovups ymm0, ymmword ptr [rdx+80h]
      vmovups ymm1, ymmword ptr [rdx+0A0h]
      vmovups [rbp+70h+var_C0], ymm1
      vmovups [rbp+70h+data], ymm0
      vmovss  xmm0, dword ptr [rax+28h]
    }
    _RAX = r_flareOcclusionMin;
    __asm
    {
      vmovss  [rbp+70h+var_A0], xmm0
      vmovss  xmm1, dword ptr [rax+28h]
    }
    _RAX = r_flareOcclusionExtinctionBias;
    v23 = vrsInlineResolve;
    __asm
    {
      vmovss  [rbp+70h+var_9C], xmm1
      vxorps  xmm1, xmm1, xmm1
      vmovss  xmm0, dword ptr [rax+28h]
    }
    v63 = flareCount;
    firstFlare = viewInfo->firstFlare;
    __asm
    {
      vmovss  [rbp+70h+var_98], xmm0
      vmovss  [rbp+70h+var_94], xmm1
    }
    if ( vrsInlineResolve )
    {
      v26 = 0;
      v27 = 0i64;
      frameCount = viewInfo->input.data->frameCount;
      do
      {
        unsignedInt = frameCount & 3;
        if ( r_vrsDebugFrameSamplePattern->current.integer != -1 )
          unsignedInt = r_vrsDebugFrameSamplePattern->current.unsignedInt;
        if ( (unsigned int)unsignedInt >= 4 )
        {
          LODWORD(v48) = 4;
          LODWORD(v47) = unsignedInt;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_variable_rate_shading.h", 76, ASSERT_TYPE_ASSERT, "(unsigned)( samplePattern ) < (unsigned)( 4 )", "samplePattern doesn't index VRS_MAX_SAMPLES\n\t%i not in [0, %i)", v47, v48) )
            __debugbreak();
        }
        v30 = s_VRSPixelToSampleOrdered_6[unsignedInt][v27];
        v31 = (int)v26;
        ++v27;
        ++v26;
        *(_DWORD *)&dataa[4 * v31 - 16] = v30;
      }
      while ( v26 < 4 );
      __asm { vmovups xmm0, [rbp+70h+var_F0] }
      v10 = v52;
      v14 = v53;
      v23 = vrsInlineResolve;
      v12 = (R_RT_ColorHandle *)v54;
      v11 = v55;
      v13 = v56;
      __asm { vmovups [rbp+70h+var_80], xmm0 }
    }
    __asm
    {
      vmovss  xmm1, cs:__real@3f800000
      vxorps  xmm0, xmm0, xmm0
      vxorps  xmm2, xmm2, xmm2
    }
    volumetricsIndex = v14->input.data->volumetricsIndex;
    __asm
    {
      vcvtsi2ss xmm0, xmm0, rax
      vcvtsi2ss xmm2, xmm2, rax
      vmovss  [rbp+70h+var_60], xmm0
      vdivss  xmm0, xmm1, xmm0
      vdivss  xmm1, xmm1, xmm2
    }
    v66 = volumetricsIndex;
    __asm
    {
      vmovss  [rbp+70h+var_54], xmm1
      vmovss  [rbp+70h+var_5C], xmm2
      vmovss  [rbp+70h+var_58], xmm0
    }
    R_UploadAndSetComputeConstants(v10, 0, dataa, 0x90u, NULL);
    buffers = (ID3D12Resource *)**((_QWORD **)&buffers[1962].IGraphicsUnknown + 1);
    R_SetComputeConstantBuffers(v10, 7, 1, &buffers);
    v40 = backEndData;
    if ( R_RT_Handle::IsValid(v12) )
      textureId = R_RT_Handle::GetSurface(v12)->m_image.m_base.textureId;
    else
      textureId = rgp.zeroImage->textureId;
    buffers = (ID3D12Resource *)R_Texture_GetResident(textureId);
    R_SetComputeTextures(v10, 1, 1, (const GfxTexture *const *)&buffers);
    if ( v23 )
    {
      Surface = R_RT_Handle::GetSurface(v12);
      buffers = (ID3D12Resource *)R_Texture_GetResident(Surface->m_color.m_fmaskImage.m_base.textureId);
      R_SetComputeTextures(v10, 2, 1, (const GfxTexture *const *)&buffers);
    }
    buffers = (ID3D12Resource *)R_Texture_GetResident(v11->textureId);
    R_SetComputeTextures(v10, 3, 1, (const GfxTexture *const *)&buffers);
    buffers = (ID3D12Resource *)R_Texture_GetResident(v13->textureId);
    R_SetComputeTextures(v10, 4, 1, (const GfxTexture *const *)&buffers);
    buffers = (ID3D12Resource *)&v40->mesh[3].perFlareDataBuffer.view;
    R_SetComputeViews(v10, 0, 1, (const GfxShaderBufferView *const *)&buffers);
    R_SetComputeRWViewsWithCounters(v10, 0, 1, (const GfxShaderBufferRWView *const *)&views, NULL);
    Image = RB_FogSpline_GetImage(&v14->fog, v14->clientIndex);
    views = (GfxShaderBufferRWView *)R_Texture_GetResident(Image->textureId);
    R_SetComputeTextures(v10, 5, 1, (const GfxTexture *const *)&views);
    textures = (GfxTexture *)R_Texture_GetResident((GfxTextureId)textures->shaderView.view);
    R_SetComputeTextures(v10, 6, 1, (const GfxTexture *const *)&textures);
    MagmaHeightfield = (GfxImage *)Particle_GetMagmaHeightfield();
    if ( !MagmaHeightfield )
      MagmaHeightfield = rgp.blackImage;
    textures = (GfxTexture *)R_Texture_GetResident(MagmaHeightfield->textureId);
    R_SetComputeTextures(v10, 7, 1, (const GfxTexture *const *)&textures);
    flareOcclusionVrsInlineResolve = rgp.flareOcclusionVrsInlineResolve;
    if ( !v23 )
      flareOcclusionVrsInlineResolve = rgp.flareOcclusion;
    R_SetComputeShader(v10, flareOcclusionVrsInlineResolve);
    v46 = v14->flareCount;
    if ( !v14->flareCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.h", 558, ASSERT_TYPE_ASSERT, "(xThreads > 0 && yThreads > 0 && zThreads > 0 && xGroupSize > 0 && yGroupSize > 0 && zGroupSize > 0)", "%s\n\tCompute thread count or group size is 0.", "xThreads > 0 && yThreads > 0 && zThreads > 0 && xGroupSize > 0 && yGroupSize > 0 && zGroupSize > 0") )
      __debugbreak();
    R_Dispatch(v10, (unsigned int)(v46 + 63) >> 6, 1u, 1u);
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
  bool v11; 
  GfxFlareSurf *flareSurfs; 
  const GfxBackEndData *v15; 
  unsigned int firstFlare; 
  unsigned int v17; 
  GfxCmdBufState *v18; 
  GfxFlareSurf *v19; 
  const Material *material; 
  const MaterialTechniqueSet *techniqueSet; 
  const MaterialTechnique *TechSetTechnique; 
  GfxCmdBufState *v23; 
  __int64 p_input; 
  __int64 viewStatsTarget; 
  unsigned int endSwapFrame; 
  GfxCmdBufState *v30; 
  unsigned int vertCount; 
  GfxDrawPrimArgs args; 

  _RBX = viewInfo;
  _R14 = gfxContext;
  if ( !viewInfo->flareCount )
    return;
  __asm
  {
    vmovups xmm0, xmmword ptr [rcx]
    vmovups xmmword ptr [rsp+0C8h+args.vertexCount], xmm0
  }
  RB_SetIdentity((GfxCmdBufContext *)&args);
  state = _R14->state;
  R_SetViewportAndScissorSeparate(state, &_RBX->sceneGeoViewport, &_RBX->scissorGeoViewport);
  source = _R14->source;
  R_UpdateViewport(_R14->source, &_RBX->sceneViewport);
  v11 = state->vertDeclType < VERTDECL_SPRITE;
  if ( state->vertDeclType != VERTDECL_SPRITE )
    state->pipelineStateDirty = 1;
  __asm { vxorps  xmm1, xmm1, xmm1; depthBoundsMin }
  state->vertDeclType = VERTDECL_SPRITE;
  __asm { vcomiss xmm1, dword ptr [rbx+9ACh] }
  if ( v11 )
  {
    __asm { vmovss  xmm2, cs:__real@3f7c0000; depthBoundsMax }
    R_SetDepthBoundsEnable(state, *(const float *)&_XMM1, *(const float *)&_XMM2);
  }
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1494, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  source->input.codeBuffers[49] = perFlareDataBuffer;
  flareSurfs = backEndData->flareSurfs;
  if ( backEndData == (const GfxBackEndData *)-5156864i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_flare.cpp", 174, ASSERT_TYPE_ASSERT, "(flareSurfStart)", (const char *)&queryFormat, "flareSurfStart") )
    __debugbreak();
  v15 = backEndData;
  firstFlare = _RBX->firstFlare;
  v17 = firstFlare + _RBX->flareCount;
  vertCount = backEndData->mesh[3].vb.total / backEndData->mesh[3].vertSize;
  if ( v17 > 0x300 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_flare.cpp", 186, ASSERT_TYPE_ASSERT, "( flareEnd ) <= ( ( 6*128 ) )", "%s <= %s\n\t%i, %i", "flareEnd", "GFX_FRAME_FLARE_SURF_LIMIT", firstFlare + _RBX->flareCount, 768) )
    __debugbreak();
  v18 = _R14->state;
  v18->techType = techType;
  if ( firstFlare >= v17 )
    goto LABEL_44;
  while ( 1 )
  {
    v19 = &flareSurfs[firstFlare];
    material = v19->material;
    if ( !v19->material && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 464, ASSERT_TYPE_ASSERT, "(material)", (const char *)&queryFormat, "material") )
      __debugbreak();
    if ( !material->techniqueSet && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 465, ASSERT_TYPE_ASSERT, "( ( material->techniqueSet ) )", "( material->name ) = %s", material->name) )
      __debugbreak();
    techniqueSet = material->techniqueSet;
    if ( !techniqueSet && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 506, ASSERT_TYPE_ASSERT, "(techSet)", (const char *)&queryFormat, "techSet") )
      __debugbreak();
    TechSetTechnique = Material_GetTechSetTechnique(techniqueSet, techType);
    if ( TechSetTechnique )
      break;
    v18 = _R14->state;
    ++firstFlare;
LABEL_43:
    if ( firstFlare >= v17 )
      goto LABEL_44;
  }
  v23 = _R14->state;
  v23->material = material;
  v23->technique = TechSetTechnique;
  if ( !v23->material && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_flare.cpp", 205, ASSERT_TYPE_ASSERT, "(gfxContext.state->material)", (const char *)&queryFormat, "gfxContext.state->material") )
    __debugbreak();
  v18 = v23;
  if ( !v23->technique && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_flare.cpp", 206, ASSERT_TYPE_ASSERT, "( ( gfxContext.state->technique ) )", "( gfxContext.state->material->name ) = %s", v23->material->name) )
  {
    __debugbreak();
    v18 = _R14->state;
  }
  R_ProfBeginMaterial(v18);
  __asm
  {
    vmovups xmm0, xmmword ptr [r14]
    vmovups xmmword ptr [rsp+0C8h+args.vertexCount], xmm0
  }
  if ( !R_SetupPass((GfxCmdBufContext *)&args) )
    goto LABEL_43;
  p_input = (__int64)&_R14->source->input;
  if ( _R14->source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1494, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
  {
    __debugbreak();
    v18 = _R14->state;
  }
  *(_QWORD *)(p_input + 7552) = &v15->mesh[3].perEmitterBuffer;
  R_SetMeshStream(v18, &v15->mesh[3], vertCount);
  __asm
  {
    vmovups xmm0, xmmword ptr [r14]
    vmovups xmmword ptr [rsp+0C8h+args.vertexCount], xmm0
  }
  R_SetupPassStableArgsInternal((GfxCmdBufContext *)&args, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_flare.cpp(226)");
  __asm
  {
    vmovups xmm0, xmmword ptr [r14]
    vmovups xmmword ptr [rsp+0C8h+args.vertexCount], xmm0
  }
  R_SetupPassPerObjectArgsInternal((GfxCmdBufContext *)&args, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_flare.cpp(227)");
  while ( 1 )
  {
    viewStatsTarget = _R14->source->viewStatsTarget;
    endSwapFrame = _R14->source->input.data->endSwapFrame;
    args.vertexCount = v19->args.vertexCount;
    args.primCount = v19->args.primCount;
    args.baseIndex = v19->args.baseIndex;
    args.vertIndexBase = v19->args.vertIndexBase;
    args.trackFrameIndex = endSwapFrame;
    if ( (unsigned int)(viewStatsTarget + 128) > 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "char __cdecl truncate_cast_impl<char,enum GfxViewStatsTarget>(enum GfxViewStatsTarget)", "signed", (char)viewStatsTarget, "signed", viewStatsTarget) )
      __debugbreak();
    args.viewStatsTarget = viewStatsTarget;
    v30 = _R14->state;
    *(_WORD *)&args.primStatsTarget = 262;
    R_DrawIndexedPrimitive(v30, &args);
    ++firstFlare;
    v18 = v30;
    v19 = &flareSurfs[firstFlare];
    if ( firstFlare >= v17 )
      break;
    if ( v19->material != v30->material )
      goto LABEL_43;
  }
LABEL_44:
  R_ProfEndMaterial(v18);
}

