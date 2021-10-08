/*
==============
CL_TransientsSP_IsPauseRequested
==============
*/

bool __fastcall CL_TransientsSP_IsPauseRequested()
{
  return ?CL_TransientsSP_IsPauseRequested@@YA_NXZ();
}

/*
==============
CL_TransientsSP_CancelAllLoads
==============
*/

void CL_TransientsSP_CancelAllLoads(void)
{
  ?CL_TransientsSP_CancelAllLoads@@YAXXZ();
}

/*
==============
CL_TransientsSP_GameSystemsUnload
==============
*/

void __fastcall CL_TransientsSP_GameSystemsUnload(const bool forceUnloadAll)
{
  ?CL_TransientsSP_GameSystemsUnload@@YAX_N@Z(forceUnloadAll);
}

/*
==============
CL_TransientsSP_TransientsNeedDBWork
==============
*/

bool __fastcall CL_TransientsSP_TransientsNeedDBWork()
{
  return ?CL_TransientsSP_TransientsNeedDBWork@@YA_NXZ();
}

/*
==============
CL_TransientsSP_DemoGetSyncResult
==============
*/

TransientDemoSyncType __fastcall CL_TransientsSP_DemoGetSyncResult()
{
  return ?CL_TransientsSP_DemoGetSyncResult@@YA?AW4TransientDemoSyncType@@XZ();
}

/*
==============
CL_TransientsSP_GetZoneModeByIndex
==============
*/

TransientSPZoneState __fastcall CL_TransientsSP_GetZoneModeByIndex(const int index)
{
  return ?CL_TransientsSP_GetZoneModeByIndex@@YA?AW4TransientSPZoneState@@H@Z(index);
}

/*
==============
CL_TransientsSP_OnGameModeUnload
==============
*/

void CL_TransientsSP_OnGameModeUnload(void)
{
  ?CL_TransientsSP_OnGameModeUnload@@YAXXZ();
}

/*
==============
CL_TransientsSP_GameSystemsShutdown
==============
*/

void CL_TransientsSP_GameSystemsShutdown(void)
{
  ?CL_TransientsSP_GameSystemsShutdown@@YAXXZ();
}

/*
==============
CL_TransientsSP_DemoPlaybackSyncEnd
==============
*/

void CL_TransientsSP_DemoPlaybackSyncEnd(void)
{
  ?CL_TransientsSP_DemoPlaybackSyncEnd@@YAXXZ();
}

/*
==============
CL_TransientsSP_QueueLoad
==============
*/

void __fastcall CL_TransientsSP_QueueLoad(int transientIndex)
{
  ?CL_TransientsSP_QueueLoad@@YAXH@Z(transientIndex);
}

/*
==============
CL_TransientsSP_QueueUnloadLevel
==============
*/

void CL_TransientsSP_QueueUnloadLevel(void)
{
  ?CL_TransientsSP_QueueUnloadLevel@@YAXXZ();
}

/*
==============
CL_TransientsSP_Process
==============
*/

void CL_TransientsSP_Process(void)
{
  ?CL_TransientsSP_Process@@YAXXZ();
}

/*
==============
CL_TransientsSP_DemoPlaybackSyncBegin
==============
*/

void CL_TransientsSP_DemoPlaybackSyncBegin(void)
{
  ?CL_TransientsSP_DemoPlaybackSyncBegin@@YAXXZ();
}

/*
==============
CL_TransientsSP_PushImmediateProcessTransients
==============
*/

void CL_TransientsSP_PushImmediateProcessTransients(void)
{
  ?CL_TransientsSP_PushImmediateProcessTransients@@YAXXZ();
}

/*
==============
CL_TransientsSP_OnLevelUnload
==============
*/

void CL_TransientsSP_OnLevelUnload(void)
{
  ?CL_TransientsSP_OnLevelUnload@@YAXXZ();
}

/*
==============
CL_TransientsSP_PopIgnoreLevelTransientUnloads
==============
*/

void CL_TransientsSP_PopIgnoreLevelTransientUnloads(void)
{
  ?CL_TransientsSP_PopIgnoreLevelTransientUnloads@@YAXXZ();
}

/*
==============
CL_TransientsSP_QueueUnload
==============
*/

void __fastcall CL_TransientsSP_QueueUnload(int transientIndex)
{
  ?CL_TransientsSP_QueueUnload@@YAXH@Z(transientIndex);
}

/*
==============
CL_TransientsSP_QueueUnloadAll
==============
*/

void CL_TransientsSP_QueueUnloadAll(void)
{
  ?CL_TransientsSP_QueueUnloadAll@@YAXXZ();
}

/*
==============
CL_TransientsSP_PushIgnoreLevelTransientUnloads
==============
*/

void CL_TransientsSP_PushIgnoreLevelTransientUnloads(void)
{
  ?CL_TransientsSP_PushIgnoreLevelTransientUnloads@@YAXXZ();
}

/*
==============
CL_TransientsSP_IsServerHalted
==============
*/

bool __fastcall CL_TransientsSP_IsServerHalted()
{
  return ?CL_TransientsSP_IsServerHalted@@YA_NXZ();
}

/*
==============
CL_TransientsSP_ServerAssetQueryHangFix
==============
*/

void CL_TransientsSP_ServerAssetQueryHangFix(void)
{
  ?CL_TransientsSP_ServerAssetQueryHangFix@@YAXXZ();
}

/*
==============
CL_TransientsSP_OnUnloadAll
==============
*/

void CL_TransientsSP_OnUnloadAll(void)
{
  ?CL_TransientsSP_OnUnloadAll@@YAXXZ();
}

/*
==============
CL_TransientsSP_DemoSetSync
==============
*/

void __fastcall CL_TransientsSP_DemoSetSync(const TransientDemoSyncType syncType)
{
  ?CL_TransientsSP_DemoSetSync@@YAXW4TransientDemoSyncType@@@Z(syncType);
}

/*
==============
CL_TransientsSP_HardSyncNow
==============
*/

void CL_TransientsSP_HardSyncNow(void)
{
  ?CL_TransientsSP_HardSyncNow@@YAXXZ();
}

/*
==============
CL_TransientsSP_IsGameSystemTransientLoaded
==============
*/

bool __fastcall CL_TransientsSP_IsGameSystemTransientLoaded(unsigned int transientIndex)
{
  return ?CL_TransientsSP_IsGameSystemTransientLoaded@@YA_NI@Z(transientIndex);
}

/*
==============
CL_TransientsSP_AreGameSystemsInitialized
==============
*/

bool __fastcall CL_TransientsSP_AreGameSystemsInitialized()
{
  return ?CL_TransientsSP_AreGameSystemsInitialized@@YA_NXZ();
}

/*
==============
CL_TransientsSP_ForceRestartServer
==============
*/

void CL_TransientsSP_ForceRestartServer(void)
{
  ?CL_TransientsSP_ForceRestartServer@@YAXXZ();
}

/*
==============
CL_TransientsSP_GameSystemsInit
==============
*/

void CL_TransientsSP_GameSystemsInit(void)
{
  ?CL_TransientsSP_GameSystemsInit@@YAXXZ();
}

/*
==============
CL_TransientsSP_QueueSoftSync
==============
*/

void CL_TransientsSP_QueueSoftSync(void)
{
  ?CL_TransientsSP_QueueSoftSync@@YAXXZ();
}

/*
==============
CL_TransientsSP_SyncingIsIdle
==============
*/

bool __fastcall CL_TransientsSP_SyncingIsIdle(void *__formal)
{
  return ?CL_TransientsSP_SyncingIsIdle@@YA_NPEAX@Z(__formal);
}

/*
==============
CL_TransientsSP_PopImmediateProcessTransients
==============
*/

void CL_TransientsSP_PopImmediateProcessTransients(void)
{
  ?CL_TransientsSP_PopImmediateProcessTransients@@YAXXZ();
}

/*
==============
CL_TransientsSP_ClientCodeCheck
==============
*/

void CL_TransientsSP_ClientCodeCheck(void)
{
  ?CL_TransientsSP_ClientCodeCheck@@YAXXZ();
}

/*
==============
CL_TransientsSP_ForceSyncClient
==============
*/

void CL_TransientsSP_ForceSyncClient(void)
{
  ?CL_TransientsSP_ForceSyncClient@@YAXXZ();
}

/*
==============
CL_TransientsSP_PauseGameWaitFor
==============
*/

void __fastcall CL_TransientsSP_PauseGameWaitFor(int transientIndex)
{
  ?CL_TransientsSP_PauseGameWaitFor@@YAXH@Z(transientIndex);
}

/*
==============
CL_TransientsSP_IsYieldingForStreaming
==============
*/

bool __fastcall CL_TransientsSP_IsYieldingForStreaming()
{
  return ?CL_TransientsSP_IsYieldingForStreaming@@YA_NXZ();
}

/*
==============
CL_TransientsSP_ClientCodeSync
==============
*/

void CL_TransientsSP_ClientCodeSync(void)
{
  ?CL_TransientsSP_ClientCodeSync@@YAXXZ();
}

/*
==============
CL_TransientsSP_TrySyncClient
==============
*/

bool __fastcall CL_TransientsSP_TrySyncClient()
{
  return ?CL_TransientsSP_TrySyncClient@@YA_NXZ();
}

/*
==============
CL_TransientsSP_AreGameSystemsInitialized
==============
*/
_BOOL8 CL_TransientsSP_AreGameSystemsInitialized()
{
  return s_gameSystemsInited;
}

/*
==============
CL_TransientsSP_BlockForLoadDBCompletion
==============
*/
bool CL_TransientsSP_BlockForLoadDBCompletion()
{
  bool result; 

  R_SyncRenderThread();
  DB_SyncDatabaseCompleted();
  result = DB_IsTransientSPGameWaitingForPostLoad();
  if ( !result )
  {
    result = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_transients_sp.cpp", 1572, ASSERT_TYPE_ASSERT, "(DB_IsTransientSPGameWaitingForPostLoad())", (const char *)&queryFormat, "DB_IsTransientSPGameWaitingForPostLoad()");
    if ( result )
      __debugbreak();
  }
  return result;
}

/*
==============
CL_TransientsSP_CancelAllLoads
==============
*/
void CL_TransientsSP_CancelAllLoads(void)
{
  unsigned int v0; 
  __int64 v1; 
  TransientSPZoneState mode; 
  __int64 v3; 
  TransientSPZoneState v4; 
  __int64 v5; 
  TransientSPZoneState v6; 
  __int64 v7; 
  TransientSPZoneState v8; 
  __int64 v9; 
  TransientSPZoneState v10; 
  __int64 v11; 
  TransientSPZoneState v12; 
  __int64 v13; 
  TransientSPZoneState v14; 
  __int64 v15; 
  TransientSPZoneState v16; 
  __int64 v17; 
  TransientSPZoneState v18; 
  __int64 v19; 
  TransientSPZoneState v20; 
  __int64 v21; 
  TransientSPZoneState v22; 
  __int64 v23; 
  TransientSPZoneState v24; 
  __int64 v25; 
  TransientSPZoneState v26; 
  __int64 v27; 
  TransientSPZoneState v28; 
  __int64 v29; 
  TransientSPZoneState v30; 
  __int64 v31; 
  TransientSPZoneState v32; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_transients_sp.cpp", 1439, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  v0 = 2;
  do
  {
    v1 = v0 - 2;
    mode = s_transientZones[v1].mode;
    if ( mode )
    {
      if ( mode == 1 )
      {
        s_transientZones[v1].mode = 0;
      }
      else
      {
        if ( (unsigned int)(mode - 2) > 1 )
          goto LABEL_11;
        s_transientZones[v1].mode = 7;
      }
    }
    s_transientZones[v1].wantsToBeLoaded = 0;
LABEL_11:
    v3 = v0 - 1;
    v4 = s_transientZones[v3].mode;
    if ( v4 )
    {
      if ( v4 == 1 )
      {
        s_transientZones[v3].mode = 0;
      }
      else
      {
        if ( (unsigned int)(v4 - 2) > 1 )
          goto LABEL_17;
        s_transientZones[v3].mode = 7;
      }
    }
    s_transientZones[v3].wantsToBeLoaded = 0;
LABEL_17:
    v5 = v0;
    v6 = s_transientZones[v5].mode;
    if ( v6 )
    {
      if ( v6 == 1 )
      {
        s_transientZones[v5].mode = 0;
      }
      else
      {
        if ( (unsigned int)(v6 - 2) > 1 )
          goto LABEL_23;
        s_transientZones[v5].mode = 7;
      }
    }
    s_transientZones[v5].wantsToBeLoaded = 0;
LABEL_23:
    v7 = v0 + 1;
    v8 = s_transientZones[v7].mode;
    if ( v8 )
    {
      if ( v8 == 1 )
      {
        s_transientZones[v7].mode = 0;
      }
      else
      {
        if ( (unsigned int)(v8 - 2) > 1 )
          goto LABEL_29;
        s_transientZones[v7].mode = 7;
      }
    }
    s_transientZones[v7].wantsToBeLoaded = 0;
LABEL_29:
    v9 = v0 + 2;
    v10 = s_transientZones[v9].mode;
    if ( v10 )
    {
      if ( v10 == 1 )
      {
        s_transientZones[v9].mode = 0;
      }
      else
      {
        if ( (unsigned int)(v10 - 2) > 1 )
          goto LABEL_35;
        s_transientZones[v9].mode = 7;
      }
    }
    s_transientZones[v9].wantsToBeLoaded = 0;
LABEL_35:
    v11 = v0 + 3;
    v12 = s_transientZones[v11].mode;
    if ( v12 )
    {
      if ( v12 == 1 )
      {
        s_transientZones[v11].mode = 0;
      }
      else
      {
        if ( (unsigned int)(v12 - 2) > 1 )
          goto LABEL_41;
        s_transientZones[v11].mode = 7;
      }
    }
    s_transientZones[v11].wantsToBeLoaded = 0;
LABEL_41:
    v13 = v0 + 4;
    v14 = s_transientZones[v13].mode;
    if ( v14 )
    {
      if ( v14 == 1 )
      {
        s_transientZones[v13].mode = 0;
      }
      else
      {
        if ( (unsigned int)(v14 - 2) > 1 )
          goto LABEL_47;
        s_transientZones[v13].mode = 7;
      }
    }
    s_transientZones[v13].wantsToBeLoaded = 0;
LABEL_47:
    v15 = v0 + 5;
    v16 = s_transientZones[v15].mode;
    if ( v16 )
    {
      if ( v16 == 1 )
      {
        s_transientZones[v15].mode = 0;
      }
      else
      {
        if ( (unsigned int)(v16 - 2) > 1 )
          goto LABEL_53;
        s_transientZones[v15].mode = 7;
      }
    }
    s_transientZones[v15].wantsToBeLoaded = 0;
LABEL_53:
    v17 = v0 + 6;
    v18 = s_transientZones[v17].mode;
    if ( v18 )
    {
      if ( v18 == 1 )
      {
        s_transientZones[v17].mode = 0;
      }
      else
      {
        if ( (unsigned int)(v18 - 2) > 1 )
          goto LABEL_59;
        s_transientZones[v17].mode = 7;
      }
    }
    s_transientZones[v17].wantsToBeLoaded = 0;
LABEL_59:
    v19 = v0 + 7;
    v20 = s_transientZones[v19].mode;
    if ( v20 )
    {
      if ( v20 == 1 )
      {
        s_transientZones[v19].mode = 0;
      }
      else
      {
        if ( (unsigned int)(v20 - 2) > 1 )
          goto LABEL_65;
        s_transientZones[v19].mode = 7;
      }
    }
    s_transientZones[v19].wantsToBeLoaded = 0;
LABEL_65:
    v21 = v0 + 8;
    v22 = s_transientZones[v21].mode;
    if ( v22 )
    {
      if ( v22 == 1 )
      {
        s_transientZones[v21].mode = 0;
      }
      else
      {
        if ( (unsigned int)(v22 - 2) > 1 )
          goto LABEL_71;
        s_transientZones[v21].mode = 7;
      }
    }
    s_transientZones[v21].wantsToBeLoaded = 0;
LABEL_71:
    v23 = v0 + 9;
    v24 = s_transientZones[v23].mode;
    if ( v24 )
    {
      if ( v24 == 1 )
      {
        s_transientZones[v23].mode = 0;
      }
      else
      {
        if ( (unsigned int)(v24 - 2) > 1 )
          goto LABEL_77;
        s_transientZones[v23].mode = 7;
      }
    }
    s_transientZones[v23].wantsToBeLoaded = 0;
LABEL_77:
    v25 = v0 + 10;
    v26 = s_transientZones[v25].mode;
    if ( v26 )
    {
      if ( v26 == 1 )
      {
        s_transientZones[v25].mode = 0;
      }
      else
      {
        if ( (unsigned int)(v26 - 2) > 1 )
          goto LABEL_83;
        s_transientZones[v25].mode = 7;
      }
    }
    s_transientZones[v25].wantsToBeLoaded = 0;
LABEL_83:
    v27 = v0 + 11;
    v28 = s_transientZones[v27].mode;
    if ( v28 )
    {
      if ( v28 == 1 )
      {
        s_transientZones[v27].mode = 0;
      }
      else
      {
        if ( (unsigned int)(v28 - 2) > 1 )
          goto LABEL_89;
        s_transientZones[v27].mode = 7;
      }
    }
    s_transientZones[v27].wantsToBeLoaded = 0;
LABEL_89:
    v29 = v0 + 12;
    v30 = s_transientZones[v29].mode;
    if ( v30 )
    {
      if ( v30 == 1 )
      {
        s_transientZones[v29].mode = 0;
      }
      else
      {
        if ( (unsigned int)(v30 - 2) > 1 )
          goto LABEL_95;
        s_transientZones[v29].mode = 7;
      }
    }
    s_transientZones[v29].wantsToBeLoaded = 0;
LABEL_95:
    v31 = v0 + 13;
    v32 = s_transientZones[v31].mode;
    if ( v32 )
    {
      if ( v32 == 1 )
      {
        s_transientZones[v31].mode = 0;
      }
      else
      {
        if ( (unsigned int)(v32 - 2) > 1 )
          goto LABEL_101;
        s_transientZones[v31].mode = 7;
      }
    }
    s_transientZones[v31].wantsToBeLoaded = 0;
LABEL_101:
    v0 += 16;
  }
  while ( v0 - 2 < 0x20 );
  DB_CancelLoadFastfilesByZoneFlags(0x5000u);
}

/*
==============
CL_TransientsSP_ClearPauseGame
==============
*/
bool CL_TransientsSP_ClearPauseGame()
{
  bool result; 

  result = Sys_IsMainThread();
  if ( !result )
  {
    result = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_transients_sp.cpp", 697, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()");
    if ( result )
      __debugbreak();
  }
  s_transientWaitForAll = 0;
  s_transientZones[0].pauseGame = 0;
  s_transientZones[1].pauseGame = 0;
  s_transientZones[2].pauseGame = 0;
  s_transientZones[3].pauseGame = 0;
  s_transientZones[4].pauseGame = 0;
  s_transientZones[5].pauseGame = 0;
  s_transientZones[6].pauseGame = 0;
  s_transientZones[7].pauseGame = 0;
  s_transientZones[8].pauseGame = 0;
  s_transientZones[9].pauseGame = 0;
  s_transientZones[10].pauseGame = 0;
  s_transientZones[11].pauseGame = 0;
  s_transientZones[12].pauseGame = 0;
  s_transientZones[13].pauseGame = 0;
  s_transientZones[14].pauseGame = 0;
  s_transientZones[15].pauseGame = 0;
  s_transientZones[16].pauseGame = 0;
  s_transientZones[17].pauseGame = 0;
  s_transientZones[18].pauseGame = 0;
  s_transientZones[19].pauseGame = 0;
  s_transientZones[20].pauseGame = 0;
  s_transientZones[21].pauseGame = 0;
  s_transientZones[22].pauseGame = 0;
  s_transientZones[23].pauseGame = 0;
  s_transientZones[24].pauseGame = 0;
  s_transientZones[25].pauseGame = 0;
  s_transientZones[26].pauseGame = 0;
  s_transientZones[27].pauseGame = 0;
  s_transientZones[28].pauseGame = 0;
  s_transientZones[29].pauseGame = 0;
  s_transientZones[30].pauseGame = 0;
  s_transientZones[31].pauseGame = 0;
  s_transientPauseRequested = 0;
  return result;
}

/*
==============
CL_TransientsSP_ClientCodeCheck
==============
*/
void CL_TransientsSP_ClientCodeCheck(void)
{
  if ( s_transientSyncState != 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_transients_sp.cpp", 2134, ASSERT_TYPE_ASSERT, "(s_transientSyncState == CL_TRANSIENT_SERVERSYNC_SERVER_HALTED)", (const char *)&queryFormat, "s_transientSyncState == CL_TRANSIENT_SERVERSYNC_SERVER_HALTED") )
    __debugbreak();
}

/*
==============
CL_TransientsSP_ClientCodeSync
==============
*/
void CL_TransientsSP_ClientCodeSync(void)
{
  const dvar_t *v0; 

  if ( s_transientSyncState != 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_transients_sp.cpp", 2142, ASSERT_TYPE_ASSERT, "(s_transientSyncState == CL_TRANSIENT_SERVERSYNC_SERVER_HALTED)", (const char *)&queryFormat, "s_transientSyncState == CL_TRANSIENT_SERVERSYNC_SERVER_HALTED") )
    __debugbreak();
  v0 = DVARBOOL_cl_transient_sp_streamer_syncflush;
  if ( !DVARBOOL_cl_transient_sp_streamer_syncflush && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_transient_sp_streamer_syncflush") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  if ( v0->current.enabled )
    Stream_SyncThenFlush();
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "CL_TransientsSP_ClientCodeSync");
  Sys_WaitWorkerCmds();
  Sys_ProfEndNamedEvent();
  if ( s_transientSyncState != 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_transients_sp.cpp", 2134, ASSERT_TYPE_ASSERT, "(s_transientSyncState == CL_TRANSIENT_SERVERSYNC_SERVER_HALTED)", (const char *)&queryFormat, "s_transientSyncState == CL_TRANSIENT_SERVERSYNC_SERVER_HALTED") )
    __debugbreak();
}

/*
==============
CL_TransientsSP_DemoGetSyncResult
==============
*/
__int64 CL_TransientsSP_DemoGetSyncResult()
{
  return (unsigned int)s_transientDemoSyncRecord;
}

/*
==============
CL_TransientsSP_DemoPlaybackSyncBegin
==============
*/
void CL_TransientsSP_DemoPlaybackSyncBegin(void)
{
  if ( ((unsigned __int8)&s_demoPlaybackSync & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)&s_demoPlaybackSync) )
    __debugbreak();
  if ( _InterlockedCompareExchange(&s_demoPlaybackSync, 1, 0) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_transients_sp.cpp", 2182, ASSERT_TYPE_ASSERT, "(before == 0)", (const char *)&queryFormat, "before == 0") )
      __debugbreak();
  }
}

/*
==============
CL_TransientsSP_DemoPlaybackSyncEnd
==============
*/
void CL_TransientsSP_DemoPlaybackSyncEnd(void)
{
  if ( ((unsigned __int8)&s_demoPlaybackSync & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)&s_demoPlaybackSync) )
    __debugbreak();
  _InterlockedCompareExchange(&s_demoPlaybackSync, 0, 1);
}

/*
==============
CL_TransientsSP_DemoSetSync
==============
*/
void CL_TransientsSP_DemoSetSync(const TransientDemoSyncType syncType)
{
  s_transientDemoSyncPlayback = syncType;
  s_transientDemoSyncRecord = NONE;
}

/*
==============
CL_TransientsSP_ForceRestartServer
==============
*/
void CL_TransientsSP_ForceRestartServer(void)
{
  TransientDemoSyncType v0; 
  bool v1; 
  TransientDemoSyncType v2; 
  bool v3; 
  __int64 v4; 
  __int64 v5; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_transients_sp.cpp", 2030, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( SV_IsDemoPlaying() )
  {
    if ( s_transientDemoSyncPlayback )
    {
      v0 = s_transientDemoSyncRecord;
      if ( s_transientDemoSyncRecord != s_transientDemoSyncPlayback )
      {
        while ( v0 )
        {
          v1 = 1;
LABEL_22:
          CL_TransientsSP_UpdatePauseGame(v1);
          Sys_CheckQuitRequest();
          Sys_Sleep(0);
          v0 = s_transientDemoSyncRecord;
          if ( s_transientDemoSyncRecord == s_transientDemoSyncPlayback )
            goto LABEL_23;
        }
        if ( CL_TransientsSP_ProcessInternal(0) )
        {
          v2 = s_transientDemoSyncRecord;
          if ( s_transientDemoSyncRecord == NONE )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_transients_sp.cpp", 1991, ASSERT_TYPE_ASSERT, "(s_transientDemoSyncRecord != TransientDemoSyncType::NONE)", (const char *)&queryFormat, "s_transientDemoSyncRecord != TransientDemoSyncType::NONE") )
              __debugbreak();
            v2 = s_transientDemoSyncRecord;
          }
          if ( s_transientDemoSyncPlayback == NONE || v2 == s_transientDemoSyncPlayback )
            goto LABEL_21;
          LODWORD(v5) = s_transientDemoSyncPlayback;
          LODWORD(v4) = v2;
          v3 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_transients_sp.cpp", 1996, ASSERT_TYPE_ASSERT, "( s_transientDemoSyncRecord ) == ( s_transientDemoSyncPlayback )", "%s == %s\n\t%i, %i", "s_transientDemoSyncRecord", "s_transientDemoSyncPlayback", v4, v5);
        }
        else
        {
          if ( s_transientDemoSyncRecord == NONE )
          {
LABEL_21:
            v1 = 0;
            goto LABEL_22;
          }
          v3 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_transients_sp.cpp", 2003, ASSERT_TYPE_ASSERT, "(s_transientDemoSyncRecord == TransientDemoSyncType::NONE)", (const char *)&queryFormat, "s_transientDemoSyncRecord == TransientDemoSyncType::NONE");
        }
        if ( v3 )
          __debugbreak();
        goto LABEL_21;
      }
    }
  }
LABEL_23:
  if ( s_transientServerAssetQueryHangFix )
  {
    if ( !Sys_IsDatabaseReady() )
    {
      Com_PrintError(16, "TRANSIENT: Stalling game for transient load, because the server thread asked for a missing asset while transients are loading.\n");
      R_BeginRemoteScreenUpdate();
      Sys_SyncDatabase();
      R_EndRemoteScreenUpdate();
      if ( !Sys_IsDatabaseReady() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_transients_sp.cpp", 2059, ASSERT_TYPE_ASSERT, "(Sys_IsDatabaseReady())", (const char *)&queryFormat, "Sys_IsDatabaseReady()") )
        __debugbreak();
    }
    s_transientServerAssetQueryHangFix = 0;
  }
  Sys_CheckQuitRequest();
  if ( s_transientSyncState )
  {
    if ( DB_Transients_VerbosePrint() )
      Com_Printf(16, "TRANSIENT_CL: Forcing a server restart. This will postpone the next transient operation.\n");
    s_transientSyncState = 0;
  }
}

/*
==============
CL_TransientsSP_ForceSyncClient
==============
*/
void CL_TransientsSP_ForceSyncClient(void)
{
  int v0; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_transients_sp.cpp", 2103, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( !SV_MainSP_DemoPlaybackForwardFrame() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_transients_sp.cpp", 2104, ASSERT_TYPE_ASSERT, "(SV_MainSP_DemoPlaybackForwardFrame())", (const char *)&queryFormat, "SV_MainSP_DemoPlaybackForwardFrame()") )
    __debugbreak();
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_transients_sp.cpp", 1301, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  v0 = R_PopRemoteScreenUpdate();
  Com_SyncThreads();
  R_PushRemoteScreenUpdate(v0);
  if ( ((unsigned __int8)s_transientSyncState & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", s_transientSyncState) )
    __debugbreak();
  if ( _InterlockedCompareExchange(s_transientSyncState, 2, 0) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_transients_sp.cpp", 2108, ASSERT_TYPE_ASSERT, "(Sys_InterlockedCompareExchange( &s_transientSyncState, CL_TRANSIENT_SERVERSYNC_SERVER_HALTED, CL_TRANSIENT_SERVERSYNC_IDLE ) == CL_TRANSIENT_SERVERSYNC_IDLE)", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &s_transientSyncState, CL_TRANSIENT_SERVERSYNC_SERVER_HALTED, CL_TRANSIENT_SERVERSYNC_IDLE ) == CL_TRANSIENT_SERVERSYNC_IDLE") )
      __debugbreak();
  }
}

/*
==============
CL_TransientsSP_GameSystemsInit
==============
*/
void CL_TransientsSP_GameSystemsInit(void)
{
  unsigned int i; 

  s_gameSystemsInited = 1;
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "Game System Transient Load");
  CL_TransientsSP_GameSystemsLoad();
  Sys_ProfEndNamedEvent();
  for ( i = 0; i < 0x600; ++i )
    CL_TransientsWorld_SetVisibility(LOCAL_CLIENT_0, i, 1);
  CL_TransientsSP_ClearPauseGame();
}

/*
==============
CL_TransientsSP_GameSystemsLoad
==============
*/
void CL_TransientsSP_GameSystemsLoad()
{
  unsigned int v0; 
  unsigned __int64 v1; 
  bool *p_wantsToBeLoaded; 
  __int64 v3; 
  unsigned __int64 v4; 
  bool *p_gameSystemsPartLoaded; 
  bool v6; 
  const char *WorldTransientName; 
  const char *v8; 
  __int64 v9; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_transients_sp.cpp", 506, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( s_gameSystemsInited )
  {
    v0 = 0;
    v1 = 0i64;
    p_wantsToBeLoaded = &s_transientZones[0].wantsToBeLoaded;
    v3 = 32i64;
    v9 = 0i64;
    do
    {
      if ( !p_wantsToBeLoaded[1] && *p_wantsToBeLoaded && *((_DWORD *)p_wantsToBeLoaded - 1) == 4 )
      {
        if ( v1 >= 0x20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 181, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
          __debugbreak();
        *(&v9 + (v1 >> 6)) |= 0x8000000000000000ui64 >> (v1 & 0x3F);
      }
      ++v1;
      p_wantsToBeLoaded += 8;
      --v3;
    }
    while ( v3 );
    if ( (v9 & 0xFFFFFFFF00000000ui64) != 0 )
    {
      Com_Printf(0, "TRANSIENTS: Initing game systems for transients\n");
      Sys_ProfBeginNamedEvent(0xFFFFFFFF, "Systems Transient Load");
      v4 = 0i64;
      p_gameSystemsPartLoaded = &s_transientZones[0].gameSystemsPartLoaded;
      do
      {
        if ( v4 >= 0x20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
          __debugbreak();
        if ( ((0x8000000000000000ui64 >> (v4 & 0x3F)) & *(&v9 + (v4 >> 6))) != 0 )
        {
          v6 = *p_gameSystemsPartLoaded;
          *(_WORD *)(p_gameSystemsPartLoaded - 1) = 1;
          WorldTransientName = DB_Transients_GetWorldTransientName(v0);
          Sys_ProfBeginNamedEvent(0xFFFFFFFF, WorldTransientName);
          v8 = DB_Transients_GetWorldTransientName(v0);
          Com_Printf(0, "TRANSIENTS: Initing game systems for %s\n", v8);
          Sys_ProfBeginNamedEvent(0xFFFFFFFF, "Physics Transient Zone Load");
          Physics_TransientZoneLoaded(v0, !v6);
          Sys_ProfEndNamedEvent();
          Sys_ProfBeginNamedEvent(0xFFFFFFFF, "StaticModels Transient Zone Load");
          StaticModels_TransientZoneLoadedMain(v0);
          Sys_ProfEndNamedEvent();
          if ( !v6 )
          {
            Sys_ProfBeginNamedEvent(0xFFFFFFFF, "DynEnt Transient Zone Load");
            DynEnt_TransientsLoaded(v0);
            Sys_ProfEndNamedEvent();
          }
          Sys_ProfBeginNamedEvent(0xFFFFFFFF, "Mayhem Transient Zone Load");
          Mayhem_TransientsLoaded(v0);
          Sys_ProfEndNamedEvent();
          Sys_ProfEndNamedEvent();
        }
        ++v0;
        ++v4;
        p_gameSystemsPartLoaded += 8;
      }
      while ( v0 < 0x20 );
      Sys_ProfEndNamedEvent();
    }
  }
}

/*
==============
CL_TransientsSP_GameSystemsShutdown
==============
*/
void CL_TransientsSP_GameSystemsShutdown(void)
{
  bool *p_gameSystemsLoaded; 
  __int64 v1; 

  if ( s_gameSystemsInited )
  {
    CL_TransientsSP_GameSystemsUnload(1);
    p_gameSystemsLoaded = &s_transientZones[0].gameSystemsLoaded;
    v1 = 32i64;
    do
    {
      if ( *p_gameSystemsLoaded && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_transients_sp.cpp", 737, ASSERT_TYPE_ASSERT, "(!s_transientZones[i].gameSystemsLoaded)", (const char *)&queryFormat, "!s_transientZones[i].gameSystemsLoaded") )
        __debugbreak();
      p_gameSystemsLoaded += 8;
      --v1;
    }
    while ( v1 );
    CL_TransientsSP_ClearPauseGame();
    s_gameSystemsInited = 0;
  }
}

/*
==============
CL_TransientsSP_GameSystemsUnload
==============
*/
void CL_TransientsSP_GameSystemsUnload(const bool forceUnloadAll)
{
  unsigned int v2; 
  bool *p_wantsToBeLoaded; 
  unsigned __int64 v4; 
  __int64 v5; 
  unsigned __int64 v6; 
  bool *p_gameSystemsLoaded; 
  unsigned __int64 v8; 
  bool v9; 
  const char *WorldTransientName; 
  const char *v11; 
  __int64 v12; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_transients_sp.cpp", 602, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( s_gameSystemsInited )
  {
    v2 = 0;
    p_wantsToBeLoaded = &s_transientZones[0].wantsToBeLoaded;
    v4 = 0i64;
    v5 = 32i64;
    v12 = 0i64;
    do
    {
      if ( p_wantsToBeLoaded[1] && (!*p_wantsToBeLoaded || forceUnloadAll) )
      {
        if ( v4 >= 0x20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 181, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
          __debugbreak();
        *(&v12 + (v4 >> 6)) |= 0x8000000000000000ui64 >> (v4 & 0x3F);
      }
      ++v4;
      p_wantsToBeLoaded += 8;
      --v5;
    }
    while ( v5 );
    if ( (v12 & 0xFFFFFFFF00000000ui64) != 0 )
    {
      Com_Printf(0, "TRANSIENTS: Releasing game systems for transients\n");
      Sys_ProfBeginNamedEvent(0xFFFFFFFF, "Systems Transient Unload");
      v6 = 0i64;
      p_gameSystemsLoaded = &s_transientZones[0].gameSystemsLoaded;
      do
      {
        if ( *p_gameSystemsLoaded )
        {
          if ( v6 >= 0x20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 159, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
            __debugbreak();
          v8 = *(&v12 + (v6 >> 6)) & (0x8000000000000000ui64 >> (v6 & 0x3F));
          *p_gameSystemsLoaded = 0;
          v9 = v8 != 0;
          p_gameSystemsLoaded[1] = v8 == 0;
          WorldTransientName = DB_Transients_GetWorldTransientName(v2);
          Com_Printf(0, "TRANSIENTS: Releasing game systems for %s\n", WorldTransientName);
          v11 = DB_Transients_GetWorldTransientName(v2);
          Sys_ProfBeginNamedEvent(0xFFFFFFFF, v11);
          Sys_ProfBeginNamedEvent(0xFFFFFFFF, "Mayhem Transient Zone Unload");
          Mayhem_TransientsUnloading(v2);
          Sys_ProfEndNamedEvent();
          if ( v8 )
          {
            Sys_ProfBeginNamedEvent(0xFFFFFFFF, "DynEnt Transient Zone Unload");
            DynEnt_TransientsUnloading(v2);
            Sys_ProfEndNamedEvent();
          }
          Sys_ProfBeginNamedEvent(0xFFFFFFFF, "StaticModels Transient Zone Unload");
          StaticModels_TransientZoneUnloadingMain(v2, v9);
          Sys_ProfEndNamedEvent();
          Sys_ProfBeginNamedEvent(0xFFFFFFFF, "Physics Transient Zone Unload");
          Physics_TransientZoneUnloading(v2, v9);
          Sys_ProfEndNamedEvent();
          Sys_ProfEndNamedEvent();
        }
        ++v2;
        ++v6;
        p_gameSystemsLoaded += 8;
      }
      while ( v2 < 0x20 );
      Sys_ProfEndNamedEvent();
    }
  }
}

/*
==============
CL_TransientsSP_GetLoadArray
==============
*/
__int64 CL_TransientsSP_GetLoadArray(DB_FastfileInfo *load)
{
  XTransientZoneInfo *v2; 
  unsigned int v3; 
  unsigned int v4; 
  DB_FastFileFailureMode *p_failureMode; 

  if ( s_transientsSP_yieldingToImages && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_transients_sp.cpp", 1017, ASSERT_TYPE_ASSERT, "(!s_transientsSP_yieldingToImages)", (const char *)&queryFormat, "!s_transientsSP_yieldingToImages") )
    __debugbreak();
  v2 = s_transientZones;
  v3 = 0;
  v4 = 0;
  p_failureMode = &load->failureMode;
  do
  {
    if ( v2->mode == 1 )
    {
      *(_QWORD *)(p_failureMode - 3) = DB_Transients_GetSPTransientName(v4);
      *((_DWORD *)p_failureMode - 1) = DB_Transients_GetSPTransientZoneFlags(v4);
      *p_failureMode = REQUIRED;
      *((_DWORD *)p_failureMode + 1) = 65534;
      if ( DB_Transients_VerbosePrint() )
        Com_Printf(16, "TRANSIENT_CL: Load of transient '%s'.\n", *(const char **)(p_failureMode - 3));
      if ( v2->gameSystemsLoaded && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_transients_sp.cpp", 1033, ASSERT_TYPE_ASSERT, "(!s_transientZones[i].gameSystemsLoaded)", (const char *)&queryFormat, "!s_transientZones[i].gameSystemsLoaded") )
        __debugbreak();
      ++v3;
      v2->mode = 2;
      p_failureMode += 6;
    }
    ++v4;
    ++v2;
  }
  while ( v4 < 0x20 );
  return v3;
}

/*
==============
CL_TransientsSP_GetResumeArray
==============
*/
__int64 CL_TransientsSP_GetResumeArray(DB_FastfileInfo *resume)
{
  unsigned int v2; 
  unsigned int v3; 
  XTransientZoneInfo *v4; 
  DB_FastfileInfo *v5; 
  const char *SPTransientName; 
  __int64 v8; 
  __int64 v9; 

  v2 = 0;
  if ( s_transientsSP_yieldingToImages && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_transients_sp.cpp", 1098, ASSERT_TYPE_ASSERT, "(!s_transientsSP_yieldingToImages)", (const char *)&queryFormat, "!s_transientsSP_yieldingToImages") )
    __debugbreak();
  v3 = 0;
  v4 = s_transientZones;
  do
  {
    if ( v4->mode == 3 )
    {
      if ( !resume && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_transients_sp.cpp", 1046, ASSERT_TYPE_ASSERT, "(zoneList)", (const char *)&queryFormat, "zoneList") )
        __debugbreak();
      if ( v2 >= 0x20 )
      {
        LODWORD(v9) = 32;
        LODWORD(v8) = v2;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_transients_sp.cpp", 1048, ASSERT_TYPE_ASSERT, "(unsigned)( ( *zoneCount ) ) < (unsigned)( MAX_TRANSIENT_SP_FASTFILES )", "( *zoneCount ) doesn't index MAX_TRANSIENT_SP_FASTFILES\n\t%i not in [0, %i)", v8, v9) )
          __debugbreak();
      }
      v5 = &resume[v2];
      v5->name = DB_Transients_GetSPTransientName(v3);
      v5->zoneFlags = DB_Transients_GetSPTransientZoneFlags(v3);
      *(_QWORD *)&v5->failureMode = 0i64;
      if ( v4->gameSystemsLoaded && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_transients_sp.cpp", 1055, ASSERT_TYPE_ASSERT, "(!s_transientZones[zoneIndex].gameSystemsLoaded)", (const char *)&queryFormat, "!s_transientZones[zoneIndex].gameSystemsLoaded") )
        __debugbreak();
      ++v2;
      v4->mode = 2;
      if ( DB_Transients_VerbosePrint() )
      {
        SPTransientName = DB_Transients_GetSPTransientName(v3);
        Com_Printf(16, "TRANSIENT_CL: Resuming of transient '%s'.\n", SPTransientName);
      }
    }
    ++v3;
    ++v4;
  }
  while ( v3 < 0x20 );
  return v2;
}

/*
==============
CL_TransientsSP_GetUnloadArray
==============
*/
__int64 CL_TransientsSP_GetUnloadArray(DB_FastfileInfo *info, const bool waitForGPU)
{
  XTransientZoneInfo *v3; 
  unsigned int v4; 
  signed int i; 
  TransientSPZoneState mode; 
  DB_FastfileInfo *v7; 
  __int64 v9; 

  v3 = &s_transientZones[31];
  v4 = 0;
  for ( i = 31; i >= 0; --i )
  {
    mode = v3->mode;
    if ( ((v3->mode - 5) & 0xFFFFFFFD) == 0 )
    {
      v7 = &info[v4];
      v7->zoneFlags = DB_Transients_GetSPTransientZoneFlags(i);
      v7->name = DB_Transients_GetSPTransientName(i);
      *(_QWORD *)&v7->failureMode = 0i64;
      if ( DB_Transients_VerbosePrint() )
        Com_Printf(16, "TRANSIENT_CL: Unload of transient '%s'.\n", v7->name);
      v3->mode = 6;
      if ( v3->gameSystemsLoaded )
      {
        LODWORD(v9) = mode;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_transients_sp.cpp", 1002, ASSERT_TYPE_ASSERT, "(!s_transientZones[i].gameSystemsLoaded)", "%s\n\ts_transientZones[i].gameSystemsLoaded for %s, Old State = %d", "!s_transientZones[i].gameSystemsLoaded", v7->name, v9) )
          __debugbreak();
      }
      ++v4;
    }
    --v3;
  }
  return v4;
}

/*
==============
CL_TransientsSP_GetWantedSyncType
==============
*/
__int64 CL_TransientsSP_GetWantedSyncType()
{
  unsigned int v1; 
  XTransientZoneInfo *v2; 
  unsigned int v3; 
  XTransientZoneInfo *v4; 
  char v5; 
  int v6; 
  XTransientZoneInfo *i; 
  unsigned int v8; 
  XTransientZoneInfo *v9; 
  int v10; 

  if ( SV_IsDemoPlaying() )
  {
    if ( s_transientDemoSyncPlayback )
    {
      if ( DB_Transients_VerbosePrint() )
        Com_Printf(0, "TRANSIENT_CL: s_transientDemoSyncPlayback == %d\n", (unsigned int)s_transientDemoSyncPlayback);
    }
    return (unsigned int)s_transientDemoSyncPlayback;
  }
  if ( !Stream_AlwaysLoaded_IsFinished() )
  {
    if ( DB_Transients_VerbosePrint() )
      Com_Printf(16, "TRANSIENT_CL: Waiting for alwaysloaded update to complete.\n");
    return 0i64;
  }
  v1 = 0;
  v2 = s_transientZones;
  if ( !s_transientsSP_yieldingToImages )
  {
LABEL_14:
    if ( CL_PreloadSP_IsBusy() )
    {
      if ( DB_Transients_VerbosePrint() )
        Com_Printf(16, "TRANSIENT_CL: Waiting for preload fastfiles to complete.\n");
      return 0i64;
    }
    if ( !s_transientsSyncing && !Sys_IsDatabaseReady() )
    {
      if ( DB_Transients_VerbosePrint() )
        Com_Printf(16, "TRANSIENT_CL: Waiting for Database load.\n");
      return 0i64;
    }
    if ( SvStaticGlobals::ms_svStaticGlobals.state == SS_GAME )
    {
      v5 = SvGameGlobals::ms_allocatedType;
      if ( (_BYTE)SvGameGlobals::ms_allocatedType != HALF )
      {
        v10 = (unsigned __int8)SvGameGlobals::ms_allocatedType;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_game_globals_sp.h", 102, ASSERT_TYPE_ASSERT, "(ms_allocatedType == ALLOCATION_TYPE)", "%s\n\tTrying to access server globals, but the server isn't running or its game mode is wrong (ms_allocatedType=%i)", "ms_allocatedType == ALLOCATION_TYPE", v10) )
          __debugbreak();
        v5 = SvGameGlobals::ms_allocatedType;
      }
      if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game_globals.h", 98, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tAttempting to access server global data outside of an active server context", "ms_allocatedType != GameModeType::NONE") )
        __debugbreak();
      if ( !SvGameGlobals::ms_svGameGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game_globals.h", 99, ASSERT_TYPE_ASSERT, "( ms_svGameGlobals )", (const char *)&queryFormat, "ms_svGameGlobals") )
        __debugbreak();
      if ( *(&SvGameGlobals::ms_svGameGlobals[1].m_configstringsCount + 1) || SvGameGlobals::ms_svGameGlobals[1].m_configstringsCount )
      {
        if ( DB_Transients_VerbosePrint() )
          Com_Printf(16, "TRANSIENT_CL: Waiting for savegame to complete.\n");
        return 0i64;
      }
    }
    if ( Material_TransientDirtySortFinished() )
    {
      if ( !DB_IsTransientSPGameWaitingForPostLoad() )
      {
        if ( CL_TransientsSP_HasPendingResumes() )
          return 3i64;
        v6 = 0;
        for ( i = s_transientZones; i->mode != 3; ++i )
        {
          if ( (unsigned int)++v6 >= 0x20 )
          {
            v8 = 0;
            v9 = s_transientZones;
            do
            {
              if ( ((v9->mode - 5) & 0xFFFFFFFD) == 0 )
                return 5i64;
              ++v8;
              ++v9;
            }
            while ( v8 < 0x20 );
            if ( s_transientsSP_yieldingToImages )
              return 0i64;
            while ( v2->mode != 1 )
            {
              ++v1;
              ++v2;
              if ( v1 >= 0x20 )
                return 0i64;
            }
            return 1i64;
          }
        }
        return 0i64;
      }
    }
    else
    {
      if ( DB_CanDoTransientMaterialSort() || !DB_IsTransientSPGameWaitingForPostLoad() )
      {
        if ( DB_Transients_VerbosePrint() )
          Com_Printf(16, "TRANSIENT_CL: Waiting for transient dirty sort.\n");
        return 0i64;
      }
      Com_Printf(16, "CL_TransientsSP_GetWantedSyncType: Forcing a postload before a transient material sort.\n");
    }
    return 4i64;
  }
  v3 = 0;
  v4 = s_transientZones;
  while ( v4->mode != 2 )
  {
    ++v3;
    ++v4;
    if ( v3 >= 0x20 )
      goto LABEL_14;
  }
  return 2i64;
}

/*
==============
CL_TransientsSP_GetZoneModeByIndex
==============
*/
__int64 CL_TransientsSP_GetZoneModeByIndex(const int index)
{
  __int64 v1; 
  int v4; 

  v1 = index;
  if ( (unsigned int)index >= 0x20 )
  {
    v4 = 32;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_transients_sp.cpp", 2022, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( MAX_TRANSIENT_SP_FASTFILES )", "index doesn't index MAX_TRANSIENT_SP_FASTFILES\n\t%i not in [0, %i)", index, v4) )
      __debugbreak();
  }
  return (unsigned int)s_transientZones[v1].mode;
}

/*
==============
CL_TransientsSP_HardSyncNow
==============
*/
void CL_TransientsSP_HardSyncNow(void)
{
  int v0; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_transients_sp.cpp", 1312, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  ProfLoad_Begin("CL_TransientsSP_HardSyncNow");
  if ( DB_Transients_VerbosePrint() )
    Com_Printf(16, "TRANSIENT_CL: CL_TransientsSP_HardSyncNow\n");
  s_transientsSyncing = 1;
  CL_PreloadSP_SyncLoads();
  if ( CL_PreloadSP_IsBusy() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_transients_sp.cpp", 1326, ASSERT_TYPE_ASSERT, "(!CL_PreloadSP_IsBusy())", (const char *)&queryFormat, "!CL_PreloadSP_IsBusy()") )
    __debugbreak();
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_transients_sp.cpp", 1301, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  v0 = R_PopRemoteScreenUpdate();
  Com_SyncThreads();
  R_PushRemoteScreenUpdate(v0);
  if ( s_transientSyncState[0] == 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_transients_sp.cpp", 1332, ASSERT_TYPE_ASSERT, "(s_transientSyncState != CL_TRANSIENT_SERVERSYNC_SERVER_HALTED)", (const char *)&queryFormat, "s_transientSyncState != CL_TRANSIENT_SERVERSYNC_SERVER_HALTED") )
    __debugbreak();
  s_transientSyncState[0] = 2;
  SND_DisableUpdatePush();
  CL_TransientsSP_ClientCodeSync();
  CL_TransientsSP_SyncBlockClient();
  SND_DisableUpdatePop();
  if ( ((unsigned __int8)s_transientSyncState & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", s_transientSyncState) )
    __debugbreak();
  if ( _InterlockedCompareExchange(s_transientSyncState, 0, 2) != 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_transients_sp.cpp", 1349, ASSERT_TYPE_ASSERT, "(Sys_InterlockedCompareExchange( &s_transientSyncState, CL_TRANSIENT_SERVERSYNC_IDLE, CL_TRANSIENT_SERVERSYNC_SERVER_HALTED ) == CL_TRANSIENT_SERVERSYNC_SERVER_HALTED)", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &s_transientSyncState, CL_TRANSIENT_SERVERSYNC_IDLE, CL_TRANSIENT_SERVERSYNC_SERVER_HALTED ) == CL_TRANSIENT_SERVERSYNC_SERVER_HALTED") )
    __debugbreak();
  ProfLoad_End();
}

/*
==============
CL_TransientsSP_HasPendingPauses
==============
*/
char CL_TransientsSP_HasPendingPauses()
{
  int v0; 
  XTransientZoneInfo *i; 

  if ( !s_transientsSP_yieldingToImages )
    return 0;
  v0 = 0;
  for ( i = s_transientZones; i->mode != 2; ++i )
  {
    if ( (unsigned int)++v0 >= 0x20 )
      return 0;
  }
  return 1;
}

/*
==============
CL_TransientsSP_HasPendingResumes
==============
*/
char CL_TransientsSP_HasPendingResumes()
{
  int v0; 
  XTransientZoneInfo *i; 

  if ( s_transientsSP_yieldingToImages )
    return 0;
  v0 = 0;
  for ( i = s_transientZones; i->mode != 3; ++i )
  {
    if ( (unsigned int)++v0 >= 0x20 )
      return 0;
  }
  return 1;
}

/*
==============
CL_TransientsSP_IsGameSystemTransientLoaded
==============
*/
bool CL_TransientsSP_IsGameSystemTransientLoaded(unsigned int transientIndex)
{
  __int64 v1; 
  int v4; 

  v1 = transientIndex;
  if ( transientIndex >= 0x20 )
  {
    v4 = 32;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_transients_sp.cpp", 489, ASSERT_TYPE_ASSERT, "(unsigned)( transientIndex ) < (unsigned)( ( sizeof( *array_counter( s_transientZones ) ) + 0 ) )", "transientIndex doesn't index ARRAY_COUNT( s_transientZones )\n\t%i not in [0, %i)", transientIndex, v4) )
      __debugbreak();
  }
  return s_transientZones[v1].gameSystemsLoaded && s_transientZones[v1].wantsToBeLoaded && s_transientZones[v1].mode == 4;
}

/*
==============
CL_TransientsSP_IsPauseRequested
==============
*/
_BOOL8 CL_TransientsSP_IsPauseRequested()
{
  return s_transientPauseRequested;
}

/*
==============
CL_TransientsSP_IsServerHalted
==============
*/
bool CL_TransientsSP_IsServerHalted()
{
  return s_transientSyncState[0] == 2;
}

/*
==============
CL_TransientsSP_IsWorkRequired
==============
*/
bool CL_TransientsSP_IsWorkRequired()
{
  unsigned int v0; 
  bool *p_wantsToBeLoaded; 
  int v2; 
  const char *SPTransientName; 
  bool result; 

  v0 = 0;
  p_wantsToBeLoaded = &s_transientZones[0].wantsToBeLoaded;
  do
  {
    v2 = *((_DWORD *)p_wantsToBeLoaded - 1);
    if ( v2 )
    {
      if ( v2 != 4 )
        return 1;
      if ( !*p_wantsToBeLoaded )
      {
        if ( !s_ignoreLevelTransientUnloads )
          return 1;
        SPTransientName = DB_Transients_GetSPTransientName(v0);
        Com_Printf(16, "TRANSIENT_CL: Keep around '%s'\n", SPTransientName);
      }
    }
    else if ( *p_wantsToBeLoaded )
    {
      return 1;
    }
    ++v0;
    p_wantsToBeLoaded += 8;
  }
  while ( v0 < 0x20 );
  result = DB_IsTransientSPGameWaitingForPostLoad();
  if ( !result )
    return result;
  return 1;
}

/*
==============
CL_TransientsSP_IsYieldingForStreaming
==============
*/
_BOOL8 CL_TransientsSP_IsYieldingForStreaming()
{
  return s_transientsSP_yieldingToImages;
}

/*
==============
CL_TransientsSP_OnGameModeUnload
==============
*/
void CL_TransientsSP_OnGameModeUnload(void)
{
  __int64 v0; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_transients_sp.cpp", 1414, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  CL_TransientsSP_HardSyncNow();
  if ( s_transientsSyncing && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_transients_sp.cpp", 1419, ASSERT_TYPE_ASSERT, "(!s_transientsSyncing)", (const char *)&queryFormat, "!s_transientsSyncing") )
    __debugbreak();
  v0 = 0i64;
  do
  {
    if ( !DB_Transients_IsRegisteredSPTransient(v0) || (DB_Transients_GetSPTransientZoneFlags(v0) & 0x1000) != 0 )
      s_transientZones[v0] = 0i64;
    v0 = (unsigned int)(v0 + 1);
  }
  while ( (unsigned int)v0 < 0x20 );
}

/*
==============
CL_TransientsSP_OnLevelUnload
==============
*/
void CL_TransientsSP_OnLevelUnload(void)
{
  __int64 v0; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_transients_sp.cpp", 1387, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  CL_TransientsSP_HardSyncNow();
  if ( s_transientsSyncing && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_transients_sp.cpp", 1392, ASSERT_TYPE_ASSERT, "(!s_transientsSyncing)", (const char *)&queryFormat, "!s_transientsSyncing") )
    __debugbreak();
  v0 = 0i64;
  do
  {
    if ( !DB_Transients_IsRegisteredSPTransient(v0) || (DB_Transients_GetSPTransientZoneFlags(v0) & 0x4000) != 0 )
      s_transientZones[v0] = 0i64;
    v0 = (unsigned int)(v0 + 1);
  }
  while ( (unsigned int)v0 < 0x20 );
}

/*
==============
CL_TransientsSP_OnUnloadAll
==============
*/
void CL_TransientsSP_OnUnloadAll(void)
{
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_transients_sp.cpp", 1374, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  CL_TransientsSP_HardSyncNow();
  if ( s_transientsSyncing && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_transients_sp.cpp", 1379, ASSERT_TYPE_ASSERT, "(!s_transientsSyncing)", (const char *)&queryFormat, "!s_transientsSyncing") )
    __debugbreak();
  memset_0(s_transientZones, 0, sizeof(s_transientZones));
}

/*
==============
CL_TransientsSP_PauseGameWaitFor
==============
*/
void CL_TransientsSP_PauseGameWaitFor(int transientIndex)
{
  __int64 v1; 
  char v2; 
  bool *p_pauseGame; 
  int v4; 
  __int64 v5; 
  __int64 v6; 

  v1 = transientIndex;
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_transients_sp.cpp", 752, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  v2 = 0;
  p_pauseGame = &s_transientZones[1].pauseGame;
  v4 = 2;
  v5 = 0i64;
  v6 = 2i64;
  do
  {
    if ( ((_DWORD)v1 == -1 || v1 == v5) && (unsigned int)(*(_DWORD *)(p_pauseGame - 15) - 1) <= 2 )
    {
      *(p_pauseGame - 8) = 1;
      v2 = 1;
    }
    if ( ((_DWORD)v1 == -1 || (_DWORD)v1 == v4 - 1) && (unsigned int)(*(_DWORD *)(p_pauseGame - 7) - 1) <= 2 )
    {
      *p_pauseGame = 1;
      v2 = 1;
    }
    if ( ((_DWORD)v1 == -1 || (_DWORD)v1 == v4) && (unsigned int)(*(_DWORD *)(p_pauseGame + 1) - 1) <= 2 )
    {
      p_pauseGame[8] = 1;
      v2 = 1;
    }
    if ( ((_DWORD)v1 == -1 || (_DWORD)v1 == v4 + 1) && (unsigned int)(*(_DWORD *)(p_pauseGame + 9) - 1) <= 2 )
    {
      p_pauseGame[16] = 1;
      v2 = 1;
    }
    if ( ((_DWORD)v1 == -1 || (_DWORD)v1 == v4 + 2) && (unsigned int)(*(_DWORD *)(p_pauseGame + 17) - 1) <= 2 )
    {
      p_pauseGame[24] = 1;
      v2 = 1;
    }
    if ( ((_DWORD)v1 == -1 || (_DWORD)v1 == v4 + 3) && (unsigned int)(*(_DWORD *)(p_pauseGame + 25) - 1) <= 2 )
    {
      p_pauseGame[32] = 1;
      v2 = 1;
    }
    if ( ((_DWORD)v1 == -1 || (_DWORD)v1 == v4 + 4) && (unsigned int)(*(_DWORD *)(p_pauseGame + 33) - 1) <= 2 )
    {
      p_pauseGame[40] = 1;
      v2 = 1;
    }
    if ( ((_DWORD)v1 == -1 || (_DWORD)v1 == v4 + 5) && (unsigned int)(*(_DWORD *)(p_pauseGame + 41) - 1) <= 2 )
    {
      p_pauseGame[48] = 1;
      v2 = 1;
    }
    if ( ((_DWORD)v1 == -1 || (_DWORD)v1 == v4 + 6) && (unsigned int)(*(_DWORD *)(p_pauseGame + 49) - 1) <= 2 )
    {
      p_pauseGame[56] = 1;
      v2 = 1;
    }
    if ( ((_DWORD)v1 == -1 || (_DWORD)v1 == v4 + 7) && (unsigned int)(*(_DWORD *)(p_pauseGame + 57) - 1) <= 2 )
    {
      p_pauseGame[64] = 1;
      v2 = 1;
    }
    if ( ((_DWORD)v1 == -1 || (_DWORD)v1 == v4 + 8) && (unsigned int)(*(_DWORD *)(p_pauseGame + 65) - 1) <= 2 )
    {
      p_pauseGame[72] = 1;
      v2 = 1;
    }
    if ( ((_DWORD)v1 == -1 || (_DWORD)v1 == v4 + 9) && (unsigned int)(*(_DWORD *)(p_pauseGame + 73) - 1) <= 2 )
    {
      p_pauseGame[80] = 1;
      v2 = 1;
    }
    if ( ((_DWORD)v1 == -1 || (_DWORD)v1 == v4 + 10) && (unsigned int)(*(_DWORD *)(p_pauseGame + 81) - 1) <= 2 )
    {
      p_pauseGame[88] = 1;
      v2 = 1;
    }
    if ( ((_DWORD)v1 == -1 || (_DWORD)v1 == v4 + 11) && (unsigned int)(*(_DWORD *)(p_pauseGame + 89) - 1) <= 2 )
    {
      p_pauseGame[96] = 1;
      v2 = 1;
    }
    if ( ((_DWORD)v1 == -1 || (_DWORD)v1 == v4 + 12) && (unsigned int)(*(_DWORD *)(p_pauseGame + 97) - 1) <= 2 )
    {
      p_pauseGame[104] = 1;
      v2 = 1;
    }
    if ( ((_DWORD)v1 == -1 || (_DWORD)v1 == v4 + 13) && (unsigned int)(*(_DWORD *)(p_pauseGame + 105) - 1) <= 2 )
    {
      p_pauseGame[112] = 1;
      v2 = 1;
    }
    v4 += 16;
    v5 += 16i64;
    p_pauseGame += 128;
    --v6;
  }
  while ( v6 );
  if ( v2 )
  {
    s_transientWaitForAll = 1;
    s_transientsSP_yieldingToImages = 0;
  }
}

/*
==============
CL_TransientsSP_Poll
==============
*/
void CL_TransientsSP_Poll()
{
  XTransientZoneInfo *v0; 
  unsigned int i; 
  const char *v2; 
  int v3; 
  const char *SPTransientName; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_transients_sp.cpp", 879, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "CL_PollTransientAsyncCompleted");
  v0 = s_transientZones;
  for ( i = 0; i < 0x20; ++i )
  {
    if ( v0->mode == 2 )
    {
      if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_transients_sp.cpp", 837, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
        __debugbreak();
      if ( v0->mode != 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_transients_sp.cpp", 838, ASSERT_TYPE_ASSERT, "(s_transientZones[transientIndex].mode == TransientSPZoneState::LOADING)", (const char *)&queryFormat, "s_transientZones[transientIndex].mode == TransientSPZoneState::LOADING") )
        __debugbreak();
      SPTransientName = DB_Transients_GetSPTransientName(i);
      if ( !SPTransientName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_transients_sp.cpp", 841, ASSERT_TYPE_ASSERT, "(filename)", (const char *)&queryFormat, "filename") )
        __debugbreak();
      if ( DB_PollFastfileState(SPTransientName) == AWAITING_COMMIT )
      {
        if ( DB_Transients_VerbosePrint() )
          Com_Printf(16, "TRANSIENT_CL: Load complete for '%s'.\n", SPTransientName);
        v0->mode = 4;
        if ( v0->gameSystemsLoaded )
        {
          v3 = 850;
LABEL_35:
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_transients_sp.cpp", v3, ASSERT_TYPE_ASSERT, "(!s_transientZones[transientIndex].gameSystemsLoaded)", (const char *)&queryFormat, "!s_transientZones[transientIndex].gameSystemsLoaded") )
            __debugbreak();
        }
      }
    }
    else if ( v0->mode == 6 )
    {
      if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_transients_sp.cpp", 857, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
        __debugbreak();
      if ( v0->mode != 6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_transients_sp.cpp", 858, ASSERT_TYPE_ASSERT, "(s_transientZones[transientIndex].mode == TransientSPZoneState::UNLOADING)", (const char *)&queryFormat, "s_transientZones[transientIndex].mode == TransientSPZoneState::UNLOADING") )
        __debugbreak();
      v2 = DB_Transients_GetSPTransientName(i);
      if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_transients_sp.cpp", 861, ASSERT_TYPE_ASSERT, "(filename)", (const char *)&queryFormat, "filename") )
        __debugbreak();
      if ( DB_Zones_GetZoneIndexFromName(v2) == 0xFFFF )
      {
        if ( DB_Transients_VerbosePrint() )
          Com_Printf(16, "TRANSIENT_CL: Unload complete for '%s'.\n", v2);
        v0->mode = 0;
        if ( v0->gameSystemsLoaded )
        {
          v3 = 870;
          goto LABEL_35;
        }
      }
    }
    ++v0;
  }
  Sys_ProfEndNamedEvent();
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "Game System Transient Load");
  if ( !SV_DemoSP_IsInReadTransientStateSync() )
    CL_TransientsSP_GameSystemsLoad();
  Sys_ProfEndNamedEvent();
}

/*
==============
CL_TransientsSP_PopIgnoreLevelTransientUnloads
==============
*/
void CL_TransientsSP_PopIgnoreLevelTransientUnloads(void)
{
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_transients_sp.cpp", 1508, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( !s_ignoreLevelTransientUnloads && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_transients_sp.cpp", 1509, ASSERT_TYPE_ASSERT, "(s_ignoreLevelTransientUnloads)", (const char *)&queryFormat, "s_ignoreLevelTransientUnloads") )
    __debugbreak();
  s_ignoreLevelTransientUnloads = 0;
}

/*
==============
CL_TransientsSP_PopImmediateProcessTransients
==============
*/
void CL_TransientsSP_PopImmediateProcessTransients(void)
{
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_transients_sp.cpp", 1487, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( !s_immediateProcessTransients && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_transients_sp.cpp", 1488, ASSERT_TYPE_ASSERT, "(s_immediateProcessTransients)", (const char *)&queryFormat, "s_immediateProcessTransients") )
    __debugbreak();
  DynEntCL_ImmediateDynEntityListSyncEnd();
  s_immediateProcessTransients = 0;
}

/*
==============
CL_TransientsSP_Process
==============
*/
void CL_TransientsSP_Process(void)
{
  CL_TransientsSP_ProcessWithGpuWait(0);
}

/*
==============
CL_TransientsSP_ProcessInternal
==============
*/
char CL_TransientsSP_ProcessInternal(const bool waitForGPU)
{
  bool v2; 
  int WantedSyncType; 
  int v4; 
  int v5; 
  int v6; 
  int v7; 
  bool v8; 
  unsigned int ResumeArray; 
  unsigned int LoadArray; 
  bool v12; 
  bool v13; 
  DB_FastfileInfo resume; 
  DB_FastfileInfo load; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_transients_sp.cpp", 1844, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  v2 = s_transientsSyncing;
  CL_TransientsSP_ProcessRequests(s_transientsSyncing);
  WantedSyncType = CL_TransientsSP_GetWantedSyncType();
  if ( !WantedSyncType )
    return 0;
  if ( SV_IsDemoPlaying() )
  {
    v2 = 1;
    if ( s_transientsSP_yieldingToImages && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_transients_sp.cpp", 1879, ASSERT_TYPE_ASSERT, "(!s_transientsSP_yieldingToImages)", "%s\n\tShould not yield to images during demo playback", "!s_transientsSP_yieldingToImages") )
      __debugbreak();
    if ( s_transientDemoSyncPlayback != WantedSyncType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_transients_sp.cpp", 1880, ASSERT_TYPE_ASSERT, "( s_transientDemoSyncPlayback ) == ( wantedSyncType )", "%s == %s\n\t%i, %i", "s_transientDemoSyncPlayback", "wantedSyncType", s_transientDemoSyncPlayback, WantedSyncType) )
      __debugbreak();
  }
  if ( ((unsigned __int8)s_transientSyncState & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", s_transientSyncState) )
    __debugbreak();
  _InterlockedCompareExchange(s_transientSyncState, 1, 0);
  if ( !s_transientSyncState[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_transients_sp.cpp", 1886, ASSERT_TYPE_ASSERT, "(s_transientSyncState != CL_TRANSIENT_SERVERSYNC_IDLE)", (const char *)&queryFormat, "s_transientSyncState != CL_TRANSIENT_SERVERSYNC_IDLE") )
    __debugbreak();
  if ( !v2 )
  {
    if ( s_transientSyncState[0] == 2 )
      goto LABEL_26;
    if ( DB_Transients_VerbosePrint() )
      Com_Printf(16, "TRANSIENT_CL: Waiting for server to stop.\n");
    return 0;
  }
  if ( !Sys_IsDatabaseReady() )
    CL_TransientsSP_BlockForLoadDBCompletion();
  while ( s_transientSyncState[0] != 2 )
  {
    Sys_CheckQuitRequest();
    Sys_Sleep(0);
  }
  if ( s_transientSyncState[0] != 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_transients_sp.cpp", 1897, ASSERT_TYPE_ASSERT, "(s_transientSyncState == CL_TRANSIENT_SERVERSYNC_SERVER_HALTED)", (const char *)&queryFormat, "s_transientSyncState == CL_TRANSIENT_SERVERSYNC_SERVER_HALTED") )
    __debugbreak();
LABEL_26:
  CL_TransientsSP_ClientCodeSync();
  if ( s_transientDemoSyncRecord && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_transients_sp.cpp", 1913, ASSERT_TYPE_ASSERT, "(s_transientDemoSyncRecord == TransientDemoSyncType::NONE)", (const char *)&queryFormat, "s_transientDemoSyncRecord == TransientDemoSyncType::NONE") )
    __debugbreak();
  s_transientDemoSyncRecord = WantedSyncType;
  if ( !SV_IsDemoPlaying() )
    SV_DemoSP_RecordTransientState(WantedSyncType);
  v4 = WantedSyncType - 1;
  if ( v4 )
  {
    v5 = v4 - 1;
    if ( !v5 )
    {
      CL_TransientsSP_ProcessPause();
      goto LABEL_81;
    }
    v6 = v5 - 1;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( !v7 )
      {
        if ( s_transientSyncState[0] != 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_transients_sp.cpp", 2134, ASSERT_TYPE_ASSERT, "(s_transientSyncState == CL_TRANSIENT_SERVERSYNC_SERVER_HALTED)", (const char *)&queryFormat, "s_transientSyncState == CL_TRANSIENT_SERVERSYNC_SERVER_HALTED") )
          __debugbreak();
        if ( !DB_IsTransientSPGameWaitingForPostLoad() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_transients_sp.cpp", 1756, ASSERT_TYPE_ASSERT, "(DB_IsTransientSPGameWaitingForPostLoad())", (const char *)&queryFormat, "DB_IsTransientSPGameWaitingForPostLoad()") )
          __debugbreak();
        DB_TransientSPPostLoadStart();
        CL_TransientsSP_Poll();
        DB_TransientSPPostLoadEnd();
        goto LABEL_81;
      }
      if ( v7 != 1 )
      {
        v8 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_transients_sp.cpp", 1955, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Bad transient sync type");
        goto LABEL_79;
      }
      CL_TransientsSP_ProcessUnload(waitForGPU);
      goto LABEL_81;
    }
    if ( s_transientSyncState[0] != 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_transients_sp.cpp", 2134, ASSERT_TYPE_ASSERT, "(s_transientSyncState == CL_TRANSIENT_SERVERSYNC_SERVER_HALTED)", (const char *)&queryFormat, "s_transientSyncState == CL_TRANSIENT_SERVERSYNC_SERVER_HALTED") )
      __debugbreak();
    if ( s_transientsSP_yieldingToImages && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_transients_sp.cpp", 1603, ASSERT_TYPE_ASSERT, "(!s_transientsSP_yieldingToImages)", (const char *)&queryFormat, "!s_transientsSP_yieldingToImages") )
      __debugbreak();
    ResumeArray = CL_TransientsSP_GetResumeArray(&resume);
    if ( DB_IsTransientSPGameWaitingForPostLoad() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_transients_sp.cpp", 1607, ASSERT_TYPE_ASSERT, "(!DB_IsTransientSPGameWaitingForPostLoad())", (const char *)&queryFormat, "!DB_IsTransientSPGameWaitingForPostLoad()") )
      __debugbreak();
    if ( !ResumeArray && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_transients_sp.cpp", 1608, ASSERT_TYPE_ASSERT, "(resumeCount)", (const char *)&queryFormat, "resumeCount") )
      __debugbreak();
    Sys_ProfBeginNamedEvent(0xFFFFFFFF, "DB_LoadXAssets-Resume");
    DB_UnpauseLoadFastfiles(&resume, ResumeArray);
  }
  else
  {
    if ( s_transientSyncState[0] != 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_transients_sp.cpp", 2134, ASSERT_TYPE_ASSERT, "(s_transientSyncState == CL_TRANSIENT_SERVERSYNC_SERVER_HALTED)", (const char *)&queryFormat, "s_transientSyncState == CL_TRANSIENT_SERVERSYNC_SERVER_HALTED") )
      __debugbreak();
    if ( DB_IsTransientSPGameWaitingForPostLoad() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_transients_sp.cpp", 1629, ASSERT_TYPE_ASSERT, "(!DB_IsTransientSPGameWaitingForPostLoad())", (const char *)&queryFormat, "!DB_IsTransientSPGameWaitingForPostLoad()") )
      __debugbreak();
    if ( s_transientsSP_yieldingToImages && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_transients_sp.cpp", 1630, ASSERT_TYPE_ASSERT, "(!s_transientsSP_yieldingToImages)", (const char *)&queryFormat, "!s_transientsSP_yieldingToImages") )
      __debugbreak();
    LoadArray = CL_TransientsSP_GetLoadArray(&load);
    if ( !LoadArray && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_transients_sp.cpp", 1634, ASSERT_TYPE_ASSERT, "(loadCount)", (const char *)&queryFormat, "loadCount") )
      __debugbreak();
    Sys_ProfBeginNamedEvent(0xFFFFFFFF, "DB_LoadXAssets-Load");
    DB_LoadFastfiles(&load, LoadArray, 2u, 0);
  }
  Sys_ProfEndNamedEvent();
  if ( s_transientsSyncing )
  {
    R_SyncRenderThread();
    DB_SyncDatabaseCompleted();
    if ( !DB_IsTransientSPGameWaitingForPostLoad() )
    {
      v8 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_transients_sp.cpp", 1572, ASSERT_TYPE_ASSERT, "(DB_IsTransientSPGameWaitingForPostLoad())", (const char *)&queryFormat, "DB_IsTransientSPGameWaitingForPostLoad()");
LABEL_79:
      if ( v8 )
        __debugbreak();
    }
LABEL_81:
    if ( s_transientsSyncing )
    {
      CL_TransientsSP_ProcessRequests(1);
      if ( !CL_TransientsSP_IsWorkRequired() )
      {
        v12 = DB_AreFastfileLoadsCompleted();
        v13 = s_transientsSyncing;
        if ( v12 )
          v13 = 0;
        s_transientsSyncing = v13;
      }
    }
  }
  if ( ((unsigned __int64)s_transientSyncState & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", s_transientSyncState) )
    __debugbreak();
  if ( _InterlockedCompareExchange(s_transientSyncState, 0, 2) != 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_transients_sp.cpp", 1971, ASSERT_TYPE_ASSERT, "(Sys_InterlockedCompareExchange( &s_transientSyncState, CL_TRANSIENT_SERVERSYNC_IDLE, CL_TRANSIENT_SERVERSYNC_SERVER_HALTED ) == CL_TRANSIENT_SERVERSYNC_SERVER_HALTED)", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &s_transientSyncState, CL_TRANSIENT_SERVERSYNC_IDLE, CL_TRANSIENT_SERVERSYNC_SERVER_HALTED ) == CL_TRANSIENT_SERVERSYNC_SERVER_HALTED") )
    __debugbreak();
  return 1;
}

/*
==============
CL_TransientsSP_ProcessPause
==============
*/
void CL_TransientsSP_ProcessPause()
{
  unsigned int v0; 
  unsigned int v1; 
  XTransientZoneInfo *v2; 
  const char *SPTransientName; 
  __int64 v4; 
  __int64 v5; 
  DB_FastfileInfo zoneInfo[32]; 

  if ( s_transientSyncState[0] != 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_transients_sp.cpp", 2134, ASSERT_TYPE_ASSERT, "(s_transientSyncState == CL_TRANSIENT_SERVERSYNC_SERVER_HALTED)", (const char *)&queryFormat, "s_transientSyncState == CL_TRANSIENT_SERVERSYNC_SERVER_HALTED") )
    __debugbreak();
  v0 = 0;
  if ( !SV_IsDemoPlaying() && !s_transientsSP_yieldingToImages && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_transients_sp.cpp", 1071, ASSERT_TYPE_ASSERT, "(s_transientsSP_yieldingToImages)", (const char *)&queryFormat, "s_transientsSP_yieldingToImages") )
    __debugbreak();
  v1 = 0;
  v2 = s_transientZones;
  do
  {
    if ( v2->mode == 2 )
    {
      if ( v0 >= 0x20 )
      {
        LODWORD(v5) = 32;
        LODWORD(v4) = v0;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_transients_sp.cpp", 1048, ASSERT_TYPE_ASSERT, "(unsigned)( ( *zoneCount ) ) < (unsigned)( MAX_TRANSIENT_SP_FASTFILES )", "( *zoneCount ) doesn't index MAX_TRANSIENT_SP_FASTFILES\n\t%i not in [0, %i)", v4, v5) )
          __debugbreak();
      }
      zoneInfo[v0].name = DB_Transients_GetSPTransientName(v1);
      zoneInfo[v0].zoneFlags = DB_Transients_GetSPTransientZoneFlags(v1);
      *(_QWORD *)&zoneInfo[v0].failureMode = 0i64;
      if ( v2->gameSystemsLoaded && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_transients_sp.cpp", 1055, ASSERT_TYPE_ASSERT, "(!s_transientZones[zoneIndex].gameSystemsLoaded)", (const char *)&queryFormat, "!s_transientZones[zoneIndex].gameSystemsLoaded") )
        __debugbreak();
      ++v0;
      v2->mode = 3;
      if ( DB_Transients_VerbosePrint() )
      {
        SPTransientName = DB_Transients_GetSPTransientName(v1);
        Com_Printf(16, "TRANSIENT_CL: Pausing of transient '%s'.\n", SPTransientName);
      }
    }
    ++v1;
    ++v2;
  }
  while ( v1 < 0x20 );
  if ( !v0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_transients_sp.cpp", 1584, ASSERT_TYPE_ASSERT, "(pauseCount)", (const char *)&queryFormat, "pauseCount") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "DB_LoadXAssets-Pause");
  DB_PauseLoadFastfiles(zoneInfo, v0);
  Sys_ProfEndNamedEvent();
  if ( s_transientsSyncing )
  {
    R_SyncRenderThread();
    DB_SyncDatabaseCompleted();
    if ( !DB_IsTransientSPGameWaitingForPostLoad() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_transients_sp.cpp", 1572, ASSERT_TYPE_ASSERT, "(DB_IsTransientSPGameWaitingForPostLoad())", (const char *)&queryFormat, "DB_IsTransientSPGameWaitingForPostLoad()") )
      __debugbreak();
  }
}

/*
==============
CL_TransientsSP_ProcessRequests
==============
*/
void CL_TransientsSP_ProcessRequests(bool forceSync)
{
  __int64 v2; 
  unsigned int v3; 
  XTransientZoneInfo *v4; 
  const char *SPTransientName; 
  const char *v6; 
  const char *v7; 
  const char *v8; 
  const char *v9; 
  __int64 v10; 
  bool v11; 
  const char *v12; 
  __int64 v13; 
  __int64 v14; 
  DB_FastfileInfo zoneInfo[32]; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_transients_sp.cpp", 319, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  v2 = 0i64;
  CL_TransientsSP_ProcessStreamingPriority(forceSync);
  v3 = 0;
  v4 = s_transientZones;
  do
  {
    switch ( v4->mode )
    {
      case 0:
        if ( v4->wantsToBeLoaded )
        {
          if ( DB_Transients_VerbosePrint() )
          {
            SPTransientName = DB_Transients_GetSPTransientName(v3);
            Com_Printf(16, "TRANSIENT_CL: Queuing transient '%s' for load.\n", SPTransientName);
          }
          v4->mode = 1;
        }
        break;
      case 1:
        if ( !v4->wantsToBeLoaded )
        {
          if ( DB_Transients_VerbosePrint() )
          {
            v6 = DB_Transients_GetSPTransientName(v3);
            Com_Printf(16, "TRANSIENT_CL: Canceling load for '%s'.\n", v6);
          }
          v4->mode = 0;
        }
        break;
      case 2:
      case 3:
        if ( !v4->wantsToBeLoaded )
        {
          v9 = DB_Transients_GetSPTransientName(v3);
          if ( DB_Transients_VerbosePrint() )
            Com_Printf(16, "TRANSIENT_CL: Cancelling load for '%s'.\n", v9);
          if ( (unsigned int)v2 >= 0x20 )
          {
            LODWORD(v14) = 32;
            LODWORD(v13) = v2;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_transients_sp.cpp", 159, ASSERT_TYPE_ASSERT, "(unsigned)( *numCancelRequests ) < (unsigned)( MAX_TRANSIENT_SP_FASTFILES )", "*numCancelRequests doesn't index MAX_TRANSIENT_SP_FASTFILES\n\t%i not in [0, %i)", v13, v14) )
              __debugbreak();
          }
          v10 = v2;
          zoneInfo[v2].name = v9;
          zoneInfo[v2].zoneFlags = DB_Transients_GetSPTransientZoneFlags(v3);
          v2 = (unsigned int)(v2 + 1);
          *(_QWORD *)&zoneInfo[v10].failureMode = 0i64;
          v11 = !v4->gameSystemsLoaded;
          v4->mode = 7;
          if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_transients_sp.cpp", 171, ASSERT_TYPE_ASSERT, "(!s_transientZones[zoneIndex].gameSystemsLoaded)", (const char *)&queryFormat, "!s_transientZones[zoneIndex].gameSystemsLoaded") )
            goto LABEL_28;
        }
        break;
      case 4:
        if ( !v4->wantsToBeLoaded )
        {
          if ( s_ignoreLevelTransientUnloads )
          {
            v7 = DB_Transients_GetSPTransientName(v3);
            Com_Printf(16, "TRANSIENT_CL: Keep around '%s'\n", v7);
          }
          else
          {
            if ( DB_Transients_VerbosePrint() )
            {
              v8 = DB_Transients_GetSPTransientName(v3);
              Com_Printf(16, "TRANSIENT_CL: Queuing transient '%s' for unload.\n", v8);
            }
            v4->mode = 5;
          }
        }
        break;
      case 5:
        if ( v4->wantsToBeLoaded )
        {
          if ( DB_Transients_VerbosePrint() )
          {
            v12 = DB_Transients_GetSPTransientName(v3);
            Com_Printf(16, "TRANSIENT_CL: Cancelling queued unload for '%s'. We want it loaded again.\n", v12);
          }
          v4->mode = 4;
        }
        break;
      case 7:
        if ( v4->gameSystemsLoaded && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_transients_sp.cpp", 394, ASSERT_TYPE_ASSERT, "(!s_transientZones[i].gameSystemsLoaded)", (const char *)&queryFormat, "!s_transientZones[i].gameSystemsLoaded") )
LABEL_28:
          __debugbreak();
        break;
      default:
        break;
    }
    ++v3;
    ++v4;
  }
  while ( v3 < 0x20 );
  if ( (_DWORD)v2 )
    DB_CancelLoadFastfiles(zoneInfo, v2);
}

/*
==============
CL_TransientsSP_ProcessStreamingPriority
==============
*/
void CL_TransientsSP_ProcessStreamingPriority(bool forceSync)
{
  int v4; 
  const dvar_t *v5; 
  const dvar_t *v6; 
  char v8; 
  const dvar_t *v10; 
  const dvar_t *v11; 

  if ( !SV_IsDemoPlaying() && !forceSync )
  {
    __asm { vmovaps [rsp+58h+var_18], xmm6 }
    v4 = Sys_Milliseconds();
    if ( !s_transientsSP_yieldingToImages )
    {
      if ( !s_transientWaitForAll )
      {
        v10 = DVARBOOL_cl_transient_sp_yield_for_streamer;
        if ( !DVARBOOL_cl_transient_sp_yield_for_streamer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_transient_sp_yield_for_streamer") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v10);
        if ( v10->current.enabled && Stream_CanStreamMore() )
        {
          v11 = DCONST_DVARINT_cl_transient_sp_stream_minimum_time;
          if ( !DCONST_DVARINT_cl_transient_sp_stream_minimum_time && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_transient_sp_stream_minimum_time") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v11);
          if ( v4 > s_transientsSP_lastYieldEndTime + v11->current.integer )
          {
            *(double *)&_XMM0 = Stream_LoadQuality_Image();
            __asm { vmovaps xmm6, xmm0 }
            *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_cl_transient_sp_yield_start_priority, "cl_transient_sp_yield_start_priority");
            __asm { vcomiss xmm6, xmm0 }
            if ( v8 )
            {
              s_transientsSP_yieldingToImages = 1;
              s_transientsSP_lastYieldStartTime = v4;
              if ( DB_Transients_VerbosePrint() )
                Com_Printf(16, "Yield for streamer starting at %d milliseconds\n", (unsigned int)s_transientsSP_lastYieldStartTime);
            }
          }
        }
      }
      goto LABEL_20;
    }
    if ( !s_transientWaitForAll )
    {
      v5 = DVARBOOL_cl_transient_sp_yield_for_streamer;
      if ( !DVARBOOL_cl_transient_sp_yield_for_streamer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_transient_sp_yield_for_streamer") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v5);
      if ( v5->current.enabled )
      {
        v6 = DCONST_DVARINT_cl_transient_sp_yield_timeout;
        if ( !DCONST_DVARINT_cl_transient_sp_yield_timeout && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_transient_sp_yield_timeout") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v6);
        if ( v4 <= s_transientsSP_lastYieldStartTime + v6->current.integer )
        {
          if ( Stream_CanStreamMore() )
          {
            if ( v4 <= s_transientsSP_lastYieldStartTime + Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_cl_transient_sp_yield_minimum_time, "cl_transient_sp_yield_minimum_time") )
              goto LABEL_20;
            *(double *)&_XMM0 = Stream_LoadQuality_Image();
            __asm { vmovaps xmm6, xmm0 }
            *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_cl_transient_sp_yield_end_priority, "cl_transient_sp_yield_end_priority");
            __asm { vcomiss xmm6, xmm0 }
            if ( v8 )
              goto LABEL_20;
          }
        }
        else if ( DB_Transients_VerbosePrint() )
        {
          Com_Printf(16, "Yield for streamer timed out after %d milliseconds\n", (unsigned int)(v4 - s_transientsSP_lastYieldStartTime));
        }
      }
    }
    s_transientsSP_yieldingToImages = 0;
    s_transientsSP_lastYieldEndTime = v4;
    if ( DB_Transients_VerbosePrint() )
      Com_Printf(16, "Yield for streamer ended at %d milliseconds (duration %d milliseconds)\n", (unsigned int)s_transientsSP_lastYieldEndTime, (unsigned int)(s_transientsSP_lastYieldEndTime - s_transientsSP_lastYieldStartTime));
LABEL_20:
    __asm { vmovaps xmm6, [rsp+58h+var_18] }
    return;
  }
  s_transientsSP_yieldingToImages = 0;
}

/*
==============
CL_TransientsSP_ProcessUnload
==============
*/
void CL_TransientsSP_ProcessUnload(const bool waitForGPU)
{
  unsigned int UnloadArray; 
  bool *transientLoaded; 
  unsigned int v4; 
  unsigned int i; 
  BOOL v6; 
  const char *SPTransientName; 
  bool *p_wantsToBeLoaded; 
  int v9; 
  BOOL v10; 
  const char *v11; 
  char *fmt; 
  DB_FastfileInfo info; 

  if ( s_transientSyncState[0] != 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_transients_sp.cpp", 2134, ASSERT_TYPE_ASSERT, "(s_transientSyncState == CL_TRANSIENT_SERVERSYNC_SERVER_HALTED)", (const char *)&queryFormat, "s_transientSyncState == CL_TRANSIENT_SERVERSYNC_SERVER_HALTED") )
    __debugbreak();
  if ( DB_IsTransientSPGameWaitingForPostLoad() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_transients_sp.cpp", 1520, ASSERT_TYPE_ASSERT, "(!DB_IsTransientSPGameWaitingForPostLoad())", (const char *)&queryFormat, "!DB_IsTransientSPGameWaitingForPostLoad()") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "Game System Transient Unload");
  CL_TransientsSP_GameSystemsUnload(0);
  Sys_ProfEndNamedEvent();
  UnloadArray = CL_TransientsSP_GetUnloadArray(&info, waitForGPU);
  if ( !UnloadArray )
  {
    transientLoaded = level.transientLoaded;
    v4 = 0;
    for ( i = 0; i < 0x20; ++i )
    {
      v6 = *transientLoaded;
      SPTransientName = DB_Transients_GetSPTransientName(i);
      Com_Printf(0, "Server state: %s %d\n", SPTransientName, v6);
      ++transientLoaded;
    }
    p_wantsToBeLoaded = &s_transientZones[0].wantsToBeLoaded;
    do
    {
      v9 = *((_DWORD *)p_wantsToBeLoaded - 1);
      v10 = *p_wantsToBeLoaded;
      v11 = DB_Transients_GetSPTransientName(v4);
      LODWORD(fmt) = v9;
      Com_Printf(0, "Client state: %s %d %d\n", v11, v10, fmt);
      ++v4;
      p_wantsToBeLoaded += 8;
    }
    while ( v4 < 0x20 );
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_transients_sp.cpp", 1550, ASSERT_TYPE_ASSERT, "(arraySize > 0)", (const char *)&queryFormat, "arraySize > 0") )
      __debugbreak();
  }
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "DB_LoadXAssets-Unload");
  DB_UnloadFastfiles(&info, UnloadArray, 3u);
  Sys_ProfEndNamedEvent();
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "Poll Transient Unload");
  CL_TransientsSP_Poll();
  Sys_ProfEndNamedEvent();
}

/*
==============
CL_TransientsSP_ProcessWithGpuWait
==============
*/
void CL_TransientsSP_ProcessWithGpuWait(const bool waitForGPU)
{
  TransientDemoSyncType v1; 
  bool v2; 
  TransientDemoSyncType v3; 
  TransientDemoSyncType v4; 

  if ( s_transientDemoSyncRecord )
  {
    CL_TransientsSP_UpdatePauseGame(1);
    return;
  }
  if ( CL_TransientsSP_ProcessInternal(waitForGPU) )
  {
    v1 = s_transientDemoSyncRecord;
    if ( s_transientDemoSyncRecord == NONE )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_transients_sp.cpp", 1991, ASSERT_TYPE_ASSERT, "(s_transientDemoSyncRecord != TransientDemoSyncType::NONE)", (const char *)&queryFormat, "s_transientDemoSyncRecord != TransientDemoSyncType::NONE") )
        __debugbreak();
      v1 = s_transientDemoSyncRecord;
    }
    if ( s_transientDemoSyncPlayback == NONE || v1 == s_transientDemoSyncPlayback )
      goto LABEL_15;
    v4 = s_transientDemoSyncPlayback;
    v3 = v1;
    v2 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_transients_sp.cpp", 1996, ASSERT_TYPE_ASSERT, "( s_transientDemoSyncRecord ) == ( s_transientDemoSyncPlayback )", "%s == %s\n\t%i, %i", "s_transientDemoSyncRecord", "s_transientDemoSyncPlayback", v3, v4);
    goto LABEL_13;
  }
  if ( s_transientDemoSyncRecord )
  {
    v2 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_transients_sp.cpp", 2003, ASSERT_TYPE_ASSERT, "(s_transientDemoSyncRecord == TransientDemoSyncType::NONE)", (const char *)&queryFormat, "s_transientDemoSyncRecord == TransientDemoSyncType::NONE");
LABEL_13:
    if ( v2 )
      __debugbreak();
  }
LABEL_15:
  CL_TransientsSP_UpdatePauseGame(0);
}

/*
==============
CL_TransientsSP_PushIgnoreLevelTransientUnloads
==============
*/
void CL_TransientsSP_PushIgnoreLevelTransientUnloads(void)
{
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_transients_sp.cpp", 1500, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( s_ignoreLevelTransientUnloads && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_transients_sp.cpp", 1501, ASSERT_TYPE_ASSERT, "(!s_ignoreLevelTransientUnloads)", (const char *)&queryFormat, "!s_ignoreLevelTransientUnloads") )
    __debugbreak();
  s_ignoreLevelTransientUnloads = 1;
}

/*
==============
CL_TransientsSP_PushImmediateProcessTransients
==============
*/
void CL_TransientsSP_PushImmediateProcessTransients(void)
{
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_transients_sp.cpp", 1474, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( s_immediateProcessTransients && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_transients_sp.cpp", 1475, ASSERT_TYPE_ASSERT, "(!s_immediateProcessTransients)", (const char *)&queryFormat, "!s_immediateProcessTransients") )
    __debugbreak();
  DynEntCL_ImmediateDynEntityListSyncBegin();
  s_immediateProcessTransients = 1;
}

/*
==============
CL_TransientsSP_QueueLoad
==============
*/
void CL_TransientsSP_QueueLoad(int transientIndex)
{
  __int64 v1; 
  const char *SPTransientName; 

  v1 = transientIndex;
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_transients_sp.cpp", 785, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( DB_Transients_VerbosePrint() )
  {
    SPTransientName = DB_Transients_GetSPTransientName(v1);
    Com_Printf(16, "TRANSIENT_CL: Requesting transient '%s' for load.\n", SPTransientName);
  }
  s_transientZones[v1].wantsToBeLoaded = 1;
}

/*
==============
CL_TransientsSP_QueueSoftSync
==============
*/
void CL_TransientsSP_QueueSoftSync(void)
{
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_transients_sp.cpp", 1358, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( DB_Transients_VerbosePrint() )
    Com_Printf(16, "TRANSIENT_CL: CL_TransientsSP_QueueSoftSync\n");
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_transients_sp.cpp", 1363, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "This code pathway is dead") )
    __debugbreak();
  s_transientsSyncing = 1;
}

/*
==============
CL_TransientsSP_QueueUnload
==============
*/
void CL_TransientsSP_QueueUnload(int transientIndex)
{
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_transients_sp.cpp", 796, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  CL_TransientsSP_SetUnloadRequest(transientIndex);
}

/*
==============
CL_TransientsSP_QueueUnloadAll
==============
*/
void CL_TransientsSP_QueueUnloadAll(void)
{
  unsigned int v0; 
  bool *p_wantsToBeLoaded; 
  const char *SPTransientName; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_transients_sp.cpp", 806, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  v0 = 0;
  p_wantsToBeLoaded = &s_transientZones[0].wantsToBeLoaded;
  do
  {
    if ( *p_wantsToBeLoaded )
    {
      if ( DB_Transients_VerbosePrint() )
      {
        SPTransientName = DB_Transients_GetSPTransientName(v0);
        Com_Printf(16, "TRANSIENT_CL: Requesting transient '%s' for unload.\n", SPTransientName);
      }
      *p_wantsToBeLoaded = 0;
    }
    ++v0;
    p_wantsToBeLoaded += 8;
  }
  while ( v0 < 0x20 );
}

/*
==============
CL_TransientsSP_QueueUnloadLevel
==============
*/
void CL_TransientsSP_QueueUnloadLevel(void)
{
  unsigned int v0; 
  bool *p_wantsToBeLoaded; 
  const char *SPTransientName; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_transients_sp.cpp", 819, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  v0 = 0;
  p_wantsToBeLoaded = &s_transientZones[0].wantsToBeLoaded;
  do
  {
    if ( *p_wantsToBeLoaded && (DB_Transients_GetSPTransientZoneFlags(v0) & 0x4000) != 0 && *p_wantsToBeLoaded )
    {
      if ( DB_Transients_VerbosePrint() )
      {
        SPTransientName = DB_Transients_GetSPTransientName(v0);
        Com_Printf(16, "TRANSIENT_CL: Requesting transient '%s' for unload.\n", SPTransientName);
      }
      *p_wantsToBeLoaded = 0;
    }
    ++v0;
    p_wantsToBeLoaded += 8;
  }
  while ( v0 < 0x20 );
}

/*
==============
CL_TransientsSP_ServerAssetQueryHangFix
==============
*/
void CL_TransientsSP_ServerAssetQueryHangFix(void)
{
  s_transientServerAssetQueryHangFix = 1;
}

/*
==============
CL_TransientsSP_SetUnloadRequest
==============
*/
char CL_TransientsSP_SetUnloadRequest(const int transientIndex)
{
  __int64 v1; 
  const char *SPTransientName; 
  int v5; 

  v1 = transientIndex;
  if ( (unsigned int)transientIndex >= 0x20 )
  {
    v5 = 32;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_transients_sp.cpp", 123, ASSERT_TYPE_ASSERT, "(unsigned)( transientIndex ) < (unsigned)( MAX_TRANSIENT_SP_FASTFILES )", "transientIndex doesn't index MAX_TRANSIENT_SP_FASTFILES\n\t%i not in [0, %i)", transientIndex, v5) )
      __debugbreak();
  }
  if ( !s_transientZones[v1].wantsToBeLoaded )
    return 0;
  if ( DB_Transients_VerbosePrint() )
  {
    SPTransientName = DB_Transients_GetSPTransientName(v1);
    Com_Printf(16, "TRANSIENT_CL: Requesting transient '%s' for unload.\n", SPTransientName);
  }
  s_transientZones[v1].wantsToBeLoaded = 0;
  return 1;
}

/*
==============
CL_TransientsSP_SyncBlockClient
==============
*/
void CL_TransientsSP_SyncBlockClient()
{
  unsigned int v0; 
  bool *p_wantsToBeLoaded; 
  int v2; 
  const char *SPTransientName; 
  bool IsTransientSPGameWaitingForPostLoad; 
  unsigned int UnloadArray; 
  int v6; 
  XTransientZoneInfo *v7; 
  __int64 v8; 
  unsigned int ResumeArray; 
  unsigned int v10; 
  XTransientZoneInfo *v11; 
  int mode; 
  const char *v13; 
  unsigned int LoadArray; 
  unsigned int v15; 
  XTransientZoneInfo *v16; 
  int v17; 
  const char *v18; 
  __int64 v19; 
  DB_FastfileInfo info; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_transients_sp.cpp", 1258, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( !s_transientsSyncing && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_transients_sp.cpp", 1259, ASSERT_TYPE_ASSERT, "(s_transientsSyncing)", (const char *)&queryFormat, "s_transientsSyncing") )
    __debugbreak();
  CL_TransientsSP_ClientCodeSync();
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "CL_TransientsSP_SyncBlockClient");
  s_transientsSP_yieldingToImages = 0;
  if ( !DB_AreFastfileLoadsCompleted() )
  {
    DB_SyncXAssetsKeepAlive();
    if ( DB_IsTransientSPGameWaitingForPostLoad() )
    {
      DB_TransientSPPostLoadStart();
      CL_TransientsSP_Poll();
      DB_TransientSPPostLoadEnd();
    }
    if ( !DB_AreFastfileLoadsCompleted() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_transients_sp.cpp", 1271, ASSERT_TYPE_ASSERT, "(DB_AreFastfileLoadsCompleted())", (const char *)&queryFormat, "DB_AreFastfileLoadsCompleted()") )
      __debugbreak();
  }
  if ( DB_IsTransientSPGameWaitingForPostLoad() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_transients_sp.cpp", 1274, ASSERT_TYPE_ASSERT, "(!DB_IsTransientSPGameWaitingForPostLoad())", "%s\n\tStill waiting for post-load even though loads are completed", "!DB_IsTransientSPGameWaitingForPostLoad()") )
LABEL_15:
    __debugbreak();
  while ( 2 )
  {
    v0 = 0;
    p_wantsToBeLoaded = &s_transientZones[0].wantsToBeLoaded;
    while ( 1 )
    {
      v2 = *((_DWORD *)p_wantsToBeLoaded - 1);
      if ( !v2 )
        break;
      if ( v2 != 4 )
        goto LABEL_25;
      if ( !*p_wantsToBeLoaded )
      {
        if ( !s_ignoreLevelTransientUnloads )
          goto LABEL_25;
        SPTransientName = DB_Transients_GetSPTransientName(v0);
        Com_Printf(16, "TRANSIENT_CL: Keep around '%s'\n", SPTransientName);
      }
LABEL_23:
      ++v0;
      p_wantsToBeLoaded += 8;
      if ( v0 >= 0x20 )
      {
        IsTransientSPGameWaitingForPostLoad = DB_IsTransientSPGameWaitingForPostLoad();
        goto LABEL_26;
      }
    }
    if ( !*p_wantsToBeLoaded )
      goto LABEL_23;
LABEL_25:
    IsTransientSPGameWaitingForPostLoad = 1;
LABEL_26:
    if ( IsTransientSPGameWaitingForPostLoad )
    {
      CL_TransientsSP_GameSystemsUnload(0);
      UnloadArray = CL_TransientsSP_GetUnloadArray(&info, 0);
      if ( UnloadArray )
      {
        v6 = 0;
        if ( !DB_IsDoingSPHotLoad() )
          v6 = R_PopRemoteScreenUpdate();
        DB_UnloadFastfiles(&info, UnloadArray, 0);
        if ( !DB_IsDoingSPHotLoad() )
          R_PushRemoteScreenUpdate(v6);
        CL_TransientsSP_Poll();
        v7 = s_transientZones;
        v8 = 32i64;
        do
        {
          if ( (unsigned int)(v7->mode - 5) <= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_transients_sp.cpp", 1245, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Bad transient state!") )
            __debugbreak();
          ++v7;
          --v8;
        }
        while ( v8 );
      }
      if ( s_transientsSP_yieldingToImages && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_transients_sp.cpp", 1139, ASSERT_TYPE_ASSERT, "(!s_transientsSP_yieldingToImages)", (const char *)&queryFormat, "!s_transientsSP_yieldingToImages") )
        __debugbreak();
      ResumeArray = CL_TransientsSP_GetResumeArray(&info);
      if ( ResumeArray )
        DB_UnpauseLoadFastfiles(&info, ResumeArray);
      DB_SyncXAssetsKeepAlive();
      if ( DB_IsTransientSPGameWaitingForPostLoad() )
      {
        DB_TransientSPPostLoadStart();
        CL_TransientsSP_Poll();
        DB_TransientSPPostLoadEnd();
      }
      if ( !DB_AreFastfileLoadsCompleted() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_transients_sp.cpp", 1150, ASSERT_TYPE_ASSERT, "(DB_AreFastfileLoadsCompleted())", (const char *)&queryFormat, "DB_AreFastfileLoadsCompleted()") )
        __debugbreak();
      v10 = 0;
      v11 = s_transientZones;
      do
      {
        mode = v11->mode;
        if ( v11->mode >= 2 && (mode <= 3 || (unsigned int)(mode - 5) <= 2) )
        {
          v13 = DB_Transients_GetSPTransientName(v10);
          LODWORD(v19) = mode;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_transients_sp.cpp", 1161, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Bad transient state! %s (%d)", v13, v19) )
            __debugbreak();
        }
        ++v10;
        ++v11;
      }
      while ( v10 < 0x20 );
      if ( s_transientsSP_yieldingToImages && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_transients_sp.cpp", 1179, ASSERT_TYPE_ASSERT, "(!s_transientsSP_yieldingToImages)", (const char *)&queryFormat, "!s_transientsSP_yieldingToImages") )
        __debugbreak();
      LoadArray = CL_TransientsSP_GetLoadArray(&info);
      if ( LoadArray )
        DB_LoadFastfiles(&info, LoadArray, 2u, 0);
      DB_SyncXAssetsKeepAlive();
      if ( DB_IsTransientSPGameWaitingForPostLoad() )
      {
        DB_TransientSPPostLoadStart();
        CL_TransientsSP_Poll();
        DB_TransientSPPostLoadEnd();
      }
      if ( !DB_AreFastfileLoadsCompleted() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_transients_sp.cpp", 1190, ASSERT_TYPE_ASSERT, "(DB_AreFastfileLoadsCompleted())", (const char *)&queryFormat, "DB_AreFastfileLoadsCompleted()") )
        __debugbreak();
      v15 = 0;
      v16 = s_transientZones;
      do
      {
        v17 = v16->mode;
        if ( v16->mode > 0 && (v17 <= 3 || (unsigned int)(v17 - 5) <= 2) )
        {
          v18 = DB_Transients_GetSPTransientName(v15);
          LODWORD(v19) = v17;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_transients_sp.cpp", 1202, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Bad transient state! %s (%d)", v18, v19) )
            __debugbreak();
        }
        ++v15;
        ++v16;
      }
      while ( v15 < 0x20 );
      CL_TransientsSP_ProcessRequests(1);
      if ( !DB_AreFastfileLoadsCompleted() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_transients_sp.cpp", 1285, ASSERT_TYPE_ASSERT, "(DB_AreFastfileLoadsCompleted())", (const char *)&queryFormat, "DB_AreFastfileLoadsCompleted()") )
        __debugbreak();
      if ( !DB_IsTransientSPGameWaitingForPostLoad() || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_transients_sp.cpp", 1286, ASSERT_TYPE_ASSERT, "(!DB_IsTransientSPGameWaitingForPostLoad())", "%s\n\tStill waiting for post-load even though loads are completed", "!DB_IsTransientSPGameWaitingForPostLoad()") )
        continue;
      goto LABEL_15;
    }
    break;
  }
  s_transientsSyncing = 0;
  Sys_ProfEndNamedEvent();
  if ( DB_Transients_VerbosePrint() )
    Com_Printf(16, "TRANSIENT_CL: Sync Transients Ended\n");
}

/*
==============
CL_TransientsSP_SyncingIsIdle
==============
*/
bool CL_TransientsSP_SyncingIsIdle(void *__formal)
{
  return s_transientSyncState[0] == 0;
}

/*
==============
CL_TransientsSP_TransientsNeedDBWork
==============
*/
char CL_TransientsSP_TransientsNeedDBWork()
{
  unsigned int v0; 
  bool *p_wantsToBeLoaded; 
  int v2; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_transients_sp.cpp", 2208, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  v0 = 0;
  p_wantsToBeLoaded = &s_transientZones[0].wantsToBeLoaded;
  do
  {
    if ( p_wantsToBeLoaded[3] )
      return 1;
    v2 = *((_DWORD *)p_wantsToBeLoaded - 1);
    if ( v2 )
    {
      if ( v2 != 4 || !*p_wantsToBeLoaded )
        return 1;
    }
    else if ( *p_wantsToBeLoaded )
    {
      return 1;
    }
    ++v0;
    p_wantsToBeLoaded += 8;
  }
  while ( v0 < 0x20 );
  if ( DB_IsTransientSPGameWaitingForPostLoad() || s_transientPauseRequested )
    return 1;
  if ( CL_TransientsSP_HasPendingPauses() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_transients_sp.cpp", 2251, ASSERT_TYPE_ASSERT, "(!CL_TransientsSP_HasPendingPauses())", (const char *)&queryFormat, "!CL_TransientsSP_HasPendingPauses()") )
    __debugbreak();
  if ( CL_TransientsSP_HasPendingResumes() )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_transients_sp.cpp", 2252, ASSERT_TYPE_ASSERT, "(!CL_TransientsSP_HasPendingResumes())", (const char *)&queryFormat, "!CL_TransientsSP_HasPendingResumes()") )
      __debugbreak();
  }
  return 0;
}

/*
==============
CL_TransientsSP_TrySyncClient
==============
*/
bool CL_TransientsSP_TrySyncClient()
{
  if ( ((unsigned __int8)s_transientSyncState & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", s_transientSyncState) )
    __debugbreak();
  return _InterlockedCompareExchange(s_transientSyncState, 2, 1) == 1;
}

/*
==============
CL_TransientsSP_UpdatePauseGame
==============
*/
void CL_TransientsSP_UpdatePauseGame(const bool syncOperationSet)
{
  XTransientZoneInfo *v2; 
  unsigned int v3; 
  TransientSPZoneState mode; 
  bool v5; 
  __int64 v6; 
  __int64 v7; 

  if ( s_transientWaitForAll )
  {
    v2 = s_transientZones;
    v3 = 0;
    while ( 1 )
    {
      if ( v2->pauseGame )
      {
        mode = v2->mode;
        if ( v2->mode >= 8u )
        {
          LODWORD(v7) = 8;
          LODWORD(v6) = v2->mode;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_transients_sp.cpp", 1776, ASSERT_TYPE_ASSERT, "(unsigned)( zoneMode ) < (unsigned)( TransientSPZoneState::COUNT )", "zoneMode doesn't index TransientSPZoneState::COUNT\n\t%i not in [0, %i)", v6, v7) )
            __debugbreak();
        }
        if ( mode && (unsigned int)(mode - 4) > 3 )
          break;
      }
      ++v3;
      ++v2;
      if ( v3 >= 0x20 )
      {
        if ( DB_Transients_VerbosePrint() )
          Com_Printf(16, "TRANSIENT_CL: Requesting Unpause the game. All required fastfiles are loaded.\n");
        CL_TransientsSP_ClearPauseGame();
        return;
      }
    }
    v5 = syncOperationSet || s_transientSyncState[0] == 1;
    if ( Sys_IsDatabaseReady() && v5 )
    {
      if ( DB_Transients_VerbosePrint() )
        Com_Printf(16, "TRANSIENT_CL: Requesting Unpause the game until client and server sync is done.\n");
      s_transientPauseRequested = 0;
    }
    else
    {
      if ( DB_Transients_VerbosePrint() )
        Com_Printf(16, "TRANSIENT_CL: Requesting pause the game until required fastfiles are loaded.\n");
      s_transientPauseRequested = 1;
    }
  }
}

