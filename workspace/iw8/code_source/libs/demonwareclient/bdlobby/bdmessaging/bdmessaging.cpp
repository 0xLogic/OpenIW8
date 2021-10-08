/*
==============
bdMessaging::bdMessaging
==============
*/

void __fastcall bdMessaging::bdMessaging(bdMessaging *this, bdRemoteTaskManager *const remoteTaskManager)
{
  ??0bdMessaging@@IEAA@QEAVbdRemoteTaskManager@@@Z(this, remoteTaskManager);
}

/*
==============
bdMessaging::queryMsgGroupInfo
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMessaging::queryMsgGroupInfo(bdMessaging *this, bdReference<bdRemoteTask> *result, const bdMessagingGroup *groupsToQuery, const unsigned int numGroupsToQuery, bdMessagingGroupInfo *results)
{
  return ?queryMsgGroupInfo@bdMessaging@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBVbdMessagingGroup@@IQEAVbdMessagingGroupInfo@@@Z(this, result, groupsToQuery, numGroupsToQuery, results);
}

/*
==============
bdMessaging::setChannelPassword
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMessaging::setChannelPassword(bdMessaging *this, bdReference<bdRemoteTask> *result, const char *const category, const unsigned __int64 channelID, const unsigned __int64 newPassword)
{
  return ?setChannelPassword@bdMessaging@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBD_K1@Z(this, result, category, channelID, newPassword);
}

/*
==============
bdMessaging::whisperToChannelMember
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMessaging::whisperToChannelMember(bdMessaging *this, bdReference<bdRemoteTask> *result, const unsigned __int64 channelID, const unsigned __int64 userID, const void *const message, const unsigned int messageSize, const unsigned int messageType)
{
  return ?whisperToChannelMember@bdMessaging@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_K0QEBXII@Z(this, result, channelID, userID, message, messageSize, messageType);
}

/*
==============
bdMessaging::promoteToChannelAdmin
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMessaging::promoteToChannelAdmin(bdMessaging *this, bdReference<bdRemoteTask> *result, const char *const category, const unsigned __int64 channelID, const unsigned __int64 userToPromote)
{
  return ?promoteToChannelAdmin@bdMessaging@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBD_K1@Z(this, result, category, channelID, userToPromote);
}

/*
==============
bdMessaging::broadcastMessage
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMessaging::broadcastMessage(bdMessaging *this, bdReference<bdRemoteTask> *result, const void *message, unsigned int msgSize)
{
  return ?broadcastMessage@bdMessaging@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBXI@Z(this, result, message, msgSize);
}

/*
==============
bdMessaging::kickFromChannel
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMessaging::kickFromChannel(bdMessaging *this, bdReference<bdRemoteTask> *result, const char *const category, const unsigned __int64 channelID, const unsigned __int64 userID, unsigned int kickReason, bool alsoBan)
{
  return ?kickFromChannel@bdMessaging@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBD_K1I_N@Z(this, result, category, channelID, userID, kickReason, alsoBan);
}

/*
==============
bdMessaging::createChatChannelWithID
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMessaging::createChatChannelWithID(bdMessaging *this, bdReference<bdRemoteTask> *result, bdChannelInfo *const channelInfo, const unsigned __int64 channelID)
{
  return ?createChatChannelWithID@bdMessaging@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEAVbdChannelInfo@@_K@Z(this, result, channelInfo, channelID);
}

/*
==============
bdMessaging::getChannelsInfo
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMessaging::getChannelsInfo(bdMessaging *this, bdReference<bdRemoteTask> *result, const unsigned int numChannelIDs, const unsigned __int64 *channelIDs, bdChannelInfo *channelInfos)
{
  return ?getChannelsInfo@bdMessaging@@QEAA?AV?$bdReference@VbdRemoteTask@@@@IQEB_KQEAVbdChannelInfo@@@Z(this, result, numChannelIDs, channelIDs, channelInfos);
}

/*
==============
bdMessaging::getChannelsInfo
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMessaging::getChannelsInfo(bdMessaging *this, bdReference<bdRemoteTask> *result, bdChannelGetChannelInfosResponse *response, const unsigned int numChannelIDs, const char *const *categories, const unsigned __int64 *channelIDs)
{
  return ?getChannelsInfo@bdMessaging@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEAVbdChannelGetChannelInfosResponse@@IQEBQEBDQEB_K@Z(this, result, response, numChannelIDs, categories, channelIDs);
}

/*
==============
bdMessaging::deleteNotifications
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMessaging::deleteNotifications(bdMessaging *this, bdReference<bdRemoteTask> *result, const unsigned __int64 *notificationIDs, const unsigned int numNotifications)
{
  return ?deleteNotifications@bdMessaging@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEB_KI@Z(this, result, notificationIDs, numNotifications);
}

/*
==============
bdMessaging::promoteToChannelAdmin
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMessaging::promoteToChannelAdmin(bdMessaging *this, bdReference<bdRemoteTask> *result, const unsigned __int64 channelID, const unsigned __int64 userToPromote)
{
  return ?promoteToChannelAdmin@bdMessaging@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_K0@Z(this, result, channelID, userToPromote);
}

/*
==============
bdMessaging::getChannelMembers
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMessaging::getChannelMembers(bdMessaging *this, bdReference<bdRemoteTask> *result, const unsigned __int64 channelID, bdChannelMember *channelMembers, const unsigned int maxNumMembers)
{
  return ?getChannelMembers@bdMessaging@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KQEAVbdChannelMember@@I@Z(this, result, channelID, channelMembers, maxNumMembers);
}

/*
==============
bdMessaging::getChannelMembers
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMessaging::getChannelMembers(bdMessaging *this, bdReference<bdRemoteTask> *result, bdChannelGetMembersResponse *response, const char *const category, const unsigned __int64 channelID, const unsigned int maxNumResult)
{
  return ?getChannelMembers@bdMessaging@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEAVbdChannelGetMembersResponse@@QEBD_KI@Z(this, result, response, category, channelID, maxNumResult);
}

/*
==============
bdMessaging::sendGlobalInstantMessage
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMessaging::sendGlobalInstantMessage(bdMessaging *this, bdReference<bdRemoteTask> *result, const unsigned __int64 recipientUID, const void *const message, const unsigned int msgSize)
{
  return ?sendGlobalInstantMessage@bdMessaging@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KQEBXI@Z(this, result, recipientUID, message, msgSize);
}

/*
==============
bdMessaging::unsubscribeFromCategory
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMessaging::unsubscribeFromCategory(bdMessaging *this, bdReference<bdRemoteTask> *result, const char *const category)
{
  return ?unsubscribeFromCategory@bdMessaging@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBD@Z(this, result, category);
}

/*
==============
bdMessaging::unsubscribeAllMsgGroups
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMessaging::unsubscribeAllMsgGroups(bdMessaging *this, bdReference<bdRemoteTask> *result)
{
  return ?unsubscribeAllMsgGroups@bdMessaging@@QEAA?AV?$bdReference@VbdRemoteTask@@@@XZ(this, result);
}

/*
==============
bdMessaging::clearChannelPassword
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMessaging::clearChannelPassword(bdMessaging *this, bdReference<bdRemoteTask> *result, const unsigned __int64 channelID)
{
  return ?clearChannelPassword@bdMessaging@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_K@Z(this, result, channelID);
}

/*
==============
bdMessaging::createOrSubscribeToChannel
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMessaging::createOrSubscribeToChannel(bdMessaging *this, bdReference<bdRemoteTask> *result, bdChannelCreateChannelResponse *response, const char *const category, const unsigned __int64 channelID, const unsigned __int64 password)
{
  return ?createOrSubscribeToChannel@bdMessaging@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEAVbdChannelCreateChannelResponse@@QEBD_K2@Z(this, result, response, category, channelID, password);
}

/*
==============
bdMessaging::unsubscribeFromChannel
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMessaging::unsubscribeFromChannel(bdMessaging *this, bdReference<bdRemoteTask> *result, const unsigned __int64 channelID)
{
  return ?unsubscribeFromChannel@bdMessaging@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_K@Z(this, result, channelID);
}

/*
==============
bdMessaging::unsubscribeFromChannel
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMessaging::unsubscribeFromChannel(bdMessaging *this, bdReference<bdRemoteTask> *result, const char *const category, const unsigned __int64 channelID)
{
  return ?unsubscribeFromChannel@bdMessaging@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBD_K@Z(this, result, category, channelID);
}

/*
==============
bdMessaging::subscribeToChannel
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMessaging::subscribeToChannel(bdMessaging *this, bdReference<bdRemoteTask> *result, const unsigned __int64 channelID)
{
  return ?subscribeToChannel@bdMessaging@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_K@Z(this, result, channelID);
}

/*
==============
bdMessaging::subscribeToChannel
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMessaging::subscribeToChannel(bdMessaging *this, bdReference<bdRemoteTask> *result, const char *const category, const unsigned __int64 channelID, const unsigned __int64 password)
{
  return ?subscribeToChannel@bdMessaging@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBD_K1@Z(this, result, category, channelID, password);
}

/*
==============
bdMessaging::listMsgGroupSubscriptions
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMessaging::listMsgGroupSubscriptions(bdMessaging *this, bdReference<bdRemoteTask> *result, bdMessagingGroup *subscriptions, const unsigned int maxNumSubscriptions)
{
  return ?listMsgGroupSubscriptions@bdMessaging@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEAVbdMessagingGroup@@I@Z(this, result, subscriptions, maxNumSubscriptions);
}

/*
==============
bdMessaging::~bdMessaging
==============
*/

void __fastcall bdMessaging::~bdMessaging(bdMessaging *this)
{
  ??1bdMessaging@@QEAA@XZ(this);
}

/*
==============
bdMessaging::whisperToChannelMember
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMessaging::whisperToChannelMember(bdMessaging *this, bdReference<bdRemoteTask> *result, const char *const category, const unsigned __int64 channelID, const unsigned __int64 userID, const void *const message, const unsigned int messageSize, const unsigned int messageType)
{
  return ?whisperToChannelMember@bdMessaging@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBD_K1QEBXII@Z(this, result, category, channelID, userID, message, messageSize, messageType);
}

/*
==============
bdMessaging::createChatChannel
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMessaging::createChatChannel(bdMessaging *this, bdReference<bdRemoteTask> *result, bdChannelInfo *const channelInfo)
{
  return ?createChatChannel@bdMessaging@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEAVbdChannelInfo@@@Z(this, result, channelInfo);
}

/*
==============
bdMessaging::setChannelPassword
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMessaging::setChannelPassword(bdMessaging *this, bdReference<bdRemoteTask> *result, const unsigned __int64 channelID, const unsigned __int64 newPassword)
{
  return ?setChannelPassword@bdMessaging@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_K0@Z(this, result, channelID, newPassword);
}

/*
==============
bdMessaging::kickFromChannel
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMessaging::kickFromChannel(bdMessaging *this, bdReference<bdRemoteTask> *result, const unsigned __int64 channelID, const unsigned __int64 userID, unsigned int kickReason, bool alsoBan)
{
  return ?kickFromChannel@bdMessaging@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_K0I_N@Z(this, result, channelID, userID, kickReason, alsoBan);
}

/*
==============
bdMessaging::unsubscribeMsgGroupsByCategory
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMessaging::unsubscribeMsgGroupsByCategory(bdMessaging *this, bdReference<bdRemoteTask> *result, const unsigned __int8 *categories, unsigned int numCategories)
{
  return ?unsubscribeMsgGroupsByCategory@bdMessaging@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBEI@Z(this, result, categories, numCategories);
}

/*
==============
bdMessaging::postToMsgGroup
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMessaging::postToMsgGroup(bdMessaging *this, bdReference<bdRemoteTask> *result, const bdMessagingGroup *group, const void *message, unsigned int msgSize)
{
  return ?postToMsgGroup@bdMessaging@@QEAA?AV?$bdReference@VbdRemoteTask@@@@VbdMessagingGroup@@PEBXI@Z(this, result, group, message, msgSize);
}

/*
==============
bdMessaging::getNotifications
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMessaging::getNotifications(bdMessaging *this, bdReference<bdRemoteTask> *result, bdNotification *notifications, const unsigned int startIndex, const unsigned int numNotifications, const bool deleteOnRead)
{
  return ?getNotifications@bdMessaging@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEAVbdNotification@@II_N@Z(this, result, notifications, startIndex, numNotifications, deleteOnRead);
}

/*
==============
bdMessaging::sendGlobalInstantMessages
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMessaging::sendGlobalInstantMessages(bdMessaging *this, bdReference<bdRemoteTask> *result, const unsigned __int64 *recipientUIDs, unsigned int numRecipients, const void *message, unsigned int msgSize)
{
  return ?sendGlobalInstantMessages@bdMessaging@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEB_KIPEBXI@Z(this, result, recipientUIDs, numRecipients, message, msgSize);
}

/*
==============
bdMessaging::getChannelList
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMessaging::getChannelList(bdMessaging *this, bdReference<bdRemoteTask> *result, bdChannelInfo *channelInfos, const unsigned int maxNumChannels)
{
  return ?getChannelList@bdMessaging@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEAVbdChannelInfo@@I@Z(this, result, channelInfos, maxNumChannels);
}

/*
==============
bdMessaging::sendToChannel
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMessaging::sendToChannel(bdMessaging *this, bdReference<bdRemoteTask> *result, const char *const category, const unsigned __int64 channelID, const void *const message, const unsigned int messageSize, const unsigned int messageType)
{
  return ?sendToChannel@bdMessaging@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBD_KQEBXII@Z(this, result, category, channelID, message, messageSize, messageType);
}

/*
==============
bdMessaging::sendToChannel
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMessaging::sendToChannel(bdMessaging *this, bdReference<bdRemoteTask> *result, const unsigned __int64 channelID, const void *const message, const unsigned int messageSize, const unsigned int messageType)
{
  return ?sendToChannel@bdMessaging@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KQEBXII@Z(this, result, channelID, message, messageSize, messageType);
}

/*
==============
bdMessaging::clearChannelPassword
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMessaging::clearChannelPassword(bdMessaging *this, bdReference<bdRemoteTask> *result, const char *const category, const unsigned __int64 channelID)
{
  return ?clearChannelPassword@bdMessaging@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBD_K@Z(this, result, category, channelID);
}

/*
==============
bdMessaging::subscribeToChannel
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMessaging::subscribeToChannel(bdMessaging *this, bdReference<bdRemoteTask> *result, const unsigned __int64 channelID, const unsigned __int64 password)
{
  return ?subscribeToChannel@bdMessaging@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_K0@Z(this, result, channelID, password);
}

/*
==============
bdMessaging::manageMsgGroupsSubscriptions
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMessaging::manageMsgGroupsSubscriptions(bdMessaging *this, bdReference<bdRemoteTask> *result, const bdMessagingGroup *unsubscribeGroups, unsigned int numUnsubscribeGroups, const bdMessagingGroup *subscribeGroups, unsigned int numSubscribeGroups, bdMsgGroupSubscriptionFailure *subscribeFailures, const unsigned int maxSubscribeFailures)
{
  return ?manageMsgGroupsSubscriptions@bdMessaging@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBVbdMessagingGroup@@I0IQEAVbdMsgGroupSubscriptionFailure@@I@Z(this, result, unsubscribeGroups, numUnsubscribeGroups, subscribeGroups, numSubscribeGroups, subscribeFailures, maxSubscribeFailures);
}

/*
==============
bdMessaging::bdMessaging
==============
*/
void bdMessaging::bdMessaging(bdMessaging *this, bdRemoteTaskManager *const remoteTaskManager)
{
  this->m_remoteTaskManager = remoteTaskManager;
}

/*
==============
bdMessaging::~bdMessaging
==============
*/
void bdMessaging::~bdMessaging(bdMessaging *this)
{
  ;
}

/*
==============
bdMessaging::broadcastMessage
==============
*/
bdReference<bdRemoteTask> *bdMessaging::broadcastMessage(bdMessaging *this, bdReference<bdRemoteTask> *result, const void *message, unsigned int msgSize)
{
  bdTaskByteBuffer *v7; 
  unsigned int v8; 
  bdTaskByteBuffer *v9; 
  bdTaskByteBuffer *v10; 
  bdLobbyErrorCode started; 
  bdLobbyErrorCode v13; 
  bdReference<bdTaskByteBuffer> buffer; 
  __int64 v15; 
  bdTaskByteBuffer *v16; 

  v15 = -2i64;
  v7 = NULL;
  result->m_ptr = NULL;
  v8 = 1024;
  if ( msgSize < 0x400 )
    v8 = msgSize;
  if ( v8 < msgSize )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "messaging", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmessaging\\bdmessaging.cpp", "bdMessaging::broadcastMessage", 0x400u, "Exceeded maximum broadcast message size, data will be truncated.");
  v9 = (bdTaskByteBuffer *)bdMemory::allocate(0x58ui64);
  v16 = v9;
  if ( v9 )
  {
    bdTaskByteBuffer::bdTaskByteBuffer(v9, v8 + 78, 1);
    v7 = v10;
  }
  buffer.m_ptr = v7;
  if ( v7 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v7->m_refCount, 1u);
  bdRemoteTaskManager::initTaskBuffer(&buffer, 0x66u, 4u);
  if ( bdByteBuffer::writeBlob(buffer.m_ptr, message, v8) )
  {
    started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &buffer);
    if ( started )
    {
      v13 = started;
      bdLogMessage(BD_LOG_WARNING, "warn/", "messaging", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmessaging\\bdmessaging.cpp", "bdMessaging::broadcastMessage", 0x40Du, "Failed to start tasks: Error %i", v13);
    }
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "messaging", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmessaging\\bdmessaging.cpp", "bdMessaging::broadcastMessage", 0x412u, "Failed to write param into buffer.");
  }
  if ( buffer.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && buffer.m_ptr )
    ((void (__fastcall *)(bdTaskByteBuffer *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr, 1i64);
  return result;
}

/*
==============
bdMessaging::clearChannelPassword
==============
*/
bdReference<bdRemoteTask> *bdMessaging::clearChannelPassword(bdMessaging *this, bdReference<bdRemoteTask> *result, const char *const category, const unsigned __int64 channelID)
{
  bdLobbyErrorCode started; 
  bdStructBufferTask *m_ptr; 
  bdLobbyErrorCode v9; 
  bdReference<bdStructBufferTask> newTask; 
  __int64 v11; 
  bdChannelSetChannelPasswordRequest request; 

  v11 = -2i64;
  newTask.m_ptr = NULL;
  bdChannelSetChannelPasswordRequest::bdChannelSetChannelPasswordRequest(&request, category, channelID, 0i64);
  started = bdRemoteTaskManager::startStructTask(this->m_remoteTaskManager, &newTask, 0xC6u, 0xAu, &request, NULL, NULL);
  if ( started )
  {
    v9 = started;
    bdLogMessage(BD_LOG_WARNING, "warn/", "messaging", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmessaging\\bdmessaging.cpp", "bdMessaging::setChannelPassword", 0x229u, "Failed to start task: Error %i", v9);
  }
  m_ptr = newTask.m_ptr;
  result->m_ptr = newTask.m_ptr;
  if ( m_ptr )
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
  bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&request.__vftable + 2));
  bdReferencable::~bdReferencable((bdReferencable *)(&request.m_password + 1));
  if ( newTask.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&newTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && newTask.m_ptr )
    ((void (__fastcall *)(bdStructBufferTask *, __int64))newTask.m_ptr->~bdReferencable)(newTask.m_ptr, 1i64);
  return result;
}

/*
==============
bdMessaging::clearChannelPassword
==============
*/
bdReference<bdRemoteTask> *bdMessaging::clearChannelPassword(bdMessaging *this, bdReference<bdRemoteTask> *result, const unsigned __int64 channelID)
{
  bdTaskByteBuffer *v6; 
  bdTaskByteBuffer *v7; 
  bdTaskByteBuffer *v8; 
  bdLobbyErrorCode started; 
  bdLobbyErrorCode v11; 
  bdReference<bdTaskByteBuffer> buffer; 

  v6 = NULL;
  result->m_ptr = NULL;
  v7 = (bdTaskByteBuffer *)bdMemory::allocate(0x58ui64);
  if ( v7 )
  {
    bdTaskByteBuffer::bdTaskByteBuffer(v7, 0x5Au, 1);
    v6 = v8;
  }
  buffer.m_ptr = v6;
  if ( v6 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v6->m_refCount, 1u);
  bdRemoteTaskManager::initTaskBuffer(&buffer, 0xBu, 0xCu);
  if ( bdByteBuffer::writeUInt64(buffer.m_ptr, channelID) && bdByteBuffer::writeUInt64(buffer.m_ptr, 0i64) )
  {
    started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &buffer);
    if ( started )
    {
      v11 = started;
      bdLogMessage(BD_LOG_WARNING, "warn/", "messaging", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmessaging\\bdmessaging.cpp", "bdMessaging::setChannelPassword", 0x214u, "Failed to start task: Error %i", v11);
    }
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "messaging", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmessaging\\bdmessaging.cpp", "bdMessaging::setChannelPassword", 0x219u, "Failed to serialize the task buffer.");
  }
  if ( buffer.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && buffer.m_ptr )
    ((void (__fastcall *)(bdTaskByteBuffer *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr, 1i64);
  return result;
}

/*
==============
bdMessaging::createChatChannel
==============
*/
bdReference<bdRemoteTask> *bdMessaging::createChatChannel(bdMessaging *this, bdReference<bdRemoteTask> *result, bdChannelInfo *const channelInfo)
{
  bdTaskByteBuffer *v6; 
  bdTaskByteBuffer *v7; 
  bdTaskByteBuffer *v8; 
  bdLobbyErrorCode started; 
  bdLobbyErrorCode v11; 
  bdReference<bdTaskByteBuffer> buffer; 
  bdReference<bdRemoteTask> *v13; 
  bdTaskByteBuffer *v14; 

  v13 = result;
  v6 = NULL;
  result->m_ptr = NULL;
  v7 = (bdTaskByteBuffer *)bdMemory::allocate(0x58ui64);
  v14 = v7;
  if ( v7 )
  {
    bdTaskByteBuffer::bdTaskByteBuffer(v7, 0x48u, 1);
    v6 = v8;
  }
  buffer.m_ptr = v6;
  if ( v6 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v6->m_refCount, 1u);
  bdRemoteTaskManager::initTaskBuffer(&buffer, 0xBu, 0xDu);
  started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &buffer);
  if ( started )
  {
    v11 = started;
    bdLogMessage(BD_LOG_WARNING, "warn/", "messaging", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmessaging\\bdmessaging.cpp", "bdMessaging::createChatChannel", 0x6Fu, "Failed to start task: Error %i", v11);
  }
  else
  {
    bdRemoteTask::setTaskResult(result->m_ptr, channelInfo, 1u);
  }
  if ( buffer.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && buffer.m_ptr )
    ((void (__fastcall *)(bdTaskByteBuffer *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr, 1i64);
  return result;
}

/*
==============
bdMessaging::createChatChannelWithID
==============
*/
bdReference<bdRemoteTask> *bdMessaging::createChatChannelWithID(bdMessaging *this, bdReference<bdRemoteTask> *result, bdChannelInfo *const channelInfo, const unsigned __int64 channelID)
{
  bdTaskByteBuffer *v8; 
  bdTaskByteBuffer *v9; 
  bdTaskByteBuffer *v10; 
  bdLobbyErrorCode started; 
  bdLobbyErrorCode v13; 
  bdReference<bdTaskByteBuffer> buffer; 
  __int64 v15; 
  bdTaskByteBuffer *v16; 

  v15 = -2i64;
  v8 = NULL;
  result->m_ptr = NULL;
  v9 = (bdTaskByteBuffer *)bdMemory::allocate(0x58ui64);
  v16 = v9;
  if ( v9 )
  {
    bdTaskByteBuffer::bdTaskByteBuffer(v9, 0x48u, 1);
    v8 = v10;
  }
  buffer.m_ptr = v8;
  if ( v8 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v8->m_refCount, 1u);
  bdRemoteTaskManager::initTaskBuffer(&buffer, 0xBu, 0x10u);
  if ( bdByteBuffer::writeUInt64(buffer.m_ptr, channelID) )
  {
    started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &buffer);
    if ( started )
    {
      v13 = started;
      bdLogMessage(BD_LOG_WARNING, "warn/", "messaging", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmessaging\\bdmessaging.cpp", "bdMessaging::createChatChannelWithID", 0x86u, "Failed to start task: Error %i", v13);
    }
    else
    {
      bdRemoteTask::setTaskResult(result->m_ptr, channelInfo, 1u);
    }
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "messaging", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmessaging\\bdmessaging.cpp", "bdMessaging::createChatChannelWithID", 0x8Fu, "Failed to serialize the task buffer.");
  }
  if ( buffer.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && buffer.m_ptr )
    ((void (__fastcall *)(bdTaskByteBuffer *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr, 1i64);
  return result;
}

/*
==============
bdMessaging::createOrSubscribeToChannel
==============
*/
bdReference<bdRemoteTask> *bdMessaging::createOrSubscribeToChannel(bdMessaging *this, bdReference<bdRemoteTask> *result, bdChannelCreateChannelResponse *response, const char *const category, const unsigned __int64 channelID, const unsigned __int64 password)
{
  bdLobbyErrorCode started; 
  bdStructBufferTask *m_ptr; 
  bdLobbyErrorCode v12; 
  bdReference<bdStructBufferTask> newTask; 
  __int64 v14; 
  GeneralChannelRequest request; 

  v14 = -2i64;
  newTask.m_ptr = NULL;
  GeneralChannelRequest::GeneralChannelRequest(&request, category, channelID, password);
  started = bdRemoteTaskManager::startStructTask(this->m_remoteTaskManager, &newTask, 0xC6u, 6u, &request, response, NULL);
  if ( started )
  {
    v12 = started;
    bdLogMessage(BD_LOG_WARNING, "warn/", "messaging", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmessaging\\bdmessaging.cpp", "bdMessaging::createOrSubscribeToChannel", 0xA1u, "Failed to start task: Error %i", v12);
  }
  m_ptr = newTask.m_ptr;
  result->m_ptr = newTask.m_ptr;
  if ( m_ptr )
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
  bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&request.__vftable + 2));
  bdReferencable::~bdReferencable((bdReferencable *)(&request.m_password + 1));
  if ( newTask.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&newTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && newTask.m_ptr )
    ((void (__fastcall *)(bdStructBufferTask *, __int64))newTask.m_ptr->~bdReferencable)(newTask.m_ptr, 1i64);
  return result;
}

/*
==============
bdMessaging::deleteNotifications
==============
*/
bdReference<bdRemoteTask> *bdMessaging::deleteNotifications(bdMessaging *this, bdReference<bdRemoteTask> *result, const unsigned __int64 *notificationIDs, const unsigned int numNotifications)
{
  __int64 v4; 
  bdTaskByteBuffer *v8; 
  unsigned int v9; 
  bdTaskByteBuffer *v10; 
  bdTaskByteBuffer *v11; 
  bool v12; 
  __int64 v13; 
  bdLobbyErrorCode started; 
  bdReference<bdTaskByteBuffer> buffer; 
  __int64 v17; 
  bdTaskByteBuffer *v18; 

  v17 = -2i64;
  v4 = numNotifications;
  v8 = NULL;
  result->m_ptr = NULL;
  v9 = 9 * numNotifications + 72;
  v10 = (bdTaskByteBuffer *)bdMemory::allocate(0x58ui64);
  v18 = v10;
  if ( v10 )
  {
    bdTaskByteBuffer::bdTaskByteBuffer(v10, v9, 1);
    v8 = v11;
  }
  buffer.m_ptr = v8;
  if ( v8 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v8->m_refCount, 1u);
  bdRemoteTaskManager::initTaskBuffer(&buffer, 6u, 6u);
  v12 = 1;
  if ( !(_DWORD)v4 )
    goto LABEL_14;
  v13 = v4;
  do
  {
    v12 = v12 && bdByteBuffer::writeUInt64(buffer.m_ptr, *notificationIDs++);
    --v13;
  }
  while ( v13 );
  if ( v12 )
  {
LABEL_14:
    started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &buffer);
    if ( started )
      bdLogMessage(BD_LOG_WARNING, "warn/", "messaging", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmessaging\\bdmessaging.cpp", "bdMessaging::deleteNotifications", 0x57u, "Failed to start task: Error %i", started);
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "messaging", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmessaging\\bdmessaging.cpp", "bdMessaging::deleteNotifications", 0x5Cu, "Failed to serialize the task buffer.");
  }
  if ( buffer.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && buffer.m_ptr )
    ((void (__fastcall *)(bdTaskByteBuffer *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr, 1i64);
  return result;
}

/*
==============
bdMessaging::getChannelList
==============
*/
bdReference<bdRemoteTask> *bdMessaging::getChannelList(bdMessaging *this, bdReference<bdRemoteTask> *result, bdChannelInfo *channelInfos, const unsigned int maxNumChannels)
{
  bdTaskByteBuffer *v8; 
  bdTaskByteBuffer *v9; 
  bdTaskByteBuffer *v10; 
  bdLobbyErrorCode started; 
  bdLobbyErrorCode v13; 
  bdReference<bdTaskByteBuffer> buffer; 
  __int64 v15; 
  bdTaskByteBuffer *v16; 

  v15 = -2i64;
  v8 = NULL;
  result->m_ptr = NULL;
  v9 = (bdTaskByteBuffer *)bdMemory::allocate(0x58ui64);
  v16 = v9;
  if ( v9 )
  {
    bdTaskByteBuffer::bdTaskByteBuffer(v9, 0x4Du, 1);
    v8 = v10;
  }
  buffer.m_ptr = v8;
  if ( v8 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v8->m_refCount, 1u);
  bdRemoteTaskManager::initTaskBuffer(&buffer, 0xBu, 0xEu);
  if ( bdByteBuffer::writeUInt32(buffer.m_ptr, maxNumChannels) )
  {
    started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &buffer);
    if ( started )
    {
      v13 = started;
      bdLogMessage(BD_LOG_WARNING, "warn/", "messaging", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmessaging\\bdmessaging.cpp", "bdMessaging::getChannelList", 0x16Fu, "Failed to start task: Error %i", v13);
    }
    else
    {
      bdRemoteTask::setTaskResult(result->m_ptr, channelInfos, maxNumChannels);
    }
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "messaging", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmessaging\\bdmessaging.cpp", "bdMessaging::getChannelList", 0x178u, "Failed to serialize the task buffer.");
  }
  if ( buffer.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && buffer.m_ptr )
    ((void (__fastcall *)(bdTaskByteBuffer *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr, 1i64);
  return result;
}

/*
==============
bdMessaging::getChannelMembers
==============
*/
bdReference<bdRemoteTask> *bdMessaging::getChannelMembers(bdMessaging *this, bdReference<bdRemoteTask> *result, bdChannelGetMembersResponse *response, const char *const category, const unsigned __int64 channelID, const unsigned int maxNumResult)
{
  bdLobbyErrorCode started; 
  bdStructBufferTask *m_ptr; 
  bdLobbyErrorCode v12; 
  bdReference<bdStructBufferTask> newTask; 
  __int64 v14; 
  bdChannelGetChannelMembersRequest request; 

  v14 = -2i64;
  newTask.m_ptr = NULL;
  bdChannelGetChannelMembersRequest::bdChannelGetChannelMembersRequest(&request, category, channelID, maxNumResult);
  started = bdRemoteTaskManager::startStructTask(this->m_remoteTaskManager, &newTask, 0xC6u, 5u, &request, response, NULL);
  if ( started )
  {
    v12 = started;
    bdLogMessage(BD_LOG_WARNING, "warn/", "messaging", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmessaging\\bdmessaging.cpp", "bdMessaging::getChannelMembers", 0xB3u, "Failed to start task: Error %i", v12);
  }
  m_ptr = newTask.m_ptr;
  result->m_ptr = newTask.m_ptr;
  if ( m_ptr )
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
  bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&request.__vftable + 2));
  bdReferencable::~bdReferencable((bdReferencable *)(&request.m_maxNumResult + 2));
  if ( newTask.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&newTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && newTask.m_ptr )
    ((void (__fastcall *)(bdStructBufferTask *, __int64))newTask.m_ptr->~bdReferencable)(newTask.m_ptr, 1i64);
  return result;
}

/*
==============
bdMessaging::getChannelMembers
==============
*/
bdReference<bdRemoteTask> *bdMessaging::getChannelMembers(bdMessaging *this, bdReference<bdRemoteTask> *result, const unsigned __int64 channelID, bdChannelMember *channelMembers, const unsigned int maxNumMembers)
{
  bdTaskByteBuffer *v9; 
  bdTaskByteBuffer *v10; 
  bdTaskByteBuffer *v11; 
  bdLobbyErrorCode started; 
  bdLobbyErrorCode v14; 
  bdReference<bdTaskByteBuffer> buffer; 
  __int64 v16; 
  bdTaskByteBuffer *v17; 

  v16 = -2i64;
  v9 = NULL;
  result->m_ptr = NULL;
  v10 = (bdTaskByteBuffer *)bdMemory::allocate(0x58ui64);
  v17 = v10;
  if ( v10 )
  {
    bdTaskByteBuffer::bdTaskByteBuffer(v10, 0x56u, 1);
    v9 = v11;
  }
  buffer.m_ptr = v9;
  if ( v9 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v9->m_refCount, 1u);
  bdRemoteTaskManager::initTaskBuffer(&buffer, 0xBu, 0xFu);
  if ( bdByteBuffer::writeUInt64(buffer.m_ptr, channelID) && bdByteBuffer::writeUInt32(buffer.m_ptr, maxNumMembers) )
  {
    started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &buffer);
    if ( started )
    {
      v14 = started;
      bdLogMessage(BD_LOG_WARNING, "warn/", "messaging", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmessaging\\bdmessaging.cpp", "bdMessaging::getChannelMembers", 0x2BBu, "Failed to start task: Error %i", v14);
    }
    else
    {
      bdRemoteTask::setTaskResult(result->m_ptr, channelMembers, maxNumMembers);
    }
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "messaging", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmessaging\\bdmessaging.cpp", "bdMessaging::getChannelMembers", 0x2C4u, "Failed to serialize the task buffer.");
  }
  if ( buffer.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && buffer.m_ptr )
    ((void (__fastcall *)(bdTaskByteBuffer *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr, 1i64);
  return result;
}

/*
==============
bdMessaging::getChannelsInfo
==============
*/
bdReference<bdRemoteTask> *bdMessaging::getChannelsInfo(bdMessaging *this, bdReference<bdRemoteTask> *result, const unsigned int numChannelIDs, const unsigned __int64 *channelIDs, bdChannelInfo *channelInfos)
{
  __int64 v6; 
  bdTaskByteBuffer *v9; 
  unsigned int v10; 
  bdTaskByteBuffer *v11; 
  bdTaskByteBuffer *v12; 
  bool v13; 
  __int64 v14; 
  bdLobbyErrorCode started; 
  bdLobbyErrorCode v17; 
  bdReference<bdTaskByteBuffer> buffer; 
  __int64 v19; 
  bdTaskByteBuffer *v20; 

  v19 = -2i64;
  v6 = numChannelIDs;
  v9 = NULL;
  result->m_ptr = NULL;
  v10 = 9 * numChannelIDs + 72;
  v11 = (bdTaskByteBuffer *)bdMemory::allocate(0x58ui64);
  v20 = v11;
  if ( v11 )
  {
    bdTaskByteBuffer::bdTaskByteBuffer(v11, v10, 1);
    v9 = v12;
  }
  buffer.m_ptr = v9;
  if ( v9 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v9->m_refCount, 1u);
  bdRemoteTaskManager::initTaskBuffer(&buffer, 0xBu, 8u);
  v13 = bdByteBuffer::writeUInt32(buffer.m_ptr, v6);
  if ( (_DWORD)v6 )
  {
    v14 = v6;
    do
    {
      v13 = v13 && bdByteBuffer::writeUInt64(buffer.m_ptr, *channelIDs++);
      --v14;
    }
    while ( v14 );
  }
  if ( v13 )
  {
    started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &buffer);
    if ( started )
    {
      v17 = started;
      bdLogMessage(BD_LOG_WARNING, "warn/", "messaging", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmessaging\\bdmessaging.cpp", "bdMessaging::getChannelsInfo", 0x193u, "Failed to start task: Error %i", v17);
    }
    else
    {
      bdRemoteTask::setTaskResult(result->m_ptr, channelInfos, v6);
    }
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "messaging", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmessaging\\bdmessaging.cpp", "bdMessaging::getChannelsInfo", 0x19Cu, "Failed to serialize the task buffer.");
  }
  if ( buffer.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && buffer.m_ptr )
    ((void (__fastcall *)(bdTaskByteBuffer *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr, 1i64);
  return result;
}

/*
==============
bdMessaging::getChannelsInfo
==============
*/
bdReference<bdRemoteTask> *bdMessaging::getChannelsInfo(bdMessaging *this, bdReference<bdRemoteTask> *result, bdChannelGetChannelInfosResponse *response, const unsigned int numChannelIDs, const char *const *categories, const unsigned __int64 *channelIDs)
{
  __int64 v6; 
  const char *const *v10; 
  signed __int64 v11; 
  bdLobbyErrorCode started; 
  bdStructBufferTask *m_ptr; 
  bdLobbyErrorCode v15; 
  bdChannelGetChannelInfosRequest request; 
  bdReference<bdStructBufferTask> newTask; 

  v6 = numChannelIDs;
  newTask.m_ptr = NULL;
  *((_QWORD *)&request.__vftable + 1) = &bdChannelGetChannelInfosRequest::`vbtable';
  *(_QWORD *)request.gap28 = &bdReferencable::`vftable';
  *(_DWORD *)&request.gap28[8] = 0;
  bdStructBufferSerializable::bdStructBufferSerializable(&request);
  request.__vftable = (bdChannelGetChannelInfosRequest_vtbl *)&bdChannelGetChannelInfosRequest::`vftable'{for `bdStructBufferSerializable'};
  *(_QWORD *)&request.m_channels[*(int *)(*((_QWORD *)&request.__vftable + 1) + 4i64) - 24] = &bdChannelGetChannelInfosRequest::`vftable'{for `bdReferencable'};
  *((_QWORD *)&request.__vftable + 3) = 0i64;
  *(_QWORD *)request.m_channels = 0i64;
  *((_DWORD *)&request.__vftable + 4) = 0;
  if ( (_DWORD)v6 )
  {
    v10 = categories;
    v11 = (char *)channelIDs - (char *)categories;
    do
    {
      bdChannelGetChannelInfosRequest::addChannel(&request, *v10, *(const unsigned __int64 *)((char *)v10 + v11));
      ++v10;
      --v6;
    }
    while ( v6 );
  }
  started = bdRemoteTaskManager::startStructTask(this->m_remoteTaskManager, &newTask, 0xC6u, 7u, &request, response, NULL);
  if ( started )
  {
    v15 = started;
    bdLogMessage(BD_LOG_WARNING, "warn/", "messaging", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmessaging\\bdmessaging.cpp", "bdMessaging::getChannelsInfo", 0xCBu, "Failed to start task: Error %i", v15);
  }
  m_ptr = newTask.m_ptr;
  result->m_ptr = newTask.m_ptr;
  if ( m_ptr )
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
  bdArray<GeneralChannelRequest>::~bdArray<GeneralChannelRequest>((bdArray<GeneralChannelRequest> *)(&request.__vftable + 3));
  bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&request.__vftable + 2));
  bdReferencable::~bdReferencable((bdReferencable *)request.gap28);
  if ( newTask.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&newTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && newTask.m_ptr )
    ((void (__fastcall *)(bdStructBufferTask *, __int64))newTask.m_ptr->~bdReferencable)(newTask.m_ptr, 1i64);
  return result;
}

/*
==============
bdMessaging::getNotifications
==============
*/
bdReference<bdRemoteTask> *bdMessaging::getNotifications(bdMessaging *this, bdReference<bdRemoteTask> *result, bdNotification *notifications, const unsigned int startIndex, const unsigned int numNotifications, const bool deleteOnRead)
{
  bdTaskByteBuffer *v10; 
  bdTaskByteBuffer *v11; 
  bdTaskByteBuffer *v12; 
  bdLobbyErrorCode started; 
  bdLobbyErrorCode v15; 
  bdReference<bdTaskByteBuffer> buffer; 
  __int64 v17; 
  bdTaskByteBuffer *v18; 

  v17 = -2i64;
  v10 = NULL;
  result->m_ptr = NULL;
  v11 = (bdTaskByteBuffer *)bdMemory::allocate(0x58ui64);
  v18 = v11;
  if ( v11 )
  {
    bdTaskByteBuffer::bdTaskByteBuffer(v11, 0x54u, 1);
    v10 = v12;
  }
  buffer.m_ptr = v10;
  if ( v10 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v10->m_refCount, 1u);
  bdRemoteTaskManager::initTaskBuffer(&buffer, 6u, 5u);
  if ( bdByteBuffer::writeUInt32(buffer.m_ptr, startIndex) && bdByteBuffer::writeUInt32(buffer.m_ptr, numNotifications) && bdByteBuffer::writeBool(buffer.m_ptr, deleteOnRead) )
  {
    started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &buffer);
    if ( started )
    {
      v15 = started;
      bdLogMessage(BD_LOG_WARNING, "warn/", "messaging", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmessaging\\bdmessaging.cpp", "bdMessaging::getNotifications", 0x35u, "Failed to start task: Error %i", v15);
    }
    else
    {
      bdRemoteTask::setTaskResult(result->m_ptr, notifications, numNotifications);
    }
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "messaging", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmessaging\\bdmessaging.cpp", "bdMessaging::getNotifications", 0x3Eu, "Failed to serialize the task buffer.");
  }
  if ( buffer.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && buffer.m_ptr )
    ((void (__fastcall *)(bdTaskByteBuffer *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr, 1i64);
  return result;
}

/*
==============
bdMessaging::kickFromChannel
==============
*/
bdReference<bdRemoteTask> *bdMessaging::kickFromChannel(bdMessaging *this, bdReference<bdRemoteTask> *result, const char *const category, const unsigned __int64 channelID, const unsigned __int64 userID, unsigned int kickReason, bool alsoBan)
{
  bdLobbyErrorCode started; 
  bdStructBufferTask *m_ptr; 
  bdLobbyErrorCode v12; 
  bdReference<bdStructBufferTask> newTask; 
  __int64 v14; 
  bdChannelKickUserRequest request; 

  v14 = -2i64;
  newTask.m_ptr = NULL;
  bdChannelKickUserRequest::bdChannelKickUserRequest(&request, category, channelID, userID, kickReason, alsoBan);
  started = bdRemoteTaskManager::startStructTask(this->m_remoteTaskManager, &newTask, 0xC6u, 9u, &request, NULL, NULL);
  if ( started )
  {
    v12 = started;
    bdLogMessage(BD_LOG_WARNING, "warn/", "messaging", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmessaging\\bdmessaging.cpp", "bdMessaging::kickFromChannel", 0x1FDu, "Failed to start task: Error %i", v12);
  }
  m_ptr = newTask.m_ptr;
  result->m_ptr = newTask.m_ptr;
  if ( m_ptr )
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
  bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&request.__vftable + 2));
  bdReferencable::~bdReferencable((bdReferencable *)&request.gap35[3]);
  if ( newTask.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&newTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && newTask.m_ptr )
    ((void (__fastcall *)(bdStructBufferTask *, __int64))newTask.m_ptr->~bdReferencable)(newTask.m_ptr, 1i64);
  return result;
}

/*
==============
bdMessaging::kickFromChannel
==============
*/
bdReference<bdRemoteTask> *bdMessaging::kickFromChannel(bdMessaging *this, bdReference<bdRemoteTask> *result, const unsigned __int64 channelID, const unsigned __int64 userID, unsigned int kickReason, bool alsoBan)
{
  bdTaskByteBuffer *v10; 
  bdTaskByteBuffer *v11; 
  bdTaskByteBuffer *v12; 
  bdLobbyErrorCode started; 
  bdLobbyErrorCode v15; 
  bdReference<bdTaskByteBuffer> buffer; 
  __int64 v17; 
  bdTaskByteBuffer *v18; 

  v17 = -2i64;
  v10 = NULL;
  result->m_ptr = NULL;
  v11 = (bdTaskByteBuffer *)bdMemory::allocate(0x58ui64);
  v18 = v11;
  if ( v11 )
  {
    bdTaskByteBuffer::bdTaskByteBuffer(v11, 0x5Fu, 1);
    v10 = v12;
  }
  buffer.m_ptr = v10;
  if ( v10 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v10->m_refCount, 1u);
  bdRemoteTaskManager::initTaskBuffer(&buffer, 0xBu, 0xAu);
  if ( bdByteBuffer::writeUInt64(buffer.m_ptr, channelID) && bdByteBuffer::writeUInt64(buffer.m_ptr, userID) && bdByteBuffer::writeUInt32(buffer.m_ptr, kickReason) && bdByteBuffer::writeBool(buffer.m_ptr, alsoBan) )
  {
    started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &buffer);
    if ( started )
    {
      v15 = started;
      bdLogMessage(BD_LOG_WARNING, "warn/", "messaging", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmessaging\\bdmessaging.cpp", "bdMessaging::kickFromChannel", 0x1E6u, "Failed to start task: Error %i", v15);
    }
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "messaging", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmessaging\\bdmessaging.cpp", "bdMessaging::kickFromChannel", 0x1EBu, "Failed to serialize the task buffer.");
  }
  if ( buffer.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && buffer.m_ptr )
    ((void (__fastcall *)(bdTaskByteBuffer *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr, 1i64);
  return result;
}

/*
==============
bdMessaging::listMsgGroupSubscriptions
==============
*/
bdReference<bdRemoteTask> *bdMessaging::listMsgGroupSubscriptions(bdMessaging *this, bdReference<bdRemoteTask> *result, bdMessagingGroup *subscriptions, const unsigned int maxNumSubscriptions)
{
  bdTaskByteBuffer *v8; 
  bdTaskByteBuffer *v9; 
  bdTaskByteBuffer *v10; 
  bdLobbyErrorCode started; 
  bdLobbyErrorCode v13; 
  bdReference<bdTaskByteBuffer> buffer; 
  bdReference<bdRemoteTask> *v15; 

  v15 = result;
  v8 = NULL;
  result->m_ptr = NULL;
  v9 = (bdTaskByteBuffer *)bdMemory::allocate(0x58ui64);
  if ( v9 )
  {
    bdTaskByteBuffer::bdTaskByteBuffer(v9, 0x48u, 1);
    v8 = v10;
  }
  buffer.m_ptr = v8;
  if ( v8 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v8->m_refCount, 1u);
  bdRemoteTaskManager::initTaskBuffer(&buffer, 0x66u, 2u);
  started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &buffer);
  if ( started )
  {
    v13 = started;
    bdLogMessage(BD_LOG_WARNING, "warn/", "messaging", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmessaging\\bdmessaging.cpp", "bdMessaging::listMsgGroupSubscriptions", 0x394u, "Failed to start task: Error %i", v13);
  }
  else
  {
    bdRemoteTask::setTaskResult(result->m_ptr, subscriptions, maxNumSubscriptions);
  }
  if ( buffer.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && buffer.m_ptr )
    ((void (__fastcall *)(bdTaskByteBuffer *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr, 1i64);
  return result;
}

/*
==============
bdMessaging::manageMsgGroupsSubscriptions
==============
*/
bdReference<bdRemoteTask> *bdMessaging::manageMsgGroupsSubscriptions(bdMessaging *this, bdReference<bdRemoteTask> *result, const bdMessagingGroup *unsubscribeGroups, unsigned int numUnsubscribeGroups, const bdMessagingGroup *subscribeGroups, unsigned int numSubscribeGroups, bdMsgGroupSubscriptionFailure *subscribeFailures, const unsigned int maxSubscribeFailures)
{
  __int64 v8; 
  bdTaskByteBuffer *m_ptr; 
  bdTaskByteBuffer *v12; 
  bdTaskByteBuffer *v13; 
  bool v14; 
  bdMessagingGroup_vtbl **v15; 
  bdMessagingGroup_vtbl **v16; 
  __int64 v17; 
  bool v18; 
  bdMessagingGroup_vtbl **v19; 
  bdMessagingGroup_vtbl **v20; 
  __int64 v21; 
  bool v22; 
  bdMessagingGroup_vtbl **v23; 
  bdMessagingGroup_vtbl **v24; 
  __int64 v25; 
  bool v26; 
  bdMessagingGroup_vtbl **v27; 
  bdMessagingGroup_vtbl **v28; 
  __int64 v29; 
  bdLobbyErrorCode started; 
  bdLobbyErrorCode v32; 
  bdReference<bdTaskByteBuffer> buffer; 
  __int64 v34; 
  bdTaskByteBuffer *v35; 

  v34 = -2i64;
  v8 = numUnsubscribeGroups;
  m_ptr = NULL;
  result->m_ptr = NULL;
  v12 = (bdTaskByteBuffer *)bdMemory::allocate(0x58ui64);
  v35 = v12;
  if ( v12 )
  {
    bdTaskByteBuffer::bdTaskByteBuffer(v12, 0, 1);
    m_ptr = v13;
  }
  buffer.m_ptr = m_ptr;
  if ( m_ptr )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
    m_ptr = buffer.m_ptr;
  }
  v14 = bdByteBuffer::writeUInt32(m_ptr, v8);
  if ( (_DWORD)v8 )
  {
    v15 = &unsubscribeGroups->__vftable + 2;
    v16 = &unsubscribeGroups->__vftable + 2;
    v17 = v8;
    do
    {
      ((void (__fastcall *)(bdMessagingGroup_vtbl **, bdTaskByteBuffer *))(*v15)->deserialize)(v16, buffer.m_ptr);
      v16 += 8;
      v15 += 8;
      --v17;
    }
    while ( v17 );
  }
  v18 = v14 && bdByteBuffer::writeUInt32(buffer.m_ptr, numSubscribeGroups);
  if ( numSubscribeGroups )
  {
    v19 = &subscribeGroups->__vftable + 2;
    v20 = &subscribeGroups->__vftable + 2;
    v21 = numSubscribeGroups;
    do
    {
      ((void (__fastcall *)(bdMessagingGroup_vtbl **, bdTaskByteBuffer *))(*v19)->deserialize)(v20, buffer.m_ptr);
      v20 += 8;
      v19 += 8;
      --v21;
    }
    while ( v21 );
  }
  if ( !v18 || !bdByteBuffer::write(buffer.m_ptr, NULL, 0x48u) )
    goto LABEL_31;
  buffer.m_ptr->allocateBuffer(buffer.m_ptr);
  bdRemoteTaskManager::initTaskBuffer(&buffer, 0x66u, 1u);
  v22 = bdByteBuffer::writeUInt32(buffer.m_ptr, v8);
  if ( (_DWORD)v8 )
  {
    v23 = &unsubscribeGroups->__vftable + 2;
    v24 = &unsubscribeGroups->__vftable + 2;
    v25 = v8;
    do
    {
      ((void (__fastcall *)(bdMessagingGroup_vtbl **, bdTaskByteBuffer *))(*v23)->deserialize)(v24, buffer.m_ptr);
      v24 += 8;
      v23 += 8;
      --v25;
    }
    while ( v25 );
  }
  v26 = v22 && bdByteBuffer::writeUInt32(buffer.m_ptr, numSubscribeGroups);
  if ( numSubscribeGroups )
  {
    v27 = &subscribeGroups->__vftable + 2;
    v28 = &subscribeGroups->__vftable + 2;
    v29 = numSubscribeGroups;
    do
    {
      ((void (__fastcall *)(bdMessagingGroup_vtbl **, bdTaskByteBuffer *))(*v27)->deserialize)(v28, buffer.m_ptr);
      v28 += 8;
      v27 += 8;
      --v29;
    }
    while ( v29 );
  }
  if ( v26 )
  {
    started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &buffer);
    if ( started )
    {
      v32 = started;
      bdLogMessage(BD_LOG_WARNING, "warn/", "messaging", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmessaging\\bdmessaging.cpp", "bdMessaging::manageMsgGroupsSubscriptions", 0x346u, "Failed to start task: Error %i", v32);
    }
    else
    {
      bdRemoteTask::setTaskResult(result->m_ptr, subscribeFailures, maxSubscribeFailures);
    }
  }
  else
  {
LABEL_31:
    bdLogMessage(BD_LOG_WARNING, "warn/", "messaging", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmessaging\\bdmessaging.cpp", "bdMessaging::manageMsgGroupsSubscriptions", 0x34Fu, "Failed to write params into buffer.");
  }
  if ( buffer.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && buffer.m_ptr )
    ((void (__fastcall *)(bdTaskByteBuffer *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr, 1i64);
  return result;
}

/*
==============
bdMessaging::postToMsgGroup
==============
*/
bdReference<bdRemoteTask> *bdMessaging::postToMsgGroup(bdMessaging *this, bdReference<bdRemoteTask> *result, const bdMessagingGroup *group, const void *message, unsigned int msgSize)
{
  unsigned int v9; 
  bdTaskByteBuffer *v10; 
  bdTaskByteBuffer *v11; 
  bdTaskByteBuffer *v12; 
  bdLobbyErrorCode started; 
  bdReference<bdTaskByteBuffer> buffer; 
  __int64 v16; 
  bdTaskByteBuffer *v17; 

  v16 = -2i64;
  result->m_ptr = NULL;
  v9 = 1024;
  if ( msgSize < 0x400 )
    v9 = msgSize;
  if ( v9 < msgSize )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "messaging", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmessaging\\bdmessaging.cpp", "bdMessaging::postToMsgGroup", 0x3A5u, "Exceeded maximum group message size, data will be truncated.");
  v10 = (bdTaskByteBuffer *)bdMemory::allocate(0x58ui64);
  v17 = v10;
  if ( v10 )
  {
    bdTaskByteBuffer::bdTaskByteBuffer(v10, v9 + 89, 1);
    v12 = v11;
  }
  else
  {
    v12 = NULL;
  }
  buffer.m_ptr = v12;
  if ( v12 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v12->m_refCount, 1u);
  bdRemoteTaskManager::initTaskBuffer(&buffer, 0x66u, 3u);
  if ( bdByteBuffer::writeUByte8(buffer.m_ptr, group->_bytes_20[0]) && bdByteBuffer::writeUInt64(buffer.m_ptr, *(_QWORD *)&group->_bytes_20[8]) && bdByteBuffer::writeBlob(buffer.m_ptr, message, v9) )
  {
    started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &buffer);
    if ( started )
      bdLogMessage(BD_LOG_WARNING, "warn/", "messaging", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmessaging\\bdmessaging.cpp", "bdMessaging::postToMsgGroup", 0x3BAu, "Failed to start taks: Error %i", started);
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "messaging", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmessaging\\bdmessaging.cpp", "bdMessaging::postToMsgGroup", 0x3BFu, "Failed to write param into buffer.");
  }
  if ( buffer.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
  {
    if ( buffer.m_ptr )
      ((void (__fastcall *)(bdTaskByteBuffer *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr, 1i64);
    buffer.m_ptr = NULL;
  }
  bdMessagingGroup::~bdMessagingGroup((bdMessagingGroup *)&group->_bytes_20[16]);
  bdReferencable::~bdReferencable((bdReferencable *)&group->_bytes_20[16]);
  return result;
}

/*
==============
bdMessaging::promoteToChannelAdmin
==============
*/
bdReference<bdRemoteTask> *bdMessaging::promoteToChannelAdmin(bdMessaging *this, bdReference<bdRemoteTask> *result, const char *const category, const unsigned __int64 channelID, const unsigned __int64 userToPromote)
{
  bdLobbyErrorCode started; 
  bdStructBufferTask *m_ptr; 
  bdLobbyErrorCode v10; 
  bdReference<bdStructBufferTask> newTask; 
  __int64 v12; 
  bdChannelPromoteUserRequest request; 

  v12 = -2i64;
  newTask.m_ptr = NULL;
  bdChannelPromoteUserRequest::bdChannelPromoteUserRequest(&request, category, channelID, userToPromote);
  started = bdRemoteTaskManager::startStructTask(this->m_remoteTaskManager, &newTask, 0xC6u, 8u, &request, NULL, NULL);
  if ( started )
  {
    v10 = started;
    bdLogMessage(BD_LOG_WARNING, "warn/", "messaging", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmessaging\\bdmessaging.cpp", "bdMessaging::promoteToChannelAdmin", 0x1CAu, "Failed to start task: Error %i", v10);
  }
  m_ptr = newTask.m_ptr;
  result->m_ptr = newTask.m_ptr;
  if ( m_ptr )
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
  bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&request.__vftable + 2));
  bdReferencable::~bdReferencable((bdReferencable *)(&request.m_newAdmin + 1));
  if ( newTask.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&newTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && newTask.m_ptr )
    ((void (__fastcall *)(bdStructBufferTask *, __int64))newTask.m_ptr->~bdReferencable)(newTask.m_ptr, 1i64);
  return result;
}

/*
==============
bdMessaging::promoteToChannelAdmin
==============
*/
bdReference<bdRemoteTask> *bdMessaging::promoteToChannelAdmin(bdMessaging *this, bdReference<bdRemoteTask> *result, const unsigned __int64 channelID, const unsigned __int64 userToPromote)
{
  bdTaskByteBuffer *v8; 
  bdTaskByteBuffer *v9; 
  bdTaskByteBuffer *v10; 
  bdLobbyErrorCode started; 
  bdLobbyErrorCode v13; 
  bdReference<bdTaskByteBuffer> buffer; 
  __int64 v15; 
  bdTaskByteBuffer *v16; 

  v15 = -2i64;
  v8 = NULL;
  result->m_ptr = NULL;
  v9 = (bdTaskByteBuffer *)bdMemory::allocate(0x58ui64);
  v16 = v9;
  if ( v9 )
  {
    bdTaskByteBuffer::bdTaskByteBuffer(v9, 0x51u, 1);
    v8 = v10;
  }
  buffer.m_ptr = v8;
  if ( v8 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v8->m_refCount, 1u);
  bdRemoteTaskManager::initTaskBuffer(&buffer, 0xBu, 9u);
  if ( bdByteBuffer::writeUInt64(buffer.m_ptr, channelID) && bdByteBuffer::writeUInt64(buffer.m_ptr, userToPromote) )
  {
    started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &buffer);
    if ( started )
    {
      v13 = started;
      bdLogMessage(BD_LOG_WARNING, "warn/", "messaging", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmessaging\\bdmessaging.cpp", "bdMessaging::promoteToChannelAdmin", 0x1B3u, "Failed to start task: Error %i", v13);
    }
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "messaging", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmessaging\\bdmessaging.cpp", "bdMessaging::promoteToChannelAdmin", 0x1B9u, "Failed to write param into buffer.");
  }
  if ( buffer.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && buffer.m_ptr )
    ((void (__fastcall *)(bdTaskByteBuffer *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr, 1i64);
  return result;
}

/*
==============
bdMessaging::queryMsgGroupInfo
==============
*/
bdReference<bdRemoteTask> *bdMessaging::queryMsgGroupInfo(bdMessaging *this, bdReference<bdRemoteTask> *result, const bdMessagingGroup *groupsToQuery, const unsigned int numGroupsToQuery, bdMessagingGroupInfo *results)
{
  __int64 v5; 
  bdTaskByteBuffer *m_ptr; 
  bdTaskByteBuffer *v10; 
  bdTaskByteBuffer *v11; 
  bool v12; 
  bdMessagingGroup_vtbl **v13; 
  bdMessagingGroup_vtbl **v14; 
  __int64 v15; 
  bool v16; 
  bdMessagingGroup_vtbl **v17; 
  bdMessagingGroup_vtbl **v18; 
  __int64 v19; 
  bdLobbyErrorCode started; 
  bdLobbyErrorCode v22; 
  bdReference<bdTaskByteBuffer> buffer; 
  __int64 v24; 
  bdTaskByteBuffer *v25; 

  v24 = -2i64;
  v5 = numGroupsToQuery;
  m_ptr = NULL;
  result->m_ptr = NULL;
  v10 = (bdTaskByteBuffer *)bdMemory::allocate(0x58ui64);
  v25 = v10;
  if ( v10 )
  {
    bdTaskByteBuffer::bdTaskByteBuffer(v10, 0, 1);
    m_ptr = v11;
  }
  buffer.m_ptr = m_ptr;
  if ( m_ptr )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
    m_ptr = buffer.m_ptr;
  }
  v12 = bdByteBuffer::writeUInt32(m_ptr, v5);
  if ( (_DWORD)v5 )
  {
    v13 = &groupsToQuery->__vftable + 2;
    v14 = &groupsToQuery->__vftable + 2;
    v15 = v5;
    do
    {
      ((void (__fastcall *)(bdMessagingGroup_vtbl **, bdTaskByteBuffer *))(*v13)->deserialize)(v14, buffer.m_ptr);
      v14 += 8;
      v13 += 8;
      --v15;
    }
    while ( v15 );
  }
  if ( !v12 || !bdByteBuffer::write(buffer.m_ptr, NULL, 0x48u) )
    goto LABEL_17;
  buffer.m_ptr->allocateBuffer(buffer.m_ptr);
  bdRemoteTaskManager::initTaskBuffer(&buffer, 0x66u, 7u);
  v16 = bdByteBuffer::writeUInt32(buffer.m_ptr, v5);
  if ( (_DWORD)v5 )
  {
    v17 = &groupsToQuery->__vftable + 2;
    v18 = &groupsToQuery->__vftable + 2;
    v19 = v5;
    do
    {
      ((void (__fastcall *)(bdMessagingGroup_vtbl **, bdTaskByteBuffer *))(*v17)->deserialize)(v18, buffer.m_ptr);
      v18 += 8;
      v17 += 8;
      --v19;
    }
    while ( v19 );
  }
  if ( v16 )
  {
    started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &buffer);
    if ( started )
    {
      v22 = started;
      bdLogMessage(BD_LOG_WARNING, "warn/", "messaging", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmessaging\\bdmessaging.cpp", "bdMessaging::queryMsgGroupInfo", 0x3EAu, "Failed to start taks: Error %i", v22);
    }
    else
    {
      bdRemoteTask::setTaskResult(result->m_ptr, results, v5);
    }
  }
  else
  {
LABEL_17:
    bdLogMessage(BD_LOG_WARNING, "warn/", "messaging", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmessaging\\bdmessaging.cpp", "bdMessaging::queryMsgGroupInfo", 0x3F3u, "Failed to write params into buffer.");
  }
  if ( buffer.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && buffer.m_ptr )
    ((void (__fastcall *)(bdTaskByteBuffer *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr, 1i64);
  return result;
}

/*
==============
bdMessaging::sendGlobalInstantMessage
==============
*/
bdReference<bdRemoteTask> *bdMessaging::sendGlobalInstantMessage(bdMessaging *this, bdReference<bdRemoteTask> *result, const unsigned __int64 recipientUID, const void *const message, const unsigned int msgSize)
{
  bdTaskByteBuffer *v9; 
  unsigned int v10; 
  bdTaskByteBuffer *v11; 
  bdTaskByteBuffer *v12; 
  bdLobbyErrorCode started; 
  bdLobbyErrorCode v15; 
  bdReference<bdTaskByteBuffer> buffer; 
  __int64 v17; 
  bdTaskByteBuffer *v18; 

  v17 = -2i64;
  v9 = NULL;
  result->m_ptr = NULL;
  v10 = 4096;
  if ( msgSize < 0x1000 )
    v10 = msgSize;
  if ( v10 < msgSize )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "messaging", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmessaging\\bdmessaging.cpp", "bdMessaging::sendGlobalInstantMessage", 0x2D2u, "Exceeded maximum global instant message size, data will be truncated.");
  v11 = (bdTaskByteBuffer *)bdMemory::allocate(0x58ui64);
  v18 = v11;
  if ( v11 )
  {
    bdTaskByteBuffer::bdTaskByteBuffer(v11, v10 + 87, 1);
    v9 = v12;
  }
  buffer.m_ptr = v9;
  if ( v9 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v9->m_refCount, 1u);
  bdRemoteTaskManager::initTaskBuffer(&buffer, 6u, 0xEu);
  if ( bdByteBuffer::writeUInt64(buffer.m_ptr, recipientUID) && bdByteBuffer::writeBlob(buffer.m_ptr, message, v10) )
  {
    started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &buffer);
    if ( started )
    {
      v15 = started;
      bdLogMessage(BD_LOG_WARNING, "warn/", "messaging", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmessaging\\bdmessaging.cpp", "bdMessaging::sendGlobalInstantMessage", 0x2E1u, "Failed to start task: Error %i", v15);
    }
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "messaging", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmessaging\\bdmessaging.cpp", "bdMessaging::sendGlobalInstantMessage", 0x2E6u, "Failed to serialize the task buffer.");
  }
  if ( buffer.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && buffer.m_ptr )
    ((void (__fastcall *)(bdTaskByteBuffer *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr, 1i64);
  return result;
}

/*
==============
bdMessaging::sendGlobalInstantMessages
==============
*/
bdReference<bdRemoteTask> *bdMessaging::sendGlobalInstantMessages(bdMessaging *this, bdReference<bdRemoteTask> *result, const unsigned __int64 *recipientUIDs, unsigned int numRecipients, const void *message, unsigned int msgSize)
{
  unsigned int v10; 
  unsigned int v11; 
  bdTaskByteBuffer *v12; 
  bdTaskByteBuffer *v13; 
  bdTaskByteBuffer *v14; 
  bool v15; 
  bdLobbyErrorCode started; 
  bdReference<bdTaskByteBuffer> buffer; 
  __int64 v19; 
  bdTaskByteBuffer *v20; 

  v19 = -2i64;
  v10 = 0;
  result->m_ptr = NULL;
  v11 = 4096;
  if ( msgSize < 0x1000 )
    v11 = msgSize;
  if ( v11 < msgSize )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "messaging", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmessaging\\bdmessaging.cpp", "bdMessaging::sendGlobalInstantMessages", 0x2F5u, "Exceeded maximum global instant message size, data will be truncated.");
  v12 = (bdTaskByteBuffer *)bdMemory::allocate(0x58ui64);
  v20 = v12;
  if ( v12 )
  {
    bdTaskByteBuffer::bdTaskByteBuffer(v12, numRecipients + v11 + 8 * numRecipients + 78, 1);
    v14 = v13;
  }
  else
  {
    v14 = NULL;
  }
  buffer.m_ptr = v14;
  if ( v14 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v14->m_refCount, 1u);
  bdRemoteTaskManager::initTaskBuffer(&buffer, 6u, 0x12u);
  v15 = bdByteBuffer::writeBlob(buffer.m_ptr, message, v11);
  if ( numRecipients )
  {
    do
    {
      if ( !v15 )
        break;
      v15 = bdByteBuffer::writeUInt64(buffer.m_ptr, *recipientUIDs);
      ++v10;
      ++recipientUIDs;
    }
    while ( v10 < numRecipients );
  }
  if ( v15 )
  {
    started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &buffer);
    if ( started )
      bdLogMessage(BD_LOG_WARNING, "warn/", "messaging", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmessaging\\bdmessaging.cpp", "bdMessaging::sendGlobalInstantMessages", 0x308u, "Failed to start task: Error %i", started);
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "messaging", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmessaging\\bdmessaging.cpp", "bdMessaging::sendGlobalInstantMessages", 0x30Du, "Failed to serialize the task buffer.");
  }
  if ( buffer.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && buffer.m_ptr )
    ((void (__fastcall *)(bdTaskByteBuffer *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr, 1i64);
  return result;
}

/*
==============
bdMessaging::sendToChannel
==============
*/
bdReference<bdRemoteTask> *bdMessaging::sendToChannel(bdMessaging *this, bdReference<bdRemoteTask> *result, const char *const category, const unsigned __int64 channelID, const void *const message, const unsigned int messageSize, const unsigned int messageType)
{
  bdLobbyErrorCode started; 
  bdStructBufferTask *m_ptr; 
  bdLobbyErrorCode v12; 
  bdReference<bdStructBufferTask> newTask; 
  __int64 v14; 
  bdChannelSendMessageRequest request; 

  v14 = -2i64;
  newTask.m_ptr = NULL;
  bdChannelSendMessageRequest::bdChannelSendMessageRequest(&request, category, channelID, message, messageSize, messageType);
  started = bdRemoteTaskManager::startStructTask(this->m_remoteTaskManager, &newTask, 0xC6u, 3u, &request, NULL, NULL);
  if ( started )
  {
    v12 = started;
    bdLogMessage(BD_LOG_WARNING, "warn/", "messaging", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmessaging\\bdmessaging.cpp", "bdMessaging::sendToChannel", 0x28Bu, "Failed to start task: Error %i", v12);
  }
  m_ptr = newTask.m_ptr;
  result->m_ptr = newTask.m_ptr;
  if ( m_ptr )
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
  bdChannelSendMessageRequest::~bdChannelSendMessageRequest((bdChannelSendMessageRequest *)request.gap38);
  bdReferencable::~bdReferencable((bdReferencable *)request.gap38);
  if ( newTask.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&newTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && newTask.m_ptr )
    ((void (__fastcall *)(bdStructBufferTask *, __int64))newTask.m_ptr->~bdReferencable)(newTask.m_ptr, 1i64);
  return result;
}

/*
==============
bdMessaging::sendToChannel
==============
*/
bdReference<bdRemoteTask> *bdMessaging::sendToChannel(bdMessaging *this, bdReference<bdRemoteTask> *result, const unsigned __int64 channelID, const void *const message, const unsigned int messageSize, const unsigned int messageType)
{
  bdTaskByteBuffer *v10; 
  bdTaskByteBuffer *v11; 
  bdTaskByteBuffer *v12; 
  bdLobbyErrorCode started; 
  bdLobbyErrorCode v15; 
  bdReference<bdTaskByteBuffer> buffer; 
  __int64 v17; 
  bdTaskByteBuffer *v18; 

  v17 = -2i64;
  v10 = NULL;
  result->m_ptr = NULL;
  v11 = (bdTaskByteBuffer *)bdMemory::allocate(0x58ui64);
  v18 = v11;
  if ( v11 )
  {
    bdTaskByteBuffer::bdTaskByteBuffer(v11, messageSize + 92, 1);
    v10 = v12;
  }
  buffer.m_ptr = v10;
  if ( v10 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v10->m_refCount, 1u);
  bdRemoteTaskManager::initTaskBuffer(&buffer, 0xBu, 4u);
  if ( bdByteBuffer::writeUInt64(buffer.m_ptr, channelID) && bdByteBuffer::writeBlob(buffer.m_ptr, message, messageSize) && bdByteBuffer::writeUInt32(buffer.m_ptr, messageType) )
  {
    started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &buffer);
    if ( started )
    {
      v15 = started;
      bdLogMessage(BD_LOG_WARNING, "warn/", "messaging", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmessaging\\bdmessaging.cpp", "bdMessaging::sendToChannel", 0x24Fu, "Failed to start task: Error %i", v15);
    }
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "messaging", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmessaging\\bdmessaging.cpp", "bdMessaging::sendToChannel", 0x254u, "Failed to serialize the task buffer.");
  }
  if ( buffer.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && buffer.m_ptr )
    ((void (__fastcall *)(bdTaskByteBuffer *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr, 1i64);
  return result;
}

/*
==============
bdMessaging::setChannelPassword
==============
*/
bdReference<bdRemoteTask> *bdMessaging::setChannelPassword(bdMessaging *this, bdReference<bdRemoteTask> *result, const char *const category, const unsigned __int64 channelID, const unsigned __int64 newPassword)
{
  bdLobbyErrorCode started; 
  bdStructBufferTask *m_ptr; 
  bdLobbyErrorCode v10; 
  bdReference<bdStructBufferTask> newTask; 
  __int64 v12; 
  bdChannelSetChannelPasswordRequest request; 

  v12 = -2i64;
  newTask.m_ptr = NULL;
  bdChannelSetChannelPasswordRequest::bdChannelSetChannelPasswordRequest(&request, category, channelID, newPassword);
  started = bdRemoteTaskManager::startStructTask(this->m_remoteTaskManager, &newTask, 0xC6u, 0xAu, &request, NULL, NULL);
  if ( started )
  {
    v10 = started;
    bdLogMessage(BD_LOG_WARNING, "warn/", "messaging", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmessaging\\bdmessaging.cpp", "bdMessaging::setChannelPassword", 0x229u, "Failed to start task: Error %i", v10);
  }
  m_ptr = newTask.m_ptr;
  result->m_ptr = newTask.m_ptr;
  if ( m_ptr )
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
  bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&request.__vftable + 2));
  bdReferencable::~bdReferencable((bdReferencable *)(&request.m_password + 1));
  if ( newTask.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&newTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && newTask.m_ptr )
    ((void (__fastcall *)(bdStructBufferTask *, __int64))newTask.m_ptr->~bdReferencable)(newTask.m_ptr, 1i64);
  return result;
}

/*
==============
bdMessaging::setChannelPassword
==============
*/
bdReference<bdRemoteTask> *bdMessaging::setChannelPassword(bdMessaging *this, bdReference<bdRemoteTask> *result, const unsigned __int64 channelID, const unsigned __int64 newPassword)
{
  bdTaskByteBuffer *v8; 
  bdTaskByteBuffer *v9; 
  bdTaskByteBuffer *v10; 
  bdLobbyErrorCode started; 
  bdLobbyErrorCode v13; 
  bdReference<bdTaskByteBuffer> buffer; 
  __int64 v15; 
  bdTaskByteBuffer *v16; 

  v15 = -2i64;
  v8 = NULL;
  result->m_ptr = NULL;
  v9 = (bdTaskByteBuffer *)bdMemory::allocate(0x58ui64);
  v16 = v9;
  if ( v9 )
  {
    bdTaskByteBuffer::bdTaskByteBuffer(v9, 0x5Au, 1);
    v8 = v10;
  }
  buffer.m_ptr = v8;
  if ( v8 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v8->m_refCount, 1u);
  bdRemoteTaskManager::initTaskBuffer(&buffer, 0xBu, 0xCu);
  if ( bdByteBuffer::writeUInt64(buffer.m_ptr, channelID) && bdByteBuffer::writeUInt64(buffer.m_ptr, newPassword) )
  {
    started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &buffer);
    if ( started )
    {
      v13 = started;
      bdLogMessage(BD_LOG_WARNING, "warn/", "messaging", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmessaging\\bdmessaging.cpp", "bdMessaging::setChannelPassword", 0x214u, "Failed to start task: Error %i", v13);
    }
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "messaging", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmessaging\\bdmessaging.cpp", "bdMessaging::setChannelPassword", 0x219u, "Failed to serialize the task buffer.");
  }
  if ( buffer.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && buffer.m_ptr )
    ((void (__fastcall *)(bdTaskByteBuffer *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr, 1i64);
  return result;
}

/*
==============
bdMessaging::subscribeToChannel
==============
*/
bdReference<bdRemoteTask> *bdMessaging::subscribeToChannel(bdMessaging *this, bdReference<bdRemoteTask> *result, const char *const category, const unsigned __int64 channelID, const unsigned __int64 password)
{
  bdLobbyErrorCode started; 
  bdStructBufferTask *m_ptr; 
  bdLobbyErrorCode v10; 
  bdReference<bdStructBufferTask> newTask; 
  __int64 v12; 
  GeneralChannelRequest request; 

  v12 = -2i64;
  newTask.m_ptr = NULL;
  GeneralChannelRequest::GeneralChannelRequest(&request, category, channelID, password);
  started = bdRemoteTaskManager::startStructTask(this->m_remoteTaskManager, &newTask, 0xC6u, 1u, &request, NULL, NULL);
  if ( started )
  {
    v10 = started;
    bdLogMessage(BD_LOG_WARNING, "warn/", "messaging", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmessaging\\bdmessaging.cpp", "bdMessaging::subscribeToChannel", 0x11Du, "Failed to start task: Error %i", v10);
  }
  m_ptr = newTask.m_ptr;
  result->m_ptr = newTask.m_ptr;
  if ( m_ptr )
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
  bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&request.__vftable + 2));
  bdReferencable::~bdReferencable((bdReferencable *)(&request.m_password + 1));
  if ( newTask.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&newTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && newTask.m_ptr )
    ((void (__fastcall *)(bdStructBufferTask *, __int64))newTask.m_ptr->~bdReferencable)(newTask.m_ptr, 1i64);
  return result;
}

/*
==============
bdMessaging::subscribeToChannel
==============
*/
bdReference<bdRemoteTask> *bdMessaging::subscribeToChannel(bdMessaging *this, bdReference<bdRemoteTask> *result, const unsigned __int64 channelID, const unsigned __int64 password)
{
  bdTaskByteBuffer *v8; 
  bdTaskByteBuffer *v9; 
  bdTaskByteBuffer *v10; 
  bdLobbyErrorCode started; 
  bdLobbyErrorCode v13; 
  bdReference<bdTaskByteBuffer> buffer; 
  __int64 v15; 
  bdTaskByteBuffer *v16; 

  v15 = -2i64;
  v8 = NULL;
  result->m_ptr = NULL;
  v9 = (bdTaskByteBuffer *)bdMemory::allocate(0x58ui64);
  v16 = v9;
  if ( v9 )
  {
    bdTaskByteBuffer::bdTaskByteBuffer(v9, 0x5Au, 1);
    v8 = v10;
  }
  buffer.m_ptr = v8;
  if ( v8 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v8->m_refCount, 1u);
  bdRemoteTaskManager::initTaskBuffer(&buffer, 0xBu, 0xBu);
  if ( bdByteBuffer::writeUInt64(buffer.m_ptr, channelID) && bdByteBuffer::writeUInt64(buffer.m_ptr, password) )
  {
    started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &buffer);
    if ( started )
    {
      v13 = started;
      bdLogMessage(BD_LOG_WARNING, "warn/", "messaging", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmessaging\\bdmessaging.cpp", "bdMessaging::subscribeToChannel", 0x105u, "Failed to start task: Error %i", v13);
    }
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "messaging", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmessaging\\bdmessaging.cpp", "bdMessaging::subscribeToChannel", 0x10Au, "Failed to serialize the task buffer.");
  }
  if ( buffer.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && buffer.m_ptr )
    ((void (__fastcall *)(bdTaskByteBuffer *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr, 1i64);
  return result;
}

/*
==============
bdMessaging::subscribeToChannel
==============
*/
bdReference<bdRemoteTask> *bdMessaging::subscribeToChannel(bdMessaging *this, bdReference<bdRemoteTask> *result, const unsigned __int64 channelID)
{
  bdTaskByteBuffer *v6; 
  bdTaskByteBuffer *v7; 
  bdTaskByteBuffer *v8; 
  bdLobbyErrorCode started; 
  bdLobbyErrorCode v11; 
  bdReference<bdTaskByteBuffer> buffer; 

  v6 = NULL;
  result->m_ptr = NULL;
  v7 = (bdTaskByteBuffer *)bdMemory::allocate(0x58ui64);
  if ( v7 )
  {
    bdTaskByteBuffer::bdTaskByteBuffer(v7, 0x5Au, 1);
    v6 = v8;
  }
  buffer.m_ptr = v6;
  if ( v6 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v6->m_refCount, 1u);
  bdRemoteTaskManager::initTaskBuffer(&buffer, 0xBu, 0xBu);
  if ( bdByteBuffer::writeUInt64(buffer.m_ptr, channelID) && bdByteBuffer::writeUInt64(buffer.m_ptr, 0i64) )
  {
    started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &buffer);
    if ( started )
    {
      v11 = started;
      bdLogMessage(BD_LOG_WARNING, "warn/", "messaging", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmessaging\\bdmessaging.cpp", "bdMessaging::subscribeToChannel", 0x105u, "Failed to start task: Error %i", v11);
    }
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "messaging", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmessaging\\bdmessaging.cpp", "bdMessaging::subscribeToChannel", 0x10Au, "Failed to serialize the task buffer.");
  }
  if ( buffer.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && buffer.m_ptr )
    ((void (__fastcall *)(bdTaskByteBuffer *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr, 1i64);
  return result;
}

/*
==============
bdMessaging::unsubscribeAllMsgGroups
==============
*/
bdReference<bdRemoteTask> *bdMessaging::unsubscribeAllMsgGroups(bdMessaging *this, bdReference<bdRemoteTask> *result)
{
  bdTaskByteBuffer *v4; 
  bdTaskByteBuffer *v5; 
  bdTaskByteBuffer *v6; 
  bdLobbyErrorCode started; 
  bdLobbyErrorCode v9; 
  bdReference<bdTaskByteBuffer> buffer; 
  bdReference<bdRemoteTask> *v11; 
  bdTaskByteBuffer *v12; 

  v11 = result;
  v4 = NULL;
  result->m_ptr = NULL;
  v5 = (bdTaskByteBuffer *)bdMemory::allocate(0x58ui64);
  v12 = v5;
  if ( v5 )
  {
    bdTaskByteBuffer::bdTaskByteBuffer(v5, 0x48u, 1);
    v4 = v6;
  }
  buffer.m_ptr = v4;
  if ( v4 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v4->m_refCount, 1u);
  bdRemoteTaskManager::initTaskBuffer(&buffer, 0x66u, 6u);
  started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &buffer);
  if ( started )
  {
    v9 = started;
    bdLogMessage(BD_LOG_WARNING, "warn/", "messaging", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmessaging\\bdmessaging.cpp", "bdMessaging::unsubscribeAllMsgGroups", 0x383u, "Failed to start task: Error %i", v9);
  }
  if ( buffer.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && buffer.m_ptr )
    ((void (__fastcall *)(bdTaskByteBuffer *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr, 1i64);
  return result;
}

/*
==============
bdMessaging::unsubscribeFromCategory
==============
*/
bdReference<bdRemoteTask> *bdMessaging::unsubscribeFromCategory(bdMessaging *this, bdReference<bdRemoteTask> *result, const char *const category)
{
  bdLobbyErrorCode started; 
  bdStructBufferTask *m_ptr; 
  bdLobbyErrorCode v8; 
  bdReference<bdStructBufferTask> newTask; 
  __int64 v10; 
  bdChannelUnsubscribeFromCategoryRequest request; 

  v10 = -2i64;
  newTask.m_ptr = NULL;
  bdChannelUnsubscribeFromCategoryRequest::bdChannelUnsubscribeFromCategoryRequest(&request, category);
  started = bdRemoteTaskManager::startStructTask(this->m_remoteTaskManager, &newTask, 0xC6u, 0xCu, &request, NULL, NULL);
  if ( started )
  {
    v8 = started;
    bdLogMessage(BD_LOG_WARNING, "warn/", "messaging", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmessaging\\bdmessaging.cpp", "bdMessaging::unsubscribeFromCategory", 0x157u, "Failed to start task: Error %i", v8);
  }
  m_ptr = newTask.m_ptr;
  result->m_ptr = newTask.m_ptr;
  if ( m_ptr )
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
  bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&request.__vftable + 2));
  bdReferencable::~bdReferencable((bdReferencable *)request.gap20);
  if ( newTask.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&newTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && newTask.m_ptr )
    ((void (__fastcall *)(bdStructBufferTask *, __int64))newTask.m_ptr->~bdReferencable)(newTask.m_ptr, 1i64);
  return result;
}

/*
==============
bdMessaging::unsubscribeFromChannel
==============
*/
bdReference<bdRemoteTask> *bdMessaging::unsubscribeFromChannel(bdMessaging *this, bdReference<bdRemoteTask> *result, const char *const category, const unsigned __int64 channelID)
{
  bdLobbyErrorCode started; 
  bdStructBufferTask *m_ptr; 
  bdLobbyErrorCode v9; 
  bdReference<bdStructBufferTask> newTask; 
  __int64 v11; 
  GeneralChannelRequest request; 

  v11 = -2i64;
  newTask.m_ptr = NULL;
  GeneralChannelRequest::GeneralChannelRequest(&request, category, channelID, 0i64);
  started = bdRemoteTaskManager::startStructTask(this->m_remoteTaskManager, &newTask, 0xC6u, 2u, &request, NULL, NULL);
  if ( started )
  {
    v9 = started;
    bdLogMessage(BD_LOG_WARNING, "warn/", "messaging", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmessaging\\bdmessaging.cpp", "bdMessaging::unsubscribeFromChannel", 0x147u, "Failed to start task: Error %i", v9);
  }
  m_ptr = newTask.m_ptr;
  result->m_ptr = newTask.m_ptr;
  if ( m_ptr )
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
  bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&request.__vftable + 2));
  bdReferencable::~bdReferencable((bdReferencable *)(&request.m_password + 1));
  if ( newTask.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&newTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && newTask.m_ptr )
    ((void (__fastcall *)(bdStructBufferTask *, __int64))newTask.m_ptr->~bdReferencable)(newTask.m_ptr, 1i64);
  return result;
}

/*
==============
bdMessaging::unsubscribeFromChannel
==============
*/
bdReference<bdRemoteTask> *bdMessaging::unsubscribeFromChannel(bdMessaging *this, bdReference<bdRemoteTask> *result, const unsigned __int64 channelID)
{
  bdTaskByteBuffer *v6; 
  bdTaskByteBuffer *v7; 
  bdTaskByteBuffer *v8; 
  bdLobbyErrorCode started; 
  bdLobbyErrorCode v11; 
  bdReference<bdTaskByteBuffer> buffer; 

  v6 = NULL;
  result->m_ptr = NULL;
  v7 = (bdTaskByteBuffer *)bdMemory::allocate(0x58ui64);
  if ( v7 )
  {
    bdTaskByteBuffer::bdTaskByteBuffer(v7, 0x51u, 1);
    v6 = v8;
  }
  buffer.m_ptr = v6;
  if ( v6 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v6->m_refCount, 1u);
  bdRemoteTaskManager::initTaskBuffer(&buffer, 0xBu, 2u);
  if ( bdByteBuffer::writeUInt64(buffer.m_ptr, channelID) )
  {
    started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &buffer);
    if ( started )
    {
      v11 = started;
      bdLogMessage(BD_LOG_WARNING, "warn/", "messaging", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmessaging\\bdmessaging.cpp", "bdMessaging::unsubscribeFromChannel", 0x131u, "Failed to start task: Error %i", v11);
    }
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "messaging", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmessaging\\bdmessaging.cpp", "bdMessaging::unsubscribeFromChannel", 0x136u, "Failed to serialize the task buffer.");
  }
  if ( buffer.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && buffer.m_ptr )
    ((void (__fastcall *)(bdTaskByteBuffer *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr, 1i64);
  return result;
}

/*
==============
bdMessaging::unsubscribeMsgGroupsByCategory
==============
*/
bdReference<bdRemoteTask> *bdMessaging::unsubscribeMsgGroupsByCategory(bdMessaging *this, bdReference<bdRemoteTask> *result, const unsigned __int8 *categories, unsigned int numCategories)
{
  __int64 v4; 
  bdTaskByteBuffer *v8; 
  unsigned int v9; 
  bdTaskByteBuffer *v10; 
  bdTaskByteBuffer *v11; 
  bool v12; 
  __int64 v13; 
  bdLobbyErrorCode started; 
  bdLobbyErrorCode v16; 
  bdReference<bdTaskByteBuffer> buffer; 
  __int64 v18; 
  bdTaskByteBuffer *v19; 

  v18 = -2i64;
  v4 = numCategories;
  v8 = NULL;
  result->m_ptr = NULL;
  v9 = 2 * numCategories + 77;
  v10 = (bdTaskByteBuffer *)bdMemory::allocate(0x58ui64);
  v19 = v10;
  if ( v10 )
  {
    bdTaskByteBuffer::bdTaskByteBuffer(v10, v9, 1);
    v8 = v11;
  }
  buffer.m_ptr = v8;
  if ( v8 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v8->m_refCount, 1u);
  bdRemoteTaskManager::initTaskBuffer(&buffer, 0x66u, 5u);
  v12 = bdByteBuffer::writeUInt32(buffer.m_ptr, v4);
  if ( (_DWORD)v4 )
  {
    v13 = v4;
    do
    {
      v12 = v12 && bdByteBuffer::writeUByte8(buffer.m_ptr, *categories++);
      --v13;
    }
    while ( v13 );
  }
  if ( v12 )
  {
    started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &buffer);
    if ( started )
    {
      v16 = started;
      bdLogMessage(BD_LOG_WARNING, "warn/", "messaging", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmessaging\\bdmessaging.cpp", "bdMessaging::unsubscribeMsgGroupsByCategory", 0x36Du, "Failed to start task: Error %i", v16);
    }
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "messaging", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmessaging\\bdmessaging.cpp", "bdMessaging::unsubscribeMsgGroupsByCategory", 0x372u, "Failed to write param into buffer.");
  }
  if ( buffer.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && buffer.m_ptr )
    ((void (__fastcall *)(bdTaskByteBuffer *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr, 1i64);
  return result;
}

/*
==============
bdMessaging::whisperToChannelMember
==============
*/
bdReference<bdRemoteTask> *bdMessaging::whisperToChannelMember(bdMessaging *this, bdReference<bdRemoteTask> *result, const char *const category, const unsigned __int64 channelID, const unsigned __int64 userID, const void *const message, const unsigned int messageSize, const unsigned int messageType)
{
  bdLobbyErrorCode started; 
  bdStructBufferTask *m_ptr; 
  bdLobbyErrorCode v13; 
  bdReference<bdStructBufferTask> newTask; 
  __int64 v15; 
  bdChannelWisperMessageRequest request; 

  v15 = -2i64;
  newTask.m_ptr = NULL;
  bdChannelWisperMessageRequest::bdChannelWisperMessageRequest(&request, category, channelID, userID, message, messageSize, messageType);
  started = bdRemoteTaskManager::startStructTask(this->m_remoteTaskManager, &newTask, 0xC6u, 4u, &request, NULL, NULL);
  if ( started )
  {
    v13 = started;
    bdLogMessage(BD_LOG_WARNING, "warn/", "messaging", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmessaging\\bdmessaging.cpp", "bdMessaging::whisperToChannelMember", 0x29Fu, "Failed to start task: Error %i", v13);
  }
  m_ptr = newTask.m_ptr;
  result->m_ptr = newTask.m_ptr;
  if ( m_ptr )
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
  bdChannelWisperMessageRequest::~bdChannelWisperMessageRequest((bdChannelWisperMessageRequest *)request.gap40);
  bdReferencable::~bdReferencable((bdReferencable *)request.gap40);
  if ( newTask.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&newTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && newTask.m_ptr )
    ((void (__fastcall *)(bdStructBufferTask *, __int64))newTask.m_ptr->~bdReferencable)(newTask.m_ptr, 1i64);
  return result;
}

/*
==============
bdMessaging::whisperToChannelMember
==============
*/
bdReference<bdRemoteTask> *bdMessaging::whisperToChannelMember(bdMessaging *this, bdReference<bdRemoteTask> *result, const unsigned __int64 channelID, const unsigned __int64 userID, const void *const message, const unsigned int messageSize, const unsigned int messageType)
{
  bdTaskByteBuffer *v11; 
  bdTaskByteBuffer *v12; 
  bdTaskByteBuffer *v13; 
  bdLobbyErrorCode started; 
  bdLobbyErrorCode v16; 
  bdReference<bdTaskByteBuffer> buffer; 
  __int64 v18; 
  bdTaskByteBuffer *v19; 

  v18 = -2i64;
  v11 = NULL;
  result->m_ptr = NULL;
  v12 = (bdTaskByteBuffer *)bdMemory::allocate(0x58ui64);
  v19 = v12;
  if ( v12 )
  {
    bdTaskByteBuffer::bdTaskByteBuffer(v12, messageSize + 101, 1);
    v11 = v13;
  }
  buffer.m_ptr = v11;
  if ( v11 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v11->m_refCount, 1u);
  bdRemoteTaskManager::initTaskBuffer(&buffer, 0xBu, 5u);
  if ( bdByteBuffer::writeUInt64(buffer.m_ptr, channelID) && bdByteBuffer::writeUInt64(buffer.m_ptr, userID) && bdByteBuffer::writeBlob(buffer.m_ptr, message, messageSize) && bdByteBuffer::writeUInt32(buffer.m_ptr, messageType) )
  {
    started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &buffer);
    if ( started )
    {
      v16 = started;
      bdLogMessage(BD_LOG_WARNING, "warn/", "messaging", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmessaging\\bdmessaging.cpp", "bdMessaging::whisperToChannelMember", 0x273u, "Failed to start task: Error %i", v16);
    }
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "messaging", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmessaging\\bdmessaging.cpp", "bdMessaging::whisperToChannelMember", 0x278u, "Failed to serialize the task buffer.");
  }
  if ( buffer.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && buffer.m_ptr )
    ((void (__fastcall *)(bdTaskByteBuffer *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr, 1i64);
  return result;
}

