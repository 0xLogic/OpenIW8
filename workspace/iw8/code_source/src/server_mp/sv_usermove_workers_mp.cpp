/*
==============
SV_UserMoveWorkersMP_IsClientThinkWorkPending
==============
*/

bool __fastcall SV_UserMoveWorkersMP_IsClientThinkWorkPending()
{
  return ?SV_UserMoveWorkersMP_IsClientThinkWorkPending@@YA_NXZ();
}

/*
==============
SV_UserMoveWorkersMP_AreWorkersEnabled
==============
*/

bool __fastcall SV_UserMoveWorkersMP_AreWorkersEnabled()
{
  return ?SV_UserMoveWorkersMP_AreWorkersEnabled@@YA_NXZ();
}

/*
==============
SV_UserMoveWorkersMP_GetMemorySize
==============
*/

unsigned int __fastcall SV_UserMoveWorkersMP_GetMemorySize(const unsigned int clientCount)
{
  return ?SV_UserMoveWorkersMP_GetMemorySize@@YAII@Z(clientCount);
}

/*
==============
SV_UserMoveWorkersMP_ShutdownMemory
==============
*/

void SV_UserMoveWorkersMP_ShutdownMemory(void)
{
  ?SV_UserMoveWorkersMP_ShutdownMemory@@YAXXZ();
}

/*
==============
SV_UserMoveWorkersMP_CheckNoWorkInProgress
==============
*/

void SV_UserMoveWorkersMP_CheckNoWorkInProgress(void)
{
  ?SV_UserMoveWorkersMP_CheckNoWorkInProgress@@YAXXZ();
}

/*
==============
SV_UserMoveWorkersMP_AllocateMemory
==============
*/

void __fastcall SV_UserMoveWorkersMP_AllocateMemory(HunkUser *hunkUser, const unsigned int clientCount)
{
  ?SV_UserMoveWorkersMP_AllocateMemory@@YAXPEAUHunkUser@@I@Z(hunkUser, clientCount);
}

/*
==============
SV_UserMoveWorkersMP_ExecuteClientThinkCmd
==============
*/

void __fastcall SV_UserMoveWorkersMP_ExecuteClientThinkCmd(const void *const cmdInfo)
{
  ?SV_UserMoveWorkersMP_ExecuteClientThinkCmd@@YAXQEBX@Z(cmdInfo);
}

/*
==============
SV_UserMoveWorkersMP_TryQueueClientThinkCmd
==============
*/

bool __fastcall SV_UserMoveWorkersMP_TryQueueClientThinkCmd(const unsigned int clientNum, const usercmd_s *cmd)
{
  return ?SV_UserMoveWorkersMP_TryQueueClientThinkCmd@@YA_NIAEBUusercmd_s@@@Z(clientNum, cmd);
}

/*
==============
SV_UserMoveWorkersMP_FinishClientThinkCmds
==============
*/

void SV_UserMoveWorkersMP_FinishClientThinkCmds(void)
{
  ?SV_UserMoveWorkersMP_FinishClientThinkCmds@@YAXXZ();
}

/*
==============
SV_UserMoveWorkersMP_Init
==============
*/

void SV_UserMoveWorkersMP_Init(void)
{
  ?SV_UserMoveWorkersMP_Init@@YAXXZ();
}

/*
==============
SV_UserMoveWorkersMP_ExecuteClientExtrapCmd
==============
*/

void __fastcall SV_UserMoveWorkersMP_ExecuteClientExtrapCmd(const void *const cmdInfo)
{
  ?SV_UserMoveWorkersMP_ExecuteClientExtrapCmd@@YAXQEBX@Z(cmdInfo);
}

/*
==============
SV_UserMoveWorkersMP_TryStartClientExtrapCmd
==============
*/

bool __fastcall SV_UserMoveWorkersMP_TryStartClientExtrapCmd(const unsigned int clientNum)
{
  return ?SV_UserMoveWorkersMP_TryStartClientExtrapCmd@@YA_NI@Z(clientNum);
}

/*
==============
SV_UserMoveWorkersMP_Shutdown
==============
*/

void SV_UserMoveWorkersMP_Shutdown(void)
{
  ?SV_UserMoveWorkersMP_Shutdown@@YAXXZ();
}

/*
==============
SV_UserMoveWorkersMP_IsInWorkerContext
==============
*/

bool __fastcall SV_UserMoveWorkersMP_IsInWorkerContext()
{
  return ?SV_UserMoveWorkersMP_IsInWorkerContext@@YA_NXZ();
}

/*
==============
SV_UserMoveWorkersMP_AllocateMemory
==============
*/
void SV_UserMoveWorkersMP_AllocateMemory(HunkUser *hunkUser, const unsigned int clientCount)
{
  unsigned int v4; 

  if ( s_userMoveWorkersMp_data.userCmdThinkCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_usermove_workers_mp.cpp", 98, ASSERT_TYPE_ASSERT, "( s_userMoveWorkersMp_data.userCmdThinkCount == 0 )", (const char *)&queryFormat, "s_userMoveWorkersMp_data.userCmdThinkCount == 0") )
    __debugbreak();
  if ( s_userMoveWorkersMp_data.userCmdThinkQueue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_usermove_workers_mp.cpp", 99, ASSERT_TYPE_ASSERT, "( s_userMoveWorkersMp_data.userCmdThinkQueue == nullptr )", (const char *)&queryFormat, "s_userMoveWorkersMp_data.userCmdThinkQueue == nullptr") )
    __debugbreak();
  s_userMoveWorkersMp_data.userCmdThinkCount = clientCount;
  v4 = 1600 * clientCount;
  s_userMoveWorkersMp_data.userCmdThinkQueue = (SvUserMoveWorkersThinkQueue *)Mem_HunkUser_AllocInternal(hunkUser, v4, 0x80ui64, "SV_UserMoveWorkersMP_AllocateMemory");
  memset_0(s_userMoveWorkersMp_data.userCmdThinkQueue, 0, v4);
}

/*
==============
SV_UserMoveWorkersMP_AreWorkersEnabled
==============
*/
_BOOL8 SV_UserMoveWorkersMP_AreWorkersEnabled()
{
  return s_userMoveWorkersMp_data.workersEnabled;
}

/*
==============
SV_UserMoveWorkersMP_CheckNoWorkInProgress
==============
*/
void SV_UserMoveWorkersMP_CheckNoWorkInProgress(void)
{
  if ( s_userMoveWorkersMp_data.workInProgress && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_usermove_workers_mp.cpp", 389, ASSERT_TYPE_ASSERT, "(!s_userMoveWorkersMp_data.workInProgress)", "%s\n\tUsermove Workers were not properly guarded", "!s_userMoveWorkersMp_data.workInProgress") )
    __debugbreak();
}

/*
==============
SV_UserMoveWorkersMP_ExecuteClientExtrapCmd
==============
*/
void SV_UserMoveWorkersMP_ExecuteClientExtrapCmd(const void *const cmdInfo)
{
  __int64 v2; 
  BgStatic *v3; 
  ThreadContext CurrentThreadContext; 
  __int64 v5; 
  unsigned int *v6; 
  __int64 v7; 
  __int64 v8; 

  SV_Timing_StartWorkerContext();
  v2 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index);
  v3 = *(BgStatic **)(v2 + 272);
  *(_QWORD *)(v2 + 272) = 0i64;
  CurrentThreadContext = Sys_GetCurrentThreadContext();
  v5 = (unsigned int)CurrentThreadContext;
  if ( (unsigned int)CurrentThreadContext >= THREAD_CONTEXT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_usermove_workers_mp.cpp", 59, ASSERT_TYPE_ASSERT, "(unsigned)( threadIndex ) < (unsigned)( THREAD_CONTEXT_COUNT )", "threadIndex doesn't index THREAD_CONTEXT_COUNT\n\t%i not in [0, %i)", CurrentThreadContext, 28) )
    __debugbreak();
  v6 = &s_userMoveWorkersMp_data.inWorkerContext.m_workerActive[v5];
  if ( *v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_usermove_workers_mp.cpp", 429, ASSERT_TYPE_ASSERT, "( !s_userMoveWorkersMp_data.inWorkerContext.Test( context ) )", (const char *)&queryFormat, "!s_userMoveWorkersMp_data.inWorkerContext.Test( context )") )
    __debugbreak();
  if ( (unsigned int)v5 >= 0x1C )
  {
    LODWORD(v8) = 28;
    LODWORD(v7) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_usermove_workers_mp.cpp", 47, ASSERT_TYPE_ASSERT, "(unsigned)( threadIndex ) < (unsigned)( THREAD_CONTEXT_COUNT )", "threadIndex doesn't index THREAD_CONTEXT_COUNT\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  *v6 = 1;
  SV_ClientMP_Extrapolate(*(_DWORD *)cmdInfo);
  if ( (unsigned int)v5 >= 0x1C )
  {
    LODWORD(v8) = 28;
    LODWORD(v7) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_usermove_workers_mp.cpp", 53, ASSERT_TYPE_ASSERT, "(unsigned)( threadIndex ) < (unsigned)( THREAD_CONTEXT_COUNT )", "threadIndex doesn't index THREAD_CONTEXT_COUNT\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  *v6 = 0;
  BgStatic::RestoreActiveStatics(v3);
  SV_Timing_EndWorkerContext();
}

/*
==============
SV_UserMoveWorkersMP_ExecuteClientThinkCmd
==============
*/
void SV_UserMoveWorkersMP_ExecuteClientThinkCmd(const void *const cmdInfo)
{
  __int64 v2; 
  __int64 v4; 
  SvUserMoveWorkersThinkQueue *v5; 
  ThreadContext CurrentThreadContext; 
  __int64 v16; 
  unsigned int *v17; 
  bool v18; 
  _QWORD *v19; 
  __int64 v20; 
  unsigned int v21; 
  __int64 v22; 
  BgStatic *v23; 
  SvClientMP *CommonClient; 
  __int64 v25; 
  volatile int *p_pendingCount; 
  int v27; 
  __int64 v28; 
  __int64 v29; 
  int data[4]; 
  usercmd_s cmd; 

  if ( !cmdInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_usermove_workers_mp.cpp", 326, ASSERT_TYPE_ASSERT, "( cmdInfo )", (const char *)&queryFormat, "cmdInfo") )
    __debugbreak();
  if ( !s_userMoveWorkersMp_data.workersEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_usermove_workers_mp.cpp", 327, ASSERT_TYPE_ASSERT, "( SV_UserMoveWorkersMP_AreWorkersEnabled() )", (const char *)&queryFormat, "SV_UserMoveWorkersMP_AreWorkersEnabled()") )
    __debugbreak();
  SV_Timing_StartWorkerContext();
  v2 = *(unsigned int *)cmdInfo;
  if ( (unsigned int)v2 >= s_userMoveWorkersMp_data.userCmdThinkCount )
  {
    LODWORD(v28) = *(_DWORD *)cmdInfo;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_usermove_workers_mp.cpp", 122, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( s_userMoveWorkersMp_data.userCmdThinkCount )", "clientNum doesn't index s_userMoveWorkersMp_data.userCmdThinkCount\n\t%i not in [0, %i)", v28, s_userMoveWorkersMp_data.userCmdThinkCount) )
      __debugbreak();
  }
  _RCX = &cmd;
  v4 = 2i64;
  v5 = &s_userMoveWorkersMp_data.userCmdThinkQueue[v2];
  _RAX = &v5->cmds[v5->readIndex];
  do
  {
    _RCX = (usercmd_s *)((char *)_RCX + 128);
    __asm { vmovups xmm0, xmmword ptr [rax] }
    _RAX = (usercmd_s *)((char *)_RAX + 128);
    __asm
    {
      vmovups xmmword ptr [rcx-80h], xmm0
      vmovups xmm1, xmmword ptr [rax-70h]
      vmovups xmmword ptr [rcx-70h], xmm1
      vmovups xmm0, xmmword ptr [rax-60h]
      vmovups xmmword ptr [rcx-60h], xmm0
      vmovups xmm1, xmmword ptr [rax-50h]
      vmovups xmmword ptr [rcx-50h], xmm1
      vmovups xmm0, xmmword ptr [rax-40h]
      vmovups xmmword ptr [rcx-40h], xmm0
      vmovups xmm1, xmmword ptr [rax-30h]
      vmovups xmmword ptr [rcx-30h], xmm1
      vmovups xmm0, xmmword ptr [rax-20h]
      vmovups xmmword ptr [rcx-20h], xmm0
      vmovups xmm1, xmmword ptr [rax-10h]
      vmovups xmmword ptr [rcx-10h], xmm1
    }
    --v4;
  }
  while ( v4 );
  _RCX->buttons = _RAX->buttons;
  CurrentThreadContext = Sys_GetCurrentThreadContext();
  v16 = (unsigned int)CurrentThreadContext;
  if ( (unsigned int)CurrentThreadContext >= THREAD_CONTEXT_COUNT )
  {
    LODWORD(v29) = 28;
    LODWORD(v28) = CurrentThreadContext;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_usermove_workers_mp.cpp", 59, ASSERT_TYPE_ASSERT, "(unsigned)( threadIndex ) < (unsigned)( THREAD_CONTEXT_COUNT )", "threadIndex doesn't index THREAD_CONTEXT_COUNT\n\t%i not in [0, %i)", v28, v29) )
      __debugbreak();
  }
  v17 = &s_userMoveWorkersMp_data.inWorkerContext.m_workerActive[v16];
  if ( *v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_usermove_workers_mp.cpp", 340, ASSERT_TYPE_ASSERT, "( !s_userMoveWorkersMp_data.inWorkerContext.Test( context ) )", (const char *)&queryFormat, "!s_userMoveWorkersMp_data.inWorkerContext.Test( context )") )
    __debugbreak();
  if ( (unsigned int)v16 >= 0x1C )
  {
    LODWORD(v29) = 28;
    LODWORD(v28) = v16;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_usermove_workers_mp.cpp", 47, ASSERT_TYPE_ASSERT, "(unsigned)( threadIndex ) < (unsigned)( THREAD_CONTEXT_COUNT )", "threadIndex doesn't index THREAD_CONTEXT_COUNT\n\t%i not in [0, %i)", v28, v29) )
      __debugbreak();
  }
  v18 = (_BYTE)SvClient::ms_allocatedType == HALF_HALF;
  v19 = NtCurrentTeb()->Reserved1[11];
  v20 = tls_index;
  *v17 = 1;
  v21 = *(_DWORD *)cmdInfo;
  v22 = v19[v20];
  v23 = *(BgStatic **)(v22 + 272);
  *(_QWORD *)(v22 + 272) = 0i64;
  if ( !v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
    __debugbreak();
  CommonClient = (SvClientMP *)SvClient::GetCommonClient(v21);
  SV_ClientMP_ThinkInternal(CommonClient, &cmd);
  BgStatic::RestoreActiveStatics(v23);
  if ( (unsigned int)v16 >= 0x1C )
  {
    LODWORD(v29) = 28;
    LODWORD(v28) = v16;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_usermove_workers_mp.cpp", 53, ASSERT_TYPE_ASSERT, "(unsigned)( threadIndex ) < (unsigned)( THREAD_CONTEXT_COUNT )", "threadIndex doesn't index THREAD_CONTEXT_COUNT\n\t%i not in [0, %i)", v28, v29) )
      __debugbreak();
  }
  *v17 = 0;
  v5->readIndex = (v5->readIndex + 1) % 6;
  v25 = *(unsigned int *)cmdInfo;
  if ( !Sys_IsServerUserMoveWorker() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_usermove_workers_mp.cpp", 221, ASSERT_TYPE_ASSERT, "( Sys_IsServerUserMoveWorker() )", (const char *)&queryFormat, "Sys_IsServerUserMoveWorker()") )
    __debugbreak();
  if ( (unsigned int)v25 >= s_userMoveWorkersMp_data.userCmdThinkCount )
  {
    LODWORD(v29) = s_userMoveWorkersMp_data.userCmdThinkCount;
    LODWORD(v28) = v25;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_usermove_workers_mp.cpp", 122, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( s_userMoveWorkersMp_data.userCmdThinkCount )", "clientNum doesn't index s_userMoveWorkersMp_data.userCmdThinkCount\n\t%i not in [0, %i)", v28, v29) )
      __debugbreak();
  }
  p_pendingCount = &s_userMoveWorkersMp_data.userCmdThinkQueue[v25].pendingCount;
  if ( ((unsigned __int8)p_pendingCount & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)&s_userMoveWorkersMp_data.userCmdThinkQueue[v25].pendingCount) )
    __debugbreak();
  v27 = _InterlockedDecrement(p_pendingCount);
  if ( v27 < 0 || (unsigned int)v27 > 5 )
  {
    LODWORD(v28) = v27;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_usermove_workers_mp.cpp", 229, ASSERT_TYPE_ASSERT, "( 0 ) <= ( pendingCount ) && ( pendingCount ) <= ( SV_USERMOVE_WORKERS_MAX_THINK_PER_FRAME - 1 )", "pendingCount not in [0, SV_USERMOVE_WORKERS_MAX_THINK_PER_FRAME - 1]\n\t%i not in [%i, %i]", v28, 0i64, 5) )
      __debugbreak();
  }
  if ( v27 > 0 )
  {
    data[0] = v25;
    Sys_AddWorkerCmd(WRKCMD_SV_CLIENT_THINK, data);
  }
  SV_Timing_EndWorkerContext();
}

/*
==============
SV_UserMoveWorkersMP_FinishClientThinkCmds
==============
*/
void SV_UserMoveWorkersMP_FinishClientThinkCmds(void)
{
  Sys_WaitWorkerCmdsOnlyOfType(WRKCMD_SV_CLIENT_THINK);
  Sys_WaitWorkerCmdsOnlyOfType(WRKCMD_SV_CLIENT_EXTRAP);
  G_Main_UserMoveWorkerFinish();
  s_userMoveWorkersMp_data.workInProgress = 0;
  SV_UserMoveWorkersMP_UpdateWorkersEnabledState();
}

/*
==============
SV_UserMoveWorkersMP_GetCmdQueue
==============
*/
SvUserMoveWorkersThinkQueue *SV_UserMoveWorkersMP_GetCmdQueue(const unsigned int clientNum)
{
  __int64 v1; 
  unsigned int userCmdThinkCount; 

  v1 = clientNum;
  if ( clientNum >= s_userMoveWorkersMp_data.userCmdThinkCount )
  {
    userCmdThinkCount = s_userMoveWorkersMp_data.userCmdThinkCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_usermove_workers_mp.cpp", 122, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( s_userMoveWorkersMp_data.userCmdThinkCount )", "clientNum doesn't index s_userMoveWorkersMp_data.userCmdThinkCount\n\t%i not in [0, %i)", clientNum, userCmdThinkCount) )
      __debugbreak();
  }
  return &s_userMoveWorkersMp_data.userCmdThinkQueue[v1];
}

/*
==============
SV_UserMoveWorkersMP_GetMemorySize
==============
*/
__int64 SV_UserMoveWorkersMP_GetMemorySize(const unsigned int clientCount)
{
  return (1600 * clientCount + 127) & 0xFFFFFF80;
}

/*
==============
SV_UserMoveWorkersMP_Init
==============
*/
void SV_UserMoveWorkersMP_Init(void)
{
  if ( !s_userMoveWorkersMp_data.userCmdThinkQueue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_usermove_workers_mp.cpp", 154, ASSERT_TYPE_ASSERT, "( s_userMoveWorkersMp_data.userCmdThinkQueue != nullptr )", (const char *)&queryFormat, "s_userMoveWorkersMp_data.userCmdThinkQueue != nullptr") )
    __debugbreak();
  s_userMoveWorkersMp_data.workInProgress = 0;
  memset_0(&s_userMoveWorkersMp_data.inWorkerContext, 0, sizeof(s_userMoveWorkersMp_data.inWorkerContext));
  SV_UserMoveWorkersMP_UpdateWorkersEnabledState();
}

/*
==============
SV_UserMoveWorkersMP_IsClientThinkWorkPending
==============
*/
bool SV_UserMoveWorkersMP_IsClientThinkWorkPending()
{
  return Sys_ExistsWorkerCmdsOfType(WRKCMD_SV_CLIENT_THINK);
}

/*
==============
SV_UserMoveWorkersMP_IsInWorkerContext
==============
*/
char SV_UserMoveWorkersMP_IsInWorkerContext()
{
  ThreadContext CurrentThreadContext; 
  __int64 v1; 

  CurrentThreadContext = Sys_GetCurrentThreadContext();
  v1 = (unsigned int)CurrentThreadContext;
  if ( (unsigned int)CurrentThreadContext >= THREAD_CONTEXT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_usermove_workers_mp.cpp", 59, ASSERT_TYPE_ASSERT, "(unsigned)( threadIndex ) < (unsigned)( THREAD_CONTEXT_COUNT )", "threadIndex doesn't index THREAD_CONTEXT_COUNT\n\t%i not in [0, %i)", CurrentThreadContext, 28) )
    __debugbreak();
  if ( !s_userMoveWorkersMp_data.inWorkerContext.m_workerActive[v1] )
    return 0;
  if ( !s_userMoveWorkersMp_data.workersEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_usermove_workers_mp.cpp", 190, ASSERT_TYPE_ASSERT, "( SV_UserMoveWorkersMP_AreWorkersEnabled() )", (const char *)&queryFormat, "SV_UserMoveWorkersMP_AreWorkersEnabled()") )
    __debugbreak();
  return 1;
}

/*
==============
SV_UserMoveWorkersMP_Shutdown
==============
*/
void SV_UserMoveWorkersMP_Shutdown(void)
{
  if ( s_userMoveWorkersMp_data.workInProgress && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_usermove_workers_mp.cpp", 389, ASSERT_TYPE_ASSERT, "(!s_userMoveWorkersMp_data.workInProgress)", "%s\n\tUsermove Workers were not properly guarded", "!s_userMoveWorkersMp_data.workInProgress") )
    __debugbreak();
  memset_0(&s_userMoveWorkersMp_data.inWorkerContext, 0, sizeof(s_userMoveWorkersMp_data.inWorkerContext));
}

/*
==============
SV_UserMoveWorkersMP_ShutdownMemory
==============
*/
void SV_UserMoveWorkersMP_ShutdownMemory(void)
{
  if ( s_userMoveWorkersMp_data.workInProgress && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_usermove_workers_mp.cpp", 389, ASSERT_TYPE_ASSERT, "(!s_userMoveWorkersMp_data.workInProgress)", "%s\n\tUsermove Workers were not properly guarded", "!s_userMoveWorkersMp_data.workInProgress") )
    __debugbreak();
  s_userMoveWorkersMp_data.userCmdThinkCount = 0;
  s_userMoveWorkersMp_data.userCmdThinkQueue = NULL;
}

/*
==============
SV_UserMoveWorkersMP_TryQueueClientThinkCmd
==============
*/
char SV_UserMoveWorkersMP_TryQueueClientThinkCmd(const unsigned int clientNum, const usercmd_s *cmd)
{
  __int64 v3; 
  SvClientMP *CommonClient; 
  SvUserMoveWorkersThinkQueue *CmdQueue; 
  volatile int *p_pendingCount; 
  __int64 v8; 
  volatile int *v18; 
  int v19; 
  __int64 v20; 
  __int64 v21; 
  int data; 

  _RBX = cmd;
  v3 = clientNum;
  if ( !Sys_IsServerThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_usermove_workers_mp.cpp", 273, ASSERT_TYPE_ASSERT, "( Sys_IsServerThread() )", (const char *)&queryFormat, "Sys_IsServerThread()") )
    __debugbreak();
  if ( !s_userMoveWorkersMp_data.workersEnabled )
    return 0;
  s_userMoveWorkersMp_data.workInProgress = 1;
  G_Main_UserMoveWorkersBegin();
  if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
    __debugbreak();
  CommonClient = (SvClientMP *)SvClient::GetCommonClient(v3);
  if ( SV_ClientMP_PreThink(CommonClient, _RBX) )
  {
    CmdQueue = SV_UserMoveWorkersMP_GetCmdQueue(v3);
    p_pendingCount = &CmdQueue->pendingCount;
    while ( 1 )
    {
      if ( (((_BYTE)CmdQueue + 56) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 141, ASSERT_TYPE_ASSERT, "( ( IsAligned( addr, sizeof( volatile_int32 ) ) ) )", "( addr ) = %p", (const void *)p_pendingCount) )
        __debugbreak();
      if ( (unsigned __int64)*(int *)p_pendingCount < 6 )
        break;
      Sys_Sleep(1);
    }
    v8 = 2i64;
    _RDX = &CmdQueue->cmds[CmdQueue->writeIndex];
    do
    {
      _RDX = (usercmd_s *)((char *)_RDX + 128);
      __asm { vmovups xmm0, xmmword ptr [rbx] }
      _RBX = (const usercmd_s *)((char *)_RBX + 128);
      __asm
      {
        vmovups xmmword ptr [rdx-80h], xmm0
        vmovups xmm1, xmmword ptr [rbx-70h]
        vmovups xmmword ptr [rdx-70h], xmm1
        vmovups xmm0, xmmword ptr [rbx-60h]
        vmovups xmmword ptr [rdx-60h], xmm0
        vmovups xmm1, xmmword ptr [rbx-50h]
        vmovups xmmword ptr [rdx-50h], xmm1
        vmovups xmm0, xmmword ptr [rbx-40h]
        vmovups xmmword ptr [rdx-40h], xmm0
        vmovups xmm1, xmmword ptr [rbx-30h]
        vmovups xmmword ptr [rdx-30h], xmm1
        vmovups xmm0, xmmword ptr [rbx-20h]
        vmovups xmmword ptr [rdx-20h], xmm0
        vmovups xmm1, xmmword ptr [rbx-10h]
        vmovups xmmword ptr [rdx-10h], xmm1
      }
      --v8;
    }
    while ( v8 );
    _RDX->buttons = _RBX->buttons;
    CmdQueue->writeIndex = (CmdQueue->writeIndex + 1) % 6;
    if ( !Sys_IsServerThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_usermove_workers_mp.cpp", 200, ASSERT_TYPE_ASSERT, "( Sys_IsServerThread() )", (const char *)&queryFormat, "Sys_IsServerThread()") )
      __debugbreak();
    if ( (unsigned int)v3 >= s_userMoveWorkersMp_data.userCmdThinkCount )
    {
      LODWORD(v20) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_usermove_workers_mp.cpp", 122, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( s_userMoveWorkersMp_data.userCmdThinkCount )", "clientNum doesn't index s_userMoveWorkersMp_data.userCmdThinkCount\n\t%i not in [0, %i)", v20, s_userMoveWorkersMp_data.userCmdThinkCount) )
        __debugbreak();
    }
    v18 = &s_userMoveWorkersMp_data.userCmdThinkQueue[v3].pendingCount;
    if ( ((unsigned __int8)v18 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)&s_userMoveWorkersMp_data.userCmdThinkQueue[v3].pendingCount) )
      __debugbreak();
    v19 = _InterlockedIncrement(v18);
    if ( v19 < 1 || (unsigned int)v19 > 6 )
    {
      LODWORD(v21) = 1;
      LODWORD(v20) = v19;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_usermove_workers_mp.cpp", 208, ASSERT_TYPE_ASSERT, "( 1 ) <= ( pendingCount ) && ( pendingCount ) <= ( SV_USERMOVE_WORKERS_MAX_THINK_PER_FRAME )", "pendingCount not in [1, SV_USERMOVE_WORKERS_MAX_THINK_PER_FRAME]\n\t%i not in [%i, %i]", v20, v21, 6) )
        __debugbreak();
    }
    if ( v19 == 1 )
    {
      data = v3;
      Sys_AddWorkerCmd(WRKCMD_SV_CLIENT_THINK, &data);
    }
  }
  return 1;
}

/*
==============
SV_UserMoveWorkersMP_TryStartClientExtrapCmd
==============
*/
char SV_UserMoveWorkersMP_TryStartClientExtrapCmd(const unsigned int clientNum)
{
  unsigned int data; 

  if ( !s_userMoveWorkersMp_data.workersEnabled )
    return 0;
  data = clientNum;
  s_userMoveWorkersMp_data.workInProgress = 1;
  G_Main_UserMoveWorkersBegin();
  Sys_AddWorkerCmd(WRKCMD_SV_CLIENT_EXTRAP, &data);
  return 1;
}

/*
==============
SV_UserMoveWorkersMP_UpdateWorkersEnabledState
==============
*/
void SV_UserMoveWorkersMP_UpdateWorkersEnabledState()
{
  const dvar_t *v0; 
  const dvar_t *v1; 
  bool v2; 

  v0 = DCONST_DVARBOOL_sv_usermove_workers;
  if ( !DCONST_DVARBOOL_sv_usermove_workers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_usermove_workers") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  if ( !v0->current.enabled )
    goto LABEL_9;
  v1 = DCONST_DVARBOOL_deploy_debug;
  if ( !DCONST_DVARBOOL_deploy_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "deploy_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  v2 = !v1->current.enabled;
  s_userMoveWorkersMp_data.workersEnabled = 1;
  if ( !v2 )
LABEL_9:
    s_userMoveWorkersMp_data.workersEnabled = 0;
}

