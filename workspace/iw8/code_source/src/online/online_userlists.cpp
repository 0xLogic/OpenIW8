/*
==============
OnlineUserLists::RemoveUsersFromList
==============
*/

bool __fastcall OnlineUserLists::RemoveUsersFromList(OnlineUserLists *this, const int controllerIndex, const UserListType listType, const UserList::User *users, const int numUsers)
{
  return ?RemoveUsersFromList@OnlineUserLists@@QEAA_NHW4UserListType@@PEBUUser@UserList@@H@Z(this, controllerIndex, listType, users, numUsers);
}

/*
==============
OnlineUserLists::GetUserByIndex
==============
*/

bool __fastcall OnlineUserLists::GetUserByIndex(OnlineUserLists *this, const int controllerIndex, const UserListType listType, const int index, const UserList::User **userOut)
{
  return ?GetUserByIndex@OnlineUserLists@@QEAA_NHW4UserListType@@HPEAPEBUUser@UserList@@@Z(this, controllerIndex, listType, index, userOut);
}

/*
==============
OnlineUserLists::GetInstancePtr
==============
*/

OnlineUserLists *__fastcall OnlineUserLists::GetInstancePtr()
{
  return ?GetInstancePtr@OnlineUserLists@@SAPEAV1@XZ();
}

/*
==============
OnlineUserLists::AddUsersToList
==============
*/

bool __fastcall OnlineUserLists::AddUsersToList(OnlineUserLists *this, const int controllerIndex, const UserListType listType, const UserList::User *users, const int numUsers)
{
  return ?AddUsersToList@OnlineUserLists@@QEAA_NHW4UserListType@@PEBUUser@UserList@@H@Z(this, controllerIndex, listType, users, numUsers);
}

/*
==============
OnlineUserLists::RegisterUserListUpdatedCallback
==============
*/

void __fastcall OnlineUserLists::RegisterUserListUpdatedCallback(OnlineUserLists *this, const int controllerIndex, const UserListType listType, void (__fastcall *callback)(const int))
{
  ?RegisterUserListUpdatedCallback@OnlineUserLists@@QEAAXHW4UserListType@@P6AXH@Z@Z(this, controllerIndex, listType, callback);
}

/*
==============
OnlineUserLists::IsListFetched
==============
*/

bool __fastcall OnlineUserLists::IsListFetched(OnlineUserLists *this, const int controllerIndex, const UserListType listType)
{
  return ?IsListFetched@OnlineUserLists@@QEAA_NHW4UserListType@@@Z(this, controllerIndex, listType);
}

/*
==============
OnlineUserLists::SetUserXB3Data
==============
*/

bool __fastcall OnlineUserLists::SetUserXB3Data(OnlineUserLists *this, const int controllerIndex, const UserListType listType, const XUID xuid, Platform::String *xb3GamerTag, const unsigned __int64 platformId)
{
  return ?SetUserXB3Data@OnlineUserLists@@QEAA_NHW4UserListType@@UXUID@@PE$AAVString@Platform@@_K@Z(this, controllerIndex, listType, xuid, xb3GamerTag, platformId);
}

/*
==============
OnlineUserLists::GetUserList
==============
*/

bool __fastcall OnlineUserLists::GetUserList(OnlineUserLists *this, const int controllerIndex, const UserListType listType, const UserList **userListOut)
{
  return ?GetUserList@OnlineUserLists@@QEAA_NHW4UserListType@@PEAPEBVUserList@@@Z(this, controllerIndex, listType, userListOut);
}

/*
==============
OnlineUserLists::GetUserByXUID
==============
*/

bool __fastcall OnlineUserLists::GetUserByXUID(OnlineUserLists *this, const int controllerIndex, const UserListType listType, const XUID xuid, const UserList::User **userOut)
{
  return ?GetUserByXUID@OnlineUserLists@@QEAA_NHW4UserListType@@UXUID@@PEAPEBUUser@UserList@@@Z(this, controllerIndex, listType, xuid, userOut);
}

/*
==============
OnlineUserLists::GetInstance
==============
*/

OnlineUserLists *__fastcall OnlineUserLists::GetInstance()
{
  return ?GetInstance@OnlineUserLists@@SAAEAV1@XZ();
}

/*
==============
OnlineUserLists::OnSignedIn
==============
*/

void __fastcall OnlineUserLists::OnSignedIn(OnlineUserLists *this, const int controllerIndex, GenericSignInState signinState)
{
  ?OnSignedIn@OnlineUserLists@@UEAAXHW4GenericSignInState@@@Z(this, controllerIndex, signinState);
}

/*
==============
OnlineUserLists::ControllerFrame
==============
*/

void __fastcall OnlineUserLists::ControllerFrame(OnlineUserLists *this, const int controllerIndex)
{
  ?ControllerFrame@OnlineUserLists@@UEAAXH@Z(this, controllerIndex);
}

/*
==============
OnlineUserLists::Init
==============
*/

bool __fastcall OnlineUserLists::Init(OnlineUserLists *this)
{
  return ?Init@OnlineUserLists@@UEAA_NXZ(this);
}

/*
==============
OnlineUserLists::GetUserList_Internal
==============
*/

UserList *__fastcall OnlineUserLists::GetUserList_Internal(OnlineUserLists *this, const int controllerIndex, const UserListType listType)
{
  return ?GetUserList_Internal@OnlineUserLists@@AEAAPEAVUserList@@HW4UserListType@@@Z(this, controllerIndex, listType);
}

/*
==============
OnlineUserLists::GetUserXB3PlatformId
==============
*/

unsigned __int64 __fastcall OnlineUserLists::GetUserXB3PlatformId(OnlineUserLists *this, const int controllerIndex, const UserListType listType, const XUID xuid)
{
  return ?GetUserXB3PlatformId@OnlineUserLists@@QEAA_KHW4UserListType@@UXUID@@@Z(this, controllerIndex, listType, xuid);
}

/*
==============
OnlineUserLists::OnSignedOut
==============
*/

void __fastcall OnlineUserLists::OnSignedOut(OnlineUserLists *this, const int controllerIndex, GenericSignOutState signOutState)
{
  ?OnSignedOut@OnlineUserLists@@UEAAXHW4GenericSignOutState@@@Z(this, controllerIndex, signOutState);
}

/*
==============
OnlineUserLists::AddUsersToList
==============
*/
bool OnlineUserLists::AddUsersToList(OnlineUserLists *this, const int controllerIndex, const UserListType listType, const UserList::User *users, const int numUsers)
{
  UserList *UserList_Internal; 

  UserList_Internal = OnlineUserLists::GetUserList_Internal(this, controllerIndex, listType);
  return UserList_Internal->m_fetched && UserList::AddUsersToQueueType(UserList_Internal, USERLIST_ADD_QUEUE, users, numUsers);
}

/*
==============
OnlineUserLists::ControllerFrame
==============
*/
void OnlineUserLists::ControllerFrame(OnlineUserLists *this, const int controllerIndex)
{
  int v2; 
  __int64 v3; 
  bool v4; 
  LocalClientNum_t ClientFromController; 
  __int64 v8; 
  __int64 v9; 

  v2 = 0;
  v3 = 0i64;
  v4 = 1;
  do
  {
    if ( !v4 )
    {
      LODWORD(v9) = 3;
      LODWORD(v8) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_userlists.cpp", 131, ASSERT_TYPE_ASSERT, "(unsigned)( static_cast< int >( listType ) ) < (unsigned)( static_cast< int >( UserListType::COUNT ) )", "static_cast< int >( listType ) doesn't index static_cast< int >( UserListType::COUNT )\n\t%i not in [0, %i)", v8, v9) )
        __debugbreak();
    }
    ClientFromController = CL_Mgr_GetClientFromController(controllerIndex);
    UserList::ControllerFrame(&this->m_userLists[0][2 * ClientFromController + v3 + (int)ClientFromController], controllerIndex);
    ++v2;
    ++v3;
    v4 = (unsigned int)v2 < 3;
  }
  while ( v2 < 3 );
}

/*
==============
OnlineUserLists::GetInstance
==============
*/
OnlineUserLists *OnlineUserLists::GetInstance()
{
  if ( dword_14B6BB104 <= *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1772i64) )
    return &s_instance;
  j__Init_thread_header(&dword_14B6BB104);
  if ( dword_14B6BB104 != -1 )
    return &s_instance;
  s_instance.m_nextSystem = NULL;
  s_instance.m_initialized = 0;
  s_instance.__vftable = (OnlineUserLists_vtbl *)&OnlineUserLists::`vftable';
  `eh vector constructor iterator'(s_instance.m_userLists, 0x23DA8ui64, 6ui64, (void (__fastcall *)(void *))UserList::UserList, (void (__fastcall *)(void *))UserList::~UserList);
  j_atexit(OnlineUserLists::GetInstancePtr_::_2_::_dynamic_atexit_destructor_for__s_instance__);
  j__Init_thread_footer(&dword_14B6BB104);
  return &s_instance;
}

/*
==============
OnlineUserLists::GetInstancePtr
==============
*/
OnlineUserLists *OnlineUserLists::GetInstancePtr()
{
  if ( dword_14B6BB104 <= *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1772i64) )
    return &s_instance;
  j__Init_thread_header(&dword_14B6BB104);
  if ( dword_14B6BB104 != -1 )
    return &s_instance;
  `eh vector constructor iterator'(s_instance.m_userLists, 0x23DA8ui64, 6ui64, (void (__fastcall *)(void *))UserList::UserList, (void (__fastcall *)(void *))UserList::~UserList);
  j_atexit(OnlineUserLists::GetInstancePtr_::_2_::_dynamic_atexit_destructor_for__s_instance__);
  j__Init_thread_footer(&dword_14B6BB104);
  return &s_instance;
}

/*
==============
OnlineUserLists::GetUserByIndex
==============
*/
bool OnlineUserLists::GetUserByIndex(OnlineUserLists *this, const int controllerIndex, const UserListType listType, const int index, const UserList::User **userOut)
{
  UserList *UserList_Internal; 

  if ( !OnlineUserLists::GetUserList_Internal(this, controllerIndex, listType)->m_fetched )
    return 0;
  UserList_Internal = OnlineUserLists::GetUserList_Internal(this, controllerIndex, listType);
  return UserList::GetUserByIndex(UserList_Internal, index, userOut);
}

/*
==============
OnlineUserLists::GetUserByXUID
==============
*/
bool OnlineUserLists::GetUserByXUID(OnlineUserLists *this, const int controllerIndex, const UserListType listType, const XUID xuid, const UserList::User **userOut)
{
  UserList *UserList_Internal; 

  if ( !OnlineUserLists::GetUserList_Internal(this, controllerIndex, listType)->m_fetched )
    return 0;
  UserList_Internal = OnlineUserLists::GetUserList_Internal(this, controllerIndex, listType);
  return UserList::GetUserByXUID(UserList_Internal, xuid, userOut);
}

/*
==============
OnlineUserLists::GetUserList
==============
*/
char OnlineUserLists::GetUserList(OnlineUserLists *this, const int controllerIndex, const UserListType listType, const UserList **userListOut)
{
  if ( !OnlineUserLists::GetUserList_Internal(this, controllerIndex, listType)->m_fetched )
    return 0;
  *userListOut = OnlineUserLists::GetUserList_Internal(this, controllerIndex, listType);
  return 1;
}

/*
==============
OnlineUserLists::GetUserList_Internal
==============
*/
UserList *OnlineUserLists::GetUserList_Internal(OnlineUserLists *this, const int controllerIndex, const UserListType listType)
{
  __int64 v3; 
  int v8; 

  v3 = listType;
  if ( (unsigned int)listType >= (COUNT|DODGE) )
  {
    v8 = 3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_userlists.cpp", 131, ASSERT_TYPE_ASSERT, "(unsigned)( static_cast< int >( listType ) ) < (unsigned)( static_cast< int >( UserListType::COUNT ) )", "static_cast< int >( listType ) doesn't index static_cast< int >( UserListType::COUNT )\n\t%i not in [0, %i)", listType, v8) )
      __debugbreak();
  }
  return &this->m_userLists[CL_Mgr_GetClientFromController(controllerIndex)][v3];
}

/*
==============
OnlineUserLists::GetUserXB3PlatformId
==============
*/
unsigned __int64 OnlineUserLists::GetUserXB3PlatformId(OnlineUserLists *this, const int controllerIndex, const UserListType listType, const XUID xuid)
{
  UserList *UserList_Internal; 

  UserList_Internal = OnlineUserLists::GetUserList_Internal(this, controllerIndex, listType);
  if ( UserList_Internal->m_fetched )
    return UserList::GetUserXB3PlatformId(UserList_Internal, xuid);
  else
    return 0i64;
}

/*
==============
OnlineUserLists::Init
==============
*/
char OnlineUserLists::Init(OnlineUserLists *this)
{
  UserListType *p_m_listType; 
  __int64 v2; 

  p_m_listType = &this->m_userLists[0][2].m_listType;
  v2 = 2i64;
  do
  {
    *((_DWORD *)p_m_listType - 73428) = 0;
    *((_DWORD *)p_m_listType - 36714) = 1;
    *p_m_listType = COUNT;
    p_m_listType += 110142;
    --v2;
  }
  while ( v2 );
  return 1;
}

/*
==============
OnlineUserLists::IsListFetched
==============
*/
bool OnlineUserLists::IsListFetched(OnlineUserLists *this, const int controllerIndex, const UserListType listType)
{
  return OnlineUserLists::GetUserList_Internal(this, controllerIndex, listType)->m_fetched;
}

/*
==============
OnlineUserLists::OnSignedIn
==============
*/
void OnlineUserLists::OnSignedIn(OnlineUserLists *this, const int controllerIndex, GenericSignInState signinState)
{
  int i; 
  UserList *UserList_Internal; 

  if ( Live_IsUserSignedInToDemonware(controllerIndex) )
  {
    for ( i = 0; i < 3; ++i )
    {
      if ( !OnlineUserLists::GetUserList_Internal(this, controllerIndex, (const UserListType)i)->m_fetched )
      {
        UserList_Internal = OnlineUserLists::GetUserList_Internal(this, controllerIndex, (const UserListType)i);
        UserList::Reset(UserList_Internal);
        UserList::FetchUserList(UserList_Internal, controllerIndex);
      }
    }
  }
}

/*
==============
OnlineUserLists::OnSignedOut
==============
*/
void OnlineUserLists::OnSignedOut(OnlineUserLists *this, const int controllerIndex, GenericSignOutState signOutState)
{
  int v3; 
  __int64 v4; 
  bool v5; 
  LocalClientNum_t ClientFromController; 
  __int64 v9; 
  __int64 v10; 

  v3 = 0;
  v4 = 0i64;
  v5 = 1;
  do
  {
    if ( !v5 )
    {
      LODWORD(v10) = 3;
      LODWORD(v9) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_userlists.cpp", 131, ASSERT_TYPE_ASSERT, "(unsigned)( static_cast< int >( listType ) ) < (unsigned)( static_cast< int >( UserListType::COUNT ) )", "static_cast< int >( listType ) doesn't index static_cast< int >( UserListType::COUNT )\n\t%i not in [0, %i)", v9, v10) )
        __debugbreak();
    }
    ClientFromController = CL_Mgr_GetClientFromController(controllerIndex);
    UserList::Reset(&this->m_userLists[0][2 * ClientFromController + v4 + (int)ClientFromController]);
    ++v3;
    ++v4;
    v5 = (unsigned int)v3 < 3;
  }
  while ( v3 < 3 );
}

/*
==============
OnlineUserLists::RegisterUserListUpdatedCallback
==============
*/
void OnlineUserLists::RegisterUserListUpdatedCallback(OnlineUserLists *this, const int controllerIndex, const UserListType listType, void (*callback)(const int))
{
  UserList *UserList_Internal; 

  UserList_Internal = OnlineUserLists::GetUserList_Internal(this, controllerIndex, listType);
  UserList::RegisterUserListUpdatedCallback(UserList_Internal, callback);
}

/*
==============
OnlineUserLists::RemoveUsersFromList
==============
*/
bool OnlineUserLists::RemoveUsersFromList(OnlineUserLists *this, const int controllerIndex, const UserListType listType, const UserList::User *users, const int numUsers)
{
  UserList *UserList_Internal; 

  UserList_Internal = OnlineUserLists::GetUserList_Internal(this, controllerIndex, listType);
  return UserList_Internal->m_fetched && UserList::AddUsersToQueueType(UserList_Internal, USERLIST_REMOVE_QUEUE, users, numUsers);
}

/*
==============
OnlineUserLists::SetUserXB3Data
==============
*/
bool OnlineUserLists::SetUserXB3Data(OnlineUserLists *this, const int controllerIndex, const UserListType listType, const XUID xuid, Platform::String *xb3GamerTag, const unsigned __int64 platformId)
{
  UserList *UserList_Internal; 

  UserList_Internal = OnlineUserLists::GetUserList_Internal(this, controllerIndex, listType);
  return UserList_Internal->m_fetched && UserList::SetUserXB3Data(UserList_Internal, xuid, xb3GamerTag, platformId);
}

