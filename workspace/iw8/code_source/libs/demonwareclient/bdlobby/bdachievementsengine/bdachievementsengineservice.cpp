/*
==============
bdAchievementsEngineService::getRestRequestsEnabled
==============
*/

bool __fastcall bdAchievementsEngineService::getRestRequestsEnabled(bdAchievementsEngineService *this)
{
  return ?getRestRequestsEnabled@bdAchievementsEngineService@@QEBA_NXZ(this);
}

/*
==============
bdAchievementsEngineService::deactivateAchievement
==============
*/

bdReference<bdRemoteTask> *__fastcall bdAchievementsEngineService::deactivateAchievement(bdAchievementsEngineService *this, bdReference<bdRemoteTask> *result, const bdDeactivateAchievementRequest *request)
{
  return ?deactivateAchievement@bdAchievementsEngineService@@QEAA?AV?$bdReference@VbdRemoteTask@@@@AEBVbdDeactivateAchievementRequest@@@Z(this, result, request);
}

/*
==============
bdAchievementsEngineService::getUserState
==============
*/

bdReference<bdRemoteTask> *__fastcall bdAchievementsEngineService::getUserState(bdAchievementsEngineService *this, bdReference<bdRemoteTask> *result, const bdGetUserStateRequest *request, bdGetUserStateResponse *response)
{
  return ?getUserState@bdAchievementsEngineService@@QEAA?AV?$bdReference@VbdRemoteTask@@@@AEBVbdGetUserStateRequest@@PEAVbdGetUserStateResponse@@@Z(this, result, request, response);
}

/*
==============
bdAchievementsEngineService::getDefaultErrorMap
==============
*/

const bdRESTErrorMap *__fastcall bdAchievementsEngineService::getDefaultErrorMap()
{
  return ?getDefaultErrorMap@bdAchievementsEngineService@@SAAEBVbdRESTErrorMap@@XZ();
}

/*
==============
bdAchievementsEngineService::claimAchievement
==============
*/

bdReference<bdRemoteTask> *__fastcall bdAchievementsEngineService::claimAchievement(bdAchievementsEngineService *this, bdReference<bdRemoteTask> *result, const bdClaimAchievementRequest *request)
{
  return ?claimAchievement@bdAchievementsEngineService@@QEAA?AV?$bdReference@VbdRemoteTask@@@@AEBVbdClaimAchievementRequest@@@Z(this, result, request);
}

/*
==============
bdAchievementsEngineService::activateAchievement
==============
*/

bdReference<bdRemoteTask> *__fastcall bdAchievementsEngineService::activateAchievement(bdAchievementsEngineService *this, bdReference<bdRemoteTask> *result, const bdActivateAchievementRequest *request)
{
  return ?activateAchievement@bdAchievementsEngineService@@QEAA?AV?$bdReference@VbdRemoteTask@@@@AEBVbdActivateAchievementRequest@@@Z(this, result, request);
}

/*
==============
bdAchievementsEngineService::reportEvents
==============
*/

bdReference<bdRemoteTask> *__fastcall bdAchievementsEngineService::reportEvents(bdAchievementsEngineService *this, bdReference<bdRemoteTask> *result, const bdReportEventsRequest *request)
{
  return ?reportEvents@bdAchievementsEngineService@@QEAA?AV?$bdReference@VbdRemoteTask@@@@AEBVbdReportEventsRequest@@@Z(this, result, request);
}

/*
==============
bdAchievementsEngineService::setABTestingToken
==============
*/

void __fastcall bdAchievementsEngineService::setABTestingToken(bdAchievementsEngineService *this, const char *const abTestingToken)
{
  ?setABTestingToken@bdAchievementsEngineService@@QEAAXQEBD@Z(this, abTestingToken);
}

/*
==============
bdAchievementsEngineService::setRestSendABTokenEnabled
==============
*/

void __fastcall bdAchievementsEngineService::setRestSendABTokenEnabled(bdAchievementsEngineService *this, bool enabled)
{
  ?setRestSendABTokenEnabled@bdAchievementsEngineService@@QEAAX_N@Z(this, enabled);
}

/*
==============
bdAchievementsEngineService::deleteUser
==============
*/

bdReference<bdRemoteTask> *__fastcall bdAchievementsEngineService::deleteUser(bdAchievementsEngineService *this, bdReference<bdRemoteTask> *result, const bdDeleteUserRequest *request)
{
  return ?deleteUser@bdAchievementsEngineService@@QEAA?AV?$bdReference@VbdRemoteTask@@@@AEBVbdDeleteUserRequest@@@Z(this, result, request);
}

/*
==============
bdAchievementsEngineService::setRestRequestsEnabled
==============
*/

void __fastcall bdAchievementsEngineService::setRestRequestsEnabled(bdAchievementsEngineService *this, bool enabled)
{
  ?setRestRequestsEnabled@bdAchievementsEngineService@@QEAAX_N@Z(this, enabled);
}

/*
==============
bdAchievementsEngineService::reportUserEvents
==============
*/

bdReference<bdRemoteTask> *__fastcall bdAchievementsEngineService::reportUserEvents(bdAchievementsEngineService *this, bdReference<bdRemoteTask> *result, const bdReportUserEventsRequest *request, bdReportUserEventsResponse *response)
{
  return ?reportUserEvents@bdAchievementsEngineService@@QEAA?AV?$bdReference@VbdRemoteTask@@@@AEBVbdReportUserEventsRequest@@PEAVbdReportUserEventsResponse@@@Z(this, result, request, response);
}

/*
==============
bdAchievementsEngineService::startTask
==============
*/

bdReference<bdRemoteTask> *__fastcall bdAchievementsEngineService::startTask(bdAchievementsEngineService *this, bdReference<bdRemoteTask> *result, const bdRESTRequest *request, bdRESTResponse *response)
{
  return ?startTask@bdAchievementsEngineService@@IEAA?AV?$bdReference@VbdRemoteTask@@@@AEBVbdRESTRequest@@PEAVbdRESTResponse@@@Z(this, result, request, response);
}

/*
==============
bdAchievementsEngineService::getRestSendABTokenEnabled
==============
*/

bool __fastcall bdAchievementsEngineService::getRestSendABTokenEnabled(bdAchievementsEngineService *this)
{
  return ?getRestSendABTokenEnabled@bdAchievementsEngineService@@QEBA_NXZ(this);
}

/*
==============
bdAchievementsEngineService::bdAchievementsEngineService
==============
*/

void __fastcall bdAchievementsEngineService::bdAchievementsEngineService(bdAchievementsEngineService *this, bdRemoteTaskManager *const remoteTaskManager, const bdAuthInfo *authInfo)
{
  ??0bdAchievementsEngineService@@QEAA@QEAVbdRemoteTaskManager@@AEBVbdAuthInfo@@@Z(this, remoteTaskManager, authInfo);
}

/*
==============
bdAchievementsEngineService::startTask
==============
*/

bdReference<bdRemoteTask> *__fastcall bdAchievementsEngineService::startTask(bdAchievementsEngineService *this, bdReference<bdRemoteTask> *result, unsigned __int8 taskID, const bdStructBufferSerializable *request, bdStructBufferSerializable *response)
{
  return ?startTask@bdAchievementsEngineService@@IEAA?AV?$bdReference@VbdRemoteTask@@@@EAEBVbdStructBufferSerializable@@PEAV3@@Z(this, result, taskID, request, response);
}

/*
==============
bdAchievementsEngineService::getAchievementStates
==============
*/

bdReference<bdRemoteTask> *__fastcall bdAchievementsEngineService::getAchievementStates(bdAchievementsEngineService *this, bdReference<bdRemoteTask> *result, const bdGetAchievementStatesRequest *request, bdGetAchievementStatesResponse *response)
{
  return ?getAchievementStates@bdAchievementsEngineService@@QEAA?AV?$bdReference@VbdRemoteTask@@@@AEBVbdGetAchievementStatesRequest@@PEAVbdGetAchievementStatesResponse@@@Z(this, result, request, response);
}

/*
==============
bdAchievementsEngineService::getAchievementStatesBatch
==============
*/

bdReference<bdRemoteTask> *__fastcall bdAchievementsEngineService::getAchievementStatesBatch(bdAchievementsEngineService *this, bdReference<bdRemoteTask> *result, const bdGetAchievementStatesBatchRequest *request, bdGetAchievementStatesBatchResponse *response)
{
  return ?getAchievementStatesBatch@bdAchievementsEngineService@@QEAA?AV?$bdReference@VbdRemoteTask@@@@AEBVbdGetAchievementStatesBatchRequest@@PEAVbdGetAchievementStatesBatchResponse@@@Z(this, result, request, response);
}

/*
==============
bdAchievementsEngineService::getAchievementDefinitions
==============
*/

bdReference<bdRemoteTask> *__fastcall bdAchievementsEngineService::getAchievementDefinitions(bdAchievementsEngineService *this, bdReference<bdRemoteTask> *result, const bdGetAchievementDefinitionsRequest *request, bdGetAchievementDefinitionsResponse *response)
{
  return ?getAchievementDefinitions@bdAchievementsEngineService@@QEAA?AV?$bdReference@VbdRemoteTask@@@@AEBVbdGetAchievementDefinitionsRequest@@PEAVbdGetAchievementDefinitionsResponse@@@Z(this, result, request, response);
}

/*
==============
bdAchievementsEngineService::bdAchievementsEngineService
==============
*/
void bdAchievementsEngineService::bdAchievementsEngineService(bdAchievementsEngineService *this, bdRemoteTaskManager *const remoteTaskManager, const bdAuthInfo *authInfo)
{
  bdAchievementsEngineRestResponse *p_m_responseDummy; 
  unsigned __int64 v5; 
  size_t v6; 

  this->m_remoteTaskManager = remoteTaskManager;
  this->m_authInfo = authInfo;
  p_m_responseDummy = &this->m_responseDummy;
  bdRESTResponse::bdRESTResponse(&this->m_responseDummy);
  p_m_responseDummy->__vftable = (bdAchievementsEngineRestResponse_vtbl *)&bdAchievementsEngineRestResponse::`vftable';
  bdReportEventsResponse::bdReportEventsResponse(&this->m_reportEventsResponse);
  *(_WORD *)&this->m_restRequestsEnabled = 257;
  bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen", -2i64);
  v5 = -1i64;
  do
    ++v5;
  while ( *((_BYTE *)&queryFormat.fmt + v5 + 3) );
  if ( this != (bdAchievementsEngineService *)-98i64 )
  {
    v6 = 4096i64;
    if ( v5 < 0x1000 )
      v6 = v5;
    memcpy_0(&this->m_abTestingToken, (char *)&queryFormat.fmt + 3, v6);
    this->m_abTestingToken.m_buffer[v6] = 0;
  }
}

/*
==============
bdAchievementsEngineService::activateAchievement
==============
*/
bdReference<bdRemoteTask> *bdAchievementsEngineService::activateAchievement(bdAchievementsEngineService *this, bdReference<bdRemoteTask> *result, const bdActivateAchievementRequest *request)
{
  bdAchievementsEngineService::startTask(this, result, 5u, request, NULL);
  return result;
}

/*
==============
bdAchievementsEngineService::claimAchievement
==============
*/
bdReference<bdRemoteTask> *bdAchievementsEngineService::claimAchievement(bdAchievementsEngineService *this, bdReference<bdRemoteTask> *result, const bdClaimAchievementRequest *request)
{
  bdAchievementsEngineService::startTask(this, result, 7u, request, NULL);
  return result;
}

/*
==============
bdAchievementsEngineService::deactivateAchievement
==============
*/
bdReference<bdRemoteTask> *bdAchievementsEngineService::deactivateAchievement(bdAchievementsEngineService *this, bdReference<bdRemoteTask> *result, const bdDeactivateAchievementRequest *request)
{
  bdAchievementsEngineService::startTask(this, result, 6u, request, NULL);
  return result;
}

/*
==============
bdAchievementsEngineService::deleteUser
==============
*/
bdReference<bdRemoteTask> *bdAchievementsEngineService::deleteUser(bdAchievementsEngineService *this, bdReference<bdRemoteTask> *result, const bdDeleteUserRequest *request)
{
  bdAchievementsEngineService::startTask(this, result, 0xAu, request, NULL);
  return result;
}

/*
==============
bdAchievementsEngineService::getAchievementDefinitions
==============
*/
bdReference<bdRemoteTask> *bdAchievementsEngineService::getAchievementDefinitions(bdAchievementsEngineService *this, bdReference<bdRemoteTask> *result, const bdGetAchievementDefinitionsRequest *request, bdGetAchievementDefinitionsResponse *response)
{
  bdAchievementsEngineService::startTask(this, result, 4u, request, response);
  return result;
}

/*
==============
bdAchievementsEngineService::getAchievementStates
==============
*/
bdReference<bdRemoteTask> *bdAchievementsEngineService::getAchievementStates(bdAchievementsEngineService *this, bdReference<bdRemoteTask> *result, const bdGetAchievementStatesRequest *request, bdGetAchievementStatesResponse *response)
{
  bdAchievementsEngineService::startTask(this, result, 3u, request, response);
  return result;
}

/*
==============
bdAchievementsEngineService::getAchievementStatesBatch
==============
*/
bdReference<bdRemoteTask> *bdAchievementsEngineService::getAchievementStatesBatch(bdAchievementsEngineService *this, bdReference<bdRemoteTask> *result, const bdGetAchievementStatesBatchRequest *request, bdGetAchievementStatesBatchResponse *response)
{
  bdHandleAssert(response != NULL, "response != NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdachievementsengine\\bdachievementsengineservice.cpp", "bdAchievementsEngineService::getAchievementStatesBatch", 0x7Au, "response parameter is required for getAchievementStatesBatch");
  bdAchievementsEngineService::startTask(this, result, 8u, request, response);
  return result;
}

/*
==============
bdAchievementsEngineService::getDefaultErrorMap
==============
*/
bdRESTErrorMap *bdAchievementsEngineService::getDefaultErrorMap()
{
  return &bdAchievementsEngineService::m_errorMap;
}

/*
==============
bdAchievementsEngineService::getRestRequestsEnabled
==============
*/
_BOOL8 bdAchievementsEngineService::getRestRequestsEnabled(bdAchievementsEngineService *this)
{
  return this->m_restRequestsEnabled;
}

/*
==============
bdAchievementsEngineService::getRestSendABTokenEnabled
==============
*/
_BOOL8 bdAchievementsEngineService::getRestSendABTokenEnabled(bdAchievementsEngineService *this)
{
  return this->m_restSendABTokenEnabled;
}

/*
==============
bdAchievementsEngineService::getUserState
==============
*/
bdReference<bdRemoteTask> *bdAchievementsEngineService::getUserState(bdAchievementsEngineService *this, bdReference<bdRemoteTask> *result, const bdGetUserStateRequest *request, bdGetUserStateResponse *response)
{
  bdAchievementsEngineService::startTask(this, result, 9u, request, response);
  return result;
}

/*
==============
bdAchievementsEngineService::reportEvents
==============
*/
bdReference<bdRemoteTask> *bdAchievementsEngineService::reportEvents(bdAchievementsEngineService *this, bdReference<bdRemoteTask> *result, const bdReportEventsRequest *request)
{
  __int64 v6; 

  if ( this->m_restRequestsEnabled )
  {
    bdAchievementsEngineRestRequest::setTitleID((bdAchievementsEngineRestRequest *)(&request->__vftable + 2), this->m_authInfo->m_titleID);
    bdReportEventsRequest::setAccountType((bdReportEventsRequest *)request, this->m_authInfo->m_accountType);
    bdReportEventsRequest::setUserID((bdReportEventsRequest *)request, this->m_authInfo->m_userID);
    bdAchievementsEngineRestRequest::setClientID((bdAchievementsEngineRestRequest *)(&request->__vftable + 2), this->m_authInfo->m_clientID);
    if ( this->m_restSendABTokenEnabled )
      bdAchievementsEngineRestRequest::setABTestingToken((bdAchievementsEngineRestRequest *)(&request->__vftable + 2), this->m_abTestingToken.m_buffer);
    v6 = 56i64;
    if ( this == (bdAchievementsEngineService *)-56i64 )
      v6 = 16i64;
    bdRemoteTaskManager::startRESTTask(this->m_remoteTaskManager, result, (const bdRESTRequest *)&request->__vftable + 2, (bdRESTResponse *)((char *)this + v6));
    return result;
  }
  else
  {
    bdAchievementsEngineService::startTask(this, result, 1u, request, NULL);
    return result;
  }
}

/*
==============
bdAchievementsEngineService::reportUserEvents
==============
*/
bdReference<bdRemoteTask> *bdAchievementsEngineService::reportUserEvents(bdAchievementsEngineService *this, bdReference<bdRemoteTask> *result, const bdReportUserEventsRequest *request, bdReportUserEventsResponse *response)
{
  bdAchievementsEngineRestRequest *v7; 

  if ( this->m_restRequestsEnabled )
  {
    v7 = (bdAchievementsEngineRestRequest *)(&request->__vftable + 2);
    bdAchievementsEngineRestRequest::setTitleID((bdAchievementsEngineRestRequest *)(&request->__vftable + 2), this->m_authInfo->m_titleID);
    bdAchievementsEngineRestRequest::setClientID(v7, this->m_authInfo->m_clientID);
    if ( this->m_restSendABTokenEnabled )
      bdAchievementsEngineRestRequest::setABTestingToken(v7, this->m_abTestingToken.m_buffer);
    if ( !response )
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdAchievementsEngineService", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdachievementsengine\\bdachievementsengineservice.cpp", "bdAchievementsEngineService::reportUserEvents", 0x53u, "You cannot get the result of reporting events without a response object.");
    if ( !response )
      response = (bdReportUserEventsResponse *)&this->m_responseDummy;
    bdRemoteTaskManager::startRESTTask(this->m_remoteTaskManager, result, v7, response);
    return result;
  }
  else
  {
    bdAchievementsEngineService::startTask(this, result, 2u, request, NULL);
    return result;
  }
}

/*
==============
bdAchievementsEngineService::setABTestingToken
==============
*/
void bdAchievementsEngineService::setABTestingToken(bdAchievementsEngineService *this, const char *const abTestingToken)
{
  if ( bdStrlcpy(this->m_abTestingToken.m_buffer, abTestingToken, 0x1001ui64) > 0x1000 )
  {
    bdHandleAssert(0, "\"sLength <= MaxLength\" && false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<4096>::copy", 0x56u, "bdStructFixedSizeString buffer is too small");
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "BD_ASSERT", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<4096>::copy", 0x56u, "bdStructFixedSizeString buffer is too small");
  }
}

/*
==============
bdAchievementsEngineService::setRestRequestsEnabled
==============
*/
void bdAchievementsEngineService::setRestRequestsEnabled(bdAchievementsEngineService *this, bool enabled)
{
  this->m_restRequestsEnabled = enabled;
}

/*
==============
bdAchievementsEngineService::setRestSendABTokenEnabled
==============
*/
void bdAchievementsEngineService::setRestSendABTokenEnabled(bdAchievementsEngineService *this, bool enabled)
{
  this->m_restSendABTokenEnabled = enabled;
}

/*
==============
bdAchievementsEngineService::startTask
==============
*/
bdReference<bdRemoteTask> *bdAchievementsEngineService::startTask(bdAchievementsEngineService *this, bdReference<bdRemoteTask> *result, const bdRESTRequest *request, bdRESTResponse *response)
{
  if ( !response )
    response = &this->m_responseDummy;
  bdRemoteTaskManager::startRESTTask(this->m_remoteTaskManager, result, request, response);
  return result;
}

/*
==============
bdAchievementsEngineService::startTask
==============
*/
bdReference<bdRemoteTask> *bdAchievementsEngineService::startTask(bdAchievementsEngineService *this, bdReference<bdRemoteTask> *result, unsigned __int8 taskID, const bdStructBufferSerializable *request, bdStructBufferSerializable *response)
{
  bdLobbyErrorCode started; 
  bdStructBufferTask *m_ptr; 
  int v10; 
  bdLobbyErrorCode v11; 
  bdReference<bdStructBufferTask> v12; 

  v12.m_ptr = NULL;
  started = bdRemoteTaskManager::startStructTask(this->m_remoteTaskManager, &v12, 0x7Du, taskID, request, response, NULL);
  if ( started )
  {
    v11 = started;
    v10 = taskID;
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdAchievementsEngineService", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdachievementsengine\\bdachievementsengineservice.cpp", "bdAchievementsEngineService::startTask", 0xB2u, "Failed to start bdAchievementsEngineService task: %d Error %i", v10, v11);
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

