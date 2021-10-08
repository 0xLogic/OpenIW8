/*
==============
SV_Profile_BeginFrame
==============
*/

void SV_Profile_BeginFrame(void)
{
  ?SV_Profile_BeginFrame@@YAXXZ();
}

/*
==============
SV_Profile_EndEvent
==============
*/

void __fastcall SV_Profile_EndEvent(const ServerProfileEvent event)
{
  ?SV_Profile_EndEvent@@YAXW4ServerProfileEvent@@@Z(event);
}

/*
==============
SV_Profile_Init
==============
*/

void __fastcall SV_Profile_Init(const bool isGameServer)
{
  ?SV_Profile_Init@@YAX_N@Z(isGameServer);
}

/*
==============
SV_Profile_Shutdown
==============
*/

void SV_Profile_Shutdown(void)
{
  ?SV_Profile_Shutdown@@YAXXZ();
}

/*
==============
SV_Profile_ResumeEvent
==============
*/

void __fastcall SV_Profile_ResumeEvent(const ServerProfileEvent event)
{
  ?SV_Profile_ResumeEvent@@YAXW4ServerProfileEvent@@@Z(event);
}

/*
==============
SV_Profile_ResumeFrame
==============
*/

void SV_Profile_ResumeFrame(void)
{
  ?SV_Profile_ResumeFrame@@YAXXZ();
}

/*
==============
SV_Profile_EndFrame
==============
*/

void SV_Profile_EndFrame(void)
{
  ?SV_Profile_EndFrame@@YAXXZ();
}

/*
==============
SV_Profile_PauseEvent
==============
*/

void __fastcall SV_Profile_PauseEvent(const ServerProfileEvent event)
{
  ?SV_Profile_PauseEvent@@YAXW4ServerProfileEvent@@@Z(event);
}

/*
==============
SV_Profile_PauseFrame
==============
*/

void SV_Profile_PauseFrame(void)
{
  ?SV_Profile_PauseFrame@@YAXXZ();
}

/*
==============
SV_Profile_GetDrawFrame
==============
*/

SvProfileDrawFrame *__fastcall SV_Profile_GetDrawFrame(SvProfileDrawFrame *result)
{
  return ?SV_Profile_GetDrawFrame@@YA?AUSvProfileDrawFrame@@XZ(result);
}

/*
==============
SV_Profile_BeginEvent
==============
*/

void __fastcall SV_Profile_BeginEvent(const ServerProfileEvent event)
{
  ?SV_Profile_BeginEvent@@YAXW4ServerProfileEvent@@@Z(event);
}

/*
==============
SV_Profile_BeginEvent
==============
*/
void SV_Profile_BeginEvent(const ServerProfileEvent event)
{
  SvProfEvent *v2; 
  unsigned int nestingCount; 
  unsigned __int64 v4; 

  v2 = SV_Profile_GetEvent(event);
  nestingCount = v2->nestingCount;
  if ( nestingCount )
  {
    v2->nestingCount = nestingCount + 1;
  }
  else
  {
    if ( v2->state )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_profile.cpp", 288, ASSERT_TYPE_ASSERT, "(eventData->state == SvProfEventState::SVPERF_STATE_INACTIVE)", "%s\n\tMismatching ServerPerf_Begin and ServerPerf_End. ServerPerf_Begin called without a corrosponding ServerPerf_End for server event %d", "eventData->state == SvProfEventState::SVPERF_STATE_INACTIVE", event) )
        __debugbreak();
    }
    v4 = Sys_Microseconds();
    ++v2->nestingCount;
    v2->startTime = v4;
    v2->state = SVPERF_STATE_ACTIVE;
  }
}

/*
==============
SV_Profile_BeginFrame
==============
*/
void SV_Profile_BeginFrame(void)
{
  ThreadContext CurrentThreadContext; 
  __int64 v1; 
  SvProfEvent *v2; 
  unsigned int nestingCount; 
  unsigned __int64 v4; 
  __int64 v5; 
  __int64 v6; 

  if ( !Sys_IsServerThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_profile.cpp", 146, ASSERT_TYPE_ASSERT, "( Sys_IsServerThread() )", (const char *)&queryFormat, "Sys_IsServerThread()") )
    __debugbreak();
  memset_0(s_svProfEventData, 0, sizeof(s_svProfEventData));
  CurrentThreadContext = Sys_GetCurrentThreadContext();
  v1 = CurrentThreadContext;
  if ( (unsigned int)CurrentThreadContext >= THREAD_CONTEXT_COUNT )
  {
    LODWORD(v5) = CurrentThreadContext;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_profile.cpp", 89, ASSERT_TYPE_ASSERT, "(unsigned)( context ) < (unsigned)( ( sizeof( *array_counter( s_svProfEventData ) ) + 0 ) )", "context doesn't index ARRAY_COUNT( s_svProfEventData )\n\t%i not in [0, %i)", v5, 28) )
      __debugbreak();
  }
  v2 = s_svProfEventData[v1];
  nestingCount = v2->nestingCount;
  if ( nestingCount )
  {
    v2->nestingCount = nestingCount + 1;
  }
  else
  {
    if ( v2->state )
    {
      LODWORD(v6) = 0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_profile.cpp", 288, ASSERT_TYPE_ASSERT, "(eventData->state == SvProfEventState::SVPERF_STATE_INACTIVE)", "%s\n\tMismatching ServerPerf_Begin and ServerPerf_End. ServerPerf_Begin called without a corrosponding ServerPerf_End for server event %d", "eventData->state == SvProfEventState::SVPERF_STATE_INACTIVE", v6) )
        __debugbreak();
    }
    v4 = Sys_Microseconds();
    ++v2->nestingCount;
    v2->startTime = v4;
    v2->state = SVPERF_STATE_ACTIVE;
  }
}

/*
==============
SV_Profile_EndEvent
==============
*/
void SV_Profile_EndEvent(const ServerProfileEvent event)
{
  SvProfEvent *v2; 
  __int64 v4; 
  ServerProfileEvent v5; 

  v2 = SV_Profile_GetEvent(event);
  if ( v2->state != SVPERF_STATE_ACTIVE )
  {
    v5 = event;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_profile.cpp", 304, ASSERT_TYPE_ASSERT, "(eventData->state == SvProfEventState::SVPERF_STATE_ACTIVE)", "%s\n\tMismatching ServerPerf_Begin and SV_Profile_EndEvent. SV_Profile_EndEvent called without a corrosponding ServerPerf_Begin for server event %d", "eventData->state == SvProfEventState::SVPERF_STATE_ACTIVE", v5) )
      __debugbreak();
  }
  if ( !v2->nestingCount )
  {
    LODWORD(v4) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_profile.cpp", 305, ASSERT_TYPE_ASSERT, "( eventData->nestingCount ) > ( 0 )", "eventData->nestingCount > 0\n\t%i, %i", v4, 0i64) )
      __debugbreak();
  }
  if ( v2->nestingCount-- == 1 )
  {
    v2->totalTime += Sys_Microseconds() - v2->startTime;
    ++v2->eventCount;
    v2->state = SVPERF_STATE_INACTIVE;
  }
}

/*
==============
SV_Profile_EndFrame
==============
*/
void SV_Profile_EndFrame(void)
{
  ThreadContext CurrentThreadContext; 
  __int64 v1; 
  SvProfEvent *v2; 
  OnlineTimeSeriesLog *v4; 
  unsigned __int64 v5; 
  const char *CurrentThreadContextName; 
  unsigned int *p_eventCount; 
  __int64 v8; 
  __int64 v9; 
  unsigned __int64 v10; 
  ThreadContext v11; 
  __int64 v12; 
  SvProfEvent *v13; 
  unsigned int nestingCount; 
  unsigned __int64 v15; 
  __int64 v16; 
  __int64 v17; 

  if ( !Sys_IsServerThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_profile.cpp", 220, ASSERT_TYPE_ASSERT, "( Sys_IsServerThread() )", (const char *)&queryFormat, "Sys_IsServerThread()") )
    __debugbreak();
  CurrentThreadContext = Sys_GetCurrentThreadContext();
  v1 = CurrentThreadContext;
  if ( (unsigned int)CurrentThreadContext >= THREAD_CONTEXT_COUNT )
  {
    LODWORD(v16) = CurrentThreadContext;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_profile.cpp", 89, ASSERT_TYPE_ASSERT, "(unsigned)( context ) < (unsigned)( ( sizeof( *array_counter( s_svProfEventData ) ) + 0 ) )", "context doesn't index ARRAY_COUNT( s_svProfEventData )\n\t%i not in [0, %i)", v16, 28) )
      __debugbreak();
  }
  v2 = s_svProfEventData[v1];
  if ( v2->state != SVPERF_STATE_ACTIVE )
  {
    LODWORD(v17) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_profile.cpp", 304, ASSERT_TYPE_ASSERT, "(eventData->state == SvProfEventState::SVPERF_STATE_ACTIVE)", "%s\n\tMismatching ServerPerf_Begin and SV_Profile_EndEvent. SV_Profile_EndEvent called without a corrosponding ServerPerf_Begin for server event %d", "eventData->state == SvProfEventState::SVPERF_STATE_ACTIVE", v17) )
      __debugbreak();
  }
  if ( !v2->nestingCount )
  {
    LODWORD(v16) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_profile.cpp", 305, ASSERT_TYPE_ASSERT, "( eventData->nestingCount ) > ( 0 )", "eventData->nestingCount > 0\n\t%i, %i", v16, 0i64) )
      __debugbreak();
  }
  if ( v2->nestingCount-- == 1 )
  {
    v2->totalTime += Sys_Microseconds() - v2->startTime;
    ++v2->eventCount;
    v2->state = SVPERF_STATE_INACTIVE;
  }
  if ( s_svProfEnabled )
  {
    v4 = OnlineTimeSeriesLog::Get();
    v5 = OnlineTimeSeriesLog::BeginMeasurement(v4, "server_profile");
    if ( v5 != 0xFFFFFFFF )
    {
      CurrentThreadContextName = Sys_GetCurrentThreadContextName();
      OnlineTimeSeriesLog::AddMetaTag(v4, v5, "thread", CurrentThreadContextName);
      p_eventCount = &s_svProfEventData[26][0].eventCount;
      v8 = 0i64;
      v9 = 52i64;
      do
      {
        v10 = *((_QWORD *)p_eventCount - 622) + *((_QWORD *)p_eventCount - 4782) + *((_QWORD *)p_eventCount - 830) + *((_QWORD *)p_eventCount - 4990) + *((_QWORD *)p_eventCount - 1038) + *((_QWORD *)p_eventCount - 5198) + *((_QWORD *)p_eventCount - 1246) + *((_QWORD *)p_eventCount - 5406) + *((_QWORD *)p_eventCount - 1454) + *((_QWORD *)p_eventCount - 1662) + *((_QWORD *)p_eventCount - 1870) + *((_QWORD *)p_eventCount - 2078) + *((_QWORD *)p_eventCount - 2286) + *((_QWORD *)p_eventCount - 2494) + *((_QWORD *)p_eventCount - 2702) + *((_QWORD *)p_eventCount - 2910) + *((_QWORD *)p_eventCount - 3118) + *((_QWORD *)p_eventCount - 3326) + *((_QWORD *)p_eventCount - 3534) + *((_QWORD *)p_eventCount - 3742) + *((_QWORD *)p_eventCount - 3950) + *((_QWORD *)p_eventCount + 2) + *((_QWORD *)p_eventCount - 4158) + *((_QWORD *)p_eventCount - 206) + *((_QWORD *)p_eventCount + 210) + *((_QWORD *)p_eventCount - 4366) + *((_QWORD *)p_eventCount - 414) + *((_QWORD *)p_eventCount - 4574);
        OnlineTimeSeriesLog::AddFieldValue(v4, v5, SVPROF_EVENT_COUNT_NAMES[v8], *p_eventCount + *(p_eventCount - 1248) + *(p_eventCount - 9568) + *(p_eventCount - 1664) + *(p_eventCount - 9984) + *(p_eventCount - 2080) + *(p_eventCount - 10400) + *(p_eventCount - 2496) + *(p_eventCount - 10816) + *(p_eventCount - 2912) + *(p_eventCount - 3328) + *(p_eventCount - 3744) + *(p_eventCount - 4160) + *(p_eventCount - 4576) + *(p_eventCount - 4992) + *(p_eventCount - 5408) + *(p_eventCount - 5824) + *(p_eventCount - 6240) + *(p_eventCount - 6656) + *(p_eventCount - 7072) + *(p_eventCount - 7488) + *(p_eventCount - 7904) + *(p_eventCount - 8320) + p_eventCount[416] + *(p_eventCount - 416) + *(p_eventCount - 8736) + *(p_eventCount - 832) + *(p_eventCount - 9152));
        OnlineTimeSeriesLog::AddFieldValue(v4, v5, SVPROF_EVENT_TIME_NAMES[v8], v10);
        p_eventCount += 8;
        ++v8;
        --v9;
      }
      while ( v9 );
      OnlineTimeSeriesLog::EndMeasurement(v4, v5);
    }
    SV_Profile_UpdateDrawFrame();
  }
  if ( !Sys_IsServerThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_profile.cpp", 146, ASSERT_TYPE_ASSERT, "( Sys_IsServerThread() )", (const char *)&queryFormat, "Sys_IsServerThread()") )
    __debugbreak();
  memset_0(s_svProfEventData, 0, sizeof(s_svProfEventData));
  v11 = Sys_GetCurrentThreadContext();
  v12 = v11;
  if ( (unsigned int)v11 >= THREAD_CONTEXT_COUNT )
  {
    LODWORD(v17) = 28;
    LODWORD(v16) = v11;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_profile.cpp", 89, ASSERT_TYPE_ASSERT, "(unsigned)( context ) < (unsigned)( ( sizeof( *array_counter( s_svProfEventData ) ) + 0 ) )", "context doesn't index ARRAY_COUNT( s_svProfEventData )\n\t%i not in [0, %i)", v16, v17) )
      __debugbreak();
  }
  v13 = s_svProfEventData[v12];
  nestingCount = v13->nestingCount;
  if ( nestingCount )
  {
    v13->nestingCount = nestingCount + 1;
  }
  else
  {
    if ( v13->state )
    {
      LODWORD(v17) = 0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_profile.cpp", 288, ASSERT_TYPE_ASSERT, "(eventData->state == SvProfEventState::SVPERF_STATE_INACTIVE)", "%s\n\tMismatching ServerPerf_Begin and ServerPerf_End. ServerPerf_Begin called without a corrosponding ServerPerf_End for server event %d", "eventData->state == SvProfEventState::SVPERF_STATE_INACTIVE", v17) )
        __debugbreak();
    }
    v15 = Sys_Microseconds();
    ++v13->nestingCount;
    v13->startTime = v15;
    v13->state = SVPERF_STATE_ACTIVE;
  }
}

/*
==============
SV_Profile_GetDrawFrame
==============
*/
SvProfileDrawFrame *SV_Profile_GetDrawFrame(SvProfileDrawFrame *result)
{
  __int64 v4; 

  if ( s_svProfEnabled )
  {
    Sys_CheckAcquireLock(&s_svProfileDrawLock);
    AcquireSRWLockShared((PSRWLOCK)&s_svProfileDrawLock);
    _RDX = result;
    _RAX = &s_svProfileDrawFrame;
    v4 = 9i64;
    do
    {
      _RDX = (SvProfileDrawFrame *)((char *)_RDX + 128);
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovups xmm1, xmmword ptr [rax+70h]
      }
      _RAX = (SvProfileDrawFrame *)((char *)_RAX + 128);
      __asm
      {
        vmovups ymmword ptr [rdx-80h], ymm0
        vmovups ymm0, ymmword ptr [rax-60h]
        vmovups ymmword ptr [rdx-60h], ymm0
        vmovups ymm0, ymmword ptr [rax-40h]
        vmovups ymmword ptr [rdx-40h], ymm0
        vmovups xmm0, xmmword ptr [rax-20h]
        vmovups xmmword ptr [rdx-20h], xmm0
        vmovups xmmword ptr [rdx-10h], xmm1
      }
      --v4;
    }
    while ( v4 );
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr [rdx], ymm0
      vmovups ymm0, ymmword ptr [rax+20h]
      vmovups ymmword ptr [rdx+20h], ymm0
      vmovups ymm0, ymmword ptr [rax+40h]
      vmovups ymmword ptr [rdx+40h], ymm0
    }
    ReleaseSRWLockShared((PSRWLOCK)&s_svProfileDrawLock);
    Sys_CheckReleaseLock(&s_svProfileDrawLock);
    return result;
  }
  else
  {
    memset_0(result, 0, sizeof(SvProfileDrawFrame));
    return result;
  }
}

/*
==============
SV_Profile_GetEvent
==============
*/
SvProfEvent *SV_Profile_GetEvent(const ServerProfileEvent event)
{
  __int64 v1; 
  ThreadContext CurrentThreadContext; 
  __int64 v3; 
  __int64 v5; 
  __int64 v6; 

  v1 = event;
  CurrentThreadContext = Sys_GetCurrentThreadContext();
  v3 = CurrentThreadContext;
  if ( (unsigned int)CurrentThreadContext >= THREAD_CONTEXT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_profile.cpp", 89, ASSERT_TYPE_ASSERT, "(unsigned)( context ) < (unsigned)( ( sizeof( *array_counter( s_svProfEventData ) ) + 0 ) )", "context doesn't index ARRAY_COUNT( s_svProfEventData )\n\t%i not in [0, %i)", CurrentThreadContext, 28) )
    __debugbreak();
  if ( (unsigned int)v1 >= 0x34 )
  {
    LODWORD(v6) = 52;
    LODWORD(v5) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_profile.cpp", 90, ASSERT_TYPE_ASSERT, "(unsigned)( event ) < (unsigned)( ( sizeof( *array_counter( s_svProfEventData[context] ) ) + 0 ) )", "event doesn't index ARRAY_COUNT( s_svProfEventData[context] )\n\t%i not in [0, %i)", v5, v6) )
      __debugbreak();
  }
  return &s_svProfEventData[v3][v1];
}

/*
==============
SV_Profile_Init
==============
*/
void SV_Profile_Init(const bool isGameServer)
{
  const dvar_t *v1; 
  __int64 ticks_0; 
  const dvar_t *v3; 
  __int64 v4; 
  unsigned int unsignedInt; 
  const char *MatchIdString; 
  bool v7; 
  DLogContext context; 
  char buffer[4096]; 

  if ( !isGameServer )
    goto LABEL_20;
  v1 = DVARBOOL_server_profile_log_enabled;
  if ( !DVARBOOL_server_profile_log_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "server_profile_log_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( v1->current.enabled )
  {
    s_svProfEnabled = 1;
    ticks_0 = Xtime_get_ticks_0();
    v3 = DVARINT_ui_serverFrameDuration;
    v4 = ticks_0 / 10000000;
    if ( !DVARINT_ui_serverFrameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ui_serverFrameDuration") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v3);
    unsignedInt = v3->current.unsignedInt;
    MatchIdString = OnlineMatchId::GetMatchIdString();
    if ( DLog_IsActive() && DLog_CreateContext(&context, 0i64, buffer, 4096) )
    {
      if ( DLog_IsActive() )
      {
        v7 = DLog_BeginEvent(&context, "sv_profile_session");
        context.autoEndEvent = 1;
        if ( v7 && DLog_String(&context, "status", "begin", 0) && DLog_String(&context, "match_guid", MatchIdString, 0) && DLog_UInt64(&context, "timestamp", v4) && DLog_UInt32(&context, "expected_frame_time", unsignedInt) )
          DLog_RecordContext(&context);
      }
      else
      {
        context.error = DLOG_ERROR_NOT_ACTIVE;
      }
    }
    InitializeSRWLock((PSRWLOCK)&s_svProfileDrawLock);
    s_svProfileDrawLock.initialized = -1412623820;
    s_svProfileDrawLock.acquireLock = 0;
    s_svProfileDrawLock.writeThreadId = 0;
  }
  else
  {
LABEL_20:
    s_svProfEnabled = 0;
  }
}

/*
==============
SV_Profile_PauseEvent
==============
*/
void SV_Profile_PauseEvent(const ServerProfileEvent event)
{
  SvProfEvent *v2; 
  ServerProfileEvent v3; 

  v2 = SV_Profile_GetEvent(event);
  if ( v2->state != SVPERF_STATE_ACTIVE )
  {
    v3 = event;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_profile.cpp", 328, ASSERT_TYPE_ASSERT, "(eventData->state == SvProfEventState::SVPERF_STATE_ACTIVE)", "%s\n\tMismatching ServerPerf_Begin and SV_Profile_PauseEvent. SV_Profile_PauseEvent called without a corrosponding ServerPerf_Begin for server event %d", "eventData->state == SvProfEventState::SVPERF_STATE_ACTIVE", v3) )
      __debugbreak();
  }
  v2->totalTime += Sys_Microseconds() - v2->startTime;
  v2->state = SVPERF_STATE_PAUSED;
}

/*
==============
SV_Profile_PauseFrame
==============
*/
void SV_Profile_PauseFrame(void)
{
  ThreadContext CurrentThreadContext; 
  __int64 v1; 
  SvProfEvent *v2; 
  __int64 v3; 
  __int64 v4; 

  if ( !Sys_IsServerThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_profile.cpp", 268, ASSERT_TYPE_ASSERT, "( Sys_IsServerThread() )", (const char *)&queryFormat, "Sys_IsServerThread()") )
    __debugbreak();
  CurrentThreadContext = Sys_GetCurrentThreadContext();
  v1 = CurrentThreadContext;
  if ( (unsigned int)CurrentThreadContext >= THREAD_CONTEXT_COUNT )
  {
    LODWORD(v3) = CurrentThreadContext;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_profile.cpp", 89, ASSERT_TYPE_ASSERT, "(unsigned)( context ) < (unsigned)( ( sizeof( *array_counter( s_svProfEventData ) ) + 0 ) )", "context doesn't index ARRAY_COUNT( s_svProfEventData )\n\t%i not in [0, %i)", v3, 28) )
      __debugbreak();
  }
  v2 = s_svProfEventData[v1];
  if ( v2->state != SVPERF_STATE_ACTIVE )
  {
    LODWORD(v4) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_profile.cpp", 328, ASSERT_TYPE_ASSERT, "(eventData->state == SvProfEventState::SVPERF_STATE_ACTIVE)", "%s\n\tMismatching ServerPerf_Begin and SV_Profile_PauseEvent. SV_Profile_PauseEvent called without a corrosponding ServerPerf_Begin for server event %d", "eventData->state == SvProfEventState::SVPERF_STATE_ACTIVE", v4) )
      __debugbreak();
  }
  v2->totalTime += Sys_Microseconds() - v2->startTime;
  v2->state = SVPERF_STATE_PAUSED;
}

/*
==============
SV_Profile_ResumeEvent
==============
*/
void SV_Profile_ResumeEvent(const ServerProfileEvent event)
{
  SvProfEvent *v2; 
  ServerProfileEvent v3; 

  v2 = SV_Profile_GetEvent(event);
  if ( v2->state != SVPERF_STATE_PAUSED )
  {
    v3 = event;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_profile.cpp", 344, ASSERT_TYPE_ASSERT, "(eventData->state == SvProfEventState::SVPERF_STATE_PAUSED)", "%s\n\tMismatching SV_Profile_ResumeEvent and SV_Profile_PauseEvent. SV_Profile_ResumeEvent called without a corrosponding SV_Profile_PauseEvent for server event %d", "eventData->state == SvProfEventState::SVPERF_STATE_PAUSED", v3) )
      __debugbreak();
  }
  v2->startTime = Sys_Microseconds();
  v2->state = SVPERF_STATE_ACTIVE;
}

/*
==============
SV_Profile_ResumeFrame
==============
*/
void SV_Profile_ResumeFrame(void)
{
  ThreadContext CurrentThreadContext; 
  __int64 v1; 
  SvProfEvent *v2; 
  __int64 v3; 
  __int64 v4; 

  if ( !Sys_IsServerThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_profile.cpp", 276, ASSERT_TYPE_ASSERT, "( Sys_IsServerThread() )", (const char *)&queryFormat, "Sys_IsServerThread()") )
    __debugbreak();
  CurrentThreadContext = Sys_GetCurrentThreadContext();
  v1 = CurrentThreadContext;
  if ( (unsigned int)CurrentThreadContext >= THREAD_CONTEXT_COUNT )
  {
    LODWORD(v3) = CurrentThreadContext;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_profile.cpp", 89, ASSERT_TYPE_ASSERT, "(unsigned)( context ) < (unsigned)( ( sizeof( *array_counter( s_svProfEventData ) ) + 0 ) )", "context doesn't index ARRAY_COUNT( s_svProfEventData )\n\t%i not in [0, %i)", v3, 28) )
      __debugbreak();
  }
  v2 = s_svProfEventData[v1];
  if ( v2->state != SVPERF_STATE_PAUSED )
  {
    LODWORD(v4) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_profile.cpp", 344, ASSERT_TYPE_ASSERT, "(eventData->state == SvProfEventState::SVPERF_STATE_PAUSED)", "%s\n\tMismatching SV_Profile_ResumeEvent and SV_Profile_PauseEvent. SV_Profile_ResumeEvent called without a corrosponding SV_Profile_PauseEvent for server event %d", "eventData->state == SvProfEventState::SVPERF_STATE_PAUSED", v4) )
      __debugbreak();
  }
  v2->startTime = Sys_Microseconds();
  v2->state = SVPERF_STATE_ACTIVE;
}

/*
==============
SV_Profile_Shutdown
==============
*/
void SV_Profile_Shutdown(void)
{
  __int64 ticks_0; 
  const dvar_t *v1; 
  __int64 v2; 
  unsigned int unsignedInt; 
  const char *MatchIdString; 
  bool v5; 
  __int64 v6; 
  volatile int acquireLock; 
  DLogContext context; 
  char buffer[4096]; 

  if ( s_svProfEnabled )
  {
    ticks_0 = Xtime_get_ticks_0();
    v1 = DVARINT_ui_serverFrameDuration;
    v2 = ticks_0 / 10000000;
    if ( !DVARINT_ui_serverFrameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ui_serverFrameDuration") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v1);
    unsignedInt = v1->current.unsignedInt;
    MatchIdString = OnlineMatchId::GetMatchIdString();
    if ( DLog_IsActive() && DLog_CreateContext(&context, 0i64, buffer, 4096) )
    {
      if ( DLog_IsActive() )
      {
        v5 = DLog_BeginEvent(&context, "sv_profile_session");
        context.autoEndEvent = 1;
        if ( v5 && DLog_String(&context, "status", "end", 0) && DLog_String(&context, "match_guid", MatchIdString, 0) && DLog_UInt64(&context, "timestamp", v2) && DLog_UInt32(&context, "expected_frame_time", unsignedInt) )
          DLog_RecordContext(&context);
      }
      else
      {
        context.error = DLOG_ERROR_NOT_ACTIVE;
      }
    }
    s_svProfileDrawLock.initialized = 0;
    if ( s_svProfileDrawLock.acquireLock )
    {
      acquireLock = s_svProfileDrawLock.acquireLock;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_rwlock.h", 138, ASSERT_TYPE_ASSERT, "( lock->acquireLock ) == ( 0 )", "%s == %s\n\t%i, %i", "lock->acquireLock", "0", acquireLock, 0i64) )
        __debugbreak();
    }
    if ( s_svProfileDrawLock.writeThreadId )
    {
      LODWORD(v6) = s_svProfileDrawLock.writeThreadId;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_rwlock.h", 139, ASSERT_TYPE_ASSERT, "( lock->writeThreadId ) == ( INVALID_THREAD_ID )", "%s == %s\n\t%i, %i", "lock->writeThreadId", "INVALID_THREAD_ID", v6, 0i64) )
        __debugbreak();
    }
    s_svProfEnabled = 0;
  }
  else
  {
    s_svProfEnabled = 0;
  }
}

/*
==============
SV_Profile_UpdateDrawFrame
==============
*/
void SV_Profile_UpdateDrawFrame()
{
  unsigned __int64 *p_totalTime; 
  unsigned __int64 v1; 
  __int64 v2; 
  unsigned __int64 *p_time; 
  int v4; 
  unsigned __int64 v5; 
  unsigned __int64 *v6; 
  __int64 v7; 
  int v8; 
  __int64 v9; 
  signed __int64 v10; 
  unsigned __int64 *v11; 
  __int64 v12; 
  __int64 v13; 
  const char *const *v14; 
  char *v15; 
  __int64 v16; 
  unsigned __int64 v17; 
  unsigned __int64 v18; 
  __int64 v19; 
  const char *v20; 
  __int64 v21; 
  __int64 v22; 
  __int64 v23; 
  __int64 v24; 
  __int64 v25; 
  __int64 v26; 
  __int64 v27; 
  __int64 v28; 
  __int64 v29; 
  __int64 v30; 
  __int64 v31; 
  __int64 v33; 
  __int64 v43; 
  char v44[16]; 
  char v45; 
  char v46; 

  p_totalTime = &s_svProfEventData[1][0].totalTime;
  v1 = s_svProfileNextFrameIndex;
  v2 = 52i64;
  ++s_svProfileNextFrameIndex;
  p_time = &s_svProfileFrames[v1 % 0x1E].lines[0].time;
  do
  {
    *((_DWORD *)p_time - 2) = 0;
    v4 = 0;
    *p_time = 0i64;
    v5 = 0i64;
    v6 = p_totalTime;
    v7 = 2i64;
    do
    {
      v8 = *((_DWORD *)v6 - 4) + *((_DWORD *)v6 + 412) + *((_DWORD *)v6 - 420);
      v6 += 2912;
      v5 += *(v6 - 416) + *(v6 - 624) + *(v6 - 832) + *(v6 - 1040) + *(v6 - 1248) + *(v6 - 1456) + *(v6 - 1664) + *(v6 - 1872) + *(v6 - 2080) + *(v6 - 2288) + *(v6 - 2496) + *(v6 - 2912) + *(v6 - 2704) + *(v6 - 3120);
      v4 += *((_DWORD *)v6 - 836) + *((_DWORD *)v6 - 1252) + *((_DWORD *)v6 - 1668) + *((_DWORD *)v6 - 2084) + *((_DWORD *)v6 - 2500) + *((_DWORD *)v6 - 2916) + *((_DWORD *)v6 - 3332) + *((_DWORD *)v6 - 3748) + *((_DWORD *)v6 - 4164) + *((_DWORD *)v6 - 4580) + *((_DWORD *)v6 - 4996) + v8;
      --v7;
    }
    while ( v7 );
    *((_DWORD *)p_time - 2) = v4;
    p_totalTime += 4;
    *p_time = v5;
    p_time += 3;
    --v2;
  }
  while ( v2 );
  memset_0(v44, 0, 0x4E0ui64);
  v9 = 4i64;
  v10 = &v45 - (char *)s_svProfileFrames;
  v11 = &s_svProfileFrames[0].lines[1].time;
  v12 = 30i64;
  do
  {
    v13 = 4i64;
    do
    {
      *(_DWORD *)((char *)v11 + v10 - 48) += *((_DWORD *)v11 - 8);
      *(unsigned __int64 *)((char *)v11 + v10 - 40) += *(v11 - 3);
      *(_DWORD *)((char *)v11 + v10 - 24) += *((_DWORD *)v11 - 2);
      *(unsigned __int64 *)((char *)v11 + v10 - 16) += *v11;
      *(_DWORD *)((char *)v11 + v10) += *((_DWORD *)v11 + 4);
      *(unsigned __int64 *)((char *)v11 + v10 + 8) += v11[3];
      *(_DWORD *)((char *)v11 + v10 + 24) += *((_DWORD *)v11 + 10);
      *(unsigned __int64 *)((char *)v11 + v10 + 32) += v11[6];
      *(_DWORD *)((char *)v11 + v10 + 48) += *((_DWORD *)v11 + 16);
      *(unsigned __int64 *)((char *)v11 + v10 + 56) += v11[9];
      *(_DWORD *)((char *)v11 + v10 + 72) += *((_DWORD *)v11 + 22);
      *(unsigned __int64 *)((char *)v11 + v10 + 80) += v11[12];
      *(_DWORD *)((char *)v11 + v10 + 96) += *((_DWORD *)v11 + 28);
      *(unsigned __int64 *)((char *)v11 + v10 + 104) += v11[15];
      *(_DWORD *)((char *)v11 + v10 + 120) += *((_DWORD *)v11 + 34);
      *(unsigned __int64 *)((char *)v11 + v10 + 128) += v11[18];
      *(_DWORD *)((char *)v11 + v10 + 144) += *((_DWORD *)v11 + 40);
      *(unsigned __int64 *)((char *)v11 + v10 + 152) += v11[21];
      *(_DWORD *)((char *)v11 + v10 + 168) += *((_DWORD *)v11 + 46);
      *(unsigned __int64 *)((char *)v11 + v10 + 176) += v11[24];
      *(_DWORD *)((char *)v11 + v10 + 192) += *((_DWORD *)v11 + 52);
      *(unsigned __int64 *)((char *)v11 + v10 + 200) += v11[27];
      *(_DWORD *)((char *)v11 + v10 + 216) += *((_DWORD *)v11 + 58);
      *(unsigned __int64 *)((char *)v11 + v10 + 224) += v11[30];
      *(_DWORD *)((char *)v11 + v10 + 240) += *((_DWORD *)v11 + 64);
      *(unsigned __int64 *)((char *)v11 + v10 + 248) += v11[33];
      v11 += 39;
      --v13;
    }
    while ( v13 );
    v10 -= 1248i64;
    --v12;
  }
  while ( v12 );
  v14 = &SVPROF_EVENT_NAMES[2];
  v15 = &v46;
  do
  {
    v16 = *((unsigned int *)v15 - 8) + 29i64;
    *((const char **)v15 - 5) = *(v14 - 2);
    v17 = v16;
    v18 = *((_QWORD *)v15 - 3) + 29i64;
    *((_DWORD *)v15 - 8) = v17 / 0x1E;
    v19 = *((_QWORD *)v14 - 1);
    *((_QWORD *)v15 - 3) = v18 / 0x1E;
    *((_QWORD *)v15 - 2) = v19;
    *((_DWORD *)v15 - 2) = ((unsigned __int64)*((unsigned int *)v15 - 2) + 29) / 0x1E;
    v20 = *v14;
    *(_QWORD *)v15 = (*(_QWORD *)v15 + 29i64) / 0x1Eui64;
    *((_QWORD *)v15 + 1) = v20;
    *((_DWORD *)v15 + 4) = ((unsigned __int64)*((unsigned int *)v15 + 4) + 29) / 0x1E;
    v21 = *((_QWORD *)v14 + 1);
    *((_QWORD *)v15 + 3) = (*((_QWORD *)v15 + 3) + 29i64) / 0x1Eui64;
    *((_QWORD *)v15 + 4) = v21;
    *((_DWORD *)v15 + 10) = ((unsigned __int64)*((unsigned int *)v15 + 10) + 29) / 0x1E;
    v22 = *((_QWORD *)v14 + 2);
    *((_QWORD *)v15 + 6) = (*((_QWORD *)v15 + 6) + 29i64) / 0x1Eui64;
    *((_QWORD *)v15 + 7) = v22;
    *((_DWORD *)v15 + 16) = ((unsigned __int64)*((unsigned int *)v15 + 16) + 29) / 0x1E;
    v23 = *((_QWORD *)v14 + 3);
    *((_QWORD *)v15 + 9) = (*((_QWORD *)v15 + 9) + 29i64) / 0x1Eui64;
    *((_QWORD *)v15 + 10) = v23;
    *((_DWORD *)v15 + 22) = ((unsigned __int64)*((unsigned int *)v15 + 22) + 29) / 0x1E;
    v24 = *((_QWORD *)v14 + 4);
    *((_QWORD *)v15 + 12) = (*((_QWORD *)v15 + 12) + 29i64) / 0x1Eui64;
    *((_QWORD *)v15 + 13) = v24;
    *((_DWORD *)v15 + 28) = ((unsigned __int64)*((unsigned int *)v15 + 28) + 29) / 0x1E;
    v25 = *((_QWORD *)v14 + 5);
    *((_QWORD *)v15 + 15) = (*((_QWORD *)v15 + 15) + 29i64) / 0x1Eui64;
    *((_QWORD *)v15 + 16) = v25;
    *((_DWORD *)v15 + 34) = ((unsigned __int64)*((unsigned int *)v15 + 34) + 29) / 0x1E;
    v26 = *((_QWORD *)v14 + 6);
    *((_QWORD *)v15 + 18) = (*((_QWORD *)v15 + 18) + 29i64) / 0x1Eui64;
    *((_QWORD *)v15 + 19) = v26;
    *((_DWORD *)v15 + 40) = ((unsigned __int64)*((unsigned int *)v15 + 40) + 29) / 0x1E;
    v27 = *((_QWORD *)v14 + 7);
    *((_QWORD *)v15 + 21) = (*((_QWORD *)v15 + 21) + 29i64) / 0x1Eui64;
    *((_QWORD *)v15 + 22) = v27;
    *((_DWORD *)v15 + 46) = ((unsigned __int64)*((unsigned int *)v15 + 46) + 29) / 0x1E;
    v28 = *((_QWORD *)v14 + 8);
    *((_QWORD *)v15 + 24) = (*((_QWORD *)v15 + 24) + 29i64) / 0x1Eui64;
    *((_QWORD *)v15 + 25) = v28;
    *((_DWORD *)v15 + 52) = ((unsigned __int64)*((unsigned int *)v15 + 52) + 29) / 0x1E;
    v29 = *((_QWORD *)v14 + 9);
    *((_QWORD *)v15 + 27) = (*((_QWORD *)v15 + 27) + 29i64) / 0x1Eui64;
    *((_QWORD *)v15 + 28) = v29;
    *((_DWORD *)v15 + 58) = ((unsigned __int64)*((unsigned int *)v15 + 58) + 29) / 0x1E;
    v30 = *((_QWORD *)v15 + 30);
    v15 += 312;
    v14 += 13;
    v31 = *((_QWORD *)v14 - 3);
    *((_QWORD *)v15 - 9) = (v30 + 29) / 0x1Eui64;
    *((_QWORD *)v15 - 8) = v31;
    *((_DWORD *)v15 - 14) = ((unsigned __int64)*((unsigned int *)v15 - 14) + 29) / 0x1E;
    *((_QWORD *)v15 - 6) = (*((_QWORD *)v15 - 6) + 29i64) / 0x1Eui64;
    --v9;
  }
  while ( v9 );
  Sys_CheckAcquireLock(&s_svProfileDrawLock);
  AcquireSRWLockExclusive((PSRWLOCK)&s_svProfileDrawLock);
  s_svProfileDrawLock.writeThreadId = Sys_GetCurrentThreadId();
  if ( !s_svProfileDrawLock.writeThreadId )
  {
    LODWORD(v43) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_rwlock.h", 177, ASSERT_TYPE_ASSERT, "( lock->writeThreadId ) != ( INVALID_THREAD_ID )", "%s != %s\n\t%i, %i", "lock->writeThreadId", "INVALID_THREAD_ID", v43, 0i64) )
      __debugbreak();
  }
  _RAX = &s_svProfileDrawFrame;
  v33 = 9i64;
  _RDX = v44;
  do
  {
    _RAX = (SvProfileDrawFrame *)((char *)_RAX + 128);
    __asm
    {
      vmovups ymm0, ymmword ptr [rdx]
      vmovups xmm1, xmmword ptr [rdx+70h]
    }
    _RDX += 128;
    __asm
    {
      vmovups ymmword ptr [rax-80h], ymm0
      vmovups ymm0, ymmword ptr [rdx-60h]
      vmovups ymmword ptr [rax-60h], ymm0
      vmovups ymm0, ymmword ptr [rdx-40h]
      vmovups ymmword ptr [rax-40h], ymm0
      vmovups xmm0, xmmword ptr [rdx-20h]
      vmovups xmmword ptr [rax-20h], xmm0
      vmovups xmmword ptr [rax-10h], xmm1
    }
    --v33;
  }
  while ( v33 );
  __asm
  {
    vmovups ymm0, ymmword ptr [rdx]
    vmovups ymmword ptr [rax], ymm0
    vmovups ymm0, ymmword ptr [rdx+20h]
    vmovups ymmword ptr [rax+20h], ymm0
    vmovups ymm0, ymmword ptr [rdx+40h]
  }
  s_svProfileDrawLock.writeThreadId = 0;
  __asm { vmovups ymmword ptr [rax+40h], ymm0 }
  ReleaseSRWLockExclusive((PSRWLOCK)&s_svProfileDrawLock);
  Sys_CheckReleaseLock(&s_svProfileDrawLock);
}

