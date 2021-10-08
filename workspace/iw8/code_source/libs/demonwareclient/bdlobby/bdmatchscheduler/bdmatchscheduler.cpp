/*
==============
bdMatchScheduler::listScheduledMatches
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMatchScheduler::listScheduledMatches(bdMatchScheduler *this, bdReference<bdRemoteTask> *result, bdScheduledMatchInfo *scheduledMatchInfos, unsigned int numScheduledMatchInfos)
{
  return ?listScheduledMatches@bdMatchScheduler@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEAVbdScheduledMatchInfo@@I@Z(this, result, scheduledMatchInfos, numScheduledMatchInfos);
}

/*
==============
bdMatchScheduler::bdMatchScheduler
==============
*/

void __fastcall bdMatchScheduler::bdMatchScheduler(bdMatchScheduler *this, bdRemoteTaskManager *const remoteTaskManager)
{
  ??0bdMatchScheduler@@QEAA@QEAVbdRemoteTaskManager@@@Z(this, remoteTaskManager);
}

/*
==============
bdMatchScheduler::getScheduledMatch
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMatchScheduler::getScheduledMatch(bdMatchScheduler *this, bdReference<bdRemoteTask> *result, unsigned __int64 matchID, bdScheduledMatchInfo *scheduledMatchInfo)
{
  return ?getScheduledMatch@bdMatchScheduler@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KPEAVbdScheduledMatchInfo@@@Z(this, result, matchID, scheduledMatchInfo);
}

/*
==============
bdMatchScheduler::recordScheduledMatchEvent
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMatchScheduler::recordScheduledMatchEvent(bdMatchScheduler *this, bdReference<bdRemoteTask> *result, unsigned __int64 matchID, unsigned __int8 *eventData, unsigned int eventSizeBytes)
{
  return ?recordScheduledMatchEvent@bdMatchScheduler@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KPEAEI@Z(this, result, matchID, eventData, eventSizeBytes);
}

/*
==============
bdMatchScheduler::listMatchEvents
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMatchScheduler::listMatchEvents(bdMatchScheduler *this, bdReference<bdRemoteTask> *result, unsigned __int64 matchID, bdMatchEventInfo *matchEventInfos, unsigned int numMatchEventInfos)
{
  return ?listMatchEvents@bdMatchScheduler@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KPEAVbdMatchEventInfo@@I@Z(this, result, matchID, matchEventInfos, numMatchEventInfos);
}

/*
==============
bdMatchScheduler::~bdMatchScheduler
==============
*/

void __fastcall bdMatchScheduler::~bdMatchScheduler(bdMatchScheduler *this)
{
  ??1bdMatchScheduler@@QEAA@XZ(this);
}

/*
==============
bdMatchScheduler::bdMatchScheduler
==============
*/
void bdMatchScheduler::bdMatchScheduler(bdMatchScheduler *this, bdRemoteTaskManager *const remoteTaskManager)
{
  this->m_remoteTaskManager = remoteTaskManager;
}

/*
==============
bdMatchScheduler::~bdMatchScheduler
==============
*/
void bdMatchScheduler::~bdMatchScheduler(bdMatchScheduler *this)
{
  ;
}

/*
==============
bdMatchScheduler::getScheduledMatch
==============
*/
bdReference<bdRemoteTask> *bdMatchScheduler::getScheduledMatch(bdMatchScheduler *this, bdReference<bdRemoteTask> *result, unsigned __int64 matchID, bdScheduledMatchInfo *scheduledMatchInfo)
{
  _BOOL8 v8; 
  bool v9; 
  bdLobbyErrorCode started; 
  __int64 v12; 
  bdReference<bdTaskByteBuffer> queryParams; 
  __int64 v14; 
  bdTaskParams v15; 

  v14 = -2i64;
  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&v15, 0x96u, 2u, 0x400u, 0xFFFFu);
  LOBYTE(v8) = 1;
  if ( v15.ensureCapacity(&v15, 8u, v8) )
  {
    if ( v15.m_isWritingArray )
      --v15.m_arrayWriteCount;
    if ( !v15.m_serializeOk || (v9 = bdByteBuffer::writeUInt64(v15.m_buffer.m_ptr, matchID), v15.m_serializeOk = 1, !v9) )
      v15.m_serializeOk = 0;
  }
  if ( (v15.m_isWritingArray || v15.m_arrayWriteCount) && ((bdLogMessage(BD_LOG_WARNING, "warn/", "bdLobbyCommon/bdBufferParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdbufferparams.inl", "bdBufferParams::serializedOk", 0xECu, "Did you forget to call arrayEnd() at the correct time (remaining = %u)?", v15.m_arrayWriteCount), v15.m_isWritingArray) || v15.m_arrayWriteCount) || !v15.m_serializeOk || !v15.m_buffer.m_ptr || !v15.m_buffer.m_ptr->m_data )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "matchScheduler", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmatchscheduler\\bdmatchscheduler.cpp", "bdMatchScheduler::getScheduledMatch", 0x3Fu, "Failed to serialize the task buffer.");
  }
  else
  {
    queryParams.m_ptr = v15.m_taskBuffer.m_ptr;
    if ( v15.m_taskBuffer.m_ptr )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v15.m_taskBuffer.m_ptr->m_refCount, 1u);
    started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &queryParams);
    if ( started )
    {
      LODWORD(v12) = started;
      bdLogMessage(BD_LOG_WARNING, "warn/", "matchScheduler", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmatchscheduler\\bdmatchscheduler.cpp", "bdMatchScheduler::getScheduledMatch", 0x36u, "Failed to start task: Error %i", v12);
    }
    else
    {
      bdRemoteTask::setTaskResult(result->m_ptr, scheduledMatchInfo, 1u);
    }
    if ( queryParams.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&queryParams.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && queryParams.m_ptr )
      ((void (__fastcall *)(bdTaskByteBuffer *, __int64))queryParams.m_ptr->~bdReferencable)(queryParams.m_ptr, 1i64);
  }
  bdTaskParams::~bdTaskParams(&v15);
  return result;
}

/*
==============
bdMatchScheduler::listMatchEvents
==============
*/
bdReference<bdRemoteTask> *bdMatchScheduler::listMatchEvents(bdMatchScheduler *this, bdReference<bdRemoteTask> *result, unsigned __int64 matchID, bdMatchEventInfo *matchEventInfos, unsigned int numMatchEventInfos)
{
  _BOOL8 v9; 
  _BOOL8 v10; 
  bool v11; 
  bool v12; 
  bdLobbyErrorCode started; 
  __int64 v15; 
  bdReference<bdTaskByteBuffer> queryParams; 
  __int64 v17; 
  bdTaskParams v18; 

  v17 = -2i64;
  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&v18, 0x96u, 4u, 0x400u, 0xFFFFu);
  LOBYTE(v9) = 1;
  if ( v18.ensureCapacity(&v18, 8u, v9) )
  {
    if ( v18.m_isWritingArray )
      --v18.m_arrayWriteCount;
    if ( !v18.m_serializeOk || (v11 = bdByteBuffer::writeUInt64(v18.m_buffer.m_ptr, matchID), v18.m_serializeOk = 1, !v11) )
      v18.m_serializeOk = 0;
  }
  LOBYTE(v10) = 1;
  if ( v18.ensureCapacity(&v18, 4u, v10) )
  {
    if ( v18.m_isWritingArray )
      --v18.m_arrayWriteCount;
    if ( !v18.m_serializeOk || (v12 = bdByteBuffer::writeUInt32(v18.m_buffer.m_ptr, numMatchEventInfos), v18.m_serializeOk = 1, !v12) )
      v18.m_serializeOk = 0;
  }
  if ( (v18.m_isWritingArray || v18.m_arrayWriteCount) && ((bdLogMessage(BD_LOG_WARNING, "warn/", "bdLobbyCommon/bdBufferParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdbufferparams.inl", "bdBufferParams::serializedOk", 0xECu, "Did you forget to call arrayEnd() at the correct time (remaining = %u)?", v18.m_arrayWriteCount), v18.m_isWritingArray) || v18.m_arrayWriteCount) || !v18.m_serializeOk || !v18.m_buffer.m_ptr || !v18.m_buffer.m_ptr->m_data )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "matchScheduler", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmatchscheduler\\bdmatchscheduler.cpp", "bdMatchScheduler::listMatchEvents", 0xA2u, "Failed to serialize the task buffer.");
  }
  else
  {
    queryParams.m_ptr = v18.m_taskBuffer.m_ptr;
    if ( v18.m_taskBuffer.m_ptr )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v18.m_taskBuffer.m_ptr->m_refCount, 1u);
    started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &queryParams);
    if ( started )
    {
      LODWORD(v15) = started;
      bdLogMessage(BD_LOG_WARNING, "warn/", "matchScheduler", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmatchscheduler\\bdmatchscheduler.cpp", "bdMatchScheduler::listMatchEvents", 0x99u, "Failed to start task: Error %i", v15);
    }
    else
    {
      bdRemoteTask::setTaskResult(result->m_ptr, matchEventInfos, numMatchEventInfos);
    }
    if ( queryParams.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&queryParams.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && queryParams.m_ptr )
      ((void (__fastcall *)(bdTaskByteBuffer *, __int64))queryParams.m_ptr->~bdReferencable)(queryParams.m_ptr, 1i64);
  }
  bdTaskParams::~bdTaskParams(&v18);
  return result;
}

/*
==============
bdMatchScheduler::listScheduledMatches
==============
*/
bdReference<bdRemoteTask> *bdMatchScheduler::listScheduledMatches(bdMatchScheduler *this, bdReference<bdRemoteTask> *result, bdScheduledMatchInfo *scheduledMatchInfos, unsigned int numScheduledMatchInfos)
{
  _BOOL8 v8; 
  bool v9; 
  bdLobbyErrorCode started; 
  __int64 v12; 
  bdReference<bdTaskByteBuffer> queryParams; 
  __int64 v14; 
  bdTaskParams v15; 

  v14 = -2i64;
  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&v15, 0x96u, 1u, 0x400u, 0xFFFFu);
  LOBYTE(v8) = 1;
  if ( v15.ensureCapacity(&v15, 4u, v8) )
  {
    if ( v15.m_isWritingArray )
      --v15.m_arrayWriteCount;
    if ( !v15.m_serializeOk || (v9 = bdByteBuffer::writeUInt32(v15.m_buffer.m_ptr, numScheduledMatchInfos), v15.m_serializeOk = 1, !v9) )
      v15.m_serializeOk = 0;
  }
  if ( (v15.m_isWritingArray || v15.m_arrayWriteCount) && ((bdLogMessage(BD_LOG_WARNING, "warn/", "bdLobbyCommon/bdBufferParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdbufferparams.inl", "bdBufferParams::serializedOk", 0xECu, "Did you forget to call arrayEnd() at the correct time (remaining = %u)?", v15.m_arrayWriteCount), v15.m_isWritingArray) || v15.m_arrayWriteCount) || !v15.m_serializeOk || !v15.m_buffer.m_ptr || !v15.m_buffer.m_ptr->m_data )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "matchScheduler", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmatchscheduler\\bdmatchscheduler.cpp", "bdMatchScheduler::listScheduledMatches", 0x60u, "Failed to serialize the task buffer.");
  }
  else
  {
    queryParams.m_ptr = v15.m_taskBuffer.m_ptr;
    if ( v15.m_taskBuffer.m_ptr )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v15.m_taskBuffer.m_ptr->m_refCount, 1u);
    started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &queryParams);
    if ( started )
    {
      LODWORD(v12) = started;
      bdLogMessage(BD_LOG_WARNING, "warn/", "matchScheduler", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmatchscheduler\\bdmatchscheduler.cpp", "bdMatchScheduler::listScheduledMatches", 0x57u, "Failed to start task: Error %i", v12);
    }
    else
    {
      bdRemoteTask::setTaskResult(result->m_ptr, scheduledMatchInfos, numScheduledMatchInfos);
    }
    if ( queryParams.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&queryParams.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && queryParams.m_ptr )
      ((void (__fastcall *)(bdTaskByteBuffer *, __int64))queryParams.m_ptr->~bdReferencable)(queryParams.m_ptr, 1i64);
  }
  bdTaskParams::~bdTaskParams(&v15);
  return result;
}

/*
==============
bdMatchScheduler::recordScheduledMatchEvent
==============
*/
bdReference<bdRemoteTask> *bdMatchScheduler::recordScheduledMatchEvent(bdMatchScheduler *this, bdReference<bdRemoteTask> *result, unsigned __int64 matchID, unsigned __int8 *eventData, unsigned int eventSizeBytes)
{
  _BOOL8 v9; 
  bool v10; 
  bdLobbyErrorCode started; 
  __int64 v13; 
  bdReference<bdTaskByteBuffer> queryParams; 
  __int64 v15; 
  bdTaskParams v16; 

  v15 = -2i64;
  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&v16, 0x96u, 3u, 0x400u, 0xFFFFu);
  LOBYTE(v9) = 1;
  if ( v16.ensureCapacity(&v16, 8u, v9) )
  {
    if ( v16.m_isWritingArray )
      --v16.m_arrayWriteCount;
    if ( !v16.m_serializeOk || (v10 = bdByteBuffer::writeUInt64(v16.m_buffer.m_ptr, matchID), v16.m_serializeOk = 1, !v10) )
      v16.m_serializeOk = 0;
  }
  bdBufferParams::addBlob(&v16, eventData, eventSizeBytes);
  if ( (v16.m_isWritingArray || v16.m_arrayWriteCount) && ((bdLogMessage(BD_LOG_WARNING, "warn/", "bdLobbyCommon/bdBufferParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdbufferparams.inl", "bdBufferParams::serializedOk", 0xECu, "Did you forget to call arrayEnd() at the correct time (remaining = %u)?", v16.m_arrayWriteCount), v16.m_isWritingArray) || v16.m_arrayWriteCount) || !v16.m_serializeOk || !v16.m_buffer.m_ptr || !v16.m_buffer.m_ptr->m_data )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "matchScheduler", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmatchscheduler\\bdmatchscheduler.cpp", "bdMatchScheduler::recordScheduledMatchEvent", 0x7Fu, "Failed to serialize the task buffer.");
  }
  else
  {
    queryParams.m_ptr = v16.m_taskBuffer.m_ptr;
    if ( v16.m_taskBuffer.m_ptr )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v16.m_taskBuffer.m_ptr->m_refCount, 1u);
    started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &queryParams);
    if ( started )
    {
      LODWORD(v13) = started;
      bdLogMessage(BD_LOG_WARNING, "warn/", "matchScheduler", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmatchscheduler\\bdmatchscheduler.cpp", "bdMatchScheduler::recordScheduledMatchEvent", 0x7Au, "Failed to start task: Error %i", v13);
    }
    if ( queryParams.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&queryParams.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && queryParams.m_ptr )
      ((void (__fastcall *)(bdTaskByteBuffer *, __int64))queryParams.m_ptr->~bdReferencable)(queryParams.m_ptr, 1i64);
  }
  bdTaskParams::~bdTaskParams(&v16);
  return result;
}

