/*
==============
R_DeferredLighting_SetupOverlappingInputCustom
==============
*/

void __fastcall R_DeferredLighting_SetupOverlappingInputCustom(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo, EffectLightingProcessType processType, const GfxImage *sunShadowImage, const GfxImage *translucentSunShadowImage, const GfxImage *translucentSunShadowMaskImage, const GfxWrappedBuffer *lightsClusterBuffer)
{
  ?R_DeferredLighting_SetupOverlappingInputCustom@@YAXPEAUComputeCmdBufState@@PEBUGfxViewInfo@@W4EffectLightingProcessType@@PEBUGfxImage@@33PEBUGfxWrappedBuffer@@@Z(computeState, viewInfo, processType, sunShadowImage, translucentSunShadowImage, translucentSunShadowMaskImage, lightsClusterBuffer);
}

/*
==============
R_InitEffectLighting
==============
*/

void R_InitEffectLighting(void)
{
  ?R_InitEffectLighting@@YAXXZ();
}

/*
==============
R_EffectLighting_Process
==============
*/

void __fastcall R_EffectLighting_Process(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo, const bool useReflectionProbeOverride, EffectLightingProcessType processType, const GfxImage *const *imagesRead, const GfxImage *const *imagesWrite, const GfxImage *const *lightGenImages, const EffectLightingMultiLightGridTempBuffers *multiLightGridTempBuffers)
{
  ?R_EffectLighting_Process@@YAXPEAUComputeCmdBufState@@PEBUGfxViewInfo@@_NW4EffectLightingProcessType@@PEBQEBUGfxImage@@44PEBUEffectLightingMultiLightGridTempBuffers@@@Z(computeState, viewInfo, useReflectionProbeOverride, processType, imagesRead, imagesWrite, lightGenImages, multiLightGridTempBuffers);
}

/*
==============
R_EffectLighting_GetFogLightmapImage
==============
*/

const GfxImage *__fastcall R_EffectLighting_GetFogLightmapImage()
{
  return ?R_EffectLighting_GetFogLightmapImage@@YAPEBUGfxImage@@XZ();
}

/*
==============
R_EffectLighting_FreeRts
==============
*/

void R_EffectLighting_FreeRts(void)
{
  ?R_EffectLighting_FreeRts@@YAXXZ();
}

/*
==============
R_EffectLighting_GetImage
==============
*/

const GfxImage *__fastcall R_EffectLighting_GetImage(GfxMeshLightingType lightingType)
{
  return ?R_EffectLighting_GetImage@@YAPEBUGfxImage@@W4GfxMeshLightingType@@@Z(lightingType);
}

/*
==============
R_DestroyEffectLighting
==============
*/

void R_DestroyEffectLighting(void)
{
  ?R_DestroyEffectLighting@@YAXXZ();
}

/*
==============
R_DeferredLighting_SetupSharedInputCustom
==============
*/

bool __fastcall R_DeferredLighting_SetupSharedInputCustom(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo, const GfxImage *spotShadowArrayImage)
{
  return ?R_DeferredLighting_SetupSharedInputCustom@@YA_NPEAUComputeCmdBufState@@PEBUGfxViewInfo@@PEBUGfxImage@@@Z(computeState, viewInfo, spotShadowArrayImage);
}

/*
==============
RB_EffectLighting
==============
*/

void __fastcall RB_EffectLighting(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo)
{
  ?RB_EffectLighting@@YAXPEAUComputeCmdBufState@@PEBUGfxViewInfo@@@Z(computeState, viewInfo);
}

/*
==============
R_EffectLighting_LazyAllocRts
==============
*/

void R_EffectLighting_LazyAllocRts(void)
{
  ?R_EffectLighting_LazyAllocRts@@YAXXZ();
}

/*
==============
R_EffectLighting_SetConstantBuffer
==============
*/

bool __fastcall R_EffectLighting_SetConstantBuffer(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo)
{
  return ?R_EffectLighting_SetConstantBuffer@@YA_NPEAUComputeCmdBufState@@PEBUGfxViewInfo@@@Z(computeState, viewInfo);
}

/*
==============
RB_EffectLighting
==============
*/
void RB_EffectLighting(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo)
{
  const GfxBackEndData *v5; 
  char v6; 
  __int64 v7; 
  unsigned int *v8; 
  __int64 v9; 
  unsigned int *v10; 
  const GfxImage *SpotShadowArrayImageDraw3D; 
  GfxImage *iesLookupTexture; 
  const R_RT_Surface *Surface; 
  const GfxBackEndData *v15; 
  bool v17; 
  const dvar_t *v18; 
  bool v19; 
  __int64 v20; 
  const R_RT_Surface *v21; 
  const GfxWrappedBuffer *v22; 
  const R_RT_Surface *v23; 
  const GfxWrappedBuffer *v24; 
  const R_RT_Surface *v25; 
  const R_RT_Surface *v26; 
  const R_RT_Surface *v27; 
  const R_RT_Surface *v28; 
  __int64 i; 
  const GfxTexture *Resident; 
  GfxImage **v31; 
  __int64 v32; 
  const GfxTexture *v33; 
  __int64 j; 
  const GfxTexture *v35; 
  GfxImage **v36; 
  __int64 v37; 
  const GfxTexture *v38; 
  __int64 k; 
  const GfxTexture *v40; 
  GfxImage **v41; 
  __int64 v42; 
  const GfxTexture *v43; 
  __int64 m; 
  const GfxTexture *v45; 
  GfxImage **v46; 
  __int64 v47; 
  const GfxTexture *v48; 
  __int64 n; 
  const GfxTexture *v50; 
  GfxImage **v51; 
  __int64 v52; 
  const GfxTexture *v53; 
  __int64 ii; 
  const GfxTexture *v55; 
  GfxImage **v56; 
  __int64 v57; 
  const GfxTexture *v58; 
  __int64 jj; 
  const GfxTexture *v60; 
  GfxImage **v61; 
  __int64 v62; 
  const GfxTexture *v63; 
  __int64 kk; 
  const GfxTexture *v65; 
  GfxImage **v66; 
  __int64 v67; 
  const GfxTexture *v68; 
  GfxShaderBufferView **v69; 
  __int64 v70; 
  const GfxTexture *v71; 
  GfxImage **v72; 
  __int64 v73; 
  const GfxTexture *v74; 
  __int64 mm; 
  const GfxTexture *v76; 
  GfxImage **v77; 
  __int64 v78; 
  const GfxTexture *v79; 
  __int64 nn; 
  const GfxTexture *v81; 
  GfxImage **v82; 
  __int64 v83; 
  const GfxTexture *v84; 
  __int64 i1; 
  const GfxTexture *v86; 
  GfxImage **v87; 
  __int64 v88; 
  const GfxTexture *v89; 
  __int64 i2; 
  const GfxTexture *v91; 
  GfxImage **v92; 
  __int64 v93; 
  const GfxTexture *v94; 
  __int64 i3; 
  const GfxTexture *v96; 
  GfxImage **v97; 
  const GfxTexture *v98; 
  GfxShaderBufferView *v99[2]; 
  GfxShaderBufferView *v100[2]; 
  GfxShaderBufferView *views[2]; 
  GfxShaderBufferView *v102; 
  ID3D12Resource *buffers; 
  EffectLightingMultiLightGridTempBuffers multiLightGridTempBuffers; 
  GfxShaderBufferView *p_view; 
  GfxTexture *textures; 
  GfxTexture *v107[2]; 
  GfxTexture *data[2]; 
  GfxImage *lightGenImages[2]; 
  __int64 v110; 
  GfxImage *v111[3]; 

  Sys_ProfBeginNamedEvent(0xFFFF7F50, "Fx Lighting");
  v5 = viewInfo->input.data;
  v6 = 0;
  v7 = 0i64;
  v8 = v5->mesh[0].lightingCount[0];
  while ( !*v8 )
  {
    ++v7;
    ++v8;
    if ( v7 >= 6 )
      goto LABEL_6;
  }
  v6 = 1;
LABEL_6:
  v9 = 0i64;
  v10 = v5->mesh[0].lightingCount[1];
  while ( !*v10 )
  {
    ++v9;
    ++v10;
    if ( v9 >= 6 )
    {
      if ( !v6 )
        goto LABEL_122;
      break;
    }
  }
  SpotShadowArrayImageDraw3D = R_GetSpotShadowArrayImageDraw3D();
  if ( RB_GpuLightGrid_DataAvailable(viewInfo) )
  {
    iesLookupTexture = g_worldDraw->iesLookupTexture;
    textures = (GfxTexture *)R_Texture_GetResident(SpotShadowArrayImageDraw3D->textureId);
    R_SetComputeTextures(computeState, 35, 1, (const GfxTexture *const *)&textures);
    data[0] = (GfxTexture *)R_Texture_GetResident(iesLookupTexture->textureId);
    R_SetComputeTextures(computeState, 26, 1, (const GfxTexture *const *)data);
    v107[0] = (GfxTexture *)R_Texture_GetResident(rgp.hgPhaseFunction->textureId);
    R_SetComputeTextures(computeState, 27, 1, (const GfxTexture *const *)v107);
    views[0] = &R_ReflectionProbe_GetInstanceBuffer(computeState->data->reflectionProbeFrameIndex)->view;
    R_SetComputeViews(computeState, 10, 1, (const GfxShaderBufferView *const *)views);
    v100[0] = &R_ReflectionProbe_GetObbBuffer(computeState->data->reflectionProbeFrameIndex)->view;
    R_SetComputeViews(computeState, 11, 1, (const GfxShaderBufferView *const *)v100);
    v99[0] = &R_ReflectionProbe_GetLightgridOverrideBuffer(computeState->data->reflectionProbeFrameIndex)->view;
    R_SetComputeViews(computeState, 12, 1, (const GfxShaderBufferView *const *)v99);
    p_view = &R_ReflectionProbe_GetSHBuffer()->view;
    R_SetComputeViews(computeState, 31, 1, (const GfxShaderBufferView *const *)&p_view);
    v102 = &R_CompressedSunShadow_GetBuffer()->view;
    R_SetComputeViews(computeState, 34, 1, (const GfxShaderBufferView *const *)&v102);
    buffers = viewInfo->input.data->globalSceneConstantBuffer->buffer;
    R_SetComputeConstantBuffers(computeState, 7, 1, &buffers);
    R_GPU_BeginTimer(GPU_TIMER_EFFECT_LIGHTING);
    R_ProfBeginNamedEvent(computeState, "effect lighting");
    __asm { vpxor   xmm0, xmm0, xmm0 }
    *(_OWORD *)v100 = _XMM0;
    views[0] = (GfxShaderBufferView *)&R_RT_Handle::GetSurface(&s_lightmap)->m_image;
    views[1] = (GfxShaderBufferView *)&R_RT_Handle::GetSurface(&stru_152646720)->m_image;
    v99[0] = (GfxShaderBufferView *)&R_RT_Handle::GetSurface(&s_lightmap_tmp)->m_image;
    v99[1] = (GfxShaderBufferView *)&R_RT_Handle::GetSurface(&stru_152646760)->m_image;
    R_VOL_GetAccumImages(viewInfo, (const GfxImage **)&buffers, (const GfxImage **)&v102, (const GfxImage **)&p_view);
    v111[0] = (GfxImage *)buffers;
    v111[1] = (GfxImage *)v102;
    Surface = R_RT_Handle::GetSurface(&s_fogLightmap);
    v110 = 0i64;
    v111[2] = &Surface->m_image.m_base;
    v15 = computeState->data;
    __asm { vpxor   xmm0, xmm0, xmm0 }
    *(_OWORD *)lightGenImages = _XMM0;
    v17 = R_ReflectionProbe_UseLightgridOverride(v15->reflectionProbeFrameIndex);
    v18 = fx_lighting_shScale;
    v19 = v17;
    if ( !fx_lighting_shScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 669, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v18);
    *(DvarValue *)v107 = v18->current;
    *(_OWORD *)data = *(_OWORD *)v107;
    R_UploadAndSetComputeConstants(computeState, 0, data, 0x10u, NULL);
    v20 = 3i64;
    if ( RB_GpuLightGrid_DataAvailable(viewInfo) )
    {
      if ( R_LGV_UseMultiLightGridSampling() )
      {
        v21 = R_RT_Handle::GetSurface(&s_lightGridElemsColor);
        if ( (v21->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
          __debugbreak();
        v22 = (const GfxWrappedBuffer *)&v21->1080;
        multiLightGridTempBuffers.m_lightGridElements[0] = (const GfxWrappedRWBuffer *)&v21->1080;
        v23 = R_RT_Handle::GetSurface(&s_lightGridElemsSh);
        if ( (v23->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
          __debugbreak();
        v24 = (const GfxWrappedBuffer *)&v23->1080;
        multiLightGridTempBuffers.m_lightGridElements[1] = (const GfxWrappedRWBuffer *)&v23->1080;
        v25 = R_RT_Handle::GetSurface(&s_lightGridDataColor);
        if ( (v25->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
          __debugbreak();
        multiLightGridTempBuffers.m_lightingData[0] = (const GfxWrappedRWBuffer *)&v25->1080;
        v26 = R_RT_Handle::GetSurface(&s_lightGridDataSh);
        if ( (v26->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
          __debugbreak();
        multiLightGridTempBuffers.m_lightingData[1] = (const GfxWrappedRWBuffer *)&v26->1080;
        v27 = R_RT_Handle::GetSurface(&s_lightGridAlphaColor);
        if ( (v27->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
          __debugbreak();
        multiLightGridTempBuffers.m_lightingAlpha[0] = (const GfxWrappedRWBuffer *)&v27->1080;
        v28 = R_RT_Handle::GetSurface(&s_lightGridAlphaSh);
        if ( (v28->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
          __debugbreak();
        multiLightGridTempBuffers.m_lightingAlpha[1] = (const GfxWrappedRWBuffer *)&v28->1080;
        R_DeferredLighting_SetupOverlappingInput(computeState, viewInfo, EFFECT_LIGHTING_MULTILIGHTGRID_PREPARE);
        R_HW_AddResourceTransition(computeState, v22, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
        R_HW_AddResourceTransition(computeState, v24, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
        for ( i = 0i64; i < 2; ++i )
        {
          Resident = R_Texture_GetResident((GfxTextureId)LODWORD(v100[i][1].resource));
          R_HW_AddResourceTransition(computeState, Resident, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
        }
        v31 = lightGenImages;
        v32 = 3i64;
        do
        {
          if ( *v31 )
          {
            v33 = R_Texture_GetResident((*v31)->textureId);
            R_HW_AddResourceTransition(computeState, v33, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
          }
          ++v31;
          --v32;
        }
        while ( v32 );
        R_HW_FlushResourceTransitions(computeState);
        R_EffectLighting_Process(computeState, viewInfo, v19, EFFECT_LIGHTING_MULTILIGHTGRID_PREPARE, (const GfxImage *const *)v100, (const GfxImage *const *)v100, (const GfxImage *const *)lightGenImages, &multiLightGridTempBuffers);
        for ( j = 0i64; j < 2; ++j )
        {
          v35 = R_Texture_GetResident((GfxTextureId)LODWORD(v100[j][1].resource));
          R_HW_AddResourceTransition(computeState, v35, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
        }
        v36 = lightGenImages;
        v37 = 3i64;
        do
        {
          if ( *v36 )
          {
            v38 = R_Texture_GetResident((*v36)->textureId);
            R_HW_AddResourceTransition(computeState, v38, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
          }
          ++v36;
          --v37;
        }
        while ( v37 );
        R_DeferredLighting_SetupOverlappingInput(computeState, viewInfo, EFFECT_LIGHTING_MULTILIGHTGRID_SAMPLE);
        R_HW_AddResourceTransition(computeState, multiLightGridTempBuffers.m_lightGridElements[0], 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
        R_HW_AddResourceTransition(computeState, multiLightGridTempBuffers.m_lightGridElements[1], 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
        R_HW_AddResourceTransition(computeState, multiLightGridTempBuffers.m_lightingData[0], 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
        R_HW_AddResourceTransition(computeState, multiLightGridTempBuffers.m_lightingData[1], 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
        R_HW_AddResourceTransition(computeState, multiLightGridTempBuffers.m_lightingAlpha[0], 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
        R_HW_AddResourceTransition(computeState, multiLightGridTempBuffers.m_lightingAlpha[1], 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
        for ( k = 0i64; k < 2; ++k )
        {
          v40 = R_Texture_GetResident((GfxTextureId)LODWORD(v100[k][1].resource));
          R_HW_AddResourceTransition(computeState, v40, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
        }
        v41 = lightGenImages;
        v42 = 3i64;
        do
        {
          if ( *v41 )
          {
            v43 = R_Texture_GetResident((*v41)->textureId);
            R_HW_AddResourceTransition(computeState, v43, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
          }
          ++v41;
          --v42;
        }
        while ( v42 );
        R_HW_FlushResourceTransitions(computeState);
        R_EffectLighting_Process(computeState, viewInfo, v19, EFFECT_LIGHTING_MULTILIGHTGRID_SAMPLE, (const GfxImage *const *)v100, (const GfxImage *const *)v100, (const GfxImage *const *)lightGenImages, &multiLightGridTempBuffers);
        for ( m = 0i64; m < 2; ++m )
        {
          v45 = R_Texture_GetResident((GfxTextureId)LODWORD(v100[m][1].resource));
          R_HW_AddResourceTransition(computeState, v45, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
        }
        v46 = lightGenImages;
        v47 = 3i64;
        do
        {
          if ( *v46 )
          {
            v48 = R_Texture_GetResident((*v46)->textureId);
            R_HW_AddResourceTransition(computeState, v48, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
          }
          ++v46;
          --v47;
        }
        while ( v47 );
        R_DeferredLighting_SetupOverlappingInput(computeState, viewInfo, EFFECT_LIGHTING_MULTILIGHTGRID_COMBINE);
        R_HW_AddResourceTransition(computeState, multiLightGridTempBuffers.m_lightingData[0], 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
        R_HW_AddResourceTransition(computeState, multiLightGridTempBuffers.m_lightingData[1], 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
        R_HW_AddResourceTransition(computeState, multiLightGridTempBuffers.m_lightingAlpha[0], 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
        R_HW_AddResourceTransition(computeState, multiLightGridTempBuffers.m_lightingAlpha[1], 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
        for ( n = 0i64; n < 2; ++n )
        {
          v50 = R_Texture_GetResident((GfxTextureId)LODWORD(v99[n][1].resource));
          R_HW_AddResourceTransition(computeState, v50, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
        }
        v51 = lightGenImages;
        v52 = 3i64;
        do
        {
          if ( *v51 )
          {
            v53 = R_Texture_GetResident((*v51)->textureId);
            R_HW_AddResourceTransition(computeState, v53, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
          }
          ++v51;
          --v52;
        }
        while ( v52 );
        R_HW_FlushResourceTransitions(computeState);
        R_EffectLighting_Process(computeState, viewInfo, v19, EFFECT_LIGHTING_MULTILIGHTGRID_COMBINE, (const GfxImage *const *)v100, (const GfxImage *const *)v99, (const GfxImage *const *)lightGenImages, &multiLightGridTempBuffers);
        for ( ii = 0i64; ii < 2; ++ii )
        {
          v55 = R_Texture_GetResident((GfxTextureId)LODWORD(v99[ii][1].resource));
          R_HW_AddResourceTransition(computeState, v55, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
        }
        v56 = lightGenImages;
        v57 = 3i64;
        do
        {
          if ( *v56 )
          {
            v58 = R_Texture_GetResident((*v56)->textureId);
            R_HW_AddResourceTransition(computeState, v58, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
          }
          ++v56;
          --v57;
        }
        while ( v57 );
      }
      else
      {
        R_DeferredLighting_SetupOverlappingInput(computeState, viewInfo, EFFECT_LIGHTING_SAMPLE_LIGHTGRID);
        for ( jj = 0i64; jj < 2; ++jj )
        {
          v60 = R_Texture_GetResident((GfxTextureId)LODWORD(v99[jj][1].resource));
          R_HW_AddResourceTransition(computeState, v60, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
        }
        v61 = lightGenImages;
        v62 = 3i64;
        do
        {
          if ( *v61 )
          {
            v63 = R_Texture_GetResident((*v61)->textureId);
            R_HW_AddResourceTransition(computeState, v63, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
          }
          ++v61;
          --v62;
        }
        while ( v62 );
        R_HW_FlushResourceTransitions(computeState);
        R_EffectLighting_Process(computeState, viewInfo, v19, EFFECT_LIGHTING_SAMPLE_LIGHTGRID, (const GfxImage *const *)v100, (const GfxImage *const *)v99, (const GfxImage *const *)lightGenImages, NULL);
        for ( kk = 0i64; kk < 2; ++kk )
        {
          v65 = R_Texture_GetResident((GfxTextureId)LODWORD(v99[kk][1].resource));
          R_HW_AddResourceTransition(computeState, v65, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
        }
        v66 = lightGenImages;
        v67 = 3i64;
        do
        {
          if ( *v66 )
          {
            v68 = R_Texture_GetResident((*v66)->textureId);
            R_HW_AddResourceTransition(computeState, v68, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
          }
          ++v66;
          --v67;
        }
        while ( v67 );
      }
    }
    R_DeferredLighting_SetupOverlappingInput(computeState, viewInfo, EFFECT_LIGHTING_LIGHTMAP_GENERATE);
    v69 = v99;
    v70 = 0i64;
    if ( !RB_GpuLightGrid_DataAvailable(viewInfo) )
      v69 = v100;
    do
    {
      v71 = R_Texture_GetResident((GfxTextureId)LODWORD(views[v70][1].resource));
      R_HW_AddResourceTransition(computeState, v71, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
      ++v70;
    }
    while ( v70 < 2 );
    v72 = v111;
    v73 = 3i64;
    do
    {
      if ( *v72 )
      {
        v74 = R_Texture_GetResident((*v72)->textureId);
        R_HW_AddResourceTransition(computeState, v74, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
      }
      ++v72;
      --v73;
    }
    while ( v73 );
    R_HW_FlushResourceTransitions(computeState);
    R_EffectLighting_Process(computeState, viewInfo, 0, EFFECT_LIGHTING_LIGHTMAP_GENERATE, (const GfxImage *const *)v69, (const GfxImage *const *)views, (const GfxImage *const *)v111, NULL);
    for ( mm = 0i64; mm < 2; ++mm )
    {
      v76 = R_Texture_GetResident((GfxTextureId)LODWORD(views[mm][1].resource));
      R_HW_AddResourceTransition(computeState, v76, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    }
    v77 = v111;
    v78 = 3i64;
    do
    {
      if ( *v77 )
      {
        v79 = R_Texture_GetResident((*v77)->textureId);
        R_HW_AddResourceTransition(computeState, v79, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
      }
      ++v77;
      --v78;
    }
    while ( v78 );
    if ( fx_gpu_scatter->current.enabled )
    {
      R_DeferredLighting_SetupOverlappingInput(computeState, viewInfo, EFFECT_LIGHTING_LIGHTMAP_BLUR_X);
      for ( nn = 0i64; nn < 2; ++nn )
      {
        v81 = R_Texture_GetResident((GfxTextureId)LODWORD(v99[nn][1].resource));
        R_HW_AddResourceTransition(computeState, v81, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
      }
      v82 = lightGenImages;
      v83 = 3i64;
      do
      {
        if ( *v82 )
        {
          v84 = R_Texture_GetResident((*v82)->textureId);
          R_HW_AddResourceTransition(computeState, v84, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
        }
        ++v82;
        --v83;
      }
      while ( v83 );
      R_HW_FlushResourceTransitions(computeState);
      R_EffectLighting_Process(computeState, viewInfo, 0, EFFECT_LIGHTING_LIGHTMAP_BLUR_X, (const GfxImage *const *)views, (const GfxImage *const *)v99, (const GfxImage *const *)lightGenImages, NULL);
      for ( i1 = 0i64; i1 < 2; ++i1 )
      {
        v86 = R_Texture_GetResident((GfxTextureId)LODWORD(v99[i1][1].resource));
        R_HW_AddResourceTransition(computeState, v86, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
      }
      v87 = lightGenImages;
      v88 = 3i64;
      do
      {
        if ( *v87 )
        {
          v89 = R_Texture_GetResident((*v87)->textureId);
          R_HW_AddResourceTransition(computeState, v89, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
        }
        ++v87;
        --v88;
      }
      while ( v88 );
      R_DeferredLighting_SetupOverlappingInput(computeState, viewInfo, EFFECT_LIGHTING_LIGHTMAP_BLUR_Y);
      for ( i2 = 0i64; i2 < 2; ++i2 )
      {
        v91 = R_Texture_GetResident((GfxTextureId)LODWORD(views[i2][1].resource));
        R_HW_AddResourceTransition(computeState, v91, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
      }
      v92 = lightGenImages;
      v93 = 3i64;
      do
      {
        if ( *v92 )
        {
          v94 = R_Texture_GetResident((*v92)->textureId);
          R_HW_AddResourceTransition(computeState, v94, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
        }
        ++v92;
        --v93;
      }
      while ( v93 );
      R_HW_FlushResourceTransitions(computeState);
      R_EffectLighting_Process(computeState, viewInfo, 0, EFFECT_LIGHTING_LIGHTMAP_BLUR_Y, (const GfxImage *const *)v99, (const GfxImage *const *)views, (const GfxImage *const *)lightGenImages, NULL);
      for ( i3 = 0i64; i3 < 2; ++i3 )
      {
        v96 = R_Texture_GetResident((GfxTextureId)LODWORD(views[i3][1].resource));
        R_HW_AddResourceTransition(computeState, v96, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
      }
      v97 = lightGenImages;
      do
      {
        if ( *v97 )
        {
          v98 = R_Texture_GetResident((*v97)->textureId);
          R_HW_AddResourceTransition(computeState, v98, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
        }
        ++v97;
        --v20;
      }
      while ( v20 );
    }
    R_HW_FlushResourceTransitions(computeState);
    R_ProfEndNamedEvent(computeState);
    R_GPU_EndTimer();
  }
LABEL_122:
  Sys_ProfEndNamedEvent();
}

/*
==============
R_DeferredLighting_SetupOverlappingInput
==============
*/
void R_DeferredLighting_SetupOverlappingInput(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo, EffectLightingProcessType processType)
{
  __int16 v3; 
  unsigned __int16 opaqueCascadeCount; 
  __int64 v8; 
  R_RT_Image *p_m_image; 
  R_RT_Image *zeroImage; 
  GfxImage *translucentSunShadowMaskImage; 
  const GfxWrappedBuffer *lightsClusterBuffer; 
  R_RT_Handle m_translucentShadowRt; 

  opaqueCascadeCount = viewInfo->input.data->sunShadow.opaqueCascadeCount;
  if ( (*((_BYTE *)&viewInfo->viewportFeatures + 44) & 4) != 0 )
  {
    v8 = 808i64;
    if ( opaqueCascadeCount > 1u )
      v8 = 810i64;
    m_translucentShadowRt = *(R_RT_Handle *)viewInfo->viewParmsSet.frames[0].viewParms.viewMatrix.m.m[v8].v;
    if ( v3 )
    {
      R_RT_Handle::GetSurface(&m_translucentShadowRt);
      p_m_image = &R_RT_Handle::GetSurface(&m_translucentShadowRt)->m_image;
      goto LABEL_9;
    }
    if ( m_translucentShadowRt.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
  }
  p_m_image = (R_RT_Image *)rgp.blackShadowImage;
LABEL_9:
  if ( (*((_BYTE *)&viewInfo->viewportFeatures + 44) & 4) != 0 && rg.useTransSunShadow )
  {
    m_translucentShadowRt = (R_RT_Handle)viewInfo->sceneRtInput.m_translucentShadowRt;
    if ( v3 )
    {
      R_RT_Handle::GetSurface(&m_translucentShadowRt);
      zeroImage = &R_RT_Handle::GetSurface(&m_translucentShadowRt)->m_image;
      goto LABEL_16;
    }
    if ( m_translucentShadowRt.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
  }
  zeroImage = (R_RT_Image *)rgp.zeroImage;
LABEL_16:
  translucentSunShadowMaskImage = rgp.blackImage;
  lightsClusterBuffer = R_GetFrustumLightsClusterBuffer();
  R_DeferredLighting_SetupOverlappingInputCustom(computeState, viewInfo, processType, &p_m_image->m_base, &zeroImage->m_base, translucentSunShadowMaskImage, lightsClusterBuffer);
}

/*
==============
R_DeferredLighting_SetupOverlappingInputCustom
==============
*/
void R_DeferredLighting_SetupOverlappingInputCustom(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo, EffectLightingProcessType processType, const GfxImage *sunShadowImage, const GfxImage *translucentSunShadowImage, const GfxImage *translucentSunShadowMaskImage, const GfxWrappedBuffer *lightsClusterBuffer)
{
  __int64 voxelTreeZoneIndex; 
  bool v11; 
  GfxImage *SVDBasis; 
  GfxWrappedBuffer *p_dummyBuffer; 
  GfxTexture *Resident; 
  int v15; 
  GfxImage *MagmaHeightfield; 
  GfxTexture *textures; 

  voxelTreeZoneIndex = viewInfo->input.voxelTreeZoneIndex;
  v11 = s_world.precomputedSkyIllumination.boxMin.v[0] < s_world.precomputedSkyIllumination.boxMax.v[0] && r_enablePrecomputedSkyIllumination->current.enabled;
  if ( processType )
  {
    if ( processType == EFFECT_LIGHTING_LIGHTMAP_GENERATE )
    {
      textures = (GfxTexture *)&R_GetFrustumLightsReadLightBuffer(viewInfo)->view;
      R_SetComputeViews(computeState, 19, 1, (const GfxShaderBufferView *const *)&textures);
      textures = (GfxTexture *)&viewInfo->input.data->globalShadowConstantBuffer->view;
      R_SetComputeViews(computeState, 20, 1, (const GfxShaderBufferView *const *)&textures);
      p_dummyBuffer = &gfxBuf.dummyBuffer;
      if ( lightsClusterBuffer )
        p_dummyBuffer = (GfxWrappedBuffer *)lightsClusterBuffer;
      textures = (GfxTexture *)&p_dummyBuffer->view;
      R_SetComputeViews(computeState, 21, 1, (const GfxShaderBufferView *const *)&textures);
      textures = (GfxTexture *)R_Texture_GetResident(sunShadowImage->textureId);
      R_SetComputeTextures(computeState, 14, 1, (const GfxTexture *const *)&textures);
      textures = (GfxTexture *)R_Texture_GetResident(rgp.cloudNoiseImage->textureId);
      R_SetComputeTextures(computeState, 17, 1, (const GfxTexture *const *)&textures);
      textures = (GfxTexture *)R_Texture_GetResident(translucentSunShadowImage->textureId);
      R_SetComputeTextures(computeState, 18, 1, (const GfxTexture *const *)&textures);
      Resident = (GfxTexture *)R_Texture_GetResident(translucentSunShadowMaskImage->textureId);
      v15 = 32;
      goto LABEL_17;
    }
    if ( processType == EFFECT_LIGHTING_LIGHTMAP_GENERATE_OUT_OF_FRUSTUM )
    {
      textures = (GfxTexture *)&viewInfo->input.data->globalLightConstantBuffer->view;
      R_SetComputeViews(computeState, 19, 1, (const GfxShaderBufferView *const *)&textures);
      textures = (GfxTexture *)&viewInfo->input.data->globalShadowConstantBuffer->view;
      R_SetComputeViews(computeState, 20, 1, (const GfxShaderBufferView *const *)&textures);
      textures = (GfxTexture *)&deviceGlobals.voxelTopDownViewNodeStructuredBuffer[voxelTreeZoneIndex].view;
      R_SetComputeViews(computeState, 21, 1, (const GfxShaderBufferView *const *)&textures);
      textures = (GfxTexture *)&deviceGlobals.voxelInternalNodeStructuredBuffer[voxelTreeZoneIndex].view;
      R_SetComputeViews(computeState, 22, 1, (const GfxShaderBufferView *const *)&textures);
      textures = (GfxTexture *)&deviceGlobals.voxelLeafNodeDataBuffer[voxelTreeZoneIndex].view;
      R_SetComputeViews(computeState, 23, 1, (const GfxShaderBufferView *const *)&textures);
      textures = (GfxTexture *)&deviceGlobals.voxelLightListDataBuffer[voxelTreeZoneIndex].view;
      R_SetComputeViews(computeState, 24, 1, (const GfxShaderBufferView *const *)&textures);
      textures = (GfxTexture *)(&deviceGlobals.voxelInternalNodeDynamicLightList[0][0].view + 4 * voxelTreeZoneIndex + 2 * viewInfo->input.data->dynamicLightListBufferIndex);
      R_SetComputeViews(computeState, 25, 1, (const GfxShaderBufferView *const *)&textures);
      textures = (GfxTexture *)deviceGlobals.voxelTreeHeaderConstantBuffer[voxelTreeZoneIndex].buffer;
      R_SetComputeConstantBuffers(computeState, 2, 1, (ID3D12Resource *const *const)&textures);
      textures = (GfxTexture *)R_Texture_GetResident(sunShadowImage->textureId);
      R_SetComputeTextures(computeState, 14, 1, (const GfxTexture *const *)&textures);
      textures = (GfxTexture *)R_Texture_GetResident(rgp.cloudNoiseImage->textureId);
      R_SetComputeTextures(computeState, 17, 1, (const GfxTexture *const *)&textures);
      textures = (GfxTexture *)R_Texture_GetResident(translucentSunShadowImage->textureId);
      R_SetComputeTextures(computeState, 18, 1, (const GfxTexture *const *)&textures);
      textures = (GfxTexture *)R_Texture_GetResident(translucentSunShadowMaskImage->textureId);
      R_SetComputeTextures(computeState, 32, 1, (const GfxTexture *const *)&textures);
      goto LABEL_18;
    }
    if ( (unsigned int)(processType - 5) > 2 )
      goto LABEL_18;
  }
  if ( v11 )
  {
    textures = (GfxTexture *)R_Texture_GetResident(s_world.precomputedSkyIllumination.heightMap->textureId);
    R_SetComputeTextures(computeState, 13, 1, (const GfxTexture *const *)&textures);
    textures = (GfxTexture *)R_Texture_GetResident(s_world.precomputedSkyIllumination.detailMask->textureId);
    R_SetComputeTextures(computeState, 14, 1, (const GfxTexture *const *)&textures);
    textures = (GfxTexture *)R_Texture_GetResident(s_world.precomputedSkyIllumination.SVDCoefficient->textureId);
    R_SetComputeTextures(computeState, 15, 1, (const GfxTexture *const *)&textures);
    SVDBasis = s_world.precomputedSkyIllumination.SVDBasis;
  }
  else
  {
    textures = (GfxTexture *)R_Texture_GetResident(rgp.blackImage->textureId);
    R_SetComputeTextures(computeState, 13, 1, (const GfxTexture *const *)&textures);
    textures = (GfxTexture *)R_Texture_GetResident(rgp.whiteImage->textureId);
    R_SetComputeTextures(computeState, 14, 1, (const GfxTexture *const *)&textures);
    textures = (GfxTexture *)R_Texture_GetResident(rgp.blackImage3D->textureId);
    R_SetComputeTextures(computeState, 15, 1, (const GfxTexture *const *)&textures);
    SVDBasis = rgp.blackImage;
  }
  Resident = (GfxTexture *)R_Texture_GetResident(SVDBasis->textureId);
  v15 = 16;
LABEL_17:
  textures = Resident;
  R_SetComputeTextures(computeState, v15, 1, (const GfxTexture *const *)&textures);
LABEL_18:
  MagmaHeightfield = (GfxImage *)Particle_GetMagmaHeightfield();
  if ( !MagmaHeightfield )
    MagmaHeightfield = rgp.blackImage;
  textures = (GfxTexture *)R_Texture_GetResident(MagmaHeightfield->textureId);
  R_SetComputeTextures(computeState, 33, 1, (const GfxTexture *const *)&textures);
}

/*
==============
R_DeferredLighting_SetupSharedInputCustom
==============
*/
bool R_DeferredLighting_SetupSharedInputCustom(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo, const GfxImage *spotShadowArrayImage)
{
  bool result; 
  GfxImage *iesLookupTexture; 
  GfxTexture *textures; 

  result = RB_GpuLightGrid_DataAvailable(viewInfo);
  if ( result )
  {
    iesLookupTexture = g_worldDraw->iesLookupTexture;
    textures = (GfxTexture *)R_Texture_GetResident(spotShadowArrayImage->textureId);
    R_SetComputeTextures(computeState, 35, 1, (const GfxTexture *const *)&textures);
    textures = (GfxTexture *)R_Texture_GetResident(iesLookupTexture->textureId);
    R_SetComputeTextures(computeState, 26, 1, (const GfxTexture *const *)&textures);
    textures = (GfxTexture *)R_Texture_GetResident(rgp.hgPhaseFunction->textureId);
    R_SetComputeTextures(computeState, 27, 1, (const GfxTexture *const *)&textures);
    textures = (GfxTexture *)&R_ReflectionProbe_GetInstanceBuffer(computeState->data->reflectionProbeFrameIndex)->view;
    R_SetComputeViews(computeState, 10, 1, (const GfxShaderBufferView *const *)&textures);
    textures = (GfxTexture *)&R_ReflectionProbe_GetObbBuffer(computeState->data->reflectionProbeFrameIndex)->view;
    R_SetComputeViews(computeState, 11, 1, (const GfxShaderBufferView *const *)&textures);
    textures = (GfxTexture *)&R_ReflectionProbe_GetLightgridOverrideBuffer(computeState->data->reflectionProbeFrameIndex)->view;
    R_SetComputeViews(computeState, 12, 1, (const GfxShaderBufferView *const *)&textures);
    textures = (GfxTexture *)&R_ReflectionProbe_GetSHBuffer()->view;
    R_SetComputeViews(computeState, 31, 1, (const GfxShaderBufferView *const *)&textures);
    textures = (GfxTexture *)&R_CompressedSunShadow_GetBuffer()->view;
    R_SetComputeViews(computeState, 34, 1, (const GfxShaderBufferView *const *)&textures);
    textures = (GfxTexture *)viewInfo->input.data->globalSceneConstantBuffer->buffer;
    R_SetComputeConstantBuffers(computeState, 7, 1, (ID3D12Resource *const *const)&textures);
    return 1;
  }
  return result;
}

/*
==============
R_DestroyEffectLighting
==============
*/

void R_DestroyEffectLighting(void)
{
  R_EffectLighting_FreeRts();
}

/*
==============
R_EffectLighting_FreeRts
==============
*/

void __fastcall R_EffectLighting_FreeRts(double _XMM0_8)
{
  __int64 v1; 
  __int64 v2; 
  __m256i v3; 
  __m256i v6; 
  __m256i v7; 
  __m256i v8; 
  __m256i v9; 
  __m256i v10; 
  R_RT_Handle v11; 

  v1 = 0i64;
  v2 = 2i64;
  do
  {
    v11 = *(R_RT_Handle *)((char *)&s_lightmap + v1);
    R_RT_DestroyInternal(&v11);
    v11 = *(R_RT_Handle *)((char *)&s_lightmap_tmp + v1);
    R_RT_DestroyInternal(&v11);
    v11.m_surfaceID = 0;
    v1 += 32i64;
    v11.m_tracking.m_allocCounter = 0;
    __asm { vpxor   xmm0, xmm0, xmm0 }
    *(_OWORD *)&v11.m_tracking.m_name = *(_OWORD *)&_XMM0_8;
    v3 = (__m256i)v11;
    v11.m_surfaceID = 0;
    v11.m_tracking.m_allocCounter = 0;
    *(__m256i *)((char *)&unk_1526466E0 + v1) = v3;
    *(_OWORD *)&v11.m_tracking.m_name = *(_OWORD *)&_XMM0_8;
    *(R_RT_Handle *)((char *)&stru_152646720 + v1) = v11;
    --v2;
  }
  while ( v2 );
  v11 = (R_RT_Handle)s_fogLightmap;
  R_RT_DestroyInternal(&v11);
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&v11.m_tracking.m_name = _XMM0;
  v11.m_surfaceID = 0;
  v11.m_tracking.m_allocCounter = 0;
  s_fogLightmap = (R_RT_ColorHandle)v11;
  v11 = (R_RT_Handle)s_lightGridElemsColor;
  R_RT_DestroyInternal(&v11);
  v11 = (R_RT_Handle)s_lightGridElemsSh;
  R_RT_DestroyInternal(&v11);
  v11 = (R_RT_Handle)s_lightGridDataColor;
  R_RT_DestroyInternal(&v11);
  v11 = (R_RT_Handle)s_lightGridDataSh;
  R_RT_DestroyInternal(&v11);
  v11 = (R_RT_Handle)s_lightGridAlphaColor;
  R_RT_DestroyInternal(&v11);
  v11 = (R_RT_Handle)s_lightGridAlphaSh;
  R_RT_DestroyInternal(&v11);
  v11.m_surfaceID = 0;
  v11.m_tracking.m_allocCounter = 0;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&v11.m_tracking.m_name = _XMM0;
  v6 = (__m256i)v11;
  v11.m_surfaceID = 0;
  v11.m_tracking.m_allocCounter = 0;
  *(_OWORD *)&v11.m_tracking.m_name = _XMM0;
  s_lightGridElemsColor = (R_RT_BufferHandle)v6;
  v7 = (__m256i)v11;
  v11.m_surfaceID = 0;
  v11.m_tracking.m_allocCounter = 0;
  *(_OWORD *)&v11.m_tracking.m_name = _XMM0;
  s_lightGridElemsSh = (R_RT_BufferHandle)v7;
  v8 = (__m256i)v11;
  v11.m_surfaceID = 0;
  v11.m_tracking.m_allocCounter = 0;
  *(_OWORD *)&v11.m_tracking.m_name = _XMM0;
  s_lightGridDataColor = (R_RT_BufferHandle)v8;
  v9 = (__m256i)v11;
  v11.m_surfaceID = 0;
  v11.m_tracking.m_allocCounter = 0;
  *(_OWORD *)&v11.m_tracking.m_name = _XMM0;
  s_lightGridDataSh = (R_RT_BufferHandle)v9;
  v10 = (__m256i)v11;
  v11.m_surfaceID = 0;
  v11.m_tracking.m_allocCounter = 0;
  s_lightGridAlphaColor = (R_RT_BufferHandle)v10;
  *(_OWORD *)&v11.m_tracking.m_name = _XMM0;
  s_lightGridAlphaSh = (R_RT_BufferHandle)v11;
}

/*
==============
R_EffectLighting_GetFogLightmapImage
==============
*/
R_RT_Image *R_EffectLighting_GetFogLightmapImage()
{
  if ( fx_gpu_lighting->current.enabled && fx_gpu_deferred_fog->current.enabled && R_UseBakedLighting() )
    return &R_RT_Handle::GetSurface(&s_fogLightmap)->m_image;
  else
    return (R_RT_Image *)rgp.defaultFogLightmapImage;
}

/*
==============
R_EffectLighting_GetImage
==============
*/
R_RT_Image *R_EffectLighting_GetImage(GfxMeshLightingType lightingType)
{
  __int64 v1; 

  v1 = lightingType;
  if ( fx_gpu_lighting->current.enabled && R_UseBakedLighting() )
    return &R_RT_Handle::GetSurface(&s_lightmap + v1)->m_image;
  else
    return (R_RT_Image *)rgp.whiteImage;
}

/*
==============
R_EffectLighting_LazyAllocRts
==============
*/

void __fastcall R_EffectLighting_LazyAllocRts(double _XMM0_8)
{
  R_RT_Handle v1; 
  R_RT_Handle v3; 
  bool v5; 
  R_RT_Handle v6; 
  bool v8; 
  R_RT_Handle v9; 
  bool v11; 
  R_RT_BufferHandle *BufferInternal; 
  GfxDataFormat v13; 
  unsigned int BytesPerElement; 
  R_RT_BufferHandle *v15; 
  GfxDataFormat v16; 
  unsigned int v17; 
  R_RT_BufferHandle *v18; 
  GfxDataFormat v19; 
  unsigned int v20; 
  R_RT_BufferHandle *v21; 
  GfxDataFormat v22; 
  unsigned int v23; 
  R_RT_Handle v24; 
  bool v26; 
  R_RT_Handle v27; 
  R_RT_Handle v28; 
  R_RT_Handle result; 

  if ( !R_RT_Handle::IsValid(&s_lightmap) )
  {
    v1 = *R_RT_CreateInternal(&result, 0x200u, 0x200u, 0x200u, 0x200u, 1u, 1u, 1u, g_R_RT_renderTargetFmts[48], R_RT_Flag_RWView|R_RT_Flag_RTView, (R_RT_FlagsInternal)2, &colorBlack, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "effect lighting color", 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_deferred_effect_lighting.cpp(91)");
    v28 = v1;
    v27 = v1;
    if ( LOWORD(_XMM0_8) )
    {
      R_RT_Handle::GetSurface(&v27);
      if ( (R_RT_Handle::GetSurface(&v27)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
      {
        v1 = v27;
        __debugbreak();
      }
      else
      {
        v1 = v27;
      }
    }
    else
    {
      __asm { vpextrd rax, xmm0, 2 }
      if ( (_DWORD)_RAX )
      {
        v1 = v28;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
          __debugbreak();
      }
    }
    s_lightmap = v1;
    v3 = *R_RT_CreateInternal(&result, 0x200u, 0x200u, 0x200u, 0x200u, 1u, 1u, 1u, g_R_RT_renderTargetFmts[48], R_RT_Flag_RWView|R_RT_Flag_RTView, (R_RT_FlagsInternal)2, &colorBlack, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "effect lighting colortmp", 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_deferred_effect_lighting.cpp(92)");
    v28 = v3;
    v27 = v3;
    if ( LOWORD(_XMM0_8) )
    {
      R_RT_Handle::GetSurface(&v27);
      if ( (R_RT_Handle::GetSurface(&v27)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
      {
        v3 = v27;
        __debugbreak();
      }
      else
      {
        v3 = v27;
      }
    }
    else
    {
      __asm { vpextrd rax, xmm0, 2 }
      if ( (_DWORD)_RAX )
      {
        v5 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
        v3 = v28;
        if ( v5 )
          __debugbreak();
      }
    }
    s_lightmap_tmp = v3;
    v6 = *R_RT_CreateInternal(&result, 0x200u, 0x200u, 0x200u, 0x200u, 1u, 3u, 1u, g_R_RT_renderTargetFmts[49], R_RT_Flag_RWView|R_RT_Flag_RTView, (R_RT_FlagsInternal)2, &colorBlack, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "effect lighting sh", 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_deferred_effect_lighting.cpp(94)");
    v28 = v6;
    v27 = v6;
    if ( LOWORD(_XMM0_8) )
    {
      R_RT_Handle::GetSurface(&v27);
      if ( (R_RT_Handle::GetSurface(&v27)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
      {
        v6 = v27;
        __debugbreak();
      }
      else
      {
        v6 = v27;
      }
    }
    else
    {
      __asm { vpextrd rax, xmm0, 2 }
      if ( (_DWORD)_RAX )
      {
        v8 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
        v6 = v28;
        if ( v8 )
          __debugbreak();
      }
    }
    stru_152646720 = v6;
    v9 = *R_RT_CreateInternal(&result, 0x200u, 0x200u, 0x200u, 0x200u, 1u, 3u, 1u, g_R_RT_renderTargetFmts[49], R_RT_Flag_RWView|R_RT_Flag_RTView, (R_RT_FlagsInternal)2, &colorBlack, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "effect lighting shtmp", 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_deferred_effect_lighting.cpp(95)");
    v28 = v9;
    v27 = v9;
    if ( LOWORD(_XMM0_8) )
    {
      R_RT_Handle::GetSurface(&v27);
      if ( (R_RT_Handle::GetSurface(&v27)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
      {
        v9 = v27;
        __debugbreak();
      }
      else
      {
        v9 = v27;
      }
    }
    else
    {
      __asm { vpextrd rax, xmm0, 2 }
      if ( (_DWORD)_RAX )
      {
        v11 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
        v9 = v28;
        if ( v11 )
          __debugbreak();
      }
    }
    stru_152646760 = v9;
    s_lightGridElemsColor = *R_RT_CreateBufferInternal((R_RT_BufferHandle *)&result, 0x50u, 0x18000u, GFX_DATA_FORMAT_R32_UINT, R_RT_Flag_BufferStructured|R_RT_Flag_RWView, (R_RT_FlagsInternal)2, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "effect lighting color elems", 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_deferred_effect_lighting.cpp(97)");
    BufferInternal = R_RT_CreateBufferInternal((R_RT_BufferHandle *)&result, 0x50u, 0x18000u, GFX_DATA_FORMAT_R32_UINT, R_RT_Flag_BufferStructured|R_RT_Flag_RWView, (R_RT_FlagsInternal)2, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "effect lighting color elems", 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_deferred_effect_lighting.cpp(98)");
    v13 = g_R_RT_bufferFmts[8];
    s_lightGridElemsSh = *BufferInternal;
    BytesPerElement = DataFormat_GetBytesPerElement(g_R_RT_bufferFmts[8]);
    v15 = R_RT_CreateBufferInternal((R_RT_BufferHandle *)&result, BytesPerElement, 0x40000u, v13, R_RT_Flag_RWView, (R_RT_FlagsInternal)2, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "effect lighting sampled color", 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_deferred_effect_lighting.cpp(99)");
    v16 = g_R_RT_bufferFmts[9];
    s_lightGridDataColor = *v15;
    v17 = DataFormat_GetBytesPerElement(g_R_RT_bufferFmts[9]);
    v18 = R_RT_CreateBufferInternal((R_RT_BufferHandle *)&result, v17, 0x100000u, v16, R_RT_Flag_RWView, (R_RT_FlagsInternal)2, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "effect lighting sampled sh", 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_deferred_effect_lighting.cpp(100)");
    v19 = g_R_RT_bufferFmts[10];
    s_lightGridDataSh = *v18;
    v20 = DataFormat_GetBytesPerElement(g_R_RT_bufferFmts[10]);
    v21 = R_RT_CreateBufferInternal((R_RT_BufferHandle *)&result, v20, 0x100000u, v19, R_RT_Flag_RWView, (R_RT_FlagsInternal)2, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "effect lighting sampled color alpha", 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_deferred_effect_lighting.cpp(101)");
    v22 = g_R_RT_bufferFmts[10];
    s_lightGridAlphaColor = *v21;
    v23 = DataFormat_GetBytesPerElement(g_R_RT_bufferFmts[10]);
    s_lightGridAlphaSh = *R_RT_CreateBufferInternal((R_RT_BufferHandle *)&result, v23, 0x100000u, v22, R_RT_Flag_RWView, (R_RT_FlagsInternal)2, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "effect lighting sampled sh alpha", 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_deferred_effect_lighting.cpp(102)");
    v24 = *R_RT_CreateInternal(&result, 0x200u, 0x200u, 0x200u, 0x200u, 1u, 2u, 1u, g_R_RT_renderTargetFmts[50], R_RT_Flag_RWView|R_RT_Flag_RTView, (R_RT_FlagsInternal)2, &colorBlack, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "effect lighting fog", 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_deferred_effect_lighting.cpp(104)");
    v28 = v24;
    v27 = v24;
    if ( LOWORD(_XMM0_8) )
    {
      R_RT_Handle::GetSurface(&v27);
      if ( (R_RT_Handle::GetSurface(&v27)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
      {
        v24 = v27;
        __debugbreak();
      }
      else
      {
        v24 = v27;
      }
    }
    else
    {
      __asm { vpextrd rax, xmm0, 2 }
      if ( (_DWORD)_RAX )
      {
        v26 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
        v24 = v28;
        if ( v26 )
          __debugbreak();
      }
    }
    s_fogLightmap = (R_RT_ColorHandle)v24;
  }
}

/*
==============
R_EffectLighting_Process
==============
*/
void R_EffectLighting_Process(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo, const bool useReflectionProbeOverride, EffectLightingProcessType processType, const GfxImage *const *imagesRead, const GfxImage *const *imagesWrite, const GfxImage *const *lightGenImages, const EffectLightingMultiLightGridTempBuffers *multiLightGridTempBuffers)
{
  EffectLightingProcessType v8; 
  const GfxBackEndData *v10; 
  char v12; 
  int NumActiveLightGrids; 
  unsigned int v14; 
  GfxCmdBufInput *p_input; 
  __int64 v16; 
  int v17; 
  const GfxGpuLightGrid *v18; 
  int v19; 
  __int64 v20; 
  int *v21; 
  __int64 v22; 
  unsigned int v23; 
  int v24; 
  __int64 v25; 
  int v26; 
  __int64 v27; 
  unsigned int v28; 
  __int64 v29; 
  GfxImage *blackImage; 
  GfxImage *v31; 
  __int64 v32; 
  int v33; 
  GfxShaderBufferView *v34; 
  __int64 v35; 
  bool v36; 
  unsigned int v37; 
  __int64 v38; 
  const GfxImage *const *v39; 
  const GfxImage *Image; 
  __int64 v41; 
  const ComputeShader *v42; 
  __int64 v43; 
  int v44; 
  GfxMultiLightGridFXLightingBuffers *lightGridBuffers; 
  __int64 v46; 
  unsigned int v47; 
  unsigned int v48; 
  unsigned int v49; 
  bool enabled; 
  GfxShaderBufferView *views; 
  bool v52; 
  bool v53; 
  const GfxBackEndData *v54; 
  GfxShaderBufferView **v55; 
  EffectLightingProcessType v56; 
  int v57; 
  int v58; 
  int v59; 
  __int64 v60; 
  const GfxViewInfo *v61; 
  __int64 v62; 
  unsigned __int64 v63; 
  unsigned int v64; 
  int v65; 
  const GfxImage *const *v66; 
  const EffectLightingMultiLightGridTempBuffers *v67; 
  __int64 v68; 
  __int64 v69; 
  __int64 v70; 
  int *v71; 
  int *v72; 
  const GfxGpuLightGrid *v73; 
  const GfxWrappedRWBuffer **m_lightingAlpha; 
  int *v75; 
  __int64 v76; 
  const GfxGpuLightGrid **ActiveLightGridsList; 
  GfxTexture *textures; 
  __int64 v79; 
  GfxTexture *Resident; 
  __int64 v81; 
  const GfxImage *const *v82; 
  GfxTexture *v83; 
  GfxTexture *v84; 
  GfxTexture *v85; 
  GfxTexture *v86; 
  __int64 v87; 
  GfxCmdBufInput *v88; 
  int data; 
  float v90; 
  float v91; 
  int v92; 
  int v93; 
  int v94; 
  int v95; 
  __int64 v96; 
  int v97; 
  tmat44_t<vec4_t> out; 

  v8 = processType;
  v10 = viewInfo->input.data;
  v66 = imagesRead;
  v82 = lightGenImages;
  v56 = processType;
  v52 = useReflectionProbeOverride;
  v61 = viewInfo;
  v67 = multiLightGridTempBuffers;
  v54 = v10;
  if ( processType == EFFECT_LIGHTING_MULTILIGHTGRID_SAMPLE && !v10->mesh[0].lightGridBuffers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_deferred_effect_lighting.cpp", 212, ASSERT_TYPE_ASSERT, "(!iterateOverLightGrids || ( mesh->lightGridBuffers != nullptr ))", (const char *)&queryFormat, "!iterateOverLightGrids || ( mesh->lightGridBuffers != nullptr )") )
    __debugbreak();
  ActiveLightGridsList = R_GetActiveLightGridsList(viewInfo->input.data);
  v53 = RB_GpuLightGrid_DataAvailable(viewInfo);
  v12 = v53;
  if ( v8 == EFFECT_LIGHTING_MULTILIGHTGRID_SAMPLE )
  {
    NumActiveLightGrids = R_GetNumActiveLightGrids(viewInfo->input.data);
    v12 = v53;
  }
  else
  {
    NumActiveLightGrids = 1;
  }
  if ( v8 == EFFECT_LIGHTING_LIGHTMAP_BLUR_X || v8 == EFFECT_LIGHTING_LIGHTMAP_BLUR_Y )
    v14 = 3;
  else
    v14 = 0;
  v58 = v14;
  v59 = 0;
  v87 = NumActiveLightGrids;
  if ( NumActiveLightGrids > 0 )
  {
    v66 = (const GfxImage *const *)((char *)v66 - (__int64)multiLightGridTempBuffers);
    p_input = &viewInfo->input;
    v16 = 0i64;
    v64 = __ROL4__(1, v14);
    m_lightingAlpha = multiLightGridTempBuffers->m_lightingAlpha;
    v17 = v14;
    v76 = v14;
    v75 = (int *)((char *)v10->mesh[0].lightingCount + 4 * v14);
    v70 = 0i64;
    v81 = -32i64 - (_QWORD)multiLightGridTempBuffers;
    v88 = p_input;
    v79 = (char *)imagesWrite - (char *)multiLightGridTempBuffers;
    do
    {
      v18 = NULL;
      v73 = NULL;
      if ( v12 )
      {
        v18 = ActiveLightGridsList[v16];
        v73 = v18;
      }
      RB_GpuLightGrid_SetResouces(computeState, p_input, v18);
      v19 = 0;
      v55 = (GfxShaderBufferView **)m_lightingAlpha;
      v20 = 42i64;
      v21 = v75;
      v72 = v75;
      v57 = 0;
      v60 = 0i64;
      v63 = 0i64;
      v69 = 4328i64;
      v68 = 42i64;
      do
      {
        v22 = v76;
        v23 = v64;
        v62 = v76;
        v71 = v21;
        do
        {
          v24 = *v21;
          v65 = v24;
          if ( v8 == EFFECT_LIGHTING_MULTILIGHTGRID_SAMPLE )
          {
            v25 = v16 + 20 * (v20 + v22);
            v22 = v62;
            v26 = *((_DWORD *)&v10->mesh[0].lightGridBuffers->lightGridsActiveBuffer[0][0].buffer + v25);
          }
          else
          {
            v26 = v24;
          }
          if ( v26 )
          {
            v27 = 3i64;
            if ( v17 < 3 )
              v27 = (unsigned int)v17;
            v28 = 1 << v27;
            enabled = fx_lighting_lowres_ambient->current.enabled;
            v29 = v17 + 6i64 * v19;
            views = &v61->input.data->mesh[0].lightingView[0][v29];
            R_SetComputeViews(computeState, 28, 1, (const GfxShaderBufferView *const *)&views);
            blackImage = *(GfxImage **)((char *)v66 + (_QWORD)v55 - 32);
            if ( !blackImage )
              blackImage = rgp.blackImage;
            textures = (GfxTexture *)R_Texture_GetResident(blackImage->textureId);
            R_SetComputeTextures(computeState, 29, 1, (const GfxTexture *const *)&textures);
            v31 = *(GfxImage **)((char *)v55 + v79 - 32);
            if ( !v31 )
              v31 = rgp.blackImage;
            Resident = (GfxTexture *)R_Texture_GetResident(v31->textureId);
            R_SetComputeRWTextures(computeState, 0, 1, (const GfxTexture *const *)&Resident);
            switch ( v56 )
            {
              case EFFECT_LIGHTING_SAMPLE_LIGHTGRID:
                R_SetComputeShader(computeState, *((const ComputeShader **)&rgp.deferredEffectLightgridComputeShader[0][v60][4 * (enabled ? 2 : 0)][2 * v27] + v52));
                views = &R_GetFallbackProbe()->view;
                R_SetComputeViews(computeState, 30, 1, (const GfxShaderBufferView *const *)&views);
                v36 = !enabled;
                goto LABEL_44;
              case EFFECT_LIGHTING_LIGHTMAP_BLUR_X:
                v41 = 0i64;
                if ( v17 == 5 )
                  v41 = 1i64;
                v42 = rgp.deferredEffectScatterXComputeShader[v63 / 0x10][v41];
                goto LABEL_66;
              case EFFECT_LIGHTING_LIGHTMAP_GENERATE:
              case EFFECT_LIGHTING_LIGHTMAP_GENERATE_OUT_OF_FRUSTUM:
                v38 = 0i64;
                if ( v56 == EFFECT_LIGHTING_LIGHTMAP_GENERATE_OUT_OF_FRUSTUM )
                  v38 = 4i64;
                R_SetComputeShader(computeState, rgp.deferredEffectLightingComputeShader[0][0][(_QWORD)v55 + v38 + (unsigned int)v27 + v81]);
                views = &R_GetFallbackProbe()->view;
                R_SetComputeViews(computeState, 30, 1, (const GfxShaderBufferView *const *)&views);
                if ( !v57 )
                {
                  v39 = v82;
                  v83 = (GfxTexture *)R_Texture_GetResident((*v82)->textureId);
                  R_SetComputeTextures(computeState, 0, 1, (const GfxTexture *const *)&v83);
                  v84 = (GfxTexture *)R_Texture_GetResident((GfxTextureId)*(_DWORD *)(*((_QWORD *)v39 + 1) + 16i64));
                  R_SetComputeTextures(computeState, 1, 1, (const GfxTexture *const *)&v84);
                  Image = RB_FogSpline_GetImage(&v61->fog, v61->clientIndex);
                  v85 = (GfxTexture *)R_Texture_GetResident(Image->textureId);
                  R_SetComputeTextures(computeState, 2, 1, (const GfxTexture *const *)&v85);
                  v86 = (GfxTexture *)R_Texture_GetResident((GfxTextureId)*(_DWORD *)(*((_QWORD *)v39 + 2) + 16i64));
                  R_SetComputeRWTextures(computeState, 1, 1, (const GfxTexture *const *)&v86);
                }
                break;
              case EFFECT_LIGHTING_LIGHTMAP_BLUR_Y:
                v43 = 0i64;
                if ( v17 == 5 )
                  v43 = 1i64;
                v42 = rgp.deferredEffectScatterYComputeShader[v63 / 0x10][v43];
LABEL_66:
                R_SetComputeShader(computeState, v42);
                break;
              case EFFECT_LIGHTING_MULTILIGHTGRID_PREPARE:
                if ( !v67 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_deferred_effect_lighting.cpp", 256, ASSERT_TYPE_ASSERT, "(multiLightGridTempBuffers != nullptr)", (const char *)&queryFormat, "multiLightGridTempBuffers != nullptr") )
                  __debugbreak();
                if ( !v54->mesh[0].lightGridBuffers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_deferred_effect_lighting.cpp", 257, ASSERT_TYPE_ASSERT, "(mesh->lightGridBuffers)", (const char *)&queryFormat, "mesh->lightGridBuffers") )
                  __debugbreak();
                R_SetComputeShader(computeState, rgp.deferredEffectComputeMultiLightgridSamplingOffsets);
                v32 = v29;
                views = &v54->mesh[0].lightGridBuffers->lightGridsActiveBuffer[0][v32].view;
                R_SetComputeViews(computeState, 23, 1, (const GfxShaderBufferView *const *)&views);
                views = &v54->mesh[0].lightGridBuffers->lightGridLightingElemsPrefixSumBuffer[0][v32].view;
                R_SetComputeViews(computeState, 25, 1, (const GfxShaderBufferView *const *)&views);
                views = *(v55 - 4) + 2;
                R_SetComputeRWViewsWithCounters(computeState, 4, 1, (const GfxShaderBufferRWView *const *)&views, NULL);
                break;
              case EFFECT_LIGHTING_MULTILIGHTGRID_SAMPLE:
                if ( !v67 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_deferred_effect_lighting.cpp", 268, ASSERT_TYPE_ASSERT, "(multiLightGridTempBuffers != nullptr)", (const char *)&queryFormat, "multiLightGridTempBuffers != nullptr") )
                  __debugbreak();
                if ( !v54->mesh[0].lightGridBuffers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_deferred_effect_lighting.cpp", 269, ASSERT_TYPE_ASSERT, "(mesh->lightGridBuffers)", (const char *)&queryFormat, "mesh->lightGridBuffers") )
                  __debugbreak();
                R_SetComputeShader(computeState, *((const ComputeShader **)&rgp.deferredEffectSampleMultiLightgridComputeShader[0][v60][4 * (enabled ? 2 : 0)] + v27));
                views = *(v55 - 2) + 2;
                R_SetComputeRWViewsWithCounters(computeState, 2, 1, (const GfxShaderBufferRWView *const *)&views, NULL);
                views = *v55 + 2;
                R_SetComputeRWViewsWithCounters(computeState, 3, 1, (const GfxShaderBufferRWView *const *)&views, NULL);
                views = &R_GetFallbackProbe()->view;
                R_SetComputeViews(computeState, 30, 1, (const GfxShaderBufferView *const *)&views);
                v33 = 21;
                v34 = *(v55 - 4);
                goto LABEL_43;
              case EFFECT_LIGHTING_MULTILIGHTGRID_COMBINE:
                if ( !v67 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_deferred_effect_lighting.cpp", 289, ASSERT_TYPE_ASSERT, "(multiLightGridTempBuffers != nullptr)", (const char *)&queryFormat, "multiLightGridTempBuffers != nullptr") )
                  __debugbreak();
                if ( !v54->mesh[0].lightGridBuffers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_deferred_effect_lighting.cpp", 290, ASSERT_TYPE_ASSERT, "(mesh->lightGridBuffers)", (const char *)&queryFormat, "mesh->lightGridBuffers") )
                  __debugbreak();
                R_SetComputeShader(computeState, *((const ComputeShader **)&rgp.deferredEffectCombineSampledLightingComputeShader[0][v60][4 * (enabled ? 2 : 0)][2 * v27] + v52));
                views = (GfxShaderBufferView *)&(*(v55 - 4))->view;
                R_SetComputeViews(computeState, 21, 1, (const GfxShaderBufferView *const *)&views);
                views = (GfxShaderBufferView *)&(*(v55 - 2))->view;
                R_SetComputeViews(computeState, 19, 1, (const GfxShaderBufferView *const *)&views);
                v33 = 20;
                v34 = *v55;
LABEL_43:
                views = (GfxShaderBufferView *)&v34->view;
                R_SetComputeViews(computeState, v33, 1, (const GfxShaderBufferView *const *)&views);
                v35 = v29;
                views = &v54->mesh[0].lightGridBuffers->lightGridsDataOffsetBuffer[0][v35].view;
                R_SetComputeViews(computeState, 22, 1, (const GfxShaderBufferView *const *)&views);
                views = &v54->mesh[0].lightGridBuffers->lightGridsActiveBuffer[0][v35].view;
                R_SetComputeViews(computeState, 23, 1, (const GfxShaderBufferView *const *)&views);
                v36 = !enabled;
LABEL_44:
                if ( !v36 )
                {
                  v37 = v28 >> 1;
                  v28 = 1;
                  if ( v37 > 1 )
                    v28 = v37;
                }
                break;
              default:
                break;
            }
            v44 = v65;
            v92 = v59;
            data = v65;
            v93 = v26;
            v94 = v17;
            lightGridBuffers = v54->mesh[0].lightGridBuffers;
            if ( lightGridBuffers )
              v95 = *(_DWORD *)((char *)&lightGridBuffers->lightGridsActiveBuffer[0][0].buffer + v69);
            else
              v95 = 0;
            v90 = (float)v23;
            v91 = 0.5 / v90;
            MatrixTranspose44(&v61->viewParmsSet.frames[0].viewParms.viewProjectionMatrix.m, &out);
            if ( v73 )
            {
              v46 = (__int64)&v73->zones[v61->input.voxelTreeZoneIndex];
              v96 = *(_QWORD *)(v46 + 12);
              v97 = *(_DWORD *)(v46 + 20);
            }
            else
            {
              v96 = 0i64;
              v97 = 0;
            }
            R_UploadAndSetComputeConstants(computeState, 1, &data, 0x70u, NULL);
            if ( v56 == EFFECT_LIGHTING_MULTILIGHTGRID_PREPARE )
            {
              v47 = 1;
              v48 = (unsigned int)(v44 + 63) >> 6;
              v49 = 1;
            }
            else
            {
              v49 = v23 >> v27;
              v47 = v23 >> v27;
              v48 = (0x40 / (v28 * v28) + v26 - 1) / (0x40 / (v28 * v28));
            }
            R_Dispatch(computeState, v48, v49, v47);
            v20 = v68;
            v19 = v57;
            v22 = v62;
            v16 = v70;
            v8 = v56;
          }
          ++v22;
          v10 = v54;
          v21 = v71 + 1;
          ++v17;
          v23 = __ROL4__(v23, 1);
          v62 = v22;
          ++v71;
        }
        while ( v17 < 6 );
        ++v19;
        ++v60;
        v21 = v72 + 6;
        ++v55;
        v20 += 6i64;
        v63 += 16i64;
        v69 += 4i64;
        v17 = v58;
        v57 = v19;
        v72 += 6;
        v68 = v20;
      }
      while ( v19 < 2 );
      ++v59;
      ++v16;
      v12 = v53;
      p_input = v88;
      v70 = v16;
    }
    while ( v16 < v87 );
  }
}

/*
==============
R_EffectLighting_SetConstantBuffer
==============
*/
_BOOL8 R_EffectLighting_SetConstantBuffer(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo)
{
  bool v3; 
  const dvar_t *v4; 
  bool v5; 
  DvarValue data; 

  v3 = R_ReflectionProbe_UseLightgridOverride(computeState->data->reflectionProbeFrameIndex);
  v4 = fx_lighting_shScale;
  v5 = v3;
  if ( !fx_lighting_shScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 669, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  data = v4->current;
  R_UploadAndSetComputeConstants(computeState, 0, &data, 0x10u, NULL);
  return v5;
}

/*
==============
R_InitEffectLighting
==============
*/

void __fastcall R_InitEffectLighting(double _XMM0_8)
{
  R_RT_Handle v2; 
  R_RT_ColorHandle v3; 
  R_RT_BufferHandle v4; 
  R_RT_BufferHandle v5; 
  R_RT_BufferHandle v6; 
  R_RT_BufferHandle v7; 
  R_RT_Handle v8; 
  R_RT_Handle v9; 

  __asm { vpxor   xmm0, xmm0, xmm0 }
  v9.m_surfaceID = 0;
  v9.m_tracking.m_allocCounter = 0;
  *(_OWORD *)&v9.m_tracking.m_name = _XMM0;
  v8.m_surfaceID = 0;
  v8.m_tracking.m_allocCounter = 0;
  *(_OWORD *)&v8.m_tracking.m_name = _XMM0;
  s_lightmap = v8;
  s_lightmap_tmp = v9;
  v9.m_surfaceID = 0;
  *(_OWORD *)&v9.m_tracking.m_name = _XMM0;
  v8.m_surfaceID = 0;
  v8.m_tracking.m_allocCounter = 0;
  *(_OWORD *)&v8.m_tracking.m_name = _XMM0;
  stru_152646720 = v8;
  v2 = v9;
  v9.m_surfaceID = 0;
  v9.m_tracking.m_allocCounter = 0;
  *(_OWORD *)&v9.m_tracking.m_name = _XMM0;
  stru_152646760 = v2;
  v3 = (R_RT_ColorHandle)v9;
  v9.m_surfaceID = 0;
  v9.m_tracking.m_allocCounter = 0;
  *(_OWORD *)&v9.m_tracking.m_name = _XMM0;
  s_fogLightmap = v3;
  v4 = (R_RT_BufferHandle)v9;
  v9.m_surfaceID = 0;
  v9.m_tracking.m_allocCounter = 0;
  *(_OWORD *)&v9.m_tracking.m_name = _XMM0;
  s_lightGridElemsColor = v4;
  v5 = (R_RT_BufferHandle)v9;
  v9.m_surfaceID = 0;
  v9.m_tracking.m_allocCounter = 0;
  *(_OWORD *)&v9.m_tracking.m_name = _XMM0;
  s_lightGridElemsSh = v5;
  v6 = (R_RT_BufferHandle)v9;
  v9.m_surfaceID = 0;
  v9.m_tracking.m_allocCounter = 0;
  *(_OWORD *)&v9.m_tracking.m_name = _XMM0;
  s_lightGridDataColor = v6;
  v7 = (R_RT_BufferHandle)v9;
  v9.m_surfaceID = 0;
  v9.m_tracking.m_allocCounter = 0;
  *(_OWORD *)&v9.m_tracking.m_name = _XMM0;
  s_lightGridDataSh = v7;
  s_lightGridAlphaColor = (R_RT_BufferHandle)v9;
  v9.m_surfaceID = 0;
  v9.m_tracking.m_allocCounter = 0;
  *(_OWORD *)&v9.m_tracking.m_name = _XMM0;
  s_lightGridAlphaSh = (R_RT_BufferHandle)v9;
}

