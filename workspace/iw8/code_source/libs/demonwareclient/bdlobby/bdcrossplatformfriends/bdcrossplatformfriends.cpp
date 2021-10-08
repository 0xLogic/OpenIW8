/*
==============
bdCrossPlatformFriends::getBlockedUsers
==============
*/

bdReference<bdRemoteTask> *__fastcall bdCrossPlatformFriends::getBlockedUsers(bdCrossPlatformFriends *this, bdReference<bdRemoteTask> *result, const bdGetBlockedUsersRequest *request, bdGetBlockedUsersResponse *response)
{
  return ?getBlockedUsers@bdCrossPlatformFriends@@QEAA?AV?$bdReference@VbdRemoteTask@@@@AEBVbdGetBlockedUsersRequest@@AEAVbdGetBlockedUsersResponse@@@Z(this, result, request, response);
}

/*
==============
bdCrossPlatformFriends::getMutualFriends
==============
*/

bdReference<bdRemoteTask> *__fastcall bdCrossPlatformFriends::getMutualFriends(bdCrossPlatformFriends *this, bdReference<bdRemoteTask> *result, const bdGetMutualFriendsRequest *request, bdGetMutualFriendsResponse *response)
{
  return ?getMutualFriends@bdCrossPlatformFriends@@QEAA?AV?$bdReference@VbdRemoteTask@@@@AEBVbdGetMutualFriendsRequest@@AEAVbdGetMutualFriendsResponse@@@Z(this, result, request, response);
}

/*
==============
bdCrossPlatformFriends::unblockUser
==============
*/

bdReference<bdRemoteTask> *__fastcall bdCrossPlatformFriends::unblockUser(bdCrossPlatformFriends *this, bdReference<bdRemoteTask> *result, const bdUnblockUserRequest *request, bdUnblockUserResponse *response)
{
  return ?unblockUser@bdCrossPlatformFriends@@QEAA?AV?$bdReference@VbdRemoteTask@@@@AEBVbdUnblockUserRequest@@AEAVbdUnblockUserResponse@@@Z(this, result, request, response);
}

/*
==============
bdCrossPlatformFriends::blockUser
==============
*/

bdReference<bdRemoteTask> *__fastcall bdCrossPlatformFriends::blockUser(bdCrossPlatformFriends *this, bdReference<bdRemoteTask> *result, const bdBlockUserRequest *request, bdBlockUserResponse *response)
{
  return ?blockUser@bdCrossPlatformFriends@@QEAA?AV?$bdReference@VbdRemoteTask@@@@AEBVbdBlockUserRequest@@AEAVbdBlockUserResponse@@@Z(this, result, request, response);
}

/*
==============
bdCrossPlatformFriends::registerPushMessageHandler
==============
*/

bool __fastcall bdCrossPlatformFriends::registerPushMessageHandler(bdCrossPlatformFriends *this, bdCrossPlatformFriendsPushMessageHandler *handler)
{
  return ?registerPushMessageHandler@bdCrossPlatformFriends@@QEAA_NPEAVbdCrossPlatformFriendsPushMessageHandler@@@Z(this, handler);
}

/*
==============
bdCrossPlatformFriends::unregisterPushMessageHandler
==============
*/

bool __fastcall bdCrossPlatformFriends::unregisterPushMessageHandler(bdCrossPlatformFriends *this, bdCrossPlatformFriendsPushMessageHandler *__formal)
{
  return ?unregisterPushMessageHandler@bdCrossPlatformFriends@@QEAA_NPEAVbdCrossPlatformFriendsPushMessageHandler@@@Z(this, __formal);
}

/*
==============
bdCrossPlatformFriends::invite
==============
*/

bdReference<bdRemoteTask> *__fastcall bdCrossPlatformFriends::invite(bdCrossPlatformFriends *this, bdReference<bdRemoteTask> *result, const bdSendFriendInvitationsRequest *request, bdSendFriendInvitationsResponse *response)
{
  return ?invite@bdCrossPlatformFriends@@QEAA?AV?$bdReference@VbdRemoteTask@@@@AEBVbdSendFriendInvitationsRequest@@AEAVbdSendFriendInvitationsResponse@@@Z(this, result, request, response);
}

/*
==============
bdCrossPlatformFriends::reject
==============
*/

bdReference<bdRemoteTask> *__fastcall bdCrossPlatformFriends::reject(bdCrossPlatformFriends *this, bdReference<bdRemoteTask> *result, const bdRejectFriendRequest *request, bdRejectFriendResponse *response)
{
  return ?reject@bdCrossPlatformFriends@@QEAA?AV?$bdReference@VbdRemoteTask@@@@AEBVbdRejectFriendRequest@@AEAVbdRejectFriendResponse@@@Z(this, result, request, response);
}

/*
==============
bdCrossPlatformFriends::getPending
==============
*/

bdReference<bdRemoteTask> *__fastcall bdCrossPlatformFriends::getPending(bdCrossPlatformFriends *this, bdReference<bdRemoteTask> *result, const bdGetPendingFriendsRequest *request, bdGetPendingFriendsResponse *response)
{
  return ?getPending@bdCrossPlatformFriends@@QEAA?AV?$bdReference@VbdRemoteTask@@@@AEBVbdGetPendingFriendsRequest@@AEAVbdGetPendingFriendsResponse@@@Z(this, result, request, response);
}

/*
==============
bdCrossPlatformFriends::bdCrossPlatformFriends
==============
*/

void __fastcall bdCrossPlatformFriends::bdCrossPlatformFriends(bdCrossPlatformFriends *this, bdLobbyService *const lobbyService)
{
  ??0bdCrossPlatformFriends@@QEAA@QEAVbdLobbyService@@@Z(this, lobbyService);
}

/*
==============
bdCrossPlatformFriends::getFriends
==============
*/

bdReference<bdRemoteTask> *__fastcall bdCrossPlatformFriends::getFriends(bdCrossPlatformFriends *this, bdReference<bdRemoteTask> *result, const bdGetFriendsRequest *request, bdGetFriendsResponse *response)
{
  return ?getFriends@bdCrossPlatformFriends@@QEAA?AV?$bdReference@VbdRemoteTask@@@@AEBVbdGetFriendsRequest@@AEAVbdGetFriendsResponse@@@Z(this, result, request, response);
}

/*
==============
bdCrossPlatformFriends::bdCrossPlatformFriends
==============
*/
void bdCrossPlatformFriends::bdCrossPlatformFriends(bdCrossPlatformFriends *this, bdLobbyService *const lobbyService)
{
  this->m_lobbyService = lobbyService;
}

/*
==============
bdCrossPlatformFriends::blockUser
==============
*/
bdReference<bdRemoteTask> *bdCrossPlatformFriends::blockUser(bdCrossPlatformFriends *this, bdReference<bdRemoteTask> *result, const bdBlockUserRequest *request, bdBlockUserResponse *response)
{
  bdRESTTaskManager *RestTaskManager; 

  RestTaskManager = bdLobbyService::getRestTaskManager(this->m_lobbyService);
  bdRESTTaskManager::startRequest(RestTaskManager, result, request, response);
  return result;
}

/*
==============
bdCrossPlatformFriends::getBlockedUsers
==============
*/
bdReference<bdRemoteTask> *bdCrossPlatformFriends::getBlockedUsers(bdCrossPlatformFriends *this, bdReference<bdRemoteTask> *result, const bdGetBlockedUsersRequest *request, bdGetBlockedUsersResponse *response)
{
  bdRESTTaskManager *RestTaskManager; 

  RestTaskManager = bdLobbyService::getRestTaskManager(this->m_lobbyService);
  bdRESTTaskManager::startRequest(RestTaskManager, result, request, response);
  return result;
}

/*
==============
bdCrossPlatformFriends::getFriends
==============
*/
bdReference<bdRemoteTask> *bdCrossPlatformFriends::getFriends(bdCrossPlatformFriends *this, bdReference<bdRemoteTask> *result, const bdGetFriendsRequest *request, bdGetFriendsResponse *response)
{
  bdRESTTaskManager *RestTaskManager; 

  RestTaskManager = bdLobbyService::getRestTaskManager(this->m_lobbyService);
  bdRESTTaskManager::startRequest(RestTaskManager, result, request, response);
  return result;
}

/*
==============
bdCrossPlatformFriends::getMutualFriends
==============
*/
bdReference<bdRemoteTask> *bdCrossPlatformFriends::getMutualFriends(bdCrossPlatformFriends *this, bdReference<bdRemoteTask> *result, const bdGetMutualFriendsRequest *request, bdGetMutualFriendsResponse *response)
{
  bdRESTTaskManager *RestTaskManager; 

  RestTaskManager = bdLobbyService::getRestTaskManager(this->m_lobbyService);
  bdRESTTaskManager::startRequest(RestTaskManager, result, request, response);
  return result;
}

/*
==============
bdCrossPlatformFriends::getPending
==============
*/
bdReference<bdRemoteTask> *bdCrossPlatformFriends::getPending(bdCrossPlatformFriends *this, bdReference<bdRemoteTask> *result, const bdGetPendingFriendsRequest *request, bdGetPendingFriendsResponse *response)
{
  bdRESTTaskManager *RestTaskManager; 

  RestTaskManager = bdLobbyService::getRestTaskManager(this->m_lobbyService);
  bdRESTTaskManager::startRequest(RestTaskManager, result, request, response);
  return result;
}

/*
==============
bdCrossPlatformFriends::invite
==============
*/
bdReference<bdRemoteTask> *bdCrossPlatformFriends::invite(bdCrossPlatformFriends *this, bdReference<bdRemoteTask> *result, const bdSendFriendInvitationsRequest *request, bdSendFriendInvitationsResponse *response)
{
  bdRESTTaskManager *RestTaskManager; 

  RestTaskManager = bdLobbyService::getRestTaskManager(this->m_lobbyService);
  bdRESTTaskManager::startRequest(RestTaskManager, result, request, response);
  return result;
}

/*
==============
bdCrossPlatformFriends::registerPushMessageHandler
==============
*/
bool bdCrossPlatformFriends::registerPushMessageHandler(bdCrossPlatformFriends *this, bdCrossPlatformFriendsPushMessageHandler *handler)
{
  bdLobbyService *m_lobbyService; 
  bdString v4; 
  bdString v6; 

  m_lobbyService = this->m_lobbyService;
  bdString::bdString(&v6, "friends");
  return bdLobbyService::registerPushMessageHandler(m_lobbyService, v4, handler);
}

/*
==============
bdCrossPlatformFriends::reject
==============
*/
bdReference<bdRemoteTask> *bdCrossPlatformFriends::reject(bdCrossPlatformFriends *this, bdReference<bdRemoteTask> *result, const bdRejectFriendRequest *request, bdRejectFriendResponse *response)
{
  bdRESTTaskManager *RestTaskManager; 

  RestTaskManager = bdLobbyService::getRestTaskManager(this->m_lobbyService);
  bdRESTTaskManager::startRequest(RestTaskManager, result, request, response);
  return result;
}

/*
==============
bdCrossPlatformFriends::unblockUser
==============
*/
bdReference<bdRemoteTask> *bdCrossPlatformFriends::unblockUser(bdCrossPlatformFriends *this, bdReference<bdRemoteTask> *result, const bdUnblockUserRequest *request, bdUnblockUserResponse *response)
{
  bdRESTTaskManager *RestTaskManager; 

  RestTaskManager = bdLobbyService::getRestTaskManager(this->m_lobbyService);
  bdRESTTaskManager::startRequest(RestTaskManager, result, request, response);
  return result;
}

/*
==============
bdCrossPlatformFriends::unregisterPushMessageHandler
==============
*/
bool bdCrossPlatformFriends::unregisterPushMessageHandler(bdCrossPlatformFriends *this, bdCrossPlatformFriendsPushMessageHandler *__formal)
{
  bdLobbyService *m_lobbyService; 
  bdString v3; 
  bdString v5; 

  m_lobbyService = this->m_lobbyService;
  bdString::bdString(&v5, "friends");
  return bdLobbyService::unregisterPushMessageHandler(m_lobbyService, v3);
}

