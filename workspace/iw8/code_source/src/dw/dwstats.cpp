/*
==============
dwDeleteStats
==============
*/

void __fastcall dwDeleteStats(overlappedTask *const task, const unsigned int leaderBoardID)
{
  ?dwDeleteStats@@YAXQEAUoverlappedTask@@I@Z(task, leaderBoardID);
}

/*
==============
dwReadStatsByLeaderboardIDsComplete
==============
*/

taskCompleteResults __fastcall dwReadStatsByLeaderboardIDsComplete(overlappedTask *const task)
{
  return ?dwReadStatsByLeaderboardIDsComplete@@YA?AW4taskCompleteResults@@QEAUoverlappedTask@@@Z(task);
}

/*
==============
dwWriteServerValidatedStats
==============
*/

unsigned int __fastcall dwWriteServerValidatedStats(TaskCreateRequest *request, const unsigned __int8 *tokenData, unsigned int tokenSize)
{
  return ?dwWriteServerValidatedStats@@YAIPEAVTaskCreateRequest@@PEBEI@Z(request, tokenData, tokenSize);
}

/*
==============
dwReadStatsByUserExcluded
==============
*/

void __fastcall dwReadStatsByUserExcluded(overlappedTask *const task, const unsigned int leaderBoardID, const unsigned __int64 entityID, const char **excludedColumns, const unsigned int numExcludedColumns)
{
  ?dwReadStatsByUserExcluded@@YAXQEAUoverlappedTask@@I_KQEAPEBDI@Z(task, leaderBoardID, entityID, excludedColumns, numExcludedColumns);
}

/*
==============
dwReadStatsByLeaderboardIDs
==============
*/

void __fastcall dwReadStatsByLeaderboardIDs(overlappedTask *const task, const unsigned __int64 entityID)
{
  ?dwReadStatsByLeaderboardIDs@@YAXQEAUoverlappedTask@@_K@Z(task, entityID);
}

/*
==============
dwReadStatsByPivot
==============
*/

void __fastcall dwReadStatsByPivot(overlappedTask *const task, const unsigned int leaderBoardID, const unsigned __int64 entityID, const unsigned int maxResults)
{
  ?dwReadStatsByPivot@@YAXQEAUoverlappedTask@@I_KI@Z(task, leaderBoardID, entityID, maxResults);
}

/*
==============
dwWriteStats
==============
*/

void __fastcall dwWriteStats(overlappedTask *const task, bdStatsInfo **statsData, const unsigned int numStats)
{
  ?dwWriteStats@@YAXQEAUoverlappedTask@@QEAPEAVbdStatsInfo@@I@Z(task, statsData, numStats);
}

/*
==============
dwReadStatsByRank
==============
*/

void __fastcall dwReadStatsByRank(overlappedTask *const task, const unsigned int leaderBoardID, const unsigned int topRank, const unsigned int maxResults, const char **includedColumns, const unsigned int numIncludedColumns)
{
  ?dwReadStatsByRank@@YAXQEAUoverlappedTask@@IIIQEAPEBDI@Z(task, leaderBoardID, topRank, maxResults, includedColumns, numIncludedColumns);
}

/*
==============
dwReadStatsByRankExcluded
==============
*/

void __fastcall dwReadStatsByRankExcluded(overlappedTask *const task, const unsigned int leaderBoardID, const unsigned int topRank, const unsigned int maxResults, const char **excludedColumns, const unsigned int numExcludedColumns)
{
  ?dwReadStatsByRankExcluded@@YAXQEAUoverlappedTask@@IIIQEAPEBDI@Z(task, leaderBoardID, topRank, maxResults, excludedColumns, numExcludedColumns);
}

/*
==============
dwReadStatsByUser
==============
*/

void __fastcall dwReadStatsByUser(overlappedTask *const task, const unsigned int leaderBoardID, const unsigned __int64 entityID, const char **includedColumns, const unsigned int numIncludedColumns)
{
  ?dwReadStatsByUser@@YAXQEAUoverlappedTask@@I_KQEAPEBDI@Z(task, leaderBoardID, entityID, includedColumns, numIncludedColumns);
}

/*
==============
dwReadStatsForUsers
==============
*/

void __fastcall dwReadStatsForUsers(overlappedTask *const task, const unsigned int leaderBoardID, const unsigned __int64 *entityIDs, const unsigned int numEntityIDs, const char **includedColumns, const unsigned int numIncludedColumns)
{
  ?dwReadStatsForUsers@@YAXQEAUoverlappedTask@@IPEB_KIQEAPEBDI@Z(task, leaderBoardID, entityIDs, numEntityIDs, includedColumns, numIncludedColumns);
}

/*
==============
dwWriteStatsComplete
==============
*/

taskCompleteResults __fastcall dwWriteStatsComplete(overlappedTask *const task)
{
  return ?dwWriteStatsComplete@@YA?AW4taskCompleteResults@@QEAUoverlappedTask@@@Z(task);
}

/*
==============
dwReadStatsForUsersExcluded
==============
*/

void __fastcall dwReadStatsForUsersExcluded(overlappedTask *const task, const unsigned int leaderBoardID, const unsigned __int64 *entityIDs, const unsigned int numEntityIDs, const char **excludedColumns, const unsigned int numExcludedColumns)
{
  ?dwReadStatsForUsersExcluded@@YAXQEAUoverlappedTask@@IPEB_KIQEAPEBDI@Z(task, leaderBoardID, entityIDs, numEntityIDs, excludedColumns, numExcludedColumns);
}

/*
==============
dwReadStatsComplete
==============
*/

taskCompleteResults __fastcall dwReadStatsComplete(overlappedTask *const task)
{
  return ?dwReadStatsComplete@@YA?AW4taskCompleteResults@@QEAUoverlappedTask@@@Z(task);
}

/*
==============
dwDeleteStatsComplete
==============
*/

taskCompleteResults __fastcall dwDeleteStatsComplete(overlappedTask *const task)
{
  return ?dwDeleteStatsComplete@@YA?AW4taskCompleteResults@@QEAUoverlappedTask@@@Z(task);
}

/*
==============
dwDeleteStats
==============
*/
void dwDeleteStats(overlappedTask *const task, const unsigned int leaderBoardID)
{
  DWServicesAccess *Instance; 
  DWServicesAccess *v5; 
  DWStats *Stats; 
  bdRemoteTask *m_ptr; 
  bdReference<bdRemoteTask> result; 

  if ( task )
  {
    Instance = DWServicesAccess::GetInstance();
    if ( DWServicesAccess::isReady(Instance, task->controllerIndex) )
    {
      v5 = DWServicesAccess::GetInstance();
      Stats = DWServicesAccess::GetStats(v5, task->controllerIndex);
      m_ptr = DWStats::deleteStats(Stats, &result, leaderBoardID)->m_ptr;
      if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
      {
        if ( result.m_ptr )
          ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
        result.m_ptr = NULL;
      }
      if ( m_ptr )
      {
        bdReference<bdRemoteTask>::operator=(&task->u.remoteTask, m_ptr);
      }
      else
      {
        TaskManager_ClearTask(task);
        dwConnectionErrorHandler(9);
      }
    }
  }
}

/*
==============
dwDeleteStatsComplete
==============
*/
taskCompleteResults dwDeleteStatsComplete(overlappedTask *const task)
{
  DWServicesAccess *v2; 
  DWServicesAccess *Instance; 
  DWLobbyService *DWLobbyService; 
  bdTask::bdStatus v5; 
  bdLobbyErrorCode ErrorCode; 
  char buffer[64]; 
  char _Buffer[256]; 

  if ( task && task->u.remoteTask.m_ptr && (v2 = DWServicesAccess::GetInstance(), DWServicesAccess::isReady(v2, task->controllerIndex)) )
  {
    Instance = DWServicesAccess::GetInstance();
    DWLobbyService = DWServicesAccess::GetDWLobbyService(Instance, task->controllerIndex);
    DWLobbyService->pump(DWLobbyService);
    v5 = task->u.remoteTask.m_ptr->getStatus(task->u.remoteTask.m_ptr);
    ErrorCode = bdRemoteTask::getErrorCode(task->u.remoteTask.m_ptr);
    if ( ErrorCode )
    {
      TaskManager_ClearTask(task);
      if ( ErrorCode == BD_TOO_MANY_TASKS )
      {
        OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_DEFAULT_t)8, NULL);
        Live_ThrowError(ERR_DROP, "XBOXLIVE/TOOMANYTASKS");
      }
      dwLobbyErrorCodeToString(ErrorCode, buffer, 0x40u);
      Com_PrintError(25, "DW delete stats error %i - '%s'\n", (unsigned int)ErrorCode, buffer);
      j_sprintf_s(_Buffer, 0x100ui64, "%i", (unsigned int)ErrorCode);
      OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, DODGE, _Buffer);
      Live_ThrowError(ERR_DROP, "XBOXLIVE/LIVEERROR");
    }
    return dwTaskStatusConvert(v5, ErrorCode);
  }
  else
  {
    Com_Printf(25, "Failed to retreive stats delete status\n");
    return 2;
  }
}

/*
==============
dwReadStatsByLeaderboardIDs
==============
*/
void dwReadStatsByLeaderboardIDs(overlappedTask *const task, const unsigned __int64 entityID)
{
  DWServicesAccess *Instance; 
  void *data; 
  DWServicesAccess *v6; 
  DWStats *Stats; 
  bdRemoteTask *m_ptr; 
  bdReference<bdRemoteTask> result; 

  if ( task )
  {
    Instance = DWServicesAccess::GetInstance();
    if ( DWServicesAccess::isReady(Instance, task->controllerIndex) )
    {
      data = task->data;
      v6 = DWServicesAccess::GetInstance();
      Stats = DWServicesAccess::GetStats(v6, task->controllerIndex);
      m_ptr = DWStats::readStatsByLeaderboardIDs(Stats, &result, entityID, (const unsigned int *)data + 1, (bdStatsInfoEx **)data + 38, *(_DWORD *)data)->m_ptr;
      if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
      {
        if ( result.m_ptr )
          ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
        result.m_ptr = NULL;
      }
      if ( m_ptr )
      {
        bdReference<bdRemoteTask>::operator=(&task->u.remoteTask, m_ptr);
      }
      else
      {
        TaskManager_ClearTask(task);
        dwConnectionErrorHandler(7);
      }
    }
  }
}

/*
==============
dwReadStatsByLeaderboardIDsComplete
==============
*/
taskCompleteResults dwReadStatsByLeaderboardIDsComplete(overlappedTask *const task)
{
  DWServicesAccess *v2; 
  DWServicesAccess *Instance; 
  DWLobbyService *DWLobbyService; 
  bdTask::bdStatus v5; 
  bdLobbyErrorCode ErrorCode; 
  bdLobbyErrorCode v7; 
  char buffer[64]; 

  if ( task && task->u.remoteTask.m_ptr && (v2 = DWServicesAccess::GetInstance(), DWServicesAccess::isReady(v2, task->controllerIndex)) )
  {
    Instance = DWServicesAccess::GetInstance();
    DWLobbyService = DWServicesAccess::GetDWLobbyService(Instance, task->controllerIndex);
    DWLobbyService->pump(DWLobbyService);
    v5 = task->u.remoteTask.m_ptr->getStatus(task->u.remoteTask.m_ptr);
    ErrorCode = bdRemoteTask::getErrorCode(task->u.remoteTask.m_ptr);
    v7 = ErrorCode;
    if ( ErrorCode )
    {
      dwLobbyErrorCodeToString(ErrorCode, buffer, 0x40u);
      Com_PrintError(25, "DW read stats error %i - '%s'\n", (unsigned int)v7, buffer);
    }
    return dwTaskStatusConvert(v5, v7);
  }
  else
  {
    Com_Printf(25, "Failed to retrieve stats read status\n");
    return 2;
  }
}

/*
==============
dwReadStatsByPivot
==============
*/
void dwReadStatsByPivot(overlappedTask *const task, const unsigned int leaderBoardID, const unsigned __int64 entityID, const unsigned int maxResults)
{
  DWServicesAccess *Instance; 
  bdStatsInfo *stats; 
  DWServicesAccess *v10; 
  DWStats *v11; 
  bdRemoteTask *m_ptr; 
  bdReference<bdRemoteTask> result; 

  if ( task )
  {
    Instance = DWServicesAccess::GetInstance();
    if ( DWServicesAccess::isReady(Instance, task->controllerIndex) )
    {
      stats = (bdStatsInfo *)task->data;
      v10 = DWServicesAccess::GetInstance();
      v11 = DWServicesAccess::GetStats(v10, task->controllerIndex);
      m_ptr = DWStats::readStatsByPivot(v11, &result, leaderBoardID, entityID, stats, maxResults)->m_ptr;
      if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
      {
        if ( result.m_ptr )
          ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
        result.m_ptr = NULL;
      }
      if ( m_ptr )
      {
        bdReference<bdRemoteTask>::operator=(&task->u.remoteTask, m_ptr);
      }
      else
      {
        TaskManager_ClearTask(task);
        dwConnectionErrorHandler(8);
      }
    }
  }
}

/*
==============
dwReadStatsByRank
==============
*/
void dwReadStatsByRank(overlappedTask *const task, const unsigned int leaderBoardID, const unsigned int topRank, const unsigned int maxResults, const char **includedColumns, const unsigned int numIncludedColumns)
{
  DWServicesAccess *Instance; 
  bdStatsInfo *stats; 
  DWServicesAccess *v12; 
  DWStats *v13; 
  bdRemoteTask *m_ptr; 
  bdReference<bdRemoteTask> result; 

  if ( task )
  {
    Instance = DWServicesAccess::GetInstance();
    if ( DWServicesAccess::isReady(Instance, task->controllerIndex) )
    {
      stats = (bdStatsInfo *)task->data;
      v12 = DWServicesAccess::GetInstance();
      v13 = DWServicesAccess::GetStats(v12, task->controllerIndex);
      m_ptr = DWStats::readStatsByRank(v13, &result, leaderBoardID, topRank, stats, maxResults, includedColumns, numIncludedColumns)->m_ptr;
      if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
      {
        if ( result.m_ptr )
          ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
        result.m_ptr = NULL;
      }
      if ( m_ptr )
        bdReference<bdRemoteTask>::operator=(&task->u.remoteTask, m_ptr);
    }
  }
}

/*
==============
dwReadStatsByRankExcluded
==============
*/
void dwReadStatsByRankExcluded(overlappedTask *const task, const unsigned int leaderBoardID, const unsigned int topRank, const unsigned int maxResults, const char **excludedColumns, const unsigned int numExcludedColumns)
{
  DWServicesAccess *Instance; 
  bdStatsInfo *stats; 
  DWServicesAccess *v12; 
  DWStats *v13; 
  bdRemoteTask *m_ptr; 
  bdReference<bdRemoteTask> result; 

  if ( task )
  {
    Instance = DWServicesAccess::GetInstance();
    if ( DWServicesAccess::isReady(Instance, task->controllerIndex) )
    {
      stats = (bdStatsInfo *)task->data;
      v12 = DWServicesAccess::GetInstance();
      v13 = DWServicesAccess::GetStats(v12, task->controllerIndex);
      m_ptr = DWStats::readStatsByRank(v13, &result, leaderBoardID, topRank, stats, maxResults, excludedColumns, numExcludedColumns)->m_ptr;
      if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
      {
        if ( result.m_ptr )
          ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
        result.m_ptr = NULL;
      }
      if ( m_ptr )
        bdReference<bdRemoteTask>::operator=(&task->u.remoteTask, m_ptr);
    }
  }
}

/*
==============
dwReadStatsByUser
==============
*/
void dwReadStatsByUser(overlappedTask *const task, const unsigned int leaderBoardID, const unsigned __int64 entityID, const char **includedColumns, const unsigned int numIncludedColumns)
{
  DWServicesAccess *Instance; 
  bdStatsInfo *stats; 
  DWServicesAccess *v10; 
  DWStats *v11; 
  bdRemoteTask *m_ptr; 
  bdReference<bdRemoteTask> result; 
  unsigned __int64 entityIDs; 

  if ( task )
  {
    entityIDs = entityID;
    Instance = DWServicesAccess::GetInstance();
    if ( DWServicesAccess::isReady(Instance, task->controllerIndex) )
    {
      stats = (bdStatsInfo *)task->data;
      v10 = DWServicesAccess::GetInstance();
      v11 = DWServicesAccess::GetStats(v10, task->controllerIndex);
      m_ptr = DWStats::readStatsByEntityID(v11, &result, leaderBoardID, &entityIDs, 1u, stats, includedColumns, numIncludedColumns)->m_ptr;
      if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
      {
        if ( result.m_ptr )
          ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
        result.m_ptr = NULL;
      }
      if ( m_ptr )
      {
        bdReference<bdRemoteTask>::operator=(&task->u.remoteTask, m_ptr);
      }
      else
      {
        TaskManager_ClearTask(task);
        dwConnectionErrorHandler(7);
      }
    }
  }
}

/*
==============
dwReadStatsByUserExcluded
==============
*/
void dwReadStatsByUserExcluded(overlappedTask *const task, const unsigned int leaderBoardID, const unsigned __int64 entityID, const char **excludedColumns, const unsigned int numExcludedColumns)
{
  DWServicesAccess *Instance; 
  bdStatsInfo *stats; 
  DWServicesAccess *v10; 
  DWStats *v11; 
  bdRemoteTask *m_ptr; 
  bdReference<bdRemoteTask> result; 
  unsigned __int64 entityIDs; 

  if ( task )
  {
    entityIDs = entityID;
    Instance = DWServicesAccess::GetInstance();
    if ( DWServicesAccess::isReady(Instance, task->controllerIndex) )
    {
      stats = (bdStatsInfo *)task->data;
      v10 = DWServicesAccess::GetInstance();
      v11 = DWServicesAccess::GetStats(v10, task->controllerIndex);
      m_ptr = DWStats::readStatsByEntityID(v11, &result, leaderBoardID, &entityIDs, 1u, stats, excludedColumns, numExcludedColumns)->m_ptr;
      if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
      {
        if ( result.m_ptr )
          ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
        result.m_ptr = NULL;
      }
      if ( m_ptr )
      {
        bdReference<bdRemoteTask>::operator=(&task->u.remoteTask, m_ptr);
      }
      else
      {
        TaskManager_ClearTask(task);
        dwConnectionErrorHandler(7);
      }
    }
  }
}

/*
==============
dwReadStatsComplete
==============
*/
taskCompleteResults dwReadStatsComplete(overlappedTask *const task)
{
  DWServicesAccess *v2; 
  DWServicesAccess *Instance; 
  DWLobbyService *DWLobbyService; 
  bdTask::bdStatus v5; 
  bdLobbyErrorCode ErrorCode; 
  _DWORD *data; 
  int Int_Internal_DebugName; 
  char buffer[64]; 

  if ( task && task->u.remoteTask.m_ptr && (v2 = DWServicesAccess::GetInstance(), DWServicesAccess::isReady(v2, task->controllerIndex)) )
  {
    Instance = DWServicesAccess::GetInstance();
    DWLobbyService = DWServicesAccess::GetDWLobbyService(Instance, task->controllerIndex);
    DWLobbyService->pump(DWLobbyService);
    v5 = task->u.remoteTask.m_ptr->getStatus(task->u.remoteTask.m_ptr);
    ErrorCode = bdRemoteTask::getErrorCode(task->u.remoteTask.m_ptr);
    if ( v5 == BD_DONE )
    {
      data = task->data;
      data[10401] = bdRemoteTask::getNumResults(task->u.remoteTask.m_ptr);
      data[10400] = bdRemoteTask::getTotalNumResults(task->u.remoteTask.m_ptr);
      Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DVARINT_leaderboards_max_rank, "leaderboards_max_rank");
      if ( data[10400] < Int_Internal_DebugName )
        Int_Internal_DebugName = data[10400];
      data[10402] = Int_Internal_DebugName;
    }
    if ( ErrorCode )
    {
      dwLobbyErrorCodeToString(ErrorCode, buffer, 0x40u);
      Com_PrintError(25, "DW read stats error %i - '%s'\n", (unsigned int)ErrorCode, buffer);
    }
    return dwTaskStatusConvert(v5, ErrorCode);
  }
  else
  {
    Com_Printf(25, "Failed to retrieve stats read status\n");
    return 2;
  }
}

/*
==============
dwReadStatsForUsers
==============
*/
void dwReadStatsForUsers(overlappedTask *const task, const unsigned int leaderBoardID, const unsigned __int64 *entityIDs, const unsigned int numEntityIDs, const char **includedColumns, const unsigned int numIncludedColumns)
{
  DWServicesAccess *Instance; 
  bdStatsInfo *stats; 
  DWServicesAccess *v12; 
  DWStats *v13; 
  bdRemoteTask *m_ptr; 
  bdReference<bdRemoteTask> result; 

  if ( task )
  {
    Instance = DWServicesAccess::GetInstance();
    if ( DWServicesAccess::isReady(Instance, task->controllerIndex) )
    {
      stats = (bdStatsInfo *)task->data;
      v12 = DWServicesAccess::GetInstance();
      v13 = DWServicesAccess::GetStats(v12, task->controllerIndex);
      m_ptr = DWStats::readStatsByEntityID(v13, &result, leaderBoardID, entityIDs, numEntityIDs, stats, includedColumns, numIncludedColumns)->m_ptr;
      if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
      {
        if ( result.m_ptr )
          ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
        result.m_ptr = NULL;
      }
      if ( m_ptr )
      {
        bdReference<bdRemoteTask>::operator=(&task->u.remoteTask, m_ptr);
      }
      else
      {
        TaskManager_ClearTask(task);
        dwConnectionErrorHandler(8);
      }
    }
  }
}

/*
==============
dwReadStatsForUsersExcluded
==============
*/
void dwReadStatsForUsersExcluded(overlappedTask *const task, const unsigned int leaderBoardID, const unsigned __int64 *entityIDs, const unsigned int numEntityIDs, const char **excludedColumns, const unsigned int numExcludedColumns)
{
  DWServicesAccess *Instance; 
  bdStatsInfo *stats; 
  DWServicesAccess *v12; 
  DWStats *v13; 
  bdRemoteTask *m_ptr; 
  bdReference<bdRemoteTask> result; 

  if ( task )
  {
    Instance = DWServicesAccess::GetInstance();
    if ( DWServicesAccess::isReady(Instance, task->controllerIndex) )
    {
      stats = (bdStatsInfo *)task->data;
      v12 = DWServicesAccess::GetInstance();
      v13 = DWServicesAccess::GetStats(v12, task->controllerIndex);
      m_ptr = DWStats::readStatsByEntityID(v13, &result, leaderBoardID, entityIDs, numEntityIDs, stats, excludedColumns, numExcludedColumns)->m_ptr;
      if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
      {
        if ( result.m_ptr )
          ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
        result.m_ptr = NULL;
      }
      if ( m_ptr )
      {
        bdReference<bdRemoteTask>::operator=(&task->u.remoteTask, m_ptr);
      }
      else
      {
        TaskManager_ClearTask(task);
        dwConnectionErrorHandler(8);
      }
    }
  }
}

/*
==============
dwWriteServerValidatedStats
==============
*/
__int64 dwWriteServerValidatedStats(TaskCreateRequest *request, const unsigned __int8 *tokenData, unsigned int tokenSize)
{
  unsigned int m_localTaskId; 
  DWServicesAccess *Instance; 
  DWServicesAccess *v9; 
  DWServicesAccess *v10; 
  DWStats *Stats; 
  TaskCreateRequest *v12; 
  bdReference<bdRemoteTask> *p_m_remoteDemonwareTask; 
  TaskCreateRequest *v14; 
  bdRemoteTask *v15; 
  TaskManager *v16; 
  TaskCreateResult pTaskCreateResult; 
  bdReference<bdRemoteTask> result; 
  unsigned __int64 userID; 

  m_localTaskId = 0;
  if ( !request && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwstats.cpp", 29, ASSERT_TYPE_ASSERT, "(request)", (const char *)&queryFormat, "request") )
    __debugbreak();
  Instance = DWServicesAccess::GetInstance();
  if ( !DWServicesAccess::isReady(Instance, request->m_controllerIndex) )
  {
    Com_Printf(25, "dwWriteServerValidatedStats triggering error due to not being connected.\n");
    return 0i64;
  }
  if ( !dwGetOnlineUserID(request->m_controllerIndex, &userID) )
  {
    Com_Printf(25, "dwWriteServerValidatedStats triggering error due to dwGetOnlineUserID failing.\n");
    return 0i64;
  }
  v9 = DWServicesAccess::GetInstance();
  if ( DWServicesAccess::isReady(v9, request->m_controllerIndex) )
  {
    v10 = DWServicesAccess::GetInstance();
    Stats = DWServicesAccess::GetStats(v10, request->m_controllerIndex);
    v12 = (TaskCreateRequest *)DWStats::writeServerValidatedStats(Stats, &result, tokenData, tokenSize);
    p_m_remoteDemonwareTask = &request->m_remoteDemonwareTask;
    v14 = v12;
    if ( v12 != (TaskCreateRequest *)&request->m_remoteDemonwareTask )
    {
      if ( p_m_remoteDemonwareTask->m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&p_m_remoteDemonwareTask->m_ptr->m_refCount, 0xFFFFFFFF) == 1 && p_m_remoteDemonwareTask->m_ptr )
        ((void (__fastcall *)(bdRemoteTask *, __int64))p_m_remoteDemonwareTask->m_ptr->~bdReferencable)(p_m_remoteDemonwareTask->m_ptr, 1i64);
      v15 = *(bdRemoteTask **)&v14->m_controllerIndex;
      p_m_remoteDemonwareTask->m_ptr = *(bdRemoteTask **)&v14->m_controllerIndex;
      if ( v15 )
        _InterlockedExchangeAdd((volatile signed __int32 *)&v15->m_refCount, 1u);
    }
    if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
    if ( !p_m_remoteDemonwareTask->m_ptr )
    {
      Com_Printf(25, "dwWriteServerValidatedStats triggering error due to no dw task returned.\n");
      return 0i64;
    }
    pTaskCreateResult.m_localTaskId = 0;
    pTaskCreateResult.m_task = NULL;
    v16 = TaskManager::GetInstance();
    if ( TaskManager::CreateTask(v16, request, &pTaskCreateResult) )
      m_localTaskId = pTaskCreateResult.m_localTaskId;
  }
  Com_Printf(25, "dwWriteServerValidatedStats: writing server validated stats for controller %d\n", (unsigned int)request->m_controllerIndex);
  return m_localTaskId;
}

/*
==============
dwWriteStats
==============
*/
void dwWriteStats(overlappedTask *const task, bdStatsInfo **statsData, const unsigned int numStats)
{
  DWServicesAccess *Instance; 
  DWServicesAccess *v7; 
  DWStats *Stats; 
  bdRemoteTask *m_ptr; 
  bdReference<bdRemoteTask> result; 

  if ( task )
  {
    Instance = DWServicesAccess::GetInstance();
    if ( DWServicesAccess::isReady(Instance, task->controllerIndex) )
    {
      v7 = DWServicesAccess::GetInstance();
      Stats = DWServicesAccess::GetStats(v7, task->controllerIndex);
      m_ptr = DWStats::writeStats(Stats, &result, statsData, numStats)->m_ptr;
      if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
      {
        if ( result.m_ptr )
          ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
        result.m_ptr = NULL;
      }
      if ( m_ptr )
      {
        bdReference<bdRemoteTask>::operator=(&task->u.remoteTask, m_ptr);
      }
      else
      {
        TaskManager_ClearTask(task);
        dwConnectionErrorHandler(6);
      }
    }
  }
}

/*
==============
dwWriteStatsComplete
==============
*/
taskCompleteResults dwWriteStatsComplete(overlappedTask *const task)
{
  DWServicesAccess *v2; 
  DWServicesAccess *Instance; 
  DWLobbyService *DWLobbyService; 
  bdTask::bdStatus v5; 
  bdLobbyErrorCode ErrorCode; 
  char buffer[64]; 

  if ( task && task->u.remoteTask.m_ptr && (v2 = DWServicesAccess::GetInstance(), DWServicesAccess::isReady(v2, task->controllerIndex)) )
  {
    Instance = DWServicesAccess::GetInstance();
    DWLobbyService = DWServicesAccess::GetDWLobbyService(Instance, task->controllerIndex);
    DWLobbyService->pump(DWLobbyService);
    v5 = task->u.remoteTask.m_ptr->getStatus(task->u.remoteTask.m_ptr);
    ErrorCode = bdRemoteTask::getErrorCode(task->u.remoteTask.m_ptr);
    if ( ErrorCode )
    {
      TaskManager_ClearTask(task);
      if ( ErrorCode == BD_TOO_MANY_TASKS )
      {
        OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_DEFAULT_t)4, NULL);
        Live_ThrowError(ERR_DROP, "XBOXLIVE/TOOMANYTASKS");
      }
      dwLobbyErrorCodeToString(ErrorCode, buffer, 0x40u);
      Com_PrintError(25, "DW write stats error %i - '%s'\n", (unsigned int)ErrorCode, buffer);
    }
    return dwTaskStatusConvert(v5, ErrorCode);
  }
  else
  {
    Com_Printf(25, "Failed to retrieve stats write status\n");
    return 2;
  }
}

