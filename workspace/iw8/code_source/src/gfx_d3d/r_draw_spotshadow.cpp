/*
==============
R_DrawSpotShadowMapDynamics
==============
*/

void __fastcall R_DrawSpotShadowMapDynamics(const GfxViewInfo *viewInfo, const GfxDrawList *drawList, GfxDrawListType drawListType, R_RT_DepthHandle *depthRt, int spotShadowUpdateIndex, GfxDrawCallOutput *drawOutput, bool useHTileMask)
{
  ?R_DrawSpotShadowMapDynamics@@YAXPEBUGfxViewInfo@@PEBUGfxDrawList@@W4GfxDrawListType@@VR_RT_DepthHandle@@HPEAUGfxDrawCallOutput@@_N@Z(viewInfo, drawList, drawListType, depthRt, spotShadowUpdateIndex, drawOutput, useHTileMask);
}

/*
==============
R_DrawSpotShadowMapStatics
==============
*/

void __fastcall R_DrawSpotShadowMapStatics(const GfxViewInfo *viewInfo, const GfxDrawList *drawList, GfxDrawListType drawListType, R_RT_DepthHandle *depthRt, R_RT_DepthHandle *cacheRt, int spotShadowUpdateIndex, GfxDrawCallOutput *drawOutput, bool useHTileMask)
{
  ?R_DrawSpotShadowMapStatics@@YAXPEBUGfxViewInfo@@PEBUGfxDrawList@@W4GfxDrawListType@@VR_RT_DepthHandle@@3HPEAUGfxDrawCallOutput@@_N@Z(viewInfo, drawList, drawListType, depthRt, cacheRt, spotShadowUpdateIndex, drawOutput, useHTileMask);
}

/*
==============
R_DrawSpotShadowMapDynamics
==============
*/
void R_DrawSpotShadowMapDynamics(const GfxViewInfo *viewInfo, const GfxDrawList *drawList, GfxDrawListType drawListType, R_RT_DepthHandle *depthRt, int spotShadowUpdateIndex, GfxDrawCallOutput *drawOutput, bool useHTileMask)
{
  __int64 v7; 
  const char *DrawListTypeName; 
  const GfxBackEndData *data; 
  const GfxSpotShadowUpdate *v11; 
  unsigned int *p_iteratorCount; 
  R_RT_Handle *v13; 
  const R_RT_Surface *Surface; 
  R_SpotShadow_StaleCacheEntry *stale; 
  unsigned int spotShadowUpdateCount; 
  GfxCmdBufContext ctx; 
  GfxDrawList *drawLista[2]; 
  R_RT_Handle v20; 
  __int64 v21; 
  R_RT_DepthHandle v22; 
  GfxDrawListIter drawListIter; 
  GfxCmdBufStateLocal state; 
  GfxCmdBufSourceStateLocal v25; 

  v21 = -2i64;
  *(_QWORD *)&v20.m_surfaceID = depthRt;
  v7 = drawListType;
  drawLista[0] = (GfxDrawList *)drawList;
  Profile_Begin(90);
  DrawListTypeName = R_GetDrawListTypeName((GfxDrawListType)(spotShadowUpdateIndex + 37));
  Sys_ProfBeginNamedEvent(0xFFC0C0C0, DrawListTypeName);
  data = viewInfo->input.data;
  if ( spotShadowUpdateIndex >= data->spotShadowUpdateCount )
  {
    spotShadowUpdateCount = data->spotShadowUpdateCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_spotshadow.cpp", 335, ASSERT_TYPE_ASSERT, "(unsigned)( spotShadowUpdateIndex ) < (unsigned)( data->spotShadowUpdateCount )", "spotShadowUpdateIndex doesn't index data->spotShadowUpdateCount\n\t%i not in [0, %i)", spotShadowUpdateIndex, spotShadowUpdateCount) )
      __debugbreak();
  }
  v11 = &data->spotShadowUpdates[spotShadowUpdateIndex];
  GfxCmdBufStateLocal::GfxCmdBufStateLocal(&state);
  GfxCmdBufSourceStateLocal::GfxCmdBufSourceStateLocal(&v25);
  p_iteratorCount = &data->drawListIter[v7].iteratorCount;
  *p_iteratorCount = 1;
  if ( R_DrawListStart(&state, &v25, viewInfo, &data->spotShadowUpdates[spotShadowUpdateIndex].viewportParms.viewParms, NULL, drawOutput) )
  {
    *p_iteratorCount = 0;
    ctx.source = &v25;
    ctx.state = &state;
    R_GP_SetScenePassIndex(&v25, viewInfo->input.data, 1u);
    R_SetPersistentTables(&ctx, data, PERSISTENT_TABLE_SCENE);
    v25.viewStatsTarget = GFX_VIEW_STATS_SHADOW_SPOT;
    v13 = *(R_RT_Handle **)&v20.m_surfaceID;
    v22 = **(R_RT_DepthHandle **)&v20.m_surfaceID;
    *(GfxCmdBufContext *)&v20.m_surfaceID = ctx;
    R_SetRenderTargetsInternal_DepthOnly((GfxCmdBufContext *)&v20, &v22, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_spotshadow.cpp(362)");
    v20 = *v13;
    LODWORD(v13) = R_RT_Handle::GetSurface(&v20)->m_image.m_base.height;
    Surface = R_RT_Handle::GetSurface(&v20);
    R_SetRenderTargetSize(&v25, Surface->m_image.m_base.width, (unsigned int)v13, GFX_USE_VIEWPORT_FOR_VIEW);
    R_SetViewportStruct(&v25, &v11->viewportParms.viewport);
    R_SetViewportAndScissorSeparate(ctx.state, &v11->viewportParms.viewport, &v11->viewportParms.viewport);
    if ( ctx.state->depthRangeType != GFX_DEPTH_RANGE_FULL )
      R_ChangeDepthRange(ctx.state, GFX_DEPTH_RANGE_FULL);
    R_DrawListIter_Init(drawLista[0], &drawListIter);
    *(GfxCmdBufContext *)drawLista = ctx;
    R_DrawSurfs_Unsorted((GfxCmdBufContext *)drawLista, &drawListIter, TECHNIQUE_BUILD_SHADOWMAP_DEPTH, (GfxDrawListType)(spotShadowUpdateIndex + 37));
    *p_iteratorCount += drawListIter.iteratorCount;
    if ( useHTileMask && !R_SpotShadow_ShouldUseHTileMask(v11) )
    {
      *(GfxCmdBufContext *)drawLista = ctx;
      R_ResolveDepth((GfxCmdBufContext *)drawLista);
    }
    *(GfxCmdBufContext *)drawLista = ctx;
    R_DrawListEnd((GfxCmdBufContext *)drawLista, drawOutput);
    stale = data->spotShadowUpdates[spotShadowUpdateIndex].stale;
    if ( stale && data->spotShadowUpdates[spotShadowUpdateIndex].needsDynamicShadows )
    {
      ++stale->dynUpdateCount;
      data->spotShadowUpdates[spotShadowUpdateIndex].stale->dynUpdateFrame = data->frameCount;
    }
  }
  Sys_ProfEndNamedEvent();
  GfxCmdBufSourceStateLocal::~GfxCmdBufSourceStateLocal(&v25);
  GfxCmdBufStateLocal::~GfxCmdBufStateLocal(&state);
  Profile_EndInternal(NULL);
}

/*
==============
R_DrawSpotShadowMapStatics
==============
*/
void R_DrawSpotShadowMapStatics(const GfxViewInfo *viewInfo, const GfxDrawList *drawList, GfxDrawListType drawListType, R_RT_DepthHandle *depthRt, R_RT_DepthHandle *cacheRt, int spotShadowUpdateIndex, GfxDrawCallOutput *drawOutput, bool useHTileMask)
{
  signed __int64 v8; 
  void *v9; 
  __int64 v10; 
  const char *DrawListTypeName; 
  const GfxBackEndData *data; 
  const GfxSpotShadowUpdate *v15; 
  GfxCmdBufSourceState *v16; 
  GfxCmdBufSourceState *source; 
  unsigned int height; 
  const R_RT_Surface *Surface; 
  R_SpotShadow_ActiveCacheEntry *v20; 
  R_RT_Handle *v21; 
  bool v22; 
  unsigned int smodelsChangedCount; 
  GfxMeshData *p_meshData; 
  float width; 
  float v26; 
  unsigned int v27; 
  float *p_minY; 
  R_RT_Image *p_m_image; 
  GfxCmdBufSourceState *v30; 
  GfxCmdBufInput *p_input; 
  GfxCmdBufSourceState *v32; 
  GfxDrawListType v33; 
  R_RT_Image *v34; 
  GfxCmdBufSourceState *v35; 
  GfxCmdBufInput *v36; 
  GfxCmdBufSourceState *v37; 
  R_SpotShadow_ActiveCacheEntry *active; 
  R_SpotShadow_StaleCacheEntry *stale; 
  GfxCmdBufContext ctx; 
  GfxCmdBufContext v41; 
  GfxDrawListType v42; 
  R_RT_Handle v43; 
  R_RT_DepthHandle *v44; 
  GfxDrawCallOutput *v45; 
  GfxCmdBufContext v46; 
  R_RT_Handle v47; 
  const GfxViewInfo *v48; 
  __int64 v49; 
  R_RT_Handle v50; 
  R_RT_Handle v51; 
  GfxDrawList drawLista; 
  GfxDrawList v53; 
  GfxDrawListIter drawListIter; 
  GfxCmdBufStateLocal state; 
  GfxCmdBufSourceStateLocal v56; 

  v9 = alloca(v8);
  v49 = -2i64;
  v44 = depthRt;
  v10 = drawListType;
  v48 = viewInfo;
  *(_QWORD *)&v47.m_surfaceID = cacheRt;
  v45 = drawOutput;
  Profile_Begin(89);
  v42 = spotShadowUpdateIndex + 29;
  DrawListTypeName = R_GetDrawListTypeName((GfxDrawListType)(spotShadowUpdateIndex + 29));
  Sys_ProfBeginNamedEvent(0xFFC0C0C0, DrawListTypeName);
  data = viewInfo->input.data;
  if ( spotShadowUpdateIndex >= data->spotShadowUpdateCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_spotshadow.cpp", 31, ASSERT_TYPE_ASSERT, "(unsigned)( spotShadowUpdateIndex ) < (unsigned)( data->spotShadowUpdateCount )", "spotShadowUpdateIndex doesn't index data->spotShadowUpdateCount\n\t%i not in [0, %i)", spotShadowUpdateIndex, data->spotShadowUpdateCount) )
    __debugbreak();
  v46.source = (GfxCmdBufSourceState *)spotShadowUpdateIndex;
  v15 = &data->spotShadowUpdates[spotShadowUpdateIndex];
  GfxCmdBufStateLocal::GfxCmdBufStateLocal(&state);
  GfxCmdBufSourceStateLocal::GfxCmdBufSourceStateLocal(&v56);
  v16 = (GfxCmdBufSourceState *)(664 * v10);
  v41.source = v16;
  *(_DWORD *)((char *)&v16[72].input.consts[83].v[3] + (_QWORD)data) = 1;
  if ( R_DrawListStart(&state, &v56, viewInfo, &data->spotShadowUpdates[spotShadowUpdateIndex].viewportParms.viewParms, NULL, v45) )
  {
    *(float *)((char *)&v16[72].input.consts[83].v[3] + (_QWORD)data) = 0.0;
    ctx.source = &v56;
    ctx.state = &state;
    R_GP_SetScenePassIndex(&v56, viewInfo->input.data, 1u);
    R_SetPersistentTables(&ctx, data, PERSISTENT_TABLE_SCENE);
    v56.viewStatsTarget = GFX_VIEW_STATS_SHADOW_SPOT;
    v51 = v44->R_RT_Handle;
    source = ctx.source;
    height = R_RT_Handle::GetSurface(&v51)->m_image.m_base.height;
    Surface = R_RT_Handle::GetSurface(&v51);
    R_SetRenderTargetSize(source, Surface->m_image.m_base.width, height, GFX_USE_VIEWPORT_FOR_VIEW);
    R_SetViewportStruct(ctx.source, &v15->viewportParms.viewport);
    R_SetViewportAndScissorSeparate(ctx.state, &v15->viewportParms.viewport, &v15->viewportParms.viewport);
    if ( ctx.state->depthRangeType != GFX_DEPTH_RANGE_FULL )
      R_ChangeDepthRange(ctx.state, GFX_DEPTH_RANGE_FULL);
    if ( !data->spotShadowUpdates[spotShadowUpdateIndex].activeStatus )
    {
      if ( !R_SpotShadow_NeedsBSPSurfs(v15) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_spotshadow.cpp", 291, ASSERT_TYPE_ASSERT, "(R_SpotShadow_NeedsBSPSurfs( spotShadowUpdate ))", (const char *)&queryFormat, "R_SpotShadow_NeedsBSPSurfs( spotShadowUpdate )") )
        __debugbreak();
      v43 = v44->R_RT_Handle;
      v41 = ctx;
      R_SetRenderTargetsInternal_DepthOnly(&v41, (R_RT_DepthHandle *)&v43, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_spotshadow.cpp(295)");
      R_DrawListIter_Init(drawList, &drawListIter);
      v41 = ctx;
      R_DrawSurfs_Unsorted(&v41, &drawListIter, TECHNIQUE_BUILD_SHADOWMAP_DEPTH, v42);
      *(_DWORD *)((char *)&v16[72].input.consts[83].v[3] + (_QWORD)data) += drawListIter.iteratorCount;
      active = data->spotShadowUpdates[spotShadowUpdateIndex].active;
      if ( active )
      {
        ++active->bspUpdateCount;
        data->spotShadowUpdates[spotShadowUpdateIndex].active->bspUpdateFrame = data->frameCount;
        ++data->spotShadowUpdates[spotShadowUpdateIndex].active->smodelUpdateCount;
        data->spotShadowUpdates[spotShadowUpdateIndex].active->smodelUpdateFrame = data->frameCount;
      }
      stale = data->spotShadowUpdates[spotShadowUpdateIndex].stale;
      if ( stale )
      {
        ++stale->updateCount;
        data->spotShadowUpdates[spotShadowUpdateIndex].stale->updateFrame = data->frameCount;
      }
      goto LABEL_61;
    }
    memset_0(v53.smodelSurfList, 0, 0x74ui64);
    v53.codeSurfList.listType = GFX_CODE_SURFLIST_TYPE_COUNT;
    v53.bspSurfList = drawList->bspSurfList;
    v53.superTerrainSurfList = drawList->superTerrainSurfList;
    memset_0(&drawLista, 0, sizeof(drawLista));
    drawLista.codeSurfList.listType = GFX_CODE_SURFLIST_TYPE_COUNT;
    drawLista.smodelSurfList[0] = drawList->smodelSurfList[0];
    drawLista.smodelSurfList[1] = drawList->smodelSurfList[1];
    drawLista.smodelSurfList[2] = drawList->smodelSurfList[2];
    if ( !data->spotShadowUpdates[spotShadowUpdateIndex].active && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_spotshadow.cpp", 83, ASSERT_TYPE_ASSERT, "(spotShadowUpdate->active != nullptr)", (const char *)&queryFormat, "spotShadowUpdate->active != nullptr") )
      __debugbreak();
    v20 = data->spotShadowUpdates[spotShadowUpdateIndex].active;
    v21 = *(R_RT_Handle **)&v47.m_surfaceID;
    v47 = **(R_RT_Handle **)&v47.m_surfaceID;
    R_SpotShadow_ActiveCacheEntry::GetSubsetDepthRt(v20, (const R_RT_DepthHandle *)&v51, R_SpotShadow_ActiveCacheSubsetID_BspOnly, (R_RT_DepthHandle *)&v47);
    v47 = *v21;
    R_SpotShadow_ActiveCacheEntry::GetSubsetDepthRt(v20, (const R_RT_DepthHandle *)&v50, R_SpotShadow_ActiveCacheSubsetID_Final, (R_RT_DepthHandle *)&v47);
    v22 = useHTileMask;
    if ( data->spotShadowUpdates[spotShadowUpdateIndex].activeStatus == 1 )
    {
      v43 = v51;
      R_HW_AddResourceTransition(ctx.state, &v43, R_SPOTSHADOW_ACTIVECACHE_STATE, D3D12_RESOURCE_STATE_DEPTH_WRITE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
      R_FlushResourceTransitions(ctx.state);
      v43 = v51;
      v41 = ctx;
      R_SetRenderTargetsInternal_DepthOnly(&v41, (R_RT_DepthHandle *)&v43, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_spotshadow.cpp(96)");
      R_ProfBeginNamedEvent(ctx.state, "Clear spot shadow map");
      R_ClearScreen(ctx.state, 0x10u, 0);
      R_ProfEndNamedEvent(ctx.state);
      if ( !R_SpotShadow_NeedsBSPSurfs(v15) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_spotshadow.cpp", 102, ASSERT_TYPE_ASSERT, "(R_SpotShadow_NeedsBSPSurfs( spotShadowUpdate ))", (const char *)&queryFormat, "R_SpotShadow_NeedsBSPSurfs( spotShadowUpdate )") )
        __debugbreak();
      R_ProfBeginNamedEvent(ctx.state, "Cached Spot Shadow Map BSP");
      R_DrawListIter_Init(&v53, &drawListIter);
      v41 = ctx;
      v33 = v42;
      R_DrawSurfs_Unsorted(&v41, &drawListIter, TECHNIQUE_BUILD_SHADOWMAP_DEPTH, v42);
      *(_DWORD *)((char *)&v16[72].input.consts[83].v[3] + (_QWORD)data) += drawListIter.iteratorCount;
      R_ProfEndNamedEvent(ctx.state);
      v41 = ctx;
      R_ResolveDepthToState(&v41, R_SPOTSHADOW_ACTIVECACHE_STATE);
      ++data->spotShadowUpdates[spotShadowUpdateIndex].active->bspUpdateCount;
      data->spotShadowUpdates[spotShadowUpdateIndex].active->bspUpdateFrame = data->frameCount;
    }
    else
    {
      if ( data->spotShadowUpdates[spotShadowUpdateIndex].activeStatus != 2 )
      {
        if ( data->spotShadowUpdates[spotShadowUpdateIndex].activeStatus == 3 )
        {
          if ( R_SpotShadow_NeedsBSPSurfs(v15) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_spotshadow.cpp", 167, ASSERT_TYPE_ASSERT, "(!R_SpotShadow_NeedsBSPSurfs( spotShadowUpdate ))", (const char *)&queryFormat, "!R_SpotShadow_NeedsBSPSurfs( spotShadowUpdate )") )
            __debugbreak();
          v47 = v50;
          R_HW_AddResourceTransition(ctx.state, &v47, R_SPOTSHADOW_ACTIVECACHE_STATE, D3D12_RESOURCE_STATE_DEPTH_WRITE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
          R_FlushResourceTransitions(ctx.state);
          v43 = v50;
          *(GfxCmdBufContext *)&v47.m_surfaceID = ctx;
          R_SetRenderTargetsInternal_DepthOnly((GfxCmdBufContext *)&v47, (R_RT_DepthHandle *)&v43, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_spotshadow.cpp(172)");
          R_ProfBeginNamedEvent(ctx.state, "Cached Spot Regenerate for LOD");
          R_ProfBeginNamedEvent(ctx.state, "Blit spot shadow BSP quads");
          smodelsChangedCount = data->spotShadowUpdates[spotShadowUpdateIndex].smodelsChangedCount;
          if ( !smodelsChangedCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_spotshadow.cpp", 179, ASSERT_TYPE_ASSERT, "(smodelsChangedCount > 0)", (const char *)&queryFormat, "smodelsChangedCount > 0") )
            __debugbreak();
          p_meshData = &gfxMeshGlob.spotShadowBatchedQuadMesh[0][0][(__int64)v46.source + 8 * v48->viewInfoIndex].meshData;
          R_BeginUpdateBatchedQuadMesh(p_meshData);
          width = (float)R_RT_Handle::GetSurface(&v50)->m_image.m_base.width;
          v26 = (float)R_RT_Handle::GetSurface(&v50)->m_image.m_base.height;
          v27 = 0;
          if ( smodelsChangedCount )
          {
            p_minY = &data->spotShadowUpdates[spotShadowUpdateIndex].smodelChangedBoundingBox[0].minY;
            do
            {
              R_UpdateBatchedQuadMesh(p_meshData, v27++, *(p_minY - 2), *p_minY, *(p_minY - 1) - *(p_minY - 2), p_minY[1] - *p_minY, (float)(1.0 / width) * *(p_minY - 2), (float)(1.0 / width) * *p_minY, (float)(1.0 / v26) * *(p_minY - 1), (float)(1.0 / v26) * p_minY[1], 0xFFFFFFFF);
              p_minY += 4;
            }
            while ( v27 < smodelsChangedCount );
          }
          R_EndUpdateBatchedQuadMesh(p_meshData);
          p_m_image = &R_RT_Handle::GetSurface(&v51)->m_image;
          v30 = ctx.source;
          if ( !ctx.source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
            __debugbreak();
          p_input = &v30->input;
          if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
            __debugbreak();
          p_input->codeImages[0] = &p_m_image->m_base;
          R_Set2D(ctx.source);
          v32 = ctx.source;
          *(_QWORD *)ctx.source->input.consts[150].v = 1065353216i64;
          *(_QWORD *)&v32->input.consts[150].xyz.z = 0i64;
          ++v32->constVersions[150];
          v46 = ctx;
          R_DrawBatchedQuadMesh(&v46, rgp.floatZWriteDepthMaterial, p_meshData, smodelsChangedCount);
          R_Set3D(ctx.source);
          R_ProfEndNamedEvent(ctx.state);
          R_ProfBeginNamedEvent(ctx.state, "Cached Spot Shadow Map SModel");
          R_DrawListIter_Init(&drawLista, &drawListIter);
          v46 = ctx;
          R_DrawSurfs_Unsorted(&v46, &drawListIter, TECHNIQUE_BUILD_SHADOWMAP_DEPTH, v42);
          *(_DWORD *)((char *)&v41.source[72].input.consts[83].v[3] + (unsigned __int64)data) += drawListIter.iteratorCount;
          R_ProfEndNamedEvent(ctx.state);
          v41 = ctx;
          R_ResummarizeDepth(&v41);
          v22 = useHTileMask;
          if ( useHTileMask )
          {
            v43 = v50;
            R_HW_AddResourceTransition(ctx.state, &v43, D3D12_RESOURCE_STATE_DEPTH_WRITE, (D3D12_RESOURCE_STATES)(R_SPOTSHADOW_ACTIVECACHE_STATE | 0xC00000), D3D12_RESOURCE_BARRIER_FLAG_NONE);
            R_FlushResourceTransitions(ctx.state);
          }
          else
          {
            v41 = ctx;
            R_ResolveDepthToState(&v41, R_SPOTSHADOW_ACTIVECACHE_STATE);
          }
          R_ProfEndNamedEvent(ctx.state);
          ++data->spotShadowUpdates[spotShadowUpdateIndex].active->smodelLODUpdateCount;
          data->spotShadowUpdates[spotShadowUpdateIndex].active->smodelLODUpdateFrame = data->frameCount;
        }
LABEL_45:
        if ( !ctx.state->constantBufferAllocations->aborting && !v22 )
        {
          R_ProfBeginNamedEvent(ctx.state, "Blit Spot Shadow Map Statics");
          v43 = v44->R_RT_Handle;
          v41 = ctx;
          R_SetRenderTargetsInternal_DepthOnly(&v41, (R_RT_DepthHandle *)&v43, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_spotshadow.cpp(273)");
          v34 = &R_RT_Handle::GetSurface(&v50)->m_image;
          v35 = ctx.source;
          if ( !ctx.source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
            __debugbreak();
          v36 = &v35->input;
          if ( !v36 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
            __debugbreak();
          v36->codeImages[0] = &v34->m_base;
          R_Set2D(ctx.source);
          v37 = ctx.source;
          *(_QWORD *)ctx.source->input.consts[150].v = 1065353216i64;
          *(_QWORD *)&v37->input.consts[150].xyz.z = 0i64;
          ++v37->constVersions[150];
          v41 = ctx;
          R_DrawQuadMesh(&v41, rgp.floatZWriteDepthMaterial, &gfxMeshGlob.spotShadowViewMesh.meshData);
          R_Set3D(ctx.source);
          R_ProfEndNamedEvent(ctx.state);
        }
LABEL_61:
        v41 = ctx;
        R_DrawListEnd(&v41, v45);
        goto LABEL_62;
      }
      v33 = v42;
    }
    v43 = v50;
    R_HW_AddResourceTransition(ctx.state, &v43, R_SPOTSHADOW_ACTIVECACHE_STATE, D3D12_RESOURCE_STATE_DEPTH_WRITE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(ctx.state);
    v43 = v50;
    v41 = ctx;
    R_SetRenderTargetsInternal_DepthOnly(&v41, (R_RT_DepthHandle *)&v43, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_spotshadow.cpp(124)");
    R_ProfBeginNamedEvent(ctx.state, "Clear spot shadow map");
    R_ClearScreen(ctx.state, 0x10u, 0);
    R_ProfEndNamedEvent(ctx.state);
    if ( !R_SpotShadow_NeedsBSPSurfs(v15) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_spotshadow.cpp", 130, ASSERT_TYPE_ASSERT, "(R_SpotShadow_NeedsBSPSurfs( spotShadowUpdate ))", (const char *)&queryFormat, "R_SpotShadow_NeedsBSPSurfs( spotShadowUpdate )") )
      __debugbreak();
    R_ProfBeginNamedEvent(ctx.state, "Cached Spot Shadow Map BSP");
    R_DrawListIter_Init(&v53, &drawListIter);
    v41 = ctx;
    R_DrawSurfs_Unsorted(&v41, &drawListIter, TECHNIQUE_BUILD_SHADOWMAP_DEPTH, v33);
    *(_DWORD *)((char *)&v16[72].input.consts[83].v[3] + (_QWORD)data) += drawListIter.iteratorCount;
    R_ProfEndNamedEvent(ctx.state);
    R_ProfBeginNamedEvent(ctx.state, "Cached Spot Shadow Map SModel");
    R_DrawListIter_Init(&drawLista, &drawListIter);
    v41 = ctx;
    R_DrawSurfs_Unsorted(&v41, &drawListIter, TECHNIQUE_BUILD_SHADOWMAP_DEPTH, v33);
    *(_DWORD *)((char *)&v16[72].input.consts[83].v[3] + (_QWORD)data) += drawListIter.iteratorCount;
    R_ProfEndNamedEvent(ctx.state);
    v41 = ctx;
    R_ResummarizeDepth(&v41);
    if ( useHTileMask )
    {
      v43 = v50;
      R_HW_AddResourceTransition(ctx.state, &v43, D3D12_RESOURCE_STATE_DEPTH_WRITE, (D3D12_RESOURCE_STATES)(R_SPOTSHADOW_ACTIVECACHE_STATE | 0xC00000), D3D12_RESOURCE_BARRIER_FLAG_NONE);
      R_FlushResourceTransitions(ctx.state);
    }
    else
    {
      v41 = ctx;
      R_ResolveDepthToState(&v41, R_SPOTSHADOW_ACTIVECACHE_STATE);
    }
    ++data->spotShadowUpdates[spotShadowUpdateIndex].active->smodelUpdateCount;
    data->spotShadowUpdates[spotShadowUpdateIndex].active->smodelUpdateFrame = data->frameCount;
    goto LABEL_45;
  }
LABEL_62:
  Sys_ProfEndNamedEvent();
  GfxCmdBufSourceStateLocal::~GfxCmdBufSourceStateLocal(&v56);
  GfxCmdBufStateLocal::~GfxCmdBufStateLocal(&state);
  Profile_EndInternal(NULL);
}

