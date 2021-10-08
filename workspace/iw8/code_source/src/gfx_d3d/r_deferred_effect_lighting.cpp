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
  bool v19; 
  __int64 v21; 
  const R_RT_Surface *v22; 
  const GfxWrappedBuffer *v23; 
  const R_RT_Surface *v24; 
  const GfxWrappedBuffer *v25; 
  const R_RT_Surface *v26; 
  const R_RT_Surface *v27; 
  const R_RT_Surface *v28; 
  const R_RT_Surface *v29; 
  __int64 i; 
  const GfxTexture *Resident; 
  GfxImage **v32; 
  __int64 v33; 
  const GfxTexture *v34; 
  __int64 j; 
  const GfxTexture *v36; 
  GfxImage **v37; 
  __int64 v38; 
  const GfxTexture *v39; 
  __int64 k; 
  const GfxTexture *v41; 
  GfxImage **v42; 
  __int64 v43; 
  const GfxTexture *v44; 
  __int64 m; 
  const GfxTexture *v46; 
  GfxImage **v47; 
  __int64 v48; 
  const GfxTexture *v49; 
  __int64 n; 
  const GfxTexture *v51; 
  GfxImage **v52; 
  __int64 v53; 
  const GfxTexture *v54; 
  __int64 ii; 
  const GfxTexture *v56; 
  GfxImage **v57; 
  __int64 v58; 
  const GfxTexture *v59; 
  __int64 jj; 
  const GfxTexture *v61; 
  GfxImage **v62; 
  __int64 v63; 
  const GfxTexture *v64; 
  __int64 kk; 
  const GfxTexture *v66; 
  GfxImage **v67; 
  __int64 v68; 
  const GfxTexture *v69; 
  GfxShaderBufferView **v70; 
  __int64 v71; 
  const GfxTexture *v72; 
  GfxImage **v73; 
  __int64 v74; 
  const GfxTexture *v75; 
  __int64 mm; 
  const GfxTexture *v77; 
  GfxImage **v78; 
  __int64 v79; 
  const GfxTexture *v80; 
  __int64 nn; 
  const GfxTexture *v82; 
  GfxImage **v83; 
  __int64 v84; 
  const GfxTexture *v85; 
  __int64 i1; 
  const GfxTexture *v87; 
  GfxImage **v88; 
  __int64 v89; 
  const GfxTexture *v90; 
  __int64 i2; 
  const GfxTexture *v92; 
  GfxImage **v93; 
  __int64 v94; 
  const GfxTexture *v95; 
  __int64 i3; 
  const GfxTexture *v97; 
  GfxImage **v98; 
  const GfxTexture *v99; 
  GfxShaderBufferView *v100[2]; 
  GfxShaderBufferView *v101[2]; 
  GfxShaderBufferView *views[2]; 
  GfxShaderBufferView *v103; 
  ID3D12Resource *buffers; 
  EffectLightingMultiLightGridTempBuffers multiLightGridTempBuffers; 
  GfxShaderBufferView *p_view; 
  GfxTexture *textures; 
  GfxTexture *v108[2]; 
  GfxTexture *data[2]; 
  GfxImage *lightGenImages[2]; 
  __int64 v111; 
  GfxImage *v112[3]; 

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
    v108[0] = (GfxTexture *)R_Texture_GetResident(rgp.hgPhaseFunction->textureId);
    R_SetComputeTextures(computeState, 27, 1, (const GfxTexture *const *)v108);
    views[0] = &R_ReflectionProbe_GetInstanceBuffer(computeState->data->reflectionProbeFrameIndex)->view;
    R_SetComputeViews(computeState, 10, 1, (const GfxShaderBufferView *const *)views);
    v101[0] = &R_ReflectionProbe_GetObbBuffer(computeState->data->reflectionProbeFrameIndex)->view;
    R_SetComputeViews(computeState, 11, 1, (const GfxShaderBufferView *const *)v101);
    v100[0] = &R_ReflectionProbe_GetLightgridOverrideBuffer(computeState->data->reflectionProbeFrameIndex)->view;
    R_SetComputeViews(computeState, 12, 1, (const GfxShaderBufferView *const *)v100);
    p_view = &R_ReflectionProbe_GetSHBuffer()->view;
    R_SetComputeViews(computeState, 31, 1, (const GfxShaderBufferView *const *)&p_view);
    v103 = &R_CompressedSunShadow_GetBuffer()->view;
    R_SetComputeViews(computeState, 34, 1, (const GfxShaderBufferView *const *)&v103);
    buffers = viewInfo->input.data->globalSceneConstantBuffer->buffer;
    R_SetComputeConstantBuffers(computeState, 7, 1, &buffers);
    R_GPU_BeginTimer(GPU_TIMER_EFFECT_LIGHTING);
    R_ProfBeginNamedEvent(computeState, "effect lighting");
    __asm
    {
      vpxor   xmm0, xmm0, xmm0
      vmovdqu xmmword ptr [rsp+150h+var_100], xmm0
    }
    views[0] = (GfxShaderBufferView *)&R_RT_Handle::GetSurface(&s_lightmap)->m_image;
    views[1] = (GfxShaderBufferView *)&R_RT_Handle::GetSurface(&stru_152646720)->m_image;
    v100[0] = (GfxShaderBufferView *)&R_RT_Handle::GetSurface(&s_lightmap_tmp)->m_image;
    v100[1] = (GfxShaderBufferView *)&R_RT_Handle::GetSurface(&stru_152646760)->m_image;
    R_VOL_GetAccumImages(viewInfo, (const GfxImage **)&buffers, (const GfxImage **)&v103, (const GfxImage **)&p_view);
    v112[0] = (GfxImage *)buffers;
    v112[1] = (GfxImage *)v103;
    Surface = R_RT_Handle::GetSurface(&s_fogLightmap);
    v111 = 0i64;
    v112[2] = &Surface->m_image.m_base;
    v15 = computeState->data;
    __asm
    {
      vpxor   xmm0, xmm0, xmm0
      vmovdqu xmmword ptr [rbp+50h+var_70], xmm0
    }
    v17 = R_ReflectionProbe_UseLightgridOverride(v15->reflectionProbeFrameIndex);
    _RBX = fx_lighting_shScale;
    v19 = v17;
    if ( !fx_lighting_shScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 669, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm
    {
      vmovups xmm0, xmmword ptr [rbx+28h]
      vmovaps xmmword ptr [rbp+50h+var_90], xmm0
      vmovdqa xmmword ptr [rbp+50h+data], xmm0
    }
    R_UploadAndSetComputeConstants(computeState, 0, data, 0x10u, NULL);
    v21 = 3i64;
    if ( RB_GpuLightGrid_DataAvailable(viewInfo) )
    {
      if ( R_LGV_UseMultiLightGridSampling() )
      {
        v22 = R_RT_Handle::GetSurface(&s_lightGridElemsColor);
        if ( (v22->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
          __debugbreak();
        v23 = (const GfxWrappedBuffer *)&v22->1080;
        multiLightGridTempBuffers.m_lightGridElements[0] = (const GfxWrappedRWBuffer *)&v22->1080;
        v24 = R_RT_Handle::GetSurface(&s_lightGridElemsSh);
        if ( (v24->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
          __debugbreak();
        v25 = (const GfxWrappedBuffer *)&v24->1080;
        multiLightGridTempBuffers.m_lightGridElements[1] = (const GfxWrappedRWBuffer *)&v24->1080;
        v26 = R_RT_Handle::GetSurface(&s_lightGridDataColor);
        if ( (v26->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
          __debugbreak();
        multiLightGridTempBuffers.m_lightingData[0] = (const GfxWrappedRWBuffer *)&v26->1080;
        v27 = R_RT_Handle::GetSurface(&s_lightGridDataSh);
        if ( (v27->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
          __debugbreak();
        multiLightGridTempBuffers.m_lightingData[1] = (const GfxWrappedRWBuffer *)&v27->1080;
        v28 = R_RT_Handle::GetSurface(&s_lightGridAlphaColor);
        if ( (v28->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
          __debugbreak();
        multiLightGridTempBuffers.m_lightingAlpha[0] = (const GfxWrappedRWBuffer *)&v28->1080;
        v29 = R_RT_Handle::GetSurface(&s_lightGridAlphaSh);
        if ( (v29->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
          __debugbreak();
        multiLightGridTempBuffers.m_lightingAlpha[1] = (const GfxWrappedRWBuffer *)&v29->1080;
        R_DeferredLighting_SetupOverlappingInput(computeState, viewInfo, EFFECT_LIGHTING_MULTILIGHTGRID_PREPARE);
        R_HW_AddResourceTransition(computeState, v23, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
        R_HW_AddResourceTransition(computeState, v25, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
        for ( i = 0i64; i < 2; ++i )
        {
          Resident = R_Texture_GetResident((GfxTextureId)LODWORD(v101[i][1].resource));
          R_HW_AddResourceTransition(computeState, Resident, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
        }
        v32 = lightGenImages;
        v33 = 3i64;
        do
        {
          if ( *v32 )
          {
            v34 = R_Texture_GetResident((*v32)->textureId);
            R_HW_AddResourceTransition(computeState, v34, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
          }
          ++v32;
          --v33;
        }
        while ( v33 );
        R_HW_FlushResourceTransitions(computeState);
        R_EffectLighting_Process(computeState, viewInfo, v19, EFFECT_LIGHTING_MULTILIGHTGRID_PREPARE, (const GfxImage *const *)v101, (const GfxImage *const *)v101, (const GfxImage *const *)lightGenImages, &multiLightGridTempBuffers);
        for ( j = 0i64; j < 2; ++j )
        {
          v36 = R_Texture_GetResident((GfxTextureId)LODWORD(v101[j][1].resource));
          R_HW_AddResourceTransition(computeState, v36, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
        }
        v37 = lightGenImages;
        v38 = 3i64;
        do
        {
          if ( *v37 )
          {
            v39 = R_Texture_GetResident((*v37)->textureId);
            R_HW_AddResourceTransition(computeState, v39, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
          }
          ++v37;
          --v38;
        }
        while ( v38 );
        R_DeferredLighting_SetupOverlappingInput(computeState, viewInfo, EFFECT_LIGHTING_MULTILIGHTGRID_SAMPLE);
        R_HW_AddResourceTransition(computeState, multiLightGridTempBuffers.m_lightGridElements[0], 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
        R_HW_AddResourceTransition(computeState, multiLightGridTempBuffers.m_lightGridElements[1], 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
        R_HW_AddResourceTransition(computeState, multiLightGridTempBuffers.m_lightingData[0], 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
        R_HW_AddResourceTransition(computeState, multiLightGridTempBuffers.m_lightingData[1], 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
        R_HW_AddResourceTransition(computeState, multiLightGridTempBuffers.m_lightingAlpha[0], 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
        R_HW_AddResourceTransition(computeState, multiLightGridTempBuffers.m_lightingAlpha[1], 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
        for ( k = 0i64; k < 2; ++k )
        {
          v41 = R_Texture_GetResident((GfxTextureId)LODWORD(v101[k][1].resource));
          R_HW_AddResourceTransition(computeState, v41, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
        }
        v42 = lightGenImages;
        v43 = 3i64;
        do
        {
          if ( *v42 )
          {
            v44 = R_Texture_GetResident((*v42)->textureId);
            R_HW_AddResourceTransition(computeState, v44, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
          }
          ++v42;
          --v43;
        }
        while ( v43 );
        R_HW_FlushResourceTransitions(computeState);
        R_EffectLighting_Process(computeState, viewInfo, v19, EFFECT_LIGHTING_MULTILIGHTGRID_SAMPLE, (const GfxImage *const *)v101, (const GfxImage *const *)v101, (const GfxImage *const *)lightGenImages, &multiLightGridTempBuffers);
        for ( m = 0i64; m < 2; ++m )
        {
          v46 = R_Texture_GetResident((GfxTextureId)LODWORD(v101[m][1].resource));
          R_HW_AddResourceTransition(computeState, v46, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
        }
        v47 = lightGenImages;
        v48 = 3i64;
        do
        {
          if ( *v47 )
          {
            v49 = R_Texture_GetResident((*v47)->textureId);
            R_HW_AddResourceTransition(computeState, v49, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
          }
          ++v47;
          --v48;
        }
        while ( v48 );
        R_DeferredLighting_SetupOverlappingInput(computeState, viewInfo, EFFECT_LIGHTING_MULTILIGHTGRID_COMBINE);
        R_HW_AddResourceTransition(computeState, multiLightGridTempBuffers.m_lightingData[0], 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
        R_HW_AddResourceTransition(computeState, multiLightGridTempBuffers.m_lightingData[1], 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
        R_HW_AddResourceTransition(computeState, multiLightGridTempBuffers.m_lightingAlpha[0], 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
        R_HW_AddResourceTransition(computeState, multiLightGridTempBuffers.m_lightingAlpha[1], 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
        for ( n = 0i64; n < 2; ++n )
        {
          v51 = R_Texture_GetResident((GfxTextureId)LODWORD(v100[n][1].resource));
          R_HW_AddResourceTransition(computeState, v51, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
        }
        v52 = lightGenImages;
        v53 = 3i64;
        do
        {
          if ( *v52 )
          {
            v54 = R_Texture_GetResident((*v52)->textureId);
            R_HW_AddResourceTransition(computeState, v54, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
          }
          ++v52;
          --v53;
        }
        while ( v53 );
        R_HW_FlushResourceTransitions(computeState);
        R_EffectLighting_Process(computeState, viewInfo, v19, EFFECT_LIGHTING_MULTILIGHTGRID_COMBINE, (const GfxImage *const *)v101, (const GfxImage *const *)v100, (const GfxImage *const *)lightGenImages, &multiLightGridTempBuffers);
        for ( ii = 0i64; ii < 2; ++ii )
        {
          v56 = R_Texture_GetResident((GfxTextureId)LODWORD(v100[ii][1].resource));
          R_HW_AddResourceTransition(computeState, v56, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
        }
        v57 = lightGenImages;
        v58 = 3i64;
        do
        {
          if ( *v57 )
          {
            v59 = R_Texture_GetResident((*v57)->textureId);
            R_HW_AddResourceTransition(computeState, v59, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
          }
          ++v57;
          --v58;
        }
        while ( v58 );
      }
      else
      {
        R_DeferredLighting_SetupOverlappingInput(computeState, viewInfo, EFFECT_LIGHTING_SAMPLE_LIGHTGRID);
        for ( jj = 0i64; jj < 2; ++jj )
        {
          v61 = R_Texture_GetResident((GfxTextureId)LODWORD(v100[jj][1].resource));
          R_HW_AddResourceTransition(computeState, v61, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
        }
        v62 = lightGenImages;
        v63 = 3i64;
        do
        {
          if ( *v62 )
          {
            v64 = R_Texture_GetResident((*v62)->textureId);
            R_HW_AddResourceTransition(computeState, v64, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
          }
          ++v62;
          --v63;
        }
        while ( v63 );
        R_HW_FlushResourceTransitions(computeState);
        R_EffectLighting_Process(computeState, viewInfo, v19, EFFECT_LIGHTING_SAMPLE_LIGHTGRID, (const GfxImage *const *)v101, (const GfxImage *const *)v100, (const GfxImage *const *)lightGenImages, NULL);
        for ( kk = 0i64; kk < 2; ++kk )
        {
          v66 = R_Texture_GetResident((GfxTextureId)LODWORD(v100[kk][1].resource));
          R_HW_AddResourceTransition(computeState, v66, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
        }
        v67 = lightGenImages;
        v68 = 3i64;
        do
        {
          if ( *v67 )
          {
            v69 = R_Texture_GetResident((*v67)->textureId);
            R_HW_AddResourceTransition(computeState, v69, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
          }
          ++v67;
          --v68;
        }
        while ( v68 );
      }
    }
    R_DeferredLighting_SetupOverlappingInput(computeState, viewInfo, EFFECT_LIGHTING_LIGHTMAP_GENERATE);
    v70 = v100;
    v71 = 0i64;
    if ( !RB_GpuLightGrid_DataAvailable(viewInfo) )
      v70 = v101;
    do
    {
      v72 = R_Texture_GetResident((GfxTextureId)LODWORD(views[v71][1].resource));
      R_HW_AddResourceTransition(computeState, v72, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
      ++v71;
    }
    while ( v71 < 2 );
    v73 = v112;
    v74 = 3i64;
    do
    {
      if ( *v73 )
      {
        v75 = R_Texture_GetResident((*v73)->textureId);
        R_HW_AddResourceTransition(computeState, v75, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
      }
      ++v73;
      --v74;
    }
    while ( v74 );
    R_HW_FlushResourceTransitions(computeState);
    R_EffectLighting_Process(computeState, viewInfo, 0, EFFECT_LIGHTING_LIGHTMAP_GENERATE, (const GfxImage *const *)v70, (const GfxImage *const *)views, (const GfxImage *const *)v112, NULL);
    for ( mm = 0i64; mm < 2; ++mm )
    {
      v77 = R_Texture_GetResident((GfxTextureId)LODWORD(views[mm][1].resource));
      R_HW_AddResourceTransition(computeState, v77, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    }
    v78 = v112;
    v79 = 3i64;
    do
    {
      if ( *v78 )
      {
        v80 = R_Texture_GetResident((*v78)->textureId);
        R_HW_AddResourceTransition(computeState, v80, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
      }
      ++v78;
      --v79;
    }
    while ( v79 );
    if ( fx_gpu_scatter->current.enabled )
    {
      R_DeferredLighting_SetupOverlappingInput(computeState, viewInfo, EFFECT_LIGHTING_LIGHTMAP_BLUR_X);
      for ( nn = 0i64; nn < 2; ++nn )
      {
        v82 = R_Texture_GetResident((GfxTextureId)LODWORD(v100[nn][1].resource));
        R_HW_AddResourceTransition(computeState, v82, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
      }
      v83 = lightGenImages;
      v84 = 3i64;
      do
      {
        if ( *v83 )
        {
          v85 = R_Texture_GetResident((*v83)->textureId);
          R_HW_AddResourceTransition(computeState, v85, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
        }
        ++v83;
        --v84;
      }
      while ( v84 );
      R_HW_FlushResourceTransitions(computeState);
      R_EffectLighting_Process(computeState, viewInfo, 0, EFFECT_LIGHTING_LIGHTMAP_BLUR_X, (const GfxImage *const *)views, (const GfxImage *const *)v100, (const GfxImage *const *)lightGenImages, NULL);
      for ( i1 = 0i64; i1 < 2; ++i1 )
      {
        v87 = R_Texture_GetResident((GfxTextureId)LODWORD(v100[i1][1].resource));
        R_HW_AddResourceTransition(computeState, v87, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
      }
      v88 = lightGenImages;
      v89 = 3i64;
      do
      {
        if ( *v88 )
        {
          v90 = R_Texture_GetResident((*v88)->textureId);
          R_HW_AddResourceTransition(computeState, v90, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
        }
        ++v88;
        --v89;
      }
      while ( v89 );
      R_DeferredLighting_SetupOverlappingInput(computeState, viewInfo, EFFECT_LIGHTING_LIGHTMAP_BLUR_Y);
      for ( i2 = 0i64; i2 < 2; ++i2 )
      {
        v92 = R_Texture_GetResident((GfxTextureId)LODWORD(views[i2][1].resource));
        R_HW_AddResourceTransition(computeState, v92, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
      }
      v93 = lightGenImages;
      v94 = 3i64;
      do
      {
        if ( *v93 )
        {
          v95 = R_Texture_GetResident((*v93)->textureId);
          R_HW_AddResourceTransition(computeState, v95, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
        }
        ++v93;
        --v94;
      }
      while ( v94 );
      R_HW_FlushResourceTransitions(computeState);
      R_EffectLighting_Process(computeState, viewInfo, 0, EFFECT_LIGHTING_LIGHTMAP_BLUR_Y, (const GfxImage *const *)v100, (const GfxImage *const *)views, (const GfxImage *const *)lightGenImages, NULL);
      for ( i3 = 0i64; i3 < 2; ++i3 )
      {
        v97 = R_Texture_GetResident((GfxTextureId)LODWORD(views[i3][1].resource));
        R_HW_AddResourceTransition(computeState, v97, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
      }
      v98 = lightGenImages;
      do
      {
        if ( *v98 )
        {
          v99 = R_Texture_GetResident((*v98)->textureId);
          R_HW_AddResourceTransition(computeState, v99, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
        }
        ++v98;
        --v21;
      }
      while ( v21 );
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
  unsigned __int16 opaqueCascadeCount; 
  R_RT_Image *p_m_image; 
  R_RT_Image *zeroImage; 
  GfxImage *translucentSunShadowMaskImage; 
  const GfxWrappedBuffer *lightsClusterBuffer; 
  R_RT_Handle v17; 

  _RSI = viewInfo;
  opaqueCascadeCount = viewInfo->input.data->sunShadow.opaqueCascadeCount;
  if ( (*((_BYTE *)&_RSI->viewportFeatures + 44) & 4) != 0 )
  {
    _RAX = 12928i64;
    if ( opaqueCascadeCount > 1u )
      _RAX = 12960i64;
    __asm
    {
      vmovups ymm0, ymmword ptr [rax+rsi]
      vmovd   eax, xmm0
      vmovups ymmword ptr [rsp+78h+var_38.m_surfaceID], ymm0
    }
    if ( (_WORD)_EAX )
    {
      R_RT_Handle::GetSurface(&v17);
      p_m_image = &R_RT_Handle::GetSurface(&v17)->m_image;
      goto LABEL_9;
    }
    if ( v17.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
  }
  p_m_image = (R_RT_Image *)rgp.blackShadowImage;
LABEL_9:
  if ( (*((_BYTE *)&_RSI->viewportFeatures + 44) & 4) != 0 && rg.useTransSunShadow )
  {
    __asm
    {
      vmovups ymm0, ymmword ptr [rsi+3300h]
      vmovd   eax, xmm0
      vmovups ymmword ptr [rsp+78h+var_38.m_surfaceID], ymm0
    }
    if ( (_WORD)_EAX )
    {
      R_RT_Handle::GetSurface(&v17);
      zeroImage = &R_RT_Handle::GetSurface(&v17)->m_image;
      goto LABEL_16;
    }
    if ( v17.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
  }
  zeroImage = (R_RT_Image *)rgp.zeroImage;
LABEL_16:
  translucentSunShadowMaskImage = rgp.blackImage;
  lightsClusterBuffer = R_GetFrustumLightsClusterBuffer();
  R_DeferredLighting_SetupOverlappingInputCustom(computeState, _RSI, processType, &p_m_image->m_base, &zeroImage->m_base, translucentSunShadowMaskImage, lightsClusterBuffer);
}

/*
==============
R_DeferredLighting_SetupOverlappingInputCustom
==============
*/
void R_DeferredLighting_SetupOverlappingInputCustom(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo, EffectLightingProcessType processType, const GfxImage *sunShadowImage, const GfxImage *translucentSunShadowImage, const GfxImage *translucentSunShadowMaskImage, const GfxWrappedBuffer *lightsClusterBuffer)
{
  __int64 voxelTreeZoneIndex; 
  GfxWrappedBuffer *p_dummyBuffer; 
  GfxTexture *Resident; 
  int v14; 
  GfxImage *MagmaHeightfield; 
  GfxTexture *textures; 

  __asm
  {
    vmovss  xmm0, dword ptr cs:?s_world@@3UGfxWorld@@A.precomputedSkyIllumination.boxMin; GfxWorld s_world
    vcomiss xmm0, dword ptr cs:?s_world@@3UGfxWorld@@A.precomputedSkyIllumination.boxMax; GfxWorld s_world
  }
  voxelTreeZoneIndex = viewInfo->input.voxelTreeZoneIndex;
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
      v14 = 32;
      goto LABEL_10;
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
      goto LABEL_11;
    }
    if ( (unsigned int)(processType - 5) > 2 )
      goto LABEL_11;
  }
  textures = (GfxTexture *)R_Texture_GetResident(rgp.blackImage->textureId);
  R_SetComputeTextures(computeState, 13, 1, (const GfxTexture *const *)&textures);
  textures = (GfxTexture *)R_Texture_GetResident(rgp.whiteImage->textureId);
  R_SetComputeTextures(computeState, 14, 1, (const GfxTexture *const *)&textures);
  textures = (GfxTexture *)R_Texture_GetResident(rgp.blackImage3D->textureId);
  R_SetComputeTextures(computeState, 15, 1, (const GfxTexture *const *)&textures);
  Resident = (GfxTexture *)R_Texture_GetResident(rgp.blackImage->textureId);
  v14 = 16;
LABEL_10:
  textures = Resident;
  R_SetComputeTextures(computeState, v14, 1, (const GfxTexture *const *)&textures);
LABEL_11:
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
  __int64 v3; 
  R_RT_Handle v24; 

  _R14 = 0x140000000ui64;
  _RBX = 0i64;
  v3 = 2i64;
  do
  {
    __asm
    {
      vmovups ymm0, ymmword ptr [rbx+r14+12646700h]
      vmovups [rbp+var_20], ymm0
    }
    R_RT_DestroyInternal(&v24);
    __asm
    {
      vmovups ymm0, ymmword ptr [rbx+r14+12646740h]
      vmovups [rbp+var_20], ymm0
    }
    R_RT_DestroyInternal(&v24);
    v24.m_surfaceID = 0;
    _RBX += 32i64;
    v24.m_tracking.m_allocCounter = 0;
    __asm
    {
      vpxor   xmm0, xmm0, xmm0
      vmovdqu xmmword ptr [rbp+var_20+10h], xmm0
      vmovups ymm1, [rbp+var_20]
    }
    v24.m_surfaceID = 0;
    v24.m_tracking.m_allocCounter = 0;
    __asm
    {
      vmovups ymmword ptr [rbx+r14+126466E0h], ymm1
      vmovdqu xmmword ptr [rbp+var_20+10h], xmm0
      vmovups ymm1, [rbp+var_20]
      vmovups ymmword ptr [rbx+r14+12646720h], ymm1
    }
    --v3;
  }
  while ( v3 );
  __asm
  {
    vmovups ymm0, ymmword ptr cs:?s_fogLightmap@@3VR_RT_ColorHandle@@A.baseclass_0.m_surfaceID; R_RT_ColorHandle s_fogLightmap
    vmovups [rbp+var_20], ymm0
  }
  R_RT_DestroyInternal(&v24);
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rbp+var_20+10h], xmm0
    vmovups ymm0, ymmword ptr cs:?s_lightGridElemsColor@@3VR_RT_BufferHandle@@A.baseclass_0.m_surfaceID; R_RT_BufferHandle s_lightGridElemsColor
  }
  v24.m_surfaceID = 0;
  v24.m_tracking.m_allocCounter = 0;
  __asm
  {
    vmovups ymm1, [rbp+var_20]
    vmovups ymmword ptr cs:?s_fogLightmap@@3VR_RT_ColorHandle@@A.baseclass_0.m_surfaceID, ymm1; R_RT_ColorHandle s_fogLightmap
    vmovups [rbp+var_20], ymm0
  }
  R_RT_DestroyInternal(&v24);
  __asm
  {
    vmovups ymm0, ymmword ptr cs:?s_lightGridElemsSh@@3VR_RT_BufferHandle@@A.baseclass_0.m_surfaceID; R_RT_BufferHandle s_lightGridElemsSh
    vmovups [rbp+var_20], ymm0
  }
  R_RT_DestroyInternal(&v24);
  __asm
  {
    vmovups ymm0, ymmword ptr cs:?s_lightGridDataColor@@3VR_RT_BufferHandle@@A.baseclass_0.m_surfaceID; R_RT_BufferHandle s_lightGridDataColor
    vmovups [rbp+var_20], ymm0
  }
  R_RT_DestroyInternal(&v24);
  __asm
  {
    vmovups ymm0, ymmword ptr cs:?s_lightGridDataSh@@3VR_RT_BufferHandle@@A.baseclass_0.m_surfaceID; R_RT_BufferHandle s_lightGridDataSh
    vmovups [rbp+var_20], ymm0
  }
  R_RT_DestroyInternal(&v24);
  __asm
  {
    vmovups ymm0, ymmword ptr cs:?s_lightGridAlphaColor@@3VR_RT_BufferHandle@@A.baseclass_0.m_surfaceID; R_RT_BufferHandle s_lightGridAlphaColor
    vmovups [rbp+var_20], ymm0
  }
  R_RT_DestroyInternal(&v24);
  __asm
  {
    vmovups ymm0, ymmword ptr cs:?s_lightGridAlphaSh@@3VR_RT_BufferHandle@@A.baseclass_0.m_surfaceID; R_RT_BufferHandle s_lightGridAlphaSh
    vmovups [rbp+var_20], ymm0
  }
  R_RT_DestroyInternal(&v24);
  v24.m_surfaceID = 0;
  v24.m_tracking.m_allocCounter = 0;
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rbp+var_20+10h], xmm0
    vmovups ymm1, [rbp+var_20]
  }
  v24.m_surfaceID = 0;
  v24.m_tracking.m_allocCounter = 0;
  __asm
  {
    vmovdqu xmmword ptr [rbp+var_20+10h], xmm0
    vmovups ymmword ptr cs:?s_lightGridElemsColor@@3VR_RT_BufferHandle@@A.baseclass_0.m_surfaceID, ymm1; R_RT_BufferHandle s_lightGridElemsColor
    vmovups ymm1, [rbp+var_20]
  }
  v24.m_surfaceID = 0;
  v24.m_tracking.m_allocCounter = 0;
  __asm
  {
    vmovdqu xmmword ptr [rbp+var_20+10h], xmm0
    vmovups ymmword ptr cs:?s_lightGridElemsSh@@3VR_RT_BufferHandle@@A.baseclass_0.m_surfaceID, ymm1; R_RT_BufferHandle s_lightGridElemsSh
    vmovups ymm1, [rbp+var_20]
  }
  v24.m_surfaceID = 0;
  v24.m_tracking.m_allocCounter = 0;
  __asm
  {
    vmovdqu xmmword ptr [rbp+var_20+10h], xmm0
    vmovups ymmword ptr cs:?s_lightGridDataColor@@3VR_RT_BufferHandle@@A.baseclass_0.m_surfaceID, ymm1; R_RT_BufferHandle s_lightGridDataColor
    vmovups ymm1, [rbp+var_20]
  }
  v24.m_surfaceID = 0;
  v24.m_tracking.m_allocCounter = 0;
  __asm
  {
    vmovdqu xmmword ptr [rbp+var_20+10h], xmm0
    vmovups ymmword ptr cs:?s_lightGridDataSh@@3VR_RT_BufferHandle@@A.baseclass_0.m_surfaceID, ymm1; R_RT_BufferHandle s_lightGridDataSh
    vmovups ymm1, [rbp+var_20]
  }
  v24.m_surfaceID = 0;
  v24.m_tracking.m_allocCounter = 0;
  __asm
  {
    vmovups ymmword ptr cs:?s_lightGridAlphaColor@@3VR_RT_BufferHandle@@A.baseclass_0.m_surfaceID, ymm1; R_RT_BufferHandle s_lightGridAlphaColor
    vmovdqu xmmword ptr [rbp+var_20+10h], xmm0
    vmovups ymm1, [rbp+var_20]
    vmovups ymmword ptr cs:?s_lightGridAlphaSh@@3VR_RT_BufferHandle@@A.baseclass_0.m_surfaceID, ymm1; R_RT_BufferHandle s_lightGridAlphaSh
  }
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
  bool v7; 
  bool v11; 
  bool v15; 
  GfxDataFormat v19; 
  unsigned int BytesPerElement; 
  GfxDataFormat v23; 
  unsigned int v25; 
  GfxDataFormat v27; 
  unsigned int v29; 
  GfxDataFormat v31; 
  unsigned int v33; 
  bool v39; 
  R_RT_Handle v40; 
  R_RT_Handle result; 

  if ( !R_RT_Handle::IsValid(&s_lightmap) )
  {
    _RAX = R_RT_CreateInternal(&result, 0x200u, 0x200u, 0x200u, 0x200u, 1u, 1u, 1u, g_R_RT_renderTargetFmts[48], R_RT_Flag_RWView|R_RT_Flag_RTView, (R_RT_FlagsInternal)2, &colorBlack, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "effect lighting color", 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_deferred_effect_lighting.cpp(91)");
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovd   eax, xmm0
      vmovups [rbp+var_60], ymm0
      vmovups ymmword ptr [rbp+var_80.m_surfaceID], ymm0
    }
    if ( (_WORD)_RAX )
    {
      R_RT_Handle::GetSurface(&v40);
      if ( (R_RT_Handle::GetSurface(&v40)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
      {
        __asm { vmovups ymm0, ymmword ptr [rbp+var_80.m_surfaceID] }
        __debugbreak();
      }
      else
      {
        __asm { vmovups ymm0, ymmword ptr [rbp+var_80.m_surfaceID] }
      }
    }
    else
    {
      __asm { vpextrd rax, xmm0, 2 }
      if ( (_DWORD)_RAX )
      {
        __asm { vmovups ymm0, [rbp+var_60] }
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
          __debugbreak();
      }
    }
    __asm { vmovups ymmword ptr cs:?s_lightmap@@3PAVR_RT_ColorHandle@@A.m_surfaceID, ymm0; R_RT_ColorHandle near * s_lightmap }
    _RAX = R_RT_CreateInternal(&result, 0x200u, 0x200u, 0x200u, 0x200u, 1u, 1u, 1u, g_R_RT_renderTargetFmts[48], R_RT_Flag_RWView|R_RT_Flag_RTView, (R_RT_FlagsInternal)2, &colorBlack, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "effect lighting colortmp", 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_deferred_effect_lighting.cpp(92)");
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovd   eax, xmm0
      vmovups [rbp+var_60], ymm0
      vmovups ymmword ptr [rbp+var_80.m_surfaceID], ymm0
    }
    if ( (_WORD)_RAX )
    {
      R_RT_Handle::GetSurface(&v40);
      if ( (R_RT_Handle::GetSurface(&v40)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
      {
        __asm { vmovups ymm0, ymmword ptr [rbp+var_80.m_surfaceID] }
        __debugbreak();
      }
      else
      {
        __asm { vmovups ymm0, ymmword ptr [rbp+var_80.m_surfaceID] }
      }
    }
    else
    {
      __asm { vpextrd rax, xmm0, 2 }
      if ( (_DWORD)_RAX )
      {
        v7 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
        __asm { vmovups ymm0, [rbp+var_60] }
        if ( v7 )
          __debugbreak();
      }
    }
    __asm { vmovups ymmword ptr cs:?s_lightmap_tmp@@3PAVR_RT_ColorHandle@@A.m_surfaceID, ymm0; R_RT_ColorHandle near * s_lightmap_tmp }
    _RAX = R_RT_CreateInternal(&result, 0x200u, 0x200u, 0x200u, 0x200u, 1u, 3u, 1u, g_R_RT_renderTargetFmts[49], R_RT_Flag_RWView|R_RT_Flag_RTView, (R_RT_FlagsInternal)2, &colorBlack, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "effect lighting sh", 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_deferred_effect_lighting.cpp(94)");
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovd   eax, xmm0
      vmovups [rbp+var_60], ymm0
      vmovups ymmword ptr [rbp+var_80.m_surfaceID], ymm0
    }
    if ( (_WORD)_RAX )
    {
      R_RT_Handle::GetSurface(&v40);
      if ( (R_RT_Handle::GetSurface(&v40)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
      {
        __asm { vmovups ymm0, ymmword ptr [rbp+var_80.m_surfaceID] }
        __debugbreak();
      }
      else
      {
        __asm { vmovups ymm0, ymmword ptr [rbp+var_80.m_surfaceID] }
      }
    }
    else
    {
      __asm { vpextrd rax, xmm0, 2 }
      if ( (_DWORD)_RAX )
      {
        v11 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
        __asm { vmovups ymm0, [rbp+var_60] }
        if ( v11 )
          __debugbreak();
      }
    }
    __asm { vmovups ymmword ptr cs:stru_152646720.m_surfaceID, ymm0 }
    _RAX = R_RT_CreateInternal(&result, 0x200u, 0x200u, 0x200u, 0x200u, 1u, 3u, 1u, g_R_RT_renderTargetFmts[49], R_RT_Flag_RWView|R_RT_Flag_RTView, (R_RT_FlagsInternal)2, &colorBlack, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "effect lighting shtmp", 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_deferred_effect_lighting.cpp(95)");
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovd   eax, xmm0
      vmovups [rbp+var_60], ymm0
      vmovups ymmword ptr [rbp+var_80.m_surfaceID], ymm0
    }
    if ( (_WORD)_RAX )
    {
      R_RT_Handle::GetSurface(&v40);
      if ( (R_RT_Handle::GetSurface(&v40)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
      {
        __asm { vmovups ymm0, ymmword ptr [rbp+var_80.m_surfaceID] }
        __debugbreak();
      }
      else
      {
        __asm { vmovups ymm0, ymmword ptr [rbp+var_80.m_surfaceID] }
      }
    }
    else
    {
      __asm { vpextrd rax, xmm0, 2 }
      if ( (_DWORD)_RAX )
      {
        v15 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
        __asm { vmovups ymm0, [rbp+var_60] }
        if ( v15 )
          __debugbreak();
      }
    }
    __asm { vmovups ymmword ptr cs:stru_152646760.m_surfaceID, ymm0 }
    _RAX = R_RT_CreateBufferInternal((R_RT_BufferHandle *)&result, 0x50u, 0x18000u, GFX_DATA_FORMAT_R32_UINT, R_RT_Flag_BufferStructured|R_RT_Flag_RWView, (R_RT_FlagsInternal)2, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "effect lighting color elems", 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_deferred_effect_lighting.cpp(97)");
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr cs:?s_lightGridElemsColor@@3VR_RT_BufferHandle@@A.baseclass_0.m_surfaceID, ymm0; R_RT_BufferHandle s_lightGridElemsColor
    }
    _RAX = R_RT_CreateBufferInternal((R_RT_BufferHandle *)&result, 0x50u, 0x18000u, GFX_DATA_FORMAT_R32_UINT, R_RT_Flag_BufferStructured|R_RT_Flag_RWView, (R_RT_FlagsInternal)2, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "effect lighting color elems", 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_deferred_effect_lighting.cpp(98)");
    v19 = g_R_RT_bufferFmts[8];
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr cs:?s_lightGridElemsSh@@3VR_RT_BufferHandle@@A.baseclass_0.m_surfaceID, ymm0; R_RT_BufferHandle s_lightGridElemsSh
    }
    BytesPerElement = DataFormat_GetBytesPerElement(g_R_RT_bufferFmts[8]);
    _RAX = R_RT_CreateBufferInternal((R_RT_BufferHandle *)&result, BytesPerElement, 0x40000u, v19, R_RT_Flag_RWView, (R_RT_FlagsInternal)2, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "effect lighting sampled color", 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_deferred_effect_lighting.cpp(99)");
    v23 = g_R_RT_bufferFmts[9];
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr cs:?s_lightGridDataColor@@3VR_RT_BufferHandle@@A.baseclass_0.m_surfaceID, ymm0; R_RT_BufferHandle s_lightGridDataColor
    }
    v25 = DataFormat_GetBytesPerElement(g_R_RT_bufferFmts[9]);
    _RAX = R_RT_CreateBufferInternal((R_RT_BufferHandle *)&result, v25, 0x100000u, v23, R_RT_Flag_RWView, (R_RT_FlagsInternal)2, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "effect lighting sampled sh", 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_deferred_effect_lighting.cpp(100)");
    v27 = g_R_RT_bufferFmts[10];
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr cs:?s_lightGridDataSh@@3VR_RT_BufferHandle@@A.baseclass_0.m_surfaceID, ymm0; R_RT_BufferHandle s_lightGridDataSh
    }
    v29 = DataFormat_GetBytesPerElement(g_R_RT_bufferFmts[10]);
    _RAX = R_RT_CreateBufferInternal((R_RT_BufferHandle *)&result, v29, 0x100000u, v27, R_RT_Flag_RWView, (R_RT_FlagsInternal)2, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "effect lighting sampled color alpha", 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_deferred_effect_lighting.cpp(101)");
    v31 = g_R_RT_bufferFmts[10];
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr cs:?s_lightGridAlphaColor@@3VR_RT_BufferHandle@@A.baseclass_0.m_surfaceID, ymm0; R_RT_BufferHandle s_lightGridAlphaColor
    }
    v33 = DataFormat_GetBytesPerElement(g_R_RT_bufferFmts[10]);
    _RAX = R_RT_CreateBufferInternal((R_RT_BufferHandle *)&result, v33, 0x100000u, v31, R_RT_Flag_RWView, (R_RT_FlagsInternal)2, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "effect lighting sampled sh alpha", 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_deferred_effect_lighting.cpp(102)");
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr cs:?s_lightGridAlphaSh@@3VR_RT_BufferHandle@@A.baseclass_0.m_surfaceID, ymm0; R_RT_BufferHandle s_lightGridAlphaSh
    }
    _RAX = R_RT_CreateInternal(&result, 0x200u, 0x200u, 0x200u, 0x200u, 1u, 2u, 1u, g_R_RT_renderTargetFmts[50], R_RT_Flag_RWView|R_RT_Flag_RTView, (R_RT_FlagsInternal)2, &colorBlack, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "effect lighting fog", 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_deferred_effect_lighting.cpp(104)");
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovd   eax, xmm0
      vmovups [rbp+var_60], ymm0
      vmovups ymmword ptr [rbp+var_80.m_surfaceID], ymm0
    }
    if ( (_WORD)_RAX )
    {
      R_RT_Handle::GetSurface(&v40);
      if ( (R_RT_Handle::GetSurface(&v40)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
      {
        __asm { vmovups ymm0, ymmword ptr [rbp+var_80.m_surfaceID] }
        __debugbreak();
      }
      else
      {
        __asm { vmovups ymm0, ymmword ptr [rbp+var_80.m_surfaceID] }
      }
    }
    else
    {
      __asm { vpextrd rax, xmm0, 2 }
      if ( (_DWORD)_RAX )
      {
        v39 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
        __asm { vmovups ymm0, [rbp+var_60] }
        if ( v39 )
          __debugbreak();
      }
    }
    __asm { vmovups ymmword ptr cs:?s_fogLightmap@@3VR_RT_ColorHandle@@A.baseclass_0.m_surfaceID, ymm0; R_RT_ColorHandle s_fogLightmap }
  }
}

/*
==============
R_EffectLighting_Process
==============
*/
void R_EffectLighting_Process(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo, const bool useReflectionProbeOverride, EffectLightingProcessType processType, const GfxImage *const *imagesRead, const GfxImage *const *imagesWrite, const GfxImage *const *lightGenImages, const EffectLightingMultiLightGridTempBuffers *multiLightGridTempBuffers)
{
  EffectLightingProcessType v10; 
  const GfxBackEndData *v12; 
  char v14; 
  int NumActiveLightGrids; 
  unsigned int v16; 
  GfxCmdBufInput *p_input; 
  __int64 v18; 
  int v19; 
  const GfxGpuLightGrid *v21; 
  int v22; 
  __int64 v23; 
  int *v24; 
  __int64 v25; 
  unsigned int v26; 
  int v27; 
  __int64 v28; 
  int v29; 
  __int64 v30; 
  unsigned int v32; 
  __int64 v33; 
  GfxImage *blackImage; 
  GfxImage *v35; 
  __int64 v36; 
  int v37; 
  GfxShaderBufferView *v38; 
  __int64 v39; 
  bool v40; 
  unsigned int v41; 
  __int64 v42; 
  const GfxImage *const *v43; 
  const GfxImage *Image; 
  __int64 v45; 
  const ComputeShader *v46; 
  __int64 v47; 
  int v48; 
  GfxMultiLightGridFXLightingBuffers *lightGridBuffers; 
  __int64 v51; 
  unsigned int v52; 
  unsigned int v53; 
  unsigned int v54; 
  bool enabled; 
  GfxShaderBufferView *views; 
  bool v59; 
  bool v60; 
  const GfxBackEndData *v61; 
  GfxShaderBufferView **v62; 
  EffectLightingProcessType v63; 
  int v64; 
  int v65; 
  int v66; 
  __int64 v67; 
  const GfxViewInfo *v68; 
  __int64 v69; 
  unsigned __int64 v70; 
  unsigned int v71; 
  int v72; 
  const GfxImage *const *v73; 
  const EffectLightingMultiLightGridTempBuffers *v74; 
  __int64 v75; 
  __int64 v76; 
  __int64 v77; 
  int *v78; 
  int *v79; 
  const GfxGpuLightGrid *v80; 
  const GfxWrappedRWBuffer **m_lightingAlpha; 
  int *v82; 
  __int64 v83; 
  const GfxGpuLightGrid **ActiveLightGridsList; 
  GfxTexture *textures; 
  __int64 v86; 
  GfxTexture *Resident; 
  __int64 v88; 
  const GfxImage *const *v89; 
  GfxTexture *v90; 
  GfxTexture *v91; 
  GfxTexture *v92; 
  GfxTexture *v93; 
  __int64 v94; 
  GfxCmdBufInput *v95; 
  int data[7]; 
  int v97; 
  __int64 v98; 
  int v99; 
  tmat44_t<vec4_t> out; 

  v10 = processType;
  v12 = viewInfo->input.data;
  v73 = imagesRead;
  v89 = lightGenImages;
  v63 = processType;
  v59 = useReflectionProbeOverride;
  v68 = viewInfo;
  v74 = multiLightGridTempBuffers;
  v61 = v12;
  if ( processType == EFFECT_LIGHTING_MULTILIGHTGRID_SAMPLE && !v12->mesh[0].lightGridBuffers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_deferred_effect_lighting.cpp", 212, ASSERT_TYPE_ASSERT, "(!iterateOverLightGrids || ( mesh->lightGridBuffers != nullptr ))", (const char *)&queryFormat, "!iterateOverLightGrids || ( mesh->lightGridBuffers != nullptr )") )
    __debugbreak();
  ActiveLightGridsList = R_GetActiveLightGridsList(viewInfo->input.data);
  v60 = RB_GpuLightGrid_DataAvailable(viewInfo);
  v14 = v60;
  if ( v10 == EFFECT_LIGHTING_MULTILIGHTGRID_SAMPLE )
  {
    NumActiveLightGrids = R_GetNumActiveLightGrids(viewInfo->input.data);
    v14 = v60;
  }
  else
  {
    NumActiveLightGrids = 1;
  }
  if ( v10 == EFFECT_LIGHTING_LIGHTMAP_BLUR_X || v10 == EFFECT_LIGHTING_LIGHTMAP_BLUR_Y )
    v16 = 3;
  else
    v16 = 0;
  v65 = v16;
  v66 = 0;
  v94 = NumActiveLightGrids;
  if ( NumActiveLightGrids > 0 )
  {
    v73 = (const GfxImage *const *)((char *)v73 - (__int64)multiLightGridTempBuffers);
    p_input = &viewInfo->input;
    v18 = 0i64;
    v71 = __ROL4__(1, v16);
    m_lightingAlpha = multiLightGridTempBuffers->m_lightingAlpha;
    v19 = v16;
    __asm
    {
      vmovaps [rsp+230h+var_50], xmm6
      vmovaps [rsp+230h+var_60], xmm7
      vmovss  xmm7, cs:__real@3f000000
    }
    v83 = v16;
    v82 = (int *)((char *)v12->mesh[0].lightingCount + 4 * v16);
    v77 = 0i64;
    v88 = -32i64 - (_QWORD)multiLightGridTempBuffers;
    v95 = p_input;
    v86 = (char *)imagesWrite - (char *)multiLightGridTempBuffers;
    do
    {
      v21 = NULL;
      v80 = NULL;
      if ( v14 )
      {
        v21 = ActiveLightGridsList[v18];
        v80 = v21;
      }
      RB_GpuLightGrid_SetResouces(computeState, p_input, v21);
      v22 = 0;
      v62 = (GfxShaderBufferView **)m_lightingAlpha;
      v23 = 42i64;
      v24 = v82;
      v79 = v82;
      v64 = 0;
      v67 = 0i64;
      v70 = 0i64;
      v76 = 4328i64;
      v75 = 42i64;
      do
      {
        v25 = v83;
        v26 = v71;
        v69 = v83;
        v78 = v24;
        do
        {
          v27 = *v24;
          v72 = v27;
          if ( v10 == EFFECT_LIGHTING_MULTILIGHTGRID_SAMPLE )
          {
            v28 = v18 + 20 * (v23 + v25);
            v25 = v69;
            v29 = *((_DWORD *)&v12->mesh[0].lightGridBuffers->lightGridsActiveBuffer[0][0].buffer + v28);
          }
          else
          {
            v29 = v27;
          }
          if ( v29 )
          {
            v30 = 3i64;
            __asm
            {
              vxorps  xmm6, xmm6, xmm6
              vcvtsi2ss xmm6, xmm6, rax
            }
            if ( v19 < 3 )
              v30 = (unsigned int)v19;
            v32 = 1 << v30;
            enabled = fx_lighting_lowres_ambient->current.enabled;
            v33 = v19 + 6i64 * v22;
            views = &v68->input.data->mesh[0].lightingView[0][v33];
            R_SetComputeViews(computeState, 28, 1, (const GfxShaderBufferView *const *)&views);
            blackImage = *(GfxImage **)((char *)v73 + (_QWORD)v62 - 32);
            if ( !blackImage )
              blackImage = rgp.blackImage;
            textures = (GfxTexture *)R_Texture_GetResident(blackImage->textureId);
            R_SetComputeTextures(computeState, 29, 1, (const GfxTexture *const *)&textures);
            v35 = *(GfxImage **)((char *)v62 + v86 - 32);
            if ( !v35 )
              v35 = rgp.blackImage;
            Resident = (GfxTexture *)R_Texture_GetResident(v35->textureId);
            R_SetComputeRWTextures(computeState, 0, 1, (const GfxTexture *const *)&Resident);
            switch ( v63 )
            {
              case EFFECT_LIGHTING_SAMPLE_LIGHTGRID:
                R_SetComputeShader(computeState, *((const ComputeShader **)&rgp.deferredEffectLightgridComputeShader[0][v67][4 * (enabled ? 2 : 0)][2 * v30] + v59));
                views = &R_GetFallbackProbe()->view;
                R_SetComputeViews(computeState, 30, 1, (const GfxShaderBufferView *const *)&views);
                v40 = !enabled;
                goto LABEL_44;
              case EFFECT_LIGHTING_LIGHTMAP_BLUR_X:
                v45 = 0i64;
                if ( v19 == 5 )
                  v45 = 1i64;
                v46 = rgp.deferredEffectScatterXComputeShader[v70 / 0x10][v45];
                goto LABEL_66;
              case EFFECT_LIGHTING_LIGHTMAP_GENERATE:
              case EFFECT_LIGHTING_LIGHTMAP_GENERATE_OUT_OF_FRUSTUM:
                v42 = 0i64;
                if ( v63 == EFFECT_LIGHTING_LIGHTMAP_GENERATE_OUT_OF_FRUSTUM )
                  v42 = 4i64;
                R_SetComputeShader(computeState, rgp.deferredEffectLightingComputeShader[0][0][(_QWORD)v62 + v42 + (unsigned int)v30 + v88]);
                views = &R_GetFallbackProbe()->view;
                R_SetComputeViews(computeState, 30, 1, (const GfxShaderBufferView *const *)&views);
                if ( !v64 )
                {
                  v43 = v89;
                  v90 = (GfxTexture *)R_Texture_GetResident((*v89)->textureId);
                  R_SetComputeTextures(computeState, 0, 1, (const GfxTexture *const *)&v90);
                  v91 = (GfxTexture *)R_Texture_GetResident((GfxTextureId)*(_DWORD *)(*((_QWORD *)v43 + 1) + 16i64));
                  R_SetComputeTextures(computeState, 1, 1, (const GfxTexture *const *)&v91);
                  Image = RB_FogSpline_GetImage(&v68->fog, v68->clientIndex);
                  v92 = (GfxTexture *)R_Texture_GetResident(Image->textureId);
                  R_SetComputeTextures(computeState, 2, 1, (const GfxTexture *const *)&v92);
                  v93 = (GfxTexture *)R_Texture_GetResident((GfxTextureId)*(_DWORD *)(*((_QWORD *)v43 + 2) + 16i64));
                  R_SetComputeRWTextures(computeState, 1, 1, (const GfxTexture *const *)&v93);
                }
                break;
              case EFFECT_LIGHTING_LIGHTMAP_BLUR_Y:
                v47 = 0i64;
                if ( v19 == 5 )
                  v47 = 1i64;
                v46 = rgp.deferredEffectScatterYComputeShader[v70 / 0x10][v47];
LABEL_66:
                R_SetComputeShader(computeState, v46);
                break;
              case EFFECT_LIGHTING_MULTILIGHTGRID_PREPARE:
                if ( !v74 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_deferred_effect_lighting.cpp", 256, ASSERT_TYPE_ASSERT, "(multiLightGridTempBuffers != nullptr)", (const char *)&queryFormat, "multiLightGridTempBuffers != nullptr") )
                  __debugbreak();
                if ( !v61->mesh[0].lightGridBuffers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_deferred_effect_lighting.cpp", 257, ASSERT_TYPE_ASSERT, "(mesh->lightGridBuffers)", (const char *)&queryFormat, "mesh->lightGridBuffers") )
                  __debugbreak();
                R_SetComputeShader(computeState, rgp.deferredEffectComputeMultiLightgridSamplingOffsets);
                v36 = v33;
                views = &v61->mesh[0].lightGridBuffers->lightGridsActiveBuffer[0][v36].view;
                R_SetComputeViews(computeState, 23, 1, (const GfxShaderBufferView *const *)&views);
                views = &v61->mesh[0].lightGridBuffers->lightGridLightingElemsPrefixSumBuffer[0][v36].view;
                R_SetComputeViews(computeState, 25, 1, (const GfxShaderBufferView *const *)&views);
                views = *(v62 - 4) + 2;
                R_SetComputeRWViewsWithCounters(computeState, 4, 1, (const GfxShaderBufferRWView *const *)&views, NULL);
                break;
              case EFFECT_LIGHTING_MULTILIGHTGRID_SAMPLE:
                if ( !v74 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_deferred_effect_lighting.cpp", 268, ASSERT_TYPE_ASSERT, "(multiLightGridTempBuffers != nullptr)", (const char *)&queryFormat, "multiLightGridTempBuffers != nullptr") )
                  __debugbreak();
                if ( !v61->mesh[0].lightGridBuffers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_deferred_effect_lighting.cpp", 269, ASSERT_TYPE_ASSERT, "(mesh->lightGridBuffers)", (const char *)&queryFormat, "mesh->lightGridBuffers") )
                  __debugbreak();
                R_SetComputeShader(computeState, *((const ComputeShader **)&rgp.deferredEffectSampleMultiLightgridComputeShader[0][v67][4 * (enabled ? 2 : 0)] + v30));
                views = *(v62 - 2) + 2;
                R_SetComputeRWViewsWithCounters(computeState, 2, 1, (const GfxShaderBufferRWView *const *)&views, NULL);
                views = *v62 + 2;
                R_SetComputeRWViewsWithCounters(computeState, 3, 1, (const GfxShaderBufferRWView *const *)&views, NULL);
                views = &R_GetFallbackProbe()->view;
                R_SetComputeViews(computeState, 30, 1, (const GfxShaderBufferView *const *)&views);
                v37 = 21;
                v38 = *(v62 - 4);
                goto LABEL_43;
              case EFFECT_LIGHTING_MULTILIGHTGRID_COMBINE:
                if ( !v74 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_deferred_effect_lighting.cpp", 289, ASSERT_TYPE_ASSERT, "(multiLightGridTempBuffers != nullptr)", (const char *)&queryFormat, "multiLightGridTempBuffers != nullptr") )
                  __debugbreak();
                if ( !v61->mesh[0].lightGridBuffers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_deferred_effect_lighting.cpp", 290, ASSERT_TYPE_ASSERT, "(mesh->lightGridBuffers)", (const char *)&queryFormat, "mesh->lightGridBuffers") )
                  __debugbreak();
                R_SetComputeShader(computeState, *((const ComputeShader **)&rgp.deferredEffectCombineSampledLightingComputeShader[0][v67][4 * (enabled ? 2 : 0)][2 * v30] + v59));
                views = (GfxShaderBufferView *)&(*(v62 - 4))->view;
                R_SetComputeViews(computeState, 21, 1, (const GfxShaderBufferView *const *)&views);
                views = (GfxShaderBufferView *)&(*(v62 - 2))->view;
                R_SetComputeViews(computeState, 19, 1, (const GfxShaderBufferView *const *)&views);
                v37 = 20;
                v38 = *v62;
LABEL_43:
                views = (GfxShaderBufferView *)&v38->view;
                R_SetComputeViews(computeState, v37, 1, (const GfxShaderBufferView *const *)&views);
                v39 = v33;
                views = &v61->mesh[0].lightGridBuffers->lightGridsDataOffsetBuffer[0][v39].view;
                R_SetComputeViews(computeState, 22, 1, (const GfxShaderBufferView *const *)&views);
                views = &v61->mesh[0].lightGridBuffers->lightGridsActiveBuffer[0][v39].view;
                R_SetComputeViews(computeState, 23, 1, (const GfxShaderBufferView *const *)&views);
                v40 = !enabled;
LABEL_44:
                if ( !v40 )
                {
                  v41 = v32 >> 1;
                  v32 = 1;
                  if ( v41 > 1 )
                    v32 = v41;
                }
                break;
              default:
                break;
            }
            v48 = v72;
            data[4] = v66;
            data[0] = v72;
            data[5] = v29;
            data[6] = v19;
            lightGridBuffers = v61->mesh[0].lightGridBuffers;
            if ( lightGridBuffers )
              v97 = *(_DWORD *)((char *)&lightGridBuffers->lightGridsActiveBuffer[0][0].buffer + v76);
            else
              v97 = 0;
            __asm
            {
              vdivss  xmm0, xmm7, xmm6
              vmovss  [rbp+130h+var_DC], xmm6
              vmovss  [rbp+130h+var_D8], xmm0
            }
            MatrixTranspose44(&v68->viewParmsSet.frames[0].viewParms.viewProjectionMatrix.m, &out);
            if ( v80 )
            {
              v51 = (__int64)&v80->zones[v68->input.voxelTreeZoneIndex];
              v98 = *(_QWORD *)(v51 + 12);
              v99 = *(_DWORD *)(v51 + 20);
            }
            else
            {
              v98 = 0i64;
              v99 = 0;
            }
            R_UploadAndSetComputeConstants(computeState, 1, data, 0x70u, NULL);
            if ( v63 == EFFECT_LIGHTING_MULTILIGHTGRID_PREPARE )
            {
              v52 = 1;
              v53 = (unsigned int)(v48 + 63) >> 6;
              v54 = 1;
            }
            else
            {
              v54 = v26 >> v30;
              v52 = v26 >> v30;
              v53 = (0x40 / (v32 * v32) + v29 - 1) / (0x40 / (v32 * v32));
            }
            R_Dispatch(computeState, v53, v54, v52);
            v23 = v75;
            v22 = v64;
            v25 = v69;
            v18 = v77;
            v10 = v63;
          }
          ++v25;
          v12 = v61;
          v24 = v78 + 1;
          ++v19;
          v26 = __ROL4__(v26, 1);
          v69 = v25;
          ++v78;
        }
        while ( v19 < 6 );
        ++v22;
        ++v67;
        v24 = v79 + 6;
        ++v62;
        v23 += 6i64;
        v70 += 16i64;
        v76 += 4i64;
        v19 = v65;
        v64 = v22;
        v79 += 6;
        v75 = v23;
      }
      while ( v22 < 2 );
      ++v66;
      ++v18;
      v14 = v60;
      p_input = v95;
      v77 = v18;
    }
    while ( v18 < v94 );
    __asm
    {
      vmovaps xmm7, [rsp+230h+var_60]
      vmovaps xmm6, [rsp+230h+var_50]
    }
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
  bool v5; 
  __int128 data; 

  v3 = R_ReflectionProbe_UseLightgridOverride(computeState->data->reflectionProbeFrameIndex);
  _RBX = fx_lighting_shScale;
  v5 = v3;
  if ( !fx_lighting_shScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 669, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovups xmm0, xmmword ptr [rbx+28h]
    vmovaps [rsp+68h+var_38], xmm0
    vmovdqa [rsp+68h+data], xmm0
  }
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
  __m256i v13; 
  __m256i v14; 

  __asm { vpxor   xmm0, xmm0, xmm0 }
  v14.m256i_i16[0] = 0;
  v14.m256i_i32[2] = 0;
  __asm { vmovdqu xmmword ptr [rbp+var_20+10h], xmm0 }
  v13.m256i_i16[0] = 0;
  v13.m256i_i32[2] = 0;
  __asm
  {
    vmovdqu xmmword ptr [rbp+var_40+10h], xmm0
    vmovups ymm1, [rbp+var_40]
    vmovups ymmword ptr cs:?s_lightmap@@3PAVR_RT_ColorHandle@@A.m_surfaceID, ymm1; R_RT_ColorHandle near * s_lightmap
    vmovups ymm1, [rbp+var_20]
    vmovups ymmword ptr cs:?s_lightmap_tmp@@3PAVR_RT_ColorHandle@@A.m_surfaceID, ymm1; R_RT_ColorHandle near * s_lightmap_tmp
  }
  v14.m256i_i16[0] = 0;
  __asm { vmovdqu xmmword ptr [rbp+var_20+10h], xmm0 }
  v13.m256i_i16[0] = 0;
  v13.m256i_i32[2] = 0;
  __asm
  {
    vmovdqu xmmword ptr [rbp+var_40+10h], xmm0
    vmovups ymm1, [rbp+var_40]
    vmovups ymmword ptr cs:stru_152646720.m_surfaceID, ymm1
    vmovups ymm1, [rbp+var_20]
  }
  v14.m256i_i16[0] = 0;
  v14.m256i_i32[2] = 0;
  __asm
  {
    vmovdqu xmmword ptr [rbp+var_20+10h], xmm0
    vmovups ymmword ptr cs:stru_152646760.m_surfaceID, ymm1
    vmovups ymm1, [rbp+var_20]
  }
  v14.m256i_i16[0] = 0;
  v14.m256i_i32[2] = 0;
  __asm
  {
    vmovdqu xmmword ptr [rbp+var_20+10h], xmm0
    vmovups ymmword ptr cs:?s_fogLightmap@@3VR_RT_ColorHandle@@A.baseclass_0.m_surfaceID, ymm1; R_RT_ColorHandle s_fogLightmap
    vmovups ymm1, [rbp+var_20]
  }
  v14.m256i_i16[0] = 0;
  v14.m256i_i32[2] = 0;
  __asm
  {
    vmovdqu xmmword ptr [rbp+var_20+10h], xmm0
    vmovups ymmword ptr cs:?s_lightGridElemsColor@@3VR_RT_BufferHandle@@A.baseclass_0.m_surfaceID, ymm1; R_RT_BufferHandle s_lightGridElemsColor
    vmovups ymm1, [rbp+var_20]
  }
  v14.m256i_i16[0] = 0;
  v14.m256i_i32[2] = 0;
  __asm
  {
    vmovdqu xmmword ptr [rbp+var_20+10h], xmm0
    vmovups ymmword ptr cs:?s_lightGridElemsSh@@3VR_RT_BufferHandle@@A.baseclass_0.m_surfaceID, ymm1; R_RT_BufferHandle s_lightGridElemsSh
    vmovups ymm1, [rbp+var_20]
  }
  v14.m256i_i16[0] = 0;
  v14.m256i_i32[2] = 0;
  __asm
  {
    vmovdqu xmmword ptr [rbp+var_20+10h], xmm0
    vmovups ymmword ptr cs:?s_lightGridDataColor@@3VR_RT_BufferHandle@@A.baseclass_0.m_surfaceID, ymm1; R_RT_BufferHandle s_lightGridDataColor
    vmovups ymm1, [rbp+var_20]
  }
  v14.m256i_i16[0] = 0;
  v14.m256i_i32[2] = 0;
  __asm
  {
    vmovdqu xmmword ptr [rbp+var_20+10h], xmm0
    vmovups ymmword ptr cs:?s_lightGridDataSh@@3VR_RT_BufferHandle@@A.baseclass_0.m_surfaceID, ymm1; R_RT_BufferHandle s_lightGridDataSh
    vmovups ymm1, [rbp+var_20]
    vmovups ymmword ptr cs:?s_lightGridAlphaColor@@3VR_RT_BufferHandle@@A.baseclass_0.m_surfaceID, ymm1; R_RT_BufferHandle s_lightGridAlphaColor
  }
  v14.m256i_i16[0] = 0;
  v14.m256i_i32[2] = 0;
  __asm
  {
    vmovdqu xmmword ptr [rbp+var_20+10h], xmm0
    vmovups ymm1, [rbp+var_20]
    vmovups ymmword ptr cs:?s_lightGridAlphaSh@@3VR_RT_BufferHandle@@A.baseclass_0.m_surfaceID, ymm1; R_RT_BufferHandle s_lightGridAlphaSh
  }
}

