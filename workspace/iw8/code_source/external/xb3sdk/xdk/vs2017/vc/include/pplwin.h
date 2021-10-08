/*
==============
Concurrency::details::_DefaultPPLTaskScheduler::_PPLTaskChore::_Callback
==============
*/

void __fastcall Concurrency::details::_DefaultPPLTaskScheduler::_PPLTaskChore::_Callback(void *_Args)
{
  ?_Callback@_PPLTaskChore@_DefaultPPLTaskScheduler@details@Concurrency@@CAXPEAX@Z(_Args);
}

/*
==============
Concurrency::get_ambient_scheduler
==============
*/

const std::shared_ptr<Concurrency::scheduler_interface> *__fastcall Concurrency::get_ambient_scheduler()
{
  return ?get_ambient_scheduler@Concurrency@@YAAEBV?$shared_ptr@Uscheduler_interface@Concurrency@@@std@@XZ();
}

/*
==============
Concurrency::details::_DefaultPPLTaskScheduler::schedule
==============
*/

void __fastcall Concurrency::details::_DefaultPPLTaskScheduler::schedule(Concurrency::details::_DefaultPPLTaskScheduler *this, void (__fastcall *_Proc)(void *), void *_Param)
{
  ?schedule@_DefaultPPLTaskScheduler@details@Concurrency@@UEAAXP6AXPEAX@Z0@Z(this, _Proc, _Param);
}

/*
==============
Concurrency::details::_TaskCollectionBaseImpl::_Complete
==============
*/

void __fastcall Concurrency::details::_TaskCollectionBaseImpl::_Complete(Concurrency::details::_TaskCollectionBaseImpl *this)
{
  ?_Complete@_TaskCollectionBaseImpl@details@Concurrency@@QEAAXXZ(this);
}

/*
==============
Concurrency::details::_TaskProcHandle::~_TaskProcHandle
==============
*/

void __fastcall Concurrency::details::_TaskProcHandle::~_TaskProcHandle(Concurrency::details::_TaskProcHandle *this)
{
  ??1_TaskProcHandle@details@Concurrency@@UEAA@XZ(this);
}

/*
==============
Concurrency::details::_TaskCollectionBaseImpl::_Wait
==============
*/

void __fastcall Concurrency::details::_TaskCollectionBaseImpl::_Wait(Concurrency::details::_TaskCollectionBaseImpl *this)
{
  ?_Wait@_TaskCollectionBaseImpl@details@Concurrency@@QEAAXXZ(this);
}

/*
==============
Concurrency::details::_TaskProcHandle::_RunChoreBridge
==============
*/

void __fastcall Concurrency::details::_TaskProcHandle::_RunChoreBridge(void *_Parameter)
{
  ?_RunChoreBridge@_TaskProcHandle@details@Concurrency@@SAXPEAX@Z(_Parameter);
}

/*
==============
Concurrency::details::_TaskProcHandle::~_TaskProcHandle
==============
*/
void Concurrency::details::_TaskProcHandle::~_TaskProcHandle(Concurrency::details::_TaskProcHandle *this)
{
  this->__vftable = (Concurrency::details::_TaskProcHandle_vtbl *)&Concurrency::details::_TaskProcHandle::`vftable';
}

/*
==============
Concurrency::details::_DefaultPPLTaskScheduler::_PPLTaskChore::_Callback
==============
*/
void Concurrency::details::_DefaultPPLTaskScheduler::_PPLTaskChore::_Callback(void *_Args)
{
  struct Concurrency::details::_Threadpool_chore *v2; 

  (*((void (__fastcall **)(_QWORD))_Args + 3))(*((_QWORD *)_Args + 4));
  Concurrency::details::_Release_chore((Concurrency::details *)_Args, v2);
  operator delete(_Args, 0x28ui64);
}

/*
==============
Concurrency::details::_TaskCollectionBaseImpl::_Complete
==============
*/
void Concurrency::details::_TaskCollectionBaseImpl::_Complete(Concurrency::details::_TaskCollectionBaseImpl *this)
{
  int v2; 
  int v3; 
  int v4; 

  v2 = Mtx_lock_0((_Mtx_t)&this->_M_Cs);
  if ( v2 )
    std::_Throw_C_error(v2);
  if ( this->_M_State < _PendingCancel )
    this->_M_State = _PendingCancel;
  v3 = Cnd_broadcast_0((_Cnd_t)this);
  if ( v3 )
    std::_Throw_C_error(v3);
  v4 = Mtx_unlock_0((_Mtx_t)&this->_M_Cs);
  if ( v4 )
    std::_Throw_C_error(v4);
}

/*
==============
Concurrency::details::_TaskProcHandle::_RunChoreBridge
==============
*/
void Concurrency::details::_TaskProcHandle::_RunChoreBridge(void *_Parameter)
{
  (*(void (__fastcall **)(void *))(*(_QWORD *)_Parameter + 8i64))(_Parameter);
  (**(void (__fastcall ***)(void *, __int64))_Parameter)(_Parameter, 1i64);
}

/*
==============
Concurrency::details::_TaskCollectionBaseImpl::_Wait
==============
*/
void Concurrency::details::_TaskCollectionBaseImpl::_Wait(Concurrency::details::_TaskCollectionBaseImpl *this)
{
  std::mutex *p_M_Cs; 
  int v3; 
  int v4; 
  int v5; 

  p_M_Cs = &this->_M_Cs;
  v3 = Mtx_lock_0((_Mtx_t)&this->_M_Cs);
  if ( v3 )
    std::_Throw_C_error(v3);
  while ( this->_M_State < _PendingCancel )
  {
    v4 = Cnd_wait_0((_Cnd_t)this, (_Mtx_t)p_M_Cs);
    if ( v4 )
      std::_Throw_C_error(v4);
  }
  v5 = Mtx_unlock_0((_Mtx_t)p_M_Cs);
  if ( v5 )
    std::_Throw_C_error(v5);
}

/*
==============
Concurrency::get_ambient_scheduler
==============
*/
const std::shared_ptr<Concurrency::scheduler_interface> *Concurrency::get_ambient_scheduler()
{
  std::exception_ptr *v1; 
  std::exception_ptr _Rhs; 
  __int64 v3[2]; 
  std::exception_ptr v4; 
  char v5; 

  v5 = 0;
  __ExceptionPtrCreate(&_Rhs);
  v3[0] = (__int64)&_Rhs;
  v3[1] = (__int64)&v5;
  if ( !std::_Execute_once(&`Concurrency::details::_GetStaticAmbientSchedulerRef'::`2'::_Flag, (int (__stdcall *)(void *, void *, void **))std::_Callback_once<std::tuple<_lambda_0e64988457575224279dcb6d61e61bdd_ &&,std::exception_ptr &>,std::integer_sequence<unsigned __int64,0>,1>, v3) )
  {
    if ( __ExceptionPtrToBool(&_Rhs) )
    {
      std::exception_ptr::exception_ptr(&v4, &_Rhs);
      std::rethrow_exception(v1);
    }
    std::_XGetLastError();
    JUMPOUT(0x14265FEA0i64);
  }
  __ExceptionPtrDestroy(&_Rhs);
  return (const std::shared_ptr<Concurrency::scheduler_interface> *)`Concurrency::details::_GetStaticAmbientSchedulerRef'::`2'::_S_scheduler_address;
}

/*
==============
Concurrency::details::_DefaultPPLTaskScheduler::schedule
==============
*/
void Concurrency::details::_DefaultPPLTaskScheduler::schedule(Concurrency::details::_DefaultPPLTaskScheduler *this, void (*_Proc)(void *), void *_Param)
{
  Concurrency::details::_DefaultPPLTaskScheduler::_PPLTaskChore *v5; 
  struct Concurrency::details::_Threadpool_chore *v6; 
  Concurrency::details::_DefaultPPLTaskScheduler::_PPLTaskChore *v7; 
  stdext::exception *v8; 
  std::runtime_error v9; 

  v5 = (Concurrency::details::_DefaultPPLTaskScheduler::_PPLTaskChore *)operator new(0x28ui64);
  v7 = v5;
  if ( v5 )
  {
    v5->_M_Chore._M_work = NULL;
    v5->_M_Chore._M_callback = Concurrency::details::_DefaultPPLTaskScheduler::_PPLTaskChore::_Callback;
    v5->_M_Chore._M_data = v5;
    v5->_M_proc = _Proc;
    v5->_M_param = _Param;
  }
  else
  {
    v7 = NULL;
  }
  if ( Concurrency::details::_Schedule_chore((Concurrency::details *)v7, v6) )
  {
    if ( v7 )
      Concurrency::details::_DefaultPPLTaskScheduler::_PPLTaskChore::`scalar deleting destructor'(v7, 1u);
    std::runtime_error::runtime_error(&v9, "Fail to schedule the chore!");
    stdext::exception::_Raise(v8);
  }
}

