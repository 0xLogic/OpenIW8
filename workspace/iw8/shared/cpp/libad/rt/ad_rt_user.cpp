/*
==============
AD_UserManagerAnyPendingUsers
==============
*/

bool __fastcall AD_UserManagerAnyPendingUsers(const AD_UserManager *const userManager)
{
  return ?AD_UserManagerAnyPendingUsers@@YA_NQEBUAD_UserManager@@@Z(userManager);
}

/*
==============
AD_UserManagerUpdateAdvance
==============
*/

unsigned int __fastcall AD_UserManagerUpdateAdvance(AD_UserManager *const userManager, const unsigned int handle)
{
  return ?AD_UserManagerUpdateAdvance@@YAIQEAUAD_UserManager@@I@Z(userManager, handle);
}

/*
==============
AD_UserManagerDestroy
==============
*/

void __fastcall AD_UserManagerDestroy(AD_UserManager *const userManager)
{
  ?AD_UserManagerDestroy@@YAXQEAUAD_UserManager@@@Z(userManager);
}

/*
==============
AD_UserManagerUpdateDone
==============
*/

bool __fastcall AD_UserManagerUpdateDone(const unsigned int handle)
{
  return ?AD_UserManagerUpdateDone@@YA_NI@Z(handle);
}

/*
==============
AD_UserManagerDisconnect
==============
*/

void __fastcall AD_UserManagerDisconnect(AD_UserManager *const userManager)
{
  ?AD_UserManagerDisconnect@@YAXQEAUAD_UserManager@@@Z(userManager);
}

/*
==============
AD_UserManagerRemoveUser
==============
*/

unsigned int __fastcall AD_UserManagerRemoveUser(AD_UserManager *const userManager, const AD_UserInfo *const userInfo)
{
  return ?AD_UserManagerRemoveUser@@YAIQEAUAD_UserManager@@QEBUAD_UserInfo@@@Z(userManager, userInfo);
}

/*
==============
AD_UserManagerConnect
==============
*/

void __fastcall AD_UserManagerConnect(AD_UserManager *const userManager)
{
  ?AD_UserManagerConnect@@YAXQEAUAD_UserManager@@@Z(userManager);
}

/*
==============
AD_UserManagerUpdateBegin
==============
*/

unsigned int __fastcall AD_UserManagerUpdateBegin(AD_UserManager *const userManager)
{
  return ?AD_UserManagerUpdateBegin@@YAIQEAUAD_UserManager@@@Z(userManager);
}

/*
==============
AD_UserManagerAddUser
==============
*/

unsigned int __fastcall AD_UserManagerAddUser(AD_UserManager *const userManager, const AD_UserInfo *const userInfo)
{
  return ?AD_UserManagerAddUser@@YAIQEAUAD_UserManager@@QEBUAD_UserInfo@@@Z(userManager, userInfo);
}

/*
==============
AD_UserManagerGetHandle
==============
*/

unsigned int __fastcall AD_UserManagerGetHandle(AD_UserManager *const userManager, const unsigned __int64 userPlatformId)
{
  return ?AD_UserManagerGetHandle@@YA?BIQEAUAD_UserManager@@_K@Z(userManager, userPlatformId);
}

/*
==============
AD_UserManagerGetInfo
==============
*/

const AD_UserInfo *__fastcall AD_UserManagerGetInfo(AD_UserManager *const userManager, const unsigned int handle)
{
  return ?AD_UserManagerGetInfo@@YAPEBUAD_UserInfo@@QEAUAD_UserManager@@I@Z(userManager, handle);
}

/*
==============
AD_UserManagerGetStateChange
==============
*/

AD_UserStateChange __fastcall AD_UserManagerGetStateChange(const AD_UserManager *const userManager, const unsigned int handle)
{
  return ?AD_UserManagerGetStateChange@@YA?AW4AD_UserStateChange@@QEBUAD_UserManager@@I@Z(userManager, handle);
}

/*
==============
AD_UserManagerInit
==============
*/

void __fastcall AD_UserManagerInit(AD_UserManager *const userManager)
{
  ?AD_UserManagerInit@@YAXQEAUAD_UserManager@@@Z(userManager);
}

/*
==============
AD_UserHandleIsValid
==============
*/
bool AD_UserHandleIsValid(const AD_UserManager *const userManager, const unsigned int handle)
{
  return userManager && handle < 2;
}

/*
==============
AD_UserManagerAddUser
==============
*/
__int64 AD_UserManagerAddUser(AD_UserManager *const userManager, const AD_UserInfo *const userInfo)
{
  unsigned int v4; 
  unsigned int v5; 
  AD_UserInfo *m_elements; 
  unsigned int v7; 
  AD_UserInfo *v8; 
  bool v9; 
  unsigned int v11; 
  char *fmt; 

  if ( !userManager && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_user.cpp", 240, ASSERT_TYPE_ASSERT, "userManager != nullptr", "userManager != nullptr") )
    __debugbreak();
  if ( !userInfo && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_user.cpp", 241, ASSERT_TYPE_ASSERT, "userInfo != nullptr", "userInfo != nullptr") )
    __debugbreak();
  while ( AD_InterlockedCompareExchange(&userManager->spinLock.spinLock, 1, 0) )
    AD_Sleep(0);
  v4 = 0;
  v5 = 0;
  m_elements = userManager->pendingUserInfo.m_elements;
  v7 = 2;
  while ( 1 )
  {
    if ( v7 == 2 && m_elements->userId == AD_InvalidUser.userId && m_elements->platformId == AD_InvalidUser.platformId )
      v7 = v5;
    if ( m_elements->userId == userInfo->userId && m_elements->platformId == userInfo->platformId )
      break;
    ++v5;
    ++m_elements;
    if ( v5 >= 2 )
    {
      v8 = userManager->currentUserInfo.m_elements;
      do
      {
        v9 = v8->userId == userInfo->userId && v8->platformId == userInfo->platformId;
        v11 = v4;
        if ( !v9 )
          v11 = v7;
        ++v4;
        ++v8;
        v7 = v11;
      }
      while ( v4 < 2 );
      if ( v11 != 2 )
      {
        while ( userManager->pendingUserInfo.m_elements[v7].userId != userManager->currentUserInfo.m_elements[v7].userId || userManager->pendingUserInfo.m_elements[v7].platformId != userManager->currentUserInfo.m_elements[v7].platformId )
        {
          if ( AD_InterlockedCompareExchange(&userManager->spinLock.spinLock, 0, 1) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_interlocked.h", 44, ASSERT_TYPE_ASSERT, "( AD_InterlockedCompareExchange( spinLock, 0, 1 ) ) == ( 1 )", "( AD_InterlockedCompareExchange( spinLock, 0, 1 ) ) == ( 1 )") )
            __debugbreak();
          LODWORD(fmt) = v7;
          AD_LogFuncf("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_user.cpp", "275", Started, "Waiting for interface to process previous user info for user handle %d", fmt);
          if ( AD_GetLogBreakLevel() == Started )
            __debugbreak();
          AD_Sleep(1u);
          while ( AD_InterlockedCompareExchange(&userManager->spinLock.spinLock, 1, 0) )
            AD_Sleep(0);
        }
        userManager->pendingUserInfo.m_elements[v7] = *userInfo;
      }
      if ( AD_InterlockedCompareExchange(&userManager->spinLock.spinLock, 0, 1) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_interlocked.h", 44, ASSERT_TYPE_ASSERT, "( AD_InterlockedCompareExchange( spinLock, 0, 1 ) ) == ( 1 )", "( AD_InterlockedCompareExchange( spinLock, 0, 1 ) ) == ( 1 )") )
        __debugbreak();
      return v7;
    }
  }
  if ( AD_InterlockedCompareExchange(&userManager->spinLock.spinLock, 0, 1) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_interlocked.h", 44, ASSERT_TYPE_ASSERT, "( AD_InterlockedCompareExchange( spinLock, 0, 1 ) ) == ( 1 )", "( AD_InterlockedCompareExchange( spinLock, 0, 1 ) ) == ( 1 )") )
    __debugbreak();
  LODWORD(fmt) = userInfo->userId;
  AD_LogFuncf("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_user.cpp", "256", Canceled, "Duplicate user initilization for user %d", fmt);
  return v5;
}

/*
==============
AD_UserManagerAnyPendingUsers
==============
*/
char AD_UserManagerAnyPendingUsers(const AD_UserManager *const userManager)
{
  AD_UserInfo *m_elements; 
  unsigned int v3; 

  if ( !userManager && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_user.cpp", 224, ASSERT_TYPE_ASSERT, "userManager != nullptr", "userManager != nullptr") )
    __debugbreak();
  m_elements = userManager->pendingUserInfo.m_elements;
  v3 = 0;
  while ( m_elements->userId == AD_InvalidUser.userId && m_elements->platformId == AD_InvalidUser.platformId )
  {
    ++v3;
    ++m_elements;
    if ( v3 >= 2 )
      return 0;
  }
  return 1;
}

/*
==============
AD_UserManagerConnect
==============
*/
void AD_UserManagerConnect(AD_UserManager *const userManager)
{
  if ( !userManager && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_user.cpp", 63, ASSERT_TYPE_ASSERT, "userManager != nullptr", "userManager != nullptr") )
    __debugbreak();
  AD_UserArrayClear_AD_Array_AD_UserInfo_2_16___(&userManager->currentUserInfo);
  userManager->iteratorInfo = AD_InvalidUser;
}

/*
==============
AD_UserManagerDestroy
==============
*/
void AD_UserManagerDestroy(AD_UserManager *const userManager)
{
  if ( !userManager && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_user.cpp", 54, ASSERT_TYPE_ASSERT, "userManager != nullptr", "userManager != nullptr") )
    __debugbreak();
  AD_UserArrayClear_AD_Array_AD_UserInfo_2_16___(&userManager->currentUserInfo);
  AD_UserArrayClear_AD_Array_AD_UserInfo_2_16___(&userManager->pendingUserInfo);
}

/*
==============
AD_UserManagerDisconnect
==============
*/
void AD_UserManagerDisconnect(AD_UserManager *const userManager)
{
  if ( !userManager && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_user.cpp", 72, ASSERT_TYPE_ASSERT, "userManager != nullptr", "userManager != nullptr") )
    __debugbreak();
  AD_UserArrayClear_AD_Array_AD_UserInfo_2_16___(&userManager->currentUserInfo);
}

/*
==============
AD_UserManagerGetHandle
==============
*/
__int64 AD_UserManagerGetHandle(AD_UserManager *const userManager, const unsigned __int64 userPlatformId)
{
  unsigned int v4; 
  unsigned int v5; 
  __int64 v6; 
  int v7; 

  if ( !userManager && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_user.cpp", 192, ASSERT_TYPE_ASSERT, "userManager != nullptr", "userManager != nullptr") )
    __debugbreak();
  v4 = 2;
  while ( AD_InterlockedCompareExchange(&userManager->spinLock.spinLock, 1, 0) )
    AD_Sleep(0);
  v5 = 0;
  v6 = 0i64;
  while ( userManager->currentUserInfo.m_elements[v6].platformId != userPlatformId )
  {
    if ( (userManager->pendingUserInfo.m_elements[v6].userId != AD_InvalidUser.userId || userManager->pendingUserInfo.m_elements[v6].platformId != AD_InvalidUser.platformId) && userManager->pendingUserInfo.m_elements[v6].platformId == userPlatformId )
    {
      if ( AD_UserHandleIsValid(userManager, v5) )
        goto LABEL_19;
      v7 = 209;
      goto LABEL_17;
    }
    ++v5;
    ++v6;
    if ( v5 >= 2 )
      goto LABEL_20;
  }
  if ( AD_UserHandleIsValid(userManager, v5) )
    goto LABEL_19;
  v7 = 203;
LABEL_17:
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_user.cpp", v7, ASSERT_TYPE_ASSERT, "AD_UserHandleIsValid( userManager, i )", "AD_UserHandleIsValid( userManager, i )") )
    __debugbreak();
LABEL_19:
  v4 = v5;
LABEL_20:
  if ( AD_InterlockedCompareExchange(&userManager->spinLock.spinLock, 0, 1) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_interlocked.h", 44, ASSERT_TYPE_ASSERT, "( AD_InterlockedCompareExchange( spinLock, 0, 1 ) ) == ( 1 )", "( AD_InterlockedCompareExchange( spinLock, 0, 1 ) ) == ( 1 )") )
    __debugbreak();
  return v4;
}

/*
==============
AD_UserManagerGetInfo
==============
*/
const AD_UserInfo *AD_UserManagerGetInfo(AD_UserManager *const userManager, const unsigned int handle)
{
  __int64 v2; 
  AD_SpinLock *p_spinLock; 
  char *v5; 
  char *v6; 

  v2 = handle;
  if ( !userManager && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_user.cpp", 165, ASSERT_TYPE_ASSERT, "userManager != nullptr", "userManager != nullptr") )
    __debugbreak();
  if ( !AD_UserHandleIsValid(userManager, v2) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_user.cpp", 167, ASSERT_TYPE_ASSERT, "AD_UserHandleIsValid( userManager, handle )", "AD_UserHandleIsValid( userManager, handle )") )
    __debugbreak();
  p_spinLock = &userManager->spinLock;
  while ( AD_InterlockedCompareExchange(&userManager->spinLock.spinLock, 1, 0) )
    AD_Sleep(0);
  if ( (unsigned int)v2 >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_containers.h", 154, ASSERT_TYPE_ASSERT, "index < T_MAX", "index < T_MAX") )
    __debugbreak();
  v5 = (char *)userManager + 16 * v2;
  v6 = v5 + 16;
  if ( *((_DWORD *)v5 + 4) == AD_InvalidUser.userId && *((_QWORD *)v5 + 3) == AD_InvalidUser.platformId )
  {
    if ( (unsigned int)v2 >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_containers.h", 154, ASSERT_TYPE_ASSERT, "index < T_MAX", "index < T_MAX") )
      __debugbreak();
    v6 = v5 + 64;
    if ( *((_DWORD *)v5 + 16) == AD_InvalidUser.userId && *((_QWORD *)v5 + 9) == AD_InvalidUser.platformId && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_user.cpp", 179, ASSERT_TYPE_ASSERT, "userManager->pendingUserInfo[handle] != AD_InvalidUser", "userManager->pendingUserInfo[handle] != AD_InvalidUser") )
      __debugbreak();
  }
  if ( (unsigned int)v2 >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_containers.h", 154, ASSERT_TYPE_ASSERT, "index < T_MAX", "index < T_MAX") )
    __debugbreak();
  if ( AD_InterlockedCompareExchange(&p_spinLock->spinLock, 0, 1) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_interlocked.h", 44, ASSERT_TYPE_ASSERT, "( AD_InterlockedCompareExchange( spinLock, 0, 1 ) ) == ( 1 )", "( AD_InterlockedCompareExchange( spinLock, 0, 1 ) ) == ( 1 )") )
    __debugbreak();
  return (const AD_UserInfo *)v6;
}

/*
==============
AD_UserManagerGetStateChange
==============
*/
__int64 AD_UserManagerGetStateChange(const AD_UserManager *const userManager, const unsigned int handle)
{
  __int64 v2; 
  AD_UserInfo *v4; 

  v2 = handle;
  if ( !userManager && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_user.cpp", 141, ASSERT_TYPE_ASSERT, "userManager != nullptr", "userManager != nullptr") )
    __debugbreak();
  if ( !AD_UserHandleIsValid(userManager, v2) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_user.cpp", 143, ASSERT_TYPE_ASSERT, "AD_UserHandleIsValid( userManager, handle )", "AD_UserHandleIsValid( userManager, handle )") )
    __debugbreak();
  if ( (unsigned int)v2 >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_containers.h", 161, ASSERT_TYPE_ASSERT, "index < T_MAX", "index < T_MAX") )
    __debugbreak();
  v4 = &userManager->currentUserInfo.m_elements[v2];
  if ( userManager->iteratorInfo.userId == v4->userId && userManager->iteratorInfo.platformId == v4->platformId )
    return 2i64;
  if ( (unsigned int)v2 >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_containers.h", 161, ASSERT_TYPE_ASSERT, "index < T_MAX", "index < T_MAX") )
    __debugbreak();
  if ( v4->userId == AD_InvalidUser.userId && v4->platformId == AD_InvalidUser.platformId )
  {
    if ( userManager->iteratorInfo.userId == AD_InvalidUser.userId && userManager->iteratorInfo.platformId == AD_InvalidUser.platformId && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_user.cpp", 154, ASSERT_TYPE_ASSERT, "userManager->iteratorInfo != AD_InvalidUser", "userManager->iteratorInfo != AD_InvalidUser") )
      __debugbreak();
    return 0i64;
  }
  else
  {
    if ( (userManager->iteratorInfo.userId != AD_InvalidUser.userId || userManager->iteratorInfo.platformId != AD_InvalidUser.platformId) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_user.cpp", 149, ASSERT_TYPE_ASSERT, "userManager->iteratorInfo == AD_InvalidUser", "userManager->iteratorInfo == AD_InvalidUser") )
      __debugbreak();
    return 1i64;
  }
}

/*
==============
AD_UserManagerInit
==============
*/
void AD_UserManagerInit(AD_UserManager *const userManager)
{
  if ( !userManager && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_user.cpp", 44, ASSERT_TYPE_ASSERT, "userManager != nullptr", "userManager != nullptr") )
    __debugbreak();
  AD_UserArrayClear_AD_Array_AD_UserInfo_2_16___(&userManager->currentUserInfo);
  AD_UserArrayClear_AD_Array_AD_UserInfo_2_16___(&userManager->pendingUserInfo);
  userManager->iteratorInfo = AD_InvalidUser;
}

/*
==============
AD_UserManagerRemoveUser
==============
*/
__int64 AD_UserManagerRemoveUser(AD_UserManager *const userManager, const AD_UserInfo *const userInfo)
{
  AD_SpinLock *p_spinLock; 
  unsigned int v6; 
  AD_UserInfo *m_elements; 
  unsigned int v8; 
  char *v9; 
  char *fmt; 

  if ( !userManager && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_user.cpp", 292, ASSERT_TYPE_ASSERT, "userManager != nullptr", "userManager != nullptr") )
    __debugbreak();
  if ( !userInfo && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_user.cpp", 293, ASSERT_TYPE_ASSERT, "userInfo != nullptr", "userInfo != nullptr") )
    __debugbreak();
  if ( userInfo->userId == AD_InvalidUser.userId && userInfo->platformId == AD_InvalidUser.platformId )
  {
    AD_LogFunc("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_user.cpp", "297", Error, "Tried to deactivate an invalid user");
    if ( (unsigned int)AD_GetLogBreakLevel() <= Error )
      __debugbreak();
    return 2i64;
  }
  else
  {
    p_spinLock = &userManager->spinLock;
    while ( AD_InterlockedCompareExchange(&userManager->spinLock.spinLock, 1, 0) )
      AD_Sleep(0);
    v6 = 0;
    m_elements = userManager->pendingUserInfo.m_elements;
    v8 = 2;
    while ( m_elements->userId != userInfo->userId || m_elements->platformId != userInfo->platformId )
    {
      ++v6;
      ++m_elements;
      if ( v6 >= 2 )
      {
        AD_LogFunc("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_user.cpp", "328", Error, "Tried to deactivate an unknown user");
        if ( (unsigned int)AD_GetLogBreakLevel() <= Error )
          __debugbreak();
        goto LABEL_20;
      }
    }
    v8 = v6;
    v9 = (char *)userManager + 16 * v6;
    while ( *((_DWORD *)v9 + 16) != *((_DWORD *)v9 + 4) || *((_QWORD *)v9 + 9) != *((_QWORD *)v9 + 3) )
    {
      if ( AD_InterlockedCompareExchange(&p_spinLock->spinLock, 0, 1) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_interlocked.h", 44, ASSERT_TYPE_ASSERT, "( AD_InterlockedCompareExchange( spinLock, 0, 1 ) ) == ( 1 )", "( AD_InterlockedCompareExchange( spinLock, 0, 1 ) ) == ( 1 )") )
        __debugbreak();
      LODWORD(fmt) = v6;
      AD_LogFuncf("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_user.cpp", "318", Started, "Waiting for interface to process previous user info for user handle %d", fmt);
      if ( AD_GetLogBreakLevel() == Started )
        __debugbreak();
      AD_Sleep(1u);
      while ( AD_InterlockedCompareExchange(&p_spinLock->spinLock, 1, 0) )
        AD_Sleep(0);
    }
    userManager->pendingUserInfo.m_elements[v6] = AD_InvalidUser;
LABEL_20:
    if ( AD_InterlockedCompareExchange(&p_spinLock->spinLock, 0, 1) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_interlocked.h", 44, ASSERT_TYPE_ASSERT, "( AD_InterlockedCompareExchange( spinLock, 0, 1 ) ) == ( 1 )", "( AD_InterlockedCompareExchange( spinLock, 0, 1 ) ) == ( 1 )") )
      __debugbreak();
    return v8;
  }
}

/*
==============
AD_UserManagerUpdateAdvance
==============
*/
__int64 AD_UserManagerUpdateAdvance(AD_UserManager *const userManager, const unsigned int handle)
{
  __int64 v3; 
  AD_UserInfo iteratorInfo; 
  unsigned int v5; 
  unsigned int v6; 
  AD_UserInfo *v7; 

  v3 = handle;
  if ( !userManager && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_user.cpp", 105, ASSERT_TYPE_ASSERT, "userManager != nullptr", "userManager != nullptr") )
    __debugbreak();
  if ( !AD_UserHandleIsValid(userManager, v3) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_user.cpp", 107, ASSERT_TYPE_ASSERT, "AD_UserHandleIsValid( userManager, handle )", "AD_UserHandleIsValid( userManager, handle )") )
    __debugbreak();
  while ( AD_InterlockedCompareExchange(&userManager->spinLock.spinLock, 1, 0) )
    AD_Sleep(0);
  iteratorInfo = userManager->iteratorInfo;
  if ( (unsigned int)v3 >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_containers.h", 154, ASSERT_TYPE_ASSERT, "index < T_MAX", "index < T_MAX") )
    __debugbreak();
  userManager->currentUserInfo.m_elements[v3] = iteratorInfo;
  userManager->iteratorInfo = AD_InvalidUser;
  v5 = 2;
  v6 = v3 + 1;
  if ( v6 < 2 )
  {
    v7 = &userManager->currentUserInfo.m_elements[v6];
    while ( v7[3].userId == v7->userId && v7[3].platformId == v7->platformId )
    {
      ++v6;
      ++v7;
      if ( v6 >= 2 )
        goto LABEL_23;
    }
    if ( (userManager->iteratorInfo.userId != AD_InvalidUser.userId || userManager->iteratorInfo.platformId != AD_InvalidUser.platformId) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_user.cpp", 120, ASSERT_TYPE_ASSERT, "userManager->iteratorInfo == AD_InvalidUser", "userManager->iteratorInfo == AD_InvalidUser") )
      __debugbreak();
    v5 = v6;
    userManager->iteratorInfo = userManager->pendingUserInfo.m_elements[v6];
  }
LABEL_23:
  if ( AD_InterlockedCompareExchange(&userManager->spinLock.spinLock, 0, 1) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_interlocked.h", 44, ASSERT_TYPE_ASSERT, "( AD_InterlockedCompareExchange( spinLock, 0, 1 ) ) == ( 1 )", "( AD_InterlockedCompareExchange( spinLock, 0, 1 ) ) == ( 1 )") )
    __debugbreak();
  return v5;
}

/*
==============
AD_UserManagerUpdateBegin
==============
*/
__int64 AD_UserManagerUpdateBegin(AD_UserManager *const userManager)
{
  unsigned int v2; 
  AD_UserInfo *m_elements; 
  unsigned int v4; 

  if ( !userManager && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_user.cpp", 80, ASSERT_TYPE_ASSERT, "userManager != nullptr", "userManager != nullptr") )
    __debugbreak();
  while ( AD_InterlockedCompareExchange(&userManager->spinLock.spinLock, 1, 0) )
    AD_Sleep(0);
  v2 = 2;
  m_elements = userManager->currentUserInfo.m_elements;
  v4 = 0;
  while ( m_elements[3].userId == m_elements->userId && m_elements[3].platformId == m_elements->platformId )
  {
    ++v4;
    ++m_elements;
    if ( v4 >= 2 )
      goto LABEL_16;
  }
  if ( (userManager->iteratorInfo.userId != AD_InvalidUser.userId || userManager->iteratorInfo.platformId != AD_InvalidUser.platformId) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_user.cpp", 90, ASSERT_TYPE_ASSERT, "userManager->iteratorInfo == AD_InvalidUser", "userManager->iteratorInfo == AD_InvalidUser") )
    __debugbreak();
  v2 = v4;
  userManager->iteratorInfo = userManager->pendingUserInfo.m_elements[v4];
LABEL_16:
  if ( AD_InterlockedCompareExchange(&userManager->spinLock.spinLock, 0, 1) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_interlocked.h", 44, ASSERT_TYPE_ASSERT, "( AD_InterlockedCompareExchange( spinLock, 0, 1 ) ) == ( 1 )", "( AD_InterlockedCompareExchange( spinLock, 0, 1 ) ) == ( 1 )") )
    __debugbreak();
  return v2;
}

/*
==============
AD_UserManagerUpdateDone
==============
*/
bool AD_UserManagerUpdateDone(const unsigned int handle)
{
  return handle >= 2;
}

