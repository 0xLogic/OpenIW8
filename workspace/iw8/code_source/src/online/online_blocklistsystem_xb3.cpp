/*
==============
Online_BlockList::IsBlockedOnPlatform
==============
*/

bool __fastcall Online_BlockList::IsBlockedOnPlatform(Online_BlockList *this, const int controllerIndex, const XUID xuid)
{
  return ?IsBlockedOnPlatform@Online_BlockList@@AEAA_NHUXUID@@@Z(this, controllerIndex, xuid);
}

/*
==============
Online_BlockList::ProcessPlatformBlockList
==============
*/

bool __fastcall Online_BlockList::ProcessPlatformBlockList(Online_BlockList *this, const int controllerIndex)
{
  return ?ProcessPlatformBlockList@Online_BlockList@@AEAA_NH@Z(this, controllerIndex);
}

/*
==============
Online_BlockList::IsBlockedOnPlatform
==============
*/

bool __fastcall Online_BlockList::IsBlockedOnPlatform(Online_BlockList *this, const int controllerIndex, const unsigned __int64 platformId)
{
  return ?IsBlockedOnPlatform@Online_BlockList@@AEAA_NH_K@Z(this, controllerIndex, platformId);
}

/*
==============
Online_BlockList::IsBlockedOnPlatform
==============
*/
bool Online_BlockList::IsBlockedOnPlatform(Online_BlockList *this, const int controllerIndex, const XUID xuid)
{
  unsigned int indexOut; 

  indexOut = 0;
  return PlatformBlocklist::GetPlayerIndex(&this->m_platformBlocklist[controllerIndex], xuid, &indexOut);
}

/*
==============
Online_BlockList::IsBlockedOnPlatform
==============
*/
char Online_BlockList::IsBlockedOnPlatform(Online_BlockList *this, const int controllerIndex, const unsigned __int64 platformId)
{
  __int64 v3; 
  __int64 v5; 
  unsigned int numBlocked; 
  int v7; 
  $F35780646DC5060C8402B127BA24C162 *i; 
  int v11; 

  v3 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v11 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_blocklistsystem_xb3.cpp", 93, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v11) )
      __debugbreak();
  }
  v5 = v3;
  if ( !s_blockedList[v3].fetched )
    return 0;
  numBlocked = s_blockedList[v5].numBlocked;
  v7 = 0;
  if ( !numBlocked )
    return 0;
  for ( i = &s_blockedList[v5]; i->users[0] != platformId; i = ($F35780646DC5060C8402B127BA24C162 *)((char *)i + 8) )
  {
    if ( ++v7 >= numBlocked )
      return 0;
  }
  return 1;
}

/*
==============
Online_BlockList::ProcessPlatformBlockList
==============
*/
char Online_BlockList::ProcessPlatformBlockList(Online_BlockList *this, const int controllerIndex)
{
  Microsoft::Xbox::Services::XboxLiveContext *UsersXboxLiveContext; 
  int v4; 
  __int64 v5; 
  __int64 v6; 
  int v7; 
  __int64 v8; 
  Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Platform::String _> _> *v9; 
  const std::shared_ptr<Concurrency::scheduler_interface> *ambient_scheduler; 
  std::_Ref_count_base *Rep; 
  Concurrency::task<void> *v13; 
  volatile signed __int32 *v14; 
  std::_Ref_count_base *v15; 
  Concurrency::task_options v17; 
  __int64 v18; 
  __int64 v19; 
  Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Platform::String _> _> *v20; 
  Concurrency::scheduler_interface *Ptr; 
  Online_BlockList::ProcessPlatformBlockList::__l10::<lambda_355431da82b1b6cface45a4091ede42a> _Func; 
  Concurrency::task<Windows::Foundation::Collections::IVectorView<Platform::String _> _> v23; 
  __int64 v24; 
  Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Platform::String _> _> *v25; 

  v18 = -2i64;
  UsersXboxLiveContext = Live_GetUsersXboxLiveContext(controllerIndex);
  v24 = 0i64;
  if ( !UsersXboxLiveContext && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_blocklistsystem_xb3.cpp", 37, ASSERT_TYPE_ASSERT, "(liveContext != nullptr)", (const char *)&queryFormat, "liveContext != nullptr") )
    __debugbreak();
  v24 = 0i64;
  v4 = UsersXboxLiveContext->__abi_get_PrivacyService(UsersXboxLiveContext, (Microsoft::Xbox::Services::Privacy::PrivacyService **)&v24);
  if ( v4 < 0 )
    __abi_WinRTraiseException(v4);
  v5 = v24;
  v6 = v24;
  if ( v24 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 8i64))(v24);
    v5 = v24;
  }
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16i64))(v5);
  v19 = v6;
  v25 = NULL;
  v7 = (*(__int64 (__fastcall **)(__int64, Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Platform::String _> _> **))(*(_QWORD *)v6 + 48i64))(v6, &v25);
  if ( v7 < 0 )
    __abi_WinRTraiseException(v7);
  v8 = (__int64)v25;
  v9 = v25;
  if ( v25 )
  {
    v25->__abi_AddRef(v25);
    v8 = (__int64)v25;
  }
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16i64))(v8);
  v20 = v9;
  ambient_scheduler = Concurrency::get_ambient_scheduler();
  Rep = ambient_scheduler->_Rep;
  if ( Rep )
  {
    _InterlockedIncrement((volatile signed __int32 *)&Rep->_Uses);
    Rep = ambient_scheduler->_Rep;
  }
  Ptr = ambient_scheduler->_Ptr;
  v17._M_Scheduler._M_sharedScheduler._Ptr = Ptr;
  v17._M_Scheduler._M_sharedScheduler._Rep = Rep;
  v17._M_Scheduler._M_scheduler = Ptr;
  v17._M_CancellationToken._M_Impl = NULL;
  v17._M_ContinuationContext._M_context._M_captureMethod = 1i64;
  v17._M_ContinuationContext._M_RunInline = 0;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&v17._M_InternalTaskOptions._M_presetCreationCallstack._M_frames._Mypair._Myval2._Myfirst = _XMM0;
  v17._M_InternalTaskOptions._M_presetCreationCallstack._M_frames._Mypair._Myval2._Myend = NULL;
  v17._M_InternalTaskOptions._M_presetCreationCallstack._M_SingleFrame = NULL;
  v17._M_InternalTaskOptions._M_hasPresetCreationCallstack = 0;
  *(_WORD *)&v17._M_HasCancellationToken = 0;
  v13 = (Concurrency::task<void> *)Concurrency::create_task<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Platform::String __gc *> __gc *> __gc *>(&v23, v9, &v17);
  Concurrency::task_Windows::Foundation::Collections::IVectorView_Platform::String______::then__lambda_355431da82b1b6cface45a4091ede42a___(v13, &_Func);
  v14 = (volatile signed __int32 *)_Func.__this;
  if ( _Func.__this )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&_Func.__this->m_nextSystem, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v14)(v14);
      if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8i64))(v14);
    }
  }
  v15 = v23._M_Impl._Rep;
  if ( v23._M_Impl._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v23._M_Impl._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      v15->_Destroy(v15);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v15->_Weaks, 0xFFFFFFFF) == 1 )
        v15->_Delete_this(v15);
    }
  }
  if ( v9 )
    v9->__abi_Release(v9);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16i64))(v6);
  UsersXboxLiveContext->__abi_Release(UsersXboxLiveContext);
  return 1;
}

