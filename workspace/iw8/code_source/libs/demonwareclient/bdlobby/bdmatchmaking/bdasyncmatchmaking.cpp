/*
==============
bdAsyncMatchMaking::getTournamentDefinitions
==============
*/

bdReference<bdRemoteTask> *__fastcall bdAsyncMatchMaking::getTournamentDefinitions(bdAsyncMatchMaking *this, bdReference<bdRemoteTask> *result, const char *tournamentDefinitionNames, const unsigned int bufferSize, bdStringResult *tournamentDefinitions)
{
  return ?getTournamentDefinitions@bdAsyncMatchMaking@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBDIPEAVbdStringResult@@@Z(this, result, tournamentDefinitionNames, bufferSize, tournamentDefinitions);
}

/*
==============
bdAsyncMatchMaking::startSearch
==============
*/

bdReference<bdRemoteTask> *__fastcall bdAsyncMatchMaking::startSearch(bdAsyncMatchMaking *this, bdReference<bdRemoteTask> *result, const char *params, unsigned int paramsLength, bdStringResult *matchMakingSearchStatus)
{
  return ?startSearch@bdAsyncMatchMaking@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBDIPEAVbdStringResult@@@Z(this, result, params, paramsLength, matchMakingSearchStatus);
}

/*
==============
bdAsyncMatchMaking::qosHostsReply
==============
*/

bdReference<bdRemoteTask> *__fastcall bdAsyncMatchMaking::qosHostsReply(bdAsyncMatchMaking *this, bdReference<bdRemoteTask> *result, unsigned __int64 transactionID, const bdArray<bdQoSProbeInfo> *qosResponse)
{
  return ?qosHostsReply@bdAsyncMatchMaking@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KAEBV?$bdArray@VbdQoSProbeInfo@@@@@Z(this, result, transactionID, qosResponse);
}

/*
==============
bdAsyncMatchMaking::lobbyDisbanded
==============
*/

bdReference<bdRemoteTask> *__fastcall bdAsyncMatchMaking::lobbyDisbanded(bdAsyncMatchMaking *this, bdReference<bdRemoteTask> *result, unsigned __int64 lobbyID)
{
  return ?lobbyDisbanded@bdAsyncMatchMaking@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_K@Z(this, result, lobbyID);
}

/*
==============
bdAsyncMatchMaking::getPreferredServerDetails
==============
*/

bdReference<bdRemoteTask> *__fastcall bdAsyncMatchMaking::getPreferredServerDetails(bdAsyncMatchMaking *this, bdReference<bdRemoteTask> *result, const char *buildName, const char *context, bdStringResult *serverDetails)
{
  return ?getPreferredServerDetails@bdAsyncMatchMaking@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBD0PEAVbdStringResult@@@Z(this, result, buildName, context, serverDetails);
}

/*
==============
bdAsyncMatchMaking::setPlayerInfo
==============
*/

bdReference<bdRemoteTask> *__fastcall bdAsyncMatchMaking::setPlayerInfo(bdAsyncMatchMaking *this, bdReference<bdRemoteTask> *result, const char *playerInfo, unsigned int length)
{
  return ?setPlayerInfo@bdAsyncMatchMaking@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBDI@Z(this, result, playerInfo, length);
}

/*
==============
bdAsyncMatchMaking::getMatchMakingStatus
==============
*/

bdReference<bdRemoteTask> *__fastcall bdAsyncMatchMaking::getMatchMakingStatus(bdAsyncMatchMaking *this, bdReference<bdRemoteTask> *result, const char *searchParamsList, unsigned int paramsLength, bdStringResult *matchmakingStatus)
{
  return ?getMatchMakingStatus@bdAsyncMatchMaking@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBDIPEAVbdStringResult@@@Z(this, result, searchParamsList, paramsLength, matchmakingStatus);
}

/*
==============
bdAsyncMatchMaking::getMatchMakingPlayerToken
==============
*/

bdReference<bdRemoteTask> *__fastcall bdAsyncMatchMaking::getMatchMakingPlayerToken(bdAsyncMatchMaking *this, bdReference<bdRemoteTask> *result, bdUInt64Result *playerToken)
{
  return ?getMatchMakingPlayerToken@bdAsyncMatchMaking@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEAVbdUInt64Result@@@Z(this, result, playerToken);
}

/*
==============
bdAsyncMatchMaking::getRelayAuthKeys
==============
*/

bdReference<bdRemoteTask> *__fastcall bdAsyncMatchMaking::getRelayAuthKeys(bdAsyncMatchMaking *this, bdReference<bdRemoteTask> *result, bdStringResult *response)
{
  return ?getRelayAuthKeys@bdAsyncMatchMaking@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEAVbdStringResult@@@Z(this, result, response);
}

/*
==============
bdAsyncMatchMaking::rejoinTournament
==============
*/

bdReference<bdRemoteTask> *__fastcall bdAsyncMatchMaking::rejoinTournament(bdAsyncMatchMaking *this, bdReference<bdRemoteTask> *result, unsigned __int64 tournamentID)
{
  return ?rejoinTournament@bdAsyncMatchMaking@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_K@Z(this, result, tournamentID);
}

/*
==============
bdAsyncMatchMaking::initiateDCQoS
==============
*/

bdReference<bdRemoteTask> *__fastcall bdAsyncMatchMaking::initiateDCQoS(bdAsyncMatchMaking *this, bdReference<bdRemoteTask> *result, bdStringResult *dcQoSInfo)
{
  return ?initiateDCQoS@bdAsyncMatchMaking@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEAVbdStringResult@@@Z(this, result, dcQoSInfo);
}

/*
==============
bdAsyncMatchMaking::bdAsyncMatchMaking
==============
*/

void __fastcall bdAsyncMatchMaking::bdAsyncMatchMaking(bdAsyncMatchMaking *this, bdRemoteTaskManager *remoteTaskManager)
{
  ??0bdAsyncMatchMaking@@IEAA@PEAVbdRemoteTaskManager@@@Z(this, remoteTaskManager);
}

/*
==============
bdAsyncMatchMaking::cancelMatchMaking
==============
*/

bdReference<bdRemoteTask> *__fastcall bdAsyncMatchMaking::cancelMatchMaking(bdAsyncMatchMaking *this, bdReference<bdRemoteTask> *result, unsigned __int64 mmID, bdBoolResult *success)
{
  return ?cancelMatchMaking@bdAsyncMatchMaking@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KPEAVbdBoolResult@@@Z(this, result, mmID, success);
}

/*
==============
bdAsyncMatchMaking::startMatchMaking
==============
*/

bdReference<bdRemoteTask> *__fastcall bdAsyncMatchMaking::startMatchMaking(bdAsyncMatchMaking *this, bdReference<bdRemoteTask> *result, unsigned __int64 mmID, const char *startMatchMakingParams, unsigned int paramsLength, bdStringResult *matchMakingSearchStatus)
{
  return ?startMatchMaking@bdAsyncMatchMaking@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KPEBDIPEAVbdStringResult@@@Z(this, result, mmID, startMatchMakingParams, paramsLength, matchMakingSearchStatus);
}

/*
==============
bdAsyncMatchMaking::readyUpTournament
==============
*/

bdReference<bdRemoteTask> *__fastcall bdAsyncMatchMaking::readyUpTournament(bdAsyncMatchMaking *this, bdReference<bdRemoteTask> *result, unsigned __int64 tournamentID)
{
  return ?readyUpTournament@bdAsyncMatchMaking@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_K@Z(this, result, tournamentID);
}

/*
==============
bdAsyncMatchMaking::syncLobbyDocuments
==============
*/

bdReference<bdRemoteTask> *__fastcall bdAsyncMatchMaking::syncLobbyDocuments(bdAsyncMatchMaking *this, bdReference<bdRemoteTask> *result, unsigned __int64 lobbyID, bdBoolResult *success, unsigned __int64 updateID, const char *lobbyHostDoc, unsigned int lobbyHostDocLength)
{
  return ?syncLobbyDocuments@bdAsyncMatchMaking@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KPEAVbdBoolResult@@0PEBDI@Z(this, result, lobbyID, success, updateID, lobbyHostDoc, lobbyHostDocLength);
}

/*
==============
bdAsyncMatchMaking::initMatchMaking
==============
*/

bdReference<bdRemoteTask> *__fastcall bdAsyncMatchMaking::initMatchMaking(bdAsyncMatchMaking *this, bdReference<bdRemoteTask> *result, const unsigned __int64 *userIDs, const unsigned __int64 *tokens, unsigned __int64 count, bdStringResult *initMatchMakingResponse)
{
  return ?initMatchMaking@bdAsyncMatchMaking@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEB_K0_KPEAVbdStringResult@@@Z(this, result, userIDs, tokens, count, initMatchMakingResponse);
}

/*
==============
bdAsyncMatchMaking::getTournamentState
==============
*/

bdReference<bdRemoteTask> *__fastcall bdAsyncMatchMaking::getTournamentState(bdAsyncMatchMaking *this, bdReference<bdRemoteTask> *result, bdStringResult *tournamentState)
{
  return ?getTournamentState@bdAsyncMatchMaking@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEAVbdStringResult@@@Z(this, result, tournamentState);
}

/*
==============
bdAsyncMatchMaking::registerForTournament
==============
*/

bdReference<bdRemoteTask> *__fastcall bdAsyncMatchMaking::registerForTournament(bdAsyncMatchMaking *this, bdReference<bdRemoteTask> *result, const char *tournamentRegistration, const unsigned int bufferSize, bdStringResult *registrationResult)
{
  return ?registerForTournament@bdAsyncMatchMaking@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBDIPEAVbdStringResult@@@Z(this, result, tournamentRegistration, bufferSize, registrationResult);
}

/*
==============
bdAsyncMatchMaking::getRelayClientAuthToken
==============
*/

bdReference<bdRemoteTask> *__fastcall bdAsyncMatchMaking::getRelayClientAuthToken(bdAsyncMatchMaking *this, bdReference<bdRemoteTask> *result, bdClientAuthTokenResult *clientAuthTokenResult)
{
  return ?getRelayClientAuthToken@bdAsyncMatchMaking@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEAVbdClientAuthTokenResult@@@Z(this, result, clientAuthTokenResult);
}

/*
==============
bdAsyncMatchMaking::shutdownMatchMaking
==============
*/

bdReference<bdRemoteTask> *__fastcall bdAsyncMatchMaking::shutdownMatchMaking(bdAsyncMatchMaking *this, bdReference<bdRemoteTask> *result, unsigned __int64 mmID, bdBoolResult *success)
{
  return ?shutdownMatchMaking@bdAsyncMatchMaking@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KPEAVbdBoolResult@@@Z(this, result, mmID, success);
}

/*
==============
bdAsyncMatchMaking::~bdAsyncMatchMaking
==============
*/

void __fastcall bdAsyncMatchMaking::~bdAsyncMatchMaking(bdAsyncMatchMaking *this)
{
  ??1bdAsyncMatchMaking@@UEAA@XZ(this);
}

/*
==============
bdAsyncMatchMaking::getLobbyDocuments
==============
*/

bdReference<bdRemoteTask> *__fastcall bdAsyncMatchMaking::getLobbyDocuments(bdAsyncMatchMaking *this, bdReference<bdRemoteTask> *result, unsigned __int64 lobbyID, bdLobbyDocuments *lobbyDocs)
{
  return ?getLobbyDocuments@bdAsyncMatchMaking@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KPEAVbdLobbyDocuments@@@Z(this, result, lobbyID, lobbyDocs);
}

/*
==============
bdAsyncMatchMaking::leaveAllTournaments
==============
*/

bdReference<bdRemoteTask> *__fastcall bdAsyncMatchMaking::leaveAllTournaments(bdAsyncMatchMaking *this, bdReference<bdRemoteTask> *result)
{
  return ?leaveAllTournaments@bdAsyncMatchMaking@@QEAA?AV?$bdReference@VbdRemoteTask@@@@XZ(this, result);
}

/*
==============
bdAsyncMatchMaking::startTaskWithResult
==============
*/

void __fastcall bdAsyncMatchMaking::startTaskWithResult(bdAsyncMatchMaking *this, bdReference<bdRemoteTask> *task, bdTaskParams *params)
{
  ?startTaskWithResult@bdAsyncMatchMaking@@IEAAXAEAV?$bdReference@VbdRemoteTask@@@@AEAVbdTaskParams@@@Z(this, task, params);
}

/*
==============
bdAsyncMatchMaking::ackExpectGame
==============
*/

bdReference<bdRemoteTask> *__fastcall bdAsyncMatchMaking::ackExpectGame(bdAsyncMatchMaking *this, bdReference<bdRemoteTask> *result, unsigned __int64 lobbyID)
{
  return ?ackExpectGame@bdAsyncMatchMaking@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_K@Z(this, result, lobbyID);
}

/*
==============
bdAsyncMatchMaking::submitTournamentMatchResults
==============
*/

bdReference<bdRemoteTask> *__fastcall bdAsyncMatchMaking::submitTournamentMatchResults(bdAsyncMatchMaking *this, bdReference<bdRemoteTask> *result, const char *tournamentMatchResults, unsigned int matchResultsLength)
{
  return ?submitTournamentMatchResults@bdAsyncMatchMaking@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBDI@Z(this, result, tournamentMatchResults, matchResultsLength);
}

/*
==============
bdAsyncMatchMaking::getDataCenterPreferences
==============
*/

bdReference<bdRemoteTask> *__fastcall bdAsyncMatchMaking::getDataCenterPreferences(bdAsyncMatchMaking *this, bdReference<bdRemoteTask> *result, unsigned __int64 *userIDs, unsigned int numUserIDs, bdDataCenterPreferences *results)
{
  return ?getDataCenterPreferences@bdAsyncMatchMaking@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEA_KIPEAVbdDataCenterPreferences@@@Z(this, result, userIDs, numUserIDs, results);
}

/*
==============
bdAsyncMatchMaking::ackJoinTournament
==============
*/

bdReference<bdRemoteTask> *__fastcall bdAsyncMatchMaking::ackJoinTournament(bdAsyncMatchMaking *this, bdReference<bdRemoteTask> *result, unsigned __int64 tournamentID, bool acceptJoin)
{
  return ?ackJoinTournament@bdAsyncMatchMaking@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_K_N@Z(this, result, tournamentID, acceptJoin);
}

/*
==============
bdAsyncMatchMaking::initiateDCQoS
==============
*/

bdReference<bdRemoteTask> *__fastcall bdAsyncMatchMaking::initiateDCQoS(bdAsyncMatchMaking *this, bdReference<bdRemoteTask> *result, const char *initiateDCQoSParams, unsigned int bufferSize, bdStringResult *dcQoSInfo)
{
  return ?initiateDCQoS@bdAsyncMatchMaking@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBDIPEAVbdStringResult@@@Z(this, result, initiateDCQoSParams, bufferSize, dcQoSInfo);
}

/*
==============
bdAsyncMatchMaking::bdAsyncMatchMaking
==============
*/
void bdAsyncMatchMaking::bdAsyncMatchMaking(bdAsyncMatchMaking *this, bdRemoteTaskManager *remoteTaskManager)
{
  this->m_remoteTaskManager = remoteTaskManager;
  this->__vftable = (bdAsyncMatchMaking_vtbl *)&bdAsyncMatchMaking::`vftable';
}

/*
==============
bdAsyncMatchMaking::~bdAsyncMatchMaking
==============
*/
void bdAsyncMatchMaking::~bdAsyncMatchMaking(bdAsyncMatchMaking *this)
{
  this->__vftable = (bdAsyncMatchMaking_vtbl *)&bdService::`vftable';
}

/*
==============
bdAsyncMatchMaking::ackExpectGame
==============
*/
bdReference<bdRemoteTask> *bdAsyncMatchMaking::ackExpectGame(bdAsyncMatchMaking *this, bdReference<bdRemoteTask> *result, unsigned __int64 lobbyID)
{
  _BOOL8 v6; 
  bool v7; 
  bdTaskParams params; 

  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&params, 0x91u, 0xEu, 0x400u, 0xFFFFu);
  LOBYTE(v6) = 1;
  if ( params.ensureCapacity(&params, 8u, v6) )
  {
    if ( params.m_isWritingArray )
      --params.m_arrayWriteCount;
    if ( !params.m_serializeOk || (v7 = bdByteBuffer::writeUInt64(params.m_buffer.m_ptr, lobbyID), params.m_serializeOk = 1, !v7) )
      params.m_serializeOk = 0;
  }
  bdAsyncMatchMaking::startTaskWithResult(this, result, &params);
  bdTaskParams::~bdTaskParams(&params);
  return result;
}

/*
==============
bdAsyncMatchMaking::ackJoinTournament
==============
*/
bdReference<bdRemoteTask> *bdAsyncMatchMaking::ackJoinTournament(bdAsyncMatchMaking *this, bdReference<bdRemoteTask> *result, unsigned __int64 tournamentID, bool acceptJoin)
{
  _BOOL8 v8; 
  _BOOL8 v9; 
  bool v10; 
  bool v11; 
  bdTaskParams params; 

  bdTaskParams::bdTaskParams(&params, 0x91u, 0x17u, 0x400u, 0xFFFFu);
  LOBYTE(v8) = 1;
  if ( params.ensureCapacity(&params, 8u, v8) )
  {
    if ( params.m_isWritingArray )
      --params.m_arrayWriteCount;
    if ( !params.m_serializeOk || (v10 = bdByteBuffer::writeUInt64(params.m_buffer.m_ptr, tournamentID), params.m_serializeOk = 1, !v10) )
      params.m_serializeOk = 0;
  }
  LOBYTE(v9) = 1;
  if ( params.ensureCapacity(&params, 1u, v9) )
  {
    if ( params.m_isWritingArray )
      --params.m_arrayWriteCount;
    if ( !params.m_serializeOk || (v11 = bdByteBuffer::writeBool(params.m_buffer.m_ptr, acceptJoin), params.m_serializeOk = 1, !v11) )
      params.m_serializeOk = 0;
  }
  result->m_ptr = NULL;
  bdAsyncMatchMaking::startTaskWithResult(this, result, &params);
  bdTaskParams::~bdTaskParams(&params);
  return result;
}

/*
==============
bdAsyncMatchMaking::cancelMatchMaking
==============
*/
bdReference<bdRemoteTask> *bdAsyncMatchMaking::cancelMatchMaking(bdAsyncMatchMaking *this, bdReference<bdRemoteTask> *result, unsigned __int64 mmID, bdBoolResult *success)
{
  _BOOL8 v8; 
  bool v9; 
  bdTaskParams params; 

  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&params, 0x91u, 8u, 0x400u, 0xFFFFu);
  LOBYTE(v8) = 1;
  if ( params.ensureCapacity(&params, 8u, v8) )
  {
    if ( params.m_isWritingArray )
      --params.m_arrayWriteCount;
    if ( !params.m_serializeOk || (v9 = bdByteBuffer::writeUInt64(params.m_buffer.m_ptr, mmID), params.m_serializeOk = 1, !v9) )
      params.m_serializeOk = 0;
  }
  if ( params.m_taskResults || params.m_taskResultRefs )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
    params.m_serializeOk = 0;
  }
  else
  {
    params.m_taskResults = success;
    params.m_maxResults = 1;
  }
  bdAsyncMatchMaking::startTaskWithResult(this, result, &params);
  bdTaskParams::~bdTaskParams(&params);
  return result;
}

/*
==============
bdAsyncMatchMaking::getDataCenterPreferences
==============
*/
bdReference<bdRemoteTask> *bdAsyncMatchMaking::getDataCenterPreferences(bdAsyncMatchMaking *this, bdReference<bdRemoteTask> *result, unsigned __int64 *userIDs, unsigned int numUserIDs, bdDataCenterPreferences *results)
{
  unsigned __int64 v5; 
  unsigned __int64 v9; 
  _BOOL8 v10; 
  _BOOL8 v11; 
  bool v12; 
  bool v13; 
  bdTaskParams params; 

  v5 = numUserIDs;
  v9 = 0i64;
  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&params, 0x91u, 0x10u, 0x400u, 0xFFFFu);
  LOBYTE(v10) = 1;
  if ( params.ensureCapacity(&params, 8u, v10) )
  {
    if ( params.m_isWritingArray )
      --params.m_arrayWriteCount;
    if ( !params.m_serializeOk || (v12 = bdByteBuffer::writeUInt64(params.m_buffer.m_ptr, v5), params.m_serializeOk = 1, !v12) )
      params.m_serializeOk = 0;
  }
  if ( v5 )
  {
    do
    {
      LOBYTE(v11) = 1;
      if ( params.ensureCapacity(&params, 8u, v11) )
      {
        if ( params.m_isWritingArray )
          --params.m_arrayWriteCount;
        if ( !params.m_serializeOk || (v13 = bdByteBuffer::writeUInt64(params.m_buffer.m_ptr, userIDs[v9]), params.m_serializeOk = 1, !v13) )
          params.m_serializeOk = 0;
      }
      ++v9;
    }
    while ( v9 < v5 );
  }
  if ( params.m_taskResults || params.m_taskResultRefs )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
    params.m_serializeOk = 0;
  }
  else
  {
    params.m_taskResults = results;
    params.m_maxResults = 1;
  }
  bdAsyncMatchMaking::startTaskWithResult(this, result, &params);
  bdTaskParams::~bdTaskParams(&params);
  return result;
}

/*
==============
bdAsyncMatchMaking::getLobbyDocuments
==============
*/
bdReference<bdRemoteTask> *bdAsyncMatchMaking::getLobbyDocuments(bdAsyncMatchMaking *this, bdReference<bdRemoteTask> *result, unsigned __int64 lobbyID, bdLobbyDocuments *lobbyDocs)
{
  _BOOL8 v8; 
  bool v9; 
  bdTaskParams params; 

  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&params, 0x91u, 0xDu, 0x400u, 0xFFFFu);
  LOBYTE(v8) = 1;
  if ( params.ensureCapacity(&params, 8u, v8) )
  {
    if ( params.m_isWritingArray )
      --params.m_arrayWriteCount;
    if ( !params.m_serializeOk || (v9 = bdByteBuffer::writeUInt64(params.m_buffer.m_ptr, lobbyID), params.m_serializeOk = 1, !v9) )
      params.m_serializeOk = 0;
  }
  if ( params.m_taskResults || params.m_taskResultRefs )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
    params.m_serializeOk = 0;
  }
  else
  {
    params.m_taskResults = lobbyDocs;
    params.m_maxResults = 1;
  }
  bdAsyncMatchMaking::startTaskWithResult(this, result, &params);
  bdTaskParams::~bdTaskParams(&params);
  return result;
}

/*
==============
bdAsyncMatchMaking::getMatchMakingPlayerToken
==============
*/
bdReference<bdRemoteTask> *bdAsyncMatchMaking::getMatchMakingPlayerToken(bdAsyncMatchMaking *this, bdReference<bdRemoteTask> *result, bdUInt64Result *playerToken)
{
  bdTaskParams params; 

  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&params, 0x91u, 3u, 0x400u, 0xFFFFu);
  if ( *(_OWORD *)&params.m_taskResults == 0i64 )
  {
    params.m_taskResults = playerToken;
    params.m_maxResults = 1;
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
    params.m_serializeOk = 0;
  }
  bdAsyncMatchMaking::startTaskWithResult(this, result, &params);
  bdTaskParams::~bdTaskParams(&params);
  return result;
}

/*
==============
bdAsyncMatchMaking::getMatchMakingStatus
==============
*/
bdReference<bdRemoteTask> *bdAsyncMatchMaking::getMatchMakingStatus(bdAsyncMatchMaking *this, bdReference<bdRemoteTask> *result, const char *searchParamsList, unsigned int paramsLength, bdStringResult *matchmakingStatus)
{
  bdTaskParams v10; 

  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&v10, 0x91u, 5u, 0x400u, 0xFFFFu);
  bdBufferParams::addString(&v10, searchParamsList, paramsLength);
  if ( *(_OWORD *)&v10.m_taskResults == 0i64 )
  {
    v10.m_taskResults = matchmakingStatus;
    v10.m_maxResults = 1;
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
    v10.m_serializeOk = 0;
  }
  bdAsyncMatchMaking::startTaskWithResult(this, result, &v10);
  bdTaskParams::~bdTaskParams(&v10);
  return result;
}

/*
==============
bdAsyncMatchMaking::getPreferredServerDetails
==============
*/
bdReference<bdRemoteTask> *bdAsyncMatchMaking::getPreferredServerDetails(bdAsyncMatchMaking *this, bdReference<bdRemoteTask> *result, const char *buildName, const char *context, bdStringResult *serverDetails)
{
  bdTaskParams v10; 

  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&v10, 0x91u, 0x18u, 0x400u, 0xFFFFu);
  bdBufferParams::addString(&v10, buildName, 0x40ui64);
  bdBufferParams::addString(&v10, context, 0x40ui64);
  if ( *(_OWORD *)&v10.m_taskResults == 0i64 )
  {
    v10.m_taskResults = serverDetails;
    v10.m_maxResults = 1;
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
    v10.m_serializeOk = 0;
  }
  bdAsyncMatchMaking::startTaskWithResult(this, result, &v10);
  bdTaskParams::~bdTaskParams(&v10);
  return result;
}

/*
==============
bdAsyncMatchMaking::getRelayAuthKeys
==============
*/
bdReference<bdRemoteTask> *bdAsyncMatchMaking::getRelayAuthKeys(bdAsyncMatchMaking *this, bdReference<bdRemoteTask> *result, bdStringResult *response)
{
  bdTaskParams params; 

  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&params, 0x91u, 0x1Eu, 0x400u, 0xFFFFu);
  if ( *(_OWORD *)&params.m_taskResults == 0i64 )
  {
    params.m_taskResults = response;
    params.m_maxResults = 1;
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
    params.m_serializeOk = 0;
  }
  bdAsyncMatchMaking::startTaskWithResult(this, result, &params);
  bdTaskParams::~bdTaskParams(&params);
  return result;
}

/*
==============
bdAsyncMatchMaking::getRelayClientAuthToken
==============
*/
bdReference<bdRemoteTask> *bdAsyncMatchMaking::getRelayClientAuthToken(bdAsyncMatchMaking *this, bdReference<bdRemoteTask> *result, bdClientAuthTokenResult *clientAuthTokenResult)
{
  bdTaskParams params; 

  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&params, 0x91u, 0x1Au, 0x400u, 0xFFFFu);
  if ( *(_OWORD *)&params.m_taskResults == 0i64 )
  {
    params.m_taskResults = clientAuthTokenResult;
    params.m_maxResults = 1;
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
    params.m_serializeOk = 0;
  }
  bdAsyncMatchMaking::startTaskWithResult(this, result, &params);
  bdTaskParams::~bdTaskParams(&params);
  return result;
}

/*
==============
bdAsyncMatchMaking::getTournamentDefinitions
==============
*/
bdReference<bdRemoteTask> *bdAsyncMatchMaking::getTournamentDefinitions(bdAsyncMatchMaking *this, bdReference<bdRemoteTask> *result, const char *tournamentDefinitionNames, const unsigned int bufferSize, bdStringResult *tournamentDefinitions)
{
  bdTaskParams v10; 

  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&v10, 0x91u, 0x1Bu, 0x400u, 0xFFFFu);
  bdBufferParams::addString(&v10, tournamentDefinitionNames, bufferSize);
  if ( *(_OWORD *)&v10.m_taskResults == 0i64 )
  {
    v10.m_taskResults = tournamentDefinitions;
    v10.m_maxResults = 1;
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
    v10.m_serializeOk = 0;
  }
  bdAsyncMatchMaking::startTaskWithResult(this, result, &v10);
  bdTaskParams::~bdTaskParams(&v10);
  return result;
}

/*
==============
bdAsyncMatchMaking::getTournamentState
==============
*/
bdReference<bdRemoteTask> *bdAsyncMatchMaking::getTournamentState(bdAsyncMatchMaking *this, bdReference<bdRemoteTask> *result, bdStringResult *tournamentState)
{
  bdTaskParams params; 

  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&params, 0x91u, 0x14u, 0x400u, 0xFFFFu);
  if ( *(_OWORD *)&params.m_taskResults == 0i64 )
  {
    params.m_taskResults = tournamentState;
    params.m_maxResults = 1;
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
    params.m_serializeOk = 0;
  }
  bdAsyncMatchMaking::startTaskWithResult(this, result, &params);
  bdTaskParams::~bdTaskParams(&params);
  return result;
}

/*
==============
bdAsyncMatchMaking::initMatchMaking
==============
*/
bdReference<bdRemoteTask> *bdAsyncMatchMaking::initMatchMaking(bdAsyncMatchMaking *this, bdReference<bdRemoteTask> *result, const unsigned __int64 *userIDs, const unsigned __int64 *tokens, unsigned __int64 count, bdStringResult *initMatchMakingResponse)
{
  unsigned __int64 v10; 
  _BOOL8 v11; 
  _BOOL8 v12; 
  bool v13; 
  unsigned __int64 i; 
  bool v15; 
  _BOOL8 v16; 
  bool v17; 
  bool v18; 
  bdTaskParams params; 

  v10 = 0i64;
  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&params, 0x91u, 6u, 0x400u, 0xFFFFu);
  LOBYTE(v11) = 1;
  if ( params.ensureCapacity(&params, 8u, v11) )
  {
    if ( params.m_isWritingArray )
      --params.m_arrayWriteCount;
    if ( !params.m_serializeOk || (v13 = bdByteBuffer::writeUInt64(params.m_buffer.m_ptr, count), params.m_serializeOk = 1, !v13) )
      params.m_serializeOk = 0;
  }
  for ( i = 0i64; i < count; ++i )
  {
    LOBYTE(v12) = 1;
    if ( params.ensureCapacity(&params, 8u, v12) )
    {
      if ( params.m_isWritingArray )
        --params.m_arrayWriteCount;
      if ( !params.m_serializeOk || (v15 = bdByteBuffer::writeUInt64(params.m_buffer.m_ptr, userIDs[i]), params.m_serializeOk = 1, !v15) )
        params.m_serializeOk = 0;
    }
  }
  LOBYTE(v12) = 1;
  if ( params.ensureCapacity(&params, 8u, v12) )
  {
    if ( params.m_isWritingArray )
      --params.m_arrayWriteCount;
    if ( !params.m_serializeOk || (v17 = bdByteBuffer::writeUInt64(params.m_buffer.m_ptr, count), params.m_serializeOk = 1, !v17) )
      params.m_serializeOk = 0;
  }
  if ( count )
  {
    do
    {
      LOBYTE(v16) = 1;
      if ( params.ensureCapacity(&params, 8u, v16) )
      {
        if ( params.m_isWritingArray )
          --params.m_arrayWriteCount;
        if ( !params.m_serializeOk || (v18 = bdByteBuffer::writeUInt64(params.m_buffer.m_ptr, tokens[v10]), params.m_serializeOk = 1, !v18) )
          params.m_serializeOk = 0;
      }
      ++v10;
    }
    while ( v10 < count );
  }
  if ( params.m_taskResults || params.m_taskResultRefs )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
    params.m_serializeOk = 0;
  }
  else
  {
    params.m_taskResults = initMatchMakingResponse;
    params.m_maxResults = 1;
  }
  bdAsyncMatchMaking::startTaskWithResult(this, result, &params);
  bdTaskParams::~bdTaskParams(&params);
  return result;
}

/*
==============
bdAsyncMatchMaking::initiateDCQoS
==============
*/
bdReference<bdRemoteTask> *bdAsyncMatchMaking::initiateDCQoS(bdAsyncMatchMaking *this, bdReference<bdRemoteTask> *result, bdStringResult *dcQoSInfo)
{
  bdTaskParams params; 

  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&params, 0x91u, 0x11u, 0x400u, 0xFFFFu);
  if ( *(_OWORD *)&params.m_taskResults == 0i64 )
  {
    params.m_taskResults = dcQoSInfo;
    params.m_maxResults = 1;
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
    params.m_serializeOk = 0;
  }
  bdAsyncMatchMaking::startTaskWithResult(this, result, &params);
  bdTaskParams::~bdTaskParams(&params);
  return result;
}

/*
==============
bdAsyncMatchMaking::initiateDCQoS
==============
*/
bdReference<bdRemoteTask> *bdAsyncMatchMaking::initiateDCQoS(bdAsyncMatchMaking *this, bdReference<bdRemoteTask> *result, const char *initiateDCQoSParams, unsigned int bufferSize, bdStringResult *dcQoSInfo)
{
  bdTaskParams v10; 

  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&v10, 0x91u, 0x19u, 0x400u, 0xFFFFu);
  bdBufferParams::addString(&v10, initiateDCQoSParams, bufferSize);
  if ( *(_OWORD *)&v10.m_taskResults == 0i64 )
  {
    v10.m_taskResults = dcQoSInfo;
    v10.m_maxResults = 1;
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
    v10.m_serializeOk = 0;
  }
  bdAsyncMatchMaking::startTaskWithResult(this, result, &v10);
  bdTaskParams::~bdTaskParams(&v10);
  return result;
}

/*
==============
bdAsyncMatchMaking::leaveAllTournaments
==============
*/
bdReference<bdRemoteTask> *bdAsyncMatchMaking::leaveAllTournaments(bdAsyncMatchMaking *this, bdReference<bdRemoteTask> *result)
{
  bdTaskParams params; 

  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&params, 0x91u, 0x16u, 0x400u, 0xFFFFu);
  bdAsyncMatchMaking::startTaskWithResult(this, result, &params);
  bdTaskParams::~bdTaskParams(&params);
  return result;
}

/*
==============
bdAsyncMatchMaking::lobbyDisbanded
==============
*/
bdReference<bdRemoteTask> *bdAsyncMatchMaking::lobbyDisbanded(bdAsyncMatchMaking *this, bdReference<bdRemoteTask> *result, unsigned __int64 lobbyID)
{
  _BOOL8 v6; 
  bool v7; 
  bdTaskParams params; 

  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&params, 0x91u, 0xAu, 0x400u, 0xFFFFu);
  LOBYTE(v6) = 1;
  if ( params.ensureCapacity(&params, 8u, v6) )
  {
    if ( params.m_isWritingArray )
      --params.m_arrayWriteCount;
    if ( !params.m_serializeOk || (v7 = bdByteBuffer::writeUInt64(params.m_buffer.m_ptr, lobbyID), params.m_serializeOk = 1, !v7) )
      params.m_serializeOk = 0;
  }
  bdAsyncMatchMaking::startTaskWithResult(this, result, &params);
  bdTaskParams::~bdTaskParams(&params);
  return result;
}

/*
==============
bdAsyncMatchMaking::qosHostsReply
==============
*/
bdReference<bdRemoteTask> *bdAsyncMatchMaking::qosHostsReply(bdAsyncMatchMaking *this, bdReference<bdRemoteTask> *result, unsigned __int64 transactionID, const bdArray<bdQoSProbeInfo> *qosResponse)
{
  bdReference<bdRemoteTask> *v6; 
  _BOOL8 v7; 
  _BOOL8 v8; 
  bool v9; 
  unsigned __int64 m_size; 
  bool v11; 
  unsigned int v12; 
  unsigned int v13; 
  unsigned int v15; 
  _BOOL8 v18; 
  bool v20; 
  unsigned int m_dataSize; 
  unsigned int v22; 
  unsigned __int8 *m_data; 
  bdQoSProbeInfo *v24; 
  _BOOL8 v25; 
  bool v26; 
  bdQoSProbeInfo *v27; 
  _BOOL8 v28; 
  bool v29; 
  bdQoSProbeInfo *v30; 
  _BOOL8 v31; 
  bool v32; 
  _BOOL8 v34; 
  bool v36; 
  unsigned int offset[4]; 
  bdTaskParams params; 
  int v40; 
  bdReference<bdRemoteTask> *v41; 
  bdAsyncMatchMaking *v42; 
  __int64 v43; 
  bdReference<bdRemoteTask> *v44; 
  unsigned __int8 buffer[96]; 

  v43 = -2i64;
  v6 = result;
  v41 = result;
  v42 = this;
  v44 = result;
  result->m_ptr = NULL;
  v40 = 1;
  bdTaskParams::bdTaskParams(&params, 0x91u, 4u, 0x400u, 0xFFFFu);
  LOBYTE(v7) = 1;
  if ( params.ensureCapacity(&params, 8u, v7) )
  {
    if ( params.m_isWritingArray )
      --params.m_arrayWriteCount;
    if ( !params.m_serializeOk || (v9 = bdByteBuffer::writeUInt64(params.m_buffer.m_ptr, transactionID), params.m_serializeOk = 1, !v9) )
      params.m_serializeOk = 0;
  }
  m_size = qosResponse->m_size;
  LOBYTE(v8) = 1;
  if ( params.ensureCapacity(&params, 8u, v8) )
  {
    if ( params.m_isWritingArray )
      --params.m_arrayWriteCount;
    if ( !params.m_serializeOk || (v11 = bdByteBuffer::writeUInt64(params.m_buffer.m_ptr, m_size), params.m_serializeOk = 1, !v11) )
      params.m_serializeOk = 0;
  }
  v12 = 0;
  v13 = qosResponse->m_size;
  if ( v13 )
  {
    do
    {
      memset_0(buffer, 0, 0x54ui64);
      bdHandleAssert(v12 < v13, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<class bdQoSProbeInfo>::operator []", 0x70u, "bdArray<T>::operator[], rangecheck failed");
      _R15 = v12;
      if ( qosResponse->m_data[_R15].m_addr.m_ptr )
      {
        bdHandleAssert(v12 < qosResponse->m_size, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<class bdQoSProbeInfo>::operator []", 0x70u, "bdArray<T>::operator[], rangecheck failed");
        bdCommonAddr::serialize(qosResponse->m_data[_R15].m_addr.m_ptr, buffer);
      }
      bdBufferParams::addBlob(&params, buffer, 0x54u);
      offset[0] = 0;
      bdHandleAssert(v12 < qosResponse->m_size, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<class bdQoSProbeInfo>::operator []", 0x70u, "bdArray<T>::operator[], rangecheck failed");
      bdAddr::serialize(&qosResponse->m_data[_R15].m_realAddr, buffer, 0x54u, offset[0], offset);
      bdBufferParams::addBlob(&params, buffer, offset[0]);
      bdHandleAssert(v12 < qosResponse->m_size, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<class bdQoSProbeInfo>::operator []", 0x70u, "bdArray<T>::operator[], rangecheck failed");
      bdBufferParams::arrayStart(&params, 0xDu, qosResponse->m_data[_R15].m_numReplies, 4u);
      v15 = 0;
      bdHandleAssert(v12 < qosResponse->m_size, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<class bdQoSProbeInfo>::operator []", 0x70u, "bdArray<T>::operator[], rangecheck failed");
      if ( qosResponse->m_data[_R15].m_numReplies )
      {
        do
        {
          bdHandleAssert(v12 < qosResponse->m_size, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<class bdQoSProbeInfo>::operator []", 0x70u, "bdArray<T>::operator[], rangecheck failed");
          _R14 = 70i64 * v12 + v15;
          _R12 = qosResponse->m_data;
          LOBYTE(v18) = 1;
          if ( params.ensureCapacity(&params, 4u, v18) )
          {
            if ( params.m_isWritingArray )
              --params.m_arrayWriteCount;
            if ( !params.m_serializeOk )
              goto LABEL_22;
            __asm { vmovss  xmm1, dword ptr [r12+r14*4+0C8h]; f }
            v20 = bdByteBuffer::writeFloat32(params.m_buffer.m_ptr, *(const float *)&_XMM1);
            params.m_serializeOk = 1;
            if ( !v20 )
LABEL_22:
              params.m_serializeOk = 0;
          }
          ++v15;
          bdHandleAssert(v12 < qosResponse->m_size, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<class bdQoSProbeInfo>::operator []", 0x70u, "bdArray<T>::operator[], rangecheck failed");
        }
        while ( v15 < qosResponse->m_data[_R15].m_numReplies );
      }
      bdBufferParams::arrayEnd(&params);
      bdHandleAssert(v12 < qosResponse->m_size, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<class bdQoSProbeInfo>::operator []", 0x70u, "bdArray<T>::operator[], rangecheck failed");
      if ( qosResponse->m_data[_R15].m_data )
      {
        bdHandleAssert(v12 < qosResponse->m_size, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<class bdQoSProbeInfo>::operator []", 0x70u, "bdArray<T>::operator[], rangecheck failed");
        m_dataSize = qosResponse->m_data[_R15].m_dataSize;
        bdHandleAssert(v12 < qosResponse->m_size, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<class bdQoSProbeInfo>::operator []", 0x70u, "bdArray<T>::operator[], rangecheck failed");
        v22 = m_dataSize;
        m_data = qosResponse->m_data[_R15].m_data;
      }
      else
      {
        v22 = 0;
        m_data = buffer;
      }
      bdBufferParams::addBlob(&params, m_data, v22);
      bdHandleAssert(v12 < qosResponse->m_size, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<class bdQoSProbeInfo>::operator []", 0x70u, "bdArray<T>::operator[], rangecheck failed");
      v24 = qosResponse->m_data;
      LOBYTE(v25) = 1;
      if ( params.ensureCapacity(&params, 1u, v25) )
      {
        if ( params.m_isWritingArray )
          --params.m_arrayWriteCount;
        if ( !params.m_serializeOk || (v26 = bdByteBuffer::writeBool(params.m_buffer.m_ptr, v24[_R15].m_disabled), params.m_serializeOk = 1, !v26) )
          params.m_serializeOk = 0;
      }
      bdHandleAssert(v12 < qosResponse->m_size, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<class bdQoSProbeInfo>::operator []", 0x70u, "bdArray<T>::operator[], rangecheck failed");
      v27 = qosResponse->m_data;
      LOBYTE(v28) = 1;
      if ( params.ensureCapacity(&params, 4u, v28) )
      {
        if ( params.m_isWritingArray )
          --params.m_arrayWriteCount;
        if ( !params.m_serializeOk || (v29 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, v27[_R15].m_bandwidthDown), params.m_serializeOk = 1, !v29) )
          params.m_serializeOk = 0;
      }
      bdHandleAssert(v12 < qosResponse->m_size, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<class bdQoSProbeInfo>::operator []", 0x70u, "bdArray<T>::operator[], rangecheck failed");
      v30 = qosResponse->m_data;
      LOBYTE(v31) = 1;
      if ( params.ensureCapacity(&params, 4u, v31) )
      {
        if ( params.m_isWritingArray )
          --params.m_arrayWriteCount;
        if ( !params.m_serializeOk || (v32 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, v30[_R15].m_bandwidthUp), params.m_serializeOk = 1, !v32) )
          params.m_serializeOk = 0;
      }
      bdHandleAssert(v12 < qosResponse->m_size, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<class bdQoSProbeInfo>::operator []", 0x70u, "bdArray<T>::operator[], rangecheck failed");
      _RBX = qosResponse->m_data;
      LOBYTE(v34) = 1;
      if ( params.ensureCapacity(&params, 4u, v34) )
      {
        if ( params.m_isWritingArray )
          --params.m_arrayWriteCount;
        if ( !params.m_serializeOk )
          goto LABEL_50;
        __asm { vmovss  xmm1, dword ptr [rbx+r15+0C0h]; f }
        v36 = bdByteBuffer::writeFloat32(params.m_buffer.m_ptr, *(const float *)&_XMM1);
        params.m_serializeOk = 1;
        if ( !v36 )
LABEL_50:
          params.m_serializeOk = 0;
      }
      ++v12;
      v13 = qosResponse->m_size;
    }
    while ( v12 < v13 );
    v6 = v41;
  }
  bdAsyncMatchMaking::startTaskWithResult(v42, v6, &params);
  bdTaskParams::~bdTaskParams(&params);
  return v6;
}

/*
==============
bdAsyncMatchMaking::readyUpTournament
==============
*/
bdReference<bdRemoteTask> *bdAsyncMatchMaking::readyUpTournament(bdAsyncMatchMaking *this, bdReference<bdRemoteTask> *result, unsigned __int64 tournamentID)
{
  _BOOL8 v6; 
  _BOOL8 v7; 
  bool v8; 
  bool v9; 
  bdTaskParams params; 

  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&params, 0x91u, 0x13u, 0x400u, 0xFFFFu);
  LOBYTE(v6) = 1;
  if ( params.ensureCapacity(&params, 8u, v6) )
  {
    if ( params.m_isWritingArray )
      --params.m_arrayWriteCount;
    if ( !params.m_serializeOk || (v8 = bdByteBuffer::writeUInt64(params.m_buffer.m_ptr, tournamentID), params.m_serializeOk = 1, !v8) )
      params.m_serializeOk = 0;
  }
  LOBYTE(v7) = 1;
  if ( params.ensureCapacity(&params, 8u, v7) )
  {
    if ( params.m_isWritingArray )
      --params.m_arrayWriteCount;
    if ( !params.m_serializeOk || (v9 = bdByteBuffer::writeUInt64(params.m_buffer.m_ptr, 0xFFFFFFFFui64), params.m_serializeOk = 1, !v9) )
      params.m_serializeOk = 0;
  }
  bdAsyncMatchMaking::startTaskWithResult(this, result, &params);
  bdTaskParams::~bdTaskParams(&params);
  return result;
}

/*
==============
bdAsyncMatchMaking::registerForTournament
==============
*/
bdReference<bdRemoteTask> *bdAsyncMatchMaking::registerForTournament(bdAsyncMatchMaking *this, bdReference<bdRemoteTask> *result, const char *tournamentRegistration, const unsigned int bufferSize, bdStringResult *registrationResult)
{
  bdTaskParams v10; 

  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&v10, 0x91u, 0x1Du, 0x400u, 0xFFFFu);
  bdBufferParams::addString(&v10, tournamentRegistration, bufferSize);
  if ( *(_OWORD *)&v10.m_taskResults == 0i64 )
  {
    v10.m_taskResults = registrationResult;
    v10.m_maxResults = 1;
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
    v10.m_serializeOk = 0;
  }
  bdAsyncMatchMaking::startTaskWithResult(this, result, &v10);
  bdTaskParams::~bdTaskParams(&v10);
  return result;
}

/*
==============
bdAsyncMatchMaking::rejoinTournament
==============
*/
bdReference<bdRemoteTask> *bdAsyncMatchMaking::rejoinTournament(bdAsyncMatchMaking *this, bdReference<bdRemoteTask> *result, unsigned __int64 tournamentID)
{
  _BOOL8 v6; 
  bool v7; 
  bdTaskParams params; 

  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&params, 0x91u, 0x1Cu, 0x400u, 0xFFFFu);
  LOBYTE(v6) = 1;
  if ( params.ensureCapacity(&params, 8u, v6) )
  {
    if ( params.m_isWritingArray )
      --params.m_arrayWriteCount;
    if ( !params.m_serializeOk || (v7 = bdByteBuffer::writeUInt64(params.m_buffer.m_ptr, tournamentID), params.m_serializeOk = 1, !v7) )
      params.m_serializeOk = 0;
  }
  bdAsyncMatchMaking::startTaskWithResult(this, result, &params);
  bdTaskParams::~bdTaskParams(&params);
  return result;
}

/*
==============
bdAsyncMatchMaking::setPlayerInfo
==============
*/
bdReference<bdRemoteTask> *bdAsyncMatchMaking::setPlayerInfo(bdAsyncMatchMaking *this, bdReference<bdRemoteTask> *result, const char *playerInfo, unsigned int length)
{
  bdTaskParams v9; 

  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&v9, 0x91u, 2u, 0x400u, 0xFFFFu);
  bdBufferParams::addString(&v9, playerInfo, length);
  bdAsyncMatchMaking::startTaskWithResult(this, result, &v9);
  bdTaskParams::~bdTaskParams(&v9);
  return result;
}

/*
==============
bdAsyncMatchMaking::shutdownMatchMaking
==============
*/
bdReference<bdRemoteTask> *bdAsyncMatchMaking::shutdownMatchMaking(bdAsyncMatchMaking *this, bdReference<bdRemoteTask> *result, unsigned __int64 mmID, bdBoolResult *success)
{
  _BOOL8 v8; 
  bool v9; 
  bdTaskParams params; 

  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&params, 0x91u, 9u, 0x400u, 0xFFFFu);
  LOBYTE(v8) = 1;
  if ( params.ensureCapacity(&params, 8u, v8) )
  {
    if ( params.m_isWritingArray )
      --params.m_arrayWriteCount;
    if ( !params.m_serializeOk || (v9 = bdByteBuffer::writeUInt64(params.m_buffer.m_ptr, mmID), params.m_serializeOk = 1, !v9) )
      params.m_serializeOk = 0;
  }
  if ( params.m_taskResults || params.m_taskResultRefs )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
    params.m_serializeOk = 0;
  }
  else
  {
    params.m_taskResults = success;
    params.m_maxResults = 1;
  }
  bdAsyncMatchMaking::startTaskWithResult(this, result, &params);
  bdTaskParams::~bdTaskParams(&params);
  return result;
}

/*
==============
bdAsyncMatchMaking::startMatchMaking
==============
*/
bdReference<bdRemoteTask> *bdAsyncMatchMaking::startMatchMaking(bdAsyncMatchMaking *this, bdReference<bdRemoteTask> *result, unsigned __int64 mmID, const char *startMatchMakingParams, unsigned int paramsLength, bdStringResult *matchMakingSearchStatus)
{
  _BOOL8 v10; 
  bool v11; 
  bdTaskParams v13; 

  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&v13, 0x91u, 7u, 0x400u, 0xFFFFu);
  LOBYTE(v10) = 1;
  if ( v13.ensureCapacity(&v13, 8u, v10) )
  {
    if ( v13.m_isWritingArray )
      --v13.m_arrayWriteCount;
    if ( !v13.m_serializeOk || (v11 = bdByteBuffer::writeUInt64(v13.m_buffer.m_ptr, mmID), v13.m_serializeOk = 1, !v11) )
      v13.m_serializeOk = 0;
  }
  bdBufferParams::addString(&v13, startMatchMakingParams, paramsLength);
  if ( v13.m_taskResults || v13.m_taskResultRefs )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
    v13.m_serializeOk = 0;
  }
  else
  {
    v13.m_taskResults = matchMakingSearchStatus;
    v13.m_maxResults = 1;
  }
  bdAsyncMatchMaking::startTaskWithResult(this, result, &v13);
  bdTaskParams::~bdTaskParams(&v13);
  return result;
}

/*
==============
bdAsyncMatchMaking::startSearch
==============
*/
bdReference<bdRemoteTask> *bdAsyncMatchMaking::startSearch(bdAsyncMatchMaking *this, bdReference<bdRemoteTask> *result, const char *params, unsigned int paramsLength, bdStringResult *matchMakingSearchStatus)
{
  bdTaskParams v10; 

  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&v10, 0x91u, 0x12u, 0x400u, 0xFFFFu);
  bdBufferParams::addString(&v10, params, paramsLength);
  if ( *(_OWORD *)&v10.m_taskResults == 0i64 )
  {
    v10.m_taskResults = matchMakingSearchStatus;
    v10.m_maxResults = 1;
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
    v10.m_serializeOk = 0;
  }
  bdAsyncMatchMaking::startTaskWithResult(this, result, &v10);
  bdTaskParams::~bdTaskParams(&v10);
  return result;
}

/*
==============
bdAsyncMatchMaking::startTaskWithResult
==============
*/
void bdAsyncMatchMaking::startTaskWithResult(bdAsyncMatchMaking *this, bdReference<bdRemoteTask> *task, bdTaskParams *params)
{
  bdByteBuffer *m_ptr; 
  __int64 v7; 
  int m_arrayWriteCount; 
  int m_taskID; 

  if ( (params->m_isWritingArray || params->m_arrayWriteCount) && (m_arrayWriteCount = params->m_arrayWriteCount, bdLogMessage(BD_LOG_WARNING, "warn/", "bdLobbyCommon/bdBufferParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdbufferparams.inl", "bdBufferParams::serializedOk", 0xECu, "Did you forget to call arrayEnd() at the correct time (remaining = %u)?", m_arrayWriteCount), params->m_isWritingArray) || params->m_arrayWriteCount || !params->m_serializeOk || (m_ptr = params->m_buffer.m_ptr) == NULL || !m_ptr->m_data )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdAsyncMatchMaking", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmatchmaking\\bdasyncmatchmaking.cpp", "bdAsyncMatchMaking::startTaskWithResult", 0x1C5u, "Failed to serialize task buffer");
  }
  else if ( bdRemoteTaskManager::startTask(this->m_remoteTaskManager, task, params) )
  {
    m_taskID = params->m_taskID;
    LODWORD(v7) = params->m_serviceID;
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdAsyncMatchMaking", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmatchmaking\\bdasyncmatchmaking.cpp", "bdAsyncMatchMaking::startTaskWithResult", 0x1C0u, "Failed to write param into buffer for Service [%d] and task [%d]", v7, m_taskID);
  }
}

/*
==============
bdAsyncMatchMaking::submitTournamentMatchResults
==============
*/
bdReference<bdRemoteTask> *bdAsyncMatchMaking::submitTournamentMatchResults(bdAsyncMatchMaking *this, bdReference<bdRemoteTask> *result, const char *tournamentMatchResults, unsigned int matchResultsLength)
{
  bdTaskParams v9; 

  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&v9, 0x91u, 0x15u, 0x400u, 0xFFFFu);
  bdBufferParams::addString(&v9, tournamentMatchResults, matchResultsLength);
  bdAsyncMatchMaking::startTaskWithResult(this, result, &v9);
  bdTaskParams::~bdTaskParams(&v9);
  return result;
}

/*
==============
bdAsyncMatchMaking::syncLobbyDocuments
==============
*/
bdReference<bdRemoteTask> *bdAsyncMatchMaking::syncLobbyDocuments(bdAsyncMatchMaking *this, bdReference<bdRemoteTask> *result, unsigned __int64 lobbyID, bdBoolResult *success, unsigned __int64 updateID, const char *lobbyHostDoc, unsigned int lobbyHostDocLength)
{
  _BOOL8 v11; 
  _BOOL8 v12; 
  bool v13; 
  bool v14; 
  unsigned __int64 v15; 
  const char *v16; 
  bdTaskParams params; 

  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&params, 0x91u, 0xFu, 0x400u, 0xFFFFu);
  LOBYTE(v11) = 1;
  if ( params.ensureCapacity(&params, 8u, v11) )
  {
    if ( params.m_isWritingArray )
      --params.m_arrayWriteCount;
    if ( !params.m_serializeOk || (v13 = bdByteBuffer::writeUInt64(params.m_buffer.m_ptr, lobbyID), params.m_serializeOk = 1, !v13) )
      params.m_serializeOk = 0;
  }
  LOBYTE(v12) = 1;
  if ( params.ensureCapacity(&params, 8u, v12) )
  {
    if ( params.m_isWritingArray )
      --params.m_arrayWriteCount;
    if ( !params.m_serializeOk || (v14 = bdByteBuffer::writeUInt64(params.m_buffer.m_ptr, updateID), params.m_serializeOk = 1, !v14) )
      params.m_serializeOk = 0;
  }
  if ( lobbyHostDocLength )
  {
    v15 = lobbyHostDocLength;
    v16 = lobbyHostDoc;
  }
  else
  {
    v15 = 1i64;
    v16 = (char *)&queryFormat.fmt + 3;
  }
  bdBufferParams::addString(&params, v16, v15);
  if ( params.m_taskResults || params.m_taskResultRefs )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
    params.m_serializeOk = 0;
  }
  else
  {
    params.m_taskResults = success;
    params.m_maxResults = 1;
  }
  bdAsyncMatchMaking::startTaskWithResult(this, result, &params);
  bdTaskParams::~bdTaskParams(&params);
  return result;
}

