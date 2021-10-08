/*
==============
UI_BrowserUpdate
==============
*/

void __fastcall UI_BrowserUpdate(LocalClientNum_t localClientNum)
{
  ?UI_BrowserUpdate@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
UI_ShowBrowser
==============
*/

void __fastcall UI_ShowBrowser(const int controllerIndex, const char *startURL, const char *endURL, UI_BROWSER_TYPE browserType, void (__fastcall *browserCallback)(LocalClientNum_t, bool))
{
  ?UI_ShowBrowser@@YAXHPEBD0W4UI_BROWSER_TYPE@@P6AXW4LocalClientNum_t@@_N@Z@Z(controllerIndex, startURL, endURL, browserType, browserCallback);
}

/*
==============
UI_BrowserUpdate
==============
*/
void UI_BrowserUpdate(LocalClientNum_t localClientNum)
{
  ;
}

/*
==============
UI_ShowBrowser
==============
*/
void UI_ShowBrowser(const int controllerIndex, const char *startURL, const char *endURL, UI_BROWSER_TYPE browserType, void (*browserCallback)(LocalClientNum_t, bool))
{
  void *v9; 
  Platform::String *v10; 
  HSTRING v11; 
  __int64 v12; 
  __int64 v13; 
  Windows::Xbox::System::User *UserFromControllerIndex; 
  int v15; 
  int v16; 
  __int64 v17; 
  __int64 v18; 
  int v19; 
  int v20; 
  void *v21; 
  void *v22; 
  int v23; 
  int ActivationFactoryByPCWSTR; 
  int v25; 
  void *v26; 
  void *v27; 
  void *v28; 
  int v29; 
  char v30[8]; 
  void *v31; 
  void *ppActivationFactory; 
  Platform::Guid pGuid; 
  void *v34; 
  void *v35; 
  __int64 v36; 
  __int64 v37; 
  Windows::Xbox::System::User *v38; 
  __int64 v39; 
  wchar_t Dest[2048]; 

  v36 = -2i64;
  if ( !s_browserState.inited )
  {
    UI_BrowserStateClear();
    s_browserState.inited = 1;
  }
  if ( s_browserState.active && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui\\ui_browser_xb3.cpp", 20, ASSERT_TYPE_ASSERT, "(!s_browserState.active)", (const char *)&queryFormat, "!s_browserState.active") )
    __debugbreak();
  s_browserState.active = 1;
  s_browserState.callback = browserCallback;
  s_browserState.startURL = startURL;
  s_browserState.endURL = endURL;
  s_browserState.owningController = controllerIndex;
  mbstowcs(Dest, startURL, 0x800ui64);
  v9 = NULL;
  v31 = NULL;
  Platform::String::String(NULL, Dest);
  v11 = (HSTRING)v10;
  Windows::Foundation::Uri::Uri(NULL, v10);
  v13 = v12;
  v37 = v12;
  WindowsDeleteString_0(v11);
  v35 = NULL;
  UserFromControllerIndex = GetUserFromControllerIndex(controllerIndex);
  v38 = UserFromControllerIndex;
  ppActivationFactory = NULL;
  if ( !UserFromControllerIndex )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui\\ui_browser_xb3.cpp", 33, ASSERT_TYPE_ASSERT, "(user != nullptr)", (const char *)&queryFormat, "user != nullptr") )
      __debugbreak();
LABEL_46:
    UI_ExecuteBrowserCallback(0);
    UI_BrowserStateClear();
    goto LABEL_47;
  }
  v15 = UserFromControllerIndex->__abi_get_IsSignedIn(UserFromControllerIndex, (bool *)v30);
  if ( v15 < 0 )
    __abi_WinRTraiseException(v15);
  if ( !v30[0] )
    goto LABEL_46;
  v16 = UserFromControllerIndex->__abi_get_IsGuest(UserFromControllerIndex, (bool *)v30);
  if ( v16 < 0 )
    __abi_WinRTraiseException(v16);
  if ( v30[0] )
    goto LABEL_46;
  v31 = NULL;
  Windows::System::LauncherOptions::LauncherOptions(NULL);
  v18 = v17;
  v39 = v17;
  ppActivationFactory = NULL;
  if ( browserType == UI_BROWSER_FULLSCREEN )
  {
    v23 = (*(__int64 (__fastcall **)(__int64, Windows::Xbox::System::User *))(*(_QWORD *)v17 + 56i64))(v17, UserFromControllerIndex);
    if ( v23 < 0 )
      __abi_WinRTraiseException(v23);
    pGuid.__vftable = (Platform::Object_vtbl *)0x42F69E3E277151C3i64;
    *(_DWORD *)&pGuid.__d = -44194671;
    *(_DWORD *)&pGuid.__h = 1361322987;
    v34 = NULL;
    ActivationFactoryByPCWSTR = __winRT::__getActivationFactoryByPCWSTR(L"Windows.System.Launcher", &pGuid, &v34);
    if ( ActivationFactoryByPCWSTR < 0 )
      __abi_WinRTraiseException(ActivationFactoryByPCWSTR);
    ppActivationFactory = NULL;
    v25 = (*(__int64 (__fastcall **)(void *, __int64, __int64, void **))(*(_QWORD *)v34 + 56i64))(v34, v13, v18, &ppActivationFactory);
    if ( v25 < 0 )
      __abi_WinRTraiseException(v25);
    v26 = ppActivationFactory;
    v22 = ppActivationFactory;
    if ( ppActivationFactory )
    {
      (*(void (__fastcall **)(void *))(*(_QWORD *)ppActivationFactory + 8i64))(ppActivationFactory);
      v26 = ppActivationFactory;
    }
    if ( v26 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v26 + 16i64))(v26);
    v31 = NULL;
    if ( v34 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v34 + 16i64))(v34);
    v31 = v22;
    if ( v22 )
    {
      (*(void (__fastcall **)(void *))(*(_QWORD *)v22 + 8i64))(v22);
      v9 = v22;
      v35 = v22;
    }
    goto LABEL_39;
  }
  if ( browserType == UI_BROWSER_DIALOG )
  {
    pGuid.__vftable = (Platform::Object_vtbl *)0x4A682FA61FAC25F1i64;
    *(_DWORD *)&pGuid.__d = -712386936;
    *(_DWORD *)&pGuid.__h = 258755141;
    ppActivationFactory = NULL;
    v19 = __winRT::__getActivationFactoryByPCWSTR(L"Windows.Xbox.UI.SystemUI", &pGuid, &ppActivationFactory);
    if ( v19 < 0 )
      __abi_WinRTraiseException(v19);
    v34 = NULL;
    v20 = (*(__int64 (__fastcall **)(void *, __int64, Windows::Xbox::System::User *, void **))(*(_QWORD *)ppActivationFactory + 64i64))(ppActivationFactory, v13, UserFromControllerIndex, &v34);
    if ( v20 < 0 )
      __abi_WinRTraiseException(v20);
    v21 = v34;
    v22 = v34;
    if ( v34 )
    {
      (*(void (__fastcall **)(void *))(*(_QWORD *)v34 + 8i64))(v34);
      v21 = v34;
    }
    if ( v21 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v21 + 16i64))(v21);
    v31 = NULL;
    if ( ppActivationFactory )
      (*(void (__fastcall **)(void *))(*(_QWORD *)ppActivationFactory + 16i64))(ppActivationFactory);
    v31 = v22;
    if ( v22 )
    {
      (*(void (__fastcall **)(void *))(*(_QWORD *)v22 + 8i64))(v22);
      v9 = v22;
      v35 = v22;
    }
LABEL_39:
    if ( v22 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v22 + 16i64))(v22);
    goto LABEL_41;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui\\ui_browser_xb3.cpp", 47, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "No browserType provided\n") )
    __debugbreak();
LABEL_41:
  v31 = Platform::Details::Heap::Allocate(0x18ui64, 0x130ui64);
  Windows::Foundation::AsyncOperationCompletedHandler_bool_::AsyncOperationCompletedHandler_bool___lambda_d10f8755f7fd05ec5dbf2a0579ea4a4b___((UI_ShowBrowser::__l22::<lambda_d10f8755f7fd05ec5dbf2a0579ea4a4b>)v31, (Platform::CallbackContext)(unsigned __int8)v30[0], 2);
  v28 = v27;
  v31 = v27;
  v29 = (*(__int64 (__fastcall **)(void *, void *))(*(_QWORD *)v9 + 48i64))(v9, v27);
  if ( v29 < 0 )
    __abi_WinRTraiseException(v29);
  if ( v28 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v28 + 16i64))(v28);
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16i64))(v18);
LABEL_47:
  if ( UserFromControllerIndex )
    UserFromControllerIndex->__abi_Release(UserFromControllerIndex);
  if ( v9 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v9 + 16i64))(v9);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16i64))(v13);
}

