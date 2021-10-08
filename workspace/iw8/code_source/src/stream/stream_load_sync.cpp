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
  unsigned int v4; 
  LocalClientNum_t i; 
  char *fmt; 
  __int64 v35; 
  vec3_t cameraPos; 
  vec3_t outPos; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_load_sync.cpp", 309, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW|0x80) )
  {
    if ( !CL_TransientsWorldMP_HasLobbyStreamPositions() )
    {
      Com_Printf(35, "Stream_LoadSync_BeginLevelLoad: Using '%s' BroadPhase\n", mapName);
      __asm
      {
        vmovss  xmm2, cs:__real@3f000000
        vmovss  xmm0, dword ptr cs:?cm@@3UclipMap_t@@A.broadphaseMax; clipMap_t cm
        vaddss  xmm1, xmm0, dword ptr cs:?cm@@3UclipMap_t@@A.broadphaseMin; clipMap_t cm
        vmovss  xmm0, dword ptr cs:?cm@@3UclipMap_t@@A.broadphaseMax+4; clipMap_t cm
        vmulss  xmm4, xmm1, xmm2
        vaddss  xmm1, xmm0, dword ptr cs:?cm@@3UclipMap_t@@A.broadphaseMin+4; clipMap_t cm
        vmovss  xmm0, dword ptr cs:?cm@@3UclipMap_t@@A.broadphaseMax+8; clipMap_t cm
        vmulss  xmm3, xmm1, xmm2
        vaddss  xmm1, xmm0, dword ptr cs:?cm@@3UclipMap_t@@A.broadphaseMin+8; clipMap_t cm
        vmulss  xmm0, xmm1, xmm2
        vmovss  dword ptr [rbp+cameraPos+8], xmm0
        vmovss  dword ptr [rbp+cameraPos], xmm4
        vmovss  dword ptr [rbp+cameraPos+4], xmm3
      }
LABEL_16:
      __asm
      {
        vcvtss2sd xmm3, xmm3, xmm3
        vcvtss2sd xmm2, xmm4, xmm4
        vcvtss2sd xmm0, xmm0, xmm0
        vmovq   r9, xmm3
        vmovq   r8, xmm2
        vmovsd  [rsp+60h+fmt], xmm0
      }
      Com_Printf(35, "Stream_LoadSync_BeginLevelLoad starting (%.1f, %.1f, %.1f)\n", *(double *)&_XMM2, *(double *)&_XMM3, *(double *)&fmt);
      for ( i = LOCAL_CLIENT_0; i < SLODWORD(cl_maxLocalClients); ++i )
        Stream_LoadSync_BeginMP(i, &cameraPos);
      return;
    }
    LobbyStreamPositions = CL_TransientsWorldMP_GetLobbyStreamPositions(&outPos, 2u);
    v4 = LobbyStreamPositions;
    if ( LobbyStreamPositions == 1 )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+outPos]
        vmovss  xmm1, dword ptr [rbp+outPos+4]
        vmovss  dword ptr [rbp+cameraPos], xmm0
        vmovss  xmm0, dword ptr [rbp+outPos+8]
        vmovss  dword ptr [rbp+cameraPos+4], xmm1
      }
    }
    else
    {
      if ( LobbyStreamPositions == 2 )
      {
        __asm
        {
          vmovss  xmm3, cs:__real@3f000000
          vmovss  xmm0, [rbp+var_14]
          vaddss  xmm1, xmm0, dword ptr [rbp+outPos]
          vmovss  xmm0, [rbp+var_10]
          vaddss  xmm2, xmm0, dword ptr [rbp+outPos+4]
          vmovss  xmm0, [rbp+var_C]
          vmulss  xmm1, xmm1, xmm3
          vmovss  dword ptr [rbp+cameraPos], xmm1
          vmulss  xmm1, xmm2, xmm3
          vaddss  xmm2, xmm0, dword ptr [rbp+outPos+8]
          vmovss  dword ptr [rbp+cameraPos+4], xmm1
          vmulss  xmm1, xmm2, xmm3
          vmovss  dword ptr [rbp+cameraPos+8], xmm1
        }
LABEL_14:
        Com_Printf(35, "Stream_LoadSync_BeginLevelLoad: Using '%s' LobbyStream (%d)\n", mapName, v4);
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+cameraPos+8]
          vmovss  xmm3, dword ptr [rbp+cameraPos+4]
          vmovss  xmm4, dword ptr [rbp+cameraPos]
        }
        goto LABEL_16;
      }
      LODWORD(v35) = LobbyStreamPositions;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_load_sync.cpp", 342, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled posCount %i", v35) )
        __debugbreak();
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vmovss  dword ptr [rbp+cameraPos], xmm0
        vmovss  dword ptr [rbp+cameraPos+4], xmm0
      }
    }
    __asm { vmovss  dword ptr [rbp+cameraPos+8], xmm0 }
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
  char *fmt; 
  char *fmta; 
  __int64 zoomFactor; 
  double zoomFactora; 
  double zoomFactorb; 
  float zoomFactorc; 
  __int64 v39; 
  double v40; 
  float v41; 
  double streamRender; 
  ScopedStreamFrontendUpdateLock v43; 

  _R14 = cameraPos;
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_load_sync.cpp", 368, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF_HALF && (unsigned __int8)Com_GameMode_GetActiveGameMode() != LONG && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_load_sync.cpp", 369, ASSERT_TYPE_ASSERT, "(Com_GameMode_GetActiveGameMode() == GameModeType::MP || Com_GameMode_GetActiveGameMode() == GameModeType::CP)", (const char *)&queryFormat, "Com_GameMode_GetActiveGameMode() == GameModeType::MP || Com_GameMode_GetActiveGameMode() == GameModeType::CP") )
    __debugbreak();
  ScopedStreamFrontendUpdateLock::ScopedStreamFrontendUpdateLock(&v43);
  _RDI = streamFrontendGlob;
  if ( streamFrontendGlob->loadSync.startTimeMs )
  {
    _RSI = &streamFrontendGlob->loadSync.streamOrigin;
  }
  else
  {
    Stream_LoadSync_Begin();
    *(_WORD *)&_RDI->loadSync.allowTransientLoads = 257;
    _RSI = &_RDI->loadSync.streamOrigin;
    _RDI->loadSync.streamOrigin.v[0] = _R14->v[0];
    __asm
    {
      vmovss  xmm0, dword ptr [r14+4]
      vmovss  dword ptr [rsi+4], xmm0
      vmovss  xmm1, dword ptr [r14+8]
      vmovss  dword ptr [rsi+8], xmm1
    }
    if ( !_RDI->loadSync.startTimeMs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_load_sync.cpp", 387, ASSERT_TYPE_ASSERT, "(loadSync.startTimeMs != 0)", (const char *)&queryFormat, "loadSync.startTimeMs != 0") )
      __debugbreak();
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+0B9734Ch]
      vcvtss2sd xmm0, xmm0, xmm0
      vmovss  xmm1, dword ptr [rdi+0B97348h]
      vcvtss2sd xmm1, xmm1, xmm1
      vmovss  xmm3, dword ptr [rsi]
      vcvtss2sd xmm3, xmm3, xmm3
      vmovsd  qword ptr [rsp+68h+zoomFactor], xmm0
      vmovsd  [rsp+68h+fmt], xmm1
      vmovq   r9, xmm3
    }
    Com_Printf(35, "Stream_LoadSync_BeginMP: Start: %d (%.2f,%.2f,%.2f)\n", (unsigned int)_RDI->loadSync.startTimeMs, *(double *)&_XMM3, *(double *)&fmt, zoomFactora);
  }
  if ( _RDI->loadSync.allowOriginUpdate )
  {
    __asm { vmovss  xmm2, cs:__real@3a83126f; epsilon }
    if ( !VecNCompareCustomEpsilon(_R14->v, _RSI->v, *(float *)&_XMM2, 3) )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [r14+8]
        vcvtss2sd xmm0, xmm0, xmm0
        vmovss  xmm1, dword ptr [r14+4]
        vcvtss2sd xmm1, xmm1, xmm1
        vmovss  xmm4, dword ptr [r14]
        vcvtss2sd xmm4, xmm4, xmm4
        vmovss  xmm5, dword ptr [rdi+0B9734Ch]
        vcvtss2sd xmm5, xmm5, xmm5
        vmovss  xmm3, dword ptr [rdi+0B97348h]
        vcvtss2sd xmm3, xmm3, xmm3
        vmovss  xmm2, dword ptr [rsi]
        vcvtss2sd xmm2, xmm2, xmm2
        vmovsd  qword ptr [rsp+68h+streamRender], xmm0
        vmovsd  [rsp+68h+var_38], xmm1
        vmovsd  qword ptr [rsp+68h+zoomFactor], xmm4
        vmovsd  [rsp+68h+fmt], xmm5
        vmovq   r9, xmm3
        vmovq   r8, xmm2
      }
      Com_Printf(35, "Stream_LoadSync_BeginMP: Origin changed from %.2f,%.2f,%.2f to %.2f,%.2f,%.2f\n", *(double *)&_XMM2, *(double *)&_XMM3, *(double *)&fmta, zoomFactorb, v40, streamRender);
      _RSI->v[0] = _R14->v[0];
      __asm
      {
        vmovss  xmm0, dword ptr [r14+4]
        vmovss  dword ptr [rsi+4], xmm0
        vmovss  xmm1, dword ptr [r14+8]
        vmovss  dword ptr [rsi+8], xmm1
      }
      _RDI->loadSync.allowOriginUpdate = 0;
      Stream_LoadSync_ResetTimers();
    }
  }
  if ( DB_IsDebugZoneActive() )
  {
    if ( CL_StreamViews_IsManualViewSet(MOVEMENT, localClientNum) )
      goto LABEL_22;
    _RDI->loadSync.fakeManualView = 1;
  }
  else
  {
    CL_StreamViews_ClearAllManualViews(localClientNum);
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  dword ptr [rsp+68h+var_38], xmm0
    vmovss  xmm1, cs:__real@3f800000
    vmovss  [rsp+68h+zoomFactor], xmm1
  }
  CL_StreamViews_SetManualView(MOVEMENT, localClientNum, _RSI, &vec3_origin, &vec3_origin, zoomFactorc, v41, 0);
LABEL_22:
  CG_WorldStreaming_TouchClientStreamManualViews(localClientNum);
  CG_DistanceCacheMP_SetClientStreamManualViews(localClientNum);
  if ( CL_TransientsWorldMP_IsActive() )
  {
    if ( (unsigned int)localClientNum >= LODWORD(cl_maxLocalClients) )
    {
      *(float *)&v39 = cl_maxLocalClients;
      LODWORD(zoomFactor) = localClientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 352, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( (cl_maxLocalClients) )", "localClientNum doesn't index MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", zoomFactor, v39) )
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
  ScopedStreamFrontendUpdateLock::~ScopedStreamFrontendUpdateLock(&v43);
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
  StreamFrontendGlob *v3; 
  float zoomFactor; 
  float v7; 
  ScopedStreamFrontendUpdateLock v8; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_load_sync.cpp", 446, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF_HALF && (unsigned __int8)Com_GameMode_GetActiveGameMode() != LONG && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_load_sync.cpp", 447, ASSERT_TYPE_ASSERT, "(Com_GameMode_GetActiveGameMode() == GameModeType::MP || Com_GameMode_GetActiveGameMode() == GameModeType::CP)", (const char *)&queryFormat, "Com_GameMode_GetActiveGameMode() == GameModeType::MP || Com_GameMode_GetActiveGameMode() == GameModeType::CP") )
    __debugbreak();
  ScopedStreamFrontendUpdateLock::ScopedStreamFrontendUpdateLock(&v8);
  v3 = streamFrontendGlob;
  if ( streamFrontendGlob->loadSync.startTimeMs > 0 )
  {
    if ( DB_IsDebugZoneActive() )
    {
      if ( v3->loadSync.fakeManualView )
      {
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vmovss  [rsp+58h+var_28], xmm0
          vmovss  xmm1, cs:__real@3f800000
          vmovss  [rsp+58h+zoomFactor], xmm1
        }
        CL_StreamViews_SetManualView(MOVEMENT, localClientNum, &s_world.bounds.midPoint, &vec3_origin, &vec3_origin, zoomFactor, v7, 0);
        v3->loadSync.fakeManualView = 0;
      }
    }
    else
    {
      if ( !CL_StreamViews_IsManualViewSet(MOVEMENT, localClientNum) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_load_sync.cpp", 473, ASSERT_TYPE_ASSERT, "(CL_StreamViews_IsManualViewSet( StreamManualViewType::CLIENT_CAMERA, localClientNum ))", (const char *)&queryFormat, "CL_StreamViews_IsManualViewSet( StreamManualViewType::CLIENT_CAMERA, localClientNum )") )
        __debugbreak();
      CL_StreamViews_ClearAllManualViews(localClientNum);
    }
    *(_WORD *)&v3->loadSync.allowTransientLoads = 257;
    *(_QWORD *)v3->loadSync.streamOrigin.v = 0i64;
    v3->loadSync.streamOrigin.v[2] = 0.0;
    Stream_LoadSync_End();
    if ( v3->loadSync.startTimeMs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_load_sync.cpp", 481, ASSERT_TYPE_ASSERT, "(loadSync.startTimeMs == 0)", (const char *)&queryFormat, "loadSync.startTimeMs == 0") )
      __debugbreak();
  }
  ScopedStreamFrontendUpdateLock::~ScopedStreamFrontendUpdateLock(&v8);
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

__int64 __fastcall Stream_LoadSync_IsDone(double enoughQuality, int timeoutSeconds, int maxTimeSeconds, int maxTRPortionSeconds, float *outPercentage)
{
  __int64 v13; 
  unsigned int v15; 
  bool v16; 
  bool v17; 
  StreamFrontendGlob *v29; 
  unsigned int v30; 
  int v31; 
  int v32; 
  __int64 startFrameIndex; 
  unsigned int v39; 
  unsigned int RemainingLoadCountAbovePriority; 
  char v42; 
  bool HasPendingLoadsAbovePriority; 
  bool IsYielding; 
  const char *v83; 
  __int64 result; 
  char *fmt; 
  char *fmta; 
  char *fmtb; 
  char *fmtc; 
  char *fmtd; 
  char *fmte; 
  char *fmtf; 
  char *fmtg; 
  char *fmth; 
  __int64 v118; 
  double v119; 
  double v120; 
  double v121; 
  double v122; 
  double v123; 
  double v124; 
  double v125; 
  double v126; 
  double v127; 
  double v128; 
  double v129; 
  double v130; 
  double v131; 
  double v132; 
  double v133; 
  double v134; 
  double v135; 
  __int64 v136; 
  double v137; 
  double v138; 
  double v139; 
  unsigned int v140; 
  char v142; 
  void *retaddr; 
  ScopedStreamFrontendUpdateLock v144; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmm7, xmm0
  }
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_load_sync.cpp", 502, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm7, xmm0
  }
  v13 = tls_index;
  if ( dword_14EC41658 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1772i64) )
  {
    j__Init_thread_header(&dword_14EC41658);
    if ( dword_14EC41658 == -1 )
    {
      s_maxDistanceEnc.mValue = 16711679;
      j__Init_thread_footer(&dword_14EC41658);
    }
  }
  if ( dword_14EC41660 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v13) + 1772i64) )
  {
    j__Init_thread_header(&dword_14EC41660);
    if ( dword_14EC41660 == -1 )
    {
      if ( s_maxDistanceEnc.mValue == -1 )
      {
        __asm { vmovss  xmm0, cs:__real@7f7fff80 }
      }
      else
      {
        v140 = s_maxDistanceEnc.mValue << 7;
        __asm { vmovss  xmm0, [rsp+0B8h+var_68] }
      }
      __asm { vmovss  cs:s_maxDistanceSq, xmm0 }
      j__Init_thread_footer(&dword_14EC41660);
    }
  }
  v15 = *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v13) + 1772i64);
  v16 = dword_14EC41668 < v15;
  v17 = dword_14EC41668 == v15;
  if ( dword_14EC41668 > (int)v15 )
  {
    j__Init_thread_header(&dword_14EC41668);
    v16 = dword_14EC41668 != -1;
    v17 = dword_14EC41668 == -1;
    if ( dword_14EC41668 == -1 )
    {
      __asm
      {
        vmovss  xmm0, cs:s_maxDistanceSq
        vsqrtss xmm0, xmm0, xmm0
        vmovss  cs:s_maxDistance, xmm0
      }
      j__Init_thread_footer(&dword_14EC41668);
    }
  }
  __asm
  {
    vmovss  xmm0, cs:s_maxDistance
    vcomiss xmm7, xmm0
  }
  if ( !v16 && !v17 )
  {
    __asm
    {
      vcvtss2sd xmm0, xmm0, xmm0
      vcvtss2sd xmm1, xmm7, xmm7
      vmovsd  [rsp+0B8h+var_78], xmm0
      vmovsd  [rsp+0B8h+var_80], xmm1
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_load_sync.cpp", 516, ASSERT_TYPE_ASSERT, "( enoughQuality ) <= ( s_maxDistance )", "%s <= %s\n\t%g, %g", "enoughQuality", "s_maxDistance", v137, v139) )
      __debugbreak();
  }
  ScopedStreamFrontendUpdateLock::ScopedStreamFrontendUpdateLock(&v144);
  _RAX = streamFrontendGlob;
  __asm
  {
    vmovss  xmm6, dword ptr [rax+0B96B28h]
    vmulss  xmm0, xmm6, cs:__real@42c80000
    vdivss  xmm1, xmm0, xmm7
    vminss  xmm2, xmm1, cs:__real@42c80000
  }
  _R14 = outPercentage;
  __asm { vmovss  dword ptr [r14], xmm2 }
  v29 = streamFrontendGlob;
  v30 = StreamUpdateScheduler::FrameIndex(&streamFrontendGlob->globalScheduler);
  v31 = Sys_Milliseconds();
  v32 = v31;
  startFrameIndex = v29->loadSync.startFrameIndex;
  if ( v30 < (int)startFrameIndex + 2 || v29->loadSync.startTimeMs + 500 > v31 )
  {
    __asm
    {
      vmovss  xmm7, cs:__real@3a83126f
      vcvtss2sd xmm6, xmm6, xmm6
    }
    if ( v30 < (unsigned int)startFrameIndex )
    {
      __asm
      {
        vmovss  xmm3, dword ptr [r14]
        vcvtss2sd xmm3, xmm3, xmm3
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm1, xmm0, xmm7
        vcvtss2sd xmm2, xmm1, xmm1
        vmovsd  [rsp+0B8h+var_88], xmm3
        vmovsd  [rsp+0B8h+var_90], xmm6
        vmovsd  [rsp+0B8h+fmt], xmm2
      }
      Com_Printf(35, "Stream load sync: Detected reset (%d, %d) (%.2f secs) (%.2f/%.2f%%)\n", v30, startFrameIndex, *(double *)&fmtg, v125, v134);
      v29->loadSync.startFrameIndex = v30;
      startFrameIndex = v30;
    }
    __asm
    {
      vmovss  xmm3, dword ptr [r14]
      vcvtss2sd xmm3, xmm3, xmm3
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm1, xmm0, xmm7
      vcvtss2sd xmm2, xmm1, xmm1
      vmovsd  [rsp+0B8h+var_88], xmm3
      vmovsd  [rsp+0B8h+var_90], xmm6
      vmovsd  [rsp+0B8h+fmt], xmm2
    }
    Com_sprintf<128>((char (*)[128])v29->loadSync.debugText, "Minimum wait time (%d, %d) (%.2f secs) (%.2f/%.2f%%)", v30, startFrameIndex, *(double *)&fmth, v126, v135);
    if ( v32 - v29->loadSync.printTimeMs > 250 )
    {
      v29->loadSync.printTimeMs = v32;
      Com_Printf(35, "Stream load sync: %s\n", v29->loadSync.debugText);
    }
    v39 = 0;
    goto LABEL_45;
  }
  if ( !Stream_CanStreamMore() )
  {
    __asm
    {
      vcvtss2sd xmm6, xmm6, xmm6
      vmovaps xmm2, xmm6
      vmovq   r8, xmm2
    }
    Com_Printf(35, "Stream load sync: cannot load more. Current quality is %.4f\n", *(double *)&_XMM2);
    __asm
    {
      vmovaps xmm2, xmm6
      vmovq   r8, xmm2
    }
    Com_sprintf<128>((char (*)[128])v29->loadSync.debugText, "Cannot load more. Current quality is %.4f\n", *(double *)&_XMM2);
    v39 = 3;
    goto LABEL_46;
  }
  v39 = 0;
  RemainingLoadCountAbovePriority = 0;
  __asm { vmovss  xmm8, cs:__real@3a83126f }
  v42 = 0;
  if ( v29->loadSync.allowTransientLoads )
  {
    HasPendingLoadsAbovePriority = CL_TransientsMP_HasPendingLoadsAbovePriority(0xBB9u);
    v42 = 0;
    if ( HasPendingLoadsAbovePriority )
    {
      RemainingLoadCountAbovePriority = CL_TransientsMP_GetRemainingLoadCountAbovePriority(0xBB9u);
      if ( maxTRPortionSeconds != 0x7FFFFFFF && v32 - v29->loadSync.startTimeMs >= 1000 * maxTRPortionSeconds )
      {
        __asm
        {
          vcvtss2sd xmm4, xmm6, xmm6
          vmovss  xmm3, dword ptr [r14]
          vcvtss2sd xmm3, xmm3, xmm3
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, edx
          vmulss  xmm1, xmm0, xmm8
          vcvtss2sd xmm2, xmm1, xmm1
          vmovsd  [rsp+0B8h+var_88], xmm3
          vmovsd  [rsp+0B8h+var_90], xmm4
          vmovsd  [rsp+0B8h+fmt], xmm2
        }
        Com_PrintError(35, "Stream load sync: timed out loading MP transients due to hitting max allowed time (%d, %d) (%.2f secs) (%.2f/%.2f%%)\n", v30, v29->loadSync.startFrameIndex, *(double *)&fmt, v119, v127);
        goto LABEL_28;
      }
      __asm
      {
        vcvtss2sd xmm4, xmm6, xmm6
        vmovss  xmm3, dword ptr [r14]
        vcvtss2sd xmm3, xmm3, xmm3
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm1, xmm0, cs:__real@3a83126f
        vcvtss2sd xmm2, xmm1, xmm1
      }
      LODWORD(v136) = RemainingLoadCountAbovePriority;
      __asm
      {
        vmovsd  [rsp+0B8h+var_88], xmm3
        vmovsd  [rsp+0B8h+var_90], xmm4
        vmovsd  [rsp+0B8h+fmt], xmm2
      }
      Com_sprintf<128>((char (*)[128])v29->loadSync.debugText, "Loading high priority transients (%d, %d) (%.2f secs) (%.2f/%.2f%%) %u remaining", v30, v29->loadSync.startFrameIndex, *(double *)&fmtc, v122, v130, v136);
      if ( v32 - v29->loadSync.printTimeMs > 250 )
      {
        v29->loadSync.printTimeMs = v32;
        Com_Printf(35, "Stream load sync: %s\n", v29->loadSync.debugText);
      }
LABEL_45:
      *_R14 = 0.0;
      goto LABEL_46;
    }
  }
LABEL_28:
  v29->loadSync.allowTransientLoads = 0;
  __asm { vcomiss xmm6, xmm7 }
  if ( v42 )
  {
    if ( maxTimeSeconds == 0x7FFFFFFF || v32 - v29->loadSync.startTimeMs < 1000 * maxTimeSeconds )
    {
      if ( Stream_IsYieldingRequested() || (IsYielding = Stream_IsYielding(), v83 = "running", IsYielding) )
        v83 = "yielding";
      __asm
      {
        vcvtss2sd xmm4, xmm6, xmm6
        vmovss  xmm3, dword ptr [r14]
        vcvtss2sd xmm3, xmm3, xmm3
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm1, xmm0, xmm8
        vcvtss2sd xmm2, xmm1, xmm1
        vmovsd  [rsp+0B8h+var_80], xmm3
        vmovsd  [rsp+0B8h+var_88], xmm4
      }
      LODWORD(v118) = RemainingLoadCountAbovePriority;
      __asm { vmovsd  [rsp+0B8h+fmt], xmm2 }
      Com_sprintf<128>((char (*)[128])v29->loadSync.debugText, "Loose Streaming (%d, %d) (%.2f secs) (%u transients not loaded) (%.2f/%.2f%%). Streamer is %s", v30, v29->loadSync.startFrameIndex, *(double *)&fmtf, v118, v133, v138, v83);
      if ( v32 - v29->loadSync.printTimeMs > 250 )
      {
        v29->loadSync.printTimeMs = v32;
        Com_Printf(35, "Stream load sync: %s\n", v29->loadSync.debugText);
      }
    }
    else
    {
      __asm
      {
        vcvtss2sd xmm6, xmm6, xmm6
        vmovss  xmm3, dword ptr [r14]
        vcvtss2sd xmm3, xmm3, xmm3
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, ecx
        vmulss  xmm1, xmm0, xmm8
        vcvtss2sd xmm2, xmm1, xmm1
        vmovsd  [rsp+0B8h+var_88], xmm3
        vmovsd  [rsp+0B8h+var_90], xmm6
        vmovsd  [rsp+0B8h+fmt], xmm2
      }
      Com_PrintError(35, "Stream load sync: Stream Quality timeout loading high priority images due to hitting max allowed time (%d, %d) (%.2f secs) (%.2f/%.2f%%)\n", v30, v29->loadSync.startFrameIndex, *(double *)&fmtd, v123, v131);
      __asm
      {
        vmovss  xmm3, dword ptr [r14]
        vcvtss2sd xmm3, xmm3, xmm3
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, esi
        vmulss  xmm1, xmm0, xmm8
        vcvtss2sd xmm2, xmm1, xmm1
        vmovsd  [rsp+0B8h+var_88], xmm3
        vmovsd  [rsp+0B8h+var_90], xmm6
        vmovsd  [rsp+0B8h+fmt], xmm2
      }
      Com_sprintf<128>((char (*)[128])v29->loadSync.debugText, "Stream Quality timeout (%d, %d) (%.2f secs) (%.2f/%.2f%%)", v30, v29->loadSync.startFrameIndex, *(double *)&fmte, v124, v132);
      v39 = 2;
    }
  }
  else
  {
    *_R14 = 100.0;
    __asm
    {
      vcvtss2sd xmm6, xmm6, xmm6
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm1, xmm0, xmm8
      vcvtss2sd xmm3, xmm1, xmm1
      vmovsd  xmm2, cs:__real@4059000000000000
      vmovsd  [rsp+0B8h+var_88], xmm2
      vmovsd  [rsp+0B8h+var_90], xmm6
      vmovsd  [rsp+0B8h+fmt], xmm3
    }
    Com_Printf(35, "Stream load sync: Loaded high priority images (%d, %d) (%.2f secs) (%.2f/%.2f%%)\n", v30, v29->loadSync.startFrameIndex, *(double *)&fmta, v120, v128);
    __asm
    {
      vmovss  xmm3, dword ptr [r14]
      vcvtss2sd xmm3, xmm3, xmm3
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, esi
      vmulss  xmm1, xmm0, xmm8
      vcvtss2sd xmm2, xmm1, xmm1
      vmovsd  [rsp+0B8h+var_88], xmm3
      vmovsd  [rsp+0B8h+var_90], xmm6
      vmovsd  [rsp+0B8h+fmt], xmm2
    }
    Com_sprintf<128>((char (*)[128])v29->loadSync.debugText, "Loaded high priority images (%d, %d) (%.2f secs) (%.2f/%.2f%%)", v30, v29->loadSync.startFrameIndex, *(double *)&fmtb, v121, v129);
    v39 = 1;
  }
LABEL_46:
  ScopedStreamFrontendUpdateLock::~ScopedStreamFrontendUpdateLock(&v144);
  result = v39;
  _R11 = &v142;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, [rsp+0B8h+var_48]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
  return result;
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
  StreamFrontendGlob *v5; 
  int v6; 
  bool v7; 
  StreamSyncSPWaitType waitType; 
  int v9; 
  int v10; 
  char *fmt; 
  int timeoutUserData; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_load_sync.cpp", 280, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()", -2i64) )
    __debugbreak();
  v5 = streamFrontendGlob;
  v6 = 0;
  v7 = Com_IsRunningTestmonkey() == 0;
  waitType = WAIT_AFTER_LEVEL_LOAD;
  if ( v7 )
    waitType = v5->loadSync.waitType;
  if ( savegame || mapRestart || waitType == WAIT_AFTER_LEVEL_LOAD )
  {
    if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_load_sync.cpp", 241, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
      __debugbreak();
    R_BeginRemoteScreenUpdate();
    v9 = Sys_Milliseconds();
    Com_Printf(16, "%s: Waiting for streamer to finish load sync...\n", "Stream_LoadSync_WaitSP");
    DB_SyncXAssetsKeepAlive();
    LoadBar_StartStreamSync();
    timeoutUserData = 0;
    Sys_ProcessWorkerCmdsWithTimeout(Stream_LoadSync_WaitSP_CB, &timeoutUserData);
    LoadBar_FinishStreamSync();
    v10 = Sys_Milliseconds();
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm1, xmm0, cs:__real@3a83126f
      vcvtss2sd xmm2, xmm1, xmm1
      vmovsd  [rsp+58h+fmt], xmm2
    }
    Com_Printf(16, "%s: Done waiting for stream load sync (wait took %d msec, %.2f seconds).\n", "Stream_LoadSync_WaitSP", (unsigned int)(v10 - v9), *(double *)&fmt);
    R_EndRemoteScreenUpdate();
    v6 = timeoutUserData;
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
  DB_LoadTimes_StreamSyncSPFinished(v6 == 1);
}

/*
==============
Stream_LoadSync_WaitSP_CB
==============
*/
bool Stream_LoadSync_WaitSP_CB(void *userData)
{
  const dvar_t *v5; 
  int integer; 
  const dvar_t *v7; 
  int v9; 
  bool result; 
  bool v17; 
  char v19; 
  char v20; 
  double v23; 
  float outPercentage; 

  _RBX = DCONST_DVARFLT_stream_syncSP_imageQuality;
  __asm { vmovaps [rsp+68h+var_28], xmm6 }
  if ( !DCONST_DVARFLT_stream_syncSP_imageQuality && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_syncSP_imageQuality") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm6, dword ptr [rbx+28h] }
  v5 = DCONST_DVARINT_stream_syncSP_timeoutSeconds;
  if ( !DCONST_DVARINT_stream_syncSP_timeoutSeconds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_syncSP_timeoutSeconds") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  integer = v5->current.integer;
  v7 = DCONST_DVARINT_stream_syncSP_maxTimeSeconds;
  if ( !DCONST_DVARINT_stream_syncSP_maxTimeSeconds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_syncSP_maxTimeSeconds") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  __asm { vmovaps xmm0, xmm6; enoughQuality }
  LOBYTE(v9) = Stream_LoadSync_IsDone(*(float *)&_XMM0, integer, v7->current.integer, 0, &outPercentage);
  *(_DWORD *)userData = v9;
  if ( v9 )
  {
    result = 1;
  }
  else
  {
    __asm
    {
      vmovss  xmm0, [rsp+68h+outPercentage]
      vmulss  xmm1, xmm0, cs:__real@42c80000
      vmovss  xmm0, cs:__real@5f000000
      vcomiss xmm1, xmm0
      vmovaps xmm2, xmm1
      vsubss  xmm2, xmm1, xmm0
      vcomiss xmm2, xmm0
      vcvttss2si rbx, xmm2
    }
    v17 = _RBX == 0;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcomiss xmm1, xmm0
      vcomiss xmm1, cs:__real@4b800000
    }
    if ( _RBX )
    {
      v19 = 0;
      v17 = 1;
    }
    else
    {
      v19 = 1;
    }
    __asm
    {
      vcomiss xmm1, xmm0
      vcomiss xmm1, cs:__real@5f800000
    }
    v20 = v17;
    if ( !v19 || !v20 )
    {
      __asm
      {
        vcvtss2sd xmm0, xmm1, xmm1
        vmovsd  [rsp+68h+var_30], xmm0
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 437, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (IntegralType) 0x%jx == (FloatType) %f", "unsigned __int64 __cdecl float_to_integral_cast<unsigned __int64,float>(float)", _RBX, v23) )
        __debugbreak();
    }
    LoadBar_ReadStreamSyncSP(_RBX);
    if ( Sys_IsMainThread() )
      Sys_LoadingProcessEvents();
    result = 0;
  }
  __asm { vmovaps xmm6, [rsp+68h+var_28] }
  return result;
}

