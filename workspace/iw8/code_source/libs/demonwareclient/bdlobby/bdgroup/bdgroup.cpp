/*
==============
bdGroup::bdGroup
==============
*/

void __fastcall bdGroup::bdGroup(bdGroup *this, bdRemoteTaskManager *const remoteTaskManager)
{
  ??0bdGroup@@QEAA@QEAVbdRemoteTaskManager@@@Z(this, remoteTaskManager);
}

/*
==============
bdGroup::setGroups
==============
*/

bdReference<bdRemoteTask> *__fastcall bdGroup::setGroups(bdGroup *this, bdReference<bdRemoteTask> *result, const unsigned int *const groupIDs, const unsigned int numEntries)
{
  return ?setGroups@bdGroup@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBII@Z(this, result, groupIDs, numEntries);
}

/*
==============
bdGroup::getGroupCounts
==============
*/

bdReference<bdRemoteTask> *__fastcall bdGroup::getGroupCounts(bdGroup *this, bdReference<bdRemoteTask> *result, const unsigned int *const groupIDs, const unsigned int numGroupIDs, bdGroupCount *results, const unsigned int numEntries)
{
  return ?getGroupCounts@bdGroup@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBIIQEAVbdGroupCount@@I@Z(this, result, groupIDs, numGroupIDs, results, numEntries);
}

/*
==============
bdGroup::~bdGroup
==============
*/

void __fastcall bdGroup::~bdGroup(bdGroup *this)
{
  ??1bdGroup@@QEAA@XZ(this);
}

/*
==============
bdGroup::getEntityGroups
==============
*/

bdReference<bdRemoteTask> *__fastcall bdGroup::getEntityGroups(bdGroup *this, bdReference<bdRemoteTask> *result, const unsigned __int64 entityID, bdGroupID *results, const unsigned int numEntries)
{
  return ?getEntityGroups@bdGroup@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KQEAVbdGroupID@@I@Z(this, result, entityID, results, numEntries);
}

/*
==============
bdGroup::setGroupsForEntity
==============
*/

bdReference<bdRemoteTask> *__fastcall bdGroup::setGroupsForEntity(bdGroup *this, bdReference<bdRemoteTask> *result, const unsigned __int64 entityID, const unsigned int *const groupIDs, const unsigned int numEntries)
{
  return ?setGroupsForEntity@bdGroup@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KQEBII@Z(this, result, entityID, groupIDs, numEntries);
}

/*
==============
bdGroup::bdGroup
==============
*/
void bdGroup::bdGroup(bdGroup *this, bdRemoteTaskManager *const remoteTaskManager)
{
  this->m_remoteTaskManager = remoteTaskManager;
}

/*
==============
bdGroup::~bdGroup
==============
*/
void bdGroup::~bdGroup(bdGroup *this)
{
  ;
}

/*
==============
bdGroup::getEntityGroups
==============
*/
bdReference<bdRemoteTask> *bdGroup::getEntityGroups(bdGroup *this, bdReference<bdRemoteTask> *result, const unsigned __int64 entityID, bdGroupID *results, const unsigned int numEntries)
{
  _BOOL8 v9; 
  bool v10; 
  bdLobbyErrorCode started; 
  bdTaskParams taskParams; 

  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&taskParams, 0x1Cu, 3u, 0x400u, 0xFFFFu);
  LOBYTE(v9) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 8u, v9) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v10 = bdByteBuffer::writeUInt64(taskParams.m_buffer.m_ptr, entityID), taskParams.m_serializeOk = 1, !v10) )
      taskParams.m_serializeOk = 0;
  }
  if ( taskParams.m_taskResults || taskParams.m_taskResultRefs )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
    taskParams.m_serializeOk = 0;
  }
  else
  {
    taskParams.m_taskResults = results;
    taskParams.m_maxResults = numEntries;
  }
  started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
  if ( started )
    bdLogMessage(BD_LOG_WARNING, "warn/", "groups", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdgroup\\bdgroup.cpp", "bdGroup::getEntityGroups", 0x6Bu, "Failed to start task: Error %i", started);
  bdTaskParams::~bdTaskParams(&taskParams);
  return result;
}

/*
==============
bdGroup::getGroupCounts
==============
*/
bdReference<bdRemoteTask> *bdGroup::getGroupCounts(bdGroup *this, bdReference<bdRemoteTask> *result, const unsigned int *const groupIDs, const unsigned int numGroupIDs, bdGroupCount *results, const unsigned int numEntries)
{
  __int64 v6; 
  _BOOL8 v10; 
  bool v11; 
  bdLobbyErrorCode started; 
  bdTaskParams v14; 

  v6 = numGroupIDs;
  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&v14, 0x1Cu, 4u, 0x400u, 0xFFFFu);
  bdBufferParams::arrayStart(&v14, 8u, v6, 4u);
  if ( (_DWORD)v6 )
  {
    do
    {
      LOBYTE(v10) = 1;
      if ( v14.ensureCapacity(&v14, 4u, v10) )
      {
        if ( v14.m_isWritingArray )
          --v14.m_arrayWriteCount;
        if ( !v14.m_serializeOk || (v11 = bdByteBuffer::writeUInt32(v14.m_buffer.m_ptr, *groupIDs), v14.m_serializeOk = 1, !v11) )
          v14.m_serializeOk = 0;
      }
      ++groupIDs;
      --v6;
    }
    while ( v6 );
  }
  bdBufferParams::arrayEnd(&v14);
  if ( v14.m_taskResults || v14.m_taskResultRefs )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
    v14.m_serializeOk = 0;
  }
  else
  {
    v14.m_taskResults = results;
    v14.m_maxResults = numEntries;
  }
  started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &v14);
  if ( started )
    bdLogMessage(BD_LOG_WARNING, "warn/", "groups", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdgroup\\bdgroup.cpp", "bdGroup::getGroupCounts", 0x8Bu, "Failed to start task: Error %i", started);
  bdTaskParams::~bdTaskParams(&v14);
  return result;
}

/*
==============
bdGroup::setGroups
==============
*/
bdReference<bdRemoteTask> *bdGroup::setGroups(bdGroup *this, bdReference<bdRemoteTask> *result, const unsigned int *const groupIDs, const unsigned int numEntries)
{
  __int64 v4; 
  _BOOL8 v8; 
  bool v9; 
  bdLobbyErrorCode started; 
  bdLobbyErrorCode v12; 
  bdTaskParams v13; 

  v4 = numEntries;
  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&v13, 0x1Cu, 1u, 0x400u, 0xFFFFu);
  bdBufferParams::arrayStart(&v13, 8u, v4, 4u);
  if ( (_DWORD)v4 )
  {
    do
    {
      LOBYTE(v8) = 1;
      if ( v13.ensureCapacity(&v13, 4u, v8) )
      {
        if ( v13.m_isWritingArray )
          --v13.m_arrayWriteCount;
        if ( !v13.m_serializeOk || (v9 = bdByteBuffer::writeUInt32(v13.m_buffer.m_ptr, *groupIDs), v13.m_serializeOk = 1, !v9) )
          v13.m_serializeOk = 0;
      }
      ++groupIDs;
      --v4;
    }
    while ( v4 );
  }
  bdBufferParams::arrayEnd(&v13);
  started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &v13);
  if ( started )
  {
    v12 = started;
    bdLogMessage(BD_LOG_WARNING, "warn/", "groups", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdgroup\\bdgroup.cpp", "bdGroup::setGroups", 0x31u, "Failed to start task: Error %i", v12);
  }
  bdTaskParams::~bdTaskParams(&v13);
  return result;
}

/*
==============
bdGroup::setGroupsForEntity
==============
*/
bdReference<bdRemoteTask> *bdGroup::setGroupsForEntity(bdGroup *this, bdReference<bdRemoteTask> *result, const unsigned __int64 entityID, const unsigned int *const groupIDs, const unsigned int numEntries)
{
  _BOOL8 v9; 
  bool v10; 
  __int64 v11; 
  _BOOL8 v12; 
  bool v13; 
  bdLobbyErrorCode started; 
  bdLobbyErrorCode v16; 
  bdTaskParams taskParams; 

  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&taskParams, 0x1Cu, 2u, 0x400u, 0xFFFFu);
  LOBYTE(v9) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 8u, v9) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v10 = bdByteBuffer::writeUInt64(taskParams.m_buffer.m_ptr, entityID), taskParams.m_serializeOk = 1, !v10) )
      taskParams.m_serializeOk = 0;
  }
  v11 = numEntries;
  bdBufferParams::arrayStart(&taskParams, 8u, numEntries, 4u);
  if ( numEntries )
  {
    do
    {
      LOBYTE(v12) = 1;
      if ( taskParams.ensureCapacity(&taskParams, 4u, v12) )
      {
        if ( taskParams.m_isWritingArray )
          --taskParams.m_arrayWriteCount;
        if ( !taskParams.m_serializeOk || (v13 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, *groupIDs), taskParams.m_serializeOk = 1, !v13) )
          taskParams.m_serializeOk = 0;
      }
      ++groupIDs;
      --v11;
    }
    while ( v11 );
  }
  bdBufferParams::arrayEnd(&taskParams);
  started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
  if ( started )
  {
    v16 = started;
    bdLogMessage(BD_LOG_WARNING, "warn/", "groups", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdgroup\\bdgroup.cpp", "bdGroup::setGroupsForEntity", 0x50u, "Failed to start task: Error %i", v16);
  }
  bdTaskParams::~bdTaskParams(&taskParams);
  return result;
}

