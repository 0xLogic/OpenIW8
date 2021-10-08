/*
==============
ClearMemberInfo
==============
*/

void ClearMemberInfo(void)
{
  ?ClearMemberInfo@@YAXXZ();
}

/*
==============
LiveParty_Frame_Platform
==============
*/

void __fastcall LiveParty_Frame_Platform(const int controllerIndex)
{
  ?LiveParty_Frame_Platform@@YAXH@Z(controllerIndex);
}

/*
==============
LiveParty_Initialize_Platform
==============
*/

void LiveParty_Initialize_Platform(void)
{
  ?LiveParty_Initialize_Platform@@YAXXZ();
}

/*
==============
LiveParty_OpenUI
==============
*/

void __fastcall LiveParty_OpenUI(const int controllerIndex)
{
  ?LiveParty_OpenUI@@YAXH@Z(controllerIndex);
}

/*
==============
LiveParty_GetPresenceString
==============
*/

bool __fastcall LiveParty_GetPresenceString(const int memberIndex, char *presenceStr, int maxSize)
{
  return ?LiveParty_GetPresenceString@@YA_NHPEADH@Z(memberIndex, presenceStr, maxSize);
}

/*
==============
LiveParty_InviteAll
==============
*/

void __fastcall LiveParty_InviteAll(const int controllerIndex)
{
  ?LiveParty_InviteAll@@YAXH@Z(controllerIndex);
}

/*
==============
LiveParty_IsLocalControllerIndex
==============
*/

bool __fastcall LiveParty_IsLocalControllerIndex(const int memberIndex, const int controllerIndex)
{
  return ?LiveParty_IsLocalControllerIndex@@YA_NHH@Z(memberIndex, controllerIndex);
}

/*
==============
LiveParty_ForceSystemPartyPresenceRefresh
==============
*/

void LiveParty_ForceSystemPartyPresenceRefresh(void)
{
  ?LiveParty_ForceSystemPartyPresenceRefresh@@YAXXZ();
}

/*
==============
LiveParty_Update_Platform
==============
*/

void LiveParty_Update_Platform(void)
{
  ?LiveParty_Update_Platform@@YAXXZ();
}

/*
==============
LiveParty_GetXUID
==============
*/

XUID *__fastcall LiveParty_GetXUID(XUID *result, const int memberIndex)
{
  return ?LiveParty_GetXUID@@YA?AUXUID@@H@Z(result, memberIndex);
}

/*
==============
LiveParty_JoinOnPartyMember_XB3
==============
*/

void __fastcall LiveParty_JoinOnPartyMember_XB3(const int controllerIndex, const int memberIndex)
{
  ?LiveParty_JoinOnPartyMember_XB3@@YAXHH@Z(controllerIndex, memberIndex);
}

/*
==============
CheckForPresenceUpdate
==============
*/

void __fastcall CheckForPresenceUpdate(const int controllerIndex)
{
  ?CheckForPresenceUpdate@@YAXH@Z(controllerIndex);
}

/*
==============
LiveParty_InvitePartyMember_Platform
==============
*/

void __fastcall LiveParty_InvitePartyMember_Platform(const int controllerIndex, const int memberIndex)
{
  ?LiveParty_InvitePartyMember_Platform@@YAXHH@Z(controllerIndex, memberIndex);
}

/*
==============
LiveParty_InviteToSession
==============
*/

eFriendPartyInviteError __fastcall LiveParty_InviteToSession(const int controllerIndex, const bool queueForSessionInvite, const XUID *xuids, const int numInvites)
{
  return ?LiveParty_InviteToSession@@YA?AW4eFriendPartyInviteError@@H_NPEBUXUID@@H@Z(controllerIndex, queueForSessionInvite, xuids, numInvites);
}

/*
==============
LiveParty_IsInThisTitle
==============
*/

bool __fastcall LiveParty_IsInThisTitle(const int memberIndex)
{
  return ?LiveParty_IsInThisTitle@@YA_NH@Z(memberIndex);
}

/*
==============
LiveParty_IsLocalPlayer
==============
*/

bool __fastcall LiveParty_IsLocalPlayer(const int memberIndex)
{
  return ?LiveParty_IsLocalPlayer@@YA_NH@Z(memberIndex);
}

/*
==============
LiveParty_GetPlayerInfoForUI
==============
*/

UILivePartyMemberInfo *__fastcall LiveParty_GetPlayerInfoForUI(UILivePartyMemberInfo *result, const int controllerIndex, const int memberIndex)
{
  return ?LiveParty_GetPlayerInfoForUI@@YA?AUUILivePartyMemberInfo@@HH@Z(result, controllerIndex, memberIndex);
}

/*
==============
LiveParty_GetCount
==============
*/

int __fastcall LiveParty_GetCount()
{
  return ?LiveParty_GetCount@@YAHXZ();
}

/*
==============
ClearPendingInvites
==============
*/

void ClearPendingInvites(void)
{
  ?ClearPendingInvites@@YAXXZ();
}

/*
==============
LiveParty_GetGamerTag
==============
*/

const char *__fastcall LiveParty_GetGamerTag(const XUID xuid)
{
  return ?LiveParty_GetGamerTag@@YAPEBDUXUID@@@Z(xuid);
}

/*
==============
LiveParty_FeederOnShowCard_Platform
==============
*/

void __fastcall LiveParty_FeederOnShowCard_Platform(const int controllerIndex, XUID memberXuid)
{
  ?LiveParty_FeederOnShowCard_Platform@@YAXHUXUID@@@Z(controllerIndex, memberXuid);
}

/*
==============
LiveParty_GetGamerTagForMemberIndex
==============
*/

const char *__fastcall LiveParty_GetGamerTagForMemberIndex(int memberIndex)
{
  return ?LiveParty_GetGamerTagForMemberIndex@@YAPEBDH@Z(memberIndex);
}

/*
==============
CachePartyChatViewInfo
==============
*/
void CachePartyChatViewInfo(Windows::Xbox::Multiplayer::PartyChatView *partyChatView)
{
  Platform::Collections::Vector<Platform::String _,std::equal_to<Platform::String _>,1> *v2; 
  HSTRING v3; 
  int v4; 
  Platform::Collections::Vector<Platform::String _,std::equal_to<Platform::String _>,1> *v5; 
  Platform::Collections::Vector<Platform::String _,std::equal_to<Platform::String _>,1> *v6; 
  Platform::Collections::Vector<Platform::String _,std::equal_to<Platform::String _>,1> *v7; 
  int v8; 
  Platform::Collections::Vector<Platform::String _,std::equal_to<Platform::String _>,1> *v9; 
  Windows::Foundation::Collections::IVectorView<Windows::Xbox::Multiplayer::PartyChatMember _> *v10; 
  __int64 v11; 
  __int64 m_i; 
  Platform::Guid *i; 
  int v14; 
  Platform::Collections::Vector<Platform::String _,std::equal_to<Platform::String _>,1> *v15; 
  HSTRING v16; 
  int v17; 
  HSTRING v18; 
  int v19; 
  HSTRING v20; 
  unsigned __int64 *v21; 
  Platform::Collections::VectorViewIterator<Windows::Xbox::Multiplayer::PartyChatMember _> result; 
  Platform::Collections::Vector<Platform::String _,std::equal_to<Platform::String _>,1> *v23; 
  HSTRING string; 
  HSTRING newString; 
  __int64 v26; 

  if ( !partyChatView )
  {
    s_cachedPendingPartySize = 0;
    v2 = s_cachedPendingPlatformIdStrings;
    if ( !s_cachedPendingPlatformIdStrings )
      return;
LABEL_45:
    s_cachedPendingPlatformIdStrings->__abi_Release(v2);
    s_cachedPendingPlatformIdStrings = NULL;
    return;
  }
  v3 = (HSTRING)Windows::Xbox::Multiplayer::IPartyChatView::Members::get(partyChatView);
  string = v3;
  v4 = (*(__int64 (__fastcall **)(HSTRING, Platform::Collections::Vector<Platform::String _,std::equal_to<Platform::String _>,1> **))(*(_QWORD *)v3 + 56i64))(v3, &v23);
  if ( v4 < 0 )
    __abi_WinRTraiseException(v4);
  s_cachedPendingPartySize = (unsigned int)v23;
  (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v3 + 16i64))(v3);
  memset_0(s_cachedPendingPlatformIds, 0, sizeof(s_cachedPendingPlatformIds));
  if ( !s_cachedPendingPartySize )
  {
    v2 = s_cachedPendingPlatformIdStrings;
    if ( !s_cachedPendingPlatformIdStrings )
      return;
    goto LABEL_45;
  }
  v23 = (Platform::Collections::Vector<Platform::String _,std::equal_to<Platform::String _>,1> *)Platform::Details::Heap::Allocate(0x68ui64, 0x90ui64);
  Platform::Collections::Vector<Platform::String __gc *,std::equal_to<Platform::String __gc *>,1>::Vector<Platform::String __gc *,std::equal_to<Platform::String __gc *>,1>(v23);
  v6 = v5;
  v23 = v5;
  v7 = s_cachedPendingPlatformIdStrings;
  if ( v5 != s_cachedPendingPlatformIdStrings )
  {
    if ( v5 )
    {
      v5->__abi_AddRef(v5);
      v7 = s_cachedPendingPlatformIdStrings;
    }
    if ( v7 )
      v7->__abi_Release(v7);
    s_cachedPendingPlatformIdStrings = v6;
  }
  if ( v6 )
    v6->__abi_Release(v6);
  v8 = 0;
  v9 = (Platform::Collections::Vector<Platform::String _,std::equal_to<Platform::String _>,1> *)Windows::Xbox::Multiplayer::IPartyChatView::Members::get(partyChatView);
  v10 = (Windows::Foundation::Collections::IVectorView<Windows::Xbox::Multiplayer::PartyChatMember _> *)v9;
  v23 = v9;
  if ( v9 )
    v9->__abi_AddRef(v9);
  if ( v10 )
    v10->__abi_Release(v10);
  Windows::Foundation::Collections::end<Windows::Xbox::Multiplayer::PartyChatMember __gc *>(&result, v10);
  if ( v10 )
    v10->__abi_AddRef(v10);
  v11 = 0i64;
  m_i = result.m_i;
  if ( result.m_i )
  {
    v23 = NULL;
    for ( i = NULL; ; i = (Platform::Guid *)(unsigned int)v11 )
    {
      v14 = v10->Platform::Object::__vftable[1].__abi_QueryInterface(v10, i, (void **)&v23);
      if ( v14 < 0 )
        __abi_WinRTraiseException(v14);
      v15 = v23;
      v16 = (HSTRING)v23;
      if ( v23 )
      {
        v23->__abi_AddRef(v23);
        v15 = v23;
      }
      if ( v15 )
        v15->__abi_Release(v15);
      string = v16;
      if ( v16 )
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v16 + 8i64))(v16);
      if ( v16 )
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v16 + 16i64))(v16);
      string = NULL;
      v17 = (*(__int64 (__fastcall **)(HSTRING, HSTRING *))(*(_QWORD *)v16 + 48i64))(v16, &string);
      if ( v17 < 0 )
        __abi_WinRTraiseException(v17);
      v18 = string;
      if ( string )
      {
        v19 = WindowsDuplicateString_0(string, &newString);
        if ( v19 < 0 )
          __abi_WinRTraiseException(v19);
        v20 = newString;
        v18 = string;
      }
      else
      {
        v20 = NULL;
      }
      WindowsDeleteString_0(v18);
      v26 = 0i64;
      WindowsDeleteString_0(NULL);
      j__Append__Q__IVector_PE_AAVString_Platform___Collections_Foundation_Windows____Vector_PE_AAVString_Platform__U__equal_to_PE_AAVString_Platform___std___00_2Platform__UE_AAAXPE_AAVString_6__Z(s_cachedPendingPlatformIdStrings, (Platform::String *)v20);
      v21 = &s_cachedPendingPlatformIds[v8++];
      ConvertPlatformStringToPlatformId((Platform::String *)v20, v21);
      WindowsDeleteString_0(v20);
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v16 + 16i64))(v16);
      if ( ++v11 == m_i )
        break;
      v23 = NULL;
    }
  }
  if ( v10 )
    v10->__abi_Release(v10);
  if ( result.m_v )
    result.m_v->__abi_Release(result.m_v);
  if ( v10 )
    v10->__abi_Release(v10);
}

/*
==============
CheckForPendingPartyUpdate
==============
*/
void CheckForPendingPartyUpdate(const int controllerIndex)
{
  Microsoft::Xbox::Services::XboxLiveContext *UsersXboxLiveContext; 
  bool v3; 
  Windows::Xbox::Multiplayer::PartyChatView *pendingPartyView; 
  Windows::Xbox::Multiplayer::PartyChatView *partyChatView; 
  Platform::Collections::Vector<Platform::String _,std::equal_to<Platform::String _>,1> *v6; 
  Platform::Collections::Vector<Platform::String _,std::equal_to<Platform::String _>,1> *xuidStrings; 
  __int64 i; 
  const XUID *v9; 
  XUID result; 

  if ( s_pendingPartyUpdate )
  {
    UsersXboxLiveContext = Live_GetUsersXboxLiveContext(controllerIndex);
    v3 = UsersXboxLiveContext == NULL;
    if ( UsersXboxLiveContext )
      UsersXboxLiveContext->__abi_Release(UsersXboxLiveContext);
    if ( v3 )
    {
      Com_Printf(16, "Delaying pending live party update until controller(%i) has a live context.\n", (unsigned int)controllerIndex);
    }
    else if ( TaskManager_TaskIsInProgressForController(&tasks, 1, controllerIndex) )
    {
      Com_Printf(16, "Delaying pending live party update until current live party profile retrieval is complete.\n");
    }
    else if ( TaskManager_TaskIsInProgressForController(&tasks, 2, controllerIndex) )
    {
      Com_Printf(16, "Delaying pending live party update until current presence retrieval is complete.\n");
    }
    else
    {
      pendingPartyView = s_partyChatUserList.pendingPartyView;
      if ( s_partyChatUserList.pendingPartyView )
        s_partyChatUserList.pendingPartyView->__abi_AddRef(s_partyChatUserList.pendingPartyView);
      s_pendingPartyUpdate = 0;
      ClearMemberInfo();
      partyChatView = s_partyChatUserList.partyChatView;
      if ( pendingPartyView != s_partyChatUserList.partyChatView )
      {
        if ( pendingPartyView )
        {
          pendingPartyView->__abi_AddRef(pendingPartyView);
          partyChatView = s_partyChatUserList.partyChatView;
        }
        if ( partyChatView )
          partyChatView->__abi_Release(partyChatView);
        s_partyChatUserList.partyChatView = pendingPartyView;
      }
      s_partyChatUserList.size = s_cachedPendingPartySize;
      v6 = s_cachedPendingPlatformIdStrings;
      xuidStrings = s_partyChatUserList.xuidStrings;
      if ( s_cachedPendingPlatformIdStrings != s_partyChatUserList.xuidStrings )
      {
        if ( s_cachedPendingPlatformIdStrings )
        {
          s_cachedPendingPlatformIdStrings->__abi_AddRef(s_cachedPendingPlatformIdStrings);
          xuidStrings = s_partyChatUserList.xuidStrings;
        }
        if ( xuidStrings )
          xuidStrings->__abi_Release(xuidStrings);
        s_partyChatUserList.xuidStrings = v6;
      }
      if ( pendingPartyView )
      {
        for ( i = 0i64; (unsigned int)i < s_cachedPendingPartySize; i = (unsigned int)(i + 1) )
        {
          v9 = XUID::NullXUID(&result);
          XUID::operator=(&s_partyChatUserList.xuids[i], v9);
        }
        s_pendingProfileUpdate = 1;
        s_forcePresenceUpdateCount = s_partyChatUserList.size;
        pendingPartyView->__abi_Release(pendingPartyView);
      }
      else
      {
        ResetAllPartyData(xuidStrings);
      }
    }
  }
}

/*
==============
CheckForPendingProfileUpdate
==============
*/
void CheckForPendingProfileUpdate(const int controllerIndex)
{
  Windows::Xbox::Multiplayer::PartyChatView *partyChatView; 
  overlappedTask *OpenTaskSlot; 
  Microsoft::Xbox::Services::XboxLiveContext *UsersXboxLiveContext; 
  int v5; 
  __int64 v6; 
  __int64 v7; 
  Windows::Foundation::Collections::IVectorView<Platform::String _> *View__Q__IVector_PE_AAVString_Platform___Collections_Foundation_Windows____Vector_PE_AAVString_Platform__U__equal_to_PE_AAVString_Platform___std___00_2Platform__UE_AAAPE_AAU__IVectorView_PE_AAVString_Platform___234_XZ; 
  int v9; 
  __int64 v10; 
  Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Microsoft::Xbox::Services::Social::XboxUserProfile _> _> *v11; 
  Concurrency::task_options *v12; 
  Concurrency::task<void> *v13; 
  volatile signed __int32 *v14; 
  std::_Ref_count_base *Rep; 
  CheckForPendingProfileUpdate::__l12::<lambda_87a454f9cab302ee772471c69f760747> _Func; 
  volatile signed __int32 *v17; 
  Concurrency::task<Windows::Foundation::Collections::IVectorView<Microsoft::Xbox::Services::Social::XboxUserProfile _> _> v18; 
  Concurrency::task_options v19; 
  __int64 v20; 
  Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Microsoft::Xbox::Services::Social::XboxUserProfile _> _> *v21; 
  overlappedTask *v22; 

  if ( s_pendingProfileUpdate && !s_pendingPartyUpdate && Sys_Milliseconds() >= s_pendingProfileRetryTime )
  {
    if ( TaskManager_TaskIsInProgressForController(&tasks, 1, controllerIndex) )
    {
      Com_Printf(16, "Delaying pending chat party profile update until current chat party profile retrieval is complete.\n");
    }
    else
    {
      s_pendingProfileUpdate = 0;
      partyChatView = s_partyChatUserList.partyChatView;
      if ( s_partyChatUserList.partyChatView )
        s_partyChatUserList.partyChatView->__abi_AddRef(s_partyChatUserList.partyChatView);
      if ( partyChatView )
      {
        OpenTaskSlot = TaskManager_GetOpenTaskSlot(&tasks, controllerIndex, 1);
        OpenTaskSlot->active = 1;
        OpenTaskSlot->u.rest_results = TASK_NOTCOMPLETE;
        UsersXboxLiveContext = Live_GetUsersXboxLiveContext(controllerIndex);
        v20 = 0i64;
        v5 = UsersXboxLiveContext->__abi_get_ProfileService(UsersXboxLiveContext, (Microsoft::Xbox::Services::Social::ProfileService **)&v20);
        if ( v5 < 0 )
          __abi_WinRTraiseException(v5);
        v6 = v20;
        v7 = v20;
        if ( v20 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 8i64))(v20);
          v6 = v20;
        }
        if ( v6 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16i64))(v6);
        View__Q__IVector_PE_AAVString_Platform___Collections_Foundation_Windows____Vector_PE_AAVString_Platform__U__equal_to_PE_AAVString_Platform___std___00_2Platform__UE_AAAPE_AAU__IVectorView_PE_AAVString_Platform___234_XZ = j__GetView__Q__IVector_PE_AAVString_Platform___Collections_Foundation_Windows____Vector_PE_AAVString_Platform__U__equal_to_PE_AAVString_Platform___std___00_2Platform__UE_AAAPE_AAU__IVectorView_PE_AAVString_Platform___234_XZ(s_partyChatUserList.xuidStrings);
        v21 = NULL;
        v9 = (*(__int64 (__fastcall **)(__int64, Windows::Foundation::Collections::IVectorView<Platform::String _> *, Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Microsoft::Xbox::Services::Social::XboxUserProfile _> _> **))(*(_QWORD *)v7 + 56i64))(v7, View__Q__IVector_PE_AAVString_Platform___Collections_Foundation_Windows____Vector_PE_AAVString_Platform__U__equal_to_PE_AAVString_Platform___std___00_2Platform__UE_AAAPE_AAU__IVectorView_PE_AAVString_Platform___234_XZ, &v21);
        if ( v9 < 0 )
          __abi_WinRTraiseException(v9);
        v10 = (__int64)v21;
        v11 = v21;
        if ( v21 )
        {
          v21->__abi_AddRef(v21);
          v10 = (__int64)v21;
        }
        if ( v10 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16i64))(v10);
        if ( v11 )
          v11->__abi_AddRef(v11);
        if ( v11 )
          v11->__abi_Release(v11);
        if ( View__Q__IVector_PE_AAVString_Platform___Collections_Foundation_Windows____Vector_PE_AAVString_Platform__U__equal_to_PE_AAVString_Platform___std___00_2Platform__UE_AAAPE_AAU__IVectorView_PE_AAVString_Platform___234_XZ )
          View__Q__IVector_PE_AAVString_Platform___Collections_Foundation_Windows____Vector_PE_AAVString_Platform__U__equal_to_PE_AAVString_Platform___std___00_2Platform__UE_AAAPE_AAU__IVectorView_PE_AAVString_Platform___234_XZ->__abi_Release(View__Q__IVector_PE_AAVString_Platform___Collections_Foundation_Windows____Vector_PE_AAVString_Platform__U__equal_to_PE_AAVString_Platform___std___00_2Platform__UE_AAAPE_AAU__IVectorView_PE_AAVString_Platform___234_XZ);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16i64))(v7);
        if ( UsersXboxLiveContext )
          UsersXboxLiveContext->__abi_Release(UsersXboxLiveContext);
        Concurrency::task_options::task_options(&v19);
        v13 = (Concurrency::task<void> *)Concurrency::create_task<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Microsoft::Xbox::Services::Social::XboxUserProfile __gc *> __gc *> __gc *>(&v18, v11, v12);
        v22 = OpenTaskSlot;
        Concurrency::task_Windows::Foundation::Collections::IVectorView_Microsoft::Xbox::Services::Social::XboxUserProfile______::then__lambda_87a454f9cab302ee772471c69f760747___(v13, &_Func);
        v14 = v17;
        if ( v17 )
        {
          if ( _InterlockedExchangeAdd(v17 + 2, 0xFFFFFFFF) == 1 )
          {
            (**(void (__fastcall ***)(volatile signed __int32 *))v14)(v14);
            if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8i64))(v14);
          }
        }
        Rep = v18._M_Impl._Rep;
        if ( v18._M_Impl._Rep )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v18._M_Impl._Rep->_Uses, 0xFFFFFFFF) == 1 )
          {
            Rep->_Destroy(Rep);
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)&Rep->_Weaks, 0xFFFFFFFF) == 1 )
              Rep->_Delete_this(Rep);
          }
        }
        if ( v11 )
          v11->__abi_Release(v11);
        partyChatView->__abi_Release(partyChatView);
      }
    }
  }
}

/*
==============
CheckForPresenceUpdate
==============
*/
void CheckForPresenceUpdate(const int controllerIndex)
{
  unsigned int v2; 
  signed int size; 
  Windows::Foundation::Collections::IVectorView<Windows::Xbox::Multiplayer::PartyChatMember _> *v4; 
  int v5; 
  char v6; 
  signed int v7; 
  signed int v8; 
  unsigned int v9; 
  Windows::Foundation::Collections::IVectorView<Windows::Xbox::Multiplayer::PartyChatMember _> *v10; 
  int v11; 
  __int64 v12; 
  __int64 v13; 
  int v14; 
  char v15; 
  overlappedTask *OpenTaskSlot; 
  Microsoft::Xbox::Services::XboxLiveContext *UsersXboxLiveContext; 
  int v18; 
  __int64 v19; 
  __int64 v20; 
  HSTRING v21; 
  int v22; 
  __int64 v23; 
  Windows::Foundation::IAsyncOperation<Microsoft::Xbox::Services::Presence::PresenceRecord _> *v24; 
  Concurrency::task_options *v25; 
  Concurrency::task<void> *v26; 
  volatile signed __int32 *v27; 
  std::_Ref_count_base *Rep; 
  __int64 v29; 
  __int64 v30; 
  Windows::Foundation::Collections::IVectorView<Windows::Xbox::Multiplayer::PartyChatMember _> *v31; 
  Windows::Foundation::IAsyncOperation<Microsoft::Xbox::Services::Presence::PresenceRecord _> *v32; 
  __int64 v33; 
  __int64 v34; 
  void *v35; 
  __int64 v36; 
  HSTRING v37; 
  Windows::Foundation::IAsyncOperation<Microsoft::Xbox::Services::Presence::PresenceRecord _> *v38; 
  overlappedTask *v39; 
  unsigned int v40; 
  __int64 v41; 
  CheckForPresenceUpdate::__l25::<lambda_258b3912ad2aa5b1b7a57bd1b4779fdb> _Func; 
  Concurrency::task<Microsoft::Xbox::Services::Presence::PresenceRecord _> v43; 
  Concurrency::task_options v44; 
  char v45; 
  unsigned int v46; 
  unsigned int v47; 

  v41 = -2i64;
  v2 = 0;
  v46 = 0;
  if ( !s_partyChatUserList.partyChatView )
    goto LABEL_11;
  size = s_partyChatUserList.size;
  if ( (int)s_partyChatUserList.size > 32 )
    size = 32;
  if ( size <= 1 )
    goto LABEL_11;
  if ( s_pendingPartyUpdate || !s_partyChatUserList.partyChatView )
  {
    v2 = v46;
LABEL_11:
    v4 = v31;
LABEL_12:
    v6 = 1;
    goto LABEL_13;
  }
  v4 = Windows::Xbox::Multiplayer::IPartyChatView::Members::get(s_partyChatUserList.partyChatView);
  v2 = 1;
  v46 = 1;
  v5 = ((__int64 (__fastcall *)(Windows::Foundation::Collections::IVectorView<Windows::Xbox::Multiplayer::PartyChatMember _> *, unsigned int *))v4->Platform::Object::__vftable[1].__abi_AddRef)(v4, &v47);
  if ( v5 < 0 )
    __abi_WinRTraiseException(v5);
  if ( v47 <= 1 )
    goto LABEL_12;
  v6 = 0;
LABEL_13:
  if ( (v2 & 1) != 0 )
  {
    v46 = v2 & 0xFFFFFFFE;
    if ( v4 )
      v4->__abi_Release(v4);
  }
  if ( !v6 && CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0) == controllerIndex && s_forcePresenceUpdateCount > 0 && !TaskManager_TaskIsInProgressForController(&tasks, 2, controllerIndex) )
  {
    v7 = s_partyChatUserList.size;
    if ( s_partyChatUserList.partyChatView )
    {
      v8 = s_partyChatUserList.size;
      if ( (int)s_partyChatUserList.size > 32 )
        v8 = 32;
    }
    else
    {
      v8 = 0;
    }
    v9 = s_nextPresenceUpdateIndex;
    if ( s_nextPresenceUpdateIndex >= v8 )
      v9 = 0;
    s_nextPresenceUpdateIndex = v9;
    if ( s_forcePresenceUpdateCount > 0 )
      --s_forcePresenceUpdateCount;
    if ( v9 >= s_partyChatUserList.size )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_liveparty.cpp", 514, ASSERT_TYPE_ASSERT, "(unsigned)( memberIndex ) < (unsigned)( s_partyChatUserList.size )", "memberIndex doesn't index s_partyChatUserList.size\n\t%i not in [0, %i)", v9, s_partyChatUserList.size) )
        __debugbreak();
      v7 = s_partyChatUserList.size;
    }
    if ( v9 >= 0x20 )
    {
      LODWORD(v30) = 32;
      LODWORD(v29) = v9;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_liveparty.cpp", 772, ASSERT_TYPE_ASSERT, "(unsigned)( memberIndex ) < (unsigned)( 32 )", "memberIndex doesn't index XPARTY_MAX_USERS\n\t%i not in [0, %i)", v29, v30) )
        __debugbreak();
      v7 = s_partyChatUserList.size;
    }
    if ( !s_partyChatUserList.partyChatView )
      goto LABEL_47;
    if ( v7 > 32 )
      v7 = 32;
    if ( !v7 )
      goto LABEL_47;
    v10 = Windows::Xbox::Multiplayer::IPartyChatView::Members::get(s_partyChatUserList.partyChatView);
    v35 = v10;
    v33 = 0i64;
    v11 = v10->Platform::Object::__vftable[1].__abi_QueryInterface(v10, (Platform::Guid *)v9, (void **)&v33);
    if ( v11 < 0 )
      __abi_WinRTraiseException(v11);
    v12 = v33;
    v13 = v33;
    if ( v33 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 8i64))(v33);
      v12 = v33;
    }
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16i64))(v12);
    v32 = (Windows::Foundation::IAsyncOperation<Microsoft::Xbox::Services::Presence::PresenceRecord _> *)v13;
    v14 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v13 + 56i64))(v13, &v45);
    if ( v14 < 0 )
      __abi_WinRTraiseException(v14);
    v15 = v45;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16i64))(v13);
    v10->__abi_Release(v10);
    if ( !v15 )
    {
LABEL_47:
      OpenTaskSlot = TaskManager_GetOpenTaskSlot(&tasks, controllerIndex, 2);
      v35 = OpenTaskSlot;
      OpenTaskSlot->active = 1;
      OpenTaskSlot->u.rest_results = TASK_NOTCOMPLETE;
      UsersXboxLiveContext = Live_GetUsersXboxLiveContext(controllerIndex);
      v32 = (Windows::Foundation::IAsyncOperation<Microsoft::Xbox::Services::Presence::PresenceRecord _> *)UsersXboxLiveContext;
      v34 = 0i64;
      v18 = UsersXboxLiveContext->__abi_get_PresenceService(UsersXboxLiveContext, (Microsoft::Xbox::Services::Presence::PresenceService **)&v34);
      if ( v18 < 0 )
        __abi_WinRTraiseException(v18);
      v19 = v34;
      v20 = v34;
      if ( v34 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 8i64))(v34);
        v19 = v34;
      }
      if ( v19 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16i64))(v19);
      v36 = v20;
      if ( v20 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 8i64))(v20);
      v36 = v20;
      if ( v20 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16i64))(v20);
      if ( UsersXboxLiveContext )
        UsersXboxLiveContext->__abi_Release(UsersXboxLiveContext);
      v21 = (HSTRING)j__GetAt__Q__IVector_PE_AAVString_Platform___Collections_Foundation_Windows____Vector_PE_AAVString_Platform__U__equal_to_PE_AAVString_Platform___std___00_2Platform__UE_AAAPE_AAVString_6_I_Z(s_partyChatUserList.xuidStrings, v9);
      v37 = v21;
      v32 = NULL;
      v22 = (*(__int64 (__fastcall **)(__int64, HSTRING, Windows::Foundation::IAsyncOperation<Microsoft::Xbox::Services::Presence::PresenceRecord _> **))(*(_QWORD *)v20 + 96i64))(v20, v21, &v32);
      if ( v22 < 0 )
        __abi_WinRTraiseException(v22);
      v23 = (__int64)v32;
      v24 = v32;
      if ( v32 )
      {
        v32->__abi_AddRef(v32);
        v23 = (__int64)v32;
      }
      if ( v23 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16i64))(v23);
      v38 = v24;
      if ( v24 )
        v24->__abi_AddRef(v24);
      v38 = v24;
      if ( v24 )
        v24->__abi_Release(v24);
      WindowsDeleteString_0(v21);
      Concurrency::task_options::task_options(&v44);
      v26 = (Concurrency::task<void> *)Concurrency::create_task<Windows::Foundation::IAsyncOperation<Microsoft::Xbox::Services::Presence::PresenceRecord __gc *> __gc *>(&v43, v24, v25);
      v39 = OpenTaskSlot;
      v40 = v9;
      Concurrency::task_Microsoft::Xbox::Services::Presence::PresenceRecord___::then__lambda_258b3912ad2aa5b1b7a57bd1b4779fdb___(v26, &_Func);
      v27 = *(volatile signed __int32 **)&_Func.memberIndex;
      if ( *(_QWORD *)&_Func.memberIndex )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)&_Func.memberIndex + 8i64), 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v27)(v27);
          if ( _InterlockedExchangeAdd(v27 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 8i64))(v27);
        }
      }
      Rep = v43._M_Impl._Rep;
      if ( v43._M_Impl._Rep )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v43._M_Impl._Rep->_Uses, 0xFFFFFFFF) == 1 )
        {
          Rep->_Destroy(Rep);
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&Rep->_Weaks, 0xFFFFFFFF) == 1 )
            Rep->_Delete_this(Rep);
        }
      }
      if ( v24 )
        v24->__abi_Release(v24);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16i64))(v20);
    }
    ++s_nextPresenceUpdateIndex;
  }
}

/*
==============
ClearMemberInfo
==============
*/
void ClearMemberInfo(void)
{
  PresenceInfo *presence; 

  if ( s_partyChatUserList.profiles )
  {
    s_partyChatUserList.profiles->__abi_Release(s_partyChatUserList.profiles);
    s_partyChatUserList.profiles = NULL;
  }
  if ( s_partyChatUserList.xuidStrings )
  {
    s_partyChatUserList.xuidStrings->__abi_Release(s_partyChatUserList.xuidStrings);
    s_partyChatUserList.xuidStrings = NULL;
  }
  memset_0(s_partyChatUserList.cachedNames, 0, 0x980ui64);
  presence = s_partyChatUserList.presence;
  do
  {
    if ( presence->record )
    {
      presence->record->__abi_Release(presence->record);
      presence->record = NULL;
    }
    ++presence;
  }
  while ( (__int64)presence < (__int64)&s_partyChatUserList.xuidStrings );
  s_pendingInvites.count = 0;
  s_pendingInvites.memberIndexes[0] = -1;
}

/*
==============
ClearPendingInvites
==============
*/
void ClearPendingInvites(void)
{
  s_pendingInvites.count = 0;
  s_pendingInvites.memberIndexes[0] = -1;
}

/*
==============
GetPartyChatInfo
==============
*/
void GetPartyChatInfo(const int controllerIndex)
{
  overlappedTask *OpenTaskSlot; 
  int ActivationFactoryByPCWSTR; 
  int v4; 
  __int64 v5; 
  Windows::Foundation::IAsyncOperation<Windows::Xbox::Multiplayer::PartyChatView _> *v6; 
  Concurrency::task_options *v7; 
  Concurrency::task<void> *v8; 
  volatile signed __int32 *overTask; 
  std::_Ref_count_base *Rep; 
  Platform::Guid pGuid; 
  int v12; 
  overlappedTask *v13; 
  __int64 v14; 
  Windows::Foundation::IAsyncOperation<Windows::Xbox::Multiplayer::PartyChatView _> *v15; 
  GetPartyChatInfo::__l2::<lambda_cd073e794748f076df5ccee25ce4ae51> _Func; 
  Concurrency::task<Windows::Xbox::Multiplayer::PartyChatView _> v17; 
  Concurrency::task_options v18; 
  Windows::Foundation::IAsyncOperation<Windows::Xbox::Multiplayer::PartyChatView _> *v19; 
  void *ppActivationFactory; 
  __int64 v21; 

  v14 = -2i64;
  if ( !TaskManager_TaskIsInProgressForController(&tasks, 0, controllerIndex) )
  {
    OpenTaskSlot = TaskManager_GetOpenTaskSlot(&tasks, controllerIndex, 0);
    OpenTaskSlot->active = 1;
    OpenTaskSlot->u.rest_results = TASK_NOTCOMPLETE;
    pGuid.__vftable = (Platform::Object_vtbl *)0x42A299F3CC1BCF39i64;
    *(_DWORD *)&pGuid.__d = -1060260177;
    *(_DWORD *)&pGuid.__h = 1601513851;
    ppActivationFactory = NULL;
    ActivationFactoryByPCWSTR = __winRT::__getActivationFactoryByPCWSTR(L"Windows.Xbox.Multiplayer.PartyChat", &pGuid, &ppActivationFactory);
    if ( ActivationFactoryByPCWSTR < 0 )
      __abi_WinRTraiseException(ActivationFactoryByPCWSTR);
    v19 = NULL;
    v4 = (*(__int64 (__fastcall **)(void *, Windows::Foundation::IAsyncOperation<Windows::Xbox::Multiplayer::PartyChatView _> **))(*(_QWORD *)ppActivationFactory + 48i64))(ppActivationFactory, &v19);
    if ( v4 < 0 )
      __abi_WinRTraiseException(v4);
    v5 = (__int64)v19;
    v6 = v19;
    if ( v19 )
    {
      v19->__abi_AddRef(v19);
      v5 = (__int64)v19;
    }
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16i64))(v5);
    v21 = 0i64;
    if ( ppActivationFactory )
      (*(void (__fastcall **)(void *))(*(_QWORD *)ppActivationFactory + 16i64))(ppActivationFactory);
    v15 = v6;
    v21 = 0i64;
    Concurrency::task_options::task_options(&v18);
    v8 = (Concurrency::task<void> *)Concurrency::create_task<Windows::Foundation::IAsyncOperation<Windows::Xbox::Multiplayer::PartyChatView __gc *> __gc *>(&v17, v6, v7);
    v12 = controllerIndex;
    v13 = OpenTaskSlot;
    Concurrency::task_Windows::Xbox::Multiplayer::PartyChatView___::then__lambda_cd073e794748f076df5ccee25ce4ae51___(v8, &_Func);
    overTask = (volatile signed __int32 *)_Func.overTask;
    if ( _Func.overTask )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&_Func.overTask->u, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))overTask)(overTask);
        if ( _InterlockedExchangeAdd(overTask + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)overTask + 8i64))(overTask);
      }
    }
    Rep = v17._M_Impl._Rep;
    if ( v17._M_Impl._Rep )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v17._M_Impl._Rep->_Uses, 0xFFFFFFFF) == 1 )
      {
        Rep->_Destroy(Rep);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&Rep->_Weaks, 0xFFFFFFFF) == 1 )
          Rep->_Delete_this(Rep);
      }
    }
    if ( v6 )
      v6->__abi_Release(v6);
  }
}

/*
==============
GetTitleRecord
==============
*/
Microsoft::Xbox::Services::Presence::PresenceTitleRecord *GetTitleRecord(Microsoft::Xbox::Services::Presence::PresenceRecord *record)
{
  int v1; 
  __int64 v2; 
  __int64 v3; 
  __int64 v4; 
  __int64 v5; 
  unsigned int v6; 
  int v7; 
  int v8; 
  __int64 v9; 
  __int64 v10; 
  int v11; 
  int v12; 
  __int64 v13; 
  unsigned int i; 
  int v15; 
  int v16; 
  __int64 v17; 
  __int64 v18; 
  int v19; 
  __int64 v21; 
  unsigned int v22; 
  __int64 v23; 
  __int64 v24; 

  if ( record )
  {
    v23 = 0i64;
    v1 = record->__abi_get_PresenceDeviceRecords(record, (Windows::Foundation::Collections::IVectorView<Microsoft::Xbox::Services::Presence::PresenceDeviceRecord _> **)&v23);
    if ( v1 < 0 )
      __abi_WinRTraiseException(v1);
    v2 = v23;
    v3 = v23;
    if ( v23 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 8i64))(v23);
      v2 = v23;
    }
    if ( v2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16i64))(v2);
    v21 = 0i64;
    v4 = 0i64;
    v5 = 0i64;
    v6 = 0;
    v7 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v3 + 56i64))(v3, &v22);
    if ( v7 < 0 )
LABEL_50:
      __abi_WinRTraiseException(v7);
    while ( v6 < v22 )
    {
      v24 = 0i64;
      v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v3 + 48i64))(v3, v6, &v24);
      if ( v8 < 0 )
        __abi_WinRTraiseException(v8);
      v9 = v24;
      v10 = v24;
      if ( v24 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 8i64))(v24);
        v9 = v24;
      }
      if ( v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16i64))(v9);
      v21 = v10;
      if ( v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8i64))(v10);
      if ( v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16i64))(v10);
      LODWORD(v21) = 0;
      v11 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v10 + 48i64))(v10, &v21);
      if ( v11 < 0 )
        __abi_WinRTraiseException(v11);
      if ( (_DWORD)v21 == g_applicationDeviceType )
      {
        v21 = 0i64;
        v12 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v10 + 56i64))(v10, &v21);
        if ( v12 < 0 )
          __abi_WinRTraiseException(v12);
        v13 = v21;
        v4 = v21;
        if ( v21 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 8i64))(v21);
          v13 = v21;
        }
        if ( v13 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16i64))(v13);
        v21 = 0i64;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16i64))(v10);
        if ( v4 )
        {
          for ( i = 0; ; ++i )
          {
            v15 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v4 + 56i64))(v4, &v21);
            if ( v15 < 0 )
              __abi_WinRTraiseException(v15);
            if ( i >= (unsigned int)v21 )
              break;
            v24 = 0i64;
            v16 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v4 + 48i64))(v4, i, &v24);
            if ( v16 < 0 )
              __abi_WinRTraiseException(v16);
            v17 = v24;
            v18 = v24;
            if ( v24 )
            {
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 8i64))(v24);
              v17 = v24;
            }
            if ( v17 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16i64))(v17);
            v24 = v18;
            if ( v5 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16i64))(v5);
            v5 = v18;
            v24 = 0i64;
            if ( v18 )
            {
              v19 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v18 + 48i64))(v18, &v22);
              if ( v19 < 0 )
                __abi_WinRTraiseException(v19);
              if ( v22 == 609700427 )
              {
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8i64))(v18);
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16i64))(v18);
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16i64))(v4);
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16i64))(v3);
                return (Microsoft::Xbox::Services::Presence::PresenceTitleRecord *)v18;
              }
            }
          }
        }
        break;
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16i64))(v10);
      ++v6;
      v7 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v3 + 56i64))(v3, &v22);
      if ( v7 < 0 )
        goto LABEL_50;
    }
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16i64))(v5);
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16i64))(v4);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16i64))(v3);
  }
  return 0i64;
}

/*
==============
LiveParty_FeederOnShowCard_Platform
==============
*/
void LiveParty_FeederOnShowCard_Platform(const int controllerIndex, XUID memberXuid)
{
  int PositionByXuid; 
  int v6; 
  unsigned __int64 outPlatformId; 

  if ( (unsigned int)controllerIndex >= 8 )
  {
    v6 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_liveparty.cpp", 608, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v6) )
      __debugbreak();
  }
  PositionByXuid = LiveParty_GetPositionByXuid(memberXuid);
  if ( PositionByXuid >= 0 && XUID::GetPlatformIdFromXuid(s_partyChatUserList.xuids[PositionByXuid], &outPlatformId) )
    XShowGamerCardUI(controllerIndex, outPlatformId);
}

/*
==============
LiveParty_ForceSystemPartyPresenceRefresh
==============
*/
void LiveParty_ForceSystemPartyPresenceRefresh(void)
{
  s_forcePresenceUpdateCount += s_partyChatUserList.size;
}

/*
==============
LiveParty_Frame_Platform
==============
*/
void LiveParty_Frame_Platform(const int controllerIndex)
{
  taskCompleteResults *p_rest_results; 
  __int64 v3; 
  int v4; 
  const char *v5; 
  int v6; 
  Windows::Xbox::System::User *v7; 
  XUID *v8; 
  __int64 v9; 
  Windows::Xbox::System::User *UserFromControllerIndex; 
  Windows::Xbox::System::User *v11; 
  int v12; 
  LiveParty_PendingInvites *v13; 
  bool v14; 
  __int64 v15; 
  Windows::Xbox::System::User *v16; 
  Windows::Xbox::System::User *v17; 
  XUID xuids[32]; 

  p_rest_results = &tasks.tasks[0].u.rest_results;
  do
  {
    if ( !*((_BYTE *)p_rest_results + 12) )
      goto LABEL_16;
    v3 = *((unsigned int *)p_rest_results + 2);
    if ( (_DWORD)v3 )
    {
      if ( (_DWORD)v3 == 1 )
      {
        v5 = "Error getting chat party profiles.\n";
      }
      else
      {
        if ( (_DWORD)v3 != 2 )
        {
          v4 = 2;
          v5 = j_va("Unknown session task type %i\n", v3);
          SLODWORD(v15) = p_rest_results[2];
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_liveparty.cpp", 343, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unknown session task type %i\n", v15) )
            __debugbreak();
          goto LABEL_12;
        }
        v5 = "Error getting presence for chat party member.\n";
      }
    }
    else
    {
      v5 = "Error getting chat party info.\n";
    }
    v4 = *p_rest_results;
LABEL_12:
    if ( v4 )
    {
      if ( v4 != 1 )
        Com_PrintError(16, v5);
      TaskManager_ClearTask((overlappedTask *)(p_rest_results - 4));
    }
LABEL_16:
    p_rest_results += 10;
  }
  while ( (__int64)p_rest_results < (__int64)&s_partyChatUserList.partyChatView );
  if ( Live_IsUserSignedInToLive(controllerIndex) )
  {
    v6 = Sys_Milliseconds();
    CheckForPendingPartyUpdate(controllerIndex);
    CheckForPendingProfileUpdate(controllerIndex);
    if ( s_pendingInvites.count )
    {
      if ( Live_GetCurrentParty() )
      {
        v7 = NULL;
        v16 = NULL;
        v8 = xuids;
        v9 = 32i64;
        do
        {
          XUID::XUID(v8++);
          --v9;
        }
        while ( v9 );
        UserFromControllerIndex = GetUserFromControllerIndex(controllerIndex);
        v11 = UserFromControllerIndex;
        v17 = UserFromControllerIndex;
        if ( UserFromControllerIndex )
        {
          UserFromControllerIndex->__abi_AddRef(UserFromControllerIndex);
          v7 = v11;
          v16 = v11;
        }
        if ( v11 )
          v11->__abi_Release(v11);
        if ( v7 )
        {
          if ( s_pendingInvites.count <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_liveparty.cpp", 295, ASSERT_TYPE_ASSERT, "(s_pendingInvites.count > 0)", (const char *)&queryFormat, "s_pendingInvites.count > 0", v16, -2i64, v17) )
            __debugbreak();
          v12 = 0;
          if ( s_pendingInvites.count > 0 )
          {
            v13 = &s_pendingInvites;
            do
            {
              XUID::operator=(&xuids[v12++], &s_partyChatUserList.xuids[v13->memberIndexes[0]]);
              v13 = (LiveParty_PendingInvites *)((char *)v13 + 4);
            }
            while ( v12 < s_pendingInvites.count );
          }
          LiveParty_InviteToSession(controllerIndex, 0, xuids, v12);
          s_pendingInvites.count = 0;
          s_pendingInvites.memberIndexes[0] = -1;
          v7->__abi_Release(v7);
        }
        else
        {
          Com_Printf(16, "RegisterGame: Failed to find user index for controllerIndex(%i).\n", (unsigned int)controllerIndex);
        }
      }
      else
      {
        Com_Printf(16, "There are chat party invites pending but current party is null. Clearing pending invities.\n");
        s_pendingInvites.count = 0;
        s_pendingInvites.memberIndexes[0] = -1;
      }
    }
    if ( s_refreshPlatformParty )
    {
      if ( Com_FrontEnd_IsInFrontEnd() )
        v14 = v6 - s_platformPartyLastRefreshTimer <= xb3_liveparty_minimum_platform_party_refresh_delay->current.integer;
      else
        v14 = v6 - s_platformPartyLastRefreshTimer <= xb3_liveparty_minimum_platform_party_refresh_in_game_delay->current.integer;
      if ( !v14 )
      {
        CheckForPresenceUpdate(controllerIndex);
        GetPartyChatInfo(controllerIndex);
        s_refreshPlatformParty = 0;
        s_platformPartyLastRefreshTimer = v6;
      }
    }
  }
}

/*
==============
LiveParty_GetCount
==============
*/
__int64 LiveParty_GetCount()
{
  __int64 result; 

  if ( !s_partyChatUserList.partyChatView )
    return 0i64;
  result = s_partyChatUserList.size;
  if ( (int)s_partyChatUserList.size > 32 )
    return 32i64;
  return result;
}

/*
==============
LiveParty_GetGamerTag
==============
*/
char *LiveParty_GetGamerTag(const XUID xuid)
{
  HSTRING v1; 
  int v2; 
  Windows::Foundation::Collections::IVectorView<Microsoft::Xbox::Services::Social::XboxUserProfile _> *profiles; 
  char *v5; 
  int v6; 
  __int64 v7; 
  __int64 v8; 
  int v9; 
  HSTRING v10; 
  int v11; 
  XUID xuida; 
  __int64 v13; 
  HSTRING string; 
  HSTRING newString; 

  xuida.m_id = xuid.m_id;
  if ( !s_partyChatUserList.profiles )
    return (char *)&queryFormat.fmt + 3;
  v1 = NULL;
  v2 = 0;
  if ( !s_partyChatUserList.size )
    return (char *)&queryFormat.fmt + 3;
  while ( !XUID::operator==(&s_partyChatUserList.xuids[v2], &xuida) )
  {
    if ( ++v2 >= s_partyChatUserList.size )
      return (char *)&queryFormat.fmt + 3;
  }
  profiles = s_partyChatUserList.profiles;
  if ( !s_partyChatUserList.profiles )
    return (char *)&queryFormat.fmt + 3;
  if ( v2 >= LiveParty_GetCount() )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_liveparty.cpp", 725, ASSERT_TYPE_ASSERT, "(memberIndex < LiveParty_GetCount())", (const char *)&queryFormat, "memberIndex < LiveParty_GetCount()", -2i64) )
      __debugbreak();
    profiles = s_partyChatUserList.profiles;
  }
  v5 = s_partyChatUserList.cachedNames[v2];
  if ( !*v5 )
  {
    v13 = 0i64;
    v6 = profiles->Platform::Object::__vftable[1].__abi_QueryInterface(profiles, (Platform::Guid *)(unsigned int)v2, (void **)&v13);
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
    string = NULL;
    v9 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v8 + 88i64))(v8, &string);
    if ( v9 < 0 )
      __abi_WinRTraiseException(v9);
    v10 = string;
    if ( string )
    {
      v11 = WindowsDuplicateString_0(string, &newString);
      if ( v11 < 0 )
        __abi_WinRTraiseException(v11);
      v1 = newString;
      v10 = string;
    }
    WindowsDeleteString_0(v10);
    ConvertStringGamertagToDisplayableBuffer((Platform::String *)v1, v5, 0x44ui64);
    WindowsDeleteString_0(v1);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16i64))(v8);
  }
  return v5;
}

/*
==============
LiveParty_GetGamerTagForMemberIndex
==============
*/
char *LiveParty_GetGamerTagForMemberIndex(int memberIndex)
{
  __int64 v1; 
  Windows::Foundation::Collections::IVectorView<Microsoft::Xbox::Services::Social::XboxUserProfile _> *profiles; 
  HSTRING v4; 
  int v5; 
  __int64 v6; 
  __int64 v7; 
  int v8; 
  HSTRING v9; 
  int v10; 
  __int64 v11; 
  HSTRING string; 
  HSTRING newString; 

  v1 = memberIndex;
  profiles = s_partyChatUserList.profiles;
  if ( !s_partyChatUserList.profiles )
    return (char *)&queryFormat.fmt + 3;
  if ( memberIndex >= LiveParty_GetCount() )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_liveparty.cpp", 725, ASSERT_TYPE_ASSERT, "(memberIndex < LiveParty_GetCount())", (const char *)&queryFormat, "memberIndex < LiveParty_GetCount()", -2i64) )
      __debugbreak();
    profiles = s_partyChatUserList.profiles;
  }
  if ( !s_partyChatUserList.cachedNames[v1][0] )
  {
    v4 = NULL;
    v11 = 0i64;
    v5 = profiles->Platform::Object::__vftable[1].__abi_QueryInterface(profiles, (Platform::Guid *)(unsigned int)v1, (void **)&v11);
    if ( v5 < 0 )
      __abi_WinRTraiseException(v5);
    v6 = v11;
    v7 = v11;
    if ( v11 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8i64))(v11);
      v6 = v11;
    }
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16i64))(v6);
    string = NULL;
    v8 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v7 + 88i64))(v7, &string);
    if ( v8 < 0 )
      __abi_WinRTraiseException(v8);
    v9 = string;
    if ( string )
    {
      v10 = WindowsDuplicateString_0(string, &newString);
      if ( v10 < 0 )
        __abi_WinRTraiseException(v10);
      v4 = newString;
      v9 = string;
    }
    WindowsDeleteString_0(v9);
    ConvertStringGamertagToDisplayableBuffer((Platform::String *)v4, s_partyChatUserList.cachedNames[v1], 0x44ui64);
    WindowsDeleteString_0(v4);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16i64))(v7);
  }
  return s_partyChatUserList.cachedNames[v1];
}

/*
==============
LiveParty_GetPlayerInfoForUI
==============
*/
UILivePartyMemberInfo *LiveParty_GetPlayerInfoForUI(UILivePartyMemberInfo *result, const int controllerIndex, const int memberIndex)
{
  __int64 v3; 
  unsigned __int64 m_id; 
  const char *PresenceForSlot; 
  const char *GamerTagForMemberIndex; 
  Online_Friends *Instance; 
  unsigned __int64 PlatformIdFromXuid; 
  __int64 v12; 
  int v13; 
  __int64 v14; 
  int v15; 

  v3 = memberIndex;
  memset_0(result, 0, sizeof(UILivePartyMemberInfo));
  if ( (unsigned int)v3 >= 0x20 )
  {
    v15 = 32;
    v13 = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_liveparty.cpp", 885, ASSERT_TYPE_ASSERT, "(unsigned)( memberIndex ) < (unsigned)( 32 )", "memberIndex doesn't index XPARTY_MAX_USERS\n\t%i not in [0, %i)", v13, v15) )
      __debugbreak();
  }
  if ( (int)v3 >= LiveParty_GetCount() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_liveparty.cpp", 886, ASSERT_TYPE_ASSERT, "(memberIndex < LiveParty_GetCount())", (const char *)&queryFormat, "memberIndex < LiveParty_GetCount()") )
    __debugbreak();
  if ( (unsigned int)v3 >= 0x20 )
  {
    LODWORD(v14) = 32;
    LODWORD(v12) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_liveparty.cpp", 757, ASSERT_TYPE_ASSERT, "(unsigned)( memberIndex ) < (unsigned)( 32 )", "memberIndex doesn't index XPARTY_MAX_USERS\n\t%i not in [0, %i)", v12, v14) )
      __debugbreak();
  }
  m_id = s_partyChatUserList.xuids[v3].m_id;
  PresenceForSlot = LiveParty_GetPresenceForSlot(controllerIndex, v3);
  Core_strcpy(result->presenceString, 0x80ui64, PresenceForSlot);
  GamerTagForMemberIndex = LiveParty_GetGamerTagForMemberIndex(v3);
  Core_strcpy(result->gamertag, 0x44ui64, GamerTagForMemberIndex);
  Instance = Online_Friends::GetInstance();
  PlatformIdFromXuid = XUID::GetPlatformIdFromXuid((const XUID)m_id);
  result->isJoinable = Online_Friends::DoesUserHaveValidLobbySession(Instance, controllerIndex, PlatformIdFromXuid);
  return result;
}

/*
==============
LiveParty_GetPresenceString
==============
*/
char LiveParty_GetPresenceString(const int memberIndex, char *presenceStr, int maxSize)
{
  unsigned __int64 v3; 
  __int64 v5; 
  char v6; 
  Microsoft::Xbox::Services::Presence::PresenceRecord *record; 
  Microsoft::Xbox::Services::Presence::PresenceTitleRecord *TitleRecord; 
  Microsoft::Xbox::Services::Presence::PresenceTitleRecord *v10; 
  unsigned __int64 returnStringSize; 
  const wchar_t *StringRawBuffer_0; 
  HSTRING v13; 
  int v14; 
  HSTRING v15; 
  int v16; 
  int v17; 
  bool v18; 
  int v19; 
  HSTRING string; 
  HSTRING newString; 
  HSTRING v22; 
  __int64 v23; 
  Microsoft::Xbox::Services::Presence::PresenceRecord *v24; 
  Microsoft::Xbox::Services::Presence::PresenceTitleRecord *v25; 
  int v26; 
  int v27; 

  v23 = -2i64;
  v3 = maxSize;
  v5 = memberIndex;
  v6 = 0;
  v27 = 0;
  if ( (unsigned int)memberIndex >= 0x20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_liveparty.cpp", 839, ASSERT_TYPE_ASSERT, "(unsigned)( memberIndex ) < (unsigned)( 32 )", "memberIndex doesn't index XPARTY_MAX_USERS\n\t%i not in [0, %i)", memberIndex, 32) )
    __debugbreak();
  record = s_partyChatUserList.presence[v5].record;
  if ( record )
    record->__abi_AddRef(record);
  v24 = record;
  if ( !record )
    return 0;
  TitleRecord = GetTitleRecord(record);
  v10 = TitleRecord;
  v25 = TitleRecord;
  string = NULL;
  returnStringSize = v3;
  if ( TitleRecord )
  {
    string = NULL;
    v14 = TitleRecord->__abi_get_Presence(TitleRecord, (Platform::String **)&string);
    if ( v14 < 0 )
      __abi_WinRTraiseException(v14);
    v15 = string;
    if ( string )
    {
      v16 = WindowsDuplicateString_0(string, &newString);
      if ( v16 < 0 )
        __abi_WinRTraiseException(v16);
      v13 = newString;
      v15 = string;
    }
    else
    {
      v13 = NULL;
    }
    WindowsDeleteString_0(v15);
    v22 = v13;
    v6 = 1;
    v27 = 1;
    StringRawBuffer_0 = WindowsGetStringRawBuffer_0(v13, NULL);
  }
  else
  {
    StringRawBuffer_0 = NULL;
    v13 = v22;
  }
  v26 = 0;
  v17 = record->__abi_get_UserState(record, (Microsoft::Xbox::Services::Presence::UserPresenceState *)&v26);
  if ( v17 < 0 )
    __abi_WinRTraiseException(v17);
  v18 = v26 == 1;
  v26 = 0;
  v19 = record->__abi_get_UserState(record, (Microsoft::Xbox::Services::Presence::UserPresenceState *)&v26);
  if ( v19 < 0 )
    __abi_WinRTraiseException(v19);
  Live_GetPresenceString(v26 == 2, v18, v10 != NULL, StringRawBuffer_0, presenceStr, returnStringSize);
  if ( (v6 & 1) != 0 )
    WindowsDeleteString_0(v13);
  if ( v10 )
    v10->__abi_Release(v10);
  record->__abi_Release(record);
  return 1;
}

/*
==============
LiveParty_GetXUID
==============
*/
XUID *LiveParty_GetXUID(XUID *result, const int memberIndex)
{
  __int64 v2; 
  int v6; 

  v2 = memberIndex;
  if ( (unsigned int)memberIndex >= 0x20 )
  {
    v6 = 32;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_liveparty.cpp", 757, ASSERT_TYPE_ASSERT, "(unsigned)( memberIndex ) < (unsigned)( 32 )", "memberIndex doesn't index XPARTY_MAX_USERS\n\t%i not in [0, %i)", memberIndex, v6) )
      __debugbreak();
  }
  result->m_id = (unsigned __int64)s_partyChatUserList.xuids[v2];
  return result;
}

/*
==============
LiveParty_Initialize_Platform
==============
*/
void LiveParty_Initialize_Platform(void)
{
  __int64 v0; 

  TaskManager_ConstructTaskSet(&tasks, "LiveParty_Initialize");
  Dvar_BeginPermanentRegistration();
  xb3_liveparty_minimum_platform_party_refresh_delay = Dvar_RegisterInt("MQPTTPRT", 5000, 0, 0x7FFFFFFF, 0, "Wait at least this time between refreshing the platform party status.");
  xb3_liveparty_minimum_platform_party_refresh_in_game_delay = Dvar_RegisterInt("RQTKLTSPO", 30000, 0, 0x7FFFFFFF, 0, "Wait at least this time between refreshing the platform party status while in game.");
  Dvar_EndPermanentRegistration();
  ResetAllPartyData(v0);
}

/*
==============
LiveParty_InviteAll
==============
*/
void LiveParty_InviteAll(const int controllerIndex)
{
  unsigned int i; 
  __int64 count; 
  XUID *Xuid; 
  __int64 v5; 
  __int64 v6; 
  __int64 v8; 
  int v9; 
  XUID result; 

  if ( (unsigned int)controllerIndex >= 8 )
  {
    v9 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_liveparty.cpp", 644, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v9) )
      __debugbreak();
  }
  for ( i = 0; (int)i < LiveParty_GetCount(); ++i )
  {
    if ( (unsigned int)controllerIndex >= 8 )
    {
      LODWORD(v8) = 8;
      LODWORD(v6) = controllerIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_liveparty.cpp", 620, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v6, v8) )
        __debugbreak();
    }
    if ( i >= 0x20 )
    {
      LODWORD(v8) = 32;
      LODWORD(v6) = i;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_liveparty.cpp", 621, ASSERT_TYPE_ASSERT, "(unsigned)( memberIndex ) < (unsigned)( 32 )", "memberIndex doesn't index XPARTY_MAX_USERS\n\t%i not in [0, %i)", v6, v8) )
        __debugbreak();
    }
    count = s_pendingInvites.count;
    if ( s_pendingInvites.count < 32 )
    {
      if ( i >= 0x20 )
      {
        LODWORD(v8) = 32;
        LODWORD(v6) = i;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_liveparty.cpp", 785, ASSERT_TYPE_ASSERT, "(unsigned)( memberIndex ) < (unsigned)( 32 )", "memberIndex doesn't index XPARTY_MAX_USERS\n\t%i not in [0, %i)", v6, v8) )
          __debugbreak();
      }
      if ( (unsigned int)controllerIndex >= 8 )
      {
        LODWORD(v8) = 8;
        LODWORD(v6) = controllerIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_liveparty.cpp", 786, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v6, v8) )
          __debugbreak();
      }
      Xuid = Live_GetXuid(&result, controllerIndex);
      if ( !XUID::operator==(Xuid, &s_partyChatUserList.xuids[i]) )
      {
        v5 = 0i64;
        if ( (int)count <= 0 )
        {
LABEL_22:
          s_pendingInvites.memberIndexes[count] = i;
          ++s_pendingInvites.count;
        }
        else
        {
          while ( s_pendingInvites.memberIndexes[v5] != i )
          {
            if ( ++v5 >= count )
              goto LABEL_22;
          }
        }
      }
    }
  }
}

/*
==============
LiveParty_InvitePartyMember_Platform
==============
*/
void LiveParty_InvitePartyMember_Platform(const int controllerIndex, const int memberIndex)
{
  __int64 v2; 
  __int64 count; 
  XUID *Xuid; 
  __int64 v6; 
  __int64 v7; 
  __int64 v9; 
  int v10; 
  XUID result; 

  v2 = memberIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v10 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_liveparty.cpp", 620, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v10) )
      __debugbreak();
  }
  if ( (unsigned int)v2 >= 0x20 )
  {
    LODWORD(v9) = 32;
    LODWORD(v7) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_liveparty.cpp", 621, ASSERT_TYPE_ASSERT, "(unsigned)( memberIndex ) < (unsigned)( 32 )", "memberIndex doesn't index XPARTY_MAX_USERS\n\t%i not in [0, %i)", v7, v9) )
      __debugbreak();
  }
  count = s_pendingInvites.count;
  if ( s_pendingInvites.count < 32 )
  {
    if ( (unsigned int)v2 >= 0x20 )
    {
      LODWORD(v9) = 32;
      LODWORD(v7) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_liveparty.cpp", 785, ASSERT_TYPE_ASSERT, "(unsigned)( memberIndex ) < (unsigned)( 32 )", "memberIndex doesn't index XPARTY_MAX_USERS\n\t%i not in [0, %i)", v7, v9) )
        __debugbreak();
    }
    if ( (unsigned int)controllerIndex >= 8 )
    {
      LODWORD(v9) = 8;
      LODWORD(v7) = controllerIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_liveparty.cpp", 786, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v7, v9) )
        __debugbreak();
    }
    Xuid = Live_GetXuid(&result, controllerIndex);
    if ( !XUID::operator==(Xuid, &s_partyChatUserList.xuids[v2]) )
    {
      if ( (int)count <= 0 )
      {
LABEL_19:
        s_pendingInvites.memberIndexes[count] = v2;
        ++s_pendingInvites.count;
      }
      else
      {
        v6 = 0i64;
        while ( s_pendingInvites.memberIndexes[v6] != (_DWORD)v2 )
        {
          if ( ++v6 >= count )
            goto LABEL_19;
        }
      }
    }
  }
}

/*
==============
LiveParty_InviteToSession
==============
*/
__int64 LiveParty_InviteToSession(const int controllerIndex, const bool queueForSessionInvite, const XUID *xuids, const int numInvites)
{
  __int64 v5; 
  const PartyData *ActiveParty; 
  wchar_t *v11; 
  unsigned __int64 v12; 
  std::wstring *Myfirst; 
  unsigned __int64 v15; 
  wchar_t *Ptr; 
  char *Myres; 
  unsigned __int64 v18; 
  std::vector<std::wstring> usersToInvite; 
  unsigned __int64 outPlatformId[2]; 
  std::wstring _Right; 
  std::wstring v23; 
  char v24[6]; 

  outPlatformId[1] = -2i64;
  v5 = (unsigned int)numInvites;
  if ( (unsigned int)controllerIndex >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_liveparty.cpp", 669, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, 8) )
    __debugbreak();
  if ( !xuids && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_liveparty.cpp", 670, ASSERT_TYPE_ASSERT, "(xuids)", (const char *)&queryFormat, "xuids") )
    __debugbreak();
  if ( (int)v5 >= 32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_liveparty.cpp", 671, ASSERT_TYPE_ASSERT, "(numInvites < 32)", (const char *)&queryFormat, "numInvites < XPARTY_MAX_USERS") )
    __debugbreak();
  ActiveParty = Party_GetActiveParty();
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rbp+57h+usersToInvite.baseclass_0._Mypair._Myval2._Myfirst], xmm0
  }
  usersToInvite._Mypair._Myval2._Myend = NULL;
  __asm
  {
    vmovdqu xmm0, cs:__xmm@00000000000000070000000000000000
    vmovdqu xmmword ptr [rbp+57h+_Right.baseclass_0._Mypair._Myval2._Mysize], xmm0
  }
  _Right._Mypair._Myval2._Bx._Buf[0] = 0;
  if ( (int)v5 > 0 )
  {
    do
    {
      if ( Party_FindMemberByXUID_AllowNotPresent(ActiveParty, (const XUID)xuids->m_id) == -1 && XUID::GetPlatformIdFromXuid((const XUID)xuids->m_id, outPlatformId) )
      {
        v11 = (wchar_t *)v24;
        v12 = outPlatformId[0];
        do
        {
          *--v11 = v12 % 0xA + 48;
          v12 /= 0xAui64;
        }
        while ( v12 );
        v23._Mypair._Myval2._Mysize = 0i64;
        v23._Mypair._Myval2._Myres = 7i64;
        v23._Mypair._Myval2._Bx._Buf[0] = 0;
        if ( v11 != (wchar_t *)v24 )
          std::wstring::assign(&v23, v11, (v24 - (char *)v11) >> 1);
        std::wstring::_Tidy_deallocate(&_Right);
        __asm
        {
          vmovups ymm0, ymmword ptr [rbp+57h+var_78.baseclass_0._Mypair._Myval2._Bx]
          vmovups ymmword ptr [rbp+57h+_Right.baseclass_0._Mypair._Myval2._Bx], ymm0
        }
        if ( usersToInvite._Mypair._Myval2._Myend == usersToInvite._Mypair._Myval2._Mylast )
          std::vector<std::wstring>::_Emplace_reallocate<std::wstring const &>(&usersToInvite, usersToInvite._Mypair._Myval2._Mylast, &_Right);
        else
          std::wstring::wstring(usersToInvite._Mypair._Myval2._Mylast++, &_Right);
      }
      ++xuids;
      --v5;
    }
    while ( v5 );
  }
  Myfirst = usersToInvite._Mypair._Myval2._Myfirst;
  if ( usersToInvite._Mypair._Myval2._Mylast - usersToInvite._Mypair._Myval2._Myfirst )
  {
    Xb3MultiplayerManager::InviteUsers(&Xb3MultiplayerManager::ms_xb3MultiplayerManager, controllerIndex, &usersToInvite);
    Myfirst = usersToInvite._Mypair._Myval2._Myfirst;
  }
  if ( _Right._Mypair._Myval2._Myres >= 8 )
  {
    v15 = 2 * _Right._Mypair._Myval2._Myres + 2;
    Ptr = _Right._Mypair._Myval2._Bx._Ptr;
    if ( v15 >= 0x1000 )
    {
      v15 = 2 * _Right._Mypair._Myval2._Myres + 41;
      Ptr = (wchar_t *)*((_QWORD *)_Right._Mypair._Myval2._Bx._Ptr - 1);
      if ( (unsigned __int64)((char *)_Right._Mypair._Myval2._Bx._Ptr - (char *)Ptr - 8) > 0x1F )
        _invalid_parameter_noinfo_noreturn();
    }
    operator delete(Ptr, v15);
    Myfirst = usersToInvite._Mypair._Myval2._Myfirst;
  }
  if ( Myfirst )
  {
    std::_Destroy_range<std::allocator<std::wstring>>(Myfirst, usersToInvite._Mypair._Myval2._Mylast, (std::allocator<std::wstring > *)&usersToInvite);
    Myres = (char *)usersToInvite._Mypair._Myval2._Myfirst;
    v18 = ((char *)usersToInvite._Mypair._Myval2._Myend - (char *)usersToInvite._Mypair._Myval2._Myfirst) & 0xFFFFFFFFFFFFFFE0ui64;
    if ( v18 >= 0x1000 )
    {
      v18 += 39i64;
      Myres = (char *)usersToInvite._Mypair._Myval2._Myfirst[-1]._Mypair._Myval2._Myres;
      if ( (unsigned __int64)((char *)usersToInvite._Mypair._Myval2._Myfirst - Myres - 8) > 0x1F )
        _invalid_parameter_noinfo_noreturn();
    }
    operator delete(Myres, v18);
  }
  return 0i64;
}

/*
==============
LiveParty_IsInThisTitle
==============
*/
_BOOL8 LiveParty_IsInThisTitle(const int memberIndex)
{
  __int64 v1; 
  Microsoft::Xbox::Services::Presence::PresenceTitleRecord *TitleRecord; 
  bool v3; 
  int v6; 

  v1 = memberIndex;
  if ( (unsigned int)memberIndex >= 0x20 )
  {
    v6 = 32;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_liveparty.cpp", 859, ASSERT_TYPE_ASSERT, "(unsigned)( memberIndex ) < (unsigned)( 32 )", "memberIndex doesn't index XPARTY_MAX_USERS\n\t%i not in [0, %i)", memberIndex, v6) )
      __debugbreak();
  }
  TitleRecord = GetTitleRecord(s_partyChatUserList.presence[v1].record);
  v3 = TitleRecord != NULL;
  if ( TitleRecord )
    TitleRecord->__abi_Release(TitleRecord);
  return v3;
}

/*
==============
LiveParty_IsLocalControllerIndex
==============
*/
bool LiveParty_IsLocalControllerIndex(const int memberIndex, const int controllerIndex)
{
  __int64 v2; 
  XUID *Xuid; 
  __int64 v6; 
  __int64 v8; 
  int v9; 
  XUID result; 

  v2 = memberIndex;
  if ( (unsigned int)memberIndex >= 0x20 )
  {
    v9 = 32;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_liveparty.cpp", 785, ASSERT_TYPE_ASSERT, "(unsigned)( memberIndex ) < (unsigned)( 32 )", "memberIndex doesn't index XPARTY_MAX_USERS\n\t%i not in [0, %i)", memberIndex, v9) )
      __debugbreak();
  }
  if ( (unsigned int)controllerIndex >= 8 )
  {
    LODWORD(v8) = 8;
    LODWORD(v6) = controllerIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_liveparty.cpp", 786, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v6, v8) )
      __debugbreak();
  }
  Xuid = Live_GetXuid(&result, controllerIndex);
  return XUID::operator==(Xuid, &s_partyChatUserList.xuids[v2]);
}

/*
==============
LiveParty_IsLocalPlayer
==============
*/
char LiveParty_IsLocalPlayer(const int memberIndex)
{
  unsigned int size; 
  Windows::Foundation::Collections::IVectorView<Windows::Xbox::Multiplayer::PartyChatMember _> *v3; 
  int v4; 
  __int64 v5; 
  __int64 v6; 
  int v7; 
  int v10; 
  char v11; 
  __int64 v12; 
  Windows::Foundation::Collections::IVectorView<Windows::Xbox::Multiplayer::PartyChatMember _> *v13; 
  __int64 v14; 

  if ( (unsigned int)memberIndex >= 0x20 )
  {
    v10 = 32;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_liveparty.cpp", 772, ASSERT_TYPE_ASSERT, "(unsigned)( memberIndex ) < (unsigned)( 32 )", "memberIndex doesn't index XPARTY_MAX_USERS\n\t%i not in [0, %i)", memberIndex, v10) )
      __debugbreak();
  }
  if ( !s_partyChatUserList.partyChatView )
    return 0;
  size = s_partyChatUserList.size;
  if ( (int)s_partyChatUserList.size > 32 )
    size = 32;
  if ( !size )
    return 0;
  v3 = Windows::Xbox::Multiplayer::IPartyChatView::Members::get(s_partyChatUserList.partyChatView);
  v13 = v3;
  v12 = 0i64;
  v4 = v3->Platform::Object::__vftable[1].__abi_QueryInterface(v3, (Platform::Guid *)(unsigned int)memberIndex, (void **)&v12);
  if ( v4 < 0 )
    __abi_WinRTraiseException(v4);
  v5 = v12;
  v6 = v12;
  if ( v12 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8i64))(v12);
    v5 = v12;
  }
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16i64))(v5);
  v14 = v6;
  v7 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v6 + 56i64))(v6, &v11);
  if ( v7 < 0 )
    __abi_WinRTraiseException(v7);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16i64))(v6);
  v3->__abi_Release(v3);
  return v11;
}

/*
==============
LiveParty_JoinOnPartyMember_XB3
==============
*/
void LiveParty_JoinOnPartyMember_XB3(const int controllerIndex, const int memberIndex)
{
  __int64 v2; 
  int v5; 

  v2 = memberIndex;
  if ( (unsigned int)memberIndex >= 0x20 )
  {
    v5 = 32;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_liveparty.cpp", 757, ASSERT_TYPE_ASSERT, "(unsigned)( memberIndex ) < (unsigned)( 32 )", "memberIndex doesn't index XPARTY_MAX_USERS\n\t%i not in [0, %i)", memberIndex, v5) )
      __debugbreak();
  }
  InviteJoinHSM_xb3::StartJoiningUser(&g_invitationHSM, controllerIndex, s_partyChatUserList.xuids[v2], 0i64);
}

/*
==============
LiveParty_OpenUI
==============
*/
void LiveParty_OpenUI(const int controllerIndex)
{
  __int64 v2; 
  Windows::Xbox::System::User *UserFromControllerIndex; 
  __int64 v4; 
  int ActivationFactoryByPCWSTR; 
  int v6; 
  __int64 v7; 
  __int64 v8; 
  Platform::Guid pGuid; 
  Windows::Xbox::System::User *v10; 
  void *ppActivationFactory; 
  __int64 v12; 

  if ( !Live_IsUserSignedIn(controllerIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_liveparty.cpp", 657, ASSERT_TYPE_ASSERT, "(Live_IsUserSignedIn( controllerIndex ))", (const char *)&queryFormat, "Live_IsUserSignedIn( controllerIndex )") )
    __debugbreak();
  v2 = 0i64;
  v12 = 0i64;
  UserFromControllerIndex = GetUserFromControllerIndex(controllerIndex);
  v4 = (__int64)UserFromControllerIndex;
  v10 = UserFromControllerIndex;
  if ( UserFromControllerIndex )
  {
    UserFromControllerIndex->__abi_AddRef(UserFromControllerIndex);
    v2 = v4;
    v12 = v4;
  }
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16i64))(v4);
  pGuid.__vftable = (Platform::Object_vtbl *)0x4CFA3F9D1A0DD80Ei64;
  *(_DWORD *)&pGuid.__d = 772690062;
  *(_DWORD *)&pGuid.__h = 799480509;
  ppActivationFactory = NULL;
  ActivationFactoryByPCWSTR = __winRT::__getActivationFactoryByPCWSTR(L"Windows.Xbox.UI.SystemUI", &pGuid, &ppActivationFactory);
  if ( ActivationFactoryByPCWSTR < 0 )
    __abi_WinRTraiseException(ActivationFactoryByPCWSTR);
  v10 = NULL;
  v6 = (*(__int64 (__fastcall **)(void *, __int64, Windows::Xbox::System::User **))(*(_QWORD *)ppActivationFactory + 96i64))(ppActivationFactory, v2, &v10);
  if ( v6 < 0 )
    __abi_WinRTraiseException(v6);
  v7 = (__int64)v10;
  v8 = (__int64)v10;
  if ( v10 )
  {
    v10->__abi_AddRef(v10);
    v7 = (__int64)v10;
  }
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16i64))(v7);
  if ( ppActivationFactory )
    (*(void (__fastcall **)(void *))(*(_QWORD *)ppActivationFactory + 16i64))(ppActivationFactory);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16i64))(v8);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16i64))(v2);
}

/*
==============
LiveParty_Update_Platform
==============
*/
void LiveParty_Update_Platform(void)
{
  s_refreshPlatformParty = 1;
}

/*
==============
ResetAllPartyData
==============
*/
void ResetAllPartyData()
{
  if ( s_partyChatUserList.pendingPartyView )
  {
    s_partyChatUserList.pendingPartyView->__abi_Release(s_partyChatUserList.pendingPartyView);
    s_partyChatUserList.pendingPartyView = NULL;
  }
  if ( s_partyChatUserList.partyChatView )
  {
    s_partyChatUserList.partyChatView->__abi_Release(s_partyChatUserList.partyChatView);
    s_partyChatUserList.partyChatView = NULL;
  }
  s_partyChatUserList.size = 0;
  s_pendingProfileUpdate = 0;
  s_nextPresenceUpdateIndex = 0;
  s_nextPresenceUpdateTime = 0;
  s_forcePresenceUpdateCount = 0;
  if ( s_currentPartySessionName )
  {
    WindowsDeleteString_0(s_currentPartySessionName);
    s_currentPartySessionName = NULL;
  }
  s_profileRetryCount = 0;
  s_pendingProfileRetryTime = 0;
  ClearMemberInfo();
}

