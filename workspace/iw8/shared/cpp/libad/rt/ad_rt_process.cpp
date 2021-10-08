/*
==============
AD_ResetEventFlags
==============
*/

void __fastcall AD_ResetEventFlags(AD_Event *evt, const unsigned __int64 newState)
{
  ?AD_ResetEventFlags@@YAXPEAUAD_Event@@_K@Z(evt, newState);
}

/*
==============
AD_GetMSecDelta
==============
*/

unsigned __int64 __fastcall AD_GetMSecDelta(const AD_RawTimerValue t0, const AD_RawTimerValue t1)
{
  return ?AD_GetMSecDelta@@YA_KUAD_RawTimerValue@@0@Z(t0, t1);
}

/*
==============
AD_GetUSecDelta
==============
*/

unsigned __int64 __fastcall AD_GetUSecDelta(const AD_RawTimerValue t0, const AD_RawTimerValue t1)
{
  return ?AD_GetUSecDelta@@YA_KUAD_RawTimerValue@@0@Z(t0, t1);
}

/*
==============
AD_GetTime
==============
*/

AD_RawTimerValue __fastcall AD_GetTime()
{
  return ?AD_GetTime@@YA?AUAD_RawTimerValue@@XZ();
}

/*
==============
AD_AwaitAnyEventFlags
==============
*/

unsigned __int64 __fastcall AD_AwaitAnyEventFlags(AD_Event *evt, const unsigned __int64 flags, const unsigned int timeoutMs, const unsigned __int64 timeoutFlags)
{
  return ?AD_AwaitAnyEventFlags@@YA_KPEAUAD_Event@@_KI1@Z(evt, flags, timeoutMs, timeoutFlags);
}

/*
==============
AD_DestroyEvent
==============
*/

void __fastcall AD_DestroyEvent(AD_Event *evt)
{
  ?AD_DestroyEvent@@YAXPEAUAD_Event@@@Z(evt);
}

/*
==============
AD_ThreadInitCOM
==============
*/

void __fastcall AD_ThreadInitCOM(const AD_ThreadOptions options)
{
  ?AD_ThreadInitCOM@@YAXW4AD_ThreadOptions@@@Z(options);
}

/*
==============
AD_CreateEvent
==============
*/

AD_Event *__fastcall AD_CreateEvent(const unsigned int numFlags, const unsigned __int64 initialState, const bool manualReset)
{
  return ?AD_CreateEvent@@YAPEAUAD_Event@@I_K_N@Z(numFlags, initialState, manualReset);
}

/*
==============
AD_InterlockedIncrement
==============
*/

int __fastcall AD_InterlockedIncrement(volatile int *addend)
{
  return ?AD_InterlockedIncrement@@YAHAECJ@Z(addend);
}

/*
==============
AD_InterlockedExchange
==============
*/

int __fastcall AD_InterlockedExchange(volatile int *destination, const int value)
{
  return ?AD_InterlockedExchange@@YAHAECJJ@Z(destination, value);
}

/*
==============
AD_InterlockedAdd
==============
*/

int __fastcall AD_InterlockedAdd(volatile int *addend, const int val)
{
  return ?AD_InterlockedAdd@@YAHAECJJ@Z(addend, val);
}

/*
==============
AD_ProcessInit
==============
*/

void __fastcall AD_ProcessInit(const AD_RT_Options *const options)
{
  ?AD_ProcessInit@@YAXQEBUAD_RT_Options@@@Z(options);
}

/*
==============
AD_AwaitAllEventFlags
==============
*/

unsigned __int64 __fastcall AD_AwaitAllEventFlags(AD_Event *evt, const unsigned __int64 flags, const unsigned int timeoutMs, const unsigned __int64 timeoutFlags)
{
  return ?AD_AwaitAllEventFlags@@YA_KPEAUAD_Event@@_KI1@Z(evt, flags, timeoutMs, timeoutFlags);
}

/*
==============
AD_Sleep
==============
*/

void __stdcall AD_Sleep(DWORD dwMilliseconds)
{
  ?AD_Sleep@@YAXH@Z(dwMilliseconds);
}

/*
==============
AD_InterlockedCompareExchange
==============
*/

int __fastcall AD_InterlockedCompareExchange(volatile int *destination, const int value, const int comperand)
{
  return ?AD_InterlockedCompareExchange@@YAHAECJJJ@Z(destination, value, comperand);
}

/*
==============
AD_GetUSec
==============
*/

unsigned __int64 __fastcall AD_GetUSec(const AD_RawTimerValue t)
{
  return ?AD_GetUSec@@YA_KUAD_RawTimerValue@@@Z(t);
}

/*
==============
AD_SignalEventFlags
==============
*/

void __fastcall AD_SignalEventFlags(AD_Event *evt, const unsigned __int64 flags)
{
  ?AD_SignalEventFlags@@YAXPEAUAD_Event@@_K@Z(evt, flags);
}

/*
==============
AD_GetTimeUSec
==============
*/

unsigned __int64 __fastcall AD_GetTimeUSec()
{
  return ?AD_GetTimeUSec@@YA_KXZ();
}

/*
==============
AD_ProcessDestroy
==============
*/

void AD_ProcessDestroy(void)
{
  ?AD_ProcessDestroy@@YAXXZ();
}

/*
==============
AD_ThreadDestroyCOM
==============
*/

void __fastcall AD_ThreadDestroyCOM(const AD_ThreadOptions options)
{
  ?AD_ThreadDestroyCOM@@YAXW4AD_ThreadOptions@@@Z(options);
}

/*
==============
AD_GetMSec
==============
*/

unsigned __int64 __fastcall AD_GetMSec(const AD_RawTimerValue t)
{
  return ?AD_GetMSec@@YA_KUAD_RawTimerValue@@@Z(t);
}

/*
==============
AD_InterlockedSubtract
==============
*/

int __fastcall AD_InterlockedSubtract(volatile int *addend, const int val)
{
  return ?AD_InterlockedSubtract@@YAHAECJJ@Z(addend, val);
}

/*
==============
AD_TerminateThread
==============
*/

void __fastcall AD_TerminateThread(AD_ThreadContext *const target)
{
  ?AD_TerminateThread@@YAXQEAUAD_ThreadContext@@@Z(target);
}

/*
==============
AD_CleanupThread
==============
*/

void __fastcall AD_CleanupThread(AD_ThreadContext *const target)
{
  ?AD_CleanupThread@@YAXQEAUAD_ThreadContext@@@Z(target);
}

/*
==============
AD_GetSampleDelta
==============
*/

unsigned __int64 __fastcall AD_GetSampleDelta(const unsigned __int64 rate, const AD_RawTimerValue t0, const AD_RawTimerValue t1)
{
  return ?AD_GetSampleDelta@@YA_K_KUAD_RawTimerValue@@1@Z(rate, t0, t1);
}

/*
==============
AD_GetEventHandleForFlag
==============
*/

void *__fastcall AD_GetEventHandleForFlag(AD_Event *const evt, const unsigned int flagIndex)
{
  return ?AD_GetEventHandleForFlag@@YAPEAXQEAUAD_Event@@I@Z(evt, flagIndex);
}

/*
==============
AD_GetTimeMSec
==============
*/

unsigned __int64 __fastcall AD_GetTimeMSec()
{
  return ?AD_GetTimeMSec@@YA_KXZ();
}

/*
==============
AD_BuildHandleArrayFromFlags
==============
*/

unsigned int __fastcall AD_BuildHandleArrayFromFlags(const unsigned int numFlags, void *const *srcFlagsAry, const unsigned __int64 flags, void **awaitFlagsAry, unsigned int *awaitIndexesAry)
{
  return ?AD_BuildHandleArrayFromFlags@@YAIIPEBQEAX_KPEAPEAXPEAI@Z(numFlags, srcFlagsAry, flags, awaitFlagsAry, awaitIndexesAry);
}

/*
==============
AD_InterlockedDecrement
==============
*/

int __fastcall AD_InterlockedDecrement(volatile int *addend)
{
  return ?AD_InterlockedDecrement@@YAHAECJ@Z(addend);
}

/*
==============
AD_TimeInit
==============
*/

void AD_TimeInit(void)
{
  ?AD_TimeInit@@YAXXZ();
}

/*
==============
AD_SpawnThread
==============
*/

void __fastcall AD_SpawnThread(AD_ThreadContext *const target)
{
  ?AD_SpawnThread@@YAXQEAUAD_ThreadContext@@@Z(target);
}

/*
==============
AD_InitThread
==============
*/

AD_ThreadContext *__fastcall AD_InitThread(const AD_Thread::Name threadName, void *const payload, const int arg, void (__fastcall *threadFunc)(void *const, const int), void (__fastcall *threadTerminator)(void *const, const int), const AD_Thread::Priority threadPriority, const AD_Thread::CPUAffinity threadCPUAffinity, const AD_ThreadOptions opts)
{
  return ?AD_InitThread@@YAPEAUAD_ThreadContext@@W4Name@AD_Thread@@QEAXHP6AX1H@Z2W4Priority@3@W4CPUAffinity@3@W4AD_ThreadOptions@@@Z(threadName, payload, arg, threadFunc, threadTerminator, threadPriority, threadCPUAffinity, opts);
}

/*
==============
AD_ActualThreadMain
==============
*/
void AD_ActualThreadMain(void *const userData)
{
  int v2; 
  DWORD v3; 
  HRESULT v4; 
  const char *v5; 
  char *fmt; 
  __int64 v7; 

  if ( !userData && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_process.cpp", 690, ASSERT_TYPE_ASSERT, "userData", "userData") )
    __debugbreak();
  Sleep(1u);
  v2 = *((_DWORD *)userData + 5);
  if ( (unsigned int)(v2 - 1) <= 1 )
  {
    v3 = 0;
    if ( v2 == 2 )
      v3 = 2;
    v4 = CoInitializeEx(NULL, v3);
    if ( (int)(v4 + 0x80000000) >= 0 && v4 != -2147417850 )
    {
      if ( v4 == -2147024882 )
      {
        LODWORD(fmt) = -2147024882;
        AD_LogFuncf("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_process.cpp", "666", (const AD_LogCategory)5, "CoInitialize( NULL, %s ) failed. hr=%d\n", fmt, v7);
      }
      else
      {
        v5 = "COINIT_MULTITHREADED";
        if ( v2 == 2 )
          v5 = "COINIT_APARTMENTTHREADED";
        AD_LogFuncf("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_process.cpp", "671", (const AD_LogCategory)5, "CoInitialize( NULL, %s ) failed. hr=%d\n", v5, v4);
      }
      if ( (unsigned int)AD_GetLogBreakLevel() <= 5 )
        __debugbreak();
    }
  }
  if ( !*((_QWORD *)userData + 6) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_process.cpp", 701, ASSERT_TYPE_ASSERT, "target->func != nullptr", "target->func != nullptr") )
    __debugbreak();
  (*((void (__fastcall **)(_QWORD, _QWORD))userData + 6))(*((_QWORD *)userData + 4), *((unsigned int *)userData + 10));
  if ( (unsigned int)(*((_DWORD *)userData + 5) - 1) <= 1 )
    CoUninitialize();
  _endthreadex(0);
}

/*
==============
AD_AwaitAllEventFlags
==============
*/
unsigned __int64 AD_AwaitAllEventFlags(AD_Event *evt, const unsigned __int64 flags, const unsigned int timeoutMs, const unsigned __int64 timeoutFlags)
{
  DWORD v8; 
  DWORD v9; 
  unsigned int awaitIndexesAry[64]; 
  void *awaitFlagsAry[64]; 

  if ( !evt && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_process.cpp", 554, ASSERT_TYPE_ASSERT, "evt", "evt") )
    __debugbreak();
  if ( !flags && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_process.cpp", 555, ASSERT_TYPE_ASSERT, "flags != 0", "flags != 0") )
    __debugbreak();
  v8 = AD_BuildHandleArrayFromFlags(evt->numFlags, evt->eventHandle, flags, awaitFlagsAry, awaitIndexesAry);
  if ( v8 )
  {
    if ( timeoutMs == -1 )
      timeoutMs = -1;
    v9 = WaitForMultipleObjectsEx(v8, awaitFlagsAry, 1, timeoutMs, 0);
    if ( v9 == 258 )
    {
      return timeoutFlags;
    }
    else
    {
      if ( v9 >= v8 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_process.cpp", 598, ASSERT_TYPE_ASSERT, "waitResult < ((((DWORD )0x00000000L) ) + 0 ) + numAwaitFlags", "waitResult < WAIT_OBJECT_0 + numAwaitFlags") )
        __debugbreak();
      return flags;
    }
  }
  else
  {
    if ( flags && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_process.cpp", 605, ASSERT_TYPE_ASSERT, "result == flags", "result == flags") )
      __debugbreak();
    return 0i64;
  }
}

/*
==============
AD_AwaitAnyEventFlags
==============
*/
unsigned __int64 AD_AwaitAnyEventFlags(AD_Event *evt, const unsigned __int64 flags, const unsigned int timeoutMs, const unsigned __int64 timeoutFlags)
{
  __int64 v4; 
  AD_Event *v8; 
  void **eventHandle; 
  __int64 v10; 
  DWORD v11; 
  DWORD v12; 
  unsigned int numFlags; 
  __int64 v15; 
  unsigned int v16; 
  unsigned int v17; 
  void **v18; 
  __int64 v19; 
  void **v20; 
  unsigned int awaitIndexesAry[64]; 
  HANDLE awaitFlagsAry[64]; 

  v4 = 0i64;
  v8 = evt;
  if ( !evt && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_process.cpp", 474, ASSERT_TYPE_ASSERT, "evt", "evt") )
    __debugbreak();
  if ( !flags && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_process.cpp", 475, ASSERT_TYPE_ASSERT, "flags != 0", "flags != 0") )
    __debugbreak();
  eventHandle = v8->eventHandle;
  v20 = v8->eventHandle;
  LODWORD(v10) = AD_BuildHandleArrayFromFlags(v8->numFlags, v8->eventHandle, flags, awaitFlagsAry, awaitIndexesAry);
  if ( (_DWORD)v10 )
  {
    if ( timeoutMs == -1 )
      timeoutMs = -1;
    v11 = WaitForMultipleObjectsEx(v10, awaitFlagsAry, 0, timeoutMs, 0);
    v12 = v11;
    if ( v11 == 258 )
      return timeoutFlags;
    if ( v11 >= (unsigned int)v10 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_process.cpp", 518, ASSERT_TYPE_ASSERT, "waitResult < ((((DWORD )0x00000000L) ) + 0 ) + numAwaitFlags", "waitResult < WAIT_OBJECT_0 + numAwaitFlags") )
      __debugbreak();
    while ( v12 < (unsigned int)v10 )
    {
      numFlags = v8->numFlags;
      v10 = 0i64;
      v15 = v12;
      v16 = 0;
      v17 = awaitIndexesAry[v15];
      v4 |= 1i64 << v17;
      flags &= ~(1i64 << v17);
      if ( numFlags )
      {
        v18 = eventHandle;
        v19 = 1i64;
        do
        {
          if ( !*v18 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_process.cpp", 454, ASSERT_TYPE_ASSERT, "srcFlagsAry[i] != nullptr", "srcFlagsAry[i] != nullptr") )
            __debugbreak();
          if ( v16 >= 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_event.h", 26, ASSERT_TYPE_ASSERT, "bit < AD_MaxEventFlags", "bit < AD_MaxEventFlags") )
            __debugbreak();
          if ( (v19 & flags) != 0 )
          {
            awaitFlagsAry[v10] = *v18;
            awaitIndexesAry[v10] = v16;
            v10 = (unsigned int)(v10 + 1);
          }
          ++v16;
          v19 = __ROL8__(v19, 1);
          ++v18;
        }
        while ( v16 < numFlags );
        eventHandle = v20;
        v8 = evt;
      }
      if ( !(_DWORD)v10 )
        break;
      v12 = WaitForMultipleObjectsEx(v10, awaitFlagsAry, 0, 0, 0);
    }
  }
  return v4;
}

/*
==============
AD_BuildHandleArrayFromFlags
==============
*/
__int64 AD_BuildHandleArrayFromFlags(const unsigned int numFlags, void *const *srcFlagsAry, const unsigned __int64 flags, void **awaitFlagsAry, unsigned int *awaitIndexesAry)
{
  __int64 v5; 
  unsigned int v10; 
  __int64 v11; 

  v5 = 0i64;
  v10 = 0;
  if ( numFlags )
  {
    v11 = 1i64;
    do
    {
      if ( !*srcFlagsAry && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_process.cpp", 454, ASSERT_TYPE_ASSERT, "srcFlagsAry[i] != nullptr", "srcFlagsAry[i] != nullptr") )
        __debugbreak();
      if ( v10 >= 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_event.h", 26, ASSERT_TYPE_ASSERT, "bit < AD_MaxEventFlags", "bit < AD_MaxEventFlags") )
        __debugbreak();
      if ( (v11 & flags) != 0 )
      {
        awaitFlagsAry[v5] = *srcFlagsAry;
        awaitIndexesAry[v5] = v10;
        v5 = (unsigned int)(v5 + 1);
      }
      ++v10;
      v11 = __ROL8__(v11, 1);
      ++srcFlagsAry;
    }
    while ( v10 < numFlags );
  }
  return (unsigned int)v5;
}

/*
==============
AD_CleanupThread
==============
*/
void AD_CleanupThread(AD_ThreadContext *const target)
{
  void *threadHandle; 

  if ( !target && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_process.cpp", 785, ASSERT_TYPE_ASSERT, "target", "target") )
    __debugbreak();
  if ( s_cleanupExternalThread )
  {
    if ( !s_spawnExternalThread && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_process.cpp", 789, ASSERT_TYPE_ASSERT, "s_spawnExternalThread != nullptr", "s_spawnExternalThread != nullptr") )
      __debugbreak();
    s_cleanupExternalThread((const AD_Thread::Name)target->threadName);
  }
  threadHandle = target->threadHandle;
  if ( threadHandle )
  {
    WaitForSingleObject(threadHandle, 0xFFFFFFFF);
    target->threadHandle = NULL;
  }
  if ( target->next && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_containers.h", 299, ASSERT_TYPE_ASSERT, "!evt->next", "!evt->next") )
    __debugbreak();
  target->next = NULL;
  target->threadHandle = NULL;
  *(_QWORD *)&target->threadID = 0i64;
  *(_QWORD *)&target->priority = 0i64;
  target->payload = NULL;
  *(_QWORD *)&target->arg = 0i64;
  target->func = NULL;
  target->terminateFunc = NULL;
  *(_QWORD *)&target->threadName = 0i64;
  target->next = s_threadContextPool.m_firstFree;
  s_threadContextPool.m_firstFree = target;
}

/*
==============
AD_CreateEvent
==============
*/
AD_Event *AD_CreateEvent(const unsigned int numFlags, const unsigned __int64 initialState, const bool manualReset)
{
  AD_Event *m_firstFree; 
  unsigned int v7; 
  __int64 v8; 
  BOOL v9; 
  void **eventHandle; 
  HANDLE Event; 
  AD_Event *v13; 

  if ( numFlags > 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_process.cpp", 319, ASSERT_TYPE_ASSERT, "numFlags <= AD_MaxEventFlags", "numFlags <= AD_MaxEventFlags") )
    __debugbreak();
  m_firstFree = s_eventPool.m_firstFree;
  v7 = 0;
  v13 = s_eventPool.m_firstFree;
  if ( s_eventPool.m_firstFree )
  {
    s_eventPool.m_firstFree = s_eventPool.m_firstFree->next;
    m_firstFree->next = NULL;
  }
  else if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_process.cpp", 326, ASSERT_TYPE_ASSERT, "evt", "evt") )
  {
    __debugbreak();
  }
  m_firstFree->numFlags = numFlags;
  m_firstFree->manualReset = manualReset;
  if ( !numFlags )
    return m_firstFree;
  v8 = 1i64;
  v9 = manualReset;
  eventHandle = m_firstFree->eventHandle;
  do
  {
    if ( v7 >= 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_event.h", 26, ASSERT_TYPE_ASSERT, "bit < AD_MaxEventFlags", "bit < AD_MaxEventFlags") )
      __debugbreak();
    Event = CreateEventExW(NULL, NULL, v9 | ((initialState & v8) != 0 ? 2 : 0), 0x100002u);
    *eventHandle = Event;
    if ( !Event && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_process.cpp", 351, ASSERT_TYPE_ASSERT, "evt->eventHandle[i] != nullptr", "evt->eventHandle[i] != nullptr") )
      __debugbreak();
    ++v7;
    v8 = __ROL8__(v8, 1);
    ++eventHandle;
  }
  while ( v7 < numFlags );
  return v13;
}

/*
==============
AD_DestroyEvent
==============
*/
void AD_DestroyEvent(AD_Event *evt)
{
  unsigned int i; 
  void **v3; 

  if ( !evt && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_process.cpp", 361, ASSERT_TYPE_ASSERT, "evt", "evt") )
    __debugbreak();
  for ( i = 0; i < evt->numFlags; *v3 = NULL )
  {
    v3 = &evt->eventHandle[i];
    if ( !*v3 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_process.cpp", 374, ASSERT_TYPE_ASSERT, "evt->eventHandle[i] != nullptr", "evt->eventHandle[i] != nullptr") )
      __debugbreak();
    if ( !CloseHandle(*v3) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_process.cpp", 377, ASSERT_TYPE_ASSERT, "( CloseHandle( evt->eventHandle[i] ) ) != ( 0 )", "( CloseHandle( evt->eventHandle[i] ) ) != ( 0 )") )
      __debugbreak();
    ++i;
  }
  if ( evt->next && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_containers.h", 299, ASSERT_TYPE_ASSERT, "!evt->next", "!evt->next") )
    __debugbreak();
  memset_0(evt, 0, sizeof(AD_Event));
  evt->next = s_eventPool.m_firstFree;
  s_eventPool.m_firstFree = evt;
}

/*
==============
AD_GetEventHandleForFlag
==============
*/
void *AD_GetEventHandleForFlag(AD_Event *const evt, const unsigned int flagIndex)
{
  __int64 v2; 

  v2 = flagIndex;
  if ( !evt && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_process.cpp", 613, ASSERT_TYPE_ASSERT, "evt", "evt") )
    __debugbreak();
  if ( (unsigned int)v2 >= 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_process.cpp", 614, ASSERT_TYPE_ASSERT, "flagIndex < AD_MaxEventFlags", "flagIndex < AD_MaxEventFlags") )
    __debugbreak();
  return evt->eventHandle[v2];
}

/*
==============
AD_GetMSec
==============
*/
unsigned __int64 AD_GetMSec(const AD_RawTimerValue t)
{
  return 1000 * t.v / AD_TimerFrequency;
}

/*
==============
AD_GetMSecDelta
==============
*/
unsigned __int64 AD_GetMSecDelta(const AD_RawTimerValue t0, const AD_RawTimerValue t1)
{
  if ( t1.v <= t0.v )
    return 0i64;
  else
    return 1000 * (t1.v - t0.v) / AD_TimerFrequency;
}

/*
==============
AD_GetSampleDelta
==============
*/
unsigned __int64 AD_GetSampleDelta(const unsigned __int64 rate, const AD_RawTimerValue t0, const AD_RawTimerValue t1)
{
  if ( t1.v <= t0.v )
    return 0i64;
  else
    return rate * (t1.v - t0.v) / AD_TimerFrequency;
}

/*
==============
AD_GetTime
==============
*/
AD_RawTimerValue AD_GetTime()
{
  LARGE_INTEGER PerformanceCount; 

  QueryPerformanceCounter(&PerformanceCount);
  return (AD_RawTimerValue)PerformanceCount.QuadPart;
}

/*
==============
AD_GetTimeMSec
==============
*/
unsigned __int64 AD_GetTimeMSec()
{
  LARGE_INTEGER PerformanceCount; 

  QueryPerformanceCounter(&PerformanceCount);
  return 1000 * PerformanceCount.QuadPart / AD_TimerFrequency;
}

/*
==============
AD_GetTimeUSec
==============
*/
unsigned __int64 AD_GetTimeUSec()
{
  LARGE_INTEGER PerformanceCount; 

  QueryPerformanceCounter(&PerformanceCount);
  return 1000000 * PerformanceCount.QuadPart / AD_TimerFrequency;
}

/*
==============
AD_GetUSec
==============
*/
unsigned __int64 AD_GetUSec(const AD_RawTimerValue t)
{
  return 1000000 * t.v / AD_TimerFrequency;
}

/*
==============
AD_GetUSecDelta
==============
*/
unsigned __int64 AD_GetUSecDelta(const AD_RawTimerValue t0, const AD_RawTimerValue t1)
{
  if ( t1.v <= t0.v )
    return 0i64;
  else
    return 1000000 * (t1.v - t0.v) / AD_TimerFrequency;
}

/*
==============
AD_InitThread
==============
*/
AD_ThreadContext *AD_InitThread(const AD_Thread::Name threadName, void *const payload, const int arg, void (*threadFunc)(void *const, const int), void (*threadTerminator)(void *const, const int), const AD_Thread::Priority threadPriority, const AD_Thread::CPUAffinity threadCPUAffinity, const AD_ThreadOptions opts)
{
  AD_ThreadContext *m_firstFree; 
  AD_ThreadContext *result; 

  m_firstFree = s_threadContextPool.m_firstFree;
  if ( s_threadContextPool.m_firstFree )
  {
    s_threadContextPool.m_firstFree = s_threadContextPool.m_firstFree->next;
    m_firstFree->priority = threadPriority;
    m_firstFree->next = NULL;
    m_firstFree->threadHandle = NULL;
    m_firstFree->threadID = 0;
    result = m_firstFree;
    m_firstFree->terminateFunc = threadTerminator;
    m_firstFree->options = opts;
    m_firstFree->cpuAffinity = threadCPUAffinity;
    m_firstFree->payload = payload;
    m_firstFree->arg = arg;
    m_firstFree->func = threadFunc;
    m_firstFree->threadName = threadName;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_process.cpp", 630, ASSERT_TYPE_ASSERT, "context", "context") )
      __debugbreak();
    return m_firstFree;
  }
  return result;
}

/*
==============
AD_InterlockedAdd
==============
*/
__int64 AD_InterlockedAdd(volatile int *addend, const int val)
{
  return (unsigned int)(val + _InterlockedExchangeAdd(addend, val));
}

/*
==============
AD_InterlockedCompareExchange
==============
*/
__int64 AD_InterlockedCompareExchange(volatile int *destination, const int value, const int comperand)
{
  return (unsigned int)_InterlockedCompareExchange(destination, value, comperand);
}

/*
==============
AD_InterlockedDecrement
==============
*/
__int64 AD_InterlockedDecrement(volatile int *addend)
{
  return (unsigned int)_InterlockedDecrement(addend);
}

/*
==============
AD_InterlockedExchange
==============
*/
__int64 AD_InterlockedExchange(volatile int *destination, const int value)
{
  return (unsigned int)_InterlockedExchange(destination, value);
}

/*
==============
AD_InterlockedIncrement
==============
*/
__int64 AD_InterlockedIncrement(volatile int *addend)
{
  return (unsigned int)_InterlockedIncrement(addend);
}

/*
==============
AD_InterlockedSubtract
==============
*/
__int64 AD_InterlockedSubtract(volatile int *addend, const int val)
{
  return (unsigned int)(_InterlockedExchangeAdd(addend, -val) - val);
}

/*
==============
AD_NativeThreadMain
==============
*/
__int64 AD_NativeThreadMain(void *userData)
{
  AD_ActualThreadMain(userData);
  return 0i64;
}

/*
==============
AD_ProcessDestroy
==============
*/
void AD_ProcessDestroy(void)
{
  s_spawnExternalThread = NULL;
  s_cleanupExternalThread = NULL;
}

/*
==============
AD_ProcessInit
==============
*/
void AD_ProcessInit(const AD_RT_Options *const options)
{
  LARGE_INTEGER Frequency; 

  s_spawnExternalThread = options->externalSpawnThread;
  s_cleanupExternalThread = options->externalCleanupThread;
  QueryPerformanceFrequency(&Frequency);
  AD_TimerFrequency = Frequency.QuadPart;
  s_threadContextPool.m_firstFree = s_threadContextPool.m_objectPool;
  memset_0(s_threadContextPool.m_objectPool, 0, sizeof(s_threadContextPool.m_objectPool));
  s_threadContextPool.m_objectPool[0].next = &s_threadContextPool.m_objectPool[1];
  s_eventPool.m_firstFree = s_eventPool.m_objectPool;
  memset_0(s_eventPool.m_objectPool, 0, sizeof(s_eventPool.m_objectPool));
  s_eventPool.m_objectPool[0].next = &s_eventPool.m_objectPool[1];
  s_eventPool.m_objectPool[1].next = &s_eventPool.m_objectPool[2];
  s_eventPool.m_objectPool[2].next = &s_eventPool.m_objectPool[3];
  s_eventPool.m_objectPool[3].next = &s_eventPool.m_objectPool[4];
  s_eventPool.m_objectPool[4].next = &s_eventPool.m_objectPool[5];
  s_eventPool.m_objectPool[5].next = &s_eventPool.m_objectPool[6];
  s_eventPool.m_objectPool[6].next = &s_eventPool.m_objectPool[7];
  s_eventPool.m_objectPool[7].next = &s_eventPool.m_objectPool[8];
  s_eventPool.m_objectPool[8].next = &s_eventPool.m_objectPool[9];
  s_eventPool.m_objectPool[9].next = &s_eventPool.m_objectPool[10];
  s_eventPool.m_objectPool[10].next = &s_eventPool.m_objectPool[11];
  s_eventPool.m_objectPool[11].next = &s_eventPool.m_objectPool[12];
  s_eventPool.m_objectPool[12].next = &s_eventPool.m_objectPool[13];
  s_eventPool.m_objectPool[13].next = &s_eventPool.m_objectPool[14];
  s_eventPool.m_objectPool[14].next = &s_eventPool.m_objectPool[15];
}

/*
==============
AD_ResetEventFlags
==============
*/
void AD_ResetEventFlags(AD_Event *evt, const unsigned __int64 newState)
{
  __int64 i; 

  if ( !evt && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_process.cpp", 421, ASSERT_TYPE_ASSERT, "evt", "evt") )
    __debugbreak();
  for ( i = 0i64; (unsigned int)i < evt->numFlags; i = (unsigned int)(i + 1) )
  {
    if ( !evt->eventHandle[i] && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_process.cpp", 433, ASSERT_TYPE_ASSERT, "evt->eventHandle[i] != nullptr", "evt->eventHandle[i] != nullptr") )
      __debugbreak();
    if ( (unsigned int)i >= 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_event.h", 26, ASSERT_TYPE_ASSERT, "bit < AD_MaxEventFlags", "bit < AD_MaxEventFlags") )
      __debugbreak();
    if ( !_bittest64((const __int64 *)&newState, (unsigned int)i) && !ResetEvent(evt->eventHandle[i]) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_process.cpp", 440, ASSERT_TYPE_ASSERT, "( ResetEvent( evt->eventHandle[i] ) ) != ( 0 )", "( ResetEvent( evt->eventHandle[i] ) ) != ( 0 )") )
      __debugbreak();
  }
}

/*
==============
AD_SignalEventFlags
==============
*/
void AD_SignalEventFlags(AD_Event *evt, const unsigned __int64 flags)
{
  __int64 i; 

  if ( !evt && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_process.cpp", 393, ASSERT_TYPE_ASSERT, "evt", "evt") )
    __debugbreak();
  for ( i = 0i64; (unsigned int)i < evt->numFlags; i = (unsigned int)(i + 1) )
  {
    if ( !evt->eventHandle[i] && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_process.cpp", 405, ASSERT_TYPE_ASSERT, "evt->eventHandle[i] != nullptr", "evt->eventHandle[i] != nullptr") )
      __debugbreak();
    if ( (unsigned int)i >= 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_event.h", 26, ASSERT_TYPE_ASSERT, "bit < AD_MaxEventFlags", "bit < AD_MaxEventFlags") )
      __debugbreak();
    if ( _bittest64((const __int64 *)&flags, (unsigned int)i) && !SetEvent(evt->eventHandle[i]) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_process.cpp", 412, ASSERT_TYPE_ASSERT, "( SetEvent( evt->eventHandle[i] ) ) != ( 0 )", "( SetEvent( evt->eventHandle[i] ) ) != ( 0 )") )
      __debugbreak();
  }
}

/*
==============
AD_Sleep
==============
*/

void __stdcall AD_Sleep(DWORD dwMilliseconds)
{
  Sleep(dwMilliseconds);
}

/*
==============
AD_SpawnThread
==============
*/
void AD_SpawnThread(AD_ThreadContext *const target)
{
  void *v2; 

  if ( !target && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_process.cpp", 730, ASSERT_TYPE_ASSERT, "target", "target") )
    __debugbreak();
  if ( s_spawnExternalThread )
  {
    if ( !s_cleanupExternalThread && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_process.cpp", 734, ASSERT_TYPE_ASSERT, "s_cleanupExternalThread != nullptr", "s_cleanupExternalThread != nullptr") )
      __debugbreak();
    target->threadHandle = s_spawnExternalThread((const AD_Thread::Name)target->threadName, AD_ActualThreadMain, target);
  }
  else
  {
    v2 = (void *)_beginthreadex(NULL, 0, (_beginthreadex_proc_type)AD_NativeThreadMain, target, 0, &target->threadID);
    target->threadHandle = v2;
    if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_process.cpp", 750, ASSERT_TYPE_ASSERT, "target->threadHandle != nullptr", "target->threadHandle != nullptr") )
      __debugbreak();
  }
}

/*
==============
AD_TerminateThread
==============
*/
void AD_TerminateThread(AD_ThreadContext *const target)
{
  if ( !target && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_process.cpp", 777, ASSERT_TYPE_ASSERT, "target", "target") )
    __debugbreak();
  if ( !target->terminateFunc && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_process.cpp", 778, ASSERT_TYPE_ASSERT, "target->terminateFunc", "target->terminateFunc") )
    __debugbreak();
  target->terminateFunc(target->payload, target->arg);
}

/*
==============
AD_ThreadDestroyCOM
==============
*/
void AD_ThreadDestroyCOM(const AD_ThreadOptions options)
{
  if ( (unsigned int)(options - 1) <= 1 )
    CoUninitialize();
}

/*
==============
AD_ThreadInitCOM
==============
*/
void AD_ThreadInitCOM(const AD_ThreadOptions options)
{
  DWORD v2; 
  HRESULT v3; 
  const char *v4; 
  __int64 v5; 

  if ( (unsigned int)(options - 1) <= 1 )
  {
    v2 = 0;
    if ( options == 2 )
      v2 = 2;
    v3 = CoInitializeEx(NULL, v2);
    if ( (int)(v3 + 0x80000000) >= 0 && v3 != -2147417850 )
    {
      if ( v3 == -2147024882 )
      {
        AD_LogFuncf("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_process.cpp", "666", (const AD_LogCategory)5, "CoInitialize( NULL, %s ) failed. hr=%d\n", -2147024882, v5);
      }
      else
      {
        v4 = "COINIT_MULTITHREADED";
        if ( options == 2 )
          v4 = "COINIT_APARTMENTTHREADED";
        AD_LogFuncf("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_process.cpp", "671", (const AD_LogCategory)5, "CoInitialize( NULL, %s ) failed. hr=%d\n", v4, v3);
      }
      if ( (unsigned int)AD_GetLogBreakLevel() <= 5 )
        __debugbreak();
    }
  }
}

/*
==============
AD_TimeInit
==============
*/
void AD_TimeInit(void)
{
  LARGE_INTEGER Frequency; 

  QueryPerformanceFrequency(&Frequency);
  AD_TimerFrequency = Frequency.QuadPart;
}

