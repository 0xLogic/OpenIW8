/*
==============
bdStats::startTaskStatReadByEntityIDV2IncludedColumns
==============
*/

bdReference<bdRemoteTask> *__fastcall bdStats::startTaskStatReadByEntityIDV2IncludedColumns(bdStats *this, bdReference<bdRemoteTask> *result, const unsigned int leaderBoardID, const unsigned __int64 *entityIDs, const unsigned int numEntityIDs, bdStatsInfo *stats, bdStatsInfo **statPtrs, const char **includedColumns, const unsigned int numIncludedColumns)
{
  return ?startTaskStatReadByEntityIDV2IncludedColumns@bdStats@@AEAA?AV?$bdReference@VbdRemoteTask@@@@IQEB_KIQEAVbdStatsInfo@@QEAPEAV3@QEAPEBDI@Z(this, result, leaderBoardID, entityIDs, numEntityIDs, stats, statPtrs, includedColumns, numIncludedColumns);
}

/*
==============
bdStats::readStatsByRankIncludedColumns
==============
*/

bdReference<bdRemoteTask> *__fastcall bdStats::readStatsByRankIncludedColumns(bdStats *this, bdReference<bdRemoteTask> *result, const unsigned int leaderBoardID, const unsigned __int64 firstRank, bdStatsInfo *stats, const unsigned int maxResults, const char **includedColumns, const unsigned int numIncludedColumns)
{
  return ?readStatsByRankIncludedColumns@bdStats@@QEAA?AV?$bdReference@VbdRemoteTask@@@@I_KQEAVbdStatsInfo@@IQEAPEBDI@Z(this, result, leaderBoardID, firstRank, stats, maxResults, includedColumns, numIncludedColumns);
}

/*
==============
bdStats::writeServerValidatedStats
==============
*/

bdReference<bdRemoteTask> *__fastcall bdStats::writeServerValidatedStats(bdStats *this, bdReference<bdRemoteTask> *result, const unsigned __int8 *tokenData, unsigned int tokenSize)
{
  return ?writeServerValidatedStats@bdStats@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBEI@Z(this, result, tokenData, tokenSize);
}

/*
==============
bdStats::readStatsByRating
==============
*/

bdReference<bdRemoteTask> *__fastcall bdStats::readStatsByRating(bdStats *this, bdReference<bdRemoteTask> *result, const unsigned int leaderBoardID, const __int64 rating, bdStatsInfo *stats, const unsigned int maxResults, const char **excludedColumns, const unsigned int numExclColumns)
{
  return ?readStatsByRating@bdStats@@QEAA?AV?$bdReference@VbdRemoteTask@@@@I_JQEAVbdStatsInfo@@IQEAPEBDI@Z(this, result, leaderBoardID, rating, stats, maxResults, excludedColumns, numExclColumns);
}

/*
==============
bdStats::readExternalTitleStats
==============
*/

bdReference<bdRemoteTask> *__fastcall bdStats::readExternalTitleStats(bdStats *this, bdReference<bdRemoteTask> *result, const unsigned int externalTitleID, const unsigned int leaderboardID, bdStatsInfo *stats)
{
  return ?readExternalTitleStats@bdStats@@QEAA?AV?$bdReference@VbdRemoteTask@@@@IIPEAVbdStatsInfo@@@Z(this, result, externalTitleID, leaderboardID, stats);
}

/*
==============
bdStats::readStatsByRank
==============
*/

bdReference<bdRemoteTask> *__fastcall bdStats::readStatsByRank(bdStats *this, bdReference<bdRemoteTask> *result, const unsigned int leaderBoardID, const unsigned __int64 firstRank, bdStatsInfo **stats, const unsigned int maxResults, const char **excludedColumns, const unsigned int numExclColumns)
{
  return ?readStatsByRank@bdStats@@QEAA?AV?$bdReference@VbdRemoteTask@@@@I_KQEAPEAVbdStatsInfo@@IQEAPEBDI@Z(this, result, leaderBoardID, firstRank, stats, maxResults, excludedColumns, numExclColumns);
}

/*
==============
bdStats::readStatsByRating
==============
*/

bdReference<bdRemoteTask> *__fastcall bdStats::readStatsByRating(bdStats *this, bdReference<bdRemoteTask> *result, const unsigned int leaderBoardID, const __int64 rating, bdStatsInfo **stats, const unsigned int maxResults, const char **excludedColumns, const unsigned int numExclColumns)
{
  return ?readStatsByRating@bdStats@@QEAA?AV?$bdReference@VbdRemoteTask@@@@I_JQEAPEAVbdStatsInfo@@IQEAPEBDI@Z(this, result, leaderBoardID, rating, stats, maxResults, excludedColumns, numExclColumns);
}

/*
==============
bdStats::readStatsByMultipleRanks
==============
*/

bdReference<bdRemoteTask> *__fastcall bdStats::readStatsByMultipleRanks(bdStats *this, bdReference<bdRemoteTask> *result, const unsigned int leaderBoardID, const unsigned __int64 *const ranks, const unsigned int numRanks, bdStatsInfo **stats)
{
  return ?readStatsByMultipleRanks@bdStats@@QEAA?AV?$bdReference@VbdRemoteTask@@@@IQEB_KIQEAPEAVbdStatsInfo@@@Z(this, result, leaderBoardID, ranks, numRanks, stats);
}

/*
==============
bdStats::writeStats
==============
*/

bdReference<bdRemoteTask> *__fastcall bdStats::writeStats(bdStats *this, bdReference<bdRemoteTask> *result, bdStatsInfo **stats, const unsigned int numStats)
{
  return ?writeStats@bdStats@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEAPEAVbdStatsInfo@@I@Z(this, result, stats, numStats);
}

/*
==============
bdStats::readStatsByLeaderboardIDsAndEntityIDs
==============
*/

bdReference<bdRemoteTask> *__fastcall bdStats::readStatsByLeaderboardIDsAndEntityIDs(bdStats *this, bdReference<bdRemoteTask> *result, const unsigned __int64 *entityIDs, const unsigned int *leaderboardIDs, const unsigned __int64 *subLeaderboardIDs, bdStatsInfoEx **statsResults, const unsigned int numLeaderboards, const unsigned int numEntityIDs)
{
  return ?readStatsByLeaderboardIDsAndEntityIDs@bdStats@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEB_KQEBI0QEAPEAVbdStatsInfoEx@@II@Z(this, result, entityIDs, leaderboardIDs, subLeaderboardIDs, statsResults, numLeaderboards, numEntityIDs);
}

/*
==============
bdStats::readStatsByRank
==============
*/

bdReference<bdRemoteTask> *__fastcall bdStats::readStatsByRank(bdStats *this, bdReference<bdRemoteTask> *result, const unsigned int leaderBoardID, const unsigned __int64 firstRank, bdStatsInfo *stats, const unsigned int maxResults, const char **excludedColumns, const unsigned int numExclColumns)
{
  return ?readStatsByRank@bdStats@@QEAA?AV?$bdReference@VbdRemoteTask@@@@I_KQEAVbdStatsInfo@@IQEAPEBDI@Z(this, result, leaderBoardID, firstRank, stats, maxResults, excludedColumns, numExclColumns);
}

/*
==============
bdStats::startTaskStatReadByEntityIDV2
==============
*/

bdReference<bdRemoteTask> *__fastcall bdStats::startTaskStatReadByEntityIDV2(bdStats *this, bdReference<bdRemoteTask> *result, const unsigned int leaderBoardID, const unsigned __int64 *entityIDs, const unsigned int numEntityIDs, bdStatsInfo *stats, bdStatsInfo **statPtrs, const char **excludedColumns, const unsigned int numExclColumns)
{
  return ?startTaskStatReadByEntityIDV2@bdStats@@AEAA?AV?$bdReference@VbdRemoteTask@@@@IQEB_KIQEAVbdStatsInfo@@QEAPEAV3@QEAPEBDI@Z(this, result, leaderBoardID, entityIDs, numEntityIDs, stats, statPtrs, excludedColumns, numExclColumns);
}

/*
==============
bdStats::readStatsByRankIncludedColumns
==============
*/

bdReference<bdRemoteTask> *__fastcall bdStats::readStatsByRankIncludedColumns(bdStats *this, bdReference<bdRemoteTask> *result, const unsigned int leaderBoardID, const unsigned __int64 firstRank, bdStatsInfo **stats, const unsigned int maxResults, const char **includedColumns, const unsigned int numIncludedColumns)
{
  return ?readStatsByRankIncludedColumns@bdStats@@QEAA?AV?$bdReference@VbdRemoteTask@@@@I_KQEAPEAVbdStatsInfo@@IQEAPEBDI@Z(this, result, leaderBoardID, firstRank, stats, maxResults, includedColumns, numIncludedColumns);
}

/*
==============
bdStats::startTaskStatReadLeaderboardByRankIncludedColumns
==============
*/

bdReference<bdRemoteTask> *__fastcall bdStats::startTaskStatReadLeaderboardByRankIncludedColumns(bdStats *this, bdReference<bdRemoteTask> *result, const unsigned int leaderBoardID, const unsigned __int64 firstRank, bdStatsInfo *stats, bdStatsInfo **statPtrs, const unsigned int maxResults, const char **includedColumns, const unsigned int numIncludedColumns)
{
  return ?startTaskStatReadLeaderboardByRankIncludedColumns@bdStats@@AEAA?AV?$bdReference@VbdRemoteTask@@@@I_KQEAVbdStatsInfo@@QEAPEAV3@IQEAPEBDI@Z(this, result, leaderBoardID, firstRank, stats, statPtrs, maxResults, includedColumns, numIncludedColumns);
}

/*
==============
bdStats::readStatsByLeaderboardIDsAndEntityIDs
==============
*/

bdReference<bdRemoteTask> *__fastcall bdStats::readStatsByLeaderboardIDsAndEntityIDs(bdStats *this, bdReference<bdRemoteTask> *result, const unsigned __int64 *entityIDs, const unsigned int *leaderboardIDs, bdStatsInfoEx **statsResults, const unsigned int numLeaderBoards, const unsigned int numEntityIDs)
{
  return ?readStatsByLeaderboardIDsAndEntityIDs@bdStats@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEB_KQEBIQEAPEAVbdStatsInfoEx@@II@Z(this, result, entityIDs, leaderboardIDs, statsResults, numLeaderBoards, numEntityIDs);
}

/*
==============
bdStats::readStatsByMultipleRatings
==============
*/

bdReference<bdRemoteTask> *__fastcall bdStats::readStatsByMultipleRatings(bdStats *this, bdReference<bdRemoteTask> *result, const unsigned int leaderBoardID, const __int64 *const ratings, bdStatsInfo *stats, const unsigned int numRatings, const char **excludedColumns, const unsigned int numExclColumns)
{
  return ?readStatsByMultipleRatings@bdStats@@QEAA?AV?$bdReference@VbdRemoteTask@@@@IQEB_JQEAVbdStatsInfo@@IQEAPEBDI@Z(this, result, leaderBoardID, ratings, stats, numRatings, excludedColumns, numExclColumns);
}

/*
==============
bdStats::readExternalTitleNamedStats
==============
*/

bdReference<bdRemoteTask> *__fastcall bdStats::readExternalTitleNamedStats(bdStats *this, bdReference<bdRemoteTask> *result, const unsigned int externalTitleID, const char *parentKey, const char **statsToRead, const unsigned int numStatsToRead, bdTaskResult *stats)
{
  return ?readExternalTitleNamedStats@bdStats@@QEAA?AV?$bdReference@VbdRemoteTask@@@@IPEBDQEAPEBDIPEAVbdTaskResult@@@Z(this, result, externalTitleID, parentKey, statsToRead, numStatsToRead, stats);
}

/*
==============
bdStats::readStatsByMultipleRatings
==============
*/

bdReference<bdRemoteTask> *__fastcall bdStats::readStatsByMultipleRatings(bdStats *this, bdReference<bdRemoteTask> *result, const unsigned int leaderboardID, const __int64 *const ratings, bdStatsInfo **stats, const unsigned int numRatings, const char **excludedColumns, const unsigned int numExclColumns)
{
  return ?readStatsByMultipleRatings@bdStats@@QEAA?AV?$bdReference@VbdRemoteTask@@@@IQEB_JQEAPEAVbdStatsInfo@@IQEAPEBDI@Z(this, result, leaderboardID, ratings, stats, numRatings, excludedColumns, numExclColumns);
}

/*
==============
bdStats::bdStats
==============
*/

void __fastcall bdStats::bdStats(bdStats *this, bdRemoteTaskManager *const remoteTaskManager)
{
  ??0bdStats@@IEAA@QEAVbdRemoteTaskManager@@@Z(this, remoteTaskManager);
}

/*
==============
bdStats::writeMultipleServerValidatedStats
==============
*/

bdReference<bdRemoteTask> *__fastcall bdStats::writeMultipleServerValidatedStats(bdStats *this, bdReference<bdRemoteTask> *result, bdValidationTokenResult *tokens, const unsigned int numTokens)
{
  return ?writeMultipleServerValidatedStats@bdStats@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEAVbdValidationTokenResult@@I@Z(this, result, tokens, numTokens);
}

/*
==============
bdStats::writeServerValidatedStats
==============
*/

bdReference<bdRemoteTask> *__fastcall bdStats::writeServerValidatedStats(bdStats *this, bdReference<bdRemoteTask> *result, const bdValidationTokenResult *token)
{
  return ?writeServerValidatedStats@bdStats@@QEAA?AV?$bdReference@VbdRemoteTask@@@@AEBVbdValidationTokenResult@@@Z(this, result, token);
}

/*
==============
bdStats::readStatsByLeaderboardIDs
==============
*/

bdReference<bdRemoteTask> *__fastcall bdStats::readStatsByLeaderboardIDs(bdStats *this, bdReference<bdRemoteTask> *result, const unsigned __int64 entityID, const unsigned int *leaderboardIDs, bdStatsInfoEx **statsResults, const unsigned int numLeaderBoards)
{
  return ?readStatsByLeaderboardIDs@bdStats@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KQEBIQEAPEAVbdStatsInfoEx@@I@Z(this, result, entityID, leaderboardIDs, statsResults, numLeaderBoards);
}

/*
==============
bdStats::startTaskStatReadLeaderboardByRank
==============
*/

bdReference<bdRemoteTask> *__fastcall bdStats::startTaskStatReadLeaderboardByRank(bdStats *this, bdReference<bdRemoteTask> *result, const unsigned int leaderBoardID, const unsigned __int64 firstRank, bdStatsInfo *stats, bdStatsInfo **statPtrs, const unsigned int maxResults, const char **excludedColumns, const unsigned int numExclColumns)
{
  return ?startTaskStatReadLeaderboardByRank@bdStats@@AEAA?AV?$bdReference@VbdRemoteTask@@@@I_KQEAVbdStatsInfo@@QEAPEAV3@IQEAPEBDI@Z(this, result, leaderBoardID, firstRank, stats, statPtrs, maxResults, excludedColumns, numExclColumns);
}

/*
==============
bdStats::readStatsByMultipleRanks
==============
*/

bdReference<bdRemoteTask> *__fastcall bdStats::readStatsByMultipleRanks(bdStats *this, bdReference<bdRemoteTask> *result, const unsigned int leaderBoardID, const unsigned __int64 *const ranks, const unsigned int numRanks, bdStatsInfo *stats)
{
  return ?readStatsByMultipleRanks@bdStats@@QEAA?AV?$bdReference@VbdRemoteTask@@@@IQEB_KIQEAVbdStatsInfo@@@Z(this, result, leaderBoardID, ranks, numRanks, stats);
}

/*
==============
bdStats::readStatsByEntityIDIncludedColumns
==============
*/

bdReference<bdRemoteTask> *__fastcall bdStats::readStatsByEntityIDIncludedColumns(bdStats *this, bdReference<bdRemoteTask> *result, const unsigned int leaderBoardID, const unsigned __int64 *entityIDs, const unsigned int numEntityIDs, bdStatsInfo *stats, const char **includedColumns, const unsigned int numIncludedColumns)
{
  return ?readStatsByEntityIDIncludedColumns@bdStats@@QEAA?AV?$bdReference@VbdRemoteTask@@@@IQEB_KIQEAVbdStatsInfo@@QEAPEBDI@Z(this, result, leaderBoardID, entityIDs, numEntityIDs, stats, includedColumns, numIncludedColumns);
}

/*
==============
bdStats::readStatsByEntityID
==============
*/

bdReference<bdRemoteTask> *__fastcall bdStats::readStatsByEntityID(bdStats *this, bdReference<bdRemoteTask> *result, const unsigned int leaderBoardID, const unsigned __int64 *entityIDs, const unsigned int numEntityIDs, bdStatsInfo **stats, const char **excludedColumns, const unsigned int numExclColumns)
{
  return ?readStatsByEntityID@bdStats@@QEAA?AV?$bdReference@VbdRemoteTask@@@@IQEB_KIQEAPEAVbdStatsInfo@@QEAPEBDI@Z(this, result, leaderBoardID, entityIDs, numEntityIDs, stats, excludedColumns, numExclColumns);
}

/*
==============
bdStats::deleteCSFileStats
==============
*/

bdReference<bdRemoteTask> *__fastcall bdStats::deleteCSFileStats(bdStats *this, bdReference<bdRemoteTask> *result, const unsigned __int64 fileID, const unsigned int leaderBoardID)
{
  return ?deleteCSFileStats@bdStats@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KI@Z(this, result, fileID, leaderBoardID);
}

/*
==============
bdStats::~bdStats
==============
*/

void __fastcall bdStats::~bdStats(bdStats *this)
{
  ??1bdStats@@QEAA@XZ(this);
}

/*
==============
bdStats::readStatsByEntityIDIncludedColumns
==============
*/

bdReference<bdRemoteTask> *__fastcall bdStats::readStatsByEntityIDIncludedColumns(bdStats *this, bdReference<bdRemoteTask> *result, const unsigned int leaderBoardID, const unsigned __int64 *entityIDs, const unsigned int numEntityIDs, bdStatsInfo **stats, const char **includedColumns, const unsigned int numIncludedColumns)
{
  return ?readStatsByEntityIDIncludedColumns@bdStats@@QEAA?AV?$bdReference@VbdRemoteTask@@@@IQEB_KIQEAPEAVbdStatsInfo@@QEAPEBDI@Z(this, result, leaderBoardID, entityIDs, numEntityIDs, stats, includedColumns, numIncludedColumns);
}

/*
==============
bdStats::readStatsByPivot
==============
*/

bdReference<bdRemoteTask> *__fastcall bdStats::readStatsByPivot(bdStats *this, bdReference<bdRemoteTask> *result, const unsigned int leaderBoardID, const unsigned __int64 entityID, bdStatsInfo **stats, const unsigned int maxResults, const char **excludedColumns, const unsigned int numExclColumns)
{
  return ?readStatsByPivot@bdStats@@QEAA?AV?$bdReference@VbdRemoteTask@@@@I_KQEAPEAVbdStatsInfo@@IQEAPEBDI@Z(this, result, leaderBoardID, entityID, stats, maxResults, excludedColumns, numExclColumns);
}

/*
==============
bdStats::deleteStats
==============
*/

bdReference<bdRemoteTask> *__fastcall bdStats::deleteStats(bdStats *this, bdReference<bdRemoteTask> *result, const unsigned int leaderBoardID)
{
  return ?deleteStats@bdStats@@QEAA?AV?$bdReference@VbdRemoteTask@@@@I@Z(this, result, leaderBoardID);
}

/*
==============
bdStats::readStatsByEntityID
==============
*/

bdReference<bdRemoteTask> *__fastcall bdStats::readStatsByEntityID(bdStats *this, bdReference<bdRemoteTask> *result, const unsigned int leaderBoardID, const unsigned __int64 *entityIDs, const unsigned int numEntityIDs, bdStatsInfo *stats, const char **excludedColumns, const unsigned int numExclColumns)
{
  return ?readStatsByEntityID@bdStats@@QEAA?AV?$bdReference@VbdRemoteTask@@@@IQEB_KIQEAVbdStatsInfo@@QEAPEBDI@Z(this, result, leaderBoardID, entityIDs, numEntityIDs, stats, excludedColumns, numExclColumns);
}

/*
==============
bdStats::readStatsByPivot
==============
*/

bdReference<bdRemoteTask> *__fastcall bdStats::readStatsByPivot(bdStats *this, bdReference<bdRemoteTask> *result, const unsigned int leaderBoardID, const unsigned __int64 entityID, bdStatsInfo *stats, const unsigned int maxResults, const char **excludedColumns, const unsigned int numExclColumns)
{
  return ?readStatsByPivot@bdStats@@QEAA?AV?$bdReference@VbdRemoteTask@@@@I_KQEAVbdStatsInfo@@IQEAPEBDI@Z(this, result, leaderBoardID, entityID, stats, maxResults, excludedColumns, numExclColumns);
}

/*
==============
bdStats::bdStats
==============
*/
void bdStats::bdStats(bdStats *this, bdRemoteTaskManager *const remoteTaskManager)
{
  this->m_remoteTaskManager = remoteTaskManager;
}

/*
==============
bdStats::~bdStats
==============
*/
void bdStats::~bdStats(bdStats *this)
{
  this->m_remoteTaskManager = NULL;
}

/*
==============
bdStats::deleteCSFileStats
==============
*/
bdReference<bdRemoteTask> *bdStats::deleteCSFileStats(bdStats *this, bdReference<bdRemoteTask> *result, const unsigned __int64 fileID, const unsigned int leaderBoardID)
{
  _BOOL8 v8; 
  _BOOL8 v9; 
  bool v10; 
  bool v11; 
  bdLobbyErrorCode started; 
  bdLobbyErrorCode v14; 
  bdTaskParams taskParams; 

  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&taskParams, 0x5Cu, 1u, 0x400u, 0xFFFFu);
  LOBYTE(v8) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 8u, v8) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v10 = bdByteBuffer::writeUInt64(taskParams.m_buffer.m_ptr, fileID), taskParams.m_serializeOk = 1, !v10) )
      taskParams.m_serializeOk = 0;
  }
  LOBYTE(v9) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 4u, v9) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v11 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, leaderBoardID), taskParams.m_serializeOk = 1, !v11) )
      taskParams.m_serializeOk = 0;
  }
  started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
  if ( started )
  {
    v14 = started;
    bdLogMessage(BD_LOG_WARNING, "warn/", "stats", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdstats\\bdstats.cpp", "bdStats::deleteCSFileStats", 0x2FCu, "Failed to start task: Error %i", v14);
  }
  bdTaskParams::~bdTaskParams(&taskParams);
  return result;
}

/*
==============
bdStats::deleteStats
==============
*/
bdReference<bdRemoteTask> *bdStats::deleteStats(bdStats *this, bdReference<bdRemoteTask> *result, const unsigned int leaderBoardID)
{
  _BOOL8 v6; 
  bool v7; 
  bdLobbyErrorCode started; 
  bdLobbyErrorCode v10; 
  bdTaskParams taskParams; 

  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&taskParams, 4u, 2u, 0x400u, 0xFFFFu);
  LOBYTE(v6) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 4u, v6) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v7 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, leaderBoardID), taskParams.m_serializeOk = 1, !v7) )
      taskParams.m_serializeOk = 0;
  }
  started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
  if ( started )
  {
    v10 = started;
    bdLogMessage(BD_LOG_WARNING, "warn/", "stats", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdstats\\bdstats.cpp", "bdStats::deleteStats", 0x2E6u, "Failed to start task: Error %i", v10);
  }
  bdTaskParams::~bdTaskParams(&taskParams);
  return result;
}

/*
==============
bdStats::readExternalTitleNamedStats
==============
*/
bdReference<bdRemoteTask> *bdStats::readExternalTitleNamedStats(bdStats *this, bdReference<bdRemoteTask> *result, const unsigned int externalTitleID, const char *parentKey, const char **statsToRead, const unsigned int numStatsToRead, bdTaskResult *stats)
{
  _BOOL8 v11; 
  bool v12; 
  const char **v13; 
  __int64 v14; 
  bdLobbyErrorCode started; 
  bdTaskParams v17; 

  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&v17, 4u, 0xAu, 0x400u, 0xFFFFu);
  LOBYTE(v11) = 1;
  if ( v17.ensureCapacity(&v17, 4u, v11) )
  {
    if ( v17.m_isWritingArray )
      --v17.m_arrayWriteCount;
    if ( !v17.m_serializeOk || (v12 = bdByteBuffer::writeUInt32(v17.m_buffer.m_ptr, externalTitleID), v17.m_serializeOk = 1, !v12) )
      v17.m_serializeOk = 0;
  }
  if ( parentKey )
    bdBufferParams::addString(&v17, parentKey, 0x41ui64);
  if ( numStatsToRead )
  {
    v13 = statsToRead;
    if ( statsToRead )
    {
      v14 = numStatsToRead;
      do
      {
        bdBufferParams::addString(&v17, *v13++, 0x41ui64);
        --v14;
      }
      while ( v14 );
    }
  }
  if ( v17.m_taskResults || v17.m_taskResultRefs )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
    v17.m_serializeOk = 0;
  }
  else
  {
    v17.m_taskResults = stats;
    v17.m_maxResults = 1;
  }
  started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &v17);
  if ( started )
    bdLogMessage(BD_LOG_WARNING, "warn/", "stats", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdstats\\bdstats.cpp", "bdStats::readExternalTitleNamedStats", 0x340u, "Failed to start task: Error %i", started);
  bdTaskParams::~bdTaskParams(&v17);
  return result;
}

/*
==============
bdStats::readExternalTitleStats
==============
*/
bdReference<bdRemoteTask> *bdStats::readExternalTitleStats(bdStats *this, bdReference<bdRemoteTask> *result, const unsigned int externalTitleID, const unsigned int leaderboardID, bdStatsInfo *stats)
{
  _BOOL8 v9; 
  _BOOL8 v10; 
  bool v11; 
  bool v12; 
  bdLobbyErrorCode started; 
  bdTaskParams taskParams; 

  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&taskParams, 4u, 8u, 0x400u, 0xFFFFu);
  LOBYTE(v9) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 4u, v9) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v11 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, externalTitleID), taskParams.m_serializeOk = 1, !v11) )
      taskParams.m_serializeOk = 0;
  }
  LOBYTE(v10) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 4u, v10) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v12 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, leaderboardID), taskParams.m_serializeOk = 1, !v12) )
      taskParams.m_serializeOk = 0;
  }
  if ( taskParams.m_taskResults || taskParams.m_taskResultRefs )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
    taskParams.m_serializeOk = 0;
  }
  else
  {
    taskParams.m_taskResults = stats;
    taskParams.m_maxResults = 1;
  }
  started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
  if ( started )
    bdLogMessage(BD_LOG_WARNING, "warn/", "stats", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdstats\\bdstats.cpp", "bdStats::readExternalTitleStats", 0x318u, "Failed to start task: Error %i", started);
  bdTaskParams::~bdTaskParams(&taskParams);
  return result;
}

/*
==============
bdStats::readStatsByEntityID
==============
*/
bdReference<bdRemoteTask> *bdStats::readStatsByEntityID(bdStats *this, bdReference<bdRemoteTask> *result, const unsigned int leaderBoardID, const unsigned __int64 *entityIDs, const unsigned int numEntityIDs, bdStatsInfo **stats, const char **excludedColumns, const unsigned int numExclColumns)
{
  bdStats::startTaskStatReadByEntityIDV2(this, result, leaderBoardID, entityIDs, numEntityIDs, NULL, stats, excludedColumns, numExclColumns);
  return result;
}

/*
==============
bdStats::readStatsByEntityID
==============
*/
bdReference<bdRemoteTask> *bdStats::readStatsByEntityID(bdStats *this, bdReference<bdRemoteTask> *result, const unsigned int leaderBoardID, const unsigned __int64 *entityIDs, const unsigned int numEntityIDs, bdStatsInfo *stats, const char **excludedColumns, const unsigned int numExclColumns)
{
  bdStats::startTaskStatReadByEntityIDV2(this, result, leaderBoardID, entityIDs, numEntityIDs, stats, NULL, excludedColumns, numExclColumns);
  return result;
}

/*
==============
bdStats::readStatsByEntityIDIncludedColumns
==============
*/
bdReference<bdRemoteTask> *bdStats::readStatsByEntityIDIncludedColumns(bdStats *this, bdReference<bdRemoteTask> *result, const unsigned int leaderBoardID, const unsigned __int64 *entityIDs, const unsigned int numEntityIDs, bdStatsInfo **stats, const char **includedColumns, const unsigned int numIncludedColumns)
{
  bdStats::startTaskStatReadByEntityIDV2IncludedColumns(this, result, leaderBoardID, entityIDs, numEntityIDs, NULL, stats, includedColumns, numIncludedColumns);
  return result;
}

/*
==============
bdStats::readStatsByEntityIDIncludedColumns
==============
*/
bdReference<bdRemoteTask> *bdStats::readStatsByEntityIDIncludedColumns(bdStats *this, bdReference<bdRemoteTask> *result, const unsigned int leaderBoardID, const unsigned __int64 *entityIDs, const unsigned int numEntityIDs, bdStatsInfo *stats, const char **includedColumns, const unsigned int numIncludedColumns)
{
  bdStats::startTaskStatReadByEntityIDV2IncludedColumns(this, result, leaderBoardID, entityIDs, numEntityIDs, stats, NULL, includedColumns, numIncludedColumns);
  return result;
}

/*
==============
bdStats::readStatsByLeaderboardIDs
==============
*/
bdReference<bdRemoteTask> *bdStats::readStatsByLeaderboardIDs(bdStats *this, bdReference<bdRemoteTask> *result, const unsigned __int64 entityID, const unsigned int *leaderboardIDs, bdStatsInfoEx **statsResults, const unsigned int numLeaderBoards)
{
  unsigned __int64 entityIDs; 

  entityIDs = entityID;
  bdLogMessage(BD_LOG_INFO, "info/", "stats", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdstats\\bdstats.cpp", "bdStats::readStatsByLeaderboardIDs", 0x34Bu, "This function is deprecated, use readStatsByLeaderboardIDsAndEntityIDs() instead.");
  bdStats::readStatsByLeaderboardIDsAndEntityIDs(this, result, &entityIDs, leaderboardIDs, statsResults, numLeaderBoards, 1u);
  return result;
}

/*
==============
bdStats::readStatsByLeaderboardIDsAndEntityIDs
==============
*/
bdReference<bdRemoteTask> *bdStats::readStatsByLeaderboardIDsAndEntityIDs(bdStats *this, bdReference<bdRemoteTask> *result, const unsigned __int64 *entityIDs, const unsigned int *leaderboardIDs, const unsigned __int64 *subLeaderboardIDs, bdStatsInfoEx **statsResults, const unsigned int numLeaderboards, const unsigned int numEntityIDs)
{
  unsigned int v10; 
  _BOOL8 v11; 
  _BOOL8 v12; 
  bool v13; 
  __int64 v14; 
  bool v15; 
  _BOOL8 v16; 
  bool v17; 
  unsigned int v18; 
  bdStatsInfoEx **v19; 
  bool v20; 
  _BOOL8 v21; 
  bool v22; 
  __int64 v24; 
  bool v25; 
  bdReference<bdRemoteTask> *v26; 
  bdLobbyErrorCode started; 
  bdTaskParams taskParams; 

  v10 = 0;
  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&taskParams, 0x5Bu, 0xBu, 0x400u, 0xFFFFu);
  LOBYTE(v11) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 4u, v11) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v13 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, numEntityIDs), taskParams.m_serializeOk = 1, !v13) )
      taskParams.m_serializeOk = 0;
  }
  if ( numEntityIDs )
  {
    v14 = numEntityIDs;
    do
    {
      LOBYTE(v12) = 1;
      if ( taskParams.ensureCapacity(&taskParams, 8u, v12) )
      {
        if ( taskParams.m_isWritingArray )
          --taskParams.m_arrayWriteCount;
        if ( !taskParams.m_serializeOk || (v15 = bdByteBuffer::writeUInt64(taskParams.m_buffer.m_ptr, *entityIDs), taskParams.m_serializeOk = 1, !v15) )
          taskParams.m_serializeOk = 0;
      }
      ++entityIDs;
      --v14;
    }
    while ( v14 );
  }
  LOBYTE(v12) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 4u, v12) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v17 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, numLeaderboards), taskParams.m_serializeOk = 1, !v17) )
      taskParams.m_serializeOk = 0;
  }
  v18 = 0;
  if ( numLeaderboards )
  {
    v19 = statsResults;
    while ( 1 )
    {
      LOBYTE(v16) = 1;
      if ( taskParams.ensureCapacity(&taskParams, 4u, v16) )
      {
        if ( taskParams.m_isWritingArray )
          --taskParams.m_arrayWriteCount;
        if ( !taskParams.m_serializeOk || (v20 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, *leaderboardIDs), taskParams.m_serializeOk = 1, !v20) )
          taskParams.m_serializeOk = 0;
      }
      if ( v10 && (*v19)->m_statsInfo->sizeOf((*v19)->m_statsInfo) != v10 )
        break;
      v10 = (*v19)->m_statsInfo->sizeOf((*v19)->m_statsInfo);
      ++v18;
      ++leaderboardIDs;
      ++v19;
      if ( v18 >= numLeaderboards )
        goto LABEL_33;
    }
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "stats", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdstats\\bdstats.cpp", "bdStats::readStatsByLeaderboardIDsAndEntityIDs", 0x3B1u, "Error: StatsInfo objects do not match.");
    bdLogMessage(BD_LOG_WARNING, "warn/", "stats", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdstats\\bdstats.cpp", "bdStats::readStatsByLeaderboardIDsAndEntityIDs", 0x3D6u, "Failed to start task");
    v26 = result;
  }
  else
  {
LABEL_33:
    LOBYTE(v16) = 1;
    if ( taskParams.ensureCapacity(&taskParams, 4u, v16) )
    {
      if ( taskParams.m_isWritingArray )
        --taskParams.m_arrayWriteCount;
      if ( !taskParams.m_serializeOk || (v22 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, numLeaderboards), taskParams.m_serializeOk = 1, !v22) )
        taskParams.m_serializeOk = 0;
    }
    if ( numLeaderboards )
    {
      v24 = numLeaderboards;
      do
      {
        LOBYTE(v21) = 1;
        if ( taskParams.ensureCapacity(&taskParams, 8u, v21) )
        {
          if ( taskParams.m_isWritingArray )
            --taskParams.m_arrayWriteCount;
          if ( !taskParams.m_serializeOk || (v25 = bdByteBuffer::writeUInt64(taskParams.m_buffer.m_ptr, *subLeaderboardIDs), taskParams.m_serializeOk = 1, !v25) )
            taskParams.m_serializeOk = 0;
        }
        ++subLeaderboardIDs;
        --v24;
      }
      while ( v24 );
    }
    if ( taskParams.m_taskResults || taskParams.m_taskResultRefs )
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResultRefs", 0x35u, "bindResultRefs() failed; only specify task result(s) destination ONCE per task.");
      taskParams.m_serializeOk = 0;
    }
    else
    {
      taskParams.m_taskResultRefs = statsResults;
      taskParams.m_maxResults = numEntityIDs * numLeaderboards;
    }
    v26 = result;
    started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
    if ( started )
      bdLogMessage(BD_LOG_WARNING, "warn/", "stats", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdstats\\bdstats.cpp", "bdStats::readStatsByLeaderboardIDsAndEntityIDs", 0x3D1u, "Failed to start task: Error %i", started);
  }
  bdTaskParams::~bdTaskParams(&taskParams);
  return v26;
}

/*
==============
bdStats::readStatsByLeaderboardIDsAndEntityIDs
==============
*/
bdReference<bdRemoteTask> *bdStats::readStatsByLeaderboardIDsAndEntityIDs(bdStats *this, bdReference<bdRemoteTask> *result, const unsigned __int64 *entityIDs, const unsigned int *leaderboardIDs, bdStatsInfoEx **statsResults, const unsigned int numLeaderBoards, const unsigned int numEntityIDs)
{
  unsigned int v9; 
  _BOOL8 v10; 
  _BOOL8 v11; 
  bool v12; 
  __int64 v13; 
  bool v14; 
  _BOOL8 v15; 
  bool v16; 
  unsigned int v17; 
  bdStatsInfoEx **v18; 
  bool v19; 
  bdReference<bdRemoteTask> *v20; 
  bdLobbyErrorCode started; 
  bdTaskParams taskParams; 

  v9 = 0;
  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&taskParams, 4u, 0xBu, 0x400u, 0xFFFFu);
  LOBYTE(v10) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 4u, v10) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v12 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, numEntityIDs), taskParams.m_serializeOk = 1, !v12) )
      taskParams.m_serializeOk = 0;
  }
  if ( numEntityIDs )
  {
    v13 = numEntityIDs;
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
  LOBYTE(v11) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 4u, v11) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v16 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, numLeaderBoards), taskParams.m_serializeOk = 1, !v16) )
      taskParams.m_serializeOk = 0;
  }
  v17 = 0;
  if ( numLeaderBoards )
  {
    v18 = statsResults;
    while ( 1 )
    {
      LOBYTE(v15) = 1;
      if ( taskParams.ensureCapacity(&taskParams, 4u, v15) )
      {
        if ( taskParams.m_isWritingArray )
          --taskParams.m_arrayWriteCount;
        if ( !taskParams.m_serializeOk || (v19 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, *leaderboardIDs), taskParams.m_serializeOk = 1, !v19) )
          taskParams.m_serializeOk = 0;
      }
      if ( v9 && (*v18)->m_statsInfo->sizeOf((*v18)->m_statsInfo) != v9 )
        break;
      v9 = (*v18)->m_statsInfo->sizeOf((*v18)->m_statsInfo);
      ++v17;
      ++leaderboardIDs;
      ++v18;
      if ( v17 >= numLeaderBoards )
        goto LABEL_33;
    }
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "stats", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdstats\\bdstats.cpp", "bdStats::readStatsByLeaderboardIDsAndEntityIDs", 0x36Fu, "Error: StatsInfo objects do not match.");
    bdLogMessage(BD_LOG_WARNING, "warn/", "stats", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdstats\\bdstats.cpp", "bdStats::readStatsByLeaderboardIDsAndEntityIDs", 0x38Au, "Failed to start task");
    v20 = result;
  }
  else
  {
LABEL_33:
    if ( taskParams.m_taskResults || taskParams.m_taskResultRefs )
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResultRefs", 0x35u, "bindResultRefs() failed; only specify task result(s) destination ONCE per task.");
      taskParams.m_serializeOk = 0;
    }
    else
    {
      taskParams.m_taskResultRefs = statsResults;
      taskParams.m_maxResults = numEntityIDs * numLeaderBoards;
    }
    v20 = result;
    started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
    if ( started )
      bdLogMessage(BD_LOG_WARNING, "warn/", "stats", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdstats\\bdstats.cpp", "bdStats::readStatsByLeaderboardIDsAndEntityIDs", 0x385u, "Failed to start task: Error %i", started);
  }
  bdTaskParams::~bdTaskParams(&taskParams);
  return v20;
}

/*
==============
bdStats::readStatsByMultipleRanks
==============
*/
bdReference<bdRemoteTask> *bdStats::readStatsByMultipleRanks(bdStats *this, bdReference<bdRemoteTask> *result, const unsigned int leaderBoardID, const unsigned __int64 *const ranks, const unsigned int numRanks, bdStatsInfo **stats)
{
  _BOOL8 v10; 
  _BOOL8 v11; 
  bool v12; 
  __int64 v13; 
  bool v14; 
  bdLobbyErrorCode started; 
  bdTaskParams taskParams; 

  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&taskParams, 4u, 7u, 0x400u, 0xFFFFu);
  LOBYTE(v10) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 4u, v10) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v12 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, leaderBoardID), taskParams.m_serializeOk = 1, !v12) )
      taskParams.m_serializeOk = 0;
  }
  if ( numRanks )
  {
    v13 = numRanks;
    do
    {
      LOBYTE(v11) = 1;
      if ( taskParams.ensureCapacity(&taskParams, 8u, v11) )
      {
        if ( taskParams.m_isWritingArray )
          --taskParams.m_arrayWriteCount;
        if ( !taskParams.m_serializeOk || (v14 = bdByteBuffer::writeUInt64(taskParams.m_buffer.m_ptr, *ranks), taskParams.m_serializeOk = 1, !v14) )
          taskParams.m_serializeOk = 0;
      }
      ++ranks;
      --v13;
    }
    while ( v13 );
  }
  if ( taskParams.m_taskResults || taskParams.m_taskResultRefs )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResultRefs", 0x35u, "bindResultRefs() failed; only specify task result(s) destination ONCE per task.");
    taskParams.m_serializeOk = 0;
  }
  else
  {
    taskParams.m_taskResultRefs = stats;
    taskParams.m_maxResults = numRanks;
  }
  started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
  if ( started )
    bdLogMessage(BD_LOG_WARNING, "warn/", "stats", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdstats\\bdstats.cpp", "bdStats::readStatsByMultipleRanks", 0x143u, "Failed to start task: Error %i", started);
  bdTaskParams::~bdTaskParams(&taskParams);
  return result;
}

/*
==============
bdStats::readStatsByMultipleRanks
==============
*/
bdReference<bdRemoteTask> *bdStats::readStatsByMultipleRanks(bdStats *this, bdReference<bdRemoteTask> *result, const unsigned int leaderBoardID, const unsigned __int64 *const ranks, const unsigned int numRanks, bdStatsInfo *stats)
{
  _BOOL8 v10; 
  _BOOL8 v11; 
  bool v12; 
  __int64 v13; 
  bool v14; 
  bdLobbyErrorCode started; 
  bdTaskParams taskParams; 

  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&taskParams, 4u, 7u, 0x400u, 0xFFFFu);
  LOBYTE(v10) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 4u, v10) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v12 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, leaderBoardID), taskParams.m_serializeOk = 1, !v12) )
      taskParams.m_serializeOk = 0;
  }
  if ( numRanks )
  {
    v13 = numRanks;
    do
    {
      LOBYTE(v11) = 1;
      if ( taskParams.ensureCapacity(&taskParams, 8u, v11) )
      {
        if ( taskParams.m_isWritingArray )
          --taskParams.m_arrayWriteCount;
        if ( !taskParams.m_serializeOk || (v14 = bdByteBuffer::writeUInt64(taskParams.m_buffer.m_ptr, *ranks), taskParams.m_serializeOk = 1, !v14) )
          taskParams.m_serializeOk = 0;
      }
      ++ranks;
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
    taskParams.m_taskResults = stats;
    taskParams.m_maxResults = numRanks;
  }
  started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
  if ( started )
    bdLogMessage(BD_LOG_WARNING, "warn/", "stats", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdstats\\bdstats.cpp", "bdStats::readStatsByMultipleRanks", 0x124u, "Failed to start task: Error %i", started);
  bdTaskParams::~bdTaskParams(&taskParams);
  return result;
}

/*
==============
bdStats::readStatsByMultipleRatings
==============
*/
bdReference<bdRemoteTask> *bdStats::readStatsByMultipleRatings(bdStats *this, bdReference<bdRemoteTask> *result, const unsigned int leaderboardID, const __int64 *const ratings, bdStatsInfo **stats, const unsigned int numRatings, const char **excludedColumns, const unsigned int numExclColumns)
{
  _BOOL8 v12; 
  _BOOL8 v13; 
  bool v14; 
  _BOOL8 v15; 
  bool v16; 
  __int64 v17; 
  bool v18; 
  __int64 v19; 
  bool v20; 
  bdLobbyErrorCode started; 
  bdTaskParams taskParams; 

  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&taskParams, 4u, 0xCu, 0x400u, 0xFFFFu);
  LOBYTE(v12) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 4u, v12) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v14 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, leaderboardID), taskParams.m_serializeOk = 1, !v14) )
      taskParams.m_serializeOk = 0;
  }
  LOBYTE(v13) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 4u, v13) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v16 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, numRatings), taskParams.m_serializeOk = 1, !v16) )
      taskParams.m_serializeOk = 0;
  }
  if ( numRatings )
  {
    v17 = numRatings;
    do
    {
      LOBYTE(v15) = 1;
      if ( taskParams.ensureCapacity(&taskParams, 8u, v15) )
      {
        if ( taskParams.m_isWritingArray )
          --taskParams.m_arrayWriteCount;
        if ( !taskParams.m_serializeOk || (v18 = bdByteBuffer::writeInt64(taskParams.m_buffer.m_ptr, *ratings), taskParams.m_serializeOk = 1, !v18) )
          taskParams.m_serializeOk = 0;
      }
      ++ratings;
      --v17;
    }
    while ( v17 );
  }
  LOBYTE(v15) = 1;
  v19 = numExclColumns;
  if ( taskParams.ensureCapacity(&taskParams, 4u, v15) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v20 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, numExclColumns), taskParams.m_serializeOk = 1, !v20) )
      taskParams.m_serializeOk = 0;
  }
  if ( numExclColumns )
  {
    do
    {
      bdBufferParams::addString(&taskParams, *excludedColumns++, 0x41ui64);
      --v19;
    }
    while ( v19 );
  }
  if ( taskParams.m_taskResults || taskParams.m_taskResultRefs )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResultRefs", 0x35u, "bindResultRefs() failed; only specify task result(s) destination ONCE per task.");
    taskParams.m_serializeOk = 0;
  }
  else
  {
    taskParams.m_taskResultRefs = stats;
    taskParams.m_maxResults = numRatings;
  }
  started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
  if ( started )
    bdLogMessage(BD_LOG_WARNING, "warn/", "stats", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdstats\\bdstats.cpp", "bdStats::readStatsByMultipleRatings", 0x227u, "Failed to start task: Error %i", started);
  bdTaskParams::~bdTaskParams(&taskParams);
  return result;
}

/*
==============
bdStats::readStatsByMultipleRatings
==============
*/
bdReference<bdRemoteTask> *bdStats::readStatsByMultipleRatings(bdStats *this, bdReference<bdRemoteTask> *result, const unsigned int leaderBoardID, const __int64 *const ratings, bdStatsInfo *stats, const unsigned int numRatings, const char **excludedColumns, const unsigned int numExclColumns)
{
  _BOOL8 v12; 
  _BOOL8 v13; 
  bool v14; 
  _BOOL8 v15; 
  bool v16; 
  __int64 v17; 
  bool v18; 
  __int64 v19; 
  bool v20; 
  bdLobbyErrorCode started; 
  bdTaskParams taskParams; 

  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&taskParams, 4u, 0xCu, 0x400u, 0xFFFFu);
  LOBYTE(v12) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 4u, v12) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v14 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, leaderBoardID), taskParams.m_serializeOk = 1, !v14) )
      taskParams.m_serializeOk = 0;
  }
  LOBYTE(v13) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 4u, v13) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v16 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, numRatings), taskParams.m_serializeOk = 1, !v16) )
      taskParams.m_serializeOk = 0;
  }
  if ( numRatings )
  {
    v17 = numRatings;
    do
    {
      LOBYTE(v15) = 1;
      if ( taskParams.ensureCapacity(&taskParams, 8u, v15) )
      {
        if ( taskParams.m_isWritingArray )
          --taskParams.m_arrayWriteCount;
        if ( !taskParams.m_serializeOk || (v18 = bdByteBuffer::writeInt64(taskParams.m_buffer.m_ptr, *ratings), taskParams.m_serializeOk = 1, !v18) )
          taskParams.m_serializeOk = 0;
      }
      ++ratings;
      --v17;
    }
    while ( v17 );
  }
  LOBYTE(v15) = 1;
  v19 = numExclColumns;
  if ( taskParams.ensureCapacity(&taskParams, 4u, v15) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v20 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, numExclColumns), taskParams.m_serializeOk = 1, !v20) )
      taskParams.m_serializeOk = 0;
  }
  if ( numExclColumns )
  {
    do
    {
      bdBufferParams::addString(&taskParams, *excludedColumns++, 0x41ui64);
      --v19;
    }
    while ( v19 );
  }
  if ( taskParams.m_taskResults || taskParams.m_taskResultRefs )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
    taskParams.m_serializeOk = 0;
  }
  else
  {
    taskParams.m_taskResults = stats;
    taskParams.m_maxResults = numRatings;
  }
  started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
  if ( started )
    bdLogMessage(BD_LOG_WARNING, "warn/", "stats", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdstats\\bdstats.cpp", "bdStats::readStatsByMultipleRatings", 0x1FFu, "Failed to start task: Error %i", started);
  bdTaskParams::~bdTaskParams(&taskParams);
  return result;
}

/*
==============
bdStats::readStatsByPivot
==============
*/
bdReference<bdRemoteTask> *bdStats::readStatsByPivot(bdStats *this, bdReference<bdRemoteTask> *result, const unsigned int leaderBoardID, const unsigned __int64 entityID, bdStatsInfo **stats, const unsigned int maxResults, const char **excludedColumns, const unsigned int numExclColumns)
{
  _BOOL8 v12; 
  _BOOL8 v13; 
  bool v14; 
  _BOOL8 v15; 
  bool v16; 
  _BOOL8 v17; 
  bool v18; 
  __int64 v19; 
  bool v20; 
  bdLobbyErrorCode started; 
  bdTaskParams taskParams; 

  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&taskParams, 4u, 5u, 0x400u, 0xFFFFu);
  LOBYTE(v12) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 4u, v12) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v14 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, leaderBoardID), taskParams.m_serializeOk = 1, !v14) )
      taskParams.m_serializeOk = 0;
  }
  LOBYTE(v13) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 8u, v13) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v16 = bdByteBuffer::writeUInt64(taskParams.m_buffer.m_ptr, entityID), taskParams.m_serializeOk = 1, !v16) )
      taskParams.m_serializeOk = 0;
  }
  LOBYTE(v15) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 4u, v15) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v18 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, maxResults), taskParams.m_serializeOk = 1, !v18) )
      taskParams.m_serializeOk = 0;
  }
  LOBYTE(v17) = 1;
  v19 = numExclColumns;
  if ( taskParams.ensureCapacity(&taskParams, 4u, v17) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v20 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, numExclColumns), taskParams.m_serializeOk = 1, !v20) )
      taskParams.m_serializeOk = 0;
  }
  if ( numExclColumns )
  {
    do
    {
      bdBufferParams::addString(&taskParams, *excludedColumns++, 0x41ui64);
      --v19;
    }
    while ( v19 );
  }
  if ( taskParams.m_taskResults || taskParams.m_taskResultRefs )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResultRefs", 0x35u, "bindResultRefs() failed; only specify task result(s) destination ONCE per task.");
    taskParams.m_serializeOk = 0;
  }
  else
  {
    taskParams.m_taskResultRefs = stats;
    taskParams.m_maxResults = maxResults;
  }
  started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
  if ( started )
    bdLogMessage(BD_LOG_WARNING, "warn/", "stats", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdstats\\bdstats.cpp", "bdStats::readStatsByPivot", 0x18Du, "Failed to start task: Error %i", started);
  bdTaskParams::~bdTaskParams(&taskParams);
  return result;
}

/*
==============
bdStats::readStatsByPivot
==============
*/
bdReference<bdRemoteTask> *bdStats::readStatsByPivot(bdStats *this, bdReference<bdRemoteTask> *result, const unsigned int leaderBoardID, const unsigned __int64 entityID, bdStatsInfo *stats, const unsigned int maxResults, const char **excludedColumns, const unsigned int numExclColumns)
{
  _BOOL8 v12; 
  _BOOL8 v13; 
  bool v14; 
  _BOOL8 v15; 
  bool v16; 
  _BOOL8 v17; 
  bool v18; 
  __int64 v19; 
  bool v20; 
  bdLobbyErrorCode started; 
  bdTaskParams taskParams; 

  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&taskParams, 4u, 5u, 0x400u, 0xFFFFu);
  LOBYTE(v12) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 4u, v12) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v14 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, leaderBoardID), taskParams.m_serializeOk = 1, !v14) )
      taskParams.m_serializeOk = 0;
  }
  LOBYTE(v13) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 8u, v13) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v16 = bdByteBuffer::writeUInt64(taskParams.m_buffer.m_ptr, entityID), taskParams.m_serializeOk = 1, !v16) )
      taskParams.m_serializeOk = 0;
  }
  LOBYTE(v15) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 4u, v15) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v18 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, maxResults), taskParams.m_serializeOk = 1, !v18) )
      taskParams.m_serializeOk = 0;
  }
  LOBYTE(v17) = 1;
  v19 = numExclColumns;
  if ( taskParams.ensureCapacity(&taskParams, 4u, v17) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v20 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, numExclColumns), taskParams.m_serializeOk = 1, !v20) )
      taskParams.m_serializeOk = 0;
  }
  if ( numExclColumns )
  {
    do
    {
      bdBufferParams::addString(&taskParams, *excludedColumns++, 0x41ui64);
      --v19;
    }
    while ( v19 );
  }
  if ( taskParams.m_taskResults || taskParams.m_taskResultRefs )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
    taskParams.m_serializeOk = 0;
  }
  else
  {
    taskParams.m_taskResults = stats;
    taskParams.m_maxResults = maxResults;
  }
  started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
  if ( started )
    bdLogMessage(BD_LOG_WARNING, "warn/", "stats", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdstats\\bdstats.cpp", "bdStats::readStatsByPivot", 0x168u, "Failed to start task: Error %i", started);
  bdTaskParams::~bdTaskParams(&taskParams);
  return result;
}

/*
==============
bdStats::readStatsByRank
==============
*/
bdReference<bdRemoteTask> *bdStats::readStatsByRank(bdStats *this, bdReference<bdRemoteTask> *result, const unsigned int leaderBoardID, const unsigned __int64 firstRank, bdStatsInfo **stats, const unsigned int maxResults, const char **excludedColumns, const unsigned int numExclColumns)
{
  bdStats::startTaskStatReadLeaderboardByRank(this, result, leaderBoardID, firstRank, NULL, stats, maxResults, excludedColumns, numExclColumns);
  return result;
}

/*
==============
bdStats::readStatsByRank
==============
*/
bdReference<bdRemoteTask> *bdStats::readStatsByRank(bdStats *this, bdReference<bdRemoteTask> *result, const unsigned int leaderBoardID, const unsigned __int64 firstRank, bdStatsInfo *stats, const unsigned int maxResults, const char **excludedColumns, const unsigned int numExclColumns)
{
  bdStats::startTaskStatReadLeaderboardByRank(this, result, leaderBoardID, firstRank, stats, NULL, maxResults, excludedColumns, numExclColumns);
  return result;
}

/*
==============
bdStats::readStatsByRankIncludedColumns
==============
*/
bdReference<bdRemoteTask> *bdStats::readStatsByRankIncludedColumns(bdStats *this, bdReference<bdRemoteTask> *result, const unsigned int leaderBoardID, const unsigned __int64 firstRank, bdStatsInfo **stats, const unsigned int maxResults, const char **includedColumns, const unsigned int numIncludedColumns)
{
  bdStats::startTaskStatReadLeaderboardByRankIncludedColumns(this, result, leaderBoardID, firstRank, NULL, stats, maxResults, includedColumns, numIncludedColumns);
  return result;
}

/*
==============
bdStats::readStatsByRankIncludedColumns
==============
*/
bdReference<bdRemoteTask> *bdStats::readStatsByRankIncludedColumns(bdStats *this, bdReference<bdRemoteTask> *result, const unsigned int leaderBoardID, const unsigned __int64 firstRank, bdStatsInfo *stats, const unsigned int maxResults, const char **includedColumns, const unsigned int numIncludedColumns)
{
  bdStats::startTaskStatReadLeaderboardByRankIncludedColumns(this, result, leaderBoardID, firstRank, stats, NULL, maxResults, includedColumns, numIncludedColumns);
  return result;
}

/*
==============
bdStats::readStatsByRating
==============
*/
bdReference<bdRemoteTask> *bdStats::readStatsByRating(bdStats *this, bdReference<bdRemoteTask> *result, const unsigned int leaderBoardID, const __int64 rating, bdStatsInfo **stats, const unsigned int maxResults, const char **excludedColumns, const unsigned int numExclColumns)
{
  _BOOL8 v12; 
  _BOOL8 v13; 
  bool v14; 
  _BOOL8 v15; 
  bool v16; 
  _BOOL8 v17; 
  bool v18; 
  __int64 v19; 
  bool v20; 
  bdLobbyErrorCode started; 
  bdTaskParams taskParams; 

  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&taskParams, 4u, 6u, 0x400u, 0xFFFFu);
  LOBYTE(v12) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 4u, v12) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v14 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, leaderBoardID), taskParams.m_serializeOk = 1, !v14) )
      taskParams.m_serializeOk = 0;
  }
  LOBYTE(v13) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 8u, v13) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v16 = bdByteBuffer::writeInt64(taskParams.m_buffer.m_ptr, rating), taskParams.m_serializeOk = 1, !v16) )
      taskParams.m_serializeOk = 0;
  }
  LOBYTE(v15) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 4u, v15) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v18 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, maxResults), taskParams.m_serializeOk = 1, !v18) )
      taskParams.m_serializeOk = 0;
  }
  LOBYTE(v17) = 1;
  v19 = numExclColumns;
  if ( taskParams.ensureCapacity(&taskParams, 4u, v17) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v20 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, numExclColumns), taskParams.m_serializeOk = 1, !v20) )
      taskParams.m_serializeOk = 0;
  }
  if ( numExclColumns )
  {
    do
    {
      bdBufferParams::addString(&taskParams, *excludedColumns++, 0x41ui64);
      --v19;
    }
    while ( v19 );
  }
  if ( taskParams.m_taskResults || taskParams.m_taskResultRefs )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResultRefs", 0x35u, "bindResultRefs() failed; only specify task result(s) destination ONCE per task.");
    taskParams.m_serializeOk = 0;
  }
  else
  {
    taskParams.m_taskResultRefs = stats;
    taskParams.m_maxResults = maxResults;
  }
  started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
  if ( started )
    bdLogMessage(BD_LOG_WARNING, "warn/", "stats", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdstats\\bdstats.cpp", "bdStats::readStatsByRating", 0x1D7u, "Failed to start task: Error %i", started);
  bdTaskParams::~bdTaskParams(&taskParams);
  return result;
}

/*
==============
bdStats::readStatsByRating
==============
*/
bdReference<bdRemoteTask> *bdStats::readStatsByRating(bdStats *this, bdReference<bdRemoteTask> *result, const unsigned int leaderBoardID, const __int64 rating, bdStatsInfo *stats, const unsigned int maxResults, const char **excludedColumns, const unsigned int numExclColumns)
{
  _BOOL8 v12; 
  _BOOL8 v13; 
  bool v14; 
  _BOOL8 v15; 
  bool v16; 
  _BOOL8 v17; 
  bool v18; 
  __int64 v19; 
  bool v20; 
  bdLobbyErrorCode started; 
  bdTaskParams taskParams; 

  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&taskParams, 4u, 6u, 0x400u, 0xFFFFu);
  LOBYTE(v12) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 4u, v12) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v14 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, leaderBoardID), taskParams.m_serializeOk = 1, !v14) )
      taskParams.m_serializeOk = 0;
  }
  LOBYTE(v13) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 8u, v13) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v16 = bdByteBuffer::writeInt64(taskParams.m_buffer.m_ptr, rating), taskParams.m_serializeOk = 1, !v16) )
      taskParams.m_serializeOk = 0;
  }
  LOBYTE(v15) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 4u, v15) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v18 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, maxResults), taskParams.m_serializeOk = 1, !v18) )
      taskParams.m_serializeOk = 0;
  }
  LOBYTE(v17) = 1;
  v19 = numExclColumns;
  if ( taskParams.ensureCapacity(&taskParams, 4u, v17) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v20 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, numExclColumns), taskParams.m_serializeOk = 1, !v20) )
      taskParams.m_serializeOk = 0;
  }
  if ( numExclColumns )
  {
    do
    {
      bdBufferParams::addString(&taskParams, *excludedColumns++, 0x41ui64);
      --v19;
    }
    while ( v19 );
  }
  if ( taskParams.m_taskResults || taskParams.m_taskResultRefs )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
    taskParams.m_serializeOk = 0;
  }
  else
  {
    taskParams.m_taskResults = stats;
    taskParams.m_maxResults = maxResults;
  }
  started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
  if ( started )
    bdLogMessage(BD_LOG_WARNING, "warn/", "stats", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdstats\\bdstats.cpp", "bdStats::readStatsByRating", 0x1B2u, "Failed to start task: Error %i", started);
  bdTaskParams::~bdTaskParams(&taskParams);
  return result;
}

/*
==============
bdStats::startTaskStatReadByEntityIDV2
==============
*/
bdReference<bdRemoteTask> *bdStats::startTaskStatReadByEntityIDV2(bdStats *this, bdReference<bdRemoteTask> *result, const unsigned int leaderBoardID, const unsigned __int64 *entityIDs, const unsigned int numEntityIDs, bdStatsInfo *stats, bdStatsInfo **statPtrs, const char **excludedColumns, const unsigned int numExclColumns)
{
  _BOOL8 v13; 
  _BOOL8 v14; 
  bool v15; 
  _BOOL8 v16; 
  bool v17; 
  __int64 v18; 
  bool v19; 
  __int64 v20; 
  bool v21; 
  bdLobbyErrorCode started; 
  bdTaskParams taskParams; 

  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&taskParams, 4u, 0xDu, 0x400u, 0xFFFFu);
  LOBYTE(v13) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 4u, v13) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v15 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, leaderBoardID), taskParams.m_serializeOk = 1, !v15) )
      taskParams.m_serializeOk = 0;
  }
  LOBYTE(v14) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 4u, v14) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v17 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, numEntityIDs), taskParams.m_serializeOk = 1, !v17) )
      taskParams.m_serializeOk = 0;
  }
  if ( numEntityIDs )
  {
    v18 = numEntityIDs;
    do
    {
      LOBYTE(v16) = 1;
      if ( taskParams.ensureCapacity(&taskParams, 8u, v16) )
      {
        if ( taskParams.m_isWritingArray )
          --taskParams.m_arrayWriteCount;
        if ( !taskParams.m_serializeOk || (v19 = bdByteBuffer::writeUInt64(taskParams.m_buffer.m_ptr, *entityIDs), taskParams.m_serializeOk = 1, !v19) )
          taskParams.m_serializeOk = 0;
      }
      ++entityIDs;
      --v18;
    }
    while ( v18 );
  }
  LOBYTE(v16) = 1;
  v20 = numExclColumns;
  if ( taskParams.ensureCapacity(&taskParams, 4u, v16) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v21 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, numExclColumns), taskParams.m_serializeOk = 1, !v21) )
      taskParams.m_serializeOk = 0;
  }
  if ( numExclColumns )
  {
    do
    {
      bdBufferParams::addString(&taskParams, *excludedColumns++, 0x41ui64);
      --v20;
    }
    while ( v20 );
  }
  if ( stats )
  {
    bdHandleAssert(statPtrs == NULL, "statPtrs == BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdstats\\bdstats.cpp", "bdStats::startTaskStatReadByEntityIDV2", 0x26Bu, "Invalid params (duplicate result bindings)");
    if ( *(_OWORD *)&taskParams.m_taskResults == 0i64 )
    {
      taskParams.m_taskResults = stats;
      taskParams.m_maxResults = numEntityIDs;
      goto LABEL_41;
    }
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
LABEL_39:
    taskParams.m_serializeOk = 0;
    goto LABEL_41;
  }
  if ( statPtrs )
  {
    if ( !taskParams.m_taskResults && !taskParams.m_taskResultRefs )
    {
      taskParams.m_taskResultRefs = statPtrs;
      taskParams.m_maxResults = numEntityIDs;
      goto LABEL_41;
    }
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResultRefs", 0x35u, "bindResultRefs() failed; only specify task result(s) destination ONCE per task.");
    goto LABEL_39;
  }
  bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdstats\\bdstats.cpp", "bdStats::startTaskStatReadByEntityIDV2", 0x274u, "Missing params");
LABEL_41:
  started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
  if ( started )
    bdLogMessage(BD_LOG_WARNING, "warn/", "stats", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdstats\\bdstats.cpp", "bdStats::startTaskStatReadByEntityIDV2", 0x27Cu, "Failed to start task: Error %i", started);
  bdTaskParams::~bdTaskParams(&taskParams);
  return result;
}

/*
==============
bdStats::startTaskStatReadByEntityIDV2IncludedColumns
==============
*/
bdReference<bdRemoteTask> *bdStats::startTaskStatReadByEntityIDV2IncludedColumns(bdStats *this, bdReference<bdRemoteTask> *result, const unsigned int leaderBoardID, const unsigned __int64 *entityIDs, const unsigned int numEntityIDs, bdStatsInfo *stats, bdStatsInfo **statPtrs, const char **includedColumns, const unsigned int numIncludedColumns)
{
  _BOOL8 v13; 
  _BOOL8 v14; 
  bool v15; 
  _BOOL8 v16; 
  bool v17; 
  __int64 v18; 
  bool v19; 
  __int64 v20; 
  bool v21; 
  bdLobbyErrorCode started; 
  bdTaskParams taskParams; 

  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&taskParams, 4u, 0x10u, 0x400u, 0xFFFFu);
  LOBYTE(v13) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 4u, v13) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v15 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, leaderBoardID), taskParams.m_serializeOk = 1, !v15) )
      taskParams.m_serializeOk = 0;
  }
  LOBYTE(v14) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 4u, v14) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v17 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, numEntityIDs), taskParams.m_serializeOk = 1, !v17) )
      taskParams.m_serializeOk = 0;
  }
  if ( numEntityIDs )
  {
    v18 = numEntityIDs;
    do
    {
      LOBYTE(v16) = 1;
      if ( taskParams.ensureCapacity(&taskParams, 8u, v16) )
      {
        if ( taskParams.m_isWritingArray )
          --taskParams.m_arrayWriteCount;
        if ( !taskParams.m_serializeOk || (v19 = bdByteBuffer::writeUInt64(taskParams.m_buffer.m_ptr, *entityIDs), taskParams.m_serializeOk = 1, !v19) )
          taskParams.m_serializeOk = 0;
      }
      ++entityIDs;
      --v18;
    }
    while ( v18 );
  }
  LOBYTE(v16) = 1;
  v20 = numIncludedColumns;
  if ( taskParams.ensureCapacity(&taskParams, 4u, v16) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v21 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, numIncludedColumns), taskParams.m_serializeOk = 1, !v21) )
      taskParams.m_serializeOk = 0;
  }
  if ( numIncludedColumns )
  {
    do
    {
      bdBufferParams::addString(&taskParams, *includedColumns++, 0x41ui64);
      --v20;
    }
    while ( v20 );
  }
  if ( stats )
  {
    bdHandleAssert(statPtrs == NULL, "statPtrs == BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdstats\\bdstats.cpp", "bdStats::startTaskStatReadByEntityIDV2IncludedColumns", 0x2C0u, "Invalid params (duplicate result bindings)");
    if ( *(_OWORD *)&taskParams.m_taskResults == 0i64 )
    {
      taskParams.m_taskResults = stats;
      taskParams.m_maxResults = numEntityIDs;
      goto LABEL_41;
    }
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
LABEL_39:
    taskParams.m_serializeOk = 0;
    goto LABEL_41;
  }
  if ( statPtrs )
  {
    if ( !taskParams.m_taskResults && !taskParams.m_taskResultRefs )
    {
      taskParams.m_taskResultRefs = statPtrs;
      taskParams.m_maxResults = numEntityIDs;
      goto LABEL_41;
    }
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResultRefs", 0x35u, "bindResultRefs() failed; only specify task result(s) destination ONCE per task.");
    goto LABEL_39;
  }
  bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdstats\\bdstats.cpp", "bdStats::startTaskStatReadByEntityIDV2IncludedColumns", 0x2C9u, "Missing params");
LABEL_41:
  started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
  if ( started )
    bdLogMessage(BD_LOG_WARNING, "warn/", "stats", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdstats\\bdstats.cpp", "bdStats::startTaskStatReadByEntityIDV2IncludedColumns", 0x2D1u, "Failed to start task: Error %i", started);
  bdTaskParams::~bdTaskParams(&taskParams);
  return result;
}

/*
==============
bdStats::startTaskStatReadLeaderboardByRank
==============
*/
bdReference<bdRemoteTask> *bdStats::startTaskStatReadLeaderboardByRank(bdStats *this, bdReference<bdRemoteTask> *result, const unsigned int leaderBoardID, const unsigned __int64 firstRank, bdStatsInfo *stats, bdStatsInfo **statPtrs, const unsigned int maxResults, const char **excludedColumns, const unsigned int numExclColumns)
{
  _BOOL8 v13; 
  _BOOL8 v14; 
  bool v15; 
  _BOOL8 v16; 
  bool v17; 
  _BOOL8 v18; 
  bool v19; 
  __int64 v20; 
  bool v21; 
  bdLobbyErrorCode started; 
  bdTaskParams taskParams; 

  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&taskParams, 4u, 4u, 0x400u, 0xFFFFu);
  LOBYTE(v13) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 4u, v13) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v15 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, leaderBoardID), taskParams.m_serializeOk = 1, !v15) )
      taskParams.m_serializeOk = 0;
  }
  LOBYTE(v14) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 8u, v14) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v17 = bdByteBuffer::writeUInt64(taskParams.m_buffer.m_ptr, firstRank), taskParams.m_serializeOk = 1, !v17) )
      taskParams.m_serializeOk = 0;
  }
  LOBYTE(v16) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 4u, v16) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v19 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, maxResults), taskParams.m_serializeOk = 1, !v19) )
      taskParams.m_serializeOk = 0;
  }
  LOBYTE(v18) = 1;
  v20 = numExclColumns;
  if ( taskParams.ensureCapacity(&taskParams, 4u, v18) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v21 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, numExclColumns), taskParams.m_serializeOk = 1, !v21) )
      taskParams.m_serializeOk = 0;
  }
  if ( numExclColumns )
  {
    do
    {
      bdBufferParams::addString(&taskParams, *excludedColumns++, 0x41ui64);
      --v20;
    }
    while ( v20 );
  }
  if ( stats )
  {
    bdHandleAssert(statPtrs == NULL, "statPtrs == BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdstats\\bdstats.cpp", "bdStats::startTaskStatReadLeaderboardByRank", 0xA2u, "Invalid params (duplicate result bindings)");
    if ( *(_OWORD *)&taskParams.m_taskResults == 0i64 )
    {
      taskParams.m_taskResults = stats;
      taskParams.m_maxResults = maxResults;
      goto LABEL_38;
    }
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
LABEL_36:
    taskParams.m_serializeOk = 0;
    goto LABEL_38;
  }
  if ( statPtrs )
  {
    if ( !taskParams.m_taskResults && !taskParams.m_taskResultRefs )
    {
      taskParams.m_taskResultRefs = statPtrs;
      taskParams.m_maxResults = maxResults;
      goto LABEL_38;
    }
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResultRefs", 0x35u, "bindResultRefs() failed; only specify task result(s) destination ONCE per task.");
    goto LABEL_36;
  }
  bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdstats\\bdstats.cpp", "bdStats::startTaskStatReadLeaderboardByRank", 0xABu, "Missing params");
LABEL_38:
  started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
  if ( started )
    bdLogMessage(BD_LOG_WARNING, "warn/", "stats", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdstats\\bdstats.cpp", "bdStats::startTaskStatReadLeaderboardByRank", 0xB3u, "Failed to start task: Error %i", started);
  bdTaskParams::~bdTaskParams(&taskParams);
  return result;
}

/*
==============
bdStats::startTaskStatReadLeaderboardByRankIncludedColumns
==============
*/
bdReference<bdRemoteTask> *bdStats::startTaskStatReadLeaderboardByRankIncludedColumns(bdStats *this, bdReference<bdRemoteTask> *result, const unsigned int leaderBoardID, const unsigned __int64 firstRank, bdStatsInfo *stats, bdStatsInfo **statPtrs, const unsigned int maxResults, const char **includedColumns, const unsigned int numIncludedColumns)
{
  _BOOL8 v13; 
  _BOOL8 v14; 
  bool v15; 
  _BOOL8 v16; 
  bool v17; 
  _BOOL8 v18; 
  bool v19; 
  __int64 v20; 
  bool v21; 
  bdLobbyErrorCode started; 
  bdTaskParams taskParams; 

  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&taskParams, 4u, 0x11u, 0x400u, 0xFFFFu);
  LOBYTE(v13) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 4u, v13) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v15 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, leaderBoardID), taskParams.m_serializeOk = 1, !v15) )
      taskParams.m_serializeOk = 0;
  }
  LOBYTE(v14) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 8u, v14) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v17 = bdByteBuffer::writeUInt64(taskParams.m_buffer.m_ptr, firstRank), taskParams.m_serializeOk = 1, !v17) )
      taskParams.m_serializeOk = 0;
  }
  LOBYTE(v16) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 4u, v16) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v19 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, maxResults), taskParams.m_serializeOk = 1, !v19) )
      taskParams.m_serializeOk = 0;
  }
  LOBYTE(v18) = 1;
  v20 = numIncludedColumns;
  if ( taskParams.ensureCapacity(&taskParams, 4u, v18) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v21 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, numIncludedColumns), taskParams.m_serializeOk = 1, !v21) )
      taskParams.m_serializeOk = 0;
  }
  if ( numIncludedColumns )
  {
    do
    {
      bdBufferParams::addString(&taskParams, *includedColumns++, 0x41ui64);
      --v20;
    }
    while ( v20 );
  }
  if ( stats )
  {
    bdHandleAssert(statPtrs == NULL, "statPtrs == BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdstats\\bdstats.cpp", "bdStats::startTaskStatReadLeaderboardByRankIncludedColumns", 0xF4u, "Invalid params (duplicate result bindings)");
    if ( *(_OWORD *)&taskParams.m_taskResults == 0i64 )
    {
      taskParams.m_taskResults = stats;
      taskParams.m_maxResults = maxResults;
      goto LABEL_38;
    }
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
LABEL_36:
    taskParams.m_serializeOk = 0;
    goto LABEL_38;
  }
  if ( statPtrs )
  {
    if ( !taskParams.m_taskResults && !taskParams.m_taskResultRefs )
    {
      taskParams.m_taskResultRefs = statPtrs;
      taskParams.m_maxResults = maxResults;
      goto LABEL_38;
    }
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResultRefs", 0x35u, "bindResultRefs() failed; only specify task result(s) destination ONCE per task.");
    goto LABEL_36;
  }
  bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdstats\\bdstats.cpp", "bdStats::startTaskStatReadLeaderboardByRankIncludedColumns", 0xFDu, "Missing params");
LABEL_38:
  started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
  if ( started )
    bdLogMessage(BD_LOG_WARNING, "warn/", "stats", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdstats\\bdstats.cpp", "bdStats::startTaskStatReadLeaderboardByRankIncludedColumns", 0x105u, "Failed to start task: Error %i", started);
  bdTaskParams::~bdTaskParams(&taskParams);
  return result;
}

/*
==============
bdStats::writeMultipleServerValidatedStats
==============
*/
bdReference<bdRemoteTask> *bdStats::writeMultipleServerValidatedStats(bdStats *this, bdReference<bdRemoteTask> *result, bdValidationTokenResult *tokens, const unsigned int numTokens)
{
  __int64 v4; 
  _BOOL8 v8; 
  bool v9; 
  __int64 v10; 
  unsigned int ValidationTokenSize; 
  const unsigned __int8 *ValidationToken; 
  bdLobbyErrorCode started; 
  bdLobbyErrorCode v15; 
  bdTaskParams v16; 

  v4 = numTokens;
  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&v16, 4u, 0xFu, 0x400u, 0xFFFFu);
  LOBYTE(v8) = 1;
  if ( v16.ensureCapacity(&v16, 4u, v8) )
  {
    if ( v16.m_isWritingArray )
      --v16.m_arrayWriteCount;
    if ( !v16.m_serializeOk || (v9 = bdByteBuffer::writeUInt32(v16.m_buffer.m_ptr, v4), v16.m_serializeOk = 1, !v9) )
      v16.m_serializeOk = 0;
  }
  if ( (_DWORD)v4 )
  {
    v10 = v4;
    do
    {
      ValidationTokenSize = bdValidationTokenResult::getValidationTokenSize(tokens);
      ValidationToken = bdValidationTokenResult::getValidationToken(tokens);
      bdBufferParams::addBlob(&v16, ValidationToken, ValidationTokenSize);
      ++tokens;
      --v10;
    }
    while ( v10 );
  }
  started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &v16);
  if ( started )
  {
    v15 = started;
    bdLogMessage(BD_LOG_WARNING, "warn/", "stats", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdstats\\bdstats.cpp", "bdStats::writeMultipleServerValidatedStats", 0x47u, "Failed to start task writeMultipleServerValidatedStats: Error %i", v15);
  }
  bdTaskParams::~bdTaskParams(&v16);
  return result;
}

/*
==============
bdStats::writeServerValidatedStats
==============
*/
bdReference<bdRemoteTask> *bdStats::writeServerValidatedStats(bdStats *this, bdReference<bdRemoteTask> *result, const bdValidationTokenResult *token)
{
  unsigned int ValidationTokenSize; 
  const unsigned __int8 *ValidationToken; 
  bdLobbyErrorCode started; 
  bdLobbyErrorCode v10; 
  bdTaskParams v11; 

  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&v11, 4u, 0xEu, 0x400u, 0xFFFFu);
  ValidationTokenSize = bdValidationTokenResult::getValidationTokenSize((bdValidationTokenResult *)token);
  ValidationToken = bdValidationTokenResult::getValidationToken((bdValidationTokenResult *)token);
  bdBufferParams::addBlob(&v11, ValidationToken, ValidationTokenSize);
  started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &v11);
  if ( started )
  {
    v10 = started;
    bdLogMessage(BD_LOG_WARNING, "warn/", "stats", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdstats\\bdstats.cpp", "bdStats::writeServerValidatedStats", 0x57u, "Failed to start task writeServerValidatedStats: Error %i", v10);
  }
  bdTaskParams::~bdTaskParams(&v11);
  return result;
}

/*
==============
bdStats::writeServerValidatedStats
==============
*/
bdReference<bdRemoteTask> *bdStats::writeServerValidatedStats(bdStats *this, bdReference<bdRemoteTask> *result, const unsigned __int8 *tokenData, unsigned int tokenSize)
{
  unsigned int v8; 
  unsigned int ValidationTokenSize; 
  const unsigned __int8 *ValidationToken; 
  bdLobbyErrorCode started; 
  bdLobbyErrorCode v13; 
  bdTaskParams taskParams; 
  bdValidationTokenResult v15; 

  bdValidationTokenResult::bdValidationTokenResult(&v15);
  v8 = 10240;
  if ( tokenSize < 0x2800 )
    v8 = tokenSize;
  v15.m_validationTokenSize = v8;
  memcpy_0(v15.m_validationToken, tokenData, v8);
  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&taskParams, 4u, 0xEu, 0x400u, 0xFFFFu);
  ValidationTokenSize = bdValidationTokenResult::getValidationTokenSize(&v15);
  ValidationToken = bdValidationTokenResult::getValidationToken(&v15);
  bdBufferParams::addBlob(&taskParams, ValidationToken, ValidationTokenSize);
  started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
  if ( started )
  {
    v13 = started;
    bdLogMessage(BD_LOG_WARNING, "warn/", "stats", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdstats\\bdstats.cpp", "bdStats::writeServerValidatedStats", 0x57u, "Failed to start task writeServerValidatedStats: Error %i", v13);
  }
  bdTaskParams::~bdTaskParams(&taskParams);
  bdValidationTokenResult::~bdValidationTokenResult((bdValidationTokenResult *)&v15.gap2824[4]);
  bdReferencable::~bdReferencable((bdReferencable *)&v15.gap2824[4]);
  return result;
}

/*
==============
bdStats::writeStats
==============
*/
bdReference<bdRemoteTask> *bdStats::writeStats(bdStats *this, bdReference<bdRemoteTask> *result, bdStatsInfo **stats, const unsigned int numStats)
{
  __int64 v4; 
  bdLobbyErrorCode started; 
  bdLobbyErrorCode v10; 
  bdTaskParams v11; 

  v4 = numStats;
  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&v11, 4u, 1u, 0x400u, 0xFFFFu);
  if ( (_DWORD)v4 )
  {
    do
    {
      bdBufferParams::addSerializable(&v11, (const bdSerializable *)(&(*stats++)->__vftable + 2));
      --v4;
    }
    while ( v4 );
  }
  started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &v11);
  if ( started )
  {
    v10 = started;
    bdLogMessage(BD_LOG_WARNING, "warn/", "stats", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdstats\\bdstats.cpp", "bdStats::writeStats", 0x31u, "Failed to start task: Error %i", v10);
  }
  bdTaskParams::~bdTaskParams(&v11);
  return result;
}

