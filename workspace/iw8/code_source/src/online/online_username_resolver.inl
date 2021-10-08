/*
==============
UsernameResolver<1>::XuidCount
==============
*/

unsigned int __fastcall UsernameResolver<1>::XuidCount(UsernameResolver<1> *this)
{
  return ?XuidCount@?$UsernameResolver@$00@@QEBAIXZ(this);
}

/*
==============
UsernameResolver<1>::Clear
==============
*/

void __fastcall UsernameResolver<1>::Clear(UsernameResolver<1> *this)
{
  ?Clear@?$UsernameResolver@$00@@QEAAXXZ(this);
}

/*
==============
UsernameResolver<1>::GetXuid
==============
*/

XUID *__fastcall UsernameResolver<1>::GetXuid(UsernameResolver<1> *this, XUID *result, const unsigned int index)
{
  return ?GetXuid@?$UsernameResolver@$00@@QEBA?AUXUID@@I@Z(this, result, index);
}

/*
==============
UsernameResolver<1>::Send
==============
*/

bool __fastcall UsernameResolver<1>::Send(UsernameResolver<1> *this, TaskCreateRequest *taskRequest)
{
  return ?Send@?$UsernameResolver@$00@@QEAA_NVTaskCreateRequest@@@Z(this, taskRequest);
}

/*
==============
UsernameResolver<1>::GetUsername
==============
*/

void __fastcall UsernameResolver<1>::GetUsername(UsernameResolver<1> *this, const unsigned int index, char *outUsername, unsigned int maxUsernameLength)
{
  ?GetUsername@?$UsernameResolver@$00@@QEBAXIPEADI@Z(this, index, outUsername, maxUsernameLength);
}

/*
==============
UsernameResolver<1>::UsernameResolver<1>
==============
*/

void __fastcall UsernameResolver<1>::UsernameResolver<1>(UsernameResolver<1> *this)
{
  ??0?$UsernameResolver@$00@@QEAA@XZ(this);
}

/*
==============
UsernameResolver<1>::AddXuid
==============
*/

void __fastcall UsernameResolver<1>::AddXuid(UsernameResolver<1> *this, const XUID *xuid)
{
  ?AddXuid@?$UsernameResolver@$00@@QEAAXAEBUXUID@@@Z(this, xuid);
}

/*
==============
UsernameResolver<1>::NumResults
==============
*/

unsigned int __fastcall UsernameResolver<1>::NumResults(UsernameResolver<1> *this)
{
  return ?NumResults@?$UsernameResolver@$00@@QEBAIXZ(this);
}

/*
==============
UsernameResolver<1>::IsFull
==============
*/

bool __fastcall UsernameResolver<1>::IsFull(UsernameResolver<1> *this)
{
  return ?IsFull@?$UsernameResolver@$00@@QEBA_NXZ(this);
}

/*
==============
UsernameResolver<1>::IsBusy
==============
*/

bool __fastcall UsernameResolver<1>::IsBusy(UsernameResolver<1> *this)
{
  return ?IsBusy@?$UsernameResolver@$00@@QEBA_NXZ(this);
}

/*
==============
UsernameResolver<1>::UsernameResolver<1>
==============
*/
void UsernameResolver<1>::UsernameResolver<1>(UsernameResolver<1> *this)
{
  XUID::XUID(this->m_xuids);
  this->m_numXuids = 0;
  this->m_taskId = 0;
  this->m_response = NULL;
}

/*
==============
UsernameResolver<1>::AddXuid
==============
*/
void UsernameResolver<1>::AddXuid(UsernameResolver<1> *this, const XUID *xuid)
{
  __int64 m_numXuids; 

  if ( this->m_numXuids && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_username_resolver.inl", 87, ASSERT_TYPE_SANITY, "( m_numXuids < MAX_REQUESTS )", (const char *)&queryFormat, "m_numXuids < MAX_REQUESTS") )
    __debugbreak();
  if ( this->m_taskId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_username_resolver.inl", 88, ASSERT_TYPE_SANITY, "( !IsBusy() )", (const char *)&queryFormat, "!IsBusy()") )
    __debugbreak();
  m_numXuids = this->m_numXuids;
  this->m_numXuids = m_numXuids + 1;
  XUID::operator=(&this->m_xuids[m_numXuids], xuid);
}

/*
==============
UsernameResolver<1>::Clear
==============
*/
void UsernameResolver<1>::Clear(UsernameResolver<1> *this)
{
  bdGetCrossPlatformUsernamesResponse *m_response; 

  this->m_numXuids = 0;
  this->m_taskId = 0;
  m_response = this->m_response;
  if ( m_response )
    ((void (__fastcall *)(bdGetCrossPlatformUsernamesResponse *, __int64))m_response->~bdRESTResponse)(m_response, 1i64);
  this->m_response = NULL;
}

/*
==============
UsernameResolver<1>::GetUsername
==============
*/
void UsernameResolver<1>::GetUsername(UsernameResolver<1> *this, const unsigned int index, char *outUsername, unsigned int maxUsernameLength)
{
  bdGetCrossPlatformUsernamesResponse *m_response; 
  bdGetCrossPlatformUsernamesResponse *v9; 
  unsigned int v10; 
  bdUserDetails *User; 
  __int64 v12; 

  m_response = this->m_response;
  if ( !m_response || index >= bdGetCrossPlatformUsernamesResponse::getNumUsers(m_response) )
  {
    v9 = this->m_response;
    v10 = v9 ? bdGetCrossPlatformUsernamesResponse::getNumUsers(v9) : 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_username_resolver.inl", 118, ASSERT_TYPE_SANITY, "(unsigned)( index ) < (unsigned)( NumResults() )", "index doesn't index NumResults()\n\t%i not in [0, %i)", index, v10) )
      __debugbreak();
  }
  if ( !outUsername && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_username_resolver.inl", 119, ASSERT_TYPE_SANITY, "( outUsername )", (const char *)&queryFormat, "outUsername") )
    __debugbreak();
  if ( !this->m_response && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_username_resolver.inl", 120, ASSERT_TYPE_SANITY, "( m_response )", (const char *)&queryFormat, "m_response") )
    __debugbreak();
  if ( maxUsernameLength >= 0x61 )
  {
    User = bdGetCrossPlatformUsernamesResponse::getUser(this->m_response, index);
    bdUserDetails::getUsernameWithHash(User, outUsername);
  }
  else
  {
    LODWORD(v12) = maxUsernameLength;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_username_resolver.inl", 124, ASSERT_TYPE_SANITY, (const char *)&queryFormat.fmt + 3, "Insufficent sized buffer passed to %s.  Size is %u, must be at least %u bytes.", "UsernameResolver<1>::GetUsername", v12, 97) )
      __debugbreak();
  }
}

/*
==============
UsernameResolver<1>::GetXuid
==============
*/
XUID *UsernameResolver<1>::GetXuid(UsernameResolver<1> *this, XUID *result, const unsigned int index)
{
  __int64 v3; 
  XUID *v6; 
  int v8; 

  v3 = index;
  if ( index )
  {
    v8 = 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_username_resolver.inl", 96, ASSERT_TYPE_SANITY, "(unsigned)( index ) < (unsigned)( MAX_REQUESTS )", "index doesn't index MAX_REQUESTS\n\t%i not in [0, %i)", index, v8) )
      __debugbreak();
  }
  v6 = result;
  result->m_id = (unsigned __int64)this->m_xuids[v3];
  return v6;
}

/*
==============
UsernameResolver<1>::IsBusy
==============
*/
bool UsernameResolver<1>::IsBusy(UsernameResolver<1> *this)
{
  return this->m_taskId != 0;
}

/*
==============
UsernameResolver<1>::IsFull
==============
*/
bool UsernameResolver<1>::IsFull(UsernameResolver<1> *this)
{
  return this->m_numXuids > 1;
}

/*
==============
UsernameResolver<1>::NumResults
==============
*/
unsigned int UsernameResolver<1>::NumResults(UsernameResolver<1> *this)
{
  bdGetCrossPlatformUsernamesResponse *m_response; 

  m_response = this->m_response;
  if ( m_response )
    return bdGetCrossPlatformUsernamesResponse::getNumUsers(m_response);
  else
    return 0;
}

/*
==============
UsernameResolver<1>::Send
==============
*/
char UsernameResolver<1>::Send(UsernameResolver<1> *this, TaskCreateRequest *taskRequest)
{
  bdRemoteTask *v4; 
  bdGetCrossPlatformUsernamesResponse *v5; 
  DWServicesAccess *Instance; 
  bdLoginResult *LoginResult; 
  const char *AccountType; 
  __int64 v9; 
  unsigned int i; 
  unsigned __int64 UniversalId; 
  DWServicesAccess *v12; 
  DWCrossPlatformIdentity *CrossPlatformIdentity; 
  TaskCreateRequest *CrossPlatformUsernames; 
  bdReference<bdRemoteTask> *p_m_remoteDemonwareTask; 
  __int64 v16; 
  TaskManager *v17; 
  char v18; 
  bdGetCrossPlatformUsernamesResponse *m_response; 
  bdReference<bdRemoteTask> result; 
  TaskCreateResult pTaskCreateResult; 
  __int64 v23; 
  TaskCreateRequest *v24; 
  bdStructFixedSizeArray<bdUserDetails,200> *p_m_users; 
  bdGetCrossPlatformUsernamesRequest request; 
  bdUserAccountID ptr; 

  v23 = -2i64;
  v24 = taskRequest;
  if ( this->m_taskId || this->m_response )
  {
    Com_PrintError(25, "Trying to send username resolve request when one is already in flight.\n");
    goto LABEL_29;
  }
  if ( !this->m_numXuids )
  {
    Com_PrintError(25, "Trying to send username resolve request but the resolver is empty.\n");
LABEL_29:
    TaskCreateRequest::~TaskCreateRequest(taskRequest);
    return 0;
  }
  v4 = (bdRemoteTask *)bdMemory::allocate(0x70B0ui64);
  v5 = (bdGetCrossPlatformUsernamesResponse *)v4;
  result.m_ptr = v4;
  if ( v4 )
  {
    bdRESTResponse::bdRESTResponse((bdRESTResponse *)v4);
    v5->__vftable = (bdGetCrossPlatformUsernamesResponse_vtbl *)&bdGetCrossPlatformUsernamesResponse::`vftable';
    p_m_users = &v5->m_users;
    `eh vector vbase constructor iterator'(&v5->m_users, 0x90ui64, 0xC8ui64, (void (__fastcall *)(void *))bdUserDetails::bdUserDetails, (void (__fastcall *)(void *))bdUserDetails::`vbase destructor);
    v5->m_users.m_size = 0;
  }
  else
  {
    v5 = NULL;
  }
  this->m_response = v5;
  Instance = DWServicesAccess::GetInstance();
  LoginResult = (bdLoginResult *)DWServicesAccess::getLoginResult(Instance, taskRequest->m_controllerIndex);
  AccountType = bdLoginResult::getAccountType(LoginResult);
  `eh vector vbase constructor iterator'(&ptr, 0x48ui64, 1ui64, (void (__fastcall *)(void *))bdUserAccountID::bdUserAccountID, (void (__fastcall *)(void *))bdUserAccountID::`vbase destructor);
  v9 = 0i64;
  for ( i = this->m_numXuids; (unsigned int)v9 < this->m_numXuids; i = this->m_numXuids )
  {
    UniversalId = XUID::GetUniversalId(&this->m_xuids[v9]);
    bdUserAccountID::setUserID(&ptr + v9, UniversalId);
    bdUserAccountID::setAccountType(&ptr + v9, AccountType);
    v9 = (unsigned int)(v9 + 1);
  }
  bdGetCrossPlatformUsernamesRequest::bdGetCrossPlatformUsernamesRequest(&request, i, &ptr);
  v12 = DWServicesAccess::GetInstance();
  CrossPlatformIdentity = DWServicesAccess::GetCrossPlatformIdentity(v12, taskRequest->m_controllerIndex);
  CrossPlatformUsernames = (TaskCreateRequest *)DWCrossPlatformIdentity::getCrossPlatformUsernames(CrossPlatformIdentity, &result, &request, this->m_response);
  p_m_remoteDemonwareTask = &taskRequest->m_remoteDemonwareTask;
  if ( CrossPlatformUsernames != (TaskCreateRequest *)&taskRequest->m_remoteDemonwareTask )
  {
    if ( p_m_remoteDemonwareTask->m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&p_m_remoteDemonwareTask->m_ptr->m_refCount, 0xFFFFFFFF) == 1 && p_m_remoteDemonwareTask->m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))p_m_remoteDemonwareTask->m_ptr->~bdReferencable)(p_m_remoteDemonwareTask->m_ptr, 1i64);
    v16 = *(_QWORD *)&CrossPlatformUsernames->m_controllerIndex;
    p_m_remoteDemonwareTask->m_ptr = *(bdRemoteTask **)&CrossPlatformUsernames->m_controllerIndex;
    if ( v16 )
      _InterlockedExchangeAdd((volatile signed __int32 *)(v16 + 8), 1u);
  }
  if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result.m_ptr )
    ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
  pTaskCreateResult.m_localTaskId = 0;
  pTaskCreateResult.m_task = NULL;
  if ( p_m_remoteDemonwareTask->m_ptr && (v17 = TaskManager::GetInstance(), TaskManager::CreateTask(v17, taskRequest, &pTaskCreateResult)) )
  {
    Com_Printf(25, "Sent username resolve request with %u ids.\n", this->m_numXuids);
    v18 = 1;
    this->m_taskId = pTaskCreateResult.m_localTaskId;
  }
  else
  {
    Com_PrintError(25, "Failed to start username resolve request.\n");
    m_response = this->m_response;
    if ( m_response )
      ((void (__fastcall *)(bdGetCrossPlatformUsernamesResponse *, __int64))m_response->~bdRESTResponse)(m_response, 1i64);
    this->m_response = NULL;
    v18 = 0;
  }
  `eh vector destructor iterator'(request.m_users, 0x48ui64, 0xC8ui64, (void (__fastcall *)(void *))bdUserAccountID::`vbase destructor);
  bdRESTRequest::~bdRESTRequest(&request);
  `eh vector destructor iterator'(&ptr, 0x48ui64, 1ui64, (void (__fastcall *)(void *))bdUserAccountID::`vbase destructor);
  TaskCreateRequest::~TaskCreateRequest(taskRequest);
  return v18;
}

/*
==============
UsernameResolver<1>::XuidCount
==============
*/
__int64 UsernameResolver<1>::XuidCount(UsernameResolver<1> *this)
{
  return this->m_numXuids;
}

