/*
==============
DWUsernameSearch::Search
==============
*/

bool __fastcall DWUsernameSearch::Search(DWUsernameSearch *this, const int controllerIndex, const DWUsernameSearch::SearchRequest *searchRequest)
{
  return ?Search@DWUsernameSearch@@QEAA_NHAEBUSearchRequest@1@@Z(this, controllerIndex, searchRequest);
}

/*
==============
DWUsernameSearch::UserNameSearchComplete
==============
*/

void __fastcall DWUsernameSearch::UserNameSearchComplete(GenericTask *task, eTaskManagerTaskState taskState)
{
  ?UserNameSearchComplete@DWUsernameSearch@@CAXPEAVGenericTask@@W4eTaskManagerTaskState@@@Z(task, taskState);
}

/*
==============
DWUsernameSearch::Cleanup
==============
*/

void __fastcall DWUsernameSearch::Cleanup(DWUsernameSearch *this)
{
  ?Cleanup@DWUsernameSearch@@AEAAXXZ(this);
}

/*
==============
DWUsernameSearch::Cleanup
==============
*/
void DWUsernameSearch::Cleanup(DWUsernameSearch *this)
{
  bdCrossPlatformUser *m_results; 
  bdGetCrossPlatformUserSearchResponse *m_response; 

  m_results = this->m_results;
  if ( m_results )
  {
    bdMemory::deallocate(m_results);
    this->m_results = NULL;
  }
  m_response = this->m_response;
  if ( m_response )
  {
    ((void (__fastcall *)(bdGetCrossPlatformUserSearchResponse *, __int64))m_response->~bdRESTResponse)(m_response, 1i64);
    this->m_response = NULL;
  }
  this->m_maxResults = 0;
  this->m_callback = NULL;
  this->m_state[0] = 0;
}

/*
==============
DWUsernameSearch::Search
==============
*/
char DWUsernameSearch::Search(DWUsernameSearch *this, const int controllerIndex, const DWUsernameSearch::SearchRequest *searchRequest)
{
  unsigned __int64 maxResults; 
  __int64 v8; 
  bdRemoteTask *v9; 
  bdCrossPlatformUser *v10; 
  bdCrossPlatformUser *i; 
  bdRemoteTask *v12; 
  bdGetCrossPlatformUserSearchResponse *v13; 
  DWServicesAccess *Instance; 
  const char *ClientID; 
  DWServicesAccess *v16; 
  bdLoginResult *LoginResult; 
  const bdUmbrellaCrossplayAccessInfo *CrossplayAccessInfo; 
  DWServicesAccess *v19; 
  DWCrossPlatformIdentity *CrossPlatformIdentity; 
  TaskCreateRequest *v21; 
  bdRemoteTask *v22; 
  TaskManager *v23; 
  const char *v24; 
  char v25; 
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  __int64 v27; 
  bdReference<bdRemoteTask> result; 
  TaskCreateRequest pTaskCreateRequest; 
  __int64 v30; 
  TaskCreateResult pTaskCreateResult; 
  bdGetCrossPlatformUserSearchRequest request; 

  v30 = -2i64;
  if ( this->m_state[0] )
    return 0;
  if ( this->m_results && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwusernamesearch.cpp", 21, ASSERT_TYPE_SANITY, "( m_results == nullptr )", (const char *)&queryFormat, "m_results == nullptr") )
    __debugbreak();
  if ( this->m_response && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwusernamesearch.cpp", 22, ASSERT_TYPE_SANITY, "( m_response == nullptr )", (const char *)&queryFormat, "m_response == nullptr") )
    __debugbreak();
  if ( (unsigned int)controllerIndex >= 8 )
  {
    LODWORD(v27) = controllerIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwusernamesearch.cpp", 23, ASSERT_TYPE_SANITY, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v27, 8) )
      __debugbreak();
  }
  if ( !searchRequest->username && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwusernamesearch.cpp", 24, ASSERT_TYPE_SANITY, "( searchRequest.username != nullptr )", (const char *)&queryFormat, "searchRequest.username != nullptr") )
    __debugbreak();
  if ( !searchRequest->accountProvider && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwusernamesearch.cpp", 25, ASSERT_TYPE_SANITY, "( searchRequest.accountProvider != nullptr )", (const char *)&queryFormat, "searchRequest.accountProvider != nullptr") )
    __debugbreak();
  if ( !searchRequest->callback && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwusernamesearch.cpp", 26, ASSERT_TYPE_SANITY, "( searchRequest.callback != nullptr )", (const char *)&queryFormat, "searchRequest.callback != nullptr") )
    __debugbreak();
  if ( !searchRequest->maxResults && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwusernamesearch.cpp", 27, ASSERT_TYPE_SANITY, "( searchRequest.maxResults > 0 )", (const char *)&queryFormat, "searchRequest.maxResults > 0") )
    __debugbreak();
  maxResults = searchRequest->maxResults;
  this->m_maxResults = maxResults;
  this->m_callback = searchRequest->callback;
  v8 = (unsigned int)maxResults;
  v9 = (bdRemoteTask *)bdMemory::allocate(saturated_mul(maxResults, 0x1488ui64));
  v10 = (bdCrossPlatformUser *)v9;
  result.m_ptr = v9;
  if ( v9 )
  {
    for ( i = (bdCrossPlatformUser *)v9; v8; --v8 )
      bdCrossPlatformUser::bdCrossPlatformUser(i++);
  }
  else
  {
    v10 = NULL;
  }
  this->m_results = v10;
  v12 = (bdRemoteTask *)bdMemory::allocate(0x38ui64);
  result.m_ptr = v12;
  if ( v12 )
    bdGetCrossPlatformUserSearchResponse::bdGetCrossPlatformUserSearchResponse((bdGetCrossPlatformUserSearchResponse *)v12, this->m_results, this->m_maxResults);
  else
    v13 = NULL;
  this->m_response = v13;
  bdGetCrossPlatformUserSearchRequest::bdGetCrossPlatformUserSearchRequest(&request);
  bdGetCrossPlatformUserSearchRequest::setUserName(&request, searchRequest->username);
  bdGetCrossPlatformUserSearchRequest::setProvider(&request, searchRequest->accountProvider);
  bdGetCrossPlatformUserSearchRequest::setIsSubstringSearch(&request, searchRequest->subStringSearch);
  Instance = DWServicesAccess::GetInstance();
  ClientID = DWServicesAccess::GetClientID(Instance);
  bdGetCrossPlatformUserSearchRequest::setClient(&request, ClientID);
  v16 = DWServicesAccess::GetInstance();
  LoginResult = (bdLoginResult *)DWServicesAccess::getLoginResult(v16, controllerIndex);
  CrossplayAccessInfo = bdLoginResult::getCrossplayAccessInfo(LoginResult);
  bdGetCrossPlatformUserSearchRequest::setAuthToken(&request, CrossplayAccessInfo->m_accessToken);
  pTaskCreateRequest.m_appTaskType = -1;
  memset(&pTaskCreateRequest.m_appSecondaryCallback, 0, 24);
  pTaskCreateRequest.m_onUpdateCallback = NULL;
  pTaskCreateRequest.m_cancelTaskOnSignoutEvent = 1;
  pTaskCreateRequest.m_timeoutInSeconds = 0;
  pTaskCreateRequest.m_onCompletionCallback = DWUsernameSearch::UserNameSearchComplete;
  pTaskCreateRequest.m_appData = this;
  pTaskCreateRequest.m_controllerIndex = controllerIndex;
  v19 = DWServicesAccess::GetInstance();
  CrossPlatformIdentity = DWServicesAccess::GetCrossPlatformIdentity(v19, controllerIndex);
  v21 = (TaskCreateRequest *)DWCrossPlatformIdentity::usernameSearch(CrossPlatformIdentity, &result, &request, this->m_response);
  if ( v21 != (TaskCreateRequest *)&pTaskCreateRequest.m_remoteDemonwareTask )
  {
    if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->~bdReferencable)(pTaskCreateRequest.m_remoteDemonwareTask.m_ptr, 1i64);
    v22 = *(bdRemoteTask **)&v21->m_controllerIndex;
    pTaskCreateRequest.m_remoteDemonwareTask.m_ptr = v22;
    if ( v22 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v22->m_refCount, 1u);
  }
  if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result.m_ptr )
    ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
  pTaskCreateResult.m_localTaskId = 0;
  pTaskCreateResult.m_task = NULL;
  if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr && (v23 = TaskManager::GetInstance(), TaskManager::CreateTask(v23, &pTaskCreateRequest, &pTaskCreateResult)) )
  {
    v24 = "false";
    if ( searchRequest->subStringSearch )
      v24 = "true";
    Com_Printf(25, "Starting DW Username Search for controller(%u) on user(%s-%s), substringSearch(%s).\n", (unsigned int)controllerIndex, searchRequest->username, searchRequest->accountProvider, v24);
    this->m_state[0] = 1;
    v25 = 1;
  }
  else
  {
    Com_PrintError(25, "Failed to start DW Username Search.\n");
    v25 = 0;
  }
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
  bdRESTRequest::~bdRESTRequest(&request);
  return v25;
}

/*
==============
DWUsernameSearch::UserNameSearchComplete
==============
*/
void DWUsernameSearch::UserNameSearchComplete(GenericTask *task, eTaskManagerTaskState taskState)
{
  _BYTE *m_appData; 
  __int64 NumUsers; 
  const char *v6; 
  void (__fastcall *v7)(_QWORD, __int64, _QWORD, _QWORD); 
  unsigned int v8; 
  __int64 v9; 
  void *v10; 
  void (__fastcall ***v11)(_QWORD, __int64); 

  m_appData = task->m_appData;
  if ( (_BYTE *)((unsigned __int64)(m_appData + 7) & 0xFFFFFFFFFFFFFFF8ui64) != m_appData && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 300, ASSERT_TYPE_ASSERT, "( I_align( addr, dest_align ) == addr )", "src pointer %p must be aligned to %llu to cast to this type", m_appData, 8i64) )
    __debugbreak();
  if ( !m_appData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwusernamesearch.cpp", 89, ASSERT_TYPE_SANITY, "( search != nullptr )", (const char *)&queryFormat, "search != nullptr") )
    __debugbreak();
  if ( !*((_QWORD *)m_appData + 4) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwusernamesearch.cpp", 90, ASSERT_TYPE_SANITY, "( search->m_callback != nullptr )", (const char *)&queryFormat, "search->m_callback != nullptr") )
    __debugbreak();
  *m_appData = 2;
  NumUsers = bdGetCrossPlatformUserSearchResponse::getNumUsers(*((bdGetCrossPlatformUserSearchResponse **)m_appData + 3));
  v6 = "failure";
  if ( taskState == TASKSTATE_SUCCESS )
    v6 = "success";
  Com_Printf(25, "DW Username Search Completed with %s.  Returned %u results.\n", v6, NumUsers);
  if ( taskState )
  {
    if ( (unsigned int)(taskState - 1) <= 1 )
      (*((void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))m_appData + 4))((unsigned int)task->m_controllerIndex, 0i64, 0i64, 0i64);
  }
  else
  {
    v7 = (void (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD))*((_QWORD *)m_appData + 4);
    v8 = bdGetCrossPlatformUserSearchResponse::getNumUsers(*((bdGetCrossPlatformUserSearchResponse **)m_appData + 3));
    LOBYTE(v9) = 1;
    v7((unsigned int)task->m_controllerIndex, v9, *((_QWORD *)m_appData + 1), v8);
  }
  v10 = (void *)*((_QWORD *)m_appData + 1);
  if ( v10 )
  {
    bdMemory::deallocate(v10);
    *((_QWORD *)m_appData + 1) = 0i64;
  }
  v11 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)m_appData + 3);
  if ( v11 )
  {
    (**v11)(v11, 1i64);
    *((_QWORD *)m_appData + 3) = 0i64;
  }
  *((_DWORD *)m_appData + 4) = 0;
  *((_QWORD *)m_appData + 4) = 0i64;
  *m_appData = 0;
}

