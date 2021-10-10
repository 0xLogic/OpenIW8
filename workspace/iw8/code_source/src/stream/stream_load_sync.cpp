/*
==============
Stream_LoadSync_AllowMPTransientLoads
==============
*/

bool __fastcall Stream_LoadSync_AllowMPTransientLoads()
{
  return ?Stream_LoadSync_AllowMPTransientLoads@@YA_NXZ();
}

/*
==============
Stream_LoadSync_SetSPWaitType
==============
*/

void __fastcall Stream_LoadSync_SetSPWaitType(StreamSyncSPWaitType waitType)
{
  ?Stream_LoadSync_SetSPWaitType@@YAXW4StreamSyncSPWaitType@@@Z(waitType);
}

/*
==============
Stream_LoadSync_BeginLevelLoad
==============
*/

void __fastcall Stream_LoadSync_BeginLevelLoad(const char *mapName)
{
  ?Stream_LoadSync_BeginLevelLoad@@YAXPEBD@Z(mapName);
}

/*
==============
Stream_LoadSync_IsActiveFrontend
==============
*/

bool __fastcall Stream_LoadSync_IsActiveFrontend()
{
  return ?Stream_LoadSync_IsActiveFrontend@@YA_NXZ();
}

/*
==============
Stream_LoadSync_EndFrontend
==============
*/

void Stream_LoadSync_EndFrontend(void)
{
  ?Stream_LoadSync_EndFrontend@@YAXXZ();
}

/*
==============
Stream_LoadSync_BeginMP
==============
*/

void __fastcall Stream_LoadSync_BeginMP(LocalClientNum_t localClientNum, const vec3_t *cameraPos)
{
  ?Stream_LoadSync_BeginMP@@YAXW4LocalClientNum_t@@AEBTvec3_t@@@Z(localClientNum, cameraPos);
}

/*
==============
Stream_LoadSync_BeginSP
==============
*/

void Stream_LoadSync_BeginSP(void)
{
  ?Stream_LoadSync_BeginSP@@YAXXZ();
}

/*
==============
Stream_LoadSync_IsActive
==============
*/

bool __fastcall Stream_LoadSync_IsActive()
{
  return ?Stream_LoadSync_IsActive@@YA_NXZ();
}

/*
==============
Stream_LoadSync_EndMP
==============
*/

void __fastcall Stream_LoadSync_EndMP(LocalClientNum_t localClientNum)
{
  ?Stream_LoadSync_EndMP@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
Stream_LoadSync_IsDone
==============
*/

StreamLoadSyncResult __fastcall Stream_LoadSync_IsDone(float enoughQuality, int timeoutSeconds, int maxTimeSeconds, int maxTRPortionSeconds, float *outPercentage)
{
  return ?Stream_LoadSync_IsDone@@YA?AW4StreamLoadSyncResult@@MHHHAEAM@Z(enoughQuality, timeoutSeconds, maxTimeSeconds, maxTRPortionSeconds, outPercentage);
}

/*
==============
Stream_LoadSync_GetDebugText
==============
*/

const char *__fastcall Stream_LoadSync_GetDebugText()
{
  return ?Stream_LoadSync_GetDebugText@@YAPEBDXZ();
}

/*
==============
Stream_LoadSync_BeginFrontend
==============
*/

void Stream_LoadSync_BeginFrontend(void)
{
  ?Stream_LoadSync_BeginFrontend@@YAXXZ();
}

/*
==============
Stream_LoadSync_WaitAndEndSP
==============
*/

void __fastcall Stream_LoadSync_WaitAndEndSP(bool savegame, bool mapRestart)
{
  ?Stream_LoadSync_WaitAndEndSP@@YAX_N0@Z(savegame, mapRestart);
}

/*
==============
Stream_LoadSync_EndSP
==============
*/

void Stream_LoadSync_EndSP(void)
{
  ?Stream_LoadSync_EndSP@@YAXXZ();
}

/*
==============
Stream_LoadSync_AllowMPTransientLoads
==============
*/
_BOOL8 Stream_LoadSync_AllowMPTransientLoads()
{
  return streamFrontendGlob->loadSync.allowTransientLoads;
}

/*
==============
Stream_LoadSync_Begin
==============
*/
void Stream_LoadSync_Begin()
{
  StreamFrontendGlob *v0; 

  Stream_CheckFrontendUpdateLocks();
  v0 = streamFrontendGlob;
  if ( streamFrontendGlob->loadSync.startTimeMs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_load_sync.cpp", 63, ASSERT_TYPE_ASSERT, "(loadSync.startTimeMs == 0)", (const char *)&queryFormat, "loadSync.startTimeMs == 0") )
    __debugbreak();
  v0->loadSync.resetCount = 0;
  Stream_LoadSync_ResetTimers();
  v0->loadSync.fakeManualView = 0;
  Core_strcpy(v0->loadSync.debugText, 0x80ui64, "Begin");
  Com_Printf(35, "Stream_LoadSync_Begin()\n");
}

/*
==============
Stream_LoadSync_BeginFrontend
==============
*/
void Stream_LoadSync_BeginFrontend(void)
{
  StreamFrontendGlob *v0; 
  ScopedStreamFrontendUpdateLock v1; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_load_sync.cpp", 111, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()", -2i64) )
    __debugbreak();
  if ( level.initializing && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_load_sync.cpp", 112, ASSERT_TYPE_ASSERT, "(!level.initializing)", (const char *)&queryFormat, "!level.initializing") )
    __debugbreak();
  ScopedStreamFrontendUpdateLock::ScopedStreamFrontendUpdateLock(&v1);
  v0 = streamFrontendGlob;
  if ( streamFrontendGlob->loadSync.isActiveInFrontend && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_load_sync.cpp", 123, ASSERT_TYPE_ASSERT, "(!loadSync.isActiveInFrontend)", (const char *)&queryFormat, "!loadSync.isActiveInFrontend") )
    __debugbreak();
  v0->loadSync.isActiveInFrontend = 1;
  ScopedStreamFrontendUpdateLock::~ScopedStreamFrontendUpdateLock(&v1);
}

/*
==============
Stream_LoadSync_BeginLevelLoad
==============
*/
void Stream_LoadSync_BeginLevelLoad(const char *mapName)
{
  unsigned int LobbyStreamPositions; 
  unsigned int v3; 
  float v4; 
  float v5; 
  float v6; 
  float v7; 
  LocalClientNum_t i; 
  __int64 v9; 
  vec3_t cameraPos; 
  vec3_t outPos; 
  float v12; 
  float v13; 
  float v14; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_load_sync.cpp", 309, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW|0x80) )
  {
    if ( !CL_TransientsWorldMP_HasLobbyStreamPositions() )
    {
      Com_Printf(35, "Stream_LoadSync_BeginLevelLoad: Using '%s' BroadPhase\n", mapName);
      v7 = (float)(cm.broadphaseMax.v[0] + cm.broadphaseMin.v[0]) * 0.5;
      v6 = (float)(cm.broadphaseMax.v[1] + cm.broadphaseMin.v[1]) * 0.5;
      v5 = (float)(cm.broadphaseMax.v[2] + cm.broadphaseMin.v[2]) * 0.5;
      cameraPos.v[2] = v5;
      cameraPos.v[0] = v7;
      cameraPos.v[1] = v6;
LABEL_16:
      Com_Printf(35, "Stream_LoadSync_BeginLevelLoad starting (%.1f, %.1f, %.1f)\n", v7, v6, v5);
      for ( i = LOCAL_CLIENT_0; i < SLODWORD(cl_maxLocalClients); ++i )
        Stream_LoadSync_BeginMP(i, &cameraPos);
      return;
    }
    LobbyStreamPositions = CL_TransientsWorldMP_GetLobbyStreamPositions(&outPos, 2u);
    v3 = LobbyStreamPositions;
    if ( LobbyStreamPositions == 1 )
    {
      cameraPos.v[0] = outPos.v[0];
      v4 = outPos.v[2];
      cameraPos.v[1] = outPos.v[1];
    }
    else
    {
      if ( LobbyStreamPositions == 2 )
      {
        cameraPos.v[0] = (float)(v12 + outPos.v[0]) * 0.5;
        cameraPos.v[1] = (float)(v13 + outPos.v[1]) * 0.5;
        cameraPos.v[2] = (float)(v14 + outPos.v[2]) * 0.5;
LABEL_14:
        Com_Printf(35, "Stream_LoadSync_BeginLevelLoad: Using '%s' LobbyStream (%d)\n", mapName, v3);
        v5 = cameraPos.v[2];
        v6 = cameraPos.v[1];
        v7 = cameraPos.v[0];
        goto LABEL_16;
      }
      LODWORD(v9) = LobbyStreamPositions;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_load_sync.cpp", 342, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled posCount %i", v9) )
        __debugbreak();
      v4 = 0.0;
      cameraPos.v[0] = 0.0;
      cameraPos.v[1] = 0.0;
    }
    cameraPos.v[2] = v4;
    goto LABEL_14;
  }
}

/*
==============
Stream_LoadSync_BeginMP
==============
*/
void Stream_LoadSync_BeginMP(LocalClientNum_t localClientNum, const vec3_t *cameraPos)
{
  StreamFrontendGlob *v4; 
  vec3_t *p_streamOrigin; 
  __int64 zoomFactor; 
  __int64 v7; 
  ScopedStreamFrontendUpdateLock v8; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_load_sync.cpp", 368, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF_HALF && (unsigned __int8)Com_GameMode_GetActiveGameMode() != LONG && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_load_sync.cpp", 369, ASSERT_TYPE_ASSERT, "(Com_GameMode_GetActiveGameMode() == GameModeType::MP || Com_GameMode_GetActiveGameMode() == GameModeType::CP)", (const char *)&queryFormat, "Com_GameMode_GetActiveGameMode() == GameModeType::MP || Com_GameMode_GetActiveGameMode() == GameModeType::CP") )
    __debugbreak();
  ScopedStreamFrontendUpdateLock::ScopedStreamFrontendUpdateLock(&v8);
  v4 = streamFrontendGlob;
  if ( streamFrontendGlob->loadSync.startTimeMs )
  {
    p_streamOrigin = &streamFrontendGlob->loadSync.streamOrigin;
  }
  else
  {
    Stream_LoadSync_Begin();
    *(_WORD *)&v4->loadSync.allowTransientLoads = 257;
    p_streamOrigin = &v4->loadSync.streamOrigin;
    v4->loadSync.streamOrigin.v[0] = cameraPos->v[0];
    v4->loadSync.streamOrigin.v[1] = cameraPos->v[1];
    v4->loadSync.streamOrigin.v[2] = cameraPos->v[2];
    if ( !v4->loadSync.startTimeMs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_load_sync.cpp", 387, ASSERT_TYPE_ASSERT, "(loadSync.startTimeMs != 0)", (const char *)&queryFormat, "loadSync.startTimeMs != 0") )
      __debugbreak();
    Com_Printf(35, "Stream_LoadSync_BeginMP: Start: %d (%.2f,%.2f,%.2f)\n", (unsigned int)v4->loadSync.startTimeMs, p_streamOrigin->v[0], v4->loadSync.streamOrigin.v[1], v4->loadSync.streamOrigin.v[2]);
  }
  if ( v4->loadSync.allowOriginUpdate && !VecNCompareCustomEpsilon(cameraPos->v, p_streamOrigin->v, 0.001, 3) )
  {
    Com_Printf(35, "Stream_LoadSync_BeginMP: Origin changed from %.2f,%.2f,%.2f to %.2f,%.2f,%.2f\n", p_streamOrigin->v[0], v4->loadSync.streamOrigin.v[1], v4->loadSync.streamOrigin.v[2], cameraPos->v[0], cameraPos->v[1], cameraPos->v[2]);
    p_streamOrigin->v[0] = cameraPos->v[0];
    p_streamOrigin->v[1] = cameraPos->v[1];
    p_streamOrigin->v[2] = cameraPos->v[2];
    v4->loadSync.allowOriginUpdate = 0;
    Stream_LoadSync_ResetTimers();
  }
  if ( DB_IsDebugZoneActive() )
  {
    if ( CL_StreamViews_IsManualViewSet(MOVEMENT, localClientNum) )
      goto LABEL_22;
    v4->loadSync.fakeManualView = 1;
  }
  else
  {
    CL_StreamViews_ClearAllManualViews(localClientNum);
  }
  CL_StreamViews_SetManualView(MOVEMENT, localClientNum, p_streamOrigin, &vec3_origin, &vec3_origin, 1.0, 0.0, 0);
LABEL_22:
  CG_WorldStreaming_TouchClientStreamManualViews(localClientNum);
  CG_DistanceCacheMP_SetClientStreamManualViews(localClientNum);
  if ( CL_TransientsWorldMP_IsActive() )
  {
    if ( (unsigned int)localClientNum >= LODWORD(cl_maxLocalClients) )
    {
      *(float *)&v7 = cl_maxLocalClients;
      LODWORD(zoomFactor) = localClientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 352, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( (cl_maxLocalClients) )", "localClientNum doesn't index MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", zoomFactor, v7) )
        __debugbreak();
    }
    if ( !LODWORD(cl_maxLocalClients) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 336, ASSERT_TYPE_ASSERT, "(cl_maxLocalClients)", "%s\n\tMust be called after client allocation", "cl_maxLocalClients") )
      __debugbreak();
    if ( cls.m_localClientsActive.activeCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 353, ASSERT_TYPE_ASSERT, "(GetGameLocalClientActiveCount() > 0)", "%s\n\tClient active data has not been setup", "GetGameLocalClientActiveCount() > 0") )
      __debugbreak();
    if ( cls.m_localClientsActive.firstActiveIndex == LOCAL_CLIENT_INVALID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 354, ASSERT_TYPE_ASSERT, "(m_localClientsActive.firstActiveIndex != LOCAL_CLIENT_INVALID)", "%s\n\tClient active data has not been setup", "m_localClientsActive.firstActiveIndex != LOCAL_CLIENT_INVALID") )
      __debugbreak();
    if ( localClientNum == cls.m_localClientsActive.firstActiveIndex )
    {
      if ( !LODWORD(cl_maxLocalClients) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 336, ASSERT_TYPE_ASSERT, "(cl_maxLocalClients)", "%s\n\tMust be called after client allocation", "cl_maxLocalClients") )
        __debugbreak();
      CL_TransientsWorldMP_ResetGridStreaming(cls.m_localClientsActive.activeCount > 1);
      CL_TransientsCollisionMP_ResetGridStreaming();
    }
    CL_TransientsWorldMP_SetGridStreamingClientStreamViews(localClientNum);
    CL_TransientsCollisionMP_SetGridStreamingClientStreamViews(localClientNum);
    CL_TransientsCollisionMP_SetPriorityMode(CL_TRANSIENTS_COLLISION_MP_PRIORITYMODE_LOW);
  }
  ScopedStreamFrontendUpdateLock::~ScopedStreamFrontendUpdateLock(&v8);
}

/*
==============
Stream_LoadSync_BeginSP
==============
*/
void Stream_LoadSync_BeginSP(void)
{
  ScopedStreamFrontendUpdateLock v0; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_load_sync.cpp", 160, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()", -2i64) )
    __debugbreak();
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_load_sync.cpp", 161, ASSERT_TYPE_ASSERT, "(Com_GameMode_GetActiveGameMode() == GameModeType::SP)", (const char *)&queryFormat, "Com_GameMode_GetActiveGameMode() == GameModeType::SP") )
    __debugbreak();
  if ( level.initializing && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_load_sync.cpp", 162, ASSERT_TYPE_ASSERT, "(!level.initializing)", (const char *)&queryFormat, "!level.initializing") )
    __debugbreak();
  ScopedStreamFrontendUpdateLock::ScopedStreamFrontendUpdateLock(&v0);
  streamFrontendGlob->loadSync.serverEntitiesCheck = 0i64;
  Stream_LoadSync_Begin();
  ScopedStreamFrontendUpdateLock::~ScopedStreamFrontendUpdateLock(&v0);
}

/*
==============
Stream_LoadSync_End
==============
*/
void Stream_LoadSync_End()
{
  StreamFrontendGlob *v0; 

  Stream_CheckFrontendUpdateLocks();
  v0 = streamFrontendGlob;
  if ( streamFrontendGlob->loadSync.startTimeMs <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_load_sync.cpp", 87, ASSERT_TYPE_ASSERT, "(loadSync.startTimeMs > 0)", (const char *)&queryFormat, "loadSync.startTimeMs > 0") )
    __debugbreak();
  *(_QWORD *)&v0->loadSync.startFrameIndex = 0i64;
  v0->loadSync.printTimeMs = 0;
  v0->loadSync.fakeManualView = 0;
  Com_Printf(35, "Stream_LoadSync_End()\n");
}

/*
==============
Stream_LoadSync_EndFrontend
==============
*/
void Stream_LoadSync_EndFrontend(void)
{
  StreamFrontendGlob *v0; 
  ScopedStreamFrontendUpdateLock v1; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_load_sync.cpp", 134, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()", -2i64) )
    __debugbreak();
  if ( level.initializing && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_load_sync.cpp", 135, ASSERT_TYPE_ASSERT, "(!level.initializing)", (const char *)&queryFormat, "!level.initializing") )
    __debugbreak();
  ScopedStreamFrontendUpdateLock::ScopedStreamFrontendUpdateLock(&v1);
  v0 = streamFrontendGlob;
  if ( !streamFrontendGlob->loadSync.isActiveInFrontend && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_load_sync.cpp", 139, ASSERT_TYPE_ASSERT, "(loadSync.isActiveInFrontend)", (const char *)&queryFormat, "loadSync.isActiveInFrontend") )
    __debugbreak();
  v0->loadSync.isActiveInFrontend = 0;
  ScopedStreamFrontendUpdateLock::~ScopedStreamFrontendUpdateLock(&v1);
}

/*
==============
Stream_LoadSync_EndMP
==============
*/
void Stream_LoadSync_EndMP(LocalClientNum_t localClientNum)
{
  StreamFrontendGlob *v2; 
  ScopedStreamFrontendUpdateLock v3; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_load_sync.cpp", 446, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF_HALF && (unsigned __int8)Com_GameMode_GetActiveGameMode() != LONG && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_load_sync.cpp", 447, ASSERT_TYPE_ASSERT, "(Com_GameMode_GetActiveGameMode() == GameModeType::MP || Com_GameMode_GetActiveGameMode() == GameModeType::CP)", (const char *)&queryFormat, "Com_GameMode_GetActiveGameMode() == GameModeType::MP || Com_GameMode_GetActiveGameMode() == GameModeType::CP") )
    __debugbreak();
  ScopedStreamFrontendUpdateLock::ScopedStreamFrontendUpdateLock(&v3);
  v2 = streamFrontendGlob;
  if ( streamFrontendGlob->loadSync.startTimeMs > 0 )
  {
    if ( DB_IsDebugZoneActive() )
    {
      if ( v2->loadSync.fakeManualView )
      {
        CL_StreamViews_SetManualView(MOVEMENT, localClientNum, &s_world.bounds.midPoint, &vec3_origin, &vec3_origin, 1.0, 0.0, 0);
        v2->loadSync.fakeManualView = 0;
      }
    }
    else
    {
      if ( !CL_StreamViews_IsManualViewSet(MOVEMENT, localClientNum) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_load_sync.cpp", 473, ASSERT_TYPE_ASSERT, "(CL_StreamViews_IsManualViewSet( StreamManualViewType::CLIENT_CAMERA, localClientNum ))", (const char *)&queryFormat, "CL_StreamViews_IsManualViewSet( StreamManualViewType::CLIENT_CAMERA, localClientNum )") )
        __debugbreak();
      CL_StreamViews_ClearAllManualViews(localClientNum);
    }
    *(_WORD *)&v2->loadSync.allowTransientLoads = 257;
    *(_QWORD *)v2->loadSync.streamOrigin.v = 0i64;
    v2->loadSync.streamOrigin.v[2] = 0.0;
    Stream_LoadSync_End();
    if ( v2->loadSync.startTimeMs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_load_sync.cpp", 481, ASSERT_TYPE_ASSERT, "(loadSync.startTimeMs == 0)", (const char *)&queryFormat, "loadSync.startTimeMs == 0") )
      __debugbreak();
  }
  ScopedStreamFrontendUpdateLock::~ScopedStreamFrontendUpdateLock(&v3);
}

/*
==============
Stream_LoadSync_EndSP
==============
*/
void Stream_LoadSync_EndSP(void)
{
  ScopedStreamFrontendUpdateLock v0; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_load_sync.cpp", 188, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()", -2i64) )
    __debugbreak();
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_load_sync.cpp", 189, ASSERT_TYPE_ASSERT, "(Com_GameMode_GetActiveGameMode() == GameModeType::SP)", (const char *)&queryFormat, "Com_GameMode_GetActiveGameMode() == GameModeType::SP") )
    __debugbreak();
  if ( level.initializing && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_load_sync.cpp", 190, ASSERT_TYPE_ASSERT, "(!level.initializing)", (const char *)&queryFormat, "!level.initializing") )
    __debugbreak();
  ScopedStreamFrontendUpdateLock::ScopedStreamFrontendUpdateLock(&v0);
  Stream_LoadSync_End();
  Sys_WaitWorkerCmdsOfType(WRKCMD_STREAM_UPDATE_DYNAMIC_MODELS);
  ScopedStreamFrontendUpdateLock::~ScopedStreamFrontendUpdateLock(&v0);
}

/*
==============
Stream_LoadSync_GetDebugText
==============
*/
char *Stream_LoadSync_GetDebugText()
{
  return streamFrontendGlob->loadSync.debugText;
}

/*
==============
Stream_LoadSync_IsActive
==============
*/
bool Stream_LoadSync_IsActive()
{
  return streamFrontendGlob && (streamFrontendGlob->loadSync.startTimeMs > 0 || streamFrontendGlob->loadSync.isActiveInFrontend);
}

/*
==============
Stream_LoadSync_IsActiveFrontend
==============
*/
_BOOL8 Stream_LoadSync_IsActiveFrontend()
{
  bool isActiveInFrontend; 
  ScopedStreamFrontendUpdateLock v2; 

  ScopedStreamFrontendUpdateLock::ScopedStreamFrontendUpdateLock(&v2);
  isActiveInFrontend = streamFrontendGlob->loadSync.isActiveInFrontend;
  ScopedStreamFrontendUpdateLock::~ScopedStreamFrontendUpdateLock(&v2);
  return isActiveInFrontend;
}

/*
==============
Stream_LoadSync_IsDone
==============
*/
__int64 Stream_LoadSync_IsDone(float enoughQuality, int timeoutSeconds, int maxTimeSeconds, int maxTRPortionSeconds, float *outPercentage)
{
  __int64 v8; 
  float v9; 
  __int128 imageStreamingQuality_low; 
  __int128 v11; 
  float *v14; 
  StreamFrontendGlob *v15; 
  unsigned int v16; 
  int v17; 
  int v18; 
  __int64 startFrameIndex; 
  unsigned int v20; 
  unsigned int RemainingLoadCountAbovePriority; 
  int v22; 
  double v23; 
  int v24; 
  double v25; 
  bool IsYielding; 
  const char *v27; 
  double v28; 
  __int64 v30; 
  __int64 v31; 
  ScopedStreamFrontendUpdateLock v32; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_load_sync.cpp", 502, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( enoughQuality < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_load_sync.cpp", 503, ASSERT_TYPE_ASSERT, "(enoughQuality >= 0.0f)", (const char *)&queryFormat, "enoughQuality >= 0.0f") )
    __debugbreak();
  v8 = tls_index;
  if ( dword_14EC41658 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1772i64) )
  {
    j__Init_thread_header(&dword_14EC41658);
    if ( dword_14EC41658 == -1 )
    {
      s_maxDistanceEnc.mValue = 16711679;
      j__Init_thread_footer(&dword_14EC41658);
    }
  }
  if ( dword_14EC41660 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v8) + 1772i64) )
  {
    j__Init_thread_header(&dword_14EC41660);
    if ( dword_14EC41660 == -1 )
    {
      if ( s_maxDistanceEnc.mValue == -1 )
        v9 = FLOAT_3_4027977e38;
      else
        LODWORD(v9) = (StreamDistance)(s_maxDistanceEnc.mValue << 7);
      s_maxDistanceSq = v9;
      j__Init_thread_footer(&dword_14EC41660);
    }
  }
  if ( dword_14EC41668 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v8) + 1772i64) )
  {
    j__Init_thread_header(&dword_14EC41668);
    if ( dword_14EC41668 == -1 )
    {
      s_maxDistance = fsqrt(s_maxDistanceSq);
      j__Init_thread_footer(&dword_14EC41668);
    }
  }
  if ( enoughQuality > s_maxDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_load_sync.cpp", 516, ASSERT_TYPE_ASSERT, "( enoughQuality ) <= ( s_maxDistance )", "%s <= %s\n\t%g, %g", "enoughQuality", "s_maxDistance", enoughQuality, s_maxDistance) )
    __debugbreak();
  ScopedStreamFrontendUpdateLock::ScopedStreamFrontendUpdateLock(&v32);
  imageStreamingQuality_low = LODWORD(streamFrontendGlob->imageStreamingQuality);
  v11 = imageStreamingQuality_low;
  *(float *)&v11 = (float)(*(float *)&imageStreamingQuality_low * 100.0) / enoughQuality;
  _XMM1 = v11;
  __asm { vminss  xmm2, xmm1, cs:__real@42c80000 }
  v14 = outPercentage;
  *outPercentage = *(float *)&_XMM2;
  v15 = streamFrontendGlob;
  v16 = StreamUpdateScheduler::FrameIndex(&streamFrontendGlob->globalScheduler);
  v17 = Sys_Milliseconds();
  v18 = v17;
  startFrameIndex = v15->loadSync.startFrameIndex;
  if ( v16 < (int)startFrameIndex + 2 || v15->loadSync.startTimeMs + 500 > v17 )
  {
    v28 = *(float *)&imageStreamingQuality_low;
    if ( v16 < (unsigned int)startFrameIndex )
    {
      Com_Printf(35, "Stream load sync: Detected reset (%d, %d) (%.2f secs) (%.2f/%.2f%%)\n", v16, startFrameIndex, (float)((float)(v17 - v15->loadSync.startTimeMs) * 0.001), v28, *v14);
      v15->loadSync.startFrameIndex = v16;
      startFrameIndex = v16;
    }
    Com_sprintf<128>((char (*)[128])v15->loadSync.debugText, "Minimum wait time (%d, %d) (%.2f secs) (%.2f/%.2f%%)", v16, startFrameIndex, (float)((float)(v18 - v15->loadSync.startTimeMs) * 0.001), v28, *v14);
    if ( v18 - v15->loadSync.printTimeMs > 250 )
    {
      v15->loadSync.printTimeMs = v18;
      Com_Printf(35, "Stream load sync: %s\n", v15->loadSync.debugText);
    }
    v20 = 0;
    goto LABEL_48;
  }
  if ( !Stream_CanStreamMore() )
  {
    Com_Printf(35, "Stream load sync: cannot load more. Current quality is %.4f\n", *(float *)&imageStreamingQuality_low);
    Com_sprintf<128>((char (*)[128])v15->loadSync.debugText, "Cannot load more. Current quality is %.4f\n", *(float *)&imageStreamingQuality_low);
    v20 = 3;
    goto LABEL_49;
  }
  v20 = 0;
  RemainingLoadCountAbovePriority = 0;
  if ( v15->loadSync.allowTransientLoads && CL_TransientsMP_HasPendingLoadsAbovePriority(0xBB9u) )
  {
    RemainingLoadCountAbovePriority = CL_TransientsMP_GetRemainingLoadCountAbovePriority(0xBB9u);
    if ( maxTRPortionSeconds != 0x7FFFFFFF )
    {
      v22 = v18 - v15->loadSync.startTimeMs;
      if ( v22 >= 1000 * maxTRPortionSeconds )
      {
        Com_PrintError(35, "Stream load sync: timed out loading MP transients due to hitting max allowed time (%d, %d) (%.2f secs) (%.2f/%.2f%%)\n", v16, v15->loadSync.startFrameIndex, (float)((float)v22 * 0.001), *(float *)&imageStreamingQuality_low, *v14);
        goto LABEL_31;
      }
    }
    LODWORD(v31) = RemainingLoadCountAbovePriority;
    Com_sprintf<128>((char (*)[128])v15->loadSync.debugText, "Loading high priority transients (%d, %d) (%.2f secs) (%.2f/%.2f%%) %u remaining", v16, v15->loadSync.startFrameIndex, (float)((float)(v18 - v15->loadSync.startTimeMs) * 0.001), *(float *)&imageStreamingQuality_low, *v14, v31);
    if ( v18 - v15->loadSync.printTimeMs > 250 )
    {
      v15->loadSync.printTimeMs = v18;
      Com_Printf(35, "Stream load sync: %s\n", v15->loadSync.debugText);
    }
LABEL_48:
    *v14 = 0.0;
    goto LABEL_49;
  }
LABEL_31:
  v15->loadSync.allowTransientLoads = 0;
  if ( *(float *)&imageStreamingQuality_low < enoughQuality )
  {
    if ( maxTimeSeconds == 0x7FFFFFFF || (v24 = v18 - v15->loadSync.startTimeMs, v24 < 1000 * maxTimeSeconds) )
    {
      if ( Stream_IsYieldingRequested() || (IsYielding = Stream_IsYielding(), v27 = "running", IsYielding) )
        v27 = "yielding";
      LODWORD(v30) = RemainingLoadCountAbovePriority;
      Com_sprintf<128>((char (*)[128])v15->loadSync.debugText, "Loose Streaming (%d, %d) (%.2f secs) (%u transients not loaded) (%.2f/%.2f%%). Streamer is %s", v16, v15->loadSync.startFrameIndex, (float)((float)(v18 - v15->loadSync.startTimeMs) * 0.001), v30, *(float *)&imageStreamingQuality_low, *v14, v27);
      if ( v18 - v15->loadSync.printTimeMs > 250 )
      {
        v15->loadSync.printTimeMs = v18;
        Com_Printf(35, "Stream load sync: %s\n", v15->loadSync.debugText);
      }
    }
    else
    {
      v25 = *(float *)&imageStreamingQuality_low;
      Com_PrintError(35, "Stream load sync: Stream Quality timeout loading high priority images due to hitting max allowed time (%d, %d) (%.2f secs) (%.2f/%.2f%%)\n", v16, v15->loadSync.startFrameIndex, (float)((float)v24 * 0.001), v25, *v14);
      Com_sprintf<128>((char (*)[128])v15->loadSync.debugText, "Stream Quality timeout (%d, %d) (%.2f secs) (%.2f/%.2f%%)", v16, v15->loadSync.startFrameIndex, (float)((float)(v18 - v15->loadSync.startTimeMs) * 0.001), v25, *v14);
      v20 = 2;
    }
  }
  else
  {
    *v14 = 100.0;
    v23 = *(float *)&imageStreamingQuality_low;
    Com_Printf(35, "Stream load sync: Loaded high priority images (%d, %d) (%.2f secs) (%.2f/%.2f%%)\n", v16, v15->loadSync.startFrameIndex, (float)((float)(v18 - v15->loadSync.startTimeMs) * 0.001), v23, DOUBLE_100_0);
    Com_sprintf<128>((char (*)[128])v15->loadSync.debugText, "Loaded high priority images (%d, %d) (%.2f secs) (%.2f/%.2f%%)", v16, v15->loadSync.startFrameIndex, (float)((float)(v18 - v15->loadSync.startTimeMs) * 0.001), v23, *v14);
    v20 = 1;
  }
LABEL_49:
  ScopedStreamFrontendUpdateLock::~ScopedStreamFrontendUpdateLock(&v32);
  return v20;
}

/*
==============
Stream_LoadSync_ResetTimers
==============
*/
int Stream_LoadSync_ResetTimers()
{
  StreamFrontendGlob *v0; 
  int result; 
  int resetCount; 
  int v3; 

  Stream_CheckFrontendUpdateLocks();
  v0 = streamFrontendGlob;
  ++streamFrontendGlob->loadSync.resetCount;
  if ( v0->loadSync.resetCount > 2 )
  {
    v3 = 2;
    resetCount = v0->loadSync.resetCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_load_sync.cpp", 44, ASSERT_TYPE_ASSERT, "( loadSync.resetCount ) <= ( 2 )", "%s <= %s\n\t%i, %i", "loadSync.resetCount", "2", resetCount, v3) )
      __debugbreak();
  }
  v0->loadSync.startFrameIndex = StreamUpdateScheduler::FrameIndex(&streamFrontendGlob->globalScheduler);
  result = Sys_Milliseconds();
  v0->loadSync.startTimeMs = result;
  v0->loadSync.printTimeMs = 0;
  return result;
}

/*
==============
Stream_LoadSync_SetSPWaitType
==============
*/
void Stream_LoadSync_SetSPWaitType(StreamSyncSPWaitType waitType)
{
  if ( !Sys_IsMainThread() && !Sys_IsDatabaseThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_load_sync.cpp", 202, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread() || Sys_IsDatabaseThread())", (const char *)&queryFormat, "Sys_IsMainThread() || Sys_IsDatabaseThread()") )
    __debugbreak();
  streamFrontendGlob->loadSync.waitType = waitType;
}

/*
==============
Stream_LoadSync_WaitAndEndSP
==============
*/
void Stream_LoadSync_WaitAndEndSP(bool savegame, bool mapRestart)
{
  StreamFrontendGlob *v4; 
  int v5; 
  bool v6; 
  StreamSyncSPWaitType waitType; 
  int v8; 
  int v9; 
  int timeoutUserData; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_load_sync.cpp", 280, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()", -2i64) )
    __debugbreak();
  v4 = streamFrontendGlob;
  v5 = 0;
  v6 = Com_IsRunningTestmonkey() == 0;
  waitType = WAIT_AFTER_LEVEL_LOAD;
  if ( v6 )
    waitType = v4->loadSync.waitType;
  if ( savegame || mapRestart || waitType == WAIT_AFTER_LEVEL_LOAD )
  {
    if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_load_sync.cpp", 241, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
      __debugbreak();
    R_BeginRemoteScreenUpdate();
    v8 = Sys_Milliseconds();
    Com_Printf(16, "%s: Waiting for streamer to finish load sync...\n", "Stream_LoadSync_WaitSP");
    DB_SyncXAssetsKeepAlive();
    LoadBar_StartStreamSync();
    timeoutUserData = 0;
    Sys_ProcessWorkerCmdsWithTimeout(Stream_LoadSync_WaitSP_CB, &timeoutUserData);
    LoadBar_FinishStreamSync();
    v9 = Sys_Milliseconds() - v8;
    Com_Printf(16, "%s: Done waiting for stream load sync (wait took %d msec, %.2f seconds).\n", "Stream_LoadSync_WaitSP", (unsigned int)v9, (float)((float)v9 * 0.001));
    R_EndRemoteScreenUpdate();
    v5 = timeoutUserData;
  }
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_load_sync.cpp", 188, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_load_sync.cpp", 189, ASSERT_TYPE_ASSERT, "(Com_GameMode_GetActiveGameMode() == GameModeType::SP)", (const char *)&queryFormat, "Com_GameMode_GetActiveGameMode() == GameModeType::SP") )
    __debugbreak();
  if ( level.initializing && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_load_sync.cpp", 190, ASSERT_TYPE_ASSERT, "(!level.initializing)", (const char *)&queryFormat, "!level.initializing") )
    __debugbreak();
  ScopedStreamFrontendUpdateLock::ScopedStreamFrontendUpdateLock((ScopedStreamFrontendUpdateLock *)&timeoutUserData);
  Stream_LoadSync_End();
  Sys_WaitWorkerCmdsOfType(WRKCMD_STREAM_UPDATE_DYNAMIC_MODELS);
  ScopedStreamFrontendUpdateLock::~ScopedStreamFrontendUpdateLock((ScopedStreamFrontendUpdateLock *)&timeoutUserData);
  DB_LoadTimes_StreamSyncSPFinished(v5 == 1);
}

/*
==============
Stream_LoadSync_WaitSP_CB
==============
*/
char Stream_LoadSync_WaitSP_CB(void *userData)
{
  const dvar_t *v1; 
  float value; 
  const dvar_t *v4; 
  int integer; 
  const dvar_t *v6; 
  int v7; 
  float v9; 
  unsigned __int64 v10; 
  float v11; 
  unsigned __int64 v12; 
  bool v13; 
  bool v14; 
  float outPercentage; 

  v1 = DCONST_DVARFLT_stream_syncSP_imageQuality;
  if ( !DCONST_DVARFLT_stream_syncSP_imageQuality && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_syncSP_imageQuality") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  value = v1->current.value;
  v4 = DCONST_DVARINT_stream_syncSP_timeoutSeconds;
  if ( !DCONST_DVARINT_stream_syncSP_timeoutSeconds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_syncSP_timeoutSeconds") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  integer = v4->current.integer;
  v6 = DCONST_DVARINT_stream_syncSP_maxTimeSeconds;
  if ( !DCONST_DVARINT_stream_syncSP_maxTimeSeconds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_syncSP_maxTimeSeconds") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  LOBYTE(v7) = Stream_LoadSync_IsDone(value, integer, v6->current.integer, 0, &outPercentage);
  *(_DWORD *)userData = v7;
  if ( v7 )
    return 1;
  v9 = outPercentage * 100.0;
  v10 = 0i64;
  v11 = outPercentage * 100.0;
  if ( (float)(outPercentage * 100.0) >= 9.223372e18 )
  {
    v11 = v9 - 9.223372e18;
    if ( (float)(v9 - 9.223372e18) < 9.223372e18 )
      v10 = 0x8000000000000000ui64;
  }
  v12 = v10 + (unsigned int)(int)v11;
  v13 = v9 >= 0.0 && v9 <= 16777216.0;
  v14 = v9 >= 0.0 && v9 <= 1.8446744e19;
  if ( (!v13 || !v14) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 437, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (IntegralType) 0x%jx == (FloatType) %f", "unsigned __int64 __cdecl float_to_integral_cast<unsigned __int64,float>(float)", v12, v9) )
    __debugbreak();
  LoadBar_ReadStreamSyncSP(v12);
  if ( Sys_IsMainThread() )
    Sys_LoadingProcessEvents();
  return 0;
}

