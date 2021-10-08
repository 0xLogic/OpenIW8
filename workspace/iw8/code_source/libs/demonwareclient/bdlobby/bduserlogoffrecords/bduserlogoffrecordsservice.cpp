/*
==============
bdUserLogoffRecordsService::reportLogoff
==============
*/

bdReference<bdRemoteTask> *__fastcall bdUserLogoffRecordsService::reportLogoff(bdUserLogoffRecordsService *this, bdReference<bdRemoteTask> *result, const bdReportLogoffRequest *request)
{
  return ?reportLogoff@bdUserLogoffRecordsService@@QEAA?AV?$bdReference@VbdRemoteTask@@@@AEBVbdReportLogoffRequest@@@Z(this, result, request);
}

/*
==============
bdUserLogoffRecordsService::startTask
==============
*/

bdReference<bdRemoteTask> *__fastcall bdUserLogoffRecordsService::startTask(bdUserLogoffRecordsService *this, bdReference<bdRemoteTask> *result, unsigned __int8 taskID, const bdStructBufferSerializable *request, bdStructBufferSerializable *response)
{
  return ?startTask@bdUserLogoffRecordsService@@IEAA?AV?$bdReference@VbdRemoteTask@@@@EAEBVbdStructBufferSerializable@@PEAV3@@Z(this, result, taskID, request, response);
}

/*
==============
bdUserLogoffRecordsService::bdUserLogoffRecordsService
==============
*/

void __fastcall bdUserLogoffRecordsService::bdUserLogoffRecordsService(bdUserLogoffRecordsService *this, bdRemoteTaskManager *const remoteTaskManager)
{
  ??0bdUserLogoffRecordsService@@QEAA@QEAVbdRemoteTaskManager@@@Z(this, remoteTaskManager);
}

/*
==============
bdUserLogoffRecordsService::bdUserLogoffRecordsService
==============
*/
void bdUserLogoffRecordsService::bdUserLogoffRecordsService(bdUserLogoffRecordsService *this, bdRemoteTaskManager *const remoteTaskManager)
{
  this->m_remoteTaskManager = remoteTaskManager;
}

/*
==============
bdUserLogoffRecordsService::reportLogoff
==============
*/
bdReference<bdRemoteTask> *bdUserLogoffRecordsService::reportLogoff(bdUserLogoffRecordsService *this, bdReference<bdRemoteTask> *result, const bdReportLogoffRequest *request)
{
  bdLobbyErrorCode started; 
  bdStructBufferTask *m_ptr; 
  bdRemoteTask *v7; 
  int v8; 
  bdLobbyErrorCode v9; 
  bdRemoteTask *v10; 
  bdReference<bdStructBufferTask> newTask; 

  v10 = (bdRemoteTask *)result;
  result->m_ptr = NULL;
  if ( !*((_DWORD *)&request->__vftable + 4) )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdUserLogoffRecordsService", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bduserlogoffrecords\\bduserlogoffrecordsservice.cpp", "bdUserLogoffRecordsService::reportLogoff", 0x33u, "Please use a positive reason code when calling bdUserLogoffRecordsService::reportLogoff");
    return result;
  }
  newTask.m_ptr = NULL;
  started = bdRemoteTaskManager::startStructTask(this->m_remoteTaskManager, &newTask, 0xC7u, 1u, request, NULL, NULL);
  if ( started )
  {
    v9 = started;
    v8 = 1;
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdUserLogoffRecordsService", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bduserlogoffrecords\\bduserlogoffrecordsservice.cpp", "bdUserLogoffRecordsService::startTask", 0x26u, "Failed to start bdUserLogoffRecordsService task: %d: Error %i", v8, v9);
  }
  m_ptr = newTask.m_ptr;
  v10 = newTask.m_ptr;
  if ( newTask.m_ptr )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)&newTask.m_ptr->m_refCount, 1u);
    m_ptr = newTask.m_ptr;
  }
  if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 && newTask.m_ptr )
    ((void (__fastcall *)(bdStructBufferTask *, __int64))newTask.m_ptr->~bdReferencable)(newTask.m_ptr, 1i64);
  if ( &v10 != (bdRemoteTask **)result )
  {
    if ( result->m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result->m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result->m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))result->m_ptr->~bdReferencable)(result->m_ptr, 1i64);
    v7 = v10;
    result->m_ptr = v10;
    if ( !v7 )
      return result;
    _InterlockedExchangeAdd((volatile signed __int32 *)&v7->m_refCount, 1u);
  }
  if ( v10 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v10->m_refCount, 0xFFFFFFFF) == 1 )
      ((void (__fastcall *)(bdRemoteTask *, __int64))v10->~bdReferencable)(v10, 1i64);
  }
  return result;
}

/*
==============
bdUserLogoffRecordsService::startTask
==============
*/
bdReference<bdRemoteTask> *bdUserLogoffRecordsService::startTask(bdUserLogoffRecordsService *this, bdReference<bdRemoteTask> *result, unsigned __int8 taskID, const bdStructBufferSerializable *request, bdStructBufferSerializable *response)
{
  bdLobbyErrorCode started; 
  bdStructBufferTask *m_ptr; 
  int v10; 
  bdLobbyErrorCode v11; 
  bdReference<bdStructBufferTask> v12; 

  v12.m_ptr = NULL;
  started = bdRemoteTaskManager::startStructTask(this->m_remoteTaskManager, &v12, 0xC7u, taskID, request, response, NULL);
  if ( started )
  {
    v11 = started;
    v10 = taskID;
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdUserLogoffRecordsService", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bduserlogoffrecords\\bduserlogoffrecordsservice.cpp", "bdUserLogoffRecordsService::startTask", 0x26u, "Failed to start bdUserLogoffRecordsService task: %d: Error %i", v10, v11);
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

