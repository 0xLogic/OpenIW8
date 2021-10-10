/*
==============
PlatformBlocklist::RemovePlayer
==============
*/

void __fastcall PlatformBlocklist::RemovePlayer(PlatformBlocklist *this, const unsigned __int64 platformId)
{
  ?RemovePlayer@PlatformBlocklist@@QEAAX_K@Z(this, platformId);
}

/*
==============
PlatformBlocklist::ControllerFrame
==============
*/

void __fastcall PlatformBlocklist::ControllerFrame(PlatformBlocklist *this, const int controllerIndex)
{
  ?ControllerFrame@PlatformBlocklist@@QEAAXH@Z(this, controllerIndex);
}

/*
==============
PlatformBlocklist::FetchXUIDsComplete
==============
*/

void __fastcall PlatformBlocklist::FetchXUIDsComplete(GenericTask *task, eTaskManagerTaskState state)
{
  ?FetchXUIDsComplete@PlatformBlocklist@@CAXPEAVGenericTask@@W4eTaskManagerTaskState@@@Z(task, state);
}

/*
==============
PlatformBlocklist::ClearErrors
==============
*/

void __fastcall PlatformBlocklist::ClearErrors(PlatformBlocklist *this)
{
  ?ClearErrors@PlatformBlocklist@@AEAAXXZ(this);
}

/*
==============
PlatformBlocklist::Clear
==============
*/

void __fastcall PlatformBlocklist::Clear(PlatformBlocklist *this)
{
  ?Clear@PlatformBlocklist@@QEAAXXZ(this);
}

/*
==============
PlatformBlocklist::FetchXUIDs
==============
*/

void __fastcall PlatformBlocklist::FetchXUIDs(PlatformBlocklist *this, const int controllerIndex)
{
  ?FetchXUIDs@PlatformBlocklist@@QEAAXH@Z(this, controllerIndex);
}

/*
==============
PlatformBlocklist::GetPlayerIndex
==============
*/

bool __fastcall PlatformBlocklist::GetPlayerIndex(PlatformBlocklist *this, const XUID xuid, unsigned int *indexOut)
{
  return ?GetPlayerIndex@PlatformBlocklist@@QEBA_NUXUID@@AEAI@Z(this, xuid, indexOut);
}

/*
==============
PlatformBlocklist::CanFetchXUIDs
==============
*/

bool __fastcall PlatformBlocklist::CanFetchXUIDs(PlatformBlocklist *this, const int controllerIndex)
{
  return ?CanFetchXUIDs@PlatformBlocklist@@AEAA_NH@Z(this, controllerIndex);
}

/*
==============
PlatformBlocklist::TrackError
==============
*/

void __fastcall PlatformBlocklist::TrackError(PlatformBlocklist *this)
{
  ?TrackError@PlatformBlocklist@@AEAAXXZ(this);
}

/*
==============
PlatformBlocklist::AddPlayer
==============
*/

void __fastcall PlatformBlocklist::AddPlayer(PlatformBlocklist *this, const unsigned __int64 platformId)
{
  ?AddPlayer@PlatformBlocklist@@QEAAX_K@Z(this, platformId);
}

/*
==============
PlatformBlocklist::GetPlayerIndex
==============
*/

bool __fastcall PlatformBlocklist::GetPlayerIndex(PlatformBlocklist *this, const unsigned __int64 platformId, unsigned int *indexOut)
{
  return ?GetPlayerIndex@PlatformBlocklist@@QEBA_N_KAEAI@Z(this, platformId, indexOut);
}

/*
==============
TrackError
==============
*/
void TrackError(const int friendDataType, const int controllerIndex)
{
  DWFriendData *FriendData; 
  int v5; 
  int errorCount; 
  int v7; 

  ClearList(friendDataType, controllerIndex);
  FriendData = GetFriendData(friendDataType, controllerIndex);
  ++FriendData->errorCount;
  v5 = Sys_Milliseconds();
  errorCount = FriendData->errorCount;
  FriendData->lastFailTime = v5;
  if ( errorCount >= Dvar_GetInt_Internal_DebugName(DVARINT_online_crossplay_max_fail_attempts, "online_crossplay_max_fail_attempts") )
  {
    FriendData->listFetchState = FETCHED|FETCHING;
    v7 = friendDataType;
    Com_PrintError(14, "[%i]Failed on %i retries to fetch friendDataType %i\n", (unsigned int)controllerIndex, (unsigned int)errorCount, v7);
  }
}

/*
==============
PlatformBlocklist::AddPlayer
==============
*/
void PlatformBlocklist::AddPlayer(PlatformBlocklist *this, const unsigned __int64 platformId)
{
  __int64 v3; 
  unsigned int m_numBlocked; 
  __int64 v6; 
  int Int_Internal_DebugName; 

  v3 = 0i64;
  m_numBlocked = this->m_numBlocked;
  if ( m_numBlocked )
  {
    while ( this->m_list[v3].platformId != platformId )
    {
      v3 = (unsigned int)(v3 + 1);
      if ( (unsigned int)v3 >= m_numBlocked )
        goto LABEL_4;
    }
  }
  else
  {
LABEL_4:
    Com_Printf(14, "%s: Adding player %zu to our platform blocklist\n", "PlatformBlocklist::AddPlayer", platformId);
    if ( this->m_numBlocked >= 0x3E8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_platformblocklist.cpp", 19, ASSERT_TYPE_ASSERT, "(m_numBlocked < ( sizeof( *array_counter( m_list ) ) + 0 ))", (const char *)&queryFormat, "m_numBlocked < ARRAY_COUNT( m_list )") )
      __debugbreak();
    v6 = this->m_numBlocked;
    if ( (unsigned int)v6 < 0x3E8 )
    {
      this->m_list[v6].platformId = platformId;
      ++this->m_numBlocked;
      this->m_xuidFetchRequired = 1;
      Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DVARINT_blocklist_xuid_batch_time, "blocklist_xuid_batch_time");
      this->m_nextXuidBatchTime = Sys_Milliseconds() + Int_Internal_DebugName;
    }
    else
    {
      Com_PrintError(14, "%s: Couldn't add player %zu since our platform blocklist is full\n", "PlatformBlocklist::AddPlayer", platformId);
    }
  }
}

/*
==============
PlatformBlocklist::CanFetchXUIDs
==============
*/
bool PlatformBlocklist::CanFetchXUIDs(PlatformBlocklist *this, const int controllerIndex)
{
  int v3; 
  bool result; 

  result = Live_IsConnectedToDemonware(controllerIndex) && this->m_numErrors <= Dvar_GetInt_Internal_DebugName(DVARINT_blocklist_max_errors, "blocklist_max_errors") && (v3 = Sys_Milliseconds(), v3 >= this->m_nextXuidBatchTime) && (1 << this->m_numErrors) * Dvar_GetInt_Internal_DebugName(DVARINT_blocklist_retry_threshold, "blocklist_retry_threshold") + this->m_lastErrorTimestamp < v3;
  return result;
}

/*
==============
PlatformBlocklist::Clear
==============
*/
void PlatformBlocklist::Clear(PlatformBlocklist *this)
{
  memset_0(this, 0, 0x5DC0ui64);
  this->m_numBlocked = 0;
  this->m_xuidFetchRequired = 0;
  this->m_userIdResolver.m_numXuids = 0;
  this->m_userIdResolver.m_numPlatformIds = 0;
  this->m_userIdResolver.m_taskId = 0;
}

/*
==============
PlatformBlocklist::ClearErrors
==============
*/
void PlatformBlocklist::ClearErrors(PlatformBlocklist *this)
{
  *(_QWORD *)&this->m_numErrors = 0i64;
}

/*
==============
PlatformBlocklist::ControllerFrame
==============
*/
void PlatformBlocklist::ControllerFrame(PlatformBlocklist *this, const int controllerIndex)
{
  int v4; 

  if ( this->m_xuidFetchRequired && Live_IsConnectedToDemonware(controllerIndex) && this->m_numErrors <= Dvar_GetInt_Internal_DebugName(DVARINT_blocklist_max_errors, "blocklist_max_errors") )
  {
    v4 = Sys_Milliseconds();
    if ( v4 >= this->m_nextXuidBatchTime && this->m_lastErrorTimestamp + (1 << this->m_numErrors) * Dvar_GetInt_Internal_DebugName(DVARINT_blocklist_retry_threshold, "blocklist_retry_threshold") < v4 )
      PlatformBlocklist::FetchXUIDs(this, controllerIndex);
  }
}

/*
==============
PlatformBlocklist::FetchXUIDs
==============
*/
void PlatformBlocklist::FetchXUIDs(PlatformBlocklist *this, const int controllerIndex)
{
  int v3; 
  UserIdResolver<200> *numResults; 
  unsigned int v6; 
  PlatformBlockedUser *v7; 
  unsigned int m_numPlatformIds; 
  bool v10; 
  unsigned int m_numXuids; 
  TaskCreateRequest request; 
  TaskCreateResult result; 
  int v14; 
  int v15; 
  PlatformBlocklist *v16; 
  __int64 v17; 
  __int64 v18; 
  __int64 v19; 
  void (__fastcall *v20)(GenericTask *, eTaskManagerTaskState); 
  __int64 v21; 
  char v22; 
  int v23; 
  __int64 v24; 

  v24 = -2i64;
  v3 = controllerIndex;
  numResults = &this->m_userIdResolver;
  this->m_userIdResolver.m_numXuids = 0;
  this->m_userIdResolver.m_numPlatformIds = 0;
  this->m_userIdResolver.m_taskId = 0;
  v6 = 0;
  if ( this->m_numBlocked )
  {
    do
    {
      v7 = &this->m_list[v6];
      if ( !v7->fetched )
      {
        if ( !v7->platformId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_platformblocklist.cpp", 140, ASSERT_TYPE_ASSERT, "(m_list[blockIndex].platformId != 0)", (const char *)&queryFormat, "m_list[blockIndex].platformId != 0") )
          __debugbreak();
        if ( numResults->m_numPlatformIds >= 0xC8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_userid_resolver.cpp", 82, ASSERT_TYPE_SANITY, "( m_numPlatformIds < MAX_REQUESTS )", (const char *)&queryFormat, "m_numPlatformIds < MAX_REQUESTS") )
          __debugbreak();
        if ( numResults->m_numXuids && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_userid_resolver.cpp", 83, ASSERT_TYPE_SANITY, "(m_numXuids == 0)", "%s\n\t\"Trying to mix xuids and platformIds in one Resolver Task Data, the DW code won't know how to handle this.\"", "m_numXuids == 0") )
          __debugbreak();
        if ( numResults->m_taskId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_userid_resolver.cpp", 84, ASSERT_TYPE_SANITY, "( !IsBusy() )", (const char *)&queryFormat, "!IsBusy()") )
          __debugbreak();
        numResults->m_platformIds[numResults->m_numPlatformIds++] = v7->platformId;
      }
      ++v6;
    }
    while ( v6 < this->m_numBlocked );
    v3 = controllerIndex;
  }
  m_numPlatformIds = numResults->m_numPlatformIds;
  if ( !numResults->m_numPlatformIds )
  {
    this->m_xuidFetchRequired = 0;
    return;
  }
  v18 = 0i64;
  v19 = 0i64;
  v15 = -1;
  v17 = 0i64;
  v21 = 0i64;
  v22 = 1;
  v23 = 0;
  v16 = this;
  v14 = v3;
  v20 = PlatformBlocklist::FetchXUIDsComplete;
  request.m_controllerIndex = v3;
  request.m_appTaskType = -1;
  request.m_appData = this;
  request.m_appSecondaryCallback = NULL;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&request.m_asyncInfo = _XMM0;
  request.m_onCompletionCallback = PlatformBlocklist::FetchXUIDsComplete;
  request.m_onUpdateCallback = NULL;
  request.m_cancelTaskOnSignoutEvent = 1;
  request.m_timeoutInSeconds = 0;
  if ( numResults->m_taskId )
  {
    Com_PrintError(25, "Trying to send user id resolve request when one is already in flight.\n ");
LABEL_22:
    TaskCreateRequest::~TaskCreateRequest(&request);
    v10 = 0;
    goto LABEL_32;
  }
  m_numXuids = numResults->m_numXuids;
  if ( m_numXuids )
  {
    if ( m_numPlatformIds )
    {
      Com_PrintError(25, "UserIdResolver contains both xuids and platformids, we don't know which direction to resolve.\n");
      goto LABEL_22;
    }
  }
  else if ( !m_numPlatformIds )
  {
    goto LABEL_22;
  }
  result.m_localTaskId = 0;
  result.m_task = NULL;
  if ( m_numXuids )
    v10 = dwUserIdMap_ResolvePlatformIds(&request, &result, numResults->m_xuids, m_numXuids, numResults->m_platformIds, &numResults->m_numPlatformIds);
  else
    v10 = dwUserIdMap_ResolveUniversalIds(&request, &result, numResults->m_platformIds, m_numPlatformIds, numResults->m_xuids, &numResults->m_numXuids);
  numResults->m_taskId = result.m_localTaskId;
  TaskCreateRequest::~TaskCreateRequest(&request);
  if ( v10 )
  {
    Com_Printf(14, "%s: Fetching XUIDs for platform blocklist players\n", "PlatformBlocklist::FetchXUIDs");
    goto LABEL_34;
  }
LABEL_32:
  Com_PrintError(14, "%s: Failed to start fetching xuids for platform blocklist\n", "PlatformBlocklist::FetchXUIDs");
  ++this->m_numErrors;
  this->m_lastErrorTimestamp = Sys_Milliseconds();
LABEL_34:
  this->m_xuidFetchRequired = !v10;
}

/*
==============
PlatformBlocklist::FetchXUIDsComplete
==============
*/
void PlatformBlocklist::FetchXUIDsComplete(GenericTask *task, eTaskManagerTaskState state)
{
  char *m_appData; 
  unsigned int i; 
  unsigned int v4; 
  __int64 v5; 
  __int64 v6; 
  const char *v7; 
  unsigned int v8; 
  __int64 v9; 
  XUID *v10; 
  const char *v11; 
  bdLobbyErrorCode ErrorCode; 
  __int64 v13; 
  __int64 v14; 
  XUID xuid; 

  m_appData = (char *)task->m_appData;
  if ( state )
  {
    ErrorCode = bdRemoteTask::getErrorCode(task->m_remoteDemonwareTask.m_ptr);
    Com_PrintError(14, "%s: Failed to fetch xuids for platform blocklist, dw error (%i)\n", "PlatformBlocklist::FetchXUIDsComplete", (unsigned int)ErrorCode);
    ++*((_DWORD *)m_appData + 6003);
    *((_DWORD *)m_appData + 6004) = Sys_Milliseconds();
  }
  else
  {
    for ( i = 0; i < *((_DWORD *)m_appData + 6408); ++i )
    {
      if ( i >= *((_DWORD *)m_appData + 6408) )
      {
        LODWORD(v14) = *((_DWORD *)m_appData + 6408);
        LODWORD(v13) = i;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_userid_resolver.cpp", 136, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( m_numXuids )", "index doesn't index m_numXuids\n\t%i not in [0, %i)", v13, v14) )
          __debugbreak();
      }
      xuid.m_id = *(_QWORD *)&m_appData[8 * i + 25640];
      if ( i >= *((_DWORD *)m_appData + 6006) )
      {
        LODWORD(v14) = *((_DWORD *)m_appData + 6006);
        LODWORD(v13) = i;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_userid_resolver.cpp", 160, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( m_numPlatformIds )", "index doesn't index m_numPlatformIds\n\t%i not in [0, %i)", v13, v14) )
          __debugbreak();
      }
      v4 = *((_DWORD *)m_appData + 6000);
      v5 = 0i64;
      v6 = *(_QWORD *)&m_appData[8 * i + 24032];
      if ( v4 )
      {
        while ( *(_QWORD *)&m_appData[24 * v5] != v6 )
        {
          v5 = (unsigned int)(v5 + 1);
          if ( (unsigned int)v5 >= v4 )
            goto LABEL_12;
        }
        v10 = (XUID *)&m_appData[24 * v5];
        XUID::operator=(v10 + 1, &xuid);
        LOBYTE(v10[2].m_id) = 1;
        v11 = XUID::ToString(&xuid);
        Com_Printf(14, "%s: Received XUID %s for platformId player %zu\n", "PlatformBlocklist::FetchXUIDsComplete", v11, v6);
      }
      else
      {
LABEL_12:
        v7 = XUID::ToString(&xuid);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_platformblocklist.cpp", 107, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Received a xuid %s back for a platform id %zu that is not in out blocklist", v7, v6) )
          __debugbreak();
      }
    }
    v8 = *((_DWORD *)m_appData + 6000);
    v9 = 0i64;
    m_appData[24004] = 0;
    if ( v8 )
    {
      while ( m_appData[24 * v9 + 16] )
      {
        v9 = (unsigned int)(v9 + 1);
        if ( (unsigned int)v9 >= v8 )
        {
          *(_QWORD *)(m_appData + 24012) = 0i64;
          return;
        }
      }
      m_appData[24004] = 1;
    }
    *(_QWORD *)(m_appData + 24012) = 0i64;
  }
}

/*
==============
PlatformBlocklist::GetPlayerIndex
==============
*/
char PlatformBlocklist::GetPlayerIndex(PlatformBlocklist *this, const XUID xuid, unsigned int *indexOut)
{
  __int64 v3; 
  XUID xuida; 

  xuida.m_id = xuid.m_id;
  v3 = 0i64;
  if ( !this->m_numBlocked )
    return 0;
  while ( !XUID::operator==(&this->m_list[v3].xuid, &xuida) )
  {
    v3 = (unsigned int)(v3 + 1);
    if ( (unsigned int)v3 >= this->m_numBlocked )
      return 0;
  }
  *indexOut = v3;
  return 1;
}

/*
==============
PlatformBlocklist::GetPlayerIndex
==============
*/
char PlatformBlocklist::GetPlayerIndex(PlatformBlocklist *this, const unsigned __int64 platformId, unsigned int *indexOut)
{
  unsigned int m_numBlocked; 
  unsigned int v4; 

  m_numBlocked = this->m_numBlocked;
  v4 = 0;
  if ( !m_numBlocked )
    return 0;
  while ( this->m_list[0].platformId != platformId )
  {
    ++v4;
    this = (PlatformBlocklist *)((char *)this + 24);
    if ( v4 >= m_numBlocked )
      return 0;
  }
  *indexOut = v4;
  return 1;
}

/*
==============
PlatformBlocklist::RemovePlayer
==============
*/
void PlatformBlocklist::RemovePlayer(PlatformBlocklist *this, const unsigned __int64 platformId)
{
  __int64 v3; 
  unsigned int m_numBlocked; 
  const XUID *v6; 
  XUID *v7; 

  v3 = 0i64;
  m_numBlocked = this->m_numBlocked;
  if ( m_numBlocked )
  {
    while ( this->m_list[v3].platformId != platformId )
    {
      v3 = (unsigned int)(v3 + 1);
      if ( (unsigned int)v3 >= m_numBlocked )
        return;
    }
    v6 = (const XUID *)&this->m_list[m_numBlocked - 1];
    v7 = (XUID *)&this->m_list[(unsigned int)v3];
    v7->m_id = v6->m_id;
    XUID::operator=(v7 + 1, v6 + 1);
    LOBYTE(v7[2].m_id) = v6[2].m_id;
    --this->m_numBlocked;
    Com_Printf(14, "%s: Removing player %zu from our platform blocklist\n", "PlatformBlocklist::RemovePlayer", platformId);
  }
}

/*
==============
PlatformBlocklist::TrackError
==============
*/
void PlatformBlocklist::TrackError(PlatformBlocklist *this)
{
  ++this->m_numErrors;
  this->m_lastErrorTimestamp = Sys_Milliseconds();
}

