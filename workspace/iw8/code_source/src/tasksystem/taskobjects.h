/*
==============
TaskCreateRequest::TaskCreateRequest
==============
*/

void __fastcall TaskCreateRequest::TaskCreateRequest(TaskCreateRequest *this)
{
  ??0TaskCreateRequest@@QEAA@XZ(this);
}

/*
==============
GenericTask::ClearTask
==============
*/

void __fastcall GenericTask::ClearTask(GenericTask *this)
{
  ?ClearTask@GenericTask@@QEAAXXZ(this);
}

/*
==============
TaskItem::TaskItem
==============
*/

void __fastcall TaskItem::TaskItem(TaskItem *this)
{
  ??0TaskItem@@QEAA@XZ(this);
}

/*
==============
TaskItem::CancelGenericTask
==============
*/

void __fastcall TaskItem::CancelGenericTask(TaskItem *this)
{
  ?CancelGenericTask@TaskItem@@QEAAXXZ(this);
}

/*
==============
TaskItem::~TaskItem
==============
*/

void __fastcall TaskItem::~TaskItem(TaskItem *this)
{
  ??1TaskItem@@QEAA@XZ(this);
}

/*
==============
TaskCreateRequest::~TaskCreateRequest
==============
*/

void __fastcall TaskCreateRequest::~TaskCreateRequest(TaskCreateRequest *this)
{
  ??1TaskCreateRequest@@QEAA@XZ(this);
}

/*
==============
TaskCreateRequest::~TaskCreateRequest
==============
*/
void TaskCreateRequest::~TaskCreateRequest(TaskCreateRequest *this)
{
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  bdRemoteTask *m_ptr; 
  bdRemoteTask *v4; 
  Windows::Foundation::IAsyncInfo *v5; 

  this->m_onCompletionCallback = NULL;
  this->m_onUpdateCallback = NULL;
  this->m_appSecondaryCallback = NULL;
  this->m_timeoutInSeconds = 0;
  m_asyncInfo = this->m_asyncInfo;
  if ( m_asyncInfo )
  {
    m_asyncInfo->__abi_Release(m_asyncInfo);
    this->m_asyncInfo = NULL;
  }
  m_ptr = this->m_remoteDemonwareTask.m_ptr;
  if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
  {
    v4 = this->m_remoteDemonwareTask.m_ptr;
    if ( v4 )
      ((void (__fastcall *)(bdRemoteTask *, __int64))v4->~bdReferencable)(v4, 1i64);
    this->m_remoteDemonwareTask.m_ptr = NULL;
  }
  v5 = this->m_asyncInfo;
  if ( v5 )
    v5->__abi_Release(v5);
}

/*
==============
TaskCreateRequest::TaskCreateRequest
==============
*/
void TaskCreateRequest::TaskCreateRequest(TaskCreateRequest *this)
{
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 

  this->m_asyncInfo = NULL;
  *(_QWORD *)&this->m_controllerIndex = -1i64;
  this->m_remoteDemonwareTask.m_ptr = NULL;
  this->m_appData = NULL;
  this->m_appSecondaryCallback = NULL;
  this->m_onCompletionCallback = NULL;
  this->m_onUpdateCallback = NULL;
  this->m_cancelTaskOnSignoutEvent = 1;
  this->m_timeoutInSeconds = 0;
  m_asyncInfo = this->m_asyncInfo;
  if ( m_asyncInfo )
  {
    m_asyncInfo->__abi_Release(m_asyncInfo);
    this->m_asyncInfo = NULL;
  }
}

/*
==============
GenericTask::ClearTask
==============
*/
void GenericTask::ClearTask(GenericTask *this)
{
  bdRemoteTask *m_ptr; 
  bdRemoteTask *v3; 
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 

  m_ptr = this->m_remoteDemonwareTask.m_ptr;
  if ( m_ptr )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
    {
      v3 = this->m_remoteDemonwareTask.m_ptr;
      if ( v3 )
        ((void (__fastcall *)(bdRemoteTask *, __int64))v3->~bdReferencable)(v3, 1i64);
    }
  }
  this->m_remoteDemonwareTask.m_ptr = NULL;
  *(_QWORD *)&this->m_genericTaskState = 0i64;
  this->m_controllerIndex = -1;
  this->m_appTaskType = 0;
  this->m_appData = NULL;
  this->m_cancelTaskOnSignoutEvent = 1;
  this->m_onCompletionCallback = NULL;
  this->m_onUpdateCallback = NULL;
  this->m_appSecondaryCallback = NULL;
  this->m_timeoutInSeconds = 0;
  m_asyncInfo = this->m_asyncInfo;
  if ( m_asyncInfo )
  {
    m_asyncInfo->__abi_Release(m_asyncInfo);
    this->m_asyncInfo = NULL;
  }
}

/*
==============
TaskItem::TaskItem
==============
*/
void TaskItem::TaskItem(TaskItem *this)
{
  GenericTask *p_m_task; 

  p_m_task = &this->m_task;
  this->m_task.m_asyncInfo = NULL;
  this->m_task.m_remoteDemonwareTask.m_ptr = NULL;
  GenericTask::ClearTask(&this->m_task);
  this->m_state = TASKITEMSTATE_AVAILABLE;
  GenericTask::ClearTask(p_m_task);
}

/*
==============
TaskItem::~TaskItem
==============
*/
void TaskItem::~TaskItem(TaskItem *this)
{
  bdRemoteTask *m_ptr; 
  bdRemoteTask *v3; 
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 

  GenericTask::ClearTask(&this->m_task);
  m_ptr = this->m_task.m_remoteDemonwareTask.m_ptr;
  if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
  {
    v3 = this->m_task.m_remoteDemonwareTask.m_ptr;
    if ( v3 )
      ((void (__fastcall *)(bdRemoteTask *, __int64))v3->~bdReferencable)(v3, 1i64);
    this->m_task.m_remoteDemonwareTask.m_ptr = NULL;
  }
  m_asyncInfo = this->m_task.m_asyncInfo;
  if ( m_asyncInfo )
    m_asyncInfo->__abi_Release(m_asyncInfo);
}

/*
==============
TaskItem::CancelGenericTask
==============
*/
void TaskItem::CancelGenericTask(TaskItem *this)
{
  bdRemoteTask *m_ptr; 

  m_ptr = this->m_task.m_remoteDemonwareTask.m_ptr;
  if ( m_ptr )
  {
    if ( !m_ptr->m_refCount.m_value._My_val && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\tasksystem\\taskobjects.h", 60, ASSERT_TYPE_ASSERT, "(m_remoteDemonwareTask->getRefCount() != 0)", (const char *)&queryFormat, "m_remoteDemonwareTask->getRefCount() != 0") )
      __debugbreak();
    bdRemoteTask::cancelTask(this->m_task.m_remoteDemonwareTask.m_ptr);
    this->m_task.m_genericTaskState = TASKSTATE_CANCELED;
  }
  else
  {
    this->m_task.m_genericTaskState = TASKSTATE_CANCELED;
  }
}

