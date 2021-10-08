/*
==============
bdCrossPlatformUserLists::getUserList
==============
*/

bdReference<bdRemoteTask> *__fastcall bdCrossPlatformUserLists::getUserList(bdCrossPlatformUserLists *this, bdReference<bdRemoteTask> *result, const bdGetUserListRequest *request, bdGetUserListResponse *response)
{
  return ?getUserList@bdCrossPlatformUserLists@@QEAA?AV?$bdReference@VbdRemoteTask@@@@AEBVbdGetUserListRequest@@AEAVbdGetUserListResponse@@@Z(this, result, request, response);
}

/*
==============
bdCrossPlatformUserLists::bdCrossPlatformUserLists
==============
*/

void __fastcall bdCrossPlatformUserLists::bdCrossPlatformUserLists(bdCrossPlatformUserLists *this, bdLobbyService *const lobbyService)
{
  ??0bdCrossPlatformUserLists@@QEAA@QEAVbdLobbyService@@@Z(this, lobbyService);
}

/*
==============
bdCrossPlatformUserLists::removeUsersFromUserList
==============
*/

bdReference<bdRemoteTask> *__fastcall bdCrossPlatformUserLists::removeUsersFromUserList(bdCrossPlatformUserLists *this, bdReference<bdRemoteTask> *result, const bdRemoveUsersFromUserListRequest *request, bdRemoveUsersFromUserListResponse *response)
{
  return ?removeUsersFromUserList@bdCrossPlatformUserLists@@QEAA?AV?$bdReference@VbdRemoteTask@@@@AEBVbdRemoveUsersFromUserListRequest@@AEAVbdRemoveUsersFromUserListResponse@@@Z(this, result, request, response);
}

/*
==============
bdCrossPlatformUserLists::createUserList
==============
*/

bdReference<bdRemoteTask> *__fastcall bdCrossPlatformUserLists::createUserList(bdCrossPlatformUserLists *this, bdReference<bdRemoteTask> *result, const bdCreateUserListRequest *request, bdCreateUserListResponse *response)
{
  return ?createUserList@bdCrossPlatformUserLists@@QEAA?AV?$bdReference@VbdRemoteTask@@@@AEBVbdCreateUserListRequest@@AEAVbdCreateUserListResponse@@@Z(this, result, request, response);
}

/*
==============
bdCrossPlatformUserLists::deleteUserList
==============
*/

bdReference<bdRemoteTask> *__fastcall bdCrossPlatformUserLists::deleteUserList(bdCrossPlatformUserLists *this, bdReference<bdRemoteTask> *result, const bdDeleteUserListRequest *request, bdDeleteUserListResponse *response)
{
  return ?deleteUserList@bdCrossPlatformUserLists@@QEAA?AV?$bdReference@VbdRemoteTask@@@@AEBVbdDeleteUserListRequest@@AEAVbdDeleteUserListResponse@@@Z(this, result, request, response);
}

/*
==============
bdCrossPlatformUserLists::updateUsersInUserList
==============
*/

bdReference<bdRemoteTask> *__fastcall bdCrossPlatformUserLists::updateUsersInUserList(bdCrossPlatformUserLists *this, bdReference<bdRemoteTask> *result, const bdUpdateUsersInUserListRequest *request, bdUpdateUsersInUserListResponse *response)
{
  return ?updateUsersInUserList@bdCrossPlatformUserLists@@QEAA?AV?$bdReference@VbdRemoteTask@@@@AEBVbdUpdateUsersInUserListRequest@@AEAVbdUpdateUsersInUserListResponse@@@Z(this, result, request, response);
}

/*
==============
bdCrossPlatformUserLists::bdCrossPlatformUserLists
==============
*/
void bdCrossPlatformUserLists::bdCrossPlatformUserLists(bdCrossPlatformUserLists *this, bdLobbyService *const lobbyService)
{
  this->m_lobbyService = lobbyService;
}

/*
==============
bdCrossPlatformUserLists::createUserList
==============
*/
bdReference<bdRemoteTask> *bdCrossPlatformUserLists::createUserList(bdCrossPlatformUserLists *this, bdReference<bdRemoteTask> *result, const bdCreateUserListRequest *request, bdCreateUserListResponse *response)
{
  bdRESTTaskManager *RestTaskManager; 

  RestTaskManager = bdLobbyService::getRestTaskManager(this->m_lobbyService);
  bdRESTTaskManager::startRequest(RestTaskManager, result, request, response);
  return result;
}

/*
==============
bdCrossPlatformUserLists::deleteUserList
==============
*/
bdReference<bdRemoteTask> *bdCrossPlatformUserLists::deleteUserList(bdCrossPlatformUserLists *this, bdReference<bdRemoteTask> *result, const bdDeleteUserListRequest *request, bdDeleteUserListResponse *response)
{
  bdRESTTaskManager *RestTaskManager; 

  RestTaskManager = bdLobbyService::getRestTaskManager(this->m_lobbyService);
  bdRESTTaskManager::startRequest(RestTaskManager, result, request, response);
  return result;
}

/*
==============
bdCrossPlatformUserLists::getUserList
==============
*/
bdReference<bdRemoteTask> *bdCrossPlatformUserLists::getUserList(bdCrossPlatformUserLists *this, bdReference<bdRemoteTask> *result, const bdGetUserListRequest *request, bdGetUserListResponse *response)
{
  bdRESTTaskManager *RestTaskManager; 

  RestTaskManager = bdLobbyService::getRestTaskManager(this->m_lobbyService);
  bdRESTTaskManager::startRequest(RestTaskManager, result, request, response);
  return result;
}

/*
==============
bdCrossPlatformUserLists::removeUsersFromUserList
==============
*/
bdReference<bdRemoteTask> *bdCrossPlatformUserLists::removeUsersFromUserList(bdCrossPlatformUserLists *this, bdReference<bdRemoteTask> *result, const bdRemoveUsersFromUserListRequest *request, bdRemoveUsersFromUserListResponse *response)
{
  bdRESTTaskManager *RestTaskManager; 

  RestTaskManager = bdLobbyService::getRestTaskManager(this->m_lobbyService);
  bdRESTTaskManager::startRequest(RestTaskManager, result, request, response);
  return result;
}

/*
==============
bdCrossPlatformUserLists::updateUsersInUserList
==============
*/
bdReference<bdRemoteTask> *bdCrossPlatformUserLists::updateUsersInUserList(bdCrossPlatformUserLists *this, bdReference<bdRemoteTask> *result, const bdUpdateUsersInUserListRequest *request, bdUpdateUsersInUserListResponse *response)
{
  bdRESTTaskManager *RestTaskManager; 

  RestTaskManager = bdLobbyService::getRestTaskManager(this->m_lobbyService);
  bdRESTTaskManager::startRequest(RestTaskManager, result, request, response);
  return result;
}

