/*
==============
Com_GameMode_SupportsFeature
==============
*/

bool __fastcall Com_GameMode_SupportsFeature(Com_GameMode_Feature featureType, GameModeType gameMode)
{
  return ?Com_GameMode_SupportsFeature@@YA_NW4Com_GameMode_Feature@@W4GameModeType@@@Z(featureType, gameMode);
}

/*
==============
GameModeFlagValues::UpdateGameModeValues
==============
*/

void __fastcall GameModeFlagValues::UpdateGameModeValues(GameModeType gameMode)
{
  ?UpdateGameModeValues@GameModeFlagValues@@SAXW4GameModeType@@@Z(gameMode);
}

/*
==============
Com_GameMode_GetLUIModeTransition
==============
*/

GameModeType __fastcall Com_GameMode_GetLUIModeTransition()
{
  return ?Com_GameMode_GetLUIModeTransition@@YA?AW4GameModeType@@XZ();
}

/*
==============
Com_GameMode_SupportsFeature
==============
*/

bool __fastcall Com_GameMode_SupportsFeature(Com_GameMode_Feature featureType)
{
  return ?Com_GameMode_SupportsFeature@@YA_NW4Com_GameMode_Feature@@@Z(featureType);
}

/*
==============
Com_GameMode_Init
==============
*/

void Com_GameMode_Init(void)
{
  ?Com_GameMode_Init@@YAXXZ();
}

/*
==============
Com_GameMode_IsGameModeChangePending
==============
*/

bool __fastcall Com_GameMode_IsGameModeChangePending()
{
  return ?Com_GameMode_IsGameModeChangePending@@YA_NXZ();
}

/*
==============
Com_GameMode_SetInviteGameMode
==============
*/

void __fastcall Com_GameMode_SetInviteGameMode(GameModeType gameMode)
{
  ?Com_GameMode_SetInviteGameMode@@YAXW4GameModeType@@@Z(gameMode);
}

/*
==============
Com_GameMode_SupportsMap
==============
*/

bool __fastcall Com_GameMode_SupportsMap(const char *mapName)
{
  return ?Com_GameMode_SupportsMap@@YA_NPEBD@Z(mapName);
}

/*
==============
Com_GameMode_IsCoopGameType
==============
*/

bool __fastcall Com_GameMode_IsCoopGameType(const char *gameType)
{
  return ?Com_GameMode_IsCoopGameType@@YA_NPEBD@Z(gameType);
}

/*
==============
Com_GameMode_SetDesiredGameMode
==============
*/

void __fastcall Com_GameMode_SetDesiredGameMode(GameModeType gameMode, bool wasGameRunning)
{
  ?Com_GameMode_SetDesiredGameMode@@YAXW4GameModeType@@_N@Z(gameMode, wasGameRunning);
}

/*
==============
Com_GameMode_UpdateGameMode
==============
*/

void Com_GameMode_UpdateGameMode(void)
{
  ?Com_GameMode_UpdateGameMode@@YAXXZ();
}

/*
==============
Com_GameMode_GetActiveGameMode
==============
*/

GameModeType __fastcall Com_GameMode_GetActiveGameMode()
{
  return ?Com_GameMode_GetActiveGameMode@@YA?AW4GameModeType@@XZ();
}

/*
==============
Com_GameMode_GetGameModeStr
==============
*/

const char *__fastcall Com_GameMode_GetGameModeStr(GameModeType gameMode)
{
  return ?Com_GameMode_GetGameModeStr@@YAPEBDW4GameModeType@@@Z(gameMode);
}

/*
==============
Com_GameMode_SetLaunchGameMode
==============
*/

void __fastcall Com_GameMode_SetLaunchGameMode(GameModeType gameMode, bool wasGameRunning)
{
  ?Com_GameMode_SetLaunchGameMode@@YAXW4GameModeType@@_N@Z(gameMode, wasGameRunning);
}

/*
==============
Com_GameMode_GetActiveGameModeStr
==============
*/

const char *__fastcall Com_GameMode_GetActiveGameModeStr()
{
  return ?Com_GameMode_GetActiveGameModeStr@@YAPEBDXZ();
}

/*
==============
Com_GameMode_DevSetDesiredGameModeStr
==============
*/

void __fastcall Com_GameMode_DevSetDesiredGameModeStr(const char *gameModeStr)
{
  ?Com_GameMode_DevSetDesiredGameModeStr@@YAXPEBD@Z(gameModeStr);
}

/*
==============
Com_GameMode_ErrorCleanup
==============
*/

void Com_GameMode_ErrorCleanup(void)
{
  ?Com_GameMode_ErrorCleanup@@YAXXZ();
}

/*
==============
Com_GameMode_DevHandleDevMap
==============
*/

void __fastcall Com_GameMode_DevHandleDevMap(const char *mapName)
{
  ?Com_GameMode_DevHandleDevMap@@YAXPEBD@Z(mapName);
}

/*
==============
Com_GameMode_DevHandleDevMap
==============
*/
void Com_GameMode_DevHandleDevMap(const char *mapName)
{
  if ( !mapName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode.cpp", 778, ASSERT_TYPE_ASSERT, "(mapName)", (const char *)&queryFormat, "mapName") )
    __debugbreak();
  if ( Com_IsCpMap(mapName) )
    s_gameModeData.desiredGameMode[0] = 3;
  else
    s_gameModeData.desiredGameMode[0] = Com_IsMpMap(mapName) + 1;
  Core_strcpy(s_gameModeData.devDesiredMapName, 0x40ui64, mapName);
}

/*
==============
Com_GameMode_DevSetDesiredGameModeStr
==============
*/
void Com_GameMode_DevSetDesiredGameModeStr(const char *gameModeStr)
{
  int v2; 

  if ( !gameModeStr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode.cpp", 761, ASSERT_TYPE_ASSERT, "(gameModeStr)", (const char *)&queryFormat, "gameModeStr") )
    __debugbreak();
  v2 = 0;
  while ( I_strnicmp(gameModeStr, G_GAME_MODE_STRINGS[v2], 0x7FFFFFFFui64) )
  {
    if ( (unsigned int)++v2 >= 4 )
    {
      Com_PrintError(16, "startgamemode failed, expecting argument to be 'SP' 'MP' or 'CP'.\n");
      return;
    }
  }
  s_gameModeData.desiredGameMode[0] = v2;
}

/*
==============
Com_GameMode_ErrorCleanup
==============
*/
void Com_GameMode_ErrorCleanup(void)
{
  if ( s_gameModeData.activeGameMode[0] )
  {
    if ( !s_gameModeData.desiredGameMode[0] )
      Com_GameMode_UpdateGameMode();
  }
}

/*
==============
Com_GameMode_GetActiveGameMode
==============
*/
__int64 Com_GameMode_GetActiveGameMode()
{
  if ( !Sys_AreThreadsSuspended() && Sys_IsDatabaseThreadAndActivelyLoading() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode.cpp", 559, ASSERT_TYPE_ASSERT, "( !IsActivelyLoadingDatabaseThread() )", "Can't access the active game mode from the database thread for thread safety reasons. Use DBFeatureFlags instead.") )
    __debugbreak();
  return s_gameModeData.activeGameMode[0];
}

/*
==============
Com_GameMode_GetActiveGameModeStr
==============
*/
const char *Com_GameMode_GetActiveGameModeStr()
{
  unsigned __int8 v0; 
  int v2; 
  int v3; 

  v0 = s_gameModeData.activeGameMode[0];
  if ( s_gameModeData.activeGameMode[0] >= 4u )
  {
    v3 = 4;
    v2 = s_gameModeData.activeGameMode[0];
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode.cpp", 527, ASSERT_TYPE_ASSERT, "(unsigned)( s_gameModeData.activeGameMode ) < (unsigned)( ( sizeof( *array_counter( G_GAME_MODE_STRINGS ) ) + 0 ) )", "s_gameModeData.activeGameMode doesn't index ARRAY_COUNT( G_GAME_MODE_STRINGS )\n\t%i not in [0, %i)", v2, v3) )
      __debugbreak();
    v0 = s_gameModeData.activeGameMode[0];
  }
  return G_GAME_MODE_STRINGS[v0];
}

/*
==============
Com_GameMode_GetGameModeStr
==============
*/
const char *Com_GameMode_GetGameModeStr(GameModeType gameMode)
{
  unsigned __int8 v1; 
  int v3; 
  int v4; 

  v1 = gameMode;
  if ( (unsigned __int8)gameMode >= (unsigned int)LONG_LONG )
  {
    v4 = 4;
    v3 = (unsigned __int8)gameMode;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode.cpp", 535, ASSERT_TYPE_ASSERT, "(unsigned)( gameMode ) < (unsigned)( ( sizeof( *array_counter( G_GAME_MODE_STRINGS ) ) + 0 ) )", "gameMode doesn't index ARRAY_COUNT( G_GAME_MODE_STRINGS )\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  return G_GAME_MODE_STRINGS[v1];
}

/*
==============
Com_GameMode_GetLUIModeTransition
==============
*/
__int64 Com_GameMode_GetLUIModeTransition()
{
  if ( !Sys_AreThreadsSuspended() && Sys_IsDatabaseThreadAndActivelyLoading() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode.cpp", 567, ASSERT_TYPE_ASSERT, "( !IsActivelyLoadingDatabaseThread() )", "Can't access the active game mode from the database thread for thread safety reasons. Use DBFeatureFlags instead.") )
    __debugbreak();
  return (unsigned __int8)s_gameModeData.desiredGameMode[0];
}

/*
==============
Com_GameMode_Init
==============
*/
void Com_GameMode_Init(void)
{
  ;
}

/*
==============
Com_GameMode_IsCoopGameType
==============
*/
char Com_GameMode_IsCoopGameType(const char *gameType)
{
  const char *v2; 
  __int64 v3; 
  int v4; 
  signed __int64 v5; 
  unsigned int v6; 
  __int64 v7; 
  unsigned int v8; 
  unsigned int v9; 
  unsigned int v10; 

  if ( !gameType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode.cpp", 513, ASSERT_TYPE_ASSERT, "(gameType)", (const char *)&queryFormat, "gameType") )
    __debugbreak();
  if ( !I_strcmp("aliens", gameType) || !I_strcmp("ship", gameType) || !I_strcmp("zombie", gameType) )
    return 1;
  v2 = "cp_";
  v3 = 3i64;
  v4 = 1;
  if ( !gameType && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  v5 = gameType - "cp_";
  while ( 1 )
  {
    v6 = (unsigned __int8)v2[v5];
    v7 = v3;
    v8 = *(unsigned __int8 *)v2++;
    --v3;
    if ( !v7 )
    {
LABEL_19:
      v4 = 0;
      return v4 == 0;
    }
    if ( v6 != v8 )
    {
      v9 = v6 + 32;
      if ( v6 - 65 > 0x19 )
        v9 = v6;
      v6 = v9;
      v10 = v8 + 32;
      if ( v8 - 65 > 0x19 )
        v10 = v8;
      if ( v6 != v10 )
        break;
    }
    if ( !v6 )
      goto LABEL_19;
  }
  if ( v6 < v10 )
    v4 = -1;
  return v4 == 0;
}

/*
==============
Com_GameMode_IsGameModeChangePending
==============
*/
bool Com_GameMode_IsGameModeChangePending()
{
  return s_gameModeData.activeGameMode[0] != s_gameModeData.desiredGameMode[0];
}

/*
==============
Com_GameMode_SetActiveGameMode
==============
*/
void Com_GameMode_SetActiveGameMode(GameModeType gameMode)
{
  unsigned __int8 v1; 
  int v2; 
  int v3; 

  v1 = gameMode;
  if ( s_gameModeData.activeGameMode[0] != (_BYTE)gameMode )
    Dvar_SetString_Internal(DVARSTR_ui_saved_mapname, (const char *)&queryFormat.fmt + 3);
  s_gameModeData.activeGameMode[0] = v1;
  s_gameModeData.desiredGameMode[0] = v1;
  if ( v1 >= 4u )
  {
    v3 = 4;
    v2 = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode.cpp", 527, ASSERT_TYPE_ASSERT, "(unsigned)( s_gameModeData.activeGameMode ) < (unsigned)( ( sizeof( *array_counter( G_GAME_MODE_STRINGS ) ) + 0 ) )", "s_gameModeData.activeGameMode doesn't index ARRAY_COUNT( G_GAME_MODE_STRINGS )\n\t%i not in [0, %i)", v2, v3) )
      __debugbreak();
  }
  CrashReport_AddKVP("GameMode", G_GAME_MODE_STRINGS[s_gameModeData.activeGameMode[0]]);
  GameModeFlagValues::ms_spValue = INACTIVE;
  GameModeFlagValues::ms_mpValue = INACTIVE;
  if ( v1 == 1 )
  {
    GameModeFlagValues::ms_spValue = ACTIVE;
  }
  else if ( v1 == 2 || v1 == 3 )
  {
    GameModeFlagValues::ms_mpValue = ACTIVE;
  }
}

/*
==============
Com_GameMode_SetDesiredGameMode
==============
*/
void Com_GameMode_SetDesiredGameMode(GameModeType gameMode, bool wasGameRunning)
{
  unsigned __int8 v3; 
  int v4; 
  __int64 v5; 

  v3 = gameMode;
  if ( s_gameModeData.activeGameMode[0] == (_BYTE)gameMode )
    goto LABEL_20;
  v4 = Sys_AreThreadsSuspended();
  if ( !v3 )
  {
    if ( !v4 && Sys_IsDatabaseThreadAndActivelyLoading() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode.cpp", 559, ASSERT_TYPE_ASSERT, "( !IsActivelyLoadingDatabaseThread() )", "Can't access the active game mode from the database thread for thread safety reasons. Use DBFeatureFlags instead.") )
      __debugbreak();
    if ( !s_gameModeData.activeGameMode[0] )
    {
      Com_PrintError(16, "SetDesiredGameMode failed to set game mode to NONE, no game mode is active.\n");
      if ( !wasGameRunning )
        return;
      v5 = 0i64;
      goto LABEL_10;
    }
    goto LABEL_18;
  }
  if ( !v4 && Sys_IsDatabaseThreadAndActivelyLoading() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode.cpp", 559, ASSERT_TYPE_ASSERT, "( !IsActivelyLoadingDatabaseThread() )", "Can't access the active game mode from the database thread for thread safety reasons. Use DBFeatureFlags instead.") )
    __debugbreak();
  if ( !s_gameModeData.activeGameMode[0] )
  {
LABEL_18:
    if ( wasGameRunning )
      Com_Printf(16, "SetDesiredGameMode setting game mode to %d.\n", v3);
LABEL_20:
    s_gameModeData.desiredGameMode[0] = v3;
    return;
  }
  Com_PrintError(16, "SetDesiredGameMode failed to set game mode to an active mode, a game mode (%i) is already active. Stop the game mode first.\n", s_gameModeData.activeGameMode[0]);
  if ( wasGameRunning )
  {
    v5 = v3;
LABEL_10:
    Com_PrintError(16, "SetDesiredGameMode failed to start game mode %d.\n", v5);
  }
}

/*
==============
Com_GameMode_SetInviteGameMode
==============
*/
void Com_GameMode_SetInviteGameMode(GameModeType gameMode)
{
  char v1; 
  __int64 v2; 
  int v3; 
  int v4; 

  v1 = gameMode;
  v2 = (unsigned __int8)gameMode;
  if ( (unsigned __int8)gameMode >= (unsigned int)LONG_LONG )
  {
    v4 = 4;
    v3 = (unsigned __int8)gameMode;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode.cpp", 465, ASSERT_TYPE_ASSERT, "(unsigned)( gameModeIndex ) < (unsigned)( ( sizeof( *array_counter( S_GAME_MODE_FEATURE_BITS ) ) + 0 ) )", "gameModeIndex doesn't index ARRAY_COUNT( S_GAME_MODE_FEATURE_BITS )\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  if ( (S_GAME_MODE_FEATURE_BITS[v2] & 6) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode.cpp", 643, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature_Internal( Com_GameMode_Feature::INVITE_PROCESSING, gameMode ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature_Internal( Com_GameMode_Feature::INVITE_PROCESSING, gameMode )") )
    __debugbreak();
  if ( s_gameModeData.activeGameMode[0] != v1 )
    Com_Printf(16, "SetInviteGameMode setting game mode to %d.\n", (unsigned int)v2);
  s_gameModeData.desiredGameMode[0] = v1;
}

/*
==============
Com_GameMode_SetLaunchGameMode
==============
*/
void Com_GameMode_SetLaunchGameMode(GameModeType gameMode, bool wasGameRunning)
{
  char v2; 
  unsigned __int8 v4; 
  int v5; 
  __int64 v6; 

  v2 = s_gameModeData.activeGameMode[0];
  v4 = gameMode;
  if ( s_gameModeData.activeGameMode[0] == (_BYTE)gameMode )
    goto LABEL_23;
  if ( wasGameRunning )
  {
    Com_Printf(16, "SetLaunchGameMode setting game mode to %d.\n", (unsigned __int8)gameMode);
    v2 = s_gameModeData.activeGameMode[0];
  }
  if ( v2 == v4 )
    goto LABEL_23;
  v5 = Sys_AreThreadsSuspended();
  if ( !v4 )
  {
    if ( !v5 && Sys_IsDatabaseThreadAndActivelyLoading() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode.cpp", 559, ASSERT_TYPE_ASSERT, "( !IsActivelyLoadingDatabaseThread() )", "Can't access the active game mode from the database thread for thread safety reasons. Use DBFeatureFlags instead.") )
      __debugbreak();
    if ( !s_gameModeData.activeGameMode[0] )
    {
      Com_PrintError(16, "SetDesiredGameMode failed to set game mode to NONE, no game mode is active.\n");
      if ( !wasGameRunning )
        return;
      v6 = 0i64;
      goto LABEL_13;
    }
    goto LABEL_21;
  }
  if ( !v5 && Sys_IsDatabaseThreadAndActivelyLoading() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode.cpp", 559, ASSERT_TYPE_ASSERT, "( !IsActivelyLoadingDatabaseThread() )", "Can't access the active game mode from the database thread for thread safety reasons. Use DBFeatureFlags instead.") )
    __debugbreak();
  if ( !s_gameModeData.activeGameMode[0] )
  {
LABEL_21:
    if ( wasGameRunning )
      Com_Printf(16, "SetDesiredGameMode setting game mode to %d.\n", v4);
LABEL_23:
    s_gameModeData.desiredGameMode[0] = v4;
    return;
  }
  Com_PrintError(16, "SetDesiredGameMode failed to set game mode to an active mode, a game mode (%i) is already active. Stop the game mode first.\n", s_gameModeData.activeGameMode[0]);
  if ( wasGameRunning )
  {
    v6 = v4;
LABEL_13:
    Com_PrintError(16, "SetDesiredGameMode failed to start game mode %d.\n", v6);
  }
}

/*
==============
Com_GameMode_SupportsFeature
==============
*/
bool Com_GameMode_SupportsFeature(Com_GameMode_Feature featureType)
{
  if ( !Sys_AreThreadsSuspended() && Sys_IsDatabaseThreadAndActivelyLoading() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode.cpp", 559, ASSERT_TYPE_ASSERT, "( !IsActivelyLoadingDatabaseThread() )", "Can't access the active game mode from the database thread for thread safety reasons. Use DBFeatureFlags instead.") )
    __debugbreak();
  return Com_GameMode_SupportsFeature_Internal(featureType, (GameModeType)s_gameModeData.activeGameMode[0]);
}

/*
==============
Com_GameMode_SupportsFeature
==============
*/

bool __fastcall Com_GameMode_SupportsFeature(Com_GameMode_Feature featureType, GameModeType gameMode)
{
  return Com_GameMode_SupportsFeature_Internal(featureType, gameMode);
}

/*
==============
Com_GameMode_SupportsFeature_Internal
==============
*/
bool Com_GameMode_SupportsFeature_Internal(Com_GameMode_Feature featureType, GameModeType gameMode)
{
  __int64 v2; 
  unsigned __int8 v3; 
  unsigned int v4; 
  __int64 v6; 
  __int64 v8; 
  __int64 v9; 
  int v10; 
  __int64 v11; 

  v2 = (unsigned int)featureType;
  v3 = gameMode;
  if ( (unsigned int)featureType >= (WEAPON_RELOAD_START|0x100) )
  {
    v10 = 275;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode.cpp", 458, ASSERT_TYPE_ASSERT, "(unsigned)( featureType ) < (unsigned)( Com_GameMode_Feature::COUNT )", "featureType doesn't index Com_GameMode_Feature::COUNT\n\t%i not in [0, %i)", featureType, v10) )
      __debugbreak();
    LODWORD(v11) = 275;
    LODWORD(v8) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode.cpp", 461, ASSERT_TYPE_ASSERT, "(unsigned)( featureIndex ) < (unsigned)( ( sizeof( *array_counter( S_COM_GAMEMODE_FEATURESUPPORT ) ) + 0 ) )", "featureIndex doesn't index ARRAY_COUNT( S_COM_GAMEMODE_FEATURESUPPORT )\n\t%i not in [0, %i)", v8, v11) )
      __debugbreak();
  }
  v4 = S_COM_GAMEMODE_FEATURESUPPORT[v2];
  if ( v3 >= 4u )
  {
    LODWORD(v9) = 4;
    LODWORD(v6) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode.cpp", 465, ASSERT_TYPE_ASSERT, "(unsigned)( gameModeIndex ) < (unsigned)( ( sizeof( *array_counter( S_GAME_MODE_FEATURE_BITS ) ) + 0 ) )", "gameModeIndex doesn't index ARRAY_COUNT( S_GAME_MODE_FEATURE_BITS )\n\t%i not in [0, %i)", v6, v9) )
      __debugbreak();
  }
  return (v4 & S_GAME_MODE_FEATURE_BITS[v3]) != 0;
}

/*
==============
Com_GameMode_SupportsMap
==============
*/
bool Com_GameMode_SupportsMap(const char *mapName)
{
  if ( !Sys_AreThreadsSuspended() && Sys_IsDatabaseThreadAndActivelyLoading() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode.cpp", 559, ASSERT_TYPE_ASSERT, "( !IsActivelyLoadingDatabaseThread() )", "Can't access the active game mode from the database thread for thread safety reasons. Use DBFeatureFlags instead.") )
    __debugbreak();
  switch ( s_gameModeData.activeGameMode[0] )
  {
    case 1:
      if ( !Com_IsMpMap(mapName) && !Com_IsCpMap(mapName) )
        return 1;
      break;
    case 2:
      return Com_IsMpMap(mapName);
    case 3:
      return Com_IsCpMap(mapName);
  }
  return 0;
}

/*
==============
Com_GameMode_UpdateGameMode
==============
*/
void Com_GameMode_UpdateGameMode(void)
{
  const dvar_t *v0; 
  int v1; 
  int v2; 
  const dvar_t *v3; 
  int integer; 
  const dvar_t *v5; 
  unsigned int v6; 
  unsigned int v7; 
  char i; 
  unsigned __int8 v9; 
  unsigned __int8 v10; 
  Online_PatchStreamer *Instance; 
  __int128 v15; 
  int v17; 
  int v18; 

  Xb3MultiplayerManager::Allocate(&Xb3MultiplayerManager::ms_xb3MultiplayerManager);
  v0 = DVARBOOL_com_gamemode_stress_enabled;
  if ( !DVARBOOL_com_gamemode_stress_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_gamemode_stress_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  v1 = 0;
  if ( v0->current.enabled )
  {
    v2 = Sys_Milliseconds();
    if ( s_gameModeData.devNextStressTime <= v2 )
    {
      v3 = DVARINT_com_gamemode_stress_jitter_max;
      if ( !DVARINT_com_gamemode_stress_jitter_max && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_gamemode_stress_jitter_max") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v3);
      integer = v3->current.integer;
      v5 = DVARINT_com_gamemode_stress_jitter_min;
      if ( !DVARINT_com_gamemode_stress_jitter_min && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_gamemode_stress_jitter_min") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v5);
      s_gameModeData.devNextStressTime = v2 + I_irand(v5->current.integer, integer);
      v6 = I_irand(0, 4);
      v7 = 0;
      for ( i = 0; v7 < v6; ++i )
      {
        if ( i != s_gameModeData.activeGameMode[0] )
          ++v7;
      }
      s_gameModeData.desiredGameMode[0] = v7;
    }
  }
  if ( !Sys_AreThreadsSuspended() && Sys_IsDatabaseThreadAndActivelyLoading() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode.cpp", 559, ASSERT_TYPE_ASSERT, "( !IsActivelyLoadingDatabaseThread() )", "Can't access the active game mode from the database thread for thread safety reasons. Use DBFeatureFlags instead.") )
    __debugbreak();
  v9 = s_gameModeData.activeGameMode[0];
  v10 = s_gameModeData.desiredGameMode[0];
  if ( s_gameModeData.desiredGameMode[0] != s_gameModeData.activeGameMode[0] )
  {
    Com_Printf(16, "Com_GameMode_UpdateGameMode %i Starting\n", (unsigned __int8)s_gameModeData.desiredGameMode[0]);
    __rdtsc();
    R_DisableRemoteScreenUpdate(1);
    if ( v9 )
    {
      Com_FrontEndScene_OnExitGameMode();
      if ( !Sys_AreThreadsSuspended() && Sys_IsDatabaseThreadAndActivelyLoading() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode.cpp", 559, ASSERT_TYPE_ASSERT, "( !IsActivelyLoadingDatabaseThread() )", "Can't access the active game mode from the database thread for thread safety reasons. Use DBFeatureFlags instead.") )
        __debugbreak();
      if ( !s_gameModeData.activeGameMode[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode.cpp", 858, ASSERT_TYPE_ASSERT, "(Com_GameMode_GetActiveGameMode() != GameModeType::NONE)", (const char *)&queryFormat, "Com_GameMode_GetActiveGameMode() != GameModeType::NONE") )
        __debugbreak();
      SvGameModeApplication::ShutdownServerApplication();
      ClGameModeApplication::FreeClientApplication();
      ComGameModeApplication::FreeComApplication();
      SvGameModeApplication::SyncServerApplicationShutdown();
      if ( s_gameModeData.activeGameMode[0] )
        Dvar_SetString_Internal(DVARSTR_ui_saved_mapname, (const char *)&queryFormat.fmt + 3);
      *(_WORD *)s_gameModeData.activeGameMode = 0;
      CrashReport_AddKVP("GameMode", G_GAME_MODE_STRINGS[0]);
      GameModeFlagValues::ms_spValue = INACTIVE;
      GameModeFlagValues::ms_mpValue = INACTIVE;
      Dvar_DeregisterGamemodeDvars();
      if ( !Dvar_ValidatePermanentDvars() )
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143EE0E60, 1156i64);
      Com_FastFile_OnExitGameMode((GameModeType)v9);
    }
    if ( v10 )
    {
      if ( !Dvar_ValidatePermanentDvars() )
      {
        s_gameModeData.desiredGameMode[0] = 0;
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143EE0DA0, 1155i64);
      }
      Com_GameMode_SetActiveGameMode((GameModeType)v10);
      if ( !Sys_AreThreadsSuspended() && Sys_IsDatabaseThreadAndActivelyLoading() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode.cpp", 559, ASSERT_TYPE_ASSERT, "( !IsActivelyLoadingDatabaseThread() )", "Can't access the active game mode from the database thread for thread safety reasons. Use DBFeatureFlags instead.") )
        __debugbreak();
      if ( !s_gameModeData.activeGameMode[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode.cpp", 824, ASSERT_TYPE_ASSERT, "(Com_GameMode_GetActiveGameMode() != GameModeType::NONE)", (const char *)&queryFormat, "Com_GameMode_GetActiveGameMode() != GameModeType::NONE") )
        __debugbreak();
      ComGameModeApplication::AllocateComApplication();
      SvGameModeApplication::WakeServerApplication();
      ClGameModeApplication::AllocateClientApplication();
      SvGameModeApplication::SyncServerApplicationCreation();
      if ( s_gameModeData.devDesiredMapName[0] )
        Dvar_SetString_Internal(DVARSTR_ui_mapname, s_gameModeData.devDesiredMapName);
      s_gameModeData.devDesiredMapName[0] = 0;
      Com_FrontEndScene_OnEnterGameMode();
      Com_FastFile_OnEnterGameMode((GameModeType)v10);
    }
    do
    {
      Instance = Online_PatchStreamer::GetInstance();
      Online_PatchStreamer::ProcessDownloadActions(Instance, (const CCSPatchType)v1++, (const GameModeType)v10, 1, 1);
    }
    while ( v1 < 2 );
    LUI_UpdateGameMode((GameModeType)v10, (GameModeType)v9);
    if ( v10 != s_gameModeData.activeGameMode[0] )
    {
      v18 = s_gameModeData.activeGameMode[0];
      v17 = v10;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode.cpp", 965, ASSERT_TYPE_ASSERT, "( targetGameMode ) == ( s_gameModeData.activeGameMode )", "%s == %s\n\t%i, %i", "targetGameMode", "s_gameModeData.activeGameMode", v17, v18) )
        __debugbreak();
    }
    R_DisableRemoteScreenUpdate(0);
    R_GPU_TimerSetGameModeBudget(s_gameModeData.activeGameMode[0] == 1);
    __rdtsc();
    _XMM0 = 0i64;
    __asm { vcvtsi2sd xmm0, xmm0, rax }
    *((_QWORD *)&v15 + 1) = *((_QWORD *)&_XMM0 + 1);
    *(double *)&v15 = *(double *)&_XMM0 * msecPerRawTimerTick;
    _XMM1 = v15;
    __asm { vcvtsd2ss xmm2, xmm1, xmm1 }
    Com_Printf(16, "Com_GameMode_UpdateGameMode Complete (%f ms)\n", *(float *)&_XMM2);
  }
}

/*
==============
GameModeFlagValues::UpdateGameModeValues
==============
*/
void GameModeFlagValues::UpdateGameModeValues(GameModeType gameMode)
{
  GameModeFlagValues::ms_spValue = INACTIVE;
  GameModeFlagValues::ms_mpValue = INACTIVE;
  if ( (unsigned __int8)gameMode == HALF )
  {
    GameModeFlagValues::ms_spValue = ACTIVE;
  }
  else if ( (unsigned __int8)gameMode == HALF_HALF || (unsigned __int8)gameMode == LONG )
  {
    GameModeFlagValues::ms_mpValue = ACTIVE;
  }
}

