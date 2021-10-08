/*
==============
GClientTaskQueue::AddTaskInternal
==============
*/

bool __fastcall GClientTaskQueue::AddTaskInternal(GClientTaskQueue *this, void (__fastcall *taskCallback)(gentity_s *, GClientTaskQueue *), const void *taskData, const unsigned int taskDataSize, const unsigned int taskDataAlign, const char *debugTaskName)
{
  return ?AddTaskInternal@GClientTaskQueue@@AEAA_NP6AXPEAUgentity_s@@PEAV1@@ZPEBXIIPEBD@Z(this, taskCallback, taskData, taskDataSize, taskDataAlign, debugTaskName);
}

/*
==============
GClientTaskQueue::GetHighWatermark
==============
*/

void __fastcall GClientTaskQueue::GetHighWatermark(unsigned int *outBufferWatermarmark)
{
  ?GetHighWatermark@GClientTaskQueue@@SAXAEAI@Z(outBufferWatermarmark);
}

/*
==============
GClientTaskQueue::ClearHighWatermark
==============
*/

void GClientTaskQueue::ClearHighWatermark(void)
{
  ?ClearHighWatermark@GClientTaskQueue@@SAXXZ();
}

/*
==============
GClienThinkTaskManager::GetTaskQueueAtIndex
==============
*/

GClientTaskQueue *__fastcall GClienThinkTaskManager::GetTaskQueueAtIndex(GClienThinkTaskManager *this, const int clientNum, const unsigned int taskIndex)
{
  return ?GetTaskQueueAtIndex@GClienThinkTaskManager@@AEAAAEAVGClientTaskQueue@@HI@Z(this, clientNum, taskIndex);
}

/*
==============
GClienThinkTaskManager::AllocateMemory
==============
*/

void __fastcall GClienThinkTaskManager::AllocateMemory(GClienThinkTaskManager *this, HunkUser *hunkUser, const unsigned int maxClients)
{
  ?AllocateMemory@GClienThinkTaskManager@@QEAAXPEAUHunkUser@@I@Z(this, hunkUser, maxClients);
}

/*
==============
GClienThinkTaskManager::GetMemorySize
==============
*/

unsigned int __fastcall GClienThinkTaskManager::GetMemorySize(const unsigned int maxClients)
{
  return ?GetMemorySize@GClienThinkTaskManager@@SAII@Z(maxClients);
}

/*
==============
GClientTaskQueue::DumpTasksForClient
==============
*/

void __fastcall GClientTaskQueue::DumpTasksForClient(GClientTaskQueue *this)
{
  ?DumpTasksForClient@GClientTaskQueue@@AEAAXXZ(this);
}

/*
==============
GClientTaskQueue::GetParameterInternal
==============
*/

const void *__fastcall GClientTaskQueue::GetParameterInternal(GClientTaskQueue *this, const unsigned int size, const unsigned int align)
{
  return ?GetParameterInternal@GClientTaskQueue@@AEAAPEBXII@Z(this, size, align);
}

/*
==============
GClienThinkTaskManager::ExecuteTasks
==============
*/

void __fastcall GClienThinkTaskManager::ExecuteTasks(GClienThinkTaskManager *this)
{
  ?ExecuteTasks@GClienThinkTaskManager@@QEAAXXZ(this);
}

/*
==============
GClientTaskQueue::Init
==============
*/

void __fastcall GClientTaskQueue::Init(GClientTaskQueue *this, const int clientNum)
{
  ?Init@GClientTaskQueue@@QEAAXH@Z(this, clientNum);
}

/*
==============
GClientTaskQueue::ExecuteTasks
==============
*/

void __fastcall GClientTaskQueue::ExecuteTasks(GClientTaskQueue *this)
{
  ?ExecuteTasks@GClientTaskQueue@@QEAAXXZ(this);
}

/*
==============
GClientTaskQueue::AllocateParameter
==============
*/

bool __fastcall GClientTaskQueue::AllocateParameter(GClientTaskQueue *this, const unsigned int size, const unsigned int align, void **outParameter)
{
  return ?AllocateParameter@GClientTaskQueue@@AEAA_NIIPEAPEAX@Z(this, size, align, outParameter);
}

/*
==============
GClientTaskQueue::ValidateOwnerNum
==============
*/

bool __fastcall GClientTaskQueue::ValidateOwnerNum(GClientTaskQueue *this, const int owner)
{
  return ?ValidateOwnerNum@GClientTaskQueue@@QEBA_NH@Z(this, owner);
}

/*
==============
GClientTaskQueue::UpdateHighWaterMark
==============
*/

void __fastcall GClientTaskQueue::UpdateHighWaterMark(GClientTaskQueue *this)
{
  ?UpdateHighWaterMark@GClientTaskQueue@@AEAAXXZ(this);
}

/*
==============
GClienThinkTaskManager::FreeMemory
==============
*/

void __fastcall GClienThinkTaskManager::FreeMemory(GClienThinkTaskManager *this)
{
  ?FreeMemory@GClienThinkTaskManager@@QEAAXXZ(this);
}

/*
==============
GClientTaskQueue::ValidateExecution
==============
*/

void __fastcall GClientTaskQueue::ValidateExecution(GClientTaskQueue *this)
{
  ?ValidateExecution@GClientTaskQueue@@QEAAXXZ(this);
}

/*
==============
GClienThinkTaskManager::AllocateTaskQueue
==============
*/

bool __fastcall GClienThinkTaskManager::AllocateTaskQueue(GClienThinkTaskManager *this, const int clientNum, GClientTaskQueue **outTaskQueue)
{
  return ?AllocateTaskQueue@GClienThinkTaskManager@@QEAA_NHPEAPEAVGClientTaskQueue@@@Z(this, clientNum, outTaskQueue);
}

/*
==============
GClientTaskQueue::ValidateOwner
==============
*/

bool __fastcall GClientTaskQueue::ValidateOwner(GClientTaskQueue *this, const gentity_s *owner)
{
  return ?ValidateOwner@GClientTaskQueue@@QEBA_NPEBUgentity_s@@@Z(this, owner);
}

/*
==============
GClienThinkTaskManager::ClearTasks
==============
*/

void __fastcall GClienThinkTaskManager::ClearTasks(GClienThinkTaskManager *this)
{
  ?ClearTasks@GClienThinkTaskManager@@AEAAXXZ(this);
}

/*
==============
GClienThinkTaskManager::ClearTaskFlags
==============
*/

void __fastcall GClienThinkTaskManager::ClearTaskFlags(GClienThinkTaskManager *this)
{
  ?ClearTaskFlags@GClienThinkTaskManager@@AEAAXXZ(this);
}

/*
==============
GClientTaskQueue::AddTaskInternal
==============
*/
char GClientTaskQueue::AddTaskInternal(GClientTaskQueue *this, void (*taskCallback)(gentity_s *, GClientTaskQueue *), const void *taskData, const unsigned int taskDataSize, const unsigned int taskDataAlign, const char *debugTaskName)
{
  size_t v6; 
  void *v10; 
  unsigned int m_taskBufHead; 
  unsigned int m_taskBufTail; 
  unsigned int v13; 
  unsigned __int8 *v14; 
  const dvar_t *v15; 
  const char *v16; 
  const char *v17; 
  unsigned __int16 v18; 
  unsigned int v19; 
  const dvar_t *v21; 
  const char *v22; 
  __int64 v23; 
  __int64 v24; 
  void *outParameter; 

  v6 = taskDataSize;
  if ( !taskCallback && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client_tasks.cpp", 184, ASSERT_TYPE_ASSERT, "( taskCallback )", (const char *)&queryFormat, "taskCallback") )
    __debugbreak();
  if ( !(_DWORD)v6 && taskData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client_tasks.cpp", 185, ASSERT_TYPE_ASSERT, "( (taskDataSize > 0) || (taskData == nullptr) )", (const char *)&queryFormat, "(taskDataSize > 0) || (taskData == nullptr)") )
    __debugbreak();
  v10 = NULL;
  if ( this->m_taskBufHead )
  {
    LODWORD(v23) = this->m_taskBufHead;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client_tasks.cpp", 186, ASSERT_TYPE_ASSERT, "( m_taskBufHead ) == ( 0 )", "m_taskBufHead == 0\n\t%i, %i", v23, 0i64) )
      __debugbreak();
  }
  m_taskBufHead = this->m_taskBufHead;
  m_taskBufTail = this->m_taskBufTail;
  outParameter = NULL;
  if ( m_taskBufHead )
  {
    LODWORD(v23) = m_taskBufHead;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client_tasks.cpp", 63, ASSERT_TYPE_ASSERT, "( m_taskBufHead ) == ( 0 )", "m_taskBufHead == 0\n\t%i, %i", v23, 0i64) )
      __debugbreak();
  }
  if ( this->m_taskBufTail > 0x1140 )
  {
    LODWORD(v24) = 4416;
    LODWORD(v23) = this->m_taskBufTail;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client_tasks.cpp", 64, ASSERT_TYPE_ASSERT, "( m_taskBufTail ) <= ( TASK_BUFFER_SIZE )", "m_taskBufTail not in [0, TASK_BUFFER_SIZE]\n\t%u not in [0, %u]", v23, v24) )
      __debugbreak();
  }
  v13 = AlignUp<unsigned int>(this->m_taskBufTail, 8ui64);
  if ( v13 + 24 > 0x1140 )
  {
    if ( m_taskBufTail != this->m_taskBufTail )
    {
      LODWORD(v24) = this->m_taskBufTail;
      LODWORD(v23) = m_taskBufTail;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client_tasks.cpp", 199, ASSERT_TYPE_ASSERT, "( rollbackBufTail ) == ( m_taskBufTail )", "rollbackBufTail == m_taskBufTail\n\t%i, %i", v23, v24) )
        __debugbreak();
    }
    GClientTaskQueue::DumpTasksForClient(this);
    v21 = DCONST_DVARBOOL_sv_client_task_limit_assert;
    if ( !DCONST_DVARBOOL_sv_client_task_limit_assert && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_client_task_limit_assert") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v21);
    v22 = debugTaskName;
    if ( v21->current.enabled )
    {
      LODWORD(v23) = this->m_clientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client_tasks.cpp", 206, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Could not add task header for client %i, task buffer is full (%s)", v23, debugTaskName) )
        __debugbreak();
    }
    Com_PrintError(15, "Could not add task header for client %i, task buffer is full (%s)", (unsigned int)this->m_clientNum, v22);
    return 0;
  }
  v14 = &this->m_taskBuffer[v13];
  this->m_taskBufTail = v13 + 24;
  if ( (_DWORD)v6 )
  {
    if ( !GClientTaskQueue::AllocateParameter(this, v6, taskDataAlign, &outParameter) )
    {
      this->m_taskBufTail = m_taskBufTail;
      GClientTaskQueue::DumpTasksForClient(this);
      v15 = DCONST_DVARBOOL_sv_client_task_limit_assert;
      if ( !DCONST_DVARBOOL_sv_client_task_limit_assert && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_client_task_limit_assert") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v15);
      v16 = debugTaskName;
      if ( v15->current.enabled )
      {
        LODWORD(v24) = this->m_clientNum;
        LODWORD(v23) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client_tasks.cpp", 225, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Could not add task payload (%i) for client %i, task buffer is full (%s)", v23, v24, debugTaskName) )
          __debugbreak();
      }
      Com_PrintError(15, "Could not add task payload (%i) for client %i, task buffer is full (%s)", (unsigned int)v6, (unsigned int)this->m_clientNum, v16);
      return 0;
    }
    v10 = outParameter;
  }
  v17 = debugTaskName;
  *(_QWORD *)v14 = taskCallback;
  *((_QWORD *)v14 + 1) = v17;
  v18 = truncate_cast<unsigned short,unsigned int>(v6);
  v19 = taskDataAlign;
  *((_WORD *)v14 + 8) = v18;
  *((_WORD *)v14 + 9) = truncate_cast<unsigned short,unsigned int>(v19);
  if ( (_DWORD)v6 )
    memcpy_0(v10, taskData, v6);
  return 1;
}

/*
==============
GClienThinkTaskManager::AllocateMemory
==============
*/
void GClienThinkTaskManager::AllocateMemory(GClienThinkTaskManager *this, HunkUser *hunkUser, const unsigned int maxClients)
{
  __int64 v3; 
  unsigned int v6; 
  unsigned int m_allocatedClientCount; 
  __int64 v8; 
  GClienThinkTaskManager::PriorityListIem *m_executePriorityList; 
  unsigned int v10; 
  __int64 v11; 

  v3 = maxClients;
  if ( !hunkUser && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client_tasks.cpp", 327, ASSERT_TYPE_ASSERT, "( hunkUser )", (const char *)&queryFormat, "hunkUser") )
    __debugbreak();
  if ( this->m_taskQueues )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client_tasks.cpp", 328, ASSERT_TYPE_ASSERT, "( m_taskQueues == nullptr )", (const char *)&queryFormat, "m_taskQueues == nullptr") )
      __debugbreak();
    if ( this->m_taskQueues && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client_tasks.cpp", 336, ASSERT_TYPE_ASSERT, "( m_taskQueues == nullptr )", (const char *)&queryFormat, "m_taskQueues == nullptr") )
      __debugbreak();
  }
  if ( this->m_executePriorityList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client_tasks.cpp", 337, ASSERT_TYPE_ASSERT, "( m_executePriorityList == nullptr )", (const char *)&queryFormat, "m_executePriorityList == nullptr") )
    __debugbreak();
  if ( this->m_taskQueueNextIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client_tasks.cpp", 338, ASSERT_TYPE_ASSERT, "( m_taskQueueNextIndex == nullptr )", (const char *)&queryFormat, "m_taskQueueNextIndex == nullptr") )
    __debugbreak();
  this->m_taskQueues = (GClientTaskQueue *)Mem_HunkUser_AllocInternal(hunkUser, 4432i64 * (unsigned int)(6 * v3), 8ui64, "GClienThinkTaskManager::AllocateMemory");
  this->m_executePriorityList = (GClienThinkTaskManager::PriorityListIem *)Mem_HunkUser_AllocInternal(hunkUser, 8i64 * (unsigned int)(6 * v3), 8ui64, "GClienThinkTaskManager::AllocateMemory");
  this->m_taskQueueNextIndex = (unsigned __int16 *)Mem_HunkUser_AllocInternal(hunkUser, 2 * v3, 8ui64, "GClienThinkTaskManager::AllocateMemory");
  this->m_taskFlags = (unsigned int *)Mem_HunkUser_AllocInternal(hunkUser, 4 * v3, 8ui64, "GClienThinkTaskManager::AllocateMemory");
  this->m_allocatedClientCount = v3;
  v6 = 0;
  m_allocatedClientCount = this->m_allocatedClientCount;
  this->m_executePriorityCount = 0;
  if ( m_allocatedClientCount )
  {
    do
    {
      v8 = v6++;
      this->m_taskQueueNextIndex[v8] = 0;
      m_allocatedClientCount = this->m_allocatedClientCount;
    }
    while ( v6 < m_allocatedClientCount );
  }
  m_executePriorityList = this->m_executePriorityList;
  if ( m_executePriorityList )
  {
    DebugWipe(m_executePriorityList, 48i64 * m_allocatedClientCount);
    m_allocatedClientCount = this->m_allocatedClientCount;
  }
  v10 = 0;
  if ( m_allocatedClientCount )
  {
    do
    {
      if ( !this->m_taskFlags && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client_tasks.h", 243, ASSERT_TYPE_ASSERT, "( m_taskFlags )", (const char *)&queryFormat, "m_taskFlags") )
        __debugbreak();
      v11 = (int)v10++;
      this->m_taskFlags[v11] = 0;
    }
    while ( v10 < this->m_allocatedClientCount );
  }
}

/*
==============
GClientTaskQueue::AllocateParameter
==============
*/
bool GClientTaskQueue::AllocateParameter(GClientTaskQueue *this, const unsigned int size, const unsigned int align, void **outParameter)
{
  unsigned __int64 v4; 
  unsigned int v8; 
  unsigned int v9; 
  bool result; 
  __int64 v11; 
  __int64 v12; 

  v4 = align;
  if ( !size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client_tasks.cpp", 59, ASSERT_TYPE_ASSERT, "( size > 0 )", (const char *)&queryFormat, "size > 0") )
    __debugbreak();
  if ( !(_DWORD)v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client_tasks.cpp", 60, ASSERT_TYPE_ASSERT, "( align > 0 )", (const char *)&queryFormat, "align > 0") )
    __debugbreak();
  if ( !outParameter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client_tasks.cpp", 61, ASSERT_TYPE_ASSERT, "( outParameter != nullptr )", (const char *)&queryFormat, "outParameter != nullptr") )
    __debugbreak();
  if ( (unsigned int)v4 > 8 )
  {
    LODWORD(v11) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client_tasks.cpp", 62, ASSERT_TYPE_ASSERT, "( align ) <= ( G_CLIENT_TASK_QUEUE_ALIGN )", "align <= G_CLIENT_TASK_QUEUE_ALIGN\n\t%i, %i", v11, 8) )
      __debugbreak();
  }
  if ( this->m_taskBufHead )
  {
    LODWORD(v11) = this->m_taskBufHead;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client_tasks.cpp", 63, ASSERT_TYPE_ASSERT, "( m_taskBufHead ) == ( 0 )", "m_taskBufHead == 0\n\t%i, %i", v11, 0i64) )
      __debugbreak();
  }
  if ( this->m_taskBufTail > 0x1140 )
  {
    LODWORD(v12) = 4416;
    LODWORD(v11) = this->m_taskBufTail;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client_tasks.cpp", 64, ASSERT_TYPE_ASSERT, "( m_taskBufTail ) <= ( TASK_BUFFER_SIZE )", "m_taskBufTail not in [0, TASK_BUFFER_SIZE]\n\t%u not in [0, %u]", v11, v12) )
      __debugbreak();
  }
  v8 = AlignUp<unsigned int>(this->m_taskBufTail, v4);
  v9 = v8 + size;
  if ( v8 + size > 0x1140 )
    return 0;
  *outParameter = &this->m_taskBuffer[v8];
  result = 1;
  this->m_taskBufTail = v9;
  return result;
}

/*
==============
GClienThinkTaskManager::AllocateTaskQueue
==============
*/
char GClienThinkTaskManager::AllocateTaskQueue(GClienThinkTaskManager *this, const int clientNum, GClientTaskQueue **outTaskQueue)
{
  __int64 v3; 
  __int64 v6; 
  GClientTaskQueue *TaskQueueAtIndex; 
  unsigned int v9; 
  GClienThinkTaskManager::PriorityListIem *m_executePriorityList; 
  __int64 v11; 
  __int64 v12; 

  v3 = clientNum;
  if ( !outTaskQueue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client_tasks.cpp", 381, ASSERT_TYPE_ASSERT, "( outTaskQueue )", (const char *)&queryFormat, "outTaskQueue") )
    __debugbreak();
  if ( (unsigned int)v3 >= this->m_allocatedClientCount )
  {
    LODWORD(v11) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client_tasks.cpp", 382, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( m_allocatedClientCount )", "clientNum doesn't index m_allocatedClientCount\n\t%i not in [0, %i)", v11, this->m_allocatedClientCount) )
      __debugbreak();
  }
  v6 = this->m_taskQueueNextIndex[v3];
  if ( (unsigned int)v6 < 6 )
  {
    TaskQueueAtIndex = GClienThinkTaskManager::GetTaskQueueAtIndex(this, v3, v6);
    TaskQueueAtIndex->m_clientNum = v3;
    *(_QWORD *)&TaskQueueAtIndex->m_taskBufHead = 0i64;
    *(_DWORD *)&TaskQueueAtIndex->m_paramNextSize = 0;
    DebugWipe(TaskQueueAtIndex, 0x1140ui64);
    *outTaskQueue = TaskQueueAtIndex;
    ++this->m_taskQueueNextIndex[v3];
    if ( ((unsigned __int8)this & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", this) )
      __debugbreak();
    v9 = _InterlockedExchangeAdd(&this->m_executePriorityCount, 1u);
    if ( v9 > 6 * this->m_allocatedClientCount )
    {
      LODWORD(v12) = 6 * this->m_allocatedClientCount;
      LODWORD(v11) = v9;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client_tasks.cpp", 403, ASSERT_TYPE_ASSERT, "( executePriorityIndex ) <= ( m_allocatedClientCount * GCLIENT_TASKS_QUEUE_COUNT )", "executePriorityIndex <= m_allocatedClientCount * GCLIENT_TASKS_QUEUE_COUNT\n\t%i, %i", v11, v12) )
        __debugbreak();
    }
    m_executePriorityList = this->m_executePriorityList;
    m_executePriorityList[v9].clientNum = v3;
    m_executePriorityList[v9].index = truncate_cast<unsigned short,unsigned int>(v6);
    return 1;
  }
  else
  {
    Com_PrintError(15, "GClienTaskGlobalManager::AllocateTaskQueue: All %u queues are in use for client %u\n", v6, (unsigned int)v3);
    return 0;
  }
}

/*
==============
GClientTaskQueue::ClearHighWatermark
==============
*/
void GClientTaskQueue::ClearHighWatermark(void)
{
  GClientTaskQueue::ms_taskBufHighWatermark = 0;
}

/*
==============
GClienThinkTaskManager::ClearTaskFlags
==============
*/
void GClienThinkTaskManager::ClearTaskFlags(GClienThinkTaskManager *this)
{
  unsigned int i; 
  __int64 v3; 

  for ( i = 0; i < this->m_allocatedClientCount; this->m_taskFlags[v3] = 0 )
  {
    if ( !this->m_taskFlags && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client_tasks.h", 243, ASSERT_TYPE_ASSERT, "( m_taskFlags )", (const char *)&queryFormat, "m_taskFlags") )
      __debugbreak();
    v3 = (int)i++;
  }
}

/*
==============
GClienThinkTaskManager::ClearTasks
==============
*/
void GClienThinkTaskManager::ClearTasks(GClienThinkTaskManager *this)
{
  unsigned int m_allocatedClientCount; 
  unsigned int i; 
  __int64 v4; 
  GClienThinkTaskManager::PriorityListIem *m_executePriorityList; 

  m_allocatedClientCount = this->m_allocatedClientCount;
  this->m_executePriorityCount = 0;
  for ( i = 0; i < m_allocatedClientCount; m_allocatedClientCount = this->m_allocatedClientCount )
  {
    v4 = i++;
    this->m_taskQueueNextIndex[v4] = 0;
  }
  m_executePriorityList = this->m_executePriorityList;
  if ( m_executePriorityList )
    DebugWipe(m_executePriorityList, 48i64 * m_allocatedClientCount);
}

/*
==============
GClientTaskQueue::DumpTasksForClient
==============
*/
void GClientTaskQueue::DumpTasksForClient(GClientTaskQueue *this)
{
  unsigned int i; 
  unsigned int v3; 
  unsigned __int16 m_paramNextSize; 
  unsigned __int16 m_paramNextAlign; 
  unsigned int v6; 
  __int64 v7; 
  unsigned int v8; 
  unsigned __int8 *v9; 
  unsigned __int16 v10; 
  char *fmt; 
  __int64 v12; 
  unsigned int m_taskBufHead; 
  __int64 v14; 

  if ( this->m_taskBufHead )
  {
    m_taskBufHead = this->m_taskBufHead;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client_tasks.cpp", 109, ASSERT_TYPE_ASSERT, "( m_taskBufHead ) == ( 0 )", "m_taskBufHead == 0\n\t%i, %i", m_taskBufHead, 0i64) )
      __debugbreak();
  }
  LODWORD(fmt) = 24;
  Com_Printf(15, "GClientTaskQueue::DumpTasksForClient for Client %u - %u bytes - Header %u\n", (unsigned int)this->m_clientNum, this->m_taskBufTail, fmt);
  for ( i = 1; this->m_taskBufHead < this->m_taskBufTail; ++i )
  {
    v3 = this->m_taskBufHead;
    *(_DWORD *)&this->m_paramNextSize = 524312;
    if ( v3 > 0x1140 )
    {
      LODWORD(v14) = 4416;
      LODWORD(v12) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client_tasks.cpp", 86, ASSERT_TYPE_ASSERT, "( m_taskBufHead ) <= ( TASK_BUFFER_SIZE )", "m_taskBufHead not in [0, TASK_BUFFER_SIZE]\n\t%u not in [0, %u]", v12, v14) )
        __debugbreak();
    }
    if ( this->m_taskBufHead > this->m_taskBufTail )
    {
      LODWORD(v14) = this->m_taskBufTail;
      LODWORD(v12) = this->m_taskBufHead;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client_tasks.cpp", 87, ASSERT_TYPE_ASSERT, "( m_taskBufHead ) <= ( m_taskBufTail )", "m_taskBufHead not in [0, m_taskBufTail]\n\t%u not in [0, %u]", v12, v14) )
        __debugbreak();
    }
    m_paramNextSize = this->m_paramNextSize;
    if ( m_paramNextSize != 24 )
    {
      LODWORD(v14) = 24;
      LODWORD(v12) = m_paramNextSize;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client_tasks.cpp", 88, ASSERT_TYPE_ASSERT, "( m_paramNextSize ) == ( truncate_cast<ushort>( size ) )", "m_paramNextSize == truncate_cast<ushort>( size )\n\t%i, %i", v12, v14) )
        __debugbreak();
    }
    m_paramNextAlign = this->m_paramNextAlign;
    if ( m_paramNextAlign != 8 )
    {
      LODWORD(v14) = 8;
      LODWORD(v12) = m_paramNextAlign;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client_tasks.cpp", 89, ASSERT_TYPE_ASSERT, "( m_paramNextAlign ) == ( truncate_cast<ushort>( align ) )", "m_paramNextAlign == truncate_cast<ushort>( align )\n\t%i, %i", v12, v14) )
        __debugbreak();
    }
    v6 = AlignUp<unsigned int>(this->m_taskBufHead, 8ui64);
    v7 = v6;
    v8 = v6 + 24;
    if ( v6 + 24 > this->m_taskBufTail )
    {
      LODWORD(v14) = this->m_taskBufTail;
      LODWORD(v12) = v6 + 24;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client_tasks.cpp", 93, ASSERT_TYPE_ASSERT, "( paramOffset + size ) <= ( m_taskBufTail )", "paramOffset + size not in [0, m_taskBufTail]\n\t%u not in [0, %u]", v12, v14) )
        __debugbreak();
    }
    v9 = &this->m_taskBuffer[v7];
    if ( ((unsigned __int8)v9 & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client_tasks.cpp", 94, ASSERT_TYPE_ASSERT, "( IsAligned( reinterpret_cast<uintptr_t>(&m_taskBuffer[paramOffset]), align ) )", (const char *)&queryFormat, "IsAligned( reinterpret_cast<uintptr_t>(&m_taskBuffer[paramOffset]), align )") )
      __debugbreak();
    this->m_taskBufHead = v8;
    this->m_paramNextSize = *((_WORD *)v9 + 8);
    this->m_paramNextAlign = *((_WORD *)v9 + 9);
    v10 = *((_WORD *)v9 + 8);
    if ( v10 )
    {
      GClientTaskQueue::GetParameterInternal(this, v10, *((unsigned __int16 *)v9 + 9));
      v10 = *((_WORD *)v9 + 8);
      v8 = this->m_taskBufHead;
    }
    LODWORD(v12) = v10;
    Com_Printf(15, "[%u][%u] '%s' size: %u 0x%p\n", i, v8, *((const char **)v9 + 1), v12, *(const void **)v9);
  }
  this->m_taskBufHead = 0;
}

/*
==============
GClienThinkTaskManager::ExecuteTasks
==============
*/
void GClienThinkTaskManager::ExecuteTasks(GClienThinkTaskManager *this)
{
  unsigned __int32 v2; 
  __int64 v3; 
  __int64 v4; 
  GClienThinkTaskManager::PriorityListIem *v5; 
  GClientTaskQueue *TaskQueueAtIndex; 
  unsigned __int16 index; 
  unsigned __int16 v8; 
  unsigned int i; 
  unsigned int j; 
  GClientTaskQueue *v11; 
  GClientTaskQueue *v12; 
  unsigned int m_taskBufHead; 
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 

  if ( !Sys_IsMainThread() && !Sys_IsServerThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client_tasks.cpp", 415, ASSERT_TYPE_ASSERT, "( Sys_IsMainThread() || Sys_IsServerThread() )", (const char *)&queryFormat, "Sys_IsMainThread() || Sys_IsServerThread()") )
    __debugbreak();
  if ( !this->m_taskQueues && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client_tasks.cpp", 416, ASSERT_TYPE_ASSERT, "( m_taskQueues )", (const char *)&queryFormat, "m_taskQueues") )
    __debugbreak();
  if ( ((unsigned __int8)this & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", this) )
    __debugbreak();
  v2 = _InterlockedExchange(&this->m_executePriorityCount, 0);
  if ( v2 )
  {
    v3 = 0i64;
    v4 = v2;
    do
    {
      v5 = &this->m_executePriorityList[v3];
      TaskQueueAtIndex = GClienThinkTaskManager::GetTaskQueueAtIndex(this, v5->clientNum, v5->index);
      index = v5->index;
      v8 = this->m_taskQueueNextIndex[v5->clientNum];
      if ( index >= v8 )
      {
        LODWORD(v15) = v8;
        LODWORD(v14) = index;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client_tasks.cpp", 427, ASSERT_TYPE_ASSERT, "(unsigned)( priorityListItem.index ) < (unsigned)( m_taskQueueNextIndex[priorityListItem.clientNum] )", "priorityListItem.index doesn't index m_taskQueueNextIndex[priorityListItem.clientNum]\n\t%i not in [0, %i)", v14, v15) )
          __debugbreak();
      }
      if ( v5->clientNum != TaskQueueAtIndex->m_clientNum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client_tasks.cpp", 428, ASSERT_TYPE_ASSERT, "( taskQueue.ValidateOwnerNum( priorityListItem.clientNum ) )", (const char *)&queryFormat, "taskQueue.ValidateOwnerNum( priorityListItem.clientNum )") )
        __debugbreak();
      GClientTaskQueue::ExecuteTasks(TaskQueueAtIndex);
      ++v3;
      --v4;
    }
    while ( v4 );
  }
  for ( i = 0; i < this->m_allocatedClientCount; ++i )
  {
    for ( j = 0; j < this->m_taskQueueNextIndex[i]; ++j )
    {
      v11 = GClienThinkTaskManager::GetTaskQueueAtIndex(this, i, j);
      v12 = v11;
      m_taskBufHead = v11->m_taskBufHead;
      if ( m_taskBufHead != v11->m_taskBufTail )
      {
        v11->m_taskBufHead = 0;
        GClientTaskQueue::DumpTasksForClient(v11);
        LODWORD(v16) = v12->m_taskBufTail;
        LODWORD(v15) = m_taskBufHead;
        LODWORD(v14) = v12->m_clientNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client_tasks.cpp", 278, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Execution Failure for client '%i': head=%u, tail=%u", v14, v15, v16) )
          __debugbreak();
      }
    }
  }
}

/*
==============
GClientTaskQueue::ExecuteTasks
==============
*/
void GClientTaskQueue::ExecuteTasks(GClientTaskQueue *this)
{
  __int64 m_clientNum; 
  __int64 v3; 
  gentity_s *v4; 
  unsigned int m_taskBufTail; 
  unsigned int i; 
  void (__fastcall **ParameterInternal)(gentity_s *, GClientTaskQueue *); 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 

  if ( !Sys_IsMainThread() && !Sys_IsServerThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client_tasks.cpp", 144, ASSERT_TYPE_ASSERT, "( Sys_IsMainThread() || Sys_IsServerThread() )", (const char *)&queryFormat, "Sys_IsMainThread() || Sys_IsServerThread()") )
    __debugbreak();
  m_clientNum = this->m_clientNum;
  if ( (unsigned int)m_clientNum >= 0x800 )
  {
    LODWORD(v9) = this->m_clientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v9, 2048) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  if ( g_entities[m_clientNum].r.isInUse != g_entityIsInUse[m_clientNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[m_clientNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client_tasks.cpp", 145, ASSERT_TYPE_ASSERT, "( G_IsEntityInUse( m_clientNum ) )", (const char *)&queryFormat, "G_IsEntityInUse( m_clientNum )") )
    __debugbreak();
  v3 = this->m_clientNum;
  if ( (unsigned int)v3 >= 0x800 )
  {
    LODWORD(v10) = 2048;
    LODWORD(v9) = this->m_clientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 188, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v9, v10) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 189, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v4 = &g_entities[v3];
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client_tasks.cpp", 149, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( this->m_taskBufHead )
  {
    LODWORD(v9) = this->m_taskBufHead;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client_tasks.cpp", 150, ASSERT_TYPE_ASSERT, "( m_taskBufHead ) == ( 0 )", "m_taskBufHead == 0\n\t%i, %i", v9, 0i64) )
      __debugbreak();
  }
  m_taskBufTail = this->m_taskBufTail;
  if ( m_taskBufTail > GClientTaskQueue::ms_taskBufHighWatermark )
  {
    Com_Printf(15, "GClientTaskQueue: New Buf HWM: %i\n", m_taskBufTail);
    GClientTaskQueue::ms_taskBufHighWatermark = this->m_taskBufTail;
    m_taskBufTail = this->m_taskBufTail;
  }
  for ( i = this->m_taskBufHead; i < m_taskBufTail; m_taskBufTail = this->m_taskBufTail )
  {
    *(_DWORD *)&this->m_paramNextSize = 524312;
    if ( Sys_IsServerUserMoveWorker() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client_tasks.h", 213, ASSERT_TYPE_ASSERT, "(!Sys_IsServerUserMoveWorker())", "%s\n\tShouldn't access parameters from within the user move system, must be done as a post-process.", "!Sys_IsServerUserMoveWorker()") )
      __debugbreak();
    ParameterInternal = (void (__fastcall **)(gentity_s *, GClientTaskQueue *))GClientTaskQueue::GetParameterInternal(this, 0x18u, 8u);
    this->m_paramNextSize = *((_WORD *)ParameterInternal + 8);
    this->m_paramNextAlign = *((_WORD *)ParameterInternal + 9);
    (*ParameterInternal)(v4, this);
    v8 = this->m_clientNum;
    if ( (unsigned int)v8 >= 0x800 )
    {
      LODWORD(v10) = 2048;
      LODWORD(v9) = this->m_clientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v9, v10) )
        __debugbreak();
    }
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    if ( g_entities[v8].r.isInUse != g_entityIsInUse[v8] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
      __debugbreak();
    if ( !g_entityIsInUse[v8] )
    {
      LODWORD(v9) = this->m_clientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client_tasks.cpp", 171, ASSERT_TYPE_ASSERT, "( G_IsEntityInUse( m_clientNum ) )", "Client %i was dropped while processing deferred tasks", v9) )
        __debugbreak();
    }
    i = this->m_taskBufHead;
  }
  if ( i != m_taskBufTail )
  {
    LODWORD(v10) = m_taskBufTail;
    LODWORD(v9) = i;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client_tasks.cpp", 174, ASSERT_TYPE_ASSERT, "( m_taskBufHead ) == ( m_taskBufTail )", "m_taskBufHead == m_taskBufTail\n\t%i, %i", v9, v10) )
      __debugbreak();
  }
}

/*
==============
GClienThinkTaskManager::FreeMemory
==============
*/
void GClienThinkTaskManager::FreeMemory(GClienThinkTaskManager *this)
{
  this->m_taskQueues = NULL;
  this->m_taskQueueNextIndex = NULL;
  this->m_executePriorityList = NULL;
  this->m_taskFlags = NULL;
  this->m_allocatedClientCount = 0;
}

/*
==============
GClientTaskQueue::GetHighWatermark
==============
*/
void GClientTaskQueue::GetHighWatermark(unsigned int *outBufferWatermarmark)
{
  *outBufferWatermarmark = GClientTaskQueue::ms_taskBufHighWatermark;
}

/*
==============
GClienThinkTaskManager::GetMemorySize
==============
*/
__int64 GClienThinkTaskManager::GetMemorySize(const unsigned int maxClients)
{
  return 26646 * maxClients;
}

/*
==============
GClientTaskQueue::GetParameterInternal
==============
*/
char *GClientTaskQueue::GetParameterInternal(GClientTaskQueue *this, const unsigned int size, const unsigned int align)
{
  unsigned __int64 v3; 
  __int64 v5; 
  unsigned __int16 m_paramNextSize; 
  unsigned __int64 v7; 
  unsigned __int16 m_paramNextAlign; 
  unsigned int v9; 
  __int64 v10; 
  unsigned int v11; 
  __int64 v13; 
  __int64 v14; 

  v3 = align;
  v5 = size;
  if ( !size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client_tasks.cpp", 83, ASSERT_TYPE_ASSERT, "( size > 0 )", (const char *)&queryFormat, "size > 0") )
    __debugbreak();
  if ( !(_DWORD)v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client_tasks.cpp", 84, ASSERT_TYPE_ASSERT, "( align > 0 )", (const char *)&queryFormat, "align > 0") )
    __debugbreak();
  if ( (unsigned int)v3 > 8 )
  {
    LODWORD(v13) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client_tasks.cpp", 85, ASSERT_TYPE_ASSERT, "( align ) <= ( G_CLIENT_TASK_QUEUE_ALIGN )", "align <= G_CLIENT_TASK_QUEUE_ALIGN\n\t%i, %i", v13, 8) )
      __debugbreak();
  }
  if ( this->m_taskBufHead > 0x1140 )
  {
    LODWORD(v14) = 4416;
    LODWORD(v13) = this->m_taskBufHead;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client_tasks.cpp", 86, ASSERT_TYPE_ASSERT, "( m_taskBufHead ) <= ( TASK_BUFFER_SIZE )", "m_taskBufHead not in [0, TASK_BUFFER_SIZE]\n\t%u not in [0, %u]", v13, v14) )
      __debugbreak();
  }
  if ( this->m_taskBufHead > this->m_taskBufTail )
  {
    LODWORD(v14) = this->m_taskBufTail;
    LODWORD(v13) = this->m_taskBufHead;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client_tasks.cpp", 87, ASSERT_TYPE_ASSERT, "( m_taskBufHead ) <= ( m_taskBufTail )", "m_taskBufHead not in [0, m_taskBufTail]\n\t%u not in [0, %u]", v13, v14) )
      __debugbreak();
  }
  if ( (unsigned int)v5 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)v5, "unsigned", v5) )
    __debugbreak();
  m_paramNextSize = this->m_paramNextSize;
  if ( m_paramNextSize != (_WORD)v5 )
  {
    if ( (unsigned int)v5 > 0xFFFF )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)v5, "unsigned", v5) )
        __debugbreak();
      m_paramNextSize = this->m_paramNextSize;
    }
    LODWORD(v14) = (unsigned __int16)v5;
    LODWORD(v13) = m_paramNextSize;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client_tasks.cpp", 88, ASSERT_TYPE_ASSERT, "( m_paramNextSize ) == ( truncate_cast<ushort>( size ) )", "m_paramNextSize == truncate_cast<ushort>( size )\n\t%i, %i", v13, v14) )
      __debugbreak();
  }
  v7 = v3;
  if ( (unsigned int)v3 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)v3, "unsigned", v3) )
    __debugbreak();
  m_paramNextAlign = this->m_paramNextAlign;
  if ( m_paramNextAlign != (_WORD)v3 )
  {
    if ( (unsigned int)v3 > 0xFFFF )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)v3, "unsigned", v3) )
        __debugbreak();
      m_paramNextAlign = this->m_paramNextAlign;
    }
    LODWORD(v14) = (unsigned __int16)v3;
    LODWORD(v13) = m_paramNextAlign;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client_tasks.cpp", 89, ASSERT_TYPE_ASSERT, "( m_paramNextAlign ) == ( truncate_cast<ushort>( align ) )", "m_paramNextAlign == truncate_cast<ushort>( align )\n\t%i, %i", v13, v14) )
      __debugbreak();
  }
  v9 = AlignUp<unsigned int>(this->m_taskBufHead, v3);
  v10 = v9;
  v11 = v9 + v5;
  if ( v9 + (unsigned int)v5 > this->m_taskBufTail )
  {
    LODWORD(v14) = this->m_taskBufTail;
    LODWORD(v13) = v9 + v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client_tasks.cpp", 93, ASSERT_TYPE_ASSERT, "( paramOffset + size ) <= ( m_taskBufTail )", "paramOffset + size not in [0, m_taskBufTail]\n\t%u not in [0, %u]", v13, v14) )
      __debugbreak();
  }
  if ( (!v7 || ((v7 - 1) & v7) != 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.h", 670, ASSERT_TYPE_ASSERT, "(align > 0 && IsPowerOf2( align ))", (const char *)&queryFormat, "align > 0 && IsPowerOf2( align )") )
    __debugbreak();
  if ( ((v7 - 1) & (unsigned __int64)&this->m_taskBuffer[v10]) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client_tasks.cpp", 94, ASSERT_TYPE_ASSERT, "( IsAligned( reinterpret_cast<uintptr_t>(&m_taskBuffer[paramOffset]), align ) )", (const char *)&queryFormat, "IsAligned( reinterpret_cast<uintptr_t>(&m_taskBuffer[paramOffset]), align )") )
    __debugbreak();
  this->m_taskBufHead = v11;
  return (char *)this + v10;
}

/*
==============
GClienThinkTaskManager::GetTaskQueueAtIndex
==============
*/
GClientTaskQueue *GClienThinkTaskManager::GetTaskQueueAtIndex(GClienThinkTaskManager *this, const int clientNum, const unsigned int taskIndex)
{
  __int64 v7; 
  __int64 v9; 
  unsigned int m_allocatedClientCount; 

  if ( clientNum >= this->m_allocatedClientCount )
  {
    m_allocatedClientCount = this->m_allocatedClientCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client_tasks.cpp", 370, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( m_allocatedClientCount )", "clientNum doesn't index m_allocatedClientCount\n\t%i not in [0, %i)", clientNum, m_allocatedClientCount) )
      __debugbreak();
  }
  if ( taskIndex >= 6 )
  {
    LODWORD(v9) = 6;
    LODWORD(v7) = taskIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client_tasks.cpp", 371, ASSERT_TYPE_ASSERT, "(unsigned)( taskIndex ) < (unsigned)( GCLIENT_TASKS_QUEUE_COUNT )", "taskIndex doesn't index GCLIENT_TASKS_QUEUE_COUNT\n\t%i not in [0, %i)", v7, v9) )
      __debugbreak();
  }
  return &this->m_taskQueues[6 * clientNum + taskIndex];
}

/*
==============
GClientTaskQueue::Init
==============
*/
void GClientTaskQueue::Init(GClientTaskQueue *this, const int clientNum)
{
  this->m_clientNum = clientNum;
  *(_QWORD *)&this->m_taskBufHead = 0i64;
  *(_DWORD *)&this->m_paramNextSize = 0;
  DebugWipe(this, 0x1140ui64);
}

/*
==============
GClientTaskQueue::UpdateHighWaterMark
==============
*/
void GClientTaskQueue::UpdateHighWaterMark(GClientTaskQueue *this)
{
  __int64 m_taskBufTail; 

  m_taskBufTail = this->m_taskBufTail;
  if ( (unsigned int)m_taskBufTail > GClientTaskQueue::ms_taskBufHighWatermark )
  {
    Com_Printf(15, "GClientTaskQueue: New Buf HWM: %i\n", m_taskBufTail);
    GClientTaskQueue::ms_taskBufHighWatermark = this->m_taskBufTail;
  }
}

/*
==============
GClientTaskQueue::ValidateExecution
==============
*/
void GClientTaskQueue::ValidateExecution(GClientTaskQueue *this)
{
  unsigned int m_taskBufHead; 
  int m_clientNum; 
  unsigned int v4; 
  unsigned int m_taskBufTail; 

  m_taskBufHead = this->m_taskBufHead;
  if ( m_taskBufHead != this->m_taskBufTail )
  {
    this->m_taskBufHead = 0;
    GClientTaskQueue::DumpTasksForClient(this);
    m_taskBufTail = this->m_taskBufTail;
    v4 = m_taskBufHead;
    m_clientNum = this->m_clientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client_tasks.cpp", 278, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Execution Failure for client '%i': head=%u, tail=%u", m_clientNum, v4, m_taskBufTail) )
      __debugbreak();
  }
}

/*
==============
GClientTaskQueue::ValidateOwner
==============
*/
bool GClientTaskQueue::ValidateOwner(GClientTaskQueue *this, const gentity_s *owner)
{
  unsigned __int64 v4; 
  unsigned __int64 v5; 
  __int64 v7; 
  int v8; 

  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 196, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v4 = (__int64)((unsigned __int128)(((char *)owner - (char *)g_entities) * (__int128)0x2D02D02D02D02D03i64) >> 64) >> 8;
  v5 = (v4 >> 63) + v4;
  if ( (unsigned int)v5 >= 0x800 )
  {
    v8 = 2048;
    LODWORD(v7) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 199, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( 2048 ) )", "index doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  return (__int16)v5 == this->m_clientNum;
}

/*
==============
GClientTaskQueue::ValidateOwnerNum
==============
*/
bool GClientTaskQueue::ValidateOwnerNum(GClientTaskQueue *this, const int owner)
{
  return owner == this->m_clientNum;
}

