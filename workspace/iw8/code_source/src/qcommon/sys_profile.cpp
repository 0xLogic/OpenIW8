/*
==============
Sys_ProfSetMarker
==============
*/

void __fastcall Sys_ProfSetMarker(const unsigned int color, const char *str)
{
  ?Sys_ProfSetMarker@@YAXIPEBD@Z(color, str);
}

/*
==============
Sys_ProfFrameSync
==============
*/

void Sys_ProfFrameSync(void)
{
  ?Sys_ProfFrameSync@@YAXXZ();
}

/*
==============
Sys_ProfEndNamedEvent
==============
*/

void Sys_ProfEndNamedEvent(void)
{
  ?Sys_ProfEndNamedEvent@@YAXXZ();
}

/*
==============
Sys_ProfIsCapturingInstrumented
==============
*/

bool __fastcall Sys_ProfIsCapturingInstrumented()
{
  return ?Sys_ProfIsCapturingInstrumented@@YA_NXZ();
}

/*
==============
Sys_ProfIsCapturing
==============
*/

bool __fastcall Sys_ProfIsCapturing()
{
  return ?Sys_ProfIsCapturing@@YA_NXZ();
}

/*
==============
Sys_ProfBeginNamedEvent
==============
*/

void __fastcall Sys_ProfBeginNamedEvent(const unsigned int color, const char *str)
{
  ?Sys_ProfBeginNamedEvent@@YAXIPEBD@Z(color, str);
}

/*
==============
Sys_ProfBeginNamedEvent
==============
*/
void Sys_ProfBeginNamedEvent(const unsigned int color, const char *str)
{
  struct _TEB *v2; 
  unsigned __int64 *v5; 
  unsigned __int64 *v6; 
  unsigned __int64 *v7; 
  ThreadContext CurrentThreadContext; 
  unsigned __int64 *destination; 

  v2 = NtCurrentTeb();
  v5 = (unsigned __int64 *)v2->Reserved2[72];
  v6 = (unsigned __int64 *)v2->Reserved2[71];
  if ( v5 >= v6 )
  {
    if ( v6 )
      PIXBeginEventAllocate(color, str);
  }
  else
  {
    *v5 = (__rdtsc() << 20) | 0x800;
    v5[1] = color;
    destination = v5 + 2;
    PIXCopyEventArgument<char const *>(&destination, v6 + 62, str);
    v7 = destination;
    *destination = 1048448i64;
    v2->Reserved2[72] = v7;
  }
  if ( Sys_TLSInitialized() )
  {
    if ( Sys_HasValidCurrentThreadContext() )
      CurrentThreadContext = Sys_GetCurrentThreadContext();
    else
      CurrentThreadContext = THREAD_CONTEXT_COUNT;
    CPUTimelineProfiler::BeginSample(&g_cpuProfiler, CurrentThreadContext, -1, str, color);
  }
}

/*
==============
Sys_ProfEndNamedEvent
==============
*/
void Sys_ProfEndNamedEvent(void)
{
  struct _TEB *v0; 
  _QWORD *v1; 
  _QWORD *v2; 
  unsigned __int64 v3; 
  _QWORD *v4; 
  ThreadContext CurrentThreadContext; 

  v0 = NtCurrentTeb();
  v1 = v0->Reserved2[72];
  v2 = v0->Reserved2[71];
  if ( v1 >= v2 )
  {
    if ( v2 )
      PIXEndEventAllocate();
  }
  else
  {
    v3 = __rdtsc();
    *v1 = (((unsigned __int64)HIDWORD(v3) << 32) | (unsigned int)v3) << 20;
    v4 = v1 + 1;
    *v4 = 1048448i64;
    v0->Reserved2[72] = v4;
  }
  if ( Sys_TLSInitialized() )
  {
    if ( Sys_HasValidCurrentThreadContext() )
    {
      CurrentThreadContext = Sys_GetCurrentThreadContext();
      CPUTimelineProfiler::EndSample(&g_cpuProfiler, CurrentThreadContext);
    }
    else
    {
      CPUTimelineProfiler::EndSample(&g_cpuProfiler, THREAD_CONTEXT_COUNT);
    }
  }
}

/*
==============
Sys_ProfFrameSync
==============
*/
void Sys_ProfFrameSync(void)
{
  ;
}

/*
==============
Sys_ProfIsCapturing
==============
*/
bool Sys_ProfIsCapturing()
{
  return (PIXGetCaptureState_0() & 0x7D) != 0;
}

/*
==============
Sys_ProfIsCapturingInstrumented
==============
*/
bool Sys_ProfIsCapturingInstrumented()
{
  return (PIXGetCaptureState_0() & 0x3C) != 0;
}

/*
==============
Sys_ProfSetMarker
==============
*/
void Sys_ProfSetMarker(const unsigned int color, const char *str)
{
  struct _TEB *v2; 
  unsigned __int64 v3; 
  unsigned __int64 *v4; 
  unsigned __int64 *v5; 
  unsigned __int64 *v6; 
  unsigned __int64 *destination; 

  v2 = NtCurrentTeb();
  v3 = color;
  v4 = (unsigned __int64 *)v2->Reserved2[72];
  v5 = (unsigned __int64 *)v2->Reserved2[71];
  if ( v4 >= v5 )
  {
    if ( v5 )
      PIXSetMarkerAllocate(v3, str);
  }
  else
  {
    *v4 = (__rdtsc() << 20) | 0x2000;
    v4[1] = v3;
    destination = v4 + 2;
    PIXCopyEventArgument<char const *>(&destination, v5 + 62, str);
    v6 = destination;
    *destination = 1048448i64;
    v2->Reserved2[72] = v6;
  }
}

