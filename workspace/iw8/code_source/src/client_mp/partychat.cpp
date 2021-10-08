/*
==============
PartyChat_CreatePrivatePartyChat
==============
*/

void __fastcall PartyChat_CreatePrivatePartyChat(const int controllerIndex)
{
  ?PartyChat_CreatePrivatePartyChat@@YAXH@Z(controllerIndex);
}

/*
==============
PartyChat_HandlePartyChatData
==============
*/

void __fastcall PartyChat_HandlePartyChatData(PartyData *party, const PartyActiveClient *destClient, netadr_t *from, msg_t *msg)
{
  ?PartyChat_HandlePartyChatData@@YAXPEAUPartyData@@PEBUPartyActiveClient@@Unetadr_t@@PEAUmsg_t@@@Z(party, destClient, from, msg);
}

/*
==============
PartyChat_CreateTeamChat
==============
*/

void __fastcall PartyChat_CreateTeamChat(PartyData *party, const int teamIndex)
{
  ?PartyChat_CreateTeamChat@@YAXPEAUPartyData@@H@Z(party, teamIndex);
}

/*
==============
PartyChat_ClearAckedMemberFromPartyChats
==============
*/

void __fastcall PartyChat_ClearAckedMemberFromPartyChats(PartyData *party, const int memberIndex)
{
  ?PartyChat_ClearAckedMemberFromPartyChats@@YAXPEAUPartyData@@H@Z(party, memberIndex);
}

/*
==============
PartyChat_Frame
==============
*/

void __fastcall PartyChat_Frame(PartyData *party, const int controllerIndex)
{
  ?PartyChat_Frame@@YAXPEAUPartyData@@H@Z(party, controllerIndex);
}

/*
==============
GetChatCreationDataPerChatType
==============
*/

ChatCreationData *__fastcall GetChatCreationDataPerChatType(const OnlineChatType chatType)
{
  return ?GetChatCreationDataPerChatType@@YAPEAUChatCreationData@@W4OnlineChatType@@@Z(chatType);
}

/*
==============
PartyChat_ChatDissolvedMessage
==============
*/

void __fastcall PartyChat_ChatDissolvedMessage(PartyData *party, const PartyActiveClient *mainActiveClient, msg_t *msg)
{
  ?PartyChat_ChatDissolvedMessage@@YAXPEAUPartyData@@PEBUPartyActiveClient@@PEAUmsg_t@@@Z(party, mainActiveClient, msg);
}

/*
==============
GetChatJoinFailureTrackingFromType
==============
*/

ChatJoinFailureTracking *__fastcall GetChatJoinFailureTrackingFromType(const OnlineChatType chatType)
{
  return ?GetChatJoinFailureTrackingFromType@@YAPEAUChatJoinFailureTracking@@W4OnlineChatType@@@Z(chatType);
}

/*
==============
PartyChat_ChatBeingCreated
==============
*/

bool __fastcall PartyChat_ChatBeingCreated(const PartyType partyType)
{
  return ?PartyChat_ChatBeingCreated@@YA_NW4PartyType@@@Z(partyType);
}

/*
==============
PartyChat_AreChatsActive
==============
*/

bool __fastcall PartyChat_AreChatsActive(const PartyType partyType)
{
  return ?PartyChat_AreChatsActive@@YA_NW4PartyType@@@Z(partyType);
}

/*
==============
PartyChat_ReadPartyChatResponse
==============
*/

void __fastcall PartyChat_ReadPartyChatResponse(PartyData *party, const PartyActiveClient *mainActiveClient, msg_t *msg)
{
  ?PartyChat_ReadPartyChatResponse@@YAXPEAUPartyData@@PEBUPartyActiveClient@@PEAUmsg_t@@@Z(party, mainActiveClient, msg);
}

/*
==============
PartyChat_ClearMemberPartyChataData
==============
*/

void __fastcall PartyChat_ClearMemberPartyChataData(PartyData *party, const int member)
{
  ?PartyChat_ClearMemberPartyChataData@@YAXPEAUPartyData@@H@Z(party, member);
}

/*
==============
AssignTeamChatCreationToPlayer
==============
*/
void AssignTeamChatCreationToPlayer(PartyData *party, int teamChatIndex)
{
  __int64 v2; 
  const dvar_t *v4; 
  char v5; 
  XUID *p_playerUID; 
  unsigned int v7; 
  NetConnection *MemberConnection; 
  ChatCreationData *v9; 
  char i; 

  v2 = teamChatIndex;
  if ( teamChatIndex )
    goto LABEL_7;
  v4 = DVARBOOL_force_match_chat_creation_fix;
  if ( !DVARBOOL_force_match_chat_creation_fix && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "force_match_chat_creation_fix") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( !v4->current.enabled )
LABEL_7:
    v5 = 0;
  else
    v5 = 1;
  p_playerUID = &party->partyMembers[0].playerUID;
  v7 = 0;
  for ( i = v5; ; v5 = i )
  {
    if ( !Party_IsMemberPresent((const PartyMember *)&p_playerUID[-52]) || Party_IsMemberHeadless(party, v7) || (_DWORD)v2 != LODWORD(p_playerUID[-2].m_id) && !v5 || XUID::operator==(&party->partyChatData.chats[v2].owner, p_playerUID) || BYTE1(p_playerUID[10].m_id) )
      goto LABEL_17;
    MemberConnection = (NetConnection *)Party_GetMemberConnection(party, v7);
    if ( NetConnection::IsLoopback(MemberConnection) )
      break;
    if ( PartyHost_AssignTeamChatCreationToPlayer(party, MemberConnection, v2) )
      goto LABEL_25;
LABEL_17:
    ++v7;
    p_playerUID += 63;
    if ( v7 >= 0xC8 )
      return;
  }
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partychat.cpp", 470, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  v9 = &s_gameChatCreationData;
  if ( (_DWORD)v2 )
    v9 = &s_teamChatCreationData;
  v9->party = party;
  v9->teamIndex = v2;
  v9->hostConnection = party->currentHost.connections;
  v9->requestTimestamp = Sys_Milliseconds();
LABEL_25:
  party->partyChatData.chats[v2].chatState = PARTYCHATSTATE_ASSIGNED;
  party->partyChatData.chats[v2].lastStateUpdateTimestamp = Sys_Milliseconds();
  XUID::operator=(&party->partyChatData.chats[v2].owner, p_playerUID);
  BYTE1(p_playerUID[10].m_id) = 1;
}

/*
==============
CheckCreateTeamChat
==============
*/
void CheckCreateTeamChat(const int controllerIndex, ChatCreationData *creationData)
{
  bool creating; 
  OnlineChatManager *Instance; 
  OnlineChatManager *v6; 
  OnlineChatId result; 
  OnlineChatId chatId; 

  creating = creationData->creating;
  if ( !creating && creationData->party )
  {
    if ( creationData->teamIndex )
    {
      Instance = OnlineChatManager::GetInstance();
      OnlineChatManager::GetActiveChatIdFromType(Instance, &result, (const OnlineChatType)5);
      if ( result.m_id )
        return;
      creating = creationData->creating;
    }
    if ( creating && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partychat.cpp", 443, ASSERT_TYPE_ASSERT, "(!creationData->creating)", (const char *)&queryFormat, "!creationData->creating") )
      __debugbreak();
    if ( !creationData->party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partychat.cpp", 444, ASSERT_TYPE_ASSERT, "(creationData->party)", (const char *)&queryFormat, "creationData->party") )
      __debugbreak();
    if ( creationData->teamIndex == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partychat.cpp", 445, ASSERT_TYPE_ASSERT, "(creationData->teamIndex != -1)", (const char *)&queryFormat, "creationData->teamIndex != INVALID_TEAM_INDEX") )
      __debugbreak();
    if ( creationData->party->inParty && NetConnection::operator==(creationData->party->currentHost.connections, creationData->hostConnection) )
    {
      LODWORD(result.m_id) = (creationData->teamIndex != 0) + 4;
      v6 = OnlineChatManager::GetInstance();
      if ( OnlineChatManager::CreateChat(v6, controllerIndex, result.m_id, CreateTeamChatCallback) )
      {
        creationData->creating = 1;
      }
      else
      {
        chatId.m_id = 0i64;
        CreateTeamChatCallback(controllerIndex, &chatId, (const OnlineChatType *)&result, 0, -1);
      }
    }
    else
    {
      creationData->teamIndex = -1;
      creationData->party = NULL;
      creationData->hostConnection = NULL;
      creationData->creating = 0;
      creationData->requestTimestamp = 0;
    }
  }
}

/*
==============
CreatePrivatePartyChatComplete
==============
*/
void CreatePrivatePartyChatComplete(const int controllerIndex, const OnlineChatId *chatId, const OnlineChatType *chatType, const bool success, const int errorCode)
{
  const XUID *Xuid; 
  XUID result; 

  if ( *chatType != (COUNT|DODGE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partychat.cpp", 485, ASSERT_TYPE_ASSERT, "(chatType == OnlineChatType::PARTY_CHAT)", (const char *)&queryFormat, "chatType == OnlineChatType::PARTY_CHAT") )
    __debugbreak();
  g_partyData.partyChatData.chats[0].chatState = !success + 2;
  g_partyData.partyChatData.chats[0].lastStateUpdateTimestamp = Sys_Milliseconds();
  if ( success )
  {
    Xuid = Live_GetXuid(&result, controllerIndex);
    XUID::operator=(&g_partyData.partyChatData.chats[0].owner, Xuid);
    g_partyData.partyChatData.chats[0].chatId = (OnlineChatId)chatId->m_id;
    *(_QWORD *)g_partyData.partyChatData.chats[0].ackedMembers.array = 0i64;
    *(_QWORD *)&g_partyData.partyChatData.chats[0].ackedMembers.array[2] = 0i64;
    *(_QWORD *)&g_partyData.partyChatData.chats[0].ackedMembers.array[4] = 0i64;
    *(_QWORD *)&g_partyData.partyChatData.chats[0].ackedMembers.array[6] = 0i64;
  }
  else
  {
    Com_PrintError(25, "[Chat] %s: Unable to create private party chat, error code %i\n", "CreatePrivatePartyChatComplete", (unsigned int)errorCode);
  }
}

/*
==============
CreateTeamChatCallback
==============
*/
void CreateTeamChatCallback(const int controllerIndex, const OnlineChatId *chatId, const OnlineChatType *chatType, const bool success)
{
  OnlineChatType v4; 
  ChatCreationData *v9; 
  const XUID *Xuid; 
  unsigned int *party; 
  NetConnection *hostConnection; 
  __int64 teamIndex; 
  const char *v14; 
  XUID *v15; 
  OnlineChatManager *Instance; 
  OnlineChatManager *v17; 
  XUID result; 
  msg_t buf; 
  XUID v20; 
  unsigned __int8 data[64]; 

  v4 = *chatType;
  if ( (unsigned int)(*chatType - 4) > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partychat.cpp", 253, ASSERT_TYPE_ASSERT, "(chatType == OnlineChatType::GAME_CHAT || chatType == OnlineChatType::TEAM_CHAT)", (const char *)&queryFormat, "chatType == OnlineChatType::GAME_CHAT || chatType == OnlineChatType::TEAM_CHAT") )
    __debugbreak();
  v9 = &s_gameChatCreationData;
  if ( v4 != 4 )
    v9 = &s_teamChatCreationData;
  if ( v9->party->areWeHost )
  {
    Xuid = Live_GetXuid(&result, controllerIndex);
    ProcessChatResponse(v9->party, success, v9->teamIndex, (const OnlineChatId)chatId->m_id, (const XUID)Xuid->m_id);
  }
  else
  {
    v9->party->partyChatData.chats[(__int64)v9->teamIndex].chatId = (OnlineChatId)chatId->m_id;
    if ( v9->party->inParty && NetConnection::operator==(v9->party->currentHost.connections, v9->hostConnection) )
    {
      party = (unsigned int *)v9->party;
      hostConnection = (NetConnection *)v9->hostConnection;
      teamIndex = v9->teamIndex;
      result.m_id = chatId->m_id;
      if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partychat.cpp", 306, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party", result.m_id) )
        __debugbreak();
      if ( party[78622] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partychat.cpp", 307, ASSERT_TYPE_ASSERT, "(!party->areWeHost)", (const char *)&queryFormat, "!party->areWeHost") )
        __debugbreak();
      MSG_Init(&buf, data, 64);
      v14 = j_va("%i%s %i", party[78600], "pa_createteamchatresponse", party[78613]);
      MSG_WriteString(&buf, v14);
      MSG_WriteByte(&buf, teamIndex);
      MSG_WriteBool(&buf, success);
      if ( success )
        MSG_WriteData(&buf, &result, 8);
      v15 = Live_GetXuid(&v20, controllerIndex);
      XUID::Serialize(v15, &buf);
      if ( buf.overflowed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partychat.cpp", 321, ASSERT_TYPE_ASSERT, "(!MSG_IsOverflowed( &msg ))", (const char *)&queryFormat, "!MSG_IsOverflowed( &msg )") )
        __debugbreak();
      NetConnection::SendReliable(hostConnection, &buf);
    }
    else
    {
      Com_PrintError(25, "[Chat] %s: No longer in same game party which we were assigned to make a channel in, leaving recently created chat.\n", "CreateTeamChatCallback");
      Instance = OnlineChatManager::GetInstance();
      OnlineChatManager::LeaveChat(Instance, chatId, chatType);
    }
  }
  v17 = OnlineChatManager::GetInstance();
  OnlineChatManager::RegisterMemberAddedCallbackForChat(v17, chatId, chatType, MemberAddedCallback);
  v9->teamIndex = -1;
  v9->party = NULL;
  v9->hostConnection = NULL;
  v9->creating = 0;
  v9->requestTimestamp = 0;
}

/*
==============
GetChatCreationDataPerChatType
==============
*/
ChatCreationData *GetChatCreationDataPerChatType(const OnlineChatType chatType)
{
  if ( chatType == 4 )
    return &s_gameChatCreationData;
  if ( chatType != 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partychat.cpp", 253, ASSERT_TYPE_ASSERT, "(chatType == OnlineChatType::GAME_CHAT || chatType == OnlineChatType::TEAM_CHAT)", (const char *)&queryFormat, "chatType == OnlineChatType::GAME_CHAT || chatType == OnlineChatType::TEAM_CHAT") )
    __debugbreak();
  return &s_teamChatCreationData;
}

/*
==============
GetChatJoinFailureTrackingFromType
==============
*/
ChatJoinFailureTracking *GetChatJoinFailureTrackingFromType(const OnlineChatType chatType)
{
  ChatJoinFailureTracking *result; 

  if ( chatType == 4 )
    return &s_gameChatJoinFailure;
  result = &s_teamChatJoinFailure;
  if ( chatType != 5 )
    return &s_partyChatJoinFailure;
  return result;
}

/*
==============
HandleChatDissolved
==============
*/
void HandleChatDissolved(PartyData *party, const OnlineChatId chatId)
{
  int v4; 
  PartyChatData *i; 
  const XUID *v6; 
  XUID result; 

  if ( !chatId.m_id && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partychat.cpp", 180, ASSERT_TYPE_ASSERT, "(chatId.IsValid())", (const char *)&queryFormat, "chatId.IsValid()") )
    __debugbreak();
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partychat.cpp", 181, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  v4 = 0;
  for ( i = &party->partyChatData; i->chats[0].chatId.m_id != chatId.m_id || i->chats[0].chatState == PARTYCHATSTATE_ASSIGNED; i = (PartyChatData *)((char *)i + 64) )
  {
    if ( (unsigned int)++v4 >= 0xCB )
      return;
  }
  i->chats[0].chatId.m_id = 0i64;
  *(_QWORD *)i->chats[0].ackedMembers.array = 0i64;
  *(_QWORD *)&i->chats[0].ackedMembers.array[2] = 0i64;
  *(_QWORD *)&i->chats[0].ackedMembers.array[4] = 0i64;
  *(_QWORD *)&i->chats[0].ackedMembers.array[6] = 0i64;
  i->chats[0].lastStateUpdateTimestamp = 0;
  v6 = XUID::FromUInt64(&result, 0i64);
  XUID::operator=(&i->chats[0].owner, v6);
  i->chats[0].chatState = PARTYCHATSTATE_INACTIVE;
  i->chats[0].lastStateUpdateTimestamp = Sys_Milliseconds();
}

/*
==============
JoinPartyChatCallback
==============
*/
void JoinPartyChatCallback(const int controllerIndex, const OnlineChatId *chatId, const OnlineChatType *chatType, const bool success, const int errorCode)
{
  ChatJoinFailureTracking *v7; 
  int v8; 
  PartyData *party; 
  NetConnection *HostConnection; 
  unsigned __int64 m_id; 
  NetConnection *v12; 
  unsigned int *v13; 
  NetConnection *v14; 
  const char *v15; 
  OnlineChatManager *Instance; 
  unsigned __int64 v17; 
  msg_t buf; 
  unsigned __int8 data[64]; 

  if ( success )
  {
    Instance = OnlineChatManager::GetInstance();
    OnlineChatManager::RegisterMemberAddedCallbackForChat(Instance, chatId, chatType, MemberAddedCallback);
  }
  else
  {
    if ( *chatType == 4 )
    {
      v7 = &s_gameChatJoinFailure;
    }
    else
    {
      v7 = &s_teamChatJoinFailure;
      if ( *chatType != 5 )
        v7 = &s_partyChatJoinFailure;
    }
    ++v7->numFailures;
    v7->lastFailedTime = Sys_Milliseconds();
    if ( errorCode == 1101 )
    {
      v8 = Party_AreWeHost(v7->party);
      party = v7->party;
      if ( v8 )
      {
        HandleChatDissolved(party, (const OnlineChatId)chatId->m_id);
      }
      else if ( Party_InParty(party) )
      {
        HostConnection = Party_GetHostConnection(v7->party, LOCAL_CLIENT_0);
        if ( NetConnection::IsConnected(HostConnection) )
        {
          m_id = chatId->m_id;
          v12 = Party_GetHostConnection(v7->party, LOCAL_CLIENT_0);
          v13 = (unsigned int *)v7->party;
          v14 = v12;
          v17 = m_id;
          if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partychat.cpp", 288, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party", v17) )
            __debugbreak();
          if ( v13[78622] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partychat.cpp", 289, ASSERT_TYPE_ASSERT, "(!party->areWeHost)", (const char *)&queryFormat, "!party->areWeHost") )
            __debugbreak();
          MSG_Init(&buf, data, 64);
          v15 = j_va("%i%s %i", v13[78600], "pa_chatdissolved", v13[78613]);
          MSG_WriteString(&buf, v15);
          MSG_WriteData(&buf, &v17, 8);
          if ( buf.overflowed )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partychat.cpp", 295, ASSERT_TYPE_ASSERT, "(!MSG_IsOverflowed( &msg ))", (const char *)&queryFormat, "!MSG_IsOverflowed( &msg )") )
              __debugbreak();
          }
          NetConnection::SendReliable(v14, &buf);
        }
      }
    }
  }
}

/*
==============
LeaveOrJoinChatIfNeeded
==============
*/
void LeaveOrJoinChatIfNeeded(PartyData *party, const int controllerIndex, const int teamIndex)
{
  OnlineChatType v6; 
  OnlineChatManager *Instance; 
  OnlineChatManager *v8; 
  OnlineChatManager *v9; 
  OnlineChatManager *v10; 
  OnlineChatType v11; 
  ChatJoinFailureTracking *v12; 
  ChatJoinFailureTracking *v13; 
  unsigned __int64 m_id; 
  OnlineChatManager *v15; 
  const dvar_t *v16; 
  const dvar_t *v17; 
  int v18; 
  OnlineChatManager *v19; 
  OnlineChatManager *v20; 
  OnlineChatManager *v21; 
  OnlineChatManager *v22; 
  __int64 v23; 
  __int64 v24; 
  OnlineChatId result; 
  OnlineChatId v26; 
  OnlineChatType chatType; 
  OnlineChatId chatId; 

  if ( (unsigned int)teamIndex <= 0xCA )
  {
    chatId.m_id = party->partyChatData.chats[(__int64)teamIndex].chatId.m_id;
    v6 = Party_IsPrivateParty(party) ? COUNT|DODGE : (teamIndex != 0) + 4;
    chatType = v6;
    Instance = OnlineChatManager::GetInstance();
    if ( !OnlineChatManager::IsChatPending(Instance, MOVEMENT, &chatId, &chatType) )
    {
      v8 = OnlineChatManager::GetInstance();
      if ( !OnlineChatManager::IsChatActive(v8, &chatId, &chatType) )
      {
        v9 = OnlineChatManager::GetInstance();
        OnlineChatManager::GetActiveChatIdFromType(v9, &result, chatType);
        v10 = OnlineChatManager::GetInstance();
        if ( !OnlineChatManager::IsChatPending(v10, DODGE, &result, &chatType) )
        {
          v11 = chatType;
          v12 = &s_gameChatJoinFailure;
          if ( chatType == 4 )
          {
            v13 = &s_gameChatJoinFailure;
          }
          else
          {
            v13 = &s_teamChatJoinFailure;
            if ( chatType != 5 )
              v13 = &s_partyChatJoinFailure;
          }
          m_id = chatId.m_id;
          if ( v13->chatId.m_id != chatId.m_id )
          {
            *(_QWORD *)&v13->numFailures = 0i64;
            v13->chatId.m_id = m_id;
            v13->party = party;
          }
          if ( result.m_id )
          {
            v15 = OnlineChatManager::GetInstance();
            OnlineChatManager::LeaveChat(v15, &result, &chatType);
            return;
          }
          if ( m_id )
          {
            if ( v11 != 4 )
            {
              v12 = &s_teamChatJoinFailure;
              if ( v11 != 5 )
                v12 = &s_partyChatJoinFailure;
            }
            v16 = DVARINT_partychat_max_retry_join_attempts;
            if ( !DVARINT_partychat_max_retry_join_attempts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "partychat_max_retry_join_attempts") )
              __debugbreak();
            Dvar_CheckFrontendServerThread(v16);
            if ( v12->numFailures < v16->current.integer )
            {
              v17 = DVARINT_partychat_attempt_retry_join_thottle;
              if ( !DVARINT_partychat_attempt_retry_join_thottle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "partychat_attempt_retry_join_thottle") )
                __debugbreak();
              Dvar_CheckFrontendServerThread(v17);
              v18 = v17->current.integer << v12->numFailures;
              if ( v18 + v12->lastFailedTime <= Sys_Milliseconds() )
              {
                v19 = OnlineChatManager::GetInstance();
                OnlineChatManager::JoinChat(v19, controllerIndex, &chatId, chatType, JoinPartyChatCallback);
                return;
              }
            }
            v11 = chatType;
          }
          if ( s_deferredPartyChatCreation && v11 == (COUNT|DODGE) && g_partyData.areWeHost && g_partyData.inParty )
          {
            if ( (unsigned int)controllerIndex >= 8 )
            {
              LODWORD(v24) = 8;
              LODWORD(v23) = controllerIndex;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partychat.cpp", 510, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v23, v24) )
                __debugbreak();
            }
            if ( OnlineChatManager::GetInstance()->m_initialized )
            {
              v20 = OnlineChatManager::GetInstance();
              if ( OnlineChatManager::CanCreateChat(v20, controllerIndex) && g_partyData.partyChatData.chats[0].chatState == PARTYCHATSTATE_INACTIVE )
              {
                v21 = OnlineChatManager::GetInstance();
                OnlineChatManager::GetActiveChatIdFromType(v21, &v26, COUNT|DODGE);
                if ( v26.m_id )
                {
                  s_deferredPartyChatCreation = 1;
                }
                else
                {
                  s_deferredPartyChatCreation = 0;
                  v22 = OnlineChatManager::GetInstance();
                  if ( OnlineChatManager::CreateChat(v22, controllerIndex, COUNT|DODGE, CreatePrivatePartyChatComplete) )
                  {
                    g_partyData.partyChatData.chats[0].chatState = PARTYCHATSTATE_ASSIGNED;
                  }
                  else
                  {
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partychat.cpp", 539, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unable to create private party chat") )
                      __debugbreak();
                    Com_PrintError(25, "[Chat] %s: Unable to create private party chat\n", "PartyChat_CreatePrivatePartyChat");
                    g_partyData.partyChatData.chats[0].chatState = PARTYCHATSTATE_FAILED;
                  }
                  g_partyData.partyChatData.chats[0].lastStateUpdateTimestamp = Sys_Milliseconds();
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
MemberAddedCallback
==============
*/
void MemberAddedCallback(const int controllerIndex, const OnlineChatId *chatId, const OnlineChatType *chatType, const unsigned __int64 memberId)
{
  OnlineChatManager *Instance; 
  OnlineChatManager *v9; 
  PartyData *PartyData; 
  unsigned __int64 m_id; 
  const PartyData *v12; 
  int v13; 
  unsigned __int64 v14; 

  Instance = OnlineChatManager::GetInstance();
  if ( !OnlineChatManager::IsChatActive(Instance, chatId, chatType) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partychat.cpp", 329, ASSERT_TYPE_ASSERT, "(OnlineChatManager::GetInstance().IsChatActive( chatId, chatType ))", (const char *)&queryFormat, "OnlineChatManager::GetInstance().IsChatActive( chatId, chatType )") )
    __debugbreak();
  v9 = OnlineChatManager::GetInstance();
  if ( OnlineChatManager::AreWeHostOfChat(v9, controllerIndex, chatId, chatType) )
  {
    PartyData = Lobby_GetPartyData();
    m_id = chatId->m_id;
    v12 = PartyData;
    v13 = 0;
    v14 = PartyData->partyChatData.chats[0].chatId.m_id;
    while ( XUID::ToUint64(&v12->partyMembers[v13].playerUID) != memberId )
    {
      if ( (unsigned int)++v13 >= 0xC8 )
        return;
    }
    if ( v14 != m_id )
      Party_GetMemberTeam(v12, v13);
  }
}

/*
==============
PartyChat_AreChatsActive
==============
*/
bool PartyChat_AreChatsActive(const PartyType partyType)
{
  OnlineChatManager *v1; 
  OnlineChatManager *v2; 
  OnlineChatManager *v3; 
  OnlineChatManager *v4; 
  OnlineChatManager *Instance; 
  OnlineChatManager *v7; 
  OnlineChatType chatType; 
  OnlineChatId v9; 
  OnlineChatId result; 
  OnlineChatId chatId; 

  if ( partyType )
  {
    if ( partyType == PRIVATE_PARTY_ID )
    {
      Instance = OnlineChatManager::GetInstance();
      OnlineChatManager::GetActiveChatIdFromType(Instance, &v9, COUNT|DODGE);
      v7 = OnlineChatManager::GetInstance();
      chatType = COUNT|DODGE;
      return OnlineChatManager::IsChatActive(v7, &v9, &chatType);
    }
  }
  else
  {
    v1 = OnlineChatManager::GetInstance();
    OnlineChatManager::GetActiveChatIdFromType(v1, &result, (const OnlineChatType)4);
    v2 = OnlineChatManager::GetInstance();
    OnlineChatManager::GetActiveChatIdFromType(v2, &chatId, (const OnlineChatType)5);
    v3 = OnlineChatManager::GetInstance();
    chatType = 4;
    if ( OnlineChatManager::IsChatActive(v3, &result, &chatType) )
      return 1;
    v4 = OnlineChatManager::GetInstance();
    LODWORD(v9.m_id) = 5;
    if ( OnlineChatManager::IsChatActive(v4, &chatId, (const OnlineChatType *)&v9) )
      return 1;
  }
  return 0;
}

/*
==============
PartyChat_ChatBeingCreated
==============
*/
bool PartyChat_ChatBeingCreated(const PartyType partyType)
{
  if ( partyType )
  {
    if ( partyType == PRIVATE_PARTY_ID )
      return g_partyData.partyChatData.chats[0].chatState == PARTYCHATSTATE_ASSIGNED;
  }
  else if ( s_teamChatCreationData.creating || s_gameChatCreationData.creating )
  {
    return 1;
  }
  return 0;
}

/*
==============
PartyChat_ChatDissolvedMessage
==============
*/
void PartyChat_ChatDissolvedMessage(PartyData *party, const PartyActiveClient *mainActiveClient, msg_t *msg)
{
  OnlineChatId buffer; 

  buffer.m_id = 0i64;
  MSG_ReadData(msg, 8, &buffer, 8);
  HandleChatDissolved(party, buffer);
}

/*
==============
PartyChat_ClearAckedMemberFromPartyChats
==============
*/
void PartyChat_ClearAckedMemberFromPartyChats(PartyData *party, const int memberIndex)
{
  unsigned __int64 v2; 
  unsigned int v4; 
  PartyChatData *p_partyChatData; 
  __int64 v6; 
  __int64 v7; 
  __int64 v8; 

  v2 = (unsigned int)memberIndex;
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partychat.cpp", 91, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( (unsigned int)v2 >= 0xC8 )
  {
    LODWORD(v6) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partychat.cpp", 92, ASSERT_TYPE_ASSERT, "(unsigned)( memberIndex ) < (unsigned)( ( sizeof( *array_counter( party->partyMembers ) ) + 0 ) )", "memberIndex doesn't index ARRAY_COUNT( party->partyMembers )\n\t%i not in [0, %i)", v6, 200) )
      __debugbreak();
  }
  v4 = 0;
  p_partyChatData = &party->partyChatData;
  do
  {
    if ( p_partyChatData->chats[0].chatState == PARTYCHATSTATE_CREATED )
    {
      if ( (unsigned int)v2 >= 0x100 )
      {
        LODWORD(v8) = 256;
        LODWORD(v7) = v2;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v7, v8) )
          __debugbreak();
      }
      p_partyChatData->chats[0].ackedMembers.array[v2 >> 5] &= ~(0x80000000 >> (v2 & 0x1F));
    }
    ++v4;
    p_partyChatData = (PartyChatData *)((char *)p_partyChatData + 64);
  }
  while ( v4 < 0xCB );
}

/*
==============
PartyChat_ClearMemberPartyChataData
==============
*/
void PartyChat_ClearMemberPartyChataData(PartyData *party, const int member)
{
  unsigned __int64 v2; 
  XUID *p_owner; 
  unsigned int v5; 
  int m_id; 
  const XUID *Xuid; 
  const XUID *v8; 
  __int64 v9; 
  __int64 v10; 
  XUID result; 
  XUID v12; 

  v2 = (unsigned int)member;
  if ( (unsigned int)member >= 0xC8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partychat.cpp", 225, ASSERT_TYPE_ASSERT, "(unsigned)( member ) < (unsigned)( 200 )", "member doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", member, 200) )
    __debugbreak();
  p_owner = &party->partyChatData.chats[0].owner;
  v5 = 0;
  party->partyMembers[(int)v2].isCreatingPartyChat = 0;
  do
  {
    m_id = p_owner[-1].m_id;
    if ( m_id == 1 )
    {
      Xuid = Party_GetXuid(&result, party, v2);
      if ( XUID::operator==(p_owner, Xuid) )
      {
        p_owner[2].m_id = 0i64;
        p_owner[3].m_id = 0i64;
        p_owner[4].m_id = 0i64;
        p_owner[5].m_id = 0i64;
        p_owner[6].m_id = 0i64;
        LODWORD(p_owner[1].m_id) = 0;
        v8 = XUID::FromUInt64(&v12, 0i64);
        XUID::operator=(p_owner, v8);
        LODWORD(p_owner[-1].m_id) = 0;
        LODWORD(p_owner[1].m_id) = Sys_Milliseconds();
      }
    }
    else if ( m_id == 2 )
    {
      if ( (unsigned int)v2 >= 0x100 )
      {
        LODWORD(v10) = 256;
        LODWORD(v9) = v2;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v9, v10) )
          __debugbreak();
      }
      *((_DWORD *)&p_owner[3].m_id + (v2 >> 5)) &= ~(0x80000000 >> (v2 & 0x1F));
    }
    ++v5;
    p_owner += 8;
  }
  while ( v5 < 0xCB );
}

/*
==============
PartyChat_CreatePrivatePartyChat
==============
*/
void PartyChat_CreatePrivatePartyChat(const int controllerIndex)
{
  OnlineChatManager *Instance; 
  OnlineChatManager *v3; 
  OnlineChatManager *v4; 
  OnlineChatId result; 

  if ( g_partyData.areWeHost && g_partyData.inParty )
  {
    if ( (unsigned int)controllerIndex >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partychat.cpp", 510, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, 8) )
      __debugbreak();
    if ( OnlineChatManager::GetInstance()->m_initialized )
    {
      Instance = OnlineChatManager::GetInstance();
      if ( OnlineChatManager::CanCreateChat(Instance, controllerIndex) && g_partyData.partyChatData.chats[0].chatState == PARTYCHATSTATE_INACTIVE )
      {
        v3 = OnlineChatManager::GetInstance();
        OnlineChatManager::GetActiveChatIdFromType(v3, &result, COUNT|DODGE);
        if ( result.m_id )
        {
          s_deferredPartyChatCreation = 1;
        }
        else
        {
          s_deferredPartyChatCreation = 0;
          v4 = OnlineChatManager::GetInstance();
          if ( OnlineChatManager::CreateChat(v4, controllerIndex, COUNT|DODGE, CreatePrivatePartyChatComplete) )
          {
            g_partyData.partyChatData.chats[0].chatState = PARTYCHATSTATE_ASSIGNED;
            g_partyData.partyChatData.chats[0].lastStateUpdateTimestamp = Sys_Milliseconds();
          }
          else
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partychat.cpp", 539, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unable to create private party chat") )
              __debugbreak();
            Com_PrintError(25, "[Chat] %s: Unable to create private party chat\n", "PartyChat_CreatePrivatePartyChat");
            g_partyData.partyChatData.chats[0].chatState = PARTYCHATSTATE_FAILED;
            g_partyData.partyChatData.chats[0].lastStateUpdateTimestamp = Sys_Milliseconds();
          }
        }
      }
    }
  }
}

/*
==============
PartyChat_CreateTeamChat
==============
*/
void PartyChat_CreateTeamChat(PartyData *party, const int teamIndex)
{
  ChatCreationData *v4; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partychat.cpp", 470, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  v4 = &s_gameChatCreationData;
  if ( teamIndex )
    v4 = &s_teamChatCreationData;
  v4->party = party;
  v4->teamIndex = teamIndex;
  v4->hostConnection = party->currentHost.connections;
  v4->requestTimestamp = Sys_Milliseconds();
}

/*
==============
PartyChat_Frame
==============
*/
void PartyChat_Frame(PartyData *party, const int controllerIndex)
{
  unsigned int v4; 
  const dvar_t *v5; 
  int integer; 
  unsigned int v7; 
  PartyMember *partyMembers; 
  NetConnection *MemberConnection; 
  int team; 
  __int64 v11; 
  bitarray_base<bitarray<256> > *v12; 
  const dvar_t *v13; 
  int v14; 
  PartyChatData *p_partyChatData; 
  int v16; 
  const XUID *Xuid; 
  int MemberByXUID; 
  int MemberTeam; 
  const dvar_t *v20; 
  OnlineChatManager *Instance; 
  OnlineChatManager *v22; 
  OnlineChatManager *v23; 
  XUID result; 
  OnlineChatId chatId; 

  Sys_ProfBeginNamedEvent(0xFF808080, "PartyChat_Frame");
  if ( party->inParty )
  {
    v4 = 0;
    if ( !InviteJoinHSM::IsHSMHandlingInvitation(&g_invitationHSM) && party->areWeHost )
    {
      v5 = DVARINT_partychat_check_sent_data_freq_ms;
      if ( !DVARINT_partychat_check_sent_data_freq_ms && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "partychat_check_sent_data_freq_ms") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v5);
      integer = v5->current.integer;
      if ( integer + s_lastCheckedSentDataTimestamp <= Sys_Milliseconds() )
      {
        v7 = 0;
        partyMembers = party->partyMembers;
        do
        {
          if ( Party_IsMemberPresent(partyMembers) )
          {
            if ( !Party_IsMemberHeadless(party, v7) )
            {
              MemberConnection = (NetConnection *)Party_GetMemberConnection(party, v7);
              if ( !NetConnection::IsLoopback(MemberConnection) )
              {
                team = partyMembers->team;
                v11 = (__int64)team << 6;
                if ( *(PartyChatState *)((char *)&party->partyChatData.chats[0].chatState + v11) == PARTYCHATSTATE_CREATED )
                {
                  v12 = (bitarray<256> *)((char *)&party->partyChatData.chats[0].ackedMembers + v11);
                  if ( !bitarray_base<bitarray<256>>::testBit(v12, v7) && PartyHost_SendPartyChatDataToPlayer(party, MemberConnection, team) )
                    bitarray_base<bitarray<256>>::setBit(v12, v7);
                }
                if ( team && party->partyChatData.chats[0].chatState == PARTYCHATSTATE_CREATED && !bitarray_base<bitarray<256>>::testBit(&party->partyChatData.chats[0].ackedMembers, v7) && PartyHost_SendPartyChatDataToPlayer(party, MemberConnection, 0) )
                  bitarray_base<bitarray<256>>::setBit(&party->partyChatData.chats[0].ackedMembers, v7);
              }
            }
          }
          ++v7;
          ++partyMembers;
        }
        while ( v7 < 0xC8 );
        s_lastCheckedSentDataTimestamp = Sys_Milliseconds();
      }
    }
    if ( Party_IsGameLobby(party) && !InviteJoinHSM::IsHSMHandlingInvitation(&g_invitationHSM) && party->areWeHost )
    {
      v13 = DVARINT_partychat_check_team_creation_freq_ms;
      if ( !DVARINT_partychat_check_team_creation_freq_ms && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "partychat_check_team_creation_freq_ms") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v13);
      v14 = v13->current.integer;
      if ( v14 + s_lastCheckedTeamCreationTimestamp <= Sys_Milliseconds() )
      {
        p_partyChatData = &party->partyChatData;
        do
        {
          if ( v4 - 201 > 1 && p_partyChatData->chats[0].chatState != PARTYCHATSTATE_CREATED )
          {
            if ( p_partyChatData->chats[0].chatState != PARTYCHATSTATE_ASSIGNED || (v16 = p_partyChatData->chats[0].lastStateUpdateTimestamp + Dvar_GetInt_Internal_DebugName(DVARINT_partychat_assign_timeout_ms, "partychat_assign_timeout_ms"), v16 <= Sys_Milliseconds()) )
              AssignTeamChatCreationToPlayer(party, v4);
          }
          ++v4;
          p_partyChatData = (PartyChatData *)((char *)p_partyChatData + 64);
        }
        while ( v4 < 0xCB );
        s_lastCheckedTeamCreationTimestamp = Sys_Milliseconds();
      }
    }
    if ( Live_IsUserSignedInToDemonware(controllerIndex) )
    {
      LeaveOrJoinChatIfNeeded(party, controllerIndex, 0);
      if ( Party_IsGameLobby(party) )
      {
        Xuid = Live_GetXuid(&result, controllerIndex);
        MemberByXUID = Party_FindMemberByXUID(party, (const XUID)Xuid->m_id);
        MemberTeam = Party_GetMemberTeam(party, MemberByXUID);
        if ( MemberTeam )
          LeaveOrJoinChatIfNeeded(party, controllerIndex, MemberTeam);
        CheckCreateTeamChat(controllerIndex, &s_teamChatCreationData);
        v20 = DVARBOOL_enable_match_chat;
        if ( !DVARBOOL_enable_match_chat && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "enable_match_chat") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v20);
        if ( v20->current.enabled )
        {
          CheckCreateTeamChat(controllerIndex, &s_gameChatCreationData);
        }
        else
        {
          chatId.m_id = party->partyChatData.chats[0].chatId.m_id;
          LODWORD(result.m_id) = 4 - Party_IsPrivateParty(party);
          Instance = OnlineChatManager::GetInstance();
          if ( !OnlineChatManager::IsChatPending(Instance, MOVEMENT, &chatId, (const OnlineChatType *)&result) )
          {
            v22 = OnlineChatManager::GetInstance();
            if ( OnlineChatManager::IsChatActive(v22, &chatId, (const OnlineChatType *)&result) )
            {
              v23 = OnlineChatManager::GetInstance();
              OnlineChatManager::LeaveChat(v23, &chatId, (const OnlineChatType *)&result);
            }
          }
        }
      }
    }
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
PartyChat_HandlePartyChatData
==============
*/
void PartyChat_HandlePartyChatData(PartyData *party, const PartyActiveClient *destClient, netadr_t *from, msg_t *msg)
{
  int Byte; 
  __int64 v7; 

  Byte = MSG_ReadByte(msg);
  v7 = Byte;
  if ( (unsigned int)Byte >= 0xCB && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partychat.cpp", 406, ASSERT_TYPE_ASSERT, "(unsigned)( teamIndex ) < (unsigned)( ( sizeof( *array_counter( party->partyChatData.chats ) ) + 0 ) )", "teamIndex doesn't index ARRAY_COUNT( party->partyChatData.chats )\n\t%i not in [0, %i)", Byte, 203) )
    __debugbreak();
  MSG_ReadData(msg, 8, &party->partyChatData.chats[v7].chatId, 8);
}

/*
==============
PartyChat_ReadPartyChatResponse
==============
*/
void PartyChat_ReadPartyChatResponse(PartyData *party, const PartyActiveClient *mainActiveClient, msg_t *msg)
{
  int Byte; 
  int Bit; 
  bool v7; 
  XUID result; 
  OnlineChatId buffer; 

  buffer.m_id = 0i64;
  Byte = MSG_ReadByte(msg);
  Bit = MSG_ReadBit(msg);
  v7 = Bit != 0;
  if ( Bit )
    MSG_ReadData(msg, 8, &buffer, 8);
  XUID::FromMsg(&result, msg);
  ProcessChatResponse(party, v7, Byte, buffer, result);
}

/*
==============
ProcessChatResponse
==============
*/
void ProcessChatResponse(PartyData *party, const bool success, const int teamIndex, const OnlineChatId chatId, const XUID xuid)
{
  __int64 v5; 
  PartyChat *v9; 
  const char *v10; 
  const char *v11; 
  int MemberByXUID; 
  unsigned int v13; 
  PartyMember *v14; 
  const char *v15; 
  const XUID *v16; 
  const char *v17; 
  char *fmt; 
  __int64 v19; 
  XUID result; 

  v5 = teamIndex;
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partychat.cpp", 126, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( (unsigned int)v5 >= 0xCB )
  {
    LODWORD(v19) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partychat.cpp", 127, ASSERT_TYPE_ASSERT, "(unsigned)( teamIndex ) < (unsigned)( ( sizeof( *array_counter( party->partyChatData.chats ) ) + 0 ) )", "teamIndex doesn't index ARRAY_COUNT( party->partyChatData.chats )\n\t%i not in [0, %i)", v19, 203) )
      __debugbreak();
  }
  if ( party && (int)v5 >= 0 && (unsigned int)v5 < 0xCB )
  {
    v9 = &party->partyChatData.chats[v5];
    if ( v9->chatState == PARTYCHATSTATE_ASSIGNED )
    {
      if ( XUID::operator!=(&party->partyChatData.chats[v5].owner, &xuid) )
      {
        v10 = XUID::ToString((XUID *)&xuid);
        v11 = XUID::ToString(&party->partyChatData.chats[v5].owner);
        Com_PrintError(25, "[Chat] %s: Message sent from %s, who is not who is supposed to be creating the chat (should be %s)\n", "ProcessChatResponse", v11, v10);
      }
      else
      {
        MemberByXUID = Party_FindMemberByXUID(party, party->partyChatData.chats[v5].owner);
        v13 = MemberByXUID;
        if ( MemberByXUID == -1 )
        {
          v9->chatState = PARTYCHATSTATE_INACTIVE;
          party->partyChatData.chats[v5].lastStateUpdateTimestamp = Sys_Milliseconds();
          v16 = XUID::NullXUID(&result);
          XUID::operator=(&party->partyChatData.chats[v5].owner, v16);
          v17 = XUID::ToString(&party->partyChatData.chats[v5].owner);
          Com_PrintError(25, "[Chat] %s: Couldn't find owner (%s) in party! This player more than likely left before creating the chat\n", "ProcessChatResponse", v17);
        }
        else
        {
          v14 = &party->partyMembers[MemberByXUID];
          if ( !Party_IsMemberPresent(v14) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partychat.cpp", 153, ASSERT_TYPE_ASSERT, "(Party_IsMemberPresent( member ))", (const char *)&queryFormat, "Party_IsMemberPresent( member )") )
            __debugbreak();
          if ( !v14->isCreatingPartyChat && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partychat.cpp", 154, ASSERT_TYPE_ASSERT, "(member->isCreatingPartyChat)", (const char *)&queryFormat, "member->isCreatingPartyChat") )
            __debugbreak();
          v14->isCreatingPartyChat = 0;
          v9->chatState = !success + 2;
          v9->lastStateUpdateTimestamp = Sys_Milliseconds();
          v9->chatId = chatId;
          v9->ackedMembers.array[0] = 0;
          *(_QWORD *)&v9->ackedMembers.array[1] = 0i64;
          *(_QWORD *)&v9->ackedMembers.array[3] = 0i64;
          *(_QWORD *)&v9->ackedMembers.array[5] = 0i64;
          v9->ackedMembers.array[7] = 0;
          bitarray_base<bitarray<256>>::setBit(&v9->ackedMembers, v13);
          v15 = XUID::ToString(&v9->owner);
          LODWORD(fmt) = v5;
          Com_Printf(25, "[Chat] %s: Assigned chat ID %zu to teamIndex %i from player %s\n", "ProcessChatResponse", chatId.m_id, fmt, v15);
        }
      }
    }
  }
  else
  {
    Com_PrintError(25, "[Chat] %s: invalid party or team index (%i)!\n", "ProcessChatResponse", (unsigned int)v5);
  }
}

