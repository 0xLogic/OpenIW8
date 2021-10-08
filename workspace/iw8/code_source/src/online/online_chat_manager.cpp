/*
==============
OnlineChatManager::GetChat
==============
*/

bool __fastcall OnlineChatManager::GetChat(OnlineChatManager *this, const OnlineChatId *chatId, const char *dwCategory, OnlineChat **chatOut)
{
  return ?GetChat@OnlineChatManager@@AEAA_NAEBUOnlineChatId@@PEBDPEAPEAVOnlineChat@@@Z(this, chatId, dwCategory, chatOut);
}

/*
==============
OnlineChatManager::LeaveChatCallback
==============
*/

void __fastcall OnlineChatManager::LeaveChatCallback(GenericTask *task, eTaskManagerTaskState state)
{
  ?LeaveChatCallback@OnlineChatManager@@CAXPEAVGenericTask@@W4eTaskManagerTaskState@@@Z(task, state);
}

/*
==============
OnlineChatManager::ClearPending
==============
*/

void __fastcall OnlineChatManager::ClearPending(OnlineChatManager *this, const OnlineChatManager::ChatPendingType pendingType, const OnlineChatId *chatId, const OnlineChatType *chatType)
{
  ?ClearPending@OnlineChatManager@@AEAAXW4ChatPendingType@1@AEBUOnlineChatId@@AEBW4OnlineChatType@@@Z(this, pendingType, chatId, chatType);
}

/*
==============
OnlineChatManager::CreateSystemEventsChat
==============
*/

void __fastcall OnlineChatManager::CreateSystemEventsChat(OnlineChatManager *this, const int controllerIndex)
{
  ?CreateSystemEventsChat@OnlineChatManager@@AEAAXH@Z(this, controllerIndex);
}

/*
==============
OnlineChatManager::OnChatChannelMessage
==============
*/

void __fastcall OnlineChatManager::OnChatChannelMessage(OnlineChatManager *this, const char *category, unsigned __int64 channelID, unsigned __int64 senderID, char *senderName, unsigned int chatMessageType, void *message, unsigned int messageSize)
{
  ?OnChatChannelMessage@OnlineChatManager@@QEAAXPEBD_K1PEADIPEAXI@Z(this, category, channelID, senderID, senderName, chatMessageType, message, messageSize);
}

/*
==============
OnlineChatManager::GetChannelInfoComplete
==============
*/

void __fastcall OnlineChatManager::GetChannelInfoComplete(GenericTask *task, eTaskManagerTaskState state)
{
  ?GetChannelInfoComplete@OnlineChatManager@@CAXPEAVGenericTask@@W4eTaskManagerTaskState@@@Z(task, state);
}

/*
==============
OnlineChatManager::CreateChat
==============
*/

bool __fastcall OnlineChatManager::CreateChat(OnlineChatManager *this, const int controllerIndex, const OnlineChatType chatType, void (__fastcall *callback)(const int, const OnlineChatId *, const OnlineChatType *, const bool, const int))
{
  return ?CreateChat@OnlineChatManager@@QEAA_NHW4OnlineChatType@@P6AXHAEBUOnlineChatId@@AEBW42@_NH@Z@Z(this, controllerIndex, chatType, callback);
}

/*
==============
OnlineChatManager::ProcessJoinedChat
==============
*/

void __fastcall OnlineChatManager::ProcessJoinedChat(OnlineChatManager *this, const int controllerIndex, const unsigned __int64 channelID, const OnlineChatType chatType)
{
  ?ProcessJoinedChat@OnlineChatManager@@AEAAXH_KW4OnlineChatType@@@Z(this, controllerIndex, channelID, chatType);
}

/*
==============
OnlineChatManager::SetTypingIndicatorForRemotePlayer
==============
*/

void __fastcall OnlineChatManager::SetTypingIndicatorForRemotePlayer(OnlineChatManager *this, const OnlineChatId *chatId, const OnlineChatType *chatType, const unsigned __int64 id, const bool isTyping)
{
  ?SetTypingIndicatorForRemotePlayer@OnlineChatManager@@AEAAXAEBUOnlineChatId@@AEBW4OnlineChatType@@_K_N@Z(this, chatId, chatType, id, isTyping);
}

/*
==============
OnlineChatManager::GetVacantOnlineChat
==============
*/

OnlineChat *__fastcall OnlineChatManager::GetVacantOnlineChat(OnlineChatManager *this)
{
  return ?GetVacantOnlineChat@OnlineChatManager@@AEAAPEAVOnlineChat@@XZ(this);
}

/*
==============
OnlineChatManager::UnsubscribeFromAllChannelsCallback
==============
*/

void __fastcall OnlineChatManager::UnsubscribeFromAllChannelsCallback(GenericTask *task, eTaskManagerTaskState state)
{
  ?UnsubscribeFromAllChannelsCallback@OnlineChatManager@@CAXPEAVGenericTask@@W4eTaskManagerTaskState@@@Z(task, state);
}

/*
==============
OnlineChatManager::DebugPrintChatPool
==============
*/

void OnlineChatManager::DebugPrintChatPool(void)
{
  ?DebugPrintChatPool@OnlineChatManager@@SAXXZ();
}

/*
==============
OnlineChatManager::GetPlayerEventsChat
==============
*/

bool __fastcall OnlineChatManager::GetPlayerEventsChat(OnlineChatManager *this, const int controllerIndex, OnlineChat **chatOut)
{
  return ?GetPlayerEventsChat@OnlineChatManager@@AEAA_NHPEAPEAVOnlineChat@@@Z(this, controllerIndex, chatOut);
}

/*
==============
OnlineChatManager::OnChatChannelUpdate
==============
*/

void __fastcall OnlineChatManager::OnChatChannelUpdate(OnlineChatManager *this, const bdChannelInfo *channel, const bdChannelMember *member, unsigned __int8 status)
{
  ?OnChatChannelUpdate@OnlineChatManager@@QEAAXAEBVbdChannelInfo@@AEBVbdChannelMember@@E@Z(this, channel, member, status);
}

/*
==============
OnlineChatManager::JoinChatSuccessful
==============
*/

void __fastcall OnlineChatManager::JoinChatSuccessful(OnlineChatManager *this, const int controllerIndex, CachedCreateChatCallback *cachedCallback)
{
  ?JoinChatSuccessful@OnlineChatManager@@AEAAXHPEAUCachedCreateChatCallback@@@Z(this, controllerIndex, cachedCallback);
}

/*
==============
OnlineChatManager::TrackPending
==============
*/

void __fastcall OnlineChatManager::TrackPending(OnlineChatManager *this, const OnlineChatManager::ChatPendingType pendingType, const OnlineChatId *chatId, const OnlineChatType *chatType)
{
  ?TrackPending@OnlineChatManager@@AEAAXW4ChatPendingType@1@AEBUOnlineChatId@@AEBW4OnlineChatType@@@Z(this, pendingType, chatId, chatType);
}

/*
==============
OnlineChatManager::Init
==============
*/

bool __fastcall OnlineChatManager::Init(OnlineChatManager *this)
{
  return ?Init@OnlineChatManager@@UEAA_NXZ(this);
}

/*
==============
OnlineChatManager::CreateChatCallback
==============
*/

void __fastcall OnlineChatManager::CreateChatCallback(GenericTask *task, eTaskManagerTaskState state)
{
  ?CreateChatCallback@OnlineChatManager@@CAXPEAVGenericTask@@W4eTaskManagerTaskState@@@Z(task, state);
}

/*
==============
OnlineChatManager::CreatePlayerEventsChat
==============
*/

void __fastcall OnlineChatManager::CreatePlayerEventsChat(OnlineChatManager *this, const int controllerIndex)
{
  ?CreatePlayerEventsChat@OnlineChatManager@@AEAAXH@Z(this, controllerIndex);
}

/*
==============
OnlineChatManager::GetSystemErrorsChat
==============
*/

bool __fastcall OnlineChatManager::GetSystemErrorsChat(OnlineChatManager *this, const int controllerIndex, OnlineChat **chatOut)
{
  return ?GetSystemErrorsChat@OnlineChatManager@@AEAA_NHPEAPEAVOnlineChat@@@Z(this, controllerIndex, chatOut);
}

/*
==============
OnlineChatManager::KickPlayerFromChatCallback
==============
*/

void __fastcall OnlineChatManager::KickPlayerFromChatCallback(GenericTask *task, eTaskManagerTaskState state)
{
  ?KickPlayerFromChatCallback@OnlineChatManager@@CAXPEAVGenericTask@@W4eTaskManagerTaskState@@@Z(task, state);
}

/*
==============
OnlineChatManager::ShouldFilterProfanity
==============
*/

bool __fastcall OnlineChatManager::ShouldFilterProfanity(OnlineChatManager *this, const int controllerIndex)
{
  return ?ShouldFilterProfanity@OnlineChatManager@@QEAA_NH@Z(this, controllerIndex);
}

/*
==============
OnlineChatManager::CreateSystemErrorsChat
==============
*/

void __fastcall OnlineChatManager::CreateSystemErrorsChat(OnlineChatManager *this, const int controllerIndex)
{
  ?CreateSystemErrorsChat@OnlineChatManager@@AEAAXH@Z(this, controllerIndex);
}

/*
==============
OnlineChatManager::UnmuteMemberText
==============
*/

bool __fastcall OnlineChatManager::UnmuteMemberText(OnlineChatManager *this, const OnlineChatId *onlineChatId, const OnlineChatType *onlineChatType, const unsigned __int64 memberId)
{
  return ?UnmuteMemberText@OnlineChatManager@@QEAA_NAEBUOnlineChatId@@AEBW4OnlineChatType@@_K@Z(this, onlineChatId, onlineChatType, memberId);
}

/*
==============
OnlineChatManager::GetMessageIndicesFromChat
==============
*/

bool __fastcall OnlineChatManager::GetMessageIndicesFromChat(OnlineChatManager *this, const OnlineChatId *chatId, const OnlineChatType *chatType, int *firstIndex, int *numMessages)
{
  return ?GetMessageIndicesFromChat@OnlineChatManager@@QEAA_NAEBUOnlineChatId@@AEBW4OnlineChatType@@AEAH2@Z(this, chatId, chatType, firstIndex, numMessages);
}

/*
==============
OnlineChatManager::ShouldThrottleMessages
==============
*/

bool __fastcall OnlineChatManager::ShouldThrottleMessages(OnlineChatManager *this)
{
  return ?ShouldThrottleMessages@OnlineChatManager@@AEAA_NXZ(this);
}

/*
==============
OnlineChatManager::CanCreateChat
==============
*/

bool __fastcall OnlineChatManager::CanCreateChat(OnlineChatManager *this, const int controllerIndex)
{
  return ?CanCreateChat@OnlineChatManager@@QEBA_NH@Z(this, controllerIndex);
}

/*
==============
OnlineChatManager::KickPlayerFromChat
==============
*/

bool __fastcall OnlineChatManager::KickPlayerFromChat(OnlineChatManager *this, const int controllerIndex, const OnlineChatId *chatId, const OnlineChatType *chatType, const unsigned __int64 memberId)
{
  return ?KickPlayerFromChat@OnlineChatManager@@QEAA_NHAEBUOnlineChatId@@AEBW4OnlineChatType@@_K@Z(this, controllerIndex, chatId, chatType, memberId);
}

/*
==============
OnlineChatManager::ComErrorCleanup
==============
*/

void __fastcall OnlineChatManager::ComErrorCleanup(OnlineChatManager *this, const errorParm_t errorCode)
{
  ?ComErrorCleanup@OnlineChatManager@@QEAAXW4errorParm_t@@@Z(this, errorCode);
}

/*
==============
OnlineChatManager::GetActiveChatIdFromType
==============
*/

OnlineChatId *__fastcall OnlineChatManager::GetActiveChatIdFromType(OnlineChatManager *this, OnlineChatId *result, const OnlineChatType chatType)
{
  return ?GetActiveChatIdFromType@OnlineChatManager@@QEAA?AUOnlineChatId@@W4OnlineChatType@@@Z(this, result, chatType);
}

/*
==============
OnlineChatManager::CacheCreateCallback
==============
*/

bool __fastcall OnlineChatManager::CacheCreateCallback(OnlineChatManager *this, void (__fastcall *callback)(const int, const OnlineChatId *, const OnlineChatType *, const bool, const int), OnlineChatType chatType, CachedCreateChatCallback **cachedCallbackOut)
{
  return ?CacheCreateCallback@OnlineChatManager@@AEAA_NP6AXHAEBUOnlineChatId@@AEBW4OnlineChatType@@_NH@ZW43@PEAPEAUCachedCreateChatCallback@@@Z(this, callback, chatType, cachedCallbackOut);
}

/*
==============
OnlineChatManager::UnsubscribeFromAllChannels
==============
*/

void __fastcall OnlineChatManager::UnsubscribeFromAllChannels(OnlineChatManager *this, const int controllerIndex, const char *category)
{
  ?UnsubscribeFromAllChannels@OnlineChatManager@@AEAAXHPEBD@Z(this, controllerIndex, category);
}

/*
==============
OnlineChatManager::GetJoinedChats
==============
*/

bool __fastcall OnlineChatManager::GetJoinedChats(OnlineChatManager *this, OnlineChatId *chatIdsBuffer, OnlineChatType *chatTypesBuffer, const int bufferSize, int *joinedChatCountOut)
{
  return ?GetJoinedChats@OnlineChatManager@@QEAA_NPEAUOnlineChatId@@PEAW4OnlineChatType@@HAEAH@Z(this, chatIdsBuffer, chatTypesBuffer, bufferSize, joinedChatCountOut);
}

/*
==============
OnlineChatManager::CreatePrivateChat_Internal
==============
*/

OnlineChat *__fastcall OnlineChatManager::CreatePrivateChat_Internal(OnlineChatManager *this, const int controllerIndex, const OnlineChatId chatId, unsigned __int64 memberId, const char *playerName, const bool initiatedChat)
{
  return ?CreatePrivateChat_Internal@OnlineChatManager@@AEAAPEAVOnlineChat@@HUOnlineChatId@@_KPEBD_N@Z(this, controllerIndex, chatId, memberId, playerName, initiatedChat);
}

/*
==============
OnlineChatManager::RegisterMemberAddedCallbackForChat
==============
*/

void __fastcall OnlineChatManager::RegisterMemberAddedCallbackForChat(OnlineChatManager *this, const OnlineChatId *chatId, const OnlineChatType *chatType, void (__fastcall *callback)(const int, const OnlineChatId *, const OnlineChatType *, const unsigned __int64))
{
  ?RegisterMemberAddedCallbackForChat@OnlineChatManager@@QEAAXAEBUOnlineChatId@@AEBW4OnlineChatType@@P6AXH01_K@Z@Z(this, chatId, chatType, callback);
}

/*
==============
OnlineChatManager::onChatChannelUserPromoted
==============
*/

void __fastcall OnlineChatManager::onChatChannelUserPromoted(OnlineChatManager *this, const bdChannelInfo *channel, const bdChannelMember *previousAdmin, const bdChannelMember *newAdmin)
{
  ?onChatChannelUserPromoted@OnlineChatManager@@QEAAXAEBVbdChannelInfo@@AEBVbdChannelMember@@1@Z(this, channel, previousAdmin, newAdmin);
}

/*
==============
OnlineChatManager::SendSystemError
==============
*/

void __fastcall OnlineChatManager::SendSystemError(OnlineChatManager *this, const int controllerIndex, const char *message)
{
  ?SendSystemError@OnlineChatManager@@QEAAXHPEBD@Z(this, controllerIndex, message);
}

/*
==============
OnlineChatManager::GetChatHistoryForType
==============
*/

const OnlineChatHistory *__fastcall OnlineChatManager::GetChatHistoryForType(OnlineChatManager *this, const OnlineChatType chatType)
{
  return ?GetChatHistoryForType@OnlineChatManager@@QEAAPEBUOnlineChatHistory@@W4OnlineChatType@@@Z(this, chatType);
}

/*
==============
OnlineChatManager::SetTypingIndicatorForChat
==============
*/

void __fastcall OnlineChatManager::SetTypingIndicatorForChat(OnlineChatManager *this, const OnlineChatId *chatId, const OnlineChatType *chatType, const bool isTyping)
{
  ?SetTypingIndicatorForChat@OnlineChatManager@@QEAAXAEBUOnlineChatId@@AEBW4OnlineChatType@@_N@Z(this, chatId, chatType, isTyping);
}

/*
==============
OnlineChatManager::CreatePrivateChatByXUID
==============
*/

void __fastcall OnlineChatManager::CreatePrivateChatByXUID(OnlineChatManager *this, const int controllerIndex, const XUID xuid, const char *playerName, const bool initiatedChat)
{
  ?CreatePrivateChatByXUID@OnlineChatManager@@QEAAXHUXUID@@PEBD_N@Z(this, controllerIndex, xuid, playerName, initiatedChat);
}

/*
==============
OnlineChatManager::JoinChatFailed
==============
*/

void __fastcall OnlineChatManager::JoinChatFailed(OnlineChatManager *this, const int controllerIndex, CachedCreateChatCallback *cachedCallback, const int errorCode)
{
  ?JoinChatFailed@OnlineChatManager@@AEAAXHPEAUCachedCreateChatCallback@@H@Z(this, controllerIndex, cachedCallback, errorCode);
}

/*
==============
OnlineChatManager::GetInstancePtr
==============
*/

OnlineChatManager *__fastcall OnlineChatManager::GetInstancePtr()
{
  return ?GetInstancePtr@OnlineChatManager@@SAPEAV1@XZ();
}

/*
==============
OnlineChatManager::GetSystemEventsChat
==============
*/

bool __fastcall OnlineChatManager::GetSystemEventsChat(OnlineChatManager *this, const int controllerIndex, OnlineChat **chatOut)
{
  return ?GetSystemEventsChat@OnlineChatManager@@AEAA_NHPEAPEAVOnlineChat@@@Z(this, controllerIndex, chatOut);
}

/*
==============
OnlineChatManager::GetChannelInfo
==============
*/

void __fastcall OnlineChatManager::GetChannelInfo(OnlineChatManager *this, const int controllerIndex, CachedCreateChatCallback *cachedCallback)
{
  ?GetChannelInfo@OnlineChatManager@@AEAAXHPEAUCachedCreateChatCallback@@@Z(this, controllerIndex, cachedCallback);
}

/*
==============
OnlineChatManager::CleanChatMessage
==============
*/

void __fastcall OnlineChatManager::CleanChatMessage(const char *message, char *cleanMessage)
{
  ?CleanChatMessage@OnlineChatManager@@CAXPEBDPEAD@Z(message, cleanMessage);
}

/*
==============
OnlineChatManager::AreWeHostOfChat
==============
*/

bool __fastcall OnlineChatManager::AreWeHostOfChat(OnlineChatManager *this, const int controllerIndex, const OnlineChatId *chatId, const OnlineChatType *chatType)
{
  return ?AreWeHostOfChat@OnlineChatManager@@QEAA_NHAEBUOnlineChatId@@AEBW4OnlineChatType@@@Z(this, controllerIndex, chatId, chatType);
}

/*
==============
OnlineChatManager::CloseChat
==============
*/

void __fastcall OnlineChatManager::CloseChat(OnlineChatManager *this, OnlineChat *chat)
{
  ?CloseChat@OnlineChatManager@@AEAAXPEAVOnlineChat@@@Z(this, chat);
}

/*
==============
OnlineChatManager::JoinClanChannelComplete
==============
*/

void __fastcall OnlineChatManager::JoinClanChannelComplete(GenericTask *task, eTaskManagerTaskState state)
{
  ?JoinClanChannelComplete@OnlineChatManager@@CAXPEAVGenericTask@@W4eTaskManagerTaskState@@@Z(task, state);
}

/*
==============
OnlineChatManager::GetChat
==============
*/

bool __fastcall OnlineChatManager::GetChat(OnlineChatManager *this, const OnlineChatId *chatId, const OnlineChatType *chatType, OnlineChat **chatOut)
{
  return ?GetChat@OnlineChatManager@@AEAA_NAEBUOnlineChatId@@AEBW4OnlineChatType@@PEAPEAVOnlineChat@@@Z(this, chatId, chatType, chatOut);
}

/*
==============
OnlineChatManager::ProcessCreateCallback
==============
*/

void __fastcall OnlineChatManager::ProcessCreateCallback(OnlineChatManager *this, const int controllerIndex, CachedCreateChatCallback *cachedCallback, const bool success, const int errorCode)
{
  ?ProcessCreateCallback@OnlineChatManager@@AEAAXHPEAUCachedCreateChatCallback@@_NH@Z(this, controllerIndex, cachedCallback, success, errorCode);
}

/*
==============
OnlineChatManager::ClearCachedCreateChatCallback
==============
*/

void __fastcall OnlineChatManager::ClearCachedCreateChatCallback(CachedCreateChatCallback *cachedCreateChatCallback)
{
  ?ClearCachedCreateChatCallback@OnlineChatManager@@CAXPEAUCachedCreateChatCallback@@@Z(cachedCreateChatCallback);
}

/*
==============
OnlineChatManager::Uninit
==============
*/

void __fastcall OnlineChatManager::Uninit(OnlineChatManager *this)
{
  ?Uninit@OnlineChatManager@@UEAAXXZ(this);
}

/*
==============
OnlineChatManager::GetPlatformId
==============
*/

bool __fastcall OnlineChatManager::GetPlatformId(const int controllerIndex, const OnlineChatType chatType, const XUID xuid, unsigned __int64 *platformId)
{
  return ?GetPlatformId@OnlineChatManager@@SA_NHW4OnlineChatType@@UXUID@@AEA_K@Z(controllerIndex, chatType, xuid, platformId);
}

/*
==============
OnlineChatManager::SendChatEvent
==============
*/

void __fastcall OnlineChatManager::SendChatEvent(OnlineChatManager *this, OnlineChat *chat, const int controllerIndex, const char *message)
{
  ?SendChatEvent@OnlineChatManager@@AEAAXPEAVOnlineChat@@HPEBD@Z(this, chat, controllerIndex, message);
}

/*
==============
OnlineChatManager::IsChatActive
==============
*/

bool __fastcall OnlineChatManager::IsChatActive(OnlineChatManager *this, const OnlineChatId *chatId, const OnlineChatType *chatType)
{
  return ?IsChatActive@OnlineChatManager@@QEAA_NAEBUOnlineChatId@@AEBW4OnlineChatType@@@Z(this, chatId, chatType);
}

/*
==============
OnlineChatManager::GetMessageFromIndex
==============
*/

bool __fastcall OnlineChatManager::GetMessageFromIndex(OnlineChatManager *this, const OnlineChatId *chatId, const OnlineChatType *chatType, const int messageIndex, const OnlineChatMessage **message)
{
  return ?GetMessageFromIndex@OnlineChatManager@@QEAA_NAEBUOnlineChatId@@AEBW4OnlineChatType@@HPEAPEBVOnlineChatMessage@@@Z(this, chatId, chatType, messageIndex, message);
}

/*
==============
OnlineChatManager::TrackMessageToThrottle
==============
*/

void __fastcall OnlineChatManager::TrackMessageToThrottle(OnlineChatManager *this)
{
  ?TrackMessageToThrottle@OnlineChatManager@@AEAAXXZ(this);
}

/*
==============
OnlineChatManager::GetMembersListFromChat
==============
*/

bool __fastcall OnlineChatManager::GetMembersListFromChat(OnlineChatManager *this, const OnlineChatId *chatId, const OnlineChatType *chatType, const OnlineChatMemberInfo **members, int *memberSize)
{
  return ?GetMembersListFromChat@OnlineChatManager@@QEAA_NAEBUOnlineChatId@@AEBW4OnlineChatType@@PEAPEBUOnlineChatMemberInfo@@AEAH@Z(this, chatId, chatType, members, memberSize);
}

/*
==============
OnlineChatManager::SubscribeToChannel
==============
*/

void __fastcall OnlineChatManager::SubscribeToChannel(OnlineChatManager *this, const int controllerIndex, CachedCreateChatCallback *cachedCallback)
{
  ?SubscribeToChannel@OnlineChatManager@@AEAAXHPEAUCachedCreateChatCallback@@@Z(this, controllerIndex, cachedCallback);
}

/*
==============
OnlineChatManager::OnDWInstantMessage
==============
*/

void __fastcall OnlineChatManager::OnDWInstantMessage(OnlineChatManager *this, const int controllerIndex, unsigned __int64 senderID, const char *senderName, const char *message, unsigned int messageSize)
{
  ?OnDWInstantMessage@OnlineChatManager@@UEAAXH_KPEBD1I@Z(this, controllerIndex, senderID, senderName, message, messageSize);
}

/*
==============
OnlineChatManager::CloseOldestPrivateChat
==============
*/

void __fastcall OnlineChatManager::CloseOldestPrivateChat(OnlineChatManager *this)
{
  ?CloseOldestPrivateChat@OnlineChatManager@@AEAAXXZ(this);
}

/*
==============
OnlineChatManager::CanCommunicateWithUser
==============
*/

bool __fastcall OnlineChatManager::CanCommunicateWithUser(const int controllerIndex, const OnlineChatType chatType, const XUID xuid)
{
  return ?CanCommunicateWithUser@OnlineChatManager@@SA_NHW4OnlineChatType@@UXUID@@@Z(controllerIndex, chatType, xuid);
}

/*
==============
OnlineChatManager::SendMessageToChat
==============
*/

void __fastcall OnlineChatManager::SendMessageToChat(OnlineChatManager *this, const int controllerIndex, const OnlineChatId *chatId, const OnlineChatType *chatType, const char *message)
{
  ?SendMessageToChat@OnlineChatManager@@QEAAXHAEBUOnlineChatId@@AEBW4OnlineChatType@@PEBD@Z(this, controllerIndex, chatId, chatType, message);
}

/*
==============
OnlineChatManager::LeaveChat
==============
*/

void __fastcall OnlineChatManager::LeaveChat(OnlineChatManager *this, const OnlineChatId *chatId, const OnlineChatType *chatType)
{
  ?LeaveChat@OnlineChatManager@@QEAAXAEBUOnlineChatId@@AEBW4OnlineChatType@@@Z(this, chatId, chatType);
}

/*
==============
OnlineChatManager::GetChannelMembersComplete
==============
*/

void __fastcall OnlineChatManager::GetChannelMembersComplete(GenericTask *task, eTaskManagerTaskState state)
{
  ?GetChannelMembersComplete@OnlineChatManager@@CAXPEAVGenericTask@@W4eTaskManagerTaskState@@@Z(task, state);
}

/*
==============
OnlineChatManager::SendPlayerEvent
==============
*/

void __fastcall OnlineChatManager::SendPlayerEvent(OnlineChatManager *this, const int controllerIndex, const char *message, unsigned __int64 player, const char *gamerTag)
{
  ?SendPlayerEvent@OnlineChatManager@@QEAAXHPEBD_K0@Z(this, controllerIndex, message, player, gamerTag);
}

/*
==============
OnlineChatManager::IsMemberTextMuted
==============
*/

bool __fastcall OnlineChatManager::IsMemberTextMuted(OnlineChatManager *this, const OnlineChatId *onlineChatId, const OnlineChatType *onlineChatType, const unsigned __int64 memberId)
{
  return ?IsMemberTextMuted@OnlineChatManager@@QEAA_NAEBUOnlineChatId@@AEBW4OnlineChatType@@_K@Z(this, onlineChatId, onlineChatType, memberId);
}

/*
==============
OnlineChatManager::OnSignedIn
==============
*/

void __fastcall OnlineChatManager::OnSignedIn(OnlineChatManager *this, const int controllerIndex, GenericSignInState signinState)
{
  ?OnSignedIn@OnlineChatManager@@UEAAXHW4GenericSignInState@@@Z(this, controllerIndex, signinState);
}

/*
==============
OnlineChatManager::GetInstance
==============
*/

OnlineChatManager *__fastcall OnlineChatManager::GetInstance()
{
  return ?GetInstance@OnlineChatManager@@SAAEAV1@XZ();
}

/*
==============
OnlineChatManager::IsChatPending
==============
*/

bool __fastcall OnlineChatManager::IsChatPending(OnlineChatManager *this, const OnlineChatManager::ChatPendingType pendingType, const OnlineChatId *chatId, const OnlineChatType *chatType)
{
  return ?IsChatPending@OnlineChatManager@@QEAA_NW4ChatPendingType@1@AEBUOnlineChatId@@AEBW4OnlineChatType@@@Z(this, pendingType, chatId, chatType);
}

/*
==============
OnlineChatManager::Frame
==============
*/

void __fastcall OnlineChatManager::Frame(OnlineChatManager *this)
{
  ?Frame@OnlineChatManager@@UEAAXXZ(this);
}

/*
==============
OnlineChatManager::GetChannelMembers
==============
*/

void __fastcall OnlineChatManager::GetChannelMembers(OnlineChatManager *this, const int controllerIndex, CachedCreateChatCallback *cachedCallback)
{
  ?GetChannelMembers@OnlineChatManager@@AEAAXHPEAUCachedCreateChatCallback@@@Z(this, controllerIndex, cachedCallback);
}

/*
==============
OnlineChatManager::MuteMemberText
==============
*/

bool __fastcall OnlineChatManager::MuteMemberText(OnlineChatManager *this, const OnlineChatId *onlineChatId, const OnlineChatType *onlineChatType, const unsigned __int64 memberId)
{
  return ?MuteMemberText@OnlineChatManager@@QEAA_NAEBUOnlineChatId@@AEBW4OnlineChatType@@_K@Z(this, onlineChatId, onlineChatType, memberId);
}

/*
==============
OnlineChatManager::IsLocalPlayer
==============
*/

bool __fastcall OnlineChatManager::IsLocalPlayer(OnlineChatManager *this, const unsigned __int64 memberId)
{
  return ?IsLocalPlayer@OnlineChatManager@@QEAA_N_K@Z(this, memberId);
}

/*
==============
OnlineChatManager::ClearChatHistoryForType
==============
*/

void __fastcall OnlineChatManager::ClearChatHistoryForType(OnlineChatManager *this, const OnlineChatType chatType)
{
  ?ClearChatHistoryForType@OnlineChatManager@@QEAAXW4OnlineChatType@@@Z(this, chatType);
}

/*
==============
OnlineChatManager::SendMessageToChatCallback
==============
*/

void __fastcall OnlineChatManager::SendMessageToChatCallback(GenericTask *task, eTaskManagerTaskState state)
{
  ?SendMessageToChatCallback@OnlineChatManager@@CAXPEAVGenericTask@@W4eTaskManagerTaskState@@@Z(task, state);
}

/*
==============
OnlineChatManager::JoinChat
==============
*/

void __fastcall OnlineChatManager::JoinChat(OnlineChatManager *this, const int controllerIndex, const OnlineChatId *chatId, const OnlineChatType chatType, void (__fastcall *callback)(const int, const OnlineChatId *, const OnlineChatType *, const bool, const int))
{
  ?JoinChat@OnlineChatManager@@QEAAXHAEBUOnlineChatId@@W4OnlineChatType@@P6AXH0AEBW43@_NH@Z@Z(this, controllerIndex, chatId, chatType, callback);
}

/*
==============
OnlineChatManager::SubscribeToChannelComplete
==============
*/

void __fastcall OnlineChatManager::SubscribeToChannelComplete(GenericTask *task, eTaskManagerTaskState state)
{
  ?SubscribeToChannelComplete@OnlineChatManager@@CAXPEAVGenericTask@@W4eTaskManagerTaskState@@@Z(task, state);
}

/*
==============
GetChatTypeDescription
==============
*/

const OnlineChatTypeDescription *__fastcall GetChatTypeDescription(const OnlineChatType chatType)
{
  return ?GetChatTypeDescription@@YAPEBUOnlineChatTypeDescription@@W4OnlineChatType@@@Z(chatType);
}

/*
==============
OnlineChatManager::JoinClanChannel
==============
*/

void __fastcall OnlineChatManager::JoinClanChannel(OnlineChatManager *this, const int controllerIndex, CachedCreateChatCallback *cachedCallback)
{
  ?JoinClanChannel@OnlineChatManager@@AEAAXHPEAUCachedCreateChatCallback@@@Z(this, controllerIndex, cachedCallback);
}

/*
==============
OnlineChatManager::SendSystemEvent
==============
*/

void __fastcall OnlineChatManager::SendSystemEvent(OnlineChatManager *this, const int controllerIndex, const char *message)
{
  ?SendSystemEvent@OnlineChatManager@@QEAAXHPEBD@Z(this, controllerIndex, message);
}

/*
==============
OnlineChatManager::Init
==============
*/
bool OnlineChatManager::Init(OnlineChatManager *this)
{
  unsigned int i; 
  unsigned int v3; 
  unsigned __int64 *p_m_adminID; 
  bool result; 

  for ( i = 0; i < 0x12; ++i )
    OnlineChat::UnInit(&s_onlineChatPool.pool[i]);
  v3 = 0;
  p_m_adminID = &s_cachedCreatedCallbacks[0].dwChannelInfo.m_adminID;
  do
  {
    if ( p_m_adminID == (unsigned __int64 *)80 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_chat_manager.cpp", 2000, ASSERT_TYPE_ASSERT, "(cachedCreateChatCallback)", (const char *)&queryFormat, "cachedCreateChatCallback") )
      __debugbreak();
    *(p_m_adminID - 9) = 0i64;
    ++v3;
    *p_m_adminID = 0i64;
    *(p_m_adminID - 2) = 0i64;
    *((_DWORD *)p_m_adminID + 3) = 0;
    *((_WORD *)p_m_adminID + 4) = 0;
    *(p_m_adminID - 1) = 0i64;
    p_m_adminID += 42;
  }
  while ( v3 < 5 );
  result = 1;
  *(_QWORD *)&this->m_throttleMessageQueueStart = 0i64;
  return result;
}

/*
==============
OnlineChatManager::Uninit
==============
*/
void OnlineChatManager::Uninit(OnlineChatManager *this)
{
  ;
}

/*
==============
OnlineChatManager::OnSignedIn
==============
*/
void OnlineChatManager::OnSignedIn(OnlineChatManager *this, const int controllerIndex, GenericSignInState signinState)
{
  unsigned int v3; 
  unsigned int v4; 
  int *p_m_controllerIndex; 
  int *v7; 
  OnlineChatId v8; 
  OnlineChat *VacantOnlineChat; 
  unsigned int v10; 
  int *v11; 
  OnlineChat *v12; 
  OnlineChat *v13; 

  v3 = 0;
  v4 = 0;
  p_m_controllerIndex = &s_onlineChatPool.pool[0].m_controllerIndex;
  v7 = &s_onlineChatPool.pool[0].m_controllerIndex;
  while ( *(v7 - 7) != 1 || *(v7 - 8) || *v7 != controllerIndex )
  {
    ++v4;
    v7 += 3212;
    if ( v4 >= 0x12 )
    {
      v8.m_id = controllerIndex + 1;
      if ( controllerIndex == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_chat_types.h", 16, ASSERT_TYPE_ASSERT, "(_id != 0)", "%s\n\tShould call OnlineChatId.Clear() instead of SetID()", "_id != 0") )
        __debugbreak();
      VacantOnlineChat = OnlineChatManager::GetVacantOnlineChat(&OnlineChatManager::s_instance);
      if ( !VacantOnlineChat && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_chat_manager.cpp", 2168, ASSERT_TYPE_ASSERT, "(chat)", (const char *)&queryFormat, "chat") )
        __debugbreak();
      OnlineChat::Init(VacantOnlineChat, controllerIndex, v8, MOVEMENT);
      break;
    }
  }
  v10 = 0;
  v11 = &s_onlineChatPool.pool[0].m_controllerIndex;
  do
  {
    if ( *(v11 - 7) == 1 && *(v11 - 8) == 1 && *v11 == controllerIndex )
      goto LABEL_25;
    ++v10;
    v11 += 3212;
  }
  while ( v10 < 0x12 );
  if ( controllerIndex == -9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_chat_types.h", controllerIndex + 25, ASSERT_TYPE_ASSERT, "(_id != 0)", "%s\n\tShould call OnlineChatId.Clear() instead of SetID()", "_id != 0") )
    __debugbreak();
  v12 = OnlineChatManager::GetVacantOnlineChat(&OnlineChatManager::s_instance);
  if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_chat_manager.cpp", 2197, ASSERT_TYPE_ASSERT, "(chat)", (const char *)&queryFormat, "chat") )
    __debugbreak();
  OnlineChat::Init(v12, controllerIndex, (const OnlineChatId)(controllerIndex + 9), DODGE);
LABEL_25:
  while ( *(p_m_controllerIndex - 7) != 1 || *(p_m_controllerIndex - 8) != 2 || *p_m_controllerIndex != controllerIndex )
  {
    ++v3;
    p_m_controllerIndex += 3212;
    if ( v3 >= 0x12 )
    {
      if ( controllerIndex == -17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_chat_types.h", 16, ASSERT_TYPE_ASSERT, "(_id != 0)", "%s\n\tShould call OnlineChatId.Clear() instead of SetID()", "_id != 0") )
        __debugbreak();
      v13 = OnlineChatManager::GetVacantOnlineChat(&OnlineChatManager::s_instance);
      if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_chat_manager.cpp", 2208, ASSERT_TYPE_ASSERT, "(chat)", (const char *)&queryFormat, "chat") )
        __debugbreak();
      OnlineChat::Init(v13, controllerIndex, (const OnlineChatId)(controllerIndex + 17), COUNT);
      break;
    }
  }
  if ( !Live_GetDoesUserHaveOnlineCommunicationsPrivilege(controllerIndex) )
    GamerProfile_DisableChatForAllActiveClients();
}

/*
==============
OnlineChatManager::OnDWInstantMessage
==============
*/
void OnlineChatManager::OnDWInstantMessage(OnlineChatManager *this, const int controllerIndex, unsigned __int64 senderID, const char *senderName, const char *message)
{
  int m_id; 
  unsigned __int64 v8; 
  OnlineChat *v9; 
  Online_BlockList *Instance; 
  const char *v11; 
  unsigned int v12; 
  OnlineChatPool *v13; 
  OnlineChatPool *v14; 
  unsigned __int64 v15; 
  unsigned __int64 v16; 
  OnlineChat *VacantOnlineChat; 
  OnlineChatId v18; 
  OnlineChat *v19; 
  XUID *Xuid; 
  unsigned __int64 v21; 
  unsigned int v22; 
  bool v23; 
  const char *v24; 
  XUID *v25; 
  unsigned __int64 v26; 
  OnlineChatMessage *v27; 
  XUID result; 
  XUID v29; 
  XUID controllerIndexa; 
  char nameBufferIn[40]; 
  char dest[40]; 

  LODWORD(controllerIndexa.m_id) = controllerIndex;
  m_id = controllerIndex;
  if ( !message && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_chat_manager.cpp", 1907, ASSERT_TYPE_ASSERT, "(message)", (const char *)&queryFormat, "message") )
    __debugbreak();
  v8 = -1i64;
  do
    ++v8;
  while ( message[v8] );
  if ( v8 <= ONLINE_CHAT_MANAGER_MESSAGE_HEADER_LEN && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_chat_manager.cpp", 1908, ASSERT_TYPE_ASSERT, "(strlen( message ) > ONLINE_CHAT_MANAGER_MESSAGE_HEADER_LEN)", (const char *)&queryFormat, "strlen( message ) > ONLINE_CHAT_MANAGER_MESSAGE_HEADER_LEN") )
    __debugbreak();
  Core_strcpy(dest, 0x24ui64, senderName);
  v9 = NULL;
  if ( !senderID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_chat_types.h", 16, ASSERT_TYPE_ASSERT, "(_id != 0)", "%s\n\tShould call OnlineChatId.Clear() instead of SetID()", "_id != 0") )
    __debugbreak();
  XUID::FromUniversalId(&result, senderID);
  Instance = Online_BlockList::GetInstance();
  if ( Online_BlockList::IsBlocked(Instance, m_id, result) )
  {
    v11 = XUID::ToString(&result);
    Com_Printf(14, "[Chat] %s: Ignoring DW instant mesage from %s because they are blocked\n", "OnlineChatManager::OnDWInstantMessage", v11);
  }
  else
  {
    v12 = 0;
    v13 = &s_onlineChatPool;
    v14 = &s_onlineChatPool;
    while ( v14->pool[0].m_state == INACTIVE || v14->pool[0].m_chatType != (COUNT|DODGE|0x4) || senderID != v14->pool[0].m_chatId.m_id )
    {
      ++v12;
      v14 = (OnlineChatPool *)((char *)v14 + 12848);
      if ( v12 >= 0x12 )
      {
        v29.m_id = result.m_id;
        if ( !senderName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_chat_manager.cpp", 1090, ASSERT_TYPE_ASSERT, "(playerName)", (const char *)&queryFormat, "playerName") )
          __debugbreak();
        v15 = XUID::ToUint64(&v29);
        if ( !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_chat_types.h", 16, ASSERT_TYPE_ASSERT, "(_id != 0)", "%s\n\tShould call OnlineChatId.Clear() instead of SetID()", "_id != 0") )
          __debugbreak();
        v16 = XUID::ToUint64(&v29);
        VacantOnlineChat = OnlineChatManager::GetVacantOnlineChat(&OnlineChatManager::s_instance);
        v18.m_id = v15;
        m_id = controllerIndexa.m_id;
        v19 = VacantOnlineChat;
        OnlineChat::Init(VacantOnlineChat, controllerIndexa.m_id, v18, COUNT|DODGE|0x4);
        LUI_Social_SendChannelAddedEvent(m_id, (const OnlineChatType)v19->m_chatType, v19->m_chatId, 0);
        Live_GetOnlineUserName(m_id, nameBufferIn, 36);
        OnlineChat::AddMemberToChat(v19, v16, senderName, 0);
        Xuid = Live_GetXuid(&controllerIndexa, m_id);
        v21 = XUID::ToUint64(Xuid);
        OnlineChat::AddMemberToChat(v19, v21, nameBufferIn, 0);
        v22 = 0;
        while ( v13->pool[0].m_state == INACTIVE || v13->pool[0].m_chatType != (COUNT|DODGE|0x4) || senderID != v13->pool[0].m_chatId.m_id )
        {
          ++v22;
          v13 = (OnlineChatPool *)((char *)v13 + 12848);
          if ( v22 >= 0x12 )
          {
            v23 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_chat_manager.cpp", 1943, ASSERT_TYPE_ASSERT, "(chat)", (const char *)&queryFormat, "chat");
            goto LABEL_31;
          }
        }
        v9 = (OnlineChat *)v13;
        goto LABEL_33;
      }
    }
    v9 = (OnlineChat *)v14;
    if ( v14->pool[0].m_state != ACTIVE )
    {
      v23 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_chat_manager.cpp", 1936, ASSERT_TYPE_ASSERT, "(chat->GetState() == OnlineChatState::JOINED)", (const char *)&queryFormat, "chat->GetState() == OnlineChatState::JOINED");
LABEL_31:
      if ( v23 )
        __debugbreak();
    }
LABEL_33:
    v24 = &message[ONLINE_CHAT_MANAGER_MESSAGE_HEADER_LEN];
    v25 = Live_GetXuid(&v29, m_id);
    v26 = XUID::ToUint64(v25);
    v27 = OnlineChat::AddMessageToChat(v9, senderID, v26, senderName, v24, BYTE_VALUE);
    if ( v27 )
      AddMessageToChatHistory(v9, v27);
  }
}

/*
==============
OnlineChatManager::Frame
==============
*/

void __fastcall OnlineChatManager::Frame(OnlineChatManager *this)
{
  OnlineChatMessage::CheckProfanityFilterTasks();
}

/*
==============
AddMessageToChatHistory
==============
*/
void AddMessageToChatHistory(OnlineChat *chat, OnlineChatMessage *onlineChatMessage)
{
  OnlineChatHistory *v3; 
  unsigned int count; 
  unsigned int startIndex; 

  if ( onlineChatMessage )
  {
    v3 = &s_onlineChatHistory[chat->m_chatType];
    count = v3->count;
    startIndex = v3->startIndex;
    if ( count >= 0xC8 )
    {
      startIndex = 0xC8 % (startIndex + 1);
      v3->startIndex = startIndex;
    }
    else
    {
      v3->count = ++count;
    }
    v3->messages[(startIndex + count - 1) % 0xC8] = onlineChatMessage;
  }
}

/*
==============
OnlineChatManager::AreWeHostOfChat
==============
*/
bool OnlineChatManager::AreWeHostOfChat(OnlineChatManager *this, const int controllerIndex, const OnlineChatId *chatId, const OnlineChatType *chatType)
{
  int v4; 
  OnlineChatPool *i; 
  XUID *Xuid; 
  unsigned __int64 v8; 
  OnlineChatMemberInfo *MemberFromChatById; 
  XUID result; 

  v4 = 0;
  for ( i = &s_onlineChatPool; i->pool[0].m_state == INACTIVE || i->pool[0].m_chatType != *chatType || chatId->m_id != i->pool[0].m_chatId.m_id; i = (OnlineChatPool *)((char *)i + 12848) )
  {
    if ( (unsigned int)++v4 >= 0x12 )
    {
      Com_PrintError(14, "[Chat] %s: Invalid chat id %zu\n", "OnlineChatManager::AreWeHostOfChat", chatId->m_id);
      return 0;
    }
  }
  Xuid = Live_GetXuid(&result, controllerIndex);
  v8 = XUID::ToUint64(Xuid);
  MemberFromChatById = OnlineChat::GetMemberFromChatById(i->pool, v8);
  if ( MemberFromChatById )
    return MemberFromChatById->isHost;
  Com_PrintError(14, "[Chat] %s: We don't exist in the chat, but the chat exists\n", "OnlineChatManager::AreWeHostOfChat");
  return 0;
}

/*
==============
OnlineChatManager::CacheCreateCallback
==============
*/
char OnlineChatManager::CacheCreateCallback(OnlineChatManager *this, void (*callback)(const int, const OnlineChatId *, const OnlineChatType *, const bool, const int), OnlineChatType chatType, CachedCreateChatCallback **cachedCallbackOut)
{
  unsigned int v4; 
  CachedCreateChatCallback *v5; 

  v4 = 0;
  v5 = s_cachedCreatedCallbacks;
  do
  {
    if ( !v5->callback )
    {
      v5->callback = callback;
      v5->chatType = chatType;
      *cachedCallbackOut = v5;
      return 1;
    }
    ++v4;
    ++v5;
  }
  while ( v4 < 5 );
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_chat_manager.cpp", 1395, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "No valid cached callback slots left") )
    __debugbreak();
  return 0;
}

/*
==============
OnlineChatManager::CanCommunicateWithUser
==============
*/
bool OnlineChatManager::CanCommunicateWithUser(const int controllerIndex, const OnlineChatType chatType, const XUID xuid)
{
  XUID *v6; 
  unsigned __int64 PlatformUserId; 
  Online_Friends *Instance; 
  unsigned int Index; 
  Online_Friends *v10; 
  SocialPresence *Presence; 
  SocialPresence *v12; 
  const PartyData *PartyData; 
  unsigned int MemberByXUID; 
  int v15; 
  char MemberPlatform; 
  XUID xuida; 
  XUID result; 

  xuida.m_id = xuid.m_id;
  v6 = Live_GetXuid(&result, controllerIndex);
  if ( XUID::operator==(v6, &xuida) )
  {
    PlatformUserId = Live_GetPlatformUserId(controllerIndex);
    return XB3_Privacy_GetPrivacySettingsForUser(controllerIndex, PlatformUserId, PERMISSION_COMMUNICATION);
  }
  if ( (unsigned int)(chatType - 4) <= 1 )
  {
    if ( chatType != (COUNT|DODGE) )
    {
      PartyData = Lobby_GetPartyData();
      goto LABEL_14;
    }
LABEL_12:
    PartyData = &g_partyData;
LABEL_14:
    MemberByXUID = Party_FindMemberByXUID(PartyData, xuida);
    v15 = MemberByXUID;
    if ( MemberByXUID != -1 )
    {
      MemberPlatform = Party_GetMemberPlatform(PartyData, MemberByXUID);
      if ( MemberPlatform == (unsigned __int8)GetClientPlatform() )
      {
        PlatformUserId = Party_GetPlatformId(PartyData, v15);
        return XB3_Privacy_GetPrivacySettingsForUser(controllerIndex, PlatformUserId, PERMISSION_COMMUNICATION);
      }
    }
    return XB3_Privacy_CanCommunicateWithCrossplayUser(controllerIndex, xuid);
  }
  if ( chatType == (COUNT|DODGE) )
    goto LABEL_12;
  if ( chatType == (COUNT|DODGE|0x4) )
  {
    Instance = Online_Friends::GetInstance();
    Index = Online_Friends::FindIndex(Instance, controllerIndex, xuida);
    if ( Index != -1 )
    {
      v10 = Online_Friends::GetInstance();
      PlatformUserId = Online_Friends::GetPlatformUserId(v10, controllerIndex, Index);
      return XB3_Privacy_GetPrivacySettingsForUser(controllerIndex, PlatformUserId, PERMISSION_COMMUNICATION);
    }
    Presence = (SocialPresence *)Social_GetPresence(controllerIndex, xuida);
    v12 = Presence;
    if ( Presence && SocialPresence::GetPlatform(Presence) == PRESENCE_PLATFORM_XBOX_ONE )
    {
      PlatformUserId = SocialPresence::GetPlatformId(v12);
      return XB3_Privacy_GetPrivacySettingsForUser(controllerIndex, PlatformUserId, PERMISSION_COMMUNICATION);
    }
  }
  return XB3_Privacy_CanCommunicateWithCrossplayUser(controllerIndex, xuid);
}

/*
==============
OnlineChatManager::CanCreateChat
==============
*/
bool OnlineChatManager::CanCreateChat(OnlineChatManager *this, const int controllerIndex)
{
  return Live_IsUserSignedInToDemonware(controllerIndex);
}

/*
==============
OnlineChatManager::CleanChatMessage
==============
*/
void OnlineChatManager::CleanChatMessage(const char *message, char *cleanMessage)
{
  int v2; 
  __int64 v5; 
  int v6; 
  char v7; 
  char v8; 
  char v9; 
  const char *v10; 
  char *v11; 
  char v12; 
  const char *v13; 
  char *v14; 
  char v15; 
  const char *v16; 
  char *v17; 

  v2 = 0;
  if ( *message )
  {
    v5 = 0i64;
    v6 = 1;
    while ( 1 )
    {
      if ( v2 >= 499 )
      {
LABEL_23:
        cleanMessage[v2] = 0;
        return;
      }
      v7 = message[v5];
      if ( v7 == 94 )
      {
        if ( &message[v6] )
        {
          v8 = message[v5 + 1];
          if ( v8 != 94 && (unsigned __int8)(v8 - 39) <= 0x17u )
          {
            v9 = 94;
            v10 = aA_18;
            v11 = &cleanMessage[v2];
            do
            {
              *v11 = v9;
              v9 = *++v10;
              ++v2;
              ++v11;
            }
            while ( *v10 );
            goto LABEL_22;
          }
        }
      }
      else if ( v7 == 91 )
      {
        if ( message[v5 + 1] == 123 )
        {
          v12 = 91;
          v13 = aA_1;
          v14 = &cleanMessage[v2];
          do
          {
            *v14 = v12;
            v12 = *++v13;
            ++v2;
            ++v14;
          }
          while ( *v13 );
          goto LABEL_22;
        }
      }
      else if ( v7 == 125 && message[v5 + 1] == 93 )
      {
        v15 = 125;
        v16 = aA_23;
        v17 = &cleanMessage[v2];
        do
        {
          *v17 = v15;
          v15 = *++v16;
          ++v2;
          ++v17;
        }
        while ( *v16 );
        goto LABEL_22;
      }
      cleanMessage[v2++] = v7;
LABEL_22:
      ++v5;
      ++v6;
      if ( !message[v5] )
        goto LABEL_23;
    }
  }
  *cleanMessage = 0;
}

/*
==============
OnlineChatManager::ClearCachedCreateChatCallback
==============
*/
void OnlineChatManager::ClearCachedCreateChatCallback(CachedCreateChatCallback *cachedCreateChatCallback)
{
  if ( !cachedCreateChatCallback && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_chat_manager.cpp", 2000, ASSERT_TYPE_ASSERT, "(cachedCreateChatCallback)", (const char *)&queryFormat, "cachedCreateChatCallback") )
    __debugbreak();
  cachedCreateChatCallback->callback = NULL;
  cachedCreateChatCallback->dwChannelInfo.m_adminID = 0i64;
  cachedCreateChatCallback->dwChannelInfo.m_channelID = 0i64;
  cachedCreateChatCallback->dwChannelInfo.m_dataVersion = 0;
  *(_WORD *)&cachedCreateChatCallback->dwChannelInfo.m_isPasswordRequired = 0;
  *(_QWORD *)&cachedCreateChatCallback->dwChannelInfo.m_numSubscribers = 0i64;
}

/*
==============
OnlineChatManager::ClearChatHistoryForType
==============
*/
void OnlineChatManager::ClearChatHistoryForType(OnlineChatManager *this, const OnlineChatType chatType)
{
  __int64 v2; 
  int v4; 

  v2 = chatType;
  if ( (unsigned int)chatType >= 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_chat_manager.cpp", 1775, ASSERT_TYPE_ASSERT, "(unsigned)( static_cast< int >( chatType ) ) < (unsigned)( static_cast< int >( OnlineChatType::COUNT ) )", "static_cast< int >( chatType ) doesn't index static_cast< int >( OnlineChatType::COUNT )\n\t%i not in [0, %i)", chatType, v4) )
      __debugbreak();
  }
  memset_0(&s_onlineChatHistory[v2], 0, sizeof(OnlineChatHistory));
}

/*
==============
OnlineChatManager::ClearPending
==============
*/
void OnlineChatManager::ClearPending(OnlineChatManager *this, const OnlineChatManager::ChatPendingType pendingType, const OnlineChatId *chatId, const OnlineChatType *chatType)
{
  int v5; 
  __int64 listCount; 
  unsigned __int64 m_id; 
  __int128 v14; 

  _R11 = &this->m_pendingLists[pendingType];
  v5 = 0;
  listCount = _R11->listCount;
  if ( (int)listCount > 0 )
  {
    m_id = chatId->m_id;
    for ( _RCX = _R11; ; _RCX = (OnlineChatManager::PendingList *)((char *)_RCX + 16) )
    {
      __asm
      {
        vmovups xmm0, xmmword ptr [rcx]
        vmovq   rax, xmm0
        vmovups [rsp+18h+var_18], xmm0
      }
      if ( _RAX == m_id && DWORD2(v14) == *chatType )
        break;
      if ( ++v5 >= (int)listCount )
        return;
    }
    _R11->listCount = listCount - 1;
    _RCX = 2 * listCount;
    _RAX = 2i64 * v5;
    __asm
    {
      vmovups xmm0, xmmword ptr [r11+rcx*8-10h]
      vmovups xmmword ptr [r11+rax*8], xmm0
    }
    _R11->list[_R11->listCount].m_id.m_id = 0i64;
  }
}

/*
==============
OnlineChatManager::CloseChat
==============
*/
void OnlineChatManager::CloseChat(OnlineChatManager *this, OnlineChat *chat)
{
  unsigned int v3; 
  OnlineChatPool *v4; 

  if ( !chat && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_chat_manager.cpp", 1284, ASSERT_TYPE_ASSERT, "(chat)", (const char *)&queryFormat, "chat") )
    __debugbreak();
  LUI_Social_SendChannelRemovedEvent(chat->m_controllerIndex, (const OnlineChatType)chat->m_chatType, chat->m_chatId);
  Com_Printf(14, "\n\n-- Chat Channels Debug Print START --\n\n");
  v3 = 0;
  v4 = &s_onlineChatPool;
  do
  {
    if ( v4->pool[0].m_state == ACTIVE )
    {
      Com_Printf(14, "Chat Index[%i]:\n", v3);
      OnlineChat::Print(v4->pool);
    }
    ++v3;
    v4 = (OnlineChatPool *)((char *)v4 + 12848);
  }
  while ( v3 < 0x12 );
  Com_Printf(14, "\n\n-- Chat Channels Debug Print END --\n\n");
  if ( --s_onlineChatPool.numActiveChat > 0x12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_chat_manager.cpp", 1296, ASSERT_TYPE_ASSERT, "(s_onlineChatPool.numActiveChat <= ( sizeof( *array_counter( s_onlineChatPool.pool ) ) + 0 ))", (const char *)&queryFormat, "s_onlineChatPool.numActiveChat <= ARRAY_COUNT( s_onlineChatPool.pool )") )
    __debugbreak();
  OnlineChat::UnInit(chat);
}

/*
==============
OnlineChatManager::CloseOldestPrivateChat
==============
*/
void OnlineChatManager::CloseOldestPrivateChat(OnlineChatManager *this)
{
  unsigned int v1; 
  int *p_m_lastReceivedMessageTime; 
  unsigned int v3; 
  unsigned int v4; 
  int v5; 
  OnlineChatPool *v6; 
  OnlineChat *v7; 

  if ( !s_onlineChatPool.numActiveChat && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_chat_manager.cpp", 1255, ASSERT_TYPE_ASSERT, "(s_onlineChatPool.numActiveChat > 0)", (const char *)&queryFormat, "s_onlineChatPool.numActiveChat > 0") )
    __debugbreak();
  v1 = 0;
  p_m_lastReceivedMessageTime = &s_onlineChatPool.pool[2].m_lastReceivedMessageTime;
  v3 = 0;
  v4 = 0;
  v5 = 0x7FFFFFFF;
  do
  {
    if ( *(p_m_lastReceivedMessageTime - 6429) == 7 && *(p_m_lastReceivedMessageTime - 6424) < v5 )
    {
      v5 = *(p_m_lastReceivedMessageTime - 6424);
      v3 = v4;
    }
    if ( *(p_m_lastReceivedMessageTime - 3217) == 7 && *(p_m_lastReceivedMessageTime - 3212) < v5 )
    {
      v5 = *(p_m_lastReceivedMessageTime - 3212);
      v3 = v4 + 1;
    }
    if ( *(p_m_lastReceivedMessageTime - 5) == 7 && *p_m_lastReceivedMessageTime < v5 )
    {
      v5 = *p_m_lastReceivedMessageTime;
      v3 = v4 + 2;
    }
    if ( p_m_lastReceivedMessageTime[3207] == 7 && p_m_lastReceivedMessageTime[3212] < v5 )
    {
      v5 = p_m_lastReceivedMessageTime[3212];
      v3 = v4 + 3;
    }
    if ( p_m_lastReceivedMessageTime[6419] == 7 && p_m_lastReceivedMessageTime[6424] < v5 )
    {
      v5 = p_m_lastReceivedMessageTime[6424];
      v3 = v4 + 4;
    }
    if ( p_m_lastReceivedMessageTime[9631] == 7 && p_m_lastReceivedMessageTime[9636] < v5 )
    {
      v5 = p_m_lastReceivedMessageTime[9636];
      v3 = v4 + 5;
    }
    if ( p_m_lastReceivedMessageTime[12843] == 7 && p_m_lastReceivedMessageTime[12848] < v5 )
    {
      v5 = p_m_lastReceivedMessageTime[12848];
      v3 = v4 + 6;
    }
    if ( p_m_lastReceivedMessageTime[16055] == 7 && p_m_lastReceivedMessageTime[16060] < v5 )
    {
      v5 = p_m_lastReceivedMessageTime[16060];
      v3 = v4 + 7;
    }
    if ( p_m_lastReceivedMessageTime[19267] == 7 && p_m_lastReceivedMessageTime[19272] < v5 )
    {
      v5 = p_m_lastReceivedMessageTime[19272];
      v3 = v4 + 8;
    }
    if ( p_m_lastReceivedMessageTime[22479] == 7 && p_m_lastReceivedMessageTime[22484] < v5 )
    {
      v5 = p_m_lastReceivedMessageTime[22484];
      v3 = v4 + 9;
    }
    if ( p_m_lastReceivedMessageTime[25691] == 7 && p_m_lastReceivedMessageTime[25696] < v5 )
    {
      v5 = p_m_lastReceivedMessageTime[25696];
      v3 = v4 + 10;
    }
    if ( p_m_lastReceivedMessageTime[28903] == 7 && p_m_lastReceivedMessageTime[28908] < v5 )
    {
      v5 = p_m_lastReceivedMessageTime[28908];
      v3 = v4 + 11;
    }
    if ( p_m_lastReceivedMessageTime[32115] == 7 && p_m_lastReceivedMessageTime[32120] < v5 )
    {
      v5 = p_m_lastReceivedMessageTime[32120];
      v3 = v4 + 12;
    }
    if ( p_m_lastReceivedMessageTime[35327] == 7 && p_m_lastReceivedMessageTime[35332] < v5 )
    {
      v5 = p_m_lastReceivedMessageTime[35332];
      v3 = v4 + 13;
    }
    if ( p_m_lastReceivedMessageTime[38539] == 7 && p_m_lastReceivedMessageTime[38544] < v5 )
    {
      v5 = p_m_lastReceivedMessageTime[38544];
      v3 = v4 + 14;
    }
    if ( p_m_lastReceivedMessageTime[41751] == 7 && p_m_lastReceivedMessageTime[41756] < v5 )
    {
      v5 = p_m_lastReceivedMessageTime[41756];
      v3 = v4 + 15;
    }
    if ( p_m_lastReceivedMessageTime[44963] == 7 && p_m_lastReceivedMessageTime[44968] < v5 )
    {
      v5 = p_m_lastReceivedMessageTime[44968];
      v3 = v4 + 16;
    }
    if ( p_m_lastReceivedMessageTime[48175] == 7 && p_m_lastReceivedMessageTime[48180] < v5 )
    {
      v5 = p_m_lastReceivedMessageTime[48180];
      v3 = v4 + 17;
    }
    v4 += 18;
    p_m_lastReceivedMessageTime += 57816;
  }
  while ( v4 < 0x12 );
  v6 = &s_onlineChatPool;
  v7 = &s_onlineChatPool.pool[v3];
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_chat_manager.cpp", 1284, ASSERT_TYPE_ASSERT, "(chat)", (const char *)&queryFormat, "chat") )
    __debugbreak();
  LUI_Social_SendChannelRemovedEvent(v7->m_controllerIndex, (const OnlineChatType)v7->m_chatType, v7->m_chatId);
  Com_Printf(14, "\n\n-- Chat Channels Debug Print START --\n\n");
  do
  {
    if ( v6->pool[0].m_state == ACTIVE )
    {
      Com_Printf(14, "Chat Index[%i]:\n", v1);
      OnlineChat::Print(v6->pool);
    }
    ++v1;
    v6 = (OnlineChatPool *)((char *)v6 + 12848);
  }
  while ( v1 < 0x12 );
  Com_Printf(14, "\n\n-- Chat Channels Debug Print END --\n\n");
  if ( --s_onlineChatPool.numActiveChat > 0x12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_chat_manager.cpp", 1296, ASSERT_TYPE_ASSERT, "(s_onlineChatPool.numActiveChat <= ( sizeof( *array_counter( s_onlineChatPool.pool ) ) + 0 ))", (const char *)&queryFormat, "s_onlineChatPool.numActiveChat <= ARRAY_COUNT( s_onlineChatPool.pool )") )
    __debugbreak();
  OnlineChat::UnInit(v7);
}

/*
==============
OnlineChatManager::ComErrorCleanup
==============
*/
void OnlineChatManager::ComErrorCleanup(OnlineChatManager *this, const errorParm_t errorCode)
{
  int i; 
  unsigned int v4; 
  OnlineChatPool *v5; 
  OnlineChatManager::PendingChat *v6; 
  __int64 v7; 
  unsigned int v8; 
  OnlineChatManager::PendingChat *v9; 

  if ( errorCode == ERR_DROP )
  {
    for ( i = 0; i < 8; ++i )
    {
      OnlineChatManager::UnsubscribeFromAllChannels(this, i, "chat");
      OnlineChatManager::UnsubscribeFromAllChannels(this, i, "clanChat");
    }
    v4 = 0;
    v5 = &s_onlineChatPool;
    do
    {
      if ( v5->pool[0].m_state == ACTIVE )
        OnlineChatManager::CloseChat(this, v5->pool);
      ++v4;
      v5 = (OnlineChatPool *)((char *)v5 + 12848);
    }
    while ( v4 < 0x12 );
    v6 = &this->m_pendingLists[0].list[2];
    v7 = 2i64;
    do
    {
      LODWORD(v6[16].m_id.m_id) = 0;
      v8 = 0;
      v9 = v6;
      do
      {
        v8 += 18;
        v9[-2].m_id.m_id = 0i64;
        v9[-1].m_id.m_id = 0i64;
        v9->m_id.m_id = 0i64;
        v9[1].m_id.m_id = 0i64;
        v9[2].m_id.m_id = 0i64;
        v9[3].m_id.m_id = 0i64;
        v9[4].m_id.m_id = 0i64;
        v9[5].m_id.m_id = 0i64;
        v9[6].m_id.m_id = 0i64;
        v9[7].m_id.m_id = 0i64;
        v9[8].m_id.m_id = 0i64;
        v9[9].m_id.m_id = 0i64;
        v9[10].m_id.m_id = 0i64;
        v9[11].m_id.m_id = 0i64;
        v9[12].m_id.m_id = 0i64;
        v9[13].m_id.m_id = 0i64;
        v9[14].m_id.m_id = 0i64;
        v9[15].m_id.m_id = 0i64;
        v9 += 18;
      }
      while ( v8 < 0x12 );
      v6 = (OnlineChatManager::PendingChat *)((char *)v6 + 296);
      --v7;
    }
    while ( v7 );
    memset_0(s_onlineChatHistory, 0, sizeof(s_onlineChatHistory));
  }
}

/*
==============
OnlineChatManager::CreateChat
==============
*/
char OnlineChatManager::CreateChat(OnlineChatManager *this, const int controllerIndex, const OnlineChatType chatType, void (*callback)(const int, const OnlineChatId *, const OnlineChatType *, const bool, const int))
{
  __int64 v4; 
  int v6; 
  CachedCreateChatCallback *i; 
  const char *v9; 
  const char *v10; 
  int v11; 
  __int64 v12; 
  DWServicesAccess *Instance; 
  DWMessaging *Messaging; 
  TaskCreateRequest *v15; 
  bdRemoteTask *v16; 
  TaskManager *v17; 
  char v18; 
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  bdReference<bdRemoteTask> result; 
  __int64 v21; 
  TaskCreateResult pTaskCreateResult; 
  TaskCreateRequest pTaskCreateRequest; 

  v21 = -2i64;
  v4 = chatType;
  v6 = 0;
  for ( i = s_cachedCreatedCallbacks; i->callback; ++i )
  {
    if ( (unsigned int)++v6 >= 5 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_chat_manager.cpp", 1395, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "No valid cached callback slots left") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_chat_manager.cpp", 364, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Too many chat create requests!") )
        __debugbreak();
      return 0;
    }
  }
  i->callback = callback;
  i->chatType = chatType;
  switch ( chatType )
  {
    case 7:
      v9 = "chatType != OnlineChatType::PRIVATE_CHAT";
      v10 = "(chatType != OnlineChatType::PRIVATE_CHAT)";
      v11 = 369;
      goto LABEL_19;
    case 0:
      v9 = "chatType != OnlineChatType::SYSTEM_EVENTS";
      v10 = "(chatType != OnlineChatType::SYSTEM_EVENTS)";
      v11 = 373;
      goto LABEL_19;
    case 1:
      v9 = "chatType != OnlineChatType::SYSTEM_ERRORS";
      v10 = "(chatType != OnlineChatType::SYSTEM_ERRORS)";
      v11 = 374;
      goto LABEL_19;
    case 2:
      v9 = "chatType != OnlineChatType::PLAYER_EVENTS";
      v10 = "(chatType != OnlineChatType::PLAYER_EVENTS)";
      v11 = 375;
      goto LABEL_19;
    case 6:
      v9 = "chatType != OnlineChatType::CLAN_CHAT";
      v10 = "(chatType != OnlineChatType::CLAN_CHAT)";
      v11 = 379;
LABEL_19:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_chat_manager.cpp", v11, ASSERT_TYPE_ASSERT, v10, (const char *)&queryFormat, v9) )
        __debugbreak();
      break;
  }
  pTaskCreateRequest.m_appTaskType = -1;
  memset(&pTaskCreateRequest.m_appSecondaryCallback, 0, 24);
  pTaskCreateRequest.m_onUpdateCallback = NULL;
  pTaskCreateRequest.m_cancelTaskOnSignoutEvent = 1;
  pTaskCreateRequest.m_timeoutInSeconds = 0;
  pTaskCreateResult.m_localTaskId = 0;
  pTaskCreateResult.m_task = NULL;
  pTaskCreateRequest.m_appData = i;
  pTaskCreateRequest.m_onCompletionCallback = OnlineChatManager::CreateChatCallback;
  pTaskCreateRequest.m_controllerIndex = controllerIndex;
  v12 = v4;
  Instance = DWServicesAccess::GetInstance();
  Messaging = DWServicesAccess::GetMessaging(Instance, controllerIndex);
  v15 = (TaskCreateRequest *)DWMessaging::createChatChannel(Messaging, &result, s_chatDescription[v12].dwCategory, &i->createChannelResponse);
  if ( v15 != (TaskCreateRequest *)&pTaskCreateRequest.m_remoteDemonwareTask )
  {
    if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->~bdReferencable)(pTaskCreateRequest.m_remoteDemonwareTask.m_ptr, 1i64);
    v16 = *(bdRemoteTask **)&v15->m_controllerIndex;
    pTaskCreateRequest.m_remoteDemonwareTask.m_ptr = v16;
    if ( v16 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v16->m_refCount, 1u);
  }
  if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result.m_ptr )
    ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
  if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr && (v17 = TaskManager::GetInstance(), TaskManager::CreateTask(v17, &pTaskCreateRequest, &pTaskCreateResult)) )
  {
    Com_Printf(14, "[Chat] %s: Creating chat, type %s\n", "OnlineChatManager::CreateChat", s_chatDescription[v12].typeString);
    v18 = 1;
  }
  else
  {
    Com_PrintError(14, "[Chat] %s: failed to create chat, type %s\n", "OnlineChatManager::CreateChat", s_chatDescription[v12].typeString);
    v18 = 0;
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
  return v18;
}

/*
==============
OnlineChatManager::CreateChatCallback
==============
*/
void OnlineChatManager::CreateChatCallback(GenericTask *task, eTaskManagerTaskState state)
{
  char *m_appData; 
  bool v4; 
  const char *LocalClientName; 
  __int64 v6; 
  const char *v7; 
  OnlineChat *v8; 
  OnlineChatPool *v9; 
  unsigned int i; 
  unsigned __int64 v11; 
  int ErrorCode; 
  XUID result; 

  m_appData = (char *)task->m_appData;
  if ( state == TASKSTATE_ERROR )
  {
    v4 = 0;
  }
  else
  {
    bdChannelInfo::operator=((bdChannelInfo *)(m_appData + 16), (const bdChannelInfo *)(m_appData + 128));
    OnlineChatManager::ProcessJoinedChat(&OnlineChatManager::s_instance, task->m_controllerIndex, *((_QWORD *)m_appData + 8), *(const OnlineChatType *)m_appData);
    Live_GetXuid(&result, task->m_controllerIndex);
    LocalClientName = Live_GetLocalClientName(task->m_controllerIndex);
    v6 = *((_QWORD *)m_appData + 8);
    v7 = LocalClientName;
    if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_chat_types.h", 16, ASSERT_TYPE_ASSERT, "(_id != 0)", "%s\n\tShould call OnlineChatId.Clear() instead of SetID()", "_id != 0") )
      __debugbreak();
    v8 = NULL;
    v9 = &s_onlineChatPool;
    for ( i = 0; i < 0x12; ++i )
    {
      if ( v9->pool[0].m_state && v9->pool[0].m_chatType == *(_DWORD *)m_appData && v6 == v9->pool[0].m_chatId.m_id )
      {
        v8 = (OnlineChat *)v9;
        goto LABEL_13;
      }
      v9 = (OnlineChatPool *)((char *)v9 + 12848);
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_chat_manager.cpp", 344, ASSERT_TYPE_ASSERT, "(chat)", (const char *)&queryFormat, "chat") )
      __debugbreak();
LABEL_13:
    v11 = XUID::ToUint64(&result);
    OnlineChat::AddMemberToChat(v8, v11, v7, 1);
    v4 = 1;
  }
  ErrorCode = bdRemoteTask::getErrorCode(task->m_remoteDemonwareTask.m_ptr);
  OnlineChatManager::ProcessCreateCallback(&OnlineChatManager::s_instance, task->m_controllerIndex, (CachedCreateChatCallback *)m_appData, v4, ErrorCode);
}

/*
==============
OnlineChatManager::CreatePlayerEventsChat
==============
*/
void OnlineChatManager::CreatePlayerEventsChat(OnlineChatManager *this, const int controllerIndex)
{
  OnlineChatId v3; 
  OnlineChat *VacantOnlineChat; 

  v3.m_id = controllerIndex + 17;
  if ( controllerIndex == -17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_chat_types.h", 16, ASSERT_TYPE_ASSERT, "(_id != 0)", "%s\n\tShould call OnlineChatId.Clear() instead of SetID()", "_id != 0") )
    __debugbreak();
  VacantOnlineChat = OnlineChatManager::GetVacantOnlineChat(&OnlineChatManager::s_instance);
  if ( !VacantOnlineChat && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_chat_manager.cpp", 2208, ASSERT_TYPE_ASSERT, "(chat)", (const char *)&queryFormat, "chat") )
    __debugbreak();
  OnlineChat::Init(VacantOnlineChat, controllerIndex, v3, COUNT);
}

/*
==============
OnlineChatManager::CreatePrivateChatByXUID
==============
*/
void OnlineChatManager::CreatePrivateChatByXUID(OnlineChatManager *this, const int controllerIndex, const XUID xuid, const char *playerName, const bool initiatedChat)
{
  bool v5; 
  OnlineChatId v8; 
  unsigned __int64 v9; 
  OnlineChat *VacantOnlineChat; 
  XUID *v11; 
  unsigned __int64 v12; 
  XUID result; 
  char nameBufferIn[40]; 
  XUID v15; 

  v15.m_id = xuid.m_id;
  v5 = initiatedChat;
  if ( !playerName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_chat_manager.cpp", 1090, ASSERT_TYPE_ASSERT, "(playerName)", (const char *)&queryFormat, "playerName") )
    __debugbreak();
  v8.m_id = XUID::ToUint64(&v15);
  if ( !v8.m_id && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_chat_types.h", 16, ASSERT_TYPE_ASSERT, "(_id != 0)", "%s\n\tShould call OnlineChatId.Clear() instead of SetID()", "_id != 0") )
    __debugbreak();
  v9 = XUID::ToUint64(&v15);
  VacantOnlineChat = OnlineChatManager::GetVacantOnlineChat(&OnlineChatManager::s_instance);
  OnlineChat::Init(VacantOnlineChat, controllerIndex, v8, COUNT|DODGE|0x4);
  LUI_Social_SendChannelAddedEvent(controllerIndex, (const OnlineChatType)VacantOnlineChat->m_chatType, VacantOnlineChat->m_chatId, v5);
  Live_GetOnlineUserName(controllerIndex, nameBufferIn, 36);
  OnlineChat::AddMemberToChat(VacantOnlineChat, v9, playerName, 0);
  v11 = Live_GetXuid(&result, controllerIndex);
  v12 = XUID::ToUint64(v11);
  OnlineChat::AddMemberToChat(VacantOnlineChat, v12, nameBufferIn, 0);
}

/*
==============
OnlineChatManager::CreatePrivateChat_Internal
==============
*/
OnlineChat *OnlineChatManager::CreatePrivateChat_Internal(OnlineChatManager *this, const int controllerIndex, const OnlineChatId chatId, unsigned __int64 memberId, const char *playerName, const bool initiatedChat)
{
  OnlineChat *VacantOnlineChat; 
  XUID *Xuid; 
  unsigned __int64 v11; 
  XUID result; 
  char nameBufferIn[40]; 

  VacantOnlineChat = OnlineChatManager::GetVacantOnlineChat(&OnlineChatManager::s_instance);
  OnlineChat::Init(VacantOnlineChat, controllerIndex, chatId, COUNT|DODGE|0x4);
  LUI_Social_SendChannelAddedEvent(controllerIndex, (const OnlineChatType)VacantOnlineChat->m_chatType, VacantOnlineChat->m_chatId, initiatedChat);
  Live_GetOnlineUserName(controllerIndex, nameBufferIn, 36);
  OnlineChat::AddMemberToChat(VacantOnlineChat, memberId, playerName, 0);
  Xuid = Live_GetXuid(&result, controllerIndex);
  v11 = XUID::ToUint64(Xuid);
  OnlineChat::AddMemberToChat(VacantOnlineChat, v11, nameBufferIn, 0);
  return VacantOnlineChat;
}

/*
==============
OnlineChatManager::CreateSystemErrorsChat
==============
*/
void OnlineChatManager::CreateSystemErrorsChat(OnlineChatManager *this, const int controllerIndex)
{
  OnlineChatId v3; 
  OnlineChat *VacantOnlineChat; 

  v3.m_id = controllerIndex + 9;
  if ( controllerIndex == -9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_chat_types.h", 16, ASSERT_TYPE_ASSERT, "(_id != 0)", "%s\n\tShould call OnlineChatId.Clear() instead of SetID()", "_id != 0") )
    __debugbreak();
  VacantOnlineChat = OnlineChatManager::GetVacantOnlineChat(&OnlineChatManager::s_instance);
  if ( !VacantOnlineChat && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_chat_manager.cpp", 2197, ASSERT_TYPE_ASSERT, "(chat)", (const char *)&queryFormat, "chat") )
    __debugbreak();
  OnlineChat::Init(VacantOnlineChat, controllerIndex, v3, DODGE);
}

/*
==============
OnlineChatManager::CreateSystemEventsChat
==============
*/
void OnlineChatManager::CreateSystemEventsChat(OnlineChatManager *this, const int controllerIndex)
{
  OnlineChatId v3; 
  OnlineChat *VacantOnlineChat; 

  v3.m_id = controllerIndex + 1;
  if ( controllerIndex == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_chat_types.h", 16, ASSERT_TYPE_ASSERT, "(_id != 0)", "%s\n\tShould call OnlineChatId.Clear() instead of SetID()", "_id != 0") )
    __debugbreak();
  VacantOnlineChat = OnlineChatManager::GetVacantOnlineChat(&OnlineChatManager::s_instance);
  if ( !VacantOnlineChat && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_chat_manager.cpp", 2168, ASSERT_TYPE_ASSERT, "(chat)", (const char *)&queryFormat, "chat") )
    __debugbreak();
  OnlineChat::Init(VacantOnlineChat, controllerIndex, v3, MOVEMENT);
}

/*
==============
OnlineChatManager::DebugPrintChatPool
==============
*/
void OnlineChatManager::DebugPrintChatPool(void)
{
  unsigned int v0; 
  OnlineChatPool *v1; 

  Com_Printf(14, "\n\n-- Chat Channels Debug Print START --\n\n");
  v0 = 0;
  v1 = &s_onlineChatPool;
  do
  {
    if ( v1->pool[0].m_state == ACTIVE )
    {
      Com_Printf(14, "Chat Index[%i]:\n", v0);
      OnlineChat::Print(v1->pool);
    }
    ++v0;
    v1 = (OnlineChatPool *)((char *)v1 + 12848);
  }
  while ( v0 < 0x12 );
  Com_Printf(14, "\n\n-- Chat Channels Debug Print END --\n\n");
}

/*
==============
OnlineChatManager::GetActiveChatIdFromType
==============
*/
OnlineChatId *OnlineChatManager::GetActiveChatIdFromType(OnlineChatManager *this, OnlineChatId *result, const OnlineChatType chatType)
{
  const char *v5; 
  int v6; 
  const char *v7; 
  int v8; 
  OnlineChatPool *i; 

  if ( chatType == (COUNT|DODGE|0x4) )
  {
    v5 = "chatType != OnlineChatType::PRIVATE_CHAT";
    v6 = 1580;
    v7 = "(chatType != OnlineChatType::PRIVATE_CHAT)";
    goto LABEL_5;
  }
  if ( chatType == MOVEMENT )
  {
    v5 = "chatType != OnlineChatType::SYSTEM_EVENTS";
    v6 = 1584;
    v7 = "(chatType != OnlineChatType::SYSTEM_EVENTS)";
LABEL_5:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_chat_manager.cpp", v6, ASSERT_TYPE_ASSERT, v7, (const char *)&queryFormat, v5) )
      __debugbreak();
  }
  v8 = 0;
  for ( i = &s_onlineChatPool; i->pool[0].m_state != ACTIVE || i->pool[0].m_chatType != chatType; i = (OnlineChatPool *)((char *)i + 12848) )
  {
    if ( (unsigned int)++v8 >= 0x12 )
    {
      result->m_id = 0i64;
      return result;
    }
  }
  result->m_id = (unsigned __int64)i->pool[0].m_chatId;
  return result;
}

/*
==============
OnlineChatManager::GetChannelInfo
==============
*/
void OnlineChatManager::GetChannelInfo(OnlineChatManager *this, const int controllerIndex, CachedCreateChatCallback *cachedCallback)
{
  __int64 chatType; 
  DWServicesAccess *Instance; 
  DWMessaging *Messaging; 
  TaskCreateRequest *ChannelInfo; 
  bdRemoteTask *v10; 
  TaskManager *v11; 
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  TaskCreateResult pTaskCreateResult; 
  TaskCreateRequest pTaskCreateRequest; 
  bdReference<bdRemoteTask> result; 

  pTaskCreateRequest.m_appTaskType = -1;
  memset(&pTaskCreateRequest.m_appSecondaryCallback, 0, 24);
  pTaskCreateRequest.m_onUpdateCallback = NULL;
  pTaskCreateRequest.m_cancelTaskOnSignoutEvent = 1;
  pTaskCreateRequest.m_timeoutInSeconds = 0;
  pTaskCreateResult.m_localTaskId = 0;
  pTaskCreateResult.m_task = NULL;
  pTaskCreateRequest.m_appData = cachedCallback;
  pTaskCreateRequest.m_onCompletionCallback = OnlineChatManager::GetChannelInfoComplete;
  pTaskCreateRequest.m_controllerIndex = controllerIndex;
  chatType = cachedCallback->chatType;
  Instance = DWServicesAccess::GetInstance();
  Messaging = DWServicesAccess::GetMessaging(Instance, controllerIndex);
  ChannelInfo = (TaskCreateRequest *)DWMessaging::getChannelInfo(Messaging, &result, s_chatDescription[chatType].dwCategory, cachedCallback->dwChannelInfo.m_channelID, &cachedCallback->getChannelInfosResponse);
  if ( ChannelInfo != (TaskCreateRequest *)&pTaskCreateRequest.m_remoteDemonwareTask )
  {
    if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->~bdReferencable)(pTaskCreateRequest.m_remoteDemonwareTask.m_ptr, 1i64);
    v10 = *(bdRemoteTask **)&ChannelInfo->m_controllerIndex;
    pTaskCreateRequest.m_remoteDemonwareTask.m_ptr = v10;
    if ( v10 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v10->m_refCount, 1u);
  }
  if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result.m_ptr )
    ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
  if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr && (v11 = TaskManager::GetInstance(), TaskManager::CreateTask(v11, &pTaskCreateRequest, &pTaskCreateResult)) )
  {
    Com_Printf(14, "[Chat] %s: Joining chat id %zu\n", "OnlineChatManager::GetChannelInfo", cachedCallback->dwChannelInfo.m_channelID);
  }
  else
  {
    Com_PrintError(14, "[Chat] %s: failed to starting joining chat id %zu\n", "OnlineChatManager::GetChannelInfo", cachedCallback->dwChannelInfo.m_channelID);
    OnlineChatManager::JoinChatFailed(this, controllerIndex, cachedCallback, -1);
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
OnlineChatManager::GetChannelInfoComplete
==============
*/
void OnlineChatManager::GetChannelInfoComplete(GenericTask *task, eTaskManagerTaskState state)
{
  char *m_appData; 
  int v5; 

  m_appData = (char *)task->m_appData;
  if ( *((_DWORD *)m_appData + 67) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_chat_manager.cpp", 504, ASSERT_TYPE_ASSERT, "(cachedCallback->getChannelInfosResponse.getChannels().getSize() == 1)", (const char *)&queryFormat, "cachedCallback->getChannelInfosResponse.getChannels().getSize() == 1") )
    __debugbreak();
  if ( *((_DWORD *)m_appData + 67) )
    bdChannelInfo::operator=((bdChannelInfo *)(m_appData + 16), *((const bdChannelInfo **)m_appData + 32));
  if ( state )
  {
    v5 = task->m_remoteDemonwareTask.m_ptr->getStatus(task->m_remoteDemonwareTask.m_ptr);
    OnlineChatManager::JoinChatFailed(&OnlineChatManager::s_instance, task->m_controllerIndex, (CachedCreateChatCallback *)m_appData, v5);
  }
  else
  {
    OnlineChatManager::GetChannelMembers(&OnlineChatManager::s_instance, task->m_controllerIndex, (CachedCreateChatCallback *)m_appData);
  }
}

/*
==============
OnlineChatManager::GetChannelMembers
==============
*/
void OnlineChatManager::GetChannelMembers(OnlineChatManager *this, const int controllerIndex, CachedCreateChatCallback *cachedCallback)
{
  __int64 chatType; 
  DWServicesAccess *Instance; 
  DWMessaging *Messaging; 
  TaskCreateRequest *ChannelMembers; 
  bdRemoteTask *v10; 
  TaskManager *v11; 
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  TaskCreateResult pTaskCreateResult; 
  TaskCreateRequest pTaskCreateRequest; 
  bdReference<bdRemoteTask> result; 

  if ( !cachedCallback && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_chat_manager.cpp", 474, ASSERT_TYPE_ASSERT, "(cachedCallback)", (const char *)&queryFormat, "cachedCallback", -2i64) )
    __debugbreak();
  pTaskCreateRequest.m_appTaskType = -1;
  memset(&pTaskCreateRequest.m_appSecondaryCallback, 0, 24);
  pTaskCreateRequest.m_onUpdateCallback = NULL;
  pTaskCreateRequest.m_cancelTaskOnSignoutEvent = 1;
  pTaskCreateRequest.m_timeoutInSeconds = 0;
  pTaskCreateResult.m_localTaskId = 0;
  pTaskCreateResult.m_task = NULL;
  pTaskCreateRequest.m_appData = cachedCallback;
  pTaskCreateRequest.m_onCompletionCallback = OnlineChatManager::GetChannelMembersComplete;
  pTaskCreateRequest.m_controllerIndex = controllerIndex;
  chatType = cachedCallback->chatType;
  Instance = DWServicesAccess::GetInstance();
  Messaging = DWServicesAccess::GetMessaging(Instance, controllerIndex);
  ChannelMembers = (TaskCreateRequest *)DWMessaging::getChannelMembers(Messaging, &result, s_chatDescription[chatType].dwCategory, cachedCallback->dwChannelInfo.m_channelID, 0xC8u, &cachedCallback->getMembersResponse);
  if ( ChannelMembers != (TaskCreateRequest *)&pTaskCreateRequest.m_remoteDemonwareTask )
  {
    if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->~bdReferencable)(pTaskCreateRequest.m_remoteDemonwareTask.m_ptr, 1i64);
    v10 = *(bdRemoteTask **)&ChannelMembers->m_controllerIndex;
    pTaskCreateRequest.m_remoteDemonwareTask.m_ptr = v10;
    if ( v10 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v10->m_refCount, 1u);
  }
  if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result.m_ptr )
    ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
  if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr && (v11 = TaskManager::GetInstance(), TaskManager::CreateTask(v11, &pTaskCreateRequest, &pTaskCreateResult)) )
  {
    Com_Printf(14, "[Chat] %s: Getting channel members for chat id %zu\n", "OnlineChatManager::GetChannelMembers", cachedCallback->dwChannelInfo.m_channelID);
  }
  else
  {
    Com_PrintError(14, "[Chat] %s: failed to get channel members for chat id chat id %zu\n", "OnlineChatManager::GetChannelMembers", cachedCallback->dwChannelInfo.m_channelID);
    OnlineChatManager::JoinChatFailed(this, controllerIndex, cachedCallback, -1);
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
OnlineChatManager::GetChannelMembersComplete
==============
*/
void OnlineChatManager::GetChannelMembersComplete(GenericTask *task, eTaskManagerTaskState state)
{
  CachedCreateChatCallback *m_appData; 
  int ErrorCode; 

  m_appData = (CachedCreateChatCallback *)task->m_appData;
  if ( state )
  {
    ErrorCode = bdRemoteTask::getErrorCode(task->m_remoteDemonwareTask.m_ptr);
    OnlineChatManager::JoinChatFailed(&OnlineChatManager::s_instance, task->m_controllerIndex, m_appData, ErrorCode);
  }
  else
  {
    OnlineChatManager::JoinChatSuccessful(&OnlineChatManager::s_instance, task->m_controllerIndex, (CachedCreateChatCallback *)task->m_appData);
  }
}

/*
==============
OnlineChatManager::GetChat
==============
*/
char OnlineChatManager::GetChat(OnlineChatManager *this, const OnlineChatId *chatId, const OnlineChatType *chatType, OnlineChat **chatOut)
{
  int v4; 
  OnlineChatPool *i; 

  v4 = 0;
  for ( i = &s_onlineChatPool; i->pool[0].m_state == INACTIVE || i->pool[0].m_chatType != *chatType || chatId->m_id != i->pool[0].m_chatId.m_id; i = (OnlineChatPool *)((char *)i + 12848) )
  {
    if ( (unsigned int)++v4 >= 0x12 )
      return 0;
  }
  *chatOut = (OnlineChat *)i;
  return 1;
}

/*
==============
OnlineChatManager::GetChat
==============
*/
char OnlineChatManager::GetChat(OnlineChatManager *this, const OnlineChatId *chatId, const char *dwCategory, OnlineChat **chatOut)
{
  OnlineChatPool *v5; 
  unsigned int v8; 
  __int64 v9; 
  const char *v10; 
  const char *v11; 
  signed __int64 v12; 
  char v13; 
  __int64 v14; 
  char v15; 

  v5 = &s_onlineChatPool;
  v8 = 0;
  while ( 1 )
  {
    if ( v5->pool[0].m_state )
    {
      v9 = 0x7FFFFFFFi64;
      v10 = dwCategory;
      v11 = s_chatDescription[v5->pool[0].m_chatType].dwCategory;
      if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
        __debugbreak();
      if ( !dwCategory && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
        __debugbreak();
      v12 = v11 - dwCategory;
      do
      {
        v13 = v10[v12];
        v14 = v9;
        v15 = *v10++;
        --v9;
        if ( !v14 )
          break;
        if ( v13 != v15 )
          goto LABEL_14;
      }
      while ( v13 );
      if ( chatId->m_id == v5->pool[0].m_chatId.m_id )
        break;
    }
LABEL_14:
    ++v8;
    v5 = (OnlineChatPool *)((char *)v5 + 12848);
    if ( v8 >= 0x12 )
      return 0;
  }
  *chatOut = (OnlineChat *)v5;
  return 1;
}

/*
==============
OnlineChatManager::GetChatHistoryForType
==============
*/
OnlineChatHistory *OnlineChatManager::GetChatHistoryForType(OnlineChatManager *this, const OnlineChatType chatType)
{
  __int64 v2; 
  int v5; 

  v2 = chatType;
  if ( (unsigned int)chatType >= 8 )
  {
    v5 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_chat_manager.cpp", 1768, ASSERT_TYPE_ASSERT, "(unsigned)( static_cast< int > ( chatType ) ) < (unsigned)( static_cast< int >( OnlineChatType::COUNT ) )", "static_cast< int > ( chatType ) doesn't index static_cast< int >( OnlineChatType::COUNT )\n\t%i not in [0, %i)", chatType, v5) )
      __debugbreak();
  }
  return &s_onlineChatHistory[v2];
}

/*
==============
GetChatTypeDescription
==============
*/
const OnlineChatTypeDescription *GetChatTypeDescription(const OnlineChatType chatType)
{
  return &s_chatDescription[chatType];
}

/*
==============
OnlineChatManager::GetInstance
==============
*/
OnlineChatManager *OnlineChatManager::GetInstance()
{
  return &OnlineChatManager::s_instance;
}

/*
==============
OnlineChatManager::GetInstancePtr
==============
*/
OnlineChatManager *OnlineChatManager::GetInstancePtr()
{
  return &OnlineChatManager::s_instance;
}

/*
==============
OnlineChatManager::GetJoinedChats
==============
*/
char OnlineChatManager::GetJoinedChats(OnlineChatManager *this, OnlineChatId *chatIdsBuffer, OnlineChatType *chatTypesBuffer, const int bufferSize, int *joinedChatCountOut)
{
  unsigned int v5; 
  OnlineChatId *p_m_chatId; 

  v5 = 0;
  *joinedChatCountOut = 0;
  if ( !chatIdsBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_chat_manager.cpp", 1698, ASSERT_TYPE_ASSERT, "(chatIdsBuffer)", (const char *)&queryFormat, "chatIdsBuffer") )
    __debugbreak();
  if ( !chatTypesBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_chat_manager.cpp", 1699, ASSERT_TYPE_ASSERT, "(chatTypesBuffer)", (const char *)&queryFormat, "chatTypesBuffer") )
    __debugbreak();
  if ( !chatIdsBuffer || !chatTypesBuffer || (unsigned int)bufferSize < 0x12 )
    return 0;
  p_m_chatId = &s_onlineChatPool.pool[1].m_chatId;
  do
  {
    if ( HIDWORD(p_m_chatId[-1609].m_id) == 1 )
    {
      chatIdsBuffer[*joinedChatCountOut] = p_m_chatId[-1606];
      chatTypesBuffer[(*joinedChatCountOut)++] = p_m_chatId[-1609].m_id;
    }
    if ( HIDWORD(p_m_chatId[-3].m_id) == 1 )
    {
      chatIdsBuffer[*joinedChatCountOut] = (OnlineChatId)p_m_chatId->m_id;
      chatTypesBuffer[(*joinedChatCountOut)++] = p_m_chatId[-3].m_id;
    }
    if ( HIDWORD(p_m_chatId[1603].m_id) == 1 )
    {
      chatIdsBuffer[*joinedChatCountOut] = p_m_chatId[1606];
      chatTypesBuffer[(*joinedChatCountOut)++] = p_m_chatId[1603].m_id;
    }
    if ( HIDWORD(p_m_chatId[3209].m_id) == 1 )
    {
      chatIdsBuffer[*joinedChatCountOut] = p_m_chatId[3212];
      chatTypesBuffer[(*joinedChatCountOut)++] = p_m_chatId[3209].m_id;
    }
    if ( HIDWORD(p_m_chatId[4815].m_id) == 1 )
    {
      chatIdsBuffer[*joinedChatCountOut] = p_m_chatId[4818];
      chatTypesBuffer[(*joinedChatCountOut)++] = p_m_chatId[4815].m_id;
    }
    if ( HIDWORD(p_m_chatId[6421].m_id) == 1 )
    {
      chatIdsBuffer[*joinedChatCountOut] = p_m_chatId[6424];
      chatTypesBuffer[(*joinedChatCountOut)++] = p_m_chatId[6421].m_id;
    }
    if ( HIDWORD(p_m_chatId[8027].m_id) == 1 )
    {
      chatIdsBuffer[*joinedChatCountOut] = p_m_chatId[8030];
      chatTypesBuffer[(*joinedChatCountOut)++] = p_m_chatId[8027].m_id;
    }
    if ( HIDWORD(p_m_chatId[9633].m_id) == 1 )
    {
      chatIdsBuffer[*joinedChatCountOut] = p_m_chatId[9636];
      chatTypesBuffer[(*joinedChatCountOut)++] = p_m_chatId[9633].m_id;
    }
    if ( HIDWORD(p_m_chatId[11239].m_id) == 1 )
    {
      chatIdsBuffer[*joinedChatCountOut] = p_m_chatId[11242];
      chatTypesBuffer[(*joinedChatCountOut)++] = p_m_chatId[11239].m_id;
    }
    if ( HIDWORD(p_m_chatId[12845].m_id) == 1 )
    {
      chatIdsBuffer[*joinedChatCountOut] = p_m_chatId[12848];
      chatTypesBuffer[(*joinedChatCountOut)++] = p_m_chatId[12845].m_id;
    }
    if ( HIDWORD(p_m_chatId[14451].m_id) == 1 )
    {
      chatIdsBuffer[*joinedChatCountOut] = p_m_chatId[14454];
      chatTypesBuffer[(*joinedChatCountOut)++] = p_m_chatId[14451].m_id;
    }
    if ( HIDWORD(p_m_chatId[16057].m_id) == 1 )
    {
      chatIdsBuffer[*joinedChatCountOut] = p_m_chatId[16060];
      chatTypesBuffer[(*joinedChatCountOut)++] = p_m_chatId[16057].m_id;
    }
    if ( HIDWORD(p_m_chatId[17663].m_id) == 1 )
    {
      chatIdsBuffer[*joinedChatCountOut] = p_m_chatId[17666];
      chatTypesBuffer[(*joinedChatCountOut)++] = p_m_chatId[17663].m_id;
    }
    if ( HIDWORD(p_m_chatId[19269].m_id) == 1 )
    {
      chatIdsBuffer[*joinedChatCountOut] = p_m_chatId[19272];
      chatTypesBuffer[(*joinedChatCountOut)++] = p_m_chatId[19269].m_id;
    }
    if ( HIDWORD(p_m_chatId[20875].m_id) == 1 )
    {
      chatIdsBuffer[*joinedChatCountOut] = p_m_chatId[20878];
      chatTypesBuffer[(*joinedChatCountOut)++] = p_m_chatId[20875].m_id;
    }
    if ( HIDWORD(p_m_chatId[22481].m_id) == 1 )
    {
      chatIdsBuffer[*joinedChatCountOut] = p_m_chatId[22484];
      chatTypesBuffer[(*joinedChatCountOut)++] = p_m_chatId[22481].m_id;
    }
    if ( HIDWORD(p_m_chatId[24087].m_id) == 1 )
    {
      chatIdsBuffer[*joinedChatCountOut] = p_m_chatId[24090];
      chatTypesBuffer[(*joinedChatCountOut)++] = p_m_chatId[24087].m_id;
    }
    if ( HIDWORD(p_m_chatId[25693].m_id) == 1 )
    {
      chatIdsBuffer[*joinedChatCountOut] = p_m_chatId[25696];
      chatTypesBuffer[(*joinedChatCountOut)++] = p_m_chatId[25693].m_id;
    }
    v5 += 18;
    p_m_chatId += 28908;
  }
  while ( v5 < 0x12 );
  return 1;
}

/*
==============
OnlineChatManager::GetMembersListFromChat
==============
*/
char OnlineChatManager::GetMembersListFromChat(OnlineChatManager *this, const OnlineChatId *chatId, const OnlineChatType *chatType, const OnlineChatMemberInfo **members, int *memberSize)
{
  int v5; 
  OnlineChatPool *i; 

  v5 = 0;
  for ( i = &s_onlineChatPool; i->pool[0].m_state == INACTIVE || i->pool[0].m_chatType != *chatType || chatId->m_id != i->pool[0].m_chatId.m_id; i = (OnlineChatPool *)((char *)i + 12848) )
  {
    if ( (unsigned int)++v5 >= 0x12 )
    {
      Com_PrintError(14, "[Chat] %s: Invalid chatid\n", "OnlineChatManager::GetMembersListFromChat");
      return 0;
    }
  }
  OnlineChat::GetMembersListFromChat(i->pool, members, memberSize);
  return 1;
}

/*
==============
OnlineChatManager::GetMessageFromIndex
==============
*/
char OnlineChatManager::GetMessageFromIndex(OnlineChatManager *this, const OnlineChatId *chatId, const OnlineChatType *chatType, const int messageIndex, const OnlineChatMessage **message)
{
  int v5; 
  OnlineChatPool *i; 

  v5 = 0;
  for ( i = &s_onlineChatPool; i->pool[0].m_state == INACTIVE || i->pool[0].m_chatType != *chatType || chatId->m_id != i->pool[0].m_chatId.m_id; i = (OnlineChatPool *)((char *)i + 12848) )
  {
    if ( (unsigned int)++v5 >= 0x12 )
    {
      Com_PrintError(14, "[Chat] %s: Invalid chatid\n", "OnlineChatManager::GetMessageFromIndex");
      return 0;
    }
  }
  OnlineChat::GetMessageFromIndex(i->pool, messageIndex, message);
  return 1;
}

/*
==============
OnlineChatManager::GetMessageIndicesFromChat
==============
*/
char OnlineChatManager::GetMessageIndicesFromChat(OnlineChatManager *this, const OnlineChatId *chatId, const OnlineChatType *chatType, int *firstIndex, int *numMessages)
{
  int v5; 
  OnlineChatPool *i; 
  int m_firstMessageIndex; 

  v5 = 0;
  for ( i = &s_onlineChatPool; i->pool[0].m_state == INACTIVE || i->pool[0].m_chatType != *chatType || chatId->m_id != i->pool[0].m_chatId.m_id; i = (OnlineChatPool *)((char *)i + 12848) )
  {
    if ( (unsigned int)++v5 >= 0x12 )
    {
      Com_PrintError(14, "[Chat] %s: Invalid chatid\n", "OnlineChatManager::GetMessageIndicesFromChat");
      return 0;
    }
  }
  m_firstMessageIndex = i->pool[0].m_firstMessageIndex;
  *firstIndex = m_firstMessageIndex;
  *numMessages = i->pool[0].m_nextMessageIndex - m_firstMessageIndex;
  return 1;
}

/*
==============
OnlineChatManager::GetPlatformId
==============
*/
char OnlineChatManager::GetPlatformId(const int controllerIndex, const OnlineChatType chatType, const XUID xuid, unsigned __int64 *platformId)
{
  XUID *v7; 
  Online_Friends *Instance; 
  unsigned int Index; 
  Online_Friends *v11; 
  SocialPresence *Presence; 
  SocialPresence *v13; 
  const PartyData *PartyData; 
  unsigned int MemberByXUID; 
  int v16; 
  char MemberPlatform; 
  XUID result; 
  XUID xuida; 

  xuida.m_id = xuid.m_id;
  v7 = Live_GetXuid(&result, controllerIndex);
  if ( XUID::operator==(v7, &xuida) )
  {
    *platformId = Live_GetPlatformUserId(controllerIndex);
    return 1;
  }
  if ( (unsigned int)(chatType - 4) <= 1 )
  {
    if ( chatType != (COUNT|DODGE) )
    {
      PartyData = Lobby_GetPartyData();
      goto LABEL_14;
    }
  }
  else if ( chatType != (COUNT|DODGE) )
  {
    if ( chatType == (COUNT|DODGE|0x4) )
    {
      Instance = Online_Friends::GetInstance();
      Index = Online_Friends::FindIndex(Instance, controllerIndex, xuida);
      if ( Index != -1 )
      {
        v11 = Online_Friends::GetInstance();
        *platformId = Online_Friends::GetPlatformUserId(v11, controllerIndex, Index);
        return 1;
      }
      Presence = (SocialPresence *)Social_GetPresence(controllerIndex, xuida);
      v13 = Presence;
      if ( Presence )
      {
        if ( SocialPresence::GetPlatform(Presence) == PRESENCE_PLATFORM_XBOX_ONE )
        {
          *platformId = SocialPresence::GetPlatformId(v13);
          return 1;
        }
      }
    }
    return 0;
  }
  PartyData = &g_partyData;
LABEL_14:
  MemberByXUID = Party_FindMemberByXUID(PartyData, xuida);
  v16 = MemberByXUID;
  if ( MemberByXUID != -1 )
  {
    MemberPlatform = Party_GetMemberPlatform(PartyData, MemberByXUID);
    if ( MemberPlatform == (unsigned __int8)GetClientPlatform() )
    {
      *platformId = Party_GetPlatformId(PartyData, v16);
      return 1;
    }
  }
  return 0;
}

/*
==============
OnlineChatManager::GetPlayerEventsChat
==============
*/
char OnlineChatManager::GetPlayerEventsChat(OnlineChatManager *this, const int controllerIndex, OnlineChat **chatOut)
{
  int v3; 
  OnlineChatPool *i; 

  v3 = 0;
  for ( i = &s_onlineChatPool; i->pool[0].m_state != ACTIVE || i->pool[0].m_chatType != COUNT || i->pool[0].m_controllerIndex != controllerIndex; i = (OnlineChatPool *)((char *)i + 12848) )
  {
    if ( (unsigned int)++v3 >= 0x12 )
      return 0;
  }
  *chatOut = (OnlineChat *)i;
  return 1;
}

/*
==============
OnlineChatManager::GetSystemErrorsChat
==============
*/
char OnlineChatManager::GetSystemErrorsChat(OnlineChatManager *this, const int controllerIndex, OnlineChat **chatOut)
{
  int v3; 
  OnlineChatPool *i; 

  v3 = 0;
  for ( i = &s_onlineChatPool; i->pool[0].m_state != ACTIVE || i->pool[0].m_chatType != DODGE || i->pool[0].m_controllerIndex != controllerIndex; i = (OnlineChatPool *)((char *)i + 12848) )
  {
    if ( (unsigned int)++v3 >= 0x12 )
      return 0;
  }
  *chatOut = (OnlineChat *)i;
  return 1;
}

/*
==============
OnlineChatManager::GetSystemEventsChat
==============
*/
char OnlineChatManager::GetSystemEventsChat(OnlineChatManager *this, const int controllerIndex, OnlineChat **chatOut)
{
  int v3; 
  OnlineChatPool *i; 

  v3 = 0;
  for ( i = &s_onlineChatPool; i->pool[0].m_state != ACTIVE || i->pool[0].m_chatType || i->pool[0].m_controllerIndex != controllerIndex; i = (OnlineChatPool *)((char *)i + 12848) )
  {
    if ( (unsigned int)++v3 >= 0x12 )
      return 0;
  }
  *chatOut = (OnlineChat *)i;
  return 1;
}

/*
==============
OnlineChatManager::GetVacantOnlineChat
==============
*/
OnlineChat *OnlineChatManager::GetVacantOnlineChat(OnlineChatManager *this)
{
  OnlineChat *v1; 
  OnlineChatState *p_m_state; 
  unsigned int v3; 

  if ( s_onlineChatPool.numActiveChat == 18 )
    OnlineChatManager::CloseOldestPrivateChat(this);
  if ( s_onlineChatPool.numActiveChat >= 0x12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_chat_manager.cpp", 1227, ASSERT_TYPE_ASSERT, "(s_onlineChatPool.numActiveChat < ( sizeof( *array_counter( s_onlineChatPool.pool ) ) + 0 ))", (const char *)&queryFormat, "s_onlineChatPool.numActiveChat < ARRAY_COUNT( s_onlineChatPool.pool )") )
    __debugbreak();
  v1 = NULL;
  p_m_state = &s_onlineChatPool.pool[0].m_state;
  v3 = 0;
  while ( *p_m_state )
  {
    ++v3;
    p_m_state += 3212;
    if ( v3 >= 0x12 )
      goto LABEL_11;
  }
  v1 = &s_onlineChatPool.pool[v3];
  if ( v1 )
    goto LABEL_13;
LABEL_11:
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_chat_manager.cpp", 1240, ASSERT_TYPE_ASSERT, "(chat)", (const char *)&queryFormat, "chat") )
    __debugbreak();
LABEL_13:
  if ( ++s_onlineChatPool.numActiveChat > 0x12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_chat_manager.cpp", 1243, ASSERT_TYPE_ASSERT, "(s_onlineChatPool.numActiveChat <= ( sizeof( *array_counter( s_onlineChatPool.pool ) ) + 0 ))", (const char *)&queryFormat, "s_onlineChatPool.numActiveChat <= ARRAY_COUNT( s_onlineChatPool.pool )") )
    __debugbreak();
  if ( v1->m_chatId.m_id && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_chat_manager.cpp", 1245, ASSERT_TYPE_ASSERT, "(!chat->GetChatId().IsValid())", (const char *)&queryFormat, "!chat->GetChatId().IsValid()") )
    __debugbreak();
  if ( v1->m_memberCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_chat_manager.cpp", 1246, ASSERT_TYPE_ASSERT, "(chat->GetMemberCount() == 0)", (const char *)&queryFormat, "chat->GetMemberCount() == 0") )
    __debugbreak();
  return v1;
}

/*
==============
OnlineChatManager::IsChatActive
==============
*/
char OnlineChatManager::IsChatActive(OnlineChatManager *this, const OnlineChatId *chatId, const OnlineChatType *chatType)
{
  int v3; 
  OnlineChatId *i; 

  v3 = 0;
  for ( i = &s_onlineChatPool.pool[0].m_chatId; !HIDWORD(i[-3].m_id) || LODWORD(i[-3].m_id) != *chatType || chatId->m_id != i->m_id; i += 1606 )
  {
    if ( (unsigned int)++v3 >= 0x12 )
      return 0;
  }
  return 1;
}

/*
==============
OnlineChatManager::IsChatPending
==============
*/
char OnlineChatManager::IsChatPending(OnlineChatManager *this, const OnlineChatManager::ChatPendingType pendingType, const OnlineChatId *chatId, const OnlineChatType *chatType)
{
  unsigned __int64 m_id; 
  int v5; 
  OnlineChatManager::PendingList *i; 

  m_id = chatId->m_id;
  if ( !chatId->m_id )
    return 0;
  v5 = 0;
  for ( i = &OnlineChatManager::s_instance.m_pendingLists[pendingType]; !i->list[0].m_id.m_id || i->list[0].m_id.m_id != m_id || i->list[0].m_type != *chatType; i = (OnlineChatManager::PendingList *)((char *)i + 16) )
  {
    if ( (unsigned int)++v5 >= 0x12 )
      return 0;
  }
  return 1;
}

/*
==============
OnlineChatManager::IsLocalPlayer
==============
*/
bool OnlineChatManager::IsLocalPlayer(OnlineChatManager *this, const unsigned __int64 memberId)
{
  int ControllerFromClient; 
  XUID *Xuid; 
  XUID result; 

  if ( !memberId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_chat_manager.cpp", 1651, ASSERT_TYPE_ASSERT, "(memberId != 0)", (const char *)&queryFormat, "memberId != 0") )
    __debugbreak();
  ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
  Xuid = Live_GetXuid(&result, ControllerFromClient);
  return memberId == XUID::ToUint64(Xuid);
}

/*
==============
OnlineChatManager::IsMemberTextMuted
==============
*/
bool OnlineChatManager::IsMemberTextMuted(OnlineChatManager *this, const OnlineChatId *onlineChatId, const OnlineChatType *onlineChatType, const unsigned __int64 memberId)
{
  OnlineChatPool *v5; 
  unsigned int v6; 
  OnlineChatMemberInfo *MemberFromChatById; 

  v5 = &s_onlineChatPool;
  v6 = 0;
  while ( v5->pool[0].m_state == INACTIVE || v5->pool[0].m_chatType != *onlineChatType || onlineChatId->m_id != v5->pool[0].m_chatId.m_id )
  {
    ++v6;
    v5 = (OnlineChatPool *)((char *)v5 + 12848);
    if ( v6 >= 0x12 )
    {
      Com_PrintError(14, "[Chat] %s: Invalid chat id %zu\n", "OnlineChatManager::IsMemberTextMuted", onlineChatId->m_id);
      return 0;
    }
  }
  MemberFromChatById = OnlineChat::GetMemberFromChatById(v5->pool, memberId);
  if ( !MemberFromChatById )
  {
    Com_PrintError(14, "[Chat] %s: Invalid chat member id %zu\n", "OnlineChatManager::IsMemberTextMuted", memberId);
    return 0;
  }
  return MemberFromChatById->isTextMuted;
}

/*
==============
OnlineChatManager::JoinChat
==============
*/
void OnlineChatManager::JoinChat(OnlineChatManager *this, const int controllerIndex, const OnlineChatId *chatId, const OnlineChatType chatType, void (*callback)(const int, const OnlineChatId *, const OnlineChatType *, const bool, const int))
{
  unsigned int v5; 
  unsigned int v6; 
  OnlineChatId *p_m_chatId; 
  unsigned __int64 m_id; 
  unsigned int v12; 
  OnlineChatManager::PendingList *m_pendingLists; 
  CachedCreateChatCallback *v14; 
  bool v15; 
  void (__fastcall *v16)(const int, const OnlineChatId *, const OnlineChatType *, const bool, const int); 
  OnlineChatType chatTypea; 

  chatTypea = chatType;
  v5 = 0;
  v6 = 0;
  p_m_chatId = &s_onlineChatPool.pool[0].m_chatId;
  do
  {
    if ( HIDWORD(p_m_chatId[-3].m_id) && LODWORD(p_m_chatId[-3].m_id) == chatType && chatId->m_id == p_m_chatId->m_id )
      goto LABEL_21;
    ++v6;
    p_m_chatId += 1606;
  }
  while ( v6 < 0x12 );
  m_id = chatId->m_id;
  if ( m_id )
  {
    v12 = 0;
    m_pendingLists = OnlineChatManager::s_instance.m_pendingLists;
    while ( !m_pendingLists->list[0].m_id.m_id || m_pendingLists->list[0].m_id.m_id != m_id || m_pendingLists->list[0].m_type != chatType )
    {
      ++v12;
      m_pendingLists = (OnlineChatManager::PendingList *)((char *)m_pendingLists + 16);
      if ( v12 >= 0x12 )
        goto LABEL_12;
    }
LABEL_21:
    v15 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_chat_manager.cpp", 634, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "chat already active");
    goto LABEL_18;
  }
LABEL_12:
  v14 = s_cachedCreatedCallbacks;
  do
  {
    if ( !v14->callback )
    {
      v16 = callback;
      v14->chatType = chatType;
      v14->callback = v16;
      v14->dwChannelInfo.m_channelID = chatId->m_id;
      OnlineChatManager::TrackPending(this, MOVEMENT, chatId, &chatTypea);
      if ( chatTypea == 6 )
        OnlineChatManager::JoinClanChannel(this, controllerIndex, v14);
      else
        OnlineChatManager::SubscribeToChannel(this, controllerIndex, v14);
      return;
    }
    ++v5;
    ++v14;
  }
  while ( v5 < 5 );
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_chat_manager.cpp", 1395, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "No valid cached callback slots left") )
    __debugbreak();
  v15 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_chat_manager.cpp", 642, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Too many chat create requests!");
LABEL_18:
  if ( v15 )
    __debugbreak();
  callback(controllerIndex, chatId, &chatTypea, 0, -1);
}

/*
==============
OnlineChatManager::JoinChatFailed
==============
*/
void OnlineChatManager::JoinChatFailed(OnlineChatManager *this, const int controllerIndex, CachedCreateChatCallback *cachedCallback, const int errorCode)
{
  unsigned __int64 m_channelID; 
  unsigned __int64 v8; 
  int v9; 
  unsigned int v17; 
  OnlineChatPool *v18; 
  __int128 v19; 
  unsigned __int64 v20; 

  m_channelID = cachedCallback->dwChannelInfo.m_channelID;
  if ( !m_channelID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_chat_types.h", 16, ASSERT_TYPE_ASSERT, "(_id != 0)", "%s\n\tShould call OnlineChatId.Clear() instead of SetID()", "_id != 0") )
    __debugbreak();
  v8 = 0i64;
  v9 = 0;
  if ( OnlineChatManager::s_instance.m_pendingLists[0].listCount > 0 )
  {
    _RCX = OnlineChatManager::s_instance.m_pendingLists;
    while ( 1 )
    {
      __asm
      {
        vmovups xmm0, xmmword ptr [rcx]
        vmovq   rax, xmm0
        vmovups [rsp+58h+var_28], xmm0
      }
      if ( _RAX == m_channelID && DWORD2(v19) == cachedCallback->chatType )
        break;
      ++v9;
      _RCX = (OnlineChatManager::PendingList *)((char *)_RCX + 16);
      if ( v9 >= OnlineChatManager::s_instance.m_pendingLists[0].listCount )
        goto LABEL_11;
    }
    _RCX = OnlineChatManager::s_instance.m_pendingLists[0].listCount--;
    _R8 = &OnlineChatManager::s_instance;
    _RCX *= 2i64;
    _RAX = 2i64 * v9;
    __asm
    {
      vmovups xmm0, xmmword ptr [r8+rcx*8+30h]
      vmovups xmmword ptr [r8+rax*8+40h], xmm0
    }
    OnlineChatManager::s_instance.m_pendingLists[0].list[OnlineChatManager::s_instance.m_pendingLists[0].listCount].m_id.m_id = 0i64;
  }
LABEL_11:
  Com_PrintError(14, "[Chat] %s: Failed to join chat %zu\n", "OnlineChatManager::JoinChatFailed", m_channelID);
  v17 = 0;
  v18 = &s_onlineChatPool;
  while ( v18->pool[0].m_state == INACTIVE || v18->pool[0].m_chatType != cachedCallback->chatType || m_channelID != v18->pool[0].m_chatId.m_id )
  {
    ++v17;
    v18 = (OnlineChatPool *)((char *)v18 + 12848);
    if ( v17 >= 0x12 )
      goto LABEL_18;
  }
  OnlineChat::UnInit(v18->pool);
LABEL_18:
  if ( !cachedCallback->callback && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_chat_manager.cpp", 1403, ASSERT_TYPE_ASSERT, "(cachedCallback->callback)", (const char *)&queryFormat, "cachedCallback->callback") )
    __debugbreak();
  if ( cachedCallback->dwChannelInfo.m_channelID )
    v8 = cachedCallback->dwChannelInfo.m_channelID;
  v20 = v8;
  cachedCallback->callback(controllerIndex, (const OnlineChatId *)&v20, (const OnlineChatType *)cachedCallback, 0, errorCode);
  OnlineChatManager::ClearCachedCreateChatCallback(cachedCallback);
}

/*
==============
OnlineChatManager::JoinChatSuccessful
==============
*/
void OnlineChatManager::JoinChatSuccessful(OnlineChatManager *this, const int controllerIndex, CachedCreateChatCallback *cachedCallback)
{
  unsigned __int64 m_channelID; 
  int v6; 
  __int64 listCount; 
  OnlineChat *v15; 
  unsigned int v16; 
  OnlineChatPool *v17; 
  unsigned int i; 
  unsigned __int64 v19; 
  unsigned __int64 v20; 
  XUID *Xuid; 
  unsigned __int64 v22; 
  const char *LocalClientName; 
  XUID result[2]; 
  __int64 v25; 
  bdChannelMember v26; 

  v25 = -2i64;
  m_channelID = cachedCallback->dwChannelInfo.m_channelID;
  if ( !m_channelID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_chat_types.h", 16, ASSERT_TYPE_ASSERT, "(_id != 0)", "%s\n\tShould call OnlineChatId.Clear() instead of SetID()", "_id != 0") )
    __debugbreak();
  v6 = 0;
  _R13 = &OnlineChatManager::s_instance;
  listCount = OnlineChatManager::s_instance.m_pendingLists[0].listCount;
  if ( OnlineChatManager::s_instance.m_pendingLists[0].listCount > 0 )
  {
    _RCX = OnlineChatManager::s_instance.m_pendingLists;
    while ( 1 )
    {
      __asm
      {
        vmovups xmm0, xmmword ptr [rcx]
        vmovups xmmword ptr [rbp+57h+result.m_id], xmm0
        vmovq   rax, xmm0
      }
      if ( _RAX == m_channelID && LODWORD(result[1].m_id) == cachedCallback->chatType )
        break;
      ++v6;
      _RCX = (OnlineChatManager::PendingList *)((char *)_RCX + 16);
      if ( v6 >= OnlineChatManager::s_instance.m_pendingLists[0].listCount )
        goto LABEL_11;
    }
    --OnlineChatManager::s_instance.m_pendingLists[0].listCount;
    _RCX = 2 * listCount;
    _RAX = 2i64 * v6;
    __asm
    {
      vmovups xmm0, xmmword ptr [r13+rcx*8+30h]
      vmovups xmmword ptr [r13+rax*8+40h], xmm0
    }
    OnlineChatManager::s_instance.m_pendingLists[0].list[OnlineChatManager::s_instance.m_pendingLists[0].listCount].m_id.m_id = 0i64;
  }
LABEL_11:
  OnlineChatManager::ProcessJoinedChat(&OnlineChatManager::s_instance, controllerIndex, cachedCallback->dwChannelInfo.m_channelID, (const OnlineChatType)cachedCallback->chatType);
  v15 = NULL;
  v16 = 0;
  v17 = &s_onlineChatPool;
  do
  {
    if ( v17->pool[0].m_state && v17->pool[0].m_chatType == cachedCallback->chatType && m_channelID == v17->pool[0].m_chatId.m_id )
    {
      v15 = (OnlineChat *)v17;
      goto LABEL_18;
    }
    ++v16;
    v17 = (OnlineChatPool *)((char *)v17 + 12848);
  }
  while ( v16 < 0x12 );
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_chat_manager.cpp", 416, ASSERT_TYPE_ASSERT, "(chat)", (const char *)&queryFormat, "chat") )
    __debugbreak();
LABEL_18:
  for ( i = 0; i < *((_DWORD *)&cachedCallback->getMembersResponse.__vftable + 7); ++i )
  {
    bdChannelMember::bdChannelMember(&v26);
    if ( i >= *((_DWORD *)&cachedCallback->getMembersResponse.__vftable + 7) )
    {
      v20 = *(_QWORD *)v26._bytes_20;
    }
    else
    {
      v19 = *((_QWORD *)&cachedCallback->getMembersResponse.__vftable + 2) + ((unsigned __int64)i << 7);
      bdReferencable::operator=((bdReferencable *)&v26._bytes_20[*(int *)(*((_QWORD *)&v26.__vftable + 1) + 4i64) - 24], (const bdReferencable *)(*(int *)(*(_QWORD *)(v19 + 8) + 4i64) + v19 + 8));
      bdReferencable::operator=((bdReferencable *)&v26._bytes_20[*(int *)(*((_QWORD *)&v26.__vftable + 3) + 4i64) - 8], (const bdReferencable *)(*(int *)(*(_QWORD *)(v19 + 24) + 4i64) + v19 + 24));
      v20 = *(_QWORD *)(v19 + 32);
      *(_QWORD *)v26._bytes_20 = v20;
      v26._bytes_20[8] = *(_BYTE *)(v19 + 40);
      v26._bytes_20[9] = *(_BYTE *)(v19 + 41);
      v26._bytes_20[10] = *(_BYTE *)(v19 + 42);
      v26._bytes_20[11] = *(_BYTE *)(v19 + 43);
      v26._bytes_20[12] = *(_BYTE *)(v19 + 44);
      v26._bytes_20[13] = *(_BYTE *)(v19 + 45);
      v26._bytes_20[14] = *(_BYTE *)(v19 + 46);
      v26._bytes_20[15] = *(_BYTE *)(v19 + 47);
      v26.m_userName[0] = *(_BYTE *)(v19 + 48);
      v26.m_userName[1] = *(_BYTE *)(v19 + 49);
      v26.m_userName[2] = *(_BYTE *)(v19 + 50);
      v26.m_userName[3] = *(_BYTE *)(v19 + 51);
      v26.m_userName[4] = *(_BYTE *)(v19 + 52);
      v26.m_userName[5] = *(_BYTE *)(v19 + 53);
      v26.m_userName[6] = *(_BYTE *)(v19 + 54);
      v26.m_userName[7] = *(_BYTE *)(v19 + 55);
      v26.m_userName[8] = *(_BYTE *)(v19 + 56);
      v26.m_userName[9] = *(_BYTE *)(v19 + 57);
      v26.m_userName[10] = *(_BYTE *)(v19 + 58);
      v26.m_userName[11] = *(_BYTE *)(v19 + 59);
      v26.m_userName[12] = *(_BYTE *)(v19 + 60);
      v26.m_userName[13] = *(_BYTE *)(v19 + 61);
      v26.m_userName[14] = *(_BYTE *)(v19 + 62);
      v26.m_userName[15] = *(_BYTE *)(v19 + 63);
      v26.m_userName[16] = *(_BYTE *)(v19 + 64);
      v26.m_userName[17] = *(_BYTE *)(v19 + 65);
      v26.m_userName[18] = *(_BYTE *)(v19 + 66);
      v26.m_userName[19] = *(_BYTE *)(v19 + 67);
      v26.m_userName[20] = *(_BYTE *)(v19 + 68);
      v26.m_userName[21] = *(_BYTE *)(v19 + 69);
      v26.m_userName[22] = *(_BYTE *)(v19 + 70);
      v26.m_userName[23] = *(_BYTE *)(v19 + 71);
      v26.m_userName[24] = *(_BYTE *)(v19 + 72);
      v26.m_userName[25] = *(_BYTE *)(v19 + 73);
      v26.m_userName[26] = *(_BYTE *)(v19 + 74);
      v26.m_userName[27] = *(_BYTE *)(v19 + 75);
      v26.m_userName[28] = *(_BYTE *)(v19 + 76);
      v26.m_userName[29] = *(_BYTE *)(v19 + 77);
      v26.m_userName[30] = *(_BYTE *)(v19 + 78);
      v26.m_userName[31] = *(_BYTE *)(v19 + 79);
      v26.m_userName[32] = *(_BYTE *)(v19 + 80);
      v26.m_userName[33] = *(_BYTE *)(v19 + 81);
      v26.m_userName[34] = *(_BYTE *)(v19 + 82);
      v26.m_userName[35] = *(_BYTE *)(v19 + 83);
      v26.m_userName[36] = *(_BYTE *)(v19 + 84);
      v26.m_userName[37] = *(_BYTE *)(v19 + 85);
      v26.m_userName[38] = *(_BYTE *)(v19 + 86);
      v26.m_userName[39] = *(_BYTE *)(v19 + 87);
      v26.m_userName[40] = *(_BYTE *)(v19 + 88);
      v26.m_userName[41] = *(_BYTE *)(v19 + 89);
      v26.m_userName[42] = *(_BYTE *)(v19 + 90);
      v26.m_userName[43] = *(_BYTE *)(v19 + 91);
      v26.m_userName[44] = *(_BYTE *)(v19 + 92);
      v26.m_userName[45] = *(_BYTE *)(v19 + 93);
      v26.m_userName[46] = *(_BYTE *)(v19 + 94);
      v26.m_userName[47] = *(_BYTE *)(v19 + 95);
      v26.m_userName[48] = *(_BYTE *)(v19 + 96);
      v26.m_userName[49] = *(_BYTE *)(v19 + 97);
      v26.m_userName[50] = *(_BYTE *)(v19 + 98);
      v26.m_userName[51] = *(_BYTE *)(v19 + 99);
      v26.m_userName[52] = *(_BYTE *)(v19 + 100);
      v26.m_userName[53] = *(_BYTE *)(v19 + 101);
      v26.m_userName[54] = *(_BYTE *)(v19 + 102);
      v26.m_userName[55] = *(_BYTE *)(v19 + 103);
      v26.m_subscribedTimestamp = *(_DWORD *)(v19 + 104);
    }
    if ( v20 )
      OnlineChat::AddMemberToChat(v15, v20, &v26._bytes_20[8], v20 == cachedCallback->dwChannelInfo.m_adminID);
    bdChannelMember::~bdChannelMember((bdChannelMember *)(&v26.m_subscribedTimestamp + 2));
    bdReferencable::~bdReferencable((bdReferencable *)(&v26.m_subscribedTimestamp + 2));
  }
  Xuid = Live_GetXuid(result, controllerIndex);
  v22 = XUID::ToUint64(Xuid);
  LocalClientName = Live_GetLocalClientName(controllerIndex);
  OnlineChat::AddMemberToChat(v15, v22, LocalClientName, 0);
  OnlineChatManager::ProcessCreateCallback(&OnlineChatManager::s_instance, controllerIndex, cachedCallback, 1, 0);
}

/*
==============
OnlineChatManager::JoinClanChannel
==============
*/
void OnlineChatManager::JoinClanChannel(OnlineChatManager *this, const int controllerIndex, CachedCreateChatCallback *cachedCallback)
{
  __int64 chatType; 
  DWServicesAccess *Instance; 
  DWMessaging *Messaging; 
  TaskCreateRequest *v9; 
  bdRemoteTask *v10; 
  TaskManager *v11; 
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  TaskCreateResult pTaskCreateResult; 
  TaskCreateRequest pTaskCreateRequest; 
  bdReference<bdRemoteTask> result; 

  pTaskCreateRequest.m_appTaskType = -1;
  memset(&pTaskCreateRequest.m_appSecondaryCallback, 0, 24);
  pTaskCreateRequest.m_onUpdateCallback = NULL;
  pTaskCreateRequest.m_cancelTaskOnSignoutEvent = 1;
  pTaskCreateRequest.m_timeoutInSeconds = 0;
  pTaskCreateResult.m_localTaskId = 0;
  pTaskCreateResult.m_task = NULL;
  pTaskCreateRequest.m_appData = cachedCallback;
  pTaskCreateRequest.m_onCompletionCallback = OnlineChatManager::JoinClanChannelComplete;
  pTaskCreateRequest.m_controllerIndex = controllerIndex;
  chatType = cachedCallback->chatType;
  Instance = DWServicesAccess::GetInstance();
  Messaging = DWServicesAccess::GetMessaging(Instance, controllerIndex);
  v9 = (TaskCreateRequest *)DWMessaging::createChatChannelWithID(Messaging, &result, s_chatDescription[chatType].dwCategory, cachedCallback->dwChannelInfo.m_channelID, &cachedCallback->createChannelResponse);
  if ( v9 != (TaskCreateRequest *)&pTaskCreateRequest.m_remoteDemonwareTask )
  {
    if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->~bdReferencable)(pTaskCreateRequest.m_remoteDemonwareTask.m_ptr, 1i64);
    v10 = *(bdRemoteTask **)&v9->m_controllerIndex;
    pTaskCreateRequest.m_remoteDemonwareTask.m_ptr = v10;
    if ( v10 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v10->m_refCount, 1u);
  }
  if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result.m_ptr )
    ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
  if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr && (v11 = TaskManager::GetInstance(), TaskManager::CreateTask(v11, &pTaskCreateRequest, &pTaskCreateResult)) )
  {
    Com_Printf(14, "[Chat] %s: Subscribing chat id %zu\n", "OnlineChatManager::JoinClanChannel", cachedCallback->dwChannelInfo.m_channelID);
  }
  else
  {
    Com_PrintError(14, "[Chat] %s: failed to subscribe to chat id %zu\n", "OnlineChatManager::JoinClanChannel", cachedCallback->dwChannelInfo.m_channelID);
    OnlineChatManager::JoinChatFailed(this, controllerIndex, cachedCallback, -1);
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
OnlineChatManager::JoinClanChannelComplete
==============
*/
void OnlineChatManager::JoinClanChannelComplete(GenericTask *task, eTaskManagerTaskState state)
{
  CachedCreateChatCallback *m_appData; 
  int ErrorCode; 

  m_appData = (CachedCreateChatCallback *)task->m_appData;
  if ( state )
  {
    ErrorCode = bdRemoteTask::getErrorCode(task->m_remoteDemonwareTask.m_ptr);
    OnlineChatManager::JoinChatFailed(&OnlineChatManager::s_instance, task->m_controllerIndex, m_appData, ErrorCode);
  }
  else
  {
    OnlineChatManager::GetChannelInfo(&OnlineChatManager::s_instance, task->m_controllerIndex, (CachedCreateChatCallback *)task->m_appData);
  }
}

/*
==============
OnlineChatManager::KickPlayerFromChat
==============
*/
char OnlineChatManager::KickPlayerFromChat(OnlineChatManager *this, const int controllerIndex, const OnlineChatId *chatId, const OnlineChatType *chatType, const unsigned __int64 memberId)
{
  int v8; 
  OnlineChatPool *v9; 
  OnlineChatPool *i; 
  unsigned int v12; 
  __int64 m_chatType; 
  DWServicesAccess *Instance; 
  DWMessaging *Messaging; 
  TaskCreateRequest *v16; 
  bdRemoteTask *v17; 
  TaskManager *v18; 
  char v19; 
  XUID *Xuid; 
  unsigned __int64 v21; 
  OnlineChatMemberInfo *MemberFromChatById; 
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  TaskCreateRequest pTaskCreateRequest; 
  bdReference<bdRemoteTask> result; 
  __int64 v26; 
  XUID v27; 
  TaskCreateResult pTaskCreateResult; 

  v26 = -2i64;
  v8 = 0;
  v9 = &s_onlineChatPool;
  for ( i = &s_onlineChatPool; i->pool[0].m_state == INACTIVE || i->pool[0].m_chatType != *chatType || chatId->m_id != i->pool[0].m_chatId.m_id; i = (OnlineChatPool *)((char *)i + 12848) )
  {
    if ( (unsigned int)++v8 >= 0x12 )
    {
      Com_PrintError(14, "[Chat] %s: Invalid chat id %zu\n", "OnlineChatManager::KickPlayerFromChat", chatId->m_id);
      return 0;
    }
  }
  if ( !OnlineChat::GetMemberFromChatById(i->pool, memberId) )
  {
    Com_PrintError(14, "[Chat] %s: Not valid member with member id %zu\n", "OnlineChatManager::KickPlayerFromChat", memberId);
    return 0;
  }
  v12 = 0;
  while ( v9->pool[0].m_state == INACTIVE || v9->pool[0].m_chatType != *chatType || chatId->m_id != v9->pool[0].m_chatId.m_id )
  {
    ++v12;
    v9 = (OnlineChatPool *)((char *)v9 + 12848);
    if ( v12 >= 0x12 )
    {
      Com_PrintError(14, "[Chat] %s: Invalid chat id %zu\n", "OnlineChatManager::AreWeHostOfChat", chatId->m_id);
      goto LABEL_16;
    }
  }
  Xuid = Live_GetXuid(&v27, controllerIndex);
  v21 = XUID::ToUint64(Xuid);
  MemberFromChatById = OnlineChat::GetMemberFromChatById(v9->pool, v21);
  if ( MemberFromChatById )
  {
    if ( MemberFromChatById->isHost )
      goto LABEL_18;
  }
  else
  {
    Com_PrintError(14, "[Chat] %s: We don't exist in the chat, but the chat exists\n", "OnlineChatManager::AreWeHostOfChat");
  }
LABEL_16:
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_chat_manager.cpp", 1625, ASSERT_TYPE_ASSERT, "(AreWeHostOfChat( controllerIndex, chatId, chatType ))", (const char *)&queryFormat, "AreWeHostOfChat( controllerIndex, chatId, chatType )") )
    __debugbreak();
LABEL_18:
  pTaskCreateRequest.m_appTaskType = -1;
  memset(&pTaskCreateRequest.m_appData, 0, 32);
  pTaskCreateRequest.m_onUpdateCallback = NULL;
  pTaskCreateRequest.m_cancelTaskOnSignoutEvent = 1;
  pTaskCreateRequest.m_timeoutInSeconds = 0;
  pTaskCreateResult.m_localTaskId = 0;
  pTaskCreateResult.m_task = NULL;
  pTaskCreateRequest.m_onCompletionCallback = OnlineChatManager::KickPlayerFromChatCallback;
  pTaskCreateRequest.m_controllerIndex = controllerIndex;
  m_chatType = i->pool[0].m_chatType;
  Instance = DWServicesAccess::GetInstance();
  Messaging = DWServicesAccess::GetMessaging(Instance, controllerIndex);
  v16 = (TaskCreateRequest *)DWMessaging::kickFromChannel(Messaging, &result, s_chatDescription[m_chatType].dwCategory, i->pool[0].m_chatId.m_id, memberId, 0, 0);
  if ( v16 != (TaskCreateRequest *)&pTaskCreateRequest.m_remoteDemonwareTask )
  {
    v17 = *(bdRemoteTask **)&v16->m_controllerIndex;
    pTaskCreateRequest.m_remoteDemonwareTask.m_ptr = v17;
    if ( v17 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v17->m_refCount, 1u);
  }
  if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result.m_ptr )
    ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
  if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr && (v18 = TaskManager::GetInstance(), TaskManager::CreateTask(v18, &pTaskCreateRequest, &pTaskCreateResult)) )
  {
    Com_Printf(14, "[Chat] %s: kicking %zu from chat %zu\n", "OnlineChatManager::KickPlayerFromChat", memberId, i->pool[0].m_chatId.m_id);
    v19 = 1;
  }
  else
  {
    Com_PrintError(14, "[Chat] %s: Failed to kick %zu from chat %zu\n", "OnlineChatManager::KickPlayerFromChat", memberId, i->pool[0].m_chatId.m_id);
    v19 = 0;
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
  return v19;
}

/*
==============
OnlineChatManager::KickPlayerFromChatCallback
==============
*/
void OnlineChatManager::KickPlayerFromChatCallback(GenericTask *task, eTaskManagerTaskState state)
{
  ;
}

/*
==============
OnlineChatManager::LeaveChat
==============
*/
void OnlineChatManager::LeaveChat(OnlineChatManager *this, const OnlineChatId *chatId, const OnlineChatType *chatType)
{
  int v5; 
  OnlineChatPool *i; 
  unsigned __int64 m_id; 
  unsigned int v8; 
  OnlineChatManager::PendingList *v9; 
  __int64 m_chatType; 
  DWServicesAccess *Instance; 
  DWMessaging *Messaging; 
  TaskCreateRequest *v13; 
  bdRemoteTask *v14; 
  TaskManager *v15; 
  TaskCreateResult pTaskCreateResult; 
  TaskCreateRequest pTaskCreateRequest; 
  bdReference<bdRemoteTask> result; 

  v5 = 0;
  for ( i = &s_onlineChatPool; ; i = (OnlineChatPool *)((char *)i + 12848) )
  {
    if ( i->pool[0].m_state )
    {
      if ( i->pool[0].m_chatType == *chatType )
      {
        m_id = chatId->m_id;
        if ( chatId->m_id == i->pool[0].m_chatId.m_id )
          break;
      }
    }
    if ( (unsigned int)++v5 >= 0x12 )
    {
      Com_PrintError(14, "[Chat] %s: No chat type %i with id %zu\n", "OnlineChatManager::LeaveChat", *(unsigned int *)chatType, chatId->m_id);
      return;
    }
  }
  if ( m_id )
  {
    v8 = 0;
    v9 = &OnlineChatManager::s_instance.m_pendingLists[1];
    while ( !v9->list[0].m_id.m_id || v9->list[0].m_id.m_id != m_id || v9->list[0].m_type != i->pool[0].m_chatType )
    {
      ++v8;
      v9 = (OnlineChatManager::PendingList *)((char *)v9 + 16);
      if ( v8 >= 0x12 )
        goto LABEL_13;
    }
    Com_PrintError(14, "[Chat] %s: Already pending leave for chat type %i with id %zu\n", "OnlineChatManager::LeaveChat", *(unsigned int *)chatType, m_id);
  }
  else
  {
LABEL_13:
    OnlineChatManager::TrackPending(this, DODGE, chatId, chatType);
    if ( i->pool[0].m_state != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_chat_manager.cpp", 712, ASSERT_TYPE_ASSERT, "(chat->GetState() == OnlineChatState::JOINED)", (const char *)&queryFormat, "chat->GetState() == OnlineChatState::JOINED", -2i64) )
      __debugbreak();
    m_chatType = i->pool[0].m_chatType;
    Com_Printf(14, "[Chat] %s: Leaving chat %zu, type %s\n", "OnlineChatManager::LeaveChat", i->pool[0].m_chatId.m_id, s_chatDescription[m_chatType].typeString);
    if ( i->pool[0].m_chatType == (COUNT|DODGE|0x4) )
    {
      OnlineChatManager::CloseChat(&OnlineChatManager::s_instance, i->pool);
    }
    else
    {
      pTaskCreateRequest.m_appTaskType = -1;
      memset(&pTaskCreateRequest.m_appSecondaryCallback, 0, 24);
      pTaskCreateRequest.m_onUpdateCallback = NULL;
      pTaskCreateRequest.m_cancelTaskOnSignoutEvent = 1;
      pTaskCreateRequest.m_timeoutInSeconds = 0;
      pTaskCreateResult.m_localTaskId = 0;
      pTaskCreateResult.m_task = NULL;
      pTaskCreateRequest.m_appData = i;
      pTaskCreateRequest.m_onCompletionCallback = OnlineChatManager::LeaveChatCallback;
      pTaskCreateRequest.m_controllerIndex = i->pool[0].m_controllerIndex;
      Instance = DWServicesAccess::GetInstance();
      Messaging = DWServicesAccess::GetMessaging(Instance, i->pool[0].m_controllerIndex);
      v13 = (TaskCreateRequest *)DWMessaging::unsubscribeFromChannel(Messaging, &result, s_chatDescription[m_chatType].dwCategory, chatId->m_id);
      if ( v13 != (TaskCreateRequest *)&pTaskCreateRequest.m_remoteDemonwareTask )
      {
        v14 = *(bdRemoteTask **)&v13->m_controllerIndex;
        pTaskCreateRequest.m_remoteDemonwareTask.m_ptr = v14;
        if ( v14 )
          _InterlockedExchangeAdd((volatile signed __int32 *)&v14->m_refCount, 1u);
      }
      if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result.m_ptr )
        ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
      if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr && (v15 = TaskManager::GetInstance(), TaskManager::CreateTask(v15, &pTaskCreateRequest, &pTaskCreateResult)) )
      {
        Com_Printf(14, "[Chat] %s: Leaving chat id %zu\n", "OnlineChatManager::LeaveChat", chatId->m_id);
      }
      else
      {
        Com_PrintError(14, "[Chat] %s: failed to leave chat id %zu through dw\n", "OnlineChatManager::LeaveChat", chatId->m_id);
        OnlineChatManager::CloseChat(&OnlineChatManager::s_instance, i->pool);
      }
      TaskCreateRequest::~TaskCreateRequest(&pTaskCreateRequest);
    }
  }
}

/*
==============
OnlineChatManager::LeaveChatCallback
==============
*/
void OnlineChatManager::LeaveChatCallback(GenericTask *task, eTaskManagerTaskState state)
{
  OnlineChat *m_appData; 
  int v5; 
  int listCount; 
  char *fmt; 
  __int128 v15; 

  m_appData = (OnlineChat *)task->m_appData;
  if ( m_appData )
  {
    v5 = 0;
    _RBP = &OnlineChatManager::s_instance;
    if ( OnlineChatManager::s_instance.m_pendingLists[1].listCount > 0 )
    {
      listCount = OnlineChatManager::s_instance.m_pendingLists[1].listCount;
      _RCX = &OnlineChatManager::s_instance.m_pendingLists[1];
      while ( 1 )
      {
        __asm
        {
          vmovups xmm0, xmmword ptr [rcx]
          vmovq   rax, xmm0
          vmovups [rsp+48h+var_18], xmm0
        }
        if ( _RAX == m_appData->m_chatId.m_id && DWORD2(v15) == m_appData->m_chatType )
          break;
        ++v5;
        _RCX = (OnlineChatManager::PendingList *)((char *)_RCX + 16);
        listCount = OnlineChatManager::s_instance.m_pendingLists[1].listCount;
        if ( v5 >= OnlineChatManager::s_instance.m_pendingLists[1].listCount )
          goto LABEL_12;
      }
      OnlineChatManager::s_instance.m_pendingLists[1].listCount = listCount - 1;
      _RCX = 2i64 * listCount;
      _RAX = 2i64 * v5;
      __asm
      {
        vmovups xmm0, xmmword ptr [rbp+rcx*8+158h]
        vmovups xmmword ptr [rbp+rax*8+168h], xmm0
      }
      OnlineChatManager::s_instance.m_pendingLists[1].list[OnlineChatManager::s_instance.m_pendingLists[1].listCount].m_id.m_id = 0i64;
    }
LABEL_12:
    if ( m_appData->m_state == ACTIVE )
    {
      if ( m_appData->m_chatType == (COUNT|DODGE|0x4) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_chat_manager.cpp", 677, ASSERT_TYPE_ASSERT, "(chat->GetChatType() != OnlineChatType::PRIVATE_CHAT)", (const char *)&queryFormat, "chat->GetChatType() != OnlineChatType::PRIVATE_CHAT") )
        __debugbreak();
      OnlineChatManager::CloseChat(&OnlineChatManager::s_instance, m_appData);
    }
    if ( state )
    {
      LODWORD(fmt) = bdRemoteTask::getErrorCode(task->m_remoteDemonwareTask.m_ptr);
      Com_Printf(14, "[Chat] %s: Failed to leave chat %zu through DW, error %i\n", "OnlineChatManager::LeaveChatCallback", m_appData->m_chatId.m_id, fmt);
    }
    else
    {
      Com_Printf(14, "[Chat] %s: Successfully left chat %zu through DW\n", "OnlineChatManager::LeaveChatCallback", m_appData->m_chatId.m_id);
    }
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_chat_manager.cpp", 665, ASSERT_TYPE_ASSERT, "(chat)", (const char *)&queryFormat, "chat") )
      __debugbreak();
    Com_PrintError(14, "[Chat] %s: Chat data is null!\n", "OnlineChatManager::LeaveChatCallback");
  }
}

/*
==============
OnlineChatManager::MuteMemberText
==============
*/
char OnlineChatManager::MuteMemberText(OnlineChatManager *this, const OnlineChatId *onlineChatId, const OnlineChatType *onlineChatType, const unsigned __int64 memberId)
{
  OnlineChatPool *v5; 
  unsigned int v6; 
  OnlineChatMemberInfo *MemberFromChatById; 

  v5 = &s_onlineChatPool;
  v6 = 0;
  while ( v5->pool[0].m_state == INACTIVE || v5->pool[0].m_chatType != *onlineChatType || onlineChatId->m_id != v5->pool[0].m_chatId.m_id )
  {
    ++v6;
    v5 = (OnlineChatPool *)((char *)v5 + 12848);
    if ( v6 >= 0x12 )
    {
      Com_PrintError(14, "[Chat] %s: Invalid chat id %zu\n", "OnlineChatManager::MuteMemberText", onlineChatId->m_id);
      return 0;
    }
  }
  MemberFromChatById = OnlineChat::GetMemberFromChatById(v5->pool, memberId);
  if ( !MemberFromChatById )
  {
    Com_PrintError(14, "[Chat] %s: Invalid chat member id %zu\n", "OnlineChatManager::MuteMemberText", memberId);
    return 0;
  }
  MemberFromChatById->isTextMuted = 1;
  return 1;
}

/*
==============
OnlineChatManager::OnChatChannelMessage
==============
*/
void OnlineChatManager::OnChatChannelMessage(OnlineChatManager *this, const char *category, unsigned __int64 channelID, unsigned __int64 senderID, char *senderName, unsigned int chatMessageType, void *message)
{
  OnlineChatPool *v8; 
  OnlineChat *v9; 
  unsigned int i; 
  __int64 v11; 
  const char *dwCategory; 
  const char *v13; 
  char v14; 
  __int64 v15; 
  char v16; 
  unsigned __int64 v17; 
  int ControllerFromClient; 
  XUID *Xuid; 
  XUID *v20; 
  int m_controllerIndex; 
  unsigned int v22; 
  Online_Friends *Instance; 
  const char *v24; 
  const char *v25; 
  OnlineChatMessage *v26; 
  XUID v27; 
  XUID result; 
  unsigned __int64 id; 

  id = senderID;
  if ( !channelID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_chat_types.h", 16, ASSERT_TYPE_ASSERT, "(_id != 0)", "%s\n\tShould call OnlineChatId.Clear() instead of SetID()", "_id != 0") )
    __debugbreak();
  v8 = &s_onlineChatPool;
  v9 = NULL;
  for ( i = 0; i < 0x12; ++i )
  {
    if ( v8->pool[0].m_state && channelID == v8->pool[0].m_chatId.m_id )
    {
      v11 = 0x7FFFFFFFi64;
      dwCategory = s_chatDescription[v8->pool[0].m_chatType].dwCategory;
      if ( !category && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
        __debugbreak();
      if ( !dwCategory && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
        __debugbreak();
      v13 = (const char *)(category - dwCategory);
      do
      {
        v14 = dwCategory[(_QWORD)v13];
        v15 = v11;
        v16 = *dwCategory++;
        --v11;
        if ( !v15 )
          break;
        if ( v14 != v16 )
          goto LABEL_18;
      }
      while ( v14 );
      v9 = (OnlineChat *)v8;
    }
LABEL_18:
    v8 = (OnlineChatPool *)((char *)v8 + 12848);
  }
  v17 = id;
  if ( v9 )
  {
    if ( !id && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_chat_manager.cpp", 1651, ASSERT_TYPE_ASSERT, "(memberId != 0)", (const char *)&queryFormat, "memberId != 0") )
      __debugbreak();
    ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
    Xuid = Live_GetXuid(&result, ControllerFromClient);
    if ( v17 != XUID::ToUint64(Xuid) )
    {
      v20 = XUID::FromUniversalId(&v27, v17);
      m_controllerIndex = v9->m_controllerIndex;
      v22 = chatMessageType >> 7;
      result.m_id = v20->m_id;
      if ( ((1 << GetClientPlatform()) & chatMessageType) == 0 && (v22 & 2) == 0 )
      {
        if ( (v22 & 4) == 0 )
        {
          v25 = XUID::ToString(&result);
          Com_Printf(14, "[Chat] %s: Received message from CROSSPLAY player %s who's privacy doesnt allow CROSSPLAY players to see his/her message\n", "CheckCrossplayPrivacy", v25);
          return;
        }
        Instance = Online_Friends::GetInstance();
        if ( Online_Friends::Crossplay_FindIndex(Instance, m_controllerIndex, result) == -1 )
        {
          v24 = XUID::ToString(&result);
          Com_Printf(14, "[Chat] %s: Received message from CROSSPLAY player %s who's privacy only allows CROSSPLAY friends to see his/her message\n", "CheckCrossplayPrivacy", v24);
          return;
        }
      }
      if ( OnlineChat::GetMemberFromChatById(v9, v17) )
      {
        v26 = OnlineChat::AddMessageToChat(v9, v17, channelID, senderName, (const char *)message, BYTE_VALUE);
        if ( v26 )
          AddMessageToChatHistory(v9, v26);
      }
      else
      {
        Com_PrintError(14, "[Chat] Member Id %zu not in chat\n", v17);
      }
    }
  }
}

/*
==============
OnlineChatManager::OnChatChannelUpdate
==============
*/
void OnlineChatManager::OnChatChannelUpdate(OnlineChatManager *this, const bdChannelInfo *channel, const bdChannelMember *member, unsigned __int8 status)
{
  unsigned __int64 m_channelID; 
  OnlineChat *v9; 
  OnlineChatId chatId; 
  OnlineChat *chatOut; 

  m_channelID = channel->m_channelID;
  if ( !m_channelID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_chat_types.h", 16, ASSERT_TYPE_ASSERT, "(_id != 0)", "%s\n\tShould call OnlineChatId.Clear() instead of SetID()", "_id != 0") )
    __debugbreak();
  chatId.m_id = m_channelID;
  chatOut = NULL;
  if ( OnlineChatManager::GetChat(this, &chatId, channel->_bytes_20, &chatOut) )
  {
    if ( status == 1 )
    {
      OnlineChat::AddMemberToChat(chatOut, *(_QWORD *)member->_bytes_20, &member->_bytes_20[8], 0);
    }
    else if ( !status )
    {
      v9 = chatOut;
      if ( OnlineChat::GetMemberFromChatById(chatOut, *(_QWORD *)member->_bytes_20) )
        OnlineChat::RemoveMemberFromChat(v9, *(_QWORD *)member->_bytes_20);
    }
  }
}

/*
==============
OnlineChatManager::ProcessCreateCallback
==============
*/
void OnlineChatManager::ProcessCreateCallback(OnlineChatManager *this, const int controllerIndex, CachedCreateChatCallback *cachedCallback, const bool success, const int errorCode)
{
  int v8; 
  unsigned __int64 m_channelID; 
  OnlineChatPool *i; 
  OnlineChatId chatId; 

  if ( !cachedCallback && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_chat_manager.cpp", 1402, ASSERT_TYPE_ASSERT, "(cachedCallback)", (const char *)&queryFormat, "cachedCallback") )
    __debugbreak();
  if ( !cachedCallback->callback && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_chat_manager.cpp", 1403, ASSERT_TYPE_ASSERT, "(cachedCallback->callback)", (const char *)&queryFormat, "cachedCallback->callback") )
    __debugbreak();
  v8 = 0;
  m_channelID = 0i64;
  if ( cachedCallback->dwChannelInfo.m_channelID )
    m_channelID = cachedCallback->dwChannelInfo.m_channelID;
  chatId.m_id = m_channelID;
  cachedCallback->callback(controllerIndex, &chatId, (const OnlineChatType *)cachedCallback, success, errorCode);
  OnlineChatManager::ClearCachedCreateChatCallback(cachedCallback);
  if ( success )
  {
    for ( i = &s_onlineChatPool; i->pool[0].m_state == INACTIVE || i->pool[0].m_chatType != cachedCallback->chatType || chatId.m_id != i->pool[0].m_chatId.m_id; i = (OnlineChatPool *)((char *)i + 12848) )
    {
      if ( (unsigned int)++v8 >= 0x12 )
        return;
    }
    LUI_Social_SendChannelAddedEvent(controllerIndex, (const OnlineChatType)i->pool[0].m_chatType, chatId, 0);
  }
}

/*
==============
OnlineChatManager::ProcessJoinedChat
==============
*/
void OnlineChatManager::ProcessJoinedChat(OnlineChatManager *this, const int controllerIndex, const unsigned __int64 channelID, const OnlineChatType chatType)
{
  OnlineChat *VacantOnlineChat; 

  if ( !channelID )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_chat_manager.cpp", 301, ASSERT_TYPE_ASSERT, "(channelID != 0)", (const char *)&queryFormat, "channelID != 0") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_chat_types.h", 16, ASSERT_TYPE_ASSERT, "(_id != 0)", "%s\n\tShould call OnlineChatId.Clear() instead of SetID()", "_id != 0") )
      __debugbreak();
  }
  VacantOnlineChat = OnlineChatManager::GetVacantOnlineChat(&OnlineChatManager::s_instance);
  if ( !VacantOnlineChat && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_chat_manager.cpp", 310, ASSERT_TYPE_ASSERT, "(chat)", (const char *)&queryFormat, "chat") )
    __debugbreak();
  if ( VacantOnlineChat->m_chatType == (COUNT|DODGE|0x4) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_chat_manager.cpp", 313, ASSERT_TYPE_ASSERT, "(chat->GetChatType() != OnlineChatType::PRIVATE_CHAT)", (const char *)&queryFormat, "chat->GetChatType() != OnlineChatType::PRIVATE_CHAT") )
    __debugbreak();
  OnlineChat::Init(VacantOnlineChat, controllerIndex, (const OnlineChatId)channelID, chatType);
  Com_Printf(14, "[Chat] %s: Successfully joined chat %zu\n", "OnlineChatManager::ProcessJoinedChat", VacantOnlineChat->m_chatId.m_id);
}

/*
==============
OnlineChatManager::RegisterMemberAddedCallbackForChat
==============
*/
void OnlineChatManager::RegisterMemberAddedCallbackForChat(OnlineChatManager *this, const OnlineChatId *chatId, const OnlineChatType *chatType, void (*callback)(const int, const OnlineChatId *, const OnlineChatType *, const unsigned __int64))
{
  int v7; 
  OnlineChatPool *i; 

  if ( !callback && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_chat_manager.cpp", 1661, ASSERT_TYPE_ASSERT, "(callback)", (const char *)&queryFormat, "callback") )
    __debugbreak();
  v7 = 0;
  for ( i = &s_onlineChatPool; i->pool[0].m_state == INACTIVE || i->pool[0].m_chatType != *chatType || chatId->m_id != i->pool[0].m_chatId.m_id; i = (OnlineChatPool *)((char *)i + 12848) )
  {
    if ( (unsigned int)++v7 >= 0x12 )
    {
      Com_PrintError(14, "[Chat] %s: Invalid chat id %zu\n", "OnlineChatManager::RegisterMemberAddedCallbackForChat", chatId->m_id);
      return;
    }
  }
  OnlineChat::RegisterMemberAddedCallback(i->pool, callback);
}

/*
==============
OnlineChatManager::SendChatEvent
==============
*/
void OnlineChatManager::SendChatEvent(OnlineChatManager *this, OnlineChat *chat, const int controllerIndex, const char *message)
{
  OnlineChatMessage *v6; 
  const OnlineChatMessage *v7; 
  OnlineChatType m_chatType; 
  OnlineChatType chatType; 
  OnlineChatId chatId; 

  v6 = OnlineChat::AddMessageToChat(chat, 0i64, 0i64, (const char *)&queryFormat.fmt + 3, message, BYTE_VALUE);
  v7 = v6;
  if ( v6 )
  {
    AddMessageToChatHistory(chat, v6);
    m_chatType = chat->m_chatType;
    chatId.m_id = chat->m_chatId.m_id;
    chatType = m_chatType;
    LUI_Social_SendReceivedMessageEvent(controllerIndex, &chatId, &chatType, v7);
  }
}

/*
==============
OnlineChatManager::SendMessageToChat
==============
*/
void OnlineChatManager::SendMessageToChat(OnlineChatManager *this, const int controllerIndex, const OnlineChatId *chatId, const OnlineChatType *chatType, const char *message)
{
  int v6; 
  int v7; 
  OnlineChatPool *i; 
  int Int_Internal_DebugName; 
  int v10; 
  int j; 
  __int64 v12; 
  XUID *v13; 
  unsigned __int64 v14; 
  OnlineChatMemberInfo *MemberFromChatById; 
  XUID *v16; 
  const char *v17; 
  int v18; 
  __int64 v19; 
  int v20; 
  char v21; 
  char v22; 
  const char *v23; 
  char v24; 
  char *v25; 
  const char *v26; 
  char v27; 
  char *v28; 
  const char *v29; 
  char v30; 
  char *v31; 
  const char *gamerTag; 
  unsigned __int64 m_id; 
  XUID *v34; 
  unsigned __int64 v35; 
  OnlineChatMessage *v36; 
  __int64 m_chatType; 
  OnlineChatHistory *v38; 
  unsigned int count; 
  unsigned int startIndex; 
  Online_BlockList *v41; 
  const char *v42; 
  unsigned __int64 v43; 
  OnlineChatType v44; 
  XUID *v45; 
  unsigned __int64 PlatformUserId; 
  Online_Friends *v47; 
  unsigned int Index; 
  Online_Friends *v49; 
  SocialPresence *Presence; 
  SocialPresence *v51; 
  const PartyData *PartyData; 
  unsigned int MemberByXUID; 
  int v54; 
  char MemberPlatform; 
  bool PrivacySettingsForUser; 
  unsigned int v57; 
  unsigned __int64 v58; 
  unsigned int v59; 
  DWServicesAccess *v60; 
  DWMessaging *v61; 
  unsigned __int64 v62; 
  const bdReference<bdRemoteTask> *v63; 
  int v64; 
  int v65; 
  __int64 v66; 
  DWServicesAccess *Instance; 
  DWMessaging *Messaging; 
  __int64 v69; 
  const OnlineChatId *v70; 
  const bdReference<bdRemoteTask> *v71; 
  TaskManager *v72; 
  unsigned int messageType; 
  XUID friendId; 
  XUID xuid; 
  bdReference<bdRemoteTask> v77; 
  bdReference<bdRemoteTask> v78; 
  TaskCreateRequest pTaskCreateRequest; 
  __int64 v80; 
  XUID result; 
  XUID v82; 
  XUID v83; 
  XUID v84; 
  TaskCreateResult pTaskCreateResult; 
  char src[512]; 
  char dest[512]; 

  v80 = -2i64;
  if ( !message || !*message )
  {
    Com_PrintError(14, "[Chat] Attempting to send empty chat message, ignoring.\n", chatId, chatType);
    return;
  }
  v6 = 0;
  v7 = 0;
  for ( i = &s_onlineChatPool; i->pool[0].m_state == INACTIVE || i->pool[0].m_chatType != *chatType || chatId->m_id != i->pool[0].m_chatId.m_id; i = (OnlineChatPool *)((char *)i + 12848) )
  {
    if ( (unsigned int)++v7 >= 0x12 )
    {
      Com_PrintError(14, "[Chat] %s: No chat with id %zu\n", "OnlineChatManager::SendMessageToChat", chatId->m_id);
      return;
    }
  }
  Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DVARINT_online_chat_send_message_throttle_rate, "online_chat_send_message_throttle_rate");
  v10 = Sys_Milliseconds() - Int_Internal_DebugName;
  for ( j = OnlineChatManager::s_instance.m_throttleMessageQueueStart; j < OnlineChatManager::s_instance.m_throttleMessageQueueCount + OnlineChatManager::s_instance.m_throttleMessageQueueStart; ++j )
  {
    v12 = ((unsigned __int64)j * (unsigned __int128)0x47AE147AE147AE15ui64) >> 64;
    if ( OnlineChatManager::s_instance.m_throttleMessageQueue[j - 50 * ((v12 + ((unsigned __int64)(j - v12) >> 1)) >> 5)] > v10 )
      break;
  }
  OnlineChatManager::s_instance.m_throttleMessageQueueCount += OnlineChatManager::s_instance.m_throttleMessageQueueStart - j;
  OnlineChatManager::s_instance.m_throttleMessageQueueStart = j;
  if ( OnlineChatManager::s_instance.m_throttleMessageQueueCount >= Dvar_GetInt_Internal_DebugName(DVARINT_online_chat_send_message_throttle_count, "online_chat_send_message_throttle_count") )
  {
    LUI_Social_SendThrottleSendMessageEvent(controllerIndex);
    return;
  }
  OnlineChatManager::s_instance.m_throttleMessageQueue[(OnlineChatManager::s_instance.m_throttleMessageQueueCount + OnlineChatManager::s_instance.m_throttleMessageQueueStart) % 0x32ui64] = Sys_Milliseconds();
  ++OnlineChatManager::s_instance.m_throttleMessageQueueCount;
  if ( i->pool[0].m_state != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_chat_manager.cpp", 829, ASSERT_TYPE_ASSERT, "(chat->GetState() == OnlineChatState::JOINED)", (const char *)&queryFormat, "chat->GetState() == OnlineChatState::JOINED") )
    __debugbreak();
  Com_Printf(14, "[Chat] %s: Adding message \"%s\" to chat %zu\n", "OnlineChatManager::SendMessageToChat", message, i->pool[0].m_chatId.m_id);
  v13 = Live_GetXuid(&result, controllerIndex);
  v14 = XUID::ToUint64(v13);
  MemberFromChatById = OnlineChat::GetMemberFromChatById(i->pool, v14);
  if ( MemberFromChatById )
  {
    v18 = 0;
    if ( *message )
    {
      v19 = 0i64;
      v20 = 1;
      do
      {
        if ( v18 >= 499 )
          break;
        v21 = message[v19];
        if ( v21 == 94 )
        {
          if ( &message[v20] )
          {
            v22 = message[v19 + 1];
            if ( v22 != 94 && (unsigned __int8)(v22 - 39) <= 0x17u )
            {
              v23 = aA_18;
              v24 = 94;
              v25 = &src[v18];
              do
              {
                *v25 = v24;
                ++v18;
                ++v25;
                v24 = *++v23;
              }
              while ( *v23 );
              goto LABEL_42;
            }
          }
        }
        else if ( v21 == 91 )
        {
          if ( message[v19 + 1] == 123 )
          {
            v26 = aA_1;
            v27 = 91;
            v28 = &src[v18];
            do
            {
              *v28 = v27;
              ++v18;
              ++v28;
              v27 = *++v26;
            }
            while ( *v26 );
            goto LABEL_42;
          }
        }
        else if ( v21 == 125 && message[v19 + 1] == 93 )
        {
          v29 = aA_23;
          v30 = 125;
          v31 = &src[v18];
          do
          {
            *v31 = v30;
            ++v18;
            ++v31;
            v30 = *++v29;
          }
          while ( *v29 );
          goto LABEL_42;
        }
        src[v18++] = v21;
LABEL_42:
        ++v20;
        ++v19;
      }
      while ( message[v19] );
    }
    src[v18] = 0;
    gamerTag = MemberFromChatById->gamerTag;
    m_id = i->pool[0].m_chatId.m_id;
    v34 = Live_GetXuid(&v83, controllerIndex);
    v35 = XUID::ToUint64(v34);
    v36 = OnlineChat::AddMessageToChat(i->pool, v35, m_id, gamerTag, src, BOOL_VALUE);
    if ( !v36 )
    {
      Com_PrintError(14, "[Chat] %s: Couldn't get chat messaage\n", "OnlineChatManager::SendMessageToChat");
      return;
    }
    m_chatType = i->pool[0].m_chatType;
    v38 = &s_onlineChatHistory[m_chatType];
    count = v38->count;
    if ( count >= 0xC8 )
    {
      startIndex = 0xC8 % (v38->startIndex + 1);
      v38->startIndex = startIndex;
    }
    else
    {
      v38->count = ++count;
      startIndex = v38->startIndex;
    }
    v38->messages[(count + startIndex - 1) % 0xC8] = v36;
    pTaskCreateRequest.m_appTaskType = -1;
    memset(&pTaskCreateRequest.m_appSecondaryCallback, 0, 24);
    pTaskCreateRequest.m_onUpdateCallback = NULL;
    pTaskCreateRequest.m_cancelTaskOnSignoutEvent = 1;
    pTaskCreateRequest.m_timeoutInSeconds = 0;
    pTaskCreateResult.m_localTaskId = 0;
    pTaskCreateResult.m_task = NULL;
    pTaskCreateRequest.m_onCompletionCallback = OnlineChatManager::SendMessageToChatCallback;
    pTaskCreateRequest.m_controllerIndex = i->pool[0].m_controllerIndex;
    pTaskCreateRequest.m_appData = v36;
    if ( (int)m_chatType < 3 )
      goto LABEL_100;
    if ( (int)m_chatType <= 6 )
    {
      v64 = 1 << GetClientPlatform();
      if ( Live_GetDoesUserHaveOnlineCommunicationsPrivilege(controllerIndex) )
      {
        if ( XB3_Privacy_CanCommunicateWithCrossplayUsers(controllerIndex) )
        {
          v6 = 6;
        }
        else if ( XB3_Privacy_CanCommunicateWithCrossplayFriends(controllerIndex) )
        {
          v6 = 4;
        }
      }
      v65 = (v6 << 7) | v64;
      v66 = i->pool[0].m_chatType;
      Instance = DWServicesAccess::GetInstance();
      Messaging = DWServicesAccess::GetMessaging(Instance, i->pool[0].m_controllerIndex);
      v69 = -1i64;
      do
        ++v69;
      while ( src[v69] );
      messageType = v65;
      v70 = chatId;
      v71 = DWMessaging::sendToChannel(Messaging, &v78, s_chatDescription[v66].dwCategory, chatId->m_id, src, v69, messageType);
      bdReference<bdRemoteTask>::operator=(&pTaskCreateRequest.m_remoteDemonwareTask, v71);
      if ( v78.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v78.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v78.m_ptr )
        ((void (__fastcall *)(bdRemoteTask *, __int64))v78.m_ptr->~bdReferencable)(v78.m_ptr, 1i64);
      goto LABEL_92;
    }
    if ( (_DWORD)m_chatType != 7 )
    {
LABEL_100:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_chat_manager.cpp", 985, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Invalid type for %s", "OnlineChatManager::SendMessageToChat") )
        __debugbreak();
LABEL_91:
      v70 = chatId;
LABEL_92:
      if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr && (v72 = TaskManager::GetInstance(), TaskManager::CreateTask(v72, &pTaskCreateRequest, &pTaskCreateResult)) )
        Com_Printf(14, "[Chat] %s: Begin sending message [ %s ] to chat id %zu\n", "OnlineChatManager::SendMessageToChat", src, v70->m_id);
      else
        Com_PrintError(14, "[Chat] %s: failed to send message [ %s ] to chat id %zu\n", "OnlineChatManager::SendMessageToChat", src, v70->m_id);
      goto LABEL_96;
    }
    XUID::FromUInt64(&xuid, i->pool[0].m_chatId.m_id);
    v41 = Online_BlockList::GetInstance();
    if ( Online_BlockList::IsBlocked(v41, controllerIndex, xuid) )
    {
      v42 = XUID::ToString(&xuid);
      Com_PrintError(14, "[Chat] %s: We can't send %s a message because that user is blocked\n", "OnlineChatManager::SendMessageToChat", v42);
LABEL_96:
      TaskCreateRequest::~TaskCreateRequest(&pTaskCreateRequest);
      return;
    }
    v43 = xuid.m_id;
    v44 = i->pool[0].m_chatType;
    friendId.m_id = xuid.m_id;
    v45 = Live_GetXuid(&v84, controllerIndex);
    if ( XUID::operator==(v45, &friendId) )
    {
      PlatformUserId = Live_GetPlatformUserId(controllerIndex);
LABEL_69:
      PrivacySettingsForUser = XB3_Privacy_GetPrivacySettingsForUser(controllerIndex, PlatformUserId, PERMISSION_COMMUNICATION);
LABEL_71:
      if ( !PrivacySettingsForUser )
        goto LABEL_96;
      Core_strcpy(dest, 0x1FDui64, "CHAT:");
      v57 = truncate_cast<unsigned int,unsigned __int64>(ONLINE_CHAT_MANAGER_MESSAGE_HEADER_LEN + 1);
      I_strcat(dest, 0x1FDui64, src);
      v58 = -1i64;
      do
        ++v58;
      while ( src[v58] );
      v59 = truncate_cast<unsigned int,unsigned __int64>(v58) + v57;
      v60 = DWServicesAccess::GetInstance();
      v61 = DWServicesAccess::GetMessaging(v60, 0);
      v62 = XUID::ToUint64(&xuid);
      v63 = DWMessaging::sendGlobalInstantMessage(v61, &v77, v62, dest, v59);
      bdReference<bdRemoteTask>::operator=(&pTaskCreateRequest.m_remoteDemonwareTask, v63);
      if ( v77.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v77.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v77.m_ptr )
        ((void (__fastcall *)(bdRemoteTask *, __int64))v77.m_ptr->~bdReferencable)(v77.m_ptr, 1i64);
      goto LABEL_91;
    }
    if ( (unsigned int)(v44 - 4) <= 1 )
    {
      if ( v44 != (COUNT|DODGE) )
      {
        PartyData = Lobby_GetPartyData();
        goto LABEL_66;
      }
    }
    else if ( v44 != (COUNT|DODGE) )
    {
      if ( v44 == (COUNT|DODGE|0x4) )
      {
        v47 = Online_Friends::GetInstance();
        Index = Online_Friends::FindIndex(v47, controllerIndex, friendId);
        if ( Index != -1 )
        {
          v49 = Online_Friends::GetInstance();
          PlatformUserId = Online_Friends::GetPlatformUserId(v49, controllerIndex, Index);
          goto LABEL_69;
        }
        Presence = (SocialPresence *)Social_GetPresence(controllerIndex, friendId);
        v51 = Presence;
        if ( Presence && SocialPresence::GetPlatform(Presence) == PRESENCE_PLATFORM_XBOX_ONE )
        {
          PlatformUserId = SocialPresence::GetPlatformId(v51);
          goto LABEL_69;
        }
      }
LABEL_70:
      PrivacySettingsForUser = XB3_Privacy_CanCommunicateWithCrossplayUser(controllerIndex, (const XUID)v43);
      goto LABEL_71;
    }
    PartyData = &g_partyData;
LABEL_66:
    MemberByXUID = Party_FindMemberByXUID(PartyData, friendId);
    v54 = MemberByXUID;
    if ( MemberByXUID != -1 )
    {
      MemberPlatform = Party_GetMemberPlatform(PartyData, MemberByXUID);
      if ( MemberPlatform == (unsigned __int8)GetClientPlatform() )
      {
        PlatformUserId = Party_GetPlatformId(PartyData, v54);
        goto LABEL_69;
      }
    }
    goto LABEL_70;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_chat_manager.cpp", 834, ASSERT_TYPE_ASSERT, "(member)", (const char *)&queryFormat, "member") )
    __debugbreak();
  v16 = Live_GetXuid(&v82, controllerIndex);
  v17 = XUID::ToDevString(v16);
  Com_PrintError(14, "[Chat] Member Id %s not in chat\n", v17);
}

/*
==============
OnlineChatManager::SendMessageToChatCallback
==============
*/
void OnlineChatManager::SendMessageToChatCallback(GenericTask *task, eTaskManagerTaskState state)
{
  OnlineChatMessage *m_appData; 
  OnlineChat *m_chat; 
  unsigned __int64 m_id; 
  OnlineChatType chatType; 
  OnlineChatId chatId; 

  m_appData = (OnlineChatMessage *)task->m_appData;
  OnlineChatMessage::SetState(m_appData, (const OnlineChatMessage::State)((task->m_genericTaskState == TASKSTATE_ERROR) + 2));
  if ( !GamerProfile_GetChatProfanityFilterEnabled(task->m_controllerIndex) || m_appData->m_profanityFilterState == FILTERED )
  {
    m_chat = m_appData->m_chat;
    chatType = m_chat->m_chatType;
    m_id = m_chat->m_chatId.m_id;
    LODWORD(m_chat) = task->m_controllerIndex;
    chatId.m_id = m_id;
    LUI_Social_SendReceivedMessageEvent((const int)m_chat, &chatId, &chatType, m_appData);
  }
}

/*
==============
OnlineChatManager::SendPlayerEvent
==============
*/
void OnlineChatManager::SendPlayerEvent(OnlineChatManager *this, const int controllerIndex, const char *message, unsigned __int64 player, const char *gamerTag)
{
  int v8; 
  OnlineChatPool *i; 
  Online_Friends *Instance; 
  XUID *v11; 
  int Index; 
  Online_Friends *v13; 
  OnlineChatMessage *v14; 
  const OnlineChatMessage *v15; 
  OnlineChatType m_chatType; 
  OnlineChatType chatType; 
  XUID result; 
  char dest[40]; 

  if ( (unsigned int)controllerIndex >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_chat_manager.cpp", 2283, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, 8) )
    __debugbreak();
  if ( !message && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_chat_manager.cpp", 2284, ASSERT_TYPE_ASSERT, "(message)", (const char *)&queryFormat, "message") )
    __debugbreak();
  v8 = 0;
  for ( i = &s_onlineChatPool; i->pool[0].m_state != ACTIVE || i->pool[0].m_chatType != COUNT || i->pool[0].m_controllerIndex != controllerIndex; i = (OnlineChatPool *)((char *)i + 12848) )
  {
    if ( (unsigned int)++v8 >= 0x12 )
    {
      Com_PrintError(16, "[Chat] %s: Unable to send player event for controller %i because the event chat is not setup. message: %s\n", "OnlineChatManager::SendPlayerEvent", (unsigned int)controllerIndex, message);
      return;
    }
  }
  if ( gamerTag && *gamerTag )
  {
    Core_strcpy(dest, 0x24ui64, gamerTag);
  }
  else
  {
    Instance = Online_Friends::GetInstance();
    v11 = XUID::FromUInt64(&result, player);
    Index = Online_Friends::FindIndex(Instance, controllerIndex, (XUID)v11->m_id);
    if ( Index != -1 )
    {
      v13 = Online_Friends::GetInstance();
      Online_Friends::GetGamertag(v13, controllerIndex, Index, dest, 0x24ui64);
    }
  }
  if ( !dest[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_chat_manager.cpp", 2310, ASSERT_TYPE_ASSERT, "(concernedGamertag[0] != '\\0')", (const char *)&queryFormat, "concernedGamertag[0] != '\\0'") )
    __debugbreak();
  v14 = OnlineChat::AddMessageToChat(i->pool, player, 0i64, dest, message, BYTE_VALUE);
  v15 = v14;
  if ( v14 )
  {
    AddMessageToChatHistory(i->pool, v14);
    m_chatType = i->pool[0].m_chatType;
    result.m_id = i->pool[0].m_chatId.m_id;
    chatType = m_chatType;
    LUI_Social_SendReceivedMessageEvent(controllerIndex, (const OnlineChatId *)&result, &chatType, v15);
  }
}

/*
==============
OnlineChatManager::SendSystemError
==============
*/
void OnlineChatManager::SendSystemError(OnlineChatManager *this, const int controllerIndex, const char *message)
{
  int v6; 
  OnlineChatPool *i; 

  if ( (unsigned int)controllerIndex >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_chat_manager.cpp", 2251, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, 8) )
    __debugbreak();
  if ( !message && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_chat_manager.cpp", 2252, ASSERT_TYPE_ASSERT, "(message)", (const char *)&queryFormat, "message") )
    __debugbreak();
  v6 = 0;
  for ( i = &s_onlineChatPool; i->pool[0].m_state != ACTIVE || i->pool[0].m_chatType != DODGE || i->pool[0].m_controllerIndex != controllerIndex; i = (OnlineChatPool *)((char *)i + 12848) )
  {
    if ( (unsigned int)++v6 >= 0x12 )
    {
      Com_PrintError(16, "[Chat] %s: Unable to send system error for controller %i because the errors chat is not setup. message: %s\n", "OnlineChatManager::SendSystemError", (unsigned int)controllerIndex, message);
      return;
    }
  }
  OnlineChatManager::SendChatEvent(this, i->pool, controllerIndex, message);
}

/*
==============
OnlineChatManager::SendSystemEvent
==============
*/
void OnlineChatManager::SendSystemEvent(OnlineChatManager *this, const int controllerIndex, const char *message)
{
  int v6; 
  OnlineChatPool *i; 

  if ( (unsigned int)controllerIndex >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_chat_manager.cpp", 2267, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, 8) )
    __debugbreak();
  if ( !message && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_chat_manager.cpp", 2268, ASSERT_TYPE_ASSERT, "(message)", (const char *)&queryFormat, "message") )
    __debugbreak();
  v6 = 0;
  for ( i = &s_onlineChatPool; i->pool[0].m_state != ACTIVE || i->pool[0].m_chatType || i->pool[0].m_controllerIndex != controllerIndex; i = (OnlineChatPool *)((char *)i + 12848) )
  {
    if ( (unsigned int)++v6 >= 0x12 )
    {
      Com_PrintError(16, "[Chat] %s: Unable to send system event for controller %i because the event chat is not setup. message: %s\n", "OnlineChatManager::SendSystemEvent", (unsigned int)controllerIndex, message);
      return;
    }
  }
  OnlineChatManager::SendChatEvent(this, i->pool, controllerIndex, message);
}

/*
==============
OnlineChatManager::SetTypingIndicatorForChat
==============
*/
void OnlineChatManager::SetTypingIndicatorForChat(OnlineChatManager *this, const OnlineChatId *chatId, const OnlineChatType *chatType, const bool isTyping)
{
  OnlineChatPool *v5; 
  unsigned int v6; 
  const char *v7; 

  v5 = &s_onlineChatPool;
  v6 = 0;
  while ( v5->pool[0].m_state == INACTIVE || v5->pool[0].m_chatType != *chatType || chatId->m_id != v5->pool[0].m_chatId.m_id )
  {
    ++v6;
    v5 = (OnlineChatPool *)((char *)v5 + 12848);
    if ( v6 >= 0x12 )
    {
      Com_PrintError(14, "[Chat] %s: No chat with id %zu\n", "OnlineChatManager::SetTypingIndicatorForChat", chatId->m_id);
      return;
    }
  }
  if ( v5->pool[0].m_chatType == (COUNT|DODGE|0x4) )
  {
    if ( v5->pool[0].m_state != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_chat_manager.cpp", 1023, ASSERT_TYPE_ASSERT, "(chat->GetState() == OnlineChatState::JOINED)", (const char *)&queryFormat, "chat->GetState() == OnlineChatState::JOINED") )
      __debugbreak();
    v7 = "false";
    if ( isTyping )
      v7 = "true";
    Com_Printf(14, "[Chat] %s: setting typing indicator to %s for chat %zu\n", "OnlineChatManager::SetTypingIndicatorForChat", v7, v5->pool[0].m_chatId.m_id);
  }
}

/*
==============
OnlineChatManager::SetTypingIndicatorForRemotePlayer
==============
*/
void OnlineChatManager::SetTypingIndicatorForRemotePlayer(OnlineChatManager *this, const OnlineChatId *chatId, const OnlineChatType *chatType, const unsigned __int64 id, const bool isTyping)
{
  OnlineChatPool *v6; 
  unsigned int v8; 
  OnlineChatMemberInfo *MemberFromChatById; 
  const char *v10; 

  v6 = &s_onlineChatPool;
  v8 = 0;
  while ( v6->pool[0].m_state == INACTIVE || v6->pool[0].m_chatType != *chatType || chatId->m_id != v6->pool[0].m_chatId.m_id )
  {
    ++v8;
    v6 = (OnlineChatPool *)((char *)v6 + 12848);
    if ( v8 >= 0x12 )
      return;
  }
  if ( v6->pool[0].m_state != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_chat_manager.cpp", 1363, ASSERT_TYPE_ASSERT, "(chat->GetState() == OnlineChatState::JOINED)", (const char *)&queryFormat, "chat->GetState() == OnlineChatState::JOINED") )
    __debugbreak();
  MemberFromChatById = OnlineChat::GetMemberFromChatById(v6->pool, id);
  if ( MemberFromChatById )
  {
    MemberFromChatById->isTyping = isTyping;
    LUI_Social_SendIsTypingEvent(v6->pool[0].m_controllerIndex, (const OnlineChatId)chatId->m_id, MemberFromChatById->gamerTag, isTyping);
    v10 = "ended";
    if ( isTyping )
      v10 = "began";
    Com_Printf(14, "[Chat] %s: Successfully received notification that player %zu has %s typing in chat %zu\n", "OnlineChatManager::SetTypingIndicatorForRemotePlayer", id, v10, v6->pool[0].m_chatId.m_id);
  }
}

/*
==============
OnlineChatManager::ShouldFilterProfanity
==============
*/
bool OnlineChatManager::ShouldFilterProfanity(OnlineChatManager *this, const int controllerIndex)
{
  return GamerProfile_GetChatProfanityFilterEnabled(controllerIndex);
}

/*
==============
OnlineChatManager::ShouldThrottleMessages
==============
*/
bool OnlineChatManager::ShouldThrottleMessages(OnlineChatManager *this)
{
  int Int_Internal_DebugName; 
  int v3; 
  int m_throttleMessageQueueStart; 
  int i; 
  __int64 v6; 
  const dvar_t *v7; 
  unsigned int flags; 

  Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DVARINT_online_chat_send_message_throttle_rate, "online_chat_send_message_throttle_rate");
  v3 = Sys_Milliseconds();
  m_throttleMessageQueueStart = this->m_throttleMessageQueueStart;
  for ( i = m_throttleMessageQueueStart + this->m_throttleMessageQueueCount; m_throttleMessageQueueStart < i; ++m_throttleMessageQueueStart )
  {
    v6 = ((unsigned __int64)m_throttleMessageQueueStart * (unsigned __int128)0x47AE147AE147AE15ui64) >> 64;
    if ( this->m_throttleMessageQueue[m_throttleMessageQueueStart - 50 * ((v6 + ((unsigned __int64)(m_throttleMessageQueueStart - v6) >> 1)) >> 5)] > v3 - Int_Internal_DebugName )
      break;
  }
  this->m_throttleMessageQueueStart = m_throttleMessageQueueStart;
  this->m_throttleMessageQueueCount = i - m_throttleMessageQueueStart;
  v7 = DVARINT_online_chat_send_message_throttle_count;
  if ( !DVARINT_online_chat_send_message_throttle_count && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_chat_send_message_throttle_count") )
    __debugbreak();
  if ( g_checkServerThread && Sys_IsAnyServerThreadWork() )
  {
    flags = v7->flags;
    if ( (flags & 0x81488) != 0 && (flags & 0x40000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 612, ASSERT_TYPE_ASSERT, "(!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & (((1 << 10) | (1 << 3) | (1 << 7) | ( 1 << 19 )) | (1 << 12)) ) || ( dvar->flags & ( 1 << 18 ) ))", "%s\n\tAccessing dvar '%s' from server context when we were not expected to, this can cause performance issues all the way to complete deadlocks.", "!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & SV_DVAR_LOAD_MODIFIED_MASK ) || ( dvar->flags & DVAR_DCONST )", v7->name) )
      __debugbreak();
  }
  return this->m_throttleMessageQueueCount >= v7->current.integer;
}

/*
==============
OnlineChatManager::SubscribeToChannel
==============
*/
void OnlineChatManager::SubscribeToChannel(OnlineChatManager *this, const int controllerIndex, CachedCreateChatCallback *cachedCallback)
{
  __int64 chatType; 
  DWServicesAccess *Instance; 
  DWMessaging *Messaging; 
  TaskCreateRequest *v9; 
  bdRemoteTask *v10; 
  TaskManager *v11; 
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  TaskCreateResult pTaskCreateResult; 
  TaskCreateRequest pTaskCreateRequest; 
  bdReference<bdRemoteTask> result; 

  pTaskCreateRequest.m_appTaskType = -1;
  memset(&pTaskCreateRequest.m_appSecondaryCallback, 0, 24);
  pTaskCreateRequest.m_onUpdateCallback = NULL;
  pTaskCreateRequest.m_cancelTaskOnSignoutEvent = 1;
  pTaskCreateRequest.m_timeoutInSeconds = 0;
  pTaskCreateResult.m_localTaskId = 0;
  pTaskCreateResult.m_task = NULL;
  pTaskCreateRequest.m_appData = cachedCallback;
  pTaskCreateRequest.m_onCompletionCallback = OnlineChatManager::SubscribeToChannelComplete;
  pTaskCreateRequest.m_controllerIndex = controllerIndex;
  chatType = cachedCallback->chatType;
  Instance = DWServicesAccess::GetInstance();
  Messaging = DWServicesAccess::GetMessaging(Instance, controllerIndex);
  v9 = (TaskCreateRequest *)DWMessaging::subscribeToChannel(Messaging, &result, s_chatDescription[chatType].dwCategory, cachedCallback->dwChannelInfo.m_channelID);
  if ( v9 != (TaskCreateRequest *)&pTaskCreateRequest.m_remoteDemonwareTask )
  {
    v10 = *(bdRemoteTask **)&v9->m_controllerIndex;
    pTaskCreateRequest.m_remoteDemonwareTask.m_ptr = v10;
    if ( v10 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v10->m_refCount, 1u);
  }
  if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result.m_ptr )
    ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
  if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr && (v11 = TaskManager::GetInstance(), TaskManager::CreateTask(v11, &pTaskCreateRequest, &pTaskCreateResult)) )
  {
    Com_Printf(14, "[Chat] %s: Subscribing chat id %zu\n", "OnlineChatManager::SubscribeToChannel", cachedCallback->dwChannelInfo.m_channelID);
  }
  else
  {
    Com_PrintError(14, "[Chat] %s: failed to subscribe to chat id %zu\n", "OnlineChatManager::SubscribeToChannel", cachedCallback->dwChannelInfo.m_channelID);
    OnlineChatManager::JoinChatFailed(this, controllerIndex, cachedCallback, -1);
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
OnlineChatManager::SubscribeToChannelComplete
==============
*/
void OnlineChatManager::SubscribeToChannelComplete(GenericTask *task, eTaskManagerTaskState state)
{
  CachedCreateChatCallback *m_appData; 
  int ErrorCode; 

  m_appData = (CachedCreateChatCallback *)task->m_appData;
  if ( state )
  {
    ErrorCode = bdRemoteTask::getErrorCode(task->m_remoteDemonwareTask.m_ptr);
    OnlineChatManager::JoinChatFailed(&OnlineChatManager::s_instance, task->m_controllerIndex, m_appData, ErrorCode);
  }
  else
  {
    OnlineChatManager::GetChannelInfo(&OnlineChatManager::s_instance, task->m_controllerIndex, (CachedCreateChatCallback *)task->m_appData);
  }
}

/*
==============
OnlineChatManager::TrackMessageToThrottle
==============
*/
void OnlineChatManager::TrackMessageToThrottle(OnlineChatManager *this)
{
  this->m_throttleMessageQueue[(this->m_throttleMessageQueueCount + this->m_throttleMessageQueueStart) % 0x32ui64] = Sys_Milliseconds();
  ++this->m_throttleMessageQueueCount;
}

/*
==============
OnlineChatManager::TrackPending
==============
*/
void OnlineChatManager::TrackPending(OnlineChatManager *this, const OnlineChatManager::ChatPendingType pendingType, const OnlineChatId *chatId, const OnlineChatType *chatType)
{
  __int64 v4; 
  __int64 v8; 
  __int128 v11; 

  v4 = pendingType;
  _RDI = this;
  if ( OnlineChatManager::IsChatPending(this, pendingType, chatId, chatType) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_chat_manager.cpp", 1431, ASSERT_TYPE_ASSERT, "(!IsChatPending( pendingType, chatId, chatType ))", (const char *)&queryFormat, "!IsChatPending( pendingType, chatId, chatType )") )
    __debugbreak();
  v8 = v4;
  if ( _RDI->m_pendingLists[v8].listCount >= 0x12u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_chat_manager.cpp", 1435, ASSERT_TYPE_ASSERT, "(m_pendingLists[pendingTypeIndex].listCount < ( sizeof( *array_counter( m_pendingLists[pendingTypeIndex].list ) ) + 0 ))", (const char *)&queryFormat, "m_pendingLists[pendingTypeIndex].listCount < ARRAY_COUNT( m_pendingLists[pendingTypeIndex].list )") )
    __debugbreak();
  *(OnlineChatId *)&v11 = (OnlineChatId)chatId->m_id;
  SDWORD2(v11) = *chatType;
  __asm { vmovups xmm0, [rsp+48h+var_18] }
  _RAX = v8 * 296 + 16 * (_RDI->m_pendingLists[v8].listCount + 4i64);
  __asm { vmovups xmmword ptr [rax+rdi], xmm0 }
  ++_RDI->m_pendingLists[v8].listCount;
}

/*
==============
OnlineChatManager::UnmuteMemberText
==============
*/
char OnlineChatManager::UnmuteMemberText(OnlineChatManager *this, const OnlineChatId *onlineChatId, const OnlineChatType *onlineChatType, const unsigned __int64 memberId)
{
  OnlineChatPool *v5; 
  unsigned int v6; 
  OnlineChatMemberInfo *MemberFromChatById; 

  v5 = &s_onlineChatPool;
  v6 = 0;
  while ( v5->pool[0].m_state == INACTIVE || v5->pool[0].m_chatType != *onlineChatType || onlineChatId->m_id != v5->pool[0].m_chatId.m_id )
  {
    ++v6;
    v5 = (OnlineChatPool *)((char *)v5 + 12848);
    if ( v6 >= 0x12 )
    {
      Com_PrintError(14, "[Chat] %s: Invalid chat id %zu\n", "OnlineChatManager::UnmuteMemberText", onlineChatId->m_id);
      return 0;
    }
  }
  MemberFromChatById = OnlineChat::GetMemberFromChatById(v5->pool, memberId);
  if ( !MemberFromChatById )
  {
    Com_PrintError(14, "[Chat] %s: Invalid chat member id %zu\n", "OnlineChatManager::UnmuteMemberText", memberId);
    return 0;
  }
  MemberFromChatById->isTextMuted = 0;
  return 1;
}

/*
==============
OnlineChatManager::UnsubscribeFromAllChannels
==============
*/
void OnlineChatManager::UnsubscribeFromAllChannels(OnlineChatManager *this, const int controllerIndex, const char *category)
{
  DWServicesAccess *Instance; 
  DWMessaging *Messaging; 
  TaskCreateRequest *v7; 
  bdRemoteTask *v8; 
  TaskManager *v9; 
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  TaskCreateResult pTaskCreateResult; 
  TaskCreateRequest pTaskCreateRequest; 
  bdReference<bdRemoteTask> result; 

  pTaskCreateRequest.m_appTaskType = -1;
  memset(&pTaskCreateRequest.m_appData, 0, 32);
  pTaskCreateRequest.m_onUpdateCallback = NULL;
  pTaskCreateRequest.m_cancelTaskOnSignoutEvent = 1;
  pTaskCreateRequest.m_timeoutInSeconds = 0;
  pTaskCreateResult.m_localTaskId = 0;
  pTaskCreateResult.m_task = NULL;
  pTaskCreateRequest.m_onCompletionCallback = OnlineChatManager::UnsubscribeFromAllChannelsCallback;
  pTaskCreateRequest.m_controllerIndex = controllerIndex;
  Instance = DWServicesAccess::GetInstance();
  Messaging = DWServicesAccess::GetMessaging(Instance, controllerIndex);
  v7 = (TaskCreateRequest *)DWMessaging::unsubscribeFromCategory(Messaging, &result, category);
  if ( v7 != (TaskCreateRequest *)&pTaskCreateRequest.m_remoteDemonwareTask )
  {
    v8 = *(bdRemoteTask **)&v7->m_controllerIndex;
    pTaskCreateRequest.m_remoteDemonwareTask.m_ptr = v8;
    if ( v8 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v8->m_refCount, 1u);
  }
  if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result.m_ptr )
    ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
  if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr && (v9 = TaskManager::GetInstance(), TaskManager::CreateTask(v9, &pTaskCreateRequest, &pTaskCreateResult)) )
    Com_Printf(14, "[Chat] %s: Unsubscribing to all chats on the backend\n", "OnlineChatManager::UnsubscribeFromAllChannels");
  else
    Com_PrintError(14, "[Chat] %s: Failed unsubscribing to all chats on the backend\n", "OnlineChatManager::UnsubscribeFromAllChannels");
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
OnlineChatManager::UnsubscribeFromAllChannelsCallback
==============
*/
void OnlineChatManager::UnsubscribeFromAllChannelsCallback(GenericTask *task, eTaskManagerTaskState state)
{
  __int64 m_controllerIndex; 

  m_controllerIndex = (unsigned int)task->m_controllerIndex;
  if ( state )
    Com_PrintError(14, "[Chat] %s: FAILURE Unsubscribed to all chats on the backend (controller %i)\n", "OnlineChatManager::UnsubscribeFromAllChannelsCallback", m_controllerIndex);
  else
    Com_Printf(14, "[Chat] %s: SUCCESS Unsubscribed to all chats on the backend (controller %i)\n", "OnlineChatManager::UnsubscribeFromAllChannelsCallback", m_controllerIndex);
}

/*
==============
OnlineChatManager::onChatChannelUserPromoted
==============
*/
void OnlineChatManager::onChatChannelUserPromoted(OnlineChatManager *this, const bdChannelInfo *channel, const bdChannelMember *previousAdmin, const bdChannelMember *newAdmin)
{
  unsigned __int64 m_channelID; 
  OnlineChatId chatId; 
  OnlineChat *chatOut; 

  m_channelID = channel->m_channelID;
  if ( !m_channelID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_chat_types.h", 16, ASSERT_TYPE_ASSERT, "(_id != 0)", "%s\n\tShould call OnlineChatId.Clear() instead of SetID()", "_id != 0") )
    __debugbreak();
  chatId.m_id = m_channelID;
  chatOut = NULL;
  if ( OnlineChatManager::GetChat(this, &chatId, channel->_bytes_20, &chatOut) )
    OnlineChat::PromoteToHost(chatOut, *(_QWORD *)newAdmin->_bytes_20);
}

