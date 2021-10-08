/*
==============
dwGetAccountIdFromUsername
==============
*/

bool __fastcall dwGetAccountIdFromUsername(const int controllerIndex, const char *username, void (__fastcall *callback)(const int, const bool, const bdUserInfo *))
{
  return ?dwGetAccountIdFromUsername@@YA_NHPEBDP6AXH_NPEBVbdUserInfo@@@Z@Z(controllerIndex, username, callback);
}

/*
==============
dwGetUsernamesFromAccountIds
==============
*/

bool __fastcall dwGetUsernamesFromAccountIds(const int controllerIndex, unsigned __int64 *userIDs, const int numUserIDs, bdUserInfo *usernamesBuffer, void (__fastcall *callback)(GenericTask *, eTaskManagerTaskState), void *payload)
{
  return ?dwGetUsernamesFromAccountIds@@YA_NHPEA_KHPEAVbdUserInfo@@P6AXPEAVGenericTask@@W4eTaskManagerTaskState@@@ZPEAX@Z(controllerIndex, userIDs, numUserIDs, usernamesBuffer, callback, payload);
}

/*
==============
dwGetTitleUtilitiesComplete
==============
*/

taskCompleteResults __fastcall dwGetTitleUtilitiesComplete(overlappedTask *const task)
{
  return ?dwGetTitleUtilitiesComplete@@YA?AW4taskCompleteResults@@QEAUoverlappedTask@@@Z(task);
}

/*
==============
dwGetServerTimeComplete
==============
*/

taskCompleteResults __fastcall dwGetServerTimeComplete(const int controllerIndex, overlappedTask *const task)
{
  return ?dwGetServerTimeComplete@@YA?AW4taskCompleteResults@@HQEAUoverlappedTask@@@Z(controllerIndex, task);
}

/*
==============
dwGetServerTime
==============
*/

void __fastcall dwGetServerTime(const int controllerIndex, overlappedTask *const task, bdTimeStamp *timeStamp)
{
  ?dwGetServerTime@@YAXHQEAUoverlappedTask@@PEAVbdTimeStamp@@@Z(controllerIndex, task, timeStamp);
}

/*
==============
dwGetAccountIdFromUsername
==============
*/
__int64 dwGetAccountIdFromUsername(const int controllerIndex, const char *username, void (*callback)(const int, const bool, const bdUserInfo *))
{
  unsigned __int8 v6; 
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  DWServicesAccess *Instance; 
  DWServicesAccess *v10; 
  DWTitleUtilities *TitleUtilities; 
  TaskCreateRequest *UserIDs; 
  bdRemoteTask *v13; 
  TaskManager *v14; 
  TaskCreateResult pTaskCreateResult; 
  TaskCreateRequest pTaskCreateRequest; 
  bdReference<bdRemoteTask> result; 
  char *usernames; 

  *(_QWORD *)&pTaskCreateRequest.m_controllerIndex = -1i64;
  memset(&pTaskCreateRequest.m_appData, 0, 48);
  pTaskCreateRequest.m_cancelTaskOnSignoutEvent = 1;
  pTaskCreateRequest.m_timeoutInSeconds = 0;
  pTaskCreateResult.m_localTaskId = 0;
  pTaskCreateResult.m_task = NULL;
  if ( !callback && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwtitleutilities.cpp", 150, ASSERT_TYPE_ASSERT, "(callback)", (const char *)&queryFormat, "callback", -2i64, *(_QWORD *)&pTaskCreateResult.m_localTaskId, pTaskCreateResult.m_task) )
    __debugbreak();
  if ( s_getAccountIdCallback )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwtitleutilities.cpp", 151, ASSERT_TYPE_ASSERT, "(s_getAccountIdCallback == nullptr)", (const char *)&queryFormat, "s_getAccountIdCallback == nullptr") )
      __debugbreak();
    if ( s_getAccountIdCallback )
    {
      Com_PrintError(14, "%s: Search for user already in progress\n", "dwGetAccountIdFromUsername");
LABEL_9:
      v6 = 0;
      goto LABEL_10;
    }
  }
  usernames = (char *)username;
  Instance = DWServicesAccess::GetInstance();
  if ( !DWServicesAccess::isReady(Instance, controllerIndex) )
    goto LABEL_9;
  v10 = DWServicesAccess::GetInstance();
  TitleUtilities = DWServicesAccess::GetTitleUtilities(v10, controllerIndex);
  UserIDs = (TaskCreateRequest *)DWTitleUtilities::getUserIDs(TitleUtilities, &result, (const char *const *)&usernames, 1u, s_returnedUserInfoList);
  if ( UserIDs != (TaskCreateRequest *)&pTaskCreateRequest.m_remoteDemonwareTask )
  {
    if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->~bdReferencable)(pTaskCreateRequest.m_remoteDemonwareTask.m_ptr, 1i64);
    v13 = *(bdRemoteTask **)&UserIDs->m_controllerIndex;
    pTaskCreateRequest.m_remoteDemonwareTask.m_ptr = v13;
    if ( v13 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v13->m_refCount, 1u);
  }
  if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result.m_ptr )
    ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
  pTaskCreateRequest.m_onCompletionCallback = dwGetAccountIdsFromUserNamesComplete;
  pTaskCreateRequest.m_controllerIndex = controllerIndex;
  if ( !pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
    goto LABEL_9;
  v14 = TaskManager::GetInstance();
  if ( !TaskManager::CreateTask(v14, &pTaskCreateRequest, &pTaskCreateResult) )
    goto LABEL_9;
  s_getAccountIdCallback = callback;
  v6 = 1;
LABEL_10:
  pTaskCreateRequest.m_onCompletionCallback = NULL;
  pTaskCreateRequest.m_onUpdateCallback = NULL;
  pTaskCreateRequest.m_appSecondaryCallback = NULL;
  pTaskCreateRequest.m_timeoutInSeconds = 0;
  m_asyncInfo = pTaskCreateRequest.m_asyncInfo;
  if ( pTaskCreateRequest.m_asyncInfo )
  {
    pTaskCreateRequest.m_asyncInfo->__abi_Release(pTaskCreateRequest.m_asyncInfo);
    m_asyncInfo = NULL;
    pTaskCreateRequest.m_asyncInfo = NULL;
  }
  if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
    {
      if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
        ((void (__fastcall *)(bdRemoteTask *, __int64))pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->~bdReferencable)(pTaskCreateRequest.m_remoteDemonwareTask.m_ptr, 1i64);
      pTaskCreateRequest.m_remoteDemonwareTask.m_ptr = NULL;
    }
    m_asyncInfo = pTaskCreateRequest.m_asyncInfo;
  }
  if ( m_asyncInfo )
    m_asyncInfo->__abi_Release(m_asyncInfo);
  return v6;
}

/*
==============
dwGetAccountIdsFromUserNamesComplete
==============
*/
void dwGetAccountIdsFromUserNamesComplete(GenericTask *task, eTaskManagerTaskState state)
{
  bdLobbyErrorCode ErrorCode; 

  if ( state )
  {
    ErrorCode = bdRemoteTask::getErrorCode(task->m_remoteDemonwareTask.m_ptr);
    Com_PrintError(25, "%s error %i\n", "dwGetAccountIdsFromUserNamesComplete", (unsigned int)ErrorCode);
    dwConnectionErrorHandler(22);
  }
  else
  {
    s_getAccountIdCallback(task->m_controllerIndex, *((_QWORD *)&s_returnedUserInfoList[0].__vftable + 2) != 0i64, s_returnedUserInfoList);
  }
  s_getAccountIdCallback = NULL;
}

/*
==============
dwGetServerTime
==============
*/
void dwGetServerTime(const int controllerIndex, overlappedTask *const task, bdTimeStamp *timeStamp)
{
  DWServicesAccess *Instance; 
  DWServicesAccess *v7; 
  DWTitleUtilities *TitleUtilities; 
  bdRemoteTask *m_ptr; 
  bdReference<bdRemoteTask> result; 

  Instance = DWServicesAccess::GetInstance();
  if ( DWServicesAccess::isReady(Instance, controllerIndex) && task )
  {
    v7 = DWServicesAccess::GetInstance();
    TitleUtilities = DWServicesAccess::GetTitleUtilities(v7, controllerIndex);
    m_ptr = DWTitleUtilities::getServerTime(TitleUtilities, &result, timeStamp)->m_ptr;
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

/*
==============
dwGetServerTimeComplete
==============
*/
taskCompleteResults dwGetServerTimeComplete(const int controllerIndex, overlappedTask *const task)
{
  DWServicesAccess *Instance; 
  DWServicesAccess *v5; 
  DWLobbyService *DWLobbyService; 
  bdTask::bdStatus v7; 
  bdLobbyErrorCode ErrorCode; 
  char buffer[64]; 

  Instance = DWServicesAccess::GetInstance();
  if ( DWServicesAccess::isReady(Instance, controllerIndex) && task && task->u.remoteTask.m_ptr )
  {
    v5 = DWServicesAccess::GetInstance();
    DWLobbyService = DWServicesAccess::GetDWLobbyService(v5, task->controllerIndex);
    DWLobbyService->pump(DWLobbyService);
    v7 = task->u.remoteTask.m_ptr->getStatus(task->u.remoteTask.m_ptr);
    ErrorCode = bdRemoteTask::getErrorCode(task->u.remoteTask.m_ptr);
    if ( ErrorCode )
    {
      TaskManager_ClearTask(task);
      if ( ErrorCode == BD_TOO_MANY_TASKS )
      {
        OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_DEFAULT_t)16, NULL);
        Live_ThrowError(ERR_DROP, "XBOXLIVE/TOOMANYTASKS");
      }
      dwLobbyErrorCodeToString(ErrorCode, buffer, 0x40u);
      Com_PrintError(25, "DW get server time error %i - '%s'\n", (unsigned int)ErrorCode, buffer);
    }
    return dwTaskStatusConvert(v7, ErrorCode);
  }
  else
  {
    Com_Printf(25, "Failed to retrieve server time task status\n");
    return 2;
  }
}

/*
==============
dwGetTitleUtilitiesComplete
==============
*/
taskCompleteResults dwGetTitleUtilitiesComplete(overlappedTask *const task)
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
        OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_DEFAULT_t)16, NULL);
        Live_ThrowError(ERR_DROP, "XBOXLIVE/TOOMANYTASKS");
      }
      dwLobbyErrorCodeToString(ErrorCode, buffer, 0x40u);
      Com_PrintError(25, "DW title utilities error %i - '%s'\n", (unsigned int)ErrorCode, buffer);
    }
    return dwTaskStatusConvert(v5, ErrorCode);
  }
  else
  {
    Com_Printf(25, "Failed to retrieve title utilities status\n");
    return 2;
  }
}

/*
==============
dwGetUsernamesFromAccountIds
==============
*/
__int64 dwGetUsernamesFromAccountIds(const int controllerIndex, unsigned __int64 *userIDs, const int numUserIDs, bdUserInfo *usernamesBuffer, void (*callback)(GenericTask *, eTaskManagerTaskState), void *payload)
{
  void (__fastcall *v10)(GenericTask *, eTaskManagerTaskState); 
  DWServicesAccess *Instance; 
  DWServicesAccess *v12; 
  DWTitleUtilities *TitleUtilities; 
  TaskCreateRequest *UserNames; 
  bdRemoteTask *v15; 
  TaskManager *v16; 
  unsigned __int8 v17; 
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  TaskCreateResult pTaskCreateResult; 
  TaskCreateRequest pTaskCreateRequest; 

  *(_QWORD *)&pTaskCreateRequest.m_controllerIndex = -1i64;
  memset(&pTaskCreateRequest.m_appData, 0, 48);
  pTaskCreateRequest.m_cancelTaskOnSignoutEvent = 1;
  pTaskCreateRequest.m_timeoutInSeconds = 0;
  pTaskCreateResult.m_localTaskId = 0;
  pTaskCreateResult.m_task = NULL;
  v10 = callback;
  if ( !callback && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwtitleutilities.cpp", 184, ASSERT_TYPE_ASSERT, "(callback)", (const char *)&queryFormat, "callback", -2i64, *(_QWORD *)&pTaskCreateResult.m_localTaskId, pTaskCreateResult.m_task) )
    __debugbreak();
  if ( !userIDs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwtitleutilities.cpp", 185, ASSERT_TYPE_ASSERT, "(userIDs)", (const char *)&queryFormat, "userIDs") )
    __debugbreak();
  if ( !usernamesBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwtitleutilities.cpp", 186, ASSERT_TYPE_ASSERT, "(usernamesBuffer)", (const char *)&queryFormat, "usernamesBuffer") )
    __debugbreak();
  Instance = DWServicesAccess::GetInstance();
  if ( !DWServicesAccess::isReady(Instance, controllerIndex) )
    goto LABEL_25;
  v12 = DWServicesAccess::GetInstance();
  TitleUtilities = DWServicesAccess::GetTitleUtilities(v12, controllerIndex);
  UserNames = (TaskCreateRequest *)DWTitleUtilities::getUserNames(TitleUtilities, (bdReference<bdRemoteTask> *)&callback, userIDs, numUserIDs, usernamesBuffer);
  if ( UserNames != (TaskCreateRequest *)&pTaskCreateRequest.m_remoteDemonwareTask )
  {
    if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->~bdReferencable)(pTaskCreateRequest.m_remoteDemonwareTask.m_ptr, 1i64);
    v15 = *(bdRemoteTask **)&UserNames->m_controllerIndex;
    pTaskCreateRequest.m_remoteDemonwareTask.m_ptr = v15;
    if ( v15 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v15->m_refCount, 1u);
  }
  if ( callback && _InterlockedExchangeAdd((volatile signed __int32 *)callback + 2, 0xFFFFFFFF) == 1 && callback )
    (**(void (__fastcall ***)(_QWORD, __int64))callback)(callback, 1i64);
  pTaskCreateRequest.m_onCompletionCallback = v10;
  pTaskCreateRequest.m_controllerIndex = controllerIndex;
  pTaskCreateRequest.m_appData = payload;
  if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr && (v16 = TaskManager::GetInstance(), TaskManager::CreateTask(v16, &pTaskCreateRequest, &pTaskCreateResult)) )
    v17 = 1;
  else
LABEL_25:
    v17 = 0;
  pTaskCreateRequest.m_onCompletionCallback = NULL;
  pTaskCreateRequest.m_onUpdateCallback = NULL;
  pTaskCreateRequest.m_appSecondaryCallback = NULL;
  pTaskCreateRequest.m_timeoutInSeconds = 0;
  m_asyncInfo = pTaskCreateRequest.m_asyncInfo;
  if ( pTaskCreateRequest.m_asyncInfo )
  {
    pTaskCreateRequest.m_asyncInfo->__abi_Release(pTaskCreateRequest.m_asyncInfo);
    m_asyncInfo = NULL;
    pTaskCreateRequest.m_asyncInfo = NULL;
  }
  if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
    {
      if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
        ((void (__fastcall *)(bdRemoteTask *, __int64))pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->~bdReferencable)(pTaskCreateRequest.m_remoteDemonwareTask.m_ptr, 1i64);
      pTaskCreateRequest.m_remoteDemonwareTask.m_ptr = NULL;
    }
    m_asyncInfo = pTaskCreateRequest.m_asyncInfo;
  }
  if ( m_asyncInfo )
    m_asyncInfo->__abi_Release(m_asyncInfo);
  return v17;
}

