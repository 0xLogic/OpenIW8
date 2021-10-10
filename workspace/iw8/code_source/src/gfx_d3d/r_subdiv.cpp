/*
==============
R_ExecuteSubdivEdgePointSkinnedComputeCmds
==============
*/

void __fastcall R_ExecuteSubdivEdgePointSkinnedComputeCmds(ComputeCmdBufState *cmdBufState, const ComputeCmdList *list, ComputeCmdType type, const ComputeCmdHeader *header, int levelIndex)
{
  ?R_ExecuteSubdivEdgePointSkinnedComputeCmds@@YAXPEAUComputeCmdBufState@@PEBUComputeCmdList@@W4ComputeCmdType@@PEBUComputeCmdHeader@@H@Z(cmdBufState, list, type, header, levelIndex);
}

/*
==============
R_AllocSurfaceSubdivLevels
==============
*/

void __fastcall R_AllocSurfaceSubdivLevels(XSurface *surf)
{
  ?R_AllocSurfaceSubdivLevels@@YAXPEAUXSurface@@@Z(surf);
}

/*
==============
R_InitSubdivConstantBuffers
==============
*/

void R_InitSubdivConstantBuffers(void)
{
  ?R_InitSubdivConstantBuffers@@YAXXZ();
}

/*
==============
R_GetSurfaceSubdivLevel
==============
*/

unsigned __int8 __fastcall R_GetSurfaceSubdivLevel(const XSurface *surf, int lodLevel)
{
  return ?R_GetSurfaceSubdivLevel@@YAEPEBUXSurface@@H@Z(surf, lodLevel);
}

/*
==============
R_GetModelSubdivLodLevel
==============
*/

unsigned __int8 __fastcall R_GetModelSubdivLodLevel(const XModel *model, int lodIndex, const vec3_t *origin, const tmat33_t<vec3_t> *axis, float scale)
{
  return ?R_GetModelSubdivLodLevel@@YAEPEBUXModel@@HAEBTvec3_t@@AEBT?$tmat33_t@Tvec3_t@@@@M@Z(model, lodIndex, origin, axis, scale);
}

/*
==============
R_GetSkinnedSubdivPatchSurfaceDrawPrimArgsInternal
==============
*/

void __fastcall R_GetSkinnedSubdivPatchSurfaceDrawPrimArgsInternal(GfxDrawPrimArgs *outArgs, const XSurface *surf, int toLevel, unsigned int trackFrameIndex, GfxViewStatsTarget viewStatsTarget, GfxPrimStatsTarget primStatsTarget)
{
  ?R_GetSkinnedSubdivPatchSurfaceDrawPrimArgsInternal@@YAXPEAUGfxDrawPrimArgs@@PEBUXSurface@@HIW4GfxViewStatsTarget@@W4GfxPrimStatsTarget@@@Z(outArgs, surf, toLevel, trackFrameIndex, viewStatsTarget, primStatsTarget);
}

/*
==============
R_AddSModelSubdivTessFactorsCmd
==============
*/

bool __fastcall R_AddSModelSubdivTessFactorsCmd(ComputeCmdList *list, const XSurface *surf, int subdivLevel, int tessFactorsOffset, unsigned int smodelInstanceIndex)
{
  return ?R_AddSModelSubdivTessFactorsCmd@@YA_NPEAUComputeCmdList@@PEBUXSurface@@HHI@Z(list, surf, subdivLevel, tessFactorsOffset, smodelInstanceIndex);
}

/*
==============
R_ExecuteRigidSubdivComputeCmds
==============
*/

void __fastcall R_ExecuteRigidSubdivComputeCmds(ComputeCmdBufState *cmdBufState, const ComputeCmdList *list, ComputeCmdType type, const ComputeCmdHeader *header)
{
  ?R_ExecuteRigidSubdivComputeCmds@@YAXPEAUComputeCmdBufState@@PEBUComputeCmdList@@W4ComputeCmdType@@PEBUComputeCmdHeader@@@Z(cmdBufState, list, type, header);
}

/*
==============
R_SetupSubdivSurface
==============
*/

int __fastcall R_SetupSubdivSurface(GfxCmdBufState *state, XSurface *surf, int toLevel)
{
  return ?R_SetupSubdivSurface@@YAHPEAUGfxCmdBufState@@PEAUXSurface@@H@Z(state, surf, toLevel);
}

/*
==============
R_FreeSurfaceSubdivLevels
==============
*/

void __fastcall R_FreeSurfaceSubdivLevels(XSurface *surf)
{
  ?R_FreeSurfaceSubdivLevels@@YAXPEAUXSurface@@@Z(surf);
}

/*
==============
R_GetSubdivSurfaceVertexCount
==============
*/

int __fastcall R_GetSubdivSurfaceVertexCount(const XSurface *surf, int toLevel)
{
  return ?R_GetSubdivSurfaceVertexCount@@YAHPEBUXSurface@@H@Z(surf, toLevel);
}

/*
==============
R_ExecuteSubdivTessFactorsComputeCmds
==============
*/

void __fastcall R_ExecuteSubdivTessFactorsComputeCmds(ComputeCmdBufState *cmdBufState, const ComputeCmdList *list, ComputeCmdType type, const ComputeCmdHeader *header, int levelIndex)
{
  ?R_ExecuteSubdivTessFactorsComputeCmds@@YAXPEAUComputeCmdBufState@@PEBUComputeCmdList@@W4ComputeCmdType@@PEBUComputeCmdHeader@@H@Z(cmdBufState, list, type, header, levelIndex);
}

/*
==============
R_GetModelSubdivLodLevelWithBounds
==============
*/

unsigned __int8 __fastcall R_GetModelSubdivLodLevelWithBounds(const XModel *model, int lodIndex, const Bounds *transformedBounds, float scale)
{
  return ?R_GetModelSubdivLodLevelWithBounds@@YAEPEBUXModel@@HPEBUBounds@@M@Z(model, lodIndex, transformedBounds, scale);
}

/*
==============
R_FreeSubdivCache
==============
*/

void __fastcall R_FreeSubdivCache(GfxSubdivCache *subdivCache)
{
  ?R_FreeSubdivCache@@YAXPEAUGfxSubdivCache@@@Z(subdivCache);
}

/*
==============
R_ExecuteSubdivTransferSkinnedComputeCmds
==============
*/

void __fastcall R_ExecuteSubdivTransferSkinnedComputeCmds(ComputeCmdBufState *cmdBufState, const ComputeCmdList *list, ComputeCmdType type, const ComputeCmdHeader *header)
{
  ?R_ExecuteSubdivTransferSkinnedComputeCmds@@YAXPEAUComputeCmdBufState@@PEBUComputeCmdList@@W4ComputeCmdType@@PEBUComputeCmdHeader@@@Z(cmdBufState, list, type, header);
}

/*
==============
R_AddRigidSubdivTessFactorsCmd
==============
*/

bool __fastcall R_AddRigidSubdivTessFactorsCmd(ComputeCmdList *list, const XSurface *surf, int subdivLevel, int tessFactorsOffset, int rigidVertList, const GfxPlacement *placement, float scale, GfxViewDomain viewDomain)
{
  return ?R_AddRigidSubdivTessFactorsCmd@@YA_NPEAUComputeCmdList@@PEBUXSurface@@HHHPEBUGfxPlacement@@MW4GfxViewDomain@@@Z(list, surf, subdivLevel, tessFactorsOffset, rigidVertList, placement, scale, viewDomain);
}

/*
==============
R_ExecuteSubdivFacePointSkinnedComputeCmds
==============
*/

void __fastcall R_ExecuteSubdivFacePointSkinnedComputeCmds(ComputeCmdBufState *cmdBufState, const ComputeCmdList *list, ComputeCmdType type, const ComputeCmdHeader *header, int levelIndex)
{
  ?R_ExecuteSubdivFacePointSkinnedComputeCmds@@YAXPEAUComputeCmdBufState@@PEBUComputeCmdList@@W4ComputeCmdType@@PEBUComputeCmdHeader@@H@Z(cmdBufState, list, type, header, levelIndex);
}

/*
==============
Load_SubdivCache
==============
*/

void __fastcall Load_SubdivCache(GfxSubdivCache *subdivCache)
{
  ?Load_SubdivCache@@YAXPEAUGfxSubdivCache@@@Z(subdivCache);
}

/*
==============
R_GetSubdivSurfVertsTotalCacheSize
==============
*/

unsigned int __fastcall R_GetSubdivSurfVertsTotalCacheSize(const XSurface *surf, unsigned int subdivLevel)
{
  return ?R_GetSubdivSurfVertsTotalCacheSize@@YAIPEBUXSurface@@I@Z(surf, subdivLevel);
}

/*
==============
R_AllocSubdivCache
==============
*/

void __fastcall R_AllocSubdivCache(GfxSubdivCache *subdivCache)
{
  ?R_AllocSubdivCache@@YAXPEAUGfxSubdivCache@@@Z(subdivCache);
}

/*
==============
R_AddRigidSubdivComputeCmd
==============
*/

bool __fastcall R_AddRigidSubdivComputeCmd(ComputeCmdList *list, XSurface *surf)
{
  return ?R_AddRigidSubdivComputeCmd@@YA_NPEAUComputeCmdList@@PEAUXSurface@@@Z(list, surf);
}

/*
==============
R_AddSkinnedSubdivComputeCmd
==============
*/

bool __fastcall R_AddSkinnedSubdivComputeCmd(ComputeCmdList *list, XSurface *surf, const GfxModelSkinnedSurface *modelSurf, int subdivLevel, int cacheOffset)
{
  return ?R_AddSkinnedSubdivComputeCmd@@YA_NPEAUComputeCmdList@@PEAUXSurface@@PEIBUGfxModelSkinnedSurface@@HH@Z(list, surf, modelSurf, subdivLevel, cacheOffset);
}

/*
==============
R_SetSubdivPatchParms
==============
*/

void __fastcall R_SetSubdivPatchParms(GfxCmdBufContext *context, const XSurface *surf, int levelIndex, int subdivLevel, int tessFactorsCachePos, int tessFactorsCacheStride)
{
  ?R_SetSubdivPatchParms@@YAXUGfxCmdBufContext@@PEBUXSurface@@HHHH@Z(context, surf, levelIndex, subdivLevel, tessFactorsCachePos, tessFactorsCacheStride);
}

/*
==============
R_ShutdownSubdivConstantBuffers
==============
*/

void R_ShutdownSubdivConstantBuffers(void)
{
  ?R_ShutdownSubdivConstantBuffers@@YAXXZ();
}

/*
==============
R_GetSubdivVertex1Stride
==============
*/

unsigned int __fastcall R_GetSubdivVertex1Stride(const XSurface *surf)
{
  return ?R_GetSubdivVertex1Stride@@YAIPEBUXSurface@@@Z(surf);
}

/*
==============
R_ShutDownSubdivSurface
==============
*/

void __fastcall R_ShutDownSubdivSurface(GfxCmdBufState *state, XSurface *surf)
{
  ?R_ShutDownSubdivSurface@@YAXPEAUGfxCmdBufState@@PEAUXSurface@@@Z(state, surf);
}

/*
==============
R_GetSubdivSurfaceDrawPrimArgsInternal
==============
*/

void __fastcall R_GetSubdivSurfaceDrawPrimArgsInternal(GfxDrawPrimArgs *outArgs, const XSurface *surf, int toLevel, unsigned int trackFrameIndex, GfxViewStatsTarget viewStatsTarget, GfxPrimStatsTarget primStatsTarget)
{
  ?R_GetSubdivSurfaceDrawPrimArgsInternal@@YAXPEAUGfxDrawPrimArgs@@PEBUXSurface@@HIW4GfxViewStatsTarget@@W4GfxPrimStatsTarget@@@Z(outArgs, surf, toLevel, trackFrameIndex, viewStatsTarget, primStatsTarget);
}

/*
==============
R_ExecuteSubdivVertexPointSkinnedComputeCmds
==============
*/

void __fastcall R_ExecuteSubdivVertexPointSkinnedComputeCmds(ComputeCmdBufState *cmdBufState, const ComputeCmdList *list, ComputeCmdType type, const ComputeCmdHeader *header, int levelIndex)
{
  ?R_ExecuteSubdivVertexPointSkinnedComputeCmds@@YAXPEAUComputeCmdBufState@@PEBUComputeCmdList@@W4ComputeCmdType@@PEBUComputeCmdHeader@@H@Z(cmdBufState, list, type, header, levelIndex);
}

/*
==============
R_GetSubdivPatchSurfaceDrawPrimArgsInternal
==============
*/

void __fastcall R_GetSubdivPatchSurfaceDrawPrimArgsInternal(GfxDrawPrimArgs *outArgs, const XSurface *surf, int toLevel, unsigned int trackFrameIndex, GfxViewStatsTarget viewStatsTarget, GfxPrimStatsTarget primStatsTarget)
{
  ?R_GetSubdivPatchSurfaceDrawPrimArgsInternal@@YAXPEAUGfxDrawPrimArgs@@PEBUXSurface@@HIW4GfxViewStatsTarget@@W4GfxPrimStatsTarget@@@Z(outArgs, surf, toLevel, trackFrameIndex, viewStatsTarget, primStatsTarget);
}

/*
==============
R_SetupSubdivPatchStreams
==============
*/

int __fastcall R_SetupSubdivPatchStreams(GfxCmdBufState *state, XSurface *surf, int toLevel)
{
  return ?R_SetupSubdivPatchStreams@@YAHPEAUGfxCmdBufState@@PEAUXSurface@@H@Z(state, surf, toLevel);
}

/*
==============
R_ExecuteSubdivNormalSkinnedComputeCmds
==============
*/

void __fastcall R_ExecuteSubdivNormalSkinnedComputeCmds(ComputeCmdBufState *cmdBufState, const ComputeCmdList *list, ComputeCmdType type, const ComputeCmdHeader *header, int levelIndex)
{
  ?R_ExecuteSubdivNormalSkinnedComputeCmds@@YAXPEAUComputeCmdBufState@@PEBUComputeCmdList@@W4ComputeCmdType@@PEBUComputeCmdHeader@@H@Z(cmdBufState, list, type, header, levelIndex);
}

/*
==============
R_GetSubdivSurfTessFactorsTotalCacheSize
==============
*/

unsigned int __fastcall R_GetSubdivSurfTessFactorsTotalCacheSize(const XSurface *surf, unsigned int subdivLevel)
{
  return ?R_GetSubdivSurfTessFactorsTotalCacheSize@@YAIPEBUXSurface@@I@Z(surf, subdivLevel);
}

/*
==============
R_CacheRigidSubdivLod
==============
*/

bool __fastcall R_CacheRigidSubdivLod(const XModel *model, int lod)
{
  return ?R_CacheRigidSubdivLod@@YA_NPEBUXModel@@H@Z(model, lod);
}

/*
==============
R_ExecuteSubdivTransitionPointSkinnedComputeCmds
==============
*/

void __fastcall R_ExecuteSubdivTransitionPointSkinnedComputeCmds(ComputeCmdBufState *cmdBufState, const ComputeCmdList *list, ComputeCmdType type, const ComputeCmdHeader *header, int levelIndex)
{
  ?R_ExecuteSubdivTransitionPointSkinnedComputeCmds@@YAXPEAUComputeCmdBufState@@PEBUComputeCmdList@@W4ComputeCmdType@@PEBUComputeCmdHeader@@H@Z(cmdBufState, list, type, header, levelIndex);
}

/*
==============
R_AddSkinnedSubdivTessFactorsCmd
==============
*/

bool __fastcall R_AddSkinnedSubdivTessFactorsCmd(ComputeCmdList *list, const XSurface *surf, int subdivLevel, int cacheOffset, int tessFactorsOffset, GfxViewDomain viewDomain, const GfxPlacement *placement)
{
  return ?R_AddSkinnedSubdivTessFactorsCmd@@YA_NPEAUComputeCmdList@@PEBUXSurface@@HHHW4GfxViewDomain@@AEBUGfxPlacement@@@Z(list, surf, subdivLevel, cacheOffset, tessFactorsOffset, viewDomain, placement);
}

/*
==============
Load_SurfaceSubdivInfo
==============
*/

void __fastcall Load_SurfaceSubdivInfo(XSurfaceSubdivInfo **subdivPtr, XSurface *surf)
{
  ?Load_SurfaceSubdivInfo@@YAXPEAPEAUXSurfaceSubdivInfo@@PEAUXSurface@@@Z(subdivPtr, surf);
}

/*
==============
R_SetupSubdivPatchSurface
==============
*/

int __fastcall R_SetupSubdivPatchSurface(GfxCmdBufState *state, XSurface *surf, int toLevel)
{
  return ?R_SetupSubdivPatchSurface@@YAHPEAUGfxCmdBufState@@PEAUXSurface@@H@Z(state, surf, toLevel);
}

/*
==============
R_ShutDownSubdivPatchStreams
==============
*/

void __fastcall R_ShutDownSubdivPatchStreams(GfxCmdBufState *state, XSurface *surf)
{
  ?R_ShutDownSubdivPatchStreams@@YAXPEAUGfxCmdBufState@@PEAUXSurface@@@Z(state, surf);
}

/*
==============
Load_SubdivCache
==============
*/
void Load_SubdivCache(GfxSubdivCache *subdivCache)
{
  if ( subdivCache->size )
    R_CreateGfxWrappedBuffer(&subdivCache->vertexBuffer, GfxWrappedBuffer_Raw, 1, subdivCache->size, GFX_DATA_FORMAT_R32_UINT, 0x109u, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_VERTEX_AND_CONSTANT_BUFFER, NULL, subdivCache->vertexData, "subdivCache");
}

/*
==============
Load_SurfaceSubdivInfo
==============
*/
void Load_SurfaceSubdivInfo(XSurfaceSubdivInfo **subdivPtr, XSurface *surf)
{
  if ( *subdivPtr != surf->subdiv && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_subdiv.cpp", 173, ASSERT_TYPE_ASSERT, "(*subdivPtr == surf->subdiv)", (const char *)&queryFormat, "*subdivPtr == surf->subdiv") )
    __debugbreak();
  R_AllocSurfaceSubdivLevels(surf);
}

/*
==============
R_AddRigidSubdivComputeCmd
==============
*/
bool R_AddRigidSubdivComputeCmd(ComputeCmdList *list, XSurface *surf)
{
  XSurface **v3; 
  bool result; 

  v3 = (XSurface **)R_AllocComputeCmdDataAligned(frontEndDataOut->compute.cmdList, 8, 8u);
  result = 0;
  if ( v3 )
  {
    *v3 = surf;
    if ( R_AddComputeCmd(frontEndDataOut->compute.cmdList, COMPUTECMD_RIGID_SUBDIV, v3) )
      return 1;
  }
  return result;
}

/*
==============
R_AddRigidSubdivTessFactorsCmd
==============
*/
char R_AddRigidSubdivTessFactorsCmd(ComputeCmdList *list, const XSurface *surf, int subdivLevel, int tessFactorsOffset, int rigidVertList, const GfxPlacement *placement, float scale, GfxViewDomain viewDomain)
{
  char *v12; 
  const void *v13; 
  int v14; 
  ComputeCmdType i; 

  if ( subdivLevel >= 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_subdiv.cpp", 2097, ASSERT_TYPE_ASSERT, "( ( subdivLevel < 4 ) )", "( subdivLevel ) = %i", subdivLevel) )
    __debugbreak();
  if ( !surf->subdiv && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_subdiv.cpp", 2100, ASSERT_TYPE_ASSERT, "(subdivInfo)", (const char *)&queryFormat, "subdivInfo") )
    __debugbreak();
  v12 = (char *)R_AllocComputeCmdDataAligned(list, 64, 8u);
  v13 = v12;
  if ( v12 )
  {
    v14 = 0;
    v12[20] = viewDomain;
    *((_DWORD *)v12 + 13) = rigidVertList;
    *(_DWORD *)v12 = 0;
    *((_QWORD *)v12 + 1) = surf;
    *((_DWORD *)v12 + 1) = subdivLevel;
    *((_DWORD *)v12 + 4) = tessFactorsOffset;
    *(GfxPlacement *)(v12 + 24) = *placement;
    *((float *)v12 + 14) = scale;
    if ( subdivLevel < 0 )
      return 1;
    for ( i = COMPUTECMD_SUBDIV_LV0_TESS_FACTORS; R_AddComputeCmd(list, i, v13); i += 6 )
    {
      if ( ++v14 > subdivLevel )
        return 1;
    }
  }
  return 0;
}

/*
==============
R_AddSModelSubdivTessFactorsCmd
==============
*/
char R_AddSModelSubdivTessFactorsCmd(ComputeCmdList *list, const XSurface *surf, int subdivLevel, int tessFactorsOffset, unsigned int smodelInstanceIndex)
{
  _DWORD *v9; 
  const void *v10; 
  int v11; 
  ComputeCmdType i; 

  if ( subdivLevel >= 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_subdiv.cpp", 2178, ASSERT_TYPE_ASSERT, "( ( subdivLevel < 4 ) )", "( subdivLevel ) = %i", subdivLevel) )
    __debugbreak();
  if ( !surf->subdiv && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_subdiv.cpp", 2181, ASSERT_TYPE_ASSERT, "(subdivInfo)", (const char *)&queryFormat, "subdivInfo") )
    __debugbreak();
  v9 = R_AllocComputeCmdDataAligned(list, 64, 8u);
  v10 = v9;
  if ( v9 )
  {
    *((_QWORD *)v9 + 1) = surf;
    v11 = 0;
    *v9 = 2;
    v9[1] = subdivLevel;
    v9[4] = tessFactorsOffset;
    *((_BYTE *)v9 + 20) = 0;
    v9[6] = smodelInstanceIndex;
    if ( subdivLevel < 0 )
      return 1;
    for ( i = COMPUTECMD_SUBDIV_LV0_TESS_FACTORS; R_AddComputeCmd(list, i, v10); i += 6 )
    {
      if ( ++v11 > subdivLevel )
        return 1;
    }
  }
  return 0;
}

/*
==============
R_AddSkinnedSubdivComputeCmd
==============
*/
char R_AddSkinnedSubdivComputeCmd(ComputeCmdList *list, XSurface *surf, const GfxModelSkinnedSurface *modelSurf, int subdivLevel, int cacheOffset)
{
  XSurfaceSubdivInfo *subdiv; 
  int *v10; 
  int *v11; 
  XSurfaceSubdivLevel *levels; 
  int v13; 
  unsigned int *p_edgePointCount; 
  ComputeCmdType i; 

  if ( subdivLevel >= 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_subdiv.cpp", 1979, ASSERT_TYPE_ASSERT, "( ( subdivLevel < 4 ) )", "( subdivLevel ) = %i", subdivLevel) )
    __debugbreak();
  subdiv = surf->subdiv;
  if ( !subdiv && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_subdiv.cpp", 1982, ASSERT_TYPE_ASSERT, "(subdivInfo)", (const char *)&queryFormat, "subdivInfo") )
    __debugbreak();
  v10 = (int *)R_AllocComputeCmdDataAligned(list, 32, 8u);
  v11 = v10;
  if ( v10 )
  {
    *v10 = modelSurf->base.skinnedCachedOffset;
    v10[1] = cacheOffset;
    v10[2] = modelSurf->base.tensionDataOffset;
    v10[3] = modelSurf->base.mayhemChannelsVbOffset;
    v10[4] = subdivLevel;
    *((_QWORD *)v10 + 3) = surf;
    if ( R_AddComputeCmd(list, COMPUTECMD_SUBDIV_LV0_TRANSFER_SKINNED, v10) )
    {
      levels = subdiv->levels;
      v13 = 0;
      if ( subdivLevel < 0 )
        return 1;
      p_edgePointCount = &levels->edgePointCount;
      for ( i = COMPUTECMD_SUBDIV_LV0_EDGE_POINTS_SKINNED; (!*(p_edgePointCount - 3) || R_AddComputeCmd(list, (ComputeCmdType)(i - 1), v11)) && (!*p_edgePointCount || R_AddComputeCmd(list, i, v11)) && (!p_edgePointCount[3] || R_AddComputeCmd(list, (ComputeCmdType)(i + 1), v11)) && (v13 != subdivLevel || (!p_edgePointCount[8] || R_AddComputeCmd(list, (ComputeCmdType)(i - 2), v11)) && (!p_edgePointCount[6] || R_AddComputeCmd(list, (ComputeCmdType)(i + 2), v11))); i += 6 )
      {
        ++v13;
        p_edgePointCount += 74;
        if ( v13 > subdivLevel )
          return 1;
      }
    }
  }
  return 0;
}

/*
==============
R_AddSkinnedSubdivTessFactorsCmd
==============
*/
char R_AddSkinnedSubdivTessFactorsCmd(ComputeCmdList *list, const XSurface *surf, int subdivLevel, int cacheOffset, int tessFactorsOffset, GfxViewDomain viewDomain, const GfxPlacement *placement)
{
  char *v11; 
  const void *v12; 
  int v13; 
  ComputeCmdType i; 

  if ( subdivLevel >= 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_subdiv.cpp", 2139, ASSERT_TYPE_ASSERT, "( ( subdivLevel < 4 ) )", "( subdivLevel ) = %i", subdivLevel) )
    __debugbreak();
  if ( !surf->subdiv && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_subdiv.cpp", 2142, ASSERT_TYPE_ASSERT, "(subdivInfo)", (const char *)&queryFormat, "subdivInfo") )
    __debugbreak();
  v11 = (char *)R_AllocComputeCmdDataAligned(list, 64, 8u);
  v12 = v11;
  if ( v11 )
  {
    *((_DWORD *)v11 + 4) = tessFactorsOffset;
    v11[20] = viewDomain;
    *((_QWORD *)v11 + 1) = surf;
    v13 = 0;
    *(_DWORD *)v11 = 1;
    *((_DWORD *)v11 + 1) = subdivLevel;
    *(GfxPlacement *)(v11 + 24) = *placement;
    *((_DWORD *)v11 + 13) = cacheOffset;
    if ( subdivLevel < 0 )
      return 1;
    for ( i = COMPUTECMD_SUBDIV_LV0_TESS_FACTORS; R_AddComputeCmd(list, i, v12); i += 6 )
    {
      if ( ++v13 > subdivLevel )
        return 1;
    }
  }
  return 0;
}

/*
==============
R_AllocSubdivCache
==============
*/
void R_AllocSubdivCache(GfxSubdivCache *subdivCache)
{
  if ( subdivCache->size )
    R_CreateGfxWrappedBuffer(&subdivCache->vertexBuffer, GfxWrappedBuffer_Raw, 1, subdivCache->size, GFX_DATA_FORMAT_R32_UINT, 0x109u, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_VERTEX_AND_CONSTANT_BUFFER, NULL, subdivCache->vertexData, "subdivCache");
}

/*
==============
R_AllocSurfaceSubdivLevels
==============
*/
void R_AllocSurfaceSubdivLevels(XSurface *surf)
{
  XSurfaceSubdivInfo *subdiv; 
  XSurfaceSubdivLevel *levels; 
  unsigned int v4; 
  const char *TrackingZoneName; 
  ID3D12Resource **p_regularPatchIndexBuffer; 
  int v7; 
  const void *v8; 
  ID3D12Resource *v9; 
  int v10; 
  const void *v11; 
  int v12; 
  int v13; 
  const void *v14; 
  int v15; 
  int v16; 
  int v17; 
  int v18; 
  int v19; 
  char *fmt; 
  char *fmta; 
  char *fmtb; 
  char *fmtc; 
  char *fmtd; 
  char *fmte; 
  GfxBufferCreationContext v26; 
  ID3D12Resource *v27; 
  ID3D12Resource *v28; 
  ID3D12Resource *v29[2]; 
  GfxBufferCreationContext v30; 
  GfxBufferCreationContext v31; 
  GfxBufferCreationContext v32; 
  GfxBufferCreationContext v33; 
  GfxBufferCreationContext v34; 
  GfxBufferCreationContext v35; 
  GfxBufferCreationContext v36; 
  GfxBufferCreationContext v37; 
  GfxBufferCreationContext v38; 
  GfxBufferCreationContext v39; 
  GfxBufferCreationContext v40; 
  GfxBufferCreationContext v41; 
  GfxBufferCreationContext v42; 
  GfxBufferCreationContext v43; 
  GfxBufferCreationContext v44; 
  GfxBufferCreationContext v45; 
  GfxBufferCreationContext v46; 
  ID3D12Resource *buffer; 
  ID3D12Resource *v48; 
  ID3D12Resource *v49; 
  ID3D12Resource *v50; 

  subdiv = surf->subdiv;
  if ( !subdiv && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_subdiv.cpp", 228, ASSERT_TYPE_ASSERT, "(subdivInfo)", (const char *)&queryFormat, "subdivInfo") )
    __debugbreak();
  levels = subdiv->levels;
  v4 = 0;
  TrackingZoneName = R_GetTrackingZoneName();
  if ( surf->subdivLevelCount )
  {
    p_regularPatchIndexBuffer = &levels->regularPatchIndexBuffer;
    do
    {
      v7 = *((_DWORD *)p_regularPatchIndexBuffer - 35);
      if ( v7 )
      {
        v8 = *(p_regularPatchIndexBuffer - 8);
        v30.objectName = "regularPatchIndices";
        v30.zoneName = TrackingZoneName;
        v26 = v30;
        R_AllocStaticIndexBufferWithData(p_regularPatchIndexBuffer, 32 * v7, v8, &v26);
        v9 = *p_regularPatchIndexBuffer;
        v31.objectName = "regularPatchIndexBufferView";
        v31.zoneName = TrackingZoneName;
        v26 = v31;
        R_CreateComputeRawBufferView(v9, (GfxShaderBufferView *)p_regularPatchIndexBuffer + 1, &v26);
        v10 = *((_DWORD *)p_regularPatchIndexBuffer - 35);
        v32.objectName = "regularPatchFlags";
        v32.zoneName = TrackingZoneName;
        fmt = (char *)*(p_regularPatchIndexBuffer - 7);
        v26 = v32;
        R_CreateComputeRawBuffer(4 * ((v10 + 3) & 0xFFFFFFFC), 2u, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, fmt, &buffer, &v26);
        v33.objectName = "regularPatchFlagsView";
        v33.zoneName = TrackingZoneName;
        v26 = v33;
        R_CreateComputeRawBufferView(buffer, (GfxShaderBufferView *)p_regularPatchIndexBuffer + 2, &v26);
        R_DestroyComputeBuffer(&buffer);
        v11 = *(p_regularPatchIndexBuffer - 1);
        if ( v11 )
        {
          v12 = *((_DWORD *)p_regularPatchIndexBuffer - 35);
          v34.zoneName = TrackingZoneName;
          v34.objectName = "regularPatchCones";
          v26 = v34;
          R_CreateComputeRawBuffer(32 * v12, 2u, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, v11, &v48, &v26);
          v35.objectName = "regularPatchConesView";
          v35.zoneName = TrackingZoneName;
          v26 = v35;
          R_CreateComputeRawBufferView(v48, (GfxShaderBufferView *)p_regularPatchIndexBuffer + 8, &v26);
          R_DestroyComputeBuffer(&v48);
        }
        else
        {
          R_AssignNullShaderBufferView((GfxShaderBufferView *)p_regularPatchIndexBuffer + 8);
        }
      }
      v13 = *((_DWORD *)p_regularPatchIndexBuffer - 36);
      if ( v13 )
      {
        v14 = *(p_regularPatchIndexBuffer - 9);
        v36.zoneName = TrackingZoneName;
        v36.objectName = "faceIndices";
        v26 = v36;
        R_AllocStaticIndexBufferWithData(p_regularPatchIndexBuffer + 1, 12 * v13, v14, &v26);
      }
      v15 = *((_DWORD *)p_regularPatchIndexBuffer - 31);
      if ( v15 )
      {
        v37.zoneName = TrackingZoneName;
        v37.objectName = "facePoints";
        fmta = (char *)*(p_regularPatchIndexBuffer - 6);
        v26 = v37;
        R_CreateComputeRawBuffer((v15 + 15) & 0xFFFFFFF0, 2u, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, fmta, &v49, &v26);
        v38.objectName = "facePointsView";
        v38.zoneName = TrackingZoneName;
        v26 = v38;
        R_CreateComputeRawBufferView(v49, (GfxShaderBufferView *)p_regularPatchIndexBuffer + 3, &v26);
        R_DestroyComputeBuffer(&v49);
      }
      v16 = *((_DWORD *)p_regularPatchIndexBuffer - 30);
      if ( v16 )
      {
        v39.zoneName = TrackingZoneName;
        v39.objectName = "edgePoints";
        fmtb = (char *)*(p_regularPatchIndexBuffer - 5);
        v26 = v39;
        R_CreateComputeRawBuffer(8 * ((v16 + 1) & 0xFFFFFFFE), 2u, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, fmtb, &v50, &v26);
        v40.objectName = "edgePointsView";
        v40.zoneName = TrackingZoneName;
        v26 = v40;
        R_CreateComputeRawBufferView(v50, (GfxShaderBufferView *)p_regularPatchIndexBuffer + 4, &v26);
        R_DestroyComputeBuffer(&v50);
      }
      v17 = *((_DWORD *)p_regularPatchIndexBuffer - 25);
      if ( v17 )
      {
        v41.zoneName = TrackingZoneName;
        v41.objectName = "vertexPoints";
        fmtc = (char *)*(p_regularPatchIndexBuffer - 4);
        v26 = v41;
        R_CreateComputeRawBuffer((v17 + 15) & 0xFFFFFFF0, 2u, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, fmtc, &v27, &v26);
        v42.objectName = "vertexPointsView";
        v42.zoneName = TrackingZoneName;
        v26 = v42;
        R_CreateComputeRawBufferView(v27, (GfxShaderBufferView *)p_regularPatchIndexBuffer + 5, &v26);
        R_DestroyComputeBuffer(&v27);
      }
      if ( *((_DWORD *)p_regularPatchIndexBuffer - 24) )
      {
        v18 = *((_DWORD *)p_regularPatchIndexBuffer - 23);
        v43.objectName = "normals";
        v43.zoneName = TrackingZoneName;
        fmtd = (char *)*(p_regularPatchIndexBuffer - 3);
        v26 = v43;
        R_CreateComputeRawBuffer((v18 + 15) & 0xFFFFFFF0, 2u, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, fmtd, &v28, &v26);
        v44.objectName = "normalsView";
        v44.zoneName = TrackingZoneName;
        v26 = v44;
        R_CreateComputeRawBufferView(v28, (GfxShaderBufferView *)p_regularPatchIndexBuffer + 6, &v26);
        R_DestroyComputeBuffer(&v28);
      }
      v19 = *((_DWORD *)p_regularPatchIndexBuffer - 22);
      if ( v19 )
      {
        v45.zoneName = TrackingZoneName;
        v45.objectName = "transitionPoints";
        fmte = (char *)*(p_regularPatchIndexBuffer - 2);
        v26 = v45;
        R_CreateComputeRawBuffer(4 * ((v19 + 3) & 0xFFFFFFFC), 2u, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, fmte, v29, &v26);
        v46.objectName = "transitionPointsView";
        v46.zoneName = TrackingZoneName;
        v26 = v46;
        R_CreateComputeRawBufferView(v29[0], (GfxShaderBufferView *)p_regularPatchIndexBuffer + 7, &v26);
        R_DestroyComputeBuffer(v29);
      }
      ++v4;
      p_regularPatchIndexBuffer += 37;
    }
    while ( v4 < surf->subdivLevelCount );
  }
}

/*
==============
R_CacheRigidSubdivLod
==============
*/
char R_CacheRigidSubdivLod(const XModel *model, int lod)
{
  const XModelLodInfo *LodInfo; 
  volatile int subdivLodValidMask; 
  volatile int *p_subdivLodValidMask; 
  int v7; 
  int v8; 
  XSurface *i; 
  XSurface **v10; 
  XSurface *surfaces; 

  LodInfo = XModelGetLodInfo(model, lod);
  if ( !LodInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_subdiv.cpp", 2057, ASSERT_TYPE_ASSERT, "(lodInfo)", (const char *)&queryFormat, "lodInfo") )
    __debugbreak();
  if ( (LodInfo->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_subdiv.cpp", 2059, ASSERT_TYPE_ASSERT, "(lodInfo->flags & XMODEL_LODINFO_FLAG_SUBDIV)", (const char *)&queryFormat, "lodInfo->flags & XMODEL_LODINFO_FLAG_SUBDIV") )
    __debugbreak();
  subdivLodValidMask = LodInfo->subdivLodValidMask;
  p_subdivLodValidMask = &LodInfo->subdivLodValidMask;
  if ( (subdivLodValidMask & (1 << lod)) != 0 )
    return 1;
  if ( ((unsigned __int8)p_subdivLodValidMask & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 65, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)p_subdivLodValidMask) )
    __debugbreak();
  _m_prefetchw((const void *)p_subdivLodValidMask);
  if ( (_InterlockedOr(p_subdivLodValidMask, 1 << lod) & (1 << lod)) != 0 )
    return 1;
  v7 = 0;
  v8 = XModelGetSurfaces(model, &surfaces, lod);
  if ( v8 <= 0 )
    return 1;
  for ( i = surfaces; ; ++i )
  {
    if ( i->subdivLevelCount )
    {
      v10 = (XSurface **)R_AllocComputeCmdDataAligned(frontEndDataOut->compute.cmdList, 8, 8u);
      if ( !v10 )
        break;
      *v10 = i;
      if ( !R_AddComputeCmd(frontEndDataOut->compute.cmdList, COMPUTECMD_RIGID_SUBDIV, v10) )
        break;
    }
    if ( ++v7 >= v8 )
      return 1;
  }
  return 0;
}

/*
==============
R_ExecuteRigidSubdivComputeCmds
==============
*/
void R_ExecuteRigidSubdivComputeCmds(ComputeCmdBufState *cmdBufState, const ComputeCmdList *list, ComputeCmdType type, const ComputeCmdHeader *header)
{
  const ComputeCmdHeader *v4; 
  const ComputeCmdList *v5; 
  XSurface *v7; 
  XSurfaceSubdivInfo *subdiv; 
  int v9; 
  GfxSubdivCache *p_cache; 
  const GfxWrappedBuffer *p_vertexBuffer; 
  XSurfaceSubdivLevel *levels; 
  unsigned int *p_edgePointCount; 
  unsigned __int16 flags; 
  ComputeShader *subdivTangentNormalLightmapComputeShader; 
  __int16 v16; 
  const GfxWrappedBuffer *v17; 
  const ComputeCmdHeader *ComputeCmdOfSameType; 

  ComputeCmdOfSameType = header;
  v4 = header;
  v5 = list;
  do
  {
    v7 = *(XSurface **)R_GetComputeCmdData(v5, v4);
    if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_subdiv.cpp", 1205, ASSERT_TYPE_ASSERT, "(surf)", (const char *)&queryFormat, "surf") )
      __debugbreak();
    if ( !v7->subdivLevelCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_subdiv.cpp", 1206, ASSERT_TYPE_ASSERT, "(surf->subdivLevelCount)", (const char *)&queryFormat, "surf->subdivLevelCount") )
      __debugbreak();
    subdiv = v7->subdiv;
    if ( !subdiv && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_subdiv.cpp", 1209, ASSERT_TYPE_ASSERT, "(subdivInfo)", (const char *)&queryFormat, "subdivInfo") )
      __debugbreak();
    v9 = 0;
    p_cache = &subdiv->cache;
    p_vertexBuffer = &subdiv->cache.vertexBuffer;
    v17 = &subdiv->cache.vertexBuffer;
    R_HW_AddResourceTransition(cmdBufState, &subdiv->cache.vertexBuffer, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_VERTEX_AND_CONSTANT_BUFFER, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(cmdBufState);
    R_TransferPackedVertsToSubdiv(cmdBufState, v7, &subdiv->cache, 0, 0);
    R_ComputeWaitForCompute(cmdBufState, PIPE_FLUSH_PARTIAL);
    levels = subdiv->levels;
    if ( v7->subdivLevelCount )
    {
      p_edgePointCount = &levels->edgePointCount;
      do
      {
        R_SetupEvaluateRigidSubdiv(cmdBufState, v7, v9, p_cache, 0);
        if ( *(p_edgePointCount - 3) )
        {
          R_SetComputeShader(cmdBufState, rgp.subdivFacePointComputeShader);
          R_Dispatch(cmdBufState, (*(p_edgePointCount - 3) + 63) >> 6, 1u, 1u);
          R_ComputeWaitForCompute(cmdBufState, PIPE_FLUSH_PARTIAL);
        }
        if ( *p_edgePointCount )
        {
          R_SetComputeShader(cmdBufState, rgp.subdivEdgePointComputeShader);
          R_Dispatch(cmdBufState, (*p_edgePointCount + 63) >> 6, 1u, 1u);
          R_ComputeWaitForCompute(cmdBufState, PIPE_FLUSH_PARTIAL);
        }
        if ( p_edgePointCount[3] )
        {
          R_SetComputeShader(cmdBufState, rgp.subdivVertexPointComputeShader);
          R_Dispatch(cmdBufState, (p_edgePointCount[3] + 63) >> 6, 1u, 1u);
          R_ComputeWaitForCompute(cmdBufState, PIPE_FLUSH_PARTIAL);
        }
        if ( p_edgePointCount[8] )
        {
          R_SetSubdivTransitionPointComputeShader(cmdBufState, v7);
          R_SetupEvaluateRigidTransitionPoints(cmdBufState, v7, v9, p_cache, 0);
          R_Dispatch(cmdBufState, (p_edgePointCount[8] + 63) >> 6, 1u, 1u);
          R_ComputeWaitForCompute(cmdBufState, PIPE_FLUSH_PARTIAL);
        }
        if ( p_edgePointCount[6] )
        {
          flags = v7->flags;
          if ( (v7->flags & 8) != 0 )
          {
            subdivTangentNormalLightmapComputeShader = rgp.subdivTangentNormalLightmapComputeShader;
            if ( (flags & 1) != 0 )
              subdivTangentNormalLightmapComputeShader = rgp.subdivTangentNormalColorLightmapComputeShader;
          }
          else if ( (flags & 0x40) != 0 )
          {
            if ( (flags & 0x100) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_subdiv.cpp", 555, ASSERT_TYPE_ASSERT, "(( surf->flags & SURF_FLAG_MAYHEM_CUSTOM_CHANNELS ) == 0)", (const char *)&queryFormat, "( surf->flags & SURF_FLAG_MAYHEM_CUSTOM_CHANNELS ) == 0") )
              __debugbreak();
            v16 = v7->flags & 1;
            if ( (v7->flags & 0x20) != 0 )
            {
              if ( v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_subdiv.cpp", 560, ASSERT_TYPE_ASSERT, "(!( surf->flags & SURF_FLAG_VERTCOL ))", (const char *)&queryFormat, "!( surf->flags & SURF_FLAG_VERTCOL )") )
                __debugbreak();
              subdivTangentNormalLightmapComputeShader = rgp.subdivTangentNormalTensionSelfvisComputeShader;
            }
            else
            {
              subdivTangentNormalLightmapComputeShader = rgp.subdivTangentNormalSelfvisComputeShader;
              if ( v16 )
                subdivTangentNormalLightmapComputeShader = rgp.subdivTangentNormalColorSelfvisComputeShader;
            }
          }
          else if ( (flags & 0x102) == 258 )
          {
            subdivTangentNormalLightmapComputeShader = rgp.subdivTangentNormalMayhemComputeShader;
          }
          else if ( (flags & 0x20) != 0 )
          {
            if ( (flags & 1) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_subdiv.cpp", 580, ASSERT_TYPE_ASSERT, "(!( surf->flags & SURF_FLAG_VERTCOL ))", (const char *)&queryFormat, "!( surf->flags & SURF_FLAG_VERTCOL )") )
              __debugbreak();
            subdivTangentNormalLightmapComputeShader = rgp.subdivTangentNormalTensionComputeShader;
          }
          else
          {
            subdivTangentNormalLightmapComputeShader = rgp.subdivTangentNormalComputeShader;
            if ( (flags & 1) != 0 )
              subdivTangentNormalLightmapComputeShader = rgp.subdivTangentNormalColorComputeShader;
          }
          R_SetComputeShader(cmdBufState, subdivTangentNormalLightmapComputeShader);
          R_SetupEvaluateRigidSubdiv(cmdBufState, v7, v9, p_cache, 0);
          R_Dispatch(cmdBufState, (p_edgePointCount[6] + 63) >> 6, 1u, 1u);
          R_ComputeWaitForCompute(cmdBufState, PIPE_FLUSH_PARTIAL);
        }
        ++v9;
        p_edgePointCount += 74;
      }
      while ( v9 < v7->subdivLevelCount );
      p_vertexBuffer = v17;
      v4 = ComputeCmdOfSameType;
      v5 = list;
    }
    R_HW_AddResourceTransition(cmdBufState, p_vertexBuffer, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_VERTEX_AND_CONSTANT_BUFFER, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(cmdBufState);
    ComputeCmdOfSameType = R_NextComputeCmdOfSameType(v5, v4);
    v4 = ComputeCmdOfSameType;
  }
  while ( ComputeCmdOfSameType );
}

/*
==============
R_ExecuteSubdivEdgePointSkinnedComputeCmds
==============
*/
void R_ExecuteSubdivEdgePointSkinnedComputeCmds(ComputeCmdBufState *cmdBufState, const ComputeCmdList *list, ComputeCmdType type, const ComputeCmdHeader *header, int levelIndex)
{
  void *ComputeCmdData; 
  const XSurface *v9; 
  int v10; 
  XSurfaceSubdivInfo *subdiv; 
  XSurfaceSubdivLevel *levels; 
  __int64 v13; 
  __int64 v14; 

  do
  {
    ComputeCmdData = R_GetComputeCmdData(list, header);
    v9 = (const XSurface *)*((_QWORD *)ComputeCmdData + 3);
    if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_subdiv.cpp", 1584, ASSERT_TYPE_ASSERT, "(surf)", (const char *)&queryFormat, "surf") )
      __debugbreak();
    if ( !v9->subdivLevelCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_subdiv.cpp", 1585, ASSERT_TYPE_ASSERT, "(surf->subdivLevelCount)", (const char *)&queryFormat, "surf->subdivLevelCount") )
      __debugbreak();
    v10 = *((_DWORD *)ComputeCmdData + 1);
    subdiv = v9->subdiv;
    if ( !subdiv && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_subdiv.cpp", 1591, ASSERT_TYPE_ASSERT, "(subdivInfo)", (const char *)&queryFormat, "subdivInfo") )
      __debugbreak();
    if ( levelIndex >= (unsigned int)v9->subdivLevelCount )
    {
      LODWORD(v14) = v9->subdivLevelCount;
      LODWORD(v13) = levelIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_subdiv.cpp", 1593, ASSERT_TYPE_ASSERT, "(unsigned)( levelIndex ) < (unsigned)( surf->subdivLevelCount )", "levelIndex doesn't index surf->subdivLevelCount\n\t%i not in [0, %i)", v13, v14) )
        __debugbreak();
    }
    levels = subdiv->levels;
    R_SetComputeShader(cmdBufState, rgp.subdivEdgePointComputeShader);
    R_SetupEvaluateSkinnedSubdiv(cmdBufState, v9, levelIndex, v10);
    R_Dispatch(cmdBufState, (levels[levelIndex].edgePointCount + 63) >> 6, 1u, 1u);
    header = R_NextComputeCmdOfSameType(list, header);
  }
  while ( header );
}

/*
==============
R_ExecuteSubdivFacePointSkinnedComputeCmds
==============
*/
void R_ExecuteSubdivFacePointSkinnedComputeCmds(ComputeCmdBufState *cmdBufState, const ComputeCmdList *list, ComputeCmdType type, const ComputeCmdHeader *header, int levelIndex)
{
  void *ComputeCmdData; 
  const XSurface *v9; 
  int v10; 
  XSurfaceSubdivInfo *subdiv; 
  XSurfaceSubdivLevel *levels; 
  __int64 v13; 
  __int64 v14; 

  do
  {
    ComputeCmdData = R_GetComputeCmdData(list, header);
    v9 = (const XSurface *)*((_QWORD *)ComputeCmdData + 3);
    if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_subdiv.cpp", 1541, ASSERT_TYPE_ASSERT, "(surf)", (const char *)&queryFormat, "surf") )
      __debugbreak();
    if ( !v9->subdivLevelCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_subdiv.cpp", 1542, ASSERT_TYPE_ASSERT, "(surf->subdivLevelCount)", (const char *)&queryFormat, "surf->subdivLevelCount") )
      __debugbreak();
    v10 = *((_DWORD *)ComputeCmdData + 1);
    subdiv = v9->subdiv;
    if ( !subdiv && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_subdiv.cpp", 1548, ASSERT_TYPE_ASSERT, "(subdivInfo)", (const char *)&queryFormat, "subdivInfo") )
      __debugbreak();
    if ( levelIndex >= (unsigned int)v9->subdivLevelCount )
    {
      LODWORD(v14) = v9->subdivLevelCount;
      LODWORD(v13) = levelIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_subdiv.cpp", 1550, ASSERT_TYPE_ASSERT, "(unsigned)( levelIndex ) < (unsigned)( surf->subdivLevelCount )", "levelIndex doesn't index surf->subdivLevelCount\n\t%i not in [0, %i)", v13, v14) )
        __debugbreak();
    }
    levels = subdiv->levels;
    R_SetComputeShader(cmdBufState, rgp.subdivFacePointComputeShader);
    R_SetupEvaluateSkinnedSubdiv(cmdBufState, v9, levelIndex, v10);
    R_Dispatch(cmdBufState, (levels[levelIndex].facePointCount + 63) >> 6, 1u, 1u);
    header = R_NextComputeCmdOfSameType(list, header);
  }
  while ( header );
}

/*
==============
R_ExecuteSubdivNormalSkinnedComputeCmds
==============
*/
void R_ExecuteSubdivNormalSkinnedComputeCmds(ComputeCmdBufState *cmdBufState, const ComputeCmdList *list, ComputeCmdType type, const ComputeCmdHeader *header, int levelIndex)
{
  __int64 v5; 
  void *ComputeCmdData; 
  const XSurface *v10; 
  int v11; 
  XSurfaceSubdivInfo *subdiv; 
  bool v13; 
  __int64 v14; 
  unsigned __int16 flags; 
  ComputeShader *subdivNormalLightmapComputeShader; 
  __int16 v17; 
  __int64 v18; 
  __int64 v19; 

  v5 = levelIndex;
  do
  {
    ComputeCmdData = R_GetComputeCmdData(list, header);
    v10 = (const XSurface *)*((_QWORD *)ComputeCmdData + 3);
    if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_subdiv.cpp", 1716, ASSERT_TYPE_ASSERT, "(surf)", (const char *)&queryFormat, "surf") )
      __debugbreak();
    if ( !v10->subdivLevelCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_subdiv.cpp", 1717, ASSERT_TYPE_ASSERT, "(surf->subdivLevelCount)", (const char *)&queryFormat, "surf->subdivLevelCount") )
      __debugbreak();
    v11 = *((_DWORD *)ComputeCmdData + 1);
    subdiv = v10->subdiv;
    if ( !subdiv && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_subdiv.cpp", 1723, ASSERT_TYPE_ASSERT, "(subdivInfo)", (const char *)&queryFormat, "subdivInfo") )
      __debugbreak();
    if ( levelIndex >= (unsigned int)v10->subdivLevelCount )
    {
      LODWORD(v19) = v10->subdivLevelCount;
      LODWORD(v18) = levelIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_subdiv.cpp", 1725, ASSERT_TYPE_ASSERT, "(unsigned)( levelIndex ) < (unsigned)( surf->subdivLevelCount )", "levelIndex doesn't index surf->subdivLevelCount\n\t%i not in [0, %i)", v18, v19) )
        __debugbreak();
    }
    v13 = subdiv->levels[v5].normalCount == 0;
    v14 = (__int64)&subdiv->levels[v5];
    if ( v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_subdiv.cpp", 1728, ASSERT_TYPE_ASSERT, "(subdiv->normalCount)", (const char *)&queryFormat, "subdiv->normalCount") )
      __debugbreak();
    flags = v10->flags;
    if ( (v10->flags & 8) != 0 )
    {
      subdivNormalLightmapComputeShader = rgp.subdivNormalLightmapComputeShader;
      if ( (flags & 1) != 0 )
        subdivNormalLightmapComputeShader = rgp.subdivNormalColorLightmapComputeShader;
    }
    else if ( (flags & 0x40) != 0 )
    {
      if ( (flags & 0x100) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_subdiv.cpp", 555, ASSERT_TYPE_ASSERT, "(( surf->flags & SURF_FLAG_MAYHEM_CUSTOM_CHANNELS ) == 0)", (const char *)&queryFormat, "( surf->flags & SURF_FLAG_MAYHEM_CUSTOM_CHANNELS ) == 0") )
        __debugbreak();
      v17 = v10->flags & 1;
      if ( (v10->flags & 0x20) != 0 )
      {
        if ( v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_subdiv.cpp", 560, ASSERT_TYPE_ASSERT, "(!( surf->flags & SURF_FLAG_VERTCOL ))", (const char *)&queryFormat, "!( surf->flags & SURF_FLAG_VERTCOL )") )
          __debugbreak();
        subdivNormalLightmapComputeShader = rgp.subdivNormalTensionSelfvisComputeShader;
      }
      else
      {
        subdivNormalLightmapComputeShader = rgp.subdivNormalSelfvisComputeShader;
        if ( v17 )
          subdivNormalLightmapComputeShader = rgp.subdivNormalColorSelfvisComputeShader;
      }
    }
    else if ( (flags & 0x102) == 258 )
    {
      subdivNormalLightmapComputeShader = rgp.subdivNormalMayhemComputeShader;
    }
    else if ( (flags & 0x20) != 0 )
    {
      if ( (flags & 1) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_subdiv.cpp", 580, ASSERT_TYPE_ASSERT, "(!( surf->flags & SURF_FLAG_VERTCOL ))", (const char *)&queryFormat, "!( surf->flags & SURF_FLAG_VERTCOL )") )
        __debugbreak();
      subdivNormalLightmapComputeShader = rgp.subdivNormalTensionComputeShader;
    }
    else
    {
      subdivNormalLightmapComputeShader = rgp.subdivNormalComputeShader;
      if ( (flags & 1) != 0 )
        subdivNormalLightmapComputeShader = rgp.subdivNormalColorComputeShader;
    }
    R_SetComputeShader(cmdBufState, subdivNormalLightmapComputeShader);
    R_SetupEvaluateSkinnedSubdiv(cmdBufState, v10, levelIndex, v11);
    R_Dispatch(cmdBufState, (unsigned int)(*(_DWORD *)(v14 + 56) + 63) >> 6, 1u, 1u);
    header = R_NextComputeCmdOfSameType(list, header);
  }
  while ( header );
}

/*
==============
R_ExecuteSubdivTessFactorsComputeCmds
==============
*/
void R_ExecuteSubdivTessFactorsComputeCmds(ComputeCmdBufState *cmdBufState, const ComputeCmdList *list, ComputeCmdType type, const ComputeCmdHeader *header, int levelIndex)
{
  __m128 v5; 
  const GfxBackEndData *data; 
  const ComputeCmdHeader *v7; 
  unsigned int v8; 
  const ComputeCmdList *v10; 
  const GfxViewParms *v11; 
  GfxViewParms *DepthHackViewParms; 
  char *v13; 
  __int64 v14; 
  __m256i v15; 
  __m128 v16; 
  __int64 v17; 
  const float4 *v19; 
  vector3 *v20; 
  const XSurface *v21; 
  GfxShaderBufferView *subdiv; 
  int v23; 
  ID3D12Resource *resource; 
  __m128 v25; 
  float v27; 
  __m128 v29; 
  int v32; 
  __m128 v33; 
  float v34; 
  __m128 v36; 
  unsigned int SubdivVertex1Stride; 
  unsigned int v40; 
  unsigned int v41; 
  __m256i *p_viewProjectionMatrix; 
  int v43; 
  int v44; 
  __m128 v45; 
  __m128 v46; 
  unsigned int vertCount; 
  __int64 v48; 
  XSurfaceSubdivLevel *levels; 
  __int64 v50; 
  __int64 v51; 
  int v52; 
  ComputeCmdHeader *ComputeCmdOfSameType; 
  __int64 v54; 
  __int64 v55; 
  GfxShaderBufferView *views; 
  unsigned int v57; 
  int v58; 
  float outScale; 
  int v60; 
  const GfxBackEndData *v61; 
  ComputeShader *computeShader; 
  ComputeCmdHeader *headera; 
  GfxViewInfo *v64; 
  ComputeCmdList *lista; 
  __m256i v66; 
  __m256i v67; 
  __m128 v68; 
  __m128 v69; 
  __m128 v70; 
  __m128 v71; 
  GfxViewParms result; 
  __m128 v73; 
  __m128 v74; 
  vec4_t outBoundingBoxData; 
  int v76; 
  unsigned int v77; 
  int v78; 
  int v79; 
  int v80; 
  float v81; 
  float v82; 
  int v83; 
  tmat44_t<vec4_t> out; 
  __m256i v85; 
  __m256i v86; 
  float v87; 
  float v88; 
  float v89; 
  GfxPlacement outPlacement; 
  tmat33_t<vec3_t> axis; 
  char v92; 
  char v93; 
  GfxShaderBufferView *v94[3]; 

  data = cmdBufState->data;
  v7 = header;
  v8 = levelIndex;
  headera = (ComputeCmdHeader *)header;
  v10 = list;
  lista = (ComputeCmdList *)list;
  v58 = levelIndex;
  v61 = data;
  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_subdiv.cpp", 1795, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  v64 = &data->viewInfo[data->viewInfoIndex];
  v11 = (const GfxViewParms *)v64;
  DepthHackViewParms = R_GetDepthHackViewParms(&result, (const GfxViewParms *)v64);
  v13 = &v92;
  v14 = 3i64;
  do
  {
    v13 += 128;
    v15 = *(__m256i *)DepthHackViewParms->viewMatrix.m.m[0].v;
    v16 = (__m128)DepthHackViewParms->projectionMatrix.m.m[3];
    DepthHackViewParms = (GfxViewParms *)((char *)DepthHackViewParms + 128);
    *((__m256i *)v13 - 4) = v15;
    *((__m256i *)v13 - 3) = *(__m256i *)&DepthHackViewParms[-1].camera.axis.row1.z;
    *((__m256i *)v13 - 2) = *(__m256i *)DepthHackViewParms[-1].camera.zPlanes;
    *((_OWORD *)v13 - 2) = *(_OWORD *)&DepthHackViewParms[-1].camera.visibilityQueryDistance;
    *((__m128 *)v13 - 1) = v16;
    --v14;
  }
  while ( v14 );
  v17 = 296i64 * levelIndex;
  do
  {
    _RBX = (char *)R_GetComputeCmdData(v10, v7);
    if ( !R_ComputeCheckReserveDescriptorHeaps(cmdBufState) )
      Sys_Error((const ObfuscateErrorText)&stru_1443CC330);
    v21 = (const XSurface *)*((_QWORD *)_RBX + 1);
    if ( !v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_subdiv.cpp", 1814, ASSERT_TYPE_ASSERT, "(surf)", (const char *)&queryFormat, "surf") )
      __debugbreak();
    if ( !v21->subdivLevelCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_subdiv.cpp", 1815, ASSERT_TYPE_ASSERT, "(surf->subdivLevelCount)", (const char *)&queryFormat, "surf->subdivLevelCount") )
      __debugbreak();
    subdiv = (GfxShaderBufferView *)v21->subdiv;
    v60 = *((_DWORD *)_RBX + 4);
    if ( !subdiv && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_subdiv.cpp", 1820, ASSERT_TYPE_ASSERT, "(subdivInfo)", (const char *)&queryFormat, "subdivInfo") )
      __debugbreak();
    if ( v8 >= v21->subdivLevelCount )
    {
      LODWORD(v55) = v21->subdivLevelCount;
      LODWORD(v54) = v8;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_subdiv.cpp", 1822, ASSERT_TYPE_ASSERT, "(unsigned)( levelIndex ) < (unsigned)( surf->subdivLevelCount )", "levelIndex doesn't index surf->subdivLevelCount\n\t%i not in [0, %i)", v54, v55) )
        __debugbreak();
    }
    v23 = *(_DWORD *)_RBX;
    resource = subdiv->resource;
    if ( *(_DWORD *)_RBX )
    {
      if ( v23 == 1 )
      {
        v33 = *(__m128 *)(_RBX + 24);
        computeShader = rgp.subdivTessFactorSkinnedComputeShader;
        Float4UnitQuatToAxis(v20, v19);
        v71 = v16;
        v70 = v33;
        out.m[0] = (vec4_t)_mm128_mul_ps(g_one.v, v33);
        out.m[2] = (vec4_t)_mm128_mul_ps(g_one.v, v5);
        out.m[1] = (vec4_t)_mm128_mul_ps(g_one.v, v16);
        v34 = *((float *)_RBX + 10);
        v74.m128_i32[3] = 0;
        v36 = v74;
        v36.m128_f32[0] = v34;
        _XMM3 = v36;
        __asm
        {
          vinsertps xmm3, xmm3, dword ptr [rbx+2Ch], 10h
          vinsertps xmm3, xmm3, dword ptr [rbx+30h], 20h ; ' '
        }
        out.m[3] = (vec4_t)_mm128_add_ps(_XMM3, g_unit.v);
        v87 = v11->camera.origin.v[0];
        v88 = v11->camera.origin.v[1];
        v16 = (__m128)LODWORD(v11->camera.origin.v[2]);
        v89 = v11->camera.origin.v[2];
        v74 = _XMM3;
        SubdivVertex1Stride = R_GetSubdivVertex1Stride(v21);
        v32 = *((_DWORD *)_RBX + 13);
        v40 = SubdivVertex1Stride;
        views = (GfxShaderBufferView *)&v61->subdivCacheVb->wrappedBuffer.rwView;
        R_SetComputeRWViewsWithCounters(cmdBufState, 0, 1, (const GfxShaderBufferRWView *const *)&views, NULL);
        goto LABEL_30;
      }
      if ( v23 != 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_subdiv.cpp", 1865, ASSERT_TYPE_ASSERT, "(cmd->type == SUBDIV_TESS_FACTORS_SMODEL)", (const char *)&queryFormat, "cmd->type == SUBDIV_TESS_FACTORS_SMODEL") )
        __debugbreak();
      v41 = *((_DWORD *)_RBX + 6);
      computeShader = rgp.subdivTessFactorComputeShader;
      R_StaticModelInstance_GetPlacement(v41, &outPlacement, &outScale);
      QuatToAxis(&outPlacement.quat, &axis);
      MatrixSet44(&out, &outPlacement.origin, &axis, outScale);
      v87 = v11->camera.origin.v[0];
      v16 = (__m128)LODWORD(v11->camera.origin.v[1]);
      v88 = v11->camera.origin.v[1];
      v89 = v11->camera.origin.v[2];
      v32 = 0;
      v57 = R_GetSubdivVertex1Stride(v21);
      views = subdiv + 3;
      R_SetComputeViews(cmdBufState, 15, 1, (const GfxShaderBufferView *const *)&views);
      views = (GfxShaderBufferView *)&v61->subdivCacheVb->wrappedBuffer.rwView;
    }
    else
    {
      v25 = *(__m128 *)(_RBX + 24);
      __asm { vbroadcastss xmm6, dword ptr [rbx+38h] }
      computeShader = rgp.subdivTessFactorComputeShader;
      Float4UnitQuatToAxis(v20, v19);
      v68 = v25;
      v69 = v16;
      out.m[1] = (vec4_t)_mm128_mul_ps(_XMM6, v16);
      out.m[0] = (vec4_t)_mm128_mul_ps(v25, _XMM6);
      out.m[2] = (vec4_t)_mm128_mul_ps(v5, _XMM6);
      v27 = *((float *)_RBX + 10);
      v73.m128_i32[3] = 0;
      v29 = v73;
      v29.m128_f32[0] = v27;
      _XMM3 = v29;
      __asm
      {
        vinsertps xmm3, xmm3, dword ptr [rbx+2Ch], 10h
        vinsertps xmm3, xmm3, dword ptr [rbx+30h], 20h ; ' '
      }
      out.m[3] = (vec4_t)_mm128_add_ps(_XMM3, g_unit.v);
      v87 = v11->camera.origin.v[0];
      v88 = v11->camera.origin.v[1];
      v16 = (__m128)LODWORD(v11->camera.origin.v[2]);
      v89 = v11->camera.origin.v[2];
      v73 = _XMM3;
      v32 = 0;
      v57 = R_GetSubdivVertex1Stride(v21);
      views = subdiv + 3;
      R_SetComputeViews(cmdBufState, 15, 1, (const GfxShaderBufferView *const *)&views);
      views = (GfxShaderBufferView *)&v61->subdivCacheVb->wrappedBuffer.rwView;
    }
    R_SetComputeRWViewsWithCounters(cmdBufState, 1, 1, (const GfxShaderBufferRWView *const *)&views, NULL);
    v40 = v57;
LABEL_30:
    if ( _RBX[20] == 1 )
      p_viewProjectionMatrix = (__m256i *)&v93;
    else
      p_viewProjectionMatrix = (__m256i *)&v64->viewParms.viewProjectionMatrix;
    v66 = *p_viewProjectionMatrix;
    v67 = p_viewProjectionMatrix[1];
    v85 = v66;
    v86 = v67;
    v43 = *((_DWORD *)_RBX + 1) - v58 + 1;
    if ( rg.adaptiveSubdiv == 2 )
      v44 = rg.adaptiveSubdiv - 1;
    else
      v44 = rg.adaptiveSubdiv == 1 && (v21->subdiv->flags & 1) == 0;
    v45 = 0i64;
    v45.m128_f32[0] = (float)(1 << v43);
    v5 = v45;
    v83 = v45.m128_i32[0];
    if ( v44 )
    {
      v46 = (__m128)LODWORD(FLOAT_1_0);
      v46.m128_f32[0] = 1.0 / (float)(0.001 * rg.adaptiveSubdivPatchFactor);
      v16 = v46;
      v81 = v46.m128_f32[0];
      v82 = FLOAT_15_0;
    }
    else
    {
      v81 = FLOAT_3_4028235e38;
      v82 = (float)(1 << v43);
    }
    v78 = v60 + 4 * *(_DWORD *)((char *)&resource[1].m_pFunction + v17);
    if ( v58 )
    {
      v48 = v58;
      levels = v21->subdiv->levels;
      vertCount = levels[v48 - 1].vertCount;
      v32 += (v40 + 12) * levels[v48 - 1].vertOffset;
    }
    else
    {
      vertCount = v21->vertCount;
    }
    v76 = v32;
    v77 = v32 + 12 * vertCount;
    if ( *(_DWORD *)_RBX || (v50 = *((int *)_RBX + 13), (_DWORD)v50 == -1) )
    {
      v79 = 0;
      v52 = *(unsigned int *)((char *)&resource->m_RefCount + v17);
    }
    else
    {
      v51 = *(__int64 *)((char *)&resource->m_pFunction + v17) + 16 * v50;
      v79 = *(_DWORD *)(v51 + 8);
      v52 = *(_DWORD *)(v51 + 12);
    }
    v80 = v52;
    R_SetBoundingBoxData(&v21->surfBounds, &outBoundingBoxData);
    if ( v80 )
    {
      R_SetComputeShader(cmdBufState, computeShader);
      R_UploadAndSetComputeConstants(cmdBufState, 0, &outBoundingBoxData, 0x110u, NULL);
      v94[0] = (GfxShaderBufferView *)((char *)&resource[10].IGraphicsUnknown + v17 + 8);
      v94[1] = (GfxShaderBufferView *)((char *)&resource[11].IGraphicsUnknown + v17 + 8);
      v94[2] = (GfxShaderBufferView *)((char *)&resource[17].IGraphicsUnknown + v17 + 8);
      R_SetComputeViews(cmdBufState, 5, 3, (const GfxShaderBufferView *const *)v94);
      R_Dispatch(cmdBufState, (unsigned int)(v80 + 63) >> 6, 1u, 1u);
    }
    v10 = lista;
    ComputeCmdOfSameType = (ComputeCmdHeader *)R_NextComputeCmdOfSameType(lista, headera);
    v11 = (const GfxViewParms *)v64;
    v7 = ComputeCmdOfSameType;
    v8 = v58;
    headera = ComputeCmdOfSameType;
  }
  while ( ComputeCmdOfSameType );
}

/*
==============
R_ExecuteSubdivTransferSkinnedComputeCmds
==============
*/
void R_ExecuteSubdivTransferSkinnedComputeCmds(ComputeCmdBufState *cmdBufState, const ComputeCmdList *list, ComputeCmdType type, const ComputeCmdHeader *header)
{
  const SkinnedSubdivComputeCmd *ComputeCmdData; 

  do
  {
    ComputeCmdData = (const SkinnedSubdivComputeCmd *)R_GetComputeCmdData(list, header);
    R_TransferSkinnedPackedVertsToSubdiv(cmdBufState, ComputeCmdData);
    header = R_NextComputeCmdOfSameType(list, header);
  }
  while ( header );
}

/*
==============
R_ExecuteSubdivTransitionPointSkinnedComputeCmds
==============
*/
void R_ExecuteSubdivTransitionPointSkinnedComputeCmds(ComputeCmdBufState *cmdBufState, const ComputeCmdList *list, ComputeCmdType type, const ComputeCmdHeader *header, int levelIndex)
{
  __int64 v5; 
  void *ComputeCmdData; 
  const XSurface *v10; 
  int v11; 
  XSurfaceSubdivInfo *subdiv; 
  XSurfaceSubdivLevel *levels; 
  __int64 v14; 
  __int64 v15; 

  v5 = levelIndex;
  do
  {
    ComputeCmdData = R_GetComputeCmdData(list, header);
    v10 = (const XSurface *)*((_QWORD *)ComputeCmdData + 3);
    if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_subdiv.cpp", 1671, ASSERT_TYPE_ASSERT, "(surf)", (const char *)&queryFormat, "surf") )
      __debugbreak();
    if ( !v10->subdivLevelCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_subdiv.cpp", 1672, ASSERT_TYPE_ASSERT, "(surf->subdivLevelCount)", (const char *)&queryFormat, "surf->subdivLevelCount") )
      __debugbreak();
    v11 = *((_DWORD *)ComputeCmdData + 1);
    subdiv = v10->subdiv;
    if ( !subdiv && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_subdiv.cpp", 1678, ASSERT_TYPE_ASSERT, "(subdivInfo)", (const char *)&queryFormat, "subdivInfo") )
      __debugbreak();
    if ( levelIndex >= (unsigned int)v10->subdivLevelCount )
    {
      LODWORD(v15) = v10->subdivLevelCount;
      LODWORD(v14) = levelIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_subdiv.cpp", 1680, ASSERT_TYPE_ASSERT, "(unsigned)( levelIndex ) < (unsigned)( surf->subdivLevelCount )", "levelIndex doesn't index surf->subdivLevelCount\n\t%i not in [0, %i)", v14, v15) )
        __debugbreak();
    }
    levels = subdiv->levels;
    if ( !levels[v5].transitionPointCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_subdiv.cpp", 1683, ASSERT_TYPE_ASSERT, "(subdiv->transitionPointCount)", (const char *)&queryFormat, "subdiv->transitionPointCount") )
      __debugbreak();
    R_SetSubdivTransitionPointComputeShader(cmdBufState, v10);
    R_SetupEvaluateSkinnedTransitionPoints(cmdBufState, v10, levelIndex, v11);
    R_Dispatch(cmdBufState, (levels[v5].transitionPointCount + 63) >> 6, 1u, 1u);
    header = R_NextComputeCmdOfSameType(list, header);
  }
  while ( header );
}

/*
==============
R_ExecuteSubdivVertexPointSkinnedComputeCmds
==============
*/
void R_ExecuteSubdivVertexPointSkinnedComputeCmds(ComputeCmdBufState *cmdBufState, const ComputeCmdList *list, ComputeCmdType type, const ComputeCmdHeader *header, int levelIndex)
{
  void *ComputeCmdData; 
  const XSurface *v9; 
  int v10; 
  XSurfaceSubdivInfo *subdiv; 
  XSurfaceSubdivLevel *levels; 
  __int64 v13; 
  __int64 v14; 

  do
  {
    ComputeCmdData = R_GetComputeCmdData(list, header);
    v9 = (const XSurface *)*((_QWORD *)ComputeCmdData + 3);
    if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_subdiv.cpp", 1627, ASSERT_TYPE_ASSERT, "(surf)", (const char *)&queryFormat, "surf") )
      __debugbreak();
    if ( !v9->subdivLevelCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_subdiv.cpp", 1628, ASSERT_TYPE_ASSERT, "(surf->subdivLevelCount)", (const char *)&queryFormat, "surf->subdivLevelCount") )
      __debugbreak();
    v10 = *((_DWORD *)ComputeCmdData + 1);
    subdiv = v9->subdiv;
    if ( !subdiv && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_subdiv.cpp", 1635, ASSERT_TYPE_ASSERT, "(subdivInfo)", (const char *)&queryFormat, "subdivInfo") )
      __debugbreak();
    if ( levelIndex >= (unsigned int)v9->subdivLevelCount )
    {
      LODWORD(v14) = v9->subdivLevelCount;
      LODWORD(v13) = levelIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_subdiv.cpp", 1637, ASSERT_TYPE_ASSERT, "(unsigned)( levelIndex ) < (unsigned)( surf->subdivLevelCount )", "levelIndex doesn't index surf->subdivLevelCount\n\t%i not in [0, %i)", v13, v14) )
        __debugbreak();
    }
    levels = subdiv->levels;
    R_SetComputeShader(cmdBufState, rgp.subdivVertexPointComputeShader);
    R_SetupEvaluateSkinnedSubdiv(cmdBufState, v9, levelIndex, v10);
    R_Dispatch(cmdBufState, (levels[levelIndex].vertexPointCount + 63) >> 6, 1u, 1u);
    header = R_NextComputeCmdOfSameType(list, header);
  }
  while ( header );
}

/*
==============
R_FreeSubdivCache
==============
*/
void R_FreeSubdivCache(GfxSubdivCache *subdivCache)
{
  if ( subdivCache->size )
    R_ShutdownGfxWrappedBuffer(&subdivCache->vertexBuffer);
}

/*
==============
R_FreeSurfaceSubdivLevels
==============
*/
void R_FreeSurfaceSubdivLevels(XSurface *surf)
{
  XSurfaceSubdivInfo *subdiv; 
  unsigned int v3; 
  unsigned int *p_view; 

  subdiv = surf->subdiv;
  if ( !subdiv && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_subdiv.cpp", 349, ASSERT_TYPE_ASSERT, "(subdivInfo)", (const char *)&queryFormat, "subdivInfo") )
    __debugbreak();
  v3 = 0;
  if ( surf->subdivLevelCount )
  {
    p_view = &subdiv->levels->regularPatchConesView.view;
    do
    {
      R_DestroyComputeBuffer((ID3D12Resource **)p_view - 17);
      if ( *(p_view - 24) >= 2 )
        R_ReleaseShaderBufferView((GfxShaderBufferView *)(p_view - 26));
      if ( *p_view >= 2 )
        R_ReleaseShaderBufferView((GfxShaderBufferView *)(p_view - 2));
      if ( *(p_view - 28) >= 2 )
        R_ReleaseShaderBufferView((GfxShaderBufferView *)(p_view - 30));
      R_DestroyComputeBuffer((ID3D12Resource **)p_view - 16);
      if ( *(p_view - 20) >= 2 )
        R_ReleaseShaderBufferView((GfxShaderBufferView *)(p_view - 22));
      if ( *(p_view - 16) >= 2 )
        R_ReleaseShaderBufferView((GfxShaderBufferView *)(p_view - 18));
      if ( *(p_view - 12) >= 2 )
        R_ReleaseShaderBufferView((GfxShaderBufferView *)(p_view - 14));
      if ( *(p_view - 8) >= 2 )
        R_ReleaseShaderBufferView((GfxShaderBufferView *)(p_view - 10));
      if ( *(p_view - 4) >= 2 )
        R_ReleaseShaderBufferView((GfxShaderBufferView *)(p_view - 6));
      ++v3;
      p_view += 74;
    }
    while ( v3 < surf->subdivLevelCount );
  }
  if ( subdiv->cache.size )
    R_ShutdownGfxWrappedBuffer(&subdiv->cache.vertexBuffer);
}

/*
==============
R_GetModelSubdivLodLevel
==============
*/
unsigned __int8 R_GetModelSubdivLodLevel(const XModel *model, int lodIndex, const vec3_t *origin, const tmat33_t<vec3_t> *axis, float scale)
{
  double v8; 
  Bounds baseBounds; 
  Bounds rotatedBounds; 

  if ( !rg.adaptiveSubdiv )
    return truncate_cast<unsigned char,int>(rg.subdivLimit);
  v8 = *(double *)&model->bounds.halfSize.y;
  *(_OWORD *)baseBounds.midPoint.v = *(_OWORD *)model->bounds.midPoint.v;
  *(double *)&baseBounds.halfSize.y = v8;
  baseBounds.halfSize.v[0] = _mm_shuffle_ps(*(__m128 *)baseBounds.midPoint.v, *(__m128 *)baseBounds.midPoint.v, 255).m128_f32[0] * scale;
  baseBounds.halfSize.v[1] = *(float *)&v8 * scale;
  baseBounds.halfSize.v[2] = scale * baseBounds.halfSize.v[2];
  baseBounds.midPoint.v[1] = scale * baseBounds.midPoint.v[1];
  baseBounds.midPoint.v[0] = scale * baseBounds.midPoint.v[0];
  baseBounds.midPoint.v[2] = scale * baseBounds.midPoint.v[2];
  Bounds_Transform(&baseBounds, origin, axis, &rotatedBounds);
  return R_GetModelSubdivLodLevelWithBounds(model, lodIndex, &rotatedBounds, scale);
}

/*
==============
R_GetModelSubdivLodLevelWithBounds
==============
*/

unsigned __int8 __fastcall R_GetModelSubdivLodLevelWithBounds(const XModel *model, int lodIndex, const Bounds *transformedBounds, double scale)
{
  __int128 v7; 
  __int128 v9; 
  __m128 v13; 
  __m128 v17; 
  __int128 v24; 
  __int128 v25; 
  __int128 v30; 
  __int128 v32; 
  __int128 v33; 
  __int128 v35; 
  int subdivLimit; 
  const XModelLodInfo *LodInfo; 
  __int128 v42; 
  __m128 v43; 
  __m128 v44; 

  v7 = *(_OWORD *)&scale;
  if ( !transformedBounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_subdiv.cpp", 968, ASSERT_TYPE_ASSERT, "(transformedBounds)", (const char *)&queryFormat, "transformedBounds") )
    __debugbreak();
  HIDWORD(v42) = 0;
  v9 = v42;
  *(float *)&v9 = rg.correctedLodParms.origin.v[0];
  _XMM5 = v9;
  __asm
  {
    vinsertps xmm5, xmm5, dword ptr cs:?rg@@3Ur_globals_t@@A.correctedLodParms.origin+4, 10h; r_globals_t rg
    vinsertps xmm5, xmm5, dword ptr cs:?rg@@3Ur_globals_t@@A.correctedLodParms.origin+8, 20h ; ' '; r_globals_t rg
  }
  v43 = _XMM5;
  v43.m128_i32[3] = 0;
  v13 = v43;
  v13.m128_f32[0] = transformedBounds->midPoint.v[0];
  _XMM4 = v13;
  __asm
  {
    vinsertps xmm4, xmm4, dword ptr [rbx+4], 10h
    vinsertps xmm4, xmm4, dword ptr [rbx+8], 20h ; ' '
  }
  v44 = _XMM4;
  _mm128_sub_ps(_XMM5, _XMM4);
  v44.m128_i32[3] = 0;
  v17 = v44;
  v17.m128_f32[0] = transformedBounds->halfSize.v[0];
  _XMM3 = v17;
  __asm
  {
    vinsertps xmm3, xmm3, dword ptr [rbx+10h], 10h
    vinsertps xmm3, xmm3, dword ptr [rbx+14h], 20h ; ' '
  }
  _XMM0 = g_negativeZero.v;
  __asm { vandnps xmm2, xmm0, xmm1 }
  _XMM3 = _mm128_sub_ps(_XMM2, _XMM3);
  __asm { vmaxps  xmm1, xmm3, xmm0 }
  v25 = v7;
  *(float *)&v25 = *(float *)&v7 * model->edgeLength;
  v24 = v25;
  _XMM2 = _mm128_mul_ps(_XMM1, _XMM1);
  __asm
  {
    vhaddps xmm0, xmm2, xmm2
    vhaddps xmm1, xmm0, xmm0
  }
  v30 = _XMM1;
  *(float *)&v30 = fsqrt(*(float *)&_XMM1);
  _XMM0 = v30;
  __asm { vmaxss  xmm1, xmm0, cs:__real@3f800000 }
  v32 = v24;
  *(float *)&v32 = (float)(*(float *)&v24 / (float)(*(float *)&_XMM1 * rg.correctedLodParms.invFovScale)) * (float)(999.99994 / r_adaptiveSubdivBaseFactor->current.value);
  v33 = v32;
  *(float *)&v33 = log10f_0(*(float *)&v32);
  v35 = v33;
  *(float *)&v35 = *(float *)&v33 * 3.321928;
  _XMM2 = v35;
  subdivLimit = rg.subdivLimit;
  __asm { vmaxss  xmm2, xmm2, xmm1 }
  _XMM3 = 0i64;
  __asm { vroundss xmm3, xmm3, xmm0, 1 }
  if ( (int)*(float *)&_XMM3 < rg.subdivLimit )
    subdivLimit = (int)*(float *)&_XMM3;
  LodInfo = XModelGetLodInfo(model, lodIndex);
  if ( !LodInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_subdiv.cpp", 984, ASSERT_TYPE_ASSERT, "(lodInfo)", (const char *)&queryFormat, "lodInfo") )
    __debugbreak();
  if ( !subdivLimit )
    subdivLimit = (LodInfo->flags & 2) != 0;
  return truncate_cast<unsigned char,int>(subdivLimit);
}

/*
==============
R_GetSkinnedSubdivPatchSurfaceDrawPrimArgsInternal
==============
*/
void R_GetSkinnedSubdivPatchSurfaceDrawPrimArgsInternal(GfxDrawPrimArgs *outArgs, const XSurface *surf, int toLevel, unsigned int trackFrameIndex, GfxViewStatsTarget viewStatsTarget, GfxPrimStatsTarget primStatsTarget)
{
  __int64 v6; 
  XSurfaceSubdivInfo *subdiv; 
  __int64 trackFrameIndexa; 

  v6 = toLevel;
  if ( !surf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_subdiv.cpp", 750, ASSERT_TYPE_ASSERT, "(surf)", (const char *)&queryFormat, "surf") )
    __debugbreak();
  if ( (unsigned int)v6 >= surf->subdivLevelCount )
  {
    LODWORD(trackFrameIndexa) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_subdiv.cpp", 751, ASSERT_TYPE_ASSERT, "(unsigned)( toLevel ) < (unsigned)( surf->subdivLevelCount )", "toLevel doesn't index surf->subdivLevelCount\n\t%i not in [0, %i)", trackFrameIndexa, surf->subdivLevelCount) )
      __debugbreak();
  }
  subdiv = surf->subdiv;
  if ( !subdiv && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_subdiv.cpp", 753, ASSERT_TYPE_ASSERT, "(subdivInfo)", (const char *)&queryFormat, "subdivInfo") )
    __debugbreak();
  R_AssignDrawPrimArgsInternal(outArgs, surf->vertCount, subdiv->levels[v6].regularPatchCount, 0, 0, trackFrameIndex, viewStatsTarget, primStatsTarget, GFX_TRI_SOURCE_STATIC);
}

/*
==============
R_GetSubdivPatchSurfaceDrawPrimArgsInternal
==============
*/
void R_GetSubdivPatchSurfaceDrawPrimArgsInternal(GfxDrawPrimArgs *outArgs, const XSurface *surf, int toLevel, unsigned int trackFrameIndex, GfxViewStatsTarget viewStatsTarget, GfxPrimStatsTarget primStatsTarget)
{
  __int64 v6; 
  XSurfaceSubdivInfo *subdiv; 
  __int64 trackFrameIndexa; 

  v6 = toLevel;
  if ( !surf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_subdiv.cpp", 739, ASSERT_TYPE_ASSERT, "(surf)", (const char *)&queryFormat, "surf") )
    __debugbreak();
  if ( (unsigned int)v6 >= surf->subdivLevelCount )
  {
    LODWORD(trackFrameIndexa) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_subdiv.cpp", 740, ASSERT_TYPE_ASSERT, "(unsigned)( toLevel ) < (unsigned)( surf->subdivLevelCount )", "toLevel doesn't index surf->subdivLevelCount\n\t%i not in [0, %i)", trackFrameIndexa, surf->subdivLevelCount) )
      __debugbreak();
  }
  subdiv = surf->subdiv;
  if ( !subdiv && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_subdiv.cpp", 742, ASSERT_TYPE_ASSERT, "(subdivInfo)", (const char *)&queryFormat, "subdivInfo") )
    __debugbreak();
  R_AssignDrawPrimArgsInternal(outArgs, surf->vertCount, subdiv->levels[v6].regularPatchCount, 0, 0, trackFrameIndex, viewStatsTarget, primStatsTarget, GFX_TRI_SOURCE_STATIC);
}

/*
==============
R_GetSubdivSurfTessFactorsTotalCacheSize
==============
*/
__int64 R_GetSubdivSurfTessFactorsTotalCacheSize(const XSurface *surf, unsigned int subdivLevel)
{
  __int64 v3; 
  int subdivLevelCount; 

  v3 = subdivLevel;
  if ( subdivLevel >= surf->subdivLevelCount )
  {
    subdivLevelCount = surf->subdivLevelCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_subdiv.cpp", 666, ASSERT_TYPE_ASSERT, "(unsigned)( subdivLevel ) < (unsigned)( surf->subdivLevelCount )", "subdivLevel doesn't index surf->subdivLevelCount\n\t%i not in [0, %i)", subdivLevel, subdivLevelCount) )
      __debugbreak();
  }
  return 4 * (surf->subdiv->levels[v3].regularPatchCount + surf->subdiv->levels[v3].regularPatchOffset);
}

/*
==============
R_GetSubdivSurfVertsTotalCacheSize
==============
*/
__int64 R_GetSubdivSurfVertsTotalCacheSize(const XSurface *surf, unsigned int subdivLevel)
{
  __int64 v2; 
  XSurfaceSubdivLevel *v4; 
  __int64 v6; 

  v2 = subdivLevel;
  if ( !surf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_subdiv.cpp", 651, ASSERT_TYPE_ASSERT, "(surf)", (const char *)&queryFormat, "surf") )
    __debugbreak();
  if ( (unsigned int)v2 >= surf->subdivLevelCount )
  {
    LODWORD(v6) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_subdiv.cpp", 652, ASSERT_TYPE_ASSERT, "(unsigned)( subdivLevel ) < (unsigned)( surf->subdivLevelCount )", "subdivLevel doesn't index surf->subdivLevelCount\n\t%i not in [0, %i)", v6, surf->subdivLevelCount) )
      __debugbreak();
  }
  v4 = &surf->subdiv->levels[v2];
  return (v4->vertCount + v4->vertOffset) * (R_GetSubdivVertex1Stride(surf) + 12);
}

/*
==============
R_GetSubdivSurfaceDrawPrimArgsInternal
==============
*/
void R_GetSubdivSurfaceDrawPrimArgsInternal(GfxDrawPrimArgs *outArgs, const XSurface *surf, int toLevel, unsigned int trackFrameIndex, GfxViewStatsTarget viewStatsTarget, GfxPrimStatsTarget primStatsTarget)
{
  __int64 v6; 
  XSurfaceSubdivInfo *subdiv; 
  __int64 trackFrameIndexa; 

  v6 = toLevel;
  if ( !surf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_subdiv.cpp", 726, ASSERT_TYPE_ASSERT, "(surf)", (const char *)&queryFormat, "surf") )
    __debugbreak();
  if ( (unsigned int)v6 >= surf->subdivLevelCount )
  {
    LODWORD(trackFrameIndexa) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_subdiv.cpp", 727, ASSERT_TYPE_ASSERT, "(unsigned)( toLevel ) < (unsigned)( surf->subdivLevelCount )", "toLevel doesn't index surf->subdivLevelCount\n\t%i not in [0, %i)", trackFrameIndexa, surf->subdivLevelCount) )
      __debugbreak();
  }
  subdiv = surf->subdiv;
  if ( !subdiv && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_subdiv.cpp", 729, ASSERT_TYPE_ASSERT, "(subdivInfo)", (const char *)&queryFormat, "subdivInfo") )
    __debugbreak();
  R_AssignDrawPrimArgsInternal(outArgs, subdiv->levels[v6].vertCount, 2 * subdiv->levels[v6].faceCount, 0, 0, trackFrameIndex, viewStatsTarget, primStatsTarget, GFX_TRI_SOURCE_STATIC);
}

/*
==============
R_GetSubdivSurfaceVertexCount
==============
*/
__int64 R_GetSubdivSurfaceVertexCount(const XSurface *surf, int toLevel)
{
  __int64 v2; 
  XSurfaceSubdivInfo *subdiv; 
  __int64 v6; 

  v2 = toLevel;
  if ( !surf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_subdiv.cpp", 699, ASSERT_TYPE_ASSERT, "(surf)", (const char *)&queryFormat, "surf") )
    __debugbreak();
  if ( (unsigned int)v2 >= surf->subdivLevelCount )
  {
    LODWORD(v6) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_subdiv.cpp", 700, ASSERT_TYPE_ASSERT, "(unsigned)( toLevel ) < (unsigned)( surf->subdivLevelCount )", "toLevel doesn't index surf->subdivLevelCount\n\t%i not in [0, %i)", v6, surf->subdivLevelCount) )
      __debugbreak();
  }
  subdiv = surf->subdiv;
  if ( !subdiv && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_subdiv.cpp", 702, ASSERT_TYPE_ASSERT, "(subdivInfo)", (const char *)&queryFormat, "subdivInfo") )
    __debugbreak();
  return subdiv->levels[v2].vertCount;
}

/*
==============
R_GetSubdivVertex1Stride
==============
*/
__int64 R_GetSubdivVertex1Stride(const XSurface *surf)
{
  unsigned __int16 flags; 
  bool v3; 
  __int16 v4; 
  __int16 v5; 

  flags = surf->flags;
  if ( (surf->flags & 8) != 0 )
  {
    v3 = (flags & 1) == 0;
LABEL_12:
    if ( !v3 )
      return 12i64;
    return 8i64;
  }
  v4 = flags & 0x100;
  if ( (flags & 0x40) != 0 )
  {
    if ( v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_subdiv.cpp", 609, ASSERT_TYPE_ASSERT, "(( surf->flags & SURF_FLAG_MAYHEM_CUSTOM_CHANNELS ) == 0)", (const char *)&queryFormat, "( surf->flags & SURF_FLAG_MAYHEM_CUSTOM_CHANNELS ) == 0") )
      __debugbreak();
    v5 = surf->flags & 1;
    if ( (surf->flags & 0x20) != 0 )
    {
      if ( v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_subdiv.cpp", 614, ASSERT_TYPE_ASSERT, "(!( surf->flags & SURF_FLAG_VERTCOL ))", (const char *)&queryFormat, "!( surf->flags & SURF_FLAG_VERTCOL )") )
      {
        __debugbreak();
        return 12i64;
      }
      return 12i64;
    }
    v3 = v5 == 0;
    goto LABEL_12;
  }
  if ( v4 )
  {
    if ( (flags & 1) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_subdiv.cpp", 628, ASSERT_TYPE_ASSERT, "(!( surf->flags & SURF_FLAG_VERTCOL ))", (const char *)&queryFormat, "!( surf->flags & SURF_FLAG_VERTCOL )") )
      __debugbreak();
    return (8 * (surf->flags & 2)) | 4u;
  }
  else
  {
    if ( (flags & 0x20) != 0 )
    {
      if ( (flags & 1) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_subdiv.cpp", 635, ASSERT_TYPE_ASSERT, "(!( surf->flags & SURF_FLAG_VERTCOL ))", (const char *)&queryFormat, "!( surf->flags & SURF_FLAG_VERTCOL )") )
      {
        __debugbreak();
        return 8i64;
      }
      return 8i64;
    }
    if ( (flags & 1) != 0 )
      return 8i64;
    return 4i64;
  }
}

/*
==============
R_GetSurfaceSubdivLevel
==============
*/
unsigned __int8 R_GetSurfaceSubdivLevel(const XSurface *surf, int lodLevel)
{
  int subdivLevelCount; 
  int v4; 
  char v5; 
  unsigned __int8 result; 
  int v7; 

  subdivLevelCount = surf->subdivLevelCount;
  v4 = subdivLevelCount - 1;
  if ( rg.adaptiveSubdiv != 1 || (surf->subdiv->flags & 1) != 0 )
  {
    v7 = rg.subdivLimit - 1;
    if ( rg.subdivLimit - 1 < 0 )
      v7 = 0;
    result = subdivLevelCount - 1;
    if ( v7 < v4 )
      return v7;
  }
  else
  {
    if ( lodLevel <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_subdiv.cpp", 1020, ASSERT_TYPE_ASSERT, "(lodLevel > 0)", (const char *)&queryFormat, "lodLevel > 0") )
      __debugbreak();
    v5 = subdivLevelCount;
    if ( lodLevel <= v4 )
      v5 = lodLevel;
    return v5 - 1;
  }
  return result;
}

/*
==============
R_InitSubdivConstantBuffers
==============
*/
void R_InitSubdivConstantBuffers(void)
{
  ;
}

/*
==============
R_SetSubdivPatchParms
==============
*/
void R_SetSubdivPatchParms(GfxCmdBufContext *context, const XSurface *surf, int levelIndex, int subdivLevel, int tessFactorsCachePos, int tessFactorsCacheStride)
{
  char v7; 
  float v8; 
  GfxCmdBufSourceState *source; 
  GfxCmdBufState *state; 
  GfxConstantBufferDesc *v11; 
  GfxConstantBufferDesc v12; 
  __m256i *bufferData; 
  unsigned int bufferSize; 
  GfxConstantBufferDesc cbuff; 
  GfxConstantBufferDesc result; 
  __m256i v17; 

  v7 = subdivLevel - levelIndex + 1;
  if ( rg.adaptiveSubdiv == 2 || rg.adaptiveSubdiv == 1 && (surf->subdiv->flags & 1) == 0 )
  {
    v8 = (float)(1 << v7);
    *(float *)v17.m256i_i32 = 1.0 / (float)(rg.adaptiveSubdivPatchFactor * 0.001);
    *(float *)&v17.m256i_i32[1] = FLOAT_15_0;
  }
  else
  {
    v8 = (float)(1 << v7);
    *(float *)&v17.m256i_i32[1] = v8;
    *(float *)v17.m256i_i32 = FLOAT_3_4028235e38;
  }
  v17.m256i_i32[5] = tessFactorsCacheStride;
  source = context->source;
  state = context->state;
  *(__int64 *)((char *)&v17.m256i_i64[1] + 4) = __PAIR64__(tessFactorsCachePos, levelIndex);
  v17.m256i_i32[6] = (*((_BYTE *)source + 11668) & 8) << 21;
  *(float *)&v17.m256i_i32[2] = v8;
  v11 = R_AllocateConstantBufferBegin(&result, state, CBUFFER_SUBDIV_PATCH, 0x20u);
  v12 = *v11;
  bufferData = (__m256i *)v11->bufferData;
  cbuff = v12;
  *bufferData = v17;
  R_AllocateConstantBufferEnd(state, &cbuff);
  bufferSize = cbuff.bufferSize;
  state->constants[2][5].bufferData = cbuff.bufferData;
  state->constants[2][5].bufferSize = bufferSize;
  state->constantsDirty[2] |= 0x20u;
}

/*
==============
R_SetSubdivTransitionPointComputeShader
==============
*/
void R_SetSubdivTransitionPointComputeShader(ComputeCmdBufState *state, const XSurface *surf)
{
  unsigned __int16 flags; 
  __int16 v4; 
  ComputeShader *subdivTransitionLightmapComputeShader; 

  flags = surf->flags;
  v4 = surf->flags & 1;
  if ( (surf->flags & 8) != 0 )
  {
    subdivTransitionLightmapComputeShader = rgp.subdivTransitionLightmapComputeShader;
    if ( v4 )
      subdivTransitionLightmapComputeShader = rgp.subdivTransitionColorLightmapComputeShader;
LABEL_4:
    R_SetComputeShader(state, subdivTransitionLightmapComputeShader);
    return;
  }
  if ( (flags & 0x40) != 0 )
  {
    if ( v4 )
    {
      subdivTransitionLightmapComputeShader = rgp.subdivTransitionColorSelfvisComputeShader;
    }
    else
    {
      subdivTransitionLightmapComputeShader = rgp.subdivTransitionSelfvisComputeShader;
      if ( (flags & 0x20) != 0 )
        subdivTransitionLightmapComputeShader = rgp.subdivTransitionTensionSelfvisComputeShader;
    }
    goto LABEL_4;
  }
  if ( (flags & 0x102) == 258 )
  {
    if ( v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_subdiv.cpp", 517, ASSERT_TYPE_ASSERT, "(!( surf->flags & SURF_FLAG_VERTCOL ))", (const char *)&queryFormat, "!( surf->flags & SURF_FLAG_VERTCOL )") )
      __debugbreak();
    R_SetComputeShader(state, rgp.subdivTransitionMayhemComputeShader);
  }
  else
  {
    if ( (flags & 0x20) == 0 )
    {
      subdivTransitionLightmapComputeShader = rgp.subdivTransitionComputeShader;
      if ( v4 )
        subdivTransitionLightmapComputeShader = rgp.subdivTransitionColorComputeShader;
      goto LABEL_4;
    }
    if ( v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_subdiv.cpp", 524, ASSERT_TYPE_ASSERT, "(!( surf->flags & SURF_FLAG_VERTCOL ))", (const char *)&queryFormat, "!( surf->flags & SURF_FLAG_VERTCOL )") )
      __debugbreak();
    R_SetComputeShader(state, rgp.subdivTransitionTensionComputeShader);
  }
}

/*
==============
R_SetupEvaluateRigidSubdiv
==============
*/
void R_SetupEvaluateRigidSubdiv(ComputeCmdBufState *state, XSurface *surf, int levelIndex, GfxSubdivCache *cache, int cacheOffset)
{
  XSurfaceSubdivInfo *subdiv; 
  __int64 v7; 
  __int64 v10; 
  XSurfaceSubdivLevel *v11; 
  unsigned int SubdivVertex1Stride; 
  XSurfaceSubdivInfo *v15; 
  int transitionPointCount; 
  unsigned int v17; 
  int v18; 
  int v19; 
  unsigned int vertCount; 
  int v21; 
  int v22; 
  GfxShaderBufferView **v23; 
  __int64 v31; 
  GfxShaderBufferRWView *views; 
  vec4_t outBoundingBoxData; 
  unsigned int facePointCount; 
  unsigned int facePointValence4Count; 
  unsigned int edgePointCount; 
  unsigned int edgePointSmoothEnd; 
  unsigned int edgePointUVBorderEnd; 
  unsigned int vertexPointCount; 
  unsigned int vertexPointValence4Count; 
  unsigned int normalCount; 
  int v42; 
  unsigned int v43; 
  int v44; 
  int v45; 
  int v46; 
  unsigned int v47; 
  GfxShaderBufferView *v48[4]; 

  subdiv = surf->subdiv;
  v7 = levelIndex;
  if ( !subdiv && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_subdiv.cpp", 1086, ASSERT_TYPE_ASSERT, "(subdivInfo)", (const char *)&queryFormat, "subdivInfo") )
    __debugbreak();
  if ( (unsigned int)v7 >= surf->subdivLevelCount )
  {
    LODWORD(v31) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_subdiv.cpp", 1088, ASSERT_TYPE_ASSERT, "(unsigned)( levelIndex ) < (unsigned)( surf->subdivLevelCount )", "levelIndex doesn't index surf->subdivLevelCount\n\t%i not in [0, %i)", v31, surf->subdivLevelCount) )
      __debugbreak();
  }
  v10 = v7;
  v11 = &subdiv->levels[v7];
  _XMM6 = (unsigned __int64)v11;
  __asm { vpunpcklqdq xmm6, xmm6, xmm6 }
  SubdivVertex1Stride = R_GetSubdivVertex1Stride(surf);
  R_SetBoundingBoxData(&surf->surfBounds, &outBoundingBoxData);
  v15 = surf->subdiv;
  facePointCount = v11->facePointCount;
  facePointValence4Count = v11->facePointValence4Count;
  edgePointCount = v11->edgePointCount;
  edgePointSmoothEnd = v11->edgePointSmoothEnd;
  edgePointUVBorderEnd = v11->edgePointUVBorderEnd;
  vertexPointCount = v11->vertexPointCount;
  vertexPointValence4Count = v11->vertexPointValence4Count;
  normalCount = v11->normalCount;
  transitionPointCount = v11->transitionPointCount;
  v43 = SubdivVertex1Stride;
  v17 = SubdivVertex1Stride + 12;
  v42 = transitionPointCount;
  if ( (_DWORD)v7 )
  {
    v18 = cacheOffset + v17 * v15->levels[v7 - 1].vertOffset;
    v19 = v18 + 12 * v15->levels[v7 - 1].vertCount;
  }
  else
  {
    v18 = cacheOffset;
    v19 = cacheOffset + 12 * surf->vertCount;
  }
  v44 = v18;
  v45 = v19;
  vertCount = v15->levels[v10].vertCount;
  v21 = v17 * v15->levels[v10].vertOffset;
  v22 = 0;
  v46 = cacheOffset + v21;
  v47 = cacheOffset + v21 + 12 * vertCount;
  R_UploadAndSetComputeConstants(state, 0, &outBoundingBoxData, 0x110u, NULL);
  views = &cache->vertexBuffer.rwView;
  R_SetComputeRWViewsWithCounters(state, 0, 1, (const GfxShaderBufferRWView *const *)&views, NULL);
  v23 = v48;
  do
  {
    _XMM1 = (unsigned int)v22;
    __asm
    {
      vpshufd xmm1, xmm1, 0
      vpaddd  xmm1, xmm1, xmm0
      vpmovsxdq xmm2, xmm1
      vpsllq  xmm3, xmm2, xmm5
      vpaddq  xmm0, xmm3, xmm7
      vpaddq  xmm1, xmm0, xmm6
    }
    v22 += 2;
    *(_OWORD *)v23 = _XMM1;
    v23 += 2;
  }
  while ( v22 < 4 );
  R_SetComputeViews(state, 0, 4, (const GfxShaderBufferView *const *)v48);
}

/*
==============
R_SetupEvaluateRigidTransitionPoints
==============
*/
void R_SetupEvaluateRigidTransitionPoints(ComputeCmdBufState *state, XSurface *surf, int levelIndex, GfxSubdivCache *cache, int cacheOffset)
{
  XSurfaceSubdivInfo *subdiv; 
  __int64 v7; 
  XSurfaceSubdivLevel *levels; 
  unsigned int flags; 
  int v12; 
  __int64 v13; 
  int v14; 
  XSurfaceSubdivLevel *v15; 
  unsigned int SubdivVertex1Stride; 
  XSurfaceSubdivInfo *v17; 
  int transitionPointCount; 
  unsigned int v19; 
  int v20; 
  int v21; 
  __int64 v22; 
  unsigned int vertCount; 
  __int64 v24; 
  GfxShaderBufferRWView *views; 
  vec4_t outBoundingBoxData; 
  unsigned int facePointCount; 
  unsigned int facePointValence4Count; 
  unsigned int edgePointCount; 
  unsigned int edgePointSmoothEnd; 
  unsigned int edgePointUVBorderEnd; 
  unsigned int vertexPointCount; 
  unsigned int vertexPointValence4Count; 
  unsigned int normalCount; 
  int v35; 
  unsigned int v36; 
  int v37; 
  int v38; 
  unsigned int v39; 
  unsigned int v40; 
  GfxShaderBufferView *v41[3]; 

  subdiv = surf->subdiv;
  v7 = levelIndex;
  if ( !subdiv && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_subdiv.cpp", 1135, ASSERT_TYPE_ASSERT, "(subdivInfo)", (const char *)&queryFormat, "subdivInfo") )
    __debugbreak();
  if ( (unsigned int)v7 >= surf->subdivLevelCount )
  {
    LODWORD(v24) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_subdiv.cpp", 1137, ASSERT_TYPE_ASSERT, "(unsigned)( levelIndex ) < (unsigned)( surf->subdivLevelCount )", "levelIndex doesn't index surf->subdivLevelCount\n\t%i not in [0, %i)", v24, surf->subdivLevelCount) )
      __debugbreak();
  }
  levels = subdiv->levels;
  flags = subdiv->flags;
  v12 = 0;
  v13 = v7;
  v14 = flags & 2;
  if ( !v14 )
    v12 = v7;
  v15 = &levels[v13];
  if ( !v14 )
    levels = (XSurfaceSubdivLevel *)((char *)levels + v13 * 296);
  SubdivVertex1Stride = R_GetSubdivVertex1Stride(surf);
  R_SetBoundingBoxData(&surf->surfBounds, &outBoundingBoxData);
  v17 = surf->subdiv;
  facePointCount = v15->facePointCount;
  facePointValence4Count = v15->facePointValence4Count;
  edgePointCount = v15->edgePointCount;
  edgePointSmoothEnd = v15->edgePointSmoothEnd;
  edgePointUVBorderEnd = v15->edgePointUVBorderEnd;
  vertexPointCount = v15->vertexPointCount;
  vertexPointValence4Count = v15->vertexPointValence4Count;
  normalCount = v15->normalCount;
  transitionPointCount = v15->transitionPointCount;
  v36 = SubdivVertex1Stride;
  v19 = SubdivVertex1Stride + 12;
  v35 = transitionPointCount;
  if ( v12 )
  {
    v22 = v12;
    v20 = cacheOffset + v19 * v17->levels[v22 - 1].vertOffset;
    v21 = v20 + 12 * v17->levels[v22 - 1].vertCount;
  }
  else
  {
    v20 = cacheOffset;
    v21 = cacheOffset + 12 * surf->vertCount;
  }
  v37 = v20;
  v38 = v21;
  vertCount = v17->levels[v13].vertCount;
  v39 = cacheOffset + v19 * v17->levels[v13].vertOffset;
  v40 = v39 + 12 * vertCount;
  R_UploadAndSetComputeConstants(state, 0, &outBoundingBoxData, 0x110u, NULL);
  views = &cache->vertexBuffer.rwView;
  R_SetComputeRWViewsWithCounters(state, 0, 1, (const GfxShaderBufferRWView *const *)&views, NULL);
  v41[0] = &v15->transitionPointsView;
  v41[1] = &levels->regularPatchIndexBufferView;
  v41[2] = &levels->regularPatchFlagsView;
  R_SetComputeViews(state, 4, 3, (const GfxShaderBufferView *const *)v41);
}

/*
==============
R_SetupEvaluateSkinnedSubdiv
==============
*/
void R_SetupEvaluateSkinnedSubdiv(ComputeCmdBufState *state, const XSurface *surf, int levelIndex, int cacheOffset)
{
  const GfxBackEndData *data; 
  __int64 v5; 
  XSurfaceSubdivInfo *subdiv; 
  XSurfaceSubdivLevel *v10; 
  unsigned int SubdivVertex1Stride; 
  XSurfaceSubdivInfo *v14; 
  int transitionPointCount; 
  unsigned int v16; 
  int v17; 
  int v18; 
  int v19; 
  int v20; 
  int v21; 
  GfxShaderBufferView **v22; 
  __int64 v30; 
  GfxShaderBufferRWView *views; 
  vec4_t outBoundingBoxData; 
  unsigned int facePointCount; 
  unsigned int facePointValence4Count; 
  unsigned int edgePointCount; 
  unsigned int edgePointSmoothEnd; 
  unsigned int edgePointUVBorderEnd; 
  unsigned int vertexPointCount; 
  unsigned int vertexPointValence4Count; 
  unsigned int normalCount; 
  int v41; 
  unsigned int v42; 
  int v43; 
  int v44; 
  int v45; 
  int v46; 
  GfxShaderBufferView *v47[4]; 

  data = state->data;
  v5 = levelIndex;
  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_subdiv.cpp", 1421, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  subdiv = surf->subdiv;
  if ( !subdiv && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_subdiv.cpp", 1424, ASSERT_TYPE_ASSERT, "(subdivInfo)", (const char *)&queryFormat, "subdivInfo") )
    __debugbreak();
  if ( (unsigned int)v5 >= surf->subdivLevelCount )
  {
    LODWORD(v30) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_subdiv.cpp", 1426, ASSERT_TYPE_ASSERT, "(unsigned)( levelIndex ) < (unsigned)( surf->subdivLevelCount )", "levelIndex doesn't index surf->subdivLevelCount\n\t%i not in [0, %i)", v30, surf->subdivLevelCount) )
      __debugbreak();
  }
  v10 = &subdiv->levels[v5];
  views = (GfxShaderBufferRWView *)(296 * v5);
  _XMM6 = (unsigned __int64)v10;
  __asm { vpunpcklqdq xmm6, xmm6, xmm6 }
  SubdivVertex1Stride = R_GetSubdivVertex1Stride(surf);
  R_SetBoundingBoxData(&surf->surfBounds, &outBoundingBoxData);
  v14 = surf->subdiv;
  facePointCount = v10->facePointCount;
  facePointValence4Count = v10->facePointValence4Count;
  edgePointCount = v10->edgePointCount;
  edgePointSmoothEnd = v10->edgePointSmoothEnd;
  edgePointUVBorderEnd = v10->edgePointUVBorderEnd;
  vertexPointCount = v10->vertexPointCount;
  vertexPointValence4Count = v10->vertexPointValence4Count;
  normalCount = v10->normalCount;
  transitionPointCount = v10->transitionPointCount;
  v42 = SubdivVertex1Stride;
  v16 = SubdivVertex1Stride + 12;
  v41 = transitionPointCount;
  if ( (_DWORD)v5 )
  {
    v17 = cacheOffset + v16 * v14->levels[v5 - 1].vertOffset;
    v18 = v17 + 12 * v14->levels[v5 - 1].vertCount;
  }
  else
  {
    v17 = cacheOffset;
    v18 = cacheOffset + 12 * surf->vertCount;
  }
  v43 = v17;
  v44 = v18;
  v19 = *(unsigned int *)((char *)&views[2].rwSubresourceToTransition + (unsigned __int64)v14->levels);
  v20 = v16 * *(_DWORD *)((char *)&views[3].rwResource + (unsigned __int64)v14->levels);
  v21 = 0;
  v45 = cacheOffset + v20;
  v46 = cacheOffset + v20 + 12 * v19;
  R_UploadAndSetComputeConstants(state, 0, &outBoundingBoxData, 0x110u, NULL);
  views = &data->subdivCacheVb->wrappedBuffer.rwView;
  R_SetComputeRWViewsWithCounters(state, 0, 1, (const GfxShaderBufferRWView *const *)&views, NULL);
  v22 = v47;
  do
  {
    _XMM1 = (unsigned int)v21;
    __asm
    {
      vpshufd xmm1, xmm1, 0
      vpaddd  xmm1, xmm1, xmm0
      vpmovsxdq xmm2, xmm1
      vpsllq  xmm3, xmm2, xmm5
      vpaddq  xmm0, xmm3, xmm7
      vpaddq  xmm1, xmm0, xmm6
    }
    v21 += 2;
    *(_OWORD *)v22 = _XMM1;
    v22 += 2;
  }
  while ( v21 < 4 );
  R_SetComputeViews(state, 0, 4, (const GfxShaderBufferView *const *)v47);
}

/*
==============
R_SetupEvaluateSkinnedTransitionPoints
==============
*/
void R_SetupEvaluateSkinnedTransitionPoints(ComputeCmdBufState *state, const XSurface *surf, int levelIndex, int cacheOffset)
{
  const GfxBackEndData *data; 
  __int64 v5; 
  XSurfaceSubdivInfo *subdiv; 
  XSurfaceSubdivLevel *levels; 
  XSurfaceSubdivLevel *v11; 
  bool v12; 
  int v13; 
  int v14; 
  unsigned int SubdivVertex1Stride; 
  XSurfaceSubdivInfo *v16; 
  int transitionPointCount; 
  unsigned int v18; 
  int v19; 
  int v20; 
  __int64 v21; 
  int v22; 
  __int64 v23; 
  GfxShaderBufferRWView *views; 
  vec4_t outBoundingBoxData; 
  unsigned int facePointCount; 
  unsigned int facePointValence4Count; 
  unsigned int edgePointCount; 
  unsigned int edgePointSmoothEnd; 
  unsigned int edgePointUVBorderEnd; 
  unsigned int vertexPointCount; 
  unsigned int vertexPointValence4Count; 
  unsigned int normalCount; 
  int v34; 
  unsigned int v35; 
  int v36; 
  int v37; 
  unsigned int v38; 
  unsigned int v39; 
  GfxShaderBufferView *v40[3]; 

  data = state->data;
  v5 = levelIndex;
  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_subdiv.cpp", 1475, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  subdiv = surf->subdiv;
  if ( !subdiv && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_subdiv.cpp", 1478, ASSERT_TYPE_ASSERT, "(subdivInfo)", (const char *)&queryFormat, "subdivInfo") )
    __debugbreak();
  if ( (unsigned int)v5 >= surf->subdivLevelCount )
  {
    LODWORD(v23) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_subdiv.cpp", 1480, ASSERT_TYPE_ASSERT, "(unsigned)( levelIndex ) < (unsigned)( surf->subdivLevelCount )", "levelIndex doesn't index surf->subdivLevelCount\n\t%i not in [0, %i)", v23, surf->subdivLevelCount) )
      __debugbreak();
  }
  levels = subdiv->levels;
  views = (GfxShaderBufferRWView *)(296 * v5);
  v11 = &levels[v5];
  v12 = (subdiv->flags & 2) == 0;
  v13 = subdiv->flags & 2;
  v14 = 0;
  if ( v12 )
    v14 = v5;
  if ( !v13 )
    levels += v5;
  SubdivVertex1Stride = R_GetSubdivVertex1Stride(surf);
  R_SetBoundingBoxData(&surf->surfBounds, &outBoundingBoxData);
  v16 = surf->subdiv;
  facePointCount = v11->facePointCount;
  facePointValence4Count = v11->facePointValence4Count;
  edgePointCount = v11->edgePointCount;
  edgePointSmoothEnd = v11->edgePointSmoothEnd;
  edgePointUVBorderEnd = v11->edgePointUVBorderEnd;
  vertexPointCount = v11->vertexPointCount;
  vertexPointValence4Count = v11->vertexPointValence4Count;
  normalCount = v11->normalCount;
  transitionPointCount = v11->transitionPointCount;
  v35 = SubdivVertex1Stride;
  v18 = SubdivVertex1Stride + 12;
  v34 = transitionPointCount;
  if ( v14 )
  {
    v21 = v14;
    v19 = cacheOffset + v18 * v16->levels[v21 - 1].vertOffset;
    v20 = v19 + 12 * v16->levels[v21 - 1].vertCount;
  }
  else
  {
    v19 = cacheOffset;
    v20 = cacheOffset + 12 * surf->vertCount;
  }
  v36 = v19;
  v37 = v20;
  v22 = *(unsigned int *)((char *)&views[2].rwSubresourceToTransition + (unsigned __int64)v16->levels);
  v38 = cacheOffset + v18 * *(_DWORD *)((char *)&views[3].rwResource + (unsigned __int64)v16->levels);
  v39 = v38 + 12 * v22;
  R_UploadAndSetComputeConstants(state, 0, &outBoundingBoxData, 0x110u, NULL);
  views = &data->subdivCacheVb->wrappedBuffer.rwView;
  R_SetComputeRWViewsWithCounters(state, 0, 1, (const GfxShaderBufferRWView *const *)&views, NULL);
  v40[0] = &v11->transitionPointsView;
  v40[1] = &levels->regularPatchIndexBufferView;
  v40[2] = &levels->regularPatchFlagsView;
  R_SetComputeViews(state, 4, 3, (const GfxShaderBufferView *const *)v40);
}

/*
==============
R_SetupSubdivPatchStreams
==============
*/
__int64 R_SetupSubdivPatchStreams(GfxCmdBufState *state, XSurface *surf, int toLevel)
{
  __int64 v3; 
  XSurfaceSubdivInfo *subdiv; 
  unsigned int SubdivVertex1Stride; 
  unsigned int rwView; 
  unsigned int v9; 
  unsigned int v10; 
  unsigned int v11; 
  XSurfaceSubdivLevel *levels; 
  __int64 v14; 

  v3 = toLevel;
  if ( !surf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_subdiv.cpp", 868, ASSERT_TYPE_ASSERT, "(surf)", (const char *)&queryFormat, "surf") )
    __debugbreak();
  if ( (unsigned int)v3 >= surf->subdivLevelCount )
  {
    LODWORD(v14) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_subdiv.cpp", 869, ASSERT_TYPE_ASSERT, "(unsigned)( toLevel ) < (unsigned)( surf->subdivLevelCount )", "toLevel doesn't index surf->subdivLevelCount\n\t%i not in [0, %i)", v14, surf->subdivLevelCount) )
      __debugbreak();
  }
  subdiv = surf->subdiv;
  if ( !subdiv && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_subdiv.cpp", 872, ASSERT_TYPE_ASSERT, "(subdivInfo)", (const char *)&queryFormat, "subdivInfo") )
    __debugbreak();
  SubdivVertex1Stride = R_GetSubdivVertex1Stride(surf);
  rwView = subdiv->cache.vertexBuffer.rwView.rwView;
  v9 = SubdivVertex1Stride;
  if ( rwView == 3 || !rwView || !subdiv->cache.vertexBuffer.data || subdiv->cache.vertexBuffer.view.view <= 1 )
    return 0i64;
  if ( (_DWORD)v3 )
  {
    levels = surf->subdiv->levels;
    v10 = (SubdivVertex1Stride + 12) * levels[v3 - 1].vertOffset;
    v11 = v10 + 12 * levels[v3 - 1].vertCount;
  }
  else
  {
    v10 = 0;
    v11 = 12 * surf->vertCount;
  }
  R_SetStreamSource(state, R_BASE_VERTEX_STREAM, subdiv->cache.vertexBuffer.buffer, v10, 0xCu);
  R_SetStreamSource(state, R_WORLD_LAYERED_VERTEX_STREAM, subdiv->cache.vertexBuffer.buffer, v11, v9);
  return 1i64;
}

/*
==============
R_SetupSubdivPatchSurface
==============
*/
__int64 R_SetupSubdivPatchSurface(GfxCmdBufState *state, XSurface *surf, int toLevel)
{
  __int64 v3; 
  XSurfaceSubdivInfo *subdiv; 
  __int64 v7; 
  __int64 v9; 

  v3 = toLevel;
  if ( !surf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_subdiv.cpp", 829, ASSERT_TYPE_ASSERT, "(surf)", (const char *)&queryFormat, "surf") )
    __debugbreak();
  if ( (unsigned int)v3 >= surf->subdivLevelCount )
  {
    LODWORD(v9) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_subdiv.cpp", 830, ASSERT_TYPE_ASSERT, "(unsigned)( toLevel ) < (unsigned)( surf->subdivLevelCount )", "toLevel doesn't index surf->subdivLevelCount\n\t%i not in [0, %i)", v9, surf->subdivLevelCount) )
      __debugbreak();
  }
  subdiv = surf->subdiv;
  if ( !subdiv && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_subdiv.cpp", 833, ASSERT_TYPE_ASSERT, "(subdivInfo)", (const char *)&queryFormat, "subdivInfo") )
    __debugbreak();
  v7 = (__int64)&subdiv->levels[v3];
  if ( !*(_DWORD *)(v7 + 12) )
    return 0i64;
  if ( !state->technique && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_subdiv.cpp", 841, ASSERT_TYPE_ASSERT, "(state->technique)", (const char *)&queryFormat, "state->technique") )
    __debugbreak();
  if ( (state->technique->customBufferFlags & 0x8000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_subdiv.cpp", 842, ASSERT_TYPE_ASSERT, "(state->technique->customBufferFlags & ( 1ULL << CUSTOM_BUFFER_REGULAR_PATCH_FLAGS ))", (const char *)&queryFormat, "state->technique->customBufferFlags & ( 1ULL << CUSTOM_BUFFER_REGULAR_PATCH_FLAGS )") )
    __debugbreak();
  R_SetDescriptorInRange(state->descState, HS_VIEW_RANGE, 9u, *(_DWORD *)(v7 + 192));
  R_SetIndicesWithType(state, *(ID3D12Resource **)(v7 + 152), DXGI_FORMAT_R16_UINT);
  return 1i64;
}

/*
==============
R_SetupSubdivSurface
==============
*/
__int64 R_SetupSubdivSurface(GfxCmdBufState *state, XSurface *surf, int toLevel)
{
  __int64 v3; 
  XSurfaceSubdivInfo *subdiv; 
  __int64 v7; 
  unsigned int SubdivVertex1Stride; 
  unsigned int rwView; 
  unsigned int v10; 
  XSurfaceSubdivInfo *v11; 
  unsigned int v12; 
  unsigned int v13; 
  __int64 v15; 

  v3 = toLevel;
  if ( !surf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_subdiv.cpp", 771, ASSERT_TYPE_ASSERT, "(surf)", (const char *)&queryFormat, "surf") )
    __debugbreak();
  if ( (unsigned int)v3 >= surf->subdivLevelCount )
  {
    LODWORD(v15) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_subdiv.cpp", 772, ASSERT_TYPE_ASSERT, "(unsigned)( toLevel ) < (unsigned)( surf->subdivLevelCount )", "toLevel doesn't index surf->subdivLevelCount\n\t%i not in [0, %i)", v15, surf->subdivLevelCount) )
      __debugbreak();
  }
  subdiv = surf->subdiv;
  if ( !subdiv && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_subdiv.cpp", 775, ASSERT_TYPE_ASSERT, "(subdivInfo)", (const char *)&queryFormat, "subdivInfo") )
    __debugbreak();
  v7 = v3;
  if ( !subdiv->levels[v7].faceCount )
    return 0i64;
  R_SetIndicesWithType(state, subdiv->levels[v7].faceIndexBuffer, DXGI_FORMAT_R16_UINT);
  SubdivVertex1Stride = R_GetSubdivVertex1Stride(surf);
  rwView = subdiv->cache.vertexBuffer.rwView.rwView;
  v10 = SubdivVertex1Stride;
  if ( rwView == 3 || !rwView || !subdiv->cache.vertexBuffer.data || subdiv->cache.vertexBuffer.view.view <= 1 )
    return 0i64;
  v11 = surf->subdiv;
  v12 = (v10 + 12) * v11->levels[v7].vertOffset;
  v13 = v12 + 12 * v11->levels[v7].vertCount;
  R_SetStreamSource(state, R_BASE_VERTEX_STREAM, subdiv->cache.vertexBuffer.buffer, v12, 0xCu);
  R_SetStreamSource(state, R_WORLD_LAYERED_VERTEX_STREAM, subdiv->cache.vertexBuffer.buffer, v13, v10);
  return 1i64;
}

/*
==============
R_ShutDownSubdivPatchStreams
==============
*/
void R_ShutDownSubdivPatchStreams(GfxCmdBufState *state, XSurface *surf)
{
  if ( !surf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_subdiv.cpp", 902, ASSERT_TYPE_ASSERT, "(surf)", (const char *)&queryFormat, "surf") )
    __debugbreak();
  if ( !surf->subdiv && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_subdiv.cpp", 903, ASSERT_TYPE_ASSERT, "(surf->subdiv)", (const char *)&queryFormat, "surf->subdiv") )
    __debugbreak();
}

/*
==============
R_ShutDownSubdivSurface
==============
*/
void R_ShutDownSubdivSurface(GfxCmdBufState *state, XSurface *surf)
{
  if ( !surf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_subdiv.cpp", 819, ASSERT_TYPE_ASSERT, "(surf)", (const char *)&queryFormat, "surf") )
    __debugbreak();
  if ( !surf->subdiv && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_subdiv.cpp", 820, ASSERT_TYPE_ASSERT, "(surf->subdiv)", (const char *)&queryFormat, "surf->subdiv") )
    __debugbreak();
}

/*
==============
R_ShutdownSubdivConstantBuffers
==============
*/
void R_ShutdownSubdivConstantBuffers(void)
{
  ;
}

/*
==============
R_TransferPackedVertsToSubdiv
==============
*/
void R_TransferPackedVertsToSubdiv(ComputeCmdBufState *state, XSurface *surf, GfxSubdivCache *cache, unsigned int cacheOffset, unsigned int auxOffset)
{
  __int16 v9; 
  ComputeShader *subdivTransferLightmapComputeShader; 
  unsigned __int16 ugbID; 
  unsigned __int16 flags; 
  __int16 v13; 
  int v14; 
  GfxShaderBufferRWView *views; 
  char data[52]; 
  unsigned int SubdivVertex1Stride; 
  int vertCount; 
  int v19; 
  unsigned int v20; 
  unsigned int v21; 
  unsigned int v22; 
  unsigned int SurfVirtPageStart; 
  unsigned int ColorDataPageStart; 
  unsigned int LMapUVVPageStart; 
  GfxShaderBufferView *v26[4]; 

  if ( !surf->subdiv && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_subdiv.cpp", 1033, ASSERT_TYPE_ASSERT, "(subdivInfo)", (const char *)&queryFormat, "subdivInfo") )
    __debugbreak();
  v9 = surf->flags & 1;
  if ( (surf->flags & 8) != 0 )
  {
    subdivTransferLightmapComputeShader = rgp.subdivTransferLightmapComputeShader;
    if ( v9 )
      subdivTransferLightmapComputeShader = rgp.subdivTransferColorLightmapComputeShader;
  }
  else if ( (surf->flags & 0x40) != 0 )
  {
    subdivTransferLightmapComputeShader = rgp.subdivTransferSelfvisComputeShader;
    if ( v9 )
      subdivTransferLightmapComputeShader = rgp.subdivTransferColorSelfvisComputeShader;
  }
  else
  {
    subdivTransferLightmapComputeShader = rgp.subdivTransferComputeShader;
    if ( v9 )
      subdivTransferLightmapComputeShader = rgp.subdivTransferColorComputeShader;
  }
  R_SetComputeShader(state, subdivTransferLightmapComputeShader);
  SubdivVertex1Stride = R_GetSubdivVertex1Stride(surf);
  vertCount = surf->vertCount;
  v19 = -1;
  v20 = cacheOffset;
  v21 = cacheOffset + 12 * vertCount;
  ugbID = surf->ugbID;
  v22 = auxOffset;
  SurfVirtPageStart = R_UVB_GetSurfVirtPageStart(ugbID);
  flags = surf->flags;
  if ( (surf->flags & 1) != 0 )
  {
    ColorDataPageStart = R_UOB_GetColorDataPageStart(surf->ugbID);
    flags = surf->flags;
  }
  if ( (flags & 8) != 0 )
    LMapUVVPageStart = R_UOB_GetLMapUVVPageStart(surf->ugbID);
  R_UploadAndSetComputeConstants(state, 0, data, 0x110u, NULL);
  views = &cache->vertexBuffer.rwView;
  R_SetComputeRWViewsWithCounters(state, 0, 1, (const GfxShaderBufferRWView *const *)&views, NULL);
  v26[0] = &gfxBuf.unifiedVertexBuffer.view;
  v26[1] = &gfxBuf.uvbVirtPageTableBuffer.view;
  v13 = surf->flags & 9;
  if ( v13 )
  {
    v26[2] = &gfxBuf.unifiedOptBuffer.view;
    v26[3] = &gfxBuf.uobVirtPageTableBuffer.view;
  }
  v14 = 4;
  if ( !v13 )
    v14 = 2;
  R_SetComputeViews(state, 11, v14, (const GfxShaderBufferView *const *)v26);
  R_Dispatch(state, ((unsigned int)surf->vertCount + 63) >> 6, 1u, 1u);
}

/*
==============
R_TransferSkinnedPackedVertsToSubdiv
==============
*/
void R_TransferSkinnedPackedVertsToSubdiv(ComputeCmdBufState *state, const SkinnedSubdivComputeCmd *cmd)
{
  XSurface *surf; 
  const GfxBackEndData *v5; 
  int skinnedCacheOffset; 
  int cacheOffset; 
  unsigned __int16 flags; 
  __int16 v9; 
  ComputeShader *subdivInplaceTransferMayhemComputeShader; 
  int vertCount; 
  int v12; 
  GfxShaderBufferRWView *views; 
  char data[52]; 
  unsigned int SubdivVertex1Stride; 
  int v16; 
  int v17; 
  int v18; 
  int v19; 
  int v20; 
  int mayhemChannelsVbOffset; 
  unsigned int SurfVirtPageStart; 
  GfxShaderBufferView *p_view; 
  GfxShaderBufferView *v24; 

  surf = cmd->surf;
  if ( !surf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_subdiv.cpp", 1317, ASSERT_TYPE_ASSERT, "(surf)", (const char *)&queryFormat, "surf") )
    __debugbreak();
  if ( !surf->subdivLevelCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_subdiv.cpp", 1318, ASSERT_TYPE_ASSERT, "(surf->subdivLevelCount)", (const char *)&queryFormat, "surf->subdivLevelCount") )
    __debugbreak();
  v5 = state->data;
  skinnedCacheOffset = cmd->skinnedCacheOffset;
  cacheOffset = cmd->cacheOffset;
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_subdiv.cpp", 1324, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  if ( !surf->subdiv && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_subdiv.cpp", 1327, ASSERT_TYPE_ASSERT, "(subdivInfo)", (const char *)&queryFormat, "subdivInfo") )
    __debugbreak();
  flags = surf->flags;
  v9 = surf->flags & 1;
  if ( (surf->flags & 0x102) == 258 )
  {
    if ( v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_subdiv.cpp", 424, ASSERT_TYPE_ASSERT, "(!( surf->flags & SURF_FLAG_VERTCOL ))", (const char *)&queryFormat, "!( surf->flags & SURF_FLAG_VERTCOL )") )
      __debugbreak();
    if ( (surf->flags & 0x40) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_subdiv.cpp", 426, ASSERT_TYPE_ASSERT, "(( surf->flags & SURF_FLAG_SELF_VISIBILITY ) == 0)", (const char *)&queryFormat, "( surf->flags & SURF_FLAG_SELF_VISIBILITY ) == 0") )
      __debugbreak();
    subdivInplaceTransferMayhemComputeShader = rgp.subdivInplaceTransferMayhemComputeShader;
  }
  else if ( (flags & 0x20) != 0 )
  {
    if ( v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_subdiv.cpp", 435, ASSERT_TYPE_ASSERT, "(!( surf->flags & SURF_FLAG_VERTCOL ))", (const char *)&queryFormat, "!( surf->flags & SURF_FLAG_VERTCOL )") )
      __debugbreak();
    subdivInplaceTransferMayhemComputeShader = rgp.subdivInplaceTransferTensionComputeShader;
    if ( (surf->flags & 0x40) != 0 )
      subdivInplaceTransferMayhemComputeShader = rgp.subdivInplaceTransferTensionSelfvisComputeShader;
  }
  else if ( (flags & 0x40) != 0 )
  {
    subdivInplaceTransferMayhemComputeShader = rgp.subdivInplaceTransferSelfvisComputeShader;
    if ( v9 )
      subdivInplaceTransferMayhemComputeShader = rgp.subdivInplaceTransferColorSelfvisComputeShader;
  }
  else
  {
    subdivInplaceTransferMayhemComputeShader = rgp.subdivInplaceTransferComputeShader;
    if ( v9 )
      subdivInplaceTransferMayhemComputeShader = rgp.subdivInplaceTransferColorComputeShader;
  }
  R_SetComputeShader(state, subdivInplaceTransferMayhemComputeShader);
  SubdivVertex1Stride = R_GetSubdivVertex1Stride(surf);
  vertCount = surf->vertCount;
  v17 = skinnedCacheOffset;
  v16 = vertCount;
  v20 = 0;
  v18 = cacheOffset;
  v19 = cacheOffset + 12 * surf->vertCount;
  SurfVirtPageStart = R_UVB_GetSurfVirtPageStart(surf->ugbID);
  views = &v5->subdivCacheVb->wrappedBuffer.rwView;
  R_SetComputeRWViewsWithCounters(state, 0, 1, (const GfxShaderBufferRWView *const *)&views, NULL);
  v12 = 1;
  p_view = &v5->skinnedCacheVb->wrappedBuffer.view;
  if ( (surf->flags & 0x102) == 258 )
  {
    v24 = &v5->mayhemChannelsVb->wrappedBuffer.view;
    R_HW_AddResourceTransition(state, &v5->mayhemChannelsVb->buffer, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_HW_FlushResourceTransitions(state);
    v12 = 2;
    mayhemChannelsVbOffset = cmd->mayhemChannelsVbOffset;
  }
  R_SetComputeViews(state, 8, v12, (const GfxShaderBufferView *const *)&p_view);
  p_view = &gfxBuf.unifiedVertexBuffer.view;
  v24 = &gfxBuf.uvbVirtPageTableBuffer.view;
  R_SetComputeViews(state, 11, 2, (const GfxShaderBufferView *const *)&p_view);
  R_UploadAndSetComputeConstants(state, 0, data, 0x110u, NULL);
  R_Dispatch(state, ((unsigned int)surf->vertCount + 63) >> 6, 1u, 1u);
  if ( (surf->flags & 0x102) == 258 )
  {
    R_HW_AddResourceTransition(state, &v5->mayhemChannelsVb->buffer, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_HW_FlushResourceTransitions(state);
  }
}

