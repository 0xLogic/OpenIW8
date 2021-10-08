/*
==============
Plat_MakePlatformSessionPublic
==============
*/

void Plat_MakePlatformSessionPublic(void)
{
  ?Plat_MakePlatformSessionPublic@@YAXXZ();
}

/*
==============
Live_PresenceFrame
==============
*/

void __fastcall Live_PresenceFrame(const int controllerIndex)
{
  ?Live_PresenceFrame@@YAXH@Z(controllerIndex);
}

/*
==============
Live_PresenceInit
==============
*/

void Live_PresenceInit(void)
{
  ?Live_PresenceInit@@YAXXZ();
}

/*
==============
Live_SetMainMenuPresence
==============
*/

void __fastcall Live_SetMainMenuPresence(int controllerIndex)
{
  ?Live_SetMainMenuPresence@@YAXH@Z(controllerIndex);
}

/*
==============
Live_SetCurrentMapname
==============
*/

void __fastcall Live_SetCurrentMapname(const char *mapname)
{
  ?Live_SetCurrentMapname@@YAXPEBD@Z(mapname);
}

/*
==============
Live_SetLobbyPresence
==============
*/

void __fastcall Live_SetLobbyPresence(int controllerIndex)
{
  ?Live_SetLobbyPresence@@YAXH@Z(controllerIndex);
}

/*
==============
Live_SetPartyPresence
==============
*/

void __fastcall Live_SetPartyPresence(int controllerIndex)
{
  ?Live_SetPartyPresence@@YAXH@Z(controllerIndex);
}

/*
==============
Live_NotPlaying
==============
*/

void __fastcall Live_NotPlaying(const int controllerIndex)
{
  ?Live_NotPlaying@@YAXH@Z(controllerIndex);
}

/*
==============
Live_SetTheatreContext
==============
*/

void Live_SetTheatreContext(void)
{
  ?Live_SetTheatreContext@@YAXXZ();
}

/*
==============
Live_SetCreditsContext
==============
*/

void Live_SetCreditsContext(void)
{
  ?Live_SetCreditsContext@@YAXXZ();
}

/*
==============
Plat_MakePlatformSessionPrivate
==============
*/

void Plat_MakePlatformSessionPrivate(void)
{
  ?Plat_MakePlatformSessionPrivate@@YAXXZ();
}

/*
==============
Plat_Session_IsInviteOnly
==============
*/

bool __fastcall Plat_Session_IsInviteOnly()
{
  return ?Plat_Session_IsInviteOnly@@YA_NXZ();
}

/*
==============
Live_SetGametype
==============
*/

void __fastcall Live_SetGametype(int controllerIndex, const char *gametype)
{
  ?Live_SetGametype@@YAXHPEBD@Z(controllerIndex, gametype);
}

/*
==============
CheckUpdatePresence
==============
*/
void CheckUpdatePresence(const int controllerIndex)
{
  __int64 v1; 
  __int64 v2; 
  int v3; 
  unsigned int v4; 
  Concurrency::details::_CancellationTokenState *OpenTaskSlot; 
  Concurrency::scheduler_interface *M_scheduler; 
  Microsoft::Xbox::Services::Presence::PresenceData **p_sendingPresence; 
  Microsoft::Xbox::Services::Presence::PresenceData *pendingPresence; 
  int v9; 
  Microsoft::Xbox::Services::Presence::PresenceData *v10; 
  int v11; 
  HSTRING v12; 
  int v13; 
  const wchar_t *StringRawBuffer_0; 
  Microsoft::Xbox::Services::XboxLiveContext *UsersXboxLiveContext; 
  Microsoft::Xbox::Services::XboxLiveContext *v16; 
  int v17; 
  __int64 v18; 
  __int64 v19; 
  Concurrency::scheduler_interface *v20; 
  int v21; 
  __int64 v22; 
  Windows::Foundation::IAsyncAction *v23; 
  Concurrency::task_options *v24; 
  Concurrency::task<void> *v25; 
  volatile signed __int32 *v26; 
  std::_Ref_count_base *Rep; 
  Concurrency::task_options v28; 
  Concurrency::task<void> v29; 
  Concurrency::task_options v30; 
  Concurrency::task_options v31; 
  HSTRING string; 
  Concurrency::scheduler_interface *v33; 
  Windows::Foundation::IAsyncAction *v34; 

  *(_QWORD *)&v28._M_InternalTaskOptions._M_hasPresetCreationCallstack = -2i64;
  v1 = controllerIndex;
  v2 = controllerIndex;
  if ( s_presenceData_0[v2].pendingPresence )
  {
    v3 = Sys_Milliseconds();
    v4 = v3;
    if ( v3 >= s_nextPresenceUpdateTime_0 && v3 >= s_perControllerPresenceUpdateTime[v1] && Live_HasWANConnectivity() )
    {
      if ( TaskManager_TaskIsInProgressForController(&tasks_0, 0, v1) )
      {
        Com_Printf(25, "Delaying presence set on controller(%i) until current presence set is complete.\n", (unsigned int)v1);
      }
      else
      {
        OpenTaskSlot = (Concurrency::details::_CancellationTokenState *)TaskManager_GetOpenTaskSlot(&tasks_0, v1, 0);
        v28._M_CancellationToken._M_Impl = OpenTaskSlot;
        OpenTaskSlot->_M_listLock._Mtx_storage._Pad[4] = 1;
        M_scheduler = NULL;
        OpenTaskSlot->_M_stateFlag._My_val = 0;
        p_sendingPresence = &s_presenceData_0[v2].sendingPresence;
        __abi_winrt_ptr_assign((void **)&s_presenceData_0[v2].sendingPresence, s_presenceData_0[v2].pendingPresence);
        pendingPresence = s_presenceData_0[v2].pendingPresence;
        if ( pendingPresence )
        {
          pendingPresence->__abi_Release(pendingPresence);
          s_presenceData_0[v2].pendingPresence = NULL;
        }
        v9 = v4 + xb3_presence_update_interval->current.integer;
        s_nextPresenceUpdateTime_0 = v9;
        v10 = *p_sendingPresence;
        string = NULL;
        v11 = v10->__abi_get_PresenceId(v10, (Platform::String **)&string);
        if ( v11 < 0 )
          __abi_WinRTraiseException(v11);
        v12 = string;
        if ( string )
        {
          v13 = WindowsDuplicateString_0(string, (HSTRING *)&v28._M_Scheduler._M_scheduler);
          if ( v13 < 0 )
            __abi_WinRTraiseException(v13);
          M_scheduler = v28._M_Scheduler._M_scheduler;
          v12 = string;
        }
        WindowsDeleteString_0(v12);
        v33 = M_scheduler;
        StringRawBuffer_0 = WindowsGetStringRawBuffer_0((HSTRING)M_scheduler, NULL);
        Com_Printf(25, "Setting presence for controller (%i) at (%i) to (%ls).  Next presence update at (%i).\n", (unsigned int)v1, v4, StringRawBuffer_0, v9);
        WindowsDeleteString_0((HSTRING)M_scheduler);
        UsersXboxLiveContext = Live_GetUsersXboxLiveContext(v1);
        v16 = UsersXboxLiveContext;
        v28._M_ContinuationContext._M_context._M_captureMethod = (unsigned __int64)UsersXboxLiveContext;
        v33 = NULL;
        if ( UsersXboxLiveContext )
        {
          v33 = NULL;
          v17 = UsersXboxLiveContext->__abi_get_PresenceService(UsersXboxLiveContext, (Microsoft::Xbox::Services::Presence::PresenceService **)&v33);
          if ( v17 < 0 )
            __abi_WinRTraiseException(v17);
          v19 = (__int64)v33;
          v20 = v33;
          *(_QWORD *)&v28._M_ContinuationContext._M_RunInline = v33;
          if ( v33 )
          {
            ((void (__fastcall *)(Concurrency::scheduler_interface *))v33->__vftable[1].schedule)(v33);
            v19 = (__int64)v33;
          }
          if ( v19 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16i64))(v19);
          v28._M_InternalTaskOptions._M_presetCreationCallstack._M_SingleFrame = v20;
          v34 = NULL;
          LOBYTE(v18) = 1;
          v21 = ((__int64 (__fastcall *)(Concurrency::scheduler_interface *, __int64, Microsoft::Xbox::Services::Presence::PresenceData *, Windows::Foundation::IAsyncAction **))v20->__vftable[11].schedule)(v20, v18, *p_sendingPresence, &v34);
          if ( v21 < 0 )
            __abi_WinRTraiseException(v21);
          v22 = (__int64)v34;
          v23 = v34;
          if ( v34 )
          {
            v34->__abi_AddRef(v34);
            v22 = (__int64)v34;
          }
          if ( v22 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16i64))(v22);
          v28._M_InternalTaskOptions._M_presetCreationCallstack._M_frames._Mypair._Myval2._Myfirst = (void **)&v23->Platform::Object::__vftable;
          Concurrency::task_options::task_options(&v30);
          v25 = Concurrency::create_task<Windows::Foundation::IAsyncAction __gc *>(&v29, v23, v24);
          Concurrency::task_options::task_options(&v31);
          v28._M_Scheduler._M_sharedScheduler._Ptr = (Concurrency::scheduler_interface *)OpenTaskSlot;
          LODWORD(v28._M_Scheduler._M_sharedScheduler._Rep) = v1;
          Concurrency::task_void_::then__lambda_419bceded0385b4d579ee7cf01516bd0___(v25, (const CheckUpdatePresence::__l17::<lambda_419bceded0385b4d579ee7cf01516bd0> *)&v28._M_InternalTaskOptions._M_presetCreationCallstack._M_frames._Mypair._Myval2._Myend, &v28);
          v26 = *(volatile signed __int32 **)&v28._M_HasCancellationToken;
          if ( *(_QWORD *)&v28._M_HasCancellationToken )
          {
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)&v28._M_HasCancellationToken + 8i64), 0xFFFFFFFF) == 1 )
            {
              (**(void (__fastcall ***)(volatile signed __int32 *))v26)(v26);
              if ( _InterlockedExchangeAdd(v26 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 8i64))(v26);
            }
          }
          Rep = v29._M_unitTask._M_Impl._Rep;
          if ( v29._M_unitTask._M_Impl._Rep )
          {
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v29._M_unitTask._M_Impl._Rep->_Uses, 0xFFFFFFFF) == 1 )
            {
              Rep->_Destroy(Rep);
              if ( _InterlockedExchangeAdd((volatile signed __int32 *)&Rep->_Weaks, 0xFFFFFFFF) == 1 )
                Rep->_Delete_this(Rep);
            }
          }
          if ( v23 )
            v23->__abi_Release(v23);
          ((void (__fastcall *)(Concurrency::scheduler_interface *))v20->__vftable[2].schedule)(v20);
          v16->__abi_Release(v16);
        }
      }
    }
  }
}

/*
==============
Live_NotPlaying
==============
*/
void Live_NotPlaying(const int controllerIndex)
{
  __int64 v1; 
  HSTRING v2; 
  HSTRING v3; 
  int v4; 
  HSTRING v5; 
  __int64 v6; 
  Microsoft::Xbox::Services::Presence::PresenceData *v7; 
  Microsoft::Xbox::Services::Presence::PresenceData **p_pendingPresence; 
  const wchar_t *StringRawBuffer_0; 
  HSTRING newString; 
  HSTRING v11; 
  __int64 v12; 

  v1 = controllerIndex;
  if ( xblive_loggedin && xblive_loggedin->current.enabled )
  {
    if ( (unsigned int)controllerIndex >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_presence.cpp", 252, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, 8) )
      __debugbreak();
    Social_SetNotPlayingPresence(v1);
    newString = NULL;
    Platform::String::String(NULL, L"not_in_game");
    v3 = v2;
    v11 = v2;
    if ( v2 )
    {
      v4 = WindowsDuplicateString_0(v2, &newString);
      if ( v4 < 0 )
        __abi_WinRTraiseException(v4);
      v5 = newString;
      v11 = newString;
    }
    else
    {
      v5 = NULL;
      v11 = NULL;
    }
    WindowsDeleteString_0(v3);
    v12 = 0i64;
    Microsoft::Xbox::Services::Presence::PresenceData::PresenceData(NULL, (Platform::String *)g_serviceConfigurationId, (Platform::String *)v5);
    v7 = (Microsoft::Xbox::Services::Presence::PresenceData *)v6;
    v12 = v6;
    p_pendingPresence = &s_presenceData_0[v1].pendingPresence;
    if ( (Microsoft::Xbox::Services::Presence::PresenceData *)v6 != *p_pendingPresence )
    {
      if ( v6 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8i64))(v6);
      if ( *p_pendingPresence )
        (*p_pendingPresence)->__abi_Release(*p_pendingPresence);
      *p_pendingPresence = v7;
    }
    if ( v7 )
      v7->__abi_Release(v7);
    StringRawBuffer_0 = WindowsGetStringRawBuffer_0(v5, NULL);
    Com_Printf(25, "Setting pending presence to Not Playing for controller (%i).  PresenceID is (%ls).\n", (unsigned int)v1, StringRawBuffer_0);
    WindowsDeleteString_0(v5);
  }
}

/*
==============
Live_PresenceFrame
==============
*/
void Live_PresenceFrame(const int controllerIndex)
{
  int *p_type; 
  __int64 v3; 
  int v4; 
  char *v5; 
  const char *v6; 
  __int64 v7; 

  p_type = &tasks_0.tasks[0].type;
  do
  {
    if ( *((_BYTE *)p_type + 4) )
    {
      v3 = (unsigned int)*p_type;
      if ( (_DWORD)v3 )
      {
        v4 = 2;
        v5 = j_va("PRESENCE: Unknown session task type %i\n", v3);
        LODWORD(v7) = *p_type;
        v6 = v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_presence.cpp", 494, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "PRESENCE: Unknown session task type %i\n", v7) )
          __debugbreak();
      }
      else
      {
        v4 = *(p_type - 2);
        v6 = "Error setting presence.\n";
      }
      if ( v4 )
      {
        if ( v4 != 1 )
          Com_PrintError(25, v6);
        TaskManager_ClearTask((overlappedTask *)(p_type - 6));
      }
    }
    p_type += 10;
  }
  while ( (__int64)p_type < (__int64)&s_presenceData_0[0].pendingPresence );
  if ( Live_IsUserSignedInToLive(controllerIndex) )
    CheckUpdatePresence(controllerIndex);
}

/*
==============
Live_PresenceInit
==============
*/
void Live_PresenceInit(void)
{
  Platform::String *v0; 
  Platform::String *v1; 
  int v2; 
  Microsoft::Xbox::Services::Presence::PresenceData **p_pendingPresence; 
  Microsoft::Xbox::Services::Presence::PresenceData *v4; 
  Microsoft::Xbox::Services::Presence::PresenceData *v5; 
  Microsoft::Xbox::Services::Presence::PresenceData *v6; 
  const wchar_t *StringRawBuffer_0; 

  TaskManager_ConstructTaskSet(&tasks_0, "Live_PresenceInit");
  Dvar_BeginPermanentRegistration();
  xb3_presence_update_interval = Dvar_RegisterInt("NPLRMMNOSK", 15000, 0, 0x7FFFFFFF, 0, "Wait between presence set updates.");
  xb3_presence_stat_string_sync_delay = Dvar_RegisterInt("LPNQTQOMPL", 5000, 0, 0x7FFFFFFF, 0, "Delay after setting presence stats to force a wait before updating the presence string.");
  Dvar_EndPermanentRegistration();
  s_nextPresenceUpdateTime_0 = 0;
  memset_0(s_presenceData_0, 0, sizeof(s_presenceData_0));
  *(_QWORD *)s_perControllerPresenceUpdateTime = 0i64;
  *(_QWORD *)&s_perControllerPresenceUpdateTime[2] = 0i64;
  *(_QWORD *)&s_perControllerPresenceUpdateTime[4] = 0i64;
  *(_QWORD *)&s_perControllerPresenceUpdateTime[6] = 0i64;
  Platform::String::String(NULL, L"not_in_game");
  v1 = v0;
  WindowsDeleteString_0(NULL);
  v2 = 0;
  p_pendingPresence = &s_presenceData_0[0].pendingPresence;
  do
  {
    Microsoft::Xbox::Services::Presence::PresenceData::PresenceData(NULL, (Platform::String *)g_serviceConfigurationId, v1);
    v5 = v4;
    v6 = *p_pendingPresence;
    if ( v4 != *p_pendingPresence )
    {
      if ( v4 )
      {
        v4->__abi_AddRef(v4);
        v6 = *p_pendingPresence;
      }
      if ( v6 )
        v6->__abi_Release(v6);
      *p_pendingPresence = v5;
    }
    if ( v5 )
      v5->__abi_Release(v5);
    StringRawBuffer_0 = WindowsGetStringRawBuffer_0((HSTRING)v1, NULL);
    Com_Printf(25, "Initializing presence to Main Menu for controller (%i).  PresenceID is (%ls).\n", (unsigned int)v2++, StringRawBuffer_0);
    p_pendingPresence += 3;
  }
  while ( v2 < 8 );
  WindowsDeleteString_0((HSTRING)v1);
}

/*
==============
Live_SetCreditsContext
==============
*/
void Live_SetCreditsContext(void)
{
  int i; 
  int ControllerFromClient; 
  __int64 v2; 
  HSTRING v3; 
  HSTRING v4; 
  int v5; 
  HSTRING v6; 
  __int64 v7; 
  Microsoft::Xbox::Services::Presence::PresenceData *v8; 
  Microsoft::Xbox::Services::Presence::PresenceData **p_pendingPresence; 
  Microsoft::Xbox::Services::Presence::PresenceData *v10; 
  const wchar_t *StringRawBuffer_0; 
  HSTRING newString; 
  HSTRING v13; 
  HSTRING v14; 
  __int64 v15; 

  if ( xblive_loggedin && xblive_loggedin->current.enabled )
  {
    for ( i = 0; i < 2; ++i )
    {
      if ( CL_IsLocalClientActive((LocalClientNum_t)i) )
      {
        ControllerFromClient = CL_Mgr_GetControllerFromClient((LocalClientNum_t)i);
        v2 = ControllerFromClient;
        Social_SetWatchingCreditsPresence(ControllerFromClient);
        v14 = NULL;
        Platform::String::String(NULL, L"watching_credits");
        v4 = v3;
        v14 = v3;
        if ( v3 )
        {
          v5 = WindowsDuplicateString_0(v3, &newString);
          if ( v5 < 0 )
            __abi_WinRTraiseException(v5);
          v6 = newString;
          v13 = newString;
        }
        else
        {
          v6 = NULL;
          v13 = NULL;
        }
        WindowsDeleteString_0(v4);
        v15 = 0i64;
        Microsoft::Xbox::Services::Presence::PresenceData::PresenceData(NULL, (Platform::String *)g_serviceConfigurationId, (Platform::String *)v6);
        v8 = (Microsoft::Xbox::Services::Presence::PresenceData *)v7;
        v15 = v7;
        p_pendingPresence = &s_presenceData_0[v2].pendingPresence;
        v10 = *p_pendingPresence;
        if ( (Microsoft::Xbox::Services::Presence::PresenceData *)v7 != *p_pendingPresence )
        {
          if ( v7 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8i64))(v7);
            v10 = *p_pendingPresence;
          }
          if ( v10 )
            v10->__abi_Release(v10);
          *p_pendingPresence = v8;
        }
        if ( v8 )
          v8->__abi_Release(v8);
        StringRawBuffer_0 = WindowsGetStringRawBuffer_0(v6, NULL);
        Com_Printf(25, "Setting pending presence to Watching Credits for controller (%i).  PresenceID is (%ls).\n", (unsigned int)v2, StringRawBuffer_0);
        WindowsDeleteString_0(v6);
      }
    }
  }
}

/*
==============
Live_SetCurrentMapname
==============
*/
void Live_SetCurrentMapname(const char *mapname)
{
  unsigned __int64 v2; 
  unsigned __int8 ActiveGameMode; 
  Platform::String *v4; 
  Platform::String *v5; 
  PCWSTR v6; 
  HSTRING v7; 
  Platform::String *v8; 
  PCWSTR v9; 
  Platform::String *v10; 
  PCWSTR StringRawBuffer_0; 
  int v12; 
  const dvar_t *v13; 
  int i; 
  int j; 
  __int64 ControllerFromClient; 
  Microsoft::Xbox::Services::Presence::PresenceData *v17; 
  Microsoft::Xbox::Services::Presence::PresenceData *v18; 
  Microsoft::Xbox::Services::Presence::PresenceData **p_pendingPresence; 
  Microsoft::Xbox::Services::Presence::PresenceData *v20; 
  unsigned int v21; 
  bool v22; 
  unsigned int outContext; 
  Platform::String *v24; 
  __int64 v25; 
  wchar_t Dest[64]; 

  v25 = -2i64;
  if ( xblive_loggedin && xblive_loggedin->current.enabled )
  {
    v24 = NULL;
    v2 = -1i64;
    do
      ++v2;
    while ( mapname[v2] );
    if ( v2 >= 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_presence.cpp", 392, ASSERT_TYPE_ASSERT, "(strlen( mapname ) < maxMapNameLength)", (const char *)&queryFormat, "strlen( mapname ) < maxMapNameLength") )
      __debugbreak();
    mbstowcs(Dest, mapname, 0x40ui64);
    ActiveGameMode = Com_GameMode_GetActiveGameMode();
    if ( ActiveGameMode <= 1u )
    {
      Platform::String::String(NULL, L"playing_sp");
      v5 = v10;
      WindowsDeleteString_0(NULL);
      v24 = v5;
      WindowsDeleteString_0(NULL);
      StringRawBuffer_0 = WindowsGetStringRawBuffer_0((HSTRING)v5, NULL);
      Com_Printf(25, "Setting pending presence SP.  PresenceID is (%ls).\n", StringRawBuffer_0);
    }
    else if ( ActiveGameMode == 2 )
    {
      Platform::String::String(NULL, L"playing_mp");
      v5 = v8;
      WindowsDeleteString_0(NULL);
      v24 = v5;
      WindowsDeleteString_0(NULL);
      v9 = WindowsGetStringRawBuffer_0((HSTRING)v5, NULL);
      Com_Printf(25, "Setting pending presence MP.  PresenceID is (%ls).\n", v9);
    }
    else
    {
      if ( ActiveGameMode != 3 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_presence.cpp", 420, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled game mode type") )
          __debugbreak();
        v7 = NULL;
        goto LABEL_41;
      }
      Platform::String::String(NULL, L"playing_mp");
      v5 = v4;
      WindowsDeleteString_0(NULL);
      v24 = v5;
      WindowsDeleteString_0(NULL);
      v6 = WindowsGetStringRawBuffer_0((HSTRING)v5, NULL);
      Com_Printf(25, "Setting pending presence Aliens.  PresenceID is (%ls).\n", v6);
    }
    Com_GetMapPresenceContext(mapname, &outContext);
    v12 = Sys_Milliseconds();
    v13 = DVARBOOL_systemlink;
    if ( !DVARBOOL_systemlink && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "systemlink") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v13);
    if ( !v13->current.enabled )
    {
      for ( i = 0; i < 8; ++i )
      {
        if ( !CL_Mgr_IsControllerMappedToClient(i, NULL) )
          Live_NotPlaying(i);
      }
    }
    for ( j = 0; j < 2; ++j )
    {
      if ( CL_IsLocalClientActive((LocalClientNum_t)j) )
      {
        ControllerFromClient = CL_Mgr_GetControllerFromClient((LocalClientNum_t)j);
        Microsoft::Xbox::Services::Presence::PresenceData::PresenceData(NULL, (Platform::String *)g_serviceConfigurationId, v5);
        v18 = v17;
        p_pendingPresence = &s_presenceData_0[ControllerFromClient].pendingPresence;
        v20 = *p_pendingPresence;
        if ( v17 != *p_pendingPresence )
        {
          if ( v17 )
          {
            v17->__abi_AddRef(v17);
            v20 = *p_pendingPresence;
          }
          if ( v20 )
            v20->__abi_Release(v20);
          *p_pendingPresence = v18;
        }
        if ( v18 )
          v18->__abi_Release(v18);
        if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_PARACHUTE_IDLE|WEAPON_FIRING|0x80) )
        {
          Com_Printf(25, "Setting mp map presence stat for controller(%i) to (%ls).\n", (unsigned int)ControllerFromClient, Dest);
          XB3GameEvent_MpMapStarted(ControllerFromClient, Dest);
        }
        else
        {
          Com_Printf(25, "Setting sp map presence stat for controller(%i) to (%ls).\n", (unsigned int)ControllerFromClient, Dest);
          XB3GameEvent_SpMapStarted(ControllerFromClient, Dest);
        }
        s_perControllerPresenceUpdateTime[ControllerFromClient] = v12 + xb3_presence_stat_string_sync_delay->current.integer;
        v21 = outContext;
        v22 = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_PARACHUTE_IDLE|WEAPON_FIRING|0x80);
        Social_SetMapPresence(ControllerFromClient, 2 - v22, v21);
      }
    }
    v7 = (HSTRING)v5;
LABEL_41:
    WindowsDeleteString_0(v7);
  }
}

/*
==============
Live_SetGametype
==============
*/
void Live_SetGametype(int controllerIndex, const char *gametype)
{
  unsigned __int64 v4; 
  int context; 
  int v6; 
  const GametypeRichPresenceInfo *v7; 
  __int64 v8; 
  const GametypeRichPresenceInfo *v9; 
  const char *v10; 
  char v11; 
  __int64 v12; 
  char v13; 
  wchar_t Dest[16]; 

  if ( xblive_loggedin && xblive_loggedin->current.enabled )
  {
    if ( (unsigned int)controllerIndex >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_presence.cpp", 204, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, 8) )
      __debugbreak();
    v4 = -1i64;
    do
      ++v4;
    while ( gametype[v4] );
    if ( v4 >= 0x10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_presence.cpp", 208, ASSERT_TYPE_ASSERT, "(strlen( gametype ) < maxGameTypeLength)", (const char *)&queryFormat, "strlen( gametype ) < maxGameTypeLength") )
      __debugbreak();
    mbstowcs(Dest, gametype, 0x10ui64);
    Com_Printf(25, "Setting gametype presence stat for controller(%i) to (%ls).\n", (unsigned int)controllerIndex, Dest);
    XB3GameEvent_GameTypeStarted(controllerIndex, Dest);
    context = 0;
    v6 = 0;
    if ( gametypeRichPresenceInfo[0].gametype[0] )
    {
      v7 = gametypeRichPresenceInfo;
      do
      {
        v8 = 0x7FFFFFFFi64;
        v9 = &gametypeRichPresenceInfo[v6];
        if ( !gametype && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
          __debugbreak();
        if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
          __debugbreak();
        v10 = (const char *)(gametype - (const char *)v9);
        while ( 1 )
        {
          v11 = v9->gametype[(_QWORD)v10];
          v12 = v8;
          v13 = v9->gametype[0];
          v9 = (const GametypeRichPresenceInfo *)((char *)v9 + 1);
          --v8;
          if ( !v12 )
          {
LABEL_23:
            context = gametypeRichPresenceInfo[v6].context;
            goto LABEL_26;
          }
          if ( v11 != v13 )
            break;
          if ( !v11 )
            goto LABEL_23;
        }
        ++v7;
        ++v6;
      }
      while ( v7->gametype[0] );
    }
    Com_PrintWarning(25, "Unknown gametype '%s', must add it to xlast\n", gametype);
LABEL_26:
    Social_SetGameTypePresence(controllerIndex, context);
  }
}

/*
==============
Live_SetLobbyPresence
==============
*/
void Live_SetLobbyPresence(int controllerIndex)
{
  __int64 v1; 
  HSTRING v2; 
  HSTRING v3; 
  int v4; 
  HSTRING v5; 
  __int64 v6; 
  Microsoft::Xbox::Services::Presence::PresenceData *v7; 
  Microsoft::Xbox::Services::Presence::PresenceData **p_pendingPresence; 
  const wchar_t *StringRawBuffer_0; 
  HSTRING newString; 
  __int64 v11; 

  v1 = controllerIndex;
  if ( xblive_loggedin && xblive_loggedin->current.enabled )
  {
    if ( (unsigned int)controllerIndex >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_presence.cpp", 312, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, 8) )
      __debugbreak();
    Platform::String::String(NULL, L"lobby");
    v3 = v2;
    if ( v2 )
    {
      v4 = WindowsDuplicateString_0(v2, &newString);
      if ( v4 < 0 )
        __abi_WinRTraiseException(v4);
      v5 = newString;
    }
    else
    {
      v5 = NULL;
    }
    WindowsDeleteString_0(v3);
    v11 = 0i64;
    Microsoft::Xbox::Services::Presence::PresenceData::PresenceData(NULL, (Platform::String *)g_serviceConfigurationId, (Platform::String *)v5);
    v7 = (Microsoft::Xbox::Services::Presence::PresenceData *)v6;
    v11 = v6;
    p_pendingPresence = &s_presenceData_0[v1].pendingPresence;
    if ( (Microsoft::Xbox::Services::Presence::PresenceData *)v6 != *p_pendingPresence )
    {
      if ( v6 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8i64))(v6);
      if ( *p_pendingPresence )
        (*p_pendingPresence)->__abi_Release(*p_pendingPresence);
      *p_pendingPresence = v7;
    }
    if ( v7 )
      v7->__abi_Release(v7);
    StringRawBuffer_0 = WindowsGetStringRawBuffer_0(v5, NULL);
    Com_Printf(25, "Setting pending presence to Lobby for controller (%i).  PresenceID is (%ls).\n", (unsigned int)v1, StringRawBuffer_0);
    WindowsDeleteString_0(v5);
  }
}

/*
==============
Live_SetMainMenuPresence
==============
*/
void Live_SetMainMenuPresence(int controllerIndex)
{
  __int64 v1; 
  HSTRING v2; 
  HSTRING v3; 
  int v4; 
  HSTRING v5; 
  __int64 v6; 
  Microsoft::Xbox::Services::Presence::PresenceData *v7; 
  Microsoft::Xbox::Services::Presence::PresenceData **p_pendingPresence; 
  const wchar_t *StringRawBuffer_0; 
  HSTRING newString; 
  HSTRING v11; 
  __int64 v12; 

  v1 = controllerIndex;
  if ( xblive_loggedin && xblive_loggedin->current.enabled )
  {
    if ( (unsigned int)controllerIndex >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_presence.cpp", 229, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, 8) )
      __debugbreak();
    newString = NULL;
    Platform::String::String(NULL, L"not_in_game");
    v3 = v2;
    v11 = v2;
    if ( v2 )
    {
      v4 = WindowsDuplicateString_0(v2, &newString);
      if ( v4 < 0 )
        __abi_WinRTraiseException(v4);
      v5 = newString;
      v11 = newString;
    }
    else
    {
      v5 = NULL;
      v11 = NULL;
    }
    WindowsDeleteString_0(v3);
    v12 = 0i64;
    Microsoft::Xbox::Services::Presence::PresenceData::PresenceData(NULL, (Platform::String *)g_serviceConfigurationId, (Platform::String *)v5);
    v7 = (Microsoft::Xbox::Services::Presence::PresenceData *)v6;
    v12 = v6;
    p_pendingPresence = &s_presenceData_0[v1].pendingPresence;
    if ( (Microsoft::Xbox::Services::Presence::PresenceData *)v6 != *p_pendingPresence )
    {
      if ( v6 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8i64))(v6);
      if ( *p_pendingPresence )
        (*p_pendingPresence)->__abi_Release(*p_pendingPresence);
      *p_pendingPresence = v7;
    }
    if ( v7 )
      v7->__abi_Release(v7);
    StringRawBuffer_0 = WindowsGetStringRawBuffer_0(v5, NULL);
    Com_Printf(25, "Setting pending presence to Main Menu for controller (%i).  PresenceID is (%ls).\n", (unsigned int)v1, StringRawBuffer_0);
    WindowsDeleteString_0(v5);
  }
}

/*
==============
Live_SetPartyPresence
==============
*/
void Live_SetPartyPresence(int controllerIndex)
{
  __int64 v1; 
  HSTRING v2; 
  HSTRING v3; 
  int v4; 
  HSTRING v5; 
  __int64 v6; 
  Microsoft::Xbox::Services::Presence::PresenceData *v7; 
  Microsoft::Xbox::Services::Presence::PresenceData **p_pendingPresence; 
  const wchar_t *StringRawBuffer_0; 
  HSTRING newString; 
  __int64 v11; 

  v1 = controllerIndex;
  if ( xblive_loggedin && xblive_loggedin->current.enabled )
  {
    if ( (unsigned int)controllerIndex >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_presence.cpp", 336, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, 8) )
      __debugbreak();
    Platform::String::String(NULL, L"party");
    v3 = v2;
    if ( v2 )
    {
      v4 = WindowsDuplicateString_0(v2, &newString);
      if ( v4 < 0 )
        __abi_WinRTraiseException(v4);
      v5 = newString;
    }
    else
    {
      v5 = NULL;
    }
    WindowsDeleteString_0(v3);
    v11 = 0i64;
    Microsoft::Xbox::Services::Presence::PresenceData::PresenceData(NULL, (Platform::String *)g_serviceConfigurationId, (Platform::String *)v5);
    v7 = (Microsoft::Xbox::Services::Presence::PresenceData *)v6;
    v11 = v6;
    p_pendingPresence = &s_presenceData_0[v1].pendingPresence;
    if ( (Microsoft::Xbox::Services::Presence::PresenceData *)v6 != *p_pendingPresence )
    {
      if ( v6 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8i64))(v6);
      if ( *p_pendingPresence )
        (*p_pendingPresence)->__abi_Release(*p_pendingPresence);
      *p_pendingPresence = v7;
    }
    if ( v7 )
      v7->__abi_Release(v7);
    StringRawBuffer_0 = WindowsGetStringRawBuffer_0(v5, NULL);
    Com_Printf(25, "Setting pending presence to Party for controller (%i).  PresenceID is (%ls).\n", (unsigned int)v1, StringRawBuffer_0);
    WindowsDeleteString_0(v5);
  }
}

/*
==============
Live_SetTheatreContext
==============
*/
void Live_SetTheatreContext(void)
{
  Social_SetWatchingTheatrePresence(0);
}

/*
==============
Plat_MakePlatformSessionPrivate
==============
*/
void Plat_MakePlatformSessionPrivate(void)
{
  ;
}

/*
==============
Plat_MakePlatformSessionPublic
==============
*/
void Plat_MakePlatformSessionPublic(void)
{
  ;
}

/*
==============
Plat_Session_IsInviteOnly
==============
*/
char Plat_Session_IsInviteOnly()
{
  return 1;
}

