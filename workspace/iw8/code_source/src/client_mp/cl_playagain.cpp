/*
==============
CL_PlayAgain_Abort
==============
*/

void __fastcall CL_PlayAgain_Abort(const bool keepParty)
{
  ?CL_PlayAgain_Abort@@YAX_N@Z(keepParty);
}

/*
==============
CL_PlayAgain_IsActive
==============
*/

bool __fastcall CL_PlayAgain_IsActive()
{
  return ?CL_PlayAgain_IsActive@@YA_NXZ();
}

/*
==============
CL_PlayAgain_Start
==============
*/

void __fastcall CL_PlayAgain_Start(const bool keepParty)
{
  ?CL_PlayAgain_Start@@YAX_N@Z(keepParty);
}

/*
==============
CL_PlayAgain_ErrorCleanup
==============
*/

void CL_PlayAgain_ErrorCleanup(void)
{
  ?CL_PlayAgain_ErrorCleanup@@YAXXZ();
}

/*
==============
CL_PlayAgain_Frame
==============
*/

void CL_PlayAgain_Frame(void)
{
  ?CL_PlayAgain_Frame@@YAXXZ();
}

/*
==============
CL_PlayAgain_Abort
==============
*/
void CL_PlayAgain_Abort(const bool keepParty)
{
  const dvar_t *v2; 
  PartyData *PartyData; 
  int ControllerFromClient; 
  PartyActiveClient MainActiveClient; 

  Com_Printf(16, "CL_PlayAgain_Abort -- Abort play again\n");
  if ( s_playAgainState )
  {
    v2 = DVARBOOL_onlinegame;
    s_playAgainState = IDLE;
    if ( !DVARBOOL_onlinegame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "onlinegame") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v2);
    if ( !v2->current.enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_playagain.cpp", 200, ASSERT_TYPE_ASSERT, "(Dvar_GetBool_Internal_DebugName( DVARBOOL_onlinegame, \"onlinegame\" ))", (const char *)&queryFormat, "Dvar_GetBool( onlinegame )") )
      __debugbreak();
    if ( CL_PlayAgain_AnyClientsConnected() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_playagain.cpp", 201, ASSERT_TYPE_ASSERT, "(!CL_PlayAgain_AnyClientsConnected())", (const char *)&queryFormat, "!CL_PlayAgain_AnyClientsConnected()") )
      __debugbreak();
    Com_GameStart_ClearRestarting();
    OnlineMatchmakerOmniscient::ResetMatchmaking(&OnlineMatchmakerOmniscient::ms_instance);
    PartyData = Lobby_GetPartyData();
    Party_StopParty(PartyData);
    ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
    MainActiveClient = Party_GetMainActiveClient(&g_partyData, ControllerFromClient);
    if ( g_partyData.inParty && keepParty )
    {
      if ( g_partyData.areWeHost )
      {
        Com_Printf(16, "CL_PlayAgain_Abort -- Host abort with party\n");
        PartyHost_AskPartyMembersToBackOut(&g_partyData);
      }
      else
      {
        Com_Printf(16, "CL_PlayAgain_Abort -- Client abort with party\n");
      }
      Com_Shutdown("playagain");
      Com_AssetLoadUI();
      Party_Awake(&g_partyData, MainActiveClient.localControllerIndex, 0);
    }
    else
    {
      Com_Printf(16, "CL_PlayAgain_Abort -- Abort without party\n");
      Cbuf_ExecuteBufferInternal((const LocalClientNum_t)MainActiveClient.localClientNum, MainActiveClient.localControllerIndex, "xstopprivateparty 1 0", 0, 0);
      Com_Shutdown("playagain");
      Com_AssetLoadUI();
      Cbuf_ExecuteBufferInternal((const LocalClientNum_t)MainActiveClient.localClientNum, MainActiveClient.localControllerIndex, "xstartprivateparty", 0, 0);
    }
  }
  else
  {
    Com_Printf(16, "CL_PlayAgain_Abort -- Play again not started\n");
  }
}

/*
==============
CL_PlayAgain_AnyClientsConnected
==============
*/
char CL_PlayAgain_AnyClientsConnected()
{
  int v0; 
  connstate_t *p_connectionState; 
  bool v2; 
  __int64 v4; 
  __int64 v5; 
  __int64 v6; 
  __int64 v7; 

  v0 = 0;
  p_connectionState = &clientUIActives[0].connectionState;
  v2 = 1;
  while ( 1 )
  {
    if ( !v2 )
    {
      LODWORD(v6) = 2;
      LODWORD(v4) = v0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 182, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v4, v6) )
        __debugbreak();
      LODWORD(v7) = 2;
      LODWORD(v5) = v0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 165, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v5, v7) )
        __debugbreak();
    }
    if ( !*((_BYTE *)p_connectionState + 28) )
    {
      if ( (unsigned int)v0 >= 2 )
      {
        LODWORD(v6) = 2;
        LODWORD(v4) = v0;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v4, v6) )
          __debugbreak();
      }
      if ( *(int *)p_connectionState >= 3 )
        break;
    }
    ++v0;
    p_connectionState += 110;
    v2 = (unsigned int)v0 < 2;
    if ( v0 >= 2 )
      return 0;
  }
  return 1;
}

/*
==============
CL_PlayAgain_ErrorCleanup
==============
*/
void CL_PlayAgain_ErrorCleanup(void)
{
  s_playAgainState = IDLE;
}

/*
==============
CL_PlayAgain_Frame
==============
*/
void CL_PlayAgain_Frame(void)
{
  PublisherVariableManager *Instance; 
  int v1; 
  PartyActiveClient MainActiveClient; 
  const dvar_t *v3; 
  int integer; 
  int v5; 
  CmdText *v6; 
  int v7; 
  __int64 cmdsize; 
  int v9; 
  scrContext_t *v10; 
  int ControllerFromClient; 
  LocalClientNum_t outLocalClientNum; 

  if ( s_playAgainState )
  {
    switch ( s_playAgainState )
    {
      case INITIALIZING:
        if ( !Com_GameStart_IsRestarting() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_playagain.cpp", 358, ASSERT_TYPE_ASSERT, "(Com_GameStart_IsRestarting())", (const char *)&queryFormat, "Com_GameStart_IsRestarting()") )
          __debugbreak();
        if ( s_playAgainState != INITIALIZING && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_playagain.cpp", 268, ASSERT_TYPE_ASSERT, "( s_playAgainState ) == ( PlayAgainState::WAIT_FOR_CLIENTS )", "%s == %s\n\t%i, %i", "s_playAgainState", "PlayAgainState::WAIT_FOR_CLIENTS", s_playAgainState, 1) )
          __debugbreak();
        if ( !g_partyData.areWeHost || !PartyHost_AnyoneStillConnecting(&g_partyData) && !Party_IsWaitingForMembers(&g_partyData) && !PartyAtomic_IsJoiningActive(&g_partyJoinInfo) )
        {
          Com_Printf(16, "CL_PlayAgain_CheckClientsReady -- %s Ready to start\n", g_partyData.partyName);
          ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
          LiveStorage_UpdatePlaylistFileInfo(ControllerFromClient);
          s_playAgainState = JOINED_LOBBY;
        }
        break;
      case SEARCHING:
        if ( CL_PlayAgain_AnyClientsConnected() )
        {
          Com_Printf(16, "CL_PlayAgain_CheckHostReady -- %s Ready to start\n", g_partyData.partyName);
          s_playAgainState = IDLE;
        }
        else if ( !g_partyData.inParty || g_partyData.areWeHost )
        {
          Com_Printf(16, "CL_PlayAgain_CheckHostReady -- Lost connection to host\n");
          v5 = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
          v6 = &s_cmd_textArray[Party_GetMainActiveClient(&g_partyData, v5).localClientNum];
          if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cmd.h", 329, ASSERT_TYPE_ASSERT, "(cmd_text)", (const char *)&queryFormat, "cmd_text") )
            __debugbreak();
          Sys_EnterCriticalSection(CRITSECT_CBUF);
          v7 = strlen_noncrt("playagainabort 0");
          cmdsize = v6->cmdsize;
          v9 = v7;
          if ( (int)cmdsize + v7 < v6->maxsize )
          {
            memcpy_noncrt(&v6->data[cmdsize], "playagainabort 0", v7 + 1);
            v6->cmdsize += v9;
            v10 = ScriptContext_Server();
            Scr_MonitorCommand(v10, "playagainabort 0");
          }
          else
          {
            Com_Printf(16, "Cbuf_AddText: overflow (adding '%s')\n", "playagainabort 0");
          }
          Sys_LeaveCriticalSection(CRITSECT_CBUF);
        }
        break;
      case QOSING:
        if ( CL_PlayAgain_AnyClientsConnected() )
        {
          Com_Printf(16, "CL_PlayAgain_CheckGameReady -- Server ready to start\n");
          s_playAgainState = IDLE;
        }
        v3 = DVARINT_online_playagain_lobby_timeout;
        if ( !DVARINT_online_playagain_lobby_timeout && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_playagain_lobby_timeout") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v3);
        integer = v3->current.integer;
        if ( integer && Sys_Milliseconds() - s_playAgainLobbyStartTime > integer )
        {
          Com_Printf(16, "CL_PlayAgain_Frame -- aborting play again because matchmaking timed out.\n");
          goto LABEL_23;
        }
        break;
      case JOINED_LOBBY:
        Instance = PublisherVariableManager::GetInstance();
        if ( PublisherVariableManager::HasPendingRetrieve(Instance) )
        {
          Com_Printf(16, "CL_PlayAgain_Frame -- aborting play again because pub var fetch is pending.");
LABEL_23:
          CL_PlayAgain_Abort(1);
          return;
        }
        if ( !LiveStorage_GettingPlaylistInfo() )
        {
          if ( Playlist_IsOutOfDate() )
          {
            Com_Printf(16, "CL_PlayAgain_Frame -- aborting play again because playlist is out of date.");
            goto LABEL_23;
          }
          outLocalClientNum = LOCAL_CLIENT_0;
          v1 = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
          if ( !CL_Mgr_IsControllerMappedToClient(v1, &outLocalClientNum) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_playagain.cpp", 57, ASSERT_TYPE_ASSERT, "(CL_Mgr_IsControllerMappedToClient( controllerIndex, &localClientNum ))", (const char *)&queryFormat, "CL_Mgr_IsControllerMappedToClient( controllerIndex, &localClientNum )") )
            __debugbreak();
          MainActiveClient = Party_GetMainActiveClient(&g_partyData, v1);
          outLocalClientNum = MainActiveClient.localClientNum;
          Cbuf_ExecuteBufferInternal((const LocalClientNum_t)MainActiveClient.localClientNum, MainActiveClient.localControllerIndex, "xstartlobby", 0, 0);
          s_playAgainLobbyStartTime = Sys_Milliseconds();
          s_playAgainState = QOSING;
        }
        break;
    }
  }
  else if ( Com_GameStart_IsRestarting() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_playagain.cpp", 352, ASSERT_TYPE_ASSERT, "(!Com_GameStart_IsRestarting())", (const char *)&queryFormat, "!Com_GameStart_IsRestarting()") )
  {
    __debugbreak();
  }
}

/*
==============
CL_PlayAgain_IsActive
==============
*/
bool CL_PlayAgain_IsActive()
{
  return s_playAgainState != IDLE;
}

/*
==============
CL_PlayAgain_Start
==============
*/
void CL_PlayAgain_Start(const bool keepParty)
{
  const dvar_t *v2; 
  int ControllerFromClient; 
  PartyActiveClient MainActiveClient; 
  __int64 v5; 
  __int64 v6; 

  Com_Printf(16, "CL_PlayAgain_Start -- Begin play again\n");
  if ( s_playAgainState )
  {
    Com_Printf(16, "CL_PlayAgain_Start -- Play again already started\n");
    return;
  }
  v2 = DVARBOOL_onlinegame;
  if ( !DVARBOOL_onlinegame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "onlinegame") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( !v2->current.enabled )
  {
    Com_Printf(16, "CL_PlayAgain_Start -- Play again not valid in non-public games\n");
    return;
  }
  if ( !CL_PlayAgain_AnyClientsConnected() )
  {
    Com_Printf(16, "CL_PlayAgain_Start -- Play again not valid without connected clients\n");
    return;
  }
  if ( !Com_FastFile_IsPlayAgainAllowed() )
  {
    Com_Printf(16, "CL_PlayAgain_Start -- Play again cannot start due to !Com_FastFile_IsPlayAgainAllowed \n");
    return;
  }
  Com_GameStart_SetRestarting();
  CL_Transients_OnPlayAgainRestart();
  OnlineMatchmakerOmniscient::ResetMatchmaking(&OnlineMatchmakerOmniscient::ms_instance);
  ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
  MainActiveClient = Party_GetMainActiveClient(&g_partyData, ControllerFromClient);
  if ( g_partyData.inParty && keepParty )
  {
    if ( !g_partyData.areWeHost )
    {
      Com_Printf(16, "CL_PlayAgain_Start -- Client backing out with party\n");
      Com_Shutdown("playagain");
      Com_AssetLoadUI();
      Party_Awake(&g_partyData, MainActiveClient.localControllerIndex, 0);
      s_playAgainState = SEARCHING;
      return;
    }
    Com_Printf(16, "CL_PlayAgain_Start -- Host backing out party\n");
    PartyHost_DemotePresentPartyMembers(&g_partyData, NULL);
    if ( MainActiveClient.localClientNum >= (unsigned int)LOCAL_CLIENT_COUNT )
    {
      LODWORD(v6) = 2;
      LODWORD(v5) = MainActiveClient.localClientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_connection.h", 106, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v5, v6) )
        __debugbreak();
    }
    if ( !ClConnection::ms_connections[MainActiveClient.localClientNum] && (_BYTE)ClConnection::ms_activeConnectionType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_connection.h", 107, ASSERT_TYPE_ASSERT, "(ms_connections[localClientNum] || ms_activeConnectionType == GameModeType::NONE)", (const char *)&queryFormat, "ms_connections[localClientNum] || ms_activeConnectionType == GameModeType::NONE") )
      __debugbreak();
    if ( !ClConnection::ms_connections[MainActiveClient.localClientNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_api_inline.h", 14, ASSERT_TYPE_ASSERT, "(ClConnection::HasClientConnection( localClientNum ))", "%s\n\tTrying to send a reliable command but we are not connected to a server", "ClConnection::HasClientConnection( localClientNum )") )
      __debugbreak();
    if ( !CL_Demo_IsPlayingServer(MainActiveClient.localClientNum) )
    {
      if ( MainActiveClient.localClientNum >= LODWORD(cl_maxLocalClients) )
      {
        *(float *)&v6 = cl_maxLocalClients;
        LODWORD(v5) = MainActiveClient.localClientNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_connection.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( (cl_maxLocalClients) )", "localClientNum doesn't index MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v5, v6) )
          __debugbreak();
      }
      if ( !(_BYTE)ClConnection::ms_activeConnectionType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_connection.h", 98, ASSERT_TYPE_ASSERT, "(ms_activeConnectionType != GameModeType::NONE)", (const char *)&queryFormat, "ms_activeConnectionType != GameModeType::NONE") )
        __debugbreak();
      if ( !ClConnection::ms_connections[MainActiveClient.localClientNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_connection.h", 99, ASSERT_TYPE_ASSERT, "(ms_connections[localClientNum])", (const char *)&queryFormat, "ms_connections[localClientNum]") )
        __debugbreak();
      ClConnection::ms_connections[MainActiveClient.localClientNum]->AddReliableCommand(ClConnection::ms_connections[MainActiveClient.localClientNum], "partyplayagain");
    }
    Com_Shutdown("playagain");
    Com_AssetLoadUI();
    Party_Awake(&g_partyData, MainActiveClient.localControllerIndex, 0);
  }
  else
  {
    Com_Printf(16, "CL_PlayAgain_Start -- Backing out without party\n");
    Cbuf_ExecuteBufferInternal((const LocalClientNum_t)MainActiveClient.localClientNum, MainActiveClient.localControllerIndex, "xstopprivateparty 1 0", 0, 0);
    Com_Shutdown("playagain");
    Com_AssetLoadUI();
    Cbuf_ExecuteBufferInternal((const LocalClientNum_t)MainActiveClient.localClientNum, MainActiveClient.localControllerIndex, "xstartprivateparty", 0, 0);
  }
  s_playAgainState = INITIALIZING;
}

