/*
==============
CL_MainMP_SendUserInfoCmd
==============
*/

void __fastcall CL_MainMP_SendUserInfoCmd(LocalClientNum_t localClientNum)
{
  ?CL_MainMP_SendUserInfoCmd@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_MainMP_WasMapAlreadyLoaded
==============
*/

int __fastcall CL_MainMP_WasMapAlreadyLoaded(LocalClientNum_t localClientNum)
{
  return ?CL_MainMP_WasMapAlreadyLoaded@@YAHW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_MainMP_InitializeGamestate
==============
*/

void __fastcall CL_MainMP_InitializeGamestate(LocalClientNum_t localClientNum)
{
  ?CL_MainMP_InitializeGamestate@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_MainMP_ServerTimedOut
==============
*/

void __fastcall CL_MainMP_ServerTimedOut(LocalClientNum_t localClientNum)
{
  ?CL_MainMP_ServerTimedOut@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_MainMP_InParty
==============
*/

bool __fastcall CL_MainMP_InParty(const PartyData *party, const LocalClientNum_t localClientNum)
{
  return ?CL_MainMP_InParty@@YA_NPEBUPartyData@@W4LocalClientNum_t@@@Z(party, localClientNum);
}

/*
==============
CL_MainMP_CheckSplitscreenOfflineStats
==============
*/

void __fastcall CL_MainMP_CheckSplitscreenOfflineStats(LocalClientNum_t localClientNum, const int controllerIndex)
{
  ?CL_MainMP_CheckSplitscreenOfflineStats@@YAXW4LocalClientNum_t@@H@Z(localClientNum, controllerIndex);
}

/*
==============
CL_MainMP_ShutdownMemory
==============
*/

void CL_MainMP_ShutdownMemory(void)
{
  ?CL_MainMP_ShutdownMemory@@YAXXZ();
}

/*
==============
CL_LANInfoResponsePacket
==============
*/

void __fastcall CL_LANInfoResponsePacket(const LocalClientNum_t localClientNum, netadr_t *from, msg_t *msg, int time)
{
  ?CL_LANInfoResponsePacket@@YAXW4LocalClientNum_t@@Unetadr_t@@PEAUmsg_t@@H@Z(localClientNum, from, msg, time);
}

/*
==============
CL_MainMP_DisconnectLocalClient
==============
*/

void __fastcall CL_MainMP_DisconnectLocalClient(LocalClientNum_t localClientNum, bool shouldDeclineInvite)
{
  ?CL_MainMP_DisconnectLocalClient@@YAXW4LocalClientNum_t@@_N@Z(localClientNum, shouldDeclineInvite);
}

/*
==============
CL_MainMP_ClientFrame
==============
*/

void __fastcall CL_MainMP_ClientFrame(LocalClientNum_t localClientNum)
{
  ?CL_MainMP_ClientFrame@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_MainMP_InitLoadFrontEnd
==============
*/

void __fastcall CL_MainMP_InitLoadFrontEnd(const char *mapname, const char *gametype)
{
  ?CL_MainMP_InitLoadFrontEnd@@YAXPEBD0@Z(mapname, gametype);
}

/*
==============
CL_MainMP_IsWaitingOnServerToLoadMap
==============
*/

bool __fastcall CL_MainMP_IsWaitingOnServerToLoadMap(LocalClientNum_t localClientNum)
{
  return ?CL_MainMP_IsWaitingOnServerToLoadMap@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_MainMP_MapLoading
==============
*/

void CL_MainMP_MapLoading(void)
{
  ?CL_MainMP_MapLoading@@YAXXZ();
}

/*
==============
CL_MainMP_InitGameModeClient
==============
*/

void __fastcall CL_MainMP_InitGameModeClient(LocalClientNum_t localClientNum)
{
  ?CL_MainMP_InitGameModeClient@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_MainMP_IsMLGSpectator
==============
*/

bool __fastcall CL_MainMP_IsMLGSpectator(const LocalClientNum_t localClientNum)
{
  return ?CL_MainMP_IsMLGSpectator@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_MainMP_ShutdownGameMode
==============
*/

void CL_MainMP_ShutdownGameMode(void)
{
  ?CL_MainMP_ShutdownGameMode@@YAXXZ();
}

/*
==============
CL_MainMP_LocalClientJoinPrivateParty
==============
*/

bool __fastcall CL_MainMP_LocalClientJoinPrivateParty(int localControllerIndex)
{
  return ?CL_MainMP_LocalClientJoinPrivateParty@@YA_NH@Z(localControllerIndex);
}

/*
==============
CL_MainMP_LocalServers
==============
*/

void __fastcall CL_MainMP_LocalServers(LocalClientNum_t localClientNum)
{
  ?CL_MainMP_LocalServers@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_MainMP_GameAllocate
==============
*/

void __fastcall CL_MainMP_GameAllocate(int flags)
{
  ?CL_MainMP_GameAllocate@@YAXH@Z(flags);
}

/*
==============
CL_MainMP_InitGameMode
==============
*/

void CL_MainMP_InitGameMode(void)
{
  ?CL_MainMP_InitGameMode@@YAXXZ();
}

/*
==============
CL_MainMP_GetServerList
==============
*/

void __fastcall CL_MainMP_GetServerList(int source, ClServerInfo **servers, int *count)
{
  ?CL_MainMP_GetServerList@@YAXHPEAPEAUClServerInfo@@PEAH@Z(source, servers, count);
}

/*
==============
CL_MainMP_ShouldDisplayHud
==============
*/

bool __fastcall CL_MainMP_ShouldDisplayHud(LocalClientNum_t localClientNum)
{
  return ?CL_MainMP_ShouldDisplayHud@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_MainMP_PartyMapVote_f
==============
*/

void CL_MainMP_PartyMapVote_f(void)
{
  ?CL_MainMP_PartyMapVote_f@@YAXXZ();
}

/*
==============
CL_MainMP_InitLoad
==============
*/

void __fastcall CL_MainMP_InitLoad(const char *mapname, const char *gametype)
{
  ?CL_MainMP_InitLoad@@YAXPEBD0@Z(mapname, gametype);
}

/*
==============
CL_MainMP_PrepareClientsForServerRestart
==============
*/

void __fastcall CL_MainMP_PrepareClientsForServerRestart(const char *mapName, const char *gameType)
{
  ?CL_MainMP_PrepareClientsForServerRestart@@YAXPEBD0@Z(mapName, gameType);
}

/*
==============
CL_MainMP_SetOmnvars
==============
*/

void __fastcall CL_MainMP_SetOmnvars(const char *mapname, const char *gametype)
{
  ?CL_MainMP_SetOmnvars@@YAXPEBD0@Z(mapname, gametype);
}

/*
==============
CL_MainMP_CheckSplitscreenOnlineStats
==============
*/

void __fastcall CL_MainMP_CheckSplitscreenOnlineStats(int controllerIndex)
{
  ?CL_MainMP_CheckSplitscreenOnlineStats@@YAXH@Z(controllerIndex);
}

/*
==============
CL_MainMP_MapLoadingFrontEnd
==============
*/

void CL_MainMP_MapLoadingFrontEnd(void)
{
  ?CL_MainMP_MapLoadingFrontEnd@@YAXXZ();
}

/*
==============
CL_MainMP_CheckOfflineStats
==============
*/

void __fastcall CL_MainMP_CheckOfflineStats(LocalClientNum_t localClientNum, const int controllerIndex)
{
  ?CL_MainMP_CheckOfflineStats@@YAXW4LocalClientNum_t@@H@Z(localClientNum, controllerIndex);
}

/*
==============
CL_MainMP_Pause
==============
*/

void __fastcall CL_MainMP_Pause(LocalClientNum_t localClientNum, bool notifyLUI, CLPauseReason pauseReason)
{
  ?CL_MainMP_Pause@@YAXW4LocalClientNum_t@@_NW4CLPauseReason@@@Z(localClientNum, notifyLUI, pauseReason);
}

/*
==============
CL_MainMP_TogglePauseResumeGame
==============
*/

void __fastcall CL_MainMP_TogglePauseResumeGame(LocalClientNum_t localClientNum)
{
  ?CL_MainMP_TogglePauseResumeGame@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_MainMP_ConnectAndPreloadMap
==============
*/

void __fastcall CL_MainMP_ConnectAndPreloadMap(LocalClientNum_t localClientNum, XSESSION_INFO *hostInfo, const char *mapname, const char *gametype)
{
  ?CL_MainMP_ConnectAndPreloadMap@@YAXW4LocalClientNum_t@@PEAVXSESSION_INFO@@PEBD2@Z(localClientNum, hostInfo, mapname, gametype);
}

/*
==============
CL_MainMP_TransmissionError
==============
*/

void __fastcall CL_MainMP_TransmissionError(const LocalClientNum_t localClientNum, int sendError)
{
  ?CL_MainMP_TransmissionError@@YAXW4LocalClientNum_t@@H@Z(localClientNum, sendError);
}

/*
==============
CL_MainMP_GamePostMapMemoryAllocate
==============
*/

void CL_MainMP_GamePostMapMemoryAllocate(void)
{
  ?CL_MainMP_GamePostMapMemoryAllocate@@YAXXZ();
}

/*
==============
CL_MainMP_BeginMapLoading
==============
*/

void __fastcall CL_MainMP_BeginMapLoading(const char *mapname)
{
  ?CL_MainMP_BeginMapLoading@@YAXPEBD@Z(mapname);
}

/*
==============
CL_MainMP_SetupForNewServerMap
==============
*/

void __fastcall CL_MainMP_SetupForNewServerMap(const char *pszMapName, const char *pszGametype)
{
  ?CL_MainMP_SetupForNewServerMap@@YAXPEBD0@Z(pszMapName, pszGametype);
}

/*
==============
CL_MainMP_GameIsAboutToResume
==============
*/

bool __fastcall CL_MainMP_GameIsAboutToResume()
{
  return ?CL_MainMP_GameIsAboutToResume@@YA_NXZ();
}

/*
==============
CL_MainMP_DeterminePacketBackupCount
==============
*/

unsigned int __fastcall CL_MainMP_DeterminePacketBackupCount(const int allocFlags)
{
  return ?CL_MainMP_DeterminePacketBackupCount@@YAIH@Z(allocFlags);
}

/*
==============
CL_MainMP_DispatchConnectionlessPacket
==============
*/

bool __fastcall CL_MainMP_DispatchConnectionlessPacket(LocalClientNum_t localClientNum, netadr_t *from, msg_t *msg, int time)
{
  return ?CL_MainMP_DispatchConnectionlessPacket@@YA_NW4LocalClientNum_t@@Unetadr_t@@PEAUmsg_t@@H@Z(localClientNum, from, msg, time);
}

/*
==============
CL_MainMP_AddSplitscreenControllerToPartyIfRequired
==============
*/

void __fastcall CL_MainMP_AddSplitscreenControllerToPartyIfRequired(const int controllerIndex)
{
  ?CL_MainMP_AddSplitscreenControllerToPartyIfRequired@@YAXH@Z(controllerIndex);
}

/*
==============
CL_MainMP_DisconnectFrontEndScene
==============
*/

void __fastcall CL_MainMP_DisconnectFrontEndScene(LocalClientNum_t localClientNum)
{
  ?CL_MainMP_DisconnectFrontEndScene@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_MainMP_Connect_f
==============
*/

void CL_MainMP_Connect_f(void)
{
  ?CL_MainMP_Connect_f@@YAXXZ();
}

/*
==============
CL_MainMP_ShutdownGameModeClient
==============
*/

void __fastcall CL_MainMP_ShutdownGameModeClient(LocalClientNum_t localClientNum)
{
  ?CL_MainMP_ShutdownGameModeClient@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_MainMP_DisconnectError
==============
*/

void __fastcall CL_MainMP_DisconnectError(const LocalClientNum_t localClientNum, const char *message, const char *defaultMessage)
{
  ?CL_MainMP_DisconnectError@@YAXW4LocalClientNum_t@@PEBD1@Z(localClientNum, message, defaultMessage);
}

/*
==============
CL_MainMP_Unpause
==============
*/

void __fastcall CL_MainMP_Unpause(CLPauseReason pauseReason)
{
  ?CL_MainMP_Unpause@@YAXW4CLPauseReason@@@Z(pauseReason);
}

/*
==============
CL_MainMP_SetWaitingOnServerToLoadMap
==============
*/

void __fastcall CL_MainMP_SetWaitingOnServerToLoadMap(LocalClientNum_t localClientNum, bool waiting)
{
  ?CL_MainMP_SetWaitingOnServerToLoadMap@@YAXW4LocalClientNum_t@@_N@Z(localClientNum, waiting);
}

/*
==============
CL_MainMP_ClearGameState
==============
*/

void CL_MainMP_ClearGameState(void)
{
  ?CL_MainMP_ClearGameState@@YAXXZ();
}

/*
==============
CL_MainMP_Disconnect
==============
*/

void __fastcall CL_MainMP_Disconnect(LocalClientNum_t localClientNum)
{
  ?CL_MainMP_Disconnect@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_MainMP_ClearState
==============
*/

void __fastcall CL_MainMP_ClearState(LocalClientNum_t localClientNum)
{
  ?CL_MainMP_ClearState@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_MainMP_CheckNotify
==============
*/

void __fastcall CL_MainMP_CheckNotify(LocalClientNum_t localClientNum, int cmdIndex, int forceNotify)
{
  ?CL_MainMP_CheckNotify@@YAXW4LocalClientNum_t@@HH@Z(localClientNum, cmdIndex, forceNotify);
}

/*
==============
CL_MainMP_CancelStart_f
==============
*/
void CL_MainMP_CancelStart_f()
{
  PartyData *ActiveParty; 

  ActiveParty = Party_GetActiveParty();
  PartyHost_CancelStartMatch(ActiveParty);
}

/*
==============
CL_MainMP_UpdatePartyState_f
==============
*/
void CL_MainMP_UpdatePartyState_f()
{
  PartyData *PartyData; 

  if ( Lobby_IsInLobby() && Lobby_AreWeHost() )
  {
    Com_Printf(14, "Updating partystate due to console command\n");
    PartyData = Lobby_GetPartyData();
    PartyHost_GamestateChanged(PartyData);
  }
}

/*
==============
CL_MainMP_DisbandLobbyAfterRound_f
==============
*/
void CL_MainMP_DisbandLobbyAfterRound_f()
{
  const dvar_t *v0; 
  int v1; 
  PartyData *PartyData; 

  if ( Lobby_IsInLobby() && Lobby_AreWeHost() )
  {
    v0 = DVARBOOL_xblive_privatematch;
    if ( !DVARBOOL_xblive_privatematch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xblive_privatematch") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v0);
    v1 = !v0->current.enabled;
    Lobby_GetPartyData()->stopAfterRound = v1;
    PartyData = Lobby_GetPartyData();
    Com_Printf(14, "stopAfterRound due to console command (%i)\n", (unsigned int)PartyData->stopAfterRound);
  }
}

/*
==============
CL_MainMP_DevUpdatePartyMapPacks_f
==============
*/
void CL_MainMP_DevUpdatePartyMapPacks_f()
{
  int v0; 
  PartyData *PartyData; 

  Com_Printf(14, "Updating party map packs string\n");
  v0 = Live_CurrentLocalMapPackFlags();
  PartyData = Lobby_GetPartyData();
  Party_SetMapPackFlags(PartyData, v0);
}

/*
==============
CL_MainMP_DevMigratePartyAfterRound_f
==============
*/
void CL_MainMP_DevMigratePartyAfterRound_f()
{
  const dvar_t *v0; 

  v0 = DVARBOOL_xblive_privatematch;
  if ( !DVARBOOL_xblive_privatematch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xblive_privatematch") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  if ( !v0->current.enabled && Lobby_IsInLobby() && Lobby_AreWeHost() )
    Lobby_GetHostData()->migrateAfterRound = 1;
}

/*
==============
CL_MainMP_PartyMapVote_f
==============
*/
void CL_MainMP_PartyMapVote_f(void)
{
  VoteType v0; 
  PartyData *PartyData; 

  if ( Cmd_Argc() >= 2 )
  {
    v0 = Cmd_ArgInt(1);
    PartyData = Lobby_GetPartyData();
    Party_RecordVote(PartyData, v0);
  }
  else
  {
    Com_PrintError(14, "Error: xpartyvote <2|1|0>\n");
  }
}

/*
==============
CL_MainMP_GetClientMatchData_f
==============
*/

void __fastcall CL_MainMP_GetClientMatchData_f(double _XMM0_8)
{
  const DDLDef *Asset; 
  DDLState state; 
  DDLContext ddlContext; 

  state.isValid = 0;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  state.offset = 0;
  state.arrayIndex = -1;
  __asm { vmovdqu xmmword ptr [rsp+88h+state.member], xmm0 }
  if ( cls.matchData.def[0] )
  {
    Asset = Com_DDL_LoadAsset(cls.matchData.def);
    if ( Com_DDL_NavigateFromCmd(Asset, Cmd_Argc, Cmd_Argv, &state, 0) )
    {
      if ( DDL_StateIsLeaf(&state) )
      {
        Com_DDL_CreateContext(cls.matchData.data, 24000, Asset, &ddlContext, NULL, NULL);
        Com_DDL_PrintState(&state, &ddlContext);
      }
      else
      {
        Com_Printf(16, "Too many arguments\n");
      }
    }
  }
  else
  {
    Com_Printf(15, "No match data definition.\n");
  }
}

/*
==============
CL_MainMP_DumpClientMatchData_f
==============
*/
void CL_MainMP_DumpClientMatchData_f()
{
  const DDLDef *Asset; 
  DDLContext ddlContext; 

  if ( cls.matchData.def[0] )
  {
    Asset = Com_DDL_LoadAsset(cls.matchData.def);
    Com_DDL_CreateContext(cls.matchData.data, 24000, Asset, &ddlContext, NULL, NULL);
    Com_DDL_WriteAsText(&ddlContext, "DDL_DumpClientMatchData_CL.txt", (const char *)&queryFormat.fmt + 3);
  }
  else
  {
    Com_Printf(15, "No match data definition.\n");
  }
}

/*
==============
CL_MainMP_GetCodcasterClientMatchData_f
==============
*/

void __fastcall CL_MainMP_GetCodcasterClientMatchData_f(double _XMM0_8)
{
  const DDLDef *Asset; 
  DDLState state; 
  DDLContext ddlContext; 

  state.isValid = 0;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  state.offset = 0;
  state.arrayIndex = -1;
  __asm { vmovdqu xmmword ptr [rsp+88h+state.member], xmm0 }
  if ( cls.codcasterClientMatchData.def[0] )
  {
    Asset = Com_DDL_LoadAsset(cls.codcasterClientMatchData.def);
    if ( Com_DDL_NavigateFromCmd(Asset, Cmd_Argc, Cmd_Argv, &state, 0) )
    {
      if ( DDL_StateIsLeaf(&state) )
      {
        Com_DDL_CreateContext(cls.codcasterClientMatchData.data, 1614, Asset, &ddlContext, NULL, NULL);
        Com_DDL_PrintState(&state, &ddlContext);
      }
      else
      {
        Com_Printf(16, "Too many arguments\n");
      }
    }
  }
  else
  {
    Com_Printf(15, "No match data definition.\n");
  }
}

/*
==============
CL_MainMP_DumpCodcasterClientMatchData_f
==============
*/
void CL_MainMP_DumpCodcasterClientMatchData_f()
{
  const DDLDef *Asset; 
  DDLContext ddlContext; 

  if ( cls.codcasterClientMatchData.def[0] )
  {
    Asset = Com_DDL_LoadAsset(cls.codcasterClientMatchData.def);
    Com_DDL_CreateContext(cls.codcasterClientMatchData.data, 1614, Asset, &ddlContext, NULL, NULL);
    Com_DDL_WriteAsText(&ddlContext, "DDL_DumpCodcasterMatchData_CL.txt", (const char *)&queryFormat.fmt + 3);
  }
  else
  {
    Com_Printf(15, "No match data definition.\n");
  }
}

/*
==============
CL_MainMP_ReadPlaylistAggrFromDisk_f
==============
*/
void CL_MainMP_ReadPlaylistAggrFromDisk_f()
{
  const char *string; 
  __int64 v1; 
  int v2; 
  void *buffer; 

  LiveStorage_PauseFetchingPlaylists();
  if ( Cmd_Argc() < 2 )
    string = playlistAggrFilename->current.string;
  else
    string = Cmd_Argv(1);
  v1 = FS_ReadFile(string, &buffer);
  if ( v1 )
  {
    if ( buffer )
    {
      v2 = truncate_cast<int,__int64>(v1);
      LoadCompressedPlaylistFromBuffer(buffer, v2);
      FS_FreeFile(buffer);
    }
    else
    {
      Com_PrintError(16, "Unable to find file '%s'\n", string);
    }
  }
  else
  {
    Com_PrintError(16, "Read 0 bytes of file '%s'\n", string);
  }
}

/*
==============
CL_MainMP_ReadPlaylistFromDisk_f
==============
*/
void CL_MainMP_ReadPlaylistFromDisk_f()
{
  const char *v0; 
  void *buffer; 

  if ( Cmd_Argc() < 2 )
    v0 = "playlists.info";
  else
    v0 = Cmd_Argv(1);
  if ( FS_ReadFile(v0, &buffer) )
  {
    if ( buffer )
    {
      Playlist_ParsePlaylists((const char *)buffer);
      FS_FreeFile(buffer);
    }
    else
    {
      Com_PrintError(16, "Unable to find file '%s'\n", v0);
    }
  }
}

/*
==============
CL_MainMP_ShowIP_f
==============
*/

void CL_MainMP_ShowIP_f(void)
{
  Sys_ShowIP();
}

/*
==============
CL_MainMP_LocalServers_f
==============
*/
void CL_MainMP_LocalServers_f()
{
  LocalClientNum_t v0; 

  v0 = Cmd_LocalClientNum();
  CL_MainMP_LocalServers(v0);
}

/*
==============
CL_MainMP_PlayAgain_f
==============
*/
void CL_MainMP_PlayAgain_f()
{
  if ( Cmd_Argc() > 1 && Cmd_ArgInt(1) )
    CL_PlayAgain_Start(1);
  else
    CL_PlayAgain_Start(0);
}

/*
==============
CL_MainMP_PlayAgainAbort_f
==============
*/
void CL_MainMP_PlayAgainAbort_f()
{
  if ( Cmd_Argc() > 1 && Cmd_ArgInt(1) )
    CL_PlayAgain_Abort(1);
  else
    CL_PlayAgain_Abort(0);
}

/*
==============
CL_MainMP_StartLobby_f
==============
*/

void __fastcall CL_MainMP_StartLobby_f(double _XMM0_8)
{
  const dvar_t *v1; 
  int v2; 
  LocalClientNum_t v3; 
  PartyData *PartyData; 
  PartyData *v5; 
  PartyData *v6; 
  int Flags; 
  const dvar_t *v8; 
  int v9; 
  const dvar_t *v10; 
  const dvar_t *v11; 
  int integer; 
  PartyData *v13; 
  PartyActiveClient outPartyActiveClient; 

  Sys_ProfBeginNamedEvent(0xFFFFFF00, "Start Lobby");
  v1 = DVARBOOL_onlinegame;
  if ( !DVARBOOL_onlinegame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "onlinegame") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( !v1->current.enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 342, ASSERT_TYPE_ASSERT, "(Dvar_GetBool_Internal_DebugName( DVARBOOL_onlinegame, \"onlinegame\" ))", "%s\n\tStarting a lobby outside of the online game section", "Dvar_GetBool( onlinegame )") )
    __debugbreak();
  __rdtsc();
  Lobby_GetPartyData();
  v2 = Cmd_LocalControllerIndex();
  v3 = Cmd_LocalClientNum();
  if ( v3 )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1442140F0, 507i64);
  GamerProfile_UpdateProfileAndSaveIfNeeded(v2);
  if ( Party_GetSecondaryActiveClient(&g_partyData, &outPartyActiveClient) )
    GamerProfile_UpdateProfileAndSaveIfNeeded(outPartyActiveClient.localControllerIndex);
  Com_Printf(14, "CL_MainMP_StartLobby_f was called, calling Party_StopParty\n");
  PartyData = Lobby_GetPartyData();
  Party_Sleep(PartyData);
  v5 = Lobby_GetPartyData();
  Party_StopParty(v5);
  v6 = Lobby_GetPartyData();
  Party_Awake(v6, v2, 1);
  Party_ResetTweakDvars();
  Playlist_RunRules(v2, 0);
  Voice_DisableLocalMics(&g_partyData);
  Flags = PartyHost_GetCreateFlags();
  v8 = DVARINT_party_maxplayers;
  v9 = Flags;
  if ( !DVARINT_party_maxplayers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_maxplayers") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  if ( !Online_CanHostServer(v8->current.integer) )
  {
    v10 = DVARINT_party_maxplayers;
    if ( !DVARINT_party_maxplayers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_maxplayers") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v10);
    Com_PrintWarning(14, "Unable to host a game for party_maxplayers (%i)!\n", v10->current.unsignedInt);
  }
  v11 = DVARINT_party_maxplayers;
  if ( !DVARINT_party_maxplayers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_maxplayers") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  integer = v11->current.integer;
  v13 = Lobby_GetPartyData();
  PartyHost_StartParty(v13, v3, v2, v9, integer, PARTY_HOST_CLIENT);
  __rdtsc();
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2sd xmm0, xmm0, rax
    vmulsd  xmm1, xmm0, cs:?msecPerRawTimerTick@@3NA; double msecPerRawTimerTick
    vcvtsd2ss xmm2, xmm1, xmm1
    vcvtss2sd xmm2, xmm2, xmm2
    vmovq   r8, xmm2
  }
  Com_Printf(14, "CL_MainMP_StartLobby_f took %f ms (no remote screen).\n", *(double *)&_XMM2);
  Sys_ProfEndNamedEvent();
}

/*
==============
CL_MainMP_SessionUpdate_f
==============
*/
void CL_MainMP_SessionUpdate_f()
{
  PartyData *PartyData; 
  PartyData *v1; 
  const dvar_t *v2; 
  const dvar_t *v3; 
  int integer; 
  int v5; 
  unsigned int GameFlags; 
  char *fmt; 

  PartyData = Lobby_GetPartyData();
  v1 = PartyData;
  if ( !PartyData->inParty || !PartyData->areWeHost )
    goto LABEL_13;
  v2 = DVARBOOL_xblive_privatematch;
  if ( !DVARBOOL_xblive_privatematch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xblive_privatematch") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.enabled )
  {
    v3 = DVARINT_party_maxplayers;
    if ( !DVARINT_party_maxplayers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_maxplayers") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v3);
    integer = v3->current.integer;
    v5 = 0;
    if ( integer >= 0 )
      v5 = integer;
    GameFlags = Party_GetGameFlags(v1);
    LODWORD(fmt) = v5;
    Com_Printf(16, "Updating session [%s] in CL_MainMP_SessionUpdate_f to have %i flags, %i slots\n", v1->partyName, GameFlags, fmt);
    PartyHost_DropPlayersToMatchSlots(v1, v5);
    Party_SetNumGameSlots(v1, v5);
    Party_SetUIPlayerCount(v1);
  }
  else
  {
LABEL_13:
    Com_PrintWarning(14, "xsessionupdate should only be called as a private match lobby host.\n");
  }
}

/*
==============
CL_MainMP_StartPrivateMatchHost_f
==============
*/
void CL_MainMP_StartPrivateMatchHost_f()
{
  const dvar_t *v0; 
  int v1; 
  LocalClientNum_t v2; 
  PartyData *PartyData; 
  PartyData *v4; 
  PartyData *v5; 
  int v6; 
  const dvar_t *v7; 
  int integer; 
  PartyData *v9; 
  PartyActiveClient outPartyActiveClient; 

  v0 = DVARBOOL_onlinegame;
  if ( !DVARBOOL_onlinegame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "onlinegame") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  if ( !v0->current.enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 455, ASSERT_TYPE_ASSERT, "(Dvar_GetBool_Internal_DebugName( DVARBOOL_onlinegame, \"onlinegame\" ))", "%s\n\tStarting a private match lobby outside of the online game section", "Dvar_GetBool( onlinegame )") )
    __debugbreak();
  v1 = Cmd_LocalControllerIndex();
  v2 = Cmd_LocalClientNum();
  if ( v2 )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144214360, 508i64);
  PartyData = Lobby_GetPartyData();
  Party_Sleep(PartyData);
  Com_Printf(14, "CL_Live_StartPrivateMatchHost() was called, calling Party_StopParty\n");
  v4 = Lobby_GetPartyData();
  Party_StopParty(v4);
  v5 = Lobby_GetPartyData();
  Party_Awake(v5, v1, 1);
  Voice_DisableLocalMics(&g_partyData);
  v6 = PartyHost_GetCreateFlags() & 0xFFFFFFF7;
  Party_ResetTweakDvars();
  Live_SetLobbyPresence(v1);
  if ( Party_GetSecondaryActiveClient(&g_partyData, &outPartyActiveClient) )
    Live_SetLobbyPresence(outPartyActiveClient.localControllerIndex);
  v7 = DVARINT_party_maxplayers;
  if ( !DVARINT_party_maxplayers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_maxplayers") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  integer = v7->current.integer;
  v9 = Lobby_GetPartyData();
  PartyHost_StartParty(v9, v2, v1, v6, integer, PARTY_HOST_CLIENT);
  BG_GameStateInfo_SetUsingRecipe(1);
}

/*
==============
CL_MainMP_StopLobbyBackout_f
==============
*/
void CL_MainMP_StopLobbyBackout_f()
{
  const char *v0; 

  if ( Cmd_Argc() < 2 )
    v0 = "UNKNOWN";
  else
    v0 = Cmd_Argv(1);
  Com_Printf(14, "CL_MainMP_StopLobbyBackout_f was called (context %s), calling Party_StopParty.\n", v0);
  if ( !g_partyData.inParty )
    Com_PrintWarning(14, "CL_MainMP_StopLobbyBackout_f was called but we are not in a private party.\n");
  CL_Main_StopParty(1);
}

/*
==============
CL_MainMP_DevEndLobby_f
==============
*/
void CL_MainMP_DevEndLobby_f()
{
  int v0; 
  PartyData *PartyData; 

  if ( Lobby_IsInLobby() && !Lobby_AreWeHost() )
  {
    v0 = Cmd_LocalControllerIndex();
    PartyData = Lobby_GetPartyData();
    PartyClient_DevEndParty(PartyData, v0);
  }
}

/*
==============
CL_MainMP_DevDisconnectLobby_f
==============
*/
void CL_MainMP_DevDisconnectLobby_f()
{
  int v0; 
  PartyData *PartyData; 

  if ( Lobby_IsInLobby() && !Lobby_AreWeHost() )
  {
    v0 = Cmd_LocalControllerIndex();
    PartyData = Lobby_GetPartyData();
    PartyClient_DevDisconnect(PartyData, v0);
  }
}

/*
==============
CL_MainMP_DevTimeoutHostLobby_f
==============
*/
void CL_MainMP_DevTimeoutHostLobby_f()
{
  int v0; 
  PartyData *PartyData; 

  if ( Lobby_IsInLobby() && !Lobby_AreWeHost() )
  {
    v0 = Cmd_LocalControllerIndex();
    PartyData = Lobby_GetPartyData();
    PartyClient_DevTimeoutFromHost(PartyData, v0);
  }
}

/*
==============
CL_MainMP_DevMigrateFailedLobby_f
==============
*/
void CL_MainMP_DevMigrateFailedLobby_f()
{
  int v0; 
  PartyData *PartyData; 

  if ( Lobby_IsInLobby() && !Lobby_AreWeHost() )
  {
    v0 = Cmd_LocalControllerIndex();
    PartyData = Lobby_GetPartyData();
    PartyClient_DevMigrationFailure(PartyData, v0);
  }
}

/*
==============
CL_MainMP_DevBackout_f
==============
*/
char CL_MainMP_DevBackout_f()
{
  char result; 
  int v1; 
  const PartyData *PartyData; 
  PartyActiveClient mainActiveClient; 

  result = Lobby_IsInLobby();
  if ( result )
  {
    v1 = Cmd_LocalControllerIndex();
    PartyData = Lobby_GetPartyData();
    mainActiveClient = Party_GetMainActiveClient(PartyData, v1);
    return Party_Backout(&mainActiveClient);
  }
  return result;
}

/*
==============
CL_MainMP_DevClientDisconnectMsg_f
==============
*/
void CL_MainMP_DevClientDisconnectMsg_f()
{
  unsigned int v0; 
  int v1; 
  PartyData *PartyData; 

  if ( Lobby_IsInLobby() && Lobby_AreWeHost() )
  {
    v0 = Cmd_ArgInt(1);
    if ( v0 < 0xC8 )
    {
      v1 = Cmd_LocalControllerIndex();
      PartyData = Lobby_GetPartyData();
      PartyAtomicHost_DevSimulateDisconnectMsg(PartyData, v1, v0);
    }
  }
}

/*
==============
CL_MainMP_PrivatePartyBackout_f
==============
*/
void CL_MainMP_PrivatePartyBackout_f()
{
  LocalClientNum_t v0; 

  if ( Com_IsGameLocalServerRunningOrLoading() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 1576, ASSERT_TYPE_ASSERT, "(!Com_IsGameLocalServerRunningOrLoading())", "%s\n\tShould migrate when the server is running, or end the game, not disconnect.", "!Com_IsGameLocalServerRunningOrLoading()") )
    __debugbreak();
  if ( g_partyData.inParty && g_partyData.areWeHost )
  {
    v0 = Cmd_LocalClientNum();
    if ( CL_GetLocalClientGameConnectionState(v0) == CA_ACTIVE )
    {
      Com_Printf(14, "PrivatePartyBackout - Letting the game host know we're backing out, so he can let our clients know\n");
      CL_Main_AddReliableCommand(v0, "partybackout");
    }
    else
    {
      Com_Printf(14, "PrivatePartyBackout - Telling the clients directly to backout, since we're not in a game\n");
      PartyHost_AskPartyMembersToBackOut(&g_partyData);
    }
  }
  else
  {
    Com_PrintError(14, "PrivatePartyBackout - not a private party host\n");
  }
}

/*
==============
CL_MainMP_Clientinfo_f
==============
*/
void CL_MainMP_Clientinfo_f()
{
  __int64 v0; 
  const char *UserInfoString; 
  int v2; 
  int v3; 

  v0 = Cmd_LocalClientNum();
  Com_Printf(0, "--------- Client Information ---------\n");
  if ( (unsigned int)v0 >= 2 )
  {
    v3 = 2;
    v2 = v0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v2, v3) )
      __debugbreak();
  }
  Com_Printf(0, "state: %i\n", (unsigned int)clientUIActives[v0].connectionState);
  Com_Printf(0, "Server: %s\n", cls.servername);
  Com_Printf(0, "User info settings:\n");
  UserInfoString = CL_MainMP_GetUserInfoString((LocalClientNum_t)v0);
  Dvar_InfoPrint(UserInfoString);
  Com_Printf(0, "--------------------------------------\n");
}

/*
==============
CL_MainMP_ParseBadPacket_f
==============
*/
void CL_MainMP_ParseBadPacket_f()
{
  __int64 v0; 
  LocalClientNum_t v1; 
  msg_t msg; 
  void *buffer; 

  v0 = FS_ReadFile((const char *)&stru_144018080, &buffer);
  if ( v0 >= 0 )
  {
    *(_QWORD *)&msg.overflowed = 0i64;
    msg.splitData = NULL;
    msg.maxsize = 0;
    memset(&msg.splitSize, 0, 24);
    msg.cursize = truncate_cast<int,__int64>(v0);
    msg.data = (unsigned __int8 *)buffer;
    MSG_ReadLong(&msg);
    msg.compressionFlags = MSG_ReadLong(&msg) & 0xC0000000;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 4011, ASSERT_TYPE_SANITY, (const char *)&queryFormat.fmt + 3, "Time to debug this packet, baby!") )
      __debugbreak();
    v1 = Cmd_LocalClientNum();
    CL_ParseMP_ParseServerMessage(v1, &msg);
    FS_FreeFile(buffer);
  }
}

/*
==============
CL_MainMP_FreshStart_f
==============
*/
void CL_MainMP_FreshStart_f()
{
  int v0; 

  Com_PrintWarning(12, "Performing a fresh start reset.\n");
  DB_SyncXAssets();
  v0 = Cmd_LocalControllerIndex();
  LiveStorage_FreshStart(v0);
}

/*
==============
CL_MainMP_ResetActiveStats_f
==============
*/
void CL_MainMP_ResetActiveStats_f()
{
  int v0; 
  StatsSource ActiveStatsSource; 

  Com_PrintWarning(12, "Resettings active stats from command. This is dev-only and should not be used for ship functionality\n");
  DB_SyncXAssets();
  v0 = Cmd_LocalControllerIndex();
  ActiveStatsSource = LiveStorage_GetActiveStatsSource(v0);
  LiveStorage_ResetStats(v0, ActiveStatsSource);
  LiveStorage_SetAllStatsBlobsDirty(v0, ActiveStatsSource, 1);
  LiveStorage_SaveStats(v0);
  LiveStorage_ShowResetStatsError();
}

/*
==============
CL_MainMP_ResetOfflineStats_f
==============
*/
void CL_MainMP_ResetOfflineStats_f()
{
  int v0; 

  Com_PrintWarning(12, "Resettings offline stats from command. This is dev-only and should not be used for ship functionality\n");
  v0 = Cmd_LocalControllerIndex();
  DB_SyncXAssets();
  LiveStorage_ReadStats(v0);
  LiveStorage_ResetStats(v0, STATS_OFFLINE);
  LiveStorage_SetAllStatsBlobsDirty(v0, STATS_OFFLINE, 1);
  LiveStorage_SaveStatsForSource(v0, STATS_OFFLINE);
  LiveStorage_ShowResetStatsError();
}

/*
==============
CL_MainMP_ResetOnlineStats_f
==============
*/
void CL_MainMP_ResetOnlineStats_f()
{
  int v0; 

  v0 = Cmd_LocalControllerIndex();
  if ( LiveStorage_AreStatsFetched(v0, STATS_ONLINE) )
  {
    Com_PrintWarning(12, "Resettings online stats from command. This is dev-only and should not be used for ship functionality\n");
    DB_SyncXAssets();
    LiveStorage_ResetStats(v0, STATS_ONLINE);
    LiveStorage_SetAllStatsBlobsDirty(v0, STATS_ONLINE, 1);
    LiveStorage_SaveStatsForSource(v0, STATS_ONLINE);
    LiveStorage_ShowResetStatsError();
  }
  else
  {
    Com_PrintWarning(12, "Unable to reset online stats because we haven't fetched them yet.\n");
  }
}

/*
==============
CL_MainMP_Connect_f
==============
*/
void CL_MainMP_Connect_f(void)
{
  const char *v0; 
  int v1; 
  ClServerInfo *v2; 
  LocalClientNum_t v3; 
  int v4; 
  __int64 v5; 
  XSESSION_INFO hostInfo; 

  v5 = -2i64;
  if ( Cmd_Argc() == 2 )
  {
    if ( cls.numlocalservers )
    {
      v0 = Cmd_Argv(1);
      v1 = 0;
      v4 = 0;
      j_sscanf(v0, "%hhu.%hhu.%hhu.%hhu", &v4, (char *)&v4 + 1, (char *)&v4 + 2, (char *)&v4 + 3);
      if ( cls.numlocalservers <= 0 )
        goto LABEL_8;
      while ( 1 )
      {
        v2 = &cls.localServers[v1];
        if ( *(_DWORD *)v2->xnaddr.addrBuff == v4 )
          break;
        if ( ++v1 >= cls.numlocalservers )
          goto LABEL_8;
      }
      if ( v2 )
      {
        XSESSION_INFO::XSESSION_INFO(&hostInfo, &v2->xninfo, &v2->xnaddr);
        v3 = Cmd_LocalClientNum();
        Party_StartLANServerJoin(v3, &hostInfo);
        bdSecurityKey::~bdSecurityKey(&hostInfo.m_security.m_key);
        bdSecurityID::~bdSecurityID(&hostInfo.m_security.m_id);
      }
      else
      {
LABEL_8:
        Com_Printf(16, "None of the %i local servers found are matching the ip: %s\n", (unsigned int)cls.numlocalservers, v0);
      }
    }
    else
    {
      Com_Printf(16, "No local server found. Search again with \"localservers\"\n");
    }
  }
  else
  {
    Com_Printf(16, "usage: connect <ip>\n");
  }
}

/*
==============
CL_MainMP_VoiceFail_f
==============
*/
void CL_MainMP_VoiceFail_f()
{
  int v0; 
  PartyData *CurrentParty; 

  v0 = Cmd_ArgInt(1);
  CurrentParty = Live_GetCurrentParty();
  PeerMesh_ClientDisconnected(CurrentParty, v0);
}

/*
==============
CL_MainMP_ForceVoiceFail_f
==============
*/
void CL_MainMP_ForceVoiceFail_f()
{
  __int64 v0; 
  PartyData *PartyData; 
  const char *v2; 

  v0 = (unsigned int)Cmd_ArgInt(1);
  Com_Printf(14, "Telling the server that clientNum %i can't hear us\n", v0);
  PartyData = &g_partyData;
  if ( !Party_InParty(&g_partyData) )
    PartyData = Lobby_GetPartyData();
  v2 = j_va("%icanthear %i", (unsigned int)PartyData->partyId, (unsigned int)v0);
  if ( NetConnection::SendUnreliable(PartyData->currentHost.connections, v2) < 0 )
    Com_PrintError(14, "Tried to tell the server that client %i can't hear us but we couldn't send the packet to the server\n", (unsigned int)v0);
}

/*
==============
CL_MainMP_MigrateHost_f
==============
*/
void CL_MainMP_MigrateHost_f()
{
  int v0; 
  int v1; 
  PartyData *PartyData; 
  int v3; 

  v0 = 2;
  if ( Cmd_Argc() >= 2 )
    v0 = Cmd_ArgInt(1);
  if ( !Lobby_AreWeHost() || v0 == 1 )
  {
    if ( g_partyData.areWeHost && v0 )
    {
      v3 = Cmd_LocalControllerIndex();
      PartyMigrate_RequestFindBestHost(&g_partyData, v3);
    }
    else
    {
      Com_Printf(14, "Found no party or lobby to migrate\n");
    }
  }
  else
  {
    v1 = Cmd_LocalControllerIndex();
    PartyData = Lobby_GetPartyData();
    PartyMigrate_RequestFindBestHost(PartyData, v1);
  }
}

/*
==============
CL_MainMP_PartyGo_f
==============
*/
void CL_MainMP_PartyGo_f()
{
  PartyData *PartyData; 
  const dvar_t *v1; 
  PartyData *v2; 
  const dvar_t *v3; 
  const dvar_t *v4; 
  const char *v5; 
  bool v6; 
  const dvar_t *v7; 
  const dvar_t *v8; 
  PartyDisconnectReason v9; 
  signed int i; 

  PartyData = Lobby_GetPartyData();
  v1 = DVARINT_party_maxplayers;
  v2 = PartyData;
  if ( !DVARINT_party_maxplayers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_maxplayers") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( Online_CanHostServer(v1->current.integer) )
    goto LABEL_13;
  v3 = DVARBOOL_xblive_privatematch;
  if ( !DVARBOOL_xblive_privatematch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xblive_privatematch") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( v3->current.enabled )
  {
LABEL_13:
    if ( Cmd_Argc() < 2 )
    {
      v6 = 0;
    }
    else
    {
      v5 = Cmd_Argv(1);
      v6 = I_atoui(v5) != 0;
    }
    v7 = DVARBOOL_xblive_privatematch;
    if ( !DVARBOOL_xblive_privatematch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xblive_privatematch") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v7);
    if ( v7->current.enabled )
    {
      if ( Session_IsValid(v2->session) )
        PartyHost_RequestStartMatch(v2, v6);
    }
    else if ( Party_CountMembers(v2, PARTY_MEMBER_TYPE_ALL) == 1 )
    {
      v8 = DVARINT_party_teamCount;
      if ( !DVARINT_party_teamCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_teamCount") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v8);
      if ( v8->current.integer >= 2 )
      {
        for ( i = 0; i < 200; ++i )
        {
          if ( Lobby_GetMember(i)->status != 6 && Lobby_GetMember(i)->status >= 5u )
            Lobby_GetMember(i)->team = 2;
        }
      }
      LOBYTE(v9) = 3;
      PartyAtomic_AbortJoinAttempt(&g_partyJoinInfo, v9);
      PartyHost_RequestStartMatch(v2, v6);
    }
    else
    {
      Com_PrintError(16, "Error, you're trying to use xpartygo when you shouldn't.  This is only for private match and single player lobbies.\n");
    }
  }
  else
  {
    v4 = DVARINT_party_maxplayers;
    if ( !DVARINT_party_maxplayers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_maxplayers") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v4);
    Com_PrintError(16, "Error, we can't actually host a game with %i players, so xpartygo won't work\n", v4->current.unsignedInt);
  }
}

/*
==============
CL_LANInfoResponsePacket
==============
*/
void CL_LANInfoResponsePacket(const LocalClientNum_t localClientNum, netadr_t *from, msg_t *msg, int time)
{
  const char *v8; 
  const char *v9; 
  int v10; 
  unsigned int ProtocolVersion; 
  bool v13; 
  int addrHandleIndex; 
  const char *v15; 
  const char *v16; 
  const char *v17; 
  bool v18; 
  const char *v19; 
  int ControllerFromClient; 
  const char *v21; 
  char v22; 
  const char *v23; 
  bool IsCoopGameType; 
  int v25; 
  int v26; 
  int *p_time; 
  __int16 v28; 
  unsigned __int16 *p_port; 
  int v33; 
  const char *v34; 
  int v35; 
  const char *v36; 
  __int64 v37; 
  const char *v38; 
  __int64 v39; 
  const char *v40; 
  int v42; 
  int v43; 
  netadr_t v44; 
  char dest[1024]; 
  char string[1024]; 

  _RDI = from;
  if ( Live_IsInSystemlinkLobby() && CL_IsLocalClientActive(localClientNum) && localClientNum == LOCAL_CLIENT_0 )
  {
    v8 = MSG_ReadString(msg, string, 0x400u);
    v9 = Info_ValueForKey(v8, "protocol");
    v10 = atoi(v9);
    ProtocolVersion = GetProtocolVersion();
    __asm { vmovups xmm0, xmmword ptr [rdi] }
    v13 = v10 == ProtocolVersion;
    addrHandleIndex = _RDI->addrHandleIndex;
    __asm { vmovups [rsp+888h+var_868], xmm0 }
    v44.addrHandleIndex = addrHandleIndex;
    if ( v13 )
    {
      v16 = NET_AdrToString(&v44);
      Com_Printf(25, "Received LAN Info Response from %s - %s\n", v16, v8);
      v17 = Info_ValueForKey(v8, "dedicated");
      v18 = atoi(v17) == 1;
      v19 = Info_ValueForKey(v8, "crossplay");
      if ( atoi(v19) == 1 && !Dvar_GetBool_Internal_DebugName(DVARBOOL_online_lan_cross_play, "online_lan_cross_play") )
      {
        Com_Printf(25, "Received cross play override from LAN server, setting online_lan_cross_play to true\n");
        Dvar_SetBool_Internal(DVARBOOL_online_lan_cross_play, 1);
      }
      ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
      if ( Live_IsCrossPlayEnabled(ControllerFromClient) || v18 || (v21 = Info_ValueForKey(v8, "platform"), v22 = atoi(v21), v22 == (unsigned __int8)GetClientPlatform()) )
      {
        v23 = Info_ValueForKey(v8, "gametype");
        IsCoopGameType = Com_GameMode_IsCoopGameType(v23);
        if ( ((unsigned __int8)Com_GameMode_GetActiveGameMode() != LONG || IsCoopGameType) && ((unsigned __int8)Com_GameMode_GetActiveGameMode() == LONG || !IsCoopGameType) )
        {
          v25 = 0;
          v26 = 0;
          p_time = &cl_pinglist[0].time;
          do
          {
            v28 = *((_WORD *)p_time - 8);
            if ( v28 && !*p_time && *(_DWORD *)_RDI->ip == *(_DWORD *)cl_pinglist[v26].adr.ip && v28 == _RDI->port )
            {
              v39 = v26;
              cl_pinglist[v39].time = time - cl_pinglist[v39].start + 1;
              v40 = Info_ValueForKey(v8, "hostname");
              Com_DPrintf(14, "ping time %dms from %s\n", (unsigned int)cl_pinglist[v39].time, v40);
              Core_strcpy(cl_pinglist[v39].info, 0x400ui64, v8);
              __asm { vmovups xmm0, xmmword ptr [rdi] }
              v42 = _RDI->addrHandleIndex;
              v43 = cl_pinglist[v39].time;
              __asm { vmovups [rsp+888h+var_868], xmm0 }
              v44.addrHandleIndex = v42;
              CL_SetServerInfoByAddress(&v44, v8, v43);
              return;
            }
            ++v26;
            p_time += 263;
          }
          while ( v26 < 16 );
          if ( !cls.pingUpdateSource )
          {
            p_port = &cls.localServers[0].adr.port;
            do
            {
              if ( !*p_port )
                break;
              if ( *(_DWORD *)_RDI->ip == *(_DWORD *)cls.localServers[v25].adr.ip && *p_port == _RDI->port )
                return;
              ++v25;
              p_port += 114;
            }
            while ( v25 < 64 );
            if ( v25 != 64 )
            {
              __asm { vmovups xmm0, xmmword ptr [rdi] }
              cls.numlocalservers = v25 + 1;
              _RBP = 0x140000000ui64;
              _RBX = v25;
              v33 = _RDI->addrHandleIndex;
              __asm { vmovups xmmword ptr [rbx+rbp+10AD9A7Ch], xmm0 }
              cls.localServers[_RBX].adr.addrHandleIndex = v33;
              cls.localServers[_RBX].isDedicated = v18;
              v34 = Info_ValueForKey(v8, "isLobby");
              v35 = atoi(v34);
              cls.localServers[_RBX].isLobby = truncate_cast<unsigned char,int>(v35);
              CL_SetServerInfo(&cls.localServers[_RBX], v8, 1);
              v36 = MSG_ReadString(msg, string, 0x400u);
              Core_strcpy(dest, 0x400ui64, v36);
              if ( dest[0] )
              {
                v37 = -1i64;
                do
                  ++v37;
                while ( dest[v37] );
                v38 = "laninfo: %s";
                if ( dest[(unsigned int)(v37 - 1)] != 10 )
                  v38 = "laninfo: %s\n";
                Com_Printf(14, v38, dest);
              }
            }
          }
        }
      }
    }
    else
    {
      v15 = NET_AdrToString(&v44);
      Com_Printf(25, "Received LAN Info Response from %s - %s but protocol does not match (could be different build configs)\n", v15, v8);
    }
  }
}

/*
==============
CL_MainMP_AddOtherLocalSplitscreenPlayer
==============
*/
void CL_MainMP_AddOtherLocalSplitscreenPlayer(LocalClientNum_t localClientNum, int controllerIndex)
{
  const dvar_t *v2; 
  XUID result; 

  v2 = DVARBOOL_systemlink;
  if ( !DVARBOOL_systemlink && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "systemlink") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( !v2->current.enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 5930, ASSERT_TYPE_ASSERT, "(Dvar_GetBool_Internal_DebugName( DVARBOOL_systemlink, \"systemlink\" ))", (const char *)&queryFormat, "Dvar_GetBool( systemlink )") )
    __debugbreak();
  Live_GetXuid(&result, controllerIndex);
  if ( Party_FindMemberByXUID(&g_partyData, result) < 0 && !CL_MainMP_LocalClientJoinPrivateParty(controllerIndex) )
    CL_Mgr_ResetClientsBackToSingleClient(controllerIndex);
}

/*
==============
CL_MainMP_AddSplitscreenControllerToPartyIfRequired
==============
*/
void CL_MainMP_AddSplitscreenControllerToPartyIfRequired(const int controllerIndex)
{
  OnlinePlayFailureReason failureReason; 

  if ( Party_InParty(&g_partyData) && g_partyData.splitscreenData.mainClient.localControllerIndex != controllerIndex && !g_partyData.splitscreenData.otherClientActive && Live_CanUserPlayOnline(controllerIndex, &failureReason) && (!Live_IsOnlineGame() || Live_UserIsGuest(controllerIndex) || Live_IsConnectedToDemonware(controllerIndex)) && !CL_MainMP_LocalClientJoinPrivateParty(controllerIndex) )
    CL_Mgr_ResetClientsBackToSingleClient(controllerIndex);
}

/*
==============
CL_MainMP_BeginMapLoading
==============
*/
void CL_MainMP_BeginMapLoading(const char *mapname)
{
  char ActiveGameMode; 
  const char *v3; 

  ActiveGameMode = Com_GameMode_GetActiveGameMode();
  if ( ActiveGameMode == 2 )
  {
    v3 = "mp/didyouknow.csv";
    goto LABEL_7;
  }
  if ( ActiveGameMode == 3 )
  {
    v3 = "mp/didyouknow_alien.csv";
LABEL_7:
    CL_SelectStringTableEntryInDvar(v3, 0, "didyouknow");
    goto LABEL_8;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 1633, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled game mode type") )
    __debugbreak();
LABEL_8:
  R_Cinematic_StopPlayback(0);
  if ( Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_AIM|0x80) )
    CL_TransientsMP_StallUntilCompletion();
  Com_Frontend_LoadFastfile_Load(mapname);
}

/*
==============
CL_MainMP_BuildPlayerGuid
==============
*/
void CL_MainMP_BuildPlayerGuid(LocalClientNum_t localClientNum, char (*playerGuid)[21])
{
  int ControllerFromClient; 
  const XUID *Xuid; 
  const char *v6; 
  unsigned __int64 PlatformUserId; 
  XUID v8; 
  XUID result; 

  XUID::XUID(&v8);
  ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
  if ( Live_IsUserSignedInToDemonware(ControllerFromClient) )
  {
    Xuid = Live_GetXuid(&result, ControllerFromClient);
    XUID::operator=(&v8, Xuid);
    v6 = XUID::ToString(&v8);
    Core_strcpy((char *)playerGuid, 0x15ui64, v6);
  }
  else if ( Live_IsSignedIn(ControllerFromClient) )
  {
    PlatformUserId = Live_GetPlatformUserId(ControllerFromClient);
    Com_sprintf<21>(playerGuid, "%zu", PlatformUserId);
  }
  else
  {
    Com_sprintf<21>(playerGuid, "Player%i", (unsigned int)(ControllerFromClient + 1));
  }
}

/*
==============
CL_MainMP_CheckForResend
==============
*/
void CL_MainMP_CheckForResend(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  connstate_t connectionState; 
  int integer; 
  const dvar_t *v4; 
  int connectLastSendTime; 
  NetConnection *p_serverConnection; 
  ClConnectionDataMP *ClientConnectionData; 
  __int32 v8; 
  __int32 v9; 
  __int32 v10; 
  __int32 v11; 
  const char *String; 
  const char *v13; 
  int v14; 
  const char *v15; 
  msg_t buf; 
  char playerGuid[21]; 
  unsigned __int8 data[64]; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  connectionState = clientUIActives[v1].connectionState;
  if ( connectionState > CA_DISCONNECTED )
  {
    if ( connectionState <= CA_CHALLENGING )
    {
      v4 = DVARINT_cl_retransmitTimeout;
      if ( !DVARINT_cl_retransmitTimeout && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_retransmitTimeout") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v4);
      integer = v4->current.integer;
    }
    else if ( connectionState == CA_SENDINGSTATS || connectionState == CA_REQUESTING_MATCH_RULES )
    {
      integer = 200;
    }
    else
    {
      if ( connectionState != CA_STARTING )
        return;
      integer = 750;
    }
    connectLastSendTime = ClConnectionMP::GetClientConnectionData((const LocalClientNum_t)v1)->connectLastSendTime;
    if ( cls.realtime < connectLastSendTime + integer )
    {
      if ( connectLastSendTime == -99999 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 2419, ASSERT_TYPE_ASSERT, "( clcData->connectLastSendTime ) != ( (-99999) )", "%s != %s\n\t%i, %i", "clcData->connectLastSendTime", "SEND_PACKET_IMMEDIATELY", -99999, -99999) )
        __debugbreak();
      return;
    }
    p_serverConnection = &ClConnectionMP::GetClientConnectionData((const LocalClientNum_t)v1)->serverConnection;
    if ( !NetConnection::IsActive(p_serverConnection) )
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1442162E8);
    if ( NetConnection::IsConnected(p_serverConnection) )
    {
      ClientConnectionData = ClConnectionMP::GetClientConnectionData((const LocalClientNum_t)v1);
      ClientConnectionData->connectLastSendTime = cls.realtime;
      v8 = CL_GetLocalClientAnyConnectionState((const LocalClientNum_t)v1) - 1;
      if ( v8 )
      {
        v9 = v8 - 1;
        if ( !v9 )
        {
          CL_MainMP_CheckForResend_Challenging((const LocalClientNum_t)v1, ClientConnectionData);
          return;
        }
        v10 = v9 - 2;
        if ( !v10 )
        {
          CL_MainMP_CheckForResend_Stats((const LocalClientNum_t)v1, ClientConnectionData);
          return;
        }
        v11 = v10 - 1;
        if ( !v11 )
        {
          MSG_Init(&buf, data, 64);
          MSG_WriteString(&buf, "mrules");
          MSG_WriteByte(&buf, ClientConnectionData->currentGamestatePacket);
          if ( buf.overflowed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 2190, ASSERT_TYPE_ASSERT, "(!MSG_IsOverflowed( &msg ))", "%s\n\tNot enough bytes to write to, need to increase MRULES_MSG_BUFFER_SIZE", "!MSG_IsOverflowed( &msg )") )
            __debugbreak();
          if ( ClientConnectionData->connectLastSendTime != cls.realtime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 2191, ASSERT_TYPE_ASSERT, "( clcData->connectLastSendTime ) == ( cls.realtime )", "%s == %s\n\t%i, %i", "clcData->connectLastSendTime", "cls.realtime", ClientConnectionData->connectLastSendTime, cls.realtime) )
            __debugbreak();
          Com_Printf(14, "Sending match rules request %i to host in CA_REQUESTING_MATCH_RULES state\n", ClientConnectionData->currentGamestatePacket);
          v14 = NetConnection::SendUnreliable(&ClientConnectionData->serverConnection, buf.data, buf.cursize);
          goto LABEL_40;
        }
        if ( v11 != 1 )
        {
          Com_Error_impl(ERR_FATAL, (const ObfuscateErrorText)&stru_144216308, 510i64);
          return;
        }
        String = NetConnection::GetString(&ClientConnectionData->serverConnection);
        Com_Printf(25, "CL_MainMP_CheckForResend_Starting to server '%s'.\n", String);
        v13 = "strt_cmd";
      }
      else
      {
        ++ClientConnectionData->connectPacketCount;
        CL_MainMP_BuildPlayerGuid((LocalClientNum_t)v1, (char (*)[21])playerGuid);
        v15 = NetConnection::GetString(&ClientConnectionData->serverConnection);
        Com_Printf(25, "Requesting challenge from server at address %s with guid '%s'.\n", v15, playerGuid);
        v13 = j_va("getchallenge 0 \"%s\"", playerGuid);
      }
      v14 = NetConnection::SendUnreliable(&ClientConnectionData->serverConnection, v13);
LABEL_40:
      if ( v14 < 0 )
        CL_MainMP_TransmissionError((const LocalClientNum_t)v1, v14);
    }
  }
}

/*
==============
CL_MainMP_CheckForResend_Challenging
==============
*/
void CL_MainMP_CheckForResend_Challenging(const LocalClientNum_t localClientNum, ClConnectionDataMP *clcData)
{
  __int64 v2; 
  int ControllerFromClient; 
  const char *UserInfoString; 
  __int64 v6; 
  unsigned int ProtocolVersion; 
  const char *v8; 
  unsigned int v9; 
  const char *v10; 
  unsigned int PlatformSignature; 
  const char *v12; 
  const char *v13; 
  unsigned __int64 PersistentDataDefFormatChecksum; 
  unsigned int PersistentDataDefVersion; 
  const char *v16; 
  const char *v17; 
  const char *XuidForLocalClient; 
  const char *v19; 
  bool v20; 
  const char *v21; 
  const dvar_t *v22; 
  int v23; 
  const char *String; 
  int v25; 
  int v26; 
  __int64 v27; 
  __int64 v28; 
  char *fmt; 
  __int64 v30; 
  __int64 v31; 
  char playerGuid[21]; 
  char dest[1024]; 
  char v34[1024]; 

  v2 = localClientNum;
  if ( !clcData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 2310, ASSERT_TYPE_ASSERT, "(clcData)", (const char *)&queryFormat, "clcData") )
    __debugbreak();
  ++clcData->connectPacketCount;
  ControllerFromClient = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v2);
  UserInfoString = CL_MainMP_GetUserInfoString((LocalClientNum_t)v2);
  Core_strcpy(dest, 0x400ui64, UserInfoString);
  if ( (unsigned int)v2 >= 2 )
  {
    LODWORD(v30) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 165, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v30, 2) )
      __debugbreak();
  }
  v6 = v2;
  if ( clientUIActives[v2].frontEndSceneState[0] )
  {
    v8 = "FEp";
  }
  else
  {
    ProtocolVersion = GetProtocolVersion();
    v8 = j_va("%i", ProtocolVersion);
  }
  Info_SetValueForKey(dest, "protocol", v8);
  if ( (unsigned int)v2 >= 2 )
  {
    LODWORD(v31) = 2;
    LODWORD(v30) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 165, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v30, v31) )
      __debugbreak();
  }
  if ( clientUIActives[v6].frontEndSceneState[0] )
  {
    v10 = "FEc";
  }
  else
  {
    v9 = BG_NetDataChecksum();
    v10 = j_va("%i", v9);
  }
  Info_SetValueForKey(dest, "checksum", v10);
  PlatformSignature = MSG_GetPlatformSignature();
  v12 = j_va("%i", PlatformSignature);
  Info_SetValueForKey(dest, "platsig", v12);
  v13 = j_va("%i", (unsigned int)clcData->challenge);
  Info_SetValueForKey(dest, "challenge", v13);
  if ( (unsigned int)v2 >= 2 )
  {
    LODWORD(v31) = 2;
    LODWORD(v30) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 165, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v30, v31) )
      __debugbreak();
  }
  if ( clientUIActives[v6].frontEndSceneState[0] )
  {
    v16 = "FEs";
  }
  else
  {
    PersistentDataDefFormatChecksum = LiveStorage_GetPersistentDataDefFormatChecksum();
    PersistentDataDefVersion = LiveStorage_GetPersistentDataDefVersion();
    v16 = j_va("%i %llx", PersistentDataDefVersion, PersistentDataDefFormatChecksum);
  }
  Info_SetValueForKey(dest, "statver", v16);
  if ( (unsigned int)v2 >= 2 )
  {
    LODWORD(v31) = 2;
    LODWORD(v30) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 165, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v30, v31) )
      __debugbreak();
  }
  v17 = "0";
  if ( clientUIActives[v6].frontEndSceneState[0] )
    XuidForLocalClient = "0";
  else
    XuidForLocalClient = CL_MainMP_GetXuidForLocalClient((LocalClientNum_t)v2, ControllerFromClient);
  Info_SetValueForKey(dest, "xuid", XuidForLocalClient);
  v19 = j_va("%i", clientUIActives[v6].invited);
  Info_SetValueForKey(dest, "invited", v19);
  if ( (unsigned int)v2 >= 2 )
  {
    LODWORD(v31) = 2;
    LODWORD(v30) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 165, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v30, v31) )
      __debugbreak();
  }
  v20 = !clientUIActives[v6].frontEndSceneState[0] && !SV_IsDemoPlayingNext() && LiveStorage_ClientUsingOnlineStatsOffline((const LocalClientNum_t)v2);
  v21 = "0";
  if ( v20 )
    v21 = "1";
  Info_SetValueForKey(dest, "onlineStats", v21);
  if ( (unsigned int)v2 >= 2 )
  {
    LODWORD(v31) = 2;
    LODWORD(v30) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\client_mp.h", 254, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v30, v31) )
      __debugbreak();
  }
  if ( clientUIActives[v6].migrationState )
    v17 = "1";
  Info_SetValueForKey(dest, "migrating", v17);
  v22 = DVARBOOL_onlinegame;
  if ( !DVARBOOL_onlinegame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "onlinegame") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v22);
  v23 = v22->current.color[0];
  String = NetConnection::GetString(&clcData->serverConnection);
  LODWORD(fmt) = v23;
  Com_Printf(14, "Sending the server '%s' a connect string with userinfo '%s' - onlinegame is %i\n", String, dest, fmt);
  CL_MainMP_BuildPlayerGuid((LocalClientNum_t)v2, (char (*)[21])playerGuid);
  v25 = Com_sprintf_truncate(v34, 0x400ui64, "connect %s \"%s\"", playerGuid, dest);
  if ( v25 >= 0 )
  {
    v26 = NetConnection::SendUnreliable(&clcData->serverConnection, (const unsigned __int8 *)v34, v25);
    if ( v26 < 0 )
      CL_MainMP_TransmissionError((const LocalClientNum_t)v2, v26);
    v27 = tls_index;
    if ( (*(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1052i64) & 0x200) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 2358, ASSERT_TYPE_ASSERT, "(dvar_allowedModifiedFlags & (1 << 9))", (const char *)&queryFormat, "dvar_allowedModifiedFlags & DVAR_USERINFO") )
      __debugbreak();
    v28 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + v27);
    *(_DWORD *)(v28 + 1048) &= ~0x200u;
  }
  else
  {
    Com_PrintError(14, "CL_MainMP_CheckForResend_Challenging: info string does't fit in connect packet\n");
  }
}

/*
==============
CL_MainMP_CheckForResend_Stats
==============
*/
void CL_MainMP_CheckForResend_Stats(const LocalClientNum_t localClientNum, ClConnectionDataMP *clcData)
{
  __int64 v2; 
  int realtime; 
  int *statGroupSendTime; 
  StatsGroup v6; 
  int v7; 
  int ControllerFromClient; 
  const dvar_t *v9; 
  int v10; 
  int v11; 
  char *fmt; 
  __int64 v13; 
  __int64 v14; 
  unsigned __int8 statsGroupBuffer[14000]; 

  v2 = localClientNum;
  if ( !clcData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 2153, ASSERT_TYPE_ASSERT, "(clcData)", (const char *)&queryFormat, "clcData") )
    __debugbreak();
  if ( (unsigned int)v2 >= 2 )
  {
    LODWORD(v13) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 165, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v13, 2) )
      __debugbreak();
  }
  if ( clientUIActives[v2].frontEndSceneState[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 2154, ASSERT_TYPE_ASSERT, "(CL_GetLocalClientFrontEntState( localClientNum ) == ClFrontEndSceneState::INACTIVE)", (const char *)&queryFormat, "CL_GetLocalClientFrontEntState( localClientNum ) == ClFrontEndSceneState::INACTIVE") )
    __debugbreak();
  if ( (unsigned int)v2 >= 2 )
  {
    LODWORD(v14) = 2;
    LODWORD(v13) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v13, v14) )
      __debugbreak();
  }
  if ( clientUIActives[v2].connectionState != CA_SENDINGSTATS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 2155, ASSERT_TYPE_ASSERT, "(CL_GetLocalClientAnyConnectionState( localClientNum ) == CA_SENDINGSTATS)", (const char *)&queryFormat, "CL_GetLocalClientAnyConnectionState( localClientNum ) == CA_SENDINGSTATS") )
    __debugbreak();
  realtime = cls.realtime;
  statGroupSendTime = clcData->statGroupSendTime;
  v6 = STATSGROUP_IGNORE;
  v7 = 0;
  while ( (Com_PlayerData_GetStatsGroupBitmask((StatsGroup)v7) & clcData->statPacketsToSend) == 0 )
  {
LABEL_21:
    ++v7;
    ++statGroupSendTime;
    if ( v7 >= 6 )
      goto LABEL_24;
  }
  if ( *statGroupSendTime )
  {
    if ( *statGroupSendTime < realtime )
    {
      realtime = *statGroupSendTime;
      v6 = v7;
    }
    goto LABEL_21;
  }
  v6 = v7;
LABEL_24:
  if ( v6 == STATSGROUP_IGNORE )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 2040, ASSERT_TYPE_ASSERT, "(oldestStatsGroup != STATSGROUP_IGNORE)", (const char *)&queryFormat, "oldestStatsGroup != STATSGROUP_IGNORE") )
      __debugbreak();
LABEL_28:
    LODWORD(v14) = 6;
    LODWORD(v13) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 2158, ASSERT_TYPE_ASSERT, "(unsigned)( statsGroup ) < (unsigned)( STATSGROUP_COUNT )", "statsGroup doesn't index STATSGROUP_COUNT\n\t%i not in [0, %i)", v13, v14) )
      __debugbreak();
  }
  else if ( (unsigned int)v6 >= STATSGROUP_COUNT )
  {
    goto LABEL_28;
  }
  ControllerFromClient = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v2);
  v9 = DVARBOOL_onlinegame;
  v10 = ControllerFromClient;
  if ( !DVARBOOL_onlinegame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "onlinegame") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  if ( v9->current.enabled && LiveStorage_GettingStats(v10) )
  {
    LODWORD(v13) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 2162, ASSERT_TYPE_ASSERT, "( ( !Dvar_GetBool_Internal_DebugName( DVARBOOL_onlinegame, \"onlinegame\" ) || !LiveStorage_GettingStats( controllerIndex ) ) )", "( localClientNum ) = %i", v13) )
      __debugbreak();
  }
  v11 = CL_MainMP_GetStatsGroupBuffer(v6, v10, statsGroupBuffer, 14000);
  CL_MainMP_SendStatsGroupBuffer(v6, (const LocalClientNum_t)v2, clcData, statsGroupBuffer, v11);
  LODWORD(fmt) = v11;
  Com_Printf(14, "%s - Finished sending fragments for statsGroup %d with size %d\n", "CL_MainMP_CheckForResend_Stats", (unsigned int)v6, fmt);
  memset(statsGroupBuffer, 0, sizeof(statsGroupBuffer));
}

/*
==============
CL_MainMP_CheckNotify
==============
*/
void CL_MainMP_CheckNotify(LocalClientNum_t localClientNum, int cmdIndex, int forceNotify)
{
  bool v6; 
  bool v7; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 5265, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( CL_IsLocalClientConnectionActiveForAnyServer(localClientNum) && CL_GetLocalClientMigrationState(localClientNum) != CMSTATE_LIMBO )
  {
    v6 = Com_GameMode_SupportsFeature(WEAPON_SCOPE_TOGGLE_ON|WEAPON_FIRING|0x80) && Com_MP_GetIsLocalServerPaused();
    v7 = CL_Pause_IsGamePaused() || v6;
    CL_Main_CheckNotify(localClientNum, cmdIndex, forceNotify, v7);
  }
}

/*
==============
CL_MainMP_CheckOfflineStats
==============
*/
void CL_MainMP_CheckOfflineStats(LocalClientNum_t localClientNum, const int controllerIndex)
{
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 6003, ASSERT_TYPE_ASSERT, "(!(1 &&(((1 && 1) || ( (1 &&! 1) && !(1 &&(((1 &&(((1 &&! 1))?1:0)&& 1) || (1 &&! 1))?1:0)&& 1) ))?1:0)&& 1))", (const char *)&queryFormat, "!USING( SPLITSCREEN )") )
    __debugbreak();
  if ( LiveStorage_ShouldReadOfflineStats(controllerIndex) && Live_IsSignedIn(controllerIndex) && !LiveStorage_AreStatsFetched(controllerIndex, STATS_OFFLINE) )
    LiveStorage_ReadStats(controllerIndex);
}

/*
==============
CL_MainMP_CheckSplitscreenOfflineStats
==============
*/
void CL_MainMP_CheckSplitscreenOfflineStats(LocalClientNum_t localClientNum, const int controllerIndex)
{
  bool v4; 

  if ( LiveStorage_ShouldReadOfflineStats(controllerIndex) && Live_IsSignedIn(controllerIndex) )
  {
    v4 = g_partyData.splitscreenData.mainClient.localControllerIndex == controllerIndex;
    if ( LiveStorage_AreStatsFetched(controllerIndex, STATS_OFFLINE) )
    {
      if ( g_partyData.splitscreenData.waitingForStats && Live_IsInSystemlinkLobby() && CL_IsLocalClientActive(localClientNum) && g_partyData.inParty && !v4 )
      {
        g_partyData.splitscreenData.waitingForStats = 0;
LABEL_17:
        CL_MainMP_AddOtherLocalSplitscreenPlayer(localClientNum, controllerIndex);
      }
    }
    else
    {
      if ( Live_UserIsGuest(controllerIndex) )
        LiveStorage_CopySponsorStats(controllerIndex);
      else
        LiveStorage_ReadStats(controllerIndex);
      if ( Live_IsInSystemlinkLobby() && g_partyData.inParty && !v4 )
        goto LABEL_17;
    }
  }
}

/*
==============
CL_MainMP_CheckSplitscreenOnlineStats
==============
*/
void CL_MainMP_CheckSplitscreenOnlineStats(int controllerIndex)
{
  OnlinePlayFailureReason failureReason; 
  WaitingForOnlineServicesReason reason; 

  if ( !LiveStorage_IsWaitingOnStats(controllerIndex) && g_partyData.splitscreenData.waitingForStats && Live_CanUserPlayOnline(controllerIndex, &failureReason) && !Live_IsWaitingForOnlineServices(controllerIndex, &reason) && g_partyData.splitscreenData.mainClient.localControllerIndex != controllerIndex )
  {
    if ( !CL_MainMP_LocalClientJoinPrivateParty(controllerIndex) )
      CL_Mgr_ResetClientsBackToSingleClient(controllerIndex);
    g_partyData.splitscreenData.waitingForStats = 0;
  }
}

/*
==============
CL_MainMP_CheckTimeout
==============
*/

void __fastcall CL_MainMP_CheckTimeout(LocalClientNum_t localClientNum, __int64 a2, double _XMM2_8)
{
  ClConnectionDataMP *ClientConnectionData; 
  connstate_t LocalClientGameConnectionState; 
  const dvar_t *v10; 
  int v11; 
  char v16; 
  char v17; 
  __int64 lastPacketTime; 
  const char *v19; 
  int realtime; 
  unsigned int v27; 
  int v32; 
  int v35; 
  char *fmt; 
  __int64 v46; 

  if ( CL_GetLocalClientGameConnectionState(localClientNum) )
  {
    _RSI = ClActiveClientMP::GetClientMP(localClientNum);
    ClientConnectionData = ClConnectionMP::GetClientConnectionData(localClientNum);
    LocalClientGameConnectionState = CL_GetLocalClientGameConnectionState(localClientNum);
    v10 = DVARBOOL_no_server_timeout;
    v11 = LocalClientGameConnectionState;
    if ( !DVARBOOL_no_server_timeout && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "no_server_timeout") )
      __debugbreak();
    __asm
    {
      vmovaps [rsp+78h+var_28], xmm6
      vmovaps [rsp+78h+var_38], xmm7
    }
    Dvar_CheckFrontendServerThread(v10);
    if ( !v10->current.enabled )
    {
      if ( CL_Demo_IsPlayingServer(localClientNum) )
        goto LABEL_49;
      if ( CL_CGameMP_IsServerSavingReplay(localClientNum) )
      {
        if ( ClientConnectionData->lastPacketTime <= 0 )
          goto LABEL_49;
        __asm
        {
          vxorps  xmm6, xmm6, xmm6
          vcvtsi2ss xmm6, xmm6, eax
        }
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_cl_connectTimeout, "cl_connectTimeout");
        __asm
        {
          vmovss  xmm7, cs:__real@44fa0000
          vmulss  xmm0, xmm0, xmm7
          vcomiss xmm6, xmm0
        }
        if ( v16 | v17 )
          goto LABEL_49;
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_cl_connectTimeout, "cl_connectTimeout");
        lastPacketTime = (unsigned int)ClientConnectionData->lastPacketTime;
        v19 = "Server timed out during connstate %d with CL_IsServerSavingReplay due to realtime %d - lastPacketTime %d > cl_connectTimeout %d (*2)\n";
        __asm
        {
          vmulss  xmm1, xmm0, xmm7
          vcvttss2si eax, xmm1
        }
        LODWORD(v46) = _EAX;
        realtime = cls.realtime;
        goto LABEL_42;
      }
      __asm { vmovss  xmm7, cs:__real@447a0000 }
      if ( v11 <= 8 || ClientConnectionData->lastPacketTime <= 0 )
      {
        v27 = v11 - 2;
        if ( (unsigned int)(v11 - 2) > 6 || ClientConnectionData->lastPacketTime <= 0 )
        {
          if ( (unsigned int)(v11 - 1) > 1 || ClientConnectionData->lastPacketTime )
          {
            __asm { vxorps  xmm2, xmm2, xmm2 }
          }
          else
          {
            __asm
            {
              vxorps  xmm6, xmm6, xmm6
              vcvtsi2ss xmm6, xmm6, dword ptr [rbx+2491Ch]
            }
            Dvar_GetInt_Internal_DebugName(DVARINT_cl_connectionAttempts, "cl_connectionAttempts");
            __asm
            {
              vxorps  xmm0, xmm0, xmm0
              vcvtsi2ss xmm0, xmm0, eax
              vdivss  xmm2, xmm6, xmm0
            }
          }
        }
        else
        {
          __asm
          {
            vxorps  xmm6, xmm6, xmm6
            vcvtsi2ss xmm6, xmm6, eax
          }
          *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_cl_connectTimeout, "cl_connectTimeout");
          __asm
          {
            vmulss  xmm1, xmm0, xmm7
            vdivss  xmm2, xmm6, xmm1
          }
        }
      }
      else
      {
        __asm
        {
          vxorps  xmm6, xmm6, xmm6
          vcvtsi2ss xmm6, xmm6, eax
        }
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_cl_timeout, "cl_timeout");
        __asm
        {
          vmulss  xmm1, xmm0, xmm7
          vdivss  xmm2, xmm6, xmm1
        }
        v27 = v11 - 2;
      }
      __asm { vmovss  dword ptr [rsi+1FB40h], xmm2 }
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_cl_connectTimeout, "cl_connectTimeout");
      v32 = ClientConnectionData->lastPacketTime;
      __asm
      {
        vmulss  xmm1, xmm0, cs:__real@c47a0000
        vcvttss2si eax, xmm1
      }
      v35 = cls.realtime - v32;
      if ( v27 <= 6 && v32 > 0 && v35 > s_maxTimeExpired )
      {
        LODWORD(v46) = s_maxTimeExpired;
        LODWORD(fmt) = cls.realtime - v32;
        Com_Printf(14, "CL_MainMP_CheckTimeout during connstate %d timer has %d left on it, timeExpired %d s_maxTimeExpired %d\n", (unsigned int)v11, (unsigned int)(ClientConnectionData->lastPacketTime - _EAX - cls.realtime), fmt, v46);
        s_maxTimeExpired = v35;
      }
      if ( (!Com_MP_GetShouldClientPause() || !Com_MP_GetIsLocalServerPaused()) && (!CL_Pause_IsGamePaused() || !sv_paused->current.integer) && v11 > 8 && ClientConnectionData->lastPacketTime > 0 )
      {
        __asm
        {
          vxorps  xmm6, xmm6, xmm6
          vcvtsi2ss xmm6, xmm6, eax
        }
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_cl_timeout, "cl_timeout");
        __asm
        {
          vmulss  xmm1, xmm0, xmm7
          vcomiss xmm6, xmm1
        }
        if ( !(v16 | v17) )
        {
          if ( ++_RSI->timeoutcount > 5 )
          {
            *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_cl_timeout, "cl_timeout");
            v19 = "Server timed out during connstate %d due to realtime %d - lastPacketTime %d > cl_timeout %d\n";
LABEL_41:
            lastPacketTime = (unsigned int)cls.realtime;
            __asm
            {
              vmulss  xmm1, xmm0, xmm7
              vcvttss2si eax, xmm1
            }
            LODWORD(v46) = _EAX;
            realtime = ClientConnectionData->lastPacketTime;
LABEL_42:
            LODWORD(fmt) = realtime;
            Com_Printf(14, v19, (unsigned int)v11, lastPacketTime, fmt, v46);
            CL_MainMP_ServerTimedOut(localClientNum);
            goto LABEL_49;
          }
          goto LABEL_49;
        }
      }
      if ( v27 <= 6 && ClientConnectionData->lastPacketTime > 0 )
      {
        __asm
        {
          vxorps  xmm6, xmm6, xmm6
          vcvtsi2ss xmm6, xmm6, eax
        }
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_cl_connectTimeout, "cl_connectTimeout");
        __asm
        {
          vmulss  xmm1, xmm0, xmm7
          vcomiss xmm6, xmm1
        }
        if ( !(v16 | v17) )
        {
          if ( ++_RSI->timeoutcount > 5 )
          {
            *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_cl_connectTimeout, "cl_connectTimeout");
            v19 = "Server timed out during connstate %d due to realtime %d - lastPacketTime %d > cl_connectTimeout %d\n";
            goto LABEL_41;
          }
LABEL_49:
          __asm
          {
            vmovaps xmm6, [rsp+78h+var_28]
            vmovaps xmm7, [rsp+78h+var_38]
          }
          return;
        }
      }
      if ( (unsigned int)(v11 - 1) <= 1 && !ClientConnectionData->lastPacketTime && ClientConnectionData->connectPacketCount > Dvar_GetInt_Internal_DebugName(DVARINT_cl_connectionAttempts, "cl_connectionAttempts") )
      {
        if ( ++_RSI->timeoutcount > 5 )
        {
          LODWORD(fmt) = Dvar_GetInt_Internal_DebugName(DVARINT_cl_connectionAttempts, "cl_connectionAttempts");
          Com_Printf(14, "Server timed out during connstate %d due to connectPacketCount %d > cl_connectionAttempts %d\n", (unsigned int)v11, (unsigned int)ClientConnectionData->connectPacketCount, fmt);
          CL_MainMP_ServerTimedOut(localClientNum);
        }
        goto LABEL_49;
      }
    }
    _RSI->timeoutcount = 0;
    goto LABEL_49;
  }
  if ( localClientNum < SLODWORD(cl_maxLocalClients) )
    ClActiveClientMP::GetClientMP(localClientNum)->timeoutcount = 0;
}

/*
==============
CL_MainMP_ClearClientState
==============
*/
void CL_MainMP_ClearClientState(LocalClientNum_t localClientNum)
{
  ClActiveClientMP *ClientMP; 
  entityState_t *parseEntities; 
  clientState_t *parseClients; 
  agentState_s *parseAgents; 
  WeaponMapEntry *parseWeaponMapEntries; 
  BgScriptedCameraState *parseScriptedCameras; 
  playerState_s *parseNoDeltaPlayerState; 
  ClConnectionMP *ClientConnectionMP; 
  int PacketBackupCount; 
  unsigned int v11; 
  unsigned int parseOmnvarsCount; 
  unsigned int parseWeaponMapEntriesCount; 
  unsigned int parseNoDeltaWeaponMapEntriesCount; 
  unsigned int parseUmbraGateStatesCount; 
  OmnvarData *parseOmnvars; 
  ClSnapshot *snapshots; 
  bitarray<384> *parseUmbraGateStates; 
  WeaponMapEntry *parseNoDeltaWeaponMapEntries; 
  int parseScriptedCameraCount; 
  unsigned int parseClientsCount; 
  unsigned int parseEntitiesCount; 
  unsigned int parseAgentsCount; 

  if ( localClientNum < SLODWORD(cl_maxLocalClients) )
  {
    ClientMP = ClActiveClientMP::GetClientMP(localClientNum);
    parseEntities = ClientMP->parseEntities;
    parseClients = ClientMP->parseClients;
    parseAgents = ClientMP->parseAgents;
    parseWeaponMapEntries = ClientMP->parseWeaponMapEntries;
    parseScriptedCameras = ClientMP->parseScriptedCameras;
    parseNoDeltaPlayerState = ClientMP->parseNoDeltaPlayerState;
    parseOmnvars = ClientMP->parseOmnvars;
    parseUmbraGateStates = ClientMP->parseUmbraGateStates;
    parseClientsCount = ClientMP->parseClientsCount;
    parseEntitiesCount = ClientMP->parseEntitiesCount;
    parseAgentsCount = ClientMP->parseAgentsCount;
    parseOmnvarsCount = ClientMP->parseOmnvarsCount;
    parseWeaponMapEntriesCount = ClientMP->parseWeaponMapEntriesCount;
    parseUmbraGateStatesCount = ClientMP->parseUmbraGateStatesCount;
    parseNoDeltaWeaponMapEntries = ClientMP->parseNoDeltaWeaponMapEntries;
    parseNoDeltaWeaponMapEntriesCount = ClientMP->parseNoDeltaWeaponMapEntriesCount;
    parseScriptedCameraCount = ClientMP->parseScriptedCameraCount;
    snapshots = ClientMP->snapshots;
    if ( snapshots )
    {
      ClientConnectionMP = ClConnectionMP::GetClientConnectionMP(localClientNum);
      PacketBackupCount = ClConnectionMP::GetPacketBackupCount(ClientConnectionMP);
      memset_0(snapshots, 0, 94856i64 * PacketBackupCount);
    }
    if ( parseEntities )
      memset_0(parseEntities, 0, 248i64 * ClientMP->parseEntitiesCount);
    if ( parseClients )
      memset_0(parseClients, 0, 408i64 * ClientMP->parseClientsCount);
    if ( parseAgents )
      memset_0(parseAgents, 0, 252i64 * ClientMP->parseAgentsCount);
    if ( parseOmnvars )
    {
      v11 = BG_Omnvar_PerClientCount();
      memset_0(parseOmnvars, 0, 8 * v11 * (unsigned __int64)ClientMP->parseOmnvarsCount);
    }
    if ( parseWeaponMapEntries )
      memset_0(parseWeaponMapEntries, 0, 62i64 * ClientMP->parseWeaponMapEntriesCount);
    if ( parseUmbraGateStates )
      memset_0(parseUmbraGateStates, -1, 48i64 * ClientMP->parseUmbraGateStatesCount);
    if ( parseNoDeltaWeaponMapEntries )
      memset_0(parseNoDeltaWeaponMapEntries, 0, 62i64 * ClientMP->parseNoDeltaWeaponMapEntriesCount);
    if ( parseNoDeltaPlayerState )
      memset_0(parseNoDeltaPlayerState, 0, sizeof(playerState_s));
    if ( parseScriptedCameras )
      memset_0(parseScriptedCameras, 0, (__int64)parseScriptedCameraCount << 7);
    ClActiveClientMP::ClearClient(localClientNum);
    cls.noDeltaUseCount = 0;
    cls.nextNoDeltaEntity = 0i64;
    if ( cls.noDeltaEntities )
      memset_0(cls.noDeltaEntities, 0, 248i64 * cls.maxNoDeltaEntities);
    ClientMP->snapshots = snapshots;
    ClientMP->parseOmnvars = parseOmnvars;
    ClientMP->parseUmbraGateStates = parseUmbraGateStates;
    ClientMP->parseNoDeltaWeaponMapEntries = parseNoDeltaWeaponMapEntries;
    ClientMP->parseClientsCount = parseClientsCount;
    ClientMP->parseEntitiesCount = parseEntitiesCount;
    ClientMP->parseAgentsCount = parseAgentsCount;
    ClientMP->parseOmnvarsCount = parseOmnvarsCount;
    ClientMP->parseWeaponMapEntriesCount = parseWeaponMapEntriesCount;
    ClientMP->parseNoDeltaWeaponMapEntriesCount = parseNoDeltaWeaponMapEntriesCount;
    ClientMP->parseUmbraGateStatesCount = parseUmbraGateStatesCount;
    ClientMP->parseEntities = parseEntities;
    ClientMP->parseClients = parseClients;
    ClientMP->parseAgents = parseAgents;
    ClientMP->parseWeaponMapEntries = parseWeaponMapEntries;
    ClientMP->parseNoDeltaPlayerState = parseNoDeltaPlayerState;
    ClientMP->parseScriptedCameras = parseScriptedCameras;
    ClientMP->parseScriptedCameraCount = parseScriptedCameraCount;
  }
}

/*
==============
CL_MainMP_ClearGameState
==============
*/
void CL_MainMP_ClearGameState(void)
{
  ClConfigStringsMP *ClConfigStringsMP; 

  ClConfigStringsMP = ClConfigStringsMP::GetClConfigStringsMP();
  ClConfigStringsMP::ClearStrings(ClConfigStringsMP);
  cls.serverId = 0;
}

/*
==============
CL_MainMP_ClearState
==============
*/
void CL_MainMP_ClearState(LocalClientNum_t localClientNum)
{
  CL_MainMP_ClearClientState(localClientNum);
  Com_ClientDObjClearAllSkel(localClientNum);
  CL_Input_ClearKeys(localClientNum);
}

/*
==============
CL_MainMP_ClientFrame
==============
*/
void CL_MainMP_ClientFrame(LocalClientNum_t localClientNum, double a2, double a3)
{
  __int64 v3; 
  __int64 v4; 
  bool v5; 
  PartyData *ActiveParty; 
  __int64 v7; 
  const char *UserInfoString; 
  const char *v9; 
  __int64 v10; 
  int ControllerFromClient; 
  ClConnectionDataMP *ClientConnectionData; 
  __int64 v13; 
  __int64 v15; 
  int v16; 

  v3 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v16 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 158, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v16) )
      __debugbreak();
  }
  v4 = v3;
  v5 = CL_IsLocalClientConnectedToAnyServer((const LocalClientNum_t)v3) && !CL_IsLocalClientConnectionActiveForAnyServer((const LocalClientNum_t)v3);
  CL_DevJoin_Frame((const LocalClientNum_t)v3);
  if ( clientUIActives[v4].isRunning )
  {
    CL_DevGuiFrame((LocalClientNum_t)v3);
    if ( clientUIActives[v4].active || Com_FrontEnd_IsInFrontEnd() )
    {
      if ( !Party_PartiesAcrossGamemodesFeatureEnabled() )
      {
        Profile_Begin(489);
        CL_VoiceFrame((LocalClientNum_t)v3);
        Profile_EndInternal(NULL);
        ActiveParty = Live_GetActiveParty();
        PeerMesh_Frame(ActiveParty, (const LocalClientNum_t)v3);
      }
      CL_MigrationFrame((const LocalClientNum_t)v3);
      if ( CL_GetLocalClientMigrationState((const LocalClientNum_t)v3) != CMSTATE_LIMBO )
      {
        CL_StreamSync_Update((const LocalClientNum_t)v3);
        CL_UpdateColor((LocalClientNum_t)v3);
        if ( (unsigned int)v3 >= 2 )
        {
          LODWORD(v15) = 2;
          LODWORD(v13) = v3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v13, v15) )
            __debugbreak();
        }
        if ( clientUIActives[v4].connectionState >= CA_CHALLENGING && !CL_Pause_IsGamePaused() )
        {
          v7 = tls_index;
          if ( (*(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1052i64) & 0x200) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 3740, ASSERT_TYPE_ASSERT, "(dvar_allowedModifiedFlags & (1 << 9))", (const char *)&queryFormat, "dvar_allowedModifiedFlags & DVAR_USERINFO") )
            __debugbreak();
          if ( (*(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v7) + 1048i64) & 0x200) != 0 )
          {
            UserInfoString = CL_MainMP_GetUserInfoString((LocalClientNum_t)v3);
            Com_Printf(25, "Sending userinfo: '%s'\n", UserInfoString);
            v9 = j_va("userinfo \"%s\"", UserInfoString);
            CL_Main_AddReliableCommand((LocalClientNum_t)v3, v9);
          }
        }
        if ( (unsigned int)v3 >= 2 )
        {
          LODWORD(v15) = 2;
          LODWORD(v13) = v3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v13, v15) )
            __debugbreak();
        }
        if ( clientUIActives[v4].connectionState == CA_STARTING )
        {
          if ( !Com_GameStart_UseNewLoadingSystem() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 2496, ASSERT_TYPE_ASSERT, "(Com_GameStart_UseNewLoadingSystem())", "%s\n\tShould not be in the Starting state without the GameStart system", "Com_GameStart_UseNewLoadingSystem()") )
            __debugbreak();
          if ( !Com_GameStart_IsActive() || Com_GameStart_CanStartGame() )
          {
            Com_Printf(14, "Setting state to CA_CONNECTED in CL_MainMP_CheckForGameStart\n");
            if ( (unsigned int)v3 >= 2 )
            {
              LODWORD(v15) = 2;
              LODWORD(v13) = v3;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 195, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v13, v15) )
                __debugbreak();
            }
            Com_Printf(14, "CL_SetLocalConnectionState %i -> %i.\n", (unsigned int)clientUIActives[v4].connectionState, 3i64);
            clientUIActives[v4].connectionState = CA_CONNECTED;
          }
        }
        CL_MainMP_CheckForResend((LocalClientNum_t)v3);
        CL_MainMP_CheckTimeout((LocalClientNum_t)v3, v10, a3);
        if ( (clientUIActives[v4].keyCatchers & 0xC40) != 0 && CL_Mgr_IsClientActive((LocalClientNum_t)v3) )
        {
          ControllerFromClient = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v3);
          CL_GamepadRepeatScrollingButtons((LocalClientNum_t)v3, ControllerFromClient);
        }
        Online_Telemetry_Frame((const LocalClientNum_t)v3);
        CL_CGameMP_SetCGameTime((LocalClientNum_t)v3);
        if ( CL_IsLocalClientConnectedToAnyServer((const LocalClientNum_t)v3) && !CL_IsLocalClientConnectionActiveForAnyServer((const LocalClientNum_t)v3) )
          CL_InputMP_CreateNewCommands((LocalClientNum_t)v3, a2);
        if ( v5 )
        {
          CL_InputMP_SavePredictedData((const LocalClientNum_t)v3);
          if ( CL_InputMP_ReadyToSendPacket((LocalClientNum_t)v3) )
          {
            if ( !Com_GameMode_SupportsFeature(WEAPON_SCOPE_TOGGLE_ON|WEAPON_FIRING|0x80) || !Com_MP_GetIsLocalServerPaused() )
              CL_InputMP_WritePacket((LocalClientNum_t)v3);
          }
        }
        CG_MainMP_Frame((LocalClientNum_t)v3);
        CL_MainMP_TogglePauseResumeGame((LocalClientNum_t)v3);
        if ( CL_GetLocalClientGameConnectionState((const LocalClientNum_t)v3) >= CA_CONNECTED )
        {
          ClientConnectionData = ClConnectionMP::GetClientConnectionData((const LocalClientNum_t)v3);
          ClNetperfTelemetry::Frame(&ClientConnectionData->netperfTelemetry);
        }
      }
    }
  }
}

/*
==============
CL_MainMP_ConnectAndPreloadMap
==============
*/
void CL_MainMP_ConnectAndPreloadMap(LocalClientNum_t localClientNum, XSESSION_INFO *hostInfo, const char *mapname, const char *gametype)
{
  int MapIndex; 
  int MapSource; 
  PartyData *PartyData; 
  bool IsActive; 
  __int64 v11; 
  ClConfigStringsMP *ClConfigStringsMP; 
  bool IsLocalhost; 
  const char *v14; 
  int v15; 
  connstate_t *p_connectionState; 
  ClConnection *v17; 
  ClActiveClient *v18; 
  const XNADDR *Address; 
  netsrc_t LocalNetIDFromLocalClientNum; 
  __int64 type; 
  __int64 v22; 
  bdSecurityID v25; 

  bdSecurityID::bdSecurityID(&v25);
  if ( !hostInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 5105, ASSERT_TYPE_ASSERT, "(hostInfo)", (const char *)&queryFormat, "hostInfo") )
    __debugbreak();
  if ( !XSESSION_INFO::IsValidSessionId(hostInfo) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 5106, ASSERT_TYPE_ASSERT, "(hostInfo->IsValidSessionId())", (const char *)&queryFormat, "hostInfo->IsValidSessionId()") )
    __debugbreak();
  Com_Printf(14, "CL_ConnectAndPreloadMap called for local client %i\n", (unsigned int)localClientNum);
  MapIndex = Live_GetMapIndex(mapname);
  MapSource = Live_GetMapSource(MapIndex);
  if ( !Content_DoWeHaveContentPack(MapSource) )
  {
    PartyData = Lobby_GetPartyData();
    Party_StopParty(PartyData);
    if ( Live_IsInSystemlinkLobby() )
      Party_StopParty(&g_partyData);
    UI_MissingMapError();
  }
  Live_CheckPlayerIsSignedIn(localClientNum);
  ProfLoad_Activate();
  R_Cinematic_StopPlayback(0);
  ProfLoad_Begin("Com_SyncThreads");
  Com_SyncThreads();
  ProfLoad_End();
  ProfLoad_Begin("Com_FrontEndScene_ShutdownAndDisable");
  Com_FrontEndScene_ShutdownAndDisable();
  ProfLoad_End();
  if ( Com_IsAnyLocalServerRunning() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 5152, ASSERT_TYPE_ASSERT, "(!Com_IsAnyLocalServerRunning())", "%s\n\tCan't have a local server running when connecting to a new server", "!Com_IsAnyLocalServerRunning()") )
    __debugbreak();
  ProfLoad_Begin("CG_Main_CleanupLevel");
  CG_Main_CleanupLevel();
  ProfLoad_End();
  ProfLoad_Begin("Com_FrontEnd_ExitFrontEnd");
  Com_FrontEnd_ExitFrontEnd();
  ProfLoad_End();
  if ( Com_GameStart_UseNewLoadingSystem() )
  {
    ProfLoad_Begin("Com_FastFile_SetupForGameStart");
    IsActive = CL_PlayAgain_IsActive();
    Com_FastFile_SetupForGameStart(mapname, IsActive);
  }
  else
  {
    if ( CL_PlayAgain_IsActive() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 5173, ASSERT_TYPE_ASSERT, "(!CL_PlayAgain_IsActive())", (const char *)&queryFormat, "!CL_PlayAgain_IsActive()") )
      __debugbreak();
    ProfLoad_Begin("Com_FastFile_SyncLoadComplete");
    Com_FastFile_SyncLoadComplete(mapname);
    DB_SyncXAssetsSkipAlwaysLoaded(1);
  }
  ProfLoad_End();
  v11 = 0i64;
  if ( localClientNum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 5183, ASSERT_TYPE_ASSERT, "( localClientNum ) == ( LOCAL_CLIENT_0 )", "%s == %s\n\t%i, %i", "localClientNum", "LOCAL_CLIENT_0", localClientNum, 0i64) )
    __debugbreak();
  SND_StopSounds(SND_STOP_ALL);
  Con_Close(localClientNum);
  ProfLoad_Begin("CL_MainMP_GameAllocate");
  CL_MainMP_GameAllocate(1);
  ProfLoad_End();
  ProfLoad_Begin("CL_MainMP_ClearGameState");
  ClConfigStringsMP = ClConfigStringsMP::GetClConfigStringsMP();
  ClConfigStringsMP::ClearStrings(ClConfigStringsMP);
  cls.serverId = 0;
  ProfLoad_End();
  ClConnectionMP::GetClientConnectionData(localClientNum)->serverMessage[0] = 0;
  cl_serverLoadingMap = 0;
  ProfLoad_Begin("Setup Connection");
  IsLocalhost = XSESSION_INFO::IsLocalhost(hostInfo);
  v14 = "localhost";
  if ( !IsLocalhost )
    v14 = "Remote XboxOne";
  Core_strcpy(cls.servername, 0x100ui64, v14);
  v15 = 0;
  p_connectionState = &clientUIActives[0].connectionState;
  do
  {
    if ( CL_IsLocalClientActive((LocalClientNum_t)v15) )
    {
      if ( Com_FrontEndScene_IsActive() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 1482, ASSERT_TYPE_ASSERT, "(!Com_FrontEndScene_IsActive())", "%s\n\tDisconnect called while front end scene is still active", "!Com_FrontEndScene_IsActive()") )
        __debugbreak();
      CL_MainMP_Disconnect_Internal((LocalClientNum_t)v15);
      CL_SetLocalClientActive((LocalClientNum_t)v15, 1);
      if ( (unsigned int)v15 >= LODWORD(cl_maxLocalClients) )
      {
        *(float *)&v22 = cl_maxLocalClients;
        LODWORD(type) = v15;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_connection_mp.h", 138, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( (cl_maxLocalClients) )", "localClientNum doesn't index MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", type, v22) )
          __debugbreak();
      }
      if ( !BG_GameInterface_GameModeIsMP((GameModeType)(unsigned __int8)ClConnection::ms_activeConnectionType) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_connection_mp.h", 139, ASSERT_TYPE_ASSERT, "(BG_GameInterface_GameModeIsMP( ms_activeConnectionType ))", (const char *)&queryFormat, "BG_GameInterface_GameModeIsMP( ms_activeConnectionType )") )
        __debugbreak();
      if ( !ClConnection::ms_connections[v11] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_connection_mp.h", 140, ASSERT_TYPE_ASSERT, "(ms_connections[localClientNum])", (const char *)&queryFormat, "ms_connections[localClientNum]") )
        __debugbreak();
      v17 = ClConnection::ms_connections[v11];
      if ( (unsigned int)v15 >= LODWORD(cl_maxLocalClients) )
      {
        *(float *)&v22 = cl_maxLocalClients;
        LODWORD(type) = v15;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_active_client_mp.h", 166, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( (cl_maxLocalClients) )", "localClientNum doesn't index MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", type, v22) )
          __debugbreak();
      }
      if ( !BG_GameInterface_GameModeIsMP((GameModeType)(unsigned __int8)ClActiveClient::ms_activeClientType) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_active_client_mp.h", 167, ASSERT_TYPE_ASSERT, "(BG_GameInterface_GameModeIsMP( ms_activeClientType ))", (const char *)&queryFormat, "BG_GameInterface_GameModeIsMP( ms_activeClientType )") )
        __debugbreak();
      if ( !ClActiveClient::ms_activeClients[v11] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_active_client_mp.h", 168, ASSERT_TYPE_ASSERT, "(ms_activeClients[localClientNum])", (const char *)&queryFormat, "ms_activeClients[localClientNum]") )
        __debugbreak();
      v18 = ClActiveClient::ms_activeClients[v11];
      if ( (unsigned int)v15 >= 2 )
      {
        LODWORD(v22) = 2;
        LODWORD(type) = v15;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 158, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", type, v22) )
          __debugbreak();
      }
      if ( *((_BYTE *)p_connectionState + 28) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 5238, ASSERT_TYPE_ASSERT, "(clientUIActive->frontEndSceneState == ClFrontEndSceneState::INACTIVE)", (const char *)&queryFormat, "clientUIActive->frontEndSceneState == ClFrontEndSceneState::INACTIVE") )
        __debugbreak();
      if ( (unsigned int)v15 >= 2 )
      {
        LODWORD(v22) = 2;
        LODWORD(type) = v15;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 195, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", type, v22) )
          __debugbreak();
      }
      Com_Printf(14, "CL_SetLocalConnectionState %i -> %i.\n", *(unsigned int *)p_connectionState, 1i64);
      *p_connectionState = CA_CONNECTING;
      Address = XSESSION_INFO::GetAddress(hostInfo);
      LocalNetIDFromLocalClientNum = NET_GetLocalNetIDFromLocalClientNum((const LocalClientNum_t)v15);
      NetConnection::Open((NetConnection *)&v17[8259].m_localClientNum, LocalNetIDFromLocalClientNum, hostInfo, Address, NS_MAXCLIENTS, TYPE_GAME);
      *((_DWORD *)p_connectionState - 1) &= 1u;
      v17[9362].m_localClientNum = -99999;
      v17[9362].m_numPacketsReceived = 0;
      LODWORD(v18[1].__vftable) = 0;
    }
    ++v15;
    ++v11;
    p_connectionState += 110;
  }
  while ( v15 < 2 );
  ProfLoad_End();
  CL_StreamSync_Start();
  CL_MainMP_PreloadMap(mapname, gametype);
  CL_MainMP_InitMapLoad(mapname, gametype, 0);
  bdSecurityID::~bdSecurityID(&v25);
}

/*
==============
CL_MainMP_ConnectTransitionNextState
==============
*/
void CL_MainMP_ConnectTransitionNextState(const LocalClientNum_t localClientNum, ClConnectionDataMP *clcData)
{
  __int64 v2; 
  char LocalClientFrontEntState; 
  bool v5; 
  __int64 v6; 

  v2 = localClientNum;
  if ( !clcData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 2927, ASSERT_TYPE_ASSERT, "(clcData)", (const char *)&queryFormat, "clcData") )
    __debugbreak();
  if ( clcData->statPacketsToSend )
  {
    Com_Printf(14, "Setting state to CA_SENDINGSTATS in CL_MainMP_ConnectTransitionNextState\n");
    if ( (unsigned int)v2 >= 2 )
    {
      LODWORD(v6) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 195, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v6, 2) )
        __debugbreak();
    }
    Com_Printf(14, "CL_SetLocalConnectionState %i -> %i.\n", (unsigned int)clientUIActives[v2].connectionState, 4i64);
    clientUIActives[v2].connectionState = CA_SENDINGSTATS;
  }
  else if ( CL_MainMP_NeedsMatchRulesPackets((const LocalClientNum_t)v2, clcData) )
  {
    Com_Printf(14, "Setting state to CA_REQUESTING_MATCH_RULES in CL_MainMP_ConnectTransitionNextState\n");
    if ( (unsigned int)v2 >= 2 )
    {
      LODWORD(v6) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 195, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v6, 2) )
        __debugbreak();
    }
    Com_Printf(14, "CL_SetLocalConnectionState %i -> %i.\n", (unsigned int)clientUIActives[v2].connectionState, 5i64);
    clientUIActives[v2].connectionState = CA_REQUESTING_MATCH_RULES;
  }
  else
  {
    LocalClientFrontEntState = CL_GetLocalClientFrontEntState((const LocalClientNum_t)v2);
    v5 = LocalClientFrontEntState == 0;
    if ( !LocalClientFrontEntState )
      BG_MatchRulesHistory_Save((LocalClientNum_t)v2);
    if ( v5 && Com_GameStart_IsActive() )
    {
      if ( !Com_GameStart_UseNewLoadingSystem() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 2957, ASSERT_TYPE_ASSERT, "(Com_GameStart_UseNewLoadingSystem())", "%s\n\tShould go to the starting state without the GameStart system", "Com_GameStart_UseNewLoadingSystem()") )
        __debugbreak();
      Com_Printf(14, "Setting state to CA_STARTING in CL_MainMP_ConnectTransitionNextState\n");
      CL_SetLocalClientConnectionState((const LocalClientNum_t)v2, CA_STARTING);
    }
    else
    {
      Com_Printf(14, "Setting state to CA_CONNECTED in CL_MainMP_ConnectTransitionNextState\n");
      CL_SetLocalClientConnectionState((const LocalClientNum_t)v2, CA_CONNECTED);
    }
  }
}

/*
==============
CL_MainMP_ConnectionlessPacket_ConnectHandshake
==============
*/
bool CL_MainMP_ConnectionlessPacket_ConnectHandshake(LocalClientNum_t localClientNum, netadr_t *from, msg_t *msg, int time, const char *c)
{
  __int64 v6; 
  const char *v9; 
  __int64 v10; 
  __int64 v11; 
  int v12; 
  __int64 v13; 
  int v14; 
  int v15; 
  int v16; 
  int addrHandleIndex; 
  connstate_t v20; 
  const char *v22; 
  const char *v23; 
  __int64 v24; 
  int v25; 
  __int64 v26; 
  int v27; 
  int v28; 
  int v29; 
  bool result; 
  const char *v32; 
  __int64 v33; 
  int v34; 
  __int64 v35; 
  int v36; 
  int v37; 
  int v38; 
  const char *v40; 
  __int64 v41; 
  int v42; 
  __int64 v43; 
  int v44; 
  int v45; 
  int v46; 
  const char *v48; 
  int v49; 
  __int64 v50; 
  int v51; 
  int v52; 
  int v53; 
  __int64 connectionState; 
  unsigned int Long; 
  int v57; 
  ClConnectionDataMP *ClientConnectionData; 
  const char *v60; 
  char *fmt; 
  __int64 v62; 
  __int64 v63; 
  netadr_t v64; 

  v6 = localClientNum;
  _R13 = from;
  if ( !c && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 3184, ASSERT_TYPE_ASSERT, "(c)", (const char *)&queryFormat, "c") )
    __debugbreak();
  v9 = "challengeResponse";
  v10 = 0x7FFFFFFFi64;
  v11 = 0x7FFFFFFFi64;
  if ( !c && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  do
  {
    v12 = (unsigned __int8)v9[c - "challengeResponse"];
    v13 = v11;
    v14 = *(unsigned __int8 *)v9++;
    --v11;
    if ( !v13 )
      break;
    if ( v12 != v14 )
    {
      v15 = v12 + 32;
      if ( (unsigned int)(v12 - 65) > 0x19 )
        v15 = v12;
      v12 = v15;
      v16 = v14 + 32;
      if ( (unsigned int)(v14 - 65) > 0x19 )
        v16 = v14;
      if ( v12 != v16 )
      {
        v23 = "connectResponse";
        v24 = 0x7FFFFFFFi64;
        if ( !c && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
          __debugbreak();
        while ( 1 )
        {
          v25 = (unsigned __int8)v23[c - "connectResponse"];
          v26 = v24;
          v27 = *(unsigned __int8 *)v23++;
          --v24;
          if ( !v26 )
          {
LABEL_38:
            __asm { vmovups xmm0, xmmword ptr [r13+0] }
            v64.addrHandleIndex = _R13->addrHandleIndex;
            __asm { vmovups [rsp+88h+var_48], xmm0 }
            return CL_MainMP_HandleConnectResponse((const LocalClientNum_t)v6, &v64, msg, time);
          }
          if ( v25 != v27 )
          {
            v28 = v25 + 32;
            if ( (unsigned int)(v25 - 65) > 0x19 )
              v28 = v25;
            v25 = v28;
            v29 = v27 + 32;
            if ( (unsigned int)(v27 - 65) > 0x19 )
              v29 = v27;
            if ( v25 != v29 )
              break;
          }
          if ( !v25 )
            goto LABEL_38;
        }
        v32 = "statResponse";
        v33 = 0x7FFFFFFFi64;
        if ( !c && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
          __debugbreak();
        while ( 1 )
        {
          v34 = (unsigned __int8)v32[c - "statResponse"];
          v35 = v33;
          v36 = *(unsigned __int8 *)v32++;
          --v33;
          if ( !v35 )
          {
LABEL_50:
            __asm { vmovups xmm0, xmmword ptr [r13+0] }
            v64.addrHandleIndex = _R13->addrHandleIndex;
            __asm { vmovups [rsp+88h+var_48], xmm0 }
            return CL_MainMP_HandleStatsResponse((const LocalClientNum_t)v6, &v64, msg, time);
          }
          if ( v34 != v36 )
          {
            v37 = v34 + 32;
            if ( (unsigned int)(v34 - 65) > 0x19 )
              v37 = v34;
            v34 = v37;
            v38 = v36 + 32;
            if ( (unsigned int)(v36 - 65) > 0x19 )
              v38 = v36;
            if ( v34 != v38 )
              break;
          }
          if ( !v34 )
            goto LABEL_50;
        }
        v40 = "mruleResponse";
        v41 = 0x7FFFFFFFi64;
        if ( !c && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
          __debugbreak();
        while ( 1 )
        {
          v42 = (unsigned __int8)v40[c - "mruleResponse"];
          v43 = v41;
          v44 = *(unsigned __int8 *)v40++;
          --v41;
          if ( !v43 )
          {
LABEL_62:
            __asm { vmovups xmm0, xmmword ptr [r13+0] }
            v64.addrHandleIndex = _R13->addrHandleIndex;
            __asm { vmovups [rsp+88h+var_48], xmm0 }
            return CL_MainMP_HandleMatchRulesResponse((const LocalClientNum_t)v6, &v64, msg, time);
          }
          if ( v42 != v44 )
          {
            v45 = v42 + 32;
            if ( (unsigned int)(v42 - 65) > 0x19 )
              v45 = v42;
            v42 = v45;
            v46 = v44 + 32;
            if ( (unsigned int)(v44 - 65) > 0x19 )
              v46 = v44;
            if ( v42 != v46 )
              break;
          }
          if ( !v42 )
            goto LABEL_62;
        }
        v48 = "strt_resp";
        if ( !c && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
          __debugbreak();
        do
        {
          v49 = (unsigned __int8)v48[c - "strt_resp"];
          v50 = v10;
          v51 = *(unsigned __int8 *)v48++;
          --v10;
          if ( !v50 )
            break;
          if ( v49 != v51 )
          {
            v52 = v49 + 32;
            if ( (unsigned int)(v49 - 65) > 0x19 )
              v52 = v49;
            v49 = v52;
            v53 = v51 + 32;
            if ( (unsigned int)(v51 - 65) > 0x19 )
              v53 = v51;
            if ( v49 != v53 )
              return 0;
          }
        }
        while ( v49 );
        __asm
        {
          vmovups xmm0, xmmword ptr [r13+0]
          vmovups [rsp+88h+var_48], xmm0
        }
        if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 3137, ASSERT_TYPE_ASSERT, "(msg)", (const char *)&queryFormat, "msg") )
          __debugbreak();
        if ( v64.localNetID != NS_MAXCLIENTS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 3139, ASSERT_TYPE_ASSERT, "(from.localNetID == NS_SERVER)", (const char *)&queryFormat, "from.localNetID == NS_SERVER") )
          __debugbreak();
        if ( (unsigned int)v6 >= 2 )
        {
          LODWORD(v62) = v6;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 165, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v62, 2) )
            __debugbreak();
        }
        if ( clientUIActives[v6].frontEndSceneState[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 3142, ASSERT_TYPE_ASSERT, "(CL_GetLocalClientFrontEntState( localClientNum ) == ClFrontEndSceneState::INACTIVE)", "%s\n\tShouldn't receive starting reply from the front-end server", "CL_GetLocalClientFrontEntState( localClientNum ) == ClFrontEndSceneState::INACTIVE") )
          __debugbreak();
        if ( (unsigned int)v6 >= 2 )
        {
          LODWORD(v63) = 2;
          LODWORD(v62) = v6;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v62, v63) )
            __debugbreak();
        }
        connectionState = (unsigned int)clientUIActives[v6].connectionState;
        if ( (_DWORD)connectionState == 6 )
        {
          Com_Printf(14, "Received COM_CONNECT_HANDSHAKE_STARTING_RESPONSE packet from server\n");
          ClConnectionMP::GetClientConnectionData((const LocalClientNum_t)v6)->lastPacketTime = cls.realtime;
          return 1;
        }
        Com_Printf(14, "Received COM_CONNECT_HANDSHAKE_STARTING_RESPONSE packet while not in STARTING state (connstate = %i).  Ignored.\n", connectionState);
        return 0;
      }
    }
  }
  while ( v12 );
  addrHandleIndex = _R13->addrHandleIndex;
  __asm
  {
    vmovups xmm0, xmmword ptr [r13+0]
    vmovups [rsp+88h+var_48], xmm0
  }
  if ( !msg )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 2830, ASSERT_TYPE_ASSERT, "(msg)", (const char *)&queryFormat, "msg") )
      __debugbreak();
    __asm { vmovups xmm0, [rsp+88h+var_48] }
  }
  __asm { vpextrd rax, xmm0, 3 }
  if ( (_DWORD)_RAX != 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 2832, ASSERT_TYPE_ASSERT, "(from.localNetID == NS_SERVER)", (const char *)&queryFormat, "from.localNetID == NS_SERVER") )
    __debugbreak();
  if ( (unsigned int)v6 >= 2 )
  {
    LODWORD(v62) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v62, 2) )
      __debugbreak();
  }
  v20 = clientUIActives[v6].connectionState;
  if ( v20 == CA_CONNECTING )
  {
    Long = MSG_ReadLong(msg);
    v57 = Long;
    if ( !msg->overflowed && msg->readcount == msg->cursize + msg->splitSize )
    {
      Com_Printf(14, "Challenge received: %d\n", Long);
      ClientConnectionData = ClConnectionMP::GetClientConnectionData((const LocalClientNum_t)v6);
      ClientConnectionData->challenge = v57;
      CL_SetLocalClientConnectionState((const LocalClientNum_t)v6, CA_CHALLENGING);
      result = 1;
      ClientConnectionData->connectPacketCount = 0;
      ClientConnectionData->connectLastSendTime = -99999;
      return result;
    }
    __asm { vmovups xmm0, xmmword ptr [r13+0] }
    v64.addrHandleIndex = addrHandleIndex;
    __asm { vmovups [rsp+88h+var_48], xmm0 }
    v60 = NET_AdrToString(&v64);
    Com_Printf(14, "Challenge received with invalid data from %s. Ignored.\n", v60);
  }
  else
  {
    __asm { vmovups xmm0, xmmword ptr [r13+0] }
    v64.addrHandleIndex = addrHandleIndex;
    __asm { vmovups [rsp+88h+var_48], xmm0 }
    v22 = NET_AdrToString(&v64);
    LODWORD(fmt) = v20;
    Com_Printf(14, "Challenge received for local client %d from %s when not in CA_CONNECTING state (current state= %u) -- ignored.\n", (unsigned int)v6, v22, fmt);
  }
  return 0;
}

/*
==============
CL_MainMP_ConnectionlessPacket_GameServer
==============
*/
char CL_MainMP_ConnectionlessPacket_GameServer(LocalClientNum_t localClientNum, netadr_t *from, msg_t *msg, int time, const char *c)
{
  __int64 v5; 
  const char *v8; 
  __int64 v9; 
  __int64 v10; 
  int v11; 
  __int64 v12; 
  int v13; 
  int v14; 
  int v15; 
  PartyData *PartyData; 
  const char *v17; 
  __int64 v18; 
  int v19; 
  __int64 v20; 
  int v21; 
  int v22; 
  int v23; 
  PartyData *v24; 
  PartyData *v25; 
  const char *v27; 
  __int64 v28; 
  int v29; 
  __int64 v30; 
  int v31; 
  int v32; 
  int v33; 
  ClConnectionDataMP *ClientConnectionData; 
  const char *BigString; 
  const char *v37; 
  __int64 v38; 
  int v39; 
  __int64 v40; 
  int v41; 
  int v42; 
  int v43; 
  ClConnectionDataMP *v44; 
  char *v45; 
  const char *v46; 
  __int64 v47; 
  int v48; 
  __int64 v49; 
  int v50; 
  int v51; 
  int v52; 
  ClConnectionDataMP *v53; 
  const char *StringLine; 
  const char *v55; 
  const char *v56; 
  __int64 v57; 
  int v58; 
  __int64 v59; 
  int v60; 
  int v61; 
  int v62; 
  ClConnectionDataMP *v63; 
  const char *v64; 
  __int64 v65; 
  int v66; 
  __int64 v67; 
  int v68; 
  int v69; 
  int v70; 
  const char *v71; 
  const char *v73; 
  __int64 v74; 
  int v75; 
  __int64 v76; 
  int v77; 
  int v78; 
  int v79; 
  const char *v80; 
  const char *v81; 
  netsrc_t LocalNetIDFromLocalClientNum; 
  const char *v83; 
  __int64 v84; 
  char v85; 
  __int64 v86; 
  char v87; 
  const char *v88; 
  __int64 v89; 
  int v90; 
  __int64 v91; 
  int v92; 
  int v93; 
  int v94; 
  ClConnectionDataMP *v95; 
  bool v96; 
  char *v97; 
  int v98; 
  __int64 v99; 
  int v100; 
  int v101; 
  int v102; 
  const char *v103; 
  netadr_t v105; 
  char mapName[64]; 
  char dest[2480]; 

  v5 = localClientNum;
  _R15 = from;
  if ( !c && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 3242, ASSERT_TYPE_ASSERT, "(c)", (const char *)&queryFormat, "c") )
    __debugbreak();
  v8 = "hostquit";
  v9 = 0x7FFFFFFFi64;
  v10 = 0x7FFFFFFFi64;
  if ( !c && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  do
  {
    v11 = (unsigned __int8)v8[c - "hostquit"];
    v12 = v10;
    v13 = *(unsigned __int8 *)v8++;
    --v10;
    if ( !v12 )
      break;
    if ( v11 != v13 )
    {
      v14 = v11 + 32;
      if ( (unsigned int)(v11 - 65) > 0x19 )
        v14 = v11;
      v11 = v14;
      v15 = v13 + 32;
      if ( (unsigned int)(v13 - 65) > 0x19 )
        v15 = v13;
      if ( v11 != v15 )
        goto LABEL_21;
    }
  }
  while ( v11 );
  if ( !Lobby_AreWeServer() && (PartyData = Lobby_GetPartyData(), PartyData->inParty) && NetConnection::operator==(&PartyData->currentHost.connections[v5], _R15) )
  {
    if ( !CL_AllLocalClientsDisconnected() )
      Com_Error_impl(ERR_DISCONNECT, (const ObfuscateErrorText)&stru_144009380);
  }
  else
  {
    Com_PrintError(14, "Got 'hostquit' from non-host\n");
  }
LABEL_21:
  v17 = "roundsdone";
  v18 = 0x7FFFFFFFi64;
  if ( !c && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  do
  {
    v19 = (unsigned __int8)v17[c - "roundsdone"];
    v20 = v18;
    v21 = *(unsigned __int8 *)v17++;
    --v18;
    if ( !v20 )
      break;
    if ( v19 != v21 )
    {
      v22 = v19 + 32;
      if ( (unsigned int)(v19 - 65) > 0x19 )
        v22 = v19;
      v19 = v22;
      v23 = v21 + 32;
      if ( (unsigned int)(v21 - 65) > 0x19 )
        v23 = v21;
      if ( v19 != v23 )
        goto LABEL_37;
    }
  }
  while ( v19 );
  if ( !Lobby_AreWeServer() && (v24 = Lobby_GetPartyData(), v24->inParty) && NetConnection::operator==(&v24->currentHost.connections[v5], _R15) )
  {
    v25 = Lobby_GetPartyData();
    Party_StopParty(v25);
    Com_Error_impl(ERR_DISCONNECT, (const ObfuscateErrorText)&stru_144009380);
  }
  else
  {
    Com_PrintError(14, "Got BEST_OF_ROUNDS_DONE from non-host\n");
  }
LABEL_37:
  __asm { vmovups xmm0, xmmword ptr [r15] }
  v105.addrHandleIndex = _R15->addrHandleIndex;
  __asm { vmovups [rsp+0A88h+var_A58], xmm0 }
  if ( CL_MigrationPacket((const LocalClientNum_t)v5, c, &v105, msg) )
    return 1;
  v27 = "print";
  v28 = 0x7FFFFFFFi64;
  if ( !c && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  while ( 1 )
  {
    v29 = (unsigned __int8)v27[c - "print"];
    v30 = v28;
    v31 = *(unsigned __int8 *)v27++;
    --v28;
    if ( !v30 )
    {
LABEL_49:
      ClientConnectionData = ClConnectionMP::GetClientConnectionData((const LocalClientNum_t)v5);
      BigString = MSG_ReadBigString(msg);
      Core_strcpy(ClientConnectionData->serverMessage, 0x100ui64, BigString);
      Core_strcpy(dest, 0x9AAui64, BigString);
      Com_PrintMessage(14, dest, 0);
      return 1;
    }
    if ( v29 != v31 )
    {
      v32 = v29 + 32;
      if ( (unsigned int)(v29 - 65) > 0x19 )
        v32 = v29;
      v29 = v32;
      v33 = v31 + 32;
      if ( (unsigned int)(v31 - 65) > 0x19 )
        v33 = v31;
      if ( v29 != v33 )
        break;
    }
    if ( !v29 )
      goto LABEL_49;
  }
  v37 = "error";
  v38 = 0x7FFFFFFFi64;
  if ( !c && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  do
  {
    v39 = (unsigned __int8)v37[c - "error"];
    v40 = v38;
    v41 = *(unsigned __int8 *)v37++;
    --v38;
    if ( !v40 )
      break;
    if ( v39 != v41 )
    {
      v42 = v39 + 32;
      if ( (unsigned int)(v39 - 65) > 0x19 )
        v42 = v39;
      v39 = v42;
      v43 = v41 + 32;
      if ( (unsigned int)(v41 - 65) > 0x19 )
        v43 = v41;
      if ( v39 != v43 )
        goto LABEL_65;
    }
  }
  while ( v39 );
  if ( !CL_IsLocalClientDisconnectedFromAnyServer((const LocalClientNum_t)v5) )
  {
    v44 = ClConnectionMP::GetClientConnectionData((const LocalClientNum_t)v5);
    if ( NetConnection::CompareAddr(&v44->serverConnection, _R15) )
    {
      v45 = MSG_ReadBigString(msg);
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&queryFormat, v45);
    }
  }
LABEL_65:
  v46 = "loadingnewmap";
  v47 = 0x7FFFFFFFi64;
  if ( !c && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  while ( 1 )
  {
    v48 = (unsigned __int8)v46[c - "loadingnewmap"];
    v49 = v47;
    v50 = *(unsigned __int8 *)v46++;
    --v47;
    if ( !v49 )
    {
LABEL_76:
      if ( Com_IsAnyLocalServerRunning() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 3330, ASSERT_TYPE_ASSERT, "(!Com_IsAnyLocalServerRunning())", "%s\n\tShouldn't be receiving this message from our local server", "!Com_IsAnyLocalServerRunning()") )
        __debugbreak();
      if ( !CL_IsLocalClientDisconnectedFromAnyServer((const LocalClientNum_t)v5) )
      {
        v53 = ClConnectionMP::GetClientConnectionData((const LocalClientNum_t)v5);
        if ( NetConnection::CompareAddr(&v53->serverConnection, _R15) )
        {
          StringLine = MSG_ReadStringLine(msg, dest, 0x400u);
          Core_strcpy(mapName, 0x40ui64, StringLine);
          v55 = MSG_ReadStringLine(msg, dest, 0x400u);
          CL_MainMP_PrepareForMapRestart((LocalClientNum_t)v5, mapName, v55);
        }
      }
      return 1;
    }
    if ( v48 != v50 )
    {
      v51 = v48 + 32;
      if ( (unsigned int)(v48 - 65) > 0x19 )
        v51 = v48;
      v48 = v51;
      v52 = v50 + 32;
      if ( (unsigned int)(v50 - 65) > 0x19 )
        v52 = v50;
      if ( v48 != v52 )
        break;
    }
    if ( !v48 )
      goto LABEL_76;
  }
  v56 = "fastrestart";
  v57 = 0x7FFFFFFFi64;
  if ( !c && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  while ( 1 )
  {
    v58 = (unsigned __int8)v56[c - "fastrestart"];
    v59 = v57;
    v60 = *(unsigned __int8 *)v56++;
    --v57;
    if ( !v59 )
    {
LABEL_93:
      if ( CL_IsLocalClientConnectionActiveForAnyServer((const LocalClientNum_t)v5) )
      {
        v63 = ClConnectionMP::GetClientConnectionData((const LocalClientNum_t)v5);
        v63->isServerRestarting = NetConnection::CompareAddr(&v63->serverConnection, _R15);
      }
      return 1;
    }
    if ( v58 != v60 )
    {
      v61 = v58 + 32;
      if ( (unsigned int)(v58 - 65) > 0x19 )
        v61 = v58;
      v58 = v61;
      v62 = v60 + 32;
      if ( (unsigned int)(v60 - 65) > 0x19 )
        v62 = v60;
      if ( v58 != v62 )
        break;
    }
    if ( !v58 )
      goto LABEL_93;
  }
  v64 = "disconnect";
  v65 = 0x7FFFFFFFi64;
  if ( !c && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  while ( 1 )
  {
    v66 = (unsigned __int8)v64[c - "disconnect"];
    v67 = v65;
    v68 = *(unsigned __int8 *)v64++;
    --v65;
    if ( !v67 )
    {
LABEL_106:
      if ( Cmd_Argc() <= 1 )
      {
        __asm { vmovups xmm0, xmmword ptr [r15] }
        v105.addrHandleIndex = _R15->addrHandleIndex;
        __asm { vmovups [rsp+0A88h+var_A58], xmm0 }
        CL_MainMP_DisconnectPacket((LocalClientNum_t)v5, &v105, NULL);
      }
      else
      {
        v71 = Cmd_Argv(1);
        __asm { vmovups xmm0, xmmword ptr [r15] }
        v105.addrHandleIndex = _R15->addrHandleIndex;
        __asm { vmovups [rsp+0A88h+var_A58], xmm0 }
        CL_MainMP_DisconnectPacket((LocalClientNum_t)v5, &v105, v71);
      }
      return 1;
    }
    if ( v66 != v68 )
    {
      v69 = v66 + 32;
      if ( (unsigned int)(v66 - 65) > 0x19 )
        v69 = v66;
      v66 = v69;
      v70 = v68 + 32;
      if ( (unsigned int)(v68 - 65) > 0x19 )
        v70 = v68;
      if ( v66 != v70 )
        break;
    }
    if ( !v66 )
      goto LABEL_106;
  }
  v73 = "echo";
  v74 = 0x7FFFFFFFi64;
  if ( !c && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  while ( 1 )
  {
    v75 = (unsigned __int8)v73[c - "echo"];
    v76 = v74;
    v77 = *(unsigned __int8 *)v73++;
    --v74;
    if ( !v76 )
    {
LABEL_119:
      v80 = Cmd_Argv(1);
      v81 = j_va((const char *)&queryFormat, v80);
      LocalNetIDFromLocalClientNum = NET_GetLocalNetIDFromLocalClientNum((const LocalClientNum_t)v5);
      NET_OutOfBandPrint(LocalNetIDFromLocalClientNum, _R15, v81);
      return 1;
    }
    if ( v75 != v77 )
    {
      v78 = v75 + 32;
      if ( (unsigned int)(v75 - 65) > 0x19 )
        v78 = v75;
      v75 = v78;
      v79 = v77 + 32;
      if ( (unsigned int)(v77 - 65) > 0x19 )
        v79 = v77;
      if ( v75 != v79 )
        break;
    }
    if ( !v75 )
      goto LABEL_119;
  }
  v83 = "perfoverlay";
  v84 = 0x7FFFFFFFi64;
  if ( !c && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  while ( 1 )
  {
    v85 = v83[c - "perfoverlay"];
    v86 = v84;
    v87 = *v83++;
    --v84;
    if ( !v86 )
    {
LABEL_126:
      CL_ParseMP_ParseOverlayBits((LocalClientNum_t)v5, msg);
      return 1;
    }
    if ( v85 != v87 )
      break;
    if ( !v85 )
      goto LABEL_126;
  }
  v88 = "replaysave";
  v89 = 0x7FFFFFFFi64;
  if ( !c && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  while ( 1 )
  {
    v90 = (unsigned __int8)v88[c - "replaysave"];
    v91 = v89;
    v92 = *(unsigned __int8 *)v88++;
    --v89;
    if ( !v91 )
    {
LABEL_138:
      if ( !CL_IsLocalClientDisconnectedFromAnyServer((const LocalClientNum_t)v5) )
      {
        v95 = ClConnectionMP::GetClientConnectionData((const LocalClientNum_t)v5);
        v96 = CL_IsLocalClientConnectionActiveForAnyServer((const LocalClientNum_t)v5) && NetConnection::CompareAddr(&v95->serverConnection, _R15);
        v95->isServerSavingReplay = v96;
        v95->replayRequestor = Cmd_ArgInt(1);
        v103 = Cmd_Argv(2);
        Core_strcpy_truncate(v95->replayPath, 0x100ui64, v103);
        CG_DrawNetMP_BuildSavingReplayString((const LocalClientNum_t)v5, dest, 1024);
        Com_Printf(14, "^5%s\n", dest);
      }
      return 1;
    }
    if ( v90 != v92 )
    {
      v93 = v90 + 32;
      if ( (unsigned int)(v90 - 65) > 0x19 )
        v93 = v90;
      v90 = v93;
      v94 = v92 + 32;
      if ( (unsigned int)(v92 - 65) > 0x19 )
        v94 = v92;
      if ( v90 != v94 )
        break;
    }
    if ( !v90 )
      goto LABEL_138;
  }
  v97 = &stru_1440E06D8.description[120];
  if ( !c && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  while ( 1 )
  {
    v98 = (unsigned __int8)v97[c - &stru_1440E06D8.description[120]];
    v99 = v9;
    v100 = (unsigned __int8)*v97++;
    --v9;
    if ( !v99 )
    {
LABEL_153:
      ClConnectionMP::GetClientConnectionData((const LocalClientNum_t)v5)->isServerSavingReplay = 0;
      return 1;
    }
    if ( v98 != v100 )
    {
      v101 = v98 + 32;
      if ( (unsigned int)(v98 - 65) > 0x19 )
        v101 = v98;
      v98 = v101;
      v102 = v100 + 32;
      if ( (unsigned int)(v100 - 65) > 0x19 )
        v102 = v100;
      if ( v98 != v102 )
        return 0;
    }
    if ( !v98 )
      goto LABEL_153;
  }
}

/*
==============
CL_MainMP_DeterminePacketBackupCount
==============
*/
__int64 CL_MainMP_DeterminePacketBackupCount(const int allocFlags)
{
  if ( (allocFlags & 2) != 0 )
  {
    Com_Printf(14, "CL_MainMP_DeterminePacketBackupCount: FRONTEND_PACKET_BACKUP (front-end)\n");
    return 16i64;
  }
  else if ( (allocFlags & 8) != 0 )
  {
    Com_Printf(14, "CL_MainMP_DeterminePacketBackupCount: NETWORK_PACKET_BACKUP (demo)\n");
    return 64i64;
  }
  else if ( (allocFlags & 4) != 0 )
  {
    Com_Printf(14, "CL_MainMP_DeterminePacketBackupCount: NETWORK_HOST_PACKET_BACKUP (host)\n");
    return 32i64;
  }
  else
  {
    Com_Printf(14, "CL_MainMP_DeterminePacketBackupCount: NETWORK_PACKET_BACKUP (default)\n");
    return 64i64;
  }
}

/*
==============
CL_MainMP_Disconnect
==============
*/
void CL_MainMP_Disconnect(LocalClientNum_t localClientNum)
{
  if ( Com_FrontEndScene_IsActive() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 1482, ASSERT_TYPE_ASSERT, "(!Com_FrontEndScene_IsActive())", "%s\n\tDisconnect called while front end scene is still active", "!Com_FrontEndScene_IsActive()") )
    __debugbreak();
  CL_MainMP_Disconnect_Internal(localClientNum);
}

/*
==============
CL_MainMP_DisconnectError
==============
*/
void CL_MainMP_DisconnectError(const LocalClientNum_t localClientNum, const char *message, const char *defaultMessage)
{
  __int64 v3; 
  PartyData *PartyData; 
  NetConnection *HostConnection; 
  ClConnectionDataMP *ClientConnectionData; 
  int StartingControllerIndex; 
  const char *v9; 
  const char *v10; 
  const char *v11; 
  __int64 v12; 
  PartyActiveClient mainActiveClient; 
  char dest[1024]; 

  v3 = localClientNum;
  if ( !message && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 2691, ASSERT_TYPE_ASSERT, "(message)", (const char *)&queryFormat, "message") )
    __debugbreak();
  if ( (unsigned int)v3 >= 2 )
  {
    LODWORD(v12) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 165, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v12, 2) )
      __debugbreak();
  }
  if ( clientUIActives[v3].frontEndSceneState[0] )
  {
    Com_PrintError(14, "Received a disconnect error while in the front end. This is not suppoesd to happen.\n", defaultMessage);
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&queryFormat, message);
  }
  if ( !CL_MainMP_HandleDisconnectError_Party((const LocalClientNum_t)v3, message) && !CL_MainMP_HandleDisconnectError_Dev((const LocalClientNum_t)v3, message) )
  {
    PartyData = Lobby_GetPartyData();
    HostConnection = (NetConnection *)Party_GetHostConnection(PartyData, (LocalClientNum_t)v3);
    ClientConnectionData = ClConnectionMP::GetClientConnectionData((const LocalClientNum_t)v3);
    if ( PartyData->inParty && NetConnection::operator==(HostConnection, &ClientConnectionData->serverConnection) && !Lobby_AreWeHost() )
    {
      StartingControllerIndex = Party_GetStartingControllerIndex(PartyData);
      mainActiveClient = Party_GetMainActiveClient(PartyData, StartingControllerIndex);
      PartyClient_LostConnectionToHost(PartyData, &mainActiveClient, UNKNOWN, message);
    }
    if ( CL_MainMP_DisconnectError_ShouldShowGenericMessage(message) )
    {
      Com_PrintError(16, "Showing generic disconnect error. Server sent us '%s' as their disconnect reason.\n", message);
      Com_Error_impl(ERR_SERVERDISCONNECT, (const ObfuscateErrorText)&stru_144009380);
    }
    else
    {
      v9 = SEH_LocalizeTextMessage(message, "Disconnect Error", LOCMSG_NOERR);
      if ( v9 )
        Core_strcpy(dest, 0x400ui64, v9);
      else
        Com_sprintf(dest, 0x400ui64, "[UNLOCALIZED] %s", message);
      v10 = SEH_SafeTranslateString("EXE/SERVERDISCONNECTREASON");
      v11 = UI_ReplaceConversionString(v10, dest);
      Com_Error_impl(ERR_SERVERDISCONNECT, (const ObfuscateErrorText)&queryFormat, v11);
    }
  }
}

/*
==============
CL_MainMP_DisconnectError_ShouldShowGenericMessage
==============
*/
__int64 CL_MainMP_DisconnectError_ShouldShowGenericMessage(const char *message)
{
  const char *v1; 
  __int64 v2; 
  __int64 v3; 
  unsigned __int8 *v4; 
  int v5; 
  __int64 v6; 
  int v7; 
  int v8; 
  int v9; 
  __int64 v11; 
  unsigned __int8 *v12; 
  int v13; 
  __int64 v14; 
  int v15; 
  int v16; 
  int v17; 
  __int64 v18; 
  unsigned __int8 *v19; 
  int v20; 
  __int64 v21; 
  int v22; 
  int v23; 
  int v24; 
  __int64 v25; 
  unsigned __int8 *v26; 
  int v27; 
  __int64 v28; 
  int v29; 
  int v30; 
  int v31; 
  char *v32; 
  int v33; 
  __int64 v34; 
  int v35; 
  int v36; 
  int v37; 

  v1 = message;
  if ( !message && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 2523, ASSERT_TYPE_ASSERT, "(message)", (const char *)&queryFormat, "message") )
    __debugbreak();
  v2 = 0x7FFFFFFFi64;
  v3 = 0x7FFFFFFFi64;
  v4 = (unsigned __int8 *)v1;
  if ( !v1 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
    __debugbreak();
  do
  {
    v5 = v4["XBOXLIVE/SIGNINCHANGED" - v1];
    v6 = v3;
    v7 = *v4++;
    --v3;
    if ( !v6 )
      break;
    if ( v5 != v7 )
    {
      v8 = v5 + 32;
      if ( (unsigned int)(v5 - 65) > 0x19 )
        v8 = v5;
      v5 = v8;
      v9 = v7 + 32;
      if ( (unsigned int)(v7 - 65) > 0x19 )
        v9 = v7;
      if ( v5 != v9 )
      {
        v11 = 0x7FFFFFFFi64;
        v12 = (unsigned __int8 *)v1;
        if ( !v1 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
          __debugbreak();
        while ( 1 )
        {
          v13 = v12[(char *)&stru_1441CE5D8 - v1];
          v14 = v11;
          v15 = *v12++;
          --v11;
          if ( !v14 )
            break;
          if ( v13 != v15 )
          {
            v16 = v13 + 32;
            if ( (unsigned int)(v13 - 65) > 0x19 )
              v16 = v13;
            v13 = v16;
            v17 = v15 + 32;
            if ( (unsigned int)(v15 - 65) > 0x19 )
              v17 = v15;
            if ( v13 != v17 )
            {
              v18 = 0x7FFFFFFFi64;
              v19 = (unsigned __int8 *)v1;
              if ( !v1 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
                __debugbreak();
              while ( 1 )
              {
                v20 = v19["XBOXLIVE/SIGNEDOUT" - v1];
                v21 = v18;
                v22 = *v19++;
                --v18;
                if ( !v21 )
                  break;
                if ( v20 != v22 )
                {
                  v23 = v20 + 32;
                  if ( (unsigned int)(v20 - 65) > 0x19 )
                    v23 = v20;
                  v20 = v23;
                  v24 = v22 + 32;
                  if ( (unsigned int)(v22 - 65) > 0x19 )
                    v24 = v22;
                  if ( v20 != v24 )
                  {
                    v25 = 0x7FFFFFFFi64;
                    v26 = (unsigned __int8 *)v1;
                    if ( !v1 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
                      __debugbreak();
                    while ( 1 )
                    {
                      v27 = v26["EXE/SERVERKILLED" - v1];
                      v28 = v25;
                      v29 = *v26++;
                      --v25;
                      if ( !v28 )
                        break;
                      if ( v27 != v29 )
                      {
                        v30 = v27 + 32;
                        if ( (unsigned int)(v27 - 65) > 0x19 )
                          v30 = v27;
                        v27 = v30;
                        v31 = v29 + 32;
                        if ( (unsigned int)(v29 - 65) > 0x19 )
                          v31 = v29;
                        if ( v27 != v31 )
                        {
                          if ( !v1 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
                            __debugbreak();
                          v32 = (char *)("clientsdisconnected" - v1);
                          while ( 1 )
                          {
                            v33 = (unsigned __int8)v1[(_QWORD)v32];
                            v34 = v2;
                            v35 = *(unsigned __int8 *)v1++;
                            --v2;
                            if ( !v34 )
                              break;
                            if ( v33 != v35 )
                            {
                              v36 = v33 + 32;
                              if ( (unsigned int)(v33 - 65) > 0x19 )
                                v36 = v33;
                              v33 = v36;
                              v37 = v35 + 32;
                              if ( (unsigned int)(v35 - 65) > 0x19 )
                                v37 = v35;
                              if ( v33 != v37 )
                                return 0i64;
                            }
                            if ( !v33 )
                              return 1i64;
                          }
                          return 1i64;
                        }
                      }
                      if ( !v27 )
                        return 1i64;
                    }
                    return 1i64;
                  }
                }
                if ( !v20 )
                  return 1i64;
              }
              return 1i64;
            }
          }
          if ( !v13 )
            return 1i64;
        }
        return 1i64;
      }
    }
  }
  while ( v5 );
  return 1i64;
}

/*
==============
CL_MainMP_DisconnectFrontEndScene
==============
*/
void CL_MainMP_DisconnectFrontEndScene(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  int v3; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v3 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 165, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v3) )
      __debugbreak();
  }
  if ( clientUIActives[v1].frontEndSceneState[0] != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 1489, ASSERT_TYPE_ASSERT, "(CL_GetLocalClientFrontEntState( localClientNum ) == ClFrontEndSceneState::ACTIVE)", (const char *)&queryFormat, "CL_GetLocalClientFrontEntState( localClientNum ) == ClFrontEndSceneState::ACTIVE") )
    __debugbreak();
  CL_MainMP_Disconnect_Internal((LocalClientNum_t)v1);
}

/*
==============
CL_MainMP_DisconnectLocalClient
==============
*/
void CL_MainMP_DisconnectLocalClient(LocalClientNum_t localClientNum, bool shouldDeclineInvite)
{
  __int64 v2; 
  bool v4; 
  PartyData *PartyData; 

  v2 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 165, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( clientUIActives[v2].frontEndSceneState[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 1530, ASSERT_TYPE_ASSERT, "(CL_GetLocalClientFrontEntState( localClientNum ) == ClFrontEndSceneState::INACTIVE)", (const char *)&queryFormat, "CL_GetLocalClientFrontEntState( localClientNum ) == ClFrontEndSceneState::INACTIVE") )
    __debugbreak();
  v4 = !CL_IsLocalClientDisconnectedFromAnyServer((const LocalClientNum_t)v2);
  if ( Com_FrontEndScene_IsActive() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 1482, ASSERT_TYPE_ASSERT, "(!Com_FrontEndScene_IsActive())", "%s\n\tDisconnect called while front end scene is still active", "!Com_FrontEndScene_IsActive()") )
    __debugbreak();
  CL_MainMP_Disconnect_Internal((LocalClientNum_t)v2);
  if ( CL_AllLocalClientsDisconnected() )
  {
    PartyData = Lobby_GetPartyData();
    Party_StopParty(PartyData);
  }
  if ( v4 && CL_AllLocalClientsDisconnected() )
  {
    *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1052i64) = -4609;
    if ( shouldDeclineInvite )
    {
      OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, DODGE, NULL);
      Live_ThrowError(ERR_DISCONNECT, "PLATFORM/DISCONNECTED_FROM_SERVER");
    }
    else
    {
      OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, COUNT, NULL);
      Live_ThrowError_DontDeclineInvite(ERR_DISCONNECT, "PLATFORM/DISCONNECTED_FROM_SERVER");
    }
  }
}

/*
==============
CL_MainMP_DisconnectPacket
==============
*/
void CL_MainMP_DisconnectPacket(LocalClientNum_t localClientNum, netadr_t *from, const char *reason)
{
  __int64 v3; 
  ClConnectionDataMP *ClientConnectionData; 

  v3 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 165, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( clientUIActives[v3].frontEndSceneState[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 2776, ASSERT_TYPE_ASSERT, "(CL_GetLocalClientFrontEntState( localClientNum ) == ClFrontEndSceneState::INACTIVE)", "%s\n\tShouldn't receive a disconnect packet from the front-end server", "CL_GetLocalClientFrontEntState( localClientNum ) == ClFrontEndSceneState::INACTIVE") )
    __debugbreak();
  if ( !CL_IsLocalClientDisconnectedFromAnyServer((const LocalClientNum_t)v3) )
  {
    if ( !ClConnection::HasClientConnection((const LocalClientNum_t)v3) || (ClientConnectionData = ClConnectionMP::GetClientConnectionData((const LocalClientNum_t)v3), NetConnection::CompareAddr(&ClientConnectionData->serverConnection, from)) )
    {
      if ( reason )
      {
        CL_MainMP_DisconnectError((const LocalClientNum_t)v3, reason, NULL);
      }
      else
      {
        OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, COUNT, NULL);
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144009360);
      }
    }
  }
}

/*
==============
CL_MainMP_Disconnect_Internal
==============
*/

void __fastcall CL_MainMP_Disconnect_Internal(LocalClientNum_t localClientNum, double _XMM1_8)
{
  __int64 v2; 
  __int64 v3; 
  int ControllerFromClient; 
  bool IsLocalClientDisconnectedFromAnyServer; 
  bool v6; 
  bool v7; 
  char v8; 
  ClConnectionDataMP *ClientConnectionData; 
  int v10; 
  bool v11; 
  __int64 v12; 
  ClActiveClientMP *ClientMP; 
  const dvar_t *v18; 
  PartyData *PartyData; 
  const dvar_t *v20; 
  PartyData *v21; 
  PartyData *v22; 
  const dvar_t *v23; 
  __int64 v24; 
  __int64 v25; 
  bool v26; 
  bool v27; 
  int LocalClientAnyConnectionState; 

  v2 = localClientNum;
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 1177, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( (unsigned int)v2 >= 2 )
  {
    LODWORD(v24) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 158, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v24, 2) )
      __debugbreak();
  }
  v3 = v2;
  if ( clientUIActives[v2].isRunning )
  {
    if ( CL_Mgr_IsClientActive((LocalClientNum_t)v2) )
      ControllerFromClient = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v2);
    else
      ControllerFromClient = -1;
    Com_Printf(14, "CL_MainMP_Disconnect called for local client %i\n", (unsigned int)v2);
    LocalClientAnyConnectionState = CL_GetLocalClientAnyConnectionState((const LocalClientNum_t)v2);
    IsLocalClientDisconnectedFromAnyServer = CL_IsLocalClientDisconnectedFromAnyServer((const LocalClientNum_t)v2);
    v6 = !IsLocalClientDisconnectedFromAnyServer;
    v7 = (unsigned __int8)CL_GetLocalClientFrontEntState((const LocalClientNum_t)v2) != INACTIVE;
    v26 = v7;
    v27 = !IsLocalClientDisconnectedFromAnyServer && !v7;
    if ( IsLocalClientDisconnectedFromAnyServer || !ClConnection::HasClientConnection((const LocalClientNum_t)v2) )
    {
      v8 = 0;
      ClientConnectionData = NULL;
    }
    else
    {
      v8 = 1;
      ClientConnectionData = ClConnectionMP::GetClientConnectionData((const LocalClientNum_t)v2);
    }
    if ( !IsLocalClientDisconnectedFromAnyServer )
      CL_UICharacter_Reset((const LocalClientNum_t)v2);
    v10 = 0;
    Sys_HeapOptimize();
    if ( !IsLocalClientDisconnectedFromAnyServer && cls.m_activeGameMapName[0] )
      BB_RecordSystemMemoryFootprint(cls.m_activeGameMapName, 1);
    v11 = v26;
    if ( v26 )
    {
      v10 = 1;
    }
    else
    {
      if ( v8 && CL_Demo_IsPlayingServer((LocalClientNum_t)v2) )
        v10 = 1;
      R_Cinematic_StopPlayback(0);
      if ( (Session_IsValid(&g_serverSession) || Live_IsInSystemlinkLobby() && CL_GetLocalClientGameConnectionState((const LocalClientNum_t)v2)) && ClientConnectionData && LocalClientAnyConnectionState >= 3 && ClientConnectionData->reliableSequence - ClientConnectionData->reliableAcknowledge <= 128 )
      {
        CL_Main_AddReliableCommand((LocalClientNum_t)v2, "disconnect");
        v12 = 3i64;
        do
        {
          CL_InputMP_WritePacket((LocalClientNum_t)v2);
          --v12;
        }
        while ( v12 );
        FakeLag_FlushPackets();
        v11 = 0;
      }
      if ( v8 )
      {
        ClientMP = ClActiveClientMP::GetClientMP((const LocalClientNum_t)v2);
        ClActiveClientMP::PrintAdjustTime(ClientMP);
      }
    }
    CL_LatencyProfileMP_Shutdown((const LocalClientNum_t)v2);
    CL_StreamSync_Shutdown((const LocalClientNum_t)v2);
    CL_MainMP_ClearClientState((LocalClientNum_t)v2);
    Com_ClientDObjClearAllSkel((LocalClientNum_t)v2);
    CL_Input_ClearKeys((LocalClientNum_t)v2);
    if ( ControllerFromClient != -1 )
    {
      __asm { vxorps  xmm1, xmm1, xmm1; rumble }
      GPad_SetLowRumble(ControllerFromClient, *(float *)&_XMM1);
      __asm { vxorps  xmm1, xmm1, xmm1; rumble }
      GPad_SetHighRumble(ControllerFromClient, *(float *)&_XMM1);
      __asm { vxorps  xmm1, xmm1, xmm1; rumble }
      GPad_SetLeftTriggerRumble(ControllerFromClient, *(float *)&_XMM1);
      __asm { vxorps  xmm1, xmm1, xmm1; rumble }
      GPad_SetRightTriggerRumble(ControllerFromClient, *(float *)&_XMM1);
    }
    if ( v27 )
    {
      if ( !v10 )
        LiveStorage_EndGame((const LocalClientNum_t)v2);
      CL_Streaming_CancelLoadingRequests((const LocalClientNum_t)v2);
    }
    if ( v6 && ClientConnectionData )
    {
      CL_MainMP_DlogNetperf((LocalClientNum_t)v2, v11);
      ClConnectionMP::ClearClientConnection((const LocalClientNum_t)v2);
      ClActiveClientMP::GetClientMP((const LocalClientNum_t)v2)->serverId = 0;
    }
    cl_serverLoadingMap = 0;
    clientUIActives[v3].frontEndSceneState[0] = 0;
    if ( (unsigned int)v2 >= 2 )
    {
      LODWORD(v25) = 2;
      LODWORD(v24) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 195, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v24, v25) )
        __debugbreak();
    }
    Com_Printf(14, "CL_SetLocalConnectionState %i -> %i.\n", (unsigned int)clientUIActives[v3].connectionState, 0i64);
    clientUIActives[v3].connectionState = CA_DISCONNECTED;
    Online_Telemetry_ResetInputSession((const LocalClientNum_t)v2);
    if ( !(_DWORD)v2 )
      NetStats_Stop();
    R_Cinematic_SetUseAlternativeAsyncCore(0);
    if ( (unsigned int)v2 >= 2 )
    {
      LODWORD(v25) = 2;
      LODWORD(v24) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\client_mp.h", 265, ASSERT_TYPE_ASSERT, "(unsigned)( client ) < (unsigned)( 2 )", "client doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v24, v25) )
        __debugbreak();
    }
    CL_UpdateMigrationProfile(clientUIActives[v3].migrationState, CMSTATE_INACTIVE);
    clientUIActives[v3].migrationState = CMSTATE_INACTIVE;
    Physics_WaitForAllCommandsToFinish();
    DynEntCl_Shutdown((LocalClientNum_t)v2);
    ScriptableCl_Shutdown((const LocalClientNum_t)v2);
    R_EndDelayedSceneModels(0);
    SND_DisconnectListener((LocalClientNum_t)v2);
    if ( v27 )
    {
      clientUIActives[v3].keyCatchers &= 1u;
      CL_SetupScreenPlacements();
      if ( ControllerFromClient != -1 )
      {
        Live_Disconnected(ControllerFromClient);
        XB3GameEvent_MultiplayerRoundEnd(ControllerFromClient);
      }
    }
    CG_Main_FreePhysics((LocalClientNum_t)v2);
    CG_Main_FreeRagdolls((LocalClientNum_t)v2);
    if ( Ragdoll_IsRegistered((LocalClientNum_t)v2) )
      Ragdoll_Unregister((LocalClientNum_t)v2);
    CG_Main_FreeCloth((LocalClientNum_t)v2);
    if ( CL_AllLocalClientsDisconnected() )
    {
      cls.m_serverFrameDuration = 0;
      ClStatic::SetGameMapName(&cls, (const char *)&queryFormat.fmt + 3);
      ClStatic::SetActiveGameType(&cls, (const char *)&queryFormat.fmt + 3);
      ClStatic::SetActiveHardcoreMode(&cls, 0);
      cls.serverId = 0;
      if ( v27 )
      {
        v18 = DVARBOOL_onlinegame;
        if ( !DVARBOOL_onlinegame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "onlinegame") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v18);
        if ( v18->current.enabled )
        {
          PartyData = Lobby_GetPartyData();
          Party_SaveGameLobbyId(PartyData);
        }
        v20 = DVARBOOL_onlinegame;
        if ( !DVARBOOL_onlinegame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "onlinegame") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v20);
        if ( !v20->current.enabled && !Com_IsAnyLocalServerRunning() )
        {
          Com_Printf(14, "CL_MainMP_Disconnect was called, calling Party_StopParty\n");
          v21 = Lobby_GetPartyData();
          Party_StopParty(v21);
          if ( !Live_IsInSystemlinkLobby() )
            Party_StopParty(&g_partyData);
        }
        Dvar_SetBool_Internal(DVARBOOL_should_show_post_game_survey, 0);
        if ( !Com_FrontEnd_IsInFrontEnd() )
        {
          v22 = Lobby_GetPartyData();
          if ( PartyHost_IsMatchChosenForSurvey(v22) )
            Dvar_SetBool_Internal(DVARBOOL_should_show_post_game_survey, 1);
        }
      }
      if ( !Com_IsAnyLocalServerRunning() && !Com_IsAnyLocalServerStarting() )
        NetConstStrings_Clear();
    }
    if ( v27 )
    {
      v23 = DVARBOOL_systemlink;
      if ( !DVARBOOL_systemlink && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "systemlink") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v23);
      if ( v23->current.enabled && !Live_IsInSystemlinkLobby() )
        Party_StopParty(&g_partyData);
      Cbuf_AddText((LocalClientNum_t)v2, "updategamerprofile\n");
    }
    MSG_UserCmd_ClearWriteData();
    CL_ShutdownDebugData();
    Com_Printf(14, "CL_MainMP_Disconnect_Internal: Complete for local client %i\n", (unsigned int)v2);
  }
}

/*
==============
CL_MainMP_DispatchConnectionlessPacket
==============
*/
char CL_MainMP_DispatchConnectionlessPacket(LocalClientNum_t localClientNum, netadr_t *from, msg_t *msg, int time)
{
  const char *v8; 
  bool v9; 
  const char *v10; 
  int addrHandleIndex; 
  const char *v13; 
  __int64 v14; 
  __int64 v15; 
  int v16; 
  __int64 v17; 
  int v18; 
  int v19; 
  int v20; 
  const char *v22; 
  signed __int64 v23; 
  int v24; 
  __int64 v25; 
  int v26; 
  int v27; 
  int v28; 
  netadr_t v32[3]; 

  _RDI = from;
  v8 = Cmd_Argv(0);
  v9 = (_RDI->flags & 1) == 0;
  v10 = v8;
  __asm
  {
    vmovups xmm0, xmmword ptr [rdi]
    vmovups [rsp+78h+var_48], xmm0
  }
  if ( !v9 )
  {
    addrHandleIndex = _RDI->addrHandleIndex;
    v13 = "inforesponse";
    v14 = 0x7FFFFFFFi64;
    v15 = 0x7FFFFFFFi64;
    if ( !v8 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
        __debugbreak();
      addrHandleIndex = _RDI->addrHandleIndex;
      __asm { vmovups xmm0, [rsp+78h+var_48] }
    }
    while ( 1 )
    {
      v16 = (unsigned __int8)v13[v10 - "inforesponse"];
      v17 = v15;
      v18 = *(unsigned __int8 *)v13++;
      --v15;
      if ( !v17 )
      {
LABEL_14:
        v32[0].addrHandleIndex = addrHandleIndex;
        __asm { vmovups [rsp+78h+var_48], xmm0 }
        CL_LANInfoResponsePacket(localClientNum, v32, msg, time);
        return 1;
      }
      if ( v16 != v18 )
      {
        v19 = v16 + 32;
        if ( (unsigned int)(v16 - 65) > 0x19 )
          v19 = v16;
        v16 = v19;
        v20 = v18 + 32;
        if ( (unsigned int)(v18 - 65) > 0x19 )
          v20 = v18;
        if ( v16 != v20 )
          break;
      }
      if ( !v16 )
        goto LABEL_14;
    }
    v22 = "getinfo";
    if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    v23 = v10 - "getinfo";
    do
    {
      v24 = (unsigned __int8)v22[v23];
      v25 = v14;
      v26 = *(unsigned __int8 *)v22++;
      --v14;
      if ( !v25 )
        break;
      if ( v24 != v26 )
      {
        v27 = v24 + 32;
        if ( (unsigned int)(v24 - 65) > 0x19 )
          v27 = v24;
        v24 = v27;
        v28 = v26 + 32;
        if ( (unsigned int)(v26 - 65) > 0x19 )
          v28 = v26;
        if ( v24 != v28 )
          return 1;
      }
    }
    while ( v24 );
    __asm { vmovups xmm0, xmmword ptr [rdi] }
    v32[0].addrHandleIndex = _RDI->addrHandleIndex;
    __asm { vmovups [rsp+78h+var_48], xmm0 }
    PartyHost_LANInfoRequestPacket(localClientNum, v32, msg);
    return 1;
  }
  v32[0].addrHandleIndex = _RDI->addrHandleIndex;
  if ( CL_MainMP_ConnectionlessPacket_ConnectHandshake(localClientNum, v32, msg, time, v8) )
    return 1;
  if ( !Party_PartiesAcrossGamemodesFeatureEnabled() )
  {
    __asm { vmovups xmm0, xmmword ptr [rdi] }
    v32[0].addrHandleIndex = _RDI->addrHandleIndex;
    __asm { vmovups [rsp+78h+var_48], xmm0 }
    if ( CL_Main_ConnectionlessPacket_Universal(localClientNum, v32, msg, time, v10) )
      return 1;
  }
  if ( !(unsigned __int8)CL_GetLocalClientFrontEntState(localClientNum) )
  {
    __asm { vmovups xmm0, xmmword ptr [rdi] }
    v32[0].addrHandleIndex = _RDI->addrHandleIndex;
    __asm { vmovups [rsp+78h+var_48], xmm0 }
    if ( CL_MainMP_ConnectionlessPacket_GameServer(localClientNum, v32, msg, time, v10) )
      return 1;
  }
  return 0;
}

/*
==============
CL_MainMP_DlogNetperf
==============
*/
bool CL_MainMP_DlogNetperf(LocalClientNum_t localClientNum, bool frontend)
{
  ClConnectionDataMP *ClientConnectionData; 
  ClNetperfTelemetry *p_netperfTelemetry; 
  int ControllerFromClient; 
  unsigned __int64 UserId; 
  bool v8; 
  bool result; 
  DLogContext context; 
  char buffer[8192]; 

  ClientConnectionData = ClConnectionMP::GetClientConnectionData(localClientNum);
  result = 0;
  if ( !frontend )
  {
    p_netperfTelemetry = &ClientConnectionData->netperfTelemetry;
    if ( ClNetperfTelemetry::IsEnabled(&ClientConnectionData->netperfTelemetry) )
    {
      ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
      UserId = DLog_GetUserId(ControllerFromClient);
      if ( DLog_CreateContext(&context, UserId, buffer, 0x2000) && DLog_IsActive() )
      {
        v8 = DLog_BeginEvent(&context, "dlog_event_client_netperf");
        context.autoEndEvent = 1;
        if ( v8 && ClNetperfTelemetry::Dlog(p_netperfTelemetry, &context) && DLog_RecordContext(&context) )
          return 1;
      }
    }
  }
  return result;
}

/*
==============
CL_MainMP_GameAllocate
==============
*/
void CL_MainMP_GameAllocate(int flags)
{
  bool v2; 
  int integer; 
  int v4; 
  unsigned int v5; 
  bool enabled; 
  GameStateInfo *v7; 
  unsigned __int8 agentMaxCount; 
  const dvar_t *v9; 
  const dvar_t *v10; 
  int v11; 
  const dvar_t *v12; 
  int v13; 
  const dvar_t *v14; 
  int v15; 
  unsigned int v16; 
  int v17; 
  HunkUser *HunkUser; 
  unsigned int v19; 
  int v20; 
  __int64 v21; 
  FXRegisteredDef (*attachmentFXDef)[8]; 
  __int64 v23; 
  FXRegisteredDef (*onAttachFXDef)[8]; 
  unsigned __int64 FreeReserveAmount; 
  unsigned __int64 v26; 
  unsigned __int64 v27; 
  ClConfigStringsMP *ClConfigStringsMP; 
  int *maxAgents; 
  __int64 v30; 
  __int64 v31; 
  int maxClients; 
  int maxLocalClients; 
  int v34; 
  DismembermentConfig config; 

  v2 = (flags & 2) != 0;
  if ( (flags & 2) != 0 )
  {
    integer = 1;
    v4 = 0;
    v5 = 1;
    enabled = 0;
  }
  else
  {
    v7 = GameStateInfo_Get();
    if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 5435, ASSERT_TYPE_ASSERT, "(gInfo)", (const char *)&queryFormat, "gInfo") )
      __debugbreak();
    agentMaxCount = v7->agentMaxCount;
    if ( agentMaxCount > 0x30u )
    {
      LODWORD(maxAgents) = agentMaxCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 5436, ASSERT_TYPE_ASSERT, "( ( gInfo->agentMaxCount <= 48 ) )", "( gInfo->agentMaxCount ) = %i", maxAgents) )
        __debugbreak();
    }
    v4 = v7->agentMaxCount;
    v5 = 0;
    v9 = DVARINT_ui_maxclients;
    if ( !DVARINT_ui_maxclients && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ui_maxclients") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    v10 = DVARBOOL_dev_moreSnapshotEntities;
    integer = v9->current.integer;
    if ( !DVARBOOL_dev_moreSnapshotEntities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "dev_moreSnapshotEntities") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v10);
    enabled = v10->current.enabled;
  }
  if ( LODWORD(cl_maxLocalClients) )
  {
    v11 = s_clientAllocSettings.flags;
    if ( (flags ^ s_clientAllocSettings.flags) == 8 )
      v11 = flags;
    s_clientAllocSettings.flags = v11;
    if ( !s_clientAllocSettings.isAllocated && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 5463, ASSERT_TYPE_ASSERT, "(s_clientAllocSettings.isAllocated)", "%s\n\tExpected the allocation to be done before we set the maxLocalClients", "s_clientAllocSettings.isAllocated") )
      __debugbreak();
    if ( s_clientAllocSettings.maxClients != integer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 5464, ASSERT_TYPE_ASSERT, "( s_clientAllocSettings.maxClients ) == ( useMaxClientCount )", "%s == %s\n\t%i, %i", "s_clientAllocSettings.maxClients", "useMaxClientCount", s_clientAllocSettings.maxClients, integer) )
      __debugbreak();
    if ( s_clientAllocSettings.maxAgents != v4 )
    {
      LODWORD(v31) = v4;
      LODWORD(v30) = s_clientAllocSettings.maxAgents;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 5465, ASSERT_TYPE_ASSERT, "( s_clientAllocSettings.maxAgents ) == ( useAgentCount )", "%s == %s\n\t%i, %i", "s_clientAllocSettings.maxAgents", "useAgentCount", v30, v31) )
        __debugbreak();
    }
    if ( s_clientAllocSettings.flags != flags )
    {
      LODWORD(v31) = flags;
      LODWORD(v30) = s_clientAllocSettings.flags;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 5466, ASSERT_TYPE_ASSERT, "( s_clientAllocSettings.flags ) == ( flags )", "%s == %s\n\t%i, %i", "s_clientAllocSettings.flags", "flags", v30, v31) )
        __debugbreak();
    }
    if ( s_clientAllocSettings.useCameraCount != v5 )
    {
      LODWORD(v31) = v5;
      LODWORD(v30) = s_clientAllocSettings.useCameraCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 5467, ASSERT_TYPE_ASSERT, "( s_clientAllocSettings.useCameraCount ) == ( useCameraCount )", "%s == %s\n\t%i, %i", "s_clientAllocSettings.useCameraCount", "useCameraCount", v30, v31) )
        __debugbreak();
    }
    if ( s_clientAllocSettings.useMoreEntities != enabled )
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_14421C9E0, 515i64);
    if ( !v2 )
    {
      v12 = DVARINT_ui_maxclients;
      if ( !DVARINT_ui_maxclients && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ui_maxclients") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v12);
      v13 = s_clientAllocSettings.maxClients;
      if ( v12->current.integer != s_clientAllocSettings.maxClients )
      {
        v14 = DVARINT_ui_maxclients;
        if ( !DVARINT_ui_maxclients && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ui_maxclients") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v14);
        LODWORD(v31) = v13;
        LODWORD(v30) = v14->current.integer;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 5476, ASSERT_TYPE_ASSERT, "( Dvar_GetInt_Internal_DebugName( DVARINT_ui_maxclients, \"ui_maxclients\" ) ) == ( s_clientAllocSettings.maxClients )", "%s == %s\n\t%i, %i", "Dvar_GetInt( ui_maxclients )", "s_clientAllocSettings.maxClients", v30, v31) )
          __debugbreak();
      }
    }
  }
  else
  {
    if ( s_clientAllocSettings.isAllocated && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 5488, ASSERT_TYPE_ASSERT, "(!s_clientAllocSettings.isAllocated)", "%s\n\tShould not be allocated twice", "!s_clientAllocSettings.isAllocated") )
      __debugbreak();
    if ( SV_Init_IsMemoryAllocated() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 5489, ASSERT_TYPE_ASSERT, "(!SV_Init_IsMemoryAllocated())", "%s\n\tThis assertion is for legacy reasons and could be removed. We use to clear the server memory in GameMemoryFree() below", "!SV_Init_IsMemoryAllocated()") )
      __debugbreak();
    CL_MainMP_GameMemoryFree(!v2);
    s_clientAllocSettings.isAllocated = 1;
    s_clientAllocSettings.maxClients = integer;
    s_clientAllocSettings.maxAgents = v4;
    s_clientAllocSettings.flags = flags;
    s_clientAllocSettings.useCameraCount = v5;
    s_clientAllocSettings.useMoreEntities = enabled;
    CL_MainMP_GetMaxClientsAndAgents(flags, integer, v4, &maxLocalClients, &maxClients, &v34);
    v15 = maxLocalClients;
    if ( maxLocalClients <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 5505, ASSERT_TYPE_ASSERT, "(maxLocalClients > 0)", (const char *)&queryFormat, "maxLocalClients > 0") )
      __debugbreak();
    v16 = maxClients;
    if ( maxClients <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 5506, ASSERT_TYPE_ASSERT, "(maxClients > 0)", (const char *)&queryFormat, "maxClients > 0") )
      __debugbreak();
    v17 = CL_MainMP_DeterminePacketBackupCount(flags);
    maxClients = 157286400 * v15;
    HunkUser = CL_Main_AllocateHunkUser(157286400 * v15);
    ClActiveClientMP::AllocateClients(HunkUser, v15);
    ClConnectionMP::AllocateClientConnections(HunkUser, v15, v17);
    CL_Main_AllocateDObjMemory(HunkUser, flags, v15);
    v19 = 1114112;
    if ( v16 > 0x64 )
      v19 = 3145728;
    CL_Main_AllocateSkelMemory(HunkUser, v19);
    v20 = v34;
    Com_AllocateXAnimNodeMemory(HunkUser, v15, v16, v34);
    XAnimProceduralBonesAllocator_AllocateClientMemoryMP(HunkUser, v15, v16 + v20);
    ClConfigStrings::AllocateMemory<ClConfigStringsMP>(HunkUser);
    FX_AllocateClientMemory(HunkUser, v15);
    FX_MarkAllocateClientMemory(HunkUser, v15);
    v21 = 400i64;
    attachmentFXDef = config.attachmentFXDef;
    v23 = 400i64;
    do
    {
      FXRegisteredDef::FXRegisteredDef((FXRegisteredDef *)attachmentFXDef);
      attachmentFXDef = (FXRegisteredDef (*)[8])((char *)attachmentFXDef + 8);
      --v23;
    }
    while ( v23 );
    onAttachFXDef = config.onAttachFXDef;
    do
    {
      FXRegisteredDef::FXRegisteredDef((FXRegisteredDef *)onAttachFXDef);
      onAttachFXDef = (FXRegisteredDef (*)[8])((char *)onAttachFXDef + 8);
      --v21;
    }
    while ( v21 );
    FX_Dismemberment_LoadConfig("mp/dismemberment_config.csv", "mp/dismemberment_remap_config.csv", &config, v2);
    FX_Dismemberment_AllocateClientMemory(HunkUser, v15, &config);
    CL_PlayerInfosMP_AllocatePlayerInfos(HunkUser, v16);
    FreeReserveAmount = Mem_HunkUser_GetFreeReserveAmount(HunkUser);
    v26 = 100 * FreeReserveAmount / (unsigned int)maxClients;
    v27 = Mem_HunkUser_GetFreeReserveAmount(HunkUser);
    Com_Printf(10, "GameAllocate: Loaded local client memory. Free client hunk memory: %zu kb (%zu %%)\n", v27 >> 10, v26);
    ClConfigStringsMP = ClConfigStringsMP::GetClConfigStringsMP();
    ClConfigStringsMP::ClearStrings(ClConfigStringsMP);
    cls.serverId = 0;
    LODWORD(cl_maxLocalClients) = v15;
    cls.maxClients = v16;
    cls.maxAgents = v20;
    ClStatic::GenerateGameActiveClientInfo(&cls);
    DB_UpdateDebugZone();
  }
}

/*
==============
CL_MainMP_GameIsAboutToResume
==============
*/
_BOOL8 CL_MainMP_GameIsAboutToResume()
{
  return cl_game_is_about_to_resume;
}

/*
==============
CL_MainMP_GameMemoryFree
==============
*/
void CL_MainMP_GameMemoryFree(bool clearLevelLoadData)
{
  scrContext_t *v2; 

  *(_WORD *)&s_clientAllocSettings.isAllocated = 0;
  CG_MainMP_FreeClientMemory();
  CL_Glass_FreeClientMemory();
  ScriptableCl_DestroyMemory();
  ClActiveClientMP::FreeClientSnapshots();
  ScriptableCl_ShutdownCounts();
  if ( !Com_IsAnyLocalServerRunning() )
  {
    v2 = ScriptContext_Server();
    ScriptContext_MemoryFree(v2);
  }
  ClConfigStrings::FreeMemory<ClConfigStringsMP>();
  FX_Dismemberment_FreeClientMemory();
  FX_FreeClientMemory();
  FX_MarkFreeClientMemory();
  if ( clearLevelLoadData )
  {
    R_Cinematic_StopPlayback(0);
    CL_Main_FreeLoadZones();
  }
  XAnimProceduralBonesAllocator_FreeClientMemory();
  Com_FreeXAnimNodeMemory();
  CL_Main_FreeSkelMemory();
  CL_Main_FreeDObjMemory();
  CL_PlayerInfosMP_FreePlayerInfoMemory();
  if ( SLODWORD(cl_maxLocalClients) > 0 )
  {
    ClActiveClientMP::FreeClients();
    ClConnectionMP::FreeClientConnections();
    cl_maxLocalClients = 0.0;
    *(_QWORD *)&cls.maxClients = 0i64;
    ClStatic::ClearGameActiveClientInfo(&cls);
  }
  *(_QWORD *)&s_clientAllocSettings.flags = 0i64;
  *(_QWORD *)&s_clientAllocSettings.maxAgents = 0i64;
  *(_DWORD *)&s_clientAllocSettings.isAllocated = 0;
  CL_Main_FreeHunkUser();
  Com_Printf(14, "Unloaded local client memory\n");
}

/*
==============
CL_MainMP_GamePostMapMemoryAllocate
==============
*/
void CL_MainMP_GamePostMapMemoryAllocate(void)
{
  scrContext_t *v0; 
  HunkUser *HunkUser; 
  int maxClients; 
  HunkUser *v3; 
  int maxAgents; 
  unsigned int v5; 
  int v6; 
  scrContext_t *v7; 
  unsigned __int64 v8; 
  unsigned __int64 FreeReserveAmount; 

  if ( !s_clientAllocSettings.isAllocated && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 5586, ASSERT_TYPE_ASSERT, "(s_clientAllocSettings.isAllocated)", (const char *)&queryFormat, "s_clientAllocSettings.isAllocated") )
    __debugbreak();
  if ( !s_clientAllocSettings.isPostMapAllocated )
  {
    s_clientAllocSettings.isPostMapAllocated = 0;
    CG_MainMP_FreeClientMemory();
    CL_Glass_FreeClientMemory();
    ScriptableCl_DestroyMemory();
    ClActiveClientMP::FreeClientSnapshots();
    ScriptableCl_ShutdownCounts();
    if ( !Com_IsAnyLocalServerRunning() )
    {
      v0 = ScriptContext_Server();
      ScriptContext_MemoryFree(v0);
    }
    HunkUser = CL_Main_GetHunkUser();
    maxClients = cls.maxClients;
    v3 = HunkUser;
    maxAgents = cls.maxAgents;
    v5 = LODWORD(cl_maxLocalClients);
    ScriptableCl_InitCounts(cls.maxClients, cls.maxAgents);
    CL_Streaming_InitLimits();
    CL_Streaming_ReportLimits();
    v6 = CL_MainMP_DeterminePacketBackupCount(s_clientAllocSettings.flags);
    ClActiveClientMP::AllocateClientSnapshots(v3, v5, v6, maxClients, maxAgents, s_clientAllocSettings.useMoreEntities, s_clientAllocSettings.useCameraCount);
    ScriptableCl_InitMemory(v3, v5);
    CG_MainMP_AllocateClientMemory(v3, v5, maxClients, maxAgents);
    if ( !cls.m_activeGameTypeName[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 309, ASSERT_TYPE_ASSERT, "(m_activeGameTypeName[0])", "%s\n\tRequested gametype before it was set", "m_activeGameTypeName[0]") )
      __debugbreak();
    if ( !Com_IsAnyLocalServerRunning() )
    {
      v7 = ScriptContext_Server();
      ScriptContext_MemoryInit(v7, cls.m_activeGameTypeName, cls.maxClients);
      ScriptContext_MemoryAllocate(v7);
    }
    s_clientAllocSettings.isPostMapAllocated = 1;
    v8 = Mem_HunkUser_GetUsedSize(v3) >> 10;
    FreeReserveAmount = Mem_HunkUser_GetFreeReserveAmount(v3);
    Com_Printf(10, "GameAllocatePostMap: Loaded local client memory phase 2. Free client hunk memory: %zu kb (%zu used)\n", FreeReserveAmount >> 10, v8);
  }
}

/*
==============
CL_MainMP_GetMaxClientsAndAgents
==============
*/
void CL_MainMP_GetMaxClientsAndAgents(const int flags, const int useClientCount, const int useAgentCount, int *maxLocalClients, int *maxClients, int *maxAgents)
{
  char v9; 
  int LocalClientActiveCount; 
  const dvar_t *v11; 
  const dvar_t *v12; 
  const dvar_t *v13; 
  int v14; 
  const dvar_t *v15; 
  __int64 v16; 
  __int64 v17; 

  v9 = flags;
  if ( (flags & 2) != 0 )
  {
    if ( useClientCount != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 5315, ASSERT_TYPE_ASSERT, "( useClientCount ) == ( 1 )", "%s == %s\n\t%i, %i", "useClientCount", "FRONTEND_SCENE_MAX_SV_CLIENTS", useClientCount, 1) )
      __debugbreak();
    if ( useAgentCount )
    {
      LODWORD(v16) = useAgentCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 5316, ASSERT_TYPE_ASSERT, "( useAgentCount ) == ( 0 )", "%s == %s\n\t%i, %i", "useAgentCount", "FRONTEND_SCENE_MAX_AGENTS", v16, 0i64) )
        __debugbreak();
    }
    *maxLocalClients = 1;
    *maxClients = 1;
    *maxAgents = 0;
  }
  else
  {
    LocalClientActiveCount = CL_GetLocalClientActiveCount();
    if ( LocalClientActiveCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 5325, ASSERT_TYPE_ASSERT, "(activeClientCount > 0)", (const char *)&queryFormat, "activeClientCount > 0") )
      __debugbreak();
    v11 = DVARBOOL_splitscreen;
    if ( !DVARBOOL_splitscreen && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "splitscreen") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    if ( !v11->current.enabled )
      goto LABEL_35;
    v12 = DVARBOOL_onlinegame;
    if ( !DVARBOOL_onlinegame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "onlinegame") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v12);
    if ( v12->current.enabled )
      goto LABEL_35;
    v13 = DVARBOOL_systemlink;
    if ( !DVARBOOL_systemlink && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "systemlink") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v13);
    if ( v13->current.enabled )
    {
LABEL_35:
      v15 = DVARBOOL_onlinegame;
      if ( !DVARBOOL_onlinegame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "onlinegame") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v15);
      if ( v15->current.enabled && LocalClientActiveCount > 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 5343, ASSERT_TYPE_ASSERT, "( 2 ) >= ( activeClientCount )", "%s >= %s\n\t%i, %i", "MAX_PARTY_CLIENT_COUNT", "activeClientCount", 2, LocalClientActiveCount) )
        __debugbreak();
    }
    else if ( !BG_GetBotsConnectType() )
    {
      if ( useClientCount > 2 )
        Com_PrintWarning(16, "Over allocating memory for clients in splitscreen game: (useClientCount %d > STATIC_MAX_LOCAL_CLIENTS %d) \n We are allocating room for bots but bots have not been set up through the UI, this is wasteful if you don't plan on manually adding bots via the dev menu. \n This happens when you devmap after launching the exe.\n", (unsigned int)useClientCount, 2i64);
      if ( useClientCount != LocalClientActiveCount )
        Com_PrintWarning(16, "Over allocating memory for clients in splitscreen game: (useClientCount %d != activeClientCount %d) \n We are allocating room for bots but bots have not been set up through the UI, this is wasteful if you don't plan on manually adding bots via the dev menu. \n This happens when you devmap after launching the exe.\n", (unsigned int)useClientCount, (unsigned int)LocalClientActiveCount);
    }
    v14 = v9 & 8;
    if ( v14 )
    {
      if ( LocalClientActiveCount != 1 )
      {
        LODWORD(v17) = 1;
        LODWORD(v16) = LocalClientActiveCount;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 5350, ASSERT_TYPE_ASSERT, "( activeClientCount ) == ( 1 )", "%s == %s\n\t%i, %i", "activeClientCount", "1", v16, v17) )
          __debugbreak();
      }
    }
    *maxLocalClients = LocalClientActiveCount;
    if ( v14 )
    {
      *maxClients = 200;
      *maxAgents = 48;
    }
    else
    {
      *maxClients = useClientCount;
      *maxAgents = useAgentCount;
    }
  }
}

/*
==============
CL_MainMP_GetServerList
==============
*/
void CL_MainMP_GetServerList(int source, ClServerInfo **servers, int *count)
{
  if ( !servers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 4876, ASSERT_TYPE_ASSERT, "(servers)", (const char *)&queryFormat, "servers") )
    __debugbreak();
  if ( !count && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 4877, ASSERT_TYPE_ASSERT, "(count)", (const char *)&queryFormat, "count") )
    __debugbreak();
  if ( !source )
  {
    *servers = cls.localServers;
    *count = cls.numlocalservers;
  }
}

/*
==============
CL_MainMP_GetStatsGroupBuffer
==============
*/
__int64 CL_MainMP_GetStatsGroupBuffer(const StatsGroup statsGroup, const int controllerIndex, unsigned __int8 *statsGroupBuffer, const int sizeOfStatsGroupBuffer)
{
  size_t v5; 
  bool HaveStats; 
  const unsigned __int8 *v9; 
  const dvar_t *v10; 
  int StatsGroupDataSize; 
  int StatsGroupOffset; 
  char v14[14000]; 

  v5 = sizeOfStatsGroupBuffer;
  if ( !statsGroupBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 2053, ASSERT_TYPE_ASSERT, "(statsGroupBuffer)", (const char *)&queryFormat, "statsGroupBuffer") )
    __debugbreak();
  HaveStats = LiveStorage_DoWeHaveStats(controllerIndex);
  if ( HaveStats )
  {
    v9 = LiveStorage_GetStatsGroupBuffer(controllerIndex, statsGroup);
    if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 2063, ASSERT_TYPE_ASSERT, "( statsStart )", (const char *)&queryFormat, "statsStart") )
      __debugbreak();
  }
  else
  {
    v10 = DVARBOOL_onlinegame;
    if ( !DVARBOOL_onlinegame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "onlinegame") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v10);
    if ( v10->current.enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 2067, ASSERT_TYPE_ASSERT, "(!Dvar_GetBool_Internal_DebugName( DVARBOOL_onlinegame, \"onlinegame\" ))", (const char *)&queryFormat, "!Dvar_GetBool( onlinegame )") )
      __debugbreak();
    memset_0(v14, 0, sizeof(v14));
    v9 = (const unsigned __int8 *)v14;
  }
  StatsGroupDataSize = Com_PlayerData_GetStatsGroupDataSize(statsGroup);
  StatsGroupOffset = Com_PlayerData_GetStatsGroupOffset(statsGroup);
  if ( StatsGroupDataSize > (int)v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 2077, ASSERT_TYPE_ASSERT, "(sizeOfStatsBlob <= sizeOfStatsGroupBuffer)", (const char *)&queryFormat, "sizeOfStatsBlob <= sizeOfStatsGroupBuffer") )
    __debugbreak();
  if ( HaveStats )
    LiveStorage_LocallyUnObfuscateStatsGroupIntoBuffer(statsGroupBuffer, controllerIndex, StatsGroupOffset, v9, StatsGroupDataSize);
  else
    memcpy_0(statsGroupBuffer, v9, v5);
  return (unsigned int)StatsGroupDataSize;
}

/*
==============
CL_MainMP_GetUserInfoString
==============
*/
char *CL_MainMP_GetUserInfoString(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  unsigned int v2; 
  int ControllerFromClient; 
  const char *UsernameForLocalClient; 
  unsigned int LocaClientGamertagSuffix; 
  unsigned __int8 ClanTagType; 
  const char *ClanTag; 
  const char *XuidForLocalClient; 
  bool IsGuest; 
  unsigned int v10; 
  unsigned int LocalNatType; 
  unsigned int RankMP; 
  unsigned int PrestigeMP; 
  unsigned __int64 PlatformUserId; 
  const char *v15; 
  const dvar_t *v16; 
  bool v17; 
  int v18; 
  unsigned __int64 m_id; 
  const PartyData *PartyData; 
  const char *v21; 
  const char *v22; 
  XUID *Xuid; 
  XUID *v24; 
  const dvar_t *v25; 
  XUID *v26; 
  unsigned int v27; 
  const char *v28; 
  unsigned int squad; 
  const PartyData *v30; 
  const XUID *v31; 
  int MemberByXUID_AllowNotPresent; 
  const char *v33; 
  unsigned __int64 UserId; 
  unsigned __int64 SessionId; 
  const char *v36; 
  char ClientPlatform; 
  const char *v38; 
  char ClientSubPlatform; 
  const char *v40; 
  const char *v41; 
  int v43; 
  int v44; 
  char v45[8]; 
  XUID result; 
  int userData; 
  char value[4]; 
  char v49[8]; 
  char v50[16]; 
  char v51[8]; 
  char dest[32]; 

  v1 = localClientNum;
  userData = 512;
  v2 = 63;
  s_userInfoString[0] = 0;
  Dvar_ForEach(CL_MainMP_InfoStringSingleDvar, &userData);
  ControllerFromClient = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v1);
  if ( (unsigned __int8)CL_GetLocalClientFrontEntState((const LocalClientNum_t)v1) )
  {
    Info_SetValueForKey(s_userInfoString, (const char *)&stru_143C9A1A4, "frontEntclient");
  }
  else
  {
    UsernameForLocalClient = CL_GetUsernameForLocalClient(ControllerFromClient);
    Info_SetValueForKey(s_userInfoString, (const char *)&stru_143C9A1A4, UsernameForLocalClient);
    LocaClientGamertagSuffix = Live_GetLocaClientGamertagSuffix(ControllerFromClient);
    Com_sprintf(dest, 0x20ui64, "%i", LocaClientGamertagSuffix);
    Info_SetValueForKey(s_userInfoString, "nameSuffix", dest);
    ClanTagType = CL_PlayerData_GetClanTagType(ControllerFromClient);
    Com_sprintf(value, 4ui64, "%d", ClanTagType);
    Info_SetValueForKey(s_userInfoString, "playerTagType", value);
    ClanTag = CL_PlayerData_GetClanTag(ControllerFromClient);
    Info_SetValueForKey(s_userInfoString, "clanAbbrev", ClanTag);
    XuidForLocalClient = CL_MainMP_GetXuidForLocalClient((LocalClientNum_t)v1, ControllerFromClient);
    Info_SetValueForKey(s_userInfoString, "xuid", XuidForLocalClient);
    IsGuest = Live_UserIsGuest(ControllerFromClient);
    Com_sprintf(v50, 0xAui64, "%i", IsGuest);
    Info_SetValueForKey(s_userInfoString, "guest", v50);
    Com_sprintf(v50, 0xAui64, "%i", 0i64);
    Info_SetValueForKey(s_userInfoString, "headless", v50);
    v10 = 1;
    if ( Live_IsInSystemlinkLobby() )
      LocalNatType = 1;
    else
      LocalNatType = Live_GetLocalNatType();
    Com_sprintf(v45, 2ui64, "%i", LocalNatType);
    Info_SetValueForKey(s_userInfoString, "natType", v45);
    RankMP = CL_PlayerData_GetRankMP(ControllerFromClient);
    Com_sprintf(v50, 0xAui64, "%i", RankMP);
    PrestigeMP = CL_PlayerData_GetPrestigeMP(ControllerFromClient);
    Com_sprintf(v49, 4ui64, "%i", PrestigeMP);
    Info_SetValueForKey(s_userInfoString, "rank", v50);
    Info_SetValueForKey(s_userInfoString, "prestige", v49);
    if ( Live_IsUserSignedInToLive(ControllerFromClient) )
    {
      PlatformUserId = Live_GetPlatformUserId(ControllerFromClient);
      v15 = j_va("%llu", PlatformUserId);
      Info_SetValueForKey(s_userInfoString, "platUID", v15);
    }
    if ( (unsigned int)v1 >= 2 )
    {
      v44 = 2;
      v43 = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 165, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v43, v44) )
        __debugbreak();
    }
    if ( clientUIActives[v1].frontEndSceneState[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 1679, ASSERT_TYPE_ASSERT, "(CL_GetLocalClientFrontEntState( localClientNum ) == ClFrontEndSceneState::INACTIVE)", (const char *)&queryFormat, "CL_GetLocalClientFrontEntState( localClientNum ) == ClFrontEndSceneState::INACTIVE") )
      __debugbreak();
    v16 = DVARBOOL_com_devCodcasterEnabled;
    if ( !DVARBOOL_com_devCodcasterEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_devCodcasterEnabled") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v16);
    if ( v16->current.enabled )
    {
      v17 = 1;
    }
    else
    {
      v18 = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v1);
      Live_GetXuid(&result, v18);
      v17 = Live_IsConnectedToDemonware(v18) && GameBattles_IsGameBattleActive() && (m_id = result.m_id, PartyData = Lobby_GetPartyData(), Party_GetAssignedTeam(PartyData, (const XUID)m_id) == 201) || Party_IsPlayerMLGSpectator(result) != 0;
    }
    v21 = "0";
    v22 = "1";
    if ( v17 )
      v21 = "1";
    Info_SetValueForKey(s_userInfoString, "mlg_spectator", v21);
    Xuid = Live_GetXuid(&result, ControllerFromClient);
    if ( Party_IsPlayerMLGFollower((XUID)Xuid->m_id) )
    {
      Info_SetValueForKey(s_userInfoString, "mlg_follower", "1");
      v24 = Live_GetXuid(&result, ControllerFromClient);
      v2 = Party_IndexPlayerMLGFollower((XUID)v24->m_id);
    }
    else
    {
      Info_SetValueForKey(s_userInfoString, "mlg_follower", "0");
    }
    Com_sprintf(v51, 6ui64, "%i", v2);
    Info_SetValueForKey(s_userInfoString, "mlg_follower_index", v51);
    v25 = DVARBOOL_onlinegame;
    if ( !DVARBOOL_onlinegame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "onlinegame") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v25);
    if ( v25->current.enabled && !Live_UserIsGuest(ControllerFromClient) )
    {
      v26 = Live_GetXuid(&result, ControllerFromClient);
      if ( !Party_IsPlayerOurPrivatePartyHost((XUID)v26->m_id) )
        v22 = "0";
      Info_SetValueForKey(s_userInfoString, "pph", v22);
      v27 = Party_CountUIVisibleMembers(&g_partyData);
      v28 = j_va("%i", v27);
      Info_SetValueForKey(s_userInfoString, "pps", v28);
    }
    squad = -1;
    if ( Live_IsConnectedToDemonware(ControllerFromClient) )
    {
      v30 = Lobby_GetPartyData();
      v31 = Live_GetXuid(&result, ControllerFromClient);
      MemberByXUID_AllowNotPresent = Party_FindMemberByXUID_AllowNotPresent(v30, (const XUID)v31->m_id);
      if ( MemberByXUID_AllowNotPresent >= 0 )
        squad = v30->partyMembers[MemberByXUID_AllowNotPresent].squad;
    }
    v33 = j_va("%i", squad);
    Info_SetValueForKey(s_userInfoString, "lSquad", v33);
    UserId = DLog_GetUserId(ControllerFromClient);
    SessionId = DLog_GetSessionId(UserId);
    v36 = j_va("%llx", SessionId);
    Info_SetValueForKey(s_userInfoString, "userSessionId", v36);
    ClientPlatform = GetClientPlatform();
    v38 = j_va("%i", (unsigned int)ClientPlatform);
    Info_SetValueForKey(s_userInfoString, "platform", v38);
    ClientSubPlatform = GetClientSubPlatform();
    v40 = j_va("%i", (unsigned int)ClientSubPlatform);
    Info_SetValueForKey(s_userInfoString, "subplatform", v40);
    if ( !master_dismemberment_setting || !master_dismemberment_setting->current.enabled )
      v10 = 0;
    v41 = j_va("%i", v10);
    Info_SetValueForKey(s_userInfoString, "gore", v41);
  }
  return s_userInfoString;
}

/*
==============
CL_MainMP_GetXuidForLocalClient
==============
*/
const char *CL_MainMP_GetXuidForLocalClient(LocalClientNum_t localClientNum, int controllerIndex)
{
  __int64 v2; 
  int v6; 

  v2 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v6 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 165, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v6) )
      __debugbreak();
  }
  if ( clientUIActives[v2].frontEndSceneState[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 1671, ASSERT_TYPE_ASSERT, "(CL_GetLocalClientFrontEntState( localClientNum ) == ClFrontEndSceneState::INACTIVE)", (const char *)&queryFormat, "CL_GetLocalClientFrontEntState( localClientNum ) == ClFrontEndSceneState::INACTIVE") )
    __debugbreak();
  return Live_GetLocalClientXuidString(controllerIndex);
}

/*
==============
CL_MainMP_HandleConnectResponse
==============
*/
bool CL_MainMP_HandleConnectResponse(const LocalClientNum_t localClientNum, const netadr_t *from, msg_t *msg, int time)
{
  __int64 v4; 
  connstate_t connectionState; 
  int addrHandleIndex; 
  const char *v10; 
  unsigned __int64 v11; 
  const char *v13; 
  ClConnectionDataMP *ClientConnectionData; 
  bool v15; 
  bool ShouldRequestMatchRules; 
  int v17; 
  bool result; 
  int v20; 
  const char *v21; 
  NetchanTelemetry *serverTelemetry; 
  netadr_t v23; 
  netadr_t v24; 
  netadr_t v25; 

  v4 = localClientNum;
  _RSI = from;
  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 2999, ASSERT_TYPE_ASSERT, "(msg)", (const char *)&queryFormat, "msg") )
    __debugbreak();
  if ( _RSI->localNetID != NS_MAXCLIENTS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 3001, ASSERT_TYPE_ASSERT, "(from.localNetID == NS_SERVER)", (const char *)&queryFormat, "from.localNetID == NS_SERVER") )
    __debugbreak();
  if ( (unsigned int)v4 >= 2 )
  {
    LODWORD(serverTelemetry) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", serverTelemetry, 2) )
      __debugbreak();
  }
  connectionState = clientUIActives[v4].connectionState;
  if ( connectionState != CA_CHALLENGING )
  {
    __asm { vmovups xmm0, xmmword ptr [rsi] }
    addrHandleIndex = _RSI->addrHandleIndex;
    __asm { vmovups [rsp+0B8h+var_78], xmm0 }
    v23.addrHandleIndex = addrHandleIndex;
    v10 = NET_AdrToString(&v23);
    Com_Printf(14, "CL_MainMP_HandleConnectResponse: Unexpected connect response packet while not connecting or duplicate (%i vs %i) from %s. Ignored.\n", (unsigned int)connectionState, 2i64, v10);
    return 0;
  }
  v11 = CL_MainMP_ParseStatsRequest(msg);
  if ( msg->overflowed || msg->readcount != msg->cursize + msg->splitSize )
  {
    __asm { vmovups xmm0, xmmword ptr [rsi] }
    v20 = _RSI->addrHandleIndex;
    __asm { vmovups [rsp+0B8h+var_38], xmm0 }
    v25.addrHandleIndex = v20;
    v21 = NET_AdrToString(&v25);
    Com_Printf(14, "CL_MainMP_HandleConnectResponse: Connect response packet has invalid data from %s. Ignored.\n", v21);
    return 0;
  }
  __asm { vmovups xmm0, xmmword ptr [rsi] }
  v24.addrHandleIndex = _RSI->addrHandleIndex;
  __asm { vmovups [rsp+0B8h+var_58], xmm0 }
  v13 = NET_AdrToString(&v24);
  Com_Printf(14, "CL_MainMP_HandleConnectResponse: Received connect response with statsPacketsNeeded = '%zu' from '%s'\n", v11, v13);
  ClientConnectionData = ClConnectionMP::GetClientConnectionData((const LocalClientNum_t)v4);
  if ( !ClientConnectionData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 3023, ASSERT_TYPE_ASSERT, "(clcData)", (const char *)&queryFormat, "clcData") )
    __debugbreak();
  v15 = (unsigned __int8)CL_GetLocalClientFrontEntState((const LocalClientNum_t)v4) == INACTIVE;
  Netchan_Setup((netsrc_t)v4, &ClientConnectionData->netchan, &ClientConnectionData->serverConnection, ClientConnectionData->netchanBuffer, 0x40000, NULL);
  if ( !ClientConnectionData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 2868, ASSERT_TYPE_ASSERT, "(clcData)", (const char *)&queryFormat, "clcData") )
    __debugbreak();
  ClientConnectionData->statPacketsToSend = v11;
  if ( v11 )
  {
    *(_QWORD *)ClientConnectionData->statGroupSendTime = 0i64;
    *(_QWORD *)&ClientConnectionData->statGroupSendTime[2] = 0i64;
    *(_QWORD *)&ClientConnectionData->statGroupSendTime[4] = 0i64;
  }
  CL_StreamSync_ClientSetup((const LocalClientNum_t)v4);
  ShouldRequestMatchRules = CL_MainMP_ShouldRequestMatchRules((const LocalClientNum_t)v4, ClientConnectionData);
  v17 = -1;
  if ( ShouldRequestMatchRules )
    v17 = 0;
  ClientConnectionData->currentGamestatePacket = v17;
  CL_MainMP_ConnectTransitionNextState((const LocalClientNum_t)v4, ClientConnectionData);
  if ( v15 && !SV_IsDemoPlayingNext() )
    LiveStorage_BeginGame((const LocalClientNum_t)v4);
  ClientConnectionData->lastPacketTime = cls.realtime;
  result = 1;
  ClientConnectionData->connectLastSendTime = -99999;
  return result;
}

/*
==============
CL_MainMP_HandleDisconnectError_Dev
==============
*/
char CL_MainMP_HandleDisconnectError_Dev(const LocalClientNum_t localClientNum, const char *const message)
{
  __int64 v3; 
  unsigned int v4; 
  ClActiveClientMP *ClientMP; 
  ClConnectionMP *ClientConnectionMP; 
  int p_cmdNumber; 
  const ClActiveClient *v8; 
  int CmdNumber; 
  int v10; 
  __int64 v11; 
  __int64 v14; 
  unsigned int v23; 
  unsigned __int8 *v24; 
  __int64 v25; 
  unsigned int v26; 
  unsigned int v27; 
  unsigned int v28; 
  unsigned int v29; 
  unsigned int v30; 
  unsigned __int8 *v31; 
  unsigned int v32; 
  unsigned int v33; 
  unsigned int v34; 
  unsigned int v35; 
  unsigned int v36; 
  unsigned int v37; 
  unsigned int v38; 
  unsigned int v39; 
  unsigned int v40; 
  unsigned int v41; 
  unsigned int v42; 
  unsigned int v43; 
  unsigned int v44; 
  unsigned int v45; 
  unsigned int v46; 
  unsigned int v47; 
  unsigned int v48; 
  unsigned int v49; 
  unsigned int v50; 
  unsigned int v51; 
  unsigned int v52; 
  unsigned int v53; 
  unsigned int v54; 
  unsigned int v55; 
  unsigned int v56; 
  unsigned int v57; 
  unsigned int v58; 
  unsigned int v59; 
  unsigned int v60; 
  char *fmt; 
  ClOutPacketMP outPacket; 
  __int64 v64; 
  CmdPredict outCmdPredict; 
  usercmd_s cmd; 

  v64 = -2i64;
  v3 = localClientNum;
  if ( I_strnicmp("checksumfailed", message, 0xEui64) )
    return 0;
  v4 = atoi(message + 14);
  ClientMP = ClActiveClientMP::GetClientMP((const LocalClientNum_t)v3);
  ClientConnectionMP = ClConnectionMP::GetClientConnectionMP((const LocalClientNum_t)v3);
  if ( !ClConnectionMP::GetPacketBackup(ClientConnectionMP, v4, &outPacket) )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144216570, 511i64);
  p_cmdNumber = outPacket.p_cmdNumber;
  *(_QWORD *)&outPacket.p_packetSeq = 0i64;
  if ( (unsigned int)v3 >= LODWORD(cl_maxLocalClients) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_active_client.h", 322, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( (cl_maxLocalClients) )", "localClientNum doesn't index MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v3, cl_maxLocalClients) )
    __debugbreak();
  if ( !(_BYTE)ClActiveClient::ms_activeClientType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_active_client.h", 323, ASSERT_TYPE_ASSERT, "(ms_activeClientType != GameModeType::NONE)", (const char *)&queryFormat, "ms_activeClientType != GameModeType::NONE") )
    __debugbreak();
  if ( !ClActiveClient::ms_activeClients[v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_active_client.h", 324, ASSERT_TYPE_ASSERT, "(ms_activeClients[localClientNum])", (const char *)&queryFormat, "ms_activeClients[localClientNum]") )
    __debugbreak();
  v8 = ClActiveClient::ms_activeClients[v3];
  CmdNumber = ClActiveClient_GetCmdNumber(v8);
  v10 = CmdNumber;
  outPacket.p_packetSeq = CmdNumber;
  if ( p_cmdNumber > CmdNumber )
  {
    LODWORD(fmt) = CmdNumber;
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143CEE128, 754i64, (unsigned int)p_cmdNumber, fmt);
  }
  v11 = 2i64;
  if ( p_cmdNumber > v10 - 128 && p_cmdNumber > 0 )
  {
    _RBX = &v8->cmds[p_cmdNumber & 0x7F];
    memset(&outPacket, 0, 4ui64);
    if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_active_client.h", 385, ASSERT_TYPE_ASSERT, "(requestedCmd)", (const char *)&queryFormat, "requestedCmd") )
      __debugbreak();
    _RAX = &cmd;
    v14 = 2i64;
    do
    {
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]
        vmovups xmmword ptr [rax], xmm0
        vmovups xmm1, xmmword ptr [rbx+10h]
        vmovups xmmword ptr [rax+10h], xmm1
        vmovups xmm0, xmmword ptr [rbx+20h]
        vmovups xmmword ptr [rax+20h], xmm0
        vmovups xmm1, xmmword ptr [rbx+30h]
        vmovups xmmword ptr [rax+30h], xmm1
        vmovups xmm0, xmmword ptr [rbx+40h]
        vmovups xmmword ptr [rax+40h], xmm0
        vmovups xmm1, xmmword ptr [rbx+50h]
        vmovups xmmword ptr [rax+50h], xmm1
        vmovups xmm0, xmmword ptr [rbx+60h]
        vmovups xmmword ptr [rax+60h], xmm0
      }
      _RAX = (usercmd_s *)((char *)_RAX + 128);
      __asm
      {
        vmovups xmm1, xmmword ptr [rbx+70h]
        vmovups xmmword ptr [rax-10h], xmm1
      }
      _RBX = (usercmd_s *)((char *)_RBX + 128);
      --v14;
    }
    while ( v14 );
    _RAX->buttons = _RBX->buttons;
  }
  else
  {
    memset(&outPacket, 0, 4ui64);
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144216630, 512i64);
  }
  if ( !ClActiveClientMP::GetPredictedData(ClientMP, p_cmdNumber, &outCmdPredict) )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1442166F0, 513i64);
  v23 = -1;
  v24 = (unsigned __int8 *)&cmd.buttons + 2;
  v25 = 44i64;
  do
  {
    v26 = (v23 >> 8) ^ g_crc32Table[*(v24 - 2) ^ (unsigned __int64)(unsigned __int8)v23];
    v27 = (v26 >> 8) ^ g_crc32Table[*(v24 - 1) ^ (unsigned __int64)(unsigned __int8)v26];
    v28 = (v27 >> 8) ^ g_crc32Table[*v24 ^ (unsigned __int64)(unsigned __int8)v27];
    v29 = (v28 >> 8) ^ g_crc32Table[v24[1] ^ (unsigned __int64)(unsigned __int8)v28];
    v30 = (v29 >> 8) ^ g_crc32Table[v24[2] ^ (unsigned __int64)(unsigned __int8)v29];
    v23 = (v30 >> 8) ^ g_crc32Table[v24[3] ^ (unsigned __int64)(unsigned __int8)v30];
    v24 += 6;
    --v25;
  }
  while ( v25 );
  v31 = (unsigned __int8 *)&outCmdPredict.origin.x + 2;
  do
  {
    v32 = (v23 >> 8) ^ g_crc32Table[(unsigned __int8)v23 ^ (unsigned __int64)*(v31 - 2)];
    v33 = (v32 >> 8) ^ g_crc32Table[(unsigned __int8)v32 ^ (unsigned __int64)*(v31 - 1)];
    v34 = (v33 >> 8) ^ g_crc32Table[*v31 ^ (unsigned __int64)(unsigned __int8)v33];
    v35 = (v34 >> 8) ^ g_crc32Table[(unsigned __int8)v34 ^ (unsigned __int64)v31[1]];
    v36 = (v35 >> 8) ^ g_crc32Table[(unsigned __int8)v35 ^ (unsigned __int64)v31[2]];
    v37 = (v36 >> 8) ^ g_crc32Table[(unsigned __int8)v36 ^ (unsigned __int64)v31[3]];
    v38 = (v37 >> 8) ^ g_crc32Table[(unsigned __int8)v37 ^ (unsigned __int64)v31[4]];
    v39 = (v38 >> 8) ^ g_crc32Table[(unsigned __int8)v38 ^ (unsigned __int64)v31[5]];
    v40 = (v39 >> 8) ^ g_crc32Table[(unsigned __int8)v39 ^ (unsigned __int64)v31[6]];
    v41 = (v40 >> 8) ^ g_crc32Table[(unsigned __int8)v40 ^ (unsigned __int64)v31[7]];
    v42 = (v41 >> 8) ^ g_crc32Table[(unsigned __int8)v41 ^ (unsigned __int64)v31[8]];
    v43 = (v42 >> 8) ^ g_crc32Table[(unsigned __int8)v42 ^ (unsigned __int64)v31[9]];
    v44 = (v43 >> 8) ^ g_crc32Table[(unsigned __int8)v43 ^ (unsigned __int64)v31[10]];
    v45 = (v44 >> 8) ^ g_crc32Table[(unsigned __int8)v44 ^ (unsigned __int64)v31[11]];
    v46 = (v45 >> 8) ^ g_crc32Table[(unsigned __int8)v45 ^ (unsigned __int64)v31[12]];
    v47 = (v46 >> 8) ^ g_crc32Table[(unsigned __int8)v46 ^ (unsigned __int64)v31[13]];
    v48 = (v47 >> 8) ^ g_crc32Table[(unsigned __int8)v47 ^ (unsigned __int64)v31[14]];
    v49 = (v48 >> 8) ^ g_crc32Table[(unsigned __int8)v48 ^ (unsigned __int64)v31[15]];
    v50 = (v49 >> 8) ^ g_crc32Table[(unsigned __int8)v49 ^ (unsigned __int64)v31[16]];
    v51 = (v50 >> 8) ^ g_crc32Table[(unsigned __int8)v50 ^ (unsigned __int64)v31[17]];
    v52 = (v51 >> 8) ^ g_crc32Table[(unsigned __int8)v51 ^ (unsigned __int64)v31[18]];
    v53 = (v52 >> 8) ^ g_crc32Table[(unsigned __int8)v52 ^ (unsigned __int64)v31[19]];
    v54 = (v53 >> 8) ^ g_crc32Table[(unsigned __int8)v53 ^ (unsigned __int64)v31[20]];
    v55 = (v54 >> 8) ^ g_crc32Table[(unsigned __int8)v54 ^ (unsigned __int64)v31[21]];
    v56 = (v55 >> 8) ^ g_crc32Table[(unsigned __int8)v55 ^ (unsigned __int64)v31[22]];
    v57 = (v56 >> 8) ^ g_crc32Table[(unsigned __int8)v56 ^ (unsigned __int64)v31[23]];
    v58 = (v57 >> 8) ^ g_crc32Table[(unsigned __int8)v57 ^ (unsigned __int64)v31[24]];
    v59 = (v58 >> 8) ^ g_crc32Table[(unsigned __int8)v58 ^ (unsigned __int64)v31[25]];
    v60 = (v59 >> 8) ^ g_crc32Table[(unsigned __int8)v59 ^ (unsigned __int64)v31[26]];
    v23 = (v60 >> 8) ^ g_crc32Table[(unsigned __int8)v60 ^ (unsigned __int64)v31[27]];
    v31 += 30;
    --v11;
  }
  while ( v11 );
  Com_PrintError(15, "CL_DisconnectError: server failed reading baseline command for sequence %d with checksum %d\n", v4, ~v23);
  MSG_UserCmd_PrintCommandFields(&cmd);
  MSG_UserCmd_PrintPredictedFields(&outCmdPredict);
  Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144216820, 514i64);
  return 1;
}

/*
==============
CL_MainMP_HandleDisconnectError_Party
==============
*/
char CL_MainMP_HandleDisconnectError_Party(const LocalClientNum_t localClientNum, const char *const message)
{
  __int64 v4; 
  __int64 v5; 
  const char *v6; 
  int v7; 
  __int64 v8; 
  __int64 v9; 
  int v10; 
  int v11; 
  __int64 v13; 
  const char *v14; 
  int v15; 
  __int64 v16; 
  int v17; 
  int v18; 
  int v19; 
  __int64 v20; 
  const char *v21; 
  int v22; 
  __int64 v23; 
  int v24; 
  int v25; 
  int v26; 
  __int64 v27; 
  const char *v28; 
  int v29; 
  __int64 v30; 
  int v31; 
  int v32; 
  int v33; 
  __int64 v34; 
  const char *v35; 
  int v36; 
  __int64 v37; 
  int v38; 
  int v39; 
  int v40; 
  const char *v41; 
  int v42; 
  __int64 v43; 
  __int64 v44; 
  int v45; 
  int v46; 
  int ControllerFromClient; 
  PartyData *PartyData; 
  const char *v49; 
  const char *v50; 
  const char *v51; 
  PartyActiveClient mainActiveClient; 

  if ( !message && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 2546, ASSERT_TYPE_ASSERT, "(message)", (const char *)&queryFormat, "message") )
    __debugbreak();
  v4 = 0x7FFFFFFFi64;
  v5 = 0x7FFFFFFFi64;
  v6 = message;
  if ( !message && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
    __debugbreak();
  while ( 1 )
  {
    v7 = (unsigned __int8)v6["EXE/MATCHENDED" - message];
    v8 = v5;
    v9 = *(unsigned __int8 *)v6++;
    --v5;
    if ( !v8 )
    {
LABEL_15:
      Com_Error_impl(ERR_DISCONNECT, (const ObfuscateErrorText)&stru_144009380, v9);
      return 1;
    }
    if ( v7 != (_DWORD)v9 )
    {
      v10 = v7 + 32;
      if ( (unsigned int)(v7 - 65) > 0x19 )
        v10 = v7;
      v7 = v10;
      v11 = v9 + 32;
      if ( (unsigned int)(v9 - 65) > 0x19 )
        v11 = v9;
      if ( v7 != v11 )
        break;
    }
    if ( !v7 )
      goto LABEL_15;
  }
  v13 = 0x7FFFFFFFi64;
  v14 = message;
  if ( !message && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
    __debugbreak();
  do
  {
    v15 = (unsigned __int8)v14["hostquit" - message];
    v16 = v13;
    v17 = *(unsigned __int8 *)v14++;
    --v13;
    if ( !v16 )
      break;
    if ( v15 != v17 )
    {
      v18 = v15 + 32;
      if ( (unsigned int)(v15 - 65) > 0x19 )
        v18 = v15;
      v15 = v18;
      v19 = v17 + 32;
      if ( (unsigned int)(v17 - 65) > 0x19 )
        v19 = v17;
      if ( v15 != v19 )
      {
        v20 = 0x7FFFFFFFi64;
        v21 = message;
        if ( !message && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
          __debugbreak();
        while ( 1 )
        {
          v22 = (unsigned __int8)v21["roundsdone" - message];
          v23 = v20;
          v24 = *(unsigned __int8 *)v21++;
          --v20;
          if ( !v23 )
            return 1;
          if ( v22 != v24 )
          {
            v25 = v22 + 32;
            if ( (unsigned int)(v22 - 65) > 0x19 )
              v25 = v22;
            v22 = v25;
            v26 = v24 + 32;
            if ( (unsigned int)(v24 - 65) > 0x19 )
              v26 = v24;
            if ( v22 != v26 )
            {
              v27 = 0x7FFFFFFFi64;
              v28 = message;
              if ( !message && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
                __debugbreak();
              do
              {
                v29 = (unsigned __int8)v28["EXE/MIGRATIONABORTED" - message];
                v30 = v27;
                v31 = *(unsigned __int8 *)v28++;
                --v27;
                if ( !v30 )
                  break;
                if ( v29 != v31 )
                {
                  v32 = v29 + 32;
                  if ( (unsigned int)(v29 - 65) > 0x19 )
                    v32 = v29;
                  v29 = v32;
                  v33 = v31 + 32;
                  if ( (unsigned int)(v31 - 65) > 0x19 )
                    v33 = v31;
                  if ( v29 != v33 )
                  {
                    v34 = 0x7FFFFFFFi64;
                    v35 = message;
                    if ( !message && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
                      __debugbreak();
                    while ( 1 )
                    {
                      v36 = (unsigned __int8)v35["EXE/MIGRATION_IN_PROGRESS" - message];
                      v37 = v34;
                      v38 = *(unsigned __int8 *)v35++;
                      --v34;
                      if ( !v37 )
                        goto LABEL_52;
                      if ( v36 != v38 )
                      {
                        v39 = v36 + 32;
                        if ( (unsigned int)(v36 - 65) > 0x19 )
                          v39 = v36;
                        v36 = v39;
                        v40 = v38 + 32;
                        if ( (unsigned int)(v38 - 65) > 0x19 )
                          v40 = v38;
                        if ( v36 != v40 )
                        {
                          v41 = message;
                          if ( !message && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
                            __debugbreak();
                          while ( 1 )
                          {
                            v42 = (unsigned __int8)v41["EXE/MIGRATIONABORTED_BACKOUT" - message];
                            v43 = v4;
                            v44 = *(unsigned __int8 *)v41++;
                            --v4;
                            if ( !v43 )
                            {
LABEL_76:
                              if ( g_partyData.inParty && Party_IsGameHostInPrivateParty() )
                              {
                                ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
                                mainActiveClient = Party_GetMainActiveClient(&g_partyData, ControllerFromClient);
                                Party_Backout(&mainActiveClient);
                              }
                              else
                              {
                                Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)"EXE/MIGRATIONABORTED", v44);
                              }
                              return 1;
                            }
                            if ( v42 != (_DWORD)v44 )
                            {
                              v45 = v42 + 32;
                              if ( (unsigned int)(v42 - 65) > 0x19 )
                                v45 = v42;
                              v42 = v45;
                              v46 = v44 + 32;
                              if ( (unsigned int)(v44 - 65) > 0x19 )
                                v46 = v44;
                              if ( v42 != v46 )
                                break;
                            }
                            if ( !v42 )
                              goto LABEL_76;
                          }
                          if ( I_strnicmp("EXE/PLAYERKICKED", message, 0x10ui64) )
                            return 0;
                          PartyData = Lobby_GetPartyData();
                          Party_StopParty(PartyData);
                          Com_Printf(14, "CL_MainMP_DisconnectError - Stopping private party and lobby since we got kicked from the game.\n");
                          Party_StopParty(&g_partyData);
                          if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_onlinegame, "onlinegame") )
                          {
                            Com_Printf(25, "CL_MainMP_DisconnectError - Queuing xstartprivateparty\n");
                            Cbuf_AddText(LOCAL_CLIENT_0, "xstartprivateparty\n");
                          }
                          v49 = SEH_SafeTranslateString(message);
                          v50 = SEH_SafeTranslateString("EXE/SERVERDISCONNECTREASON");
                          v51 = UI_ReplaceConversionString(v50, v49);
                          Com_Error_impl(ERR_SERVERDISCONNECT, (const ObfuscateErrorText)&queryFormat, v51);
                          return 1;
                        }
                      }
                      if ( !v36 )
                        goto LABEL_52;
                    }
                  }
                }
              }
              while ( v29 );
LABEL_52:
              Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&queryFormat, message);
              return 1;
            }
          }
          if ( !v22 )
            return 1;
        }
      }
    }
  }
  while ( v15 );
  return 1;
}

/*
==============
CL_MainMP_HandleMatchRulesResponse
==============
*/
bool CL_MainMP_HandleMatchRulesResponse(const LocalClientNum_t localClientNum, const netadr_t *from, msg_t *msg, __int64 time)
{
  __int64 v4; 
  __int64 v7; 
  __int64 connectionState; 
  bool result; 
  ClConnectionDataMP *ClientConnectionData; 
  __int64 v11; 
  __int64 v12; 

  v4 = localClientNum;
  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 3104, ASSERT_TYPE_ASSERT, "(msg)", (const char *)&queryFormat, "msg") )
    __debugbreak();
  if ( from->localNetID != NS_MAXCLIENTS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 3106, ASSERT_TYPE_ASSERT, "(from.localNetID == NS_SERVER)", (const char *)&queryFormat, "from.localNetID == NS_SERVER") )
    __debugbreak();
  if ( (unsigned int)v4 >= 2 )
  {
    LODWORD(v11) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 165, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v11, 2) )
      __debugbreak();
  }
  v7 = v4;
  if ( clientUIActives[v4].frontEndSceneState[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 3109, ASSERT_TYPE_ASSERT, "(CL_GetLocalClientFrontEntState( localClientNum ) == ClFrontEndSceneState::INACTIVE)", "%s\n\tShouldn't receive match rules from the front-end server", "CL_GetLocalClientFrontEntState( localClientNum ) == ClFrontEndSceneState::INACTIVE") )
    __debugbreak();
  if ( (unsigned int)v4 >= 2 )
  {
    LODWORD(v12) = 2;
    LODWORD(v11) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v11, v12) )
      __debugbreak();
  }
  connectionState = (unsigned int)clientUIActives[v7].connectionState;
  if ( (_DWORD)connectionState == 5 )
  {
    Com_Printf(14, "Received 'mruleResponse' packet from host\n", connectionState, time);
    ClientConnectionData = ClConnectionMP::GetClientConnectionData((const LocalClientNum_t)v4);
    if ( (unsigned int)v4 >= 2 )
    {
      LODWORD(v12) = 2;
      LODWORD(v11) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 165, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v11, v12) )
        __debugbreak();
    }
    if ( clientUIActives[v7].frontEndSceneState[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 3094, ASSERT_TYPE_ASSERT, "(CL_GetLocalClientFrontEntState( localClientNum ) == ClFrontEndSceneState::INACTIVE)", "%s\n\tShouldn't receive match rules from the front-end server", "CL_GetLocalClientFrontEntState( localClientNum ) == ClFrontEndSceneState::INACTIVE") )
      __debugbreak();
    if ( BG_IngestGameStateInfoMessage(msg, &ClientConnectionData->currentGamestatePacket) == MR_RETCODE_TRUE )
    {
      if ( CL_MainMP_NeedsMatchRulesPackets((const LocalClientNum_t)v4, ClientConnectionData) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 3124, ASSERT_TYPE_ASSERT, "(!CL_MainMP_NeedsMatchRulesPackets( localClientNum, clcData ))", (const char *)&queryFormat, "!CL_MainMP_NeedsMatchRulesPackets( localClientNum, clcData )") )
        __debugbreak();
      CL_MainMP_ConnectTransitionNextState((const LocalClientNum_t)v4, ClientConnectionData);
    }
    ClientConnectionData->lastPacketTime = cls.realtime;
    result = 1;
    ClientConnectionData->connectLastSendTime = -99999;
  }
  else
  {
    Com_Printf(14, "mruleResponse packet while not syncing match rules (connstate = %i).  Ignored.\n", connectionState);
    return 0;
  }
  return result;
}

/*
==============
CL_MainMP_HandleStatsResponse
==============
*/
bool CL_MainMP_HandleStatsResponse(const LocalClientNum_t localClientNum, const netadr_t *from, msg_t *msg, int time)
{
  __int64 v4; 
  __int64 connectionState; 
  unsigned __int64 v8; 
  unsigned __int64 v9; 
  ClConnectionDataMP *ClientConnectionData; 
  ClConnectionDataMP *v11; 
  bool result; 
  int addrHandleIndex; 
  const char *v15; 
  __int64 v16; 
  __int64 v17; 
  netadr_t v18; 

  v4 = localClientNum;
  _RBP = from;
  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 3052, ASSERT_TYPE_ASSERT, "(msg)", (const char *)&queryFormat, "msg") )
    __debugbreak();
  if ( _RBP->localNetID != NS_MAXCLIENTS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 3054, ASSERT_TYPE_ASSERT, "(from.localNetID == NS_SERVER)", (const char *)&queryFormat, "from.localNetID == NS_SERVER") )
    __debugbreak();
  if ( (unsigned int)v4 >= 2 )
  {
    LODWORD(v16) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 165, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v16, 2) )
      __debugbreak();
  }
  if ( clientUIActives[v4].frontEndSceneState[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 3057, ASSERT_TYPE_ASSERT, "(CL_GetLocalClientFrontEntState( localClientNum ) == ClFrontEndSceneState::INACTIVE)", "%s\n\tShouldn't receive stats responses from the front-end server", "CL_GetLocalClientFrontEntState( localClientNum ) == ClFrontEndSceneState::INACTIVE") )
    __debugbreak();
  if ( (unsigned int)v4 >= 2 )
  {
    LODWORD(v17) = 2;
    LODWORD(v16) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v16, v17) )
      __debugbreak();
  }
  connectionState = (unsigned int)clientUIActives[v4].connectionState;
  if ( (_DWORD)connectionState != 4 )
  {
    Com_Printf(14, "Stats response packet while not syncing stats (connstate = %i).  Ignored.\n", connectionState);
    return 0;
  }
  v8 = CL_MainMP_ParseStatsRequest(msg);
  v9 = v8;
  if ( msg->overflowed || msg->readcount != msg->cursize + msg->splitSize )
  {
    __asm { vmovups xmm0, xmmword ptr [rbp+0] }
    addrHandleIndex = _RBP->addrHandleIndex;
    __asm { vmovups [rsp+78h+var_38], xmm0 }
    v18.addrHandleIndex = addrHandleIndex;
    v15 = NET_AdrToString(&v18);
    Com_Printf(14, "connectResponse packet has invalid data from %s. Ignored.\n", v15);
    return 0;
  }
  Com_Printf(14, "Received stats response with statPacketsNeeded = %zu\n", v8);
  ClientConnectionData = ClConnectionMP::GetClientConnectionData((const LocalClientNum_t)v4);
  v11 = ClientConnectionData;
  ClientConnectionData->statPacketsToSend = v9;
  if ( !v9 )
    CL_MainMP_ConnectTransitionNextState((const LocalClientNum_t)v4, ClientConnectionData);
  result = 1;
  v11->lastPacketTime = cls.realtime;
  v11->connectLastSendTime = -99999;
  return result;
}

/*
==============
CL_MainMP_InParty
==============
*/
bool CL_MainMP_InParty(const PartyData *party, const LocalClientNum_t localClientNum)
{
  NetConnection *HostConnection; 
  ClConnectionDataMP *ClientConnectionData; 

  HostConnection = (NetConnection *)Party_GetHostConnection(party, localClientNum);
  ClientConnectionData = ClConnectionMP::GetClientConnectionData(localClientNum);
  return party->inParty && NetConnection::operator==(HostConnection, &ClientConnectionData->serverConnection);
}

/*
==============
CL_MainMP_InfoStringSingleDvar
==============
*/
void CL_MainMP_InfoStringSingleDvar(const dvar_t *dvar, void *userData)
{
  const char *v3; 
  char dest[16]; 

  if ( (dvar->flags & *(_DWORD *)userData) != 0 )
  {
    Dvar_GenerateChecksumStringFromChecksum(dest, 12, dvar->checksum);
    v3 = Dvar_DisplayableValue(dvar);
    Info_SetValueForKey(s_userInfoString, dest, v3);
  }
}

/*
==============
CL_MainMP_InitGameMode
==============
*/
void CL_MainMP_InitGameMode(void)
{
  PartyData *GameParty; 
  MarketingCommsManager *Instance; 

  Com_Printf(14, "----- MP All Clients Initialization -----\n");
  CL_MainMP_RegisterDvars();
  Cmd_AddClientCommandList(S_CL_MAIN_CMD_MP, 0x28u);
  CL_ConsoleMP_RegisterCommands();
  MatchRules_RegisterCommands();
  CL_XB3MP_RegisterCommands();
  DynEnt_DebugStart();
  BG_Customization_Init();
  CL_StreamSync_Init();
  CL_UICharacter_Reset();
  CL_UI_ClientModel_Reset();
  CL_UIWeapon_Init();
  cl_voiceCommunication[0].voicePacketCount = 0;
  GameParty = Live_GetGameParty();
  CL_ClearMutedList(GameParty);
  VoiceMute_Init();
  CL_MigrationInit();
  Instance = MarketingCommsManager::GetInstance();
  MarketingCommsManager::OnInitMPGameMode(Instance);
  if ( cl_serverLoadingMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 4803, ASSERT_TYPE_ASSERT, "(!cl_serverLoadingMap)", (const char *)&queryFormat, "!cl_serverLoadingMap") )
    __debugbreak();
  if ( g_waitingForServer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 4804, ASSERT_TYPE_ASSERT, "(!g_waitingForServer)", (const char *)&queryFormat, "!g_waitingForServer") )
    __debugbreak();
  Com_Printf(14, "----- MP All Clients Initialization Complete -----\n");
}

/*
==============
CL_MainMP_InitGameModeClient
==============
*/
void CL_MainMP_InitGameModeClient(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  __int64 v2; 
  __int64 v3; 
  __int64 v4; 
  int v5; 

  v1 = localClientNum;
  Com_Printf(14, "----- Client MP Initialization %i -----\n", (unsigned int)localClientNum);
  CL_MainMP_ClearClientState((LocalClientNum_t)v1);
  Com_ClientDObjClearAllSkel((LocalClientNum_t)v1);
  CL_Input_ClearKeys((LocalClientNum_t)v1);
  if ( __popcnt(0xFFFFFFFF) != 32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 4846, ASSERT_TYPE_ASSERT, "(CountBitsEnabled( 0xffffffff ) == 32)", (const char *)&queryFormat, "CountBitsEnabled( 0xffffffff ) == 32") )
    __debugbreak();
  if ( __popcnt(0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 4847, ASSERT_TYPE_ASSERT, "(CountBitsEnabled( 0x00000000 ) == 0)", (const char *)&queryFormat, "CountBitsEnabled( 0x00000000 ) == 0") )
    __debugbreak();
  if ( __popcnt(0x11111111u) != 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 4848, ASSERT_TYPE_ASSERT, "(CountBitsEnabled( 0x11111111 ) == 8)", (const char *)&queryFormat, "CountBitsEnabled( 0x11111111 ) == 8") )
    __debugbreak();
  if ( __popcnt(0x77777777u) != 24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 4849, ASSERT_TYPE_ASSERT, "(CountBitsEnabled( 0x77777777 ) == 24)", (const char *)&queryFormat, "CountBitsEnabled( 0x77777777 ) == 24") )
    __debugbreak();
  if ( (unsigned int)v1 >= 2 )
  {
    v5 = 2;
    LODWORD(v4) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 158, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v4, v5) )
      __debugbreak();
  }
  v2 = v1;
  v3 = v1;
  if ( clientUIActives[v3].connectionState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 4853, ASSERT_TYPE_ASSERT, "(clUI->connectionState == CA_DISCONNECTED)", "%s\n\tShould be initialized in common CL_Main_InitClient", "clUI->connectionState == CA_DISCONNECTED") )
    __debugbreak();
  if ( !clientUIActives[v3].isRunning && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 4854, ASSERT_TYPE_ASSERT, "(clUI->isRunning)", "%s\n\tShould be initialized in common CL_Main_InitClient", "clUI->isRunning") )
    __debugbreak();
  if ( cl_waitingOnServerToLoadMap[v2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 4857, ASSERT_TYPE_ASSERT, "(!cl_waitingOnServerToLoadMap[localClientNum])", (const char *)&queryFormat, "!cl_waitingOnServerToLoadMap[localClientNum]") )
    __debugbreak();
}

/*
==============
CL_MainMP_InitLoad
==============
*/
void CL_MainMP_InitLoad(const char *mapname, const char *gametype)
{
  if ( CL_Main_AnyLocalClientsRunning() )
  {
    CL_MainMP_InitLoad_Internal(gametype, 0);
    UI_SetMap(mapname, gametype);
  }
}

/*
==============
CL_MainMP_InitLoadFrontEnd
==============
*/
void CL_MainMP_InitLoadFrontEnd(const char *mapname, const char *gametype)
{
  if ( !CL_Main_AnyLocalClientsRunning() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 3517, ASSERT_TYPE_ASSERT, "(CL_Main_AnyLocalClientsRunning())", (const char *)&queryFormat, "CL_Main_AnyLocalClientsRunning()") )
    __debugbreak();
  CL_MainMP_InitLoad_Internal(gametype, 1);
  if ( !CL_AllLocalClientsDisconnected() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 3521, ASSERT_TYPE_ASSERT, "(CL_AllLocalClientsDisconnected())", (const char *)&queryFormat, "CL_AllLocalClientsDisconnected()") )
    __debugbreak();
}

/*
==============
CL_MainMP_InitLoad_Internal
==============
*/
void CL_MainMP_InitLoad_Internal(const char *const gametype, const bool isFrontEndScene)
{
  LocalClientNum_t v3; 
  connstate_t *p_connectionState; 
  int v5; 
  unsigned int v6; 
  __int64 v7; 
  __int64 v8; 

  MSG_SetupNetFieldListsForGame(gametype);
  v3 = LOCAL_CLIENT_0;
  if ( SLODWORD(cl_maxLocalClients) > 0 )
  {
    p_connectionState = &clientUIActives[0].connectionState;
    do
    {
      if ( (unsigned int)v3 >= LOCAL_CLIENT_COUNT )
      {
        LODWORD(v8) = 2;
        LODWORD(v7) = v3;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 158, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v7, v8) )
          __debugbreak();
      }
      if ( *((_BYTE *)p_connectionState + 28) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 3487, ASSERT_TYPE_ASSERT, "(cl->frontEndSceneState == ClFrontEndSceneState::INACTIVE)", (const char *)&queryFormat, "cl->frontEndSceneState == ClFrontEndSceneState::INACTIVE") )
        __debugbreak();
      if ( isFrontEndScene )
      {
        if ( (unsigned int)v3 >= LOCAL_CLIENT_COUNT )
        {
          LODWORD(v8) = 2;
          LODWORD(v7) = v3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v7, v8) )
            __debugbreak();
        }
        if ( *p_connectionState )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 3492, ASSERT_TYPE_ASSERT, "(CL_IsLocalClientDisconnectedFromAnyServer( localClientNum ))", "%s\n\tThere should not be an active connection when we setup the front end scene", "CL_IsLocalClientDisconnectedFromAnyServer( localClientNum )") )
            __debugbreak();
        }
      }
      else
      {
        if ( (unsigned int)v3 >= LOCAL_CLIENT_COUNT )
        {
          LODWORD(v8) = 2;
          LODWORD(v7) = v3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v7, v8) )
            __debugbreak();
        }
        v5 = *p_connectionState;
        v6 = 0;
        if ( *(int *)p_connectionState >= 3 )
          v6 = 3;
        if ( (unsigned int)v3 >= LOCAL_CLIENT_COUNT )
        {
          LODWORD(v8) = 2;
          LODWORD(v7) = v3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 195, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v7, v8) )
            __debugbreak();
        }
        Com_Printf(14, "CL_SetLocalConnectionState %i -> %i.\n", *(unsigned int *)p_connectionState, v6);
        *p_connectionState = v6;
        if ( v5 < 3 )
          Online_Telemetry_ResetInputSession(v3);
      }
      ++v3;
      p_connectionState += 110;
    }
    while ( v3 < SLODWORD(cl_maxLocalClients) );
  }
}

/*
==============
CL_MainMP_InitMapLoad
==============
*/
void CL_MainMP_InitMapLoad(const char *mapname, const char *gametype, int restart)
{
  bool started; 
  const dvar_t *v7; 
  bool v8; 
  bool v9; 
  unsigned __int8 ActiveGameMode; 

  CL_Main_ShutdownAll(restart, 1);
  started = Com_GameStart_UseNewLoadingSystem();
  v7 = DVARBOOL_ATClient_Enabled;
  v8 = started;
  if ( !DVARBOOL_ATClient_Enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_Enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  if ( !v7->current.enabled || Com_IsAnyLocalServerRunning() )
  {
    v9 = 0;
    if ( v8 )
    {
      Sys_ProfBeginNamedEvent(0xFFFFFFFF, "Com_RestartForFrontend");
      Com_RestartForFrontend();
      goto LABEL_8;
    }
  }
  else
  {
    v9 = 1;
    v8 = 0;
  }
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "Com_Restart");
  Com_Restart();
LABEL_8:
  Sys_ProfEndNamedEvent();
  if ( !mapname && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 4934, ASSERT_TYPE_ASSERT, "(mapname)", (const char *)&queryFormat, "mapname") )
    __debugbreak();
  if ( !gametype && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 4935, ASSERT_TYPE_ASSERT, "(gametype)", (const char *)&queryFormat, "gametype") )
    __debugbreak();
  if ( !Com_IsAnyLocalServerRunning() )
  {
    ActiveGameMode = Com_GameMode_GetActiveGameMode();
    BG_Omnvar_LoadTables((GameModeType)ActiveGameMode, gametype, mapname);
    BG_TransientsInfilMP_InitOmnVars(mapname);
  }
  if ( cls.hunkUsersStarted && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 4984, ASSERT_TYPE_ASSERT, "(!cls.hunkUsersStarted)", (const char *)&queryFormat, "!cls.hunkUsersStarted") )
    __debugbreak();
  CL_Main_InitRenderer();
  CL_Main_StartHunkUsers();
  Com_InitDObj();
  if ( v8 )
  {
    Sys_ProfBeginNamedEvent(0xFFFFFFFF, "Com_GameStart_Begin");
    Com_GameStart_BeginClient(mapname, gametype, restart != 0);
  }
  else
  {
    Sys_ProfBeginNamedEvent(0xFFFFFFFF, "DB_LoadLevelXAssets");
    DB_LoadLevelXAssets(mapname, 0, v9);
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
CL_MainMP_InitializeGamestate
==============
*/
void CL_MainMP_InitializeGamestate(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  __int64 v2; 
  char v3; 
  char LocalClientFrontEntState; 
  CLPauseReason PauseReason; 
  __int64 v6; 
  __int64 v7; 
  __int64 v8; 

  v1 = localClientNum;
  Com_SyncThreads();
  Physics_WaitForAllCommandsToFinish();
  Com_Printf(14, "Setting state to CA_LOADING in CL_MainMP_InitializeGamestate\n");
  if ( (unsigned int)v1 >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 195, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v1, 2) )
    __debugbreak();
  v2 = v1;
  Com_Printf(14, "CL_SetLocalConnectionState %i -> %i.\n", (unsigned int)clientUIActives[v1].connectionState, 7i64);
  clientUIActives[v1].connectionState = CA_LOADING;
  if ( (unsigned int)v1 >= 2 )
  {
    LODWORD(v8) = 2;
    LODWORD(v7) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 165, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  v3 = clientUIActives[v2].frontEndSceneState[0];
  Com_IsAnyLocalServerRunning();
  if ( !cls.hunkUsersStarted && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 1968, ASSERT_TYPE_ASSERT, "(cls.hunkUsersStarted)", (const char *)&queryFormat, "cls.hunkUsersStarted") )
    __debugbreak();
  if ( v3 && CL_GetLocalClientUIGlobals((const LocalClientNum_t)v1)->cgameInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 1974, ASSERT_TYPE_ASSERT, "(!cl->cgameInitialized)", (const char *)&queryFormat, "!cl->cgameInitialized") )
    __debugbreak();
  if ( (unsigned int)v1 >= 2 )
  {
    LODWORD(v8) = 2;
    LODWORD(v7) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 158, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  if ( clientUIActives[v2].frontEndSceneState[0] || !clientUIActives[v2].cgameInitialized )
  {
    LocalClientFrontEntState = CL_GetLocalClientFrontEntState((const LocalClientNum_t)v1);
    CL_LatencyProfileMP_Init(LocalClientFrontEntState == 0);
    PauseReason = CL_Pause_GetPauseReason();
    CL_Pause_SetPauseReason((CLPauseReason)(PauseReason | 0x10));
    CL_CGameMP_Init((LocalClientNum_t)v1);
  }
  else
  {
    CL_CGameMP_Restart((LocalClientNum_t)v1);
  }
  v6 = 3i64;
  do
  {
    CL_InputMP_WritePacket((LocalClientNum_t)v1);
    --v6;
  }
  while ( v6 );
}

/*
==============
CL_MainMP_IsMLGSpectator
==============
*/
bool CL_MainMP_IsMLGSpectator(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  const dvar_t *v2; 
  int ControllerFromClient; 
  unsigned __int64 m_id; 
  const PartyData *PartyData; 
  int IsPlayerMLGSpectator; 
  int v9; 
  XUID result; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v9 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 165, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v9) )
      __debugbreak();
  }
  if ( clientUIActives[v1].frontEndSceneState[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 1679, ASSERT_TYPE_ASSERT, "(CL_GetLocalClientFrontEntState( localClientNum ) == ClFrontEndSceneState::INACTIVE)", (const char *)&queryFormat, "CL_GetLocalClientFrontEntState( localClientNum ) == ClFrontEndSceneState::INACTIVE") )
    __debugbreak();
  v2 = DVARBOOL_com_devCodcasterEnabled;
  if ( !DVARBOOL_com_devCodcasterEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_devCodcasterEnabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.enabled || (ControllerFromClient = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v1), Live_GetXuid(&result, ControllerFromClient), Live_IsConnectedToDemonware(ControllerFromClient)) && GameBattles_IsGameBattleActive() && (m_id = result.m_id, PartyData = Lobby_GetPartyData(), Party_GetAssignedTeam(PartyData, (const XUID)m_id) == 201) || (IsPlayerMLGSpectator = Party_IsPlayerMLGSpectator(result)) != 0 )
    LOBYTE(IsPlayerMLGSpectator) = 1;
  return IsPlayerMLGSpectator;
}

/*
==============
CL_MainMP_IsWaitingOnServerToLoadMap
==============
*/
_BOOL8 CL_MainMP_IsWaitingOnServerToLoadMap(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  int v4; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v4 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 5076, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v4) )
      __debugbreak();
  }
  return cl_waitingOnServerToLoadMap[v1];
}

/*
==============
CL_MainMP_LocalClientJoinPrivateParty
==============
*/
char CL_MainMP_LocalClientJoinPrivateParty(int localControllerIndex)
{
  int v3; 

  LiveAntiCheat_FeatureBanCheck(16);
  if ( !Party_InParty(&g_partyData) || !Party_IsRunning(&g_partyData) || !Party_AreWeHost(&g_partyData) )
    return 0;
  v3 = Party_CountMembers(&g_partyData, PARTY_MEMBER_TYPE_PLAYER_ONLY);
  if ( !v3 || v3 >= Dvar_GetInt_Internal_DebugName(DVARINT_party_maxplayers, "party_maxplayers") || Party_CountLocalMembers(&g_partyData) >= 2 || !CL_Mgr_IsControllerMappedToClient(localControllerIndex, NULL) || Dvar_GetBool_Internal_DebugName(DVARBOOL_systemlink, "systemlink") && !Dvar_GetBool_Internal_DebugName(DVARBOOL_onlinegame, "onlinegame") && CL_GetLocalClientSignInState(localControllerIndex) < 1 )
    return 0;
  if ( !g_partyData.splitscreenData.otherClientActive )
    Party_SetupSplitscreenData(&g_partyData.splitscreenData, g_partyData.splitscreenData.mainClient.localControllerIndex, (const LocalClientNum_t)g_partyData.splitscreenData.mainClient.localClientNum);
  PartyHost_AddOtherSplitscreenLocalPlayer(&g_partyData);
  if ( !g_partyData.splitscreenData.otherClientActive )
    return 0;
  Live_SetPartyPresence(g_partyData.splitscreenData.otherClient.localControllerIndex);
  return 1;
}

/*
==============
CL_MainMP_LocalServers
==============
*/
void CL_MainMP_LocalServers(LocalClientNum_t localClientNum)
{
  int v2; 
  unsigned __int8 *p_dirty; 
  int v4; 
  unsigned __int8 v5; 
  unsigned __int8 v6; 
  unsigned __int8 v7; 
  unsigned __int8 v8; 
  unsigned __int8 v9; 
  unsigned __int8 v10; 
  unsigned __int8 v11; 
  unsigned __int8 v12; 
  unsigned __int8 v13; 
  unsigned __int8 v14; 
  unsigned __int8 v15; 
  unsigned __int8 v16; 
  unsigned __int8 v17; 
  unsigned __int8 v18; 
  unsigned __int8 v19; 
  unsigned __int8 v20; 
  unsigned int ProtocolVersion; 
  const char *v22; 
  __int64 v23; 
  netsrc_t LocalNetIDFromLocalClientNum; 
  netadr_t adr; 
  char dest[1024]; 

  Com_Printf(0, "Scanning for servers on the local network on port range [%i,%i]...\n", 26016i64, 26025i64);
  v2 = 0;
  p_dirty = &cls.localServers[2].dirty;
  *(_QWORD *)&cls.pingUpdateSource = 0i64;
  v4 = 2;
  do
  {
    v5 = *(p_dirty - 456);
    memset_0(&cls.spawnGroupLootTableFilter[228 * v4 + 744], 0, 0xE4ui64);
    *(p_dirty - 456) = v5;
    v6 = *(p_dirty - 228);
    memset_0(&cls.spawnGroupLootTableFilter[228 * v4 + 972], 0, 0xE4ui64);
    *(p_dirty - 228) = v6;
    v7 = *p_dirty;
    memset_0(&cls.localServers[v4], 0, sizeof(cls.localServers[v4]));
    *p_dirty = v7;
    v8 = p_dirty[228];
    memset_0(&cls.localServers[v4 + 1], 0, sizeof(cls.localServers[v4 + 1]));
    p_dirty[228] = v8;
    v9 = p_dirty[456];
    memset_0(&cls.localServers[v4 + 2], 0, sizeof(cls.localServers[v4 + 2]));
    p_dirty[456] = v9;
    v10 = p_dirty[684];
    memset_0(&cls.localServers[v4 + 3], 0, sizeof(cls.localServers[v4 + 3]));
    p_dirty[684] = v10;
    v11 = p_dirty[912];
    memset_0(&cls.localServers[v4 + 4], 0, sizeof(cls.localServers[v4 + 4]));
    p_dirty[912] = v11;
    v12 = p_dirty[1140];
    memset_0(&cls.localServers[v4 + 5], 0, sizeof(cls.localServers[v4 + 5]));
    p_dirty[1140] = v12;
    v13 = p_dirty[1368];
    memset_0(&cls.localServers[v4 + 6], 0, sizeof(cls.localServers[v4 + 6]));
    p_dirty[1368] = v13;
    v14 = p_dirty[1596];
    memset_0(&cls.localServers[v4 + 7], 0, sizeof(cls.localServers[v4 + 7]));
    p_dirty[1596] = v14;
    v15 = p_dirty[1824];
    memset_0(&cls.localServers[v4 + 8], 0, sizeof(cls.localServers[v4 + 8]));
    p_dirty[1824] = v15;
    v16 = p_dirty[2052];
    memset_0(&cls.localServers[v4 + 9], 0, sizeof(cls.localServers[v4 + 9]));
    p_dirty[2052] = v16;
    v17 = p_dirty[2280];
    memset_0(&cls.localServers[v4 + 10], 0, sizeof(cls.localServers[v4 + 10]));
    p_dirty[2280] = v17;
    v18 = p_dirty[2508];
    memset_0(&cls.localServers[v4 + 11], 0, sizeof(cls.localServers[v4 + 11]));
    p_dirty[2508] = v18;
    v19 = p_dirty[2736];
    memset_0(&cls.localServers[v4 + 12], 0, sizeof(cls.localServers[v4 + 12]));
    p_dirty[2736] = v19;
    v20 = p_dirty[2964];
    memset_0(&cls.localServers[v4 + 13], 0, sizeof(cls.localServers[v4 + 13]));
    v4 += 16;
    p_dirty[2964] = v20;
    p_dirty += 3648;
  }
  while ( v4 - 2 < 64 );
  *(_DWORD *)&adr.port = 0;
  *(_QWORD *)&adr.localNetID = 2i64;
  *(_QWORD *)&adr.type = 0i64;
  Com_sprintf<1024>((char (*)[1024])dest, "%s\n", "getinfo");
  ProtocolVersion = GetProtocolVersion();
  v22 = j_va("%i", ProtocolVersion);
  Info_SetValueForKey(dest, "protocol", v22);
  do
  {
    adr.type = NA_BROADCAST;
    adr.port = v2 + 26016;
    v23 = -1i64;
    do
      ++v23;
    while ( dest[v23] );
    LocalNetIDFromLocalClientNum = NET_GetLocalNetIDFromLocalClientNum(localClientNum);
    NET_OutOfBandData(LocalNetIDFromLocalClientNum, &adr, (const unsigned __int8 *)dest, v23);
    ++v2;
  }
  while ( v2 < 10 );
}

/*
==============
CL_MainMP_MapLoading
==============
*/
void CL_MainMP_MapLoading(void)
{
  if ( CL_Main_AnyLocalClientsRunning() )
    CL_MainMP_MapLoading_Internal(0);
}

/*
==============
CL_MainMP_MapLoadingFrontEnd
==============
*/
void CL_MainMP_MapLoadingFrontEnd(void)
{
  __int64 v0; 
  __int64 v1; 
  int v2; 
  __int64 v3; 
  int v4; 
  int v5; 
  int v6; 

  g_waitingForServer = 0;
  cl_serverLoadingMap = 1;
  if ( clientUIActives[0].connectionState < CA_CONNECTED )
  {
LABEL_14:
    Core_strcpy(cls.servername, 0x100ui64, "localhost");
    CL_MainMP_MapLoading_SetupClientForConnection(LOCAL_CLIENT_0, 1);
  }
  else
  {
    v0 = 0x7FFFFFFFi64;
    v1 = 0i64;
    do
    {
      v2 = (unsigned __int8)cls.servername[v1];
      v3 = v0;
      v4 = (unsigned __int8)net_interface[v1++];
      --v0;
      if ( !v3 )
        break;
      if ( v2 != v4 )
      {
        v5 = v2 + 32;
        if ( (unsigned int)(v2 - 65) > 0x19 )
          v5 = v2;
        v2 = v5;
        v6 = v4 + 32;
        if ( (unsigned int)(v4 - 65) > 0x19 )
          v6 = v4;
        if ( v2 != v6 )
          goto LABEL_14;
      }
    }
    while ( v2 );
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 870, ASSERT_TYPE_ASSERT, "(!isFrontEndLoad)", (const char *)&queryFormat, "!isFrontEndLoad") )
      __debugbreak();
    CL_MainMP_MapLoading_AlreadyConnected();
  }
}

/*
==============
CL_MainMP_MapLoading_AlreadyConnected
==============
*/
void CL_MainMP_MapLoading_AlreadyConnected()
{
  int v0; 
  __int64 v1; 
  unsigned __int64 v2; 
  float v3; 
  ClConnection *v4; 
  ClConfigStringsMP *ClConfigStringsMP; 
  __int64 v6; 
  __int64 v7; 
  __int64 v8; 

  v0 = 0;
  v1 = 0i64;
  v2 = 0i64;
  do
  {
    if ( CL_IsLocalClientActive((LocalClientNum_t)v0) )
    {
      if ( (unsigned int)v0 >= 2 )
      {
        LODWORD(v8) = 2;
        LODWORD(v7) = v0;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 158, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v7, v8) )
          __debugbreak();
      }
      if ( clientUIActives[v2].frontEndSceneState[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 726, ASSERT_TYPE_ASSERT, "(cl->frontEndSceneState == ClFrontEndSceneState::INACTIVE)", (const char *)&queryFormat, "cl->frontEndSceneState == ClFrontEndSceneState::INACTIVE") )
        __debugbreak();
      if ( (unsigned int)v0 >= 2 )
      {
        LODWORD(v8) = 2;
        LODWORD(v7) = v0;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 195, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v7, v8) )
          __debugbreak();
      }
      Com_Printf(14, "CL_SetLocalConnectionState %i -> %i.\n", (unsigned int)clientUIActives[v2].connectionState, 3i64);
      v3 = cl_maxLocalClients;
      clientUIActives[v2].connectionState = CA_CONNECTED;
      if ( (unsigned int)v0 >= LODWORD(v3) )
      {
        *(float *)&v8 = v3;
        LODWORD(v7) = v0;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_connection_mp.h", 138, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( (cl_maxLocalClients) )", "localClientNum doesn't index MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v7, v8) )
          __debugbreak();
      }
      if ( !BG_GameInterface_GameModeIsMP((GameModeType)(unsigned __int8)ClConnection::ms_activeConnectionType) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_connection_mp.h", 139, ASSERT_TYPE_ASSERT, "(BG_GameInterface_GameModeIsMP( ms_activeConnectionType ))", (const char *)&queryFormat, "BG_GameInterface_GameModeIsMP( ms_activeConnectionType )") )
        __debugbreak();
      if ( !ClConnection::ms_connections[v1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_connection_mp.h", 140, ASSERT_TYPE_ASSERT, "(ms_connections[localClientNum])", (const char *)&queryFormat, "ms_connections[localClientNum]") )
        __debugbreak();
      v4 = ClConnection::ms_connections[v1];
      memset_0(&v4[9363], 0, 0x100ui64);
      v4[9362].m_localClientNum = -99999;
      *(_QWORD *)&v4[9379].m_localClientNum = 0i64;
      ClConfigStringsMP = ClConfigStringsMP::GetClConfigStringsMP();
      ClConfigStringsMP::ClearStrings(ClConfigStringsMP);
      if ( v2 >= 2 )
      {
        j___report_rangecheckfailure(v6);
        JUMPOUT(0x141A9B4D3i64);
      }
      cl_waitingOnServerToLoadMap[v1] = 0;
      if ( !SV_IsDemoPlayingNext() )
        LiveStorage_BeginGame((const LocalClientNum_t)v0);
    }
    ++v0;
    ++v1;
    ++v2;
  }
  while ( v0 < 2 );
}

/*
==============
CL_MainMP_MapLoading_Internal
==============
*/
void CL_MainMP_MapLoading_Internal(const bool isFrontEndLoad, double a2)
{
  int v3; 
  int v5; 
  int *p_keyCatchers; 
  int i; 
  int ControllerFromClient; 
  __int64 v9; 
  __int64 v10; 
  int v11; 
  __int64 v12; 
  int v13; 
  int v14; 
  int v15; 
  const dvar_t *v16; 

  v3 = 0;
  g_waitingForServer = 0;
  if ( !isFrontEndLoad )
  {
    v5 = 0;
    p_keyCatchers = &clientUIActives[0].keyCatchers;
    do
    {
      Con_Close((LocalClientNum_t)v5++);
      *p_keyCatchers = 0;
      p_keyCatchers += 110;
    }
    while ( v5 < 2 );
    if ( !SV_IsDemoPlayingNext() )
    {
      for ( i = 0; i < 2; ++i )
      {
        if ( CL_IsLocalClientActive((LocalClientNum_t)i) )
        {
          ControllerFromClient = CL_Mgr_GetControllerFromClient((LocalClientNum_t)i);
          LiveStorage_EnsureWeHaveStats(ControllerFromClient);
        }
      }
    }
  }
  cl_serverLoadingMap = 1;
  if ( clientUIActives[0].connectionState >= CA_CONNECTED )
  {
    v9 = 0x7FFFFFFFi64;
    v10 = 0i64;
    do
    {
      v11 = (unsigned __int8)cls.servername[v10];
      v12 = v9;
      v13 = (unsigned __int8)net_interface[v10++];
      --v9;
      if ( !v12 )
        break;
      if ( v11 != v13 )
      {
        v14 = v11 + 32;
        if ( (unsigned int)(v11 - 65) > 0x19 )
          v14 = v11;
        v11 = v14;
        v15 = v13 + 32;
        if ( (unsigned int)(v13 - 65) > 0x19 )
          v15 = v13;
        if ( v11 != v15 )
          goto LABEL_23;
      }
    }
    while ( v11 );
    if ( isFrontEndLoad && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 870, ASSERT_TYPE_ASSERT, "(!isFrontEndLoad)", (const char *)&queryFormat, "!isFrontEndLoad") )
      __debugbreak();
    CL_MainMP_MapLoading_AlreadyConnected();
LABEL_25:
    if ( isFrontEndLoad )
      return;
    goto LABEL_48;
  }
LABEL_23:
  Core_strcpy(cls.servername, 0x100ui64, "localhost");
  if ( isFrontEndLoad )
  {
    CL_MainMP_MapLoading_SetupClientForConnection(LOCAL_CLIENT_0, 1);
    goto LABEL_25;
  }
  if ( CL_GetLocalClientActiveCount() > SLODWORD(cl_maxLocalClients) )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1442156E0, 509i64);
  do
  {
    if ( CL_IsLocalClientActive((LocalClientNum_t)v3) )
    {
      if ( Com_FrontEndScene_IsActive() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 1482, ASSERT_TYPE_ASSERT, "(!Com_FrontEndScene_IsActive())", "%s\n\tDisconnect called while front end scene is still active", "!Com_FrontEndScene_IsActive()") )
        __debugbreak();
      CL_MainMP_Disconnect_Internal((LocalClientNum_t)v3, a2);
      CL_SetLocalClientActive((LocalClientNum_t)v3, 1);
      CL_MainMP_MapLoading_SetupClientForConnection((LocalClientNum_t)v3, 0);
    }
    ++v3;
  }
  while ( v3 < 2 );
  if ( !SV_IsDemoPlaying() && !SV_IsDemoPlayingNext() )
  {
    if ( Com_FrontEndScene_IsActive() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 750, ASSERT_TYPE_ASSERT, "(!Com_FrontEndScene_IsActive())", "%s\n\tShouldn't check onlinegame and session information while in the frontend scene", "!Com_FrontEndScene_IsActive()") )
      __debugbreak();
    if ( !SV_IsDemoPlayingNext() )
    {
      v16 = DVARBOOL_onlinegame;
      if ( !DVARBOOL_onlinegame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "onlinegame") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v16);
      if ( v16->current.enabled && !XSESSION_INFO::IsValidSessionId(&g_serverSession.dyn.sessionInfo) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 753, ASSERT_TYPE_ASSERT, "(SV_IsDemoPlayingNext() || !Dvar_GetBool_Internal_DebugName( DVARBOOL_onlinegame, \"onlinegame\" ) || g_serverSession.dyn.sessionInfo.IsValidSessionId())", (const char *)&queryFormat, "SV_IsDemoPlayingNext() || !Dvar_GetBool( onlinegame ) || g_serverSession.dyn.sessionInfo.IsValidSessionId()") )
        __debugbreak();
    }
  }
LABEL_48:
  __asm { vxorps  xmm0, xmm0, xmm0; volume }
  SND_FadeAllSounds(*(float *)&_XMM0, 0);
  CL_StreamSync_Start();
}

/*
==============
CL_MainMP_MapLoading_SetupClientForConnection
==============
*/
void CL_MainMP_MapLoading_SetupClientForConnection(LocalClientNum_t localClientNum, const bool isFrontEndLoad)
{
  unsigned __int64 v3; 
  unsigned __int64 v4; 
  ClConnectionDataMP *ClientConnectionData; 
  PartyData *GameParty; 
  const XNADDR *Address; 
  netsrc_t LocalNetIDFromLocalClientNum; 
  __int64 v9; 
  __int64 type; 
  __int64 v11; 
  XSESSION_INFO outSessionInfo; 

  v3 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 195, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  v4 = v3;
  Com_Printf(14, "CL_SetLocalConnectionState %i -> %i.\n", (unsigned int)clientUIActives[v3].connectionState, 2i64);
  clientUIActives[v3].connectionState = CA_CHALLENGING;
  if ( (unsigned int)v3 >= 2 )
  {
    LODWORD(v11) = 2;
    LODWORD(type) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 158, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", type, v11) )
      __debugbreak();
  }
  if ( isFrontEndLoad )
  {
    clientUIActives[v4].frontEndSceneState[0] = 1;
  }
  else
  {
    if ( clientUIActives[v4].frontEndSceneState[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 799, ASSERT_TYPE_ASSERT, "(cl->frontEndSceneState == ClFrontEndSceneState::INACTIVE)", (const char *)&queryFormat, "cl->frontEndSceneState == ClFrontEndSceneState::INACTIVE") )
      __debugbreak();
    if ( !SV_IsDemoPlayingNext() )
      LiveStorage_BeginGame((const LocalClientNum_t)v3);
  }
  clientUIActives[v4].invited = 1;
  ClientConnectionData = ClConnectionMP::GetClientConnectionData((const LocalClientNum_t)v3);
  ClientConnectionData->connectLastSendTime = -99999;
  ClientConnectionData->connectPacketCount = 0;
  GameParty = Live_GetGameParty();
  bdSecurityID::bdSecurityID(&outSessionInfo.m_security.m_id);
  bdSecurityKey::bdSecurityKey(&outSessionInfo.m_security.m_key);
  if ( isFrontEndLoad || !GameParty->inParty )
    NET_CreateSession(&outSessionInfo);
  else
    XSESSION_INFO::operator=(&outSessionInfo, &GameParty->session->dyn.sessionInfo);
  Address = XSESSION_INFO::GetAddress(&outSessionInfo);
  LocalNetIDFromLocalClientNum = NET_GetLocalNetIDFromLocalClientNum((const LocalClientNum_t)v3);
  NetConnection::Open(&ClientConnectionData->serverConnection, LocalNetIDFromLocalClientNum, &outSessionInfo, Address, NS_MAXCLIENTS, (const NetConnection::Type)(!isFrontEndLoad + 4));
  bdSecurityKey::~bdSecurityKey(&outSessionInfo.m_security.m_key);
  bdSecurityID::~bdSecurityID(&outSessionInfo.m_security.m_id);
  if ( v3 >= 2 )
  {
    j___report_rangecheckfailure(v9);
    JUMPOUT(0x141A9BBB6i64);
  }
  cl_waitingOnServerToLoadMap[v3] = 0;
  CL_MainMP_CheckForResend((LocalClientNum_t)v3);
}

/*
==============
CL_MainMP_NeedsMatchRulesPackets
==============
*/
char CL_MainMP_NeedsMatchRulesPackets(const LocalClientNum_t localClientNum, ClConnectionDataMP *clcData)
{
  __int64 v2; 
  __int64 v5; 

  v2 = localClientNum;
  if ( !clcData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 2912, ASSERT_TYPE_ASSERT, "(clcData)", (const char *)&queryFormat, "clcData") )
    __debugbreak();
  if ( clcData->currentGamestatePacket == -1 )
    return 0;
  if ( (unsigned int)v2 >= 2 )
  {
    LODWORD(v5) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 165, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v5, 2) )
      __debugbreak();
  }
  if ( (clientUIActives[v2].frontEndSceneState[0] || !CL_Main_IsSystemLinkGame() || NetConnection::IsLocal(&clcData->serverConnection)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 2916, ASSERT_TYPE_ASSERT, "(CL_MainMP_ShouldRequestMatchRules( localClientNum, clcData ))", (const char *)&queryFormat, "CL_MainMP_ShouldRequestMatchRules( localClientNum, clcData )") )
    __debugbreak();
  return 1;
}

/*
==============
CL_MainMP_ParseStatsRequest
==============
*/
__int64 CL_MainMP_ParseStatsRequest(msg_t *msg)
{
  __int64 result; 
  __int64 v3; 

  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 2989, ASSERT_TYPE_ASSERT, "(msg)", (const char *)&queryFormat, "msg") )
    __debugbreak();
  result = MSG_ReadBits(msg, 0x36u);
  v3 = result;
  if ( result < 0 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned __int64 __cdecl truncate_cast_impl<unsigned __int64,__int64>(__int64)", "unsigned", result, "signed", result) )
      __debugbreak();
    return v3;
  }
  return result;
}

/*
==============
CL_MainMP_Pause
==============
*/
void CL_MainMP_Pause(LocalClientNum_t localClientNum, bool notifyLUI, CLPauseReason pauseReason)
{
  const dvar_t *v3; 
  bool v7; 
  bool v8; 
  const PartyData *GameParty; 
  CLPauseReason v10; 
  int result; 

  v3 = DVARINT_reloading;
  if ( DVARINT_reloading )
  {
    Dvar_CheckFrontendServerThread(DVARINT_reloading);
    if ( v3->current.integer != 4 && Com_GameMode_SupportsFeature(WEAPON_SCOPE_TOGGLE_ON|WEAPON_FIRING|0x80) )
    {
      v7 = 0;
      if ( CG_GetOmnvar_IntegerByName(localClientNum, "post_game_state", &result, NULL, NULL) )
        v7 = result != 0;
      v8 = CL_GetLocalClientGameConnectionState(localClientNum) < CA_ACTIVE;
      if ( !v7 && !v8 )
      {
        if ( endgame_called )
        {
          if ( !endgame_called->current.integer )
          {
            if ( allow_local_host_pause )
            {
              if ( allow_local_host_pause->current.integer )
              {
                GameParty = Live_GetGameParty();
                if ( Party_AreAllMembersLocal(GameParty) )
                {
                  if ( pauseReason == 32 )
                  {
                    v10 = CL_Pause_GetPauseReason();
                    CL_Pause_SetPauseReason((CLPauseReason)(v10 | 0x20));
                  }
                  else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 6088, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled pause reason.") )
                  {
                    __debugbreak();
                  }
                  if ( notifyLUI )
                    LUI_CoD_Pause(localClientNum);
                }
              }
            }
          }
        }
      }
    }
  }
}

/*
==============
CL_MainMP_PreloadMap
==============
*/
void CL_MainMP_PreloadMap(const char *mapname, const char *gametype)
{
  int MapIndex; 
  int MapSource; 
  PartyData *PartyData; 
  int ControllerFromClient; 

  if ( !mapname && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 4895, ASSERT_TYPE_ASSERT, "(mapname)", (const char *)&queryFormat, "mapname") )
    __debugbreak();
  if ( !gametype && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 4896, ASSERT_TYPE_ASSERT, "(gametype)", (const char *)&queryFormat, "gametype") )
    __debugbreak();
  if ( Com_IsAnyLocalServerRunning() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 4897, ASSERT_TYPE_ASSERT, "(!Com_IsAnyLocalServerRunning())", (const char *)&queryFormat, "!Com_IsAnyLocalServerRunning()") )
    __debugbreak();
  if ( Com_IsAnyLocalServerStarting() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 4898, ASSERT_TYPE_ASSERT, "(!Com_IsAnyLocalServerStarting())", (const char *)&queryFormat, "!Com_IsAnyLocalServerStarting()") )
    __debugbreak();
  if ( Com_FrontEndScene_IsActive() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 4899, ASSERT_TYPE_ASSERT, "(!Com_FrontEndScene_IsActive())", "%s\n\tThis function performs unsupported operations for the front-end scene", "!Com_FrontEndScene_IsActive()") )
    __debugbreak();
  MapIndex = Live_GetMapIndex(mapname);
  MapSource = Live_GetMapSource(MapIndex);
  if ( !Content_DoWeHaveContentPack(MapSource) )
  {
    PartyData = Lobby_GetPartyData();
    Party_StopParty(PartyData);
    UI_MissingMapError();
  }
  CL_MainMP_BeginMapLoading(mapname);
  UI_SetMap(mapname, gametype);
  ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
  Blackbox_SendSession(ControllerFromClient, 0, mapname, gametype);
  BB_RecordSystemMemoryFootprint(mapname, 0);
}

/*
==============
CL_MainMP_PrepareClientsForServerRestart
==============
*/
void CL_MainMP_PrepareClientsForServerRestart(const char *mapName, const char *gameType)
{
  LocalClientNum_t v4; 
  connstate_t *p_connectionState; 
  __int64 v6; 
  __int64 v7; 
  bool v8; 
  netsrc_t LocalNetIDFromLocalClientNum; 
  __int64 v10; 
  __int64 v11; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 3230, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( !Com_IsAnyLocalServerRunning() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 3231, ASSERT_TYPE_ASSERT, "(Com_IsAnyLocalServerRunning())", (const char *)&queryFormat, "Com_IsAnyLocalServerRunning()") )
    __debugbreak();
  v4 = LOCAL_CLIENT_0;
  if ( SLODWORD(cl_maxLocalClients) > 0 )
  {
    p_connectionState = &clientUIActives[0].connectionState;
    do
    {
      Com_Printf(14, "Setting state to CA_CONNECTED in CL_MainMP_PrepareForMapRestart (%i)\n", (unsigned int)v4);
      Cbuf_AddText(v4, "uploadStats\n");
      if ( (unsigned int)v4 >= LOCAL_CLIENT_COUNT )
      {
        LODWORD(v11) = 2;
        LODWORD(v10) = v4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 195, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v10, v11) )
          __debugbreak();
      }
      Com_Printf(14, "CL_SetLocalConnectionState %i -> %i.\n", *(unsigned int *)p_connectionState, 3i64);
      *p_connectionState = CA_CONNECTED;
      if ( !mapName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 5019, ASSERT_TYPE_ASSERT, "(pszMapName)", (const char *)&queryFormat, "pszMapName") )
        __debugbreak();
      if ( !*mapName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 5020, ASSERT_TYPE_ASSERT, "(pszMapName[0])", (const char *)&queryFormat, "pszMapName[0]") )
        __debugbreak();
      if ( !gameType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 5021, ASSERT_TYPE_ASSERT, "(pszGametype)", (const char *)&queryFormat, "pszGametype") )
        __debugbreak();
      if ( !*gameType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 5022, ASSERT_TYPE_ASSERT, "(pszGametype[0])", (const char *)&queryFormat, "pszGametype[0]") )
        __debugbreak();
      Com_Printf(14, "Server changing map %s, gametype %s\n", mapName, gameType);
      v7 = 0i64;
      cl_serverLoadingMap = 1;
      v8 = 1;
      do
      {
        if ( !v8 )
        {
          j___report_rangecheckfailure(v6);
          JUMPOUT(0x141A9C557i64);
        }
        cl_waitingOnServerToLoadMap[v7] = 0;
        v8 = (unsigned __int64)++v7 < 2;
      }
      while ( v7 < 2 );
      if ( !Com_IsAnyLocalServerRunning() )
      {
        g_waitingForServer = 1;
        UI_SetMap((const char *)&queryFormat.fmt + 3, (const char *)&queryFormat.fmt + 3);
        NetConstStrings_Clear();
        R_SyncRenderThread();
        CL_MainMP_PreloadMap(mapName, gameType);
        CL_MainMP_InitMapLoad(mapName, gameType, 1);
      }
      CL_Screen_Update();
      R_SyncRenderThread();
      LocalNetIDFromLocalClientNum = NET_GetLocalNetIDFromLocalClientNum(v4);
      NET_FlushLoopback(LocalNetIDFromLocalClientNum);
      ++v4;
      p_connectionState += 110;
    }
    while ( v4 < SLODWORD(cl_maxLocalClients) );
  }
}

/*
==============
CL_MainMP_PrepareForMapRestart
==============
*/
void CL_MainMP_PrepareForMapRestart(LocalClientNum_t localClientNum, const char *mapName, const char *gameType)
{
  __int64 v3; 
  __int64 v6; 
  __int64 v7; 
  bool v8; 
  netsrc_t LocalNetIDFromLocalClientNum; 

  v3 = localClientNum;
  Com_Printf(14, "Setting state to CA_CONNECTED in CL_MainMP_PrepareForMapRestart (%i)\n", (unsigned int)localClientNum);
  Cbuf_AddText((LocalClientNum_t)v3, "uploadStats\n");
  if ( (unsigned int)v3 >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 195, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v3, 2) )
    __debugbreak();
  Com_Printf(14, "CL_SetLocalConnectionState %i -> %i.\n", (unsigned int)clientUIActives[v3].connectionState, 3i64);
  clientUIActives[v3].connectionState = CA_CONNECTED;
  if ( !mapName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 5019, ASSERT_TYPE_ASSERT, "(pszMapName)", (const char *)&queryFormat, "pszMapName") )
    __debugbreak();
  if ( !*mapName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 5020, ASSERT_TYPE_ASSERT, "(pszMapName[0])", (const char *)&queryFormat, "pszMapName[0]") )
    __debugbreak();
  if ( !gameType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 5021, ASSERT_TYPE_ASSERT, "(pszGametype)", (const char *)&queryFormat, "pszGametype") )
    __debugbreak();
  if ( !*gameType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 5022, ASSERT_TYPE_ASSERT, "(pszGametype[0])", (const char *)&queryFormat, "pszGametype[0]") )
    __debugbreak();
  Com_Printf(14, "Server changing map %s, gametype %s\n", mapName, gameType);
  v7 = 0i64;
  cl_serverLoadingMap = 1;
  v8 = 1;
  do
  {
    if ( !v8 )
    {
      j___report_rangecheckfailure(v6);
      JUMPOUT(0x141A9C878i64);
    }
    cl_waitingOnServerToLoadMap[v7] = 0;
    v8 = (unsigned __int64)++v7 < 2;
  }
  while ( v7 < 2 );
  if ( !Com_IsAnyLocalServerRunning() )
  {
    g_waitingForServer = 1;
    UI_SetMap((const char *)&queryFormat.fmt + 3, (const char *)&queryFormat.fmt + 3);
    NetConstStrings_Clear();
    R_SyncRenderThread();
    CL_MainMP_PreloadMap(mapName, gameType);
    CL_MainMP_InitMapLoad(mapName, gameType, 1);
  }
  CL_Screen_Update();
  R_SyncRenderThread();
  LocalNetIDFromLocalClientNum = NET_GetLocalNetIDFromLocalClientNum((const LocalClientNum_t)v3);
  NET_FlushLoopback(LocalNetIDFromLocalClientNum);
}

/*
==============
CL_MainMP_RegisterDvars
==============
*/

void __fastcall CL_MainMP_RegisterDvars(__int64 a1, __int64 a2, double _XMM2_8)
{
  const dvar_t *v23; 
  const dvar_t *v27; 
  const dvar_t *v31; 
  const dvar_t *v40; 
  const dvar_t *v44; 
  const dvar_t *v48; 
  const dvar_t *v63; 
  const dvar_t *v67; 
  const dvar_t *v73; 
  const dvar_t *v77; 
  const dvar_t *v81; 
  const dvar_t *v85; 
  const dvar_t *v95; 
  const dvar_t *v99; 
  const dvar_t *v103; 
  const dvar_t *v110; 
  const dvar_t *v114; 
  const dvar_t *v118; 
  const dvar_t *v122; 
  const dvar_t *v126; 
  const dvar_t *v130; 
  const dvar_t *v134; 
  const dvar_t *v138; 
  const dvar_t *v142; 
  const dvar_t *v146; 
  const dvar_t *v150; 
  const dvar_t *v154; 
  const dvar_t *v158; 
  const dvar_t *v166; 
  const dvar_t *v170; 
  const dvar_t *v181; 
  const dvar_t *v186; 
  const dvar_t *v198; 
  const dvar_t *v203; 
  const dvar_t *v210; 
  const dvar_t *v214; 
  const dvar_t *v218; 
  const dvar_t *v228; 
  const dvar_t *v235; 
  const dvar_t *v239; 
  const dvar_t *v243; 
  const dvar_t *v247; 
  const dvar_t *v251; 
  const dvar_t *v255; 
  const dvar_t *v259; 
  const dvar_t *v263; 
  const dvar_t *v268; 
  const dvar_t *v272; 
  const dvar_t *v276; 
  const dvar_t *v283; 
  const dvar_t *v287; 
  const dvar_t *v294; 
  const dvar_t *v304; 
  const dvar_t *v311; 
  const dvar_t *v315; 
  const dvar_t *v330; 
  const dvar_t *v344; 
  const dvar_t *v358; 
  float flags; 
  float flagsa; 
  float flagsb; 
  float flagsc; 
  float flagsd; 
  float flagse; 
  float flagsf; 
  float description; 
  float descriptiona; 
  char v395; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovaps xmmword ptr [rax-78h], xmm12
    vmovaps [rsp+0E8h+var_88], xmm13
    vmovaps [rsp+0E8h+var_98], xmm14
    vmovaps [rsp+0E8h+var_A8], xmm15
  }
  DVARBOOL_cl_nodelta = Dvar_RegisterBool("NKPOPSNOQS", 0, 0, "The server does not send snapshot deltas");
  __asm
  {
    vmovss  xmm15, cs:__real@3f800000
    vmovss  xmm1, cs:__real@3e4ccccd; value
  }
  DCONST_DVARINT_cl_migrationPingTime = Dvar_RegisterInt("cl_migrationPingTime", 10, 1, 1000, 0x40004u, "how many seconds between client pings.  used to determine hosting suitability.");
  __asm
  {
    vmovaps xmm3, xmm15; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovss  xmm6, cs:__real@40000000
    vmovss  xmm9, cs:__real@3e800000
  }
  DVARFLT_cl_migrationPacketLoss = Dvar_RegisterFloat("LOPTROQTTK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "percent of migration packets to drop");
  __asm
  {
    vmovaps xmm3, xmm6; max
    vmovaps xmm1, xmm9; value
    vxorps  xmm2, xmm2, xmm2; min
  }
  v23 = Dvar_RegisterFloat("LMNLTPTQR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Multiplier to apply to the amount of free memory, for what the tile streamer can use");
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm9; value
  }
  DVARFLT_cl_transientWorldMemoryFreeMulMP = v23;
  v27 = Dvar_RegisterFloat("NRMKPMKOQP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Multiplier to apply to the amount of free memory, for what the tile streamer can use");
  __asm
  {
    vmovss  xmm1, cs:__real@3ecccccd; value
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DVARFLT_cl_transientWorldMemoryFreeMulCP = v27;
  v31 = Dvar_RegisterFloat("OMPLNRSPOM", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Multiplier to apply to the amount of free memory, for what the tile streamer can use");
  __asm
  {
    vmovss  xmm1, cs:__real@3f266666; value
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DVARFLT_cl_transientWorldMemoryFreeMulBR = v31;
  DVARFLT_cl_transientWorldMemoryFreeMulBRLobby = Dvar_RegisterFloat("MROLOMMTTM", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Multiplier to apply to the amount of free memory, for what the tile streamer can use");
  DCONST_DVARINT_cl_transientWorldOverrideTileBudgetMB = Dvar_RegisterInt("cl_transientWorldOverrideTileBudgetMB", 0, 0, 0x2000, 0x40004u, "Override the tile budget for dev purposes. 0==use default calced budget");
  DCONST_DVARBOOL_cl_transientWorldIgnoreStreamHints = Dvar_RegisterBool("cl_transientWorldIgnoreStreamHints", 0, 0x40004u, "Ignore stream hint positions and only use the primary view positions for streaming (for A/B tests)");
  DCONST_DVARINT_cl_transientWorldMemoryFrontendEstimateMB = Dvar_RegisterInt("cl_transientWorldMemoryFrontendEstimateMB", 200, 0, 0x2000, 0x40004u, "Estimated size of the back-to-frontend memory we need when devmapping");
  __asm
  {
    vmovss  xmm6, cs:__real@48f42400
    vmovss  xmm12, cs:__real@bf800000
    vmovss  xmm1, cs:__real@458ca000; value
  }
  DCONST_DVARBOOL_cl_transientWorldVisibleRadiusOverride = Dvar_RegisterBool("cl_transientWorldVisibleRadiusOverride", 0, 0x40004u, "Use override dvars cl_transientWorldVisibleRadiusLvl0 and cl_transientWorldVisibleRadiusLvl1 for transient visibility radius");
  __asm
  {
    vmovaps xmm3, xmm6; max
    vmovaps xmm2, xmm12; min
  }
  v40 = Dvar_RegisterFloat("cl_transientWorldVisibleRadiusLvl0", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Transient World LOD0 visible radius");
  __asm { vmovss  xmm1, cs:__real@46c35000; value }
  DCONST_DVARFLT_cl_transientWorldVisibleRadiusLvl0 = v40;
  __asm
  {
    vmovaps xmm3, xmm6; max
    vmovaps xmm2, xmm12; min
  }
  v44 = Dvar_RegisterFloat("cl_transientWorldVisibleRadiusLvl1", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Transient World LOD1 visible radius");
  __asm { vmovss  xmm1, cs:__real@44bb8000; value }
  DCONST_DVARFLT_cl_transientWorldVisibleRadiusLvl1 = v44;
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v48 = Dvar_RegisterFloat("cl_transientWorldVisibleFacingDistAdd", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Move visibility circle in the direction the player is facing by this amount");
  __asm
  {
    vmovss  xmm14, cs:__real@42c80000
    vmovss  xmm13, cs:__real@3a83126f
    vmovss  xmm1, cs:__real@3f400000; value
  }
  DCONST_DVARFLT_cl_transientWorldVisibleFacingDistAdd = v48;
  __asm
  {
    vmovaps xmm3, xmm14; max
    vmovaps xmm2, xmm13; min
  }
  DCONST_DVARFLT_cl_transientWorldVisibleSplit2Multiplier = Dvar_RegisterFloat("cl_transientWorldVisibleSplit2Multiplier", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Transient World 2-player splitscreen visible radius multiplier");
  __asm
  {
    vmovaps xmm3, xmm14; max
    vmovaps xmm2, xmm13; min
    vmovaps xmm1, xmm15; value
  }
  DCONST_DVARFLT_cl_transientWorldVisibleZMultiplierLvl0 = Dvar_RegisterFloat("cl_transientWorldVisibleZMultiplierLvl0", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Transient World Z Multiplier for visibility distances - Lod0");
  __asm
  {
    vmovaps xmm3, xmm14; max
    vmovaps xmm2, xmm13; min
    vmovaps xmm1, xmm15; value
  }
  DCONST_DVARFLT_cl_transientWorldVisibleZMultiplierLvl1 = Dvar_RegisterFloat("cl_transientWorldVisibleZMultiplierLvl1", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Transient World Z Multiplier for visibility distances - Lod1");
  __asm { vmovss  xmm1, cs:__real@3f0ccccd; value }
  DVARBOOL_cl_transientWorldVisibleFacingCircleSweep = Dvar_RegisterBool("MOSOTQRPLP", 0, 0, "Push a circle in the facing direction. If disabled, we'll use cl_transientWorldVisibleFacingDistAdd, as part of the LOD0 and LOD1 radius.");
  __asm
  {
    vmovaps xmm3, xmm14; max
    vmovaps xmm2, xmm13; min
  }
  v63 = Dvar_RegisterFloat("cl_transientWorldStreamSyncRadiusMulLv0", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Transient World StreamSync Radius Multiplier LOD0");
  __asm { vmovss  xmm1, cs:__real@3e4ccccd; value }
  DCONST_DVARFLT_cl_transientWorldStreamSyncRadiusMulLv0 = v63;
  __asm
  {
    vmovaps xmm3, xmm14; max
    vmovaps xmm2, xmm13; min
  }
  v67 = Dvar_RegisterFloat("cl_transientWorldStreamSyncRadiusMulLv1", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Transient World StreamSync Radius Multiplier LOD1");
  __asm
  {
    vmovss  xmm15, cs:__real@49742400
    vmovss  xmm10, cs:__real@38d1b717
    vmovss  xmm1, cs:__real@459c4000; value
  }
  DCONST_DVARFLT_cl_transientWorldStreamSyncRadiusMulLv1 = v67;
  __asm
  {
    vmovaps xmm3, xmm15; max
    vmovaps xmm2, xmm10; min
  }
  v73 = Dvar_RegisterFloat("POKRTSLMN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Z distance over which we'll start to add to our distance to 'push out' LOD0 tiles");
  __asm { vmovss  xmm1, cs:__real@461c4000; value }
  DVARFLT_cl_transientWorldLoadZLOD0AdjustStartZ = v73;
  __asm
  {
    vmovaps xmm3, xmm15; max
    vmovaps xmm2, xmm10; min
  }
  v77 = Dvar_RegisterFloat("NPKRMNSKRM", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Z distance we'll max out the 'MaxAddition' contribution here.");
  __asm { vmovss  xmm1, cs:__real@461c4000; value }
  DVARFLT_cl_transientWorldLoadZLOD0AdjustEndZ = v77;
  __asm
  {
    vmovaps xmm3, xmm15; max
    vmovaps xmm2, xmm10; min
  }
  v81 = Dvar_RegisterFloat("MMSRMPTSNP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Linear distance away that we'll start to apply an addition for LOD0 tiles");
  __asm { vmovss  xmm1, cs:__real@469c4000; value }
  DVARFLT_cl_transientWorldLoadZLOD0AdjustStartDist = v81;
  __asm
  {
    vmovaps xmm3, xmm15; max
    vmovaps xmm2, xmm10; min
  }
  v85 = Dvar_RegisterFloat("MNRSPPTRRM", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Linear distance away that we'll max out the 'MaxAddition' contribution here.");
  __asm { vmovss  xmm1, cs:__real@48742400; value }
  DVARFLT_cl_transientWorldLoadZLOD0AdjustEndDist = v85;
  __asm
  {
    vmovaps xmm3, xmm15; max
    vmovaps xmm2, xmm10; min
  }
  DVARFLT_cl_transientWorldLoadZLOD0AdjustMaxAddition = Dvar_RegisterFloat("MRKPLKOPNR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Max addition we'll apply to load decision distances for LOD0 tiles for 'cl_transientWorldLoadZ'.");
  __asm
  {
    vmovaps xmm3, xmm14; max
    vmovaps xmm2, xmm13; min
    vmovaps xmm1, xmm9; value
  }
  DCONST_DVARFLT_cl_transientWorldLoadXYMultiplierAddLOD1 = Dvar_RegisterFloat("cl_transientWorldLoadXYMultiplierAddLOD1", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Transient World XY Multiplier for loading - Lod1. Adds mul*sqxy to the dists.");
  __asm
  {
    vmovaps xmm3, xmm15; max
    vmovss  xmm1, cs:__real@46c35000; value
    vxorps  xmm2, xmm2, xmm2; min
  }
  v95 = Dvar_RegisterFloat("cl_transientWorldLoadXYLOD1FalloffBegin", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Distance to start making LOD1 priority loading fall off");
  __asm { vmovss  xmm1, cs:__real@46ea6000; value }
  DCONST_DVARFLT_cl_transientWorldLoadXYLOD1FalloffBegin = v95;
  __asm
  {
    vmovaps xmm3, xmm15; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v99 = Dvar_RegisterFloat("cl_transientWorldLoadXYLOD1FalloffBeginBR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Distance to start making LOD1 priority loading fall off. BR only.");
  __asm { vmovss  xmm1, cs:__real@47927c00; value }
  DCONST_DVARFLT_cl_transientWorldLoadXYLOD1FalloffBeginBR = v99;
  __asm
  {
    vmovaps xmm3, xmm15; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v103 = Dvar_RegisterFloat("cl_transientWorldLoadXYLOD1FalloffBeginBRLobby", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Distance to start making LOD1 priority loading fall off. BR only in lobby.");
  __asm { vmovss  xmm1, cs:__real@43480000; value }
  DCONST_DVARFLT_cl_transientWorldLoadXYLOD1FalloffBeginBRLobby = v103;
  __asm
  {
    vmovaps xmm3, xmm15; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DCONST_DVARFLT_cl_transientWorldLoadXYLOD1FalloffMultiplier = Dvar_RegisterFloat("cl_transientWorldLoadXYLOD1FalloffMultiplier", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Multiplier to apply after the cl_transientWorldLoadXYLOD1FalloffBegin distance");
  __asm { vmovss  xmm1, cs:__real@47927c00; value }
  DVARBOOL_cl_transientWorldLoadXYLOD1FalloffPlaneEnabled = Dvar_RegisterBool("LPKNMLSRN", 1, 0, "Increase LOD1 falloff if we're in the BR plane ride, or hinting for the ride");
  __asm
  {
    vmovaps xmm3, xmm15; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v110 = Dvar_RegisterFloat("NKMRKQMOSN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Distance to start making LOD1 priority loading fall off. BR only for plane.");
  __asm { vmovss  xmm1, cs:__real@468ca000; value }
  DVARFLT_cl_transientWorldLoadXYLOD1FalloffBeginBRPlane = v110;
  __asm
  {
    vmovaps xmm3, xmm15; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v114 = Dvar_RegisterFloat("MQRNKOQNOK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "If over this height in Z pos, we're in the BR plane");
  __asm
  {
    vmovss  xmm3, cs:__real@3f800000; max
    vmovss  xmm1, cs:__real@3f350529; value
  }
  DVARFLT_cl_transientWorldBRPlaneZThreshold = v114;
  __asm { vmovaps xmm2, xmm12; min }
  v118 = Dvar_RegisterFloat("cl_transientWorldLoadXYLOD1BoostInAirDotStart", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Allow a LOD1 boost of priorities when we're in the air, ramp up starting at this FOV");
  __asm
  {
    vmovss  xmm3, cs:__real@3f800000; max
    vmovss  xmm1, cs:__real@3f51b3d0; value
  }
  DCONST_DVARFLT_cl_transientWorldLoadXYLOD1BoostInAirDotStart = v118;
  __asm { vmovaps xmm2, xmm12; min }
  v122 = Dvar_RegisterFloat("cl_transientWorldLoadXYLOD1BoostInAirDotEnd", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Allow a LOD1 boost of priorities when we're in the air, ramp up finishing at this FOV");
  __asm { vmovss  xmm1, cs:__real@451c4000; value }
  DCONST_DVARFLT_cl_transientWorldLoadXYLOD1BoostInAirDotEnd = v122;
  __asm
  {
    vmovaps xmm3, xmm15; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v126 = Dvar_RegisterFloat("cl_transientWorldLoadXYLOD1BoostInAirNearDistStart", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Allow a LOD1 boost of priorities when we're in the air, ramp starting near the camera at this distance");
  __asm { vmovss  xmm1, cs:__real@459c4000; value }
  DCONST_DVARFLT_cl_transientWorldLoadXYLOD1BoostInAirNearDistStart = v126;
  __asm
  {
    vmovaps xmm3, xmm15; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v130 = Dvar_RegisterFloat("cl_transientWorldLoadXYLOD1BoostInAirNearDistEnd", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Allow a LOD1 boost of priorities when we're in the air, ramp finishing near the camera at this distance");
  __asm { vmovss  xmm1, cs:__real@46ea6000; value }
  DCONST_DVARFLT_cl_transientWorldLoadXYLOD1BoostInAirNearDistEnd = v130;
  __asm
  {
    vmovaps xmm3, xmm15; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v134 = Dvar_RegisterFloat("cl_transientWorldLoadXYLOD1BoostInAirFarDistStart", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Allow a LOD1 boost of priorities when we're in the air, ramp down starting away the camera at this distance");
  __asm { vmovss  xmm1, cs:__real@47435000; value }
  DCONST_DVARFLT_cl_transientWorldLoadXYLOD1BoostInAirFarDistStart = v134;
  __asm
  {
    vmovaps xmm3, xmm15; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v138 = Dvar_RegisterFloat("cl_transientWorldLoadXYLOD1BoostInAirFarDistEnd", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Allow a LOD1 boost of priorities when we're in the air, ramp down finishing away the camera at this distance");
  __asm { vmovss  xmm1, cs:__real@44fa0000; value }
  DCONST_DVARFLT_cl_transientWorldLoadXYLOD1BoostInAirFarDistEnd = v138;
  __asm
  {
    vmovaps xmm3, xmm15; max
    vmovaps xmm2, xmm10; min
  }
  v142 = Dvar_RegisterFloat("cl_transientWorldLoadXYLOD1BoostInAirZStart", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Z pos we'll start to boost LOD1 at");
  __asm { vmovss  xmm1, cs:__real@45fa0000; value }
  DCONST_DVARFLT_cl_transientWorldLoadXYLOD1BoostInAirZStart = v142;
  __asm
  {
    vmovaps xmm3, xmm15; max
    vmovaps xmm2, xmm10; min
  }
  v146 = Dvar_RegisterFloat("cl_transientWorldLoadXYLOD1BoostInAirZEnd", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Z pos we'll max out at boosting LOD1");
  __asm
  {
    vmovss  xmm3, cs:__real@41200000; max
    vmovss  xmm1, cs:__real@3dcccccd; value
  }
  DCONST_DVARFLT_cl_transientWorldLoadXYLOD1BoostInAirZEnd = v146;
  __asm { vmovaps xmm2, xmm10; min }
  v150 = Dvar_RegisterFloat("cl_transientWorldLoadXYLOD1BoostInAirMultiplierStart", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Multiplier to apply to LOD1 distances when in the range, ramp starting as the camera faces down");
  __asm { vmovss  xmm3, cs:__real@3f800000; max }
  DCONST_DVARFLT_cl_transientWorldLoadXYLOD1BoostInAirMultiplierStart = v150;
  __asm
  {
    vmovaps xmm2, xmm12; min
    vmovaps xmm1, xmm12; value
  }
  v154 = Dvar_RegisterFloat("cl_transientWorldLoadXYLOD1BoostInAirMultiplierStartViewZ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Multiplier to apply to LOD1 distances ramp starting as the camera faces down angle");
  __asm
  {
    vmovss  xmm3, cs:__real@41200000; max
    vmovss  xmm1, cs:__real@3f4ccccd; value
  }
  DCONST_DVARFLT_cl_transientWorldLoadXYLOD1BoostInAirMultiplierStartViewZ = v154;
  __asm { vmovaps xmm2, xmm10; min }
  v158 = Dvar_RegisterFloat("cl_transientWorldLoadXYLOD1BoostInAirMultiplierFinish", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Multiplier to apply to LOD1 distances when in the range, ramp finishing as the camera faces down");
  __asm
  {
    vmovss  xmm3, cs:__real@3f800000; max
    vmovss  xmm1, cs:__real@bf350529; value
  }
  DCONST_DVARFLT_cl_transientWorldLoadXYLOD1BoostInAirMultiplierFinish = v158;
  __asm { vmovaps xmm2, xmm12; min }
  DCONST_DVARFLT_cl_transientWorldLoadXYLOD1BoostInAirMultiplierFinishViewZ = Dvar_RegisterFloat("cl_transientWorldLoadXYLOD1BoostInAirMultiplierFinishViewZ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Multiplier to apply to LOD1 distances ramp finishing as the camera faces dow angle");
  __asm { vmovss  xmm6, cs:__real@461c4000 }
  DVARBOOL_cl_transientWorldLoadXYLOD1BoostInAirBRMethodEnabled = Dvar_RegisterBool("NOQRQOQSKS", 1, 0, "Enable alternate BR method of LOD1 boost in air");
  __asm
  {
    vmovaps xmm3, xmm15; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm6; value
  }
  v166 = Dvar_RegisterFloat("NNOLSPSORR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Max distance to subtract for the LOD1 boost, when in BR.");
  __asm
  {
    vmovss  xmm1, cs:__real@44fa0000; value
    vmovaps xmm3, xmm15; max
    vmovaps xmm2, xmm10; min
  }
  DVARFLT_cl_transientWorldLoadXYLOD1BoostInAirBRDistance = v166;
  v170 = Dvar_RegisterFloat("cl_transientWorldVisibleLOD1BoostInAirZStart", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Z pos we'll start to boost LOD1 at");
  __asm
  {
    vmovss  xmm1, cs:__real@45fa0000; value
    vmovaps xmm3, xmm15; max
    vmovaps xmm2, xmm10; min
  }
  DCONST_DVARFLT_cl_transientWorldVisibleLOD1BoostInAirZStart = v170;
  DCONST_DVARFLT_cl_transientWorldVisibleLOD1BoostInAirZEnd = Dvar_RegisterFloat("cl_transientWorldVisibleLOD1BoostInAirZEnd", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Z pos we'll max out at boosting LOD1");
  __asm
  {
    vmovaps xmm3, xmm15; max
    vmovaps xmm2, xmm10; min
    vmovaps xmm1, xmm6; value
  }
  DCONST_DVARFLT_cl_transientWorldVisibleLOD1BoostInAirMaxAdd = Dvar_RegisterFloat("cl_transientWorldVisibleLOD1BoostInAirMaxAdd", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Max visibility addition when we're at the highest Z point");
  DCONST_DVARBOOL_cl_transientWorldLoadDistEnabled = Dvar_RegisterBool("cl_transientWorldLoadDistEnabled", 1, 0x40004u, "Enables limiting load distance based on cutoffs specified in gsc");
  __asm
  {
    vmovaps xmm2, xmm12; min
    vmovaps xmm3, xmm15; max
    vxorps  xmm1, xmm1, xmm1; value
    vxorps  xmm12, xmm12, xmm12
  }
  v181 = Dvar_RegisterFloat("cl_transientWorldLoadDistForceValue", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Force load distance for all stream positions for testing, or 0 for default");
  __asm
  {
    vmovss  xmm10, cs:__real@47c35000
    vmovss  xmm3, cs:__real@469c4000; z
  }
  DCONST_DVARFLT_cl_transientWorldLoadDistForceValue = v181;
  __asm
  {
    vmovss  dword ptr [rsp+0E8h+description], xmm10
    vxorps  xmm2, xmm2, xmm2; y
    vxorps  xmm1, xmm1, xmm1; x
    vmovss  [rsp+0E8h+flags], xmm12
  }
  v186 = Dvar_RegisterVec3("cl_transientWorldLoadDefaultPos", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flags, description, 0x40004u, "Default position to start loading transients when not provided any streaming info yet");
  __asm
  {
    vmovss  xmm9, cs:__real@447a0000
    vmovss  xmm1, cs:__real@3f400000; value
  }
  DCONST_DVARVEC3_cl_transientWorldLoadDefaultPos = v186;
  __asm
  {
    vmovaps xmm3, xmm9; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DCONST_DVARFLT_cl_transientWorldOnTopOfHighLODFactor = Dvar_RegisterFloat("cl_transientWorldOnTopOfHighLODFactor", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "When on top of a grid square, how much to scale out the distance to deprioritize the load");
  __asm
  {
    vmovaps xmm3, xmm14; max
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
    vmovss  xmm11, cs:__real@44fa0000
  }
  DVARFLT_cl_transientWorldSwitchDelayLOD0Min = Dvar_RegisterFloat("NQRKPOPLLR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Seconds of delay switching to LOD0, to allow streamer to load mips");
  __asm
  {
    vmovaps xmm1, xmm11; value
    vmovaps xmm3, xmm10; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v198 = Dvar_RegisterFloat("TMMPLPSKM", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Distance at which we use the min delay");
  __asm
  {
    vmovss  xmm8, cs:__real@40800000
    vmovaps xmm1, xmm8; value
    vmovaps xmm3, xmm14; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DVARFLT_cl_transientWorldSwitchDelayLOD0MinDistance = v198;
  v203 = Dvar_RegisterFloat("MPSOOTLNOR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Seconds of delay switching to LOD0, to allow streamer to load mips");
  __asm { vmovss  xmm1, cs:__real@459c4000; value }
  DVARFLT_cl_transientWorldSwitchDelayLOD0Max = v203;
  __asm
  {
    vmovaps xmm3, xmm10; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DVARFLT_cl_transientWorldSwitchDelayLOD0MaxDistance = Dvar_RegisterFloat("NNSKQOMQMK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Distance at which we use the max delay");
  __asm
  {
    vmovaps xmm3, xmm14; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm8; value
  }
  v210 = Dvar_RegisterFloat("NKNKQNTPQK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Seconds of delay switching to LOD1, to allow streamer to load mips");
  __asm
  {
    vmovaps xmm3, xmm10; max
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  DVARFLT_cl_transientWorldSwitchDelayLOD1Min = v210;
  v214 = Dvar_RegisterFloat("MNTTNLMOKR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Distance at which we use the min delay");
  __asm
  {
    vmovaps xmm3, xmm14; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm8; value
  }
  DVARFLT_cl_transientWorldSwitchDelayLOD1MinDistance = v214;
  v218 = Dvar_RegisterFloat("NSLRMNQORK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Seconds of delay switching to LOD1, to allow streamer to load mips");
  __asm
  {
    vmovaps xmm3, xmm10; max
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  DVARFLT_cl_transientWorldSwitchDelayLOD1Max = v218;
  DVARFLT_cl_transientWorldSwitchDelayLOD1MaxDistance = Dvar_RegisterFloat("NNOPQMLNLN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Distance at which we use the max delay");
  __asm
  {
    vmovaps xmm3, xmm14; max
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  DVARFLT_cl_transientWorldSwitchDelayZoomLOD0Min = Dvar_RegisterFloat("TQMSKKKTS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Seconds of delay switching to LOD0, to allow streamer to load mips (when zoomed)");
  __asm
  {
    vmovss  xmm1, cs:__real@459c4000; value
    vmovaps xmm3, xmm10; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v228 = Dvar_RegisterFloat("NSLPPROQQT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Distance at which we use the min delay (when zoomed)");
  __asm
  {
    vmovaps xmm3, xmm14; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm8; value
  }
  DVARFLT_cl_transientWorldSwitchDelayZoomLOD0MinDistance = v228;
  DVARFLT_cl_transientWorldSwitchDelayZoomLOD0Max = Dvar_RegisterFloat("MOPTLNSSTM", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Seconds of delay switching to LOD0, to allow streamer to load mips (when zoomed)");
  __asm
  {
    vmovaps xmm3, xmm10; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm6; value
  }
  v235 = Dvar_RegisterFloat("NRQNRRPPRT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Distance at which we use the max delay (when zoomed)");
  __asm { vmovss  xmm1, cs:__real@3e2b020c; value }
  DVARFLT_cl_transientWorldSwitchDelayZoomLOD0MaxDistance = v235;
  __asm
  {
    vmovaps xmm3, xmm14; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v239 = Dvar_RegisterFloat("NQTORMMOPP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Seconds of delay switching to LOD1, to allow streamer to load mips (when zoomed)");
  __asm
  {
    vmovaps xmm3, xmm10; max
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  DVARFLT_cl_transientWorldSwitchDelayZoomLOD1Min = v239;
  v243 = Dvar_RegisterFloat("LMQOSKPSKS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Distance at which we use the min delay (when zoomed)");
  __asm
  {
    vmovss  xmm1, cs:__real@3e2b020c; value
    vmovaps xmm3, xmm14; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DVARFLT_cl_transientWorldSwitchDelayZoomLOD1MinDistance = v243;
  v247 = Dvar_RegisterFloat("MTKSLMPPOP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Seconds of delay switching to LOD1, to allow streamer to load mips (when zoomed)");
  __asm
  {
    vmovaps xmm3, xmm10; max
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  DVARFLT_cl_transientWorldSwitchDelayZoomLOD1Max = v247;
  v251 = Dvar_RegisterFloat("MPKQTRSQOQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Distance at which we use the max delay (when zoomed)");
  __asm { vmovss  xmm1, cs:__real@41800000; value }
  DVARFLT_cl_transientWorldSwitchDelayZoomLOD1MaxDistance = v251;
  __asm
  {
    vmovaps xmm3, xmm14; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v255 = Dvar_RegisterFloat("NPLKRKQTLQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Switch delay to use when moving from a high detail lod to a lower detail one. e.g. LOD0->LOD1");
  __asm
  {
    vmovss  xmm3, cs:__real@3f800000; max
    vmovss  xmm1, cs:__real@3d4ccccd; value
  }
  DVARFLT_cl_transientWorldSwitchDelayLowerLod = v255;
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  v259 = Dvar_RegisterFloat("NLQKKTOKOR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "ADS fraction of when to begin loading higher quality Proxy LODs, should be <= cl_transientWorldZoomCutoffVisibility");
  __asm
  {
    vmovss  xmm3, cs:__real@3f800000; max
    vmovss  xmm1, cs:__real@3f000000; value
  }
  DVARFLT_cl_transientWorldZoomCutoffLoad = v259;
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  v263 = Dvar_RegisterFloat("NPTSPKORSN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "ADS fraction of when to begin toggling visibility of higher quality Proxy LODs, should be >= cl_transientWorldZoomCutoffLoad");
  __asm
  {
    vmovss  xmm7, cs:__real@42b40000
    vmovss  xmm1, cs:__real@41b80000; value
  }
  DVARFLT_cl_transientWorldZoomCutoffVisibility = v263;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v268 = Dvar_RegisterFloat("NOTLLMMTSK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Determines which sniper scopes will make zoomed tiles visible (scope must have fov lower or equal to this value)");
  __asm { vmovss  xmm1, cs:__real@41b80000; value }
  DVARFLT_cl_transientWorldZoomVisibilityFovCutoff = v268;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v272 = Dvar_RegisterFloat("MRNKMRQMSO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Determines which sniper scopes will make zoomed tiles load (scope must have fov lower or equal to this value, this should be lower than visibility cutoff.)");
  __asm { vmovss  xmm1, cs:__real@3f800000; value }
  DVARFLT_cl_transientWorldZoomLoadFovCutoff = v272;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v276 = Dvar_RegisterFloat("LPLLQNKMRO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Horizontal padding around frustum to make zoomed tiles visible");
  __asm { vmovss  xmm1, cs:__real@3f800000; value }
  DVARFLT_cl_transientWorldZoomFovXPadding = v276;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DVARFLT_cl_transientWorldZoomFovYPadding = Dvar_RegisterFloat("RTQRSLKPP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Vertical padding around frustum to make zoomed tiles visible");
  __asm
  {
    vmovaps xmm3, xmm15; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm6; value
  }
  v283 = Dvar_RegisterFloat("MOPQNKNST", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Distance to make LOD0 zoomed tiles visible");
  __asm { vmovss  xmm1, cs:__real@471c4000; value }
  DVARFLT_cl_transientWorldZoomLOD0Dist = v283;
  __asm
  {
    vmovaps xmm3, xmm15; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v287 = Dvar_RegisterFloat("NPKRRSQMKO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Distance to make LOD1 zoomed tiles visible");
  __asm { vmovss  xmm1, cs:__real@3c23d70a; value }
  DVARFLT_cl_transientWorldZoomLOD1Dist = v287;
  __asm
  {
    vmovaps xmm3, xmm14; max
    vmovaps xmm2, xmm13; min
  }
  DVARFLT_cl_transientWorldLoadXYMultiplierZoomLOD = Dvar_RegisterFloat("NKKQSMTRRL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Load curve for zoomed in tiles. Should be smaller than load curve for regular tiles.");
  __asm { vmovss  xmm1, cs:__real@466a6000; value }
  DVARBOOL_cl_transientWorldZoomFixedDist = Dvar_RegisterBool("PTTNNPMO", 1, 0, "When enabled, sniper scopes will used a fixed distance instead of fov scaled distance when making zoomed tiles visible.");
  __asm
  {
    vmovaps xmm3, xmm15; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v294 = Dvar_RegisterFloat("MLQSPSTNNP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Fixed distance to make LOD0 zoomed tiles visible");
  __asm { vmovss  xmm1, cs:__real@476a6000; value }
  DVARFLT_cl_transientWorldZoomLOD0FixedDist = v294;
  __asm
  {
    vmovaps xmm3, xmm15; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DVARFLT_cl_transientWorldZoomLOD1FixedDist = Dvar_RegisterFloat("NLTOOOSOQQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Fixed distance to make LOD1 zoomed tiles visible");
  __asm
  {
    vmovaps xmm3, xmm15; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm9; value
  }
  DCONST_DVARFLT_cl_transientWorldVisibleHintLvl0 = Dvar_RegisterFloat("cl_transientWorldVisibleHintLvl0", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Distance to hint LOD1 transient to streamer before we switch to it");
  __asm
  {
    vmovaps xmm3, xmm15; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm9; value
  }
  v304 = Dvar_RegisterFloat("cl_transientWorldVisibleHintLvl1", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Distance to hint LOD2 transient to streamer before we switch to it");
  __asm { vmovss  xmm1, cs:__real@44bb8000; value }
  DCONST_DVARFLT_cl_transientWorldVisibleHintLvl1 = v304;
  __asm
  {
    vmovaps xmm3, xmm15; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DVARFLT_cl_transientWorldVisibleHintLOD0Addition = Dvar_RegisterFloat("LOPMQLPKL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Distance to hint LOD0 transient TA streaming, beyond the actual rendered distance, to deal with camera rotation");
  DVARBOOL_cl_transientWorldHintPredictedStreamPositions = Dvar_RegisterBool("LQKKNSKPKQ", 1, 0, "Enables hinting transient loads based on proximity to predicted stream positions (streamRender == false)");
  DVARBOOL_cl_transientWorldStreamLookAheadEnabled = Dvar_RegisterBool("MQMQPNRSRM", 1, 0, "Enables transient stream load lookahead based on player velocity");
  __asm
  {
    vmovaps xmm3, xmm15; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm8; value
  }
  v311 = Dvar_RegisterFloat("PLQNSNTQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Time in seconds to look ahead for loadstreaming, based on velocity");
  __asm { vmovss  xmm1, cs:__real@437a0000; value }
  DVARFLT_cl_transientWorldStreamLookAheadTime = v311;
  __asm
  {
    vmovaps xmm3, xmm15; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v315 = Dvar_RegisterFloat("LOMSTRTLML", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Min distance we'll hint to stream ahead based on velocity. Less than this won't hint.");
  __asm { vmovss  xmm1, cs:__real@46435000; value }
  DVARFLT_cl_transientWorldStreamLookAheadMinDist = v315;
  __asm
  {
    vmovaps xmm3, xmm15; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DVARFLT_cl_transientWorldStreamLookAheadMaxDist = Dvar_RegisterFloat("PKNPMMMTP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Max distance we'll stream ahead based on velocity. We'll cap to this.");
  DCONST_DVARBOOL_cl_transientWorldSpilloverPriorities = Dvar_RegisterBool("cl_transientWorldSpilloverPriorities", 1, 0x40004u, "Enable the spillover priorities feature for transient tiles");
  DVARBOOL_cl_transientWorldFallingHintEnabled = Dvar_RegisterBool("STQLSKNMQ", 1, 0, "When player is parachuting with a hint below themselves, enables keeping nearby LOD0 tiles visible");
  DCONST_DVARBOOL_cl_transientWorldIgnoreTransientSkip = Dvar_RegisterBool("cl_transientWorldIgnoreTransientSkip", 0, 0x40004u, "Ignore transient skip flags and load LOD0 transients that are designed to be skipped due to submap export");
  DCONST_DVARINT_cl_transientWorldLimitVisibleLOD = Dvar_RegisterInt("cl_transientWorldLimitVisibleLOD", 0, 0, 99, 0x40004u, "Limit the LOD level to be this much or above (so 1 means display LOD 1 or 2 only)");
  DCONST_DVARINT_cl_transientWorldForceVisibleLOD = Dvar_RegisterInt("cl_transientWorldForceVisibleLOD", -1, -1, 3, 0x40004u, "Force rendered LOD level to this level. (-1=auto vis default), 0,1,2 for forcing. 3==draw no transients");
  DCONST_DVARBOOL_cl_transientWorldSoakTest = Dvar_RegisterBool("cl_transientWorldSoakTest", 0, 0x40004u, "Soak test transient world tech");
  DCONST_DVARBOOL_cl_transientWorldDebugDelay = Dvar_RegisterBool("cl_transientWorldDebugDelay", 0, 0x40004u, "Debug the cell visibility delays, delays never count down. Use alongside cl_transientWorldOverlayDrawDelayValues to tune delay values.");
  __asm
  {
    vmovss  xmm0, cs:__real@ff7fffff
    vmovss  xmm7, cs:__real@7f7fffff
  }
  DCONST_DVARBOOL_cl_transientWorldDebugHintPosActive = Dvar_RegisterBool("cl_transientWorldDebugHintPosActive", 0, 0x40004u, "Hint at a specific position : cl_transientWorldDebugHintPos");
  __asm
  {
    vmovss  dword ptr [rsp+0E8h+description], xmm7
    vxorps  xmm3, xmm3, xmm3; z
    vxorps  xmm2, xmm2, xmm2; y
    vxorps  xmm1, xmm1, xmm1; x
    vmovss  [rsp+0E8h+flags], xmm0
  }
  DCONST_DVARVEC3_cl_transientWorldDebugHintPos = Dvar_RegisterVec3("cl_transientWorldDebugHintPos", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagsa, descriptiona, 0x40004u, "Debug position to hint at. cl_transientWorldDebugHintPosActive needs to be enabled.");
  DVARBOOL_cl_transientWorldOverlay = Dvar_RegisterBool("NNKRRSTKSP", 0, 0, "Draw a debug overlay for the transient world system.");
  DVARBOOL_cl_transientWorldOverlayTransientIndex = Dvar_RegisterBool("LTQOKSTPLT", 1, 0, "Draw transient index numbers on overlay");
  DCONST_DVARBOOL_cl_transientWorldOverlayStreamSync = Dvar_RegisterBool("cl_transientWorldOverlayStreamSync", 1, 0x40004u, "Draw transient stream sync gating circles on the overlay");
  __asm
  {
    vmovss  xmm3, cs:__real@00800000; min
    vmovss  xmm2, cs:__real@42a00000; y
    vmovss  xmm1, cs:__real@41c80000; x
  }
  DCONST_DVARINT_cl_transientWorldOverlayStreamSyncTimeout = Dvar_RegisterInt("cl_transientWorldOverlayStreamSyncTimeout", 1000, 0, 0x7FFFFFFF, 0x40004u, "Amount of time to draw stream sync requests after they stop");
  __asm { vmovss  [rsp+0E8h+flags], xmm7 }
  DVARVEC2_cl_transientWorldOverlayOffset = Dvar_RegisterVec2("LQTLROROLQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagsb, 0, "Draw offset for transient world overlay.");
  DVARBOOL_cl_transientWorldOverlayPriorityList = Dvar_RegisterBool("LPTTPPTLQP", 0, 0, "Draw list of top X priority values.");
  DVARBOOL_cl_transientWorldOverlayPriorityColors = Dvar_RegisterBool("LKKMTTKPR", 0, 0, "Draw colors of cells based on priority list.");
  DCONST_DVARBOOL_cl_transientWorldOverlayPriorityColorsRequested = Dvar_RegisterBool("cl_transientWorldOverlayPriorityColorsRequested", 0, 0x40004u, "Draw colors of cells based on priority list, only requested tiles");
  __asm { vmovss  xmm3, cs:__real@3f800000; max }
  DVARBOOL_cl_transientWorldOverlayBounds = Dvar_RegisterBool("MRLTMKMSOS", 0, 0, "Draw the real bounds in the transient world overlay.");
  __asm
  {
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  v330 = Dvar_RegisterFloat("MLRLSSMSQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Zoom mode for overlay, 0 = full map, 0..1 = zoom in around the player");
  __asm
  {
    vmovss  xmm6, cs:__real@43af0000
    vmovss  xmm3, cs:__real@00800000; min
  }
  DVARFLT_cl_transientWorldOverlayZoom = v330;
  __asm
  {
    vmovaps xmm2, xmm6; y
    vmovaps xmm1, xmm6; x
    vmovss  [rsp+0E8h+flags], xmm7
  }
  DVARVEC2_cl_transientWorldOverlayZoomScreenSize = Dvar_RegisterVec2("OKNQNRKOTT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagsc, 0, "When using overlay zoom, the screen size of the overlay");
  DCONST_DVARBOOL_cl_transientWorldStreamProgress = Dvar_RegisterBool("cl_transientWorldStreamProgress", 0, 0x40004u, "Print how long it takes to stream transient proxy images.");
  DCONST_DVARINT_cl_transientWorldOverlayLodCount = Dvar_RegisterInt("cl_transientWorldOverlayLodCount", 3, 1, 3, 0x40004u, "Maximum number of LOD levels to draw for the map. 1==Just LOD0");
  DCONST_DVARBOOL_cl_transientWorldOverlayDrawCellNumbers = Dvar_RegisterBool("cl_transientWorldOverlayDrawCellNumbers", 0, 0x40004u, "Draw all cell numbers, not just visible ones");
  DCONST_DVARBOOL_cl_transientWorldOverlayDrawAllCellNumbers = Dvar_RegisterBool("cl_transientWorldOverlayDrawAllCellNumbers", 0, 0x40004u, "Draw all cell numbers, not just visible ones");
  DCONST_DVARBOOL_cl_transientWorldOverlayDrawDelayValues = Dvar_RegisterBool("cl_transientWorldOverlayDrawDelayValues", 1, 0x40004u, "Draw delay values in cells, instead of cell indices");
  DCONST_DVARBOOL_cl_transientWorldOverlayPriorityListSkipLod1 = Dvar_RegisterBool("cl_transientWorldOverlayPriorityListSkipLod1", 0, 0x40004u, "Skip LOD1 entries in the priority list debug overlay.");
  DCONST_DVARBOOL_cl_transientWorldOverlayDrawLOD1Indices = Dvar_RegisterBool("cl_transientWorldOverlayDrawLOD1Indices", 0, 0x40004u, "Draw LOD1 indices for tiles when we draw LOD0 numbers. Use cl_transientWorldOverlayZoom to keep these legible.");
  DCONST_DVARBOOL_cl_transientWorldOverlayDrawZBoundsTopValue = Dvar_RegisterBool("cl_transientWorldOverlayDrawZBoundsTopValue", 0, 0x40004u, "Draw the top Z value of the tile bounds, when drawing LOD0 numbers in cells. Use cl_transientWorldOverlayZoom to keep these legible.");
  __asm
  {
    vmovss  xmm2, cs:__real@42700000; y
    vmovss  xmm1, cs:__real@43c80000; x
  }
  DCONST_DVARINT_cl_transientWorldPriorityGraph = Dvar_RegisterEnum("cl_transientWorldPriorityGraph", cl_transientWorldPriorityGraphType, 0, 0x40004u, "Draw a debug overlay priority graph.");
  __asm
  {
    vxorps  xmm3, xmm3, xmm3; min
    vmovss  [rsp+0E8h+flags], xmm11
  }
  DCONST_DVARVEC2_cl_transientWorldPriorityScreenOffset = Dvar_RegisterVec2("cl_transientWorldPriorityScreenOffset", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagsd, 0x40004u, "Screen position for priority graph.");
  __asm
  {
    vxorps  xmm3, xmm3, xmm3; min
    vmovaps xmm2, xmm6; y
    vmovaps xmm1, xmm6; x
    vmovss  [rsp+0E8h+flags], xmm11
  }
  DCONST_DVARVEC2_cl_transientWorldPriorityScreenSize = Dvar_RegisterVec2("cl_transientWorldPriorityScreenSize", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagse, 0x40004u, "Screen size for priority graph.");
  __asm
  {
    vmovaps xmm3, xmm10; max
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  v344 = Dvar_RegisterFloat("cl_transientWorldPriorityGraphXMin", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Min X axis value for priority graph.");
  __asm
  {
    vmovss  xmm2, cs:__real@3dcccccd; min
    vmovss  xmm1, cs:__real@461c4000; value
  }
  DCONST_DVARFLT_cl_transientWorldPriorityGraphXMin = v344;
  __asm { vmovaps xmm3, xmm10; max }
  DCONST_DVARFLT_cl_transientWorldPriorityGraphXMax = Dvar_RegisterFloat("cl_transientWorldPriorityGraphXMax", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Max X axis value for priority graph.");
  __asm
  {
    vmovaps xmm3, xmm10; max
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  DCONST_DVARFLT_cl_transientWorldPriorityGraphYMin = Dvar_RegisterFloat("cl_transientWorldPriorityGraphYMin", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Min Y axis value for priority graph, or 0 for auto.");
  __asm
  {
    vmovaps xmm3, xmm10; max
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  DCONST_DVARFLT_cl_transientWorldPriorityGraphYMax = Dvar_RegisterFloat("cl_transientWorldPriorityGraphYMax", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Max Y axis value for priority graph, or 0 for auto.");
  DCONST_DVARINT_cl_transientWorldPriorityGraphLabels = Dvar_RegisterEnum("cl_transientWorldPriorityGraphLabels", cl_transientWorldPriorityLabelType, 0, 0x40004u, "Draw labels for priority graph.");
  DCONST_DVARINT_cl_transientWorldPriorityGraphLod = Dvar_RegisterInt("cl_transientWorldPriorityGraphLod", 2, 0, 2, 0x40004u, "LOD to draw for priority graph (0=LOD0, 1=LOD1, 2=Both).");
  DCONST_DVARBOOL_cl_transientWorldPriorityGraphHighlightInFrustum = Dvar_RegisterBool("cl_transientWorldPriorityGraphHighlightInFrustum", 0, 0x40004u, "Highlight tiles that are in the current view frustum on the priority graph");
  DCONST_DVARBOOL_cl_transientWorldDrawBounds = Dvar_RegisterBool("cl_transientWorldDrawBounds", 0, 0x40004u, "Draw 3D bounds for each world grid tile.");
  DCONST_DVARINT_cl_transientWorldBudgetLod0Memory = Dvar_RegisterInt("cl_transientWorldBudgetLod0Memory", 9, 0, 1024, 0x40004u, "Warn if we can't fit this amount of LOD0 tiles into memory around the player");
  DVARINT_cl_transientCollision_MemoryBudgetFrontendLowMem = Dvar_RegisterInt("OLTPSKTONP", 52428800, 0, 0x40000000, 4u, "Memory limit for client-side big map streaming in frontend (preloading) - low-mem dev builds");
  DVARINT_cl_transientCollision_MemoryBudgetGameLowMem = Dvar_RegisterInt("NKLNTTLSQN", 138412032, 0, 0x40000000, 4u, "Memory limit for client-side big map streaming in game - low-mem dev builds");
  DVARINT_cl_transientCollision_MemoryBudgetFrontend = Dvar_RegisterInt("NOTLNLRTNS", 104857600, 0, 0x40000000, 4u, "Memory limit for client-side big map streaming in frontend (preloading)");
  DVARINT_cl_transientCollision_MemoryBudgetGame = Dvar_RegisterInt("NNPNOKPTLS", 171966464, 0, 0x40000000, 4u, "Memory limit for client-side big map streaming in game");
  DCONST_DVARINT_cl_transientCollision_MemoryBudgetReductionMap = Dvar_RegisterInt("cl_transientCollision_MemoryBudgetReductionMap", 73400320, 0, 0x40000000, 0x40004u, "Memory limit for client-side big map streaming in game, with 'collision reduction' maps");
  DVARBOOL_cl_transientCollision_Overlay = Dvar_RegisterBool("ONKQOPNMQ", 0, 0, "Draw a debug overlay for the transient collision system.");
  DVARBOOL_cl_transientCollision_EnableStreamingUpdates = Dvar_RegisterBool("OKTONRSMLP", 1, 4u, "Can be used to disable streaming");
  DCONST_DVARINT_cl_transientCollision_MaxTilesOverride = Dvar_RegisterInt("cl_transientCollision_MaxTilesOverride", -1, -1, 1024, 0x40004u, "Can be used to override the max tiles to test missing collision (or -1 for default)");
  DVARINT_cl_transientCollision_debugDisplayOffsetX = Dvar_RegisterInt("MTQOPKTROQ", 0, -500, 500, 4u, "Move the Transient Collision Debug Display in the X direction");
  DVARINT_cl_transientCollision_debugDisplayOffsetY = Dvar_RegisterInt("ROMLQLSSN", 0, -45000, 500, 4u, "Move the Transient Collision Debug Display in the Y direction");
  DVARBOOL_cl_transientCollision_debugDump = Dvar_RegisterBool("LMNLMMKPLN", 0, 4u, "Dump Transient Collision Debug Display to TTY");
  DCONST_DVARINT_cl_streamSync_connectTimeout = Dvar_RegisterInt("cl_streamSync_connectTimeout", 300000, 0, 1200000, 0x40004u, "Number of milliseconds to wait for the stream sync to complete before aborting");
  DCONST_DVARBOOL_cl_streamSync_devVerbose = Dvar_RegisterBool("cl_streamSync_devVerbose", 0, 0x40004u, "More spam on the client for transient");
  DCONST_DVARBOOL_cl_streamSync_devClearOnRequest = Dvar_RegisterBool("cl_streamSync_devClearOnRequest", 0, 0x40004u, "When set, will clear all transients on the next streamsync request (to test unloads)");
  __asm
  {
    vmovss  xmm6, cs:__real@45610000
    vmovss  xmm1, cs:__real@42480000; value
  }
  DVARBOOL_cl_hudDrawsBehindUI = Dvar_RegisterBool("MRQRLKPNT", 1, 0, "Should the HUD draw when the UI is up?");
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v358 = Dvar_RegisterFloat("LTMROMSOLS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Seconds with no received packets until a timeout occurs");
  __asm { vmovss  xmm1, cs:__real@43480000; value }
  DVARFLT_cl_timeout = v358;
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DVARFLT_cl_connectTimeout = Dvar_RegisterFloat("LQKLPMTKMO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Timeout time in seconds while connecting to a server");
  DVARINT_cl_retransmitTimeout = Dvar_RegisterInt("NMRRMROKNT", 1000, 100, 5000, 0, "Timeout time in milliseconds before retransmitting request while connecting to a server");
  DVARINT_cl_connectionAttempts = Dvar_RegisterInt("LMROKRKONR", 70, 0, 100, 0, "Maximum number of connection attempts before aborting");
  DVARBOOL_cl_transmission_error_enabled = Dvar_RegisterBool("NPSTTRSRPK", 1, 0, "Whether to fail on transmission errors");
  __asm { vmovss  xmm1, cs:__real@42200000; value }
  DVARINT_cl_inhibit_stats_upload = Dvar_RegisterInt("OLRSMNPLNK", 1, 0, 1, 0, "Inhibit upload of stats during demo playback");
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DVARFLT_cl_migrationTimeout = Dvar_RegisterFloat("LOQMTLSRSQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Seconds to wait to hear from new host during host migration before timeout occurs");
  DVARBOOL_cl_shownuments = Dvar_RegisterBool("MKOKTNNNQS", 0, 0, "Show the number of entities");
  DVARBOOL_cl_showTimeDelta = Dvar_RegisterBool("NLOLRMNTOR", 0, 0, "Enable debugging information for time delta");
  DVARINT_cl_maxpackets = Dvar_RegisterInt("MQQPKLNPRS", 0, 0, 100, 0, "Maximum number of packets sent per frame");
  DVARINT_cl_smoothSnapInterval = Dvar_RegisterInt("LOTTOKMSLQ", 8, 0, 16, 0, "Length of the buffer smoothing the snap interval when adjusting the time delta. The smaller the value the faster the reaction to fluctuations but will cause hitches.");
  DVARINT_cl_serverStatusResendTime = Dvar_RegisterInt("PNROPNLNS", 750, 0, 3600, 0, "Time in milliseconds to resend a server status message");
  DVARSTR_cl_motdString = Dvar_RegisterString("QOOMNOTO", (const char *)&queryFormat.fmt + 3, 0x2000u, "Message of the day");
  DVARBOOL_cl_demo_uploadfb = Dvar_RegisterBool("MOSKRLOMNS", 0, 0, "Should we upload to FB");
  DVARBOOL_cl_debugMessageKey = Dvar_RegisterBool("LMPLTTPQSO", 0, 0, "Enable message key debugging information");
  DVARINT_cl_extrap_tracking_start_time = Dvar_RegisterInt("MMOMSSKRPO", 10000, 0, 0x7FFFFFFF, 0, "Time in milliseconds to wait after the first snapshot before tracking client extrapolation.");
  DVARINT_cl_adjust_time_fast_cutoff = Dvar_RegisterInt("NQKROOOLQN", 8, 0, 100, 0, "The value for the difference between our desired server offset and our current server offset at which we transition to the fast linear approach (cl_adjust_time_rate_fast)");
  DVARINT_cl_adjust_time_fixed_ideal_time = Dvar_RegisterInt("NPQKMRRTSN", 16, 0, 0x7FFFFFFF, 0, "The fixed ideal offset time from the latest server snapshot");
  DVARINT_cl_adjust_time_interval_method = Dvar_RegisterEnum("NORPRRSMRO", cl_adjust_time_interval_method_names, 0, 0, "The mechanism used to determine the expected interval between snapshots.");
  DVARBOOL_cl_adjust_time_print = Dvar_RegisterBool("MNRRQNLLRQ", 0, 0, "True when logging adjust time metrics to blackbox");
  DVARINT_cl_adjust_time_throttle_type = Dvar_RegisterEnum("SLKLOSLLS", cl_adjust_time_throttle_names, 2, 0, "The algorithm used to determine client snapshot throttling");
  DVARINT_cl_adjust_time_throttle_window = Dvar_RegisterInt("MPKPKPLO", 500, 0, 5000, 0, "The fixed window time for the client throttle");
  DVARINT_cl_adjust_time_throttle_offset = Dvar_RegisterInt("MLLPPLRQQR", 16, 0, 0x7FFFFFFF, 0, "The offset from the latest snapshot in the buffer that represents the ideal time for the client to be at");
  DVARINT_cl_adjust_time_throttle_surplus = Dvar_RegisterInt("NMKSTNOMOK", 16, 0, 0x7FFFFFFF, 0, "The offset from the ideal time behind where the throttle gets applied");
  DVARINT_cl_adjust_time_fast_adjust = Dvar_RegisterInt("MMQKPQQOOR", 2, 0, 100, 0, "The maximum per-frame adjustment to the client's server time offset when the error is greater than the fast cutoff");
  DVARINT_cl_adjust_time_slow_adjust = Dvar_RegisterInt("MSPSKQOMOS", 1, 0, 100, 0, "The maximum per-frame adjustment to the client's server time offset when the error is less than the fast cutoff");
  DVARINT_cl_adjust_time_max_buffer = Dvar_RegisterInt("MSMLQTRTTK", 750, 0, 0x7FFFFFFF, 0, "The maximum allowable snapshot buffer time to compensate for packet bursting");
  DVARINT_cl_adjust_time_max_window = Dvar_RegisterInt("LKKQLKNOOQ", 1000, 0, 0x7FFFFFFF, 0, "The maximum allowable period over which to compensate for packet bursting on snapshot receive");
  DVARINT_cl_netperf_telemetry_mode = Dvar_RegisterInt("LLQPPKKPRT", 1, 0, 2, 0, "Whether to collect client network performance telemetry");
  DVARBOOL_cl_usercmd_print = Dvar_RegisterBool("LLSOPRMPQO", 0, 0, "Print the command packets generated by the client.");
  DVARINT_mlg_game_pause_server_delay = Dvar_RegisterInt("OKNKOOOPSR", 100, 30, 500, 0, "How long we need to wait (let the pause commands be sent to the clients) before pausing the host.");
  DVARINT_mlg_game_paused_heartbeat_period = Dvar_RegisterInt("LTMPNSLRLK", 3000, 1000, 10000, 0, "How often to send keep alive packets while the game is paused in milliseconds.");
  DVARINT_lui_codcaster_resume_countdown = Dvar_RegisterInt("PTLRPLQLQ", 5, 0, 10, 0, "How many seconds to set the countdown when resuming a game.");
  DCONST_DVARBOOL_cl_uistreaming_images = Dvar_RegisterBool("cl_uistreaming_images", 1, 0x40004u, "Enables UIStreaming streamed images to be cached and touched.");
  DVARINT_dw_profanity_check_wait_count = Dvar_RegisterInt("NQONSPMOMS", 2000, 0, 0x7FFFFFFF, 0, "Indirectly controls the profanity check timeout.");
  DVARINT_mp_bots_sec_before_lobby_autofill = Dvar_RegisterInt("NLLMRMSTLT", 15, 0, 300, 0, "Time in seconds before adding MP bots to the local game in order to launch");
  __asm
  {
    vmovss  xmm0, cs:__real@459c4000
    vmovss  xmm3, cs:__real@c47a0000; min
  }
  DVARBOOL_estrangedClientList = Dvar_RegisterBool("MNOKLTPSTP", 1, 0, "Whether to draw the list of clients we can't connect to");
  __asm
  {
    vxorps  xmm2, xmm2, xmm2; y
    vxorps  xmm1, xmm1, xmm1; x
    vmovss  [rsp+0E8h+flags], xmm0
  }
  DVARVEC2_estrangedClientPos = Dvar_RegisterVec2("OSKKORQSP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagsf, 0, "Where to draw the messages about who you can't connect to");
  __asm
  {
    vmovss  xmm3, cs:__real@43fa0000; max
    vmovss  xmm1, cs:__real@3f800000; value
  }
  DVARINT_estrangedClientHeight = Dvar_RegisterInt("QSNPSPRTO", 12, 0, 500, 0, "How far to space each line of the list of clients you can't connect to");
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  DVARFLT_estrangedClientSize = Dvar_RegisterFloat("LOLOKLQQSS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Font scale for space each line of the list of clients you can't connect to");
  DVARBOOL_cl_voice_allow_jip_talking = Dvar_RegisterBool("MMMSRMPSKS", 0, 0, "Allow sending voice from players who are joining a match in-progress but are still pre-loading the map. These players will send to everybody in the match since they don't have team assignments yet");
  DVARBOOL_cl_voice_squad_only_in_lobby = Dvar_RegisterBool("NSMPTPRLNQ", 1, 0, "Only send voice to squad mates when in the front end lobby");
  DVARBOOL_cl_voice_direct_send_to_private_party = Dvar_RegisterBool("NNSKKSSNPN", 1, 0, "Route packets directly to private party members instead of through the DS");
  DVARBOOL_voice_on_screen_debug = Dvar_RegisterBool("MPTQQNOTPQ", 0, 0, "On screen voice debugging");
  DVARINT_cl_deathMessageWidth = Dvar_RegisterInt("OKKPTLMPRM", 320, 1, 640, 0, "Pixel width of the obituary area");
  __asm { vmovaps xmm14, [rsp+0E8h+var_98] }
  _R11 = &v395;
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
    vmovaps xmm15, [rsp+0E8h+var_A8]
  }
  CG_MainMP_RegisterDvars();
}

/*
==============
CL_MainMP_SendStatsGroupBuffer
==============
*/
void CL_MainMP_SendStatsGroupBuffer(const StatsGroup statsGroup, const LocalClientNum_t localClientNum, ClConnectionDataMP *clcData, const unsigned __int8 *payload, const int payloadSize)
{
  StatsGroup v9; 
  int packetNum; 
  char StatsGroupBitOffset; 
  unsigned __int64 statPacketsToSend; 
  int v19; 
  int v20; 
  char *fmt; 
  __int64 v22; 
  __int64 v23; 
  __int64 v24; 
  msg_t buf; 
  statPacketHeader_t v27; 
  unsigned __int8 data[1264]; 

  v9 = statsGroup;
  if ( !clcData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 2100, ASSERT_TYPE_ASSERT, "(clcData)", (const char *)&queryFormat, "clcData") )
    __debugbreak();
  if ( payloadSize <= 0 )
  {
    LODWORD(v22) = payloadSize;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 2101, ASSERT_TYPE_ASSERT, "( ( 0 < payloadSize ) )", "( payloadSize ) = %i", v22) )
      __debugbreak();
  }
  if ( !payload && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 2102, ASSERT_TYPE_ASSERT, "(payload)", (const char *)&queryFormat, "payload") )
    __debugbreak();
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, ebp
    vmulss  xmm2, xmm0, cs:__real@3a554c72
    vxorps  xmm0, xmm0, xmm0
    vroundss xmm4, xmm0, xmm2, 2
  }
  v27.statsGroup = v9;
  __asm { vcvttss2si esi, xmm4 }
  if ( _ESI > Com_PlayerData_GetStatsGroupMaxPackets(v9) )
  {
    LODWORD(v22) = _ESI;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 2107, ASSERT_TYPE_ASSERT, "( ( static_cast< unsigned int >( packetsNeeded ) <= Com_PlayerData_GetStatsGroupMaxPackets( statsGroup ) ) )", "( packetsNeeded ) = %i", v22) )
      __debugbreak();
  }
  LODWORD(fmt) = _ESI;
  Com_Printf(14, "%s - Sending statsGroup %d in %d fragments\n", "CL_MainMP_SendStatsGroupBuffer", (unsigned int)v27.statsGroup, fmt);
  packetNum = 0;
  StatsGroupBitOffset = Com_PlayerData_GetStatsGroupBitOffset(v9);
  v27.packetNum = 0;
  if ( _ESI > 0 )
  {
    do
    {
      statPacketsToSend = clcData->statPacketsToSend;
      if ( _bittest64((const __int64 *)&statPacketsToSend, (unsigned __int8)(packetNum + StatsGroupBitOffset)) )
      {
        MSG_Init(&buf, data, 1252);
        v27.moreFragments = v27.packetNum != _ESI - 1;
        if ( buf.cursize )
        {
          LODWORD(v22) = buf.cursize;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 2125, ASSERT_TYPE_ASSERT, "( ( fragmentedMsg.cursize == 0 ) )", "( fragmentedMsg.cursize ) = %i", v22) )
            __debugbreak();
        }
        statPacketHeader_t::SerializeToMsg(&v27, &buf);
        v19 = 1229;
        if ( payloadSize - 1229 * v27.packetNum < 1229 )
          v19 = payloadSize - 1229 * v27.packetNum;
        MSG_WriteData(&buf, &payload[1229 * v27.packetNum], v19);
        if ( buf.overflowed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 2133, ASSERT_TYPE_ASSERT, "(!MSG_IsOverflowed( &fragmentedMsg ))", "%s\n\tNot enough bytes to write to, need to increase stats buffer size", "!MSG_IsOverflowed( &fragmentedMsg )") )
          __debugbreak();
        if ( clcData->connectLastSendTime != cls.realtime )
        {
          LODWORD(v24) = cls.realtime;
          LODWORD(v23) = clcData->connectLastSendTime;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 2134, ASSERT_TYPE_ASSERT, "( clcData->connectLastSendTime ) == ( cls.realtime )", "%s == %s\n\t%i, %i", "clcData->connectLastSendTime", "cls.realtime", v23, v24) )
            __debugbreak();
        }
        v20 = NetConnection::SendUnreliable(&clcData->serverConnection, buf.data, buf.cursize);
        if ( v20 < 0 )
          CL_MainMP_TransmissionError(localClientNum, v20);
        packetNum = v27.packetNum;
      }
      v27.packetNum = ++packetNum;
    }
    while ( packetNum < _ESI );
    v9 = statsGroup;
  }
  memset(data, 0, 0x4E4ui64);
  clcData->statGroupSendTime[v9] = cls.realtime;
}

/*
==============
CL_MainMP_SendUserInfoCmd
==============
*/
void CL_MainMP_SendUserInfoCmd(LocalClientNum_t localClientNum)
{
  char *UserInfoString; 
  const char *v3; 

  UserInfoString = CL_MainMP_GetUserInfoString(localClientNum);
  Com_Printf(25, "Sending userinfo: '%s'\n", UserInfoString);
  v3 = j_va("userinfo \"%s\"", UserInfoString);
  CL_Main_AddReliableCommand(localClientNum, v3);
}

/*
==============
CL_MainMP_ServerTimedOut
==============
*/
void CL_MainMP_ServerTimedOut(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  __int64 v2; 
  PartyData *PartyData; 
  clientMigState_t LocalClientMigrationState; 
  connstate_t LocalClientAnyConnectionState; 
  int StartingControllerIndex; 
  PartyDisconnectReason v7; 
  __int64 v8; 
  int v9; 
  __int64 v10; 
  int v11; 
  PartyActiveClient mainActiveClient; 

  v1 = localClientNum;
  if ( !Com_IsGameLocalServerRunningOrLoading() )
  {
    if ( (unsigned int)v1 >= 2 )
    {
      v11 = 2;
      v9 = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 165, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v9, v11) )
        __debugbreak();
    }
    v2 = v1;
    if ( clientUIActives[v1].frontEndSceneState[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 3535, ASSERT_TYPE_ASSERT, "(CL_GetLocalClientFrontEntState( localClientNum ) == ClFrontEndSceneState::INACTIVE)", (const char *)&queryFormat, "CL_GetLocalClientFrontEntState( localClientNum ) == ClFrontEndSceneState::INACTIVE") )
      __debugbreak();
    PartyData = Lobby_GetPartyData();
    LocalClientMigrationState = CL_GetLocalClientMigrationState((const LocalClientNum_t)v1);
    LocalClientAnyConnectionState = CL_GetLocalClientAnyConnectionState((const LocalClientNum_t)v1);
    Com_Printf(14, "Server timed out. Connection state is %i. Migration state is %i.\n", (unsigned int)LocalClientAnyConnectionState, (unsigned int)LocalClientMigrationState);
    if ( (unsigned int)v1 >= 2 )
    {
      LODWORD(v10) = 2;
      LODWORD(v8) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\client_mp.h", 265, ASSERT_TYPE_ASSERT, "(unsigned)( client ) < (unsigned)( 2 )", "client doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v8, v10) )
        __debugbreak();
    }
    CL_UpdateMigrationProfile(clientUIActives[v2].migrationState, CMSTATE_INACTIVE);
    clientUIActives[v2].migrationState = CMSTATE_INACTIVE;
    Migration_Shutdown();
    if ( Lobby_IsInLobby() )
    {
      if ( Lobby_AreWeHost() )
      {
        Party_StopPartyOnBackout(PartyData);
      }
      else
      {
        StartingControllerIndex = Party_GetStartingControllerIndex(PartyData);
        mainActiveClient = Party_GetMainActiveClient(PartyData, StartingControllerIndex);
        LOBYTE(v7) = 45;
        PartyClient_LostConnectionToHost(PartyData, &mainActiveClient, v7, NULL);
      }
    }
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144217630);
  }
}

/*
==============
CL_MainMP_SetOmnvars
==============
*/
void CL_MainMP_SetOmnvars(const char *mapname, const char *gametype)
{
  unsigned __int8 ActiveGameMode; 

  if ( !mapname && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 4934, ASSERT_TYPE_ASSERT, "(mapname)", (const char *)&queryFormat, "mapname") )
    __debugbreak();
  if ( !gametype && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 4935, ASSERT_TYPE_ASSERT, "(gametype)", (const char *)&queryFormat, "gametype") )
    __debugbreak();
  if ( !Com_IsAnyLocalServerRunning() )
  {
    ActiveGameMode = Com_GameMode_GetActiveGameMode();
    BG_Omnvar_LoadTables((GameModeType)ActiveGameMode, gametype, mapname);
    BG_TransientsInfilMP_InitOmnVars(mapname);
  }
}

/*
==============
CL_MainMP_SetWaitingOnServerToLoadMap
==============
*/
void CL_MainMP_SetWaitingOnServerToLoadMap(LocalClientNum_t localClientNum, bool waiting)
{
  __int64 v2; 
  int v5; 

  v2 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v5 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 5083, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v5) )
      __debugbreak();
  }
  cl_waitingOnServerToLoadMap[v2] = waiting;
}

/*
==============
CL_MainMP_SetupForNewServerMap
==============
*/
void CL_MainMP_SetupForNewServerMap(const char *pszMapName, const char *pszGametype)
{
  __int64 v4; 
  bool v5; 

  if ( !pszMapName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 5019, ASSERT_TYPE_ASSERT, "(pszMapName)", (const char *)&queryFormat, "pszMapName") )
    __debugbreak();
  if ( !*pszMapName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 5020, ASSERT_TYPE_ASSERT, "(pszMapName[0])", (const char *)&queryFormat, "pszMapName[0]") )
    __debugbreak();
  if ( !pszGametype && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 5021, ASSERT_TYPE_ASSERT, "(pszGametype)", (const char *)&queryFormat, "pszGametype") )
    __debugbreak();
  if ( !*pszGametype && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 5022, ASSERT_TYPE_ASSERT, "(pszGametype[0])", (const char *)&queryFormat, "pszGametype[0]") )
    __debugbreak();
  Com_Printf(14, "Server changing map %s, gametype %s\n", pszMapName, pszGametype);
  v4 = 0i64;
  cl_serverLoadingMap = 1;
  v5 = 1;
  do
  {
    if ( !v5 )
    {
      j___report_rangecheckfailure(cl_waitingOnServerToLoadMap);
      JUMPOUT(0x141A9FFB5i64);
    }
    cl_waitingOnServerToLoadMap[v4] = 0;
    v5 = (unsigned __int64)++v4 < 2;
  }
  while ( v4 < 2 );
  if ( !Com_IsAnyLocalServerRunning() )
  {
    g_waitingForServer = 1;
    UI_SetMap((const char *)&queryFormat.fmt + 3, (const char *)&queryFormat.fmt + 3);
    NetConstStrings_Clear();
    R_SyncRenderThread();
    CL_MainMP_PreloadMap(pszMapName, pszGametype);
    CL_MainMP_InitMapLoad(pszMapName, pszGametype, 1);
  }
  CL_Screen_Update();
  R_SyncRenderThread();
}

/*
==============
CL_MainMP_ShouldDisplayHud
==============
*/
char CL_MainMP_ShouldDisplayHud(LocalClientNum_t localClientNum)
{
  return 1;
}

/*
==============
CL_MainMP_ShouldRequestMatchRules
==============
*/
bool CL_MainMP_ShouldRequestMatchRules(const LocalClientNum_t localClientNum, ClConnectionDataMP *clcData)
{
  __int64 v2; 
  __int64 v5; 

  v2 = localClientNum;
  if ( !clcData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 2885, ASSERT_TYPE_ASSERT, "(clcData)", (const char *)&queryFormat, "clcData") )
    __debugbreak();
  if ( (unsigned int)v2 >= 2 )
  {
    LODWORD(v5) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 165, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v5, 2) )
      __debugbreak();
  }
  return !clientUIActives[v2].frontEndSceneState[0] && CL_Main_IsSystemLinkGame() && !NetConnection::IsLocal(&clcData->serverConnection);
}

/*
==============
CL_MainMP_ShutdownGameMode
==============
*/
void CL_MainMP_ShutdownGameMode(void)
{
  Com_Printf(14, "----- CL_MainMP_ShutdownGameMode -----\n");
  if ( !CL_AllLocalClientsDisconnected() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 4814, ASSERT_TYPE_ASSERT, "(CL_AllLocalClientsDisconnected())", (const char *)&queryFormat, "CL_AllLocalClientsDisconnected()") )
    __debugbreak();
  CL_StreamSync_Shutdown();
  BG_Customization_Shutdown();
  CL_UIWeapon_Shutdown();
  CL_XB3MP_UnregisterCommands();
  MatchRules_UnregisterCommands();
  CL_ConsoleMP_UnregisterCommands();
  Cmd_RemoveClientCommandList(S_CL_MAIN_CMD_MP, 0x28u);
  CL_MainMP_UnregisterDvars();
  Live_SyncOnlineDataFence_ResetStateForAllControllers();
  Com_Printf(14, "-----------------------\n");
}

/*
==============
CL_MainMP_ShutdownGameModeClient
==============
*/
void CL_MainMP_ShutdownGameModeClient(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  __int64 v2; 
  int v3; 
  int v4; 

  v1 = localClientNum;
  Com_Printf(14, "----- CL_MainMP_ShutdownClient %i -----\n", (unsigned int)localClientNum);
  if ( (unsigned int)v1 >= 2 )
  {
    v4 = 2;
    v3 = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 158, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  v2 = v1;
  if ( clientUIActives[v2].connectionState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 4867, ASSERT_TYPE_ASSERT, "(clUI->connectionState == CA_DISCONNECTED)", "%s\n\tShould be initialized in common CL_Main_InitClient", "clUI->connectionState == CA_DISCONNECTED") )
    __debugbreak();
  if ( !clientUIActives[v2].isRunning && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 4868, ASSERT_TYPE_ASSERT, "(clUI->isRunning)", "%s\n\tShould be initialized in common CL_Main_InitClient", "clUI->isRunning") )
    __debugbreak();
}

/*
==============
CL_MainMP_ShutdownMemory
==============
*/
void CL_MainMP_ShutdownMemory(void)
{
  if ( !s_clientAllocSettings.isAllocated || (s_clientAllocSettings.flags & 2) != 0 )
    CL_MainMP_GameMemoryFree(0);
  else
    CL_MainMP_GameMemoryFree(1);
}

/*
==============
CL_MainMP_TogglePauseResumeGame
==============
*/
void CL_MainMP_TogglePauseResumeGame(LocalClientNum_t localClientNum)
{
  int clientNum; 
  BG_SynchronizedPlayerInfo *PlayerInfo; 
  const BG_SynchronizedPlayerInfo *v4; 
  bool pauseStatusChanged; 
  int Int_Internal_DebugName; 
  int v9; 
  int v10; 
  unsigned int IndexByName; 
  OmnvarData *Data; 
  const OmnvarDef *Def; 
  lua_State *v14; 
  int ControllerFromClient; 

  if ( localClientNum != LOCAL_CLIENT_INVALID )
  {
    if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1193, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
      __debugbreak();
    if ( localClientNum < cg_t::ms_allocatedCount && CG_IsFullyInitialized(localClientNum) )
    {
      clientNum = CG_GetLocalClientGlobals(localClientNum)->clientNum;
      PlayerInfo = CL_PlayerInfosMP_GetPlayerInfo(clientNum);
      v4 = PlayerInfo;
      if ( PlayerInfo )
      {
        pauseStatusChanged = PlayerInfo->pauseStatusChanged;
        if ( pauseStatusChanged && v4->shouldPauseGame )
        {
          cl_timer = 0;
          cl_countdown = Dvar_GetInt_Internal_DebugName(DVARINT_lui_codcaster_resume_countdown, "lui_codcaster_resume_countdown");
          cl_game_is_about_to_resume = 0;
          CL_Pause_UnpauseGame();
          Com_MP_SetLocalServerPause(0);
          Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DVARINT_mlg_game_pause_server_delay, "mlg_game_pause_server_delay");
          Sys_Sleep(Int_Internal_DebugName);
          if ( Lobby_AreWeHost() )
            Com_MP_SetLocalServerPause(1);
          CL_Pause_SetPauseReason((CLPauseReason)2048);
          v4->pauseStatusChanged = 0;
          CL_PlayerInfosMP_SetPlayerInfo(clientNum, v4);
          if ( !Lobby_AreWeHost() )
            LUI_CoD_PausedByCodcaster(localClientNum);
          _RCX = DVARFLT_cl_timeout;
          __asm { vmovss  xmm1, dword ptr [rcx+5Ch]; value }
          Dvar_SetFloat_Internal(DVARFLT_cl_timeout, *(float *)&_XMM1);
          Dvar_SetInt_Internal(DVARINT_sv_timeout, DVARINT_sv_timeout->domain.integer.max);
        }
        else if ( pauseStatusChanged )
        {
          if ( !v4->shouldPauseGame )
          {
            if ( cl_countdown == Dvar_GetInt_Internal_DebugName(DVARINT_lui_codcaster_resume_countdown, "lui_codcaster_resume_countdown") )
            {
              if ( Lobby_AreWeHost() )
              {
                CL_Pause_UnpauseGame();
                v10 = Dvar_GetInt_Internal_DebugName(DVARINT_mlg_game_pause_server_delay, "mlg_game_pause_server_delay");
                Sys_Sleep(v10);
                CL_Pause_SetPauseReason((CLPauseReason)2048);
              }
              if ( !Lobby_AreWeHost() )
                LUI_CoD_UnpausedByCodcaster(localClientNum);
            }
            if ( Sys_Milliseconds() - cl_timer > 1000 )
            {
              IndexByName = BG_Omnvar_GetIndexByName("ui_match_start_countdown");
              if ( IndexByName == -1 )
                Com_PrintError(14, "CL_MainMP_SetOmnvar - 'ui_match_start_countdown' not found\n");
              Data = CG_Omnvar_GetData(localClientNum, IndexByName);
              Def = BG_Omnvar_GetDef(IndexByName);
              Data->current.integer = cl_countdown - Def->minvalue;
              G_Omnvar_MarkChanged(Data);
              v14 = LUI_luaVM;
              ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
              LUI_NotifyOmnvarChanged(ControllerFromClient, Def, Data, v14);
              --cl_countdown;
              cl_timer = Sys_Milliseconds();
            }
            if ( cl_countdown )
            {
              if ( cl_countdown < 0 )
              {
                if ( Lobby_AreWeHost() )
                  Com_MP_SetLocalServerPause(0);
                CL_Pause_UnpauseGame();
                v4->pauseStatusChanged = 0;
                CL_PlayerInfosMP_SetPlayerInfo(clientNum, v4);
                _RCX = DVARFLT_cl_timeout;
                __asm { vmovss  xmm1, dword ptr [rcx+48h]; value }
                Dvar_SetFloat_Internal(DVARFLT_cl_timeout, *(float *)&_XMM1);
                Dvar_SetInt_Internal(DVARINT_sv_timeout, DVARINT_sv_timeout->reset.integer);
              }
            }
            else
            {
              cl_game_is_about_to_resume = 1;
            }
          }
        }
        else if ( v4->shouldPauseGame )
        {
          v9 = Dvar_GetInt_Internal_DebugName(DVARINT_mlg_game_paused_heartbeat_period, "mlg_game_paused_heartbeat_period");
          if ( Sys_Milliseconds() - g_partyData.inactiveKeepaliveTime >= v9 )
            Party_SendKeepAlives(&g_partyData, localClientNum);
        }
      }
    }
  }
}

/*
==============
CL_MainMP_TransmissionError
==============
*/
void CL_MainMP_TransmissionError(const LocalClientNum_t localClientNum, int sendError)
{
  const dvar_t *v2; 

  v2 = DVARBOOL_cl_transmission_error_enabled;
  if ( !DVARBOOL_cl_transmission_error_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_transmission_error_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.enabled && sendError != -11 && sendError != -2 && !Com_ErrorEntered() )
  {
    CL_MainMP_DisconnectError(localClientNum, "EXE/TRANSMITERROR", NULL);
    if ( !Com_ErrorEntered() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_main_mp.cpp", 2682, ASSERT_TYPE_ASSERT, "(Com_ErrorEntered())", (const char *)&queryFormat, "Com_ErrorEntered()") )
      __debugbreak();
  }
}

/*
==============
CL_MainMP_Unpause
==============
*/
void CL_MainMP_Unpause(CLPauseReason pauseReason)
{
  LocalClientNum_t i; 

  if ( DVARINT_reloading )
  {
    if ( Com_MP_GetIsLocalServerPaused() )
    {
      for ( i = LOCAL_CLIENT_0; i < SLODWORD(cl_maxLocalClients); ++i )
        CL_CGameMP_SyncTimes(i);
    }
    CL_Pause_UnpauseGameForReason(pauseReason);
    Com_MP_SetShouldLocalServerPause(0);
  }
}

/*
==============
CL_MainMP_UnregisterDvars
==============
*/
void CL_MainMP_UnregisterDvars()
{
  DVARBOOL_cl_nodelta = Dvar_Deregister(DVARBOOL_cl_nodelta);
  DCONST_DVARINT_cl_migrationPingTime = Dvar_Deregister(DCONST_DVARINT_cl_migrationPingTime);
  DVARFLT_cl_migrationPacketLoss = Dvar_Deregister(DVARFLT_cl_migrationPacketLoss);
  DVARFLT_cl_transientWorldMemoryFreeMulMP = Dvar_Deregister(DVARFLT_cl_transientWorldMemoryFreeMulMP);
  DVARFLT_cl_transientWorldMemoryFreeMulCP = Dvar_Deregister(DVARFLT_cl_transientWorldMemoryFreeMulCP);
  DVARFLT_cl_transientWorldMemoryFreeMulBR = Dvar_Deregister(DVARFLT_cl_transientWorldMemoryFreeMulBR);
  DVARFLT_cl_transientWorldMemoryFreeMulBRLobby = Dvar_Deregister(DVARFLT_cl_transientWorldMemoryFreeMulBRLobby);
  DCONST_DVARINT_cl_transientWorldOverrideTileBudgetMB = Dvar_Deregister(DCONST_DVARINT_cl_transientWorldOverrideTileBudgetMB);
  DCONST_DVARBOOL_cl_transientWorldIgnoreStreamHints = Dvar_Deregister(DCONST_DVARBOOL_cl_transientWorldIgnoreStreamHints);
  DCONST_DVARINT_cl_transientWorldMemoryFrontendEstimateMB = Dvar_Deregister(DCONST_DVARINT_cl_transientWorldMemoryFrontendEstimateMB);
  DCONST_DVARBOOL_cl_transientWorldVisibleRadiusOverride = Dvar_Deregister(DCONST_DVARBOOL_cl_transientWorldVisibleRadiusOverride);
  DCONST_DVARFLT_cl_transientWorldVisibleRadiusLvl0 = Dvar_Deregister(DCONST_DVARFLT_cl_transientWorldVisibleRadiusLvl0);
  DCONST_DVARFLT_cl_transientWorldVisibleRadiusLvl1 = Dvar_Deregister(DCONST_DVARFLT_cl_transientWorldVisibleRadiusLvl1);
  DCONST_DVARFLT_cl_transientWorldVisibleFacingDistAdd = Dvar_Deregister(DCONST_DVARFLT_cl_transientWorldVisibleFacingDistAdd);
  DCONST_DVARFLT_cl_transientWorldVisibleSplit2Multiplier = Dvar_Deregister(DCONST_DVARFLT_cl_transientWorldVisibleSplit2Multiplier);
  DCONST_DVARFLT_cl_transientWorldVisibleZMultiplierLvl0 = Dvar_Deregister(DCONST_DVARFLT_cl_transientWorldVisibleZMultiplierLvl0);
  DCONST_DVARFLT_cl_transientWorldVisibleZMultiplierLvl1 = Dvar_Deregister(DCONST_DVARFLT_cl_transientWorldVisibleZMultiplierLvl1);
  DVARBOOL_cl_transientWorldVisibleFacingCircleSweep = Dvar_Deregister(DVARBOOL_cl_transientWorldVisibleFacingCircleSweep);
  DCONST_DVARFLT_cl_transientWorldStreamSyncRadiusMulLv0 = Dvar_Deregister(DCONST_DVARFLT_cl_transientWorldStreamSyncRadiusMulLv0);
  DCONST_DVARFLT_cl_transientWorldStreamSyncRadiusMulLv1 = Dvar_Deregister(DCONST_DVARFLT_cl_transientWorldStreamSyncRadiusMulLv1);
  DVARFLT_cl_transientWorldLoadZLOD0AdjustStartZ = Dvar_Deregister(DVARFLT_cl_transientWorldLoadZLOD0AdjustStartZ);
  DVARFLT_cl_transientWorldLoadZLOD0AdjustEndZ = Dvar_Deregister(DVARFLT_cl_transientWorldLoadZLOD0AdjustEndZ);
  DVARFLT_cl_transientWorldLoadZLOD0AdjustStartDist = Dvar_Deregister(DVARFLT_cl_transientWorldLoadZLOD0AdjustStartDist);
  DVARFLT_cl_transientWorldLoadZLOD0AdjustEndDist = Dvar_Deregister(DVARFLT_cl_transientWorldLoadZLOD0AdjustEndDist);
  DVARFLT_cl_transientWorldLoadZLOD0AdjustMaxAddition = Dvar_Deregister(DVARFLT_cl_transientWorldLoadZLOD0AdjustMaxAddition);
  DCONST_DVARFLT_cl_transientWorldLoadXYMultiplierAddLOD1 = Dvar_Deregister(DCONST_DVARFLT_cl_transientWorldLoadXYMultiplierAddLOD1);
  DCONST_DVARFLT_cl_transientWorldLoadXYLOD1FalloffBegin = Dvar_Deregister(DCONST_DVARFLT_cl_transientWorldLoadXYLOD1FalloffBegin);
  DCONST_DVARFLT_cl_transientWorldLoadXYLOD1FalloffBeginBR = Dvar_Deregister(DCONST_DVARFLT_cl_transientWorldLoadXYLOD1FalloffBeginBR);
  DCONST_DVARFLT_cl_transientWorldLoadXYLOD1FalloffBeginBRLobby = Dvar_Deregister(DCONST_DVARFLT_cl_transientWorldLoadXYLOD1FalloffBeginBRLobby);
  DCONST_DVARFLT_cl_transientWorldLoadXYLOD1FalloffMultiplier = Dvar_Deregister(DCONST_DVARFLT_cl_transientWorldLoadXYLOD1FalloffMultiplier);
  DVARBOOL_cl_transientWorldLoadXYLOD1FalloffPlaneEnabled = Dvar_Deregister(DVARBOOL_cl_transientWorldLoadXYLOD1FalloffPlaneEnabled);
  DVARFLT_cl_transientWorldLoadXYLOD1FalloffBeginBRPlane = Dvar_Deregister(DVARFLT_cl_transientWorldLoadXYLOD1FalloffBeginBRPlane);
  DVARFLT_cl_transientWorldBRPlaneZThreshold = Dvar_Deregister(DVARFLT_cl_transientWorldBRPlaneZThreshold);
  DCONST_DVARFLT_cl_transientWorldLoadXYLOD1BoostInAirDotStart = Dvar_Deregister(DCONST_DVARFLT_cl_transientWorldLoadXYLOD1BoostInAirDotStart);
  DCONST_DVARFLT_cl_transientWorldLoadXYLOD1BoostInAirDotEnd = Dvar_Deregister(DCONST_DVARFLT_cl_transientWorldLoadXYLOD1BoostInAirDotEnd);
  DCONST_DVARFLT_cl_transientWorldLoadXYLOD1BoostInAirNearDistStart = Dvar_Deregister(DCONST_DVARFLT_cl_transientWorldLoadXYLOD1BoostInAirNearDistStart);
  DCONST_DVARFLT_cl_transientWorldLoadXYLOD1BoostInAirNearDistEnd = Dvar_Deregister(DCONST_DVARFLT_cl_transientWorldLoadXYLOD1BoostInAirNearDistEnd);
  DCONST_DVARFLT_cl_transientWorldLoadXYLOD1BoostInAirFarDistStart = Dvar_Deregister(DCONST_DVARFLT_cl_transientWorldLoadXYLOD1BoostInAirFarDistStart);
  DCONST_DVARFLT_cl_transientWorldLoadXYLOD1BoostInAirFarDistEnd = Dvar_Deregister(DCONST_DVARFLT_cl_transientWorldLoadXYLOD1BoostInAirFarDistEnd);
  DCONST_DVARFLT_cl_transientWorldLoadXYLOD1BoostInAirZStart = Dvar_Deregister(DCONST_DVARFLT_cl_transientWorldLoadXYLOD1BoostInAirZStart);
  DCONST_DVARFLT_cl_transientWorldLoadXYLOD1BoostInAirZEnd = Dvar_Deregister(DCONST_DVARFLT_cl_transientWorldLoadXYLOD1BoostInAirZEnd);
  DCONST_DVARFLT_cl_transientWorldLoadXYLOD1BoostInAirMultiplierStart = Dvar_Deregister(DCONST_DVARFLT_cl_transientWorldLoadXYLOD1BoostInAirMultiplierStart);
  DCONST_DVARFLT_cl_transientWorldLoadXYLOD1BoostInAirMultiplierStartViewZ = Dvar_Deregister(DCONST_DVARFLT_cl_transientWorldLoadXYLOD1BoostInAirMultiplierStartViewZ);
  DCONST_DVARFLT_cl_transientWorldLoadXYLOD1BoostInAirMultiplierFinish = Dvar_Deregister(DCONST_DVARFLT_cl_transientWorldLoadXYLOD1BoostInAirMultiplierFinish);
  DCONST_DVARFLT_cl_transientWorldLoadXYLOD1BoostInAirMultiplierFinishViewZ = Dvar_Deregister(DCONST_DVARFLT_cl_transientWorldLoadXYLOD1BoostInAirMultiplierFinishViewZ);
  DVARBOOL_cl_transientWorldLoadXYLOD1BoostInAirBRMethodEnabled = Dvar_Deregister(DVARBOOL_cl_transientWorldLoadXYLOD1BoostInAirBRMethodEnabled);
  DVARFLT_cl_transientWorldLoadXYLOD1BoostInAirBRDistance = Dvar_Deregister(DVARFLT_cl_transientWorldLoadXYLOD1BoostInAirBRDistance);
  DCONST_DVARFLT_cl_transientWorldVisibleLOD1BoostInAirZStart = Dvar_Deregister(DCONST_DVARFLT_cl_transientWorldVisibleLOD1BoostInAirZStart);
  DCONST_DVARFLT_cl_transientWorldVisibleLOD1BoostInAirZEnd = Dvar_Deregister(DCONST_DVARFLT_cl_transientWorldVisibleLOD1BoostInAirZEnd);
  DCONST_DVARFLT_cl_transientWorldVisibleLOD1BoostInAirMaxAdd = Dvar_Deregister(DCONST_DVARFLT_cl_transientWorldVisibleLOD1BoostInAirMaxAdd);
  DCONST_DVARBOOL_cl_transientWorldLoadDistEnabled = Dvar_Deregister(DCONST_DVARBOOL_cl_transientWorldLoadDistEnabled);
  DCONST_DVARFLT_cl_transientWorldLoadDistForceValue = Dvar_Deregister(DCONST_DVARFLT_cl_transientWorldLoadDistForceValue);
  DCONST_DVARVEC3_cl_transientWorldLoadDefaultPos = Dvar_Deregister(DCONST_DVARVEC3_cl_transientWorldLoadDefaultPos);
  DCONST_DVARFLT_cl_transientWorldOnTopOfHighLODFactor = Dvar_Deregister(DCONST_DVARFLT_cl_transientWorldOnTopOfHighLODFactor);
  DVARFLT_cl_transientWorldSwitchDelayLOD0Min = Dvar_Deregister(DVARFLT_cl_transientWorldSwitchDelayLOD0Min);
  DVARFLT_cl_transientWorldSwitchDelayLOD0MinDistance = Dvar_Deregister(DVARFLT_cl_transientWorldSwitchDelayLOD0MinDistance);
  DVARFLT_cl_transientWorldSwitchDelayLOD0Max = Dvar_Deregister(DVARFLT_cl_transientWorldSwitchDelayLOD0Max);
  DVARFLT_cl_transientWorldSwitchDelayLOD0MaxDistance = Dvar_Deregister(DVARFLT_cl_transientWorldSwitchDelayLOD0MaxDistance);
  DVARFLT_cl_transientWorldSwitchDelayLOD1Min = Dvar_Deregister(DVARFLT_cl_transientWorldSwitchDelayLOD1Min);
  DVARFLT_cl_transientWorldSwitchDelayLOD1MinDistance = Dvar_Deregister(DVARFLT_cl_transientWorldSwitchDelayLOD1MinDistance);
  DVARFLT_cl_transientWorldSwitchDelayLOD1Max = Dvar_Deregister(DVARFLT_cl_transientWorldSwitchDelayLOD1Max);
  DVARFLT_cl_transientWorldSwitchDelayLOD1MaxDistance = Dvar_Deregister(DVARFLT_cl_transientWorldSwitchDelayLOD1MaxDistance);
  DVARFLT_cl_transientWorldSwitchDelayZoomLOD0Min = Dvar_Deregister(DVARFLT_cl_transientWorldSwitchDelayZoomLOD0Min);
  DVARFLT_cl_transientWorldSwitchDelayZoomLOD0MinDistance = Dvar_Deregister(DVARFLT_cl_transientWorldSwitchDelayZoomLOD0MinDistance);
  DVARFLT_cl_transientWorldSwitchDelayZoomLOD0Max = Dvar_Deregister(DVARFLT_cl_transientWorldSwitchDelayZoomLOD0Max);
  DVARFLT_cl_transientWorldSwitchDelayZoomLOD0MaxDistance = Dvar_Deregister(DVARFLT_cl_transientWorldSwitchDelayZoomLOD0MaxDistance);
  DVARFLT_cl_transientWorldSwitchDelayZoomLOD1Min = Dvar_Deregister(DVARFLT_cl_transientWorldSwitchDelayZoomLOD1Min);
  DVARFLT_cl_transientWorldSwitchDelayZoomLOD1MinDistance = Dvar_Deregister(DVARFLT_cl_transientWorldSwitchDelayZoomLOD1MinDistance);
  DVARFLT_cl_transientWorldSwitchDelayZoomLOD1Max = Dvar_Deregister(DVARFLT_cl_transientWorldSwitchDelayZoomLOD1Max);
  DVARFLT_cl_transientWorldSwitchDelayZoomLOD1MaxDistance = Dvar_Deregister(DVARFLT_cl_transientWorldSwitchDelayZoomLOD1MaxDistance);
  DVARFLT_cl_transientWorldSwitchDelayLowerLod = Dvar_Deregister(DVARFLT_cl_transientWorldSwitchDelayLowerLod);
  DVARFLT_cl_transientWorldZoomCutoffLoad = Dvar_Deregister(DVARFLT_cl_transientWorldZoomCutoffLoad);
  DVARFLT_cl_transientWorldZoomCutoffVisibility = Dvar_Deregister(DVARFLT_cl_transientWorldZoomCutoffVisibility);
  DVARFLT_cl_transientWorldZoomVisibilityFovCutoff = Dvar_Deregister(DVARFLT_cl_transientWorldZoomVisibilityFovCutoff);
  DVARFLT_cl_transientWorldZoomLoadFovCutoff = Dvar_Deregister(DVARFLT_cl_transientWorldZoomLoadFovCutoff);
  DVARFLT_cl_transientWorldZoomFovXPadding = Dvar_Deregister(DVARFLT_cl_transientWorldZoomFovXPadding);
  DVARFLT_cl_transientWorldZoomFovYPadding = Dvar_Deregister(DVARFLT_cl_transientWorldZoomFovYPadding);
  DVARFLT_cl_transientWorldZoomLOD0Dist = Dvar_Deregister(DVARFLT_cl_transientWorldZoomLOD0Dist);
  DVARFLT_cl_transientWorldZoomLOD1Dist = Dvar_Deregister(DVARFLT_cl_transientWorldZoomLOD1Dist);
  DVARFLT_cl_transientWorldLoadXYMultiplierZoomLOD = Dvar_Deregister(DVARFLT_cl_transientWorldLoadXYMultiplierZoomLOD);
  DVARBOOL_cl_transientWorldZoomFixedDist = Dvar_Deregister(DVARBOOL_cl_transientWorldZoomFixedDist);
  DVARFLT_cl_transientWorldZoomLOD0FixedDist = Dvar_Deregister(DVARFLT_cl_transientWorldZoomLOD0FixedDist);
  DVARFLT_cl_transientWorldZoomLOD1FixedDist = Dvar_Deregister(DVARFLT_cl_transientWorldZoomLOD1FixedDist);
  DCONST_DVARFLT_cl_transientWorldVisibleHintLvl0 = Dvar_Deregister(DCONST_DVARFLT_cl_transientWorldVisibleHintLvl0);
  DCONST_DVARFLT_cl_transientWorldVisibleHintLvl1 = Dvar_Deregister(DCONST_DVARFLT_cl_transientWorldVisibleHintLvl1);
  DVARFLT_cl_transientWorldVisibleHintLOD0Addition = Dvar_Deregister(DVARFLT_cl_transientWorldVisibleHintLOD0Addition);
  DVARBOOL_cl_transientWorldHintPredictedStreamPositions = Dvar_Deregister(DVARBOOL_cl_transientWorldHintPredictedStreamPositions);
  DVARBOOL_cl_transientWorldStreamLookAheadEnabled = Dvar_Deregister(DVARBOOL_cl_transientWorldStreamLookAheadEnabled);
  DVARFLT_cl_transientWorldStreamLookAheadTime = Dvar_Deregister(DVARFLT_cl_transientWorldStreamLookAheadTime);
  DVARFLT_cl_transientWorldStreamLookAheadMinDist = Dvar_Deregister(DVARFLT_cl_transientWorldStreamLookAheadMinDist);
  DVARFLT_cl_transientWorldStreamLookAheadMaxDist = Dvar_Deregister(DVARFLT_cl_transientWorldStreamLookAheadMaxDist);
  DCONST_DVARBOOL_cl_transientWorldSpilloverPriorities = Dvar_Deregister(DCONST_DVARBOOL_cl_transientWorldSpilloverPriorities);
  DVARBOOL_cl_transientWorldFallingHintEnabled = Dvar_Deregister(DVARBOOL_cl_transientWorldFallingHintEnabled);
  DCONST_DVARBOOL_cl_transientWorldIgnoreTransientSkip = Dvar_Deregister(DCONST_DVARBOOL_cl_transientWorldIgnoreTransientSkip);
  DCONST_DVARINT_cl_transientWorldLimitVisibleLOD = Dvar_Deregister(DCONST_DVARINT_cl_transientWorldLimitVisibleLOD);
  DCONST_DVARINT_cl_transientWorldForceVisibleLOD = Dvar_Deregister(DCONST_DVARINT_cl_transientWorldForceVisibleLOD);
  DCONST_DVARBOOL_cl_transientWorldSoakTest = Dvar_Deregister(DCONST_DVARBOOL_cl_transientWorldSoakTest);
  DCONST_DVARBOOL_cl_transientWorldDebugDelay = Dvar_Deregister(DCONST_DVARBOOL_cl_transientWorldDebugDelay);
  DCONST_DVARBOOL_cl_transientWorldDebugHintPosActive = Dvar_Deregister(DCONST_DVARBOOL_cl_transientWorldDebugHintPosActive);
  DCONST_DVARVEC3_cl_transientWorldDebugHintPos = Dvar_Deregister(DCONST_DVARVEC3_cl_transientWorldDebugHintPos);
  DVARBOOL_cl_transientWorldOverlay = Dvar_Deregister(DVARBOOL_cl_transientWorldOverlay);
  DVARBOOL_cl_transientWorldOverlayTransientIndex = Dvar_Deregister(DVARBOOL_cl_transientWorldOverlayTransientIndex);
  DCONST_DVARBOOL_cl_transientWorldOverlayStreamSync = Dvar_Deregister(DCONST_DVARBOOL_cl_transientWorldOverlayStreamSync);
  DCONST_DVARINT_cl_transientWorldOverlayStreamSyncTimeout = Dvar_Deregister(DCONST_DVARINT_cl_transientWorldOverlayStreamSyncTimeout);
  DVARVEC2_cl_transientWorldOverlayOffset = Dvar_Deregister(DVARVEC2_cl_transientWorldOverlayOffset);
  DVARBOOL_cl_transientWorldOverlayPriorityList = Dvar_Deregister(DVARBOOL_cl_transientWorldOverlayPriorityList);
  DVARBOOL_cl_transientWorldOverlayPriorityColors = Dvar_Deregister(DVARBOOL_cl_transientWorldOverlayPriorityColors);
  DCONST_DVARBOOL_cl_transientWorldOverlayPriorityColorsRequested = Dvar_Deregister(DCONST_DVARBOOL_cl_transientWorldOverlayPriorityColorsRequested);
  DVARBOOL_cl_transientWorldOverlayBounds = Dvar_Deregister(DVARBOOL_cl_transientWorldOverlayBounds);
  DVARFLT_cl_transientWorldOverlayZoom = Dvar_Deregister(DVARFLT_cl_transientWorldOverlayZoom);
  DVARVEC2_cl_transientWorldOverlayZoomScreenSize = Dvar_Deregister(DVARVEC2_cl_transientWorldOverlayZoomScreenSize);
  DCONST_DVARBOOL_cl_transientWorldStreamProgress = Dvar_Deregister(DCONST_DVARBOOL_cl_transientWorldStreamProgress);
  DCONST_DVARINT_cl_transientWorldOverlayLodCount = Dvar_Deregister(DCONST_DVARINT_cl_transientWorldOverlayLodCount);
  DCONST_DVARBOOL_cl_transientWorldOverlayDrawCellNumbers = Dvar_Deregister(DCONST_DVARBOOL_cl_transientWorldOverlayDrawCellNumbers);
  DCONST_DVARBOOL_cl_transientWorldOverlayDrawAllCellNumbers = Dvar_Deregister(DCONST_DVARBOOL_cl_transientWorldOverlayDrawAllCellNumbers);
  DCONST_DVARBOOL_cl_transientWorldOverlayDrawDelayValues = Dvar_Deregister(DCONST_DVARBOOL_cl_transientWorldOverlayDrawDelayValues);
  DCONST_DVARBOOL_cl_transientWorldOverlayPriorityListSkipLod1 = Dvar_Deregister(DCONST_DVARBOOL_cl_transientWorldOverlayPriorityListSkipLod1);
  DCONST_DVARBOOL_cl_transientWorldOverlayDrawLOD1Indices = Dvar_Deregister(DCONST_DVARBOOL_cl_transientWorldOverlayDrawLOD1Indices);
  DCONST_DVARBOOL_cl_transientWorldOverlayDrawZBoundsTopValue = Dvar_Deregister(DCONST_DVARBOOL_cl_transientWorldOverlayDrawZBoundsTopValue);
  DCONST_DVARINT_cl_transientWorldPriorityGraph = Dvar_Deregister(DCONST_DVARINT_cl_transientWorldPriorityGraph);
  DCONST_DVARVEC2_cl_transientWorldPriorityScreenOffset = Dvar_Deregister(DCONST_DVARVEC2_cl_transientWorldPriorityScreenOffset);
  DCONST_DVARVEC2_cl_transientWorldPriorityScreenSize = Dvar_Deregister(DCONST_DVARVEC2_cl_transientWorldPriorityScreenSize);
  DCONST_DVARFLT_cl_transientWorldPriorityGraphXMin = Dvar_Deregister(DCONST_DVARFLT_cl_transientWorldPriorityGraphXMin);
  DCONST_DVARFLT_cl_transientWorldPriorityGraphXMax = Dvar_Deregister(DCONST_DVARFLT_cl_transientWorldPriorityGraphXMax);
  DCONST_DVARFLT_cl_transientWorldPriorityGraphYMin = Dvar_Deregister(DCONST_DVARFLT_cl_transientWorldPriorityGraphYMin);
  DCONST_DVARFLT_cl_transientWorldPriorityGraphYMax = Dvar_Deregister(DCONST_DVARFLT_cl_transientWorldPriorityGraphYMax);
  DCONST_DVARINT_cl_transientWorldPriorityGraphLabels = Dvar_Deregister(DCONST_DVARINT_cl_transientWorldPriorityGraphLabels);
  DCONST_DVARINT_cl_transientWorldPriorityGraphLod = Dvar_Deregister(DCONST_DVARINT_cl_transientWorldPriorityGraphLod);
  DCONST_DVARBOOL_cl_transientWorldPriorityGraphHighlightInFrustum = Dvar_Deregister(DCONST_DVARBOOL_cl_transientWorldPriorityGraphHighlightInFrustum);
  DCONST_DVARBOOL_cl_transientWorldDrawBounds = Dvar_Deregister(DCONST_DVARBOOL_cl_transientWorldDrawBounds);
  DCONST_DVARINT_cl_transientWorldBudgetLod0Memory = Dvar_Deregister(DCONST_DVARINT_cl_transientWorldBudgetLod0Memory);
  DVARINT_cl_transientCollision_MemoryBudgetFrontendLowMem = Dvar_Deregister(DVARINT_cl_transientCollision_MemoryBudgetFrontendLowMem);
  DVARINT_cl_transientCollision_MemoryBudgetGameLowMem = Dvar_Deregister(DVARINT_cl_transientCollision_MemoryBudgetGameLowMem);
  DVARINT_cl_transientCollision_MemoryBudgetFrontend = Dvar_Deregister(DVARINT_cl_transientCollision_MemoryBudgetFrontend);
  DVARINT_cl_transientCollision_MemoryBudgetGame = Dvar_Deregister(DVARINT_cl_transientCollision_MemoryBudgetGame);
  DCONST_DVARINT_cl_transientCollision_MemoryBudgetReductionMap = Dvar_Deregister(DCONST_DVARINT_cl_transientCollision_MemoryBudgetReductionMap);
  DVARBOOL_cl_transientCollision_Overlay = Dvar_Deregister(DVARBOOL_cl_transientCollision_Overlay);
  DVARBOOL_cl_transientCollision_EnableStreamingUpdates = Dvar_Deregister(DVARBOOL_cl_transientCollision_EnableStreamingUpdates);
  DCONST_DVARINT_cl_transientCollision_MaxTilesOverride = Dvar_Deregister(DCONST_DVARINT_cl_transientCollision_MaxTilesOverride);
  DVARINT_cl_transientCollision_debugDisplayOffsetX = Dvar_Deregister(DVARINT_cl_transientCollision_debugDisplayOffsetX);
  DVARINT_cl_transientCollision_debugDisplayOffsetY = Dvar_Deregister(DVARINT_cl_transientCollision_debugDisplayOffsetY);
  DVARBOOL_cl_transientCollision_debugDump = Dvar_Deregister(DVARBOOL_cl_transientCollision_debugDump);
  DCONST_DVARINT_cl_streamSync_connectTimeout = Dvar_Deregister(DCONST_DVARINT_cl_streamSync_connectTimeout);
  DCONST_DVARBOOL_cl_streamSync_devVerbose = Dvar_Deregister(DCONST_DVARBOOL_cl_streamSync_devVerbose);
  DCONST_DVARBOOL_cl_streamSync_devClearOnRequest = Dvar_Deregister(DCONST_DVARBOOL_cl_streamSync_devClearOnRequest);
  DVARBOOL_cl_hudDrawsBehindUI = Dvar_Deregister(DVARBOOL_cl_hudDrawsBehindUI);
  DVARFLT_cl_timeout = Dvar_Deregister(DVARFLT_cl_timeout);
  DVARFLT_cl_connectTimeout = Dvar_Deregister(DVARFLT_cl_connectTimeout);
  DVARINT_cl_retransmitTimeout = Dvar_Deregister(DVARINT_cl_retransmitTimeout);
  DVARINT_cl_connectionAttempts = Dvar_Deregister(DVARINT_cl_connectionAttempts);
  DVARBOOL_cl_transmission_error_enabled = Dvar_Deregister(DVARBOOL_cl_transmission_error_enabled);
  DVARINT_cl_inhibit_stats_upload = Dvar_Deregister(DVARINT_cl_inhibit_stats_upload);
  DVARFLT_cl_migrationTimeout = Dvar_Deregister(DVARFLT_cl_migrationTimeout);
  DVARBOOL_cl_shownuments = Dvar_Deregister(DVARBOOL_cl_shownuments);
  DVARBOOL_cl_showTimeDelta = Dvar_Deregister(DVARBOOL_cl_showTimeDelta);
  DVARINT_cl_maxpackets = Dvar_Deregister(DVARINT_cl_maxpackets);
  DVARINT_cl_smoothSnapInterval = Dvar_Deregister(DVARINT_cl_smoothSnapInterval);
  DVARINT_cl_serverStatusResendTime = Dvar_Deregister(DVARINT_cl_serverStatusResendTime);
  DVARSTR_cl_motdString = Dvar_Deregister(DVARSTR_cl_motdString);
  DVARBOOL_cl_demo_uploadfb = Dvar_Deregister(DVARBOOL_cl_demo_uploadfb);
  DVARBOOL_cl_debugMessageKey = Dvar_Deregister(DVARBOOL_cl_debugMessageKey);
  DVARINT_cl_extrap_tracking_start_time = Dvar_Deregister(DVARINT_cl_extrap_tracking_start_time);
  DVARINT_cl_adjust_time_fast_cutoff = Dvar_Deregister(DVARINT_cl_adjust_time_fast_cutoff);
  DVARINT_cl_adjust_time_fixed_ideal_time = Dvar_Deregister(DVARINT_cl_adjust_time_fixed_ideal_time);
  DVARINT_cl_adjust_time_interval_method = Dvar_Deregister(DVARINT_cl_adjust_time_interval_method);
  DVARBOOL_cl_adjust_time_print = Dvar_Deregister(DVARBOOL_cl_adjust_time_print);
  DVARINT_cl_adjust_time_throttle_type = Dvar_Deregister(DVARINT_cl_adjust_time_throttle_type);
  DVARINT_cl_adjust_time_throttle_window = Dvar_Deregister(DVARINT_cl_adjust_time_throttle_window);
  DVARINT_cl_adjust_time_throttle_offset = Dvar_Deregister(DVARINT_cl_adjust_time_throttle_offset);
  DVARINT_cl_adjust_time_throttle_surplus = Dvar_Deregister(DVARINT_cl_adjust_time_throttle_surplus);
  DVARINT_cl_adjust_time_fast_adjust = Dvar_Deregister(DVARINT_cl_adjust_time_fast_adjust);
  DVARINT_cl_adjust_time_slow_adjust = Dvar_Deregister(DVARINT_cl_adjust_time_slow_adjust);
  DVARINT_cl_adjust_time_max_buffer = Dvar_Deregister(DVARINT_cl_adjust_time_max_buffer);
  DVARINT_cl_adjust_time_max_window = Dvar_Deregister(DVARINT_cl_adjust_time_max_window);
  DVARINT_cl_netperf_telemetry_mode = Dvar_Deregister(DVARINT_cl_netperf_telemetry_mode);
  DVARBOOL_cl_usercmd_print = Dvar_Deregister(DVARBOOL_cl_usercmd_print);
  DVARINT_mlg_game_pause_server_delay = Dvar_Deregister(DVARINT_mlg_game_pause_server_delay);
  DVARINT_mlg_game_paused_heartbeat_period = Dvar_Deregister(DVARINT_mlg_game_paused_heartbeat_period);
  DVARINT_lui_codcaster_resume_countdown = Dvar_Deregister(DVARINT_lui_codcaster_resume_countdown);
  DCONST_DVARBOOL_cl_uistreaming_images = Dvar_Deregister(DCONST_DVARBOOL_cl_uistreaming_images);
  DVARINT_dw_profanity_check_wait_count = Dvar_Deregister(DVARINT_dw_profanity_check_wait_count);
  DVARINT_mp_bots_sec_before_lobby_autofill = Dvar_Deregister(DVARINT_mp_bots_sec_before_lobby_autofill);
  DVARBOOL_estrangedClientList = Dvar_Deregister(DVARBOOL_estrangedClientList);
  DVARVEC2_estrangedClientPos = Dvar_Deregister(DVARVEC2_estrangedClientPos);
  DVARINT_estrangedClientHeight = Dvar_Deregister(DVARINT_estrangedClientHeight);
  DVARFLT_estrangedClientSize = Dvar_Deregister(DVARFLT_estrangedClientSize);
  DVARBOOL_cl_voice_allow_jip_talking = Dvar_Deregister(DVARBOOL_cl_voice_allow_jip_talking);
  DVARBOOL_cl_voice_squad_only_in_lobby = Dvar_Deregister(DVARBOOL_cl_voice_squad_only_in_lobby);
  DVARBOOL_cl_voice_direct_send_to_private_party = Dvar_Deregister(DVARBOOL_cl_voice_direct_send_to_private_party);
  DVARBOOL_voice_on_screen_debug = Dvar_Deregister(DVARBOOL_voice_on_screen_debug);
  DVARINT_cl_deathMessageWidth = Dvar_Deregister(DVARINT_cl_deathMessageWidth);
  CG_MainMP_DeRegisterDvars();
}

/*
==============
CL_MainMP_WasMapAlreadyLoaded
==============
*/
__int64 CL_MainMP_WasMapAlreadyLoaded(LocalClientNum_t localClientNum)
{
  Com_IsAnyLocalServerRunning();
  return 1i64;
}

/*
==============
CL_SetServerInfo
==============
*/
void CL_SetServerInfo(ClServerInfo *server, const char *info, int ping)
{
  __int16 v3; 
  const char *v6; 
  const char *v7; 
  __int64 v8; 
  __int64 v9; 
  const char *v10; 
  const char *v11; 
  const char *v12; 
  const char *v13; 
  const char *v14; 
  const char *v15; 
  bdSecurityID v16; 
  bdSecurityKey *Key; 
  const char *v18; 
  const char *v19; 
  int v22; 
  char dest[32]; 
  int v27; 

  if ( server )
  {
    v3 = ping;
    _RBP = server;
    if ( info )
    {
      v6 = Info_ValueForKey(info, "clients");
      _RBP->clients = atoi(v6);
      v7 = Info_ValueForKey(info, "hostname");
      v8 = -1i64;
      if ( _RBP->isDedicated )
      {
        v9 = -1i64;
        do
          ++v9;
        while ( v7[v9] );
        if ( !(_DWORD)v9 )
          v7 = SEH_SafeTranslateString("NETWORK/DEDICATED_SERVER");
      }
      Core_strcpy_truncate(_RBP->hostName, 0x24ui64, v7);
      v10 = Info_ValueForKey(info, "mapname");
      Core_strcpy_truncate(_RBP->mapName, 0x24ui64, v10);
      v11 = Info_ValueForKey(info, "maxclients");
      _RBP->maxClients = atoi(v11);
      v12 = Info_ValueForKey(info, "gametype");
      Core_strcpy_truncate(_RBP->gameType, 0x10ui64, v12);
      v13 = Info_ValueForKey(info, "minping");
      _RBP->minPing = atoi(v13);
      v14 = Info_ValueForKey(info, "maxping");
      _RBP->maxPing = atoi(v14);
      v15 = Info_ValueForKey(info, "secid");
      v16 = (bdSecurityID)StringToInt64(v15);
      *XSECURITY_INFO::GetId(&_RBP->xninfo) = v16;
      Key = XSECURITY_INFO::GetKey(&_RBP->xninfo);
      v18 = Info_ValueForKey(info, "seckey");
      StringToInt128(v18, Key->ab);
      v19 = Info_ValueForKey(info, "hostaddr");
      do
        ++v8;
      while ( v19[v8] );
      bdBase64::decode(v19, v8, dest, 0x71u);
      __asm
      {
        vmovups ymm0, ymmword ptr [rsp+0D8h+dest]
        vmovups ymm1, [rsp+0D8h+var_98]
      }
      v22 = v27;
      __asm
      {
        vmovups ymmword ptr [rbp+0], ymm0
        vmovups xmm0, [rsp+0D8h+var_78]
        vmovups ymmword ptr [rbp+20h], ymm1
        vmovups xmmword ptr [rbp+40h], xmm0
      }
      *(_DWORD *)&_RBP->xnaddr.addrBuff[80] = v22;
    }
    _RBP->ping = v3;
  }
}

/*
==============
CL_SetServerInfoByAddress
==============
*/
void CL_SetServerInfoByAddress(netadr_t *from, const char *info, int ping)
{
  __int16 v4; 
  int addrHandleIndex; 
  int v10; 
  const char *v11; 
  const char *v12; 
  __int64 v13; 
  const char *v14; 
  const char *v15; 
  const char *v16; 
  const char *v17; 
  const char *v18; 
  const char *v19; 
  bdSecurityID v20; 
  bdSecurityKey *Key; 
  const char *v22; 
  const char *v23; 
  __int64 v24; 
  int v27; 
  netadr_t v29; 
  netadr_t v30; 
  char dest[32]; 
  int v34; 

  _RSI = cls.localServers;
  v4 = ping;
  _R14 = from;
  do
  {
    __asm { vmovups xmm0, xmmword ptr [rsi+6Ch] }
    addrHandleIndex = _RSI->adr.addrHandleIndex;
    __asm
    {
      vmovups [rsp+118h+var_F8], xmm0
      vmovups xmm0, xmmword ptr [r14]
    }
    v29.addrHandleIndex = addrHandleIndex;
    v10 = _R14->addrHandleIndex;
    __asm { vmovups [rsp+118h+var_D8], xmm0 }
    v30.addrHandleIndex = v10;
    if ( NET_CompareAdr(&v30, &v29) && _RSI )
    {
      if ( info )
      {
        v11 = Info_ValueForKey(info, "clients");
        _RSI->clients = atoi(v11);
        v12 = Info_ValueForKey(info, "hostname");
        if ( _RSI->isDedicated )
        {
          v13 = -1i64;
          do
            ++v13;
          while ( v12[v13] );
          if ( !(_DWORD)v13 )
            v12 = SEH_SafeTranslateString("NETWORK/DEDICATED_SERVER");
        }
        Core_strcpy_truncate(_RSI->hostName, 0x24ui64, v12);
        v14 = Info_ValueForKey(info, "mapname");
        Core_strcpy_truncate(_RSI->mapName, 0x24ui64, v14);
        v15 = Info_ValueForKey(info, "maxclients");
        _RSI->maxClients = atoi(v15);
        v16 = Info_ValueForKey(info, "gametype");
        Core_strcpy_truncate(_RSI->gameType, 0x10ui64, v16);
        v17 = Info_ValueForKey(info, "minping");
        _RSI->minPing = atoi(v17);
        v18 = Info_ValueForKey(info, "maxping");
        _RSI->maxPing = atoi(v18);
        v19 = Info_ValueForKey(info, "secid");
        v20 = (bdSecurityID)StringToInt64(v19);
        *XSECURITY_INFO::GetId(&_RSI->xninfo) = v20;
        Key = XSECURITY_INFO::GetKey(&_RSI->xninfo);
        v22 = Info_ValueForKey(info, "seckey");
        StringToInt128(v22, Key->ab);
        v23 = Info_ValueForKey(info, "hostaddr");
        v24 = -1i64;
        do
          ++v24;
        while ( v23[v24] );
        bdBase64::decode(v23, v24, dest, 0x71u);
        __asm
        {
          vmovups ymm0, ymmword ptr [rsp+118h+dest]
          vmovups ymm1, [rsp+118h+var_98]
        }
        v27 = v34;
        __asm
        {
          vmovups ymmword ptr [rsi], ymm0
          vmovups xmm0, [rsp+118h+var_78]
          vmovups ymmword ptr [rsi+20h], ymm1
          vmovups xmmword ptr [rsi+40h], xmm0
        }
        *(_DWORD *)&_RSI->xnaddr.addrBuff[80] = v27;
      }
      _RSI->ping = v4;
    }
    ++_RSI;
  }
  while ( (__int64)_RSI < (__int64)cls.matchData.def );
}

