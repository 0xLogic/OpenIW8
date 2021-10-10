/*
==============
LUI_Social_SendChannelAddedEvent
==============
*/

void __fastcall LUI_Social_SendChannelAddedEvent(const int controllerIndex, const OnlineChatType chatType, const OnlineChatId chatId, const bool initiatedChat)
{
  ?LUI_Social_SendChannelAddedEvent@@YAXHW4OnlineChatType@@UOnlineChatId@@_N@Z(controllerIndex, chatType, chatId, initiatedChat);
}

/*
==============
LUI_Social_SendMemberAddedEvent
==============
*/

void __fastcall LUI_Social_SendMemberAddedEvent(const int controllerIndex, const OnlineChatId chatId, const unsigned __int64 memberId, const char *gamertag)
{
  ?LUI_Social_SendMemberAddedEvent@@YAXHUOnlineChatId@@_KPEBD@Z(controllerIndex, chatId, memberId, gamertag);
}

/*
==============
LUI_Social_SendGameChangePresence
==============
*/

void __fastcall LUI_Social_SendGameChangePresence(const int controllerIndex, const unsigned __int64 platformId, unsigned __int64 clientProgramID, const char *gamerTag)
{
  ?LUI_Social_SendGameChangePresence@@YAXH_K_KPEBD@Z(controllerIndex, platformId, clientProgramID, gamerTag);
}

/*
==============
LUI_Social_SendThrottleSendMessageEvent
==============
*/

void __fastcall LUI_Social_SendThrottleSendMessageEvent(const int controllerIndex)
{
  ?LUI_Social_SendThrottleSendMessageEvent@@YAXH@Z(controllerIndex);
}

/*
==============
LUI_Social_SendIsTypingEvent
==============
*/

void __fastcall LUI_Social_SendIsTypingEvent(const int controllerIndex, const OnlineChatId chatId, const char *gamertag, const bool isTyping)
{
  ?LUI_Social_SendIsTypingEvent@@YAXHUOnlineChatId@@PEBD_N@Z(controllerIndex, chatId, gamertag, isTyping);
}

/*
==============
LUI_CoD_RegisterClanFunctions
==============
*/

void __fastcall LUI_CoD_RegisterClanFunctions(lua_State *luaVM)
{
  ?LUI_CoD_RegisterClanFunctions@@YAXPEAUlua_State@@@Z(luaVM);
}

/*
==============
LUI_Social_SendChannelRemovedEvent
==============
*/

void __fastcall LUI_Social_SendChannelRemovedEvent(const int controllerIndex, const OnlineChatType chatType, const OnlineChatId chatId)
{
  ?LUI_Social_SendChannelRemovedEvent@@YAXHW4OnlineChatType@@UOnlineChatId@@@Z(controllerIndex, chatType, chatId);
}

/*
==============
LUI_Social_SendKoreaOverIndulgenceMessageEvent
==============
*/

void __fastcall LUI_Social_SendKoreaOverIndulgenceMessageEvent(int controllerIndex, int warningHour)
{
  ?LUI_Social_SendKoreaOverIndulgenceMessageEvent@@YAXHH@Z(controllerIndex, warningHour);
}

/*
==============
LUI_Social_SendMemberRemovedEvent
==============
*/

void __fastcall LUI_Social_SendMemberRemovedEvent(const int controllerIndex, const OnlineChatId chatId, const unsigned __int64 memberId)
{
  ?LUI_Social_SendMemberRemovedEvent@@YAXHUOnlineChatId@@_K@Z(controllerIndex, chatId, memberId);
}

/*
==============
LUI_CoD_RegisterSocialFunctions
==============
*/

void __fastcall LUI_CoD_RegisterSocialFunctions(lua_State *luaVM)
{
  ?LUI_CoD_RegisterSocialFunctions@@YAXPEAUlua_State@@@Z(luaVM);
}

/*
==============
LUI_Social_SendReceivedMessageEvent
==============
*/

void __fastcall LUI_Social_SendReceivedMessageEvent(const int controllerIndex, const OnlineChatId *chatId, const OnlineChatType *chatType, const OnlineChatMessage *message)
{
  ?LUI_Social_SendReceivedMessageEvent@@YAXHAEBUOnlineChatId@@AEBW4OnlineChatType@@PEBVOnlineChatMessage@@@Z(controllerIndex, chatId, chatType, message);
}

/*
==============
LUI_LuaCall_Social_SendSystemEventToChat
==============
*/
__int64 LUI_LuaCall_Social_SendSystemEventToChat(lua_State *const luaVM)
{
  int v2; 
  int v3; 
  const char *v4; 
  OnlineChatManager *Instance; 
  unsigned int v6; 

  v2 = j_lua_gettop(luaVM);
  if ( v2 != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isstring(luaVM, v2) )
    j_luaL_error(luaVM, "USAGE: Social.SendSystemEventToChat( <controllerIndex>, <message> )");
  if ( j_lua_isnumber(luaVM, 1) && j_lua_isstring(luaVM, 2) )
  {
    v3 = lui_tointeger32(luaVM, 1);
    v4 = j_lua_tolstring(luaVM, 2, NULL);
    Instance = OnlineChatManager::GetInstance();
    OnlineChatManager::SendSystemEvent(Instance, v3, v4);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v6);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_Social_SendSystemErrorToChat
==============
*/
__int64 LUI_LuaCall_Social_SendSystemErrorToChat(lua_State *const luaVM)
{
  int v2; 
  int v3; 
  const char *v4; 
  OnlineChatManager *Instance; 
  unsigned int v6; 

  v2 = j_lua_gettop(luaVM);
  if ( v2 != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isstring(luaVM, v2) )
    j_luaL_error(luaVM, "USAGE: Social.SendSystemErrorToChat( <controllerIndex>, <message> )");
  if ( j_lua_isnumber(luaVM, 1) && j_lua_isstring(luaVM, 2) )
  {
    v3 = lui_tointeger32(luaVM, 1);
    v4 = j_lua_tolstring(luaVM, 2, NULL);
    Instance = OnlineChatManager::GetInstance();
    OnlineChatManager::SendSystemError(Instance, v3, v4);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v6);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_Social_SendPlayerEventToChat
==============
*/
__int64 LUI_LuaCall_Social_SendPlayerEventToChat(lua_State *const luaVM)
{
  int v3; 
  int v4; 
  const char *v5; 
  unsigned __int64 v6; 
  __int128 v7; 
  unsigned __int64 v9; 
  const char *v10; 
  OnlineChatManager *Instance; 
  unsigned int v12; 
  char dest[8]; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 
  int v18; 

  v3 = j_lua_gettop(luaVM);
  if ( v3 < 3 || !j_lua_isnumber(luaVM, 1) || !j_lua_isstring(luaVM, 2) || !j_lua_isnumber(luaVM, 3) )
    j_luaL_error(luaVM, "USAGE: Social.SendPlayerEventToChat( <controllerIndex>, <message>, <xuid> )");
  if ( j_lua_isnumber(luaVM, 1) && j_lua_isstring(luaVM, 2) && j_lua_isnumber(luaVM, 3) )
  {
    v4 = lui_tointeger32(luaVM, 1);
    v5 = j_lua_tolstring(luaVM, 2, NULL);
    *(double *)&_XMM0 = j_lua_tonumber(luaVM, 3);
    v6 = 0i64;
    if ( *(double *)&_XMM0 >= 9.223372036854776e18 )
    {
      *((_QWORD *)&v7 + 1) = *((_QWORD *)&_XMM0 + 1);
      *(double *)&v7 = *(double *)&_XMM0 - 9.223372036854776e18;
      _XMM0 = v7;
      if ( *(double *)&v7 < 9.223372036854776e18 )
        v6 = 0x8000000000000000ui64;
    }
    __asm { vcvttsd2si rdi, xmm0 }
    v9 = v6 + _RDI;
    *(_QWORD *)dest = 0i64;
    v15 = 0i64;
    v16 = 0i64;
    v17 = 0i64;
    v18 = 0;
    if ( v3 > 3 )
    {
      v10 = j_lua_tolstring(luaVM, 4, NULL);
      Core_strcpy(dest, 0x24ui64, v10);
    }
    Instance = OnlineChatManager::GetInstance();
    OnlineChatManager::SendPlayerEvent(Instance, v4, v5, v9, dest);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v12 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v12);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_Social_IsChatBattleNetWhisper
==============
*/
__int64 LUI_LuaCall_Social_IsChatBattleNetWhisper(lua_State *const luaVM)
{
  unsigned int v2; 

  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v2);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_Social_GetCurrentTimeString
==============
*/
__int64 LUI_LuaCall_Social_GetCurrentTimeString(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 
  int tm_min; 
  qtime_s qtime; 
  char dest[16]; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: Social.GetCurrentTimeString()");
  if ( j_lua_gettop(luaVM) )
  {
    v2 = 0;
  }
  else
  {
    Com_RealTime(0, &qtime);
    tm_min = qtime.tm_min;
    Com_sprintf(dest, 0xAui64, "%d:%02d", (unsigned int)qtime.tm_hour, tm_min);
    j_lua_pushstring(luaVM, dest);
    v2 = 1;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_Social_SendMessageToChat
==============
*/
__int64 LUI_LuaCall_Social_SendMessageToChat(lua_State *const luaVM)
{
  int v2; 
  int v3; 
  const char *message; 
  OnlineChatManager *Instance; 
  unsigned int v6; 
  OnlineChatType chatType; 
  OnlineChatId outChatId; 

  if ( j_lua_gettop(luaVM) != 4 || !j_lua_isnumber(luaVM, 1) || j_lua_type(luaVM, 2) != 5 || !j_lua_isnumber(luaVM, 3) || !j_lua_isstring(luaVM, 4) )
    j_luaL_error(luaVM, "USAGE: Social.SendMessageToChat( <controllerIndex>, <chatID>, <chatType>, <message> )");
  if ( j_lua_gettop(luaVM) == 4 && j_lua_isnumber(luaVM, 1) && j_lua_type(luaVM, 2) == 5 && j_lua_isnumber(luaVM, 3) && j_lua_isstring(luaVM, 4) )
  {
    v2 = lui_tointeger32(luaVM, 1);
    outChatId.m_id = 0i64;
    v3 = v2;
    LUI_Social_GetChatID(2, &outChatId);
    chatType = (unsigned int)j_lua_tointeger(luaVM, 3);
    message = j_lua_tolstring(luaVM, 4, NULL);
    Instance = OnlineChatManager::GetInstance();
    OnlineChatManager::SendMessageToChat(Instance, v3, &outChatId, &chatType, message);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v6);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_Social_GetJoinedChats
==============
*/
__int64 LUI_LuaCall_Social_GetJoinedChats(lua_State *const luaVM)
{
  OnlineChatId *v2; 
  __int64 v3; 
  OnlineChatManager *Instance; 
  OnlineChatType *v5; 
  unsigned int v8; 
  unsigned int v9; 
  int narray[4]; 
  OnlineChatType chatTypesBuffer[20]; 
  OnlineChatId chatIdsBuffer[18]; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: Social.GetJoinedChats()");
  if ( j_lua_gettop(luaVM) )
    goto LABEL_11;
  v2 = chatIdsBuffer;
  v3 = 18i64;
  do
  {
    OnlineChatId::OnlineChatId(v2++);
    --v3;
  }
  while ( v3 );
  Instance = OnlineChatManager::GetInstance();
  if ( !OnlineChatManager::GetJoinedChats(Instance, chatIdsBuffer, chatTypesBuffer, 18, narray) )
  {
LABEL_11:
    v8 = 0;
  }
  else
  {
    j_lua_createtable(luaVM, narray[0], 0);
    if ( narray[0] > 0 )
    {
      v5 = chatTypesBuffer;
      do
      {
        _XMM1 = 0i64;
        __asm { vcvtsi2sd xmm1, xmm1, ebx; n }
        j_lua_pushnumber(LUI_luaVM, *(long double *)&_XMM1);
        j_lua_createtable(luaVM, 0, 3);
        LUI_Social_SetChatID(chatIdsBuffer[(int)v3]);
        LUI_SetTableInt("chatType", *(int *)v5, LUI_luaVM);
        j_lua_settable(LUI_luaVM, -3);
        ++v5;
        LODWORD(v3) = v3 + 1;
      }
      while ( (int)v3 < narray[0] );
    }
    v8 = 1;
  }
  if ( (int)v8 > j_lua_gettop(luaVM) )
  {
    v9 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v8, v9);
  }
  return v8;
}

/*
==============
LUI_LuaCall_Social_GetMembersListFromChat
==============
*/
__int64 LUI_LuaCall_Social_GetMembersListFromChat(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_Social_GetMembersListFromChat_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_Social_GetMessagesFromChat
==============
*/
__int64 LUI_LuaCall_Social_GetMessagesFromChat(lua_State *const luaVM)
{
  unsigned int v2; 
  int v3; 
  OnlineChatManager *v4; 
  int i; 
  OnlineChatManager *Instance; 
  unsigned int v9; 
  OnlineChatId outChatId; 
  OnlineChatMessage *message; 
  OnlineChatType chatType; 
  int narray; 
  int firstIndex; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 2 || j_lua_type(luaVM, 1) != 5 || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Social.GetMessagesFromChat( <chatID>, <chatType> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_type(luaVM, 1) == 5 && j_lua_isnumber(luaVM, 2) && (outChatId.m_id = 0i64, LUI_Social_GetChatID(1, &outChatId), chatType = (unsigned int)j_lua_tointeger(luaVM, 2), v3 = 1, v4 = OnlineChatManager::GetInstance(), OnlineChatManager::GetMessageIndicesFromChat(v4, &outChatId, &chatType, &firstIndex, &narray)) )
  {
    j_lua_createtable(luaVM, narray, 0);
    for ( i = firstIndex; i < firstIndex + narray; ++i )
    {
      message = NULL;
      Instance = OnlineChatManager::GetInstance();
      if ( OnlineChatManager::GetMessageFromIndex(Instance, &outChatId, &chatType, i, (const OnlineChatMessage **)&message) )
      {
        _XMM1 = 0i64;
        __asm { vcvtsi2sd xmm1, xmm1, ebp; n }
        j_lua_pushnumber(LUI_luaVM, *(long double *)&_XMM1);
        ++v3;
        j_lua_createtable(luaVM, 0, 5);
        LUI_Social_SetMessageData(&outChatId, &chatType, message);
        j_lua_settable(LUI_luaVM, -3);
      }
    }
  }
  else
  {
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v9 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v9);
  }
  return v2;
}

/*
==============
LUI_LuaCall_Social_GetMessagesFromChatType
==============
*/
__int64 LUI_LuaCall_Social_GetMessagesFromChatType(lua_State *const luaVM)
{
  unsigned int v2; 
  int v3; 
  OnlineChatManager *Instance; 
  const OnlineChatHistory *ChatHistoryForType; 
  unsigned int startIndex; 
  const OnlineChatMessage *v9; 
  OnlineChat *m_chat; 
  unsigned int v11; 
  OnlineChatType chatType; 
  OnlineChatId chatId; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Social.GetMessagesFromChatType( <chatType> )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
  {
    chatType = (unsigned int)j_lua_tointeger(luaVM, 1);
    v3 = 1;
    Instance = OnlineChatManager::GetInstance();
    ChatHistoryForType = OnlineChatManager::GetChatHistoryForType(Instance, chatType);
    j_lua_createtable(luaVM, ChatHistoryForType->count, 0);
    startIndex = ChatHistoryForType->startIndex;
    if ( startIndex < startIndex + ChatHistoryForType->count )
    {
      do
      {
        _XMM1 = 0i64;
        __asm { vcvtsi2sd xmm1, xmm1, r12d; n }
        v9 = ChatHistoryForType->messages[startIndex % 0xC8];
        j_lua_pushnumber(LUI_luaVM, *(long double *)&_XMM1);
        ++v3;
        j_lua_createtable(luaVM, 0, 5);
        m_chat = v9->m_chat;
        if ( m_chat && m_chat->m_chatType == (COUNT|DODGE|0x4) )
          chatId.m_id = m_chat->m_chatId.m_id;
        else
          chatId.m_id = 0i64;
        LUI_Social_SetMessageData(&chatId, &chatType, v9);
        j_lua_settable(LUI_luaVM, -3);
        ++startIndex;
      }
      while ( startIndex < ChatHistoryForType->startIndex + ChatHistoryForType->count );
    }
  }
  else
  {
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v11 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v11);
  }
  return v2;
}

/*
==============
LUI_LuaCall_Social_GetXUIDFromBNetAccountID
==============
*/
__int64 LUI_LuaCall_Social_GetXUIDFromBNetAccountID(lua_State *const luaVM)
{
  unsigned int v3; 
  OnlineChatType v4; 
  unsigned int v6; 
  char outXUIDString[24]; 

  v3 = 1;
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Social.GetXUIDFromBNetAccountID( <chatType>, <gameAccountId> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_isnumber(luaVM, 2) )
  {
    v4 = lui_tointeger32(luaVM, 1);
    *(double *)&_XMM0 = j_lua_tonumber(luaVM, 2);
    __asm { vcvttsd2si ecx, xmm0 }
    outXUIDString[0] = 0;
    LUI_Social_GetXUIDFromBNetAccountID(v4, _ECX, outXUIDString);
    j_lua_pushstring(luaVM, outXUIDString);
  }
  else
  {
    v3 = 0;
  }
  if ( (int)v3 > j_lua_gettop(luaVM) )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v3, v6);
  }
  return v3;
}

/*
==============
LUI_LuaCall_Social_GetXUIDFromBNetPrivateChatId
==============
*/
__int64 LUI_LuaCall_Social_GetXUIDFromBNetPrivateChatId(lua_State *const luaVM)
{
  unsigned int v2; 

  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v2);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_Social_FindPlayersWithGamertag
==============
*/
__int64 LUI_LuaCall_Social_FindPlayersWithGamertag(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_Social_FindPlayersWithGamertag_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_Social_CreatePrivateChat
==============
*/
__int64 LUI_LuaCall_Social_CreatePrivateChat(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_Social_CreatePrivateChat_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_Social_LeaveChat
==============
*/
__int64 LUI_LuaCall_Social_LeaveChat(lua_State *const luaVM)
{
  OnlineChatManager *Instance; 
  unsigned int v3; 
  OnlineChatType chatType; 
  OnlineChatId outChatId; 

  if ( j_lua_gettop(luaVM) != 2 || j_lua_type(luaVM, 1) != 5 || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Social.LeaveChat( <chatID>, <chatType> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_type(luaVM, 1) == 5 && j_lua_isnumber(luaVM, 2) )
  {
    outChatId.m_id = 0i64;
    LUI_Social_GetChatID(1, &outChatId);
    chatType = (unsigned int)j_lua_tointeger(luaVM, 2);
    OnlineChatManager::GetInstance();
    Instance = OnlineChatManager::GetInstance();
    OnlineChatManager::LeaveChat(Instance, &outChatId, &chatType);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v3);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_Social_SetTypingIndicatorForChat
==============
*/
__int64 LUI_LuaCall_Social_SetTypingIndicatorForChat(lua_State *const luaVM)
{
  bool v2; 
  OnlineChatManager *Instance; 
  unsigned int v4; 
  OnlineChatType chatType; 
  OnlineChatId outChatId; 

  if ( j_lua_gettop(luaVM) != 3 || j_lua_type(luaVM, 1) != 5 || !j_lua_isnumber(luaVM, 2) || j_lua_type(luaVM, 3) != 1 )
    j_luaL_error(luaVM, "USAGE: Social.SetTypingIndicatorForChat( <chatID>, <chatType>, <isTyping> )");
  if ( j_lua_gettop(luaVM) == 3 && j_lua_type(luaVM, 1) == 5 && j_lua_isnumber(luaVM, 2) && j_lua_type(luaVM, 3) == 1 )
  {
    outChatId.m_id = 0i64;
    LUI_Social_GetChatID(1, &outChatId);
    chatType = (unsigned int)j_lua_tointeger(luaVM, 2);
    v2 = j_lua_toboolean(luaVM, 3) != 0;
    Instance = OnlineChatManager::GetInstance();
    OnlineChatManager::SetTypingIndicatorForChat(Instance, &outChatId, &chatType, v2);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_Social_IsLocalPlayer
==============
*/
__int64 LUI_LuaCall_Social_IsLocalPlayer(lua_State *const luaVM)
{
  unsigned int v3; 
  unsigned __int64 v4; 
  __int128 v5; 
  unsigned __int64 v7; 
  OnlineChatManager *Instance; 
  bool IsLocalPlayer; 
  unsigned int v10; 

  v3 = 1;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Social.IsLocalPlayer( <memberId> )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
  {
    *(double *)&_XMM0 = j_lua_tonumber(luaVM, 1);
    v4 = 0i64;
    if ( *(double *)&_XMM0 >= 9.223372036854776e18 )
    {
      *((_QWORD *)&v5 + 1) = *((_QWORD *)&_XMM0 + 1);
      *(double *)&v5 = *(double *)&_XMM0 - 9.223372036854776e18;
      _XMM0 = v5;
      if ( *(double *)&v5 < 9.223372036854776e18 )
        v4 = 0x8000000000000000ui64;
    }
    __asm { vcvttsd2si rbx, xmm0 }
    v7 = v4 + _RBX;
    Instance = OnlineChatManager::GetInstance();
    IsLocalPlayer = OnlineChatManager::IsLocalPlayer(Instance, v7);
    j_lua_pushboolean(luaVM, IsLocalPlayer);
  }
  else
  {
    v3 = 0;
  }
  if ( (int)v3 > j_lua_gettop(luaVM) )
  {
    v10 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v3, v10);
  }
  return v3;
}

/*
==============
LUI_LuaCall_Social_SetOnlineStatus
==============
*/
__int64 LUI_LuaCall_Social_SetOnlineStatus(lua_State *const luaVM)
{
  unsigned int v2; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Social.SetOnlineStatus( <onlineStatusEnum> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) )
    j_lua_isnumber(luaVM, 2);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v2);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_Social_GetOnlineStatus
==============
*/
__int64 LUI_LuaCall_Social_GetOnlineStatus(lua_State *const luaVM)
{
  unsigned int v2; 
  int v3; 
  bool IsRemotePlayerOnline; 
  __int64 v5; 
  unsigned int v6; 
  XUID result; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 3 || !j_lua_isnumber(luaVM, 1) || !j_lua_isstring(luaVM, 2) || j_lua_type(luaVM, 3) != 1 )
    j_luaL_error(luaVM, "USAGE: Social.GetOnlineStatus( <controllerIndex>, <xuidString>, <isBnet> )");
  if ( j_lua_gettop(luaVM) == 3 && j_lua_isnumber(luaVM, 1) && j_lua_isstring(luaVM, 2) && j_lua_type(luaVM, 3) == 1 )
  {
    v3 = lui_tointeger32(luaVM, 1);
    LUI_ToXUID(&result, luaVM, 2);
    IsRemotePlayerOnline = Social_IsRemotePlayerOnline(v3, result);
    v5 = 4i64;
    if ( IsRemotePlayerOnline )
      v5 = 2i64;
    j_lua_pushinteger(luaVM, v5);
  }
  else
  {
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v6);
  }
  return v2;
}

/*
==============
LUI_LuaCall_Social_GetOnlineStatusForBNet
==============
*/
__int64 LUI_LuaCall_Social_GetOnlineStatusForBNet(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Social.GetOnlineStatusForBNet( <platformIdString> )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
    j_lua_pushinteger(luaVM, 4i64);
  else
    v2 = 0;
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_Social_IsRemotePlayerOnline
==============
*/
__int64 LUI_LuaCall_Social_IsRemotePlayerOnline(lua_State *const luaVM)
{
  unsigned int v2; 
  int v3; 
  bool IsRemotePlayerOnline; 
  unsigned int v5; 
  XUID result; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isstring(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Social.IsRemotePlayerOnline( <controllerIndex>, <xuidString> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_isstring(luaVM, 2) )
  {
    v3 = lui_tointeger32(luaVM, 1);
    LUI_ToXUID(&result, luaVM, 2);
    IsRemotePlayerOnline = Social_IsRemotePlayerOnline(v3, result);
    j_lua_pushboolean(luaVM, IsRemotePlayerOnline);
  }
  else
  {
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v5);
  }
  return v2;
}

/*
==============
LUI_LuaCall_Social_GetPresenceFields
==============
*/
__int64 LUI_LuaCall_Social_GetPresenceFields(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 
  XUID result; 
  char v6[8]; 
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 
  int v10; 
  char value[208]; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isstring(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Social.GetPresenceFields( <xuidString> )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isstring(luaVM, 1) )
  {
    LUI_ToXUID(&result, luaVM, 1);
    j_lua_createtable(luaVM, 0, 9);
    value[0] = 0;
    LUI_SetTableString("fullName", value, LUI_luaVM);
    *(_QWORD *)v6 = 0i64;
    v7 = 0i64;
    v8 = 0i64;
    v9 = 0i64;
    v10 = 0;
    LUI_SetTableString("battleTag", v6, LUI_luaVM);
    LUI_SetTableString("awayTime", (const char *)&queryFormat.fmt + 3, LUI_luaVM);
    value[0] = 0;
    LUI_SetTableString("clientRichPresence", value, LUI_luaVM);
    LUI_SetTableBool("isClientInGame", 0, LUI_luaVM);
    LUI_SetTableString("clientProgramID", (const char *)&queryFormat.fmt + 3, LUI_luaVM);
  }
  else
  {
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_Social_GetPresenceFieldsByPlatformId
==============
*/
__int64 LUI_LuaCall_Social_GetPresenceFieldsByPlatformId(lua_State *const luaVM)
{
  unsigned int v2; 
  const char *v3; 
  unsigned __int64 v4; 
  const XUID *v5; 
  unsigned int v6; 
  XUID result; 
  char value[208]; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isstring(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Social.GetPresenceFieldsByPlatformId( <platformIdString> )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isstring(luaVM, 1) )
  {
    v3 = j_lua_tolstring(luaVM, 1, NULL);
    v4 = I_atoui64(v3);
    j_lua_createtable(luaVM, 0, 9);
    XUID::NullXUID(&result);
    value[0] = 0;
    LUI_SetTableString("fullName", value, LUI_luaVM);
    XUID::NullXUID(&result);
    v5 = XUID::NullXUID(&result);
    LUI_Social_SetPresenceBattletag((const XUID)v5->m_id, v4);
    XUID::NullXUID(&result);
    XUID::NullXUID(&result);
    XUID::NullXUID(&result);
    LUI_SetTableString("awayTime", (const char *)&queryFormat.fmt + 3, LUI_luaVM);
    XUID::NullXUID(&result);
    value[0] = 0;
    LUI_SetTableString("clientRichPresence", value, LUI_luaVM);
    XUID::NullXUID(&result);
    LUI_SetTableBool("isClientInGame", 0, LUI_luaVM);
    XUID::NullXUID(&result);
    LUI_SetTableString("clientProgramID", (const char *)&queryFormat.fmt + 3, LUI_luaVM);
  }
  else
  {
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v6);
  }
  return v2;
}

/*
==============
LUI_LuaCall_Social_RemoveFriend
==============
*/
__int64 LUI_LuaCall_Social_RemoveFriend(lua_State *const luaVM)
{
  unsigned int v2; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isstring(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Social.RemoveFriend( <controllerIndex>, <platformIdString> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) )
    j_lua_isstring(luaVM, 2);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v2);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_Social_HasFriendRequestFromPlatformId
==============
*/
__int64 LUI_LuaCall_Social_HasFriendRequestFromPlatformId(lua_State *const luaVM)
{
  unsigned int v2; 

  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v2);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_Social_AcceptFriendRequest
==============
*/
__int64 LUI_LuaCall_Social_AcceptFriendRequest(lua_State *const luaVM)
{
  unsigned int v2; 

  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v2);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_Social_RevokeFriendRequest
==============
*/
__int64 LUI_LuaCall_Social_RevokeFriendRequest(lua_State *const luaVM)
{
  unsigned int v2; 

  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v2);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_Social_IgnoreFriendRequest
==============
*/
__int64 LUI_LuaCall_Social_IgnoreFriendRequest(lua_State *const luaVM)
{
  unsigned int v2; 

  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v2);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_Social_GetAllRequestsSent
==============
*/
__int64 LUI_LuaCall_Social_GetAllRequestsSent(lua_State *const luaVM)
{
  unsigned int v2; 

  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v2);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_Social_GetAllRequestsReceived
==============
*/
__int64 LUI_LuaCall_Social_GetAllRequestsReceived(lua_State *const luaVM)
{
  unsigned int v2; 

  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v2);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_Social_GetAllBlockedPlayers
==============
*/
__int64 LUI_LuaCall_Social_GetAllBlockedPlayers(lua_State *const luaVM)
{
  unsigned int v2; 

  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v2);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_Social_BlockPlayer
==============
*/
__int64 LUI_LuaCall_Social_BlockPlayer(lua_State *const luaVM)
{
  unsigned int v2; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isstring(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Social.BlockPlayer( <controllerIndex>, <xuidString> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) )
    j_lua_isstring(luaVM, 2);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v2);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_Social_UnblockPlayer
==============
*/
__int64 LUI_LuaCall_Social_UnblockPlayer(lua_State *const luaVM)
{
  unsigned int v2; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isstring(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Social.UnblockPlayer( <platformIdString> )");
  if ( j_lua_gettop(luaVM) == 1 )
    j_lua_isstring(luaVM, 1);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v2);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_Social_CanWhisperUser
==============
*/
__int64 LUI_LuaCall_Social_CanWhisperUser(lua_State *const luaVM)
{
  bool CanCommunicateWithUser; 
  int v3; 
  unsigned int v4; 
  XUID result; 

  CanCommunicateWithUser = 1;
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Social.CanWhisperUser( <controllerIndex>, <XUID> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_isnumber(luaVM, 2) )
  {
    v3 = lui_tointeger32(luaVM, 1);
    LUI_ToXUID(&result, luaVM, 2);
    CanCommunicateWithUser = OnlineChatManager::CanCommunicateWithUser(v3, COUNT|DODGE|0x4, result);
  }
  j_lua_pushboolean(luaVM, CanCommunicateWithUser);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v4);
  }
  return 1i64;
}

/*
==============
LUI_LuaCall_Social_AddFriendCrossplay
==============
*/
__int64 LUI_LuaCall_Social_AddFriendCrossplay(lua_State *const luaVM)
{
  int v2; 
  const char *v3; 
  unsigned __int8 v4; 
  Online_Friends *Instance; 
  unsigned int v6; 

  if ( j_lua_gettop(luaVM) != 3 || !j_lua_isnumber(luaVM, 1) || !j_lua_isstring(luaVM, 2) || !j_lua_isnumber(luaVM, 3) )
    j_luaL_error(luaVM, "USAGE: Social.AddFriendCrossplay( <controllerIndex>, <gamertag>, <searchPlatform> )");
  if ( j_lua_gettop(luaVM) == 3 && j_lua_isnumber(luaVM, 1) && j_lua_isstring(luaVM, 2) && j_lua_isnumber(luaVM, 3) )
  {
    v2 = lui_tointeger32(luaVM, 1);
    v3 = j_lua_tolstring(luaVM, 2, NULL);
    v4 = j_lua_tointeger(luaVM, 3);
    Instance = Online_Friends::GetInstance();
    Online_Friends::Crossplay_AddPlayerByName(Instance, v2, v3, (const ClientPlatform)v4);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v6);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_Social_RemoveFriendCrossplay
==============
*/
__int64 LUI_LuaCall_Social_RemoveFriendCrossplay(lua_State *const luaVM)
{
  int v2; 
  Online_Friends *Instance; 
  unsigned int v4; 
  XUID result; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isstring(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Social.RemoveFriendCrossplay( <controllerIndex>, <xuidString> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_isstring(luaVM, 2) )
  {
    v2 = lui_tointeger32(luaVM, 1);
    LUI_ToXUID(&result, luaVM, 2);
    Instance = Online_Friends::GetInstance();
    Online_Friends::Crossplay_RemoveFriend(Instance, v2, result);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_Social_AcceptFriendRequestCrossplay
==============
*/
__int64 LUI_LuaCall_Social_AcceptFriendRequestCrossplay(lua_State *const luaVM)
{
  int v2; 
  const XUID *v3; 
  Online_Friends *Instance; 
  unsigned int v5; 
  XUID xuids; 
  XUID result; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isstring(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Social.AcceptFriendRequestCrossplay( <controllerIndex>, <xuidString> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_isstring(luaVM, 2) )
  {
    v2 = lui_tointeger32(luaVM, 1);
    XUID::XUID(&xuids);
    v3 = LUI_ToXUID(&result, luaVM, 2);
    XUID::operator=(&xuids, v3);
    Instance = Online_Friends::GetInstance();
    Online_Friends::Crossplay_AcceptFriendRequests(Instance, v2, &xuids, 1);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v5);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_Social_AddFriendCrossplayByXuid
==============
*/
__int64 LUI_LuaCall_Social_AddFriendCrossplayByXuid(lua_State *const luaVM)
{
  int v2; 
  const XUID *v3; 
  Online_Friends *Instance; 
  unsigned int v5; 
  XUID xuids; 
  XUID result; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isstring(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Social.AddFriendCrossplayByXuid( <controllerIndex>, <xuidString> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_isstring(luaVM, 2) )
  {
    v2 = lui_tointeger32(luaVM, 1);
    XUID::XUID(&xuids);
    v3 = LUI_ToXUID(&result, luaVM, 2);
    XUID::operator=(&xuids, v3);
    Instance = Online_Friends::GetInstance();
    Online_Friends::Crossplay_AddFriendsByXUID(Instance, v2, &xuids, 1);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v5);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_Social_RevokeFriendRequestCrossplay
==============
*/
__int64 LUI_LuaCall_Social_RevokeFriendRequestCrossplay(lua_State *const luaVM)
{
  int v2; 
  Online_Friends *Instance; 
  unsigned int v4; 
  XUID result; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isstring(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Social.RevokeFriendRequestCrossplay( <controllerIndex>, <xuidString> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_isstring(luaVM, 2) )
  {
    v2 = lui_tointeger32(luaVM, 1);
    LUI_ToXUID(&result, luaVM, 2);
    Instance = Online_Friends::GetInstance();
    Online_Friends::Crossplay_CancelFriendRequest(Instance, v2, result);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_Social_IgnoreFriendRequestCrossplay
==============
*/
__int64 LUI_LuaCall_Social_IgnoreFriendRequestCrossplay(lua_State *const luaVM)
{
  int v2; 
  Online_Friends *Instance; 
  unsigned int v4; 
  XUID result; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isstring(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Social.IgnoreFriendRequestCrossplay( <controllerIndex>, <xuidString> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_isstring(luaVM, 2) )
  {
    v2 = lui_tointeger32(luaVM, 1);
    LUI_ToXUID(&result, luaVM, 2);
    Instance = Online_Friends::GetInstance();
    Online_Friends::Crossplay_CancelFriendRequest(Instance, v2, result);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_Social_GetAllRequestsSentCrossplay
==============
*/
__int64 LUI_LuaCall_Social_GetAllRequestsSentCrossplay(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 
  int v4; 
  Online_Friends *Instance; 
  lua_State *v8; 
  const char *v9; 
  unsigned int v10; 
  unsigned int numRequestsOut; 
  DWFriend *requestsOut; 
  DWFriend playerName; 
  char outTruncatedPlayerName[40]; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Social.GetAllRequestsSentCrossplay( <controllerIndex> )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
  {
    v3 = 0;
    v4 = lui_tointeger32(luaVM, 1);
    numRequestsOut = 0;
    Instance = Online_Friends::GetInstance();
    Online_Friends::Crossplay_GetOutgoingFriendRequests(Instance, v4, (const DWFriend **)&requestsOut, &numRequestsOut);
    j_lua_createtable(luaVM, numRequestsOut, 0);
    if ( numRequestsOut )
    {
      do
      {
        _XMM1 = 0i64;
        __asm { vcvtsi2sd xmm1, xmm1, rax; n }
        j_lua_pushnumber(LUI_luaVM, *(long double *)&_XMM1);
        j_lua_createtable(luaVM, 0, 4);
        playerName = requestsOut[v3];
        Com_TruncatePlayerName(playerName.name, outTruncatedPlayerName, 0x24ui64);
        LUI_SetTableString("subjectName", outTruncatedPlayerName, LUI_luaVM);
        v8 = LUI_luaVM;
        v9 = XUID::ToString(&playerName.xuid);
        LUI_SetTableString("xuidString", v9, v8);
        j_lua_settable(LUI_luaVM, -3);
        ++v3;
      }
      while ( v3 < numRequestsOut );
    }
  }
  else
  {
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v10 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v10);
  }
  return v2;
}

/*
==============
LUI_LuaCall_Social_GetAllRequestsReceivedCrossplay
==============
*/
__int64 LUI_LuaCall_Social_GetAllRequestsReceivedCrossplay(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 
  int v4; 
  Online_Friends *Instance; 
  lua_State *v8; 
  const char *v9; 
  unsigned int v10; 
  unsigned int numRequestsOut; 
  DWFriend *requestsOut; 
  DWFriend playerName; 
  char outTruncatedPlayerName[40]; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Social.GetAllRequestsReceivedCrossplay( <controllerIndex> )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
  {
    v3 = 0;
    v4 = lui_tointeger32(luaVM, 1);
    numRequestsOut = 0;
    Instance = Online_Friends::GetInstance();
    Online_Friends::Crossplay_GetIncomingFriendRequests(Instance, v4, (const DWFriend **)&requestsOut, &numRequestsOut);
    j_lua_createtable(luaVM, numRequestsOut, 0);
    if ( numRequestsOut )
    {
      do
      {
        _XMM1 = 0i64;
        __asm { vcvtsi2sd xmm1, xmm1, rax; n }
        j_lua_pushnumber(LUI_luaVM, *(long double *)&_XMM1);
        j_lua_createtable(luaVM, 0, 4);
        playerName = requestsOut[v3];
        Com_TruncatePlayerName(playerName.name, outTruncatedPlayerName, 0x24ui64);
        LUI_SetTableString("subjectName", outTruncatedPlayerName, LUI_luaVM);
        v8 = LUI_luaVM;
        v9 = XUID::ToString(&playerName.xuid);
        LUI_SetTableString("xuidString", v9, v8);
        j_lua_settable(LUI_luaVM, -3);
        ++v3;
      }
      while ( v3 < numRequestsOut );
    }
  }
  else
  {
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v10 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v10);
  }
  return v2;
}

/*
==============
LUI_LuaCall_Social_GetAllBlockedPlayersCrossplay
==============
*/
__int64 LUI_LuaCall_Social_GetAllBlockedPlayersCrossplay(lua_State *const luaVM)
{
  unsigned int v2; 
  int v3; 
  OnlineUserLists *Instance; 
  int m_numUsers; 
  signed int i; 
  lua_State *v9; 
  const char *v10; 
  unsigned int v11; 
  UserList *userListOut; 
  UserList::User *userOut; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Social.GetAllBlockedPlayersCrossplay( <controllerIndex> )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) && (v3 = lui_tointeger32(luaVM, 1), userListOut = NULL, Instance = OnlineUserLists::GetInstance(), OnlineUserLists::GetUserList(Instance, v3, DODGE, (const UserList **)&userListOut)) )
  {
    m_numUsers = userListOut->m_numUsers;
    j_lua_createtable(luaVM, m_numUsers, 0);
    for ( i = 0; i < m_numUsers; ++i )
    {
      userOut = NULL;
      if ( UserList::GetUserByIndex(userListOut, i, (const UserList::User **)&userOut) )
      {
        _XMM1 = 0i64;
        __asm { vcvtsi2sd xmm1, xmm1, eax; n }
        j_lua_pushnumber(luaVM, *(long double *)&_XMM1);
        j_lua_createtable(luaVM, 0, 2);
        LUI_SetTableString((const char *)&stru_143C9A1A4, userOut->name, LUI_luaVM);
        v9 = LUI_luaVM;
        v10 = XUID::ToString(&userOut->xuid);
        LUI_SetTableString("xuidString", v10, v9);
        j_lua_settable(luaVM, -3);
      }
    }
  }
  else
  {
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v11 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v11);
  }
  return v2;
}

/*
==============
LUI_LuaCall_Social_BlockPlayerCrossplay
==============
*/
__int64 LUI_LuaCall_Social_BlockPlayerCrossplay(lua_State *const luaVM)
{
  int v2; 
  const char *v3; 
  Online_BlockList *Instance; 
  unsigned int v5; 
  XUID result; 

  if ( j_lua_gettop(luaVM) != 3 || !j_lua_isnumber(luaVM, 1) || !j_lua_isstring(luaVM, 2) || !j_lua_isstring(luaVM, 3) )
    j_luaL_error(luaVM, "USAGE: Social.BlockPlayerCrossplay( <controllerIndex>, <xuidString>, <name> )");
  if ( j_lua_gettop(luaVM) == 3 && j_lua_isnumber(luaVM, 1) && j_lua_isstring(luaVM, 2) && j_lua_isstring(luaVM, 3) )
  {
    v2 = lui_tointeger32(luaVM, 1);
    LUI_ToXUID(&result, luaVM, 2);
    v3 = j_lua_tolstring(luaVM, 3, NULL);
    Instance = Online_BlockList::GetInstance();
    Online_BlockList::BlockPlayerOnDW(Instance, v2, result, v3);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v5);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_Social_UnblockPlayerCrossplay
==============
*/
__int64 LUI_LuaCall_Social_UnblockPlayerCrossplay(lua_State *const luaVM)
{
  int v2; 
  Online_BlockList *Instance; 
  unsigned int v4; 
  XUID result; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isstring(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Social.UnblockPlayerCrossplay( <controllerIndex>, <xuidString> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_isstring(luaVM, 2) )
  {
    v2 = lui_tointeger32(luaVM, 1);
    LUI_ToXUID(&result, luaVM, 2);
    Instance = Online_BlockList::GetInstance();
    Online_BlockList::UnblockPlayerOnDW(Instance, v2, result);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_Social_GetFriendTab
==============
*/
__int64 LUI_LuaCall_Social_GetFriendTab(lua_State *const luaVM)
{
  unsigned int v2; 
  int v3; 
  Online_Friends *Instance; 
  Online_Friends *v5; 
  Online_MetPlayer *v6; 
  unsigned int v7; 
  XUID result; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isstring(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Social.GetFriendTab( <controllerIndex>, <xuidString> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_isstring(luaVM, 2) )
  {
    v3 = j_lua_tointeger(luaVM, 1);
    LUI_ToXUID(&result, luaVM, 2);
    Instance = Online_Friends::GetInstance();
    if ( Online_Friends::IsFriendByID(Instance, v3, result) )
    {
      j_lua_pushinteger(luaVM, 0i64);
    }
    else
    {
      v5 = Online_Friends::GetInstance();
      if ( Online_Friends::Crossplay_FindIndex(v5, v3, result) == -1 )
      {
        v6 = Online_MetPlayer::GetInstance();
        if ( Online_MetPlayer::GetPositionByXuid(v6, v3, result) == -1 )
          j_lua_pushinteger(luaVM, -1i64);
        else
          j_lua_pushinteger(luaVM, 3i64);
      }
      else
      {
        j_lua_pushinteger(luaVM, 4i64);
      }
    }
  }
  else
  {
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v7 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v7);
  }
  return v2;
}

/*
==============
LUI_LuaCall_Social_GetPlayerCrossplayGamertag
==============
*/
__int64 LUI_LuaCall_Social_GetPlayerCrossplayGamertag(lua_State *const luaVM)
{
  const char *LocalClientName; 
  int v3; 
  unsigned int v4; 

  LocalClientName = (char *)&queryFormat.fmt + 3;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Social.GetPlayerCrossplayGamertag( <controllerIndex> )");
  if ( j_lua_gettop(luaVM) == 1 )
  {
    if ( j_lua_isnumber(luaVM, 1) )
    {
      v3 = lui_tointeger32(luaVM, 1);
      if ( Live_IsUserSignedInToDemonware(v3) )
        LocalClientName = Live_GetLocalClientName(v3);
    }
  }
  j_lua_pushstring(luaVM, LocalClientName);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v4);
  }
  return 1i64;
}

/*
==============
LUI_LuaCall_Social_GetPlatformFriendCrossplayGamertag
==============
*/
__int64 LUI_LuaCall_Social_GetPlatformFriendCrossplayGamertag(lua_State *const luaVM)
{
  unsigned int v2; 
  char str[40]; 

  str[0] = 0;
  j_lua_pushstring(luaVM, str);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v2);
  }
  return 1i64;
}

/*
==============
LUI_LuaCall_Social_GetXuidFromFriendPlatformId
==============
*/
__int64 LUI_LuaCall_Social_GetXuidFromFriendPlatformId(lua_State *const luaVM)
{
  unsigned int v2; 
  int v3; 
  const char *v4; 
  unsigned __int64 v5; 
  Online_Friends *Instance; 
  unsigned int IndexByPlatformId; 
  Online_Friends *v8; 
  const XUID *UserId; 
  const char *v10; 
  unsigned int v11; 
  XUID result; 
  XUID v14; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isstring(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Social.GetXuidFromFriendPlatformId( <controllerIndex>, <platformIdString> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_isstring(luaVM, 2) )
  {
    v3 = lui_tointeger32(luaVM, 1);
    v4 = j_lua_tolstring(luaVM, 2, NULL);
    v5 = I_atoui64(v4);
    XUID::NullXUID(&result);
    Instance = Online_Friends::GetInstance();
    IndexByPlatformId = Online_Friends::FindIndexByPlatformId(Instance, v3, v5);
    if ( IndexByPlatformId != -1 )
    {
      v8 = Online_Friends::GetInstance();
      UserId = Online_Friends::GetUserId(v8, &v14, v3, IndexByPlatformId);
      XUID::operator=(&result, UserId);
    }
    v10 = XUID::ToString(&result);
    j_lua_pushstring(luaVM, v10);
  }
  else
  {
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v11 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v11);
  }
  return v2;
}

/*
==============
LUI_LuaCall_Social_GetPartyInvitationsCount
==============
*/
__int64 LUI_LuaCall_Social_GetPartyInvitationsCount(lua_State *const luaVM)
{
  unsigned int v2; 
  InvitationType v3; 
  Online_InvitationManager *Instance; 
  unsigned int InviteCount; 
  unsigned int v6; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Social.GetPartyInvitationsCount( invitationType )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
  {
    v3 = lui_tointeger32(luaVM, 1);
    Instance = Online_InvitationManager::GetInstance();
    InviteCount = Online_InvitationManager::GetInviteCount(Instance, v3);
    j_lua_pushinteger(luaVM, InviteCount);
  }
  else
  {
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v6);
  }
  return v2;
}

/*
==============
LUI_LuaCall_Social_GetPartyInvitations
==============
*/
__int64 LUI_LuaCall_Social_GetPartyInvitations(lua_State *const luaVM)
{
  unsigned int v2; 
  InvitationType v3; 
  Online_Invitation *p_outInvites; 
  __int64 v5; 
  Online_InvitationManager *Instance; 
  unsigned int Invites; 
  unsigned int v8; 
  unsigned int *p_m_invitationId; 
  tm *v12; 
  const char *String; 
  const char *v14; 
  const char *v15; 
  unsigned int v16; 
  __time64_t Time[2]; 
  Online_Invitation outInvites; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Social.GetPartyInvitations( invitationType )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
  {
    v3 = lui_tointeger32(luaVM, 1);
    p_outInvites = &outInvites;
    v5 = 16i64;
    do
    {
      Online_Invitation::Online_Invitation(p_outInvites++);
      --v5;
    }
    while ( v5 );
    Instance = Online_InvitationManager::GetInstance();
    Invites = Online_InvitationManager::GetInvites(Instance, v3, &outInvites, 0x10u);
    j_lua_createtable(luaVM, Invites, 0);
    v8 = 0;
    if ( Invites )
    {
      p_m_invitationId = &outInvites.m_invitationId;
      do
      {
        _XMM1 = 0i64;
        ++v8;
        __asm { vcvtsi2sd xmm1, xmm1, rax; n }
        j_lua_pushnumber(luaVM, *(long double *)&_XMM1);
        j_lua_createtable(luaVM, 0, 2);
        LUI_SetTableString("inviterName", (const char *)p_m_invitationId - 44, LUI_luaVM);
        LUI_SetTableInt("invitationID", *p_m_invitationId, LUI_luaVM);
        Time[0] = *(p_m_invitationId - 2);
        v12 = _localtime64(Time);
        String = SEH_StringEd_GetString("LUA_MENU/REQUEST_SENT");
        v14 = LUI_Social_FormatTime(v12);
        v15 = UI_ReplaceConversionString(String, v14);
        LUI_SetTableString("timeSent", v15, LUI_luaVM);
        j_lua_settable(luaVM, -3);
        p_m_invitationId += 20;
      }
      while ( v8 < Invites );
    }
  }
  else
  {
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v16 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v16);
  }
  return v2;
}

/*
==============
LUI_LuaCall_Social_GetPartyInvitationsAllPlatform
==============
*/
__int64 LUI_LuaCall_Social_GetPartyInvitationsAllPlatform(lua_State *const luaVM)
{
  Online_Invitation *p_outInvites; 
  __int64 v3; 
  Online_InvitationManager *Instance; 
  unsigned int Invites; 
  unsigned int v6; 
  char *m_inviterName; 
  tm *v10; 
  const char *String; 
  const char *v12; 
  const char *v13; 
  unsigned int v14; 
  __time64_t Time[2]; 
  Online_Invitation outInvites; 

  p_outInvites = &outInvites;
  v3 = 16i64;
  do
  {
    Online_Invitation::Online_Invitation(p_outInvites++);
    --v3;
  }
  while ( v3 );
  Instance = Online_InvitationManager::GetInstance();
  Invites = Online_InvitationManager::GetInvites(Instance, INVITE_ALL, &outInvites, 0x10u);
  j_lua_createtable(luaVM, Invites, 0);
  v6 = 0;
  if ( Invites )
  {
    m_inviterName = outInvites.m_inviterName;
    do
    {
      _XMM1 = 0i64;
      ++v6;
      __asm { vcvtsi2sd xmm1, xmm1, rax; n }
      j_lua_pushnumber(luaVM, *(long double *)&_XMM1);
      j_lua_createtable(luaVM, 0, 7);
      LUI_SetTableString("fullName", m_inviterName, LUI_luaVM);
      LUI_SetTableInt("invitationID", *((unsigned int *)m_inviterName + 11), LUI_luaVM);
      LUI_Social_SetPlayerCardTableData(*(XUID *)(m_inviterName - 8), m_inviterName);
      Time[0] = *((unsigned int *)m_inviterName + 9);
      v10 = _localtime64(Time);
      String = SEH_StringEd_GetString("LUA_MENU/REQUEST_SENT");
      v12 = LUI_Social_FormatTime(v10);
      v13 = UI_ReplaceConversionString(String, v12);
      LUI_SetTableString("timeInfo", v13, LUI_luaVM);
      j_lua_settable(luaVM, -3);
      m_inviterName += 80;
    }
    while ( v6 < Invites );
  }
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v14 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v14);
  }
  return 1i64;
}

/*
==============
LUI_LuaCall_Social_ResolveXuidToPlatformIdAsync
==============
*/
__int64 LUI_LuaCall_Social_ResolveXuidToPlatformIdAsync(lua_State *const luaVM)
{
  bool v2; 
  int v3; 
  const char *v4; 
  UIUserIdResolver *Instance; 
  unsigned int v6; 
  XUID result; 

  v2 = 0;
  if ( j_lua_gettop(luaVM) != 3 || !j_lua_isnumber(luaVM, 1) || !j_lua_isstring(luaVM, 2) || !j_lua_isstring(luaVM, 3) )
    j_luaL_error(luaVM, "USAGE: Social.ResolveXuidToPlatformIdAsync( <controllerIndex>, <xuidString>, <eventCallbackString> )");
  if ( j_lua_gettop(luaVM) == 3 && j_lua_isnumber(luaVM, 1) && j_lua_isstring(luaVM, 2) && j_lua_isstring(luaVM, 3) )
  {
    v3 = j_lua_tointeger(luaVM, 1);
    LUI_ToXUID(&result, luaVM, 2);
    v4 = j_lua_tolstring(luaVM, 3, NULL);
    Instance = UIUserIdResolver::GetInstance();
    v2 = UIUserIdResolver::QueuePlatformIdResolveRequest(Instance, v3, &result, v4);
  }
  j_lua_pushboolean(luaVM, v2);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v6);
  }
  return 1i64;
}

/*
==============
LUI_LuaCall_Social_ResolveXuidToUsernameAsync
==============
*/
__int64 LUI_LuaCall_Social_ResolveXuidToUsernameAsync(lua_State *const luaVM)
{
  bool v2; 
  int v3; 
  const char *v4; 
  UIUsernameResolver *Instance; 
  unsigned int v6; 
  XUID result; 

  v2 = 0;
  if ( j_lua_gettop(luaVM) != 3 || !j_lua_isnumber(luaVM, 1) || !j_lua_isstring(luaVM, 2) || !j_lua_isstring(luaVM, 3) )
    j_luaL_error(luaVM, "USAGE: Social.ResolveXuidToUsernameAsync( <controllerIndex>, <xuidString>, <eventCallbackString> )");
  if ( j_lua_gettop(luaVM) == 3 && j_lua_isnumber(luaVM, 1) && j_lua_isstring(luaVM, 2) && j_lua_isstring(luaVM, 3) )
  {
    v3 = j_lua_tointeger(luaVM, 1);
    LUI_ToXUID(&result, luaVM, 2);
    v4 = j_lua_tolstring(luaVM, 3, NULL);
    Instance = UIUsernameResolver::GetInstance();
    v2 = UIUsernameResolver::QueueUsernameResolveRequest(Instance, v3, &result, v4);
  }
  j_lua_pushboolean(luaVM, v2);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v6);
  }
  return 1i64;
}

/*
==============
LUI_LuaCall_Social_IsRecentPlayerListFetched
==============
*/
__int64 LUI_LuaCall_Social_IsRecentPlayerListFetched(lua_State *const luaVM)
{
  unsigned int v2; 
  int v3; 
  OnlineUserLists *Instance; 
  bool IsListFetched; 
  unsigned int v6; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Social.IsRecentPlayerListFetched( <controllerIndex> )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
  {
    v3 = lui_tointeger32(luaVM, 1);
    Instance = OnlineUserLists::GetInstance();
    IsListFetched = OnlineUserLists::IsListFetched(Instance, v3, MOVEMENT);
    j_lua_pushboolean(luaVM, IsListFetched);
  }
  else
  {
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v6);
  }
  return v2;
}

/*
==============
LUI_LuaCall_Social_CheckChatBlocked
==============
*/
__int64 LUI_LuaCall_Social_CheckChatBlocked(lua_State *const luaVM)
{
  unsigned int v2; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Social.CheckChatBlocked()\n");
  j_lua_pushboolean(luaVM, 0);
  j_lua_pushinteger(luaVM, 0i64);
  j_lua_pushinteger(luaVM, 0i64);
  j_lua_pushinteger(luaVM, 0i64);
  j_lua_pushinteger(luaVM, 0i64);
  if ( j_lua_gettop(luaVM) < 5 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 5i64, v2);
  }
  return 5i64;
}

/*
==============
LUI_LuaCall_Social_GetSentInvitesAllPlatform
==============
*/
__int64 LUI_LuaCall_Social_GetSentInvitesAllPlatform(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 
  int v4; 
  Online_Friends *Instance; 
  unsigned int v6; 
  __int64 v9; 
  DWFriend *v10; 
  lua_State *v11; 
  const char *v12; 
  unsigned int v13; 
  unsigned int numRequestsOut; 
  DWFriend *requestsOut; 
  char outTruncatedPlayerName[40]; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Social.GetSentInvitesAllPlatform( <controllerIndex> )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
  {
    v3 = 0;
    v4 = lui_tointeger32(luaVM, 1);
    numRequestsOut = 0;
    Instance = Online_Friends::GetInstance();
    Online_Friends::Crossplay_GetOutgoingFriendRequests(Instance, v4, (const DWFriend **)&requestsOut, &numRequestsOut);
    j_lua_createtable(luaVM, numRequestsOut, 0);
    if ( numRequestsOut )
    {
      do
      {
        v6 = v3 + 1;
        _XMM1 = 0i64;
        __asm { vcvtsi2sd xmm1, xmm1, rax; n }
        j_lua_pushnumber(LUI_luaVM, *(long double *)&_XMM1);
        j_lua_createtable(luaVM, 0, 7);
        v9 = v3;
        Com_TruncatePlayerName(requestsOut[v9].name, outTruncatedPlayerName, 0x24ui64);
        LUI_SetTableString("fullName", outTruncatedPlayerName, LUI_luaVM);
        v10 = &requestsOut[v9];
        v11 = LUI_luaVM;
        v12 = XUID::ToString(&v10->xuid);
        LUI_SetTableString("xuid", v12, v11);
        LUI_Social_SetPlayerCardTableData(v10->xuid, outTruncatedPlayerName);
        LUI_SetTableInt("playerDataType", 1i64, LUI_luaVM);
        j_lua_settable(LUI_luaVM, -3);
        v3 = v6;
      }
      while ( v6 < numRequestsOut );
    }
  }
  else
  {
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v13 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v13);
  }
  return v2;
}

/*
==============
LUI_LuaCall_Social_GetReceivedRequestsAllPlatform
==============
*/
__int64 LUI_LuaCall_Social_GetReceivedRequestsAllPlatform(lua_State *const luaVM)
{
  unsigned int v2; 
  int v3; 
  Online_Friends *Instance; 
  unsigned int v5; 
  __int64 v8; 
  DWFriend *v9; 
  lua_State *v10; 
  const char *v11; 
  unsigned int v12; 
  unsigned int numRequestsOut; 
  DWFriend *requestsOut; 
  char outTruncatedPlayerName[40]; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Social.GetReceivedRequestsAllPlatform( <controllerIndex> )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
  {
    v2 = 0;
    v3 = lui_tointeger32(luaVM, 1);
    numRequestsOut = 0;
    Instance = Online_Friends::GetInstance();
    if ( Online_Friends::Crossplay_GetIncomingFriendRequests(Instance, v3, (const DWFriend **)&requestsOut, &numRequestsOut) )
    {
      j_lua_createtable(luaVM, numRequestsOut, 0);
      if ( numRequestsOut )
      {
        do
        {
          v5 = v2 + 1;
          _XMM1 = 0i64;
          __asm { vcvtsi2sd xmm1, xmm1, rax; n }
          j_lua_pushnumber(LUI_luaVM, *(long double *)&_XMM1);
          j_lua_createtable(luaVM, 0, 7);
          v8 = v2;
          Com_TruncatePlayerName(requestsOut[v8].name, outTruncatedPlayerName, 0x24ui64);
          LUI_SetTableString("fullName", outTruncatedPlayerName, LUI_luaVM);
          v9 = &requestsOut[v8];
          v10 = LUI_luaVM;
          v11 = XUID::ToString(&v9->xuid);
          LUI_SetTableString("xuid", v11, v10);
          LUI_Social_SetPlayerCardTableData(v9->xuid, outTruncatedPlayerName);
          LUI_SetTableInt("playerDataType", 1i64, LUI_luaVM);
          j_lua_settable(LUI_luaVM, -3);
          v2 = v5;
        }
        while ( v5 < numRequestsOut );
      }
      v2 = 1;
    }
  }
  else
  {
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v12 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v12);
  }
  return v2;
}

/*
==============
LUI_LuaCall_Social_GetBlockedPlayersAllPlatform
==============
*/
__int64 LUI_LuaCall_Social_GetBlockedPlayersAllPlatform(lua_State *const luaVM)
{
  unsigned int v2; 
  int v3; 
  OnlineUserLists *Instance; 
  int m_numUsers; 
  signed int i; 
  lua_State *v9; 
  const char *v10; 
  unsigned int v11; 
  UserList::User *userOut; 
  UserList *userListOut; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Social.GetBlockedPlayersAllPlatform( <controllerIndex> )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
  {
    v3 = lui_tointeger32(luaVM, 1);
    userListOut = NULL;
    Instance = OnlineUserLists::GetInstance();
    if ( OnlineUserLists::GetUserList(Instance, v3, DODGE, (const UserList **)&userListOut) )
    {
      m_numUsers = userListOut->m_numUsers;
      j_lua_createtable(luaVM, m_numUsers, 0);
      for ( i = 0; i < m_numUsers; ++i )
      {
        userOut = NULL;
        if ( UserList::GetUserByIndex(userListOut, i, (const UserList::User **)&userOut) )
        {
          _XMM1 = 0i64;
          __asm { vcvtsi2sd xmm1, xmm1, eax; n }
          j_lua_pushnumber(luaVM, *(long double *)&_XMM1);
          j_lua_createtable(luaVM, 0, 7);
          LUI_SetTableString("fullName", userOut->name, LUI_luaVM);
          v9 = LUI_luaVM;
          v10 = XUID::ToString(&userOut->xuid);
          LUI_SetTableString("xuid", v10, v9);
          LUI_Social_SetPlayerCardTableData(userOut->xuid, userOut->name);
          LUI_SetTableInt("playerDataType", 1i64, LUI_luaVM);
          j_lua_settable(luaVM, -3);
        }
      }
    }
  }
  else
  {
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v11 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v11);
  }
  return v2;
}

/*
==============
LUI_LuaCall_Clans_CreateClan
==============
*/
__int64 LUI_LuaCall_Clans_CreateClan(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_Clans_CreateClan_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_Clans_GetJoinedClans
==============
*/
__int64 LUI_LuaCall_Clans_GetJoinedClans(lua_State *const luaVM)
{
  __int128 v1; 
  unsigned int v3; 
  int v4; 
  int v5; 
  OnlineClansManager *Instance; 
  unsigned int v8; 
  unsigned int v12; 
  unsigned int numIdsOut[4]; 
  unsigned __int64 idsBuffer[10]; 
  __int128 v16; 

  v3 = 1;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Clans.GetJoinedClans( <controllerIndex> )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
  {
    v4 = 0;
    v5 = j_lua_tointeger(luaVM, 1);
    numIdsOut[0] = 0;
    Instance = OnlineClansManager::GetInstance();
    OnlineClansManager::GetJoinedClans(Instance, v5, idsBuffer, 0xAu, numIdsOut);
    j_lua_createtable(luaVM, numIdsOut[0], 0);
    if ( numIdsOut[0] )
    {
      v16 = v1;
      do
      {
        _XMM1 = 0i64;
        v8 = v4 + 1;
        __asm { vcvtsi2sd xmm1, xmm1, rax; n }
        j_lua_pushnumber(luaVM, *(long double *)&_XMM1);
        _XMM1 = 0i64;
        __asm { vcvtsi2sd xmm1, xmm1, rcx }
        if ( (idsBuffer[v4] & 0x8000000000000000ui64) != 0i64 )
          *(double *)&_XMM1 = *(double *)&_XMM1 + 1.844674407370955e19;
        j_lua_pushnumber(luaVM, *(long double *)&_XMM1);
        j_lua_settable(luaVM, -3);
        ++v4;
      }
      while ( v8 < numIdsOut[0] );
    }
  }
  else
  {
    v3 = 0;
  }
  if ( (int)v3 > j_lua_gettop(luaVM) )
  {
    v12 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v3, v12);
  }
  return v3;
}

/*
==============
LUI_LuaCall_Clans_GetClanMembers
==============
*/
__int64 LUI_LuaCall_Clans_GetClanMembers(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_Clans_GetClanMembers_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_Clans_GetClanDetails
==============
*/
__int64 LUI_LuaCall_Clans_GetClanDetails(lua_State *const luaVM)
{
  unsigned int v3; 
  int v4; 
  unsigned __int64 v5; 
  __int128 v6; 
  unsigned __int64 v8; 
  OnlineClansManager *Instance; 
  OnlineClan *ClanById; 
  unsigned int v11; 

  v3 = 1;
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Clans.GetClanDetails( <controllerIndex>, <clanID> )");
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    goto LABEL_13;
  v4 = j_lua_tointeger(luaVM, 1);
  *(double *)&_XMM0 = j_lua_tonumber(luaVM, 2);
  v5 = 0i64;
  if ( *(double *)&_XMM0 >= 9.223372036854776e18 )
  {
    *((_QWORD *)&v6 + 1) = *((_QWORD *)&_XMM0 + 1);
    *(double *)&v6 = *(double *)&_XMM0 - 9.223372036854776e18;
    _XMM0 = v6;
    if ( *(double *)&v6 < 9.223372036854776e18 )
      v5 = 0x8000000000000000ui64;
  }
  __asm { vcvttsd2si rbx, xmm0 }
  v8 = v5 + _RBX;
  Instance = OnlineClansManager::GetInstance();
  ClanById = OnlineClansManager::GetClanById(Instance, v4, v8);
  if ( ClanById )
  {
    j_lua_createtable(luaVM, 0, 2);
    LUI_SetTableString((const char *)&stru_143C9A1A4, ClanById->m_name, LUI_luaVM);
    LUI_SetTableString("clanTag", ClanById->m_clanTag, LUI_luaVM);
  }
  else
  {
LABEL_13:
    v3 = 0;
  }
  if ( (int)v3 > j_lua_gettop(luaVM) )
  {
    v11 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v3, v11);
  }
  return v3;
}

/*
==============
LUI_LuaCall_Clans_GetClanNumMembers
==============
*/
__int64 LUI_LuaCall_Clans_GetClanNumMembers(lua_State *const luaVM)
{
  unsigned int v3; 
  int v4; 
  unsigned __int64 v5; 
  __int128 v6; 
  unsigned __int64 v8; 
  OnlineClansManager *Instance; 
  OnlineClan *ClanById; 
  int NumMembers; 
  unsigned int v12; 

  v3 = 1;
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Clans.GetClanNumMembers( <controllerIndex>, <clanID> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_isnumber(luaVM, 2) )
  {
    v4 = j_lua_tointeger(luaVM, 1);
    *(double *)&_XMM0 = j_lua_tonumber(luaVM, 2);
    v5 = 0i64;
    if ( *(double *)&_XMM0 >= 9.223372036854776e18 )
    {
      *((_QWORD *)&v6 + 1) = *((_QWORD *)&_XMM0 + 1);
      *(double *)&v6 = *(double *)&_XMM0 - 9.223372036854776e18;
      _XMM0 = v6;
      if ( *(double *)&v6 < 9.223372036854776e18 )
        v5 = 0x8000000000000000ui64;
    }
    __asm { vcvttsd2si rbx, xmm0 }
    v8 = v5 + _RBX;
    Instance = OnlineClansManager::GetInstance();
    ClanById = OnlineClansManager::GetClanById(Instance, v4, v8);
    if ( ClanById )
    {
      NumMembers = OnlineClan::GetNumMembers(ClanById);
      j_lua_pushinteger(luaVM, NumMembers);
    }
    else
    {
      j_lua_pushinteger(luaVM, 0i64);
    }
  }
  else
  {
    v3 = 0;
  }
  if ( (int)v3 > j_lua_gettop(luaVM) )
  {
    v12 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v3, v12);
  }
  return v3;
}

/*
==============
LUI_LuaCall_Clans_GetClanNumOnlineMembers
==============
*/
__int64 LUI_LuaCall_Clans_GetClanNumOnlineMembers(lua_State *const luaVM)
{
  unsigned int v3; 
  int v4; 
  unsigned __int64 v5; 
  __int128 v6; 
  unsigned __int64 v8; 
  OnlineClansManager *Instance; 
  OnlineClan *ClanById; 
  int NumOnlineMembers; 
  unsigned int v12; 

  v3 = 1;
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Clans.GetClanNumOnlineMembers( <controllerIndex>, <clanID> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_isnumber(luaVM, 2) )
  {
    v4 = j_lua_tointeger(luaVM, 1);
    *(double *)&_XMM0 = j_lua_tonumber(luaVM, 2);
    v5 = 0i64;
    if ( *(double *)&_XMM0 >= 9.223372036854776e18 )
    {
      *((_QWORD *)&v6 + 1) = *((_QWORD *)&_XMM0 + 1);
      *(double *)&v6 = *(double *)&_XMM0 - 9.223372036854776e18;
      _XMM0 = v6;
      if ( *(double *)&v6 < 9.223372036854776e18 )
        v5 = 0x8000000000000000ui64;
    }
    __asm { vcvttsd2si rbx, xmm0 }
    v8 = v5 + _RBX;
    Instance = OnlineClansManager::GetInstance();
    ClanById = OnlineClansManager::GetClanById(Instance, v4, v8);
    if ( ClanById )
    {
      NumOnlineMembers = OnlineClan::GetNumOnlineMembers(ClanById);
      j_lua_pushinteger(luaVM, NumOnlineMembers);
    }
    else
    {
      j_lua_pushinteger(luaVM, 0i64);
    }
  }
  else
  {
    v3 = 0;
  }
  if ( (int)v3 > j_lua_gettop(luaVM) )
  {
    v12 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v3, v12);
  }
  return v3;
}

/*
==============
LUI_LuaCall_Clans_GetClanOwner
==============
*/
__int64 LUI_LuaCall_Clans_GetClanOwner(lua_State *const luaVM)
{
  unsigned int v3; 
  int v4; 
  unsigned __int64 v5; 
  __int128 v6; 
  unsigned __int64 v8; 
  OnlineClansManager *Instance; 
  OnlineClan *ClanById; 
  XUID *p_m_id; 
  const char *v12; 
  unsigned int v13; 
  unsigned __int64 m_id; 
  XUID result; 

  v3 = 1;
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Clans.GetClanOwner( <controllerIndex>, <clanID> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_isnumber(luaVM, 2) )
  {
    v4 = j_lua_tointeger(luaVM, 1);
    *(double *)&_XMM0 = j_lua_tonumber(luaVM, 2);
    v5 = 0i64;
    if ( *(double *)&_XMM0 >= 9.223372036854776e18 )
    {
      *((_QWORD *)&v6 + 1) = *((_QWORD *)&_XMM0 + 1);
      *(double *)&v6 = *(double *)&_XMM0 - 9.223372036854776e18;
      _XMM0 = v6;
      if ( *(double *)&v6 < 9.223372036854776e18 )
        v5 = 0x8000000000000000ui64;
    }
    __asm { vcvttsd2si rbx, xmm0 }
    v8 = v5 + _RBX;
    Instance = OnlineClansManager::GetInstance();
    ClanById = OnlineClansManager::GetClanById(Instance, v4, v8);
    if ( ClanById )
    {
      m_id = ClanById->m_owner.m_id;
      p_m_id = (XUID *)&m_id;
    }
    else
    {
      p_m_id = XUID::NullXUID(&result);
    }
    v12 = XUID::ToString(p_m_id);
    j_lua_pushstring(luaVM, v12);
  }
  else
  {
    v3 = 0;
  }
  if ( (int)v3 > j_lua_gettop(luaVM) )
  {
    v13 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v3, v13);
  }
  return v3;
}

/*
==============
LUI_LuaCall_Clans_SetActiveClan
==============
*/
__int64 LUI_LuaCall_Clans_SetActiveClan(lua_State *const luaVM)
{
  unsigned int v3; 
  int v4; 
  unsigned __int64 v5; 
  __int128 v6; 
  unsigned __int64 v8; 
  OnlineClansManager *Instance; 
  bool active; 
  unsigned int v11; 

  v3 = 1;
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Clans.SetActiveClan( <controllerIndex>, <clanID> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_isnumber(luaVM, 2) )
  {
    v4 = j_lua_tointeger(luaVM, 1);
    *(double *)&_XMM0 = j_lua_tonumber(luaVM, 2);
    v5 = 0i64;
    if ( *(double *)&_XMM0 >= 9.223372036854776e18 )
    {
      *((_QWORD *)&v6 + 1) = *((_QWORD *)&_XMM0 + 1);
      *(double *)&v6 = *(double *)&_XMM0 - 9.223372036854776e18;
      _XMM0 = v6;
      if ( *(double *)&v6 < 9.223372036854776e18 )
        v5 = 0x8000000000000000ui64;
    }
    __asm { vcvttsd2si rbx, xmm0 }
    v8 = v5 + _RBX;
    Instance = OnlineClansManager::GetInstance();
    active = OnlineClansManager::SetActiveClan(Instance, v4, v8);
    j_lua_pushboolean(luaVM, active);
  }
  else
  {
    v3 = 0;
  }
  if ( (int)v3 > j_lua_gettop(luaVM) )
  {
    v11 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v3, v11);
  }
  return v3;
}

/*
==============
LUI_LuaCall_Clans_GetActiveClan
==============
*/
__int64 LUI_LuaCall_Clans_GetActiveClan(lua_State *const luaVM)
{
  unsigned int v2; 
  int v3; 
  OnlineClansManager *Instance; 
  unsigned int v7; 
  unsigned __int64 clanIdOut; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Clans.GetActiveClan( <controllerIndex> )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
  {
    v3 = j_lua_tointeger(luaVM, 1);
    Instance = OnlineClansManager::GetInstance();
    if ( OnlineClansManager::GetActiveClan(Instance, v3, &clanIdOut) )
    {
      _XMM1 = 0i64;
      __asm { vcvtsi2sd xmm1, xmm1, rax }
      if ( (clanIdOut & 0x8000000000000000ui64) != 0i64 )
        *(double *)&_XMM1 = *(double *)&_XMM1 + 1.844674407370955e19;
      j_lua_pushnumber(luaVM, *(long double *)&_XMM1);
    }
    else
    {
      j_lua_pushnil(luaVM);
    }
  }
  else
  {
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v7 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v7);
  }
  return v2;
}

/*
==============
LUI_LuaCall_Clans_LeaveClan
==============
*/
__int64 LUI_LuaCall_Clans_LeaveClan(lua_State *const luaVM)
{
  unsigned int v3; 
  int v4; 
  unsigned __int64 v5; 
  __int128 v6; 
  unsigned __int64 v8; 
  bool v9; 
  OnlineClansManager *Instance; 
  OnlineClan *ClanById; 
  unsigned int v12; 

  v3 = 1;
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Clans.LeaveClan( <controllerIndex>, <clanID> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_isnumber(luaVM, 2) )
  {
    v4 = j_lua_tointeger(luaVM, 1);
    *(double *)&_XMM0 = j_lua_tonumber(luaVM, 2);
    v5 = 0i64;
    if ( *(double *)&_XMM0 >= 9.223372036854776e18 )
    {
      *((_QWORD *)&v6 + 1) = *((_QWORD *)&_XMM0 + 1);
      *(double *)&v6 = *(double *)&_XMM0 - 9.223372036854776e18;
      _XMM0 = v6;
      if ( *(double *)&v6 < 9.223372036854776e18 )
        v5 = 0x8000000000000000ui64;
    }
    __asm { vcvttsd2si rbx, xmm0 }
    v8 = v5 + _RBX;
    v9 = 0;
    Instance = OnlineClansManager::GetInstance();
    ClanById = OnlineClansManager::GetClanById(Instance, v4, v8);
    if ( ClanById )
      v9 = OnlineClan::LeaveClan(ClanById);
    j_lua_pushboolean(luaVM, v9);
  }
  else
  {
    v3 = 0;
  }
  if ( (int)v3 > j_lua_gettop(luaVM) )
  {
    v12 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v3, v12);
  }
  return v3;
}

/*
==============
LUI_LuaCall_Clans_IsActiveClan
==============
*/
__int64 LUI_LuaCall_Clans_IsActiveClan(lua_State *const luaVM)
{
  unsigned int v3; 
  int v4; 
  unsigned __int64 v5; 
  __int128 v6; 
  unsigned __int64 v8; 
  OnlineClansManager *Instance; 
  OnlineClan *ClanById; 
  bool IsActiveClan; 
  unsigned int v12; 

  v3 = 1;
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Clans.IsActiveClan( <controllerIndex>, <clanID> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_isnumber(luaVM, 2) )
  {
    v4 = j_lua_tointeger(luaVM, 1);
    *(double *)&_XMM0 = j_lua_tonumber(luaVM, 2);
    v5 = 0i64;
    if ( *(double *)&_XMM0 >= 9.223372036854776e18 )
    {
      *((_QWORD *)&v6 + 1) = *((_QWORD *)&_XMM0 + 1);
      *(double *)&v6 = *(double *)&_XMM0 - 9.223372036854776e18;
      _XMM0 = v6;
      if ( *(double *)&v6 < 9.223372036854776e18 )
        v5 = 0x8000000000000000ui64;
    }
    __asm { vcvttsd2si rbx, xmm0 }
    v8 = v5 + _RBX;
    Instance = OnlineClansManager::GetInstance();
    ClanById = OnlineClansManager::GetClanById(Instance, v4, v8);
    if ( ClanById )
    {
      IsActiveClan = OnlineClan::IsActiveClan(ClanById);
      j_lua_pushboolean(luaVM, IsActiveClan);
    }
    else
    {
      j_lua_pushboolean(luaVM, 0);
    }
  }
  else
  {
    v3 = 0;
  }
  if ( (int)v3 > j_lua_gettop(luaVM) )
  {
    v12 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v3, v12);
  }
  return v3;
}

/*
==============
LUI_LuaCall_Clans_SetHappyHour
==============
*/
__int64 LUI_LuaCall_Clans_SetHappyHour(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_Clans_SetHappyHour_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_Clans_GetHappyHour
==============
*/
__int64 LUI_LuaCall_Clans_GetHappyHour(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_Clans_GetHappyHour_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_Clans_GetClanInvites
==============
*/
__int64 LUI_LuaCall_Clans_GetClanInvites(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_Clans_GetClanInvites_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_Clans_GetOutgoingClanInvites
==============
*/
__int64 LUI_LuaCall_Clans_GetOutgoingClanInvites(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_Clans_GetOutgoingClanInvites_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_Clans_InviteMember
==============
*/
__int64 LUI_LuaCall_Clans_InviteMember(lua_State *const luaVM)
{
  int v3; 
  unsigned __int64 v4; 
  __int128 v5; 
  unsigned __int64 v7; 
  OnlineClansManager *Instance; 
  OnlineClan *ClanById; 
  unsigned int v10; 
  XUID result; 

  if ( j_lua_gettop(luaVM) != 3 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || !j_lua_isstring(luaVM, 3) )
    j_luaL_error(luaVM, "USAGE: Clans.InviteMember( <controllerIndex>, <clanID>, <xuidString> )");
  if ( j_lua_gettop(luaVM) == 3 && j_lua_isnumber(luaVM, 1) && j_lua_isnumber(luaVM, 2) && j_lua_isstring(luaVM, 3) )
  {
    v3 = j_lua_tointeger(luaVM, 1);
    *(double *)&_XMM0 = j_lua_tonumber(luaVM, 2);
    v4 = 0i64;
    if ( *(double *)&_XMM0 >= 9.223372036854776e18 )
    {
      *((_QWORD *)&v5 + 1) = *((_QWORD *)&_XMM0 + 1);
      *(double *)&v5 = *(double *)&_XMM0 - 9.223372036854776e18;
      _XMM0 = v5;
      if ( *(double *)&v5 < 9.223372036854776e18 )
        v4 = 0x8000000000000000ui64;
    }
    __asm { vcvttsd2si rbx, xmm0 }
    v7 = v4 + _RBX;
    LUI_ToXUID(&result, luaVM, 3);
    Instance = OnlineClansManager::GetInstance();
    ClanById = OnlineClansManager::GetClanById(Instance, v3, v7);
    if ( ClanById )
      OnlineClan::InviteMember(ClanById, result);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v10 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v10);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_Clans_InviteMemberByName
==============
*/
__int64 LUI_LuaCall_Clans_InviteMemberByName(lua_State *const luaVM)
{
  int v3; 
  unsigned __int64 v4; 
  __int128 v5; 
  unsigned __int64 v7; 
  const char *v8; 
  char v9; 
  OnlineClansManager *Instance; 
  unsigned int v11; 
  ClientPlatform platform; 

  if ( j_lua_gettop(luaVM) != 4 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || !j_lua_isstring(luaVM, 3) || !j_lua_isnumber(luaVM, 4) )
    j_luaL_error(luaVM, "USAGE: Clans.InviteMemberByName( <controllerIndex>, <clanID>, <name>, <searchPlatform> )");
  if ( j_lua_gettop(luaVM) == 4 && j_lua_isnumber(luaVM, 1) && j_lua_isnumber(luaVM, 2) && j_lua_isstring(luaVM, 3) && j_lua_isnumber(luaVM, 4) )
  {
    v3 = j_lua_tointeger(luaVM, 1);
    *(double *)&_XMM0 = j_lua_tonumber(luaVM, 2);
    v4 = 0i64;
    if ( *(double *)&_XMM0 >= 9.223372036854776e18 )
    {
      *((_QWORD *)&v5 + 1) = *((_QWORD *)&_XMM0 + 1);
      *(double *)&v5 = *(double *)&_XMM0 - 9.223372036854776e18;
      _XMM0 = v5;
      if ( *(double *)&v5 < 9.223372036854776e18 )
        v4 = 0x8000000000000000ui64;
    }
    __asm { vcvttsd2si rsi, xmm0 }
    v7 = v4 + _RSI;
    v8 = j_lua_tolstring(luaVM, 3, NULL);
    v9 = j_lua_tointeger(luaVM, 4);
    Instance = OnlineClansManager::GetInstance();
    LOBYTE(platform) = v9;
    OnlineClansManager::InviteMemberByName(Instance, v3, v7, v8, platform);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v11 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v11);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_Clans_RevokeInvitation
==============
*/
__int64 LUI_LuaCall_Clans_RevokeInvitation(lua_State *const luaVM)
{
  int v3; 
  unsigned __int64 v4; 
  __int128 v5; 
  unsigned __int64 v7; 
  OnlineClansManager *Instance; 
  OnlineClan *ClanById; 
  unsigned int v10; 
  XUID result; 

  if ( j_lua_gettop(luaVM) != 3 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || !j_lua_isstring(luaVM, 3) )
    j_luaL_error(luaVM, "USAGE: Clans.RevokeInvitation( <controllerIndex>, <clanID>, <xuidString> )");
  if ( j_lua_gettop(luaVM) == 3 && j_lua_isnumber(luaVM, 1) && j_lua_isnumber(luaVM, 2) && j_lua_isstring(luaVM, 3) )
  {
    v3 = j_lua_tointeger(luaVM, 1);
    *(double *)&_XMM0 = j_lua_tonumber(luaVM, 2);
    v4 = 0i64;
    if ( *(double *)&_XMM0 >= 9.223372036854776e18 )
    {
      *((_QWORD *)&v5 + 1) = *((_QWORD *)&_XMM0 + 1);
      *(double *)&v5 = *(double *)&_XMM0 - 9.223372036854776e18;
      _XMM0 = v5;
      if ( *(double *)&v5 < 9.223372036854776e18 )
        v4 = 0x8000000000000000ui64;
    }
    __asm { vcvttsd2si rbx, xmm0 }
    v7 = v4 + _RBX;
    LUI_ToXUID(&result, luaVM, 3);
    Instance = OnlineClansManager::GetInstance();
    ClanById = OnlineClansManager::GetClanById(Instance, v3, v7);
    if ( ClanById )
      OnlineClan::RevokeInvitation(ClanById, result);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v10 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v10);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_Clans_RemoveMember
==============
*/
__int64 LUI_LuaCall_Clans_RemoveMember(lua_State *const luaVM)
{
  int v3; 
  unsigned __int64 v4; 
  __int128 v5; 
  unsigned __int64 v7; 
  OnlineClansManager *Instance; 
  OnlineClan *ClanById; 
  unsigned int v10; 
  XUID result; 

  if ( j_lua_gettop(luaVM) != 3 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || !j_lua_isstring(luaVM, 3) )
    j_luaL_error(luaVM, "USAGE: Clans.RemoveMember( <controllerIndex>, <clanID>, <xuidString> )");
  if ( j_lua_gettop(luaVM) == 3 && j_lua_isnumber(luaVM, 1) && j_lua_isnumber(luaVM, 2) && j_lua_isstring(luaVM, 3) )
  {
    v3 = j_lua_tointeger(luaVM, 1);
    *(double *)&_XMM0 = j_lua_tonumber(luaVM, 2);
    v4 = 0i64;
    if ( *(double *)&_XMM0 >= 9.223372036854776e18 )
    {
      *((_QWORD *)&v5 + 1) = *((_QWORD *)&_XMM0 + 1);
      *(double *)&v5 = *(double *)&_XMM0 - 9.223372036854776e18;
      _XMM0 = v5;
      if ( *(double *)&v5 < 9.223372036854776e18 )
        v4 = 0x8000000000000000ui64;
    }
    __asm { vcvttsd2si rbx, xmm0 }
    v7 = v4 + _RBX;
    LUI_ToXUID(&result, luaVM, 3);
    Instance = OnlineClansManager::GetInstance();
    ClanById = OnlineClansManager::GetClanById(Instance, v3, v7);
    if ( ClanById )
      OnlineClan::RemoveMember(ClanById, result);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v10 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v10);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_Clans_PromoteToOwner
==============
*/
__int64 LUI_LuaCall_Clans_PromoteToOwner(lua_State *const luaVM)
{
  unsigned int v3; 
  int v4; 
  unsigned __int64 v5; 
  __int128 v6; 
  unsigned __int64 v8; 
  OnlineClansManager *Instance; 
  OnlineClan *ClanById; 
  unsigned int v11; 
  XUID result; 

  v3 = 1;
  if ( j_lua_gettop(luaVM) != 3 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || !j_lua_isstring(luaVM, 3) )
    j_luaL_error(luaVM, "USAGE: Clans.PromoteToOwner( <controllerIndex>, <clanID>, <xuidString> )");
  if ( j_lua_gettop(luaVM) == 3 && j_lua_isnumber(luaVM, 1) && j_lua_isnumber(luaVM, 2) && j_lua_isstring(luaVM, 3) )
  {
    v4 = j_lua_tointeger(luaVM, 1);
    *(double *)&_XMM0 = j_lua_tonumber(luaVM, 2);
    v5 = 0i64;
    if ( *(double *)&_XMM0 >= 9.223372036854776e18 )
    {
      *((_QWORD *)&v6 + 1) = *((_QWORD *)&_XMM0 + 1);
      *(double *)&v6 = *(double *)&_XMM0 - 9.223372036854776e18;
      _XMM0 = v6;
      if ( *(double *)&v6 < 9.223372036854776e18 )
        v5 = 0x8000000000000000ui64;
    }
    __asm { vcvttsd2si rbx, xmm0 }
    v8 = v5 + _RBX;
    LUI_ToXUID(&result, luaVM, 3);
    Instance = OnlineClansManager::GetInstance();
    ClanById = OnlineClansManager::GetClanById(Instance, v4, v8);
    if ( ClanById && OnlineClan::PromoteToOwner(ClanById, result) )
      j_lua_pushboolean(luaVM, 1);
    else
      j_lua_pushboolean(luaVM, 0);
  }
  else
  {
    v3 = 0;
  }
  if ( (int)v3 > j_lua_gettop(luaVM) )
  {
    v11 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v3, v11);
  }
  return v3;
}

/*
==============
LUI_LuaCall_Clans_PromoteToOfficer
==============
*/
__int64 LUI_LuaCall_Clans_PromoteToOfficer(lua_State *const luaVM)
{
  int v3; 
  unsigned __int64 v4; 
  __int128 v5; 
  unsigned __int64 v7; 
  OnlineClansManager *Instance; 
  OnlineClan *ClanById; 
  unsigned int v10; 
  XUID result; 

  if ( j_lua_gettop(luaVM) != 3 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || !j_lua_isstring(luaVM, 3) )
    j_luaL_error(luaVM, "USAGE: Clans.PromoteToOfficer( <controllerIndex>, <clanID>, <xuidString> )");
  if ( j_lua_gettop(luaVM) == 3 && j_lua_isnumber(luaVM, 1) && j_lua_isnumber(luaVM, 2) && j_lua_isstring(luaVM, 3) )
  {
    v3 = j_lua_tointeger(luaVM, 1);
    *(double *)&_XMM0 = j_lua_tonumber(luaVM, 2);
    v4 = 0i64;
    if ( *(double *)&_XMM0 >= 9.223372036854776e18 )
    {
      *((_QWORD *)&v5 + 1) = *((_QWORD *)&_XMM0 + 1);
      *(double *)&v5 = *(double *)&_XMM0 - 9.223372036854776e18;
      _XMM0 = v5;
      if ( *(double *)&v5 < 9.223372036854776e18 )
        v4 = 0x8000000000000000ui64;
    }
    __asm { vcvttsd2si rbx, xmm0 }
    v7 = v4 + _RBX;
    LUI_ToXUID(&result, luaVM, 3);
    Instance = OnlineClansManager::GetInstance();
    ClanById = OnlineClansManager::GetClanById(Instance, v3, v7);
    if ( ClanById )
      OnlineClan::PromoteToOfficer(ClanById, result);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v10 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v10);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_Clans_DemoteToMember
==============
*/
__int64 LUI_LuaCall_Clans_DemoteToMember(lua_State *const luaVM)
{
  int v3; 
  unsigned __int64 v4; 
  __int128 v5; 
  unsigned __int64 v7; 
  OnlineClansManager *Instance; 
  OnlineClan *ClanById; 
  unsigned int v10; 
  XUID result; 

  if ( j_lua_gettop(luaVM) != 3 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || !j_lua_isstring(luaVM, 3) )
    j_luaL_error(luaVM, "USAGE: Clans.DemoteToMember( <controllerIndex>, <clanID>, <xuidString> )");
  if ( j_lua_gettop(luaVM) == 3 && j_lua_isnumber(luaVM, 1) && j_lua_isnumber(luaVM, 2) && j_lua_isstring(luaVM, 3) )
  {
    v3 = j_lua_tointeger(luaVM, 1);
    *(double *)&_XMM0 = j_lua_tonumber(luaVM, 2);
    v4 = 0i64;
    if ( *(double *)&_XMM0 >= 9.223372036854776e18 )
    {
      *((_QWORD *)&v5 + 1) = *((_QWORD *)&_XMM0 + 1);
      *(double *)&v5 = *(double *)&_XMM0 - 9.223372036854776e18;
      _XMM0 = v5;
      if ( *(double *)&v5 < 9.223372036854776e18 )
        v4 = 0x8000000000000000ui64;
    }
    __asm { vcvttsd2si rbx, xmm0 }
    v7 = v4 + _RBX;
    LUI_ToXUID(&result, luaVM, 3);
    Instance = OnlineClansManager::GetInstance();
    ClanById = OnlineClansManager::GetClanById(Instance, v3, v7);
    if ( ClanById )
      OnlineClan::DemoteToMember(ClanById, result);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v10 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v10);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_Clans_GetMember
==============
*/
__int64 LUI_LuaCall_Clans_GetMember(lua_State *const luaVM)
{
  unsigned int v3; 
  int v4; 
  unsigned __int64 v5; 
  __int128 v6; 
  unsigned __int64 v8; 
  OnlineClansManager *Instance; 
  OnlineClan *ClanById; 
  bool v11; 
  lua_State *v12; 
  const char *v13; 
  unsigned int v16; 
  OnlineClanMember *member; 
  XUID result; 

  v3 = 1;
  if ( j_lua_gettop(luaVM) != 3 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || !j_lua_isstring(luaVM, 3) )
    j_luaL_error(luaVM, "USAGE: Clans.GetMember( <controllerIndex>, <clanID>, <xuidString> )");
  if ( j_lua_gettop(luaVM) != 3 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || !j_lua_isstring(luaVM, 3) )
    goto LABEL_16;
  v4 = j_lua_tointeger(luaVM, 1);
  *(double *)&_XMM0 = j_lua_tonumber(luaVM, 2);
  v5 = 0i64;
  if ( *(double *)&_XMM0 >= 9.223372036854776e18 )
  {
    *((_QWORD *)&v6 + 1) = *((_QWORD *)&_XMM0 + 1);
    *(double *)&v6 = *(double *)&_XMM0 - 9.223372036854776e18;
    _XMM0 = v6;
    if ( *(double *)&v6 < 9.223372036854776e18 )
      v5 = 0x8000000000000000ui64;
  }
  __asm { vcvttsd2si rbx, xmm0 }
  v8 = v5 + _RBX;
  LUI_ToXUID(&result, luaVM, 3);
  Instance = OnlineClansManager::GetInstance();
  ClanById = OnlineClansManager::GetClanById(Instance, v4, v8);
  if ( ClanById )
  {
    v11 = OnlineClan::GetMember(ClanById, result, (const OnlineClanMember **)&member);
    j_lua_createtable(luaVM, 0, 4);
    LUI_SetTableBool("memberFound", v11, LUI_luaVM);
    if ( v11 )
    {
      LUI_SetTableString((const char *)&stru_143C9A1A4, member->name, LUI_luaVM);
      v12 = LUI_luaVM;
      v13 = XUID::ToString(&member->xuid);
      LUI_SetTableString("xuid", v13, v12);
      _XMM1 = 0i64;
      __asm { vcvtsi2sd xmm1, xmm1, ecx; value }
      LUI_SetTableNumber("role", *(long double *)&_XMM1, LUI_luaVM);
    }
  }
  else
  {
LABEL_16:
    v3 = 0;
  }
  if ( (int)v3 > j_lua_gettop(luaVM) )
  {
    v16 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v3, v16);
  }
  return v3;
}

/*
==============
LUI_LuaCall_Clans_GetMemberRole
==============
*/
__int64 LUI_LuaCall_Clans_GetMemberRole(lua_State *const luaVM)
{
  unsigned int v3; 
  int v4; 
  unsigned __int64 v5; 
  __int128 v6; 
  unsigned __int64 v8; 
  OnlineClansManager *Instance; 
  OnlineClan *ClanById; 
  OnlineClanRole MemberRole; 
  unsigned int v12; 
  XUID result; 

  v3 = 1;
  if ( j_lua_gettop(luaVM) != 3 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || !j_lua_isstring(luaVM, 3) )
    j_luaL_error(luaVM, "USAGE: Clans.GetMemberRole( <controllerIndex>, <clanID>, <xuidString> )");
  if ( j_lua_gettop(luaVM) != 3 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || !j_lua_isstring(luaVM, 3) )
    goto LABEL_15;
  v4 = j_lua_tointeger(luaVM, 1);
  *(double *)&_XMM0 = j_lua_tonumber(luaVM, 2);
  v5 = 0i64;
  if ( *(double *)&_XMM0 >= 9.223372036854776e18 )
  {
    *((_QWORD *)&v6 + 1) = *((_QWORD *)&_XMM0 + 1);
    *(double *)&v6 = *(double *)&_XMM0 - 9.223372036854776e18;
    _XMM0 = v6;
    if ( *(double *)&v6 < 9.223372036854776e18 )
      v5 = 0x8000000000000000ui64;
  }
  __asm { vcvttsd2si rbx, xmm0 }
  v8 = v5 + _RBX;
  LUI_ToXUID(&result, luaVM, 3);
  Instance = OnlineClansManager::GetInstance();
  ClanById = OnlineClansManager::GetClanById(Instance, v4, v8);
  if ( ClanById )
  {
    MemberRole = OnlineClan::GetMemberRole(ClanById, result);
    j_lua_pushinteger(luaVM, (unsigned __int16)MemberRole);
  }
  else
  {
LABEL_15:
    v3 = 0;
  }
  if ( (int)v3 > j_lua_gettop(luaVM) )
  {
    v12 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v3, v12);
  }
  return v3;
}

/*
==============
LUI_LuaCall_Clans_AcceptClanInvite
==============
*/
__int64 LUI_LuaCall_Clans_AcceptClanInvite(lua_State *const luaVM)
{
  unsigned int v3; 
  int v4; 
  unsigned __int64 v5; 
  __int128 v6; 
  unsigned __int64 v8; 
  OnlineClansManager *Instance; 
  bool v10; 
  unsigned int v11; 

  v3 = 1;
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Clans.AcceptClanInvite( <controllerIndex>, <clanID> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_isnumber(luaVM, 2) )
  {
    v4 = j_lua_tointeger(luaVM, 1);
    *(double *)&_XMM0 = j_lua_tonumber(luaVM, 2);
    v5 = 0i64;
    if ( *(double *)&_XMM0 >= 9.223372036854776e18 )
    {
      *((_QWORD *)&v6 + 1) = *((_QWORD *)&_XMM0 + 1);
      *(double *)&v6 = *(double *)&_XMM0 - 9.223372036854776e18;
      _XMM0 = v6;
      if ( *(double *)&v6 < 9.223372036854776e18 )
        v5 = 0x8000000000000000ui64;
    }
    __asm { vcvttsd2si rbx, xmm0 }
    v8 = v5 + _RBX;
    Instance = OnlineClansManager::GetInstance();
    v10 = OnlineClansManager::AcceptClanInvite(Instance, v4, v8);
    j_lua_pushboolean(luaVM, v10);
  }
  else
  {
    v3 = 0;
  }
  if ( (int)v3 > j_lua_gettop(luaVM) )
  {
    v11 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v3, v11);
  }
  return v3;
}

/*
==============
LUI_LuaCall_Clans_DeclineClanInvite
==============
*/
__int64 LUI_LuaCall_Clans_DeclineClanInvite(lua_State *const luaVM)
{
  int v3; 
  unsigned __int64 v4; 
  __int128 v5; 
  unsigned __int64 v7; 
  OnlineClansManager *Instance; 
  unsigned int v9; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Clans.DeclineClanInvite( <controllerIndex>, <clanID> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_isnumber(luaVM, 2) )
  {
    v3 = j_lua_tointeger(luaVM, 1);
    *(double *)&_XMM0 = j_lua_tonumber(luaVM, 2);
    v4 = 0i64;
    if ( *(double *)&_XMM0 >= 9.223372036854776e18 )
    {
      *((_QWORD *)&v5 + 1) = *((_QWORD *)&_XMM0 + 1);
      *(double *)&v5 = *(double *)&_XMM0 - 9.223372036854776e18;
      _XMM0 = v5;
      if ( *(double *)&v5 < 9.223372036854776e18 )
        v4 = 0x8000000000000000ui64;
    }
    __asm { vcvttsd2si rbx, xmm0 }
    v7 = v4 + _RBX;
    Instance = OnlineClansManager::GetInstance();
    OnlineClansManager::SetShouldDeclineClanInvite(Instance, v3, v7);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v9 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v9);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_GetAlwaysBlockClanInvites
==============
*/
__int64 LUI_CoD_LuaCall_GetAlwaysBlockClanInvites(lua_State *const luaVM)
{
  unsigned int v2; 
  double v3; 
  bool AlwaysBlockClanInvites; 
  unsigned int v5; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Clans.GetAlwaysBlockClanInvites( <controllerIndex> )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
  {
    v3 = lui_tonumber32(luaVM, 1);
    AlwaysBlockClanInvites = GamerProfile_GetAlwaysBlockClanInvites((int)*(float *)&v3);
    j_lua_pushboolean(luaVM, AlwaysBlockClanInvites);
  }
  else
  {
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v5);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_SetAlwaysBlockClanInvites
==============
*/
__int64 LUI_CoD_LuaCall_SetAlwaysBlockClanInvites(lua_State *const luaVM)
{
  double v2; 
  int v3; 
  OnlineClansManager *Instance; 
  unsigned int v5; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || j_lua_type(luaVM, 2) != 1 )
    j_luaL_error(luaVM, "USAGE: Clans.SetAlwaysBlockClanInvites( <controllerIndex>, <alwaysBlock> )");
  if ( j_lua_gettop(luaVM) == 2 )
  {
    if ( j_lua_isnumber(luaVM, 1) )
    {
      if ( j_lua_type(luaVM, 2) == 1 )
      {
        v2 = lui_tonumber32(luaVM, 1);
        v3 = j_lua_toboolean(luaVM, 2);
        GamerProfile_SetAlwaysBlockClanInvites((int)*(float *)&v2, v3 != 0);
        if ( v3 )
        {
          Instance = OnlineClansManager::GetInstance();
          OnlineClansManager::SetAllInvitesToBeDeclined(Instance, (int)*(float *)&v2);
        }
      }
    }
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v5);
  }
  return 0i64;
}

/*
==============
CompareClanMember
==============
*/
int CompareClanMember(const void *m1, const void *m2)
{
  unsigned __int16 v2; 
  unsigned __int16 v3; 
  bool v4; 
  int result; 
  unsigned __int8 v6; 
  unsigned __int8 v7; 

  v2 = *((_WORD *)m1 + 56);
  v3 = *((_WORD *)m2 + 56);
  v4 = v2 < v3;
  if ( v2 == v3 )
  {
    v6 = *((_BYTE *)m1 + 115);
    v7 = *((_BYTE *)m2 + 115);
    v4 = v6 < v7;
    if ( v6 == v7 )
      return Com_PlayerUtils_SocialMenu_Stricmp((const char *)m1, (const char *)m2);
  }
  result = -1;
  if ( v4 )
    return 1;
  return result;
}

/*
==============
LUI_CoD_RegisterClanFunctions
==============
*/
void LUI_CoD_RegisterClanFunctions(lua_State *luaVM)
{
  j_luaL_register(luaVM, "Clans", s_Clans_methods);
  j_lua_settop(luaVM, -2);
}

/*
==============
LUI_CoD_RegisterSocialFunctions
==============
*/
void LUI_CoD_RegisterSocialFunctions(lua_State *luaVM)
{
  j_luaL_register(luaVM, "Social", s_Social_methods);
  j_lua_settop(luaVM, -2);
}

/*
==============
LUI_LuaCall_Clans_CreateClan_impl
==============
*/
__int64 LUI_LuaCall_Clans_CreateClan_impl(lua_State *const luaVM)
{
  int v2; 
  const char *v3; 
  __int64 v4; 
  const char *v5; 
  __int64 v6; 
  bool Clan; 
  OnlineClansManager *Instance; 
  char clanName[8]; 
  char dest[40]; 
  char _Buffer[48]; 

  if ( j_lua_gettop(luaVM) != 3 || !j_lua_isnumber(luaVM, 1) || !j_lua_isstring(luaVM, 2) || !j_lua_isstring(luaVM, 3) )
    j_luaL_error(luaVM, "USAGE: Clans.CreateClan( <controllerIndex>, <clanName>, <clanTag> )");
  if ( j_lua_gettop(luaVM) != 3 || !j_lua_isnumber(luaVM, 1) || !j_lua_isstring(luaVM, 2) || !j_lua_isstring(luaVM, 3) )
    return 0i64;
  v2 = j_lua_tointeger(luaVM, 1);
  v3 = j_lua_tolstring(luaVM, 2, NULL);
  v4 = -1i64;
  v5 = j_lua_tolstring(luaVM, 3, NULL);
  v6 = -1i64;
  do
    ++v6;
  while ( v3[v6] );
  if ( (unsigned int)v6 >= 0x24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_social.cpp", 3358, ASSERT_TYPE_ASSERT, "(I_strlen( clanName ) < ( sizeof( *array_counter( sanitizedClanName ) ) + 0 ))", (const char *)&queryFormat, "I_strlen( clanName ) < ARRAY_COUNT( sanitizedClanName )") )
    __debugbreak();
  do
    ++v4;
  while ( v5[v4] );
  if ( (unsigned int)v4 >= 6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_social.cpp", 3359, ASSERT_TYPE_ASSERT, "(I_strlen( clanTag ) < ( sizeof( *array_counter( sanitizedClanTag ) ) + 0 ))", (const char *)&queryFormat, "I_strlen( clanTag ) < ARRAY_COUNT( sanitizedClanTag )") )
    __debugbreak();
  Clan = 0;
  Core_strcpy(dest, 0x24ui64, v3);
  Core_strcpy(clanName, 6ui64, v5);
  CL_PlayerData_SanitizeClanName(dest);
  CL_PlayerData_SanitizeClanName(clanName);
  j_sprintf(_Buffer, "%s%s", clanName, dest);
  if ( !ProfanityFilter_IsBadWord(v2, _Buffer) )
  {
    Instance = OnlineClansManager::GetInstance();
    Clan = OnlineClansManager::CreateClan(Instance, v2, dest, clanName);
  }
  j_lua_pushboolean(luaVM, Clan);
  return 1i64;
}

/*
==============
LUI_LuaCall_Clans_GetClanInvites_impl
==============
*/
__int64 LUI_LuaCall_Clans_GetClanInvites_impl(lua_State *const luaVM)
{
  int v2; 
  OnlineClanInvite *v3; 
  __int64 v4; 
  unsigned int v5; 
  OnlineClansManager *Instance; 
  __int64 v7; 
  OnlineClanInvite *v10; 
  lua_State *v11; 
  const char *v12; 
  lua_State *v17; 
  const char *v18; 
  unsigned int numInvitesOut[4]; 
  OnlineClanInvite invitesOut[10]; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Clans.GetClanInvites( <controllerIndex> )");
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    return 0i64;
  v2 = j_lua_tointeger(luaVM, 1);
  v3 = invitesOut;
  v4 = 10i64;
  do
  {
    OnlineClanInvite::OnlineClanInvite(v3++);
    --v4;
  }
  while ( v4 );
  v5 = 0;
  numInvitesOut[0] = 0;
  Instance = OnlineClansManager::GetInstance();
  OnlineClansManager::GetClanInvites(Instance, v2, invitesOut, numInvitesOut);
  j_lua_createtable(luaVM, numInvitesOut[0], 0);
  if ( numInvitesOut[0] )
  {
    do
    {
      v7 = v5;
      _XMM1 = 0i64;
      ++v5;
      __asm { vcvtsi2sd xmm1, xmm1, rax; n }
      v10 = &invitesOut[v7];
      j_lua_pushnumber(luaVM, *(long double *)&_XMM1);
      j_lua_createtable(luaVM, 0, 13);
      v11 = LUI_luaVM;
      v12 = XUID::ToString(&v10->inviter);
      LUI_SetTableString("inviterXuid", v12, v11);
      LUI_SetTableString("inviterName", v10->inviterName, LUI_luaVM);
      LUI_SetTableString("clanName", v10->clanName, LUI_luaVM);
      LUI_SetTableString("clanTag", v10->clanTag, LUI_luaVM);
      _XMM1 = 0i64;
      __asm { vcvtsi2sd xmm1, xmm1, rax }
      if ( (v10->clanId & 0x8000000000000000ui64) != 0i64 )
        *(double *)&_XMM1 = *(double *)&_XMM1 + 1.844674407370955e19;
      LUI_SetTableNumber("clanId", *(long double *)&_XMM1, LUI_luaVM);
      _XMM1 = 0i64;
      __asm { vcvtsi2sd xmm1, xmm1, rax }
      if ( (v10->sentTimestamp & 0x8000000000000000ui64) != 0i64 )
        *(double *)&_XMM1 = *(double *)&_XMM1 + 1.844674407370955e19;
      LUI_SetTableNumber("sentTimestamp", *(long double *)&_XMM1, LUI_luaVM);
      v17 = LUI_luaVM;
      v18 = XUID::ToString(&v10->clanOwner);
      LUI_SetTableString("clanOwnerXuid", v18, v17);
      LUI_SetTableBool("nameFetched", v10->dataFetched, LUI_luaVM);
      LUI_Social_SetPlayerCardTableData(v10->inviter, v10->inviterName);
      j_lua_settable(luaVM, -3);
    }
    while ( v5 < numInvitesOut[0] );
  }
  return 1i64;
}

/*
==============
LUI_LuaCall_Clans_GetClanMembers_impl
==============
*/
__int64 LUI_LuaCall_Clans_GetClanMembers_impl(lua_State *const luaVM)
{
  int v3; 
  unsigned __int64 v4; 
  __int128 v5; 
  unsigned __int64 v7; 
  OnlineClansManager *Instance; 
  OnlineClan *ClanById; 
  __int64 v11; 
  XUID *v12; 
  __int64 v13; 
  OnlineClanMember *v14; 
  unsigned int v15; 
  const SocialPresence *Presence; 
  unsigned int v17; 
  int v18; 
  OnlineClanMember *v19; 
  int v20; 
  lua_State *v23; 
  const char *v24; 
  bool v27; 
  char *ClanTag; 
  OnlineClanMember *v29; 
  const char *v30; 
  int PortForLocalXUID; 
  LocalClientNum_t ClientFromController; 
  SocialPresence *v35; 
  const char *PresenceString; 
  lua_State *v37; 
  PresencePlatform Platform; 
  __int64 v44; 
  __int64 v45; 
  unsigned int numMembers; 
  unsigned int v47; 
  int v48; 
  int v49; 
  int v50; 
  OnlineClanMember *members; 
  XUID result; 
  PlayerProfileData profileData; 
  XUID xuidList[250]; 
  OnlineClanMember Base[250]; 
  char outBuffer[8]; 
  int v57; 
  char v58[21]; 
  char dest[128]; 

  if ( (j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2)) && (j_lua_gettop(luaVM) != 3 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || !j_lua_isnumber(luaVM, 3)) )
    j_luaL_error(luaVM, "USAGE: Clans.GetClanMembers( <controllerIndex>, <clanID>, [memberFilter] )");
  if ( (j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2)) && (j_lua_gettop(luaVM) != 3 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || !j_lua_isnumber(luaVM, 3)) )
    return 0i64;
  v3 = j_lua_tointeger(luaVM, 1);
  *(double *)&_XMM0 = j_lua_tonumber(luaVM, 2);
  v4 = 0i64;
  if ( *(double *)&_XMM0 >= 9.223372036854776e18 )
  {
    *((_QWORD *)&v5 + 1) = *((_QWORD *)&_XMM0 + 1);
    *(double *)&v5 = *(double *)&_XMM0 - 9.223372036854776e18;
    _XMM0 = v5;
    if ( *(double *)&v5 < 9.223372036854776e18 )
      v4 = 0x8000000000000000ui64;
  }
  __asm { vcvttsd2si rbx, xmm0 }
  v7 = v4 + _RBX;
  LOBYTE(_R13) = 0;
  v49 = 0;
  if ( j_lua_gettop(luaVM) == 3 )
  {
    *(double *)&_XMM0 = j_lua_tonumber(luaVM, 3);
    __asm { vcvttsd2si r13d, xmm0 }
    v49 = _R13;
  }
  Instance = OnlineClansManager::GetInstance();
  ClanById = OnlineClansManager::GetClanById(Instance, v3, v7);
  if ( !ClanById )
    return 0i64;
  v11 = 250i64;
  v12 = xuidList;
  v13 = 250i64;
  do
  {
    XUID::XUID(v12++);
    --v13;
  }
  while ( v13 );
  numMembers = 0;
  OnlineClan::GetMembers(ClanById, (const OnlineClanMember **)&members, &numMembers);
  if ( numMembers > 0xFA && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_social.cpp", 3455, ASSERT_TYPE_ASSERT, "(numMembers <= ( sizeof( *array_counter( cacheXuidList ) ) + 0 ))", (const char *)&queryFormat, "numMembers <= ARRAY_COUNT( cacheXuidList )") )
    __debugbreak();
  v14 = Base;
  do
  {
    OnlineClanMember::OnlineClanMember(v14++);
    --v11;
  }
  while ( v11 );
  v15 = numMembers;
  memcpy_0(Base, members, 120i64 * numMembers);
  if ( v15 )
  {
    do
    {
      Presence = Social_GetPresence(v3, Base[(unsigned int)v11].xuid);
      if ( Presence )
        Base[(unsigned int)v11].isOnline = Presence->m_context != 0;
      v15 = numMembers;
      LODWORD(v11) = v11 + 1;
    }
    while ( (unsigned int)v11 < numMembers );
  }
  qsort(Base, v15, 0x78ui64, (_CoreCrtNonSecureSearchSortCompareFunction)CompareClanMember);
  j_lua_createtable(luaVM, numMembers, 0);
  v17 = 0;
  v48 = 1;
  v47 = 0;
  if ( numMembers )
  {
    v18 = _R13 & 4;
    v50 = v18;
    while ( 1 )
    {
      v19 = &Base[v17];
      memset_0(dest, 0, sizeof(dest));
      if ( !v18 || v19->role != OWNER )
      {
        if ( (_R13 & 1) != 0 && v19->role == MEMBER )
          goto LABEL_67;
        if ( ((_R13 & 2) == 0 || v19->role != OFFICER) && !XUID::IsNull(&v19->xuid) )
          break;
      }
LABEL_66:
      v47 = ++v17;
      if ( v17 >= numMembers )
        goto LABEL_67;
    }
    v20 = v48;
    XUID::operator=(&xuidList[v48 - 1], &v19->xuid);
    _XMM1 = 0i64;
    __asm { vcvtsi2sd xmm1, xmm1, ebx; n }
    j_lua_pushnumber(luaVM, *(long double *)&_XMM1);
    v48 = v20 + 1;
    j_lua_createtable(luaVM, 0, 7);
    v23 = LUI_luaVM;
    v24 = XUID::ToString(&v19->xuid);
    LUI_SetTableString("xuid", v24, v23);
    _XMM1 = 0i64;
    __asm { vcvtsi2sd xmm1, xmm1, eax; value }
    LUI_SetTableNumber("role", *(long double *)&_XMM1, LUI_luaVM);
    v27 = 0;
    if ( Live_IsUserSignedIn(v3) )
    {
      Live_GetXuid(&result, v3);
      v27 = XUID::operator==(&result, &v19->xuid);
    }
    LUI_SetTableBool("isMyPlayer", v27, LUI_luaVM);
    if ( PlayercardCache_GetPlayercard(v19->xuid, Base[v17].name, &profileData) && profileData.clanAbbrev[0] )
    {
      *(_QWORD *)outBuffer = 0i64;
      v57 = 0;
      if ( v27 )
        ClanTag = (char *)CL_PlayerData_GetClanTag(v3);
      else
        ClanTag = profileData.clanAbbrev;
      Com_PlayerUtils_ColorizeClanTag(ClanTag, profileData.clanTagType, outBuffer, 0xCui64, 0x37u);
      Com_sprintf<128>((char (*)[128])dest, "[%s]%s", outBuffer, profileData.name);
      LUI_SetTableString((const char *)&stru_143C9A1A4, dest, luaVM);
      if ( !v19->nameWithHash[0] )
        goto LABEL_55;
      memset_0(dest, 0, sizeof(dest));
      Com_sprintf<128>((char (*)[128])dest, "[%s]%s", outBuffer, v19->nameWithHash);
      v29 = (OnlineClanMember *)dest;
      v30 = "fullNameWithHash";
    }
    else
    {
      if ( v19->nameWithHash[0] )
        LUI_SetTableString("fullNameWithHash", v19->nameWithHash, luaVM);
      v29 = &Base[v17];
      v30 = (const char *)&stru_143C9A1A4;
    }
    LUI_SetTableString(v30, v29->name, luaVM);
LABEL_55:
    _R13 = 0i64;
    if ( Live_XUIDIsLocalPlayer(v19->xuid) )
    {
      PortForLocalXUID = Live_GetPortForLocalXUID(v19->xuid);
      ClientFromController = CL_Mgr_GetClientFromController(PortForLocalXUID);
      if ( (unsigned int)ClientFromController >= LOCAL_CLIENT_COUNT )
      {
        LODWORD(v45) = 2;
        LODWORD(v44) = ClientFromController;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 158, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v44, v45) )
          __debugbreak();
      }
      _XMM1 = 0i64;
      __asm { vcvtsi2sd xmm1, xmm1, dword ptr [rcx+rax]; value }
      LUI_SetTableNumber("inputType", *(long double *)&_XMM1, LUI_luaVM);
    }
    else
    {
      v35 = (SocialPresence *)Social_GetPresence(v3, v19->xuid);
      if ( v35 )
      {
        PresenceString = Social_GetPresenceString(v3, v19->xuid, NULL);
        LUI_SetTableString("presence", PresenceString, LUI_luaVM);
        v37 = LUI_luaVM;
        SocialPresence::GetPlatform(v35);
        _XMM1 = 0i64;
        __asm { vcvtsi2sd xmm1, xmm1, eax; value }
        LUI_SetTableNumber("platform", *(long double *)&_XMM1, v37);
        _XMM1 = 0i64;
        __asm { vcvtsi2sd xmm1, xmm1, eax; value }
        LUI_SetTableNumber("inputType", *(long double *)&_XMM1, LUI_luaVM);
        LOBYTE(v37) = SocialPresence::GetPlatform(v35);
        if ( (_BYTE)v37 == Social_GetPresencePlatform() )
          _R13 = SocialPresence::GetPlatformId(v35);
        LUI_SetTableBool("isOnline", v19->isOnline, luaVM);
        Platform = SocialPresence::GetPlatform(v35);
        LUI_SetTableInt("presencePlatform", (unsigned __int8)Platform, luaVM);
      }
      v17 = v47;
    }
    Com_sprintf<21>((char (*)[21])v58, "%zu", _R13);
    LUI_SetTableString("platformId", v58, luaVM);
    LUI_Social_SetPlayerCardTableData(v19->xuid, v19->name);
    j_lua_settable(luaVM, -3);
    LOBYTE(_R13) = v49;
    v18 = v50;
    goto LABEL_66;
  }
LABEL_67:
  PlayercardCache_UpdateOnlineFriendsCaching_Raw(v3, xuidList, numMembers);
  return 1i64;
}

/*
==============
LUI_LuaCall_Clans_GetHappyHour_impl
==============
*/
__int64 LUI_LuaCall_Clans_GetHappyHour_impl(lua_State *const luaVM)
{
  int v3; 
  unsigned __int64 v4; 
  __int128 v5; 
  unsigned __int64 v7; 
  OnlineClansManager *Instance; 
  OnlineClan *ClanById; 
  int v10; 
  unsigned __int64 UTC; 
  __time64_t v12; 
  __int64 v13; 
  struct tm *v14; 
  unsigned __int16 happyHour; 
  int lastUpdateTime; 
  __time64_t Time; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Clans.GetHappyHour( <controllerIndex>, <clanID> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_isnumber(luaVM, 2) )
  {
    v3 = j_lua_tointeger(luaVM, 1);
    *(double *)&_XMM0 = j_lua_tonumber(luaVM, 2);
    v4 = 0i64;
    if ( *(double *)&_XMM0 >= 9.223372036854776e18 )
    {
      *((_QWORD *)&v5 + 1) = *((_QWORD *)&_XMM0 + 1);
      *(double *)&v5 = *(double *)&_XMM0 - 9.223372036854776e18;
      _XMM0 = v5;
      if ( *(double *)&v5 < 9.223372036854776e18 )
        v4 = 0x8000000000000000ui64;
    }
    __asm { vcvttsd2si rbx, xmm0 }
    v7 = v4 + _RBX;
    Instance = OnlineClansManager::GetInstance();
    ClanById = OnlineClansManager::GetClanById(Instance, v3, v7);
    j_lua_createtable(luaVM, 0, 4);
    if ( !ClanById || !OnlineClan::GetHappyHour(ClanById, &happyHour, &lastUpdateTime) )
      return 1i64;
    v10 = happyHour;
    UTC = LiveStorage_GetUTC();
    v12 = 86400 * (UTC / 0x15180) + (unsigned int)(60 * v10);
    Time = v12;
    if ( (__int64)(v12 - UTC) <= 86400 )
    {
      if ( (__int64)(v12 - UTC) >= 0 )
      {
LABEL_18:
        v13 = 86400 - (v12 - UTC);
        v14 = _localtime64(&Time);
        if ( v13 < 3600 )
          LUI_SetTableInt("secondsInHappyHour", 3600 - v13, LUI_luaVM);
        LUI_SetTableInt("happyHour", v14->tm_hour, LUI_luaVM);
        LUI_SetTableInt("happyMinutes", v14->tm_min, LUI_luaVM);
        LUI_SetTableInt("lastUpdateTime", lastUpdateTime, LUI_luaVM);
        _XMM1 = 0i64;
        __asm { vcvtsi2sd xmm1, xmm1, rbx; value }
        LUI_SetTableNumber("timeToHappyHour", *(long double *)&_XMM1, LUI_luaVM);
        return 1i64;
      }
      v12 += 86400i64;
    }
    else
    {
      v12 -= 86400i64;
    }
    Time = v12;
    goto LABEL_18;
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_Clans_GetOutgoingClanInvites_impl
==============
*/
__int64 LUI_LuaCall_Clans_GetOutgoingClanInvites_impl(lua_State *const luaVM)
{
  int v3; 
  unsigned __int64 v4; 
  __int128 v5; 
  unsigned __int64 v7; 
  OnlineClansManager *Instance; 
  OnlineClan *ClanById; 
  OnlineClan *v10; 
  unsigned int v11; 
  OnlineClanMember *v13; 
  lua_State *v15; 
  const char *v16; 
  unsigned int numInvites; 
  OnlineClanMember *members; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Clans.GetOutgoingClanInvites( <controllerIndex>, <clanID> )");
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    return 0i64;
  v3 = j_lua_tointeger(luaVM, 1);
  *(double *)&_XMM0 = j_lua_tonumber(luaVM, 2);
  v4 = 0i64;
  if ( *(double *)&_XMM0 >= 9.223372036854776e18 )
  {
    *((_QWORD *)&v5 + 1) = *((_QWORD *)&_XMM0 + 1);
    *(double *)&v5 = *(double *)&_XMM0 - 9.223372036854776e18;
    _XMM0 = v5;
    if ( *(double *)&v5 < 9.223372036854776e18 )
      v4 = 0x8000000000000000ui64;
  }
  __asm { vcvttsd2si rbx, xmm0 }
  v7 = v4 + _RBX;
  Instance = OnlineClansManager::GetInstance();
  ClanById = OnlineClansManager::GetClanById(Instance, v3, v7);
  v10 = ClanById;
  if ( !ClanById )
    return 0i64;
  v11 = 0;
  numInvites = 0;
  OnlineClan::GetOutgoingInvites(ClanById, (const OnlineClanMember **)&members, &numInvites);
  j_lua_createtable(luaVM, numInvites, 0);
  if ( numInvites )
  {
    do
    {
      _XMM1 = 0i64;
      v13 = &members[v11++];
      __asm { vcvtsi2sd xmm1, xmm1, rax; n }
      j_lua_pushnumber(luaVM, *(long double *)&_XMM1);
      j_lua_createtable(luaVM, 0, 7);
      v15 = LUI_luaVM;
      v16 = XUID::ToString(&v13->xuid);
      LUI_SetTableString("xuid", v16, v15);
      LUI_SetTableString((const char *)&stru_143C9A1A4, v13->name, LUI_luaVM);
      _XMM1 = 0i64;
      __asm { vcvtsi2sd xmm1, xmm1, rax }
      if ( (v10->m_id & 0x8000000000000000ui64) != 0i64 )
        *(double *)&_XMM1 = *(double *)&_XMM1 + 1.844674407370955e19;
      LUI_SetTableNumber("clanId", *(long double *)&_XMM1, LUI_luaVM);
      LUI_Social_SetPlayerCardTableData(v13->xuid, v13->name);
      j_lua_settable(luaVM, -3);
    }
    while ( v11 < numInvites );
  }
  return 1i64;
}

/*
==============
LUI_LuaCall_Clans_SetHappyHour_impl
==============
*/
__int64 LUI_LuaCall_Clans_SetHappyHour_impl(lua_State *const luaVM)
{
  int v3; 
  unsigned __int64 v4; 
  __int128 v5; 
  unsigned __int64 v7; 
  int v8; 
  __int16 v9; 
  OnlineClansManager *Instance; 
  OnlineClan *ClanById; 
  bool v12; 
  struct tm *v13; 
  struct tm *v14; 
  __time64_t Time; 
  __time64_t v17; 

  if ( j_lua_gettop(luaVM) != 4 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || !j_lua_isnumber(luaVM, 3) || !j_lua_isnumber(luaVM, 4) )
    j_luaL_error(luaVM, "USAGE: Clans.SetHappyHour( <controllerIndex>, <clanID>, <startHour>, <startMinutes> )");
  if ( j_lua_gettop(luaVM) != 4 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || !j_lua_isnumber(luaVM, 3) || !j_lua_isnumber(luaVM, 4) )
    return 0i64;
  v3 = j_lua_tointeger(luaVM, 1);
  *(double *)&_XMM0 = j_lua_tonumber(luaVM, 2);
  v4 = 0i64;
  if ( *(double *)&_XMM0 >= 9.223372036854776e18 )
  {
    *((_QWORD *)&v5 + 1) = *((_QWORD *)&_XMM0 + 1);
    *(double *)&v5 = *(double *)&_XMM0 - 9.223372036854776e18;
    _XMM0 = v5;
    if ( *(double *)&v5 < 9.223372036854776e18 )
      v4 = 0x8000000000000000ui64;
  }
  __asm { vcvttsd2si rbx, xmm0 }
  v7 = v4 + _RBX;
  v8 = j_lua_tointeger(luaVM, 3);
  v9 = j_lua_tointeger(luaVM, 4);
  Instance = OnlineClansManager::GetInstance();
  ClanById = OnlineClansManager::GetClanById(Instance, v3, v7);
  v12 = 0;
  if ( ClanById )
  {
    Time = LiveStorage_GetUTC();
    v13 = _localtime64(&Time);
    v13->tm_hour = v8;
    v17 = _mktime64(v13);
    v14 = _gmtime64(&v17);
    v12 = OnlineClan::SetHappyHour(ClanById, v9 + 60 * LOWORD(v14->tm_hour));
  }
  j_lua_pushboolean(luaVM, v12);
  return 1i64;
}

/*
==============
LUI_LuaCall_Social_CreatePrivateChat_impl
==============
*/
__int64 LUI_LuaCall_Social_CreatePrivateChat_impl(lua_State *const luaVM)
{
  int v2; 
  const char *v3; 
  unsigned __int64 v4; 
  const char *v5; 
  bool v6; 
  OnlineChatManager *Instance; 
  OnlineChatManager *v8; 
  XUID chatType; 
  OnlineChatId chatId; 

  if ( j_lua_gettop(luaVM) != 4 || !j_lua_isnumber(luaVM, 1) || !j_lua_isstring(luaVM, 2) || !j_lua_isstring(luaVM, 3) || j_lua_type(luaVM, 4) != 1 )
    j_luaL_error(luaVM, "USAGE: Social.CreatePrivateChat( <controllerIndex>, <xuidString>, <gamertag>, <shouldSwitchChannel> )");
  if ( j_lua_gettop(luaVM) != 4 || !j_lua_isnumber(luaVM, 1) || !j_lua_isstring(luaVM, 2) || !j_lua_isstring(luaVM, 3) || j_lua_type(luaVM, 4) != 1 )
    return 0i64;
  v2 = lui_tointeger32(luaVM, 1);
  v3 = j_lua_tolstring(luaVM, 2, NULL);
  v4 = I_atoui64(v3);
  v5 = j_lua_tolstring(luaVM, 3, NULL);
  v6 = j_lua_toboolean(luaVM, 4) != 0;
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_chat_types.h", 16, ASSERT_TYPE_ASSERT, "(_id != 0)", "%s\n\tShould call OnlineChatId.Clear() instead of SetID()", "_id != 0") )
    __debugbreak();
  chatId.m_id = v4;
  OnlineChatManager::GetInstance();
  Instance = OnlineChatManager::GetInstance();
  LODWORD(chatType.m_id) = 7;
  if ( !OnlineChatManager::IsChatActive(Instance, &chatId, (const OnlineChatType *)&chatType) )
  {
    XUID::FromUInt64(&chatType, v4);
    v8 = OnlineChatManager::GetInstance();
    OnlineChatManager::CreatePrivateChatByXUID(v8, v2, chatType, v5, v6);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_Social_FindPlayersWithGamertag_impl
==============
*/
__int64 LUI_LuaCall_Social_FindPlayersWithGamertag_impl(lua_State *const luaVM)
{
  int v3; 
  bool v4; 
  ntl::internal::pool_allocator_freelist<48> *p_m_freelist; 
  char *v6; 
  ntl::internal::pool_allocator_freelist<48> *v7; 
  char *v8; 
  Online_Friends *Instance; 
  FriendListGlobal *Friends; 
  int v11; 
  __int64 v12; 
  __int64 v13; 
  XUID *v14; 
  unsigned __int64 v15; 
  Online_Friends *v16; 
  ntl::red_black_tree_node_base *v19; 
  ntl::red_black_tree_node_base *v20; 
  bool v21; 
  ntl::red_black_tree_node_base *mp_right; 
  ntl::red_black_tree_node_base *i; 
  ntl::red_black_tree_node_base *v24; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *mp_next; 
  ntl::pair<char const *,bool> v26; 
  ntl::red_black_tree_node_base *v27; 
  lua_State *v28; 
  const char *v29; 
  OnlineChatId *v30; 
  __int64 v31; 
  OnlineChatManager *v32; 
  int v33; 
  OnlineChatType *v34; 
  OnlineChatManager *v35; 
  int v36; 
  __int64 v37; 
  ntl::red_black_tree_node<ntl::pair<char const *,bool> > *mp_node; 
  const char *v39; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 
  ntl::red_black_tree_node_base *mp_parent; 
  ntl::red_black_tree_node_base *v42; 
  ntl::red_black_tree_node_base *v43; 
  int v45; 
  ntl::red_black_tree_node_base *v48; 
  ntl::red_black_tree_node_base *v49; 
  ntl::red_black_tree_node_base *v50; 
  ntl::red_black_tree_node_base *mp_left; 
  bool isSessionPrivateOut[4]; 
  int v53; 
  int joinedChatCountOut[2]; 
  const char *v55; 
  lua_State *L; 
  ntl::red_black_tree_iterator<char const *,ntl::red_black_tree_node<ntl::pair<char const *,bool> >,ntl::pair<char const *,bool> *,ntl::pair<char const *,bool> &> result; 
  _QWORD v58[5]; 
  ntl::red_black_tree<char const *,ntl::pair<char const *,bool>,ntl::fixed_pool_allocator<ntl::red_black_tree_node<ntl::pair<char const *,bool> >,5,8>,ntl::return_pair_first<char const *,bool>,ntl::less<char const *,char const *> > v59; 
  OnlineChatType chatTypesBuffer[20]; 
  OnlineChatId chatIdsBuffer[18]; 
  ntl::pair<char const *,bool> r_element; 
  int v63; 
  char v64; 
  char outTruncatedPlayerName[40]; 
  char dest[21]; 
  char playerName[128]; 
  char presenceOut[128]; 

  v58[0] = -2i64;
  L = luaVM;
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isstring(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Social.FindPlayersWithGamertag( <controllerIndex>, <gamertag> )");
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isstring(luaVM, 1) )
    return 0i64;
  v3 = lui_tointeger32(luaVM, 1);
  v55 = j_lua_tolstring(luaVM, 2, NULL);
  v4 = strchr_0(v55, 35) != NULL;
  isSessionPrivateOut[0] = v4;
  p_m_freelist = &v59.m_freelist;
  v6 = &v59.m_data.m_buffer[192];
  do
  {
    *(_QWORD *)v6 = p_m_freelist;
    p_m_freelist = (ntl::internal::pool_allocator_freelist<48> *)v6;
    v6 -= 48;
  }
  while ( v6 + 48 > (char *)&v59 );
  v59.m_freelist.m_head.mp_next = &p_m_freelist->m_head;
  if ( !p_m_freelist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
    __debugbreak();
  v59.m_size = 0i64;
  v59.m_endNodeBase.m_color = RB_NODE_COLOR_RED;
  v59.m_endNodeBase.mp_parent = NULL;
  v59.m_endNodeBase.mp_left = &v59.m_endNodeBase;
  v59.m_endNodeBase.mp_right = &v59.m_endNodeBase;
  v7 = &v59.m_freelist;
  v8 = &v59.m_data.m_buffer[192];
  do
  {
    *(_QWORD *)v8 = v7;
    v7 = (ntl::internal::pool_allocator_freelist<48> *)v8;
    v8 -= 48;
  }
  while ( v8 + 48 > (char *)&v59 );
  v59.m_freelist.m_head.mp_next = &v7->m_head;
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
    __debugbreak();
  v59.m_size = 0i64;
  v59.m_endNodeBase.m_color = RB_NODE_COLOR_RED;
  v59.m_endNodeBase.mp_parent = NULL;
  v59.m_endNodeBase.mp_left = &v59.m_endNodeBase;
  v59.m_endNodeBase.mp_right = &v59.m_endNodeBase;
  Instance = Online_Friends::GetInstance();
  Friends = Online_Friends::GetFriends(Instance, v3);
  isSessionPrivateOut[1] = 0;
  presenceOut[0] = 0;
  playerName[0] = 0;
  v11 = 1;
  v53 = 1;
  j_lua_createtable(luaVM, 0, 0);
  v12 = 0i64;
  if ( !Friends->count )
  {
LABEL_74:
    v30 = chatIdsBuffer;
    v31 = 18i64;
    do
    {
      OnlineChatId::OnlineChatId(v30++);
      --v31;
    }
    while ( v31 );
    v32 = OnlineChatManager::GetInstance();
    if ( OnlineChatManager::GetJoinedChats(v32, chatIdsBuffer, chatTypesBuffer, 18, &joinedChatCountOut[1]) )
    {
      v33 = 0;
      if ( joinedChatCountOut[1] > 0 )
      {
        v34 = chatTypesBuffer;
        do
        {
          v35 = OnlineChatManager::GetInstance();
          if ( OnlineChatManager::GetMembersListFromChat(v35, &chatIdsBuffer[v33], v34, (const OnlineChatMemberInfo **)&result, joinedChatCountOut) )
          {
            v36 = 0;
            if ( joinedChatCountOut[0] > 0 )
            {
              v37 = 0i64;
              do
              {
                mp_node = result.mp_node;
                v39 = (char *)&result.mp_node->mp_parent + v37;
                Com_TruncatePlayerName(v39, outTruncatedPlayerName, 0x24ui64);
                if ( isSessionPrivateOut[0] && !strcmp(v55, v39) || !strcmp(v55, outTruncatedPlayerName) )
                {
                  if ( isSessionPrivateOut[0] )
                    goto LABEL_102;
                  p_m_endNodeBase = &v59.m_endNodeBase;
                  mp_parent = v59.m_endNodeBase.mp_parent;
                  if ( v59.m_endNodeBase.mp_parent )
                  {
                    do
                    {
                      if ( *(_QWORD *)&mp_parent[1].m_color < (unsigned __int64)v39 )
                      {
                        mp_parent = mp_parent->mp_right;
                      }
                      else
                      {
                        p_m_endNodeBase = mp_parent;
                        mp_parent = mp_parent->mp_left;
                      }
                    }
                    while ( mp_parent );
                    if ( p_m_endNodeBase == &v59.m_endNodeBase || (unsigned __int64)v39 >= *(_QWORD *)&p_m_endNodeBase[1].m_color )
                    {
                      if ( !p_m_endNodeBase && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 87, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
                        __debugbreak();
                    }
                    else
                    {
                      p_m_endNodeBase = &v59.m_endNodeBase;
                    }
                  }
                  if ( !LOBYTE(p_m_endNodeBase[1].mp_parent) )
                  {
LABEL_102:
                    v45 = v53;
                    _XMM1 = 0i64;
                    __asm { vcvtsi2sd xmm1, xmm1, ebx; n }
                    j_lua_pushnumber(LUI_luaVM, *(long double *)&_XMM1);
                    j_lua_createtable(L, 0, 3);
                    LUI_SetTableBool("isFriend", 0, LUI_luaVM);
                    LUI_SetTableString("gamertag", v39, LUI_luaVM);
                    r_element.first = NULL;
                    *(_QWORD *)&r_element.second = 0i64;
                    v63 = 0;
                    v64 = 0;
                    LUI_Social_GetXUIDFromBNetAccountID(*v34, *(int *)((char *)&mp_node->m_color + v37), (char *)&r_element);
                    LUI_SetTableString("xuidString", (const char *)&r_element, LUI_luaVM);
                    j_lua_settable(LUI_luaVM, -3);
                    if ( isSessionPrivateOut[0] )
                    {
                      if ( v59.m_size )
                      {
                        v50 = v59.m_endNodeBase.mp_parent;
                        if ( v59.m_endNodeBase.mp_parent )
                        {
                          do
                          {
                            ntl::red_black_tree<char const *,ntl::pair<char const *,bool>,ntl::fixed_pool_allocator<ntl::red_black_tree_node<ntl::pair<char const *,bool>>,5,8>,ntl::return_pair_first<char const *,bool>,ntl::less<char const *,char const *>>::erase_tree(&v59, (ntl::red_black_tree_node<ntl::pair<char const *,bool> > *)v50->mp_right);
                            mp_left = v50->mp_left;
                            *(_QWORD *)&v50->m_color = v59.m_freelist.m_head.mp_next;
                            v59.m_freelist.m_head.mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v50;
                            v50 = mp_left;
                          }
                          while ( mp_left );
                        }
                      }
                      return 1i64;
                    }
                    v53 = v45 + 1;
                  }
                }
                ++v36;
                v37 += 56i64;
              }
              while ( v36 < joinedChatCountOut[0] );
            }
          }
          ++v33;
          ++v34;
        }
        while ( v33 < joinedChatCountOut[1] );
      }
    }
    if ( v59.m_size )
    {
      v48 = v59.m_endNodeBase.mp_parent;
      if ( v59.m_endNodeBase.mp_parent )
      {
        do
        {
          ntl::red_black_tree<char const *,ntl::pair<char const *,bool>,ntl::fixed_pool_allocator<ntl::red_black_tree_node<ntl::pair<char const *,bool>>,5,8>,ntl::return_pair_first<char const *,bool>,ntl::less<char const *,char const *>>::erase_tree(&v59, (ntl::red_black_tree_node<ntl::pair<char const *,bool> > *)v48->mp_right);
          v49 = v48->mp_left;
          *(_QWORD *)&v48->m_color = v59.m_freelist.m_head.mp_next;
          v59.m_freelist.m_head.mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v48;
          v48 = v49;
        }
        while ( v49 );
      }
    }
    return 1i64;
  }
  while ( 1 )
  {
    v13 = Friends->sortedFriends[v12];
    if ( Friends->status[v13] != FRIEND_STATUS_PRESENT )
      goto LABEL_74;
    v14 = &Friends->friends[v13];
    v15 = Friends->friendPlatformIds[v13];
    v16 = Online_Friends::GetInstance();
    Online_Friends::GetFriendsDetailsForUI(v16, v3, (XUID)v14->m_id, v15, presenceOut, playerName, &isSessionPrivateOut[1]);
    Com_TruncatePlayerName(playerName, outTruncatedPlayerName, 0x24ui64);
    if ( v4 && !strcmp(v55, playerName) )
      break;
    if ( !strcmp(v55, outTruncatedPlayerName) )
      break;
LABEL_73:
    v12 = (unsigned int)(v12 + 1);
    if ( (unsigned int)v12 >= Friends->count )
      goto LABEL_74;
  }
  _XMM1 = 0i64;
  __asm { vcvtsi2sd xmm1, xmm1, edi; n }
  j_lua_pushnumber(LUI_luaVM, *(long double *)&_XMM1);
  j_lua_createtable(L, 0, 3);
  LUI_SetTableBool("isFriend", 1, LUI_luaVM);
  LUI_SetTableString("gamertag", playerName, LUI_luaVM);
  if ( !v4 && v59.m_size < 5 )
  {
    r_element.first = playerName;
    r_element.second = 1;
    v19 = &v59.m_endNodeBase;
    v20 = v59.m_endNodeBase.mp_parent;
    v21 = 1;
    while ( v20 )
    {
      v19 = v20;
      v21 = (unsigned __int64)playerName < *(_QWORD *)&v20[1].m_color;
      if ( (unsigned __int64)playerName >= *(_QWORD *)&v20[1].m_color )
        v20 = v20->mp_right;
      else
        v20 = v20->mp_left;
    }
    mp_right = v19;
    if ( v21 )
    {
      if ( v19 == v59.m_endNodeBase.mp_left )
      {
        ntl::red_black_tree<char const *,ntl::pair<char const *,bool>,ntl::fixed_pool_allocator<ntl::red_black_tree_node<ntl::pair<char const *,bool>>,5,8>,ntl::return_pair_first<char const *,bool>,ntl::less<char const *,char const *>>::insert_node(&v59, &result, v19, &r_element, 1, 0);
LABEL_70:
        v11 = v53;
        goto LABEL_71;
      }
      if ( !v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 108, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      if ( v19->m_color || v19->mp_parent->mp_parent != v19 )
      {
        mp_right = v19->mp_left;
        if ( mp_right )
        {
          for ( i = mp_right->mp_right; i; i = i->mp_right )
            mp_right = i;
        }
        else
        {
          mp_right = v19->mp_parent;
          if ( v19 == mp_right->mp_left )
          {
            do
            {
              v24 = mp_right;
              mp_right = mp_right->mp_parent;
            }
            while ( v24 == mp_right->mp_left );
          }
        }
      }
      else
      {
        mp_right = v19->mp_right;
      }
    }
    if ( !mp_right && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 81, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
      __debugbreak();
    if ( *(_QWORD *)&mp_right[1].m_color < (unsigned __int64)playerName )
    {
      if ( !v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 694, ASSERT_TYPE_ASSERT, "( p_insert != 0 )", (const char *)&queryFormat, "p_insert != NULL") )
        __debugbreak();
      if ( !v59.m_freelist.m_head.mp_next )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
          __debugbreak();
        if ( !v59.m_freelist.m_head.mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
          __debugbreak();
      }
      if ( (ntl::internal::pool_allocator_freelist<48> *)v59.m_freelist.m_head.mp_next == &v59.m_freelist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 298, ASSERT_TYPE_ASSERT, "( !empty() )", "Pool out of elements to allocate (Elem size=%zu, Num elems=%zu)", 0x30ui64, 5ui64) )
        __debugbreak();
      mp_next = v59.m_freelist.m_head.mp_next;
      v59.m_freelist.m_head.mp_next = v59.m_freelist.m_head.mp_next->mp_next;
      LODWORD(v58[1]) = 0;
      v58[2] = v19;
      __asm { vpxor   xmm0, xmm0, xmm0 }
      *(_OWORD *)&v58[3] = _XMM0;
      v26 = r_element;
      *(__m256i *)&mp_next->mp_next = *(__m256i *)&v58[1];
      *(ntl::pair<char const *,bool> *)&mp_next[4].mp_next = v26;
      if ( v19 == &v59.m_endNodeBase )
      {
        v59.m_endNodeBase.mp_left = (ntl::red_black_tree_node_base *)mp_next;
        v59.m_endNodeBase.mp_parent = (ntl::red_black_tree_node_base *)mp_next;
        v59.m_endNodeBase.mp_right = (ntl::red_black_tree_node_base *)mp_next;
      }
      else if ( (unsigned __int64)playerName >= *(_QWORD *)&v19[1].m_color )
      {
        v19->mp_right = (ntl::red_black_tree_node_base *)mp_next;
        v27 = v59.m_endNodeBase.mp_right;
        if ( v19 == v59.m_endNodeBase.mp_right )
          v27 = (ntl::red_black_tree_node_base *)mp_next;
        v59.m_endNodeBase.mp_right = v27;
      }
      else
      {
        v19->mp_left = (ntl::red_black_tree_node_base *)mp_next;
        if ( v19 == v59.m_endNodeBase.mp_left )
          v59.m_endNodeBase.mp_left = (ntl::red_black_tree_node_base *)mp_next;
      }
      ntl::red_black_tree_node_base::rebalance((ntl::red_black_tree_node_base *)mp_next, &v59.m_endNodeBase.mp_parent);
      ++v59.m_size;
    }
    goto LABEL_70;
  }
LABEL_71:
  v28 = LUI_luaVM;
  v29 = XUID::ToString(v14);
  LUI_SetTableString("xuidString", v29, v28);
  Com_sprintf<21>((char (*)[21])dest, "%zu", v15);
  LUI_SetTableString("platformIdString", dest, LUI_luaVM);
  j_lua_settable(LUI_luaVM, -3);
  v4 = isSessionPrivateOut[0];
  if ( !isSessionPrivateOut[0] )
  {
    v53 = ++v11;
    goto LABEL_73;
  }
  if ( v59.m_size )
  {
    v42 = v59.m_endNodeBase.mp_parent;
    if ( v59.m_endNodeBase.mp_parent )
    {
      do
      {
        ntl::red_black_tree<char const *,ntl::pair<char const *,bool>,ntl::fixed_pool_allocator<ntl::red_black_tree_node<ntl::pair<char const *,bool>>,5,8>,ntl::return_pair_first<char const *,bool>,ntl::less<char const *,char const *>>::erase_tree(&v59, (ntl::red_black_tree_node<ntl::pair<char const *,bool> > *)v42->mp_right);
        v43 = v42->mp_left;
        *(_QWORD *)&v42->m_color = v59.m_freelist.m_head.mp_next;
        v59.m_freelist.m_head.mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v42;
        v42 = v43;
      }
      while ( v43 );
    }
  }
  return 1i64;
}

/*
==============
LUI_LuaCall_Social_GetMembersListFromChat_impl
==============
*/
__int64 LUI_LuaCall_Social_GetMembersListFromChat_impl(lua_State *const luaVM)
{
  int v2; 
  OnlineChatManager *Instance; 
  __int64 v4; 
  OnlineChatMemberInfo *v5; 
  OnlineChatManager *v10; 
  bool IsLocalPlayer; 
  int narray; 
  OnlineChatType chatType; 
  OnlineChatId outChatId; 
  OnlineChatMemberInfo *members; 
  char outTruncatedPlayerName[40]; 

  if ( j_lua_gettop(luaVM) != 2 || j_lua_type(luaVM, 1) != 5 || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Social.GetMembersListFromChat( <chatID>, <chatType> )");
  if ( j_lua_gettop(luaVM) != 2 )
    return 0i64;
  if ( j_lua_type(luaVM, 1) != 5 )
    return 0i64;
  if ( !j_lua_isnumber(luaVM, 2) )
    return 0i64;
  v2 = 0;
  outChatId.m_id = 0i64;
  LUI_Social_GetChatID(1, &outChatId);
  chatType = (unsigned int)j_lua_tointeger(luaVM, 2);
  Instance = OnlineChatManager::GetInstance();
  if ( !OnlineChatManager::GetMembersListFromChat(Instance, &outChatId, &chatType, (const OnlineChatMemberInfo **)&members, &narray) )
    return 0i64;
  j_lua_createtable(luaVM, narray, 0);
  if ( narray > 0 )
  {
    v4 = 0i64;
    do
    {
      ++v2;
      v5 = members;
      _XMM1 = 0i64;
      __asm { vcvtsi2sd xmm1, xmm1, ebp; n }
      j_lua_pushnumber(LUI_luaVM, *(long double *)&_XMM1);
      j_lua_createtable(luaVM, 0, 3);
      Com_TruncatePlayerName(v5[v4].gamerTag, outTruncatedPlayerName, 0x24ui64);
      LUI_SetTableString("gamertag", outTruncatedPlayerName, luaVM);
      _XMM1 = 0i64;
      __asm { vcvtsi2sd xmm1, xmm1, rax }
      if ( (v5[v4].id & 0x8000000000000000ui64) != 0i64 )
        *(double *)&_XMM1 = *(double *)&_XMM1 + 1.844674407370955e19;
      LUI_SetTableNumber("memberId", *(long double *)&_XMM1, LUI_luaVM);
      LUI_SetTableBool("isTyping", v5[v4].isTyping, luaVM);
      v10 = OnlineChatManager::GetInstance();
      IsLocalPlayer = OnlineChatManager::IsLocalPlayer(v10, v5[v4].id);
      LUI_SetTableBool("isLocalPlayer", IsLocalPlayer, luaVM);
      j_lua_settable(LUI_luaVM, -3);
      ++v4;
    }
    while ( v2 < narray );
  }
  return 1i64;
}

/*
==============
LUI_Social_FormatTime
==============
*/
char *LUI_Social_FormatTime(tm *local_time)
{
  const char *v2; 
  __int64 v3; 
  const char *v4; 
  __int64 tm_mday; 
  __int64 v6; 
  __int64 tm_hour; 
  __int64 tm_min; 
  ConversionArguments arguments; 
  char dest[16]; 
  char v12[16]; 
  char v13[16]; 
  char v14[16]; 
  char v15[16]; 
  char outputString[1024]; 

  v2 = UI_SafeTranslateString("LUA_MENU/DATE_TIME");
  v3 = (unsigned int)(local_time->tm_mon + 1);
  arguments.argCount = 5;
  v4 = v2;
  Com_sprintf(dest, 0x10ui64, "%d", v3);
  tm_mday = (unsigned int)local_time->tm_mday;
  arguments.args[0] = dest;
  Com_sprintf(v12, 0x10ui64, "%d", tm_mday);
  v6 = (unsigned int)(local_time->tm_year + 1900);
  arguments.args[1] = v12;
  Com_sprintf(v13, 0x10ui64, "%d", v6);
  tm_hour = (unsigned int)local_time->tm_hour;
  arguments.args[2] = v13;
  Com_sprintf(v14, 0x10ui64, "%d", tm_hour);
  tm_min = (unsigned int)local_time->tm_min;
  arguments.args[3] = v14;
  Com_sprintf(v15, 0x10ui64, "%02d", tm_min);
  arguments.args[4] = v15;
  memset_0(outputString, 0, sizeof(outputString));
  UI_ReplaceConversions(v4, &arguments, outputString, 0x400ui64);
  return j_va((const char *)&queryFormat, outputString);
}

/*
==============
LUI_Social_GetChatID
==============
*/
void LUI_Social_GetChatID(const int luaVMTableIndex, OnlineChatId *outChatId)
{
  const char *v3; 
  unsigned __int64 v4; 
  unsigned __int64 v5; 

  j_lua_getfield(LUI_luaVM, luaVMTableIndex, (const char *)&valueOut);
  v3 = j_lua_tolstring(LUI_luaVM, -1, NULL);
  j_sscanf(v3, "%llu", &v5);
  v4 = v5;
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_chat_types.h", 16, ASSERT_TYPE_ASSERT, "(_id != 0)", "%s\n\tShould call OnlineChatId.Clear() instead of SetID()", "_id != 0") )
    __debugbreak();
  outChatId->m_id = v4;
  j_lua_settop(LUI_luaVM, -2);
}

/*
==============
LUI_Social_GetXUIDFromBNetAccountID
==============
*/
void LUI_Social_GetXUIDFromBNetAccountID(const OnlineChatType chatType, const unsigned __int64 platformId, char *outXUIDString)
{
  int MemberByPlatformId; 
  bool v7; 
  const PartyData *v8; 
  const PartyData *PartyData; 
  const XUID *Xuid; 
  const XUID *v11; 
  const char *v12; 
  XUID result; 
  XUID v14; 

  XUID::XUID(&v14);
  switch ( chatType )
  {
    case 3:
      MemberByPlatformId = Party_FindMemberByPlatformId(&g_partyData, platformId);
      v7 = MemberByPlatformId >= 0;
      if ( MemberByPlatformId < 0 )
        goto LABEL_11;
      v8 = &g_partyData;
      goto LABEL_10;
    case 4:
      PartyData = Lobby_GetPartyData();
      if ( !PartyData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_social.cpp", 1002, ASSERT_TYPE_ASSERT, "(party != nullptr)", (const char *)&queryFormat, "party != nullptr") )
        __debugbreak();
      MemberByPlatformId = Party_FindMemberByPlatformId(PartyData, platformId);
      v7 = MemberByPlatformId >= 0;
      if ( MemberByPlatformId < 0 )
      {
LABEL_11:
        if ( !v7 )
          return;
        goto LABEL_15;
      }
      v8 = PartyData;
LABEL_10:
      Xuid = Party_GetXuid(&result, v8, MemberByPlatformId);
      XUID::operator=(&v14, Xuid);
      goto LABEL_11;
    case 7:
      v11 = XUID::FromUInt64(&result, platformId);
      XUID::operator=(&v14, v11);
LABEL_15:
      v12 = XUID::ToString(&v14);
      Core_strcpy(outXUIDString, 0x15ui64, v12);
      return;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_social.cpp", 1019, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unknown chat type!") )
    __debugbreak();
}

/*
==============
LUI_Social_SendChannelAddedEvent
==============
*/
void LUI_Social_SendChannelAddedEvent(const int controllerIndex, const OnlineChatType chatType, const OnlineChatId chatId, const bool initiatedChat)
{
  __int64 v5; 
  LocalClientNum_t ClientFromController; 

  v5 = chatType;
  ClientFromController = CL_Mgr_GetClientFromController(controllerIndex);
  if ( LUI_BeginEvent(ClientFromController, "lui_social_channel_added", LUI_luaVM) )
  {
    LUI_SetTableInt("chatType", v5, LUI_luaVM);
    LUI_Social_SetChatID(chatId);
    LUI_SetTableBool("initiatedChat", initiatedChat, LUI_luaVM);
    LUI_SetTableBool("immediate", 1, LUI_luaVM);
    LUI_EndEvent(LUI_luaVM);
  }
}

/*
==============
LUI_Social_SendChannelRemovedEvent
==============
*/
void LUI_Social_SendChannelRemovedEvent(const int controllerIndex, const OnlineChatType chatType, const OnlineChatId chatId)
{
  __int64 v4; 
  LocalClientNum_t ClientFromController; 

  v4 = chatType;
  if ( CL_Mgr_GetMode() )
  {
    ClientFromController = CL_Mgr_GetClientFromController(controllerIndex);
    if ( LUI_BeginEvent(ClientFromController, "lui_social_channel_removed", LUI_luaVM) )
    {
      LUI_SetTableInt("chatType", v4, LUI_luaVM);
      LUI_Social_SetChatID(chatId);
      LUI_EndEvent(LUI_luaVM);
    }
  }
}

/*
==============
LUI_Social_SendGameChangePresence
==============
*/
void LUI_Social_SendGameChangePresence(const int controllerIndex, const unsigned __int64 platformId, unsigned __int64 clientProgramID, const char *gamerTag)
{
  ;
}

/*
==============
LUI_Social_SendIsTypingEvent
==============
*/
void LUI_Social_SendIsTypingEvent(const int controllerIndex, const OnlineChatId chatId, const char *gamertag, const bool isTyping)
{
  LocalClientNum_t ClientFromController; 

  ClientFromController = CL_Mgr_GetClientFromController(controllerIndex);
  if ( LUI_BeginEvent(ClientFromController, "lui_social_is_typing", LUI_luaVM) )
  {
    LUI_Social_SetChatID(chatId);
    LUI_SetTableBool("isTyping", isTyping, LUI_luaVM);
    LUI_SetTableString("gamertag", gamertag, LUI_luaVM);
    LUI_EndEvent(LUI_luaVM);
  }
}

/*
==============
LUI_Social_SendKoreaOverIndulgenceMessageEvent
==============
*/
void LUI_Social_SendKoreaOverIndulgenceMessageEvent(int controllerIndex, int warningHour)
{
  const char *String; 
  OnlineChatManager *Instance; 
  ConversionArguments arguments; 
  char dest[32]; 
  char outputString[1024]; 

  String = SEH_StringEd_GetString("LUA_MENU/KOREA_OVER_INDULGENCE_DESCRIPTION");
  Com_sprintf(dest, 0x20ui64, "%i", (unsigned int)warningHour);
  arguments.argCount = 1;
  arguments.args[0] = dest;
  UI_ReplaceConversions(String, &arguments, outputString, 0x400ui64);
  Instance = OnlineChatManager::GetInstance();
  OnlineChatManager::SendSystemEvent(Instance, controllerIndex, outputString);
}

/*
==============
LUI_Social_SendMemberAddedEvent
==============
*/
void LUI_Social_SendMemberAddedEvent(const int controllerIndex, const OnlineChatId chatId, const unsigned __int64 memberId, const char *gamertag)
{
  LocalClientNum_t ClientFromController; 
  lua_State *v10; 
  OnlineChatManager *Instance; 
  bool IsLocalPlayer; 

  ClientFromController = CL_Mgr_GetClientFromController(controllerIndex);
  if ( LUI_BeginEvent(ClientFromController, "lui_social_member_added", LUI_luaVM) )
  {
    LUI_SetTableString("gamertag", gamertag, LUI_luaVM);
    LUI_Social_SetChatID(chatId);
    _XMM1 = 0i64;
    __asm { vcvtsi2sd xmm1, xmm1, rdi }
    if ( (memberId & 0x8000000000000000ui64) != 0i64 )
      *(double *)&_XMM1 = *(double *)&_XMM1 + 1.844674407370955e19;
    LUI_SetTableNumber("memberId", *(long double *)&_XMM1, LUI_luaVM);
    v10 = LUI_luaVM;
    Instance = OnlineChatManager::GetInstance();
    IsLocalPlayer = OnlineChatManager::IsLocalPlayer(Instance, memberId);
    LUI_SetTableBool("localPlayer", IsLocalPlayer, v10);
    LUI_EndEvent(LUI_luaVM);
  }
}

/*
==============
LUI_Social_SendMemberRemovedEvent
==============
*/
void LUI_Social_SendMemberRemovedEvent(const int controllerIndex, const OnlineChatId chatId, const unsigned __int64 memberId)
{
  LocalClientNum_t ClientFromController; 

  ClientFromController = CL_Mgr_GetClientFromController(controllerIndex);
  if ( LUI_BeginEvent(ClientFromController, "lui_social_member_removed", LUI_luaVM) )
  {
    LUI_Social_SetChatID(chatId);
    _XMM1 = 0i64;
    __asm { vcvtsi2sd xmm1, xmm1, rdi }
    if ( (memberId & 0x8000000000000000ui64) != 0i64 )
      *(double *)&_XMM1 = *(double *)&_XMM1 + 1.844674407370955e19;
    LUI_SetTableNumber("memberId", *(long double *)&_XMM1, LUI_luaVM);
    LUI_EndEvent(LUI_luaVM);
  }
}

/*
==============
LUI_Social_SendReceivedMessageEvent
==============
*/
void LUI_Social_SendReceivedMessageEvent(const int controllerIndex, const OnlineChatId *chatId, const OnlineChatType *chatType, const OnlineChatMessage *message)
{
  LocalClientNum_t ClientFromController; 

  if ( *(_DWORD *)message->m_state != 1 )
  {
    ClientFromController = CL_Mgr_GetClientFromController(controllerIndex);
    if ( LUI_BeginEvent(ClientFromController, "lui_social_received_message", LUI_luaVM) )
    {
      LUI_Social_SetMessageData(chatId, chatType, message);
      LUI_SetTableBool("isTransmitted", *(_DWORD *)message->m_state == 2, LUI_luaVM);
      LUI_SetTableBool("isThrottled", 0, LUI_luaVM);
      LUI_EndEvent(LUI_luaVM);
    }
  }
}

/*
==============
LUI_Social_SendThrottleSendMessageEvent
==============
*/
void LUI_Social_SendThrottleSendMessageEvent(const int controllerIndex)
{
  LocalClientNum_t ClientFromController; 

  ClientFromController = CL_Mgr_GetClientFromController(controllerIndex);
  if ( LUI_BeginEvent(ClientFromController, "lui_social_received_message", LUI_luaVM) )
  {
    LUI_SetTableBool("isTransmitted", 0, LUI_luaVM);
    LUI_SetTableBool("isThrottled", 1, LUI_luaVM);
    LUI_EndEvent(LUI_luaVM);
  }
}

/*
==============
LUI_Social_SetChatID
==============
*/
void LUI_Social_SetChatID(const OnlineChatId chatId)
{
  char dest[24]; 

  Com_sprintf(dest, 0x15ui64, "%llu", chatId.m_id);
  j_lua_createtable(LUI_luaVM, 0, 3);
  LUI_SetTableString((const char *)&valueOut, dest, LUI_luaVM);
  j_lua_setfield(LUI_luaVM, -2, "chatId");
}

/*
==============
LUI_Social_SetMessageData
==============
*/
void LUI_Social_SetMessageData(const OnlineChatId *chatId, const OnlineChatType *chatType, const OnlineChatMessage *message)
{
  unsigned int m_receivedTime; 
  bool IsLocalPlayer; 
  OnlineChatManager *Instance; 
  lua_State *v9; 
  const char *v10; 
  int v11; 
  OnlineChatManager *v12; 
  OnlineChatMemberInfo *i; 
  lua_State *v14; 
  const char *v15; 
  int memberSize; 
  OnlineChatMemberInfo *members; 
  XUID result; 
  XUID v19; 
  qtime_s qtime; 
  char dest[16]; 
  char outTruncatedPlayerName[40]; 
  char value[40]; 

  m_receivedTime = message->m_receivedTime;
  Com_RealTime(m_receivedTime, &qtime);
  Com_sprintf(dest, 0xAui64, "%d:%02d", (unsigned int)qtime.tm_hour, qtime.tm_min);
  LUI_SetTableInt("receivedTimeInt", m_receivedTime, LUI_luaVM);
  LUI_SetTableString("receivedTime", dest, LUI_luaVM);
  if ( message->m_fromId )
  {
    Instance = OnlineChatManager::GetInstance();
    IsLocalPlayer = OnlineChatManager::IsLocalPlayer(Instance, message->m_fromId);
  }
  else
  {
    IsLocalPlayer = 1;
  }
  LUI_SetTableBool("localPlayer", IsLocalPlayer, LUI_luaVM);
  LUI_Social_SetChatID((const OnlineChatId)chatId->m_id);
  LUI_SetTableInt("chatType", *(int *)chatType, LUI_luaVM);
  LUI_SetTableString("message", message->m_message, LUI_luaVM);
  Com_TruncatePlayerName(message->m_fromGamerTag, outTruncatedPlayerName, 0x24ui64);
  LUI_SetTableString("gamertag", outTruncatedPlayerName, LUI_luaVM);
  XUID::FromUniversalId(&result, message->m_fromId);
  v9 = LUI_luaVM;
  v10 = XUID::ToString(&result);
  LUI_SetTableString("xuid", v10, v9);
  if ( chatId->m_id )
  {
    if ( *chatType == (COUNT|DODGE|0x4) )
    {
      v11 = 0;
      members = NULL;
      memberSize = 0;
      v12 = OnlineChatManager::GetInstance();
      if ( OnlineChatManager::GetMembersListFromChat(v12, chatId, chatType, (const OnlineChatMemberInfo **)&members, &memberSize) && memberSize > 0 )
      {
        for ( i = members; chatId->m_id != i->id; ++i )
        {
          if ( ++v11 >= memberSize )
            return;
        }
        Com_TruncatePlayerName(i->gamerTag, value, 0x24ui64);
        LUI_SetTableString("whisperTarget", value, LUI_luaVM);
        XUID::FromUniversalId(&v19, i->id);
        v14 = LUI_luaVM;
        v15 = XUID::ToString(&v19);
        LUI_SetTableString("whisperTargetXUID", v15, v14);
      }
    }
  }
}

/*
==============
LUI_Social_SetPlayerCardTableData
==============
*/
void LUI_Social_SetPlayerCardTableData(XUID xuid, const char *gamerTag)
{
  __int64 CacheLocation; 
  PlayerProfileData profileData; 

  PlayercardCache_GetPlayercard(xuid, gamerTag, &profileData);
  CacheLocation = PlayerCardData_GetCacheLocation();
  LUI_SetTableInt("emblemIndex", profileData.customization_patch[CacheLocation], LUI_luaVM);
  LUI_SetTableInt("background", profileData.customization_background[CacheLocation], LUI_luaVM);
  LUI_SetTableInt("baseRank", profileData.rank_mp, LUI_luaVM);
  LUI_SetTableInt("prestige", profileData.prestige_mp, LUI_luaVM);
}

/*
==============
LUI_Social_SetPresenceBattletag
==============
*/
void LUI_Social_SetPresenceBattletag(const XUID xuid, const unsigned __int64 platformId)
{
  char value[8]; 
  __int64 v3; 
  __int64 v4; 
  __int64 v5; 
  int v6; 

  *(_QWORD *)value = 0i64;
  v3 = 0i64;
  v4 = 0i64;
  v5 = 0i64;
  v6 = 0;
  LUI_SetTableString("battleTag", value, LUI_luaVM);
}

