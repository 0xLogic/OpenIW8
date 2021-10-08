/*
==============
StreamUpdateScheduler::FrameIndex
==============
*/

unsigned int __fastcall StreamUpdateScheduler::FrameIndex(StreamUpdateScheduler *this)
{
  return ?FrameIndex@StreamUpdateScheduler@@QEBAIXZ(this);
}

/*
==============
Stream_BeginScreenUpdateFrame
==============
*/

void Stream_BeginScreenUpdateFrame(void)
{
  ?Stream_BeginScreenUpdateFrame@@YAXXZ();
}

/*
==============
Stream_UpdateDynamicModelsCmd
==============
*/

void __fastcall Stream_UpdateDynamicModelsCmd(const void *const data)
{
  ?Stream_UpdateDynamicModelsCmd@@YAXQEBX@Z(data);
}

/*
==============
Stream_DecodeFreqDomainMetricBias
==============
*/

double __fastcall Stream_DecodeFreqDomainMetricBias(char freqDomainMetricBias)
{
  double result; 

  *(float *)&result = ?Stream_DecodeFreqDomainMetricBias@@YAMC@Z(freqDomainMetricBias);
  return result;
}

/*
==============
Stream_CurrentFrameIndex
==============
*/

unsigned int __fastcall Stream_CurrentFrameIndex()
{
  return ?Stream_CurrentFrameIndex@@YAIXZ();
}

/*
==============
Stream_UpdateDynamicModelsNeedsToWait
==============
*/

bool __fastcall Stream_UpdateDynamicModelsNeedsToWait(const void *const data)
{
  return ?Stream_UpdateDynamicModelsNeedsToWait@@YA_NQEBX@Z(data);
}

/*
==============
Stream_AdjustViewPosForST
==============
*/

float4 *__fastcall Stream_AdjustViewPosForST(float4 *result, const float4 *viewPos, const float4 *minBound, const float4 *maxBound)
{
  return ?Stream_AdjustViewPosForST@@YA?AUfloat4@@U1@00@Z(result, viewPos, minBound, maxBound);
}

/*
==============
StreamUpdateScheduler::ResetFrame
==============
*/

void __fastcall StreamUpdateScheduler::ResetFrame(StreamUpdateScheduler *this)
{
  ?ResetFrame@StreamUpdateScheduler@@QEAAXXZ(this);
}

/*
==============
Stream_UpdateWorldBspSurfsCmd
==============
*/

void __fastcall Stream_UpdateWorldBspSurfsCmd(const void *const data)
{
  ?Stream_UpdateWorldBspSurfsCmd@@YAXQEBX@Z(data);
}

/*
==============
Stream_EndScreenUpdateFrame
==============
*/

void Stream_EndScreenUpdateFrame(void)
{
  ?Stream_EndScreenUpdateFrame@@YAXXZ();
}

/*
==============
Stream_UpdateStreamTreeCmd
==============
*/

void __fastcall Stream_UpdateStreamTreeCmd(const void *const data)
{
  ?Stream_UpdateStreamTreeCmd@@YAXQEBX@Z(data);
}

/*
==============
Stream_AdjustViewPosForSTVec3
==============
*/

vec3_t *__fastcall Stream_AdjustViewPosForSTVec3(vec3_t *result, const vec3_t *viewPos, const float4 *minBound, const float4 *maxBound)
{
  return ?Stream_AdjustViewPosForSTVec3@@YA?ATvec3_t@@AEBT1@Ufloat4@@1@Z(result, viewPos, minBound, maxBound);
}

/*
==============
Stream_UpdateForClient
==============
*/

void __fastcall Stream_UpdateForClient(const GfxViewInfo *viewInfo)
{
  ?Stream_UpdateForClient@@YAXPEBUGfxViewInfo@@@Z(viewInfo);
}

/*
==============
Stream_BeginScreenUpdateFrameCmd
==============
*/

void __fastcall Stream_BeginScreenUpdateFrameCmd(const void *const data)
{
  ?Stream_BeginScreenUpdateFrameCmd@@YAXQEBX@Z(data);
}

/*
==============
Stream_UpdateForFrontendUI
==============
*/

void Stream_UpdateForFrontendUI(void)
{
  ?Stream_UpdateForFrontendUI@@YAXXZ();
}

/*
==============
StreamUpdateScheduler::SubFrameIndex
==============
*/

unsigned int __fastcall StreamUpdateScheduler::SubFrameIndex(StreamUpdateScheduler *this)
{
  return ?SubFrameIndex@StreamUpdateScheduler@@QEBAIXZ(this);
}

/*
==============
Stream_EndUpdateFrame
==============
*/

void __fastcall Stream_EndUpdateFrame(bool forPushSyncDisable)
{
  ?Stream_EndUpdateFrame@@YAX_N@Z(forPushSyncDisable);
}

/*
==============
StreamUpdateScheduler::ShouldSort
==============
*/

bool __fastcall StreamUpdateScheduler::ShouldSort(StreamUpdateScheduler *this)
{
  return ?ShouldSort@StreamUpdateScheduler@@QEBA_NXZ(this);
}

/*
==============
Stream_IsBeginScreenUpdateFrameThread
==============
*/

bool __fastcall Stream_IsBeginScreenUpdateFrameThread()
{
  return ?Stream_IsBeginScreenUpdateFrameThread@@YA_NXZ();
}

/*
==============
StreamUpdateScheduler::EnableSubFrames
==============
*/

void __fastcall StreamUpdateScheduler::EnableSubFrames(StreamUpdateScheduler *this, bool enable)
{
  ?EnableSubFrames@StreamUpdateScheduler@@QEAAX_N@Z(this, enable);
}

/*
==============
StreamUpdateScheduler::UpdateSubFrameCount
==============
*/

unsigned int __fastcall StreamUpdateScheduler::UpdateSubFrameCount(StreamUpdateScheduler *this)
{
  return ?UpdateSubFrameCount@StreamUpdateScheduler@@QEBAIXZ(this);
}

/*
==============
Stream_GetCustomImageDistanceSqBias
==============
*/

double __fastcall Stream_GetCustomImageDistanceSqBias(unsigned int imageIndex)
{
  double result; 

  *(float *)&result = ?Stream_GetCustomImageDistanceSqBias@@YAMI@Z(imageIndex);
  return result;
}

/*
==============
Stream_UpdateStaticModelsCmd
==============
*/

void __fastcall Stream_UpdateStaticModelsCmd(const void *const data)
{
  ?Stream_UpdateStaticModelsCmd@@YAXQEBX@Z(data);
}

/*
==============
StreamUpdateScheduler::TotalSubFrameCount
==============
*/

unsigned int __fastcall StreamUpdateScheduler::TotalSubFrameCount(StreamUpdateScheduler *this)
{
  return ?TotalSubFrameCount@StreamUpdateScheduler@@QEBAIXZ(this);
}

/*
==============
StreamUpdateScheduler::ShouldCombineImagesToParts
==============
*/

bool __fastcall StreamUpdateScheduler::ShouldCombineImagesToParts(StreamUpdateScheduler *this)
{
  return ?ShouldCombineImagesToParts@StreamUpdateScheduler@@QEBA_NXZ(this);
}

/*
==============
Stream_GetMinViewDistanceToClutter
==============
*/

double __fastcall Stream_GetMinViewDistanceToClutter(unsigned int viewIndex)
{
  double result; 

  *(float *)&result = ?Stream_GetMinViewDistanceToClutter@@YAMI@Z(viewIndex);
  return result;
}

/*
==============
StreamUpdateScheduler::IncrementSubFrame
==============
*/

void __fastcall StreamUpdateScheduler::IncrementSubFrame(StreamUpdateScheduler *this)
{
  ?IncrementSubFrame@StreamUpdateScheduler@@QEAAXXZ(this);
}

/*
==============
StreamUpdateScheduler::ShouldCombineModelsToImages
==============
*/

bool __fastcall StreamUpdateScheduler::ShouldCombineModelsToImages(StreamUpdateScheduler *this)
{
  return ?ShouldCombineModelsToImages@StreamUpdateScheduler@@QEBA_NXZ(this);
}

/*
==============
Stream_CombineCmd
==============
*/

void __fastcall Stream_CombineCmd(const void *const data)
{
  ?Stream_CombineCmd@@YAXQEBX@Z(data);
}

/*
==============
Stream_OnNewImagesAdded
==============
*/

void Stream_OnNewImagesAdded(void)
{
  ?Stream_OnNewImagesAdded@@YAXXZ();
}

/*
==============
StreamUpdateScheduler::ShouldCombine
==============
*/

bool __fastcall StreamUpdateScheduler::ShouldCombine(StreamUpdateScheduler *this)
{
  return ?ShouldCombine@StreamUpdateScheduler@@QEBA_NXZ(this);
}

/*
==============
StreamUpdateScheduler::ResetSubFrame
==============
*/

void __fastcall StreamUpdateScheduler::ResetSubFrame(StreamUpdateScheduler *this)
{
  ?ResetSubFrame@StreamUpdateScheduler@@QEAAXXZ(this);
}

/*
==============
Stream_UpdateDynamic_SceneDObjs
==============
*/
void Stream_UpdateDynamic_SceneDObjs(const StreamDynamicUpdateCmd *cmd)
{
  const dvar_t *v4; 
  __int64 v5; 
  __int64 v8; 
  int v9; 
  __int64 v10; 
  __int64 v12; 
  const XModel *v13; 
  __int64 v15; 
  int sceneDObjCount; 
  float *v20; 
  __int64 v21; 
  GfxPlacement placement; 
  char v23; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-38h], xmm6 }
  Sys_ProfBeginNamedEvent(0xFF808080, "Stream_UpdateDynamic_SceneDObjs");
  if ( !cmd->iterateSceneEntities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 1181, ASSERT_TYPE_ASSERT, "(cmd->iterateSceneEntities)", (const char *)&queryFormat, "cmd->iterateSceneEntities") )
    __debugbreak();
  v4 = DCONST_DVARBOOL_stream_hintDobjs;
  if ( !DCONST_DVARBOOL_stream_hintDobjs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_hintDobjs") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( v4->current.enabled )
  {
    sceneDObjCount = scene.sceneDObjCount;
    v5 = scene.sceneDObjCount;
    v21 = scene.sceneDObjCount;
    if ( scene.sceneDObjCount > 0 )
    {
      _R13 = &scene.sceneDObj[0].placement.placement.quat.v[2];
      v20 = &scene.sceneDObj[0].placement.placement.quat.v[2];
      __asm { vmovss  xmm6, cs:__real@3f800000 }
      do
      {
        v8 = *(_QWORD *)(_R13 + 343);
        if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 1196, ASSERT_TYPE_ASSERT, "(dobj)", (const char *)&queryFormat, "dobj") )
          __debugbreak();
        v9 = *(unsigned __int8 *)(v8 + 15);
        if ( !*(_BYTE *)(v8 + 15) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 1199, ASSERT_TYPE_ASSERT, "(modelCount)", (const char *)&queryFormat, "modelCount") )
          __debugbreak();
        v10 = *(_QWORD *)(v8 + 240);
        if ( v10 )
        {
          GfxSceneEntity_GetPlacementOrigin((const GfxSceneEntity *)(_R13 - 5), &placement.origin);
          __asm
          {
            vmovups xmm0, xmmword ptr [r13-8]
            vmovups xmmword ptr [rsp+0E8h+placement.quat], xmm0
          }
          v12 = 0i64;
          if ( v9 )
          {
            do
            {
              v13 = *(const XModel **)(v10 + 8 * v12);
              if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 1220, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
                __debugbreak();
              __asm { vmovaps xmm3, xmm6; scale }
              *(float *)&_XMM0 = Stream_AddDynamicModelDistanceForMultiView(&cmd->multiView, v13, &placement, *(const float *)&_XMM3);
              v15 = *(_QWORD *)(v8 + 272);
              if ( v15 )
              {
                __asm { vmovaps xmm2, xmm0; modelDistSq }
                Stream_AddDynamicWeaponCamoDistance((const XModelMaterialOverride *)(v15 + 16i64 * (unsigned int)v12), v13, *(float *)&_XMM2);
              }
              v12 = (unsigned int)(v12 + 1);
            }
            while ( (_DWORD)v12 != v9 );
            _R13 = v20;
            v5 = v21;
          }
        }
        else
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 1202, ASSERT_TYPE_ASSERT, "(dobjModels)", (const char *)&queryFormat, "dobjModels") )
            __debugbreak();
          Com_PrintError(35, "Stream_UpdateDynamic_SceneDObjs: Invalid DObj is found in scene (entnum: %d)\n", *(unsigned __int16 *)(v8 + 12));
        }
        _R13 += 356;
        v20 = _R13;
        v21 = --v5;
      }
      while ( v5 );
      if ( sceneDObjCount != scene.sceneDObjCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 1226, ASSERT_TYPE_ASSERT, "( sceneDObjCount ) == ( scene.sceneDObjCount )", "%s == %s\n\t%i, %i", "sceneDObjCount", "scene.sceneDObjCount", sceneDObjCount, scene.sceneDObjCount) )
        __debugbreak();
    }
  }
  Sys_ProfEndNamedEvent();
  _R11 = &v23;
  __asm { vmovaps xmm6, xmmword ptr [r11-10h] }
}

/*
==============
Stream_UpdateDynamic_SceneModels
==============
*/
void Stream_UpdateDynamic_SceneModels(const StreamDynamicUpdateCmd *cmd)
{
  const dvar_t *v6; 
  StreamUpdateMultiView *p_multiView; 
  unsigned __int64 v8; 
  volatile int sceneModelCount; 
  bool v10; 
  __int64 v12; 
  const XModel *v15; 
  const XModel *v16; 
  const XModelMaterialOverride *v18; 
  bool v20; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
  }
  Sys_ProfBeginNamedEvent(0xFF808080, "Stream_UpdateDynamic_SceneModels");
  if ( !cmd->iterateSceneEntities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 1299, ASSERT_TYPE_ASSERT, "(cmd->iterateSceneEntities)", (const char *)&queryFormat, "cmd->iterateSceneEntities") )
    __debugbreak();
  v6 = DCONST_DVARBOOL_stream_hintSceneModels;
  if ( !DCONST_DVARBOOL_stream_hintSceneModels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_hintSceneModels") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( v6->current.enabled )
  {
    p_multiView = &cmd->multiView;
    v8 = (unsigned __int64)&scene.sceneModelCount & 3;
    if ( ((unsigned __int8)&scene.sceneModelCount & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 141, ASSERT_TYPE_ASSERT, "( ( IsAligned( addr, sizeof( volatile_int32 ) ) ) )", "( addr ) = %p", &scene.sceneModelCount) )
      __debugbreak();
    sceneModelCount = scene.sceneModelCount;
    v10 = scene.sceneModelCount == 0;
    if ( scene.sceneModelCount )
    {
      _RBX = &scene.sceneModel[0].model;
      v12 = (unsigned int)scene.sceneModelCount;
      __asm { vxorps  xmm7, xmm7, xmm7 }
      do
      {
        __asm
        {
          vmovss  xmm6, dword ptr [rbx+4Ch]
          vcomiss xmm6, xmm7
        }
        if ( !v10 )
        {
          v15 = *_RBX;
          if ( !*_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 1317, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
            __debugbreak();
          v16 = _RBX[1];
          __asm { vmovaps xmm3, xmm6; scale }
          *(float *)&_XMM0 = Stream_AddDynamicModelDistanceForMultiView(p_multiView, v15, (const GfxPlacement *)(_RBX + 6), *(const float *)&_XMM3);
          if ( v16 )
          {
            v18 = *(const XModelMaterialOverride **)&v16->lodInfo[0].partBits.array[6];
            if ( v18 )
            {
              __asm { vmovaps xmm2, xmm0; modelDistSq }
              Stream_AddDynamicWeaponCamoDistance(v18, v15, *(float *)&_XMM2);
            }
          }
        }
        _RBX += 19;
        v20 = v12-- == 0;
        v10 = v20 || v12 == 0;
      }
      while ( v12 );
    }
    if ( v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 141, ASSERT_TYPE_ASSERT, "( ( IsAligned( addr, sizeof( volatile_int32 ) ) ) )", "( addr ) = %p", &scene.sceneModelCount) )
      __debugbreak();
    if ( sceneModelCount != scene.sceneModelCount )
    {
      if ( v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 141, ASSERT_TYPE_ASSERT, "( ( IsAligned( addr, sizeof( volatile_int32 ) ) ) )", "( addr ) = %p", &scene.sceneModelCount) )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 1323, ASSERT_TYPE_ASSERT, "( sceneModelCount ) == ( static_cast<uint>( Sys_InterlockedLoad( &scene.sceneModelCount ) ) )", "%s == %s\n\t%u, %u", "sceneModelCount", "static_cast<uint>( Sys_InterlockedLoad( &scene.sceneModelCount ) )", sceneModelCount, scene.sceneModelCount) )
        __debugbreak();
    }
  }
  Sys_ProfEndNamedEvent();
  __asm
  {
    vmovaps xmm6, [rsp+0A8h+var_38]
    vmovaps xmm7, [rsp+0A8h+var_48]
  }
}

/*
==============
Stream_UpdateDynamic_SceneBrushes
==============
*/
void Stream_UpdateDynamic_SceneBrushes(const StreamDynamicUpdateCmd *cmd)
{
  const dvar_t *v2; 
  StreamUpdateMultiView *p_multiView; 
  volatile int sceneBrushCount; 
  const GfxBrushModel **p_bmodel; 
  __int64 v6; 
  unsigned __int64 v7; 
  GfxWorld *world; 
  int v9; 
  unsigned int *v10; 
  __int64 i; 
  const Material *material; 
  __int64 v13; 
  __int64 v14; 
  volatile int v15; 

  Sys_ProfBeginNamedEvent(0xFF808080, "Stream_UpdateDynamic_SceneBrushes");
  if ( !cmd->iterateSceneEntities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 1330, ASSERT_TYPE_ASSERT, "(cmd->iterateSceneEntities)", (const char *)&queryFormat, "cmd->iterateSceneEntities") )
    __debugbreak();
  v2 = DCONST_DVARBOOL_stream_hintSceneBrushes;
  if ( !DCONST_DVARBOOL_stream_hintSceneBrushes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_hintSceneBrushes") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.enabled )
  {
    p_multiView = &cmd->multiView;
    sceneBrushCount = scene.sceneBrushCount;
    v15 = scene.sceneBrushCount;
    if ( scene.sceneBrushCount )
    {
      p_bmodel = &scene.sceneBrush[0].bmodel;
      v6 = (unsigned int)scene.sceneBrushCount;
      do
      {
        v7 = (unsigned __int64)*p_bmodel;
        if ( !*p_bmodel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 986, ASSERT_TYPE_ASSERT, "(bmodel)", (const char *)&queryFormat, "bmodel") )
          __debugbreak();
        if ( !rgp.world && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 987, ASSERT_TYPE_ASSERT, "(rgp.world)", (const char *)&queryFormat, "rgp.world") )
          __debugbreak();
        if ( (&s_world.models[1] > (GfxBrushModel *)v7 || (GfxBrushModel *)v7 > &s_world.models[s_world.modelCount]) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 990, ASSERT_TYPE_ASSERT, "(s_world.models + 1) <= (bmodel) && (bmodel) <= (s_world.models + s_world.modelCount)", "%s\n\t0x%p not in [0x%p, 0x%p]", "bmodel not in [s_world.models + 1, s_world.models + s_world.modelCount]", (const void *)v7, &s_world.models[1], &s_world.models[s_world.modelCount]) )
          __debugbreak();
        world = rgp.world;
        v9 = *(_DWORD *)(v7 + 84);
        v10 = &s_world.surfaces.himipRadiusInvSqBmodelSurfaceIndirection[s_world.surfaces.himipRadiusInvSqBmodelIndirection[(__int64)(v7 - (unsigned __int64)s_world.models) / 96 - 1]];
        for ( i = 0i64; (unsigned int)i < *(_DWORD *)(v7 + 88); i = (unsigned int)(i + 1) )
        {
          material = world->surfaces.surfaces[v9].material;
          if ( material && material->textureCount )
            Stream_AddBspSurfaceDistance(p_multiView, &s_world.surfaces.himipRadiusInvSqBModelCompacted[v10[i] & 0xFFFFFFF], v10[i] >> 28, (const Bounds *)v7, material);
          ++v9;
        }
        p_bmodel += 11;
        --v6;
      }
      while ( v6 );
      sceneBrushCount = v15;
    }
    if ( sceneBrushCount != scene.sceneBrushCount )
    {
      LODWORD(v14) = scene.sceneBrushCount;
      LODWORD(v13) = sceneBrushCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 1347, ASSERT_TYPE_ASSERT, "( sceneBrushCount ) == ( static_cast<uint>( scene.sceneBrushCount ) )", "%s == %s\n\t%u, %u", "sceneBrushCount", "static_cast<uint>( scene.sceneBrushCount )", v13, v14) )
        __debugbreak();
    }
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
Stream_UpdateDynamic_DynBrushesForClient
==============
*/
void Stream_UpdateDynamic_DynBrushesForClient(const StreamDynamicUpdateCmd *cmd)
{
  const dvar_t *v2; 
  __int64 localClientNum; 
  __int64 v4; 
  DynEntityClient *v5; 
  __int64 v6; 
  unsigned __int16 *v7; 
  unsigned __int16 v8; 
  unsigned __int16 v9; 
  unsigned int *p_dynEntDefId; 
  unsigned __int16 v11; 
  const DynEntityDef *Def; 
  unsigned __int16 brushModel; 
  GfxBrushModel *v14; 
  unsigned __int16 v15; 
  GfxBrushModel *models; 
  unsigned __int64 v17; 
  GfxWorld *world; 
  unsigned int startSurfIndex; 
  unsigned int *v20; 
  __int64 v21; 
  const Material *material; 
  __int64 v23; 
  __int64 v24; 
  __int64 v25; 
  __int64 v26; 
  __int64 v27; 
  __int64 v28; 
  const StreamUpdateMultiView *multiView; 
  unsigned __int16 *v30; 
  unsigned __int16 v31; 
  int v32; 

  Sys_ProfBeginNamedEvent(0xFF808080, "Stream_UpdateDynamic_DynBrushesForClient");
  v2 = DCONST_DVARBOOL_stream_hintDynEnts;
  if ( !DCONST_DVARBOOL_stream_hintDynEnts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_hintDynEnts") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.enabled )
  {
    localClientNum = cmd->localClientNum;
    v32 = localClientNum;
    multiView = &cmd->multiView;
    if ( (unsigned int)localClientNum >= 2 )
    {
      LODWORD(v24) = 2;
      LODWORD(v23) = cmd->localClientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 311, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v23, v24) )
        __debugbreak();
    }
    v4 = 16 * localClientNum;
    v27 = 16 * localClientNum;
    v5 = g_dynEntClientLists[localClientNum][1];
    if ( (unsigned int)localClientNum >= 2 )
    {
      LODWORD(v24) = 2;
      LODWORD(v23) = localClientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 300, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v23, v24) )
        __debugbreak();
    }
    v6 = 4 * localClientNum;
    v28 = 4 * localClientNum;
    v7 = &g_dynEntClientEntsAllocCount[localClientNum][1];
    v30 = v7;
    v8 = *v7;
    v31 = *v7;
    v9 = 0;
    if ( *v7 )
    {
      p_dynEntDefId = &v5->dynEntDefId;
      v11 = *v7;
      do
      {
        if ( (p_dynEntDefId[5] & 1) != 0 )
        {
          Def = DynEnt_GetDef((DynEntityListId)(*p_dynEntDefId >> 19), *p_dynEntDefId & 0x7FFFF, DYNENT_BASIS_BRUSH);
          if ( !Def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 1375, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
            __debugbreak();
          brushModel = Def->brushModel;
          if ( !brushModel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 1378, ASSERT_TYPE_ASSERT, "(brushModel)", (const char *)&queryFormat, "brushModel") )
            __debugbreak();
          v14 = R_GetBrushModel(brushModel);
          if ( (unsigned int)localClientNum >= 2 )
          {
            LODWORD(v24) = 2;
            LODWORD(v23) = localClientNum;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 184, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v23, v24) )
              __debugbreak();
          }
          if ( !*(DynEntityPose **)((char *)&g_dynEntPoseLists[0][1] + v4) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 186, ASSERT_TYPE_ASSERT, "(g_dynEntPoseLists[localClientNum][basis])", (const char *)&queryFormat, "g_dynEntPoseLists[localClientNum][basis]") )
            __debugbreak();
          v15 = *(unsigned __int16 *)((char *)&g_dynEntClientEntsAllocCount[0][1] + v6);
          if ( v9 >= v15 )
          {
            LODWORD(v24) = v15;
            LODWORD(v23) = v9;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 187, ASSERT_TYPE_ASSERT, "(unsigned)( clientId ) < (unsigned)( g_dynEntClientEntsAllocCount[localClientNum][basis] )", "clientId doesn't index g_dynEntClientEntsAllocCount[localClientNum][basis]\n\t%i not in [0, %i)", v23, v24) )
              __debugbreak();
          }
          if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 986, ASSERT_TYPE_ASSERT, "(bmodel)", (const char *)&queryFormat, "bmodel") )
            __debugbreak();
          if ( !rgp.world && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 987, ASSERT_TYPE_ASSERT, "(rgp.world)", (const char *)&queryFormat, "rgp.world") )
            __debugbreak();
          models = s_world.models;
          if ( &s_world.models[1] > v14 || v14 > &s_world.models[s_world.modelCount] )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 990, ASSERT_TYPE_ASSERT, "(s_world.models + 1) <= (bmodel) && (bmodel) <= (s_world.models + s_world.modelCount)", "%s\n\t0x%p not in [0x%p, 0x%p]", "bmodel not in [s_world.models + 1, s_world.models + s_world.modelCount]", v14, &s_world.models[1], &s_world.models[s_world.modelCount]) )
              __debugbreak();
            models = s_world.models;
          }
          v17 = (__int64)((unsigned __int128)(((char *)v14 - (char *)models) * (__int128)0x2AAAAAAAAAAAAAABi64) >> 64) >> 4;
          world = rgp.world;
          startSurfIndex = v14->startSurfIndex;
          v20 = &s_world.surfaces.himipRadiusInvSqBmodelSurfaceIndirection[s_world.surfaces.himipRadiusInvSqBmodelIndirection[(v17 >> 63) - 1 + v17]];
          v21 = 0i64;
          if ( v14->surfaceCount )
          {
            do
            {
              material = world->surfaces.surfaces[startSurfIndex].material;
              if ( material && material->textureCount )
                Stream_AddBspSurfaceDistance(multiView, &s_world.surfaces.himipRadiusInvSqBModelCompacted[v20[v21] & 0xFFFFFFF], v20[v21] >> 28, &v14->writable.bounds, material);
              ++startSurfIndex;
              v21 = (unsigned int)(v21 + 1);
            }
            while ( (unsigned int)v21 < v14->surfaceCount );
            LODWORD(localClientNum) = v32;
          }
          v6 = v28;
          v11 = v31;
          v4 = v27;
        }
        ++v9;
        p_dynEntDefId += 14;
      }
      while ( v9 < v11 );
      v8 = v31;
      v7 = v30;
    }
    if ( (unsigned int)localClientNum >= 2 )
    {
      LODWORD(v24) = 2;
      LODWORD(v23) = localClientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 300, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v23, v24) )
        __debugbreak();
    }
    if ( v8 != *v7 )
    {
      if ( (unsigned int)localClientNum >= 2 )
      {
        LODWORD(v24) = 2;
        LODWORD(v23) = localClientNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 300, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v23, v24) )
          __debugbreak();
      }
      LODWORD(v26) = *v7;
      LODWORD(v25) = v8;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 1386, ASSERT_TYPE_ASSERT, "( clientCount ) == ( DynEnt_GetAllocatedClientCount( localClientNum, DYNENT_BASIS_BRUSH ) )", "%s == %s\n\t%u, %u", "clientCount", "DynEnt_GetAllocatedClientCount( localClientNum, DYNENT_BASIS_BRUSH )", v25, v26) )
        __debugbreak();
    }
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
Stream_UpdateDynamic_DynModelsForClient
==============
*/
void Stream_UpdateDynamic_DynModelsForClient(const StreamDynamicUpdateCmd *cmd)
{
  const dvar_t *v4; 
  __int64 localClientNum; 
  StreamUpdateMultiView *p_multiView; 
  DynEntityClient *v7; 
  unsigned __int16 v8; 
  unsigned __int16 v9; 
  const XModel *activeModel; 
  DynEntityPose *PoseFromClientId; 
  __int64 v15; 
  __int64 v16; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-38h], xmm6 }
  Sys_ProfBeginNamedEvent(0xFF808080, "Stream_UpdateDynamic_DynModelsForClient");
  v4 = DCONST_DVARBOOL_stream_hintDynEnts;
  if ( !DCONST_DVARBOOL_stream_hintDynEnts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_hintDynEnts") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( v4->current.enabled )
  {
    localClientNum = cmd->localClientNum;
    p_multiView = &cmd->multiView;
    if ( (unsigned int)localClientNum >= 2 )
    {
      LODWORD(v16) = 2;
      LODWORD(v15) = cmd->localClientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 311, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v15, v16) )
        __debugbreak();
    }
    v7 = g_dynEntClientLists[localClientNum][0];
    if ( (unsigned int)localClientNum >= 2 )
    {
      LODWORD(v16) = 2;
      LODWORD(v15) = localClientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 300, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v15, v16) )
        __debugbreak();
    }
    v8 = g_dynEntClientEntsAllocCount[localClientNum][0];
    v9 = 0;
    if ( v8 )
    {
      __asm { vmovss  xmm6, cs:__real@3f800000 }
      do
      {
        if ( (v7->flags & 1) != 0 )
        {
          activeModel = v7->activeModel;
          if ( v7->activeModel )
          {
            PoseFromClientId = DynEnt_GetPoseFromClientId((LocalClientNum_t)localClientNum, v9, DYNENT_BASIS_MODEL);
            __asm { vmovaps xmm3, xmm6; scale }
            Stream_AddDynamicModelDistanceForMultiView(p_multiView, activeModel, &PoseFromClientId->pose, *(const float *)&_XMM3);
          }
        }
        ++v9;
        ++v7;
      }
      while ( v9 < v8 );
    }
    if ( (unsigned int)localClientNum >= 2 )
    {
      LODWORD(v16) = 2;
      LODWORD(v15) = localClientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 300, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v15, v16) )
        __debugbreak();
    }
    if ( v8 != g_dynEntClientEntsAllocCount[localClientNum][0] )
    {
      if ( (unsigned int)localClientNum >= 2 )
      {
        LODWORD(v16) = 2;
        LODWORD(v15) = localClientNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 300, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v15, v16) )
          __debugbreak();
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 1422, ASSERT_TYPE_ASSERT, "( clientCount ) == ( DynEnt_GetAllocatedClientCount( localClientNum, DYNENT_BASIS_MODEL ) )", "%s == %s\n\t%u, %u", "clientCount", "DynEnt_GetAllocatedClientCount( localClientNum, DYNENT_BASIS_MODEL )", v8, g_dynEntClientEntsAllocCount[localClientNum][0]) )
        __debugbreak();
    }
  }
  Sys_ProfEndNamedEvent();
  __asm { vmovaps xmm6, [rsp+98h+var_38] }
}

/*
==============
Stream_UpdateDynamic_SuperTerrain
==============
*/
void Stream_UpdateDynamic_SuperTerrain(const StreamDynamicUpdateCmd *cmd)
{
  const StreamDynamicUpdateCmd *v13; 
  const StTerrain *terrain; 
  unsigned int surfaceCount; 
  __int64 v25; 
  unsigned int v26; 
  const StDiskTerrainSurface *v28; 
  int integer; 
  __int64 v30; 
  const StTerrainNode *v31; 
  GfxImage *heightMap; 
  unsigned int GfxImageIndex; 
  GfxImage *cutoutMap; 
  unsigned int v35; 
  const dvar_t *v36; 
  bool v50; 
  const dvar_t *v61; 
  StCombinedMapUsage v71; 
  int v72; 
  const dvar_t *v84; 
  bool v92; 
  bool v93; 
  unsigned int v94; 
  unsigned __int8 v96; 
  StreamDistance v97; 
  unsigned int *v99; 
  unsigned int v100; 
  float *p_tileMaterialDistancesSq; 
  __int64 i; 
  StreamUpdateMultiView *v103; 
  unsigned int layerCount; 
  float4 *minBound; 
  unsigned int v242; 
  unsigned int v243; 
  __int64 v244; 
  __int64 v245; 
  const GfxImage *BindlessImageFromFlattenedIndex; 
  const GfxImage *v247; 
  unsigned int v248; 
  __int64 v249; 
  const dvar_t *v250; 
  StreamFrontendGlob *v251; 
  unsigned int height; 
  unsigned int v253; 
  unsigned int v254; 
  __int64 v255; 
  __int64 v256; 
  unsigned int v257; 
  GfxImage *v258; 
  __int64 v259; 
  unsigned int v273; 
  const dvar_t *v274; 
  StreamFrontendGlob *v275; 
  bool v276; 
  bool v277; 
  __int64 v284; 
  unsigned int v285; 
  const dvar_t *v286; 
  StreamFrontendGlob *v287; 
  __int64 v288; 
  unsigned int v289; 
  const dvar_t *v290; 
  StreamFrontendGlob *v291; 
  unsigned int lightmapIndex; 
  const StTerrain *v293; 
  const GfxImage **images; 
  __int64 v295; 
  unsigned int v296; 
  __int64 v297; 
  const dvar_t *v298; 
  StreamFrontendGlob *v299; 
  int v300; 
  const dvar_t *v313; 
  __int64 v338; 
  __int64 v339; 
  char v340; 
  int v342; 
  unsigned int v343; 
  StCombinedMapUsage v344; 
  __int64 v345; 
  int v346; 
  unsigned int v347; 
  const StDiskTerrainSurface *v348; 
  const StTerrain *v349; 
  unsigned int v353; 
  StreamUpdateMultiView *multiView; 
  int v355; 
  int v356; 
  const StreamDynamicUpdateCmd *v357; 
  Stream_UpdateDynamic_SuperTerrain::__l14::<lambda_8133dd63ba336d8a21070153c3a07a07> iterator; 
  __int64 v359; 
  __int64 v360; 
  StreamDistance v361; 
  float v362; 
  float v363; 
  float v364; 
  __int64 v365; 
  __int128 v366; 
  __int128 v367; 
  __int128 v368; 
  __int128 v369; 
  __int128 v370; 
  __int128 v371; 
  __int128 v372; 
  vec3_t viewPos; 
  vec3_t v374; 
  vec3_t dpvsCamPos; 
  float tileMaterialDistancesSq; 
  char v408; 
  void *retaddr; 

  _RAX = &retaddr;
  v365 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps xmmword ptr [rax-88h], xmm11
    vmovaps xmmword ptr [rax-98h], xmm12
    vmovaps xmmword ptr [rax-0A8h], xmm13
    vmovaps xmmword ptr [rax-0B8h], xmm14
    vmovaps xmmword ptr [rax-0C8h], xmm15
  }
  v13 = cmd;
  v357 = cmd;
  Sys_ProfBeginNamedEvent(0xFF808080, "Stream_UpdateDynamic_SuperTerrain");
  _R14 = &v13->multiView;
  multiView = &v13->multiView;
  if ( !v13->multiView.viewCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 1588, ASSERT_TYPE_ASSERT, "(multiView.viewCount)", (const char *)&queryFormat, "multiView.viewCount") )
    __debugbreak();
  terrain = s_stGlob.terrain;
  v349 = s_stGlob.terrain;
  if ( s_stGlob.terrain )
  {
    __asm
    {
      vmovss  xmm9, cs:__real@7f7fffff
      vmovaps xmm10, xmm9
      vmovss  [rsp+310h+var_2BC], xmm9
    }
    *(double *)&_XMM0 = CL_StreamViews_ParametricVelocity((const LocalClientNum_t)v13->localClientNum);
    __asm
    {
      vmovaps xmm14, xmm0
      vmovss  [rbp+210h+var_288], xmm0
    }
    *(double *)&_XMM0 = R_ST_CombinedMapDistanceSqThreshold(1);
    __asm
    {
      vmovaps xmm11, xmm0
      vmovss  [rbp+210h+var_290], xmm0
    }
    _RDI = DVARFLT_stream_combinedMapDistanceSqThresholdScaler;
    if ( !DVARFLT_stream_combinedMapDistanceSqThresholdScaler && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_combinedMapDistanceSqThresholdScaler") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+28h]
      vmulss  xmm1, xmm0, xmm0
      vmulss  xmm13, xmm1, xmm11
      vmovss  [rbp+210h+var_28C], xmm13
    }
    surfaceCount = terrain->surfaceCount;
    v353 = surfaceCount;
    v25 = 0i64;
    v26 = 0;
    v347 = 0;
    if ( surfaceCount )
    {
      v360 = 0i64;
      __asm { vmovss  xmm12, cs:__real@3f000000 }
      while ( 1 )
      {
        v28 = &terrain->surfaces[v25];
        v348 = v28;
        integer = r_st_drawSingleSurface->current.integer;
        if ( integer != -1 && integer != v26 )
          goto LABEL_288;
        v30 = (__int64)&v28->grid.levels[v28->grid.numLevels - 1];
        if ( (*(_DWORD *)v30 != 1 || *(_DWORD *)(v30 + 4) != 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 1546, ASSERT_TYPE_ASSERT, "(lowDetailLodLevel.width == 1 && lowDetailLodLevel.height == 1)", (const char *)&queryFormat, "lowDetailLodLevel.width == 1 && lowDetailLodLevel.height == 1") )
          __debugbreak();
        if ( !*(_QWORD *)(v30 + 8) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 1547, ASSERT_TYPE_ASSERT, "(lowDetailLodLevel.nodes)", (const char *)&queryFormat, "lowDetailLodLevel.nodes") )
          __debugbreak();
        v31 = *(const StTerrainNode **)(v30 + 8);
        if ( R_ST_NodeRequiresHeightmap(v31) )
        {
          heightMap = v28->heightMap;
          if ( (heightMap->flags & 0x40) != 0 )
          {
            GfxImageIndex = DB_GetGfxImageIndex(heightMap);
            Stream_AddImageDistance(GfxImageIndex, (StreamDistance)65542);
          }
        }
        if ( R_ST_NodeRequiresCutoutmap(v31) )
        {
          cutoutMap = v28->cutoutMap;
          if ( (cutoutMap->flags & 0x40) != 0 )
          {
            v35 = DB_GetGfxImageIndex(cutoutMap);
            Stream_AddImageDistance(v35, (StreamDistance)65542);
          }
        }
        v36 = DCONST_DVARBOOL_stream_hintTerrain;
        if ( !DCONST_DVARBOOL_stream_hintTerrain && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_hintTerrain") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v36);
        if ( !v36->current.enabled )
          goto LABEL_288;
        _RCX = &v28->wldBounds;
        __asm { vmovss  xmm0, dword ptr [rcx] }
        HIDWORD(v368) = 0;
        __asm
        {
          vmovups xmm4, xmmword ptr [rbp+40h]
          vmovss  xmm4, xmm4, xmm0
          vinsertps xmm4, xmm4, dword ptr [rcx+4], 10h
          vinsertps xmm4, xmm4, dword ptr [rcx+8], 20h ; ' '
          vmovups xmmword ptr [rbp+40h], xmm4
          vmovss  xmm0, dword ptr [rcx+0Ch]
        }
        HIDWORD(v369) = 0;
        __asm
        {
          vmovups xmm3, xmmword ptr [rbp+50h]
          vmovss  xmm3, xmm3, xmm0
          vinsertps xmm3, xmm3, dword ptr [rcx+10h], 10h
          vinsertps xmm3, xmm3, dword ptr [rcx+14h], 20h ; ' '
          vmovups xmmword ptr [rbp+50h], xmm3
          vsubps  xmm0, xmm4, xmm3
          vmovups [rbp+210h+var_1E0], xmm0
          vaddps  xmm1, xmm4, xmm3
          vmovups [rbp+210h+var_1F0], xmm1
        }
        v50 = R_Umbra_IsBoxVisible(&v28->wldBounds, 0, v13->viewInfoIndex, 0) == 1;
        __asm
        {
          vmovss  dword ptr [rsp+310h+var_2A8], xmm9
          vmovss  [rbp+210h+var_278], xmm9
        }
        iterator.minBound = (float4 *)&v367;
        iterator.maxBound = (float4 *)&v366;
        iterator.realDistanceSq = (float *)&v355;
        iterator.streamDistanceSq = (float *)&v346;
        Stream_ViewPos_Iterate__lambda_8133dd63ba336d8a21070153c3a07a07_(_R14, &iterator);
        if ( !v50 )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rsp+310h+var_2A8]
            vcomiss xmm0, cs:__real@4a742400
          }
        }
        if ( (v28->heightMap->flags & 0x40) != 0 && R_ST_QueryAndClearSurfaceBaseResourceStreamRequest(v28, ST_SURFACE_STREAM_REQUEST_GEO_HEIGHTMAP) )
        {
          v94 = DB_GetGfxImageIndex(v28->heightMap);
          __asm
          {
            vmovss  xmm0, dword ptr [rsp+310h+var_2A8]
            vcomiss xmm0, xmm11
          }
          if ( v96 )
          {
            v97.mValue = 65542;
          }
          else
          {
            *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_stream_farAwayHeightmapsStreamingDistance, "stream_farAwayHeightmapsStreamingDistance");
            __asm { vmulss  xmm1, xmm0, xmm0; distance }
            StreamDistance::StreamDistance(&v361, *(float *)&_XMM1);
            v97.mValue = *v99;
          }
          Stream_AddImageDistance(v94, v97);
        }
        if ( (v28->cutoutMap->flags & 0x40) != 0 && R_ST_QueryAndClearSurfaceBaseResourceStreamRequest(v28, ST_SURFACE_STREAM_REQUEST_GEO_CUTOUTMAP) )
        {
          v100 = DB_GetGfxImageIndex(v28->cutoutMap);
          Stream_AddImageDistance(v100, (StreamDistance)65542);
        }
        __asm
        {
          vmovups xmm2, xmmword ptr [r14]
          vshufps xmm1, xmm2, xmm2, 55h ; 'U'
          vshufps xmm0, xmm2, xmm2, 0AAh ; 'ª'
        }
        HIDWORD(v370) = 0;
        __asm
        {
          vmovups xmm6, xmmword ptr [rbp+60h]
          vmovss  xmm6, xmm6, xmm2
          vinsertps xmm6, xmm6, xmm1, 10h
          vinsertps xmm6, xmm6, xmm0, 20h ; ' '
          vmovups xmmword ptr [rbp+60h], xmm6
          vmovdqa xmm7, [rbp+210h+var_1F0]
          vmovdqa xmm8, [rbp+210h+var_1E0]
        }
        v61 = DVARFLT_stream_superTerrainHeightScaling;
        if ( !DVARFLT_stream_superTerrainHeightScaling && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_superTerrainHeightScaling") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v61);
        __asm
        {
          vminps  xmm0, xmm7, xmm6
          vmaxps  xmm3, xmm0, xmm8
          vsubps  xmm1, xmm6, xmm3
          vmovups xmm0, cs:__xmm@3f800000000000003f8000003f800000
          vinsertps xmm0, xmm0, dword ptr [rdi+28h], 20h ; ' '
          vmulps  xmm0, xmm1, xmm0
          vaddps  xmm2, xmm0, xmm3
          vshufps xmm1, xmm2, xmm2, 55h ; 'U'
          vextractps [rbp+210h+var_220], xmm2, 2
          vunpcklps xmm0, xmm2, xmm1
          vmovsd  qword ptr [rbp+210h+viewPos], xmm0
        }
        viewPos.v[2] = v362;
        v71 = R_ST_CombinedMapUsageForSurface(v28, &viewPos);
        v344 = v71;
        v72 = 1;
        if ( v357->multiView.viewCount > 1 )
        {
          _RSI = &v357->multiView.viewPos[1];
          do
          {
            if ( v71 == ST_COMBINED_MAP_USAGE_MIXED )
              break;
            __asm
            {
              vmovups xmm1, xmmword ptr [rsi]
              vmovups xmmword ptr [rbp+210h+iterator.minBound], xmm1
              vshufps xmm2, xmm1, xmm1, 55h ; 'U'
              vmovups xmmword ptr [rbp+210h+iterator.minBound], xmm1
              vshufps xmm0, xmm1, xmm1, 0AAh ; 'ª'
            }
            HIDWORD(v371) = 0;
            __asm
            {
              vmovups xmm6, xmmword ptr [rbp+70h]
              vmovss  xmm6, xmm6, xmm1
              vinsertps xmm6, xmm6, xmm2, 10h
              vinsertps xmm6, xmm6, xmm0, 20h ; ' '
              vmovups xmmword ptr [rbp+70h], xmm6
              vmovdqa xmm7, [rbp+210h+var_1F0]
              vmovdqa xmm8, [rbp+210h+var_1E0]
            }
            v84 = DVARFLT_stream_superTerrainHeightScaling;
            if ( !DVARFLT_stream_superTerrainHeightScaling && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_superTerrainHeightScaling") )
              __debugbreak();
            Dvar_CheckFrontendServerThread(v84);
            __asm
            {
              vminps  xmm0, xmm7, xmm6
              vmaxps  xmm3, xmm0, xmm8
              vsubps  xmm1, xmm6, xmm3
              vmovups xmm0, cs:__xmm@3f800000000000003f8000003f800000
              vinsertps xmm0, xmm0, dword ptr [rdi+28h], 20h ; ' '
              vmulps  xmm0, xmm1, xmm0
              vaddps  xmm2, xmm0, xmm3
              vshufps xmm1, xmm2, xmm2, 55h ; 'U'
              vextractps [rbp+210h+var_210], xmm2, 2
              vunpcklps xmm0, xmm2, xmm1
              vmovsd  qword ptr [rbp+210h+var_170], xmm0
            }
            v374.v[2] = v363;
            if ( R_ST_CombinedMapUsageForSurface(v28, &v374) != v71 )
              v71 = ST_COMBINED_MAP_USAGE_MIXED;
            ++v72;
            ++_RSI;
          }
          while ( v72 < v357->multiView.viewCount );
          v344 = v71;
        }
        v92 = 0;
        v93 = streamFrontendGlob->loadSync.startTimeMs > 0 || streamFrontendGlob->loadSync.isActiveInFrontend;
        if ( v344 != ST_COMBINED_MAP_USAGE_ALL )
        {
          p_tileMaterialDistancesSq = &tileMaterialDistancesSq;
          for ( i = 32i64; i; --i )
            *p_tileMaterialDistancesSq++ = 3.4028235e38;
          v103 = multiView;
          _EDX = R_ST_Stream_UpdateMaterialDistances(v28, multiView, &tileMaterialDistancesSq);
          if ( v93 )
          {
            layerCount = v28->layerCount;
            _EDX = (1 << layerCount) - 1;
            __asm
            {
              vxorps  xmm2, xmm2, xmm2
              vxorps  xmm1, xmm1, xmm1
              vmovss  xmm0, [rbp+210h+tileMaterialDistancesSq]
              vucomiss xmm0, xmm9
            }
            if ( 1 << layerCount != 1 )
              __asm { vmaxss  xmm1, xmm0, xmm2 }
            __asm
            {
              vmovss  xmm0, [rbp+210h+var_14C]
              vucomiss xmm0, xmm9
            }
            if ( 1 << layerCount != 1 )
              __asm { vmaxss  xmm1, xmm0, xmm1 }
            __asm
            {
              vmovss  xmm0, [rbp+210h+var_148]
              vucomiss xmm0, xmm9
            }
            if ( 1 << layerCount != 1 )
              __asm { vmaxss  xmm1, xmm0, xmm1 }
            __asm
            {
              vmovss  xmm0, [rbp+210h+var_144]
              vucomiss xmm0, xmm9
            }
            if ( 1 << layerCount != 1 )
              __asm { vmaxss  xmm1, xmm0, xmm1 }
            __asm
            {
              vmovss  xmm0, [rbp+210h+var_140]
              vucomiss xmm0, xmm9
            }
            if ( 1 << layerCount != 1 )
              __asm { vmaxss  xmm1, xmm0, xmm1 }
            __asm
            {
              vmovss  xmm0, [rbp+210h+var_13C]
              vucomiss xmm0, xmm9
            }
            if ( 1 << layerCount != 1 )
              __asm { vmaxss  xmm1, xmm0, xmm1 }
            __asm
            {
              vmovss  xmm0, [rbp+210h+var_138]
              vucomiss xmm0, xmm9
            }
            if ( 1 << layerCount != 1 )
              __asm { vmaxss  xmm1, xmm0, xmm1 }
            __asm
            {
              vmovss  xmm0, [rbp+210h+var_134]
              vucomiss xmm0, xmm9
            }
            if ( 1 << layerCount != 1 )
              __asm { vmaxss  xmm1, xmm0, xmm1 }
            __asm
            {
              vmovss  xmm0, [rbp+210h+var_130]
              vucomiss xmm0, xmm9
            }
            if ( 1 << layerCount != 1 )
              __asm { vmaxss  xmm1, xmm0, xmm1 }
            __asm
            {
              vmovss  xmm0, [rbp+210h+var_12C]
              vucomiss xmm0, xmm9
            }
            if ( 1 << layerCount != 1 )
              __asm { vmaxss  xmm1, xmm0, xmm1 }
            __asm
            {
              vmovss  xmm0, [rbp+210h+var_128]
              vucomiss xmm0, xmm9
            }
            if ( 1 << layerCount != 1 )
              __asm { vmaxss  xmm1, xmm0, xmm1 }
            __asm
            {
              vmovss  xmm0, [rbp+210h+var_124]
              vucomiss xmm0, xmm9
            }
            if ( 1 << layerCount != 1 )
              __asm { vmaxss  xmm1, xmm0, xmm1 }
            __asm
            {
              vmovss  xmm0, [rbp+210h+var_120]
              vucomiss xmm0, xmm9
            }
            if ( 1 << layerCount != 1 )
              __asm { vmaxss  xmm1, xmm0, xmm1 }
            __asm
            {
              vmovss  xmm0, [rbp+210h+var_11C]
              vucomiss xmm0, xmm9
            }
            if ( 1 << layerCount != 1 )
              __asm { vmaxss  xmm1, xmm0, xmm1 }
            __asm
            {
              vmovss  xmm0, [rbp+210h+var_118]
              vucomiss xmm0, xmm9
            }
            if ( 1 << layerCount != 1 )
              __asm { vmaxss  xmm1, xmm0, xmm1 }
            __asm
            {
              vmovss  xmm0, [rbp+210h+var_114]
              vucomiss xmm0, xmm9
            }
            if ( 1 << layerCount != 1 )
              __asm { vmaxss  xmm1, xmm0, xmm1 }
            __asm
            {
              vmovss  xmm0, [rbp+210h+var_110]
              vucomiss xmm0, xmm9
            }
            if ( 1 << layerCount != 1 )
              __asm { vmaxss  xmm1, xmm0, xmm1 }
            __asm
            {
              vmovss  xmm0, [rbp+210h+var_10C]
              vucomiss xmm0, xmm9
            }
            if ( 1 << layerCount != 1 )
              __asm { vmaxss  xmm1, xmm1, xmm0 }
            __asm
            {
              vmovss  xmm15, [rbp+210h+var_108]
              vucomiss xmm15, xmm9
            }
            if ( 1 << layerCount != 1 )
              __asm { vmaxss  xmm1, xmm1, xmm15 }
            __asm
            {
              vmovss  xmm14, [rbp+210h+var_104]
              vucomiss xmm14, xmm9
            }
            if ( 1 << layerCount != 1 )
              __asm { vmaxss  xmm1, xmm1, xmm14 }
            __asm
            {
              vmovss  xmm13, [rbp+210h+var_100]
              vucomiss xmm13, xmm9
            }
            if ( 1 << layerCount != 1 )
              __asm { vmaxss  xmm1, xmm1, xmm13 }
            __asm
            {
              vmovss  xmm12, [rbp+210h+var_FC]
              vucomiss xmm12, xmm9
            }
            if ( 1 << layerCount != 1 )
              __asm { vmaxss  xmm1, xmm1, xmm12 }
            __asm
            {
              vmovss  xmm11, [rbp+210h+var_F8]
              vucomiss xmm11, xmm9
            }
            if ( 1 << layerCount != 1 )
              __asm { vmaxss  xmm1, xmm1, xmm11 }
            __asm
            {
              vmovss  xmm10, [rbp+210h+var_F4]
              vucomiss xmm10, xmm9
            }
            if ( 1 << layerCount != 1 )
              __asm { vmaxss  xmm1, xmm1, xmm10 }
            __asm
            {
              vmovss  xmm9, [rbp+210h+var_F0]
              vmovss  xmm0, cs:__real@7f7fffff
              vucomiss xmm9, xmm0
            }
            if ( 1 << layerCount != 1 )
              __asm { vmaxss  xmm1, xmm1, xmm9 }
            __asm
            {
              vmovss  xmm8, [rbp+210h+var_EC]
              vucomiss xmm8, xmm0
            }
            if ( 1 << layerCount != 1 )
              __asm { vmaxss  xmm1, xmm1, xmm8 }
            __asm
            {
              vmovss  xmm7, [rbp+210h+var_E8]
              vucomiss xmm7, xmm0
            }
            if ( 1 << layerCount != 1 )
              __asm { vmaxss  xmm1, xmm1, xmm7 }
            __asm
            {
              vmovss  xmm6, [rbp+210h+var_E4]
              vucomiss xmm6, xmm0
            }
            if ( 1 << layerCount != 1 )
              __asm { vmaxss  xmm1, xmm1, xmm6 }
            __asm
            {
              vmovss  xmm5, [rbp+210h+var_E0]
              vucomiss xmm5, xmm0
            }
            if ( 1 << layerCount != 1 )
              __asm { vmaxss  xmm1, xmm1, xmm5 }
            __asm
            {
              vmovss  xmm4, [rbp+210h+var_DC]
              vucomiss xmm4, xmm0
            }
            if ( 1 << layerCount != 1 )
              __asm { vmaxss  xmm1, xmm1, xmm4 }
            __asm
            {
              vmovss  xmm3, [rbp+210h+var_D8]
              vucomiss xmm3, xmm0
            }
            if ( 1 << layerCount != 1 )
              __asm { vmaxss  xmm1, xmm1, xmm3 }
            __asm
            {
              vmovss  xmm2, [rbp+210h+var_D4]
              vucomiss xmm2, xmm0
            }
            if ( 1 << layerCount != 1 )
              __asm { vmaxss  xmm1, xmm1, xmm2 }
            __asm { vcomiss xmm1, cs:__real@00000000 }
            if ( __CFSHL__(1, layerCount) || 1 << layerCount == 1 )
            {
              __asm { vmovss  xmm9, cs:__real@7f7fffff }
            }
            else
            {
              __asm
              {
                vmovss  xmm15, [rbp+210h+tileMaterialDistancesSq]
                vcmpeqss xmm0, xmm15, xmm0
                vblendvps xmm0, xmm15, xmm1, xmm0
                vmovss  [rbp+210h+tileMaterialDistancesSq], xmm0
                vmovss  xmm15, [rbp+210h+var_14C]
                vcmpeqss xmm0, xmm15, cs:__real@7f7fffff
                vblendvps xmm0, xmm15, xmm1, xmm0
                vmovss  [rbp+210h+var_14C], xmm0
                vmovss  xmm15, [rbp+210h+var_148]
                vcmpeqss xmm0, xmm15, cs:__real@7f7fffff
                vblendvps xmm0, xmm15, xmm1, xmm0
                vmovss  [rbp+210h+var_148], xmm0
                vmovss  xmm15, [rbp+210h+var_144]
                vcmpeqss xmm0, xmm15, cs:__real@7f7fffff
                vblendvps xmm0, xmm15, xmm1, xmm0
                vmovss  [rbp+210h+var_144], xmm0
                vmovss  xmm15, [rbp+210h+var_140]
                vcmpeqss xmm0, xmm15, cs:__real@7f7fffff
                vblendvps xmm0, xmm15, xmm1, xmm0
                vmovss  [rbp+210h+var_140], xmm0
                vmovss  xmm15, [rbp+210h+var_13C]
                vcmpeqss xmm0, xmm15, cs:__real@7f7fffff
                vblendvps xmm0, xmm15, xmm1, xmm0
                vmovss  [rbp+210h+var_13C], xmm0
                vmovss  xmm15, [rbp+210h+var_138]
                vcmpeqss xmm0, xmm15, cs:__real@7f7fffff
                vblendvps xmm0, xmm15, xmm1, xmm0
                vmovss  [rbp+210h+var_138], xmm0
                vmovss  xmm15, [rbp+210h+var_134]
                vcmpeqss xmm0, xmm15, cs:__real@7f7fffff
                vblendvps xmm0, xmm15, xmm1, xmm0
                vmovss  [rbp+210h+var_134], xmm0
                vmovss  xmm15, [rbp+210h+var_130]
                vcmpeqss xmm0, xmm15, cs:__real@7f7fffff
                vblendvps xmm0, xmm15, xmm1, xmm0
                vmovss  [rbp+210h+var_130], xmm0
                vmovss  xmm15, [rbp+210h+var_12C]
                vcmpeqss xmm0, xmm15, cs:__real@7f7fffff
                vblendvps xmm0, xmm15, xmm1, xmm0
                vmovss  [rbp+210h+var_12C], xmm0
                vmovss  xmm15, [rbp+210h+var_128]
                vcmpeqss xmm0, xmm15, cs:__real@7f7fffff
                vblendvps xmm0, xmm15, xmm1, xmm0
                vmovss  [rbp+210h+var_128], xmm0
                vmovss  xmm15, [rbp+210h+var_124]
                vcmpeqss xmm0, xmm15, cs:__real@7f7fffff
                vblendvps xmm0, xmm15, xmm1, xmm0
                vmovss  [rbp+210h+var_124], xmm0
                vmovss  xmm15, [rbp+210h+var_120]
                vcmpeqss xmm0, xmm15, cs:__real@7f7fffff
                vblendvps xmm0, xmm15, xmm1, xmm0
                vmovss  [rbp+210h+var_120], xmm0
                vmovss  xmm15, [rbp+210h+var_11C]
                vcmpeqss xmm0, xmm15, cs:__real@7f7fffff
                vblendvps xmm0, xmm15, xmm1, xmm0
                vmovss  [rbp+210h+var_11C], xmm0
                vmovss  xmm15, [rbp+210h+var_118]
                vcmpeqss xmm0, xmm15, cs:__real@7f7fffff
                vblendvps xmm0, xmm15, xmm1, xmm0
                vmovss  [rbp+210h+var_118], xmm0
                vmovss  xmm15, [rbp+210h+var_114]
                vcmpeqss xmm0, xmm15, cs:__real@7f7fffff
                vblendvps xmm0, xmm15, xmm1, xmm0
                vmovss  [rbp+210h+var_114], xmm0
                vmovss  xmm15, [rbp+210h+var_110]
                vcmpeqss xmm0, xmm15, cs:__real@7f7fffff
                vblendvps xmm0, xmm15, xmm1, xmm0
                vmovss  [rbp+210h+var_110], xmm0
                vmovss  xmm0, [rbp+210h+var_10C]
                vcmpeqss xmm0, xmm0, cs:__real@7f7fffff
                vmovss  xmm15, [rbp+210h+var_10C]
                vblendvps xmm0, xmm15, xmm1, xmm0
                vmovss  [rbp+210h+var_10C], xmm0
                vmovss  xmm15, [rbp+210h+var_108]
                vcmpeqss xmm0, xmm15, cs:__real@7f7fffff
                vblendvps xmm0, xmm15, xmm1, xmm0
                vmovss  [rbp+210h+var_108], xmm0
                vmovss  xmm15, cs:__real@7f7fffff
                vcmpeqss xmm0, xmm14, xmm15
                vblendvps xmm0, xmm14, xmm1, xmm0
                vmovss  [rbp+210h+var_104], xmm0
                vcmpeqss xmm0, xmm13, xmm15
                vblendvps xmm0, xmm13, xmm1, xmm0
                vmovss  [rbp+210h+var_100], xmm0
                vcmpeqss xmm0, xmm12, xmm15
                vblendvps xmm0, xmm12, xmm1, xmm0
                vmovss  [rbp+210h+var_FC], xmm0
                vcmpeqss xmm0, xmm11, xmm15
                vblendvps xmm0, xmm11, xmm1, xmm0
                vmovss  [rbp+210h+var_F8], xmm0
                vcmpeqss xmm0, xmm10, xmm15
                vblendvps xmm0, xmm10, xmm1, xmm0
                vmovss  [rbp+210h+var_F4], xmm0
                vcmpeqss xmm0, xmm9, xmm15
                vblendvps xmm0, xmm9, xmm1, xmm0
                vmovss  [rbp+210h+var_F0], xmm0
                vmovaps xmm9, xmm15
                vcmpeqss xmm0, xmm8, xmm9
                vblendvps xmm0, xmm8, xmm1, xmm0
                vmovss  [rbp+210h+var_EC], xmm0
                vcmpeqss xmm0, xmm7, xmm9
                vblendvps xmm0, xmm7, xmm1, xmm0
                vmovss  [rbp+210h+var_E8], xmm0
                vcmpeqss xmm0, xmm6, xmm9
                vblendvps xmm0, xmm6, xmm1, xmm0
                vmovss  [rbp+210h+var_E4], xmm0
                vcmpeqss xmm0, xmm5, xmm9
                vblendvps xmm0, xmm5, xmm1, xmm0
                vmovss  [rbp+210h+var_E0], xmm0
                vcmpeqss xmm0, xmm4, xmm9
                vblendvps xmm0, xmm4, xmm1, xmm0
                vmovss  [rbp+210h+var_DC], xmm0
                vcmpeqss xmm0, xmm3, xmm9
                vblendvps xmm0, xmm3, xmm1, xmm0
                vmovss  [rbp+210h+var_D8], xmm0
                vcmpeqss xmm0, xmm2, xmm9
                vblendvps xmm0, xmm2, xmm1, xmm0
                vmovss  [rbp+210h+var_D4], xmm0
              }
            }
            __asm
            {
              vmovss  xmm14, [rbp+210h+var_288]
              vmovss  xmm13, [rbp+210h+var_28C]
              vmovss  xmm12, cs:__real@3f000000
              vmovss  xmm11, [rbp+210h+var_290]
              vmovss  xmm10, [rsp+310h+var_2BC]
            }
          }
          v92 = 1;
          v340 = 1;
          if ( !_EDX )
            goto LABEL_219;
          __asm { vmovss  xmm9, cs:__real@3f800000 }
          do
          {
            __asm { tzcnt   eax, edx }
            v343 = _RAX;
            v96 = _bittestandreset(&_EDX, _RAX);
            v342 = _EDX;
            _RAX = (unsigned int)_RAX;
            v359 = _RAX;
            __asm
            {
              vmovss  xmm3, [rbp+rax*4+210h+tileMaterialDistancesSq]
              vcomiss xmm3, xmm13
            }
            if ( v96 )
            {
              __asm { vminss  xmm10, xmm3, xmm10 }
              minBound = (float4 *)&v28->layerMaterials[(unsigned int)_RAX];
              iterator.minBound = minBound;
              _ER14 = 0;
              __asm { vmovd   xmm1, r14d }
              _EAX = minBound[3].v.m128_u8[12];
              __asm
              {
                vmovd   xmm0, eax
                vpcmpeqd xmm2, xmm0, xmm1
                vxorps  xmm0, xmm0, xmm0
                vblendvps xmm0, xmm0, xmm3, xmm2
                vmovss  dword ptr [rsp+310h+var_2B0], xmm0
                vaddss  xmm0, xmm0, xmm9
                vmulss  xmm7, xmm0, dword ptr [rsi+30h]
                vmovss  dword ptr [rsp+310h+var_2B0], xmm7
                vmovss  [rbp+210h+var_274], xmm7
              }
              if ( (v356 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_distance.h", 188, ASSERT_TYPE_SANITY, "( !IS_NAN( distance ) )", (const char *)&queryFormat, "!IS_NAN( distance )") )
                __debugbreak();
              v242 = (unsigned int)v345 >> 7;
              v243 = -1;
              v244 = 0i64;
              v245 = 4i64;
              v345 = 4i64;
              do
              {
                BindlessImageFromFlattenedIndex = R_ST_GetBindlessImageFromFlattenedIndex(*(_WORD *)(minBound->v.m128_u64[1] + v244));
                v247 = BindlessImageFromFlattenedIndex;
                if ( BindlessImageFromFlattenedIndex && (BindlessImageFromFlattenedIndex->flags & 0x40) != 0 )
                {
                  v248 = DB_GetGfxImageIndex(BindlessImageFromFlattenedIndex);
                  v249 = v248;
                  if ( v248 >= 0x14000 )
                  {
                    LODWORD(v339) = 81920;
                    LODWORD(v338) = v248;
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_internal.h", 421, ASSERT_TYPE_ASSERT, "(unsigned)( imageIndex ) < (unsigned)( IMAGE_POOL_SIZE )", "imageIndex doesn't index IMAGE_POOL_SIZE\n\t%i not in [0, %i)", v338, v339) )
                      __debugbreak();
                  }
                  v250 = DCONST_DVARBOOL_stream_pedanticAddImageChecks;
                  if ( !DCONST_DVARBOOL_stream_pedanticAddImageChecks && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_pedanticAddImageChecks") )
                    __debugbreak();
                  Dvar_CheckFrontendServerThread(v250);
                  if ( v250->current.enabled && (DB_GetGfxImageAtIndex(v249)->flags & 0x40) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_internal.h", 426, ASSERT_TYPE_ASSERT, "(R_IsStreamedImage( image ))", (const char *)&queryFormat, "R_IsStreamedImage( image )") )
                    __debugbreak();
                  v251 = streamFrontendGlob;
                  if ( (unsigned int)v249 >= 0x14000 )
                  {
                    LODWORD(v339) = 81920;
                    LODWORD(v338) = v249;
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_sortlist.h", 366, ASSERT_TYPE_ASSERT, "(unsigned)( assetIndex ) < (unsigned)( ( sizeof( *array_counter( mDistances ) ) + 0 ) )", "assetIndex doesn't index ARRAY_COUNT( mDistances )\n\t%i not in [0, %i)", v338, v339) )
                      __debugbreak();
                  }
                  if ( v242 < v251->imageDistance.mDistances[v249].mValue )
                    v251->imageDistance.mDistances[v249].mValue = v242;
                  Com_BitSetAssert(v251->imageDistance.mValueSet, v249, 10240);
                  height = v247->height;
                  if ( v247->width > height )
                    height = v247->width;
                  v253 = __lzcnt(height) ^ 0x1F;
                  v254 = v253 + 1;
                  if ( (~(1 << v253) & height) == 0 )
                    v254 = v253;
                  if ( v254 < 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 1765, ASSERT_TYPE_ASSERT, "(mipCount >= 5)", (const char *)&queryFormat, "mipCount >= 5") )
                    __debugbreak();
                  if ( v254 > v243 )
                    v254 = v243;
                  v243 = v254;
                  minBound = iterator.minBound;
                  v245 = v345;
                }
                v244 += 2i64;
                v345 = --v245;
              }
              while ( v245 );
              v255 = (__int64)v349;
              v92 = v340 && R_ST_AreAllMaterialLayerBaseMipsAvailable((const StTerrainMaterialLayer *)minBound);
              v340 = v92;
              if ( v243 == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 1776, ASSERT_TYPE_ASSERT, "(smallestMipCount != std::numeric_limits<uint>::max())", (const char *)&queryFormat, "smallestMipCount != std::numeric_limits<uint>::max()") )
                __debugbreak();
              v256 = (__int64)v348;
              if ( v343 >= v348->layerMaskMapIdxsCount )
              {
                LODWORD(v339) = v348->layerMaskMapIdxsCount;
                LODWORD(v338) = v343;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 1777, ASSERT_TYPE_ASSERT, "(unsigned)( matLayerIndex ) < (unsigned)( surface.layerMaskMapIdxsCount )", "matLayerIndex doesn't index surface.layerMaskMapIdxsCount\n\t%i not in [0, %i)", v338, v339) )
                  __debugbreak();
              }
              v257 = *(unsigned __int16 *)(*(_QWORD *)(v256 + 328) + 2 * v359);
              if ( v257 >= *(_DWORD *)(v255 + 40) )
              {
                LODWORD(v339) = *(_DWORD *)(v255 + 40);
                LODWORD(v338) = v257;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 1779, ASSERT_TYPE_ASSERT, "(unsigned)( layerMaskIndex ) < (unsigned)( terrain->flattenedImagesCount )", "layerMaskIndex doesn't index terrain->flattenedImagesCount\n\t%i not in [0, %i)", v338, v339) )
                  __debugbreak();
              }
              v258 = *(GfxImage **)(*(_QWORD *)(v255 + 48) + 8i64 * (unsigned __int16)v257);
              if ( !v258 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 1781, ASSERT_TYPE_ASSERT, "(layerMaskImage)", (const char *)&queryFormat, "layerMaskImage") )
                __debugbreak();
              if ( (v258->flags & 0x40) != 0 )
              {
                v259 = DB_GetGfxImageIndex(v258);
                __asm
                {
                  vxorps  xmm0, xmm0, xmm0
                  vcvtsi2ss xmm0, xmm0, edx
                  vmulss  xmm6, xmm0, xmm0
                }
                if ( v258 != rgp.whiteImage && v258 != rgp.blackImage && v258->semantic != TS_GRAY_MAP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 1790, ASSERT_TYPE_ASSERT, "(layerMaskImage == rgp.whiteImage || layerMaskImage == rgp.blackImage || layerMaskImage->semantic == TS_GRAY_MAP)", (const char *)&queryFormat, "layerMaskImage == rgp.whiteImage || layerMaskImage == rgp.blackImage || layerMaskImage->semantic == TS_GRAY_MAP") )
                  __debugbreak();
                _RDI = DCONST_DVARFLT_stream_distanceSemanticBiasGray;
                if ( !DCONST_DVARFLT_stream_distanceSemanticBiasGray && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_distanceSemanticBiasGray") )
                  __debugbreak();
                Dvar_CheckFrontendServerThread(_RDI);
                __asm
                {
                  vmovss  xmm0, dword ptr [rdi+28h]
                  vmulss  xmm1, xmm0, xmm0
                  vmulss  xmm2, xmm1, xmm6
                  vdivss  xmm3, xmm7, xmm2
                  vxorps  xmm2, xmm2, xmm2
                  vcvtsi2ss xmm2, xmm2, eax
                  vsubss  xmm0, xmm9, xmm14
                  vmulss  xmm1, xmm0, xmm3
                  vdivss  xmm2, xmm1, xmm2
                  vmovss  dword ptr [rsp+310h+var_2B0], xmm2
                  vmovss  dword ptr [rsp+310h+var_2B8], xmm2
                }
                if ( (v343 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_distance.h", 188, ASSERT_TYPE_SANITY, "( !IS_NAN( distance ) )", (const char *)&queryFormat, "!IS_NAN( distance )") )
                  __debugbreak();
                v273 = (unsigned int)v345 >> 7;
                if ( (unsigned int)v259 >= 0x14000 )
                {
                  LODWORD(v339) = 81920;
                  LODWORD(v338) = v259;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_internal.h", 421, ASSERT_TYPE_ASSERT, "(unsigned)( imageIndex ) < (unsigned)( IMAGE_POOL_SIZE )", "imageIndex doesn't index IMAGE_POOL_SIZE\n\t%i not in [0, %i)", v338, v339) )
                    __debugbreak();
                }
                v274 = DCONST_DVARBOOL_stream_pedanticAddImageChecks;
                if ( !DCONST_DVARBOOL_stream_pedanticAddImageChecks && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_pedanticAddImageChecks") )
                  __debugbreak();
                Dvar_CheckFrontendServerThread(v274);
                if ( v274->current.enabled && (DB_GetGfxImageAtIndex(v259)->flags & 0x40) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_internal.h", 426, ASSERT_TYPE_ASSERT, "(R_IsStreamedImage( image ))", (const char *)&queryFormat, "R_IsStreamedImage( image )") )
                  __debugbreak();
                v275 = streamFrontendGlob;
                if ( (unsigned int)v259 >= 0x14000 )
                {
                  LODWORD(v339) = 81920;
                  LODWORD(v338) = v259;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_sortlist.h", 366, ASSERT_TYPE_ASSERT, "(unsigned)( assetIndex ) < (unsigned)( ( sizeof( *array_counter( mDistances ) ) + 0 ) )", "assetIndex doesn't index ARRAY_COUNT( mDistances )\n\t%i not in [0, %i)", v338, v339) )
                    __debugbreak();
                }
                if ( v273 < v275->imageDistance.mDistances[v259].mValue )
                  v275->imageDistance.mDistances[v259].mValue = v273;
                Com_BitSetAssert(v275->imageDistance.mValueSet, v259, 10240);
                v276 = Stream_CheckImageLowMipUsable(v258);
                v92 = v92 && v276;
                v340 = v92;
                v277 = !v276;
                if ( !v276 )
                {
                  __asm { vmulss  xmm0, xmm11, xmm12 }
                  _RAX = v359;
                  __asm { vcomiss xmm0, [rbp+rax*4+210h+tileMaterialDistancesSq] }
                  if ( !v277 )
                    R_WarnOncePerFrame(R_WARN_ST_FRAME_WAITING_ON_LAYER_MASK, v258->name);
                }
              }
              _EDX = v342;
              v28 = v348;
            }
          }
          while ( _EDX );
          __asm
          {
            vmovss  [rsp+310h+var_2BC], xmm10
            vmovss  xmm9, cs:__real@7f7fffff
          }
        }
        v103 = multiView;
LABEL_219:
        if ( v344 || !v92 )
        {
          __asm { vmovss  dword ptr [rsp+310h+var_2B8+4], xmm9 }
          iterator.minBound = (float4 *)&v344;
          iterator.maxBound = (float4 *)&v367;
          iterator.realDistanceSq = (float *)&v366;
          Stream_ViewPos_Iterate__lambda_008c2e1acdafeb250ed2f4918c1e72f6_(v103, (const Stream_UpdateDynamic_SuperTerrain::__l125::<lambda_008c2e1acdafeb250ed2f4918c1e72f6> *)&iterator);
          __asm
          {
            vmovss  xmm0, dword ptr [rsp+310h+var_2B8+4]
            vaddss  xmm1, xmm0, cs:__real@3f800000
            vmulss  xmm2, xmm1, dword ptr [r13+170h]
            vmulss  xmm6, xmm2, dword ptr [rax+28h]
          }
          v284 = DB_GetGfxImageIndex(v28->combinedAlbedoMap);
          __asm
          {
            vmovss  dword ptr [rsp+310h+var_2B0], xmm6
            vmovss  dword ptr [rsp+310h+var_2B8], xmm6
          }
          if ( (v343 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_distance.h", 188, ASSERT_TYPE_SANITY, "( !IS_NAN( distance ) )", (const char *)&queryFormat, "!IS_NAN( distance )") )
            __debugbreak();
          v285 = (unsigned int)v345 >> 7;
          if ( (unsigned int)v284 >= 0x14000 )
          {
            LODWORD(v339) = 81920;
            LODWORD(v338) = v284;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_internal.h", 421, ASSERT_TYPE_ASSERT, "(unsigned)( imageIndex ) < (unsigned)( IMAGE_POOL_SIZE )", "imageIndex doesn't index IMAGE_POOL_SIZE\n\t%i not in [0, %i)", v338, v339) )
              __debugbreak();
          }
          v286 = DCONST_DVARBOOL_stream_pedanticAddImageChecks;
          if ( !DCONST_DVARBOOL_stream_pedanticAddImageChecks && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_pedanticAddImageChecks") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v286);
          if ( v286->current.enabled && (DB_GetGfxImageAtIndex(v284)->flags & 0x40) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_internal.h", 426, ASSERT_TYPE_ASSERT, "(R_IsStreamedImage( image ))", (const char *)&queryFormat, "R_IsStreamedImage( image )") )
            __debugbreak();
          v287 = streamFrontendGlob;
          if ( (unsigned int)v284 >= 0x14000 )
          {
            LODWORD(v339) = 81920;
            LODWORD(v338) = v284;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_sortlist.h", 366, ASSERT_TYPE_ASSERT, "(unsigned)( assetIndex ) < (unsigned)( ( sizeof( *array_counter( mDistances ) ) + 0 ) )", "assetIndex doesn't index ARRAY_COUNT( mDistances )\n\t%i not in [0, %i)", v338, v339) )
              __debugbreak();
          }
          if ( v285 < v287->imageDistance.mDistances[v284].mValue )
            v287->imageDistance.mDistances[v284].mValue = v285;
          Com_BitSetAssert(v287->imageDistance.mValueSet, v284, 10240);
          v288 = DB_GetGfxImageIndex(v28->combinedNogMap);
          __asm
          {
            vmovss  dword ptr [rsp+310h+var_2B0], xmm6
            vmovss  dword ptr [rsp+310h+var_2B8], xmm6
          }
          if ( (v343 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_distance.h", 188, ASSERT_TYPE_SANITY, "( !IS_NAN( distance ) )", (const char *)&queryFormat, "!IS_NAN( distance )") )
            __debugbreak();
          v289 = (unsigned int)v345 >> 7;
          if ( (unsigned int)v288 >= 0x14000 )
          {
            LODWORD(v339) = 81920;
            LODWORD(v338) = v288;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_internal.h", 421, ASSERT_TYPE_ASSERT, "(unsigned)( imageIndex ) < (unsigned)( IMAGE_POOL_SIZE )", "imageIndex doesn't index IMAGE_POOL_SIZE\n\t%i not in [0, %i)", v338, v339) )
              __debugbreak();
          }
          v290 = DCONST_DVARBOOL_stream_pedanticAddImageChecks;
          if ( !DCONST_DVARBOOL_stream_pedanticAddImageChecks && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_pedanticAddImageChecks") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v290);
          if ( v290->current.enabled && (DB_GetGfxImageAtIndex(v288)->flags & 0x40) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_internal.h", 426, ASSERT_TYPE_ASSERT, "(R_IsStreamedImage( image ))", (const char *)&queryFormat, "R_IsStreamedImage( image )") )
            __debugbreak();
          v291 = streamFrontendGlob;
          if ( (unsigned int)v288 >= 0x14000 )
          {
            LODWORD(v339) = 81920;
            LODWORD(v338) = v288;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_sortlist.h", 366, ASSERT_TYPE_ASSERT, "(unsigned)( assetIndex ) < (unsigned)( ( sizeof( *array_counter( mDistances ) ) + 0 ) )", "assetIndex doesn't index ARRAY_COUNT( mDistances )\n\t%i not in [0, %i)", v338, v339) )
              __debugbreak();
          }
          if ( v289 < v291->imageDistance.mDistances[v288].mValue )
            v291->imageDistance.mDistances[v288].mValue = v289;
          Com_BitSetAssert(v291->imageDistance.mValueSet, v288, 10240);
        }
        if ( R_ST_QueryAndClearSurfaceBaseResourceStreamRequest(v28, ST_SURFACE_STREAM_REQUEST_LIGHTMAP) )
        {
          lightmapIndex = v28->lightmapIndex;
          v293 = v349;
          if ( (lightmapIndex == 510 || lightmapIndex >= v349->lightmapCount) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 1860, ASSERT_TYPE_ASSERT, "(surface.lightmapIndex != LIGHTMAP_NONE && surface.lightmapIndex < terrain->lightmapCount)", (const char *)&queryFormat, "surface.lightmapIndex != LIGHTMAP_NONE && surface.lightmapIndex < terrain->lightmapCount") )
            __debugbreak();
          images = (const GfxImage **)v293->lightmaps[v28->lightmapIndex].images;
          v295 = 3i64;
          do
          {
            v296 = DB_GetGfxImageIndex(*images);
            v297 = v296;
            if ( v296 >= 0x14000 )
            {
              LODWORD(v339) = 81920;
              LODWORD(v338) = v296;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_internal.h", 421, ASSERT_TYPE_ASSERT, "(unsigned)( imageIndex ) < (unsigned)( IMAGE_POOL_SIZE )", "imageIndex doesn't index IMAGE_POOL_SIZE\n\t%i not in [0, %i)", v338, v339) )
                __debugbreak();
            }
            v298 = DCONST_DVARBOOL_stream_pedanticAddImageChecks;
            if ( !DCONST_DVARBOOL_stream_pedanticAddImageChecks && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_pedanticAddImageChecks") )
              __debugbreak();
            Dvar_CheckFrontendServerThread(v298);
            if ( v298->current.enabled && (DB_GetGfxImageAtIndex(v297)->flags & 0x40) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_internal.h", 426, ASSERT_TYPE_ASSERT, "(R_IsStreamedImage( image ))", (const char *)&queryFormat, "R_IsStreamedImage( image )") )
              __debugbreak();
            v299 = streamFrontendGlob;
            if ( (unsigned int)v297 >= 0x14000 )
            {
              LODWORD(v339) = 81920;
              LODWORD(v338) = v297;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_sortlist.h", 366, ASSERT_TYPE_ASSERT, "(unsigned)( assetIndex ) < (unsigned)( ( sizeof( *array_counter( mDistances ) ) + 0 ) )", "assetIndex doesn't index ARRAY_COUNT( mDistances )\n\t%i not in [0, %i)", v338, v339) )
                __debugbreak();
            }
            if ( v299->imageDistance.mDistances[v297].mValue > 0x10006 )
              v299->imageDistance.mDistances[v297].mValue = 65542;
            Com_BitSetAssert(v299->imageDistance.mValueSet, v297, 10240);
            ++images;
            --v295;
          }
          while ( v295 );
          v28 = v348;
        }
        v300 = 0;
        v13 = v357;
        if ( v357->multiView.viewCount > 0 )
        {
          _RSI = &v357->multiView;
          _R14 = v357->multiView.viewZoomFactors;
          do
          {
            __asm
            {
              vmovups xmm1, xmmword ptr [rsi]
              vmovups xmmword ptr [rbp+210h+iterator.minBound], xmm1
              vshufps xmm2, xmm1, xmm1, 55h ; 'U'
              vmovups xmmword ptr [rbp+210h+iterator.minBound], xmm1
              vshufps xmm0, xmm1, xmm1, 0AAh ; 'ª'
            }
            HIDWORD(v372) = 0;
            __asm
            {
              vmovups xmm6, xmmword ptr [rbp+80h]
              vmovss  xmm6, xmm6, xmm1
              vinsertps xmm6, xmm6, xmm2, 10h
              vinsertps xmm6, xmm6, xmm0, 20h ; ' '
              vmovups xmmword ptr [rbp+80h], xmm6
              vmovdqa xmm7, [rbp+210h+var_1F0]
              vmovdqa xmm8, [rbp+210h+var_1E0]
            }
            v313 = DVARFLT_stream_superTerrainHeightScaling;
            if ( !DVARFLT_stream_superTerrainHeightScaling && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_superTerrainHeightScaling") )
              __debugbreak();
            Dvar_CheckFrontendServerThread(v313);
            __asm
            {
              vminps  xmm0, xmm7, xmm6
              vmaxps  xmm3, xmm0, xmm8
              vsubps  xmm1, xmm6, xmm3
              vmovups xmm0, cs:__xmm@3f800000000000003f8000003f800000
              vinsertps xmm0, xmm0, dword ptr [rdi+28h], 20h ; ' '
              vmulps  xmm0, xmm1, xmm0
              vaddps  xmm2, xmm3, xmm0
              vshufps xmm1, xmm2, xmm2, 55h ; 'U'
              vextractps [rbp+210h+var_200], xmm2, 2
              vunpcklps xmm0, xmm2, xmm1
              vmovsd  qword ptr [rbp+210h+dpvsCamPos], xmm0
            }
            dpvsCamPos.v[2] = v364;
            __asm { vmovss  xmm2, dword ptr [r14]; zoomFactor }
            R_ST_GeomStreamTerrainSurface(v28, &dpvsCamPos, *(float *)&_XMM2);
            ++v300;
            ++_R14;
            _RSI = (StreamUpdateMultiView *)((char *)_RSI + 16);
          }
          while ( v300 < v13->multiView.viewCount );
        }
        v26 = v347;
        _R14 = &v13->multiView;
        terrain = v349;
LABEL_288:
        v347 = ++v26;
        v25 = ++v360;
        if ( v26 >= v353 )
        {
          surfaceCount = v353;
          break;
        }
      }
    }
    if ( v13->localClientNum >= (unsigned int)LOCAL_CLIENT_COUNT )
    {
      LODWORD(v339) = 2;
      LODWORD(v338) = v13->localClientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 1880, ASSERT_TYPE_ASSERT, "(unsigned)( cmd->localClientNum ) < (unsigned)( ( sizeof( *array_counter( streamFrontendGlob->minDistanceToClutter ) ) + 0 ) )", "cmd->localClientNum doesn't index streamFrontendGlob->minDistanceToClutter\n\t%i not in [0, %i)", v338, v339) )
        __debugbreak();
    }
    __asm { vsqrtss xmm0, xmm10, xmm10 }
    _RCX = v13->localClientNum;
    _RAX = streamFrontendGlob;
    __asm { vmovss  dword ptr [rax+rcx*4+0B97260h], xmm0 }
    if ( surfaceCount != terrain->surfaceCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 1883, ASSERT_TYPE_ASSERT, "( surfaceCount ) == ( terrain->surfaceCount )", "%s == %s\n\t%u, %u", "surfaceCount", "terrain->surfaceCount", surfaceCount, terrain->surfaceCount) )
      __debugbreak();
  }
  Sys_ProfEndNamedEvent();
  _R11 = &v408;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
    vmovaps xmm14, xmmword ptr [r11-90h]
    vmovaps xmm15, xmmword ptr [r11-0A0h]
  }
}

/*
==============
Stream_UpdateDynamic_ClutterLayers
==============
*/
void Stream_UpdateDynamic_ClutterLayers(const StreamDynamicUpdateCmd *cmd)
{
  const StTerrain *terrain; 
  bool enabled; 
  __int64 v22; 
  GfxWorld *world; 
  GfxClutterCollection *clutterCollections; 
  __int64 v25; 
  __int64 v28; 
  const XModel *model; 
  __int64 viewCount; 
  char v35; 
  bool v66; 
  char v69; 
  bool v70; 
  const StreamKey *v71; 
  bool IsSafeToUse; 
  const StreamKey *v73; 
  __int64 v86; 
  __int64 v87; 
  int amount; 
  __int128 v92; 
  __int128 v93; 
  __int128 v94; 
  char v95; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps xmmword ptr [rax-88h], xmm11
    vmovaps xmmword ptr [rax-98h], xmm12
    vmovaps xmmword ptr [rax-0A8h], xmm13
    vmovaps xmmword ptr [rax-0B8h], xmm14
    vmovaps xmmword ptr [rax-0C8h], xmm15
  }
  Sys_ProfBeginNamedEvent(0xFF808080, "Stream_UpdateDynamic_ClutterLayers");
  terrain = s_stGlob.terrain;
  if ( s_stGlob.terrain )
  {
    enabled = r_st_clutterBitmaskStreamingEnabled->current.enabled;
    amount = enabled ? r_st_clutterStreamBoost->current.integer : 0x200000;
    _RAX = r_st_clutterStreamDistance;
    __asm
    {
      vmovss  xmm7, dword ptr [rax+28h]
      vmovss  [rsp+178h+var_134], xmm7
      vmovss  xmm1, cs:?rg@@3Ur_globals_t@@A.correctedLodParms.clutterRamp.scaleWithoutFovScale; r_globals_t rg
      vxorps  xmm0, xmm0, xmm0
      vcomiss xmm1, xmm0
    }
    if ( enabled )
    {
      __asm
      {
        vmovss  xmm0, cs:__real@3f800000
        vdivss  xmm15, xmm0, xmm1
      }
    }
    else
    {
      __asm { vmovss  xmm15, cs:__real@3f800000 }
    }
    __asm
    {
      vmovss  xmm6, cs:?rg@@3Ur_globals_t@@A.correctedLodParms.clutterRamp.biasWithoutFovScale; r_globals_t rg
      vmovss  [rsp+178h+var_130], xmm6
    }
    v22 = 0i64;
    world = rgp.world;
    while ( (unsigned int)v22 < rgp.world->smodels.clutterCollectionCount )
    {
      clutterCollections = world->smodels.clutterCollections;
      if ( clutterCollections[v22].smodelCollectionIndex >= world->smodels.collectionCount )
      {
        LODWORD(v87) = world->smodels.collectionCount;
        LODWORD(v86) = clutterCollections[v22].smodelCollectionIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 1913, ASSERT_TYPE_ASSERT, "(unsigned)( clutterCollection.smodelCollectionIndex ) < (unsigned)( rgp.world->smodels.collectionCount )", "clutterCollection.smodelCollectionIndex doesn't index rgp.world->smodels.collectionCount\n\t%i not in [0, %i)", v86, v87) )
          __debugbreak();
        world = rgp.world;
      }
      v25 = (__int64)&world->smodels.collections[clutterCollections[v22].smodelCollectionIndex];
      _RSI = 3i64 * clutterCollections[v22].smodelCollectionIndex;
      _RBP = world->smodels.collectionBounds;
      if ( clutterCollections[v22].terrainSurfaceIndex >= terrain->surfaceCount )
      {
        LODWORD(v87) = terrain->surfaceCount;
        LODWORD(v86) = clutterCollections[v22].terrainSurfaceIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 1917, ASSERT_TYPE_ASSERT, "(unsigned)( clutterCollection.terrainSurfaceIndex ) < (unsigned)( terrain->surfaceCount )", "clutterCollection.terrainSurfaceIndex doesn't index terrain->surfaceCount\n\t%i not in [0, %i)", v86, v87) )
          __debugbreak();
        world = rgp.world;
      }
      v28 = (__int64)&terrain->surfaces[clutterCollections[v22].terrainSurfaceIndex];
      if ( *(unsigned __int16 *)(v25 + 8) >= world->smodels.modelCount )
      {
        LODWORD(v87) = world->smodels.modelCount;
        LODWORD(v86) = *(unsigned __int16 *)(v25 + 8);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 1921, ASSERT_TYPE_ASSERT, "(unsigned)( smodelCollection.smodelIndex ) < (unsigned)( rgp.world->smodels.modelCount )", "smodelCollection.smodelIndex doesn't index rgp.world->smodels.modelCount\n\t%i not in [0, %i)", v86, v87) )
          __debugbreak();
        world = rgp.world;
      }
      model = world->smodels.models[*(unsigned __int16 *)(v25 + 8)].model;
      if ( !model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 1924, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
        __debugbreak();
      *(double *)&_XMM0 = XModelGetLodOutDist(model);
      __asm
      {
        vsubss  xmm1, xmm0, xmm6
        vmulss  xmm5, xmm1, xmm15
        vaddss  xmm6, xmm5, xmm7
        vmovss  xmm4, cs:__real@7f7fffff
      }
      viewCount = cmd->multiView.viewCount;
      v35 = viewCount == 0;
      if ( viewCount > 0 )
      {
        __asm
        {
          vmovss  xmm7, dword ptr [rbp+rsi*8+0]
          vmovss  xmm8, dword ptr [rbp+rsi*8+4]
          vmovss  xmm9, dword ptr [rbp+rsi*8+8]
          vmovss  xmm10, dword ptr [rbp+rsi*8+0Ch]
          vmovss  xmm11, dword ptr [rbp+rsi*8+10h]
          vmovss  xmm12, dword ptr [rbp+rsi*8+14h]
          vxorps  xmm13, xmm13, xmm13
        }
        _RCX = &cmd->multiView;
        __asm { vmovups xmm14, xmmword ptr cs:?g_negativeZero@@3Ufloat4@@B.v; float4 const g_negativeZero }
        do
        {
          __asm
          {
            vmovups xmm1, xmmword ptr [rcx]
            vshufps xmm2, xmm1, xmm1, 55h ; 'U'
            vshufps xmm0, xmm1, xmm1, 0AAh ; 'ª'
          }
          HIDWORD(v92) = 0;
          __asm
          {
            vmovups xmm3, xmmword ptr [rsp+70h]
            vmovss  xmm3, xmm3, xmm1
            vinsertps xmm3, xmm3, xmm2, 10h
            vinsertps xmm3, xmm3, xmm0, 20h ; ' '
            vmovups xmmword ptr [rsp+70h], xmm3
          }
          HIDWORD(v93) = 0;
          __asm
          {
            vmovups xmm0, xmmword ptr [rsp+80h]
            vmovss  xmm0, xmm0, xmm7
            vinsertps xmm0, xmm0, xmm8, 10h
            vinsertps xmm0, xmm0, xmm9, 20h ; ' '
            vmovups xmmword ptr [rsp+80h], xmm0
          }
          HIDWORD(v94) = 0;
          __asm
          {
            vmovups xmm2, xmmword ptr [rsp+90h]
            vmovss  xmm2, xmm2, xmm10
            vinsertps xmm2, xmm2, xmm11, 10h
            vinsertps xmm2, xmm2, xmm12, 20h ; ' '
            vmovups xmmword ptr [rsp+90h], xmm2
            vsubps  xmm0, xmm3, xmm0
            vandnps xmm1, xmm14, xmm0
            vsubps  xmm2, xmm1, xmm2
            vmaxps  xmm0, xmm2, xmm13
            vmulps  xmm1, xmm0, xmm0
            vhaddps xmm2, xmm1, xmm1
            vhaddps xmm0, xmm2, xmm2
            vminss  xmm4, xmm0, xmm4
          }
          _RCX = (StreamUpdateMultiView *)((char *)_RCX + 16);
          v66 = viewCount-- == 0;
          v35 = v66 || viewCount == 0;
        }
        while ( viewCount );
        __asm { vmovss  xmm7, [rsp+178h+var_134] }
      }
      __asm
      {
        vmulss  xmm0, xmm6, xmm6
        vcomiss xmm4, xmm0
      }
      if ( v35 || (v35 = !enabled) != 0 )
      {
        v69 = 1;
      }
      else
      {
        v69 = 0;
        v35 = 1;
      }
      __asm
      {
        vmulss  xmm0, xmm5, xmm5
        vcomiss xmm4, xmm0
      }
      v70 = v35 || !enabled;
      v71 = *(const StreamKey **)(v28 + 216);
      if ( v71 && v69 )
      {
        IsSafeToUse = Stream_GenericIsSafeToUse(v71);
        v73 = *(const StreamKey **)(v28 + 216);
        if ( IsSafeToUse )
        {
          Stream_UsedGeneric(v73);
        }
        else
        {
          Stream_RequestGeneric(v73);
          if ( v70 )
            Stream_BoostGeneric(*(const StreamKey **)(v28 + 216), amount);
        }
      }
      v22 = (unsigned int)(v22 + 1);
      world = rgp.world;
      __asm { vmovss  xmm6, [rsp+178h+var_130] }
    }
  }
  Sys_ProfEndNamedEvent();
  _R11 = &v95;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
    vmovaps xmm14, xmmword ptr [r11-90h]
    vmovaps xmm15, xmmword ptr [r11-0A0h]
  }
}

/*
==============
Stream_UpdateDynamic_ScriptablesForClient
==============
*/
void Stream_UpdateDynamic_ScriptablesForClient(const StreamDynamicUpdateCmd *cmd)
{
  LocalClientNum_t localClientNum; 
  StreamUpdateMultiView *p_multiView; 
  const dvar_t *v9; 
  unsigned int totalInstanceCount; 
  unsigned int v15; 
  ScriptableInstanceContextSecure *InstanceCommonContext; 
  const ScriptableDef *def; 
  char v25; 
  char v26; 
  __int64 i; 
  const XModel *v30; 
  int v38; 
  Stream_UpdateDynamic_ScriptablesForClient::__l7::<lambda_39682bb01d9ba848b5c64abf36f8d3e5> iterator; 
  __int64 v40; 
  vec3_t outOrigin; 
  __int128 v42; 
  __int128 v43; 
  char v44; 
  void *retaddr; 

  _RAX = &retaddr;
  v40 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
  }
  Sys_ProfBeginNamedEvent(0xFF808080, "Stream_UpdateDynamic_ScriptablesForClient");
  localClientNum = cmd->localClientNum;
  p_multiView = &cmd->multiView;
  if ( streamFrontendGlob->gameMode[0] == 1 )
  {
    v9 = DCONST_DVARBOOL_stream_hintScriptables;
    if ( !DCONST_DVARBOOL_stream_hintScriptables && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_hintScriptables") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    if ( v9->current.enabled )
    {
      _RBX = DCONST_DVARFLT_stream_scriptableMaxDistanceSq;
      if ( !DCONST_DVARFLT_stream_scriptableMaxDistanceSq && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_scriptableMaxDistanceSq") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm { vmovss  xmm9, dword ptr [rbx+28h] }
      _RBX = DCONST_DVARFLT_stream_scriptableDistanceOffset;
      if ( !DCONST_DVARFLT_stream_scriptableDistanceOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_scriptableDistanceOffset") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm { vmovss  xmm7, dword ptr [rbx+28h] }
      ScriptableCommon_AssertCountsInitialized();
      totalInstanceCount = g_scriptableWorldCounts.totalInstanceCount;
      v15 = 0;
      if ( g_scriptableWorldCounts.totalInstanceCount )
      {
        __asm { vmovss  xmm8, cs:__real@7f7fffff }
        do
        {
          if ( ScriptableCl_GetInstanceInUse(localClientNum, v15) && ScriptableCl_IsLinked(localClientNum, v15) )
          {
            InstanceCommonContext = ScriptableCl_GetInstanceCommonContext(localClientNum, v15);
            def = InstanceCommonContext->def;
            if ( !InstanceCommonContext->def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 1988, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
              __debugbreak();
            ScriptableInstanceContextSecure::GetOrigin(InstanceCommonContext, v15, &outOrigin);
            __asm { vmovss  xmm0, dword ptr [rsp+118h+outOrigin] }
            HIDWORD(v42) = 0;
            __asm
            {
              vmovups xmm3, xmmword ptr [rsp+80h]
              vmovss  xmm3, xmm3, xmm0
              vinsertps xmm3, xmm3, dword ptr [rsp+118h+outOrigin+4], 10h
              vinsertps xmm3, xmm3, dword ptr [rsp+118h+outOrigin+8], 20h
              vmovups xmmword ptr [rsp+80h], xmm3
              vmovups [rsp+118h+var_88], xmm3
              vmovss  [rsp+118h+var_C8], xmm8
            }
            iterator.scriptableOriginFloat4 = (float4 *)&v43;
            iterator.baseDistSq = (float *)&v38;
            Stream_ViewPos_Iterate__lambda_39682bb01d9ba848b5c64abf36f8d3e5_(p_multiView, &iterator);
            __asm
            {
              vmovss  xmm0, [rsp+118h+var_C8]
              vcomiss xmm0, xmm9
            }
            if ( v25 | v26 )
            {
              __asm
              {
                vsqrtss xmm0, xmm0, xmm0
                vaddss  xmm6, xmm0, xmm7
              }
              for ( i = 0i64; (unsigned int)i < def->numXModels; i = (unsigned int)(i + 1) )
              {
                v30 = def->models[i];
                if ( v30 )
                {
                  __asm
                  {
                    vsubss  xmm0, xmm6, dword ptr [rcx+28h]
                    vmulss  xmm1, xmm0, xmm0; distSq
                  }
                  Stream_AddDynamicModelDistance(v30, *(const float *)&_XMM1);
                }
                else
                {
                  Com_PrintWarning(29, "Scriptable Def %s has an invalid model - this normally implies a bad convert or link - check errors there\n", def->name);
                }
              }
            }
          }
          ++v15;
        }
        while ( v15 < totalInstanceCount );
      }
      ScriptableCommon_AssertCountsInitialized();
      if ( totalInstanceCount != g_scriptableWorldCounts.totalInstanceCount )
      {
        ScriptableCommon_AssertCountsInitialized();
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 2025, ASSERT_TYPE_ASSERT, "( scriptableCount ) == ( ScriptableCommon_GetTotalInstanceCount() )", "%s == %s\n\t%u, %u", "scriptableCount", "ScriptableCommon_GetTotalInstanceCount()", totalInstanceCount, g_scriptableWorldCounts.totalInstanceCount) )
          __debugbreak();
      }
    }
  }
  Sys_ProfEndNamedEvent();
  _R11 = &v44;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
  }
}

/*
==============
Stream_UpdateDynamic_Glass
==============
*/
void Stream_UpdateDynamic_Glass(const StreamDynamicUpdateCmd *__formal)
{
  bool v6; 
  bool v7; 
  bool v11; 
  __int64 v12; 
  __int64 v14; 
  FxGlassDef *defs; 
  __int64 MaterialIndex; 
  unsigned int v22; 
  StreamFrontendGlob *v23; 
  __int64 v24; 
  unsigned int v28; 
  StreamFrontendGlob *v29; 
  __int64 v34; 
  __int64 v35; 
  char v37; 
  void *retaddr; 
  int v39; 
  int v40; 
  unsigned int v41; 
  unsigned int v42; 
  unsigned int defCount; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
  }
  Sys_ProfBeginNamedEvent(0xFF808080, "Stream_UpdateDynamic_Glass");
  v6 = glass_shattered_scale == NULL;
  if ( !glass_shattered_scale )
  {
    v7 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 2033, ASSERT_TYPE_ASSERT, "(glass_shattered_scale)", (const char *)&queryFormat, "glass_shattered_scale");
    v6 = !v7;
    if ( v7 )
      __debugbreak();
  }
  _RAX = glass_shattered_scale;
  __asm
  {
    vmovss  xmm7, dword ptr [rax+28h]
    vxorps  xmm0, xmm0, xmm0
    vucomiss xmm7, xmm0
  }
  if ( v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 2035, ASSERT_TYPE_ASSERT, "(glassShatteredScale)", (const char *)&queryFormat, "glassShatteredScale") )
    __debugbreak();
  defCount = fxWorld.glassGlob.defCount;
  if ( fxWorld.glassGlob.defCount )
  {
    v11 = 1;
    v12 = 0i64;
    _R15 = 0i64;
    v14 = fxWorld.glassGlob.defCount;
    __asm { vmovss  xmm8, cs:__real@49742400 }
    do
    {
      _RAX = fxWorld.glassGlob.distances;
      __asm
      {
        vmovss  xmm0, dword ptr [r15+rax]
        vucomiss xmm0, xmm8
      }
      if ( !v11 )
      {
        __asm { vmulss  xmm6, xmm0, xmm0 }
        defs = fxWorld.glassGlob.defs;
        if ( !fxWorld.glassGlob.defs[v12].material && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 2047, ASSERT_TYPE_ASSERT, "(glassDef->material)", (const char *)&queryFormat, "glassDef->material") )
          __debugbreak();
        MaterialIndex = DB_GetMaterialIndex(defs[v12].material);
        __asm
        {
          vmulss  xmm0, xmm6, dword ptr [r14+rbp+68h]
          vmovss  [rsp+0C8h+arg_10], xmm0
          vmovss  [rsp+0C8h+arg_8], xmm0
        }
        if ( (v39 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_distance.h", 188, ASSERT_TYPE_SANITY, "( !IS_NAN( distance ) )", (const char *)&queryFormat, "!IS_NAN( distance )") )
          __debugbreak();
        v22 = v41 >> 7;
        if ( (unsigned int)MaterialIndex >= 0xB400 )
        {
          LODWORD(v35) = 46080;
          LODWORD(v34) = MaterialIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_internal.h", 435, ASSERT_TYPE_ASSERT, "(unsigned)( materialIndex ) < (unsigned)( ((( 43 * 1024 ) + 1024 + MATERIAL_POOL_SIZE_PRELOAD_PROCESS) + 1024) )", "materialIndex doesn't index MATERIAL_POOL_SIZE\n\t%i not in [0, %i)", v34, v35) )
            __debugbreak();
        }
        v23 = streamFrontendGlob;
        if ( (unsigned int)MaterialIndex >= 0xB400 )
        {
          LODWORD(v35) = 46080;
          LODWORD(v34) = MaterialIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_sortlist.h", 366, ASSERT_TYPE_ASSERT, "(unsigned)( assetIndex ) < (unsigned)( ( sizeof( *array_counter( mDistances ) ) + 0 ) )", "assetIndex doesn't index ARRAY_COUNT( mDistances )\n\t%i not in [0, %i)", v34, v35) )
            __debugbreak();
        }
        if ( v22 < v23->materialDistance.mDistances[MaterialIndex].mValue )
          v23->materialDistance.mDistances[MaterialIndex].mValue = v22;
        Com_BitSetAssert(v23->materialDistance.mValueSet, MaterialIndex, 5760);
        if ( !defs[v12].materialShattered && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 2052, ASSERT_TYPE_ASSERT, "(glassDef->materialShattered)", (const char *)&queryFormat, "glassDef->materialShattered") )
          __debugbreak();
        v24 = DB_GetMaterialIndex(defs[v12].materialShattered);
        __asm
        {
          vmulss  xmm1, xmm6, dword ptr [r14+rbp+6Ch]
          vmulss  xmm0, xmm7, xmm7
          vdivss  xmm2, xmm1, xmm0
          vmovss  [rsp+0C8h+arg_10], xmm2
          vmovss  [rsp+0C8h+arg_8], xmm2
        }
        if ( (v40 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_distance.h", 188, ASSERT_TYPE_SANITY, "( !IS_NAN( distance ) )", (const char *)&queryFormat, "!IS_NAN( distance )") )
          __debugbreak();
        v28 = v42 >> 7;
        if ( (unsigned int)v24 >= 0xB400 )
        {
          LODWORD(v35) = 46080;
          LODWORD(v34) = v24;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_internal.h", 435, ASSERT_TYPE_ASSERT, "(unsigned)( materialIndex ) < (unsigned)( ((( 43 * 1024 ) + 1024 + MATERIAL_POOL_SIZE_PRELOAD_PROCESS) + 1024) )", "materialIndex doesn't index MATERIAL_POOL_SIZE\n\t%i not in [0, %i)", v34, v35) )
            __debugbreak();
        }
        v29 = streamFrontendGlob;
        if ( (unsigned int)v24 >= 0xB400 )
        {
          LODWORD(v35) = 46080;
          LODWORD(v34) = v24;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_sortlist.h", 366, ASSERT_TYPE_ASSERT, "(unsigned)( assetIndex ) < (unsigned)( ( sizeof( *array_counter( mDistances ) ) + 0 ) )", "assetIndex doesn't index ARRAY_COUNT( mDistances )\n\t%i not in [0, %i)", v34, v35) )
            __debugbreak();
        }
        if ( v28 < v29->materialDistance.mDistances[v24].mValue )
          v29->materialDistance.mDistances[v24].mValue = v28;
        Com_BitSetAssert(v29->materialDistance.mValueSet, v24, 5760);
      }
      _R15 += 4i64;
      ++v12;
      v11 = --v14 == 0;
    }
    while ( v14 );
    if ( defCount != fxWorld.glassGlob.defCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 2058, ASSERT_TYPE_ASSERT, "( glassDefCount ) == ( fxWorld.glassGlob.defCount )", "%s == %s\n\t%u, %u", "glassDefCount", "fxWorld.glassGlob.defCount", defCount, fxWorld.glassGlob.defCount) )
      __debugbreak();
  }
  Sys_ProfEndNamedEvent();
  _R11 = &v37;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, [rsp+0C8h+var_58]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
}

/*
==============
StreamUpdateScheduler::EnableSubFrames
==============
*/
void StreamUpdateScheduler::EnableSubFrames(StreamUpdateScheduler *this, bool enable)
{
  BOOL v2; 
  unsigned int v3; 
  unsigned int v4; 

  v2 = enable;
  v3 = 4;
  v4 = 2 * enable;
  if ( !v2 )
    v3 = 1;
  this->mUpdateSubFrameCount = v3;
  this->mCombineSubFrameCount = v4;
  this->mSortSubframeCount = v2;
  if ( !(v2 + this->mUpdateSubFrameCount + this->mCombineSubFrameCount) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 116, ASSERT_TYPE_ASSERT, "(TotalSubFrameCount() >= 1)", (const char *)&queryFormat, "TotalSubFrameCount() >= 1") )
    __debugbreak();
}

/*
==============
StreamUpdateScheduler::FrameIndex
==============
*/
__int64 StreamUpdateScheduler::FrameIndex(StreamUpdateScheduler *this)
{
  return this->mFrame;
}

/*
==============
StreamUpdateScheduler::IncrementSubFrame
==============
*/
void StreamUpdateScheduler::IncrementSubFrame(StreamUpdateScheduler *this)
{
  unsigned int v2; 
  const dvar_t *v3; 
  bool ShouldUseXModelStreamTree; 

  v2 = this->mUpdateSubFrameCount + this->mCombineSubFrameCount + this->mSortSubframeCount;
  if ( ++this->mSubFrame >= v2 )
  {
    ++this->mFrame;
    this->mSubFrame = 0;
    v3 = DCONST_DVARBOOL_stream_treeEnable;
    if ( !DCONST_DVARBOOL_stream_treeEnable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_treeEnable") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v3);
    this->mUseStreamTree = v3->current.enabled;
    ShouldUseXModelStreamTree = Stream_ShouldUseXModelStreamTree();
    this->mUseXModelStreamTree = ShouldUseXModelStreamTree;
    if ( !ShouldUseXModelStreamTree )
    {
      if ( !streamFrontendGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 164, ASSERT_TYPE_ASSERT, "(streamFrontendGlob)", (const char *)&queryFormat, "streamFrontendGlob") )
        __debugbreak();
      memset_0(streamFrontendGlob->smodelsCollectionLods, 0, sizeof(streamFrontendGlob->smodelsCollectionLods));
    }
  }
}

/*
==============
StreamUpdateScheduler::ResetFrame
==============
*/
void StreamUpdateScheduler::ResetFrame(StreamUpdateScheduler *this)
{
  const dvar_t *v2; 

  *(_QWORD *)&this->mFrame = 0i64;
  v2 = DCONST_DVARBOOL_stream_treeEnable;
  if ( !DCONST_DVARBOOL_stream_treeEnable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_treeEnable") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  this->mUseStreamTree = v2->current.enabled;
  this->mUseXModelStreamTree = Stream_ShouldUseXModelStreamTree();
  if ( streamFrontendGlob )
    memset_0(streamFrontendGlob->smodelsCollectionLods, 0, sizeof(streamFrontendGlob->smodelsCollectionLods));
  *(_QWORD *)&this->m_subframeIndicesForEachDynamicSubtask[0][0] = 0i64;
  *(_QWORD *)&this->m_subframeIndicesForEachDynamicSubtask[0][2] = 0i64;
  *(_QWORD *)&this->m_subframeIndicesForEachDynamicSubtask[0][4] = 0i64;
  *(_QWORD *)&this->m_subframeIndicesForEachDynamicSubtask[0][6] = 0i64;
  *(_QWORD *)&this->m_subframeIndicesForEachDynamicSubtask[0][8] = 0i64;
  *(_QWORD *)&this->m_subframeIndicesForEachDynamicSubtask[1][1] = 0i64;
  *(_QWORD *)&this->m_subframeIndicesForEachDynamicSubtask[1][3] = 0i64;
  *(_QWORD *)&this->m_subframeIndicesForEachDynamicSubtask[1][5] = 0i64;
  *(_QWORD *)&this->m_subframeIndicesForEachDynamicSubtask[1][7] = 0i64;
}

/*
==============
StreamUpdateScheduler::ResetSubFrame
==============
*/
void StreamUpdateScheduler::ResetSubFrame(StreamUpdateScheduler *this)
{
  this->mSubFrame = 0;
  *(_OWORD *)&this->m_subframeIndicesForEachDynamicSubtask[0][0] = 0ui64;
  *(_OWORD *)&this->m_subframeIndicesForEachDynamicSubtask[0][4] = 0ui64;
  *(_OWORD *)&this->m_subframeIndicesForEachDynamicSubtask[0][8] = 0ui64;
  *(_OWORD *)&this->m_subframeIndicesForEachDynamicSubtask[1][3] = 0ui64;
  *(_QWORD *)&this->m_subframeIndicesForEachDynamicSubtask[1][7] = 0i64;
}

/*
==============
StreamUpdateScheduler::ShouldCombine
==============
*/
bool StreamUpdateScheduler::ShouldCombine(StreamUpdateScheduler *this)
{
  bool result; 

  if ( StreamUpdateScheduler::ShouldCombineModelsToImages(this) )
    return 1;
  result = StreamUpdateScheduler::ShouldCombineImagesToParts(this);
  if ( result )
    return 1;
  return result;
}

/*
==============
StreamUpdateScheduler::ShouldCombineImagesToParts
==============
*/
bool StreamUpdateScheduler::ShouldCombineImagesToParts(StreamUpdateScheduler *this)
{
  unsigned int mCombineSubFrameCount; 
  unsigned int v2; 

  mCombineSubFrameCount = this->mCombineSubFrameCount;
  if ( !mCombineSubFrameCount )
    return this->mSubFrame == this->mUpdateSubFrameCount - 1;
  v2 = mCombineSubFrameCount - 1;
  if ( !v2 )
    return this->mSubFrame == this->mUpdateSubFrameCount;
  if ( v2 == 1 )
    return this->mSubFrame == this->mUpdateSubFrameCount + 1;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 218, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported STREAM_INGAME_COMBINE_SUBFRAME") )
    __debugbreak();
  return 0;
}

/*
==============
StreamUpdateScheduler::ShouldCombineModelsToImages
==============
*/
bool StreamUpdateScheduler::ShouldCombineModelsToImages(StreamUpdateScheduler *this)
{
  unsigned int mCombineSubFrameCount; 
  int v2; 

  mCombineSubFrameCount = this->mCombineSubFrameCount;
  if ( mCombineSubFrameCount )
  {
    if ( mCombineSubFrameCount - 1 > 1 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 198, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported STREAM_INGAME_COMBINE_SUBFRAME") )
        __debugbreak();
      LOBYTE(v2) = 0;
    }
    else
    {
      LOBYTE(v2) = this->mSubFrame == this->mUpdateSubFrameCount;
    }
  }
  else
  {
    return this->mSubFrame == this->mUpdateSubFrameCount - 1;
  }
  return v2;
}

/*
==============
StreamUpdateScheduler::ShouldSort
==============
*/
bool StreamUpdateScheduler::ShouldSort(StreamUpdateScheduler *this)
{
  return this->mSubFrame == this->mCombineSubFrameCount + this->mSortSubframeCount + this->mUpdateSubFrameCount - 1;
}

/*
==============
StreamSP_TouchWeaponModels
==============
*/
void StreamSP_TouchWeaponModels(unsigned int clientIndex)
{
  __int64 v1; 
  const Weapon *AutoViewWeapon; 
  unsigned __int16 weaponIdx; 
  bool v4; 
  WeaponDef **v5; 
  WeaponDef *v6; 
  __int64 v7; 
  const XModel *gunXModel; 
  unsigned __int8 *attachmentVariationIndices; 
  AttachmentSlot v10; 
  __int16 v11; 
  WeaponCompleteDef *v12; 
  unsigned __int16 PrimaryAttachmentIndex; 
  int v14; 
  int v15; 
  WeaponAttachment **attachments; 
  const WeaponAttachment *v17; 
  const XModel *AttachmentModel; 
  unsigned int v19; 
  WeaponCompleteDef *v20; 
  const WeaponAttachment *v21; 
  const XModel *v22; 
  const XModel *AutoViewHandModel; 
  __int64 v24; 
  __int64 v25; 
  __int64 v26; 
  AttachmentSlot slot; 
  WeaponCompleteDef *v29; 

  v1 = (int)clientIndex;
  Stream_CheckFrontendUpdateLocks();
  if ( streamFrontendGlob->gameMode[0] != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 2548, ASSERT_TYPE_ASSERT, "(streamFrontendGlob->gameMode == GameModeType::SP)", (const char *)&queryFormat, "streamFrontendGlob->gameMode == GameModeType::SP") )
    __debugbreak();
  if ( (unsigned int)v1 >= 2 )
  {
    LODWORD(v24) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v24, 2) )
      __debugbreak();
  }
  if ( clientUIActives[v1].connectionState == CA_ACTIVE && CL_StreamViewsSP_IsAutoViewSet(LINEAR, v1) )
  {
    AutoViewWeapon = CL_StreamViewsSP_GetAutoViewWeapon(LINEAR, v1);
    weaponIdx = AutoViewWeapon->weaponIdx;
    if ( AutoViewWeapon->weaponIdx )
    {
      if ( weaponIdx > bg_lastParsedWeaponIndex )
      {
        LODWORD(v25) = bg_lastParsedWeaponIndex;
        LODWORD(v24) = weaponIdx;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1203, ASSERT_TYPE_ASSERT, "( weaponIdx ) <= ( bg_lastParsedWeaponIndex )", "weaponIdx not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", v24, v25) )
          __debugbreak();
      }
      v4 = bg_weaponDefs[weaponIdx] == NULL;
      v5 = &bg_weaponDefs[weaponIdx];
      if ( v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1204, ASSERT_TYPE_ASSERT, "(bg_weaponDefs[weaponIdx])", (const char *)&queryFormat, "bg_weaponDefs[weaponIdx]") )
        __debugbreak();
      v6 = *v5;
      v7 = AutoViewWeapon->weaponIdx;
      if ( (unsigned int)v7 > bg_lastParsedWeaponIndex )
      {
        LODWORD(v25) = bg_lastParsedWeaponIndex;
        LODWORD(v24) = AutoViewWeapon->weaponIdx;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1218, ASSERT_TYPE_ASSERT, "( weaponIndex ) <= ( bg_lastParsedWeaponIndex )", "weaponIndex not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", v24, v25) )
          __debugbreak();
      }
      if ( !bg_weaponCompleteDefs[v7] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1219, ASSERT_TYPE_ASSERT, "(bg_weaponCompleteDefs[weaponIndex])", (const char *)&queryFormat, "bg_weaponCompleteDefs[weaponIndex]") )
        __debugbreak();
      gunXModel = v6->gunXModel;
      v29 = bg_weaponCompleteDefs[v7];
      if ( gunXModel )
      {
        Stream_TouchXModel(gunXModel);
        attachmentVariationIndices = AutoViewWeapon->attachmentVariationIndices;
        v10 = ATT_SLOT_RECEIVER;
        v11 = 1;
        v12 = v29;
        do
        {
          slot = v10;
          PrimaryAttachmentIndex = BG_Weapon_GetPrimaryAttachmentIndex(AutoViewWeapon, &slot);
          v14 = *attachmentVariationIndices;
          v15 = PrimaryAttachmentIndex;
          attachments = v12->attachments[slot].attachments;
          if ( PrimaryAttachmentIndex )
          {
            if ( PrimaryAttachmentIndex > v12->attachments[slot].attachmentCount )
            {
              LODWORD(v26) = v12->attachments[slot].attachmentCount;
              LODWORD(v25) = 1;
              LODWORD(v24) = PrimaryAttachmentIndex;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 2535, ASSERT_TYPE_ASSERT, "( 1 ) <= ( chosenIndex ) && ( chosenIndex ) <= ( attachArraySize )", "chosenIndex not in [1, attachArraySize]\n\t%i not in [%i, %i]", v24, v25, v26) )
                __debugbreak();
            }
            v17 = attachments[v15 - 1];
            if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 2537, ASSERT_TYPE_ASSERT, "(attachment)", (const char *)&queryFormat, "attachment") )
              __debugbreak();
            AttachmentModel = BG_GetAttachmentModel(v17, v14, 1);
            if ( AttachmentModel )
              Stream_TouchXModel(AttachmentModel);
          }
          ++v10;
          ++attachmentVariationIndices;
        }
        while ( (unsigned int)v10 < ATT_SLOT_OTHER );
        v19 = 0;
        if ( AutoViewWeapon->weaponOthers )
        {
          v20 = v29;
          if ( v29->attachments[13].attachmentCount > 0x10 )
          {
            LODWORD(v25) = 16;
            LODWORD(v24) = v29->attachments[13].attachmentCount;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 2583, ASSERT_TYPE_ASSERT, "( attList->attachmentCount ) <= ( 16 )", "attList->attachmentCount not in [0, MAX_ATTACHMENT_OTHERS]\n\t%u not in [0, %u]", v24, v25) )
              __debugbreak();
          }
          if ( v20->attachments[13].attachmentCount )
          {
            do
            {
              if ( (AutoViewWeapon->weaponOthers & (unsigned __int16)v11) != 0 )
              {
                v21 = v20->attachments[13].attachments[v19];
                if ( !v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 2589, ASSERT_TYPE_ASSERT, "(attachment)", (const char *)&queryFormat, "attachment") )
                  __debugbreak();
                if ( v19 >= 0x10 )
                {
                  LODWORD(v25) = 16;
                  LODWORD(v24) = v19;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared.h", 1809, ASSERT_TYPE_ASSERT, "(unsigned)( otherIndex ) < (unsigned)( 16 )", "otherIndex doesn't index MAX_ATTACHMENT_OTHERS\n\t%i not in [0, %i)", v24, v25) )
                    __debugbreak();
                }
                if ( v19 + 13 > 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,unsigned int>(unsigned int)", "unsigned", (unsigned __int8)(v19 + 13), "unsigned", v19 + 13) )
                  __debugbreak();
                v22 = BG_GetAttachmentModel(v21, AutoViewWeapon->attachmentVariationIndices[(unsigned __int8)(v19 + 13)], 1);
                if ( v22 )
                  Stream_TouchXModel(v22);
              }
              ++v19;
              v11 *= 2;
            }
            while ( v19 < v20->attachments[13].attachmentCount );
          }
        }
      }
    }
    AutoViewHandModel = CL_StreamViewsSP_GetAutoViewHandModel(LINEAR, clientIndex);
    if ( AutoViewHandModel )
      Stream_TouchXModel(AutoViewHandModel);
  }
}

/*
==============
StreamSP_UpdateDynamic_ServerEntities
==============
*/
void StreamSP_UpdateDynamic_ServerEntities(const StreamDynamicUpdateCmd *cmd)
{
  const dvar_t *v5; 
  StreamUpdateMultiView *p_multiView; 
  unsigned __int64 num_entities; 
  int v8; 
  __int64 v9; 
  __int64 v10; 
  const GfxBrushModel *BrushModel; 
  unsigned __int64 v14; 
  const DObj *ServerDObjForEnt; 
  int NumModels; 
  int v20; 
  StreamUpdateMultiView *v22; 
  char v43; 
  unsigned __int64 v47; 
  unsigned __int64 serverEntitiesCheck; 
  __int64 v52; 
  __int64 v53; 
  int v54; 
  entityState_t::<unnamed_type_index> input; 
  unsigned int XModelIndex; 
  StreamUpdateMultiView *multiView; 
  __int64 v58; 
  __int64 v59; 
  __int64 v60[6]; 
  vec4_t quat; 
  __int128 v65; 
  __int128 v66; 
  __int128 v67; 
  __int128 v68; 
  __int128 v69; 
  __int128 v70; 
  __int128 v71; 
  char v72; 
  void *retaddr; 

  _RAX = &retaddr;
  v60[5] = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
  }
  Sys_ProfBeginNamedEvent(0xFF808080, "StreamSP_UpdateDynamic_ServerEntities");
  v5 = DCONST_DVARBOOL_stream_hintDobjs;
  if ( !DCONST_DVARBOOL_stream_hintDobjs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_hintDobjs") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( v5->current.enabled )
  {
    p_multiView = &cmd->multiView;
    multiView = &cmd->multiView;
    num_entities = level.num_entities;
    v8 = 0;
    input.brushModel = 0;
    if ( level.num_entities > 0 )
    {
      v9 = 0i64;
      v58 = 0i64;
      v10 = 0i64;
      v59 = 0i64;
      __asm { vmovss  xmm7, cs:__real@7f7fffff }
      do
      {
        if ( (unsigned int)v8 >= 0x800 )
        {
          LODWORD(v53) = 2048;
          LODWORD(v52) = v8;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v52, v53) )
            __debugbreak();
        }
        if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
          __debugbreak();
        if ( *(&g_entities->r.isInUse + v10) != g_entityIsInUse[v9] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
          __debugbreak();
        if ( g_entityIsInUse[v9] )
        {
          _RBX = (gentity_s *)((char *)g_entities + v10);
          if ( *(entityType_s *)((char *)&g_entities->s.eType + v10) == ET_SCRIPTMOVER && GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&_RBX->s.lerp.eFlags, ACTIVE, 1u) )
          {
            input.brushModel = (int)_RBX->s.index;
            BrushModel = R_GetBrushModel(input.brushModel);
            Stream_AddBModelDistance(p_multiView, BrushModel, &_RBX->r.currentOrigin);
            v14 = j_CoD_XXH64(&input, 4ui64, num_entities);
            num_entities = j_CoD_XXH64(&_RBX->r.currentOrigin, 0xCui64, v14);
          }
          else
          {
            ServerDObjForEnt = Com_GetServerDObjForEnt(_RBX);
            if ( ServerDObjForEnt )
            {
              __asm
              {
                vmovss  xmm0, dword ptr [rbx+130h]
                vmovss  [rbp+80h+var_D8], xmm0
                vmovss  xmm1, dword ptr [rbx+134h]
                vmovss  [rbp+80h+var_D4], xmm1
                vmovss  xmm0, dword ptr [rbx+138h]
                vmovss  [rbp+80h+var_D0], xmm0
              }
              AnglesToQuat(&_RBX->r.currentAngles, &quat);
              NumModels = DObjGetNumModels(ServerDObjForEnt);
              v20 = 0;
              if ( NumModels )
              {
                __asm { vmovups xmm6, cs:__xmm@3f800000bf800000bf800000bf800000 }
                v22 = multiView;
                do
                {
                  _RDI = DObjGetModel(ServerDObjForEnt, v20);
                  __asm
                  {
                    vmovss  [rsp+180h+var_140], xmm7
                    vmulps  xmm0, xmm6, xmmword ptr [rbp+80h+quat]
                    vmovups [rbp+80h+var_80], xmm0
                    vmovss  xmm1, [rbp+80h+var_D8]
                  }
                  HIDWORD(v65) = 0;
                  __asm
                  {
                    vmovups xmm3, xmmword ptr [rbp-40h]
                    vmovss  xmm3, xmm3, xmm1
                    vinsertps xmm3, xmm3, [rbp+80h+var_D4], 80h+var_70
                    vinsertps xmm3, xmm3, [rbp+80h+var_D0], 80h+var_60
                    vmovups xmmword ptr [rbp-40h], xmm3
                    vmovups [rbp+80h+var_90], xmm3
                    vmovss  xmm0, dword ptr [rdi+2Ch]
                  }
                  HIDWORD(v66) = 0;
                  __asm
                  {
                    vmovups xmm4, xmmword ptr [rbp-30h]
                    vmovss  xmm4, xmm4, xmm0
                    vinsertps xmm4, xmm4, dword ptr [rdi+30h], 10h
                    vinsertps xmm4, xmm4, dword ptr [rdi+34h], 20h ; ' '
                    vmovups xmmword ptr [rbp-30h], xmm4
                    vmovss  xmm0, dword ptr [rdi+38h]
                  }
                  HIDWORD(v67) = 0;
                  __asm
                  {
                    vmovups xmm3, xmmword ptr [rbp-20h]
                    vmovss  xmm3, xmm3, xmm0
                    vinsertps xmm3, xmm3, dword ptr [rdi+3Ch], 10h
                    vinsertps xmm3, xmm3, dword ptr [rdi+40h], 20h ; ' '
                    vmovups xmmword ptr [rbp-20h], xmm3
                    vsubps  xmm0, xmm4, xmm3
                    vmovups [rbp+80h+var_70], xmm0
                    vaddps  xmm1, xmm4, xmm3
                    vmovups [rbp+80h+var_60], xmm1
                  }
                  v60[0] = (__int64)&v68;
                  v60[1] = (__int64)&v69;
                  v60[2] = (__int64)&v70;
                  v60[3] = (__int64)&v71;
                  v60[4] = (__int64)&v54;
                  Stream_ViewPos_Iterate__lambda_18498cb6dbb513596de459c1976c7623_(v22, (const Stream_CalculateDistanceSq_ModelInternal::__l2::<lambda_18498cb6dbb513596de459c1976c7623> *)v60);
                  __asm
                  {
                    vmovss  xmm0, [rsp+180h+var_140]
                    vucomiss xmm0, xmm7
                  }
                  if ( v43 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 1059, ASSERT_TYPE_ASSERT, "(distSq != 3.402823466e+38F)", (const char *)&queryFormat, "distSq != FLT_MAX") )
                    __debugbreak();
                  _RAX = streamFrontendGlob;
                  __asm
                  {
                    vmovss  xmm0, dword ptr [rax+0B9725Ch]
                    vmaxss  xmm1, xmm0, [rsp+180h+var_140]; distSq
                    vmovss  [rsp+180h+var_140], xmm1
                  }
                  Stream_AddDynamicModelDistance(_RDI, *(const float *)&_XMM1);
                  XModelIndex = DB_GetXModelIndex(_RDI);
                  v47 = j_CoD_XXH64(&XModelIndex, 4ui64, num_entities);
                  num_entities = j_CoD_XXH64(&quat, 0x1Cui64, v47);
                  ++v20;
                }
                while ( v20 != NumModels );
                v8 = input.brushModel;
                v9 = v58;
                v10 = v59;
              }
              p_multiView = multiView;
            }
          }
        }
        input.brushModel = ++v8;
        v58 = ++v9;
        v10 += 1456i64;
        v59 = v10;
      }
      while ( v8 < level.num_entities );
    }
    serverEntitiesCheck = streamFrontendGlob->loadSync.serverEntitiesCheck;
    if ( serverEntitiesCheck && serverEntitiesCheck != num_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 1290, ASSERT_TYPE_ASSERT, "(streamFrontendGlob->loadSync.serverEntitiesCheck == 0 || streamFrontendGlob->loadSync.serverEntitiesCheck == hash)", (const char *)&queryFormat, "streamFrontendGlob->loadSync.serverEntitiesCheck == 0 || streamFrontendGlob->loadSync.serverEntitiesCheck == hash") )
      __debugbreak();
    streamFrontendGlob->loadSync.serverEntitiesCheck = num_entities;
  }
  Sys_ProfEndNamedEvent();
  _R11 = &v72;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
}

/*
==============
Stream_AddBModelDistance
==============
*/
void Stream_AddBModelDistance(const StreamUpdateMultiView *multiView, const GfxBrushModel *bmodel, const vec3_t *origin)
{
  GfxBrushModel *models; 
  GfxWorld *world; 
  unsigned int startSurfIndex; 
  __int64 v8; 
  unsigned int *i; 
  const Material *material; 

  if ( !bmodel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 986, ASSERT_TYPE_ASSERT, "(bmodel)", (const char *)&queryFormat, "bmodel") )
    __debugbreak();
  if ( !rgp.world && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 987, ASSERT_TYPE_ASSERT, "(rgp.world)", (const char *)&queryFormat, "rgp.world") )
    __debugbreak();
  models = s_world.models;
  if ( &s_world.models[1] > bmodel || bmodel > &s_world.models[s_world.modelCount] )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 990, ASSERT_TYPE_ASSERT, "(s_world.models + 1) <= (bmodel) && (bmodel) <= (s_world.models + s_world.modelCount)", "%s\n\t0x%p not in [0x%p, 0x%p]", "bmodel not in [s_world.models + 1, s_world.models + s_world.modelCount]", bmodel, &s_world.models[1], &s_world.models[s_world.modelCount]) )
      __debugbreak();
    models = s_world.models;
  }
  world = rgp.world;
  startSurfIndex = bmodel->startSurfIndex;
  v8 = 0i64;
  for ( i = &s_world.surfaces.himipRadiusInvSqBmodelSurfaceIndirection[s_world.surfaces.himipRadiusInvSqBmodelIndirection[bmodel - models - 1]]; (unsigned int)v8 < bmodel->surfaceCount; v8 = (unsigned int)(v8 + 1) )
  {
    material = world->surfaces.surfaces[startSurfIndex].material;
    if ( material )
    {
      if ( material->textureCount )
        Stream_AddBspSurfaceDistance(multiView, &s_world.surfaces.himipRadiusInvSqBModelCompacted[i[v8] & 0xFFFFFFF], i[v8] >> 28, &bmodel->writable.bounds, material);
    }
    ++startSurfIndex;
  }
}

/*
==============
Stream_AddBspSurfaceDistance
==============
*/
void Stream_AddBspSurfaceDistance(const StreamUpdateMultiView *multiView, const float *himipRadiusInvSqPtr, const unsigned int himipRadiusInvSqCount, const Bounds *bounds, const Material *material)
{
  MaterialGeometryType materialType; 
  unsigned __int8 layerCount; 
  __int64 viewCount; 
  bool v49; 
  bool v50; 
  unsigned int MaterialIndex; 
  unsigned __int8 textureCount; 
  __int64 v58; 
  __int64 v59; 
  MaterialTextureDef *textureTable; 
  GfxImage *image; 
  unsigned int GfxImageIndex; 
  __int64 v73; 
  __int64 v74; 
  float v75; 
  float v76; 
  float v77; 
  int v78; 
  unsigned int v79; 
  unsigned int v80; 
  int v81; 
  float4 v83; 
  float4 v84; 
  float4 v85; 
  float4 v86; 
  float4 v87[6]; 
  char v89; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-48h], xmm7
    vmovaps xmmword ptr [r11-58h], xmm8
    vmovss  xmm0, dword ptr [r9]
  }
  v87[0].v.m128_i32[3] = 0;
  _RBX = multiView;
  __asm
  {
    vmovups xmm4, [rsp+148h+var_98]
    vmovss  xmm4, xmm4, xmm0
    vinsertps xmm4, xmm4, dword ptr [r9+4], 10h
    vinsertps xmm4, xmm4, dword ptr [r9+8], 20h ; ' '
  }
  materialType = material->materialType;
  __asm { vmovss  xmm0, dword ptr [r9+0Ch] }
  layerCount = material->layerCount;
  _R15 = himipRadiusInvSqPtr;
  __asm { vmovups [rsp+148h+var_98], xmm4 }
  v87[0].v.m128_i32[3] = 0;
  __asm
  {
    vmovups xmm3, [rsp+148h+var_98]
    vmovss  xmm3, xmm3, xmm0
    vinsertps xmm3, xmm3, dword ptr [r9+10h], 10h
    vinsertps xmm3, xmm3, dword ptr [r9+14h], 20h ; ' '
    vmovaps xmmword ptr [r11-68h], xmm9
    vmovaps xmmword ptr [r11-78h], xmm10
    vmovups [rsp+148h+var_98], xmm3
    vsubps  xmm9, xmm4, xmm3
    vaddps  xmm10, xmm4, xmm3
  }
  if ( (layerCount != 0) != ((materialType & 0x40) != 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 931, ASSERT_TYPE_ASSERT, "( ( isLayeredMaterial == static_cast<bool>( material->materialType & MTL_GEOMETRY_FEATURE_LAYERED ) ) )", "( material->name ) = %s", material->name) )
    __debugbreak();
  viewCount = _RBX->viewCount;
  __asm
  {
    vmovaps [rsp+148h+var_38], xmm6
    vmovss  xmm8, cs:__real@7f7fffff
    vmovaps xmm7, xmm8
  }
  if ( viewCount > 0 )
  {
    _RDI = _RBX->viewCosFovLimit;
    do
    {
      __asm
      {
        vminps  xmm0, xmm10, xmmword ptr [rbx]
        vmovss  xmm4, dword ptr [rdi+40h]
        vmovss  xmm5, dword ptr [rdi]
        vmovss  xmm6, dword ptr [rdi-80h]
        vmaxps  xmm3, xmm0, xmm9
        vsubps  xmm1, xmm3, xmmword ptr [rbx]
        vmulps  xmm2, xmm1, xmm1
        vmovss  [rsp+148h+var_108], xmm4
        vinsertps xmm0, xmm2, xmm2, 8
        vhaddps xmm1, xmm0, xmm0
        vmovups xmm0, xmmword ptr [rbx+100h]
        vmovss  [rsp+148h+var_110], xmm5
        vmovss  dword ptr [rsp+148h+var_118], xmm6
        vhaddps xmm2, xmm1, xmm1
        vmovups xmm1, xmmword ptr [rbx]
        vmovups [rsp+148h+var_D8], xmm1
        vmovups [rsp+148h+var_98], xmm0
        vmovdqa [rsp+148h+var_C8], xmm3
        vmovdqa [rsp+148h+var_B8], xmm10
        vmovdqa [rsp+148h+var_A8], xmm9
      }
      *(float *)&_XMM0 = Stream_CalculateDistanceSq_ApplyZoomFactor(&v86, &v85, *(float *)&_XMM2, &v84, &v83, v87, v75, v76, v77);
      ++_RDI;
      _RBX = (const StreamUpdateMultiView *)((char *)_RBX + 16);
      __asm { vminss  xmm7, xmm0, xmm7 }
      --viewCount;
    }
    while ( viewCount );
    __asm { vucomiss xmm7, xmm8 }
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 938, ASSERT_TYPE_ASSERT, "(minDistanceSq != 3.402823466e+38F)", (const char *)&queryFormat, "minDistanceSq != FLT_MAX") )
    __debugbreak();
  _RAX = streamFrontendGlob;
  __asm
  {
    vmovaps xmm10, [rsp+148h+var_78]
    vmovaps xmm9, [rsp+148h+var_68]
    vmovss  xmm0, dword ptr [rax+0B9725Ch]
    vmaxss  xmm7, xmm0, xmm7
  }
  if ( layerCount )
  {
    textureCount = material->textureCount;
    if ( textureCount )
    {
      __asm { vmovss  xmm8, cs:__real@3f800000 }
      v58 = textureCount;
      v59 = 0i64;
      __asm { vxorps  xmm6, xmm6, xmm6 }
      do
      {
        textureTable = material->textureTable;
        image = textureTable[v59].image;
        if ( !image && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 963, ASSERT_TYPE_ASSERT, "( ( image != nullptr ) )", "( image ) = %p", NULL) )
          __debugbreak();
        if ( (image->flags & 0x40) != 0 )
        {
          GfxImageIndex = DB_GetGfxImageIndex(image);
          _RBX = Material_GetTextureLayerIndexFromID(textureTable[v59].index);
          if ( (unsigned int)_RBX >= material->layerCount )
          {
            LODWORD(v74) = material->layerCount;
            LODWORD(v73) = _RBX;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 970, ASSERT_TYPE_ASSERT, "(unsigned)( layerIndex ) < (unsigned)( material->layerCount )", "layerIndex doesn't index material->layerCount\n\t%i not in [0, %i)", v73, v74) )
              __debugbreak();
          }
          if ( (unsigned int)_RBX >= 8 )
          {
            LODWORD(v74) = 8;
            LODWORD(v73) = _RBX;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 972, ASSERT_TYPE_ASSERT, "(unsigned)( layerIndex ) < (unsigned)( 8 )", "layerIndex doesn't index MTL_LAYER_LIMIT\n\t%i not in [0, %i)", v73, v74) )
              __debugbreak();
          }
          if ( (unsigned int)_RBX < himipRadiusInvSqCount )
          {
            _RCX = himipRadiusInvSqPtr;
            __asm
            {
              vmovss  xmm1, dword ptr [rcx+rbx*4]
              vucomiss xmm1, xmm6
            }
            if ( (_DWORD)_RBX != himipRadiusInvSqCount )
            {
              __asm
              {
                vaddss  xmm0, xmm7, xmm8
                vmulss  xmm1, xmm0, xmm1
                vmovss  [rsp+148h+var_F0], xmm1
                vmovss  [rsp+148h+var_F8], xmm1
              }
              if ( (v81 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_distance.h", 188, ASSERT_TYPE_SANITY, "( !IS_NAN( distance ) )", (const char *)&queryFormat, "!IS_NAN( distance )") )
                __debugbreak();
              Stream_AddImageDistance(GfxImageIndex, (StreamDistance)(v79 >> 7));
            }
          }
        }
        ++v59;
        --v58;
      }
      while ( v58 );
    }
  }
  else
  {
    v49 = himipRadiusInvSqCount == 0;
    if ( !himipRadiusInvSqCount )
    {
      v50 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 944, ASSERT_TYPE_ASSERT, "(himipRadiusInvSqCount > 0)", (const char *)&queryFormat, "himipRadiusInvSqCount > 0");
      v49 = !v50;
      if ( v50 )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm6, dword ptr [r15]
      vxorps  xmm0, xmm0, xmm0
      vucomiss xmm6, xmm0
    }
    if ( !v49 )
    {
      __asm
      {
        vaddss  xmm0, xmm7, cs:__real@3f800000
        vmulss  xmm1, xmm0, xmm6
        vmovss  [rsp+148h+var_F8], xmm1
      }
      MaterialIndex = DB_GetMaterialIndex(material);
      __asm { vmovss  [rsp+148h+var_F0], xmm1 }
      if ( (v78 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_distance.h", 188, ASSERT_TYPE_SANITY, "( !IS_NAN( distance ) )", (const char *)&queryFormat, "!IS_NAN( distance )") )
        __debugbreak();
      Stream_AddMaterialDistance(MaterialIndex, (StreamDistance)(v80 >> 7));
    }
  }
  __asm { vmovaps xmm6, [rsp+148h+var_38] }
  _R11 = &v89;
  __asm
  {
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
}

/*
==============
Stream_AddDynamicModelDistance
==============
*/

void __fastcall Stream_AddDynamicModelDistance(const XModel *model, double distSq)
{
  unsigned int XModelIndex; 
  const dvar_t *v6; 
  int v11; 
  unsigned int v12; 

  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps xmm6, xmm1
    vmovss  [rsp+58h+arg_8], xmm6
  }
  XModelIndex = DB_GetXModelIndex(model);
  __asm { vmovss  [rsp+58h+arg_10], xmm6 }
  if ( (v11 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_distance.h", 188, ASSERT_TYPE_SANITY, "( !IS_NAN( distance ) )", (const char *)&queryFormat, "!IS_NAN( distance )") )
    __debugbreak();
  Stream_AddModelDistance(XModelIndex, (StreamDistance)(v12 >> 7));
  v6 = DVARBOOL_stream_hintDynamicXModelsMeshes;
  if ( !DVARBOOL_stream_hintDynamicXModelsMeshes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_hintDynamicXModelsMeshes") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( v6->current.enabled )
  {
    __asm
    {
      vsqrtss xmm1, xmm6, xmm6; dist
      vmovaps xmm2, xmm1; cullDist
    }
    XModelGetUsableLodForDist(model, *(const float *)&_XMM1, *(const float *)&_XMM2);
  }
  __asm { vmovaps xmm6, [rsp+58h+var_18] }
}

/*
==============
Stream_AddDynamicModelDistanceForMultiView
==============
*/

float __fastcall Stream_AddDynamicModelDistanceForMultiView(const StreamUpdateMultiView *multiView, const XModel *model, const GfxPlacement *placement, double scale)
{
  const XModel *v8; 
  char v30; 
  int v38; 
  __int64 v39[5]; 
  __int128 v40; 
  __int128 v41; 
  __int128 v42; 
  __int128 v43; 

  __asm
  {
    vmovaps [rsp+0E0h+var_10], xmm6
    vmovups xmm1, cs:__xmm@3f800000bf800000bf800000bf800000
    vmovups xmm0, xmmword ptr [r8]
    vmovaps xmm5, xmm3
  }
  v8 = model;
  __asm
  {
    vucomiss xmm5, cs:__real@3f800000
    vmulps  xmm0, xmm1, xmm0
    vmovss  xmm1, dword ptr [r8+10h]
  }
  HIDWORD(v40) = 0;
  __asm
  {
    vmovups xmm3, xmmword ptr [rbp-29h]
    vmovss  xmm3, xmm3, xmm1
    vinsertps xmm3, xmm3, dword ptr [r8+14h], 10h
    vinsertps xmm3, xmm3, dword ptr [r8+18h], 20h ; ' '
    vmovups xmmword ptr [rbp-29h], xmm3
  }
  HIDWORD(v40) = 0;
  __asm
  {
    vmovups [rbp+57h+var_50], xmm0
    vmovups xmm4, xmmword ptr [rbp-29h]
    vmovss  xmm0, dword ptr [rdx+2Ch]
    vmovss  xmm6, cs:__real@7f7fffff
    vmovss  xmm4, xmm4, xmm0
    vmovss  xmm0, dword ptr [rdx+38h]
    vinsertps xmm4, xmm4, dword ptr [rdx+30h], 10h
    vinsertps xmm4, xmm4, dword ptr [rdx+34h], 20h ; ' '
    vmovups [rbp+57h+var_70], xmm3
    vmovups xmmword ptr [rbp-29h], xmm4
  }
  HIDWORD(v40) = 0;
  __asm { vmovups xmm3, xmmword ptr [rbp-29h] }
  v39[0] = (__int64)&v41;
  v39[1] = (__int64)&v42;
  __asm
  {
    vmovss  xmm3, xmm3, xmm0
    vinsertps xmm3, xmm3, dword ptr [rdx+3Ch], 10h
    vinsertps xmm3, xmm3, dword ptr [rdx+40h], 20h ; ' '
  }
  v39[2] = (__int64)&v40;
  v39[3] = (__int64)&v43;
  __asm
  {
    vsubps  xmm0, xmm4, xmm3
    vaddps  xmm1, xmm4, xmm3
    vmovups [rbp+57h+var_80], xmm3
  }
  v39[4] = (__int64)&v38;
  __asm
  {
    vmovss  [rbp+57h+var_B0], xmm6
    vmovups [rbp+57h+var_80], xmm0
    vmovups [rbp+57h+var_40], xmm1
  }
  Stream_ViewPos_Iterate__lambda_18498cb6dbb513596de459c1976c7623_(multiView, (const Stream_CalculateDistanceSq_ModelInternal::__l2::<lambda_18498cb6dbb513596de459c1976c7623> *)v39);
  __asm
  {
    vmovss  xmm0, [rbp+57h+var_B0]
    vucomiss xmm0, xmm6
  }
  if ( v30 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 1059, ASSERT_TYPE_ASSERT, "(distSq != 3.402823466e+38F)", (const char *)&queryFormat, "distSq != FLT_MAX") )
    __debugbreak();
  _RAX = streamFrontendGlob;
  __asm
  {
    vmovss  xmm0, dword ptr [rax+0B9725Ch]
    vmaxss  xmm6, xmm0, [rbp+57h+var_B0]
    vmovaps xmm1, xmm6; distSq
  }
  Stream_AddDynamicModelDistance(v8, *(double *)&_XMM1);
  __asm
  {
    vmovaps xmm0, xmm6
    vmovaps xmm6, [rsp+0E0h+var_10]
  }
  return *(float *)&_XMM0;
}

/*
==============
Stream_AddDynamicWeaponCamoDistance
==============
*/

void __fastcall Stream_AddDynamicWeaponCamoDistance(const XModelMaterialOverride *modelOverride, const XModel *model, double modelDistSq)
{
  const XModel *v8; 
  const XModelMaterialOverride *v9; 
  __int64 v10; 
  MaterialOverride *v13; 
  char v14; 
  signed __int64 numsurfs; 
  Material *originalMaterial; 
  Material **v19; 
  Material **v32; 
  unsigned int v38; 
  unsigned int MaterialIndex; 
  __int64 v40; 
  StreamFrontendGlob *v41; 
  Material *overrideMaterial; 
  unsigned int v43; 
  __int64 v44; 
  __int64 v45; 
  __int64 v46; 
  unsigned int GfxImageIndex; 
  __int64 v48; 
  const dvar_t *v49; 
  StreamFrontendGlob *v50; 
  __int64 v55; 
  __int64 v56; 
  int v57; 
  unsigned int v58; 
  char v60; 
  void *retaddr; 
  int v64; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmm6, xmm2
  }
  v8 = model;
  v9 = modelOverride;
  Sys_ProfBeginNamedEvent(0xFF808080, "Stream_AddDynamicWeaponCamoDistance");
  v10 = 0i64;
  v64 = 0;
  if ( v9->materialOverrideCount )
  {
    __asm
    {
      vmovss  xmm7, cs:__real@7f7fffff
      vmovss  xmm8, cs:__real@3f800000
    }
    do
    {
      v13 = v9->materialOverride[v10];
      if ( v13 )
      {
        v14 = 0;
        __asm { vmovaps xmm1, xmm7 }
        _RCX = 0i64;
        numsurfs = v8->numsurfs;
        if ( (unsigned __int64)numsurfs >= 4 )
        {
          originalMaterial = v13->originalMaterial;
          v19 = v8->materialHandles + 2;
          do
          {
            if ( *(v19 - 2) == originalMaterial )
            {
              v14 = 1;
              _RAX = v8->himipRadiusInvSq;
              __asm
              {
                vmovss  xmm0, dword ptr [rax+rcx*4]
                vminss  xmm1, xmm0, xmm1
              }
            }
            if ( *(v19 - 1) == originalMaterial )
            {
              v14 = 1;
              _RAX = v8->himipRadiusInvSq;
              __asm
              {
                vmovss  xmm0, dword ptr [rax+rcx*4+4]
                vminss  xmm1, xmm0, xmm1
              }
            }
            if ( *v19 == originalMaterial )
            {
              v14 = 1;
              _RAX = v8->himipRadiusInvSq;
              __asm
              {
                vmovss  xmm0, dword ptr [rax+rcx*4+8]
                vminss  xmm1, xmm0, xmm1
              }
            }
            if ( v19[1] == originalMaterial )
            {
              v14 = 1;
              _RAX = v8->himipRadiusInvSq;
              __asm
              {
                vmovss  xmm0, dword ptr [rax+rcx*4+0Ch]
                vminss  xmm1, xmm0, xmm1
              }
            }
            _RCX += 4i64;
            v19 += 4;
          }
          while ( _RCX < numsurfs - 3 );
        }
        if ( _RCX < numsurfs )
        {
          v32 = &v8->materialHandles[_RCX];
          do
          {
            if ( *v32 == v13->originalMaterial )
            {
              v14 = 1;
              _RAX = v8->himipRadiusInvSq;
              __asm
              {
                vmovss  xmm0, dword ptr [rax+rcx*4]
                vminss  xmm1, xmm0, xmm1
              }
            }
            ++_RCX;
            ++v32;
          }
          while ( _RCX < numsurfs );
        }
        if ( v14 )
        {
          __asm
          {
            vaddss  xmm0, xmm6, xmm8
            vmulss  xmm1, xmm0, xmm1
            vmovss  [rsp+0C8h+var_80], xmm1
            vmovss  [rsp+0C8h+var_88], xmm1
          }
          if ( (v57 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_distance.h", 188, ASSERT_TYPE_SANITY, "( !IS_NAN( distance ) )", (const char *)&queryFormat, "!IS_NAN( distance )") )
            __debugbreak();
          v38 = v58 >> 7;
          if ( v13->overrideType == MATERIAL_OVERRIDETYPE_CAMO )
          {
            overrideMaterial = v13->overrideMaterial;
            v43 = *(_DWORD *)&overrideMaterial->cameraRegion;
            if ( v43 )
            {
              v44 = 0i64;
              v45 = v43;
              do
              {
                v46 = *(_QWORD *)(*(_QWORD *)&overrideMaterial->maxDisplacement + v44 + 8);
                if ( (*(_DWORD *)(v46 + 24) & 0x40) != 0 )
                {
                  GfxImageIndex = DB_GetGfxImageIndex((const GfxImage *)v46);
                  v48 = GfxImageIndex;
                  if ( GfxImageIndex >= 0x14000 )
                  {
                    LODWORD(v56) = 81920;
                    LODWORD(v55) = GfxImageIndex;
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_internal.h", 421, ASSERT_TYPE_ASSERT, "(unsigned)( imageIndex ) < (unsigned)( IMAGE_POOL_SIZE )", "imageIndex doesn't index IMAGE_POOL_SIZE\n\t%i not in [0, %i)", v55, v56) )
                      __debugbreak();
                  }
                  v49 = DCONST_DVARBOOL_stream_pedanticAddImageChecks;
                  if ( !DCONST_DVARBOOL_stream_pedanticAddImageChecks && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_pedanticAddImageChecks") )
                    __debugbreak();
                  Dvar_CheckFrontendServerThread(v49);
                  if ( v49->current.enabled && (DB_GetGfxImageAtIndex(v48)->flags & 0x40) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_internal.h", 426, ASSERT_TYPE_ASSERT, "(R_IsStreamedImage( image ))", (const char *)&queryFormat, "R_IsStreamedImage( image )") )
                    __debugbreak();
                  v50 = streamFrontendGlob;
                  if ( (unsigned int)v48 >= 0x14000 )
                  {
                    LODWORD(v56) = 81920;
                    LODWORD(v55) = v48;
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_sortlist.h", 366, ASSERT_TYPE_ASSERT, "(unsigned)( assetIndex ) < (unsigned)( ( sizeof( *array_counter( mDistances ) ) + 0 ) )", "assetIndex doesn't index ARRAY_COUNT( mDistances )\n\t%i not in [0, %i)", v55, v56) )
                      __debugbreak();
                  }
                  if ( v38 < v50->imageDistance.mDistances[v48].mValue )
                    v50->imageDistance.mDistances[v48].mValue = v38;
                  Com_BitSetAssert(v50->imageDistance.mValueSet, v48, 10240);
                }
                v44 += 16i64;
                --v45;
              }
              while ( v45 );
              v8 = model;
              LODWORD(v10) = v64;
            }
          }
          else if ( v13->overrideType == MATERIAL_OVERRIDETYPE_STICKER_REPLACE )
          {
            MaterialIndex = DB_GetMaterialIndex(v13->overrideMaterial);
            v40 = MaterialIndex;
            if ( MaterialIndex >= 0xB400 )
            {
              LODWORD(v56) = 46080;
              LODWORD(v55) = MaterialIndex;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_internal.h", 435, ASSERT_TYPE_ASSERT, "(unsigned)( materialIndex ) < (unsigned)( ((( 43 * 1024 ) + 1024 + MATERIAL_POOL_SIZE_PRELOAD_PROCESS) + 1024) )", "materialIndex doesn't index MATERIAL_POOL_SIZE\n\t%i not in [0, %i)", v55, v56) )
                __debugbreak();
            }
            v41 = streamFrontendGlob;
            if ( (unsigned int)v40 >= 0xB400 )
            {
              LODWORD(v56) = 46080;
              LODWORD(v55) = v40;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_sortlist.h", 366, ASSERT_TYPE_ASSERT, "(unsigned)( assetIndex ) < (unsigned)( ( sizeof( *array_counter( mDistances ) ) + 0 ) )", "assetIndex doesn't index ARRAY_COUNT( mDistances )\n\t%i not in [0, %i)", v55, v56) )
                __debugbreak();
            }
            if ( v38 < v41->materialDistance.mDistances[v40].mValue )
              v41->materialDistance.mDistances[v40].mValue = v38;
            Com_BitSetAssert(v41->materialDistance.mValueSet, v40, 5760);
          }
          else
          {
            LODWORD(v55) = v13->overrideType;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 1157, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp(1157): unhandled case %d in switch statement", v55) )
              __debugbreak();
          }
        }
      }
      v10 = (unsigned int)(v10 + 1);
      v64 = v10;
      v9 = modelOverride;
    }
    while ( (unsigned int)v10 < modelOverride->materialOverrideCount );
  }
  Sys_ProfEndNamedEvent();
  _R11 = &v60;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, [rsp+0C8h+var_58]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
}

/*
==============
Stream_AdjustViewPosForST
==============
*/
float4 *Stream_AdjustViewPosForST(float4 *result, const float4 *viewPos, const float4 *minBound, const float4 *maxBound)
{
  const dvar_t *v4; 

  v4 = DVARFLT_stream_superTerrainHeightScaling;
  _RBP = maxBound;
  _RDI = viewPos;
  _RSI = result;
  if ( !DVARFLT_stream_superTerrainHeightScaling && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_superTerrainHeightScaling") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  __asm
  {
    vmovups xmm2, xmmword ptr [rdi]
    vmovups xmm0, xmmword ptr [rbp+0]
    vmovups xmm1, cs:__xmm@3f800000000000003f8000003f800000
    vinsertps xmm1, xmm1, dword ptr [rbx+28h], 20h ; ' '
    vminps  xmm0, xmm0, xmm2
    vmaxps  xmm3, xmm0, xmmword ptr [r14]
    vsubps  xmm0, xmm2, xmm3
    vmulps  xmm1, xmm1, xmm0
    vaddps  xmm2, xmm1, xmm3
    vmovups xmmword ptr [rsi], xmm2
  }
  return _RSI;
}

/*
==============
Stream_AdjustViewPosForSTVec3
==============
*/
vec3_t *Stream_AdjustViewPosForSTVec3(vec3_t *result, const vec3_t *viewPos, const float4 *minBound, const float4 *maxBound)
{
  const dvar_t *v9; 
  vec3_t *v24; 
  __int128 v29; 
  char v31; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-18h], xmm6
    vmovaps [rsp+98h+var_28], xmm7
    vmovaps xmmword ptr [r11-38h], xmm8
    vmovss  xmm0, dword ptr [rdx]
  }
  v9 = DVARFLT_stream_superTerrainHeightScaling;
  HIDWORD(v29) = 0;
  _RBX = result;
  __asm
  {
    vmovups xmm6, xmmword ptr [rsp+40h]
    vmovups xmm7, xmmword ptr [r9]
    vmovups xmm8, xmmword ptr [r8]
    vmovss  xmm6, xmm6, xmm0
    vinsertps xmm6, xmm6, dword ptr [rdx+4], 10h
    vinsertps xmm6, xmm6, dword ptr [rdx+8], 20h ; ' '
  }
  if ( !DVARFLT_stream_superTerrainHeightScaling && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_superTerrainHeightScaling") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  __asm
  {
    vmovups xmm1, cs:__xmm@3f800000000000003f8000003f800000
    vinsertps xmm1, xmm1, dword ptr [rdi+28h], 20h ; ' '
    vminps  xmm0, xmm7, xmm6
    vmaxps  xmm2, xmm0, xmm8
    vsubps  xmm0, xmm6, xmm2
    vmulps  xmm1, xmm1, xmm0
    vaddps  xmm3, xmm1, xmm2
    vmovss  dword ptr [rbx], xmm3
    vextractps dword ptr [rbx+4], xmm3, 1
    vextractps dword ptr [rbx+8], xmm3, 2
  }
  v24 = _RBX;
  _R11 = &v31;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, [rsp+98h+var_28]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
  return v24;
}

/*
==============
Stream_AnalyzeImage
==============
*/
void Stream_AnalyzeImage(XAssetHeader header, void *data)
{
  unsigned int GfxImageIndex; 
  unsigned int v4; 
  bool v5; 

  if ( (LOWORD(header.physicsLibrary[1].havokDataSize) >= 0x1000u || HIWORD(header.physicsLibrary[1].havokDataSize) >= 0x1000u) && I_StartsWith(header.physicsLibrary->name, "body_mp_") )
  {
    GfxImageIndex = DB_GetGfxImageIndex(header.image);
    bitarray_base<bitarray<245760>>::setBit(&streamFrontendGlob->specialImagesTable, 3 * GfxImageIndex);
  }
  else if ( I_StartsWith(header.physicsLibrary->name, "li_i_mtl_") )
  {
    if ( I_strstr(header.physicsLibrary->name, "_foliage_") )
    {
      v4 = 3 * DB_GetGfxImageIndex(header.image);
      v5 = I_EndsWith(header.physicsLibrary->name, "_proxy_normal");
      bitarray_base<bitarray<245760>>::setBit(&streamFrontendGlob->specialImagesTable, v4 + 2 - v5);
    }
  }
}

/*
==============
Stream_BeginScreenUpdateFrame
==============
*/
void Stream_BeginScreenUpdateFrame(void)
{
  char data; 

  if ( !Sys_IsUpdateScreenThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 823, ASSERT_TYPE_ASSERT, "(Sys_IsUpdateScreenThread())", (const char *)&queryFormat, "Sys_IsUpdateScreenThread()") )
    __debugbreak();
  streamFrontendGlob->frameState = BEGIN;
  if ( DVARINT_stream_modelLodLimit->modified )
  {
    Dvar_ClearModified(DVARINT_stream_modelLodLimit);
    Stream_PushSyncDisable();
    Stream_PopSyncDisable();
    streamFrontendGlob->purgeMeshes = 1;
  }
  Stream_Debug_BeginScreenUpdateFrame();
  data = Com_GameMode_GetActiveGameMode();
  Sys_AddWorkerCmd(WRKCMD_STREAM_BEGIN_SCREEN_UPDATE_FRAME, &data);
}

/*
==============
Stream_BeginScreenUpdateFrameCmd
==============
*/
void Stream_BeginScreenUpdateFrameCmd(const void *const data)
{
  threadId_t CurrentThreadId; 
  GameModeType v3; 

  if ( s_beginScreenUpdateFrameThread && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 810, ASSERT_TYPE_ASSERT, "(s_beginScreenUpdateFrameThread == INVALID_THREAD_ID)", (const char *)&queryFormat, "s_beginScreenUpdateFrameThread == INVALID_THREAD_ID") )
    __debugbreak();
  CurrentThreadId = Sys_GetCurrentThreadId();
  v3 = *(unsigned __int8 *)data;
  s_beginScreenUpdateFrameThread = CurrentThreadId;
  Stream_BeginUpdateStaticAllClients(v3);
  if ( s_beginScreenUpdateFrameThread != Sys_GetCurrentThreadId() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 816, ASSERT_TYPE_ASSERT, "(s_beginScreenUpdateFrameThread == Sys_GetCurrentThreadId())", (const char *)&queryFormat, "s_beginScreenUpdateFrameThread == Sys_GetCurrentThreadId()") )
    __debugbreak();
  s_beginScreenUpdateFrameThread = 0;
}

/*
==============
Stream_BeginUpdateStaticAllClients
==============
*/
void Stream_BeginUpdateStaticAllClients(GameModeType gameMode)
{
  char v1; 
  LocalClientNum_t v2; 
  StreamFrontendGlob *v3; 
  volatile int *p_isEndingUpdateFrame; 
  volatile int *p_yieldRequestCount; 
  const dvar_t *v6; 
  int integer; 
  const dvar_t *v8; 
  bool enabled; 
  StreamFrontendGlob *v10; 
  unsigned int deferredTouchXModelCount; 
  __int64 v12; 
  __int64 v13; 
  unsigned int v14; 
  StreamFrontendGlob *i; 
  __int64 v16; 
  __int64 v17; 
  StreamFrontendGlob *v18; 
  const dvar_t *v19; 
  const dvar_t *v20; 
  StreamFrontendGlob *v21; 
  const dvar_t *v22; 
  bool ShouldUseXModelStreamTree; 
  unsigned int mSubFrame; 
  unsigned int mUpdateSubFrameCount; 
  StreamFrontendGlob *v26; 
  __int64 v28; 
  const bitarray<1536> *VisibilityHintBitArray; 
  const bitarray<1536> *v53; 
  _DWORD *v54; 
  __int64 v55; 
  __int64 v58; 
  int *v67; 
  WorkerCmdType v68; 
  __int64 v78; 
  __int64 v79; 
  ScopedStreamFrontendUpdateLock v80; 
  __int64 v81; 
  int v82[4]; 
  char v83; 
  bitarray<1536> *p_transientVisibility; 
  int data[4]; 
  char v86; 
  StreamUpdateMultiView multiView; 

  v81 = -2i64;
  v1 = gameMode;
  Sys_ProfBeginNamedEvent(0xFF808080, "Stream_BeginUpdateStaticAllClients");
  if ( !Stream_IsInitialized() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 2388, ASSERT_TYPE_ASSERT, "(Stream_IsInitialized())", (const char *)&queryFormat, "Stream_IsInitialized()") )
    __debugbreak();
  if ( s_beginScreenUpdateFrameThread != Sys_GetCurrentThreadId() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 2389, ASSERT_TYPE_ASSERT, "(Stream_IsBeginScreenUpdateFrameThread())", (const char *)&queryFormat, "Stream_IsBeginScreenUpdateFrameThread()") )
    __debugbreak();
  Stream_AlwaysLoaded_Update();
  ScopedStreamFrontendUpdateLock::ScopedStreamFrontendUpdateLock(&v80);
  if ( s_beginScreenUpdateFrameThread != Sys_GetCurrentThreadId() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 780, ASSERT_TYPE_ASSERT, "(Stream_IsBeginScreenUpdateFrameThread() || forPushSyncDisable)", (const char *)&queryFormat, "Stream_IsBeginScreenUpdateFrameThread() || forPushSyncDisable") )
    __debugbreak();
  Stream_CheckFrontendUpdateLocks();
  v2 = LOCAL_CLIENT_1;
  v3 = streamFrontendGlob;
  if ( streamFrontendGlob->updateFrameInProgress )
  {
    p_isEndingUpdateFrame = &streamFrontendGlob->isEndingUpdateFrame;
    if ( (((_BYTE)streamFrontendGlob + 60) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &streamFrontendGlob->isEndingUpdateFrame) )
      __debugbreak();
    if ( _InterlockedIncrement(p_isEndingUpdateFrame) == 1 )
    {
      Stream_EndUpdateFrameInternal(0);
      if ( streamFrontendGlob->isEndingUpdateFrame < 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 795, ASSERT_TYPE_ASSERT, "( streamFrontendGlob->isEndingUpdateFrame ) >= ( 1 )", "%s >= %s\n\t%i, %i", "streamFrontendGlob->isEndingUpdateFrame", "1", streamFrontendGlob->isEndingUpdateFrame, 1) )
        __debugbreak();
      Sys_InterlockedDecrement(&streamFrontendGlob->isEndingUpdateFrame);
    }
    else
    {
      if ( streamFrontendGlob->isEndingUpdateFrame < 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 800, ASSERT_TYPE_ASSERT, "( streamFrontendGlob->isEndingUpdateFrame ) >= ( 1 )", "%s >= %s\n\t%i, %i", "streamFrontendGlob->isEndingUpdateFrame", "1", streamFrontendGlob->isEndingUpdateFrame, 1) )
        __debugbreak();
      Sys_InterlockedDecrement(&streamFrontendGlob->isEndingUpdateFrame);
      Sys_ProcessWorkerCmdsWithTimeout(lambda_4c6a582810900cddbcadf2959537b505_::_lambda_invoker_cdecl_, NULL);
    }
    v3 = streamFrontendGlob;
  }
  v3->gameMode[0] = v1;
  streamFrontendGlob->canStreamMore = streamFrontendGlob->canStreamMoreForWrite;
  streamFrontendGlob->canStreamMoreForWrite = 1;
  Stream_QueueFileBlockUpdate();
  Stream_LevelInit_StepStateMachine();
  if ( streamFrontendGlob->levelInit.state >= (LOADING_SAVEGAME|LOADING_LEVEL) )
  {
    p_yieldRequestCount = &streamFrontendGlob->yieldRequestCount;
    if ( (((_BYTE)streamFrontendGlob + 64) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 141, ASSERT_TYPE_ASSERT, "( ( IsAligned( addr, sizeof( volatile_int32 ) ) ) )", "( addr ) = %p", (const void *)p_yieldRequestCount) )
      __debugbreak();
    if ( *(int *)p_yieldRequestCount <= 0 )
    {
      if ( !streamFrontendGlob->yieldFrameCount )
      {
LABEL_38:
        v8 = DVARBOOL_stream_freezeState;
        if ( !DVARBOOL_stream_freezeState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_freezeState") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v8);
        enabled = v8->current.enabled;
        streamFrontendGlob->frozenState = enabled;
        if ( Stream_IsEnabled() && !enabled )
        {
          if ( streamFrontendGlob->numClientsThisFrame != -1 )
          {
            LODWORD(v79) = -1;
            LODWORD(v78) = streamFrontendGlob->numClientsThisFrame;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 2435, ASSERT_TYPE_ASSERT, "( streamFrontendGlob->numClientsThisFrame ) == ( -1 )", "%s == %s\n\t%i, %i", "streamFrontendGlob->numClientsThisFrame", "-1", v78, v79) )
              __debugbreak();
          }
          streamFrontendGlob->updateFrameInProgress = 1;
          streamFrontendGlob->numClientsThisFrame = 0;
          Sys_ProfBeginNamedEvent(0xFF808080, "Stream_UpdateDeferredTouchXModels");
          Stream_CheckFrontendUpdateLocks();
          v10 = streamFrontendGlob;
          deferredTouchXModelCount = streamFrontendGlob->deferredTouchXModelCount;
          if ( deferredTouchXModelCount )
          {
            v12 = 0i64;
            v13 = deferredTouchXModelCount;
            do
            {
              Stream_TouchXModel_Internal(v10->deferredTouchXModels[v12].model, v10->deferredTouchXModels[v12].streamLod, v10->deferredTouchXModels[v12].streamMip);
              ++v12;
              --v13;
              v10 = streamFrontendGlob;
            }
            while ( v13 );
          }
          v10->deferredTouchXModelCount = 0;
          Sys_ProfEndNamedEvent();
          Sys_ProfBeginNamedEvent(0xFF808080, "Stream_UpdateTouchMaterialsUntilLoad");
          Stream_CheckFrontendUpdateLocks();
          v14 = 0;
          for ( i = streamFrontendGlob; v14 < streamFrontendGlob->touchMaterialUntilLoadCount; i = streamFrontendGlob )
          {
            v16 = 8i64 * v14 + 2364032;
            v17 = *(_QWORD *)((char *)&i->modelDistance.mDistances[0].mValue + v16);
            if ( !v17 )
            {
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 2328, ASSERT_TYPE_ASSERT, "(material)", (const char *)&queryFormat, "material") )
                __debugbreak();
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 938, ASSERT_TYPE_ASSERT, "(material)", (const char *)&queryFormat, "material") )
                __debugbreak();
            }
            if ( (*(_BYTE *)(v17 + 26) & 0x10) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 2329, ASSERT_TYPE_ASSERT, "(Material_HasStreamedImages( material ))", (const char *)&queryFormat, "Material_HasStreamedImages( material )") )
              __debugbreak();
            if ( Stream_TouchMaterialAndCheck((const Material *)v17) )
            {
              *(_QWORD *)((char *)&streamFrontendGlob->modelDistance.mDistances[0].mValue + v16) = streamFrontendGlob->touchMaterialsUntilLoad[--streamFrontendGlob->touchMaterialUntilLoadCount];
              --v14;
            }
            ++v14;
          }
          Sys_ProfEndNamedEvent();
          v18 = streamFrontendGlob;
          if ( streamFrontendGlob->levelInit.state != 4 || streamFrontendGlob->loadSync.startTimeMs > 0 || streamFrontendGlob->loadSync.isActiveInFrontend )
            goto LABEL_73;
          v19 = DCONST_DVARBOOL_stream_forceFullUpdateEveryFrame;
          if ( !DCONST_DVARBOOL_stream_forceFullUpdateEveryFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_forceFullUpdateEveryFrame") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v19);
          if ( v19->current.enabled )
            goto LABEL_73;
          v20 = DVARBOOL_stream_drawMetrics;
          if ( !DVARBOOL_stream_drawMetrics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_drawMetrics") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v20);
          if ( v20->current.enabled )
          {
LABEL_73:
            *(_QWORD *)&v18->globalScheduler.mUpdateSubFrameCount = 1i64;
            v18->globalScheduler.mSortSubframeCount = 0;
          }
          else
          {
            v18->globalScheduler.mUpdateSubFrameCount = 4;
            v18->globalScheduler.mCombineSubFrameCount = 2;
            v18->globalScheduler.mSortSubframeCount = 1;
          }
          v21 = streamFrontendGlob;
          ++streamFrontendGlob->globalScheduler.mSubFrame;
          if ( v21->globalScheduler.mSubFrame >= v21->globalScheduler.mUpdateSubFrameCount + v21->globalScheduler.mCombineSubFrameCount + v21->globalScheduler.mSortSubframeCount )
          {
            ++v21->globalScheduler.mFrame;
            v21->globalScheduler.mSubFrame = 0;
            v22 = DCONST_DVARBOOL_stream_treeEnable;
            if ( !DCONST_DVARBOOL_stream_treeEnable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_treeEnable") )
              __debugbreak();
            Dvar_CheckFrontendServerThread(v22);
            v21->globalScheduler.mUseStreamTree = v22->current.enabled;
            ShouldUseXModelStreamTree = Stream_ShouldUseXModelStreamTree();
            v21->globalScheduler.mUseXModelStreamTree = ShouldUseXModelStreamTree;
            if ( !ShouldUseXModelStreamTree )
            {
              if ( !streamFrontendGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 164, ASSERT_TYPE_ASSERT, "(streamFrontendGlob)", (const char *)&queryFormat, "streamFrontendGlob") )
                __debugbreak();
              memset_0(streamFrontendGlob->smodelsCollectionLods, 0, sizeof(streamFrontendGlob->smodelsCollectionLods));
            }
          }
          mSubFrame = streamFrontendGlob->globalScheduler.mSubFrame;
          mUpdateSubFrameCount = streamFrontendGlob->globalScheduler.mUpdateSubFrameCount;
          if ( rgp.world )
          {
            if ( streamFrontendGlob->numClientsLastFrame > 0 && mSubFrame < mUpdateSubFrameCount )
            {
              Stream_ViewPos_GetStaticMultiView(&multiView);
              if ( multiView.viewCount )
              {
                v26 = streamFrontendGlob;
                _RCX = &multiView;
                v28 = 8i64;
                if ( streamFrontendGlob->globalScheduler.mUseStreamTree )
                {
                  v82[0] = mSubFrame;
                  v82[1] = mUpdateSubFrameCount;
                  _RAX = &v83;
                  do
                  {
                    __asm
                    {
                      vmovups ymm0, ymmword ptr [rcx]
                      vmovups ymmword ptr [rax], ymm0
                      vmovups ymm0, ymmword ptr [rcx+20h]
                      vmovups ymmword ptr [rax+20h], ymm0
                      vmovups ymm0, ymmword ptr [rcx+40h]
                      vmovups ymmword ptr [rax+40h], ymm0
                      vmovups xmm0, xmmword ptr [rcx+60h]
                      vmovups xmmword ptr [rax+60h], xmm0
                    }
                    _RAX += 128;
                    __asm
                    {
                      vmovups xmm1, xmmword ptr [rcx+70h]
                      vmovups xmmword ptr [rax-10h], xmm1
                    }
                    _RCX = (StreamUpdateMultiView *)((char *)_RCX + 128);
                    --v28;
                  }
                  while ( v28 );
                  __asm
                  {
                    vmovups ymm0, ymmword ptr [rcx]
                    vmovups ymmword ptr [rax], ymm0
                    vmovups ymm0, ymmword ptr [rcx+20h]
                    vmovups ymmword ptr [rax+20h], ymm0
                    vmovups xmm0, xmmword ptr [rcx+40h]
                    vmovups xmmword ptr [rax+40h], xmm0
                  }
                  _RBX = (unsigned __int64)v26->transientVisibility.array;
                  p_transientVisibility = &v26->transientVisibility;
                  _RAX = CL_TransientsWorld_GetVisibilityHintBitArray(LOCAL_CLIENT_0);
                  __asm
                  {
                    vmovups xmm0, xmmword ptr [rax]
                    vmovups xmmword ptr [rbx], xmm0
                    vmovups xmm1, xmmword ptr [rax+10h]
                    vmovups xmmword ptr [rbx+10h], xmm1
                    vmovups xmm0, xmmword ptr [rax+20h]
                    vmovups xmmword ptr [rbx+20h], xmm0
                    vmovups xmm1, xmmword ptr [rax+30h]
                    vmovups xmmword ptr [rbx+30h], xmm1
                    vmovups xmm0, xmmword ptr [rax+40h]
                    vmovups xmmword ptr [rbx+40h], xmm0
                    vmovups xmm1, xmmword ptr [rax+50h]
                    vmovups xmmword ptr [rbx+50h], xmm1
                    vmovups xmm0, xmmword ptr [rax+60h]
                    vmovups xmmword ptr [rbx+60h], xmm0
                    vmovups xmm1, xmmword ptr [rax+70h]
                    vmovups xmmword ptr [rbx+70h], xmm1
                    vmovups xmm0, xmmword ptr [rax+80h]
                    vmovups xmmword ptr [rbx+80h], xmm0
                    vmovups xmm1, xmmword ptr [rax+90h]
                    vmovups xmmword ptr [rbx+90h], xmm1
                    vmovups xmm0, xmmword ptr [rax+0A0h]
                    vmovups xmmword ptr [rbx+0A0h], xmm0
                    vmovups xmm1, xmmword ptr [rax+0B0h]
                    vmovups xmmword ptr [rbx+0B0h], xmm1
                  }
                  if ( SLODWORD(cl_maxLocalClients) > 1 )
                  {
                    do
                    {
                      VisibilityHintBitArray = CL_TransientsWorld_GetVisibilityHintBitArray(v2);
                      v53 = VisibilityHintBitArray;
                      if ( _RBX > (unsigned __int64)&VisibilityHintBitArray->array[47] || _RBX + 188 < (unsigned __int64)VisibilityHintBitArray )
                      {
                        _RAX = _RBX + 16;
                        _RDX = (char *)v53 - _RBX;
                        v58 = 3i64;
                        do
                        {
                          __asm
                          {
                            vmovdqu xmm1, xmmword ptr [rdx+rax-10h]
                            vpor    xmm1, xmm1, xmmword ptr [rax-10h]
                            vmovdqu xmmword ptr [rax-10h], xmm1
                            vmovdqu xmm2, xmmword ptr [rdx+rax]
                            vpor    xmm1, xmm2, xmmword ptr [rax]
                            vmovdqu xmmword ptr [rax], xmm1
                            vmovdqu xmm1, xmmword ptr [rdx+rax+10h]
                            vpor    xmm1, xmm1, xmmword ptr [rax+10h]
                            vmovdqu xmmword ptr [rax+10h], xmm1
                            vmovdqu xmm1, xmmword ptr [rdx+rax+20h]
                            vpor    xmm1, xmm1, xmmword ptr [rax+20h]
                            vmovdqu xmmword ptr [rax+20h], xmm1
                          }
                          _RAX += 64i64;
                          --v58;
                        }
                        while ( v58 );
                      }
                      else
                      {
                        v54 = (_DWORD *)_RBX;
                        v55 = 48i64;
                        do
                        {
                          *v54 |= *(unsigned int *)((char *)VisibilityHintBitArray->array + (_QWORD)v54 - _RBX);
                          ++v54;
                          --v55;
                        }
                        while ( v55 );
                      }
                      ++v2;
                    }
                    while ( v2 < SLODWORD(cl_maxLocalClients) );
                  }
                  v67 = v82;
                  v68 = WRKCMD_STREAM_UPDATE_STREAM_TREE;
                }
                else
                {
                  data[0] = mSubFrame;
                  data[1] = mUpdateSubFrameCount;
                  _RAX = &v86;
                  do
                  {
                    __asm
                    {
                      vmovups ymm0, ymmword ptr [rcx]
                      vmovups ymmword ptr [rax], ymm0
                      vmovups ymm0, ymmword ptr [rcx+20h]
                      vmovups ymmword ptr [rax+20h], ymm0
                      vmovups ymm0, ymmword ptr [rcx+40h]
                      vmovups ymmword ptr [rax+40h], ymm0
                      vmovups xmm0, xmmword ptr [rcx+60h]
                      vmovups xmmword ptr [rax+60h], xmm0
                    }
                    _RAX += 128;
                    __asm
                    {
                      vmovups xmm1, xmmword ptr [rcx+70h]
                      vmovups xmmword ptr [rax-10h], xmm1
                    }
                    _RCX = (StreamUpdateMultiView *)((char *)_RCX + 128);
                    --v28;
                  }
                  while ( v28 );
                  __asm
                  {
                    vmovups ymm0, ymmword ptr [rcx]
                    vmovups ymmword ptr [rax], ymm0
                    vmovups ymm0, ymmword ptr [rcx+20h]
                    vmovups ymmword ptr [rax+20h], ymm0
                    vmovups xmm0, xmmword ptr [rcx+40h]
                    vmovups xmmword ptr [rax+40h], xmm0
                  }
                  Sys_AddWorkerCmd(WRKCMD_STREAM_UPDATE_WORLD_BSP_SURFS, data);
                  v67 = data;
                  v68 = WRKCMD_STREAM_UPDATE_STATIC_MODELS;
                }
                Sys_AddWorkerCmd(v68, v67);
              }
            }
          }
          Stream_ViewPos_MoveToNextFrame();
        }
        goto LABEL_105;
      }
      integer = Sys_InterlockedDecrement(&streamFrontendGlob->yieldFrameCount);
    }
    else
    {
      v6 = DCONST_DVARINT_stream_yieldFrameCount;
      if ( !DCONST_DVARINT_stream_yieldFrameCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_yieldFrameCount") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v6);
      integer = v6->current.integer;
      Sys_InterlockedExchange(&streamFrontendGlob->yieldFrameCount, integer);
    }
    if ( integer < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 2425, ASSERT_TYPE_ASSERT, "(yieldFrameCount >= 0)", (const char *)&queryFormat, "yieldFrameCount >= 0") )
      __debugbreak();
    goto LABEL_38;
  }
LABEL_105:
  ScopedStreamFrontendUpdateLock::~ScopedStreamFrontendUpdateLock(&v80);
  Sys_ProfEndNamedEvent();
}

/*
==============
Stream_CombineCmd
==============
*/
void Stream_CombineCmd(const void *const data)
{
  unsigned int v2; 
  const dvar_t *v3; 
  const dvar_t *v4; 
  unsigned int dataa; 

  Sys_ProfBeginNamedEvent(0xFF808080, "Stream_CombineCmd");
  dataa = *(_DWORD *)data;
  v2 = dataa >> 8;
  if ( (_BYTE)dataa )
  {
    Sys_ProfBeginNamedEvent(0xFF808080, "Stream_Combine: model to material");
    Stream_CombineTables_IterateModelToMaterial<void (*)(unsigned int,StreamDistance)>(&streamFrontendGlob->modelDistance, Stream_AddMaterialDistance);
    if ( *((_BYTE *)data + 1) )
    {
      LOBYTE(dataa) = 0;
      Sys_AddWorkerCmd(WRKCMD_STREAM_COMBINE, &dataa);
      Sys_ProfEndNamedEvent();
      goto LABEL_25;
    }
    Sys_ProfEndNamedEvent();
    LOBYTE(v2) = *((_BYTE *)data + 1);
  }
  if ( (_BYTE)v2 )
  {
    Sys_ProfBeginNamedEvent(0xFF808080, "Stream_Combine: material to image");
    Stream_CombineTables_IterateMaterialToImage<void (*)(unsigned int,StreamDistance)>(&streamFrontendGlob->materialDistance, Stream_AddImageDistance);
    if ( *((_BYTE *)data + 2) )
    {
      BYTE1(dataa) = 0;
      Sys_AddWorkerCmd(WRKCMD_STREAM_COMBINE, &dataa);
      Sys_ProfEndNamedEvent();
      goto LABEL_25;
    }
    Sys_ProfEndNamedEvent();
  }
  if ( *((_BYTE *)data + 2) )
  {
    v3 = DCONST_DVARBOOL_stream_enableHinting;
    if ( !DCONST_DVARBOOL_stream_enableHinting && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_enableHinting") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v3);
    if ( v3->current.enabled )
    {
      Sys_ProfBeginNamedEvent(0xFF808080, "Stream_Combine: image to parts");
      Stream_CombineDistanceImageToParts();
      if ( *((_BYTE *)data + 3) )
      {
        BYTE2(dataa) = 0;
        Sys_AddWorkerCmd(WRKCMD_STREAM_COMBINE, &dataa);
        Sys_ProfEndNamedEvent();
        goto LABEL_25;
      }
      Sys_ProfEndNamedEvent();
    }
  }
  if ( *((_BYTE *)data + 3) )
  {
    Sys_ProfBeginNamedEvent(0xFF808080, "Stream_UpdateRequests");
    v4 = DCONST_DVARBOOL_stream_enableHinting;
    if ( !DCONST_DVARBOOL_stream_enableHinting && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_enableHinting") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v4);
    if ( v4->current.enabled )
      Stream_UpdateRequests_Internal_1_();
    else
      Stream_UpdateRequests_Internal_0_();
    Sys_ProfEndNamedEvent();
  }
LABEL_25:
  Sys_ProfEndNamedEvent();
}

/*
==============
Stream_CombineDistanceImageToParts
==============
*/
void Stream_CombineDistanceImageToParts()
{
  __int64 v0; 
  const dvar_t *v2; 
  unsigned int v38; 
  unsigned int *mValueSet; 
  unsigned int i; 
  unsigned int v43; 
  int v44; 
  StreamDistance v45; 
  __int64 v46; 
  __int64 v47; 
  bool v48; 
  bool enabled; 
  unsigned int v50; 
  unsigned int index[8]; 
  __int128 v52; 
  int v53[10]; 

  v0 = tls_index;
  if ( dword_14F7BC57C > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1772i64) )
  {
    j__Init_thread_header(&dword_14F7BC57C);
    if ( dword_14F7BC57C == -1 )
    {
      naturalMin.mValue = 458762;
      j__Init_thread_footer(&dword_14F7BC57C);
    }
  }
  if ( dword_14F7BC584 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v0) + 1772i64) )
  {
    j__Init_thread_header(&dword_14F7BC584);
    if ( dword_14F7BC584 == -1 )
    {
      if ( naturalMin.mValue == -1 )
      {
        __asm { vmovss  xmm0, cs:__real@7f7fff80 }
      }
      else
      {
        v50 = naturalMin.mValue << 7;
        __asm { vmovss  xmm0, [rsp+0C8h+var_84] }
      }
      __asm { vmovss  cs:naturalMinFloat, xmm0 }
      j__Init_thread_footer(&dword_14F7BC584);
    }
  }
  v2 = DVARBOOL_stream_freqDomainMetricBiasEnable;
  if ( !DVARBOOL_stream_freqDomainMetricBiasEnable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_freqDomainMetricBiasEnable") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  __asm { vmovups xmm0, xmmword ptr cs:STREAM_PART_DISTANCE_SCALE_SQRD }
  enabled = v2->current.enabled;
  __asm { vmovups [rsp+0C8h+var_58], xmm0 }
  v48 = CL_TransientsWorldMP_UseLowAlwaysloadedFlagging();
  if ( streamFrontendGlob->loadSync.startTimeMs > 0 || streamFrontendGlob->loadSync.isActiveInFrontend )
  {
    __asm
    {
      vmovups xmm1, [rsp+0C8h+var_58]
      vmovups xmm0, cs:__xmm@3f8000003f8000003f80000000000000
      vinsertps xmm0, xmm0, xmm1, 0
      vmulps  xmm0, xmm1, xmm0
      vmovups [rsp+0C8h+var_58], xmm1
      vmovups [rsp+0C8h+var_58], xmm0
    }
  }
  _RBX = DCONST_DVARFLT_stream_distanceSemanticBias2D;
  if ( !DCONST_DVARFLT_stream_distanceSemanticBias2D && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_distanceSemanticBias2D") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm0, dword ptr [rbx+28h] }
  _RBX = DCONST_DVARFLT_stream_distanceSemanticBiasFunction;
  __asm
  {
    vmulss  xmm1, xmm0, xmm0
    vmovss  [rsp+0C8h+var_48], xmm1
  }
  if ( !DCONST_DVARFLT_stream_distanceSemanticBiasFunction && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_distanceSemanticBiasFunction") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm0, dword ptr [rbx+28h] }
  _RBX = DCONST_DVARFLT_stream_distanceSemanticBiasColor;
  __asm
  {
    vmulss  xmm1, xmm0, xmm0
    vmovss  [rsp+0C8h+var_44], xmm1
  }
  if ( !DCONST_DVARFLT_stream_distanceSemanticBiasColor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_distanceSemanticBiasColor") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm0, dword ptr [rbx+28h] }
  _RBX = DCONST_DVARFLT_stream_distanceSemanticBiasGray;
  __asm
  {
    vmulss  xmm1, xmm0, xmm0
    vmovss  [rsp+0C8h+var_40], xmm1
  }
  if ( !DCONST_DVARFLT_stream_distanceSemanticBiasGray && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_distanceSemanticBiasGray") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm0, dword ptr [rbx+28h] }
  _RBX = DCONST_DVARFLT_stream_distanceSemanticBiasSignedVelocity;
  __asm
  {
    vmulss  xmm1, xmm0, xmm0
    vmovss  [rsp+0C8h+var_3C], xmm1
  }
  if ( !DCONST_DVARFLT_stream_distanceSemanticBiasSignedVelocity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_distanceSemanticBiasSignedVelocity") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm0, dword ptr [rbx+28h] }
  _RBX = DCONST_DVARFLT_stream_distanceSemanticBiasNormal;
  __asm
  {
    vmulss  xmm1, xmm0, xmm0
    vmovss  [rsp+0C8h+var_38], xmm1
  }
  if ( !DCONST_DVARFLT_stream_distanceSemanticBiasNormal && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_distanceSemanticBiasNormal") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm0, dword ptr [rbx+28h] }
  _RBX = DCONST_DVARFLT_stream_distanceSemanticBiasMetalness;
  __asm
  {
    vmulss  xmm1, xmm0, xmm0
    vmovss  [rsp+0C8h+var_34], xmm1
  }
  if ( !DCONST_DVARFLT_stream_distanceSemanticBiasMetalness && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_distanceSemanticBiasMetalness") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm0, dword ptr [rbx+28h] }
  _RBX = DCONST_DVARFLT_stream_distanceSemanticBiasNormalOcclusionGloss;
  __asm
  {
    vmulss  xmm1, xmm0, xmm0
    vmovss  [rsp+0C8h+var_30], xmm1
  }
  if ( !DCONST_DVARFLT_stream_distanceSemanticBiasNormalOcclusionGloss && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_distanceSemanticBiasNormalOcclusionGloss") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm0, dword ptr [rbx+28h] }
  _RBX = DCONST_DVARFLT_stream_distanceSemanticBiasSignedDistanceField;
  __asm
  {
    vmulss  xmm1, xmm0, xmm0
    vmovss  [rsp+0C8h+var_2C], xmm1
  }
  if ( !DCONST_DVARFLT_stream_distanceSemanticBiasSignedDistanceField && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_distanceSemanticBiasSignedDistanceField") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm0, dword ptr [rbx+28h] }
  _RBX = DCONST_DVARFLT_stream_distanceSemanticBiasCardImposterNormal;
  __asm
  {
    vmulss  xmm1, xmm0, xmm0
    vmovss  [rsp+0C8h+var_28], xmm1
  }
  if ( !DCONST_DVARFLT_stream_distanceSemanticBiasCardImposterNormal && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_distanceSemanticBiasCardImposterNormal") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm0, dword ptr [rbx+28h] }
  *(_QWORD *)index = &v48;
  v38 = 0;
  *(_QWORD *)&index[2] = v53;
  *(_QWORD *)&index[4] = &enabled;
  mValueSet = streamFrontendGlob->imageDistance.mValueSet;
  __asm { vmulss  xmm1, xmm0, xmm0 }
  *(_QWORD *)&index[6] = &v52;
  __asm
  {
    vmovups ymm0, ymmword ptr [rsp+0C8h+index]
    vmovups ymmword ptr [rsp+0C8h+index], ymm0
    vmovss  [rsp+0C8h+var_24], xmm1
  }
  do
  {
    for ( i = *mValueSet; i; i &= ~v44 )
    {
      v43 = __lzcnt(i);
      v44 = 1 << ((31 - v43) & 0x1F);
      v45.mValue = v38 + 31 - v43;
      if ( v45.mValue >= 0x14000 )
      {
        LODWORD(v47) = 81920;
        LODWORD(v46) = v38 + 31 - v43;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_sortlist.h", 354, ASSERT_TYPE_ASSERT, "(unsigned)( assetIndex ) < (unsigned)( ( sizeof( *array_counter( mDistances ) ) + 0 ) )", "assetIndex doesn't index ARRAY_COUNT( mDistances )\n\t%i not in [0, %i)", v46, v47) )
          __debugbreak();
      }
      lambda_823bfb93df7c3d5e73323f4e7b5982a8_::operator()((unsigned int)index, v45);
    }
    v38 += 32;
    ++mValueSet;
  }
  while ( v38 < 0x14000 );
}

/*
==============
Stream_CurrentFrameIndex
==============
*/
__int64 Stream_CurrentFrameIndex()
{
  return streamFrontendGlob->globalScheduler.mFrame;
}

/*
==============
Stream_DecodeFreqDomainMetricBias
==============
*/

float __fastcall Stream_DecodeFreqDomainMetricBias(char freqDomainMetricBias, double _XMM1_8)
{
  char v6; 
  char v7; 
  double v31; 
  double v32; 
  double v33; 
  double v34; 
  double v35; 

  __asm
  {
    vmovaps [rsp+78h+var_18], xmm6
    vmovaps [rsp+78h+var_28], xmm7
  }
  if ( freqDomainMetricBias >= 0 )
  {
    if ( freqDomainMetricBias <= 0 )
    {
      __asm { vmovss  xmm0, cs:__real@3f800000 }
    }
    else
    {
      _RDI = DCONST_DVARFLT_stream_freqDomainMetricLowDistScale;
      if ( !DCONST_DVARFLT_stream_freqDomainMetricLowDistScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_freqDomainMetricLowDistScale") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RDI);
      __asm
      {
        vmovss  xmm7, dword ptr [rdi+28h]
        vmovss  xmm6, cs:__real@3f800000
        vcomiss xmm7, xmm6
      }
      if ( v6 )
      {
        __asm
        {
          vmovsd  xmm0, cs:__real@3ff0000000000000
          vmovsd  [rsp+78h+var_38], xmm0
          vcvtss2sd xmm1, xmm7, xmm7
          vmovsd  [rsp+78h+var_40], xmm1
        }
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 2201, ASSERT_TYPE_ASSERT, "( lowFreqBiasDistanceScaleMax ) >= ( 1.0f )", "%s >= %s\n\t%g, %g", "lowFreqBiasDistanceScaleMax", "1.0f", v34, v35) )
          __debugbreak();
      }
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm2, xmm0, cs:__real@3c010204
        vsubss  xmm1, xmm7, xmm6
        vmulss  xmm2, xmm2, xmm1
        vaddss  xmm0, xmm2, xmm6
      }
    }
  }
  else
  {
    _RDI = DCONST_DVARFLT_stream_freqDomainMetricHighDistScale;
    if ( !DCONST_DVARFLT_stream_freqDomainMetricHighDistScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_freqDomainMetricHighDistScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm
    {
      vmovss  xmm6, dword ptr [rdi+28h]
      vmovss  xmm7, cs:__real@3f800000
      vxorps  xmm0, xmm0, xmm0
      vcomiss xmm6, xmm0
    }
    if ( v6 )
      goto LABEL_7;
    __asm { vcomiss xmm6, xmm7 }
    if ( !(v6 | v7) )
    {
LABEL_7:
      __asm
      {
        vmovsd  xmm0, cs:__real@3ff0000000000000
        vmovsd  [rsp+78h+var_40], xmm0
        vxorpd  xmm1, xmm1, xmm1
        vmovsd  [rsp+78h+var_48], xmm1
        vcvtss2sd xmm2, xmm6, xmm6
        vmovsd  [rsp+78h+var_50], xmm2
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 2191, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( highFreqBiasDistanceScaleMin ) && ( highFreqBiasDistanceScaleMin ) <= ( 1.0f )", "highFreqBiasDistanceScaleMin not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", v31, v32, v33) )
        __debugbreak();
    }
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm2, xmm0, cs:__real@3c000000
      vsubss  xmm1, xmm7, xmm6
      vmulss  xmm0, xmm2, xmm1
      vsubss  xmm0, xmm7, xmm0
    }
  }
  __asm
  {
    vmovaps xmm6, [rsp+78h+var_18]
    vmovaps xmm7, [rsp+78h+var_28]
  }
  return *(float *)&_XMM0;
}

/*
==============
Stream_EndScreenUpdateFrame
==============
*/
void Stream_EndScreenUpdateFrame(void)
{
  if ( !Sys_IsUpdateScreenThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 895, ASSERT_TYPE_ASSERT, "(Sys_IsUpdateScreenThread())", (const char *)&queryFormat, "Sys_IsUpdateScreenThread()") )
    __debugbreak();
  streamFrontendGlob->frameState = END;
  Sys_WaitWorkerCmdsOnlyOfType(WRKCMD_STREAM_UPDATE_DYNAMIC_MODELS);
}

/*
==============
Stream_EndUpdateFrame
==============
*/
void Stream_EndUpdateFrame(bool forPushSyncDisable)
{
  volatile int *p_isEndingUpdateFrame; 

  if ( s_beginScreenUpdateFrameThread != Sys_GetCurrentThreadId() && !forPushSyncDisable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 780, ASSERT_TYPE_ASSERT, "(Stream_IsBeginScreenUpdateFrameThread() || forPushSyncDisable)", (const char *)&queryFormat, "Stream_IsBeginScreenUpdateFrameThread() || forPushSyncDisable") )
    __debugbreak();
  Stream_CheckFrontendUpdateLocks();
  if ( streamFrontendGlob->updateFrameInProgress )
  {
    p_isEndingUpdateFrame = &streamFrontendGlob->isEndingUpdateFrame;
    if ( (((_BYTE)streamFrontendGlob + 60) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)p_isEndingUpdateFrame) )
      __debugbreak();
    if ( _InterlockedIncrement(p_isEndingUpdateFrame) == 1 )
    {
      Stream_EndUpdateFrameInternal(forPushSyncDisable);
      if ( streamFrontendGlob->isEndingUpdateFrame < 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 795, ASSERT_TYPE_ASSERT, "( streamFrontendGlob->isEndingUpdateFrame ) >= ( 1 )", "%s >= %s\n\t%i, %i", "streamFrontendGlob->isEndingUpdateFrame", "1", streamFrontendGlob->isEndingUpdateFrame, 1) )
        __debugbreak();
      Sys_InterlockedDecrement(&streamFrontendGlob->isEndingUpdateFrame);
    }
    else
    {
      if ( streamFrontendGlob->isEndingUpdateFrame < 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 800, ASSERT_TYPE_ASSERT, "( streamFrontendGlob->isEndingUpdateFrame ) >= ( 1 )", "%s >= %s\n\t%i, %i", "streamFrontendGlob->isEndingUpdateFrame", "1", streamFrontendGlob->isEndingUpdateFrame, 1) )
        __debugbreak();
      Sys_InterlockedDecrement(&streamFrontendGlob->isEndingUpdateFrame);
      Sys_ProcessWorkerCmdsWithTimeout(lambda_4c6a582810900cddbcadf2959537b505_::_lambda_invoker_cdecl_, NULL);
    }
  }
}

/*
==============
Stream_EndUpdateFrameInternal
==============
*/
void Stream_EndUpdateFrameInternal(bool forPushSyncDisable)
{
  unsigned int mSubFrame; 
  unsigned int v3; 
  bool v4; 
  unsigned int sortListReadBuildCounter; 
  __int64 v6; 
  __int64 v7; 
  _DWORD *v8; 
  _DWORD *v9; 
  StreamFrontendGlob *v10; 
  StreamFrontendGlob *v11; 
  StreamFrontendGlob *v12; 
  StreamFrontendGlob *v13; 
  bitarray<81920> *p_mValueSet; 
  __int64 v15; 
  StreamSortListFrame *v16; 
  __int64 v17; 
  ScopedTempReleaseStreamerFrontendLock v18; 

  if ( s_beginScreenUpdateFrameThread != Sys_GetCurrentThreadId() && !forPushSyncDisable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 660, ASSERT_TYPE_ASSERT, "(Stream_IsBeginScreenUpdateFrameThread() || forPushSyncDisable)", (const char *)&queryFormat, "Stream_IsBeginScreenUpdateFrameThread() || forPushSyncDisable") )
    __debugbreak();
  if ( !streamFrontendGlob->updateFrameInProgress && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 661, ASSERT_TYPE_ASSERT, "(streamFrontendGlob->updateFrameInProgress)", (const char *)&queryFormat, "streamFrontendGlob->updateFrameInProgress") )
    __debugbreak();
  if ( streamFrontendGlob->numClientsThisFrame < 0 )
  {
    LODWORD(v17) = streamFrontendGlob->numClientsThisFrame;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 662, ASSERT_TYPE_ASSERT, "( ( streamFrontendGlob->numClientsThisFrame >= 0 ) )", "( streamFrontendGlob->numClientsThisFrame ) = %i", v17) )
      __debugbreak();
  }
  Stream_CheckFrontendUpdateLocks();
  streamFrontendGlob->updateFrameInProgress = 0;
  streamFrontendGlob->numClientsLastFrame = streamFrontendGlob->numClientsThisFrame;
  streamFrontendGlob->numClientsThisFrame = -1;
  mSubFrame = streamFrontendGlob->globalScheduler.mSubFrame;
  v3 = streamFrontendGlob->globalScheduler.mCombineSubFrameCount + streamFrontendGlob->globalScheduler.mSortSubframeCount + streamFrontendGlob->globalScheduler.mUpdateSubFrameCount - 1;
  v4 = mSubFrame == v3 || forPushSyncDisable;
  if ( mSubFrame == v3 )
  {
    sortListReadBuildCounter = streamFrontendGlob->sortListReadBuildCounter;
    if ( sortListReadBuildCounter == -1 )
      streamFrontendGlob->sortListReadBuildCounter = 1;
    else
      streamFrontendGlob->sortListReadBuildCounter = sortListReadBuildCounter + 1;
    streamFrontendGlob->sortLists[streamFrontendGlob->sortListWrite].sortListBuildIndex = streamFrontendGlob->sortListReadBuildCounter;
    streamFrontendGlob->sortListRead = streamFrontendGlob->sortListWrite;
  }
  Sys_ProfBeginNamedEvent(0xFF808080, "streamer frontend wait");
  ScopedTempReleaseStreamerFrontendLock::ScopedTempReleaseStreamerFrontendLock(&v18);
  Sys_WaitStreamFrontendUpdateWorkerCmds();
  if ( mSubFrame == v3 )
    Sys_ProcessWorkerCmdsWithTimeout(lambda_9173c41b1d59d5cbd7146a335a292d51_::_lambda_invoker_cdecl_, NULL);
  ScopedTempReleaseStreamerFrontendLock::~ScopedTempReleaseStreamerFrontendLock(&v18);
  Sys_ProfEndNamedEvent();
  Stream_CheckFrontendUpdateLocks();
  if ( Sys_HasPendingStreamFrontendUpdateWorkerCmds() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 729, ASSERT_TYPE_ASSERT, "(!Sys_HasPendingStreamFrontendUpdateWorkerCmds())", (const char *)&queryFormat, "!Sys_HasPendingStreamFrontendUpdateWorkerCmds()") )
    __debugbreak();
  if ( v4 )
  {
    if ( mSubFrame == v3 )
    {
      Stream_Debug_EndOfFullUpdateFrame();
      if ( !forPushSyncDisable )
      {
        Stream_ImageRecord_CopyImagePartDistances(&streamFrontendGlob->sortLists[streamFrontendGlob->sortListRead]);
        Stream_ImageRecord_TriggerTimedReportIfReady();
      }
      v6 = ((unsigned __int8)streamFrontendGlob->sortListWrite - 1) & 1;
      v7 = 4 * v6 + 12151568;
      v8 = (_DWORD *)((char *)streamFrontendGlob + v7);
      if ( (((_BYTE)v7 + (_BYTE)streamFrontendGlob) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 141, ASSERT_TYPE_ASSERT, "( ( IsAligned( addr, sizeof( volatile_int32 ) ) ) )", "( addr ) = %p", (char *)streamFrontendGlob + v7) )
        __debugbreak();
      if ( *v8 )
      {
        v9 = (_DWORD *)((char *)streamFrontendGlob + v7);
        if ( (((_BYTE)v7 + (_BYTE)streamFrontendGlob) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 141, ASSERT_TYPE_ASSERT, "( ( IsAligned( addr, sizeof( volatile_int32 ) ) ) )", "( addr ) = %p", (char *)streamFrontendGlob + v7) )
          __debugbreak();
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 758, ASSERT_TYPE_ASSERT, "( Sys_InterlockedLoad( &streamFrontendGlob->sortListReadLock[nextWriteFrame] ) ) == ( 0 )", "%s == %s\n\t%i, %i", "Sys_InterlockedLoad( &streamFrontendGlob->sortListReadLock[nextWriteFrame] )", "0", *v9, 0i64) )
          __debugbreak();
      }
      streamFrontendGlob->sortListWrite = v6;
      streamFrontendGlob->sortListValid = 1;
    }
    v10 = streamFrontendGlob;
    memset_0(streamFrontendGlob, 255, 0x18000ui64);
    memset_0(v10->modelDistance.mValueSet, 0, sizeof(v10->modelDistance.mValueSet));
    v11 = streamFrontendGlob;
    memset_0(&streamFrontendGlob->materialDistance, 255, 0x2D000ui64);
    memset_0(v11->materialDistance.mValueSet, 0, sizeof(v11->materialDistance.mValueSet));
    v12 = streamFrontendGlob;
    memset_0(&streamFrontendGlob->imageDistance, 255, 0x50000ui64);
    memset_0(v12->imageDistance.mValueSet, 0, sizeof(v12->imageDistance.mValueSet));
    v13 = streamFrontendGlob;
    memset_0(&streamFrontendGlob->imageDistanceHint, 255, 0x14000ui64);
    p_mValueSet = &v13->imageDistanceHint.mValueSet;
    v15 = 160i64;
    do
    {
      *(_QWORD *)p_mValueSet->array = 0i64;
      *(_QWORD *)&p_mValueSet->array[2] = 0i64;
      *(_QWORD *)&p_mValueSet->array[4] = 0i64;
      p_mValueSet = (bitarray<81920> *)((char *)p_mValueSet + 64);
      *(_QWORD *)&p_mValueSet[-1].array[2550] = 0i64;
      *(_QWORD *)&p_mValueSet[-1].array[2552] = 0i64;
      *(_QWORD *)&p_mValueSet[-1].array[2554] = 0i64;
      *(_QWORD *)&p_mValueSet[-1].array[2556] = 0i64;
      *(_QWORD *)&p_mValueSet[-1].array[2558] = 0i64;
      --v15;
    }
    while ( v15 );
    v16 = &streamFrontendGlob->sortLists[streamFrontendGlob->sortListWrite];
    memset_0(v16, 255, 0x140000ui64);
    memset_0(v16->imagePartDistance.mValueSet, 0, sizeof(v16->imagePartDistance.mValueSet));
  }
}

/*
==============
Stream_GetCustomImageDistanceSqBias
==============
*/
float Stream_GetCustomImageDistanceSqBias(unsigned int imageIndex)
{
  unsigned int v1; 

  v1 = 3 * imageIndex;
  if ( bitarray_base<bitarray<245760>>::testBit(&streamFrontendGlob->specialImagesTable, 3 * imageIndex + 1) )
  {
    _RBX = DVARFLT_stream_distanceBiasNormalMapFoliageCardImposter;
    if ( !DVARFLT_stream_distanceBiasNormalMapFoliageCardImposter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_distanceBiasNormalMapFoliageCardImposter") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm0, dword ptr [rbx+28h] }
  }
  else if ( bitarray_base<bitarray<245760>>::testBit(&streamFrontendGlob->specialImagesTable, v1 + 2) )
  {
    _RBX = DVARFLT_stream_distanceBiasOtherFoliageCardImposter;
    if ( !DVARFLT_stream_distanceBiasOtherFoliageCardImposter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_distanceBiasOtherFoliageCardImposter") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm0, dword ptr [rbx+28h] }
  }
  else
  {
    __asm { vmovss  xmm0, cs:__real@3f800000 }
  }
  return *(float *)&_XMM0;
}

/*
==============
Stream_GetMinViewDistanceToClutter
==============
*/
float Stream_GetMinViewDistanceToClutter(unsigned int viewIndex)
{
  int v6; 

  _RBX = viewIndex;
  if ( viewIndex >= 2 )
  {
    v6 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 1578, ASSERT_TYPE_ASSERT, "(unsigned)( viewIndex ) < (unsigned)( ( sizeof( *array_counter( streamFrontendGlob->minDistanceToClutter ) ) + 0 ) )", "viewIndex doesn't index streamFrontendGlob->minDistanceToClutter\n\t%i not in [0, %i)", viewIndex, v6) )
      __debugbreak();
  }
  _RAX = streamFrontendGlob;
  __asm { vmovss  xmm0, dword ptr [rax+rbx*4+0B97260h] }
  return *(float *)&_XMM0;
}

/*
==============
Stream_IsBeginScreenUpdateFrameThread
==============
*/
bool Stream_IsBeginScreenUpdateFrameThread()
{
  return s_beginScreenUpdateFrameThread == Sys_GetCurrentThreadId();
}

/*
==============
Stream_KickoffCombineAndSort
==============
*/
void Stream_KickoffCombineAndSort()
{
  StreamFrontendGlob *v0; 
  StreamUpdateScheduler *p_globalScheduler; 
  __int64 v2; 
  bool data; 
  bool ShouldCombineModelsToImages; 
  bool v5; 
  bool ShouldCombineImagesToParts; 

  Stream_CheckFrontendUpdateLocks();
  v0 = streamFrontendGlob;
  if ( (unsigned int)(streamFrontendGlob->frameState - 2) > 1 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 2496, ASSERT_TYPE_ASSERT, "(streamFrontendGlob->frameState == StreamFrameState::UPDATE_FOR_FRONTEND || streamFrontendGlob->frameState == StreamFrameState::UPDATE_FOR_CLIENT)", (const char *)&queryFormat, "streamFrontendGlob->frameState == StreamFrameState::UPDATE_FOR_FRONTEND || streamFrontendGlob->frameState == StreamFrameState::UPDATE_FOR_CLIENT") )
      __debugbreak();
    v0 = streamFrontendGlob;
  }
  if ( v0->frameState == UPDATE_FOR_CLIENT && v0->numClientsThisFrame <= 0 )
  {
    LODWORD(v2) = v0->numClientsThisFrame;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 2499, ASSERT_TYPE_ASSERT, "( ( streamFrontendGlob->numClientsThisFrame > 0 ) )", "( streamFrontendGlob->numClientsThisFrame ) = %i", v2) )
      __debugbreak();
    v0 = streamFrontendGlob;
  }
  if ( v0->numClientsThisFrame == v0->numClientsLastFrame && (unsigned int)(v0->levelInit.state - 3) <= 1 )
  {
    p_globalScheduler = &v0->globalScheduler;
    if ( StreamUpdateScheduler::ShouldCombineModelsToImages(&v0->globalScheduler) || StreamUpdateScheduler::ShouldCombineImagesToParts(p_globalScheduler) )
    {
      ShouldCombineModelsToImages = StreamUpdateScheduler::ShouldCombineModelsToImages(&streamFrontendGlob->globalScheduler);
      data = ShouldCombineModelsToImages;
      ShouldCombineImagesToParts = StreamUpdateScheduler::ShouldCombineImagesToParts(&streamFrontendGlob->globalScheduler);
      v5 = ShouldCombineImagesToParts;
      Sys_AddWorkerCmd(WRKCMD_STREAM_COMBINE, &data);
    }
    if ( streamFrontendGlob->globalScheduler.mSubFrame == streamFrontendGlob->globalScheduler.mCombineSubFrameCount + streamFrontendGlob->globalScheduler.mSortSubframeCount + streamFrontendGlob->globalScheduler.mUpdateSubFrameCount - 1 )
      Stream_KickoffSort();
  }
}

/*
==============
Stream_KickoffDynamicUpdate
==============
*/
void Stream_KickoffDynamicUpdate(unsigned int clientIndex, unsigned int viewInfoIndex, bool iterateSceneEntities)
{
  unsigned int mUpdateSubFrameCount; 
  int data[4]; 
  StreamUpdateMultiView multiView; 
  unsigned int v9; 
  unsigned int v10; 
  bool v11; 

  Stream_CheckFrontendUpdateLocks();
  if ( rgp.world )
  {
    mUpdateSubFrameCount = streamFrontendGlob->globalScheduler.mUpdateSubFrameCount;
    if ( streamFrontendGlob->globalScheduler.mSubFrame < mUpdateSubFrameCount && streamFrontendGlob->numClientsThisFrame < streamFrontendGlob->numClientsLastFrame )
    {
      data[0] = streamFrontendGlob->globalScheduler.mSubFrame;
      data[1] = mUpdateSubFrameCount;
      v9 = clientIndex;
      v10 = viewInfoIndex;
      v11 = iterateSceneEntities;
      memset_0(&multiView, 0, sizeof(multiView));
      Stream_ViewPos_GetDynamicMultiView(clientIndex, &multiView);
      if ( multiView.viewCount )
      {
        Sys_AddWorkerCmd(WRKCMD_STREAM_UPDATE_DYNAMIC_MODELS, data);
        R_DecalVolumes_SetStreamMultiview(&multiView);
      }
    }
  }
}

/*
==============
Stream_OnNewImagesAdded
==============
*/
void Stream_OnNewImagesAdded(void)
{
  __int64 v0; 
  bitarray<245760> *p_specialImagesTable; 

  v0 = 480i64;
  p_specialImagesTable = &streamFrontendGlob->specialImagesTable;
  do
  {
    *(_QWORD *)p_specialImagesTable->array = 0i64;
    *(_QWORD *)&p_specialImagesTable->array[2] = 0i64;
    *(_QWORD *)&p_specialImagesTable->array[4] = 0i64;
    p_specialImagesTable = (bitarray<245760> *)((char *)p_specialImagesTable + 64);
    *(_QWORD *)&p_specialImagesTable[-1].array[7670] = 0i64;
    *(_QWORD *)&p_specialImagesTable[-1].array[7672] = 0i64;
    *(_QWORD *)&p_specialImagesTable[-1].array[7674] = 0i64;
    *(_QWORD *)&p_specialImagesTable[-1].array[7676] = 0i64;
    *(_QWORD *)&p_specialImagesTable[-1].array[7678] = 0i64;
    --v0;
  }
  while ( v0 );
  DB_EnumXAssets(ASSET_TYPE_IMAGE, Stream_AnalyzeImage, NULL, 0);
}

/*
==============
Stream_ShouldUseXModelStreamTree
==============
*/
bool Stream_ShouldUseXModelStreamTree()
{
  const dvar_t *v0; 

  v0 = DCONST_DVARBOOL_stream_xmodelTreeEnable;
  if ( !DCONST_DVARBOOL_stream_xmodelTreeEnable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_xmodelTreeEnable") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  return v0->current.enabled && rgp.world && rgp.world->xmodelStreamTreeGrid.version == 1 && rgp.world->xmodelStreamTreeGrid.xmodelCount;
}

/*
==============
Stream_UpdateAllRequestFlags
==============
*/
void Stream_UpdateAllRequestFlags(StreamableBits *bits, RequestBits *request, CriticalSection critSec)
{
  StreamableBits *v5; 
  __int64 v6; 
  __int64 v7; 
  unsigned int v8; 
  unsigned int v9; 
  unsigned int v10; 
  unsigned int v11; 
  int v12; 
  __int64 v13; 
  __int64 v14; 
  __int64 v15; 
  unsigned int mFrame; 
  ScopedCriticalSection v17; 
  int i; 

  v5 = bits;
  Sys_ProfBeginNamedEvent(0xFF808080, "Stream_UpdateAllRequestFlags");
  mFrame = streamFrontendGlob->globalScheduler.mFrame;
  ScopedCriticalSection::ScopedCriticalSection(&v17, critSec, SCOPED_CRITSECT_NORMAL);
  v6 = 0i64;
  for ( i = 0; (unsigned int)v6 < v5->mWordCount; i = v6 )
  {
    v7 = (int)v6;
    v8 = v5->mUse[v7];
    if ( (unsigned int)v6 >= v5->mWordCount )
    {
      LODWORD(v15) = v5->mWordCount;
      LODWORD(v14) = v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 596, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( mWordCount )", "index doesn't index mWordCount\n\t%i not in [0, %i)", v14, v15) )
        __debugbreak();
    }
    v9 = v5->mLoaded[v7] & (v5->mStaticForced[v7] | request->bitsStable[v6]);
    if ( v8 )
    {
      do
      {
        v10 = __lzcnt(v8);
        v11 = 31 - v10;
        v12 = 1 << ((31 - v10) & 0x1F);
        if ( (v12 & v8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 280, ASSERT_TYPE_ASSERT, "(useBits & mask)", (const char *)&queryFormat, "useBits & mask") )
          __debugbreak();
        v8 &= ~v12;
        v13 = 32 * (_DWORD)v6 + v11;
        if ( (v12 & v9) != 0 )
        {
          if ( !RequestBits::CheckDanger(request, v13) )
            StreamableBitArray_InterlockedClearArray(request->mFreeable, v13);
        }
        else if ( mFrame - request->frame[v13] > 0xF && !RequestBits::CheckDanger(request, v13) )
        {
          StreamableBitArray_InterlockedSetArray(request->mFreeable, v13);
        }
      }
      while ( v8 );
      LODWORD(v6) = i;
      v5 = bits;
    }
    v6 = (unsigned int)(v6 + 1);
  }
  ScopedCriticalSection::~ScopedCriticalSection(&v17);
  Sys_ProfEndNamedEvent();
}

/*
==============
Stream_UpdateDynamicModelsCmd
==============
*/
void Stream_UpdateDynamicModelsCmd(const void *const data)
{
  unsigned int v3; 
  int v4; 
  __int64 v5; 
  __int64 v6; 
  unsigned int i; 
  unsigned int v8; 
  unsigned int v9; 
  char v12; 
  unsigned int v13; 
  unsigned int v14; 
  unsigned int v15; 
  const dvar_t *v16; 
  StreamSortListFrame *v17; 
  __int64 GfxImageIndex; 
  unsigned int v20; 
  const dvar_t *v21; 
  StreamFrontendGlob *v22; 
  StreamFrontendGlob *v23; 
  unsigned int v24; 
  unsigned int v25; 
  __int64 v26; 
  __int64 v28; 
  __int64 v29; 
  StreamImageMip outRequestedMip; 
  unsigned int v31; 
  unsigned int v32; 
  GfxImage *outImage[4]; 
  unsigned int high; 
  unsigned int low; 
  float outDistance; 
  unsigned int v38; 

  outImage[1] = (GfxImage *)-2i64;
  __asm { vmovaps [rsp+0C8h+var_58], xmm6 }
  Sys_ProfBeginNamedEvent(0xFF808080, "Stream_UpdateDynamicModelsCmd");
  if ( !*((_DWORD *)data + 276) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 3001, ASSERT_TYPE_ASSERT, "(cmd->multiView.viewCount)", (const char *)&queryFormat, "cmd->multiView.viewCount") )
    __debugbreak();
  if ( *((_DWORD *)data + 276) > 0x10u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 3002, ASSERT_TYPE_ASSERT, "(cmd->multiView.viewCount <= ( sizeof( *array_counter( cmd->multiView.viewPos ) ) + 0 ))", (const char *)&queryFormat, "cmd->multiView.viewCount <= ARRAY_COUNT( cmd->multiView.viewPos )") )
    __debugbreak();
  if ( streamFrontendGlob->loadSync.startTimeMs > 0 || streamFrontendGlob->loadSync.isActiveInFrontend )
  {
    if ( streamFrontendGlob->gameMode[0] == 1 )
      StreamSP_UpdateDynamic_ServerEntities((const StreamDynamicUpdateCmd *)data);
    Stream_UpdateDynamic_DynEntsAll((const StreamDynamicUpdateCmd *)data);
  }
  v3 = 511;
  if ( !*((_BYTE *)data + 1128) )
    v3 = 440;
  v4 = *(_DWORD *)data;
  v5 = *((int *)data + 280);
  if ( (unsigned int)v5 >= 2 )
  {
    LODWORD(v28) = *((_DWORD *)data + 280);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 3034, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( ( sizeof( *array_counter( streamFrontendGlob->globalScheduler.m_subframeIndicesForEachDynamicSubtask ) ) + 0 ) )", "clientIndex doesn't index ARRAY_COUNT( streamFrontendGlob->globalScheduler.m_subframeIndicesForEachDynamicSubtask )\n\t%i not in [0, %i)", v28, 2) )
      __debugbreak();
  }
  if ( !v4 )
    Stream_UpdateDynamicModels_ScheduleSubtasks((const StreamDynamicUpdateCmd *)data, v3, (unsigned int (*)[9])streamFrontendGlob->globalScheduler.m_subframeIndicesForEachDynamicSubtask[v5]);
  LODWORD(v6) = 0;
  for ( i = 0; i < 9; ++i )
  {
    if ( _bittest((const int *)&v3, i) )
    {
      if ( Stream_UpdateDynamicModels_ScheduledForSubtask((LocalClientNum_t)v5, v4, (StreamUpdateScheduler::DynamicSubtask)i) )
        s_streamUpdateDynamicFuncs[i]((const StreamDynamicUpdateCmd *)data);
    }
  }
  R_DecalVolumes_ManageAtlas();
  v8 = R_DecalVolumes_BeginRequestImageMips();
  v31 = v8;
  v9 = 0;
  v38 = 0;
  if ( v8 )
  {
    __asm { vxorps  xmm6, xmm6, xmm6 }
    do
    {
      if ( R_DecalVolumes_GetRequestedImageMip(v9, (const GfxImage **)outImage, &outRequestedMip, &outDistance) )
      {
        if ( !outImage[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 3071, ASSERT_TYPE_ASSERT, "(image != nullptr)", (const char *)&queryFormat, "image != nullptr") )
          __debugbreak();
        Stream_UsedImage(outImage[0]);
        __asm
        {
          vmovss  xmm0, [rsp+0C8h+outDistance]
          vcomiss xmm0, xmm6
        }
        if ( v12 )
        {
          Stream_GetImageStreamedPartsRange(outImage[0], outRequestedMip, &low, &high);
          if ( low >= 0x50000 )
          {
            LODWORD(v29) = 327680;
            LODWORD(v28) = low;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 3079, ASSERT_TYPE_ASSERT, "(unsigned)( lowPartIndex ) < (unsigned)( TOTAL_IMAGE_PARTS )", "lowPartIndex doesn't index TOTAL_IMAGE_PARTS\n\t%i not in [0, %i)", v28, v29) )
              __debugbreak();
          }
          v13 = high;
          if ( high >= 0x50000 )
          {
            LODWORD(v29) = 327680;
            LODWORD(v28) = high;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 3080, ASSERT_TYPE_ASSERT, "(unsigned)( highPartIndex ) < (unsigned)( TOTAL_IMAGE_PARTS )", "highPartIndex doesn't index TOTAL_IMAGE_PARTS\n\t%i not in [0, %i)", v28, v29) )
              __debugbreak();
            v13 = high;
          }
          v14 = low;
          if ( low < v13 )
          {
            do
            {
              v15 = (v14 & 3) + 65542;
              if ( v14 >= 0x50000 )
              {
                LODWORD(v29) = 327680;
                LODWORD(v28) = v14;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_internal.h", 407, ASSERT_TYPE_ASSERT, "(unsigned)( imagePartIndex ) < (unsigned)( TOTAL_IMAGE_PARTS )", "imagePartIndex doesn't index TOTAL_IMAGE_PARTS\n\t%i not in [0, %i)", v28, v29) )
                  __debugbreak();
              }
              v16 = DCONST_DVARBOOL_stream_pedanticAddImageChecks;
              if ( !DCONST_DVARBOOL_stream_pedanticAddImageChecks && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_pedanticAddImageChecks") )
                __debugbreak();
              Dvar_CheckFrontendServerThread(v16);
              if ( v16->current.enabled && (DB_GetGfxImageAtIndex(v14 >> 2)->flags & 0x40) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_internal.h", 412, ASSERT_TYPE_ASSERT, "(R_IsStreamedImage( image ))", (const char *)&queryFormat, "R_IsStreamedImage( image )") )
                __debugbreak();
              v17 = &streamFrontendGlob->sortLists[streamFrontendGlob->sortListWrite];
              if ( v14 >= 0x50000 )
              {
                LODWORD(v29) = 327680;
                LODWORD(v28) = v14;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_sortlist.h", 366, ASSERT_TYPE_ASSERT, "(unsigned)( assetIndex ) < (unsigned)( ( sizeof( *array_counter( mDistances ) ) + 0 ) )", "assetIndex doesn't index ARRAY_COUNT( mDistances )\n\t%i not in [0, %i)", v28, v29) )
                  __debugbreak();
              }
              if ( v15 < v17->imagePartDistance.mDistances[v14].mValue )
                v17->imagePartDistance.mDistances[v14].mValue = v15;
              Com_BitSetAssert(v17->imagePartDistance.mValueSet, v14++, 40960);
            }
            while ( v14 < high );
            v9 = v38;
            v8 = v31;
          }
        }
        else
        {
          GfxImageIndex = DB_GetGfxImageIndex(outImage[0]);
          __asm
          {
            vmovss  xmm0, [rsp+0C8h+outDistance]
            vmovss  [rsp+0C8h+var_80], xmm0
            vmovss  [rsp+0C8h+arg_18], xmm0
          }
          if ( (v38 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_distance.h", 188, ASSERT_TYPE_SANITY, "( !IS_NAN( distance ) )", (const char *)&queryFormat, "!IS_NAN( distance )") )
            __debugbreak();
          v20 = v32 >> 7;
          if ( (unsigned int)GfxImageIndex >= 0x14000 )
          {
            LODWORD(v29) = 81920;
            LODWORD(v28) = GfxImageIndex;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_internal.h", 421, ASSERT_TYPE_ASSERT, "(unsigned)( imageIndex ) < (unsigned)( IMAGE_POOL_SIZE )", "imageIndex doesn't index IMAGE_POOL_SIZE\n\t%i not in [0, %i)", v28, v29) )
              __debugbreak();
          }
          v21 = DCONST_DVARBOOL_stream_pedanticAddImageChecks;
          if ( !DCONST_DVARBOOL_stream_pedanticAddImageChecks && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_pedanticAddImageChecks") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v21);
          if ( v21->current.enabled && (DB_GetGfxImageAtIndex(GfxImageIndex)->flags & 0x40) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_internal.h", 426, ASSERT_TYPE_ASSERT, "(R_IsStreamedImage( image ))", (const char *)&queryFormat, "R_IsStreamedImage( image )") )
            __debugbreak();
          v22 = streamFrontendGlob;
          if ( (unsigned int)GfxImageIndex >= 0x14000 )
          {
            LODWORD(v29) = 81920;
            LODWORD(v28) = GfxImageIndex;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_sortlist.h", 366, ASSERT_TYPE_ASSERT, "(unsigned)( assetIndex ) < (unsigned)( ( sizeof( *array_counter( mDistances ) ) + 0 ) )", "assetIndex doesn't index ARRAY_COUNT( mDistances )\n\t%i not in [0, %i)", v28, v29) )
              __debugbreak();
          }
          if ( v20 < v22->imageDistance.mDistances[GfxImageIndex].mValue )
            v22->imageDistance.mDistances[GfxImageIndex].mValue = v20;
          Com_BitSetAssert(v22->imageDistance.mValueSet, GfxImageIndex, 10240);
        }
      }
      v38 = ++v9;
    }
    while ( v9 < v8 );
    LODWORD(v6) = 0;
  }
  R_DecalVolumes_EndRequestImageMips();
  v23 = streamFrontendGlob;
  v24 = streamFrontendGlob->imageDistanceHint.mValueSet.array[0];
  while ( v24 )
  {
LABEL_82:
    v25 = __lzcnt(v24);
    v26 = v25 + 32 * (_DWORD)v6;
    if ( v25 >= 0x20 )
    {
      LODWORD(v29) = 32;
      LODWORD(v28) = v25;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v28, v29) )
        __debugbreak();
    }
    if ( (v24 & (0x80000000 >> v25)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
      __debugbreak();
    v24 &= ~(0x80000000 >> v25);
    if ( (unsigned int)v26 >= 0x14000 )
    {
      LODWORD(v29) = 81920;
      LODWORD(v28) = v25 + 32 * v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_hint.h", 44, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( sizeof( *array_counter( mDistances ) ) + 0 ) )", "index doesn't index ARRAY_COUNT( mDistances )\n\t%i not in [0, %i)", v28, v29) )
        __debugbreak();
    }
    Stream_UpdateDynamicModelsCmd_AddImageDistanceHint(v26, v23->imageDistanceHint.mDistances[v26]);
  }
  while ( 1 )
  {
    v6 = (unsigned int)(v6 + 1);
    if ( (unsigned int)v6 >= 0xA00 )
      break;
    v24 = v23->imageDistanceHint.mValueSet.array[v6];
    if ( v24 )
      goto LABEL_82;
  }
  Sys_ProfEndNamedEvent();
  __asm { vmovaps xmm6, [rsp+0C8h+var_58] }
}

/*
==============
Stream_UpdateDynamicModelsCmd_AddImageDistanceHint
==============
*/
void Stream_UpdateDynamicModelsCmd_AddImageDistanceHint(const unsigned int imageIndex, const StreamMiniDistance distance)
{
  GfxImage *GfxImageAtIndex; 
  int v8; 
  unsigned int v9; 

  GfxImageAtIndex = DB_GetGfxImageAtIndex(imageIndex);
  if ( !GfxImageAtIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 2989, ASSERT_TYPE_ASSERT, "(image)", (const char *)&queryFormat, "image") )
    __debugbreak();
  if ( (GfxImageAtIndex->flags & 0x40) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 2990, ASSERT_TYPE_ASSERT, "(R_IsStreamedImage( image ))", (const char *)&queryFormat, "R_IsStreamedImage( image )") )
    __debugbreak();
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm1, xmm0, cs:__real@3c20a0a1
    vmovss  [rsp+48h+arg_8], xmm1
    vmovss  [rsp+48h+arg_10], xmm1
  }
  if ( (v8 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_distance.h", 188, ASSERT_TYPE_SANITY, "( !IS_NAN( distance ) )", (const char *)&queryFormat, "!IS_NAN( distance )") )
    __debugbreak();
  Stream_AddImageDistance(imageIndex, (StreamDistance)(v9 >> 7));
}

/*
==============
Stream_UpdateDynamicModelsNeedsToWait
==============
*/
bool Stream_UpdateDynamicModelsNeedsToWait(const void *const data)
{
  int v1; 
  __int64 v3; 
  __int64 v5; 
  int v6; 
  __int64 v7; 
  int v8; 

  v1 = *(_DWORD *)data;
  v3 = *((int *)data + 280);
  if ( Sys_HasPendingWorkerCmdOfType(WRKCMD_STREAM_UPDATE_WORLD_BSP_SURFS) || Sys_HasPendingWorkerCmdOfType(WRKCMD_STREAM_UPDATE_STREAM_TREE) || Sys_HasPendingWorkerCmdOfType(WRKCMD_STREAM_TRAVERSE_MATERIAL_ZONE) )
    return 1;
  if ( *((_BYTE *)data + 1128) )
  {
    if ( !v1 )
      goto LABEL_36;
    if ( (unsigned int)v3 >= 2 )
    {
      v8 = 2;
      v6 = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 2871, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( ( sizeof( *array_counter( streamFrontendGlob->globalScheduler.m_subframeIndicesForEachDynamicSubtask ) ) + 0 ) )", "clientIndex doesn't index ARRAY_COUNT( streamFrontendGlob->globalScheduler.m_subframeIndicesForEachDynamicSubtask )\n\t%i not in [0, %i)", v6, v8) )
        __debugbreak();
    }
    if ( v1 == streamFrontendGlob->globalScheduler.m_subframeIndicesForEachDynamicSubtask[v3][1] )
    {
LABEL_36:
      if ( Sys_HasPendingWorkerCmdOfType(WRKCMD_UPDATE_FX_PASS_0) || Sys_HasPendingWorkerCmdOfType(WRKCMD_UPDATE_FX_PASS_2) || Sys_HasPendingWorkerCmdOfType(WRKCMD_UPDATE_FX_PASS_4) || Sys_HasPendingWorkerCmdOfType(WRKCMD_UPDATE_FX_PASS_5) )
        return 1;
      if ( R_ReflectionProbe_IsDebugReflectionEnabled() )
      {
        if ( ((unsigned __int8)&scene.allowDynamicStreamUpdateIterateSceneModels & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 141, ASSERT_TYPE_ASSERT, "( ( IsAligned( addr, sizeof( volatile_int32 ) ) ) )", "( addr ) = %p", &scene.allowDynamicStreamUpdateIterateSceneModels) )
          __debugbreak();
        if ( !scene.allowDynamicStreamUpdateIterateSceneModels )
          return 1;
      }
    }
  }
  if ( !v1 )
    goto LABEL_35;
  if ( (unsigned int)v3 >= 2 )
  {
    LODWORD(v7) = 2;
    LODWORD(v5) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 2871, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( ( sizeof( *array_counter( streamFrontendGlob->globalScheduler.m_subframeIndicesForEachDynamicSubtask ) ) + 0 ) )", "clientIndex doesn't index ARRAY_COUNT( streamFrontendGlob->globalScheduler.m_subframeIndicesForEachDynamicSubtask )\n\t%i not in [0, %i)", v5, v7) )
      __debugbreak();
  }
  if ( v1 == streamFrontendGlob->globalScheduler.m_subframeIndicesForEachDynamicSubtask[v3][3] )
  {
LABEL_35:
    if ( Sys_HasPendingWorkerCmdOfType(WRKCMD_GENERATE_GLASS_VERTS) )
      return 1;
  }
  if ( v1 )
  {
    if ( (unsigned int)v3 >= 2 )
    {
      LODWORD(v7) = 2;
      LODWORD(v5) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 2871, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( ( sizeof( *array_counter( streamFrontendGlob->globalScheduler.m_subframeIndicesForEachDynamicSubtask ) ) + 0 ) )", "clientIndex doesn't index ARRAY_COUNT( streamFrontendGlob->globalScheduler.m_subframeIndicesForEachDynamicSubtask )\n\t%i not in [0, %i)", v5, v7) )
        __debugbreak();
    }
    if ( v1 != streamFrontendGlob->globalScheduler.m_subframeIndicesForEachDynamicSubtask[v3][4] )
      return 0;
  }
  return Sys_HasPendingWorkerCmdOfType(WRKCMD_ADD_SUPER_TERRAIN);
}

/*
==============
Stream_UpdateDynamicModels_ScheduleSubtasks
==============
*/
void Stream_UpdateDynamicModels_ScheduleSubtasks(const StreamDynamicUpdateCmd *cmd, unsigned int needToExecuteFlags, unsigned int (*subframeIndexForEachDynamicSubtask)[9])
{
  Stream_UpdateDynamicModels_ScheduleSubtasks::__l2::<lambda_00bc3dbfeda74bd24a3d52abe74c862c> *v3; 
  unsigned int v4; 
  int v7; 
  __int64 localClientNum; 
  __int64 v9; 
  __int64 v11; 
  StreamUpdateScheduler::DynamicSubtask *v12; 
  __int64 v13; 
  unsigned int v14; 
  unsigned int v15; 
  unsigned __int64 v16; 
  unsigned __int64 (*iterationCounts)[9]; 
  __int64 *v18; 
  unsigned __int64 v19; 
  unsigned int v20; 
  __int64 v21; 
  __int64 v22; 
  unsigned int m_subFrameCount; 
  __int64 v25[8]; 
  StreamUpdateScheduler::DynamicSubtask _First[8]; 
  int v27; 
  StreamUpdateScheduler::DynamicSubtask _Last[3]; 
  Stream_UpdateDynamicModels_ScheduleSubtasks::__l2::<lambda_00bc3dbfeda74bd24a3d52abe74c862c> _Pred[10]; 

  v3 = _Pred;
  v4 = 0;
  m_subFrameCount = cmd->schedule.m_subFrameCount;
  v7 = 1;
  do
  {
    v3->iterationCounts = NULL;
    if ( (v7 & needToExecuteFlags) != 0 )
    {
      switch ( v4 )
      {
        case 0u:
          v3->iterationCounts = (unsigned __int64 (*)[9])scene.sceneDObjCount;
          break;
        case 1u:
          v3->iterationCounts = (unsigned __int64 (*)[9])(int)scene.sceneModelCount;
          break;
        case 2u:
          v3->iterationCounts = (unsigned __int64 (*)[9])(int)scene.sceneBrushCount;
          break;
        case 3u:
          v3->iterationCounts = (unsigned __int64 (*)[9])fxWorld.glassGlob.defCount;
          break;
        case 4u:
          if ( s_stGlob.terrain )
            v3->iterationCounts = (unsigned __int64 (*)[9])s_stGlob.terrain->surfaceCount;
          break;
        case 5u:
          if ( s_stGlob.terrain )
            v3->iterationCounts = (unsigned __int64 (*)[9])rgp.world->smodels.clutterCollectionCount;
          break;
        case 6u:
          if ( streamFrontendGlob->gameMode[0] == 1 )
          {
            ScriptableCommon_AssertCountsInitialized();
            v3->iterationCounts = (unsigned __int64 (*)[9])g_scriptableWorldCounts.totalInstanceCount;
          }
          break;
        case 7u:
          localClientNum = cmd->localClientNum;
          if ( (unsigned int)localClientNum >= 2 )
          {
            LODWORD(v22) = 2;
            LODWORD(v21) = cmd->localClientNum;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 300, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v21, v22) )
              __debugbreak();
          }
          v3->iterationCounts = (unsigned __int64 (*)[9])g_dynEntClientEntsAllocCount[localClientNum][1];
          break;
        case 8u:
          v9 = cmd->localClientNum;
          if ( (unsigned int)v9 >= 2 )
          {
            LODWORD(v22) = 2;
            LODWORD(v21) = cmd->localClientNum;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 300, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v21, v22) )
              __debugbreak();
          }
          v3->iterationCounts = (unsigned __int64 (*)[9])g_dynEntClientEntsAllocCount[v9][0];
          break;
        default:
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 2806, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unreachable code") )
            __debugbreak();
          break;
      }
    }
    ++v4;
    v7 = __ROL4__(v7, 1);
    ++v3;
  }
  while ( v4 < 9 );
  __asm { vmovdqu ymm0, cs:__ymm@0000000700000006000000050000000400000003000000020000000100000000 }
  v11 = 9i64;
  v27 = 8;
  __asm { vmovdqu ymmword ptr [rsp+158h+_First], ymm0 }
  std::_Sort_unchecked_enum_StreamUpdateScheduler::DynamicSubtask____lambda_00bc3dbfeda74bd24a3d52abe74c862c___(_First, _Last, 9i64, (Stream_UpdateDynamicModels_ScheduleSubtasks::__l2::<lambda_00bc3dbfeda74bd24a3d52abe74c862c>)_Pred);
  if ( m_subFrameCount > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 2834, ASSERT_TYPE_ASSERT, "(subFrameCount <= MaxSubFrameCount)", (const char *)&queryFormat, "subFrameCount <= MaxSubFrameCount") )
    __debugbreak();
  v12 = _First;
  memset(v25, 0, sizeof(v25));
  do
  {
    v13 = *(int *)v12;
    v14 = m_subFrameCount - 1;
    v15 = 0;
    v16 = -1i64;
    iterationCounts = _Pred[v13].iterationCounts;
    if ( m_subFrameCount )
    {
      v18 = v25;
      do
      {
        v19 = *v18++;
        v20 = v15;
        if ( v19 >= v16 )
          v20 = v14;
        ++v15;
        v14 = v20;
        if ( v19 >= v16 )
          v19 = v16;
        v16 = v19;
      }
      while ( v15 < m_subFrameCount );
    }
    ++v12;
    (*subframeIndexForEachDynamicSubtask)[v13] = v14;
    v25[v14] += (__int64)iterationCounts;
    --v11;
  }
  while ( v11 );
}

/*
==============
Stream_UpdateDynamicModels_ScheduledForSubtask
==============
*/
bool Stream_UpdateDynamicModels_ScheduledForSubtask(LocalClientNum_t localClientNum, int subframeIndex, StreamUpdateScheduler::DynamicSubtask subtask)
{
  __int64 v3; 
  __int64 v5; 
  char *v6; 
  __int64 v8; 
  __int64 v10; 
  int v11; 

  v3 = subtask;
  v5 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v11 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 2871, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( ( sizeof( *array_counter( streamFrontendGlob->globalScheduler.m_subframeIndicesForEachDynamicSubtask ) ) + 0 ) )", "clientIndex doesn't index ARRAY_COUNT( streamFrontendGlob->globalScheduler.m_subframeIndicesForEachDynamicSubtask )\n\t%i not in [0, %i)", localClientNum, v11) )
      __debugbreak();
  }
  v6 = (char *)streamFrontendGlob + 36 * v5;
  if ( (unsigned int)v3 >= 9 )
  {
    LODWORD(v10) = 9;
    LODWORD(v8) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 2874, ASSERT_TYPE_ASSERT, "(unsigned)( subtask ) < (unsigned)( ( sizeof( *array_counter( subframeIndices ) ) + 0 ) )", "subtask doesn't index ARRAY_COUNT( subframeIndices )\n\t%i not in [0, %i)", v8, v10) )
      __debugbreak();
  }
  return subframeIndex == *(_DWORD *)&v6[4 * v3 + 12151624];
}

/*
==============
Stream_UpdateDynamic_DynEntsAll
==============
*/
void Stream_UpdateDynamic_DynEntsAll(const StreamDynamicUpdateCmd *cmd)
{
  const dvar_t *v4; 
  StreamUpdateMultiView *p_multiView; 
  __int64 v6; 
  MapEnts *mapEnts; 
  DynEntityListId dynEntityListsCount; 
  DynEntityListId *dynEntListIds; 
  int v10; 
  __int64 v11; 
  DynEntityListId v13; 
  unsigned __int64 v14; 
  unsigned int v15; 
  __int64 v16; 
  DynEntityList *DynEntityList; 
  DynEntityDef *v18; 
  unsigned __int16 brushModel; 
  GfxBrushModel *v20; 
  GfxBrushModel *models; 
  unsigned __int64 v22; 
  GfxWorld *world; 
  unsigned int startSurfIndex; 
  unsigned int *v25; 
  __int64 v26; 
  StreamUpdateMultiView *v27; 
  const Material *material; 
  DynEntityListId v29; 
  unsigned __int64 v30; 
  unsigned int v31; 
  unsigned int v32; 
  DynEntityList *v33; 
  char v56; 
  DynEntityListId v60; 
  __int64 v63; 
  __int64 v64; 
  __int64 v65; 
  __int64 v66; 
  __int64 v67; 
  __int64 v68; 
  __int64 v69; 
  __int64 v70; 
  DynEntityListId v71; 
  unsigned int v72; 
  DynEntityListId *v73; 
  unsigned int v74; 
  int v75; 
  StreamUpdateMultiView *multiView; 
  __int64 v77; 
  __int64 v78[7]; 
  __int128 v79; 
  __int128 v80; 
  __int128 v81; 
  __int128 v82; 
  __int128 v83; 
  __int128 v84; 
  __int128 v85; 
  char v86; 
  void *retaddr; 

  _RAX = &retaddr;
  v78[5] = -2i64;
  __asm { vmovaps xmmword ptr [rax-38h], xmm6 }
  Sys_ProfBeginNamedEvent(0xFF808080, "Stream_UpdateDynamic_DynEntsAll");
  v4 = DCONST_DVARBOOL_stream_hintDynEnts;
  if ( !DCONST_DVARBOOL_stream_hintDynEnts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_hintDynEnts") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( v4->current.enabled )
  {
    p_multiView = &cmd->multiView;
    multiView = &cmd->multiView;
    v6 = 0i64;
    mapEnts = cm.mapEnts;
    if ( cm.mapEnts )
    {
      dynEntityListsCount = cm.mapEnts->dynEntityListsCount;
      v71 = dynEntityListsCount;
      dynEntListIds = cm.mapEnts->dynEntListIds;
      v73 = dynEntListIds;
      if ( dynEntityListsCount && !dynEntListIds )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 1439, ASSERT_TYPE_ASSERT, "(listCount == 0 || listIds)", (const char *)&queryFormat, "listCount == 0 || listIds") )
          __debugbreak();
        dynEntityListsCount = v71;
        mapEnts = cm.mapEnts;
      }
    }
    else
    {
      dynEntityListsCount = 0;
      v71 = 0;
      dynEntListIds = NULL;
      v73 = NULL;
    }
    v10 = (unsigned __int16)dynEntityListsCount;
    v75 = (unsigned __int16)dynEntityListsCount;
    if ( dynEntityListsCount )
    {
      v11 = (unsigned __int16)dynEntityListsCount;
      v77 = (unsigned __int16)dynEntityListsCount;
      __asm { vmovss  xmm6, cs:__real@7f7fffff }
      do
      {
        v13 = *dynEntListIds;
        if ( *dynEntListIds >= DEFAULT_DYNENTITY_LIST_ID )
        {
          LODWORD(v66) = 1536;
          LODWORD(v63) = (unsigned __int16)v13;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 175, ASSERT_TYPE_ASSERT, "(unsigned)( listId ) < (unsigned)( MAX_MAP_TRANSIENT_ZONES )", "listId doesn't index MAX_DYNENTITY_LIST_DEFS\n\t%i not in [0, %i)", v63, v66) )
            __debugbreak();
          LODWORD(v67) = 1536;
          LODWORD(v64) = (unsigned __int16)v13;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 127, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( MAX_MAP_TRANSIENT_ZONES )", "index doesn't index MAX_DYNENTITY_LIST_DEFS\n\t%i not in [0, %i)", v64, v67) )
            __debugbreak();
        }
        v14 = (unsigned __int64)(unsigned __int16)v13 << 6;
        if ( (unsigned __int16)(*(DynEntityListId *)((char *)&g_dynEntityLists[0].index + v14) - 1536) > 1u && (DynEntityList *)((char *)g_dynEntityLists + v14) )
        {
          v74 = *(unsigned int *)((char *)&g_dynEntityLists[0].dynEntCount[1] + v14);
          v15 = 0;
          v72 = 0;
          if ( v74 )
          {
            v16 = 0i64;
            do
            {
              DynEntityList = DynEnt_GetDynEntityList(*dynEntListIds);
              if ( !DynEntityList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 238, ASSERT_TYPE_ASSERT, "(dynEntList)", (const char *)&queryFormat, "dynEntList") )
                __debugbreak();
              if ( v15 >= DynEntityList->dynEntCount[1] )
              {
                LODWORD(v66) = DynEntityList->dynEntCount[1];
                LODWORD(v63) = v15;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 239, ASSERT_TYPE_ASSERT, "(unsigned)( localId ) < (unsigned)( dynEntList->dynEntCount[basis] )", "localId doesn't index dynEntList->dynEntCount[basis]\n\t%i not in [0, %i)", v63, v66) )
                  __debugbreak();
              }
              v18 = &DynEntityList->dynEntDefList[1][v16];
              if ( !v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 1448, ASSERT_TYPE_ASSERT, "(dynEntDef)", (const char *)&queryFormat, "dynEntDef") )
                __debugbreak();
              brushModel = v18->brushModel;
              if ( !brushModel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 1451, ASSERT_TYPE_ASSERT, "(brushModel)", (const char *)&queryFormat, "brushModel") )
                __debugbreak();
              v20 = R_GetBrushModel(brushModel);
              if ( !v20 )
              {
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 1454, ASSERT_TYPE_ASSERT, "(bmodel)", (const char *)&queryFormat, "bmodel") )
                  __debugbreak();
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 986, ASSERT_TYPE_ASSERT, "(bmodel)", (const char *)&queryFormat, "bmodel") )
                  __debugbreak();
              }
              if ( !rgp.world && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 987, ASSERT_TYPE_ASSERT, "(rgp.world)", (const char *)&queryFormat, "rgp.world") )
                __debugbreak();
              models = s_world.models;
              if ( &s_world.models[1] > v20 || v20 > &s_world.models[s_world.modelCount] )
              {
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 990, ASSERT_TYPE_ASSERT, "(s_world.models + 1) <= (bmodel) && (bmodel) <= (s_world.models + s_world.modelCount)", "%s\n\t0x%p not in [0x%p, 0x%p]", "bmodel not in [s_world.models + 1, s_world.models + s_world.modelCount]", v20, &s_world.models[1], &s_world.models[s_world.modelCount]) )
                  __debugbreak();
                models = s_world.models;
              }
              v22 = (__int64)((unsigned __int128)(((char *)v20 - (char *)models) * (__int128)0x2AAAAAAAAAAAAAABi64) >> 64) >> 4;
              world = rgp.world;
              startSurfIndex = v20->startSurfIndex;
              v25 = &s_world.surfaces.himipRadiusInvSqBmodelSurfaceIndirection[s_world.surfaces.himipRadiusInvSqBmodelIndirection[(v22 >> 63) - 1 + v22]];
              v26 = 0i64;
              if ( v20->surfaceCount )
              {
                v27 = multiView;
                do
                {
                  material = world->surfaces.surfaces[startSurfIndex].material;
                  if ( material && material->textureCount )
                    Stream_AddBspSurfaceDistance(v27, &s_world.surfaces.himipRadiusInvSqBModelCompacted[v25[v26] & 0xFFFFFFF], v25[v26] >> 28, &v20->writable.bounds, material);
                  ++startSurfIndex;
                  v26 = (unsigned int)(v26 + 1);
                }
                while ( (unsigned int)v26 < v20->surfaceCount );
                v15 = v72;
              }
              v72 = ++v15;
              ++v16;
              dynEntListIds = v73;
            }
            while ( v15 < v74 );
            v6 = 0i64;
            v11 = v77;
          }
          p_multiView = multiView;
        }
        v29 = *dynEntListIds;
        if ( *dynEntListIds >= DEFAULT_DYNENTITY_LIST_ID )
        {
          LODWORD(v66) = 1536;
          LODWORD(v63) = (unsigned __int16)v29;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 175, ASSERT_TYPE_ASSERT, "(unsigned)( listId ) < (unsigned)( MAX_MAP_TRANSIENT_ZONES )", "listId doesn't index MAX_DYNENTITY_LIST_DEFS\n\t%i not in [0, %i)", v63, v66) )
            __debugbreak();
          LODWORD(v68) = 1536;
          LODWORD(v65) = (unsigned __int16)v29;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 127, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( MAX_MAP_TRANSIENT_ZONES )", "index doesn't index MAX_DYNENTITY_LIST_DEFS\n\t%i not in [0, %i)", v65, v68) )
            __debugbreak();
        }
        v30 = (unsigned __int64)(unsigned __int16)v29 << 6;
        if ( (unsigned __int16)(*(DynEntityListId *)((char *)&g_dynEntityLists[0].index + v30) - 1536) > 1u )
        {
          if ( (DynEntityList *)((char *)g_dynEntityLists + v30) )
          {
            v31 = *(unsigned int *)((char *)g_dynEntityLists[0].dynEntCount + v30);
            v32 = 0;
            if ( v31 )
            {
              do
              {
                v33 = DynEnt_GetDynEntityList(*dynEntListIds);
                if ( !v33 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 238, ASSERT_TYPE_ASSERT, "(dynEntList)", (const char *)&queryFormat, "dynEntList") )
                  __debugbreak();
                if ( v32 >= v33->dynEntCount[0] )
                {
                  LODWORD(v66) = v33->dynEntCount[0];
                  LODWORD(v63) = v32;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 239, ASSERT_TYPE_ASSERT, "(unsigned)( localId ) < (unsigned)( dynEntList->dynEntCount[basis] )", "localId doesn't index dynEntList->dynEntCount[basis]\n\t%i not in [0, %i)", v63, v66) )
                    __debugbreak();
                }
                _RSI = (const XModel **)((char *)&v33->dynEntDefList[0]->baseModel + v6);
                if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 1463, ASSERT_TYPE_ASSERT, "(dynEntDef)", (const char *)&queryFormat, "dynEntDef") )
                  __debugbreak();
                _RDI = *_RSI;
                if ( *_RSI )
                {
                  __asm
                  {
                    vmovss  dword ptr [rsp+160h+var_110+4], xmm6
                    vmovups xmm1, xmmword ptr [rsi+10h]
                    vmulps  xmm0, xmm1, cs:__xmm@3f800000bf800000bf800000bf800000
                    vmovups [rbp+60h+var_70], xmm0
                    vmovss  xmm1, dword ptr [rsi+20h]
                  }
                  HIDWORD(v79) = 0;
                  __asm
                  {
                    vmovups xmm3, xmmword ptr [rbp-50h]
                    vmovss  xmm3, xmm3, xmm1
                    vinsertps xmm3, xmm3, dword ptr [rsi+24h], 10h
                    vinsertps xmm3, xmm3, dword ptr [rsi+28h], 20h ; ' '
                    vmovups xmmword ptr [rbp-50h], xmm3
                    vmovups [rbp+60h+var_80], xmm3
                    vmovss  xmm0, dword ptr [rdi+2Ch]
                  }
                  HIDWORD(v80) = 0;
                  __asm
                  {
                    vmovups xmm4, xmmword ptr [rbp-40h]
                    vmovss  xmm4, xmm4, xmm0
                    vinsertps xmm4, xmm4, dword ptr [rdi+30h], 10h
                    vinsertps xmm4, xmm4, dword ptr [rdi+34h], 20h ; ' '
                    vmovups xmmword ptr [rbp-40h], xmm4
                    vmovss  xmm0, dword ptr [rdi+38h]
                  }
                  HIDWORD(v81) = 0;
                  __asm
                  {
                    vmovups xmm3, xmmword ptr [rbp-30h]
                    vmovss  xmm3, xmm3, xmm0
                    vinsertps xmm3, xmm3, dword ptr [rdi+3Ch], 10h
                    vinsertps xmm3, xmm3, dword ptr [rdi+40h], 20h ; ' '
                    vmovups xmmword ptr [rbp-30h], xmm3
                    vsubps  xmm0, xmm4, xmm3
                    vmovups [rbp+60h+var_60], xmm0
                    vaddps  xmm1, xmm4, xmm3
                    vmovups [rbp+60h+var_50], xmm1
                  }
                  v78[0] = (__int64)&v82;
                  v78[1] = (__int64)&v83;
                  v78[2] = (__int64)&v84;
                  v78[3] = (__int64)&v85;
                  v78[4] = (__int64)&v72;
                  Stream_ViewPos_Iterate__lambda_18498cb6dbb513596de459c1976c7623_(p_multiView, (const Stream_CalculateDistanceSq_ModelInternal::__l2::<lambda_18498cb6dbb513596de459c1976c7623> *)v78);
                  __asm
                  {
                    vmovss  xmm0, dword ptr [rsp+160h+var_110+4]
                    vucomiss xmm0, xmm6
                  }
                  if ( v56 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 1059, ASSERT_TYPE_ASSERT, "(distSq != 3.402823466e+38F)", (const char *)&queryFormat, "distSq != FLT_MAX") )
                    __debugbreak();
                  _RAX = streamFrontendGlob;
                  __asm
                  {
                    vmovss  xmm0, dword ptr [rax+0B9725Ch]
                    vmaxss  xmm1, xmm0, dword ptr [rsp+160h+var_110+4]; distSq
                    vmovss  dword ptr [rsp+160h+var_110+4], xmm1
                  }
                  Stream_AddDynamicModelDistance(_RDI, *(double *)&_XMM1);
                }
                ++v32;
                v6 += 80i64;
                dynEntListIds = v73;
              }
              while ( v32 < v31 );
              v11 = v77;
            }
          }
        }
        v73 = ++dynEntListIds;
        v77 = --v11;
        v6 = 0i64;
      }
      while ( v11 );
      mapEnts = cm.mapEnts;
      dynEntityListsCount = v71;
      v10 = v75;
    }
    v60 = 0;
    if ( mapEnts )
      v60 = mapEnts->dynEntityListsCount;
    if ( dynEntityListsCount != v60 )
    {
      if ( mapEnts )
        LOWORD(v6) = mapEnts->dynEntityListsCount;
      LODWORD(v70) = (unsigned __int16)v6;
      LODWORD(v69) = v10;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 1472, ASSERT_TYPE_ASSERT, "( listCount ) == ( DynEnt_GetExpectedDynEntityListCount() )", "%s == %s\n\t%u, %u", "listCount", "DynEnt_GetExpectedDynEntityListCount()", v69, v70) )
        __debugbreak();
    }
  }
  Sys_ProfEndNamedEvent();
  _R11 = &v86;
  __asm { vmovaps xmm6, xmmword ptr [r11-10h] }
}

/*
==============
Stream_UpdateForClient
==============
*/
void Stream_UpdateForClient(const GfxViewInfo *viewInfo)
{
  StreamFrameState frameState; 
  unsigned int clientIndex; 
  StreamFrontendGlob *v7; 
  ScopedStreamFrontendUpdateLock v8; 

  _RDI = viewInfo;
  Sys_ProfBeginNamedEvent(0xFF808080, "Stream_UpdateForClient");
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 2696, ASSERT_TYPE_ASSERT, "(viewInfo)", (const char *)&queryFormat, "viewInfo") )
    __debugbreak();
  if ( !Stream_IsInitialized() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 2697, ASSERT_TYPE_ASSERT, "(Stream_IsInitialized())", (const char *)&queryFormat, "Stream_IsInitialized()") )
    __debugbreak();
  if ( !Sys_IsUpdateScreenThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 2698, ASSERT_TYPE_ASSERT, "(Sys_IsUpdateScreenThread())", (const char *)&queryFormat, "Sys_IsUpdateScreenThread()") )
    __debugbreak();
  Sys_WaitWorkerCmdsOfType(WRKCMD_STREAM_BEGIN_SCREEN_UPDATE_FRAME);
  ScopedStreamFrontendUpdateLock::ScopedStreamFrontendUpdateLock(&v8);
  frameState = streamFrontendGlob->frameState;
  if ( frameState && frameState != UPDATE_FOR_CLIENT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 2713, ASSERT_TYPE_ASSERT, "(streamFrontendGlob->frameState == StreamFrameState::BEGIN || streamFrontendGlob->frameState == StreamFrameState::UPDATE_FOR_CLIENT)", (const char *)&queryFormat, "streamFrontendGlob->frameState == StreamFrameState::BEGIN || streamFrontendGlob->frameState == StreamFrameState::UPDATE_FOR_CLIENT") )
    __debugbreak();
  streamFrontendGlob->frameState = UPDATE_FOR_CLIENT;
  if ( streamFrontendGlob->updateFrameInProgress && streamFrontendGlob->numClientsThisFrame != -1 && Stream_IsEnabled() )
  {
    if ( streamFrontendGlob->frozenState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 2720, ASSERT_TYPE_ASSERT, "(!streamFrontendGlob->frozenState)", (const char *)&queryFormat, "!streamFrontendGlob->frozenState") )
      __debugbreak();
    __asm { vmovss  xmm0, dword ptr [rdi+148h] }
    if ( (unsigned __int8)(streamFrontendGlob->gameMode[0] - 2) <= 1u )
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_stream_zNearDistanceInMP, "stream_zNearDistanceInMP");
    __asm { vmulss  xmm0, xmm0, xmm0 }
    _RAX = streamFrontendGlob;
    __asm { vmovss  dword ptr [rax+0B9725Ch], xmm0 }
    if ( streamFrontendGlob->numClientsThisFrame < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 2729, ASSERT_TYPE_ASSERT, "( streamFrontendGlob->numClientsThisFrame ) >= ( 0 )", "%s >= %s\n\t%i, %i", "streamFrontendGlob->numClientsThisFrame", "0", streamFrontendGlob->numClientsThisFrame, 0i64) )
      __debugbreak();
    clientIndex = _RDI->clientIndex;
    if ( !Stream_ViewPos_UpdateForClient(clientIndex) )
      Com_PrintError(35, "Stream_UpdateForClient: There is no view position set. (clientIndex: %d)\n", clientIndex);
    Stream_KickoffDynamicUpdate(clientIndex, _RDI->viewInfoIndex, 1);
    v7 = streamFrontendGlob;
    if ( streamFrontendGlob->gameMode[0] == 1 )
    {
      StreamSP_TouchWeaponModels(clientIndex);
      v7 = streamFrontendGlob;
    }
    ++v7->numClientsThisFrame;
    Stream_KickoffCombineAndSort();
  }
  ScopedStreamFrontendUpdateLock::~ScopedStreamFrontendUpdateLock(&v8);
  Sys_ProfEndNamedEvent();
}

/*
==============
Stream_UpdateForFrontendUI
==============
*/
void Stream_UpdateForFrontendUI(void)
{
  unsigned int v0; 
  unsigned int v1; 
  __int64 v2; 
  unsigned int v3; 
  int v4; 
  ScopedStreamFrontendUpdateLock v5; 

  Sys_ProfBeginNamedEvent(0xFF808080, "Stream_UpdateForFrontendUI");
  if ( !Stream_IsInitialized() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 2644, ASSERT_TYPE_ASSERT, "(Stream_IsInitialized())", (const char *)&queryFormat, "Stream_IsInitialized()") )
    __debugbreak();
  if ( !Sys_IsUpdateScreenThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 2645, ASSERT_TYPE_ASSERT, "(Sys_IsUpdateScreenThread())", (const char *)&queryFormat, "Sys_IsUpdateScreenThread()") )
    __debugbreak();
  Sys_WaitWorkerCmdsOfType(WRKCMD_STREAM_BEGIN_SCREEN_UPDATE_FRAME);
  ScopedStreamFrontendUpdateLock::ScopedStreamFrontendUpdateLock(&v5);
  if ( streamFrontendGlob->frameState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 2660, ASSERT_TYPE_ASSERT, "(streamFrontendGlob->frameState == StreamFrameState::BEGIN)", (const char *)&queryFormat, "streamFrontendGlob->frameState == StreamFrameState::BEGIN") )
    __debugbreak();
  streamFrontendGlob->frameState = UPDATE_FOR_FRONTEND;
  if ( streamFrontendGlob->updateFrameInProgress && streamFrontendGlob->numClientsThisFrame != -1 && Stream_IsEnabled() )
  {
    if ( streamFrontendGlob->frozenState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 2667, ASSERT_TYPE_ASSERT, "(!streamFrontendGlob->frozenState)", (const char *)&queryFormat, "!streamFrontendGlob->frozenState") )
      __debugbreak();
    v0 = Stream_ViewPos_UpdateForAllClients();
    v1 = v0;
    if ( v0 > 2 )
    {
      v4 = 2;
      v3 = v0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 2670, ASSERT_TYPE_ASSERT, "( clientCount ) <= ( 2 )", "%s <= %s\n\t%u, %u", "clientCount", "STATIC_MAX_LOCAL_CLIENTS", v3, v4) )
        __debugbreak();
    }
    if ( streamFrontendGlob->gameMode[0] == 1 )
      StreamSP_TouchWeaponModels(0);
    if ( streamFrontendGlob->loadSync.startTimeMs > 0 || streamFrontendGlob->loadSync.isActiveInFrontend )
      Stream_KickoffDynamicUpdate(0, 0, 0);
    if ( streamFrontendGlob->numClientsThisFrame )
    {
      LODWORD(v2) = streamFrontendGlob->numClientsThisFrame;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 2685, ASSERT_TYPE_ASSERT, "( streamFrontendGlob->numClientsThisFrame ) == ( 0 )", "%s == %s\n\t%i, %i", "streamFrontendGlob->numClientsThisFrame", "0", v2, 0i64) )
        __debugbreak();
    }
    streamFrontendGlob->numClientsThisFrame += v1;
    Stream_KickoffCombineAndSort();
  }
  ScopedStreamFrontendUpdateLock::~ScopedStreamFrontendUpdateLock(&v5);
  Sys_ProfEndNamedEvent();
}

/*
==============
Stream_UpdateStaticModels
==============
*/
void Stream_UpdateStaticModels(const StreamUpdateFrameSchedule *schedule, const StreamUpdateMultiView *multiView)
{
  GfxWorld *world; 
  unsigned int m_subFrameCount; 
  unsigned int collectionCount; 
  unsigned int v12; 
  unsigned int m_subFrameIndex; 
  unsigned int v14; 
  __int64 v16; 
  GfxStaticModelCollection *collections; 
  const XModel **p_model; 
  unsigned int XModelIndex; 
  const dvar_t *v21; 
  unsigned int v22; 
  __int64 viewCount; 
  bool v40; 
  unsigned int v56; 
  __int64 v58; 
  unsigned int v68; 
  StreamFrontendGlob *v69; 
  float fmt; 
  __int64 v76; 
  float v77; 
  __int64 v78; 
  float v79; 
  float v80; 
  float v81; 
  float v82; 
  int bitNum; 
  int bitNuma; 
  GfxWorld *v85; 
  float outScale[4]; 
  float4 v87; 
  __int64 v88; 
  float4 v89; 
  float4 v90; 
  float4 v91; 
  __int128 v92; 
  __int128 v93; 
  GfxPlacement outPlacement; 

  if ( !rgp.world && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 3102, ASSERT_TYPE_ASSERT, "(rgp.world)", (const char *)&queryFormat, "rgp.world") )
    __debugbreak();
  world = rgp.world;
  m_subFrameCount = schedule->m_subFrameCount;
  v85 = rgp.world;
  collectionCount = rgp.world->smodels.collectionCount;
  if ( m_subFrameCount )
  {
    if ( schedule->m_subFrameIndex >= m_subFrameCount )
    {
      LODWORD(v76) = schedule->m_subFrameIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_workers.h", 49, ASSERT_TYPE_ASSERT, "(unsigned)( m_subFrameIndex ) < (unsigned)( m_subFrameCount )", "m_subFrameIndex doesn't index m_subFrameCount\n\t%i not in [0, %i)", v76, schedule->m_subFrameCount) )
        __debugbreak();
      world = v85;
    }
    v12 = schedule->m_subFrameCount;
    m_subFrameIndex = schedule->m_subFrameIndex;
    if ( collectionCount <= v12 )
    {
      if ( m_subFrameIndex >= collectionCount )
        return;
      v14 = schedule->m_subFrameIndex;
      collectionCount = m_subFrameIndex + 1;
    }
    else
    {
      v14 = collectionCount / v12 * m_subFrameIndex;
      if ( m_subFrameIndex != v12 - 1 )
        collectionCount = collectionCount / v12 * (m_subFrameIndex + 1);
    }
    if ( v14 < collectionCount )
    {
      __asm
      {
        vmovaps [rsp+180h+var_30], xmm6
        vmovaps [rsp+180h+var_40], xmm7
        vmovaps [rsp+180h+var_50], xmm8
        vmovaps [rsp+180h+var_60], xmm9
        vmovaps [rsp+180h+var_70], xmm10
        vmovss  xmm10, cs:__real@7f7fffff
      }
      v16 = v14;
      _R14 = 24i64 * v14;
      v87.v.m128_u64[0] = _R14;
      v88 = collectionCount - v14;
      do
      {
        collections = world->smodels.collections;
        p_model = (const XModel **)&world->smodels.models[collections[v16].smodelIndex].model;
        XModelIndex = DB_GetXModelIndex(*p_model);
        v21 = DCONST_DVARBOOL_stream_updateSModelCollectionsViaSharedBounds;
        v22 = XModelIndex;
        bitNum = XModelIndex;
        __asm { vmovaps xmm7, xmm10 }
        if ( !DCONST_DVARBOOL_stream_updateSModelCollectionsViaSharedBounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_updateSModelCollectionsViaSharedBounds") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v21);
        if ( v21->current.enabled )
        {
          viewCount = multiView->viewCount;
          HIDWORD(v92) = 0;
          __asm { vmovups xmm4, xmmword ptr [rbp-40h] }
          _RAX = v85->smodels.collectionBounds;
          __asm
          {
            vmovss  xmm0, dword ptr [r14+rax]
            vmovss  xmm1, dword ptr [r14+rax+10h]
            vmovss  xmm2, dword ptr [r14+rax+14h]
            vmovss  xmm4, xmm4, xmm0
            vinsertps xmm4, xmm4, dword ptr [r14+rax+4], 10h
            vinsertps xmm4, xmm4, dword ptr [r14+rax+8], 20h ; ' '
            vmovss  xmm0, dword ptr [r14+rax+0Ch]
          }
          HIDWORD(v93) = 0;
          __asm
          {
            vmovups xmm3, xmmword ptr [rbp-30h]
            vmovss  xmm3, xmm3, xmm0
            vinsertps xmm3, xmm3, xmm1, 10h
            vinsertps xmm3, xmm3, xmm2, 20h ; ' '
            vmovups xmmword ptr [rbp-30h], xmm3
            vsubps  xmm8, xmm4, xmm3
            vaddps  xmm9, xmm4, xmm3
            vmovups xmmword ptr [rbp-40h], xmm4
          }
          v40 = viewCount == 0;
          if ( viewCount > 0 )
          {
            _RBX = multiView;
            _RDI = multiView->viewCosFovLimit;
            do
            {
              __asm
              {
                vminps  xmm0, xmm9, xmmword ptr [rbx]
                vmovss  xmm4, dword ptr [rdi+40h]
                vmovss  xmm5, dword ptr [rdi]
                vmovss  xmm6, dword ptr [rdi-80h]
                vmaxps  xmm3, xmm0, xmm8
                vsubps  xmm1, xmm3, xmmword ptr [rbx]
                vmulps  xmm2, xmm1, xmm1
                vmovss  [rsp+180h+var_140], xmm4
                vinsertps xmm0, xmm2, xmm2, 8
                vhaddps xmm1, xmm0, xmm0
                vmovups xmm0, xmmword ptr [rbx+100h]
                vmovss  [rsp+180h+var_148], xmm5
                vmovss  dword ptr [rsp+180h+var_150], xmm6
                vhaddps xmm2, xmm1, xmm1
                vmovups xmm1, xmmword ptr [rbx]
                vmovups [rbp+80h+var_D0], xmm1
                vmovups [rsp+180h+var_110], xmm0
                vmovdqa xmmword ptr [rbp+80h+outPlacement.quat], xmm3
                vmovdqa [rbp+80h+var_F0], xmm9
                vmovdqa [rbp+80h+var_E0], xmm8
              }
              *(float *)&_XMM0 = Stream_CalculateDistanceSq_ApplyZoomFactor(&v90, &v89, *(float *)&_XMM2, (const float4 *)&outPlacement, &v91, &v87, v79, v81, v82);
              ++_RDI;
              _RBX = (const StreamUpdateMultiView *)((char *)_RBX + 16);
              __asm { vminss  xmm7, xmm0, xmm7 }
              v40 = --viewCount == 0;
            }
            while ( viewCount );
          }
          v22 = bitNum;
        }
        else
        {
          if ( !collections[v16].instanceCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 3131, ASSERT_TYPE_ASSERT, "(smodelCollection->instanceCount > 0)", (const char *)&queryFormat, "smodelCollection->instanceCount > 0") )
            __debugbreak();
          _RAX = *p_model;
          v56 = 0;
          __asm { vmovss  xmm8, dword ptr [rax+28h] }
          v40 = collections[v16].instanceCount == 0;
          if ( collections[v16].instanceCount )
          {
            do
            {
              R_StaticModelInstance_GetPlacement(v56 + collections[v16].firstInstance, &outPlacement, outScale);
              v58 = multiView->viewCount;
              __asm { vmulss  xmm6, xmm8, [rsp+180h+outScale] }
              if ( v58 > 0 )
              {
                _RDI = multiView;
                _RBX = multiView->viewCosFovLimit;
                do
                {
                  __asm
                  {
                    vmovups xmm1, xmmword ptr [rdi]
                    vmovss  xmm2, dword ptr [rbx+40h]
                    vmovss  xmm3, dword ptr [rbx]
                    vmovss  xmm4, dword ptr [rbx-80h]
                    vmovups xmm0, xmmword ptr [rdi+100h]
                    vmovss  dword ptr [rsp+180h+var_150], xmm2
                    vmovups [rbp+80h+var_F0], xmm1
                    vmovss  dword ptr [rsp+180h+var_158], xmm3
                    vmovaps xmm1, xmm6
                    vmovss  dword ptr [rsp+180h+fmt], xmm4
                    vmovups [rbp+80h+var_E0], xmm0
                  }
                  *(float *)&_XMM0 = Stream_CalculateDistanceSq_Sphere(&outPlacement.origin, *(float *)&_XMM1, &v89, &v90, fmt, v77, v80);
                  ++_RBX;
                  _RDI = (const StreamUpdateMultiView *)((char *)_RDI + 16);
                  __asm { vminss  xmm7, xmm0, xmm7 }
                  --v58;
                }
                while ( v58 );
              }
              v40 = ++v56 == collections[v16].instanceCount;
            }
            while ( v56 < collections[v16].instanceCount );
            v22 = bitNum;
          }
          _R14 = v87.v.m128_u64[0];
        }
        __asm { vucomiss xmm7, xmm10 }
        if ( v40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 3151, ASSERT_TYPE_ASSERT, "(minDistanceSq != 3.402823466e+38F)", (const char *)&queryFormat, "minDistanceSq != FLT_MAX") )
          __debugbreak();
        __asm
        {
          vmovss  [rsp+180h+bitNum], xmm7
          vmovss  dword ptr [rsp+180h+var_110], xmm7
        }
        if ( (bitNuma & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_distance.h", 188, ASSERT_TYPE_SANITY, "( !IS_NAN( distance ) )", (const char *)&queryFormat, "!IS_NAN( distance )") )
          __debugbreak();
        v68 = (unsigned int)v87.v.m128_i32[0] >> 7;
        if ( v22 >= 0x6000 )
        {
          LODWORD(v78) = 24576;
          LODWORD(v76) = v22;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_internal.h", 442, ASSERT_TYPE_ASSERT, "(unsigned)( modelIndex ) < (unsigned)( (24064 + 512) )", "modelIndex doesn't index XMODEL_POOL_SIZE\n\t%i not in [0, %i)", v76, v78) )
            __debugbreak();
        }
        v69 = streamFrontendGlob;
        if ( v22 >= 0x6000 )
        {
          LODWORD(v78) = 24576;
          LODWORD(v76) = v22;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_sortlist.h", 366, ASSERT_TYPE_ASSERT, "(unsigned)( assetIndex ) < (unsigned)( ( sizeof( *array_counter( mDistances ) ) + 0 ) )", "assetIndex doesn't index ARRAY_COUNT( mDistances )\n\t%i not in [0, %i)", v76, v78) )
            __debugbreak();
        }
        if ( v68 < v69->modelDistance.mDistances[v22].mValue )
          v69->modelDistance.mDistances[v22].mValue = v68;
        Com_BitSetAssert(v69->modelDistance.mValueSet, v22, 3072);
        world = v85;
        _R14 += 24i64;
        ++v16;
        v87.v.m128_u64[0] = _R14;
        --v88;
      }
      while ( v88 );
      __asm
      {
        vmovaps xmm10, [rsp+180h+var_70]
        vmovaps xmm9, [rsp+180h+var_60]
        vmovaps xmm8, [rsp+180h+var_50]
        vmovaps xmm7, [rsp+180h+var_40]
        vmovaps xmm6, [rsp+180h+var_30]
      }
    }
  }
}

/*
==============
Stream_UpdateStaticModelsCmd
==============
*/
void Stream_UpdateStaticModelsCmd(const void *const data)
{
  const dvar_t *v2; 

  Sys_ProfBeginNamedEvent(0xFF808080, "Stream_UpdateStaticModelsCmd");
  if ( !*((_DWORD *)data + 276) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 3162, ASSERT_TYPE_ASSERT, "(cmd->multiView.viewCount)", (const char *)&queryFormat, "cmd->multiView.viewCount") )
    __debugbreak();
  if ( *((_DWORD *)data + 276) > 0x10u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 3163, ASSERT_TYPE_ASSERT, "(cmd->multiView.viewCount <= ( sizeof( *array_counter( cmd->multiView.viewPos ) ) + 0 ))", (const char *)&queryFormat, "cmd->multiView.viewCount <= ARRAY_COUNT( cmd->multiView.viewPos )") )
    __debugbreak();
  if ( streamFrontendGlob->globalScheduler.mUseStreamTree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 3164, ASSERT_TYPE_ASSERT, "(!streamFrontendGlob->globalScheduler.UseStreamTree())", (const char *)&queryFormat, "!streamFrontendGlob->globalScheduler.UseStreamTree()") )
    __debugbreak();
  v2 = DCONST_DVARBOOL_stream_hintSModels;
  if ( !DCONST_DVARBOOL_stream_hintSModels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_hintSModels") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.enabled )
    Stream_UpdateStaticModels((const StreamUpdateFrameSchedule *)data, (const StreamUpdateMultiView *)((char *)data + 16));
  Sys_ProfEndNamedEvent();
}

/*
==============
Stream_UpdateStreamTreeCmd
==============
*/
void Stream_UpdateStreamTreeCmd(const void *const data)
{
  unsigned int v6; 
  unsigned int v8; 
  unsigned int v9; 
  unsigned int v10; 
  unsigned int v11; 
  unsigned int v12; 
  unsigned int v13; 
  LocalClientNum_t v20; 
  StreamTree *p_streamTree; 
  GfxWorld *world; 
  float fmt; 
  float4 *viewDir; 
  float viewDira; 
  float viewDirb; 
  __int64 zoomFactor; 
  float zoomFactora; 
  float zoomFactorb; 
  float zoomFactorc; 
  float v37; 
  float v38; 
  float v39; 
  LocalClientNum_t localClientIndex; 
  bitarray<1536> *transientVisibility; 
  float4 v42; 
  char v43; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
  }
  Sys_ProfBeginNamedEvent(0xFF808080, "Stream_UpdateStreamTreeCmd");
  if ( !*((_DWORD *)data + 276) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 3203, ASSERT_TYPE_ASSERT, "(cmd->multiView.viewCount)", (const char *)&queryFormat, "cmd->multiView.viewCount") )
    __debugbreak();
  if ( *((_DWORD *)data + 276) > 0x10u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 3204, ASSERT_TYPE_ASSERT, "(cmd->multiView.viewCount <= ( sizeof( *array_counter( cmd->multiView.viewPos ) ) + 0 ))", (const char *)&queryFormat, "cmd->multiView.viewCount <= ARRAY_COUNT( cmd->multiView.viewPos )") )
    __debugbreak();
  if ( !streamFrontendGlob->globalScheduler.mUseStreamTree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 3205, ASSERT_TYPE_ASSERT, "(streamFrontendGlob->globalScheduler.UseStreamTree())", (const char *)&queryFormat, "streamFrontendGlob->globalScheduler.UseStreamTree()") )
    __debugbreak();
  transientVisibility = (bitarray<1536> *)*((_QWORD *)data + 140);
  if ( !transientVisibility && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 3208, ASSERT_TYPE_ASSERT, "(transientVisibility != nullptr)", (const char *)&queryFormat, "transientVisibility != nullptr") )
    __debugbreak();
  v6 = streamFrontendGlob->globalScheduler.mUseXModelStreamTree + 1;
  _R13 = (char *)data + 16;
  v8 = v6 * *((_DWORD *)data + 276);
  v9 = *((_DWORD *)data + 1);
  if ( !v9 )
  {
LABEL_22:
    v8 = 0;
    v12 = 0;
    goto LABEL_23;
  }
  if ( *(_DWORD *)data >= v9 )
  {
    LODWORD(viewDir) = *(_DWORD *)data;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_workers.h", 49, ASSERT_TYPE_ASSERT, "(unsigned)( m_subFrameIndex ) < (unsigned)( m_subFrameCount )", "m_subFrameIndex doesn't index m_subFrameCount\n\t%i not in [0, %i)", viewDir, *((_DWORD *)data + 1)) )
      __debugbreak();
  }
  v10 = *((_DWORD *)data + 1);
  if ( v8 <= v10 )
  {
    v12 = *(_DWORD *)data;
    if ( v12 < v8 )
    {
      v8 = v12 + 1;
      goto LABEL_23;
    }
    goto LABEL_22;
  }
  v11 = *(_DWORD *)data;
  v12 = v8 / v10 * *(_DWORD *)data;
  if ( v11 != v10 - 1 )
    v8 = v8 / v10 * (v11 + 1);
LABEL_23:
  while ( v12 < v8 )
  {
    v13 = v12 % v6;
    _R14 = v12 / v6;
    if ( v12 / v6 >= 0x10 )
    {
      LODWORD(zoomFactor) = 16;
      LODWORD(viewDir) = v12 / v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 3226, ASSERT_TYPE_ASSERT, "(unsigned)( viewIndex ) < (unsigned)( ( sizeof( *array_counter( multiView.viewPos ) ) + 0 ) )", "viewIndex doesn't index ARRAY_COUNT( multiView.viewPos )\n\t%i not in [0, %i)", viewDir, zoomFactor) )
        __debugbreak();
    }
    if ( v13 >= v6 )
    {
      LODWORD(zoomFactor) = v6;
      LODWORD(viewDir) = v12 % v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 3227, ASSERT_TYPE_ASSERT, "(unsigned)( treeIndex ) < (unsigned)( treeTypeCount )", "treeIndex doesn't index treeTypeCount\n\t%i not in [0, %i)", viewDir, zoomFactor) )
        __debugbreak();
    }
    _RCX = 2 * (_R14 + 32);
    __asm
    {
      vmovss  xmm6, dword ptr [r13+r14*4+300h]
      vmovss  xmm1, dword ptr [r13+r14*4+340h]
      vmovss  xmm7, dword ptr [r13+r14*4+380h]
      vmovss  xmm8, dword ptr [r13+r14*4+3C0h]
    }
    v20 = *(_DWORD *)&_R13[4 * _R14 + 1024];
    localClientIndex = v20;
    if ( v13 )
    {
      if ( v13 != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 3276, ASSERT_TYPE_ASSERT, "(treeIndex == 1)", (const char *)&queryFormat, "treeIndex == 1") )
        __debugbreak();
      world = rgp.world;
      if ( !rgp.world->xmodelStreamTreeGrid.cellKeys && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 3278, ASSERT_TYPE_ASSERT, "(xmodelStreamTreeGrid.cellKeys != nullptr)", (const char *)&queryFormat, "xmodelStreamTreeGrid.cellKeys != nullptr") )
        __debugbreak();
      __asm
      {
        vmovss  dword ptr [rsp+0E8h+var_B0], xmm8
        vmovss  [rsp+0E8h+zoomFactor], xmm7
        vmovss  dword ptr [rsp+0E8h+viewDir], xmm6
      }
      Stream_TraverseXModelStreamTreeGrid(&world->xmodelStreamTreeGrid, _R14, localClientIndex, (const float4 *)&_R13[16 * _R14], (const float4 *)&_R13[16 * _R14 + 256], viewDirb, zoomFactorc, v38, transientVisibility);
    }
    else
    {
      __asm
      {
        vmaxss  xmm4, xmm1, xmm6
        vmovups xmm0, xmmword ptr [r13+rcx*8+0]
        vmovups xmmword ptr [rsp+0E8h+var_78.v], xmm0
        vcomiss xmm1, xmm6
      }
      p_streamTree = &rgp.world->streamTree;
      if ( rgp.world->materialStreamTreeGrid.cellKeys )
      {
        __asm
        {
          vmovss  dword ptr [rsp+0E8h+var_A8], xmm8
          vmovss  dword ptr [rsp+0E8h+var_B0], xmm7
          vmovss  [rsp+0E8h+zoomFactor], xmm4
        }
        Stream_TraverseMaterialHybridStreamTree(p_streamTree, &rgp.world->materialStreamTreeGrid, _R14, v20, (const float4 *)&_R13[16 * _R14], &v42, zoomFactora, v37, v39, transientVisibility);
      }
      else
      {
        __asm
        {
          vmovss  [rsp+0E8h+zoomFactor], xmm8
          vmovss  dword ptr [rsp+0E8h+viewDir], xmm7
          vmovss  dword ptr [rsp+0E8h+fmt], xmm4
        }
        Stream_TraverseStreamTree(p_streamTree, v20, (const float4 *)&_R13[16 * _R14], &v42, fmt, viewDira, zoomFactorb, transientVisibility);
      }
    }
    ++v12;
  }
  if ( v6 * *((_DWORD *)_R13 + 272) == v8 )
    memcpy_0(streamFrontendGlob->smodelsCollectionLods, streamFrontendGlob->smodelsCollectionLodsTemp, sizeof(streamFrontendGlob->smodelsCollectionLods));
  Sys_ProfEndNamedEvent();
  _R11 = &v43;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
}

/*
==============
Stream_UpdateWorldBspSurfsCmd
==============
*/
void Stream_UpdateWorldBspSurfsCmd(const void *const data)
{
  const dvar_t *v2; 
  unsigned int surfaceCount; 
  unsigned int v4; 
  unsigned int v5; 
  unsigned int v6; 
  __int64 v7; 
  __int64 v8; 

  Sys_ProfBeginNamedEvent(0xFF808080, "Stream_UpdateWorldBspSurfsCmd");
  if ( !*((_DWORD *)data + 276) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 3178, ASSERT_TYPE_ASSERT, "(cmd->multiView.viewCount)", (const char *)&queryFormat, "cmd->multiView.viewCount") )
    __debugbreak();
  if ( *((_DWORD *)data + 276) > 0x10u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 3179, ASSERT_TYPE_ASSERT, "(cmd->multiView.viewCount <= ( sizeof( *array_counter( cmd->multiView.viewPos ) ) + 0 ))", (const char *)&queryFormat, "cmd->multiView.viewCount <= ARRAY_COUNT( cmd->multiView.viewPos )") )
    __debugbreak();
  if ( streamFrontendGlob->globalScheduler.mUseStreamTree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 3180, ASSERT_TYPE_ASSERT, "(!streamFrontendGlob->globalScheduler.UseStreamTree())", (const char *)&queryFormat, "!streamFrontendGlob->globalScheduler.UseStreamTree()") )
    __debugbreak();
  v2 = DCONST_DVARBOOL_stream_hintWorldSurfaces;
  if ( !DCONST_DVARBOOL_stream_hintWorldSurfaces && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_hintWorldSurfaces") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.enabled )
  {
    surfaceCount = rgp.world->models->surfaceCount;
    v4 = *((_DWORD *)data + 1);
    if ( !v4 )
      goto LABEL_23;
    if ( *(_DWORD *)data >= v4 )
    {
      LODWORD(v8) = *((_DWORD *)data + 1);
      LODWORD(v7) = *(_DWORD *)data;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_workers.h", 49, ASSERT_TYPE_ASSERT, "(unsigned)( m_subFrameIndex ) < (unsigned)( m_subFrameCount )", "m_subFrameIndex doesn't index m_subFrameCount\n\t%i not in [0, %i)", v7, v8) )
        __debugbreak();
    }
    v5 = *((_DWORD *)data + 1);
    if ( surfaceCount > v5 )
    {
      v6 = surfaceCount / v5 * *(_DWORD *)data;
      if ( *(_DWORD *)data != v5 - 1 )
        surfaceCount = surfaceCount / v5 * (*(_DWORD *)data + 1);
      goto LABEL_24;
    }
    v6 = *(_DWORD *)data;
    if ( *(_DWORD *)data < surfaceCount )
    {
      surfaceCount = v6 + 1;
    }
    else
    {
LABEL_23:
      v6 = 0;
      surfaceCount = 0;
    }
LABEL_24:
    while ( v6 < surfaceCount )
    {
      if ( !rgp.world && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 2064, ASSERT_TYPE_ASSERT, "(rgp.world)", (const char *)&queryFormat, "rgp.world") )
        __debugbreak();
      if ( v6 >= rgp.world->surfaces.count )
      {
        LODWORD(v8) = rgp.world->surfaces.count;
        LODWORD(v7) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 2065, ASSERT_TYPE_ASSERT, "(unsigned)( surfId ) < (unsigned)( rgp.world->surfaces.count )", "surfId doesn't index rgp.world->surfaces.count\n\t%i not in [0, %i)", v7, v8) )
          __debugbreak();
      }
      if ( !rgp.world->surfaces.himipRadiusInvSqIndirection && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 2066, ASSERT_TYPE_ASSERT, "(rgp.world->surfaces.himipRadiusInvSqIndirection)", (const char *)&queryFormat, "rgp.world->surfaces.himipRadiusInvSqIndirection") )
        __debugbreak();
      if ( !rgp.world->surfaces.himipRadiusInvSqCompacted && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 2067, ASSERT_TYPE_ASSERT, "(rgp.world->surfaces.himipRadiusInvSqCompacted)", (const char *)&queryFormat, "rgp.world->surfaces.himipRadiusInvSqCompacted") )
        __debugbreak();
      Stream_AddBspSurfaceDistance((const StreamUpdateMultiView *)((char *)data + 16), &rgp.world->surfaces.himipRadiusInvSqCompacted[rgp.world->surfaces.himipRadiusInvSqIndirection[v6] & 0xFFFFFFF], rgp.world->surfaces.himipRadiusInvSqIndirection[v6] >> 28, &rgp.world->surfaces.surfaceBounds[v6].bounds, rgp.world->surfaces.surfaces[v6].material);
      ++v6;
    }
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
StreamUpdateScheduler::SubFrameIndex
==============
*/
__int64 StreamUpdateScheduler::SubFrameIndex(StreamUpdateScheduler *this)
{
  return this->mSubFrame;
}

/*
==============
StreamUpdateScheduler::TotalSubFrameCount
==============
*/
__int64 StreamUpdateScheduler::TotalSubFrameCount(StreamUpdateScheduler *this)
{
  return this->mUpdateSubFrameCount + this->mCombineSubFrameCount + this->mSortSubframeCount;
}

/*
==============
StreamUpdateScheduler::UpdateSubFrameCount
==============
*/
__int64 StreamUpdateScheduler::UpdateSubFrameCount(StreamUpdateScheduler *this)
{
  return this->mUpdateSubFrameCount;
}

