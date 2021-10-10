/*
==============
Com_GameStart_LoadFrame
==============
*/

void __fastcall Com_GameStart_LoadFrame(const int msec)
{
  ?Com_GameStart_LoadFrame@@YAXH@Z(msec);
}

/*
==============
Com_GameStart_UseNewLoadingSystem
==============
*/

bool __fastcall Com_GameStart_UseNewLoadingSystem()
{
  return ?Com_GameStart_UseNewLoadingSystem@@YA_NXZ();
}

/*
==============
Com_GameStart_IsActive
==============
*/

bool __fastcall Com_GameStart_IsActive()
{
  return ?Com_GameStart_IsActive@@YA_NXZ();
}

/*
==============
Com_GameStart_BeginDevmap
==============
*/

void __fastcall Com_GameStart_BeginDevmap(const char *mapname, const char *gameType)
{
  ?Com_GameStart_BeginDevmap@@YAXPEBD0@Z(mapname, gameType);
}

/*
==============
Com_GameStart_ClearState
==============
*/

void Com_GameStart_ClearState(void)
{
  ?Com_GameStart_ClearState@@YAXXZ();
}

/*
==============
Com_GameStart_BeginServer
==============
*/

void __fastcall Com_GameStart_BeginServer(const char *mapname, const char *gameType)
{
  ?Com_GameStart_BeginServer@@YAXPEBD0@Z(mapname, gameType);
}

/*
==============
Com_GameStart_CheckFirstSnapshotMinDelay
==============
*/

bool __fastcall Com_GameStart_CheckFirstSnapshotMinDelay(const bool forceCompletion)
{
  return ?Com_GameStart_CheckFirstSnapshotMinDelay@@YA_N_N@Z(forceCompletion);
}

/*
==============
Com_GameStart_ShouldDrawConnectText
==============
*/

bool __fastcall Com_GameStart_ShouldDrawConnectText()
{
  return ?Com_GameStart_ShouldDrawConnectText@@YA_NXZ();
}

/*
==============
Com_GameStart_GetShortLoadInfoString
==============
*/

bool __fastcall Com_GameStart_GetShortLoadInfoString(char *outString, unsigned int outStringSize)
{
  return ?Com_GameStart_GetShortLoadInfoString@@YA_NPEADI@Z(outString, outStringSize);
}

/*
==============
Com_GameStart_GetLoadInfoString
==============
*/

bool __fastcall Com_GameStart_GetLoadInfoString(char *outString, unsigned int outStringSize)
{
  return ?Com_GameStart_GetLoadInfoString@@YA_NPEADI@Z(outString, outStringSize);
}

/*
==============
Com_GameStart_SetRestarting
==============
*/

void Com_GameStart_SetRestarting(void)
{
  ?Com_GameStart_SetRestarting@@YAXXZ();
}

/*
==============
Com_GameStart_FirstSnapshotStreaming
==============
*/

void Com_GameStart_FirstSnapshotStreaming(void)
{
  ?Com_GameStart_FirstSnapshotStreaming@@YAXXZ();
}

/*
==============
Com_GameStart_IsRestarting
==============
*/

bool __fastcall Com_GameStart_IsRestarting()
{
  return ?Com_GameStart_IsRestarting@@YA_NXZ();
}

/*
==============
Com_GameStart_WaitFirstSnapshot
==============
*/

bool __fastcall Com_GameStart_WaitFirstSnapshot()
{
  return ?Com_GameStart_WaitFirstSnapshot@@YA_NXZ();
}

/*
==============
Com_GameStart_AllowMaterialSort
==============
*/

bool __fastcall Com_GameStart_AllowMaterialSort()
{
  return ?Com_GameStart_AllowMaterialSort@@YA_NXZ();
}

/*
==============
Com_GameStart_ClearRestarting
==============
*/

void Com_GameStart_ClearRestarting(void)
{
  ?Com_GameStart_ClearRestarting@@YAXXZ();
}

/*
==============
Com_GameStart_CanStartGame
==============
*/

bool __fastcall Com_GameStart_CanStartGame()
{
  return ?Com_GameStart_CanStartGame@@YA_NXZ();
}

/*
==============
Com_GameStart_BeginClient
==============
*/

void __fastcall Com_GameStart_BeginClient(const char *mapname, const char *gameType, const bool isRestart)
{
  ?Com_GameStart_BeginClient@@YAXPEBD0_N@Z(mapname, gameType, isRestart);
}

/*
==============
Com_GameStart_AllowMaterialSort
==============
*/
bool Com_GameStart_AllowMaterialSort()
{
  return (unsigned int)(s_gameStartupData.state - 1) > 2;
}

/*
==============
Com_GameStart_BeginClient
==============
*/
void Com_GameStart_BeginClient(const char *mapname, const char *gameType, const bool isRestart)
{
  Com_GameStart_Begin_Internal(mapname, gameType);
  s_gameStartupData.isServer = 0;
  if ( isRestart )
  {
    DB_LoadLevelXAssetsNonBlockStartingCheck(mapname);
    s_gameStartupData.state = JOINED_LOBBY|SEARCHING;
  }
}

/*
==============
Com_GameStart_BeginDevmap
==============
*/
void Com_GameStart_BeginDevmap(const char *mapname, const char *gameType)
{
  Com_GameStart_Begin_Internal(mapname, gameType);
  s_gameStartupData.isServer = 1;
  s_gameStartupData.state = JOINED_LOBBY|SEARCHING;
}

/*
==============
Com_GameStart_BeginServer
==============
*/
void Com_GameStart_BeginServer(const char *mapname, const char *gameType)
{
  Com_GameStart_Begin_Internal(mapname, gameType);
  s_gameStartupData.isServer = 1;
}

/*
==============
Com_GameStart_Begin_Internal
==============
*/
void Com_GameStart_Begin_Internal(const char *mapname, const char *gameType)
{
  ComStartupLevelLoadState state; 
  bool v5; 
  int v6; 
  unsigned int fmt; 
  __int64 v8; 

  Com_Printf(16, "Com_Frontend_Level_BeginLoad: %s\n", mapname);
  if ( !Com_GameMode_SupportsMap(mapname) )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143DFD3A8, 303i64, mapname);
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW|0x80) )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143EE14C0, 304i64, mapname);
  state = s_gameStartupData.state;
  if ( s_gameStartupData.state )
  {
    if ( s_gameStartupData.state == ERRORING )
      goto LABEL_9;
    fmt = s_gameStartupData.loadTime;
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143EE1520, 6557i64, (unsigned int)s_gameStartupData.state, fmt, s_gameStartupData.mapname, s_gameStartupData.gameType, mapname, gameType);
    state = s_gameStartupData.state;
  }
  if ( state == ERRORING )
  {
LABEL_9:
    Com_Printf(16, "Com_GameStart: PlayAgain\n");
    if ( !Com_FastFile_GameStart_ReadyForLevel(mapname) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamestart.cpp", 165, ASSERT_TYPE_ASSERT, "( ( Com_FastFile_GameStart_ReadyForLevel( mapname ) ) )", "( mapname ) = %s", mapname) )
      __debugbreak();
    if ( !Com_FastFile_GameStart_ReadyForTransients(mapname) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamestart.cpp", 166, ASSERT_TYPE_ASSERT, "( ( Com_FastFile_GameStart_ReadyForTransients( mapname ) ) )", "( mapname ) = %s", mapname) )
      __debugbreak();
    if ( !Com_FastFile_GameStart_ReadyToStart(mapname) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamestart.cpp", 167, ASSERT_TYPE_ASSERT, "( ( Com_FastFile_GameStart_ReadyToStart( mapname ) ) )", "( mapname ) = %s", mapname) )
      __debugbreak();
    s_gameStartupData.state = JOINED_LOBBY;
    goto LABEL_25;
  }
  if ( state )
  {
    LODWORD(v8) = state;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamestart.cpp", 172, ASSERT_TYPE_ASSERT, "( s_gameStartupData.state ) == ( ComStartupLevelLoadState::IDLE )", "%s == %s\n\t%i, %i", "s_gameStartupData.state", "ComStartupLevelLoadState::IDLE", v8, 0i64) )
      __debugbreak();
  }
  if ( !Com_FastFile_GameStart_AllowedToStart(mapname) )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143EE1760, 6558i64, mapname, gameType);
  s_gameStartupData.state = INITIALIZING;
LABEL_25:
  s_gameStartupData.loadTime = 0;
  Core_strcpy(s_gameStartupData.mapname, 0x40ui64, mapname);
  Core_strcpy(s_gameStartupData.gameType, 0x40ui64, gameType);
  v5 = Com_GameMode_SupportsFeature((Com_GameMode_Feature)144);
  v6 = Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_SLIDE);
  Com_StreamSync_SetEnabled(v5);
  BG_Customization_SetIsEnabled(v6);
  BG_Customization_UpdatePackageBindings(mapname);
}

/*
==============
Com_GameStart_CanStartGame
==============
*/
bool Com_GameStart_CanStartGame()
{
  return !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_MID_AIR_DETACH|WEAPON_FIRING) || s_gameStartupData.state >= (JOINED_LOBBY|SEARCHING);
}

/*
==============
Com_GameStart_CheckFirstSnapshotMinDelay
==============
*/
bool Com_GameStart_CheckFirstSnapshotMinDelay(const bool forceCompletion)
{
  float loadTime; 
  char ActiveGameMode; 

  if ( forceCompletion || s_gameStartupData.state == IDLE || s_gameStartupData.state == ERRORING )
    return 1;
  if ( s_gameStartupData.state != 8 )
  {
    loadTime = (float)s_gameStartupData.loadTime;
    Com_Printf(14, "Com_GameStart_CheckFirstSnapshotMinDelay: [%0.2fs] Transitioning to Waiting (from %i)\n", (float)(loadTime * 0.001), (unsigned int)s_gameStartupData.state);
    s_gameStartupData.state = 8;
  }
  ActiveGameMode = Com_GameMode_GetActiveGameMode();
  if ( ActiveGameMode == 2 )
    return s_gameStartupData.loadTime >= Dvar_GetInt_Internal_DebugName(DVARINT_com_gamestart_min_transition_time_mp, "com_gamestart_min_transition_time_mp");
  if ( ActiveGameMode == 3 )
    return s_gameStartupData.loadTime >= Dvar_GetInt_Internal_DebugName(DVARINT_com_gamestart_min_transition_time_cp, "com_gamestart_min_transition_time_cp");
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamestart.cpp", 89, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled game mode, shouldn't go through the game start system") )
    __debugbreak();
  return 1;
}

/*
==============
Com_GameStart_ClearRestarting
==============
*/
void Com_GameStart_ClearRestarting(void)
{
  ComStartupLevelLoadState state; 

  if ( s_gameStartupData.state )
  {
    if ( s_gameStartupData.state != ERRORING )
    {
      state = s_gameStartupData.state;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamestart.cpp", 515, ASSERT_TYPE_ASSERT, "( ( (s_gameStartupData.state == ComStartupLevelLoadState::IDLE) || (s_gameStartupData.state == ComStartupLevelLoadState::RESTARTING) ) )", "( s_gameStartupData.state ) = %i", state) )
        __debugbreak();
    }
  }
  memset_0(&s_gameStartupData, 0, sizeof(s_gameStartupData));
}

/*
==============
Com_GameStart_ClearState
==============
*/
void Com_GameStart_ClearState(void)
{
  memset_0(&s_gameStartupData, 0, sizeof(s_gameStartupData));
}

/*
==============
Com_GameStart_FirstSnapshotStreaming
==============
*/
void Com_GameStart_FirstSnapshotStreaming(void)
{
  float loadTime; 

  if ( s_gameStartupData.state != (ERRORING|SEARCHING) )
  {
    loadTime = (float)s_gameStartupData.loadTime;
    Com_Printf(14, "Com_GameStart_FirstSnapshotStreaming: [%0.2fs] Transitioning to Streaming (from %i)\n", (float)(loadTime * 0.001), (unsigned int)s_gameStartupData.state);
    s_gameStartupData.state = ERRORING|SEARCHING;
  }
}

/*
==============
Com_GameStart_GetLoadInfoString
==============
*/
bool Com_GameStart_GetLoadInfoString(char *outString, unsigned int outStringSize)
{
  unsigned __int64 v2; 
  const char *DebugText; 
  const char *v5; 
  float loadTime; 
  bool result; 

  v2 = outStringSize;
  DebugText = (char *)&queryFormat.fmt + 3;
  if ( !outString && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamestart.cpp", 397, ASSERT_TYPE_ASSERT, "(outString)", (const char *)&queryFormat, "outString") )
    __debugbreak();
  if ( !(_DWORD)v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamestart.cpp", 398, ASSERT_TYPE_ASSERT, "(outStringSize)", (const char *)&queryFormat, "outStringSize") )
    __debugbreak();
  switch ( s_gameStartupData.state )
  {
    case 1:
      v5 = "Unloading Front-End";
      goto LABEL_20;
    case 2:
      v5 = "Completing Preload";
      goto LABEL_20;
    case 3:
      v5 = "Loading Level";
      goto LABEL_20;
    case 4:
      v5 = "Loading Transients";
      goto LABEL_20;
    case 5:
      v5 = "Restarting";
      goto LABEL_20;
    case 6:
      if ( s_gameStartupData.isServer )
      {
        v5 = "Starting Server";
        if ( Dvar_GetBoolSafe("PPQLQTKTP") && !Com_IsAnyLocalServerRunning() )
          v5 = "Loaded Server Data, Connecting to Game";
      }
      else
      {
        v5 = "Connecting to Game";
      }
      goto LABEL_20;
    case 7:
      v5 = "Streaming : ";
      DebugText = Stream_LoadSync_GetDebugText();
      goto LABEL_20;
    case 8:
      v5 = "Waiting Minimum Delay";
LABEL_20:
      loadTime = (float)s_gameStartupData.loadTime;
      Com_sprintf(outString, v2, "[Dev] [%0.2fs]  %s%s", (float)(loadTime * 0.001), v5, DebugText);
      result = 1;
      break;
    default:
      *outString = 0;
      result = 0;
      break;
  }
  return result;
}

/*
==============
Com_GameStart_GetShortLoadInfoString
==============
*/
char Com_GameStart_GetShortLoadInfoString(char *outString, unsigned int outStringSize)
{
  unsigned __int64 v2; 
  const char *v5; 
  float loadTime; 
  char *fmt; 

  v2 = outStringSize;
  if ( !outString && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamestart.cpp", 465, ASSERT_TYPE_ASSERT, "(outString)", (const char *)&queryFormat, "outString") )
    __debugbreak();
  if ( !(_DWORD)v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamestart.cpp", 466, ASSERT_TYPE_ASSERT, "(outStringSize)", (const char *)&queryFormat, "outStringSize") )
    __debugbreak();
  if ( s_gameStartupData.state == IDLE )
    return 0;
  v5 = "cl";
  if ( s_gameStartupData.isServer )
    v5 = "sv";
  loadTime = (float)s_gameStartupData.loadTime;
  LODWORD(fmt) = s_gameStartupData.state;
  Com_sprintf(outString, v2, "[%0.2fs] %d (%s)", (float)(loadTime * 0.001), fmt, v5);
  return 1;
}

/*
==============
Com_GameStart_IsActive
==============
*/
bool Com_GameStart_IsActive()
{
  return s_gameStartupData.state && s_gameStartupData.state != ERRORING;
}

/*
==============
Com_GameStart_IsRestarting
==============
*/
bool Com_GameStart_IsRestarting()
{
  return Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_MID_AIR_DETACH|WEAPON_FIRING) && s_gameStartupData.state == ERRORING;
}

/*
==============
Com_GameStart_LoadFrame
==============
*/
void Com_GameStart_LoadFrame(const int msec)
{
  float loadTime; 
  float v2; 
  float v3; 
  float v4; 
  ComStartupLevelLoadState state; 

  s_gameStartupData.loadTime += msec;
  switch ( s_gameStartupData.state )
  {
    case 0:
    case 5:
    case 6:
    case 7:
    case 8:
      return;
    case 1:
      if ( Com_FastFile_IsUnloadUiComplete() )
      {
        loadTime = (float)s_gameStartupData.loadTime;
        Com_Printf(14, "Com_GameStart Transitioning to LOADING_COMMON [%0.2fs]\n", (float)(loadTime * 0.001));
        s_gameStartupData.state = SEARCHING;
      }
      break;
    case 2:
      if ( Com_FastFile_GameStart_ReadyForLevel(s_gameStartupData.mapname) )
      {
        DB_LoadLevelXAssetsNonBlockingStart(s_gameStartupData.mapname, s_gameStartupData.isServer);
        v2 = (float)s_gameStartupData.loadTime;
        Com_Printf(14, "Com_GameStart Transitioning to LOADING_LEVEL [%0.2fs]\n", (float)(v2 * 0.001));
        s_gameStartupData.state = QOSING;
      }
      break;
    case 3:
      if ( Com_FastFile_GameStart_ReadyForTransients(s_gameStartupData.mapname) )
      {
        DB_LoadLevelXAssetsNonBlockingTransients();
        v3 = (float)s_gameStartupData.loadTime;
        Com_Printf(14, "Com_GameStart Transitioning to LOADING_TRANSIENTS [%0.2fs]\n", (float)(v3 * 0.001));
        s_gameStartupData.state = JOINED_LOBBY;
      }
      break;
    case 4:
      if ( Com_FastFile_GameStart_ReadyToStart(s_gameStartupData.mapname) )
      {
        DB_LoadLevelXAssetsNonBlockingFinalize(s_gameStartupData.mapname);
        v4 = (float)s_gameStartupData.loadTime;
        Com_Printf(14, "Com_GameStart Transitioning to STARTING [%0.2fs]\n", (float)(v4 * 0.001));
        s_gameStartupData.state = JOINED_LOBBY|SEARCHING;
      }
      break;
    default:
      state = s_gameStartupData.state;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamestart.cpp", 340, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled state %i", state) )
        __debugbreak();
      break;
  }
}

/*
==============
Com_GameStart_SetRestarting
==============
*/
void Com_GameStart_SetRestarting(void)
{
  ComStartupLevelLoadState state; 

  if ( s_gameStartupData.state )
  {
    if ( s_gameStartupData.state != ERRORING )
    {
      state = s_gameStartupData.state;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamestart.cpp", 508, ASSERT_TYPE_ASSERT, "( ( (s_gameStartupData.state == ComStartupLevelLoadState::IDLE) || (s_gameStartupData.state == ComStartupLevelLoadState::RESTARTING) ) )", "( s_gameStartupData.state ) = %i", state) )
        __debugbreak();
    }
  }
  s_gameStartupData.state = ERRORING;
}

/*
==============
Com_GameStart_ShouldDrawConnectText
==============
*/
bool Com_GameStart_ShouldDrawConnectText()
{
  return s_gameStartupData.state > (unsigned int)INITIALIZING;
}

/*
==============
Com_GameStart_UseNewLoadingSystem
==============
*/
bool Com_GameStart_UseNewLoadingSystem()
{
  return Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_MID_AIR_DETACH|WEAPON_FIRING);
}

/*
==============
Com_GameStart_WaitFirstSnapshot
==============
*/
bool Com_GameStart_WaitFirstSnapshot()
{
  return 0;
}

