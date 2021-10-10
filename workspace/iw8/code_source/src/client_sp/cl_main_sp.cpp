/*
==============
CL_MainSP_CheckNotify
==============
*/

void __fastcall CL_MainSP_CheckNotify(LocalClientNum_t localClientNum, int cmdIndex, int forceNotify)
{
  ?CL_MainSP_CheckNotify@@YAXW4LocalClientNum_t@@HH@Z(localClientNum, cmdIndex, forceNotify);
}

/*
==============
CL_MainSP_StopTransitionSettleFrames
==============
*/

void __fastcall CL_MainSP_StopTransitionSettleFrames(const LocalClientNum_t localClientNum)
{
  ?CL_MainSP_StopTransitionSettleFrames@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_MainSP_UpdateTransitionSettleBeforeClientFrame
==============
*/

void __fastcall CL_MainSP_UpdateTransitionSettleBeforeClientFrame(const LocalClientNum_t localClientNum)
{
  ?CL_MainSP_UpdateTransitionSettleBeforeClientFrame@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_MainSP_Disconnect
==============
*/

void __fastcall CL_MainSP_Disconnect(LocalClientNum_t localClientNum)
{
  ?CL_MainSP_Disconnect@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_MainSP_GamePostMapMemoryAllocate
==============
*/

void CL_MainSP_GamePostMapMemoryAllocate(void)
{
  ?CL_MainSP_GamePostMapMemoryAllocate@@YAXXZ();
}

/*
==============
CL_MainSP_PlayMapMovie
==============
*/

void __fastcall CL_MainSP_PlayMapMovie(const char *mapname)
{
  ?CL_MainSP_PlayMapMovie@@YAXPEBD@Z(mapname);
}

/*
==============
CL_MainSP_ShutdownGameMode
==============
*/

void CL_MainSP_ShutdownGameMode(void)
{
  ?CL_MainSP_ShutdownGameMode@@YAXXZ();
}

/*
==============
CL_MainSP_InitGameMode
==============
*/

void CL_MainSP_InitGameMode(void)
{
  ?CL_MainSP_InitGameMode@@YAXXZ();
}

/*
==============
CL_MainSP_GameAllocate
==============
*/

void CL_MainSP_GameAllocate(void)
{
  ?CL_MainSP_GameAllocate@@YAXXZ();
}

/*
==============
CL_MainSP_ConnectResponse
==============
*/

void CL_MainSP_ConnectResponse(void)
{
  ?CL_MainSP_ConnectResponse@@YAXXZ();
}

/*
==============
CL_MainSP_SetAnimFrametime
==============
*/

void __fastcall CL_MainSP_SetAnimFrametime(int animFrametime)
{
  ?CL_MainSP_SetAnimFrametime@@YAXH@Z(animFrametime);
}

/*
==============
CL_MainSP_UpdateTransitionSettleAfterClientFrame
==============
*/

void __fastcall CL_MainSP_UpdateTransitionSettleAfterClientFrame(const LocalClientNum_t localClientNum)
{
  ?CL_MainSP_UpdateTransitionSettleAfterClientFrame@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_MainSP_InitLoad
==============
*/

void __fastcall CL_MainSP_InitLoad(const char *mapname)
{
  ?CL_MainSP_InitLoad@@YAXPEBD@Z(mapname);
}

/*
==============
CL_MainSP_ClientFrame
==============
*/

void __fastcall CL_MainSP_ClientFrame(LocalClientNum_t localClientNum)
{
  ?CL_MainSP_ClientFrame@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_MainSP_ShowPopupWaitingForTransientFiles
==============
*/

bool __fastcall CL_MainSP_ShowPopupWaitingForTransientFiles()
{
  return ?CL_MainSP_ShowPopupWaitingForTransientFiles@@YA_NXZ();
}

/*
==============
CL_MainSP_SetServerCommandSequence
==============
*/

void __fastcall CL_MainSP_SetServerCommandSequence(int reliableSent)
{
  ?CL_MainSP_SetServerCommandSequence@@YAXH@Z(reliableSent);
}

/*
==============
CL_MainSP_ShutdownClientBeforeTransientClientSync
==============
*/

void __fastcall CL_MainSP_ShutdownClientBeforeTransientClientSync(const LocalClientNum_t localClientNum)
{
  ?CL_MainSP_ShutdownClientBeforeTransientClientSync@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_MainSP_Pause
==============
*/

bool __fastcall CL_MainSP_Pause(LocalClientNum_t localClientNum, bool notifyLUI, CLPauseReason pauseReason)
{
  return ?CL_MainSP_Pause@@YA_NW4LocalClientNum_t@@_NW4CLPauseReason@@@Z(localClientNum, notifyLUI, pauseReason);
}

/*
==============
CL_MainSP_StartTransitionSettleFrames
==============
*/

void __fastcall CL_MainSP_StartTransitionSettleFrames(const LocalClientNum_t localClientNum, const int settleTimeMs)
{
  ?CL_MainSP_StartTransitionSettleFrames@@YAXW4LocalClientNum_t@@H@Z(localClientNum, settleTimeMs);
}

/*
==============
CL_MainSP_Unpause
==============
*/

void __fastcall CL_MainSP_Unpause(LocalClientNum_t localClientNum, CLPauseReason pauseReason)
{
  ?CL_MainSP_Unpause@@YAXW4LocalClientNum_t@@W4CLPauseReason@@@Z(localClientNum, pauseReason);
}

/*
==============
CL_MainSP_DisconnectLocalClient
==============
*/

void __fastcall CL_MainSP_DisconnectLocalClient(LocalClientNum_t localClientNum)
{
  ?CL_MainSP_DisconnectLocalClient@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_MainSP_ClearState
==============
*/

void CL_MainSP_ClearState(void)
{
  ?CL_MainSP_ClearState@@YAXXZ();
}

/*
==============
CL_MainSP_SetCurrentMapHasSaveGame
==============
*/

void __fastcall CL_MainSP_SetCurrentMapHasSaveGame(bool hasSaveGame)
{
  ?CL_MainSP_SetCurrentMapHasSaveGame@@YAX_N@Z(hasSaveGame);
}

/*
==============
CL_MainSP_IsRunningTransitionSettleFrames
==============
*/

bool __fastcall CL_MainSP_IsRunningTransitionSettleFrames(const LocalClientNum_t localClientNum)
{
  return ?CL_MainSP_IsRunningTransitionSettleFrames@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_MainSP_ResetSaveGameExists
==============
*/

void CL_MainSP_ResetSaveGameExists(void)
{
  ?CL_MainSP_ResetSaveGameExists@@YAXXZ();
}

/*
==============
CL_MainSP_ShutdownGameModeClient
==============
*/

void __fastcall CL_MainSP_ShutdownGameModeClient(LocalClientNum_t localClientNum)
{
  ?CL_MainSP_ShutdownGameModeClient@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_MainSP_LocalPacketEvent
==============
*/

void __fastcall CL_MainSP_LocalPacketEvent(msg_t *msg, int serverMessageSequence)
{
  ?CL_MainSP_LocalPacketEvent@@YAXPEAUmsg_t@@H@Z(msg, serverMessageSequence);
}

/*
==============
CL_MainSP_InitGameModeClient
==============
*/

void __fastcall CL_MainSP_InitGameModeClient(LocalClientNum_t localClientNum)
{
  ?CL_MainSP_InitGameModeClient@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_MainSP_ShutdownMemory
==============
*/

void CL_MainSP_ShutdownMemory(void)
{
  ?CL_MainSP_ShutdownMemory@@YAXXZ();
}

/*
==============
CL_MainSP_TogglePause
==============
*/

void __fastcall CL_MainSP_TogglePause(LocalClientNum_t localClientNum)
{
  ?CL_MainSP_TogglePause@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_MainSP_TransientAutoPauseGame
==============
*/

void CL_MainSP_TransientAutoPauseGame(void)
{
  ?CL_MainSP_TransientAutoPauseGame@@YAXXZ();
}

/*
==============
CL_MainSP_CurrentMapHasSaveGame
==============
*/

bool __fastcall CL_MainSP_CurrentMapHasSaveGame()
{
  return ?CL_MainSP_CurrentMapHasSaveGame@@YA_NXZ();
}

/*
==============
CL_MainSP_MapLoading
==============
*/

void __fastcall CL_MainSP_MapLoading(const char *mapname)
{
  ?CL_MainSP_MapLoading@@YAXPEBD@Z(mapname);
}

/*
==============
CL_MainSP_DifficultySave_f
==============
*/
void CL_MainSP_DifficultySave_f()
{
  const char *v0; 
  int v1; 
  int v2; 

  if ( Cmd_Argc() >= 2 )
  {
    v1 = Cmd_LocalControllerIndex();
    v2 = Cmd_ArgInt(1);
    GamerProfile_SetDifficulty(v1, v2);
  }
  else
  {
    v0 = Cmd_Argv(0);
    Com_PrintError(15, "Not enough arguments for \"%s\".\n", v0);
  }
}

/*
==============
CL_MainSP_DifficultyLoad_f
==============
*/
void CL_MainSP_DifficultyLoad_f()
{
  unsigned int v0; 
  __int64 Difficulty; 

  v0 = Cmd_LocalControllerIndex();
  Difficulty = (unsigned int)GamerProfile_GetDifficulty(v0);
  Com_Printf(14, "Setting difficulty level to \"%i\", from profile on controller #%i.\n", Difficulty, v0);
  SV_CmdsSP_SetDifficultyDvars(Difficulty);
}

/*
==============
CL_MainSP_SpecialistModeSave_f
==============
*/
void CL_MainSP_SpecialistModeSave_f()
{
  const char *v0; 
  int v1; 
  int v2; 

  if ( Cmd_Argc() >= 2 )
  {
    v1 = Cmd_LocalControllerIndex();
    v2 = Cmd_ArgInt(1);
    GamerProfile_SetSpecialistMode(v1, v2 > 0);
  }
  else
  {
    v0 = Cmd_Argv(0);
    Com_PrintError(15, "Not enough arguments for \"%s\".\n", v0);
  }
}

/*
==============
CL_MainSP_SpecialistModeLoad_f
==============
*/
void CL_MainSP_SpecialistModeLoad_f()
{
  unsigned int v0; 
  _BOOL8 SpecialistMode; 

  v0 = Cmd_LocalControllerIndex();
  SpecialistMode = GamerProfile_GetSpecialistMode(v0);
  Com_Printf(14, "Setting specialist mode difficulty level to \"%i\", from profile on controller #%i.\n", SpecialistMode, v0);
  SV_CmdsSP_SetSpecialistModeDvar(SpecialistMode);
}

/*
==============
CL_MainSP_YoloModeSave_f
==============
*/
void CL_MainSP_YoloModeSave_f()
{
  const char *v0; 
  int v1; 
  int v2; 

  if ( Cmd_Argc() >= 2 )
  {
    v1 = Cmd_LocalControllerIndex();
    v2 = Cmd_ArgInt(1);
    GamerProfile_SetYoloMode(v1, v2 > 0);
  }
  else
  {
    v0 = Cmd_Argv(0);
    Com_PrintError(15, "Not enough arguments for \"%s\".\n", v0);
  }
}

/*
==============
CL_MainSP_YoloModeLoad_f
==============
*/
void CL_MainSP_YoloModeLoad_f()
{
  unsigned int v0; 
  _BOOL8 YoloMode; 

  v0 = Cmd_LocalControllerIndex();
  YoloMode = GamerProfile_GetYoloMode(v0);
  Com_Printf(14, "Setting yolo mode difficulty level to \"%i\", from profile on controller #%i.\n", YoloMode, v0);
  SV_CmdsSP_SetYoloModeDvar(YoloMode);
}

/*
==============
CL_MainSP_DevResetCheats_f
==============
*/
void CL_MainSP_DevResetCheats_f()
{
  unsigned int v0; 
  int v1; 
  unsigned int v2; 
  int v3; 
  int *cheat_items_set2; 
  int *cheat_items_set1; 

  v0 = Cmd_LocalControllerIndex();
  v1 = v0;
  if ( v0 > 8 )
  {
    v3 = 8;
    v2 = v0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_main_sp.cpp", 773, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v2, 0i64, v3) )
      __debugbreak();
  }
  GamerProfile_ResetCheats(v1);
  GamerProfile_UpdateProfileAndSaveIfNeeded(v1);
  GamerProfile_GetIntelligencePtr(v1, &cheat_items_set1, &cheat_items_set2);
  SV_DemoSP_RecordIntelligence(v1, cheat_items_set1, cheat_items_set2);
}

/*
==============
CL_MainSP_VoidCommand_f
==============
*/
void CL_MainSP_VoidCommand_f()
{
  ;
}

/*
==============
CL_MainSP_StopControllerRumbles_f
==============
*/
void CL_MainSP_StopControllerRumbles_f()
{
  LocalClientNum_t OnlyLocalClientNum; 

  OnlyLocalClientNum = CL_GetOnlyLocalClientNum();
  CG_Rumble_StopAll(OnlyLocalClientNum);
}

/*
==============
CL_MainSP_UpdateSaveGameAvailable
==============
*/
void CL_MainSP_UpdateSaveGameAvailable()
{
  LocalClientNum_t OnlyLocalClientNum; 
  int ControllerFromClient; 

  OnlyLocalClientNum = CL_GetOnlyLocalClientNum();
  ControllerFromClient = CL_Mgr_GetControllerFromClient(OnlyLocalClientNum);
  Dvar_SetBool_Internal(DVARBOOL_com_saveGameAvailable, 0);
  if ( GamerProfile_IsProfileLoggedIn(ControllerFromClient) )
  {
    if ( Com_FrontEnd_IsInFrontEnd() )
    {
      if ( InviteJoinHSM::IsHSMHandlingInvitation(&g_invitationHSM) )
      {
        Com_Printf(0, "updatesavegameavailable is not available when accepting an MP/CP invite!\n");
      }
      else
      {
        if ( Com_IsGameLocalServerRunning() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_main_sp.cpp", 1279, ASSERT_TYPE_ASSERT, "(!Com_IsGameLocalServerRunning())", (const char *)&queryFormat, "!Com_IsGameLocalServerRunning()") )
          __debugbreak();
        G_SaveMemory_TriggerSaveExistTask();
      }
    }
    else
    {
      Com_Printf(0, "updatesavegameavailable is not available while a game is running\n");
    }
  }
}

/*
==============
CL_MainSP_CanPause
==============
*/
bool CL_MainSP_CanPause()
{
  const dvar_t *v0; 
  const dvar_t *v1; 
  const dvar_t *v2; 
  bool result; 

  result = 0;
  if ( !R_Cinematic_IsStarted() && !R_Cinematic_IsPending() || (v0 = DVARBOOL_bg_cinematicFullscreen) != NULL && (Dvar_CheckFrontendServerThread(DVARBOOL_bg_cinematicFullscreen), !v0->current.enabled) || (v1 = DVARBOOL_bg_cinematicCanPause) != NULL && (Dvar_CheckFrontendServerThread(DVARBOOL_bg_cinematicCanPause), v1->current.enabled) )
  {
    v2 = DVARINT_reloading;
    if ( DVARINT_reloading )
    {
      Dvar_CheckFrontendServerThread(DVARINT_reloading);
      if ( v2->current.integer != 4 )
        return 1;
    }
  }
  return result;
}

/*
==============
CL_MainSP_CheckNotify
==============
*/
void CL_MainSP_CheckNotify(LocalClientNum_t localClientNum, int cmdIndex, int forceNotify)
{
  bool IsGamePaused; 

  if ( SV_Loaded() )
  {
    IsGamePaused = CL_Pause_IsGamePaused();
    CL_Main_CheckNotify(localClientNum, cmdIndex, forceNotify, IsGamePaused);
  }
}

/*
==============
CL_MainSP_ClearState
==============
*/
void CL_MainSP_ClearState(void)
{
  LocalClientNum_t OnlyLocalClientNum; 
  ClConfigStringsSP *ClConfigStringsSP; 

  if ( SLODWORD(cl_maxLocalClients) > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_main_sp.cpp", 502, ASSERT_TYPE_ASSERT, "(cl_maxLocalClients <= 1)", "%s\n\tShould not use this function when more than one local clients are possible.", "cl_maxLocalClients <= 1") )
    __debugbreak();
  OnlyLocalClientNum = CL_GetOnlyLocalClientNum();
  Physics_WaitForAllCommandsToFinish();
  CL_Main_ResetSkeletonCache();
  CG_SnapshotSP_CreateNextSnap(OnlyLocalClientNum, 0.0, 0);
  CG_SnapshotSP_SetNextSnap(OnlyLocalClientNum);
  CL_CGameSP_ClearSoundAliasCache();
  ClConfigStringsSP = ClConfigStringsSP::GetClConfigStringsSP();
  ClConfigStringsSP::ClearStrings(ClConfigStringsSP);
  if ( OnlyLocalClientNum >= SLODWORD(cl_maxLocalClients) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_main_sp.cpp", 519, ASSERT_TYPE_ASSERT, "(localClientNum < cl_maxLocalClients)", (const char *)&queryFormat, "localClientNum < cl_maxLocalClients") )
    __debugbreak();
  ClActiveClientSP::ClearClient(OnlyLocalClientNum);
  ClConnectionSP::ClearClientConnection(OnlyLocalClientNum);
  Com_ClientDObjClearAllSkel(OnlyLocalClientNum);
  CL_Input_ClearKeys(OnlyLocalClientNum);
  CL_Main_InvalidateSkeletonCache();
  cls.serverMessageSequence = 0;
}

/*
==============
CL_MainSP_ClientFrame
==============
*/
void CL_MainSP_ClientFrame(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  __int64 v2; 
  bool v3; 
  ClActiveClientSP *ClientSP; 
  int ControllerFromClient; 
  __int64 v6; 
  __int64 v7; 
  bool outSaveExists; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 158, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  v2 = v1;
  if ( clientUIActives[v1].isRunning )
  {
    if ( !(_DWORD)v1 && (clientUIActives[v2].frontEndSceneState[0] || CL_GetLocalClientAnyConnectionState(LOCAL_CLIENT_0) == CA_DISCONNECTED) && (clientUIActives[v2].keyCatchers & 0x40) == 0 && !Com_IsGameLocalServerRunning() )
      SND_StopSounds(SND_STOP_ALL);
    if ( CL_IsLocalClientActive((LocalClientNum_t)v1) )
    {
      CL_DevGuiFrame((LocalClientNum_t)v1);
      if ( Live_IsSystemUiActive() )
      {
        v3 = CL_Pause_IsGamePaused() && CL_Pause_IsPausedForReason((CLPauseReason)128);
        if ( (!CL_Pause_IsGamePaused() || v3) && Com_IsAnyLocalServerRunning() && (!R_Cinematic_IsStarted() && !R_Cinematic_IsPending() || !Dvar_GetBool_Internal_DebugName(DVARBOOL_bg_cinematicFullscreen, "bg_cinematicFullscreen") || Dvar_GetBool_Internal_DebugName(DVARBOOL_bg_cinematicCanPause, "bg_cinematicCanPause")) && Dvar_GetInt_Internal_DebugName(DVARINT_reloading, "reloading") != 4 )
        {
          if ( (unsigned int)v1 >= 2 )
          {
            LODWORD(v7) = 2;
            LODWORD(v6) = v1;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_main_sp.cpp", 1699, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v6, v7) )
              __debugbreak();
          }
          if ( (int)v1 >= SLODWORD(cl_maxLocalClients) )
            goto LABEL_33;
          ClientSP = ClActiveClientSP::GetClientSP((const LocalClientNum_t)v1);
          if ( !ClientSP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_main_sp.cpp", 1704, ASSERT_TYPE_ASSERT, "(cl)", (const char *)&queryFormat, "cl") )
            __debugbreak();
          if ( ClientSP->settleTimeRemainingMs <= 0 )
LABEL_33:
            CL_MainSP_Pause((LocalClientNum_t)v1, 1, (CLPauseReason)32);
        }
      }
      CL_UpdateColor((LocalClientNum_t)v1);
      if ( G_SaveMemory_CheckSaveExistTaskComplete(&outSaveExists) && Com_FrontEnd_IsInFrontEnd() )
      {
        Dvar_SetBool_Internal(DVARBOOL_com_saveGameAvailable, outSaveExists);
        if ( LUI_BeginEvent((LocalClientNum_t)v1, "update_save_game_available_complete", LUI_luaVM) )
          LUI_EndEvent(LUI_luaVM);
      }
      if ( (clientUIActives[v2].keyCatchers & 0xC40) != 0 )
      {
        ControllerFromClient = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v1);
        CL_GamepadRepeatScrollingButtons((LocalClientNum_t)v1, ControllerFromClient);
      }
      Online_Telemetry_Frame((const LocalClientNum_t)v1);
    }
  }
}

/*
==============
CL_MainSP_ConnectResponse
==============
*/
void CL_MainSP_ConnectResponse(void)
{
  LocalClientNum_t OnlyLocalClientNum; 
  __int64 v1; 
  __int64 v2; 
  __int64 v3; 
  LocalClientNum_t v4; 
  __int64 v5; 
  int v6; 

  OnlyLocalClientNum = CL_GetOnlyLocalClientNum();
  v1 = OnlyLocalClientNum;
  if ( (unsigned int)OnlyLocalClientNum >= LOCAL_CLIENT_COUNT )
  {
    v6 = 2;
    v4 = OnlyLocalClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 158, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v4, v6) )
      __debugbreak();
  }
  v2 = v1;
  if ( clientUIActives[v1].isRunning )
  {
    if ( (unsigned int)v1 >= 2 )
    {
      LODWORD(v5) = 2;
      LODWORD(v3) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 158, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v3, v5) )
        __debugbreak();
    }
    if ( clientUIActives[v2].frontEndSceneState[0] || !clientUIActives[v2].cgameInitialized )
    {
      if ( (unsigned int)v1 >= 2 )
      {
        LODWORD(v5) = 2;
        LODWORD(v3) = v1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 195, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v3, v5) )
          __debugbreak();
      }
      Com_Printf(14, "CL_SetLocalConnectionState %i -> %i.\n", (unsigned int)clientUIActives[v2].connectionState, 7i64);
      clientUIActives[v2].connectionState = CA_LOADING;
    }
    else
    {
      if ( (unsigned int)v1 >= 2 )
      {
        LODWORD(v5) = 2;
        LODWORD(v3) = v1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 195, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v3, v5) )
          __debugbreak();
      }
      Com_Printf(14, "CL_SetLocalConnectionState %i -> %i.\n", (unsigned int)clientUIActives[v2].connectionState, 10i64);
      clientUIActives[v2].connectionState = CA_MAP_RESTART;
    }
  }
}

/*
==============
CL_MainSP_CurrentMapHasSaveGame
==============
*/
_BOOL8 CL_MainSP_CurrentMapHasSaveGame()
{
  bool v0; 

  Sys_EnterCriticalSection(CRITSECT_MAP_HAS_SAVE_GAME);
  v0 = s_currentMapHasSaveGame;
  Sys_LeaveCriticalSection(CRITSECT_MAP_HAS_SAVE_GAME);
  return v0;
}

/*
==============
CL_MainSP_Disconnect
==============
*/
void CL_MainSP_Disconnect(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  __int64 v2; 
  int ControllerFromClient; 
  __int64 v4; 
  __int64 v6; 
  int v7; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v7 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 158, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v7) )
      __debugbreak();
  }
  v2 = v1;
  if ( clientUIActives[v1].isRunning )
  {
    Sys_HeapOptimize();
    if ( !CL_IsLocalClientDisconnectedFromAnyServer((const LocalClientNum_t)v1) && cls.m_activeGameMapName[0] )
      BB_RecordSystemMemoryFootprint(cls.m_activeGameMapName, 1);
    ControllerFromClient = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v1);
    if ( !DB_IsDoingSPHotLoad() )
      R_Cinematic_StopPlayback(1);
    if ( (unsigned int)v1 >= 2 )
    {
      LODWORD(v6) = 2;
      LODWORD(v4) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 195, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v4, v6) )
        __debugbreak();
    }
    Com_Printf(14, "CL_SetLocalConnectionState %i -> %i.\n", (unsigned int)clientUIActives[v2].connectionState, 0i64);
    clientUIActives[v2].connectionState = CA_DISCONNECTED;
    Online_Telemetry_ResetInputSession((const LocalClientNum_t)v1);
    Physics_WaitForAllCommandsToFinish();
    DynEntCl_Shutdown((LocalClientNum_t)v1);
    ScriptableCl_Shutdown((const LocalClientNum_t)v1);
    if ( !DB_IsDoingSPHotLoad() )
      SND_StopSounds(SND_STOP_ALL);
    SND_DisconnectListener((LocalClientNum_t)v1);
    Live_Disconnected(ControllerFromClient);
    CL_SetupScreenPlacements();
    cls.m_serverFrameDuration = 0;
    ClStatic::SetGameMapName(&cls, (const char *)&queryFormat.fmt + 3);
    ClStatic::SetActiveGameType(&cls, (const char *)&queryFormat.fmt + 3);
    PLM_SetValidGameSave(0);
    Dvar_SetBoolByName("NMMPTOSMKQ", 0);
    Com_Printf(14, "CL_MainSP_Disconnect: Complete for local client %i\n", (unsigned int)v1);
  }
  else
  {
    Dvar_SetBoolByName("NMMPTOSMKQ", 0);
  }
}

/*
==============
CL_MainSP_DisconnectLocalClient
==============
*/
void CL_MainSP_DisconnectLocalClient(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  connstate_t connectionState; 
  int ControllerFromClient; 
  int v4; 
  int v5; 

  v1 = localClientNum;
  SND_ResetTimeScaleDefaults();
  SND_ResetPauseDefaults();
  if ( (unsigned int)v1 >= 2 )
  {
    v5 = 2;
    v4 = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v4, v5) )
      __debugbreak();
  }
  connectionState = clientUIActives[v1].connectionState;
  Dvar_SetIntByName("reloading", 0);
  CL_MainSP_Disconnect((LocalClientNum_t)v1);
  ControllerFromClient = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v1);
  if ( CL_Mgr_GetMode() == CLIENT_MANAGER_MODE_ONE_CLIENT )
    GamerProfile_UpdateProfileAndSaveIfNeeded(ControllerFromClient);
  if ( connectionState )
    Com_Error_impl(ERR_DISCONNECT, (const ObfuscateErrorText)&stru_144009380);
}

/*
==============
CL_MainSP_GameAllocate
==============
*/
void CL_MainSP_GameAllocate(void)
{
  HunkUser *HunkUser; 
  __int64 v1; 
  FXRegisteredDef (*attachmentFXDef)[8]; 
  __int64 v3; 
  FXRegisteredDef (*onAttachFXDef)[8]; 
  unsigned __int64 v5; 
  unsigned __int64 FreeReserveAmount; 
  DismembermentConfig config; 

  if ( !LODWORD(cl_maxLocalClients) )
  {
    if ( Com_IsAnyLocalServerRunning() )
    {
      if ( !s_clientAllocSettings_0.isBaseAllocated && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_main_sp.cpp", 1491, ASSERT_TYPE_ASSERT, "(s_clientAllocSettings.isBaseAllocated)", (const char *)&queryFormat, "s_clientAllocSettings.isBaseAllocated") )
        __debugbreak();
      if ( !LODWORD(cl_maxLocalClients) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_main_sp.cpp", 1492, ASSERT_TYPE_ASSERT, "(cl_maxLocalClients)", (const char *)&queryFormat, "cl_maxLocalClients") )
        __debugbreak();
    }
    else
    {
      CL_MainSP_GameMemoryFree();
      if ( !Com_GameMode_SupportsFeature(WEAPON_LEAP_LOOP) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_main_sp.cpp", 1473, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::SINGLE_LOCAL_CLIENT ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::SINGLE_LOCAL_CLIENT )") )
        __debugbreak();
      HunkUser = CL_Main_AllocateHunkUser(0x5000000u);
      ClActiveClientSP::AllocateClients(HunkUser, 1);
      ClConnectionSP::AllocateClientConnections(HunkUser, 1);
      CL_Main_AllocateDObjMemory(HunkUser, 0, 1);
      CL_Main_AllocateSkelMemory(HunkUser, 0x110000u);
      Com_AllocateXAnimNodeMemory(HunkUser, 1, 1, 0);
      XAnimProceduralBonesAllocator_AllocateClientMemorySP(HunkUser, 1);
      FX_AllocateClientMemory(HunkUser, 1);
      FX_MarkAllocateClientMemory(HunkUser, 1);
      v1 = 400i64;
      attachmentFXDef = config.attachmentFXDef;
      v3 = 400i64;
      do
      {
        FXRegisteredDef::FXRegisteredDef((FXRegisteredDef *)attachmentFXDef);
        attachmentFXDef = (FXRegisteredDef (*)[8])((char *)attachmentFXDef + 8);
        --v3;
      }
      while ( v3 );
      onAttachFXDef = config.onAttachFXDef;
      do
      {
        FXRegisteredDef::FXRegisteredDef((FXRegisteredDef *)onAttachFXDef);
        onAttachFXDef = (FXRegisteredDef (*)[8])((char *)onAttachFXDef + 8);
        --v1;
      }
      while ( v1 );
      FX_Dismemberment_LoadConfig("sp/dismemberment_config.csv", NULL, &config, 0);
      FX_Dismemberment_AllocateClientMemory(HunkUser, 1, &config);
      v5 = 100 * Mem_HunkUser_GetFreeReserveAmount(HunkUser) / 0x5000000;
      FreeReserveAmount = Mem_HunkUser_GetFreeReserveAmount(HunkUser);
      Com_Printf(10, "GameAllocate: Loaded local client memory. Free client hunk memory: %zu kb (%zu %%)\n", FreeReserveAmount >> 10, v5);
      LODWORD(cl_maxLocalClients) = 1;
      *(_QWORD *)&cls.maxClients = 1i64;
      ClStatic::GenerateGameActiveClientInfo(&cls);
      s_clientAllocSettings_0.baseAllocationPos = Mem_HunkUser_GetPos(HunkUser);
      s_clientAllocSettings_0.isBaseAllocated = 1;
    }
  }
}

/*
==============
CL_MainSP_GameMemoryFree
==============
*/
void CL_MainSP_GameMemoryFree()
{
  s_clientAllocSettings_0.isPostMapAllocated = 0;
  CG_MainSP_FreeClientMemory();
  CL_Glass_FreeClientMemory();
  ScriptableCl_ShutdownCounts();
  ScriptableCl_DestroyMemory();
  s_clientAllocSettings_0.isBaseAllocated = 0;
  FX_Dismemberment_FreeClientMemory();
  FX_FreeClientMemory();
  FX_MarkFreeClientMemory();
  R_Cinematic_StopPlayback(0);
  CL_Main_FreeLoadZones();
  XAnimProceduralBonesAllocator_FreeClientMemory();
  Com_FreeXAnimNodeMemory();
  CL_Main_FreeSkelMemory();
  CL_Main_FreeDObjMemory();
  if ( SLODWORD(cl_maxLocalClients) > 0 )
  {
    ClActiveClientSP::FreeClients();
    ClConnectionSP::FreeClientConnections();
    cl_maxLocalClients = 0.0;
    *(_QWORD *)&cls.maxClients = 0i64;
    ClStatic::ClearGameActiveClientInfo(&cls);
  }
  *(_QWORD *)&s_clientAllocSettings_0.isBaseAllocated = 0i64;
  s_clientAllocSettings_0.baseAllocationPos = NULL;
  CL_Main_FreeHunkUser();
  Com_Printf(14, "Unloaded local client memory\n");
}

/*
==============
CL_MainSP_GamePostMapMemoryAllocate
==============
*/
void CL_MainSP_GamePostMapMemoryAllocate(void)
{
  HunkUser *HunkUser; 
  void *Pos; 
  int maxClients; 
  int maxAgents; 
  unsigned int v4; 
  unsigned __int64 v5; 
  unsigned __int64 FreeReserveAmount; 

  HunkUser = CL_Main_GetHunkUser();
  if ( s_clientAllocSettings_0.isPostMapAllocated )
  {
    s_clientAllocSettings_0.isPostMapAllocated = 0;
    CG_MainSP_FreeClientMemory();
    CL_Glass_FreeClientMemory();
    ScriptableCl_ShutdownCounts();
    ScriptableCl_DestroyMemory();
    Mem_HunkUser_SetPos(HunkUser, s_clientAllocSettings_0.baseAllocationPos);
    Mem_HunkUser_DecommitUnused(HunkUser);
    if ( s_clientAllocSettings_0.isPostMapAllocated && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_main_sp.cpp", 1560, ASSERT_TYPE_ASSERT, "(!s_clientAllocSettings.isPostMapAllocated)", (const char *)&queryFormat, "!s_clientAllocSettings.isPostMapAllocated") )
      __debugbreak();
  }
  if ( s_clientAllocSettings_0.baseAllocationPos != Mem_HunkUser_GetPos(HunkUser) )
  {
    Pos = Mem_HunkUser_GetPos(HunkUser);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_main_sp.cpp", 1561, ASSERT_TYPE_ASSERT, "( s_clientAllocSettings.baseAllocationPos ) == ( Mem_HunkUser_GetPos( clHunkUser ) )", "%s == %s\n\t%p, %p", "s_clientAllocSettings.baseAllocationPos", "Mem_HunkUser_GetPos( clHunkUser )", s_clientAllocSettings_0.baseAllocationPos, Pos) )
      __debugbreak();
  }
  maxClients = cls.maxClients;
  maxAgents = cls.maxAgents;
  v4 = LODWORD(cl_maxLocalClients);
  ScriptableCl_InitCounts(cls.maxClients, cls.maxAgents);
  ScriptableCl_InitMemory(HunkUser, v4);
  CG_MainSP_AllocateClientMemory(HunkUser, v4, maxClients, maxAgents);
  v5 = Mem_HunkUser_GetUsedSize(HunkUser) >> 10;
  FreeReserveAmount = Mem_HunkUser_GetFreeReserveAmount(HunkUser);
  Com_Printf(10, "GameAllocatePostMap: Loaded local client memory phase 2. Free client hunk memory: %zu kb (%zu used)\n", FreeReserveAmount >> 10, v5);
  s_clientAllocSettings_0.isPostMapAllocated = 1;
}

/*
==============
CL_MainSP_InitGameMode
==============
*/
void CL_MainSP_InitGameMode(void)
{
  Com_Printf(14, "----- SP All Clients Initialization -----\n");
  if ( !loc_language && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_main_sp.cpp", 1377, ASSERT_TYPE_ASSERT, "(loc_language)", (const char *)&queryFormat, "loc_language") )
    __debugbreak();
  if ( !loc_translate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_main_sp.cpp", 1378, ASSERT_TYPE_ASSERT, "(loc_translate)", (const char *)&queryFormat, "loc_translate") )
    __debugbreak();
  DVARINT_cl_freemove = Dvar_RegisterInt("LTNQQOMQSO", 0, 0, 3, 4u, "Fly about the level");
  DVARFLT_cl_freemoveScale = Dvar_RegisterFloat("NQTROKMNTM", 1.0, 0.0, 5.0, 4u, "Scale how fast you move in cl_freemove mode");
  DVARBOOL_cl_accessibilityAkimboEnabled = Dvar_RegisterBool("NTPPSKLPMP", 1, 0x40u, "True if accessibility configurations adjust input for akimbo weapons");
  DCONST_DVARINT_cl_defaultTransitionSettleTimeMs = Dvar_RegisterInt("cl_defaultTransitionSettleTimeMs", 50, 0, 10000, 0x40004u, "The default time for running the transition settle frames unless specified otherwise by LUA script.");
  R_RegisterNetworkDvars();
  CG_MainSP_RegisterDvars();
  Cmd_AddClientCommandList(S_CL_MAIN_CMD_SP_0, 0xAu);
  CL_InputSP_RegisterCommands();
  CL_ConsoleSP_RegisterCommands();
  CL_UI_ClientModel_Reset();
  Com_Printf(14, "----- SP All Clients Initialization Complete -----\n");
}

/*
==============
CL_MainSP_InitGameModeClient
==============
*/
void CL_MainSP_InitGameModeClient(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  __int64 v2; 
  int v4; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v4 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 158, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v4) )
      __debugbreak();
  }
  v2 = v1;
  Com_Printf(14, "----- CL_MainSP_InitClient %i -----\n", (unsigned int)v1);
  if ( clientUIActives[v1].connectionState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_main_sp.cpp", 1427, ASSERT_TYPE_ASSERT, "(clUI->connectionState == CA_DISCONNECTED)", "%s\n\tShould be initialized in common CL_Main_InitClient", "clUI->connectionState == CA_DISCONNECTED") )
    __debugbreak();
  if ( !clientUIActives[v2].isRunning && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_main_sp.cpp", 1428, ASSERT_TYPE_ASSERT, "(clUI->isRunning)", "%s\n\tShould be initialized in common CL_Main_InitClient", "clUI->isRunning") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_LEAP_LOOP) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_main_sp.cpp", 1430, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::SINGLE_LOCAL_CLIENT ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::SINGLE_LOCAL_CLIENT )") )
    __debugbreak();
  if ( (_DWORD)v1 )
  {
    CL_SetLocalClientActive((LocalClientNum_t)v1, 0);
    clientUIActives[v2].isRunning = 0;
  }
}

/*
==============
CL_MainSP_InitLoad
==============
*/
void CL_MainSP_InitLoad(const char *mapname)
{
  LocalClientNum_t OnlyLocalClientNum; 
  __int64 v3; 
  __int64 v4; 
  __int64 v5; 
  LocalClientNum_t v6; 
  __int64 v7; 
  int v8; 

  OnlyLocalClientNum = CL_GetOnlyLocalClientNum();
  v3 = OnlyLocalClientNum;
  if ( (unsigned int)OnlyLocalClientNum >= LOCAL_CLIENT_COUNT )
  {
    v8 = 2;
    v6 = OnlyLocalClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 158, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v6, v8) )
      __debugbreak();
  }
  v4 = v3;
  if ( clientUIActives[v3].isRunning )
  {
    CL_MainSP_Disconnect((LocalClientNum_t)v3);
    CL_SetLocalClientActive((LocalClientNum_t)v3, 1);
    UI_SetMap(mapname, (const char *)&queryFormat.fmt + 3);
    if ( (unsigned int)v3 >= 2 )
    {
      LODWORD(v7) = 2;
      LODWORD(v5) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 195, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v5, v7) )
        __debugbreak();
    }
    Com_Printf(14, "CL_SetLocalConnectionState %i -> %i.\n", (unsigned int)clientUIActives[v4].connectionState, 10i64);
    clientUIActives[v4].connectionState = CA_MAP_RESTART;
  }
}

/*
==============
CL_MainSP_IsRunningTransitionSettleFrames
==============
*/
bool CL_MainSP_IsRunningTransitionSettleFrames(const LocalClientNum_t localClientNum)
{
  ClActiveClientSP *ClientSP; 

  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_main_sp.cpp", 1699, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( localClientNum >= SLODWORD(cl_maxLocalClients) )
    return 0;
  ClientSP = ClActiveClientSP::GetClientSP(localClientNum);
  if ( !ClientSP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_main_sp.cpp", 1704, ASSERT_TYPE_ASSERT, "(cl)", (const char *)&queryFormat, "cl") )
    __debugbreak();
  return ClientSP->settleTimeRemainingMs > 0;
}

/*
==============
CL_MainSP_LocalPacketEvent
==============
*/
void CL_MainSP_LocalPacketEvent(msg_t *msg, int serverMessageSequence)
{
  if ( (msg->cursize < 4 || *(_DWORD *)msg->data == -1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_main_sp.cpp", 844, ASSERT_TYPE_ASSERT, "(msg->cursize >= 4 && *(int *)msg->data != -1)", (const char *)&queryFormat, "msg->cursize >= 4 && *(int *)msg->data != -1") )
    __debugbreak();
  MSG_BeginReading(msg);
  cls.serverMessageSequence = serverMessageSequence;
  CL_ParseSP_ParseServerMessage(msg);
}

/*
==============
CL_MainSP_MapLoading
==============
*/
void CL_MainSP_MapLoading(const char *mapname)
{
  LocalClientNum_t OnlyLocalClientNum; 
  __int64 v3; 
  __int64 v4; 
  __int64 v5; 
  LocalClientNum_t v6; 
  __int64 v7; 
  int v8; 

  OnlyLocalClientNum = CL_GetOnlyLocalClientNum();
  v3 = OnlyLocalClientNum;
  if ( (unsigned int)OnlyLocalClientNum >= LOCAL_CLIENT_COUNT )
  {
    v8 = 2;
    v6 = OnlyLocalClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 158, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v6, v8) )
      __debugbreak();
  }
  v4 = v3;
  if ( clientUIActives[v3].isRunning )
  {
    Con_Close((LocalClientNum_t)v3);
    clientUIActives[v4].keyCatchers = 0;
    Core_strcpy(cls.servername, 0x100ui64, "localhost");
    if ( (unsigned int)v3 >= 2 )
    {
      LODWORD(v7) = 2;
      LODWORD(v5) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v5, v7) )
        __debugbreak();
    }
    if ( clientUIActives[v4].connectionState != CA_MAP_RESTART )
    {
      if ( (unsigned int)v3 >= 2 )
      {
        LODWORD(v7) = 2;
        LODWORD(v5) = v3;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v5, v7) )
          __debugbreak();
      }
      LODWORD(v5) = clientUIActives[v4].connectionState;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_main_sp.cpp", 474, ASSERT_TYPE_ASSERT, "( ( CL_GetLocalClientAnyConnectionState( localClientNum ) == CA_MAP_RESTART ) )", "( CL_GetLocalClientAnyConnectionState( localClientNum ) ) = %i", v5) )
        __debugbreak();
    }
    if ( CL_IsLocalClientActive((LocalClientNum_t)v3) )
    {
      if ( (unsigned int)v3 >= 2 )
      {
        LODWORD(v7) = 2;
        LODWORD(v5) = v3;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 195, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v5, v7) )
          __debugbreak();
      }
      Com_Printf(14, "CL_SetLocalConnectionState %i -> %i.\n", (unsigned int)clientUIActives[v4].connectionState, 7i64);
      clientUIActives[v4].connectionState = CA_LOADING;
    }
    if ( !DB_IsDoingSPHotLoad() )
    {
      if ( DB_IsDoingSPHotLoadBinkTransition() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_main_sp.cpp", 482, ASSERT_TYPE_ASSERT, "(!DB_IsDoingSPHotLoadBinkTransition())", (const char *)&queryFormat, "!DB_IsDoingSPHotLoadBinkTransition()") )
        __debugbreak();
      SND_SetLevelFadeIn(0.0, 0);
      SND_StopSounds(SND_STOP_ALL);
      SND_FadeAllSounds(1.0, 0);
    }
    if ( SND_ExistsPendingRestore() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_main_sp.cpp", 488, ASSERT_TYPE_ASSERT, "(!SND_ExistsPendingRestore())", (const char *)&queryFormat, "!SND_ExistsPendingRestore()") )
      __debugbreak();
    CL_Main_UpdateSound(0);
    Live_SetCurrentMapname(mapname);
  }
}

/*
==============
CL_MainSP_Pause
==============
*/
char CL_MainSP_Pause(LocalClientNum_t localClientNum, bool notifyLUI, CLPauseReason pauseReason)
{
  bool v6; 
  CLPauseReason v7; 

  if ( !CL_MainSP_CanPause() )
    return 0;
  v6 = CL_Pause_IsGamePaused() && CL_Pause_IsPausedForReason((CLPauseReason)128);
  if ( CL_Pause_IsGamePaused() && !v6 )
    return 0;
  if ( pauseReason == 32 || pauseReason == 512 )
  {
    v7 = CL_Pause_GetPauseReason();
    CL_Pause_SetPauseReason((CLPauseReason)(pauseReason | v7));
  }
  else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_main_sp.cpp", 1198, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled pause reason.") )
  {
    __debugbreak();
  }
  if ( !CL_Keys_IsKeyDown(localClientNum, 16) && notifyLUI )
    LUI_CoD_Pause(localClientNum);
  return 1;
}

/*
==============
CL_MainSP_PlayMapMovie
==============
*/
void CL_MainSP_PlayMapMovie(const char *mapname)
{
  const char *RawFile; 
  Mem_LargeLocal v3; 
  char outMovieName[256]; 

  Com_FastFile_CheckGameWorkComplete();
  Mem_LargeLocal::Mem_LargeLocal(&v3, 0x18000ui64, "max_raw_buf buf");
  RawFile = DB_ReadRawFile("video/cin_levels.txt", (char *)v3.m_ptr, 98304);
  if ( !RawFile )
    Com_Error_impl(ERR_FATAL, (const ObfuscateErrorText)&stru_14423B788, 595i64, "video/cin_levels.txt", -2i64);
  CL_MapLoading_CalcMovieToPlay(RawFile, mapname, (char (*)[256])outMovieName);
  Mem_LargeLocal::~Mem_LargeLocal(&v3);
  DB_SyncXAssets();
  R_Cinematic_StartPlayback(outMovieName, 0x80u, 0);
}

/*
==============
CL_MainSP_ResetSaveGameExists
==============
*/
void CL_MainSP_ResetSaveGameExists(void)
{
  Dvar_SetBool_Internal(DVARBOOL_com_saveGameAvailable, 0);
}

/*
==============
CL_MainSP_SetAnimFrametime
==============
*/
void CL_MainSP_SetAnimFrametime(int animFrametime)
{
  cls.animFrametime = animFrametime;
}

/*
==============
CL_MainSP_SetCurrentMapHasSaveGame
==============
*/
void CL_MainSP_SetCurrentMapHasSaveGame(bool hasSaveGame)
{
  Sys_EnterCriticalSection(CRITSECT_MAP_HAS_SAVE_GAME);
  s_currentMapHasSaveGame = hasSaveGame;
  Sys_LeaveCriticalSection(CRITSECT_MAP_HAS_SAVE_GAME);
}

/*
==============
CL_MainSP_SetServerCommandSequence
==============
*/
void CL_MainSP_SetServerCommandSequence(int reliableSent)
{
  LocalClientNum_t OnlyLocalClientNum; 

  OnlyLocalClientNum = CL_GetOnlyLocalClientNum();
  CG_GetLocalClientGlobals(OnlyLocalClientNum)->serverCommandSequence = reliableSent;
}

/*
==============
CL_MainSP_ShowPopupWaitingForTransientFiles
==============
*/
bool CL_MainSP_ShowPopupWaitingForTransientFiles()
{
  return Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_SLIDE|0x80) && CL_Pause_IsGamePaused() && CL_Pause_IsPausedForReason((CLPauseReason)128);
}

/*
==============
CL_MainSP_ShutdownClientBeforeTransientClientSync
==============
*/
void CL_MainSP_ShutdownClientBeforeTransientClientSync(const LocalClientNum_t localClientNum)
{
  Physics_WaitForAllCommandsToFinish();
  DynEntCl_Shutdown(localClientNum);
}

/*
==============
CL_MainSP_ShutdownGameMode
==============
*/
void CL_MainSP_ShutdownGameMode(void)
{
  Com_Printf(14, "----- CL_MainSP_ShutdownGameMode -----\n");
  if ( !CL_AllLocalClientsDisconnected() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_main_sp.cpp", 1403, ASSERT_TYPE_ASSERT, "(CL_AllLocalClientsDisconnected())", (const char *)&queryFormat, "CL_AllLocalClientsDisconnected()") )
    __debugbreak();
  CL_CGameSP_ClearSoundAliasCache();
  CL_ConsoleSP_UnregisterCommands();
  CL_InputSP_UnregisterCommands();
  Cmd_RemoveClientCommandList(S_CL_MAIN_CMD_SP_0, 0xAu);
  DVARINT_cl_freemove = Dvar_Deregister(DVARINT_cl_freemove);
  DVARFLT_cl_freemoveScale = Dvar_Deregister(DVARFLT_cl_freemoveScale);
  DVARBOOL_cl_accessibilityAkimboEnabled = Dvar_Deregister(DVARBOOL_cl_accessibilityAkimboEnabled);
  DCONST_DVARINT_cl_defaultTransitionSettleTimeMs = Dvar_Deregister(DCONST_DVARINT_cl_defaultTransitionSettleTimeMs);
  R_DeRegisterNetworkDvars();
  CG_MainSP_DeRegisterDvars();
  Com_Printf(14, "-----------------------\n");
}

/*
==============
CL_MainSP_ShutdownGameModeClient
==============
*/
void CL_MainSP_ShutdownGameModeClient(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  clientUIActive_t *LocalClientUIGlobals; 
  int v3; 
  int v4; 

  v1 = localClientNum;
  Com_Printf(14, "----- CL_MainSP_ShutdownClient %i -----\n", (unsigned int)localClientNum);
  if ( (unsigned int)v1 >= 2 )
  {
    v4 = 2;
    v3 = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  if ( clientUIActives[v1].connectionState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_main_sp.cpp", 1446, ASSERT_TYPE_ASSERT, "(CL_IsLocalClientDisconnectedFromAnyServer( localClientNum ))", (const char *)&queryFormat, "CL_IsLocalClientDisconnectedFromAnyServer( localClientNum )") )
    __debugbreak();
  if ( (_DWORD)v1 )
  {
    LocalClientUIGlobals = CL_GetLocalClientUIGlobals((const LocalClientNum_t)v1);
    if ( LocalClientUIGlobals->isRunning && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_main_sp.cpp", 1452, ASSERT_TYPE_ASSERT, "(!clUI->isRunning)", (const char *)&queryFormat, "!clUI->isRunning") )
      __debugbreak();
    LocalClientUIGlobals->isRunning = 1;
  }
}

/*
==============
CL_MainSP_ShutdownMemory
==============
*/

void CL_MainSP_ShutdownMemory(void)
{
  CL_MainSP_GameMemoryFree();
}

/*
==============
CL_MainSP_StartTransitionSettleFrames
==============
*/
void CL_MainSP_StartTransitionSettleFrames(const LocalClientNum_t localClientNum, const int settleTimeMs)
{
  bool v4; 
  const dvar_t *v5; 
  ClActiveClientSP *ClientSP; 
  CLPauseReason PauseReason; 

  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_main_sp.cpp", 1659, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( !Com_GameIsPaused() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_main_sp.cpp", 1660, ASSERT_TYPE_ASSERT, "(Com_GameIsPaused())", (const char *)&queryFormat, "Com_GameIsPaused()") )
    __debugbreak();
  v4 = settleTimeMs == 0;
  if ( settleTimeMs < 0 )
  {
    v5 = DCONST_DVARINT_cl_defaultTransitionSettleTimeMs;
    if ( !DCONST_DVARINT_cl_defaultTransitionSettleTimeMs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_defaultTransitionSettleTimeMs") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v5);
    settleTimeMs = v5->current.integer;
    v4 = settleTimeMs == 0;
  }
  if ( !v4 )
  {
    ClientSP = ClActiveClientSP::GetClientSP(localClientNum);
    if ( !ClientSP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_main_sp.cpp", 1675, ASSERT_TYPE_ASSERT, "(cl)", (const char *)&queryFormat, "cl") )
      __debugbreak();
    ClientSP->settleTimeRemainingMs = settleTimeMs;
    PauseReason = CL_Pause_GetPauseReason();
    CL_Pause_SetPauseReason((CLPauseReason)(PauseReason & 0xFFFFFFF7));
  }
}

/*
==============
CL_MainSP_StopTransitionSettleFrames
==============
*/
void CL_MainSP_StopTransitionSettleFrames(const LocalClientNum_t localClientNum)
{
  CLPauseReason PauseReason; 
  int v3; 

  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v3 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_main_sp.cpp", 1687, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v3) )
      __debugbreak();
  }
  if ( Com_GameIsPaused() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_main_sp.cpp", 1688, ASSERT_TYPE_ASSERT, "(!Com_GameIsPaused())", (const char *)&queryFormat, "!Com_GameIsPaused()") )
    __debugbreak();
  PauseReason = CL_Pause_GetPauseReason();
  CL_Pause_SetPauseReason((CLPauseReason)(PauseReason | 8));
}

/*
==============
CL_MainSP_TogglePause
==============
*/
void CL_MainSP_TogglePause(LocalClientNum_t localClientNum)
{
  bool v2; 
  bool v3; 
  CLPauseReason PauseReason; 

  v2 = CL_Pause_IsGamePaused() && CL_Pause_IsPausedForReason((CLPauseReason)128);
  if ( !CL_Pause_IsGamePaused() || v2 )
  {
    if ( CL_MainSP_CanPause() )
    {
      v3 = CL_Pause_IsGamePaused() && CL_Pause_IsPausedForReason((CLPauseReason)128);
      if ( !CL_Pause_IsGamePaused() || v3 )
      {
        PauseReason = CL_Pause_GetPauseReason();
        CL_Pause_SetPauseReason((CLPauseReason)(PauseReason | 0x20));
        if ( !CL_Keys_IsKeyDown(localClientNum, 16) )
          LUI_CoD_Pause(localClientNum);
      }
    }
  }
  else if ( DVARINT_reloading )
  {
    if ( CL_Pause_IsGamePaused() )
    {
      CL_Pause_UnpauseGameForReason((CLPauseReason)32);
      LUI_CoD_Unpause(localClientNum);
    }
    SND_SetIgnorePauseFlag(0);
  }
}

/*
==============
CL_MainSP_TransientAutoPauseGame
==============
*/
void CL_MainSP_TransientAutoPauseGame(void)
{
  bool IsPauseRequested; 
  bool IsGamePaused; 
  CLPauseReason PauseReason; 
  CLPauseReason v3; 
  CLPauseReason v4; 

  IsPauseRequested = CL_TransientsSP_IsPauseRequested();
  IsGamePaused = CL_Pause_IsGamePaused();
  if ( IsPauseRequested )
  {
    if ( !IsGamePaused && CL_MainSP_CanPause() )
    {
      PauseReason = CL_Pause_GetPauseReason();
      CL_Pause_SetPauseReason((CLPauseReason)(PauseReason | 0x80));
      if ( DB_Transients_VerbosePrint() )
        Com_Printf(16, "TRANSIENT_CL: Game paused. Waiting for transient files to complete loading.\n");
    }
  }
  else if ( IsGamePaused && CL_Pause_IsPausedForReason((CLPauseReason)128) )
  {
    if ( DVARINT_reloading )
    {
      v3 = CL_Pause_GetPauseReason();
      CL_Pause_SetPauseReason((CLPauseReason)(v3 & 0xFFFFFF7F));
      if ( DB_Transients_VerbosePrint() )
        Com_Printf(16, "TRANSIENT_CL: Game unpaused. Transient files completed loading.\n");
    }
  }
  else
  {
    v4 = CL_Pause_GetPauseReason();
    CL_Pause_SetPauseReason((CLPauseReason)(v4 & 0xFFFFFF7F));
  }
}

/*
==============
CL_MainSP_Unpause
==============
*/
void CL_MainSP_Unpause(LocalClientNum_t localClientNum, CLPauseReason pauseReason)
{
  if ( DVARINT_reloading )
  {
    if ( CL_Pause_IsGamePaused() )
    {
      CL_Pause_UnpauseGameForReason(pauseReason);
      LUI_CoD_Unpause(localClientNum);
    }
    SND_SetIgnorePauseFlag(0);
  }
}

/*
==============
CL_MainSP_UpdateTransitionSettleAfterClientFrame
==============
*/
void CL_MainSP_UpdateTransitionSettleAfterClientFrame(const LocalClientNum_t localClientNum)
{
  ClActiveClientSP *ClientSP; 
  cg_t *LocalClientGlobals; 
  CLPauseReason PauseReason; 
  __int64 v5; 
  __int64 v6; 

  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_main_sp.cpp", 1728, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  ClientSP = ClActiveClientSP::GetClientSP(localClientNum);
  if ( !ClientSP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_main_sp.cpp", 1731, ASSERT_TYPE_ASSERT, "(cl)", (const char *)&queryFormat, "cl") )
    __debugbreak();
  if ( ClientSP->settleTimeRemainingMs > 0 )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_main_sp.cpp", 1739, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    ClientSP->settleTimeRemainingMs -= LocalClientGlobals->frametime;
    if ( ClientSP->settleTimeRemainingMs <= 0 )
    {
      if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
      {
        LODWORD(v6) = 2;
        LODWORD(v5) = localClientNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_main_sp.cpp", 1687, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v5, v6) )
          __debugbreak();
      }
      if ( Com_GameIsPaused() )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_main_sp.cpp", 1688, ASSERT_TYPE_ASSERT, "(!Com_GameIsPaused())", (const char *)&queryFormat, "!Com_GameIsPaused()") )
          __debugbreak();
      }
      PauseReason = CL_Pause_GetPauseReason();
      CL_Pause_SetPauseReason((CLPauseReason)(PauseReason | 8));
      LocalClientGlobals->transitionSettleIsActive = 0;
    }
  }
}

/*
==============
CL_MainSP_UpdateTransitionSettleBeforeClientFrame
==============
*/
void CL_MainSP_UpdateTransitionSettleBeforeClientFrame(const LocalClientNum_t localClientNum)
{
  ClActiveClientSP *ClientSP; 
  cg_t *LocalClientGlobals; 

  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_main_sp.cpp", 1714, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  ClientSP = ClActiveClientSP::GetClientSP(localClientNum);
  if ( !ClientSP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_main_sp.cpp", 1717, ASSERT_TYPE_ASSERT, "(cl)", (const char *)&queryFormat, "cl") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_main_sp.cpp", 1720, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  LocalClientGlobals->transitionSettleIsActive = ClientSP->settleTimeRemainingMs > 0;
}

/*
==============
CL_MapLoading_CalcMovieToPlay
==============
*/
void CL_MapLoading_CalcMovieToPlay(const char *buffer, const char *inMapName, char (*outMovieName)[256])
{
  unsigned int v3; 
  int v4; 
  char *v5; 
  const char *v6; 
  const char *v7; 
  __int64 v8; 
  char v9; 
  const MovieToPlayScriptOpInfo *i; 
  const char *opName; 
  unsigned int inValues; 
  char *v13; 
  const char *v14; 
  const char *v15; 
  char *v16; 
  int v17; 
  __int64 v18; 
  int v19; 
  int v20; 
  int v21; 
  int v22; 
  int v23; 
  char *v24; 
  char *v25; 
  char v26; 
  char *v27; 
  char *VariantString; 
  int v29; 
  char *data_p; 
  char *v31; 
  char *v32; 
  char src[576]; 

  data_p = (char *)buffer;
  v3 = 0;
  (*outMovieName)[0] = 0;
  v4 = 0;
  v31 = (char *)outMovieName;
  v5 = (char *)outMovieName;
  v32 = (char *)inMapName;
  Com_BeginParseSession("video/cin_levels.txt");
  do
  {
    v6 = Com_Parse((const char **)&data_p);
    v7 = v6;
    if ( !*v6 )
      break;
    if ( v4 )
    {
      v8 = 0i64;
      while ( 1 )
      {
        v9 = v6[v8++];
        if ( v9 != aThen[v8 - 1] )
          break;
        if ( v8 == 5 )
        {
          --v4;
          goto LABEL_54;
        }
      }
      if ( *v6 == aIf[0] && v6[1] == aIf[1] && v6[2] == aIf[2] )
        ++v4;
    }
    else
    {
      for ( i = s_movieToPlayScriptOpInfo; ; ++i )
      {
        if ( i == (const MovieToPlayScriptOpInfo *)"IWIW" && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_main_sp.cpp", 294, ASSERT_TYPE_ASSERT, "(opInfo != &s_movieToPlayScriptOpInfo[( sizeof( *array_counter( s_movieToPlayScriptOpInfo ) ) + 0 )])", (const char *)&queryFormat, "opInfo != &s_movieToPlayScriptOpInfo[ARRAY_COUNT( s_movieToPlayScriptOpInfo )]", data_p) )
          __debugbreak();
        opName = i->opName;
        if ( !opName || !strcmp(v7, opName) )
          break;
      }
      inValues = i->inValues;
      v5 = v31;
      v13 = v32;
      if ( v3 < inValues )
      {
        v14 = "push literal";
        if ( opName )
          v14 = "do special command";
        Com_Error_impl(ERR_FATAL, (const ObfuscateErrorText)&stru_14423B648, 590i64, "video/cin_levels.txt", v14, v7);
        inValues = i->inValues;
      }
      if ( v3 + i->outValues - inValues >= 8 )
      {
        v15 = "push literal";
        if ( i->opName )
          v15 = "do special command";
        Com_Error_impl(ERR_FATAL, (const ObfuscateErrorText)&stru_14423B690, 591i64, "video/cin_levels.txt", v15, v7);
      }
      switch ( i->op )
      {
        case MTPSOP_PLUS:
          v16 = &src[64 * (unsigned __int64)(v3 - 2) + 64];
          v17 = atoi(&src[64 * (unsigned __int64)(v3 - 1) + 64]);
          v18 = (unsigned int)(atoi(v16) + v17);
          goto LABEL_29;
        case MTPSOP_MINUS:
          v16 = &src[64 * (unsigned __int64)(v3 - 2) + 64];
          v19 = atoi(&src[64 * (unsigned __int64)(v3 - 1) + 64]);
          v18 = (unsigned int)(atoi(v16) - v19);
          goto LABEL_29;
        case MTPSOP_MUL:
          v16 = &src[64 * (unsigned __int64)(v3 - 2) + 64];
          v20 = atoi(&src[64 * (unsigned __int64)(v3 - 1) + 64]);
          v18 = (unsigned int)(atoi(v16) * v20);
          goto LABEL_29;
        case MTPSOP_GT:
          v16 = &src[64 * (unsigned __int64)(v3 - 2) + 64];
          v21 = atoi(&src[64 * (unsigned __int64)(v3 - 1) + 64]);
          v18 = atoi(v16) > v21;
          goto LABEL_29;
        case MTPSOP_LT:
          v16 = &src[64 * (unsigned __int64)(v3 - 2) + 64];
          v22 = atoi(&src[64 * (unsigned __int64)(v3 - 1) + 64]);
          v18 = atoi(v16) < v22;
          goto LABEL_29;
        case MTPSOP_EQ:
          v16 = &src[64 * (unsigned __int64)(v3 - 2) + 64];
          v23 = atoi(&src[64 * (unsigned __int64)(v3 - 1) + 64]);
          v18 = atoi(v16) == v23;
LABEL_29:
          Com_sprintf<64>((char (*)[64])v16, "%i", v18);
          goto $LN14_141;
        case MTPSOP_STRCMP:
          v24 = &src[64 * (unsigned __int64)(v3 - 2) + 64];
          v25 = (char *)(&src[64 * (unsigned __int64)(v3 - 1) + 64] - v24);
          break;
        case MTPSOP_STRCAT:
          v27 = &src[64 * (unsigned __int64)(v3 - 2) + 64];
          Com_sprintf(src, 0x40ui64, "%s%s", v27, &src[64 * (unsigned __int64)(v3 - 1) + 64]);
          VariantString = src;
          goto LABEL_41;
        case MTPSOP_NOT:
          v29 = atoi(&src[64 * (unsigned __int64)(v3 - 1) + 64]);
          Com_sprintf<64>((char (*)[64])&src[64 * (unsigned __int64)(v3 - 1) + 64], "%i", v29 == 0);
          goto $LN14_141;
        case MTPSOP_DUP:
          Core_strcpy(&src[64 * (unsigned __int64)v3 + 64], 0x40ui64, &src[64 * (unsigned __int64)(v3 - 1) + 64]);
          goto $LN14_141;
        case MTPSOP_DROP:
        case MTPSOP_THEN:
          goto $LN14_141;
        case MTPSOP_SWAP:
          Core_strcpy(src, 0x40ui64, &src[64 * (unsigned __int64)(v3 - 2) + 64]);
          Core_strcpy(&src[64 * (unsigned __int64)(v3 - 2) + 64], 0x40ui64, &src[64 * (unsigned __int64)(v3 - 1) + 64]);
          Core_strcpy(&src[64 * (unsigned __int64)(v3 - 1) + 64], 0x40ui64, src);
          goto $LN14_141;
        case MTPSOP_GETDVAR:
          v27 = &src[64 * (unsigned __int64)(v3 - 1) + 64];
          VariantString = (char *)Dvar_GetVariantString(v27);
LABEL_41:
          Core_strcpy(v27, 0x40ui64, VariantString);
          goto $LN14_141;
        case MTPSOP_GETMAPNAME:
          Core_strcpy(&src[64 * (unsigned __int64)v3 + 64], 0x40ui64, v13);
          goto $LN14_141;
        case MTPSOP_IF:
          if ( !atoi(&src[64 * (unsigned __int64)(v3 - 1) + 64]) )
            v4 = 1;
          goto $LN14_141;
        case MTPSOP_PLAY:
          Core_strcpy(v5, 0x100ui64, &src[64 * (unsigned __int64)(v3 - 1) + 64]);
          goto $LN14_141;
        case MTPSOP_LITERAL:
          Core_strcpy(&src[64 * (unsigned __int64)v3 + 64], 0x40ui64, v7);
          goto $LN14_141;
        default:
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_main_sp.cpp", 362, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Can't happen.") )
            __debugbreak();
          goto $LN14_141;
      }
      while ( 1 )
      {
        v26 = *v24;
        if ( *v24 != v25[(_QWORD)v24] )
          break;
        ++v24;
        if ( !v26 )
        {
          Com_sprintf<64>((char (*)[64])&src[64 * (unsigned __int64)(v3 - 2) + 64], "%i", 0i64);
          goto $LN14_141;
        }
      }
      Com_sprintf<64>((char (*)[64])&src[64 * (unsigned __int64)(v3 - 2) + 64], "%i", (unsigned __int8)*v24 < (unsigned int)v25[(_QWORD)v24] ? -1 : 1);
$LN14_141:
      v3 += i->outValues - i->inValues;
    }
LABEL_54:
    ;
  }
  while ( !*v5 );
  Com_EndParseSession();
  if ( v4 )
    Com_Error_impl(ERR_FATAL, (const ObfuscateErrorText)&stru_14423B6E8, 592i64, "video/cin_levels.txt");
  if ( !*v5 )
  {
    Com_Error_impl(ERR_FATAL, (const ObfuscateErrorText)&stru_14423B718, 593i64, "video/cin_levels.txt");
    if ( !*v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_main_sp.cpp", 378, ASSERT_TYPE_ASSERT, "(outMovieName[0])", (const char *)&queryFormat, "outMovieName[0]") )
      __debugbreak();
  }
}

