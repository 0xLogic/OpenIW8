/*
==============
XB3_Session_CacheSession
==============
*/

void __fastcall XB3_Session_CacheSession(std::shared_ptr<xbox::services::multiplayer::multiplayer_session> *mp_session)
{
  ?XB3_Session_CacheSession@@YAXAEAV?$shared_ptr@Vmultiplayer_session@multiplayer@services@xbox@@@std@@@Z(mp_session);
}

/*
==============
Session_CleanupSessionsForPlatformId
==============
*/

void __fastcall Session_CleanupSessionsForPlatformId(const int localControllerIndex, unsigned __int64 platformId)
{
  ?Session_CleanupSessionsForPlatformId@@YAXH_K@Z(localControllerIndex, platformId);
}

/*
==============
Session_DumpInfo_XB3
==============
*/

void __fastcall Session_DumpInfo_XB3(const SessionData *session)
{
  ?Session_DumpInfo_XB3@@YAXPEBUSessionData@@@Z(session);
}

/*
==============
Session_LeaveOldMPSDSessions
==============
*/

void __fastcall Session_LeaveOldMPSDSessions(const int localControllerIndex)
{
  ?Session_LeaveOldMPSDSessions@@YAXH@Z(localControllerIndex);
}

/*
==============
Session_CleanupSessionsForPlatformId
==============
*/
void Session_CleanupSessionsForPlatformId(const int localControllerIndex, unsigned __int64 platformId)
{
  Microsoft::Xbox::Services::XboxLiveContext *UsersXboxLiveContext; 
  bool v5; 
  HSTRING v6; 
  HSTRING v7; 
  HSTRING v8; 
  int v9; 
  __int64 v10; 
  __int64 v11; 
  int v12; 
  int v13; 
  int v14; 
  int v15; 
  __int64 v16; 
  int v17; 
  int v18; 
  int v19; 
  Microsoft::Xbox::Services::XboxLiveContext *v20; 
  Microsoft::Xbox::Services::Multiplayer::MultiplayerService *v21; 
  int v22; 
  __int64 v23; 
  Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionStates _> _> *v24; 
  Concurrency::task_options *v25; 
  Concurrency::task<void> *v26; 
  volatile signed __int32 *v27; 
  std::_Ref_count_base *Rep; 
  Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionStates _> _> *v29; 
  HSTRING v30; 
  HSTRING newString; 
  Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionStates _> _> *v32; 
  Session_CleanupSessionsForPlatformId::__l8::<lambda_8b1cab4c8d8a37c911b5daef0d0278b2> _Func[2]; 
  volatile signed __int32 *v34; 
  __int64 v35; 
  __int64 v36; 
  Concurrency::task<Windows::Foundation::Collections::IVectorView<Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionStates _> _> v37; 
  Concurrency::task_options v38; 
  Platform::String *stringXUID; 

  v35 = -2i64;
  stringXUID = NULL;
  UsersXboxLiveContext = Live_GetUsersXboxLiveContext(localControllerIndex);
  v5 = UsersXboxLiveContext == NULL;
  if ( UsersXboxLiveContext )
    UsersXboxLiveContext->__abi_Release(UsersXboxLiveContext);
  if ( v5 )
  {
    Com_Printf(25, "[MPSD] GetSessionsAsync - no LiveContext for LC %i\n", (unsigned int)localControllerIndex);
  }
  else
  {
    ConvertPlatformIdToPlatformString(platformId, &stringXUID);
    v6 = NULL;
    v30 = NULL;
    Platform::String::String(NULL, L"LobbySession");
    v8 = v7;
    if ( v7 )
    {
      v30 = NULL;
      v9 = WindowsDuplicateString_0(v7, &newString);
      if ( v9 < 0 )
        __abi_WinRTraiseException(v9);
      v6 = newString;
      v30 = newString;
    }
    WindowsDeleteString_0(v8);
    if ( Live_HasWANConnectivity() )
    {
      Com_Printf(25, "[MPSD] GetSessionsAsync getting session data for users XUID %llu\n", platformId);
      Microsoft::Xbox::Services::Multiplayer::MultiplayerGetSessionsRequest::MultiplayerGetSessionsRequest(NULL, (Platform::String *)g_serviceConfigurationId, 0x64u);
      v11 = v10;
      if ( v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8i64))(v10);
      v36 = v11;
      if ( v11 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16i64))(v11);
      v12 = (*(__int64 (__fastcall **)(__int64, HSTRING))(*(_QWORD *)v11 + 168i64))(v11, v6);
      if ( v12 < 0 )
        __abi_WinRTraiseException(v12);
      v13 = (*(__int64 (__fastcall **)(__int64, Platform::String *))(*(_QWORD *)v11 + 120i64))(v11, stringXUID);
      if ( v13 < 0 )
        __abi_WinRTraiseException(v13);
      v14 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 184i64))(v11, 1i64);
      if ( v14 < 0 )
        __abi_WinRTraiseException(v14);
      v15 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 200i64))(v11, 0i64);
      if ( v15 < 0 )
        __abi_WinRTraiseException(v15);
      LOBYTE(v16) = 1;
      v17 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 72i64))(v11, v16);
      if ( v17 < 0 )
        __abi_WinRTraiseException(v17);
      v18 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 88i64))(v11, 0i64);
      if ( v18 < 0 )
        __abi_WinRTraiseException(v18);
      v19 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 104i64))(v11, 0i64);
      if ( v19 < 0 )
        __abi_WinRTraiseException(v19);
      v20 = Live_GetUsersXboxLiveContext(localControllerIndex);
      v21 = Microsoft::Xbox::Services::__IXboxLiveContextPublicNonVirtuals::MultiplayerService::get(v20);
      *(_QWORD *)&_Func[0].localControllerIndex = v21;
      v29 = NULL;
      v22 = v21->__abi___GetSessionsAsync__2(v21, (Microsoft::Xbox::Services::Multiplayer::MultiplayerGetSessionsRequest *)v11, &v29);
      if ( v22 < 0 )
        __abi_WinRTraiseException(v22);
      v23 = (__int64)v29;
      v24 = v29;
      if ( v29 )
      {
        v29->__abi_AddRef(v29);
        v23 = (__int64)v29;
      }
      if ( v23 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16i64))(v23);
      v32 = v24;
      if ( v24 )
        v24->__abi_AddRef(v24);
      v32 = v24;
      if ( v24 )
        v24->__abi_Release(v24);
      if ( v21 )
        v21->__abi_Release(v21);
      if ( v20 )
        v20->__abi_Release(v20);
      Concurrency::task_options::task_options(&v38);
      v26 = (Concurrency::task<void> *)Concurrency::create_task<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionStates __gc *> __gc *> __gc *>(&v37, v24, v25);
      Concurrency::task_Windows::Foundation::Collections::IVectorView_Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionStates______::then__lambda_8b1cab4c8d8a37c911b5daef0d0278b2___(v26, _Func);
      v27 = v34;
      if ( v34 )
      {
        if ( _InterlockedExchangeAdd(v34 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v27)(v27);
          if ( _InterlockedExchangeAdd(v27 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 8i64))(v27);
        }
      }
      Rep = v37._M_Impl._Rep;
      if ( v37._M_Impl._Rep )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v37._M_Impl._Rep->_Uses, 0xFFFFFFFF) == 1 )
        {
          Rep->_Destroy(Rep);
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&Rep->_Weaks, 0xFFFFFFFF) == 1 )
            Rep->_Delete_this(Rep);
        }
      }
      if ( v24 )
        v24->__abi_Release(v24);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16i64))(v11);
    }
    WindowsDeleteString_0(v6);
  }
  WindowsDeleteString_0((HSTRING)stringXUID);
}

/*
==============
Session_DumpInfo_XB3
==============
*/
void Session_DumpInfo_XB3(const SessionData *session)
{
  PartyData *PartyForSession; 
  MPSDSessionData *p_mpsdSessionData; 
  Microsoft::Xbox::Services::Multiplayer::__IMultiplayerSessionPublicNonVirtuals *multiplayerSession; 
  PartyData *v5; 
  HSTRING v6; 
  const wchar_t *StringRawBuffer_0; 
  const char *Name; 
  Windows::Foundation::Collections::IVectorView<Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionMember _> *v9; 
  bool v10; 
  Windows::Foundation::Collections::IVectorView<Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionMember _> *v11; 
  int v12; 
  Windows::Foundation::Collections::IVectorView<Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionMember _> *v13; 
  Windows::Foundation::Collections::IVectorView<Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionMember _> *v14; 
  __int64 v15; 
  __int64 m_i; 
  Platform::Guid *i; 
  int v18; 
  __int64 v19; 
  HSTRING v20; 
  int v21; 
  HSTRING v22; 
  int v23; 
  HSTRING v24; 
  int v25; 
  HSTRING v26; 
  int v27; 
  HSTRING v28; 
  int v29; 
  HSTRING v30; 
  int v31; 
  HSTRING v32; 
  int v33; 
  char *fmt; 
  HSTRING string; 
  __int64 v36; 
  __int64 v37; 
  unsigned __int64 platformId; 
  HSTRING v39; 
  HSTRING newString; 
  HSTRING v41; 
  HSTRING v42[2]; 
  __int64 v43; 
  Platform::Collections::VectorViewIterator<Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionMember _> result; 
  __int64 v45; 
  Microsoft::Xbox::Services::Multiplayer::__IMultiplayerSessionPublicNonVirtuals *v46; 
  Windows::Foundation::Collections::IVectorView<Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionMember _> *v47; 
  HSTRING v48; 
  char pDestBuffer[80]; 
  char v50[176]; 

  v45 = -2i64;
  if ( !session )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_sessions.cpp", 97, ASSERT_TYPE_ASSERT, "(session)", (const char *)&queryFormat, "session") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_sessions.cpp", 83, ASSERT_TYPE_ASSERT, "(session)", (const char *)&queryFormat, "session") )
      __debugbreak();
  }
  PartyForSession = Party_GetPartyForSession(session);
  if ( PartyForSession )
  {
    p_mpsdSessionData = &PartyForSession->mpsdSessionData;
    if ( PartyForSession == (PartyData *)-355480i64 )
    {
      multiplayerSession = NULL;
      goto LABEL_15;
    }
  }
  else
  {
    if ( session != &g_partyJoinSession && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_sessions.cpp", 89, ASSERT_TYPE_ASSERT, "(session == &g_partyJoinSession)", (const char *)&queryFormat, "session == &g_partyJoinSession") )
      __debugbreak();
    p_mpsdSessionData = &g_partyJoinInfo.mpsdSessionData;
  }
  multiplayerSession = p_mpsdSessionData->multiplayerSession;
  if ( multiplayerSession )
    multiplayerSession->__abi_AddRef(multiplayerSession);
LABEL_15:
  v46 = multiplayerSession;
  if ( multiplayerSession )
  {
    v5 = Party_GetPartyForSession(session);
    if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_sessions.cpp", 72, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
      __debugbreak();
    v6 = (HSTRING)MPSDIDToPlatformString(&v5->mpsdSessionID);
    string = NULL;
    WindowsDeleteString_0(NULL);
    StringRawBuffer_0 = WindowsGetStringRawBuffer_0(v6, NULL);
    wcstombs(Dest, StringRawBuffer_0, 0x25ui64);
    WindowsDeleteString_0(v6);
    Name = Session_GetName(session);
    Com_Printf(25, "SD: MPSD Session Info for session name %s, ID: %s\n", Name, Dest);
    v9 = Microsoft::Xbox::Services::Multiplayer::__IMultiplayerSessionPublicNonVirtuals::Members::get(multiplayerSession);
    platformId = (unsigned __int64)v9;
    v10 = v9 != NULL;
    if ( v9 )
      v9->__abi_Release(v9);
    if ( v10 )
    {
      v11 = Microsoft::Xbox::Services::Multiplayer::__IMultiplayerSessionPublicNonVirtuals::Members::get(multiplayerSession);
      platformId = (unsigned __int64)v11;
      v12 = ((__int64 (__fastcall *)(Windows::Foundation::Collections::IVectorView<Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionMember _> *, __int64 *))v11->Platform::Object::__vftable[1].__abi_AddRef)(v11, &v36);
      if ( v12 < 0 )
        __abi_WinRTraiseException(v12);
      Com_Printf(25, "SD:    Member Count %i -=-= The members will be the time of the last WriteSessionAsync call, so it is probably out of date -=-=\n", (unsigned int)v36);
      v11->__abi_Release(v11);
      v13 = Microsoft::Xbox::Services::Multiplayer::__IMultiplayerSessionPublicNonVirtuals::Members::get(multiplayerSession);
      v14 = v13;
      platformId = (unsigned __int64)v13;
      if ( v13 )
        v13->__abi_AddRef(v13);
      v47 = v14;
      if ( v14 )
      {
        v14->__abi_Release(v14);
        v14->__abi_AddRef(v14);
      }
      v42[1] = (HSTRING)v14;
      v15 = 0i64;
      v43 = 0i64;
      Windows::Foundation::Collections::end<Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionMember __gc *>(&result, v14);
      m_i = result.m_i;
      if ( result.m_i )
      {
        v37 = 0i64;
        for ( i = NULL; ; i = (Platform::Guid *)(unsigned int)v15 )
        {
          v18 = v14->Platform::Object::__vftable[1].__abi_QueryInterface(v14, i, (void **)&v37);
          if ( v18 < 0 )
            __abi_WinRTraiseException(v18);
          v19 = v37;
          v20 = (HSTRING)v37;
          if ( v37 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 8i64))(v37);
            v19 = v37;
          }
          if ( v19 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16i64))(v19);
          string = v20;
          if ( v20 )
            (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v20 + 8i64))(v20);
          v48 = v20;
          if ( v20 )
            (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v20 + 16i64))(v20);
          string = NULL;
          v21 = (*(__int64 (__fastcall **)(HSTRING, HSTRING *))(*(_QWORD *)v20 + 104i64))(v20, &string);
          if ( v21 < 0 )
            __abi_WinRTraiseException(v21);
          v22 = string;
          if ( string )
          {
            v23 = WindowsDuplicateString_0(string, &newString);
            if ( v23 < 0 )
              __abi_WinRTraiseException(v23);
            v24 = newString;
            v22 = string;
          }
          else
          {
            v24 = NULL;
          }
          WindowsDeleteString_0(v22);
          v39 = v24;
          ConvertPlatformStringToCharArray((Platform::String *)v24, pDestBuffer, 0x44ui64);
          WindowsDeleteString_0(v24);
          string = NULL;
          v25 = (*(__int64 (__fastcall **)(HSTRING, HSTRING *))(*(_QWORD *)v20 + 64i64))(v20, &string);
          if ( v25 < 0 )
            __abi_WinRTraiseException(v25);
          v26 = string;
          if ( string )
          {
            v27 = WindowsDuplicateString_0(string, &v41);
            if ( v27 < 0 )
              __abi_WinRTraiseException(v27);
            v28 = v41;
            v26 = string;
          }
          else
          {
            v28 = NULL;
          }
          WindowsDeleteString_0(v26);
          v39 = v28;
          ConvertPlatformStringToPlatformId((Platform::String *)v28, &platformId);
          WindowsDeleteString_0(v28);
          string = NULL;
          v29 = (*(__int64 (__fastcall **)(HSTRING, HSTRING *))(*(_QWORD *)v20 + 80i64))(v20, &string);
          if ( v29 < 0 )
            __abi_WinRTraiseException(v29);
          v30 = string;
          if ( string )
          {
            v31 = WindowsDuplicateString_0(string, v42);
            if ( v31 < 0 )
              __abi_WinRTraiseException(v31);
            v32 = v42[0];
            v30 = string;
          }
          else
          {
            v32 = NULL;
          }
          WindowsDeleteString_0(v30);
          v39 = v32;
          ConvertPlatformStringToCharArray((Platform::String *)v32, v50, 0xA9ui64);
          WindowsDeleteString_0(v32);
          v33 = (*(__int64 (__fastcall **)(HSTRING, __int64 *))(*(_QWORD *)v20 + 48i64))(v20, &v36);
          if ( v33 < 0 )
            __abi_WinRTraiseException(v33);
          LODWORD(fmt) = v36;
          Com_Printf(25, "SD:    Gamertag: %s, XboxUserId: %zu, MemberId: %i, SDA: %s\n", pDestBuffer, platformId, fmt, v50);
          (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v20 + 16i64))(v20);
          v43 = ++v15;
          if ( v15 == m_i )
            break;
          v37 = 0i64;
        }
      }
      if ( result.m_v )
        result.m_v->__abi_Release(result.m_v);
      if ( v14 )
        v14->__abi_Release(v14);
      if ( v14 )
        v14->__abi_Release(v14);
    }
    multiplayerSession->__abi_Release(multiplayerSession);
  }
}

/*
==============
Session_LeaveMPSDSession
==============
*/
void Session_LeaveMPSDSession(const int localControllerIndex, Microsoft::Xbox::Services::Multiplayer::MultiplayerSession *tempSession)
{
  int v4; 
  Microsoft::Xbox::Services::XboxLiveContext *UsersXboxLiveContext; 
  Microsoft::Xbox::Services::Multiplayer::MultiplayerService *v6; 
  int v7; 
  __int64 v8; 
  Windows::Foundation::IAsyncOperation<Microsoft::Xbox::Services::Multiplayer::MultiplayerSession _> *v9; 
  Concurrency::task_options *v10; 
  Concurrency::task<void> *v11; 
  volatile signed __int32 *v12; 
  std::_Ref_count_base *Rep; 
  Session_LeaveMPSDSession::__l5::<lambda_2fcff70285805bae1fcdd2e10cee803b> v14; 
  volatile signed __int32 *v15; 
  Concurrency::task<Microsoft::Xbox::Services::Multiplayer::MultiplayerSession _> v16; 
  Concurrency::task_options v17; 
  Windows::Foundation::IAsyncOperation<Microsoft::Xbox::Services::Multiplayer::MultiplayerSession _> *v18; 
  Microsoft::Xbox::Services::Multiplayer::MultiplayerService *v19; 

  if ( tempSession )
  {
    v4 = tempSession->__abi_Leave(tempSession);
    if ( v4 < 0 )
      __abi_WinRTraiseException(v4);
    UsersXboxLiveContext = Live_GetUsersXboxLiveContext(localControllerIndex);
    v6 = Microsoft::Xbox::Services::__IXboxLiveContextPublicNonVirtuals::MultiplayerService::get(UsersXboxLiveContext);
    v19 = v6;
    v18 = NULL;
    v7 = v6->__abi_WriteSessionAsync(v6, tempSession, UpdateExisting, &v18);
    if ( v7 < 0 )
      __abi_WinRTraiseException(v7);
    v8 = (__int64)v18;
    v9 = v18;
    if ( v18 )
    {
      v18->__abi_AddRef(v18);
      v8 = (__int64)v18;
    }
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16i64))(v8);
    if ( v9 )
      v9->__abi_AddRef(v9);
    if ( v9 )
      v9->__abi_Release(v9);
    if ( v6 )
      v6->__abi_Release(v6);
    if ( UsersXboxLiveContext )
      UsersXboxLiveContext->__abi_Release(UsersXboxLiveContext);
    Concurrency::task_options::task_options(&v17);
    v11 = (Concurrency::task<void> *)Concurrency::create_task<Windows::Foundation::IAsyncOperation<Microsoft::Xbox::Services::Multiplayer::MultiplayerSession __gc *> __gc *>(&v16, v9, v10);
    Concurrency::task_Microsoft::Xbox::Services::Multiplayer::MultiplayerSession___::then__lambda_2fcff70285805bae1fcdd2e10cee803b___(v11, &v14);
    v12 = v15;
    if ( v15 )
    {
      if ( _InterlockedExchangeAdd(v15 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v12)(v12);
        if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8i64))(v12);
      }
    }
    Rep = v16._M_Impl._Rep;
    if ( v16._M_Impl._Rep )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v16._M_Impl._Rep->_Uses, 0xFFFFFFFF) == 1 )
      {
        Rep->_Destroy(Rep);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&Rep->_Weaks, 0xFFFFFFFF) == 1 )
          Rep->_Delete_this(Rep);
      }
    }
    if ( v9 )
      v9->__abi_Release(v9);
  }
}

/*
==============
Session_LeaveOldMPSDSessions
==============
*/
void Session_LeaveOldMPSDSessions(const int localControllerIndex)
{
  HSTRING v2; 
  Windows::Xbox::System::User *User; 
  int v4; 
  HSTRING v5; 
  int v6; 
  HSTRING newString; 
  unsigned __int64 platformId[8]; 
  int userIndexToReturn; 
  HSTRING string; 
  Windows::Xbox::System::User *v11; 

  platformId[1] = -2i64;
  if ( GPad_GetUserIndexForPort(localControllerIndex, &userIndexToReturn) )
  {
    v2 = NULL;
    v11 = NULL;
    platformId[2] = 0i64;
    User = Users_GetUser(userIndexToReturn);
    v11 = User;
    string = NULL;
    v4 = User->__abi_get_XboxUserId(User, (Platform::String **)&string);
    if ( v4 < 0 )
      __abi_WinRTraiseException(v4);
    v5 = string;
    if ( string )
    {
      v6 = WindowsDuplicateString_0(string, &newString);
      if ( v6 < 0 )
        __abi_WinRTraiseException(v6);
      v2 = newString;
      v5 = string;
    }
    WindowsDeleteString_0(v5);
    platformId[3] = (unsigned __int64)v2;
    ConvertPlatformStringToPlatformId((Platform::String *)v2, platformId);
    WindowsDeleteString_0(v2);
    Session_CleanupSessionsForPlatformId(localControllerIndex, platformId[0]);
    User->__abi_Release(User);
  }
}

/*
==============
XB3_Session_CacheSession
==============
*/
void XB3_Session_CacheSession(std::shared_ptr<xbox::services::multiplayer::multiplayer_session> *mp_session)
{
  tCachedSession *Myfirst; 
  tCachedSession *Mylast; 
  xbox::services::multiplayer::multiplayer_session_reference *v7; 
  const std::wstring *Ptr; 
  xbox::services::multiplayer::multiplayer_session_reference *v9; 
  const std::wstring *v10; 
  unsigned __int64 Mysize; 
  unsigned __int64 v12; 
  wchar_t v13; 
  signed __int64 v14; 
  bool v15; 
  wchar_t v16; 
  int m_timeWritten; 
  tCachedSession *v18; 
  int v19; 
  tCachedSession *v20; 
  std::_Ref_count_base **p_Rep; 
  std::_Ref_count_base *v22; 
  std::_Ref_count_base *v23; 
  volatile signed __int32 *v24; 
  volatile signed __int32 *Rep; 
  std::_Ref_count_base *v26; 
  xbox::services::multiplayer::multiplayer_session *v27; 
  int v28; 
  tCachedSession *v29; 
  std::_Ref_count_base *v30; 
  tCachedSession v31; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rax-40h], xmm0
  }
  Myfirst = s_cachedSessionList._Mypair._Myval2._Myfirst;
  Mylast = s_cachedSessionList._Mypair._Myval2._Mylast;
  if ( s_cachedSessionList._Mypair._Myval2._Myfirst != s_cachedSessionList._Mypair._Myval2._Mylast )
  {
    while ( 1 )
    {
      v7 = (xbox::services::multiplayer::multiplayer_session_reference *)xbox::services::multiplayer::multiplayer_session::session_reference(Myfirst->mp_session._Ptr);
      Ptr = xbox::services::multiplayer::multiplayer_session_reference::session_name(v7);
      v9 = (xbox::services::multiplayer::multiplayer_session_reference *)xbox::services::multiplayer::multiplayer_session::session_reference(mp_session->_Ptr);
      v10 = xbox::services::multiplayer::multiplayer_session_reference::session_name(v9);
      Mysize = Ptr->_Mypair._Myval2._Mysize;
      if ( Ptr->_Mypair._Myval2._Myres >= 8 )
        Ptr = (const std::wstring *)Ptr->_Mypair._Myval2._Bx._Ptr;
      v12 = v10->_Mypair._Myval2._Mysize;
      if ( v10->_Mypair._Myval2._Myres >= 8 )
        v10 = (const std::wstring *)v10->_Mypair._Myval2._Bx._Ptr;
      if ( v12 == Mysize )
      {
        if ( !v12 )
        {
LABEL_43:
          std::shared_ptr<xbox::services::multiplayer::multiplayer_session>::operator=(&Myfirst->mp_session, mp_session);
          Myfirst->m_timeWritten = Sys_Milliseconds();
          goto LABEL_45;
        }
        v13 = v10->_Mypair._Myval2._Bx._Buf[0];
        if ( v10->_Mypair._Myval2._Bx._Buf[0] >= Ptr->_Mypair._Myval2._Bx._Buf[0] )
        {
          v14 = (char *)v10 - (char *)Ptr;
          v15 = v13 <= Ptr->_Mypair._Myval2._Bx._Buf[0];
          do
          {
            if ( !v15 )
              break;
            if ( v12 == 1 )
              goto LABEL_43;
            --v12;
            Ptr = (const std::wstring *)((char *)Ptr + 2);
            v16 = *(wchar_t *)((char *)Ptr->_Mypair._Myval2._Bx._Buf + v14);
            v15 = v16 <= Ptr->_Mypair._Myval2._Bx._Buf[0];
          }
          while ( v16 >= Ptr->_Mypair._Myval2._Bx._Buf[0] );
        }
      }
      ++Myfirst;
      Mylast = s_cachedSessionList._Mypair._Myval2._Mylast;
      if ( Myfirst == s_cachedSessionList._Mypair._Myval2._Mylast )
      {
        Myfirst = s_cachedSessionList._Mypair._Myval2._Myfirst;
        break;
      }
    }
  }
  if ( Mylast - Myfirst == 3 )
  {
    m_timeWritten = 0x7FFFFFFF;
    v18 = NULL;
    if ( Myfirst != Mylast )
    {
      do
      {
        v19 = m_timeWritten;
        m_timeWritten = Myfirst->m_timeWritten;
        v20 = Myfirst;
        if ( v19 <= m_timeWritten )
          v20 = v18;
        v18 = v20;
        if ( v19 <= m_timeWritten )
          m_timeWritten = v19;
        ++Myfirst;
      }
      while ( Myfirst != Mylast );
      if ( m_timeWritten != 0x7FFFFFFF )
      {
        if ( &v20[1] != Mylast )
        {
          p_Rep = &v20->mp_session._Rep;
          do
          {
            v22 = p_Rep[2];
            v23 = p_Rep[3];
            p_Rep[2] = NULL;
            p_Rep[3] = NULL;
            *(p_Rep - 1) = v22;
            v24 = (volatile signed __int32 *)*p_Rep;
            *p_Rep = v23;
            if ( v24 )
            {
              if ( _InterlockedExchangeAdd(v24 + 2, 0xFFFFFFFF) == 1 )
              {
                (**(void (__fastcall ***)(volatile signed __int32 *))v24)(v24);
                if ( _InterlockedExchangeAdd(v24 + 3, 0xFFFFFFFF) == 1 )
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 8i64))(v24);
              }
            }
            *((_DWORD *)p_Rep + 2) = *((_DWORD *)p_Rep + 8);
            p_Rep += 3;
          }
          while ( p_Rep + 2 != (std::_Ref_count_base **)Mylast );
          Mylast = s_cachedSessionList._Mypair._Myval2._Mylast;
        }
        Rep = (volatile signed __int32 *)Mylast[-1].mp_session._Rep;
        if ( Rep )
        {
          if ( _InterlockedExchangeAdd(Rep + 2, 0xFFFFFFFF) == 1 )
          {
            (**(void (__fastcall ***)(volatile signed __int32 *))Rep)(Rep);
            if ( _InterlockedExchangeAdd(Rep + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)Rep + 8i64))(Rep);
          }
          Mylast = s_cachedSessionList._Mypair._Myval2._Mylast;
        }
        s_cachedSessionList._Mypair._Myval2._Mylast = Mylast - 1;
      }
    }
  }
  v26 = mp_session->_Rep;
  if ( v26 )
  {
    _InterlockedIncrement((volatile signed __int32 *)&v26->_Uses);
    v26 = mp_session->_Rep;
  }
  v27 = mp_session->_Ptr;
  v31.mp_session._Ptr = mp_session->_Ptr;
  v31.mp_session._Rep = v26;
  v28 = Sys_Milliseconds();
  v31.m_timeWritten = v28;
  v29 = s_cachedSessionList._Mypair._Myval2._Mylast;
  if ( s_cachedSessionList._Mypair._Myval2._Myend == s_cachedSessionList._Mypair._Myval2._Mylast )
  {
    std::vector<tCachedSession>::_Emplace_reallocate<tCachedSession const &>(&s_cachedSessionList, s_cachedSessionList._Mypair._Myval2._Mylast, &v31);
  }
  else
  {
    s_cachedSessionList._Mypair._Myval2._Mylast->mp_session._Ptr = NULL;
    v29->mp_session._Rep = NULL;
    if ( v26 )
    {
      _InterlockedIncrement((volatile signed __int32 *)&v26->_Uses);
      v28 = v31.m_timeWritten;
      v27 = v31.mp_session._Ptr;
    }
    v29->mp_session._Ptr = v27;
    v29->mp_session._Rep = v26;
    v29->m_timeWritten = v28;
    ++s_cachedSessionList._Mypair._Myval2._Mylast;
  }
LABEL_45:
  if ( v31.mp_session._Rep && _InterlockedExchangeAdd((volatile signed __int32 *)&v31.mp_session._Rep->_Uses, 0xFFFFFFFF) == 1 )
  {
    v30 = v31.mp_session._Rep;
    v31.mp_session._Rep->_Destroy(v31.mp_session._Rep);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v30->_Weaks, 0xFFFFFFFF) == 1 )
      v31.mp_session._Rep->_Delete_this(v31.mp_session._Rep);
  }
}

