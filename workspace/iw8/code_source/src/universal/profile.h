/*
==============
Profile_Begin
==============
*/

void __fastcall Profile_Begin(int index)
{
  ?Profile_Begin@@YAXH@Z(index);
}

/*
==============
Profile2_UpdateEntry
==============
*/

void __fastcall Profile2_UpdateEntry(int index)
{
  ?Profile2_UpdateEntry@@YAXH@Z(index);
}

/*
==============
ProfileScopedDev::~ProfileScopedDev
==============
*/

void __fastcall ProfileScopedDev::~ProfileScopedDev(ProfileScopedDev *this)
{
  ??1ProfileScopedDev@@QEAA@XZ(this);
}

/*
==============
ProfileScopedNoSys::~ProfileScopedNoSys
==============
*/

void __fastcall ProfileScopedNoSys::~ProfileScopedNoSys(ProfileScopedNoSys *this)
{
  ??1ProfileScopedNoSys@@QEAA@XZ(this);
}

/*
==============
ProfileScoped::~ProfileScoped
==============
*/

void __fastcall ProfileScoped::~ProfileScoped(ProfileScoped *this)
{
  ??1ProfileScoped@@QEAA@XZ(this);
}

/*
==============
Profile2_Begin
==============
*/

void __fastcall Profile2_Begin(int index)
{
  ?Profile2_Begin@@YAXH@Z(index);
}

/*
==============
Profile_EndInternal
==============
*/

int __fastcall Profile_EndInternal(long double *duration)
{
  return ?Profile_EndInternal@@YAHPEAN@Z(duration);
}

/*
==============
Profile_GetStack
==============
*/

ProfileStack *__fastcall Profile_GetStack()
{
  return ?Profile_GetStack@@YAPEAUProfileStack@@XZ();
}

/*
==============
Profile2_End
==============
*/

void __fastcall Profile2_End(int index)
{
  ?Profile2_End@@YAXH@Z(index);
}

/*
==============
Profile_EndInternal
==============
*/
__int64 Profile_EndInternal(long double *duration)
{
  ThreadContext CurrentThreadContext; 
  _QWORD *Value; 
  int v4; 
  char *v5; 
  __int64 v6; 
  unsigned int v7; 
  unsigned int v8; 
  unsigned int v9; 
  __int64 v10; 
  unsigned int v11; 
  __int64 v15; 

  if ( Sys_TLSInitialized() )
  {
    if ( Sys_HasValidCurrentThreadContext() )
      CurrentThreadContext = Sys_GetCurrentThreadContext();
    else
      CurrentThreadContext = THREAD_CONTEXT_COUNT;
    CPUTimelineProfiler::EndSample(&g_cpuProfiler, CurrentThreadContext);
  }
  Value = Sys_GetValue(0);
  v4 = __rdtsc();
  if ( Value[261] <= (unsigned __int64)(Value + 5) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 132, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack > prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack > prof_stack->prof_pStack") )
    __debugbreak();
  v5 = *(char **)Value[261];
  if ( *(_DWORD *)v5 >= 3u )
  {
    LODWORD(v15) = *(_DWORD *)v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 134, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", v15, 3) )
      __debugbreak();
  }
  v6 = *(int *)v5;
  v7 = 0;
  v8 = v4 - *(_DWORD *)&v5[4 * v6 + 8] - *((_DWORD *)Value + 8784);
  v9 = v8;
  if ( v8 > 0xFFFF0000 )
  {
    v8 = 0;
    v9 = 0;
  }
  *(_DWORD *)v5 = v6 - 1;
  *((_DWORD *)v5 + 5) += v9;
  ++*((_DWORD *)v5 + 1);
  Value[261] -= 8i64;
  v10 = *(_QWORD *)Value[261];
  if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 154, ASSERT_TYPE_ASSERT, "( parent )", (const char *)&queryFormat, "parent") )
    __debugbreak();
  *(_DWORD *)(v10 + 24) += v8;
  v11 = *((_DWORD *)Value + 8785);
  if ( *(_DWORD *)(v10 + 20) >= v11 )
    v7 = *(_DWORD *)(v10 + 20) - v11;
  *(_DWORD *)(v10 + 20) = v7;
  if ( duration )
  {
    _XMM0 = 0i64;
    __asm { vcvtsi2sd xmm0, xmm0, rax }
    *duration = *(double *)&_XMM0 * msecPerRawTimerTick;
  }
  return (v5 - (char *)Value - 2096) / 40;
}

/*
==============
Profile_Begin
==============
*/
void Profile_Begin(int index)
{
  __int64 v1; 
  char *Value; 
  char *v3; 
  _QWORD *v4; 
  char *v5; 
  int *v6; 
  unsigned __int64 v7; 
  ThreadContext CurrentThreadContext; 
  __int64 v9; 
  int v10; 
  __int64 v11; 
  int v12; 

  v1 = index;
  Value = (char *)Sys_GetValue(0);
  v3 = &Value[40 * v1 + 2096];
  if ( (unsigned int)(*(_DWORD *)v3 + 1) >= 3 )
  {
    v12 = 3;
    v10 = *(_DWORD *)v3 + 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 95, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting + 1 ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting + 1 doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", v10, v12) )
      __debugbreak();
  }
  if ( ++*(_DWORD *)v3 >= 3u )
  {
    LODWORD(v11) = 3;
    LODWORD(v9) = *(_DWORD *)v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", v9, v11) )
      __debugbreak();
  }
  v4 = Value + 2088;
  v5 = Value + 40;
  if ( *v4 < (unsigned __int64)v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 99, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack >= prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack >= prof_stack->prof_pStack") )
    __debugbreak();
  *v4 += 8i64;
  if ( *v4 >= (unsigned __int64)v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 101, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack < prof_stack->prof_pStack + 256 )", (const char *)&queryFormat, "prof_stack->prof_ppStack < prof_stack->prof_pStack + PROF_STACK_SIZE") )
    __debugbreak();
  *(_QWORD *)*v4 = v3;
  if ( *v4 <= (unsigned __int64)v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 103, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack > prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack > prof_stack->prof_pStack") )
    __debugbreak();
  v6 = (int *)&v3[4 * *(int *)v3 + 8];
  v7 = __rdtsc();
  *v6 = v7;
  if ( Sys_HasValidCurrentThreadContext() )
    CurrentThreadContext = Sys_GetCurrentThreadContext();
  else
    CurrentThreadContext = THREAD_CONTEXT_COUNT;
  CPUTimelineProfiler::BeginSample(&g_cpuProfiler, CurrentThreadContext, v1, NULL, 0);
}

/*
==============
ProfileScoped::~ProfileScoped
==============
*/
void ProfileScoped::~ProfileScoped(ProfileScoped *this)
{
  Profile_EndInternal(NULL);
}

/*
==============
ProfileScopedNoSys::~ProfileScopedNoSys
==============
*/
void ProfileScopedNoSys::~ProfileScopedNoSys(ProfileScopedNoSys *this)
{
  Profile_EndInternal(NULL);
}

/*
==============
Profile2_UpdateEntry
==============
*/
void Profile2_UpdateEntry(int index)
{
  __int64 v1; 
  volatile unsigned int v2; 
  __int32 v3; 
  signed int v4; 

  v1 = index;
  v2 = g_prof2_begin_count[v1];
  if ( v2 > 0x7FFFFFFF )
  {
    Profile2_ClearEntry(index);
    v2 = 0;
  }
  v3 = __rdtsc();
  if ( ((unsigned __int8)&g_prof2_begin[v1] & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)&g_prof2_begin[v1]) )
    __debugbreak();
  v4 = v2 * (v3 - _InterlockedExchange(&g_prof2_begin[v1], v3));
  if ( v4 > 0 )
  {
    if ( ((unsigned __int8)&g_prof2_total[v1] & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)&g_prof2_total[v1]) )
      __debugbreak();
    _InterlockedExchangeAdd(&g_prof2_total[v1], v4);
  }
}

/*
==============
ProfileScopedDev::~ProfileScopedDev
==============
*/
void ProfileScopedDev::~ProfileScopedDev(ProfileScopedDev *this)
{
  __int128 v3; 
  __int128 v5; 

  _XMM0 = 0i64;
  __asm { vcvtsi2sd xmm0, xmm0, rax }
  if ( (__int64)(__rdtsc() - this->m_startTime) < 0 )
  {
    *((_QWORD *)&v3 + 1) = *((_QWORD *)&_XMM0 + 1);
    *(double *)&v3 = *(double *)&_XMM0 + 1.844674407370955e19;
    _XMM0 = v3;
  }
  *((_QWORD *)&v5 + 1) = *((_QWORD *)&_XMM0 + 1);
  *(double *)&v5 = *(double *)&_XMM0 * usecPerRawTimerTick;
  _XMM0 = v5;
  __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
  if ( (float)(*(float *)&_XMM1 * 0.001) > this->m_warnThreshold )
    Com_Printf(12, "[PROFILE] %s took %.3fms\n", this->m_funcName, (float)(*(float *)&_XMM1 * 0.001));
}

/*
==============
Profile_GetStack
==============
*/
ProfileStack *Profile_GetStack()
{
  if ( !*(_QWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1016i64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 3334, ASSERT_TYPE_ASSERT, "( g_dwTlsIndex != 0 )", (const char *)&queryFormat, "g_dwTlsIndex != NULL") )
    __debugbreak();
  return **(ProfileStack ***)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1016i64);
}

/*
==============
Profile2_Begin
==============
*/
void Profile2_Begin(int index)
{
  __int64 v1; 
  volatile int *v2; 

  v1 = index;
  Profile2_UpdateEntry(index);
  v2 = &g_prof2_begin_count[v1];
  if ( ((unsigned __int8)v2 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)v2) )
    __debugbreak();
  _InterlockedIncrement(v2);
}

/*
==============
Profile2_End
==============
*/
void Profile2_End(int index)
{
  __int64 v1; 
  volatile int *v2; 

  v1 = index;
  Profile2_UpdateEntry(index);
  v2 = &g_prof2_begin_count[v1];
  if ( ((unsigned __int8)v2 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)v2) )
    __debugbreak();
  _InterlockedDecrement(v2);
}

