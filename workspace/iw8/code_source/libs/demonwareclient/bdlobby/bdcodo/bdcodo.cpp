/*
==============
bdCODO::getTeamAutoJoinLevel
==============
*/

bdReference<bdRemoteTask> *__fastcall bdCODO::getTeamAutoJoinLevel(bdCODO *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, bdCODOAutoJoinLevelInfo *const autoJoinLevelInfo)
{
  return ?getTeamAutoJoinLevel@bdCODO@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KQEAVbdCODOAutoJoinLevelInfo@@@Z(this, result, teamID, autoJoinLevelInfo);
}

/*
==============
bdCODO::setTeamAutoJoinLevel
==============
*/

bdReference<bdRemoteTask> *__fastcall bdCODO::setTeamAutoJoinLevel(bdCODO *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, const unsigned int autoJoinLevel)
{
  return ?setTeamAutoJoinLevel@bdCODO@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KI@Z(this, result, teamID, autoJoinLevel);
}

/*
==============
bdCODO::setTeamMinimumApplicationLevel
==============
*/

bdReference<bdRemoteTask> *__fastcall bdCODO::setTeamMinimumApplicationLevel(bdCODO *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, const unsigned int minimumApplicationLevel)
{
  return ?setTeamMinimumApplicationLevel@bdCODO@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KI@Z(this, result, teamID, minimumApplicationLevel);
}

/*
==============
bdCODO::getTeamMinimumApplicationLevel
==============
*/

bdReference<bdRemoteTask> *__fastcall bdCODO::getTeamMinimumApplicationLevel(bdCODO *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, bdCODOMinimumApplicationLevelInfo *const minimumApplicationLevelInfo)
{
  return ?getTeamMinimumApplicationLevel@bdCODO@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KQEAVbdCODOMinimumApplicationLevelInfo@@@Z(this, result, teamID, minimumApplicationLevelInfo);
}

/*
==============
bdCODO::setTeamPublicProfilePartial
==============
*/

bdReference<bdRemoteTask> *__fastcall bdCODO::setTeamPublicProfilePartial(bdCODO *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, bdProfileItem *fieldUpdates, const unsigned int numFieldUpdates, unsigned int collisionField)
{
  return ?setTeamPublicProfilePartial@bdCODO@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KQEAVbdProfileItem@@II@Z(this, result, teamID, fieldUpdates, numFieldUpdates, collisionField);
}

/*
==============
bdCODO::addApplication
==============
*/

bdReference<bdRemoteTask> *__fastcall bdCODO::addApplication(bdCODO *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, const unsigned __int64 replacesTeamID, const bdUserAccountID *userID, const void *const attachment, const unsigned int attachmentSize)
{
  return ?addApplication@bdCODO@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_K0VbdUserAccountID@@QEBXI@Z(this, result, teamID, replacesTeamID, userID, attachment, attachmentSize);
}

/*
==============
bdCODO::resetStats
==============
*/

bdReference<bdRemoteTask> *__fastcall bdCODO::resetStats(bdCODO *this, bdReference<bdRemoteTask> *result, bdCODOResettableStatsRequest *request)
{
  return ?resetStats@bdCODO@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEAVbdCODOResettableStatsRequest@@@Z(this, result, request);
}

/*
==============
bdCODO::bdCODO
==============
*/

void __fastcall bdCODO::bdCODO(bdCODO *this, bdRemoteTaskManager *const remoteTaskManager)
{
  ??0bdCODO@@IEAA@QEAVbdRemoteTaskManager@@@Z(this, remoteTaskManager);
}

/*
==============
bdCODO::autoJoinTeam
==============
*/

bdReference<bdRemoteTask> *__fastcall bdCODO::autoJoinTeam(bdCODO *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, const bdUserAccountID *userID)
{
  return ?autoJoinTeam@bdCODO@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KVbdUserAccountID@@@Z(this, result, teamID, userID);
}

/*
==============
bdCODO::setTeamActiveTimestamp
==============
*/

bdReference<bdRemoteTask> *__fastcall bdCODO::setTeamActiveTimestamp(bdCODO *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID)
{
  return ?setTeamActiveTimestamp@bdCODO@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_K@Z(this, result, teamID);
}

/*
==============
bdCODO::sendLoudSpeakerMessage
==============
*/

bdReference<bdRemoteTask> *__fastcall bdCODO::sendLoudSpeakerMessage(bdCODO *this, bdReference<bdRemoteTask> *result, const char *tokenContext, const unsigned int tokenID, const bdMessagingGroup *group, const void *const message, const unsigned int messageSize)
{
  return ?sendLoudSpeakerMessage@bdCODO@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBDIAEBVbdMessagingGroup@@QEBXI@Z(this, result, tokenContext, tokenID, group, message, messageSize);
}

/*
==============
bdCODO::~bdCODO
==============
*/

void __fastcall bdCODO::~bdCODO(bdCODO *this)
{
  ??1bdCODO@@UEAA@XZ(this);
}

/*
==============
bdCODO::bdCODO
==============
*/
void bdCODO::bdCODO(bdCODO *this, bdRemoteTaskManager *const remoteTaskManager)
{
  this->m_remoteTaskManager = remoteTaskManager;
  this->__vftable = (bdCODO_vtbl *)&bdCODO::`vftable';
}

/*
==============
bdCODO::~bdCODO
==============
*/
void bdCODO::~bdCODO(bdCODO *this)
{
  this->__vftable = (bdCODO_vtbl *)&bdCODO::`vftable';
}

/*
==============
bdCODO::addApplication
==============
*/
bdReference<bdRemoteTask> *bdCODO::addApplication(bdCODO *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, const unsigned __int64 replacesTeamID, const bdUserAccountID *userID, const void *const attachment, const unsigned int attachmentSize)
{
  _BOOL8 v11; 
  _BOOL8 v12; 
  bool v13; 
  bool v14; 
  unsigned int v15; 
  int v17; 
  bdTaskParams taskParams; 
  __int64 v19; 
  bdReference<bdRemoteTask> *v20; 
  const bdUserAccountID *v21; 

  v19 = -2i64;
  v20 = result;
  v21 = userID;
  result->m_ptr = NULL;
  v17 = 1;
  bdHandleAssert(teamID != 0, "(teamID != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcodo\\bdcodo.cpp", "bdCODO::addApplication", 0x61u, "Cannot call addApplication() with a NULL teamID", v17);
  if ( teamID )
  {
    bdTaskParams::bdTaskParams(&taskParams, 0xBFu, 0xAu, 0x400u, 0xFFFFu);
    LOBYTE(v11) = 1;
    if ( taskParams.ensureCapacity(&taskParams, 8u, v11) )
    {
      if ( taskParams.m_isWritingArray )
        --taskParams.m_arrayWriteCount;
      if ( !taskParams.m_serializeOk || (v13 = bdByteBuffer::writeUInt64(taskParams.m_buffer.m_ptr, teamID), taskParams.m_serializeOk = 1, !v13) )
        taskParams.m_serializeOk = 0;
    }
    LOBYTE(v12) = 1;
    if ( taskParams.ensureCapacity(&taskParams, 8u, v12) )
    {
      if ( taskParams.m_isWritingArray )
        --taskParams.m_arrayWriteCount;
      if ( !taskParams.m_serializeOk || (v14 = bdByteBuffer::writeUInt64(taskParams.m_buffer.m_ptr, replacesTeamID), taskParams.m_serializeOk = 1, !v14) )
        taskParams.m_serializeOk = 0;
    }
    bdTaskParams::addContextUser(&taskParams, userID);
    if ( attachment && attachmentSize )
    {
      v15 = 32;
      if ( attachmentSize < 0x20 )
        v15 = attachmentSize;
      bdBufferParams::addBlob(&taskParams, attachment, v15);
    }
    bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
    bdTaskParams::~bdTaskParams(&taskParams);
  }
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)userID->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)userID->gap38);
  return result;
}

/*
==============
bdCODO::autoJoinTeam
==============
*/
bdReference<bdRemoteTask> *bdCODO::autoJoinTeam(bdCODO *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, const bdUserAccountID *userID)
{
  _BOOL8 v8; 
  bool v9; 
  int v11; 
  bdTaskParams taskParams; 
  __int64 v13; 
  bdReference<bdRemoteTask> *v14; 
  const bdUserAccountID *v15; 

  v13 = -2i64;
  v14 = result;
  v15 = userID;
  result->m_ptr = NULL;
  v11 = 1;
  bdHandleAssert(teamID != 0, "(teamID != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcodo\\bdcodo.cpp", "bdCODO::autoJoinTeam", 0x24u, "Cannot call autoJoinTeam() with a NULL teamID", v11);
  if ( teamID )
  {
    bdTaskParams::bdTaskParams(&taskParams, 0xBFu, 2u, 0x400u, 0xFFFFu);
    LOBYTE(v8) = 1;
    if ( taskParams.ensureCapacity(&taskParams, 8u, v8) )
    {
      if ( taskParams.m_isWritingArray )
        --taskParams.m_arrayWriteCount;
      if ( !taskParams.m_serializeOk || (v9 = bdByteBuffer::writeUInt64(taskParams.m_buffer.m_ptr, teamID), taskParams.m_serializeOk = 1, !v9) )
        taskParams.m_serializeOk = 0;
    }
    bdTaskParams::addContextUser(&taskParams, userID);
    bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
    bdTaskParams::~bdTaskParams(&taskParams);
  }
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)userID->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)userID->gap38);
  return result;
}

/*
==============
bdCODO::getTeamAutoJoinLevel
==============
*/
bdReference<bdRemoteTask> *bdCODO::getTeamAutoJoinLevel(bdCODO *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, bdCODOAutoJoinLevelInfo *const autoJoinLevelInfo)
{
  _BOOL8 v8; 
  bool v9; 
  bdTaskParams taskParams; 

  result->m_ptr = NULL;
  bdHandleAssert(teamID != 0, "(teamID != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcodo\\bdcodo.cpp", "bdCODO::getTeamAutoJoinLevel", 0x4Bu, "Cannot call getTeamAutoJoinLevel() with a NULL teamID");
  if ( teamID )
  {
    bdTaskParams::bdTaskParams(&taskParams, 0xBFu, 3u, 0x400u, 0xFFFFu);
    LOBYTE(v8) = 1;
    if ( taskParams.ensureCapacity(&taskParams, 8u, v8) )
    {
      if ( taskParams.m_isWritingArray )
        --taskParams.m_arrayWriteCount;
      if ( !taskParams.m_serializeOk || (v9 = bdByteBuffer::writeUInt64(taskParams.m_buffer.m_ptr, teamID), taskParams.m_serializeOk = 1, !v9) )
        taskParams.m_serializeOk = 0;
    }
    if ( taskParams.m_taskResults || taskParams.m_taskResultRefs )
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
      taskParams.m_serializeOk = 0;
    }
    else
    {
      taskParams.m_taskResults = autoJoinLevelInfo;
      taskParams.m_maxResults = 1;
    }
    bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
    bdTaskParams::~bdTaskParams(&taskParams);
  }
  return result;
}

/*
==============
bdCODO::getTeamMinimumApplicationLevel
==============
*/
bdReference<bdRemoteTask> *bdCODO::getTeamMinimumApplicationLevel(bdCODO *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, bdCODOMinimumApplicationLevelInfo *const minimumApplicationLevelInfo)
{
  _BOOL8 v8; 
  bool v9; 
  bdTaskParams taskParams; 

  result->m_ptr = NULL;
  bdHandleAssert(teamID != 0, "(teamID != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcodo\\bdcodo.cpp", "bdCODO::getTeamMinimumApplicationLevel", 0x8Eu, "Cannot call getTeamMinimumApplicationLevel() with a NULL teamID");
  if ( teamID )
  {
    bdTaskParams::bdTaskParams(&taskParams, 0xBFu, 8u, 0x400u, 0xFFFFu);
    LOBYTE(v8) = 1;
    if ( taskParams.ensureCapacity(&taskParams, 8u, v8) )
    {
      if ( taskParams.m_isWritingArray )
        --taskParams.m_arrayWriteCount;
      if ( !taskParams.m_serializeOk || (v9 = bdByteBuffer::writeUInt64(taskParams.m_buffer.m_ptr, teamID), taskParams.m_serializeOk = 1, !v9) )
        taskParams.m_serializeOk = 0;
    }
    if ( taskParams.m_taskResults || taskParams.m_taskResultRefs )
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
      taskParams.m_serializeOk = 0;
    }
    else
    {
      taskParams.m_taskResults = minimumApplicationLevelInfo;
      taskParams.m_maxResults = 1;
    }
    bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
    bdTaskParams::~bdTaskParams(&taskParams);
  }
  return result;
}

/*
==============
bdCODO::resetStats
==============
*/
bdReference<bdRemoteTask> *bdCODO::resetStats(bdCODO *this, bdReference<bdRemoteTask> *result, bdCODOResettableStatsRequest *request)
{
  bdLobbyErrorCode started; 
  bdStructBufferTask *m_ptr; 
  bdLobbyErrorCode v7; 
  bdReference<bdStructBufferTask> v8; 

  v8.m_ptr = NULL;
  started = bdRemoteTaskManager::startStructTask(this->m_remoteTaskManager, &v8, 0xBFu, 7u, request, NULL, NULL);
  if ( started )
  {
    v7 = started;
    bdLogMessage(BD_LOG_WARNING, "warn/", "CODOService", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcodo\\bdcodo.cpp", "bdCODO::resetStats", 0xF5u, "Failed to start Reset Stats task: Error %i", v7);
  }
  m_ptr = v8.m_ptr;
  result->m_ptr = v8.m_ptr;
  if ( m_ptr )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
    m_ptr = v8.m_ptr;
  }
  if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v8.m_ptr )
    ((void (__fastcall *)(bdStructBufferTask *, __int64))v8.m_ptr->~bdReferencable)(v8.m_ptr, 1i64);
  return result;
}

/*
==============
bdCODO::sendLoudSpeakerMessage
==============
*/
bdReference<bdRemoteTask> *bdCODO::sendLoudSpeakerMessage(bdCODO *this, bdReference<bdRemoteTask> *result, const char *tokenContext, const unsigned int tokenID, const bdMessagingGroup *group, const void *const message, const unsigned int messageSize)
{
  unsigned __int64 v11; 
  _BOOL8 v12; 
  bool v13; 
  bdLobbyErrorCode started; 
  bdLobbyErrorCode v16; 
  bdTaskParams taskParams; 

  bdHandleAssert(tokenContext != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v11 = -1i64;
  do
    ++v11;
  while ( tokenContext[v11] );
  bdHandleAssert(v11 < 0x10, "(bdStrlen(tokenContext) < BD_MAX_CONTEXT_NAME_LENGTH)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcodo\\bdcodo.cpp", "bdCODO::sendLoudSpeakerMessage", 0xDCu, "Context Provided for LoudSpeaker token is too long.");
  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&taskParams, 0xBFu, 6u, 0x400u, 0xFFFFu);
  bdTaskParams::addContext(&taskParams, tokenContext);
  LOBYTE(v12) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 4u, v12) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v13 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, tokenID), taskParams.m_serializeOk = 1, !v13) )
      taskParams.m_serializeOk = 0;
  }
  bdBufferParams::addSerializable(&taskParams, (const bdSerializable *)(&group->__vftable + 2));
  bdBufferParams::addBlob(&taskParams, message, messageSize);
  started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
  if ( started )
  {
    v16 = started;
    bdLogMessage(BD_LOG_WARNING, "warn/", "CODOService", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcodo\\bdcodo.cpp", "bdCODO::sendLoudSpeakerMessage", 0xE9u, "Failed to start LoudSpeaker task: Error %i", v16);
  }
  bdTaskParams::~bdTaskParams(&taskParams);
  return result;
}

/*
==============
bdCODO::setTeamActiveTimestamp
==============
*/
bdReference<bdRemoteTask> *bdCODO::setTeamActiveTimestamp(bdCODO *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID)
{
  _BOOL8 v6; 
  bool v7; 
  bdTaskParams taskParams; 

  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&taskParams, 0xBFu, 5u, 0x400u, 0xFFFFu);
  LOBYTE(v6) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 8u, v6) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v7 = bdByteBuffer::writeUInt64(taskParams.m_buffer.m_ptr, teamID), taskParams.m_serializeOk = 1, !v7) )
      taskParams.m_serializeOk = 0;
  }
  bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
  bdTaskParams::~bdTaskParams(&taskParams);
  return result;
}

/*
==============
bdCODO::setTeamAutoJoinLevel
==============
*/
bdReference<bdRemoteTask> *bdCODO::setTeamAutoJoinLevel(bdCODO *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, const unsigned int autoJoinLevel)
{
  _BOOL8 v8; 
  _BOOL8 v9; 
  bool v10; 
  bool v11; 
  int v13; 
  bdTaskParams taskParams; 

  result->m_ptr = NULL;
  v13 = 1;
  bdHandleAssert(teamID != 0, "(teamID != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcodo\\bdcodo.cpp", "bdCODO::setTeamAutoJoinLevel", 0x37u, "Cannot call autoJoinTeam() with a NULL teamID", v13, -2i64);
  bdHandleAssert(autoJoinLevel != 0, "(autoJoinLevel != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcodo\\bdcodo.cpp", "bdCODO::setTeamAutoJoinLevel", 0x38u, "Cannot call setTeamAutoJoinLevel() with a NULL autoJoinLevel");
  if ( teamID && autoJoinLevel )
  {
    bdTaskParams::bdTaskParams(&taskParams, 0xBFu, 1u, 0x400u, 0xFFFFu);
    LOBYTE(v8) = 1;
    if ( taskParams.ensureCapacity(&taskParams, 8u, v8) )
    {
      if ( taskParams.m_isWritingArray )
        --taskParams.m_arrayWriteCount;
      if ( !taskParams.m_serializeOk || (v10 = bdByteBuffer::writeUInt64(taskParams.m_buffer.m_ptr, teamID), taskParams.m_serializeOk = 1, !v10) )
        taskParams.m_serializeOk = 0;
    }
    LOBYTE(v9) = 1;
    if ( taskParams.ensureCapacity(&taskParams, 4u, v9) )
    {
      if ( taskParams.m_isWritingArray )
        --taskParams.m_arrayWriteCount;
      if ( !taskParams.m_serializeOk || (v11 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, autoJoinLevel), taskParams.m_serializeOk = 1, !v11) )
        taskParams.m_serializeOk = 0;
    }
    bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
    bdTaskParams::~bdTaskParams(&taskParams);
  }
  return result;
}

/*
==============
bdCODO::setTeamMinimumApplicationLevel
==============
*/
bdReference<bdRemoteTask> *bdCODO::setTeamMinimumApplicationLevel(bdCODO *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, const unsigned int minimumApplicationLevel)
{
  _BOOL8 v8; 
  _BOOL8 v9; 
  bool v10; 
  bool v11; 
  int v13; 
  bdTaskParams taskParams; 

  result->m_ptr = NULL;
  v13 = 1;
  bdHandleAssert(teamID != 0, "(teamID != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcodo\\bdcodo.cpp", "bdCODO::setTeamMinimumApplicationLevel", 0x7Au, "Cannot call setTeamMinimumApplicationLevel() with a NULL teamID", v13, -2i64);
  if ( teamID && minimumApplicationLevel )
  {
    bdTaskParams::bdTaskParams(&taskParams, 0xBFu, 9u, 0x400u, 0xFFFFu);
    LOBYTE(v8) = 1;
    if ( taskParams.ensureCapacity(&taskParams, 8u, v8) )
    {
      if ( taskParams.m_isWritingArray )
        --taskParams.m_arrayWriteCount;
      if ( !taskParams.m_serializeOk || (v10 = bdByteBuffer::writeUInt64(taskParams.m_buffer.m_ptr, teamID), taskParams.m_serializeOk = 1, !v10) )
        taskParams.m_serializeOk = 0;
    }
    LOBYTE(v9) = 1;
    if ( taskParams.ensureCapacity(&taskParams, 4u, v9) )
    {
      if ( taskParams.m_isWritingArray )
        --taskParams.m_arrayWriteCount;
      if ( !taskParams.m_serializeOk || (v11 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, minimumApplicationLevel), taskParams.m_serializeOk = 1, !v11) )
        taskParams.m_serializeOk = 0;
    }
    bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
    bdTaskParams::~bdTaskParams(&taskParams);
  }
  return result;
}

/*
==============
bdCODO::setTeamPublicProfilePartial
==============
*/
bdReference<bdRemoteTask> *bdCODO::setTeamPublicProfilePartial(bdCODO *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, bdProfileItem *fieldUpdates, const unsigned int numFieldUpdates, unsigned int collisionField)
{
  __int64 v10; 
  _BOOL8 v11; 
  _BOOL8 v12; 
  bool v13; 
  bool v14; 
  bool v15; 
  bool v16; 
  bdTaskParams taskParams; 
  __int64 v19; 
  bdReference<bdRemoteTask> *v20; 
  bdProfileItem v21; 

  v19 = -2i64;
  v20 = result;
  result->m_ptr = NULL;
  v10 = numFieldUpdates;
  if ( !numFieldUpdates )
  {
    bdHandleAssert(0, "\"(numFieldUpdates > 0)\" && false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcodo\\bdcodo.cpp", "bdCODO::setTeamPublicProfilePartial", 0xA4u, "setTeamPublicProfilePartial() called with zero updates");
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "BD_ASSERT", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcodo\\bdcodo.cpp", "bdCODO::setTeamPublicProfilePartial", 0xA4u, "setTeamPublicProfilePartial() called with zero updates");
  }
  if ( numFieldUpdates > 0x14 )
  {
    bdHandleAssert(0, "\"(numFieldUpdates <= MAX_PARTIAL_PROFILE_UPDATES)\" && false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcodo\\bdcodo.cpp", "bdCODO::setTeamPublicProfilePartial", 0xA5u, "setTeamPublicProfile called with more than max updates");
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "BD_ASSERT", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcodo\\bdcodo.cpp", "bdCODO::setTeamPublicProfilePartial", 0xA5u, "setTeamPublicProfile called with more than max updates");
  }
  if ( !fieldUpdates )
  {
    bdHandleAssert(0, "\"(fieldUpdates != BD_NULL)\" && false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcodo\\bdcodo.cpp", "bdCODO::setTeamPublicProfilePartial", 0xA6u, "setTeamPublicProfilePartial() called with null updates");
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "BD_ASSERT", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcodo\\bdcodo.cpp", "bdCODO::setTeamPublicProfilePartial", 0xA6u, "setTeamPublicProfilePartial() called with null updates");
  }
  if ( numFieldUpdates - 1 <= 0x13 && fieldUpdates )
  {
    bdTaskParams::bdTaskParams(&taskParams, 0xBFu, 4u, 0x400u, 0xFFFFu);
    LOBYTE(v11) = 1;
    if ( taskParams.ensureCapacity(&taskParams, 8u, v11) )
    {
      if ( taskParams.m_isWritingArray )
        --taskParams.m_arrayWriteCount;
      if ( !taskParams.m_serializeOk || (v13 = bdByteBuffer::writeUInt64(taskParams.m_buffer.m_ptr, teamID), taskParams.m_serializeOk = 1, !v13) )
        taskParams.m_serializeOk = 0;
    }
    LOBYTE(v12) = 1;
    v14 = taskParams.ensureCapacity(&taskParams, 4u, v12);
    if ( collisionField == -1 )
    {
      if ( v14 )
      {
        if ( taskParams.m_isWritingArray )
          --taskParams.m_arrayWriteCount;
        if ( !taskParams.m_serializeOk || (v16 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, numFieldUpdates), taskParams.m_serializeOk = 1, !v16) )
          taskParams.m_serializeOk = 0;
      }
    }
    else
    {
      if ( v14 )
      {
        if ( taskParams.m_isWritingArray )
          --taskParams.m_arrayWriteCount;
        if ( !taskParams.m_serializeOk || (v15 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, numFieldUpdates + 1), taskParams.m_serializeOk = 1, !v15) )
          taskParams.m_serializeOk = 0;
      }
      bdProfileItem::bdProfileItem(&v21);
      bdProfileItem::setKeyAndValue(&v21, "profileCollisionField", collisionField);
      bdBufferParams::addSerializable(&taskParams, &v21);
      bdSerializable::~bdSerializable((bdSerializable *)(&v21.__vftable + 2));
      bdReferencable::~bdReferencable((bdReferencable *)&v21.gap64[4]);
    }
    if ( numFieldUpdates )
    {
      do
      {
        bdBufferParams::addSerializable(&taskParams, fieldUpdates++);
        --v10;
      }
      while ( v10 );
    }
    bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
    bdTaskParams::~bdTaskParams(&taskParams);
  }
  return result;
}

