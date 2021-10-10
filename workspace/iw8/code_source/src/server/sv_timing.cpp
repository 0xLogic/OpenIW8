/*
==============
SV_Timing_EndIdleWorkers
==============
*/

void SV_Timing_EndIdleWorkers(void)
{
  ?SV_Timing_EndIdleWorkers@@YAXXZ();
}

/*
==============
SV_Timing_BeginIdleWorkers
==============
*/

void __fastcall SV_Timing_BeginIdleWorkers(ServerTimingState *outTimingState)
{
  ?SV_Timing_BeginIdleWorkers@@YAXPEAUServerTimingState@@@Z(outTimingState);
}

/*
==============
SV_Timing_Resume
==============
*/

void __fastcall SV_Timing_Resume(ServerTimingState *outTimingState)
{
  ?SV_Timing_Resume@@YAXPEAUServerTimingState@@@Z(outTimingState);
}

/*
==============
SV_Timing_GetEventLoopFrameTime
==============
*/

double __fastcall SV_Timing_GetEventLoopFrameTime()
{
  double result; 

  *(float *)&result = ?SV_Timing_GetEventLoopFrameTime@@YAMXZ();
  return result;
}

/*
==============
SV_Timing_GetWorkerFrameTime
==============
*/

double __fastcall SV_Timing_GetWorkerFrameTime()
{
  double result; 

  *(float *)&result = ?SV_Timing_GetWorkerFrameTime@@YAMXZ();
  return result;
}

/*
==============
SV_Timing_GetRunFrameTime
==============
*/

double __fastcall SV_Timing_GetRunFrameTime()
{
  double result; 

  *(float *)&result = ?SV_Timing_GetRunFrameTime@@YAMXZ();
  return result;
}

/*
==============
SV_Timing_UpdateEventLoop
==============
*/

void __fastcall SV_Timing_UpdateEventLoop(const ServerTimingState *outTimingState)
{
  ?SV_Timing_UpdateEventLoop@@YAXPEBUServerTimingState@@@Z(outTimingState);
}

/*
==============
SV_Timing_End
==============
*/

void __fastcall SV_Timing_End(ServerTimingState *outTimingState)
{
  ?SV_Timing_End@@YAXPEAUServerTimingState@@@Z(outTimingState);
}

/*
==============
SV_Timing_Clear
==============
*/

void SV_Timing_Clear(void)
{
  ?SV_Timing_Clear@@YAXXZ();
}

/*
==============
SV_Timing_Start
==============
*/

void __fastcall SV_Timing_Start(ServerTimingState *outTimingState)
{
  ?SV_Timing_Start@@YAXPEAUServerTimingState@@@Z(outTimingState);
}

/*
==============
SV_Timing_UpdateClientMessages
==============
*/

void __fastcall SV_Timing_UpdateClientMessages(const ServerTimingState *outTimingState)
{
  ?SV_Timing_UpdateClientMessages@@YAXPEBUServerTimingState@@@Z(outTimingState);
}

/*
==============
SV_Timing_Pause
==============
*/

void __fastcall SV_Timing_Pause(ServerTimingState *outTimingState)
{
  ?SV_Timing_Pause@@YAXPEAUServerTimingState@@@Z(outTimingState);
}

/*
==============
SV_Timing_StartWorkerContext
==============
*/

void SV_Timing_StartWorkerContext(void)
{
  ?SV_Timing_StartWorkerContext@@YAXXZ();
}

/*
==============
SV_Timing_GetTotalFrameTime
==============
*/

double __fastcall SV_Timing_GetTotalFrameTime()
{
  double result; 

  *(float *)&result = ?SV_Timing_GetTotalFrameTime@@YAMXZ();
  return result;
}

/*
==============
SV_Timing_EndWorkerContext
==============
*/

void SV_Timing_EndWorkerContext(void)
{
  ?SV_Timing_EndWorkerContext@@YAXXZ();
}

/*
==============
SV_Timing_UpdateFrame
==============
*/

void __fastcall SV_Timing_UpdateFrame(const ServerTimingState *timingState, const float frameDurationMs)
{
  ?SV_Timing_UpdateFrame@@YAXPEBUServerTimingState@@M@Z(timingState, frameDurationMs);
}

/*
==============
SV_Timing_GetCurrent
==============
*/

const ServerTiming *__fastcall SV_Timing_GetCurrent()
{
  return ?SV_Timing_GetCurrent@@YAPEBUServerTiming@@XZ();
}

/*
==============
SV_Timing_BeginIdleWorkers
==============
*/
void SV_Timing_BeginIdleWorkers(ServerTimingState *outTimingState)
{
  if ( !outTimingState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_timing.cpp", 160, ASSERT_TYPE_ASSERT, "( outTimingState )", (const char *)&queryFormat, "outTimingState") )
    __debugbreak();
  if ( !Sys_IsServerThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_timing.cpp", 20, ASSERT_TYPE_ASSERT, "( !UseServerSmp() || Sys_IsServerThread() )", (const char *)&queryFormat, "!UseServerSmp() || Sys_IsServerThread()") )
    __debugbreak();
  s_workerTiming = outTimingState;
}

/*
==============
SV_Timing_Clear
==============
*/
void SV_Timing_Clear(void)
{
  memset_0(&s_serverTiming, 0, sizeof(s_serverTiming));
}

/*
==============
SV_Timing_End
==============
*/
void SV_Timing_End(ServerTimingState *outTimingState)
{
  unsigned __int64 v2; 

  if ( !outTimingState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_timing.cpp", 128, ASSERT_TYPE_ASSERT, "( outTimingState )", (const char *)&queryFormat, "outTimingState") )
    __debugbreak();
  if ( outTimingState->isPaused && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_timing.cpp", 130, ASSERT_TYPE_ASSERT, "( !outTimingState->isPaused )", (const char *)&queryFormat, "!outTimingState->isPaused") )
    __debugbreak();
  v2 = __rdtsc();
  if ( v2 <= outTimingState->startTick && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_timing.cpp", 134, ASSERT_TYPE_ASSERT, "( finalTick > outTimingState->startTick )", (const char *)&queryFormat, "finalTick > outTimingState->startTick") )
    __debugbreak();
  outTimingState->totalTicks += v2 - outTimingState->startTick;
}

/*
==============
SV_Timing_EndIdleWorkers
==============
*/
void SV_Timing_EndIdleWorkers(void)
{
  if ( !Sys_IsServerThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_timing.cpp", 20, ASSERT_TYPE_ASSERT, "( !UseServerSmp() || Sys_IsServerThread() )", (const char *)&queryFormat, "!UseServerSmp() || Sys_IsServerThread()") )
    __debugbreak();
  s_workerTiming = NULL;
}

/*
==============
SV_Timing_EndWorkerContext
==============
*/
void SV_Timing_EndWorkerContext(void)
{
  ServerTimingState *v0; 
  unsigned __int64 v1; 

  if ( Sys_IsServerThread() && s_workerTiming )
  {
    SV_Profile_EndEvent(SVPROF_SERVER_WORKERS);
    v0 = s_workerTiming;
    if ( !s_workerTiming && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_timing.cpp", 128, ASSERT_TYPE_ASSERT, "( outTimingState )", (const char *)&queryFormat, "outTimingState") )
      __debugbreak();
    if ( v0->isPaused && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_timing.cpp", 130, ASSERT_TYPE_ASSERT, "( !outTimingState->isPaused )", (const char *)&queryFormat, "!outTimingState->isPaused") )
      __debugbreak();
    v1 = __rdtsc();
    if ( v1 <= v0->startTick && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_timing.cpp", 134, ASSERT_TYPE_ASSERT, "( finalTick > outTimingState->startTick )", (const char *)&queryFormat, "finalTick > outTimingState->startTick") )
      __debugbreak();
    v0->totalTicks += v1 - v0->startTick;
    s_serverTiming.serverWrkTicksTotal += s_workerTiming->totalTicks;
    ++s_serverTiming.serverWrkCount;
  }
}

/*
==============
SV_Timing_GetCurrent
==============
*/
ServerTiming *SV_Timing_GetCurrent()
{
  return &s_serverTiming;
}

/*
==============
SV_Timing_GetEventLoopFrameTime
==============
*/
float SV_Timing_GetEventLoopFrameTime()
{
  return s_serverTiming.eventLoopFrameTime;
}

/*
==============
SV_Timing_GetRunFrameTime
==============
*/
float SV_Timing_GetRunFrameTime()
{
  return s_serverTiming.serverFrameTime;
}

/*
==============
SV_Timing_GetTotalFrameTime
==============
*/
float SV_Timing_GetTotalFrameTime()
{
  return (float)(s_serverTiming.eventLoopFrameTime + s_serverTiming.serverFrameTime) + s_serverTiming.serverWkrFrameTime;
}

/*
==============
SV_Timing_GetWorkerFrameTime
==============
*/
float SV_Timing_GetWorkerFrameTime()
{
  return s_serverTiming.serverWkrFrameTime;
}

/*
==============
SV_Timing_Pause
==============
*/
void SV_Timing_Pause(ServerTimingState *outTimingState)
{
  unsigned __int64 v2; 

  if ( !outTimingState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_timing.cpp", 100, ASSERT_TYPE_ASSERT, "( outTimingState )", (const char *)&queryFormat, "outTimingState") )
    __debugbreak();
  if ( outTimingState->isPaused && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_timing.cpp", 102, ASSERT_TYPE_ASSERT, "( !outTimingState->isPaused )", (const char *)&queryFormat, "!outTimingState->isPaused") )
    __debugbreak();
  v2 = __rdtsc();
  if ( v2 <= outTimingState->startTick && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_timing.cpp", 106, ASSERT_TYPE_ASSERT, "( finalTick > outTimingState->startTick )", (const char *)&queryFormat, "finalTick > outTimingState->startTick") )
    __debugbreak();
  outTimingState->totalTicks += v2 - outTimingState->startTick;
  outTimingState->isPaused = 1;
}

/*
==============
SV_Timing_Resume
==============
*/
void SV_Timing_Resume(ServerTimingState *outTimingState)
{
  if ( !outTimingState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_timing.cpp", 117, ASSERT_TYPE_ASSERT, "( outTimingState )", (const char *)&queryFormat, "outTimingState") )
    __debugbreak();
  if ( !outTimingState->isPaused && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_timing.cpp", 119, ASSERT_TYPE_ASSERT, "( outTimingState->isPaused )", (const char *)&queryFormat, "outTimingState->isPaused") )
    __debugbreak();
  outTimingState->isPaused = 0;
  outTimingState->startTick = __rdtsc();
}

/*
==============
SV_Timing_Start
==============
*/
void SV_Timing_Start(ServerTimingState *outTimingState)
{
  if ( !outTimingState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_timing.cpp", 86, ASSERT_TYPE_ASSERT, "( outTimingState )", (const char *)&queryFormat, "outTimingState") )
    __debugbreak();
  outTimingState->totalTicks = 0i64;
  outTimingState->startTick = __rdtsc();
  outTimingState->isPaused = 0;
}

/*
==============
SV_Timing_StartWorkerContext
==============
*/
void SV_Timing_StartWorkerContext(void)
{
  ServerTimingState *v0; 

  if ( Sys_IsServerThread() && s_workerTiming )
  {
    SV_Profile_BeginEvent(SVPROF_SERVER_WORKERS);
    v0 = s_workerTiming;
    if ( !s_workerTiming && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_timing.cpp", (_DWORD)s_workerTiming + 86, ASSERT_TYPE_ASSERT, "( outTimingState )", (const char *)&queryFormat, "outTimingState") )
      __debugbreak();
    v0->totalTicks = 0i64;
    v0->startTick = __rdtsc();
    v0->isPaused = 0;
  }
}

/*
==============
SV_Timing_UpdateClientMessages
==============
*/
void SV_Timing_UpdateClientMessages(const ServerTimingState *outTimingState)
{
  signed __int64 totalTicks; 
  const dvar_t *v3; 
  __int128 v6; 
  __int128 v8; 
  float v10; 
  double v13; 
  __int128 v14; 
  __int128 v16; 
  double v20; 
  __int128 v21; 
  __int128 v23; 
  char *fmt; 

  if ( !outTimingState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_timing.cpp", 142, ASSERT_TYPE_ASSERT, "( outTimingState )", (const char *)&queryFormat, "outTimingState") )
    __debugbreak();
  if ( !Sys_IsServerThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_timing.cpp", 20, ASSERT_TYPE_ASSERT, "( !UseServerSmp() || Sys_IsServerThread() )", (const char *)&queryFormat, "!UseServerSmp() || Sys_IsServerThread()") )
    __debugbreak();
  s_serverTiming.clientMsgTicksTotal += outTimingState->totalTicks;
  ++s_serverTiming.clientMsgCount;
  totalTicks = outTimingState->totalTicks;
  if ( totalTicks > s_serverTiming.clientMsgTicksMax )
  {
    s_serverTiming.clientMsgTicksMax = outTimingState->totalTicks;
    totalTicks = outTimingState->totalTicks;
  }
  v3 = DVARBOOL_sv_debugTrackServerTime;
  if ( DVARBOOL_sv_debugTrackServerTime )
  {
    Dvar_CheckFrontendServerThread(DVARBOOL_sv_debugTrackServerTime);
    if ( v3->current.enabled )
    {
      if ( s_serverTiming.clientMsgCount <= 0 )
      {
        v10 = 0.0;
      }
      else
      {
        _XMM0 = 0i64;
        __asm { vcvtsi2sd xmm0, xmm0, rax }
        if ( (s_serverTiming.clientMsgTicksTotal & 0x8000000000000000ui64) != 0i64 )
        {
          *((_QWORD *)&v6 + 1) = *((_QWORD *)&_XMM0 + 1);
          *(double *)&v6 = *(double *)&_XMM0 + 1.844674407370955e19;
          _XMM0 = v6;
        }
        *((_QWORD *)&v8 + 1) = *((_QWORD *)&_XMM0 + 1);
        *(double *)&v8 = *(double *)&_XMM0 * msecPerRawTimerTick;
        _XMM0 = v8;
        __asm { vcvtsd2ss xmm2, xmm0, xmm0 }
        v10 = *(float *)&_XMM2 / (float)s_serverTiming.clientMsgCount;
      }
      _XMM0 = 0i64;
      __asm { vcvtsi2sd xmm0, xmm0, rax }
      v13 = v10;
      if ( (s_serverTiming.clientMsgTicksTotal & 0x8000000000000000ui64) != 0i64 )
      {
        *((_QWORD *)&v14 + 1) = *((_QWORD *)&_XMM0 + 1);
        *(double *)&v14 = *(double *)&_XMM0 + 1.844674407370955e19;
        _XMM0 = v14;
      }
      *((_QWORD *)&v16 + 1) = *((_QWORD *)&_XMM0 + 1);
      *(double *)&v16 = *(double *)&_XMM0 * msecPerRawTimerTick;
      _XMM0 = v16;
      __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
      _XMM0 = 0i64;
      __asm { vcvtsi2sd xmm0, xmm0, rdi }
      v20 = *(float *)&_XMM1;
      if ( totalTicks < 0 )
      {
        *((_QWORD *)&v21 + 1) = *((_QWORD *)&_XMM0 + 1);
        *(double *)&v21 = *(double *)&_XMM0 + 1.844674407370955e19;
        _XMM0 = v21;
      }
      *((_QWORD *)&v23 + 1) = *((_QWORD *)&_XMM0 + 1);
      *(double *)&v23 = *(double *)&_XMM0 * msecPerRawTimerTick;
      _XMM0 = v23;
      __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
      LODWORD(fmt) = s_serverTiming.clientMsgCount;
      Com_Printf(0, "Client Msg Time => [Current= %0.2f, clientMsgTotal= %0.2f, clientMsgCount= %d, clientMsgAvg= %0.2f] \n", *(float *)&_XMM1, v20, fmt, v13);
    }
  }
}

/*
==============
SV_Timing_UpdateEventLoop
==============
*/
void SV_Timing_UpdateEventLoop(const ServerTimingState *outTimingState)
{
  if ( !outTimingState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_timing.cpp", 220, ASSERT_TYPE_ASSERT, "( outTimingState )", (const char *)&queryFormat, "outTimingState") )
    __debugbreak();
  if ( !Sys_IsServerThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_timing.cpp", 20, ASSERT_TYPE_ASSERT, "( !UseServerSmp() || Sys_IsServerThread() )", (const char *)&queryFormat, "!UseServerSmp() || Sys_IsServerThread()") )
    __debugbreak();
  s_serverTiming.eventLoopFrameTicksTotal += outTimingState->totalTicks;
  ++s_serverTiming.eventLoopFrameCount;
}

/*
==============
SV_Timing_UpdateFrame
==============
*/
void SV_Timing_UpdateFrame(const ServerTimingState *timingState, const float frameDurationMs)
{
  __int128 v6; 
  __int128 v8; 
  __int128 v12; 
  __int128 v14; 
  __int128 v18; 
  __int128 v20; 
  float v22; 
  const dvar_t *v26; 
  float v27; 
  float v28; 
  float serverTimeCount; 
  char *fmt; 

  if ( !timingState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_timing.cpp", 240, ASSERT_TYPE_ASSERT, "( timingState )", (const char *)&queryFormat, "timingState") )
    __debugbreak();
  if ( !Sys_IsServerThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_timing.cpp", 20, ASSERT_TYPE_ASSERT, "( !UseServerSmp() || Sys_IsServerThread() )", (const char *)&queryFormat, "!UseServerSmp() || Sys_IsServerThread()") )
    __debugbreak();
  _XMM0 = 0i64;
  __asm { vcvtsi2sd xmm0, xmm0, rax }
  if ( (s_serverTiming.eventLoopFrameTicksTotal & 0x8000000000000000ui64) != 0i64 )
  {
    *((_QWORD *)&v6 + 1) = *((_QWORD *)&_XMM0 + 1);
    *(double *)&v6 = *(double *)&_XMM0 + 1.844674407370955e19;
    _XMM0 = v6;
  }
  *((_QWORD *)&v8 + 1) = *((_QWORD *)&_XMM0 + 1);
  *(double *)&v8 = *(double *)&_XMM0 * msecPerRawTimerTick;
  _XMM0 = v8;
  __asm { vcvtsd2ss xmm4, xmm0, xmm0 }
  _XMM0 = 0i64;
  __asm { vcvtsi2sd xmm0, xmm0, rax }
  s_serverTiming.eventLoopFrameTime = *(float *)&_XMM4;
  if ( (s_serverTiming.serverWrkTicksTotal & 0x8000000000000000ui64) != 0i64 )
  {
    *((_QWORD *)&v12 + 1) = *((_QWORD *)&_XMM0 + 1);
    *(double *)&v12 = *(double *)&_XMM0 + 1.844674407370955e19;
    _XMM0 = v12;
  }
  *((_QWORD *)&v14 + 1) = *((_QWORD *)&_XMM0 + 1);
  *(double *)&v14 = *(double *)&_XMM0 * msecPerRawTimerTick;
  _XMM0 = v14;
  __asm { vcvtsd2ss xmm3, xmm0, xmm0 }
  s_serverTiming.serverWkrFrameTime = *(float *)&_XMM3;
  _XMM0 = 0i64;
  __asm { vcvtsi2sd xmm0, xmm0, rax }
  if ( (timingState->totalTicks & 0x8000000000000000ui64) != 0i64 )
  {
    *((_QWORD *)&v18 + 1) = *((_QWORD *)&_XMM0 + 1);
    *(double *)&v18 = *(double *)&_XMM0 + 1.844674407370955e19;
    _XMM0 = v18;
  }
  ++s_serverTiming.serverTimeCount;
  *((_QWORD *)&v20 + 1) = *((_QWORD *)&_XMM0 + 1);
  *(double *)&v20 = *(double *)&_XMM0 * msecPerRawTimerTick;
  _XMM0 = v20;
  __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
  s_serverTiming.serverFrameTime = *(float *)&_XMM1;
  v22 = (float)(*(float *)&_XMM1 + *(float *)&_XMM4) + *(float *)&_XMM3;
  s_serverTiming.serverTimeTotal = v22 + s_serverTiming.serverTimeTotal;
  if ( !Sys_IsServerThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_timing.cpp", 20, ASSERT_TYPE_ASSERT, "( !UseServerSmp() || Sys_IsServerThread() )", (const char *)&queryFormat, "!UseServerSmp() || Sys_IsServerThread()") )
    __debugbreak();
  s_serverTiming.eventLoopFrameTicksTotal = 0i64;
  s_serverTiming.eventLoopFrameCount = 0;
  if ( !Sys_IsServerThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_timing.cpp", 20, ASSERT_TYPE_ASSERT, "( !UseServerSmp() || Sys_IsServerThread() )", (const char *)&queryFormat, "!UseServerSmp() || Sys_IsServerThread()") )
    __debugbreak();
  _XMM1 = LODWORD(s_serverTiming.serverTimeMax);
  __asm
  {
    vcmpltss xmm0, xmm1, xmm6
    vblendvps xmm0, xmm1, xmm6, xmm0
  }
  s_serverTiming.serverTimeMax = *(float *)&_XMM0;
  s_serverTiming.serverWrkTicksTotal = 0i64;
  s_serverTiming.serverWrkCount = 0;
  if ( v22 > frameDurationMs )
  {
    ++s_serverTiming.serverTimeExceedCount;
    s_serverTiming.serverTimeTotalExceed = v22 + s_serverTiming.serverTimeTotalExceed;
  }
  v26 = DVARBOOL_sv_debugTrackServerTime;
  s_serverTiming.serverTimeTarget = frameDurationMs;
  if ( DVARBOOL_sv_debugTrackServerTime )
  {
    Dvar_CheckFrontendServerThread(DVARBOOL_sv_debugTrackServerTime);
    if ( v26->current.enabled )
    {
      v27 = 0.0;
      if ( s_serverTiming.serverTimeExceedCount <= 0 )
        v28 = 0.0;
      else
        v28 = s_serverTiming.serverTimeTotalExceed / (float)s_serverTiming.serverTimeExceedCount;
      if ( s_serverTiming.serverTimeCount )
      {
        serverTimeCount = (float)s_serverTiming.serverTimeCount;
        v27 = s_serverTiming.serverTimeTotal / serverTimeCount;
      }
      LODWORD(fmt) = s_serverTiming.serverTimeCount;
      Com_Printf(0, "Server Time => [CurrentFrameTime= %0.2f], [Total= %0.2f, Count= %d, AvgTotal= %0.2f, Max= %0.2f], [ExceedTotal= %0.2f, ExceedCount= %d, AvgExceed= %0.2f] \n", v22, s_serverTiming.serverTimeTotal, fmt, v27, s_serverTiming.serverTimeMax, s_serverTiming.serverTimeTotalExceed, s_serverTiming.serverTimeExceedCount, v28);
    }
  }
}

