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
  GfxWorldDrawCells *v12; 

  _RSI = outDrawCache;
  if ( !worldDraw && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp.cpp", 533, ASSERT_TYPE_ASSERT, "(worldDraw)", (const char *)&queryFormat, "worldDraw") )
    __debugbreak();
  DebugWipe(_RSI, 0x39000ui64);
  memset_0(outDrawContext, 0, sizeof(GfxWorldTransientDrawContext));
  outDrawContext->zoneCount = worldDraw->transientZoneCount;
  for ( i = 0i64; (unsigned int)i < worldDraw->transientZoneCount; i = (unsigned int)(i + 1) )
  {
    _R8 = worldDraw->transientZones[i];
    if ( _R8 )
    {
      __asm { vmovups xmm0, xmmword ptr [r8+90h] }
      _RCX = 3 * i + 24576;
      __asm
      {
        vmovups xmmword ptr [rsi+rcx*8], xmm0
        vmovsd  xmm1, qword ptr [r8+0A0h]
        vmovsd  qword ptr [rsi+rcx*8+10h], xmm1
        vmovups ymm0, ymmword ptr [r8+10h]
      }
      v12 = (GfxWorldDrawCells *)((char *)_RSI + 8 * _RCX);
      _RCX = &_RSI->drawVerts[(unsigned __int64)(unsigned int)i];
      __asm
      {
        vmovups ymmword ptr [rcx], ymm0
        vmovups ymm1, ymmword ptr [r8+30h]
        vmovups ymmword ptr [rcx+20h], ymm1
        vmovups ymm0, ymmword ptr [r8+50h]
        vmovups ymmword ptr [rcx+40h], ymm0
        vmovups ymm1, ymmword ptr [r8+70h]
        vmovups ymmword ptr [rcx+60h], ymm1
      }
      outDrawContext->drawCellsPtrs[i] = v12;
      outDrawContext->drawVertsPtr[i] = _RCX;
      outDrawContext->gpuLightGrid[i] = _R8->gpuLightGrid.gpuLightGrid;
      outDrawContext->dynLightSets[i] = _R8->gpuLightGrid.SMLGppZone;
      outDrawContext->reflectionProbes[i] = _R8->reflectionProbes;
      outDrawContext->decalVolumes[i] = _R8->decalVolumes;
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
  __asm
  {
    vmovss  xmm0, dword ptr cs:?rg@@3Ur_globals_t@@A.sunColorLinearSrgbOverride; r_globals_t rg
    vmovss  dword ptr [rcx], xmm0
    vmovss  xmm1, dword ptr cs:?rg@@3Ur_globals_t@@A.sunColorLinearSrgbOverride+4; r_globals_t rg
    vmovss  dword ptr [rcx+4], xmm1
    vmovss  xmm0, dword ptr cs:?rg@@3Ur_globals_t@@A.sunColorLinearSrgbOverride+8; r_globals_t rg
    vmovss  dword ptr [rcx+8], xmm0
  }
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
  {
    R_LerpSunDir(&rg.sunDirOverride, &rg.sunDirOverrideTarget, rg.sunDirLerpBeginTime, rg.sunDirLerpEndTime, rg.sunDirLerpAccelTime, rg.sunDirLerpDecelTime, time, sunDirOut);
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr cs:?rg@@3Ur_globals_t@@A.sunDirOverride; r_globals_t rg
      vmovss  dword ptr [rdx], xmm0
      vmovss  xmm1, dword ptr cs:?rg@@3Ur_globals_t@@A.sunDirOverride+4; r_globals_t rg
      vmovss  dword ptr [rdx+4], xmm1
      vmovss  xmm0, dword ptr cs:?rg@@3Ur_globals_t@@A.sunDirOverride+8; r_globals_t rg
      vmovss  dword ptr [rdx+8], xmm0
    }
  }
  return 1i64;
}

/*
==============
R_GetSunIntensityOverride
==============
*/
__int64 R_GetSunIntensityOverride(float *sunIntensityOut)
{
  _RBX = sunIntensityOut;
  if ( !sunIntensityOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp.cpp", 151, ASSERT_TYPE_ASSERT, "(sunIntensityOut)", (const char *)&queryFormat, "sunIntensityOut") )
    __debugbreak();
  if ( !rg.useSunIntensityOverride )
    return 0i64;
  __asm
  {
    vmovss  xmm0, cs:?rg@@3Ur_globals_t@@A.sunIntensityOverride; r_globals_t rg
    vmovss  dword ptr [rbx], xmm0
  }
  return 1i64;
}

/*
==============
R_LerpSunDir
==============
*/
void R_LerpSunDir(const vec3_t *dirBegin, const vec3_t *dirEnd, const int beginLerpTime, const int endLerpTime, const int accelLerpTime, const int decelLerpTime, const int currTime, vec3_t *result)
{
  int v49; 
  int v59; 
  char v79; 
  int v96; 
  __int64 v128; 
  int atTime; 
  trajectory_t_secure tr; 
  vec3_t v132; 
  __int64 v140; 
  char v141; 
  void *retaddr; 

  _RAX = &retaddr;
  _RBP = &v140;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
  }
  _ER14 = accelLerpTime;
  _RBX = result;
  _R12 = (vec3_t *)dirEnd;
  if ( endLerpTime <= beginLerpTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp.cpp", 228, ASSERT_TYPE_ASSERT, "(endLerpTime > beginLerpTime)", (const char *)&queryFormat, "endLerpTime > beginLerpTime") )
    __debugbreak();
  _EDI = decelLerpTime;
  if ( accelLerpTime > 0 || decelLerpTime > 0 )
  {
    __asm
    {
      vmovaps xmmword ptr [rsp+140h+var_68+8], xmm8
      vmovaps [rsp+140h+var_78+8], xmm9
      vmovaps [rsp+140h+var_88+8], xmm11
      vmovaps [rsp+140h+var_98+8], xmm12
      vmovaps [rsp+140h+var_A8+8], xmm13
      vmovaps [rsp+140h+var_B8+8], xmm14
      vmovaps [rsp+140h+var_C8+8], xmm15
    }
    if ( accelLerpTime < 0 )
    {
      LODWORD(v128) = accelLerpTime;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp.cpp", 234, ASSERT_TYPE_ASSERT, "( ( accelLerpTime >= 0 ) )", "( accelLerpTime ) = %i", v128) )
        __debugbreak();
    }
    if ( decelLerpTime < 0 )
    {
      LODWORD(v128) = decelLerpTime;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp.cpp", 235, ASSERT_TYPE_ASSERT, "( ( decelLerpTime >= 0 ) )", "( decelLerpTime ) = %i", v128) )
        __debugbreak();
    }
    _ESI = endLerpTime - beginLerpTime;
    if ( accelLerpTime + decelLerpTime > endLerpTime - beginLerpTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp.cpp", 236, ASSERT_TYPE_ASSERT, "((accelLerpTime + decelLerpTime) <= (endLerpTime - beginLerpTime))", (const char *)&queryFormat, "(accelLerpTime + decelLerpTime) <= (endLerpTime - beginLerpTime)") )
      __debugbreak();
    v49 = I_clamp(currTime, beginLerpTime, endLerpTime);
    __asm
    {
      vmovss  xmm2, cs:__real@3a83126f
      vmovss  xmm7, cs:__real@40000000
      vmovd   xmm0, esi
      vcvtdq2ps xmm0, xmm0
      vmulss  xmm12, xmm0, xmm2
      vmovd   xmm0, r14d
      vcvtdq2ps xmm0, xmm0
      vmulss  xmm13, xmm0, xmm2
      vmovss  xmm0, dword ptr [r12]
    }
    v59 = v49;
    atTime = v49;
    _RAX = dirBegin;
    __asm
    {
      vmovd   xmm1, edi
      vcvtdq2ps xmm1, xmm1
      vmulss  xmm14, xmm1, xmm2
      vsubss  xmm8, xmm0, dword ptr [rax]
      vmovss  xmm0, dword ptr [r12+4]
      vsubss  xmm9, xmm0, dword ptr [rax+4]
      vmovss  xmm0, dword ptr [r12+8]
      vsubss  xmm11, xmm0, dword ptr [rax+8]
      vmulss  xmm0, xmm8, xmm8
      vmulss  xmm1, xmm9, xmm9
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm11, xmm11
      vaddss  xmm2, xmm2, xmm1
      vmulss  xmm0, xmm12, xmm7
      vsubss  xmm1, xmm0, xmm13
      vsqrtss xmm6, xmm2, xmm2
      vsubss  xmm15, xmm1, xmm14
      vxorps  xmm2, xmm2, xmm2
      vucomiss xmm15, xmm2
    }
    if ( v79 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp.cpp", 246, ASSERT_TYPE_ASSERT, "(fSpeedQuotient)", (const char *)&queryFormat, "fSpeedQuotient") )
        __debugbreak();
      _RAX = dirBegin;
      v59 = atTime;
    }
    __asm
    {
      vmovss  xmm5, dword ptr [rax+4]
      vmovss  xmm4, dword ptr [rax+8]
      vmulss  xmm0, xmm6, xmm7
      vmovss  xmm7, cs:__real@3f800000
      vdivss  xmm3, xmm0, xmm15
      vcmpless xmm0, xmm6, cs:__real@80000000
      vmovaps xmm15, [rsp+140h+var_C8+8]
      vblendvps xmm0, xmm6, xmm7, xmm0
      vdivss  xmm2, xmm7, xmm0
      vmulss  xmm0, xmm8, xmm2
      vmulss  xmm1, xmm9, xmm2
      vmulss  xmm6, xmm0, xmm3
      vmulss  xmm0, xmm11, xmm2
      vmovss  xmm2, dword ptr [rax]
      vmovaps xmm11, [rsp+140h+var_88+8]
    }
    tr.trType = TR_ACCELERATE;
    tr.trTime = beginLerpTime;
    tr.trDuration = accelLerpTime;
    __asm
    {
      vmulss  xmm8, xmm1, xmm3
      vmulss  xmm9, xmm0, xmm3
      vmovss  dword ptr [rsp+140h+tr.trBase], xmm2
      vmovss  dword ptr [rsp+140h+tr.trBase+4], xmm5
      vmovss  dword ptr [rsp+140h+tr.trBase+8], xmm4
      vmovss  dword ptr [rsp+140h+tr.trDelta], xmm6
      vmovss  dword ptr [rsp+140h+tr.trDelta+4], xmm8
      vmovss  dword ptr [rsp+140h+tr.trDelta+8], xmm9
    }
    if ( v59 - beginLerpTime >= accelLerpTime )
    {
      v96 = accelLerpTime + beginLerpTime;
      if ( accelLerpTime <= 0 )
      {
        __asm
        {
          vmovss  dword ptr [rsp+140h+var_D8], xmm2
          vmovss  dword ptr [rsp+140h+var_D8+4], xmm5
          vmovss  dword ptr [rsp+140h+var_D8+8], xmm4
        }
      }
      else
      {
        BgTrajectory::LegacyEvaluateTrajectory(&tr, v96, &v132);
        __asm
        {
          vmovss  xmm4, dword ptr [rsp+140h+var_D8+8]
          vmovss  xmm5, dword ptr [rsp+140h+var_D8+4]
          vmovss  xmm2, dword ptr [rsp+140h+var_D8]
        }
        v59 = atTime;
      }
      if ( endLerpTime - v59 > decelLerpTime )
      {
        tr.trType = TR_LINEAR;
        tr.trTime = v96;
        tr.trDuration = _ESI - accelLerpTime - decelLerpTime;
        __asm
        {
          vmovss  dword ptr [rsp+140h+tr.trBase], xmm2
          vmovss  dword ptr [rsp+140h+tr.trBase+4], xmm5
          vmovss  dword ptr [rsp+140h+tr.trBase+8], xmm4
        }
        BgTrajectory::LegacyEvaluateTrajectory(&tr, v59, result);
LABEL_30:
        __asm
        {
          vmovaps xmm13, [rsp+140h+var_A8+8]
          vmovaps xmm12, [rsp+140h+var_98+8]
          vmovaps xmm9, [rsp+140h+var_78+8]
          vmovaps xmm8, xmmword ptr [rsp+140h+var_68+8]
          vmovaps xmm14, [rsp+140h+var_B8+8]
        }
        goto LABEL_31;
      }
      if ( decelLerpTime <= 0 )
      {
        *result = *_R12;
        goto LABEL_30;
      }
      __asm
      {
        vsubss  xmm0, xmm12, xmm13
        vsubss  xmm3, xmm0, xmm14
        vmulss  xmm1, xmm6, xmm3
        vaddss  xmm2, xmm1, xmm2
        vmulss  xmm0, xmm8, xmm3
        vaddss  xmm1, xmm0, xmm5
        vmovss  dword ptr [rsp+140h+tr.trBase], xmm2
        vmulss  xmm2, xmm9, xmm3
        vaddss  xmm0, xmm2, xmm4
      }
      tr.trType = TR_DECELERATE;
      __asm
      {
        vmovss  dword ptr [rsp+140h+tr.trBase+8], xmm0
        vmovss  dword ptr [rsp+140h+tr.trBase+4], xmm1
      }
      tr.trTime = endLerpTime - decelLerpTime;
      tr.trDuration = decelLerpTime;
    }
    BgTrajectory::LegacyEvaluateTrajectory(&tr, v59, result);
    goto LABEL_30;
  }
  __asm
  {
    vmovss  xmm7, cs:__real@3f800000
    vxorps  xmm1, xmm1, xmm1
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm1, xmm1, eax
    vcvtsi2ss xmm0, xmm0, r15d
    vdivss  xmm0, xmm1, xmm0; val
    vxorps  xmm1, xmm1, xmm1; min
    vmovaps xmm2, xmm7; max
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  xmm1, dword ptr [r12]
    vsubss  xmm2, xmm1, dword ptr [rsi]
    vmulss  xmm3, xmm2, xmm0
    vaddss  xmm4, xmm3, dword ptr [rsi]
    vmovss  dword ptr [rbx], xmm4
    vmovss  xmm1, dword ptr [r12+4]
    vsubss  xmm2, xmm1, dword ptr [rsi+4]
    vmulss  xmm3, xmm2, xmm0
    vaddss  xmm4, xmm3, dword ptr [rsi+4]
    vmovss  dword ptr [rbx+4], xmm4
    vmovss  xmm1, dword ptr [r12+8]
    vmovaps xmm6, xmm0
    vsubss  xmm0, xmm1, dword ptr [rsi+8]
    vmulss  xmm2, xmm0, xmm6
    vaddss  xmm3, xmm2, dword ptr [rsi+8]
    vmovss  dword ptr [rbx+8], xmm3
  }
LABEL_31:
  __asm
  {
    vmovss  xmm6, dword ptr [rbx+4]
    vmovss  xmm4, dword ptr [rbx]
    vmovss  xmm5, dword ptr [rbx+8]
    vmulss  xmm0, xmm6, xmm6
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm3, xmm2, xmm2
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm7, xmm0
    vdivss  xmm2, xmm7, xmm0
    vmulss  xmm0, xmm2, xmm4
    vmovss  dword ptr [rbx], xmm0
    vmulss  xmm0, xmm2, xmm5
    vmulss  xmm1, xmm2, xmm6
    vmovss  dword ptr [rbx+8], xmm0
    vmovss  dword ptr [rbx+4], xmm1
  }
  _R11 = &v141;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
}

/*
==============
R_LerpSunDirectionOverride
==============
*/
void R_LerpSunDirectionOverride(const vec3_t *sunDirBegin, const vec3_t *sunDirEnd, const int lerpBeginTime, const int lerpEndTime, const int lerpAccelTime, const int lerpDecelTime, const int bAllowSlowRecomputeShadows)
{
  *(_WORD *)&rg.useSunDirOverride = 257;
  rg.useSunDirOverrideAllowSlowRecomputeShadows = bAllowSlowRecomputeShadows != 0;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx]
    vmovss  dword ptr cs:?rg@@3Ur_globals_t@@A.sunDirOverride, xmm0; r_globals_t rg
    vmovss  xmm1, dword ptr [rcx+4]
    vmovss  dword ptr cs:?rg@@3Ur_globals_t@@A.sunDirOverride+4, xmm1; r_globals_t rg
    vmovss  xmm0, dword ptr [rcx+8]
    vmovss  dword ptr cs:?rg@@3Ur_globals_t@@A.sunDirOverride+8, xmm0; r_globals_t rg
    vmovss  xmm1, dword ptr [rdx]
    vmovss  dword ptr cs:?rg@@3Ur_globals_t@@A.sunDirOverrideTarget, xmm1; r_globals_t rg
    vmovss  xmm0, dword ptr [rdx+4]
    vmovss  dword ptr cs:?rg@@3Ur_globals_t@@A.sunDirOverrideTarget+4, xmm0; r_globals_t rg
    vmovss  xmm1, dword ptr [rdx+8]
  }
  rg.sunDirLerpAccelTime = lerpAccelTime;
  rg.sunDirLerpDecelTime = lerpDecelTime;
  __asm { vmovss  dword ptr cs:?rg@@3Ur_globals_t@@A.sunDirOverrideTarget+8, xmm1; r_globals_t rg }
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
  int v23; 
  unsigned int v24; 

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
        v24 = 4 * (s_world.surfaces.himipRadiusInvSqCompactedCount + s_world.surfaces.count);
        v23 = v18;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp.cpp", 639, ASSERT_TYPE_ASSERT, "( len - 1 ) == ( s_world.surfaces.count * sizeof( uint ) + s_world.surfaces.himipRadiusInvSqCompactedCount * sizeof( float ) )", "%s == %s\n\t%i, %i", "len - 1", "s_world.surfaces.count * sizeof( uint ) + s_world.surfaces.himipRadiusInvSqCompactedCount * sizeof( float )", v23, v24) )
          __debugbreak();
      }
      v19 = (char *)Mem_Virtual_Alloc(v17, "himipradiusinvsqbsp", TRACK_MISC);
      DB_GetRawBuffer(v15, v19, v17);
      s_world.surfaces.himipRadiusInvSqIndirection = (unsigned int *)v19;
      s_world.surfaces.himipRadiusInvSqCompacted = (float *)&v19[4 * s_world.surfaces.count];
    }
    _RCX = rgp.world;
    g_worldDpvs = &rgp.world->dpvs;
    g_worldDraw = &rgp.world->draw;
    __asm
    {
      vmovups ymm0, ymmword ptr [rcx+3AE8h]
      vmovups ymmword ptr cs:?g_drawConsts@@3UGfxDrawConsts@@A.outdoorLookupMatrix, ymm0; GfxDrawConsts g_drawConsts
      vmovups ymm1, ymmword ptr [rcx+3B08h]
      vmovups ymmword ptr cs:?g_drawConsts@@3UGfxDrawConsts@@A.outdoorLookupMatrix+20h, ymm1; GfxDrawConsts g_drawConsts
    }
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
  __asm
  {
    vmovss  xmm0, dword ptr [rcx]
    vmovss  dword ptr cs:?rg@@3Ur_globals_t@@A.sunColorLinearSrgbOverride, xmm0; r_globals_t rg
    vmovss  xmm1, dword ptr [rcx+4]
    vmovss  dword ptr cs:?rg@@3Ur_globals_t@@A.sunColorLinearSrgbOverride+4, xmm1; r_globals_t rg
    vmovss  xmm0, dword ptr [rcx+8]
    vmovss  dword ptr cs:?rg@@3Ur_globals_t@@A.sunColorLinearSrgbOverride+8, xmm0; r_globals_t rg
  }
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
  __asm
  {
    vmovss  xmm0, dword ptr [rcx]
    vmovss  dword ptr cs:?rg@@3Ur_globals_t@@A.sunDirOverride, xmm0; r_globals_t rg
    vmovss  xmm1, dword ptr [rcx+4]
    vmovss  dword ptr cs:?rg@@3Ur_globals_t@@A.sunDirOverride+4, xmm1; r_globals_t rg
    vmovss  xmm0, dword ptr [rcx+8]
    vmovss  dword ptr cs:?rg@@3Ur_globals_t@@A.sunDirOverride+8, xmm0; r_globals_t rg
  }
}

/*
==============
R_SetSunIntensityOverride
==============
*/

void __fastcall R_SetSunIntensityOverride(double sunIntensity)
{
  __asm { vmovss  cs:?rg@@3Ur_globals_t@@A.sunIntensityOverride, xmm0; r_globals_t rg }
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

