/*
==============
PartyAtomic_SetJoinState
==============
*/

void __fastcall PartyAtomic_SetJoinState(PartyJoinInfo *partyJoinInfo, const PartyJoinState state, const int stateTimeout)
{
  ?PartyAtomic_SetJoinState@@YAXPEAUPartyJoinInfo@@W4PartyJoinState@@H@Z(partyJoinInfo, state, stateTimeout);
}

/*
==============
PartyAtomic_FillSubPartyInfoForParty
==============
*/

void __fastcall PartyAtomic_FillSubPartyInfoForParty(PartyJoinInfo *potentialHostInfo, const PartyData *joiningParty)
{
  ?PartyAtomic_FillSubPartyInfoForParty@@YAXPEAUPartyJoinInfo@@PEBUPartyData@@@Z(potentialHostInfo, joiningParty);
}

/*
==============
PartyAtomic_IsJoiningOnPresence
==============
*/

int __fastcall PartyAtomic_IsJoiningOnPresence(const PartyJoinInfo *partyJoinInfo)
{
  return ?PartyAtomic_IsJoiningOnPresence@@YAHPEBUPartyJoinInfo@@@Z(partyJoinInfo);
}

/*
==============
PartyAtomic_InviteShutdown
==============
*/

void PartyAtomic_InviteShutdown(void)
{
  ?PartyAtomic_InviteShutdown@@YAXXZ();
}

/*
==============
Party_StartLANServerJoin
==============
*/

void __fastcall Party_StartLANServerJoin(LocalClientNum_t localClientNum, const XSESSION_INFO *hostInfo)
{
  ?Party_StartLANServerJoin@@YAXW4LocalClientNum_t@@AEBVXSESSION_INFO@@@Z(localClientNum, hostInfo);
}

/*
==============
PartyAtomic_IsJoiningActiveForSpecificSession
==============
*/

int __fastcall PartyAtomic_IsJoiningActiveForSpecificSession(const PartyJoinInfo *partyJoinInfo, const XSESSION_INFO *session)
{
  return ?PartyAtomic_IsJoiningActiveForSpecificSession@@YAHPEBUPartyJoinInfo@@PEBVXSESSION_INFO@@@Z(partyJoinInfo, session);
}

/*
==============
PartyAtomic_IsJoiningOnHostequest
==============
*/

int __fastcall PartyAtomic_IsJoiningOnHostequest(const PartyJoinInfo *partyJoinInfo)
{
  return ?PartyAtomic_IsJoiningOnHostequest@@YAHPEBUPartyJoinInfo@@@Z(partyJoinInfo);
}

/*
==============
PartyAtomic_ResetPartyJoinInfo
==============
*/

void __fastcall PartyAtomic_ResetPartyJoinInfo(PartyJoinInfo *partyJoinInfo, GameModeType partyCodPlayModeIn)
{
  ?PartyAtomic_ResetPartyJoinInfo@@YAXPEAUPartyJoinInfo@@W4GameModeType@@@Z(partyJoinInfo, partyCodPlayModeIn);
}

/*
==============
PartyAtomic_PacketIsFromJoiningHost
==============
*/

int __fastcall PartyAtomic_PacketIsFromJoiningHost(PartyJoinInfo *partyJoinInfo, const LocalClientNum_t localClientNum, const PartyType partyType, const netadr_t *from)
{
  return ?PartyAtomic_PacketIsFromJoiningHost@@YAHPEAUPartyJoinInfo@@W4LocalClientNum_t@@W4PartyType@@PEBUnetadr_t@@@Z(partyJoinInfo, localClientNum, partyType, from);
}

/*
==============
PartyAtomic_IsJoiningActive
==============
*/

int __fastcall PartyAtomic_IsJoiningActive(const PartyJoinInfo *partyJoinInfo)
{
  return ?PartyAtomic_IsJoiningActive@@YAHPEBUPartyJoinInfo@@@Z(partyJoinInfo);
}

/*
==============
PartyAtomic_GetDesiredDialog
==============
*/

UI_LiveDialogState __fastcall PartyAtomic_GetDesiredDialog()
{
  return ?PartyAtomic_GetDesiredDialog@@YA?AW4UI_LiveDialogState@@XZ();
}

/*
==============
PartyAtomic_AbortJoinAttemptForParty
==============
*/

void __fastcall PartyAtomic_AbortJoinAttemptForParty(PartyJoinInfo *partyJoinInfo, PartyData *party, const PartyDisconnectReason reason, const char *message)
{
  ?PartyAtomic_AbortJoinAttemptForParty@@YAXPEAUPartyJoinInfo@@PEAUPartyData@@W4PartyDisconnectReason@@PEBD@Z(partyJoinInfo, party, reason, message);
}

/*
==============
PartyAtomic_PartyJoinFrame
==============
*/

void PartyAtomic_PartyJoinFrame(void)
{
  ?PartyAtomic_PartyJoinFrame@@YAXXZ();
}

/*
==============
PartyAtomic_HasErrorOccured
==============
*/

int __fastcall PartyAtomic_HasErrorOccured(PartyJoinInfo *partyJoinInfo)
{
  return ?PartyAtomic_HasErrorOccured@@YAHPEAUPartyJoinInfo@@@Z(partyJoinInfo);
}

/*
==============
PartyAtomic_AcceptInviteMP
==============
*/

void __fastcall PartyAtomic_AcceptInviteMP(const unsigned int controllerIndex, const XSESSION_INFO *hostInfo, const unsigned __int64 lobbyId, const int fromGameInvite, const int fromOnlineGame)
{
  ?PartyAtomic_AcceptInviteMP@@YAXIPEBVXSESSION_INFO@@_KHH@Z(controllerIndex, hostInfo, lobbyId, fromGameInvite, fromOnlineGame);
}

/*
==============
PartyAtomic_PacketIsFromPotentialHost
==============
*/

int __fastcall PartyAtomic_PacketIsFromPotentialHost(PartyJoinInfo *partyJoinInfo, const LocalClientNum_t localClientNum, const PartyType partyType, const netadr_t *from)
{
  return ?PartyAtomic_PacketIsFromPotentialHost@@YAHPEAUPartyJoinInfo@@W4LocalClientNum_t@@W4PartyType@@PEBUnetadr_t@@@Z(partyJoinInfo, localClientNum, partyType, from);
}

/*
==============
PartyAtomic_StartJoin
==============
*/

void __fastcall PartyAtomic_StartJoin(PartyJoinInfo *partyJoinInfo, PartyData *party, const PartyJoinType joinType, const PartyJoinState startState, const int retryCount)
{
  ?PartyAtomic_StartJoin@@YAXPEAUPartyJoinInfo@@PEAUPartyData@@W4PartyJoinType@@W4PartyJoinState@@H@Z(partyJoinInfo, party, joinType, startState, retryCount);
}

/*
==============
PartyAtomic_GetJoinState
==============
*/

PartyJoinState __fastcall PartyAtomic_GetJoinState(const PartyJoinInfo *partyJoinInfo)
{
  return ?PartyAtomic_GetJoinState@@YA?AW4PartyJoinState@@PEBUPartyJoinInfo@@@Z(partyJoinInfo);
}

/*
==============
PartyAtomic_SetupPotentialHostForJoining
==============
*/

int __fastcall PartyAtomic_SetupPotentialHostForJoining(const int controllerIndex, const XSESSION_INFO *hostInfo, const PartyType partyType, const bool isPrivateMatch, PartyJoinInfo *outPartyJoinInfo, const PartySplitscreenData *splitscreenData)
{
  return ?PartyAtomic_SetupPotentialHostForJoining@@YAHHPEBVXSESSION_INFO@@W4PartyType@@_NPEAUPartyJoinInfo@@PEBUPartySplitscreenData@@@Z(controllerIndex, hostInfo, partyType, isPrivateMatch, outPartyJoinInfo, splitscreenData);
}

/*
==============
PartyAtomic_JoinAttemptFailed
==============
*/

void __fastcall PartyAtomic_JoinAttemptFailed(PartyJoinInfo *partyJoinInfo, const char *errorMsg, PartyDisconnectReason errorReason)
{
  ?PartyAtomic_JoinAttemptFailed@@YAXPEAUPartyJoinInfo@@PEBDW4PartyDisconnectReason@@@Z(partyJoinInfo, errorMsg, errorReason);
}

/*
==============
PartyAtomicClient_ShouldHandleJoinFailed
==============
*/

int __fastcall PartyAtomicClient_ShouldHandleJoinFailed(PartyJoinInfo *partyJoinInfo)
{
  return ?PartyAtomicClient_ShouldHandleJoinFailed@@YAHPEAUPartyJoinInfo@@@Z(partyJoinInfo);
}

/*
==============
PartyAtomic_AbortJoinAttempt
==============
*/

void __fastcall PartyAtomic_AbortJoinAttempt(PartyJoinInfo *partyJoinInfo, const PartyDisconnectReason reason)
{
  ?PartyAtomic_AbortJoinAttempt@@YAXPEAUPartyJoinInfo@@W4PartyDisconnectReason@@@Z(partyJoinInfo, reason);
}

/*
==============
PartyAtomic_Shutdown
==============
*/

void PartyAtomic_Shutdown(void)
{
  ?PartyAtomic_Shutdown@@YAXXZ();
}

/*
==============
PartyAtomic_IsJoiningActiveForSpecificParty
==============
*/

int __fastcall PartyAtomic_IsJoiningActiveForSpecificParty(const PartyJoinInfo *partyJoinInfo, const PartyData *party)
{
  return ?PartyAtomic_IsJoiningActiveForSpecificParty@@YAHPEBUPartyJoinInfo@@PEBUPartyData@@@Z(partyJoinInfo, party);
}

/*
==============
PartyAtomic_ReadAndVerifyJoinIdentifier
==============
*/

int __fastcall PartyAtomic_ReadAndVerifyJoinIdentifier(msg_t *msg, const PartyJoinInfo *joinInfo)
{
  return ?PartyAtomic_ReadAndVerifyJoinIdentifier@@YAHPEAUmsg_t@@PEBUPartyJoinInfo@@@Z(msg, joinInfo);
}

/*
==============
PartyAtomic_FillSubPartyInfoForLocalClients
==============
*/

void __fastcall PartyAtomic_FillSubPartyInfoForLocalClients(PartyJoinInfo *potentialHostInfo)
{
  ?PartyAtomic_FillSubPartyInfoForLocalClients@@YAXPEAUPartyJoinInfo@@@Z(potentialHostInfo);
}

/*
==============
PartyAtomic_HandleComError
==============
*/

void PartyAtomic_HandleComError(void)
{
  ?PartyAtomic_HandleComError@@YAXXZ();
}

/*
==============
PartyAtomic_OnFrame_Request
==============
*/
void PartyAtomic_OnFrame_Request(int curTime, PartyJoinInfo *partyJoinInfo)
{
  PartyActiveClient MainActiveClient; 
  const dvar_t *v4; 
  PartyActiveClient activeClient; 

  if ( !partyJoinInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 2854, ASSERT_TYPE_ASSERT, "(partyJoinInfo)", (const char *)&queryFormat, "partyJoinInfo") )
    __debugbreak();
  if ( partyJoinInfo->state != PARTYJOIN_REQUEST && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 2049, ASSERT_TYPE_ASSERT, "(PartyAtomic_GetJoinState( partyJoinInfo ) == PARTYJOIN_REQUEST)", (const char *)&queryFormat, "PartyAtomic_GetJoinState( partyJoinInfo ) == PARTYJOIN_REQUEST") )
    __debugbreak();
  if ( partyJoinInfo->joinType == PJT_HOSTREQUEST && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 2050, ASSERT_TYPE_ASSERT, "(partyJoinInfo->joinType != PJT_HOSTREQUEST)", "%s\n\tJoining through host request means we should not have to request ourself", "partyJoinInfo->joinType != PJT_HOSTREQUEST") )
    __debugbreak();
  if ( PartyAtomic_HasConnectivity(partyJoinInfo) )
  {
    if ( !PartyAtomic_IsJoiningOnPresence(partyJoinInfo) || Live_IsInSystemlinkLobby() )
      goto LABEL_18;
    if ( !g_partyData.inParty )
    {
      MainActiveClient = PartyAtomicJoin_GetMainActiveClient(partyJoinInfo, partyJoinInfo->controllerIndex);
      PartyHost_StartPrivateParty((const LocalClientNum_t)MainActiveClient.localClientNum, MainActiveClient.localControllerIndex, 0, PARTY_HOST_CLIENT);
      if ( !g_partyData.inParty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 1948, ASSERT_TYPE_ASSERT, "(g_partyData.inParty)", (const char *)&queryFormat, "g_partyData.inParty") )
        __debugbreak();
    }
    if ( Party_CountAllMembersEvenIfInactive(&g_partyData) )
    {
LABEL_18:
      activeClient = PartyAtomicJoin_GetMainActiveClient(partyJoinInfo, partyJoinInfo->controllerIndex);
      PartyAtomic_AskToJoinParty_Internal(&activeClient, partyJoinInfo);
      v4 = DVARINT_pt_connectTimeout;
      if ( !DVARINT_pt_connectTimeout && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "pt_connectTimeout") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v4);
      PartyAtomic_SetJoinState(partyJoinInfo, PARTYJOIN_REQUESTED, v4->current.integer);
    }
  }
}

/*
==============
PartyAtomic_OnFrame_Requested
==============
*/
void PartyAtomic_OnFrame_Requested(int curTime, PartyJoinInfo *partyJoinInfo)
{
  if ( !partyJoinInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 2854, ASSERT_TYPE_ASSERT, "(partyJoinInfo)", (const char *)&queryFormat, "partyJoinInfo") )
    __debugbreak();
  if ( partyJoinInfo->state != PARTYJOIN_REQUESTED && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 2070, ASSERT_TYPE_ASSERT, "(PartyAtomic_GetJoinState( partyJoinInfo ) == PARTYJOIN_REQUESTED)", (const char *)&queryFormat, "PartyAtomic_GetJoinState( partyJoinInfo ) == PARTYJOIN_REQUESTED") )
    __debugbreak();
  if ( partyJoinInfo->joinType == PJT_HOSTREQUEST && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 2071, ASSERT_TYPE_ASSERT, "(partyJoinInfo->joinType != PJT_HOSTREQUEST)", "%s\n\tJoining through host request means we should not have to request ourself", "partyJoinInfo->joinType != PJT_HOSTREQUEST") )
    __debugbreak();
  PartyAtomic_OnFrame_CheckTimeout(curTime, PARTYJOIN_REQUEST, partyJoinInfo);
}

/*
==============
PartyAtomic_OnFrame_Join
==============
*/
void PartyAtomic_OnFrame_Join(int curTime, PartyJoinInfo *partyJoinInfo)
{
  const dvar_t *v3; 
  const dvar_t *v4; 
  PartyDisconnectReason v5; 
  PartyData *PartyData; 
  int Int_Internal_DebugName; 
  PartyActiveClient partyActiveClient; 

  if ( !partyJoinInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 2854, ASSERT_TYPE_ASSERT, "(partyJoinInfo)", (const char *)&queryFormat, "partyJoinInfo") )
    __debugbreak();
  if ( partyJoinInfo->state != PARTYJOIN_JOIN && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 2079, ASSERT_TYPE_ASSERT, "(PartyAtomic_GetJoinState( partyJoinInfo ) == PARTYJOIN_JOIN)", (const char *)&queryFormat, "PartyAtomic_GetJoinState( partyJoinInfo ) == PARTYJOIN_JOIN") )
    __debugbreak();
  v3 = DVARINT_party_debugClientFailJoining;
  if ( !DVARINT_party_debugClientFailJoining && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_debugClientFailJoining") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( v3->current.integer <= 0 || ((partyJoinInfo->joinType - 2) & 0xFFFFFFFD) != 0 )
    goto LABEL_32;
  v4 = DVARINT_party_debugClientFailJoining;
  if ( !DVARINT_party_debugClientFailJoining && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_debugClientFailJoining") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( v4->current.integer == 1 || Lobby_IsInLobby() )
  {
    Com_Printf(14, "PartyJoinAtomic: DEBUG - Party member simulating failure to join an accepted lobby\n");
    OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, MOVEMENT, NULL);
    LOBYTE(v5) = 36;
    PartyAtomic_JoinAttemptFailed(partyJoinInfo, (const char *)&stru_143DD5890, v5);
  }
  else
  {
LABEL_32:
    if ( !PartyAtomicClient_CheckForJoinAbort(partyJoinInfo) && PartyAtomic_HasConnectivity(partyJoinInfo) && !PartyChat_ChatBeingCreated((const PartyType)partyJoinInfo->partyType) )
    {
      if ( partyJoinInfo->partyType == ANY_PARTY_ID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 1353, ASSERT_TYPE_ASSERT, "(partyJoinInfo->partyType != ANY_PARTY_ID)", (const char *)&queryFormat, "partyJoinInfo->partyType != ANY_PARTY_ID") )
        __debugbreak();
      if ( partyJoinInfo->partyType == PRIVATE_PARTY_ID )
        PartyData = &g_partyData;
      else
        PartyData = Lobby_GetPartyData();
      partyActiveClient = PartyAtomicJoin_GetMainActiveClient(partyJoinInfo, partyJoinInfo->controllerIndex);
      PartyAtomicClient_JoinAcceptedParty_Internal(PartyData, &partyActiveClient, partyJoinInfo);
      if ( PartyAtomicJoin_GetSecondaryActiveClient(partyJoinInfo, &partyActiveClient) )
        PartyAtomicClient_JoinAcceptedParty_Internal(PartyData, &partyActiveClient, partyJoinInfo);
      Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DVARINT_pt_connectTimeout, "pt_connectTimeout");
      PartyAtomic_SetJoinState(partyJoinInfo, PARTYJOIN_JOINING, Int_Internal_DebugName);
    }
  }
}

/*
==============
PartyAtomic_OnFrame_Joining
==============
*/
void PartyAtomic_OnFrame_Joining(int curTime, PartyJoinInfo *partyJoinInfo)
{
  PartyActiveClient outPartyActiveClient; 

  if ( !partyJoinInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 2854, ASSERT_TYPE_ASSERT, "(partyJoinInfo)", (const char *)&queryFormat, "partyJoinInfo") )
    __debugbreak();
  if ( partyJoinInfo->state != PARTYJOIN_JOINING && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 2112, ASSERT_TYPE_ASSERT, "(PartyAtomic_GetJoinState( partyJoinInfo ) == PARTYJOIN_JOINING)", (const char *)&queryFormat, "PartyAtomic_GetJoinState( partyJoinInfo ) == PARTYJOIN_JOINING") )
    __debugbreak();
  if ( !PartyAtomicClient_CheckForJoinAbort(partyJoinInfo) )
  {
    outPartyActiveClient = PartyAtomicJoin_GetMainActiveClient(partyJoinInfo, partyJoinInfo->controllerIndex);
    if ( PartyAtomicClient_HasClientJoinedAcceptedParty(partyJoinInfo, (const LocalClientNum_t)outPartyActiveClient.localClientNum) && (!PartyAtomicJoin_GetSecondaryActiveClient(partyJoinInfo, &outPartyActiveClient) || PartyAtomicClient_HasClientJoinedAcceptedParty(partyJoinInfo, (const LocalClientNum_t)outPartyActiveClient.localClientNum)) )
      PartyAtomic_SetJoinState(partyJoinInfo, PARTYJOIN_JOINED, 0);
    else
      PartyAtomic_OnFrame_CheckTimeout(curTime, PARTYJOIN_JOIN, partyJoinInfo);
  }
}

/*
==============
PartyAtomic_OnFrame_Joined
==============
*/
void PartyAtomic_OnFrame_Joined(int curTime, PartyJoinInfo *partyJoinInfo)
{
  PartyJoinType joinType; 

  if ( !partyJoinInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 2854, ASSERT_TYPE_ASSERT, "(partyJoinInfo)", (const char *)&queryFormat, "partyJoinInfo") )
    __debugbreak();
  if ( partyJoinInfo->state != PARTYJOIN_JOINED && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 2129, ASSERT_TYPE_ASSERT, "(PartyAtomic_GetJoinState( partyJoinInfo ) == PARTYJOIN_JOINED)", (const char *)&queryFormat, "PartyAtomic_GetJoinState( partyJoinInfo ) == PARTYJOIN_JOINED") )
    __debugbreak();
  joinType = partyJoinInfo->joinType;
  if ( joinType <= PJT_NONE )
  {
LABEL_21:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 2154, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled join type") )
      __debugbreak();
    return;
  }
  if ( joinType <= PJT_INVITE )
  {
    if ( PartyAtomicClient_CheckForJoinAbort(partyJoinInfo) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 2135, ASSERT_TYPE_ASSERT, "(!PartyAtomicClient_CheckForJoinAbort( partyJoinInfo ))", (const char *)&queryFormat, "!PartyAtomicClient_CheckForJoinAbort( partyJoinInfo )") )
      __debugbreak();
    PartyAtomic_SetJoinState(partyJoinInfo, PARTYJOIN_COMMIT, 0);
  }
  else
  {
    if ( joinType != PJT_HOSTREQUEST )
    {
      if ( joinType == PJT_MATCHMAKING )
      {
        if ( PartyAtomicClient_CheckForJoinAbort(partyJoinInfo) )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 2148, ASSERT_TYPE_ASSERT, "(!PartyAtomicClient_CheckForJoinAbort( partyJoinInfo ))", (const char *)&queryFormat, "!PartyAtomicClient_CheckForJoinAbort( partyJoinInfo )") )
            __debugbreak();
        }
        PartyAtomicJoin_SetupMemberJoinInfo(curTime, partyJoinInfo);
        PartyAtomic_SetJoinState(partyJoinInfo, PARTYJOIN_WAIT_HOST, 0);
        return;
      }
      goto LABEL_21;
    }
    if ( !PartyAtomicClient_CheckForJoinAbort(partyJoinInfo) )
    {
      PartyAtomicClient_SendMemberActionResponse(partyJoinInfo, JOINRESPONSE_SUCCESS);
      PartyAtomic_SetJoinState(partyJoinInfo, PARTYJOIN_WAIT_CLIENT, 0);
    }
  }
}

/*
==============
PartyAtomic_OnFrame_ClientWait
==============
*/
void PartyAtomic_OnFrame_ClientWait(int curTime, PartyJoinInfo *partyJoinInfo)
{
  PartyJoinState state; 
  __int64 v4; 
  int v5; 
  PartyDisconnectReason v6; 
  PartyJoinState v7; 
  __int64 v8; 

  if ( !partyJoinInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 2854, ASSERT_TYPE_ASSERT, "(partyJoinInfo)", (const char *)&queryFormat, "partyJoinInfo") )
    __debugbreak();
  state = partyJoinInfo->state;
  if ( partyJoinInfo->state != PARTYJOIN_WAIT_CLIENT && state != PARTYJOIN_WAIT_PRIMED_CLIENT )
  {
    LODWORD(v8) = partyJoinInfo->state;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 2163, ASSERT_TYPE_ASSERT, "( ( (joinState == PARTYJOIN_WAIT_CLIENT) || (joinState == PARTYJOIN_WAIT_PRIMED_CLIENT) ) )", "( joinState ) = %i", v8) )
      __debugbreak();
  }
  if ( partyJoinInfo->state != PARTYJOIN_WAIT_CLIENT && partyJoinInfo->state != PARTYJOIN_WAIT_PRIMED_CLIENT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 1894, ASSERT_TYPE_ASSERT, "((PartyAtomic_GetJoinState( joinInfo ) == PARTYJOIN_WAIT_CLIENT) || (PartyAtomic_GetJoinState( joinInfo ) == PARTYJOIN_WAIT_PRIMED_CLIENT))", (const char *)&queryFormat, "(PartyAtomic_GetJoinState( joinInfo ) == PARTYJOIN_WAIT_CLIENT) || (PartyAtomic_GetJoinState( joinInfo ) == PARTYJOIN_WAIT_PRIMED_CLIENT)") )
    __debugbreak();
  v4 = 6536i64;
  if ( partyJoinInfo->state >= PARTYJOIN_COMMIT )
    v4 = 6540i64;
  v5 = *(PartyJoinState *)((char *)&partyJoinInfo->state + v4);
  if ( v5 )
  {
    if ( v5 != 1 )
    {
      Com_PrintError(25, "PartyJoinAtomic: HandleHostResponse - Host says someone failed\n");
      OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_PARTY_JOIN_t)0x20000000, NULL);
      LOBYTE(v6) = 14;
      partyJoinInfo->errorResponse = *(PartyJoinState *)((char *)&partyJoinInfo->state + v4);
      PartyAtomic_JoinAttemptFailed(partyJoinInfo, (const char *)&stru_143DD5890, v6);
      return;
    }
    Com_Printf(25, "PartyJoinAtomic: HandleHostResponse - Host says everyone joined successfully\n");
    if ( state == PARTYJOIN_WAIT_CLIENT )
    {
      v7 = PARTYJOIN_COMMIT;
    }
    else
    {
      if ( state != PARTYJOIN_WAIT_PRIMED_CLIENT )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 2178, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled state for ClientWait") )
          __debugbreak();
        return;
      }
      v7 = PARTYJOIN_SUCCESS;
    }
    PartyAtomic_SetJoinState(partyJoinInfo, v7, 0);
  }
}

/*
==============
PartyAtomic_OnFrame_WaitHost
==============
*/
void PartyAtomic_OnFrame_WaitHost(int curTime, PartyJoinInfo *partyJoinInfo)
{
  if ( !partyJoinInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 2854, ASSERT_TYPE_ASSERT, "(partyJoinInfo)", (const char *)&queryFormat, "partyJoinInfo") )
    __debugbreak();
  if ( partyJoinInfo->state != PARTYJOIN_WAIT_HOST && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 2186, ASSERT_TYPE_ASSERT, "(PartyAtomic_GetJoinState( partyJoinInfo ) == PARTYJOIN_WAIT_HOST)", (const char *)&queryFormat, "PartyAtomic_GetJoinState( partyJoinInfo ) == PARTYJOIN_WAIT_HOST") )
    __debugbreak();
  PartyAtomicHost_BroadcastLobbyJoin(curTime, partyJoinInfo);
  if ( PartyAtomicHost_WaitForMembersToRespond(partyJoinInfo) )
    PartyAtomic_SetJoinState(partyJoinInfo, PARTYJOIN_WAIT_HOST_ACK, 0);
}

/*
==============
PartyAtomic_OnFrame_WaitHostPrimed
==============
*/
void PartyAtomic_OnFrame_WaitHostPrimed(int curTime, PartyJoinInfo *partyJoinInfo)
{
  if ( !partyJoinInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 2854, ASSERT_TYPE_ASSERT, "(partyJoinInfo)", (const char *)&queryFormat, "partyJoinInfo") )
    __debugbreak();
  if ( partyJoinInfo->state != PARTYJOIN_WAIT_PRIMED_HOST && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 2197, ASSERT_TYPE_ASSERT, "(PartyAtomic_GetJoinState( partyJoinInfo ) == PARTYJOIN_WAIT_PRIMED_HOST)", (const char *)&queryFormat, "PartyAtomic_GetJoinState( partyJoinInfo ) == PARTYJOIN_WAIT_PRIMED_HOST") )
    __debugbreak();
  if ( PartyAtomicHost_WaitForMembersToRespond(partyJoinInfo) )
    PartyAtomic_SetJoinState(partyJoinInfo, PARTYJOIN_WAIT_PRIMED_HOST_ACK, 6000);
}

/*
==============
PartyAtomic_OnFrame_WaitHostAck
==============
*/
void PartyAtomic_OnFrame_WaitHostAck(int curTime, PartyJoinInfo *partyJoinInfo)
{
  PartyJoinState state; 
  PartyJoinState v5; 
  __int64 v6; 

  if ( !partyJoinInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 2854, ASSERT_TYPE_ASSERT, "(partyJoinInfo)", (const char *)&queryFormat, "partyJoinInfo") )
    __debugbreak();
  state = partyJoinInfo->state;
  if ( partyJoinInfo->state != PARTYJOIN_WAIT_HOST_ACK && state != PARTYJOIN_WAIT_PRIMED_HOST_ACK )
  {
    LODWORD(v6) = partyJoinInfo->state;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 2209, ASSERT_TYPE_ASSERT, "( ( (joinState == PARTYJOIN_WAIT_HOST_ACK) || (joinState == PARTYJOIN_WAIT_PRIMED_HOST_ACK) ) )", "( joinState ) = %i", v6) )
      __debugbreak();
  }
  if ( PartyAtomicHost_WaitForMembersToAckOurResponse(curTime, partyJoinInfo) )
  {
    if ( state == PARTYJOIN_WAIT_HOST_ACK )
    {
      v5 = PARTYJOIN_COMMIT;
    }
    else
    {
      if ( state != PARTYJOIN_WAIT_PRIMED_HOST_ACK )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 2224, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled state for WaitHostAck") )
          __debugbreak();
        return;
      }
      v5 = PARTYJOIN_SUCCESS;
    }
    PartyAtomic_SetJoinState(partyJoinInfo, v5, 0);
  }
}

/*
==============
PartyAtomic_OnFrame_Commit
==============
*/
void PartyAtomic_OnFrame_Commit(int curTime, PartyJoinInfo *partyJoinInfo)
{
  const dvar_t *v3; 
  PartyDisconnectReason v4; 
  const dvar_t *v5; 
  PartyActiveClient activeClient; 

  if ( !partyJoinInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 2854, ASSERT_TYPE_ASSERT, "(partyJoinInfo)", (const char *)&queryFormat, "partyJoinInfo") )
    __debugbreak();
  if ( partyJoinInfo->state != PARTYJOIN_COMMIT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 2232, ASSERT_TYPE_ASSERT, "(PartyAtomic_GetJoinState( partyJoinInfo ) == PARTYJOIN_COMMIT)", (const char *)&queryFormat, "PartyAtomic_GetJoinState( partyJoinInfo ) == PARTYJOIN_COMMIT") )
    __debugbreak();
  if ( PartyAtomic_HasConnectivity(partyJoinInfo) && !PartyAtomicClient_CheckForCommitAbort(partyJoinInfo) )
  {
    v3 = DVARINT_party_debugClientFailCommit;
    if ( !DVARINT_party_debugClientFailCommit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_debugClientFailCommit") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v3);
    if ( v3->current.integer > 0 && (PartyAtomic_IsJoiningActive(partyJoinInfo) && (unsigned int)(partyJoinInfo->joinType - 3) <= 1 || PartyAtomic_IsJoiningOnPresence(partyJoinInfo)) && (Dvar_GetInt_Internal_DebugName(DVARINT_party_debugClientFailCommit, "party_debugClientFailCommit") == 1 || Lobby_IsInLobby()) )
    {
      Com_Printf(14, "PartyJoinAtomic: DEBUG - Party member simulating failure to join an accepted lobby\n");
      OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, MOVEMENT, NULL);
      LOBYTE(v4) = 36;
      PartyAtomic_JoinAttemptFailed(partyJoinInfo, (const char *)&stru_143DD5890, v4);
    }
    else
    {
      activeClient = PartyAtomicJoin_GetMainActiveClient(partyJoinInfo, partyJoinInfo->controllerIndex);
      PartyAtomicClient_CommitToJoinedParty_Internal(&activeClient, partyJoinInfo);
      if ( PartyAtomicJoin_GetSecondaryActiveClient(partyJoinInfo, &activeClient) )
        PartyAtomicClient_CommitToJoinedParty_Internal(&activeClient, partyJoinInfo);
      v5 = DVARINT_pt_connectTimeout;
      if ( !DVARINT_pt_connectTimeout && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "pt_connectTimeout") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v5);
      PartyAtomic_SetJoinState(partyJoinInfo, PARTYJOIN_COMMITTING, v5->current.integer);
    }
  }
}

/*
==============
PartyAtomic_OnFrame_Committing
==============
*/
void PartyAtomic_OnFrame_Committing(int curTime, PartyJoinInfo *partyJoinInfo)
{
  char ActiveGameMode; 
  unsigned __int8 v5; 
  PartyUIRoot v6; 
  PartyActiveClient outPartyActiveClient; 

  if ( !partyJoinInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 2854, ASSERT_TYPE_ASSERT, "(partyJoinInfo)", (const char *)&queryFormat, "partyJoinInfo") )
    __debugbreak();
  if ( partyJoinInfo->state != PARTYJOIN_COMMITTING && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 2261, ASSERT_TYPE_ASSERT, "(PartyAtomic_GetJoinState( partyJoinInfo ) == PARTYJOIN_COMMITTING)", (const char *)&queryFormat, "PartyAtomic_GetJoinState( partyJoinInfo ) == PARTYJOIN_COMMITTING") )
    __debugbreak();
  PartyAtomic_AssertHasConnectivity(partyJoinInfo);
  if ( !PartyAtomicClient_CheckForCommitAbort(partyJoinInfo) )
  {
    if ( !Party_PartiesAcrossGamemodesFeatureEnabled() || partyJoinInfo->partyType || (ActiveGameMode = Com_GameMode_GetActiveGameMode(), v5 = partyJoinInfo->partyCodPlayMode[0], ActiveGameMode == v5) )
    {
      if ( PartyClient_HaveAllPacketsForPartyState(&partyJoinInfo->partyStateData) && (outPartyActiveClient = PartyAtomicJoin_GetMainActiveClient(partyJoinInfo, partyJoinInfo->controllerIndex), PartyAtomicClient_IsClientCommittingToParty(partyJoinInfo, (const LocalClientNum_t)outPartyActiveClient.localClientNum)) && (!PartyAtomicJoin_GetSecondaryActiveClient(partyJoinInfo, &outPartyActiveClient) || PartyAtomicClient_IsClientCommittingToParty(partyJoinInfo, (const LocalClientNum_t)outPartyActiveClient.localClientNum)) )
        PartyAtomic_SetJoinState(partyJoinInfo, PARTYJOIN_COMMITTED, 0);
      else
        PartyAtomic_OnFrame_CheckTimeout(curTime, PARTYJOIN_COMMIT, partyJoinInfo);
    }
    else if ( ActiveGameMode )
    {
      PartyUI_OpenMenu(LOCAL_CLIENT_0, AERIAL, 1);
    }
    else if ( BG_GameInterface_GameModeIsMP((GameModeType)v5) )
    {
      if ( !LiveStorage_IsPaidUser(partyJoinInfo->controllerIndex) || !Live_HasOnlineSubscription(partyJoinInfo->controllerIndex) || (v6 = 5, !partyJoinInfo->shouldGoToMPBlade) )
        v6 = AERIAL|FREE|0x10;
      PartyUI_OpenMenu(LOCAL_CLIENT_0, v6, 1);
    }
    else if ( v5 == 3 )
    {
      PartyUI_OpenMenu(LOCAL_CLIENT_0, (PartyUIRoot)25, 1);
    }
    else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 2303, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "PartyAtomic_OnFrame_Committing : joining game lobby at invalid gamemode") )
    {
      __debugbreak();
    }
  }
}

/*
==============
PartyAtomic_OnFrame_Committed
==============
*/
void PartyAtomic_OnFrame_Committed(int curTime, PartyJoinInfo *partyJoinInfo)
{
  PartyJoinType joinType; 

  if ( !partyJoinInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 2854, ASSERT_TYPE_ASSERT, "(partyJoinInfo)", (const char *)&queryFormat, "partyJoinInfo") )
    __debugbreak();
  if ( partyJoinInfo->state != PARTYJOIN_COMMITTED && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 2330, ASSERT_TYPE_ASSERT, "(PartyAtomic_GetJoinState( partyJoinInfo ) == PARTYJOIN_COMMITTED)", (const char *)&queryFormat, "PartyAtomic_GetJoinState( partyJoinInfo ) == PARTYJOIN_COMMITTED") )
    __debugbreak();
  PartyAtomic_AssertHasConnectivity(partyJoinInfo);
  joinType = partyJoinInfo->joinType;
  if ( joinType <= PJT_NONE )
    goto LABEL_12;
  if ( joinType <= PJT_HOSTPRESENCE )
    goto LABEL_21;
  switch ( joinType )
  {
    case PJT_HOSTREQUEST:
      if ( !PartyAtomicClient_CheckForCommitAbort(partyJoinInfo) )
      {
        PartyAtomicClient_SendMemberActionResponse(partyJoinInfo, JOINRESPONSE_SUCCESS);
        PartyAtomic_SetJoinState(partyJoinInfo, PARTYJOIN_WAIT_PRIMED_CLIENT, 0);
      }
      break;
    case PJT_MATCHMAKING:
      if ( PartyAtomicClient_CheckForCommitAbort(partyJoinInfo) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 2352, ASSERT_TYPE_ASSERT, "(!PartyAtomicClient_CheckForCommitAbort( partyJoinInfo ))", (const char *)&queryFormat, "!PartyAtomicClient_CheckForCommitAbort( partyJoinInfo )") )
        __debugbreak();
      PartyAtomic_SetJoinState(partyJoinInfo, PARTYJOIN_WAIT_PRIMED_HOST, 0);
      break;
    case PJT_HOSTREQUEST_PRIVATE_PARTY:
LABEL_21:
      if ( PartyAtomicClient_CheckForCommitAbort(partyJoinInfo) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 2339, ASSERT_TYPE_ASSERT, "(!PartyAtomicClient_CheckForCommitAbort( partyJoinInfo ))", (const char *)&queryFormat, "!PartyAtomicClient_CheckForCommitAbort( partyJoinInfo )") )
        __debugbreak();
      PartyAtomic_SetJoinState(partyJoinInfo, PARTYJOIN_SUCCESS, 0);
      return;
    default:
LABEL_12:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 2357, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled join type") )
        __debugbreak();
      return;
  }
}

/*
==============
PartyAtomic_OnFrame_Success
==============
*/
void PartyAtomic_OnFrame_Success(int curTime, PartyJoinInfo *partyJoinInfo)
{
  if ( !partyJoinInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 2854, ASSERT_TYPE_ASSERT, "(partyJoinInfo)", (const char *)&queryFormat, "partyJoinInfo") )
    __debugbreak();
  if ( partyJoinInfo->state != PARTYJOIN_SUCCESS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 2366, ASSERT_TYPE_ASSERT, "(PartyAtomic_GetJoinState( partyJoinInfo ) == PARTYJOIN_SUCCESS)", (const char *)&queryFormat, "PartyAtomic_GetJoinState( partyJoinInfo ) == PARTYJOIN_SUCCESS") )
    __debugbreak();
  PartyAtomic_AssertNoPendingMemberMessages(partyJoinInfo);
  if ( partyJoinInfo->state != PARTYJOIN_SUCCESS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 869, ASSERT_TYPE_ASSERT, "(PartyAtomic_GetJoinState( partyJoinInfo ) == PARTYJOIN_SUCCESS)", (const char *)&queryFormat, "PartyAtomic_GetJoinState( partyJoinInfo ) == PARTYJOIN_SUCCESS") )
    __debugbreak();
  PartyAtomic_MovePotentialStateToActiveState(partyJoinInfo);
  if ( Session_IsValid(partyJoinInfo->session) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 874, ASSERT_TYPE_ASSERT, "(!Session_IsValid( partyJoinInfo->session ))", "%s\n\tJoin session did not get 'used up' properly", "!Session_IsValid( partyJoinInfo->session )") )
    __debugbreak();
  PartyAtomic_ResetPartyJoinInfo(partyJoinInfo, (GameModeType)(unsigned __int8)partyJoinInfo->partyCodPlayMode[0]);
  if ( partyJoinInfo->state )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 2373, ASSERT_TYPE_SANITY, "( PartyAtomic_GetJoinState( partyJoinInfo ) == PARTYJOIN_INACTIVE )", (const char *)&queryFormat, "PartyAtomic_GetJoinState( partyJoinInfo ) == PARTYJOIN_INACTIVE") )
      __debugbreak();
  }
}

/*
==============
PartyAtomic_OnError_FailedToJoin
==============
*/
void PartyAtomic_OnError_FailedToJoin(int curTime, PartyJoinInfo *partyJoinInfo)
{
  PartyJoinState v3; 

  if ( !PartyAtomic_HasErrorOccured(partyJoinInfo) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 2384, ASSERT_TYPE_ASSERT, "(PartyAtomic_HasErrorOccured( partyJoinInfo ))", (const char *)&queryFormat, "PartyAtomic_HasErrorOccured( partyJoinInfo )") )
    __debugbreak();
  PartyAtomic_AssertNoPendingMemberMessages(partyJoinInfo);
  if ( partyJoinInfo->joinType == PJT_HOSTREQUEST )
  {
    Com_Printf(14, "PartyJoinAtomic: FailedToJoin - Sending failed message back to the host\n");
    v3 = PARTYJOIN_WAIT_CLIENT;
    PartyAtomicClient_SendMemberActionResponse(partyJoinInfo, JOINRESPONSE_ERROR_MEMBER_FAILED);
  }
  else
  {
    v3 = PARTYJOIN_FAILED;
  }
  PartyAtomic_SetJoinState(partyJoinInfo, v3, 0);
}

/*
==============
PartyAtomic_OnError_ClientWaitFailed
==============
*/
void PartyAtomic_OnError_ClientWaitFailed(int curTime, PartyJoinInfo *partyJoinInfo)
{
  char *fmt; 

  if ( !PartyAtomic_HasErrorOccured(partyJoinInfo) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 2406, ASSERT_TYPE_ASSERT, "(PartyAtomic_HasErrorOccured( partyJoinInfo ))", (const char *)&queryFormat, "PartyAtomic_HasErrorOccured( partyJoinInfo )") )
    __debugbreak();
  Com_Printf(14, "PartyJoinAtomic: ClientWaitFailed - Going to the failed state\n");
  if ( !partyJoinInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 2861, ASSERT_TYPE_ASSERT, "(partyJoinInfo)", (const char *)&queryFormat, "partyJoinInfo") )
    __debugbreak();
  LODWORD(fmt) = 0;
  Com_Printf(25, "PartyJoin: Changing from %s to %s, with timeout %i.\n", s_partyJoinStateName[partyJoinInfo->state], s_partyJoinStateName[16], fmt);
  partyJoinInfo->state = PARTYJOIN_FAILED;
  partyJoinInfo->timeoutTime = 0;
}

/*
==============
PartyAtomic_OnError_TellPartyToAbortJoin
==============
*/
void PartyAtomic_OnError_TellPartyToAbortJoin(int curTime, PartyJoinInfo *partyJoinInfo)
{
  __int64 v3; 

  if ( !PartyAtomic_HasErrorOccured(partyJoinInfo) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 2415, ASSERT_TYPE_ASSERT, "(PartyAtomic_HasErrorOccured( partyJoinInfo ))", (const char *)&queryFormat, "PartyAtomic_HasErrorOccured( partyJoinInfo )") )
    __debugbreak();
  if ( !partyJoinInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 2854, ASSERT_TYPE_ASSERT, "(partyJoinInfo)", (const char *)&queryFormat, "partyJoinInfo") )
    __debugbreak();
  if ( partyJoinInfo->state >= PARTYJOIN_COMMIT )
  {
    LODWORD(v3) = partyJoinInfo->state;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 2416, ASSERT_TYPE_ASSERT, "( ( PartyAtomic_GetJoinState( partyJoinInfo ) < PARTYJOIN_COMMIT ) )", "( PartyAtomic_GetJoinState( partyJoinInfo ) ) = %i", v3) )
      __debugbreak();
  }
  Com_Printf(14, "PartyJoinAtomic: TellPartyToAbortJoin - Sending error code to everybody\n");
  PartyAtomicHost_BroadcastActionResponse(partyJoinInfo, JOINRESPONSE_ERROR_MEMBER_FAILED, 1);
  PartyAtomic_SetJoinState(partyJoinInfo, PARTYJOIN_WAIT_HOST_ACK, 6000);
}

/*
==============
PartyAtomic_OnError_TellPartyToAbortCommit
==============
*/
void PartyAtomic_OnError_TellPartyToAbortCommit(int curTime, PartyJoinInfo *partyJoinInfo)
{
  __int64 v3; 

  if ( !PartyAtomic_HasErrorOccured(partyJoinInfo) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 2427, ASSERT_TYPE_ASSERT, "(PartyAtomic_HasErrorOccured( partyJoinInfo ))", (const char *)&queryFormat, "PartyAtomic_HasErrorOccured( partyJoinInfo )") )
    __debugbreak();
  if ( !partyJoinInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 2854, ASSERT_TYPE_ASSERT, "(partyJoinInfo)", (const char *)&queryFormat, "partyJoinInfo") )
    __debugbreak();
  if ( partyJoinInfo->state < PARTYJOIN_COMMIT )
  {
    LODWORD(v3) = partyJoinInfo->state;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 2428, ASSERT_TYPE_ASSERT, "( ( PartyAtomic_GetJoinState( partyJoinInfo ) >= PARTYJOIN_COMMIT ) )", "( PartyAtomic_GetJoinState( partyJoinInfo ) ) = %i", v3) )
      __debugbreak();
  }
  Com_Printf(14, "PartyJoinAtomic: TellPartyToAbortCommit - Sending error code to everybody\n");
  PartyAtomicHost_BroadcastActionResponse(partyJoinInfo, JOINRESPONSE_ERROR_MEMBER_FAILED, 1);
  PartyAtomic_SetJoinState(partyJoinInfo, PARTYJOIN_WAIT_PRIMED_HOST_ACK, 6000);
}

/*
==============
PartyAtomic_OnError_WaitHostAckFailed
==============
*/
void PartyAtomic_OnError_WaitHostAckFailed(int curTime, PartyJoinInfo *partyJoinInfo)
{
  if ( !partyJoinInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 2854, ASSERT_TYPE_ASSERT, "(partyJoinInfo)", (const char *)&queryFormat, "partyJoinInfo") )
    __debugbreak();
  if ( partyJoinInfo->state != PARTYJOIN_WAIT_HOST_ACK && partyJoinInfo->state != PARTYJOIN_WAIT_PRIMED_HOST_ACK && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 2439, ASSERT_TYPE_ASSERT, "((PartyAtomic_GetJoinState( partyJoinInfo ) == PARTYJOIN_WAIT_HOST_ACK) || (PartyAtomic_GetJoinState( partyJoinInfo ) == PARTYJOIN_WAIT_PRIMED_HOST_ACK))", (const char *)&queryFormat, "(PartyAtomic_GetJoinState( partyJoinInfo ) == PARTYJOIN_WAIT_HOST_ACK) || (PartyAtomic_GetJoinState( partyJoinInfo ) == PARTYJOIN_WAIT_PRIMED_HOST_ACK)") )
    __debugbreak();
  if ( !PartyAtomic_HasErrorOccured(partyJoinInfo) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 2440, ASSERT_TYPE_ASSERT, "(PartyAtomic_HasErrorOccured( partyJoinInfo ))", (const char *)&queryFormat, "PartyAtomic_HasErrorOccured( partyJoinInfo )") )
    __debugbreak();
  if ( PartyAtomicHost_WaitForMembersToAckOurResponse(curTime, partyJoinInfo) )
    PartyAtomic_SetJoinState(partyJoinInfo, PARTYJOIN_FAILED, 0);
}

/*
==============
PartyAtomic_OnError_CommitFailed
==============
*/
void PartyAtomic_OnError_CommitFailed(int curTime, PartyJoinInfo *partyJoinInfo)
{
  PartyJoinType joinType; 
  PartyJoinState v4; 
  int v5; 
  __int64 v6; 

  if ( !partyJoinInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 2854, ASSERT_TYPE_ASSERT, "(partyJoinInfo)", (const char *)&queryFormat, "partyJoinInfo") )
    __debugbreak();
  if ( (unsigned int)(partyJoinInfo->state - 9) > 2 )
  {
    LODWORD(v6) = partyJoinInfo->state;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 2449, ASSERT_TYPE_ASSERT, "( ( (PartyAtomic_GetJoinState( partyJoinInfo ) >= PARTYJOIN_COMMIT) && (PartyAtomic_GetJoinState( partyJoinInfo ) <= PARTYJOIN_COMMITTED) ) )", "( PartyAtomic_GetJoinState( partyJoinInfo ) ) = %i", v6) )
      __debugbreak();
  }
  if ( !PartyAtomic_HasErrorOccured(partyJoinInfo) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 2450, ASSERT_TYPE_ASSERT, "(PartyAtomic_HasErrorOccured( partyJoinInfo ))", (const char *)&queryFormat, "PartyAtomic_HasErrorOccured( partyJoinInfo )") )
    __debugbreak();
  PartyAtomic_AssertNoPendingMemberMessages(partyJoinInfo);
  joinType = partyJoinInfo->joinType;
  if ( joinType == PJT_HOSTREQUEST )
  {
    Com_Printf(14, "PartyJoinAtomic: CommitFailed - Sending such message back to the host\n");
    PartyAtomicClient_SendMemberActionResponse(partyJoinInfo, JOINRESPONSE_ERROR_MEMBER_FAILED);
    v4 = PARTYJOIN_WAIT_PRIMED_CLIENT;
LABEL_21:
    v5 = 0;
    goto LABEL_22;
  }
  if ( joinType != PJT_MATCHMAKING )
  {
    v4 = PARTYJOIN_FAILED;
    goto LABEL_21;
  }
  if ( !PartyAtomic_HasErrorOccured(partyJoinInfo) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 2427, ASSERT_TYPE_ASSERT, "(PartyAtomic_HasErrorOccured( partyJoinInfo ))", (const char *)&queryFormat, "PartyAtomic_HasErrorOccured( partyJoinInfo )") )
    __debugbreak();
  if ( partyJoinInfo->state < PARTYJOIN_COMMIT )
  {
    LODWORD(v6) = partyJoinInfo->state;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 2428, ASSERT_TYPE_ASSERT, "( ( PartyAtomic_GetJoinState( partyJoinInfo ) >= PARTYJOIN_COMMIT ) )", "( PartyAtomic_GetJoinState( partyJoinInfo ) ) = %i", v6) )
      __debugbreak();
  }
  v4 = PARTYJOIN_WAIT_PRIMED_HOST_ACK;
  Com_Printf(14, "PartyJoinAtomic: TellPartyToAbortCommit - Sending error code to everybody\n");
  PartyAtomicHost_BroadcastActionResponse(partyJoinInfo, JOINRESPONSE_ERROR_MEMBER_FAILED, 1);
  v5 = 6000;
LABEL_22:
  PartyAtomic_SetJoinState(partyJoinInfo, v4, v5);
}

/*
==============
PartyAtomic_OnError_Failed
==============
*/
void PartyAtomic_OnError_Failed(int curTime, PartyJoinInfo *partyJoinInfo)
{
  if ( !partyJoinInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 2854, ASSERT_TYPE_ASSERT, "(partyJoinInfo)", (const char *)&queryFormat, "partyJoinInfo") )
    __debugbreak();
  if ( partyJoinInfo->state != PARTYJOIN_FAILED && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 2475, ASSERT_TYPE_ASSERT, "(PartyAtomic_GetJoinState( partyJoinInfo ) == PARTYJOIN_FAILED)", (const char *)&queryFormat, "PartyAtomic_GetJoinState( partyJoinInfo ) == PARTYJOIN_FAILED") )
    __debugbreak();
  if ( !partyJoinInfo->errorMessage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 2476, ASSERT_TYPE_ASSERT, "(partyJoinInfo->errorMessage)", (const char *)&queryFormat, "partyJoinInfo->errorMessage") )
    __debugbreak();
  PartyAtomic_AssertNoPendingMemberMessages(partyJoinInfo);
  PartyAtomic_HandleFailedJoinAttempt(partyJoinInfo);
  PartyAtomic_ResetPartyJoinInfo(partyJoinInfo, (GameModeType)(unsigned __int8)partyJoinInfo->partyCodPlayMode[0]);
  if ( partyJoinInfo->state )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 2483, ASSERT_TYPE_SANITY, "( PartyAtomic_GetJoinState( partyJoinInfo ) == PARTYJOIN_INACTIVE )", (const char *)&queryFormat, "PartyAtomic_GetJoinState( partyJoinInfo ) == PARTYJOIN_INACTIVE") )
      __debugbreak();
  }
}

/*
==============
PartyAtomicClient_CheckForCommitAbort
==============
*/
__int64 PartyAtomicClient_CheckForCommitAbort(PartyJoinInfo *partyJoinInfo)
{
  PartyDisconnectReason v3; 

  if ( !partyJoinInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 1455, ASSERT_TYPE_ASSERT, "(partyJoinInfo)", (const char *)&queryFormat, "partyJoinInfo") )
    __debugbreak();
  if ( partyJoinInfo->hostResponse[1] == JOINRESPONSE_SUCCESS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 1457, ASSERT_TYPE_ASSERT, "(partyJoinInfo->hostResponse[PARTYACTION_COMMIT] != JOINRESPONSE_SUCCESS)", "%s\n\tHost told us to succeed even though we haven't told them it's okay", "partyJoinInfo->hostResponse[PARTYACTION_COMMIT] != JOINRESPONSE_SUCCESS") )
    __debugbreak();
  if ( partyJoinInfo->hostResponse[1] == JOINRESPONSE_NONE )
    return 0i64;
  Com_Printf(25, "PartyJoin: Host sent us his commit failure response, we should abort.\n");
  OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_PARTY_JOIN_t)0x8000000, NULL);
  LOBYTE(v3) = 14;
  partyJoinInfo->errorResponse = partyJoinInfo->hostResponse[1];
  PartyAtomic_JoinAttemptFailed(partyJoinInfo, (const char *)&stru_143DD5890, v3);
  return 1i64;
}

/*
==============
PartyAtomicClient_CheckForJoinAbort
==============
*/
__int64 PartyAtomicClient_CheckForJoinAbort(PartyJoinInfo *partyJoinInfo)
{
  PartyDisconnectReason v3; 

  if ( !partyJoinInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 1439, ASSERT_TYPE_ASSERT, "(partyJoinInfo)", (const char *)&queryFormat, "partyJoinInfo") )
    __debugbreak();
  if ( partyJoinInfo->hostResponse[0] == JOINRESPONSE_SUCCESS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 1441, ASSERT_TYPE_ASSERT, "(partyJoinInfo->hostResponse[PARTYACTION_JOIN] != JOINRESPONSE_SUCCESS)", "%s\n\tHost told us to succeed even though we haven't told them it's okay", "partyJoinInfo->hostResponse[PARTYACTION_JOIN] != JOINRESPONSE_SUCCESS") )
    __debugbreak();
  if ( partyJoinInfo->hostResponse[0] == JOINRESPONSE_NONE )
    return 0i64;
  Com_Printf(25, "PartyJoin: Host sent us his joined failure response, we should abort.\n");
  OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_PARTY_JOIN_t)0x4000000, NULL);
  LOBYTE(v3) = 14;
  partyJoinInfo->errorResponse = partyJoinInfo->hostResponse[0];
  PartyAtomic_JoinAttemptFailed(partyJoinInfo, (const char *)&stru_143DD5890, v3);
  return 1i64;
}

/*
==============
PartyAtomicClient_CommitToJoinedParty_Internal
==============
*/
void PartyAtomicClient_CommitToJoinedParty_Internal(const PartyActiveClient *activeClient, PartyJoinInfo *partyJoinInfo)
{
  unsigned __int8 *m_ptr; 
  const char *v5; 
  const char *v6; 
  XUID *Xuid; 
  bool IsPaidUser; 
  bool HasOnlineSubscription; 
  msg_t buf; 
  __int64 v11; 
  XUID result; 
  Mem_LargeLocal data; 
  bdSecurityID outKid; 

  v11 = -2i64;
  Mem_LargeLocal::Mem_LargeLocal(&data, 0x9AAui64, "min_msg_buf partyMsgBuf");
  m_ptr = (unsigned __int8 *)data.m_ptr;
  if ( CL_AllLocalClientsInactive() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 1400, ASSERT_TYPE_ASSERT, "(!CL_AllLocalClientsInactive())", (const char *)&queryFormat, "!CL_AllLocalClientsInactive()") )
    __debugbreak();
  if ( !partyJoinInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 1401, ASSERT_TYPE_ASSERT, "(partyJoinInfo)", (const char *)&queryFormat, "partyJoinInfo") )
    __debugbreak();
  if ( !activeClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 1402, ASSERT_TYPE_ASSERT, "(activeClient)", (const char *)&queryFormat, "activeClient") )
    __debugbreak();
  if ( !partyJoinInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 2854, ASSERT_TYPE_ASSERT, "(partyJoinInfo)", (const char *)&queryFormat, "partyJoinInfo") )
    __debugbreak();
  if ( partyJoinInfo->state != PARTYJOIN_COMMIT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 1404, ASSERT_TYPE_ASSERT, "( ( PartyAtomic_GetJoinState( partyJoinInfo ) == PARTYJOIN_COMMIT ) )", "( partyJoinInfo ) = %p", partyJoinInfo) )
    __debugbreak();
  MSG_Init(&buf, m_ptr, 2474);
  v5 = PartyAtomic_JoinInfoToString(partyJoinInfo);
  Com_Printf(25, "PartyJoin: Committing to joined with id '%s'\n", v5);
  v6 = j_va("%ipa_membercommit", (unsigned int)partyJoinInfo->partyType);
  MSG_WriteString(&buf, v6);
  Xuid = Live_GetXuid(&result, activeClient->localControllerIndex);
  XUID::Serialize(Xuid, &buf);
  bdSecurityID::bdSecurityID(&outKid);
  Party_GetOurPrivatePartyId(&outKid);
  MSG_WriteData(&buf, &outKid, 8);
  IsPaidUser = LiveStorage_IsPaidUser(activeClient->localControllerIndex);
  MSG_WriteBool(&buf, IsPaidUser);
  HasOnlineSubscription = Live_HasOnlineSubscription(activeClient->localControllerIndex);
  MSG_WriteBool(&buf, HasOnlineSubscription);
  NetConnection::SendUnreliable(&partyJoinInfo->connections[activeClient->localClientNum], buf.data, buf.cursize);
  bdSecurityID::~bdSecurityID(&outKid);
  Mem_LargeLocal::~Mem_LargeLocal(&data);
}

/*
==============
PartyAtomicClient_HasClientJoinedAcceptedParty
==============
*/
__int64 PartyAtomicClient_HasClientJoinedAcceptedParty(const PartyJoinInfo *partyJoinInfo, const LocalClientNum_t localClientNum)
{
  __int64 v2; 
  __int64 v5; 

  v2 = localClientNum;
  if ( !partyJoinInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 1230, ASSERT_TYPE_ASSERT, "(partyJoinInfo)", (const char *)&queryFormat, "partyJoinInfo") )
    __debugbreak();
  if ( (unsigned int)v2 >= 2 )
  {
    LODWORD(v5) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 1231, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v5, 2) )
      __debugbreak();
  }
  return (unsigned int)partyJoinInfo->joinAccepted[v2];
}

/*
==============
PartyAtomicClient_IsClientCommittingToParty
==============
*/
__int64 PartyAtomicClient_IsClientCommittingToParty(const PartyJoinInfo *partyJoinInfo, const LocalClientNum_t localClientNum)
{
  __int64 v2; 
  __int64 v5; 

  v2 = localClientNum;
  if ( !partyJoinInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 1369, ASSERT_TYPE_ASSERT, "(partyJoinInfo)", (const char *)&queryFormat, "partyJoinInfo") )
    __debugbreak();
  if ( (unsigned int)v2 >= 2 )
  {
    LODWORD(v5) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 1370, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v5, 2) )
      __debugbreak();
  }
  return (unsigned int)partyJoinInfo->committingAccepted[v2];
}

/*
==============
PartyAtomicClient_JoinAcceptedParty_Internal
==============
*/
void PartyAtomicClient_JoinAcceptedParty_Internal(PartyData *party, const PartyActiveClient *partyActiveClient, PartyJoinInfo *partyJoinInfo)
{
  unsigned __int8 *m_ptr; 
  const char *v7; 
  const char *v8; 
  bdSecurityID *SecurityId; 
  XUID *Xuid; 
  bool IsGuest; 
  int LocalNatType; 
  __int64 v13; 
  msg_t buf; 
  __int64 v15; 
  XUID result; 
  Mem_LargeLocal v17; 
  ClientAuthoritativeMemberInfo v18; 

  v15 = -2i64;
  bdSecurityID::bdSecurityID(&v18.privatePartyId);
  Mem_LargeLocal::Mem_LargeLocal(&v17, 0x9AAui64, "min_msg_buf partyMsgBuf");
  m_ptr = (unsigned __int8 *)v17.m_ptr;
  if ( CL_AllLocalClientsInactive() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 1266, ASSERT_TYPE_ASSERT, "(!CL_AllLocalClientsInactive())", (const char *)&queryFormat, "!CL_AllLocalClientsInactive()") )
    __debugbreak();
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 1267, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !partyJoinInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 1268, ASSERT_TYPE_ASSERT, "(partyJoinInfo)", (const char *)&queryFormat, "partyJoinInfo") )
    __debugbreak();
  if ( !partyActiveClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 1269, ASSERT_TYPE_ASSERT, "(partyActiveClient)", (const char *)&queryFormat, "partyActiveClient") )
    __debugbreak();
  if ( !partyJoinInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 2854, ASSERT_TYPE_ASSERT, "(partyJoinInfo)", (const char *)&queryFormat, "partyJoinInfo") )
    __debugbreak();
  if ( partyJoinInfo->state != PARTYJOIN_JOIN && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 1271, ASSERT_TYPE_ASSERT, "( ( PartyAtomic_GetJoinState( partyJoinInfo ) == PARTYJOIN_JOIN ) )", "( partyJoinInfo ) = %p", partyJoinInfo) )
    __debugbreak();
  if ( (unsigned int)PartyAtomicClient_HasClientJoinedAcceptedParty(partyJoinInfo, (const LocalClientNum_t)partyActiveClient->localClientNum) )
  {
    Com_Printf(25, "PartyJoin: [%i] Client already accepted, not sending another request.\n", (unsigned int)partyActiveClient->localClientNum);
  }
  else
  {
    if ( !Live_UserIsGuest(partyActiveClient->localControllerIndex) )
      GamerProfile_UpdateSystemVarsFromProfile(partyActiveClient->localControllerIndex);
    MSG_Init(&buf, m_ptr, 2474);
    if ( buf.cursize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 1285, ASSERT_TYPE_ASSERT, "(newMsg.cursize == 0)", (const char *)&queryFormat, "newMsg.cursize == 0") )
      __debugbreak();
    if ( buf.bit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 1286, ASSERT_TYPE_ASSERT, "(newMsg.bit == 0)", (const char *)&queryFormat, "newMsg.bit == 0") )
      __debugbreak();
    v7 = PartyAtomic_JoinInfoToString(partyJoinInfo);
    Com_Printf(25, "PartyJoin: [%i] Joining accepted with id '%s'\n", (unsigned int)partyActiveClient->localClientNum, v7);
    v8 = j_va("%ipa_memberjoin", (unsigned int)partyJoinInfo->partyType);
    MSG_WriteString(&buf, v8);
    SecurityId = XSESSION_INFO::GetSecurityId(&partyJoinInfo->session->dyn.sessionInfo);
    MSG_WriteData(&buf, SecurityId, 8);
    MSG_WriteData(&buf, &partyJoinInfo->challenge, 6);
    Xuid = Live_GetXuid(&result, partyActiveClient->localControllerIndex);
    XUID::Serialize(Xuid, &buf);
    IsGuest = Live_UserIsGuest(partyActiveClient->localControllerIndex);
    MSG_WriteBool(&buf, IsGuest);
    if ( Live_GetLocalNatType() <= 0 )
    {
      LODWORD(v13) = Live_GetLocalNatType();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 1297, ASSERT_TYPE_ASSERT, "( ( Live_GetLocalNatType() > 0 ) )", "( Live_GetLocalNatType() ) = %i", v13) )
        __debugbreak();
    }
    LocalNatType = Live_GetLocalNatType();
    MSG_WriteBits(&buf, LocalNatType, 2u);
    if ( partyJoinInfo->joinType >= 0x100u )
    {
      LODWORD(v13) = partyJoinInfo->joinType;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 1301, ASSERT_TYPE_ASSERT, "(unsigned)( partyJoinInfo->joinType ) < (unsigned)( 0xff + 1 )", "partyJoinInfo->joinType doesn't index UCHAR_MAX + 1\n\t%i not in [0, %i)", v13, 256) )
        __debugbreak();
    }
    MSG_WriteByte(&buf, partyJoinInfo->joinType);
    memset_0(&v18, 0, sizeof(v18));
    Party_FillInOurMemberInfo(party, partyActiveClient->localControllerIndex, &v18);
    if ( Com_IsGameLocalServerRunningOrLoading() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 1306, ASSERT_TYPE_ASSERT, "(!Com_IsGameLocalServerRunningOrLoading())", (const char *)&queryFormat, "!Com_IsGameLocalServerRunningOrLoading()") )
      __debugbreak();
    Party_WriteMemberInfo(party, &buf, &v18);
    MSG_WriteShort(&buf, 0);
    NetConnection::SendUnreliable(&partyJoinInfo->connections[partyActiveClient->localClientNum], buf.data, buf.cursize);
  }
  Mem_LargeLocal::~Mem_LargeLocal(&v17);
  bdSecurityID::~bdSecurityID(&v18.privatePartyId);
}

/*
==============
PartyAtomicClient_SendMemberActionResponse
==============
*/
void PartyAtomicClient_SendMemberActionResponse(PartyJoinInfo *joinInfo, PartyJoinResponse response)
{
  PartyActiveClient activeClient; 

  if ( !joinInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 960, ASSERT_TYPE_ASSERT, "(joinInfo)", (const char *)&queryFormat, "joinInfo") )
    __debugbreak();
  activeClient = PartyAtomicJoin_GetMainActiveClient(joinInfo, joinInfo->controllerIndex);
  PartyAtomicClient_SendMemberActionResponse_Internal(&activeClient, joinInfo, response);
  if ( PartyAtomicJoin_GetSecondaryActiveClient(joinInfo, &activeClient) )
    PartyAtomicClient_SendMemberActionResponse_Internal(&activeClient, joinInfo, response);
}

/*
==============
PartyAtomicClient_SendMemberActionResponse_Internal
==============
*/
void PartyAtomicClient_SendMemberActionResponse_Internal(const PartyActiveClient *activeClient, PartyJoinInfo *joinInfo, PartyJoinResponse response)
{
  unsigned __int8 *m_ptr; 
  bool v7; 
  _BOOL8 v8; 
  NetConnection *HostConnection; 
  const char *String; 
  PartyData *atomicParty; 
  PartyType partyId; 
  const char *v13; 
  bdSecurityID *SecurityId; 
  XUID *Xuid; 
  __int64 v16; 
  Mem_LargeLocal data; 
  msg_t buf; 
  XUID result; 

  Mem_LargeLocal::Mem_LargeLocal(&data, 0x9AAui64, "min_msg_buf partyMsgBuf");
  m_ptr = (unsigned __int8 *)data.m_ptr;
  if ( !activeClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 930, ASSERT_TYPE_ASSERT, "(activeClient)", (const char *)&queryFormat, "activeClient") )
    __debugbreak();
  if ( !joinInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 931, ASSERT_TYPE_ASSERT, "(joinInfo)", (const char *)&queryFormat, "joinInfo") )
    __debugbreak();
  if ( joinInfo->joinType != PJT_HOSTREQUEST && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 932, ASSERT_TYPE_ASSERT, "(joinInfo->joinType == PJT_HOSTREQUEST)", (const char *)&queryFormat, "joinInfo->joinType == PJT_HOSTREQUEST") )
    __debugbreak();
  if ( response )
  {
    if ( (unsigned int)response < JOINRESPONSE_COUNT )
      goto LABEL_16;
    LODWORD(v16) = response;
    v7 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 934, ASSERT_TYPE_ASSERT, "(unsigned)( response ) < (unsigned)( JOINRESPONSE_COUNT )", "response doesn't index JOINRESPONSE_COUNT\n\t%i not in [0, %i)", v16, 79);
  }
  else
  {
    v7 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 933, ASSERT_TYPE_ASSERT, "(response != JOINRESPONSE_NONE)", (const char *)&queryFormat, "response != JOINRESPONSE_NONE");
  }
  if ( v7 )
    __debugbreak();
LABEL_16:
  if ( !joinInfo->atomicParty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 935, ASSERT_TYPE_ASSERT, "(joinInfo->atomicParty)", (const char *)&queryFormat, "joinInfo->atomicParty") )
    __debugbreak();
  v8 = joinInfo->state >= PARTYJOIN_COMMIT;
  if ( joinInfo->hostResponse[v8] == JOINRESPONSE_SUCCESS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 939, ASSERT_TYPE_ASSERT, "((joinInfo->hostResponse[joinAction] != JOINRESPONSE_SUCCESS))", "%s\n\tWe didn't tell the host what our choice was and yet he told us we succeeded", "(joinInfo->hostResponse[joinAction] != JOINRESPONSE_SUCCESS)") )
    __debugbreak();
  HostConnection = Party_GetHostConnection(joinInfo->atomicParty, activeClient->localClientNum);
  String = NetConnection::GetString(HostConnection);
  Com_Printf(25, "PartyAtomicClient - SendMemberActionResponse - Sending response '%i' for action '%i' to host at address %s.\n", (unsigned int)response, v8, String);
  atomicParty = joinInfo->atomicParty;
  if ( atomicParty )
    partyId = atomicParty->partyId;
  else
    partyId = joinInfo->partyType;
  MSG_Init(&buf, m_ptr, 2474);
  v13 = j_va("%ipa_memberjoinresponse", (unsigned int)partyId);
  MSG_WriteString(&buf, v13);
  SecurityId = XSESSION_INFO::GetSecurityId(&joinInfo->session->dyn.sessionInfo);
  MSG_WriteData(&buf, SecurityId, 8);
  MSG_WriteData(&buf, &joinInfo->challenge, 6);
  MSG_WriteByte(&buf, v8);
  Xuid = Live_GetXuid(&result, activeClient->localControllerIndex);
  XUID::Serialize(Xuid, &buf);
  MSG_WriteLong(&buf, response);
  NetConnection::SendReliable(HostConnection, &buf);
  Mem_LargeLocal::~Mem_LargeLocal(&data);
}

/*
==============
PartyAtomicClient_ShouldHandleJoinFailed
==============
*/
_BOOL8 PartyAtomicClient_ShouldHandleJoinFailed(PartyJoinInfo *partyJoinInfo)
{
  PartyJoinState state; 

  if ( !PartyAtomic_IsJoiningActive(partyJoinInfo) )
    return 0i64;
  if ( !partyJoinInfo )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 628, ASSERT_TYPE_ASSERT, "(partyJoinInfo)", (const char *)&queryFormat, "partyJoinInfo") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 2854, ASSERT_TYPE_ASSERT, "(partyJoinInfo)", (const char *)&queryFormat, "partyJoinInfo") )
      __debugbreak();
  }
  state = partyJoinInfo->state;
  return partyJoinInfo->state > PARTYJOIN_INACTIVE && (state <= PARTYJOIN_JOINING || (unsigned int)(state - 9) <= 1);
}

/*
==============
PartyAtomicHost_BroadcastActionResponse
==============
*/
void PartyAtomicHost_BroadcastActionResponse(PartyJoinInfo *joinInfo, PartyJoinResponse response, int useMessageHandle)
{
  int v3; 
  PartyJoinResponse v4; 
  PartyData *atomicParty; 
  const XUID *p_playerUID; 
  int v8; 
  char *gamertag; 
  unsigned int *p_responseMessageHandle; 
  NetConnection *MemberConnection; 
  unsigned int *v12; 
  PartyData *v13; 
  PartyType partyId; 
  const char *v15; 
  bdSecurityID *SecurityId; 
  const char *String; 
  char *fmt; 
  __int64 value; 
  const XUID *v22; 
  msg_t buf; 
  unsigned __int8 data[64]; 

  v3 = useMessageHandle;
  v4 = response;
  if ( !joinInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 1699, ASSERT_TYPE_ASSERT, "(joinInfo)", (const char *)&queryFormat, "joinInfo") )
    __debugbreak();
  if ( joinInfo->partyType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 1700, ASSERT_TYPE_ASSERT, "(joinInfo->partyType == GAME_LOBBY_ID)", (const char *)&queryFormat, "joinInfo->partyType == GAME_LOBBY_ID") )
    __debugbreak();
  atomicParty = joinInfo->atomicParty;
  if ( !atomicParty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 1703, ASSERT_TYPE_ASSERT, "(broadcastParty)", (const char *)&queryFormat, "broadcastParty") )
    __debugbreak();
  if ( !atomicParty->inParty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 1704, ASSERT_TYPE_ASSERT, "(broadcastParty->inParty)", (const char *)&queryFormat, "broadcastParty->inParty") )
    __debugbreak();
  if ( !atomicParty->areWeHost && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 1705, ASSERT_TYPE_ASSERT, "(broadcastParty->areWeHost)", (const char *)&queryFormat, "broadcastParty->areWeHost") )
    __debugbreak();
  value = joinInfo->state >= PARTYJOIN_COMMIT;
  Com_Printf(16, "PartyAtomicJoin: Sending lobby action %i response '%i' to party %s\n", value, (unsigned int)v4, atomicParty->partyName);
  p_playerUID = &atomicParty->partyMembers[0].playerUID;
  v8 = 0;
  v22 = &atomicParty->partyMembers[0].playerUID;
  gamertag = atomicParty->partyMembers[0].info.gamertag;
  p_responseMessageHandle = &joinInfo->memberJoinInfo[0].responseMessageHandle;
  do
  {
    if ( *(p_responseMessageHandle - 6) && !PartyAtomicHost_CheckForMemberDisconnect(joinInfo, v8, "BroadcastActionResponse") )
    {
      if ( p_responseMessageHandle[value - 2] != 1 && v4 == JOINRESPONSE_SUCCESS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 1722, ASSERT_TYPE_ASSERT, "((memberJoinInfo->responseState[joinAction] == JOINRESPONSE_SUCCESS) || (response != JOINRESPONSE_SUCCESS))", "%s\n\tEveryone should succeed when we send a positive response", "(memberJoinInfo->responseState[joinAction] == JOINRESPONSE_SUCCESS) || (response != JOINRESPONSE_SUCCESS)") )
        __debugbreak();
      if ( !XUID::operator==((XUID *)p_responseMessageHandle - 2, p_playerUID) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 1723, ASSERT_TYPE_ASSERT, "(memberJoinInfo->xuid == broadcastParty->partyMembers[memberIndex].playerUID)", "%s\n\tTracked player does not match active player", "memberJoinInfo->xuid == broadcastParty->partyMembers[memberIndex].playerUID") )
        __debugbreak();
      if ( gamertag[358] != 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 1726, ASSERT_TYPE_ASSERT, "(member->status == PARTYSTATUS_PRESENT)", "%s\n\tTrying to broadcast response to a lobby with a party member that's no longer present", "member->status == PARTYSTATUS_PRESENT") )
        __debugbreak();
      if ( Party_IsHost(atomicParty, v8) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 1728, ASSERT_TYPE_ASSERT, "(!Party_IsHost( broadcastParty, memberIndex ))", (const char *)&queryFormat, "!Party_IsHost( broadcastParty, memberIndex )") )
        __debugbreak();
      if ( !Party_IsMemberRegistered(atomicParty, v8) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 1730, ASSERT_TYPE_ASSERT, "(Party_IsMemberRegistered( broadcastParty, memberIndex ))", (const char *)&queryFormat, "Party_IsMemberRegistered( broadcastParty, memberIndex )") )
        __debugbreak();
      MemberConnection = (NetConnection *)Party_GetMemberConnection(atomicParty, v8);
      if ( !NetConnection::IsLocal(MemberConnection) )
      {
        if ( v3 )
        {
          if ( RMsg_GetSendStatusFromHandle(*p_responseMessageHandle) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 1738, ASSERT_TYPE_ASSERT, "(RMsg_GetSendStatusFromHandle( memberJoinInfo->responseMessageHandle ) == RMSG_STATUS_INACTIVE)", (const char *)&queryFormat, "RMsg_GetSendStatusFromHandle( memberJoinInfo->responseMessageHandle ) == RMSG_STATUS_INACTIVE") )
            __debugbreak();
          v12 = p_responseMessageHandle;
        }
        else
        {
          v12 = NULL;
        }
        v13 = joinInfo->atomicParty;
        if ( v13 )
          partyId = v13->partyId;
        else
          partyId = joinInfo->partyType;
        MSG_Init(&buf, data, 64);
        v15 = j_va("%ipa_actionresponse", (unsigned int)partyId);
        MSG_WriteString(&buf, v15);
        SecurityId = XSESSION_INFO::GetSecurityId(&joinInfo->session->dyn.sessionInfo);
        MSG_WriteData(&buf, SecurityId, 8);
        MSG_WriteData(&buf, &joinInfo->challenge, 6);
        MSG_WriteByte(&buf, value);
        MSG_WriteLong(&buf, response);
        if ( buf.overflowed )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 1688, ASSERT_TYPE_ASSERT, "(!MSG_IsOverflowed( &newMsg ))", (const char *)&queryFormat, "!MSG_IsOverflowed( &newMsg )") )
            __debugbreak();
        }
        NetConnection::SendReliable(MemberConnection, &buf, 0, v12);
        String = NetConnection::GetString(MemberConnection);
        v3 = useMessageHandle;
        LODWORD(fmt) = useMessageHandle;
        Com_Printf(16, "PartyAtomicJoin: Sending response to %s (%s) (%i)\n", gamertag, String, fmt);
        p_playerUID = v22;
      }
      v4 = response;
    }
    p_playerUID += 63;
    ++v8;
    p_responseMessageHandle += 8;
    v22 = p_playerUID;
    gamertag += 504;
  }
  while ( v8 < 200 );
}

/*
==============
PartyAtomicHost_BroadcastLobbyJoin
==============
*/
void PartyAtomicHost_BroadcastLobbyJoin(int curTime, PartyJoinInfo *joinInfo)
{
  unsigned __int8 *m_ptr; 
  PartyData *atomicParty; 
  PartyData *v6; 
  __int64 partyId; 
  const char *v8; 
  int v9; 
  unsigned __int8 *p_status; 
  const XUID *p_playerUID; 
  XUID *p_xuid; 
  NetConnection *MemberConnection; 
  const char *v14; 
  const char *String; 
  XUID *Xuid; 
  const char *v17; 
  const char *MemberName; 
  __int64 v19; 
  __int64 v20; 
  __int64 v21; 
  Mem_LargeLocal v22; 
  msg_t buf; 
  const XUID *v25; 
  unsigned __int8 *v26; 
  XUID result; 

  Mem_LargeLocal::Mem_LargeLocal(&v22, 0x9AAui64, "min_msg_buf partyMsgBuf");
  m_ptr = (unsigned __int8 *)v22.m_ptr;
  if ( !joinInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 1634, ASSERT_TYPE_ASSERT, "(joinInfo)", (const char *)&queryFormat, "joinInfo") )
    __debugbreak();
  if ( joinInfo->partyType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 1635, ASSERT_TYPE_ASSERT, "(joinInfo->partyType == GAME_LOBBY_ID)", (const char *)&queryFormat, "joinInfo->partyType == GAME_LOBBY_ID") )
    __debugbreak();
  if ( joinInfo->nextBroadcastTime <= curTime )
  {
    joinInfo->nextBroadcastTime = curTime + 300;
    atomicParty = joinInfo->atomicParty;
    if ( !atomicParty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 1643, ASSERT_TYPE_ASSERT, "(broadcastParty)", (const char *)&queryFormat, "broadcastParty") )
      __debugbreak();
    if ( !atomicParty->inParty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 1644, ASSERT_TYPE_ASSERT, "(broadcastParty->inParty)", (const char *)&queryFormat, "broadcastParty->inParty") )
      __debugbreak();
    if ( !atomicParty->areWeHost && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 1645, ASSERT_TYPE_ASSERT, "(broadcastParty->areWeHost)", (const char *)&queryFormat, "broadcastParty->areWeHost") )
      __debugbreak();
    MSG_Init(&buf, m_ptr, 2474);
    v6 = joinInfo->atomicParty;
    if ( v6 )
      partyId = (unsigned int)v6->partyId;
    else
      partyId = (unsigned int)joinInfo->partyType;
    v8 = j_va("%ipa_joinlobbyrequest", partyId);
    MSG_WriteString(&buf, v8);
    MSG_WriteData(&buf, &joinInfo->challenge, 6);
    XSESSION_INFO::Serialize(&joinInfo->session->dyn.sessionInfo, &buf);
    MSG_WriteByte(&buf, 0i64);
    MSG_WriteInt64(&buf, joinInfo->lobbyId);
    v9 = 0;
    p_status = &atomicParty->partyMembers[0].status;
    v26 = &atomicParty->partyMembers[0].status;
    p_playerUID = &atomicParty->partyMembers[0].playerUID;
    v25 = &atomicParty->partyMembers[0].playerUID;
    p_xuid = &joinInfo->memberJoinInfo[0].xuid;
    do
    {
      if ( LODWORD(p_xuid[-1].m_id) && !PartyAtomicHost_CheckForMemberDisconnect(joinInfo, v9, "BroadcastLobbyJoin") && !LODWORD(p_xuid[1].m_id) )
      {
        if ( !XUID::operator==(p_xuid, p_playerUID) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 1662, ASSERT_TYPE_ASSERT, "(memberJoinInfo->xuid == broadcastParty->partyMembers[memberIndex].playerUID)", (const char *)&queryFormat, "memberJoinInfo->xuid == broadcastParty->partyMembers[memberIndex].playerUID") )
          __debugbreak();
        if ( *p_status != 5 )
        {
          LODWORD(v21) = 5;
          LODWORD(v20) = *p_status;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 1663, ASSERT_TYPE_ASSERT, "( broadcastParty->partyMembers[memberIndex].status ) == ( PARTYSTATUS_PRESENT )", "%s == %s\n\t%i, %i", "broadcastParty->partyMembers[memberIndex].status", "PARTYSTATUS_PRESENT", v20, v21) )
            __debugbreak();
        }
        if ( Party_IsHost(atomicParty, v9) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 1664, ASSERT_TYPE_ASSERT, "(!Party_IsHost( broadcastParty, memberIndex ))", (const char *)&queryFormat, "!Party_IsHost( broadcastParty, memberIndex )") )
          __debugbreak();
        if ( !Party_IsMemberRegistered(atomicParty, v9) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 1665, ASSERT_TYPE_ASSERT, "(Party_IsMemberRegistered( broadcastParty, memberIndex ))", (const char *)&queryFormat, "Party_IsMemberRegistered( broadcastParty, memberIndex )") )
          __debugbreak();
        MemberConnection = (NetConnection *)Party_GetMemberConnection(atomicParty, v9);
        if ( NetConnection::IsLocal(MemberConnection) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 1668, ASSERT_TYPE_ASSERT, "(!connection.IsLocal())", (const char *)&queryFormat, "!connection.IsLocal()") )
          __debugbreak();
        v14 = PartyAtomic_JoinInfoToString(joinInfo);
        String = NetConnection::GetString(MemberConnection);
        Xuid = Party_GetXuid(&result, atomicParty, v9);
        v17 = XUID::ToDevString(Xuid);
        MemberName = Party_GetMemberName(atomicParty, v9);
        LODWORD(v19) = curTime;
        Com_Printf(16, "PartyAtomicJoin: Sending new lobby info to %s %s (%s) for id %s at time %i\n", MemberName, v17, String, v14, v19);
        NetConnection::SendUnreliable(MemberConnection, buf.data, buf.cursize);
        p_status = v26;
        p_playerUID = v25;
      }
      ++v9;
      p_playerUID += 63;
      v25 = p_playerUID;
      p_xuid += 4;
      p_status += 504;
      v26 = p_status;
    }
    while ( v9 < 200 );
  }
  Mem_LargeLocal::~Mem_LargeLocal(&v22);
}

/*
==============
PartyAtomicHost_CheckForMemberDisconnect
==============
*/
__int64 PartyAtomicHost_CheckForMemberDisconnect(PartyJoinInfo *joinInfo, const unsigned int memberIndex, const char *debugString)
{
  __int64 v3; 
  PartyData *atomicParty; 
  XUID *v7; 
  __int64 v9; 

  v3 = memberIndex;
  if ( !joinInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 1601, ASSERT_TYPE_ASSERT, "(joinInfo)", (const char *)&queryFormat, "joinInfo") )
    __debugbreak();
  if ( (unsigned int)v3 >= 0xC8 )
  {
    LODWORD(v9) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 1602, ASSERT_TYPE_ASSERT, "(unsigned)( memberIndex ) < (unsigned)( 200 )", "memberIndex doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v9, 200) )
      __debugbreak();
  }
  if ( !debugString && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 1603, ASSERT_TYPE_ASSERT, "(debugString)", (const char *)&queryFormat, "debugString") )
    __debugbreak();
  atomicParty = joinInfo->atomicParty;
  if ( !atomicParty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 1606, ASSERT_TYPE_ASSERT, "(broadcastParty)", (const char *)&queryFormat, "broadcastParty") )
    __debugbreak();
  if ( !atomicParty->inParty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 1607, ASSERT_TYPE_ASSERT, "(broadcastParty->inParty)", (const char *)&queryFormat, "broadcastParty->inParty") )
    __debugbreak();
  if ( !atomicParty->areWeHost && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 1608, ASSERT_TYPE_ASSERT, "(broadcastParty->areWeHost)", (const char *)&queryFormat, "broadcastParty->areWeHost") )
    __debugbreak();
  v7 = (XUID *)((char *)atomicParty + 504 * v3);
  if ( BYTE2(v7[325].m_id) == 5 )
  {
    if ( !XUID::operator==(v7 + 326, &joinInfo->memberJoinInfo[v3].xuid) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 1622, ASSERT_TYPE_ASSERT, "(partyMember->playerUID == memberJoinInfo->xuid)", "%s\n\tThe party member we're tracking somehow changed its XUID", "partyMember->playerUID == memberJoinInfo->xuid") )
      __debugbreak();
    return 0i64;
  }
  else
  {
    Com_PrintWarning(25, "PartyJoinAtomic - CheckForMemberDisconnect (%s) - Abandoning party member %i since he is no longer present\n", debugString, (unsigned int)v3);
    joinInfo->memberJoinInfo[v3].active = 0;
    PartyAtomic_CancelMemberResponseMessage(&joinInfo->memberJoinInfo[v3]);
    return 1i64;
  }
}

/*
==============
PartyAtomicHost_WaitForMembersToAckOurResponse
==============
*/
__int64 PartyAtomicHost_WaitForMembersToAckOurResponse(int curTime, PartyJoinInfo *joinInfo)
{
  unsigned int *p_responseMessageHandle; 
  int v5; 
  unsigned int i; 
  RMsgSendStatus SendStatusFromHandle; 
  int timeoutTime; 
  __int64 v10; 

  if ( !joinInfo )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 1838, ASSERT_TYPE_ASSERT, "(joinInfo)", (const char *)&queryFormat, "joinInfo") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 2854, ASSERT_TYPE_ASSERT, "(partyJoinInfo)", (const char *)&queryFormat, "partyJoinInfo") )
      __debugbreak();
  }
  if ( joinInfo->state != PARTYJOIN_WAIT_HOST_ACK && joinInfo->state != PARTYJOIN_WAIT_PRIMED_HOST_ACK && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 1839, ASSERT_TYPE_ASSERT, "((PartyAtomic_GetJoinState( joinInfo ) == PARTYJOIN_WAIT_HOST_ACK) || (PartyAtomic_GetJoinState( joinInfo ) == PARTYJOIN_WAIT_PRIMED_HOST_ACK))", (const char *)&queryFormat, "(PartyAtomic_GetJoinState( joinInfo ) == PARTYJOIN_WAIT_HOST_ACK) || (PartyAtomic_GetJoinState( joinInfo ) == PARTYJOIN_WAIT_PRIMED_HOST_ACK)") )
    __debugbreak();
  p_responseMessageHandle = &joinInfo->memberJoinInfo[0].responseMessageHandle;
  v5 = 0;
  for ( i = 0; i < 0xC8; ++i )
  {
    if ( *(p_responseMessageHandle - 6) && !(unsigned int)PartyAtomicHost_CheckForMemberDisconnect(joinInfo, i, "WaitForMembersToAckOurResponse") )
    {
      SendStatusFromHandle = RMsg_GetSendStatusFromHandle(*p_responseMessageHandle);
      if ( SendStatusFromHandle == RMSG_STATUS_IN_PROGRESS )
      {
        timeoutTime = joinInfo->timeoutTime;
        if ( timeoutTime <= 0 || timeoutTime > curTime )
        {
          ++v5;
        }
        else
        {
          Com_PrintWarning(25, "PartyJoinAtomic: Party member %i timed out, potentially leaving behind.\n", i);
          PartyAtomic_CancelMemberResponseMessage((PartyMemberJoinInfo *)(p_responseMessageHandle - 6));
        }
      }
      else
      {
        if ( SendStatusFromHandle == RMSG_STATUS_ERROR )
          Com_PrintWarning(25, "PartyJoinAtomic: Potentially abandoning party member, failed to tell him to finish joining\n");
        RMsg_ReleaseHandle(p_responseMessageHandle);
        if ( RMsg_GetSendStatusFromHandle(*p_responseMessageHandle) )
        {
          LODWORD(v10) = RMsg_GetSendStatusFromHandle(*p_responseMessageHandle);
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 1875, ASSERT_TYPE_ASSERT, "( RMsg_GetSendStatusFromHandle( memberJoinInfo->responseMessageHandle ) ) == ( RMSG_STATUS_INACTIVE )", "%s == %s\n\t%i, %i", "RMsg_GetSendStatusFromHandle( memberJoinInfo->responseMessageHandle )", "RMSG_STATUS_INACTIVE", v10, 0i64) )
            __debugbreak();
        }
      }
    }
    p_responseMessageHandle += 8;
  }
  if ( v5 )
    return 0i64;
  PartyAtomic_AssertNoPendingMemberMessages(joinInfo);
  Com_Printf(25, "PartyJoinAtomic: All members acknowledged our response or timed out\n");
  return 1i64;
}

/*
==============
PartyAtomicHost_WaitForMembersToRespond
==============
*/
__int64 PartyAtomicHost_WaitForMembersToRespond(PartyJoinInfo *joinInfo)
{
  const dvar_t *v2; 
  int v3; 
  PartyJoinState state; 
  unsigned int v5; 
  PartyJoinResponse v6; 
  bool v7; 
  unsigned int v8; 
  PartyMemberJoinInfo *memberJoinInfo; 
  int v10; 
  __int64 v11; 
  int v12; 
  PartyJoinResponse *v13; 
  PartyDisconnectReason v14; 
  PartyJoinState v16; 

  if ( !joinInfo )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 1764, ASSERT_TYPE_ASSERT, "(joinInfo)", (const char *)&queryFormat, "joinInfo") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 2854, ASSERT_TYPE_ASSERT, "(partyJoinInfo)", (const char *)&queryFormat, "partyJoinInfo") )
      __debugbreak();
  }
  if ( joinInfo->state != PARTYJOIN_WAIT_HOST && joinInfo->state != PARTYJOIN_WAIT_PRIMED_HOST && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 1765, ASSERT_TYPE_ASSERT, "((PartyAtomic_GetJoinState( joinInfo ) == PARTYJOIN_WAIT_HOST) || (PartyAtomic_GetJoinState( joinInfo ) == PARTYJOIN_WAIT_PRIMED_HOST))", (const char *)&queryFormat, "(PartyAtomic_GetJoinState( joinInfo ) == PARTYJOIN_WAIT_HOST) || (PartyAtomic_GetJoinState( joinInfo ) == PARTYJOIN_WAIT_PRIMED_HOST)") )
    __debugbreak();
  v2 = DVARINT_party_debugHostMembersFailing;
  v3 = 0;
  state = joinInfo->state;
  v5 = 0;
  v16 = joinInfo->state;
  v6 = JOINRESPONSE_NONE;
  if ( !DVARINT_party_debugHostMembersFailing && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_debugHostMembersFailing") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  v7 = v2->current.integer == 1;
  v8 = 0;
  memberJoinInfo = joinInfo->memberJoinInfo;
  v10 = v7;
  do
  {
    if ( memberJoinInfo->active && !(unsigned int)PartyAtomicHost_CheckForMemberDisconnect(joinInfo, v8, "WaitForMembersToRespond") )
    {
      v11 = 16i64;
      if ( state >= PARTYJOIN_COMMIT )
        v11 = 20i64;
      v12 = *(int *)((char *)&memberJoinInfo->active + v11);
      v13 = (PartyJoinResponse *)((char *)memberJoinInfo + v11);
      if ( v12 )
      {
        if ( v12 == 1 )
        {
          ++v5;
        }
        else
        {
          if ( v12 < 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 1806, ASSERT_TYPE_ASSERT, "(memberJoinInfo->responseState[joinAction] >= JOINRESPONSE_ERROR)", (const char *)&queryFormat, "memberJoinInfo->responseState[joinAction] >= JOINRESPONSE_ERROR") )
            __debugbreak();
          v6 = *v13;
          ++v10;
        }
      }
      else
      {
        ++v3;
      }
      state = v16;
    }
    ++v8;
    ++memberJoinInfo;
  }
  while ( v8 < 0xC8 );
  if ( v10 )
  {
    OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_PARTY_JOIN_t)0x10000000, NULL);
    LOBYTE(v14) = 13;
    joinInfo->errorResponse = v6;
    PartyAtomic_JoinAttemptFailed(joinInfo, (const char *)&stru_143DD5890, v14);
    return 0i64;
  }
  if ( v3 )
    return 0i64;
  Com_Printf(14, "PartyJoinAtomic: WaitForMembersToJoin SUCCESS - Sending response to everybody (%i members)\n", v5);
  PartyAtomicHost_BroadcastActionResponse(joinInfo, JOINRESPONSE_SUCCESS, 1);
  return 1i64;
}

/*
==============
PartyAtomicJoin_GetMainActiveClient
==============
*/
PartyActiveClient PartyAtomicJoin_GetMainActiveClient(const PartyJoinInfo *partyJoinInfo, const int originalControllerNum)
{
  unsigned int localControllerIndex; 
  __int64 v6; 

  if ( !partyJoinInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 373, ASSERT_TYPE_ASSERT, "(partyJoinInfo)", (const char *)&queryFormat, "partyJoinInfo") )
    __debugbreak();
  if ( !PartyAtomic_IsJoiningActive(partyJoinInfo) )
    return (PartyActiveClient)__PAIR64__(originalControllerNum, CL_Mgr_GetClientFromController(originalControllerNum));
  localControllerIndex = partyJoinInfo->splitscreenData.mainClient.localControllerIndex;
  if ( originalControllerNum != localControllerIndex )
  {
    Com_Printf(25, "PartyAtomicJoin GetMainActiveClient - Swapping controller to use the main controller %i instead of %i.\n", localControllerIndex, (unsigned int)originalControllerNum);
    localControllerIndex = partyJoinInfo->splitscreenData.mainClient.localControllerIndex;
  }
  HIDWORD(v6) = localControllerIndex;
  LODWORD(v6) = partyJoinInfo->splitscreenData.mainClient.localClientNum;
  return (PartyActiveClient)v6;
}

/*
==============
PartyAtomicJoin_GetSecondaryActiveClient
==============
*/
__int64 PartyAtomicJoin_GetSecondaryActiveClient(const PartyJoinInfo *partyJoinInfo, PartyActiveClient *outPartyActiveClient)
{
  __int64 v5; 

  if ( !partyJoinInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 396, ASSERT_TYPE_ASSERT, "(partyJoinInfo)", (const char *)&queryFormat, "partyJoinInfo") )
    __debugbreak();
  if ( !outPartyActiveClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 397, ASSERT_TYPE_ASSERT, "(outPartyActiveClient)", (const char *)&queryFormat, "outPartyActiveClient") )
    __debugbreak();
  if ( !partyJoinInfo->splitscreenData.otherClientActive )
    return 0i64;
  if ( partyJoinInfo->splitscreenData.otherClient.localControllerIndex == partyJoinInfo->splitscreenData.mainClient.localControllerIndex )
  {
    LODWORD(v5) = partyJoinInfo->splitscreenData.mainClient.localControllerIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 402, ASSERT_TYPE_ASSERT, "( ( partyJoinInfo->splitscreenData.otherClient.localControllerIndex != partyJoinInfo->splitscreenData.mainClient.localControllerIndex ) )", "( partyJoinInfo->splitscreenData.mainClient.localControllerIndex ) = %i", v5) )
      __debugbreak();
  }
  if ( partyJoinInfo->splitscreenData.otherClient.localClientNum == partyJoinInfo->splitscreenData.mainClient.localClientNum )
  {
    LODWORD(v5) = partyJoinInfo->splitscreenData.mainClient.localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 403, ASSERT_TYPE_ASSERT, "( ( partyJoinInfo->splitscreenData.otherClient.localClientNum != partyJoinInfo->splitscreenData.mainClient.localClientNum ) )", "( partyJoinInfo->splitscreenData.mainClient.localClientNum ) = %i", v5) )
      __debugbreak();
  }
  outPartyActiveClient->localControllerIndex = partyJoinInfo->splitscreenData.otherClient.localControllerIndex;
  outPartyActiveClient->localClientNum = partyJoinInfo->splitscreenData.otherClient.localClientNum;
  return 1i64;
}

/*
==============
PartyAtomicJoin_SetupMemberJoinInfo
==============
*/
void PartyAtomicJoin_SetupMemberJoinInfo(int curTime, PartyJoinInfo *joinInfo)
{
  PartyData *atomicParty; 
  int v4; 
  XUID *p_playerUID; 
  PartyJoinResponse *v6; 
  const char *v7; 
  const char *v8; 

  if ( !joinInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 1554, ASSERT_TYPE_ASSERT, "(joinInfo)", (const char *)&queryFormat, "joinInfo") )
    __debugbreak();
  if ( joinInfo->partyType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 1555, ASSERT_TYPE_ASSERT, "(joinInfo->partyType == GAME_LOBBY_ID)", (const char *)&queryFormat, "joinInfo->partyType == GAME_LOBBY_ID") )
    __debugbreak();
  atomicParty = joinInfo->atomicParty;
  if ( !atomicParty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 1558, ASSERT_TYPE_ASSERT, "(broadcastParty)", (const char *)&queryFormat, "broadcastParty") )
    __debugbreak();
  if ( !atomicParty->inParty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 1559, ASSERT_TYPE_ASSERT, "(broadcastParty->inParty)", (const char *)&queryFormat, "broadcastParty->inParty") )
    __debugbreak();
  if ( !atomicParty->areWeHost && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 1560, ASSERT_TYPE_ASSERT, "(broadcastParty->areWeHost)", (const char *)&queryFormat, "broadcastParty->areWeHost") )
    __debugbreak();
  memset_0(joinInfo->memberJoinInfo, 0, sizeof(joinInfo->memberJoinInfo));
  v4 = 0;
  p_playerUID = &atomicParty->partyMembers[0].playerUID;
  joinInfo->nextBroadcastTime = 0;
  v6 = &joinInfo->memberJoinInfo[0].responseState[1];
  do
  {
    if ( *((_DWORD *)v6 - 5) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 1570, ASSERT_TYPE_ASSERT, "(!memberJoinInfo->active)", "%s\n\tShould not be already waiting for a response", "!memberJoinInfo->active") )
      __debugbreak();
    if ( *((_DWORD *)v6 - 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 1571, ASSERT_TYPE_ASSERT, "(memberJoinInfo->responseState[PARTYACTION_JOIN] == JOINRESPONSE_NONE)", "%s\n\tShould not be already waiting for a response", "memberJoinInfo->responseState[PARTYACTION_JOIN] == JOINRESPONSE_NONE") )
      __debugbreak();
    if ( *v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 1572, ASSERT_TYPE_ASSERT, "(memberJoinInfo->responseState[PARTYACTION_COMMIT] == JOINRESPONSE_NONE)", "%s\n\tShould not be already waiting for a response", "memberJoinInfo->responseState[PARTYACTION_COMMIT] == JOINRESPONSE_NONE") )
      __debugbreak();
    if ( BYTE2(p_playerUID[-1].m_id) == 5 && !Party_IsHost(atomicParty, v4) && !Live_XUIDIsLocalPlayer((const XUID)p_playerUID->m_id) )
    {
      if ( !Party_IsMemberRegistered(atomicParty, v4) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 1585, ASSERT_TYPE_ASSERT, "(Party_IsMemberRegistered( broadcastParty, memberIndex ))", (const char *)&queryFormat, "Party_IsMemberRegistered( broadcastParty, memberIndex )") )
        __debugbreak();
      v7 = PartyAtomic_JoinInfoToString(joinInfo);
      v8 = XUID::ToDevString(p_playerUID);
      Com_Printf(16, "PartyAtomicJoin: Setting up memberJoinInfo for %s (%s) for id %s\n", (const char *)&p_playerUID[-46].m_id + 4, v8, v7);
      *((_DWORD *)v6 - 5) = 1;
      XUID::operator=((XUID *)(v6 - 3), p_playerUID);
    }
    ++v4;
    p_playerUID += 63;
    v6 += 8;
  }
  while ( v4 < 200 );
}

/*
==============
PartyAtomic_AbortJoinAttempt
==============
*/
void PartyAtomic_AbortJoinAttempt(PartyJoinInfo *partyJoinInfo, const PartyDisconnectReason reason)
{
  unsigned __int8 v2; 
  PartyMemberJoinInfo *memberJoinInfo; 
  __int64 v5; 
  unsigned __int8 ActiveGameMode; 

  v2 = reason;
  if ( !partyJoinInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 574, ASSERT_TYPE_ASSERT, "(partyJoinInfo)", (const char *)&queryFormat, "partyJoinInfo") )
    __debugbreak();
  if ( PartyAtomic_IsJoiningActive(partyJoinInfo) )
  {
    if ( partyJoinInfo->state == PARTYJOIN_COMMITTING && (unsigned int)(partyJoinInfo->joinType - 1) <= 1 && partyJoinInfo->partyType == GAME_LOBBY_ID )
      InviteJoinHSM::HandlePartyJoinAttemptAborted(&g_invitationHSM);
    Com_Printf(25, "PartyJoinAtomic: Canceling since we got an abort request\n");
    partyJoinInfo->errorReason[0] = v2;
    Com_PrintWarning(14, "PartyJoinAtomic: Canceling all queued member messages\n");
    memberJoinInfo = partyJoinInfo->memberJoinInfo;
    v5 = 200i64;
    do
    {
      if ( memberJoinInfo->active )
        PartyAtomic_CancelMemberResponseMessage(memberJoinInfo);
      ++memberJoinInfo;
      --v5;
    }
    while ( v5 );
    if ( partyJoinInfo->joinType == PJT_HOSTREQUEST )
    {
      PartyAtomicClient_SendMemberActionResponse(partyJoinInfo, JOINRESPONSE_ERROR_CANCELED);
    }
    else if ( partyJoinInfo->joinType == PJT_MATCHMAKING )
    {
      PartyAtomicHost_BroadcastActionResponse(partyJoinInfo, JOINRESPONSE_ERROR_CANCELED, 0);
    }
    PartyAtomic_DisconnectFromJoiningSession(partyJoinInfo, (const PartyDisconnectReason)v2);
    PartyAtomic_AssertNoPendingMemberMessages(partyJoinInfo);
    ActiveGameMode = Com_GameMode_GetActiveGameMode();
    PartyAtomic_ResetPartyJoinInfo(&g_partyJoinInfo, (GameModeType)ActiveGameMode);
  }
}

/*
==============
PartyAtomic_AbortJoinAttemptForParty
==============
*/
void PartyAtomic_AbortJoinAttemptForParty(PartyJoinInfo *partyJoinInfo, PartyData *party, const PartyDisconnectReason reason, const char *message)
{
  unsigned __int8 v5; 
  PartyData *atomicParty; 
  PartyType partyType; 
  PartyData *PartyData; 

  v5 = reason;
  if ( !partyJoinInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 185, ASSERT_TYPE_ASSERT, "(partyJoinInfo)", (const char *)&queryFormat, "partyJoinInfo") )
    __debugbreak();
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 186, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( PartyAtomic_IsJoiningActive(partyJoinInfo) )
  {
    atomicParty = partyJoinInfo->atomicParty;
    if ( atomicParty )
    {
      if ( atomicParty->partyId == party->partyId )
        goto LABEL_22;
    }
    partyType = partyJoinInfo->partyType;
    if ( partyType == PRIVATE_PARTY_ID )
    {
      PartyData = &g_partyData;
    }
    else
    {
      if ( (partyType & 0xFFFFFFFD) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 126, ASSERT_TYPE_ASSERT, "((partyJoinInfo->partyType == ANY_PARTY_ID) || (partyJoinInfo->partyType == GAME_LOBBY_ID))", (const char *)&queryFormat, "(partyJoinInfo->partyType == ANY_PARTY_ID) || (partyJoinInfo->partyType == GAME_LOBBY_ID)") )
        __debugbreak();
      PartyData = Lobby_GetPartyData();
      if ( !PartyData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 195, ASSERT_TYPE_ASSERT, "(associatedParty)", (const char *)&queryFormat, "associatedParty") )
        __debugbreak();
    }
    if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 196, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
      __debugbreak();
    if ( PartyData->partyId == party->partyId )
    {
LABEL_22:
      partyJoinInfo->errorMessage = message;
      PartyAtomic_AbortJoinAttempt(partyJoinInfo, (const PartyDisconnectReason)v5);
    }
  }
}

/*
==============
PartyAtomic_AcceptInviteMP
==============
*/
void PartyAtomic_AcceptInviteMP(const unsigned int controllerIndex, const XSESSION_INFO *hostInfo, const unsigned __int64 lobbyId, const int fromGameInvite, const int fromOnlineGame)
{
  unsigned int v10; 
  int ControllerFromClient; 
  PartyData *PartyData; 
  int v13; 
  bool v14; 
  const dvar_t *v15; 
  PartyJoinType v16; 
  int integer; 
  const char *v18; 
  char *fmt; 
  PartySplitscreenData *v25; 
  PartySplitscreenData splitscreenData; 

  if ( Live_AreWeAcceptingInvite() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 2706, ASSERT_TYPE_ASSERT, "(!Live_AreWeAcceptingInvite())", (const char *)&queryFormat, "!Live_AreWeAcceptingInvite()") )
    __debugbreak();
  if ( !Live_Invitation_HasAcceptedInvite() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 2707, ASSERT_TYPE_ASSERT, "(Live_Invitation_HasAcceptedInvite())", (const char *)&queryFormat, "Live_Invitation_HasAcceptedInvite()") )
    __debugbreak();
  if ( !Com_FrontEnd_IsInFrontEnd() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 2708, ASSERT_TYPE_ASSERT, "(Com_FrontEnd_IsInFrontEnd())", (const char *)&queryFormat, "Com_FrontEnd_IsInFrontEnd()") )
    __debugbreak();
  if ( g_partyJoinInfo.state )
  {
    LODWORD(v25) = g_partyJoinInfo.state;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 2709, ASSERT_TYPE_ASSERT, "( ( PartyAtomic_GetJoinState( &g_partyJoinInfo ) == PARTYJOIN_INACTIVE ) )", "( PartyAtomic_GetJoinState( &g_partyJoinInfo ) ) = %i", v25) )
      __debugbreak();
  }
  v10 = Sys_Milliseconds();
  Com_Printf(14, "PartyJoin: AcceptInviteMP - Joining <lobby|party> from session info at time %i\n", v10);
  memset(&splitscreenData, 0, sizeof(splitscreenData));
  PartyAtomic_SetupSplitscreenControllersForInvite(controllerIndex, fromOnlineGame, &splitscreenData);
  ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
  Com_Printf(25, "%s\n", "PartyAtomic_Shutdown");
  PartyData = Lobby_GetPartyData();
  Party_StopParty(PartyData);
  Party_StopParty(&g_partyData);
  Session_DeleteSession(&g_serverSession);
  Session_DeleteSession(&g_partySession);
  Session_DeleteSession(&g_partyJoinSession);
  if ( !clientUIActives[0].active && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 2740, ASSERT_TYPE_ASSERT, "(clientUIActive->active)", (const char *)&queryFormat, "clientUIActive->active") )
    __debugbreak();
  clientUIActives[0].invited = fromGameInvite == 1;
  if ( Party_PartiesAcrossGamemodesFeatureEnabled() )
  {
    Com_Printf(25, "%s\n", "PartyAtomic_InviteShutdown");
    Session_DeleteSession(&g_partyJoinSession);
  }
  v13 = PartyAtomic_SetupPotentialHostForJoining(ControllerFromClient, hostInfo, ANY_PARTY_ID, 0, &g_partyJoinInfo, &splitscreenData);
  g_partyJoinInfo.subPartyCount = 1;
  v14 = fromGameInvite == 0;
  g_partyJoinInfo.memberCount = (g_partyJoinInfo.splitscreenData.otherClientActive != 0) + 1;
  v15 = DVARINT_pt_connectAttempts;
  g_partyJoinInfo.subPartyList[0] = (g_partyJoinInfo.splitscreenData.otherClientActive != 0) + 1;
  v16 = !v14 + 1;
  if ( !DVARINT_pt_connectAttempts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "pt_connectAttempts") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v15);
  integer = v15->current.integer;
  if ( g_partyJoinInfo.state && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 145, ASSERT_TYPE_ASSERT, "(PartyAtomic_GetJoinState( partyJoinInfo ) == PARTYJOIN_INACTIVE)", (const char *)&queryFormat, "PartyAtomic_GetJoinState( partyJoinInfo ) == PARTYJOIN_INACTIVE") )
    __debugbreak();
  if ( g_partyJoinInfo.atomicParty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 146, ASSERT_TYPE_ASSERT, "(partyJoinInfo->atomicParty == 0)", (const char *)&queryFormat, "partyJoinInfo->atomicParty == NULL") )
    __debugbreak();
  NET_ResetTelemetry();
  if ( LiveStorage_IsTimeSynced() )
    g_partyJoinInfo.startTimeUtc = LiveStorage_GetUTC();
  else
    g_partyJoinInfo.startTimeUtc = 0;
  g_partyJoinInfo.startTimeMillis = Sys_Milliseconds();
  g_partyJoinInfo.atomicParty = NULL;
  v18 = s_partyJoinStateName[g_partyJoinInfo.state];
  g_partyJoinInfo.joinType = v16;
  g_partyJoinInfo.availableRetryCount = integer;
  LODWORD(fmt) = 0;
  Com_Printf(25, "PartyJoin: Changing from %s to %s, with timeout %i.\n", v18, s_partyJoinStateName[1], fmt);
  g_partyJoinInfo.state = PARTYJOIN_REQUEST;
  g_partyJoinInfo.timeoutTime = 0;
  g_partyJoinInfo.lobbyId = lobbyId;
  if ( !v13 )
  {
    Com_PrintError(14, "PartyJoin: Failed to setup potential host.\n");
    OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, MOVEMENT, NULL);
    if ( g_partyJoinInfo.state == PARTYJOIN_INACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 649, ASSERT_TYPE_ASSERT, "(PartyAtomic_GetJoinState( partyJoinInfo ) != PARTYJOIN_INACTIVE)", (const char *)&queryFormat, "PartyAtomic_GetJoinState( partyJoinInfo ) != PARTYJOIN_INACTIVE") )
      __debugbreak();
    Sys_Milliseconds();
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm1, xmm0, cs:__real@3a83126f
      vcvtss2sd xmm3, xmm1, xmm1
      vmovq   r9, xmm3
    }
    Com_Printf(25, "PartyJoinAtomic: Join attempt failed - Reason: %s - Duration: %.3fs\n", (const char *)&stru_143DD5890, *(double *)&_XMM3);
    if ( g_partyJoinInfo.errorMessage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 653, ASSERT_TYPE_ASSERT, "( ( partyJoinInfo->errorMessage == 0 ) )", "( partyJoinInfo->errorMessage ) = %s", g_partyJoinInfo.errorMessage) )
      __debugbreak();
    g_partyJoinInfo.errorState = g_partyJoinInfo.state;
    g_partyJoinInfo.errorMessage = (const char *)&stru_143DD5890;
    g_partyJoinInfo.errorReason[0] = 42;
    OnlineMatchmakerOmniscient::JoinAttemptFailed(&OnlineMatchmakerOmniscient::ms_instance);
    InviteJoinHSM::HandlePartyJoinFail(&g_invitationHSM);
  }
  InviteJoinHSM::HandlePartyJoinStart(&g_invitationHSM);
}

/*
==============
PartyAtomic_AskToJoinParty_Internal
==============
*/
void PartyAtomic_AskToJoinParty_Internal(const PartyActiveClient *activeClient, PartyJoinInfo *joinInfo)
{
  unsigned __int8 *m_ptr; 
  unsigned __int8 memberCount; 
  unsigned __int8 subPartyCount; 
  int v7; 
  PartyJoinType joinType; 
  const char *String; 
  const char *v10; 
  int ProtocolVersion; 
  int AvailableContentPacks; 
  XUID *Xuid; 
  int VersionNumber; 
  const dvar_t *v15; 
  bool CrossPlayPermissionsToBeSentForPartyJoin; 
  char ClientPlatform; 
  bool IsClientActive; 
  bool IsPaidUser; 
  bool HasOnlineSubscription; 
  char *fmt; 
  __int64 v22; 
  __int64 v23; 
  __int64 v24; 
  __int64 v25; 
  Mem_LargeLocal data; 
  msg_t buf; 
  XUID result; 

  Mem_LargeLocal::Mem_LargeLocal(&data, 0x9AAui64, "min_msg_buf partyMsgBuf");
  m_ptr = (unsigned __int8 *)data.m_ptr;
  if ( !activeClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 1080, ASSERT_TYPE_ASSERT, "(activeClient)", (const char *)&queryFormat, "activeClient") )
    __debugbreak();
  if ( !joinInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 1081, ASSERT_TYPE_ASSERT, "(joinInfo)", (const char *)&queryFormat, "joinInfo") )
    __debugbreak();
  g_partyChatQuitting = 0;
  if ( !joinInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 2854, ASSERT_TYPE_ASSERT, "(partyJoinInfo)", (const char *)&queryFormat, "partyJoinInfo") )
    __debugbreak();
  if ( joinInfo->state != PARTYJOIN_REQUEST && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 1087, ASSERT_TYPE_ASSERT, "(PartyAtomic_GetJoinState( joinInfo ) == PARTYJOIN_REQUEST)", (const char *)&queryFormat, "PartyAtomic_GetJoinState( joinInfo ) == PARTYJOIN_REQUEST") )
    __debugbreak();
  if ( !NetConnection::IsOpened(&joinInfo->connections[activeClient->localClientNum]) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 1088, ASSERT_TYPE_ASSERT, "(joinInfo->connections[activeClient->localClientNum].IsOpened())", (const char *)&queryFormat, "joinInfo->connections[activeClient->localClientNum].IsOpened()") )
    __debugbreak();
  memberCount = joinInfo->memberCount;
  if ( (unsigned __int8)(memberCount - 1) > 0xC7u )
  {
    LODWORD(v22) = memberCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 1091, ASSERT_TYPE_ASSERT, "( 1 ) <= ( joinInfo->memberCount ) && ( joinInfo->memberCount ) <= ( 200 )", "joinInfo->memberCount not in [1, MAX_PARTY_MEMBERS]\n\t%i not in [%i, %i]", v22, 1, 200) )
      __debugbreak();
  }
  subPartyCount = joinInfo->subPartyCount;
  if ( (unsigned __int8)(subPartyCount - 1) > 0xC7u )
  {
    LODWORD(v25) = 200;
    LODWORD(v24) = 1;
    LODWORD(v22) = subPartyCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 1092, ASSERT_TYPE_ASSERT, "( 1 ) <= ( joinInfo->subPartyCount ) && ( joinInfo->subPartyCount ) <= ( 200 )", "joinInfo->subPartyCount not in [1, MAX_PARTY_MEMBERS]\n\t%i not in [%i, %i]", v22, v24, v25) )
      __debugbreak();
  }
  v7 = Sys_Milliseconds();
  joinType = joinInfo->joinType;
  String = NetConnection::GetString(&joinInfo->connections[activeClient->localClientNum]);
  LODWORD(v22) = v7;
  LODWORD(fmt) = joinType;
  Com_Printf(25, "PartyJoin - AskToJoinParty for %i players to addr '%s', joinType %i, time %i\n", joinInfo->memberCount, String, fmt, v22);
  MSG_Init(&buf, m_ptr, 2474);
  v10 = j_va("%ipa_joinrequest", (unsigned int)joinInfo->partyType);
  MSG_WriteString(&buf, v10);
  ProtocolVersion = GetProtocolVersion();
  MSG_WriteLong(&buf, ProtocolVersion);
  AvailableContentPacks = Content_GetAvailableContentPacks();
  MSG_WriteLong(&buf, AvailableContentPacks);
  Xuid = Live_GetXuid(&result, activeClient->localControllerIndex);
  XUID::Serialize(Xuid, &buf);
  if ( joinInfo->joinType >= 0x100u )
  {
    LODWORD(v24) = 256;
    LODWORD(v23) = joinInfo->joinType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 1112, ASSERT_TYPE_ASSERT, "(unsigned)( joinInfo->joinType ) < (unsigned)( 0xff + 1 )", "joinInfo->joinType doesn't index UCHAR_MAX + 1\n\t%i not in [0, %i)", v23, v24) )
      __debugbreak();
  }
  MSG_WriteByte(&buf, joinInfo->joinType);
  VersionNumber = Playlist_GetVersionNumber();
  MSG_WriteLong(&buf, VersionNumber);
  v15 = DVARINT_playlist;
  if ( !DVARINT_playlist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playlist") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v15);
  MSG_WriteLong(&buf, v15->current.integer);
  MSG_WriteByte(&buf, joinInfo->memberCount);
  MSG_WriteByte(&buf, joinInfo->subPartyCount);
  MSG_WriteData(&buf, joinInfo->subPartyList, joinInfo->subPartyCount);
  MSG_WriteInt64(&buf, joinInfo->lobbyId);
  CrossPlayPermissionsToBeSentForPartyJoin = Live_GetCrossPlayPermissionsToBeSentForPartyJoin();
  MSG_WriteBool(&buf, CrossPlayPermissionsToBeSentForPartyJoin);
  ClientPlatform = GetClientPlatform();
  MSG_WriteBits(&buf, ClientPlatform, 3u);
  IsClientActive = CL_Mgr_IsClientActive(LOCAL_CLIENT_1);
  MSG_WriteBool(&buf, IsClientActive);
  IsPaidUser = LiveStorage_IsPaidUser(joinInfo->controllerIndex);
  MSG_WriteBool(&buf, IsPaidUser);
  HasOnlineSubscription = Live_HasOnlineSubscription(joinInfo->controllerIndex);
  MSG_WriteBool(&buf, HasOnlineSubscription);
  NetConnection::SendUnreliable(&joinInfo->connections[activeClient->localClientNum], buf.data, buf.cursize);
  Mem_LargeLocal::~Mem_LargeLocal(&data);
}

/*
==============
PartyAtomic_AssertHasConnectivity
==============
*/
void PartyAtomic_AssertHasConnectivity(PartyJoinInfo *partyJoinInfo)
{
  LocalClientNum_t localClientNum; 

  localClientNum = PartyAtomicJoin_GetMainActiveClient(partyJoinInfo, partyJoinInfo->controllerIndex).localClientNum;
  if ( !NetConnection::IsConnected(&partyJoinInfo->connections[localClientNum]) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 2006, ASSERT_TYPE_ASSERT, "(connection.IsConnected())", (const char *)&queryFormat, "connection.IsConnected()") )
    __debugbreak();
}

/*
==============
PartyAtomic_AssertNoPendingMemberMessages
==============
*/
void PartyAtomic_AssertNoPendingMemberMessages(PartyJoinInfo *joinInfo)
{
  unsigned int *p_responseMessageHandle; 
  __int64 v3; 
  __int64 v4; 

  if ( !joinInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 448, ASSERT_TYPE_ASSERT, "(joinInfo)", (const char *)&queryFormat, "joinInfo") )
    __debugbreak();
  p_responseMessageHandle = &joinInfo->memberJoinInfo[0].responseMessageHandle;
  v3 = 200i64;
  do
  {
    if ( *(p_responseMessageHandle - 6) && RMsg_GetSendStatusFromHandle(*p_responseMessageHandle) )
    {
      LODWORD(v4) = RMsg_GetSendStatusFromHandle(*p_responseMessageHandle);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 456, ASSERT_TYPE_ASSERT, "( RMsg_GetSendStatusFromHandle( memberJoinInfo->responseMessageHandle ) ) == ( RMSG_STATUS_INACTIVE )", "%s == %s\n\t%i, %i", "RMsg_GetSendStatusFromHandle( memberJoinInfo->responseMessageHandle )", "RMSG_STATUS_INACTIVE", v4, 0i64) )
        __debugbreak();
    }
    p_responseMessageHandle += 8;
    --v3;
  }
  while ( v3 );
}

/*
==============
PartyAtomic_CancelMemberResponseMessage
==============
*/
void PartyAtomic_CancelMemberResponseMessage(PartyMemberJoinInfo *memberJoinInfo)
{
  const char *v2; 
  RMsgSendStatus SendStatusFromHandle; 

  if ( !memberJoinInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 464, ASSERT_TYPE_ASSERT, "(memberJoinInfo)", (const char *)&queryFormat, "memberJoinInfo") )
    __debugbreak();
  v2 = XUID::ToDevString(&memberJoinInfo->xuid);
  Com_PrintWarning(14, "PartyJoinAtomic: Canceling message for member %s\n", v2);
  RMsg_MarkHandleMsgReceived(memberJoinInfo->responseMessageHandle);
  RMsg_ReleaseHandle(&memberJoinInfo->responseMessageHandle);
  if ( RMsg_GetSendStatusFromHandle(memberJoinInfo->responseMessageHandle) )
  {
    SendStatusFromHandle = RMsg_GetSendStatusFromHandle(memberJoinInfo->responseMessageHandle);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 469, ASSERT_TYPE_ASSERT, "( RMsg_GetSendStatusFromHandle( memberJoinInfo->responseMessageHandle ) ) == ( RMSG_STATUS_INACTIVE )", "%s == %s\n\t%i, %i", "RMsg_GetSendStatusFromHandle( memberJoinInfo->responseMessageHandle )", "RMSG_STATUS_INACTIVE", SendStatusFromHandle, 0i64) )
      __debugbreak();
  }
}

/*
==============
PartyAtomic_DisconnectFromJoiningSession
==============
*/
void PartyAtomic_DisconnectFromJoiningSession(PartyJoinInfo *partyJoinInfo, const PartyDisconnectReason reason)
{
  unsigned __int8 v2; 
  unsigned int i; 
  NetConnection *v5; 

  v2 = reason;
  if ( !partyJoinInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 547, ASSERT_TYPE_ASSERT, "(partyJoinInfo)", (const char *)&queryFormat, "partyJoinInfo") )
    __debugbreak();
  if ( !PartyAtomic_IsJoiningActive(partyJoinInfo) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 548, ASSERT_TYPE_ASSERT, "(PartyAtomic_IsJoiningActive( partyJoinInfo ))", (const char *)&queryFormat, "PartyAtomic_IsJoiningActive( partyJoinInfo )") )
    __debugbreak();
  PartyAtomic_DlogJoinFailure(partyJoinInfo);
  for ( i = 0; i < 2; ++i )
  {
    v5 = &partyJoinInfo->connections[i];
    if ( NetConnection::IsOpened(v5) )
    {
      PartyClient_SendDisconnectMessage(partyJoinInfo->partyType, v5, (const PartyDisconnectReason)v2, (const PartyJoinResponse)partyJoinInfo->errorResponse);
      NetConnection::Close(v5, NET_CLOSE_DTLS);
    }
  }
  Session_DeleteSession(partyJoinInfo->session);
  Session_ClearSession(partyJoinInfo->session);
  OnlineMatchmakerOmniscient::JoinAttemptFailed(&OnlineMatchmakerOmniscient::ms_instance);
}

/*
==============
PartyAtomic_DlogJoinFailure
==============
*/
bool PartyAtomic_DlogJoinFailure(PartyJoinInfo *partyJoinInfo)
{
  bool IsDedicated; 
  const dvar_t *v5; 
  bool v6; 
  int integer; 
  int controllerIndex; 
  unsigned __int64 UserId; 
  PartyJoinResponse errorResponse; 
  const char *errorMessage; 
  PartyJoinState errorState; 
  PartyJoinType joinType; 
  unsigned __int8 memberCount; 
  unsigned int startTimeUtc; 
  unsigned __int64 lobbyId; 
  bool v21; 
  unsigned int i; 
  NetConnection *v24; 
  LocalClientNum_t LocalClient; 
  bool v26; 
  bool v27; 
  __int64 v29; 
  unsigned __int8 v30; 
  DLogContext context; 
  char dest[36]; 
  char buffer[4096]; 

  IsDedicated = NetConnection::IsDedicated(partyJoinInfo->connections);
  v5 = DVARINT_party_join_failure_dlog_mode;
  v6 = IsDedicated;
  if ( !DVARINT_party_join_failure_dlog_mode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_join_failure_dlog_mode") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  integer = v5->current.integer;
  switch ( integer )
  {
    case 0:
      return 0;
    case 1:
      if ( !v6 )
        return 0;
      break;
    case 2:
      break;
    default:
      LODWORD(v29) = v5->current.integer;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\party_local.h", 291, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unhandled disconnect dlog mode %d", v29) )
        __debugbreak();
      return 0;
  }
  controllerIndex = partyJoinInfo->controllerIndex;
  __asm { vmovaps [rsp+1238h+var_38], xmm6 }
  UserId = DLog_GetUserId(controllerIndex);
  if ( DLog_CreateContext(&context, UserId, buffer, 4096) )
  {
    errorResponse = partyJoinInfo->errorResponse;
    if ( (errorResponse < JOINRESPONSE_NONE || (unsigned int)errorResponse > (JOINRESPONSE_COUNT|JOINRESPONSE_ERROR_BAD_COMMIT_PARTYID|0x80)) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,enum PartyJoinResponse>(enum PartyJoinResponse)", "unsigned", (unsigned __int8)errorResponse, "signed", errorResponse) )
      __debugbreak();
    errorMessage = (char *)&queryFormat.fmt + 3;
    errorState = partyJoinInfo->errorState;
    v30 = partyJoinInfo->errorReason[0];
    if ( partyJoinInfo->errorMessage )
      errorMessage = partyJoinInfo->errorMessage;
    if ( (errorState < PARTYJOIN_INACTIVE || (unsigned int)errorState > (PARTYJOIN_COUNT|PARTYJOIN_WAIT_PRIMED_HOST_ACK|0xE0)) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,enum PartyJoinState>(enum PartyJoinState)", "unsigned", (unsigned __int8)errorState, "signed", errorState) )
      __debugbreak();
    joinType = partyJoinInfo->joinType;
    memberCount = partyJoinInfo->memberCount;
    if ( (joinType < PJT_NONE || (unsigned int)joinType > 0xFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,enum PartyJoinType>(enum PartyJoinType)", "unsigned", (unsigned __int8)joinType, "signed", joinType) )
      __debugbreak();
    Sys_Milliseconds();
    startTimeUtc = partyJoinInfo->startTimeUtc;
    lobbyId = partyJoinInfo->lobbyId;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm6, xmm0, cs:__real@3a83126f
    }
    if ( DLog_IsActive() )
    {
      v27 = DLog_BeginEvent(&context, "dlog_event_client_join_failure");
      context.autoEndEvent = 1;
      if ( v27 && DLog_UInt64(&context, "lobby_id", lobbyId) && DLog_UInt32(&context, "start_time", startTimeUtc) )
      {
        __asm { vmovaps xmm2, xmm6; value }
        if ( DLog_Float32(&context, "duration", *(float *)&_XMM2) && DLog_UInt8(&context, "join_type", joinType) && DLog_UInt8(&context, "member_count", memberCount) && DLog_UInt8(&context, "error_state", errorState) && DLog_String(&context, "error_message", errorMessage, 0) && DLog_UInt8(&context, "error_reason", v30) && DLog_UInt8(&context, "error_response", errorResponse) )
        {
          v21 = 1;
          goto LABEL_29;
        }
      }
    }
    else
    {
      context.error = DLOG_ERROR_NOT_ACTIVE;
    }
  }
  v21 = 0;
LABEL_29:
  __asm { vmovaps xmm6, [rsp+1238h+var_38] }
  for ( i = 0; i < 2; ++i )
  {
    v24 = &partyJoinInfo->connections[i];
    if ( NetConnection::IsOpened(v24) )
    {
      LocalClient = NetConnection::GetLocalClient(v24);
      Com_sprintf<36>((char (*)[36])dest, "client_%d", (unsigned int)LocalClient);
      v21 = v21 && (v26 = NetConnection::IsDedicated(v24), NetConnection::GetTelemetry(v24, &context, dest, v26));
    }
  }
  return v21 && NET_DlogTelemetry(&context, "net") && DLog_RecordContext(&context);
}

/*
==============
PartyAtomic_FillSubPartyInfoForLocalClients
==============
*/
void PartyAtomic_FillSubPartyInfoForLocalClients(PartyJoinInfo *potentialHostInfo)
{
  bool v2; 
  unsigned __int8 v3; 

  if ( !potentialHostInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 237, ASSERT_TYPE_ASSERT, "(potentialHostInfo)", (const char *)&queryFormat, "potentialHostInfo") )
    __debugbreak();
  v2 = potentialHostInfo->splitscreenData.otherClientActive == 0;
  potentialHostInfo->subPartyCount = 1;
  v3 = !v2 + 1;
  potentialHostInfo->memberCount = v3;
  potentialHostInfo->subPartyList[0] = v3;
}

/*
==============
PartyAtomic_FillSubPartyInfoForParty
==============
*/
void PartyAtomic_FillSubPartyInfoForParty(PartyJoinInfo *potentialHostInfo, const PartyData *joiningParty)
{
  unsigned int NumberOfNonBotSubParties; 
  unsigned int v5; 
  int v6; 
  unsigned int v7; 
  unsigned __int8 *subPartyList; 
  unsigned int active; 
  unsigned __int8 v10; 
  unsigned int v11; 
  int v12; 
  unsigned int v13; 
  int v14; 
  __int64 v15; 
  SubpartyInfo *v16; 
  __int64 v17; 
  const char *v18; 
  const char *MemberName; 
  unsigned int v20; 
  __int64 v21; 
  __int64 v22; 
  int v23; 
  unsigned int v24; 

  if ( !potentialHostInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 274, ASSERT_TYPE_ASSERT, "(potentialHostInfo)", (const char *)&queryFormat, "potentialHostInfo") )
    __debugbreak();
  if ( !joiningParty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 275, ASSERT_TYPE_ASSERT, "(joiningParty)", (const char *)&queryFormat, "joiningParty") )
    __debugbreak();
  if ( !joiningParty->areWeHost && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 276, ASSERT_TYPE_ASSERT, "(joiningParty->areWeHost)", (const char *)&queryFormat, "joiningParty->areWeHost") )
    __debugbreak();
  v24 = Party_CountMembersEvenIfInactive(joiningParty, PARTY_MEMBER_TYPE_PLAYER_ONLY);
  NumberOfNonBotSubParties = PartyAtomic_GetNumberOfNonBotSubParties(joiningParty);
  v5 = NumberOfNonBotSubParties;
  if ( NumberOfNonBotSubParties >= 0xC8 )
  {
    LODWORD(v21) = NumberOfNonBotSubParties;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 284, ASSERT_TYPE_ASSERT, "( ( subpartyCount < 200 ) )", "( subpartyCount ) = %i", v21) )
      __debugbreak();
  }
  if ( v5 )
  {
    v6 = 0;
    v7 = 0;
    subPartyList = potentialHostInfo->subPartyList;
    do
    {
      active = Party_CountActivePlayersInSubparty(joiningParty, v7);
      v6 += active;
      v10 = active;
      if ( active > 0xC8 )
      {
        LODWORD(v21) = active;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 301, ASSERT_TYPE_ASSERT, "( ( subPartyActiveCount <= 200 ) )", "( subPartyActiveCount ) = %i", v21) )
          __debugbreak();
      }
      *subPartyList = v10;
      ++v7;
      ++subPartyList;
    }
    while ( v7 < v5 );
    v11 = v24;
    if ( v24 > 0xC8 )
    {
      LODWORD(v21) = v24;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 305, ASSERT_TYPE_ASSERT, "( ( memberCount <= 200 ) )", "( memberCount ) = %i", v21) )
        __debugbreak();
    }
    if ( v5 > 0xC8 )
    {
      LODWORD(v21) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 306, ASSERT_TYPE_ASSERT, "( ( subpartyCount <= 200 ) )", "( subpartyCount ) = %i", v21) )
        __debugbreak();
    }
    potentialHostInfo->memberCount = v24;
    potentialHostInfo->subPartyCount = v5;
    if ( v6 != v24 )
    {
      v12 = 0;
      v13 = 0;
      v23 = 0;
      if ( joiningParty->subpartyCount )
      {
        do
        {
          v14 = 0;
          v15 = v13;
          if ( joiningParty->subparties[v15].count > 0 )
          {
            v16 = &joiningParty->subparties[v15];
            do
            {
              v17 = v16->members[0];
              if ( (unsigned int)v17 >= 0xC8 )
              {
                LODWORD(v22) = 200;
                LODWORD(v21) = v16->members[0];
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 325, ASSERT_TYPE_ASSERT, "(unsigned)( memberIndex ) < (unsigned)( 200 )", "memberIndex doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v21, v22) )
                  __debugbreak();
              }
              if ( joiningParty->partyMembers[v17].status >= 5u )
              {
                v18 = XUID::ToDevString(&joiningParty->partyMembers[v17].playerUID);
                MemberName = Party_GetMemberName(joiningParty, v17);
                Com_PrintError(16, " subparty %i: player '%s' (%s)\n", v13, MemberName, v18);
              }
              ++v14;
              v16 = (SubpartyInfo *)((char *)v16 + 4);
            }
            while ( v14 < joiningParty->subparties[v15].count );
            v12 = v23;
          }
          v20 = Party_CountActivePlayersInSubparty(joiningParty, v13);
          v12 += v20;
          v23 = v12;
          Com_PrintError(16, "%i players in subparty %i\n", v20, v13++);
        }
        while ( v13 < joiningParty->subpartyCount );
        v11 = v24;
      }
      if ( v12 != v11 )
      {
        LODWORD(v22) = v12;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 334, ASSERT_TYPE_ASSERT, "(subpartyPlayerCount == memberCount)", "%s\n\tThere are %i players in subparties, but %i total players", "subpartyPlayerCount == memberCount", v22, v11) )
          __debugbreak();
      }
    }
  }
  else
  {
    if ( v24 )
    {
      LODWORD(v21) = v24;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 289, ASSERT_TYPE_ASSERT, "( ( memberCount == 0 ) )", "( memberCount ) = %i", v21) )
        __debugbreak();
    }
    PartyAtomic_FillSubPartyInfoForLocalClients(potentialHostInfo);
  }
}

/*
==============
PartyAtomic_GetDesiredDialog
==============
*/
_BOOL8 PartyAtomic_GetDesiredDialog()
{
  return g_partyJoinInfo.state && (unsigned int)(g_partyJoinInfo.joinType - 1) <= 1;
}

/*
==============
PartyAtomic_GetJoinState
==============
*/
__int64 PartyAtomic_GetJoinState(const PartyJoinInfo *partyJoinInfo)
{
  if ( partyJoinInfo )
    return (unsigned int)partyJoinInfo->state;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 2854, ASSERT_TYPE_ASSERT, "(partyJoinInfo)", (const char *)&queryFormat, "partyJoinInfo") )
    __debugbreak();
  return MEMORY[0];
}

/*
==============
PartyAtomic_GetNumberOfNonBotSubParties
==============
*/
__int64 PartyAtomic_GetNumberOfNonBotSubParties(const PartyData *party)
{
  unsigned int subpartyCount; 
  PartyData partya; 

  PartyData::PartyData(&partya);
  memcpy_0(&partya, party, sizeof(partya));
  ntl::fixed_hash_map<unsigned __int64,int,202,389,ntl::hash<unsigned __int64>,ntl::equal_to<unsigned __int64>>::fixed_hash_map<unsigned __int64,int,202,389,ntl::hash<unsigned __int64>,ntl::equal_to<unsigned __int64>>(&partya.memberMap, &party->memberMap);
  PartyHost_UpdateSubparties(&partya, NULL, NULL, NULL, 0);
  subpartyCount = partya.subpartyCount;
  if ( partya.mpsdSessionData.pendingMultiplayerSession )
    partya.mpsdSessionData.pendingMultiplayerSession->__abi_Release(partya.mpsdSessionData.pendingMultiplayerSession);
  if ( partya.mpsdSessionData.multiplayerSession )
    partya.mpsdSessionData.multiplayerSession->__abi_Release(partya.mpsdSessionData.multiplayerSession);
  ntl::fixed_hash_map<unsigned __int64,int,202,389,ntl::hash<unsigned __int64>,ntl::equal_to<unsigned __int64>>::~fixed_hash_map<unsigned __int64,int,202,389,ntl::hash<unsigned __int64>,ntl::equal_to<unsigned __int64>>(&partya.memberMap);
  `eh vector destructor iterator'(partya.partyMembers, 0x1F8ui64, 0xC8ui64, (void (__fastcall *)(void *))PartyMember::~PartyMember);
  return subpartyCount;
}

/*
==============
PartyAtomic_HandleComError
==============
*/
void PartyAtomic_HandleComError(__int64 a1, PartyDisconnectReason a2)
{
  LOBYTE(a2) = 27;
  PartyAtomic_AbortJoinAttempt(&g_partyJoinInfo, a2);
}

/*
==============
PartyAtomic_HandleFailedJoinAttempt
==============
*/
void PartyAtomic_HandleFailedJoinAttempt(PartyJoinInfo *partyJoinInfo)
{
  unsigned int v2; 
  const char *String; 
  PartyJoinResponse errorResponse; 
  const char *v5; 
  char *fmt; 

  if ( !partyJoinInfo )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 972, ASSERT_TYPE_ASSERT, "(partyJoinInfo)", (const char *)&queryFormat, "partyJoinInfo") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 2854, ASSERT_TYPE_ASSERT, "(partyJoinInfo)", (const char *)&queryFormat, "partyJoinInfo") )
      __debugbreak();
  }
  if ( partyJoinInfo->state != PARTYJOIN_FAILED && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 973, ASSERT_TYPE_ASSERT, "(PartyAtomic_GetJoinState( partyJoinInfo ) == PARTYJOIN_FAILED)", (const char *)&queryFormat, "PartyAtomic_GetJoinState( partyJoinInfo ) == PARTYJOIN_FAILED") )
    __debugbreak();
  if ( !partyJoinInfo->errorMessage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 974, ASSERT_TYPE_ASSERT, "(partyJoinInfo->errorMessage)", (const char *)&queryFormat, "partyJoinInfo->errorMessage") )
    __debugbreak();
  v2 = Sys_Milliseconds();
  String = NetConnection::GetString(partyJoinInfo->connections);
  Com_Printf(25, "PartyJoinAtomic: HandleFailedJoinAttempt - Failed joining %s - at time %i\n", String, v2);
  PartyAtomic_DisconnectFromJoiningSession(partyJoinInfo, (const PartyDisconnectReason)(unsigned __int8)partyJoinInfo->errorReason[0]);
  LODWORD(fmt) = 0;
  Com_Printf(25, "PartyJoin: Changing from %s to %s, with timeout %i.\n", s_partyJoinStateName[partyJoinInfo->state], s_partyJoinStateName[0], fmt);
  partyJoinInfo->state = PARTYJOIN_INACTIVE;
  partyJoinInfo->timeoutTime = 0;
  if ( InviteJoinHSM::IsHSMHandlingInvitation(&g_invitationHSM) )
    InviteJoinHSM::HandlePartyJoinFail(&g_invitationHSM);
  switch ( partyJoinInfo->joinType )
  {
    case PJT_PRESENCE:
    case PJT_INVITE:
      PartyAtomic_ReturnToPartyScreen(partyJoinInfo, partyJoinInfo->errorMessage);
      break;
    case PJT_HOSTPRESENCE:
      errorResponse = partyJoinInfo->errorResponse;
      if ( errorResponse == JOINRESPONSE_ERROR_F2P_USERS_NOT_PERMITTED )
      {
        Com_SetErrorMessage("@ONLINE/F2P_USERS_NOT_PERMITTED");
      }
      else
      {
        v5 = "@PLATFORM/SUBSCRIPTIONLESS_USERS_NOT_PERMITTED";
        if ( errorResponse != JOINRESPONSE_ERROR_SUBSCRIPTIONLESS_USERS_NOT_PERMITTED )
          v5 = "@MPUI/PARTY_LOST_HOST";
        Com_SetErrorMessage(v5);
      }
      goto LABEL_19;
    case PJT_HOSTREQUEST:
      return;
    case PJT_MATCHMAKING:
      OnlineMatchmakerOmniscient::JoinAttemptFailed(&OnlineMatchmakerOmniscient::ms_instance);
      break;
    case PJT_HOSTREQUEST_PRIVATE_PARTY:
      Com_SetErrorMessage("@MPUI/PARTY_LOST_HOST");
LABEL_19:
      PartyUI_RecoverFromError();
      break;
    default:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 1060, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled party join type") )
        __debugbreak();
      break;
  }
}

/*
==============
PartyAtomic_HasConnectivity
==============
*/
_BOOL8 PartyAtomic_HasConnectivity(PartyJoinInfo *partyJoinInfo)
{
  NetConnection *v2; 
  const char *String; 
  PartyDisconnectReason v4; 
  char *fmt; 
  char *fmta; 
  __int64 v8; 
  NetConnection::Type Type; 
  char dest[256]; 

  v2 = &partyJoinInfo->connections[PartyAtomicJoin_GetMainActiveClient(partyJoinInfo, partyJoinInfo->controllerIndex).localClientNum];
  if ( !NetConnection::IsOpened(v2) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 1966, ASSERT_TYPE_ASSERT, "(connection.IsOpened())", (const char *)&queryFormat, "connection.IsOpened()") )
    __debugbreak();
  if ( NetConnection::IsActive(v2) )
  {
    return (Live_IsInSystemlinkLobby() || NET_IsRelayStarted()) && NetConnection::IsConnected(v2);
  }
  else
  {
    String = NetConnection::GetString(v2);
    Com_PrintError(25, "PartyAtomic - CheckForConnectivity - Unable to connect to %s, aborting.\n", String);
    Type = NetConnection::GetType(v2);
    LODWORD(v8) = NetConnection::GetState(v2);
    LODWORD(fmt) = partyJoinInfo->joinType;
    Com_sprintf(dest, 0x100ui64, "%d,%d,%d,%d", (unsigned int)partyJoinInfo->partyType, fmt, v8, Type);
    LODWORD(fmta) = InviteJoinHSM::IsHSMHandlingInvitation(&g_invitationHSM);
    Com_sprintf(dest, 0x100ui64, "%s,%d", dest, fmta);
    OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_PARTY_JOIN_t)0x40000000, dest);
    LOBYTE(v4) = 42;
    PartyAtomic_JoinAttemptFailed(partyJoinInfo, "EXE/HOSTUNREACH", v4);
    return 0i64;
  }
}

/*
==============
PartyAtomic_HasErrorOccured
==============
*/
_BOOL8 PartyAtomic_HasErrorOccured(PartyJoinInfo *partyJoinInfo)
{
  if ( !partyJoinInfo )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 664, ASSERT_TYPE_ASSERT, "(partyJoinInfo)", (const char *)&queryFormat, "partyJoinInfo") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 2854, ASSERT_TYPE_ASSERT, "(partyJoinInfo)", (const char *)&queryFormat, "partyJoinInfo") )
      __debugbreak();
  }
  if ( partyJoinInfo->state == PARTYJOIN_INACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 665, ASSERT_TYPE_ASSERT, "(PartyAtomic_GetJoinState( partyJoinInfo ) != PARTYJOIN_INACTIVE)", (const char *)&queryFormat, "PartyAtomic_GetJoinState( partyJoinInfo ) != PARTYJOIN_INACTIVE") )
    __debugbreak();
  return partyJoinInfo->errorMessage != NULL;
}

/*
==============
PartyAtomic_InviteShutdown
==============
*/
void PartyAtomic_InviteShutdown(void)
{
  Com_Printf(25, "%s\n", "PartyAtomic_InviteShutdown");
  Session_DeleteSession(&g_partyJoinSession);
}

/*
==============
PartyAtomic_IsJoiningActive
==============
*/
_BOOL8 PartyAtomic_IsJoiningActive(const PartyJoinInfo *partyJoinInfo)
{
  if ( !partyJoinInfo )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 176, ASSERT_TYPE_ASSERT, "(partyJoinInfo)", (const char *)&queryFormat, "partyJoinInfo") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 2854, ASSERT_TYPE_ASSERT, "(partyJoinInfo)", (const char *)&queryFormat, "partyJoinInfo") )
      __debugbreak();
  }
  return partyJoinInfo->state != PARTYJOIN_INACTIVE;
}

/*
==============
PartyAtomic_IsJoiningActiveForSpecificParty
==============
*/
int PartyAtomic_IsJoiningActiveForSpecificParty(const PartyJoinInfo *partyJoinInfo, const PartyData *party)
{
  int result; 
  PartyData *atomicParty; 
  PartyType partyType; 
  PartyData *PartyData; 

  if ( !partyJoinInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 185, ASSERT_TYPE_ASSERT, "(partyJoinInfo)", (const char *)&queryFormat, "partyJoinInfo") )
    __debugbreak();
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 186, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  result = PartyAtomic_IsJoiningActive(partyJoinInfo);
  if ( result )
  {
    atomicParty = partyJoinInfo->atomicParty;
    if ( atomicParty && atomicParty->partyId == party->partyId )
    {
      return 1;
    }
    else
    {
      partyType = partyJoinInfo->partyType;
      if ( partyType == PRIVATE_PARTY_ID )
      {
        PartyData = &g_partyData;
      }
      else
      {
        if ( (partyType & 0xFFFFFFFD) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 126, ASSERT_TYPE_ASSERT, "((partyJoinInfo->partyType == ANY_PARTY_ID) || (partyJoinInfo->partyType == GAME_LOBBY_ID))", (const char *)&queryFormat, "(partyJoinInfo->partyType == ANY_PARTY_ID) || (partyJoinInfo->partyType == GAME_LOBBY_ID)") )
          __debugbreak();
        PartyData = Lobby_GetPartyData();
        if ( !PartyData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 195, ASSERT_TYPE_ASSERT, "(associatedParty)", (const char *)&queryFormat, "associatedParty") )
          __debugbreak();
      }
      if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 196, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
        __debugbreak();
      return PartyData->partyId == party->partyId;
    }
  }
  return result;
}

/*
==============
PartyAtomic_IsJoiningActiveForSpecificSession
==============
*/
int PartyAtomic_IsJoiningActiveForSpecificSession(const PartyJoinInfo *partyJoinInfo, const XSESSION_INFO *session)
{
  int result; 

  if ( !partyJoinInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 203, ASSERT_TYPE_ASSERT, "(partyJoinInfo)", (const char *)&queryFormat, "partyJoinInfo") )
    __debugbreak();
  if ( !session && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 204, ASSERT_TYPE_ASSERT, "(session)", (const char *)&queryFormat, "session") )
    __debugbreak();
  result = PartyAtomic_IsJoiningActive(partyJoinInfo);
  if ( result )
    return XSESSION_INFO::operator==(&partyJoinInfo->session->dyn.sessionInfo, session);
  return result;
}

/*
==============
PartyAtomic_IsJoiningOnHostequest
==============
*/
int PartyAtomic_IsJoiningOnHostequest(const PartyJoinInfo *partyJoinInfo)
{
  int result; 

  if ( !partyJoinInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 226, ASSERT_TYPE_ASSERT, "(partyJoinInfo)", (const char *)&queryFormat, "partyJoinInfo") )
    __debugbreak();
  result = PartyAtomic_IsJoiningActive(partyJoinInfo);
  if ( result )
    return (unsigned int)(partyJoinInfo->joinType - 3) <= 1;
  return result;
}

/*
==============
PartyAtomic_IsJoiningOnPresence
==============
*/
int PartyAtomic_IsJoiningOnPresence(const PartyJoinInfo *partyJoinInfo)
{
  int result; 

  if ( !partyJoinInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 215, ASSERT_TYPE_ASSERT, "(partyJoinInfo)", (const char *)&queryFormat, "partyJoinInfo") )
    __debugbreak();
  result = PartyAtomic_IsJoiningActive(partyJoinInfo);
  if ( result )
    return (unsigned int)(partyJoinInfo->joinType - 1) <= 1;
  return result;
}

/*
==============
PartyAtomic_JoinAttemptFailed
==============
*/
void PartyAtomic_JoinAttemptFailed(PartyJoinInfo *partyJoinInfo, const char *errorMsg, PartyDisconnectReason errorReason)
{
  char v4; 

  v4 = errorReason;
  if ( !errorMsg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 647, ASSERT_TYPE_ASSERT, "(errorMsg)", (const char *)&queryFormat, "errorMsg") )
    __debugbreak();
  if ( !partyJoinInfo )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 648, ASSERT_TYPE_ASSERT, "(partyJoinInfo)", (const char *)&queryFormat, "partyJoinInfo") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 2854, ASSERT_TYPE_ASSERT, "(partyJoinInfo)", (const char *)&queryFormat, "partyJoinInfo") )
      __debugbreak();
  }
  if ( partyJoinInfo->state == PARTYJOIN_INACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 649, ASSERT_TYPE_ASSERT, "(PartyAtomic_GetJoinState( partyJoinInfo ) != PARTYJOIN_INACTIVE)", (const char *)&queryFormat, "PartyAtomic_GetJoinState( partyJoinInfo ) != PARTYJOIN_INACTIVE") )
    __debugbreak();
  Sys_Milliseconds();
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm1, xmm0, cs:__real@3a83126f
    vcvtss2sd xmm3, xmm1, xmm1
    vmovq   r9, xmm3
  }
  Com_Printf(25, "PartyJoinAtomic: Join attempt failed - Reason: %s - Duration: %.3fs\n", errorMsg, *(double *)&_XMM3);
  if ( partyJoinInfo->errorMessage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 653, ASSERT_TYPE_ASSERT, "( ( partyJoinInfo->errorMessage == 0 ) )", "( partyJoinInfo->errorMessage ) = %s", partyJoinInfo->errorMessage) )
    __debugbreak();
  partyJoinInfo->errorState = partyJoinInfo->state;
  partyJoinInfo->errorMessage = errorMsg;
  partyJoinInfo->errorReason[0] = v4;
  OnlineMatchmakerOmniscient::JoinAttemptFailed(&OnlineMatchmakerOmniscient::ms_instance);
}

/*
==============
PartyAtomic_JoinInfoToString
==============
*/
char *PartyAtomic_JoinInfoToString(PartyJoinInfo *joinInfo)
{
  bdSecurityID *SecurityId; 

  if ( !joinInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 1217, ASSERT_TYPE_ASSERT, "(joinInfo)", (const char *)&queryFormat, "joinInfo") )
    __debugbreak();
  SecurityId = XSESSION_INFO::GetSecurityId(&joinInfo->session->dyn.sessionInfo);
  Com_sprintf(staticReturnBuffer, 0x40ui64, "(%i %zx %s)", (unsigned int)joinInfo->partyType, *SecurityId, joinInfo->challenge.str);
  return staticReturnBuffer;
}

/*
==============
PartyAtomic_MovePotentialStateToActiveState
==============
*/
void PartyAtomic_MovePotentialStateToActiveState(PartyJoinInfo *partyJoinInfo)
{
  PartyJoinType joinType; 
  PartyType partyType; 
  PartyData *PartyData; 
  PartyStateData *p_partyStateData; 
  unsigned int v7; 
  int v8; 
  unsigned __int8 **p_data; 
  __int64 v10; 
  PartyActiveClient v13; 
  __int64 state; 
  const dvar_t *v15; 
  unsigned int lobbyFlags; 
  const dvar_t *v17; 
  char *fmt; 
  __int64 v19; 
  __int64 v20; 
  PartyActiveClient mainActiveClient; 

  _RBX = partyJoinInfo;
  if ( partyJoinInfo->partyType )
  {
    joinType = partyJoinInfo->joinType;
    if ( (((joinType - 1) & 0xFFFFFFFA) != 0 || joinType == PJT_MATCHMAKING) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 751, ASSERT_TYPE_ASSERT, "( ( (partyJoinInfo->partyType == GAME_LOBBY_ID) || (partyJoinInfo->joinType == PJT_INVITE) || (partyJoinInfo->joinType == PJT_PRESENCE) || (partyJoinInfo->joinType == PJT_HOSTREQUEST_PRIVATE_PARTY) ) )", "( partyJoinInfo->joinType ) = %i", joinType) )
      __debugbreak();
  }
  partyType = _RBX->partyType;
  if ( partyType == PRIVATE_PARTY_ID )
  {
    _RDI = &g_partyData;
    PartyData = Lobby_GetPartyData();
  }
  else
  {
    if ( partyType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 760, ASSERT_TYPE_ASSERT, "(partyJoinInfo->partyType == GAME_LOBBY_ID)", (const char *)&queryFormat, "partyJoinInfo->partyType == GAME_LOBBY_ID") )
      __debugbreak();
    PartyData = &g_partyData;
    _RDI = Lobby_GetPartyData();
    Voice_DisableLocalMics(&g_partyData);
  }
  p_partyStateData = &_RDI->partyStateData;
  if ( _RBX == (PartyJoinInfo *)-6800i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 680, ASSERT_TYPE_ASSERT, "(sourcePartyStateData)", (const char *)&queryFormat, "sourcePartyStateData") )
    __debugbreak();
  if ( _RDI == (PartyData *)-314600i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 681, ASSERT_TYPE_ASSERT, "(destPartyStateData)", (const char *)&queryFormat, "destPartyStateData") )
    __debugbreak();
  memcpy_0(&_RDI->partyStateData, &_RBX->partyStateData, sizeof(_RDI->partyStateData));
  v7 = 0;
  if ( p_partyStateData->packetCount > 0x1Fu )
  {
    LODWORD(v19) = p_partyStateData->packetCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 686, ASSERT_TYPE_ASSERT, "( 0 ) <= ( destPartyStateData->packetCount ) && ( destPartyStateData->packetCount ) <= ( ( 31 ) )", "destPartyStateData->packetCount not in [0, MAX_PARTYSTATE_PACKETS]\n\t%i not in [%i, %i]", v19, 0i64, 31) )
      __debugbreak();
  }
  v8 = 0;
  if ( p_partyStateData->packetCount > 0 )
  {
    p_data = &_RDI->partyStateData.partMsgs[0].data;
    do
    {
      p_data += 7;
      v10 = v8++;
      *(p_data - 7) = p_partyStateData->partMsgBufs[v10];
    }
    while ( v8 < p_partyStateData->packetCount );
  }
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 694, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !_RBX->session && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 697, ASSERT_TYPE_ASSERT, "(partyJoinInfo->session)", (const char *)&queryFormat, "partyJoinInfo->session") )
    __debugbreak();
  if ( !Session_IsValid(_RBX->session) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 698, ASSERT_TYPE_ASSERT, "(Session_IsValid( partyJoinInfo->session ))", (const char *)&queryFormat, "Session_IsValid( partyJoinInfo->session )") )
    __debugbreak();
  Session_DeleteSession(_RDI->session);
  Session_MoveSession(_RBX->session, _RDI->session);
  Session_ClearSession(_RBX->session);
  _RDI->m_lobbyId = _RBX->lobbyId;
  PartyHostDetails::Init(&_RDI->currentHost, _RDI, _RBX->connections);
  if ( _RDI->inParty )
  {
    if ( _RDI->splitscreenData.otherClientActive != _RBX->splitscreenData.otherClientActive )
    {
      LODWORD(v20) = _RDI->splitscreenData.otherClientActive;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 732, ASSERT_TYPE_ASSERT, "( party->splitscreenData.otherClientActive ) == ( partyJoinInfo->splitscreenData.otherClientActive )", "%s == %s\n\t%i, %i", "party->splitscreenData.otherClientActive", "partyJoinInfo->splitscreenData.otherClientActive", v20, _RBX->splitscreenData.otherClientActive) )
        __debugbreak();
    }
    if ( _RDI->splitscreenData.otherClientActive && (*(_QWORD *)&_RDI->splitscreenData.mainClient != *(_QWORD *)&_RBX->splitscreenData.mainClient || *(_QWORD *)&_RDI->splitscreenData.otherClient != *(_QWORD *)&_RBX->splitscreenData.otherClient || *(_QWORD *)&_RDI->splitscreenData.otherClientActive != *(_QWORD *)&_RBX->splitscreenData.otherClientActive) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 734, ASSERT_TYPE_ASSERT, "(I_memcmp( &party->splitscreenData, &partyJoinInfo->splitscreenData, sizeof( partyJoinInfo->splitscreenData ) ) == 0)", (const char *)&queryFormat, "I_memcmp( &party->splitscreenData, &partyJoinInfo->splitscreenData, sizeof( partyJoinInfo->splitscreenData ) ) == 0") )
      __debugbreak();
  }
  __asm
  {
    vmovups xmm0, xmmword ptr [rbx+1A5Ch]
    vmovups xmmword ptr [rdi+4CC38h], xmm0
    vmovsd  xmm1, qword ptr [rbx+1A6Ch]
    vmovsd  qword ptr [rdi+4CC48h], xmm1
  }
  v13 = PartyAtomicJoin_GetMainActiveClient(_RBX, _RBX->controllerIndex);
  state = _RBX->state;
  mainActiveClient = v13;
  LODWORD(fmt) = 0;
  Com_Printf(25, "PartyJoin: Changing from %s to %s, with timeout %i.\n", s_partyJoinStateName[state], s_partyJoinStateName[0], fmt);
  _RBX->state = PARTYJOIN_INACTIVE;
  _RBX->timeoutTime = 0;
  PartyAtomicClient_CommitNewPartyState(_RDI, &mainActiveClient);
  do
    NetConnection::Close(&_RBX->connections[v7++], NET_CLOSE_SOFT);
  while ( v7 < 2 );
  if ( !_RDI->inParty )
  {
    Com_Printf(25, "PartyJoinAtomic: There was an issue committing to the new party state, shutting down.\n");
LABEL_47:
    Com_SetErrorMessage((const char *)&stru_143DD5890);
    PartyUI_RecoverFromError();
    return;
  }
  v15 = DVARBOOL_online_parties_in_main_menu_feature_enabled;
  if ( !DVARBOOL_online_parties_in_main_menu_feature_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_parties_in_main_menu_feature_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v15);
  if ( !v15->current.enabled && (unsigned __int8)Com_GameMode_GetActiveGameMode() != _RBX->partyCodPlayMode[0] )
  {
    Com_Printf(25, "PartyJoinAtomic: Changing game modes at this point is not supported, shutting down.\n");
    goto LABEL_47;
  }
  lobbyFlags = _RDI->lobbyFlags;
  if ( _RBX->joinType != PJT_HOSTREQUEST_PRIVATE_PARTY )
  {
    Party_Sleep(PartyData);
    Party_Awake(_RDI, mainActiveClient.localControllerIndex, 1);
  }
  _RDI->lobbyFlags = lobbyFlags;
  _RDI->joiningAGameInProgress = _RBX->joiningAGameInProgress;
  Live_TryCloseDialog(LOCAL_CLIENT_0, LIVE_DIALOG_ACCEPTING_INVITE);
  if ( InviteJoinHSM::IsHSMHandlingInvitation(&g_invitationHSM) )
    InviteJoinHSM::HandlePartyJoinComplete(&g_invitationHSM);
  ++_RDI->partyVersionNumber;
  if ( (_RDI->lobbyFlags & 0x800) != 0 )
  {
    v17 = DVARBOOL_com_codcasterHighClientSupport;
    if ( !DVARBOOL_com_codcasterHighClientSupport && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_codcasterHighClientSupport") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v17);
    if ( !v17->current.enabled )
    {
      Com_Printf(25, "Connected to a CDL lobby, setting com_codcasterHighClientSupport to true and com_maxStreamedModelsForLargePlayerCountEnabled to false\n");
      Dvar_SetBool_Internal(DVARBOOL_com_codcasterHighClientSupport, 1);
      Dvar_SetBool_Internal(DVARBOOL_com_maxStreamedModelsForLargePlayerCountEnabled, 0);
    }
  }
  _RDI->partyModifyTime = Sys_Milliseconds();
  Com_Printf(25, "PartyJoinAtomic: Successful join attempt!\n");
}

/*
==============
PartyAtomic_OnFrame_CheckTimeout
==============
*/
void PartyAtomic_OnFrame_CheckTimeout(const int curTime, const PartyJoinState retryState, PartyJoinInfo *partyJoinInfo)
{
  __int64 availableRetryCount; 
  PartyDisconnectReason v7; 
  char *fmt; 
  char *fmta; 
  char dest[256]; 

  PartyAtomic_AssertHasConnectivity(partyJoinInfo);
  if ( partyJoinInfo->timeoutTime <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 2015, ASSERT_TYPE_ASSERT, "(partyJoinInfo->timeoutTime > 0)", (const char *)&queryFormat, "partyJoinInfo->timeoutTime > 0") )
    __debugbreak();
  if ( partyJoinInfo->availableRetryCount < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 2016, ASSERT_TYPE_ASSERT, "(partyJoinInfo->availableRetryCount >= 0)", (const char *)&queryFormat, "partyJoinInfo->availableRetryCount >= 0") )
    __debugbreak();
  if ( curTime >= partyJoinInfo->timeoutTime )
  {
    availableRetryCount = (unsigned int)partyJoinInfo->availableRetryCount;
    if ( (int)availableRetryCount <= 0 )
    {
      Com_PrintError(14, "PartyJoinAtomic: Timed out executing state %i and used up all retries, failing.\n", (unsigned int)retryState);
      LODWORD(fmt) = partyJoinInfo->joinType;
      Com_sprintf(dest, 0x100ui64, "%d,%d", (unsigned int)partyJoinInfo->partyType, fmt);
      LODWORD(fmta) = InviteJoinHSM::IsHSMHandlingInvitation(&g_invitationHSM);
      Com_sprintf(dest, 0x100ui64, "%s,%d", dest, fmta);
      OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_PARTY_JOIN_t)0x80000000, dest);
      LOBYTE(v7) = 42;
      PartyAtomic_JoinAttemptFailed(partyJoinInfo, "EXE/HOSTUNREACH", v7);
    }
    else
    {
      Com_PrintWarning(14, "PartyJoinAtomic: Timed out executing state %i. Retrying (%i available).\n", (unsigned int)retryState, availableRetryCount);
      --partyJoinInfo->availableRetryCount;
      PartyAtomic_SetJoinState(partyJoinInfo, retryState, 0);
    }
  }
}

/*
==============
PartyAtomic_OpenHostConnection
==============
*/
__int64 PartyAtomic_OpenHostConnection(PartyJoinInfo *joinInfo, const LocalClientNum_t localClientNum, const XSESSION_INFO *hostInfo)
{
  NetConnection *v5; 
  const XNADDR *Address; 
  netsrc_t LocalNetIDFromLocalClientNum; 

  v5 = &joinInfo->connections[localClientNum];
  if ( NetConnection::IsOpened(v5) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 1471, ASSERT_TYPE_ASSERT, "(!joinInfo->connections[localClientNum].IsOpened())", (const char *)&queryFormat, "!joinInfo->connections[localClientNum].IsOpened()") )
    __debugbreak();
  Address = XSESSION_INFO::GetAddress((XSESSION_INFO *)hostInfo);
  LocalNetIDFromLocalClientNum = NET_GetLocalNetIDFromLocalClientNum(localClientNum);
  if ( !NetConnection::Open(v5, LocalNetIDFromLocalClientNum, hostInfo, Address, NS_MAXCLIENTS, TYPE_JOIN) )
    return 0i64;
  if ( NetConnection::IsLoopback(v5) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 1479, ASSERT_TYPE_ASSERT, "(!joinInfo->connections[localClientNum].IsLoopback())", (const char *)&queryFormat, "!joinInfo->connections[localClientNum].IsLoopback()") )
    __debugbreak();
  return 1i64;
}

/*
==============
PartyAtomic_PacketIsFromJoiningHost
==============
*/
_BOOL8 PartyAtomic_PacketIsFromJoiningHost(PartyJoinInfo *partyJoinInfo, const LocalClientNum_t localClientNum, const PartyType partyType, const netadr_t *from)
{
  __int64 v4; 
  PartyType v9; 

  v4 = localClientNum;
  if ( !partyJoinInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 358, ASSERT_TYPE_ASSERT, "(partyJoinInfo)", (const char *)&queryFormat, "partyJoinInfo") )
    __debugbreak();
  if ( !from && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 359, ASSERT_TYPE_ASSERT, "(from)", (const char *)&queryFormat, "from") )
    __debugbreak();
  if ( !partyJoinInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 2854, ASSERT_TYPE_ASSERT, "(partyJoinInfo)", (const char *)&queryFormat, "partyJoinInfo") )
    __debugbreak();
  if ( (unsigned int)(partyJoinInfo->state - 9) > 1 )
    return 0i64;
  if ( !partyJoinInfo->session && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 343, ASSERT_TYPE_ASSERT, "(partyJoinInfo->session)", (const char *)&queryFormat, "partyJoinInfo->session") )
    __debugbreak();
  if ( !from && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 344, ASSERT_TYPE_ASSERT, "(from)", (const char *)&queryFormat, "from") )
    __debugbreak();
  if ( partyJoinInfo->state && ((v9 = partyJoinInfo->partyType, v9 == ANY_PARTY_ID) || v9 == partyType) )
    return NetConnection::CompareAddr(&partyJoinInfo->connections[v4], from);
  else
    return 0i64;
}

/*
==============
PartyAtomic_PacketIsFromPotentialHost
==============
*/
_BOOL8 PartyAtomic_PacketIsFromPotentialHost(PartyJoinInfo *partyJoinInfo, const LocalClientNum_t localClientNum, const PartyType partyType, const netadr_t *from)
{
  __int64 v4; 
  PartyType v8; 

  v4 = localClientNum;
  if ( !partyJoinInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 342, ASSERT_TYPE_ASSERT, "(partyJoinInfo)", (const char *)&queryFormat, "partyJoinInfo") )
    __debugbreak();
  if ( !partyJoinInfo->session && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 343, ASSERT_TYPE_ASSERT, "(partyJoinInfo->session)", (const char *)&queryFormat, "partyJoinInfo->session") )
    __debugbreak();
  if ( !from && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 344, ASSERT_TYPE_ASSERT, "(from)", (const char *)&queryFormat, "from") )
    __debugbreak();
  if ( partyJoinInfo->state && ((v8 = partyJoinInfo->partyType, v8 == ANY_PARTY_ID) || v8 == partyType) )
    return NetConnection::CompareAddr(&partyJoinInfo->connections[v4], from);
  else
    return 0i64;
}

/*
==============
PartyAtomic_PartyJoinFrame
==============
*/
void PartyAtomic_PartyJoinFrame(void)
{
  int v0; 
  const dvar_t *v1; 
  unsigned int v2; 
  const dvar_t *v3; 
  const dvar_t *v4; 
  int Int_Internal_DebugName; 
  __int64 state; 
  int HasErrorOccured; 
  PartyStateFunctions *p_error; 
  bool v9; 
  __int64 v10; 
  __int64 v11; 

  v0 = Sys_Milliseconds();
  v1 = DVARINT_party_debugJoinLatency;
  v2 = v0;
  if ( !DVARINT_party_debugJoinLatency && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_debugJoinLatency") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( v1->current.integer )
  {
    if ( g_partyJoinInfo.state )
    {
      if ( fakelag_target->current.integer == fakelag_target->reset.integer )
      {
        v4 = DVARINT_party_debugJoinLatency;
        if ( !DVARINT_party_debugJoinLatency && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_debugJoinLatency") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v4);
        if ( fakelag_target->current.integer != v4->current.integer )
        {
          Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DVARINT_party_debugJoinLatency, "party_debugJoinLatency");
          Dvar_SetInt_Internal(fakelag_target, Int_Internal_DebugName);
        }
      }
    }
    else
    {
      v3 = DVARINT_party_debugJoinLatency;
      if ( !DVARINT_party_debugJoinLatency && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_debugJoinLatency") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v3);
      if ( fakelag_target->current.integer == v3->current.integer )
        Dvar_Reset(fakelag_target, DVAR_SOURCE_INTERNAL);
    }
  }
  while ( g_partyJoinInfo.state )
  {
    PartyAtomic_PartySanityCheck(&g_partyJoinInfo);
    state = g_partyJoinInfo.state;
    HasErrorOccured = PartyAtomic_HasErrorOccured(&g_partyJoinInfo);
    if ( (unsigned int)state >= 0x11 )
    {
      LODWORD(v11) = 17;
      LODWORD(v10) = state;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 2613, ASSERT_TYPE_ASSERT, "(unsigned)( currentState ) < (unsigned)( PARTYJOIN_COUNT )", "currentState doesn't index PARTYJOIN_COUNT\n\t%i not in [0, %i)", v10, v11) )
        __debugbreak();
    }
    if ( HasErrorOccured )
    {
      p_error = (PartyStateFunctions *)&s_partyStateHandlers[state].error;
      if ( !p_error->func )
      {
        v9 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 2617, ASSERT_TYPE_ASSERT, "(s_partyStateHandlers[currentState].error)", (const char *)&queryFormat, "s_partyStateHandlers[currentState].error");
        goto LABEL_26;
      }
    }
    else
    {
      p_error = &s_partyStateHandlers[state];
      if ( !p_error->func )
      {
        v9 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 2622, ASSERT_TYPE_ASSERT, "(s_partyStateHandlers[currentState].func)", (const char *)&queryFormat, "s_partyStateHandlers[currentState].func");
LABEL_26:
        if ( v9 )
          __debugbreak();
      }
    }
    p_error->func(v2, &g_partyJoinInfo);
    if ( (_DWORD)state == g_partyJoinInfo.state && HasErrorOccured == PartyAtomic_HasErrorOccured(&g_partyJoinInfo) )
      return;
  }
}

/*
==============
PartyAtomic_PartySanityCheck
==============
*/
void PartyAtomic_PartySanityCheck(PartyJoinInfo *partyJoinInfo)
{
  PartyData *atomicParty; 
  PartyJoinType joinType; 

  if ( !partyJoinInfo )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 2555, ASSERT_TYPE_ASSERT, "(partyJoinInfo)", (const char *)&queryFormat, "partyJoinInfo") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 2854, ASSERT_TYPE_ASSERT, "(partyJoinInfo)", (const char *)&queryFormat, "partyJoinInfo") )
      __debugbreak();
  }
  if ( partyJoinInfo->state == PARTYJOIN_INACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 2556, ASSERT_TYPE_ASSERT, "(PartyAtomic_GetJoinState( partyJoinInfo ) != PARTYJOIN_INACTIVE)", (const char *)&queryFormat, "PartyAtomic_GetJoinState( partyJoinInfo ) != PARTYJOIN_INACTIVE") )
    __debugbreak();
  atomicParty = partyJoinInfo->atomicParty;
  if ( atomicParty )
  {
    if ( !atomicParty->inParty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 2561, ASSERT_TYPE_ASSERT, "(broadcastParty->inParty)", (const char *)&queryFormat, "broadcastParty->inParty") )
      __debugbreak();
    if ( PartyMigrate_MigrateActive(atomicParty) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 2563, ASSERT_TYPE_ASSERT, "(!PartyMigrate_MigrateActive( broadcastParty ))", "%s\n\tStarting a migration should have stopped the joining.", "!PartyMigrate_MigrateActive( broadcastParty )") )
      __debugbreak();
    if ( !Party_IsHostDataAvailable(atomicParty) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 2565, ASSERT_TYPE_ASSERT, "(Party_IsHostDataAvailable( broadcastParty ))", "%s\n\tLosing the host should have stopped the joining", "Party_IsHostDataAvailable( broadcastParty )") )
      __debugbreak();
  }
  joinType = partyJoinInfo->joinType;
  if ( joinType == PJT_HOSTREQUEST || joinType == PJT_HOSTPRESENCE )
  {
    if ( Party_AreWeHost(&g_partyData) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 2570, ASSERT_TYPE_ASSERT, "(!Party_AreWeHost( &g_partyData ))", (const char *)&queryFormat, "!Party_AreWeHost( &g_partyData )") )
      __debugbreak();
    joinType = partyJoinInfo->joinType;
  }
  if ( joinType == PJT_MATCHMAKING && !Live_IsInSystemlinkLobby() && !Lobby_IsInRunningLobby() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 2578, ASSERT_TYPE_ASSERT, "(Lobby_IsInRunningLobby())", (const char *)&queryFormat, "Lobby_IsInRunningLobby()") )
    __debugbreak();
}

/*
==============
PartyAtomic_ReadAndVerifyJoinIdentifier
==============
*/
__int64 PartyAtomic_ReadAndVerifyJoinIdentifier(msg_t *msg, const PartyJoinInfo *joinInfo)
{
  bdSecurityID *SecurityId; 
  __int64 v5; 
  unsigned int v6; 
  int v8; 
  __int16 v9; 
  bdSecurityID buffer; 

  bdSecurityID::bdSecurityID(&buffer);
  if ( !joinInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 894, ASSERT_TYPE_ASSERT, "(joinInfo)", (const char *)&queryFormat, "joinInfo", -2i64) )
    __debugbreak();
  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 895, ASSERT_TYPE_ASSERT, "(msg)", (const char *)&queryFormat, "msg") )
    __debugbreak();
  MSG_ReadData(msg, 8, &buffer, 8);
  MSG_ReadData(msg, 6, &v8, 6);
  if ( msg->overflowed )
  {
    Com_Printf(25, "PartyJoin: Join identifier verification failed: Message overflowed\n");
LABEL_15:
    v6 = 0;
    goto LABEL_16;
  }
  SecurityId = XSESSION_INFO::GetSecurityId(&joinInfo->session->dyn.sessionInfo);
  if ( bdSecurityID::operator!=(SecurityId, &buffer) )
  {
    v5 = (__int64)*XSESSION_INFO::GetSecurityId(&joinInfo->session->dyn.sessionInfo);
    Com_Printf(25, "PartyJoin: Join identifier verification failed: - invalid session ID (%zx), we are waiting for (%zx)\n", buffer, v5);
    goto LABEL_15;
  }
  if ( v8 != *(_DWORD *)joinInfo->challenge.str || v9 != *(_WORD *)&joinInfo->challenge.str[4] )
  {
    Com_Printf(25, "PartyJoin: Join identifier verification failed: - invalid challenge (%s), we are waiting for (%s)\n", &v8, &joinInfo->challenge);
    goto LABEL_15;
  }
  v6 = 1;
LABEL_16:
  bdSecurityID::~bdSecurityID(&buffer);
  return v6;
}

/*
==============
PartyAtomic_ResetPartyJoinInfo
==============
*/
void PartyAtomic_ResetPartyJoinInfo(PartyJoinInfo *partyJoinInfo, GameModeType partyCodPlayModeIn)
{
  char v2; 

  v2 = partyCodPlayModeIn;
  if ( !partyJoinInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 163, ASSERT_TYPE_ASSERT, "(partyJoinInfo)", (const char *)&queryFormat, "partyJoinInfo") )
    __debugbreak();
  if ( NetConnection::IsOpened(partyJoinInfo->connections) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 165, ASSERT_TYPE_ASSERT, "(!partyJoinInfo->connections[LOCAL_CLIENT_0].IsOpened())", "%s\n\tConnection must be closed prior to wipe", "!partyJoinInfo->connections[LOCAL_CLIENT_0].IsOpened()") )
    __debugbreak();
  if ( NetConnection::IsOpened(&partyJoinInfo->connections[1]) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 167, ASSERT_TYPE_ASSERT, "(!partyJoinInfo->connections[LOCAL_CLIENT_1].IsOpened())", "%s\n\tConnection must be closed prior to wipe", "!partyJoinInfo->connections[LOCAL_CLIENT_1].IsOpened()") )
    __debugbreak();
  memset_0(partyJoinInfo, 0, 0x1A5Aui64);
  memset_0(&partyJoinInfo->partyCodPlayMode[1], 0, 0x9F55ui64);
  partyJoinInfo->partyCodPlayMode[0] = v2;
}

/*
==============
PartyAtomic_ReturnToPartyScreen
==============
*/
void PartyAtomic_ReturnToPartyScreen(PartyJoinInfo *partyJoinInfo, const char *errorMessage)
{
  if ( !errorMessage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 709, ASSERT_TYPE_ASSERT, "(errorMessage)", (const char *)&queryFormat, "errorMessage") )
    __debugbreak();
  Com_SetErrorMessage(errorMessage);
  PartyUI_RecoverFromError();
}

/*
==============
PartyAtomic_SetJoinState
==============
*/
void PartyAtomic_SetJoinState(PartyJoinInfo *partyJoinInfo, const PartyJoinState state, const int stateTimeout)
{
  __int64 v3; 
  char *fmt; 

  v3 = state;
  if ( !partyJoinInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 2861, ASSERT_TYPE_ASSERT, "(partyJoinInfo)", (const char *)&queryFormat, "partyJoinInfo") )
    __debugbreak();
  LODWORD(fmt) = stateTimeout;
  Com_Printf(25, "PartyJoin: Changing from %s to %s, with timeout %i.\n", s_partyJoinStateName[partyJoinInfo->state], s_partyJoinStateName[v3], fmt);
  partyJoinInfo->state = v3;
  if ( stateTimeout > 0 )
    partyJoinInfo->timeoutTime = stateTimeout + Sys_Milliseconds();
  else
    partyJoinInfo->timeoutTime = 0;
}

/*
==============
PartyAtomic_SetupPotentialHostForJoining
==============
*/
__int64 PartyAtomic_SetupPotentialHostForJoining(const int controllerIndex, const XSESSION_INFO *hostInfo, const PartyType partyType, const bool isPrivateMatch, PartyJoinInfo *outPartyJoinInfo, const PartySplitscreenData *splitscreenData)
{
  LocalClientNum_t localClientNum; 

  _RBX = outPartyJoinInfo;
  if ( !outPartyJoinInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 1490, ASSERT_TYPE_ASSERT, "(outPartyJoinInfo)", (const char *)&queryFormat, "outPartyJoinInfo") )
    __debugbreak();
  if ( PartyAtomic_IsJoiningActive(_RBX) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 1492, ASSERT_TYPE_ASSERT, "(!PartyAtomic_IsJoiningActive( outPartyJoinInfo ))", "%s\n\tWiping out an active join process", "!PartyAtomic_IsJoiningActive( outPartyJoinInfo )") )
    __debugbreak();
  _RSI = splitscreenData;
  if ( !splitscreenData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 1493, ASSERT_TYPE_ASSERT, "((1 &&(((1 && 1) || ( (1 &&! 1) && !(1 &&(((1 &&(((1 &&! 1))?1:0)&& 1) || (1 &&! 1))?1:0)&& 1) ))?1:0)&& 1) == ( splitscreenData != 0 ))", "%s\n\tSplitscreen data argument mismatch", "USING( SPLITSCREEN ) == ( splitscreenData != NULL )") )
    __debugbreak();
  PartyAtomic_ResetPartyJoinInfo(_RBX, (GameModeType)(unsigned __int8)_RBX->partyCodPlayMode[0]);
  _RBX->partyType = partyType;
  _RBX->controllerIndex = controllerIndex;
  _RBX->session = &g_partyJoinSession;
  __asm
  {
    vmovups xmm0, xmmword ptr [rsi]
    vmovups xmmword ptr [rbx+1A5Ch], xmm0
    vmovsd  xmm1, qword ptr [rsi+10h]
    vmovsd  qword ptr [rbx+1A6Ch], xmm1
  }
  localClientNum = PartyAtomicJoin_GetMainActiveClient(_RBX, controllerIndex).localClientNum;
  if ( !(unsigned int)PartyAtomic_OpenHostConnection(_RBX, localClientNum, hostInfo) || (unsigned int)PartyAtomicJoin_GetSecondaryActiveClient(_RBX, (PartyActiveClient *)&outPartyJoinInfo) && !(unsigned int)PartyAtomic_OpenHostConnection(_RBX, (const LocalClientNum_t)outPartyJoinInfo, hostInfo) )
    return 0i64;
  XSESSION_INFO::operator=(&g_partyJoinSession.dyn.sessionInfo, hostInfo);
  Session_StartClient(&g_partyJoinSession, controllerIndex, 46);
  return 1i64;
}

/*
==============
PartyAtomic_SetupSplitscreenControllersForInvite
==============
*/
void PartyAtomic_SetupSplitscreenControllersForInvite(const unsigned int requesterControllerIndex, const int fromOnlineGame, PartySplitscreenData *splitscreenData)
{
  int ControllerFromClient; 
  int LocalClientActiveCount; 

  if ( requesterControllerIndex >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 2668, ASSERT_TYPE_ASSERT, "(unsigned)( requesterControllerIndex ) < (unsigned)( 8 )", "requesterControllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", requesterControllerIndex, 8) )
    __debugbreak();
  if ( !splitscreenData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 2669, ASSERT_TYPE_ASSERT, "(splitscreenData)", (const char *)&queryFormat, "splitscreenData") )
    __debugbreak();
  if ( fromOnlineGame )
  {
    if ( CL_GetLocalClientActiveCount() > 2 )
    {
      LocalClientActiveCount = CL_GetLocalClientActiveCount();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 2674, ASSERT_TYPE_ASSERT, "( CL_GetLocalClientActiveCount() ) <= ( 2 )", "%s <= %s\n\t%i, %i", "CL_GetLocalClientActiveCount()", "MAX_PARTY_CLIENT_COUNT", LocalClientActiveCount, 2) )
        __debugbreak();
    }
    ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
    Party_SetupSplitscreenData(splitscreenData, ControllerFromClient, LOCAL_CLIENT_0);
    if ( !splitscreenData->otherClientActive )
      CL_Mgr_ActivateClient(LOCAL_CLIENT_0, ControllerFromClient);
  }
  else
  {
    CL_Mgr_ActivateClient(LOCAL_CLIENT_0, requesterControllerIndex);
    Dvar_SetBool_Internal(DVARBOOL_splitscreen, 0);
    Party_SetupSplitscreenData(splitscreenData, requesterControllerIndex, LOCAL_CLIENT_0);
    if ( splitscreenData->otherClientActive && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 2689, ASSERT_TYPE_ASSERT, "(!splitscreenData->otherClientActive)", (const char *)&queryFormat, "!splitscreenData->otherClientActive") )
      __debugbreak();
  }
  if ( !CL_IsLocalClientActive(LOCAL_CLIENT_0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 2692, ASSERT_TYPE_ASSERT, "(CL_IsLocalClientActive( LOCAL_CLIENT_0 ))", (const char *)&queryFormat, "CL_IsLocalClientActive( LOCAL_CLIENT_0 )") )
    __debugbreak();
  if ( CL_IsLocalClientActive(LOCAL_CLIENT_1) && !splitscreenData->otherClientActive && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 2693, ASSERT_TYPE_ASSERT, "(!CL_IsLocalClientActive( LOCAL_CLIENT_1 ) || splitscreenData->otherClientActive)", (const char *)&queryFormat, "!CL_IsLocalClientActive( LOCAL_CLIENT_1 ) || splitscreenData->otherClientActive") )
    __debugbreak();
}

/*
==============
PartyAtomic_Shutdown
==============
*/
void PartyAtomic_Shutdown(void)
{
  PartyData *PartyData; 

  Com_Printf(25, "%s\n", "PartyAtomic_Shutdown");
  PartyData = Lobby_GetPartyData();
  Party_StopParty(PartyData);
  Party_StopParty(&g_partyData);
  Session_DeleteSession(&g_serverSession);
  Session_DeleteSession(&g_partySession);
  Session_DeleteSession(&g_partyJoinSession);
}

/*
==============
PartyAtomic_StartJoin
==============
*/
void PartyAtomic_StartJoin(PartyJoinInfo *partyJoinInfo, PartyData *party, const PartyJoinType joinType, const PartyJoinState startState, const int retryCount)
{
  unsigned int UTC; 

  if ( !partyJoinInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 2854, ASSERT_TYPE_ASSERT, "(partyJoinInfo)", (const char *)&queryFormat, "partyJoinInfo") )
    __debugbreak();
  if ( partyJoinInfo->state && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 145, ASSERT_TYPE_ASSERT, "(PartyAtomic_GetJoinState( partyJoinInfo ) == PARTYJOIN_INACTIVE)", (const char *)&queryFormat, "PartyAtomic_GetJoinState( partyJoinInfo ) == PARTYJOIN_INACTIVE") )
    __debugbreak();
  if ( partyJoinInfo->atomicParty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 146, ASSERT_TYPE_ASSERT, "(partyJoinInfo->atomicParty == 0)", (const char *)&queryFormat, "partyJoinInfo->atomicParty == NULL") )
    __debugbreak();
  if ( startState == PARTYJOIN_INACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 147, ASSERT_TYPE_ASSERT, "(startState != PARTYJOIN_INACTIVE)", (const char *)&queryFormat, "startState != PARTYJOIN_INACTIVE") )
    __debugbreak();
  NET_ResetTelemetry();
  if ( LiveStorage_IsTimeSynced() )
    UTC = LiveStorage_GetUTC();
  else
    UTC = 0;
  partyJoinInfo->startTimeUtc = UTC;
  partyJoinInfo->startTimeMillis = Sys_Milliseconds();
  partyJoinInfo->availableRetryCount = retryCount;
  partyJoinInfo->atomicParty = party;
  partyJoinInfo->joinType = joinType;
  PartyAtomic_SetJoinState(partyJoinInfo, startState, 0);
}

/*
==============
Party_StartLANServerJoin
==============
*/
void Party_StartLANServerJoin(LocalClientNum_t localClientNum, const XSESSION_INFO *hostInfo)
{
  int ControllerFromClient; 
  PartyData *ActiveParty; 
  const PartySplitscreenData *splitscreenData; 
  bool v7; 
  int v8; 
  const dvar_t *v9; 
  PartyData *v10; 
  int integer; 
  const char *v12; 
  PartyJoinInfo *outPartyJoinInfo; 

  ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
  ActiveParty = Party_GetActiveParty();
  splitscreenData = Party_GetSplitscreenData(ActiveParty);
  v7 = PartyAtomic_SetupPotentialHostForJoining(ControllerFromClient, hostInfo, PRIVATE_PARTY_ID, 0, &g_partyJoinInfo, splitscreenData) != 0;
  if ( Party_InParty(ActiveParty) )
  {
    PartyAtomic_FillSubPartyInfoForParty(&g_partyJoinInfo, ActiveParty);
  }
  else
  {
    g_partyJoinInfo.subPartyCount = 1;
    g_partyJoinInfo.memberCount = (g_partyJoinInfo.splitscreenData.otherClientActive != 0) + 1;
    g_partyJoinInfo.subPartyList[0] = (g_partyJoinInfo.splitscreenData.otherClientActive != 0) + 1;
  }
  v8 = Party_InParty(ActiveParty);
  v9 = DVARINT_pt_searchConnectAttempts;
  v10 = NULL;
  if ( v8 )
    v10 = ActiveParty;
  if ( !DVARINT_pt_searchConnectAttempts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "pt_searchConnectAttempts") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  integer = v9->current.integer;
  if ( g_partyJoinInfo.state && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 145, ASSERT_TYPE_ASSERT, "(PartyAtomic_GetJoinState( partyJoinInfo ) == PARTYJOIN_INACTIVE)", (const char *)&queryFormat, "PartyAtomic_GetJoinState( partyJoinInfo ) == PARTYJOIN_INACTIVE") )
    __debugbreak();
  if ( g_partyJoinInfo.atomicParty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 146, ASSERT_TYPE_ASSERT, "(partyJoinInfo->atomicParty == 0)", (const char *)&queryFormat, "partyJoinInfo->atomicParty == NULL") )
    __debugbreak();
  NET_ResetTelemetry();
  if ( LiveStorage_IsTimeSynced() )
    g_partyJoinInfo.startTimeUtc = LiveStorage_GetUTC();
  else
    g_partyJoinInfo.startTimeUtc = 0;
  g_partyJoinInfo.startTimeMillis = Sys_Milliseconds();
  g_partyJoinInfo.atomicParty = v10;
  v12 = s_partyJoinStateName[g_partyJoinInfo.state];
  g_partyJoinInfo.joinType = PJT_INVITE;
  g_partyJoinInfo.availableRetryCount = integer;
  LODWORD(outPartyJoinInfo) = 0;
  Com_Printf(25, "PartyJoin: Changing from %s to %s, with timeout %i.\n", v12, s_partyJoinStateName[1], outPartyJoinInfo);
  g_partyJoinInfo.state = PARTYJOIN_REQUEST;
  g_partyJoinInfo.timeoutTime = 0;
  if ( !v7 )
  {
    Com_PrintError(14, "PartyJoin: Failed to setup potential host.\n");
    OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, MOVEMENT, NULL);
    if ( g_partyJoinInfo.state == PARTYJOIN_INACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 649, ASSERT_TYPE_ASSERT, "(PartyAtomic_GetJoinState( partyJoinInfo ) != PARTYJOIN_INACTIVE)", (const char *)&queryFormat, "PartyAtomic_GetJoinState( partyJoinInfo ) != PARTYJOIN_INACTIVE") )
      __debugbreak();
    Sys_Milliseconds();
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm1, xmm0, cs:__real@3a83126f
      vcvtss2sd xmm3, xmm1, xmm1
      vmovq   r9, xmm3
    }
    Com_Printf(25, "PartyJoinAtomic: Join attempt failed - Reason: %s - Duration: %.3fs\n", (const char *)&stru_143DD5890, *(double *)&_XMM3);
    if ( g_partyJoinInfo.errorMessage )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyjoining.cpp", 653, ASSERT_TYPE_ASSERT, "( ( partyJoinInfo->errorMessage == 0 ) )", "( partyJoinInfo->errorMessage ) = %s", g_partyJoinInfo.errorMessage) )
        __debugbreak();
    }
    g_partyJoinInfo.errorState = g_partyJoinInfo.state;
    g_partyJoinInfo.errorMessage = (const char *)&stru_143DD5890;
    g_partyJoinInfo.errorReason[0] = 42;
    OnlineMatchmakerOmniscient::JoinAttemptFailed(&OnlineMatchmakerOmniscient::ms_instance);
  }
}

