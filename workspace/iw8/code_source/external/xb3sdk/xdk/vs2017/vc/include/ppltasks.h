/*
==============
Concurrency::details::_TaskProcThunk::_Bridge
==============
*/

void __fastcall Concurrency::details::_TaskProcThunk::_Bridge(void *_PData)
{
  ?_Bridge@_TaskProcThunk@details@Concurrency@@SAXPEAX@Z(_PData);
}

/*
==============
Concurrency::details::_ExceptionHolder::_RethrowUserException
==============
*/

void __fastcall __noreturn Concurrency::details::_ExceptionHolder::_RethrowUserException(Concurrency::details::_ExceptionHolder *this)
{
  ?_RethrowUserException@_ExceptionHolder@details@Concurrency@@QEAAXXZ(this);
}

/*
==============
Concurrency::details::_Task_impl_base::_CancelWithException
==============
*/

bool __fastcall Concurrency::details::_Task_impl_base::_CancelWithException(Concurrency::details::_Task_impl_base *this, const std::exception_ptr *_Exception)
{
  return ?_CancelWithException@_Task_impl_base@details@Concurrency@@QEAA_NAEBVexception_ptr@std@@@Z(this, _Exception);
}

/*
==============
Concurrency::task<void>::_CreateImpl
==============
*/

void __fastcall Concurrency::task<void>::_CreateImpl(Concurrency::task<void> *this, Concurrency::details::_CancellationTokenState *_Ct, Concurrency::scheduler_ptr *_Scheduler)
{
  ?_CreateImpl@?$task@X@Concurrency@@QEAAXPEAV_CancellationTokenState@details@2@Uscheduler_ptr@2@@Z(this, _Ct, _Scheduler);
}

/*
==============
Concurrency::details::_ContextCallback::~_ContextCallback
==============
*/

void __fastcall Concurrency::details::_ContextCallback::~_ContextCallback(Concurrency::details::_ContextCallback *this)
{
  ??1_ContextCallback@details@Concurrency@@QEAA@XZ(this);
}

/*
==============
Concurrency::details::_Task_impl_base::~_Task_impl_base
==============
*/

void __fastcall Concurrency::details::_Task_impl_base::~_Task_impl_base(Concurrency::details::_Task_impl_base *this)
{
  ??1_Task_impl_base@details@Concurrency@@UEAA@XZ(this);
}

/*
==============
Concurrency::details::_Task_impl_base::_RunTaskContinuations
==============
*/

void __fastcall Concurrency::details::_Task_impl_base::_RunTaskContinuations(Concurrency::details::_Task_impl_base *this)
{
  ?_RunTaskContinuations@_Task_impl_base@details@Concurrency@@QEAAXXZ(this);
}

/*
==============
Concurrency::details::_Task_impl_base::_Wait
==============
*/

Concurrency::task_group_status __fastcall Concurrency::details::_Task_impl_base::_Wait(Concurrency::details::_Task_impl_base *this)
{
  return ?_Wait@_Task_impl_base@details@Concurrency@@QEAA?AW4task_group_status@3@XZ(this);
}

/*
==============
Concurrency::details::_Task_impl_base::_ScheduleContinuationTask
==============
*/

void __fastcall Concurrency::details::_Task_impl_base::_ScheduleContinuationTask(Concurrency::details::_Task_impl_base *this, Concurrency::details::_ContinuationTaskHandleBase *_PTaskHandle)
{
  ?_ScheduleContinuationTask@_Task_impl_base@details@Concurrency@@QEAAXPEAU_ContinuationTaskHandleBase@23@@Z(this, _PTaskHandle);
}

/*
==============
Concurrency::details::_TaskProcThunk::_Holder::~_Holder
==============
*/

void __fastcall Concurrency::details::_TaskProcThunk::_Holder::~_Holder(Concurrency::details::_TaskProcThunk::_Holder *this)
{
  ??1_Holder@_TaskProcThunk@details@Concurrency@@QEAA@XZ(this);
}

/*
==============
Concurrency::details::_ContinuationTaskHandleBase::~_ContinuationTaskHandleBase
==============
*/

void __fastcall Concurrency::details::_ContinuationTaskHandleBase::~_ContinuationTaskHandleBase(Concurrency::details::_ContinuationTaskHandleBase *this)
{
  ??1_ContinuationTaskHandleBase@details@Concurrency@@UEAA@XZ(this);
}

/*
==============
Concurrency::details::_TaskWorkItemRAIILogger::~_TaskWorkItemRAIILogger
==============
*/

void __fastcall Concurrency::details::_TaskWorkItemRAIILogger::~_TaskWorkItemRAIILogger(Concurrency::details::_TaskWorkItemRAIILogger *this)
{
  ??1_TaskWorkItemRAIILogger@details@Concurrency@@QEAA@XZ(this);
}

/*
==============
Concurrency::details::_Task_impl_base::_RegisterCancellation
==============
*/

void __fastcall Concurrency::details::_Task_impl_base::_RegisterCancellation(Concurrency::details::_Task_impl_base *this, std::weak_ptr<Concurrency::details::_Task_impl_base> *_WeakPtr)
{
  ?_RegisterCancellation@_Task_impl_base@details@Concurrency@@QEAAXV?$weak_ptr@U_Task_impl_base@details@Concurrency@@@std@@@Z(this, _WeakPtr);
}

/*
==============
Concurrency::details::_Task_impl_base::_ScheduleContinuation
==============
*/

void __fastcall Concurrency::details::_Task_impl_base::_ScheduleContinuation(Concurrency::details::_Task_impl_base *this, Concurrency::details::_ContinuationTaskHandleBase *_PTaskHandle)
{
  ?_ScheduleContinuation@_Task_impl_base@details@Concurrency@@QEAAXPEAU_ContinuationTaskHandleBase@23@@Z(this, _PTaskHandle);
}

/*
==============
Concurrency::details::_ExceptionHolder::~_ExceptionHolder
==============
*/

void __fastcall Concurrency::details::_ExceptionHolder::~_ExceptionHolder(Concurrency::details::_ExceptionHolder *this)
{
  ??1_ExceptionHolder@details@Concurrency@@QEAA@XZ(this);
}

/*
==============
Concurrency::details::_Task_impl_base::_ScheduleTask
==============
*/

void __fastcall Concurrency::details::_Task_impl_base::_ScheduleTask(Concurrency::details::_Task_impl_base *this, Concurrency::details::_TaskProcHandle *_PTaskHandle, Concurrency::details::_TaskInliningMode _InliningMode)
{
  ?_ScheduleTask@_Task_impl_base@details@Concurrency@@QEAAXPEAU_TaskProcHandle@23@W4_TaskInliningMode@23@@Z(this, _PTaskHandle, _InliningMode);
}

/*
==============
Concurrency::details::_IAsyncActionToAsyncOperationConverter::_IAsyncActionToAsyncOperationConverter
==============
*/

void __fastcall Concurrency::details::_IAsyncActionToAsyncOperationConverter::_IAsyncActionToAsyncOperationConverter(Concurrency::details::_IAsyncActionToAsyncOperationConverter *this, Windows::Foundation::IAsyncAction *_Operation)
{
  ??0_IAsyncActionToAsyncOperationConverter@details@Concurrency@@QE$AAA@PE$AAUIAsyncAction@Foundation@Windows@@@Z(this, _Operation);
}

/*
==============
Concurrency::details::_ThenImplOptions::_ThenImplOptions
==============
*/

void __fastcall Concurrency::details::_ThenImplOptions::_ThenImplOptions(Concurrency::details::_ThenImplOptions *this, Concurrency::details::_CancellationTokenState *_Token_state, const Concurrency::task_continuation_context *_Continuation_context, Concurrency::scheduler_ptr *_PScheduler, Concurrency::details::_TaskCreationCallstack *_Creation_stack, Concurrency::details::_TaskInliningMode _Inlining_mode)
{
  ??0_ThenImplOptions@details@Concurrency@@QEAA@PEAV_CancellationTokenState@12@PEBVtask_continuation_context@2@Uscheduler_ptr@2@V_TaskCreationCallstack@12@W4_TaskInliningMode@12@@Z(this, _Token_state, _Continuation_context, _PScheduler, _Creation_stack, _Inlining_mode);
}

/*
==============
Concurrency::details::_Task_impl_base::_Task_impl_base
==============
*/

void __fastcall Concurrency::details::_Task_impl_base::_Task_impl_base(Concurrency::details::_Task_impl_base *this, Concurrency::details::_CancellationTokenState *_PTokenState, Concurrency::scheduler_ptr *_Scheduler_arg)
{
  ??0_Task_impl_base@details@Concurrency@@QEAA@PEAV_CancellationTokenState@12@Uscheduler_ptr@2@@Z(this, _PTokenState, _Scheduler_arg);
}

/*
==============
Concurrency::details::_DefaultTaskHelper::_NoCallOnDefaultTask_ErrorImpl
==============
*/

void __noreturn Concurrency::details::_DefaultTaskHelper::_NoCallOnDefaultTask_ErrorImpl(void)
{
  ?_NoCallOnDefaultTask_ErrorImpl@_DefaultTaskHelper@details@Concurrency@@SAXXZ();
}

/*
==============
Concurrency::details::_ThenImplOptions::_CreateOptions
==============
*/

Concurrency::details::_ThenImplOptions *__fastcall Concurrency::details::_ThenImplOptions::_CreateOptions(Concurrency::details::_ThenImplOptions *result, const Concurrency::task_options *_Task_Options, const Concurrency::task_continuation_context *_ContinuationContext, const Concurrency::scheduler_ptr *impl_scheduler)
{
  return ?_CreateOptions@_ThenImplOptions@details@Concurrency@@SA?AU123@AEBVtask_options@3@AEBVtask_continuation_context@3@AEBUscheduler_ptr@3@@Z(result, _Task_Options, _ContinuationContext, impl_scheduler);
}

/*
==============
Concurrency::details::_Task_impl_base::_Task_impl_base
==============
*/
void Concurrency::details::_Task_impl_base::_Task_impl_base(Concurrency::details::_Task_impl_base *this, Concurrency::details::_CancellationTokenState *_PTokenState, Concurrency::scheduler_ptr *_Scheduler_arg)
{
  std::_Ref_count_base *Rep; 
  Concurrency::scheduler_interface *Ptr; 
  Concurrency::scheduler_interface *M_scheduler; 
  std::_Ref_count_base *v9; 
  Concurrency::scheduler_interface *v10; 

  this->__vftable = (Concurrency::details::_Task_impl_base_vtbl *)&Concurrency::details::_Task_impl_base::`vftable';
  this->_M_TaskState = _Created;
  *(_WORD *)&this->_M_fFromAsync = 0;
  this->_M_exceptionHolder._Ptr = NULL;
  this->_M_exceptionHolder._Rep = NULL;
  Mtx_init_in_situ_0((_Mtx_t)&this->_M_ContinuationsCritSec, 2);
  this->_M_Continuations = NULL;
  this->_M_pRegistration = NULL;
  Rep = _Scheduler_arg->_M_sharedScheduler._Rep;
  if ( Rep )
  {
    _InterlockedIncrement((volatile signed __int32 *)&Rep->_Uses);
    Rep = _Scheduler_arg->_M_sharedScheduler._Rep;
  }
  Ptr = _Scheduler_arg->_M_sharedScheduler._Ptr;
  M_scheduler = _Scheduler_arg->_M_scheduler;
  v10 = _Scheduler_arg->_M_sharedScheduler._Ptr;
  Cnd_init_in_situ_0((_Cnd_t)&this->_M_TaskCollection);
  Mtx_init_in_situ_0((_Mtx_t)&this->_M_TaskCollection._M_Cs, 2);
  this->_M_TaskCollection._M_pScheduler._M_sharedScheduler._Ptr = NULL;
  this->_M_TaskCollection._M_pScheduler._M_sharedScheduler._Rep = NULL;
  if ( Rep )
  {
    _InterlockedIncrement((volatile signed __int32 *)&Rep->_Uses);
    Ptr = v10;
  }
  this->_M_TaskCollection._M_pScheduler._M_sharedScheduler._Ptr = Ptr;
  this->_M_TaskCollection._M_pScheduler._M_sharedScheduler._Rep = Rep;
  this->_M_TaskCollection._M_pScheduler._M_scheduler = M_scheduler;
  this->_M_TaskCollection._M_State = _Created;
  if ( Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      Rep->_Destroy(Rep);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&Rep->_Weaks, 0xFFFFFFFF) == 1 )
        Rep->_Delete_this(Rep);
    }
  }
  this->_M_pTaskCreationCallstack._M_frames._Mypair._Myval2._Myfirst = NULL;
  this->_M_pTaskCreationCallstack._M_frames._Mypair._Myval2._Mylast = NULL;
  this->_M_pTaskCreationCallstack._M_frames._Mypair._Myval2._Myend = NULL;
  this->_M_pTaskCreationCallstack._M_SingleFrame = NULL;
  this->_M_taskEventLogger._M_task = this;
  *(_WORD *)&this->_M_taskEventLogger._M_scheduled = 0;
  this->_M_pTokenState = _PTokenState;
  if ( _PTokenState != (Concurrency::details::_CancellationTokenState *)2 )
    _InterlockedIncrement(&_PTokenState->_M_refCount);
  v9 = _Scheduler_arg->_M_sharedScheduler._Rep;
  if ( v9 && _InterlockedExchangeAdd((volatile signed __int32 *)&v9->_Uses, 0xFFFFFFFF) == 1 )
  {
    v9->_Destroy(v9);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v9->_Weaks, 0xFFFFFFFF) == 1 )
      v9->_Delete_this(v9);
  }
}

/*
==============
Concurrency::details::_ThenImplOptions::_ThenImplOptions
==============
*/
void Concurrency::details::_ThenImplOptions::_ThenImplOptions(Concurrency::details::_ThenImplOptions *this, Concurrency::details::_CancellationTokenState *_Token_state, const Concurrency::task_continuation_context *_Continuation_context, Concurrency::scheduler_ptr *_PScheduler, Concurrency::details::_TaskCreationCallstack *_Creation_stack, Concurrency::details::_TaskInliningMode _Inlining_mode)
{
  std::_Ref_count_base *Rep; 
  std::_Ref_count_base *v10; 
  void **Myfirst; 
  unsigned __int64 v12; 

  this->_PTokenState = _Token_state;
  this->_Scheduler._M_sharedScheduler._Ptr = NULL;
  this->_Scheduler._M_sharedScheduler._Rep = NULL;
  Rep = _PScheduler->_M_sharedScheduler._Rep;
  if ( Rep )
    _InterlockedIncrement((volatile signed __int32 *)&Rep->_Uses);
  this->_Scheduler = *_PScheduler;
  Concurrency::details::_TaskCreationCallstack::_TaskCreationCallstack(&this->_CreationStack, _Creation_stack);
  this->_InliningMode = _Inlining_mode;
  this->_PContinuationContext = (Concurrency::task_continuation_context *)_Continuation_context;
  v10 = _PScheduler->_M_sharedScheduler._Rep;
  if ( v10 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v10->_Uses, 0xFFFFFFFF) == 1 )
    {
      v10->_Destroy(v10);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v10->_Weaks, 0xFFFFFFFF) == 1 )
        v10->_Delete_this(v10);
    }
  }
  Myfirst = _Creation_stack->_M_frames._Mypair._Myval2._Myfirst;
  if ( Myfirst )
  {
    v12 = ((char *)_Creation_stack->_M_frames._Mypair._Myval2._Myend - (char *)Myfirst) & 0xFFFFFFFFFFFFFFF8ui64;
    if ( v12 >= 0x1000 )
    {
      v12 += 39i64;
      if ( (unsigned __int64)((char *)Myfirst - (_BYTE *)*(Myfirst - 1) - 8) > 0x1F )
        _invalid_parameter_noinfo_noreturn();
      Myfirst = (void **)*(Myfirst - 1);
    }
    operator delete(Myfirst, v12);
    _Creation_stack->_M_frames._Mypair._Myval2._Myfirst = NULL;
    _Creation_stack->_M_frames._Mypair._Myval2._Mylast = NULL;
    _Creation_stack->_M_frames._Mypair._Myval2._Myend = NULL;
  }
}

/*
==============
Concurrency::details::_ContextCallback::~_ContextCallback
==============
*/
void Concurrency::details::_ContextCallback::~_ContextCallback(Concurrency::details::_ContextCallback *this)
{
  Concurrency::details::_ContextCallback::_Reset(this);
}

/*
==============
Concurrency::details::_ContinuationTaskHandleBase::~_ContinuationTaskHandleBase
==============
*/
void Concurrency::details::_ContinuationTaskHandleBase::~_ContinuationTaskHandleBase(Concurrency::details::_ContinuationTaskHandleBase *this)
{
  this->__vftable = (Concurrency::details::_ContinuationTaskHandleBase_vtbl *)&Concurrency::details::_ContinuationTaskHandleBase::`vftable';
  Concurrency::details::_ContextCallback::_Reset(&this->_M_continuationContext);
  this->__vftable = (Concurrency::details::_ContinuationTaskHandleBase_vtbl *)&Concurrency::details::_TaskProcHandle::`vftable';
}

/*
==============
Concurrency::details::_ExceptionHolder::~_ExceptionHolder
==============
*/
void Concurrency::details::_ExceptionHolder::~_ExceptionHolder(Concurrency::details::_ExceptionHolder *this)
{
  Concurrency::details *v2; 
  void **Myfirst; 
  unsigned __int64 v4; 

  if ( !this->_M_exceptionObserved._My_val )
  {
    Concurrency::details::_ExceptionHolder::ReportUnhandledError(this);
    __debugbreak();
    Concurrency::details::_ReportUnobservedException(v2);
  }
  Myfirst = this->_M_stackTrace._M_frames._Mypair._Myval2._Myfirst;
  if ( Myfirst )
  {
    v4 = 8 * (this->_M_stackTrace._M_frames._Mypair._Myval2._Myend - Myfirst);
    if ( v4 >= 0x1000 )
    {
      v4 += 39i64;
      if ( (unsigned __int64)((char *)Myfirst - (_BYTE *)*(Myfirst - 1) - 8) > 0x1F )
        _invalid_parameter_noinfo_noreturn();
      Myfirst = (void **)*(Myfirst - 1);
    }
    operator delete(Myfirst, v4);
    this->_M_stackTrace._M_frames._Mypair._Myval2._Myfirst = NULL;
    this->_M_stackTrace._M_frames._Mypair._Myval2._Mylast = NULL;
    this->_M_stackTrace._M_frames._Mypair._Myval2._Myend = NULL;
  }
  __ExceptionPtrDestroy(&this->_M_stdException);
}

/*
==============
Concurrency::details::_TaskProcThunk::_Holder::~_Holder
==============
*/
void Concurrency::details::_TaskProcThunk::_Holder::~_Holder(Concurrency::details::_TaskProcThunk::_Holder *this, __int64 a2)
{
  Concurrency::details::_TaskProcThunk *M_pThunk; 
  Concurrency::details::_TaskProcThunk *v3; 

  M_pThunk = this->_M_pThunk;
  if ( this->_M_pThunk )
  {
    v3 = (Concurrency::details::_TaskProcThunk *)M_pThunk->_M_func._Mystorage._Ptrs[7];
    if ( v3 )
    {
      LOBYTE(a2) = v3 != M_pThunk;
      ((void (__fastcall *)(Concurrency::details::_TaskProcThunk *, __int64))v3->_M_func._Mystorage._Ptrs[0][4].__vftable)(v3, a2);
      M_pThunk->_M_func._Mystorage._Ptrs[7] = NULL;
    }
    operator delete(M_pThunk, 0x40ui64);
  }
}

/*
==============
Concurrency::details::_TaskWorkItemRAIILogger::~_TaskWorkItemRAIILogger
==============
*/
void Concurrency::details::_TaskWorkItemRAIILogger::~_TaskWorkItemRAIILogger(Concurrency::details::_TaskWorkItemRAIILogger *this)
{
  Concurrency::details::_TaskEventLogger::_LogWorkItemCompleted(this->_M_logger);
}

/*
==============
Concurrency::details::_Task_impl_base::~_Task_impl_base
==============
*/
void Concurrency::details::_Task_impl_base::~_Task_impl_base(Concurrency::details::_Task_impl_base *this)
{
  Concurrency::details::_CancellationTokenState *M_pTokenState; 
  void **Myfirst; 
  unsigned __int64 v4; 
  std::_Ref_count_base *Rep; 

  this->__vftable = (Concurrency::details::_Task_impl_base_vtbl *)&Concurrency::details::_Task_impl_base::`vftable';
  M_pTokenState = this->_M_pTokenState;
  if ( M_pTokenState != (Concurrency::details::_CancellationTokenState *)2 && _InterlockedExchangeAdd(&M_pTokenState->_M_refCount, 0xFFFFFFFF) == 1 )
    M_pTokenState->_Destroy(M_pTokenState);
  Myfirst = this->_M_pTaskCreationCallstack._M_frames._Mypair._Myval2._Myfirst;
  if ( Myfirst )
  {
    v4 = ((char *)this->_M_pTaskCreationCallstack._M_frames._Mypair._Myval2._Myend - (char *)Myfirst) & 0xFFFFFFFFFFFFFFF8ui64;
    if ( v4 >= 0x1000 )
    {
      v4 += 39i64;
      if ( (unsigned __int64)((char *)Myfirst - (_BYTE *)*(Myfirst - 1) - 8) > 0x1F )
        _invalid_parameter_noinfo_noreturn();
      Myfirst = (void **)*(Myfirst - 1);
    }
    operator delete(Myfirst, v4);
    this->_M_pTaskCreationCallstack._M_frames._Mypair._Myval2._Myfirst = NULL;
    this->_M_pTaskCreationCallstack._M_frames._Mypair._Myval2._Mylast = NULL;
    this->_M_pTaskCreationCallstack._M_frames._Mypair._Myval2._Myend = NULL;
  }
  Concurrency::details::_TaskCollectionBaseImpl::~_TaskCollectionBaseImpl(&this->_M_TaskCollection);
  Mtx_destroy_in_situ_0((_Mtx_t)&this->_M_ContinuationsCritSec);
  Rep = this->_M_exceptionHolder._Rep;
  if ( Rep && _InterlockedExchangeAdd((volatile signed __int32 *)&Rep->_Uses, 0xFFFFFFFF) == 1 )
  {
    Rep->_Destroy(Rep);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&Rep->_Weaks, 0xFFFFFFFF) == 1 )
      Rep->_Delete_this(Rep);
  }
}

/*
==============
Concurrency::details::_TaskProcThunk::_Bridge
==============
*/
void Concurrency::details::_TaskProcThunk::_Bridge(void *_PData)
{
  __int64 v2; 
  __int64 v3; 
  void *v4; 

  v2 = *((_QWORD *)_PData + 7);
  if ( !v2 )
  {
    std::_Xbad_function_call();
    JUMPOUT(0x14265C42Ci64);
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16i64))(v2);
  v4 = (void *)*((_QWORD *)_PData + 7);
  if ( v4 )
  {
    LOBYTE(v3) = v4 != _PData;
    (*(void (__fastcall **)(void *, __int64))(*(_QWORD *)v4 + 32i64))(v4, v3);
    *((_QWORD *)_PData + 7) = 0i64;
  }
  operator delete(_PData, 0x40ui64);
}

/*
==============
Concurrency::details::_Task_impl_base::_CancelWithException
==============
*/
_BOOL8 Concurrency::details::_Task_impl_base::_CancelWithException(Concurrency::details::_Task_impl_base *this, const std::exception_ptr *_Exception)
{
  bool (__fastcall *CancelAndRunContinuations)(Concurrency::details::_Task_impl_base *, bool, bool, bool, const std::shared_ptr<Concurrency::details::_ExceptionHolder> *); 
  _DWORD *v5; 
  _BOOL8 v6; 
  __int64 v7; 
  bool v8; 
  volatile signed __int32 *v9; 
  void **Myfirst; 
  unsigned __int64 v11; 
  __int64 v13; 
  volatile signed __int32 *v14; 
  Concurrency::details::_TaskCreationCallstack __that; 

  CancelAndRunContinuations = this->_CancelAndRunContinuations;
  Concurrency::details::_TaskCreationCallstack::_TaskCreationCallstack(&__that, &this->_M_pTaskCreationCallstack);
  v5 = operator new(0x48ui64);
  v7 = (__int64)v5;
  if ( v5 )
  {
    v5[2] = 1;
    v5[3] = 1;
    *(_QWORD *)v5 = &std::_Ref_count_obj<Concurrency::details::_ExceptionHolder>::`vftable';
    v5[4] = 0;
    __ExceptionPtrCopy(v5 + 6, _Exception);
    Concurrency::details::_TaskCreationCallstack::_TaskCreationCallstack((Concurrency::details::_TaskCreationCallstack *)(v7 + 40), &__that);
  }
  else
  {
    v7 = 0i64;
  }
  v13 = v7 + 16;
  v14 = (volatile signed __int32 *)v7;
  LOBYTE(v6) = 1;
  v8 = CancelAndRunContinuations(this, 1, v6, 0, (const std::shared_ptr<Concurrency::details::_ExceptionHolder> *)&v13);
  v9 = v14;
  if ( v14 )
  {
    if ( _InterlockedExchangeAdd(v14 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v9)(v9);
      if ( _InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8i64))(v9);
    }
  }
  Myfirst = __that._M_frames._Mypair._Myval2._Myfirst;
  if ( __that._M_frames._Mypair._Myval2._Myfirst )
  {
    v11 = ((char *)__that._M_frames._Mypair._Myval2._Myend - (char *)__that._M_frames._Mypair._Myval2._Myfirst) & 0xFFFFFFFFFFFFFFF8ui64;
    if ( v11 >= 0x1000 )
    {
      v11 += 39i64;
      Myfirst = (void **)*((_QWORD *)__that._M_frames._Mypair._Myval2._Myfirst - 1);
      if ( (unsigned __int64)((char *)__that._M_frames._Mypair._Myval2._Myfirst - (char *)Myfirst - 8) > 0x1F )
        _invalid_parameter_noinfo_noreturn();
    }
    operator delete(Myfirst, v11);
  }
  return v8;
}

/*
==============
Concurrency::task<void>::_CreateImpl
==============
*/
void Concurrency::task<void>::_CreateImpl(Concurrency::task<void> *this, Concurrency::details::_CancellationTokenState *_Ct, Concurrency::scheduler_ptr *_Scheduler)
{
  std::_Ref_count_base *Rep; 
  std::_Ref_count_base *v7; 
  Concurrency::scheduler_ptr v8; 

  __asm { vpxor   xmm0, xmm0, xmm0 }
  v8._M_sharedScheduler = _XMM0;
  Rep = _Scheduler->_M_sharedScheduler._Rep;
  if ( Rep )
  {
    _InterlockedIncrement((volatile signed __int32 *)&Rep->_Uses);
    Rep = _Scheduler->_M_sharedScheduler._Rep;
  }
  v8._M_sharedScheduler._Ptr = _Scheduler->_M_sharedScheduler._Ptr;
  v8._M_sharedScheduler._Rep = Rep;
  v8._M_scheduler = _Scheduler->_M_scheduler;
  Concurrency::task<unsigned char>::_CreateImpl(&this->_M_unitTask, _Ct, &v8);
  v7 = _Scheduler->_M_sharedScheduler._Rep;
  if ( v7 && _InterlockedExchangeAdd((volatile signed __int32 *)&v7->_Uses, 0xFFFFFFFF) == 1 )
  {
    v7->_Destroy(v7);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v7->_Weaks, 0xFFFFFFFF) == 1 )
      v7->_Delete_this(v7);
  }
}

/*
==============
Concurrency::details::_ThenImplOptions::_CreateOptions
==============
*/
Concurrency::details::_ThenImplOptions *Concurrency::details::_ThenImplOptions::_CreateOptions(Concurrency::details::_ThenImplOptions *result, const Concurrency::task_options *_Task_Options, const Concurrency::task_continuation_context *_ContinuationContext, const Concurrency::scheduler_ptr *impl_scheduler)
{
  Concurrency::details::_ThenImplOptions *v7; 
  void **v8; 
  char v9; 
  Concurrency::details::_CancellationTokenState *M_Impl; 
  __int64 v11; 
  std::_Ref_count_base *Rep; 
  Concurrency::scheduler_interface **v13; 
  char v14; 
  std::_Ref_count_base *v15; 
  std::_Ref_count_base *v16; 
  __int64 v17; 
  volatile signed __int32 *v18; 
  void **Myfirst; 
  void *M_SingleFrame; 
  size_t v22; 
  unsigned __int64 v23; 
  char v24; 
  void **v25; 
  void *v26; 
  unsigned __int64 v27; 
  void *v28; 
  unsigned __int64 v29; 
  Concurrency::details::_TaskCreationCallstack *v30; 
  void **v32; 
  unsigned __int64 v33; 
  unsigned __int64 v34; 
  void **v35; 
  int v37; 
  Concurrency::details::_CancellationTokenState *v38; 
  Concurrency::details::_CancellationTokenState *v39; 
  Concurrency::scheduler_ptr v40; 
  __int128 v41; 
  void **v42; 
  Concurrency::scheduler_interface *v43; 
  std::_Ref_count_base *v44; 
  Concurrency::scheduler_interface *v45; 
  Concurrency::scheduler_interface *v46; 
  volatile signed __int32 *v47; 
  Concurrency::scheduler_interface *M_scheduler; 
  int v49; 
  Concurrency::details::_TaskCreationCallstack __that; 
  Concurrency::scheduler_ptr v51; 
  bool M_hasPresetCreationCallstack; 
  Concurrency::details::_TaskCreationCallstack v53; 
  Concurrency::details::_ContextCallback v54; 
  bool M_RunInline; 
  __int64 v56; 
  void *ptr[2]; 
  __int64 v58; 
  __int64 v59; 
  void **v60; 
  Concurrency::details::_TaskCreationCallstack v61; 
  void **__formal; 
  const Concurrency::task_continuation_context *v64; 

  v64 = _ContinuationContext;
  v59 = -2i64;
  v7 = result;
  v8 = NULL;
  v9 = 0;
  v49 = 0;
  if ( _Task_Options->_M_HasCancellationToken )
  {
    M_Impl = _Task_Options->_M_CancellationToken._M_Impl;
    if ( M_Impl )
      _InterlockedIncrement(&M_Impl->_M_refCount);
    v38 = M_Impl;
    v9 = 1;
    v11 = (__int64)M_Impl;
    if ( !M_Impl )
      v11 = 2i64;
    v39 = (Concurrency::details::_CancellationTokenState *)v11;
  }
  else
  {
    v39 = NULL;
    M_Impl = v38;
  }
  if ( (v9 & 1) != 0 )
  {
    v9 &= ~1u;
    if ( M_Impl )
    {
      if ( _InterlockedExchangeAdd(&M_Impl->_M_refCount, 0xFFFFFFFF) == 1 )
        v38->_Destroy(v38);
    }
  }
  if ( _Task_Options->_M_HasScheduler )
  {
    Rep = _Task_Options->_M_Scheduler._M_sharedScheduler._Rep;
    if ( Rep )
    {
      _InterlockedIncrement((volatile signed __int32 *)&Rep->_Uses);
      Rep = _Task_Options->_M_Scheduler._M_sharedScheduler._Rep;
    }
    v46 = _Task_Options->_M_Scheduler._M_sharedScheduler._Ptr;
    v47 = (volatile signed __int32 *)Rep;
    M_scheduler = _Task_Options->_M_Scheduler._M_scheduler;
    v13 = &v46;
    v14 = v9 | 2;
    v15 = v44;
  }
  else
  {
    v15 = impl_scheduler->_M_sharedScheduler._Rep;
    if ( v15 )
    {
      _InterlockedIncrement((volatile signed __int32 *)&v15->_Uses);
      v15 = impl_scheduler->_M_sharedScheduler._Rep;
    }
    v43 = impl_scheduler->_M_sharedScheduler._Ptr;
    v44 = v15;
    v45 = impl_scheduler->_M_scheduler;
    v13 = &v43;
    v14 = v9 | 4;
  }
  v16 = (std::_Ref_count_base *)v13[1];
  if ( v16 )
  {
    _InterlockedIncrement((volatile signed __int32 *)&v16->_Uses);
    v15 = v44;
  }
  v40._M_sharedScheduler._Ptr = *v13;
  v40._M_sharedScheduler._Rep = v16;
  v40._M_scheduler = v13[2];
  if ( (v14 & 4) != 0 )
  {
    v14 &= ~4u;
    if ( v15 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v15->_Uses, 0xFFFFFFFF) == 1 )
      {
        v17 = (__int64)v44;
        v44->_Destroy(v44);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v17 + 12), 0xFFFFFFFF) == 1 )
          v44->_Delete_this(v44);
      }
    }
  }
  if ( (v14 & 2) != 0 )
  {
    v14 &= ~2u;
    if ( v47 )
    {
      if ( _InterlockedExchangeAdd(v47 + 2, 0xFFFFFFFF) == 1 )
      {
        v18 = v47;
        (**(void (__fastcall ***)(volatile signed __int32 *))v47)(v47);
        if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v47 + 8i64))(v47);
      }
    }
  }
  Concurrency::details::_ContextCallback::_Assign(&v54, _Task_Options->_M_ContinuationContext._M_context._M_pContextCallback);
  M_RunInline = _Task_Options->_M_ContinuationContext._M_RunInline;
  v37 = -M_RunInline;
  Concurrency::details::_ContextCallback::_Reset(&v54);
  M_hasPresetCreationCallstack = _Task_Options->_M_InternalTaskOptions._M_hasPresetCreationCallstack;
  Concurrency::details::_TaskCreationCallstack::_TaskCreationCallstack(&v53, &_Task_Options->_M_InternalTaskOptions._M_presetCreationCallstack);
  Myfirst = v53._M_frames._Mypair._Myval2._Myfirst;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  if ( M_hasPresetCreationCallstack )
  {
    M_SingleFrame = v53._M_SingleFrame;
    v22 = (char *)v53._M_frames._Mypair._Myval2._Mylast - (char *)v53._M_frames._Mypair._Myval2._Myfirst;
    v23 = v53._M_frames._Mypair._Myval2._Mylast - v53._M_frames._Mypair._Myval2._Myfirst;
    v41 = _XMM0;
    v42 = NULL;
    if ( v23 )
    {
      if ( v23 > 0x1FFFFFFFFFFFFFFFi64 )
        std::vector<void *>::_Xlength();
      v8 = std::allocator<void *>::allocate((std::allocator<void *> *)&v41, v53._M_frames._Mypair._Myval2._Mylast - v53._M_frames._Mypair._Myval2._Myfirst);
      *(_QWORD *)&v41 = v8;
      v42 = &v8[v23];
      std::_Ptr_copy_cat<void *,void *>(&__formal, &v60);
      memmove_0(v8, Myfirst, v22);
      *((_QWORD *)&v41 + 1) = (char *)v8 + v22;
      v24 = v14 | 0x48;
      v25 = (void **)&v41;
      v7 = result;
    }
    else
    {
      v8 = (void **)v41;
      v24 = v14 | 0x48;
      v25 = (void **)&v41;
      v7 = result;
    }
  }
  else
  {
    *(_OWORD *)ptr = _XMM0;
    v58 = 0i64;
    v56 = 0i64;
    M_SingleFrame = NULL;
    v24 = v14 | 0x50;
    v25 = ptr;
  }
  __that._M_SingleFrame = M_SingleFrame;
  __that._M_frames._Mypair._Myval2._Myfirst = v8;
  __that._M_frames._Mypair._Myval2._Mylast = (void **)v25[1];
  __that._M_frames._Mypair._Myval2._Myend = (void **)v25[2];
  *v25 = NULL;
  v25[1] = NULL;
  v25[2] = NULL;
  if ( (v24 & 0x10) != 0 )
  {
    v24 &= ~0x10u;
    v26 = ptr[0];
    if ( ptr[0] )
    {
      v27 = 8 * ((signed __int64)(v58 - (unsigned __int64)ptr[0]) >> 3);
      if ( v27 >= 0x1000 )
      {
        v27 += 39i64;
        v26 = (void *)*((_QWORD *)ptr[0] - 1);
        if ( (unsigned __int64)(ptr[0] - v26 - 8) > 0x1F )
          _invalid_parameter_noinfo_noreturn();
      }
      operator delete(v26, v27);
    }
  }
  if ( (v24 & 8) != 0 )
  {
    v28 = (void *)v41;
    if ( (_QWORD)v41 )
    {
      v29 = 8 * ((__int64)((__int64)v42 - v41) >> 3);
      if ( v29 >= 0x1000 )
      {
        v29 += 39i64;
        v28 = *(void **)(v41 - 8);
        if ( (unsigned __int64)(v41 - (_QWORD)v28 - 8) > 0x1F )
          _invalid_parameter_noinfo_noreturn();
      }
      operator delete(v28, v29);
    }
  }
  Concurrency::details::_TaskCreationCallstack::_TaskCreationCallstack(&v61, &__that);
  __asm { vpxor   xmm0, xmm0, xmm0 }
  v51._M_sharedScheduler = _XMM0;
  if ( v40._M_sharedScheduler._Rep )
  {
    _InterlockedIncrement((volatile signed __int32 *)&v40._M_sharedScheduler._Rep->_Uses);
    Myfirst = v53._M_frames._Mypair._Myval2._Myfirst;
  }
  v51 = v40;
  Concurrency::details::_ThenImplOptions::_ThenImplOptions(v7, v39, v64, &v51, v30, (Concurrency::details::_TaskInliningMode)v37);
  v32 = __that._M_frames._Mypair._Myval2._Myfirst;
  if ( __that._M_frames._Mypair._Myval2._Myfirst )
  {
    v33 = 8 * (__that._M_frames._Mypair._Myval2._Myend - __that._M_frames._Mypair._Myval2._Myfirst);
    if ( v33 >= 0x1000 )
    {
      v33 += 39i64;
      v32 = (void **)*((_QWORD *)__that._M_frames._Mypair._Myval2._Myfirst - 1);
      if ( (unsigned __int64)((char *)__that._M_frames._Mypair._Myval2._Myfirst - (char *)v32 - 8) > 0x1F )
        _invalid_parameter_noinfo_noreturn();
    }
    operator delete(v32, v33);
  }
  if ( Myfirst )
  {
    v34 = 8 * (v53._M_frames._Mypair._Myval2._Myend - Myfirst);
    v35 = Myfirst;
    if ( v34 >= 0x1000 )
    {
      v34 += 39i64;
      Myfirst = (void **)*(Myfirst - 1);
      if ( (unsigned __int64)((char *)v35 - (char *)Myfirst - 8) > 0x1F )
        _invalid_parameter_noinfo_noreturn();
    }
    operator delete(Myfirst, v34);
  }
  if ( v40._M_sharedScheduler._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v40._M_sharedScheduler._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      v40._M_sharedScheduler._Rep->_Destroy(v40._M_sharedScheduler._Rep);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v40._M_sharedScheduler._Rep->_Weaks, 0xFFFFFFFF) == 1 )
        v40._M_sharedScheduler._Rep->_Delete_this(v40._M_sharedScheduler._Rep);
    }
  }
  return v7;
}

/*
==============
Concurrency::details::_DefaultTaskHelper::_NoCallOnDefaultTask_ErrorImpl
==============
*/
void __noreturn Concurrency::details::_DefaultTaskHelper::_NoCallOnDefaultTask_ErrorImpl(void)
{
  stdext::exception *v0; 
  Concurrency::invalid_operation v1; 

  Concurrency::invalid_operation::invalid_operation(&v1, "This function cannot be called on a default constructed task");
  stdext::exception::_Raise(v0);
}

/*
==============
Concurrency::details::_Task_impl_base::_RegisterCancellation
==============
*/
void Concurrency::details::_Task_impl_base::_RegisterCancellation(Concurrency::details::_Task_impl_base *this, std::weak_ptr<Concurrency::details::_Task_impl_base> *_WeakPtr)
{
  std::_Ref_count_base *Rep; 
  Concurrency::details::_Task_impl_base *Ptr; 
  char *v6; 
  char *v7; 
  std::_Ref_count_base *v8; 
  Concurrency::details::_Task_impl_base *v9; 

  Rep = _WeakPtr->_Rep;
  if ( Rep )
  {
    _InterlockedIncrement((volatile signed __int32 *)&Rep->_Weaks);
    Rep = _WeakPtr->_Rep;
  }
  Ptr = _WeakPtr->_Ptr;
  v9 = _WeakPtr->_Ptr;
  v6 = (char *)operator new(0xD0ui64);
  v7 = v6;
  if ( v6 )
  {
    *(_QWORD *)v6 = &Concurrency::details::_RefCounter::`vftable';
    *((_DWORD *)v6 + 2) = 1;
    *(_QWORD *)v6 = &Concurrency::details::_CancellationTokenRegistration::`vftable';
    *((_DWORD *)v6 + 4) = 3;
    Cnd_init_in_situ_0((_Cnd_t)(v6 + 24));
    Mtx_init_in_situ_0((_Mtx_t)(v7 + 96), 2);
    v7[176] = 0;
    *((_QWORD *)v7 + 23) = 0i64;
    *(_QWORD *)v7 = &Concurrency::details::_CancellationTokenCallback<_lambda_be3e5d9dce35d2c8dbfa8485373731d5_>::`vftable';
    *((_QWORD *)v7 + 24) = 0i64;
    *((_QWORD *)v7 + 25) = 0i64;
    if ( Rep )
    {
      _InterlockedIncrement((volatile signed __int32 *)&Rep->_Weaks);
      Ptr = v9;
    }
    *((_QWORD *)v7 + 24) = Ptr;
    *((_QWORD *)v7 + 25) = Rep;
  }
  else
  {
    v7 = NULL;
  }
  this->_M_pRegistration = (Concurrency::details::_CancellationTokenRegistration *)v7;
  Concurrency::details::_CancellationTokenState::_RegisterCallback(this->_M_pTokenState, (Concurrency::details::_CancellationTokenRegistration *)v7);
  if ( Rep && _InterlockedExchangeAdd((volatile signed __int32 *)&Rep->_Weaks, 0xFFFFFFFF) == 1 )
    Rep->_Delete_this(Rep);
  v8 = _WeakPtr->_Rep;
  if ( v8 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v8->_Weaks, 0xFFFFFFFF) == 1 )
      v8->_Delete_this(v8);
  }
}

/*
==============
Concurrency::details::_ExceptionHolder::_RethrowUserException
==============
*/
void __noreturn Concurrency::details::_ExceptionHolder::_RethrowUserException(Concurrency::details::_ExceptionHolder *this)
{
  std::exception_ptr *v2; 
  std::exception_ptr v3; 

  if ( !this->_M_exceptionObserved._My_val )
    Concurrency::details::atomic_exchange<long>(&this->_M_exceptionObserved, 1);
  std::exception_ptr::exception_ptr(&v3, &this->_M_stdException);
  std::rethrow_exception(v2);
}

/*
==============
Concurrency::details::_Task_impl_base::_RunTaskContinuations
==============
*/
void Concurrency::details::_Task_impl_base::_RunTaskContinuations(Concurrency::details::_Task_impl_base *this)
{
  Concurrency::details::_ContinuationTaskHandleBase *M_Continuations; 
  Concurrency::details::_ContinuationTaskHandleBase *M_next; 
  std::shared_ptr<Concurrency::details::_ExceptionHolder> *p_M_exceptionHolder; 
  Concurrency::details::_Task_impl_base_vtbl *v5; 
  volatile signed __int32 *v6; 
  Concurrency::details::_Task_impl_base *v7; 
  volatile signed __int32 *v8; 

  M_Continuations = this->_M_Continuations;
  this->_M_Continuations = NULL;
  if ( M_Continuations )
  {
    do
    {
      M_next = M_Continuations->_M_next;
      M_Continuations->_GetTaskImplBase(M_Continuations, (std::shared_ptr<Concurrency::details::_Task_impl_base> *)&v7);
      if ( this->_M_TaskState != _Canceled || M_Continuations->_M_isTaskBasedContinuation )
      {
        Concurrency::details::_Task_impl_base::_ScheduleContinuationTask(v7, M_Continuations);
      }
      else
      {
        p_M_exceptionHolder = &this->_M_exceptionHolder;
        v5 = v7->__vftable;
        if ( this->_M_exceptionHolder._Ptr )
        {
          ((void (__fastcall *)(Concurrency::details::_Task_impl_base *, __int64, __int64))v5->_CancelAndRunContinuations)(v7, 1i64, 1i64);
        }
        else
        {
          LOBYTE(p_M_exceptionHolder) = 1;
          v5->_CancelAndRunContinuations(v7, (bool)p_M_exceptionHolder, 0, 0, &v7->_M_exceptionHolder);
        }
        ((void (__fastcall *)(Concurrency::details::_ContinuationTaskHandleBase *, __int64))M_Continuations->~_TaskProcHandle)(M_Continuations, 1i64);
      }
      v6 = v8;
      if ( v8 && _InterlockedExchangeAdd(v8 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v6)(v6);
        if ( _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8i64))(v6);
      }
      M_Continuations = M_next;
    }
    while ( M_next );
  }
}

/*
==============
Concurrency::details::_Task_impl_base::_ScheduleContinuation
==============
*/
void Concurrency::details::_Task_impl_base::_ScheduleContinuation(Concurrency::details::_Task_impl_base *this, Concurrency::details::_ContinuationTaskHandleBase *_PTaskHandle)
{
  int v4; 
  int v5; 
  int v6; 
  int v7; 
  int v8; 
  std::shared_ptr<Concurrency::details::_Task_impl_base> *v9; 
  volatile signed __int32 *v10; 
  std::shared_ptr<Concurrency::details::_Task_impl_base> *v11; 
  _BOOL8 v12; 
  volatile signed __int32 *v13; 
  std::shared_ptr<Concurrency::details::_Task_impl_base> *v14; 
  volatile signed __int32 *v15; 
  char v16[8]; 
  volatile signed __int32 *v17; 
  char v18[8]; 
  volatile signed __int32 *v19; 
  char v20[8]; 
  volatile signed __int32 *v21; 

  v4 = 0;
  v5 = Mtx_lock_0((_Mtx_t)&this->_M_ContinuationsCritSec);
  if ( v5 )
    std::_Throw_C_error(v5);
  if ( this->_M_TaskState == _Completed || this->_M_TaskState == _Canceled && _PTaskHandle->_M_isTaskBasedContinuation )
  {
    v4 = 1;
  }
  else if ( this->_M_TaskState == _Canceled )
  {
    LOBYTE(v4) = this->_M_exceptionHolder._Ptr != NULL;
    v4 += 2;
  }
  else
  {
    _PTaskHandle->_M_next = this->_M_Continuations;
    this->_M_Continuations = _PTaskHandle;
  }
  v6 = Mtx_unlock_0((_Mtx_t)&this->_M_ContinuationsCritSec);
  if ( v6 )
    std::_Throw_C_error(v6);
  v7 = v4 - 1;
  if ( v7 )
  {
    v8 = v7 - 1;
    if ( v8 )
    {
      if ( v8 == 1 )
      {
        v9 = _PTaskHandle->_GetTaskImplBase(_PTaskHandle, v16);
        v9->_Ptr->_CancelAndRunContinuations(v9->_Ptr, 1, 1, 1, &this->_M_exceptionHolder);
        v10 = v17;
        if ( v17 && _InterlockedExchangeAdd(v17 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
          if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8i64))(v10);
        }
        ((void (__fastcall *)(Concurrency::details::_ContinuationTaskHandleBase *, __int64))_PTaskHandle->~_TaskProcHandle)(_PTaskHandle, 1i64);
      }
    }
    else
    {
      v11 = _PTaskHandle->_GetTaskImplBase(_PTaskHandle, v18);
      LOBYTE(v12) = 1;
      v11->_Ptr->_CancelAndRunContinuations(v11->_Ptr, v12, 0, 0, &v11->_Ptr->_M_exceptionHolder);
      v13 = v19;
      if ( v19 )
      {
        if ( _InterlockedExchangeAdd(v19 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v13)(v13);
          if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8i64))(v13);
        }
      }
      ((void (__fastcall *)(Concurrency::details::_ContinuationTaskHandleBase *, __int64))_PTaskHandle->~_TaskProcHandle)(_PTaskHandle, 1i64);
    }
  }
  else
  {
    v14 = _PTaskHandle->_GetTaskImplBase(_PTaskHandle, v20);
    Concurrency::details::_Task_impl_base::_ScheduleContinuationTask(v14->_Ptr, _PTaskHandle);
    v15 = v21;
    if ( v21 )
    {
      if ( _InterlockedExchangeAdd(v21 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v15)(v15);
        if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8i64))(v15);
      }
    }
  }
}

/*
==============
Concurrency::details::_Task_impl_base::_ScheduleContinuationTask
==============
*/
void Concurrency::details::_Task_impl_base::_ScheduleContinuationTask(Concurrency::details::_Task_impl_base *this, Concurrency::details::_ContinuationTaskHandleBase *_PTaskHandle)
{
  Concurrency::details::_TaskInliningMode M_inliningMode; 
  std::function<void __cdecl(void)> *p_Func; 
  std::function<void __cdecl(void)> _Func; 

  Concurrency::details::_TaskEventLogger::_LogScheduleTask(&this->_M_taskEventLogger, 1);
  if ( _PTaskHandle->_M_continuationContext._M_context._M_captureMethod )
  {
    M_inliningMode = _PTaskHandle->_M_inliningMode;
    if ( M_inliningMode != _ForceInline )
    {
      M_inliningMode = _DefaultAutoInline;
      _PTaskHandle->_M_inliningMode = _DefaultAutoInline;
    }
    _Func._Mystorage._Ptrs[0] = (std::_Func_base<void> *)&std::_Func_impl_no_alloc<_lambda_ee2800ccd2b011420c5de0c63356449b_,void,>::`vftable';
    _Func._Mystorage._Ptrs[1] = (std::_Func_base<void> *)_PTaskHandle;
    _Func._Mystorage._Ptrs[7] = (std::_Func_base<void> *)&_Func;
    Concurrency::details::_ScheduleFuncWithAutoInline(&_Func, M_inliningMode);
    if ( _Func._Mystorage._Ptrs[7] )
    {
      p_Func = &_Func;
      LOBYTE(p_Func) = _Func._Mystorage._Ptrs[7] != (std::_Func_base<void> *)&_Func;
      _Func._Mystorage._Ptrs[7]->_Delete_this(_Func._Mystorage._Ptrs[7], (bool)p_Func);
    }
  }
  else
  {
    Concurrency::details::_Task_impl_base::_ScheduleTask(this, _PTaskHandle, _PTaskHandle->_M_inliningMode);
  }
}

/*
==============
Concurrency::details::_Task_impl_base::_ScheduleTask
==============
*/
void Concurrency::details::_Task_impl_base::_ScheduleTask(Concurrency::details::_Task_impl_base *this, Concurrency::details::_TaskProcHandle *_PTaskHandle, Concurrency::details::_TaskInliningMode _InliningMode)
{
  Concurrency::scheduler_interface *M_scheduler; 
  Concurrency::details::_DefaultPPLTaskScheduler v5; 

  if ( _InliningMode == _ForceInline )
  {
    v5.__vftable = (Concurrency::details::_DefaultPPLTaskScheduler_vtbl *)_PTaskHandle;
    _PTaskHandle->invoke(_PTaskHandle);
    ((void (__fastcall *)(Concurrency::details::_TaskProcHandle *, __int64))_PTaskHandle->~_TaskProcHandle)(_PTaskHandle, 1i64);
  }
  else
  {
    M_scheduler = this->_M_TaskCollection._M_pScheduler._M_scheduler;
    if ( M_scheduler )
    {
      M_scheduler->schedule(M_scheduler, Concurrency::details::_TaskProcHandle::_RunChoreBridge, _PTaskHandle);
    }
    else
    {
      v5.__vftable = (Concurrency::details::_DefaultPPLTaskScheduler_vtbl *)&Concurrency::details::_DefaultPPLTaskScheduler::`vftable';
      Concurrency::details::_DefaultPPLTaskScheduler::`vftable'(&v5, Concurrency::details::_TaskProcHandle::_RunChoreBridge, _PTaskHandle);
    }
  }
}

/*
==============
Concurrency::details::_Task_impl_base::_Wait
==============
*/
__int64 Concurrency::details::_Task_impl_base::_Wait(Concurrency::details::_Task_impl_base *this)
{
  Concurrency::details::_TaskCollectionBaseImpl *p_M_TaskCollection; 
  Concurrency::details::_ExceptionHolder *v4; 
  stdext::exception *v5; 
  Concurrency::invalid_operation v6; 

  if ( Concurrency::details::_Task_impl_base::_IsNonBlockingThread() )
  {
    if ( this->_M_TaskState != _Completed && this->_M_TaskState != _Canceled )
    {
      Concurrency::invalid_operation::invalid_operation(&v6, "Illegal to wait on a task in a Windows Runtime STA");
      stdext::exception::_Raise(v5);
    }
  }
  else
  {
    p_M_TaskCollection = &this->_M_TaskCollection;
    if ( !this->_M_fFromAsync )
    {
      Concurrency::details::_TaskCollectionBaseImpl::_Wait(p_M_TaskCollection);
      if ( !this->_M_fUnwrappedTask )
        goto LABEL_9;
      p_M_TaskCollection = &this->_M_TaskCollection;
    }
    Concurrency::details::_TaskCollectionBaseImpl::_Wait(p_M_TaskCollection);
  }
LABEL_9:
  if ( this->_M_exceptionHolder._Ptr )
  {
    v4 = std::shared_ptr<Concurrency::details::_ExceptionHolder>::operator-><Concurrency::details::_ExceptionHolder,0>(&this->_M_exceptionHolder);
    Concurrency::details::_ExceptionHolder::_RethrowUserException(v4);
  }
  return (unsigned int)(this->_M_TaskState == _Canceled) + 1;
}

/*
==============
Concurrency::details::_IAsyncActionToAsyncOperationConverter::_IAsyncActionToAsyncOperationConverter
==============
*/
void Concurrency::details::_IAsyncActionToAsyncOperationConverter::_IAsyncActionToAsyncOperationConverter(Concurrency::details::_IAsyncActionToAsyncOperationConverter *this, Windows::Foundation::IAsyncAction *_Operation)
{
  Concurrency::details::_AsyncInfoImpl<Windows::Foundation::IAsyncAction _,Windows::Foundation::AsyncActionCompletedHandler,unsigned char> *v4; 
  Platform::Details *v5; 
  struct IUnknown *ObjectContext; 
  IUnknown *v7; 
  __int64 ptr; 
  int ContextToken; 
  Concurrency::details::_AsyncInfoImpl<Windows::Foundation::IAsyncAction _,Windows::Foundation::AsyncActionCompletedHandler,unsigned char> *v10; 
  Windows::Foundation::IAsyncAction *object; 
  Concurrency::details::_AsyncInfoImpl<Windows::Foundation::IAsyncAction _,Windows::Foundation::AsyncActionCompletedHandler,unsigned char> *v12; 
  __int64 v13; 

  v4 = &this->Concurrency::details::_AsyncInfoImpl<Windows::Foundation::IAsyncAction _,Windows::Foundation::AsyncActionCompletedHandler,unsigned char>;
  v12 = &this->Concurrency::details::_AsyncInfoImpl<Windows::Foundation::IAsyncAction _,Windows::Foundation::AsyncActionCompletedHandler,unsigned char>;
  Platform::Object::Object(&this->Platform::Object);
  v4->Concurrency::details::__I_$_AsyncInfoImpl_PE$AAUIAsyncAction_Foundation_Windows__VAsyncActionCompletedHandler_23_EPublicNonVirtuals::Platform::Object::__vftable = (Platform::Object_vtbl *)&___7___AsyncInfoImpl_PE_AAUIAsyncAction_Foundation_Windows__VAsyncActionCompletedHandler_23_E_details_Concurrency__6B__I___AsyncInfoImpl_PE_AAUIAsyncAction_Foundation_Windows__VAsyncActionCompletedHandler_23_EPublicNonVirtuals_12__;
  v4->Windows::Foundation::IAsyncOperation<unsigned char>::Platform::Object::__vftable = (Windows::Foundation::IAsyncOperation<unsigned char>_vtbl *)&Concurrency::details::_AsyncInfoImpl<Windows::Foundation::IAsyncAction __gc *,Windows::Foundation::AsyncActionCompletedHandler,unsigned char>::`vftable'{for `Platform::Object's `Windows::Foundation::IAsyncOperation<unsigned char>'};
  v4->Windows::Foundation::IAsyncOperation<unsigned char>::Windows::Foundation::IAsyncInfo::Platform::Object::__vftable = (Windows::Foundation::IAsyncInfo_vtbl *)&Concurrency::details::_AsyncInfoImpl<Windows::Foundation::IAsyncAction __gc *,Windows::Foundation::AsyncActionCompletedHandler,unsigned char>::`vftable'{for `Windows::Foundation::IAsyncInfo'};
  v4->Platform::Object::__vftable = (Platform::Object_vtbl *)&Concurrency::details::_AsyncInfoImpl<Windows::Foundation::IAsyncAction __gc *,Windows::Foundation::AsyncActionCompletedHandler,unsigned char>::`vftable'{for `Platform::Object'};
  v4->_M_asyncInfo._object = NULL;
  v4->_M_asyncInfo._contextCallback.ptr_ = NULL;
  v4->_M_asyncInfo._contextToken = 0i64;
  v4->_M_asyncInfo._agileState = SaudiArabia;
  Platform::Agile<Windows::Foundation::IAsyncAction __gc *,1>::Release(&v4->_M_asyncInfo);
  if ( _Operation )
  {
    v12 = NULL;
    if ( _Operation->__abi_QueryInterface(_Operation, (Platform::Guid *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90, (void **)&v12) )
    {
      v4->_M_asyncInfo._agileState = Worldwide;
      ObjectContext = Platform::Details::GetObjectContext(v5);
      v7 = ObjectContext;
      ptr = (__int64)v4->_M_asyncInfo._contextCallback.ptr_;
      if ( (struct IUnknown *)ptr != ObjectContext )
      {
        if ( ObjectContext )
        {
          ObjectContext->AddRef(ObjectContext);
          ptr = (__int64)v4->_M_asyncInfo._contextCallback.ptr_;
        }
        v13 = ptr;
        v4->_M_asyncInfo._contextCallback.ptr_ = v7;
        if ( ptr )
        {
          v13 = 0i64;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)ptr + 16i64))(ptr);
        }
      }
      ContextToken = CoGetContextToken(&v4->_M_asyncInfo._contextToken);
      if ( ContextToken < 0 )
        __abi_WinRTraiseException(ContextToken);
    }
    else
    {
      v4->_M_asyncInfo._agileState = Japan;
    }
    v10 = v12;
    if ( v12 )
    {
      v12 = NULL;
      v10->__abi_Release(v10);
    }
  }
  object = v4->_M_asyncInfo._object;
  if ( _Operation != object )
  {
    if ( _Operation )
    {
      _Operation->__abi_AddRef(_Operation);
      object = v4->_M_asyncInfo._object;
    }
    if ( object )
      object->__abi_Release(object);
    v4->_M_asyncInfo._object = _Operation;
  }
  this->Concurrency::details::__I_IAsyncActionToAsyncOperationConverterPublicNonVirtuals::Platform::Object::__vftable = (Concurrency::details::_IAsyncActionToAsyncOperationConverter_vtbl *)&Concurrency::details::_IAsyncActionToAsyncOperationConverter::`vftable';
  v4->Concurrency::details::__I_$_AsyncInfoImpl_PE$AAUIAsyncAction_Foundation_Windows__VAsyncActionCompletedHandler_23_EPublicNonVirtuals::Platform::Object::__vftable = (Platform::Object_vtbl *)___7_IAsyncActionToAsyncOperationConverter_details_Concurrency__6B__I___AsyncInfoImpl_PE_AAUIAsyncAction_Foundation_Windows__VAsyncActionCompletedHandler_23_EPublicNonVirtuals_12__;
  this->Concurrency::details::_AsyncInfoImpl<Windows::Foundation::IAsyncAction _,Windows::Foundation::AsyncActionCompletedHandler,unsigned char>::Windows::Foundation::IAsyncOperation<unsigned char>::Platform::Object::__vftable = (Windows::Foundation::IAsyncOperation<unsigned char>_vtbl *)&Concurrency::details::_IAsyncActionToAsyncOperationConverter::`vftable'{for `Platform::Object's `Windows::Foundation::IAsyncOperation<unsigned char>'};
  this->Concurrency::details::_AsyncInfoImpl<Windows::Foundation::IAsyncAction _,Windows::Foundation::AsyncActionCompletedHandler,unsigned char>::Windows::Foundation::IAsyncOperation<unsigned char>::Windows::Foundation::IAsyncInfo::Platform::Object::__vftable = (Windows::Foundation::IAsyncInfo_vtbl *)&Concurrency::details::_IAsyncActionToAsyncOperationConverter::`vftable'{for `Windows::Foundation::IAsyncInfo'};
  this->Concurrency::details::_AsyncInfoImpl<Windows::Foundation::IAsyncAction _,Windows::Foundation::AsyncActionCompletedHandler,unsigned char>::Platform::Object::__vftable = (Platform::Object_vtbl *)&Concurrency::details::_IAsyncActionToAsyncOperationConverter::`vftable'{for `Platform::Object's `Concurrency::details::_AsyncInfoImpl<Windows::Foundation::IAsyncAction __gc *,Windows::Foundation::AsyncActionCompletedHandler,unsigned char>'};
  this->Platform::Details::IWeakReferenceSource::__abi_IUnknown::__vftable = (Platform::Details::IWeakReferenceSource_vtbl *)&Concurrency::details::_IAsyncActionToAsyncOperationConverter::`vftable'{for `__abi_IUnknown'};
  this->Platform::Details::IWeakReferenceSource::Platform::Object::__vftable = (Platform::Object_vtbl *)&Concurrency::details::_IAsyncActionToAsyncOperationConverter::`vftable'{for `Platform::Object's `Platform::Details::IWeakReferenceSource'};
  this->__abi_reference_count.__pUnkMarshal = (__abi_IUnknown *volatile)-1i64;
  if ( __abi_module )
    __abi_module->__abi_IncrementObjectCount(__abi_module);
}

