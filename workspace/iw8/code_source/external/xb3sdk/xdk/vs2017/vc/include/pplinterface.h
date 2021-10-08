/*
==============
Concurrency::task_canceled::task_canceled
==============
*/

void __fastcall Concurrency::task_canceled::task_canceled(Concurrency::task_canceled *this)
{
  ??0task_canceled@Concurrency@@QEAA@XZ(this);
}

/*
==============
Concurrency::task_canceled::task_canceled
==============
*/

void __fastcall Concurrency::task_canceled::task_canceled(Concurrency::task_canceled *this, const Concurrency::task_canceled *__that)
{
  ??0task_canceled@Concurrency@@QEAA@AEBV01@@Z(this, __that);
}

/*
==============
Concurrency::details::atomic_exchange<long>
==============
*/

int __fastcall Concurrency::details::atomic_exchange<long>(std::atomic<long> *_Target, int _Value)
{
  return ??$atomic_exchange@J@details@Concurrency@@YAJAEAU?$atomic@J@std@@J@Z(_Target, _Value);
}

/*
==============
Concurrency::scheduler_ptr::scheduler_ptr
==============
*/

void __fastcall Concurrency::scheduler_ptr::scheduler_ptr(Concurrency::scheduler_ptr *this, std::shared_ptr<Concurrency::scheduler_interface> *_Scheduler)
{
  ??0scheduler_ptr@Concurrency@@QEAA@V?$shared_ptr@Uscheduler_interface@Concurrency@@@std@@@Z(this, _Scheduler);
}

/*
==============
Concurrency::details::atomic_compare_exchange<long>
==============
*/

int __fastcall Concurrency::details::atomic_compare_exchange<long>(std::atomic<long> *_Target, int _Exchange, int _Comparand)
{
  return ??$atomic_compare_exchange@J@details@Concurrency@@YAJAEAU?$atomic@J@std@@JJ@Z(_Target, _Exchange, _Comparand);
}

/*
==============
Concurrency::details::atomic_compare_exchange<long>
==============
*/
__int64 Concurrency::details::atomic_compare_exchange<long>(std::atomic<long> *_Target, int _Exchange, int _Comparand)
{
  unsigned int v3; 

  v3 = _InterlockedCompareExchange((volatile signed __int32 *)_Target, _Exchange, _Comparand);
  if ( _Comparand != v3 )
    return v3;
  return (unsigned int)_Comparand;
}

/*
==============
Concurrency::details::atomic_exchange<long>
==============
*/
__int64 Concurrency::details::atomic_exchange<long>(std::atomic<long> *_Target, int _Value)
{
  return (unsigned int)_InterlockedExchange((volatile __int32 *)_Target, _Value);
}

/*
==============
Concurrency::task_canceled::task_canceled
==============
*/
void Concurrency::task_canceled::task_canceled(Concurrency::task_canceled *this)
{
  this->_Data._What = "unknown";
  this->__vftable = (Concurrency::task_canceled_vtbl *)&Concurrency::task_canceled::`vftable';
}

/*
==============
Concurrency::scheduler_ptr::scheduler_ptr
==============
*/
void Concurrency::scheduler_ptr::scheduler_ptr(Concurrency::scheduler_ptr *this, std::shared_ptr<Concurrency::scheduler_interface> *_Scheduler)
{
  std::_Ref_count_base *Rep; 

  this->_M_sharedScheduler._Ptr = NULL;
  this->_M_sharedScheduler._Rep = NULL;
  this->_M_sharedScheduler = *_Scheduler;
  _Scheduler->_Ptr = NULL;
  _Scheduler->_Rep = NULL;
  this->_M_scheduler = this->_M_sharedScheduler._Ptr;
  Rep = _Scheduler->_Rep;
  if ( Rep && _InterlockedExchangeAdd((volatile signed __int32 *)&Rep->_Uses, 0xFFFFFFFF) == 1 )
  {
    Rep->_Destroy(Rep);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&Rep->_Weaks, 0xFFFFFFFF) == 1 )
      Rep->_Delete_this(Rep);
  }
}

/*
==============
Concurrency::task_canceled::task_canceled
==============
*/
void Concurrency::task_canceled::task_canceled(Concurrency::task_canceled *this, const Concurrency::task_canceled *__that)
{
  this->__vftable = (Concurrency::task_canceled_vtbl *)&std::exception::`vftable';
  this->_Data._What = NULL;
  *(_QWORD *)&this->_Data._DoFree = 0i64;
  _std_exception_copy_0(&__that->_Data);
  this->__vftable = (Concurrency::task_canceled_vtbl *)&Concurrency::task_canceled::`vftable';
}

