/*
==============
Concurrency::details::_CancellationTokenState::_DeregisterCallback
==============
*/

void __fastcall Concurrency::details::_CancellationTokenState::_DeregisterCallback(Concurrency::details::_CancellationTokenState *this, Concurrency::details::_CancellationTokenRegistration *_PRegistration)
{
  ?_DeregisterCallback@_CancellationTokenState@details@Concurrency@@QEAAXPEAV_CancellationTokenRegistration@23@@Z(this, _PRegistration);
}

/*
==============
Concurrency::details::_RefCounter::_Destroy
==============
*/

void __fastcall Concurrency::details::_RefCounter::_Destroy(Concurrency::details::_RefCounter *this)
{
  ?_Destroy@_RefCounter@details@Concurrency@@MEAAXXZ(this);
}

/*
==============
Concurrency::cancellation_token::~cancellation_token
==============
*/

void __fastcall Concurrency::cancellation_token::~cancellation_token(Concurrency::cancellation_token *this)
{
  ??1cancellation_token@Concurrency@@QEAA@XZ(this);
}

/*
==============
Concurrency::cancellation_token_source::cancel
==============
*/

void __fastcall Concurrency::cancellation_token_source::cancel(Concurrency::cancellation_token_source *this)
{
  ?cancel@cancellation_token_source@Concurrency@@QEBAXXZ(this);
}

/*
==============
Concurrency::details::_CancellationTokenState::TokenRegistrationContainer::~TokenRegistrationContainer
==============
*/

void __fastcall Concurrency::details::_CancellationTokenState::TokenRegistrationContainer::~TokenRegistrationContainer(Concurrency::details::_CancellationTokenState::TokenRegistrationContainer *this)
{
  ??1TokenRegistrationContainer@_CancellationTokenState@details@Concurrency@@QEAA@XZ(this);
}

/*
==============
Concurrency::details::_RefCounter::~_RefCounter
==============
*/

void __fastcall Concurrency::details::_RefCounter::~_RefCounter(Concurrency::details::_RefCounter *this)
{
  ??1_RefCounter@details@Concurrency@@UEAA@XZ(this);
}

/*
==============
Concurrency::details::_CancellationTokenState::_RegisterCallback
==============
*/

void __fastcall Concurrency::details::_CancellationTokenState::_RegisterCallback(Concurrency::details::_CancellationTokenState *this, Concurrency::details::_CancellationTokenRegistration *_PRegistration)
{
  ?_RegisterCallback@_CancellationTokenState@details@Concurrency@@QEAAXPEAV_CancellationTokenRegistration@23@@Z(this, _PRegistration);
}

/*
==============
Concurrency::details::_CancellationTokenRegistration::~_CancellationTokenRegistration
==============
*/

void __fastcall Concurrency::details::_CancellationTokenRegistration::~_CancellationTokenRegistration(Concurrency::details::_CancellationTokenRegistration *this)
{
  ??1_CancellationTokenRegistration@details@Concurrency@@MEAA@XZ(this);
}

/*
==============
Concurrency::cancellation_token_source::~cancellation_token_source
==============
*/

void __fastcall Concurrency::cancellation_token_source::~cancellation_token_source(Concurrency::cancellation_token_source *this)
{
  ??1cancellation_token_source@Concurrency@@QEAA@XZ(this);
}

/*
==============
Concurrency::details::_CancellationTokenRegistration::_Invoke
==============
*/

void __fastcall Concurrency::details::_CancellationTokenRegistration::_Invoke(Concurrency::details::_CancellationTokenRegistration *this)
{
  ?_Invoke@_CancellationTokenRegistration@details@Concurrency@@AEAAXXZ(this);
}

/*
==============
Concurrency::details::_CancellationTokenRegistration::~_CancellationTokenRegistration
==============
*/
void Concurrency::details::_CancellationTokenRegistration::~_CancellationTokenRegistration(Concurrency::details::_CancellationTokenRegistration *this)
{
  this->__vftable = (Concurrency::details::_CancellationTokenRegistration_vtbl *)&Concurrency::details::_CancellationTokenRegistration::`vftable';
  Mtx_destroy_in_situ_0((_Mtx_t)&this->_M_Mutex);
  Cnd_destroy_in_situ_0((_Cnd_t)&this->_M_CondVar);
  this->__vftable = (Concurrency::details::_CancellationTokenRegistration_vtbl *)&Concurrency::details::_RefCounter::`vftable';
}

/*
==============
Concurrency::details::_RefCounter::~_RefCounter
==============
*/
void Concurrency::details::_RefCounter::~_RefCounter(Concurrency::details::_RefCounter *this)
{
  this->__vftable = (Concurrency::details::_RefCounter_vtbl *)&Concurrency::details::_RefCounter::`vftable';
}

/*
==============
Concurrency::cancellation_token::~cancellation_token
==============
*/
void Concurrency::cancellation_token::~cancellation_token(Concurrency::cancellation_token *this)
{
  Concurrency::details::_CancellationTokenState *M_Impl; 

  M_Impl = this->_M_Impl;
  if ( M_Impl && _InterlockedExchangeAdd(&M_Impl->_M_refCount, 0xFFFFFFFF) == 1 )
    M_Impl->_Destroy(M_Impl);
  this->_M_Impl = NULL;
}

/*
==============
Concurrency::details::_CancellationTokenState::_DeregisterCallback
==============
*/
void Concurrency::details::_CancellationTokenState::_DeregisterCallback(Concurrency::details::_CancellationTokenState *this, Concurrency::details::_CancellationTokenRegistration *_PRegistration)
{
  char v4; 
  std::mutex *p_M_listLock; 
  int v6; 
  Concurrency::details::_CancellationTokenState::TokenRegistrationContainer::_Node *M_begin; 
  Concurrency::details::_CancellationTokenState::TokenRegistrationContainer::_Node *v8; 
  Concurrency::details::_CancellationTokenState::TokenRegistrationContainer::_Node *M_next; 
  int v10; 
  signed __int32 v11; 
  Concurrency::details::platform *v12; 
  int v13; 
  int v14; 
  int v15; 
  std::mutex *v16; 

  v4 = 0;
  p_M_listLock = &this->_M_listLock;
  v16 = &this->_M_listLock;
  v6 = Mtx_lock_0((_Mtx_t)&this->_M_listLock);
  if ( v6 )
    std::_Throw_C_error(v6);
  M_begin = this->_M_registrations._M_begin;
  if ( M_begin )
  {
    v8 = NULL;
    while ( M_begin->_M_token != _PRegistration )
    {
      v8 = M_begin;
      M_begin = M_begin->_M_next;
      if ( !M_begin )
        goto LABEL_14;
    }
    M_next = M_begin->_M_next;
    if ( v8 )
      v8->_M_next = M_next;
    else
      this->_M_registrations._M_begin = M_next;
    if ( !M_begin->_M_next )
      this->_M_registrations._M_last = v8;
    operator delete(M_begin, 0x10ui64);
LABEL_14:
    _InterlockedExchange((volatile __int32 *)&_PRegistration->_M_state, 2);
    if ( _InterlockedExchangeAdd(&_PRegistration->_M_refCount, 0xFFFFFFFF) == 1 )
      ((void (__fastcall *)(Concurrency::details::_CancellationTokenRegistration *, Concurrency::details::_CancellationTokenState::TokenRegistrationContainer::_Node *))_PRegistration->_Destroy)(_PRegistration, v8);
    p_M_listLock = v16;
  }
  else
  {
    v4 = 1;
  }
  v10 = Mtx_unlock_0((_Mtx_t)p_M_listLock);
  if ( v10 )
    std::_Throw_C_error(v10);
  if ( v4 )
  {
    v11 = _InterlockedCompareExchange((volatile signed __int32 *)&_PRegistration->_M_state, 1, 0);
    if ( v11 )
    {
      v12 = (Concurrency::details::platform *)(unsigned int)(v11 - 1);
      if ( (unsigned int)v12 > 2 && v11 != Concurrency::details::platform::GetCurrentThreadId(v12) && _InterlockedExchange((volatile __int32 *)&_PRegistration->_M_state, 2) != 3 )
      {
        v13 = Mtx_lock_0((_Mtx_t)&_PRegistration->_M_Mutex);
        if ( v13 )
          std::_Throw_C_error(v13);
        while ( !_PRegistration->_M_signaled )
        {
          v14 = Cnd_wait_0((_Cnd_t)&_PRegistration->_M_CondVar, (_Mtx_t)&_PRegistration->_M_Mutex);
          if ( v14 )
            std::_Throw_C_error(v14);
        }
        v15 = Mtx_unlock_0((_Mtx_t)&_PRegistration->_M_Mutex);
        if ( v15 )
          std::_Throw_C_error(v15);
      }
    }
  }
}

/*
==============
Concurrency::details::_RefCounter::_Destroy
==============
*/
void Concurrency::details::_RefCounter::_Destroy(Concurrency::details::_RefCounter *this)
{
  if ( this )
    ((void (__fastcall *)(Concurrency::details::_RefCounter *, __int64))this->~_RefCounter)(this, 1i64);
}

/*
==============
Concurrency::details::_CancellationTokenRegistration::_Invoke
==============
*/
void Concurrency::details::_CancellationTokenRegistration::_Invoke(Concurrency::details::_CancellationTokenRegistration *this)
{
  signed __int32 CurrentThreadId; 
  signed __int32 v3; 
  int v4; 
  int v5; 
  int v6; 

  CurrentThreadId = Concurrency::details::platform::GetCurrentThreadId((Concurrency::details::platform *)this);
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)&this->_M_state, CurrentThreadId, 0) )
  {
    this->_Exec(this);
    v3 = _InterlockedCompareExchange((volatile signed __int32 *)&this->_M_state, 3, CurrentThreadId);
    if ( CurrentThreadId != v3 )
      CurrentThreadId = v3;
    if ( CurrentThreadId == 2 )
    {
      v4 = Mtx_lock_0((_Mtx_t)&this->_M_Mutex);
      if ( v4 )
        std::_Throw_C_error(v4);
      this->_M_signaled = 1;
      v5 = Mtx_unlock_0((_Mtx_t)&this->_M_Mutex);
      if ( v5 )
        std::_Throw_C_error(v5);
      v6 = Cnd_broadcast_0((_Cnd_t)&this->_M_CondVar);
      if ( v6 )
        std::_Throw_C_error(v6);
    }
  }
  if ( _InterlockedExchangeAdd(&this->_M_refCount, 0xFFFFFFFF) == 1 )
    this->_Destroy(this);
}

/*
==============
Concurrency::details::_CancellationTokenState::_RegisterCallback
==============
*/
void Concurrency::details::_CancellationTokenState::_RegisterCallback(Concurrency::details::_CancellationTokenState *this, Concurrency::details::_CancellationTokenRegistration *_PRegistration)
{
  char v4; 
  int v5; 
  Concurrency::details::_CancellationTokenState::TokenRegistrationContainer::_Node *v6; 
  Concurrency::details::_CancellationTokenState::TokenRegistrationContainer::_Node *v7; 
  int v8; 
  _Mtx_internal_imp_t *p_M_listLock; 

  _InterlockedExchange((volatile __int32 *)&_PRegistration->_M_state, 0);
  _InterlockedIncrement(&_PRegistration->_M_refCount);
  _PRegistration->_M_pTokenState = this;
  v4 = 1;
  if ( this->_M_stateFlag._My_val )
    goto LABEL_15;
  p_M_listLock = (_Mtx_internal_imp_t *)&this->_M_listLock;
  v5 = Mtx_lock_0((_Mtx_t)&this->_M_listLock);
  if ( v5 )
    std::_Throw_C_error(v5);
  if ( !this->_M_stateFlag._My_val )
  {
    v4 = 0;
    v6 = (Concurrency::details::_CancellationTokenState::TokenRegistrationContainer::_Node *)operator new(0x10ui64);
    v7 = v6;
    if ( v6 )
    {
      v6->_M_token = _PRegistration;
      v6->_M_next = NULL;
    }
    else
    {
      v7 = NULL;
    }
    if ( this->_M_registrations._M_begin )
      this->_M_registrations._M_last->_M_next = v7;
    else
      this->_M_registrations._M_begin = v7;
    this->_M_registrations._M_last = v7;
  }
  v8 = Mtx_unlock_0(p_M_listLock);
  if ( v8 )
    std::_Throw_C_error(v8);
  if ( v4 )
LABEL_15:
    Concurrency::details::_CancellationTokenRegistration::_Invoke(_PRegistration);
}

/*
==============
Concurrency::details::_CancellationTokenState::TokenRegistrationContainer::~TokenRegistrationContainer
==============
*/
void Concurrency::details::_CancellationTokenState::TokenRegistrationContainer::~TokenRegistrationContainer(Concurrency::details::_CancellationTokenState::TokenRegistrationContainer *this)
{
  Concurrency::details::_CancellationTokenState::TokenRegistrationContainer::_Node *M_begin; 
  Concurrency::details::_CancellationTokenState::TokenRegistrationContainer::_Node *v2; 

  M_begin = this->_M_begin;
  while ( M_begin )
  {
    v2 = M_begin;
    M_begin = M_begin->_M_next;
    operator delete(v2, 0x10ui64);
  }
}

/*
==============
Concurrency::cancellation_token_source::~cancellation_token_source
==============
*/
void Concurrency::cancellation_token_source::~cancellation_token_source(Concurrency::cancellation_token_source *this)
{
  Concurrency::details::_CancellationTokenState *M_Impl; 

  M_Impl = this->_M_Impl;
  if ( M_Impl )
  {
    if ( _InterlockedExchangeAdd(&M_Impl->_M_refCount, 0xFFFFFFFF) == 1 )
      M_Impl->_Destroy(M_Impl);
  }
}

/*
==============
Concurrency::cancellation_token_source::cancel
==============
*/
void Concurrency::cancellation_token_source::cancel(Concurrency::cancellation_token_source *this)
{
  Concurrency::details::_CancellationTokenState *M_Impl; 
  int v4; 
  Concurrency::details::_CancellationTokenState::TokenRegistrationContainer::_Node *M_begin; 
  int v6; 
  Concurrency::details::_CancellationTokenState::TokenRegistrationContainer::_Node *v7; 
  Concurrency::details::_CancellationTokenState::TokenRegistrationContainer::_Node *v8; 
  Concurrency::details::_CancellationTokenState::TokenRegistrationContainer::_Node *ptr; 

  M_Impl = this->_M_Impl;
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)&this->_M_Impl->_M_stateFlag, 1, 0) )
  {
    __asm { vpxor   xmm0, xmm0, xmm0 }
    v4 = Mtx_lock_0((_Mtx_t)&M_Impl->_M_listLock);
    if ( v4 )
      std::_Throw_C_error(v4);
    M_begin = M_Impl->_M_registrations._M_begin;
    ptr = M_begin;
    M_Impl->_M_registrations._M_begin = NULL;
    M_Impl->_M_registrations._M_last = NULL;
    v6 = Mtx_unlock_0((_Mtx_t)&M_Impl->_M_listLock);
    if ( v6 )
      std::_Throw_C_error(v6);
    for ( ; M_begin; M_begin = M_begin->_M_next )
      Concurrency::details::_CancellationTokenRegistration::_Invoke(M_begin->_M_token);
    _InterlockedExchange((volatile __int32 *)&M_Impl->_M_stateFlag, 2);
    v7 = ptr;
    while ( v7 )
    {
      v8 = v7;
      v7 = v7->_M_next;
      operator delete(v8, 0x10ui64);
    }
  }
}

