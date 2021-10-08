/*
==============
Users_GetIndex
==============
*/

int __fastcall Users_GetIndex(const Windows::Xbox::System::User *userToFind)
{
  return ?Users_GetIndex@@YAHPE$ABVUser@System@Xbox@Windows@@@Z(userToFind);
}

/*
==============
Users_HandleAccountPickerResults
==============
*/

void __fastcall Users_HandleAccountPickerResults(Windows::Xbox::System::IUser *pickedUser, const int controllerIndex)
{
  ?Users_HandleAccountPickerResults@@YAXPE$AAUIUser@System@Xbox@Windows@@H@Z(pickedUser, controllerIndex);
}

/*
==============
Users_OnResume
==============
*/

void Users_OnResume(void)
{
  ?Users_OnResume@@YAXXZ();
}

/*
==============
Users_GetStorageSpaceForUserAsync
==============
*/

Windows::Foundation::IAsyncOperation<Windows::Xbox::Storage::ConnectedStorageSpace _> *__fastcall Users_GetStorageSpaceForUserAsync(Windows::Xbox::System::User *user)
{
  return ?Users_GetStorageSpaceForUserAsync@@YAPE$AAU?$IAsyncOperation@PE$AAVConnectedStorageSpace@Storage@Xbox@Windows@@@Foundation@Windows@@PE$AAVUser@System@Xbox@3@@Z(user);
}

/*
==============
Users_NumUsers
==============
*/

unsigned int __fastcall Users_NumUsers()
{
  return ?Users_NumUsers@@YA?BIXZ();
}

/*
==============
UserAndControllerPair::UserAndControllerPair
==============
*/

void __fastcall UserAndControllerPair::UserAndControllerPair(UserAndControllerPair *this, Windows::Xbox::System::User *newUser, int controllerIndex)
{
  ??0UserAndControllerPair@@QE$AAA@PE$AAVUser@System@Xbox@Windows@@H@Z(this, newUser, controllerIndex);
}

/*
==============
Users_Update
==============
*/

void Users_Update(void)
{
  ?Users_Update@@YAXXZ();
}

/*
==============
Users_ForceUsersRefresh
==============
*/

void Users_ForceUsersRefresh(void)
{
  ?Users_ForceUsersRefresh@@YAXXZ();
}

/*
==============
Users_Initialize
==============
*/

void Users_Initialize(void)
{
  ?Users_Initialize@@YAXXZ();
}

/*
==============
Users_GetUser
==============
*/

Windows::Xbox::System::User *__fastcall Users_GetUser(const unsigned int index)
{
  return ?Users_GetUser@@YAPE$AAVUser@System@Xbox@Windows@@I@Z(index);
}

/*
==============
Users_HandleControllerChangedUsersDuringSignout
==============
*/

void __fastcall Users_HandleControllerChangedUsersDuringSignout(Windows::Xbox::System::User *newUser, const int controllerIndex)
{
  ?Users_HandleControllerChangedUsersDuringSignout@@YAXPE$AAVUser@System@Xbox@Windows@@H@Z(newUser, controllerIndex);
}

/*
==============
UserAndControllerPair::~UserAndControllerPair
==============
*/

void __fastcall UserAndControllerPair::~UserAndControllerPair(UserAndControllerPair *this)
{
  ??1UserAndControllerPair@@QE$AAA@XZ(this);
}

/*
==============
Users_Shutdown
==============
*/

void Users_Shutdown(void)
{
  ?Users_Shutdown@@YAXXZ();
}

/*
==============
Users_GetUsers
==============
*/

Windows::Foundation::Collections::IVectorView<Windows::Xbox::System::User _> *__fastcall Users_GetUsers()
{
  return ?Users_GetUsers@@YAPE$AAU?$IVectorView@PE$AAVUser@System@Xbox@Windows@@@Collections@Foundation@Windows@@XZ();
}

/*
==============
Users_GetUserConnectedStorage
==============
*/

Windows::Xbox::Storage::ConnectedStorageSpace *__fastcall Users_GetUserConnectedStorage(Windows::Xbox::System::User *user)
{
  return ?Users_GetUserConnectedStorage@@YAPE$AAVConnectedStorageSpace@Storage@Xbox@Windows@@PE$AAVUser@System@34@@Z(user);
}

/*
==============
Users_HasPendingChanges
==============
*/

bool __fastcall Users_HasPendingChanges()
{
  return ?Users_HasPendingChanges@@YA_NXZ();
}

/*
==============
Users_GetUserByPlatformId
==============
*/

Windows::Xbox::System::User *__fastcall Users_GetUserByPlatformId(const unsigned __int64 platformId)
{
  return ?Users_GetUserByPlatformId@@YAPE$AAVUser@System@Xbox@Windows@@_K@Z(platformId);
}

/*
==============
UserAndControllerPair::UserAndControllerPair
==============
*/
void UserAndControllerPair::UserAndControllerPair(UserAndControllerPair *this, Windows::Xbox::System::User *newUser, int controllerIndex)
{
  Windows::Xbox::System::User *v6; 

  Platform::Object::Object(&this->Platform::Object);
  this->__IUserAndControllerPairPublicNonVirtuals::Platform::Object::__vftable = (UserAndControllerPair_vtbl *)&UserAndControllerPair::`vftable'{for `__IUserAndControllerPairPublicNonVirtuals'};
  this->Platform::IDisposable::Platform::Object::__vftable = (Platform::IDisposable_vtbl *)&UserAndControllerPair::`vftable'{for `Platform::IDisposable'};
  this->Platform::Object::__vftable = (Platform::Object_vtbl *)&UserAndControllerPair::`vftable'{for `Platform::Object'};
  this->Platform::Details::IWeakReferenceSource::__abi_IUnknown::__vftable = (Platform::Details::IWeakReferenceSource_vtbl *)&UserAndControllerPair::`vftable'{for `__abi_IUnknown'};
  this->Platform::Details::IWeakReferenceSource::Platform::Object::__vftable = (Platform::Object_vtbl *)&UserAndControllerPair::`vftable'{for `Platform::Object's `Platform::Details::IWeakReferenceSource'};
  this->__abi_reference_count.__pUnkMarshal = (__abi_IUnknown *volatile)-1i64;
  if ( __abi_module )
    __abi_module->__abi_IncrementObjectCount(__abi_module);
  v6 = this-><backing_store>m_addedUser;
  if ( newUser != v6 )
  {
    if ( newUser )
    {
      newUser->__abi_AddRef(newUser);
      v6 = this-><backing_store>m_addedUser;
    }
    if ( v6 )
      v6->__abi_Release(v6);
    this-><backing_store>m_addedUser = newUser;
  }
  this-><backing_store>m_controllerIndex = controllerIndex;
}

/*
==============
UserAndControllerPair::~UserAndControllerPair
==============
*/
void UserAndControllerPair::~UserAndControllerPair(UserAndControllerPair *this)
{
  Windows::Xbox::System::User *v2; 

  v2 = this-><backing_store>m_addedUser;
  if ( v2 )
  {
    v2->__abi_Release(v2);
    this-><backing_store>m_addedUser = NULL;
  }
}

/*
==============
Users_FindUserConnectedStorageTask
==============
*/
Windows::Foundation::IAsyncOperation<Windows::Xbox::Storage::ConnectedStorageSpace _> *Users_FindUserConnectedStorageTask(Windows::Xbox::System::User *user)
{
  DWORD CurrentThreadId; 
  Windows::Foundation::IAsyncOperation<Windows::Xbox::Storage::ConnectedStorageSpace _> *v3; 
  unsigned int v4; 
  UserConnectedStorageTaskPair *v5; 
  int v6; 
  HSTRING v7; 
  int v8; 
  HSTRING v9; 
  Windows::Xbox::System::User *v10; 
  int v11; 
  HSTRING v12; 
  int v13; 
  HSTRING v14; 
  Windows::Foundation::IAsyncOperation<Windows::Xbox::Storage::ConnectedStorageSpace _> *task; 
  HSTRING newString; 
  HSTRING string1; 
  Windows::Foundation::IAsyncOperation<Windows::Xbox::Storage::ConnectedStorageSpace _> *v19; 
  __int64 v20; 
  HSTRING result; 
  HSTRING string; 
  HSTRING v23; 

  v20 = -2i64;
  CurrentThreadId = GetCurrentThreadId();
  Com_Printf(16, "Users_FindUserConnectedStorageTask().  Thread 0x%X\n", CurrentThreadId);
  v3 = NULL;
  v19 = NULL;
  EnterCriticalSection(&s_lock);
  v4 = 0;
  v5 = s_userTasks;
  while ( 1 )
  {
    if ( v5->user && user )
    {
      string = NULL;
      v6 = user->__abi_get_XboxUserId(user, (Platform::String **)&string);
      if ( v6 < 0 )
        __abi_WinRTraiseException(v6);
      v7 = string;
      if ( string )
      {
        v8 = WindowsDuplicateString_0(string, &newString);
        if ( v8 < 0 )
          __abi_WinRTraiseException(v8);
        v9 = newString;
        v7 = string;
      }
      else
      {
        v9 = NULL;
      }
      WindowsDeleteString_0(v7);
      result = v9;
      v10 = v5->user;
      v23 = NULL;
      v11 = v10->__abi_get_XboxUserId(v10, (Platform::String **)&v23);
      if ( v11 < 0 )
        __abi_WinRTraiseException(v11);
      v12 = v23;
      if ( v23 )
      {
        v13 = WindowsDuplicateString_0(v23, &string1);
        if ( v13 < 0 )
          __abi_WinRTraiseException(v13);
        v14 = string1;
        v12 = v23;
      }
      else
      {
        v14 = NULL;
      }
      WindowsDeleteString_0(v12);
      LODWORD(result) = 0;
      WindowsCompareStringOrdinal_0(v14, v9, (INT32 *)&result);
      WindowsDeleteString_0(v14);
      WindowsDeleteString_0(v9);
      if ( !(_DWORD)result )
        break;
    }
    ++v4;
    ++v5;
    if ( v4 >= 0x10 )
      goto LABEL_16;
  }
  task = s_userTasks[v4].task;
  if ( task )
  {
    task->__abi_AddRef(s_userTasks[v4].task);
    v3 = task;
    v19 = task;
  }
LABEL_16:
  LeaveCriticalSection(&s_lock);
  if ( v3 )
    v3->__abi_AddRef(v3);
  if ( v3 )
    v3->__abi_Release(v3);
  return v3;
}

/*
==============
Users_ForceUsersRefresh
==============
*/
void Users_ForceUsersRefresh(void)
{
  DWORD CurrentThreadId; 

  CurrentThreadId = GetCurrentThreadId();
  Com_Printf(16, "Users_ForceUsersRefresh.  Thread 0x%X\n", CurrentThreadId);
  EnterCriticalSection(&s_lock);
  s_refresh = 1;
  LeaveCriticalSection(&s_lock);
  Users_Update();
}

/*
==============
Users_FreeUserConnectedStorageTask
==============
*/
void Users_FreeUserConnectedStorageTask(Windows::Xbox::System::User *user)
{
  Windows::Foundation::IAsyncOperation<Windows::Xbox::Storage::ConnectedStorageSpace _> *v2; 
  DWORD CurrentThreadId; 
  unsigned int v4; 
  UserConnectedStorageTaskPair *v5; 
  int v6; 
  HSTRING v7; 
  int v8; 
  HSTRING v9; 
  Windows::Xbox::System::User *v10; 
  int v11; 
  HSTRING v12; 
  int v13; 
  HSTRING v14; 
  int v15; 
  HSTRING v16; 
  int v17; 
  Windows::Foundation::IAsyncOperation<Windows::Xbox::Storage::ConnectedStorageSpace _> *task; 
  Windows::Foundation::IAsyncOperation<Windows::Xbox::Storage::ConnectedStorageSpace _> *v19; 
  Windows::Xbox::System::User *v20; 
  HSTRING newString; 
  HSTRING string1; 
  Windows::Foundation::IAsyncOperation<Windows::Xbox::Storage::ConnectedStorageSpace _> *v23; 
  __int64 v24; 
  HSTRING result; 
  HSTRING string; 
  HSTRING v27; 

  v24 = -2i64;
  v2 = NULL;
  v23 = NULL;
  CurrentThreadId = GetCurrentThreadId();
  Com_Printf(16, "Users_FreeUserConnectedStorageTask().  Thread 0x%X\n", CurrentThreadId);
  EnterCriticalSection(&s_lock);
  v4 = 0;
  v5 = s_userTasks;
  while ( 1 )
  {
    if ( v5->user && user )
    {
      string = NULL;
      v6 = user->__abi_get_XboxUserId(user, (Platform::String **)&string);
      if ( v6 < 0 )
        __abi_WinRTraiseException(v6);
      v7 = string;
      if ( string )
      {
        v8 = WindowsDuplicateString_0(string, &newString);
        if ( v8 < 0 )
          __abi_WinRTraiseException(v8);
        v9 = newString;
        v7 = string;
      }
      else
      {
        v9 = NULL;
      }
      WindowsDeleteString_0(v7);
      result = v9;
      v10 = v5->user;
      v27 = NULL;
      v11 = v10->__abi_get_XboxUserId(v10, (Platform::String **)&v27);
      if ( v11 < 0 )
        __abi_WinRTraiseException(v11);
      v12 = v27;
      if ( v27 )
      {
        v13 = WindowsDuplicateString_0(v27, &string1);
        if ( v13 < 0 )
          __abi_WinRTraiseException(v13);
        v14 = string1;
        v12 = v27;
      }
      else
      {
        v14 = NULL;
      }
      WindowsDeleteString_0(v12);
      LODWORD(result) = 0;
      WindowsCompareStringOrdinal_0(v14, v9, (INT32 *)&result);
      WindowsDeleteString_0(v14);
      WindowsDeleteString_0(v9);
      if ( !(_DWORD)result )
        break;
    }
    ++v4;
    ++v5;
    if ( v4 >= 0x10 )
      goto LABEL_16;
  }
  task = s_userTasks[v4].task;
  if ( task )
  {
    task->__abi_AddRef(s_userTasks[v4].task);
    v2 = task;
    v23 = task;
  }
  v19 = s_userTasks[v4].task;
  if ( v19 )
  {
    v19->__abi_Release(v19);
    s_userTasks[v4].task = NULL;
  }
  v20 = s_userTasks[v4].user;
  if ( v20 )
  {
    v20->__abi_Release(v20);
    s_userTasks[v4].user = NULL;
  }
LABEL_16:
  LeaveCriticalSection(&s_lock);
  if ( v2 )
  {
    while ( 1 )
    {
      string = NULL;
      v15 = v2->__abi_QueryInterface(v2, (Platform::Guid *)&_uuidof__AUIAsyncInfo_Foundation_Windows__, (void **)&string);
      if ( v15 < 0 )
        __abi_WinRTraiseException(v15);
      v16 = string;
      v27 = string;
      LODWORD(result) = 0;
      v17 = (*(__int64 (__fastcall **)(HSTRING, HSTRING *))(*(_QWORD *)string + 56i64))(string, &result);
      if ( v17 < 0 )
        __abi_WinRTraiseException(v17);
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v16 + 16i64))(v16);
      if ( (_DWORD)result )
        break;
      Com_Printf(16, "Users_FreeUserConnectedStorageTask() - waiting on outstanding\n");
      Sys_Sleep(1);
    }
  }
  if ( v2 )
    v2->__abi_Release(v2);
}

/*
==============
Users_GetIndex
==============
*/
__int64 Users_GetIndex(const Windows::Xbox::System::User *userToFind)
{
  unsigned int v2; 
  const Windows::Xbox::System::User *v3; 
  unsigned int v4; 
  int v5; 
  int v6; 
  __int64 v7; 
  const Windows::Xbox::System::User *v8; 
  unsigned int v10; 
  const Windows::Xbox::System::User *v11; 
  const Windows::Xbox::System::User *v12; 

  v2 = -1;
  v3 = NULL;
  v12 = NULL;
  EnterCriticalSection(&s_lock);
  v4 = 0;
  v5 = ((__int64 (__fastcall *)(Windows::Foundation::Collections::IVectorView<Windows::Xbox::System::User _> *, unsigned int *))s_users->Platform::Object::__vftable[1].__abi_AddRef)(s_users, &v10);
  if ( v5 < 0 )
LABEL_18:
    __abi_WinRTraiseException(v5);
  while ( v4 < v10 )
  {
    v11 = NULL;
    v6 = s_users->Platform::Object::__vftable[1].__abi_QueryInterface(s_users, (Platform::Guid *)v4, (void **)&v11);
    if ( v6 < 0 )
      __abi_WinRTraiseException(v6);
    v7 = (__int64)v11;
    v8 = v11;
    if ( v11 )
    {
      v11->__abi_AddRef(&v11->Windows::Xbox::System::IUser);
      v7 = (__int64)v11;
    }
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16i64))(v7);
    v11 = v8;
    if ( v3 )
      v3->__abi_Release(&v3->Windows::Xbox::System::IUser);
    v3 = v8;
    v12 = v8;
    v11 = NULL;
    if ( v8 == userToFind )
    {
      v2 = v4;
      break;
    }
    ++v4;
    v5 = ((__int64 (__fastcall *)(Windows::Foundation::Collections::IVectorView<Windows::Xbox::System::User _> *, unsigned int *))s_users->Platform::Object::__vftable[1].__abi_AddRef)(s_users, &v10);
    if ( v5 < 0 )
      goto LABEL_18;
  }
  LeaveCriticalSection(&s_lock);
  if ( v3 )
    v3->__abi_Release(&v3->Windows::Xbox::System::IUser);
  return v2;
}

/*
==============
Users_GetStorageSpaceForUserAsync
==============
*/
Windows::Foundation::IAsyncOperation<Windows::Xbox::Storage::ConnectedStorageSpace _> *Users_GetStorageSpaceForUserAsync(Windows::Xbox::System::User *user)
{
  int ActivationFactoryByPCWSTR; 
  int v3; 
  __int64 v4; 
  __int64 v5; 
  Platform::Guid pGuid; 
  __int64 v8; 
  void *ppActivationFactory; 

  pGuid.__vftable = (Platform::Object_vtbl *)0x47C8B3E907020414i64;
  *(_DWORD *)&pGuid.__d = 1324511139;
  *(_DWORD *)&pGuid.__h = 1935001133;
  ppActivationFactory = NULL;
  ActivationFactoryByPCWSTR = __winRT::__getActivationFactoryByPCWSTR(L"Windows.Xbox.Storage.ConnectedStorageSpace", &pGuid, &ppActivationFactory);
  if ( ActivationFactoryByPCWSTR < 0 )
    __abi_WinRTraiseException(ActivationFactoryByPCWSTR);
  v8 = 0i64;
  v3 = (*(__int64 (__fastcall **)(void *, Windows::Xbox::System::User *, __int64 *))(*(_QWORD *)ppActivationFactory + 48i64))(ppActivationFactory, user, &v8);
  if ( v3 < 0 )
    __abi_WinRTraiseException(v3);
  v4 = v8;
  v5 = v8;
  if ( v8 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8i64))(v8);
    v4 = v8;
  }
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16i64))(v4);
  v8 = 0i64;
  if ( ppActivationFactory )
    (*(void (__fastcall **)(void *))(*(_QWORD *)ppActivationFactory + 16i64))(ppActivationFactory);
  v8 = 0i64;
  return (Windows::Foundation::IAsyncOperation<Windows::Xbox::Storage::ConnectedStorageSpace _> *)v5;
}

/*
==============
Users_GetUser
==============
*/
Windows::Xbox::System::User *Users_GetUser(const unsigned int index)
{
  int v2; 
  int v4; 
  __int64 v5; 
  __int64 v6; 
  __int64 v7; 
  __int64 v8; 

  v8 = 0i64;
  EnterCriticalSection(&s_lock);
  v2 = ((__int64 (__fastcall *)(Windows::Foundation::Collections::IVectorView<Windows::Xbox::System::User _> *, __int64 *))s_users->Platform::Object::__vftable[1].__abi_AddRef)(s_users, &v7);
  if ( v2 < 0 )
    __abi_WinRTraiseException(v2);
  if ( index >= (unsigned int)v7 )
    return 0i64;
  v7 = 0i64;
  v4 = s_users->Platform::Object::__vftable[1].__abi_QueryInterface(s_users, (Platform::Guid *)index, (void **)&v7);
  if ( v4 < 0 )
    __abi_WinRTraiseException(v4);
  v5 = v7;
  v6 = v7;
  if ( v7 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8i64))(v7);
    v5 = v7;
  }
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16i64))(v5);
  v8 = v6;
  v7 = 0i64;
  LeaveCriticalSection(&s_lock);
  v8 = 0i64;
  return (Windows::Xbox::System::User *)v6;
}

/*
==============
Users_GetUserByPlatformId
==============
*/
Windows::Xbox::System::User *Users_GetUserByPlatformId(const unsigned __int64 platformId)
{
  HSTRING v2; 
  unsigned int i; 
  int v4; 
  HSTRING v5; 
  int v6; 
  int v7; 
  HSTRING v8; 
  HSTRING v9; 
  int v10; 
  HSTRING v11; 
  int v12; 
  HSTRING v13; 
  HSTRING newString; 
  unsigned __int64 platformIda[2]; 
  HSTRING v17; 
  unsigned int v18; 
  unsigned int v19; 
  HSTRING string; 

  platformIda[1] = -2i64;
  v2 = NULL;
  for ( i = 0; ; ++i )
  {
    v4 = ((__int64 (__fastcall *)(Windows::Foundation::Collections::IVectorView<Windows::Xbox::System::User _> *, unsigned int *))s_users->Platform::Object::__vftable[1].__abi_AddRef)(s_users, &v18);
    if ( v4 < 0 )
      __abi_WinRTraiseException(v4);
    if ( i >= v18 )
      break;
    v5 = NULL;
    EnterCriticalSection(&s_lock);
    v6 = ((__int64 (__fastcall *)(Windows::Foundation::Collections::IVectorView<Windows::Xbox::System::User _> *, unsigned int *))s_users->Platform::Object::__vftable[1].__abi_AddRef)(s_users, &v19);
    if ( v6 < 0 )
      __abi_WinRTraiseException(v6);
    if ( i < v19 )
    {
      string = NULL;
      v7 = s_users->Platform::Object::__vftable[1].__abi_QueryInterface(s_users, (Platform::Guid *)i, (void **)&string);
      if ( v7 < 0 )
        __abi_WinRTraiseException(v7);
      v8 = string;
      v9 = string;
      if ( string )
      {
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)string + 8i64))(string);
        v8 = string;
      }
      if ( v8 )
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v8 + 16i64))(v8);
      v17 = v9;
      if ( v9 )
      {
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v9 + 8i64))(v9);
        v5 = v9;
      }
      if ( v9 )
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v9 + 16i64))(v9);
      LeaveCriticalSection(&s_lock);
      if ( v5 )
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v5 + 8i64))(v5);
      if ( v5 )
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v5 + 16i64))(v5);
    }
    if ( v5 != v2 )
    {
      if ( v5 )
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v5 + 8i64))(v5);
      if ( v2 )
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v2 + 16i64))(v2);
      v2 = v5;
    }
    if ( v5 )
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v5 + 16i64))(v5);
    string = NULL;
    v10 = (*(__int64 (__fastcall **)(HSTRING, HSTRING *))(*(_QWORD *)v2 + 120i64))(v2, &string);
    if ( v10 < 0 )
      __abi_WinRTraiseException(v10);
    v11 = string;
    if ( string )
    {
      v12 = WindowsDuplicateString_0(string, &newString);
      if ( v12 < 0 )
        __abi_WinRTraiseException(v12);
      v13 = newString;
      v11 = string;
    }
    else
    {
      v13 = NULL;
    }
    WindowsDeleteString_0(v11);
    v17 = v13;
    ConvertPlatformStringToPlatformId((Platform::String *)v13, platformIda);
    WindowsDeleteString_0(v13);
    if ( platformIda[0] == platformId )
    {
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v2 + 8i64))(v2);
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v2 + 16i64))(v2);
      return (Windows::Xbox::System::User *)v2;
    }
  }
  if ( v2 )
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v2 + 16i64))(v2);
  return 0i64;
}

/*
==============
Users_GetUserByUserId
==============
*/
Windows::Xbox::System::User *Users_GetUserByUserId(const unsigned int UserId)
{
  Windows::Foundation::Collections::IVectorView<Windows::Xbox::System::User _> *v2; 
  __int64 v3; 
  unsigned int v4; 
  int v5; 
  int v6; 
  __int64 v7; 
  __int64 v8; 
  int v9; 
  __int64 v11; 
  int v12; 
  __int64 v13; 

  v2 = Windows::Xbox::System::User::Users::get();
  v11 = 0i64;
  v3 = 0i64;
  v4 = 0;
  v5 = ((__int64 (__fastcall *)(Windows::Foundation::Collections::IVectorView<Windows::Xbox::System::User _> *, __int64 *))v2->Platform::Object::__vftable[1].__abi_AddRef)(v2, &v11);
  if ( v5 < 0 )
LABEL_19:
    __abi_WinRTraiseException(v5);
  while ( v4 < (unsigned int)v11 )
  {
    v13 = 0i64;
    v6 = v2->Platform::Object::__vftable[1].__abi_QueryInterface(v2, (Platform::Guid *)v4, (void **)&v13);
    if ( v6 < 0 )
      __abi_WinRTraiseException(v6);
    v7 = v13;
    v8 = v13;
    if ( v13 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8i64))(v13);
      v7 = v13;
    }
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16i64))(v7);
    v13 = v8;
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16i64))(v3);
    v3 = v8;
    v13 = 0i64;
    v9 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v8 + 48i64))(v8, &v12);
    if ( v9 < 0 )
      __abi_WinRTraiseException(v9);
    if ( v12 == UserId )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8i64))(v8);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16i64))(v8);
      v2->__abi_Release(v2);
      return (Windows::Xbox::System::User *)v8;
    }
    ++v4;
    v5 = ((__int64 (__fastcall *)(Windows::Foundation::Collections::IVectorView<Windows::Xbox::System::User _> *, __int64 *))v2->Platform::Object::__vftable[1].__abi_AddRef)(v2, &v11);
    if ( v5 < 0 )
      goto LABEL_19;
  }
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16i64))(v3);
  v2->__abi_Release(v2);
  return 0i64;
}

/*
==============
Users_GetUserConnectedStorage
==============
*/
Windows::Xbox::Storage::ConnectedStorageSpace *Users_GetUserConnectedStorage(Windows::Xbox::System::User *user)
{
  __int64 v2; 
  Windows::Foundation::IAsyncOperation<Windows::Xbox::Storage::ConnectedStorageSpace _> *v3; 
  DWORD CurrentThreadId; 
  Windows::Foundation::IAsyncOperation<Windows::Xbox::Storage::ConnectedStorageSpace _> *UserConnectedStorageTask; 
  Windows::Foundation::IAsyncOperation<Windows::Xbox::Storage::ConnectedStorageSpace _> *v6; 
  int v7; 
  int v8; 
  int v9; 
  __int64 v10; 
  int v11; 
  bool v12; 
  int v13; 
  int v14; 
  __int64 v15; 
  __int64 v16; 
  Windows::Foundation::IAsyncOperation<Windows::Xbox::Storage::ConnectedStorageSpace _> *v18; 
  __int64 v19; 
  __int64 v20; 

  v2 = 0i64;
  v20 = 0i64;
  v3 = NULL;
  CurrentThreadId = GetCurrentThreadId();
  Com_Printf(16, "Users_GetUserConnectedStorage.  Thread 0x%X\n", CurrentThreadId);
  UserConnectedStorageTask = Users_FindUserConnectedStorageTask(user);
  v6 = UserConnectedStorageTask;
  v18 = UserConnectedStorageTask;
  if ( UserConnectedStorageTask )
  {
    UserConnectedStorageTask->__abi_AddRef(UserConnectedStorageTask);
    v3 = v6;
  }
  if ( v6 )
    v6->__abi_Release(v6);
  if ( v3 )
  {
    v7 = 0;
    v8 = 5000;
    while ( 1 )
    {
      v19 = 0i64;
      v9 = v3->__abi_QueryInterface(v3, (Platform::Guid *)&_uuidof__AUIAsyncInfo_Foundation_Windows__, (void **)&v19);
      if ( v9 < 0 )
        __abi_WinRTraiseException(v9);
      v10 = v19;
      LODWORD(v18) = 0;
      v11 = (*(__int64 (__fastcall **)(__int64, Windows::Foundation::IAsyncOperation<Windows::Xbox::Storage::ConnectedStorageSpace _> **))(*(_QWORD *)v19 + 56i64))(v19, &v18);
      if ( v11 < 0 )
        __abi_WinRTraiseException(v11);
      v12 = (_DWORD)v18 == 0;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16i64))(v10);
      if ( !v12 )
        break;
      v13 = Sys_Milliseconds();
      if ( v7 )
      {
        if ( v13 - v7 > v8 )
        {
          Com_Printf(16, "Users_GetUserConnectedStorage() - waited %d seconds\n", (unsigned int)((v13 - v7) / 1000));
          v8 += 5000;
        }
      }
      else
      {
        v7 = v13;
        Com_Printf(16, "Users_GetUserConnectedStorage() - waiting on outstanding\n");
      }
      Sys_Sleep(1);
    }
    v18 = NULL;
    v14 = ((__int64 (__fastcall *)(Windows::Foundation::IAsyncOperation<Windows::Xbox::Storage::ConnectedStorageSpace _> *, Windows::Foundation::IAsyncOperation<Windows::Xbox::Storage::ConnectedStorageSpace _> **))v3->Platform::Object::__vftable[1].__abi_Release)(v3, &v18);
    if ( v14 < 0 )
      __abi_WinRTraiseException(v14);
    v15 = (__int64)v18;
    v16 = (__int64)v18;
    if ( v18 )
    {
      v18->__abi_AddRef(v18);
      v15 = (__int64)v18;
    }
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16i64))(v15);
    v19 = v16;
    if ( v16 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8i64))(v16);
      v2 = v16;
      v20 = v16;
    }
    if ( v16 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16i64))(v16);
    if ( v2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8i64))(v2);
  }
  else
  {
    Com_Printf(16, "Users_GetUserConnectedStorage returned nullptr for user.\n");
  }
  if ( v3 )
    v3->__abi_Release(v3);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16i64))(v2);
  return (Windows::Xbox::Storage::ConnectedStorageSpace *)v2;
}

/*
==============
Users_GetUsers
==============
*/
Windows::Foundation::Collections::IVectorView<Windows::Xbox::System::User _> *Users_GetUsers()
{
  Windows::Foundation::Collections::IVectorView<Windows::Xbox::System::User _> *v0; 

  v0 = s_users;
  if ( s_users )
    s_users->__abi_AddRef(s_users);
  return v0;
}

/*
==============
Users_HandleAccountPickerResults
==============
*/
void Users_HandleAccountPickerResults(Windows::Xbox::System::IUser *pickedUser, const int controllerIndex)
{
  int v4; 
  Windows::Xbox::System::User *UserByUserId; 
  int v6; 
  unsigned int UserId; 
  __int64 v8; 
  Windows::Xbox::System::User *v9; 

  if ( pickedUser )
  {
    EnterCriticalSection(&s_lock);
    s_refresh = 1;
    LeaveCriticalSection(&s_lock);
    Users_Update();
    v4 = pickedUser->__abi_get_Id(pickedUser, &UserId);
    if ( v4 < 0 )
      __abi_WinRTraiseException(v4);
    UserByUserId = Users_GetUserByUserId(UserId);
    v9 = UserByUserId;
    v8 = 0i64;
    v6 = pickedUser->__abi_get_Id(pickedUser, (unsigned int *)&v8);
    if ( v6 < 0 )
      __abi_WinRTraiseException(v6);
    if ( UserByUserId )
      Users_HandleUserSignInEvent(UserByUserId, controllerIndex);
    else
      Com_Printf(25, "Users_HandleAccountPickerResults: No user found with Id %ull in the local user array!\n", (unsigned int)v8);
    if ( UserByUserId )
      UserByUserId->__abi_Release(UserByUserId);
  }
  else
  {
    Com_Printf(25, "Users_HandleAccountPickerResults: returned null\n");
  }
}

/*
==============
Users_HandleControllerChangedUsersDuringSignout
==============
*/

void __fastcall Users_HandleControllerChangedUsersDuringSignout(Windows::Xbox::System::User *newUser, const int controllerIndex)
{
  Users_HandleUserSignInEvent(newUser, controllerIndex);
}

/*
==============
Users_HandleUserSignInEvent
==============
*/
void Users_HandleUserSignInEvent(Windows::Xbox::System::User *newUser, const int controllerIndex)
{
  DWORD CurrentThreadId; 
  UserAndControllerPair *v5; 
  __int64 v6; 
  __int64 v7; 
  int v8; 

  CurrentThreadId = GetCurrentThreadId();
  Com_Printf(16, "HandleUserSignInEvent.  Thread 0x%X\n", CurrentThreadId);
  EnterCriticalSection(&s_lock);
  v5 = (UserAndControllerPair *)Platform::Details::Heap::Allocate(0x38ui64, 0x50ui64);
  UserAndControllerPair::UserAndControllerPair(v5, newUser, controllerIndex);
  v7 = v6;
  v8 = ((__int64 (__fastcall *)(Windows::Foundation::Collections::IVector<UserAndControllerPair _> *, __int64))s_addedUsers->Platform::Object::__vftable[2].__abi_AddRef)(s_addedUsers, v6);
  if ( v8 < 0 )
    __abi_WinRTraiseException(v8);
  LeaveCriticalSection(&s_lock);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16i64))(v7);
}

/*
==============
Users_HasPendingChanges
==============
*/
__int64 Users_HasPendingChanges()
{
  int v0; 
  int v1; 
  unsigned __int8 v2; 
  int v4; 

  EnterCriticalSection(&s_lock);
  v0 = ((__int64 (__fastcall *)(Windows::Foundation::Collections::IVector<UserAndControllerPair _> *, int *))s_addedUsers->Platform::Object::__vftable[1].__abi_AddRef)(s_addedUsers, &v4);
  if ( v0 < 0 )
    __abi_WinRTraiseException(v0);
  if ( v4 )
    goto LABEL_6;
  v1 = ((__int64 (__fastcall *)(Windows::Foundation::Collections::IVector<Windows::Xbox::System::User _> *, int *))s_removedUsers->Platform::Object::__vftable[1].__abi_AddRef)(s_removedUsers, &v4);
  if ( v1 < 0 )
    __abi_WinRTraiseException(v1);
  if ( v4 )
LABEL_6:
    v2 = 1;
  else
    v2 = 0;
  LeaveCriticalSection(&s_lock);
  return v2;
}

/*
==============
Users_InitUserConnectedStorage
==============
*/
void Users_InitUserConnectedStorage(Windows::Xbox::System::User *user)
{
  unsigned int v2; 
  DWORD CurrentThreadId; 
  int ActivationFactoryByPCWSTR; 
  int v5; 
  __int64 v6; 
  Windows::Foundation::IAsyncOperation<Windows::Xbox::Storage::ConnectedStorageSpace _> *v7; 
  DWORD v8; 
  Windows::Xbox::System::User *v9; 
  Windows::Foundation::IAsyncOperation<Windows::Xbox::Storage::ConnectedStorageSpace _> *task; 
  Platform::Guid pGuid; 
  Windows::Foundation::IAsyncOperation<Windows::Xbox::Storage::ConnectedStorageSpace _> *v12; 
  void *ppActivationFactory; 
  Windows::Foundation::IAsyncOperation<Windows::Xbox::Storage::ConnectedStorageSpace _> *v14; 

  v2 = 0;
  v14 = NULL;
  CurrentThreadId = GetCurrentThreadId();
  Com_Printf(16, "Users_InitUserConnectedStorage.  Thread 0x%X\n", CurrentThreadId);
  pGuid.__vftable = (Platform::Object_vtbl *)0x47C8B3E907020414i64;
  *(_DWORD *)&pGuid.__d = 1324511139;
  *(_DWORD *)&pGuid.__h = 1935001133;
  ppActivationFactory = NULL;
  ActivationFactoryByPCWSTR = __winRT::__getActivationFactoryByPCWSTR(L"Windows.Xbox.Storage.ConnectedStorageSpace", &pGuid, &ppActivationFactory);
  if ( ActivationFactoryByPCWSTR < 0 )
    __abi_WinRTraiseException(ActivationFactoryByPCWSTR);
  v12 = NULL;
  v5 = (*(__int64 (__fastcall **)(void *, Windows::Xbox::System::User *, Windows::Foundation::IAsyncOperation<Windows::Xbox::Storage::ConnectedStorageSpace _> **))(*(_QWORD *)ppActivationFactory + 48i64))(ppActivationFactory, user, &v12);
  if ( v5 < 0 )
    __abi_WinRTraiseException(v5);
  v6 = (__int64)v12;
  v7 = v12;
  if ( v12 )
  {
    v12->__abi_AddRef(v12);
    v6 = (__int64)v12;
  }
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16i64))(v6);
  v12 = NULL;
  if ( ppActivationFactory )
    (*(void (__fastcall **)(void *))(*(_QWORD *)ppActivationFactory + 16i64))(ppActivationFactory);
  v14 = v7;
  v12 = NULL;
  if ( v7 )
  {
    v8 = GetCurrentThreadId();
    Com_Printf(16, "Users_AllocUserConnectedStorageTask().  Thread 0x%X\n", v8);
    EnterCriticalSection(&s_lock);
    while ( v2 < 0x10 )
    {
      if ( !s_userTasks[v2].user )
      {
        if ( user )
        {
          user->__abi_AddRef(user);
          v9 = s_userTasks[v2].user;
          if ( v9 )
            v9->__abi_Release(v9);
          s_userTasks[v2].user = user;
        }
        if ( v7 != s_userTasks[v2].task )
        {
          v7->__abi_AddRef(v7);
          task = s_userTasks[v2].task;
          if ( task )
            task->__abi_Release(task);
          s_userTasks[v2].task = v7;
        }
        break;
      }
      ++v2;
    }
    LeaveCriticalSection(&s_lock);
  }
  if ( v7 )
    v7->__abi_Release(v7);
}

/*
==============
Users_Initialize
==============
*/
void Users_Initialize(void)
{
  DWORD CurrentThreadId; 
  char *v1; 
  char *v2; 
  Windows::Foundation::Collections::IVector<UserAndControllerPair _> *v3; 
  Windows::Foundation::Collections::IVector<UserAndControllerPair _> *v4; 
  char *v5; 
  char *v6; 
  Windows::Foundation::Collections::IVector<Windows::Xbox::System::User _> *v7; 
  Windows::Foundation::Collections::IVector<Windows::Xbox::System::User _> *v8; 
  __int64 v9; 
  __int64 v10; 
  int ActivationFactoryByPCWSTR; 
  int v12; 
  __int64 v13; 
  __int64 v14; 
  int v15; 
  int v16; 
  Platform::Guid pGuid; 
  void *ppActivationFactory; 
  __int64 v19; 
  __int64 v20; 

  CurrentThreadId = GetCurrentThreadId();
  Com_Printf(16, "Users_Initialize.  Thread 0x%X\n", CurrentThreadId);
  s_refresh = 1;
  InitializeCriticalSection(&s_lock);
  ppActivationFactory = Platform::Details::Heap::Allocate(0x68ui64, 0x90ui64);
  Platform::Collections::Vector<UserAndControllerPair __gc *,std::equal_to<UserAndControllerPair __gc *>,1>::Vector<UserAndControllerPair __gc *,std::equal_to<UserAndControllerPair __gc *>,1>((Platform::Collections::Vector<UserAndControllerPair _,std::equal_to<UserAndControllerPair _>,1> *)ppActivationFactory);
  v2 = v1;
  ppActivationFactory = v1;
  v3 = (Windows::Foundation::Collections::IVector<UserAndControllerPair _> *)(v1 + 8);
  if ( !v1 )
    v3 = NULL;
  v4 = s_addedUsers;
  if ( v3 != s_addedUsers )
  {
    if ( v3 )
    {
      v3->__abi_AddRef(v3);
      v4 = s_addedUsers;
    }
    if ( v4 )
      v4->__abi_Release(v4);
    s_addedUsers = v3;
  }
  if ( v2 )
    (*(void (__fastcall **)(char *))(*(_QWORD *)v2 + 16i64))(v2);
  ppActivationFactory = Platform::Details::Heap::Allocate(0x68ui64, 0x90ui64);
  Platform::Collections::Vector<Windows::Xbox::System::User __gc *,std::equal_to<Windows::Xbox::System::User __gc *>,1>::Vector<Windows::Xbox::System::User __gc *,std::equal_to<Windows::Xbox::System::User __gc *>,1>((Platform::Collections::Vector<Windows::Xbox::System::User _,std::equal_to<Windows::Xbox::System::User _>,1> *)ppActivationFactory);
  v6 = v5;
  ppActivationFactory = v5;
  v7 = (Windows::Foundation::Collections::IVector<Windows::Xbox::System::User _> *)(v5 + 8);
  if ( !v5 )
    v7 = NULL;
  v8 = s_removedUsers;
  if ( v7 != s_removedUsers )
  {
    if ( v7 )
    {
      v7->__abi_AddRef(v7);
      v8 = s_removedUsers;
    }
    if ( v8 )
      v8->__abi_Release(v8);
    s_removedUsers = v7;
  }
  if ( v6 )
    (*(void (__fastcall **)(char *))(*(_QWORD *)v6 + 16i64))(v6);
  ppActivationFactory = Platform::Details::Heap::Allocate(0x18ui64, 0x130ui64);
  Windows::Foundation::EventHandler_Windows::Xbox::System::UserAddedEventArgs___::EventHandler_Windows::Xbox::System::UserAddedEventArgs_____lambda_d8b229df4d87155506be19efa95b38c7___((Users_Initialize::__l2::<lambda_d8b229df4d87155506be19efa95b38c7>)ppActivationFactory, NonConst, 2);
  v10 = v9;
  v20 = v9;
  pGuid.__vftable = (Platform::Object_vtbl *)0x4A507FC6B4F23A93i64;
  *(_DWORD *)&pGuid.__d = 9786289;
  *(_DWORD *)&pGuid.__h = 1352546326;
  ppActivationFactory = NULL;
  ActivationFactoryByPCWSTR = __winRT::__getActivationFactoryByPCWSTR((void *)L"Windows.Xbox.System.User", &pGuid, &ppActivationFactory);
  if ( ActivationFactoryByPCWSTR < 0 )
    __abi_WinRTraiseException(ActivationFactoryByPCWSTR);
  v19 = 0i64;
  v12 = (*(__int64 (__fastcall **)(void *, __int64, __int64 *))(*(_QWORD *)ppActivationFactory + 80i64))(ppActivationFactory, v10, &v19);
  if ( v12 < 0 )
    __abi_WinRTraiseException(v12);
  if ( ppActivationFactory )
    (*(void (__fastcall **)(void *))(*(_QWORD *)ppActivationFactory + 16i64))(ppActivationFactory);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16i64))(v10);
  ppActivationFactory = Platform::Details::Heap::Allocate(0x18ui64, 0x130ui64);
  Windows::Foundation::EventHandler_Windows::Xbox::System::UserRemovedEventArgs___::EventHandler_Windows::Xbox::System::UserRemovedEventArgs_____lambda_f4481f609ef7bf6af2d8940a75e7e15a___((Users_Initialize::__l2::<lambda_f4481f609ef7bf6af2d8940a75e7e15a>)ppActivationFactory, NonConst, 2);
  v14 = v13;
  v20 = v13;
  pGuid.__vftable = (Platform::Object_vtbl *)0x4A507FC6B4F23A93i64;
  *(_DWORD *)&pGuid.__d = 9786289;
  *(_DWORD *)&pGuid.__h = 1352546326;
  ppActivationFactory = NULL;
  v15 = __winRT::__getActivationFactoryByPCWSTR((void *)L"Windows.Xbox.System.User", &pGuid, &ppActivationFactory);
  if ( v15 < 0 )
    __abi_WinRTraiseException(v15);
  v19 = 0i64;
  v16 = (*(__int64 (__fastcall **)(void *, __int64, __int64 *))(*(_QWORD *)ppActivationFactory + 96i64))(ppActivationFactory, v14, &v19);
  if ( v16 < 0 )
    __abi_WinRTraiseException(v16);
  if ( ppActivationFactory )
    (*(void (__fastcall **)(void *))(*(_QWORD *)ppActivationFactory + 16i64))(ppActivationFactory);
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16i64))(v14);
  Users_Update();
}

/*
==============
Users_NumUsers
==============
*/
__int64 Users_NumUsers()
{
  int v0; 
  unsigned int v2; 

  v0 = ((__int64 (__fastcall *)(Windows::Foundation::Collections::IVectorView<Windows::Xbox::System::User _> *, unsigned int *))s_users->Platform::Object::__vftable[1].__abi_AddRef)(s_users, &v2);
  if ( v0 < 0 )
    __abi_WinRTraiseException(v0);
  return v2;
}

/*
==============
Users_OnResume
==============
*/
void Users_OnResume(void)
{
  ;
}

/*
==============
Users_PumpSignedInUsersEvents
==============
*/
void Users_PumpSignedInUsersEvents()
{
  int v0; 
  int v1; 
  __int64 v2; 
  __int64 v3; 
  int v4; 
  int v5; 
  Windows::Xbox::System::User *v6; 
  int v7; 
  __int64 v8; 
  __int64 v9; 
  Windows::Xbox::System::User *v10; 

  EnterCriticalSection(&s_lock);
  v0 = ((__int64 (__fastcall *)(Windows::Foundation::Collections::IVector<UserAndControllerPair _> *, int *))s_addedUsers->Platform::Object::__vftable[1].__abi_AddRef)(s_addedUsers, &v7);
  if ( v0 < 0 )
LABEL_21:
    __abi_WinRTraiseException(v0);
  while ( v7 )
  {
    v8 = 0i64;
    v1 = s_addedUsers->Platform::Object::__vftable[1].__abi_QueryInterface(s_addedUsers, NULL, (void **)&v8);
    if ( v1 < 0 )
      __abi_WinRTraiseException(v1);
    v2 = v8;
    v3 = v8;
    if ( v8 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8i64))(v8);
      v2 = v8;
    }
    if ( v2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16i64))(v2);
    v9 = v3;
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8i64))(v3);
    v9 = v3;
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16i64))(v3);
    v4 = ((__int64 (__fastcall *)(Windows::Foundation::Collections::IVector<UserAndControllerPair _> *, _QWORD))s_addedUsers->Platform::Object::__vftable[2].__abi_QueryInterface)(s_addedUsers, 0i64);
    if ( v4 < 0 )
      __abi_WinRTraiseException(v4);
    LeaveCriticalSection(&s_lock);
    Com_Printf(25, "Users_PumpSignedInUsersEvents: calling Live_OnUserAddedEvent for a user\n");
    v5 = *(_DWORD *)(v3 + 48);
    v6 = *(Windows::Xbox::System::User **)(v3 + 40);
    if ( v6 )
      v6->__abi_AddRef(*(Platform::Object **)(v3 + 40));
    v10 = v6;
    Live_OnUserAddedEvent(v6, v5);
    if ( v6 )
      v6->__abi_Release(v6);
    EnterCriticalSection(&s_lock);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16i64))(v3);
    v0 = ((__int64 (__fastcall *)(Windows::Foundation::Collections::IVector<UserAndControllerPair _> *, int *))s_addedUsers->Platform::Object::__vftable[1].__abi_AddRef)(s_addedUsers, &v7);
    if ( v0 < 0 )
      goto LABEL_21;
  }
  LeaveCriticalSection(&s_lock);
}

/*
==============
Users_RefreshUserTasks
==============
*/
__int64 Users_RefreshUserTasks()
{
  DWORD CurrentThreadId; 
  int v1; 
  int v2; 
  unsigned int v3; 
  UserConnectedStorageTaskPair *v4; 
  __int64 v5; 
  HSTRING v6; 
  int v7; 
  unsigned int i; 
  int v9; 
  Windows::Xbox::System::User *v10; 
  int v11; 
  HSTRING v12; 
  HSTRING v13; 
  int v14; 
  HSTRING v15; 
  int v16; 
  Windows::Xbox::System::User *user; 
  int v18; 
  HSTRING v19; 
  int v20; 
  HSTRING v21; 
  Platform::String *v22; 
  Windows::Foundation::IAsyncOperation<Windows::Xbox::Storage::ConnectedStorageSpace _> *task; 
  int v24; 
  int v25; 
  int v26; 
  char v27; 
  Windows::Foundation::IAsyncOperation<Windows::Xbox::Storage::ConnectedStorageSpace _> *v28; 
  unsigned int v29; 
  __int64 v30; 
  Windows::Xbox::System::User *v31; 
  int v32; 
  HSTRING v33; 
  HSTRING v34; 
  Windows::Foundation::IAsyncOperation<Windows::Xbox::Storage::ConnectedStorageSpace _> *UserConnectedStorageTask; 
  bool v36; 
  HSTRING result; 
  unsigned int v38; 
  unsigned int v39; 
  HSTRING string; 
  HSTRING v41; 
  unsigned int v42; 
  HSTRING v43; 
  __int64 v44; 
  void *v45; 
  HSTRING v46; 
  HSTRING newString; 
  HSTRING string1[2]; 
  char pDestBuffer[80]; 

  string1[1] = (HSTRING)-2i64;
  v38 = 0;
  LODWORD(string) = 0;
  if ( !s_lock.LockCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_users.cpp", 643, ASSERT_TYPE_ASSERT, "(s_lock.LockCount)", (const char *)&queryFormat, "s_lock.LockCount") )
    __debugbreak();
  CurrentThreadId = GetCurrentThreadId();
  v1 = ((__int64 (__fastcall *)(Windows::Foundation::Collections::IVectorView<Windows::Xbox::System::User _> *, HSTRING *))s_users->Platform::Object::__vftable[1].__abi_AddRef)(s_users, &result);
  if ( v1 < 0 )
    __abi_WinRTraiseException(v1);
  Com_Printf(16, "Users_RefreshUserTasks: s_users->Size == %d.  Thread 0x%X\n", (unsigned int)result, CurrentThreadId);
  v2 = ((__int64 (__fastcall *)(Windows::Foundation::Collections::IVectorView<Windows::Xbox::System::User _> *, HSTRING *))s_users->Platform::Object::__vftable[1].__abi_AddRef)(s_users, &result);
  if ( v2 < 0 )
    __abi_WinRTraiseException(v2);
  if ( (_DWORD)result )
  {
    v3 = 0;
    v39 = 0;
    v4 = s_userTasks;
    v5 = (__int64)v43;
    while ( !v4->user )
    {
LABEL_56:
      v39 = ++v3;
      ++v4;
      if ( v3 >= 0x10 )
        goto LABEL_57;
    }
    v6 = NULL;
    v7 = 0;
    for ( i = 0; ; ++i )
    {
      v9 = ((__int64 (__fastcall *)(Windows::Foundation::Collections::IVectorView<Windows::Xbox::System::User _> *, unsigned int *))s_users->Platform::Object::__vftable[1].__abi_AddRef)(s_users, &v42);
      if ( v9 < 0 )
        __abi_WinRTraiseException(v9);
      if ( i >= v42 )
        break;
      v10 = NULL;
      v46 = NULL;
      string = NULL;
      v11 = s_users->Platform::Object::__vftable[1].__abi_QueryInterface(s_users, (Platform::Guid *)i, (void **)&string);
      if ( v11 < 0 )
        __abi_WinRTraiseException(v11);
      v12 = string;
      v13 = string;
      if ( string )
      {
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)string + 8i64))(string);
        v12 = string;
      }
      if ( v12 )
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v12 + 16i64))(v12);
      v41 = v13;
      if ( v13 )
      {
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v13 + 8i64))(v13);
        v10 = (Windows::Xbox::System::User *)v13;
        v46 = v13;
      }
      if ( v13 )
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v13 + 16i64))(v13);
      string = NULL;
      v14 = v10->__abi_get_XboxUserId(v10, (Platform::String **)&string);
      if ( v14 < 0 )
        __abi_WinRTraiseException(v14);
      v15 = string;
      if ( string )
      {
        v16 = WindowsDuplicateString_0(string, &newString);
        if ( v16 < 0 )
          __abi_WinRTraiseException(v16);
        v6 = newString;
        v15 = string;
      }
      WindowsDeleteString_0(v15);
      result = v6;
      user = v4->user;
      v41 = NULL;
      v18 = user->__abi_get_XboxUserId(user, (Platform::String **)&v41);
      if ( v18 < 0 )
        __abi_WinRTraiseException(v18);
      v19 = v41;
      if ( v41 )
      {
        v20 = WindowsDuplicateString_0(v41, string1);
        if ( v20 < 0 )
          __abi_WinRTraiseException(v20);
        v21 = string1[0];
        v19 = v41;
      }
      else
      {
        v21 = NULL;
      }
      WindowsDeleteString_0(v19);
      LODWORD(result) = 0;
      WindowsCompareStringOrdinal_0(v21, v6, (INT32 *)&result);
      WindowsDeleteString_0(v21);
      WindowsDeleteString_0(v6);
      if ( !(_DWORD)result )
      {
        Com_Printf(25, "Users_RefreshUserTasks: updating a user\n");
        if ( v10 != v4->user )
        {
          v10->__abi_AddRef(v10);
          if ( v4->user )
            v4->user->__abi_Release(v4->user);
          v4->user = v10;
        }
        v7 = 1;
        v10->__abi_Release(v10);
        break;
      }
      v10->__abi_Release(v10);
      v6 = NULL;
    }
    if ( v7 )
    {
LABEL_55:
      v3 = v39;
      goto LABEL_56;
    }
    v22 = Live_GamertagForUser(v4->user);
    v45 = v22;
    ConvertPlatformStringToCharArray(v22, pDestBuffer, 0x44ui64);
    WindowsDeleteString_0((HSTRING)v22);
    Com_Printf(16, "Users_RefreshUserTasks: user [%s] not found in s_users!\n", pDestBuffer);
    task = v4->task;
    if ( task )
    {
      v44 = 0i64;
      v24 = task->__abi_QueryInterface(task, (Platform::Guid *)&_uuidof__AUIAsyncInfo_Foundation_Windows__, (void **)&v44);
      if ( v24 < 0 )
        __abi_WinRTraiseException(v24);
      v5 = v44;
      v43 = (HSTRING)v44;
      v25 = v38 | 1;
      v38 = v25;
      LODWORD(string) = v25;
      LODWORD(result) = 0;
      v26 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v44 + 56i64))(v44, &result);
      if ( v26 < 0 )
        __abi_WinRTraiseException(v26);
      if ( !(_DWORD)result )
      {
        v27 = 1;
        goto LABEL_45;
      }
    }
    else
    {
      v25 = v38;
    }
    v27 = 0;
LABEL_45:
    if ( (v25 & 1) != 0 )
    {
      v38 = v25 & 0xFFFFFFFE;
      if ( v5 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16i64))(v5);
    }
    if ( v27 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_users.cpp", 684, ASSERT_TYPE_ASSERT, "(!s_userTasks[userTaskIndex].task || s_userTasks[userTaskIndex].task->Status != AsyncStatus::Started)", (const char *)&queryFormat, "!s_userTasks[userTaskIndex].task || s_userTasks[userTaskIndex].task->Status != AsyncStatus::Started") )
      __debugbreak();
    v28 = v4->task;
    if ( v28 )
    {
      v28->__abi_Release(v28);
      v4->task = NULL;
    }
    if ( v4->user )
    {
      v4->user->__abi_Release(v4->user);
      v4->user = NULL;
    }
    goto LABEL_55;
  }
LABEL_57:
  v29 = 0;
  v30 = ((__int64 (__fastcall *)(Windows::Foundation::Collections::IVectorView<Windows::Xbox::System::User _> *, HSTRING *))s_users->Platform::Object::__vftable[1].__abi_AddRef)(s_users, &result);
  if ( (int)v30 < 0 )
LABEL_78:
    __abi_WinRTraiseException(v30);
  while ( v29 < (unsigned int)result )
  {
    v31 = NULL;
    v43 = NULL;
    v41 = NULL;
    v32 = s_users->Platform::Object::__vftable[1].__abi_QueryInterface(s_users, (Platform::Guid *)v29, (void **)&v41);
    if ( v32 < 0 )
      __abi_WinRTraiseException(v32);
    v33 = v41;
    v34 = v41;
    if ( v41 )
    {
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v41 + 8i64))(v41);
      v33 = v41;
    }
    if ( v33 )
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v33 + 16i64))(v33);
    v45 = v34;
    if ( v34 )
    {
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v34 + 8i64))(v34);
      v31 = (Windows::Xbox::System::User *)v34;
      v43 = v34;
    }
    if ( v34 )
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v34 + 16i64))(v34);
    UserConnectedStorageTask = Users_FindUserConnectedStorageTask(v31);
    v45 = UserConnectedStorageTask;
    v36 = UserConnectedStorageTask == NULL;
    if ( UserConnectedStorageTask )
      UserConnectedStorageTask->__abi_Release(UserConnectedStorageTask);
    if ( v36 )
    {
      Com_Printf(25, "Users_RefreshUserTasks: calling Users_FindUserConnectedStorageTask for a user\n");
      Users_InitUserConnectedStorage(v31);
    }
    if ( v31 )
      v31->__abi_Release(v31);
    ++v29;
    v30 = ((__int64 (__fastcall *)(Windows::Foundation::Collections::IVectorView<Windows::Xbox::System::User _> *, HSTRING *))s_users->Platform::Object::__vftable[1].__abi_AddRef)(s_users, &result);
    if ( (int)v30 < 0 )
      goto LABEL_78;
  }
  return v30;
}

/*
==============
Users_Shutdown
==============
*/
void Users_Shutdown(void)
{
  EnterCriticalSection(&s_lock);
  if ( s_addedUsers )
  {
    s_addedUsers->__abi_Release(s_addedUsers);
    s_addedUsers = NULL;
  }
  if ( s_removedUsers )
  {
    s_removedUsers->__abi_Release(s_removedUsers);
    s_removedUsers = NULL;
  }
  LeaveCriticalSection(&s_lock);
  DeleteCriticalSection(&s_lock);
}

/*
==============
Users_Update
==============
*/
void Users_Update(void)
{
  int v0; 
  int v1; 
  Windows::Xbox::System::User *v2; 
  Windows::Xbox::System::User *v3; 
  int v4; 
  Windows::Foundation::Collections::IVectorView<Windows::Xbox::System::User _> *v5; 
  Windows::Foundation::Collections::IVectorView<Windows::Xbox::System::User _> *v6; 
  Windows::Foundation::Collections::IVectorView<Windows::Xbox::System::User _> *v7; 
  Windows::Foundation::Collections::IVectorView<Windows::Xbox::System::User _> *v8; 
  Windows::Xbox::System::User *oldUser; 
  Windows::Xbox::System::User *v10; 

  if ( g_hasOpenedUserConfirmChangeDialog )
  {
    if ( LUI_IsMenuOpenAndVisible(LOCAL_CLIENT_0, "user_changed_confirm_mp") )
      return;
    g_hasOpenedUserConfirmChangeDialog = 0;
  }
  EnterCriticalSection(&s_lock);
  v0 = ((__int64 (__fastcall *)(Windows::Foundation::Collections::IVector<Windows::Xbox::System::User _> *, Windows::Foundation::Collections::IVectorView<Windows::Xbox::System::User _> **))s_removedUsers->Platform::Object::__vftable[1].__abi_AddRef)(s_removedUsers, &v8);
  if ( v0 < 0 )
LABEL_33:
    __abi_WinRTraiseException(v0);
  while ( (_DWORD)v8 )
  {
    oldUser = NULL;
    v1 = s_removedUsers->Platform::Object::__vftable[1].__abi_QueryInterface(s_removedUsers, NULL, (void **)&oldUser);
    if ( v1 < 0 )
      __abi_WinRTraiseException(v1);
    v2 = oldUser;
    v3 = oldUser;
    if ( oldUser )
    {
      oldUser->__abi_AddRef(oldUser);
      v2 = oldUser;
    }
    if ( v2 )
      v2->__abi_Release(v2);
    v10 = v3;
    if ( v3 )
      v3->__abi_AddRef(v3);
    v10 = v3;
    if ( v3 )
      v3->__abi_Release(v3);
    v4 = ((__int64 (__fastcall *)(Windows::Foundation::Collections::IVector<Windows::Xbox::System::User _> *, _QWORD))s_removedUsers->Platform::Object::__vftable[2].__abi_QueryInterface)(s_removedUsers, 0i64);
    if ( v4 < 0 )
      __abi_WinRTraiseException(v4);
    LeaveCriticalSection(&s_lock);
    Com_Printf(25, "Users_PumpSignedOutUsersEvents: calling Live_OnUserRemovedEvent for a user\n");
    Live_OnUserRemovedEvent(v3);
    EnterCriticalSection(&s_lock);
    if ( v3 )
      v3->__abi_Release(v3);
    v0 = ((__int64 (__fastcall *)(Windows::Foundation::Collections::IVector<Windows::Xbox::System::User _> *, Windows::Foundation::Collections::IVectorView<Windows::Xbox::System::User _> **))s_removedUsers->Platform::Object::__vftable[1].__abi_AddRef)(s_removedUsers, &v8);
    if ( v0 < 0 )
      goto LABEL_33;
  }
  LeaveCriticalSection(&s_lock);
  EnterCriticalSection(&s_lock);
  if ( s_refresh )
  {
    v5 = Windows::Xbox::System::User::Users::get();
    v6 = v5;
    v8 = v5;
    v7 = s_users;
    if ( v5 != s_users )
    {
      if ( v5 )
      {
        v5->__abi_AddRef(v5);
        v7 = s_users;
      }
      if ( v7 )
        v7->__abi_Release(v7);
      s_users = v6;
    }
    if ( v6 )
      v6->__abi_Release(v6);
    s_refresh = 0;
    Users_RefreshUserTasks();
  }
  LeaveCriticalSection(&s_lock);
  Users_PumpSignedInUsersEvents();
}

