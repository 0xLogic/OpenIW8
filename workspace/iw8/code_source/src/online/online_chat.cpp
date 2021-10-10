/*
==============
OnlineChat::Print
==============
*/

void __fastcall OnlineChat::Print(OnlineChat *this)
{
  ?Print@OnlineChat@@QEAAXXZ(this);
}

/*
==============
OnlineChatMessage::SetState
==============
*/

void __fastcall OnlineChatMessage::SetState(OnlineChatMessage *this, const OnlineChatMessage::State state)
{
  ?SetState@OnlineChatMessage@@QEAAXW4State@1@@Z(this, state);
}

/*
==============
OnlineChatMessage::SetFilteredString
==============
*/

void __fastcall OnlineChatMessage::SetFilteredString(OnlineChatMessage *this, const bool success, const char *filteredString)
{
  ?SetFilteredString@OnlineChatMessage@@AEAAX_NPEBD@Z(this, success, filteredString);
}

/*
==============
OnlineChat::RegisterMemberAddedCallback
==============
*/

void __fastcall OnlineChat::RegisterMemberAddedCallback(OnlineChat *this, void (__fastcall *callback)(const int, const OnlineChatId *, const OnlineChatType *, const unsigned __int64))
{
  ?RegisterMemberAddedCallback@OnlineChat@@QEAAXP6AXHAEBUOnlineChatId@@AEBW4OnlineChatType@@_K@Z@Z(this, callback);
}

/*
==============
OnlineChat::GetOnlineChatMessageFromPool
==============
*/

OnlineChatMessage *__fastcall OnlineChat::GetOnlineChatMessageFromPool()
{
  return ?GetOnlineChatMessageFromPool@OnlineChat@@CAPEAVOnlineChatMessage@@XZ();
}

/*
==============
OnlineChat::IsMemberTextMuted
==============
*/

bool __fastcall OnlineChat::IsMemberTextMuted(OnlineChat *this, const unsigned __int64 memberId)
{
  return ?IsMemberTextMuted@OnlineChat@@QEAA_N_K@Z(this, memberId);
}

/*
==============
OnlineChatMessage::FilterStringAsync
==============
*/

void __fastcall OnlineChatMessage::FilterStringAsync(OnlineChatMessage *this)
{
  ?FilterStringAsync@OnlineChatMessage@@AEAAXXZ(this);
}

/*
==============
OnlineChat::UnInit
==============
*/

void __fastcall OnlineChat::UnInit(OnlineChat *this)
{
  ?UnInit@OnlineChat@@QEAAXXZ(this);
}

/*
==============
OnlineChat::AddMemberToChat
==============
*/

void __fastcall OnlineChat::AddMemberToChat(OnlineChat *this, const unsigned __int64 memberId, const char *gamerTag, const bool isHost)
{
  ?AddMemberToChat@OnlineChat@@QEAAX_KPEBD_N@Z(this, memberId, gamerTag, isHost);
}

/*
==============
OnlineChatMessage::CheckProfanityFilterTasks
==============
*/

void OnlineChatMessage::CheckProfanityFilterTasks(void)
{
  ?CheckProfanityFilterTasks@OnlineChatMessage@@SAXXZ();
}

/*
==============
OnlineChat::PromoteToHost
==============
*/

void __fastcall OnlineChat::PromoteToHost(OnlineChat *this, const unsigned __int64 memberId)
{
  ?PromoteToHost@OnlineChat@@QEAAX_K@Z(this, memberId);
}

/*
==============
OnlineChatMessage::BeginFilterStringTask
==============
*/

void __fastcall OnlineChatMessage::BeginFilterStringTask(OnlineChatMessage *this, ProfanityAsyncTaskData *taskData)
{
  ?BeginFilterStringTask@OnlineChatMessage@@AEAAXPEAUProfanityAsyncTaskData@@@Z(this, taskData);
}

/*
==============
OnlineChat::GetMemberFromChatById
==============
*/

OnlineChatMemberInfo *__fastcall OnlineChat::GetMemberFromChatById(OnlineChat *this, const unsigned __int64 id)
{
  return ?GetMemberFromChatById@OnlineChat@@QEAAPEAUOnlineChatMemberInfo@@_K@Z(this, id);
}

/*
==============
OnlineChat::GetMembersListFromChat
==============
*/

void __fastcall OnlineChat::GetMembersListFromChat(OnlineChat *this, const OnlineChatMemberInfo **members, int *memberSize)
{
  ?GetMembersListFromChat@OnlineChat@@QEAAXPEAPEBUOnlineChatMemberInfo@@AEAH@Z(this, members, memberSize);
}

/*
==============
OnlineChatMessage::BeginFilterStringTaskComplete
==============
*/

void __fastcall OnlineChatMessage::BeginFilterStringTaskComplete(GenericTask *task, eTaskManagerTaskState state)
{
  ?BeginFilterStringTaskComplete@OnlineChatMessage@@CAXPEAVGenericTask@@W4eTaskManagerTaskState@@@Z(task, state);
}

/*
==============
OnlineChat::RemoveMemberFromChat
==============
*/

void __fastcall OnlineChat::RemoveMemberFromChat(OnlineChat *this, const unsigned __int64 memberId)
{
  ?RemoveMemberFromChat@OnlineChat@@QEAAX_K@Z(this, memberId);
}

/*
==============
OnlineChat::Init
==============
*/

void __fastcall OnlineChat::Init(OnlineChat *this, const int controllerIndex, const OnlineChatId chatId, const OnlineChatType chatType)
{
  ?Init@OnlineChat@@QEAAXHUOnlineChatId@@W4OnlineChatType@@@Z(this, controllerIndex, chatId, chatType);
}

/*
==============
OnlineChat::GetMessageFromIndex
==============
*/

bool __fastcall OnlineChat::GetMessageFromIndex(OnlineChat *this, const int messageIndex, const OnlineChatMessage **message)
{
  return ?GetMessageFromIndex@OnlineChat@@QEAA_NHPEAPEBVOnlineChatMessage@@@Z(this, messageIndex, message);
}

/*
==============
OnlineChat::GetMemberFromChatByName
==============
*/

OnlineChatMemberInfo *__fastcall OnlineChat::GetMemberFromChatByName(OnlineChat *this, const char *name)
{
  return ?GetMemberFromChatByName@OnlineChat@@QEAAPEAUOnlineChatMemberInfo@@PEBD@Z(this, name);
}

/*
==============
OnlineChatMessage::Set
==============
*/

void __fastcall OnlineChatMessage::Set(OnlineChatMessage *this, const unsigned __int64 fromId, const unsigned __int64 toId, const char *fromGamerTag, const char *message, const OnlineChatMessage::State state, OnlineChat *chat, const bool shouldFilter)
{
  ?Set@OnlineChatMessage@@QEAAX_K0PEBD1W4State@1@PEAVOnlineChat@@_N@Z(this, fromId, toId, fromGamerTag, message, state, chat, shouldFilter);
}

/*
==============
OnlineChat::AddMessage
==============
*/

void __fastcall OnlineChat::AddMessage(OnlineChat *this, OnlineChatMessage *const messageHandle)
{
  ?AddMessage@OnlineChat@@AEAAXQEAVOnlineChatMessage@@@Z(this, messageHandle);
}

/*
==============
OnlineChatMessage::Clear
==============
*/

void __fastcall OnlineChatMessage::Clear(OnlineChatMessage *this)
{
  ?Clear@OnlineChatMessage@@QEAAXXZ(this);
}

/*
==============
OnlineChat::AddMessageToChat
==============
*/

OnlineChatMessage *__fastcall OnlineChat::AddMessageToChat(OnlineChat *this, const unsigned __int64 fromId, const unsigned __int64 toId, const char *fromGamerTag, const char *message, const OnlineChatMessage::State messageState)
{
  return ?AddMessageToChat@OnlineChat@@QEAAPEAVOnlineChatMessage@@_K0PEBD1W4State@2@@Z(this, fromId, toId, fromGamerTag, message, messageState);
}

/*
==============
OnlineChat::AddMemberToChat
==============
*/
void OnlineChat::AddMemberToChat(OnlineChat *this, const unsigned __int64 memberId, const char *gamerTag, const bool isHost)
{
  __int64 m_memberCount; 
  int v9; 
  OnlineChatMemberInfo *m_memberCache; 
  OnlineChatMemberInfo *v11; 
  unsigned __int64 m_id; 
  void (__fastcall *m_memberJoinedCallback)(const int, const OnlineChatId *, const OnlineChatType *, const unsigned __int64); 
  __int64 v14; 

  if ( this->m_state != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_chat.cpp", 359, ASSERT_TYPE_ASSERT, "(m_state == OnlineChatState::JOINED)", (const char *)&queryFormat, "m_state == OnlineChatState::JOINED") )
    __debugbreak();
  if ( !memberId )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_chat.cpp", 361, ASSERT_TYPE_ASSERT, "(memberId != 0)", (const char *)&queryFormat, "memberId != 0") )
      __debugbreak();
    Com_PrintError(14, "[Chat] %s: Couldn't add member in chat %zu because memberId is 0\n", "OnlineChat::AddMemberToChat", this->m_chatId.m_id);
    return;
  }
  if ( !gamerTag )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_chat.cpp", 368, ASSERT_TYPE_ASSERT, "(gamerTag)", (const char *)&queryFormat, "gamerTag") )
      __debugbreak();
    goto LABEL_12;
  }
  if ( !*gamerTag )
  {
LABEL_12:
    Com_PrintError(14, "[Chat] %s: Couldn't add member %zu in chat %zu because gamertag is null or empty\n", "OnlineChat::AddMemberToChat", memberId, this->m_chatId.m_id);
    return;
  }
  m_memberCount = this->m_memberCount;
  if ( (unsigned int)m_memberCount < 0xC8 )
  {
    v9 = 0;
    if ( (int)m_memberCount <= 0 )
    {
LABEL_19:
      v11 = &this->m_memberCache[m_memberCount];
      Com_TruncatePlayerName(gamerTag, this->m_memberCache[m_memberCount].gamerTag, 0x24ui64);
      *(_WORD *)&v11->isTyping = 0;
      v11->id = memberId;
      v11->isHost = isHost;
      m_id = this->m_chatId.m_id;
      ++this->m_memberCount;
      Com_Printf(14, "[Chat] %s: Successfully added member %s (id: %zu) to chat %zu\n", "OnlineChat::AddMemberToChat", gamerTag, memberId, m_id);
      m_memberJoinedCallback = this->m_memberJoinedCallback;
      if ( m_memberJoinedCallback )
        m_memberJoinedCallback(this->m_controllerIndex, &this->m_chatId, &this->m_chatType, memberId);
      LUI_Social_SendMemberAddedEvent(this->m_controllerIndex, this->m_chatId, memberId, gamerTag);
    }
    else
    {
      m_memberCache = this->m_memberCache;
      while ( m_memberCache->id != memberId )
      {
        ++v9;
        ++m_memberCache;
        if ( v9 >= (int)m_memberCount )
          goto LABEL_19;
      }
      Com_PrintError(14, "[Chat] %s: We already have member %zu in chat %zu\n", "OnlineChat::AddMemberToChat", memberId, this->m_chatId.m_id);
    }
  }
  else
  {
    LODWORD(v14) = 200;
    Com_PrintError(14, "[Chat] %s: Couldn't add member %zu in chat %zu because we have too many already (max %i)\n", "OnlineChat::AddMemberToChat", memberId, this->m_chatId.m_id, v14);
  }
}

/*
==============
OnlineChat::AddMessage
==============
*/
void OnlineChat::AddMessage(OnlineChat *this, OnlineChatMessage *const messageHandle)
{
  int v4; 
  int m_nextMessageIndex; 

  v4 = Sys_Milliseconds();
  m_nextMessageIndex = this->m_nextMessageIndex;
  this->m_lastReceivedMessageTime = v4;
  this->m_messageHandleCache[m_nextMessageIndex % 200] = messageHandle;
  ++this->m_nextMessageIndex;
}

/*
==============
OnlineChat::AddMessageToChat
==============
*/
OnlineChatMessage *OnlineChat::AddMessageToChat(OnlineChat *this, const unsigned __int64 fromId, const unsigned __int64 toId, const char *fromGamerTag, const char *message, OnlineChatMessage::State messageState)
{
  OnlineChatType m_chatType; 
  bool v8; 
  OnlineChatType v12; 
  int m_memberCount; 
  int v15; 
  OnlineChatMemberInfo *m_memberCache; 
  unsigned int v17; 
  unsigned int v18; 
  __int64 v19; 
  __int64 v20; 
  OnlineChatMessage *v21; 
  unsigned int m_receivedTime; 
  __int64 v23; 
  unsigned int v24; 
  OnlineChat *m_chat; 
  OnlineChatManager *v26; 
  bool shouldFilter; 
  int v28; 
  int m_nextMessageIndex; 
  const XUID *v30; 
  Online_BlockList *Instance; 
  const XUID *v32; 
  XUID v33; 
  XUID result; 

  m_chatType = this->m_chatType;
  v8 = 0;
  if ( !GamerProfile_GetProfileSettings(this->m_controllerIndex)->config.textChatEnabled )
  {
    if ( m_chatType == COUNT || (unsigned int)m_chatType <= DODGE )
    {
      if ( SEH_GetCurrentLanguage() == 17 )
        v8 = m_chatType == COUNT;
    }
    else
    {
      v8 = 1;
    }
  }
  v12 = this->m_chatType;
  if ( v8 )
  {
    Com_Printf(14, "[Chat] %s: Ignoring message from channel type %i because the chat is disabled\n", "OnlineChat::AddMessageToChat", (unsigned int)v12);
    return 0i64;
  }
  if ( v12 )
  {
    m_memberCount = this->m_memberCount;
    v15 = 0;
    if ( m_memberCount <= 0 )
    {
LABEL_14:
      Com_PrintError(14, "[Chat] %s: Invalid chat member id %zu\n", "OnlineChat::IsMemberTextMuted", fromId);
    }
    else
    {
      m_memberCache = this->m_memberCache;
      while ( m_memberCache->id != fromId )
      {
        ++v15;
        ++m_memberCache;
        if ( v15 >= m_memberCount )
          goto LABEL_14;
      }
      v30 = XUID::FromUInt64(&result, fromId);
      if ( !OnlineChatManager::CanCommunicateWithUser(this->m_controllerIndex, (const OnlineChatType)this->m_chatType, (const XUID)v30->m_id) || (Instance = Online_BlockList::GetInstance(), v32 = XUID::FromUInt64(&v33, fromId), Online_BlockList::IsBlocked(Instance, this->m_controllerIndex, (const XUID)v32->m_id)) || m_memberCache->isTextMuted )
      {
        Com_Printf(14, "[Chat] %s: Ignoring message from member %zu because the player is text muted\n", "OnlineChat::AddMessageToChat", fromId);
        return 0i64;
      }
    }
  }
  v17 = 0;
  v18 = 0;
  v19 = 0i64;
  v20 = 0i64;
  while ( 1 )
  {
    v21 = &s_onlineChatMessagePool.pool[v20];
    if ( !v21->m_chat )
      break;
    m_receivedTime = s_onlineChatMessagePool.pool[v19].m_receivedTime;
    v23 = v20;
    if ( m_receivedTime <= v21->m_receivedTime )
      v23 = v19;
    v19 = v23;
    v24 = v18;
    if ( m_receivedTime <= v21->m_receivedTime )
      v24 = v17;
    ++v18;
    ++v20;
    v17 = v24;
    if ( v18 >= 0xC8 )
    {
      v21 = &s_onlineChatMessagePool.pool[v24];
      m_chat = v21->m_chat;
      if ( m_chat )
        m_chat->m_messageHandleCache[m_chat->m_firstMessageIndex++ % 200] = NULL;
      v21->m_fromId = 0i64;
      v21->m_toId = 0i64;
      *(_QWORD *)&v21->m_receivedTime = 0i64;
      v21->m_chat = NULL;
      v21->m_message[0] = 0;
      v21->m_fromGamerTag[0] = 0;
      break;
    }
  }
  if ( !v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_chat.cpp", 333, ASSERT_TYPE_ASSERT, "(newChatMessage)", (const char *)&queryFormat, "newChatMessage") )
    __debugbreak();
  v26 = OnlineChatManager::GetInstance();
  shouldFilter = OnlineChatManager::ShouldFilterProfanity(v26, this->m_controllerIndex);
  OnlineChatMessage::Set(v21, fromId, toId, fromGamerTag, message, messageState, this, shouldFilter);
  v28 = Sys_Milliseconds();
  m_nextMessageIndex = this->m_nextMessageIndex;
  this->m_lastReceivedMessageTime = v28;
  this->m_messageHandleCache[m_nextMessageIndex % 200] = v21;
  ++this->m_nextMessageIndex;
  if ( !shouldFilter && this->m_chatType >= (COUNT|DODGE) )
    LUI_Social_SendReceivedMessageEvent(this->m_controllerIndex, &this->m_chatId, &this->m_chatType, v21);
  return v21;
}

/*
==============
OnlineChatMessage::BeginFilterStringTask
==============
*/
void OnlineChatMessage::BeginFilterStringTask(OnlineChatMessage *this, ProfanityAsyncTaskData *taskData)
{
  int m_controllerIndex; 
  DWServicesAccess *Instance; 
  DWTitleUtilities *TitleUtilities; 
  TaskCreateRequest *v7; 
  bdRemoteTask *v8; 
  TaskManager *v9; 
  OnlineChat *m_chat; 
  int v11; 
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  TaskCreateResult pTaskCreateResult; 
  TaskCreateRequest pTaskCreateRequest; 
  OnlineChatType chatType; 
  bdReference<bdRemoteTask> result; 
  OnlineChatId chatId; 

  this->m_profanityFilterState = FILTERING;
  taskData->messageRef = this;
  bdSanitizeStringBase::reset(&taskData->sanitizeStringResponse);
  m_controllerIndex = this->m_chat->m_controllerIndex;
  *(_QWORD *)&pTaskCreateRequest.m_controllerIndex = -1i64;
  memset(&pTaskCreateRequest.m_appData, 0, 48);
  pTaskCreateRequest.m_cancelTaskOnSignoutEvent = 1;
  pTaskCreateRequest.m_timeoutInSeconds = 0;
  pTaskCreateResult.m_localTaskId = 0;
  pTaskCreateResult.m_task = NULL;
  Instance = DWServicesAccess::GetInstance();
  TitleUtilities = DWServicesAccess::GetTitleUtilities(Instance, m_controllerIndex);
  v7 = (TaskCreateRequest *)DWTitleUtilities::sanitizeString(TitleUtilities, &result, this->m_message, &taskData->sanitizeStringResponse);
  if ( v7 != (TaskCreateRequest *)&pTaskCreateRequest.m_remoteDemonwareTask )
  {
    if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->~bdReferencable)(pTaskCreateRequest.m_remoteDemonwareTask.m_ptr, 1i64);
    v8 = *(bdRemoteTask **)&v7->m_controllerIndex;
    pTaskCreateRequest.m_remoteDemonwareTask.m_ptr = v8;
    if ( v8 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v8->m_refCount, 1u);
  }
  if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
  {
    if ( result.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
    result.m_ptr = NULL;
  }
  pTaskCreateRequest.m_appData = taskData;
  pTaskCreateRequest.m_onCompletionCallback = OnlineChatMessage::BeginFilterStringTaskComplete;
  pTaskCreateRequest.m_controllerIndex = m_controllerIndex;
  if ( !pTaskCreateRequest.m_remoteDemonwareTask.m_ptr || (v9 = TaskManager::GetInstance(), !TaskManager::CreateTask(v9, &pTaskCreateRequest, &pTaskCreateResult)) )
  {
    Com_PrintError(14, "[Chat] %s: Unable to filter string \"%s\"\n", "OnlineChatMessage::BeginFilterStringTask", this->m_message);
    if ( this == (OnlineChatMessage *)-52i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_chat.cpp", 134, ASSERT_TYPE_ASSERT, "(filteredString)", (const char *)&queryFormat, "filteredString", -2i64, *(_QWORD *)&pTaskCreateResult.m_localTaskId, pTaskCreateResult.m_task) )
      __debugbreak();
    this->m_profanityFilterState = FILTERED;
    m_chat = this->m_chat;
    v11 = m_chat->m_controllerIndex;
    chatType = m_chat->m_chatType;
    chatId.m_id = m_chat->m_chatId.m_id;
    LUI_Social_SendReceivedMessageEvent(v11, &chatId, &chatType, this);
  }
  pTaskCreateRequest.m_onCompletionCallback = NULL;
  pTaskCreateRequest.m_onUpdateCallback = NULL;
  pTaskCreateRequest.m_appSecondaryCallback = NULL;
  pTaskCreateRequest.m_timeoutInSeconds = 0;
  m_asyncInfo = pTaskCreateRequest.m_asyncInfo;
  if ( pTaskCreateRequest.m_asyncInfo )
  {
    pTaskCreateRequest.m_asyncInfo->__abi_Release(pTaskCreateRequest.m_asyncInfo);
    m_asyncInfo = NULL;
    pTaskCreateRequest.m_asyncInfo = NULL;
  }
  if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
    {
      if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
        ((void (__fastcall *)(bdRemoteTask *, __int64))pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->~bdReferencable)(pTaskCreateRequest.m_remoteDemonwareTask.m_ptr, 1i64);
      pTaskCreateRequest.m_remoteDemonwareTask.m_ptr = NULL;
    }
    m_asyncInfo = pTaskCreateRequest.m_asyncInfo;
  }
  if ( m_asyncInfo )
    m_asyncInfo->__abi_Release(m_asyncInfo);
}

/*
==============
OnlineChatMessage::BeginFilterStringTaskComplete
==============
*/
void OnlineChatMessage::BeginFilterStringTaskComplete(GenericTask *task, eTaskManagerTaskState state)
{
  char *m_appData; 
  bool v4; 
  OnlineChatMessage *v5; 
  const char *String; 

  m_appData = (char *)task->m_appData;
  if ( !*(_QWORD *)m_appData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_chat.cpp", 153, ASSERT_TYPE_ASSERT, "(taskData->messageRef)", (const char *)&queryFormat, "taskData->messageRef") )
    __debugbreak();
  v4 = state == TASKSTATE_SUCCESS;
  if ( state )
    Com_PrintError(14, "[Chat] %s: Unable to filter string \"%s\"\n", "OnlineChatMessage::BeginFilterStringTaskComplete", (const char *)(*(_QWORD *)m_appData + 52i64));
  v5 = *(OnlineChatMessage **)m_appData;
  String = bdSanitizeStringBase::getString((bdSanitizeStringBase *)(m_appData + 8));
  OnlineChatMessage::SetFilteredString(v5, v4, String);
  *(_QWORD *)m_appData = 0i64;
}

/*
==============
OnlineChatMessage::CheckProfanityFilterTasks
==============
*/
void OnlineChatMessage::CheckProfanityFilterTasks(void)
{
  int v0; 
  ProfanityAsyncTaskData *i; 
  unsigned int v2; 
  ProfanityAsyncTaskData *v3; 
  __int64 v4; 
  OnlineChatMessage *v5; 
  int v6; 
  ProfanityAsyncTaskData *j; 

  if ( s_messagesQueuedForFiltering )
  {
    v0 = 0;
    for ( i = s_profanityAsyncTaskData; i->messageRef; ++i )
    {
      if ( (unsigned int)++v0 >= 5 )
        return;
    }
    v2 = 0;
    v3 = &s_profanityAsyncTaskData[v0];
    v4 = 0i64;
    while ( 1 )
    {
      v5 = &s_onlineChatMessagePool.pool[v4];
      while ( v5->m_profanityFilterState != REQUIRES_FILTER )
      {
        ++v2;
        ++v4;
        ++v5;
        if ( v2 >= 0xC8 )
          goto LABEL_12;
      }
      OnlineChatMessage::BeginFilterStringTask(v5, v3);
LABEL_12:
      if ( v2 >= 0xC8 )
        break;
      v6 = 0;
      for ( j = s_profanityAsyncTaskData; j->messageRef; ++j )
      {
        if ( (unsigned int)++v6 >= 5 )
          return;
      }
      v3 = &s_profanityAsyncTaskData[v6];
    }
    s_messagesQueuedForFiltering = 0;
  }
}

/*
==============
OnlineChatMessage::Clear
==============
*/
void OnlineChatMessage::Clear(OnlineChatMessage *this)
{
  this->m_fromId = 0i64;
  this->m_toId = 0i64;
  *(_QWORD *)&this->m_receivedTime = 0i64;
  this->m_chat = NULL;
  this->m_message[0] = 0;
  this->m_fromGamerTag[0] = 0;
}

/*
==============
OnlineChatMessage::FilterStringAsync
==============
*/
void OnlineChatMessage::FilterStringAsync(OnlineChatMessage *this)
{
  ProfanityAsyncTaskData *v2; 
  unsigned int v3; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_chat.cpp", 198, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  this->m_profanityFilterState = REQUIRES_FILTER;
  v2 = s_profanityAsyncTaskData;
  v3 = 0;
  while ( v2->messageRef )
  {
    ++v3;
    ++v2;
    if ( v3 >= 5 )
    {
      s_messagesQueuedForFiltering = 1;
      return;
    }
  }
  OnlineChatMessage::BeginFilterStringTask(this, &s_profanityAsyncTaskData[v3]);
}

/*
==============
OnlineChat::GetMemberFromChatById
==============
*/
OnlineChatMemberInfo *OnlineChat::GetMemberFromChatById(OnlineChat *this, const unsigned __int64 id)
{
  __int64 m_memberCount; 
  __int64 v3; 
  OnlineChatMemberInfo *result; 

  m_memberCount = this->m_memberCount;
  if ( m_memberCount <= 0 )
    return 0i64;
  v3 = 0i64;
  for ( result = this->m_memberCache; result->id != id; ++result )
  {
    if ( ++v3 >= m_memberCount )
      return 0i64;
  }
  return result;
}

/*
==============
OnlineChat::GetMemberFromChatByName
==============
*/
OnlineChatMemberInfo *OnlineChat::GetMemberFromChatByName(OnlineChat *this, const char *name)
{
  int i; 
  unsigned __int64 v5; 
  __int64 v6; 
  const char *v7; 
  OnlineChatMemberInfo *v8; 
  char v9; 
  __int64 v10; 
  char v11; 

  for ( i = 0; i < this->m_memberCount; ++i )
  {
    v5 = 56i64 * i;
    v6 = 0x7FFFFFFFi64;
    v7 = name;
    v8 = &this->m_memberCache[v5 / 0x38];
    if ( (OnlineChat *)((char *)this + v5) == (OnlineChat *)-48i64 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, (AssertType)(v5 + (_DWORD)this + 49), "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
      __debugbreak();
    while ( 1 )
    {
      v9 = v7[(char *)v8 - name + 8];
      v10 = v6;
      v11 = *v7++;
      --v6;
      if ( !v10 )
        return v8;
      if ( v9 != v11 )
        break;
      if ( !v9 )
        return v8;
    }
  }
  return 0i64;
}

/*
==============
OnlineChat::GetMembersListFromChat
==============
*/
void OnlineChat::GetMembersListFromChat(OnlineChat *this, const OnlineChatMemberInfo **members, int *memberSize)
{
  *members = this->m_memberCache;
  *memberSize = this->m_memberCount;
}

/*
==============
OnlineChat::GetMessageFromIndex
==============
*/
bool OnlineChat::GetMessageFromIndex(OnlineChat *this, const int messageIndex, const OnlineChatMessage **message)
{
  int m_firstMessageIndex; 
  int *p_m_nextMessageIndex; 
  bool result; 
  int v10; 
  int v11; 

  m_firstMessageIndex = this->m_firstMessageIndex;
  p_m_nextMessageIndex = &this->m_nextMessageIndex;
  if ( m_firstMessageIndex > messageIndex || messageIndex > *p_m_nextMessageIndex - 1 )
  {
    v11 = *p_m_nextMessageIndex - 1;
    v10 = m_firstMessageIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_chat.cpp", 551, ASSERT_TYPE_ASSERT, "( m_firstMessageIndex ) <= ( messageIndex ) && ( messageIndex ) <= ( m_nextMessageIndex - 1 )", "messageIndex not in [m_firstMessageIndex, m_nextMessageIndex - 1]\n\t%i not in [%i, %i]", messageIndex, v10, v11) )
      __debugbreak();
  }
  if ( messageIndex < this->m_firstMessageIndex || messageIndex >= *p_m_nextMessageIndex )
    return 0;
  result = 1;
  *message = this->m_messageHandleCache[messageIndex % 200];
  return result;
}

/*
==============
OnlineChat::GetOnlineChatMessageFromPool
==============
*/
OnlineChatMessage *OnlineChat::GetOnlineChatMessageFromPool()
{
  unsigned int v0; 
  unsigned int v1; 
  __int64 v2; 
  __int64 i; 
  OnlineChatMessage *result; 
  unsigned int m_receivedTime; 
  unsigned int v6; 
  __int64 v7; 
  unsigned int v8; 
  OnlineChatMessage *v9; 
  OnlineChat *m_chat; 

  v0 = 0;
  v1 = 0;
  v2 = 0i64;
  for ( i = 0i64; ; ++i )
  {
    result = &s_onlineChatMessagePool.pool[i];
    if ( !result->m_chat )
      break;
    m_receivedTime = s_onlineChatMessagePool.pool[v2].m_receivedTime;
    v6 = result->m_receivedTime;
    v7 = i;
    if ( m_receivedTime <= v6 )
      v7 = v2;
    v2 = v7;
    v8 = v1;
    if ( m_receivedTime <= v6 )
      v8 = v0;
    ++v1;
    v0 = v8;
    if ( v1 >= 0xC8 )
    {
      v9 = &s_onlineChatMessagePool.pool[v8];
      m_chat = v9->m_chat;
      if ( m_chat )
        m_chat->m_messageHandleCache[m_chat->m_firstMessageIndex++ % 200] = NULL;
      v9->m_fromId = 0i64;
      result = &s_onlineChatMessagePool.pool[v8];
      v9->m_toId = 0i64;
      *(_QWORD *)&v9->m_receivedTime = 0i64;
      v9->m_chat = NULL;
      v9->m_message[0] = 0;
      v9->m_fromGamerTag[0] = 0;
      return result;
    }
  }
  return result;
}

/*
==============
OnlineChat::Init
==============
*/
void OnlineChat::Init(OnlineChat *this, const int controllerIndex, const OnlineChatId chatId, const OnlineChatType chatType)
{
  if ( this->m_state && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_chat.cpp", 272, ASSERT_TYPE_ASSERT, "(m_state == OnlineChatState::INACTIVE)", (const char *)&queryFormat, "m_state == OnlineChatState::INACTIVE") )
    __debugbreak();
  if ( this->m_state == INACTIVE )
  {
    this->m_state = ACTIVE;
    this->m_chatId = chatId;
    this->m_chatType = chatType;
    this->m_controllerIndex = controllerIndex;
  }
}

/*
==============
OnlineChat::IsMemberTextMuted
==============
*/
char OnlineChat::IsMemberTextMuted(OnlineChat *this, const unsigned __int64 memberId)
{
  __int64 m_memberCount; 
  __int64 v5; 
  OnlineChatMemberInfo *m_memberCache; 
  const XUID *v8; 
  Online_BlockList *Instance; 
  const XUID *v10; 
  XUID result; 

  m_memberCount = this->m_memberCount;
  if ( m_memberCount <= 0 )
  {
LABEL_5:
    Com_PrintError(14, "[Chat] %s: Invalid chat member id %zu\n", "OnlineChat::IsMemberTextMuted", memberId);
    return 0;
  }
  else
  {
    v5 = 0i64;
    m_memberCache = this->m_memberCache;
    while ( m_memberCache->id != memberId )
    {
      ++v5;
      ++m_memberCache;
      if ( v5 >= m_memberCount )
        goto LABEL_5;
    }
    v8 = XUID::FromUInt64(&result, memberId);
    if ( !OnlineChatManager::CanCommunicateWithUser(this->m_controllerIndex, (const OnlineChatType)this->m_chatType, (const XUID)v8->m_id) )
      return 1;
    Instance = Online_BlockList::GetInstance();
    v10 = XUID::FromUInt64(&result, memberId);
    return Online_BlockList::IsBlocked(Instance, this->m_controllerIndex, (const XUID)v10->m_id) || m_memberCache->isTextMuted;
  }
}

/*
==============
OnlineChat::Print
==============
*/
void OnlineChat::Print(OnlineChat *this)
{
  int v2; 
  bool *p_isTyping; 
  const char *v4; 
  __int64 v5; 

  if ( this->m_state )
  {
    Com_Printf(14, "ChatType: %i\n", (unsigned int)this->m_chatType);
    Com_Printf(14, "State: %i\n", (unsigned int)this->m_state);
    Com_Printf(14, "LastReceivedMessageTime: %i\n", (unsigned int)this->m_lastReceivedMessageTime);
    Com_Printf(14, "ChatId.id: %zu\n", this->m_chatId.m_id);
    Com_Printf(14, "Members (%i):\n", (unsigned int)this->m_memberCount);
    v2 = 0;
    if ( this->m_memberCount > 0 )
    {
      p_isTyping = &this->m_memberCache[0].isTyping;
      do
      {
        v4 = "false";
        if ( *p_isTyping )
          v4 = "true";
        LODWORD(v5) = *(_DWORD *)(p_isTyping - 5);
        Com_Printf(14, "\t[%i] %s (%zu), isTyping: %s, lastAcknowledgeMessageTimestamp: %i\n", (unsigned int)v2++, p_isTyping - 41, *(_QWORD *)(p_isTyping - 49), v4, v5);
        p_isTyping += 56;
      }
      while ( v2 < this->m_memberCount );
    }
  }
}

/*
==============
OnlineChat::PromoteToHost
==============
*/
void OnlineChat::PromoteToHost(OnlineChat *this, const unsigned __int64 memberId)
{
  __int64 m_memberCount; 
  OnlineChatMemberInfo *m_memberCache; 
  __int64 v5; 
  OnlineChatMemberInfo *v6; 
  bool *p_isHost; 
  int v8; 
  __int64 v9; 
  bool isHost; 

  m_memberCount = this->m_memberCount;
  if ( m_memberCount > 0 )
  {
    m_memberCache = this->m_memberCache;
    v5 = 0i64;
    while ( m_memberCache->id != memberId )
    {
      ++v5;
      ++m_memberCache;
      if ( v5 >= m_memberCount )
        return;
    }
    v6 = NULL;
    p_isHost = &this->m_memberCache[0].isHost;
    v8 = 0;
    v9 = 0i64;
    while ( !*p_isHost )
    {
      ++v8;
      ++v9;
      p_isHost += 56;
      if ( v9 >= m_memberCount )
        goto LABEL_11;
    }
    v6 = &this->m_memberCache[v8];
LABEL_11:
    m_memberCache->isHost = 1;
    isHost = m_memberCache->isHost;
    if ( v6 )
      isHost = 0;
    m_memberCache->isHost = isHost;
  }
}

/*
==============
OnlineChat::RegisterMemberAddedCallback
==============
*/
void OnlineChat::RegisterMemberAddedCallback(OnlineChat *this, void (*callback)(const int, const OnlineChatId *, const OnlineChatType *, const unsigned __int64))
{
  if ( !callback && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_chat.cpp", 571, ASSERT_TYPE_ASSERT, "(callback)", (const char *)&queryFormat, "callback") )
    __debugbreak();
  if ( this->m_memberJoinedCallback && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_chat.cpp", 572, ASSERT_TYPE_ASSERT, "(!m_memberJoinedCallback)", (const char *)&queryFormat, "!m_memberJoinedCallback") )
    __debugbreak();
  this->m_memberJoinedCallback = callback;
}

/*
==============
OnlineChat::RemoveMemberFromChat
==============
*/
void OnlineChat::RemoveMemberFromChat(OnlineChat *this, const unsigned __int64 memberId)
{
  __int64 m_memberCount; 
  OnlineChatMemberInfo *v5; 
  OnlineChatMemberInfo *m_memberCache; 
  char *v7; 
  int v8; 
  unsigned __int64 m_id; 

  if ( this->m_state != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_chat.cpp", 413, ASSERT_TYPE_ASSERT, "(m_state == OnlineChatState::JOINED)", (const char *)&queryFormat, "m_state == OnlineChatState::JOINED") )
    __debugbreak();
  if ( this->m_memberCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_chat.cpp", 414, ASSERT_TYPE_ASSERT, "(m_memberCount > 0)", (const char *)&queryFormat, "m_memberCount > 0") )
    __debugbreak();
  if ( this->m_chatType == (COUNT|DODGE|0x4) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_chat.cpp", 416, ASSERT_TYPE_ASSERT, "(m_chatType != OnlineChatType::PRIVATE_CHAT)", (const char *)&queryFormat, "m_chatType != OnlineChatType::PRIVATE_CHAT") )
    __debugbreak();
  m_memberCount = this->m_memberCount;
  if ( (int)m_memberCount > 0 )
  {
    v5 = NULL;
    m_memberCache = this->m_memberCache;
    v7 = (char *)this + 56 * m_memberCount - 16;
    v8 = 0;
    while ( m_memberCache->id != memberId )
    {
      ++v8;
      ++m_memberCache;
      if ( v8 >= (int)m_memberCount )
        goto LABEL_17;
    }
    v5 = m_memberCache;
LABEL_17:
    if ( v5 )
    {
      *(__m256i *)&v5->id = *(__m256i *)v7;
      *(_OWORD *)&v5->gamerTag[24] = *((_OWORD *)v7 + 2);
      *(double *)&v5->isHost = *((double *)v7 + 6);
      m_id = this->m_chatId.m_id;
      --this->m_memberCount;
      Com_Printf(14, "[Chat] %s: Successfully removed member %zu from chat %zu\n", "OnlineChat::RemoveMemberFromChat", memberId, m_id);
      LUI_Social_SendMemberRemovedEvent(this->m_controllerIndex, this->m_chatId, memberId);
    }
    else
    {
      Com_PrintError(14, "[Chat] %s: Couldn't find member %zu in chat %zu\n", "OnlineChat::RemoveMemberFromChat", memberId, this->m_chatId.m_id);
    }
  }
  else
  {
    Com_PrintError(14, "[Chat] %s: We don't have any players in our chat since m_memberCount is 0. Can't remove player %zu from chat %zu\n", "OnlineChat::RemoveMemberFromChat", memberId, this->m_chatId.m_id);
  }
}

/*
==============
OnlineChatMessage::Set
==============
*/
void OnlineChatMessage::Set(OnlineChatMessage *this, const unsigned __int64 fromId, const unsigned __int64 toId, const char *fromGamerTag, const char *message, int state, OnlineChat *chat, const bool shouldFilter)
{
  __time64_t v12; 
  ProfanityAsyncTaskData *v13; 
  unsigned int v14; 

  if ( !fromGamerTag && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_chat.cpp", 217, ASSERT_TYPE_ASSERT, "(fromGamerTag)", (const char *)&queryFormat, "fromGamerTag") )
    __debugbreak();
  if ( !message && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_chat.cpp", 218, ASSERT_TYPE_ASSERT, "(message)", (const char *)&queryFormat, "message") )
    __debugbreak();
  this->m_toId = toId;
  this->m_chat = chat;
  this->m_fromId = fromId;
  *(_DWORD *)this->m_state = state;
  v12 = _time64(NULL);
  if ( (v12 < 0 || (unsigned __int64)v12 > 0xFFFFFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned int __cdecl truncate_cast_impl<unsigned int,__int64>(__int64)", "unsigned", (unsigned int)v12, "signed", v12) )
    __debugbreak();
  this->m_receivedTime = v12;
  Core_strcpy(this->m_fromGamerTag, 0x24ui64, fromGamerTag);
  Core_strcpy(this->m_message, 0x1F4ui64, message);
  if ( shouldFilter && chat && chat->m_chatType >= (COUNT|DODGE) )
  {
    if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_chat.cpp", 198, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
      __debugbreak();
    this->m_profanityFilterState = REQUIRES_FILTER;
    v13 = s_profanityAsyncTaskData;
    v14 = 0;
    while ( v13->messageRef )
    {
      ++v14;
      ++v13;
      if ( v14 >= 5 )
      {
        s_messagesQueuedForFiltering = 1;
        return;
      }
    }
    OnlineChatMessage::BeginFilterStringTask(this, &s_profanityAsyncTaskData[v14]);
  }
  else
  {
    this->m_profanityFilterState = NOT_FILTERED;
  }
}

/*
==============
OnlineChatMessage::SetFilteredString
==============
*/
void OnlineChatMessage::SetFilteredString(OnlineChatMessage *this, const bool success, const char *filteredString)
{
  OnlineChat *m_chat; 
  unsigned __int64 m_id; 
  OnlineChatId chatId; 
  OnlineChatType chatType; 

  if ( !filteredString && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_chat.cpp", 134, ASSERT_TYPE_ASSERT, "(filteredString)", (const char *)&queryFormat, "filteredString") )
    __debugbreak();
  this->m_profanityFilterState = FILTERED;
  if ( success )
    Core_strcpy(this->m_message, 0x1F4ui64, filteredString);
  m_chat = this->m_chat;
  chatType = m_chat->m_chatType;
  m_id = m_chat->m_chatId.m_id;
  LODWORD(m_chat) = m_chat->m_controllerIndex;
  chatId.m_id = m_id;
  LUI_Social_SendReceivedMessageEvent((const int)m_chat, &chatId, &chatType, this);
}

/*
==============
OnlineChatMessage::SetState
==============
*/
void OnlineChatMessage::SetState(OnlineChatMessage *this, unsigned int state)
{
  char *fmt; 

  if ( !this->m_message[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_chat.cpp", 252, ASSERT_TYPE_ASSERT, "(m_message[0])", (const char *)&queryFormat, "m_message[0]") )
    __debugbreak();
  LODWORD(fmt) = *(_DWORD *)this->m_state;
  Com_Printf(14, "[Chat] Setting Online Chat Message \"%s\" State to %i (was %i)\n", this->m_message, state, fmt);
  *(_DWORD *)this->m_state = state;
}

/*
==============
OnlineChat::UnInit
==============
*/
void OnlineChat::UnInit(OnlineChat *this)
{
  bool *p_isTyping; 
  unsigned int v2; 

  p_isTyping = &this->m_memberCache[0].isTyping;
  v2 = 0;
  do
  {
    ++v2;
    *(p_isTyping - 41) = 0;
    *(_WORD *)p_isTyping = 0;
    *(_DWORD *)(p_isTyping - 5) = 0;
    *(_QWORD *)(p_isTyping - 49) = 0i64;
    *(p_isTyping - 1) = 0;
    p_isTyping += 56;
  }
  while ( v2 < 0xC8 );
  Com_Printf(14, "[Chat] %s: Cleared chat data for chat %zu\n", "OnlineChat::UnInit", this->m_chatId.m_id);
  *(_QWORD *)&this->m_chatType = 3i64;
  *(_QWORD *)&this->m_nextMessageIndex = 0i64;
  *(_QWORD *)&this->m_memberCount = 0i64;
  this->m_chatId.m_id = 0i64;
  this->m_memberJoinedCallback = NULL;
  this->m_controllerIndex = 0;
}

