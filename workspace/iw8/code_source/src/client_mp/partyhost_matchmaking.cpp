/*
==============
PartyHost_LobbyDisbandedCallback
==============
*/

void __fastcall PartyHost_LobbyDisbandedCallback(const unsigned __int64 lobbyId)
{
  ?PartyHost_LobbyDisbandedCallback@@YAX_K@Z(lobbyId);
}

/*
==============
PartyHost_RequestMatchmakingInfoCallback
==============
*/

bool __fastcall PartyHost_RequestMatchmakingInfoCallback(const XUID xuid)
{
  return ?PartyHost_RequestMatchmakingInfoCallback@@YA_NUXUID@@@Z(xuid);
}

/*
==============
PartyHost_CreateLobbyCallback
==============
*/

void __fastcall PartyHost_CreateLobbyCallback(const unsigned __int64 lobbyId, const XSESSION_INFO *hostInfo, const bool isDedicatedServer)
{
  ?PartyHost_CreateLobbyCallback@@YAX_KAEBVXSESSION_INFO@@_N@Z(lobbyId, hostInfo, isDedicatedServer);
}

/*
==============
PartyHost_JoinLobbyCallback
==============
*/

void __fastcall PartyHost_JoinLobbyCallback(const unsigned __int64 lobbyId, const XUID newHostUID, const XSESSION_INFO *hostInfo, const bool isDedicatedServer)
{
  ?PartyHost_JoinLobbyCallback@@YAX_KUXUID@@AEBVXSESSION_INFO@@_N@Z(lobbyId, newHostUID, hostInfo, isDedicatedServer);
}

/*
==============
PartyHost_FailureCallback
==============
*/

void __fastcall PartyHost_FailureCallback()
{
  ?PartyHost_FailureCallback@@YAXXZ();
}

/*
==============
Party_MatchmakingTokenUpdated
==============
*/

void __fastcall Party_MatchmakingTokenUpdated(const XUID uid, const unsigned __int64 mmToken, const bool isPrimaryAccount)
{
  ?Party_MatchmakingTokenUpdated@@YAXUXUID@@_K_N@Z(uid, mmToken, isPrimaryAccount);
}

/*
==============
PartyMatchmaking_Init
==============
*/

void PartyMatchmaking_Init(void)
{
  ?PartyMatchmaking_Init@@YAXXZ();
}

/*
==============
PartyMatchmaking_Frame
==============
*/

void __fastcall PartyMatchmaking_Frame(PartyData *party, const int localControllerIndex)
{
  ?PartyMatchmaking_Frame@@YAXPEAUPartyData@@H@Z(party, localControllerIndex);
}

/*
==============
PartyHost_CreateLobbyCallback
==============
*/
void PartyHost_CreateLobbyCallback(const unsigned __int64 lobbyId, const XSESSION_INFO *hostInfo, const bool isDedicatedServer)
{
  const char *v4; 
  PartyData *PartyData; 
  const XNADDR *Address; 
  int StartingControllerIndex; 

  v4 = "No - we do not have a dedicated server";
  if ( isDedicatedServer )
    v4 = "Yes - we have a dedicated server";
  Com_Printf(25, "PartyHost_CreateLobbyCallback - we are the new LOBBY host (Thank you Demonware)! (%zu). %s\n", lobbyId, v4);
  PartyData = Lobby_GetPartyData();
  if ( !Party_IsRunning(PartyData) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost_matchmaking.cpp", 46, ASSERT_TYPE_ASSERT, "(Party_IsRunning( party ))", (const char *)&queryFormat, "Party_IsRunning( party )") )
    __debugbreak();
  Address = XSESSION_INFO::GetAddress((XSESSION_INFO *)hostInfo);
  if ( !NET_IsLocalXnaddr(Address) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost_matchmaking.cpp", 47, ASSERT_TYPE_ASSERT, "(NET_IsLocalXnaddr( hostInfo.GetAddress() ))", "%s\n\tMatchmaker backend host addr did not match ours", "NET_IsLocalXnaddr( hostInfo.GetAddress() )") )
    __debugbreak();
  if ( Party_IsRunning(PartyData) )
  {
    StartingControllerIndex = Party_GetStartingControllerIndex(PartyData);
    PartyHost_UpdateSession(PartyData, StartingControllerIndex, lobbyId, hostInfo);
    OnlineMatchmakerOmniscient::CreateLobbySuccess(&OnlineMatchmakerOmniscient::ms_instance, lobbyId);
  }
  else
  {
    Com_PrintError(25, "Party not running when received CreateLobbyCallback!\n");
  }
}

/*
==============
PartyHost_FailureCallback
==============
*/
void PartyHost_FailureCallback(void)
{
  OnlineMatchmakerOmniscient::ResetLobby(&OnlineMatchmakerOmniscient::ms_instance);
}

/*
==============
PartyHost_IsMatchmakingRunnable
==============
*/
bool PartyHost_IsMatchmakingRunnable(const PartyData *party)
{
  const dvar_t *v2; 

  if ( !Party_IsGameLobby(party) && !OnlineTournament_RequestedMatchmakingBracket() || OnlineTournament_IsInTournament() || !Party_AreWeHost(party) )
    return 0;
  v2 = DVARBOOL_online_disable_matchmaking_for_private_party_clients;
  if ( !DVARBOOL_online_disable_matchmaking_for_private_party_clients && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_disable_matchmaking_for_private_party_clients") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.enabled && !Party_AreWeHost(&g_partyData) )
    return 0;
  if ( PartyHost_ShouldStartHosting() )
  {
    PartyHost_SearchForGamesDebug(party, "Waiting - force start as host debug");
    return 0;
  }
  if ( !Dvar_GetBool_Internal_DebugName(DVARBOOL_xblive_privatematch, "xblive_privatematch") || Party_PrivateMatchmakingAllowed(party) )
  {
    if ( party->gameStartTime )
    {
      PartyHost_SearchForGamesDebug(party, "Waiting - Game starting");
      return 0;
    }
    else if ( PartyMigrate_MigrateActive(party) )
    {
      PartyHost_SearchForGamesDebug(party, "Waiting - Migrate Active");
      return 0;
    }
    else if ( Party_UsingPartyBasedTeams(party) && party->subpartyCount > 1 )
    {
      PartyHost_SearchForGamesDebug(party, "Waiting - Party-based teams ready");
      return 0;
    }
    else if ( PartyHost_AnyoneStillConnecting(party) )
    {
      PartyHost_SearchForGamesDebug(party, "Waiting - AnyoneStillConnecting");
      return 0;
    }
    else if ( Party_IsWaitingForMembers(party) )
    {
      PartyHost_SearchForGamesDebug(party, "Waiting - Waiting for party members");
      return 0;
    }
    else if ( PartyAtomic_IsJoiningActive(&g_partyJoinInfo) )
    {
      PartyHost_SearchForGamesDebug(party, "Waiting - Join in progress");
      return 0;
    }
    else if ( OnlineMatchmakerOmniscient::IsMatchmaking(&OnlineMatchmakerOmniscient::ms_instance) )
    {
      PartyHost_SearchForGamesDebug(party, "Waiting - The matchmaker is currently active, this means we've already inited it and haven't reset.");
      return 0;
    }
    else if ( Online_DcQos_IsComplete() )
    {
      if ( Live_BandwidthTestInProgress() )
      {
        PartyHost_SearchForGamesDebug(party, "Waiting - Bandwidth test is in progress");
        return 0;
      }
      else if ( NET_IsRelayStarted() )
      {
        return !OnlineTournamentSim_IsSimModeEnabled();
      }
      else
      {
        PartyHost_SearchForGamesDebug(party, "Waiting - relay not started");
        return 0;
      }
    }
    else
    {
      PartyHost_SearchForGamesDebug(party, "Waiting - DC QoS is in progress");
      return 0;
    }
  }
  else
  {
    PartyHost_SearchForGamesDebug(party, "Waiting - xblive_privatematch enabled");
    return 0;
  }
}

/*
==============
PartyHost_JoinLobbyCallback
==============
*/
void PartyHost_JoinLobbyCallback(const unsigned __int64 lobbyId, const XUID newHostUID, const XSESSION_INFO *hostInfo, const bool isDedicatedServer)
{
  const char *v5; 
  PartyData *PartyData; 
  PartyDisconnectReason v8; 
  int StartingControllerIndex; 
  PartyActiveClient MainActiveClient; 
  const XNADDR *Address; 
  const PartySplitscreenData *splitscreenData; 
  const dvar_t *v13; 
  PartyJoinType v14; 
  PartyJoinState v15; 

  v5 = "player host";
  if ( isDedicatedServer )
    v5 = "dedicated server";
  Com_Printf(25, "PartyHost_JoinLobbyCallback - we are joining a %s, lobby id (%zu)\n", v5, lobbyId);
  PartyData = Lobby_GetPartyData();
  if ( !PartyData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost_matchmaking.cpp", 68, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !Party_IsGameLobby(PartyData) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost_matchmaking.cpp", 69, ASSERT_TYPE_ASSERT, "(Party_IsGameLobby( party ))", (const char *)&queryFormat, "Party_IsGameLobby( party )") )
    __debugbreak();
  if ( g_partyData.inParty )
  {
    PartyMigrate_StopMigration(PartyData);
    LOBYTE(v8) = 10;
    PartyAtomic_AbortJoinAttempt(&g_partyJoinInfo, v8);
    g_partyData.m_lobbyId = lobbyId;
    StartingControllerIndex = Party_GetStartingControllerIndex(PartyData);
    MainActiveClient = Party_GetMainActiveClient(PartyData, StartingControllerIndex);
    if ( g_partyData.areWeHost || (Address = XSESSION_INFO::GetAddress((XSESSION_INFO *)hostInfo), NetConnection::CompareAddr(&g_partyData.currentHost.connections[MainActiveClient.localClientNum], Address)) )
    {
      splitscreenData = Party_GetSplitscreenData(&g_partyData);
      if ( PartyAtomic_SetupPotentialHostForJoining(MainActiveClient.localControllerIndex, hostInfo, GAME_LOBBY_ID, 0, &g_partyJoinInfo, splitscreenData) )
      {
        if ( Party_AreWeHost(&g_partyData) )
        {
          PartyAtomic_FillSubPartyInfoForParty(&g_partyJoinInfo, &g_partyData);
          v13 = DVARINT_pt_searchConnectAttempts;
          if ( !DVARINT_pt_searchConnectAttempts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "pt_searchConnectAttempts") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v13);
          v14 = PJT_MATCHMAKING;
          v15 = PARTYJOIN_REQUEST;
        }
        else
        {
          v13 = DVARINT_pt_connectAttempts;
          if ( !DVARINT_pt_connectAttempts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "pt_connectAttempts") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v13);
          v14 = PJT_HOSTPRESENCE;
          v15 = PARTYJOIN_COMMIT;
        }
        PartyAtomic_StartJoin(&g_partyJoinInfo, &g_partyData, v14, v15, v13->current.integer);
        g_partyJoinInfo.lobbyId = g_partyData.m_lobbyId;
      }
    }
  }
  else
  {
    Com_Printf(25, "\tprivate party not initialized - cannot determine if we need to join\n");
  }
}

/*
==============
PartyHost_LobbyDisbandedCallback
==============
*/
void PartyHost_LobbyDisbandedCallback(const unsigned __int64 lobbyId)
{
  OnlineMatchmakerOmniscient::ResetLobby(&OnlineMatchmakerOmniscient::ms_instance);
}

/*
==============
PartyHost_RequestMatchmakingInfoCallback
==============
*/
bool PartyHost_RequestMatchmakingInfoCallback(const XUID xuid)
{
  PartyData *ActiveParty; 
  signed int MemberByXUID; 
  int v4; 
  NetConnection *MemberConnection; 
  const char *v6; 

  ActiveParty = Party_GetActiveParty();
  MemberByXUID = Party_FindMemberByXUID(ActiveParty, xuid);
  v4 = MemberByXUID;
  if ( MemberByXUID < 0 || Party_IsMemberLocalPlayer(ActiveParty, MemberByXUID) )
    return 0;
  MemberConnection = (NetConnection *)Party_GetMemberConnection(ActiveParty, v4);
  if ( NetConnection::IsLocal(MemberConnection) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost_matchmaking.cpp", 115, ASSERT_TYPE_ASSERT, "(!connection.IsLocal())", (const char *)&queryFormat, "!connection.IsLocal()") )
    __debugbreak();
  v6 = j_va("%ipreqmminfo", (unsigned int)ActiveParty->partyId);
  return NetConnection::SendReliable(MemberConnection, v6, 2u);
}

/*
==============
PartyHost_SearchForGamesDebug
==============
*/
void PartyHost_SearchForGamesDebug(const PartyData *party, const char *debugString)
{
  int v4; 
  __int64 v5; 
  const char *v6; 
  char v7; 
  __int64 v8; 
  char v9; 
  const dvar_t *v10; 

  if ( Party_IsGameLobby(party) )
  {
    if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost_matchmaking.cpp", 158, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
      __debugbreak();
    if ( !Party_IsGameLobby(party) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost_matchmaking.cpp", 159, ASSERT_TYPE_ASSERT, "(Party_IsGameLobby( party ))", "%s\n\tCan't use globals if this is used for non-game lobbies", "Party_IsGameLobby( party )") )
      __debugbreak();
    if ( !debugString && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost_matchmaking.cpp", 160, ASSERT_TYPE_ASSERT, "(debugString)", (const char *)&queryFormat, "debugString") )
      __debugbreak();
    v4 = Sys_Milliseconds();
    v5 = 0x7FFFFFFFi64;
    v6 = debugString;
    if ( !debugString && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
      __debugbreak();
    do
    {
      v7 = v6[s_lastSearchDebugString - debugString];
      v8 = v5;
      v9 = *v6++;
      --v5;
      if ( !v8 )
        break;
      if ( v7 != v9 )
        goto LABEL_21;
    }
    while ( v7 );
    v10 = DVARINT_party_search_debug_delay_ms;
    if ( !DVARINT_party_search_debug_delay_ms && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_search_debug_delay_ms") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v10);
    if ( s_lastSearchDebugTime + v10->current.integer - v4 <= 0 )
    {
LABEL_21:
      Core_strcpy(s_lastSearchDebugString, 0x100ui64, debugString);
      s_lastSearchDebugTime = v4;
      Com_Printf(25, "PartyHost - SearchForGamesDebug - %s\n", debugString);
    }
  }
}

/*
==============
PartyMatchmaking_Frame
==============
*/
void PartyMatchmaking_Frame(PartyData *party, const int localControllerIndex)
{
  const dvar_t *v7; 
  const dvar_t *v8; 
  int VersionNumber; 
  const dvar_t *v10; 
  MatchmakingGameType integer; 
  const dvar_t *v12; 
  LocalClientNum_t ClientFromController; 
  const PartyData *PartyData; 
  PartyData *v15; 
  OmniscientMatchmakingParams outParams; 
  PrivateMatchId v17; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost_matchmaking.cpp", 326, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !party->session && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost_matchmaking.cpp", 327, ASSERT_TYPE_ASSERT, "(party->session)", (const char *)&queryFormat, "party->session") )
    __debugbreak();
  if ( !Party_IsRunning(party) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost_matchmaking.cpp", 328, ASSERT_TYPE_ASSERT, "(Party_IsRunning( party ))", (const char *)&queryFormat, "Party_IsRunning( party )") )
    __debugbreak();
  if ( OnlineMatchmakerOmniscient::IsIdle(&OnlineMatchmakerOmniscient::ms_instance) )
    OnlineMatchmakerOmniscient::Init(&OnlineMatchmakerOmniscient::ms_instance, localControllerIndex);
  if ( PartyHost_IsMatchmakingRunnable(party) )
  {
    if ( OnlineMatchmakerOmniscient::IsReadyToInitMatchmaking(&OnlineMatchmakerOmniscient::ms_instance) )
    {
      __asm
      {
        vmovdqu xmm0, cs:__xmm@000000000000000000000000ffffffff
        vpxor   xmm1, xmm1, xmm1
        vmovdqu xmmword ptr [rsp+0A8h+outParams.m_localControllerIndex], xmm0
        vmovdqu xmmword ptr [rsp+0A8h+outParams.m_netcodeVersion], xmm1
      }
      outParams.m_inviteLocalJoiningControllerIndex = -1;
      XUID::NullXUID(&outParams.m_inviteClientAttemptingToJoinUID);
      outParams.m_gameType = eGAME_TYPE_MULTIPLAYER;
      outParams.m_lobbyIdToJoin = 0i64;
      outParams.m_privateMatchId.m_id = 0i64;
      outParams.m_localControllerIndex = localControllerIndex;
      if ( Party_HasPrivateMatchId(party) )
      {
        *(_QWORD *)&outParams.m_playlistId = 0i64;
        outParams.m_privateMatchId = (PrivateMatchId)Party_GetPrivateMatchId(&v17, party)->m_id;
        OnlineMatchmakerOmniscient::AddPlayers(&OnlineMatchmakerOmniscient::ms_instance);
        Dvar_SetInt_Internal(DVARINT_playlist, 0);
        PartyHost_CachePrivateGameSettingsForDedi(party);
      }
      else
      {
        v7 = DVARINT_playlist;
        if ( !DVARINT_playlist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playlist") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v7);
        Live_SetPlaylistNum(localControllerIndex, v7->current.integer);
        v8 = DVARINT_playlistCategory;
        if ( !DVARINT_playlistCategory && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playlistCategory") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v8);
        outParams.m_playlistCategory = v8->current.integer;
        outParams.m_playlistId = Playlist_GetPlaylistIdForNum(selectedPlaylist);
      }
      outParams.m_netcodeVersion = GetProtocolVersion();
      VersionNumber = Playlist_GetVersionNumber();
      v10 = DVARINT_matchmaking_game_type;
      outParams.m_playlistVersion = VersionNumber;
      if ( !DVARINT_matchmaking_game_type && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "matchmaking_game_type") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v10);
      integer = v10->current.integer;
      v12 = DVARINT_party_maxplayers;
      outParams.m_gameType = integer;
      outParams.m_minPlayerNeeded = 1;
      if ( !DVARINT_party_maxplayers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_maxplayers") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v12);
      outParams.m_maxPlayers = v12->current.integer;
      if ( OnlineTournament_RequestedMatchmakingBracket() )
        OnlineTournament_SetupMatchmakingParams(&outParams);
      if ( Live_IsInGameBattlesGame() )
        GameBattles_SetupMatchmakingParams(&outParams, localControllerIndex);
      if ( OnlineMatchmakerOmniscient::InitForMatchmaking(&OnlineMatchmakerOmniscient::ms_instance, &outParams) )
      {
        Com_Printf(25, "PartyMatchmaking_Frame : successfully inited the matchmaker.\n");
        if ( (!Online_DcQos_IsResultValid(DCQOS_RESULT_DATACENTERS) || !Online_DcQos_GetDatacenterCount()) && Dvar_GetBool_Internal_DebugName(DVARBOOL_online_matchmaking_show_dc_qos_failed_warning, "online_matchmaking_show_dc_qos_failed_warning") )
        {
          ClientFromController = CL_Mgr_GetClientFromController(localControllerIndex);
          LUI_OpenMenu(ClientFromController, "dc_qos_failed_warning", 1, 0, 1);
        }
        if ( BG_Bots_IsBotMatchMakingAllowedForPlaylist() && BG_GameStateInfo_IsBotMatchMakingDataInitialized() && !BG_GameStateInfo_BotsCountTowardsGameLaunch() )
        {
          BG_GameStateInfo_EnableGameLaunchWithBots();
          if ( Lobby_IsInLobby() )
          {
            PartyData = Lobby_GetPartyData();
            if ( Party_AreWeHost(PartyData) )
            {
              v15 = Lobby_GetPartyData();
              PartyHost_GamestateChanged(v15);
            }
          }
        }
      }
    }
    else
    {
      OnlineMatchmakerOmniscient::StartNextSearchRound(&OnlineMatchmakerOmniscient::ms_instance);
    }
  }
}

/*
==============
PartyMatchmaking_Init
==============
*/
void PartyMatchmaking_Init(void)
{
  OnlineMatchmakerOmniscient::SetCallbacks(&OnlineMatchmakerOmniscient::ms_instance, PartyHost_CreateLobbyCallback, PartyHost_JoinLobbyCallback, NULL, PartyHost_LobbyDisbandedCallback, PartyHost_FailureCallback, Party_MatchmakingTokenUpdated, PartyHost_RequestMatchmakingInfoCallback, NULL);
}

/*
==============
Party_MatchmakingTokenUpdated
==============
*/
void Party_MatchmakingTokenUpdated(const XUID uid, const unsigned __int64 mmToken, const bool isPrimaryAccount)
{
  PartyData *PartyData; 
  PartyData *v4; 
  int i; 

  PartyData = Lobby_GetPartyData();
  v4 = PartyData;
  if ( PartyData->inParty && !PartyData->areWeHost )
  {
    for ( i = 0; i < 2; ++i )
      PartyClient_ResetMatchmakingTokenForParty((const LocalClientNum_t)i, v4);
  }
}

