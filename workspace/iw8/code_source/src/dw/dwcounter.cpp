/*
==============
LiveCounter_ClearDWOverlappedTasks
==============
*/

void __fastcall LiveCounter_ClearDWOverlappedTasks(const int controllerIndex)
{
  ?LiveCounter_ClearDWOverlappedTasks@@YAXH@Z(controllerIndex);
}

/*
==============
LiveCounter_IncrementCounters
==============
*/

bool __fastcall LiveCounter_IncrementCounters(const int controllerIndex)
{
  return ?LiveCounter_IncrementCounters@@YA_NH@Z(controllerIndex);
}

/*
==============
LiveCounter_SetupCounters
==============
*/

void LiveCounter_SetupCounters(void)
{
  ?LiveCounter_SetupCounters@@YAXXZ();
}

/*
==============
LiveCounter_CounterStringToID
==============
*/

int __fastcall LiveCounter_CounterStringToID(const char *counterType)
{
  return ?LiveCounter_CounterStringToID@@YAHPEBD@Z(counterType);
}

/*
==============
LiveCounter_Update
==============
*/

void __fastcall LiveCounter_Update(int controllerIndex)
{
  ?LiveCounter_Update@@YAXH@Z(controllerIndex);
}

/*
==============
LiveCounter_IncrementCounterValueByName
==============
*/

void __fastcall LiveCounter_IncrementCounterValueByName(const char *counterType, unsigned __int64 increment)
{
  ?LiveCounter_IncrementCounterValueByName@@YAXPEBD_K@Z(counterType, increment);
}

/*
==============
LiveCounter_GetCounterTotalValue
==============
*/

__int64 __fastcall LiveCounter_GetCounterTotalValue(int counterID)
{
  return ?LiveCounter_GetCounterTotalValue@@YA_JH@Z(counterID);
}

/*
==============
LiveCounter_Init
==============
*/

void LiveCounter_Init(void)
{
  ?LiveCounter_Init@@YAXXZ();
}

/*
==============
LiveCounter_IncrementCounterValue
==============
*/

void __fastcall LiveCounter_IncrementCounterValue(int counterID, __int64 increment)
{
  ?LiveCounter_IncrementCounterValue@@YAXH_J@Z(counterID, increment);
}

/*
==============
LiveCounter_Shutdown
==============
*/

void LiveCounter_Shutdown(void)
{
  ?LiveCounter_Shutdown@@YAXXZ();
}

/*
==============
LiveCounter_GetCounterTotals
==============
*/

bool __fastcall LiveCounter_GetCounterTotals(const int controllerIndex)
{
  return ?LiveCounter_GetCounterTotals@@YA_NH@Z(controllerIndex);
}

/*
==============
LiveCounter_CheckOngoingTasks
==============
*/
void LiveCounter_CheckOngoingTasks()
{
  int v0; 
  int *p_type; 
  taskCompleteResults v2; 
  taskCompleteResults v3; 
  taskCompleteResults v4; 
  __int64 v5; 
  int v6; 
  _QWORD *v7; 
  int v8; 
  __int64 v9; 
  _BYTE *bytes_20; 
  __int64 v11; 
  __int64 v12; 

  v0 = 0;
  p_type = &overlappedTasks.tasks[0].type;
  do
  {
    if ( !*((_BYTE *)p_type + 4) )
      goto LABEL_46;
    if ( !*p_type )
    {
      if ( (unsigned int)v0 >= 0x20 )
      {
        LODWORD(v12) = 32;
        LODWORD(v11) = v0;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwcounter.cpp", 157, ASSERT_TYPE_ASSERT, "(unsigned)( slot ) < (unsigned)( 32 )", "slot doesn't index MAX_OVERLAPPED_TASKS_PER_SET\n\t%i not in [0, %i)", v11, v12) )
          __debugbreak();
      }
      if ( !*((_BYTE *)p_type + 4) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwcounter.cpp", 158, ASSERT_TYPE_ASSERT, "(ov->active)", (const char *)&queryFormat, "ov->active") )
        __debugbreak();
      if ( *p_type && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwcounter.cpp", 159, ASSERT_TYPE_ASSERT, "(ov->type == TASK_COUNTERS_INCREMENT)", (const char *)&queryFormat, "ov->type == TASK_COUNTERS_INCREMENT") )
        __debugbreak();
      v4 = dwCounterTaskComplete((overlappedTask *const)(p_type - 6));
      v3 = v4;
      if ( v4 == TASK_NOTCOMPLETE )
        goto LABEL_43;
      if ( v4 == TASK_COMPLETE )
      {
        Com_Printf(16, "Uploaded global counters.\n");
      }
      else
      {
        v5 = **((int **)p_type + 1);
        if ( v5 > 0 )
        {
          v6 = s_countersCount;
          v7 = &s_uploadCounters[0]._bytes_20[8];
          do
          {
            v8 = 0;
            v9 = 0i64;
            if ( v6 > 0 )
            {
              bytes_20 = s_localCounters[0]._bytes_20;
              while ( *(_DWORD *)bytes_20 != *((_DWORD *)v7 - 2) )
              {
                ++v8;
                ++v9;
                bytes_20 += 64;
                if ( v8 >= v6 )
                  goto LABEL_40;
              }
              *(_QWORD *)&s_localCounters[v9]._bytes_20[8] += *v7;
            }
LABEL_40:
            v7 += 8;
            --v5;
          }
          while ( v5 );
        }
        s_countersReadyForUpload = 1;
        s_nextCounterUploadTime = 60000 * counterUploadInterval->current.integer + Sys_Milliseconds();
        Com_PrintError(16, "Failed to upload global counters.\n");
      }
      goto LABEL_42;
    }
    if ( *p_type != 1 )
    {
      LODWORD(v11) = *p_type;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwcounter.cpp", 495, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unknown live leaderboard task type %i\n", v11) )
        __debugbreak();
      goto LABEL_46;
    }
    if ( (unsigned int)v0 >= 0x20 )
    {
      LODWORD(v12) = 32;
      LODWORD(v11) = v0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwcounter.cpp", 240, ASSERT_TYPE_ASSERT, "(unsigned)( slot ) < (unsigned)( 32 )", "slot doesn't index MAX_OVERLAPPED_TASKS_PER_SET\n\t%i not in [0, %i)", v11, v12) )
        __debugbreak();
    }
    if ( !*((_BYTE *)p_type + 4) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwcounter.cpp", 241, ASSERT_TYPE_ASSERT, "(ov->active)", (const char *)&queryFormat, "ov->active") )
      __debugbreak();
    if ( *p_type != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwcounter.cpp", 242, ASSERT_TYPE_ASSERT, "(ov->type == TASK_COUNTERS_GETTOTALS)", (const char *)&queryFormat, "ov->type == TASK_COUNTERS_GETTOTALS") )
      __debugbreak();
    v2 = dwCounterTaskComplete((overlappedTask *const)(p_type - 6));
    v3 = v2;
    if ( v2 )
    {
      if ( v2 == TASK_COMPLETE )
        Com_Printf(16, "Downloaded all global counters.\n");
      else
        Com_PrintError(16, "Failed to download all global counters.\n");
LABEL_42:
      TaskManager_ClearTask((overlappedTask *)(p_type - 6));
    }
LABEL_43:
    if ( v3 && v3 != TASK_COMPLETE )
      Com_Printf(16, "Error uploading leaderboard stats\n");
LABEL_46:
    ++v0;
    p_type += 10;
  }
  while ( v0 < 32 );
}

/*
==============
LiveCounter_ClearDWOverlappedTasks
==============
*/
void LiveCounter_ClearDWOverlappedTasks(const int controllerIndex)
{
  TaskManager_ClearOverlappedTasksForController(overlappedTasks.tasks, controllerIndex);
}

/*
==============
LiveCounter_CounterStringToID
==============
*/
int LiveCounter_CounterStringToID(const char *counterType)
{
  const char *v3; 
  StringTable *tablePtr; 

  if ( !counterType )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwcounter.cpp", 343, ASSERT_TYPE_ASSERT, "(counterType != 0)", (const char *)&queryFormat, "counterType != NULL") )
      __debugbreak();
    return -1;
  }
  StringTable_GetAsset("mp/globalcounters.csv", (const StringTable **)&tablePtr);
  if ( tablePtr )
  {
    v3 = StringTable_Lookup(tablePtr, 1, counterType, 0);
    if ( !v3 || !*v3 )
      return -1;
    return atoi(v3);
  }
  else
  {
    Com_PrintError(16, "Could not find global counter value as string table '%s' could not be found.\n", "mp/globalcounters.csv");
    return -1;
  }
}

/*
==============
LiveCounter_DumpLive_f
==============
*/
void LiveCounter_DumpLive_f()
{
  signed int v0; 
  unsigned int *bytes_20; 
  const char *v2; 
  const char *v3; 
  StringTable *tablePtr; 

  StringTable_GetAsset("mp/globalcounters.csv", (const StringTable **)&tablePtr);
  Com_Printf(0, "id counter: counter value, counter name\n");
  v0 = 0;
  if ( (int)s_countersCount > 0 )
  {
    bytes_20 = (unsigned int *)s_serverCounters[0]._bytes_20;
    do
    {
      if ( tablePtr )
      {
        v2 = j_va("%d", *bytes_20);
        v3 = StringTable_Lookup(tablePtr, 0, v2, 1);
      }
      else
      {
        v3 = NULL;
      }
      Com_Printf(0, "%d: %zu, %s\n", *bytes_20, *((_QWORD *)bytes_20 + 1), v3);
      ++v0;
      bytes_20 += 16;
    }
    while ( v0 < (int)s_countersCount );
  }
}

/*
==============
LiveCounter_DumpQueue_f
==============
*/
void LiveCounter_DumpQueue_f()
{
  signed int v0; 
  __int64 v1; 
  const char *v2; 
  const char *v3; 
  StringTable *tablePtr; 

  StringTable_GetAsset("mp/globalcounters.csv", (const StringTable **)&tablePtr);
  Com_Printf(0, "id counter: counter value, counter name\n");
  v0 = 0;
  if ( (int)s_countersCount > 0 )
  {
    v1 = 0i64;
    do
    {
      if ( tablePtr )
      {
        v2 = j_va("%d", *(unsigned int *)s_serverCounters[v1]._bytes_20);
        v3 = StringTable_Lookup(tablePtr, 0, v2, 1);
      }
      else
      {
        v3 = NULL;
      }
      Com_Printf(0, "%d: %zu, %s\n", *(unsigned int *)s_localCounters[v1]._bytes_20, *(_QWORD *)&s_localCounters[v1]._bytes_20[8], v3);
      ++v0;
      ++v1;
    }
    while ( v0 < (int)s_countersCount );
  }
}

/*
==============
LiveCounter_GetCounterTotalValue
==============
*/
__int64 LiveCounter_GetCounterTotalValue(int counterID)
{
  if ( !s_countersInit )
    return 0i64;
  s_countersRequested = 1;
  return *(_QWORD *)&s_serverCounters[(__int64)counterID]._bytes_20[8];
}

/*
==============
LiveCounter_GetCounterTotals
==============
*/
char LiveCounter_GetCounterTotals(const int controllerIndex)
{
  DWServicesAccess *Instance; 
  overlappedTask *OpenTaskSlot; 
  DWServicesAccess *v5; 
  DWCounter *Counter; 
  bdRemoteTask *m_ptr; 
  bdReference<bdRemoteTask> result; 

  Instance = DWServicesAccess::GetInstance();
  if ( !DWServicesAccess::isReady(Instance, controllerIndex) )
    return 0;
  if ( (unsigned int)controllerIndex >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwcounter.cpp", 207, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, 8) )
    __debugbreak();
  if ( TaskManager_TaskIsInProgressForController(&overlappedTasks, 1, controllerIndex) )
    return 1;
  OpenTaskSlot = TaskManager_GetOpenTaskSlot(&overlappedTasks, controllerIndex, 1);
  if ( OpenTaskSlot )
  {
    v5 = DWServicesAccess::GetInstance();
    Counter = DWServicesAccess::GetCounter(v5, controllerIndex);
    m_ptr = DWCounter::getCounterTotals(Counter, &result, s_serverCounters, s_countersCount)->m_ptr;
    if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
    {
      if ( result.m_ptr )
        ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
      result.m_ptr = NULL;
    }
    if ( m_ptr )
    {
      bdReference<bdRemoteTask>::operator=(&OpenTaskSlot->u.remoteTask, m_ptr);
      return 1;
    }
    else
    {
      dwHandleTaskError(OpenTaskSlot, BD_START_TASK_FAILED);
      return 0;
    }
  }
  else
  {
    Com_PrintWarning(16, "Couldn't allocate dw task for bdCounter download");
    return 0;
  }
}

/*
==============
LiveCounter_IncrementCounterValue
==============
*/
void LiveCounter_IncrementCounterValue(int counterID, __int64 increment)
{
  int v4; 
  _BYTE *i; 

  if ( s_countersInit && increment )
  {
    if ( !counterID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwcounter.cpp", 312, ASSERT_TYPE_ASSERT, "(counterID != 0)", (const char *)&queryFormat, "counterID != 0") )
      __debugbreak();
    v4 = 0;
    if ( (int)s_countersCount > 0 )
    {
      for ( i = s_localCounters[0]._bytes_20; *(_DWORD *)i != counterID; i += 64 )
      {
        if ( ++v4 >= (int)s_countersCount )
          return;
      }
      *(_QWORD *)&s_localCounters[(__int64)v4]._bytes_20[8] += increment;
      if ( !s_countersReadyForUpload )
      {
        s_countersReadyForUpload = 1;
        s_nextCounterUploadTime = 60000 * counterUploadInterval->current.integer + Sys_Milliseconds();
      }
    }
  }
}

/*
==============
LiveCounter_IncrementCounterValueByName
==============
*/
void LiveCounter_IncrementCounterValueByName(const char *counterType, unsigned __int64 increment)
{
  int v3; 

  if ( counterType )
  {
    v3 = LiveCounter_CounterStringToID(counterType);
    if ( v3 != -1 )
      LiveCounter_IncrementCounterValue(v3, increment);
  }
  else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwcounter.cpp", 290, ASSERT_TYPE_ASSERT, "(counterType != 0)", (const char *)&queryFormat, "counterType != NULL") )
  {
    __debugbreak();
  }
}

/*
==============
LiveCounter_IncrementCounter_f
==============
*/
void LiveCounter_IncrementCounter_f()
{
  const char *v0; 
  __int64 v1; 
  int v2; 

  if ( Cmd_Argc() == 3 )
  {
    v0 = Cmd_Argv(1);
    v1 = Cmd_ArgInt(2);
    v2 = LiveCounter_CounterStringToID(v0);
    if ( v2 == -1 )
      Com_PrintError(16, "Invalid counter string id: %s\n", v0);
    else
      LiveCounter_IncrementCounterValue(v2, v1);
  }
  else
  {
    Com_PrintError(16, "Invalid param count. usage: incrementCounter( <counter id>, <increment value> )\n");
  }
}

/*
==============
LiveCounter_IncrementCounters
==============
*/
char LiveCounter_IncrementCounters(const int controllerIndex)
{
  unsigned int v2; 
  DWServicesAccess *Instance; 
  __int64 *v4; 
  __int64 v5; 
  _BYTE *bytes_20; 
  __int64 v7; 
  __int64 v8; 
  _QWORD *v9; 
  overlappedTask *OpenTaskSlot; 
  DWServicesAccess *v12; 
  DWCounter *Counter; 
  bdRemoteTask *m_ptr; 
  bdRemoteTask *v15; 
  bdRemoteTask *v16; 
  bdReference<bdRemoteTask> result; 

  v2 = 0;
  if ( (unsigned int)controllerIndex >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwcounter.cpp", 93, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, 8) )
    __debugbreak();
  Instance = DWServicesAccess::GetInstance();
  if ( !DWServicesAccess::isReady(Instance, controllerIndex) )
    return 0;
  if ( (int)s_countersCount <= 0 )
    return 1;
  v4 = (__int64 *)&s_uploadCounters[0]._bytes_20[8];
  v5 = s_countersCount;
  bytes_20 = s_localCounters[0]._bytes_20;
  v7 = s_countersCount;
  do
  {
    v8 = *((_QWORD *)bytes_20 + 1);
    if ( v8 )
    {
      *((_DWORD *)v4 - 2) = *(_DWORD *)bytes_20;
      if ( v8 > 50000 )
        v8 = 50000i64;
      ++v2;
      *v4 = v8;
      v4 += 8;
    }
    bytes_20 += 64;
    --v7;
  }
  while ( v7 );
  if ( !v2 )
    return 1;
  v9 = &s_localCounters[0]._bytes_20[8];
  do
  {
    *v9 = 0i64;
    v9 += 8;
    --v5;
  }
  while ( v5 );
  if ( TaskManager_TaskIsInProgressForController(&overlappedTasks, 0, controllerIndex) )
    return 1;
  OpenTaskSlot = TaskManager_GetOpenTaskSlot(&overlappedTasks, controllerIndex, 0);
  if ( !OpenTaskSlot )
  {
    Com_PrintWarning(16, "Couldn't allocate dw task for bdCounter upload.");
    return 0;
  }
  v12 = DWServicesAccess::GetInstance();
  Counter = DWServicesAccess::GetCounter(v12, controllerIndex);
  m_ptr = DWCounter::incrementCounters(Counter, &result, s_uploadCounters, v2)->m_ptr;
  if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result.m_ptr )
    ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
  if ( m_ptr )
  {
    v15 = OpenTaskSlot->u.remoteTask.m_ptr;
    if ( v15 && _InterlockedExchangeAdd((volatile signed __int32 *)&v15->m_refCount, 0xFFFFFFFF) == 1 )
    {
      v16 = OpenTaskSlot->u.remoteTask.m_ptr;
      if ( v16 )
        ((void (__fastcall *)(bdRemoteTask *, __int64))v16->~bdReferencable)(v16, 1i64);
    }
    OpenTaskSlot->u.remoteTask.m_ptr = m_ptr;
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
    s_numEntriesUploaded = v2;
    OpenTaskSlot->data = &s_numEntriesUploaded;
    return 1;
  }
  else
  {
    dwHandleTaskError(OpenTaskSlot, BD_START_TASK_FAILED);
    Com_PrintWarning(16, "Couldn't allocate dw task for bdCounter upload.");
    return 0;
  }
}

/*
==============
LiveCounter_Init
==============
*/
void LiveCounter_Init(void)
{
  TaskManager_ConstructTaskSet(&overlappedTasks, "LiveCounter_Init");
  Cmd_AddCommandInternal("incrementcounter", LiveCounter_IncrementCounter_f, &stru_1500D8BA0);
  Cmd_AddCommandInternal("dumplivecounters", LiveCounter_DumpLive_f, &stru_1500D8BD0);
  Cmd_AddCommandInternal("dumpqueuecounters", LiveCounter_DumpQueue_f, &stru_1500D8C00);
  Dvar_BeginPermanentRegistration();
  counterUploadInterval = Dvar_RegisterInt("RKTNMKOMP", 15, 1, 0x7FFFFFFF, 0, "Number of minutes before all the global counters are uploaded");
  counterDownloadInterval = Dvar_RegisterInt("MKMOOLQQLO", 15, 1, 0x7FFFFFFF, 0, "Number of minutes before all the global counters are downloaded");
  Dvar_EndPermanentRegistration();
}

/*
==============
LiveCounter_SetupCounters
==============
*/
void LiveCounter_SetupCounters(void)
{
  StringTable *v0; 
  int RowCount; 
  int v2; 
  __int64 v3; 
  __int64 v4; 
  const char *ColumnValueForRow; 
  int v6; 
  StringTable *tablePtr; 

  if ( !s_countersInit )
  {
    StringTable_GetAsset("mp/globalcounters.csv", (const StringTable **)&tablePtr);
    v0 = tablePtr;
    if ( !tablePtr )
    {
      Com_PrintError(16, "Could not find global counter value as string table '%s' could not be found.\n", "mp/globalcounters.csv");
      v0 = tablePtr;
      s_countersInit = 0;
    }
    RowCount = StringTable_GetRowCount(v0);
    if ( RowCount && RowCount < 64 )
    {
      s_countersCount = RowCount;
      v2 = 0;
      v3 = RowCount;
      if ( RowCount > 0 )
      {
        v4 = 0i64;
        do
        {
          ColumnValueForRow = StringTable_GetColumnValueForRow(tablePtr, v2, 0);
          v6 = atoi(ColumnValueForRow);
          if ( v6 )
          {
            *(_DWORD *)s_localCounters[v4]._bytes_20 = v6;
            *(_DWORD *)s_serverCounters[v4]._bytes_20 = v6;
            *(_QWORD *)&s_localCounters[v4]._bytes_20[8] = 0i64;
            *(_QWORD *)&s_uploadCounters[v4]._bytes_20[8] = 0i64;
            *(_QWORD *)&s_serverCounters[v4]._bytes_20[8] = -1i64;
          }
          else
          {
            Com_PrintError(16, "Global counter string table '%s' has an invalid value: %s.\n", "mp/globalcounters.csv", ColumnValueForRow);
          }
          ++v2;
          ++v4;
          --v3;
        }
        while ( v3 );
      }
      s_countersInit = 1;
    }
    else
    {
      Com_PrintError(16, "Global counter string table '%s' had no values.\n", "mp/globalcounters.csv");
      s_countersInit = 0;
    }
  }
}

/*
==============
LiveCounter_Shutdown
==============
*/
void LiveCounter_Shutdown(void)
{
  Cmd_RemoveCommand("incrementcounter");
  Cmd_RemoveCommand("dumplivecounters");
  Cmd_RemoveCommand("dumpqueuecounters");
}

/*
==============
LiveCounter_Update
==============
*/
void LiveCounter_Update(int controllerIndex)
{
  unsigned int v1; 
  StringTable *v2; 
  int RowCount; 
  int v4; 
  __int64 v5; 
  __int64 v6; 
  const char *ColumnValueForRow; 
  int v8; 
  DWServicesAccess *Instance; 
  overlappedTask *OpenTaskSlot; 
  DWServicesAccess *v11; 
  DWCounter *Counter; 
  bdRemoteTask *m_ptr; 
  StringTable *tablePtr; 
  bdReference<bdRemoteTask> result; 

  v1 = controllerIndex;
  if ( dwGetLogOnStatus(controllerIndex) == DW_LIVE_CONNECTED )
  {
    if ( s_countersLoaded || (s_countersLoaded = 1, s_countersInit) )
    {
      if ( !s_countersInit )
        return;
    }
    else
    {
      StringTable_GetAsset("mp/globalcounters.csv", (const StringTable **)&tablePtr);
      v2 = tablePtr;
      if ( !tablePtr )
      {
        Com_PrintError(16, "Could not find global counter value as string table '%s' could not be found.\n", "mp/globalcounters.csv");
        v2 = tablePtr;
        s_countersInit = 0;
      }
      RowCount = StringTable_GetRowCount(v2);
      if ( !RowCount || RowCount >= 64 )
      {
        Com_PrintError(16, "Global counter string table '%s' had no values.\n", "mp/globalcounters.csv");
        s_countersInit = 0;
        return;
      }
      v4 = 0;
      v5 = RowCount;
      s_countersCount = RowCount;
      if ( RowCount > 0 )
      {
        v6 = 0i64;
        do
        {
          ColumnValueForRow = StringTable_GetColumnValueForRow(tablePtr, v4, 0);
          v8 = atoi(ColumnValueForRow);
          if ( v8 )
          {
            *(_DWORD *)s_localCounters[v6]._bytes_20 = v8;
            *(_DWORD *)s_serverCounters[v6]._bytes_20 = v8;
            *(_QWORD *)&s_localCounters[v6]._bytes_20[8] = 0i64;
            *(_QWORD *)&s_uploadCounters[v6]._bytes_20[8] = 0i64;
            *(_QWORD *)&s_serverCounters[v6]._bytes_20[8] = -1i64;
          }
          else
          {
            Com_PrintError(16, "Global counter string table '%s' has an invalid value: %s.\n", "mp/globalcounters.csv", ColumnValueForRow);
          }
          ++v4;
          ++v6;
          --v5;
        }
        while ( v5 );
        v1 = controllerIndex;
      }
      s_countersInit = 1;
    }
    if ( Com_FrontEnd_IsInFrontEnd() )
    {
      LiveCounter_CheckOngoingTasks();
      if ( Sys_Milliseconds() > s_nextCounterDownloadTime && s_countersRequested )
      {
        s_countersRequested = 0;
        Instance = DWServicesAccess::GetInstance();
        if ( DWServicesAccess::isReady(Instance, v1) )
        {
          if ( v1 >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwcounter.cpp", 207, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v1, 8) )
            __debugbreak();
          if ( !TaskManager_TaskIsInProgressForController(&overlappedTasks, 1, v1) )
          {
            OpenTaskSlot = TaskManager_GetOpenTaskSlot(&overlappedTasks, v1, 1);
            if ( OpenTaskSlot )
            {
              v11 = DWServicesAccess::GetInstance();
              Counter = DWServicesAccess::GetCounter(v11, v1);
              m_ptr = DWCounter::getCounterTotals(Counter, &result, s_serverCounters, s_countersCount)->m_ptr;
              if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
              {
                if ( result.m_ptr )
                  ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
                result.m_ptr = NULL;
              }
              if ( m_ptr )
                bdReference<bdRemoteTask>::operator=(&OpenTaskSlot->u.remoteTask, m_ptr);
              else
                dwHandleTaskError(OpenTaskSlot, BD_START_TASK_FAILED);
            }
            else
            {
              Com_PrintWarning(16, "Couldn't allocate dw task for bdCounter download");
            }
          }
        }
        s_nextCounterDownloadTime = 60000 * counterDownloadInterval->current.integer + Sys_Milliseconds();
      }
      if ( s_countersReadyForUpload && Sys_Milliseconds() > s_nextCounterUploadTime )
      {
        if ( LiveCounter_IncrementCounters(v1) )
          s_countersReadyForUpload = 0;
        else
          s_nextCounterUploadTime = 60000 * counterUploadInterval->current.integer + Sys_Milliseconds();
      }
    }
  }
}

/*
==============
dwCounterTaskComplete
==============
*/
taskCompleteResults dwCounterTaskComplete(overlappedTask *const task)
{
  DWServicesAccess *Instance; 
  bdTask::bdStatus v3; 
  bdLobbyErrorCode ErrorCode; 
  bdLobbyErrorCode v5; 
  char buffer[64]; 

  if ( task && task->u.remoteTask.m_ptr && (Instance = DWServicesAccess::GetInstance(), DWServicesAccess::isReady(Instance, task->controllerIndex)) )
  {
    v3 = task->u.remoteTask.m_ptr->getStatus(task->u.remoteTask.m_ptr);
    ErrorCode = bdRemoteTask::getErrorCode(task->u.remoteTask.m_ptr);
    v5 = ErrorCode;
    if ( ErrorCode )
    {
      dwLobbyErrorCodeToString(ErrorCode, buffer, 0x40u);
      Com_PrintError(25, "DW read stats error %i - '%s'\n", (unsigned int)v5, buffer);
    }
    return dwTaskStatusConvert(v3, v5);
  }
  else
  {
    Com_Printf(16, "Failed to retrieve stats read status\n");
    return 2;
  }
}

