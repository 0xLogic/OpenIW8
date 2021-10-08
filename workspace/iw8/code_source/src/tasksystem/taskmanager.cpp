/*
==============
TaskManager::ClearTaskSilently
==============
*/

void __fastcall TaskManager::ClearTaskSilently(TaskManager *this, TaskItem *pTaskItem)
{
  ?ClearTaskSilently@TaskManager@@AEAAXPEAVTaskItem@@@Z(this, pTaskItem);
}

/*
==============
TaskManager::FreeTask
==============
*/

void __fastcall TaskManager::FreeTask(TaskManager *this, TaskItem *pTaskItem)
{
  ?FreeTask@TaskManager@@AEAAXPEAVTaskItem@@@Z(this, pTaskItem);
}

/*
==============
TaskManager::GetInstance
==============
*/

TaskManager *__fastcall TaskManager::GetInstance()
{
  return ?GetInstance@TaskManager@@SAAEAV1@XZ();
}

/*
==============
TaskManager::ShouldRunTaskBreaker
==============
*/

bool __fastcall TaskManager::ShouldRunTaskBreaker(TaskManager *this, TaskType taskType)
{
  return ?ShouldRunTaskBreaker@TaskManager@@QEAA_NW4TaskType@@@Z(this, taskType);
}

/*
==============
TaskManager::IssueApplicationOnCompleteCallback
==============
*/

void __fastcall TaskManager::IssueApplicationOnCompleteCallback(TaskManager *this, TaskItem *pTaskItem, eTaskManagerTaskState taskState)
{
  ?IssueApplicationOnCompleteCallback@TaskManager@@AEAAXPEAVTaskItem@@W4eTaskManagerTaskState@@@Z(this, pTaskItem, taskState);
}

/*
==============
TaskManager::UpdateTaskUsingAsyncOp
==============
*/

void __fastcall TaskManager::UpdateTaskUsingAsyncOp(TaskManager *this, TaskItem *pTaskItem)
{
  ?UpdateTaskUsingAsyncOp@TaskManager@@AEAAXPEAVTaskItem@@@Z(this, pTaskItem);
}

/*
==============
TaskManager::ResolveTask
==============
*/

void __fastcall TaskManager::ResolveTask(TaskManager *this, TaskItem *pTaskItem)
{
  ?ResolveTask@TaskManager@@AEAAXPEAVTaskItem@@@Z(this, pTaskItem);
}

/*
==============
TaskManager::CreateTask
==============
*/

bool __fastcall TaskManager::CreateTask(TaskManager *this, TaskCreateRequest *pTaskCreateRequest, TaskCreateResult *pTaskCreateResult)
{
  return ?CreateTask@TaskManager@@QEAA_NPEAVTaskCreateRequest@@PEAVTaskCreateResult@@@Z(this, pTaskCreateRequest, pTaskCreateResult);
}

/*
==============
TaskManager::UpdateDemonwareTask
==============
*/

eTaskManagerTaskState __fastcall TaskManager::UpdateDemonwareTask(TaskManager *this, GenericTask *pTask)
{
  return ?UpdateDemonwareTask@TaskManager@@QEAA?AW4eTaskManagerTaskState@@PEAVGenericTask@@@Z(this, pTask);
}

/*
==============
TaskManager::UpdateTaskUsingAppCallback
==============
*/

void __fastcall TaskManager::UpdateTaskUsingAppCallback(TaskManager *this, TaskItem *pTaskItem)
{
  ?UpdateTaskUsingAppCallback@TaskManager@@AEAAXPEAVTaskItem@@@Z(this, pTaskItem);
}

/*
==============
TaskManager::TaskManager
==============
*/

void __fastcall TaskManager::TaskManager(TaskManager *this)
{
  ??0TaskManager@@QEAA@XZ(this);
}

/*
==============
TaskManager::Update
==============
*/

void __fastcall TaskManager::Update(TaskManager *this)
{
  ?Update@TaskManager@@QEAAXXZ(this);
}

/*
==============
TaskManager::AllocateNewTask
==============
*/

TaskItem *__fastcall TaskManager::AllocateNewTask(TaskManager *this)
{
  return ?AllocateNewTask@TaskManager@@AEAAPEAVTaskItem@@XZ(this);
}

/*
==============
TaskManager::DecrementDebugTaskCounts
==============
*/

void __fastcall TaskManager::DecrementDebugTaskCounts(TaskManager *this, TaskItem *pTaskItem)
{
  ?DecrementDebugTaskCounts@TaskManager@@AEAAXPEAVTaskItem@@@Z(this, pTaskItem);
}

/*
==============
TaskManager::IncrementDebugTaskCounts
==============
*/

void __fastcall TaskManager::IncrementDebugTaskCounts(TaskManager *this, TaskCreateRequest *pTaskCreateRequest)
{
  ?IncrementDebugTaskCounts@TaskManager@@AEAAXPEAVTaskCreateRequest@@@Z(this, pTaskCreateRequest);
}

/*
==============
TaskManager::UpdateTaskUsingRemoteTaskReference
==============
*/

void __fastcall TaskManager::UpdateTaskUsingRemoteTaskReference(TaskManager *this, TaskItem *pTaskItem)
{
  ?UpdateTaskUsingRemoteTaskReference@TaskManager@@AEAAXPEAVTaskItem@@@Z(this, pTaskItem);
}

/*
==============
TaskManager::FindTaskById
==============
*/

TaskItem *__fastcall TaskManager::FindTaskById(TaskManager *this, unsigned int localTaskId)
{
  return ?FindTaskById@TaskManager@@QEAAPEAVTaskItem@@I@Z(this, localTaskId);
}

/*
==============
TaskManager::CreateBreakerTask
==============
*/

bool __fastcall TaskManager::CreateBreakerTask(TaskManager *this, TaskType taskType, TaskCreateRequest *pTaskCreateRequest, TaskCreateResult *pTaskCreateResult)
{
  return ?CreateBreakerTask@TaskManager@@QEAA_NW4TaskType@@PEAVTaskCreateRequest@@PEAVTaskCreateResult@@@Z(this, taskType, pTaskCreateRequest, pTaskCreateResult);
}

/*
==============
TaskManager::~TaskManager
==============
*/

void __fastcall TaskManager::~TaskManager(TaskManager *this)
{
  ??1TaskManager@@QEAA@XZ(this);
}

/*
==============
TaskManager::UpdateAsyncOpTask
==============
*/

eTaskManagerTaskState __fastcall TaskManager::UpdateAsyncOpTask(TaskManager *this, GenericTask *pTask)
{
  return ?UpdateAsyncOpTask@TaskManager@@QEAA?AW4eTaskManagerTaskState@@PEAVGenericTask@@@Z(this, pTask);
}

/*
==============
TaskManager::CancelAll
==============
*/

void __fastcall TaskManager::CancelAll(TaskManager *this, bool triggerCallbacks)
{
  ?CancelAll@TaskManager@@QEAAX_N@Z(this, triggerCallbacks);
}

/*
==============
TaskManager::CancelTaskById
==============
*/

bool __fastcall TaskManager::CancelTaskById(TaskManager *this, unsigned int localTaskId)
{
  return ?CancelTaskById@TaskManager@@QEAA_NI@Z(this, localTaskId);
}

/*
==============
TaskManager::OnSignoutEvent
==============
*/

void __fastcall TaskManager::OnSignoutEvent(TaskManager *this, const int controllerIndex)
{
  ?OnSignoutEvent@TaskManager@@QEAAXH@Z(this, controllerIndex);
}

/*
==============
TaskManager::OnComError_ErrorCleanup
==============
*/

void __fastcall TaskManager::OnComError_ErrorCleanup(TaskManager *this)
{
  ?OnComError_ErrorCleanup@TaskManager@@QEAAXXZ(this);
}

/*
==============
TaskManager::CancelTaskSilently
==============
*/

void __fastcall TaskManager::CancelTaskSilently(TaskManager *this, TaskItem *pTaskItem)
{
  ?CancelTaskSilently@TaskManager@@AEAAXPEAVTaskItem@@@Z(this, pTaskItem);
}

/*
==============
TaskManager::TaskManager
==============
*/
void TaskManager::TaskManager(TaskManager *this)
{
  `eh vector constructor iterator'(this, 0x58ui64, 0x80ui64, (void (__fastcall *)(void *))TaskItem::TaskItem, (void (__fastcall *)(void *))TaskItem::~TaskItem);
  *(_QWORD *)&this->m_nextLocalTaskId = 1i64;
  *(_QWORD *)&this->m_activeTaskCount = 0i64;
  *(_QWORD *)&this->m_activeDemonwareTaskCount = 0i64;
  *(_QWORD *)&this->m_activeMicrosoftTaskCount = 0i64;
}

/*
==============
TaskManager::~TaskManager
==============
*/
void TaskManager::~TaskManager(TaskManager *this)
{
  `eh vector destructor iterator'(this, 0x58ui64, 0x80ui64, (void (__fastcall *)(void *))TaskItem::~TaskItem);
}

/*
==============
TaskManager::AllocateNewTask
==============
*/
TaskItem *TaskManager::AllocateNewTask(TaskManager *this)
{
  int v1; 
  TaskManager *v2; 
  __int64 v3; 
  TaskItem *result; 
  TaskItem *v5; 

  v1 = 0;
  v2 = this;
  v3 = 0i64;
  while ( v2->m_tasks[0].m_state )
  {
    ++v1;
    ++v3;
    v2 = (TaskManager *)((char *)v2 + 88);
    if ( v3 >= 128 )
      goto LABEL_6;
  }
  if ( v1 != -1 )
  {
    v5 = &this->m_tasks[v1];
    GenericTask::ClearTask(&v5->m_task);
    result = v5;
    v5->m_state = TASKITEMSTATE_IN_USE;
    return result;
  }
LABEL_6:
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\tasksystem\\taskmanager.cpp", 64, ASSERT_TYPE_ASSERT, "(freeTaskIndex != -1)", (const char *)&queryFormat, "freeTaskIndex != -1") )
    __debugbreak();
  return 0i64;
}

/*
==============
TaskManager::CancelAll
==============
*/
void TaskManager::CancelAll(TaskManager *this, bool triggerCallbacks)
{
  unsigned int *p_m_remoteDemonwareTask; 
  TaskManager *v5; 
  __int64 v6; 
  __int64 v7; 

  Com_Printf(16, "CancelAll called\n");
  p_m_remoteDemonwareTask = (unsigned int *)&this->m_tasks[0].m_task.m_remoteDemonwareTask;
  v5 = this;
  v6 = 128i64;
  do
  {
    v7 = *(p_m_remoteDemonwareTask - 8);
    if ( (int)v7 > 0 )
    {
      Com_Printf(16, "CancelAll cleaning up task with local id %d in iwTaskState %d\n", p_m_remoteDemonwareTask[3], v7);
      if ( triggerCallbacks )
      {
        if ( *(_QWORD *)p_m_remoteDemonwareTask )
        {
          if ( !*(_DWORD *)(*(_QWORD *)p_m_remoteDemonwareTask + 8i64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\tasksystem\\taskobjects.h", 60, ASSERT_TYPE_ASSERT, "(m_remoteDemonwareTask->getRefCount() != 0)", (const char *)&queryFormat, "m_remoteDemonwareTask->getRefCount() != 0") )
            __debugbreak();
          bdRemoteTask::cancelTask(*(bdRemoteTask **)p_m_remoteDemonwareTask);
        }
        p_m_remoteDemonwareTask[2] = 4;
        TaskManager::ResolveTask(this, v5->m_tasks);
      }
      else
      {
        TaskItem::CancelGenericTask((TaskItem *)(p_m_remoteDemonwareTask - 8));
        --this->m_activeTaskCount;
        if ( *(_QWORD *)p_m_remoteDemonwareTask )
          --this->m_activeDemonwareTaskCount;
        if ( *((_QWORD *)p_m_remoteDemonwareTask - 1) )
          --this->m_activeMicrosoftTaskCount;
        GenericTask::ClearTask((GenericTask *)(p_m_remoteDemonwareTask - 6));
        GenericTask::ClearTask((GenericTask *)(p_m_remoteDemonwareTask - 6));
        *(p_m_remoteDemonwareTask - 8) = 0;
      }
    }
    v5 = (TaskManager *)((char *)v5 + 88);
    p_m_remoteDemonwareTask += 22;
    --v6;
  }
  while ( v6 );
}

/*
==============
TaskManager::CancelTaskById
==============
*/
char TaskManager::CancelTaskById(TaskManager *this, unsigned int localTaskId)
{
  int v4; 
  int *v5; 
  __int64 v6; 
  TaskItem *v8; 

  Com_Printf(16, "CancelTask called for task with local id %d\n", localTaskId);
  v4 = 0;
  v5 = (int *)this;
  v6 = 0i64;
  while ( *v5 <= 0 || v5[11] != localTaskId )
  {
    ++v4;
    ++v6;
    v5 += 22;
    if ( v6 >= 128 )
      return 0;
  }
  if ( v4 == -1 )
    return 0;
  v8 = &this->m_tasks[v4];
  if ( !v8 )
    return 0;
  TaskItem::CancelGenericTask(v8);
  TaskManager::ResolveTask(this, v8);
  return 1;
}

/*
==============
TaskManager::CancelTaskSilently
==============
*/
void TaskManager::CancelTaskSilently(TaskManager *this, TaskItem *pTaskItem)
{
  TaskItem::CancelGenericTask(pTaskItem);
  --this->m_activeTaskCount;
  if ( pTaskItem->m_task.m_remoteDemonwareTask.m_ptr )
    --this->m_activeDemonwareTaskCount;
  if ( pTaskItem->m_task.m_asyncInfo )
    --this->m_activeMicrosoftTaskCount;
  GenericTask::ClearTask(&pTaskItem->m_task);
  GenericTask::ClearTask(&pTaskItem->m_task);
  pTaskItem->m_state = TASKITEMSTATE_AVAILABLE;
}

/*
==============
TaskManager::ClearTaskSilently
==============
*/
void TaskManager::ClearTaskSilently(TaskManager *this, TaskItem *pTaskItem)
{
  --this->m_activeTaskCount;
  if ( pTaskItem->m_task.m_remoteDemonwareTask.m_ptr )
    --this->m_activeDemonwareTaskCount;
  if ( pTaskItem->m_task.m_asyncInfo )
    --this->m_activeMicrosoftTaskCount;
  GenericTask::ClearTask(&pTaskItem->m_task);
  GenericTask::ClearTask(&pTaskItem->m_task);
  pTaskItem->m_state = TASKITEMSTATE_AVAILABLE;
}

/*
==============
TaskManager::CreateBreakerTask
==============
*/
char TaskManager::CreateBreakerTask(TaskManager *this, TaskType taskType, TaskCreateRequest *pTaskCreateRequest, TaskCreateResult *pTaskCreateResult)
{
  unsigned int m_nextLocalTaskId; 

  m_nextLocalTaskId = this->m_nextLocalTaskId;
  this->m_nextLocalTaskId = m_nextLocalTaskId + 1;
  pTaskCreateResult->m_localTaskId = m_nextLocalTaskId;
  TaskBreaker_CreateTask(taskType, pTaskCreateRequest, pTaskCreateResult);
  return 1;
}

/*
==============
TaskManager::CreateTask
==============
*/
bool TaskManager::CreateTask(TaskManager *this, TaskCreateRequest *pTaskCreateRequest, TaskCreateResult *pTaskCreateResult)
{
  int v6; 
  __int64 v7; 
  TaskManager *v8; 
  bool result; 
  TaskItem *v10; 
  unsigned int v11; 
  bdReference<bdRemoteTask> *p_m_remoteDemonwareTask; 
  unsigned int v13; 
  unsigned int v14; 
  int v15; 
  unsigned int m_nextLocalTaskId; 
  bdRemoteTask **p_m_ptr; 
  bdRemoteTask *m_ptr; 
  unsigned int m_timeoutInSeconds; 
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  Windows::Foundation::IAsyncInfo *v21; 

  if ( (!pTaskCreateRequest || !pTaskCreateResult) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\tasksystem\\taskmanager.cpp", 140, ASSERT_TYPE_ASSERT, "(pTaskCreateRequest && pTaskCreateResult)", (const char *)&queryFormat, "pTaskCreateRequest && pTaskCreateResult") )
    __debugbreak();
  v6 = 0;
  v7 = 0i64;
  v8 = this;
  while ( v8->m_tasks[0].m_state )
  {
    ++v6;
    ++v7;
    v8 = (TaskManager *)((char *)v8 + 88);
    if ( v7 >= 128 )
      goto LABEL_10;
  }
  if ( v6 == -1 )
  {
LABEL_10:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\tasksystem\\taskmanager.cpp", 64, ASSERT_TYPE_ASSERT, "(freeTaskIndex != -1)", (const char *)&queryFormat, "freeTaskIndex != -1") )
    {
      __debugbreak();
      return 0;
    }
    return 0;
  }
  v10 = &this->m_tasks[v6];
  GenericTask::ClearTask(&v10->m_task);
  v10->m_state = TASKITEMSTATE_IN_USE;
  if ( !v10 )
    return 0;
  v11 = ++this->m_activeTaskCount;
  if ( v11 > this->m_peakTaskCount )
    this->m_peakTaskCount = v11;
  p_m_remoteDemonwareTask = &pTaskCreateRequest->m_remoteDemonwareTask;
  if ( pTaskCreateRequest->m_remoteDemonwareTask.m_ptr )
  {
    v13 = ++this->m_activeDemonwareTaskCount;
    if ( v13 > this->m_peakDemonwareTaskCount )
      this->m_peakDemonwareTaskCount = v13;
  }
  if ( pTaskCreateRequest->m_asyncInfo )
  {
    v14 = ++this->m_activeMicrosoftTaskCount;
    if ( v14 > this->m_peakMicrosoftTaskCount )
      this->m_peakMicrosoftTaskCount = v14;
  }
  v15 = Sys_Milliseconds() / 1000;
  Com_Printf(16, "CreateTask creating new task with local id %d\n", this->m_nextLocalTaskId);
  m_nextLocalTaskId = this->m_nextLocalTaskId;
  this->m_nextLocalTaskId = m_nextLocalTaskId + 1;
  p_m_ptr = &v10->m_task.m_remoteDemonwareTask.m_ptr;
  v10->m_task.m_localTaskId = m_nextLocalTaskId;
  if ( p_m_remoteDemonwareTask != &v10->m_task.m_remoteDemonwareTask )
  {
    if ( *p_m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&(*p_m_ptr)->m_refCount, 0xFFFFFFFF) == 1 && *p_m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))(*p_m_ptr)->~bdReferencable)(*p_m_ptr, 1i64);
    m_ptr = p_m_remoteDemonwareTask->m_ptr;
    *p_m_ptr = p_m_remoteDemonwareTask->m_ptr;
    if ( m_ptr )
      _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
  }
  v10->m_task.m_appTaskType = pTaskCreateRequest->m_appTaskType;
  v10->m_task.m_appData = pTaskCreateRequest->m_appData;
  v10->m_task.m_appSecondaryCallback = pTaskCreateRequest->m_appSecondaryCallback;
  v10->m_task.m_controllerIndex = pTaskCreateRequest->m_controllerIndex;
  v10->m_task.m_onCompletionCallback = pTaskCreateRequest->m_onCompletionCallback;
  v10->m_task.m_onUpdateCallback = pTaskCreateRequest->m_onUpdateCallback;
  v10->m_task.m_cancelTaskOnSignoutEvent = pTaskCreateRequest->m_cancelTaskOnSignoutEvent;
  m_timeoutInSeconds = pTaskCreateRequest->m_timeoutInSeconds;
  v10->m_task.m_taskStartTimeInSeconds = v15;
  v10->m_task.m_timeoutInSeconds = m_timeoutInSeconds;
  v10->m_task.m_genericTaskState = TASKSTATE_PENDING;
  m_asyncInfo = pTaskCreateRequest->m_asyncInfo;
  v21 = v10->m_task.m_asyncInfo;
  if ( m_asyncInfo != v21 )
  {
    if ( m_asyncInfo )
    {
      m_asyncInfo->__abi_AddRef(pTaskCreateRequest->m_asyncInfo);
      v21 = v10->m_task.m_asyncInfo;
    }
    if ( v21 )
      v21->__abi_Release(v21);
    v10->m_task.m_asyncInfo = m_asyncInfo;
  }
  if ( p_m_remoteDemonwareTask->m_ptr && pTaskCreateRequest->m_asyncInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\tasksystem\\taskmanager.cpp", 176, ASSERT_TYPE_ASSERT, "(((pTaskCreateRequest->m_remoteDemonwareTask != (0)) && (pTaskCreateRequest->m_asyncInfo != nullptr)) == false)", (const char *)&queryFormat, "((pTaskCreateRequest->m_remoteDemonwareTask != BD_NULL) && (pTaskCreateRequest->m_asyncInfo != nullptr)) == false") )
    __debugbreak();
  if ( !pTaskCreateRequest->m_onUpdateCallback && !p_m_remoteDemonwareTask->m_ptr && !pTaskCreateRequest->m_asyncInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\tasksystem\\taskmanager.cpp", 180, ASSERT_TYPE_ASSERT, "(pTaskCreateRequest->m_onUpdateCallback || pTaskCreateRequest->m_remoteDemonwareTask || pTaskCreateRequest->m_asyncInfo)", (const char *)&queryFormat, "pTaskCreateRequest->m_onUpdateCallback || pTaskCreateRequest->m_remoteDemonwareTask || pTaskCreateRequest->m_asyncInfo") )
    __debugbreak();
  if ( pTaskCreateRequest->m_appSecondaryCallback && !pTaskCreateRequest->m_onCompletionCallback && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\tasksystem\\taskmanager.cpp", 194, ASSERT_TYPE_ASSERT, "(!pTaskCreateRequest->m_appSecondaryCallback || pTaskCreateRequest->m_onCompletionCallback)", (const char *)&queryFormat, "!pTaskCreateRequest->m_appSecondaryCallback || pTaskCreateRequest->m_onCompletionCallback") )
    __debugbreak();
  pTaskCreateResult->m_localTaskId = v10->m_task.m_localTaskId;
  result = 1;
  pTaskCreateResult->m_task = &v10->m_task;
  return result;
}

/*
==============
TaskManager::DecrementDebugTaskCounts
==============
*/
void TaskManager::DecrementDebugTaskCounts(TaskManager *this, TaskItem *pTaskItem)
{
  --this->m_activeTaskCount;
  if ( pTaskItem->m_task.m_remoteDemonwareTask.m_ptr )
    --this->m_activeDemonwareTaskCount;
  if ( pTaskItem->m_task.m_asyncInfo )
    --this->m_activeMicrosoftTaskCount;
}

/*
==============
TaskManager::FindTaskById
==============
*/
TaskItem *TaskManager::FindTaskById(TaskManager *this, unsigned int localTaskId)
{
  int v2; 
  int *v3; 
  __int64 v4; 

  v2 = 0;
  v3 = (int *)this;
  v4 = 0i64;
  while ( *v3 <= 0 || v3[11] != localTaskId )
  {
    ++v2;
    ++v4;
    v3 += 22;
    if ( v4 >= 128 )
      return 0i64;
  }
  if ( v2 == -1 )
    return 0i64;
  return (TaskItem *)((char *)this + 88 * v2);
}

/*
==============
TaskManager::FreeTask
==============
*/
void TaskManager::FreeTask(TaskManager *this, TaskItem *pTaskItem)
{
  GenericTask::ClearTask(&pTaskItem->m_task);
  pTaskItem->m_state = TASKITEMSTATE_AVAILABLE;
}

/*
==============
TaskManager::GetInstance
==============
*/
TaskManager *TaskManager::GetInstance()
{
  return &TaskManager::m_instance;
}

/*
==============
TaskManager::IncrementDebugTaskCounts
==============
*/
void TaskManager::IncrementDebugTaskCounts(TaskManager *this, TaskCreateRequest *pTaskCreateRequest)
{
  unsigned int v2; 
  unsigned int v3; 
  unsigned int v4; 

  v2 = ++this->m_activeTaskCount;
  if ( v2 > this->m_peakTaskCount )
    this->m_peakTaskCount = v2;
  if ( pTaskCreateRequest->m_remoteDemonwareTask.m_ptr )
  {
    v3 = ++this->m_activeDemonwareTaskCount;
    if ( v3 > this->m_peakDemonwareTaskCount )
      this->m_peakDemonwareTaskCount = v3;
  }
  if ( pTaskCreateRequest->m_asyncInfo )
  {
    v4 = ++this->m_activeMicrosoftTaskCount;
    if ( v4 > this->m_peakMicrosoftTaskCount )
      this->m_peakMicrosoftTaskCount = v4;
  }
}

/*
==============
TaskManager::IssueApplicationOnCompleteCallback
==============
*/
void TaskManager::IssueApplicationOnCompleteCallback(TaskManager *this, TaskItem *pTaskItem, eTaskManagerTaskState taskState)
{
  void (__fastcall *m_onCompletionCallback)(GenericTask *, eTaskManagerTaskState); 
  TaskItem::eTaskItemState m_state; 

  if ( taskState == TASKSTATE_PENDING && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\tasksystem\\taskmanager.cpp", 279, ASSERT_TYPE_ASSERT, "(taskState != TASKSTATE_PENDING)", (const char *)&queryFormat, "taskState != TASKSTATE_PENDING") )
    __debugbreak();
  m_onCompletionCallback = pTaskItem->m_task.m_onCompletionCallback;
  if ( m_onCompletionCallback )
  {
    m_state = pTaskItem->m_state;
    pTaskItem->m_state = TASKITEMSTATE_IN_COMPLETE_CALLBACK;
    m_onCompletionCallback(&pTaskItem->m_task, taskState);
    pTaskItem->m_state = m_state;
    --this->m_activeTaskCount;
    if ( pTaskItem->m_task.m_remoteDemonwareTask.m_ptr )
      --this->m_activeDemonwareTaskCount;
    if ( pTaskItem->m_task.m_asyncInfo )
      --this->m_activeMicrosoftTaskCount;
    GenericTask::ClearTask(&pTaskItem->m_task);
    GenericTask::ClearTask(&pTaskItem->m_task);
    pTaskItem->m_state = TASKITEMSTATE_AVAILABLE;
  }
}

/*
==============
TaskManager::OnComError_ErrorCleanup
==============
*/
void TaskManager::OnComError_ErrorCleanup(TaskManager *this)
{
  bdReference<bdRemoteTask> *p_m_remoteDemonwareTask; 
  TaskManager *v3; 
  __int64 v4; 
  int m_ptr; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\tasksystem\\taskmanager.cpp", 501, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  p_m_remoteDemonwareTask = &this->m_tasks[0].m_task.m_remoteDemonwareTask;
  v3 = this;
  v4 = 128i64;
  do
  {
    m_ptr = (int)p_m_remoteDemonwareTask[-4].m_ptr;
    if ( m_ptr == 2 )
    {
      LODWORD(p_m_remoteDemonwareTask[1].m_ptr) = 3;
      TaskManager::ResolveTask(this, v3->m_tasks);
    }
    else if ( m_ptr == 3 )
    {
      --this->m_activeTaskCount;
      if ( p_m_remoteDemonwareTask->m_ptr )
        --this->m_activeDemonwareTaskCount;
      if ( p_m_remoteDemonwareTask[-1].m_ptr )
        --this->m_activeMicrosoftTaskCount;
      GenericTask::ClearTask((GenericTask *)&p_m_remoteDemonwareTask[-3]);
      GenericTask::ClearTask((GenericTask *)&p_m_remoteDemonwareTask[-3]);
      LODWORD(p_m_remoteDemonwareTask[-4].m_ptr) = 0;
    }
    v3 = (TaskManager *)((char *)v3 + 88);
    p_m_remoteDemonwareTask += 11;
    --v4;
  }
  while ( v4 );
}

/*
==============
TaskManager::OnSignoutEvent
==============
*/
void TaskManager::OnSignoutEvent(TaskManager *this, const int controllerIndex)
{
  TaskManager *v4; 
  TaskManager *v5; 
  __int64 v6; 
  __int64 m_state; 

  Com_Printf(16, "OnSignoutEvent called for controllerIndex %d\n", (unsigned int)controllerIndex);
  v4 = this;
  v5 = this;
  v6 = 128i64;
  do
  {
    m_state = (unsigned int)v4->m_tasks[0].m_state;
    if ( (int)m_state > 0 && this->m_tasks[0].m_task.m_controllerIndex == controllerIndex && this->m_tasks[0].m_task.m_cancelTaskOnSignoutEvent )
    {
      Com_Printf(16, "OnSignoutEvent cleaning up task with local id %d in iwTaskState %d\n", v4->m_tasks[0].m_task.m_localTaskId, m_state);
      TaskItem::CancelGenericTask(v5->m_tasks);
      TaskManager::ResolveTask(this, v5->m_tasks);
    }
    v5 = (TaskManager *)((char *)v5 + 88);
    v4 = (TaskManager *)((char *)v4 + 88);
    --v6;
  }
  while ( v6 );
}

/*
==============
TaskManager::ResolveTask
==============
*/
void TaskManager::ResolveTask(TaskManager *this, TaskItem *pTaskItem)
{
  eTaskManagerTaskState m_genericTaskState; 
  void (__fastcall *m_onCompletionCallback)(GenericTask *, eTaskManagerTaskState); 
  TaskItem::eTaskItemState m_state; 

  if ( (pTaskItem->m_task.m_genericTaskState == TASKSTATE_PENDING || pTaskItem->m_state <= TASKITEMSTATE_AVAILABLE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\tasksystem\\taskmanager.cpp", 206, ASSERT_TYPE_ASSERT, "(pTaskItem->m_task.m_genericTaskState != TASKSTATE_PENDING && (pTaskItem->m_state > TaskItem::TASKITEMSTATE_AVAILABLE))", (const char *)&queryFormat, "pTaskItem->m_task.m_genericTaskState != TASKSTATE_PENDING && (pTaskItem->m_state > TaskItem::TASKITEMSTATE_AVAILABLE)") )
    __debugbreak();
  Com_Printf(16, "ResolveTask resolving task with local id %d\n", pTaskItem->m_task.m_localTaskId);
  if ( pTaskItem->m_state == TASKITEMSTATE_IN_USE )
  {
    m_genericTaskState = pTaskItem->m_task.m_genericTaskState;
    if ( m_genericTaskState == TASKSTATE_PENDING && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\tasksystem\\taskmanager.cpp", 279, ASSERT_TYPE_ASSERT, "(taskState != TASKSTATE_PENDING)", (const char *)&queryFormat, "taskState != TASKSTATE_PENDING") )
      __debugbreak();
    m_onCompletionCallback = pTaskItem->m_task.m_onCompletionCallback;
    if ( m_onCompletionCallback )
    {
      m_state = pTaskItem->m_state;
      pTaskItem->m_state = TASKITEMSTATE_IN_COMPLETE_CALLBACK;
      m_onCompletionCallback(&pTaskItem->m_task, m_genericTaskState);
      pTaskItem->m_state = m_state;
      --this->m_activeTaskCount;
      if ( pTaskItem->m_task.m_remoteDemonwareTask.m_ptr )
        --this->m_activeDemonwareTaskCount;
      if ( pTaskItem->m_task.m_asyncInfo )
        --this->m_activeMicrosoftTaskCount;
      GenericTask::ClearTask(&pTaskItem->m_task);
      GenericTask::ClearTask(&pTaskItem->m_task);
      pTaskItem->m_state = TASKITEMSTATE_AVAILABLE;
    }
    --this->m_activeTaskCount;
    if ( pTaskItem->m_task.m_remoteDemonwareTask.m_ptr )
      --this->m_activeDemonwareTaskCount;
    if ( pTaskItem->m_task.m_asyncInfo )
      --this->m_activeMicrosoftTaskCount;
    GenericTask::ClearTask(&pTaskItem->m_task);
    GenericTask::ClearTask(&pTaskItem->m_task);
    pTaskItem->m_state = TASKITEMSTATE_AVAILABLE;
  }
}

/*
==============
TaskManager::ShouldRunTaskBreaker
==============
*/
bool TaskManager::ShouldRunTaskBreaker(TaskManager *this, TaskType taskType)
{
  return TaskBreaker_ShouldHandleCall(taskType);
}

/*
==============
TaskManager::Update
==============
*/
void TaskManager::Update(TaskManager *this)
{
  int v2; 
  void (__fastcall **p_m_onUpdateCallback)(GenericTask *); 
  unsigned int v4; 
  void (__fastcall *v5)(GenericTask *); 
  bool v6; 
  int v7; 
  void (__fastcall *v8)(GenericTask *); 
  int v9; 
  int v10; 
  void (__fastcall *v11)(GenericTask *); 
  int v12; 
  Windows::Foundation::HResult v13; 
  __int64 v14; 
  __int64 v15; 
  HSTRING v16; 
  const wchar_t *StringRawBuffer_0; 
  int v18; 
  Windows::Foundation::HResult __valueArg; 
  __int64 v20; 
  HSTRING v21; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\tasksystem\\taskmanager.cpp", 446, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()", -2i64) )
    __debugbreak();
  this->m_currentTimeInSeconds = Sys_Milliseconds() / 1000;
  v2 = 0;
  p_m_onUpdateCallback = &this->m_tasks[0].m_task.m_onUpdateCallback;
  do
  {
    if ( *((_DWORD *)p_m_onUpdateCallback - 4) != 1 )
      goto LABEL_32;
    v4 = *((_DWORD *)p_m_onUpdateCallback + 15);
    if ( v4 && this->m_currentTimeInSeconds - *((_DWORD *)p_m_onUpdateCallback + 16) > v4 )
    {
      *((_DWORD *)p_m_onUpdateCallback + 6) = 5;
      TaskManager::ResolveTask(this, &this->m_tasks[v2]);
      goto LABEL_32;
    }
    v5 = *p_m_onUpdateCallback;
    if ( *p_m_onUpdateCallback )
    {
      *((_DWORD *)p_m_onUpdateCallback - 4) = 2;
      ((void (__fastcall *)(void (__fastcall **)(GenericTask *), const char *))v5)(p_m_onUpdateCallback - 1, "Task in system with no method of terminating\n");
      *((_DWORD *)p_m_onUpdateCallback - 4) = 1;
      v6 = *((_DWORD *)p_m_onUpdateCallback + 6) == 6;
      goto LABEL_11;
    }
    if ( p_m_onUpdateCallback[2] )
    {
      v7 = 6;
      switch ( (*(unsigned int (__fastcall **)(void (__fastcall *)(GenericTask *), const char *))(*(_QWORD *)p_m_onUpdateCallback[2] + 8i64))(p_m_onUpdateCallback[2], "Task in system with no method of terminating\n") )
      {
        case 0u:
        case 3u:
        case 4u:
        case 6u:
          v7 = 1;
          goto LABEL_18;
        case 2u:
          *((_DWORD *)p_m_onUpdateCallback + 6) = bdRemoteTask::getErrorCode((bdRemoteTask *)p_m_onUpdateCallback[2]) != BD_NO_ERROR;
          TaskManager::ResolveTask(this, (TaskItem *)(p_m_onUpdateCallback - 2));
          goto LABEL_32;
        case 5u:
          goto LABEL_16;
        default:
LABEL_18:
          *((_DWORD *)p_m_onUpdateCallback + 6) = v7;
          v6 = v7 == 6;
          break;
      }
      goto LABEL_11;
    }
    v8 = p_m_onUpdateCallback[1];
    if ( v8 )
    {
      v9 = 6;
      v18 = 0;
      v10 = (*(__int64 (__fastcall **)(void (__fastcall *)(GenericTask *), int *))(*(_QWORD *)v8 + 56i64))(v8, &v18);
      if ( v10 < 0 )
        __abi_WinRTraiseException(v10);
      if ( v18 == 1 )
      {
        v9 = 0;
LABEL_29:
        *((_DWORD *)p_m_onUpdateCallback + 6) = v9;
        v6 = v9 == 6;
LABEL_11:
        if ( !v6 )
          TaskManager::ResolveTask(this, (TaskItem *)(p_m_onUpdateCallback - 2));
        goto LABEL_32;
      }
      if ( v18 == 2 )
      {
LABEL_16:
        *((_DWORD *)p_m_onUpdateCallback + 6) = 4;
        TaskManager::ResolveTask(this, (TaskItem *)(p_m_onUpdateCallback - 2));
        goto LABEL_32;
      }
      if ( v18 != 3 )
        goto LABEL_29;
      v11 = p_m_onUpdateCallback[1];
      __valueArg = 0;
      v12 = (*(__int64 (__fastcall **)(void (__fastcall *)(GenericTask *), Windows::Foundation::HResult *))(*(_QWORD *)v11 + 64i64))(v11, &__valueArg);
      if ( v12 < 0 )
        __abi_WinRTraiseException(v12);
      v13 = __valueArg;
      v20 = 0i64;
      Platform::Box<Windows::Foundation::HResult>::Box<Windows::Foundation::HResult>(NULL, __valueArg);
      v15 = v14;
      v20 = v14;
      v16 = (HSTRING)Platform::ValueType::ToString(v14);
      v21 = v16;
      StringRawBuffer_0 = WindowsGetStringRawBuffer_0(v16, NULL);
      Com_PrintWarning(25, "TaskManager::UpdateAsyncOpTask Error: %ls (0x%x)\n", StringRawBuffer_0, *(unsigned int *)&v13);
      WindowsDeleteString_0(v16);
      if ( v15 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16i64))(v15);
      *((_DWORD *)p_m_onUpdateCallback + 6) = 1;
      TaskManager::ResolveTask(this, (TaskItem *)(p_m_onUpdateCallback - 2));
    }
    else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\tasksystem\\taskmanager.cpp", 484, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Task in system with no method of terminating\n") )
    {
      __debugbreak();
    }
LABEL_32:
    ++v2;
    p_m_onUpdateCallback += 11;
  }
  while ( v2 < 128 );
}

/*
==============
TaskManager::UpdateAsyncOpTask
==============
*/
__int64 TaskManager::UpdateAsyncOpTask(TaskManager *this, GenericTask *pTask)
{
  eTaskManagerTaskState v3; 
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  int v5; 
  Windows::Foundation::IAsyncInfo *v6; 
  int v7; 
  Windows::Foundation::HResult v8; 
  __int64 v9; 
  __int64 v10; 
  HSTRING v11; 
  const wchar_t *StringRawBuffer_0; 
  Windows::Foundation::HResult __valueArg; 
  __int64 v15; 
  HSTRING v16; 

  if ( !pTask->m_asyncInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\tasksystem\\taskmanager.cpp", 312, ASSERT_TYPE_ASSERT, "(pTask->m_asyncInfo != nullptr)", (const char *)&queryFormat, "pTask->m_asyncInfo != nullptr", -2i64) )
    __debugbreak();
  v3 = TASKSTATE_PENDING;
  m_asyncInfo = pTask->m_asyncInfo;
  __valueArg = 0;
  v5 = m_asyncInfo->__abi_get_Status(m_asyncInfo, (Windows::Foundation::AsyncStatus *)&__valueArg);
  if ( v5 < 0 )
    __abi_WinRTraiseException(v5);
  switch ( (unsigned int)__valueArg )
  {
    case 1u:
      v3 = TASKSTATE_SUCCESS;
      break;
    case 2u:
      v3 = TASKSTATE_CANCELED;
      break;
    case 3u:
      v6 = pTask->m_asyncInfo;
      __valueArg = 0;
      v7 = v6->__abi_get_ErrorCode(v6, &__valueArg);
      if ( v7 < 0 )
        __abi_WinRTraiseException(v7);
      v8 = __valueArg;
      v15 = 0i64;
      Platform::Box<Windows::Foundation::HResult>::Box<Windows::Foundation::HResult>(NULL, __valueArg);
      v10 = v9;
      v15 = v9;
      v11 = (HSTRING)Platform::ValueType::ToString(v9);
      v16 = v11;
      StringRawBuffer_0 = WindowsGetStringRawBuffer_0(v11, NULL);
      Com_PrintWarning(25, "TaskManager::UpdateAsyncOpTask Error: %ls (0x%x)\n", StringRawBuffer_0, *(unsigned int *)&v8);
      WindowsDeleteString_0(v11);
      if ( v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16i64))(v10);
      v3 = TASKSTATE_ERROR;
      break;
  }
  pTask->m_genericTaskState = v3;
  return (unsigned int)v3;
}

/*
==============
TaskManager::UpdateDemonwareTask
==============
*/
__int64 TaskManager::UpdateDemonwareTask(TaskManager *this, GenericTask *pTask)
{
  eTaskManagerTaskState v3; 
  bdLobbyErrorCode ErrorCode; 
  __int64 result; 

  if ( !pTask->m_remoteDemonwareTask.m_ptr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\tasksystem\\taskmanager.cpp", 379, ASSERT_TYPE_ASSERT, "(pTask->m_remoteDemonwareTask != (0))", (const char *)&queryFormat, "pTask->m_remoteDemonwareTask != BD_NULL") )
    __debugbreak();
  v3 = TASKSTATE_PENDING;
  switch ( pTask->m_remoteDemonwareTask.m_ptr->getStatus(pTask->m_remoteDemonwareTask.m_ptr) )
  {
    case BD_EMPTY:
    case BD_FAILED:
    case BD_TIMED_OUT:
    case BD_MAX_STATUS:
      v3 = TASKSTATE_ERROR;
      goto LABEL_8;
    case BD_DONE:
      ErrorCode = bdRemoteTask::getErrorCode(pTask->m_remoteDemonwareTask.m_ptr);
      pTask->m_genericTaskState = ErrorCode != BD_NO_ERROR;
      result = ErrorCode != BD_NO_ERROR;
      break;
    case BD_CANCELLED:
      pTask->m_genericTaskState = TASKSTATE_CANCELED;
      result = 4i64;
      break;
    default:
LABEL_8:
      pTask->m_genericTaskState = v3;
      result = (unsigned int)v3;
      break;
  }
  return result;
}

/*
==============
TaskManager::UpdateTaskUsingAppCallback
==============
*/
void TaskManager::UpdateTaskUsingAppCallback(TaskManager *this, TaskItem *pTaskItem)
{
  TaskItem::eTaskItemState m_state; 
  bool v5; 

  m_state = pTaskItem->m_state;
  pTaskItem->m_state = TASKITEMSTATE_IN_UPDATE_CALLBACK;
  pTaskItem->m_task.m_onUpdateCallback(&pTaskItem->m_task);
  v5 = pTaskItem->m_task.m_genericTaskState == TASKSTATE_PENDING;
  pTaskItem->m_state = m_state;
  if ( !v5 )
    TaskManager::ResolveTask(this, pTaskItem);
}

/*
==============
TaskManager::UpdateTaskUsingAsyncOp
==============
*/
void TaskManager::UpdateTaskUsingAsyncOp(TaskManager *this, TaskItem *pTaskItem)
{
  eTaskManagerTaskState v4; 
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  int v6; 
  Windows::Foundation::IAsyncInfo *v7; 
  int v8; 
  Windows::Foundation::HResult v9; 
  __int64 v10; 
  __int64 v11; 
  const wchar_t *StringRawBuffer_0; 
  HSTRING v13; 
  int v14; 
  Windows::Foundation::HResult __valueArg; 
  __int64 v16; 

  if ( !pTaskItem->m_task.m_asyncInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\tasksystem\\taskmanager.cpp", 312, ASSERT_TYPE_ASSERT, "(pTask->m_asyncInfo != nullptr)", (const char *)&queryFormat, "pTask->m_asyncInfo != nullptr", -2i64) )
    __debugbreak();
  v4 = TASKSTATE_PENDING;
  m_asyncInfo = pTaskItem->m_task.m_asyncInfo;
  v14 = 0;
  v6 = m_asyncInfo->__abi_get_Status(m_asyncInfo, (Windows::Foundation::AsyncStatus *)&v14);
  if ( v6 < 0 )
    __abi_WinRTraiseException(v6);
  switch ( v14 )
  {
    case 1:
      v4 = TASKSTATE_SUCCESS;
      break;
    case 2:
      v4 = TASKSTATE_CANCELED;
      break;
    case 3:
      v7 = pTaskItem->m_task.m_asyncInfo;
      __valueArg = 0;
      v8 = v7->__abi_get_ErrorCode(v7, &__valueArg);
      if ( v8 < 0 )
        __abi_WinRTraiseException(v8);
      v9 = __valueArg;
      v16 = 0i64;
      Platform::Box<Windows::Foundation::HResult>::Box<Windows::Foundation::HResult>(NULL, __valueArg);
      v11 = v10;
      v16 = v10;
      v13 = (HSTRING)Platform::ValueType::ToString(v10);
      StringRawBuffer_0 = WindowsGetStringRawBuffer_0(v13, NULL);
      Com_PrintWarning(25, "TaskManager::UpdateAsyncOpTask Error: %ls (0x%x)\n", StringRawBuffer_0, *(unsigned int *)&v9);
      WindowsDeleteString_0(v13);
      if ( v11 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16i64))(v11);
      v4 = TASKSTATE_ERROR;
      break;
  }
  pTaskItem->m_task.m_genericTaskState = v4;
  if ( v4 != TASKSTATE_PENDING )
    TaskManager::ResolveTask(this, pTaskItem);
}

/*
==============
TaskManager::UpdateTaskUsingRemoteTaskReference
==============
*/
void TaskManager::UpdateTaskUsingRemoteTaskReference(TaskManager *this, TaskItem *pTaskItem)
{
  eTaskManagerTaskState v4; 

  if ( !pTaskItem->m_task.m_remoteDemonwareTask.m_ptr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\tasksystem\\taskmanager.cpp", 379, ASSERT_TYPE_ASSERT, "(pTask->m_remoteDemonwareTask != (0))", (const char *)&queryFormat, "pTask->m_remoteDemonwareTask != BD_NULL") )
    __debugbreak();
  v4 = TASKSTATE_PENDING;
  switch ( pTaskItem->m_task.m_remoteDemonwareTask.m_ptr->getStatus(pTaskItem->m_task.m_remoteDemonwareTask.m_ptr) )
  {
    case BD_EMPTY:
    case BD_FAILED:
    case BD_TIMED_OUT:
    case BD_MAX_STATUS:
      v4 = TASKSTATE_ERROR;
      break;
    case BD_DONE:
      v4 = bdRemoteTask::getErrorCode(pTaskItem->m_task.m_remoteDemonwareTask.m_ptr) != BD_NO_ERROR;
      break;
    case BD_CANCELLED:
      v4 = TASKSTATE_CANCELED;
      break;
    default:
      break;
  }
  pTaskItem->m_task.m_genericTaskState = v4;
  if ( v4 != TASKSTATE_PENDING )
    TaskManager::ResolveTask(this, pTaskItem);
}

