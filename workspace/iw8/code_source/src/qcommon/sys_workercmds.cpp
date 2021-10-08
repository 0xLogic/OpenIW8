/*
==============
Sys_WorkerCmdsAvailable
==============
*/

bool __fastcall Sys_WorkerCmdsAvailable(WorkerCmdType type)
{
  return ?Sys_WorkerCmdsAvailable@@YA_NW4WorkerCmdType@@@Z(type);
}

/*
==============
Sys_CheckHasFinishedAllWorkerCmds
==============
*/

void Sys_CheckHasFinishedAllWorkerCmds(void)
{
  ?Sys_CheckHasFinishedAllWorkerCmds@@YAXXZ();
}

/*
==============
Sys_WaitFrontendWorkerCmds
==============
*/

void Sys_WaitFrontendWorkerCmds(void)
{
  ?Sys_WaitFrontendWorkerCmds@@YAXXZ();
}

/*
==============
Sys_AddWorkerCmd
==============
*/

void __fastcall Sys_AddWorkerCmd(WorkerCmdType type, const void *const data)
{
  ?Sys_AddWorkerCmd@@YAXW4WorkerCmdType@@QEBX@Z(type, data);
}

/*
==============
Sys_HasPendingWorkerCmdOfType
==============
*/

bool __fastcall Sys_HasPendingWorkerCmdOfType(WorkerCmdType type)
{
  return ?Sys_HasPendingWorkerCmdOfType@@YA_NW4WorkerCmdType@@@Z(type);
}

/*
==============
Sys_UpdateActiveWorkerThreads
==============
*/

void Sys_UpdateActiveWorkerThreads(void)
{
  ?Sys_UpdateActiveWorkerThreads@@YAXXZ();
}

/*
==============
Sys_WorkerCmdsPending
==============
*/

bool __fastcall Sys_WorkerCmdsPending(WorkerCmdType type)
{
  return ?Sys_WorkerCmdsPending@@YA_NW4WorkerCmdType@@@Z(type);
}

/*
==============
Sys_ProcessWorkerCmdsWithTimeout
==============
*/

void __fastcall Sys_ProcessWorkerCmdsWithTimeout(bool (__fastcall *timeout)(void *), void *timeoutUserData)
{
  ?Sys_ProcessWorkerCmdsWithTimeout@@YAXP6A_NPEAX@Z0@Z(timeout, timeoutUserData);
}

/*
==============
Sys_IsWorkerCmdWaiting
==============
*/

bool __fastcall Sys_IsWorkerCmdWaiting(WorkerCmdType type, const void *const data)
{
  return ?Sys_IsWorkerCmdWaiting@@YA_NW4WorkerCmdType@@QEBX@Z(type, data);
}

/*
==============
Sys_HasPendingWorkerCmds
==============
*/

bool __fastcall Sys_HasPendingWorkerCmds()
{
  return ?Sys_HasPendingWorkerCmds@@YA_NXZ();
}

/*
==============
Sys_WaitWorkerCmdsOfType
==============
*/

void __fastcall Sys_WaitWorkerCmdsOfType(WorkerCmdType type)
{
  ?Sys_WaitWorkerCmdsOfType@@YAXW4WorkerCmdType@@@Z(type);
}

/*
==============
Sys_AllWorkerCmdThreadsActive
==============
*/

bool __fastcall Sys_AllWorkerCmdThreadsActive(WorkerCmdType type)
{
  return ?Sys_AllWorkerCmdThreadsActive@@YA_NW4WorkerCmdType@@@Z(type);
}

/*
==============
Sys_GetDefaultWorkersCount
==============
*/

unsigned int __fastcall Sys_GetDefaultWorkersCount()
{
  return ?Sys_GetDefaultWorkersCount@@YAIXZ();
}

/*
==============
Sys_ExistsWorkerCmdsOfType
==============
*/

bool __fastcall Sys_ExistsWorkerCmdsOfType(WorkerCmdType type)
{
  return ?Sys_ExistsWorkerCmdsOfType@@YA_NW4WorkerCmdType@@@Z(type);
}

/*
==============
Sys_ResumeWorkerThreads
==============
*/

void Sys_ResumeWorkerThreads(void)
{
  ?Sys_ResumeWorkerThreads@@YAXXZ();
}

/*
==============
Sys_WaitStreamFrontendUpdateWorkerCmds
==============
*/

void Sys_WaitStreamFrontendUpdateWorkerCmds(void)
{
  ?Sys_WaitStreamFrontendUpdateWorkerCmds@@YAXXZ();
}

/*
==============
Sys_HasPendingWorkerCmdsRange
==============
*/

bool __fastcall Sys_HasPendingWorkerCmdsRange(WorkerCmdType first, WorkerCmdType last)
{
  return ?Sys_HasPendingWorkerCmdsRange@@YA_NW4WorkerCmdType@@0@Z(first, last);
}

/*
==============
Sys_IsWorkerCmdOfTypeAvailableForProcess
==============
*/

bool __fastcall Sys_IsWorkerCmdOfTypeAvailableForProcess(WorkerCmdType type)
{
  return ?Sys_IsWorkerCmdOfTypeAvailableForProcess@@YA_NW4WorkerCmdType@@@Z(type);
}

/*
==============
Sys_WaitWorkerCmds
==============
*/

void Sys_WaitWorkerCmds(void)
{
  ?Sys_WaitWorkerCmds@@YAXXZ();
}

/*
==============
Sys_ProcessWorkerCmdsOnlyOfTypeWithTimeout
==============
*/

void __fastcall Sys_ProcessWorkerCmdsOnlyOfTypeWithTimeout(WorkerCmdType type, bool (__fastcall *timeout)(void *), void *timeoutUserData)
{
  ?Sys_ProcessWorkerCmdsOnlyOfTypeWithTimeout@@YAXW4WorkerCmdType@@P6A_NPEAX@Z1@Z(type, timeout, timeoutUserData);
}

/*
==============
Sys_TryAddWorkerCmd
==============
*/

bool __fastcall Sys_TryAddWorkerCmd(WorkerCmdType type, const void *const data)
{
  return ?Sys_TryAddWorkerCmd@@YA_NW4WorkerCmdType@@QEBX@Z(type, data);
}

/*
==============
Sys_InitWorkerThreads
==============
*/

void Sys_InitWorkerThreads(void)
{
  ?Sys_InitWorkerThreads@@YAXXZ();
}

/*
==============
Sys_AnyWorkerCmdThreadsActive
==============
*/

bool __fastcall Sys_AnyWorkerCmdThreadsActive(WorkerCmdType type)
{
  return ?Sys_AnyWorkerCmdThreadsActive@@YA_NW4WorkerCmdType@@@Z(type);
}

/*
==============
Sys_HasPendingStreamFrontendUpdateWorkerCmds
==============
*/

bool __fastcall Sys_HasPendingStreamFrontendUpdateWorkerCmds()
{
  return ?Sys_HasPendingStreamFrontendUpdateWorkerCmds@@YA_NXZ();
}

/*
==============
Sys_WorkerCmds_UpdateClientFrame
==============
*/

void Sys_WorkerCmds_UpdateClientFrame(void)
{
  ?Sys_WorkerCmds_UpdateClientFrame@@YAXXZ();
}

/*
==============
Sys_WaitWorkerCmdsOnlyOfType
==============
*/

void __fastcall Sys_WaitWorkerCmdsOnlyOfType(WorkerCmdType type)
{
  ?Sys_WaitWorkerCmdsOnlyOfType@@YAXW4WorkerCmdType@@@Z(type);
}

/*
==============
R_DpvsEntityNeedsToWait
==============
*/
_BOOL8 R_DpvsEntityNeedsToWait(void *data)
{
  _BOOL8 result; 
  int v2; 

  switch ( *((_DWORD *)data + 8) )
  {
    case 0:
      result = s_workerCmds[21].inSize > 0;
      break;
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 0xA:
    case 0xB:
    case 0xC:
    case 0xD:
    case 0xE:
    case 0xF:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
      goto $LN5_46;
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1A:
    case 0x1B:
    case 0x1C:
    case 0x1D:
    case 0x1E:
    case 0x1F:
      result = s_workerCmds[22].inSize > 0;
      break;
    default:
      v2 = *((_DWORD *)data + 8);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\sys_workercmds.cpp", 308, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "c:\\workspace\\iw8\\code_source\\src\\qcommon\\sys_workercmds.cpp(308): unhandled case %d in switch statement", v2) )
        __debugbreak();
$LN5_46:
      result = 0i64;
      break;
  }
  return result;
}

/*
==============
R_EndFenceBusy
==============
*/

bool __fastcall R_EndFenceBusy(void *data)
{
  return R_EndFencePending();
}

/*
==============
R_EndFencePending
==============
*/
bool R_EndFencePending()
{
  GfxBackEndData *v0; 

  if ( !frontEndDataOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\sys_workercmds.cpp", 186, ASSERT_TYPE_ASSERT, "(frontEndDataOut)", (const char *)&queryFormat, "frontEndDataOut") )
    __debugbreak();
  v0 = frontEndDataOut;
  g_dx.immediateCommandQueue.lastQueriedCompletedFenceValue = ((__int64 (__fastcall *)(ID3D12Fence *))g_dx.immediateCommandQueue.fence->m_pFunction[2].Release)(g_dx.immediateCommandQueue.fence);
  return g_dx.immediateCommandQueue.lastQueriedCompletedFenceValue < v0->endFence;
}

/*
==============
R_GenerateDrawSurfsPending
==============
*/
bool R_GenerateDrawSurfsPending(void *data)
{
  volatile int inSize; 

  if ( *(_DWORD *)data )
  {
    if ( *(_DWORD *)data == 1 )
      return s_workerCmds[52].inSize > 0 || s_workerCmds[58].inSize > 0 || s_workerCmds[81].inSize > 0 || s_workerCmds[53].inSize > 0 || s_workerCmds[54].inSize > 0 || s_workerCmds[55].inSize > 0 || s_workerCmds[57].inSize > 0 || s_workerCmds[59].inSize > 0 || s_workerCmds[60].inSize > 0 || s_workerCmds[61].inSize > 0 || s_workerCmds[82].inSize > 0 || s_workerCmds[62].inSize > 0 || s_workerCmds[63].inSize > 0 || s_workerCmds[87].inSize > 0 || !Sys_IsRendererReady(NULL) || R_EndFencePending();
    if ( *(_DWORD *)data == 2 )
    {
      if ( s_workerCmds[65].inSize > 0 || s_workerCmds[68].inSize > 0 || s_workerCmds[67].inSize > 0 )
        return 1;
      inSize = s_workerCmds[66].inSize;
    }
    else
    {
      if ( *(_DWORD *)data != 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\sys_workercmds.cpp", 411, ASSERT_TYPE_ASSERT, "( ( drawSurfsCmd->type == GENERATE_DRAWSURFS3 ) )", "( drawSurfsCmd->type ) = %i", *(_DWORD *)data) )
        __debugbreak();
      if ( s_workerCmds[28].inSize > 0 || s_workerCmds[86].inSize > 0 )
        return 1;
      inSize = s_workerCmds[85].inSize;
    }
  }
  else
  {
    if ( s_workerCmds[29].inSize > 0 || s_workerCmds[38].inSize > 0 || s_workerCmds[41].inSize > 0 || s_workerCmds[42].inSize > 0 || s_workerCmds[43].inSize > 0 || s_workerCmds[44].inSize > 0 || s_workerCmds[63].inSize > 0 || s_workerCmds[75].inSize > 0 || s_workerCmds[74].inSize > 0 || s_workerCmds[80].inSize > 0 )
      return 1;
    inSize = s_workerCmds[73].inSize;
  }
  return inSize > 0;
}

/*
==============
Sys_AddWorkerCmd
==============
*/
void Sys_AddWorkerCmd(WorkerCmdType type, const void *const data)
{
  __int64 v2; 
  __int64 v4; 

  v2 = type;
  if ( !Sys_TryAddWorkerCmd(type, data) )
  {
    v4 = v2;
    while ( 1 )
    {
      R_WarnOncePerFrame(R_WARN_WORKER_CMD_SIZE, s_workerCmds[v4].name);
      if ( !s_workerThreadCount )
      {
        if ( !s_workerCmds[v4].busyFunc && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\sys_workercmds.cpp", 239, ASSERT_TYPE_ASSERT, "(s_workerCmds[type].busyFunc)", (const char *)&queryFormat, "s_workerCmds[type].busyFunc") )
          __debugbreak();
        if ( !s_workerCmds[v4].busyFunc((void *)data) )
          break;
      }
      if ( GetCurrentProcessorNumber() == 1 )
        Sys_PushUnblockDatabaseThread();
      Sys_Sleep(1);
      if ( GetCurrentProcessorNumber() == 1 )
        Sys_PopUnblockDatabaseThread();
      if ( Sys_TryAddWorkerCmd((WorkerCmdType)v2, data) )
        return;
    }
    Sys_ProcessWorkerCmdInternal((WorkerCmdType)v2, data);
  }
}

/*
==============
Sys_AllWorkerCmdThreadsActive
==============
*/
bool Sys_AllWorkerCmdThreadsActive(WorkerCmdType type)
{
  __int64 v1; 

  v1 = type;
  if ( (s_workerCmds[type].flags & 3) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\sys_workercmds.cpp", 220, ASSERT_TYPE_ASSERT, "(( s_workerCmds[type].flags & ( WorkerCmdFlags::EXCLUSIVE_INTERACTIONS | WorkerCmdFlags::RESTRICT_CONCURRENCY ) ) != WorkerCmdFlags::NONE)", (const char *)&queryFormat, "( s_workerCmds[type].flags & ( WorkerCmdFlags::EXCLUSIVE_INTERACTIONS | WorkerCmdFlags::RESTRICT_CONCURRENCY ) ) != WorkerCmdFlags::NONE") )
    __debugbreak();
  return s_workerCmdThreadCount[v1] <= 0;
}

/*
==============
Sys_AnyWorkerCmdThreadsActive
==============
*/
bool Sys_AnyWorkerCmdThreadsActive(WorkerCmdType type)
{
  __int64 v1; 

  v1 = type;
  if ( (s_workerCmds[type].flags & 3) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\sys_workercmds.cpp", 208, ASSERT_TYPE_ASSERT, "(( s_workerCmds[type].flags & ( WorkerCmdFlags::EXCLUSIVE_INTERACTIONS | WorkerCmdFlags::RESTRICT_CONCURRENCY ) ) != WorkerCmdFlags::NONE)", (const char *)&queryFormat, "( s_workerCmds[type].flags & ( WorkerCmdFlags::EXCLUSIVE_INTERACTIONS | WorkerCmdFlags::RESTRICT_CONCURRENCY ) ) != WorkerCmdFlags::NONE") )
    __debugbreak();
  return s_workerCmdThreadCount[v1] < s_workerCmdThreadCountLimit[v1];
}

/*
==============
Sys_BroadcastPrimaryThreadWaitTypeBegin
==============
*/
void Sys_BroadcastPrimaryThreadWaitTypeBegin(WaitBroadcastState *state, WorkerCmdType type)
{
  int *p_waitThreadIdx; 
  int v5; 
  ThreadContext CurrentThreadContext; 
  unsigned int v7; 
  const ThreadContext *v8; 
  bool v9; 
  __int64 v10; 
  volatile __int32 *v11; 
  WorkerCmdType v12; 
  __int64 v13; 
  __int64 v14; 

  if ( !state && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\sys_workercmds.cpp", 793, ASSERT_TYPE_ASSERT, "(state)", (const char *)&queryFormat, "state") )
    __debugbreak();
  if ( type == WRKCMD_UNSET && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\sys_workercmds.cpp", 794, ASSERT_TYPE_ASSERT, "(type != WRKCMD_UNSET)", (const char *)&queryFormat, "type != WRKCMD_UNSET") )
    __debugbreak();
  if ( state->prevCurrentThreadWaitType != WRKCMD_UNSET && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\sys_workercmds.cpp", 795, ASSERT_TYPE_ASSERT, "(state->prevCurrentThreadWaitType == WRKCMD_UNSET)", (const char *)&queryFormat, "state->prevCurrentThreadWaitType == WRKCMD_UNSET") )
    __debugbreak();
  if ( state->broadcastWaitType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\sys_workercmds.cpp", 796, ASSERT_TYPE_ASSERT, "(!state->broadcastWaitType)", (const char *)&queryFormat, "!state->broadcastWaitType") )
    __debugbreak();
  if ( state->hasBegun && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\sys_workercmds.cpp", 797, ASSERT_TYPE_ASSERT, "(!state->hasBegun)", (const char *)&queryFormat, "!state->hasBegun") )
    __debugbreak();
  p_waitThreadIdx = &state->waitThreadIdx;
  v5 = -1;
  state->prevBroadcastType = WRKCMD_UNSET;
  if ( state == (WaitBroadcastState *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\sys_workercmds.cpp", 763, ASSERT_TYPE_ASSERT, "(outThreadOwnerIdx)", (const char *)&queryFormat, "outThreadOwnerIdx") )
    __debugbreak();
  CurrentThreadContext = Sys_GetCurrentThreadContext();
  v7 = 0;
  v8 = s_ownerThreadContexts;
  while ( *v8 != CurrentThreadContext )
  {
    ++v7;
    ++v8;
    if ( v7 >= 3 )
    {
      v9 = 0;
      goto LABEL_24;
    }
  }
  v9 = 1;
  v5 = v7;
LABEL_24:
  *p_waitThreadIdx = v5;
  state->broadcastWaitType = v9;
  if ( v9 )
  {
    if ( (unsigned int)*p_waitThreadIdx >= 3 )
    {
      LODWORD(v14) = *p_waitThreadIdx;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\sys_workercmds.cpp", 807, ASSERT_TYPE_ASSERT, "(unsigned)( state->waitThreadIdx ) < (unsigned)( ( sizeof( *array_counter( s_workerCmdWaitType ) ) + 0 ) )", "state->waitThreadIdx doesn't index ARRAY_COUNT( s_workerCmdWaitType )\n\t%i not in [0, %i)", v14, 3) )
        __debugbreak();
    }
    v10 = *p_waitThreadIdx;
    v11 = &s_workerCmdWaitType[v10];
    if ( ((unsigned __int8)v11 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)&s_workerCmdWaitType[v10]) )
      __debugbreak();
    v12 = _InterlockedExchange(v11, type);
    state->prevBroadcastType = v12;
    if ( v12 == type && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\sys_workercmds.cpp", 809, ASSERT_TYPE_ASSERT, "(state->prevBroadcastType != type)", (const char *)&queryFormat, "state->prevBroadcastType != type") )
      __debugbreak();
  }
  v13 = 8i64 * tls_index;
  state->prevCurrentThreadWaitType = *(_DWORD *)(*(_QWORD *)((char *)NtCurrentTeb()->Reserved1[11] + v13) + 988i64);
  *(_DWORD *)(*(_QWORD *)((char *)NtCurrentTeb()->Reserved1[11] + v13) + 988i64) = type;
  Sys_NotifyWorkerCmdType(type);
  state->hasBegun = 1;
}

/*
==============
Sys_BroadcastPrimaryThreadWaitTypeEnd
==============
*/
void Sys_BroadcastPrimaryThreadWaitTypeEnd(WaitBroadcastState *state)
{
  __int64 v2; 
  __int64 waitThreadIdx; 
  __int32 prevBroadcastType; 
  volatile __int32 *v5; 
  WorkerCmdType prevCurrentThreadWaitType; 
  __int64 v7; 
  __int64 v9; 
  __int128 v10; 

  _RBX = state;
  if ( !state && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\sys_workercmds.cpp", 822, ASSERT_TYPE_ASSERT, "(state)", (const char *)&queryFormat, "state") )
    __debugbreak();
  if ( _RBX->hasBegun )
  {
    v2 = tls_index;
    if ( _RBX->prevCurrentThreadWaitType == *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 988i64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\sys_workercmds.cpp", 826, ASSERT_TYPE_ASSERT, "(state->prevCurrentThreadWaitType != s_currentThreadWaitType)", (const char *)&queryFormat, "state->prevCurrentThreadWaitType != s_currentThreadWaitType") )
      __debugbreak();
    if ( *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v2) + 988i64) == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\sys_workercmds.cpp", 827, ASSERT_TYPE_ASSERT, "(s_currentThreadWaitType != WRKCMD_UNSET)", (const char *)&queryFormat, "s_currentThreadWaitType != WRKCMD_UNSET") )
      __debugbreak();
    if ( _RBX->broadcastWaitType )
    {
      if ( _RBX->waitThreadIdx >= 3u )
      {
        LODWORD(v9) = _RBX->waitThreadIdx;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\sys_workercmds.cpp", 831, ASSERT_TYPE_ASSERT, "(unsigned)( state->waitThreadIdx ) < (unsigned)( ( sizeof( *array_counter( s_workerCmdWaitType ) ) + 0 ) )", "state->waitThreadIdx doesn't index ARRAY_COUNT( s_workerCmdWaitType )\n\t%i not in [0, %i)", v9, 3) )
          __debugbreak();
      }
      waitThreadIdx = _RBX->waitThreadIdx;
      prevBroadcastType = _RBX->prevBroadcastType;
      v5 = &s_workerCmdWaitType[waitThreadIdx];
      if ( ((unsigned __int8)v5 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)&s_workerCmdWaitType[waitThreadIdx]) )
        __debugbreak();
      if ( _InterlockedExchange(v5, prevBroadcastType) != *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v2) + 988i64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\sys_workercmds.cpp", 833, ASSERT_TYPE_ASSERT, "((Sys_InterlockedExchange( &s_workerCmdWaitType[state->waitThreadIdx], state->prevBroadcastType )) == (s_currentThreadWaitType))", (const char *)&queryFormat, "Sys_InterlockedExchange( &s_workerCmdWaitType[state->waitThreadIdx], state->prevBroadcastType ) == s_currentThreadWaitType") )
        __debugbreak();
    }
    prevCurrentThreadWaitType = _RBX->prevCurrentThreadWaitType;
    *(_QWORD *)&v10 = -1i64;
    DWORD2(v10) = -1;
    WORD6(v10) = 0;
    v7 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + v2);
    __asm
    {
      vmovups xmm0, [rsp+68h+var_28]
      vmovups xmmword ptr [rbx], xmm0
    }
    *(_DWORD *)(v7 + 988) = prevCurrentThreadWaitType;
  }
}

/*
==============
Sys_CheckHasFinishedAllWorkerCmds
==============
*/
void Sys_CheckHasFinishedAllWorkerCmds(void)
{
  char v0; 
  __int64 i; 

  v0 = 0;
  for ( i = 0i64; i < 159; ++i )
  {
    if ( s_workerCmds[i].inSize > 0 )
    {
      Com_Printf(16, "ERROR: Still processing worker commands for '%s' (%d)\n", s_workerCmds[i].name, (unsigned int)s_workerCmds[i].inSize);
      v0 = 1;
    }
  }
  if ( v0 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\sys_workercmds.cpp", 1711, ASSERT_TYPE_ASSERT, "(!stillRunning)", "%s\n\tWorker commands are still active!", "!stillRunning") )
      __debugbreak();
  }
}

/*
==============
Sys_ExistsWorkerCmdsOfType
==============
*/
bool Sys_ExistsWorkerCmdsOfType(WorkerCmdType type)
{
  return s_workerCmds[type].inSize > 0;
}

/*
==============
Sys_FinishedWorkerCmdsRange
==============
*/
char Sys_FinishedWorkerCmdsRange(void *userData)
{
  __int64 v1; 
  volatile int *i; 
  WaitBroadcastState *v4; 

  v1 = *(int *)userData;
  if ( (int)v1 > *((_DWORD *)userData + 1) )
    return 1;
  for ( i = &s_workerCmds[v1].inSize; *(int *)i <= 0; i += 48 )
  {
    LODWORD(v1) = v1 + 1;
    if ( (int)v1 > *((_DWORD *)userData + 1) )
      return 1;
  }
  v4 = (WaitBroadcastState *)((char *)userData + 8);
  Sys_BroadcastPrimaryThreadWaitTypeEnd((WaitBroadcastState *)((char *)userData + 8));
  Sys_BroadcastPrimaryThreadWaitTypeBegin(v4, (WorkerCmdType)v1);
  return 0;
}

/*
==============
Sys_GetDefaultWorkersCount
==============
*/
__int64 Sys_GetDefaultWorkersCount()
{
  return 3i64;
}

/*
==============
Sys_HasPendingStreamFrontendUpdateWorkerCmds
==============
*/
char Sys_HasPendingStreamFrontendUpdateWorkerCmds()
{
  volatile int *p_inSize; 

  p_inSize = &s_workerCmds[95].inSize;
  while ( *(int *)p_inSize <= 0 )
  {
    p_inSize += 48;
    if ( (__int64)p_inSize > (__int64)&s_workerCmds[103].inSize )
      return 0;
  }
  return 1;
}

/*
==============
Sys_HasPendingWorkerCmdOfType
==============
*/
bool Sys_HasPendingWorkerCmdOfType(WorkerCmdType type)
{
  return s_workerCmds[type].inSize > 0;
}

/*
==============
Sys_HasPendingWorkerCmds
==============
*/
char Sys_HasPendingWorkerCmds()
{
  volatile int *p_inSize; 

  p_inSize = &s_workerCmds[0].inSize;
  while ( *(int *)p_inSize <= 0 )
  {
    p_inSize += 48;
    if ( (__int64)p_inSize > (__int64)&s_workerCmds[158].inSize )
      return 0;
  }
  return 1;
}

/*
==============
Sys_HasPendingWorkerCmdsRange
==============
*/
char Sys_HasPendingWorkerCmdsRange(WorkerCmdType first, WorkerCmdType last)
{
  __int64 v2; 
  volatile int *i; 

  v2 = first;
  if ( (int)first > (__int64)(int)last )
    return 0;
  for ( i = &s_workerCmds[first].inSize; *(int *)i <= 0; i += 48 )
  {
    if ( ++v2 > (int)last )
      return 0;
  }
  return 1;
}

/*
==============
Sys_InitWorkerThreads
==============
*/
void Sys_InitWorkerThreads(void)
{
  volatile int *p_syncedEndPos; 
  unsigned int v1; 
  unsigned int v2; 
  unsigned int v3; 
  __int64 v4; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\sys_workercmds.cpp", 1318, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  p_syncedEndPos = &s_workerCmds[0].syncedEndPos;
  v1 = 0;
  do
  {
    v2 = *((_DWORD *)p_syncedEndPos + 13);
    *((_DWORD *)p_syncedEndPos - 3) = 0;
    *(_QWORD *)(p_syncedEndPos - 1) = v2;
    *((_DWORD *)p_syncedEndPos + 1) = 0;
    *((_DWORD *)p_syncedEndPos + 2) = 0;
    if ( !*((_DWORD *)p_syncedEndPos + 3) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\sys_workercmds.cpp", 573, ASSERT_TYPE_ASSERT, "(workerCmds.dataSize)", (const char *)&queryFormat, "workerCmds.dataSize") )
      __debugbreak();
    v3 = *((_DWORD *)p_syncedEndPos + 3);
    *((_DWORD *)p_syncedEndPos + 14) = *((_DWORD *)p_syncedEndPos + 13) / v3;
    if ( v3 > 0x1000 )
    {
      LODWORD(v4) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\sys_workercmds.cpp", 575, ASSERT_TYPE_ASSERT, "( ( workerCmds.dataSize <= MAX_WRKCMD_CMD_SIZE ) )", "( workerCmds.dataSize ) = %i", v4) )
        __debugbreak();
    }
    p_syncedEndPos += 48;
  }
  while ( p_syncedEndPos - 3 != s_workerCmdThreadCountLimit );
  do
  {
    if ( !Sys_SpawnWorkerThread(Sys_WorkerThread, v1) )
      Com_Error_impl(ERR_FATAL, (const ObfuscateErrorText)&stru_1440283B8, 876i64);
    ++v1;
  }
  while ( v1 < 3 );
}

/*
==============
Sys_IsWorkerCmdAllowedOnCurrentThread
==============
*/
bool Sys_IsWorkerCmdAllowedOnCurrentThread(WorkerCmdType type)
{
  WorkerCmdFlags *p_flags; 

  p_flags = &s_workerCmds[type].flags;
  return ((*(_BYTE *)p_flags & 8) == 0 || !Sys_IsRenderThread() || !s_workerThreadCount) && ((*(_BYTE *)p_flags & 4) == 0 || !Sys_IsMainThread() || !s_workerThreadCount) && ((*(_BYTE *)p_flags & 0x10) == 0 || !Sys_IsServerThread() || s_useServerThreadAsFullWorkerThread || !s_workerThreadCount);
}

/*
==============
Sys_IsWorkerCmdOfTypeAvailableForProcess
==============
*/
bool Sys_IsWorkerCmdOfTypeAvailableForProcess(WorkerCmdType type)
{
  return s_workerCmds[type].outSize > 0 && Sys_IsWorkerCmdAllowedOnCurrentThread(type);
}

/*
==============
Sys_IsWorkerCmdWaiting
==============
*/
__int64 Sys_IsWorkerCmdWaiting(WorkerCmdType type, const void *const data)
{
  bool (__fastcall **p_busyFunc)(void *); 

  p_busyFunc = &s_workerCmds[type].busyFunc;
  if ( !*p_busyFunc && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\sys_workercmds.cpp", 239, ASSERT_TYPE_ASSERT, "(s_workerCmds[type].busyFunc)", (const char *)&queryFormat, "s_workerCmds[type].busyFunc") )
    __debugbreak();
  return ((__int64 (__fastcall *)(const void *const))*p_busyFunc)(data);
}

/*
==============
Sys_NoDependency
==============
*/
bool Sys_NoDependency(void *data)
{
  return 0;
}

/*
==============
Sys_NotifyWorkerCmdType
==============
*/
void Sys_NotifyWorkerCmdType(WorkerCmdType type)
{
  signed __int32 v1; 

  v1 = s_workerCmdMinType;
  if ( s_workerCmdMinType > type )
  {
    if ( ((unsigned __int8)&s_workerCmdMinType & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)&s_workerCmdMinType) )
      __debugbreak();
    _InterlockedCompareExchange(&s_workerCmdMinType, type, v1);
  }
  if ( s_workerCmdWaitCount )
    Sys_SetWorkerCmdEvent();
}

/*
==============
Sys_ProcessWorkerCmd
==============
*/
char Sys_ProcessWorkerCmd(WorkerCmdType type)
{
  __int64 v1; 
  __int64 v2; 
  volatile int *p_outSize; 
  __int64 v4; 
  volatile int v6; 
  volatile int *v7; 
  volatile int *p_startPosLock; 
  __int64 startPos; 
  unsigned __int8 *v10; 
  __int64 v11; 
  WorkerCmdType v12; 
  __int64 v13; 
  unsigned __int64 v14; 
  unsigned __int64 v15; 
  unsigned __int64 v16; 
  volatile signed __int32 *v17; 
  __int64 v18; 
  signed int dataSize; 
  __int64 v21; 
  int bufSize; 
  char data[4096]; 

  v1 = type;
  v2 = type;
  v21 = v2 * 192;
  bufSize = s_workerCmds[v2].bufSize;
  dataSize = s_workerCmds[v2].dataSize;
  if ( bufSize % dataSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\sys_workercmds.cpp", 656, ASSERT_TYPE_ASSERT, "(!(workerCmds->bufSize % dataSize))", (const char *)&queryFormat, "!(workerCmds->bufSize % dataSize)") )
    __debugbreak();
  p_outSize = &s_workerCmds[v2].outSize;
  v4 = ((_BYTE)(v2 * 192) + (unsigned __int8)0x40000000u - 44) & 3;
  while ( 1 )
  {
    if ( (((_BYTE)(v2 * 192) + (unsigned __int8)0x40000000u - 44) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &s_workerCmds[v2].outSize) )
      __debugbreak();
    if ( _InterlockedExchangeAdd(p_outSize, 0xFFFFFFFF) > 0 )
      break;
    if ( (((_BYTE)(v2 * 192) + (unsigned __int8)0x40000000u - 44) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &s_workerCmds[v2].outSize) )
      __debugbreak();
    if ( _InterlockedExchangeAdd(p_outSize, 1u) < 0 )
      return 0;
  }
  v6 = s_workerCmdThreadCount[v1];
  v7 = &s_workerCmdThreadCount[v1];
  if ( v6 != 0x7FFFFFFF )
  {
    if ( ((unsigned __int8)v7 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)v7) )
      __debugbreak();
    if ( _InterlockedExchangeAdd(v7, 0xFFFFFFFF) <= 0 )
    {
      if ( (((_BYTE)(v2 * 192) + (unsigned __int8)0x40000000u - 44) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)p_outSize) )
        __debugbreak();
      _InterlockedExchangeAdd(p_outSize, 1u);
      if ( ((unsigned __int8)v7 & 3) == 0 )
        goto LABEL_25;
      goto LABEL_23;
    }
  }
  p_startPosLock = &s_workerCmds[v2].startPosLock;
  Sys_WaitInterlockedCompareExchange(&s_workerCmds[v2].startPosLock, 1, 0);
  startPos = s_workerCmds[v2].startPos;
  if ( (unsigned int)startPos >= s_workerCmds[v2].bufSize )
  {
    LODWORD(v18) = s_workerCmds[v2].startPos;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\sys_workercmds.cpp", 698, ASSERT_TYPE_ASSERT, "(unsigned)( startPos ) < (unsigned)( workerCmds->bufSize )", "startPos doesn't index workerCmds->bufSize\n\t%i not in [0, %i)", v18, s_workerCmds[v2].bufSize) )
      __debugbreak();
  }
  v10 = &s_workerCmds[v2].buf[startPos];
  if ( (*(unsigned __int8 (__fastcall **)(unsigned __int8 *))((char *)&s_workerCmds[0].busyFunc + v21))(v10) )
  {
    if ( ((unsigned __int8)p_startPosLock & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)p_startPosLock) )
      __debugbreak();
    _InterlockedExchange(p_startPosLock, 0);
    if ( v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)p_outSize) )
      __debugbreak();
    _InterlockedExchangeAdd(p_outSize, 1u);
    if ( *v7 == 0x7FFFFFFF )
      return 0;
    if ( ((unsigned __int8)v7 & 3) == 0 )
    {
LABEL_25:
      _InterlockedExchangeAdd(v7, 1u);
      return 0;
    }
LABEL_23:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", v7) )
      __debugbreak();
    goto LABEL_25;
  }
  memcpy_0(data, v10, dataSize);
  v11 = v21;
  if ( ((int)startPos < 0 || (int)startPos >= *(int *)((char *)&s_workerCmds[0].bufSize + v21)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\sys_workercmds.cpp", 626, ASSERT_TYPE_ASSERT, "(pos >= 0 && pos < workerCmds->bufSize)", (const char *)&queryFormat, "pos >= 0 && pos < workerCmds->bufSize") )
    __debugbreak();
  if ( (unsigned int)startPos % *(unsigned int *)((char *)&s_workerCmds[0].dataSize + v21) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\sys_workercmds.cpp", 627, ASSERT_TYPE_ASSERT, "(pos % workerCmds->dataSize == 0)", (const char *)&queryFormat, "pos % workerCmds->dataSize == 0") )
    __debugbreak();
  v12 = type;
  if ( (unsigned int)type > WRKCMD_UPDATE_FX_PASS_4 || (v13 = 0xA4000000000i64, !_bittest64(&v13, type)) )
  {
    v14 = (*(unsigned __int64 **)((char *)&s_workerCmds[0].bufHash + v21))[(unsigned int)startPos / *(unsigned int *)((char *)&s_workerCmds[0].dataSize + v21)];
    v15 = j_CoD_XXH64(&(*(unsigned __int8 **)((char *)&s_workerCmds[0].buf + v21))[startPos], *(unsigned int *)((char *)&s_workerCmds[0].dataSize + v21), 0i64);
    v16 = v15;
    if ( v14 != v15 )
    {
      Com_PrintError(0, "Data hash validation to ensure immutability for worker command type %d failed. Expected hash = 0x%zx, computed hash = 0x%zx.\n", (unsigned int)type, v14, v15);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\sys_workercmds.cpp", 643, ASSERT_TYPE_ASSERT, "( expectedHash ) == ( computedHash )", "%s == %s\n\t%llu, %llu", "expectedHash", "computedHash", v14, v16) )
        __debugbreak();
    }
    v11 = v21;
    v12 = type;
  }
  (*(unsigned __int64 **)((char *)&s_workerCmds[0].bufHash + v11))[(int)startPos / dataSize] = 0i64;
  *(int *)((char *)&s_workerCmds[0].startPos + v11) = ((int)startPos + dataSize) % bufSize;
  if ( ((unsigned __int8)p_startPosLock & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)p_startPosLock) )
    __debugbreak();
  _InterlockedExchange(p_startPosLock, 0);
  Sys_ProfBeginNamedEvent(0xFF000080, *(const char **)((char *)&s_workerCmds[0].name + v11));
  Sys_ProcessWorkerCmdInternal(v12, data);
  v17 = (volatile int *)((char *)&s_workerCmds[0].inSize + v11);
  if ( (((unsigned __int8)&s_workerCmds[0].inSize + v11) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)v17) )
    __debugbreak();
  _InterlockedExchangeAdd(v17, 0xFFFFFFFF);
  if ( s_workerCmdWaitCount )
    Sys_SetWorkerCmdEvent();
  Sys_ProfEndNamedEvent();
  if ( *v7 != 0x7FFFFFFF )
  {
    if ( ((unsigned __int8)v7 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)v7) )
      __debugbreak();
    _InterlockedExchangeAdd(v7, 1u);
  }
  return 1;
}

/*
==============
Sys_ProcessWorkerCmdInternal
==============
*/
void Sys_ProcessWorkerCmdInternal(WorkerCmdType type, const void *const data)
{
  __int64 v3; 
  void (__fastcall **p_callback)(const void *const); 

  v3 = type;
  if ( R_IsLockedGfxImmediateContext() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 23, ASSERT_TYPE_ASSERT, "(!R_IsLockedGfxImmediateContext())", (const char *)&queryFormat, "!R_IsLockedGfxImmediateContext()") )
    __debugbreak();
  *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 992i64) = v3;
  Sys_NotifyWorkerCmdType((WorkerCmdType)v3);
  p_callback = &s_workerCmds[v3].callback;
  if ( !*p_callback && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\sys_workercmds.cpp", 610, ASSERT_TYPE_ASSERT, "(s_workerCmds[type].callback)", (const char *)&queryFormat, "s_workerCmds[type].callback") )
    __debugbreak();
  (*p_callback)(data);
  *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 992i64) = -1;
}

/*
==============
Sys_ProcessWorkerCmds
==============
*/
void Sys_ProcessWorkerCmds(unsigned int threadContext)
{
  char v2; 
  const char *v3; 
  int v4; 
  const char *v5; 
  __int64 v6; 
  char v7; 
  int v8; 
  unsigned int v9; 
  __int64 v10; 
  char v11; 
  int v12; 
  volatile int *p_outSize; 
  char v14; 

  v2 = 1;
  switch ( threadContext )
  {
    case 0u:
      v3 = "threadContext != THREAD_CONTEXT_MAIN";
      v4 = 914;
      v5 = "(threadContext != THREAD_CONTEXT_MAIN)";
      goto LABEL_7;
    case 1u:
      v3 = "threadContext != THREAD_CONTEXT_BACKEND";
      v4 = 916;
      v5 = "(threadContext != THREAD_CONTEXT_BACKEND)";
      goto LABEL_7;
    case 5u:
      v3 = "threadContext != THREAD_CONTEXT_SERVER";
      v4 = 918;
      v5 = "(threadContext != THREAD_CONTEXT_SERVER)";
LABEL_7:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\sys_workercmds.cpp", v4, ASSERT_TYPE_ASSERT, v5, (const char *)&queryFormat, v3) )
        __debugbreak();
      break;
  }
  v6 = tls_index;
  while ( 1 )
  {
    do
    {
      while ( 1 )
      {
$restart_0:
        v7 = 0;
        v8 = *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v6) + 988i64);
        v9 = 0;
        v10 = 0i64;
        while ( s_workerCmdWaitType[v10] == -1 )
        {
          ++v9;
          ++v10;
          if ( v9 >= 3 )
            goto LABEL_15;
        }
        v8 = s_workerCmdWaitType[v10];
LABEL_15:
        if ( v8 != -1 && s_workerCmds[v8].outSize > 0 )
        {
          while ( 1 )
          {
            if ( threadContext == 2 )
            {
              Sys_CheckPauseWorkerCmd();
              Sys_EnterCriticalSection(CRITSECT_LONG_UNINTERRUPTIBLE_COOPERATIVE_DB_WORK);
            }
            v11 = Sys_ProcessWorkerCmd((WorkerCmdType)v8);
            if ( threadContext == 2 )
              Sys_LeaveCriticalSection(CRITSECT_LONG_UNINTERRUPTIBLE_COOPERATIVE_DB_WORK);
            if ( !v11 )
              break;
            v7 = 1;
          }
          if ( v7 )
          {
            if ( ((unsigned __int8)&s_workerCmdMinType & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)&s_workerCmdMinType) )
              __debugbreak();
            goto LABEL_46;
          }
        }
        v12 = s_workerCmdMinType;
        if ( s_workerCmdMinType == 0x7FFFFFFF )
          v12 = 0;
        v8 = v12;
        if ( v12 >= 159 )
          break;
        p_outSize = &s_workerCmds[v12].outSize;
        while ( 1 )
        {
          if ( *(int *)p_outSize > 0 )
          {
            while ( 1 )
            {
              if ( threadContext == 2 )
              {
                Sys_CheckPauseWorkerCmd();
                Sys_EnterCriticalSection(CRITSECT_LONG_UNINTERRUPTIBLE_COOPERATIVE_DB_WORK);
              }
              v14 = Sys_ProcessWorkerCmd((WorkerCmdType)v8);
              if ( threadContext == 2 )
                Sys_LeaveCriticalSection(CRITSECT_LONG_UNINTERRUPTIBLE_COOPERATIVE_DB_WORK);
              if ( !v14 )
                break;
              if ( s_workerCmdMinType < v8 )
                goto $restart_0;
              v7 = 1;
            }
            if ( v7 )
              break;
          }
          if ( ((unsigned __int8)&s_workerCmdMinType & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)&s_workerCmdMinType) )
            __debugbreak();
          _InterlockedCompareExchange(&s_workerCmdMinType, 0x7FFFFFFF, v8++);
          p_outSize += 48;
          if ( v8 >= 159 )
            goto LABEL_41;
        }
        if ( ((unsigned __int8)&s_workerCmdMinType & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)&s_workerCmdMinType) )
          __debugbreak();
LABEL_46:
        _InterlockedCompareExchange(&s_workerCmdMinType, 0x7FFFFFFF, v8);
      }
LABEL_41:
      ;
    }
    while ( v12 );
    if ( !v2 )
      break;
    Sys_ResetWorkerCmdEvent();
    v2 = 0;
  }
}

/*
==============
Sys_ProcessWorkerCmdsOnlyOfTypeWithTimeout
==============
*/
void Sys_ProcessWorkerCmdsOnlyOfTypeWithTimeout(WorkerCmdType type, bool (*timeout)(void *), void *timeoutUserData)
{
  _QWORD *v3; 
  __int64 v6; 
  __int64 v7; 
  const char *v8; 
  int v9; 
  int v10; 
  WaitBroadcastState state; 

  v3 = NtCurrentTeb()->Reserved1[11];
  *(_QWORD *)&state.prevCurrentThreadWaitType = -1i64;
  v6 = type;
  v7 = v3[tls_index];
  state.waitThreadIdx = -1;
  *(_WORD *)&state.broadcastWaitType = 0;
  if ( *(_DWORD *)(v7 + 988) != -1 )
  {
    v10 = -1;
    v9 = *(_DWORD *)(v7 + 988);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\sys_workercmds.cpp", 1259, ASSERT_TYPE_ASSERT, "( s_currentThreadWaitType ) == ( WRKCMD_UNSET )", "%s == %s\n\t%i, %i", "s_currentThreadWaitType", "WRKCMD_UNSET", v9, v10) )
      __debugbreak();
  }
  Sys_BroadcastPrimaryThreadWaitTypeBegin(&state, (WorkerCmdType)v6);
  v8 = j_va("wait only %s", s_workerCmds[v6].name);
  Sys_ProfBeginNamedEvent(0xFF404040, v8);
  Sys_ProcessWorkerCmdsWithTimeoutAndFilter(timeout, timeoutUserData, 1);
  Sys_ProfEndNamedEvent();
  Sys_BroadcastPrimaryThreadWaitTypeEnd(&state);
}

/*
==============
Sys_ProcessWorkerCmdsWithTimeout
==============
*/
void Sys_ProcessWorkerCmdsWithTimeout(bool (*timeout)(void *), void *timeoutUserData)
{
  Sys_ProcessWorkerCmdsWithTimeoutAndFilter(timeout, timeoutUserData, 0);
}

/*
==============
Sys_ProcessWorkerCmdsWithTimeoutAndFilter
==============
*/
void Sys_ProcessWorkerCmdsWithTimeoutAndFilter(bool (*timeout)(void *), void *timeoutUserData, bool onlyOfType)
{
  unsigned __int64 v6; 

  if ( R_IsLockedGfxImmediateContext() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 23, ASSERT_TYPE_ASSERT, "(!R_IsLockedGfxImmediateContext())", (const char *)&queryFormat, "!R_IsLockedGfxImmediateContext()") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFF000080, "Sys_ProcessWorkerCmdsWithTimeout");
  if ( !Sys_ProcessWorkerCmdsWithTimeoutInternal(timeout, timeoutUserData, onlyOfType) )
  {
    v6 = (unsigned __int64)&s_workerCmdWaitCount & 3;
    do
    {
      if ( v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)&s_workerCmdWaitCount) )
        __debugbreak();
      _InterlockedIncrement(&s_workerCmdWaitCount);
      Sys_ProfBeginNamedEvent(0xFFFFA500, "wait cmd");
      Sys_WaitForWorkerCmdWithTimeout();
      Sys_ProfEndNamedEvent();
      if ( v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)&s_workerCmdWaitCount) )
        __debugbreak();
      _InterlockedDecrement(&s_workerCmdWaitCount);
      Sys_ProfEndNamedEvent();
      Sys_ProfBeginNamedEvent(0xFF000080, "Sys_ProcessWorkerCmdsWithTimeout");
    }
    while ( !Sys_ProcessWorkerCmdsWithTimeoutInternal(timeout, timeoutUserData, onlyOfType) );
  }
  Sys_ProfEndNamedEvent();
  if ( R_IsLockedGfxImmediateContext() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 23, ASSERT_TYPE_ASSERT, "(!R_IsLockedGfxImmediateContext())", (const char *)&queryFormat, "!R_IsLockedGfxImmediateContext()") )
    __debugbreak();
}

/*
==============
Sys_ProcessWorkerCmdsWithTimeoutInternal
==============
*/
char Sys_ProcessWorkerCmdsWithTimeoutInternal(bool (*timeout)(void *), void *timeoutUserData, bool onlyOfType)
{
  __int64 v6; 
  __int64 v7; 
  __int64 v8; 
  unsigned __int64 v9; 
  signed __int32 v10; 
  __int64 v11; 
  bool v12; 
  __int64 v13; 
  WorkerCmdFlags *p_flags; 
  int v15; 
  int v16; 
  WorkerCmdFlags *v17; 
  const char *v18; 
  char v20; 

  if ( !timeout(timeoutUserData) )
  {
    v6 = tls_index;
    v20 = 1;
    while ( 1 )
    {
LABEL_3:
      v7 = 988i64;
      v8 = 0i64;
      v9 = 0x140000000ui64;
$restart_1:
      v10 = *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v6) + 988i64);
      if ( v10 == -1 )
      {
        v7 = 0i64;
        v11 = 0i64;
        while ( s_workerCmdWaitType[v11] == -1 )
        {
          v7 = (unsigned int)(v7 + 1);
          ++v11;
          if ( (unsigned int)v7 >= 3 )
            goto LABEL_10;
        }
        v10 = s_workerCmdWaitType[v11];
      }
LABEL_10:
      v12 = onlyOfType && s_workerThreadCount;
      if ( v10 == -1 )
      {
        if ( v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\sys_workercmds.cpp", 1161, ASSERT_TYPE_ASSERT, "(!allowStallToWaitOnlyOfType)", (const char *)&queryFormat, "!allowStallToWaitOnlyOfType") )
          __debugbreak();
      }
      else
      {
        v13 = v10;
        if ( s_workerCmds[v13].outSize > 0 )
        {
          p_flags = &s_workerCmds[v13].flags;
          if ( ((s_workerCmds[v13].flags & 8) == 0 || !Sys_IsRenderThread() || !s_workerThreadCount) && ((*(_BYTE *)p_flags & 4) == 0 || !Sys_IsMainThread() || !s_workerThreadCount) && ((*(_BYTE *)p_flags & 0x10) == 0 || !Sys_IsServerThread() || s_useServerThreadAsFullWorkerThread || !s_workerThreadCount) && Sys_ProcessWorkerCmd((WorkerCmdType)v10) )
          {
            while ( !timeout(timeoutUserData) )
            {
              if ( !Sys_ProcessWorkerCmd((WorkerCmdType)v10) )
              {
                if ( ((unsigned __int8)&s_workerCmdMinType & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)&s_workerCmdMinType) )
                  __debugbreak();
                _InterlockedCompareExchange(&s_workerCmdMinType, 0x7FFFFFFF, v10);
                goto LABEL_3;
              }
            }
            return 1;
          }
          v9 = 0x140000000ui64;
        }
        if ( v12 )
        {
          v18 = j_va("Stalling for worker %s", s_workerCmds[v10].name);
          Sys_ProfBeginNamedEvent(0xFFFFA500, v18);
          while ( !timeout(timeoutUserData) )
            Sys_Sleep(0);
          Sys_ProfEndNamedEvent();
          return 1;
        }
      }
      v15 = s_workerCmdMinType;
      if ( s_workerCmdMinType == 0x7FFFFFFF )
        v15 = 0;
      v16 = v15;
      if ( v15 < 159 )
      {
        v17 = &s_workerCmds[v15].flags;
        while ( *((int *)v17 - 13) <= 0 || (*(_BYTE *)v17 & 8) != 0 && Sys_IsRenderThread() && s_workerThreadCount || (*(_BYTE *)v17 & 4) != 0 && Sys_IsMainThread() && s_workerThreadCount || (*(_BYTE *)v17 & 0x10) != 0 && Sys_IsServerThread() && !s_useServerThreadAsFullWorkerThread && s_workerThreadCount || !Sys_ProcessWorkerCmd((WorkerCmdType)v16) )
        {
          if ( ((unsigned __int8)&s_workerCmdMinType & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)&s_workerCmdMinType) )
            __debugbreak();
          _InterlockedCompareExchange(&s_workerCmdMinType, 0x7FFFFFFF, v16++);
          v17 += 48;
          if ( v16 >= 159 )
            goto LABEL_53;
        }
        while ( !timeout(timeoutUserData) )
        {
          v9 = 0x140000000ui64;
          v7 = 988i64;
          v8 = 0i64;
          if ( s_workerCmdMinType < v16 )
            goto $restart_1;
          if ( !Sys_ProcessWorkerCmd((WorkerCmdType)v16) )
          {
            if ( ((unsigned __int8)&s_workerCmdMinType & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)&s_workerCmdMinType) )
              __debugbreak();
            _InterlockedCompareExchange(&s_workerCmdMinType, 0x7FFFFFFF, v16);
            goto LABEL_3;
          }
        }
        return 1;
      }
LABEL_53:
      if ( ((unsigned __int8 (__fastcall *)(void *, __int64, unsigned __int64, __int64))timeout)(timeoutUserData, v7, v9, v8) )
        return 1;
      if ( !v15 )
      {
        if ( !v20 )
          return 0;
        Sys_ResetWorkerCmdEvent();
        v20 = 0;
      }
    }
  }
  return 1;
}

/*
==============
Sys_ResumeWorkerThreads
==============
*/
void Sys_ResumeWorkerThreads(void)
{
  const dvar_t *v0; 
  unsigned int unsignedInt; 
  unsigned int i; 

  v0 = r_smp_workers_count;
  if ( r_smp_workers_count->current.integer < 0 )
  {
    Dvar_SetInt_Internal(r_smp_workers_count, 3);
    Dvar_ClearModified(r_smp_workers_count);
    v0 = r_smp_workers_count;
  }
  unsignedInt = v0->current.unsignedInt;
  for ( i = 0; i < unsignedInt; ++i )
  {
    Sys_ResumeThread((ThreadContext)(i + 2));
    ++s_workerThreadCount;
  }
}

/*
==============
Sys_TryAddWorkerCmd
==============
*/
char Sys_TryAddWorkerCmd(WorkerCmdType type, const void *const data)
{
  __int64 v3; 
  unsigned __int64 dataSize; 
  int bufSize; 
  int bufCount; 
  volatile int *p_inSize; 
  volatile int *p_endPos; 
  signed __int32 v9; 
  __int64 v10; 
  volatile int *p_outSize; 
  __int64 v13; 

  v3 = type;
  dataSize = s_workerCmds[v3].dataSize;
  if ( !(_DWORD)dataSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\sys_workercmds.cpp", 1434, ASSERT_TYPE_ASSERT, "(dataSize)", (const char *)&queryFormat, "dataSize") )
    __debugbreak();
  bufSize = s_workerCmds[v3].bufSize;
  bufCount = s_workerCmds[v3].bufCount;
  if ( bufSize % (unsigned int)dataSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\sys_workercmds.cpp", 1438, ASSERT_TYPE_ASSERT, "(!(bufSize % dataSize ))", (const char *)&queryFormat, "!(bufSize % dataSize )") )
    __debugbreak();
  p_inSize = &s_workerCmds[v3].inSize;
  if ( ((unsigned __int8)p_inSize & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)p_inSize) )
    __debugbreak();
  if ( _InterlockedExchangeAdd(p_inSize, 1u) >= bufCount )
  {
    if ( ((unsigned __int8)p_inSize & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)p_inSize) )
      __debugbreak();
    _InterlockedExchangeAdd(p_inSize, 0xFFFFFFFF);
    if ( type == WRKCMD_DRAW_LIT_OPAQUE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\sys_workercmds.cpp", 1495, ASSERT_TYPE_ASSERT, "(type != WRKCMD_DRAW_LIT_OPAQUE)", (const char *)&queryFormat, "type != WRKCMD_DRAW_LIT_OPAQUE") )
      __debugbreak();
    return 0;
  }
  else
  {
    p_endPos = &s_workerCmds[v3].endPos;
    if ( ((unsigned __int8)p_endPos & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &s_workerCmds[v3].endPos) )
      __debugbreak();
    v9 = _InterlockedExchangeAdd(p_endPos, dataSize) % bufSize;
    v10 = v9;
    if ( v9 < 0 || v9 >= bufSize )
    {
      LODWORD(v13) = v9;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\sys_workercmds.cpp", 1459, ASSERT_TYPE_ASSERT, "( ( endPos >= 0 && endPos < bufSize ) )", "( endPos ) = %i", v13) )
        __debugbreak();
    }
    if ( (unsigned int)v10 % (unsigned int)dataSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\sys_workercmds.cpp", 1460, ASSERT_TYPE_ASSERT, "(endPos % dataSize == 0)", (const char *)&queryFormat, "endPos % dataSize == 0") )
      __debugbreak();
    if ( !(_DWORD)v10 )
      Sys_InterlockedExchangeAdd(&s_workerCmds[v3].endPos, -bufSize);
    s_workerCmds[v3].bufHash[(unsigned int)v10 / (unsigned int)dataSize] = j_CoD_XXH64(data, dataSize, 0i64);
    memcpy_0(&s_workerCmds[v3].buf[v10], data, dataSize);
    Sys_WaitInterlockedCompareExchange(&s_workerCmds[v3].syncedEndPos, ((int)v10 + (int)dataSize) % (unsigned int)bufSize, v10);
    p_outSize = &s_workerCmds[v3].outSize;
    if ( ((unsigned __int8)p_outSize & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &s_workerCmds[v3].outSize) )
      __debugbreak();
    _InterlockedExchangeAdd(p_outSize, 1u);
    Sys_NotifyWorkerCmdType(type);
    return 1;
  }
}

/*
==============
Sys_UpdateActiveWorkerThreads
==============
*/
void Sys_UpdateActiveWorkerThreads(void)
{
  const dvar_t ***v0; 
  const dvar_t **v1; 
  const dvar_t **v2; 
  unsigned int v3; 
  const dvar_t *v4; 
  unsigned int unsignedInt; 
  ThreadContext v6; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\sys_workercmds.cpp", 1615, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  v0 = s_workerThreadsDvars;
  while ( 1 )
  {
    v1 = *v0;
    if ( !*v0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\sys_workercmds.cpp", 1599, ASSERT_TYPE_ASSERT, "(dvar)", (const char *)&queryFormat, "dvar") )
      __debugbreak();
    if ( (*v1)->modified )
      break;
    if ( ++v0 == (const dvar_t ***)&unk_147ED50D8 )
      return;
  }
  Com_SyncThreads();
  v2 = s_workerThreadsDvars[0];
  v3 = 0;
  s_workerThreadCount = 0;
  if ( !s_workerThreadsDvars[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\sys_workercmds.cpp", 1629, ASSERT_TYPE_ASSERT, "(dvar)", (const char *)&queryFormat, "dvar") )
    __debugbreak();
  Dvar_ClearModified(*v2);
  v4 = r_smp_workers_count;
  if ( r_smp_workers_count->current.integer < 0 )
  {
    Dvar_SetInt_Internal(r_smp_workers_count, 3);
    Dvar_ClearModified(r_smp_workers_count);
    v4 = r_smp_workers_count;
  }
  unsignedInt = v4->current.unsignedInt;
  do
  {
    v6 = v3 + 2;
    if ( v3 >= unsignedInt )
    {
      Sys_SuspendThread(v6);
    }
    else
    {
      Sys_ResumeThread(v6);
      ++s_workerThreadCount;
    }
    ++v3;
  }
  while ( v3 < 3 );
  R_ReleaseThreadOwnership();
}

/*
==============
Sys_WaitFrontendWorkerCmds
==============
*/
void Sys_WaitFrontendWorkerCmds(void)
{
  const dvar_t *v0; 
  WaitBroadcastState *p_state; 
  int timeoutUserData[2]; 
  __int64 v3; 
  int v4; 
  __int16 v5; 
  int v6[2]; 
  WaitBroadcastState state; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\sys_workercmds.cpp", 1776, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFF404040, "wait frontend cmds");
  Profile2_UpdateEntry(36);
  if ( ((unsigned __int8)&dword_14FDE8060 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE8060) )
    __debugbreak();
  _InterlockedIncrement(&dword_14FDE8060);
  v0 = DVARBOOL_r_frontendWaitWorkerCmdsOnlyOfType;
  if ( !DVARBOOL_r_frontendWaitWorkerCmdsOnlyOfType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_frontendWaitWorkerCmdsOnlyOfType") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  if ( v0->current.enabled )
  {
    v3 = -1i64;
    v4 = -1;
    v5 = 0;
    timeoutUserData[0] = 18;
    timeoutUserData[1] = 91;
    Sys_ProcessWorkerCmdsWithTimeoutAndFilter((bool (__fastcall *)(void *))Sys_FinishedWorkerCmdsRange, timeoutUserData, 1);
    p_state = (WaitBroadcastState *)&v3;
  }
  else
  {
    *(_QWORD *)&state.prevCurrentThreadWaitType = -1i64;
    state.waitThreadIdx = -1;
    *(_WORD *)&state.broadcastWaitType = 0;
    v6[0] = 18;
    v6[1] = 91;
    Sys_ProcessWorkerCmdsWithTimeoutAndFilter((bool (__fastcall *)(void *))Sys_FinishedWorkerCmdsRange, v6, 0);
    p_state = &state;
  }
  Sys_BroadcastPrimaryThreadWaitTypeEnd(p_state);
  Profile2_UpdateEntry(36);
  if ( ((unsigned __int64)&dword_14FDE8060 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE8060) )
    __debugbreak();
  _InterlockedDecrement(&dword_14FDE8060);
  Sys_ProfEndNamedEvent();
}

/*
==============
Sys_WaitStreamFrontendUpdateWorkerCmds
==============
*/
void Sys_WaitStreamFrontendUpdateWorkerCmds(void)
{
  int timeoutUserData[2]; 
  WaitBroadcastState state; 

  *(_QWORD *)&state.prevCurrentThreadWaitType = -1i64;
  state.waitThreadIdx = -1;
  *(_WORD *)&state.broadcastWaitType = 0;
  timeoutUserData[0] = 95;
  timeoutUserData[1] = 103;
  Sys_ProcessWorkerCmdsWithTimeoutAndFilter((bool (__fastcall *)(void *))Sys_FinishedWorkerCmdsRange, timeoutUserData, 0);
  Sys_BroadcastPrimaryThreadWaitTypeEnd(&state);
}

/*
==============
Sys_WaitWorkerCmds
==============
*/
void Sys_WaitWorkerCmds(void)
{
  int timeoutUserData[2]; 
  WaitBroadcastState state; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\sys_workercmds.cpp", 1813, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  *(_QWORD *)&state.prevCurrentThreadWaitType = -1i64;
  state.waitThreadIdx = -1;
  *(_WORD *)&state.broadcastWaitType = 0;
  timeoutUserData[0] = 0;
  timeoutUserData[1] = 158;
  Sys_ProcessWorkerCmdsWithTimeoutAndFilter((bool (__fastcall *)(void *))Sys_FinishedWorkerCmdsRange, timeoutUserData, 0);
  Sys_BroadcastPrimaryThreadWaitTypeEnd(&state);
}

/*
==============
Sys_WaitWorkerCmdsOfType
==============
*/
void Sys_WaitWorkerCmdsOfType(WorkerCmdType type)
{
  Sys_WaitWorkerCmdsOfTypeInternal(type, 0);
}

/*
==============
Sys_WaitWorkerCmdsOfTypeInternal
==============
*/
void Sys_WaitWorkerCmdsOfTypeInternal(WorkerCmdType type, bool onlyOfType)
{
  const char *v3; 
  signed __int32 v4[8]; 
  WaitBroadcastState state; 
  WorkerCmdType typea; 

  typea = type;
  if ( s_workerCmds[type].inSize <= 0 )
  {
    _InterlockedOr(v4, 0);
  }
  else
  {
    *(_QWORD *)&state.prevCurrentThreadWaitType = -1i64;
    state.waitThreadIdx = -1;
    *(_WORD *)&state.broadcastWaitType = 0;
    Sys_BroadcastPrimaryThreadWaitTypeBegin(&state, typea);
    v3 = j_va("wait %s", s_workerCmds[typea].name);
    Sys_ProfBeginNamedEvent(0xFF404040, v3);
    Sys_ProcessWorkerCmdsWithTimeoutAndFilter(Sys_WorkerCmdsFinished, &typea, onlyOfType);
    Sys_ProfEndNamedEvent();
    Sys_BroadcastPrimaryThreadWaitTypeEnd(&state);
  }
}

/*
==============
Sys_WaitWorkerCmdsOnlyOfType
==============
*/
void Sys_WaitWorkerCmdsOnlyOfType(WorkerCmdType type)
{
  Sys_WaitWorkerCmdsOfTypeInternal(type, 1);
}

/*
==============
Sys_WorkerCmdsAvailable
==============
*/
bool Sys_WorkerCmdsAvailable(WorkerCmdType type)
{
  return s_workerCmds[type].outSize > 0;
}

/*
==============
Sys_WorkerCmdsFinished
==============
*/
_BOOL8 Sys_WorkerCmdsFinished(void *data)
{
  __int64 v1; 
  __int64 v2; 
  volatile int inSize; 
  bool v4; 

  v1 = *(int *)data;
  if ( (_DWORD)v1 != *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 988i64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\sys_workercmds.cpp", 846, ASSERT_TYPE_ASSERT, "(type == s_currentThreadWaitType)", (const char *)&queryFormat, "type == s_currentThreadWaitType") )
    __debugbreak();
  v2 = v1;
  inSize = s_workerCmds[v1].inSize;
  v4 = inSize <= 0;
  if ( inSize > 0 && (s_workerCmds[v2].flags & 0x1C) != 0 )
    Sys_SetWorkerCmdEvent();
  return v4;
}

/*
==============
Sys_WorkerCmdsPending
==============
*/
bool Sys_WorkerCmdsPending(WorkerCmdType type)
{
  return s_workerCmds[type].inSize > 0;
}

/*
==============
Sys_WorkerCmds_UpdateClientFrame
==============
*/
void Sys_WorkerCmds_UpdateClientFrame(void)
{
  const PartyData *PartyData; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\sys_workercmds.cpp", 555, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( Com_IsAnyLocalServerRunning() )
  {
    s_useServerThreadAsFullWorkerThread = 0;
  }
  else
  {
    PartyData = Lobby_GetPartyData();
    if ( Party_IsRunning(PartyData) )
      s_useServerThreadAsFullWorkerThread = Party_IsHostDedicated(PartyData);
    else
      s_useServerThreadAsFullWorkerThread = 0;
  }
}

/*
==============
Sys_WorkerThread
==============
*/
void __noreturn Sys_WorkerThread(unsigned int threadContext)
{
  int *v1; 
  __int64 v2; 
  int v3; 
  _DWORD *v4; 
  unsigned int WorkerThreadId; 
  __int64 v6; 
  _JBTYPE *Value; 

  Value = (_JBTYPE *)Sys_GetValue(2);
  if ( setjmp(Value) )
    Com_ErrorAbort();
  v1 = (int *)Sys_GetValue(0);
  v2 = v1[8914];
  if ( (_DWORD)v2 && *(_QWORD *)&v1[4 * v2 + 8784] > *((_QWORD *)v1 + 261) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 189, ASSERT_TYPE_ASSERT, "(prof_stack->prof_guardpos == 0 || prof_stack->prof_guardstack[prof_stack->prof_guardpos - 1].ppStack <= prof_stack->prof_ppStack)", (const char *)&queryFormat, "prof_stack->prof_guardpos == 0 || prof_stack->prof_guardstack[prof_stack->prof_guardpos - 1].ppStack <= prof_stack->prof_ppStack") )
    __debugbreak();
  if ( (unsigned int)v1[8914] >= 0x20 )
  {
    LODWORD(v6) = v1[8914];
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 190, ASSERT_TYPE_ASSERT, "(unsigned)( prof_stack->prof_guardpos ) < (unsigned)( ( sizeof( *array_counter( prof_stack->prof_guardstack ) ) + 0 ) )", "prof_stack->prof_guardpos doesn't index ARRAY_COUNT( prof_stack->prof_guardstack )\n\t%i not in [0, %i)", v6, 32) )
      __debugbreak();
  }
  v3 = 0;
  if ( v1[8914] > 0 )
  {
    v4 = v1 + 8786;
    do
    {
      if ( *v4 == 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 195, ASSERT_TYPE_ASSERT, "(prof_stack->prof_guardstack[i].id != id)", (const char *)&queryFormat, "prof_stack->prof_guardstack[i].id != id") )
        __debugbreak();
      ++v3;
      v4 += 4;
    }
    while ( v3 < v1[8914] );
  }
  if ( *((_QWORD *)v1 + 261) < (unsigned __int64)(v1 + 10) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 199, ASSERT_TYPE_ASSERT, "(prof_stack->prof_ppStack >= prof_stack->prof_pStack)", (const char *)&queryFormat, "prof_stack->prof_ppStack >= prof_stack->prof_pStack") )
    __debugbreak();
  v1[4 * v1[8914] + 8786] = 1;
  *(_QWORD *)&v1[4 * v1[8914]++ + 8788] = *((_QWORD *)v1 + 261);
  WorkerThreadId = Physics_GetWorkerThreadId(threadContext);
  Physics_OnThreadInit(WorkerThreadId);
  while ( 1 )
  {
    if ( threadContext == 2 )
      Sys_UnblockDatabaseThread();
    if ( ((unsigned __int8)&s_workerCmdWaitCount & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)&s_workerCmdWaitCount) )
      __debugbreak();
    _InterlockedIncrement(&s_workerCmdWaitCount);
    Sys_ProfBeginNamedEvent(0xFF000080, "wait cmd");
    Sys_WaitForWorkerCmd();
    Sys_ProfEndNamedEvent();
    if ( ((unsigned __int8)&s_workerCmdWaitCount & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)&s_workerCmdWaitCount) )
      __debugbreak();
    _InterlockedDecrement(&s_workerCmdWaitCount);
    if ( threadContext == 2 )
      Sys_BlockDatabaseThread();
    Sys_ProcessWorkerCmds(threadContext);
  }
}

