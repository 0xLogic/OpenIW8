/*
==============
bdPlatformUser::getPlatformUser
==============
*/

const bdPlatformUser *__fastcall bdPlatformUser::getPlatformUser(const bdPlatformUser *result)
{
  return ?getPlatformUser@bdPlatformUser@@SA?BV1@XZ(result);
}

/*
==============
bdPlatformUser::bdPlatformUser
==============
*/

void __fastcall bdPlatformUser::bdPlatformUser(bdPlatformUser *this)
{
  ??0bdPlatformUser@@QEAA@XZ(this);
}

/*
==============
bdPlatformUser::bdPlatformUser
==============
*/

void __fastcall bdPlatformUser::bdPlatformUser(bdPlatformUser *this, bdReference<bdWinRTPtr> user)
{
  ??0bdPlatformUser@@QEAA@V?$bdReference@VbdWinRTPtr@@@@@Z(this, user);
}

/*
==============
bdPlatformUser::deletePlatformUser
==============
*/

void __fastcall bdPlatformUser::deletePlatformUser(bdPlatformUser user)
{
  ?deletePlatformUser@bdPlatformUser@@SAXV1@@Z(user);
}

/*
==============
bdPlatformUser::bdPlatformUser
==============
*/
void bdPlatformUser::bdPlatformUser(bdPlatformUser *this, bdReference<bdWinRTPtr> user)
{
  bdWinRTPtr_vtbl *v4; 

  this->m_user.m_ptr = NULL;
  if ( (bdPlatformUser *)user.m_ptr != this )
  {
    v4 = user.m_ptr->__vftable;
    this->m_user.m_ptr = (bdWinRTPtr *)user.m_ptr->__vftable;
    if ( v4 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v4[1], 1u);
  }
  if ( user.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&user.m_ptr->__vftable[1], 0xFFFFFFFF) == 1 )
  {
    if ( user.m_ptr->__vftable )
      (*(void (__fastcall **)(bdWinRTPtr_vtbl *, __int64))user.m_ptr->~bdReferencable)(user.m_ptr->__vftable, 1i64);
    user.m_ptr->__vftable = NULL;
  }
}

/*
==============
bdPlatformUser::bdPlatformUser
==============
*/
void bdPlatformUser::bdPlatformUser(bdPlatformUser *this)
{
  this->m_user.m_ptr = NULL;
}

/*
==============
bdPlatformUser::deletePlatformUser
==============
*/
void bdPlatformUser::deletePlatformUser(bdPlatformUser user)
{
  bdWinRTPtr_vtbl *v1; 

  v1 = user.m_user.m_ptr->__vftable;
  if ( user.m_user.m_ptr->__vftable )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)&v1[1], 1u);
    (*(void (__fastcall **)(bdWinRTPtr_vtbl *, __int64))v1->~bdReferencable)(v1, 1i64);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v1[1], 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(bdWinRTPtr_vtbl *, __int64))v1->~bdReferencable)(v1, 1i64);
  }
  if ( user.m_user.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&user.m_user.m_ptr->__vftable[1], 0xFFFFFFFF) == 1 )
  {
    if ( user.m_user.m_ptr->__vftable )
      (*(void (__fastcall **)(bdWinRTPtr_vtbl *, __int64))user.m_user.m_ptr->~bdReferencable)(user.m_user.m_ptr->__vftable, 1i64);
    user.m_user.m_ptr->__vftable = NULL;
  }
}

/*
==============
bdPlatformUser::getPlatformUser
==============
*/
const bdPlatformUser *bdPlatformUser::getPlatformUser(const bdPlatformUser *result)
{
  IUnknown *v2; 
  unsigned int v3; 
  int ActivationFactoryByPCWSTR; 
  int v5; 
  __int64 v6; 
  __int64 v7; 
  int v8; 
  int v9; 
  int v10; 
  __int64 v11; 
  __int64 v12; 
  int v13; 
  __int64 v14; 
  __int64 v15; 
  int v16; 
  bdWinRTPtr *v17; 
  bdWinRTPtr *v18; 
  bdWinRTPtr *v19; 
  Platform::Guid pGuid; 
  __int64 v22; 
  void *ppActivationFactory; 
  Platform::Guid v24; 
  int v25; 
  __int64 v26; 
  __int64 v27; 
  void *v28; 
  __int64 v29; 
  __int64 v30; 
  __int64 v31; 
  char v32; 
  unsigned int v33; 
  IUnknown *v34; 

  v31 = -2i64;
  v25 = 0;
  v2 = NULL;
  v34 = NULL;
  v3 = 0;
  pGuid.__vftable = (Platform::Object_vtbl *)0x4A507FC6B4F23A93i64;
  *(_DWORD *)&pGuid.__d = 9786289;
  *(_DWORD *)&pGuid.__h = 1352546326;
  ppActivationFactory = NULL;
  ActivationFactoryByPCWSTR = __winRT::__getActivationFactoryByPCWSTR((void *)L"Windows.Xbox.System.User", &pGuid, &ppActivationFactory);
  if ( ActivationFactoryByPCWSTR < 0 )
LABEL_73:
    __abi_WinRTraiseException(ActivationFactoryByPCWSTR);
  while ( 1 )
  {
    v26 = 0i64;
    v5 = (*(__int64 (__fastcall **)(void *, __int64 *))(*(_QWORD *)ppActivationFactory + 72i64))(ppActivationFactory, &v26);
    if ( v5 < 0 )
      __abi_WinRTraiseException(v5);
    v6 = v26;
    v7 = v26;
    if ( v26 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 8i64))(v26);
      v6 = v26;
    }
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16i64))(v6);
    v22 = v7;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8i64))(v7);
    v22 = v7;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16i64))(v7);
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8i64))(v7);
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16i64))(v7);
    if ( ppActivationFactory )
      (*(void (__fastcall **)(void *))(*(_QWORD *)ppActivationFactory + 16i64))(ppActivationFactory);
    v22 = v7;
    v8 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v7 + 56i64))(v7, &v33);
    if ( v8 < 0 )
      __abi_WinRTraiseException(v8);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16i64))(v7);
    if ( v3 >= v33 )
      break;
    v24.__vftable = (Platform::Object_vtbl *)0x4A507FC6B4F23A93i64;
    *(_DWORD *)&v24.__d = 9786289;
    *(_DWORD *)&v24.__h = 1352546326;
    v28 = NULL;
    v9 = __winRT::__getActivationFactoryByPCWSTR((void *)L"Windows.Xbox.System.User", &v24, &v28);
    if ( v9 < 0 )
      __abi_WinRTraiseException(v9);
    v27 = 0i64;
    v10 = (*(__int64 (__fastcall **)(void *, __int64 *))(*(_QWORD *)v28 + 72i64))(v28, &v27);
    if ( v10 < 0 )
      __abi_WinRTraiseException(v10);
    v11 = v27;
    v12 = v27;
    if ( v27 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 8i64))(v27);
      v11 = v27;
    }
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16i64))(v11);
    v22 = v12;
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8i64))(v12);
    v22 = v12;
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16i64))(v12);
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8i64))(v12);
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16i64))(v12);
    if ( v28 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v28 + 16i64))(v28);
    v22 = v12;
    v29 = 0i64;
    v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v12 + 48i64))(v12, v3, &v29);
    if ( v13 < 0 )
      __abi_WinRTraiseException(v13);
    v14 = v29;
    v15 = v29;
    if ( v29 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 8i64))(v29);
      v14 = v29;
    }
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16i64))(v14);
    v30 = v15;
    if ( (IUnknown *)v15 != v2 )
    {
      if ( v15 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8i64))(v15);
      if ( v2 )
        v2->Release(v2);
      v2 = (IUnknown *)v15;
      v34 = (IUnknown *)v15;
    }
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16i64))(v15);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16i64))(v12);
    v16 = ((__int64 (__fastcall *)(IUnknown *, char *))v2->__vftable[3].Release)(v2, &v32);
    if ( v16 < 0 )
      __abi_WinRTraiseException(v16);
    if ( v32 )
      break;
    ++v3;
    pGuid.__vftable = (Platform::Object_vtbl *)0x4A507FC6B4F23A93i64;
    *(_DWORD *)&pGuid.__d = 9786289;
    *(_DWORD *)&pGuid.__h = 1352546326;
    ppActivationFactory = NULL;
    ActivationFactoryByPCWSTR = __winRT::__getActivationFactoryByPCWSTR((void *)L"Windows.Xbox.System.User", &pGuid, &ppActivationFactory);
    if ( ActivationFactoryByPCWSTR < 0 )
      goto LABEL_73;
  }
  v17 = (bdWinRTPtr *)bdMemory::allocate(0x18ui64);
  v30 = (__int64)v17;
  if ( v17 )
  {
    bdWinRTPtr::bdWinRTPtr(v17, v2);
    v19 = v18;
  }
  else
  {
    v19 = NULL;
  }
  if ( v19 )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)&v19->m_refCount, 1u);
    _InterlockedExchangeAdd((volatile signed __int32 *)&v19->m_refCount, 1u);
    v2 = v34;
  }
  result->m_user.m_ptr = NULL;
  if ( &v22 != (__int64 *)result )
  {
    result->m_user.m_ptr = v19;
    if ( !v19 )
      goto LABEL_65;
    _InterlockedExchangeAdd((volatile signed __int32 *)&v19->m_refCount, 1u);
    v2 = v34;
  }
  if ( v19 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v19->m_refCount, 0xFFFFFFFF) == 1 )
      ((void (__fastcall *)(bdWinRTPtr *, __int64))v19->~bdReferencable)(v19, 1i64);
    v2 = v34;
  }
LABEL_65:
  v25 = 1;
  if ( v19 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v19->m_refCount, 0xFFFFFFFF) == 1 )
      ((void (__fastcall *)(bdWinRTPtr *, __int64))v19->~bdReferencable)(v19, 1i64);
    v2 = v34;
  }
  if ( v2 )
    v2->Release(v2);
  return result;
}

