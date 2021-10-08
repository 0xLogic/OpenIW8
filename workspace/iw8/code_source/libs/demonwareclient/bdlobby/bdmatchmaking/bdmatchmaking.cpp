/*
==============
bdMatchMaking::findSessionsTwoPass
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMatchMaking::findSessionsTwoPass(bdMatchMaking *this, bdReference<bdRemoteTask> *result, const unsigned int primaryQueryID, const unsigned int secondaryQueryID, const unsigned int maxNumResults, bdSessionParams *sessionParams, bdMatchMakingInfo *results)
{
  return ?findSessionsTwoPass@bdMatchMaking@@QEAA?AV?$bdReference@VbdRemoteTask@@@@IIIPEAVbdSessionParams@@QEAVbdMatchMakingInfo@@@Z(this, result, primaryQueryID, secondaryQueryID, maxNumResults, sessionParams, results);
}

/*
==============
bdMatchMaking::submitPerformance
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMatchMaking::submitPerformance(bdMatchMaking *this, bdReference<bdRemoteTask> *result, const unsigned int gameType, const bdPerformanceValue *performanceValues, const unsigned int numValues)
{
  return ?submitPerformance@bdMatchMaking@@QEAA?AV?$bdReference@VbdRemoteTask@@@@IPEBVbdPerformanceValue@@I@Z(this, result, gameType, performanceValues, numValues);
}

/*
==============
bdMatchMaking::startNotifyTask
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMatchMaking::startNotifyTask(bdMatchMaking *this, bdReference<bdRemoteTask> *result, const bdSessionID *sessionID, const unsigned __int64 *users, const unsigned int numUsers, const unsigned __int8 taskType)
{
  return ?startNotifyTask@bdMatchMaking@@IEAA?AV?$bdReference@VbdRemoteTask@@@@AEBVbdSessionID@@PEB_KIE@Z(this, result, sessionID, users, numUsers, taskType);
}

/*
==============
bdMatchMaking::findSessions
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMatchMaking::findSessions(bdMatchMaking *this, bdReference<bdRemoteTask> *result, const unsigned int queryID, const unsigned int startIndexDEPRECATED, const unsigned int maxNumResults, bdSessionParams *sessionParams, bdMatchMakingInfo *results)
{
  return ?findSessions@bdMatchMaking@@QEAA?AV?$bdReference@VbdRemoteTask@@@@IIIPEAVbdSessionParams@@QEAVbdMatchMakingInfo@@@Z(this, result, queryID, startIndexDEPRECATED, maxNumResults, sessionParams, results);
}

/*
==============
bdMatchMaking::submitAndGetPerformance
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMatchMaking::submitAndGetPerformance(bdMatchMaking *this, bdReference<bdRemoteTask> *result, const unsigned int gameType, const bdPerformanceValue *performanceValues, const unsigned int numValues, bdStoredPerformanceValue *results)
{
  return ?submitAndGetPerformance@bdMatchMaking@@QEAA?AV?$bdReference@VbdRemoteTask@@@@IQEBVbdPerformanceValue@@IQEAVbdStoredPerformanceValue@@@Z(this, result, gameType, performanceValues, numValues, results);
}

/*
==============
bdMatchMaking::submitAndGetPerformance
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMatchMaking::submitAndGetPerformance(bdMatchMaking *this, bdReference<bdRemoteTask> *result, const unsigned int gameType, const bdPerformanceValue *performanceValues, const bdPerformanceValue **performanceValuePtrs, const unsigned int numValues, bdStoredPerformanceValue *results)
{
  return ?submitAndGetPerformance@bdMatchMaking@@AEAA?AV?$bdReference@VbdRemoteTask@@@@IQEBVbdPerformanceValue@@QEAPEBV3@IQEAVbdStoredPerformanceValue@@@Z(this, result, gameType, performanceValues, performanceValuePtrs, numValues, results);
}

/*
==============
bdMatchMaking::updateSessionPlayers
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMatchMaking::updateSessionPlayers(bdMatchMaking *this, bdReference<bdRemoteTask> *result, const bdSessionID *sessionID, bdMatchMakingInfo *const sessionInfo, unsigned int numPlayers)
{
  return ?updateSessionPlayers@bdMatchMaking@@QEAA?AV?$bdReference@VbdRemoteTask@@@@AEBVbdSessionID@@QEAVbdMatchMakingInfo@@I@Z(this, result, sessionID, sessionInfo, numPlayers);
}

/*
==============
bdMatchMaking::findSessionsByEntityIDs
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMatchMaking::findSessionsByEntityIDs(bdMatchMaking *this, bdReference<bdRemoteTask> *result, const unsigned __int64 *const entityIDs, const unsigned int numEntityIDs, bdMatchMakingInfo *results, const unsigned int maxNumResults)
{
  return ?findSessionsByEntityIDs@bdMatchMaking@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEB_KIQEAVbdMatchMakingInfo@@I@Z(this, result, entityIDs, numEntityIDs, results, maxNumResults);
}

/*
==============
bdMatchMaking::initializeSession
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMatchMaking::initializeSession(bdMatchMaking *this, bdReference<bdRemoteTask> *result, const bdSessionID *sessionID, bdMatchMakingInfo *const sessionInfo)
{
  return ?initializeSession@bdMatchMaking@@QEAA?AV?$bdReference@VbdRemoteTask@@@@AEBVbdSessionID@@QEAVbdMatchMakingInfo@@@Z(this, result, sessionID, sessionInfo);
}

/*
==============
bdMatchMaking::submitAndGetPerformance
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMatchMaking::submitAndGetPerformance(bdMatchMaking *this, bdReference<bdRemoteTask> *result, const unsigned int gameType, const bdPerformanceValue **performanceValuePtrs, const unsigned int numValues, bdStoredPerformanceValue *results)
{
  return ?submitAndGetPerformance@bdMatchMaking@@QEAA?AV?$bdReference@VbdRemoteTask@@@@IQEAPEBVbdPerformanceValue@@IQEAVbdStoredPerformanceValue@@@Z(this, result, gameType, performanceValuePtrs, numValues, results);
}

/*
==============
bdMatchMaking::notifyLeave
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMatchMaking::notifyLeave(bdMatchMaking *this, bdReference<bdRemoteTask> *result, const bdSessionID *sessionID, const unsigned __int64 *const users, const unsigned int numUsers)
{
  return ?notifyLeave@bdMatchMaking@@QEAA?AV?$bdReference@VbdRemoteTask@@@@AEBVbdSessionID@@QEB_KI@Z(this, result, sessionID, users, numUsers);
}

/*
==============
bdMatchMaking::findSessionFromID
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMatchMaking::findSessionFromID(bdMatchMaking *this, bdReference<bdRemoteTask> *result, const bdSessionID *sessionID, bdMatchMakingInfo *const sessionInfo)
{
  return ?findSessionFromID@bdMatchMaking@@QEAA?AV?$bdReference@VbdRemoteTask@@@@AEBVbdSessionID@@QEAVbdMatchMakingInfo@@@Z(this, result, sessionID, sessionInfo);
}

/*
==============
bdMatchMaking::createSession
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMatchMaking::createSession(bdMatchMaking *this, bdReference<bdRemoteTask> *result, bdMatchMakingInfo *sessionInfo, bdSessionID *const sessionCredentials)
{
  return ?createSession@bdMatchMaking@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEAVbdMatchMakingInfo@@QEAVbdSessionID@@@Z(this, result, sessionInfo, sessionCredentials);
}

/*
==============
bdMatchMaking::bdMatchMaking
==============
*/

void __fastcall bdMatchMaking::bdMatchMaking(bdMatchMaking *this, bdRemoteTaskManager *const remoteTaskManager, const char *context)
{
  ??0bdMatchMaking@@IEAA@QEAVbdRemoteTaskManager@@PEBD@Z(this, remoteTaskManager, context);
}

/*
==============
bdMatchMaking::inviteToSession
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMatchMaking::inviteToSession(bdMatchMaking *this, bdReference<bdRemoteTask> *result, const bdSessionID *sessionID, const unsigned __int64 *userIDs, const unsigned int numUsers, const void *const attachment, const unsigned int attachmentSize)
{
  return ?inviteToSession@bdMatchMaking@@QEAA?AV?$bdReference@VbdRemoteTask@@@@AEBVbdSessionID@@QEB_KIQEBXI@Z(this, result, sessionID, userIDs, numUsers, attachment, attachmentSize);
}

/*
==============
bdMatchMaking::findSessionsPaged
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMatchMaking::findSessionsPaged(bdMatchMaking *this, bdReference<bdRemoteTask> *result, const unsigned int queryID, bdSessionParams *sessionParams, bdPagingToken *token, bdMatchMakingInfo *results)
{
  return ?findSessionsPaged@bdMatchMaking@@QEAA?AV?$bdReference@VbdRemoteTask@@@@IPEAVbdSessionParams@@PEAVbdPagingToken@@QEAVbdMatchMakingInfo@@@Z(this, result, queryID, sessionParams, token, results);
}

/*
==============
bdMatchMaking::requestSessionID
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMatchMaking::requestSessionID(bdMatchMaking *this, bdReference<bdRemoteTask> *result, bdSessionID *const sessionID)
{
  return ?requestSessionID@bdMatchMaking@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEAVbdSessionID@@@Z(this, result, sessionID);
}

/*
==============
bdMatchMaking::deleteSession
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMatchMaking::deleteSession(bdMatchMaking *this, bdReference<bdRemoteTask> *result, const bdSessionID *sessionID)
{
  return ?deleteSession@bdMatchMaking@@QEAA?AV?$bdReference@VbdRemoteTask@@@@AEBVbdSessionID@@@Z(this, result, sessionID);
}

/*
==============
bdMatchMaking::submitPerformance
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMatchMaking::submitPerformance(bdMatchMaking *this, bdReference<bdRemoteTask> *result, const unsigned int gameType, const bdPerformanceValue **performanceValues, const unsigned int numValues)
{
  return ?submitPerformance@bdMatchMaking@@QEAA?AV?$bdReference@VbdRemoteTask@@@@IQEAPEBVbdPerformanceValue@@I@Z(this, result, gameType, performanceValues, numValues);
}

/*
==============
bdMatchMaking::~bdMatchMaking
==============
*/

void __fastcall bdMatchMaking::~bdMatchMaking(bdMatchMaking *this)
{
  ??1bdMatchMaking@@QEAA@XZ(this);
}

/*
==============
bdMatchMaking::getPerformanceValues
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMatchMaking::getPerformanceValues(bdMatchMaking *this, bdReference<bdRemoteTask> *result, const unsigned __int64 *const entityIDs, const unsigned int numEntityIDs, const unsigned int gameType, bdStoredPerformanceValue *results)
{
  return ?getPerformanceValues@bdMatchMaking@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEB_KIIQEAVbdStoredPerformanceValue@@@Z(this, result, entityIDs, numEntityIDs, gameType, results);
}

/*
==============
bdMatchMaking::findSessionsFromIDs
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMatchMaking::findSessionsFromIDs(bdMatchMaking *this, bdReference<bdRemoteTask> *result, const bdSessionID *const sessionIDs, const unsigned int numSessionIDs, bdMatchMakingInfo *results)
{
  return ?findSessionsFromIDs@bdMatchMaking@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBVbdSessionID@@IQEAVbdMatchMakingInfo@@@Z(this, result, sessionIDs, numSessionIDs, results);
}

/*
==============
bdMatchMaking::getSessionInvites
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMatchMaking::getSessionInvites(bdMatchMaking *this, bdReference<bdRemoteTask> *result, const unsigned int startIndex, const unsigned int maxNumResults, bdSessionInvite *results)
{
  return ?getSessionInvites@bdMatchMaking@@QEAA?AV?$bdReference@VbdRemoteTask@@@@IIQEAVbdSessionInvite@@@Z(this, result, startIndex, maxNumResults, results);
}

/*
==============
bdMatchMaking::updateSession
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMatchMaking::updateSession(bdMatchMaking *this, bdReference<bdRemoteTask> *result, const bdSessionID *sessionID, bdMatchMakingInfo *const sessionInfo)
{
  return ?updateSession@bdMatchMaking@@QEAA?AV?$bdReference@VbdRemoteTask@@@@AEBVbdSessionID@@QEAVbdMatchMakingInfo@@@Z(this, result, sessionID, sessionInfo);
}

/*
==============
bdMatchMaking::notifyJoin
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMatchMaking::notifyJoin(bdMatchMaking *this, bdReference<bdRemoteTask> *result, const bdSessionID *sessionID, const unsigned __int64 *const users, const unsigned int numUsers)
{
  return ?notifyJoin@bdMatchMaking@@QEAA?AV?$bdReference@VbdRemoteTask@@@@AEBVbdSessionID@@QEB_KI@Z(this, result, sessionID, users, numUsers);
}

/*
==============
bdMatchMaking::bdMatchMaking
==============
*/
void bdMatchMaking::bdMatchMaking(bdMatchMaking *this, bdRemoteTaskManager *const remoteTaskManager, const char *context)
{
  char *m_context; 
  unsigned __int64 v4; 
  size_t v5; 

  this->m_remoteTaskManager = remoteTaskManager;
  m_context = this->m_context;
  if ( context )
  {
    bdStrlcpy(this->m_context, context, 0x10ui64);
  }
  else
  {
    bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
    v4 = -1i64;
    do
      ++v4;
    while ( *((_BYTE *)&queryFormat.fmt + v4 + 3) );
    if ( m_context )
    {
      v5 = 15i64;
      if ( v4 < 0xF )
        v5 = v4;
      memcpy_0(m_context, (char *)&queryFormat.fmt + 3, v5);
      m_context[v5] = 0;
    }
  }
}

/*
==============
bdMatchMaking::~bdMatchMaking
==============
*/
void bdMatchMaking::~bdMatchMaking(bdMatchMaking *this)
{
  this->m_remoteTaskManager = NULL;
}

/*
==============
bdMatchMaking::createSession
==============
*/
bdReference<bdRemoteTask> *bdMatchMaking::createSession(bdMatchMaking *this, bdReference<bdRemoteTask> *result, bdMatchMakingInfo *sessionInfo, bdSessionID *const sessionCredentials)
{
  bdTaskParams v9; 

  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&v9, 0x8Au, 1u, 0x400u, 0xFFFFu);
  bdBufferParams::addString(&v9, this->m_context, 0x10ui64);
  bdBufferParams::addSerializable(&v9, (const bdSerializable *)(&sessionInfo->__vftable + 2));
  if ( *(_OWORD *)&v9.m_taskResults == 0i64 )
  {
    v9.m_taskResults = sessionCredentials;
    v9.m_maxResults = 1;
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
    v9.m_serializeOk = 0;
  }
  if ( bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &v9) )
    bdLogMessage(BD_LOG_WARNING, "warn/", "matchmaking", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmatchmaking\\bdmatchmaking.cpp", "bdMatchMaking::createSession", 0x77u, "Failed to write param into buffer");
  bdTaskParams::~bdTaskParams(&v9);
  return result;
}

/*
==============
bdMatchMaking::deleteSession
==============
*/
bdReference<bdRemoteTask> *bdMatchMaking::deleteSession(bdMatchMaking *this, bdReference<bdRemoteTask> *result, const bdSessionID *sessionID)
{
  bdTaskParams v7; 

  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&v7, 0x8Au, 3u, 0x400u, 0xFFFFu);
  bdBufferParams::addString(&v7, this->m_context, 0x10ui64);
  bdBufferParams::addSerializable(&v7, (const bdSerializable *)(&sessionID->__vftable + 2));
  if ( bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &v7) )
    bdLogMessage(BD_LOG_WARNING, "warn/", "matchmaking", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmatchmaking\\bdmatchmaking.cpp", "bdMatchMaking::deleteSession", 0xC7u, "Failed to write param into buffer");
  bdTaskParams::~bdTaskParams(&v7);
  return result;
}

/*
==============
bdMatchMaking::findSessionFromID
==============
*/
bdReference<bdRemoteTask> *bdMatchMaking::findSessionFromID(bdMatchMaking *this, bdReference<bdRemoteTask> *result, const bdSessionID *sessionID, bdMatchMakingInfo *const sessionInfo)
{
  bdTaskParams v9; 

  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&v9, 0x8Au, 4u, 0x400u, 0xFFFFu);
  bdBufferParams::addString(&v9, this->m_context, 0x10ui64);
  bdBufferParams::addSerializable(&v9, (const bdSerializable *)(&sessionID->__vftable + 2));
  if ( *(_OWORD *)&v9.m_taskResults == 0i64 )
  {
    v9.m_taskResults = sessionInfo;
    v9.m_maxResults = 1;
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
    v9.m_serializeOk = 0;
  }
  if ( bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &v9) )
    bdLogMessage(BD_LOG_WARNING, "warn/", "matchmaking", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmatchmaking\\bdmatchmaking.cpp", "bdMatchMaking::findSessionFromID", 0xE3u, "Failed to write param into buffer");
  bdTaskParams::~bdTaskParams(&v9);
  return result;
}

/*
==============
bdMatchMaking::findSessions
==============
*/
bdReference<bdRemoteTask> *bdMatchMaking::findSessions(bdMatchMaking *this, bdReference<bdRemoteTask> *result, const unsigned int queryID, const unsigned int startIndexDEPRECATED, const unsigned int maxNumResults, bdSessionParams *sessionParams, bdMatchMakingInfo *results)
{
  _BOOL8 v10; 
  _BOOL8 v11; 
  bool v12; 
  bool v13; 
  bdLobbyErrorCode started; 
  bdTaskParams taskParams; 

  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&taskParams, 0x8Au, 5u, 0x400u, 0xFFFFu);
  bdBufferParams::addString(&taskParams, this->m_context, 0x10ui64);
  LOBYTE(v10) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 4u, v10) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v12 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, queryID), taskParams.m_serializeOk = 1, !v12) )
      taskParams.m_serializeOk = 0;
  }
  LOBYTE(v11) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 4u, v11) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v13 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, maxNumResults), taskParams.m_serializeOk = 1, !v13) )
      taskParams.m_serializeOk = 0;
  }
  bdBufferParams::addSerializable(&taskParams, sessionParams);
  if ( *(_OWORD *)&taskParams.m_taskResults == 0i64 )
  {
    taskParams.m_taskResults = results;
    taskParams.m_maxResults = maxNumResults;
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
    taskParams.m_serializeOk = 0;
  }
  started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
  if ( started )
    bdLogMessage(BD_LOG_WARNING, "warn/", "matchmaking", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmatchmaking\\bdmatchmaking.cpp", "bdMatchMaking::findSessions", 0x126u, "Failed to start task: Error %i", started);
  bdTaskParams::~bdTaskParams(&taskParams);
  return result;
}

/*
==============
bdMatchMaking::findSessionsByEntityIDs
==============
*/
bdReference<bdRemoteTask> *bdMatchMaking::findSessionsByEntityIDs(bdMatchMaking *this, bdReference<bdRemoteTask> *result, const unsigned __int64 *const entityIDs, const unsigned int numEntityIDs, bdMatchMakingInfo *results, const unsigned int maxNumResults)
{
  __int64 v6; 
  unsigned int v10; 
  _BOOL8 v11; 
  bool v12; 
  bdLobbyErrorCode started; 
  bdTaskParams v15; 

  v6 = numEntityIDs;
  v10 = maxNumResults;
  if ( !maxNumResults )
    v10 = numEntityIDs;
  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&v15, 0x8Au, 0xEu, 0x400u, 0xFFFFu);
  bdBufferParams::addString(&v15, this->m_context, 0x10ui64);
  if ( (_DWORD)v6 )
  {
    do
    {
      LOBYTE(v11) = 1;
      if ( v15.ensureCapacity(&v15, 8u, v11) )
      {
        if ( v15.m_isWritingArray )
          --v15.m_arrayWriteCount;
        if ( !v15.m_serializeOk || (v12 = bdByteBuffer::writeUInt64(v15.m_buffer.m_ptr, *entityIDs), v15.m_serializeOk = 1, !v12) )
          v15.m_serializeOk = 0;
      }
      ++entityIDs;
      --v6;
    }
    while ( v6 );
  }
  if ( v15.m_taskResults || v15.m_taskResultRefs )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
    v15.m_serializeOk = 0;
  }
  else
  {
    v15.m_taskResults = results;
    v15.m_maxResults = v10;
  }
  started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &v15);
  if ( started )
    bdLogMessage(BD_LOG_WARNING, "warn/", "matchmaking", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmatchmaking\\bdmatchmaking.cpp", "bdMatchMaking::findSessionsByEntityIDs", 0x17Eu, "Failed to start task: Error %i", started);
  bdTaskParams::~bdTaskParams(&v15);
  return result;
}

/*
==============
bdMatchMaking::findSessionsFromIDs
==============
*/
bdReference<bdRemoteTask> *bdMatchMaking::findSessionsFromIDs(bdMatchMaking *this, bdReference<bdRemoteTask> *result, const bdSessionID *const sessionIDs, const unsigned int numSessionIDs, bdMatchMakingInfo *results)
{
  const bdSerializable *v9; 
  __int64 v10; 
  bdTaskParams v12; 

  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&v12, 0x8Au, 0xFu, 0x400u, 0xFFFFu);
  bdBufferParams::addString(&v12, this->m_context, 0x10ui64);
  if ( numSessionIDs )
  {
    v9 = (const bdSerializable *)(&sessionIDs->__vftable + 2);
    v10 = numSessionIDs;
    do
    {
      bdBufferParams::addSerializable(&v12, v9);
      v9 = (const bdSerializable *)((char *)v9 + 56);
      --v10;
    }
    while ( v10 );
  }
  if ( v12.m_taskResults || v12.m_taskResultRefs )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
    v12.m_serializeOk = 0;
  }
  else
  {
    v12.m_taskResults = results;
    v12.m_maxResults = numSessionIDs;
  }
  if ( bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &v12) )
    bdLogMessage(BD_LOG_WARNING, "warn/", "matchmaking", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmatchmaking\\bdmatchmaking.cpp", "bdMatchMaking::findSessionsFromIDs", 0x103u, "Failed to write param into buffer");
  bdTaskParams::~bdTaskParams(&v12);
  return result;
}

/*
==============
bdMatchMaking::findSessionsPaged
==============
*/
bdReference<bdRemoteTask> *bdMatchMaking::findSessionsPaged(bdMatchMaking *this, bdReference<bdRemoteTask> *result, const unsigned int queryID, bdSessionParams *sessionParams, bdPagingToken *token, bdMatchMakingInfo *results)
{
  bdPagingToken::bdStatus Status; 
  bool v11; 
  const bdSecurityID *SessionID; 
  _BOOL8 v13; 
  _BOOL8 v14; 
  bool v15; 
  bool v16; 
  unsigned int NumResultsPerPage; 
  _BOOL8 v18; 
  bool v19; 
  unsigned int v20; 
  bdLobbyErrorCode started; 
  bdTaskParams taskParams; 

  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&taskParams, 0x8Au, 0xDu, 0x400u, 0xFFFFu);
  bdBufferParams::addString(&taskParams, this->m_context, 0x10ui64);
  Status = bdPagingToken::getStatus(token);
  if ( Status == BD_RUNNING )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "matchmaking", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmatchmaking\\bdmatchmaking.cpp", "bdMatchMaking::findSessionsPaged", 0x13Fu, "Paging token is invalid.");
  }
  else
  {
    v11 = Status == BD_IDLE;
    SessionID = bdPagingToken::getSessionID(token);
    LOBYTE(v13) = 1;
    if ( taskParams.ensureCapacity(&taskParams, 4u, v13) )
    {
      if ( taskParams.m_isWritingArray )
        --taskParams.m_arrayWriteCount;
      if ( !taskParams.m_serializeOk || (v15 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, queryID), taskParams.m_serializeOk = 1, !v15) )
        taskParams.m_serializeOk = 0;
    }
    LOBYTE(v14) = 1;
    if ( taskParams.ensureCapacity(&taskParams, 1u, v14) )
    {
      if ( taskParams.m_isWritingArray )
        --taskParams.m_arrayWriteCount;
      if ( !taskParams.m_serializeOk || (v16 = bdByteBuffer::writeBool(taskParams.m_buffer.m_ptr, v11), taskParams.m_serializeOk = 1, !v16) )
        taskParams.m_serializeOk = 0;
    }
    bdBufferParams::addBlob(&taskParams, SessionID, 8u);
    NumResultsPerPage = bdPagingToken::getNumResultsPerPage(token);
    LOBYTE(v18) = 1;
    if ( taskParams.ensureCapacity(&taskParams, 4u, v18) )
    {
      if ( taskParams.m_isWritingArray )
        --taskParams.m_arrayWriteCount;
      if ( !taskParams.m_serializeOk || (v19 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, NumResultsPerPage), taskParams.m_serializeOk = 1, !v19) )
        taskParams.m_serializeOk = 0;
    }
    bdBufferParams::addSerializable(&taskParams, sessionParams);
    v20 = bdPagingToken::getNumResultsPerPage(token);
    if ( *(_OWORD *)&taskParams.m_taskResults == 0i64 )
    {
      taskParams.m_taskResults = results;
      taskParams.m_maxResults = v20;
    }
    else
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
      taskParams.m_serializeOk = 0;
    }
    started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
    if ( started )
      bdLogMessage(BD_LOG_WARNING, "warn/", "matchmaking", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmatchmaking\\bdmatchmaking.cpp", "bdMatchMaking::findSessionsPaged", 0x155u, "Failed to start task: Error %i", started);
    else
      bdRemoteTask::setTaskResultProcessor(result->m_ptr, token);
  }
  bdTaskParams::~bdTaskParams(&taskParams);
  return result;
}

/*
==============
bdMatchMaking::findSessionsTwoPass
==============
*/
bdReference<bdRemoteTask> *bdMatchMaking::findSessionsTwoPass(bdMatchMaking *this, bdReference<bdRemoteTask> *result, const unsigned int primaryQueryID, const unsigned int secondaryQueryID, const unsigned int maxNumResults, bdSessionParams *sessionParams, bdMatchMakingInfo *results)
{
  _BOOL8 v11; 
  _BOOL8 v12; 
  bool v13; 
  _BOOL8 v14; 
  bool v15; 
  bool v16; 
  bdLobbyErrorCode started; 
  bdTaskParams taskParams; 

  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&taskParams, 0x8Au, 0x10u, 0x400u, 0xFFFFu);
  bdBufferParams::addString(&taskParams, this->m_context, 0x10ui64);
  LOBYTE(v11) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 4u, v11) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v13 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, primaryQueryID), taskParams.m_serializeOk = 1, !v13) )
      taskParams.m_serializeOk = 0;
  }
  LOBYTE(v12) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 4u, v12) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v15 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, secondaryQueryID), taskParams.m_serializeOk = 1, !v15) )
      taskParams.m_serializeOk = 0;
  }
  LOBYTE(v14) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 4u, v14) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v16 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, maxNumResults), taskParams.m_serializeOk = 1, !v16) )
      taskParams.m_serializeOk = 0;
  }
  bdBufferParams::addSerializable(&taskParams, sessionParams);
  if ( *(_OWORD *)&taskParams.m_taskResults == 0i64 )
  {
    taskParams.m_taskResults = results;
    taskParams.m_maxResults = maxNumResults;
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
    taskParams.m_serializeOk = 0;
  }
  started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
  if ( started )
    bdLogMessage(BD_LOG_WARNING, "warn/", "matchmaking", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmatchmaking\\bdmatchmaking.cpp", "bdMatchMaking::findSessionsTwoPass", 0x1A0u, "Failed to start task: Error %i", started);
  bdTaskParams::~bdTaskParams(&taskParams);
  return result;
}

/*
==============
bdMatchMaking::getPerformanceValues
==============
*/
bdReference<bdRemoteTask> *bdMatchMaking::getPerformanceValues(bdMatchMaking *this, bdReference<bdRemoteTask> *result, const unsigned __int64 *const entityIDs, const unsigned int numEntityIDs, const unsigned int gameType, bdStoredPerformanceValue *results)
{
  __int64 v6; 
  _BOOL8 v10; 
  _BOOL8 v11; 
  bool v12; 
  __int64 v13; 
  bool v14; 
  bdLobbyErrorCode started; 
  bdTaskParams taskParams; 

  v6 = numEntityIDs;
  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&taskParams, 0x8Au, 0xAu, 0x400u, 0xFFFFu);
  bdBufferParams::addString(&taskParams, this->m_context, 0x10ui64);
  LOBYTE(v10) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 4u, v10) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v12 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, gameType), taskParams.m_serializeOk = 1, !v12) )
      taskParams.m_serializeOk = 0;
  }
  if ( (_DWORD)v6 )
  {
    v13 = v6;
    do
    {
      LOBYTE(v11) = 1;
      if ( taskParams.ensureCapacity(&taskParams, 8u, v11) )
      {
        if ( taskParams.m_isWritingArray )
          --taskParams.m_arrayWriteCount;
        if ( !taskParams.m_serializeOk || (v14 = bdByteBuffer::writeUInt64(taskParams.m_buffer.m_ptr, *entityIDs), taskParams.m_serializeOk = 1, !v14) )
          taskParams.m_serializeOk = 0;
      }
      ++entityIDs;
      --v13;
    }
    while ( v13 );
  }
  if ( taskParams.m_taskResults || taskParams.m_taskResultRefs )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
    taskParams.m_serializeOk = 0;
  }
  else
  {
    taskParams.m_taskResults = results;
    taskParams.m_maxResults = v6;
  }
  started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
  if ( started )
    bdLogMessage(BD_LOG_WARNING, "warn/", "matchmaking", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmatchmaking\\bdmatchmaking.cpp", "bdMatchMaking::getPerformanceValues", 0x29Bu, "Failed to start task: Error %i", started);
  bdTaskParams::~bdTaskParams(&taskParams);
  return result;
}

/*
==============
bdMatchMaking::getSessionInvites
==============
*/
bdReference<bdRemoteTask> *bdMatchMaking::getSessionInvites(bdMatchMaking *this, bdReference<bdRemoteTask> *result, const unsigned int startIndex, const unsigned int maxNumResults, bdSessionInvite *results)
{
  _BOOL8 v9; 
  _BOOL8 v10; 
  bool v11; 
  bool v12; 
  bdLobbyErrorCode started; 
  bdTaskParams taskParams; 

  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&taskParams, 0x8Au, 0xBu, 0x400u, 0xFFFFu);
  bdBufferParams::addString(&taskParams, this->m_context, 0x10ui64);
  LOBYTE(v9) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 4u, v9) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v11 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, startIndex), taskParams.m_serializeOk = 1, !v11) )
      taskParams.m_serializeOk = 0;
  }
  LOBYTE(v10) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 4u, v10) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v12 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, maxNumResults), taskParams.m_serializeOk = 1, !v12) )
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
    taskParams.m_maxResults = maxNumResults;
  }
  started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
  if ( started )
    bdLogMessage(BD_LOG_WARNING, "warn/", "matchmaking", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmatchmaking\\bdmatchmaking.cpp", "bdMatchMaking::getSessionInvites", 0x2BBu, "Failed to start task: Error %i", started);
  bdTaskParams::~bdTaskParams(&taskParams);
  return result;
}

/*
==============
bdMatchMaking::initializeSession
==============
*/
bdReference<bdRemoteTask> *bdMatchMaking::initializeSession(bdMatchMaking *this, bdReference<bdRemoteTask> *result, const bdSessionID *sessionID, bdMatchMakingInfo *const sessionInfo)
{
  bdTaskParams v9; 

  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&v9, 0x8Au, 0x14u, 0x400u, 0xFFFFu);
  bdBufferParams::addString(&v9, this->m_context, 0x10ui64);
  bdBufferParams::addSerializable(&v9, (const bdSerializable *)(&sessionID->__vftable + 2));
  bdBufferParams::addSerializable(&v9, (const bdSerializable *)(&sessionInfo->__vftable + 2));
  if ( bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &v9) )
    bdLogMessage(BD_LOG_WARNING, "warn/", "matchmaking", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmatchmaking\\bdmatchmaking.cpp", "bdMatchMaking::initializeSession", 0x5Bu, "Failed to write param into buffer");
  bdTaskParams::~bdTaskParams(&v9);
  return result;
}

/*
==============
bdMatchMaking::inviteToSession
==============
*/
bdReference<bdRemoteTask> *bdMatchMaking::inviteToSession(bdMatchMaking *this, bdReference<bdRemoteTask> *result, const bdSessionID *sessionID, const unsigned __int64 *userIDs, const unsigned int numUsers, const void *const attachment, const unsigned int attachmentSize)
{
  unsigned int v11; 
  char *v12; 
  unsigned int v13; 
  _BOOL8 v14; 
  __int64 v15; 
  bool v16; 
  bdLobbyErrorCode started; 
  bdTaskParams taskParams; 

  result->m_ptr = NULL;
  v11 = 1024;
  if ( attachmentSize < 0x400 )
    v11 = attachmentSize;
  if ( v11 < attachmentSize )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "matchmaking", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmatchmaking\\bdmatchmaking.cpp", "bdMatchMaking::inviteToSession", 0x1B0u, "Exceeded maximum invite attachment size, data will be truncated.");
  bdTaskParams::bdTaskParams(&taskParams, 0x8Au, 8u, 0x400u, 0xFFFFu);
  bdBufferParams::addString(&taskParams, this->m_context, 0x10ui64);
  bdBufferParams::addSerializable(&taskParams, (const bdSerializable *)(&sessionID->__vftable + 2));
  v12 = (char *)attachment;
  if ( attachment )
  {
    v13 = v11;
  }
  else
  {
    v13 = attachmentSize;
    v12 = (char *)&queryFormat.fmt + 3;
  }
  bdBufferParams::addBlob(&taskParams, v12, v13);
  if ( numUsers )
  {
    v15 = numUsers;
    do
    {
      LOBYTE(v14) = 1;
      if ( taskParams.ensureCapacity(&taskParams, 8u, v14) )
      {
        if ( taskParams.m_isWritingArray )
          --taskParams.m_arrayWriteCount;
        if ( !taskParams.m_serializeOk || (v16 = bdByteBuffer::writeUInt64(taskParams.m_buffer.m_ptr, *userIDs), taskParams.m_serializeOk = 1, !v16) )
          taskParams.m_serializeOk = 0;
      }
      ++userIDs;
      --v15;
    }
    while ( v15 );
  }
  started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
  if ( started )
    bdLogMessage(BD_LOG_WARNING, "warn/", "matchmaking", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmatchmaking\\bdmatchmaking.cpp", "bdMatchMaking::inviteToSession", 0x1D0u, "Failed to start task: Error %i", started);
  bdTaskParams::~bdTaskParams(&taskParams);
  return result;
}

/*
==============
bdMatchMaking::notifyJoin
==============
*/
bdReference<bdRemoteTask> *bdMatchMaking::notifyJoin(bdMatchMaking *this, bdReference<bdRemoteTask> *result, const bdSessionID *sessionID, const unsigned __int64 *const users, const unsigned int numUsers)
{
  bdMatchMaking::startNotifyTask(this, result, sessionID, users, numUsers, 6u);
  return result;
}

/*
==============
bdMatchMaking::notifyLeave
==============
*/
bdReference<bdRemoteTask> *bdMatchMaking::notifyLeave(bdMatchMaking *this, bdReference<bdRemoteTask> *result, const bdSessionID *sessionID, const unsigned __int64 *const users, const unsigned int numUsers)
{
  bdMatchMaking::startNotifyTask(this, result, sessionID, users, numUsers, 7u);
  return result;
}

/*
==============
bdMatchMaking::requestSessionID
==============
*/
bdReference<bdRemoteTask> *bdMatchMaking::requestSessionID(bdMatchMaking *this, bdReference<bdRemoteTask> *result, bdSessionID *const sessionID)
{
  bdTaskParams v7; 

  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&v7, 0x8Au, 0x13u, 0x400u, 0xFFFFu);
  bdBufferParams::addString(&v7, this->m_context, 0x10ui64);
  if ( *(_OWORD *)&v7.m_taskResults == 0i64 )
  {
    v7.m_taskResults = sessionID;
    v7.m_maxResults = 1;
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
    v7.m_serializeOk = 0;
  }
  if ( bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &v7) )
    bdLogMessage(BD_LOG_WARNING, "warn/", "matchmaking", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmatchmaking\\bdmatchmaking.cpp", "bdMatchMaking::requestSessionID", 0x41u, "Failed to write param into buffer");
  bdTaskParams::~bdTaskParams(&v7);
  return result;
}

/*
==============
bdMatchMaking::startNotifyTask
==============
*/
bdReference<bdRemoteTask> *bdMatchMaking::startNotifyTask(bdMatchMaking *this, bdReference<bdRemoteTask> *result, const bdSessionID *sessionID, const unsigned __int64 *users, const unsigned int numUsers, const unsigned __int8 taskType)
{
  _BOOL8 v10; 
  __int64 v11; 
  bool v12; 
  bdLobbyErrorCode started; 
  bdLobbyErrorCode v15; 
  bdTaskParams v16; 

  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&v16, 0x8Au, taskType, 0x400u, 0xFFFFu);
  bdBufferParams::addString(&v16, this->m_context, 0x10ui64);
  bdBufferParams::addSerializable(&v16, (const bdSerializable *)(&sessionID->__vftable + 2));
  if ( numUsers )
  {
    v11 = numUsers;
    do
    {
      LOBYTE(v10) = 1;
      if ( v16.ensureCapacity(&v16, 8u, v10) )
      {
        if ( v16.m_isWritingArray )
          --v16.m_arrayWriteCount;
        if ( !v16.m_serializeOk || (v12 = bdByteBuffer::writeUInt64(v16.m_buffer.m_ptr, *users), v16.m_serializeOk = 1, !v12) )
          v16.m_serializeOk = 0;
      }
      ++users;
      --v11;
    }
    while ( v11 );
  }
  started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &v16);
  if ( started )
  {
    v15 = started;
    bdLogMessage(BD_LOG_WARNING, "warn/", "matchmaking", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmatchmaking\\bdmatchmaking.cpp", "bdMatchMaking::startNotifyTask", 0x2DAu, "Failed to start task: Error %i", v15);
  }
  bdTaskParams::~bdTaskParams(&v16);
  return result;
}

/*
==============
bdMatchMaking::submitAndGetPerformance
==============
*/
bdReference<bdRemoteTask> *bdMatchMaking::submitAndGetPerformance(bdMatchMaking *this, bdReference<bdRemoteTask> *result, const unsigned int gameType, const bdPerformanceValue *performanceValues, const bdPerformanceValue **performanceValuePtrs, const unsigned int numValues, bdStoredPerformanceValue *results)
{
  _BOOL8 v11; 
  bool v12; 
  __int64 v13; 
  const bdSerializable *v14; 
  const bdPerformanceValue **v15; 
  bdLobbyErrorCode started; 
  bdTaskParams v18; 

  bdTaskParams::bdTaskParams(&v18, 0x8Au, 0x12u, 0x400u, 0xFFFFu);
  bdBufferParams::addString(&v18, this->m_context, 0x10ui64);
  LOBYTE(v11) = 1;
  if ( v18.ensureCapacity(&v18, 4u, v11) )
  {
    if ( v18.m_isWritingArray )
      --v18.m_arrayWriteCount;
    if ( !v18.m_serializeOk || (v12 = bdByteBuffer::writeUInt32(v18.m_buffer.m_ptr, gameType), v18.m_serializeOk = 1, !v12) )
      v18.m_serializeOk = 0;
  }
  if ( numValues )
  {
    v13 = numValues;
    if ( performanceValues )
    {
      v14 = (const bdSerializable *)(&performanceValues->__vftable + 2);
      do
      {
        bdHandleAssert(performanceValuePtrs == NULL, "performanceValuePtrs == BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmatchmaking\\bdmatchmaking.cpp", "bdMatchMaking::submitAndGetPerformance", 0x244u, "performanceValuePtrs must be NULL");
        bdBufferParams::addSerializable(&v18, v14);
        v14 += 2;
        --v13;
      }
      while ( v13 );
    }
    else
    {
      v15 = performanceValuePtrs;
      do
      {
        bdHandleAssert(*v15 != NULL, "performanceValuePtrs[i] != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmatchmaking\\bdmatchmaking.cpp", "bdMatchMaking::submitAndGetPerformance", 0x249u, "performanceValuePtrs[i] must not be NULL");
        bdBufferParams::addSerializable(&v18, (const bdSerializable *)(&(*v15++)->__vftable + 2));
        --v13;
      }
      while ( v13 );
    }
  }
  if ( v18.m_taskResults || v18.m_taskResultRefs )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
    v18.m_serializeOk = 0;
  }
  else
  {
    v18.m_taskResults = results;
    v18.m_maxResults = numValues;
  }
  result->m_ptr = NULL;
  started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &v18);
  if ( started )
    bdLogMessage(BD_LOG_WARNING, "warn/", "matchmaking", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmatchmaking\\bdmatchmaking.cpp", "bdMatchMaking::submitAndGetPerformance", 0x253u, "Failed to start task BD_MM_SUBMIT_AND_GET_PERFORMANCE: Error %i", started);
  bdTaskParams::~bdTaskParams(&v18);
  return result;
}

/*
==============
bdMatchMaking::submitAndGetPerformance
==============
*/
bdReference<bdRemoteTask> *bdMatchMaking::submitAndGetPerformance(bdMatchMaking *this, bdReference<bdRemoteTask> *result, const unsigned int gameType, const bdPerformanceValue **performanceValuePtrs, const unsigned int numValues, bdStoredPerformanceValue *results)
{
  bdHandleAssert(performanceValuePtrs != NULL, "performanceValuePtrs != NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmatchmaking\\bdmatchmaking.cpp", "bdMatchMaking::submitAndGetPerformance", 0x231u, "performanceValues must not be NULL");
  bdHandleAssert(results != NULL, "results != NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmatchmaking\\bdmatchmaking.cpp", "bdMatchMaking::submitAndGetPerformance", 0x232u, "results must not be NULL");
  bdMatchMaking::submitAndGetPerformance(this, result, gameType, NULL, performanceValuePtrs, numValues, results);
  return result;
}

/*
==============
bdMatchMaking::submitAndGetPerformance
==============
*/
bdReference<bdRemoteTask> *bdMatchMaking::submitAndGetPerformance(bdMatchMaking *this, bdReference<bdRemoteTask> *result, const unsigned int gameType, const bdPerformanceValue *performanceValues, const unsigned int numValues, bdStoredPerformanceValue *results)
{
  bdHandleAssert(performanceValues != NULL, "performanceValues != NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmatchmaking\\bdmatchmaking.cpp", "bdMatchMaking::submitAndGetPerformance", 0x226u, "performanceValues must not be NULL");
  bdHandleAssert(results != NULL, "results != NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmatchmaking\\bdmatchmaking.cpp", "bdMatchMaking::submitAndGetPerformance", 0x227u, "results must not be NULL");
  bdMatchMaking::submitAndGetPerformance(this, result, gameType, performanceValues, NULL, numValues, results);
  return result;
}

/*
==============
bdMatchMaking::submitPerformance
==============
*/
bdReference<bdRemoteTask> *bdMatchMaking::submitPerformance(bdMatchMaking *this, bdReference<bdRemoteTask> *result, const unsigned int gameType, const bdPerformanceValue *performanceValues, const unsigned int numValues)
{
  _BOOL8 v9; 
  bool v10; 
  const bdSerializable *v11; 
  __int64 v12; 
  bdLobbyErrorCode started; 
  bdLobbyErrorCode v15; 
  bdTaskParams v16; 

  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&v16, 0x8Au, 9u, 0x400u, 0xFFFFu);
  bdBufferParams::addString(&v16, this->m_context, 0x10ui64);
  LOBYTE(v9) = 1;
  if ( v16.ensureCapacity(&v16, 4u, v9) )
  {
    if ( v16.m_isWritingArray )
      --v16.m_arrayWriteCount;
    if ( !v16.m_serializeOk || (v10 = bdByteBuffer::writeUInt32(v16.m_buffer.m_ptr, gameType), v16.m_serializeOk = 1, !v10) )
      v16.m_serializeOk = 0;
  }
  if ( numValues )
  {
    v11 = (const bdSerializable *)(&performanceValues->__vftable + 2);
    v12 = numValues;
    do
    {
      bdBufferParams::addSerializable(&v16, v11);
      v11 += 2;
      --v12;
    }
    while ( v12 );
  }
  started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &v16);
  if ( started )
  {
    v15 = started;
    bdLogMessage(BD_LOG_WARNING, "warn/", "matchmaking", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmatchmaking\\bdmatchmaking.cpp", "bdMatchMaking::submitPerformance", 0x1FCu, "Failed to start task: Error %i", v15);
  }
  bdTaskParams::~bdTaskParams(&v16);
  return result;
}

/*
==============
bdMatchMaking::submitPerformance
==============
*/
bdReference<bdRemoteTask> *bdMatchMaking::submitPerformance(bdMatchMaking *this, bdReference<bdRemoteTask> *result, const unsigned int gameType, const bdPerformanceValue **performanceValues, const unsigned int numValues)
{
  _BOOL8 v9; 
  bool v10; 
  __int64 v11; 
  bdLobbyErrorCode started; 
  bdLobbyErrorCode v14; 
  bdTaskParams v15; 

  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&v15, 0x8Au, 9u, 0x400u, 0xFFFFu);
  bdBufferParams::addString(&v15, this->m_context, 0x10ui64);
  LOBYTE(v9) = 1;
  if ( v15.ensureCapacity(&v15, 4u, v9) )
  {
    if ( v15.m_isWritingArray )
      --v15.m_arrayWriteCount;
    if ( !v15.m_serializeOk || (v10 = bdByteBuffer::writeUInt32(v15.m_buffer.m_ptr, gameType), v15.m_serializeOk = 1, !v10) )
      v15.m_serializeOk = 0;
  }
  if ( numValues )
  {
    v11 = numValues;
    do
    {
      bdBufferParams::addSerializable(&v15, (const bdSerializable *)(&(*performanceValues++)->__vftable + 2));
      --v11;
    }
    while ( v11 );
  }
  started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &v15);
  if ( started )
  {
    v14 = started;
    bdLogMessage(BD_LOG_WARNING, "warn/", "matchmaking", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmatchmaking\\bdmatchmaking.cpp", "bdMatchMaking::submitPerformance", 0x21Au, "Failed to start task: Error %i", v14);
  }
  bdTaskParams::~bdTaskParams(&v15);
  return result;
}

/*
==============
bdMatchMaking::updateSession
==============
*/
bdReference<bdRemoteTask> *bdMatchMaking::updateSession(bdMatchMaking *this, bdReference<bdRemoteTask> *result, const bdSessionID *sessionID, bdMatchMakingInfo *const sessionInfo)
{
  bdTaskParams v9; 

  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&v9, 0x8Au, 2u, 0x400u, 0xFFFFu);
  bdBufferParams::addString(&v9, this->m_context, 0x10ui64);
  bdBufferParams::addSerializable(&v9, (const bdSerializable *)(&sessionID->__vftable + 2));
  bdBufferParams::addSerializable(&v9, (const bdSerializable *)(&sessionInfo->__vftable + 2));
  if ( bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &v9) )
    bdLogMessage(BD_LOG_WARNING, "warn/", "matchmaking", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmatchmaking\\bdmatchmaking.cpp", "bdMatchMaking::updateSession", 0x92u, "Failed to write param into buffer");
  bdTaskParams::~bdTaskParams(&v9);
  return result;
}

/*
==============
bdMatchMaking::updateSessionPlayers
==============
*/
bdReference<bdRemoteTask> *bdMatchMaking::updateSessionPlayers(bdMatchMaking *this, bdReference<bdRemoteTask> *result, const bdSessionID *sessionID, bdMatchMakingInfo *const sessionInfo, unsigned int numPlayers)
{
  _BOOL8 v9; 
  bool v10; 
  bdTaskParams v12; 

  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&v12, 0x8Au, 0xCu, 0x400u, 0xFFFFu);
  bdBufferParams::addString(&v12, this->m_context, 0x10ui64);
  bdBufferParams::addSerializable(&v12, (const bdSerializable *)(&sessionID->__vftable + 2));
  LOBYTE(v9) = 1;
  if ( v12.ensureCapacity(&v12, 4u, v9) )
  {
    if ( v12.m_isWritingArray )
      --v12.m_arrayWriteCount;
    if ( !v12.m_serializeOk || (v10 = bdByteBuffer::writeUInt32(v12.m_buffer.m_ptr, numPlayers), v12.m_serializeOk = 1, !v10) )
      v12.m_serializeOk = 0;
  }
  bdBufferParams::addSerializable(&v12, (const bdSerializable *)(&sessionInfo->__vftable + 2));
  if ( bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &v12) )
    bdLogMessage(BD_LOG_WARNING, "warn/", "matchmaking", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmatchmaking\\bdmatchmaking.cpp", "bdMatchMaking::updateSessionPlayers", 0xAEu, "Failed to write param into buffer");
  bdTaskParams::~bdTaskParams(&v12);
  return result;
}

