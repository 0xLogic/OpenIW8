/*
==============
R_DrawSunshadow_BlitCache
==============
*/

void __fastcall R_DrawSunshadow_BlitCache(const GfxBackEndData *data, GfxCmdBufContext *context, int partitionIndex, R_RT_DepthHandle *sunshadowCacheRt)
{
  ?R_DrawSunshadow_BlitCache@@YAXPEBUGfxBackEndData@@UGfxCmdBufContext@@HVR_RT_DepthHandle@@@Z(data, context, partitionIndex, sunshadowCacheRt);
}

/*
==============
R_DrawSunshadow_DrawTranslucent
==============
*/

void __fastcall R_DrawSunshadow_DrawTranslucent(const GfxViewInfo *viewInfo, const GfxDrawList *drawList, const R_RT_Group *rtGroup, GfxDrawCallOutput *drawOutput)
{
  ?R_DrawSunshadow_DrawTranslucent@@YAXPEBUGfxViewInfo@@PEBUGfxDrawList@@PEBUR_RT_Group@@PEAUGfxDrawCallOutput@@@Z(viewInfo, drawList, rtGroup, drawOutput);
}

/*
==============
R_DrawSunshadow_DrawCacheForCascade
==============
*/

void __fastcall R_DrawSunshadow_DrawCacheForCascade(const GfxViewInfo *viewInfo, const GfxDrawList *drawList, int partitionIndex, int cellIndex, GfxDrawCallOutput *drawOutput, GfxDrawListType drawListType, R_RT_DepthHandle *sunshadowCacheRt, R_RT_DepthHandle *sunshadowCacheBackfaceRt, D3D12_RESOURCE_STATES cacheRtBeforeState)
{
  ?R_DrawSunshadow_DrawCacheForCascade@@YAXPEBUGfxViewInfo@@PEBUGfxDrawList@@HHPEAUGfxDrawCallOutput@@W4GfxDrawListType@@VR_RT_DepthHandle@@4W4D3D12_RESOURCE_STATES@@@Z(viewInfo, drawList, partitionIndex, cellIndex, drawOutput, drawListType, sunshadowCacheRt, sunshadowCacheBackfaceRt, cacheRtBeforeState);
}

/*
==============
R_DrawSunshadow_DrawCascade
==============
*/

void __fastcall R_DrawSunshadow_DrawCascade(const GfxViewInfo *viewInfo, GfxDrawListType drawListType, R_RT_DepthHandle *depthRt, MaterialTechniqueType techniqueOverride, GfxDrawCallOutput *drawOutput)
{
  ?R_DrawSunshadow_DrawCascade@@YAXPEBUGfxViewInfo@@W4GfxDrawListType@@VR_RT_DepthHandle@@W4MaterialTechniqueType@@PEAUGfxDrawCallOutput@@@Z(viewInfo, drawListType, depthRt, techniqueOverride, drawOutput);
}

/*
==============
R_DrawSunshadow_DrawCacheForAllCascades
==============
*/

void __fastcall R_DrawSunshadow_DrawCacheForAllCascades(GfxCmdBufContext *gfxContext, const GfxBackEndData *data, const GfxViewInfo *viewInfo, R_RT_DepthHandle *sunshadowCacheRt, R_RT_DepthHandle *sunshadowCacheBackfaceRt, D3D12_RESOURCE_STATES cacheRtBeforeState)
{
  ?R_DrawSunshadow_DrawCacheForAllCascades@@YAXUGfxCmdBufContext@@PEBUGfxBackEndData@@PEBUGfxViewInfo@@VR_RT_DepthHandle@@3W4D3D12_RESOURCE_STATES@@@Z(gfxContext, data, viewInfo, sunshadowCacheRt, sunshadowCacheBackfaceRt, cacheRtBeforeState);
}

/*
==============
R_DrawSunshadow_BlitCache
==============
*/
void R_DrawSunshadow_BlitCache(const GfxBackEndData *data, GfxCmdBufContext *context, int partitionIndex, R_RT_DepthHandle *sunshadowCacheRt)
{
  unsigned int firstCachedSunShadowPartition; 
  R_RT_DepthHandle *v6; 
  GfxCmdBufContext *v8; 
  const GfxSunShadowPartitionCache *SunShadowPartitionCache; 
  unsigned int v10; 
  const float *p_nearClip; 
  __int64 v12; 
  const R_RT_Surface *Surface; 
  GfxCmdBufSourceState *source; 
  R_RT_Image *p_m_image; 
  GfxCmdBufInput *p_input; 
  __int64 viewInfoIndex; 
  GfxCmdBufSourceState *v18; 
  GfxQuadMeshData *v19; 
  float width; 
  float v21; 
  float v22; 
  float height; 
  float v24; 
  float v25; 
  float v26; 
  float v27; 
  float v28; 
  float v29; 
  float v30; 
  float v31; 
  GfxCmdBufContext *v32; 
  GfxCmdBufSourceState *v33; 
  GfxCmdBufContext v34; 
  __int64 s0; 
  __int64 t0; 
  float outBias; 
  float outScale; 
  unsigned int gfxCachedSunShadowOverlapCount; 
  GfxCmdBufContext *v40; 
  GfxCmdBufContext v41; 
  R_RT_DepthHandle *v42; 
  R_RT_DepthHandle v43; 
  R_RT_Handle v44; 

  firstCachedSunShadowPartition = data->sunShadow.firstCachedSunShadowPartition;
  v42 = sunshadowCacheRt;
  v6 = sunshadowCacheRt;
  v40 = context;
  v8 = context;
  if ( (firstCachedSunShadowPartition > partitionIndex || partitionIndex > (unsigned int)data->sunShadow.lastCachedSunShadowPartition) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_sunshadow.cpp", 31, ASSERT_TYPE_ASSERT, "(R_IsCachedSunShadowPartition( &data->sunShadow, partitionIndex ))", (const char *)&queryFormat, "R_IsCachedSunShadowPartition( &data->sunShadow, partitionIndex )") )
    __debugbreak();
  SunShadowPartitionCache = R_GetSunShadowPartitionCache(&data->sunShadow, partitionIndex);
  gfxCachedSunShadowOverlapCount = SunShadowPartitionCache->gfxCachedSunShadowOverlapCount;
  if ( gfxCachedSunShadowOverlapCount )
  {
    v10 = 0;
    outBias = 0.0;
    outScale = FLOAT_1_0;
    p_nearClip = &SunShadowPartitionCache->gfxCachedSunShadowOverlap[0].staticEntryData.nearClip;
    v41.source = NULL;
    do
    {
      v12 = *((_QWORD *)p_nearClip - 8);
      v43 = *v6;
      R_SunShadowCache_GetDepthRt((R_RT_DepthHandle *)&v44, *(unsigned __int16 *)(v12 + 502), &v43);
      if ( rg.useCompressedSunShadowClipPlanes )
        R_CompressedSunShadow_GetClipPlanesScaleBias(&data->sunShadow, *p_nearClip, p_nearClip[1], &outScale, &outBias);
      Surface = R_RT_Handle::GetSurface(&v44);
      source = v8->source;
      p_m_image = &Surface->m_image;
      if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
        __debugbreak();
      p_input = &source->input;
      if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
        __debugbreak();
      p_input->codeImages[0] = &p_m_image->m_base;
      viewInfoIndex = data->viewInfoIndex;
      if ( (unsigned int)viewInfoIndex >= 6 )
      {
        LODWORD(t0) = 6;
        LODWORD(s0) = data->viewInfoIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_meshdata.h", 170, ASSERT_TYPE_ASSERT, "(unsigned)( viewInfoIndex ) < (unsigned)( 6 )", "viewInfoIndex doesn't index GFX_MAX_CLIENT_VIEWINFOS\n\t%i not in [0, %i)", s0, t0) )
          __debugbreak();
      }
      if ( !R_IsCachedSunShadowPartition(&data->sunShadow, partitionIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_meshdata.h", 171, ASSERT_TYPE_ASSERT, "(R_IsCachedSunShadowPartition( sunShadow, partitionIndex ))", (const char *)&queryFormat, "R_IsCachedSunShadowPartition( sunShadow, partitionIndex )") )
        __debugbreak();
      if ( v10 >= 0xA )
      {
        LODWORD(t0) = 10;
        LODWORD(s0) = v10;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_meshdata.h", 172, ASSERT_TYPE_ASSERT, "(unsigned)( cellIndex ) < (unsigned)( ( 9 + 1 ) )", "cellIndex doesn't index CACHED_SUN_SHADOW_CELL_MAX_OVERLAP\n\t%i not in [0, %i)", s0, t0) )
          __debugbreak();
      }
      v18 = v41.source;
      v19 = &gfxMeshGlob.sunShadowCacheQuadMesh[0][0][0][(__int64)v41.source + 20 * viewInfoIndex + 10 * (partitionIndex - (unsigned int)data->sunShadow.firstCachedSunShadowPartition)];
      width = (float)R_RT_Handle::GetSurface(&v44)->m_image.m_base.width;
      v21 = (float)*(unsigned int *)(v12 + 504);
      v22 = v21 / width;
      height = (float)R_RT_Handle::GetSurface(&v44)->m_image.m_base.height;
      v24 = (float)*(unsigned int *)(v12 + 508);
      v25 = v24 / height;
      v26 = (float)R_RT_Handle::GetSurface(&v44)->m_image.m_base.width;
      v27 = (float)*(unsigned int *)(v12 + 512);
      v28 = (float)(v27 / v26) + v22;
      v29 = (float)R_RT_Handle::GetSurface(&v44)->m_image.m_base.height;
      v30 = (float)*(unsigned int *)(v12 + 516);
      R_SetQuadMesh(v19, *(p_nearClip - 5), *(p_nearClip - 4), *(p_nearClip - 3), *(p_nearClip - 2), v22, v25, v28, (float)(v30 / v29) + v25, 0xFFFFFFFF);
      v31 = outBias;
      v32 = v40;
      v33 = v40->source;
      v33->input.consts[150].v[0] = outScale;
      v34 = *v32;
      v33->input.consts[150].v[1] = v31;
      *(_QWORD *)&v33->input.consts[150].xyz.z = 0i64;
      ++v33->constVersions[150];
      v41 = v34;
      R_DrawQuadMesh(&v41, rgp.floatZWriteDepthMaterial, &v19->meshData);
      v8 = v40;
      ++v10;
      v41.source = (GfxCmdBufSourceState *)((char *)v18->matrices.matrix[0].m.m[0].v + 1);
      p_nearClip += 216;
      v6 = v42;
    }
    while ( v10 < gfxCachedSunShadowOverlapCount );
  }
}

/*
==============
R_DrawSunshadow_DrawCacheForAllCascades
==============
*/
void R_DrawSunshadow_DrawCacheForAllCascades(GfxCmdBufContext *gfxContext, const GfxBackEndData *data, const GfxViewInfo *viewInfo, R_RT_DepthHandle *sunshadowCacheRt, R_RT_DepthHandle *sunshadowCacheBackfaceRt, D3D12_RESOURCE_STATES cacheRtBeforeState)
{
  unsigned int v10; 
  GfxCmdBufState *state; 
  GfxCmdBufContext v12; 
  R_RT_Handle v13; 
  D3D12_RESOURCE_STATES v14; 
  GfxCmdBufState *v15; 
  GfxCmdBufContext v16; 
  const GfxSunShadowPartitionCache *SunShadowPartitionCache; 
  unsigned int gfxCachedSunShadowOverlapCount; 
  int v19; 
  unsigned __int64 *p_updateExtentsMask; 
  int v21; 
  R_RT_Handle v22; 
  R_RT_Handle v23; 
  R_RT_DepthHandle *v24; 
  R_RT_DepthHandle *v25; 
  GfxDrawCallOutput drawOutput; 

  v24 = sunshadowCacheBackfaceRt;
  v25 = sunshadowCacheRt;
  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_sunshadow.cpp", 667, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  if ( viewInfo->useCachedSunShadow )
  {
    v10 = 0;
    if ( R_RT_Handle::GetAuxDirty(sunshadowCacheRt) )
    {
      state = gfxContext->state;
      v22 = sunshadowCacheRt->R_RT_Handle;
      R_HW_AddResourceTransition(state, &v22, cacheRtBeforeState, D3D12_RESOURCE_STATE_DEPTH_WRITE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
      R_HW_FlushResourceTransitions(state);
      v12 = *gfxContext;
      v23 = sunshadowCacheRt->R_RT_Handle;
      *(GfxCmdBufContext *)&v22.m_surfaceID = v12;
      R_SetRenderTargetsInternal_DepthOnly((GfxCmdBufContext *)&v22, (R_RT_DepthHandle *)&v23, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_sunshadow.cpp(677)");
      R_ClearScreen(state, 0x10u, 0);
      v13 = sunshadowCacheRt->R_RT_Handle;
      v14 = cacheRtBeforeState;
      v23 = v13;
      R_HW_AddResourceTransition(state, &v23, D3D12_RESOURCE_STATE_DEPTH_WRITE, cacheRtBeforeState, D3D12_RESOURCE_BARRIER_FLAG_NONE);
      R_HW_FlushResourceTransitions(state);
      *(GfxCmdBufContext *)&v22.m_surfaceID = *gfxContext;
      R_SetRenderTargetsInternal_None((GfxCmdBufContext *)&v22, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_sunshadow.cpp(683)");
    }
    else
    {
      v14 = cacheRtBeforeState;
    }
    if ( R_RT_Handle::IsValid(sunshadowCacheBackfaceRt) && R_RT_Handle::GetAuxDirty(sunshadowCacheBackfaceRt) )
    {
      v15 = gfxContext->state;
      v23 = sunshadowCacheBackfaceRt->R_RT_Handle;
      R_HW_AddResourceTransition(v15, &v23, v14, D3D12_RESOURCE_STATE_DEPTH_WRITE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
      R_HW_FlushResourceTransitions(v15);
      v16 = *gfxContext;
      v23 = sunshadowCacheBackfaceRt->R_RT_Handle;
      *(GfxCmdBufContext *)&v22.m_surfaceID = v16;
      R_SetRenderTargetsInternal_DepthOnly((GfxCmdBufContext *)&v22, (R_RT_DepthHandle *)&v23, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_sunshadow.cpp(690)");
      R_ClearScreen(v15, 0x10u, 0);
      v23 = sunshadowCacheBackfaceRt->R_RT_Handle;
      R_HW_AddResourceTransition(v15, &v23, D3D12_RESOURCE_STATE_DEPTH_WRITE, v14, D3D12_RESOURCE_BARRIER_FLAG_NONE);
      R_HW_FlushResourceTransitions(v15);
      *(GfxCmdBufContext *)&v22.m_surfaceID = *gfxContext;
      R_SetRenderTargetsInternal_None((GfxCmdBufContext *)&v22, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_sunshadow.cpp(696)");
    }
    do
    {
      if ( viewInfo->useCachedSunShadow && data->sunShadow.firstCachedSunShadowPartition <= v10 && v10 <= data->sunShadow.lastCachedSunShadowPartition )
      {
        SunShadowPartitionCache = R_GetSunShadowPartitionCache(&data->sunShadow, v10);
        if ( data == (const GfxBackEndData *)-927488i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.h", 376, ASSERT_TYPE_ASSERT, "(sunShadow)", (const char *)&queryFormat, "sunShadow") )
          __debugbreak();
        if ( !R_IsCachedSunShadowPartition(&data->sunShadow, v10) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.h", 377, ASSERT_TYPE_ASSERT, "(R_IsCachedSunShadowPartition( sunShadow, partitionIndex ))", (const char *)&queryFormat, "R_IsCachedSunShadowPartition( sunShadow, partitionIndex )") )
          __debugbreak();
        gfxCachedSunShadowOverlapCount = SunShadowPartitionCache->gfxCachedSunShadowOverlapCount;
        v19 = 10 * (v10 - data->sunShadow.firstCachedSunShadowPartition) + 45;
        if ( gfxCachedSunShadowOverlapCount )
        {
          p_updateExtentsMask = &SunShadowPartitionCache->gfxCachedSunShadowOverlap[0].updateExtentsMask;
          v21 = -v19;
          do
          {
            if ( (*((_BYTE *)p_updateExtentsMask - 4) || *p_updateExtentsMask || *((_BYTE *)p_updateExtentsMask + 8)) && R_RunDrawListCommandBuffer(data, (const GfxDrawListType)v19) )
            {
              R_GPU_BeginRunDrawListTimer((const GfxDrawListType)v19);
              R_ProfBeginDrawListImmediate((const GfxDrawListType)v19);
              R_InitDrawCallOutput(data, &drawOutput);
              v23 = v24->R_RT_Handle;
              v22 = v25->R_RT_Handle;
              R_DrawSunshadow_DrawCacheForCascade(viewInfo, &viewInfo->drawList[v19], v10, v21 + v19, &drawOutput, (GfxDrawListType)v19, (R_RT_DepthHandle *)&v22, (R_RT_DepthHandle *)&v23, cacheRtBeforeState);
              R_ProfEndDrawListImmediate();
              R_GPU_EndTimer();
            }
            ++v19;
            p_updateExtentsMask += 108;
          }
          while ( v21 + v19 < gfxCachedSunShadowOverlapCount );
        }
      }
      ++v10;
    }
    while ( v10 < 3 );
  }
}

/*
==============
R_DrawSunshadow_DrawCacheForCascade
==============
*/
void R_DrawSunshadow_DrawCacheForCascade(const GfxViewInfo *viewInfo, const GfxDrawList *drawList, int partitionIndex, int cellIndex, GfxDrawCallOutput *drawOutput, GfxDrawListType drawListType, R_RT_DepthHandle *sunshadowCacheRt, R_RT_DepthHandle *sunshadowCacheBackfaceRt, D3D12_RESOURCE_STATES cacheRtBeforeState)
{
  signed __int64 v9; 
  void *v10; 
  unsigned __int64 v11; 
  const char *DrawListTypeName; 
  const char *v16; 
  const GfxBackEndData *data; 
  unsigned __int64 v18; 
  GfxViewParms *p_viewParms; 
  __int64 v20; 
  unsigned int v21; 
  const GfxSunShadowPartitionCache *SunShadowPartitionCache; 
  char gen; 
  char skipUpdate; 
  unsigned int cachedSunShadowIndex; 
  GfxCachedSunShadow *bspEntry; 
  __int64 staticEntry; 
  __int64 v29; 
  unsigned int v30; 
  GfxCmdBufSourceState *source; 
  unsigned int height; 
  const R_RT_Surface *Surface; 
  GfxDrawListType v34; 
  __int64 v35; 
  __int64 v36; 
  GfxCmdBufSourceState *v37; 
  unsigned int v38; 
  const R_RT_Surface *v39; 
  __int64 v40; 
  R_RT_DepthHandle *v42; 
  unsigned int MapSize; 
  unsigned int v44; 
  unsigned int v45; 
  unsigned int v46; 
  GfxCachedSunShadow *v47; 
  unsigned int y; 
  unsigned int x; 
  unsigned int v51; 
  GfxCmdBufSourceState *v52; 
  unsigned int v53; 
  const R_RT_Surface *v54; 
  float width; 
  float v56; 
  unsigned int *v57; 
  __int128 v58; 
  __int128 v59; 
  float v60; 
  __int128 v61; 
  __int128 v62; 
  float v63; 
  __int64 viewInfoIndex; 
  int v65; 
  int v67; 
  __int128 v68; 
  __int128 v69; 
  __int128 v70; 
  __int128 v71; 
  float v72; 
  __int128 v73; 
  __int128 v74; 
  __int128 v75; 
  float v76; 
  __int128 v77; 
  float v78; 
  __int128 v79; 
  __int128 v80; 
  unsigned __int64 v82; 
  GfxMeshData *v83; 
  unsigned __int64 v84; 
  int v85; 
  __int128 v86; 
  unsigned int v87; 
  __int128 v88; 
  __int128 v89; 
  GfxMeshData *v93; 
  GfxCmdBufSourceState *v94; 
  unsigned int v95; 
  const R_RT_Surface *v96; 
  const R_RT_Surface *v97; 
  GfxCmdBufSourceState *v98; 
  GfxDrawListType v99; 
  _DWORD *v100; 
  D3D12_RESOURCE_STATES v101; 
  GfxCmdBufSourceState *v102; 
  unsigned int v103; 
  const R_RT_Surface *v104; 
  GfxCmdBufState *v105; 
  __int64 v106; 
  GfxCmdBufSourceState *v107; 
  unsigned int v108; 
  const R_RT_Surface *v109; 
  GfxCmdBufState *v110; 
  __int64 v111; 
  GfxDrawCallOutput *drawOutputa; 
  __int64 s0; 
  __int64 v114; 
  __int64 v115; 
  GfxCmdBufContext ctx; 
  R_RT_Handle v117; 
  char v118; 
  char v119; 
  unsigned int partitionIndexa; 
  GfxDrawListType v121; 
  float h; 
  R_RT_Handle v123; 
  __int64 v124; 
  R_RT_DepthHandle *v125; 
  _DWORD *v126; 
  GfxMeshData *mesh; 
  __int64 v128; 
  GfxDrawCallOutput *v129; 
  __int64 v130; 
  GfxViewport viewport; 
  R_RT_Handle v132; 
  R_RT_Handle v133; 
  GfxDrawList v134; 
  GfxDrawList drawLista; 
  GfxDrawListIter drawListIter; 
  GfxCmdBufStateLocal state; 
  GfxCmdBufSourceStateLocal v138; 
  base_vec4_t<unsigned int> v139[64]; 

  v10 = alloca(v9);
  v130 = -2i64;
  v11 = cellIndex;
  h = *(float *)&cellIndex;
  partitionIndexa = partitionIndex;
  v129 = drawOutput;
  v121 = drawListType;
  v125 = sunshadowCacheRt;
  Profile_Begin(92);
  DrawListTypeName = R_GetDrawListTypeName(drawListType);
  v16 = j_va("Cached Sun Shadow Map Cell - %s", DrawListTypeName);
  Sys_ProfBeginNamedEvent(0xFFC0C0C0, v16);
  data = viewInfo->input.data;
  *(_QWORD *)&v117.m_surfaceID = data;
  v18 = v11;
  p_viewParms = &R_GetSunShadowPartitionCache(&data->sunShadow, partitionIndex)->gfxCachedSunShadowOverlap[v18].staticEntryData.viewParms;
  GfxCmdBufSourceStateLocal::GfxCmdBufSourceStateLocal(&v138);
  GfxCmdBufStateLocal::GfxCmdBufStateLocal(&state);
  v20 = drawListType;
  v124 = v20 * 664;
  data->drawListIter[v20].iteratorCount = 1;
  if ( R_DrawListStart(&state, &v138, viewInfo, p_viewParms, NULL, v129) )
  {
    data->drawListIter[v20].iteratorCount = 0;
    ctx.source = &v138;
    ctx.state = &state;
    R_GP_SetScenePassIndex(&v138, viewInfo->input.data, 1u);
    R_SetPersistentTables(&ctx, data, PERSISTENT_TABLE_SCENE);
    ctx.source->viewStatsTarget = GFX_VIEW_STATS_SHADOW_SUN;
    v21 = partitionIndexa;
    if ( (data->sunShadow.firstCachedSunShadowPartition > partitionIndexa || partitionIndexa > data->sunShadow.lastCachedSunShadowPartition) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_sunshadow.cpp", 247, ASSERT_TYPE_ASSERT, "(R_IsCachedSunShadowPartition( &data->sunShadow, partitionIndex ))", (const char *)&queryFormat, "R_IsCachedSunShadowPartition( &data->sunShadow, partitionIndex )") )
      __debugbreak();
    SunShadowPartitionCache = R_GetSunShadowPartitionCache(&data->sunShadow, v21);
    gen = SunShadowPartitionCache->gfxCachedSunShadowOverlap[v18].gen;
    v118 = gen;
    skipUpdate = SunShadowPartitionCache->gfxCachedSunShadowOverlap[v18].skipUpdate;
    v119 = skipUpdate;
    viewport = SunShadowPartitionCache->gfxCachedSunShadowOverlap[v18].staticEntry->viewport;
    cachedSunShadowIndex = SunShadowPartitionCache->gfxCachedSunShadowOverlap[v18].staticEntry->cachedSunShadowIndex;
    bspEntry = SunShadowPartitionCache->gfxCachedSunShadowOverlap[v18].bspEntry;
    if ( bspEntry )
      partitionIndexa = bspEntry->cachedSunShadowIndex;
    else
      partitionIndexa = -1;
    if ( gen && skipUpdate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_sunshadow.cpp", 257, ASSERT_TYPE_ASSERT, "(!( gen && skip ))", (const char *)&queryFormat, "!( gen && skip )") )
      __debugbreak();
    memset_0(drawLista.smodelSurfList, 0, 0x74ui64);
    drawLista.codeSurfList.listType = GFX_CODE_SURFLIST_TYPE_COUNT;
    drawLista.bspSurfList = drawList->bspSurfList;
    drawLista.superTerrainSurfList = drawList->superTerrainSurfList;
    __asm { vpextrd rax, xmm1, 2 }
    if ( SunShadowPartitionCache->gfxCachedSunShadowOverlap[v18].newTerrainSurfs != ((_DWORD)_RAX != 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_sunshadow.cpp", 265, ASSERT_TYPE_ASSERT, "(sunShadowOverlap->newTerrainSurfs == bspDrawList.superTerrainSurfList.count > 0)", (const char *)&queryFormat, "sunShadowOverlap->newTerrainSurfs == bspDrawList.superTerrainSurfList.count > 0") )
      __debugbreak();
    memset_0(&v134, 0, sizeof(v134));
    v134.codeSurfList.listType = GFX_CODE_SURFLIST_TYPE_COUNT;
    v134.smodelSurfList[0] = drawList->smodelSurfList[0];
    v134.smodelSurfList[1] = drawList->smodelSurfList[1];
    v134.smodelSurfList[2] = drawList->smodelSurfList[2];
    staticEntry = (__int64)SunShadowPartitionCache->gfxCachedSunShadowOverlap[v18].staticEntry;
    v126 = (_DWORD *)staticEntry;
    v29 = (__int64)SunShadowPartitionCache->gfxCachedSunShadowOverlap[v18].bspEntry;
    v128 = v29;
    if ( v118 )
    {
      if ( v29 )
      {
        v30 = partitionIndexa;
        if ( cachedSunShadowIndex == partitionIndexa && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_sunshadow.cpp", 292, ASSERT_TYPE_ASSERT, "(cachedSunShadowIndex != cachedBspSunShadowIndex)", (const char *)&queryFormat, "cachedSunShadowIndex != cachedBspSunShadowIndex") )
          __debugbreak();
        v132 = v125->R_RT_Handle;
        R_SunShadowCache_GetDepthRt((R_RT_DepthHandle *)&v133, v30, (R_RT_DepthHandle *)&v132);
        v132 = v133;
        source = ctx.source;
        height = R_RT_Handle::GetSurface(&v132)->m_image.m_base.height;
        Surface = R_RT_Handle::GetSurface(&v132);
        R_SetRenderTargetSize(source, Surface->m_image.m_base.width, height, GFX_USE_VIEWPORT_FOR_VIEW);
        v132 = v133;
        R_HW_AddResourceTransition(ctx.state, &v132, cacheRtBeforeState, D3D12_RESOURCE_STATE_DEPTH_WRITE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
        R_FlushResourceTransitions(ctx.state);
        v132 = v133;
        *(GfxCmdBufContext *)&v117.m_surfaceID = ctx;
        R_SetRenderTargetsInternal_DepthOnly((GfxCmdBufContext *)&v117, (R_RT_DepthHandle *)&v132, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_sunshadow.cpp(299)");
        if ( ctx.state->depthRangeType != GFX_DEPTH_RANGE_FULL )
          R_ChangeDepthRange(ctx.state, GFX_DEPTH_RANGE_FULL);
        R_SetViewportStruct(ctx.source, &SunShadowPartitionCache->gfxCachedSunShadowOverlap[v18].bspEntry->viewport);
        R_SetViewportAndScissorSeparate(ctx.state, &SunShadowPartitionCache->gfxCachedSunShadowOverlap[v18].bspEntry->viewport, &SunShadowPartitionCache->gfxCachedSunShadowOverlap[v18].bspEntry->viewport);
        *(GfxCmdBufContext *)&v117.m_surfaceID = ctx;
        R_ClearDepthViewport((GfxCmdBufContext *)&v117);
        R_Set3D(ctx.source);
        R_UpdateViewport(ctx.source, &SunShadowPartitionCache->gfxCachedSunShadowOverlap[v18].bspEntry->viewport);
        R_ProfBeginNamedEvent(ctx.state, "Cached Sun Shadow BSPonly cell");
        R_DrawListIter_Init(&drawLista, &drawListIter);
        *(GfxCmdBufContext *)&v117.m_surfaceID = ctx;
        v34 = v121;
        R_DrawSurfs_Unsorted((GfxCmdBufContext *)&v117, &drawListIter, TECHNIQUE_BUILD_SHADOWMAP_DEPTH, v121);
        v35 = v124;
        *(unsigned int *)((char *)&data->drawListIter[0].iteratorCount + v124) += drawListIter.iteratorCount;
        R_ProfEndNamedEvent(ctx.state);
        if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_r_resummarizeSunCacheBSP, "r_resummarizeSunCacheBSP") )
        {
          *(GfxCmdBufContext *)&v117.m_surfaceID = ctx;
          R_ResummarizeDepth((GfxCmdBufContext *)&v117);
        }
        if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_r_resolveSunCacheBSP, "r_resolveSunCacheBSP") )
        {
          *(GfxCmdBufContext *)&v117.m_surfaceID = ctx;
          R_ResolveDepth((GfxCmdBufContext *)&v117);
        }
        v132 = v133;
        R_HW_AddResourceTransition(ctx.state, &v132, D3D12_RESOURCE_STATE_DEPTH_WRITE, cacheRtBeforeState, D3D12_RESOURCE_BARRIER_FLAG_NONE);
        R_FlushResourceTransitions(ctx.state);
        v36 = v128;
        *(_DWORD *)(v128 + 536) = data->frameCount;
        ++*(_DWORD *)(v36 + 548);
      }
      else
      {
        v35 = v124;
        v34 = v121;
      }
      v132 = v125->R_RT_Handle;
      R_SunShadowCache_GetDepthRt((R_RT_DepthHandle *)&v133, cachedSunShadowIndex, (R_RT_DepthHandle *)&v132);
      v132 = v133;
      v37 = ctx.source;
      v38 = R_RT_Handle::GetSurface(&v132)->m_image.m_base.height;
      v39 = R_RT_Handle::GetSurface(&v132);
      R_SetRenderTargetSize(v37, v39->m_image.m_base.width, v38, GFX_USE_VIEWPORT_FOR_VIEW);
      v132 = v133;
      R_HW_AddResourceTransition(ctx.state, &v132, cacheRtBeforeState, D3D12_RESOURCE_STATE_DEPTH_WRITE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
      R_FlushResourceTransitions(ctx.state);
      v132 = v133;
      *(GfxCmdBufContext *)&v117.m_surfaceID = ctx;
      R_SetRenderTargetsInternal_DepthOnly((GfxCmdBufContext *)&v117, (R_RT_DepthHandle *)&v132, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_sunshadow.cpp(360)");
      if ( ctx.state->depthRangeType != GFX_DEPTH_RANGE_FULL )
        R_ChangeDepthRange(ctx.state, GFX_DEPTH_RANGE_FULL);
      R_SetViewportStruct(ctx.source, &viewport);
      R_SetViewportAndScissorSeparate(ctx.state, &viewport, &viewport);
      *(GfxCmdBufContext *)&v117.m_surfaceID = ctx;
      R_ClearDepthViewport((GfxCmdBufContext *)&v117);
      R_Set3D(ctx.source);
      R_UpdateViewport(ctx.source, &viewport);
      R_ProfBeginNamedEvent(ctx.state, "Cached Sun Shadow cell BSP");
      R_DrawListIter_Init(&drawLista, &drawListIter);
      *(GfxCmdBufContext *)&v117.m_surfaceID = ctx;
      R_DrawSurfs_Unsorted((GfxCmdBufContext *)&v117, &drawListIter, TECHNIQUE_BUILD_SHADOWMAP_DEPTH, v34);
      *(unsigned int *)((char *)&data->drawListIter[0].iteratorCount + v35) += drawListIter.iteratorCount;
      R_ProfEndNamedEvent(ctx.state);
      R_ProfBeginNamedEvent(ctx.state, "Cached Sun Shadow cell smodel");
      R_DrawListIter_Init(&v134, &drawListIter);
      *(GfxCmdBufContext *)&v117.m_surfaceID = ctx;
      R_DrawSurfs_Unsorted((GfxCmdBufContext *)&v117, &drawListIter, TECHNIQUE_BUILD_SHADOWMAP_DEPTH, v34);
      *(unsigned int *)((char *)&data->drawListIter[0].iteratorCount + v35) += drawListIter.iteratorCount;
      R_ProfEndNamedEvent(ctx.state);
      if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_r_resummarizeSunCacheFinal, "r_resummarizeSunCacheFinal") )
      {
        *(GfxCmdBufContext *)&v117.m_surfaceID = ctx;
        R_ResummarizeDepth((GfxCmdBufContext *)&v117);
      }
      if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_r_resolveSunCacheFinal, "r_resolveSunCacheFinal") )
      {
        *(GfxCmdBufContext *)&v117.m_surfaceID = ctx;
        R_ResolveDepth((GfxCmdBufContext *)&v117);
      }
      v132 = v133;
      R_HW_AddResourceTransition(ctx.state, &v132, D3D12_RESOURCE_STATE_DEPTH_WRITE, cacheRtBeforeState, D3D12_RESOURCE_BARRIER_FLAG_NONE);
      R_FlushResourceTransitions(ctx.state);
      v40 = (__int64)v126;
      v126[134] = data->frameCount;
      ++*(_DWORD *)(v40 + 548);
      goto LABEL_122;
    }
    if ( v119 )
    {
LABEL_122:
      *(GfxCmdBufContext *)&v117.m_surfaceID = ctx;
      R_SetRenderTargetsInternal_None((GfxCmdBufContext *)&v117, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_sunshadow.cpp(653)");
      *(GfxCmdBufContext *)&v117.m_surfaceID = ctx;
      R_DrawListEnd((GfxCmdBufContext *)&v117, v129);
      goto LABEL_123;
    }
    if ( v29 && cachedSunShadowIndex == partitionIndexa && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_sunshadow.cpp", 411, ASSERT_TYPE_ASSERT, "(!sunShadowOverlap->bspEntry || cachedSunShadowIndex != cachedBspSunShadowIndex)", (const char *)&queryFormat, "!sunShadowOverlap->bspEntry || cachedSunShadowIndex != cachedBspSunShadowIndex") )
      __debugbreak();
    if ( drawLista.bspSurfList.count && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_sunshadow.cpp", 412, ASSERT_TYPE_ASSERT, "(bspDrawList.bspSurfList.count == 0)", (const char *)&queryFormat, "bspDrawList.bspSurfList.count == 0") )
      __debugbreak();
    _RDI = SunShadowPartitionCache->gfxCachedSunShadowOverlap[v18].updateExtentsMask;
    if ( _RDI )
    {
      R_ProfBeginNamedEvent(ctx.state, "Sun Shadow copy cell BSPonly to Full for smodel lod change rects");
      if ( !SunShadowPartitionCache->gfxCachedSunShadowOverlap[v18].bspEntry && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_sunshadow.cpp", 419, ASSERT_TYPE_ASSERT, "(sunShadowOverlap->bspEntry)", (const char *)&queryFormat, "sunShadowOverlap->bspEntry") )
        __debugbreak();
      v42 = v125;
      v123 = v125->R_RT_Handle;
      R_SunShadowCache_GetDepthRt((R_RT_DepthHandle *)&v132, partitionIndexa, (R_RT_DepthHandle *)&v123);
      v123 = v42->R_RT_Handle;
      R_SunShadowCache_GetDepthRt((R_RT_DepthHandle *)&v133, cachedSunShadowIndex, (R_RT_DepthHandle *)&v123);
      if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_sm_sunBspBlitCS, "sm_sunBspBlitCS") )
      {
        v123 = v133;
        R_HW_AddResourceTransition(ctx.state, &v123, cacheRtBeforeState, D3D12XBOX_RESOURCE_STATE_PRESERVE_COMPRESSED_DEPTH|D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
        R_FlushResourceTransitions(ctx.state);
        MapSize = R_SunShadow_GetMapSize();
        v44 = MapSize >> 1;
        v45 = MapSize >> 4;
        if ( ((MapSize >> 4) & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_sunshadow.cpp", 431, ASSERT_TYPE_ASSERT, "( subcellSize % 8 == 0 )", "cached sun shadow subcellSize must be a multiple of 8 for htile copy") )
          __debugbreak();
        if ( viewport.width != v44 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_sunshadow.cpp", 432, ASSERT_TYPE_ASSERT, "( staticViewport.width ) == ( cellSize )", "%s == %s\n\t%i, %i", "staticViewport.width", "cellSize", viewport.width, v44) )
          __debugbreak();
        if ( viewport.height != v44 )
        {
          LODWORD(v115) = v44;
          LODWORD(v114) = viewport.height;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_sunshadow.cpp", 433, ASSERT_TYPE_ASSERT, "( staticViewport.height ) == ( cellSize )", "%s == %s\n\t%i, %i", "staticViewport.height", "cellSize", v114, v115) )
            __debugbreak();
        }
        if ( SunShadowPartitionCache->gfxCachedSunShadowOverlap[v18].bspEntry->viewport.width != v44 )
        {
          LODWORD(v115) = v44;
          LODWORD(v114) = SunShadowPartitionCache->gfxCachedSunShadowOverlap[v18].bspEntry->viewport.width;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_sunshadow.cpp", 434, ASSERT_TYPE_ASSERT, "( sunShadowOverlap->bspEntry->viewport.width ) == ( cellSize )", "%s == %s\n\t%i, %i", "sunShadowOverlap->bspEntry->viewport.width", "cellSize", v114, v115) )
            __debugbreak();
        }
        if ( SunShadowPartitionCache->gfxCachedSunShadowOverlap[v18].bspEntry->viewport.height != v44 )
        {
          LODWORD(v115) = v44;
          LODWORD(v114) = SunShadowPartitionCache->gfxCachedSunShadowOverlap[v18].bspEntry->viewport.height;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_sunshadow.cpp", 435, ASSERT_TYPE_ASSERT, "( sunShadowOverlap->bspEntry->viewport.height ) == ( cellSize )", "%s == %s\n\t%i, %i", "sunShadowOverlap->bspEntry->viewport.height", "cellSize", v114, v115) )
            __debugbreak();
        }
        v46 = 0;
        v47 = SunShadowPartitionCache->gfxCachedSunShadowOverlap[v18].bspEntry;
        y = viewport.y;
        x = viewport.x;
        do
        {
          __asm { tzcnt   r8, rdi }
          _RDI &= ~(1i64 << _R8);
          v51 = v45 * ((unsigned int)_R8 >> 3);
          LODWORD(_R8) = v45 * (_R8 & 7);
          *(_DWORD *)&v117.m_surfaceID = _R8 + v47->viewport.x;
          *((_DWORD *)&v117.m_surfaceID + 1) = v51 + v47->viewport.y;
          v117.m_tracking.m_allocCounter = x + _R8;
          *(&v117.m_tracking.m_allocCounter + 1) = y + v51;
          v139[v46++] = *(base_vec4_t<unsigned int> *)&v117.m_surfaceID;
        }
        while ( _RDI );
        v123 = v133;
        v117 = v132;
        R_CopyCompressedDepthRectList(ctx.state, (R_RT_DepthHandle *)&v117, &v123, v139, v46, v45, v45, 0.0, 1.0, 0);
        v123 = v133;
        R_HW_AddResourceTransition(ctx.state, &v123, D3D12XBOX_RESOURCE_STATE_PRESERVE_COMPRESSED_DEPTH|D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_DEPTH_WRITE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
        R_FlushResourceTransitions(ctx.state);
        v123 = v133;
        *(GfxCmdBufContext *)&v117.m_surfaceID = ctx;
        R_SetRenderTargetsInternal_DepthOnly((GfxCmdBufContext *)&v117, (R_RT_DepthHandle *)&v123, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_sunshadow.cpp(457)");
        if ( ctx.state->depthRangeType != GFX_DEPTH_RANGE_FULL )
          R_ChangeDepthRange(ctx.state, GFX_DEPTH_RANGE_FULL);
        v117 = v133;
        v52 = ctx.source;
        v53 = R_RT_Handle::GetSurface(&v117)->m_image.m_base.height;
        v54 = R_RT_Handle::GetSurface(&v117);
        R_SetRenderTargetSize(v52, v54->m_image.m_base.width, v53, GFX_USE_VIEWPORT_FOR_VIEW);
        R_SetViewportStruct(ctx.source, &viewport);
        R_SetViewportAndScissorSeparate(ctx.state, &viewport, &viewport);
        R_Set3D(ctx.source);
        R_UpdateViewport(ctx.source, &viewport);
      }
      else
      {
        width = (float)R_RT_Handle::GetSurface(&v132)->m_image.m_base.width;
        v56 = (float)R_RT_Handle::GetSurface(&v132)->m_image.m_base.height;
        v57 = (unsigned int *)SunShadowPartitionCache->gfxCachedSunShadowOverlap[v18].bspEntry;
        v58 = 0i64;
        *(float *)&v58 = (float)v57[126];
        *(float *)&v58 = *(float *)&v58 * (float)(1.0 / width);
        v59 = v58;
        *(float *)&v58 = (float)v57[127];
        v60 = *(float *)&v58 * (float)(1.0 / v56);
        v61 = 0i64;
        *(float *)&v61 = (float)v57[128];
        *(float *)&v61 = *(float *)&v61 * (float)(1.0 / width);
        v62 = v61;
        *(float *)&v61 = (float)v57[129];
        v63 = *(float *)&v61 * (float)(1.0 / v56);
        viewInfoIndex = data->viewInfoIndex;
        if ( (unsigned int)viewInfoIndex >= 6 )
        {
          LODWORD(drawOutputa) = data->viewInfoIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_meshdata.h", 161, ASSERT_TYPE_ASSERT, "(unsigned)( viewInfoIndex ) < (unsigned)( 6 )", "viewInfoIndex doesn't index GFX_MAX_CLIENT_VIEWINFOS\n\t%i not in [0, %i)", drawOutputa, 6) )
            __debugbreak();
        }
        if ( !R_IsCachedSunShadowPartition(&data->sunShadow, v21) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_meshdata.h", 162, ASSERT_TYPE_ASSERT, "(R_IsCachedSunShadowPartition( sunShadow, partitionIndex ))", (const char *)&queryFormat, "R_IsCachedSunShadowPartition( sunShadow, partitionIndex )") )
          __debugbreak();
        if ( LODWORD(h) >= 0xA )
        {
          LODWORD(s0) = 10;
          *(float *)&drawOutputa = h;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_meshdata.h", 163, ASSERT_TYPE_ASSERT, "(unsigned)( cellIndex ) < (unsigned)( ( 9 + 1 ) )", "cellIndex doesn't index CACHED_SUN_SHADOW_CELL_MAX_OVERLAP\n\t%i not in [0, %i)", drawOutputa, s0) )
            __debugbreak();
        }
        mesh = &gfxMeshGlob.sunShadowBatchedQuadMesh[0][viewInfoIndex][v21 - data->sunShadow.firstCachedSunShadowPartition][LODWORD(h)].meshData;
        R_BeginUpdateBatchedQuadMesh(mesh);
        v65 = 0;
        __asm { tzcnt   rbx, rdi }
        v67 = _RBX & 7;
        v69 = 0i64;
        *(float *)&v69 = (float)((unsigned int)_RBX >> 3);
        v68 = v69;
        v70 = 0i64;
        *(float *)&v70 = (float)(R_SunShadow_GetMapSize() >> 1);
        *(float *)&v70 = *(float *)&v70 * 0.125;
        v71 = v70;
        v72 = (float)(_RBX & 7);
        *(float *)&v70 = *(float *)&v70 * v72;
        v73 = v70;
        v75 = v71;
        *(float *)&v75 = *(float *)&v71 * *(float *)&v68;
        v74 = v75;
        v77 = v62;
        v76 = *(float *)&v62 * 0.125;
        v78 = v63 * 0.125;
        *(float *)&v77 = (float)((float)(*(float *)&v62 * 0.125) * v72) + *(float *)&v59;
        v79 = v77;
        v80 = v68;
        *(float *)&v80 = (float)(*(float *)&v68 * v78) + v60;
        _XMM7 = v80;
        v82 = _RDI >> _RBX;
        if ( v82 )
        {
          v83 = mesh;
          while ( 1 )
          {
            v84 = v82;
            if ( (v82 & 1) != 0 )
            {
              v85 = v65++;
              v86 = v79;
              *(float *)&v86 = *(float *)&v79 + v76;
              R_UpdateBatchedQuadMesh(v83, v85, *(float *)&v73, *(float *)&v74, *(float *)&v71, *(float *)&v71, *(float *)&v79, *(float *)&_XMM7, *(float *)&v79 + v76, *(float *)&_XMM7 + v78, 0xFFFFFFFF);
            }
            else
            {
              v86 = v79;
              *(float *)&v86 = *(float *)&v79 + v76;
            }
            v79 = v86;
            v87 = ++v67;
            if ( v67 == 8 )
            {
              v67 = 0;
              v73 = 0i64;
              v88 = v74;
              *(float *)&v88 = *(float *)&v74 + *(float *)&v71;
              v74 = v88;
              v79 = v59;
            }
            else
            {
              v89 = v73;
              *(float *)&v89 = *(float *)&v73 + *(float *)&v71;
              v73 = v89;
            }
            v82 >>= 1;
            _XMM0 = v87;
            __asm
            {
              vpcmpeqd xmm2, xmm0, xmm1
              vblendvps xmm0, xmm7, xmm9, xmm2
            }
            h = *(float *)&_XMM0;
            if ( v84 < 2 )
              break;
            _XMM7 = LODWORD(h);
          }
          data = *(const GfxBackEndData **)&v117.m_surfaceID;
        }
        v93 = mesh;
        R_EndUpdateBatchedQuadMesh(mesh);
        v123 = v133;
        R_HW_AddResourceTransition(ctx.state, &v123, cacheRtBeforeState, D3D12_RESOURCE_STATE_DEPTH_WRITE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
        R_FlushResourceTransitions(ctx.state);
        v123 = v133;
        *(GfxCmdBufContext *)&v117.m_surfaceID = ctx;
        R_SetRenderTargetsInternal_DepthOnly((GfxCmdBufContext *)&v117, (R_RT_DepthHandle *)&v123, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_sunshadow.cpp(505)");
        if ( ctx.state->depthRangeType != GFX_DEPTH_RANGE_FULL )
          R_ChangeDepthRange(ctx.state, GFX_DEPTH_RANGE_FULL);
        v117 = v133;
        v94 = ctx.source;
        v95 = R_RT_Handle::GetSurface(&v117)->m_image.m_base.height;
        v96 = R_RT_Handle::GetSurface(&v117);
        R_SetRenderTargetSize(v94, v96->m_image.m_base.width, v95, GFX_USE_VIEWPORT_FOR_VIEW);
        v97 = R_RT_Handle::GetSurface(&v132);
        R_SetCodeImageTextureInternal(ctx.source, 0, &v97->m_image.m_base, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_sunshadow.cpp(509)");
        R_SetViewportStruct(ctx.source, &viewport);
        R_Set2D(ctx.source);
        R_SetViewportAndScissorSeparate(ctx.state, &viewport, &viewport);
        R_UpdateViewport(ctx.source, &viewport);
        v98 = ctx.source;
        *(_QWORD *)ctx.source->input.consts[150].v = 1065353216i64;
        *(_QWORD *)&v98->input.consts[150].xyz.z = 0i64;
        ++v98->constVersions[150];
        *(GfxCmdBufContext *)&v117.m_surfaceID = ctx;
        R_DrawBatchedQuadMesh((GfxCmdBufContext *)&v117, rgp.floatZWriteDepthMaterial, v93, v65);
        R_Set3D(ctx.source);
      }
      R_ProfEndNamedEvent(ctx.state);
      if ( SunShadowPartitionCache->gfxCachedSunShadowOverlap[v18].newTerrainSurfs )
      {
        R_ProfBeginNamedEvent(ctx.state, "Cached Sun Shadow cell terrain");
        R_DrawListIter_Init(&drawLista, &drawListIter);
        *(GfxCmdBufContext *)&v117.m_surfaceID = ctx;
        v99 = v121;
        R_DrawSurfs_Unsorted((GfxCmdBufContext *)&v117, &drawListIter, TECHNIQUE_BUILD_SHADOWMAP_DEPTH, v121);
        *(unsigned int *)((char *)&data->drawListIter[0].iteratorCount + v124) += drawListIter.iteratorCount;
        R_ProfEndNamedEvent(ctx.state);
        v100 = v126;
        v126[136] = data->frameCount;
        ++v100[139];
      }
      else
      {
        v100 = v126;
        v99 = v121;
      }
      R_ProfBeginNamedEvent(ctx.state, "Cached Sun Shadow cell smodels for lod changes");
      R_DrawListIter_Init(&v134, &drawListIter);
      *(GfxCmdBufContext *)&v117.m_surfaceID = ctx;
      R_DrawSurfs_Unsorted((GfxCmdBufContext *)&v117, &drawListIter, TECHNIQUE_BUILD_SHADOWMAP_DEPTH, v99);
      data->drawListIter[v99].iteratorCount += drawListIter.iteratorCount;
      R_ProfEndNamedEvent(ctx.state);
      if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_r_resummarizeSunCacheFinal, "r_resummarizeSunCacheFinal") )
      {
        *(GfxCmdBufContext *)&v117.m_surfaceID = ctx;
        R_ResummarizeDepth((GfxCmdBufContext *)&v117);
      }
      if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_r_resolveSunCacheFinal, "r_resolveSunCacheFinal") )
      {
        *(GfxCmdBufContext *)&v117.m_surfaceID = ctx;
        R_ResolveDepth((GfxCmdBufContext *)&v117);
      }
      v123 = v133;
      v101 = cacheRtBeforeState;
      R_HW_AddResourceTransition(ctx.state, &v123, D3D12_RESOURCE_STATE_DEPTH_WRITE, cacheRtBeforeState, D3D12_RESOURCE_BARRIER_FLAG_NONE);
      R_FlushResourceTransitions(ctx.state);
      v100[135] = data->frameCount;
      ++v100[138];
    }
    else
    {
      if ( SunShadowPartitionCache->gfxCachedSunShadowOverlap[v18].newTerrainSurfs )
      {
        v123 = v125->R_RT_Handle;
        R_SunShadowCache_GetDepthRt((R_RT_DepthHandle *)&v132, cachedSunShadowIndex, (R_RT_DepthHandle *)&v123);
        v133 = v132;
        v102 = ctx.source;
        v103 = R_RT_Handle::GetSurface(&v133)->m_image.m_base.height;
        v104 = R_RT_Handle::GetSurface(&v133);
        R_SetRenderTargetSize(v102, v104->m_image.m_base.width, v103, GFX_USE_VIEWPORT_FOR_VIEW);
        v123 = v132;
        R_HW_AddResourceTransition(ctx.state, &v123, cacheRtBeforeState, D3D12_RESOURCE_STATE_DEPTH_WRITE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
        R_FlushResourceTransitions(ctx.state);
        v123 = v132;
        *(GfxCmdBufContext *)&v117.m_surfaceID = ctx;
        R_SetRenderTargetsInternal_DepthOnly((GfxCmdBufContext *)&v117, (R_RT_DepthHandle *)&v123, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_sunshadow.cpp(576)");
        v105 = ctx.state;
        if ( ctx.state->depthRangeType != GFX_DEPTH_RANGE_FULL )
        {
          R_ChangeDepthRange(ctx.state, GFX_DEPTH_RANGE_FULL);
          v105 = ctx.state;
        }
        R_SetViewportAndScissorSeparate(v105, &viewport, &viewport);
        R_SetViewportStruct(ctx.source, &viewport);
        R_Set3D(ctx.source);
        R_UpdateViewport(ctx.source, &viewport);
        R_ProfBeginNamedEvent(ctx.state, "Cached Sun Shadow cell terrain");
        R_DrawListIter_Init(&drawLista, &drawListIter);
        *(GfxCmdBufContext *)&v117.m_surfaceID = ctx;
        R_DrawSurfs_Unsorted((GfxCmdBufContext *)&v117, &drawListIter, TECHNIQUE_BUILD_SHADOWMAP_DEPTH, v121);
        v106 = v124;
        *(unsigned int *)((char *)&data->drawListIter[0].iteratorCount + v124) += drawListIter.iteratorCount;
        R_ProfEndNamedEvent(ctx.state);
        if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_r_resummarizeSunCacheFinal, "r_resummarizeSunCacheFinal") )
        {
          *(GfxCmdBufContext *)&v117.m_surfaceID = ctx;
          R_ResummarizeDepth((GfxCmdBufContext *)&v117);
        }
        if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_r_resolveSunCacheFinal, "r_resolveSunCacheFinal") )
        {
          *(GfxCmdBufContext *)&v117.m_surfaceID = ctx;
          R_ResolveDepth((GfxCmdBufContext *)&v117);
        }
        v123 = v132;
        R_HW_AddResourceTransition(ctx.state, &v123, D3D12_RESOURCE_STATE_DEPTH_WRITE, cacheRtBeforeState, D3D12_RESOURCE_BARRIER_FLAG_NONE);
        R_FlushResourceTransitions(ctx.state);
        *(_DWORD *)(staticEntry + 544) = data->frameCount;
        ++*(_DWORD *)(staticEntry + 556);
        v101 = cacheRtBeforeState;
        goto LABEL_110;
      }
      v101 = cacheRtBeforeState;
    }
    v106 = v124;
LABEL_110:
    if ( SunShadowPartitionCache->gfxCachedSunShadowOverlap[v18].newTerrainSurfs && !SunShadowPartitionCache->gfxCachedSunShadowOverlap[v18].terrainSkipBspTile )
    {
      if ( !SunShadowPartitionCache->gfxCachedSunShadowOverlap[v18].bspEntry && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_sunshadow.cpp", 613, ASSERT_TYPE_ASSERT, "(sunShadowOverlap->bspEntry)", (const char *)&queryFormat, "sunShadowOverlap->bspEntry") )
        __debugbreak();
      v123 = v125->R_RT_Handle;
      R_SunShadowCache_GetDepthRt((R_RT_DepthHandle *)&v132, partitionIndexa, (R_RT_DepthHandle *)&v123);
      v133 = v132;
      v107 = ctx.source;
      v108 = R_RT_Handle::GetSurface(&v133)->m_image.m_base.height;
      v109 = R_RT_Handle::GetSurface(&v133);
      R_SetRenderTargetSize(v107, v109->m_image.m_base.width, v108, GFX_USE_VIEWPORT_FOR_VIEW);
      v123 = v132;
      R_HW_AddResourceTransition(ctx.state, &v123, v101, D3D12_RESOURCE_STATE_DEPTH_WRITE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
      R_FlushResourceTransitions(ctx.state);
      v123 = v132;
      *(GfxCmdBufContext *)&v117.m_surfaceID = ctx;
      R_SetRenderTargetsInternal_DepthOnly((GfxCmdBufContext *)&v117, (R_RT_DepthHandle *)&v123, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_sunshadow.cpp(620)");
      v110 = ctx.state;
      if ( ctx.state->depthRangeType != GFX_DEPTH_RANGE_FULL )
      {
        R_ChangeDepthRange(ctx.state, GFX_DEPTH_RANGE_FULL);
        v110 = ctx.state;
      }
      R_SetViewportAndScissorSeparate(v110, &SunShadowPartitionCache->gfxCachedSunShadowOverlap[v18].bspEntry->viewport, &SunShadowPartitionCache->gfxCachedSunShadowOverlap[v18].bspEntry->viewport);
      R_SetViewportStruct(ctx.source, &SunShadowPartitionCache->gfxCachedSunShadowOverlap[v18].bspEntry->viewport);
      R_Set3D(ctx.source);
      R_UpdateViewport(ctx.source, &SunShadowPartitionCache->gfxCachedSunShadowOverlap[v18].bspEntry->viewport);
      R_ProfBeginNamedEvent(ctx.state, "Cached Sun Shadow cell terrain in BSP tile");
      R_DrawListIter_Init(&drawLista, &drawListIter);
      *(GfxCmdBufContext *)&v117.m_surfaceID = ctx;
      R_DrawSurfs_Unsorted((GfxCmdBufContext *)&v117, &drawListIter, TECHNIQUE_BUILD_SHADOWMAP_DEPTH, v121);
      *(unsigned int *)((char *)&data->drawListIter[0].iteratorCount + v106) += drawListIter.iteratorCount;
      R_ProfEndNamedEvent(ctx.state);
      if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_r_resummarizeSunCacheBSP, "r_resummarizeSunCacheBSP") )
      {
        *(GfxCmdBufContext *)&v117.m_surfaceID = ctx;
        R_ResummarizeDepth((GfxCmdBufContext *)&v117);
      }
      if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_r_resolveSunCacheBSP, "r_resolveSunCacheBSP") )
      {
        *(GfxCmdBufContext *)&v117.m_surfaceID = ctx;
        R_ResolveDepth((GfxCmdBufContext *)&v117);
      }
      v123 = v132;
      R_HW_AddResourceTransition(ctx.state, &v123, D3D12_RESOURCE_STATE_DEPTH_WRITE, v101, D3D12_RESOURCE_BARRIER_FLAG_NONE);
      R_FlushResourceTransitions(ctx.state);
      v111 = v128;
      *(_DWORD *)(v128 + 544) = data->frameCount;
      ++*(_DWORD *)(v111 + 556);
    }
    goto LABEL_122;
  }
LABEL_123:
  Sys_ProfEndNamedEvent();
  GfxCmdBufStateLocal::~GfxCmdBufStateLocal(&state);
  GfxCmdBufSourceStateLocal::~GfxCmdBufSourceStateLocal(&v138);
  Profile_EndInternal(NULL);
}

/*
==============
R_DrawSunshadow_DrawCascade
==============
*/
void R_DrawSunshadow_DrawCascade(const GfxViewInfo *viewInfo, GfxDrawListType drawListType, R_RT_DepthHandle *depthRt, MaterialTechniqueType techniqueOverride, GfxDrawCallOutput *drawOutput)
{
  __int64 v7; 
  const char *DrawListTypeName; 
  const GfxBackEndData *data; 
  int v11; 
  unsigned int *p_iteratorCount; 
  unsigned int height; 
  const R_RT_Surface *Surface; 
  GfxCmdBufContext ctx; 
  R_RT_Handle v16; 
  __int64 v17; 
  R_RT_DepthHandle v18; 
  GfxViewport viewport; 
  GfxDrawList drawList; 
  GfxDrawListIter drawListIter; 
  GfxCmdBufStateLocal state; 
  GfxCmdBufSourceStateLocal v23; 

  v17 = -2i64;
  v7 = drawListType;
  Profile_Begin(91);
  DrawListTypeName = R_GetDrawListTypeName((GfxDrawListType)v7);
  Sys_ProfBeginNamedEvent(0xFFC0C0C0, DrawListTypeName);
  GfxCmdBufStateLocal::GfxCmdBufStateLocal(&state);
  GfxCmdBufSourceStateLocal::GfxCmdBufSourceStateLocal(&v23);
  *(_QWORD *)&viewport.x = 0i64;
  viewport.width = R_RT_Handle::GetSurface(depthRt)->m_image.m_base.width;
  viewport.height = R_RT_Handle::GetSurface(depthRt)->m_image.m_base.height;
  drawList = viewInfo->drawList[v7];
  data = viewInfo->input.data;
  v11 = 0;
  if ( (_DWORD)v7 != 28 )
    v11 = v7 - 24;
  p_iteratorCount = &data->drawListIter[v7].iteratorCount;
  *p_iteratorCount = 1;
  if ( R_DrawListStart(&state, &v23, viewInfo, &data->sunShadow.partition[v11].viewParms, NULL, drawOutput) )
  {
    *p_iteratorCount = 0;
    ctx.source = &v23;
    ctx.state = &state;
    v23.viewStatsTarget = GFX_VIEW_STATS_SHADOW_SUN;
    R_GP_SetScenePassIndex(&v23, viewInfo->input.data, 1u);
    R_SetPersistentTables(&ctx, data, PERSISTENT_TABLE_SCENE);
    v18 = *depthRt;
    *(GfxCmdBufContext *)&v16.m_surfaceID = ctx;
    R_SetRenderTargetsInternal_DepthOnly((GfxCmdBufContext *)&v16, &v18, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_sunshadow.cpp(129)");
    v16 = depthRt->R_RT_Handle;
    height = R_RT_Handle::GetSurface(&v16)->m_image.m_base.height;
    Surface = R_RT_Handle::GetSurface(&v16);
    R_SetRenderTargetSize(&v23, Surface->m_image.m_base.width, height, GFX_USE_VIEWPORT_FOR_VIEW);
    R_SetViewportStruct(&v23, &viewport);
    R_SetViewportAndScissorSeparate(ctx.state, &viewport, &viewport);
    R_Set3D(ctx.source);
    R_UpdateViewport(ctx.source, &viewport);
    if ( ctx.state->depthRangeType != GFX_DEPTH_RANGE_FULL )
      R_ChangeDepthRange(ctx.state, GFX_DEPTH_RANGE_FULL);
    if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_r_resummarizeSunCascadeBegin, "r_resummarizeSunCascadeBegin") )
    {
      *(GfxCmdBufContext *)&v16.m_surfaceID = ctx;
      R_ResummarizeDepth((GfxCmdBufContext *)&v16);
    }
    R_DrawListIter_Init(&drawList, &drawListIter);
    *(GfxCmdBufContext *)&v16.m_surfaceID = ctx;
    R_DrawSurfs_Unsorted((GfxCmdBufContext *)&v16, &drawListIter, techniqueOverride, (GfxDrawListType)v7);
    *p_iteratorCount = drawListIter.iteratorCount;
    if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_r_resummarizeSunCascadeEnd, "r_resummarizeSunCascadeEnd") )
    {
      *(GfxCmdBufContext *)&v16.m_surfaceID = ctx;
      R_ResummarizeDepth((GfxCmdBufContext *)&v16);
    }
    if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_r_resolveSunCascade, "r_resolveSunCascade") && (_DWORD)v7 != 24 || Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_r_resolveSunCascadeViewmodel, "r_resolveSunCascadeViewmodel") && (_DWORD)v7 == 24 )
    {
      *(GfxCmdBufContext *)&v16.m_surfaceID = ctx;
      R_ResolveDepth((GfxCmdBufContext *)&v16);
    }
    *(GfxCmdBufContext *)&v16.m_surfaceID = ctx;
    R_DrawListEnd((GfxCmdBufContext *)&v16, drawOutput);
  }
  Sys_ProfEndNamedEvent();
  GfxCmdBufSourceStateLocal::~GfxCmdBufSourceStateLocal(&v23);
  GfxCmdBufStateLocal::~GfxCmdBufStateLocal(&state);
  Profile_EndInternal(NULL);
}

/*
==============
R_DrawSunshadow_DrawTranslucent
==============
*/
void R_DrawSunshadow_DrawTranslucent(const GfxViewInfo *viewInfo, const GfxDrawList *drawList, const R_RT_Group *rtGroup, GfxDrawCallOutput *drawOutput)
{
  const char *DrawListTypeName; 
  __int16 v9; 
  unsigned __int16 v10; 
  const char *v11; 
  const char *v12; 
  int v13; 
  R_RT_Image *blackImage; 
  unsigned int height; 
  const R_RT_Surface *Surface; 
  R_RT_Handle *AnyRt; 
  unsigned int v18; 
  R_RT_Handle *v19; 
  const R_RT_Surface *v20; 
  GfxCmdBufContext ctx; 
  R_RT_Handle result; 
  R_RT_Handle v23; 
  __int64 v24; 
  GfxCmdBufStateLocal state; 
  GfxCmdBufSourceStateLocal v26; 

  v24 = -2i64;
  if ( !viewInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_sunshadow.cpp", 752, ASSERT_TYPE_ASSERT, "(viewInfo)", (const char *)&queryFormat, "viewInfo") )
    __debugbreak();
  if ( !drawList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_sunshadow.cpp", 753, ASSERT_TYPE_ASSERT, "(drawList)", (const char *)&queryFormat, "drawList") )
    __debugbreak();
  if ( !drawOutput && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_sunshadow.cpp", 754, ASSERT_TYPE_ASSERT, "(drawOutput)", (const char *)&queryFormat, "drawOutput") )
    __debugbreak();
  Profile_Begin(93);
  DrawListTypeName = R_GetDrawListTypeName(DRAWLIST_SUNSHADOW_END);
  Sys_ProfBeginNamedEvent(0xFFC0C0C0, DrawListTypeName);
  GfxCmdBufStateLocal::GfxCmdBufStateLocal(&state);
  GfxCmdBufSourceStateLocal::GfxCmdBufSourceStateLocal(&v26);
  if ( R_DrawListStart(&state, &v26, viewInfo, &viewInfo->input.data->sunShadow.partition[3].viewParms, NULL, drawOutput) )
  {
    ctx.source = &v26;
    ctx.state = &state;
    v26.viewStatsTarget = GFX_VIEW_STATS_SHADOW_SUN_TRANS;
    R_GP_SetScenePassIndex(&v26, viewInfo->input.data, 1u);
    R_SetPersistentTables(&ctx, viewInfo->input.data, PERSISTENT_TABLE_SCENE);
    if ( !R_RT_Handle::IsValid(&rtGroup->m_depthRt) )
    {
      blackImage = (R_RT_Image *)rgp.blackImage;
      goto LABEL_24;
    }
    v9 = rtGroup->m_depthRt.m_surfaceID & 0x7FFF;
    if ( v9 )
      v10 = v9 | 0x8000;
    else
      v10 = 0;
    result.m_surfaceID = v10;
    result.m_tracking = rtGroup->m_depthRt.m_tracking;
    v23 = result;
    if ( v10 )
    {
      R_RT_Handle::GetSurface(&v23);
      if ( (R_RT_Handle::GetSurface(&v23)->m_rtFlagsInternal & 0x10) == 0 )
      {
        v11 = "!unionHandle.IsValid() || unionHandle.IsDepth()";
        v12 = "(!unionHandle.IsValid() || unionHandle.IsDepth())";
        v13 = 277;
LABEL_20:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", v13, ASSERT_TYPE_ASSERT, v12, (const char *)&queryFormat, v11) )
          __debugbreak();
      }
    }
    else if ( result.m_tracking.m_allocCounter )
    {
      v11 = "!this->m_tracking.m_allocCounter";
      v12 = "(!this->m_tracking.m_allocCounter)";
      v13 = 100;
      goto LABEL_20;
    }
    blackImage = &R_RT_Handle::GetSurface(&v23)->m_image;
LABEL_24:
    v26.input.codeImages[0] = &blackImage->m_base;
    *(GfxCmdBufContext *)&result.m_surfaceID = ctx;
    R_SetRenderTargetsInternal((GfxCmdBufContext *)&result, rtGroup, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_sunshadow.cpp(785)");
    v23 = *R_RT_Group::GetAnyRt((R_RT_Group *)rtGroup, &result);
    height = R_RT_Handle::GetSurface(&v23)->m_image.m_base.height;
    Surface = R_RT_Handle::GetSurface(&v23);
    R_SetRenderTargetSize(&v26, Surface->m_image.m_base.width, height, GFX_USE_VIEWPORT_FOR_VIEW);
    AnyRt = R_RT_Group::GetAnyRt((R_RT_Group *)rtGroup, &v23);
    v18 = R_RT_Handle::GetSurface(AnyRt)->m_image.m_base.height;
    v19 = R_RT_Group::GetAnyRt((R_RT_Group *)rtGroup, &result);
    v20 = R_RT_Handle::GetSurface(v19);
    R_SetViewportValues(&v26, 0, 0, v20->m_image.m_base.width, v18);
    if ( ctx.state->depthRangeType != GFX_DEPTH_RANGE_FULL )
      R_ChangeDepthRange(ctx.state, GFX_DEPTH_RANGE_FULL);
    *(GfxCmdBufContext *)&result.m_surfaceID = ctx;
    R_DrawSurfs_Unsorted((GfxCmdBufContext *)&result, &viewInfo->input.data->drawListIter[27], TECHNIQUE_BUILD_TRANS_SHADOWMAP, DRAWLIST_SUNSHADOW_END);
    *(GfxCmdBufContext *)&result.m_surfaceID = ctx;
    R_DrawListEnd((GfxCmdBufContext *)&result, drawOutput);
  }
  Sys_ProfEndNamedEvent();
  GfxCmdBufSourceStateLocal::~GfxCmdBufSourceStateLocal(&v26);
  GfxCmdBufStateLocal::~GfxCmdBufStateLocal(&state);
  Profile_EndInternal(NULL);
}

