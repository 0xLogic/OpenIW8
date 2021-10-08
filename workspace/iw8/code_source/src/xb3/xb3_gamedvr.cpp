/*
==============
GameDVR_SetVideoMetadata
==============
*/

void __fastcall GameDVR_SetVideoMetadata(const char *subtitle, const char *description, const char *comment, const char *copyright)
{
  ?GameDVR_SetVideoMetadata@@YAXPEBD000@Z(subtitle, description, comment, copyright);
}

/*
==============
GameDVR_SetScreenshotMetadata
==============
*/

void __fastcall GameDVR_SetScreenshotMetadata(const char *game, const char *title, const char *comment)
{
  ?GameDVR_SetScreenshotMetadata@@YAXPEBD00@Z(game, title, comment);
}

/*
==============
GameDVR_ProhibitScreenshots
==============
*/

void __fastcall GameDVR_ProhibitScreenshots(bool prohibit)
{
  ?GameDVR_ProhibitScreenshots@@YAX_N@Z(prohibit);
}

/*
==============
GameDVR_ShutdownPlatform
==============
*/

void GameDVR_ShutdownPlatform(void)
{
  ?GameDVR_ShutdownPlatform@@YAXXZ();
}

/*
==============
GameDVR_StartRecording
==============
*/

void GameDVR_StartRecording(void)
{
  ?GameDVR_StartRecording@@YAXXZ();
}

/*
==============
GameDVR_InitPlatform
==============
*/

void GameDVR_InitPlatform(void)
{
  ?GameDVR_InitPlatform@@YAXXZ();
}

/*
==============
GameDVR_ProhibitRecording
==============
*/

void __fastcall GameDVR_ProhibitRecording(bool prohibit)
{
  ?GameDVR_ProhibitRecording@@YAX_N@Z(prohibit);
}

/*
==============
GameDVR_StopRecording
==============
*/

void __fastcall GameDVR_StopRecording(bool discard)
{
  ?GameDVR_StopRecording@@YAX_N@Z(discard);
}

/*
==============
GameDVR_InitPlatform
==============
*/
void GameDVR_InitPlatform(void)
{
  Windows::Xbox::Media::Capture::BroadcastListener *v0; 
  Windows::Xbox::Media::Capture::BroadcastListener *v1; 
  Windows::Xbox::Media::Capture::BroadcastListener *v2; 
  Windows::Foundation::EventHandler<Windows::Xbox::Media::Capture::BroadcastingStateChangedArgs _> *v3; 
  Windows::Foundation::EventHandler<Windows::Xbox::Media::Capture::BroadcastingStateChangedArgs _> *v4; 
  int v5; 
  int v6; 
  const char *v7; 
  Windows::Xbox::Media::Capture::BroadcastListener *v8; 
  Windows::Foundation::EventHandler<Windows::Xbox::Media::Capture::BroadcastingStateChangedArgs _> *v9; 

  if ( g_broadcastListener && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_gamedvr.cpp", 40, ASSERT_TYPE_ASSERT, "(g_broadcastListener == nullptr)", (const char *)&queryFormat, "g_broadcastListener == nullptr", -2i64) )
    __debugbreak();
  v8 = NULL;
  Windows::Xbox::Media::Capture::BroadcastListener::BroadcastListener(NULL);
  v1 = v0;
  v8 = v0;
  v2 = g_broadcastListener;
  if ( v0 != g_broadcastListener )
  {
    if ( v0 )
    {
      v0->__abi_AddRef(v0);
      v2 = g_broadcastListener;
    }
    if ( v2 )
      v2->__abi_Release(v2);
    g_broadcastListener = v1;
  }
  if ( v1 )
    v1->__abi_Release(v1);
  v9 = (Windows::Foundation::EventHandler<Windows::Xbox::Media::Capture::BroadcastingStateChangedArgs _> *)Platform::Details::Heap::Allocate(0x18ui64, 0x130ui64);
  Windows::Foundation::EventHandler<Windows::Xbox::Media::Capture::BroadcastingStateChangedArgs __gc *>::EventHandler<Windows::Xbox::Media::Capture::BroadcastingStateChangedArgs __gc *>(v9, GameDVR_OnBroadcastingStateChanged, (Platform::CallbackContext)2, 0);
  v4 = v3;
  v9 = v3;
  v8 = NULL;
  v5 = g_broadcastListener->__abi_add_BroadcastingStateChanged(g_broadcastListener, v3, (Windows::Foundation::EventRegistrationToken *)&v8);
  if ( v5 < 0 )
    __abi_WinRTraiseException(v5);
  if ( v4 )
    v4->__abi_Release(v4);
  LODWORD(v8) = 0;
  v6 = g_broadcastListener->__abi_get_BroadcastingState(g_broadcastListener, (Windows::Xbox::Media::Capture::BroadcastingState *)&v8);
  if ( v6 < 0 )
    __abi_WinRTraiseException(v6);
  v7 = "Yes";
  if ( (_DWORD)v8 != 1 )
    v7 = "No";
  CrashReport_AddKVP("Broadcasting", v7);
  GameDVR_ProhibitRecording(0);
}

/*
==============
GameDVR_OnBroadcastingStateChanged
==============
*/
void GameDVR_OnBroadcastingStateChanged(Platform::Object *obj, Windows::Xbox::Media::Capture::BroadcastingStateChangedArgs *eventArgs)
{
  Windows::Xbox::Media::Capture::BroadcastingStateChangedArgs_vtbl *v2; 
  int v3; 
  const char *v4; 
  int v5; 

  v2 = eventArgs->Windows::Xbox::Media::Capture::IBroadcastingStateChangedArgs::Platform::Object::__vftable;
  v5 = 0;
  v3 = v2->__abi_get_NewBroadcastingState(eventArgs, (Windows::Xbox::Media::Capture::BroadcastingState *)&v5);
  if ( v3 < 0 )
    __abi_WinRTraiseException(v3);
  v4 = "Yes";
  if ( v5 != 1 )
    v4 = "No";
  CrashReport_AddKVP("Broadcasting", v4);
}

/*
==============
GameDVR_ProhibitRecording
==============
*/
void GameDVR_ProhibitRecording(bool prohibit)
{
  int v1; 
  int v2; 
  void *v3; 
  void *v4; 
  int ActivationFactoryByPCWSTR; 
  int v6; 
  void *v7; 
  void *v8; 
  void *v9; 
  int v10; 
  Platform::Guid pGuid; 
  void *v12; 
  void *ppActivationFactory; 
  void *v14; 

  v14 = NULL;
  if ( !gamedvr_active->current.integer || prohibit )
  {
    pGuid.__vftable = (Platform::Object_vtbl *)0x4058315082845B56i64;
    *(_DWORD *)&pGuid.__d = 1739946644;
    *(_DWORD *)&pGuid.__h = -1025475245;
    ppActivationFactory = NULL;
    ActivationFactoryByPCWSTR = __winRT::__getActivationFactoryByPCWSTR(L"Windows.Xbox.Media.Capture.ApplicationClipCapture", &pGuid, &ppActivationFactory);
    if ( ActivationFactoryByPCWSTR < 0 )
      __abi_WinRTraiseException(ActivationFactoryByPCWSTR);
    v12 = NULL;
    v6 = (*(__int64 (__fastcall **)(void *, void **))(*(_QWORD *)ppActivationFactory + 48i64))(ppActivationFactory, &v12);
    if ( v6 < 0 )
      __abi_WinRTraiseException(v6);
    v7 = v12;
    v4 = v12;
    if ( v12 )
    {
      (*(void (__fastcall **)(void *))(*(_QWORD *)v12 + 8i64))(v12);
      v7 = v12;
    }
    if ( v7 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v7 + 16i64))(v7);
    v12 = NULL;
    if ( ppActivationFactory )
      (*(void (__fastcall **)(void *))(*(_QWORD *)ppActivationFactory + 16i64))(ppActivationFactory);
    v14 = v4;
    v12 = NULL;
  }
  else
  {
    pGuid.__vftable = (Platform::Object_vtbl *)0x4058315082845B56i64;
    *(_DWORD *)&pGuid.__d = 1739946644;
    *(_DWORD *)&pGuid.__h = -1025475245;
    ppActivationFactory = NULL;
    v1 = __winRT::__getActivationFactoryByPCWSTR(L"Windows.Xbox.Media.Capture.ApplicationClipCapture", &pGuid, &ppActivationFactory);
    if ( v1 < 0 )
      __abi_WinRTraiseException(v1);
    v12 = NULL;
    v2 = (*(__int64 (__fastcall **)(void *, void **))(*(_QWORD *)ppActivationFactory + 56i64))(ppActivationFactory, &v12);
    if ( v2 < 0 )
      __abi_WinRTraiseException(v2);
    v3 = v12;
    v4 = v12;
    if ( v12 )
    {
      (*(void (__fastcall **)(void *))(*(_QWORD *)v12 + 8i64))(v12);
      v3 = v12;
    }
    if ( v3 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v3 + 16i64))(v3);
    v12 = NULL;
    if ( ppActivationFactory )
      (*(void (__fastcall **)(void *))(*(_QWORD *)ppActivationFactory + 16i64))(ppActivationFactory);
    v14 = v4;
    v12 = NULL;
  }
  v12 = Platform::Details::Heap::Allocate(0x18ui64, 0x130ui64);
  Windows::Foundation::AsyncActionCompletedHandler::AsyncActionCompletedHandler__lambda_2dbe486307e2772ebc5032fd19d6b63a___((GameDVR_ProhibitRecording::__l2::<lambda_2dbe486307e2772ebc5032fd19d6b63a>)v12, NonConst, 2);
  v9 = v8;
  v12 = v8;
  v10 = (*(__int64 (__fastcall **)(void *, void *))(*(_QWORD *)v4 + 48i64))(v4, v8);
  if ( v10 < 0 )
    __abi_WinRTraiseException(v10);
  if ( v9 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v9 + 16i64))(v9);
  (*(void (__fastcall **)(void *))(*(_QWORD *)v4 + 16i64))(v4);
}

/*
==============
GameDVR_ProhibitScreenshots
==============
*/
void GameDVR_ProhibitScreenshots(bool prohibit)
{
  ;
}

/*
==============
GameDVR_SetScreenshotMetadata
==============
*/
void GameDVR_SetScreenshotMetadata(const char *game, const char *title, const char *comment)
{
  ;
}

/*
==============
GameDVR_SetVideoMetadata
==============
*/
void GameDVR_SetVideoMetadata(const char *subtitle, const char *description, const char *comment, const char *copyright)
{
  unsigned __int64 v5; 
  int v6; 

  v5 = -1i64;
  do
    ++v5;
  while ( subtitle[v5] );
  v6 = truncate_cast<int,unsigned __int64>(v5);
  MultiByteToWideChar(0xFDE9u, 0, subtitle, v6, g_clipNameStringId, 260);
}

/*
==============
GameDVR_ShutdownPlatform
==============
*/
void GameDVR_ShutdownPlatform(void)
{
  ;
}

/*
==============
GameDVR_StartRecording
==============
*/
void GameDVR_StartRecording(void)
{
  Windows::Xbox::Media::Capture::ApplicationClipCapture *v0; 
  int ControllerFromClient; 
  Windows::Xbox::System::User *UserFromControllerIndex; 
  Windows::Xbox::Media::Capture::ApplicationClipCapture *v3; 
  Windows::Xbox::Media::Capture::ApplicationClipCapture *v4; 
  Windows::Xbox::Media::Capture::ApplicationClipCapture *v5; 
  int v6; 
  Windows::Xbox::Media::Capture::ApplicationClipCapture *v7; 
  Windows::Xbox::Media::Capture::ApplicationClipCapture *v8; 
  Windows::Xbox::Media::Capture::ApplicationClipCapture *v9; 
  Windows::Xbox::Media::Capture::ApplicationClipCapture *v10; 
  int v11; 
  Windows::Xbox::Media::Capture::ApplicationClipCapture *v12; 
  Windows::Xbox::Media::Capture::ApplicationClipCapture *v13; 
  Windows::Xbox::System::User *v14; 
  Windows::Xbox::Media::Capture::ApplicationClipCapture *v15; 

  v0 = NULL;
  v13 = NULL;
  if ( gamedvr_active->current.integer )
  {
    ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
    UserFromControllerIndex = GetUserFromControllerIndex(ControllerFromClient);
    v14 = UserFromControllerIndex;
    v12 = NULL;
    if ( UserFromControllerIndex )
    {
      if ( g_capture && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_gamedvr.cpp", 102, ASSERT_TYPE_ASSERT, "(g_capture == nullptr)", (const char *)&queryFormat, "g_capture == nullptr") )
        __debugbreak();
      CrashReport_AddKVP("GameDVR", "Recording");
      v12 = NULL;
      Windows::Xbox::Media::Capture::ApplicationClipCapture::ApplicationClipCapture(NULL);
      v4 = v3;
      v12 = v3;
      v5 = g_capture;
      if ( v3 != g_capture )
      {
        if ( v3 )
        {
          v3->__abi_AddRef(v3);
          v5 = g_capture;
        }
        if ( v5 )
          v5->__abi_Release(v5);
        v5 = v4;
        g_capture = v4;
      }
      if ( v4 )
      {
        v4->__abi_Release(v4);
        v5 = g_capture;
      }
      v12 = NULL;
      v6 = v5->__abi_StartRecordAsync(v5, UserFromControllerIndex, (Windows::Foundation::IAsyncAction **)&v12);
      if ( v6 < 0 )
        __abi_WinRTraiseException(v6);
      v7 = v12;
      v8 = v12;
      if ( v12 )
      {
        v12->__abi_AddRef(v12);
        v7 = v12;
      }
      if ( v7 )
        v7->__abi_Release(v7);
      v15 = v8;
      if ( v8 )
      {
        v8->__abi_AddRef(v8);
        v0 = v8;
        v13 = v8;
      }
      if ( v8 )
        v8->__abi_Release(v8);
      v12 = (Windows::Xbox::Media::Capture::ApplicationClipCapture *)Platform::Details::Heap::Allocate(0x18ui64, 0x130ui64);
      Windows::Foundation::AsyncActionCompletedHandler::AsyncActionCompletedHandler__lambda_0a61de03729ff721c0ffaf2de5082cf1___((GameDVR_StartRecording::__l7::<lambda_0a61de03729ff721c0ffaf2de5082cf1>)v12, NonConst, 2);
      v10 = v9;
      v12 = v9;
      v11 = ((__int64 (__fastcall *)(Windows::Xbox::Media::Capture::ApplicationClipCapture *, Windows::Xbox::Media::Capture::ApplicationClipCapture *))v0->__abi_StartRecordAsync)(v0, v9);
      if ( v11 < 0 )
        __abi_WinRTraiseException(v11);
      if ( v10 )
        v10->__abi_Release(v10);
    }
    if ( UserFromControllerIndex )
      UserFromControllerIndex->__abi_Release(UserFromControllerIndex);
    if ( v0 )
      v0->__abi_Release(v0);
  }
}

/*
==============
GameDVR_StopRecording
==============
*/
void GameDVR_StopRecording(bool discard)
{
  Windows::Xbox::Media::Capture::ApplicationClipCapture *v2; 
  void *v3; 
  Windows::Xbox::Media::Capture::ApplicationClipInfo *v4; 
  Platform::String *v5; 
  HSTRING v6; 
  void *v7; 
  __int64 v8; 
  int v9; 
  void *v10; 
  void *v11; 
  void *v12; 
  void *v13; 
  int v14; 
  void *v15; 
  void *v16; 
  __int64 v17; 

  v2 = g_capture;
  if ( gamedvr_active->current.integer || g_capture )
  {
    if ( !discard )
    {
      if ( !g_capture && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_gamedvr.cpp", 132, ASSERT_TYPE_ASSERT, "(g_capture != nullptr)", (const char *)&queryFormat, "g_capture != nullptr", -2i64) )
        __debugbreak();
      v3 = NULL;
      v16 = NULL;
      v4 = NULL;
      v17 = 0i64;
      v15 = NULL;
      Platform::String::String(NULL, g_clipNameStringId);
      v6 = (HSTRING)v5;
      Windows::Xbox::Media::Capture::ApplicationClipInfo::ApplicationClipInfo(NULL, v5);
      v8 = (__int64)v7;
      v15 = v7;
      if ( v7 )
      {
        (*(void (__fastcall **)(void *))(*(_QWORD *)v7 + 8i64))(v7);
        v4 = (Windows::Xbox::Media::Capture::ApplicationClipInfo *)v8;
        v17 = v8;
      }
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16i64))(v8);
      WindowsDeleteString_0(v6);
      v15 = NULL;
      v9 = g_capture->__abi_StopRecordAsync(g_capture, v4, (Windows::Foundation::IAsyncOperationWithProgress<Windows::Xbox::Media::Capture::ApplicationClip _,Windows::Xbox::Media::Capture::ApplicationClip _> **)&v15);
      if ( v9 < 0 )
        __abi_WinRTraiseException(v9);
      v10 = v15;
      v11 = v15;
      if ( v15 )
      {
        (*(void (__fastcall **)(void *))(*(_QWORD *)v15 + 8i64))(v15);
        v10 = v15;
      }
      if ( v10 )
        (*(void (__fastcall **)(void *))(*(_QWORD *)v10 + 16i64))(v10);
      if ( v11 )
      {
        (*(void (__fastcall **)(void *))(*(_QWORD *)v11 + 8i64))(v11);
        v3 = v11;
        v16 = v11;
      }
      if ( v11 )
        (*(void (__fastcall **)(void *))(*(_QWORD *)v11 + 16i64))(v11);
      CrashReport_AddKVP("GameDVR", "Stopped");
      v15 = Platform::Details::Heap::Allocate(0x18ui64, 0x130ui64);
      Windows::Foundation::AsyncOperationWithProgressCompletedHandler_Windows::Xbox::Media::Capture::ApplicationClip___Windows::Xbox::Media::Capture::ApplicationClip___::AsyncOperationWithProgressCompletedHandler_Windows::Xbox::Media::Capture::ApplicationClip___Windows::Xbox::Media::Capture::ApplicationClip_____lambda_b0e9f68fbdd858758dbfa09875d5a0cd___((GameDVR_StopRecording::__l15::<lambda_b0e9f68fbdd858758dbfa09875d5a0cd>)v15, NonConst, 2);
      v13 = v12;
      v15 = v12;
      v14 = (*(__int64 (__fastcall **)(void *, void *))(*(_QWORD *)v3 + 64i64))(v3, v12);
      if ( v14 < 0 )
        __abi_WinRTraiseException(v14);
      if ( v13 )
        (*(void (__fastcall **)(void *))(*(_QWORD *)v13 + 16i64))(v13);
      if ( v4 )
        v4->__abi_Release(v4);
      if ( v3 )
        (*(void (__fastcall **)(void *))(*(_QWORD *)v3 + 16i64))(v3);
      v2 = g_capture;
    }
    if ( v2 )
    {
      v2->__abi_Release(v2);
      g_capture = NULL;
    }
  }
}

