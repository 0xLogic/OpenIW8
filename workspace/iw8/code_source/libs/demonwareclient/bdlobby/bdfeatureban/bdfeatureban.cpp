/*
==============
bdFeatureBan::bdFeatureBan
==============
*/

void __fastcall bdFeatureBan::bdFeatureBan(bdFeatureBan *this, bdRemoteTaskManager *const remoteTaskManager)
{
  ??0bdFeatureBan@@QEAA@QEAVbdRemoteTaskManager@@@Z(this, remoteTaskManager);
}

/*
==============
bdFeatureBan::~bdFeatureBan
==============
*/

void __fastcall bdFeatureBan::~bdFeatureBan(bdFeatureBan *this)
{
  ??1bdFeatureBan@@QEAA@XZ(this);
}

/*
==============
bdFeatureBan::getFeatureBans
==============
*/

bdReference<bdRemoteTask> *__fastcall bdFeatureBan::getFeatureBans(bdFeatureBan *this, bdReference<bdRemoteTask> *result, unsigned __int64 userID, bdFeatureBanInfo *bans, unsigned int maxResults, unsigned int offset)
{
  return ?getFeatureBans@bdFeatureBan@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KPEAVbdFeatureBanInfo@@II@Z(this, result, userID, bans, maxResults, offset);
}

/*
==============
bdFeatureBan::bdFeatureBan
==============
*/
void bdFeatureBan::bdFeatureBan(bdFeatureBan *this, bdRemoteTaskManager *const remoteTaskManager)
{
  this->m_remoteTaskManager = remoteTaskManager;
}

/*
==============
bdFeatureBan::~bdFeatureBan
==============
*/
void bdFeatureBan::~bdFeatureBan(bdFeatureBan *this)
{
  ;
}

/*
==============
bdFeatureBan::getFeatureBans
==============
*/
bdReference<bdRemoteTask> *bdFeatureBan::getFeatureBans(bdFeatureBan *this, bdReference<bdRemoteTask> *result, unsigned __int64 userID, bdFeatureBanInfo *bans, unsigned int maxResults, unsigned int offset)
{
  _BOOL8 v10; 
  _BOOL8 v11; 
  bool v12; 
  _BOOL8 v13; 
  bool v14; 
  bdLobbyErrorCode started; 
  __int64 v17; 
  bdReference<bdTaskByteBuffer> queryParams; 
  __int64 v19; 
  bdTaskParams v20; 

  v19 = -2i64;
  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&v20, 0x45u, 1u, 0x400u, 0xFFFFu);
  LOBYTE(v10) = 1;
  if ( v20.ensureCapacity(&v20, 8u, v10) )
  {
    if ( v20.m_isWritingArray )
      --v20.m_arrayWriteCount;
    if ( !v20.m_serializeOk || (v12 = bdByteBuffer::writeUInt64(v20.m_buffer.m_ptr, userID), v20.m_serializeOk = 1, !v12) )
      v20.m_serializeOk = 0;
  }
  LOBYTE(v11) = 1;
  if ( v20.ensureCapacity(&v20, 4u, v11) )
  {
    if ( v20.m_isWritingArray )
      --v20.m_arrayWriteCount;
    if ( !v20.m_serializeOk || (v14 = bdByteBuffer::writeUInt32(v20.m_buffer.m_ptr, offset), v20.m_serializeOk = 1, !v14) )
      v20.m_serializeOk = 0;
  }
  LOBYTE(v13) = 1;
  if ( v20.ensureCapacity(&v20, 4u, v13) )
  {
    if ( v20.m_isWritingArray )
      --v20.m_arrayWriteCount;
    if ( v20.m_serializeOk && bdByteBuffer::writeUInt32(v20.m_buffer.m_ptr, maxResults) )
    {
      v20.m_serializeOk = 1;
      goto LABEL_22;
    }
    v20.m_serializeOk = 0;
  }
  else if ( v20.m_serializeOk )
  {
    goto LABEL_22;
  }
  bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::getTaskBuffer", 0x13u, "Failed to serialize one or more task parameters.");
LABEL_22:
  queryParams.m_ptr = v20.m_taskBuffer.m_ptr;
  if ( v20.m_taskBuffer.m_ptr )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v20.m_taskBuffer.m_ptr->m_refCount, 1u);
  if ( (v20.m_isWritingArray || v20.m_arrayWriteCount) && ((bdLogMessage(BD_LOG_WARNING, "warn/", "bdLobbyCommon/bdBufferParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdbufferparams.inl", "bdBufferParams::serializedOk", 0xECu, "Did you forget to call arrayEnd() at the correct time (remaining = %u)?", v20.m_arrayWriteCount), v20.m_isWritingArray) || v20.m_arrayWriteCount) || !v20.m_serializeOk || !v20.m_buffer.m_ptr || !v20.m_buffer.m_ptr->m_data )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "feature ban", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdfeatureban\\bdfeatureban.cpp", "bdFeatureBan::getFeatureBans", 0x3Bu, "Failed to serialize the task buffer.");
  }
  else
  {
    started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &queryParams);
    if ( started )
    {
      LODWORD(v17) = started;
      bdLogMessage(BD_LOG_WARNING, "warn/", "feature ban", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdfeatureban\\bdfeatureban.cpp", "bdFeatureBan::getFeatureBans", 0x31u, "Failed to start task: Error %i", v17);
    }
    else
    {
      bdRemoteTask::setTaskResult(result->m_ptr, bans, maxResults);
    }
  }
  if ( queryParams.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&queryParams.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
  {
    if ( queryParams.m_ptr )
      ((void (__fastcall *)(bdTaskByteBuffer *, __int64))queryParams.m_ptr->~bdReferencable)(queryParams.m_ptr, 1i64);
    queryParams.m_ptr = NULL;
  }
  bdTaskParams::~bdTaskParams(&v20);
  return result;
}

