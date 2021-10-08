/*
==============
Session_JoinInProgress_ByLobbyId
==============
*/

int __fastcall Session_JoinInProgress_ByLobbyId(const int controllerIndex, const unsigned __int64 lobbyId)
{
  return ?Session_JoinInProgress_ByLobbyId@@YAHH_K@Z(controllerIndex, lobbyId);
}

/*
==============
Session_GetHostInfoForLobbyForInviteJoinComplete
==============
*/

void __fastcall Session_GetHostInfoForLobbyForInviteJoinComplete(const int controllerIndex, const GetHostInfoForLobbyResult result, const XSESSION_INFO *hostInfo, const unsigned __int64 lobbyId)
{
  ?Session_GetHostInfoForLobbyForInviteJoinComplete@@YAXHW4GetHostInfoForLobbyResult@@AEBVXSESSION_INFO@@_K@Z(controllerIndex, result, hostInfo, lobbyId);
}

/*
==============
Session_GetName
==============
*/

const char *__fastcall Session_GetName(const SessionData *session)
{
  return ?Session_GetName@@YAPEBDPEBUSessionData@@@Z(session);
}

/*
==============
Session_GetHostInfoForLobbyForInviteJoin
==============
*/

bool __fastcall Session_GetHostInfoForLobbyForInviteJoin(const int controllerIndex, const unsigned __int64 lobbyId)
{
  return ?Session_GetHostInfoForLobbyForInviteJoin@@YA_NH_K@Z(controllerIndex, lobbyId);
}

/*
==============
Session_InviteDWSearchCallback
==============
*/

void __fastcall Session_InviteDWSearchCallback(tCallbackResult result, const unsigned __int64 lobbyId, const XSESSION_INFO *hostInfo, void *data)
{
  ?Session_InviteDWSearchCallback@@YAXW4tCallbackResult@@_KAEBVXSESSION_INFO@@PEAX@Z(result, lobbyId, hostInfo, data);
}

/*
==============
Session_SetDWSearchCallbackErrorCode
==============
*/

void __fastcall Session_SetDWSearchCallbackErrorCode(tCallbackResult errorCode, const char **errorMessage)
{
  ?Session_SetDWSearchCallbackErrorCode@@YAXW4tCallbackResult@@PEAPEBD@Z(errorCode, errorMessage);
}

/*
==============
Session_JoinInProgress_ByXUID
==============
*/

int __fastcall Session_JoinInProgress_ByXUID(const int controllerIndex, const XUID xuidOfTheUserBeingJoinedOn)
{
  return ?Session_JoinInProgress_ByXUID@@YAHHUXUID@@@Z(controllerIndex, xuidOfTheUserBeingJoinedOn);
}

/*
==============
Session_GetHostInfoForLobbyForInviteJoin
==============
*/
bool Session_GetHostInfoForLobbyForInviteJoin(const int controllerIndex, const unsigned __int64 lobbyId)
{
  return OnlineMatchmakerOmniscient::GetHostInfoForLobby(&OnlineMatchmakerOmniscient::ms_instance, controllerIndex, lobbyId, Session_GetHostInfoForLobbyForInviteJoinComplete);
}

/*
==============
Session_GetHostInfoForLobbyForInviteJoinComplete
==============
*/
void Session_GetHostInfoForLobbyForInviteJoinComplete(const int controllerIndex, const GetHostInfoForLobbyResult result, const XSESSION_INFO *hostInfo, const unsigned __int64 lobbyId)
{
  if ( result )
  {
    switch ( result )
    {
      case HALF:
        InviteJoinHSM::GetHostInfoForLobbyFromMatchmakerComplete(&g_invitationHSM, hostInfo, lobbyId);
        break;
      case HALF_HALF:
        InviteJoinHSM::GetHostInfoForLobbyFromMatchmakerFailed(&g_invitationHSM);
        break;
      case LONG:
        InviteJoinHSM::GetHostInfoForLobbyFromMatchmakerDocParseFailed(&g_invitationHSM);
        break;
    }
  }
  else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\sessions_common.cpp", 300, ASSERT_TYPE_ASSERT, "(result != GetHostInfoForLobbyResult::NONE)", (const char *)&queryFormat, "result != GetHostInfoForLobbyResult::NONE") )
  {
    __debugbreak();
  }
}

/*
==============
Session_GetName
==============
*/
const char *Session_GetName(const SessionData *session)
{
  PartyData *PartyForSession; 

  PartyForSession = Party_GetPartyForSession(session);
  if ( PartyForSession )
    return PartyForSession->partyName;
  if ( session != &g_partyJoinSession && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\sessions_common.cpp", 335, ASSERT_TYPE_ASSERT, "(session == &g_partyJoinSession)", (const char *)&queryFormat, "session == &g_partyJoinSession") )
    __debugbreak();
  return "JoinParty";
}

/*
==============
Session_InviteDWSearchCallback
==============
*/
void Session_InviteDWSearchCallback(tCallbackResult result, const unsigned __int64 lobbyId, const XSESSION_INFO *hostInfo, void *data)
{
  __int64 v7; 
  const char *v8; 
  Online_Error_CAT_SESSIONS_t v9; 

  Com_Printf(25, "Session_InviteDWSearchCallback( result = %d lobby id = %zx )\n", (unsigned int)result, lobbyId);
  v8 = (const char *)&stru_143DD5890;
  switch ( result )
  {
    case 2:
      Com_Printf(25, "INVITE Search successful. Lobby Found. changing s_inviteSessionState to SESSION_STATE_NONE direct connect should follow.\n", v7, (unsigned int)(result - 2));
      InviteJoinHSM::HandleSessionSearchCompleteLobbyFound(&g_invitationHSM, hostInfo, lobbyId);
      break;
    case 3:
      Com_Printf(25, "INVITE Search failed. No Lobby found. But we can continue the invite.\n");
      InviteJoinHSM::HandleSessionSearchCompleteLobbyNotFound(&g_invitationHSM);
      break;
    case 16:
      Com_Printf(25, "INVITE Search says that we are already in the lobby, so lets join with the session info we have.\n");
      InviteJoinHSM::HandleSessionSearchCompleteAlreadyInLobby(&g_invitationHSM);
      break;
    default:
      Com_Printf(25, "INVITE Search failed. Unable to follow the invite (%d). Cancelling\n", (unsigned int)result);
      Com_Printf(25, "Session_SetDWSearchCallbackErrorCode : setting error code %d\n", (unsigned int)result);
      switch ( result )
      {
        case 5:
          v9 = 0x100000;
          break;
        case 6:
          v8 = "@EXE/SERVERISFULL";
          v9 = 0x80000;
          break;
        case 7:
          v9 = 0x200000;
          break;
        case 8:
          v9 = 0x400000;
          break;
        case 9:
          v9 = 0x800000;
          break;
        case 10:
          v9 = 0x1000000;
          break;
        case 11:
          v9 = 0x2000000;
          break;
        case 12:
          v9 = 0x4000000;
          break;
        case 13:
          v9 = 0x8000000;
          break;
        case 14:
          v9 = 32;
          break;
        case 15:
          v9 = 64;
          break;
        case 17:
          v9 = 1024;
          break;
        case 18:
          v9 = 2048;
          break;
        case 19:
          v9 = 4096;
          break;
        case 20:
          v9 = 128;
          break;
        default:
          v9 = 0x10000000;
          break;
      }
      OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, v9, NULL);
      InviteJoinHSM::HandleSessionSearchRefused(&g_invitationHSM, v8);
      break;
  }
}

/*
==============
Session_JoinInProgress_ByLobbyId
==============
*/
__int64 Session_JoinInProgress_ByLobbyId(const int controllerIndex, const unsigned __int64 lobbyId)
{
  int v4; 
  Online_Error_CAT_INVITE_t v5; 
  int Int_Internal_DebugName; 

  if ( PartyAtomic_IsJoiningActive(&g_partyJoinInfo) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\sessions_common.cpp", 129, ASSERT_TYPE_ASSERT, "(!PartyAtomic_IsJoiningActive( &g_partyJoinInfo ))", (const char *)&queryFormat, "!PartyAtomic_IsJoiningActive( &g_partyJoinInfo )") )
    __debugbreak();
  if ( InviteJoinHSM::IsHSMHandlingInvitation(&g_invitationHSM) || (v4 = Dvar_GetInt_Internal_DebugName(DVARINT_session_join_min_time, "session_join_min_time"), Sys_Milliseconds() - s_joinSessionStartTime >= v4) )
  {
    if ( !OnlineMatchmakerOmniscient::IsInited(&OnlineMatchmakerOmniscient::ms_instance) && !OnlineMatchmakerOmniscient::Init(&OnlineMatchmakerOmniscient::ms_instance, controllerIndex) )
    {
      Com_Printf(25, "Session_JoinInProgress failed init the matchmaker.\n");
      v5 = 0x80000;
      goto LABEL_13;
    }
    if ( lobbyId )
    {
      Com_Printf(25, "Session_JoinInProgress calling InitForLobbyIdJoin!\n");
      if ( OnlineMatchmakerOmniscient::InitForLobbyIdJoin(&OnlineMatchmakerOmniscient::ms_instance, controllerIndex, lobbyId, Session_InviteDWSearchCallback, NULL) )
      {
        Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DVARINT_online_invite_search_duration_timeout_ms, "online_invite_search_duration_timeout_ms");
        Com_Printf(25, "Session_JoinInProgress InitForLobbyIdJoin succeeded - waiting for Session_InviteDWSearchCallback(), this will timeout in %d seconds.\n", (unsigned int)(Int_Internal_DebugName / 1000));
        s_joinSessionStartTime = Sys_Milliseconds();
        return 1i64;
      }
      Com_Printf(25, "Session_JoinInProgress InitForLobbyIdJoin failed.\n");
      v5 = 0x100000;
LABEL_13:
      OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, v5, NULL);
      if ( !InviteJoinHSM::IsHSMHandlingInvitation(&g_invitationHSM) )
      {
        Live_ConfirmAcceptInvitation_Error("@EXE/HOSTUNREACH");
        return 0i64;
      }
      return 0i64;
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\sessions_common.cpp", 192, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "lobbyid is NOT set! Please write this bug up and assign to Code - Networking\n") )
      __debugbreak();
    if ( InviteJoinHSM::IsHSMHandlingInvitation(&g_invitationHSM) )
    {
      Com_Printf(25, "Session_JoinInProgress empty g_launchData.inviterXUID, the HSM considers this a failure!\n");
      OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, MOVEMENT, NULL);
      return 0i64;
    }
    Com_Printf(25, "Session_JoinInProgress empty g_launchData.inviterXUID invite will now attempt to join directly!\n");
  }
  return 0i64;
}

/*
==============
Session_JoinInProgress_ByXUID
==============
*/
__int64 Session_JoinInProgress_ByXUID(const int controllerIndex, const XUID xuidOfTheUserBeingJoinedOn)
{
  int v3; 
  Online_Error_CAT_INVITE_t v4; 
  int Int_Internal_DebugName; 
  XUID uidToJoinOn; 

  uidToJoinOn.m_id = xuidOfTheUserBeingJoinedOn.m_id;
  if ( PartyAtomic_IsJoiningActive(&g_partyJoinInfo) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\sessions_common.cpp", 215, ASSERT_TYPE_ASSERT, "(!PartyAtomic_IsJoiningActive( &g_partyJoinInfo ))", (const char *)&queryFormat, "!PartyAtomic_IsJoiningActive( &g_partyJoinInfo )") )
    __debugbreak();
  if ( InviteJoinHSM::IsHSMHandlingInvitation(&g_invitationHSM) || (v3 = Dvar_GetInt_Internal_DebugName(DVARINT_session_join_min_time, "session_join_min_time"), Sys_Milliseconds() - s_joinSessionStartTime >= v3) )
  {
    if ( !OnlineMatchmakerOmniscient::IsInited(&OnlineMatchmakerOmniscient::ms_instance) && !OnlineMatchmakerOmniscient::Init(&OnlineMatchmakerOmniscient::ms_instance, controllerIndex) )
    {
      Com_Printf(25, "Session_JoinInProgress failed init the matchmaker.\n");
      v4 = 0x80000;
      goto LABEL_13;
    }
    if ( XUID::IsValid(&uidToJoinOn) )
    {
      Com_Printf(25, "Session_JoinInProgress calling InitForInviteJoin!\n");
      if ( OnlineMatchmakerOmniscient::InitForInviteJoin(&OnlineMatchmakerOmniscient::ms_instance, controllerIndex, uidToJoinOn, Session_InviteDWSearchCallback, NULL) )
      {
        Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DVARINT_online_invite_search_duration_timeout_ms, "online_invite_search_duration_timeout_ms");
        Com_Printf(25, "Session_JoinInProgress InitForInviteJoin succeeded - waiting for Session_InviteDWSearchCallback(), this will timeout in %d seconds.\n", (unsigned int)(Int_Internal_DebugName / 1000));
        s_joinSessionStartTime = Sys_Milliseconds();
        return 1i64;
      }
      Com_Printf(25, "Session_JoinInProgress InitForInviteJoin failed.\n");
      v4 = 0x100000;
LABEL_13:
      OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, v4, NULL);
      if ( !InviteJoinHSM::IsHSMHandlingInvitation(&g_invitationHSM) )
      {
        Live_ConfirmAcceptInvitation_Error("@EXE/HOSTUNREACH");
        return 0i64;
      }
      return 0i64;
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\sessions_common.cpp", 278, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "xuidOfTheUserBeingJoinedOn is NOT set! Please write this bug up and assign to Code - Networking\n") )
      __debugbreak();
    if ( InviteJoinHSM::IsHSMHandlingInvitation(&g_invitationHSM) )
    {
      Com_Printf(25, "Session_JoinInProgress empty g_launchData.inviterXUID, the HSM considers this a failure!\n");
      OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, MOVEMENT, NULL);
      return 0i64;
    }
    Com_Printf(25, "Session_JoinInProgress empty g_launchData.inviterXUID invite will now attempt to join directly!\n");
  }
  return 0i64;
}

/*
==============
Session_SetDWSearchCallbackErrorCode
==============
*/
void Session_SetDWSearchCallbackErrorCode(tCallbackResult errorCode, const char **errorMessage)
{
  Online_Error_CAT_SESSIONS_t v4; 

  Com_Printf(25, "Session_SetDWSearchCallbackErrorCode : setting error code %d\n", (unsigned int)errorCode);
  switch ( errorCode )
  {
    case 5:
      v4 = 0x100000;
      break;
    case 6:
      v4 = 0x80000;
      *errorMessage = "@EXE/SERVERISFULL";
      break;
    case 7:
      v4 = 0x200000;
      break;
    case 8:
      v4 = 0x400000;
      break;
    case 9:
      v4 = 0x800000;
      break;
    case 10:
      v4 = 0x1000000;
      break;
    case 11:
      v4 = 0x2000000;
      break;
    case 12:
      v4 = 0x4000000;
      break;
    case 13:
      v4 = 0x8000000;
      break;
    case 14:
      v4 = 32;
      break;
    case 15:
      v4 = 64;
      break;
    case 17:
      v4 = 1024;
      break;
    case 18:
      v4 = 2048;
      break;
    case 19:
      v4 = 4096;
      break;
    case 20:
      v4 = 128;
      break;
    default:
      v4 = 0x10000000;
      break;
  }
  OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, v4, NULL);
}

