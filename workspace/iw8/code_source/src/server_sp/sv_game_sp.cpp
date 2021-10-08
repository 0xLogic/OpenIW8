/*
==============
SvPersistentGlobalsSP::CheckOriginIsInPlayableBounds
==============
*/

bool __fastcall SvPersistentGlobalsSP::CheckOriginIsInPlayableBounds(SvPersistentGlobalsSP *this, const vec3_t *origin)
{
  return ?CheckOriginIsInPlayableBounds@SvPersistentGlobalsSP@@UEAA_NAEBTvec3_t@@@Z(this, origin);
}

/*
==============
SV_GameSP_RestartGameProgs_Shutdown
==============
*/

void __fastcall SV_GameSP_RestartGameProgs_Shutdown(int clearScripts)
{
  ?SV_GameSP_RestartGameProgs_Shutdown@@YAXH@Z(clearScripts);
}

/*
==============
SV_GameSP_SetCheckSum
==============
*/

void __fastcall SV_GameSP_SetCheckSum(int checksum)
{
  ?SV_GameSP_SetCheckSum@@YAXH@Z(checksum);
}

/*
==============
SvPersistentGlobalsSP::KeepPointInPlayableBounds
==============
*/

void __fastcall SvPersistentGlobalsSP::KeepPointInPlayableBounds(SvPersistentGlobalsSP *this, vec3_t *pos)
{
  ?KeepPointInPlayableBounds@SvPersistentGlobalsSP@@UEAAXAEATvec3_t@@@Z(this, pos);
}

/*
==============
SV_GameSP_CancelAndSyncTransients
==============
*/

void __fastcall SV_GameSP_CancelAndSyncTransients(bool levelsOnly)
{
  ?SV_GameSP_CancelAndSyncTransients@@YAX_N@Z(levelsOnly);
}

/*
==============
SV_GameSP_ShutdownGameProgs
==============
*/

void SV_GameSP_ShutdownGameProgs(void)
{
  ?SV_GameSP_ShutdownGameProgs@@YAXXZ();
}

/*
==============
SvGameModeAppSP::NotifyClientsSRE
==============
*/

void __fastcall SvGameModeAppSP::NotifyClientsSRE(SvGameModeAppSP *this, const char *message)
{
  ?NotifyClientsSRE@SvGameModeAppSP@@UEBAXPEBD@Z(this, message);
}

/*
==============
SV_GameSP_CheckLoadLevel
==============
*/

void __fastcall SV_GameSP_CheckLoadLevel(SaveGame *save)
{
  ?SV_GameSP_CheckLoadLevel@@YAXPEAUSaveGame@@@Z(save);
}

/*
==============
SV_GameSP_LevelTime
==============
*/

int __fastcall SV_GameSP_LevelTime()
{
  return ?SV_GameSP_LevelTime@@YAHXZ();
}

/*
==============
SV_GameSP_RestartGameProgs_Init
==============
*/

void __fastcall SV_GameSP_RestartGameProgs_Init(int randomSeed, int *savegame, SaveGame **save, int loadScripts)
{
  ?SV_GameSP_RestartGameProgs_Init@@YAXHPEAHPEAPEAUSaveGame@@H@Z(randomSeed, savegame, save, loadScripts);
}

/*
==============
SvGameModeAppSP::ShutdownGameProgs
==============
*/

void __fastcall SvGameModeAppSP::ShutdownGameProgs(SvGameModeAppSP *this)
{
  ?ShutdownGameProgs@SvGameModeAppSP@@UEBAXXZ(this);
}

/*
==============
SV_GameSP_GetCheckSum
==============
*/

int __fastcall SV_GameSP_GetCheckSum()
{
  return ?SV_GameSP_GetCheckSum@@YAHXZ();
}

/*
==============
SvGameModeAppSP::LogScriptError
==============
*/

void __fastcall SvGameModeAppSP::LogScriptError(SvGameModeAppSP *this)
{
  ?LogScriptError@SvGameModeAppSP@@UEBAXXZ(this);
}

/*
==============
SV_GameSP_InitGameProgs
==============
*/

void __fastcall SV_GameSP_InitGameProgs(int randomSeed, int *savegame, SaveGame **save)
{
  ?SV_GameSP_InitGameProgs@@YAXHPEAHPEAPEAUSaveGame@@@Z(randomSeed, savegame, save);
}

/*
==============
SvPersistentGlobalsSP::CheckFontScaleRange
==============
*/

bool __fastcall SvPersistentGlobalsSP::CheckFontScaleRange(SvPersistentGlobalsSP *this, const float fontScale)
{
  return ?CheckFontScaleRange@SvPersistentGlobalsSP@@UEAA_NM@Z(this, fontScale);
}

/*
==============
SvPersistentGlobalsSP::HandleDevelopmentKeyEvent
==============
*/

bool __fastcall SvPersistentGlobalsSP::HandleDevelopmentKeyEvent(SvPersistentGlobalsSP *this, int key, bool isDown)
{
  return ?HandleDevelopmentKeyEvent@SvPersistentGlobalsSP@@UEAA_NH_N@Z(this, key, isDown);
}

/*
==============
SvPersistentGlobalsSP::CheckFontScaleRange
==============
*/
char SvPersistentGlobalsSP::CheckFontScaleRange(SvPersistentGlobalsSP *this, const float fontScale)
{
  return 1;
}

/*
==============
SvPersistentGlobalsSP::CheckOriginIsInPlayableBounds
==============
*/
char SvPersistentGlobalsSP::CheckOriginIsInPlayableBounds(SvPersistentGlobalsSP *this, const vec3_t *origin)
{
  return 1;
}

/*
==============
SvPersistentGlobalsSP::HandleDevelopmentKeyEvent
==============
*/
bool SvPersistentGlobalsSP::HandleDevelopmentKeyEvent(SvPersistentGlobalsSP *this, int key, bool isDown)
{
  return 0;
}

/*
==============
SvPersistentGlobalsSP::KeepPointInPlayableBounds
==============
*/
void SvPersistentGlobalsSP::KeepPointInPlayableBounds(SvPersistentGlobalsSP *this, vec3_t *pos)
{
  ;
}

/*
==============
SvGameModeAppSP::LogScriptError
==============
*/
void SvGameModeAppSP::LogScriptError(SvGameModeAppSP *this)
{
  ;
}

/*
==============
SvGameModeAppSP::NotifyClientsSRE
==============
*/
void SvGameModeAppSP::NotifyClientsSRE(SvGameModeAppSP *this, const char *message)
{
  ;
}

/*
==============
SV_GameSP_CancelAndSyncTransients
==============
*/
void SV_GameSP_CancelAndSyncTransients(bool levelsOnly)
{
  if ( !DB_AreFastfileLoadsCompleted() && DB_IsDoingTransientOnlyWork() )
  {
    if ( !levelsOnly || DB_IsDoingTransientWorldWork() )
      CL_TransientsSP_CancelAllLoads();
    CL_TransientsSP_HardSyncNow();
  }
}

/*
==============
SV_GameSP_CheckLoadLevel
==============
*/
void SV_GameSP_CheckLoadLevel(SaveGame *save)
{
  SvGameGlobalsSP *SvGameGlobalsSP; 
  SvGameModeApplication *ActiveServerApplication; 
  int Time; 

  SvGameGlobalsSP = SvGameGlobalsSP::GetSvGameGlobalsSP();
  if ( (_BYTE)SvGameModeApplication::ms_allocType != HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_gamemode_app_sp.h", 97, ASSERT_TYPE_ASSERT, "( ms_allocType == GameModeType::SP )", (const char *)&queryFormat, "ms_allocType == GameModeType::SP") )
    __debugbreak();
  ActiveServerApplication = SvGameModeApplication::GetActiveServerApplication();
  G_MainSP_CheckLoadGame(SvGameGlobalsSP->mapcrc, save);
  Time = G_Main_GetTime();
  SV_MainSP_SetServerTime(Time);
  if ( !ActiveServerApplication->m_frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_gamemode_app.h", 162, ASSERT_TYPE_ASSERT, "(m_frameDuration > 0)", "%s\n\tFrame duration has not been initialized", "m_frameDuration > 0") )
    __debugbreak();
  ActiveServerApplication->m_svResidualTime = ActiveServerApplication->m_frameDuration - 1;
  SV_SnapshotSP_SendClientMessages();
  SV_Game_ResetSkeletonCache();
  if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_AKIMBO|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_game_sp.cpp", 401, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRANSIENT_SERVERCLIENTSYNC ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRANSIENT_SERVERCLIENTSYNC )") )
    __debugbreak();
  SV_TransientsSP_SyncForLoadLevel();
  Stream_LoadSync_BeginSP();
}

/*
==============
SV_GameSP_GetCheckSum
==============
*/
__int64 SV_GameSP_GetCheckSum()
{
  return (unsigned int)SvGameGlobalsSP::GetSvGameGlobalsSP()->mapcrc;
}

/*
==============
SV_GameSP_InitGameProgs
==============
*/
void SV_GameSP_InitGameProgs(int randomSeed, int *savegame, SaveGame **save)
{
  if ( !save && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_game_sp.cpp", 288, ASSERT_TYPE_ASSERT, "( save )", (const char *)&queryFormat, "save") )
    __debugbreak();
  s_gameSP_initialized = 1;
  SV_GameSP_InitGameVM(randomSeed, 0, savegame, save, 1);
}

/*
==============
SV_GameSP_InitGameVM
==============
*/
void SV_GameSP_InitGameVM(int randomSeed, int restart, int *savegame, SaveGame **save, int loadScripts)
{
  SvGameModeApplication *ActiveServerApplication; 
  SvGameGlobalsSP *SvGameGlobalsSP; 
  int frameDuration; 
  int v12; 
  int mapcrc; 
  unsigned int SpClientNum; 
  XAssetHeader v15; 
  scrContext_t *v16; 
  SaveGame **savea; 
  int savegamea; 

  if ( !savegame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_game_sp.cpp", 55, ASSERT_TYPE_ASSERT, "(savegame)", (const char *)&queryFormat, "savegame") )
    __debugbreak();
  if ( !save && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_game_sp.cpp", 56, ASSERT_TYPE_ASSERT, "(save)", (const char *)&queryFormat, "save") )
    __debugbreak();
  if ( ((unsigned __int8)&g_serverThreadOwnership & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &g_serverThreadOwnership) )
    __debugbreak();
  if ( _InterlockedCompareExchange(&g_serverThreadOwnership, 1, 0) != 1 )
  {
    LODWORD(savea) = g_serverThreadOwnership;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_game_sp.cpp", 58, ASSERT_TYPE_ASSERT, "( ( Sys_InterlockedCompareExchange( (volatile_int32 *)&g_serverThreadOwnership, 1, 0 ) == 1 ) )", "( g_serverThreadOwnership ) = %i", savea) )
      __debugbreak();
  }
  ProfLoad_Begin("Start map");
  SV_InitSP_StartMap(randomSeed);
  ProfLoad_End();
  SV_PreloadSP_ClearZones();
  CL_PreloadSP_InitVM();
  Scr_ResetEntityParsePoint();
  SV_Game_ResetSkeletonCache();
  SV_TransientsSP_LoadTransientDependencies();
  ProfLoad_Begin("Init game");
  ActiveServerApplication = SvGameModeApplication::GetActiveServerApplication();
  SvGameGlobalsSP = SvGameGlobalsSP::GetSvGameGlobalsSP();
  if ( !ActiveServerApplication->m_frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_gamemode_app.h", 162, ASSERT_TYPE_ASSERT, "(m_frameDuration > 0)", "%s\n\tFrame duration has not been initialized", "m_frameDuration > 0") )
    __debugbreak();
  frameDuration = ActiveServerApplication->m_frameDuration;
  v12 = loadScripts;
  if ( !G_MainSP_InitGame(randomSeed, restart, SvGameGlobalsSP->mapcrc, loadScripts, savegame, save, frameDuration) )
  {
    if ( !*savegame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_game_sp.cpp", 104, ASSERT_TYPE_ASSERT, "(*savegame)", (const char *)&queryFormat, "*savegame") )
      __debugbreak();
    G_MainSP_ShutdownGame(v12, 0);
    mapcrc = SvGameGlobalsSP->mapcrc;
    savegamea = 0;
    G_MainSP_InitGame(randomSeed, restart, mapcrc, v12, &savegamea, save, frameDuration);
    *savegame = 0;
  }
  ProfLoad_End();
  ProfLoad_Begin("Settle game");
  SV_InitSP_Settle();
  ProfLoad_End();
  ProfLoad_Begin("Connecting");
  SV_ClientSP_DirectConnect();
  CL_MainSP_ConnectResponse();
  Path_InitPaths();
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_client_sp.h", 90, ASSERT_TYPE_ASSERT, "(Com_GameMode_GetActiveGameMode() == GameModeType::SP)", "%s\n\tThis is intended to replace a singleplayer-only feature", "Com_GameMode_GetActiveGameMode() == GameModeType::SP") )
    __debugbreak();
  if ( (int)SvClient::ms_clientCount > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_client_sp.h", 91, ASSERT_TYPE_ASSERT, "(SvClient::GetClientCount() <= 1)", "%s\n\tShould not use this function when more than one client is possible.", "SvClient::GetClientCount() <= 1") )
    __debugbreak();
  if ( SvClient::GetCommonClient(0)->state != CS_ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_game_sp.cpp", 147, ASSERT_TYPE_ASSERT, "( SvClient::GetConnectionState( static_cast<uint>( SvClientSP::GetSpClientNum() ) ) == SvClientConnectionState::CS_ACTIVE )", (const char *)&queryFormat, "SvClient::GetConnectionState( static_cast<uint>( SvClientSP::GetSpClientNum() ) ) == SvClientConnectionState::CS_ACTIVE") )
    __debugbreak();
  SpClientNum = SvClientSP::GetSpClientNum();
  SV_ClientSP_EnterWorld(SpClientNum);
  ProfLoad_End();
  if ( !restart || !*save )
  {
    R_BeginRemoteScreenUpdate();
    G_MainSP_RunPreFrameForDemo();
    ProfLoad_Begin("Server pre-frame");
    SV_MainSP_PreFrame();
    ProfLoad_End();
    ProfLoad_Begin("Load game level");
    G_MainSP_LoadLevel();
    ProfLoad_End();
    v15.physicsLibrary = DB_FindXAssetHeader(ASSET_TYPE_SCRIPTABLE, "SPPlayerScriptableDef", 0).physicsLibrary;
    if ( v15.physicsLibrary )
      ScriptableSv_LinkReservedScriptableEntity(g_entities, v15.scriptable, 0xFFFFFFFF);
    if ( !*savegame )
      SV_InitSP_VariableSettle();
    ProfLoad_Begin("Update player streaming");
    G_MainSP_UpdateLevelStartPlayerStreaming();
    ProfLoad_End();
    R_EndRemoteScreenUpdate();
    if ( script_usage_tracking )
    {
      if ( script_usage_tracking->current.integer )
      {
        v16 = ScriptContext_Server();
        Profile_ClearScriptUsageValues(v16);
      }
    }
  }
}

/*
==============
SV_GameSP_LevelTime
==============
*/
__int64 SV_GameSP_LevelTime()
{
  return (unsigned int)SvGameModeApplication::GetActiveServerApplication()->m_svLevelTime;
}

/*
==============
SV_GameSP_RestartGameProgs_Init
==============
*/
void SV_GameSP_RestartGameProgs_Init(int randomSeed, int *savegame, SaveGame **save, int loadScripts)
{
  scrContext_t *v8; 

  if ( !save && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_game_sp.cpp", 313, ASSERT_TYPE_ASSERT, "(save)", (const char *)&queryFormat, "save") )
    __debugbreak();
  if ( !savegame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_game_sp.cpp", 314, ASSERT_TYPE_ASSERT, "(savegame)", (const char *)&queryFormat, "savegame") )
    __debugbreak();
  if ( !*savegame && loadScripts )
  {
    v8 = ScriptContext_Server();
    Com_SetScriptSettings(v8);
  }
  com_fixedConsolePosition = 0;
  SV_GameSP_InitGameVM(randomSeed, 1, savegame, save, loadScripts);
}

/*
==============
SV_GameSP_RestartGameProgs_Shutdown
==============
*/
void SV_GameSP_RestartGameProgs_Shutdown(int clearScripts)
{
  __int64 v2; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_game_sp.cpp", 296, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( ((unsigned __int8)&g_serverThreadOwnership & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &g_serverThreadOwnership) )
    __debugbreak();
  if ( _InterlockedCompareExchange(&g_serverThreadOwnership, 1, 0) != 1 )
  {
    LODWORD(v2) = g_serverThreadOwnership;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_game_sp.cpp", 298, ASSERT_TYPE_ASSERT, "( ( Sys_InterlockedCompareExchange( (volatile_int32 *)&g_serverThreadOwnership, 1, 0 ) == 1 ) )", "( g_serverThreadOwnership ) = %i", v2) )
      __debugbreak();
  }
  if ( !s_gameSP_initialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_game_sp.cpp", 301, ASSERT_TYPE_ASSERT, "(s_gameSP_initialized)", (const char *)&queryFormat, "s_gameSP_initialized") )
    __debugbreak();
  SV_GameSP_ShutdownGameVM(clearScripts, 0);
}

/*
==============
SV_GameSP_SetCheckSum
==============
*/
void SV_GameSP_SetCheckSum(int checksum)
{
  SvGameGlobalsSP::GetSvGameGlobalsSP()->mapcrc = checksum;
}

/*
==============
SV_GameSP_ShutdownGameProgs
==============
*/
void SV_GameSP_ShutdownGameProgs(void)
{
  __int64 v0; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_game_sp.cpp", 328, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( ((unsigned __int8)&g_serverThreadOwnership & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &g_serverThreadOwnership) )
    __debugbreak();
  if ( _InterlockedCompareExchange(&g_serverThreadOwnership, 1, 0) != 1 )
  {
    LODWORD(v0) = g_serverThreadOwnership;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_game_sp.cpp", 330, ASSERT_TYPE_ASSERT, "( ( Sys_InterlockedCompareExchange( (volatile_int32 *)&g_serverThreadOwnership, 1, 0 ) == 1 ) )", "( g_serverThreadOwnership ) = %i", v0) )
      __debugbreak();
  }
  if ( s_gameSP_initialized )
  {
    SV_GameSP_ShutdownGameVM(1, 1);
    SV_DemoSP_Shutdown();
    s_gameSP_initialized = 0;
  }
  else if ( SvStaticGlobals::ms_svStaticGlobals.state )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_game_sp.cpp", 337, ASSERT_TYPE_ASSERT, "( svs->state == SvState::SS_DEAD )", (const char *)&queryFormat, "svs->state == SvState::SS_DEAD") )
      __debugbreak();
  }
}

/*
==============
SV_GameSP_ShutdownGameVM
==============
*/
void SV_GameSP_ShutdownGameVM(int clearScripts, bool clearDvars)
{
  _QWORD *v4; 
  __int64 v5; 
  bool v6; 
  const void *v7; 
  __int64 v8; 
  __int64 v9; 
  signed int v10; 
  bool v11; 
  SvClientSP *CommonClient; 
  __int64 v13; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_game_sp.cpp", 237, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( ((unsigned __int8)&g_serverThreadOwnership & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &g_serverThreadOwnership) )
    __debugbreak();
  if ( _InterlockedCompareExchange(&g_serverThreadOwnership, 1, 0) != 1 )
  {
    LODWORD(v13) = g_serverThreadOwnership;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_game_sp.cpp", 239, ASSERT_TYPE_ASSERT, "( ( Sys_InterlockedCompareExchange( (volatile_int32 *)&g_serverThreadOwnership, 1, 0 ) == 1 ) )", "( g_serverThreadOwnership ) = %i", v13) )
      __debugbreak();
  }
  SV_DemoSP_AutoSaveEndDemo();
  v4 = NtCurrentTeb()->Reserved1[11];
  v5 = tls_index;
  v6 = (_BYTE)GStatic::ms_allocatedType == NONE;
  SvStaticGlobals::ms_svStaticGlobals.state = SS_DEAD;
  *(_QWORD *)(v4[tls_index] + 272i64) = 0i64;
  if ( v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 103, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to set the active bgs to the server game static but the allocated type is not known.", "ms_allocatedType != GameModeType::NONE") )
    __debugbreak();
  if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 104, ASSERT_TYPE_ASSERT, "(ms_gameStatics != 0)", "%s\n\tTrying to set the active bgs to the server game static but the server game static has not been allocated", "ms_gameStatics != NULL") )
    __debugbreak();
  v7 = *(const void **)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v5) + 272i64);
  if ( v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 105, ASSERT_TYPE_ASSERT, "( ( ms_activeBgs == 0 ) )", "%s\n\t( ms_activeBgs ) = %p", "( ms_activeBgs == 0 )", v7) )
    __debugbreak();
  *(_QWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v5) + 272i64) = *(_QWORD *)&GStatic::ms_gameStatics;
  G_MainSP_ShutdownGame(clearScripts, clearDvars);
  if ( !(_BYTE)GStatic::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 113, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to clear the active bgs from the server game static but the allocated type is not known.", "ms_allocatedType != GameModeType::NONE") )
    __debugbreak();
  if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 114, ASSERT_TYPE_ASSERT, "(ms_gameStatics != 0)", "%s\n\tTrying to clear the active bgs from the server game static but the server game static has not been allocated", "ms_gameStatics != NULL") )
    __debugbreak();
  v8 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + v5);
  if ( *(_QWORD *)(v8 + 272) != *(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 115, ASSERT_TYPE_ASSERT, "( ( ms_activeBgs == ms_gameStatics ) )", "%s\n\t( ms_activeBgs ) = %p", "( ms_activeBgs == ms_gameStatics )", *(const void **)(v8 + 272)) )
    __debugbreak();
  v9 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + v5);
  v10 = 0;
  v11 = (int)SvClient::ms_clientCount <= 0;
  *(_QWORD *)(v9 + 272) = 0i64;
  if ( !v11 )
  {
    do
    {
      if ( (_BYTE)SvClient::ms_allocatedType != HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_client_sp.h", 83, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
        __debugbreak();
      CommonClient = (SvClientSP *)SvClient::GetCommonClient(v10);
      CommonClient->gentity = NULL;
      SV_InitSP_FreeReliableCommandsForClient(CommonClient);
      ++v10;
    }
    while ( v10 < (int)SvClient::ms_clientCount );
  }
}

/*
==============
SvGameModeAppSP::ShutdownGameProgs
==============
*/
void SvGameModeAppSP::ShutdownGameProgs(SvGameModeAppSP *this)
{
  __int64 v1; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_game_sp.cpp", 328, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( ((unsigned __int8)&g_serverThreadOwnership & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &g_serverThreadOwnership) )
    __debugbreak();
  if ( _InterlockedCompareExchange(&g_serverThreadOwnership, 1, 0) != 1 )
  {
    LODWORD(v1) = g_serverThreadOwnership;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_game_sp.cpp", 330, ASSERT_TYPE_ASSERT, "( ( Sys_InterlockedCompareExchange( (volatile_int32 *)&g_serverThreadOwnership, 1, 0 ) == 1 ) )", "( g_serverThreadOwnership ) = %i", v1) )
      __debugbreak();
  }
  if ( s_gameSP_initialized )
  {
    SV_GameSP_ShutdownGameVM(1, 1);
    SV_DemoSP_Shutdown();
    s_gameSP_initialized = 0;
  }
  else if ( SvStaticGlobals::ms_svStaticGlobals.state )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_game_sp.cpp", 337, ASSERT_TYPE_ASSERT, "( svs->state == SvState::SS_DEAD )", (const char *)&queryFormat, "svs->state == SvState::SS_DEAD") )
      __debugbreak();
  }
}

