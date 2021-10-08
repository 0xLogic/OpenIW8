/*
==============
Online_Upsell::OnSignedOut
==============
*/

void __fastcall Online_Upsell::OnSignedOut(Online_Upsell *this, const int controllerIndex, GenericSignOutState signOutState)
{
  ?OnSignedOut@Online_Upsell@@UEAAXHW4GenericSignOutState@@@Z(this, controllerIndex, signOutState);
}

/*
==============
Online_Upsell::OnUnregistered
==============
*/

void __fastcall Online_Upsell::OnUnregistered(Online_Upsell *this)
{
  ?OnUnregistered@Online_Upsell@@UEAAXXZ(this);
}

/*
==============
Online_Upsell::Frame
==============
*/

void __fastcall Online_Upsell::Frame(Online_Upsell *this)
{
  ?Frame@Online_Upsell@@UEAAXXZ(this);
}

/*
==============
Online_Upsell::OnRegistered
==============
*/

void __fastcall Online_Upsell::OnRegistered(Online_Upsell *this)
{
  ?OnRegistered@Online_Upsell@@UEAAXXZ(this);
}

/*
==============
Online_Upsell::GetEntitlements
==============
*/

void __fastcall Online_Upsell::GetEntitlements(Online_Upsell *this, const int controllerIndex)
{
  ?GetEntitlements@Online_Upsell@@QEAAXH@Z(this, controllerIndex);
}

/*
==============
Online_Upsell::GetInstancePtr
==============
*/

Online_Upsell *__fastcall Online_Upsell::GetInstancePtr()
{
  return ?GetInstancePtr@Online_Upsell@@SAPEAV1@XZ();
}

/*
==============
Online_Upsell::OnDisconnect
==============
*/

void __fastcall Online_Upsell::OnDisconnect(Online_Upsell *this, ONLINE_DISCONNECT reason)
{
  ?OnDisconnect@Online_Upsell@@UEAAXW4ONLINE_DISCONNECT@@@Z(this, reason);
}

/*
==============
Online_Upsell::OnSignedIn
==============
*/

void __fastcall Online_Upsell::OnSignedIn(Online_Upsell *this, const int controllerIndex, GenericSignInState signinState)
{
  ?OnSignedIn@Online_Upsell@@UEAAXHW4GenericSignInState@@@Z(this, controllerIndex, signinState);
}

/*
==============
Online_Upsell::Uninit
==============
*/

void __fastcall Online_Upsell::Uninit(Online_Upsell *this)
{
  ?Uninit@Online_Upsell@@UEAAXXZ(this);
}

/*
==============
Online_Upsell::OutputCurrentState
==============
*/

void __fastcall Online_Upsell::OutputCurrentState(Online_Upsell *this, const int controllerIndex)
{
  ?OutputCurrentState@Online_Upsell@@UEAAXH@Z(this, controllerIndex);
}

/*
==============
Online_Upsell::ControllerFrame
==============
*/

void __fastcall Online_Upsell::ControllerFrame(Online_Upsell *this, const int controllerIndex)
{
  ?ControllerFrame@Online_Upsell@@UEAAXH@Z(this, controllerIndex);
}

/*
==============
Online_Upsell::GetInstance
==============
*/

Online_Upsell *__fastcall Online_Upsell::GetInstance()
{
  return ?GetInstance@Online_Upsell@@SAAEAV1@XZ();
}

/*
==============
Online_Upsell::RegisterLuaFunctions
==============
*/

void __fastcall Online_Upsell::RegisterLuaFunctions(Online_Upsell *this, lua_State *luaVM)
{
  ?RegisterLuaFunctions@Online_Upsell@@UEAAXPEAUlua_State@@@Z(this, luaVM);
}

/*
==============
Online_Upsell::Init
==============
*/

bool __fastcall Online_Upsell::Init(Online_Upsell *this)
{
  return ?Init@Online_Upsell@@UEAA_NXZ(this);
}

/*
==============
Online_Upsell::OnRegistered
==============
*/
void Online_Upsell::OnRegistered(Online_Upsell *this)
{
  ;
}

/*
==============
Online_Upsell::OnUnregistered
==============
*/
void Online_Upsell::OnUnregistered(Online_Upsell *this)
{
  ;
}

/*
==============
Online_Upsell::Init
==============
*/
char Online_Upsell::Init(Online_Upsell *this)
{
  return 1;
}

/*
==============
Online_Upsell::Uninit
==============
*/
void Online_Upsell::Uninit(Online_Upsell *this)
{
  ;
}

/*
==============
Online_Upsell::Frame
==============
*/
void Online_Upsell::Frame(Online_Upsell *this)
{
  ;
}

/*
==============
Online_Upsell::ControllerFrame
==============
*/
void Online_Upsell::ControllerFrame(Online_Upsell *this, const int controllerIndex)
{
  ;
}

/*
==============
Online_Upsell::OnSignedIn
==============
*/
void Online_Upsell::OnSignedIn(Online_Upsell *this, const int controllerIndex, GenericSignInState signinState)
{
  if ( signinState == SignedInToFirstParty )
    Online_Upsell::GetEntitlements(&Online_Upsell::s_instance, controllerIndex);
}

/*
==============
Online_Upsell::OnSignedOut
==============
*/
void Online_Upsell::OnSignedOut(Online_Upsell *this, const int controllerIndex, GenericSignOutState signOutState)
{
  ;
}

/*
==============
Online_Upsell::OnDisconnect
==============
*/
void Online_Upsell::OnDisconnect(Online_Upsell *this, ONLINE_DISCONNECT reason)
{
  ;
}

/*
==============
Online_Upsell::RegisterLuaFunctions
==============
*/
void Online_Upsell::RegisterLuaFunctions(Online_Upsell *this, lua_State *luaVM)
{
  j_luaL_register(luaVM, "Upsell", upsell_methods);
  j_lua_settop(luaVM, -2);
}

/*
==============
Online_Upsell::OutputCurrentState
==============
*/
void Online_Upsell::OutputCurrentState(Online_Upsell *this, const int controllerIndex)
{
  Com_Printf(25, "UPSELL DUMP START controllerIndex %d\n", (unsigned int)controllerIndex);
  Com_Printf(25, "UPSELL DUMP END\n");
}

/*
==============
LUI_CoD_LuaCall_ButtonType
==============
*/
__int64 LUI_CoD_LuaCall_ButtonType(lua_State *const luaVM)
{
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "Upsell: Upsell.ButtonType( <controller> )\n");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "Upsell: Upsell.ButtonType( <controller> )\n");
  *(double *)&_XMM0 = j_lua_tonumber(luaVM, 1);
  __asm { vcvttsd2si eax, xmm0 }
  j_lua_pushinteger(luaVM, Online_Upsell::s_instance.m_upsellType[_EAX]);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v4);
  }
  return 1i64;
}

/*
==============
Online_Upsell::GetEntitlements
==============
*/
void Online_Upsell::GetEntitlements(Online_Upsell *this, const int controllerIndex)
{
  int v2; 
  char v3; 
  HSTRING v4; 
  __int64 v5; 
  int v6; 
  __int64 v7; 
  HSTRING v8; 
  int v9; 
  __int64 v10; 
  __int64 v11; 
  HSTRING v12; 
  __int64 i; 
  int v14; 
  __int64 v15; 
  __int64 v16; 
  int v17; 
  HSTRING v18; 
  int v19; 
  const wchar_t *StringRawBuffer_0; 
  __int64 v21; 
  __int64 v22; 
  __int64 v23; 
  __int64 v24; 
  unsigned int v25; 
  unsigned int v27; 
  unsigned __int16 GlobalModel; 
  unsigned __int16 ModelFromPath; 
  Microsoft::Xbox::Services::XboxLiveContext *UsersXboxLiveContext; 
  __int64 v31; 
  int v32; 
  __int64 v33; 
  __int64 v34; 
  __int64 v35; 
  int v36; 
  __int64 v37; 
  __int64 v38; 
  Windows::Foundation::IAsyncInfo *v39; 
  int v40; 
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  TaskManager *Instance; 
  Windows::Foundation::IAsyncInfo *v43; 
  Windows::Foundation::IAsyncInfo *v44; 
  int v45; 
  int v46; 
  __int64 v47; 
  HSTRING newString; 
  unsigned int v49; 
  __int64 v50; 
  HSTRING string; 
  __int64 v52; 
  __int64 v53; 
  TaskCreateRequest pTaskCreateRequest; 
  Online_Upsell *v55; 
  HSTRING v56; 
  __int64 v57; 
  __int64 v58; 
  __int64 v59; 
  HSTRING v60; 
  __int64 v61; 
  __int64 v62; 
  __int64 v63; 
  Windows::Foundation::IAsyncInfo *v64; 
  HSTRING v65; 
  __int64 v66; 
  HSTRING v67; 
  __int64 v68; 
  TaskCreateResult pTaskCreateResult; 
  char MultiByteStr[64]; 

  v58 = -2i64;
  v2 = controllerIndex;
  v46 = controllerIndex;
  v55 = this;
  v45 = 0;
  v3 = 0;
  Windows::Xbox::Management::Deployment::DownloadableContentPackageManager::DownloadableContentPackageManager(NULL);
  v5 = (__int64)v4;
  newString = v4;
  if ( v4 )
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v4 + 8i64))(v4);
  v59 = v5;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16i64))(v5);
  v50 = 0i64;
  v6 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v5 + 48i64))(v5, 2i64, &v50);
  if ( v6 < 0 )
    __abi_WinRTraiseException(v6);
  v7 = v50;
  v8 = (HSTRING)v50;
  if ( v50 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v50 + 8i64))(v50);
    v7 = v50;
  }
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16i64))(v7);
  newString = v8;
  if ( v8 )
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v8 + 8i64))(v8);
  v60 = v8;
  if ( v8 )
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v8 + 16i64))(v8);
  if ( v8 )
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v8 + 8i64))(v8);
  v65 = v8;
  v66 = 0i64;
  v9 = (*(__int64 (__fastcall **)(HSTRING, unsigned int *))(*(_QWORD *)v8 + 56i64))(v8, &v49);
  if ( v9 < 0 )
    __abi_WinRTraiseException(v9);
  v10 = v49;
  (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v8 + 8i64))(v8);
  v67 = v8;
  v68 = v10;
  v45 = 3;
  (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v8 + 16i64))(v8);
  (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v8 + 8i64))(v8);
  v56 = v8;
  v11 = 0i64;
  v57 = 0i64;
  v45 = 7;
  if ( v10 )
  {
    v12 = NULL;
    v47 = 0i64;
    for ( i = 0i64; ; i = (unsigned int)v11 )
    {
      v14 = (*(__int64 (__fastcall **)(HSTRING, __int64, __int64 *))(*(_QWORD *)v8 + 48i64))(v8, i, &v47);
      if ( v14 < 0 )
        __abi_WinRTraiseException(v14);
      v15 = v47;
      v16 = v47;
      if ( v47 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v47 + 8i64))(v47);
        v15 = v47;
      }
      if ( v15 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16i64))(v15);
      v44 = (Windows::Foundation::IAsyncInfo *)v16;
      if ( v16 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8i64))(v16);
      if ( v16 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16i64))(v16);
      v44 = (Windows::Foundation::IAsyncInfo *)v16;
      if ( v16 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8i64))(v16);
      v44 = (Windows::Foundation::IAsyncInfo *)v16;
      if ( v16 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16i64))(v16);
      string = NULL;
      v17 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v16 + 64i64))(v16, &string);
      if ( v17 < 0 )
        __abi_WinRTraiseException(v17);
      v18 = string;
      if ( string )
      {
        v19 = WindowsDuplicateString_0(string, &newString);
        if ( v19 < 0 )
          __abi_WinRTraiseException(v19);
        v12 = newString;
        v18 = string;
      }
      WindowsDeleteString_0(v18);
      StringRawBuffer_0 = WindowsGetStringRawBuffer_0(v12, NULL);
      WideCharToMultiByte(0xFDE9u, 0, StringRawBuffer_0, -1, MultiByteStr, 64, NULL, NULL);
      WindowsDeleteString_0(v12);
      v12 = NULL;
      v22 = 0x7FFFFFFFi64;
      v23 = 0i64;
      do
      {
        v24 = (unsigned __int8)MultiByteStr[v23];
        v25 = (unsigned __int8)aF8d4e2422ac042[v23++];
        if ( !v22-- )
          break;
        if ( (_DWORD)v24 != v25 )
        {
          v27 = v24 + 32;
          if ( (unsigned int)(v24 - 65) > 0x19 )
            v27 = v24;
          v24 = v27;
          v21 = v25 + 32;
          if ( v25 - 65 > 0x19 )
            v21 = v25;
          if ( v27 != (_DWORD)v21 )
            goto LABEL_46;
        }
      }
      while ( (_DWORD)v24 );
      v3 = 1;
LABEL_46:
      (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v16 + 16i64))(v16, v21, v24);
      v57 = ++v11;
      if ( v11 == v10 )
        break;
      v47 = 0i64;
    }
    v2 = v46;
  }
  (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v8 + 16i64))(v8);
  (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v8 + 16i64))(v8);
  if ( v3 )
  {
    Online_Upsell::s_instance.m_upsellType[v2] = UPSELL_TYPE_ALREADY_OWNS;
    GlobalModel = LUI_Model_GetGlobalModel();
    ModelFromPath = LUI_Model_CreateModelFromPath(GlobalModel, "alwaysLoaded.hasMWR");
    LUI_Model_SetBool(ModelFromPath, 1);
  }
  else
  {
    UsersXboxLiveContext = Live_GetUsersXboxLiveContext(v2);
    v31 = (__int64)UsersXboxLiveContext;
    v44 = (Windows::Foundation::IAsyncInfo *)UsersXboxLiveContext;
    if ( UsersXboxLiveContext )
      UsersXboxLiveContext->__abi_AddRef(UsersXboxLiveContext);
    v61 = v31;
    if ( v31 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16i64))(v31);
    if ( Live_IsUserSignedIn(v2) && v31 )
    {
      pTaskCreateRequest.m_appTaskType = -1;
      memset(&pTaskCreateRequest.m_appData, 0, 32);
      pTaskCreateRequest.m_onUpdateCallback = NULL;
      pTaskCreateRequest.m_cancelTaskOnSignoutEvent = 1;
      pTaskCreateRequest.m_timeoutInSeconds = 0;
      pTaskCreateResult.m_localTaskId = 0;
      pTaskCreateResult.m_task = NULL;
      pTaskCreateRequest.m_controllerIndex = v2;
      pTaskCreateRequest.m_onCompletionCallback = GetEntitlementsComplete;
      v52 = 0i64;
      v32 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v31 + 200i64))(v31, &v52);
      if ( v32 < 0 )
        __abi_WinRTraiseException(v32);
      v34 = v52;
      v35 = v52;
      if ( v52 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v52 + 8i64))(v52);
        v34 = v52;
      }
      if ( v34 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16i64))(v34);
      v62 = v35;
      v53 = 0i64;
      LOBYTE(v33) = 1;
      v36 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v35 + 96i64))(v35, 2i64, v33);
      if ( v36 < 0 )
        __abi_WinRTraiseException(v36);
      v37 = v53;
      v38 = v53;
      if ( v53 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v53 + 8i64))(v53);
        v37 = v53;
      }
      if ( v37 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16i64))(v37);
      v63 = v38;
      v39 = NULL;
      v44 = NULL;
      if ( v38 )
      {
        v40 = (**(__int64 (__fastcall ***)(__int64, void *, __int64 *))v38)(v38, &_uuidof__AUIAsyncInfo_Foundation_Windows__, (__int64 *)&v44);
        if ( v40 < 0 )
          __abi_WinRTraiseException(v40);
        v39 = v44;
      }
      v64 = v39;
      m_asyncInfo = pTaskCreateRequest.m_asyncInfo;
      if ( v39 != pTaskCreateRequest.m_asyncInfo )
      {
        if ( v39 )
        {
          v39->__abi_AddRef(v39);
          m_asyncInfo = pTaskCreateRequest.m_asyncInfo;
        }
        if ( m_asyncInfo )
          m_asyncInfo->__abi_Release(m_asyncInfo);
        pTaskCreateRequest.m_asyncInfo = v39;
      }
      if ( v39 )
        v39->__abi_Release(v39);
      if ( v38 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16i64))(v38);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16i64))(v35);
      Instance = TaskManager::GetInstance();
      if ( !TaskManager::CreateTask(Instance, &pTaskCreateRequest, &pTaskCreateResult) )
      {
        Online_Retry::SetNextRetry(&v55->m_retry[v46]);
        Com_Printf(25, "GetEntitlements: Task Failed to Start");
      }
      pTaskCreateRequest.m_onCompletionCallback = NULL;
      pTaskCreateRequest.m_onUpdateCallback = NULL;
      pTaskCreateRequest.m_appSecondaryCallback = NULL;
      pTaskCreateRequest.m_timeoutInSeconds = 0;
      v43 = pTaskCreateRequest.m_asyncInfo;
      if ( pTaskCreateRequest.m_asyncInfo )
      {
        pTaskCreateRequest.m_asyncInfo->__abi_Release(pTaskCreateRequest.m_asyncInfo);
        v43 = NULL;
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
        v43 = pTaskCreateRequest.m_asyncInfo;
      }
      if ( v43 )
        v43->__abi_Release(v43);
    }
    else
    {
      Com_Printf(25, "GetEntitlements: Task Failed to Start NO USER CONTEXT!");
      Online_Retry::SetNextRetry(&v55->m_retry[v2]);
    }
    if ( v31 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16i64))(v31);
  }
  (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v8 + 16i64))(v8);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16i64))(v5);
}

/*
==============
Online_Upsell::GetInstance
==============
*/
Online_Upsell *Online_Upsell::GetInstance()
{
  return &Online_Upsell::s_instance;
}

/*
==============
Online_Upsell::GetInstancePtr
==============
*/
Online_Upsell *Online_Upsell::GetInstancePtr()
{
  return &Online_Upsell::s_instance;
}

/*
==============
LUI_CoD_LuaCall_DoAction_impl
==============
*/
__int64 LUI_CoD_LuaCall_DoAction_impl(lua_State *const luaVM)
{
  unsigned __int64 PlatformUserId; 
  Windows::Xbox::System::User *UserByPlatformId; 
  UPSELL_TYPE v6; 
  int v7; 
  HSTRING v8; 
  int ActivationFactoryByPCWSTR; 
  int v10; 
  __int64 v11; 
  __int64 v12; 
  Platform::Guid pGuid; 
  HSTRING_HEADER hstringHeader; 
  __int64 v16; 
  void *ppActivationFactory; 
  HSTRING string; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "Upsell: Upsell.DoAction( <controller> )\n");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "Upsell: Upsell.DoAction( <controller> )\n");
  *(double *)&_XMM0 = j_lua_tonumber(luaVM, 1);
  __asm { vcvttsd2si ebx, xmm0 }
  PlatformUserId = Live_GetPlatformUserId(_EBX);
  UserByPlatformId = Users_GetUserByPlatformId(PlatformUserId);
  v16 = 0i64;
  v6 = Online_Upsell::s_instance.m_upsellType[_EBX];
  if ( v6 )
  {
    if ( v6 == UPSELL_TYPE_DIGITAL )
    {
      v7 = WindowsCreateStringReference_0(L"d60c8661-e16f-47b4-ae93-99c8187821f0", 0x24u, &hstringHeader, &string);
      if ( v7 < 0 )
        __abi_WinRTraiseException(v7);
      v8 = string;
      pGuid.__vftable = (Platform::Object_vtbl *)0x4F6ABDD476EFB705i64;
      *(_DWORD *)&pGuid.__d = 1370065293;
      *(_DWORD *)&pGuid.__h = -407945187;
      ppActivationFactory = NULL;
      ActivationFactoryByPCWSTR = __winRT::__getActivationFactoryByPCWSTR((void *)L"Windows.Xbox.ApplicationModel.Store.Product", &pGuid, &ppActivationFactory);
      if ( ActivationFactoryByPCWSTR < 0 )
        __abi_WinRTraiseException(ActivationFactoryByPCWSTR);
      v16 = 0i64;
      v10 = (*(__int64 (__fastcall **)(void *, Windows::Xbox::System::User *, HSTRING, __int64 *))(*(_QWORD *)ppActivationFactory + 56i64))(ppActivationFactory, UserByPlatformId, v8, &v16);
      if ( v10 < 0 )
        __abi_WinRTraiseException(v10);
      v11 = v16;
      v12 = v16;
      if ( v16 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8i64))(v16);
        v11 = v16;
      }
      if ( v11 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16i64))(v11);
      if ( ppActivationFactory )
        (*(void (__fastcall **)(void *))(*(_QWORD *)ppActivationFactory + 16i64))(ppActivationFactory);
      if ( v12 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16i64))(v12);
    }
  }
  else
  {
    XB3_StartMWR();
  }
  if ( UserByPlatformId )
    UserByPlatformId->__abi_Release(UserByPlatformId);
  return 0i64;
}

