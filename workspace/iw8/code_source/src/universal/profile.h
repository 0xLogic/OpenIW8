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
  int v5; 
  char *v6; 
  __int64 v7; 
  unsigned int v8; 
  unsigned int v9; 
  unsigned int v10; 
  __int64 v11; 
  unsigned int v12; 
  __int64 v17; 

  _R15 = duration;
  if ( Sys_TLSInitialized() )
  {
    if ( Sys_HasValidCurrentThreadContext() )
      CurrentThreadContext = Sys_GetCurrentThreadContext();
    else
      CurrentThreadContext = THREAD_CONTEXT_COUNT;
    CPUTimelineProfiler::EndSample(&g_cpuProfiler, CurrentThreadContext);
  }
  Value = Sys_GetValue(0);
  v5 = __rdtsc();
  if ( Value[261] <= (unsigned __int64)(Value + 5) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 132, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack > prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack > prof_stack->prof_pStack") )
    __debugbreak();
  v6 = *(char **)Value[261];
  if ( *(_DWORD *)v6 >= 3u )
  {
    LODWORD(v17) = *(_DWORD *)v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 134, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", v17, 3) )
      __debugbreak();
  }
  v7 = *(int *)v6;
  v8 = 0;
  v9 = v5 - *(_DWORD *)&v6[4 * v7 + 8] - *((_DWORD *)Value + 8784);
  v10 = v9;
  if ( v9 > 0xFFFF0000 )
  {
    v9 = 0;
    v10 = 0;
  }
  *(_DWORD *)v6 = v7 - 1;
  *((_DWORD *)v6 + 5) += v10;
  ++*((_DWORD *)v6 + 1);
  Value[261] -= 8i64;
  v11 = *(_QWORD *)Value[261];
  if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 154, ASSERT_TYPE_ASSERT, "( parent )", (const char *)&queryFormat, "parent") )
    __debugbreak();
  *(_DWORD *)(v11 + 24) += v9;
  v12 = *((_DWORD *)Value + 8785);
  if ( *(_DWORD *)(v11 + 20) >= v12 )
    v8 = *(_DWORD *)(v11 + 20) - v12;
  *(_DWORD *)(v11 + 20) = v8;
  if ( _R15 )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2sd xmm0, xmm0, rax
      vmulsd  xmm1, xmm0, cs:?msecPerRawTimerTick@@3NA; double msecPerRawTimerTick
      vmovsd  qword ptr [r15], xmm1
    }
  }
  return (v6 - (char *)Value - 2096) / 40;
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
  unsigned __int64 v2; 
  bool v3; 
  __int64 v4; 

  v2 = __rdtsc();
  v3 = v2 < this->m_startTime;
  v4 = v2 - this->m_startTime;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2sd xmm0, xmm0, rax
  }
  if ( v4 < 0 )
    __asm { vaddsd  xmm0, xmm0, cs:__real@43f0000000000000 }
  __asm
  {
    vmulsd  xmm0, xmm0, cs:?usecPerRawTimerTick@@3NA; double usecPerRawTimerTick
    vcvtsd2ss xmm1, xmm0, xmm0
    vmulss  xmm2, xmm1, cs:__real@3a83126f
    vcomiss xmm2, dword ptr [rcx+10h]
  }
  if ( !v3 && v4 != 0 )
  {
    __asm
    {
      vcvtss2sd xmm3, xmm2, xmm2
      vmovq   r9, xmm3
    }
    Com_Printf(12, "[PROFILE] %s took %.3fms\n", this->m_funcName, *(double *)&_XMM3);
  }
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

