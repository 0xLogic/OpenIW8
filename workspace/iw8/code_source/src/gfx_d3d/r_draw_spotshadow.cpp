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
  const R_RT_Surface *Surface; 
  R_SpotShadow_StaleCacheEntry *stale; 
  unsigned int spotShadowUpdateCount; 
  GfxCmdBufContext ctx; 
  GfxDrawList *drawLista[2]; 
  R_RT_Handle v26; 
  __int64 v27; 
  R_RT_DepthHandle v28; 
  GfxDrawListIter drawListIter; 
  GfxCmdBufStateLocal state; 
  GfxCmdBufSourceStateLocal v31; 

  v27 = -2i64;
  *(_QWORD *)&v26.m_surfaceID = depthRt;
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
  GfxCmdBufSourceStateLocal::GfxCmdBufSourceStateLocal(&v31);
  p_iteratorCount = &data->drawListIter[v7].iteratorCount;
  *p_iteratorCount = 1;
  if ( R_DrawListStart(&state, &v31, viewInfo, &data->spotShadowUpdates[spotShadowUpdateIndex].viewportParms.viewParms, NULL, drawOutput) )
  {
    *p_iteratorCount = 0;
    ctx.source = &v31;
    ctx.state = &state;
    R_GP_SetScenePassIndex(&v31, viewInfo->input.data, 1u);
    R_SetPersistentTables(&ctx, data, PERSISTENT_TABLE_SCENE);
    v31.viewStatsTarget = GFX_VIEW_STATS_SHADOW_SPOT;
    _RBX = *(_QWORD *)&v26.m_surfaceID;
    __asm
    {
      vmovups ymm0, ymmword ptr [rbx]
      vmovups [rbp+52C0h+var_5330], ymm0
      vmovups xmm1, xmmword ptr [rsp+53C0h+ctx.source]
      vmovdqa xmmword ptr [rsp+53C0h+var_5360.m_surfaceID], xmm1
    }
    R_SetRenderTargetsInternal_DepthOnly((GfxCmdBufContext *)&v26, &v28, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_spotshadow.cpp(362)");
    __asm
    {
      vmovups ymm0, ymmword ptr [rbx]
      vmovups ymmword ptr [rsp+53C0h+var_5360.m_surfaceID], ymm0
    }
    LODWORD(_RBX) = R_RT_Handle::GetSurface(&v26)->m_image.m_base.height;
    Surface = R_RT_Handle::GetSurface(&v26);
    R_SetRenderTargetSize(&v31, Surface->m_image.m_base.width, _RBX, GFX_USE_VIEWPORT_FOR_VIEW);
    R_SetViewportStruct(&v31, &v11->viewportParms.viewport);
    R_SetViewportAndScissorSeparate(ctx.state, &v11->viewportParms.viewport, &v11->viewportParms.viewport);
    if ( ctx.state->depthRangeType != GFX_DEPTH_RANGE_FULL )
      R_ChangeDepthRange(ctx.state, GFX_DEPTH_RANGE_FULL);
    R_DrawListIter_Init(drawLista[0], &drawListIter);
    __asm
    {
      vmovups xmm0, xmmword ptr [rsp+53C0h+ctx.source]
      vmovdqa xmmword ptr [rsp+53C0h+drawList], xmm0
    }
    R_DrawSurfs_Unsorted((GfxCmdBufContext *)drawLista, &drawListIter, TECHNIQUE_BUILD_SHADOWMAP_DEPTH, (GfxDrawListType)(spotShadowUpdateIndex + 37));
    *p_iteratorCount += drawListIter.iteratorCount;
    if ( useHTileMask && !R_SpotShadow_ShouldUseHTileMask(v11) )
    {
      __asm
      {
        vmovups xmm0, xmmword ptr [rsp+53C0h+ctx.source]
        vmovdqa xmmword ptr [rsp+53C0h+drawList], xmm0
      }
      R_ResolveDepth((GfxCmdBufContext *)drawLista);
    }
    __asm
    {
      vmovups xmm0, xmmword ptr [rsp+53C0h+ctx.source]
      vmovdqa xmmword ptr [rsp+53C0h+drawList], xmm0
    }
    R_DrawListEnd((GfxCmdBufContext *)drawLista, drawOutput);
    stale = data->spotShadowUpdates[spotShadowUpdateIndex].stale;
    if ( stale && data->spotShadowUpdates[spotShadowUpdateIndex].needsDynamicShadows )
    {
      ++stale->dynUpdateCount;
      data->spotShadowUpdates[spotShadowUpdateIndex].stale->dynUpdateFrame = data->frameCount;
    }
  }
  Sys_ProfEndNamedEvent();
  GfxCmdBufSourceStateLocal::~GfxCmdBufSourceStateLocal(&v31);
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
  void *v14; 
  __int64 v15; 
  const char *DrawListTypeName; 
  const GfxBackEndData *data; 
  const GfxSpotShadowUpdate *v20; 
  GfxCmdBufSourceState *v21; 
  GfxCmdBufSourceState *source; 
  unsigned int height; 
  const R_RT_Surface *Surface; 
  R_SpotShadow_ActiveCacheEntry *v35; 
  bool v39; 
  unsigned int smodelsChangedCount; 
  GfxMeshData *p_meshData; 
  unsigned int v49; 
  R_RT_Image *p_m_image; 
  GfxCmdBufSourceState *v65; 
  GfxCmdBufInput *p_input; 
  GfxCmdBufSourceState *v67; 
  GfxDrawListType v77; 
  R_RT_Image *v90; 
  GfxCmdBufSourceState *v91; 
  GfxCmdBufInput *v92; 
  GfxCmdBufSourceState *v93; 
  R_SpotShadow_ActiveCacheEntry *active; 
  R_SpotShadow_StaleCacheEntry *stale; 
  float fmt; 
  float drawOutputa; 
  float s0; 
  float v111; 
  float v112; 
  float v113; 
  GfxCmdBufContext ctx; 
  GfxCmdBufContext v115; 
  GfxDrawListType v116; 
  R_RT_Handle v117; 
  R_RT_DepthHandle *v118; 
  GfxDrawCallOutput *v119; 
  GfxCmdBufContext v120; 
  R_RT_Handle v121; 
  const GfxViewInfo *v122; 
  __int64 v123; 
  R_RT_Handle v124; 
  R_RT_Handle v125; 
  GfxDrawList drawLista; 
  GfxDrawList v127; 
  GfxDrawListIter drawListIter; 
  GfxCmdBufStateLocal state; 
  GfxCmdBufSourceStateLocal v130; 
  char v136; 

  v14 = alloca(v8);
  v123 = -2i64;
  __asm
  {
    vmovaps [rsp+55E0h+var_50], xmm6
    vmovaps [rsp+55E0h+var_60], xmm7
    vmovaps [rsp+55E0h+var_70], xmm8
    vmovaps [rsp+55E0h+var_80], xmm9
    vmovaps [rsp+55E0h+var_90], xmm10
  }
  v118 = depthRt;
  v15 = drawListType;
  _R12 = drawList;
  v122 = viewInfo;
  *(_QWORD *)&v121.m_surfaceID = cacheRt;
  v119 = drawOutput;
  Profile_Begin(89);
  v116 = spotShadowUpdateIndex + 29;
  DrawListTypeName = R_GetDrawListTypeName((GfxDrawListType)(spotShadowUpdateIndex + 29));
  Sys_ProfBeginNamedEvent(0xFFC0C0C0, DrawListTypeName);
  data = viewInfo->input.data;
  if ( spotShadowUpdateIndex >= data->spotShadowUpdateCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_spotshadow.cpp", 31, ASSERT_TYPE_ASSERT, "(unsigned)( spotShadowUpdateIndex ) < (unsigned)( data->spotShadowUpdateCount )", "spotShadowUpdateIndex doesn't index data->spotShadowUpdateCount\n\t%i not in [0, %i)", spotShadowUpdateIndex, data->spotShadowUpdateCount) )
    __debugbreak();
  v120.source = (GfxCmdBufSourceState *)spotShadowUpdateIndex;
  v20 = &data->spotShadowUpdates[spotShadowUpdateIndex];
  GfxCmdBufStateLocal::GfxCmdBufStateLocal(&state);
  GfxCmdBufSourceStateLocal::GfxCmdBufSourceStateLocal(&v130);
  v21 = (GfxCmdBufSourceState *)(664 * v15);
  v115.source = v21;
  *(_DWORD *)((char *)&v21[72].input.consts[83].v[3] + (_QWORD)data) = 1;
  if ( R_DrawListStart(&state, &v130, viewInfo, &data->spotShadowUpdates[spotShadowUpdateIndex].viewportParms.viewParms, NULL, v119) )
  {
    *(float *)((char *)&v21[72].input.consts[83].v[3] + (_QWORD)data) = 0.0;
    ctx.source = &v130;
    ctx.state = &state;
    R_GP_SetScenePassIndex(&v130, viewInfo->input.data, 1u);
    R_SetPersistentTables(&ctx, data, PERSISTENT_TABLE_SCENE);
    v130.viewStatsTarget = GFX_VIEW_STATS_SHADOW_SPOT;
    _RAX = v118;
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr [rbp+54E0h+var_54C0.m_surfaceID], ymm0
    }
    source = ctx.source;
    height = R_RT_Handle::GetSurface(&v125)->m_image.m_base.height;
    Surface = R_RT_Handle::GetSurface(&v125);
    R_SetRenderTargetSize(source, Surface->m_image.m_base.width, height, GFX_USE_VIEWPORT_FOR_VIEW);
    R_SetViewportStruct(ctx.source, &v20->viewportParms.viewport);
    R_SetViewportAndScissorSeparate(ctx.state, &v20->viewportParms.viewport, &v20->viewportParms.viewport);
    if ( ctx.state->depthRangeType != GFX_DEPTH_RANGE_FULL )
      R_ChangeDepthRange(ctx.state, GFX_DEPTH_RANGE_FULL);
    if ( !data->spotShadowUpdates[spotShadowUpdateIndex].activeStatus )
    {
      if ( !R_SpotShadow_NeedsBSPSurfs(v20) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_spotshadow.cpp", 291, ASSERT_TYPE_ASSERT, "(R_SpotShadow_NeedsBSPSurfs( spotShadowUpdate ))", (const char *)&queryFormat, "R_SpotShadow_NeedsBSPSurfs( spotShadowUpdate )") )
        __debugbreak();
      _RAX = v118;
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovups [rbp+54E0h+var_5550], ymm0
        vmovups xmm1, xmmword ptr [rsp+55E0h+ctx.source]
        vmovdqa [rsp+55E0h+var_5570], xmm1
      }
      R_SetRenderTargetsInternal_DepthOnly(&v115, (R_RT_DepthHandle *)&v117, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_spotshadow.cpp(295)");
      R_DrawListIter_Init(_R12, &drawListIter);
      __asm
      {
        vmovups xmm0, xmmword ptr [rsp+55E0h+ctx.source]
        vmovdqa [rsp+55E0h+var_5570], xmm0
      }
      R_DrawSurfs_Unsorted(&v115, &drawListIter, TECHNIQUE_BUILD_SHADOWMAP_DEPTH, v116);
      *(_DWORD *)((char *)&v21[72].input.consts[83].v[3] + (_QWORD)data) += drawListIter.iteratorCount;
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
    memset_0(v127.smodelSurfList, 0, 0x74ui64);
    v127.codeSurfList.listType = GFX_CODE_SURFLIST_TYPE_COUNT;
    __asm
    {
      vmovups xmm0, xmmword ptr [r12]
      vmovups xmmword ptr [rbp+54E0h+var_5400.bspSurfList.count], xmm0
      vmovups xmm1, xmmword ptr [r12+88h]
      vmovups xmmword ptr [rbp+54E0h+var_5400.superTerrainSurfList.surfs], xmm1
    }
    memset_0(&drawLista, 0, sizeof(drawLista));
    drawLista.codeSurfList.listType = GFX_CODE_SURFLIST_TYPE_COUNT;
    __asm
    {
      vmovups xmm0, xmmword ptr [r12+10h]
      vmovups xmmword ptr [rbp+54E0h+drawList.smodelSurfList.surfDataBytes], xmm0
      vmovsd  xmm1, qword ptr [r12+20h]
      vmovsd  [rbp+54E0h+drawList.smodelSurfList.visData], xmm1
      vmovups xmm0, xmmword ptr [r12+28h]
      vmovups xmmword ptr [rbp+54E0h+drawList.smodelSurfList.surfDataBytes+18h], xmm0
      vmovsd  xmm1, qword ptr [r12+38h]
      vmovsd  [rbp+54E0h+drawList.smodelSurfList.visData+18h], xmm1
      vmovups xmm0, xmmword ptr [r12+40h]
      vmovups xmmword ptr [rbp+54E0h+drawList.smodelSurfList.surfDataBytes+30h], xmm0
      vmovsd  xmm1, qword ptr [r12+50h]
      vmovsd  [rbp+54E0h+drawList.smodelSurfList.visData+30h], xmm1
    }
    if ( !data->spotShadowUpdates[spotShadowUpdateIndex].active && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_spotshadow.cpp", 83, ASSERT_TYPE_ASSERT, "(spotShadowUpdate->active != nullptr)", (const char *)&queryFormat, "spotShadowUpdate->active != nullptr") )
      __debugbreak();
    v35 = data->spotShadowUpdates[spotShadowUpdateIndex].active;
    _RDI = *(_QWORD *)&v121.m_surfaceID;
    __asm
    {
      vmovups ymm0, ymmword ptr [rdi]
      vmovups [rbp+54E0h+var_5510], ymm0
    }
    R_SpotShadow_ActiveCacheEntry::GetSubsetDepthRt(v35, (const R_RT_DepthHandle *)&v125, R_SpotShadow_ActiveCacheSubsetID_BspOnly, (R_RT_DepthHandle *)&v121);
    __asm
    {
      vmovups ymm0, ymmword ptr [rdi]
      vmovups [rbp+54E0h+var_5510], ymm0
    }
    R_SpotShadow_ActiveCacheEntry::GetSubsetDepthRt(v35, (const R_RT_DepthHandle *)&v124, R_SpotShadow_ActiveCacheSubsetID_Final, (R_RT_DepthHandle *)&v121);
    v39 = useHTileMask;
    if ( data->spotShadowUpdates[spotShadowUpdateIndex].activeStatus == 1 )
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rbp+54E0h+var_54C0.m_surfaceID]
        vmovups [rbp+54E0h+var_5550], ymm0
      }
      R_HW_AddResourceTransition(ctx.state, &v117, R_SPOTSHADOW_ACTIVECACHE_STATE, D3D12_RESOURCE_STATE_DEPTH_WRITE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
      R_FlushResourceTransitions(ctx.state);
      __asm
      {
        vmovups ymm0, ymmword ptr [rbp+54E0h+var_54C0.m_surfaceID]
        vmovups [rbp+54E0h+var_5550], ymm0
        vmovups xmm1, xmmword ptr [rsp+55E0h+ctx.source]
        vmovdqa [rsp+55E0h+var_5570], xmm1
      }
      R_SetRenderTargetsInternal_DepthOnly(&v115, (R_RT_DepthHandle *)&v117, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_spotshadow.cpp(96)");
      R_ProfBeginNamedEvent(ctx.state, "Clear spot shadow map");
      R_ClearScreen(ctx.state, 0x10u, 0);
      R_ProfEndNamedEvent(ctx.state);
      if ( !R_SpotShadow_NeedsBSPSurfs(v20) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_spotshadow.cpp", 102, ASSERT_TYPE_ASSERT, "(R_SpotShadow_NeedsBSPSurfs( spotShadowUpdate ))", (const char *)&queryFormat, "R_SpotShadow_NeedsBSPSurfs( spotShadowUpdate )") )
        __debugbreak();
      R_ProfBeginNamedEvent(ctx.state, "Cached Spot Shadow Map BSP");
      R_DrawListIter_Init(&v127, &drawListIter);
      __asm
      {
        vmovups xmm0, xmmword ptr [rsp+55E0h+ctx.source]
        vmovdqa [rsp+55E0h+var_5570], xmm0
      }
      v77 = v116;
      R_DrawSurfs_Unsorted(&v115, &drawListIter, TECHNIQUE_BUILD_SHADOWMAP_DEPTH, v116);
      *(_DWORD *)((char *)&v21[72].input.consts[83].v[3] + (_QWORD)data) += drawListIter.iteratorCount;
      R_ProfEndNamedEvent(ctx.state);
      __asm
      {
        vmovups xmm0, xmmword ptr [rsp+55E0h+ctx.source]
        vmovdqa [rsp+55E0h+var_5570], xmm0
      }
      R_ResolveDepthToState(&v115, R_SPOTSHADOW_ACTIVECACHE_STATE);
      ++data->spotShadowUpdates[spotShadowUpdateIndex].active->bspUpdateCount;
      data->spotShadowUpdates[spotShadowUpdateIndex].active->bspUpdateFrame = data->frameCount;
    }
    else
    {
      if ( data->spotShadowUpdates[spotShadowUpdateIndex].activeStatus != 2 )
      {
        if ( data->spotShadowUpdates[spotShadowUpdateIndex].activeStatus == 3 )
        {
          if ( R_SpotShadow_NeedsBSPSurfs(v20) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_spotshadow.cpp", 167, ASSERT_TYPE_ASSERT, "(!R_SpotShadow_NeedsBSPSurfs( spotShadowUpdate ))", (const char *)&queryFormat, "!R_SpotShadow_NeedsBSPSurfs( spotShadowUpdate )") )
            __debugbreak();
          __asm
          {
            vmovups ymm0, ymmword ptr [rbp+54E0h+var_54E0.m_surfaceID]
            vmovups [rbp+54E0h+var_5510], ymm0
          }
          R_HW_AddResourceTransition(ctx.state, &v121, R_SPOTSHADOW_ACTIVECACHE_STATE, D3D12_RESOURCE_STATE_DEPTH_WRITE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
          R_FlushResourceTransitions(ctx.state);
          __asm
          {
            vmovups ymm0, ymmword ptr [rbp+54E0h+var_54E0.m_surfaceID]
            vmovups [rbp+54E0h+var_5550], ymm0
            vmovups xmm1, xmmword ptr [rsp+55E0h+ctx.source]
            vmovdqa xmmword ptr [rbp+54E0h+var_5510], xmm1
          }
          R_SetRenderTargetsInternal_DepthOnly((GfxCmdBufContext *)&v121, (R_RT_DepthHandle *)&v117, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_spotshadow.cpp(172)");
          R_ProfBeginNamedEvent(ctx.state, "Cached Spot Regenerate for LOD");
          R_ProfBeginNamedEvent(ctx.state, "Blit spot shadow BSP quads");
          smodelsChangedCount = data->spotShadowUpdates[spotShadowUpdateIndex].smodelsChangedCount;
          if ( !smodelsChangedCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_spotshadow.cpp", 179, ASSERT_TYPE_ASSERT, "(smodelsChangedCount > 0)", (const char *)&queryFormat, "smodelsChangedCount > 0") )
            __debugbreak();
          p_meshData = &gfxMeshGlob.spotShadowBatchedQuadMesh[0][0][(__int64)v120.source + 8 * v122->viewInfoIndex].meshData;
          R_BeginUpdateBatchedQuadMesh(p_meshData);
          R_RT_Handle::GetSurface(&v124);
          __asm
          {
            vxorps  xmm6, xmm6, xmm6
            vcvtsi2ss xmm6, xmm6, ecx
          }
          R_RT_Handle::GetSurface(&v124);
          __asm
          {
            vxorps  xmm1, xmm1, xmm1
            vcvtsi2ss xmm1, xmm1, ecx
          }
          v49 = 0;
          if ( smodelsChangedCount )
          {
            __asm
            {
              vmovss  xmm0, cs:__real@3f800000
              vdivss  xmm9, xmm0, xmm6
              vdivss  xmm10, xmm0, xmm1
            }
            _RBX = (__int64)&data->spotShadowUpdates[spotShadowUpdateIndex].smodelChangedBoundingBox[0].minY;
            do
            {
              __asm
              {
                vmovss  xmm2, dword ptr [rbx-8]; x
                vmovss  xmm3, dword ptr [rbx]; y
                vmovss  xmm0, dword ptr [rbx-4]
                vmovss  xmm5, dword ptr [rbx+4]
                vsubss  xmm8, xmm0, xmm2
                vsubss  xmm7, xmm5, xmm3
                vmulss  xmm6, xmm9, xmm2
                vmulss  xmm1, xmm10, xmm0
                vmulss  xmm4, xmm9, xmm3
                vmulss  xmm0, xmm10, xmm5
                vmovss  [rsp+55E0h+var_5598], xmm0
                vmovss  [rsp+55E0h+var_55A0], xmm1
                vmovss  [rsp+55E0h+var_55A8], xmm4
                vmovss  [rsp+55E0h+s0], xmm6
                vmovss  dword ptr [rsp+55E0h+drawOutput], xmm7
                vmovss  dword ptr [rsp+55E0h+fmt], xmm8
              }
              R_UpdateBatchedQuadMesh(p_meshData, v49++, *(float *)&_XMM2, *(float *)&_XMM3, fmt, drawOutputa, s0, v111, v112, v113, 0xFFFFFFFF);
              _RBX += 16i64;
            }
            while ( v49 < smodelsChangedCount );
          }
          R_EndUpdateBatchedQuadMesh(p_meshData);
          p_m_image = &R_RT_Handle::GetSurface(&v125)->m_image;
          v65 = ctx.source;
          if ( !ctx.source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
            __debugbreak();
          p_input = &v65->input;
          if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
            __debugbreak();
          p_input->codeImages[0] = &p_m_image->m_base;
          R_Set2D(ctx.source);
          v67 = ctx.source;
          *(_QWORD *)ctx.source->input.consts[150].v = 1065353216i64;
          *(_QWORD *)&v67->input.consts[150].xyz.z = 0i64;
          ++v67->constVersions[150];
          __asm
          {
            vmovups xmm0, xmmword ptr [rsp+55E0h+ctx.source]
            vmovdqa [rbp+54E0h+var_5520], xmm0
          }
          R_DrawBatchedQuadMesh(&v120, rgp.floatZWriteDepthMaterial, p_meshData, smodelsChangedCount);
          R_Set3D(ctx.source);
          R_ProfEndNamedEvent(ctx.state);
          R_ProfBeginNamedEvent(ctx.state, "Cached Spot Shadow Map SModel");
          R_DrawListIter_Init(&drawLista, &drawListIter);
          __asm
          {
            vmovups xmm0, xmmword ptr [rsp+55E0h+ctx.source]
            vmovdqa [rbp+54E0h+var_5520], xmm0
          }
          R_DrawSurfs_Unsorted(&v120, &drawListIter, TECHNIQUE_BUILD_SHADOWMAP_DEPTH, v116);
          *(_DWORD *)((char *)&v115.source[72].input.consts[83].v[3] + (unsigned __int64)data) += drawListIter.iteratorCount;
          R_ProfEndNamedEvent(ctx.state);
          __asm
          {
            vmovups xmm0, xmmword ptr [rsp+55E0h+ctx.source]
            vmovdqa [rsp+55E0h+var_5570], xmm0
          }
          R_ResummarizeDepth(&v115);
          v39 = useHTileMask;
          if ( useHTileMask )
          {
            __asm
            {
              vmovups ymm0, ymmword ptr [rbp+54E0h+var_54E0.m_surfaceID]
              vmovups [rbp+54E0h+var_5550], ymm0
            }
            R_HW_AddResourceTransition(ctx.state, &v117, D3D12_RESOURCE_STATE_DEPTH_WRITE, (D3D12_RESOURCE_STATES)(R_SPOTSHADOW_ACTIVECACHE_STATE | 0xC00000), D3D12_RESOURCE_BARRIER_FLAG_NONE);
            R_FlushResourceTransitions(ctx.state);
          }
          else
          {
            __asm
            {
              vmovups xmm0, xmmword ptr [rsp+55E0h+ctx.source]
              vmovdqa [rsp+55E0h+var_5570], xmm0
            }
            R_ResolveDepthToState(&v115, R_SPOTSHADOW_ACTIVECACHE_STATE);
          }
          R_ProfEndNamedEvent(ctx.state);
          ++data->spotShadowUpdates[spotShadowUpdateIndex].active->smodelLODUpdateCount;
          data->spotShadowUpdates[spotShadowUpdateIndex].active->smodelLODUpdateFrame = data->frameCount;
        }
LABEL_45:
        if ( !ctx.state->constantBufferAllocations->aborting && !v39 )
        {
          R_ProfBeginNamedEvent(ctx.state, "Blit Spot Shadow Map Statics");
          _RAX = v118;
          __asm
          {
            vmovups ymm0, ymmword ptr [rax]
            vmovups [rbp+54E0h+var_5550], ymm0
            vmovups xmm1, xmmword ptr [rsp+55E0h+ctx.source]
            vmovdqa [rsp+55E0h+var_5570], xmm1
          }
          R_SetRenderTargetsInternal_DepthOnly(&v115, (R_RT_DepthHandle *)&v117, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_spotshadow.cpp(273)");
          v90 = &R_RT_Handle::GetSurface(&v124)->m_image;
          v91 = ctx.source;
          if ( !ctx.source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
            __debugbreak();
          v92 = &v91->input;
          if ( !v92 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
            __debugbreak();
          v92->codeImages[0] = &v90->m_base;
          R_Set2D(ctx.source);
          v93 = ctx.source;
          *(_QWORD *)ctx.source->input.consts[150].v = 1065353216i64;
          *(_QWORD *)&v93->input.consts[150].xyz.z = 0i64;
          ++v93->constVersions[150];
          __asm
          {
            vmovups xmm0, xmmword ptr [rsp+55E0h+ctx.source]
            vmovdqa [rsp+55E0h+var_5570], xmm0
          }
          R_DrawQuadMesh(&v115, rgp.floatZWriteDepthMaterial, &gfxMeshGlob.spotShadowViewMesh.meshData);
          R_Set3D(ctx.source);
          R_ProfEndNamedEvent(ctx.state);
        }
LABEL_61:
        __asm
        {
          vmovups xmm0, xmmword ptr [rsp+55E0h+ctx.source]
          vmovdqa [rsp+55E0h+var_5570], xmm0
        }
        R_DrawListEnd(&v115, v119);
        goto LABEL_62;
      }
      v77 = v116;
    }
    __asm
    {
      vmovups ymm0, ymmword ptr [rbp+54E0h+var_54E0.m_surfaceID]
      vmovups [rbp+54E0h+var_5550], ymm0
    }
    R_HW_AddResourceTransition(ctx.state, &v117, R_SPOTSHADOW_ACTIVECACHE_STATE, D3D12_RESOURCE_STATE_DEPTH_WRITE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(ctx.state);
    __asm
    {
      vmovups ymm0, ymmword ptr [rbp+54E0h+var_54E0.m_surfaceID]
      vmovups [rbp+54E0h+var_5550], ymm0
      vmovups xmm1, xmmword ptr [rsp+55E0h+ctx.source]
      vmovdqa [rsp+55E0h+var_5570], xmm1
    }
    R_SetRenderTargetsInternal_DepthOnly(&v115, (R_RT_DepthHandle *)&v117, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_spotshadow.cpp(124)");
    R_ProfBeginNamedEvent(ctx.state, "Clear spot shadow map");
    R_ClearScreen(ctx.state, 0x10u, 0);
    R_ProfEndNamedEvent(ctx.state);
    if ( !R_SpotShadow_NeedsBSPSurfs(v20) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_spotshadow.cpp", 130, ASSERT_TYPE_ASSERT, "(R_SpotShadow_NeedsBSPSurfs( spotShadowUpdate ))", (const char *)&queryFormat, "R_SpotShadow_NeedsBSPSurfs( spotShadowUpdate )") )
      __debugbreak();
    R_ProfBeginNamedEvent(ctx.state, "Cached Spot Shadow Map BSP");
    R_DrawListIter_Init(&v127, &drawListIter);
    __asm
    {
      vmovups xmm0, xmmword ptr [rsp+55E0h+ctx.source]
      vmovdqa [rsp+55E0h+var_5570], xmm0
    }
    R_DrawSurfs_Unsorted(&v115, &drawListIter, TECHNIQUE_BUILD_SHADOWMAP_DEPTH, v77);
    *(_DWORD *)((char *)&v21[72].input.consts[83].v[3] + (_QWORD)data) += drawListIter.iteratorCount;
    R_ProfEndNamedEvent(ctx.state);
    R_ProfBeginNamedEvent(ctx.state, "Cached Spot Shadow Map SModel");
    R_DrawListIter_Init(&drawLista, &drawListIter);
    __asm
    {
      vmovups xmm0, xmmword ptr [rsp+55E0h+ctx.source]
      vmovdqa [rsp+55E0h+var_5570], xmm0
    }
    R_DrawSurfs_Unsorted(&v115, &drawListIter, TECHNIQUE_BUILD_SHADOWMAP_DEPTH, v77);
    *(_DWORD *)((char *)&v21[72].input.consts[83].v[3] + (_QWORD)data) += drawListIter.iteratorCount;
    R_ProfEndNamedEvent(ctx.state);
    __asm
    {
      vmovups xmm0, xmmword ptr [rsp+55E0h+ctx.source]
      vmovdqa [rsp+55E0h+var_5570], xmm0
    }
    R_ResummarizeDepth(&v115);
    if ( useHTileMask )
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rbp+54E0h+var_54E0.m_surfaceID]
        vmovups [rbp+54E0h+var_5550], ymm0
      }
      R_HW_AddResourceTransition(ctx.state, &v117, D3D12_RESOURCE_STATE_DEPTH_WRITE, (D3D12_RESOURCE_STATES)(R_SPOTSHADOW_ACTIVECACHE_STATE | 0xC00000), D3D12_RESOURCE_BARRIER_FLAG_NONE);
      R_FlushResourceTransitions(ctx.state);
    }
    else
    {
      __asm
      {
        vmovups xmm0, xmmword ptr [rsp+55E0h+ctx.source]
        vmovdqa [rsp+55E0h+var_5570], xmm0
      }
      R_ResolveDepthToState(&v115, R_SPOTSHADOW_ACTIVECACHE_STATE);
    }
    ++data->spotShadowUpdates[spotShadowUpdateIndex].active->smodelUpdateCount;
    data->spotShadowUpdates[spotShadowUpdateIndex].active->smodelUpdateFrame = data->frameCount;
    goto LABEL_45;
  }
LABEL_62:
  Sys_ProfEndNamedEvent();
  GfxCmdBufSourceStateLocal::~GfxCmdBufSourceStateLocal(&v130);
  GfxCmdBufStateLocal::~GfxCmdBufStateLocal(&state);
  Profile_EndInternal(NULL);
  _R11 = &v136;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm10, xmmword ptr [r11-58h]
  }
}

