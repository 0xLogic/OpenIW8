/*
==============
bdCrossPlatformIdentity::authenticateUser
==============
*/

bdReference<bdRemoteTask> *__fastcall bdCrossPlatformIdentity::authenticateUser(bdCrossPlatformIdentity *this, bdReference<bdRemoteTask> *result, const bdAuthenticateCrossPlatformUserRequest *request, bdAuthenticateCrossPlatformUserResponse *response)
{
  return ?authenticateUser@bdCrossPlatformIdentity@@QEAA?AV?$bdReference@VbdRemoteTask@@@@AEBVbdAuthenticateCrossPlatformUserRequest@@AEAVbdAuthenticateCrossPlatformUserResponse@@@Z(this, result, request, response);
}

/*
==============
bdCrossPlatformIdentity::upgradeAnonAccToFull
==============
*/

bdReference<bdRemoteTask> *__fastcall bdCrossPlatformIdentity::upgradeAnonAccToFull(bdCrossPlatformIdentity *this, bdReference<bdRemoteTask> *result, const bdUpgradeAnonUnoAccRequest *request, bdUpgradeAnonUnoAccResponse *response)
{
  return ?upgradeAnonAccToFull@bdCrossPlatformIdentity@@QEAA?AV?$bdReference@VbdRemoteTask@@@@AEBVbdUpgradeAnonUnoAccRequest@@AEAVbdUpgradeAnonUnoAccResponse@@@Z(this, result, request, response);
}

/*
==============
bdCrossPlatformIdentity::upgradeUmbrellaAccount
==============
*/

bdReference<bdRemoteTask> *__fastcall bdCrossPlatformIdentity::upgradeUmbrellaAccount(bdCrossPlatformIdentity *this, bdReference<bdRemoteTask> *result, const bdUpgradeUmbrellaRequest *request, bdUpgradeUmbrellaResponse *response)
{
  return ?upgradeUmbrellaAccount@bdCrossPlatformIdentity@@QEAA?AV?$bdReference@VbdRemoteTask@@@@AEBVbdUpgradeUmbrellaRequest@@AEAVbdUpgradeUmbrellaResponse@@@Z(this, result, request, response);
}

/*
==============
bdCrossPlatformIdentity::getPlatformUserIDs
==============
*/

bdReference<bdRemoteTask> *__fastcall bdCrossPlatformIdentity::getPlatformUserIDs(bdCrossPlatformIdentity *this, bdReference<bdRemoteTask> *result, const bdGetPlatformUserIDsRequest *request, bdGetPlatformUserIDsResponse *response)
{
  return ?getPlatformUserIDs@bdCrossPlatformIdentity@@QEAA?AV?$bdReference@VbdRemoteTask@@@@AEBVbdGetPlatformUserIDsRequest@@AEAVbdGetPlatformUserIDsResponse@@@Z(this, result, request, response);
}

/*
==============
bdCrossPlatformIdentity::bdCrossPlatformIdentity
==============
*/

void __fastcall bdCrossPlatformIdentity::bdCrossPlatformIdentity(bdCrossPlatformIdentity *this, bdRemoteTaskManager *const remoteTaskManager, bdLobbyService *const lobbyService)
{
  ??0bdCrossPlatformIdentity@@QEAA@QEAVbdRemoteTaskManager@@QEAVbdLobbyService@@@Z(this, remoteTaskManager, lobbyService);
}

/*
==============
bdCrossPlatformIdentity::unregisterPushMessageHandler
==============
*/

bool __fastcall bdCrossPlatformIdentity::unregisterPushMessageHandler(bdCrossPlatformIdentity *this, bdCrossPlatformIdentityPushMessageHandler *__formal)
{
  return ?unregisterPushMessageHandler@bdCrossPlatformIdentity@@QEAA_NPEAVbdCrossPlatformIdentityPushMessageHandler@@@Z(this, __formal);
}

/*
==============
bdCrossPlatformIdentity::renameUser
==============
*/

bdReference<bdRemoteTask> *__fastcall bdCrossPlatformIdentity::renameUser(bdCrossPlatformIdentity *this, bdReference<bdRemoteTask> *result, const bdRenameCrossPlatformUserRequest *request, bdRenameCrossPlatformUserResponse *response)
{
  return ?renameUser@bdCrossPlatformIdentity@@QEAA?AV?$bdReference@VbdRemoteTask@@@@AEBVbdRenameCrossPlatformUserRequest@@AEAVbdRenameCrossPlatformUserResponse@@@Z(this, result, request, response);
}

/*
==============
bdCrossPlatformIdentity::linkUser
==============
*/

bdReference<bdRemoteTask> *__fastcall bdCrossPlatformIdentity::linkUser(bdCrossPlatformIdentity *this, bdReference<bdRemoteTask> *result, const bdCrossPlatformLinkUserRequest *request, bdCrossPlatformLinkUserResponse *response)
{
  return ?linkUser@bdCrossPlatformIdentity@@QEAA?AV?$bdReference@VbdRemoteTask@@@@AEBVbdCrossPlatformLinkUserRequest@@AEAVbdCrossPlatformLinkUserResponse@@@Z(this, result, request, response);
}

/*
==============
bdCrossPlatformIdentity::getCrossPlatformUserIDs
==============
*/

bdReference<bdRemoteTask> *__fastcall bdCrossPlatformIdentity::getCrossPlatformUserIDs(bdCrossPlatformIdentity *this, bdReference<bdRemoteTask> *result, const bdGetCrossPlatformUserIDsRequest *request, bdGetCrossPlatformUserIDsResponse *response)
{
  return ?getCrossPlatformUserIDs@bdCrossPlatformIdentity@@QEAA?AV?$bdReference@VbdRemoteTask@@@@AEBVbdGetCrossPlatformUserIDsRequest@@AEAVbdGetCrossPlatformUserIDsResponse@@@Z(this, result, request, response);
}

/*
==============
bdCrossPlatformIdentity::usernameSearch
==============
*/

bdReference<bdRemoteTask> *__fastcall bdCrossPlatformIdentity::usernameSearch(bdCrossPlatformIdentity *this, bdReference<bdRemoteTask> *result, const bdGetCrossPlatformUserSearchRequest *request, bdGetCrossPlatformUserSearchResponse *response)
{
  return ?usernameSearch@bdCrossPlatformIdentity@@QEAA?AV?$bdReference@VbdRemoteTask@@@@AEBVbdGetCrossPlatformUserSearchRequest@@AEAVbdGetCrossPlatformUserSearchResponse@@@Z(this, result, request, response);
}

/*
==============
bdCrossPlatformIdentity::registerPushMessageHandler
==============
*/

bool __fastcall bdCrossPlatformIdentity::registerPushMessageHandler(bdCrossPlatformIdentity *this, bdCrossPlatformIdentityPushMessageHandler *handler)
{
  return ?registerPushMessageHandler@bdCrossPlatformIdentity@@QEAA_NPEAVbdCrossPlatformIdentityPushMessageHandler@@@Z(this, handler);
}

/*
==============
bdCrossPlatformIdentity::getCrossPlatformUsernames
==============
*/

bdReference<bdRemoteTask> *__fastcall bdCrossPlatformIdentity::getCrossPlatformUsernames(bdCrossPlatformIdentity *this, bdReference<bdRemoteTask> *result, const bdGetCrossPlatformUsernamesRequest *request, bdGetCrossPlatformUsernamesResponse *response)
{
  return ?getCrossPlatformUsernames@bdCrossPlatformIdentity@@QEAA?AV?$bdReference@VbdRemoteTask@@@@AEBVbdGetCrossPlatformUsernamesRequest@@AEAVbdGetCrossPlatformUsernamesResponse@@@Z(this, result, request, response);
}

/*
==============
bdCrossPlatformIdentity::startTask
==============
*/

bdReference<bdRemoteTask> *__fastcall bdCrossPlatformIdentity::startTask(bdCrossPlatformIdentity *this, bdReference<bdRemoteTask> *result, unsigned __int8 taskID, const bdStructBufferSerializable *request, bdStructBufferSerializable *response)
{
  return ?startTask@bdCrossPlatformIdentity@@IEAA?AV?$bdReference@VbdRemoteTask@@@@EAEBVbdStructBufferSerializable@@PEAV3@@Z(this, result, taskID, request, response);
}

/*
==============
bdCrossPlatformIdentity::bdCrossPlatformIdentity
==============
*/
void bdCrossPlatformIdentity::bdCrossPlatformIdentity(bdCrossPlatformIdentity *this, bdRemoteTaskManager *const remoteTaskManager, bdLobbyService *const lobbyService)
{
  this->m_remoteTaskManager = remoteTaskManager;
  this->m_lobbyService = lobbyService;
}

/*
==============
bdCrossPlatformIdentity::authenticateUser
==============
*/
bdReference<bdRemoteTask> *bdCrossPlatformIdentity::authenticateUser(bdCrossPlatformIdentity *this, bdReference<bdRemoteTask> *result, const bdAuthenticateCrossPlatformUserRequest *request, bdAuthenticateCrossPlatformUserResponse *response)
{
  bdRESTTaskManager *RestTaskManager; 

  RestTaskManager = bdLobbyService::getRestTaskManager(this->m_lobbyService);
  bdRESTTaskManager::startRequest(RestTaskManager, result, request, response);
  return result;
}

/*
==============
bdCrossPlatformIdentity::getCrossPlatformUserIDs
==============
*/
bdReference<bdRemoteTask> *bdCrossPlatformIdentity::getCrossPlatformUserIDs(bdCrossPlatformIdentity *this, bdReference<bdRemoteTask> *result, const bdGetCrossPlatformUserIDsRequest *request, bdGetCrossPlatformUserIDsResponse *response)
{
  bdCrossPlatformIdentity::startTask(this, result, 0xAu, request, response);
  return result;
}

/*
==============
bdCrossPlatformIdentity::getCrossPlatformUsernames
==============
*/
bdReference<bdRemoteTask> *bdCrossPlatformIdentity::getCrossPlatformUsernames(bdCrossPlatformIdentity *this, bdReference<bdRemoteTask> *result, const bdGetCrossPlatformUsernamesRequest *request, bdGetCrossPlatformUsernamesResponse *response)
{
  bdRESTTaskManager *RestTaskManager; 

  RestTaskManager = bdLobbyService::getRestTaskManager(this->m_lobbyService);
  bdRESTTaskManager::startRequest(RestTaskManager, result, request, response);
  return result;
}

/*
==============
bdCrossPlatformIdentity::getPlatformUserIDs
==============
*/
bdReference<bdRemoteTask> *bdCrossPlatformIdentity::getPlatformUserIDs(bdCrossPlatformIdentity *this, bdReference<bdRemoteTask> *result, const bdGetPlatformUserIDsRequest *request, bdGetPlatformUserIDsResponse *response)
{
  bdCrossPlatformIdentity::startTask(this, result, 0xBu, request, response);
  return result;
}

/*
==============
bdCrossPlatformIdentity::linkUser
==============
*/
bdReference<bdRemoteTask> *bdCrossPlatformIdentity::linkUser(bdCrossPlatformIdentity *this, bdReference<bdRemoteTask> *result, const bdCrossPlatformLinkUserRequest *request, bdCrossPlatformLinkUserResponse *response)
{
  bdRESTTaskManager *RestTaskManager; 

  RestTaskManager = bdLobbyService::getRestTaskManager(this->m_lobbyService);
  bdRESTTaskManager::startRequest(RestTaskManager, result, request, response);
  return result;
}

/*
==============
bdCrossPlatformIdentity::registerPushMessageHandler
==============
*/
bool bdCrossPlatformIdentity::registerPushMessageHandler(bdCrossPlatformIdentity *this, bdCrossPlatformIdentityPushMessageHandler *handler)
{
  bdLobbyService *m_lobbyService; 
  bdString v4; 
  bdString v6; 

  m_lobbyService = this->m_lobbyService;
  bdString::bdString(&v6, "crossPlatformIdentity");
  return bdLobbyService::registerPushMessageHandler(m_lobbyService, v4, handler);
}

/*
==============
bdCrossPlatformIdentity::renameUser
==============
*/
bdReference<bdRemoteTask> *bdCrossPlatformIdentity::renameUser(bdCrossPlatformIdentity *this, bdReference<bdRemoteTask> *result, const bdRenameCrossPlatformUserRequest *request, bdRenameCrossPlatformUserResponse *response)
{
  bdRESTTaskManager *RestTaskManager; 

  RestTaskManager = bdLobbyService::getRestTaskManager(this->m_lobbyService);
  bdRESTTaskManager::startRequest(RestTaskManager, result, request, response);
  return result;
}

/*
==============
bdCrossPlatformIdentity::startTask
==============
*/
bdReference<bdRemoteTask> *bdCrossPlatformIdentity::startTask(bdCrossPlatformIdentity *this, bdReference<bdRemoteTask> *result, unsigned __int8 taskID, const bdStructBufferSerializable *request, bdStructBufferSerializable *response)
{
  bdLobbyErrorCode started; 
  bdStructBufferTask *m_ptr; 
  int v10; 
  bdLobbyErrorCode v11; 
  bdReference<bdStructBufferTask> v12; 

  v12.m_ptr = NULL;
  started = bdRemoteTaskManager::startStructTask(this->m_remoteTaskManager, &v12, 0xC5u, taskID, request, response, this->m_lobbyService);
  if ( started )
  {
    v11 = started;
    v10 = taskID;
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdCrossPlatformIdentity", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcrossplatformidentity\\bdcrossplatformidentity.cpp", "bdCrossPlatformIdentity::startTask", 0x75u, "Failed to start bdCrossPlatformIdentity task: %d: Error %i", v10, v11);
  }
  m_ptr = v12.m_ptr;
  result->m_ptr = v12.m_ptr;
  if ( m_ptr )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
    m_ptr = v12.m_ptr;
  }
  if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v12.m_ptr )
    ((void (__fastcall *)(bdStructBufferTask *, __int64))v12.m_ptr->~bdReferencable)(v12.m_ptr, 1i64);
  return result;
}

/*
==============
bdCrossPlatformIdentity::unregisterPushMessageHandler
==============
*/
bool bdCrossPlatformIdentity::unregisterPushMessageHandler(bdCrossPlatformIdentity *this, bdCrossPlatformIdentityPushMessageHandler *__formal)
{
  bdLobbyService *m_lobbyService; 
  bdString v3; 
  bdString v5; 

  m_lobbyService = this->m_lobbyService;
  bdString::bdString(&v5, "crossPlatformIdentity");
  return bdLobbyService::unregisterPushMessageHandler(m_lobbyService, v3);
}

/*
==============
bdCrossPlatformIdentity::upgradeAnonAccToFull
==============
*/
bdReference<bdRemoteTask> *bdCrossPlatformIdentity::upgradeAnonAccToFull(bdCrossPlatformIdentity *this, bdReference<bdRemoteTask> *result, const bdUpgradeAnonUnoAccRequest *request, bdUpgradeAnonUnoAccResponse *response)
{
  bdRESTTaskManager *RestTaskManager; 

  RestTaskManager = bdLobbyService::getRestTaskManager(this->m_lobbyService);
  bdRESTTaskManager::startRequest(RestTaskManager, result, request, response);
  return result;
}

/*
==============
bdCrossPlatformIdentity::upgradeUmbrellaAccount
==============
*/
bdReference<bdRemoteTask> *bdCrossPlatformIdentity::upgradeUmbrellaAccount(bdCrossPlatformIdentity *this, bdReference<bdRemoteTask> *result, const bdUpgradeUmbrellaRequest *request, bdUpgradeUmbrellaResponse *response)
{
  bdRESTTaskManager *RestTaskManager; 

  RestTaskManager = bdLobbyService::getRestTaskManager(this->m_lobbyService);
  bdRESTTaskManager::startRequest(RestTaskManager, result, request, response);
  return result;
}

/*
==============
bdCrossPlatformIdentity::usernameSearch
==============
*/
bdReference<bdRemoteTask> *bdCrossPlatformIdentity::usernameSearch(bdCrossPlatformIdentity *this, bdReference<bdRemoteTask> *result, const bdGetCrossPlatformUserSearchRequest *request, bdGetCrossPlatformUserSearchResponse *response)
{
  bdRESTTaskManager *RestTaskManager; 

  RestTaskManager = bdLobbyService::getRestTaskManager(this->m_lobbyService);
  bdRESTTaskManager::startRequest(RestTaskManager, result, request, response);
  return result;
}

