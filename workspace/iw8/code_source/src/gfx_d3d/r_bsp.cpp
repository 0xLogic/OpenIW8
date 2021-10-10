/*
==============
R_LerpSunDir
==============
*/

void __fastcall R_LerpSunDir(const vec3_t *dirBegin, const vec3_t *dirEnd, const int beginLerpTime, const int endLerpTime, const int accelLerpTime, const int decelLerpTime, const int currTime, vec3_t *result)
{
  ?R_LerpSunDir@@YAXAEBTvec3_t@@0HHHHHAEAT1@@Z(dirBegin, dirEnd, beginLerpTime, endLerpTime, accelLerpTime, decelLerpTime, currTime, result);
}

/*
==============
R_GenerateWorldTransientCache
==============
*/

void __fastcall R_GenerateWorldTransientCache(const GfxWorldDraw *worldDraw, GfxWorldTransientDrawContext *outDrawContext, GfxWorldTransientDrawCache *outDrawCache)
{
  ?R_GenerateWorldTransientCache@@YAXPEBUGfxWorldDraw@@AEAUGfxWorldTransientDrawContext@@AEAUGfxWorldTransientDrawCache@@@Z(worldDraw, outDrawContext, outDrawCache);
}

/*
==============
R_LoadWorld
==============
*/

void __fastcall R_LoadWorld(const unsigned int clientCount, const char *name, int *checksum, bool isFrontendScene)
{
  ?R_LoadWorld@@YAXIPEBDPEAH_N@Z(clientCount, name, checksum, isFrontendScene);
}

/*
==============
R_GetSunDirectionOverride
==============
*/

int __fastcall R_GetSunDirectionOverride(const int time, vec3_t *sunDirOut)
{
  return ?R_GetSunDirectionOverride@@YAHHAEATvec3_t@@@Z(time, sunDirOut);
}

/*
==============
R_ResetSunColorOverride
==============
*/

void R_ResetSunColorOverride(void)
{
  ?R_ResetSunColorOverride@@YAXXZ();
}

/*
==============
R_FreeWorldVertexBuffers
==============
*/

void __fastcall R_FreeWorldVertexBuffers(GfxWorldDrawVerts *drawVerts)
{
  ?R_FreeWorldVertexBuffers@@YAXPEAUGfxWorldDrawVerts@@@Z(drawVerts);
}

/*
==============
R_GetDebugReflectionProbeLocs
==============
*/

unsigned int __fastcall R_GetDebugReflectionProbeLocs(vec3_t *locArray, unsigned int maxCount)
{
  return ?R_GetDebugReflectionProbeLocs@@YAIPEATvec3_t@@I@Z(locArray, maxCount);
}

/*
==============
R_GetActivePrimarySunLight
==============
*/

unsigned int __fastcall R_GetActivePrimarySunLight(const GfxStageInfo *stageInfo)
{
  return ?R_GetActivePrimarySunLight@@YAIPEBUGfxStageInfo@@@Z(stageInfo);
}

/*
==============
R_ResetSunIntensityOverride
==============
*/

void R_ResetSunIntensityOverride(void)
{
  ?R_ResetSunIntensityOverride@@YAXXZ();
}

/*
==============
R_ResetSunDirectionOverride
==============
*/

void R_ResetSunDirectionOverride(void)
{
  ?R_ResetSunDirectionOverride@@YAXXZ();
}

/*
==============
R_ShutdownWorld
==============
*/

void __fastcall R_ShutdownWorld(int isRestart, int syncData)
{
  ?R_ShutdownWorld@@YAXHH@Z(isRestart, syncData);
}

/*
==============
R_LerpSunDirectionOverride
==============
*/

void __fastcall R_LerpSunDirectionOverride(const vec3_t *sunDirBegin, const vec3_t *sunDirEnd, const int lerpBeginTime, const int lerpEndTime, const int lerpAccelTime, const int lerpDecelTime, const int bAllowSlowRecomputeShadows)
{
  ?R_LerpSunDirectionOverride@@YAXAEBTvec3_t@@0HHHHH@Z(sunDirBegin, sunDirEnd, lerpBeginTime, lerpEndTime, lerpAccelTime, lerpDecelTime, bAllowSlowRecomputeShadows);
}

/*
==============
R_SetSunColorOverride
==============
*/

void __fastcall R_SetSunColorOverride(const vec3_t *sunColorLinearSrgb)
{
  ?R_SetSunColorOverride@@YAXAEBTvec3_t@@@Z(sunColorLinearSrgb);
}

/*
==============
R_GetSunColorOverride
==============
*/

int __fastcall R_GetSunColorOverride(vec3_t *sunColorLinearSrgbOut)
{
  return ?R_GetSunColorOverride@@YAHAEATvec3_t@@@Z(sunColorLinearSrgbOut);
}

/*
==============
R_ReleaseWorld
==============
*/

void __fastcall R_ReleaseWorld(GfxWorld *world)
{
  ?R_ReleaseWorld@@YAXPEAUGfxWorld@@@Z(world);
}

/*
==============
R_GetSunIntensityOverride
==============
*/

int __fastcall R_GetSunIntensityOverride(float *sunIntensityOut)
{
  return ?R_GetSunIntensityOverride@@YAHPEAM@Z(sunIntensityOut);
}

/*
==============
R_SetSunDirectionOverride
==============
*/

void __fastcall R_SetSunDirectionOverride(const vec3_t *sunDir, const int bAllowSlowRecomputeShadows)
{
  ?R_SetSunDirectionOverride@@YAXAEBTvec3_t@@H@Z(sunDir, bAllowSlowRecomputeShadows);
}

/*
==============
R_SetSunIntensityOverride
==============
*/

void __fastcall R_SetSunIntensityOverride(const float sunIntensity)
{
  ?R_SetSunIntensityOverride@@YAXM@Z(sunIntensity);
}

/*
==============
R_CreateSparseVoxelTree
==============
*/
void R_CreateSparseVoxelTree(GfxWorld *world)
{
  GfxWorld *v1; 
  int v2; 
  __int64 v3; 
  char *v4; 
  __int64 v5; 
  const void *initialData; 
  unsigned int v7; 
  int ElementSizeForDataFormat; 
  const void *v9; 
  unsigned int v10; 
  int v11; 
  int i; 
  unsigned int v13; 
  const void *v14; 
  int v15; 
  int v17; 
  __int64 v18; 

  v1 = world;
  if ( !world && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp.cpp", 404, ASSERT_TYPE_ASSERT, "(world)", (const char *)&queryFormat, "world") )
    __debugbreak();
  if ( v1->voxelTreeCount >= 32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp.cpp", 405, ASSERT_TYPE_ASSERT, "(world->voxelTreeCount < 32)", (const char *)&queryFormat, "world->voxelTreeCount < MAX_MAP_TELEPORT_ZONES") )
    __debugbreak();
  v2 = 0;
  v17 = 0;
  if ( v1->voxelTreeCount > 0 )
  {
    v3 = 0i64;
    v18 = 0i64;
    do
    {
      v4 = (char *)v1->voxelTree + v3;
      if ( *((_DWORD *)v4 + 6) )
      {
        v5 = v2;
        R_CreateGfxWrappedBuffer(&deviceGlobals.voxelTreeHeaderConstantBuffer[v5], GfxWrappedBuffer_Const, 64, 1u, GFX_DATA_FORMAT_R32_UINT, 0x28u, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, *((const void **)v4 + 5), "voxelTreeHeader");
        R_CreateGfxWrappedBuffer(&deviceGlobals.voxelTreeHeaderStructuredBuffer[v5], GfxWrappedBuffer_Structured, 64, 1u, GFX_DATA_FORMAT_R32_UINT, 0x28u, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, *((const void **)v4 + 5), "voxelTreeHeader");
        R_CreateGfxWrappedBuffer(&deviceGlobals.voxelTopDownViewNodeStructuredBuffer[v5], GfxWrappedBuffer_Structured, 12, *((_DWORD *)v4 + 6), GFX_DATA_FORMAT_R32_UINT, 0x28u, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, *((const void **)v4 + 6), "voxelTopDownViewNode");
        R_CreateGfxWrappedBuffer(&deviceGlobals.voxelInternalNodeStructuredBuffer[v5], GfxWrappedBuffer_Structured, 16, *((_DWORD *)v4 + 7), GFX_DATA_FORMAT_R32_UINT, 0x28u, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, *((const void **)v4 + 7), "voxelInternalNode");
        initialData = (const void *)*((_QWORD *)v4 + 8);
        v7 = *((_DWORD *)v4 + 8);
        ElementSizeForDataFormat = Buffers_GetElementSizeForDataFormat(GFX_DATA_FORMAT_R16_UINT);
        R_CreateGfxWrappedBuffer(&deviceGlobals.voxelLeafNodeDataBuffer[v5], GfxWrappedBuffer_Data, ElementSizeForDataFormat, v7, GFX_DATA_FORMAT_R16_UINT, 0x28u, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, initialData, "voxelLeafNode");
        v9 = (const void *)*((_QWORD *)v4 + 9);
        v10 = *((_DWORD *)v4 + 9);
        v11 = Buffers_GetElementSizeForDataFormat(GFX_DATA_FORMAT_R16_UINT);
        R_CreateGfxWrappedBuffer(&deviceGlobals.voxelLightListDataBuffer[v5], GfxWrappedBuffer_Data, v11, v10, GFX_DATA_FORMAT_R16_UINT, 0x28u, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, v9, "voxelLightList");
        for ( i = 0; i < 2; ++i )
        {
          v13 = *((_DWORD *)v4 + 7);
          v14 = (const void *)(*((_QWORD *)v4 + 11) + 4i64 * (int)(i * v13));
          v15 = Buffers_GetElementSizeForDataFormat(GFX_DATA_FORMAT_R32_UINT);
          R_CreateGfxWrappedBuffer(&deviceGlobals.voxelInternalNodeDynamicLightList[v2][i], GfxWrappedBuffer_Data, v15, v13, GFX_DATA_FORMAT_R32_UINT, 0xAu, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, v14, "voxelInternalNodeDynamicLightList");
        }
        v2 = v17;
        v3 = v18;
        v1 = world;
      }
      ++v2;
      v3 += 120i64;
      v17 = v2;
      v18 = v3;
    }
    while ( v2 < v1->voxelTreeCount );
  }
}

/*
==============
R_FreeWorldVertexBuffers
==============
*/
void R_FreeWorldVertexBuffers(GfxWorldDrawVerts *drawVerts)
{
  ID3D12Resource *indexBuffer; 

  if ( !drawVerts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp.cpp", 974, ASSERT_TYPE_ASSERT, "(drawVerts)", (const char *)&queryFormat, "drawVerts") )
    __debugbreak();
  if ( drawVerts->posDataSize )
  {
    R_ShutdownGfxWrappedBuffer(&drawVerts->posBuffer);
    R_AssignNullBuffer(&drawVerts->posBuffer.buffer);
  }
  if ( drawVerts->auxDataSize )
  {
    R_ShutdownGfxWrappedBuffer(&drawVerts->auxBuffer);
    R_AssignNullBuffer(&drawVerts->auxBuffer.buffer);
  }
  if ( drawVerts->indexCount )
  {
    if ( drawVerts->indexBufferView.view >= 2 )
      R_ReleaseShaderBufferView(&drawVerts->indexBufferView);
    indexBuffer = drawVerts->indexBuffer;
    if ( indexBuffer )
      R_FreeStaticIndexBuffer(indexBuffer);
    R_AssignNullBuffer(&drawVerts->indexBuffer);
  }
  *(_QWORD *)&drawVerts->posDataSize = 0i64;
  drawVerts->indexCount = 0;
}

/*
==============
R_GenerateWorldTransientCache
==============
*/
void R_GenerateWorldTransientCache(const GfxWorldDraw *worldDraw, GfxWorldTransientDrawContext *outDrawContext, GfxWorldTransientDrawCache *outDrawCache)
{
  __int64 i; 
  GfxWorldTransientZone *v7; 
  __int64 v8; 
  GfxWorldDrawCells *v9; 
  __m256i *v10; 

  if ( !worldDraw && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp.cpp", 533, ASSERT_TYPE_ASSERT, "(worldDraw)", (const char *)&queryFormat, "worldDraw") )
    __debugbreak();
  DebugWipe(outDrawCache, 0x39000ui64);
  memset_0(outDrawContext, 0, sizeof(GfxWorldTransientDrawContext));
  outDrawContext->zoneCount = worldDraw->transientZoneCount;
  for ( i = 0i64; (unsigned int)i < worldDraw->transientZoneCount; i = (unsigned int)(i + 1) )
  {
    v7 = worldDraw->transientZones[i];
    if ( v7 )
    {
      v8 = 3 * i + 24576;
      *(_OWORD *)(&outDrawCache->drawVerts[0].posDataSize + 2 * v8) = *(_OWORD *)&v7->drawCells.cellCount;
      *((double *)&outDrawCache->drawVerts[0].auxData + v8) = *(double *)&v7->drawCells.aabbTrees;
      v9 = (GfxWorldDrawCells *)((char *)outDrawCache + 8 * v8);
      v10 = (__m256i *)&outDrawCache->drawVerts[(unsigned __int64)(unsigned int)i];
      *v10 = *(__m256i *)&v7->drawVerts.posDataSize;
      v10[1] = *(__m256i *)((char *)&v7->drawVerts.posBuffer + 8);
      v10[2] = *(__m256i *)((char *)&v7->drawVerts.auxBuffer + 8);
      v10[3] = *(__m256i *)&v7->drawVerts.indices;
      outDrawContext->drawCellsPtrs[i] = v9;
      outDrawContext->drawVertsPtr[i] = (GfxWorldDrawVerts *)v10;
      outDrawContext->gpuLightGrid[i] = v7->gpuLightGrid.gpuLightGrid;
      outDrawContext->dynLightSets[i] = v7->gpuLightGrid.SMLGppZone;
      outDrawContext->reflectionProbes[i] = v7->reflectionProbes;
      outDrawContext->decalVolumes[i] = v7->decalVolumes;
    }
  }
}

/*
==============
R_GetActivePrimarySunLight
==============
*/
__int64 R_GetActivePrimarySunLight(const GfxStageInfo *stageInfo)
{
  unsigned __int8 sunPrimaryLightIndex; 
  __int64 v3; 
  __int64 v5; 

  if ( !stageInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp.cpp", 312, ASSERT_TYPE_ASSERT, "(stageInfo)", (const char *)&queryFormat, "stageInfo") )
    __debugbreak();
  sunPrimaryLightIndex = stageInfo->activeStage.sunPrimaryLightIndex;
  if ( sunPrimaryLightIndex )
  {
    v3 = sunPrimaryLightIndex;
    if ( !comWorld.isInUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_bsp_api.h", 49, ASSERT_TYPE_ASSERT, "(comWorld.isInUse)", (const char *)&queryFormat, "comWorld.isInUse") )
      __debugbreak();
    if ( (unsigned int)v3 >= comWorld.primaryLightCount )
    {
      LODWORD(v5) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_bsp_api.h", 50, ASSERT_TYPE_ASSERT, "(unsigned)( primaryLightIndex ) < (unsigned)( comWorld.primaryLightCount )", "primaryLightIndex doesn't index comWorld.primaryLightCount\n\t%i not in [0, %i)", v5, comWorld.primaryLightCount) )
        __debugbreak();
    }
    if ( comWorld.primaryLights[v3].type != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp.cpp", 313, ASSERT_TYPE_ASSERT, "(stageInfo->activeStage.sunPrimaryLightIndex == 0 || Com_GetPrimaryLight( stageInfo->activeStage.sunPrimaryLightIndex )->type == 1)", (const char *)&queryFormat, "stageInfo->activeStage.sunPrimaryLightIndex == PRIMARY_LIGHT_NONE || Com_GetPrimaryLight( stageInfo->activeStage.sunPrimaryLightIndex )->type == GFX_LIGHT_TYPE_DIR") )
      __debugbreak();
  }
  return stageInfo->activeStage.sunPrimaryLightIndex;
}

/*
==============
R_GetDebugReflectionProbeLocs
==============
*/
__int64 R_GetDebugReflectionProbeLocs(vec3_t *locArray, unsigned int maxCount)
{
  GfxWorldDraw *v2; 
  unsigned int v6; 
  __int64 v7; 
  char *p_z; 
  unsigned int v9; 
  __int64 v10; 
  GfxReflectionProbe *reflectionProbes; 
  GfxReflectionProbe *v12; 
  GfxReflectionProbe *v13; 
  GfxReflectionProbe *v14; 
  __int64 v15; 
  float *v16; 
  __int64 v17; 
  GfxReflectionProbe *v18; 

  v2 = g_worldDraw;
  if ( !g_worldDraw )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp.cpp", 1130, ASSERT_TYPE_ASSERT, "(g_worldDraw)", (const char *)&queryFormat, "g_worldDraw") )
      __debugbreak();
    v2 = g_worldDraw;
    if ( !g_worldDraw )
      return 0i64;
  }
  if ( v2->reflectionProbeData.reflectionProbeCount < maxCount )
    maxCount = v2->reflectionProbeData.reflectionProbeCount;
  v6 = 0;
  if ( maxCount >= 4 )
  {
    v7 = 0i64;
    p_z = (char *)&locArray[1].z;
    v9 = ((maxCount - 4) >> 2) + 1;
    v10 = v9;
    v6 = 4 * v9;
    do
    {
      reflectionProbes = v2->reflectionProbeData.reflectionProbes;
      p_z += 48;
      v7 += 4i64;
      *((_DWORD *)p_z - 17) = *((_DWORD *)&reflectionProbes[v7 - 3] - 10);
      *((_DWORD *)p_z - 16) = *((_DWORD *)&reflectionProbes[v7 - 3] - 9);
      *((_DWORD *)p_z - 15) = *((_DWORD *)&reflectionProbes[v7 - 3] - 8);
      v12 = v2->reflectionProbeData.reflectionProbes;
      *((_DWORD *)p_z - 14) = *((_DWORD *)&v12[v7 - 2] - 10);
      *((_DWORD *)p_z - 13) = *((_DWORD *)&v12[v7 - 2] - 9);
      *((_DWORD *)p_z - 12) = *((_DWORD *)&v12[v7 - 2] - 8);
      v13 = v2->reflectionProbeData.reflectionProbes;
      *((_DWORD *)p_z - 11) = *((_DWORD *)&v13[v7 - 1] - 10);
      *((_DWORD *)p_z - 10) = *((_DWORD *)&v13[v7 - 1] - 9);
      *((_DWORD *)p_z - 9) = *((_DWORD *)&v13[v7 - 1] - 8);
      v14 = v2->reflectionProbeData.reflectionProbes;
      *((_DWORD *)p_z - 8) = LODWORD(v14[v7 - 1].origin.v[0]);
      *((_DWORD *)p_z - 7) = LODWORD(v14[v7 - 1].origin.v[1]);
      *((_DWORD *)p_z - 6) = LODWORD(v14[v7 - 1].origin.v[2]);
      --v10;
    }
    while ( v10 );
  }
  if ( v6 < maxCount )
  {
    v15 = v6;
    v16 = &locArray[v6].v[2];
    v17 = maxCount - v6;
    do
    {
      v18 = v2->reflectionProbeData.reflectionProbes;
      v16 += 3;
      *(v16 - 5) = v18[v15++].origin.v[0];
      *(v16 - 4) = v18[v15 - 1].origin.v[1];
      *(v16 - 3) = v18[v15 - 1].origin.v[2];
      --v17;
    }
    while ( v17 );
  }
  return maxCount;
}

/*
==============
R_GetSunColorOverride
==============
*/
__int64 R_GetSunColorOverride(vec3_t *sunColorLinearSrgbOut)
{
  if ( !rg.useSunColorLinearSrgbOverride )
    return 0i64;
  *sunColorLinearSrgbOut = rg.sunColorLinearSrgbOverride;
  return 1i64;
}

/*
==============
R_GetSunDirectionOverride
==============
*/
__int64 R_GetSunDirectionOverride(const int time, vec3_t *sunDirOut)
{
  if ( !rg.useSunDirOverride )
    return 0i64;
  if ( rg.useSunDirLerp )
    R_LerpSunDir(&rg.sunDirOverride, &rg.sunDirOverrideTarget, rg.sunDirLerpBeginTime, rg.sunDirLerpEndTime, rg.sunDirLerpAccelTime, rg.sunDirLerpDecelTime, time, sunDirOut);
  else
    *sunDirOut = rg.sunDirOverride;
  return 1i64;
}

/*
==============
R_GetSunIntensityOverride
==============
*/
__int64 R_GetSunIntensityOverride(float *sunIntensityOut)
{
  if ( !sunIntensityOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp.cpp", 151, ASSERT_TYPE_ASSERT, "(sunIntensityOut)", (const char *)&queryFormat, "sunIntensityOut") )
    __debugbreak();
  if ( !rg.useSunIntensityOverride )
    return 0i64;
  *sunIntensityOut = rg.sunIntensityOverride;
  return 1i64;
}

/*
==============
R_LerpSunDir
==============
*/
void R_LerpSunDir(const vec3_t *dirBegin, const vec3_t *dirEnd, const int beginLerpTime, const int endLerpTime, const int accelLerpTime, const int decelLerpTime, const int currTime, vec3_t *result)
{
  float v12; 
  double v13; 
  unsigned int v14; 
  float v15; 
  float v16; 
  int v17; 
  const vec3_t *v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  __int128 v24; 
  float v25; 
  float v26; 
  float v27; 
  float v28; 
  float v31; 
  float v32; 
  float v33; 
  float v34; 
  int v35; 
  float v36; 
  float v37; 
  __int128 v38; 
  float v39; 
  __int128 v40; 
  __int64 v44; 
  int atTime; 
  trajectory_t_secure tr; 
  vec3_t v48; 

  if ( endLerpTime <= beginLerpTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp.cpp", 228, ASSERT_TYPE_ASSERT, "(endLerpTime > beginLerpTime)", (const char *)&queryFormat, "endLerpTime > beginLerpTime") )
    __debugbreak();
  if ( accelLerpTime > 0 || decelLerpTime > 0 )
  {
    if ( accelLerpTime < 0 )
    {
      LODWORD(v44) = accelLerpTime;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp.cpp", 234, ASSERT_TYPE_ASSERT, "( ( accelLerpTime >= 0 ) )", "( accelLerpTime ) = %i", v44) )
        __debugbreak();
    }
    if ( decelLerpTime < 0 )
    {
      LODWORD(v44) = decelLerpTime;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp.cpp", 235, ASSERT_TYPE_ASSERT, "( ( decelLerpTime >= 0 ) )", "( decelLerpTime ) = %i", v44) )
        __debugbreak();
    }
    v14 = endLerpTime - beginLerpTime;
    if ( accelLerpTime + decelLerpTime > endLerpTime - beginLerpTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp.cpp", 236, ASSERT_TYPE_ASSERT, "((accelLerpTime + decelLerpTime) <= (endLerpTime - beginLerpTime))", (const char *)&queryFormat, "(accelLerpTime + decelLerpTime) <= (endLerpTime - beginLerpTime)") )
      __debugbreak();
    v15 = _mm_cvtepi32_ps((__m128i)v14).m128_f32[0] * 0.001;
    v16 = _mm_cvtepi32_ps((__m128i)(unsigned int)accelLerpTime).m128_f32[0] * 0.001;
    v17 = I_clamp(currTime, beginLerpTime, endLerpTime);
    atTime = v17;
    v18 = dirBegin;
    v19 = _mm_cvtepi32_ps((__m128i)(unsigned int)decelLerpTime).m128_f32[0] * 0.001;
    v20 = dirEnd->v[0] - dirBegin->v[0];
    v24 = LODWORD(dirEnd->v[1]);
    v21 = dirEnd->v[1] - dirBegin->v[1];
    v22 = dirEnd->v[2] - dirBegin->v[2];
    *(float *)&v24 = fsqrt((float)((float)(v21 * v21) + (float)(v20 * v20)) + (float)(v22 * v22));
    _XMM6 = v24;
    v25 = (float)((float)(v15 * 2.0) - v16) - v19;
    if ( v25 == 0.0 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp.cpp", 246, ASSERT_TYPE_ASSERT, "(fSpeedQuotient)", (const char *)&queryFormat, "fSpeedQuotient") )
        __debugbreak();
      v18 = dirBegin;
      v17 = atTime;
    }
    v26 = v18->v[1];
    v27 = v18->v[2];
    v28 = *(float *)&v24 * 2.0;
    v12 = FLOAT_1_0;
    __asm
    {
      vcmpless xmm0, xmm6, cs:__real@80000000
      vblendvps xmm0, xmm6, xmm7, xmm0
    }
    v31 = (float)(v20 * (float)(1.0 / *(float *)&_XMM0)) * (float)(v28 / v25);
    v32 = v18->v[0];
    tr.trType = TR_ACCELERATE;
    tr.trTime = beginLerpTime;
    tr.trDuration = accelLerpTime;
    v33 = (float)(v21 * (float)(1.0 / *(float *)&_XMM0)) * (float)(v28 / v25);
    v34 = (float)(v22 * (float)(1.0 / *(float *)&_XMM0)) * (float)(v28 / v25);
    tr.trBase.v[0] = v32;
    tr.trBase.v[1] = v26;
    tr.trBase.v[2] = v27;
    tr.trDelta.v[0] = v31;
    tr.trDelta.v[1] = v33;
    tr.trDelta.v[2] = v34;
    if ( v17 - beginLerpTime >= accelLerpTime )
    {
      v35 = accelLerpTime + beginLerpTime;
      if ( accelLerpTime <= 0 )
      {
        v48.v[0] = v32;
        v48.v[1] = v26;
        v48.v[2] = v27;
      }
      else
      {
        BgTrajectory::LegacyEvaluateTrajectory(&tr, v35, &v48);
        v27 = v48.v[2];
        v26 = v48.v[1];
        v32 = v48.v[0];
        v17 = atTime;
      }
      if ( endLerpTime - v17 > decelLerpTime )
      {
        tr.trType = TR_LINEAR;
        tr.trTime = v35;
        tr.trDuration = v14 - accelLerpTime - decelLerpTime;
        tr.trBase.v[0] = v32;
        tr.trBase.v[1] = v26;
        tr.trBase.v[2] = v27;
        BgTrajectory::LegacyEvaluateTrajectory(&tr, v17, result);
        goto LABEL_30;
      }
      if ( decelLerpTime <= 0 )
      {
        *result = *dirEnd;
        goto LABEL_30;
      }
      v36 = (float)(v15 - v16) - v19;
      tr.trBase.v[0] = (float)(v31 * v36) + v32;
      tr.trType = TR_DECELERATE;
      tr.trBase.v[2] = (float)(v34 * v36) + v27;
      tr.trBase.v[1] = (float)(v33 * v36) + v26;
      tr.trTime = endLerpTime - decelLerpTime;
      tr.trDuration = decelLerpTime;
    }
    BgTrajectory::LegacyEvaluateTrajectory(&tr, v17, result);
    goto LABEL_30;
  }
  v12 = FLOAT_1_0;
  v13 = I_fclamp((float)(currTime - beginLerpTime) / (float)(endLerpTime - beginLerpTime), 0.0, 1.0);
  result->v[0] = (float)((float)(dirEnd->v[0] - dirBegin->v[0]) * *(float *)&v13) + dirBegin->v[0];
  result->v[1] = (float)((float)(dirEnd->v[1] - dirBegin->v[1]) * *(float *)&v13) + dirBegin->v[1];
  result->v[2] = (float)((float)(dirEnd->v[2] - dirBegin->v[2]) * *(float *)&v13) + dirBegin->v[2];
LABEL_30:
  v37 = result->v[1];
  v38 = LODWORD(result->v[0]);
  v39 = result->v[2];
  v40 = v38;
  *(float *)&v40 = fsqrt((float)((float)(*(float *)&v38 * *(float *)&v38) + (float)(v37 * v37)) + (float)(v39 * v39));
  _XMM3 = v40;
  __asm
  {
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm7, xmm0
  }
  result->v[0] = (float)(v12 / *(float *)&_XMM0) * *(float *)&v38;
  result->v[2] = (float)(v12 / *(float *)&_XMM0) * v39;
  result->v[1] = (float)(v12 / *(float *)&_XMM0) * v37;
}

/*
==============
R_LerpSunDirectionOverride
==============
*/
void R_LerpSunDirectionOverride(const vec3_t *sunDirBegin, const vec3_t *sunDirEnd, const int lerpBeginTime, const int lerpEndTime, const int lerpAccelTime, const int lerpDecelTime, const int bAllowSlowRecomputeShadows)
{
  float v7; 

  *(_WORD *)&rg.useSunDirOverride = 257;
  rg.useSunDirOverrideAllowSlowRecomputeShadows = bAllowSlowRecomputeShadows != 0;
  rg.sunDirOverride = *sunDirBegin;
  *(_QWORD *)rg.sunDirOverrideTarget.v = *(_QWORD *)sunDirEnd->v;
  v7 = sunDirEnd->v[2];
  rg.sunDirLerpAccelTime = lerpAccelTime;
  rg.sunDirLerpDecelTime = lerpDecelTime;
  rg.sunDirOverrideTarget.v[2] = v7;
  rg.sunDirLerpBeginTime = lerpBeginTime;
  rg.sunDirLerpEndTime = lerpEndTime;
}

/*
==============
R_LoadWorld
==============
*/
void R_LoadWorld(const unsigned int clientCount, const char *name, int *checksum, bool isFrontendScene)
{
  int v7; 
  GfxWorld *gfxWorld; 
  const char *baseName; 
  XAssetHeader v10; 
  XAssetHeader v11; 
  const RawFile *physicsLibrary; 
  unsigned __int64 RawFileLen; 
  XAssetHeader v14; 
  const RawFile *v15; 
  int v16; 
  unsigned __int64 v17; 
  int v18; 
  char *v19; 
  int v20; 
  unsigned int v21; 

  if ( rgp.world && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp.cpp", 590, ASSERT_TYPE_ASSERT, "(rgp.world == nullptr)", (const char *)&queryFormat, "rgp.world == nullptr") )
    __debugbreak();
  rgp.gameSortedStaticModels = 0;
  v7 = R_PopRemoteScreenUpdate();
  R_SyncRenderThread();
  Sys_WaitWorkerCmds();
  gfxWorld = DB_FindXAssetHeader(ASSET_TYPE_GFXWORLD, name, 0).gfxWorld;
  if ( gfxWorld )
  {
    if ( rgp.world && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp.cpp", 321, ASSERT_TYPE_ASSERT, "(rgp.world == 0)", (const char *)&queryFormat, "rgp.world == NULL") )
      __debugbreak();
    rgp.world = gfxWorld;
    rgp.gameWorldSorted = 0;
    baseName = gfxWorld->baseName;
    if ( baseName )
    {
      if ( DB_XAssetExists(ASSET_TYPE_STREAM_TREE_OVERRIDE, baseName) )
      {
        v10.physicsLibrary = DB_FindXAssetHeader(ASSET_TYPE_STREAM_TREE_OVERRIDE, gfxWorld->baseName, 0).physicsLibrary;
        if ( v10.physicsLibrary )
          Stream_TraverseFixOverrideImages(&gfxWorld->streamTree, v10.streamTreeOverride);
      }
    }
    if ( g_addonMapEnts && g_addonMapEnts->numSubModels )
    {
      if ( !rgp.world && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp.cpp", 374, ASSERT_TYPE_ASSERT, "(rgp.world)", (const char *)&queryFormat, "rgp.world") )
        __debugbreak();
      if ( rgp.world->modelCount > g_addonMapEnts->numSubModels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp.cpp", 375, ASSERT_TYPE_ASSERT, "((uint)rgp.world->modelCount <= g_addonMapEnts->numSubModels)", (const char *)&queryFormat, "(uint)rgp.world->modelCount <= g_addonMapEnts->numSubModels") )
        __debugbreak();
      memcpy_0(g_addonMapEnts->models, rgp.world->models, 96i64 * rgp.world->modelCount);
      rgp.world->models = g_addonMapEnts->models;
      rgp.world->modelCount = g_addonMapEnts->numSubModels;
    }
  }
  if ( rgp.world )
  {
    v11.physicsLibrary = DB_FindXAssetHeader(ASSET_TYPE_RAWFILE, "worldsmodelsinstances", 0).physicsLibrary;
    physicsLibrary = (const RawFile *)v11.physicsLibrary;
    if ( v11.physicsLibrary )
    {
      RawFileLen = DB_GetRawFileLen(v11.rawfile);
      s_world.smodels.instances = (GfxStaticModelInstance *)Mem_Virtual_Alloc(RawFileLen, "smodels.instances", TRACK_MISC);
      DB_GetRawBuffer(physicsLibrary, (char *)s_world.smodels.instances, RawFileLen);
    }
    v14.physicsLibrary = DB_FindXAssetHeader(ASSET_TYPE_RAWFILE, "himipradiusinvsqbsp", 0).physicsLibrary;
    v15 = (const RawFile *)v14.physicsLibrary;
    if ( v14.physicsLibrary )
    {
      v16 = DB_GetRawFileLen(v14.rawfile);
      v17 = v16;
      v18 = v16 - 1;
      if ( v18 != 4 * (s_world.surfaces.count + (unsigned __int64)s_world.surfaces.himipRadiusInvSqCompactedCount) )
      {
        v21 = 4 * (s_world.surfaces.himipRadiusInvSqCompactedCount + s_world.surfaces.count);
        v20 = v18;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp.cpp", 639, ASSERT_TYPE_ASSERT, "( len - 1 ) == ( s_world.surfaces.count * sizeof( uint ) + s_world.surfaces.himipRadiusInvSqCompactedCount * sizeof( float ) )", "%s == %s\n\t%i, %i", "len - 1", "s_world.surfaces.count * sizeof( uint ) + s_world.surfaces.himipRadiusInvSqCompactedCount * sizeof( float )", v20, v21) )
          __debugbreak();
      }
      v19 = (char *)Mem_Virtual_Alloc(v17, "himipradiusinvsqbsp", TRACK_MISC);
      DB_GetRawBuffer(v15, v19, v17);
      s_world.surfaces.himipRadiusInvSqIndirection = (unsigned int *)v19;
      s_world.surfaces.himipRadiusInvSqCompacted = (float *)&v19[4 * s_world.surfaces.count];
    }
    g_worldDpvs = &rgp.world->dpvs;
    g_worldDraw = &rgp.world->draw;
    *(__m256i *)g_drawConsts.outdoorLookupMatrix.m[0].v = *(__m256i *)rgp.world->outdoorLookupMatrix.m[0].v;
    *(__m256i *)g_drawConsts.outdoorLookupMatrix.row2.v = *(__m256i *)rgp.world->outdoorLookupMatrix.row2.v;
    if ( checksum )
      *checksum = rgp.world->checksum;
    R_LightTweak_Init();
    R_FlushSun();
    R_FlushTonemap();
    R_ClearAllPrimaryLightMotionBits();
    R_InitIsPrimaryLightLoaded();
    R_ResetBackendDataLightUpdateCount();
    RB_SetBspImages();
    DynEntCl_InitFilter();
    R_GenerateShadowMapCasterCells();
    R_UGB_DirtySurfData();
    DB_FixupWorldTransientZonesExternal();
    R_PushRemoteScreenUpdate(v7);
    R_CreateSparseVoxelTree(rgp.world);
    R_ReflectionProbeRelighting_WorldStartup();
    R_InitWorldSHLighting(rgp.world);
    R_StaticModelData_InitWorld();
    R_ModelIndirectionData_InitWorld();
    R_DynamicLightsets_InitWorld(rgp.world);
    R_ReflectionProbe_WorldStartup(rgp.world);
    rg.useSortedStaticModelReindex = 0;
    R_SpotShadow_FlushStaleCache();
    R_SpotShadow_FlushActiveCache();
    R_DecalVolumes_InitWorldBuffers(rgp.world);
    R_ST_Clutter_InitWorld();
    R_ST_LoadTerrain(name);
    R_MultiLightGridFXLighting_InitWorld();
    R_Glass_InitWorld();
    R_ReactiveMotion_InitWorld();
    R_CompressedSunShadow_InitWorld(rgp.world);
    R_ThermalResetSSRFade();
    Particle_LoadMagmaHeightfield(rgp.world, isFrontendScene);
    R_VOL_InitWorld(isFrontendScene);
    R_ResetCollectionVisibilityCache();
  }
  else
  {
    R_PushRemoteScreenUpdate(v7);
    Com_PrintError(16, "R_LoadWorld: Failed to load world '%s'\n", name);
  }
}

/*
==============
R_ReleaseSparseVoxelTree
==============
*/
void R_ReleaseSparseVoxelTree(GfxWorld *world)
{
  int v2; 
  GfxWrappedBuffer *voxelTreeHeaderConstantBuffer; 
  __int64 v4; 
  __int64 v5; 
  __int64 v6; 
  GfxWrappedBuffer *v7; 

  if ( !world && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp.cpp", 461, ASSERT_TYPE_ASSERT, "(world)", (const char *)&queryFormat, "world") )
    __debugbreak();
  v2 = 0;
  if ( world->voxelTreeCount > 0 )
  {
    voxelTreeHeaderConstantBuffer = deviceGlobals.voxelTreeHeaderConstantBuffer;
    v4 = 0i64;
    do
    {
      if ( world->voxelTree[v4].voxelTopDownViewNodeCount && voxelTreeHeaderConstantBuffer->buffer )
      {
        v5 = v2;
        R_ShutdownGfxWrappedBuffer(&deviceGlobals.voxelTreeHeaderConstantBuffer[v5]);
        R_ShutdownGfxWrappedBuffer(&deviceGlobals.voxelTreeHeaderStructuredBuffer[v5]);
        R_ShutdownGfxWrappedBuffer(&deviceGlobals.voxelTopDownViewNodeStructuredBuffer[v5]);
        R_ShutdownGfxWrappedBuffer(&deviceGlobals.voxelInternalNodeStructuredBuffer[v5]);
        R_ShutdownGfxWrappedBuffer(&deviceGlobals.voxelLeafNodeDataBuffer[v5]);
        R_ShutdownGfxWrappedBuffer(&deviceGlobals.voxelLightListDataBuffer[v5]);
        v6 = 2i64;
        v7 = deviceGlobals.voxelInternalNodeDynamicLightList[(__int64)v2];
        do
        {
          R_ShutdownGfxWrappedBuffer(v7++);
          --v6;
        }
        while ( v6 );
      }
      ++v2;
      ++v4;
      ++voxelTreeHeaderConstantBuffer;
    }
    while ( v2 < world->voxelTreeCount );
  }
}

/*
==============
R_ReleaseWorld
==============
*/
void R_ReleaseWorld(GfxWorld *world)
{
  unsigned int rwView; 

  R_ReleaseSparseVoxelTree(world);
  R_ReleaseDisplacementParms(world);
  if ( world->frustumLights.totalIndicesCount )
  {
    R_ShutdownGfxWrappedBuffer(&world->frustumLights.indexBuffer);
    R_ShutdownGfxWrappedBuffer(&world->frustumLights.vertexBuffer);
  }
  R_DynamicLightsets_ShutdownWorldBuffers(world);
  R_ReflectionProbe_ShutdownWorldBuffers(world);
  R_StaticModelData_ShutdownWorldBuffers(world);
  R_DecalVolumes_ShutdownWorldBuffers(world);
  rwView = world->draw.compressedSunShadowBuffer.rwView.rwView;
  if ( rwView != 3 && rwView && world->draw.compressedSunShadowBuffer.data && world->draw.compressedSunShadowBuffer.view.view >= 2 )
    R_ShutdownGfxWrappedBuffer(&world->draw.compressedSunShadowBuffer);
  R_CompressedSunShadow_ShutdownStreaming(world);
  if ( world->surfaces.surfDataBuffer.data && world->surfaces.surfDataBuffer.view.view >= 2 )
    R_ShutdownGfxWrappedBuffer(&world->surfaces.surfDataBuffer);
  R_MayhemSelfVis_ShutdownWorld(world);
}

/*
==============
R_ResetSunColorOverride
==============
*/
void R_ResetSunColorOverride(void)
{
  rg.useSunColorLinearSrgbOverride = 0;
}

/*
==============
R_ResetSunDirectionOverride
==============
*/
void R_ResetSunDirectionOverride(void)
{
  rg.useSunDirOverride = 0;
}

/*
==============
R_ResetSunIntensityOverride
==============
*/
void R_ResetSunIntensityOverride(void)
{
  rg.useSunIntensityOverride = 0;
}

/*
==============
R_SetSunColorOverride
==============
*/
void R_SetSunColorOverride(const vec3_t *sunColorLinearSrgb)
{
  rg.useSunColorLinearSrgbOverride = 1;
  rg.sunColorLinearSrgbOverride = *sunColorLinearSrgb;
}

/*
==============
R_SetSunDirectionOverride
==============
*/
void R_SetSunDirectionOverride(const vec3_t *sunDir, const int bAllowSlowRecomputeShadows)
{
  *(_WORD *)&rg.useSunDirOverride = 1;
  rg.useSunDirOverrideAllowSlowRecomputeShadows = bAllowSlowRecomputeShadows != 0;
  rg.sunDirOverride = *sunDir;
}

/*
==============
R_SetSunIntensityOverride
==============
*/
void R_SetSunIntensityOverride(const float sunIntensity)
{
  rg.sunIntensityOverride = sunIntensity;
  rg.useSunIntensityOverride = 1;
}

/*
==============
R_ShutdownWorld
==============
*/
void R_ShutdownWorld(int isRestart, int syncData)
{
  GfxWorld *world; 

  if ( rgp.world )
  {
    if ( syncData )
    {
      if ( !Sys_IsDatabaseReady() )
        Com_Printf(16, "Syncing in R_ShutdownWorld() for asset loads to complete...\n");
      Stream_PushSyncDisable();
      DB_SyncXAssets();
      Stream_PopSyncDisable();
    }
    R_ClearAllPrimaryLightMotionBits();
    R_TG_ShutdownWorld();
    R_CompressedSunShadow_ShutdownWorld(rgp.world);
    R_ReactiveMotion_ShutdownWorld();
    R_Glass_ShutdownWorld();
    R_MultiLightGridFXLighting_ShutdownWorld();
    R_ST_ShutdownTerrain();
    R_ST_Clutter_ShutdownWorld();
    R_ReleaseSparseVoxelTree(rgp.world);
    R_ReflectionProbe_WorldShutdown(rgp.world);
    R_ReflectionProbeRelighting_WorldShutdown();
    R_DynamicLightsets_ShutdownWorld(rgp.world);
    R_ModelIndirectionData_ShutdownWorld(rgp.world);
    R_StaticModelData_ShutdownWorld(rgp.world);
    R_ShutdownWorldSHLighting(rgp.world);
    R_DecalVolumes_ShutdownFrameData();
    world = rgp.world;
    if ( rgp.world->smodels.instances )
    {
      Mem_Virtual_Free(rgp.world->smodels.instances);
      rgp.world->smodels.instances = NULL;
      world = rgp.world;
    }
    if ( world->surfaces.himipRadiusInvSqIndirection )
    {
      Mem_Virtual_Free(world->surfaces.himipRadiusInvSqIndirection);
      rgp.world->surfaces.himipRadiusInvSqIndirection = NULL;
      rgp.world->surfaces.himipRadiusInvSqCompacted = NULL;
      world = rgp.world;
    }
    Particle_ReleaseMagmaHeightfield(world);
    R_VOL_ShutdownWorld();
    R_ResetCollectionVisibilityCache();
    rgp.world = NULL;
    rgp.gameWorldSorted = 0;
    g_worldDpvs = NULL;
    g_worldDraw = NULL;
    g_drawConsts.outdoorLookupMatrix.m[0] = 0ui64;
    g_drawConsts.outdoorLookupMatrix.row1 = 0ui64;
    g_drawConsts.outdoorLookupMatrix.row2 = 0ui64;
    g_drawConsts.outdoorLookupMatrix.row3 = 0ui64;
  }
  else
  {
    Com_Printf(16, "R_ShutdownWorld() failed since no GfxWorld is active...\n");
  }
}

