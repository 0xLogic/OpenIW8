/*
==============
dwUserIdMap_ResolveUniversalIds
==============
*/

bool __fastcall dwUserIdMap_ResolveUniversalIds(TaskCreateRequest *request, TaskCreateResult *result, const unsigned __int64 *platformIds, const unsigned int numPlatformIds, XUID *resultXuids, unsigned int *numResults)
{
  return ?dwUserIdMap_ResolveUniversalIds@@YA_NPEAVTaskCreateRequest@@PEAVTaskCreateResult@@PEB_KIPEAUXUID@@PEAI@Z(request, result, platformIds, numPlatformIds, resultXuids, numResults);
}

/*
==============
ResolveUniversalIdsRequest::ResolveUniversalIdsRequest
==============
*/

void __fastcall ResolveUniversalIdsRequest::ResolveUniversalIdsRequest(ResolveUniversalIdsRequest *this)
{
  ??0ResolveUniversalIdsRequest@@QEAA@XZ(this);
}

/*
==============
ResolvePlatformIdsRequest::ResolvePlatformIdsRequest
==============
*/

void __fastcall ResolvePlatformIdsRequest::ResolvePlatformIdsRequest(ResolvePlatformIdsRequest *this)
{
  ??0ResolvePlatformIdsRequest@@QEAA@XZ(this);
}

/*
==============
dwUserIdMap_ResolvePlatformIds
==============
*/

bool __fastcall dwUserIdMap_ResolvePlatformIds(TaskCreateRequest *request, TaskCreateResult *result, const XUID *xuids, const unsigned int numXuids, unsigned __int64 *resultPlatformIds, unsigned int *numResults)
{
  return ?dwUserIdMap_ResolvePlatformIds@@YA_NPEAVTaskCreateRequest@@PEAVTaskCreateResult@@PEBUXUID@@IPEA_KPEAI@Z(request, result, xuids, numXuids, resultPlatformIds, numResults);
}

/*
==============
ResolvePlatformIdsRequest::ResolvePlatformIdsRequest
==============
*/
void ResolvePlatformIdsRequest::ResolvePlatformIdsRequest(ResolvePlatformIdsRequest *this)
{
  this->taskId = 0;
}

/*
==============
ResolveUniversalIdsRequest::ResolveUniversalIdsRequest
==============
*/
void ResolveUniversalIdsRequest::ResolveUniversalIdsRequest(ResolveUniversalIdsRequest *this)
{
  this->taskId = 0;
}

/*
==============
ResolvePlatformIdsCallback
==============
*/
void ResolvePlatformIdsCallback(GenericTask *task, eTaskManagerTaskState taskState)
{
  ResolvePlatformIdsRequest *v2; 
  eTaskManagerTaskState v3; 
  bdGetPlatformUserIDsResponse *response; 
  unsigned int v5; 
  unsigned int NumUsers; 
  __int64 v7; 
  bdCrossPlatformIdentityMappedUser *MappedUser; 
  char ClientPlatform; 
  const char *v10; 
  __int64 v11; 
  const char *AccountType; 
  signed __int64 v13; 
  char v14; 
  __int64 v15; 
  char v16; 
  unsigned __int64 UserID; 
  bdGetPlatformUserIDsResponse *v18; 
  __int64 v19; 
  bdGetPlatformUserIDsResponse *v20; 
  ResolvePlatformIdsRequest *v23; 
  unsigned __int64 *resultPlatformIds; 

  v2 = s_platformIdRequests;
  v23 = s_platformIdRequests;
  v3 = taskState;
  while ( v2->taskId != task->m_localTaskId )
  {
    v23 = ++v2;
    if ( (__int64)v2 >= (__int64)&unk_14908F7A0 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwuseridlookup.cpp", 150, ASSERT_TYPE_SANITY, (const char *)&queryFormat.fmt + 3, "Received DW Resolve Platform Id result with no matching request.") )
        __debugbreak();
      return;
    }
  }
  if ( taskState == TASKSTATE_SUCCESS )
  {
    response = v2->response;
    v20 = response;
    resultPlatformIds = v2->resultPlatformIds;
    v5 = 0;
    NumUsers = bdGetPlatformUserIDsResponse::getNumUsers(response);
    *v2->numResults = NumUsers;
    if ( NumUsers )
    {
      v7 = 0i64;
      do
      {
        MappedUser = bdGetPlatformUserIDsResponse::getMappedUser(response, v5);
        if ( bdCrossPlatformIdentityMappedUser::isValid(MappedUser) )
        {
          ClientPlatform = GetClientPlatform();
          switch ( ClientPlatform )
          {
            case 1:
              v10 = "steam";
              break;
            case 2:
              v10 = "bnet";
              break;
            case 3:
              v10 = "xbl";
              break;
            case 4:
              v10 = "psn";
              break;
            case 5:
              v10 = "wecn";
              break;
            default:
              v10 = NULL;
              break;
          }
          v11 = 0x7FFFFFFFi64;
          AccountType = bdCrossPlatformIdentityMappedUser::getAccountType(MappedUser);
          if ( !AccountType && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
            __debugbreak();
          if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
            __debugbreak();
          v13 = AccountType - v10;
          do
          {
            v14 = v10[v13];
            v15 = v11;
            v16 = *v10++;
            --v11;
            if ( !v15 )
              break;
            if ( v14 != v16 )
            {
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwuseridlookup.cpp", 133, ASSERT_TYPE_SANITY, "( I_streq( mappedUser.getAccountType(), dwPlatformTypes_GetLocalAccountTypeString() ) )", (const char *)&queryFormat, "I_streq( mappedUser.getAccountType(), dwPlatformTypes_GetLocalAccountTypeString() )") )
                __debugbreak();
              break;
            }
          }
          while ( v14 );
          UserID = bdCrossPlatformIdentityMappedUser::getUserID(MappedUser);
          response = v20;
        }
        else
        {
          UserID = 0i64;
        }
        resultPlatformIds[v7] = UserID;
        ++v5;
        ++v7;
      }
      while ( v5 < NumUsers );
      v2 = v23;
      v3 = taskState;
    }
  }
  v2->callback(task, v3);
  v18 = v2->response;
  if ( v18 )
  {
    v19 = *(int *)(*((_QWORD *)&v18->__vftable + 1) + 4i64);
    (**(void (__fastcall ***)(__int64, __int64))((char *)&v18->__vftable + v19 + 8))((__int64)&v18->__vftable + v19 + 8, 1i64);
    v2->response = NULL;
  }
  v2->taskId = 0;
}

/*
==============
ResolveUniversalIdsCallback
==============
*/
void ResolveUniversalIdsCallback(GenericTask *task, eTaskManagerTaskState taskState)
{
  ResolveUniversalIdsRequest *v2; 
  GenericTask *v3; 
  eTaskManagerTaskState v4; 
  bdGetCrossPlatformUserIDsResponse *response; 
  XUID *resultXuids; 
  unsigned int v7; 
  unsigned int NumUsers; 
  bdCrossPlatformIdentityMappedUser *MappedUser; 
  DWServicesAccess *Instance; 
  __int64 v11; 
  bdLoginResult *LoginResult; 
  const char *AccountType; 
  const char *v14; 
  signed __int64 v15; 
  char v16; 
  __int64 v17; 
  char v18; 
  unsigned __int64 UserID; 
  const XUID *v20; 
  const XUID *v21; 
  bdGetCrossPlatformUserIDsResponse *v22; 
  __int64 v23; 
  XUID result; 
  XUID v25; 
  ResolveUniversalIdsRequest *v28; 
  bdGetCrossPlatformUserIDsResponse *v29; 

  v2 = s_universalIdRequests;
  v3 = task;
  v28 = s_universalIdRequests;
  v4 = taskState;
  while ( v2->taskId != task->m_localTaskId )
  {
    v28 = ++v2;
    if ( (__int64)v2 >= (__int64)s_platformIdRequests )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwuseridlookup.cpp", 108, ASSERT_TYPE_SANITY, (const char *)&queryFormat.fmt + 3, "Received DW Resolve Universal Id result with no matching request.") )
        __debugbreak();
      return;
    }
  }
  if ( taskState == TASKSTATE_SUCCESS )
  {
    response = v2->response;
    resultXuids = v2->resultXuids;
    v29 = response;
    v7 = 0;
    NumUsers = bdGetCrossPlatformUserIDsResponse::getNumUsers(response);
    *v2->numResults = NumUsers;
    if ( NumUsers )
    {
      do
      {
        MappedUser = bdGetCrossPlatformUserIDsResponse::getMappedUser(response, v7);
        if ( bdCrossPlatformIdentityMappedUser::isValid(MappedUser) )
        {
          Instance = DWServicesAccess::GetInstance();
          v11 = 0x7FFFFFFFi64;
          LoginResult = (bdLoginResult *)DWServicesAccess::getLoginResult(Instance, task->m_controllerIndex);
          AccountType = bdLoginResult::getAccountType(LoginResult);
          v14 = bdCrossPlatformIdentityMappedUser::getAccountType(MappedUser);
          if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
            __debugbreak();
          if ( !AccountType && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
            __debugbreak();
          v15 = v14 - AccountType;
          do
          {
            v16 = AccountType[v15];
            v17 = v11;
            v18 = *AccountType++;
            --v11;
            if ( !v17 )
              break;
            if ( v16 != v18 )
            {
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwuseridlookup.cpp", 91, ASSERT_TYPE_SANITY, "( I_streq( mappedUser.getAccountType(), DWServicesAccess::GetInstance().getLoginResult( task->m_controllerIndex ).getAccountType() ) )", (const char *)&queryFormat, "I_streq( mappedUser.getAccountType(), DWServicesAccess::GetInstance().getLoginResult( task->m_controllerIndex ).getAccountType() )") )
                __debugbreak();
              break;
            }
          }
          while ( v16 );
          UserID = bdCrossPlatformIdentityMappedUser::getUserID(MappedUser);
          v20 = XUID::FromUniversalId(&result, UserID);
          XUID::operator=(resultXuids, v20);
          response = v29;
        }
        else
        {
          v21 = XUID::NullXUID(&v25);
          XUID::operator=(resultXuids, v21);
        }
        ++v7;
        ++resultXuids;
      }
      while ( v7 < NumUsers );
      v2 = v28;
      v3 = task;
      v4 = taskState;
    }
  }
  v2->callback(v3, v4);
  v22 = v2->response;
  if ( v22 )
  {
    v23 = *(int *)(*((_QWORD *)&v22->__vftable + 1) + 4i64);
    (**(void (__fastcall ***)(__int64, __int64))((char *)&v22->__vftable + v23 + 8))((__int64)&v22->__vftable + v23 + 8, 1i64);
    v2->response = NULL;
  }
  v2->taskId = 0;
}

/*
==============
dwUserIdMap_ResolvePlatformIds
==============
*/
__int64 dwUserIdMap_ResolvePlatformIds(TaskCreateRequest *request, TaskCreateResult *result, const XUID *xuids, const unsigned int numXuids, unsigned __int64 *resultPlatformIds, unsigned int *numResults)
{
  __int64 v6; 
  unsigned __int64 *v10; 
  unsigned int *v11; 
  DWServicesAccess *Instance; 
  bdLoginResult *LoginResult; 
  const char *AccountType; 
  unsigned __int64 *p_m_userID; 
  char *bytes_20; 
  __int64 v17; 
  int v18; 
  int *p_taskId; 
  unsigned __int8 v20; 
  ResolvePlatformIdsRequest *v21; 
  bdRemoteTask *v22; 
  bdGetPlatformUserIDsResponse *v23; 
  DWServicesAccess *v24; 
  DWCrossPlatformIdentity *CrossPlatformIdentity; 
  const bdReference<bdRemoteTask> *PlatformUserIDs; 
  TaskManager *v27; 
  bdGetPlatformUserIDsResponse *response; 
  void (__fastcall ***v29)(_QWORD, __int64); 
  __int64 v31; 
  bdReference<bdRemoteTask> resulta; 
  __int64 v33; 
  bdGetPlatformUserIDsRequest requesta; 
  bdUserAccountID ptr[200]; 

  v33 = -2i64;
  v6 = numXuids;
  if ( !request && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwuseridlookup.cpp", 219, ASSERT_TYPE_SANITY, "( request )", (const char *)&queryFormat, "request") )
    __debugbreak();
  if ( !result && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwuseridlookup.cpp", 220, ASSERT_TYPE_SANITY, "( result )", (const char *)&queryFormat, "result") )
    __debugbreak();
  if ( !xuids && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwuseridlookup.cpp", 221, ASSERT_TYPE_SANITY, "( xuids )", (const char *)&queryFormat, "xuids") )
    __debugbreak();
  v10 = resultPlatformIds;
  if ( !resultPlatformIds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwuseridlookup.cpp", 222, ASSERT_TYPE_SANITY, "( resultPlatformIds )", (const char *)&queryFormat, "resultPlatformIds") )
    __debugbreak();
  v11 = numResults;
  if ( !numResults && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwuseridlookup.cpp", 223, ASSERT_TYPE_SANITY, "( numResults )", (const char *)&queryFormat, "numResults") )
    __debugbreak();
  if ( (unsigned int)v6 > 0xC8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwuseridlookup.cpp", 224, ASSERT_TYPE_SANITY, "( numXuids <= (200u) )", (const char *)&queryFormat, "numXuids <= BD_CROSS_PLATFORM_IDENTITY_MAX_NUM_USERS") )
    __debugbreak();
  `eh vector vbase constructor iterator'(ptr, 0x48ui64, 0xC8ui64, (void (__fastcall *)(void *))bdUserAccountID::bdUserAccountID, (void (__fastcall *)(void *))bdUserAccountID::`vbase destructor);
  Instance = DWServicesAccess::GetInstance();
  LoginResult = (bdLoginResult *)DWServicesAccess::getLoginResult(Instance, request->m_controllerIndex);
  AccountType = bdLoginResult::getAccountType(LoginResult);
  if ( (_DWORD)v6 )
  {
    p_m_userID = &ptr[0].m_userID;
    bytes_20 = ptr[0]._bytes_20;
    v17 = v6;
    do
    {
      *p_m_userID = XUID::GetUniversalId((XUID *)xuids);
      Core_strcpy(bytes_20, 0xAui64, AccountType);
      ++xuids;
      bytes_20 += 72;
      p_m_userID += 9;
      --v17;
    }
    while ( v17 );
    v11 = numResults;
    v10 = resultPlatformIds;
  }
  v18 = 0;
  p_taskId = &s_platformIdRequests[0].taskId;
  do
  {
    if ( !*p_taskId )
      break;
    ++v18;
    p_taskId += 10;
  }
  while ( (__int64)p_taskId < (__int64)&unk_14908F7B8 );
  if ( v18 < 1 )
  {
    v21 = &s_platformIdRequests[v18];
    v21->callback = request->m_onCompletionCallback;
    request->m_onCompletionCallback = ResolvePlatformIdsCallback;
    if ( v21->response && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwuseridlookup.cpp", 254, ASSERT_TYPE_SANITY, "( requestStruct->response == nullptr )", (const char *)&queryFormat, "requestStruct->response == nullptr") )
      __debugbreak();
    v22 = (bdRemoteTask *)bdMemory::allocate(0x44E8ui64);
    resulta.m_ptr = v22;
    if ( v22 )
      bdGetPlatformUserIDsResponse::bdGetPlatformUserIDsResponse((bdGetPlatformUserIDsResponse *)v22);
    else
      v23 = NULL;
    v21->response = v23;
    bdGetPlatformUserIDsRequest::bdGetPlatformUserIDsRequest(&requesta, v6, ptr);
    v24 = DWServicesAccess::GetInstance();
    CrossPlatformIdentity = DWServicesAccess::GetCrossPlatformIdentity(v24, request->m_controllerIndex);
    PlatformUserIDs = DWCrossPlatformIdentity::getPlatformUserIDs(CrossPlatformIdentity, &resulta, &requesta, v21->response);
    bdReference<bdRemoteTask>::operator=(&request->m_remoteDemonwareTask, PlatformUserIDs);
    if ( resulta.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
    if ( request->m_remoteDemonwareTask.m_ptr && (v27 = TaskManager::GetInstance(), TaskManager::CreateTask(v27, request, result)) )
    {
      Com_Printf(25, "Starting DW Resolve Platform Id's task with %u ids.\n", (unsigned int)v6);
      v21->taskId = result->m_localTaskId;
      v21->resultPlatformIds = v10;
      v21->numResults = v11;
      v20 = 1;
    }
    else
    {
      Com_PrintError(25, "Failed to start DW Resolve Platform Id's task.\n");
      response = v21->response;
      if ( response )
      {
        v29 = (void (__fastcall ***)(_QWORD, __int64))((char *)&response->__vftable + *(int *)(*((_QWORD *)&response->__vftable + 1) + 4i64) + 8);
        (**v29)(v29, 1i64);
        v21->response = NULL;
      }
      v21->taskId = 0;
      v20 = 0;
    }
    `eh vector destructor iterator'(&requesta.__vftable + 2, 0x58ui64, 0xC8ui64, (void (__fastcall *)(void *))bdStructUserAccountID::`vbase destructor);
    bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&requesta.__vftable + 2));
    bdReferencable::~bdReferencable((bdReferencable *)requesta.gap44D8);
  }
  else
  {
    LODWORD(v31) = 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwuseridlookup.cpp", 245, ASSERT_TYPE_SANITY, (const char *)&queryFormat.fmt + 3, "Not enough concurrent DW Resolve Platform Id tasks available, max(%u).", v31) )
      __debugbreak();
    v20 = 0;
  }
  `eh vector destructor iterator'(ptr, 0x48ui64, 0xC8ui64, (void (__fastcall *)(void *))bdUserAccountID::`vbase destructor);
  return v20;
}

/*
==============
dwUserIdMap_ResolveUniversalIds
==============
*/
__int64 dwUserIdMap_ResolveUniversalIds(TaskCreateRequest *request, TaskCreateResult *result, const unsigned __int64 *platformIds, const unsigned int numPlatformIds, XUID *resultXuids, unsigned int *numResults)
{
  __int64 v6; 
  XUID *v10; 
  unsigned int *v11; 
  const char *LocalAccountTypeString; 
  unsigned __int64 *p_m_userID; 
  char *bytes_20; 
  __int64 v15; 
  int v16; 
  int *p_taskId; 
  unsigned __int8 v18; 
  ResolveUniversalIdsRequest *v19; 
  bdRemoteTask *v20; 
  bdGetCrossPlatformUserIDsResponse *v21; 
  DWServicesAccess *Instance; 
  DWCrossPlatformIdentity *CrossPlatformIdentity; 
  const bdReference<bdRemoteTask> *CrossPlatformUserIDs; 
  TaskManager *v25; 
  bdGetCrossPlatformUserIDsResponse *response; 
  void (__fastcall ***v27)(_QWORD, __int64); 
  __int64 v29; 
  bdReference<bdRemoteTask> resulta; 
  __int64 v31; 
  bdGetCrossPlatformUserIDsRequest requesta; 
  bdUserAccountID ptr[200]; 

  v31 = -2i64;
  v6 = numPlatformIds;
  if ( !request && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwuseridlookup.cpp", 156, ASSERT_TYPE_SANITY, "( request )", (const char *)&queryFormat, "request") )
    __debugbreak();
  if ( !result && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwuseridlookup.cpp", 157, ASSERT_TYPE_SANITY, "( result )", (const char *)&queryFormat, "result") )
    __debugbreak();
  if ( !platformIds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwuseridlookup.cpp", 158, ASSERT_TYPE_SANITY, "( platformIds )", (const char *)&queryFormat, "platformIds") )
    __debugbreak();
  v10 = resultXuids;
  if ( !resultXuids && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwuseridlookup.cpp", 159, ASSERT_TYPE_SANITY, "( resultXuids )", (const char *)&queryFormat, "resultXuids") )
    __debugbreak();
  v11 = numResults;
  if ( !numResults && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwuseridlookup.cpp", 160, ASSERT_TYPE_SANITY, "( numResults )", (const char *)&queryFormat, "numResults") )
    __debugbreak();
  if ( (unsigned int)v6 > 0xC8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwuseridlookup.cpp", 161, ASSERT_TYPE_SANITY, "( numPlatformIds <= (200u) )", (const char *)&queryFormat, "numPlatformIds <= BD_CROSS_PLATFORM_IDENTITY_MAX_NUM_USERS") )
    __debugbreak();
  LocalAccountTypeString = dwPlatformTypes_GetLocalAccountTypeString();
  `eh vector vbase constructor iterator'(ptr, 0x48ui64, 0xC8ui64, (void (__fastcall *)(void *))bdUserAccountID::bdUserAccountID, (void (__fastcall *)(void *))bdUserAccountID::`vbase destructor);
  if ( (_DWORD)v6 )
  {
    p_m_userID = &ptr[0].m_userID;
    bytes_20 = ptr[0]._bytes_20;
    v15 = v6;
    do
    {
      *p_m_userID = *platformIds;
      Core_strcpy(bytes_20, 0xAui64, LocalAccountTypeString);
      bytes_20 += 72;
      ++platformIds;
      p_m_userID += 9;
      --v15;
    }
    while ( v15 );
    v11 = numResults;
    v10 = resultXuids;
  }
  v16 = 0;
  p_taskId = &s_universalIdRequests[0].taskId;
  do
  {
    if ( !*p_taskId )
      break;
    ++v16;
    p_taskId += 10;
  }
  while ( (__int64)p_taskId < (__int64)&s_platformIdRequests[0].taskId );
  if ( v16 < 3 )
  {
    v19 = &s_universalIdRequests[v16];
    v19->callback = request->m_onCompletionCallback;
    request->m_onCompletionCallback = ResolveUniversalIdsCallback;
    if ( v19->response && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwuseridlookup.cpp", 192, ASSERT_TYPE_SANITY, "( requestStruct->response == nullptr )", (const char *)&queryFormat, "requestStruct->response == nullptr") )
      __debugbreak();
    v20 = (bdRemoteTask *)bdMemory::allocate(0x44E8ui64);
    resulta.m_ptr = v20;
    if ( v20 )
      bdGetCrossPlatformUserIDsResponse::bdGetCrossPlatformUserIDsResponse((bdGetCrossPlatformUserIDsResponse *)v20);
    else
      v21 = NULL;
    v19->response = v21;
    bdGetCrossPlatformUserIDsRequest::bdGetCrossPlatformUserIDsRequest(&requesta, v6, ptr);
    Instance = DWServicesAccess::GetInstance();
    CrossPlatformIdentity = DWServicesAccess::GetCrossPlatformIdentity(Instance, request->m_controllerIndex);
    CrossPlatformUserIDs = DWCrossPlatformIdentity::getCrossPlatformUserIDs(CrossPlatformIdentity, &resulta, &requesta, v19->response);
    bdReference<bdRemoteTask>::operator=(&request->m_remoteDemonwareTask, CrossPlatformUserIDs);
    if ( resulta.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
    if ( request->m_remoteDemonwareTask.m_ptr && (v25 = TaskManager::GetInstance(), TaskManager::CreateTask(v25, request, result)) )
    {
      Com_Printf(25, "Starting DW Resolve Universal Id's task with %u ids.\n", (unsigned int)v6);
      v19->taskId = result->m_localTaskId;
      v19->resultXuids = v10;
      v19->numResults = v11;
      v18 = 1;
    }
    else
    {
      Com_PrintError(25, "Failed to start DW Resolve Universal Id's task.\n");
      response = v19->response;
      if ( response )
      {
        v27 = (void (__fastcall ***)(_QWORD, __int64))((char *)&response->__vftable + *(int *)(*((_QWORD *)&response->__vftable + 1) + 4i64) + 8);
        (**v27)(v27, 1i64);
        v19->response = NULL;
      }
      v19->taskId = 0;
      v18 = 0;
    }
    `eh vector destructor iterator'(&requesta.__vftable + 2, 0x58ui64, 0xC8ui64, (void (__fastcall *)(void *))bdStructUserAccountID::`vbase destructor);
    bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&requesta.__vftable + 2));
    bdReferencable::~bdReferencable((bdReferencable *)requesta.gap44D8);
  }
  else
  {
    LODWORD(v29) = 3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwuseridlookup.cpp", 183, ASSERT_TYPE_SANITY, (const char *)&queryFormat.fmt + 3, "Not enough concurrent DW Resolve Universal Id tasks available, max(%u).", v29) )
      __debugbreak();
    v18 = 0;
  }
  `eh vector destructor iterator'(ptr, 0x48ui64, 0xC8ui64, (void (__fastcall *)(void *))bdUserAccountID::`vbase destructor);
  return v18;
}

