/*
==============
Profile_SetTotal
==============
*/

void __fastcall Profile_SetTotal(int index, int total)
{
  ?Profile_SetTotal@@YAXHH@Z(index, total);
}

/*
==============
Profile2_Update
==============
*/

int __fastcall Profile2_Update()
{
  return ?Profile2_Update@@YAHXZ();
}

/*
==============
Profile_Unguard
==============
*/

void __fastcall Profile_Unguard(int id)
{
  ?Profile_Unguard@@YAXH@Z(id);
}

/*
==============
Profile2_ServerUpdate
==============
*/

void Profile2_ServerUpdate(void)
{
  ?Profile2_ServerUpdate@@YAXXZ();
}

/*
==============
Profile_IsStackEmpty
==============
*/

bool __fastcall Profile_IsStackEmpty()
{
  return ?Profile_IsStackEmpty@@YA_NXZ();
}

/*
==============
Profile_GetEnumParity
==============
*/

int __fastcall Profile_GetEnumParity(int profEnum)
{
  return ?Profile_GetEnumParity@@YAHH@Z(profEnum);
}

/*
==============
Profile_ResetScriptCounters
==============
*/

void __fastcall Profile_ResetScriptCounters(scrContext_t *scrContext)
{
  ?Profile_ResetScriptCounters@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
Profile_Init
==============
*/

void Profile_Init(void)
{
  ?Profile_Init@@YAXXZ();
}

/*
==============
Profile_InitContext
==============
*/

void __fastcall Profile_InitContext(int profileContext)
{
  ?Profile_InitContext@@YAXH@Z(profileContext);
}

/*
==============
Profile2_Recover
==============
*/

void Profile2_Recover(void)
{
  ?Profile2_Recover@@YAXXZ();
}

/*
==============
Profile_PrintProfilingScriptThreads
==============
*/

void __fastcall Profile_PrintProfilingScriptThreads(const scrContext_t *scrContext)
{
  ?Profile_PrintProfilingScriptThreads@@YAXAEBUscrContext_t@@@Z(scrContext);
}

/*
==============
Profile_TrackUsageAnalysis
==============
*/

void __fastcall Profile_TrackUsageAnalysis(scrContext_t *scrContext, float framtTime, bool forceTrack)
{
  ?Profile_TrackUsageAnalysis@@YAXAEAUscrContext_t@@M_N@Z(scrContext, framtTime, forceTrack);
}

/*
==============
Profile_ClearScriptUsageValues
==============
*/

void __fastcall Profile_ClearScriptUsageValues(scrContext_t *scrContext)
{
  ?Profile_ClearScriptUsageValues@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
Profile2_ClearEntry
==============
*/

void __fastcall Profile2_ClearEntry(int index)
{
  ?Profile2_ClearEntry@@YAXH@Z(index);
}

/*
==============
Profile_AddScriptName
==============
*/

int __fastcall Profile_AddScriptName(scrContext_t *scrContext, const char *profileName)
{
  return ?Profile_AddScriptName@@YAHAEAUscrContext_t@@PEBD@Z(scrContext, profileName);
}

/*
==============
Profile_GetDisplayThread
==============
*/

int __fastcall Profile_GetDisplayThread()
{
  return ?Profile_GetDisplayThread@@YAHXZ();
}

/*
==============
Profile_GetProbeIndexFromName
==============
*/

int __fastcall Profile_GetProbeIndexFromName(const char *name)
{
  return ?Profile_GetProbeIndexFromName@@YAHPEBD@Z(name);
}

/*
==============
GetThreadProfilerName
==============
*/

const char *__fastcall GetThreadProfilerName(int index)
{
  return ?GetThreadProfilerName@@YAPEBDH@Z(index);
}

/*
==============
Profile_ResetCounters
==============
*/

void __fastcall Profile_ResetCounters(int system)
{
  ?Profile_ResetCounters@@YAXH@Z(system);
}

/*
==============
Profile_ClearScriptCounters
==============
*/

void __fastcall Profile_ClearScriptCounters(scrContext_t *scrContext)
{
  ?Profile_ClearScriptCounters@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
Profile_GetStackForContext
==============
*/

ProfileStack *__fastcall Profile_GetStackForContext(int profileContext)
{
  return ?Profile_GetStackForContext@@YAPEAUProfileStack@@H@Z(profileContext);
}

/*
==============
Profile_Recover
==============
*/

void __fastcall Profile_Recover(int id)
{
  ?Profile_Recover@@YAXH@Z(id);
}

/*
==============
GetThreadProfilerName
==============
*/
const char *GetThreadProfilerName(int index)
{
  return g_profile_thread_values[index];
}

/*
==============
Profile2_ClearEntry
==============
*/
void Profile2_ClearEntry(int index)
{
  g_prof2_begin_count[index] = 0;
  Com_PrintWarning(0, "Cleared profile entry '%s'.\n", prof2_enumNames[index]);
}

/*
==============
Profile2_Recover
==============
*/
void Profile2_Recover(void)
{
  memset_0((void *)g_prof2_begin_count, 0, sizeof(g_prof2_begin_count));
}

/*
==============
Profile2_ServerUpdate
==============
*/
void Profile2_ServerUpdate(void)
{
  int v0; 
  int *v1; 
  __int64 v2; 
  volatile unsigned int v3; 
  __int32 v4; 
  signed int v5; 
  volatile __int32 *v6; 
  int v7; 
  int v8; 

  if ( profile2->current.integer )
  {
    ++g_prof2_server_inc;
    v7 = g_prof2_server_history_index;
    if ( g_prof2_server_inc >= profile2_frames->current.integer )
    {
      g_prof2_server_inc = 0;
      v8 = __rdtsc();
      v0 = 101;
      v1 = &g_prof2_history[g_prof2_server_history_index][101];
      do
      {
        v2 = v0;
        v3 = g_prof2_begin_count[v2];
        if ( v3 > 0x7FFFFFFF )
        {
          Profile2_ClearEntry(v0);
          v3 = 0;
        }
        v4 = __rdtsc();
        if ( ((unsigned __int8)&g_prof2_begin[v2] & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)&g_prof2_begin[v2]) )
          __debugbreak();
        v5 = v3 * (v4 - _InterlockedExchange(&g_prof2_begin[v2], v4));
        if ( v5 > 0 )
        {
          if ( ((unsigned __int8)&g_prof2_total[v2] & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)&g_prof2_total[v2]) )
            __debugbreak();
          _InterlockedExchangeAdd(&g_prof2_total[v2], v5);
        }
        v6 = &g_prof2_total[v0];
        if ( ((unsigned __int8)v6 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)&g_prof2_total[v0]) )
          __debugbreak();
        ++v0;
        *v1++ = _InterlockedExchange(v6, 0);
      }
      while ( (unsigned int)v0 < 0x6C );
      g_prof2_history_server_update_times[v7] = v8;
      g_prof2_server_history_index = (v7 + 1) % 5u;
    }
  }
}

/*
==============
Profile2_Update
==============
*/
__int64 Profile2_Update()
{
  unsigned int v0; 
  int *v1; 
  __int64 v2; 
  __int64 v3; 
  volatile unsigned int v4; 
  __int32 v5; 
  signed int v6; 
  volatile __int32 *v7; 
  unsigned int v8; 
  int v10; 
  int v11; 

  v0 = g_prof2_history_index;
  v10 = g_prof2_history_index;
  if ( profile2->current.integer )
  {
    if ( ++g_prof2_inc >= profile2_frames->current.integer )
    {
      g_prof2_inc = 0;
      v1 = g_prof2_history[g_prof2_history_index];
      v11 = __rdtsc();
      v2 = 0i64;
      do
      {
        v3 = (int)v2;
        v4 = g_prof2_begin_count[v3];
        if ( v4 > 0x7FFFFFFF )
        {
          Profile2_ClearEntry(v2);
          v4 = 0;
        }
        v5 = __rdtsc();
        if ( ((unsigned __int8)&g_prof2_begin[v3] & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)&g_prof2_begin[v3]) )
          __debugbreak();
        v6 = v4 * (v5 - _InterlockedExchange(&g_prof2_begin[v3], v5));
        if ( v6 > 0 )
        {
          if ( ((unsigned __int8)&g_prof2_total[v3] & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)&g_prof2_total[v3]) )
            __debugbreak();
          _InterlockedExchangeAdd(&g_prof2_total[v3], v6);
        }
        v7 = &g_prof2_total[v2];
        if ( ((unsigned __int8)v7 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)&g_prof2_total[v2]) )
          __debugbreak();
        v2 = (unsigned int)(v2 + 1);
        *v1++ = _InterlockedExchange(v7, 0);
      }
      while ( (unsigned int)v2 < 0x64 );
      v0 = v10;
      v8 = g_prof2_server_history_index + 4;
      g_prof2_history_update_times[v10] = v11;
      g_prof2_history_update_server_index[v10] = v8 % 5;
      g_prof2_history_index = (v10 + 1) % 5u;
    }
  }
  return v0;
}

/*
==============
Profile_AddScriptName
==============
*/
__int64 Profile_AddScriptName(scrContext_t *scrContext, const char *profileName)
{
  __int64 v3; 
  ProfileScript *Profile; 
  char *v5; 
  const char *v6; 
  __int64 v7; 
  char *v8; 
  int v9; 
  __int64 v10; 
  int v11; 
  int v12; 
  int v13; 

  v3 = 0i64;
  Profile = ScriptContext_GetProfile(scrContext);
  v5 = Profile->profileScriptNames[0];
  v6 = (const char *)(profileName - (const char *)Profile - 36868);
  while ( 2 )
  {
    v7 = 19i64;
    v8 = v5;
    if ( !profileName && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
      __debugbreak();
    while ( 1 )
    {
      v9 = (unsigned __int8)v6[(_QWORD)v8];
      v10 = v7;
      v11 = (unsigned __int8)*v8++;
      --v7;
      if ( !v10 )
        return (unsigned int)v3;
      if ( v9 != v11 )
      {
        v12 = v9 + 32;
        if ( (unsigned int)(v9 - 65) > 0x19 )
          v12 = v9;
        v9 = v12;
        v13 = v11 + 32;
        if ( (unsigned int)(v11 - 65) > 0x19 )
          v13 = v11;
        if ( v9 != v13 )
          break;
      }
      if ( !v9 )
        return (unsigned int)v3;
    }
    if ( !*v5 )
    {
      Core_strcpy_truncate(v5, 0x14ui64, profileName);
      Profile->totalCount[v3] = 0;
      Profile->maxTime[v3] = 0;
      Profile->cumulative[v3] = 0.0;
      return (unsigned int)v3;
    }
    v3 = (unsigned int)(v3 + 1);
    v5 += 20;
    v6 -= 20;
    if ( (unsigned int)v3 < 0x80 )
      continue;
    break;
  }
  return 0xFFFFFFFFi64;
}

/*
==============
Profile_ClearScriptCounters
==============
*/
void Profile_ClearScriptCounters(scrContext_t *scrContext)
{
  ProfileScript *Profile; 
  __int64 v2; 
  volatile unsigned int *totalCount; 

  Profile = ScriptContext_GetProfile(scrContext);
  v2 = 128i64;
  totalCount = Profile->totalCount;
  do
  {
    *((_DWORD *)totalCount - 128) = 0;
    *totalCount = 0;
    *((_DWORD *)totalCount + 128) = 0;
    *((_DWORD *)totalCount++ + 256) = 0;
    --v2;
  }
  while ( v2 );
  memset_0(Profile, 0, 0x800ui64);
}

/*
==============
Profile_ClearScriptUsageValues
==============
*/
void Profile_ClearScriptUsageValues(scrContext_t *scrContext)
{
  scrContext->m_profileScript.srcTotal = 0i64;
  scrContext->m_profileScript.srcAvgTime = 0i64;
  scrContext->m_profileScript.srcMaxTime = 0i64;
  scrContext->m_profileScript.scrProfileCalcTimeTotal = 0i64;
  memset_0(scrContext->m_profileScript.scrFileTimeTracking, 0, sizeof(scrContext->m_profileScript.scrFileTimeTracking));
  Scr_ScriptProfileResetUsageTimes(scrContext);
}

/*
==============
Profile_GetDisplayThread
==============
*/
__int64 Profile_GetDisplayThread()
{
  const dvar_t *v0; 

  v0 = profile_thread;
  if ( !profile_thread )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.cpp", 890, ASSERT_TYPE_ASSERT, "(profile_thread)", (const char *)&queryFormat, "profile_thread") )
      __debugbreak();
    v0 = profile_thread;
  }
  return v0->current.unsignedInt;
}

/*
==============
Profile_GetEnumParity
==============
*/
__int64 Profile_GetEnumParity(int profEnum)
{
  __int64 v1; 
  int v4; 

  v1 = profEnum;
  if ( (unsigned int)profEnum >= 0x33A )
  {
    v4 = 826;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.cpp", 778, ASSERT_TYPE_ASSERT, "(unsigned)( profEnum ) < (unsigned)( ( sizeof( *array_counter( prof_enumSystems ) ) + 0 ) )", "profEnum doesn't index ARRAY_COUNT( prof_enumSystems )\n\t%i not in [0, %i)", profEnum, v4) )
      __debugbreak();
  }
  return (unsigned int)prof_parity[prof_enumSystems[v1]];
}

/*
==============
Profile_GetProbeIndexFromName
==============
*/
__int64 Profile_GetProbeIndexFromName(const char *name)
{
  const char **v2; 
  unsigned int v3; 

  v2 = &prof_enumNames[1];
  v3 = 1;
  while ( I_strnicmp(*v2, name, 0x7FFFFFFFui64) )
  {
    ++v3;
    ++v2;
    if ( v3 >= 0x33A )
      return 0i64;
  }
  return v3;
}

/*
==============
Profile_GetStackForContext
==============
*/
ProfileStack *Profile_GetStackForContext(int profileContext)
{
  return &g_prof_stack[profileContext];
}

/*
==============
Profile_Init
==============
*/
void Profile_Init(void)
{
  int v0; 
  const ProfileSettings *v1; 
  const char **v2; 
  const char *name; 
  int v4; 
  int v5; 
  int v6; 
  __int64 v7; 
  const char *v8; 

  v0 = 0;
  if ( s_profileArrays[0].name )
  {
    v1 = s_profileArrays;
    do
    {
      v2 = &prof_pageNames[v0 + 8];
      if ( !*v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.cpp", 495, ASSERT_TYPE_ASSERT, "( ( prof_pageNames[profPageIter + PROFPAGE_SPECIAL_COUNT] ) )", "( s_profileArrays[profPageIter].name ) = %s", v1->name) )
        __debugbreak();
      name = v1->name;
      do
      {
        v4 = (unsigned __int8)name[*v2 - v1->name];
        v5 = *(unsigned __int8 *)name - v4;
        if ( v5 )
          break;
        ++name;
      }
      while ( v4 );
      if ( v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.cpp", 496, ASSERT_TYPE_ASSERT, "(!strcmp( s_profileArrays[profPageIter].name, prof_pageNames[profPageIter + PROFPAGE_SPECIAL_COUNT] ))", "%s\n\t%s != %s", "!strcmp( s_profileArrays[profPageIter].name, prof_pageNames[profPageIter + PROFPAGE_SPECIAL_COUNT] )", v1->name, *v2) )
        __debugbreak();
      v1 = &s_profileArrays[++v0];
    }
    while ( v1->name );
  }
  v6 = 0;
  if ( s_profile2Arrays[0].name )
  {
    do
    {
      v7 = (unsigned int)(v6 + 1);
      if ( !prof2_pageNames[v7] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.cpp", 501, ASSERT_TYPE_ASSERT, "( ( prof2_pageNames[profPageIter + PROF2PAGE_SPECIAL_COUNT] ) )", "( s_profile2Arrays[profPageIter].name ) = %s", s_profile2Arrays[v6].name) )
        __debugbreak();
      v8 = s_profile2Arrays[v6].name;
      if ( strcmp(v8, prof2_pageNames[v7]) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.cpp", 502, ASSERT_TYPE_ASSERT, "(!strcmp( s_profile2Arrays[profPageIter].name, prof2_pageNames[profPageIter + PROF2PAGE_SPECIAL_COUNT] ))", "%s\n\t%s != %s", "!strcmp( s_profile2Arrays[profPageIter].name, prof2_pageNames[profPageIter + PROF2PAGE_SPECIAL_COUNT] )", v8, prof2_pageNames[v7]) )
        __debugbreak();
      v6 = v7;
    }
    while ( s_profile2Arrays[v7].name );
  }
  Dvar_BeginPermanentRegistration();
  profile = Dvar_RegisterEnum("profile", prof_pageNames, 0, 0, "Type of profiling");
  profile2 = Dvar_RegisterEnum("MNMMQMRLQK", prof2_pageNames, 0, 0, "Type of profiling");
  profile2_mode = Dvar_RegisterInt("LNTMPSORNQ", 1, 0, 1, 0, "Reporting mode");
  profile2_frames = Dvar_RegisterInt("LMMMNSPKTR", 60, 1, 0x7FFFFFFF, 0, "Profile frame count");
  profile_rowcount = Dvar_RegisterInt("MSKPOLONPQ", 20, 0, 40, 0, "Profile row count");
  profile_thread = Dvar_RegisterEnum("LKPLMMNPON", g_profile_thread_values, 28, 0, "Thread being profiled");
  Dvar_EndPermanentRegistration();
}

/*
==============
Profile_InitContext
==============
*/
void Profile_InitContext(int profileContext)
{
  unsigned int v1; 
  __int64 v2; 
  int v3; 
  char *Value; 
  int *v5; 
  _QWORD *v6; 
  char *v7; 
  __int64 v8; 
  unsigned __int64 v9; 
  ThreadContext CurrentThreadContext; 
  unsigned __int64 v11; 
  __int64 v14; 
  profile_t *prof_array; 
  __int64 v16; 
  __int64 v17; 
  ProfileStack *v18; 

  v18 = &g_prof_stack[profileContext];
  Sys_SetValue(0, v18);
  v1 = 0;
  v18->prof_pStack[0] = &v18->prof_root;
  v18->prof_ppStack = v18->prof_pStack;
  *(_QWORD *)v18->prof_overhead_internal.value = 0i64;
  *(_QWORD *)&v18->prof_guardpos = 0i64;
  Profile_Begin(0);
  Profile_EndInternal(NULL);
  v18->prof_array[0].write.total.value[0] = 0;
  *(_QWORD *)v18->prof_root.write.total.value = 0i64;
  v2 = 1000i64;
  do
  {
    v3 = __rdtsc();
    Value = (char *)Sys_GetValue(0);
    v5 = (int *)(Value + 2096);
    if ( (unsigned int)(*((_DWORD *)Value + 524) + 1) >= 3 )
    {
      LODWORD(v17) = 3;
      LODWORD(v16) = *((_DWORD *)Value + 524) + 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 95, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting + 1 ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting + 1 doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", v16, v17) )
        __debugbreak();
    }
    if ( (unsigned int)++*v5 >= 3 )
    {
      LODWORD(v17) = 3;
      LODWORD(v16) = *v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", v16, v17) )
        __debugbreak();
    }
    v6 = Value + 2088;
    v7 = Value + 40;
    if ( *v6 < (unsigned __int64)v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 99, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack >= prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack >= prof_stack->prof_pStack") )
      __debugbreak();
    *v6 += 8i64;
    if ( *v6 >= (unsigned __int64)v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 101, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack < prof_stack->prof_pStack + 256 )", (const char *)&queryFormat, "prof_stack->prof_ppStack < prof_stack->prof_pStack + PROF_STACK_SIZE") )
      __debugbreak();
    *(_QWORD *)*v6 = v5;
    if ( *v6 <= (unsigned __int64)v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 103, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack > prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack > prof_stack->prof_pStack") )
      __debugbreak();
    v8 = *v5;
    v9 = __rdtsc();
    v5[v8 + 2] = v9;
    if ( Sys_HasValidCurrentThreadContext() )
      CurrentThreadContext = Sys_GetCurrentThreadContext();
    else
      CurrentThreadContext = THREAD_CONTEXT_COUNT;
    CPUTimelineProfiler::BeginSample(&g_cpuProfiler, CurrentThreadContext, 0, NULL, 0);
    Profile_EndInternal(NULL);
    v11 = __rdtsc();
    v1 += v11 - v3;
    --v2;
  }
  while ( v2 );
  _XMM0 = *(unsigned __int64 *)&msecPerRawTimerTick;
  __asm { vcvtpd2ps xmm0, xmm0 }
  v14 = 826i64;
  v18->prof_overhead_internal.value[0] = v18->prof_array[0].write.total.value[0] / 0x3E8;
  v18->prof_timescale = *(float *)&_XMM0;
  prof_array = v18->prof_array;
  v18->prof_overhead_external.value[0] = v1 / 0x3E8;
  do
  {
    prof_array->write.nesting = -1;
    ++prof_array;
    --v14;
  }
  while ( v14 );
}

/*
==============
Profile_IsStackEmpty
==============
*/
bool Profile_IsStackEmpty()
{
  _QWORD **Value; 

  Value = (_QWORD **)Sys_GetValue(0);
  return *Value[261] == (_QWORD)Value;
}

/*
==============
Profile_PrintProfilingScriptThreads
==============
*/
void Profile_PrintProfilingScriptThreads(const scrContext_t *scrContext)
{
  const ProfileScript *ProfileConst; 
  unsigned int i; 
  unsigned int v4; 
  __int64 v5; 
  bitarray<128> *v6; 
  int j; 
  bitarray<128> *v8; 
  __int64 v9; 
  __int64 v10; 

  ProfileConst = ScriptContext_GetProfileConst(scrContext);
  for ( i = 0; i < ScriptContext_GetVarListParentSize(scrContext); ++i )
  {
    v4 = 0;
    v5 = i;
    v6 = &ProfileConst->threadId[v5];
    while ( !v6->array[0] )
    {
      ++v4;
      v6 = (bitarray<128> *)((char *)v6 + 4);
      if ( v4 >= 4 )
        goto LABEL_13;
    }
    for ( j = 0; j < 128; ++j )
    {
      v8 = &ProfileConst->threadId[v5];
      if ( (unsigned int)j >= 0x80 )
      {
        LODWORD(v10) = 128;
        LODWORD(v9) = j;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v9, v10) )
          __debugbreak();
      }
      if ( ((0x80000000 >> (j & 0x1F)) & v8->array[(unsigned __int64)(unsigned int)j >> 5]) != 0 )
        Com_Printf(12, "ScriptProfile: thread %d profile %s\n", i, ProfileConst->profileScriptNames[j]);
    }
LABEL_13:
    ;
  }
}

/*
==============
Profile_Recover
==============
*/
void Profile_Recover(int id)
{
  int *Value; 
  int v3; 
  int v4; 
  _DWORD **v5; 
  char *v6; 
  __int64 v7; 
  __int64 v8; 

  Value = (int *)Sys_GetValue(0);
  if ( Value[8914] <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.cpp", 944, ASSERT_TYPE_ASSERT, "(prof_stack->prof_guardpos > 0)", (const char *)&queryFormat, "prof_stack->prof_guardpos > 0") )
    __debugbreak();
  v3 = Value[8914];
  if ( v3 <= 0 )
  {
LABEL_7:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.cpp", 963, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Profile_Recover: id not found") )
      __debugbreak();
  }
  else
  {
    while ( 1 )
    {
      v4 = v3 - 1;
      Value[8914] = v3 - 1;
      if ( Value[4 * v3 + 8782] == id )
        break;
      --v3;
      if ( v4 <= 0 )
        goto LABEL_7;
    }
    v5 = (_DWORD **)*((_QWORD *)Value + 261);
    if ( v5 != *(_DWORD ***)&Value[4 * v4 + 8788] )
    {
      v6 = (char *)(Value + 10);
      do
      {
        if ( **v5 >= 3u )
        {
          LODWORD(v8) = 3;
          LODWORD(v7) = **v5;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.cpp", 953, ASSERT_TYPE_ASSERT, "(unsigned)( (*prof_stack->prof_ppStack)->write.nesting ) < (unsigned)( ( sizeof( *array_counter( (*prof_stack->prof_ppStack)->write.start ) ) + 0 ) )", "(*prof_stack->prof_ppStack)->write.nesting doesn't index ARRAY_COUNT( (*prof_stack->prof_ppStack)->write.start )\n\t%i not in [0, %i)", v7, v8) )
            __debugbreak();
        }
        if ( *((_QWORD *)Value + 261) <= (unsigned __int64)v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.cpp", 954, ASSERT_TYPE_ASSERT, "(prof_stack->prof_ppStack > prof_stack->prof_pStack)", (const char *)&queryFormat, "prof_stack->prof_ppStack > prof_stack->prof_pStack") )
          __debugbreak();
        --***((_DWORD ***)Value + 261);
        *((_QWORD *)Value + 261) -= 8i64;
        if ( *((_QWORD *)Value + 261) < (unsigned __int64)v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.cpp", 957, ASSERT_TYPE_ASSERT, "(prof_stack->prof_ppStack >= prof_stack->prof_pStack)", (const char *)&queryFormat, "prof_stack->prof_ppStack >= prof_stack->prof_pStack") )
          __debugbreak();
        v5 = (_DWORD **)*((_QWORD *)Value + 261);
      }
      while ( v5 != *(_DWORD ***)&Value[4 * Value[8914] + 8788] );
    }
  }
}

/*
==============
Profile_ResetCounters
==============
*/
void Profile_ResetCounters(int system)
{
  int v1; 
  void **Value; 
  __int64 v3; 
  int *v4; 
  profile_t *prof_array; 
  ProfileAtom *p_total; 
  unsigned int v7; 
  unsigned int *p_hits; 
  int *v9; 
  profile_t *v10; 
  unsigned int v11; 
  __int64 v12; 
  char *v13; 
  char *v14; 
  _QWORD *v15; 
  char *v16; 
  int *v17; 
  unsigned __int64 v18; 
  ThreadContext CurrentThreadContext; 
  __int64 v20; 
  __int64 v21; 

  v1 = system;
  if ( profile->current.integer )
  {
    Value = (void **)Sys_GetValue(0);
    LODWORD(v3) = 0;
    if ( Value[261] != Value + 5 )
    {
      v4 = g_profileStack;
      do
      {
        if ( (unsigned int)v3 >= 0x100 )
        {
          LODWORD(v21) = 256;
          LODWORD(v20) = v3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.cpp", 671, ASSERT_TYPE_ASSERT, "(unsigned)( profileStackPos ) < (unsigned)( ( sizeof( *array_counter( g_profileStack ) ) + 0 ) )", "profileStackPos doesn't index ARRAY_COUNT( g_profileStack )\n\t%i not in [0, %i)", v20, v21) )
            __debugbreak();
        }
        *v4 = Profile_EndInternal(NULL);
        LODWORD(v3) = v3 + 1;
        ++v4;
      }
      while ( Value[261] != Value + 5 );
    }
    prof_array = g_prof_stack[0].prof_array;
    do
    {
      p_total = &prof_array->write.total;
      v7 = 0;
      p_hits = &prof_array->write.hits;
      v9 = prof_enumSystems;
      do
      {
        if ( *v9 == v1 )
        {
          v10 = &prof_array[v7];
          v10->read.hits = *p_hits;
          p_hits[7] = p_hits[4];
          v11 = p_total[1].value[0];
          if ( p_total->value[0] < v11 )
            prof_array[v7].read.self.value[0] = 0;
          else
            prof_array[v7].read.self.value[0] = p_total->value[0] - v11;
          *p_hits = 0;
          *(_QWORD *)v10->write.total.value = 0i64;
        }
        ++v7;
        ++v9;
        p_total += 10;
        p_hits += 10;
      }
      while ( v7 < 0x33A );
      prof_array = (profile_t *)((char *)prof_array + 35664);
    }
    while ( (__int64)prof_array < (__int64)&unk_14FEDCF40 );
    v3 = (int)v3;
    if ( (_DWORD)v3 )
    {
      do
      {
        v12 = g_profileStack[--v3];
        v13 = (char *)Sys_GetValue(0);
        v14 = &v13[40 * v12 + 2096];
        if ( (unsigned int)(*(_DWORD *)v14 + 1) >= 3 )
        {
          LODWORD(v21) = 3;
          LODWORD(v20) = *(_DWORD *)v14 + 1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 95, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting + 1 ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting + 1 doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", v20, v21) )
            __debugbreak();
        }
        if ( ++*(_DWORD *)v14 >= 3u )
        {
          LODWORD(v21) = 3;
          LODWORD(v20) = *(_DWORD *)v14;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", v20, v21) )
            __debugbreak();
        }
        v15 = v13 + 2088;
        v16 = v13 + 40;
        if ( *v15 < (unsigned __int64)v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 99, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack >= prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack >= prof_stack->prof_pStack") )
          __debugbreak();
        *v15 += 8i64;
        if ( *v15 >= (unsigned __int64)v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 101, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack < prof_stack->prof_pStack + 256 )", (const char *)&queryFormat, "prof_stack->prof_ppStack < prof_stack->prof_pStack + PROF_STACK_SIZE") )
          __debugbreak();
        *(_QWORD *)*v15 = v14;
        if ( *v15 <= (unsigned __int64)v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 103, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack > prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack > prof_stack->prof_pStack") )
          __debugbreak();
        v17 = (int *)&v14[4 * *(int *)v14 + 8];
        v18 = __rdtsc();
        *v17 = v18;
        if ( Sys_HasValidCurrentThreadContext() )
          CurrentThreadContext = Sys_GetCurrentThreadContext();
        else
          CurrentThreadContext = THREAD_CONTEXT_COUNT;
        CPUTimelineProfiler::BeginSample(&g_cpuProfiler, CurrentThreadContext, v12, NULL, 0);
      }
      while ( v3 );
      v1 = system;
    }
    ++prof_parity[v1];
  }
}

/*
==============
Profile_ResetScriptCounters
==============
*/
void Profile_ResetScriptCounters(scrContext_t *scrContext)
{
  ProfileScript *Profile; 
  __int64 v2; 
  __int64 v3; 
  float *totalTime; 
  int *p_totalCount; 
  volatile unsigned int *totalCount; 
  __int64 v7; 
  float v8; 

  Profile = ScriptContext_GetProfile(scrContext);
  v2 = 0i64;
  v3 = 128i64;
  totalTime = (float *)Profile->totalTime;
  p_totalCount = &Profile->write[0].totalCount;
  totalCount = Profile->totalCount;
  do
  {
    *((_DWORD *)totalCount - 128) = p_totalCount[2];
    *totalCount = *p_totalCount + *((_DWORD *)totalTime + 128);
    if ( *((_DWORD *)totalTime + 256) < *(_DWORD *)totalTime )
      *((float *)totalCount + 128) = *totalTime;
    p_totalCount += 4;
    v7 = v2 + (unsigned int)Profile->historyIndex;
    v2 += 64i64;
    Profile->history[0][v7] = *(volatile unsigned int *)totalTime;
    v8 = (float)*(unsigned int *)totalTime;
    *((float *)totalCount++ + 256) = v8 + totalTime[384];
    ++totalTime;
    --v3;
  }
  while ( v3 );
  Profile->historyIndex = ((unsigned __int8)Profile->historyIndex + 1) & 0x3F;
  memset_0(Profile, 0, 0x800ui64);
}

/*
==============
Profile_SetTotal
==============
*/
void Profile_SetTotal(int index, int total)
{
  *((_DWORD *)Sys_GetValue(0) + 10 * index + 529) = total;
}

/*
==============
Profile_TrackUsageAnalysis
==============
*/
void Profile_TrackUsageAnalysis(scrContext_t *scrContext, float framtTime, bool forceTrack)
{
  ProfileScript *Profile; 
  float *Value; 
  __int64 srcTotal; 
  float v8; 
  float v9; 
  float v10; 
  float *v11; 
  __int64 scrProfileScriptThreadCreateTime; 
  float v13; 
  float v14; 
  float v15; 
  float *v16; 
  __int64 scrProfileCalcTimeTotal; 
  float v18; 
  float v19; 
  const dvar_t *v20; 
  float v21; 
  float v22; 
  const ServerTiming *Current; 
  float serverTimeTarget; 
  SvGameGlobals *v25; 
  bool v26; 
  float v27; 
  bool v28; 
  float *v29; 
  __int64 v30; 
  float v31; 
  float v32; 
  unsigned int scrProfileScriptUsageOpCount; 
  unsigned int scrProfileScriptThreadResumeCount; 
  const dvar_t *v35; 
  float serverScriptTimeMax; 
  float serverTimeMax; 
  const dvar_t *v38; 
  __int64 serverTimeCount; 
  float serverScriptProfileCalcTimeTotal; 
  float v41; 
  float v42; 
  int serverTimeExceedCount; 
  double v44; 
  float serverScriptTimeExceedTotal; 
  double v46; 
  float v47; 
  double v48; 
  float serverScriptTimeTotal; 
  double v50; 
  float v51; 
  float v52; 
  const dvar_t *v53; 
  const dvar_t *v54; 
  ScriptInstanceType m_Instance; 
  __int64 v56; 

  Profile = ScriptContext_GetProfile(scrContext);
  if ( script_usage_tracking && script_usage_tracking->current.integer )
  {
    Value = (float *)Sys_GetValue(0);
    srcTotal = Profile->srcTotal;
    v8 = (float)srcTotal;
    if ( srcTotal < 0 )
    {
      v9 = (float)srcTotal;
      v8 = v9 + 1.8446744e19;
    }
    v10 = v8 * Value[8915];
    v11 = (float *)Sys_GetValue(0);
    scrProfileScriptThreadCreateTime = Profile->scrProfileScriptThreadCreateTime;
    v13 = (float)scrProfileScriptThreadCreateTime;
    if ( scrProfileScriptThreadCreateTime < 0 )
    {
      v14 = (float)scrProfileScriptThreadCreateTime;
      v13 = v14 + 1.8446744e19;
    }
    v15 = v13 * v11[8915];
    v16 = (float *)Sys_GetValue(0);
    scrProfileCalcTimeTotal = Profile->scrProfileCalcTimeTotal;
    v18 = (float)scrProfileCalcTimeTotal;
    if ( scrProfileCalcTimeTotal < 0 )
    {
      v19 = (float)scrProfileCalcTimeTotal;
      v18 = v19 + 1.8446744e19;
    }
    v20 = DVARBOOL_sv_debugTrackServerTime;
    v22 = v18 * v16[8915];
    v21 = v22;
    if ( !DVARBOOL_sv_debugTrackServerTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_debugTrackServerTime") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v20);
    if ( v20->current.enabled && v10 > framtTime )
      Com_Printf(23, "Profile_TrackUsageAnalysis: Current script time of %0.3f exceeds current frame time of %0.3f. \n", v10, framtTime);
    Current = SV_Timing_GetCurrent();
    serverTimeTarget = Current->serverTimeTarget;
    if ( !(_BYTE)SvGameGlobals::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game_globals.h", 98, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tAttempting to access server global data outside of an active server context", "ms_allocatedType != GameModeType::NONE") )
      __debugbreak();
    if ( !SvGameGlobals::ms_svGameGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game_globals.h", 99, ASSERT_TYPE_ASSERT, "( ms_svGameGlobals )", (const char *)&queryFormat, "ms_svGameGlobals") )
      __debugbreak();
    v25 = SvGameGlobals::ms_svGameGlobals;
    v26 = 0;
    SvGameGlobals::ms_svGameGlobals->timeStats.serverScriptTimeTotal = v10 + SvGameGlobals::ms_svGameGlobals->timeStats.serverScriptTimeTotal;
    v25->timeStats.serverScriptUsageOpTotal += Profile->scrProfileScriptUsageOpCount;
    v27 = v15 + v25->timeStats.serverScriptUsageThreadCreateTimeTotal;
    v25->timeStats.serverScriptUsageThreadResumeTotal += Profile->scrProfileScriptThreadResumeCount;
    v25->timeStats.serverScriptUsageThreadCreateTimeTotal = v27;
    v25->timeStats.serverScriptUsageThreadCreateTimeCount += Profile->scrProfileScriptThreadCreateCount;
    v28 = v10 <= v25->timeStats.serverScriptTimeMax;
    v25->timeStats.serverScriptProfileCalcTimeTotal = v22 + v25->timeStats.serverScriptProfileCalcTimeTotal;
    if ( !v28 )
    {
      v25->timeStats.serverScriptTimeMax = v10;
      v26 = 1;
    }
    if ( v15 > v25->timeStats.serverScriptUsageThreadCreateTimeMax )
      v25->timeStats.serverScriptUsageThreadCreateTimeMax = v15;
    if ( v22 > v25->timeStats.serverScriptProfileCalcTimeMax )
    {
      v25->timeStats.serverScriptProfileCalcTimeMax = v22;
      v25->timeStats.serverScriptProfileCalcTimeMaxAtFrame = Current->serverTimeCount;
    }
    if ( framtTime > serverTimeTarget )
    {
      v29 = (float *)Sys_GetValue(0);
      v30 = Profile->srcTotal;
      v31 = (float)v30;
      if ( v30 < 0 )
      {
        v32 = (float)v30;
        v31 = v32 + 1.8446744e19;
      }
      v25->timeStats.serverScriptTimeExceedTotal = (float)(v31 * v29[8915]) + v25->timeStats.serverScriptTimeExceedTotal;
    }
    if ( forceTrack || framtTime > serverTimeTarget )
      Scr_TrackServerTimeAccumScriptTime(scrContext, v26);
    scrProfileScriptUsageOpCount = Profile->scrProfileScriptUsageOpCount;
    if ( scrProfileScriptUsageOpCount > v25->timeStats.serverScriptUsageOpCountMax )
      v25->timeStats.serverScriptUsageOpCountMax = scrProfileScriptUsageOpCount;
    scrProfileScriptThreadResumeCount = Profile->scrProfileScriptThreadResumeCount;
    if ( scrProfileScriptThreadResumeCount > v25->timeStats.serverScriptUsageThreadResumeMax )
      v25->timeStats.serverScriptUsageThreadResumeMax = scrProfileScriptThreadResumeCount;
    v35 = DVARBOOL_sv_debugTrackServerTime;
    if ( !DVARBOOL_sv_debugTrackServerTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_debugTrackServerTime") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v35);
    if ( v35->current.enabled )
    {
      serverScriptTimeMax = v25->timeStats.serverScriptTimeMax;
      serverTimeMax = Current->serverTimeMax;
      if ( serverScriptTimeMax > serverTimeMax )
        Com_Printf(23, "Profile_TrackUsageAnalysis: Script time max of %0.3f exceeds max server time of %0.3f. \n", serverScriptTimeMax, serverTimeMax);
    }
    v38 = DVARBOOL_sv_debugTrackServerTime;
    if ( !DVARBOOL_sv_debugTrackServerTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_debugTrackServerTime") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v38);
    if ( v38->current.enabled )
    {
      serverTimeCount = Current->serverTimeCount;
      serverScriptProfileCalcTimeTotal = v25->timeStats.serverScriptProfileCalcTimeTotal;
      if ( (_DWORD)serverTimeCount )
      {
        v41 = (float)serverTimeCount;
        v42 = serverScriptProfileCalcTimeTotal / v41;
      }
      else
      {
        v42 = 0.0;
      }
      serverTimeExceedCount = Current->serverTimeExceedCount;
      v44 = serverScriptProfileCalcTimeTotal;
      serverScriptTimeExceedTotal = v25->timeStats.serverScriptTimeExceedTotal;
      v46 = v42;
      if ( serverTimeExceedCount <= 0 )
        v47 = 0.0;
      else
        v47 = serverScriptTimeExceedTotal / (float)serverTimeExceedCount;
      v48 = serverScriptTimeExceedTotal;
      serverScriptTimeTotal = v25->timeStats.serverScriptTimeTotal;
      v50 = v47;
      if ( (_DWORD)serverTimeCount )
      {
        v51 = (float)serverTimeCount;
        v52 = serverScriptTimeTotal / v51;
      }
      else
      {
        v52 = 0.0;
      }
      LODWORD(v56) = Current->serverTimeCount;
      Com_Printf(0, "Script Time => [CurrentTime= %0.2f, ProfileCalc= %0.2f], [TotalTime= %0.2f, Count= %d, AvgTotal= %0.2f, Max= %0.2f], [ExceedTimeTotal= %0.2f, ExceedCount= %d, AvgExceed= %0.2f], [ProfileCalcTotal= %0.2f, AvgProfileCalc= %0.2f, MaxProfileCalc= %0.2f @ %d ] \n", v10, v21, serverScriptTimeTotal, v56, v52, v25->timeStats.serverScriptTimeMax, v48, Current->serverTimeExceedCount, v50, v44, v46, v25->timeStats.serverScriptProfileCalcTimeMax, v25->timeStats.serverScriptProfileCalcTimeMaxAtFrame);
    }
    v53 = DVARFLT_script_usage_trigger_time;
    if ( !DVARFLT_script_usage_trigger_time && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "script_usage_trigger_time") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v53);
    if ( v53->current.value <= 0.0 )
      goto LABEL_67;
    v54 = DVARFLT_script_usage_trigger_time;
    if ( !DVARFLT_script_usage_trigger_time && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "script_usage_trigger_time") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v54);
    if ( v10 <= v54->current.value )
    {
LABEL_67:
      m_Instance = g_reportScriptContextUsage;
    }
    else
    {
      Com_Printf(23, "\n==> Script Usage Summary triggered by %fmsec script frame=====\n\n", v10);
      Dvar_SetFloat_Internal(DVARFLT_script_usage_trigger_time, 0.0);
      m_Instance = scrContext->m_Instance;
      g_reportScriptContextUsage = m_Instance;
    }
    if ( m_Instance == scrContext->m_Instance )
    {
      g_reportScriptContextUsage = SCRIPTINSTANCE_COUNT;
      Scr_ScriptProfilePrintUsageReportToLog(scrContext);
    }
    Scr_ScriptProfileResetUsageTimes(scrContext);
  }
}

/*
==============
Profile_Unguard
==============
*/
void Profile_Unguard(int id)
{
  int *Value; 
  __int64 v3; 
  char *v4; 
  const char *v5; 
  const char **v6; 
  __int64 v7; 
  int *v8; 
  char *v9; 
  const char *v10; 

  Value = (int *)Sys_GetValue(0);
  if ( Value[8914] <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.cpp", 820, ASSERT_TYPE_ASSERT, "(prof_stack->prof_guardpos > 0)", (const char *)&queryFormat, "prof_stack->prof_guardpos > 0") )
    __debugbreak();
  v3 = Value[8914];
  Value[8914] = v3 - 1;
  if ( Value[4 * v3 + 8782] != id && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.cpp", 824, ASSERT_TYPE_ASSERT, "(prof_stack->prof_guardstack[prof_stack->prof_guardpos].id == id)", (const char *)&queryFormat, "prof_stack->prof_guardstack[prof_stack->prof_guardpos].id == id") )
    __debugbreak();
  if ( *(_QWORD *)&Value[4 * Value[8914] + 8788] != *((_QWORD *)Value + 261) )
  {
    v4 = (char *)Sys_GetValue(0);
    v5 = NULL;
    v6 = prof_enumNames;
    v7 = 826i64;
    v8 = (int *)(v4 + 2096);
    do
    {
      if ( *v8 >= 0 )
      {
        v9 = (char *)*v6;
        if ( v5 )
          v9 = j_va("%s, %s", v5, *v6);
        v5 = v9;
      }
      v8 += 10;
      ++v6;
      --v7;
    }
    while ( v7 );
    if ( v5 )
      v10 = j_va("probes missing PROF_END: %s", v5);
    else
      v10 = "no probes missing PROF_END detected";
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.cpp", 825, ASSERT_TYPE_ASSERT, "( ( prof_stack->prof_guardstack[prof_stack->prof_guardpos].ppStack == prof_stack->prof_ppStack ) )", "( Profile_MissingEnd() ) = %s", v10) )
      __debugbreak();
  }
}

