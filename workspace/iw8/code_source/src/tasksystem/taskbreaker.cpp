/*
==============
TaskBreaker_Shutdown
==============
*/

void TaskBreaker_Shutdown(void)
{
  ?TaskBreaker_Shutdown@@YAXXZ();
}

/*
==============
TaskBreaker_Init
==============
*/

void TaskBreaker_Init(void)
{
  ?TaskBreaker_Init@@YAXXZ();
}

/*
==============
TaskBreaker_CreateTask
==============
*/

bool __fastcall TaskBreaker_CreateTask(TaskType taskType, TaskCreateRequest *pTaskCreateRequest, TaskCreateResult *pTaskCreateResult)
{
  return ?TaskBreaker_CreateTask@@YA_NW4TaskType@@PEAVTaskCreateRequest@@PEAVTaskCreateResult@@@Z(taskType, pTaskCreateRequest, pTaskCreateResult);
}

/*
==============
TaskBreaker_ShouldHandleCall
==============
*/

bool __fastcall TaskBreaker_ShouldHandleCall(TaskType taskType)
{
  return ?TaskBreaker_ShouldHandleCall@@YA_NW4TaskType@@@Z(taskType);
}

/*
==============
TaskBreaker_ErrorCleanup
==============
*/

void TaskBreaker_ErrorCleanup(void)
{
  ?TaskBreaker_ErrorCleanup@@YAXXZ();
}

/*
==============
TaskBreaker_Update
==============
*/

void TaskBreaker_Update(void)
{
  ?TaskBreaker_Update@@YAXXZ();
}

/*
==============
TaskBreaker_ClearFlags_f
==============
*/
void TaskBreaker_ClearFlags_f()
{
  int v0; 
  int i; 
  unsigned int v2; 
  int v3; 
  char v4; 
  __int64 v5; 
  __int64 v6; 

  v0 = Cmd_Argc();
  if ( v0 >= 2 )
  {
    for ( i = 1; i < v0; ++i )
    {
      v2 = Cmd_ArgInt(i);
      v3 = v2;
      if ( v2 >= 0xC )
      {
        LODWORD(v6) = 12;
        LODWORD(v5) = v2;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\tasksystem\\taskbreaker.cpp", 153, ASSERT_TYPE_ASSERT, "(unsigned)( taskType ) < (unsigned)( DVAR_TYPE_COUNT )", "taskType doesn't index DVAR_TYPE_COUNT\n\t%i not in [0, %i)", v5, v6) )
          __debugbreak();
      }
      v4 = v3 & 7;
      if ( v3 < 0 )
      {
        v3 += 7;
        v4 -= 8;
      }
      s_taskBreakerFlags[v3 >> 3] &= ~(1 << v4);
    }
  }
  else
  {
    Com_PrintError(16, "Not enough arguments for taskbreaker_clearFlags\n");
  }
}

/*
==============
TaskBreaker_CreateTask
==============
*/
char TaskBreaker_CreateTask(TaskType taskType, TaskCreateRequest *pTaskCreateRequest, TaskCreateResult *pTaskCreateResult)
{
  __int64 v3; 
  TaskCreateRequest *v5; 
  int v6; 
  _DWORD *v7; 
  int v8; 
  char *v9; 
  int v11; 
  int v12; 
  int ColumnCount; 
  int v14; 
  int v15; 
  const char *ColumnValueForRow; 
  unsigned int TimeAsSeconds; 
  const dvar_t *v18; 
  int integer; 
  const dvar_t *v20; 
  int v21; 
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  Windows::Foundation::IAsyncInfo *v23; 
  bdReference<BreakerDWTask> *v24; 
  BreakerDWTask *m_ptr; 
  StringTable *tablePtr; 

  v3 = taskType;
  v5 = pTaskCreateRequest;
  if ( !pTaskCreateRequest && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\tasksystem\\taskbreaker.cpp", 275, ASSERT_TYPE_ASSERT, "(pTaskCreateRequest)", (const char *)&queryFormat, "pTaskCreateRequest") )
    __debugbreak();
  if ( !pTaskCreateResult && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\tasksystem\\taskbreaker.cpp", 276, ASSERT_TYPE_ASSERT, "(pTaskCreateResult)", (const char *)&queryFormat, "pTaskCreateResult") )
    __debugbreak();
  v6 = 0;
  v7 = &unk_14F7BFAE0;
  v8 = 0;
  while ( *v7 )
  {
    ++v8;
    v7 += 22;
    if ( (__int64)v7 >= (__int64)&unk_14F7BFE50 )
      goto LABEL_12;
  }
  v9 = (char *)&s_breakerTasks + 88 * v8;
  if ( !v9 )
  {
LABEL_12:
    Com_PrintError(16, "TaskBreaker_CreateTask failed - no available breaker tasks!\n");
    return 0;
  }
  StringTable_GetAsset("mp/taskbreakercodes.csv", (const StringTable **)&tablePtr);
  v11 = StringTable_LookupRowNumForValue(tablePtr, 0, s_TaskTypeKeys[v3]);
  if ( v11 >= 0 )
  {
    v12 = 1;
    ColumnCount = StringTable_GetColumnCount(tablePtr);
    v14 = 0;
    if ( ColumnCount <= 1 )
      goto LABEL_20;
    do
    {
      if ( !*StringTable_GetColumnValueForRow(tablePtr, v11, v12) )
        break;
      ++v14;
      ++v12;
    }
    while ( v12 < ColumnCount );
    if ( v14 < 1 )
    {
LABEL_20:
      Com_PrintError(16, "No error code values for TaskType %d in %s\n", (unsigned int)v3, "mp/taskbreakercodes.csv");
    }
    else
    {
      v15 = I_irand(1, v14 + 1);
      ColumnValueForRow = StringTable_GetColumnValueForRow(tablePtr, v11, v15);
      v6 = atoi(ColumnValueForRow);
    }
    v5 = pTaskCreateRequest;
  }
  else
  {
    Com_PrintError(16, "No entry for TaskType %d in %s\n", (unsigned int)v3, "mp/taskbreakercodes.csv");
  }
  *((_DWORD *)v9 + 21) = v6;
  *((_QWORD *)v9 + 1) = v5->m_onUpdateCallback;
  *(_QWORD *)v9 = v5->m_onCompletionCallback;
  *((_DWORD *)v9 + 17) = v5->m_timeoutInSeconds;
  TimeAsSeconds = Sys_GetTimeAsSeconds();
  v18 = DVARINT_taskbreaker_time_min;
  *((_DWORD *)v9 + 18) = TimeAsSeconds;
  *((_DWORD *)v9 + 10) = v5->m_controllerIndex;
  *((_QWORD *)v9 + 6) = v5->m_appData;
  *((_DWORD *)v9 + 9) = pTaskCreateResult->m_localTaskId;
  if ( !v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "taskbreaker_time_min") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v18);
  integer = v18->current.integer;
  v20 = DVARINT_taskbreaker_time_min;
  if ( !DVARINT_taskbreaker_time_min && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "taskbreaker_time_min") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v20);
  v21 = I_irand(integer, v20->current.integer);
  *((_DWORD *)v9 + 20) = Sys_Milliseconds() + v21;
  m_asyncInfo = v5->m_asyncInfo;
  v23 = (Windows::Foundation::IAsyncInfo *)*((_QWORD *)v9 + 2);
  if ( m_asyncInfo != v23 )
  {
    if ( m_asyncInfo )
    {
      m_asyncInfo->__abi_AddRef(v5->m_asyncInfo);
      v23 = (Windows::Foundation::IAsyncInfo *)*((_QWORD *)v9 + 2);
    }
    if ( v23 )
      v23->__abi_Release(v23);
    *((_QWORD *)v9 + 2) = m_asyncInfo;
    v23 = m_asyncInfo;
  }
  if ( !*((_QWORD *)v9 + 1) && !v23 )
  {
    v24 = (bdReference<BreakerDWTask> *)(v9 + 24);
    if ( v24 != &s_fakeDWTaskRef )
    {
      if ( v24->m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v24->m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v24->m_ptr )
        ((void (__fastcall *)(BreakerDWTask *, __int64))v24->m_ptr->~bdReferencable)(v24->m_ptr, 1i64);
      m_ptr = s_fakeDWTaskRef.m_ptr;
      v24->m_ptr = s_fakeDWTaskRef.m_ptr;
      if ( m_ptr )
        _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
    }
  }
  return 1;
}

/*
==============
TaskBreaker_ErrorCleanup
==============
*/
void TaskBreaker_ErrorCleanup(void)
{
  char *v0; 

  Com_Printf(16, "TaskBreaker_ErrorCleanup - resetting tasksn");
  v0 = (char *)&unk_14F7BFAE4;
  do
  {
    GenericTask::ClearTask((GenericTask *)(v0 - 84));
    *(_QWORD *)(v0 - 4) = 0i64;
    v0 += 88;
  }
  while ( (__int64)v0 < (__int64)&unk_14F7BFE54 );
}

/*
==============
TaskBreaker_Init
==============
*/
void TaskBreaker_Init(void)
{
  char *v0; 
  BreakerDWTask *v1; 
  BreakerDWTask *v2; 

  v0 = (char *)&unk_14F7BFAE4;
  do
  {
    GenericTask::ClearTask((GenericTask *)(v0 - 84));
    *(_QWORD *)(v0 - 4) = 0i64;
    v0 += 88;
  }
  while ( (__int64)v0 < (__int64)&unk_14F7BFE54 );
  v1 = (BreakerDWTask *)bdMemory::allocate(0x68ui64);
  v2 = v1;
  if ( v1 )
  {
    memset_0(v1, 0, sizeof(BreakerDWTask));
    bdRemoteTask::bdRemoteTask(v2);
    v2->__vftable = (BreakerDWTask_vtbl *)&BreakerDWTask::`vftable';
  }
  else
  {
    v2 = NULL;
  }
  if ( s_fakeDWTaskRef.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&s_fakeDWTaskRef.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && s_fakeDWTaskRef.m_ptr )
    ((void (__fastcall *)(BreakerDWTask *, __int64))s_fakeDWTaskRef.m_ptr->~bdReferencable)(s_fakeDWTaskRef.m_ptr, 1i64);
  s_fakeDWTaskRef.m_ptr = v2;
  if ( v2 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v2->m_refCount, 1u);
  *(_QWORD *)s_taskBreakerFlags = 0i64;
  qword_14F7BFE10 = 0i64;
  qword_14F7BFE18 = 0i64;
  qword_14F7BFE20 = 0i64;
  Cmd_AddCommandInternal("taskbreaker_setFlags", Cbuf_AddServerText_f, &TaskBreaker_SetFlags_f_VAR);
  Cmd_AddServerCommandInternal("taskbreaker_setFlags", TaskBreaker_SetFlags_f, &TaskBreaker_SetFlags_f_VAR_SERVER);
  Cmd_AddCommandInternal("taskbreaker_setAllFlags", Cbuf_AddServerText_f, &TaskBreaker_SetAllFlags_f_VAR);
  Cmd_AddServerCommandInternal("taskbreaker_setAllFlags", TaskBreaker_SetAllFlags_f, &TaskBreaker_SetAllFlags_f_VAR_SERVER);
  Cmd_AddCommandInternal("taskbreaker_clearFlags", Cbuf_AddServerText_f, &TaskBreaker_ClearFlags_f_VAR);
  Cmd_AddServerCommandInternal("taskbreaker_clearFlags", TaskBreaker_ClearFlags_f, &TaskBreaker_ClearFlags_f_VAR_SERVER);
}

/*
==============
TaskBreaker_SetAllFlags_f
==============
*/
void TaskBreaker_SetAllFlags_f()
{
  *(_QWORD *)s_taskBreakerFlags = -1i64;
  qword_14F7BFE10 = -1i64;
  qword_14F7BFE18 = -1i64;
  qword_14F7BFE20 = -1i64;
}

/*
==============
TaskBreaker_SetFlags_f
==============
*/
void TaskBreaker_SetFlags_f()
{
  int v0; 
  int i; 
  unsigned int v2; 
  int v3; 
  char v4; 
  __int64 v5; 
  __int64 v6; 

  v0 = Cmd_Argc();
  if ( v0 >= 2 )
  {
    for ( i = 1; i < v0; ++i )
    {
      v2 = Cmd_ArgInt(i);
      v3 = v2;
      if ( v2 >= 0xC )
      {
        LODWORD(v6) = 12;
        LODWORD(v5) = v2;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\tasksystem\\taskbreaker.cpp", 129, ASSERT_TYPE_ASSERT, "(unsigned)( taskType ) < (unsigned)( DVAR_TYPE_COUNT )", "taskType doesn't index DVAR_TYPE_COUNT\n\t%i not in [0, %i)", v5, v6) )
          __debugbreak();
      }
      v4 = v3 & 7;
      if ( v3 < 0 )
      {
        v3 += 7;
        v4 -= 8;
      }
      s_taskBreakerFlags[v3 >> 3] |= 1 << v4;
    }
  }
  else
  {
    Com_PrintError(16, "Not enough arguments for taskbreaker_setFlags\n");
  }
}

/*
==============
TaskBreaker_ShouldHandleCall
==============
*/
bool TaskBreaker_ShouldHandleCall(TaskType taskType)
{
  char v8; 
  char v9; 

  if ( (s_taskBreakerFlags[taskType / 8] & (unsigned __int8)(1 << (taskType % 8))) == 0 )
    return 0;
  _RBX = DVARFLT_taskbreaker_break_percentage;
  __asm { vmovaps [rsp+58h+var_18], xmm6 }
  if ( !DVARFLT_taskbreaker_break_percentage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "taskbreaker_break_percentage") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm1, cs:__real@3f800000; max
    vmovss  xmm6, dword ptr [rbx+28h]
    vxorps  xmm0, xmm0, xmm0; min
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vcomiss xmm6, xmm0
    vmovaps xmm6, [rsp+58h+var_18]
  }
  return !(v8 | v9);
}

/*
==============
TaskBreaker_Shutdown
==============
*/
void TaskBreaker_Shutdown(void)
{
  char *v0; 

  v0 = (char *)&unk_14F7BFAE4;
  do
  {
    GenericTask::ClearTask((GenericTask *)(v0 - 84));
    *(_QWORD *)(v0 - 4) = 0i64;
    v0 += 88;
  }
  while ( (__int64)v0 < (__int64)&unk_14F7BFE54 );
  if ( s_fakeDWTaskRef.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&s_fakeDWTaskRef.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && s_fakeDWTaskRef.m_ptr )
    ((void (__fastcall *)(BreakerDWTask *, __int64))s_fakeDWTaskRef.m_ptr->~bdReferencable)(s_fakeDWTaskRef.m_ptr, 1i64);
  s_fakeDWTaskRef.m_ptr = NULL;
}

/*
==============
TaskBreaker_Update
==============
*/
void TaskBreaker_Update(void)
{
  int v0; 
  GenericTask *v1; 
  __int64 v2; 
  int m_onCompletionCallback; 
  BreakerDWTask *m_ptr; 
  __int64 v5; 
  unsigned int m_timeoutInSeconds; 

  v0 = Sys_Milliseconds();
  v1 = &s_breakerTasks;
  v2 = 10i64;
  do
  {
    m_onCompletionCallback = (int)v1[1].m_onCompletionCallback;
    if ( !m_onCompletionCallback )
      goto LABEL_23;
    if ( v0 > m_onCompletionCallback )
    {
      if ( !v1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\tasksystem\\taskbreaker.cpp", 94, ASSERT_TYPE_ASSERT, "(task)", (const char *)&queryFormat, "task") )
        __debugbreak();
      if ( !v1->m_onCompletionCallback && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\tasksystem\\taskbreaker.cpp", 95, ASSERT_TYPE_ASSERT, "(task->genericTask.m_onCompletionCallback)", (const char *)&queryFormat, "task->genericTask.m_onCompletionCallback") )
        __debugbreak();
      if ( v1->m_remoteDemonwareTask.m_ptr )
      {
        m_ptr = s_fakeDWTaskRef.m_ptr;
        s_fakeDWTaskRef.m_ptr->m_errorCode = HIDWORD(v1[1].m_onCompletionCallback);
        m_ptr->m_status = BD_FAILED;
      }
      v5 = 1i64;
LABEL_22:
      v1->m_onCompletionCallback(v1, (eTaskManagerTaskState)v5);
      GenericTask::ClearTask(v1);
      v1[1].m_onCompletionCallback = NULL;
      goto LABEL_23;
    }
    m_timeoutInSeconds = v1->m_timeoutInSeconds;
    if ( m_timeoutInSeconds && v0 >= (int)(1000 * (m_timeoutInSeconds + v1->m_taskStartTimeInSeconds)) )
    {
      if ( !v1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\tasksystem\\taskbreaker.cpp", 109, ASSERT_TYPE_ASSERT, "(task)", (const char *)&queryFormat, "task") )
        __debugbreak();
      if ( !v1->m_onCompletionCallback && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\tasksystem\\taskbreaker.cpp", 110, ASSERT_TYPE_ASSERT, "(task->genericTask.m_onCompletionCallback)", (const char *)&queryFormat, "task->genericTask.m_onCompletionCallback") )
        __debugbreak();
      v5 = 5i64;
      goto LABEL_22;
    }
LABEL_23:
    v1 = (GenericTask *)((char *)v1 + 88);
    --v2;
  }
  while ( v2 );
}

