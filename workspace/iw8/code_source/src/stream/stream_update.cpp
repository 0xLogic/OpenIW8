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
  const dvar_t *v2; 
  __int64 v3; 
  float *v4; 
  __int64 v5; 
  int v6; 
  __int64 v7; 
  __int64 v8; 
  const XModel *v9; 
  float v10; 
  __int64 v11; 
  int sceneDObjCount; 
  float *v13; 
  __int64 v14; 
  GfxPlacement placement; 

  Sys_ProfBeginNamedEvent(0xFF808080, "Stream_UpdateDynamic_SceneDObjs");
  if ( !cmd->iterateSceneEntities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 1181, ASSERT_TYPE_ASSERT, "(cmd->iterateSceneEntities)", (const char *)&queryFormat, "cmd->iterateSceneEntities") )
    __debugbreak();
  v2 = DCONST_DVARBOOL_stream_hintDobjs;
  if ( !DCONST_DVARBOOL_stream_hintDobjs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_hintDobjs") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.enabled )
  {
    sceneDObjCount = scene.sceneDObjCount;
    v3 = scene.sceneDObjCount;
    v14 = scene.sceneDObjCount;
    if ( scene.sceneDObjCount > 0 )
    {
      v4 = &scene.sceneDObj[0].placement.placement.quat.v[2];
      v13 = &scene.sceneDObj[0].placement.placement.quat.v[2];
      do
      {
        v5 = *(_QWORD *)(v4 + 343);
        if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 1196, ASSERT_TYPE_ASSERT, "(dobj)", (const char *)&queryFormat, "dobj") )
          __debugbreak();
        v6 = *(unsigned __int8 *)(v5 + 15);
        if ( !*(_BYTE *)(v5 + 15) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 1199, ASSERT_TYPE_ASSERT, "(modelCount)", (const char *)&queryFormat, "modelCount") )
          __debugbreak();
        v7 = *(_QWORD *)(v5 + 240);
        if ( v7 )
        {
          GfxSceneEntity_GetPlacementOrigin((const GfxSceneEntity *)(v4 - 5), &placement.origin);
          placement.quat = *(vec4_t *)(v4 - 2);
          v8 = 0i64;
          if ( v6 )
          {
            do
            {
              v9 = *(const XModel **)(v7 + 8 * v8);
              if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 1220, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
                __debugbreak();
              v10 = Stream_AddDynamicModelDistanceForMultiView(&cmd->multiView, v9, &placement, 1.0);
              v11 = *(_QWORD *)(v5 + 272);
              if ( v11 )
                Stream_AddDynamicWeaponCamoDistance((const XModelMaterialOverride *)(v11 + 16i64 * (unsigned int)v8), v9, v10);
              v8 = (unsigned int)(v8 + 1);
            }
            while ( (_DWORD)v8 != v6 );
            v4 = v13;
            v3 = v14;
          }
        }
        else
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 1202, ASSERT_TYPE_ASSERT, "(dobjModels)", (const char *)&queryFormat, "dobjModels") )
            __debugbreak();
          Com_PrintError(35, "Stream_UpdateDynamic_SceneDObjs: Invalid DObj is found in scene (entnum: %d)\n", *(unsigned __int16 *)(v5 + 12));
        }
        v4 += 356;
        v13 = v4;
        v14 = --v3;
      }
      while ( v3 );
      if ( sceneDObjCount != scene.sceneDObjCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 1226, ASSERT_TYPE_ASSERT, "( sceneDObjCount ) == ( scene.sceneDObjCount )", "%s == %s\n\t%i, %i", "sceneDObjCount", "scene.sceneDObjCount", sceneDObjCount, scene.sceneDObjCount) )
        __debugbreak();
    }
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
Stream_UpdateDynamic_SceneModels
==============
*/
void Stream_UpdateDynamic_SceneModels(const StreamDynamicUpdateCmd *cmd)
{
  const dvar_t *v2; 
  StreamUpdateMultiView *p_multiView; 
  unsigned __int64 v4; 
  volatile int sceneModelCount; 
  const XModel **p_model; 
  __int64 v7; 
  float v8; 
  const XModel *v9; 
  const XModel *v10; 
  float v11; 
  const XModelMaterialOverride *v12; 

  Sys_ProfBeginNamedEvent(0xFF808080, "Stream_UpdateDynamic_SceneModels");
  if ( !cmd->iterateSceneEntities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 1299, ASSERT_TYPE_ASSERT, "(cmd->iterateSceneEntities)", (const char *)&queryFormat, "cmd->iterateSceneEntities") )
    __debugbreak();
  v2 = DCONST_DVARBOOL_stream_hintSceneModels;
  if ( !DCONST_DVARBOOL_stream_hintSceneModels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_hintSceneModels") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.enabled )
  {
    p_multiView = &cmd->multiView;
    v4 = (unsigned __int64)&scene.sceneModelCount & 3;
    if ( ((unsigned __int8)&scene.sceneModelCount & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 141, ASSERT_TYPE_ASSERT, "( ( IsAligned( addr, sizeof( volatile_int32 ) ) ) )", "( addr ) = %p", &scene.sceneModelCount) )
      __debugbreak();
    sceneModelCount = scene.sceneModelCount;
    if ( scene.sceneModelCount )
    {
      p_model = &scene.sceneModel[0].model;
      v7 = (unsigned int)scene.sceneModelCount;
      do
      {
        v8 = *((float *)p_model + 19);
        if ( v8 > 0.0 )
        {
          v9 = *p_model;
          if ( !*p_model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 1317, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
            __debugbreak();
          v10 = p_model[1];
          v11 = Stream_AddDynamicModelDistanceForMultiView(p_multiView, v9, (const GfxPlacement *)(p_model + 6), v8);
          if ( v10 )
          {
            v12 = *(const XModelMaterialOverride **)&v10->lodInfo[0].partBits.array[6];
            if ( v12 )
              Stream_AddDynamicWeaponCamoDistance(v12, v9, v11);
          }
        }
        p_model += 19;
        --v7;
      }
      while ( v7 );
    }
    if ( v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 141, ASSERT_TYPE_ASSERT, "( ( IsAligned( addr, sizeof( volatile_int32 ) ) ) )", "( addr ) = %p", &scene.sceneModelCount) )
      __debugbreak();
    if ( sceneModelCount != scene.sceneModelCount )
    {
      if ( v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 141, ASSERT_TYPE_ASSERT, "( ( IsAligned( addr, sizeof( volatile_int32 ) ) ) )", "( addr ) = %p", &scene.sceneModelCount) )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 1323, ASSERT_TYPE_ASSERT, "( sceneModelCount ) == ( static_cast<uint>( Sys_InterlockedLoad( &scene.sceneModelCount ) ) )", "%s == %s\n\t%u, %u", "sceneModelCount", "static_cast<uint>( Sys_InterlockedLoad( &scene.sceneModelCount ) )", sceneModelCount, scene.sceneModelCount) )
        __debugbreak();
    }
  }
  Sys_ProfEndNamedEvent();
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
  const dvar_t *v2; 
  __int64 localClientNum; 
  StreamUpdateMultiView *p_multiView; 
  DynEntityClient *v5; 
  unsigned __int16 v6; 
  unsigned __int16 i; 
  const XModel *activeModel; 
  DynEntityPose *PoseFromClientId; 
  __int64 v10; 
  __int64 v11; 

  Sys_ProfBeginNamedEvent(0xFF808080, "Stream_UpdateDynamic_DynModelsForClient");
  v2 = DCONST_DVARBOOL_stream_hintDynEnts;
  if ( !DCONST_DVARBOOL_stream_hintDynEnts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_hintDynEnts") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.enabled )
  {
    localClientNum = cmd->localClientNum;
    p_multiView = &cmd->multiView;
    if ( (unsigned int)localClientNum >= 2 )
    {
      LODWORD(v11) = 2;
      LODWORD(v10) = cmd->localClientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 311, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v10, v11) )
        __debugbreak();
    }
    v5 = g_dynEntClientLists[localClientNum][0];
    if ( (unsigned int)localClientNum >= 2 )
    {
      LODWORD(v11) = 2;
      LODWORD(v10) = localClientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 300, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v10, v11) )
        __debugbreak();
    }
    v6 = g_dynEntClientEntsAllocCount[localClientNum][0];
    for ( i = 0; i < v6; ++v5 )
    {
      if ( (v5->flags & 1) != 0 )
      {
        activeModel = v5->activeModel;
        if ( v5->activeModel )
        {
          PoseFromClientId = DynEnt_GetPoseFromClientId((LocalClientNum_t)localClientNum, i, DYNENT_BASIS_MODEL);
          Stream_AddDynamicModelDistanceForMultiView(p_multiView, activeModel, &PoseFromClientId->pose, 1.0);
        }
      }
      ++i;
    }
    if ( (unsigned int)localClientNum >= 2 )
    {
      LODWORD(v11) = 2;
      LODWORD(v10) = localClientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 300, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v10, v11) )
        __debugbreak();
    }
    if ( v6 != g_dynEntClientEntsAllocCount[localClientNum][0] )
    {
      if ( (unsigned int)localClientNum >= 2 )
      {
        LODWORD(v11) = 2;
        LODWORD(v10) = localClientNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 300, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v10, v11) )
          __debugbreak();
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 1422, ASSERT_TYPE_ASSERT, "( clientCount ) == ( DynEnt_GetAllocatedClientCount( localClientNum, DYNENT_BASIS_MODEL ) )", "%s == %s\n\t%u, %u", "clientCount", "DynEnt_GetAllocatedClientCount( localClientNum, DYNENT_BASIS_MODEL )", v6, g_dynEntClientEntsAllocCount[localClientNum][0]) )
        __debugbreak();
    }
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
Stream_UpdateDynamic_SuperTerrain
==============
*/
void Stream_UpdateDynamic_SuperTerrain(const StreamDynamicUpdateCmd *cmd)
{
  const StreamDynamicUpdateCmd *v1; 
  const StreamUpdateMultiView *p_multiView; 
  const StTerrain *terrain; 
  float v4; 
  double v6; 
  float v7; 
  double v8; 
  float v9; 
  const dvar_t *v10; 
  int v11; 
  unsigned int surfaceCount; 
  __int64 v13; 
  unsigned int v14; 
  float v15; 
  const StDiskTerrainSurface *v16; 
  int integer; 
  __int64 v18; 
  const StTerrainNode *v19; 
  GfxImage *heightMap; 
  unsigned int GfxImageIndex; 
  GfxImage *cutoutMap; 
  unsigned int v23; 
  const dvar_t *v24; 
  float v25; 
  __m128 v27; 
  float v30; 
  __m128 v32; 
  bool v35; 
  char v36; 
  __m128 v; 
  __m128 v39; 
  const dvar_t *v43; 
  StCombinedMapUsage v50; 
  int v51; 
  __m128 *p_v; 
  __m128 v53; 
  __m128 v55; 
  const dvar_t *v59; 
  bool v66; 
  bool v67; 
  unsigned int v68; 
  StreamDistance v69; 
  double Float_Internal_DebugName; 
  unsigned int *v71; 
  unsigned int v72; 
  float *p_tileMaterialDistancesSq; 
  __int64 i; 
  StreamUpdateMultiView *v75; 
  float4 *minBound; 
  float v199; 
  unsigned int v200; 
  unsigned int v201; 
  __int64 v202; 
  __int64 v203; 
  const GfxImage *BindlessImageFromFlattenedIndex; 
  const GfxImage *v205; 
  unsigned int v206; 
  __int64 v207; 
  const dvar_t *v208; 
  StreamFrontendGlob *v209; 
  unsigned int height; 
  unsigned int v211; 
  unsigned int v212; 
  __int64 v213; 
  __int64 v214; 
  unsigned int v215; 
  GfxImage *v216; 
  __int64 v217; 
  const dvar_t *v218; 
  unsigned int v219; 
  const dvar_t *v220; 
  StreamFrontendGlob *v221; 
  bool v222; 
  float v223; 
  __int64 v224; 
  unsigned int v225; 
  const dvar_t *v226; 
  StreamFrontendGlob *v227; 
  __int64 v228; 
  unsigned int v229; 
  const dvar_t *v230; 
  StreamFrontendGlob *v231; 
  unsigned int lightmapIndex; 
  const StTerrain *v233; 
  const GfxImage **images; 
  __int64 v235; 
  unsigned int v236; 
  __int64 v237; 
  const dvar_t *v238; 
  StreamFrontendGlob *v239; 
  int v240; 
  StreamUpdateMultiView *v241; 
  float *viewZoomFactors; 
  __m128 v243; 
  __m128 v245; 
  const dvar_t *v249; 
  __int64 v256; 
  __int64 v257; 
  char v258; 
  char v259; 
  float v260; 
  int v261; 
  unsigned int v262; 
  float v263; 
  __int64 v264; 
  float v265; 
  unsigned int v266; 
  const StDiskTerrainSurface *v267; 
  const StTerrain *v268; 
  float v269; 
  int v270; 
  float v271; 
  unsigned int v272; 
  StreamUpdateMultiView *multiView; 
  int v274[2]; 
  const StreamDynamicUpdateCmd *v275; 
  Stream_UpdateDynamic_SuperTerrain::__l14::<lambda_8133dd63ba336d8a21070153c3a07a07> iterator; 
  __int64 v277; 
  __int64 v278; 
  StreamDistance v279; 
  float v280; 
  float v281; 
  float v282; 
  __int64 v283; 
  __m128 v284; 
  __m128 v285; 
  __m128 v286; 
  __m128 v287; 
  __m128 v288; 
  __m128 v289; 
  __m128 v290; 
  vec3_t viewPos; 
  vec3_t v292; 
  vec3_t dpvsCamPos; 
  float tileMaterialDistancesSq; 
  float v295; 
  float v296; 
  float v297; 
  float v298; 
  float v299; 
  float v300; 
  float v301; 
  float v302; 
  float v303; 
  float v304; 
  float v305; 
  float v306; 
  float v307; 
  float v308; 
  float v309; 
  float v310; 
  float v311; 
  float v312; 
  float v313; 
  float v314; 
  float v315; 
  float v316; 
  float v317; 
  float v318; 
  float v319; 
  float v320; 
  float v321; 
  float v322; 
  float v323; 
  float v324; 
  float v325; 

  v283 = -2i64;
  v1 = cmd;
  v275 = cmd;
  Sys_ProfBeginNamedEvent(0xFF808080, "Stream_UpdateDynamic_SuperTerrain");
  p_multiView = &v1->multiView;
  multiView = &v1->multiView;
  if ( !v1->multiView.viewCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 1588, ASSERT_TYPE_ASSERT, "(multiView.viewCount)", (const char *)&queryFormat, "multiView.viewCount") )
    __debugbreak();
  terrain = s_stGlob.terrain;
  v268 = s_stGlob.terrain;
  if ( s_stGlob.terrain )
  {
    v4 = FLOAT_3_4028235e38;
    *(float *)&_XMM10 = FLOAT_3_4028235e38;
    v260 = FLOAT_3_4028235e38;
    v6 = CL_StreamViews_ParametricVelocity((const LocalClientNum_t)v1->localClientNum);
    v7 = *(float *)&v6;
    v271 = *(float *)&v6;
    v8 = R_ST_CombinedMapDistanceSqThreshold(1);
    v9 = *(float *)&v8;
    v269 = *(float *)&v8;
    v10 = DVARFLT_stream_combinedMapDistanceSqThresholdScaler;
    if ( !DVARFLT_stream_combinedMapDistanceSqThresholdScaler && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_combinedMapDistanceSqThresholdScaler") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v10);
    *(float *)&v11 = (float)(v10->current.value * v10->current.value) * *(float *)&v8;
    v270 = v11;
    surfaceCount = terrain->surfaceCount;
    v272 = surfaceCount;
    v13 = 0i64;
    v14 = 0;
    v266 = 0;
    if ( surfaceCount )
    {
      v278 = 0i64;
      v15 = FLOAT_0_5;
      while ( 1 )
      {
        v16 = &terrain->surfaces[v13];
        v267 = v16;
        integer = r_st_drawSingleSurface->current.integer;
        if ( integer != -1 && integer != v14 )
          goto LABEL_290;
        v18 = (__int64)&v16->grid.levels[v16->grid.numLevels - 1];
        if ( (*(_DWORD *)v18 != 1 || *(_DWORD *)(v18 + 4) != 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 1546, ASSERT_TYPE_ASSERT, "(lowDetailLodLevel.width == 1 && lowDetailLodLevel.height == 1)", (const char *)&queryFormat, "lowDetailLodLevel.width == 1 && lowDetailLodLevel.height == 1") )
          __debugbreak();
        if ( !*(_QWORD *)(v18 + 8) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 1547, ASSERT_TYPE_ASSERT, "(lowDetailLodLevel.nodes)", (const char *)&queryFormat, "lowDetailLodLevel.nodes") )
          __debugbreak();
        v19 = *(const StTerrainNode **)(v18 + 8);
        if ( R_ST_NodeRequiresHeightmap(v19) )
        {
          heightMap = v16->heightMap;
          if ( (heightMap->flags & 0x40) != 0 )
          {
            GfxImageIndex = DB_GetGfxImageIndex(heightMap);
            Stream_AddImageDistance(GfxImageIndex, (StreamDistance)65542);
          }
        }
        if ( R_ST_NodeRequiresCutoutmap(v19) )
        {
          cutoutMap = v16->cutoutMap;
          if ( (cutoutMap->flags & 0x40) != 0 )
          {
            v23 = DB_GetGfxImageIndex(cutoutMap);
            Stream_AddImageDistance(v23, (StreamDistance)65542);
          }
        }
        v24 = DCONST_DVARBOOL_stream_hintTerrain;
        if ( !DCONST_DVARBOOL_stream_hintTerrain && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_hintTerrain") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v24);
        if ( !v24->current.enabled )
          goto LABEL_290;
        v25 = v16->wldBounds.midPoint.v[0];
        v286.m128_i32[3] = 0;
        v27 = v286;
        v27.m128_f32[0] = v25;
        _XMM4 = v27;
        __asm
        {
          vinsertps xmm4, xmm4, dword ptr [rcx+4], 10h
          vinsertps xmm4, xmm4, dword ptr [rcx+8], 20h ; ' '
        }
        v286 = _XMM4;
        v30 = v16->wldBounds.halfSize.v[0];
        v287.m128_i32[3] = 0;
        v32 = v287;
        v32.m128_f32[0] = v30;
        _XMM3 = v32;
        __asm
        {
          vinsertps xmm3, xmm3, dword ptr [rcx+10h], 10h
          vinsertps xmm3, xmm3, dword ptr [rcx+14h], 20h ; ' '
        }
        v287 = _XMM3;
        v285 = _mm128_sub_ps(_XMM4, _XMM3);
        v284 = _mm128_add_ps(_XMM4, _XMM3);
        v35 = R_Umbra_IsBoxVisible(&v16->wldBounds, 0, v1->viewInfoIndex, 0) == 1;
        v265 = v4;
        *(float *)v274 = v4;
        iterator.minBound = (float4 *)&v285;
        iterator.maxBound = (float4 *)&v284;
        iterator.realDistanceSq = (float *)v274;
        iterator.streamDistanceSq = &v265;
        Stream_ViewPos_Iterate__lambda_8133dd63ba336d8a21070153c3a07a07_(p_multiView, &iterator);
        if ( v35 || v265 <= 4000000.0 )
        {
          v36 = 1;
          v258 = 1;
          if ( (v16->heightMap->flags & 0x40) != 0 && R_ST_QueryAndClearSurfaceBaseResourceStreamRequest(v16, ST_SURFACE_STREAM_REQUEST_GEO_HEIGHTMAP) )
          {
            v68 = DB_GetGfxImageIndex(v16->heightMap);
            if ( v265 >= v9 )
            {
              Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DVARFLT_stream_farAwayHeightmapsStreamingDistance, "stream_farAwayHeightmapsStreamingDistance");
              StreamDistance::StreamDistance(&v279, *(float *)&Float_Internal_DebugName * *(float *)&Float_Internal_DebugName);
              v69.mValue = *v71;
            }
            else
            {
              v69.mValue = 65542;
            }
            Stream_AddImageDistance(v68, v69);
          }
          if ( (v16->cutoutMap->flags & 0x40) != 0 && R_ST_QueryAndClearSurfaceBaseResourceStreamRequest(v16, ST_SURFACE_STREAM_REQUEST_GEO_CUTOUTMAP) )
          {
            v72 = DB_GetGfxImageIndex(v16->cutoutMap);
            Stream_AddImageDistance(v72, (StreamDistance)65542);
          }
        }
        else
        {
          v36 = 0;
          v258 = 0;
        }
        v = p_multiView->viewPos[0].v;
        _mm_shuffle_ps(v, v, 85);
        _mm_shuffle_ps(v, v, 170);
        v288.m128_i32[3] = 0;
        v39 = v288;
        v39.m128_f32[0] = v.m128_f32[0];
        _XMM6 = v39;
        __asm
        {
          vinsertps xmm6, xmm6, xmm1, 10h
          vinsertps xmm6, xmm6, xmm0, 20h ; ' '
        }
        v288 = _XMM6;
        _XMM7 = v284;
        v43 = DVARFLT_stream_superTerrainHeightScaling;
        if ( !DVARFLT_stream_superTerrainHeightScaling && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_superTerrainHeightScaling") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v43);
        __asm
        {
          vminps  xmm0, xmm7, xmm6
          vmaxps  xmm3, xmm0, xmm8
        }
        _XMM0 = _xmm;
        __asm { vinsertps xmm0, xmm0, dword ptr [rdi+28h], 20h ; ' ' }
        _XMM2 = _mm128_add_ps(_mm128_mul_ps(_mm128_sub_ps(_XMM6, _XMM3), _XMM0), _XMM3);
        _mm_shuffle_ps(_XMM2, _XMM2, 85);
        __asm
        {
          vextractps [rbp+210h+var_220], xmm2, 2
          vunpcklps xmm0, xmm2, xmm1
        }
        *(double *)viewPos.v = *(double *)&_XMM0;
        viewPos.v[2] = v280;
        *(float *)&v50 = COERCE_FLOAT(R_ST_CombinedMapUsageForSurface(v16, &viewPos));
        v263 = *(float *)&v50;
        v51 = 1;
        if ( v275->multiView.viewCount > 1 )
        {
          p_v = &v275->multiView.viewPos[1].v;
          do
          {
            if ( v50 == ST_COMBINED_MAP_USAGE_MIXED )
              break;
            v53 = *p_v;
            _mm_shuffle_ps(v53, v53, 85);
            *(__m128 *)&iterator.minBound = *p_v;
            _mm_shuffle_ps(v53, v53, 170);
            v289.m128_i32[3] = 0;
            v55 = v289;
            v55.m128_f32[0] = v53.m128_f32[0];
            _XMM6 = v55;
            __asm
            {
              vinsertps xmm6, xmm6, xmm2, 10h
              vinsertps xmm6, xmm6, xmm0, 20h ; ' '
            }
            v289 = _XMM6;
            _XMM7 = v284;
            v59 = DVARFLT_stream_superTerrainHeightScaling;
            if ( !DVARFLT_stream_superTerrainHeightScaling && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_superTerrainHeightScaling") )
              __debugbreak();
            Dvar_CheckFrontendServerThread(v59);
            __asm
            {
              vminps  xmm0, xmm7, xmm6
              vmaxps  xmm3, xmm0, xmm8
            }
            _XMM0 = _xmm;
            __asm { vinsertps xmm0, xmm0, dword ptr [rdi+28h], 20h ; ' ' }
            _XMM2 = _mm128_add_ps(_mm128_mul_ps(_mm128_sub_ps(_XMM6, _XMM3), _XMM0), _XMM3);
            _mm_shuffle_ps(_XMM2, _XMM2, 85);
            __asm
            {
              vextractps [rbp+210h+var_210], xmm2, 2
              vunpcklps xmm0, xmm2, xmm1
            }
            *(double *)v292.v = *(double *)&_XMM0;
            v292.v[2] = v281;
            if ( R_ST_CombinedMapUsageForSurface(v16, &v292) != v50 )
              v50 = ST_COMBINED_MAP_USAGE_MIXED;
            ++v51;
            ++p_v;
          }
          while ( v51 < v275->multiView.viewCount );
          v263 = *(float *)&v50;
          v36 = v258;
        }
        v66 = 0;
        v67 = streamFrontendGlob->loadSync.startTimeMs > 0 || streamFrontendGlob->loadSync.isActiveInFrontend;
        if ( LODWORD(v263) != 2 && (v36 || v67) )
        {
          p_tileMaterialDistancesSq = &tileMaterialDistancesSq;
          for ( i = 32i64; i; --i )
            *p_tileMaterialDistancesSq++ = 3.4028235e38;
          v75 = multiView;
          _EDX = R_ST_Stream_UpdateMaterialDistances(v16, multiView, &tileMaterialDistancesSq);
          if ( v67 )
          {
            _EDX = (1 << v16->layerCount) - 1;
            _XMM1 = 0i64;
            _XMM0 = LODWORD(tileMaterialDistancesSq);
            if ( tileMaterialDistancesSq != v4 )
              __asm { vmaxss  xmm1, xmm0, xmm2 }
            _XMM0 = LODWORD(v295);
            if ( v295 != v4 )
              __asm { vmaxss  xmm1, xmm0, xmm1 }
            _XMM0 = LODWORD(v296);
            if ( v296 != v4 )
              __asm { vmaxss  xmm1, xmm0, xmm1 }
            _XMM0 = LODWORD(v297);
            if ( v297 != v4 )
              __asm { vmaxss  xmm1, xmm0, xmm1 }
            _XMM0 = LODWORD(v298);
            if ( v298 != v4 )
              __asm { vmaxss  xmm1, xmm0, xmm1 }
            _XMM0 = LODWORD(v299);
            if ( v299 != v4 )
              __asm { vmaxss  xmm1, xmm0, xmm1 }
            _XMM0 = LODWORD(v300);
            if ( v300 != v4 )
              __asm { vmaxss  xmm1, xmm0, xmm1 }
            _XMM0 = LODWORD(v301);
            if ( v301 != v4 )
              __asm { vmaxss  xmm1, xmm0, xmm1 }
            _XMM0 = LODWORD(v302);
            if ( v302 != v4 )
              __asm { vmaxss  xmm1, xmm0, xmm1 }
            _XMM0 = LODWORD(v303);
            if ( v303 != v4 )
              __asm { vmaxss  xmm1, xmm0, xmm1 }
            _XMM0 = LODWORD(v304);
            if ( v304 != v4 )
              __asm { vmaxss  xmm1, xmm0, xmm1 }
            _XMM0 = LODWORD(v305);
            if ( v305 != v4 )
              __asm { vmaxss  xmm1, xmm0, xmm1 }
            _XMM0 = LODWORD(v306);
            if ( v306 != v4 )
              __asm { vmaxss  xmm1, xmm0, xmm1 }
            _XMM0 = LODWORD(v307);
            if ( v307 != v4 )
              __asm { vmaxss  xmm1, xmm0, xmm1 }
            _XMM0 = LODWORD(v308);
            if ( v308 != v4 )
              __asm { vmaxss  xmm1, xmm0, xmm1 }
            _XMM0 = LODWORD(v309);
            if ( v309 != v4 )
              __asm { vmaxss  xmm1, xmm0, xmm1 }
            _XMM0 = LODWORD(v310);
            if ( v310 != v4 )
              __asm { vmaxss  xmm1, xmm0, xmm1 }
            if ( v311 != v4 )
              __asm { vmaxss  xmm1, xmm1, xmm0 }
            if ( v312 != v4 )
              __asm { vmaxss  xmm1, xmm1, xmm15 }
            _XMM14 = LODWORD(v313);
            if ( v313 != v4 )
              __asm { vmaxss  xmm1, xmm1, xmm14 }
            _XMM13 = LODWORD(v314);
            if ( v314 != v4 )
              __asm { vmaxss  xmm1, xmm1, xmm13 }
            _XMM12 = LODWORD(v315);
            if ( v315 != v4 )
              __asm { vmaxss  xmm1, xmm1, xmm12 }
            _XMM11 = LODWORD(v316);
            if ( v316 != v4 )
              __asm { vmaxss  xmm1, xmm1, xmm11 }
            _XMM10 = LODWORD(v317);
            if ( v317 != v4 )
              __asm { vmaxss  xmm1, xmm1, xmm10 }
            _XMM9 = LODWORD(v318);
            if ( v318 != 3.4028235e38 )
              __asm { vmaxss  xmm1, xmm1, xmm9 }
            _XMM8 = LODWORD(v319);
            if ( v319 != 3.4028235e38 )
              __asm { vmaxss  xmm1, xmm1, xmm8 }
            _XMM7 = LODWORD(v320);
            if ( v320 != 3.4028235e38 )
              __asm { vmaxss  xmm1, xmm1, xmm7 }
            _XMM6 = LODWORD(v321);
            if ( v321 != 3.4028235e38 )
              __asm { vmaxss  xmm1, xmm1, xmm6 }
            _XMM5 = LODWORD(v322);
            if ( v322 != 3.4028235e38 )
              __asm { vmaxss  xmm1, xmm1, xmm5 }
            _XMM4 = LODWORD(v323);
            if ( v323 != 3.4028235e38 )
              __asm { vmaxss  xmm1, xmm1, xmm4 }
            _XMM3 = LODWORD(v324);
            if ( v324 != 3.4028235e38 )
              __asm { vmaxss  xmm1, xmm1, xmm3 }
            _XMM2 = LODWORD(v325);
            if ( v325 != 3.4028235e38 )
              __asm { vmaxss  xmm1, xmm1, xmm2 }
            if ( *(float *)&_XMM1 <= 0.0 )
            {
              v4 = FLOAT_3_4028235e38;
            }
            else
            {
              _XMM15 = LODWORD(tileMaterialDistancesSq);
              __asm
              {
                vcmpeqss xmm0, xmm15, xmm0
                vblendvps xmm0, xmm15, xmm1, xmm0
              }
              tileMaterialDistancesSq = *(float *)&_XMM0;
              _XMM15 = LODWORD(v295);
              __asm
              {
                vcmpeqss xmm0, xmm15, cs:__real@7f7fffff
                vblendvps xmm0, xmm15, xmm1, xmm0
              }
              v295 = *(float *)&_XMM0;
              _XMM15 = LODWORD(v296);
              __asm
              {
                vcmpeqss xmm0, xmm15, cs:__real@7f7fffff
                vblendvps xmm0, xmm15, xmm1, xmm0
              }
              v296 = *(float *)&_XMM0;
              _XMM15 = LODWORD(v297);
              __asm
              {
                vcmpeqss xmm0, xmm15, cs:__real@7f7fffff
                vblendvps xmm0, xmm15, xmm1, xmm0
              }
              v297 = *(float *)&_XMM0;
              _XMM15 = LODWORD(v298);
              __asm
              {
                vcmpeqss xmm0, xmm15, cs:__real@7f7fffff
                vblendvps xmm0, xmm15, xmm1, xmm0
              }
              v298 = *(float *)&_XMM0;
              _XMM15 = LODWORD(v299);
              __asm
              {
                vcmpeqss xmm0, xmm15, cs:__real@7f7fffff
                vblendvps xmm0, xmm15, xmm1, xmm0
              }
              v299 = *(float *)&_XMM0;
              _XMM15 = LODWORD(v300);
              __asm
              {
                vcmpeqss xmm0, xmm15, cs:__real@7f7fffff
                vblendvps xmm0, xmm15, xmm1, xmm0
              }
              v300 = *(float *)&_XMM0;
              _XMM15 = LODWORD(v301);
              __asm
              {
                vcmpeqss xmm0, xmm15, cs:__real@7f7fffff
                vblendvps xmm0, xmm15, xmm1, xmm0
              }
              v301 = *(float *)&_XMM0;
              _XMM15 = LODWORD(v302);
              __asm
              {
                vcmpeqss xmm0, xmm15, cs:__real@7f7fffff
                vblendvps xmm0, xmm15, xmm1, xmm0
              }
              v302 = *(float *)&_XMM0;
              _XMM15 = LODWORD(v303);
              __asm
              {
                vcmpeqss xmm0, xmm15, cs:__real@7f7fffff
                vblendvps xmm0, xmm15, xmm1, xmm0
              }
              v303 = *(float *)&_XMM0;
              _XMM15 = LODWORD(v304);
              __asm
              {
                vcmpeqss xmm0, xmm15, cs:__real@7f7fffff
                vblendvps xmm0, xmm15, xmm1, xmm0
              }
              v304 = *(float *)&_XMM0;
              _XMM15 = LODWORD(v305);
              __asm
              {
                vcmpeqss xmm0, xmm15, cs:__real@7f7fffff
                vblendvps xmm0, xmm15, xmm1, xmm0
              }
              v305 = *(float *)&_XMM0;
              _XMM15 = LODWORD(v306);
              __asm
              {
                vcmpeqss xmm0, xmm15, cs:__real@7f7fffff
                vblendvps xmm0, xmm15, xmm1, xmm0
              }
              v306 = *(float *)&_XMM0;
              _XMM15 = LODWORD(v307);
              __asm
              {
                vcmpeqss xmm0, xmm15, cs:__real@7f7fffff
                vblendvps xmm0, xmm15, xmm1, xmm0
              }
              v307 = *(float *)&_XMM0;
              _XMM15 = LODWORD(v308);
              __asm
              {
                vcmpeqss xmm0, xmm15, cs:__real@7f7fffff
                vblendvps xmm0, xmm15, xmm1, xmm0
              }
              v308 = *(float *)&_XMM0;
              _XMM15 = LODWORD(v309);
              __asm
              {
                vcmpeqss xmm0, xmm15, cs:__real@7f7fffff
                vblendvps xmm0, xmm15, xmm1, xmm0
              }
              v309 = *(float *)&_XMM0;
              _XMM15 = LODWORD(v310);
              __asm
              {
                vcmpeqss xmm0, xmm15, cs:__real@7f7fffff
                vblendvps xmm0, xmm15, xmm1, xmm0
              }
              v310 = *(float *)&_XMM0;
              _XMM0 = LODWORD(v311);
              __asm { vcmpeqss xmm0, xmm0, cs:__real@7f7fffff }
              _XMM15 = LODWORD(v311);
              __asm { vblendvps xmm0, xmm15, xmm1, xmm0 }
              v311 = *(float *)&_XMM0;
              _XMM15 = LODWORD(v312);
              __asm
              {
                vcmpeqss xmm0, xmm15, cs:__real@7f7fffff
                vblendvps xmm0, xmm15, xmm1, xmm0
              }
              v312 = *(float *)&_XMM0;
              __asm
              {
                vcmpeqss xmm0, xmm14, xmm15
                vblendvps xmm0, xmm14, xmm1, xmm0
              }
              v313 = *(float *)&_XMM0;
              __asm
              {
                vcmpeqss xmm0, xmm13, xmm15
                vblendvps xmm0, xmm13, xmm1, xmm0
              }
              v314 = *(float *)&_XMM0;
              __asm
              {
                vcmpeqss xmm0, xmm12, xmm15
                vblendvps xmm0, xmm12, xmm1, xmm0
              }
              v315 = *(float *)&_XMM0;
              __asm
              {
                vcmpeqss xmm0, xmm11, xmm15
                vblendvps xmm0, xmm11, xmm1, xmm0
              }
              v316 = *(float *)&_XMM0;
              __asm
              {
                vcmpeqss xmm0, xmm10, xmm15
                vblendvps xmm0, xmm10, xmm1, xmm0
              }
              v317 = *(float *)&_XMM0;
              __asm
              {
                vcmpeqss xmm0, xmm9, xmm15
                vblendvps xmm0, xmm9, xmm1, xmm0
              }
              v318 = *(float *)&_XMM0;
              v4 = FLOAT_3_4028235e38;
              __asm
              {
                vcmpeqss xmm0, xmm8, xmm9
                vblendvps xmm0, xmm8, xmm1, xmm0
              }
              v319 = *(float *)&_XMM0;
              __asm
              {
                vcmpeqss xmm0, xmm7, xmm9
                vblendvps xmm0, xmm7, xmm1, xmm0
              }
              v320 = *(float *)&_XMM0;
              __asm
              {
                vcmpeqss xmm0, xmm6, xmm9
                vblendvps xmm0, xmm6, xmm1, xmm0
              }
              v321 = *(float *)&_XMM0;
              __asm
              {
                vcmpeqss xmm0, xmm5, xmm9
                vblendvps xmm0, xmm5, xmm1, xmm0
              }
              v322 = *(float *)&_XMM0;
              __asm
              {
                vcmpeqss xmm0, xmm4, xmm9
                vblendvps xmm0, xmm4, xmm1, xmm0
              }
              v323 = *(float *)&_XMM0;
              __asm
              {
                vcmpeqss xmm0, xmm3, xmm9
                vblendvps xmm0, xmm3, xmm1, xmm0
              }
              v324 = *(float *)&_XMM0;
              __asm
              {
                vcmpeqss xmm0, xmm2, xmm9
                vblendvps xmm0, xmm2, xmm1, xmm0
              }
              v325 = *(float *)&_XMM0;
            }
            v7 = v271;
            v11 = v270;
            v15 = FLOAT_0_5;
            v9 = v269;
            *(float *)&_XMM10 = v260;
          }
          v66 = 1;
          v259 = 1;
          if ( !_EDX )
            goto LABEL_221;
          do
          {
            __asm { tzcnt   eax, edx }
            v262 = _RAX;
            _EDX &= ~(1 << _RAX);
            v261 = _EDX;
            _RAX = (unsigned int)_RAX;
            v277 = _RAX;
            _XMM3 = *((unsigned int *)&tileMaterialDistancesSq + (unsigned int)_RAX);
            if ( *(float *)&_XMM3 < *(float *)&v11 )
            {
              __asm { vminss  xmm10, xmm3, xmm10 }
              minBound = (float4 *)&v16->layerMaterials[(unsigned int)_RAX];
              iterator.minBound = minBound;
              _XMM0 = minBound[3].v.m128_u8[12];
              __asm { vpcmpeqd xmm2, xmm0, xmm1 }
              _XMM0 = 0i64;
              __asm { vblendvps xmm0, xmm0, xmm3, xmm2 }
              *(float *)&v264 = *(float *)&_XMM0;
              *(float *)&v264 = (float)(*(float *)&_XMM0 + 1.0) * minBound[3].v.m128_f32[0];
              v199 = *(float *)&v264;
              v274[1] = v264;
              if ( (v264 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_distance.h", 188, ASSERT_TYPE_SANITY, "( !IS_NAN( distance ) )", (const char *)&queryFormat, "!IS_NAN( distance )") )
                __debugbreak();
              v200 = (unsigned int)v264 >> 7;
              v201 = -1;
              v202 = 0i64;
              v203 = 4i64;
              v264 = 4i64;
              do
              {
                BindlessImageFromFlattenedIndex = R_ST_GetBindlessImageFromFlattenedIndex(*(_WORD *)(minBound->v.m128_u64[1] + v202));
                v205 = BindlessImageFromFlattenedIndex;
                if ( BindlessImageFromFlattenedIndex && (BindlessImageFromFlattenedIndex->flags & 0x40) != 0 )
                {
                  v206 = DB_GetGfxImageIndex(BindlessImageFromFlattenedIndex);
                  v207 = v206;
                  if ( v206 >= 0x14000 )
                  {
                    LODWORD(v257) = 81920;
                    LODWORD(v256) = v206;
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_internal.h", 421, ASSERT_TYPE_ASSERT, "(unsigned)( imageIndex ) < (unsigned)( IMAGE_POOL_SIZE )", "imageIndex doesn't index IMAGE_POOL_SIZE\n\t%i not in [0, %i)", v256, v257) )
                      __debugbreak();
                  }
                  v208 = DCONST_DVARBOOL_stream_pedanticAddImageChecks;
                  if ( !DCONST_DVARBOOL_stream_pedanticAddImageChecks && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_pedanticAddImageChecks") )
                    __debugbreak();
                  Dvar_CheckFrontendServerThread(v208);
                  if ( v208->current.enabled && (DB_GetGfxImageAtIndex(v207)->flags & 0x40) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_internal.h", 426, ASSERT_TYPE_ASSERT, "(R_IsStreamedImage( image ))", (const char *)&queryFormat, "R_IsStreamedImage( image )") )
                    __debugbreak();
                  v209 = streamFrontendGlob;
                  if ( (unsigned int)v207 >= 0x14000 )
                  {
                    LODWORD(v257) = 81920;
                    LODWORD(v256) = v207;
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_sortlist.h", 366, ASSERT_TYPE_ASSERT, "(unsigned)( assetIndex ) < (unsigned)( ( sizeof( *array_counter( mDistances ) ) + 0 ) )", "assetIndex doesn't index ARRAY_COUNT( mDistances )\n\t%i not in [0, %i)", v256, v257) )
                      __debugbreak();
                  }
                  if ( v200 < v209->imageDistance.mDistances[v207].mValue )
                    v209->imageDistance.mDistances[v207].mValue = v200;
                  Com_BitSetAssert(v209->imageDistance.mValueSet, v207, 10240);
                  height = v205->height;
                  if ( v205->width > height )
                    height = v205->width;
                  v211 = __lzcnt(height) ^ 0x1F;
                  v212 = v211 + 1;
                  if ( (~(1 << v211) & height) == 0 )
                    v212 = v211;
                  if ( v212 < 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 1765, ASSERT_TYPE_ASSERT, "(mipCount >= 5)", (const char *)&queryFormat, "mipCount >= 5") )
                    __debugbreak();
                  if ( v212 > v201 )
                    v212 = v201;
                  v201 = v212;
                  minBound = iterator.minBound;
                  v203 = v264;
                }
                v202 += 2i64;
                v264 = --v203;
              }
              while ( v203 );
              v213 = (__int64)v268;
              v66 = v259 && R_ST_AreAllMaterialLayerBaseMipsAvailable((const StTerrainMaterialLayer *)minBound);
              v259 = v66;
              if ( v201 == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 1776, ASSERT_TYPE_ASSERT, "(smallestMipCount != std::numeric_limits<uint>::max())", (const char *)&queryFormat, "smallestMipCount != std::numeric_limits<uint>::max()") )
                __debugbreak();
              v214 = (__int64)v267;
              if ( v262 >= v267->layerMaskMapIdxsCount )
              {
                LODWORD(v257) = v267->layerMaskMapIdxsCount;
                LODWORD(v256) = v262;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 1777, ASSERT_TYPE_ASSERT, "(unsigned)( matLayerIndex ) < (unsigned)( surface.layerMaskMapIdxsCount )", "matLayerIndex doesn't index surface.layerMaskMapIdxsCount\n\t%i not in [0, %i)", v256, v257) )
                  __debugbreak();
              }
              v215 = *(unsigned __int16 *)(*(_QWORD *)(v214 + 328) + 2 * v277);
              if ( v215 >= *(_DWORD *)(v213 + 40) )
              {
                LODWORD(v257) = *(_DWORD *)(v213 + 40);
                LODWORD(v256) = v215;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 1779, ASSERT_TYPE_ASSERT, "(unsigned)( layerMaskIndex ) < (unsigned)( terrain->flattenedImagesCount )", "layerMaskIndex doesn't index terrain->flattenedImagesCount\n\t%i not in [0, %i)", v256, v257) )
                  __debugbreak();
              }
              v216 = *(GfxImage **)(*(_QWORD *)(v213 + 48) + 8i64 * (unsigned __int16)v215);
              if ( !v216 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 1781, ASSERT_TYPE_ASSERT, "(layerMaskImage)", (const char *)&queryFormat, "layerMaskImage") )
                __debugbreak();
              if ( (v216->flags & 0x40) != 0 )
              {
                v217 = DB_GetGfxImageIndex(v216);
                if ( v216 != rgp.whiteImage && v216 != rgp.blackImage && v216->semantic != TS_GRAY_MAP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 1790, ASSERT_TYPE_ASSERT, "(layerMaskImage == rgp.whiteImage || layerMaskImage == rgp.blackImage || layerMaskImage->semantic == TS_GRAY_MAP)", (const char *)&queryFormat, "layerMaskImage == rgp.whiteImage || layerMaskImage == rgp.blackImage || layerMaskImage->semantic == TS_GRAY_MAP") )
                  __debugbreak();
                v218 = DCONST_DVARFLT_stream_distanceSemanticBiasGray;
                if ( !DCONST_DVARFLT_stream_distanceSemanticBiasGray && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_distanceSemanticBiasGray") )
                  __debugbreak();
                Dvar_CheckFrontendServerThread(v218);
                *(float *)&v264 = (float)((float)(1.0 - v7) * (float)(v199 / (float)((float)(v218->current.value * v218->current.value) * (float)((float)(1 << (v201 - 5)) * (float)(1 << (v201 - 5)))))) / (float)(1 << (2 * (4 - v216->streamedPartCount)));
                if ( (v264 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_distance.h", 188, ASSERT_TYPE_SANITY, "( !IS_NAN( distance ) )", (const char *)&queryFormat, "!IS_NAN( distance )") )
                  __debugbreak();
                v219 = (unsigned int)v264 >> 7;
                if ( (unsigned int)v217 >= 0x14000 )
                {
                  LODWORD(v257) = 81920;
                  LODWORD(v256) = v217;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_internal.h", 421, ASSERT_TYPE_ASSERT, "(unsigned)( imageIndex ) < (unsigned)( IMAGE_POOL_SIZE )", "imageIndex doesn't index IMAGE_POOL_SIZE\n\t%i not in [0, %i)", v256, v257) )
                    __debugbreak();
                }
                v220 = DCONST_DVARBOOL_stream_pedanticAddImageChecks;
                if ( !DCONST_DVARBOOL_stream_pedanticAddImageChecks && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_pedanticAddImageChecks") )
                  __debugbreak();
                Dvar_CheckFrontendServerThread(v220);
                if ( v220->current.enabled && (DB_GetGfxImageAtIndex(v217)->flags & 0x40) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_internal.h", 426, ASSERT_TYPE_ASSERT, "(R_IsStreamedImage( image ))", (const char *)&queryFormat, "R_IsStreamedImage( image )") )
                  __debugbreak();
                v221 = streamFrontendGlob;
                if ( (unsigned int)v217 >= 0x14000 )
                {
                  LODWORD(v257) = 81920;
                  LODWORD(v256) = v217;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_sortlist.h", 366, ASSERT_TYPE_ASSERT, "(unsigned)( assetIndex ) < (unsigned)( ( sizeof( *array_counter( mDistances ) ) + 0 ) )", "assetIndex doesn't index ARRAY_COUNT( mDistances )\n\t%i not in [0, %i)", v256, v257) )
                    __debugbreak();
                }
                if ( v219 < v221->imageDistance.mDistances[v217].mValue )
                  v221->imageDistance.mDistances[v217].mValue = v219;
                Com_BitSetAssert(v221->imageDistance.mValueSet, v217, 10240);
                v222 = Stream_CheckImageLowMipUsable(v216);
                v66 = v66 && v222;
                v259 = v66;
                if ( !v222 && (float)(v9 * v15) > *(&tileMaterialDistancesSq + v277) )
                  R_WarnOncePerFrame(R_WARN_ST_FRAME_WAITING_ON_LAYER_MASK, v216->name);
              }
              _EDX = v261;
              v16 = v267;
            }
          }
          while ( _EDX );
          v260 = *(float *)&_XMM10;
          v4 = FLOAT_3_4028235e38;
        }
        v75 = multiView;
LABEL_221:
        if ( v263 != 0.0 || !v66 )
        {
          v263 = v4;
          iterator.minBound = (float4 *)&v263;
          iterator.maxBound = (float4 *)&v285;
          iterator.realDistanceSq = (float *)&v284;
          Stream_ViewPos_Iterate__lambda_008c2e1acdafeb250ed2f4918c1e72f6_(v75, (const Stream_UpdateDynamic_SuperTerrain::__l125::<lambda_008c2e1acdafeb250ed2f4918c1e72f6> *)&iterator);
          v223 = (float)((float)(v263 + 1.0) * v16->combinedMapStreamRadiusInvSq) * r_st_combinedMapStreamMetricScale->current.value;
          v224 = DB_GetGfxImageIndex(v16->combinedAlbedoMap);
          *(float *)&v264 = v223;
          if ( (LODWORD(v223) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_distance.h", 188, ASSERT_TYPE_SANITY, "( !IS_NAN( distance ) )", (const char *)&queryFormat, "!IS_NAN( distance )") )
            __debugbreak();
          v225 = (unsigned int)v264 >> 7;
          if ( (unsigned int)v224 >= 0x14000 )
          {
            LODWORD(v257) = 81920;
            LODWORD(v256) = v224;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_internal.h", 421, ASSERT_TYPE_ASSERT, "(unsigned)( imageIndex ) < (unsigned)( IMAGE_POOL_SIZE )", "imageIndex doesn't index IMAGE_POOL_SIZE\n\t%i not in [0, %i)", v256, v257) )
              __debugbreak();
          }
          v226 = DCONST_DVARBOOL_stream_pedanticAddImageChecks;
          if ( !DCONST_DVARBOOL_stream_pedanticAddImageChecks && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_pedanticAddImageChecks") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v226);
          if ( v226->current.enabled && (DB_GetGfxImageAtIndex(v224)->flags & 0x40) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_internal.h", 426, ASSERT_TYPE_ASSERT, "(R_IsStreamedImage( image ))", (const char *)&queryFormat, "R_IsStreamedImage( image )") )
            __debugbreak();
          v227 = streamFrontendGlob;
          if ( (unsigned int)v224 >= 0x14000 )
          {
            LODWORD(v257) = 81920;
            LODWORD(v256) = v224;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_sortlist.h", 366, ASSERT_TYPE_ASSERT, "(unsigned)( assetIndex ) < (unsigned)( ( sizeof( *array_counter( mDistances ) ) + 0 ) )", "assetIndex doesn't index ARRAY_COUNT( mDistances )\n\t%i not in [0, %i)", v256, v257) )
              __debugbreak();
          }
          if ( v225 < v227->imageDistance.mDistances[v224].mValue )
            v227->imageDistance.mDistances[v224].mValue = v225;
          Com_BitSetAssert(v227->imageDistance.mValueSet, v224, 10240);
          v228 = DB_GetGfxImageIndex(v16->combinedNogMap);
          *(float *)&v264 = v223;
          if ( (LODWORD(v223) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_distance.h", 188, ASSERT_TYPE_SANITY, "( !IS_NAN( distance ) )", (const char *)&queryFormat, "!IS_NAN( distance )") )
            __debugbreak();
          v229 = (unsigned int)v264 >> 7;
          if ( (unsigned int)v228 >= 0x14000 )
          {
            LODWORD(v257) = 81920;
            LODWORD(v256) = v228;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_internal.h", 421, ASSERT_TYPE_ASSERT, "(unsigned)( imageIndex ) < (unsigned)( IMAGE_POOL_SIZE )", "imageIndex doesn't index IMAGE_POOL_SIZE\n\t%i not in [0, %i)", v256, v257) )
              __debugbreak();
          }
          v230 = DCONST_DVARBOOL_stream_pedanticAddImageChecks;
          if ( !DCONST_DVARBOOL_stream_pedanticAddImageChecks && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_pedanticAddImageChecks") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v230);
          if ( v230->current.enabled && (DB_GetGfxImageAtIndex(v228)->flags & 0x40) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_internal.h", 426, ASSERT_TYPE_ASSERT, "(R_IsStreamedImage( image ))", (const char *)&queryFormat, "R_IsStreamedImage( image )") )
            __debugbreak();
          v231 = streamFrontendGlob;
          if ( (unsigned int)v228 >= 0x14000 )
          {
            LODWORD(v257) = 81920;
            LODWORD(v256) = v228;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_sortlist.h", 366, ASSERT_TYPE_ASSERT, "(unsigned)( assetIndex ) < (unsigned)( ( sizeof( *array_counter( mDistances ) ) + 0 ) )", "assetIndex doesn't index ARRAY_COUNT( mDistances )\n\t%i not in [0, %i)", v256, v257) )
              __debugbreak();
          }
          if ( v229 < v231->imageDistance.mDistances[v228].mValue )
            v231->imageDistance.mDistances[v228].mValue = v229;
          Com_BitSetAssert(v231->imageDistance.mValueSet, v228, 10240);
        }
        if ( R_ST_QueryAndClearSurfaceBaseResourceStreamRequest(v16, ST_SURFACE_STREAM_REQUEST_LIGHTMAP) )
        {
          lightmapIndex = v16->lightmapIndex;
          v233 = v268;
          if ( (lightmapIndex == 510 || lightmapIndex >= v268->lightmapCount) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 1860, ASSERT_TYPE_ASSERT, "(surface.lightmapIndex != LIGHTMAP_NONE && surface.lightmapIndex < terrain->lightmapCount)", (const char *)&queryFormat, "surface.lightmapIndex != LIGHTMAP_NONE && surface.lightmapIndex < terrain->lightmapCount") )
            __debugbreak();
          images = (const GfxImage **)v233->lightmaps[v16->lightmapIndex].images;
          v235 = 3i64;
          do
          {
            v236 = DB_GetGfxImageIndex(*images);
            v237 = v236;
            if ( v236 >= 0x14000 )
            {
              LODWORD(v257) = 81920;
              LODWORD(v256) = v236;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_internal.h", 421, ASSERT_TYPE_ASSERT, "(unsigned)( imageIndex ) < (unsigned)( IMAGE_POOL_SIZE )", "imageIndex doesn't index IMAGE_POOL_SIZE\n\t%i not in [0, %i)", v256, v257) )
                __debugbreak();
            }
            v238 = DCONST_DVARBOOL_stream_pedanticAddImageChecks;
            if ( !DCONST_DVARBOOL_stream_pedanticAddImageChecks && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_pedanticAddImageChecks") )
              __debugbreak();
            Dvar_CheckFrontendServerThread(v238);
            if ( v238->current.enabled && (DB_GetGfxImageAtIndex(v237)->flags & 0x40) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_internal.h", 426, ASSERT_TYPE_ASSERT, "(R_IsStreamedImage( image ))", (const char *)&queryFormat, "R_IsStreamedImage( image )") )
              __debugbreak();
            v239 = streamFrontendGlob;
            if ( (unsigned int)v237 >= 0x14000 )
            {
              LODWORD(v257) = 81920;
              LODWORD(v256) = v237;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_sortlist.h", 366, ASSERT_TYPE_ASSERT, "(unsigned)( assetIndex ) < (unsigned)( ( sizeof( *array_counter( mDistances ) ) + 0 ) )", "assetIndex doesn't index ARRAY_COUNT( mDistances )\n\t%i not in [0, %i)", v256, v257) )
                __debugbreak();
            }
            if ( v239->imageDistance.mDistances[v237].mValue > 0x10006 )
              v239->imageDistance.mDistances[v237].mValue = 65542;
            Com_BitSetAssert(v239->imageDistance.mValueSet, v237, 10240);
            ++images;
            --v235;
          }
          while ( v235 );
          v16 = v267;
        }
        v240 = 0;
        v1 = v275;
        if ( v275->multiView.viewCount > 0 )
        {
          v241 = &v275->multiView;
          viewZoomFactors = v275->multiView.viewZoomFactors;
          do
          {
            v243 = v241->viewPos[0].v;
            _mm_shuffle_ps(v243, v243, 85);
            *(float4 *)&iterator.minBound = v241->viewPos[0];
            _mm_shuffle_ps(v243, v243, 170);
            v290.m128_i32[3] = 0;
            v245 = v290;
            v245.m128_f32[0] = v243.m128_f32[0];
            _XMM6 = v245;
            __asm
            {
              vinsertps xmm6, xmm6, xmm2, 10h
              vinsertps xmm6, xmm6, xmm0, 20h ; ' '
            }
            v290 = _XMM6;
            _XMM7 = v284;
            v249 = DVARFLT_stream_superTerrainHeightScaling;
            if ( !DVARFLT_stream_superTerrainHeightScaling && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_superTerrainHeightScaling") )
              __debugbreak();
            Dvar_CheckFrontendServerThread(v249);
            __asm
            {
              vminps  xmm0, xmm7, xmm6
              vmaxps  xmm3, xmm0, xmm8
            }
            _XMM0 = _xmm;
            __asm { vinsertps xmm0, xmm0, dword ptr [rdi+28h], 20h ; ' ' }
            _XMM2 = _mm128_add_ps(_XMM3, _mm128_mul_ps(_mm128_sub_ps(_XMM6, _XMM3), _XMM0));
            _mm_shuffle_ps(_XMM2, _XMM2, 85);
            __asm
            {
              vextractps [rbp+210h+var_200], xmm2, 2
              vunpcklps xmm0, xmm2, xmm1
            }
            *(double *)dpvsCamPos.v = *(double *)&_XMM0;
            dpvsCamPos.v[2] = v282;
            R_ST_GeomStreamTerrainSurface(v16, &dpvsCamPos, *viewZoomFactors);
            ++v240;
            ++viewZoomFactors;
            v241 = (StreamUpdateMultiView *)((char *)v241 + 16);
          }
          while ( v240 < v1->multiView.viewCount );
        }
        v14 = v266;
        p_multiView = &v1->multiView;
        terrain = v268;
LABEL_290:
        v266 = ++v14;
        v13 = ++v278;
        if ( v14 >= v272 )
        {
          surfaceCount = v272;
          break;
        }
      }
    }
    if ( v1->localClientNum >= (unsigned int)LOCAL_CLIENT_COUNT )
    {
      LODWORD(v257) = 2;
      LODWORD(v256) = v1->localClientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 1880, ASSERT_TYPE_ASSERT, "(unsigned)( cmd->localClientNum ) < (unsigned)( ( sizeof( *array_counter( streamFrontendGlob->minDistanceToClutter ) ) + 0 ) )", "cmd->localClientNum doesn't index streamFrontendGlob->minDistanceToClutter\n\t%i not in [0, %i)", v256, v257) )
        __debugbreak();
    }
    streamFrontendGlob->minDistanceToClutter[v1->localClientNum] = fsqrt(*(float *)&_XMM10);
    if ( surfaceCount != terrain->surfaceCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 1883, ASSERT_TYPE_ASSERT, "( surfaceCount ) == ( terrain->surfaceCount )", "%s == %s\n\t%u, %u", "surfaceCount", "terrain->surfaceCount", surfaceCount, terrain->surfaceCount) )
      __debugbreak();
  }
  Sys_ProfEndNamedEvent();
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
  float value; 
  __int128 v4; 
  float v5; 
  float biasWithoutFovScale; 
  __int64 v7; 
  GfxWorld *i; 
  GfxClutterCollection *clutterCollections; 
  __int64 v10; 
  __int64 smodelCollectionIndex; 
  Bounds *collectionBounds; 
  __int64 v13; 
  const XModel *model; 
  __int128 v15; 
  __int128 v16; 
  float v17; 
  __int64 viewCount; 
  StreamUpdateMultiView *p_multiView; 
  __m128 v; 
  __m128 v24; 
  __m128 v28; 
  __m128 v32; 
  bool v41; 
  bool v42; 
  const StreamKey *v43; 
  bool IsSafeToUse; 
  const StreamKey *v45; 
  __int64 v46; 
  __int64 v47; 
  int amount; 
  float v49; 
  float v50; 
  __m128 v52; 
  __m128 v53; 
  __m128 v54; 

  Sys_ProfBeginNamedEvent(0xFF808080, "Stream_UpdateDynamic_ClutterLayers");
  terrain = s_stGlob.terrain;
  if ( s_stGlob.terrain )
  {
    enabled = r_st_clutterBitmaskStreamingEnabled->current.enabled;
    amount = enabled ? r_st_clutterStreamBoost->current.integer : 0x200000;
    value = r_st_clutterStreamDistance->current.value;
    v49 = value;
    v4 = 0i64;
    if ( rg.correctedLodParms.clutterRamp.scaleWithoutFovScale <= 0.0 )
    {
      v5 = FLOAT_1_0;
    }
    else
    {
      v4 = LODWORD(FLOAT_1_0);
      v5 = 1.0 / rg.correctedLodParms.clutterRamp.scaleWithoutFovScale;
    }
    biasWithoutFovScale = rg.correctedLodParms.clutterRamp.biasWithoutFovScale;
    v50 = rg.correctedLodParms.clutterRamp.biasWithoutFovScale;
    v7 = 0i64;
    for ( i = rgp.world; (unsigned int)v7 < rgp.world->smodels.clutterCollectionCount; biasWithoutFovScale = v50 )
    {
      clutterCollections = i->smodels.clutterCollections;
      if ( clutterCollections[v7].smodelCollectionIndex >= i->smodels.collectionCount )
      {
        LODWORD(v47) = i->smodels.collectionCount;
        LODWORD(v46) = clutterCollections[v7].smodelCollectionIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 1913, ASSERT_TYPE_ASSERT, "(unsigned)( clutterCollection.smodelCollectionIndex ) < (unsigned)( rgp.world->smodels.collectionCount )", "clutterCollection.smodelCollectionIndex doesn't index rgp.world->smodels.collectionCount\n\t%i not in [0, %i)", v46, v47) )
          __debugbreak();
        i = rgp.world;
      }
      v10 = (__int64)&i->smodels.collections[clutterCollections[v7].smodelCollectionIndex];
      smodelCollectionIndex = clutterCollections[v7].smodelCollectionIndex;
      collectionBounds = i->smodels.collectionBounds;
      if ( clutterCollections[v7].terrainSurfaceIndex >= terrain->surfaceCount )
      {
        LODWORD(v47) = terrain->surfaceCount;
        LODWORD(v46) = clutterCollections[v7].terrainSurfaceIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 1917, ASSERT_TYPE_ASSERT, "(unsigned)( clutterCollection.terrainSurfaceIndex ) < (unsigned)( terrain->surfaceCount )", "clutterCollection.terrainSurfaceIndex doesn't index terrain->surfaceCount\n\t%i not in [0, %i)", v46, v47) )
          __debugbreak();
        i = rgp.world;
      }
      v13 = (__int64)&terrain->surfaces[clutterCollections[v7].terrainSurfaceIndex];
      if ( *(unsigned __int16 *)(v10 + 8) >= i->smodels.modelCount )
      {
        LODWORD(v47) = i->smodels.modelCount;
        LODWORD(v46) = *(unsigned __int16 *)(v10 + 8);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 1921, ASSERT_TYPE_ASSERT, "(unsigned)( smodelCollection.smodelIndex ) < (unsigned)( rgp.world->smodels.modelCount )", "smodelCollection.smodelIndex doesn't index rgp.world->smodels.modelCount\n\t%i not in [0, %i)", v46, v47) )
          __debugbreak();
        i = rgp.world;
      }
      model = i->smodels.models[*(unsigned __int16 *)(v10 + 8)].model;
      if ( !model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 1924, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
        __debugbreak();
      *(double *)&v4 = XModelGetLodOutDist(model);
      v15 = v4;
      *(float *)&v15 = (float)(*(float *)&v4 - biasWithoutFovScale) * v5;
      v16 = v15;
      v17 = *(float *)&v15 + value;
      *(float *)&_XMM4 = FLOAT_3_4028235e38;
      viewCount = cmd->multiView.viewCount;
      if ( viewCount > 0 )
      {
        p_multiView = &cmd->multiView;
        _XMM14 = g_negativeZero.v;
        do
        {
          v = p_multiView->viewPos[0].v;
          _mm_shuffle_ps(v, v, 85);
          _mm_shuffle_ps(v, v, 170);
          v52.m128_i32[3] = 0;
          v24 = v52;
          v24.m128_f32[0] = COERCE_FLOAT(*(_OWORD *)p_multiView->viewPos);
          _XMM3 = v24;
          __asm
          {
            vinsertps xmm3, xmm3, xmm2, 10h
            vinsertps xmm3, xmm3, xmm0, 20h ; ' '
          }
          v52 = _XMM3;
          v53.m128_i32[3] = 0;
          v28 = v53;
          v28.m128_f32[0] = collectionBounds[smodelCollectionIndex].midPoint.v[0];
          _XMM0 = v28;
          __asm
          {
            vinsertps xmm0, xmm0, xmm8, 10h
            vinsertps xmm0, xmm0, xmm9, 20h ; ' '
          }
          v53 = _XMM0;
          v54.m128_i32[3] = 0;
          v32 = v54;
          v32.m128_f32[0] = collectionBounds[smodelCollectionIndex].halfSize.v[0];
          _XMM2 = v32;
          __asm
          {
            vinsertps xmm2, xmm2, xmm11, 10h
            vinsertps xmm2, xmm2, xmm12, 20h ; ' '
          }
          v54 = _XMM2;
          _mm128_sub_ps(_XMM3, _XMM0);
          __asm { vandnps xmm1, xmm14, xmm0 }
          _XMM2 = _mm128_sub_ps(_XMM1, _XMM2);
          __asm { vmaxps  xmm0, xmm2, xmm13 }
          _XMM1 = _mm128_mul_ps(_XMM0, _XMM0);
          __asm
          {
            vhaddps xmm2, xmm1, xmm1
            vhaddps xmm0, xmm2, xmm2
            vminss  xmm4, xmm0, xmm4
          }
          p_multiView = (StreamUpdateMultiView *)((char *)p_multiView + 16);
          --viewCount;
        }
        while ( viewCount );
        value = v49;
      }
      v41 = *(float *)&_XMM4 <= (float)(v17 * v17) || !enabled;
      *((_QWORD *)&v4 + 1) = *((_QWORD *)&v16 + 1);
      v42 = *(float *)&_XMM4 <= (float)(*(float *)&v16 * *(float *)&v16) || !enabled;
      v43 = *(const StreamKey **)(v13 + 216);
      if ( v43 && v41 )
      {
        IsSafeToUse = Stream_GenericIsSafeToUse(v43);
        v45 = *(const StreamKey **)(v13 + 216);
        if ( IsSafeToUse )
        {
          Stream_UsedGeneric(v45);
        }
        else
        {
          Stream_RequestGeneric(v45);
          if ( v42 )
            Stream_BoostGeneric(*(const StreamKey **)(v13 + 216), amount);
        }
      }
      v7 = (unsigned int)(v7 + 1);
      i = rgp.world;
    }
  }
  Sys_ProfEndNamedEvent();
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
  const dvar_t *v4; 
  const dvar_t *v5; 
  float value; 
  const dvar_t *v7; 
  float v8; 
  unsigned int totalInstanceCount; 
  unsigned int i; 
  ScriptableInstanceContextSecure *InstanceCommonContext; 
  const ScriptableDef *def; 
  __int128 v14; 
  float v17; 
  __int64 j; 
  const XModel *v19; 
  float v20; 
  Stream_UpdateDynamic_ScriptablesForClient::__l7::<lambda_39682bb01d9ba848b5c64abf36f8d3e5> iterator; 
  __int64 v22; 
  vec3_t outOrigin; 
  __int128 v24; 
  __int128 v25; 

  v22 = -2i64;
  Sys_ProfBeginNamedEvent(0xFF808080, "Stream_UpdateDynamic_ScriptablesForClient");
  localClientNum = cmd->localClientNum;
  p_multiView = &cmd->multiView;
  if ( streamFrontendGlob->gameMode[0] == 1 )
  {
    v4 = DCONST_DVARBOOL_stream_hintScriptables;
    if ( !DCONST_DVARBOOL_stream_hintScriptables && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_hintScriptables") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v4);
    if ( v4->current.enabled )
    {
      v5 = DCONST_DVARFLT_stream_scriptableMaxDistanceSq;
      if ( !DCONST_DVARFLT_stream_scriptableMaxDistanceSq && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_scriptableMaxDistanceSq") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v5);
      value = v5->current.value;
      v7 = DCONST_DVARFLT_stream_scriptableDistanceOffset;
      if ( !DCONST_DVARFLT_stream_scriptableDistanceOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_scriptableDistanceOffset") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v7);
      v8 = v7->current.value;
      ScriptableCommon_AssertCountsInitialized();
      totalInstanceCount = g_scriptableWorldCounts.totalInstanceCount;
      for ( i = 0; i < totalInstanceCount; ++i )
      {
        if ( ScriptableCl_GetInstanceInUse(localClientNum, i) && ScriptableCl_IsLinked(localClientNum, i) )
        {
          InstanceCommonContext = ScriptableCl_GetInstanceCommonContext(localClientNum, i);
          def = InstanceCommonContext->def;
          if ( !InstanceCommonContext->def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 1988, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
            __debugbreak();
          ScriptableInstanceContextSecure::GetOrigin(InstanceCommonContext, i, &outOrigin);
          HIDWORD(v24) = 0;
          v14 = v24;
          *(float *)&v14 = outOrigin.v[0];
          _XMM3 = v14;
          __asm
          {
            vinsertps xmm3, xmm3, dword ptr [rsp+118h+outOrigin+4], 10h
            vinsertps xmm3, xmm3, dword ptr [rsp+118h+outOrigin+8], 20h
          }
          v24 = _XMM3;
          v25 = _XMM3;
          v20 = FLOAT_3_4028235e38;
          iterator.scriptableOriginFloat4 = (float4 *)&v25;
          iterator.baseDistSq = &v20;
          Stream_ViewPos_Iterate__lambda_39682bb01d9ba848b5c64abf36f8d3e5_(p_multiView, &iterator);
          if ( v20 <= value )
          {
            v17 = fsqrt(v20) + v8;
            for ( j = 0i64; (unsigned int)j < def->numXModels; j = (unsigned int)(j + 1) )
            {
              v19 = def->models[j];
              if ( v19 )
                Stream_AddDynamicModelDistance(v19, (float)(v17 - v19->radius) * (float)(v17 - v19->radius));
              else
                Com_PrintWarning(29, "Scriptable Def %s has an invalid model - this normally implies a bad convert or link - check errors there\n", def->name);
            }
          }
        }
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
}

/*
==============
Stream_UpdateDynamic_Glass
==============
*/
void Stream_UpdateDynamic_Glass(const StreamDynamicUpdateCmd *__formal)
{
  float value; 
  __int64 v2; 
  __int64 v3; 
  __int64 v4; 
  float v5; 
  float v6; 
  FxGlassDef *defs; 
  __int64 MaterialIndex; 
  unsigned int v9; 
  StreamFrontendGlob *v10; 
  __int64 v11; 
  unsigned int v12; 
  StreamFrontendGlob *v13; 
  __int64 v14; 
  __int64 v15; 
  float v16; 
  float v17; 
  unsigned int defCount; 

  Sys_ProfBeginNamedEvent(0xFF808080, "Stream_UpdateDynamic_Glass");
  if ( !glass_shattered_scale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 2033, ASSERT_TYPE_ASSERT, "(glass_shattered_scale)", (const char *)&queryFormat, "glass_shattered_scale") )
    __debugbreak();
  value = glass_shattered_scale->current.value;
  if ( value == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 2035, ASSERT_TYPE_ASSERT, "(glassShatteredScale)", (const char *)&queryFormat, "glassShatteredScale") )
    __debugbreak();
  defCount = fxWorld.glassGlob.defCount;
  if ( fxWorld.glassGlob.defCount )
  {
    v2 = 0i64;
    v3 = 0i64;
    v4 = fxWorld.glassGlob.defCount;
    do
    {
      v5 = fxWorld.glassGlob.distances[v3];
      if ( v5 != 1000000.0 )
      {
        v6 = v5 * v5;
        defs = fxWorld.glassGlob.defs;
        if ( !fxWorld.glassGlob.defs[v2].material && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 2047, ASSERT_TYPE_ASSERT, "(glassDef->material)", (const char *)&queryFormat, "glassDef->material") )
          __debugbreak();
        MaterialIndex = DB_GetMaterialIndex(defs[v2].material);
        v16 = v6 * defs[v2].highMipRadiusInvSq;
        if ( (LODWORD(v16) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_distance.h", 188, ASSERT_TYPE_SANITY, "( !IS_NAN( distance ) )", (const char *)&queryFormat, "!IS_NAN( distance )") )
          __debugbreak();
        v9 = LODWORD(v16) >> 7;
        if ( (unsigned int)MaterialIndex >= 0xB400 )
        {
          LODWORD(v15) = 46080;
          LODWORD(v14) = MaterialIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_internal.h", 435, ASSERT_TYPE_ASSERT, "(unsigned)( materialIndex ) < (unsigned)( ((( 43 * 1024 ) + 1024 + MATERIAL_POOL_SIZE_PRELOAD_PROCESS) + 1024) )", "materialIndex doesn't index MATERIAL_POOL_SIZE\n\t%i not in [0, %i)", v14, v15) )
            __debugbreak();
        }
        v10 = streamFrontendGlob;
        if ( (unsigned int)MaterialIndex >= 0xB400 )
        {
          LODWORD(v15) = 46080;
          LODWORD(v14) = MaterialIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_sortlist.h", 366, ASSERT_TYPE_ASSERT, "(unsigned)( assetIndex ) < (unsigned)( ( sizeof( *array_counter( mDistances ) ) + 0 ) )", "assetIndex doesn't index ARRAY_COUNT( mDistances )\n\t%i not in [0, %i)", v14, v15) )
            __debugbreak();
        }
        if ( v9 < v10->materialDistance.mDistances[MaterialIndex].mValue )
          v10->materialDistance.mDistances[MaterialIndex].mValue = v9;
        Com_BitSetAssert(v10->materialDistance.mValueSet, MaterialIndex, 5760);
        if ( !defs[v2].materialShattered && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 2052, ASSERT_TYPE_ASSERT, "(glassDef->materialShattered)", (const char *)&queryFormat, "glassDef->materialShattered") )
          __debugbreak();
        v11 = DB_GetMaterialIndex(defs[v2].materialShattered);
        v17 = (float)(v6 * defs[v2].shatteredHighMipRadiusInvSq) / (float)(value * value);
        if ( (LODWORD(v17) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_distance.h", 188, ASSERT_TYPE_SANITY, "( !IS_NAN( distance ) )", (const char *)&queryFormat, "!IS_NAN( distance )") )
          __debugbreak();
        v12 = LODWORD(v17) >> 7;
        if ( (unsigned int)v11 >= 0xB400 )
        {
          LODWORD(v15) = 46080;
          LODWORD(v14) = v11;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_internal.h", 435, ASSERT_TYPE_ASSERT, "(unsigned)( materialIndex ) < (unsigned)( ((( 43 * 1024 ) + 1024 + MATERIAL_POOL_SIZE_PRELOAD_PROCESS) + 1024) )", "materialIndex doesn't index MATERIAL_POOL_SIZE\n\t%i not in [0, %i)", v14, v15) )
            __debugbreak();
        }
        v13 = streamFrontendGlob;
        if ( (unsigned int)v11 >= 0xB400 )
        {
          LODWORD(v15) = 46080;
          LODWORD(v14) = v11;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_sortlist.h", 366, ASSERT_TYPE_ASSERT, "(unsigned)( assetIndex ) < (unsigned)( ( sizeof( *array_counter( mDistances ) ) + 0 ) )", "assetIndex doesn't index ARRAY_COUNT( mDistances )\n\t%i not in [0, %i)", v14, v15) )
            __debugbreak();
        }
        if ( v12 < v13->materialDistance.mDistances[v11].mValue )
          v13->materialDistance.mDistances[v11].mValue = v12;
        Com_BitSetAssert(v13->materialDistance.mValueSet, v11, 5760);
      }
      ++v3;
      ++v2;
      --v4;
    }
    while ( v4 );
    if ( defCount != fxWorld.glassGlob.defCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 2058, ASSERT_TYPE_ASSERT, "( glassDefCount ) == ( fxWorld.glassGlob.defCount )", "%s == %s\n\t%u, %u", "glassDefCount", "fxWorld.glassGlob.defCount", defCount, fxWorld.glassGlob.defCount) )
      __debugbreak();
  }
  Sys_ProfEndNamedEvent();
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
  const dvar_t *v2; 
  StreamUpdateMultiView *p_multiView; 
  unsigned __int64 num_entities; 
  int v5; 
  __int64 v6; 
  __int64 v7; 
  const gentity_s *v8; 
  const GfxBrushModel *BrushModel; 
  unsigned __int64 v10; 
  const DObj *ServerDObjForEnt; 
  int NumModels; 
  int v13; 
  StreamUpdateMultiView *v14; 
  const XModel *Model; 
  __int128 v17; 
  float v20; 
  __m128 v22; 
  float v25; 
  __m128 v27; 
  unsigned __int64 v32; 
  unsigned __int64 serverEntitiesCheck; 
  __int64 v34; 
  __int64 v35; 
  float v36; 
  int input; 
  unsigned int XModelIndex; 
  StreamUpdateMultiView *multiView; 
  __int64 v40; 
  __int64 v41; 
  __int64 v42[6]; 
  vec4_t quat; 
  float v44; 
  float v45; 
  float v46; 
  __int128 v47; 
  __m128 v48; 
  __m128 v49; 
  __int128 v50; 
  __m128 v51; 
  __m128 v52; 
  __m128 v53; 

  v42[5] = -2i64;
  Sys_ProfBeginNamedEvent(0xFF808080, "StreamSP_UpdateDynamic_ServerEntities");
  v2 = DCONST_DVARBOOL_stream_hintDobjs;
  if ( !DCONST_DVARBOOL_stream_hintDobjs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_hintDobjs") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.enabled )
  {
    p_multiView = &cmd->multiView;
    multiView = &cmd->multiView;
    num_entities = level.num_entities;
    v5 = 0;
    input = 0;
    if ( level.num_entities > 0 )
    {
      v6 = 0i64;
      v40 = 0i64;
      v7 = 0i64;
      v41 = 0i64;
      do
      {
        if ( (unsigned int)v5 >= 0x800 )
        {
          LODWORD(v35) = 2048;
          LODWORD(v34) = v5;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v34, v35) )
            __debugbreak();
        }
        if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
          __debugbreak();
        if ( *(&g_entities->r.isInUse + v7) != g_entityIsInUse[v6] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
          __debugbreak();
        if ( g_entityIsInUse[v6] )
        {
          v8 = (gentity_s *)((char *)g_entities + v7);
          if ( *(entityType_s *)((char *)&g_entities->s.eType + v7) == ET_SCRIPTMOVER && GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&v8->s.lerp.eFlags, ACTIVE, 1u) )
          {
            input = v8->s.index.brushModel;
            BrushModel = R_GetBrushModel(input);
            Stream_AddBModelDistance(p_multiView, BrushModel, &v8->r.currentOrigin);
            v10 = j_CoD_XXH64(&input, 4ui64, num_entities);
            num_entities = j_CoD_XXH64(&v8->r.currentOrigin, 0xCui64, v10);
          }
          else
          {
            ServerDObjForEnt = Com_GetServerDObjForEnt(v8);
            if ( ServerDObjForEnt )
            {
              v44 = v8->r.currentOrigin.v[0];
              v45 = v8->r.currentOrigin.v[1];
              v46 = v8->r.currentOrigin.v[2];
              AnglesToQuat(&v8->r.currentAngles, &quat);
              NumModels = DObjGetNumModels(ServerDObjForEnt);
              v13 = 0;
              if ( NumModels )
              {
                v14 = multiView;
                do
                {
                  Model = DObjGetModel(ServerDObjForEnt, v13);
                  v36 = FLOAT_3_4028235e38;
                  v51 = _mm128_mul_ps((__m128)_xmm, (__m128)quat);
                  HIDWORD(v47) = 0;
                  v17 = v47;
                  *(float *)&v17 = v44;
                  _XMM3 = v17;
                  __asm
                  {
                    vinsertps xmm3, xmm3, [rbp+80h+var_D4], 80h+var_70
                    vinsertps xmm3, xmm3, [rbp+80h+var_D0], 80h+var_60
                  }
                  v47 = _XMM3;
                  v50 = _XMM3;
                  v20 = Model->bounds.midPoint.v[0];
                  v48.m128_i32[3] = 0;
                  v22 = v48;
                  v22.m128_f32[0] = v20;
                  _XMM4 = v22;
                  __asm
                  {
                    vinsertps xmm4, xmm4, dword ptr [rdi+30h], 10h
                    vinsertps xmm4, xmm4, dword ptr [rdi+34h], 20h ; ' '
                  }
                  v48 = _XMM4;
                  v25 = Model->bounds.halfSize.v[0];
                  v49.m128_i32[3] = 0;
                  v27 = v49;
                  v27.m128_f32[0] = v25;
                  _XMM3 = v27;
                  __asm
                  {
                    vinsertps xmm3, xmm3, dword ptr [rdi+3Ch], 10h
                    vinsertps xmm3, xmm3, dword ptr [rdi+40h], 20h ; ' '
                  }
                  v49 = _XMM3;
                  v52 = _mm128_sub_ps(_XMM4, _XMM3);
                  v53 = _mm128_add_ps(_XMM4, _XMM3);
                  v42[0] = (__int64)&v50;
                  v42[1] = (__int64)&v51;
                  v42[2] = (__int64)&v52;
                  v42[3] = (__int64)&v53;
                  v42[4] = (__int64)&v36;
                  Stream_ViewPos_Iterate__lambda_18498cb6dbb513596de459c1976c7623_(v14, (const Stream_CalculateDistanceSq_ModelInternal::__l2::<lambda_18498cb6dbb513596de459c1976c7623> *)v42);
                  if ( v36 == 3.4028235e38 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 1059, ASSERT_TYPE_ASSERT, "(distSq != 3.402823466e+38F)", (const char *)&queryFormat, "distSq != FLT_MAX") )
                    __debugbreak();
                  _XMM0 = LODWORD(streamFrontendGlob->zNearDistanceSq);
                  __asm { vmaxss  xmm1, xmm0, [rsp+180h+var_140]; distSq }
                  v36 = *(float *)&_XMM1;
                  Stream_AddDynamicModelDistance(Model, *(const float *)&_XMM1);
                  XModelIndex = DB_GetXModelIndex(Model);
                  v32 = j_CoD_XXH64(&XModelIndex, 4ui64, num_entities);
                  num_entities = j_CoD_XXH64(&quat, 0x1Cui64, v32);
                  ++v13;
                }
                while ( v13 != NumModels );
                v5 = input;
                v6 = v40;
                v7 = v41;
              }
              p_multiView = multiView;
            }
          }
        }
        input = ++v5;
        v40 = ++v6;
        v7 += 1456i64;
        v41 = v7;
      }
      while ( v5 < level.num_entities );
    }
    serverEntitiesCheck = streamFrontendGlob->loadSync.serverEntitiesCheck;
    if ( serverEntitiesCheck && serverEntitiesCheck != num_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 1290, ASSERT_TYPE_ASSERT, "(streamFrontendGlob->loadSync.serverEntitiesCheck == 0 || streamFrontendGlob->loadSync.serverEntitiesCheck == hash)", (const char *)&queryFormat, "streamFrontendGlob->loadSync.serverEntitiesCheck == 0 || streamFrontendGlob->loadSync.serverEntitiesCheck == hash") )
      __debugbreak();
    streamFrontendGlob->loadSync.serverEntitiesCheck = num_entities;
  }
  Sys_ProfEndNamedEvent();
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
  float4 v5; 
  float4 v6; 
  float v7; 
  float4 v10; 
  MaterialGeometryType materialType; 
  float v15; 
  unsigned __int8 layerCount; 
  float4 v19; 
  __m128 v22; 
  __int64 viewCount; 
  float *viewCosFovLimit; 
  float v27; 
  float v28; 
  __m128 v30; 
  float v39; 
  unsigned int MaterialIndex; 
  unsigned __int8 textureCount; 
  __int64 v42; 
  __int64 v43; 
  MaterialTextureDef *textureTable; 
  GfxImage *image; 
  unsigned int GfxImageIndex; 
  __int64 TextureLayerIndexFromID; 
  float v48; 
  float v49; 
  __int64 v50; 
  __int64 v51; 
  float v52; 
  float4 v54; 
  float4 v55; 
  float4 v56; 
  float4 v57; 
  float4 v58[6]; 

  v7 = bounds->midPoint.v[0];
  v58[0].v.m128_i32[3] = 0;
  v10.v = (__m128)v58[0];
  v10.v.m128_f32[0] = v7;
  _XMM4 = v10.v;
  __asm
  {
    vinsertps xmm4, xmm4, dword ptr [r9+4], 10h
    vinsertps xmm4, xmm4, dword ptr [r9+8], 20h ; ' '
  }
  materialType = material->materialType;
  v15 = bounds->halfSize.v[0];
  layerCount = material->layerCount;
  v58[0] = (float4)_XMM4;
  v58[0].v.m128_i32[3] = 0;
  v19.v = (__m128)v58[0];
  v19.v.m128_f32[0] = v15;
  _XMM3 = v19.v;
  __asm
  {
    vinsertps xmm3, xmm3, dword ptr [r9+10h], 10h
    vinsertps xmm3, xmm3, dword ptr [r9+14h], 20h ; ' '
  }
  v58[3] = (float4)v5.v;
  v58[2] = (float4)v6.v;
  v58[0] = (float4)_XMM3;
  v22 = _mm128_sub_ps(_XMM4, _XMM3);
  _XMM10 = _mm128_add_ps(_XMM4, _XMM3);
  if ( (layerCount != 0) != ((materialType & 0x40) != 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 931, ASSERT_TYPE_ASSERT, "( ( isLayeredMaterial == static_cast<bool>( material->materialType & MTL_GEOMETRY_FEATURE_LAYERED ) ) )", "( material->name ) = %s", material->name) )
    __debugbreak();
  viewCount = multiView->viewCount;
  if ( viewCount <= 0 )
    goto LABEL_40;
  viewCosFovLimit = multiView->viewCosFovLimit;
  do
  {
    __asm { vminps  xmm0, xmm10, xmmword ptr [rbx] }
    v27 = *viewCosFovLimit;
    v28 = *(viewCosFovLimit - 32);
    __asm { vmaxps  xmm3, xmm0, xmm9 }
    v30 = _mm128_sub_ps(_XMM3, multiView->viewPos[0].v);
    _XMM2 = _mm128_mul_ps(v30, v30);
    v52 = viewCosFovLimit[16];
    __asm
    {
      vinsertps xmm0, xmm2, xmm2, 8
      vhaddps xmm1, xmm0, xmm0
    }
    _XMM0.v = (__m128)multiView->viewDir[0];
    __asm { vhaddps xmm2, xmm1, xmm1 }
    v54.v = (__m128)multiView->viewPos[0];
    v58[0] = (float4)_XMM0.v;
    v55.v = _XMM3;
    v56.v = _XMM10;
    v57.v = v22;
    _XMM0.v.m128_f32[0] = Stream_CalculateDistanceSq_ApplyZoomFactor(&v57, &v56, *(float *)&_XMM2, &v55, &v54, v58, v28, v27, v52);
    ++viewCosFovLimit;
    multiView = (const StreamUpdateMultiView *)((char *)multiView + 16);
    __asm { vminss  xmm7, xmm0, xmm7 }
    --viewCount;
  }
  while ( viewCount );
  if ( *(float *)&_XMM7 == 3.4028235e38 )
  {
LABEL_40:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 938, ASSERT_TYPE_ASSERT, "(minDistanceSq != 3.402823466e+38F)", (const char *)&queryFormat, "minDistanceSq != FLT_MAX") )
      __debugbreak();
  }
  _XMM0 = LODWORD(streamFrontendGlob->zNearDistanceSq);
  __asm { vmaxss  xmm7, xmm0, xmm7 }
  if ( layerCount )
  {
    textureCount = material->textureCount;
    if ( textureCount )
    {
      v42 = textureCount;
      v43 = 0i64;
      do
      {
        textureTable = material->textureTable;
        image = textureTable[v43].image;
        if ( !image && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 963, ASSERT_TYPE_ASSERT, "( ( image != nullptr ) )", "( image ) = %p", NULL) )
          __debugbreak();
        if ( (image->flags & 0x40) != 0 )
        {
          GfxImageIndex = DB_GetGfxImageIndex(image);
          TextureLayerIndexFromID = Material_GetTextureLayerIndexFromID(textureTable[v43].index);
          if ( (unsigned int)TextureLayerIndexFromID >= material->layerCount )
          {
            LODWORD(v51) = material->layerCount;
            LODWORD(v50) = TextureLayerIndexFromID;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 970, ASSERT_TYPE_ASSERT, "(unsigned)( layerIndex ) < (unsigned)( material->layerCount )", "layerIndex doesn't index material->layerCount\n\t%i not in [0, %i)", v50, v51) )
              __debugbreak();
          }
          if ( (unsigned int)TextureLayerIndexFromID >= 8 )
          {
            LODWORD(v51) = 8;
            LODWORD(v50) = TextureLayerIndexFromID;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 972, ASSERT_TYPE_ASSERT, "(unsigned)( layerIndex ) < (unsigned)( 8 )", "layerIndex doesn't index MTL_LAYER_LIMIT\n\t%i not in [0, %i)", v50, v51) )
              __debugbreak();
          }
          if ( (unsigned int)TextureLayerIndexFromID < himipRadiusInvSqCount )
          {
            v48 = himipRadiusInvSqPtr[TextureLayerIndexFromID];
            if ( v48 != 0.0 )
            {
              v49 = (float)(*(float *)&_XMM7 + 1.0) * v48;
              if ( (LODWORD(v49) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_distance.h", 188, ASSERT_TYPE_SANITY, "( !IS_NAN( distance ) )", (const char *)&queryFormat, "!IS_NAN( distance )") )
                __debugbreak();
              Stream_AddImageDistance(GfxImageIndex, (StreamDistance)(LODWORD(v49) >> 7));
            }
          }
        }
        ++v43;
        --v42;
      }
      while ( v42 );
    }
  }
  else
  {
    if ( !himipRadiusInvSqCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 944, ASSERT_TYPE_ASSERT, "(himipRadiusInvSqCount > 0)", (const char *)&queryFormat, "himipRadiusInvSqCount > 0") )
      __debugbreak();
    v39 = *himipRadiusInvSqPtr;
    if ( *himipRadiusInvSqPtr != 0.0 )
    {
      MaterialIndex = DB_GetMaterialIndex(material);
      if ( (COERCE_UNSIGNED_INT((float)(*(float *)&_XMM7 + 1.0) * v39) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_distance.h", 188, ASSERT_TYPE_SANITY, "( !IS_NAN( distance ) )", (const char *)&queryFormat, "!IS_NAN( distance )") )
        __debugbreak();
      Stream_AddMaterialDistance(MaterialIndex, (StreamDistance)(COERCE_UNSIGNED_INT((float)(*(float *)&_XMM7 + 1.0) * v39) >> 7));
    }
  }
}

/*
==============
Stream_AddDynamicModelDistance
==============
*/
void Stream_AddDynamicModelDistance(const XModel *model, const float distSq)
{
  unsigned int XModelIndex; 
  const dvar_t *v4; 
  float v5; 

  XModelIndex = DB_GetXModelIndex(model);
  if ( (LODWORD(distSq) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_distance.h", 188, ASSERT_TYPE_SANITY, "( !IS_NAN( distance ) )", (const char *)&queryFormat, "!IS_NAN( distance )") )
    __debugbreak();
  Stream_AddModelDistance(XModelIndex, (StreamDistance)(LODWORD(distSq) >> 7));
  v4 = DVARBOOL_stream_hintDynamicXModelsMeshes;
  if ( !DVARBOOL_stream_hintDynamicXModelsMeshes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_hintDynamicXModelsMeshes") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( v4->current.enabled )
  {
    v5 = fsqrt(distSq);
    XModelGetUsableLodForDist(model, v5, v5);
  }
}

/*
==============
Stream_AddDynamicModelDistanceForMultiView
==============
*/
float Stream_AddDynamicModelDistanceForMultiView(const StreamUpdateMultiView *multiView, const XModel *model, const GfxPlacement *placement, const float scale)
{
  __int128 v4; 
  bool v7; 
  __m128 v8; 
  float v9; 
  __m128 v11; 
  __m128 v15; 
  float v16; 
  __m128 v20; 
  __m128 v23; 
  __m128 v25; 
  __m128 v29; 
  float v35; 
  __m128 *v36; 
  __int128 *v37; 
  __m128 *v38; 
  __m128 *v39; 
  float *v40; 
  __m128 v41; 
  __m128 v42; 
  __int64 v43; 
  __m128 v44; 
  __int128 v45[3]; 

  v7 = scale == 1.0;
  v8 = _mm128_mul_ps((__m128)_xmm, (__m128)placement->quat);
  v9 = placement->origin.v[0];
  v41.m128_i32[3] = 0;
  v11 = v41;
  v11.m128_f32[0] = v9;
  _XMM3 = v11;
  __asm
  {
    vinsertps xmm3, xmm3, dword ptr [r8+14h], 10h
    vinsertps xmm3, xmm3, dword ptr [r8+18h], 20h ; ' '
  }
  v41 = (__m128)_XMM3;
  v41.m128_i32[3] = 0;
  v44 = v8;
  if ( v7 )
  {
    v15 = v41;
    v15.m128_f32[0] = model->bounds.midPoint.v[0];
    _XMM4 = v15;
    v16 = model->bounds.halfSize.v[0];
    __asm
    {
      vinsertps xmm4, xmm4, dword ptr [rdx+30h], 10h
      vinsertps xmm4, xmm4, dword ptr [rdx+34h], 20h ; ' '
    }
    v42 = (__m128)_XMM3;
    v41 = _XMM4;
    v41.m128_i32[3] = 0;
    v36 = &v42;
    v37 = (__int128 *)&v44;
    v20 = v41;
    v20.m128_f32[0] = v16;
    _XMM3 = v20;
    __asm
    {
      vinsertps xmm3, xmm3, dword ptr [rdx+3Ch], 10h
      vinsertps xmm3, xmm3, dword ptr [rdx+40h], 20h ; ' '
    }
    v38 = &v41;
    v39 = (__m128 *)v45;
    v40 = &v35;
    v35 = FLOAT_3_4028235e38;
    v41 = _mm128_sub_ps(_XMM4, _XMM3);
    v45[0] = (__int128)_mm128_add_ps(_XMM4, _XMM3);
    Stream_ViewPos_Iterate__lambda_18498cb6dbb513596de459c1976c7623_(multiView, (const Stream_CalculateDistanceSq_ModelInternal::__l2::<lambda_18498cb6dbb513596de459c1976c7623> *)&v36);
  }
  else
  {
    v23 = *(__m128 *)model->bounds.midPoint.v;
    v43 = *(_QWORD *)&model->bounds.halfSize.y;
    v45[0] = _XMM3;
    v25 = v41;
    v25.m128_f32[0] = v23.m128_f32[0];
    _XMM3 = v25;
    __asm
    {
      vinsertps xmm3, xmm3, dword ptr [rbp+57h+var_70+4], 57h+var_50+9
      vinsertps xmm3, xmm3, dword ptr [rbp+57h+var_70+8], 57h+var_40+9
    }
    v41 = _XMM3;
    v41.m128_i32[3] = 0;
    v29 = v41;
    v29.m128_f32[0] = _mm_shuffle_ps(v23, v23, 255).m128_f32[0] * scale;
    _XMM1 = v29;
    __asm
    {
      vinsertps xmm1, xmm1, xmm4, 10h
      vinsertps xmm1, xmm1, xmm5, 20h ; ' '
    }
    v45[2] = v4;
    v36 = (__m128 *)v45;
    v37 = (__int128 *)&v44;
    v38 = &v42;
    v39 = &v41;
    v40 = &v35;
    v35 = FLOAT_3_4028235e38;
    v42 = _mm128_sub_ps(_XMM3, _XMM1);
    v41 = _mm128_add_ps(_XMM3, _XMM1);
    Stream_ViewPos_Iterate__lambda_c6c915e342a84512cd7b9ee4a8ee367b_(multiView, (const Stream_CalculateDistanceSq_ModelInternal::__l2::<lambda_c6c915e342a84512cd7b9ee4a8ee367b> *)&v36);
  }
  if ( v35 == 3.4028235e38 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 1059, ASSERT_TYPE_ASSERT, "(distSq != 3.402823466e+38F)", (const char *)&queryFormat, "distSq != FLT_MAX") )
    __debugbreak();
  _XMM0 = LODWORD(streamFrontendGlob->zNearDistanceSq);
  __asm { vmaxss  xmm6, xmm0, [rbp+57h+var_B0] }
  Stream_AddDynamicModelDistance(model, *(const float *)&_XMM6);
  return *(float *)&_XMM6;
}

/*
==============
Stream_AddDynamicWeaponCamoDistance
==============
*/
void Stream_AddDynamicWeaponCamoDistance(const XModelMaterialOverride *modelOverride, const XModel *model, float modelDistSq)
{
  const XModel *v3; 
  const XModelMaterialOverride *v4; 
  __int64 v5; 
  MaterialOverride *v6; 
  char v7; 
  signed __int64 v9; 
  signed __int64 numsurfs; 
  Material *originalMaterial; 
  Material **v12; 
  Material **v17; 
  float v19; 
  unsigned int v20; 
  unsigned int MaterialIndex; 
  __int64 v22; 
  StreamFrontendGlob *v23; 
  Material *overrideMaterial; 
  unsigned int v25; 
  __int64 v26; 
  __int64 v27; 
  __int64 v28; 
  unsigned int GfxImageIndex; 
  __int64 v30; 
  const dvar_t *v31; 
  StreamFrontendGlob *v32; 
  __int64 v33; 
  __int64 v34; 
  int v37; 

  v3 = model;
  v4 = modelOverride;
  Sys_ProfBeginNamedEvent(0xFF808080, "Stream_AddDynamicWeaponCamoDistance");
  v5 = 0i64;
  v37 = 0;
  if ( v4->materialOverrideCount )
  {
    do
    {
      v6 = v4->materialOverride[v5];
      if ( v6 )
      {
        v7 = 0;
        *(float *)&_XMM1 = FLOAT_3_4028235e38;
        v9 = 0i64;
        numsurfs = v3->numsurfs;
        if ( (unsigned __int64)numsurfs >= 4 )
        {
          originalMaterial = v6->originalMaterial;
          v12 = v3->materialHandles + 2;
          do
          {
            if ( *(v12 - 2) == originalMaterial )
            {
              v7 = 1;
              _XMM0 = LODWORD(v3->himipRadiusInvSq[v9]);
              __asm { vminss  xmm1, xmm0, xmm1 }
            }
            if ( *(v12 - 1) == originalMaterial )
            {
              v7 = 1;
              _XMM0 = LODWORD(v3->himipRadiusInvSq[v9 + 1]);
              __asm { vminss  xmm1, xmm0, xmm1 }
            }
            if ( *v12 == originalMaterial )
            {
              v7 = 1;
              _XMM0 = LODWORD(v3->himipRadiusInvSq[v9 + 2]);
              __asm { vminss  xmm1, xmm0, xmm1 }
            }
            if ( v12[1] == originalMaterial )
            {
              v7 = 1;
              _XMM0 = LODWORD(v3->himipRadiusInvSq[v9 + 3]);
              __asm { vminss  xmm1, xmm0, xmm1 }
            }
            v9 += 4i64;
            v12 += 4;
          }
          while ( v9 < numsurfs - 3 );
        }
        if ( v9 < numsurfs )
        {
          v17 = &v3->materialHandles[v9];
          do
          {
            if ( *v17 == v6->originalMaterial )
            {
              v7 = 1;
              _XMM0 = LODWORD(v3->himipRadiusInvSq[v9]);
              __asm { vminss  xmm1, xmm0, xmm1 }
            }
            ++v9;
            ++v17;
          }
          while ( v9 < numsurfs );
        }
        if ( v7 )
        {
          v19 = (float)(modelDistSq + 1.0) * *(float *)&_XMM1;
          if ( (LODWORD(v19) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_distance.h", 188, ASSERT_TYPE_SANITY, "( !IS_NAN( distance ) )", (const char *)&queryFormat, "!IS_NAN( distance )") )
            __debugbreak();
          v20 = LODWORD(v19) >> 7;
          if ( v6->overrideType == MATERIAL_OVERRIDETYPE_CAMO )
          {
            overrideMaterial = v6->overrideMaterial;
            v25 = *(_DWORD *)&overrideMaterial->cameraRegion;
            if ( v25 )
            {
              v26 = 0i64;
              v27 = v25;
              do
              {
                v28 = *(_QWORD *)(*(_QWORD *)&overrideMaterial->maxDisplacement + v26 + 8);
                if ( (*(_DWORD *)(v28 + 24) & 0x40) != 0 )
                {
                  GfxImageIndex = DB_GetGfxImageIndex((const GfxImage *)v28);
                  v30 = GfxImageIndex;
                  if ( GfxImageIndex >= 0x14000 )
                  {
                    LODWORD(v34) = 81920;
                    LODWORD(v33) = GfxImageIndex;
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_internal.h", 421, ASSERT_TYPE_ASSERT, "(unsigned)( imageIndex ) < (unsigned)( IMAGE_POOL_SIZE )", "imageIndex doesn't index IMAGE_POOL_SIZE\n\t%i not in [0, %i)", v33, v34) )
                      __debugbreak();
                  }
                  v31 = DCONST_DVARBOOL_stream_pedanticAddImageChecks;
                  if ( !DCONST_DVARBOOL_stream_pedanticAddImageChecks && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_pedanticAddImageChecks") )
                    __debugbreak();
                  Dvar_CheckFrontendServerThread(v31);
                  if ( v31->current.enabled && (DB_GetGfxImageAtIndex(v30)->flags & 0x40) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_internal.h", 426, ASSERT_TYPE_ASSERT, "(R_IsStreamedImage( image ))", (const char *)&queryFormat, "R_IsStreamedImage( image )") )
                    __debugbreak();
                  v32 = streamFrontendGlob;
                  if ( (unsigned int)v30 >= 0x14000 )
                  {
                    LODWORD(v34) = 81920;
                    LODWORD(v33) = v30;
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_sortlist.h", 366, ASSERT_TYPE_ASSERT, "(unsigned)( assetIndex ) < (unsigned)( ( sizeof( *array_counter( mDistances ) ) + 0 ) )", "assetIndex doesn't index ARRAY_COUNT( mDistances )\n\t%i not in [0, %i)", v33, v34) )
                      __debugbreak();
                  }
                  if ( v20 < v32->imageDistance.mDistances[v30].mValue )
                    v32->imageDistance.mDistances[v30].mValue = v20;
                  Com_BitSetAssert(v32->imageDistance.mValueSet, v30, 10240);
                }
                v26 += 16i64;
                --v27;
              }
              while ( v27 );
              v3 = model;
              LODWORD(v5) = v37;
            }
          }
          else if ( v6->overrideType == MATERIAL_OVERRIDETYPE_STICKER_REPLACE )
          {
            MaterialIndex = DB_GetMaterialIndex(v6->overrideMaterial);
            v22 = MaterialIndex;
            if ( MaterialIndex >= 0xB400 )
            {
              LODWORD(v34) = 46080;
              LODWORD(v33) = MaterialIndex;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_internal.h", 435, ASSERT_TYPE_ASSERT, "(unsigned)( materialIndex ) < (unsigned)( ((( 43 * 1024 ) + 1024 + MATERIAL_POOL_SIZE_PRELOAD_PROCESS) + 1024) )", "materialIndex doesn't index MATERIAL_POOL_SIZE\n\t%i not in [0, %i)", v33, v34) )
                __debugbreak();
            }
            v23 = streamFrontendGlob;
            if ( (unsigned int)v22 >= 0xB400 )
            {
              LODWORD(v34) = 46080;
              LODWORD(v33) = v22;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_sortlist.h", 366, ASSERT_TYPE_ASSERT, "(unsigned)( assetIndex ) < (unsigned)( ( sizeof( *array_counter( mDistances ) ) + 0 ) )", "assetIndex doesn't index ARRAY_COUNT( mDistances )\n\t%i not in [0, %i)", v33, v34) )
                __debugbreak();
            }
            if ( v20 < v23->materialDistance.mDistances[v22].mValue )
              v23->materialDistance.mDistances[v22].mValue = v20;
            Com_BitSetAssert(v23->materialDistance.mValueSet, v22, 5760);
          }
          else
          {
            LODWORD(v33) = v6->overrideType;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 1157, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp(1157): unhandled case %d in switch statement", v33) )
              __debugbreak();
          }
        }
      }
      v5 = (unsigned int)(v5 + 1);
      v37 = v5;
      v4 = modelOverride;
    }
    while ( (unsigned int)v5 < modelOverride->materialOverrideCount );
  }
  Sys_ProfEndNamedEvent();
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
  if ( !DVARFLT_stream_superTerrainHeightScaling && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_superTerrainHeightScaling") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  _XMM0 = maxBound->v;
  _XMM1 = _xmm;
  __asm
  {
    vinsertps xmm1, xmm1, dword ptr [rbx+28h], 20h ; ' '
    vminps  xmm0, xmm0, xmm2
    vmaxps  xmm3, xmm0, xmmword ptr [r14]
  }
  result->v = _mm128_add_ps(_mm128_mul_ps(_XMM1, _mm128_sub_ps(viewPos->v, _XMM3)), _XMM3);
  return result;
}

/*
==============
Stream_AdjustViewPosForSTVec3
==============
*/
vec3_t *Stream_AdjustViewPosForSTVec3(vec3_t *result, const vec3_t *viewPos, const float4 *minBound, const float4 *maxBound)
{
  const dvar_t *v4; 
  __int128 v8; 
  __int128 v17; 

  v4 = DVARFLT_stream_superTerrainHeightScaling;
  HIDWORD(v17) = 0;
  _RBX = result;
  _XMM7 = maxBound->v;
  v8 = v17;
  *(float *)&v8 = viewPos->v[0];
  _XMM6 = v8;
  __asm
  {
    vinsertps xmm6, xmm6, dword ptr [rdx+4], 10h
    vinsertps xmm6, xmm6, dword ptr [rdx+8], 20h ; ' '
  }
  if ( !DVARFLT_stream_superTerrainHeightScaling && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_superTerrainHeightScaling") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  _XMM1 = _xmm;
  __asm
  {
    vinsertps xmm1, xmm1, dword ptr [rdi+28h], 20h ; ' '
    vminps  xmm0, xmm7, xmm6
    vmaxps  xmm2, xmm0, xmm8
  }
  _XMM3 = _mm128_add_ps(_mm128_mul_ps(_XMM1, _mm128_sub_ps(_XMM6, _XMM2)), _XMM2);
  _RBX->v[0] = _XMM3.m128_f32[0];
  __asm
  {
    vextractps dword ptr [rbx+4], xmm3, 1
    vextractps dword ptr [rbx+8], xmm3, 2
  }
  return _RBX;
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
  StreamUpdateMultiView *p_multiView; 
  __int64 v28; 
  char *v29; 
  unsigned __int64 array; 
  const bitarray<1536> *VisibilityHintBitArray; 
  const bitarray<1536> *v32; 
  _DWORD *v33; 
  __int64 v34; 
  _OWORD *v35; 
  char *v36; 
  __int64 v37; 
  int *v46; 
  WorkerCmdType v47; 
  char *v48; 
  __int64 v49; 
  __int64 v50; 
  ScopedStreamFrontendUpdateLock v51; 
  __int64 v52; 
  int v53[4]; 
  char v54; 
  bitarray<1536> *p_transientVisibility; 
  int data[4]; 
  char v57; 
  StreamUpdateMultiView multiView; 

  v52 = -2i64;
  v1 = gameMode;
  Sys_ProfBeginNamedEvent(0xFF808080, "Stream_BeginUpdateStaticAllClients");
  if ( !Stream_IsInitialized() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 2388, ASSERT_TYPE_ASSERT, "(Stream_IsInitialized())", (const char *)&queryFormat, "Stream_IsInitialized()") )
    __debugbreak();
  if ( s_beginScreenUpdateFrameThread != Sys_GetCurrentThreadId() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 2389, ASSERT_TYPE_ASSERT, "(Stream_IsBeginScreenUpdateFrameThread())", (const char *)&queryFormat, "Stream_IsBeginScreenUpdateFrameThread()") )
    __debugbreak();
  Stream_AlwaysLoaded_Update();
  ScopedStreamFrontendUpdateLock::ScopedStreamFrontendUpdateLock(&v51);
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
            LODWORD(v50) = -1;
            LODWORD(v49) = streamFrontendGlob->numClientsThisFrame;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 2435, ASSERT_TYPE_ASSERT, "( streamFrontendGlob->numClientsThisFrame ) == ( -1 )", "%s == %s\n\t%i, %i", "streamFrontendGlob->numClientsThisFrame", "-1", v49, v50) )
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
                p_multiView = &multiView;
                v28 = 8i64;
                if ( streamFrontendGlob->globalScheduler.mUseStreamTree )
                {
                  v53[0] = mSubFrame;
                  v53[1] = mUpdateSubFrameCount;
                  v29 = &v54;
                  do
                  {
                    *(__m256i *)v29 = *(__m256i *)p_multiView->viewPos[0].v.m128_f32;
                    *((__m256i *)v29 + 1) = *(__m256i *)p_multiView->viewPos[2].v.m128_f32;
                    *((__m256i *)v29 + 2) = *(__m256i *)p_multiView->viewPos[4].v.m128_f32;
                    *((_OWORD *)v29 + 6) = p_multiView->viewPos[6];
                    v29 += 128;
                    *((_OWORD *)v29 - 1) = p_multiView->viewPos[7];
                    p_multiView = (StreamUpdateMultiView *)((char *)p_multiView + 128);
                    --v28;
                  }
                  while ( v28 );
                  *(__m256i *)v29 = *(__m256i *)p_multiView->viewPos[0].v.m128_f32;
                  *((__m256i *)v29 + 1) = *(__m256i *)p_multiView->viewPos[2].v.m128_f32;
                  *((_OWORD *)v29 + 4) = p_multiView->viewPos[4];
                  array = (unsigned __int64)v26->transientVisibility.array;
                  p_transientVisibility = &v26->transientVisibility;
                  v26->transientVisibility = *CL_TransientsWorld_GetVisibilityHintBitArray(LOCAL_CLIENT_0);
                  if ( SLODWORD(cl_maxLocalClients) > 1 )
                  {
                    do
                    {
                      VisibilityHintBitArray = CL_TransientsWorld_GetVisibilityHintBitArray(v2);
                      v32 = VisibilityHintBitArray;
                      if ( array > (unsigned __int64)&VisibilityHintBitArray->array[47] || array + 188 < (unsigned __int64)VisibilityHintBitArray )
                      {
                        v35 = (_OWORD *)(array + 16);
                        v36 = (char *)v32 - array;
                        v37 = 3i64;
                        do
                        {
                          _XMM1 = *(_OWORD *)((char *)v35 + (_QWORD)v36 - 16);
                          __asm { vpor    xmm1, xmm1, xmmword ptr [rax-10h] }
                          *(v35 - 1) = _XMM1;
                          _XMM2 = *(_OWORD *)((char *)v35 + (_QWORD)v36);
                          __asm { vpor    xmm1, xmm2, xmmword ptr [rax] }
                          *v35 = _XMM1;
                          _XMM1 = *(_OWORD *)((char *)v35 + (_QWORD)v36 + 16);
                          __asm { vpor    xmm1, xmm1, xmmword ptr [rax+10h] }
                          v35[1] = _XMM1;
                          _XMM1 = *(_OWORD *)((char *)v35 + (_QWORD)v36 + 32);
                          __asm { vpor    xmm1, xmm1, xmmword ptr [rax+20h] }
                          v35[2] = _XMM1;
                          v35 += 4;
                          --v37;
                        }
                        while ( v37 );
                      }
                      else
                      {
                        v33 = (_DWORD *)array;
                        v34 = 48i64;
                        do
                        {
                          *v33 |= *(unsigned int *)((char *)VisibilityHintBitArray->array + (_QWORD)v33 - array);
                          ++v33;
                          --v34;
                        }
                        while ( v34 );
                      }
                      ++v2;
                    }
                    while ( v2 < SLODWORD(cl_maxLocalClients) );
                  }
                  v46 = v53;
                  v47 = WRKCMD_STREAM_UPDATE_STREAM_TREE;
                }
                else
                {
                  data[0] = mSubFrame;
                  data[1] = mUpdateSubFrameCount;
                  v48 = &v57;
                  do
                  {
                    *(__m256i *)v48 = *(__m256i *)p_multiView->viewPos[0].v.m128_f32;
                    *((__m256i *)v48 + 1) = *(__m256i *)p_multiView->viewPos[2].v.m128_f32;
                    *((__m256i *)v48 + 2) = *(__m256i *)p_multiView->viewPos[4].v.m128_f32;
                    *((_OWORD *)v48 + 6) = p_multiView->viewPos[6];
                    v48 += 128;
                    *((_OWORD *)v48 - 1) = p_multiView->viewPos[7];
                    p_multiView = (StreamUpdateMultiView *)((char *)p_multiView + 128);
                    --v28;
                  }
                  while ( v28 );
                  *(__m256i *)v48 = *(__m256i *)p_multiView->viewPos[0].v.m128_f32;
                  *((__m256i *)v48 + 1) = *(__m256i *)p_multiView->viewPos[2].v.m128_f32;
                  *((_OWORD *)v48 + 4) = p_multiView->viewPos[4];
                  Sys_AddWorkerCmd(WRKCMD_STREAM_UPDATE_WORLD_BSP_SURFS, data);
                  v46 = data;
                  v47 = WRKCMD_STREAM_UPDATE_STATIC_MODELS;
                }
                Sys_AddWorkerCmd(v47, v46);
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
  ScopedStreamFrontendUpdateLock::~ScopedStreamFrontendUpdateLock(&v51);
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
  float v1; 
  const dvar_t *v2; 
  const dvar_t *v5; 
  float value; 
  const dvar_t *v7; 
  float v8; 
  const dvar_t *v9; 
  float v10; 
  const dvar_t *v11; 
  float v12; 
  const dvar_t *v13; 
  float v14; 
  const dvar_t *v15; 
  float v16; 
  const dvar_t *v17; 
  float v18; 
  const dvar_t *v19; 
  float v20; 
  const dvar_t *v21; 
  float v22; 
  const dvar_t *v23; 
  float v24; 
  unsigned int v25; 
  unsigned int *mValueSet; 
  unsigned int i; 
  unsigned int v28; 
  int v29; 
  StreamDistance v30; 
  __int64 v31; 
  __int64 v32; 
  bool v33; 
  bool enabled; 
  unsigned int v35; 
  unsigned int index[8]; 
  __m128 v37; 
  int v38[10]; 

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
        v1 = FLOAT_3_4027977e38;
      }
      else
      {
        v35 = naturalMin.mValue << 7;
        LODWORD(v1) = (StreamDistance)(naturalMin.mValue << 7);
      }
      naturalMinFloat = v1;
      j__Init_thread_footer(&dword_14F7BC584);
    }
  }
  v2 = DVARBOOL_stream_freqDomainMetricBiasEnable;
  if ( !DVARBOOL_stream_freqDomainMetricBiasEnable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_freqDomainMetricBiasEnable") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  enabled = v2->current.enabled;
  v37 = *(__m128 *)STREAM_PART_DISTANCE_SCALE_SQRD;
  v33 = CL_TransientsWorldMP_UseLowAlwaysloadedFlagging();
  if ( streamFrontendGlob->loadSync.startTimeMs > 0 || streamFrontendGlob->loadSync.isActiveInFrontend )
  {
    _XMM0 = _xmm;
    __asm { vinsertps xmm0, xmm0, xmm1, 0 }
    v37 = _mm128_mul_ps(v37, _XMM0);
  }
  v5 = DCONST_DVARFLT_stream_distanceSemanticBias2D;
  if ( !DCONST_DVARFLT_stream_distanceSemanticBias2D && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_distanceSemanticBias2D") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  value = v5->current.value;
  v7 = DCONST_DVARFLT_stream_distanceSemanticBiasFunction;
  *(float *)v38 = value * value;
  if ( !DCONST_DVARFLT_stream_distanceSemanticBiasFunction && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_distanceSemanticBiasFunction") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  v8 = v7->current.value;
  v9 = DCONST_DVARFLT_stream_distanceSemanticBiasColor;
  *(float *)&v38[1] = v8 * v8;
  if ( !DCONST_DVARFLT_stream_distanceSemanticBiasColor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_distanceSemanticBiasColor") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  v10 = v9->current.value;
  v11 = DCONST_DVARFLT_stream_distanceSemanticBiasGray;
  *(float *)&v38[2] = v10 * v10;
  if ( !DCONST_DVARFLT_stream_distanceSemanticBiasGray && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_distanceSemanticBiasGray") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  v12 = v11->current.value;
  v13 = DCONST_DVARFLT_stream_distanceSemanticBiasSignedVelocity;
  *(float *)&v38[3] = v12 * v12;
  if ( !DCONST_DVARFLT_stream_distanceSemanticBiasSignedVelocity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_distanceSemanticBiasSignedVelocity") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v13);
  v14 = v13->current.value;
  v15 = DCONST_DVARFLT_stream_distanceSemanticBiasNormal;
  *(float *)&v38[4] = v14 * v14;
  if ( !DCONST_DVARFLT_stream_distanceSemanticBiasNormal && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_distanceSemanticBiasNormal") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v15);
  v16 = v15->current.value;
  v17 = DCONST_DVARFLT_stream_distanceSemanticBiasMetalness;
  *(float *)&v38[5] = v16 * v16;
  if ( !DCONST_DVARFLT_stream_distanceSemanticBiasMetalness && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_distanceSemanticBiasMetalness") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v17);
  v18 = v17->current.value;
  v19 = DCONST_DVARFLT_stream_distanceSemanticBiasNormalOcclusionGloss;
  *(float *)&v38[6] = v18 * v18;
  if ( !DCONST_DVARFLT_stream_distanceSemanticBiasNormalOcclusionGloss && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_distanceSemanticBiasNormalOcclusionGloss") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v19);
  v20 = v19->current.value;
  v21 = DCONST_DVARFLT_stream_distanceSemanticBiasSignedDistanceField;
  *(float *)&v38[7] = v20 * v20;
  if ( !DCONST_DVARFLT_stream_distanceSemanticBiasSignedDistanceField && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_distanceSemanticBiasSignedDistanceField") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v21);
  v22 = v21->current.value;
  v23 = DCONST_DVARFLT_stream_distanceSemanticBiasCardImposterNormal;
  *(float *)&v38[8] = v22 * v22;
  if ( !DCONST_DVARFLT_stream_distanceSemanticBiasCardImposterNormal && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_distanceSemanticBiasCardImposterNormal") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v23);
  v24 = v23->current.value;
  *(_QWORD *)index = &v33;
  v25 = 0;
  *(_QWORD *)&index[2] = v38;
  *(_QWORD *)&index[4] = &enabled;
  mValueSet = streamFrontendGlob->imageDistance.mValueSet;
  *(_QWORD *)&index[6] = &v37;
  *(float *)&v38[9] = v24 * v24;
  do
  {
    for ( i = *mValueSet; i; i &= ~v29 )
    {
      v28 = __lzcnt(i);
      v29 = 1 << ((31 - v28) & 0x1F);
      v30.mValue = v25 + 31 - v28;
      if ( v30.mValue >= 0x14000 )
      {
        LODWORD(v32) = 81920;
        LODWORD(v31) = v25 + 31 - v28;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_sortlist.h", 354, ASSERT_TYPE_ASSERT, "(unsigned)( assetIndex ) < (unsigned)( ( sizeof( *array_counter( mDistances ) ) + 0 ) )", "assetIndex doesn't index ARRAY_COUNT( mDistances )\n\t%i not in [0, %i)", v31, v32) )
          __debugbreak();
      }
      lambda_823bfb93df7c3d5e73323f4e7b5982a8_::operator()((unsigned int)index, v30);
    }
    v25 += 32;
    ++mValueSet;
  }
  while ( v25 < 0x14000 );
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
  const dvar_t *v3; 
  float v4; 
  const dvar_t *v7; 
  float value; 

  if ( freqDomainMetricBias >= 0 )
  {
    if ( freqDomainMetricBias <= 0 )
    {
      return FLOAT_1_0;
    }
    else
    {
      v7 = DCONST_DVARFLT_stream_freqDomainMetricLowDistScale;
      if ( !DCONST_DVARFLT_stream_freqDomainMetricLowDistScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_freqDomainMetricLowDistScale") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v7);
      value = v7->current.value;
      if ( value < 1.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 2201, ASSERT_TYPE_ASSERT, "( lowFreqBiasDistanceScaleMax ) >= ( 1.0f )", "%s >= %s\n\t%g, %g", "lowFreqBiasDistanceScaleMax", "1.0f", value, DOUBLE_1_0) )
        __debugbreak();
      return (float)((float)((float)freqDomainMetricBias * 0.0078740157) * (float)(value - 1.0)) + 1.0;
    }
  }
  else
  {
    v3 = DCONST_DVARFLT_stream_freqDomainMetricHighDistScale;
    if ( !DCONST_DVARFLT_stream_freqDomainMetricHighDistScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_freqDomainMetricHighDistScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v3);
    v4 = v3->current.value;
    if ( v4 < 0.0 || v4 > 1.0 )
    {
      __asm { vxorpd  xmm1, xmm1, xmm1 }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 2191, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( highFreqBiasDistanceScaleMin ) && ( highFreqBiasDistanceScaleMin ) <= ( 1.0f )", "highFreqBiasDistanceScaleMin not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", v4, *(double *)&_XMM1, DOUBLE_1_0) )
        __debugbreak();
    }
    return 1.0 - (float)((float)((float)-freqDomainMetricBias * 0.0078125) * (float)(1.0 - v4));
  }
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
  const dvar_t *v2; 

  v1 = 3 * imageIndex;
  if ( bitarray_base<bitarray<245760>>::testBit(&streamFrontendGlob->specialImagesTable, 3 * imageIndex + 1) )
  {
    v2 = DVARFLT_stream_distanceBiasNormalMapFoliageCardImposter;
    if ( !DVARFLT_stream_distanceBiasNormalMapFoliageCardImposter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_distanceBiasNormalMapFoliageCardImposter") )
      __debugbreak();
LABEL_5:
    Dvar_CheckFrontendServerThread(v2);
    return v2->current.value;
  }
  if ( bitarray_base<bitarray<245760>>::testBit(&streamFrontendGlob->specialImagesTable, v1 + 2) )
  {
    v2 = DVARFLT_stream_distanceBiasOtherFoliageCardImposter;
    if ( !DVARFLT_stream_distanceBiasOtherFoliageCardImposter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_distanceBiasOtherFoliageCardImposter") )
      __debugbreak();
    goto LABEL_5;
  }
  return FLOAT_1_0;
}

/*
==============
Stream_GetMinViewDistanceToClutter
==============
*/
float Stream_GetMinViewDistanceToClutter(unsigned int viewIndex)
{
  __int64 v1; 
  int v4; 

  v1 = viewIndex;
  if ( viewIndex >= 2 )
  {
    v4 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 1578, ASSERT_TYPE_ASSERT, "(unsigned)( viewIndex ) < (unsigned)( ( sizeof( *array_counter( streamFrontendGlob->minDistanceToClutter ) ) + 0 ) )", "viewIndex doesn't index streamFrontendGlob->minDistanceToClutter\n\t%i not in [0, %i)", viewIndex, v4) )
      __debugbreak();
  }
  return streamFrontendGlob->minDistanceToClutter[v1];
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
  unsigned int v2; 
  int v3; 
  __int64 v4; 
  __int64 v5; 
  unsigned int i; 
  unsigned int v7; 
  unsigned int v8; 
  unsigned int v9; 
  unsigned int v10; 
  unsigned int v11; 
  const dvar_t *v12; 
  StreamSortListFrame *v13; 
  __int64 GfxImageIndex; 
  unsigned int v15; 
  const dvar_t *v16; 
  StreamFrontendGlob *v17; 
  StreamFrontendGlob *v18; 
  unsigned int v19; 
  unsigned int v20; 
  __int64 v21; 
  __int64 v22; 
  __int64 v23; 
  StreamImageMip outRequestedMip; 
  unsigned int v25; 
  float v26; 
  GfxImage *outImage[4]; 
  unsigned int high; 
  unsigned int low; 
  float outDistance; 
  float v31; 

  outImage[1] = (GfxImage *)-2i64;
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
  v2 = 511;
  if ( !*((_BYTE *)data + 1128) )
    v2 = 440;
  v3 = *(_DWORD *)data;
  v4 = *((int *)data + 280);
  if ( (unsigned int)v4 >= 2 )
  {
    LODWORD(v22) = *((_DWORD *)data + 280);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 3034, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( ( sizeof( *array_counter( streamFrontendGlob->globalScheduler.m_subframeIndicesForEachDynamicSubtask ) ) + 0 ) )", "clientIndex doesn't index ARRAY_COUNT( streamFrontendGlob->globalScheduler.m_subframeIndicesForEachDynamicSubtask )\n\t%i not in [0, %i)", v22, 2) )
      __debugbreak();
  }
  if ( !v3 )
    Stream_UpdateDynamicModels_ScheduleSubtasks((const StreamDynamicUpdateCmd *)data, v2, (unsigned int (*)[9])streamFrontendGlob->globalScheduler.m_subframeIndicesForEachDynamicSubtask[v4]);
  LODWORD(v5) = 0;
  for ( i = 0; i < 9; ++i )
  {
    if ( _bittest((const int *)&v2, i) )
    {
      if ( Stream_UpdateDynamicModels_ScheduledForSubtask((LocalClientNum_t)v4, v3, (StreamUpdateScheduler::DynamicSubtask)i) )
        s_streamUpdateDynamicFuncs[i]((const StreamDynamicUpdateCmd *)data);
    }
  }
  R_DecalVolumes_ManageAtlas();
  v7 = R_DecalVolumes_BeginRequestImageMips();
  v25 = v7;
  v8 = 0;
  v31 = 0.0;
  if ( v7 )
  {
    do
    {
      if ( R_DecalVolumes_GetRequestedImageMip(v8, (const GfxImage **)outImage, &outRequestedMip, &outDistance) )
      {
        if ( !outImage[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 3071, ASSERT_TYPE_ASSERT, "(image != nullptr)", (const char *)&queryFormat, "image != nullptr") )
          __debugbreak();
        Stream_UsedImage(outImage[0]);
        if ( outDistance >= 0.0 )
        {
          GfxImageIndex = DB_GetGfxImageIndex(outImage[0]);
          v26 = outDistance;
          v31 = outDistance;
          if ( (LODWORD(outDistance) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_distance.h", 188, ASSERT_TYPE_SANITY, "( !IS_NAN( distance ) )", (const char *)&queryFormat, "!IS_NAN( distance )") )
            __debugbreak();
          v15 = LODWORD(v26) >> 7;
          if ( (unsigned int)GfxImageIndex >= 0x14000 )
          {
            LODWORD(v23) = 81920;
            LODWORD(v22) = GfxImageIndex;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_internal.h", 421, ASSERT_TYPE_ASSERT, "(unsigned)( imageIndex ) < (unsigned)( IMAGE_POOL_SIZE )", "imageIndex doesn't index IMAGE_POOL_SIZE\n\t%i not in [0, %i)", v22, v23) )
              __debugbreak();
          }
          v16 = DCONST_DVARBOOL_stream_pedanticAddImageChecks;
          if ( !DCONST_DVARBOOL_stream_pedanticAddImageChecks && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_pedanticAddImageChecks") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v16);
          if ( v16->current.enabled && (DB_GetGfxImageAtIndex(GfxImageIndex)->flags & 0x40) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_internal.h", 426, ASSERT_TYPE_ASSERT, "(R_IsStreamedImage( image ))", (const char *)&queryFormat, "R_IsStreamedImage( image )") )
            __debugbreak();
          v17 = streamFrontendGlob;
          if ( (unsigned int)GfxImageIndex >= 0x14000 )
          {
            LODWORD(v23) = 81920;
            LODWORD(v22) = GfxImageIndex;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_sortlist.h", 366, ASSERT_TYPE_ASSERT, "(unsigned)( assetIndex ) < (unsigned)( ( sizeof( *array_counter( mDistances ) ) + 0 ) )", "assetIndex doesn't index ARRAY_COUNT( mDistances )\n\t%i not in [0, %i)", v22, v23) )
              __debugbreak();
          }
          if ( v15 < v17->imageDistance.mDistances[GfxImageIndex].mValue )
            v17->imageDistance.mDistances[GfxImageIndex].mValue = v15;
          Com_BitSetAssert(v17->imageDistance.mValueSet, GfxImageIndex, 10240);
        }
        else
        {
          Stream_GetImageStreamedPartsRange(outImage[0], outRequestedMip, &low, &high);
          if ( low >= 0x50000 )
          {
            LODWORD(v23) = 327680;
            LODWORD(v22) = low;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 3079, ASSERT_TYPE_ASSERT, "(unsigned)( lowPartIndex ) < (unsigned)( TOTAL_IMAGE_PARTS )", "lowPartIndex doesn't index TOTAL_IMAGE_PARTS\n\t%i not in [0, %i)", v22, v23) )
              __debugbreak();
          }
          v9 = high;
          if ( high >= 0x50000 )
          {
            LODWORD(v23) = 327680;
            LODWORD(v22) = high;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 3080, ASSERT_TYPE_ASSERT, "(unsigned)( highPartIndex ) < (unsigned)( TOTAL_IMAGE_PARTS )", "highPartIndex doesn't index TOTAL_IMAGE_PARTS\n\t%i not in [0, %i)", v22, v23) )
              __debugbreak();
            v9 = high;
          }
          v10 = low;
          if ( low < v9 )
          {
            do
            {
              v11 = (v10 & 3) + 65542;
              if ( v10 >= 0x50000 )
              {
                LODWORD(v23) = 327680;
                LODWORD(v22) = v10;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_internal.h", 407, ASSERT_TYPE_ASSERT, "(unsigned)( imagePartIndex ) < (unsigned)( TOTAL_IMAGE_PARTS )", "imagePartIndex doesn't index TOTAL_IMAGE_PARTS\n\t%i not in [0, %i)", v22, v23) )
                  __debugbreak();
              }
              v12 = DCONST_DVARBOOL_stream_pedanticAddImageChecks;
              if ( !DCONST_DVARBOOL_stream_pedanticAddImageChecks && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_pedanticAddImageChecks") )
                __debugbreak();
              Dvar_CheckFrontendServerThread(v12);
              if ( v12->current.enabled && (DB_GetGfxImageAtIndex(v10 >> 2)->flags & 0x40) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_internal.h", 412, ASSERT_TYPE_ASSERT, "(R_IsStreamedImage( image ))", (const char *)&queryFormat, "R_IsStreamedImage( image )") )
                __debugbreak();
              v13 = &streamFrontendGlob->sortLists[streamFrontendGlob->sortListWrite];
              if ( v10 >= 0x50000 )
              {
                LODWORD(v23) = 327680;
                LODWORD(v22) = v10;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_sortlist.h", 366, ASSERT_TYPE_ASSERT, "(unsigned)( assetIndex ) < (unsigned)( ( sizeof( *array_counter( mDistances ) ) + 0 ) )", "assetIndex doesn't index ARRAY_COUNT( mDistances )\n\t%i not in [0, %i)", v22, v23) )
                  __debugbreak();
              }
              if ( v11 < v13->imagePartDistance.mDistances[v10].mValue )
                v13->imagePartDistance.mDistances[v10].mValue = v11;
              Com_BitSetAssert(v13->imagePartDistance.mValueSet, v10++, 40960);
            }
            while ( v10 < high );
            v8 = LODWORD(v31);
            v7 = v25;
          }
        }
      }
      ++v8;
      v31 = *(float *)&v8;
    }
    while ( v8 < v7 );
    LODWORD(v5) = 0;
  }
  R_DecalVolumes_EndRequestImageMips();
  v18 = streamFrontendGlob;
  v19 = streamFrontendGlob->imageDistanceHint.mValueSet.array[0];
  while ( v19 )
  {
LABEL_81:
    v20 = __lzcnt(v19);
    v21 = v20 + 32 * (_DWORD)v5;
    if ( v20 >= 0x20 )
    {
      LODWORD(v23) = 32;
      LODWORD(v22) = v20;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v22, v23) )
        __debugbreak();
    }
    if ( (v19 & (0x80000000 >> v20)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
      __debugbreak();
    v19 &= ~(0x80000000 >> v20);
    if ( (unsigned int)v21 >= 0x14000 )
    {
      LODWORD(v23) = 81920;
      LODWORD(v22) = v20 + 32 * v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_hint.h", 44, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( sizeof( *array_counter( mDistances ) ) + 0 ) )", "index doesn't index ARRAY_COUNT( mDistances )\n\t%i not in [0, %i)", v22, v23) )
        __debugbreak();
    }
    Stream_UpdateDynamicModelsCmd_AddImageDistanceHint(v21, v18->imageDistanceHint.mDistances[v21]);
  }
  while ( 1 )
  {
    v5 = (unsigned int)(v5 + 1);
    if ( (unsigned int)v5 >= 0xA00 )
      break;
    v19 = v18->imageDistanceHint.mValueSet.array[v5];
    if ( v19 )
      goto LABEL_81;
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
Stream_UpdateDynamicModelsCmd_AddImageDistanceHint
==============
*/
void Stream_UpdateDynamicModelsCmd_AddImageDistanceHint(const unsigned int imageIndex, const StreamMiniDistance distance)
{
  GfxImage *GfxImageAtIndex; 
  float v5; 

  GfxImageAtIndex = DB_GetGfxImageAtIndex(imageIndex);
  if ( !GfxImageAtIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 2989, ASSERT_TYPE_ASSERT, "(image)", (const char *)&queryFormat, "image") )
    __debugbreak();
  if ( (GfxImageAtIndex->flags & 0x40) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 2990, ASSERT_TYPE_ASSERT, "(R_IsStreamedImage( image ))", (const char *)&queryFormat, "R_IsStreamedImage( image )") )
    __debugbreak();
  v5 = (float)distance.mValue * 0.0098039219;
  if ( (LODWORD(v5) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_distance.h", 188, ASSERT_TYPE_SANITY, "( !IS_NAN( distance ) )", (const char *)&queryFormat, "!IS_NAN( distance )") )
    __debugbreak();
  Stream_AddImageDistance(imageIndex, (StreamDistance)(LODWORD(v5) >> 7));
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
  __int64 v10; 
  StreamUpdateScheduler::DynamicSubtask *v11; 
  __int64 v12; 
  unsigned int v13; 
  unsigned int v14; 
  unsigned __int64 v15; 
  unsigned __int64 (*iterationCounts)[9]; 
  __int64 *v17; 
  unsigned __int64 v18; 
  unsigned int v19; 
  __int64 v20; 
  __int64 v21; 
  unsigned int m_subFrameCount; 
  __int64 v24[8]; 
  StreamUpdateScheduler::DynamicSubtask _First[8]; 
  int v26; 
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
            LODWORD(v21) = 2;
            LODWORD(v20) = cmd->localClientNum;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 300, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v20, v21) )
              __debugbreak();
          }
          v3->iterationCounts = (unsigned __int64 (*)[9])g_dynEntClientEntsAllocCount[localClientNum][1];
          break;
        case 8u:
          v9 = cmd->localClientNum;
          if ( (unsigned int)v9 >= 2 )
          {
            LODWORD(v21) = 2;
            LODWORD(v20) = cmd->localClientNum;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 300, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v20, v21) )
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
  v10 = 9i64;
  v26 = 8;
  *(__m256i *)_First = _ymm;
  std::_Sort_unchecked_enum_StreamUpdateScheduler::DynamicSubtask____lambda_00bc3dbfeda74bd24a3d52abe74c862c___(_First, _Last, 9i64, (Stream_UpdateDynamicModels_ScheduleSubtasks::__l2::<lambda_00bc3dbfeda74bd24a3d52abe74c862c>)_Pred);
  if ( m_subFrameCount > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 2834, ASSERT_TYPE_ASSERT, "(subFrameCount <= MaxSubFrameCount)", (const char *)&queryFormat, "subFrameCount <= MaxSubFrameCount") )
    __debugbreak();
  v11 = _First;
  memset(v24, 0, sizeof(v24));
  do
  {
    v12 = *(int *)v11;
    v13 = m_subFrameCount - 1;
    v14 = 0;
    v15 = -1i64;
    iterationCounts = _Pred[v12].iterationCounts;
    if ( m_subFrameCount )
    {
      v17 = v24;
      do
      {
        v18 = *v17++;
        v19 = v14;
        if ( v18 >= v15 )
          v19 = v13;
        ++v14;
        v13 = v19;
        if ( v18 >= v15 )
          v18 = v15;
        v15 = v18;
      }
      while ( v14 < m_subFrameCount );
    }
    ++v11;
    (*subframeIndexForEachDynamicSubtask)[v12] = v13;
    v24[v13] += (__int64)iterationCounts;
    --v10;
  }
  while ( v10 );
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
  const dvar_t *v2; 
  StreamUpdateMultiView *p_multiView; 
  __int64 v4; 
  MapEnts *mapEnts; 
  DynEntityListId dynEntityListsCount; 
  DynEntityListId *dynEntListIds; 
  int v8; 
  __int64 v9; 
  DynEntityListId v10; 
  unsigned __int64 v11; 
  float v12; 
  __int64 v13; 
  DynEntityList *DynEntityList; 
  DynEntityDef *v15; 
  unsigned __int16 brushModel; 
  GfxBrushModel *v17; 
  GfxBrushModel *models; 
  unsigned __int64 v19; 
  GfxWorld *world; 
  unsigned int startSurfIndex; 
  unsigned int *v22; 
  __int64 v23; 
  StreamUpdateMultiView *v24; 
  const Material *material; 
  DynEntityListId v26; 
  unsigned __int64 v27; 
  unsigned int v28; 
  unsigned int v29; 
  DynEntityList *v30; 
  __m128 *v31; 
  const XModel *v32; 
  float v33; 
  __int128 v35; 
  float v38; 
  __m128 v40; 
  float v43; 
  __m128 v45; 
  DynEntityListId v50; 
  __int64 v51; 
  __int64 v52; 
  __int64 v53; 
  __int64 v54; 
  __int64 v55; 
  __int64 v56; 
  __int64 v57; 
  __int64 v58; 
  DynEntityListId v59; 
  float v60; 
  DynEntityListId *v61; 
  unsigned int v62; 
  int v63; 
  StreamUpdateMultiView *multiView; 
  __int64 v65; 
  __int64 v66[7]; 
  __int128 v67; 
  __m128 v68; 
  __m128 v69; 
  __int128 v70; 
  __m128 v71; 
  __m128 v72; 
  __m128 v73; 

  v66[5] = -2i64;
  Sys_ProfBeginNamedEvent(0xFF808080, "Stream_UpdateDynamic_DynEntsAll");
  v2 = DCONST_DVARBOOL_stream_hintDynEnts;
  if ( !DCONST_DVARBOOL_stream_hintDynEnts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_hintDynEnts") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.enabled )
  {
    p_multiView = &cmd->multiView;
    multiView = &cmd->multiView;
    v4 = 0i64;
    mapEnts = cm.mapEnts;
    if ( cm.mapEnts )
    {
      dynEntityListsCount = cm.mapEnts->dynEntityListsCount;
      v59 = dynEntityListsCount;
      dynEntListIds = cm.mapEnts->dynEntListIds;
      v61 = dynEntListIds;
      if ( dynEntityListsCount && !dynEntListIds )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 1439, ASSERT_TYPE_ASSERT, "(listCount == 0 || listIds)", (const char *)&queryFormat, "listCount == 0 || listIds") )
          __debugbreak();
        dynEntityListsCount = v59;
        mapEnts = cm.mapEnts;
      }
    }
    else
    {
      dynEntityListsCount = 0;
      v59 = 0;
      dynEntListIds = NULL;
      v61 = NULL;
    }
    v8 = (unsigned __int16)dynEntityListsCount;
    v63 = (unsigned __int16)dynEntityListsCount;
    if ( dynEntityListsCount )
    {
      v9 = (unsigned __int16)dynEntityListsCount;
      v65 = (unsigned __int16)dynEntityListsCount;
      do
      {
        v10 = *dynEntListIds;
        if ( *dynEntListIds >= DEFAULT_DYNENTITY_LIST_ID )
        {
          LODWORD(v54) = 1536;
          LODWORD(v51) = (unsigned __int16)v10;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 175, ASSERT_TYPE_ASSERT, "(unsigned)( listId ) < (unsigned)( MAX_MAP_TRANSIENT_ZONES )", "listId doesn't index MAX_DYNENTITY_LIST_DEFS\n\t%i not in [0, %i)", v51, v54) )
            __debugbreak();
          LODWORD(v55) = 1536;
          LODWORD(v52) = (unsigned __int16)v10;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 127, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( MAX_MAP_TRANSIENT_ZONES )", "index doesn't index MAX_DYNENTITY_LIST_DEFS\n\t%i not in [0, %i)", v52, v55) )
            __debugbreak();
        }
        v11 = (unsigned __int64)(unsigned __int16)v10 << 6;
        if ( (unsigned __int16)(*(DynEntityListId *)((char *)&g_dynEntityLists[0].index + v11) - 1536) > 1u && (DynEntityList *)((char *)g_dynEntityLists + v11) )
        {
          v62 = *(unsigned int *)((char *)&g_dynEntityLists[0].dynEntCount[1] + v11);
          v12 = 0.0;
          v60 = 0.0;
          if ( v62 )
          {
            v13 = 0i64;
            do
            {
              DynEntityList = DynEnt_GetDynEntityList(*dynEntListIds);
              if ( !DynEntityList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 238, ASSERT_TYPE_ASSERT, "(dynEntList)", (const char *)&queryFormat, "dynEntList") )
                __debugbreak();
              if ( LODWORD(v12) >= DynEntityList->dynEntCount[1] )
              {
                LODWORD(v54) = DynEntityList->dynEntCount[1];
                *(float *)&v51 = v12;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 239, ASSERT_TYPE_ASSERT, "(unsigned)( localId ) < (unsigned)( dynEntList->dynEntCount[basis] )", "localId doesn't index dynEntList->dynEntCount[basis]\n\t%i not in [0, %i)", v51, v54) )
                  __debugbreak();
              }
              v15 = &DynEntityList->dynEntDefList[1][v13];
              if ( !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 1448, ASSERT_TYPE_ASSERT, "(dynEntDef)", (const char *)&queryFormat, "dynEntDef") )
                __debugbreak();
              brushModel = v15->brushModel;
              if ( !brushModel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 1451, ASSERT_TYPE_ASSERT, "(brushModel)", (const char *)&queryFormat, "brushModel") )
                __debugbreak();
              v17 = R_GetBrushModel(brushModel);
              if ( !v17 )
              {
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 1454, ASSERT_TYPE_ASSERT, "(bmodel)", (const char *)&queryFormat, "bmodel") )
                  __debugbreak();
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 986, ASSERT_TYPE_ASSERT, "(bmodel)", (const char *)&queryFormat, "bmodel") )
                  __debugbreak();
              }
              if ( !rgp.world && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 987, ASSERT_TYPE_ASSERT, "(rgp.world)", (const char *)&queryFormat, "rgp.world") )
                __debugbreak();
              models = s_world.models;
              if ( &s_world.models[1] > v17 || v17 > &s_world.models[s_world.modelCount] )
              {
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 990, ASSERT_TYPE_ASSERT, "(s_world.models + 1) <= (bmodel) && (bmodel) <= (s_world.models + s_world.modelCount)", "%s\n\t0x%p not in [0x%p, 0x%p]", "bmodel not in [s_world.models + 1, s_world.models + s_world.modelCount]", v17, &s_world.models[1], &s_world.models[s_world.modelCount]) )
                  __debugbreak();
                models = s_world.models;
              }
              v19 = (__int64)((unsigned __int128)(((char *)v17 - (char *)models) * (__int128)0x2AAAAAAAAAAAAAABi64) >> 64) >> 4;
              world = rgp.world;
              startSurfIndex = v17->startSurfIndex;
              v22 = &s_world.surfaces.himipRadiusInvSqBmodelSurfaceIndirection[s_world.surfaces.himipRadiusInvSqBmodelIndirection[(v19 >> 63) - 1 + v19]];
              v23 = 0i64;
              if ( v17->surfaceCount )
              {
                v24 = multiView;
                do
                {
                  material = world->surfaces.surfaces[startSurfIndex].material;
                  if ( material && material->textureCount )
                    Stream_AddBspSurfaceDistance(v24, &s_world.surfaces.himipRadiusInvSqBModelCompacted[v22[v23] & 0xFFFFFFF], v22[v23] >> 28, &v17->writable.bounds, material);
                  ++startSurfIndex;
                  v23 = (unsigned int)(v23 + 1);
                }
                while ( (unsigned int)v23 < v17->surfaceCount );
                v12 = v60;
              }
              ++LODWORD(v12);
              v60 = v12;
              ++v13;
              dynEntListIds = v61;
            }
            while ( LODWORD(v12) < v62 );
            v4 = 0i64;
            v9 = v65;
          }
          p_multiView = multiView;
        }
        v26 = *dynEntListIds;
        if ( *dynEntListIds >= DEFAULT_DYNENTITY_LIST_ID )
        {
          LODWORD(v54) = 1536;
          LODWORD(v51) = (unsigned __int16)v26;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 175, ASSERT_TYPE_ASSERT, "(unsigned)( listId ) < (unsigned)( MAX_MAP_TRANSIENT_ZONES )", "listId doesn't index MAX_DYNENTITY_LIST_DEFS\n\t%i not in [0, %i)", v51, v54) )
            __debugbreak();
          LODWORD(v56) = 1536;
          LODWORD(v53) = (unsigned __int16)v26;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 127, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( MAX_MAP_TRANSIENT_ZONES )", "index doesn't index MAX_DYNENTITY_LIST_DEFS\n\t%i not in [0, %i)", v53, v56) )
            __debugbreak();
        }
        v27 = (unsigned __int64)(unsigned __int16)v26 << 6;
        if ( (unsigned __int16)(*(DynEntityListId *)((char *)&g_dynEntityLists[0].index + v27) - 1536) > 1u )
        {
          if ( (DynEntityList *)((char *)g_dynEntityLists + v27) )
          {
            v28 = *(unsigned int *)((char *)g_dynEntityLists[0].dynEntCount + v27);
            v29 = 0;
            if ( v28 )
            {
              do
              {
                v30 = DynEnt_GetDynEntityList(*dynEntListIds);
                if ( !v30 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 238, ASSERT_TYPE_ASSERT, "(dynEntList)", (const char *)&queryFormat, "dynEntList") )
                  __debugbreak();
                if ( v29 >= v30->dynEntCount[0] )
                {
                  LODWORD(v54) = v30->dynEntCount[0];
                  LODWORD(v51) = v29;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 239, ASSERT_TYPE_ASSERT, "(unsigned)( localId ) < (unsigned)( dynEntList->dynEntCount[basis] )", "localId doesn't index dynEntList->dynEntCount[basis]\n\t%i not in [0, %i)", v51, v54) )
                    __debugbreak();
                }
                v31 = (__m128 *)((char *)v30->dynEntDefList[0] + v4);
                if ( !v31 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 1463, ASSERT_TYPE_ASSERT, "(dynEntDef)", (const char *)&queryFormat, "dynEntDef") )
                  __debugbreak();
                v32 = (const XModel *)v31->m128_u64[0];
                if ( v31->m128_u64[0] )
                {
                  v60 = FLOAT_3_4028235e38;
                  v71 = _mm128_mul_ps(v31[1], (__m128)_xmm);
                  v33 = v31[2].m128_f32[0];
                  HIDWORD(v67) = 0;
                  v35 = v67;
                  *(float *)&v35 = v33;
                  _XMM3 = v35;
                  __asm
                  {
                    vinsertps xmm3, xmm3, dword ptr [rsi+24h], 10h
                    vinsertps xmm3, xmm3, dword ptr [rsi+28h], 20h ; ' '
                  }
                  v67 = _XMM3;
                  v70 = _XMM3;
                  v38 = v32->bounds.midPoint.v[0];
                  v68.m128_i32[3] = 0;
                  v40 = v68;
                  v40.m128_f32[0] = v38;
                  _XMM4 = v40;
                  __asm
                  {
                    vinsertps xmm4, xmm4, dword ptr [rdi+30h], 10h
                    vinsertps xmm4, xmm4, dword ptr [rdi+34h], 20h ; ' '
                  }
                  v68 = _XMM4;
                  v43 = v32->bounds.halfSize.v[0];
                  v69.m128_i32[3] = 0;
                  v45 = v69;
                  v45.m128_f32[0] = v43;
                  _XMM3 = v45;
                  __asm
                  {
                    vinsertps xmm3, xmm3, dword ptr [rdi+3Ch], 10h
                    vinsertps xmm3, xmm3, dword ptr [rdi+40h], 20h ; ' '
                  }
                  v69 = _XMM3;
                  v72 = _mm128_sub_ps(_XMM4, _XMM3);
                  v73 = _mm128_add_ps(_XMM4, _XMM3);
                  v66[0] = (__int64)&v70;
                  v66[1] = (__int64)&v71;
                  v66[2] = (__int64)&v72;
                  v66[3] = (__int64)&v73;
                  v66[4] = (__int64)&v60;
                  Stream_ViewPos_Iterate__lambda_18498cb6dbb513596de459c1976c7623_(p_multiView, (const Stream_CalculateDistanceSq_ModelInternal::__l2::<lambda_18498cb6dbb513596de459c1976c7623> *)v66);
                  if ( v60 == 3.4028235e38 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 1059, ASSERT_TYPE_ASSERT, "(distSq != 3.402823466e+38F)", (const char *)&queryFormat, "distSq != FLT_MAX") )
                    __debugbreak();
                  _XMM0 = LODWORD(streamFrontendGlob->zNearDistanceSq);
                  __asm { vmaxss  xmm1, xmm0, dword ptr [rsp+160h+var_110+4]; distSq }
                  v60 = *(float *)&_XMM1;
                  Stream_AddDynamicModelDistance(v32, *(const float *)&_XMM1);
                }
                ++v29;
                v4 += 80i64;
                dynEntListIds = v61;
              }
              while ( v29 < v28 );
              v9 = v65;
            }
          }
        }
        v61 = ++dynEntListIds;
        v65 = --v9;
        v4 = 0i64;
      }
      while ( v9 );
      mapEnts = cm.mapEnts;
      dynEntityListsCount = v59;
      v8 = v63;
    }
    v50 = 0;
    if ( mapEnts )
      v50 = mapEnts->dynEntityListsCount;
    if ( dynEntityListsCount != v50 )
    {
      if ( mapEnts )
        LOWORD(v4) = mapEnts->dynEntityListsCount;
      LODWORD(v58) = (unsigned __int16)v4;
      LODWORD(v57) = v8;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 1472, ASSERT_TYPE_ASSERT, "( listCount ) == ( DynEnt_GetExpectedDynEntityListCount() )", "%s == %s\n\t%u, %u", "listCount", "DynEnt_GetExpectedDynEntityListCount()", v57, v58) )
        __debugbreak();
    }
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
Stream_UpdateForClient
==============
*/
void Stream_UpdateForClient(const GfxViewInfo *viewInfo)
{
  StreamFrameState frameState; 
  double Float_Internal_DebugName; 
  unsigned int clientIndex; 
  StreamFrontendGlob *v5; 
  ScopedStreamFrontendUpdateLock v6; 

  Sys_ProfBeginNamedEvent(0xFF808080, "Stream_UpdateForClient");
  if ( !viewInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 2696, ASSERT_TYPE_ASSERT, "(viewInfo)", (const char *)&queryFormat, "viewInfo") )
    __debugbreak();
  if ( !Stream_IsInitialized() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 2697, ASSERT_TYPE_ASSERT, "(Stream_IsInitialized())", (const char *)&queryFormat, "Stream_IsInitialized()") )
    __debugbreak();
  if ( !Sys_IsUpdateScreenThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 2698, ASSERT_TYPE_ASSERT, "(Sys_IsUpdateScreenThread())", (const char *)&queryFormat, "Sys_IsUpdateScreenThread()") )
    __debugbreak();
  Sys_WaitWorkerCmdsOfType(WRKCMD_STREAM_BEGIN_SCREEN_UPDATE_FRAME);
  ScopedStreamFrontendUpdateLock::ScopedStreamFrontendUpdateLock(&v6);
  frameState = streamFrontendGlob->frameState;
  if ( frameState && frameState != UPDATE_FOR_CLIENT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 2713, ASSERT_TYPE_ASSERT, "(streamFrontendGlob->frameState == StreamFrameState::BEGIN || streamFrontendGlob->frameState == StreamFrameState::UPDATE_FOR_CLIENT)", (const char *)&queryFormat, "streamFrontendGlob->frameState == StreamFrameState::BEGIN || streamFrontendGlob->frameState == StreamFrameState::UPDATE_FOR_CLIENT") )
    __debugbreak();
  streamFrontendGlob->frameState = UPDATE_FOR_CLIENT;
  if ( streamFrontendGlob->updateFrameInProgress && streamFrontendGlob->numClientsThisFrame != -1 && Stream_IsEnabled() )
  {
    if ( streamFrontendGlob->frozenState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 2720, ASSERT_TYPE_ASSERT, "(!streamFrontendGlob->frozenState)", (const char *)&queryFormat, "!streamFrontendGlob->frozenState") )
      __debugbreak();
    *(float *)&Float_Internal_DebugName = viewInfo->viewParmsSet.frames[0].viewParms.camera.zPlanes[2];
    if ( (unsigned __int8)(streamFrontendGlob->gameMode[0] - 2) <= 1u )
      Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DVARFLT_stream_zNearDistanceInMP, "stream_zNearDistanceInMP");
    streamFrontendGlob->zNearDistanceSq = *(float *)&Float_Internal_DebugName * *(float *)&Float_Internal_DebugName;
    if ( streamFrontendGlob->numClientsThisFrame < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 2729, ASSERT_TYPE_ASSERT, "( streamFrontendGlob->numClientsThisFrame ) >= ( 0 )", "%s >= %s\n\t%i, %i", "streamFrontendGlob->numClientsThisFrame", "0", streamFrontendGlob->numClientsThisFrame, 0i64) )
      __debugbreak();
    clientIndex = viewInfo->clientIndex;
    if ( !Stream_ViewPos_UpdateForClient(clientIndex) )
      Com_PrintError(35, "Stream_UpdateForClient: There is no view position set. (clientIndex: %d)\n", clientIndex);
    Stream_KickoffDynamicUpdate(clientIndex, viewInfo->viewInfoIndex, 1);
    v5 = streamFrontendGlob;
    if ( streamFrontendGlob->gameMode[0] == 1 )
    {
      StreamSP_TouchWeaponModels(clientIndex);
      v5 = streamFrontendGlob;
    }
    ++v5->numClientsThisFrame;
    Stream_KickoffCombineAndSort();
  }
  ScopedStreamFrontendUpdateLock::~ScopedStreamFrontendUpdateLock(&v6);
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
  unsigned int v7; 
  unsigned int m_subFrameIndex; 
  unsigned int v9; 
  __int64 v10; 
  __int64 v11; 
  GfxStaticModelCollection *collections; 
  const XModel **p_model; 
  unsigned int XModelIndex; 
  const dvar_t *v15; 
  unsigned int v16; 
  __int64 viewCount; 
  Bounds *collectionBounds; 
  __m128 v21; 
  float v24; 
  __m128 v26; 
  __m128 v29; 
  const StreamUpdateMultiView *v31; 
  float *viewCosFovLimit; 
  __m128 v35; 
  unsigned int v41; 
  float radius; 
  __int64 v43; 
  float v44; 
  const StreamUpdateMultiView *v45; 
  float *v46; 
  float v47; 
  float v48; 
  unsigned int v50; 
  StreamFrontendGlob *v51; 
  __int64 v52; 
  __int64 v53; 
  float v54; 
  float v55; 
  float v56; 
  float v57; 
  int bitNum; 
  GfxWorld *v59; 
  float outScale[4]; 
  float4 v61; 
  __int64 v62; 
  float4 v63; 
  float4 v64; 
  float4 v65; 
  __m128 v66; 
  __m128 v67; 
  GfxPlacement outPlacement; 

  if ( !rgp.world && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 3102, ASSERT_TYPE_ASSERT, "(rgp.world)", (const char *)&queryFormat, "rgp.world") )
    __debugbreak();
  world = rgp.world;
  m_subFrameCount = schedule->m_subFrameCount;
  v59 = rgp.world;
  collectionCount = rgp.world->smodels.collectionCount;
  if ( m_subFrameCount )
  {
    if ( schedule->m_subFrameIndex >= m_subFrameCount )
    {
      LODWORD(v52) = schedule->m_subFrameIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_workers.h", 49, ASSERT_TYPE_ASSERT, "(unsigned)( m_subFrameIndex ) < (unsigned)( m_subFrameCount )", "m_subFrameIndex doesn't index m_subFrameCount\n\t%i not in [0, %i)", v52, schedule->m_subFrameCount) )
        __debugbreak();
      world = v59;
    }
    v7 = schedule->m_subFrameCount;
    m_subFrameIndex = schedule->m_subFrameIndex;
    if ( collectionCount <= v7 )
    {
      if ( m_subFrameIndex >= collectionCount )
        return;
      v9 = schedule->m_subFrameIndex;
      collectionCount = m_subFrameIndex + 1;
    }
    else
    {
      v9 = collectionCount / v7 * m_subFrameIndex;
      if ( m_subFrameIndex != v7 - 1 )
        collectionCount = collectionCount / v7 * (m_subFrameIndex + 1);
    }
    if ( v9 < collectionCount )
    {
      v10 = v9;
      v11 = 24i64 * v9;
      v61.v.m128_u64[0] = v11;
      v62 = collectionCount - v9;
      do
      {
        collections = world->smodels.collections;
        p_model = (const XModel **)&world->smodels.models[collections[v10].smodelIndex].model;
        XModelIndex = DB_GetXModelIndex(*p_model);
        v15 = DCONST_DVARBOOL_stream_updateSModelCollectionsViaSharedBounds;
        v16 = XModelIndex;
        bitNum = XModelIndex;
        *(float *)&_XMM7 = FLOAT_3_4028235e38;
        if ( !DCONST_DVARBOOL_stream_updateSModelCollectionsViaSharedBounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_updateSModelCollectionsViaSharedBounds") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v15);
        if ( v15->current.enabled )
        {
          viewCount = multiView->viewCount;
          v66.m128_i32[3] = 0;
          collectionBounds = v59->smodels.collectionBounds;
          v21 = v66;
          v21.m128_f32[0] = *(float *)((char *)collectionBounds->midPoint.v + v11);
          _XMM4 = v21;
          __asm
          {
            vinsertps xmm4, xmm4, dword ptr [r14+rax+4], 10h
            vinsertps xmm4, xmm4, dword ptr [r14+rax+8], 20h ; ' '
          }
          v24 = *(float *)((char *)collectionBounds->halfSize.v + v11);
          v67.m128_i32[3] = 0;
          v26 = v67;
          v26.m128_f32[0] = v24;
          _XMM3 = v26;
          __asm
          {
            vinsertps xmm3, xmm3, xmm1, 10h
            vinsertps xmm3, xmm3, xmm2, 20h ; ' '
          }
          v67 = _XMM3;
          v29 = _mm128_sub_ps(_XMM4, _XMM3);
          _XMM9 = _mm128_add_ps(_XMM4, _XMM3);
          v66 = _XMM4;
          if ( viewCount > 0 )
          {
            v31 = multiView;
            viewCosFovLimit = multiView->viewCosFovLimit;
            do
            {
              __asm
              {
                vminps  xmm0, xmm9, xmmword ptr [rbx]
                vmaxps  xmm3, xmm0, xmm8
              }
              v35 = _mm128_sub_ps((__m128)_XMM3, v31->viewPos[0].v);
              _XMM2 = _mm128_mul_ps(v35, v35);
              v57 = viewCosFovLimit[16];
              __asm
              {
                vinsertps xmm0, xmm2, xmm2, 8
                vhaddps xmm1, xmm0, xmm0
              }
              _XMM0 = v31->viewDir[0].v;
              v56 = *viewCosFovLimit;
              v54 = *(viewCosFovLimit - 32);
              __asm { vhaddps xmm2, xmm1, xmm1 }
              v65.v = (__m128)v31->viewPos[0];
              v61.v = _XMM0;
              outPlacement.quat = _XMM3;
              v63.v = _XMM9;
              v64.v = v29;
              _XMM0.m128_f32[0] = Stream_CalculateDistanceSq_ApplyZoomFactor(&v64, &v63, *(float *)&_XMM2, (const float4 *)&outPlacement, &v65, &v61, v54, v56, v57);
              ++viewCosFovLimit;
              v31 = (const StreamUpdateMultiView *)((char *)v31 + 16);
              __asm { vminss  xmm7, xmm0, xmm7 }
              --viewCount;
            }
            while ( viewCount );
          }
          v16 = bitNum;
        }
        else
        {
          if ( !collections[v10].instanceCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 3131, ASSERT_TYPE_ASSERT, "(smodelCollection->instanceCount > 0)", (const char *)&queryFormat, "smodelCollection->instanceCount > 0") )
            __debugbreak();
          v41 = 0;
          radius = (*p_model)->radius;
          if ( collections[v10].instanceCount )
          {
            do
            {
              R_StaticModelInstance_GetPlacement(v41 + collections[v10].firstInstance, &outPlacement, outScale);
              v43 = multiView->viewCount;
              v44 = radius * outScale[0];
              if ( v43 > 0 )
              {
                v45 = multiView;
                v46 = multiView->viewCosFovLimit;
                do
                {
                  v47 = *v46;
                  v48 = *(v46 - 32);
                  _XMM0 = v45->viewDir[0].v;
                  v55 = v46[16];
                  v63.v = (__m128)v45->viewPos[0];
                  v64.v = _XMM0;
                  _XMM0.m128_f32[0] = Stream_CalculateDistanceSq_Sphere(&outPlacement.origin, v44, &v63, &v64, v48, v47, v55);
                  ++v46;
                  v45 = (const StreamUpdateMultiView *)((char *)v45 + 16);
                  __asm { vminss  xmm7, xmm0, xmm7 }
                  --v43;
                }
                while ( v43 );
              }
              ++v41;
            }
            while ( v41 < collections[v10].instanceCount );
            v16 = bitNum;
          }
          v11 = v61.v.m128_u64[0];
        }
        if ( *(float *)&_XMM7 == 3.4028235e38 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 3151, ASSERT_TYPE_ASSERT, "(minDistanceSq != 3.402823466e+38F)", (const char *)&queryFormat, "minDistanceSq != FLT_MAX") )
          __debugbreak();
        v61.v.m128_f32[0] = *(float *)&_XMM7;
        if ( (_XMM7 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_distance.h", 188, ASSERT_TYPE_SANITY, "( !IS_NAN( distance ) )", (const char *)&queryFormat, "!IS_NAN( distance )") )
          __debugbreak();
        v50 = (unsigned int)v61.v.m128_i32[0] >> 7;
        if ( v16 >= 0x6000 )
        {
          LODWORD(v53) = 24576;
          LODWORD(v52) = v16;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_internal.h", 442, ASSERT_TYPE_ASSERT, "(unsigned)( modelIndex ) < (unsigned)( (24064 + 512) )", "modelIndex doesn't index XMODEL_POOL_SIZE\n\t%i not in [0, %i)", v52, v53) )
            __debugbreak();
        }
        v51 = streamFrontendGlob;
        if ( v16 >= 0x6000 )
        {
          LODWORD(v53) = 24576;
          LODWORD(v52) = v16;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_sortlist.h", 366, ASSERT_TYPE_ASSERT, "(unsigned)( assetIndex ) < (unsigned)( ( sizeof( *array_counter( mDistances ) ) + 0 ) )", "assetIndex doesn't index ARRAY_COUNT( mDistances )\n\t%i not in [0, %i)", v52, v53) )
            __debugbreak();
        }
        if ( v50 < v51->modelDistance.mDistances[v16].mValue )
          v51->modelDistance.mDistances[v16].mValue = v50;
        Com_BitSetAssert(v51->modelDistance.mValueSet, v16, 3072);
        world = v59;
        v11 += 24i64;
        ++v10;
        v61.v.m128_u64[0] = v11;
        --v62;
      }
      while ( v62 );
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
  unsigned int v2; 
  char *v3; 
  unsigned int v4; 
  unsigned int v5; 
  unsigned int v6; 
  unsigned int v7; 
  unsigned int v8; 
  unsigned int v9; 
  __int64 v10; 
  float v11; 
  float v13; 
  float v14; 
  LocalClientNum_t v15; 
  __m128 v17; 
  __m128 v18; 
  StreamTree *p_streamTree; 
  GfxWorld *world; 
  float4 *viewDir; 
  __int64 zoomFactor; 
  LocalClientNum_t localClientIndex; 
  bitarray<1536> *transientVisibility; 
  float4 v25; 

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
  v2 = streamFrontendGlob->globalScheduler.mUseXModelStreamTree + 1;
  v3 = (char *)data + 16;
  v4 = v2 * *((_DWORD *)data + 276);
  v5 = *((_DWORD *)data + 1);
  if ( !v5 )
  {
LABEL_22:
    v4 = 0;
    v8 = 0;
    goto LABEL_23;
  }
  if ( *(_DWORD *)data >= v5 )
  {
    LODWORD(viewDir) = *(_DWORD *)data;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_workers.h", 49, ASSERT_TYPE_ASSERT, "(unsigned)( m_subFrameIndex ) < (unsigned)( m_subFrameCount )", "m_subFrameIndex doesn't index m_subFrameCount\n\t%i not in [0, %i)", viewDir, *((_DWORD *)data + 1)) )
      __debugbreak();
  }
  v6 = *((_DWORD *)data + 1);
  if ( v4 <= v6 )
  {
    v8 = *(_DWORD *)data;
    if ( v8 < v4 )
    {
      v4 = v8 + 1;
      goto LABEL_23;
    }
    goto LABEL_22;
  }
  v7 = *(_DWORD *)data;
  v8 = v4 / v6 * *(_DWORD *)data;
  if ( v7 != v6 - 1 )
    v4 = v4 / v6 * (v7 + 1);
LABEL_23:
  while ( v8 < v4 )
  {
    v9 = v8 % v2;
    v10 = v8 / v2;
    if ( v8 / v2 >= 0x10 )
    {
      LODWORD(zoomFactor) = 16;
      LODWORD(viewDir) = v8 / v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 3226, ASSERT_TYPE_ASSERT, "(unsigned)( viewIndex ) < (unsigned)( ( sizeof( *array_counter( multiView.viewPos ) ) + 0 ) )", "viewIndex doesn't index ARRAY_COUNT( multiView.viewPos )\n\t%i not in [0, %i)", viewDir, zoomFactor) )
        __debugbreak();
    }
    if ( v9 >= v2 )
    {
      LODWORD(zoomFactor) = v2;
      LODWORD(viewDir) = v8 % v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 3227, ASSERT_TYPE_ASSERT, "(unsigned)( treeIndex ) < (unsigned)( treeTypeCount )", "treeIndex doesn't index treeTypeCount\n\t%i not in [0, %i)", viewDir, zoomFactor) )
        __debugbreak();
    }
    v11 = *(float *)&v3[4 * v10 + 768];
    _XMM1 = (__m128)*(unsigned int *)&v3[4 * v10 + 832];
    v13 = *(float *)&v3[4 * v10 + 896];
    v14 = *(float *)&v3[4 * v10 + 960];
    v15 = *(_DWORD *)&v3[4 * v10 + 1024];
    localClientIndex = v15;
    if ( v9 )
    {
      if ( v9 != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 3276, ASSERT_TYPE_ASSERT, "(treeIndex == 1)", (const char *)&queryFormat, "treeIndex == 1") )
        __debugbreak();
      world = rgp.world;
      if ( !rgp.world->xmodelStreamTreeGrid.cellKeys && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_update.cpp", 3278, ASSERT_TYPE_ASSERT, "(xmodelStreamTreeGrid.cellKeys != nullptr)", (const char *)&queryFormat, "xmodelStreamTreeGrid.cellKeys != nullptr") )
        __debugbreak();
      Stream_TraverseXModelStreamTreeGrid(&world->xmodelStreamTreeGrid, v10, localClientIndex, (const float4 *)&v3[16 * v10], (const float4 *)&v3[16 * v10 + 256], v11, v13, v14, transientVisibility);
    }
    else
    {
      __asm { vmaxss  xmm4, xmm1, xmm6 }
      v17 = *(__m128 *)&v3[16 * v10 + 512];
      v25.v = v17;
      if ( _XMM1.m128_f32[0] < v11 )
      {
        v18 = _XMM1;
        v18.m128_f32[0] = _XMM1.m128_f32[0] / v11;
        v25.v = _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v18, v18, 0), _mm128_sub_ps(v17, *(__m128 *)&v3[16 * v10 + 256])), *(__m128 *)&v3[16 * v10 + 256]);
      }
      p_streamTree = &rgp.world->streamTree;
      if ( rgp.world->materialStreamTreeGrid.cellKeys )
        Stream_TraverseMaterialHybridStreamTree(p_streamTree, &rgp.world->materialStreamTreeGrid, v10, v15, (const float4 *)&v3[16 * v10], &v25, *(float *)&_XMM4, v13, v14, transientVisibility);
      else
        Stream_TraverseStreamTree(p_streamTree, v15, (const float4 *)&v3[16 * v10], &v25, *(float *)&_XMM4, v13, v14, transientVisibility);
    }
    ++v8;
  }
  if ( v2 * *((_DWORD *)v3 + 272) == v4 )
    memcpy_0(streamFrontendGlob->smodelsCollectionLods, streamFrontendGlob->smodelsCollectionLodsTemp, sizeof(streamFrontendGlob->smodelsCollectionLods));
  Sys_ProfEndNamedEvent();
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

