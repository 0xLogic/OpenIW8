/*
==============
XB3_Privacy_CheckForStaleData
==============
*/

void XB3_Privacy_CheckForStaleData(void)
{
  ?XB3_Privacy_CheckForStaleData@@YAXXZ();
}

/*
==============
XB3_Privacy_CanCommunicateWithCrossplayUser
==============
*/

bool __fastcall XB3_Privacy_CanCommunicateWithCrossplayUser(const int controllerIndex, const XUID xuid)
{
  return ?XB3_Privacy_CanCommunicateWithCrossplayUser@@YA_NHUXUID@@@Z(controllerIndex, xuid);
}

/*
==============
XB3_Privacy_BeginFetchMuteList
==============
*/

void __fastcall XB3_Privacy_BeginFetchMuteList(const int controllerIndex)
{
  ?XB3_Privacy_BeginFetchMuteList@@YAXH@Z(controllerIndex);
}

/*
==============
XB3_Privacy_Frame
==============
*/

void XB3_Privacy_Frame(void)
{
  ?XB3_Privacy_Frame@@YAXXZ();
}

/*
==============
XB3_Privacy_CanCommunicateWithCrossplayUsers
==============
*/

bool __fastcall XB3_Privacy_CanCommunicateWithCrossplayUsers(const int controllerIndex)
{
  return ?XB3_Privacy_CanCommunicateWithCrossplayUsers@@YA_NH@Z(controllerIndex);
}

/*
==============
XB3_Privacy_CanCommunicateWithCrossplayFriends
==============
*/

bool __fastcall XB3_Privacy_CanCommunicateWithCrossplayFriends(const int controllerIndex)
{
  return ?XB3_Privacy_CanCommunicateWithCrossplayFriends@@YA_NH@Z(controllerIndex);
}

/*
==============
XB3_Privacy_Init
==============
*/

void XB3_Privacy_Init(void)
{
  ?XB3_Privacy_Init@@YAXXZ();
}

/*
==============
XB3_Privacy_RefetchAllPrivacy
==============
*/

void __fastcall XB3_Privacy_RefetchAllPrivacy(const int controllerIndex)
{
  ?XB3_Privacy_RefetchAllPrivacy@@YAXH@Z(controllerIndex);
}

/*
==============
XB3_Privacy_GetPrivacySettingsForUser
==============
*/

bool __fastcall XB3_Privacy_GetPrivacySettingsForUser(const int controllerIndex, const unsigned __int64 targetUserId, const XB3PrivacyPermissionId targetPermissionId)
{
  return ?XB3_Privacy_GetPrivacySettingsForUser@@YA_NH_KW4XB3PrivacyPermissionId@@@Z(controllerIndex, targetUserId, targetPermissionId);
}

/*
==============
XB3_Privacy_AddUserToCache
==============
*/
char XB3_Privacy_AddUserToCache(const int controllerIndex, const unsigned __int64 userId)
{
  unsigned int v2; 
  __int64 v3; 
  int v4; 
  int v6; 
  int v7; 
  int v8; 
  int v9; 
  __int64 v10; 
  __int64 v11; 
  XB3PrivacyUpdateState *updateState; 
  unsigned int v13; 
  __int64 v14; 
  int v15; 
  __int64 v17; 
  int v18; 
  __int64 v19; 
  int v20; 

  v2 = 0;
  v3 = controllerIndex;
  v4 = -1;
  v6 = -1;
  if ( (unsigned int)s_nextAvailableSlotInCache >= 0x100 )
  {
    v20 = 256;
    v18 = s_nextAvailableSlotInCache;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_privacy.cpp", 766, ASSERT_TYPE_ASSERT, "(unsigned)( XB3_Privacy_GetCurrentHeadIndex() ) < (unsigned)( 256 )", "XB3_Privacy_GetCurrentHeadIndex() doesn't index NUM_USERS_IN_PRIVACY_CACHE\n\t%i not in [0, %i)", v18, v20) )
      __debugbreak();
  }
  v7 = Sys_Milliseconds();
  v8 = s_nextAvailableSlotInCache;
  v9 = 0;
  while ( 1 )
  {
    v10 = v8;
    if ( !s_privacyDetails[v10].userId )
      break;
    if ( v7 - s_privacyDetails[v10].lastQueriedTime > v2 )
    {
      v11 = 0i64;
      updateState = s_privacyDetails[v10].updateState;
      while ( *updateState != PRIVACY_UPDATE_STATE_UPDATING )
      {
        ++v11;
        ++updateState;
        if ( v11 >= 8 )
        {
          v2 = v7 - s_privacyDetails[v10].lastQueriedTime;
          v6 = v8;
          break;
        }
      }
    }
    v8 = (v8 + 1) % 256;
    s_nextAvailableSlotInCache = v8;
    if ( (unsigned int)v8 >= 0x100 )
    {
      LODWORD(v19) = 256;
      LODWORD(v17) = v8;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_privacy.cpp", 726, ASSERT_TYPE_ASSERT, "(unsigned)( s_nextAvailableSlotInCache ) < (unsigned)( 256 )", "s_nextAvailableSlotInCache doesn't index NUM_USERS_IN_PRIVACY_CACHE\n\t%i not in [0, %i)", v17, v19) )
        __debugbreak();
      v8 = s_nextAvailableSlotInCache;
    }
    if ( ++v9 >= 256 )
      goto LABEL_20;
  }
  v4 = v8;
  v13 = (v8 + 1) % 256;
  s_nextAvailableSlotInCache = v13;
  if ( v13 >= 0x100 )
  {
    LODWORD(v19) = 256;
    LODWORD(v17) = v13;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_privacy.cpp", 726, ASSERT_TYPE_ASSERT, "(unsigned)( s_nextAvailableSlotInCache ) < (unsigned)( 256 )", "s_nextAvailableSlotInCache doesn't index NUM_USERS_IN_PRIVACY_CACHE\n\t%i not in [0, %i)", v17, v19) )
      __debugbreak();
  }
LABEL_20:
  if ( v4 != -1 )
    v6 = v4;
  if ( v6 < 0 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_privacy.cpp", 831, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "No free slot found in the privacy settings cache\n") )
      __debugbreak();
    return 0;
  }
  else
  {
    Sys_Milliseconds();
    XB3_Privacy_ResetUserDataAtIndex(v6);
    v14 = v6;
    s_privacyDetails[v14].userId = userId;
    s_privacyDetails[v14].lastQueriedTime = v15;
    s_privacyDetails[v6].updateState[v3] = PRIVACY_UPDATE_STATE_PENDING;
    Com_Printf(25, "Adding xuid: %llu at slot %d\n", userId, (unsigned int)v6);
    return 1;
  }
}

/*
==============
XB3_Privacy_BeginFetchMuteList
==============
*/
void XB3_Privacy_BeginFetchMuteList(const int controllerIndex)
{
  __int64 v1; 
  const dvar_t *v2; 
  __int64 v3; 
  int Int_Internal_DebugName; 
  int v6; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v6 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_privacy.cpp", 873, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v6) )
      __debugbreak();
  }
  v2 = DVARINT_xb3_mutelist_fetch_delay;
  v3 = v1;
  s_muteListFetchData[v1].shouldFetchMuteList = 1;
  Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(v2, "xb3_mutelist_fetch_delay");
  s_muteListFetchData[v3].nextMuteFetchTime = Sys_Milliseconds() + Int_Internal_DebugName;
}

/*
==============
XB3_Privacy_CanCommunicateWithCrossplayFriends
==============
*/
bool XB3_Privacy_CanCommunicateWithCrossplayFriends(const int controllerIndex)
{
  __int64 v1; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_privacy.cpp", 941, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, 8) )
    __debugbreak();
  return (_DWORD)v1 != -1 && s_crossplayPrivacy.crossPlatformFriend.privacySettings[v1][2];
}

/*
==============
XB3_Privacy_CanCommunicateWithCrossplayUser
==============
*/
bool XB3_Privacy_CanCommunicateWithCrossplayUser(const int controllerIndex, const XUID xuid)
{
  __int64 v2; 
  Online_Friends *Instance; 
  int Index; 
  bool *v6; 
  XUID friendId; 

  friendId.m_id = xuid.m_id;
  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_privacy.cpp", 903, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, 8) )
    __debugbreak();
  if ( !XUID::IsValid(&friendId) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_privacy.cpp", 904, ASSERT_TYPE_ASSERT, "(xuid.IsValid())", (const char *)&queryFormat, "xuid.IsValid()") )
    __debugbreak();
  if ( (_DWORD)v2 == -1 )
    return 0;
  Instance = Online_Friends::GetInstance();
  Index = Online_Friends::Crossplay_FindIndex(Instance, v2, friendId);
  v6 = &s_crossplayPrivacy.crossPlatformFriend.privacySettings[0][2];
  if ( Index == -1 )
    v6 = &s_crossplayPrivacy.crossPlatformUser.privacySettings[0][2];
  return v6[2 * v2 + v2];
}

/*
==============
XB3_Privacy_CanCommunicateWithCrossplayUsers
==============
*/
bool XB3_Privacy_CanCommunicateWithCrossplayUsers(const int controllerIndex)
{
  __int64 v1; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_privacy.cpp", 930, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, 8) )
    __debugbreak();
  return (_DWORD)v1 != -1 && s_crossplayPrivacy.crossPlatformUser.privacySettings[v1][2];
}

/*
==============
XB3_Privacy_CheckForStaleData
==============
*/
void XB3_Privacy_CheckForStaleData(void)
{
  int v0; 
  int v1; 
  bool *v2; 
  XB3PrivacyUpdateState *updateState; 
  Windows::Xbox::System::User *CachedXboxUser; 
  bool v5; 
  int Int_Internal_DebugName; 
  PrivacyDetailsStruct *v7; 
  XB3PrivacyUpdateState *v8; 

  if ( Com_FrontEnd_IsInFrontEnd() )
  {
    v0 = Sys_Milliseconds();
    if ( v0 - s_lastStaleDataCheckTime > 0 )
    {
      s_lastStaleDataCheckTime = v0 + Dvar_GetInt_Internal_DebugName(DVARINT_xb3_privacy_stale_data_check_rate_ms, "xb3_privacy_stale_data_check_rate_ms");
      v1 = 0;
      v2 = s_isListDirty;
      updateState = s_privacyDetails[0].updateState;
      do
      {
        if ( Live_IsSignedIn(v1) )
        {
          CachedXboxUser = Live_GetCachedXboxUser(v1);
          v5 = CachedXboxUser == NULL;
          if ( CachedXboxUser )
            CachedXboxUser->__abi_Release(CachedXboxUser);
          if ( !v5 )
          {
            Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DVARINT_xb3_privacy_user_data_refresh_rate_ms, "xb3_privacy_user_data_refresh_rate_ms");
            v7 = s_privacyDetails;
            v8 = updateState;
            do
            {
              if ( v7->userId )
              {
                if ( v0 - *((_DWORD *)v8 + 8) > Int_Internal_DebugName )
                {
                  *v8 = PRIVACY_UPDATE_STATE_PENDING;
                  *v2 = 1;
                }
              }
              ++v7;
              v8 += 26;
            }
            while ( (__int64)v7 < (__int64)&s_crossplayPrivacy );
          }
        }
        ++v1;
        ++updateState;
        ++v2;
      }
      while ( v1 < 8 );
    }
  }
}

/*
==============
XB3_Privacy_Frame
==============
*/
void XB3_Privacy_Frame(void)
{
  int v0; 
  int v1; 
  int v2; 
  int v3; 
  int v4; 
  bool *v5; 
  XB3PrivacyUpdateState *updateState; 
  Windows::Xbox::System::User *CachedXboxUser; 
  bool v8; 
  int Int_Internal_DebugName; 
  PrivacyDetailsStruct *v10; 
  XB3PrivacyUpdateState *v11; 
  int v12; 
  int v13; 
  Windows::Xbox::System::User *v14; 
  Microsoft::Xbox::Services::XboxLiveContext *UsersXboxLiveContext; 
  char v16; 
  int v17; 
  int *failcount; 
  Windows::Xbox::System::User *v19; 
  bool v20; 
  Microsoft::Xbox::Services::XboxLiveContext *v21; 
  bool v22; 
  int v23; 
  bool *p_shouldFetchMuteList; 
  Windows::Xbox::System::User *v25; 
  bool v26; 
  Microsoft::Xbox::Services::XboxLiveContext *v27; 
  Windows::Xbox::System::User *v28; 

  v0 = 0;
  v1 = 0;
  LODWORD(v27) = 0;
  v2 = Sys_Milliseconds();
  if ( !s_privacyCheckIsInProgress )
  {
    if ( Com_FrontEnd_IsInFrontEnd() )
    {
      v3 = Sys_Milliseconds();
      if ( v3 - s_lastStaleDataCheckTime > 0 )
      {
        s_lastStaleDataCheckTime = v3 + Dvar_GetInt_Internal_DebugName(DVARINT_xb3_privacy_stale_data_check_rate_ms, "xb3_privacy_stale_data_check_rate_ms");
        v4 = 0;
        v5 = s_isListDirty;
        updateState = s_privacyDetails[0].updateState;
        do
        {
          if ( Live_IsSignedIn(v4) )
          {
            CachedXboxUser = Live_GetCachedXboxUser(v4);
            v27 = (Microsoft::Xbox::Services::XboxLiveContext *)CachedXboxUser;
            v8 = CachedXboxUser == NULL;
            if ( CachedXboxUser )
              CachedXboxUser->__abi_Release(CachedXboxUser);
            if ( !v8 )
            {
              Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DVARINT_xb3_privacy_user_data_refresh_rate_ms, "xb3_privacy_user_data_refresh_rate_ms");
              v10 = s_privacyDetails;
              v11 = updateState;
              do
              {
                if ( v10->userId && v3 - *((_DWORD *)v11 + 8) > Int_Internal_DebugName )
                {
                  *v11 = PRIVACY_UPDATE_STATE_PENDING;
                  *v5 = 1;
                }
                ++v10;
                v11 += 26;
              }
              while ( (__int64)v10 < (__int64)&s_crossplayPrivacy );
            }
          }
          ++v4;
          ++updateState;
          ++v5;
        }
        while ( v4 < 8 );
      }
    }
    if ( v2 - s_lastPrivacyUpdateTime > 0 )
    {
      v12 = 1 << s_failureCount;
      s_lastPrivacyUpdateTime = v2 + v12 * Dvar_GetInt_Internal_DebugName(DVARINT_xb3_privacy_update_delay_ms, "xb3_privacy_update_delay_ms");
      v13 = -1;
      if ( Live_IsSignedIn(s_nextTurnControllerIndex) )
      {
        v14 = Live_GetCachedXboxUser(s_nextTurnControllerIndex);
        v1 = 2;
        LODWORD(v27) = 2;
        if ( v14 )
        {
          UsersXboxLiveContext = Live_GetUsersXboxLiveContext(s_nextTurnControllerIndex);
          v27 = UsersXboxLiveContext;
          v1 = 6;
          if ( UsersXboxLiveContext )
          {
            v16 = 1;
            goto LABEL_23;
          }
LABEL_22:
          v16 = 0;
LABEL_23:
          if ( (v1 & 4) != 0 )
          {
            v1 &= ~4u;
            LODWORD(v27) = v1;
            if ( UsersXboxLiveContext )
              UsersXboxLiveContext->__abi_Release(UsersXboxLiveContext);
          }
          if ( (v1 & 2) != 0 )
          {
            v1 &= ~2u;
            if ( v14 )
              v14->__abi_Release(v14);
          }
          if ( v16 && s_isListDirty[s_nextTurnControllerIndex] )
            v13 = s_nextTurnControllerIndex;
          s_nextTurnControllerIndex = (s_nextTurnControllerIndex + 1) % 8;
          if ( v13 > -1 )
            XB3_Privacy_UpdateCacheAndFetchIfRequired(v13, v2);
          goto LABEL_48;
        }
      }
      else
      {
        v14 = v28;
      }
      UsersXboxLiveContext = v27;
      goto LABEL_22;
    }
    v17 = 0;
    failcount = s_crossplayPrivacy.failcount;
    while ( 1 )
    {
      if ( Live_IsSignedIn(v17) )
      {
        v19 = Live_GetCachedXboxUser(v17);
        v27 = (Microsoft::Xbox::Services::XboxLiveContext *)v19;
        v20 = v19 == NULL;
        if ( v19 )
          v19->__abi_Release(v19);
        if ( !v20 )
        {
          v21 = Live_GetUsersXboxLiveContext(v17);
          v27 = v21;
          v22 = v21 == NULL;
          if ( v21 )
            v21->__abi_Release(v21);
          if ( !v22 && *(failcount - 17) != 2 && *failcount < Dvar_GetInt_Internal_DebugName(DVARINT_xb3_privacy_failure_backoff_count_max, "xb3_privacy_failure_backoff_count_max") )
          {
            v23 = Sys_Milliseconds();
            if ( *(failcount - 9) + Dvar_GetInt_Internal_DebugName(DVARINT_xb3_privacy_update_delay_ms, "xb3_privacy_update_delay_ms") < v23 )
              break;
          }
        }
      }
      ++v17;
      ++failcount;
      if ( v17 >= 8 )
        goto LABEL_48;
    }
    s_crossplayPrivacy.failcount[v17 - 9] = v23;
    XB3_Privacy_GetCrossplayPrivacy(v17);
  }
LABEL_48:
  p_shouldFetchMuteList = &s_muteListFetchData[0].shouldFetchMuteList;
  v25 = (Windows::Xbox::System::User *)v27;
  while ( 1 )
  {
    v26 = 1;
    if ( Live_IsSignedIn(v0) )
    {
      v25 = Live_GetCachedXboxUser(v0);
      v1 |= 1u;
      if ( v25 )
        v26 = 0;
    }
    if ( (v1 & 1) != 0 )
    {
      v1 &= ~1u;
      if ( v25 )
        v25->__abi_Release(v25);
    }
    if ( !v26 )
    {
      if ( p_shouldFetchMuteList[1] )
        return;
      if ( *p_shouldFetchMuteList && *((_DWORD *)p_shouldFetchMuteList - 1) < v2 )
        break;
    }
    ++v0;
    p_shouldFetchMuteList += 8;
    if ( v0 >= 8 )
      return;
  }
  XB3_Privacy_GetMuteList(v0);
}

/*
==============
XB3_Privacy_GetArrayIndexFromPlatformId
==============
*/
__int64 XB3_Privacy_GetArrayIndexFromPlatformId(unsigned __int64 targetUserId)
{
  __int64 result; 
  PrivacyDetailsStruct *v3; 

  if ( !targetUserId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_privacy.cpp", 354, ASSERT_TYPE_ASSERT, "(targetUserId != (0))", (const char *)&queryFormat, "targetUserId != INVALID_PLATFORM_ID") )
    __debugbreak();
  result = 0i64;
  v3 = s_privacyDetails;
  while ( targetUserId != v3->userId )
  {
    result = (unsigned int)(result + 1);
    if ( (__int64)++v3 >= (__int64)&s_crossplayPrivacy )
      return 0xFFFFFFFFi64;
  }
  return result;
}

/*
==============
XB3_Privacy_GetCrossplayPrivacy
==============
*/
void XB3_Privacy_GetCrossplayPrivacy(const int controllerIndex)
{
  Platform::Collections::Vector<Platform::String _,std::equal_to<Platform::String _>,1> *v2; 
  Platform::Collections::Vector<Platform::String _,std::equal_to<Platform::String _>,1> *v3; 
  Platform::Collections::Vector<Platform::String _,std::equal_to<Platform::String _>,1> *v4; 
  int v5; 
  int v6; 
  Windows::Xbox::System::User *CachedXboxUser; 
  __int64 v8; 
  Microsoft::Xbox::Services::XboxLiveContext *UsersXboxLiveContext; 
  Microsoft::Xbox::Services::__IXboxLiveContextPublicNonVirtuals *v10; 
  Microsoft::Xbox::Services::Privacy::PrivacyService *v11; 
  Microsoft::Xbox::Services::Privacy::__IPrivacyServicePublicNonVirtuals *v12; 
  Platform::Collections::VectorView<Platform::String _,std::equal_to<Platform::String _>,1> *v13; 
  Windows::Foundation::Collections::IVectorView<Platform::String _> *v14; 
  Windows::Foundation::Collections::IVectorView<Platform::String _> *v15; 
  Platform::Collections::Vector<Platform::String _,std::equal_to<Platform::String _>,1> *v16; 
  Platform::Collections::VectorView<Platform::String _,std::equal_to<Platform::String _>,1> *v17; 
  Windows::Foundation::Collections::IVectorView<Platform::String _> *v18; 
  Windows::Foundation::Collections::IVectorView<Platform::String _> *v19; 
  Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Microsoft::Xbox::Services::Privacy::MultiplePermissionsCheckResult _> _> *v20; 
  Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Microsoft::Xbox::Services::Privacy::MultiplePermissionsCheckResult _> _> *v21; 
  Concurrency::task_options *v22; 
  Concurrency::task<void> *v23; 
  volatile signed __int32 *v24; 
  std::_Ref_count_base *Rep; 
  char *fmt; 
  XB3_Privacy_GetCrossplayPrivacy::__l23::<lambda_8c70ec2fca17549e113f7b2056d924e0> _Func[2]; 
  volatile signed __int32 *v28; 
  Platform::Collections::Vector<Platform::String _,std::equal_to<Platform::String _>,1> *v29; 
  __int64 v30; 
  Microsoft::Xbox::Services::XboxLiveContext *v31; 
  Microsoft::Xbox::Services::Privacy::PrivacyService *v32; 
  Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Microsoft::Xbox::Services::Privacy::MultiplePermissionsCheckResult _> _> *v33; 
  __int64 v34; 
  Microsoft::Xbox::Services::__IXboxLiveContextPublicNonVirtuals *v35; 
  Microsoft::Xbox::Services::Privacy::__IPrivacyServicePublicNonVirtuals *v36; 
  Concurrency::task<Windows::Foundation::Collections::IVectorView<Microsoft::Xbox::Services::Privacy::MultiplePermissionsCheckResult _> _> v37; 
  HSTRING_HEADER hstringHeader; 
  HSTRING_HEADER v39; 
  Concurrency::task_options v40; 
  HSTRING string; 
  HSTRING v42; 

  v34 = -2i64;
  if ( (unsigned int)controllerIndex >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_privacy.cpp", 533, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, 8) )
    __debugbreak();
  v2 = (Platform::Collections::Vector<Platform::String _,std::equal_to<Platform::String _>,1> *)Platform::Details::Heap::Allocate(0x68ui64, 0x90ui64);
  Platform::Collections::Vector<Platform::String __gc *,std::equal_to<Platform::String __gc *>,1>::Vector<Platform::String __gc *,std::equal_to<Platform::String __gc *>,1>(v2);
  v4 = v3;
  if ( v3 )
    v3->__abi_AddRef(v3);
  v29 = v4;
  if ( v4 )
    v4->__abi_Release(v4);
  v5 = WindowsCreateStringReference_0(L"crossNetworkFriend", 0x12u, &hstringHeader, &string);
  if ( v5 < 0 )
    __abi_WinRTraiseException(v5);
  j__Append__Q__IVector_PE_AAVString_Platform___Collections_Foundation_Windows____Vector_PE_AAVString_Platform__U__equal_to_PE_AAVString_Platform___std___00_2Platform__UE_AAAXPE_AAVString_6__Z(v4, (Platform::String *)string);
  v6 = WindowsCreateStringReference_0(L"crossNetworkUser", 0x10u, &v39, &v42);
  if ( v6 < 0 )
    __abi_WinRTraiseException(v6);
  j__Append__Q__IVector_PE_AAVString_Platform___Collections_Foundation_Windows____Vector_PE_AAVString_Platform__U__equal_to_PE_AAVString_Platform___std___00_2Platform__UE_AAAXPE_AAVString_6__Z(v4, (Platform::String *)v42);
  CachedXboxUser = Live_GetCachedXboxUser(controllerIndex);
  v8 = (__int64)CachedXboxUser;
  if ( CachedXboxUser )
    CachedXboxUser->__abi_AddRef(CachedXboxUser);
  v30 = v8;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16i64))(v8);
  if ( v8 )
  {
    if ( (unsigned int)(v4->m_vec._Ptr->_Mypair._Myval2._Mylast - v4->m_vec._Ptr->_Mypair._Myval2._Myfirst) > 0x100 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_privacy.cpp", 547, ASSERT_TYPE_ASSERT, "(users->Size <= 256)", (const char *)&queryFormat, "users->Size <= NUM_USERS_IN_PRIVACY_CACHE") )
      __debugbreak();
    UsersXboxLiveContext = Live_GetUsersXboxLiveContext(controllerIndex);
    v10 = UsersXboxLiveContext;
    v31 = UsersXboxLiveContext;
    if ( UsersXboxLiveContext )
      UsersXboxLiveContext->__abi_AddRef(UsersXboxLiveContext);
    v35 = v10;
    if ( v10 )
      v10->__abi_Release(v10);
    if ( v10 )
    {
      v11 = Microsoft::Xbox::Services::__IXboxLiveContextPublicNonVirtuals::PrivacyService::get(v10);
      v12 = v11;
      v32 = v11;
      if ( v11 )
        v11->__abi_AddRef(v11);
      v36 = v12;
      if ( v12 )
        v12->__abi_Release(v12);
      s_privacyCheckIsInProgress = 1;
      LODWORD(fmt) = v4->m_vec._Ptr->_Mypair._Myval2._Mylast - v4->m_vec._Ptr->_Mypair._Myval2._Myfirst;
      Com_Printf(25, "%s: Fetching crossplay privacy settings for controller index %d with a request size of %d\n", "XB3_Privacy_GetCrossplayPrivacy", (unsigned int)controllerIndex, fmt);
      v13 = (Platform::Collections::VectorView<Platform::String _,std::equal_to<Platform::String _>,1> *)Platform::Details::Heap::Allocate(0x58ui64, 0x70ui64);
      Platform::Collections::VectorView<Platform::String __gc *,std::equal_to<Platform::String __gc *>,1>::VectorView<Platform::String __gc *,std::equal_to<Platform::String __gc *>,1>(v13, &v4->m_ctr, &v4->m_vec);
      v15 = v14;
      if ( v14 )
        v14->__abi_AddRef(v14);
      if ( v15 )
        v15->__abi_Release(v15);
      v16 = s_permissionIds;
      v17 = (Platform::Collections::VectorView<Platform::String _,std::equal_to<Platform::String _>,1> *)Platform::Details::Heap::Allocate(0x58ui64, 0x70ui64);
      Platform::Collections::VectorView<Platform::String __gc *,std::equal_to<Platform::String __gc *>,1>::VectorView<Platform::String __gc *,std::equal_to<Platform::String __gc *>,1>(v17, &v16->m_ctr, &v16->m_vec);
      v19 = v18;
      *(_QWORD *)&_Func[0].controllerIndex = v18;
      if ( v18 )
        v18->__abi_AddRef(v18);
      if ( v19 )
        v19->__abi_Release(v19);
      *(_QWORD *)&_Func[0].controllerIndex = v19;
      v20 = Microsoft::Xbox::Services::Privacy::__IPrivacyServicePublicNonVirtuals::CheckMultiplePermissionsWithMultipleTargetUsersAsync(v12, v19, v15);
      v21 = v20;
      v33 = v20;
      if ( v20 )
        v20->__abi_AddRef(v20);
      v33 = v21;
      if ( v21 )
        v21->__abi_Release(v21);
      if ( v19 )
        v19->__abi_Release(v19);
      if ( v15 )
        v15->__abi_Release(v15);
      Concurrency::task_options::task_options(&v40);
      v23 = (Concurrency::task<void> *)Concurrency::create_task<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Microsoft::Xbox::Services::Privacy::MultiplePermissionsCheckResult __gc *> __gc *> __gc *>(&v37, v21, v22);
      Concurrency::task_Windows::Foundation::Collections::IVectorView_Microsoft::Xbox::Services::Privacy::MultiplePermissionsCheckResult______::then__lambda_8c70ec2fca17549e113f7b2056d924e0___(v23, _Func);
      v24 = v28;
      if ( v28 )
      {
        if ( _InterlockedExchangeAdd(v28 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v24)(v24);
          if ( _InterlockedExchangeAdd(v24 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 8i64))(v24);
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
      if ( v21 )
        v21->__abi_Release(v21);
      if ( v12 )
        v12->__abi_Release(v12);
      v10->__abi_Release(v10);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16i64))(v8);
    }
    else
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16i64))(v8);
      if ( !v4 )
        return;
    }
  }
  else if ( !v4 )
  {
    return;
  }
  v4->__abi_Release(v4);
}

/*
==============
XB3_Privacy_GetMuteList
==============
*/
void XB3_Privacy_GetMuteList(const int controllerIndex)
{
  __int64 v1; 
  Windows::Xbox::System::User *CachedXboxUser; 
  Microsoft::Xbox::Services::XboxLiveContext *UsersXboxLiveContext; 
  Microsoft::Xbox::Services::XboxLiveContext *v4; 
  Microsoft::Xbox::Services::Privacy::PrivacyService *v5; 
  int v6; 
  __int64 v7; 
  Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Platform::String _> _> *v8; 
  Concurrency::task_options *v9; 
  Concurrency::task<void> *v10; 
  volatile signed __int32 *v11; 
  std::_Ref_count_base *Rep; 
  __int64 v13; 
  int v14; 
  XB3_Privacy_GetMuteList::__l26::<lambda_7774803703cddf44b1c5581e3f7b1e81> _Func; 
  volatile signed __int32 *v16; 
  Concurrency::task<Windows::Foundation::Collections::IVectorView<Platform::String _> _> v17; 
  Concurrency::task_options v18; 
  Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Platform::String _> _> *v19; 
  __int64 v20; 
  Windows::Xbox::System::User *v21; 

  v1 = controllerIndex;
  if ( !s_muteListFetchData[controllerIndex].shouldFetchMuteList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_privacy.cpp", 647, ASSERT_TYPE_ASSERT, "(s_muteListFetchData[controllerIndex].shouldFetchMuteList)", (const char *)&queryFormat, "s_muteListFetchData[controllerIndex].shouldFetchMuteList") )
    __debugbreak();
  if ( (unsigned int)v1 >= 8 )
  {
    v14 = 8;
    LODWORD(v13) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_privacy.cpp", 648, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v13, v14) )
      __debugbreak();
  }
  CachedXboxUser = Live_GetCachedXboxUser(v1);
  v21 = CachedXboxUser;
  v19 = NULL;
  if ( CachedXboxUser )
  {
    UsersXboxLiveContext = Live_GetUsersXboxLiveContext(v1);
    v4 = UsersXboxLiveContext;
    v19 = NULL;
    if ( UsersXboxLiveContext )
    {
      v5 = Microsoft::Xbox::Services::__IXboxLiveContextPublicNonVirtuals::PrivacyService::get(UsersXboxLiveContext);
      v19 = NULL;
      if ( v5 )
      {
        Com_Printf(25, "Fetching mute list for controller index %d\n", (unsigned int)v1);
        *(_WORD *)&s_muteListFetchData[v1].shouldFetchMuteList = 256;
        v19 = NULL;
        v6 = v5->__abi_GetMuteListAsync(v5, &v19);
        if ( v6 < 0 )
          __abi_WinRTraiseException(v6);
        v7 = (__int64)v19;
        v8 = v19;
        if ( v19 )
        {
          v19->__abi_AddRef(v19);
          v7 = (__int64)v19;
        }
        if ( v7 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16i64))(v7);
        v20 = 0i64;
        Concurrency::task_options::task_options(&v18);
        v10 = (Concurrency::task<void> *)Concurrency::create_task<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Platform::String __gc *> __gc *> __gc *>(&v17, v8, v9);
        Concurrency::task_Windows::Foundation::Collections::IVectorView_Platform::String______::then__lambda_7774803703cddf44b1c5581e3f7b1e81___(v10, &_Func);
        v11 = v16;
        if ( v16 )
        {
          if ( _InterlockedExchangeAdd(v16 + 2, 0xFFFFFFFF) == 1 )
          {
            (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
            if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8i64))(v11);
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
        if ( v8 )
          v8->__abi_Release(v8);
        v5->__abi_Release(v5);
      }
      v4->__abi_Release(v4);
    }
    CachedXboxUser->__abi_Release(CachedXboxUser);
  }
}

/*
==============
XB3_Privacy_GetMuteListComplete
==============
*/
bool *XB3_Privacy_GetMuteListComplete()
{
  int v0; 
  bool *result; 

  v0 = 0;
  result = &s_muteListFetchData[0].fetching;
  while ( !*result )
  {
    ++v0;
    result += 8;
    if ( (__int64)result >= (__int64)&unk_1564A0235 )
      return result;
  }
  result = (bool *)v0;
  s_muteListFetchData[v0].fetching = 0;
  return result;
}

/*
==============
XB3_Privacy_GetPrivacySettingsForUser
==============
*/
bool XB3_Privacy_GetPrivacySettingsForUser(const int controllerIndex, const unsigned __int64 targetUserId, const XB3PrivacyPermissionId targetPermissionId)
{
  __int64 v3; 
  __int64 v5; 
  int ArrayIndexFromPlatformId; 
  __int64 v7; 

  v3 = targetPermissionId;
  v5 = controllerIndex;
  if ( targetPermissionId >= PERMISSION_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_privacy.cpp", 845, ASSERT_TYPE_ASSERT, "(targetPermissionId < PERMISSION_COUNT)", (const char *)&queryFormat, "targetPermissionId < PERMISSION_COUNT") )
    __debugbreak();
  ArrayIndexFromPlatformId = XB3_Privacy_GetArrayIndexFromPlatformId(targetUserId);
  if ( ArrayIndexFromPlatformId < 0 )
  {
    if ( XB3_Privacy_AddUserToCache(v5, targetUserId) )
      s_isListDirty[v5] = 1;
    return 0;
  }
  else
  {
    v7 = ArrayIndexFromPlatformId;
    s_privacyDetails[v7].lastQueriedTime = Sys_Milliseconds();
    return s_privacyDetails[0].privacySettings[0][2 * v5 + v7 * 104 + v5 + v3];
  }
}

/*
==============
XB3_Privacy_GetUserPrivacyDetailsForUsers
==============
*/
void XB3_Privacy_GetUserPrivacyDetailsForUsers(int controllerIndex, Platform::Collections::Vector<Platform::String _,std::equal_to<Platform::String _>,1> *users)
{
  Windows::Xbox::System::User *CachedXboxUser; 
  Windows::Xbox::System::User *v5; 
  Microsoft::Xbox::Services::XboxLiveContext *UsersXboxLiveContext; 
  Microsoft::Xbox::Services::__IXboxLiveContextPublicNonVirtuals *v7; 
  Microsoft::Xbox::Services::Privacy::PrivacyService *v8; 
  Microsoft::Xbox::Services::Privacy::__IPrivacyServicePublicNonVirtuals *v9; 
  Platform::Collections::VectorView<Platform::String _,std::equal_to<Platform::String _>,1> *v10; 
  Windows::Foundation::Collections::IVectorView<Platform::String _> *v11; 
  Windows::Foundation::Collections::IVectorView<Platform::String _> *v12; 
  Platform::Collections::Vector<Platform::String _,std::equal_to<Platform::String _>,1> *v13; 
  Platform::Collections::VectorView<Platform::String _,std::equal_to<Platform::String _>,1> *v14; 
  Windows::Foundation::Collections::IVectorView<Platform::String _> *v15; 
  Windows::Foundation::Collections::IVectorView<Platform::String _> *v16; 
  Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Microsoft::Xbox::Services::Privacy::MultiplePermissionsCheckResult _> _> *v17; 
  Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Microsoft::Xbox::Services::Privacy::MultiplePermissionsCheckResult _> _> *v18; 
  Concurrency::task_options *v19; 
  Concurrency::task<void> *v20; 
  volatile signed __int32 *v21; 
  std::_Ref_count_base *Rep; 
  int v24; 
  XB3_Privacy_GetUserPrivacyDetailsForUsers::__l23::<lambda_b7084e662869f29cb6fb57e918b8484d> _Func[2]; 
  volatile signed __int32 *v26; 
  Microsoft::Xbox::Services::XboxLiveContext *v27; 
  Microsoft::Xbox::Services::Privacy::PrivacyService *v28; 
  Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Microsoft::Xbox::Services::Privacy::MultiplePermissionsCheckResult _> _> *v29; 
  __int64 v30; 
  Microsoft::Xbox::Services::__IXboxLiveContextPublicNonVirtuals *v31; 
  Microsoft::Xbox::Services::Privacy::__IPrivacyServicePublicNonVirtuals *v32; 
  Concurrency::task<Windows::Foundation::Collections::IVectorView<Microsoft::Xbox::Services::Privacy::MultiplePermissionsCheckResult _> _> v33; 
  Concurrency::task_options v34; 

  v30 = -2i64;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v24 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_privacy.cpp", 424, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v24) )
      __debugbreak();
  }
  CachedXboxUser = Live_GetCachedXboxUser(controllerIndex);
  v5 = CachedXboxUser;
  if ( CachedXboxUser )
    CachedXboxUser->__abi_AddRef(CachedXboxUser);
  if ( v5 )
    v5->__abi_Release(v5);
  if ( v5 )
  {
    if ( (unsigned int)(users->m_vec._Ptr->_Mypair._Myval2._Mylast - users->m_vec._Ptr->_Mypair._Myval2._Myfirst) > 0x100 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_privacy.cpp", 432, ASSERT_TYPE_ASSERT, "(users->Size <= 256)", (const char *)&queryFormat, "users->Size <= NUM_USERS_IN_PRIVACY_CACHE") )
      __debugbreak();
    UsersXboxLiveContext = Live_GetUsersXboxLiveContext(controllerIndex);
    v7 = UsersXboxLiveContext;
    v27 = UsersXboxLiveContext;
    if ( UsersXboxLiveContext )
      UsersXboxLiveContext->__abi_AddRef(UsersXboxLiveContext);
    v31 = v7;
    if ( v7 )
      v7->__abi_Release(v7);
    if ( v7 )
    {
      v8 = Microsoft::Xbox::Services::__IXboxLiveContextPublicNonVirtuals::PrivacyService::get(v7);
      v9 = v8;
      v28 = v8;
      if ( v8 )
        v8->__abi_AddRef(v8);
      v32 = v9;
      if ( v9 )
        v9->__abi_Release(v9);
      s_privacyCheckIsInProgress = 1;
      Com_Printf(25, "Fetching privacy settings for controller index %d with a request size of %d\n", (unsigned int)controllerIndex, users->m_vec._Ptr->_Mypair._Myval2._Mylast - users->m_vec._Ptr->_Mypair._Myval2._Myfirst);
      v10 = (Platform::Collections::VectorView<Platform::String _,std::equal_to<Platform::String _>,1> *)Platform::Details::Heap::Allocate(0x58ui64, 0x70ui64);
      Platform::Collections::VectorView<Platform::String __gc *,std::equal_to<Platform::String __gc *>,1>::VectorView<Platform::String __gc *,std::equal_to<Platform::String __gc *>,1>(v10, &users->m_ctr, &users->m_vec);
      v12 = v11;
      if ( v11 )
        v11->__abi_AddRef(v11);
      if ( v12 )
        v12->__abi_Release(v12);
      v13 = s_permissionIds;
      v14 = (Platform::Collections::VectorView<Platform::String _,std::equal_to<Platform::String _>,1> *)Platform::Details::Heap::Allocate(0x58ui64, 0x70ui64);
      Platform::Collections::VectorView<Platform::String __gc *,std::equal_to<Platform::String __gc *>,1>::VectorView<Platform::String __gc *,std::equal_to<Platform::String __gc *>,1>(v14, &v13->m_ctr, &v13->m_vec);
      v16 = v15;
      *(_QWORD *)&_Func[0].controllerIndex = v15;
      if ( v15 )
        v15->__abi_AddRef(v15);
      if ( v16 )
        v16->__abi_Release(v16);
      *(_QWORD *)&_Func[0].controllerIndex = v16;
      v17 = Microsoft::Xbox::Services::Privacy::__IPrivacyServicePublicNonVirtuals::CheckMultiplePermissionsWithMultipleTargetUsersAsync(v9, v16, v12);
      v18 = v17;
      v29 = v17;
      if ( v17 )
        v17->__abi_AddRef(v17);
      v29 = v18;
      if ( v18 )
        v18->__abi_Release(v18);
      if ( v16 )
        v16->__abi_Release(v16);
      if ( v12 )
        v12->__abi_Release(v12);
      Concurrency::task_options::task_options(&v34);
      v20 = (Concurrency::task<void> *)Concurrency::create_task<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Microsoft::Xbox::Services::Privacy::MultiplePermissionsCheckResult __gc *> __gc *> __gc *>(&v33, v18, v19);
      Concurrency::task_Windows::Foundation::Collections::IVectorView_Microsoft::Xbox::Services::Privacy::MultiplePermissionsCheckResult______::then__lambda_b7084e662869f29cb6fb57e918b8484d___(v20, _Func);
      v21 = v26;
      if ( v26 )
      {
        if ( _InterlockedExchangeAdd(v26 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v21)(v21);
          if ( _InterlockedExchangeAdd(v21 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 8i64))(v21);
        }
      }
      Rep = v33._M_Impl._Rep;
      if ( v33._M_Impl._Rep )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v33._M_Impl._Rep->_Uses, 0xFFFFFFFF) == 1 )
        {
          Rep->_Destroy(Rep);
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&Rep->_Weaks, 0xFFFFFFFF) == 1 )
            Rep->_Delete_this(Rep);
        }
      }
      if ( v18 )
        v18->__abi_Release(v18);
      if ( v9 )
        v9->__abi_Release(v9);
      v7->__abi_Release(v7);
    }
    v5->__abi_Release(v5);
  }
}

/*
==============
XB3_Privacy_GetUserPrivacyDetailsForUsersComplete
==============
*/
void XB3_Privacy_GetUserPrivacyDetailsForUsersComplete(__int64 controllerIndex, bool successful)
{
  unsigned __int64 v2; 
  int Int_Internal_DebugName; 
  int v5; 
  PrivacyDetailsStruct *v6; 
  __int64 v7; 

  v2 = (int)controllerIndex;
  if ( !s_isListDirty[(int)controllerIndex] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_privacy.cpp", 382, ASSERT_TYPE_ASSERT, "(s_isListDirty[controllerIndex] == true)", (const char *)&queryFormat, "s_isListDirty[controllerIndex] == true") )
    __debugbreak();
  if ( successful )
  {
    s_failureCount = 0;
    if ( v2 >= 8 )
    {
      j___report_rangecheckfailure(controllerIndex);
      JUMPOUT(0x1428BAE29i64);
    }
    s_isListDirty[v2] = 0;
    Com_Printf(25, "XB3_Privacy_GetUserPrivacyDetailsForUsersComplete successful\n");
  }
  else
  {
    Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DVARINT_xb3_privacy_failure_backoff_count_max, "xb3_privacy_failure_backoff_count_max");
    v5 = s_failureCount + 1;
    s_isListDirty[v2] = 1;
    v6 = s_privacyDetails;
    if ( v5 > Int_Internal_DebugName )
      v5 = Int_Internal_DebugName;
    s_failureCount = v5;
    v7 = 0i64;
    do
    {
      if ( s_privacyDetails[v7].updateState[v2] == PRIVACY_UPDATE_STATE_UPDATING )
      {
        if ( !v6->userId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_privacy.cpp", 409, ASSERT_TYPE_ASSERT, "(s_privacyDetails[userIndex].userId != 0)", (const char *)&queryFormat, "s_privacyDetails[userIndex].userId != 0") )
          __debugbreak();
        s_privacyDetails[v7].updateState[v2] = PRIVACY_UPDATE_STATE_PENDING;
      }
      ++v6;
      ++v7;
    }
    while ( (__int64)v6 < (__int64)&s_crossplayPrivacy );
    Com_PrintError(25, "XB3_Privacy_GetUserPrivacyDetailsForUsersComplete failed with failure count %d\n", (unsigned int)s_failureCount);
  }
  s_privacyCheckIsInProgress = 0;
}

/*
==============
XB3_Privacy_Init
==============
*/
void XB3_Privacy_Init(void)
{
  int v0; 
  Platform::Collections::Vector<Platform::String _,std::equal_to<Platform::String _>,1> *v1; 
  Platform::Collections::Vector<Platform::String _,std::equal_to<Platform::String _>,1> *v2; 
  Platform::Collections::Vector<Platform::String _,std::equal_to<Platform::String _>,1> *v3; 
  __int64 v4; 
  bool v5; 
  int *p_lastQueriedTime; 
  char *v7; 
  _DWORD *v8; 
  __int64 v9; 
  int ActivationFactoryByPCWSTR; 
  int v11; 
  HSTRING v12; 
  int v13; 
  HSTRING v14; 
  int v15; 
  int v16; 
  HSTRING v17; 
  int v18; 
  HSTRING v19; 
  int v20; 
  int v21; 
  HSTRING v22; 
  int v23; 
  HSTRING v24; 
  Platform::Guid pGuid; 
  HSTRING string; 
  void *ppActivationFactory; 
  HSTRING newString; 
  __int64 v29; 

  v0 = Sys_Milliseconds();
  string = (HSTRING)Platform::Details::Heap::Allocate(0x68ui64, 0x90ui64);
  Platform::Collections::Vector<Platform::String __gc *,std::equal_to<Platform::String __gc *>,1>::Vector<Platform::String __gc *,std::equal_to<Platform::String __gc *>,1>((Platform::Collections::Vector<Platform::String _,std::equal_to<Platform::String _>,1> *)string);
  v2 = v1;
  string = (HSTRING)v1;
  v3 = s_permissionIds;
  if ( v1 != s_permissionIds )
  {
    if ( v1 )
    {
      v1->__abi_AddRef(v1);
      v3 = s_permissionIds;
    }
    if ( v3 )
      v3->__abi_Release(v3);
    s_permissionIds = v2;
  }
  if ( v2 )
    v2->__abi_Release(v2);
  v4 = 0i64;
  v5 = 1;
  do
  {
    if ( !v5 )
    {
      ActivationFactoryByPCWSTR = j___report_rangecheckfailure(s_isListDirty);
      goto LABEL_43;
    }
    s_isListDirty[v4] = 0;
    v5 = (unsigned __int64)++v4 < 8;
  }
  while ( v4 < 8 );
  s_lastPrivacyUpdateTime = v0 + Dvar_GetInt_Internal_DebugName(DVARINT_xb3_privacy_update_delay_ms, "xb3_privacy_update_delay_ms");
  s_lastStaleDataCheckTime = v0 + Dvar_GetInt_Internal_DebugName(DVARINT_xb3_privacy_stale_data_check_rate_ms, "xb3_privacy_stale_data_check_rate_ms");
  s_privacyCheckIsInProgress = 0;
  s_nextAvailableSlotInCache = 0;
  s_failureCount = 0;
  s_nextTurnControllerIndex = 0;
  p_lastQueriedTime = &s_privacyDetails[0].lastQueriedTime;
  do
  {
    *((_QWORD *)p_lastQueriedTime - 1) = 0i64;
    *p_lastQueriedTime = 0;
    v7 = (char *)p_lastQueriedTime + 5;
    v8 = p_lastQueriedTime + 15;
    v9 = 8i64;
    do
    {
      *(v8 - 8) = 0;
      *v8 = 0;
      *(_WORD *)(v7 - 1) = 0;
      v7[1] = 0;
      ++v8;
      v7 += 3;
      --v9;
    }
    while ( v9 );
    p_lastQueriedTime += 26;
  }
  while ( (__int64)p_lastQueriedTime < (__int64)&s_crossplayPrivacy.crossPlatformFriend.lastQueriedTime );
  pGuid.__vftable = (Platform::Object_vtbl *)0x317B7B34FA02FE7Bi64;
  *(_DWORD *)&pGuid.__d = 1671290030;
  *(_DWORD *)&pGuid.__h = -766510228;
  ppActivationFactory = NULL;
  ActivationFactoryByPCWSTR = __winRT::__getActivationFactoryByPCWSTR(L"Microsoft.Xbox.Services.Privacy.PermissionIdConstants", &pGuid, &ppActivationFactory);
  if ( ActivationFactoryByPCWSTR < 0 )
LABEL_43:
    __abi_WinRTraiseException(ActivationFactoryByPCWSTR);
  string = NULL;
  v11 = (*(__int64 (__fastcall **)(void *, HSTRING *))(*(_QWORD *)ppActivationFactory + 112i64))(ppActivationFactory, &string);
  if ( v11 < 0 )
    __abi_WinRTraiseException(v11);
  v12 = string;
  if ( string )
  {
    v13 = WindowsDuplicateString_0(string, &newString);
    if ( v13 < 0 )
      __abi_WinRTraiseException(v13);
    v14 = newString;
    v12 = string;
  }
  else
  {
    v14 = NULL;
  }
  WindowsDeleteString_0(v12);
  v29 = 0i64;
  WindowsDeleteString_0(NULL);
  v29 = 0i64;
  WindowsDeleteString_0(NULL);
  if ( ppActivationFactory )
    (*(void (__fastcall **)(void *))(*(_QWORD *)ppActivationFactory + 16i64))(ppActivationFactory);
  string = v14;
  j__Append__Q__IVector_PE_AAVString_Platform___Collections_Foundation_Windows____Vector_PE_AAVString_Platform__U__equal_to_PE_AAVString_Platform___std___00_2Platform__UE_AAAXPE_AAVString_6__Z(s_permissionIds, (Platform::String *)v14);
  WindowsDeleteString_0(v14);
  pGuid.__vftable = (Platform::Object_vtbl *)0x317B7B34FA02FE7Bi64;
  *(_DWORD *)&pGuid.__d = 1671290030;
  *(_DWORD *)&pGuid.__h = -766510228;
  ppActivationFactory = NULL;
  v15 = __winRT::__getActivationFactoryByPCWSTR(L"Microsoft.Xbox.Services.Privacy.PermissionIdConstants", &pGuid, &ppActivationFactory);
  if ( v15 < 0 )
    __abi_WinRTraiseException(v15);
  string = NULL;
  v16 = (*(__int64 (__fastcall **)(void *, HSTRING *))(*(_QWORD *)ppActivationFactory + 152i64))(ppActivationFactory, &string);
  if ( v16 < 0 )
    __abi_WinRTraiseException(v16);
  v17 = string;
  if ( string )
  {
    v18 = WindowsDuplicateString_0(string, &newString);
    if ( v18 < 0 )
      __abi_WinRTraiseException(v18);
    v19 = newString;
    v17 = string;
  }
  else
  {
    v19 = NULL;
  }
  WindowsDeleteString_0(v17);
  v29 = 0i64;
  WindowsDeleteString_0(NULL);
  v29 = 0i64;
  WindowsDeleteString_0(NULL);
  if ( ppActivationFactory )
    (*(void (__fastcall **)(void *))(*(_QWORD *)ppActivationFactory + 16i64))(ppActivationFactory);
  string = v19;
  j__Append__Q__IVector_PE_AAVString_Platform___Collections_Foundation_Windows____Vector_PE_AAVString_Platform__U__equal_to_PE_AAVString_Platform___std___00_2Platform__UE_AAAXPE_AAVString_6__Z(s_permissionIds, (Platform::String *)v19);
  WindowsDeleteString_0(v19);
  pGuid.__vftable = (Platform::Object_vtbl *)0x317B7B34FA02FE7Bi64;
  *(_DWORD *)&pGuid.__d = 1671290030;
  *(_DWORD *)&pGuid.__h = -766510228;
  ppActivationFactory = NULL;
  v20 = __winRT::__getActivationFactoryByPCWSTR(L"Microsoft.Xbox.Services.Privacy.PermissionIdConstants", &pGuid, &ppActivationFactory);
  if ( v20 < 0 )
    __abi_WinRTraiseException(v20);
  string = NULL;
  v21 = (*(__int64 (__fastcall **)(void *, HSTRING *))(*(_QWORD *)ppActivationFactory + 64i64))(ppActivationFactory, &string);
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
  v29 = 0i64;
  WindowsDeleteString_0(NULL);
  v29 = 0i64;
  WindowsDeleteString_0(NULL);
  if ( ppActivationFactory )
    (*(void (__fastcall **)(void *))(*(_QWORD *)ppActivationFactory + 16i64))(ppActivationFactory);
  string = v24;
  j__Append__Q__IVector_PE_AAVString_Platform___Collections_Foundation_Windows____Vector_PE_AAVString_Platform__U__equal_to_PE_AAVString_Platform___std___00_2Platform__UE_AAAXPE_AAVString_6__Z(s_permissionIds, (Platform::String *)v24);
  WindowsDeleteString_0(v24);
}

/*
==============
XB3_Privacy_RefetchAllPrivacy
==============
*/
void XB3_Privacy_RefetchAllPrivacy(const int controllerIndex)
{
  __int64 v1; 
  bool v2; 
  const dvar_t *v3; 
  __int64 v4; 
  int Int_Internal_DebugName; 
  int v6; 
  PrivacyDetailsStruct *v7; 
  XB3PrivacyUpdateState *v8; 
  unsigned int i; 
  __int64 v10; 
  int v11; 

  v1 = controllerIndex;
  v2 = (unsigned int)controllerIndex < 8;
  if ( controllerIndex >= 8 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_privacy.cpp", 881, ASSERT_TYPE_ASSERT, "(controllerIndex < 8)", (const char *)&queryFormat, "controllerIndex < MAX_GPAD_COUNT") )
      __debugbreak();
    v2 = (unsigned int)v1 < 8;
  }
  if ( !v2 )
  {
    v11 = 8;
    LODWORD(v10) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_privacy.cpp", 873, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v10, v11) )
      __debugbreak();
  }
  v3 = DVARINT_xb3_mutelist_fetch_delay;
  s_muteListFetchData[v1].shouldFetchMuteList = 1;
  v4 = v1;
  Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(v3, "xb3_mutelist_fetch_delay");
  v6 = Sys_Milliseconds();
  v7 = s_privacyDetails;
  s_muteListFetchData[v4].nextMuteFetchTime = v6 + Int_Internal_DebugName;
  s_crossplayPrivacy.failcount[v4 - 17] = 0;
  v8 = &s_privacyDetails[0].updateState[v4];
  for ( i = 0; i < 0x100; ++i )
  {
    if ( v7->userId )
    {
      *((_DWORD *)v8 + 8) = 0;
      *v8 = PRIVACY_UPDATE_STATE_PENDING;
      s_isListDirty[v4] = 1;
    }
    ++v7;
    v8 += 26;
  }
}

/*
==============
XB3_Privacy_ResetUserDataAtIndex
==============
*/
void XB3_Privacy_ResetUserDataAtIndex(int userIndex)
{
  __int64 v1; 
  bool *v2; 
  int *lastFetchedTime; 
  __int64 v4; 

  v1 = userIndex;
  s_privacyDetails[v1].userId = 0i64;
  v2 = &s_privacyDetails[v1].privacySettings[0][1];
  s_privacyDetails[v1].lastQueriedTime = 0;
  lastFetchedTime = s_privacyDetails[v1].lastFetchedTime;
  v4 = 8i64;
  do
  {
    *(lastFetchedTime - 8) = 0;
    v2 += 3;
    *lastFetchedTime++ = 0;
    *((_WORD *)v2 - 2) = 0;
    *(v2 - 2) = 0;
    --v4;
  }
  while ( v4 );
}

/*
==============
XB3_Privacy_UpdateCacheAndFetchIfRequired
==============
*/
void XB3_Privacy_UpdateCacheAndFetchIfRequired(int controllerIndex, int currentTime)
{
  __int64 v2; 
  Platform::Collections::Vector<Platform::String _,std::equal_to<Platform::String _>,1> *v3; 
  int v4; 
  Platform::Collections::Vector<Platform::String _,std::equal_to<Platform::String _>,1> *v5; 
  Platform::Collections::Vector<Platform::String _,std::equal_to<Platform::String _>,1> *v6; 
  Platform::Collections::Vector<Platform::String _,std::equal_to<Platform::String _>,1> *v7; 
  PrivacyDetailsStruct *v8; 
  XB3PrivacyUpdateState *v9; 
  __int64 v10; 
  Platform::String *v11; 
  HSTRING v12; 
  wchar_t _Buffer[32]; 

  v2 = controllerIndex;
  v3 = NULL;
  if ( (unsigned int)controllerIndex >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_privacy.cpp", 266, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, 8) )
    __debugbreak();
  v4 = 0;
  v5 = (Platform::Collections::Vector<Platform::String _,std::equal_to<Platform::String _>,1> *)Platform::Details::Heap::Allocate(0x68ui64, 0x90ui64);
  Platform::Collections::Vector<Platform::String __gc *,std::equal_to<Platform::String __gc *>,1>::Vector<Platform::String __gc *,std::equal_to<Platform::String __gc *>,1>(v5);
  v7 = v6;
  if ( v6 )
  {
    v6->__abi_AddRef(v6);
    v3 = v7;
  }
  if ( v7 )
    v7->__abi_Release(v7);
  v8 = s_privacyDetails;
  v9 = &s_privacyDetails[0].updateState[v2];
  v10 = 256i64;
  do
  {
    if ( v8->userId && *v9 == PRIVACY_UPDATE_STATE_PENDING )
    {
      swprintf_s<32>((wchar_t (*)[32])_Buffer, L"%llu");
      Platform::String::String(NULL, _Buffer);
      v12 = (HSTRING)v11;
      j__Append__Q__IVector_PE_AAVString_Platform___Collections_Foundation_Windows____Vector_PE_AAVString_Platform__U__equal_to_PE_AAVString_Platform___std___00_2Platform__UE_AAAXPE_AAVString_6__Z(v3, v11);
      WindowsDeleteString_0(v12);
      *v9 = PRIVACY_UPDATE_STATE_UPDATING;
      ++v4;
    }
    ++v8;
    v9 += 26;
    --v10;
  }
  while ( v10 );
  if ( v4 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_privacy.cpp", 290, ASSERT_TYPE_ASSERT, "(numUsersToUpdate > 0)", (const char *)&queryFormat, "numUsersToUpdate > 0") )
    __debugbreak();
  XB3_Privacy_GetUserPrivacyDetailsForUsers(v2, v3);
  if ( v3 )
    v3->__abi_Release(v3);
}

