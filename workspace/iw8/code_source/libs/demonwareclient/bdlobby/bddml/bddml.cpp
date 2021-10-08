/*
==============
bdDML::~bdDML
==============
*/

void __fastcall bdDML::~bdDML(bdDML *this)
{
  ??1bdDML@@QEAA@XZ(this);
}

/*
==============
bdDML::bdDML
==============
*/

void __fastcall bdDML::bdDML(bdDML *this, bdRemoteTaskManager *const remoteTaskManager)
{
  ??0bdDML@@QEAA@QEAVbdRemoteTaskManager@@@Z(this, remoteTaskManager);
}

/*
==============
bdDML::getUsersLastLogonData
==============
*/

bdReference<bdRemoteTask> *__fastcall bdDML::getUsersLastLogonData(bdDML *this, bdReference<bdRemoteTask> *result, const unsigned __int64 *userIDs, const unsigned int numUsers, bdDMLUserLogonInfo *logonInfo)
{
  return ?getUsersLastLogonData@bdDML@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEB_KIQEAVbdDMLUserLogonInfo@@@Z(this, result, userIDs, numUsers, logonInfo);
}

/*
==============
bdDML::recordIP
==============
*/

bdReference<bdRemoteTask> *__fastcall bdDML::recordIP(bdDML *this, bdReference<bdRemoteTask> *result, const unsigned int ipAddr)
{
  return ?recordIP@bdDML@@QEAA?AV?$bdReference@VbdRemoteTask@@@@I@Z(this, result, ipAddr);
}

/*
==============
bdDML::getUserData
==============
*/

bdReference<bdRemoteTask> *__fastcall bdDML::getUserData(bdDML *this, bdReference<bdRemoteTask> *result, bdDMLInfo *info)
{
  return ?getUserData@bdDML@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEAVbdDMLInfo@@@Z(this, result, info);
}

/*
==============
bdDML::getUserHierarchicalData
==============
*/

bdReference<bdRemoteTask> *__fastcall bdDML::getUserHierarchicalData(bdDML *this, bdReference<bdRemoteTask> *result, bdDMLHierarchicalInfo *info)
{
  return ?getUserHierarchicalData@bdDML@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEAVbdDMLHierarchicalInfo@@@Z(this, result, info);
}

/*
==============
bdDML::bdDML
==============
*/
void bdDML::bdDML(bdDML *this, bdRemoteTaskManager *const remoteTaskManager)
{
  this->m_remoteTaskManager = remoteTaskManager;
}

/*
==============
bdDML::~bdDML
==============
*/
void bdDML::~bdDML(bdDML *this)
{
  ;
}

/*
==============
bdDML::getUserData
==============
*/
bdReference<bdRemoteTask> *bdDML::getUserData(bdDML *this, bdReference<bdRemoteTask> *result, bdDMLInfo *info)
{
  bdLobbyErrorCode started; 
  bdTaskParams taskParams; 

  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&taskParams, 0x1Bu, 2u, 0x400u, 0xFFFFu);
  if ( *(_OWORD *)&taskParams.m_taskResults == 0i64 )
  {
    taskParams.m_taskResults = info;
    taskParams.m_maxResults = 1;
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
    taskParams.m_serializeOk = 0;
  }
  started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
  if ( started )
    bdLogMessage(BD_LOG_WARNING, "warn/", "dml", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bddml\\bddml.cpp", "bdDML::getUserData", 0x47u, "Failed to start task: Error %i", started);
  bdTaskParams::~bdTaskParams(&taskParams);
  return result;
}

/*
==============
bdDML::getUserHierarchicalData
==============
*/
bdReference<bdRemoteTask> *bdDML::getUserHierarchicalData(bdDML *this, bdReference<bdRemoteTask> *result, bdDMLHierarchicalInfo *info)
{
  bdLobbyErrorCode started; 
  bdTaskParams taskParams; 

  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&taskParams, 0x1Bu, 3u, 0x400u, 0xFFFFu);
  if ( *(_OWORD *)&taskParams.m_taskResults == 0i64 )
  {
    taskParams.m_taskResults = info;
    taskParams.m_maxResults = 1;
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
    taskParams.m_serializeOk = 0;
  }
  started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
  if ( started )
    bdLogMessage(BD_LOG_WARNING, "warn/", "dml", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bddml\\bddml.cpp", "bdDML::getUserHierarchicalData", 0x5Fu, "Failed to start task: Error %i", started);
  bdTaskParams::~bdTaskParams(&taskParams);
  return result;
}

/*
==============
bdDML::getUsersLastLogonData
==============
*/
bdReference<bdRemoteTask> *bdDML::getUsersLastLogonData(bdDML *this, bdReference<bdRemoteTask> *result, const unsigned __int64 *userIDs, const unsigned int numUsers, bdDMLUserLogonInfo *logonInfo)
{
  _BOOL8 v9; 
  __int64 v10; 
  bool v11; 
  bdLobbyErrorCode started; 
  bdTaskParams v14; 

  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&v14, 0x1Bu, 4u, 0x400u, 0xFFFFu);
  bdBufferParams::arrayStart(&v14, 0xAu, numUsers, 8u);
  if ( numUsers )
  {
    v10 = numUsers;
    do
    {
      LOBYTE(v9) = 1;
      if ( v14.ensureCapacity(&v14, 8u, v9) )
      {
        if ( v14.m_isWritingArray )
          --v14.m_arrayWriteCount;
        if ( !v14.m_serializeOk || (v11 = bdByteBuffer::writeUInt64(v14.m_buffer.m_ptr, *userIDs), v14.m_serializeOk = 1, !v11) )
          v14.m_serializeOk = 0;
      }
      ++userIDs;
      --v10;
    }
    while ( v10 );
  }
  bdBufferParams::arrayEnd(&v14);
  if ( v14.m_taskResults || v14.m_taskResultRefs )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
    v14.m_serializeOk = 0;
  }
  else
  {
    v14.m_taskResults = logonInfo;
    v14.m_maxResults = numUsers;
  }
  started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &v14);
  if ( started )
    bdLogMessage(BD_LOG_WARNING, "warn/", "dml", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bddml\\bddml.cpp", "bdDML::getUsersLastLogonData", 0x81u, "Failed to start task: Error %i", started);
  bdTaskParams::~bdTaskParams(&v14);
  return result;
}

/*
==============
bdDML::recordIP
==============
*/
bdReference<bdRemoteTask> *bdDML::recordIP(bdDML *this, bdReference<bdRemoteTask> *result, const unsigned int ipAddr)
{
  _BOOL8 v6; 
  bool v7; 
  bdLobbyErrorCode started; 
  bdLobbyErrorCode v10; 
  bdTaskParams taskParams; 

  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&taskParams, 0x1Bu, 1u, 0x400u, 0xFFFFu);
  LOBYTE(v6) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 4u, v6) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v7 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, ipAddr), taskParams.m_serializeOk = 1, !v7) )
      taskParams.m_serializeOk = 0;
  }
  started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
  if ( started )
  {
    v10 = started;
    bdLogMessage(BD_LOG_WARNING, "warn/", "dml", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bddml\\bddml.cpp", "bdDML::recordIP", 0x2Fu, "Failed to start task: Error %i", v10);
  }
  bdTaskParams::~bdTaskParams(&taskParams);
  return result;
}

