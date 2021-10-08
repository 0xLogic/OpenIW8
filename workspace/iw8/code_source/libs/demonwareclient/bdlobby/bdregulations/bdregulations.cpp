/*
==============
bdRegulations::bdRegulations
==============
*/

void __fastcall bdRegulations::bdRegulations(bdRegulations *this, bdRemoteTaskManager *const remoteTaskManager, bdLobbyService *const lobbyService)
{
  ??0bdRegulations@@QEAA@QEAVbdRemoteTaskManager@@QEAVbdLobbyService@@@Z(this, remoteTaskManager, lobbyService);
}

/*
==============
bdRegulations::getRegulations
==============
*/

bdReference<bdRemoteTask> *__fastcall bdRegulations::getRegulations(bdRegulations *this, bdReference<bdRemoteTask> *result, const bdFetchRegulationsRequest *request, bdFetchRegulationsResponse *response)
{
  return ?getRegulations@bdRegulations@@QEAA?AV?$bdReference@VbdRemoteTask@@@@AEBVbdFetchRegulationsRequest@@AEAVbdFetchRegulationsResponse@@@Z(this, result, request, response);
}

/*
==============
bdRegulations::startTask
==============
*/

bdReference<bdRemoteTask> *__fastcall bdRegulations::startTask(bdRegulations *this, bdReference<bdRemoteTask> *result, unsigned __int8 taskID, const bdStructBufferSerializable *request, bdStructBufferSerializable *response)
{
  return ?startTask@bdRegulations@@IEAA?AV?$bdReference@VbdRemoteTask@@@@EAEBVbdStructBufferSerializable@@PEAV3@@Z(this, result, taskID, request, response);
}

/*
==============
bdRegulations::getUserRegulationPreference
==============
*/

bdReference<bdRemoteTask> *__fastcall bdRegulations::getUserRegulationPreference(bdRegulations *this, bdReference<bdRemoteTask> *result, const bdGetUserRegulationPreferenceRequest *request, bdGetUserRegulationPreferenceResponse *response)
{
  return ?getUserRegulationPreference@bdRegulations@@QEAA?AV?$bdReference@VbdRemoteTask@@@@AEBVbdGetUserRegulationPreferenceRequest@@AEAVbdGetUserRegulationPreferenceResponse@@@Z(this, result, request, response);
}

/*
==============
bdRegulations::setUserRegulationPreference
==============
*/

bdReference<bdRemoteTask> *__fastcall bdRegulations::setUserRegulationPreference(bdRegulations *this, bdReference<bdRemoteTask> *result, const bdSetUserRegulationPreferenceRequest *request, bdSetUserRegulationPreferenceResponse *response)
{
  return ?setUserRegulationPreference@bdRegulations@@QEAA?AV?$bdReference@VbdRemoteTask@@@@AEBVbdSetUserRegulationPreferenceRequest@@AEAVbdSetUserRegulationPreferenceResponse@@@Z(this, result, request, response);
}

/*
==============
bdRegulations::bdRegulations
==============
*/
void bdRegulations::bdRegulations(bdRegulations *this, bdRemoteTaskManager *const remoteTaskManager, bdLobbyService *const lobbyService)
{
  this->m_remoteTaskManager = remoteTaskManager;
  this->m_lobbyService = lobbyService;
}

/*
==============
bdRegulations::getRegulations
==============
*/
bdReference<bdRemoteTask> *bdRegulations::getRegulations(bdRegulations *this, bdReference<bdRemoteTask> *result, const bdFetchRegulationsRequest *request, bdFetchRegulationsResponse *response)
{
  bdRESTTaskManager *RestTaskManager; 

  RestTaskManager = bdLobbyService::getRestTaskManager(this->m_lobbyService);
  bdRESTTaskManager::startRequest(RestTaskManager, result, request, response);
  return result;
}

/*
==============
bdRegulations::getUserRegulationPreference
==============
*/
bdReference<bdRemoteTask> *bdRegulations::getUserRegulationPreference(bdRegulations *this, bdReference<bdRemoteTask> *result, const bdGetUserRegulationPreferenceRequest *request, bdGetUserRegulationPreferenceResponse *response)
{
  bdRESTTaskManager *RestTaskManager; 

  RestTaskManager = bdLobbyService::getRestTaskManager(this->m_lobbyService);
  bdRESTTaskManager::startRequest(RestTaskManager, result, request, response);
  return result;
}

/*
==============
bdRegulations::setUserRegulationPreference
==============
*/
bdReference<bdRemoteTask> *bdRegulations::setUserRegulationPreference(bdRegulations *this, bdReference<bdRemoteTask> *result, const bdSetUserRegulationPreferenceRequest *request, bdSetUserRegulationPreferenceResponse *response)
{
  bdRESTTaskManager *RestTaskManager; 

  RestTaskManager = bdLobbyService::getRestTaskManager(this->m_lobbyService);
  bdRESTTaskManager::startRequest(RestTaskManager, result, request, response);
  return result;
}

/*
==============
bdRegulations::startTask
==============
*/
bdReference<bdRemoteTask> *bdRegulations::startTask(bdRegulations *this, bdReference<bdRemoteTask> *result, unsigned __int8 taskID, const bdStructBufferSerializable *request, bdStructBufferSerializable *response)
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
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdRegulations", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdregulations\\bdregulations.cpp", "bdRegulations::startTask", 0x3Du, "Failed to start bdRegulations task: %d: Error %i", v10, v11);
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

