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
  __asm { vmovss  xmm0, cs:s_serverTiming.eventLoopFrameTime }
  return *(float *)&_XMM0;
}

/*
==============
SV_Timing_GetRunFrameTime
==============
*/
float SV_Timing_GetRunFrameTime()
{
  __asm { vmovss  xmm0, cs:s_serverTiming.serverFrameTime }
  return *(float *)&_XMM0;
}

/*
==============
SV_Timing_GetTotalFrameTime
==============
*/
float SV_Timing_GetTotalFrameTime()
{
  __asm
  {
    vmovss  xmm0, cs:s_serverTiming.eventLoopFrameTime
    vaddss  xmm1, xmm0, cs:s_serverTiming.serverFrameTime
    vaddss  xmm0, xmm1, cs:s_serverTiming.serverWkrFrameTime
  }
  return *(float *)&_XMM0;
}

/*
==============
SV_Timing_GetWorkerFrameTime
==============
*/
float SV_Timing_GetWorkerFrameTime()
{
  __asm { vmovss  xmm0, cs:s_serverTiming.serverWkrFrameTime }
  return *(float *)&_XMM0;
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

void __fastcall SV_Timing_UpdateClientMessages(const ServerTimingState *outTimingState, double _XMM1_8)
{
  signed __int64 totalTicks; 
  const dvar_t *v6; 
  char *fmt; 
  double v32; 

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
  v6 = DVARBOOL_sv_debugTrackServerTime;
  if ( DVARBOOL_sv_debugTrackServerTime )
  {
    Dvar_CheckFrontendServerThread(DVARBOOL_sv_debugTrackServerTime);
    if ( v6->current.enabled )
    {
      __asm
      {
        vmovaps [rsp+58h+var_18], xmm6
        vmovsd  xmm5, cs:?msecPerRawTimerTick@@3NA; double msecPerRawTimerTick
        vmovsd  xmm3, cs:__real@43f0000000000000
      }
      if ( s_serverTiming.clientMsgCount <= 0 )
      {
        __asm { vxorps  xmm4, xmm4, xmm4 }
      }
      else
      {
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2sd xmm0, xmm0, rax
        }
        if ( (s_serverTiming.clientMsgTicksTotal & 0x8000000000000000ui64) != 0i64 )
          __asm { vaddsd  xmm0, xmm0, xmm3 }
        __asm
        {
          vmulsd  xmm0, xmm0, xmm5
          vxorps  xmm1, xmm1, xmm1
          vcvtsd2ss xmm2, xmm0, xmm0
          vcvtsi2ss xmm1, xmm1, ecx
          vdivss  xmm4, xmm2, xmm1
        }
      }
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2sd xmm0, xmm0, rax
        vcvtss2sd xmm6, xmm4, xmm4
      }
      if ( (s_serverTiming.clientMsgTicksTotal & 0x8000000000000000ui64) != 0i64 )
        __asm { vaddsd  xmm0, xmm0, xmm3 }
      __asm
      {
        vmulsd  xmm0, xmm0, xmm5
        vcvtsd2ss xmm1, xmm0, xmm0
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2sd xmm0, xmm0, rdi
        vcvtss2sd xmm4, xmm1, xmm1
      }
      if ( totalTicks < 0 )
        __asm { vaddsd  xmm0, xmm0, xmm3 }
      __asm
      {
        vmulsd  xmm0, xmm0, xmm5
        vcvtsd2ss xmm1, xmm0, xmm0
        vcvtss2sd xmm2, xmm1, xmm1
        vmovaps xmm3, xmm4
        vmovsd  [rsp+58h+var_30], xmm6
      }
      LODWORD(fmt) = s_serverTiming.clientMsgCount;
      __asm
      {
        vmovq   r8, xmm2
        vmovq   r9, xmm3
      }
      Com_Printf(0, "Client Msg Time => [Current= %0.2f, clientMsgTotal= %0.2f, clientMsgCount= %d, clientMsgAvg= %0.2f] \n", *(double *)&_XMM2, *(double *)&_XMM3, fmt, v32);
      __asm { vmovaps xmm6, [rsp+58h+var_18] }
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

void __fastcall SV_Timing_UpdateFrame(const ServerTimingState *timingState, double frameDurationMs)
{
  bool IsServerThread; 
  bool v25; 
  bool v26; 
  const dvar_t *v30; 
  char *fmt; 
  double v50; 
  double v51; 
  double v52; 
  double v53; 

  __asm
  {
    vmovaps [rsp+78h+var_18], xmm6
    vmovaps [rsp+78h+var_28], xmm7
    vmovaps xmm7, xmm1
  }
  if ( !timingState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_timing.cpp", 240, ASSERT_TYPE_ASSERT, "( timingState )", (const char *)&queryFormat, "timingState") )
    __debugbreak();
  if ( !Sys_IsServerThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_timing.cpp", 20, ASSERT_TYPE_ASSERT, "( !UseServerSmp() || Sys_IsServerThread() )", (const char *)&queryFormat, "!UseServerSmp() || Sys_IsServerThread()") )
    __debugbreak();
  __asm
  {
    vmovsd  xmm1, cs:__real@43f0000000000000
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2sd xmm0, xmm0, rax
  }
  if ( (s_serverTiming.eventLoopFrameTicksTotal & 0x8000000000000000ui64) != 0i64 )
    __asm { vaddsd  xmm0, xmm0, xmm1 }
  __asm
  {
    vmovsd  xmm2, cs:?msecPerRawTimerTick@@3NA; double msecPerRawTimerTick
    vmulsd  xmm0, xmm0, xmm2
    vcvtsd2ss xmm4, xmm0, xmm0
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2sd xmm0, xmm0, rax
    vmovss  cs:s_serverTiming.eventLoopFrameTime, xmm4
  }
  if ( (s_serverTiming.serverWrkTicksTotal & 0x8000000000000000ui64) != 0i64 )
    __asm { vaddsd  xmm0, xmm0, xmm1 }
  __asm
  {
    vmulsd  xmm0, xmm0, xmm2
    vcvtsd2ss xmm3, xmm0, xmm0
    vmovss  cs:s_serverTiming.serverWkrFrameTime, xmm3
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2sd xmm0, xmm0, rax
  }
  if ( (timingState->totalTicks & 0x8000000000000000ui64) != 0i64 )
    __asm { vaddsd  xmm0, xmm0, xmm1 }
  ++s_serverTiming.serverTimeCount;
  __asm
  {
    vmulsd  xmm0, xmm0, xmm2
    vcvtsd2ss xmm1, xmm0, xmm0
    vmovss  cs:s_serverTiming.serverFrameTime, xmm1
    vaddss  xmm1, xmm1, xmm4
    vaddss  xmm6, xmm1, xmm3
    vaddss  xmm2, xmm6, cs:s_serverTiming.serverTimeTotal
    vmovss  cs:s_serverTiming.serverTimeTotal, xmm2
  }
  if ( !Sys_IsServerThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_timing.cpp", 20, ASSERT_TYPE_ASSERT, "( !UseServerSmp() || Sys_IsServerThread() )", (const char *)&queryFormat, "!UseServerSmp() || Sys_IsServerThread()") )
    __debugbreak();
  s_serverTiming.eventLoopFrameTicksTotal = 0i64;
  s_serverTiming.eventLoopFrameCount = 0;
  IsServerThread = Sys_IsServerThread();
  v25 = !IsServerThread;
  if ( !IsServerThread )
  {
    v26 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_timing.cpp", 20, ASSERT_TYPE_ASSERT, "( !UseServerSmp() || Sys_IsServerThread() )", (const char *)&queryFormat, "!UseServerSmp() || Sys_IsServerThread()");
    v25 = !v26;
    if ( v26 )
      __debugbreak();
  }
  __asm
  {
    vcomiss xmm6, xmm7
    vmovss  xmm1, cs:s_serverTiming.serverTimeMax
    vcmpltss xmm0, xmm1, xmm6
    vblendvps xmm0, xmm1, xmm6, xmm0
    vmovss  cs:s_serverTiming.serverTimeMax, xmm0
  }
  s_serverTiming.serverWrkTicksTotal = 0i64;
  s_serverTiming.serverWrkCount = 0;
  if ( !v25 )
  {
    __asm { vaddss  xmm1, xmm6, cs:s_serverTiming.serverTimeTotalExceed }
    ++s_serverTiming.serverTimeExceedCount;
    __asm { vmovss  cs:s_serverTiming.serverTimeTotalExceed, xmm1 }
  }
  v30 = DVARBOOL_sv_debugTrackServerTime;
  __asm { vmovss  cs:s_serverTiming.serverTimeTarget, xmm7 }
  if ( DVARBOOL_sv_debugTrackServerTime )
  {
    Dvar_CheckFrontendServerThread(DVARBOOL_sv_debugTrackServerTime);
    if ( v30->current.enabled )
    {
      __asm
      {
        vmovss  xmm2, cs:s_serverTiming.serverTimeTotalExceed
        vxorps  xmm1, xmm1, xmm1
      }
      if ( s_serverTiming.serverTimeExceedCount <= 0 )
      {
        __asm { vxorps  xmm3, xmm3, xmm3 }
      }
      else
      {
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, ecx
          vdivss  xmm3, xmm2, xmm0
        }
      }
      __asm
      {
        vmovss  xmm7, cs:s_serverTiming.serverTimeMax
        vcvtss2sd xmm4, xmm3, xmm3
        vmovss  xmm3, cs:s_serverTiming.serverTimeTotal
        vcvtss2sd xmm5, xmm2, xmm2
        vcvtss2sd xmm7, xmm7, xmm7
      }
      if ( s_serverTiming.serverTimeCount )
      {
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, rdx
          vdivss  xmm1, xmm3, xmm0
        }
      }
      __asm
      {
        vmovsd  [rsp+78h+var_30], xmm4
        vmovsd  [rsp+78h+var_40], xmm5
        vcvtss2sd xmm0, xmm1, xmm1
        vmovsd  [rsp+78h+var_48], xmm7
        vmovsd  [rsp+78h+var_50], xmm0
        vcvtss2sd xmm3, xmm3, xmm3
        vcvtss2sd xmm2, xmm6, xmm6
      }
      LODWORD(fmt) = s_serverTiming.serverTimeCount;
      __asm
      {
        vmovq   r9, xmm3
        vmovq   r8, xmm2
      }
      Com_Printf(0, "Server Time => [CurrentFrameTime= %0.2f], [Total= %0.2f, Count= %d, AvgTotal= %0.2f, Max= %0.2f], [ExceedTotal= %0.2f, ExceedCount= %d, AvgExceed= %0.2f] \n", *(double *)&_XMM2, *(double *)&_XMM3, fmt, v50, v51, v52, s_serverTiming.serverTimeExceedCount, v53);
    }
  }
  __asm
  {
    vmovaps xmm6, [rsp+78h+var_18]
    vmovaps xmm7, [rsp+78h+var_28]
  }
}

