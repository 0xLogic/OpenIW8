/*
==============
UserList::CreateList
==============
*/

void __fastcall UserList::CreateList(UserList *this, const int controllerIndex)
{
  ?CreateList@UserList@@AEAAXH@Z(this, controllerIndex);
}

/*
==============
UserList::FetchUserList
==============
*/

bool __fastcall UserList::FetchUserList(UserList *this, const int controllerIndex)
{
  return ?FetchUserList@UserList@@QEAA_NH@Z(this, controllerIndex);
}

/*
==============
UserList::GetUserXB3PlatformId
==============
*/

unsigned __int64 __fastcall UserList::GetUserXB3PlatformId(UserList *this, const XUID xuid)
{
  return ?GetUserXB3PlatformId@UserList@@QEAA_KUXUID@@@Z(this, xuid);
}

/*
==============
UserList::IsDWTaskActive
==============
*/

bool __fastcall UserList::IsDWTaskActive(UserList *this)
{
  return ?IsDWTaskActive@UserList@@QEBA_NXZ(this);
}

/*
==============
UserList::ShouldCreateDWTask
==============
*/

bool __fastcall UserList::ShouldCreateDWTask(UserList *this)
{
  return ?ShouldCreateDWTask@UserList@@AEAA_NXZ(this);
}

/*
==============
UserList::GetUserByXUID
==============
*/

bool __fastcall UserList::GetUserByXUID(UserList *this, const XUID xuid, const UserList::User **userOut)
{
  return ?GetUserByXUID@UserList@@QEBA_NUXUID@@PEAPEBUUser@1@@Z(this, xuid, userOut);
}

/*
==============
UserList::FetchMemberListComplete
==============
*/

void __fastcall UserList::FetchMemberListComplete(GenericTask *task, eTaskManagerTaskState state)
{
  ?FetchMemberListComplete@UserList@@CAXPEAVGenericTask@@W4eTaskManagerTaskState@@@Z(task, state);
}

/*
==============
UserList::AddUsersToQueueType
==============
*/

bool __fastcall UserList::AddUsersToQueueType(UserList *this, const UserList::UserListQueueType queueType, const UserList::User *users, const unsigned int numUsers)
{
  return ?AddUsersToQueueType@UserList@@QEAA_NW4UserListQueueType@1@PEBUUser@1@I@Z(this, queueType, users, numUsers);
}

/*
==============
UserList::ControllerFrame
==============
*/

void __fastcall UserList::ControllerFrame(UserList *this, const int controllerIndex)
{
  ?ControllerFrame@UserList@@QEAAXH@Z(this, controllerIndex);
}

/*
==============
UserList::ClearUsers
==============
*/

void __fastcall UserList::ClearUsers(UserList *this)
{
  ?ClearUsers@UserList@@AEAAXXZ(this);
}

/*
==============
UserList::CreateListComplete
==============
*/

void __fastcall UserList::CreateListComplete(GenericTask *task, eTaskManagerTaskState state)
{
  ?CreateListComplete@UserList@@CAXPEAVGenericTask@@W4eTaskManagerTaskState@@@Z(task, state);
}

/*
==============
UserList::UserList
==============
*/

void __fastcall UserList::UserList(UserList *this)
{
  ??0UserList@@QEAA@XZ(this);
}

/*
==============
UserList::GetUserByIndex
==============
*/

bool __fastcall UserList::GetUserByIndex(UserList *this, const unsigned int index, const UserList::User **userOut)
{
  return ?GetUserByIndex@UserList@@QEBA_NIPEAPEBUUser@1@@Z(this, index, userOut);
}

/*
==============
UserList::TrackError
==============
*/

void __fastcall UserList::TrackError(UserList *this)
{
  ?TrackError@UserList@@AEAAXXZ(this);
}

/*
==============
UserList::AddUsersToList
==============
*/

void __fastcall UserList::AddUsersToList(UserList *this, const int controllerIndex)
{
  ?AddUsersToList@UserList@@AEAAXH@Z(this, controllerIndex);
}

/*
==============
UserList::Reset
==============
*/

void __fastcall UserList::Reset(UserList *this)
{
  ?Reset@UserList@@QEAAXXZ(this);
}

/*
==============
UserList::SetUserXB3Data
==============
*/

bool __fastcall UserList::SetUserXB3Data(UserList *this, const XUID xuid, Platform::String *xb3GamerTag, const unsigned __int64 platformId)
{
  return ?SetUserXB3Data@UserList@@QEAA_NUXUID@@PE$AAVString@Platform@@_K@Z(this, xuid, xb3GamerTag, platformId);
}

/*
==============
UserList::RemoveUsersFromListComplete
==============
*/

void __fastcall UserList::RemoveUsersFromListComplete(GenericTask *task, eTaskManagerTaskState state)
{
  ?RemoveUsersFromListComplete@UserList@@CAXPEAVGenericTask@@W4eTaskManagerTaskState@@@Z(task, state);
}

/*
==============
UserList::SortList
==============
*/

void __fastcall UserList::SortList(UserList *this)
{
  ?SortList@UserList@@AEAAXXZ(this);
}

/*
==============
UserList::RemoveUsersFromList
==============
*/

void __fastcall UserList::RemoveUsersFromList(UserList *this, const int controllerIndex)
{
  ?RemoveUsersFromList@UserList@@AEAAXH@Z(this, controllerIndex);
}

/*
==============
UserList::FetchUserList_Internal
==============
*/

bool __fastcall UserList::FetchUserList_Internal(UserList *this, const int controllerIndex, const char *pageToken)
{
  return ?FetchUserList_Internal@UserList@@AEAA_NHPEBD@Z(this, controllerIndex, pageToken);
}

/*
==============
UserList::AddUsersToListComplete
==============
*/

void __fastcall UserList::AddUsersToListComplete(GenericTask *task, eTaskManagerTaskState state)
{
  ?AddUsersToListComplete@UserList@@CAXPEAVGenericTask@@W4eTaskManagerTaskState@@@Z(task, state);
}

/*
==============
UserList::RegisterUserListUpdatedCallback
==============
*/

void __fastcall UserList::RegisterUserListUpdatedCallback(UserList *this, void (__fastcall *const callback)(const int))
{
  ?RegisterUserListUpdatedCallback@UserList@@QEAAXQ6AXH@Z@Z(this, callback);
}

/*
==============
UserList::UserList
==============
*/
void UserList::UserList(UserList *this)
{
  UserList *v2; 
  __int64 v3; 
  UserList::User *m_users; 
  __int64 v5; 

  v2 = this;
  v3 = 2i64;
  do
  {
    IWStaticCircularQueue<UserList::User,200,unsigned short>::IWStaticCircularQueue<UserList::User,200,unsigned short>(v2->m_pendingUserQueue);
    v2 = (UserList *)((char *)v2 + 32008);
    --v3;
  }
  while ( v3 );
  m_users = this->m_users;
  v5 = 200i64;
  do
  {
    UserList::User::User(m_users++);
    --v5;
  }
  while ( v5 );
  *(_QWORD *)&this->m_numUsers = 0i64;
  this->m_lastAddUserTaskTimestamp = 0;
  bdGetUserListResponse::bdGetUserListResponse(&this->m_response);
  bdUpdateUsersInUserListResponse::bdUpdateUsersInUserListResponse(&this->m_updateUserListResponse);
  bdRemoveUsersFromUserListResponse::bdRemoveUsersFromUserListResponse(&this->m_removeUserListResponse);
  bdCreateUserListResponse::bdCreateUserListResponse(&this->m_createUserListResponse);
  *(_WORD *)&this->m_dwTaskActive = 0;
  this->m_userListUpdatedCallback = NULL;
  bdGetUserListResponse::reset(&this->m_response);
}

/*
==============
UserList::AddUsersToList
==============
*/
void UserList::AddUsersToList(UserList *this, const int controllerIndex)
{
  int m_ptr; 
  UserList *v3; 
  unsigned int v4; 
  IWStaticCircularQueue<UserList::User,200,unsigned short> *v5; 
  unsigned int v6; 
  __int64 m_listType; 
  unsigned int i; 
  __int64 v9; 
  const char *v10; 
  unsigned __int64 TimeAsSeconds; 
  int v12; 
  unsigned int v13; 
  unsigned int v14; 
  bdUserListEntity *v15; 
  unsigned __int64 m_id; 
  DWServicesAccess *Instance; 
  DWUserLists *UserLists; 
  TaskCreateRequest *v19; 
  bdRemoteTask *v20; 
  TaskManager *v21; 
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  char *fmt; 
  __int64 listMaxSize; 
  bdReference<bdRemoteTask> result; 
  XUID v26; 
  TaskCreateRequest pTaskCreateRequest; 
  UserList *v28; 
  __int64 v29; 
  TaskCreateResult pTaskCreateResult; 
  bdUserAccountID v31; 
  bdUserListEntity ptr[200]; 

  v29 = -2i64;
  m_ptr = controllerIndex;
  LODWORD(result.m_ptr) = controllerIndex;
  v3 = this;
  v28 = this;
  if ( (unsigned int)controllerIndex >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\userlist.cpp", 474, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, 8) )
    __debugbreak();
  if ( v3->m_fetched && !v3->m_dwTaskActive )
  {
    v4 = v3->m_lastAddUserTaskTimestamp + GetThrottleRateForType((const UserListType)v3->m_listType);
    if ( v4 < Sys_Milliseconds() )
    {
      v5 = &v3->m_pendingUserQueue[1];
      if ( IWStaticCircularQueue<UserList::User,200,unsigned short>::Size(&v3->m_pendingUserQueue[1]) )
      {
        v6 = 200 - v3->m_numUsers;
        if ( IWStaticCircularQueue<UserList::User,200,unsigned short>::Size(&v3->m_pendingUserQueue[1]) <= v6 || (m_listType = v3->m_listType, s_userListTypeMapping[m_listType].m_shouldRemoveOldest) )
        {
          `eh vector constructor iterator'(ptr, 0xF8ui64, 0xC8ui64, (void (__fastcall *)(void *))bdUserListEntity::bdUserListEntity, (void (__fastcall *)(void *))bdUserListEntity::~bdUserListEntity);
          TimeAsSeconds = Sys_GetTimeAsSeconds();
          v12 = IWStaticCircularQueue<UserList::User,200,unsigned short>::Size(&v3->m_pendingUserQueue[1]);
          v13 = 200;
          if ( v12 < 200 )
            v13 = v12;
          v14 = 0;
          if ( v13 )
          {
            v26.m_id = TimeAsSeconds;
            v15 = ptr;
            m_id = v26.m_id;
            do
            {
              v26.m_id = IWStaticCircularQueue<UserList::User,200,unsigned short>::operator[](v5, v14)->xuid.m_id;
              if ( !XUID::IsValid(&v26) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\userlist.cpp", 520, ASSERT_TYPE_ASSERT, "(xuid.IsValid())", (const char *)&queryFormat, "xuid.IsValid()") )
                __debugbreak();
              bdUserAccountID::bdUserAccountID(&v31);
              v31.m_userID = XUID::GetUniversalId(&v26);
              Core_strncpy(v31._bytes_20, 0xAui64, "uno", 4ui64);
              bdUserListEntity::setScore(v15, m_id);
              bdUserListEntity::setUser(v15, &v31);
              bdUserAccountID::~bdUserAccountID((bdUserAccountID *)v31.gap38);
              bdReferencable::~bdReferencable((bdReferencable *)v31.gap38);
              ++v14;
              ++v15;
            }
            while ( v14 < v13 );
            v3 = v28;
            m_ptr = (int)result.m_ptr;
          }
          *(_QWORD *)&pTaskCreateRequest.m_controllerIndex = -1i64;
          memset(&pTaskCreateRequest.m_appData, 0, 48);
          pTaskCreateRequest.m_cancelTaskOnSignoutEvent = 1;
          pTaskCreateRequest.m_timeoutInSeconds = 0;
          pTaskCreateResult.m_localTaskId = 0;
          pTaskCreateResult.m_task = NULL;
          Instance = DWServicesAccess::GetInstance();
          UserLists = DWServicesAccess::GetUserLists(Instance, m_ptr);
          v19 = (TaskCreateRequest *)DWUserLists::AddUsersToList(UserLists, &result, s_userListTypeMapping[v3->m_listType].m_listName, ptr, v13, s_userListTypeMapping[v3->m_listType].m_shouldRemoveOldest, 200, &v3->m_updateUserListResponse);
          if ( v19 != (TaskCreateRequest *)&pTaskCreateRequest.m_remoteDemonwareTask )
          {
            if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
              ((void (__fastcall *)(bdRemoteTask *, __int64))pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->~bdReferencable)(pTaskCreateRequest.m_remoteDemonwareTask.m_ptr, 1i64);
            v20 = *(bdRemoteTask **)&v19->m_controllerIndex;
            pTaskCreateRequest.m_remoteDemonwareTask.m_ptr = v20;
            if ( v20 )
              _InterlockedExchangeAdd((volatile signed __int32 *)&v20->m_refCount, 1u);
          }
          if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
          pTaskCreateRequest.m_appData = v3;
          pTaskCreateRequest.m_onCompletionCallback = UserList::AddUsersToListComplete;
          pTaskCreateRequest.m_controllerIndex = m_ptr;
          if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr && (v21 = TaskManager::GetInstance(), TaskManager::CreateTask(v21, &pTaskCreateRequest, &pTaskCreateResult)) )
          {
            LODWORD(fmt) = m_ptr;
            Com_Printf(25, "[Userlist][%s] %s: Successfully started to add users (controller %i)\n", s_userListTypeMapping[v3->m_listType].m_listName, "UserList::AddUsersToList", fmt);
            v3->m_dwTaskActive = 1;
            v3->m_lastAddUserTaskTimestamp = Sys_Milliseconds();
          }
          else
          {
            LODWORD(fmt) = m_ptr;
            Com_Printf(25, "[Userlist][%s] %s: Failed starting to add users (controller %i)\n", s_userListTypeMapping[v3->m_listType].m_listName, "UserList::AddUsersToList", fmt);
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
          `eh vector destructor iterator'(ptr, 0xF8ui64, 0xC8ui64, (void (__fastcall *)(void *))bdUserListEntity::~bdUserListEntity);
        }
        else
        {
          Com_Printf(14, "[Userlist][%s] Members (count: %i ):\n", s_userListTypeMapping[m_listType].m_listName, v3->m_numUsers);
          for ( i = 0; i < v3->m_numUsers; ++i )
          {
            v9 = i;
            v10 = XUID::ToString(&v3->m_users[v9].xuid);
            Com_Printf(14, "Members %i - Name: %s, NameWithHash: %s, XUID: %s\n", i, v3->m_users[v9].name, v3->m_users[v9].nameWithHash, v10);
          }
          LODWORD(listMaxSize) = 200;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\userlist.cpp", 508, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "[Userlist][%s] Not enough space in list, max: %i", s_userListTypeMapping[v3->m_listType].m_listName, listMaxSize) )
            __debugbreak();
        }
      }
    }
  }
}

/*
==============
UserList::AddUsersToListComplete
==============
*/
void UserList::AddUsersToListComplete(GenericTask *task, eTaskManagerTaskState state)
{
  UserList *m_appData; 
  GenericTask *v3; 
  const char *m_listName; 
  int v5; 
  int v6; 
  int v7; 
  unsigned int m_numUsers; 
  int v9; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 
  char *v13; 
  const char *v14; 
  const XUID *v15; 
  unsigned int v16; 
  const char *v17; 
  char *v18; 
  unsigned int v19; 
  void (__fastcall *m_userListUpdatedCallback)(const int); 
  int v22; 
  const char *v23; 
  XUID result; 

  m_appData = (UserList *)task->m_appData;
  v3 = task;
  m_listName = s_userListTypeMapping[m_appData->m_listType].m_listName;
  v23 = m_listName;
  m_appData->m_dwTaskActive = 0;
  if ( state )
  {
    Com_Printf(25, "[Userlist][%s] %s: Failed to add users\n", m_listName, "UserList::AddUsersToListComplete");
    ++m_appData->m_failCount;
    m_appData->m_lastFailTimestamp = Sys_Milliseconds();
    return;
  }
  Com_Printf(25, "[Userlist][%s] %s: Successfully added users\n", m_listName, "UserList::AddUsersToListComplete");
  v5 = IWStaticCircularQueue<UserList::User,200,unsigned short>::Size(&m_appData->m_pendingUserQueue[1]);
  v6 = 200;
  if ( v5 < 200 )
    v6 = v5;
  v22 = v6;
  if ( (unsigned int)v6 > 0xC8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\userlist.cpp", 398, ASSERT_TYPE_ASSERT, "(numXuids <= ( sizeof( *array_counter( userList->m_users ) ) + 0 ))", (const char *)&queryFormat, "numXuids <= ARRAY_COUNT( userList->m_users )") )
    __debugbreak();
  v7 = 0;
  if ( v6 <= 0 )
    goto LABEL_72;
  m_numUsers = m_appData->m_numUsers;
  while ( 1 )
  {
    v9 = m_numUsers;
    if ( m_numUsers >= 0xC8 )
      v9 = m_numUsers - v7 - 1;
    LODWORD(v10) = 0;
    if ( v9 > 0 )
      LODWORD(v10) = v9;
    v11 = 0i64;
    if ( !m_numUsers )
      break;
    while ( 1 )
    {
      v12 = (unsigned int)v11;
      v13 = (char *)m_appData + 160 * v11;
      if ( !m_appData->m_pendingUserQueue[1].cleared && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 81, ASSERT_TYPE_ASSERT, "(this->cleared)", (const char *)&queryFormat, "this->cleared") )
        __debugbreak();
      if ( !m_appData->m_pendingUserQueue[1].size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 82, ASSERT_TYPE_ASSERT, "(this->size > 0)", (const char *)&queryFormat, "this->size > 0") )
        __debugbreak();
      if ( XUID::operator==((XUID *)v13 + 8002, &m_appData->m_pendingUserQueue[1].entries[m_appData->m_pendingUserQueue[1].start].xuid) )
        break;
      m_numUsers = m_appData->m_numUsers;
      v11 = (unsigned int)(v11 + 1);
      if ( (unsigned int)v11 >= m_numUsers )
      {
        m_listName = v23;
        goto LABEL_23;
      }
    }
    if ( !m_appData->m_pendingUserQueue[1].cleared && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 81, ASSERT_TYPE_ASSERT, "(this->cleared)", (const char *)&queryFormat, "this->cleared") )
      __debugbreak();
    if ( !m_appData->m_pendingUserQueue[1].size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 82, ASSERT_TYPE_ASSERT, "(this->size > 0)", (const char *)&queryFormat, "this->size > 0") )
      __debugbreak();
    v17 = XUID::ToString(&m_appData->m_pendingUserQueue[1].entries[m_appData->m_pendingUserQueue[1].start].xuid);
    Com_Printf(25, "[Userlist][%s] %s: Updating existing player %s in our list\n", v23, "UserList::AddUsersToListComplete", v17);
    v10 = (int)v10;
    v18 = (char *)m_appData + 160 * (int)v10;
    XUID::operator=((XUID *)v13 + 8002, (const XUID *)v18 + 8002);
    m_appData->m_users[v12].timeAdded = *((_QWORD *)v18 + 8003);
    Core_strcpy(v13 + 64032, 0x40ui64, v18 + 64032);
    Core_strcpy(v13 + 64096, 0x40ui64, v18 + 64096);
LABEL_35:
    v15 = XUID::NullXUID(&result);
    XUID::operator=(&m_appData->m_users[v10].xuid, v15);
    m_appData->m_users[v10].timeAdded = 0i64;
    m_appData->m_users[v10].name[0] = 0;
    m_appData->m_users[v10].nameWithHash[0] = 0;
    m_appData->m_users[v10].xb3PlatformId = 0i64;
    m_appData->m_users[v10].xb3DataSet = 0;
    if ( !m_appData->m_pendingUserQueue[1].cleared && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 81, ASSERT_TYPE_ASSERT, "(this->cleared)", (const char *)&queryFormat, "this->cleared") )
      __debugbreak();
    if ( !m_appData->m_pendingUserQueue[1].size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 82, ASSERT_TYPE_ASSERT, "(this->size > 0)", (const char *)&queryFormat, "this->size > 0") )
      __debugbreak();
    XUID::operator=(&m_appData->m_users[v10].xuid, &m_appData->m_pendingUserQueue[1].entries[m_appData->m_pendingUserQueue[1].start].xuid);
    if ( !m_appData->m_pendingUserQueue[1].cleared && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 81, ASSERT_TYPE_ASSERT, "(this->cleared)", (const char *)&queryFormat, "this->cleared") )
      __debugbreak();
    if ( !m_appData->m_pendingUserQueue[1].size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 82, ASSERT_TYPE_ASSERT, "(this->size > 0)", (const char *)&queryFormat, "this->size > 0") )
      __debugbreak();
    m_appData->m_users[v10].timeAdded = m_appData->m_pendingUserQueue[1].entries[m_appData->m_pendingUserQueue[1].start].timeAdded;
    if ( !m_appData->m_pendingUserQueue[1].cleared && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 81, ASSERT_TYPE_ASSERT, "(this->cleared)", (const char *)&queryFormat, "this->cleared") )
      __debugbreak();
    if ( !m_appData->m_pendingUserQueue[1].size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 82, ASSERT_TYPE_ASSERT, "(this->size > 0)", (const char *)&queryFormat, "this->size > 0") )
      __debugbreak();
    Core_strcpy(m_appData->m_users[v10].name, 0x40ui64, m_appData->m_pendingUserQueue[1].entries[m_appData->m_pendingUserQueue[1].start].name);
    if ( !m_appData->m_pendingUserQueue[1].cleared && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 122, ASSERT_TYPE_ASSERT, "(this->cleared)", (const char *)&queryFormat, "this->cleared") )
      __debugbreak();
    if ( !m_appData->m_pendingUserQueue[1].size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 123, ASSERT_TYPE_ASSERT, "(this->size > 0)", (const char *)&queryFormat, "this->size > 0") )
      __debugbreak();
    v16 = ((unsigned int)m_appData->m_pendingUserQueue[1].start + 1) % 0xC8;
    --m_appData->m_pendingUserQueue[1].size;
    m_appData->m_pendingUserQueue[1].start = v16;
    m_numUsers = m_appData->m_numUsers;
    if ( m_numUsers < 0xC8 )
      m_appData->m_numUsers = ++m_numUsers;
    if ( ++v7 >= v22 )
      goto LABEL_71;
    m_listName = v23;
  }
LABEL_23:
  if ( s_userListTypeMapping[m_appData->m_listType].m_shouldRemoveOldest || m_numUsers != 200 )
  {
    if ( m_numUsers > 0xC8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\userlist.cpp", 431, ASSERT_TYPE_ASSERT, "(userList->m_numUsers <= ( sizeof( *array_counter( userList->m_users ) ) + 0 ))", (const char *)&queryFormat, "userList->m_numUsers <= ARRAY_COUNT( userList->m_users )") )
      __debugbreak();
    if ( !m_appData->m_pendingUserQueue[1].cleared && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 81, ASSERT_TYPE_ASSERT, "(this->cleared)", (const char *)&queryFormat, "this->cleared") )
      __debugbreak();
    if ( !m_appData->m_pendingUserQueue[1].size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 82, ASSERT_TYPE_ASSERT, "(this->size > 0)", (const char *)&queryFormat, "this->size > 0") )
      __debugbreak();
    v14 = XUID::ToString(&m_appData->m_pendingUserQueue[1].entries[m_appData->m_pendingUserQueue[1].start].xuid);
    Com_Printf(25, "[Userlist][%s] %s: Adding new player %s in our list\n", m_listName, "UserList::AddUsersToListComplete", v14);
    v10 = (int)v10;
    goto LABEL_35;
  }
  Com_PrintError(14, "[Userlist][%s] %s: Trying to add more players to our list but it's already full and we can't add more!\n", m_listName, "UserList::AddUsersToListComplete");
LABEL_71:
  v3 = task;
LABEL_72:
  v19 = m_appData->m_numUsers;
  if ( v19 )
    qsort(m_appData->m_users, v19, 0xA0ui64, (_CoreCrtNonSecureSearchSortCompareFunction)SortUserlistTime);
  if ( !m_appData->m_pendingUserQueue[1].cleared && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 36, ASSERT_TYPE_ASSERT, "(this->cleared)", (const char *)&queryFormat, "this->cleared") )
    __debugbreak();
  if ( m_appData->m_pendingUserQueue[1].size )
  {
    UserList::AddUsersToList(m_appData, v3->m_controllerIndex);
  }
  else
  {
    m_userListUpdatedCallback = m_appData->m_userListUpdatedCallback;
    if ( m_userListUpdatedCallback )
      m_userListUpdatedCallback(v3->m_controllerIndex);
  }
}

/*
==============
UserList::AddUsersToQueueType
==============
*/
char UserList::AddUsersToQueueType(UserList *this, const UserList::UserListQueueType queueType, const UserList::User *users, const unsigned int numUsers)
{
  __int64 v4; 
  __int64 v6; 
  IWStaticCircularQueue<UserList::User,200,unsigned short> *v8; 
  const dvar_t *v10; 
  unsigned int v11; 
  unsigned int v12; 
  __int64 v13; 
  int start; 
  __int64 v15; 
  unsigned int i; 
  bool cleared; 
  unsigned __int16 size; 
  unsigned __int64 TimeAsSeconds; 

  v4 = queueType;
  v6 = numUsers;
  if ( (unsigned int)queueType >= USERLIST_QUEUE_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\userlist.cpp", 113, ASSERT_TYPE_ASSERT, "(unsigned)( static_cast< int >( queueType ) ) < (unsigned)( static_cast< int >( UserListQueueType::USERLIST_QUEUE_COUNT ) )", "static_cast< int >( queueType ) doesn't index static_cast< int >( UserListQueueType::USERLIST_QUEUE_COUNT )\n\t%i not in [0, %i)", queueType, 2) )
    __debugbreak();
  v8 = &this->m_pendingUserQueue[v4];
  if ( (unsigned int)v6 > 0xC8 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\userlist.cpp", 117, ASSERT_TYPE_ASSERT, "(numUsers <= pendingQueue->Capacity())", (const char *)&queryFormat, "numUsers <= pendingQueue->Capacity()") )
    {
      __debugbreak();
      return 0;
    }
    return 0;
  }
  v10 = DVARBOOL_online_userlist_dont_check_space_availability_for_removal;
  if ( !DVARBOOL_online_userlist_dont_check_space_availability_for_removal && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_userlist_dont_check_space_availability_for_removal") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  if ( !v10->current.enabled || (_DWORD)v4 )
  {
    if ( this->m_numUsers > 0xC8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\userlist.cpp", 136, ASSERT_TYPE_ASSERT, "(m_numUsers <= ( sizeof( *array_counter( m_users ) ) + 0 ))", (const char *)&queryFormat, "m_numUsers <= ARRAY_COUNT( m_users )") )
      __debugbreak();
    v11 = 0;
    if ( (signed int)(200 - this->m_numUsers) > 0 )
      v11 = 200 - this->m_numUsers;
    if ( (unsigned int)v6 > v11 && !s_userListTypeMapping[this->m_listType].m_shouldRemoveOldest )
      return 0;
  }
  if ( IWStaticCircularQueue<UserList::User,200,unsigned short>::Space(&this->m_pendingUserQueue[v4]) < (unsigned int)v6 )
  {
    v12 = IWStaticCircularQueue<UserList::User,200,unsigned short>::Space(&this->m_pendingUserQueue[v4]);
    if ( (_DWORD)v6 != v12 )
    {
      v13 = (unsigned int)v6 - v12;
      do
      {
        if ( !v8->cleared && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 122, ASSERT_TYPE_ASSERT, "(this->cleared)", (const char *)&queryFormat, "this->cleared") )
          __debugbreak();
        if ( !v8->size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 123, ASSERT_TYPE_ASSERT, "(this->size > 0)", (const char *)&queryFormat, "this->size > 0") )
          __debugbreak();
        start = v8->start;
        --v8->size;
        v8->start = (start + 1) % 0xC8u;
        --v13;
      }
      while ( v13 );
    }
  }
  if ( (_DWORD)v6 )
  {
    v15 = v6;
    do
    {
      if ( XUID::IsValid(&users->xuid) )
      {
        for ( i = 0; ; ++i )
        {
          if ( !v8->cleared && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 36, ASSERT_TYPE_ASSERT, "(this->cleared)", (const char *)&queryFormat, "this->cleared") )
            __debugbreak();
          cleared = v8->cleared;
          if ( i >= v8->size )
            break;
          if ( !cleared && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 46, ASSERT_TYPE_ASSERT, "(this->cleared)", (const char *)&queryFormat, "this->cleared") )
            __debugbreak();
          if ( i >= v8->size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 47, ASSERT_TYPE_ASSERT, "(index < this->size)", (const char *)&queryFormat, "index < this->size") )
            __debugbreak();
          if ( XUID::operator==(&v8->entries[(i + v8->start) % 0xC8].xuid, &users->xuid) )
            goto LABEL_71;
        }
        if ( !cleared && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 113, ASSERT_TYPE_ASSERT, "(this->cleared)", (const char *)&queryFormat, "this->cleared") )
          __debugbreak();
        size = v8->size;
        if ( size >= 0xC8u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 115, ASSERT_TYPE_ASSERT, "(curSize < s_capacity)", (const char *)&queryFormat, "curSize < s_capacity") )
          __debugbreak();
        v8->size = size + 1;
        TimeAsSeconds = Sys_GetTimeAsSeconds();
        if ( !v8->cleared && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 91, ASSERT_TYPE_ASSERT, "(this->cleared)", (const char *)&queryFormat, "this->cleared") )
          __debugbreak();
        if ( !v8->size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 92, ASSERT_TYPE_ASSERT, "(this->size > 0)", (const char *)&queryFormat, "this->size > 0") )
          __debugbreak();
        v8->entries[(v8->size + (unsigned int)v8->start - 1) % 0xC8].timeAdded = TimeAsSeconds;
        if ( !v8->cleared && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 91, ASSERT_TYPE_ASSERT, "(this->cleared)", (const char *)&queryFormat, "this->cleared") )
          __debugbreak();
        if ( !v8->size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 92, ASSERT_TYPE_ASSERT, "(this->size > 0)", (const char *)&queryFormat, "this->size > 0") )
          __debugbreak();
        XUID::operator=(&v8->entries[(v8->size + (unsigned int)v8->start - 1) % 0xC8].xuid, &users->xuid);
        if ( !v8->cleared && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 91, ASSERT_TYPE_ASSERT, "(this->cleared)", (const char *)&queryFormat, "this->cleared") )
          __debugbreak();
        if ( !v8->size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 92, ASSERT_TYPE_ASSERT, "(this->size > 0)", (const char *)&queryFormat, "this->size > 0") )
          __debugbreak();
        Core_strcpy(v8->entries[(v8->size + (unsigned int)v8->start - 1) % 0xC8].name, 0x40ui64, users->name);
      }
LABEL_71:
      ++users;
      --v15;
    }
    while ( v15 );
  }
  return 1;
}

/*
==============
UserList::ClearUsers
==============
*/
void UserList::ClearUsers(UserList *this)
{
  this->m_fetched = 0;
  this->m_numUsers = 0;
  bdGetUserListResponse::reset(&this->m_response);
  memset_0(this->m_users, 0, sizeof(this->m_users));
}

/*
==============
UserList::ControllerFrame
==============
*/
void UserList::ControllerFrame(UserList *this, const int controllerIndex)
{
  if ( UserList::ShouldCreateDWTask(this) )
  {
    UserList::AddUsersToList(this, controllerIndex);
    UserList::RemoveUsersFromList(this, controllerIndex);
  }
}

/*
==============
UserList::CreateList
==============
*/
void UserList::CreateList(UserList *this, const int controllerIndex)
{
  DWServicesAccess *Instance; 
  DWUserLists *UserLists; 
  TaskCreateRequest *v6; 
  bdRemoteTask *v7; 
  TaskManager *v8; 
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  TaskCreateResult pTaskCreateResult; 
  TaskCreateRequest pTaskCreateRequest; 
  bdReference<bdRemoteTask> result; 

  *(_QWORD *)&pTaskCreateRequest.m_controllerIndex = -1i64;
  memset(&pTaskCreateRequest.m_appData, 0, 48);
  pTaskCreateRequest.m_cancelTaskOnSignoutEvent = 1;
  pTaskCreateRequest.m_timeoutInSeconds = 0;
  pTaskCreateResult.m_localTaskId = 0;
  pTaskCreateResult.m_task = NULL;
  Instance = DWServicesAccess::GetInstance();
  UserLists = DWServicesAccess::GetUserLists(Instance, controllerIndex);
  v6 = (TaskCreateRequest *)DWUserLists::CreateUserList(UserLists, &result, s_userListTypeMapping[this->m_listType].m_listName, &this->m_createUserListResponse);
  if ( v6 != (TaskCreateRequest *)&pTaskCreateRequest.m_remoteDemonwareTask )
  {
    if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->~bdReferencable)(pTaskCreateRequest.m_remoteDemonwareTask.m_ptr, 1i64);
    v7 = *(bdRemoteTask **)&v6->m_controllerIndex;
    pTaskCreateRequest.m_remoteDemonwareTask.m_ptr = v7;
    if ( v7 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v7->m_refCount, 1u);
  }
  if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result.m_ptr )
    ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
  pTaskCreateRequest.m_appData = this;
  pTaskCreateRequest.m_onCompletionCallback = UserList::CreateListComplete;
  pTaskCreateRequest.m_controllerIndex = controllerIndex;
  if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr && (v8 = TaskManager::GetInstance(), TaskManager::CreateTask(v8, &pTaskCreateRequest, &pTaskCreateResult)) )
  {
    Com_Printf(25, "[Userlist][%s] %s: Successfully started to create userlist (controller %i)\n", s_userListTypeMapping[this->m_listType].m_listName, "UserList::CreateList", controllerIndex);
    this->m_dwTaskActive = 1;
  }
  else
  {
    Com_Printf(25, "[Userlist][%s] %s: Failed to create userlist (controller %i)\n", s_userListTypeMapping[this->m_listType].m_listName, "UserList::CreateList", controllerIndex);
    ++this->m_failCount;
    this->m_lastFailTimestamp = Sys_Milliseconds();
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
}

/*
==============
UserList::CreateListComplete
==============
*/
void UserList::CreateListComplete(GenericTask *task, eTaskManagerTaskState state)
{
  UserList *m_appData; 

  m_appData = (UserList *)task->m_appData;
  m_appData->m_dwTaskActive = 0;
  if ( state )
  {
    ++m_appData->m_failCount;
    m_appData->m_lastFailTimestamp = Sys_Milliseconds();
  }
  else if ( !m_appData->m_fetched )
  {
    UserList::FetchUserList_Internal(m_appData, task->m_controllerIndex, (const char *)&queryFormat.fmt + 3);
  }
}

/*
==============
UserList::FetchMemberListComplete
==============
*/
void UserList::FetchMemberListComplete(GenericTask *task, eTaskManagerTaskState state)
{
  UserList *m_appData; 
  bdGetUserListResponse *p_m_response; 
  int NumUsers; 
  signed int v6; 
  bdUserListEntity *User; 
  unsigned __int64 m_userID; 
  __int64 v9; 
  bdUserDetails *UserDetails; 
  const char *Username; 
  bdUserDetails *v12; 
  bool UsernameWithHash; 
  __int64 v14; 
  char *v15; 
  const char *PageToken; 
  signed __int64 v17; 
  char v18; 
  char v19; 
  unsigned int m_numUsers; 
  void (__fastcall *m_userListUpdatedCallback)(const int); 
  const char *v23; 
  char *fmt; 
  bdLobbyErrorCode ErrorCode; 
  XUID xuid; 
  __int64 v27; 
  bdUserAccountID result; 
  bdUserDetails v29; 

  v27 = -2i64;
  m_appData = (UserList *)task->m_appData;
  m_appData->m_dwTaskActive = 0;
  if ( state )
  {
    if ( state == TASKSTATE_ERROR && bdRemoteTask::getErrorCode(task->m_remoteDemonwareTask.m_ptr) == BD_CROSS_PLATFORM_USERLISTS_LIST_DOES_NOT_EXIST )
    {
      Com_Printf(25, "[Userlist][%s] %s: BD_CROSS_PLATFORM_USERLISTS_LIST_DOES_NOT_EXIST received, need to create this list.", s_userListTypeMapping[m_appData->m_listType].m_listName, "UserList::FetchMemberListComplete");
      UserList::CreateList(m_appData, task->m_controllerIndex);
    }
    else
    {
      ErrorCode = bdRemoteTask::getErrorCode(task->m_remoteDemonwareTask.m_ptr);
      Com_PrintError(25, "[Userlist][%s] %s: Unable to fetch the userlist %s (error code: %i)\n", s_userListTypeMapping[m_appData->m_listType].m_listName, "UserList::FetchMemberListComplete", s_userListTypeMapping[m_appData->m_listType].m_listName, ErrorCode);
      m_appData->m_fetched = 0;
      m_appData->m_numUsers = 0;
      ++m_appData->m_failCount;
      m_appData->m_lastFailTimestamp = Sys_Milliseconds();
    }
  }
  else
  {
    p_m_response = &m_appData->m_response;
    NumUsers = bdGetUserListResponse::getNumUsers(&m_appData->m_response);
    v6 = 0;
    if ( NumUsers <= 0 )
    {
LABEL_9:
      v14 = 0x7FFFFFFFi64;
      v15 = (char *)&queryFormat.fmt + 3;
      PageToken = bdGetUserListResponse::getPageToken(p_m_response);
      if ( !PageToken && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
        __debugbreak();
      v17 = PageToken - ((const char *)&queryFormat.fmt + 3);
      do
      {
        v18 = v15[v17];
        v19 = *v15++;
        if ( !v14-- )
          break;
        if ( v18 != v19 )
        {
          LODWORD(fmt) = 200 - m_appData->m_numUsers;
          Com_Printf(25, "[Userlist][%s] %s: has %i remaining slots and there are more to be fetched, will fetch with next page token\n", s_userListTypeMapping[m_appData->m_listType].m_listName, "UserList::FetchMemberListComplete", fmt);
          v23 = bdGetUserListResponse::getPageToken(p_m_response);
          UserList::FetchUserList_Internal(m_appData, task->m_controllerIndex, v23);
          return;
        }
      }
      while ( v18 );
    }
    else
    {
      while ( m_appData->m_numUsers < 0xC8 )
      {
        User = bdGetUserListResponse::getUser(p_m_response, v6);
        m_userID = bdUserListEntity::getUser(User, &result)->m_userID;
        bdUserAccountID::~bdUserAccountID((bdUserAccountID *)result.gap38);
        bdReferencable::~bdReferencable((bdReferencable *)result.gap38);
        XUID::FromUniversalId(&xuid, m_userID);
        if ( !XUID::IsNull(&xuid) )
        {
          v9 = (__int64)&m_appData->m_users[m_appData->m_numUsers];
          XUID::operator=((XUID *)v9, &xuid);
          *(_QWORD *)(v9 + 8) = bdUserListEntity::getScore(User);
          UserDetails = bdUserListEntity::getUserDetails(User, (bdUserDetails *)&result);
          Username = bdUserDetails::getUsername(UserDetails);
          Core_strcpy((char *)(v9 + 16), 0x40ui64, Username);
          bdUserDetails::~bdUserDetails(&v29);
          bdReferencable::~bdReferencable((bdReferencable *)&v29);
          v12 = bdUserListEntity::getUserDetails(User, (bdUserDetails *)&result);
          UsernameWithHash = bdUserDetails::getUsernameWithHash(v12, (char *)&v29.__vftable + 16);
          bdUserDetails::~bdUserDetails(&v29);
          bdReferencable::~bdReferencable((bdReferencable *)&v29);
          if ( UsernameWithHash )
            Core_strcpy_truncate((char *)(v9 + 80), 0x40ui64, (const char *)&v29.__vftable + 16);
          ++m_appData->m_numUsers;
        }
        ++v6;
        p_m_response = &m_appData->m_response;
        if ( v6 >= NumUsers )
          goto LABEL_9;
      }
    }
    LODWORD(fmt) = m_appData->m_numUsers;
    Com_Printf(25, "[Userlist][%s] %s: all fetches complete totaling %i users,\n", s_userListTypeMapping[m_appData->m_listType].m_listName, "UserList::FetchMemberListComplete", fmt);
    m_numUsers = m_appData->m_numUsers;
    if ( m_numUsers )
      qsort(m_appData->m_users, m_numUsers, 0xA0ui64, (_CoreCrtNonSecureSearchSortCompareFunction)SortUserlistTime);
    m_appData->m_fetched = 1;
    m_userListUpdatedCallback = m_appData->m_userListUpdatedCallback;
    if ( m_userListUpdatedCallback )
      m_userListUpdatedCallback(task->m_controllerIndex);
  }
}

/*
==============
UserList::FetchUserList
==============
*/
bool UserList::FetchUserList(UserList *this, const int controllerIndex)
{
  return !this->m_fetched && UserList::FetchUserList_Internal(this, controllerIndex, (const char *)&queryFormat.fmt + 3);
}

/*
==============
UserList::FetchUserList_Internal
==============
*/
char UserList::FetchUserList_Internal(UserList *this, const int controllerIndex, const char *pageToken)
{
  DWServicesAccess *Instance; 
  DWUserLists *UserLists; 
  TaskCreateRequest *UserList; 
  bdRemoteTask *v9; 
  TaskManager *v10; 
  char v11; 
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  bdGetUserListResponse *response; 
  TaskCreateResult pTaskCreateResult; 
  TaskCreateRequest pTaskCreateRequest; 
  bdReference<bdRemoteTask> result; 

  if ( !UserList::ShouldCreateDWTask(this) || this->m_dwTaskActive )
    return 0;
  bdGetUserListResponse::reset(&this->m_response);
  *(_QWORD *)&pTaskCreateRequest.m_controllerIndex = -1i64;
  memset(&pTaskCreateRequest.m_appData, 0, 48);
  pTaskCreateRequest.m_cancelTaskOnSignoutEvent = 1;
  pTaskCreateRequest.m_timeoutInSeconds = 0;
  pTaskCreateResult.m_localTaskId = 0;
  pTaskCreateResult.m_task = NULL;
  Instance = DWServicesAccess::GetInstance();
  UserLists = DWServicesAccess::GetUserLists(Instance, controllerIndex);
  UserList = (TaskCreateRequest *)DWUserLists::GetUserList(UserLists, &result, s_userListTypeMapping[this->m_listType].m_listName, pageToken, &this->m_response);
  if ( UserList != (TaskCreateRequest *)&pTaskCreateRequest.m_remoteDemonwareTask )
  {
    if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->~bdReferencable)(pTaskCreateRequest.m_remoteDemonwareTask.m_ptr, 1i64);
    v9 = *(bdRemoteTask **)&UserList->m_controllerIndex;
    pTaskCreateRequest.m_remoteDemonwareTask.m_ptr = v9;
    if ( v9 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v9->m_refCount, 1u);
  }
  if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result.m_ptr )
    ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
  pTaskCreateRequest.m_appData = this;
  pTaskCreateRequest.m_onCompletionCallback = UserList::FetchMemberListComplete;
  pTaskCreateRequest.m_controllerIndex = controllerIndex;
  if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr && (v10 = TaskManager::GetInstance(), TaskManager::CreateTask(v10, &pTaskCreateRequest, &pTaskCreateResult)) )
  {
    LODWORD(response) = controllerIndex;
    Com_Printf(25, "[Userlist][%s] %s: Successfully started to fetch (controller %i)\n", s_userListTypeMapping[this->m_listType].m_listName, "UserList::FetchUserList_Internal", response);
    this->m_dwTaskActive = 1;
    v11 = 1;
  }
  else
  {
    LODWORD(response) = controllerIndex;
    Com_PrintError(25, "[Userlist][%s] %s: Failed to start fetching (controller %i)\n", s_userListTypeMapping[this->m_listType].m_listName, "UserList::FetchUserList_Internal", response);
    v11 = 0;
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
  return v11;
}

/*
==============
GetThrottleRateForType
==============
*/
__int64 GetThrottleRateForType(const UserListType listType)
{
  __int32 v2; 
  const dvar_t *v4; 
  const char *v5; 

  if ( listType == (COUNT|DODGE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\userlist.cpp", 45, ASSERT_TYPE_ASSERT, "(listType != UserListType::COUNT)", (const char *)&queryFormat, "listType != UserListType::COUNT") )
    __debugbreak();
  if ( listType == MOVEMENT )
  {
    v4 = DVARINT_dw_userlist_recent_throttle;
    if ( DVARINT_dw_userlist_recent_throttle )
      goto LABEL_16;
    v5 = "dw_userlist_recent_throttle";
    goto LABEL_14;
  }
  v2 = listType - 1;
  if ( !v2 )
  {
    v4 = DVARINT_dw_userlist_blocked_throttle;
    if ( DVARINT_dw_userlist_blocked_throttle )
      goto LABEL_16;
    v5 = "dw_userlist_blocked_throttle";
LABEL_14:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v5) )
      __debugbreak();
    goto LABEL_16;
  }
  if ( v2 != 1 )
    return 0i64;
  v4 = DVARINT_dw_userlist_muted_throttle;
  if ( !DVARINT_dw_userlist_muted_throttle )
  {
    v5 = "dw_userlist_muted_throttle";
    goto LABEL_14;
  }
LABEL_16:
  Dvar_CheckFrontendServerThread(v4);
  return v4->current.unsignedInt;
}

/*
==============
UserList::GetUserByIndex
==============
*/
char UserList::GetUserByIndex(UserList *this, const unsigned int index, const UserList::User **userOut)
{
  __int64 v4; 
  unsigned int m_numUsers; 

  v4 = index;
  if ( index >= this->m_numUsers )
  {
    m_numUsers = this->m_numUsers;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\userlist.cpp", 100, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( m_numUsers )", "index doesn't index m_numUsers\n\t%i not in [0, %i)", index, m_numUsers) )
      __debugbreak();
  }
  if ( (unsigned int)v4 >= this->m_numUsers )
    return 0;
  *userOut = &this->m_users[v4];
  return 1;
}

/*
==============
UserList::GetUserByXUID
==============
*/
char UserList::GetUserByXUID(UserList *this, const XUID xuid, const UserList::User **userOut)
{
  __int64 v3; 
  XUID xuida; 

  xuida.m_id = xuid.m_id;
  v3 = 0i64;
  if ( !this->m_numUsers )
    return 0;
  while ( !XUID::operator==(&this->m_users[v3].xuid, &xuida) )
  {
    v3 = (unsigned int)(v3 + 1);
    if ( (unsigned int)v3 >= this->m_numUsers )
      return 0;
  }
  *userOut = &this->m_users[v3];
  return 1;
}

/*
==============
UserList::GetUserXB3PlatformId
==============
*/
unsigned __int64 UserList::GetUserXB3PlatformId(UserList *this, const XUID xuid)
{
  __int64 v2; 
  __int64 v4; 
  XUID xuida; 

  v2 = 0i64;
  xuida.m_id = xuid.m_id;
  if ( !this->m_numUsers )
    return 0i64;
  while ( 1 )
  {
    v4 = v2;
    if ( XUID::operator==(&this->m_users[v2].xuid, &xuida) )
      break;
    v2 = (unsigned int)(v2 + 1);
    if ( (unsigned int)v2 >= this->m_numUsers )
      return 0i64;
  }
  if ( !this->m_users[v4].xb3DataSet )
    return 0i64;
  return this->m_users[v4].xb3PlatformId;
}

/*
==============
UserList::IsDWTaskActive
==============
*/
_BOOL8 UserList::IsDWTaskActive(UserList *this)
{
  return this->m_dwTaskActive;
}

/*
==============
UserList::RegisterUserListUpdatedCallback
==============
*/
void UserList::RegisterUserListUpdatedCallback(UserList *this, void (*const callback)(const int))
{
  this->m_userListUpdatedCallback = callback;
}

/*
==============
UserList::RemoveUsersFromList
==============
*/
void UserList::RemoveUsersFromList(UserList *this, const int controllerIndex)
{
  unsigned int v4; 
  int v5; 
  unsigned int v6; 
  unsigned int v7; 
  bdUserListEntity *v8; 
  DWServicesAccess *Instance; 
  DWUserLists *UserLists; 
  TaskCreateRequest *v11; 
  bdRemoteTask *v12; 
  TaskManager *v13; 
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  char *fmt; 
  TaskCreateRequest pTaskCreateRequest; 
  XUID v17; 
  bdReference<bdRemoteTask> result; 
  __int64 v19; 
  TaskCreateResult pTaskCreateResult; 
  bdUserAccountID v21; 
  bdUserListEntity ptr[200]; 

  v19 = -2i64;
  if ( (unsigned int)controllerIndex >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\userlist.cpp", 616, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, 8) )
    __debugbreak();
  if ( this->m_fetched && !this->m_dwTaskActive )
  {
    v4 = this->m_lastRemoveUserTaskTimestamp + GetThrottleRateForType((const UserListType)this->m_listType);
    if ( v4 < Sys_Milliseconds() )
    {
      if ( IWStaticCircularQueue<UserList::User,200,unsigned short>::Size(this->m_pendingUserQueue) )
      {
        `eh vector constructor iterator'(ptr, 0xF8ui64, 0xC8ui64, (void (__fastcall *)(void *))bdUserListEntity::bdUserListEntity, (void (__fastcall *)(void *))bdUserListEntity::~bdUserListEntity);
        v5 = IWStaticCircularQueue<UserList::User,200,unsigned short>::Size(this->m_pendingUserQueue);
        v6 = 200;
        if ( v5 < 200 )
          v6 = v5;
        v7 = 0;
        if ( v6 )
        {
          v8 = ptr;
          do
          {
            v17.m_id = IWStaticCircularQueue<UserList::User,200,unsigned short>::operator[](this->m_pendingUserQueue, v7)->xuid.m_id;
            if ( !XUID::IsValid(&v17) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\userlist.cpp", 646, ASSERT_TYPE_ASSERT, "(xuid.IsValid())", (const char *)&queryFormat, "xuid.IsValid()") )
              __debugbreak();
            bdUserAccountID::bdUserAccountID(&v21);
            v21.m_userID = XUID::GetUniversalId(&v17);
            Core_strncpy(v21._bytes_20, 0xAui64, "uno", 4ui64);
            bdUserListEntity::setUser(v8, &v21);
            bdUserAccountID::~bdUserAccountID((bdUserAccountID *)v21.gap38);
            bdReferencable::~bdReferencable((bdReferencable *)v21.gap38);
            ++v7;
            ++v8;
          }
          while ( v7 < v6 );
        }
        *(_QWORD *)&pTaskCreateRequest.m_controllerIndex = -1i64;
        memset(&pTaskCreateRequest.m_appData, 0, 48);
        pTaskCreateRequest.m_cancelTaskOnSignoutEvent = 1;
        pTaskCreateRequest.m_timeoutInSeconds = 0;
        pTaskCreateResult.m_localTaskId = 0;
        pTaskCreateResult.m_task = NULL;
        Instance = DWServicesAccess::GetInstance();
        UserLists = DWServicesAccess::GetUserLists(Instance, controllerIndex);
        v11 = (TaskCreateRequest *)DWUserLists::RemoveUsersFromList(UserLists, &result, s_userListTypeMapping[this->m_listType].m_listName, ptr, v6, &this->m_removeUserListResponse);
        if ( v11 != (TaskCreateRequest *)&pTaskCreateRequest.m_remoteDemonwareTask )
        {
          v12 = *(bdRemoteTask **)&v11->m_controllerIndex;
          pTaskCreateRequest.m_remoteDemonwareTask.m_ptr = v12;
          if ( v12 )
            _InterlockedExchangeAdd((volatile signed __int32 *)&v12->m_refCount, 1u);
        }
        if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result.m_ptr )
          ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
        pTaskCreateRequest.m_appData = this;
        pTaskCreateRequest.m_onCompletionCallback = UserList::RemoveUsersFromListComplete;
        pTaskCreateRequest.m_controllerIndex = controllerIndex;
        if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr && (v13 = TaskManager::GetInstance(), TaskManager::CreateTask(v13, &pTaskCreateRequest, &pTaskCreateResult)) )
        {
          LODWORD(fmt) = controllerIndex;
          Com_Printf(25, "[Userlist][%s] %s: Successfully started to remove users (controller %i)\n", s_userListTypeMapping[this->m_listType].m_listName, "UserList::RemoveUsersFromList", fmt);
          this->m_dwTaskActive = 1;
          this->m_lastRemoveUserTaskTimestamp = Sys_Milliseconds();
        }
        else
        {
          LODWORD(fmt) = controllerIndex;
          Com_Printf(25, "[Userlist][%s] %s: Failed removing users (controller %i)\n", s_userListTypeMapping[this->m_listType].m_listName, "UserList::RemoveUsersFromList", fmt);
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
        `eh vector destructor iterator'(ptr, 0xF8ui64, 0xC8ui64, (void (__fastcall *)(void *))bdUserListEntity::~bdUserListEntity);
      }
    }
  }
}

/*
==============
UserList::RemoveUsersFromListComplete
==============
*/
void UserList::RemoveUsersFromListComplete(GenericTask *task, eTaskManagerTaskState state)
{
  UserList *m_appData; 
  const char *m_listName; 
  int v5; 
  int v6; 
  int v7; 
  const char *v8; 
  __int64 v9; 
  bool v10; 
  unsigned int m_numUsers; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 
  int start; 
  unsigned int v16; 
  void (__fastcall *m_userListUpdatedCallback)(const int); 

  m_appData = (UserList *)task->m_appData;
  m_listName = s_userListTypeMapping[m_appData->m_listType].m_listName;
  m_appData->m_dwTaskActive = 0;
  if ( state )
  {
    Com_Printf(25, "[Userlist][%s] %s: Failed to remove users\n", m_listName, "UserList::RemoveUsersFromListComplete");
    ++m_appData->m_failCount;
    m_appData->m_lastFailTimestamp = Sys_Milliseconds();
  }
  else
  {
    Com_Printf(25, "[Userlist][%s] %s: Successfully removed users\n", m_listName, "UserList::RemoveUsersFromListComplete");
    v5 = IWStaticCircularQueue<UserList::User,200,unsigned short>::Size(m_appData->m_pendingUserQueue);
    v6 = 200;
    if ( v5 < 200 )
      v6 = v5;
    if ( (unsigned int)v6 > 0xC8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\userlist.cpp", 569, ASSERT_TYPE_ASSERT, "(numXuids <= ( sizeof( *array_counter( userList->m_users ) ) + 0 ))", (const char *)&queryFormat, "numXuids <= ARRAY_COUNT( userList->m_users )") )
      __debugbreak();
    v7 = 0;
    v8 = "this->cleared";
    if ( v6 > 0 )
    {
      while ( m_appData->m_numUsers )
      {
        v9 = 0i64;
        while ( 1 )
        {
          if ( !m_appData->m_pendingUserQueue[0].cleared && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 81, ASSERT_TYPE_ASSERT, "(this->cleared)", (const char *)&queryFormat, "this->cleared") )
            __debugbreak();
          if ( !m_appData->m_pendingUserQueue[0].size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 82, ASSERT_TYPE_ASSERT, "(this->size > 0)", (const char *)&queryFormat, "this->size > 0") )
            __debugbreak();
          v10 = XUID::operator==(&m_appData->m_users[v9].xuid, &m_appData->m_pendingUserQueue[0].entries[m_appData->m_pendingUserQueue[0].start].xuid);
          m_numUsers = m_appData->m_numUsers;
          if ( v10 )
            break;
          v9 = (unsigned int)(v9 + 1);
          if ( (unsigned int)v9 >= m_numUsers )
            goto LABEL_20;
        }
        v12 = m_numUsers - 1;
        m_appData->m_numUsers = v12;
        v13 = (__int64)&m_appData->m_users[v12];
        v14 = (__int64)&m_appData->m_users[v9];
        XUID::operator=((XUID *)v14, (const XUID *)v13);
        *(_QWORD *)(v14 + 8) = *(_QWORD *)(v13 + 8);
        Core_strcpy((char *)(v14 + 16), 0x40ui64, (const char *)(v13 + 16));
        Core_strcpy((char *)(v14 + 80), 0x40ui64, (const char *)(v13 + 80));
        *(_QWORD *)(v14 + 144) = *(_QWORD *)(v13 + 144);
        *(_BYTE *)(v14 + 152) = *(_BYTE *)(v13 + 152);
LABEL_20:
        if ( !m_appData->m_pendingUserQueue[0].cleared && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 122, ASSERT_TYPE_ASSERT, "(this->cleared)", (const char *)&queryFormat, "this->cleared") )
          __debugbreak();
        if ( !m_appData->m_pendingUserQueue[0].size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 123, ASSERT_TYPE_ASSERT, "(this->size > 0)", (const char *)&queryFormat, "this->size > 0") )
          __debugbreak();
        start = m_appData->m_pendingUserQueue[0].start;
        --m_appData->m_pendingUserQueue[0].size;
        ++v7;
        v8 = "this->cleared";
        m_appData->m_pendingUserQueue[0].start = (start + 1) % 0xC8u;
        if ( v7 >= v6 )
          goto LABEL_29;
      }
      Com_PrintError(25, "[Userlist][%s] %s: there are no players in this list to remove\n", m_listName, "UserList::RemoveUsersFromListComplete");
    }
LABEL_29:
    v16 = m_appData->m_numUsers;
    if ( v16 )
      qsort(m_appData->m_users, v16, 0xA0ui64, (_CoreCrtNonSecureSearchSortCompareFunction)SortUserlistTime);
    if ( !m_appData->m_pendingUserQueue[0].cleared && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 36, ASSERT_TYPE_ASSERT, "(this->cleared)", (const char *)&queryFormat, "this->cleared") )
      __debugbreak();
    if ( m_appData->m_pendingUserQueue[0].size )
    {
      UserList::RemoveUsersFromList(m_appData, task->m_controllerIndex);
    }
    else
    {
      m_userListUpdatedCallback = m_appData->m_userListUpdatedCallback;
      if ( m_userListUpdatedCallback )
        ((void (__fastcall *)(_QWORD, const char *))m_userListUpdatedCallback)((unsigned int)task->m_controllerIndex, v8);
    }
  }
}

/*
==============
UserList::Reset
==============
*/
void UserList::Reset(UserList *this)
{
  Com_Printf(25, "[Userlist][%s] %s: \n", s_userListTypeMapping[this->m_listType].m_listName, "UserList::Reset");
  this->m_fetched = 0;
  this->m_numUsers = 0;
  bdGetUserListResponse::reset(&this->m_response);
  memset_0(this->m_users, 0, sizeof(this->m_users));
  this->m_pendingUserQueue[0].cleared = 1;
  *(_DWORD *)&this->m_pendingUserQueue[0].start = 0;
  this->m_pendingUserQueue[1].cleared = 1;
  *(_DWORD *)&this->m_pendingUserQueue[1].start = 0;
  *(_WORD *)&this->m_dwTaskActive = 0;
  *(_QWORD *)&this->m_failCount = 0i64;
}

/*
==============
UserList::SetUserXB3Data
==============
*/
bool UserList::SetUserXB3Data(UserList *this, const XUID xuid, Platform::String *xb3GamerTag, const unsigned __int64 platformId)
{
  UserList::User *v7; 
  unsigned int v8; 
  bool result; 
  XUID xuida; 

  xuida.m_id = xuid.m_id;
  if ( !XUID::IsValid(&xuida) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\userlist.cpp", 739, ASSERT_TYPE_ASSERT, "(xuid.IsValid())", (const char *)&queryFormat, "xuid.IsValid()") )
    __debugbreak();
  if ( !this->m_numUsers )
    return 0;
  if ( XUID::IsNull(&xuida) )
    return 0;
  v7 = NULL;
  v8 = 0;
  if ( !this->m_numUsers )
    return 0;
  do
  {
    if ( XUID::operator==(&this->m_users[v8].xuid, &xuida) )
      v7 = &this->m_users[v8];
    ++v8;
  }
  while ( v8 < this->m_numUsers );
  if ( !v7 )
    return 0;
  ConvertStringGamertagToDisplayableBuffer(xb3GamerTag, v7->name, 0x40ui64);
  result = 1;
  v7->xb3PlatformId = platformId;
  v7->xb3DataSet = 1;
  return result;
}

/*
==============
UserList::ShouldCreateDWTask
==============
*/
bool UserList::ShouldCreateDWTask(UserList *this)
{
  const dvar_t *v1; 
  signed int m_failCount; 
  const dvar_t *v5; 
  int v6; 
  int integer; 

  v1 = DVARINT_dw_userlist_max_failcount;
  if ( !DVARINT_dw_userlist_max_failcount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "dw_userlist_max_failcount") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  m_failCount = this->m_failCount;
  if ( m_failCount >= v1->current.integer )
    return 0;
  if ( !m_failCount )
    return 1;
  v5 = DVARINT_dw_userlist_retry_throttle;
  v6 = 1 << m_failCount;
  if ( !DVARINT_dw_userlist_retry_throttle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "dw_userlist_retry_throttle") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  integer = v5->current.integer;
  return Sys_Milliseconds() > (signed int)(this->m_lastFailTimestamp + v6 * integer);
}

/*
==============
UserList::SortList
==============
*/
void UserList::SortList(UserList *this)
{
  unsigned int m_numUsers; 

  m_numUsers = this->m_numUsers;
  if ( m_numUsers )
    qsort(this->m_users, m_numUsers, 0xA0ui64, (_CoreCrtNonSecureSearchSortCompareFunction)SortUserlistTime);
}

/*
==============
SortUserlistTime
==============
*/
__int64 SortUserlistTime(const void *a, const void *b)
{
  __int64 result; 

  result = 1i64;
  if ( *((_QWORD *)a + 1) >= *((_QWORD *)b + 1) )
    return 0xFFFFFFFFi64;
  return result;
}

/*
==============
UserList::TrackError
==============
*/
void UserList::TrackError(UserList *this)
{
  ++this->m_failCount;
  this->m_lastFailTimestamp = Sys_Milliseconds();
}

