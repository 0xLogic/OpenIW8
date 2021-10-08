/*
==============
bdMLG::~bdMLG
==============
*/

void __fastcall bdMLG::~bdMLG(bdMLG *this)
{
  ??1bdMLG@@QEAA@XZ(this);
}

/*
==============
bdMLG::bdMLG
==============
*/

void __fastcall bdMLG::bdMLG(bdMLG *this, bdRemoteTaskManager *const remoteTaskManager)
{
  ??0bdMLG@@QEAA@QEAVbdRemoteTaskManager@@@Z(this, remoteTaskManager);
}

/*
==============
bdMLG::isUserRegistered
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMLG::isUserRegistered(bdMLG *this, bdReference<bdRemoteTask> *result, bdBoolResult *const isRegistered)
{
  return ?isUserRegistered@bdMLG@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEAVbdBoolResult@@@Z(this, result, isRegistered);
}

/*
==============
bdMLG::bdMLG
==============
*/
void bdMLG::bdMLG(bdMLG *this, bdRemoteTaskManager *const remoteTaskManager)
{
  this->m_remoteTaskManager = remoteTaskManager;
}

/*
==============
bdMLG::~bdMLG
==============
*/
void bdMLG::~bdMLG(bdMLG *this)
{
  ;
}

/*
==============
bdMLG::isUserRegistered
==============
*/
bdReference<bdRemoteTask> *bdMLG::isUserRegistered(bdMLG *this, bdReference<bdRemoteTask> *result, bdBoolResult *const isRegistered)
{
  bdLobbyErrorCode started; 
  __int64 v8; 
  bdTaskParams v9; 
  bdReference<bdTaskByteBuffer> queryParams; 

  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&v9, 0x97u, 1u, 0x400u, 0xFFFFu);
  if ( (v9.m_isWritingArray || v9.m_arrayWriteCount) && ((bdLogMessage(BD_LOG_WARNING, "warn/", "bdLobbyCommon/bdBufferParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdbufferparams.inl", "bdBufferParams::serializedOk", 0xECu, "Did you forget to call arrayEnd() at the correct time (remaining = %u)?", v9.m_arrayWriteCount), v9.m_isWritingArray) || v9.m_arrayWriteCount) || !v9.m_serializeOk || !v9.m_buffer.m_ptr || !v9.m_buffer.m_ptr->m_data )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdESportsProvider/bdMLG", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdesportsprovider\\bdmlg.cpp", "bdMLG::isUserRegistered", 0x36u, "Failed to serialize the task buffer.");
  }
  else
  {
    queryParams.m_ptr = v9.m_taskBuffer.m_ptr;
    if ( v9.m_taskBuffer.m_ptr )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v9.m_taskBuffer.m_ptr->m_refCount, 1u);
    started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &queryParams);
    if ( started )
    {
      LODWORD(v8) = started;
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdESportsProvider/bdMLG", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdesportsprovider\\bdmlg.cpp", "bdMLG::isUserRegistered", 0x2Du, "Failed to start task: Error %d", v8);
    }
    else
    {
      bdRemoteTask::setTaskResult(result->m_ptr, isRegistered, 1u);
    }
    if ( queryParams.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&queryParams.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && queryParams.m_ptr )
      ((void (__fastcall *)(bdTaskByteBuffer *, __int64))queryParams.m_ptr->~bdReferencable)(queryParams.m_ptr, 1i64);
  }
  bdTaskParams::~bdTaskParams(&v9);
  return result;
}

