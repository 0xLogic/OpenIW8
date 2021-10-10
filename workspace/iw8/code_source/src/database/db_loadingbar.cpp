/*
==============
LoadBar_ReadStreamSyncSP
==============
*/

void __fastcall LoadBar_ReadStreamSyncSP(const unsigned __int64 loadPercent)
{
  ?LoadBar_ReadStreamSyncSP@@YAX_K@Z(loadPercent);
}

/*
==============
ScopedThreadCheck::~ScopedThreadCheck
==============
*/

void __fastcall ScopedThreadCheck::~ScopedThreadCheck(ScopedThreadCheck *this)
{
  ??1ScopedThreadCheck@@QEAA@XZ(this);
}

/*
==============
LoadBar_FinishStreamSync
==============
*/

void LoadBar_FinishStreamSync(void)
{
  ?LoadBar_FinishStreamSync@@YAXXZ();
}

/*
==============
LoadBar_Reset
==============
*/

void LoadBar_Reset(void)
{
  ?LoadBar_Reset@@YAXXZ();
}

/*
==============
LoadBar_ReadResident
==============
*/

void __fastcall LoadBar_ReadResident(const unsigned __int64 size)
{
  ?LoadBar_ReadResident@@YAX_K@Z(size);
}

/*
==============
LoadBar_EstimateFastfiles
==============
*/

void __fastcall LoadBar_EstimateFastfiles(const DB_FastfileInfo *zones, const unsigned __int64 *estimates, const unsigned int numZones, const unsigned __int64 transientEst, const unsigned __int64 streamSyncEst)
{
  ?LoadBar_EstimateFastfiles@@YAXPEBUDB_FastfileInfo@@PEB_KI_K2@Z(zones, estimates, numZones, transientEst, streamSyncEst);
}

/*
==============
LoadBar_CheckForDBStart
==============
*/

void LoadBar_CheckForDBStart(void)
{
  ?LoadBar_CheckForDBStart@@YAXXZ();
}

/*
==============
LoadBar_LoadingFastfile
==============
*/

void __fastcall LoadBar_LoadingFastfile(const unsigned __int64 residentBytes, unsigned __int64 estimatedAlwaysLoaded)
{
  ?LoadBar_LoadingFastfile@@YAX_K_K@Z(residentBytes, estimatedAlwaysLoaded);
}

/*
==============
LoadBar_StartStreamSync
==============
*/

void LoadBar_StartStreamSync(void)
{
  ?LoadBar_StartStreamSync@@YAXXZ();
}

/*
==============
LoadBar_FinishAlwaysLoaded
==============
*/

void LoadBar_FinishAlwaysLoaded(void)
{
  ?LoadBar_FinishAlwaysLoaded@@YAXXZ();
}

/*
==============
LoadBar_GetLoadedFraction
==============
*/

double __fastcall LoadBar_GetLoadedFraction()
{
  double result; 

  *(float *)&result = ?LoadBar_GetLoadedFraction@@YAMXZ();
  return result;
}

/*
==============
LoadBar_BeginFastfile
==============
*/

void __fastcall LoadBar_BeginFastfile(const char *name, const unsigned int flags)
{
  ?LoadBar_BeginFastfile@@YAXPEBDI@Z(name, flags);
}

/*
==============
LoadBar_ReadAlwaysLoaded
==============
*/

void __fastcall LoadBar_ReadAlwaysLoaded(const unsigned __int64 size)
{
  ?LoadBar_ReadAlwaysLoaded@@YAX_K@Z(size);
}

/*
==============
LoadBar_StartAlwaysLoaded
==============
*/

void __fastcall LoadBar_StartAlwaysLoaded(const unsigned __int64 alwaysLoadedSize)
{
  ?LoadBar_StartAlwaysLoaded@@YAX_K@Z(alwaysLoadedSize);
}

/*
==============
LoadBar_FinishFastfile
==============
*/

void LoadBar_FinishFastfile(void)
{
  ?LoadBar_FinishFastfile@@YAXXZ();
}

/*
==============
ScopedThreadCheck::ScopedThreadCheck
==============
*/

void __fastcall ScopedThreadCheck::ScopedThreadCheck(ScopedThreadCheck *this, const char *const function)
{
  ??0ScopedThreadCheck@@QEAA@QEBD@Z(this, function);
}

/*
==============
LoadBar_IsComplete
==============
*/

int __fastcall LoadBar_IsComplete()
{
  return ?LoadBar_IsComplete@@YAHXZ();
}

/*
==============
LoadBar_UpdateProgress
==============
*/

void LoadBar_UpdateProgress(void)
{
  ?LoadBar_UpdateProgress@@YAXXZ();
}

/*
==============
ScopedThreadCheck::ScopedThreadCheck
==============
*/
void ScopedThreadCheck::ScopedThreadCheck(ScopedThreadCheck *this, const char *const function)
{
  signed __int32 CurrentThreadContext; 
  const char *v4; 
  const char *ThreadContextName; 

  CurrentThreadContext = Sys_GetCurrentThreadContext();
  if ( ((unsigned __int8)&s_threadCheck & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_threadCheck) )
    __debugbreak();
  if ( _InterlockedCompareExchange((volatile signed __int32 *)&s_threadCheck, CurrentThreadContext, 28) != 28 )
  {
    v4 = (const char *)s_lastFunction;
    ThreadContextName = Sys_GetThreadContextName(s_threadCheck);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_loadingbar.cpp", 104, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Loadingbar - ScopedThreadCheck - %s - Last func: %s", ThreadContextName, v4) )
      __debugbreak();
  }
  s_lastFunction = function;
}

/*
==============
ScopedThreadCheck::~ScopedThreadCheck
==============
*/
void ScopedThreadCheck::~ScopedThreadCheck(ScopedThreadCheck *this)
{
  signed __int32 CurrentThreadContext; 

  CurrentThreadContext = Sys_GetCurrentThreadContext();
  if ( ((unsigned __int8)&s_threadCheck & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_threadCheck) )
    __debugbreak();
  if ( CurrentThreadContext != _InterlockedCompareExchange((volatile signed __int32 *)&s_threadCheck, 28, CurrentThreadContext) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_loadingbar.cpp", 113, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Loadingbar - ScopedThreadCheck - destructor failure") )
    __debugbreak();
}

/*
==============
AbortLoadBar
==============
*/
__int64 AbortLoadBar()
{
  const char *VariantString; 
  __int64 result; 

  VariantString = Dvar_GetVariantString("start");
  if ( VariantString && *VariantString )
    Com_PrintWarning(16, "WARNING: Error calculating loading bar - Likely due to manual specification of \"start\"=%s.\n", VariantString);
  result = s_loadBar.numJobs;
  s_loadBar.currentJob = s_loadBar.numJobs;
  return result;
}

/*
==============
AddNewJob
==============
*/
void AddNewJob(const LoadJobType type, const unsigned __int64 estimate, const char *name)
{
  float v6; 
  float v7; 
  int v8; 
  unsigned __int8 i; 
  unsigned int numJobs; 
  int v11; 

  if ( s_loadBar.numJobs >= 0x20 )
  {
    v11 = 32;
    numJobs = s_loadBar.numJobs;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_loadingbar.cpp", 166, ASSERT_TYPE_ASSERT, "(unsigned)( s_loadBar.numJobs ) < (unsigned)( MAX_BAR_JOBS )", "s_loadBar.numJobs doesn't index MAX_BAR_JOBS\n\t%i not in [0, %i)", numJobs, v11) )
      __debugbreak();
  }
  if ( ShouldConsiderForLoadBar(name) )
  {
    v6 = (float)(__int64)estimate;
    s_loadBar.jobs[s_loadBar.numJobs].type = type;
    if ( (estimate & 0x8000000000000000ui64) != 0i64 )
    {
      v7 = (float)(__int64)estimate;
      v6 = v7 + 1.8446744e19;
    }
    v8 = 0;
    s_loadBar.jobs[s_loadBar.numJobs].barSize = v6;
    s_loadBar.jobs[s_loadBar.numJobs].byteSize = 0i64;
    for ( i = *name; *name; i = *name )
    {
      ++name;
      v8 = i ^ (16777619 * v8);
    }
    s_loadBar.jobs[s_loadBar.numJobs++].hashName = v8;
  }
}

/*
==============
LoadBar_BeginFastfile
==============
*/
void LoadBar_BeginFastfile(const char *name, const unsigned int flags)
{
  signed __int32 CurrentThreadContext; 
  const char *v5; 
  const char *ThreadContextName; 
  LoadingBarJob *v7; 
  unsigned int v8; 
  int loadingTransient; 
  int v10; 
  const char *v11; 
  unsigned __int8 i; 
  signed __int32 v13; 

  CurrentThreadContext = Sys_GetCurrentThreadContext();
  if ( ((unsigned __int8)&s_threadCheck & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_threadCheck) )
    __debugbreak();
  if ( _InterlockedCompareExchange((volatile signed __int32 *)&s_threadCheck, CurrentThreadContext, 28) != 28 )
  {
    v5 = (const char *)s_lastFunction;
    ThreadContextName = Sys_GetThreadContextName(s_threadCheck);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_loadingbar.cpp", 104, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Loadingbar - ScopedThreadCheck - %s - Last func: %s", ThreadContextName, v5) )
      __debugbreak();
  }
  s_lastFunction = "LoadBar_BeginFastfile";
  if ( !Sys_IsDatabaseThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_loadingbar.cpp", 443, ASSERT_TYPE_ASSERT, "(Sys_IsDatabaseThread())", (const char *)&queryFormat, "Sys_IsDatabaseThread()") )
    __debugbreak();
  if ( (flags & 0x80100) == 256 && (flags & 0x400) == 0 )
  {
    if ( ShouldConsiderForLoadBar(name) )
    {
      if ( s_loadBar.currentJob < s_loadBar.numJobs )
      {
        v7 = &s_loadBar.jobs[s_loadBar.currentJob];
        if ( v7 )
        {
          if ( v7->type )
            goto LABEL_16;
          v8 = flags & 0x5000;
          loadingTransient = s_loadBar.loadingTransient;
          if ( v8 )
            loadingTransient = 1;
          s_loadBar.loadingTransient = loadingTransient;
          v10 = 0;
          v11 = "transient";
          if ( !v8 )
            v11 = name;
          for ( i = *v11; *v11; i = *v11 )
          {
            ++v11;
            v10 = i ^ (16777619 * v10);
          }
          if ( v7->hashName != v10 )
LABEL_16:
            AbortLoadBar();
          else
            s_loadBar.loadingFastfile = 1;
        }
      }
    }
  }
  v13 = Sys_GetCurrentThreadContext();
  if ( ((unsigned __int64)&s_threadCheck & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_threadCheck) )
    __debugbreak();
  if ( v13 != _InterlockedCompareExchange((volatile signed __int32 *)&s_threadCheck, 28, v13) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_loadingbar.cpp", 113, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Loadingbar - ScopedThreadCheck - destructor failure") )
    __debugbreak();
}

/*
==============
LoadBar_CheckForDBStart
==============
*/
void LoadBar_CheckForDBStart(void)
{
  signed __int32 CurrentThreadContext; 
  const char *v1; 
  const char *ThreadContextName; 
  int dbLoadStarted; 
  signed __int32 v4; 

  CurrentThreadContext = Sys_GetCurrentThreadContext();
  if ( ((unsigned __int8)&s_threadCheck & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_threadCheck) )
    __debugbreak();
  if ( _InterlockedCompareExchange((volatile signed __int32 *)&s_threadCheck, CurrentThreadContext, 28) != 28 )
  {
    v1 = (const char *)s_lastFunction;
    ThreadContextName = Sys_GetThreadContextName(s_threadCheck);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_loadingbar.cpp", 104, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Loadingbar - ScopedThreadCheck - %s - Last func: %s", ThreadContextName, v1) )
      __debugbreak();
  }
  s_lastFunction = "LoadBar_CheckForDBStart";
  if ( !Sys_IsDatabaseThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_loadingbar.cpp", 352, ASSERT_TYPE_ASSERT, "(Sys_IsDatabaseThread())", (const char *)&queryFormat, "Sys_IsDatabaseThread()") )
    __debugbreak();
  if ( s_loadBar.currentJob < s_loadBar.numJobs )
  {
    dbLoadStarted = s_loadBar.dbLoadStarted;
    if ( &s_loadBar.jobs[s_loadBar.currentJob] )
      dbLoadStarted = 1;
    s_loadBar.dbLoadStarted = dbLoadStarted;
  }
  v4 = Sys_GetCurrentThreadContext();
  if ( ((unsigned __int64)&s_threadCheck & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_threadCheck) )
    __debugbreak();
  if ( v4 != _InterlockedCompareExchange((volatile signed __int32 *)&s_threadCheck, 28, v4) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_loadingbar.cpp", 113, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Loadingbar - ScopedThreadCheck - destructor failure") )
    __debugbreak();
}

/*
==============
LoadBar_EstimateFastfiles
==============
*/
void LoadBar_EstimateFastfiles(const DB_FastfileInfo *zones, const unsigned __int64 *estimates, const unsigned int numZones, const unsigned __int64 transientEst, const unsigned __int64 streamSyncEst)
{
  __int64 v6; 
  signed __int32 CurrentThreadContext; 
  const char *v10; 
  const char *ThreadContextName; 
  __int64 v12; 
  int v13; 
  __int64 v14; 
  __m128 v15; 
  unsigned int v16; 
  __m128 v17; 
  __m128 v28; 
  float *p_barSize; 
  __int64 v30; 
  __m128 v31; 
  signed __int32 v32; 
  char dest[64]; 

  v6 = numZones;
  CurrentThreadContext = Sys_GetCurrentThreadContext();
  if ( ((unsigned __int8)&s_threadCheck & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_threadCheck) )
    __debugbreak();
  if ( _InterlockedCompareExchange((volatile signed __int32 *)&s_threadCheck, CurrentThreadContext, 28) != 28 )
  {
    v10 = (const char *)s_lastFunction;
    ThreadContextName = Sys_GetThreadContextName(s_threadCheck);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_loadingbar.cpp", 104, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Loadingbar - ScopedThreadCheck - %s - Last func: %s", ThreadContextName, v10) )
      __debugbreak();
  }
  s_lastFunction = "LoadBar_EstimateFastfiles";
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_loadingbar.cpp", 368, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  memset_0(&s_loadBar, 0, sizeof(s_loadBar));
  if ( (_DWORD)v6 )
  {
    v12 = v6;
    do
    {
      Com_sprintf<64>((char (*)[64])dest, "%s%s", "techsets_", zones->name);
      AddNewJob(LOADJOB_FF_RESIDENT, 0xA00000ui64, dest);
      AddNewJob(LOADJOB_FF_RESIDENT, *estimates, zones->name);
      ++zones;
      ++estimates;
      --v12;
    }
    while ( v12 );
  }
  AddNewJob(LOADJOB_FF_ALWAYSLOADED, 0i64, (const char *)&queryFormat.fmt + 3);
  if ( DB_IsDebugZoneActive() )
    AddNewJob(LOADJOB_FF_ALWAYSLOADED, 0i64, (const char *)&queryFormat.fmt + 3);
  if ( transientEst )
  {
    AddNewJob(LOADJOB_FF_RESIDENT, transientEst, "transient");
    AddNewJob(LOADJOB_FF_ALWAYSLOADED, 0i64, (const char *)&queryFormat.fmt + 3);
  }
  v13 = 2;
  if ( streamSyncEst )
    AddNewJob(LOADJOB_STREAMSYNC, streamSyncEst, (const char *)&queryFormat.fmt + 3);
  v14 = 0i64;
  s_loadBar.currentJob = 0;
  v15 = 0i64;
  v16 = 0;
  if ( s_loadBar.numJobs )
  {
    if ( s_loadBar.numJobs >= 8 )
    {
      v17 = 0i64;
      do
      {
        _XMM0 = LODWORD(s_loadBar.jobs[v16].barSize);
        __asm
        {
          vinsertps xmm0, xmm0, dword ptr [r12+rdx*8+4], 10h
          vinsertps xmm0, xmm0, dword ptr [r12+r8*8+4], 20h ; ' '
          vinsertps xmm0, xmm0, dword ptr [r12+r9*8+4], 30h ; '0'
        }
        v15 = _mm128_add_ps(v15, _XMM0);
        _XMM0 = LODWORD(s_loadBar.jobs[v13 + 2].barSize);
        __asm
        {
          vinsertps xmm0, xmm0, dword ptr [r12+rdx*8+4], 10h
          vinsertps xmm0, xmm0, dword ptr [r12+r8*8+4], 20h ; ' '
          vinsertps xmm0, xmm0, dword ptr [r12+r9*8+4], 30h ; '0'
        }
        v17 = _mm128_add_ps(v17, _XMM0);
        v16 += 8;
        v13 += 8;
      }
      while ( v16 < (s_loadBar.numJobs & 0xFFFFFFF8) );
      _XMM1 = _mm128_add_ps(v17, v15);
      __asm { vmovhlps xmm0, xmm1, xmm1 }
      v28 = _mm128_add_ps(_XMM0, _XMM1);
      v28.m128_f32[0] = v28.m128_f32[0] + _mm_shuffle_ps(v28, v28, 245).m128_f32[0];
      v15 = v28;
    }
    if ( v16 < s_loadBar.numJobs )
    {
      p_barSize = &s_loadBar.jobs[v16].barSize;
      v30 = s_loadBar.numJobs - v16;
      do
      {
        v31 = v15;
        v31.m128_f32[0] = v15.m128_f32[0] + *p_barSize;
        v15 = v31;
        p_barSize += 6;
        --v30;
      }
      while ( v30 );
    }
    if ( v15.m128_f32[0] > 0.0 )
    {
      do
      {
        s_loadBar.jobs[v14].barSize = (float)(1.0 / v15.m128_f32[0]) * s_loadBar.jobs[v14].barSize;
        v14 = (unsigned int)(v14 + 1);
      }
      while ( (unsigned int)v14 < s_loadBar.numJobs );
    }
  }
  v32 = Sys_GetCurrentThreadContext();
  if ( ((unsigned __int64)&s_threadCheck & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_threadCheck) )
    __debugbreak();
  if ( v32 != _InterlockedCompareExchange((volatile signed __int32 *)&s_threadCheck, 28, v32) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_loadingbar.cpp", 113, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Loadingbar - ScopedThreadCheck - destructor failure") )
    __debugbreak();
}

/*
==============
LoadBar_FinishAlwaysLoaded
==============
*/
void LoadBar_FinishAlwaysLoaded(void)
{
  LoadingBarJob *v0; 
  ScopedThreadCheck v1; 

  if ( !Sys_IsMainThread() && s_loadBar.dbLoadStarted )
  {
    ScopedThreadCheck::ScopedThreadCheck(&v1, "LoadBar_FinishAlwaysLoaded");
    if ( !Sys_IsDatabaseThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_loadingbar.cpp", 618, ASSERT_TYPE_ASSERT, "(Sys_IsDatabaseThread())", (const char *)&queryFormat, "Sys_IsDatabaseThread()", -2i64) )
      __debugbreak();
    if ( s_loadBar.currentJob < s_loadBar.numJobs )
    {
      v0 = &s_loadBar.jobs[s_loadBar.currentJob];
      if ( v0 )
      {
        if ( v0->type == LOADJOB_FF_ALWAYSLOADED )
          NextLoadJob(v0);
      }
    }
    ScopedThreadCheck::~ScopedThreadCheck(&v1);
  }
}

/*
==============
LoadBar_FinishFastfile
==============
*/
void LoadBar_FinishFastfile(void)
{
  signed __int32 CurrentThreadContext; 
  const char *v1; 
  const char *ThreadContextName; 
  LoadingBarJob *v3; 
  signed __int32 v4; 

  CurrentThreadContext = Sys_GetCurrentThreadContext();
  if ( ((unsigned __int8)&s_threadCheck & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_threadCheck) )
    __debugbreak();
  if ( _InterlockedCompareExchange((volatile signed __int32 *)&s_threadCheck, CurrentThreadContext, 28) != 28 )
  {
    v1 = (const char *)s_lastFunction;
    ThreadContextName = Sys_GetThreadContextName(s_threadCheck);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_loadingbar.cpp", 104, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Loadingbar - ScopedThreadCheck - %s - Last func: %s", ThreadContextName, v1) )
      __debugbreak();
  }
  s_lastFunction = "LoadBar_FinishFastfile";
  if ( !Sys_IsDatabaseThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_loadingbar.cpp", 565, ASSERT_TYPE_ASSERT, "(Sys_IsDatabaseThread())", (const char *)&queryFormat, "Sys_IsDatabaseThread()") )
    __debugbreak();
  if ( s_loadBar.loadingFastfile )
  {
    if ( s_loadBar.currentJob < s_loadBar.numJobs )
    {
      v3 = &s_loadBar.jobs[s_loadBar.currentJob];
      if ( v3 )
      {
        if ( v3->type )
        {
          AbortLoadBar();
        }
        else
        {
          NextLoadJob(v3);
          *(_QWORD *)&s_loadBar.loadingFastfile = 0i64;
        }
      }
    }
  }
  v4 = Sys_GetCurrentThreadContext();
  if ( ((unsigned __int64)&s_threadCheck & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_threadCheck) )
    __debugbreak();
  if ( v4 != _InterlockedCompareExchange((volatile signed __int32 *)&s_threadCheck, 28, v4) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_loadingbar.cpp", 113, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Loadingbar - ScopedThreadCheck - destructor failure") )
    __debugbreak();
}

/*
==============
LoadBar_FinishStreamSync
==============
*/
void LoadBar_FinishStreamSync(void)
{
  signed __int32 CurrentThreadContext; 
  const char *v1; 
  const char *ThreadContextName; 
  LoadingBarJob *v3; 
  signed __int32 v4; 

  CurrentThreadContext = Sys_GetCurrentThreadContext();
  if ( ((unsigned __int8)&s_threadCheck & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_threadCheck) )
    __debugbreak();
  if ( _InterlockedCompareExchange((volatile signed __int32 *)&s_threadCheck, CurrentThreadContext, 28) != 28 )
  {
    v1 = (const char *)s_lastFunction;
    ThreadContextName = Sys_GetThreadContextName(s_threadCheck);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_loadingbar.cpp", 104, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Loadingbar - ScopedThreadCheck - %s - Last func: %s", ThreadContextName, v1) )
      __debugbreak();
  }
  s_lastFunction = "LoadBar_FinishStreamSync";
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_loadingbar.cpp", 651, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( s_loadBar.currentJob < s_loadBar.numJobs )
  {
    v3 = &s_loadBar.jobs[s_loadBar.currentJob];
    if ( v3 )
    {
      if ( v3->type == LOADJOB_STREAMSYNC )
        NextLoadJob(v3);
      else
        AbortLoadBar();
    }
  }
  v4 = Sys_GetCurrentThreadContext();
  if ( ((unsigned __int64)&s_threadCheck & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_threadCheck) )
    __debugbreak();
  if ( v4 != _InterlockedCompareExchange((volatile signed __int32 *)&s_threadCheck, 28, v4) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_loadingbar.cpp", 113, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Loadingbar - ScopedThreadCheck - destructor failure") )
    __debugbreak();
}

/*
==============
LoadBar_GetLoadedFraction
==============
*/
float LoadBar_GetLoadedFraction()
{
  return s_loadBar.uiDoneSize;
}

/*
==============
LoadBar_IsComplete
==============
*/
__int64 LoadBar_IsComplete()
{
  unsigned int v0; 

  v0 = 0;
  LOBYTE(v0) = s_loadBar.currentJob >= s_loadBar.numJobs || &s_loadBar.jobs[s_loadBar.currentJob] == NULL;
  return v0;
}

/*
==============
LoadBar_LoadingFastfile
==============
*/
void LoadBar_LoadingFastfile(const unsigned __int64 residentBytes, unsigned __int64 estimatedAlwaysLoaded)
{
  signed __int32 CurrentThreadContext; 
  const char *v5; 
  const char *ThreadContextName; 
  LoadingBarJob *v7; 
  LoadingBarJob *v8; 
  __int64 v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float barSize; 
  signed __int32 v16; 

  CurrentThreadContext = Sys_GetCurrentThreadContext();
  if ( ((unsigned __int8)&s_threadCheck & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_threadCheck) )
    __debugbreak();
  if ( _InterlockedCompareExchange((volatile signed __int32 *)&s_threadCheck, CurrentThreadContext, 28) != 28 )
  {
    v5 = (const char *)s_lastFunction;
    ThreadContextName = Sys_GetThreadContextName(s_threadCheck);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_loadingbar.cpp", 104, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Loadingbar - ScopedThreadCheck - %s - Last func: %s", ThreadContextName, v5) )
      __debugbreak();
  }
  s_lastFunction = "LoadBar_LoadingFastfile";
  if ( !Sys_IsDatabaseThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_loadingbar.cpp", 501, ASSERT_TYPE_ASSERT, "(Sys_IsDatabaseThread())", (const char *)&queryFormat, "Sys_IsDatabaseThread()") )
    __debugbreak();
  if ( s_loadBar.loadingFastfile )
  {
    if ( s_loadBar.currentJob < s_loadBar.numJobs )
    {
      v7 = &s_loadBar.jobs[s_loadBar.currentJob];
      if ( v7 )
      {
        if ( v7->type )
        {
          AbortLoadBar();
        }
        else
        {
          v8 = NULL;
          s_loadBar.loadCountResident = 0i64;
          s_loadBar.loadCountAlwaysLoaded = 0;
          v9 = s_loadBar.currentJob + 1;
          if ( (unsigned int)v9 >= s_loadBar.numJobs )
          {
LABEL_19:
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_loadingbar.cpp", 524, ASSERT_TYPE_ASSERT, "(alwaysLoadedJob && ( alwaysLoadedJob->type == LOADJOB_FF_ALWAYSLOADED ))", (const char *)&queryFormat, "alwaysLoadedJob && ( alwaysLoadedJob->type == LOADJOB_FF_ALWAYSLOADED )") )
              __debugbreak();
          }
          else
          {
            while ( 1 )
            {
              v8 = &s_loadBar.jobs[v9];
              if ( v8->type == LOADJOB_FF_ALWAYSLOADED )
                break;
              v9 = (unsigned int)(v9 + 1);
              if ( (unsigned int)v9 >= s_loadBar.numJobs )
              {
                if ( v8->type == LOADJOB_FF_ALWAYSLOADED )
                  break;
                goto LABEL_19;
              }
            }
          }
          if ( s_loadBar.loadingTransient )
          {
            if ( estimatedAlwaysLoaded && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_loadingbar.cpp", 534, ASSERT_TYPE_ASSERT, "(estimatedAlwaysLoaded == 0)", (const char *)&queryFormat, "estimatedAlwaysLoaded == 0") )
              __debugbreak();
            estimatedAlwaysLoaded = residentBytes >> 2;
          }
          v7->byteSize = residentBytes;
          v8->byteSize += estimatedAlwaysLoaded;
          v10 = (float)(__int64)residentBytes;
          if ( (residentBytes & 0x8000000000000000ui64) != 0i64 )
          {
            v11 = (float)(__int64)residentBytes;
            v10 = v11 + 1.8446744e19;
          }
          v12 = (float)(__int64)estimatedAlwaysLoaded;
          if ( (estimatedAlwaysLoaded & 0x8000000000000000ui64) != 0i64 )
          {
            v13 = (float)(__int64)estimatedAlwaysLoaded;
            v12 = v13 + 1.8446744e19;
          }
          v14 = v12 + v10;
          if ( (float)(v12 + v10) > 0.0 )
          {
            barSize = v7->barSize;
            v7->barSize = (float)((float)(1.0 / v14) * v10) * barSize;
            v8->barSize = (float)((float)((float)(1.0 / v14) * v12) * barSize) + v8->barSize;
          }
        }
      }
    }
  }
  v16 = Sys_GetCurrentThreadContext();
  if ( ((unsigned __int64)&s_threadCheck & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_threadCheck) )
    __debugbreak();
  if ( v16 != _InterlockedCompareExchange((volatile signed __int32 *)&s_threadCheck, 28, v16) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_loadingbar.cpp", 113, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Loadingbar - ScopedThreadCheck - destructor failure") )
    __debugbreak();
}

/*
==============
LoadBar_ReadAlwaysLoaded
==============
*/
void LoadBar_ReadAlwaysLoaded(const unsigned __int64 size)
{
  if ( !Sys_IsMainThread() && s_loadBar.dbLoadStarted )
  {
    if ( !Sys_IsDatabaseThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_loadingbar.cpp", 669, ASSERT_TYPE_ASSERT, "(Sys_IsDatabaseThread())", (const char *)&queryFormat, "Sys_IsDatabaseThread()") )
      __debugbreak();
    if ( (size > 0x7FFFFFFFFFFFFFFFi64 || size + 0x80000000 > 0xFFFFFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,unsigned __int64>(unsigned __int64)", "signed", (int)size, "unsigned", size) )
      __debugbreak();
    if ( ((unsigned __int8)&s_loadBar.loadCountAlwaysLoaded & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &s_loadBar.loadCountAlwaysLoaded) )
      __debugbreak();
    _InterlockedExchangeAdd(&s_loadBar.loadCountAlwaysLoaded, size);
    if ( s_loadBar.loadCountAlwaysLoaded < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_loadingbar.cpp", 672, ASSERT_TYPE_ASSERT, "(s_loadBar.loadCountAlwaysLoaded >= 0)", (const char *)&queryFormat, "s_loadBar.loadCountAlwaysLoaded >= 0") )
      __debugbreak();
  }
}

/*
==============
LoadBar_ReadResident
==============
*/
void LoadBar_ReadResident(const unsigned __int64 size)
{
  if ( !Sys_IsDatabaseThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_loadingbar.cpp", 692, ASSERT_TYPE_ASSERT, "(Sys_IsDatabaseThread())", (const char *)&queryFormat, "Sys_IsDatabaseThread()") )
    __debugbreak();
  s_loadBar.loadCountResident += size;
}

/*
==============
LoadBar_ReadStreamSyncSP
==============
*/
void LoadBar_ReadStreamSyncSP(const unsigned __int64 loadPercent)
{
  unsigned __int64 loadPercentStreamSyncSP; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_loadingbar.cpp", 678, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( loadPercent > 0x2710 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_loadingbar.cpp", 679, ASSERT_TYPE_ASSERT, "( loadPercent ) <= ( 100 * 100 )", "%s <= %s\n\t%zu, %zu", "loadPercent", "100 * 100", loadPercent, 0x2710ui64) )
    __debugbreak();
  loadPercentStreamSyncSP = s_loadBar.loadPercentStreamSyncSP;
  if ( s_loadBar.dbLoadStarted )
    loadPercentStreamSyncSP = loadPercent;
  s_loadBar.loadPercentStreamSyncSP = loadPercentStreamSyncSP;
}

/*
==============
LoadBar_Reset
==============
*/
void LoadBar_Reset(void)
{
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_loadingbar.cpp", 340, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  memset_0(&s_loadBar, 0, sizeof(s_loadBar));
}

/*
==============
LoadBar_StartAlwaysLoaded
==============
*/
void LoadBar_StartAlwaysLoaded(const unsigned __int64 alwaysLoadedSize)
{
  LoadingBarJob *v2; 
  ScopedThreadCheck v3; 

  if ( !Sys_IsMainThread() && s_loadBar.dbLoadStarted )
  {
    ScopedThreadCheck::ScopedThreadCheck(&v3, "LoadBar_StartAlwaysLoaded");
    if ( !Sys_IsDatabaseThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_loadingbar.cpp", 595, ASSERT_TYPE_ASSERT, "(Sys_IsDatabaseThread())", (const char *)&queryFormat, "Sys_IsDatabaseThread()", -2i64) )
      __debugbreak();
    if ( s_loadBar.currentJob < s_loadBar.numJobs )
    {
      v2 = &s_loadBar.jobs[s_loadBar.currentJob];
      if ( v2 )
      {
        if ( v2->type == LOADJOB_FF_ALWAYSLOADED )
        {
          s_loadBar.loadCountAlwaysLoaded = 0;
          v2->byteSize = alwaysLoadedSize;
        }
      }
    }
    ScopedThreadCheck::~ScopedThreadCheck(&v3);
  }
}

/*
==============
LoadBar_StartStreamSync
==============
*/
void LoadBar_StartStreamSync(void)
{
  signed __int32 CurrentThreadContext; 
  const char *v1; 
  const char *ThreadContextName; 
  LoadingBarJob *v3; 
  signed __int32 v4; 

  CurrentThreadContext = Sys_GetCurrentThreadContext();
  if ( ((unsigned __int8)&s_threadCheck & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_threadCheck) )
    __debugbreak();
  if ( _InterlockedCompareExchange((volatile signed __int32 *)&s_threadCheck, CurrentThreadContext, 28) != 28 )
  {
    v1 = (const char *)s_lastFunction;
    ThreadContextName = Sys_GetThreadContextName(s_threadCheck);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_loadingbar.cpp", 104, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Loadingbar - ScopedThreadCheck - %s - Last func: %s", ThreadContextName, v1) )
      __debugbreak();
  }
  s_lastFunction = "LoadBar_StartStreamSync";
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_loadingbar.cpp", 634, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( s_loadBar.currentJob < s_loadBar.numJobs )
  {
    v3 = &s_loadBar.jobs[s_loadBar.currentJob];
    if ( v3 )
    {
      if ( v3->type == LOADJOB_STREAMSYNC )
      {
        s_loadBar.loadPercentStreamSyncSP = 0i64;
        v3->byteSize = 10000i64;
      }
      else
      {
        AbortLoadBar();
      }
    }
  }
  v4 = Sys_GetCurrentThreadContext();
  if ( ((unsigned __int64)&s_threadCheck & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_threadCheck) )
    __debugbreak();
  if ( v4 != _InterlockedCompareExchange((volatile signed __int32 *)&s_threadCheck, 28, v4) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_loadingbar.cpp", 113, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Loadingbar - ScopedThreadCheck - destructor failure") )
    __debugbreak();
}

/*
==============
LoadBar_UpdateProgress
==============
*/
void LoadBar_UpdateProgress(void)
{
  __int64 loadCountAlwaysLoaded; 
  LoadingBarJob *v1; 
  __int128 jobDoneSize_low; 
  __int64 byteSize; 
  float barSize; 
  float v5; 
  float v6; 
  float v7; 
  float v8; 
  __int128 v9; 
  __int128 v11; 

  if ( s_loadBar.numJobs )
  {
    loadCountAlwaysLoaded = 0i64;
    if ( s_loadBar.currentJob >= s_loadBar.numJobs )
      v1 = NULL;
    else
      v1 = &s_loadBar.jobs[s_loadBar.currentJob];
    jobDoneSize_low = LODWORD(s_loadBar.jobDoneSize);
    s_loadBar.actualDoneSize = s_loadBar.jobDoneSize;
    if ( !v1 )
    {
      s_loadBar.uiDoneSize = s_loadBar.jobDoneSize;
      return;
    }
    byteSize = v1->byteSize;
    if ( !byteSize )
      goto LABEL_23;
    if ( v1->type )
    {
      if ( v1->type == LOADJOB_FF_ALWAYSLOADED )
      {
        loadCountAlwaysLoaded = s_loadBar.loadCountAlwaysLoaded;
        byteSize = v1->byteSize;
        jobDoneSize_low = LODWORD(s_loadBar.actualDoneSize);
      }
      else
      {
        if ( v1->type != LOADJOB_STREAMSYNC )
          goto LABEL_15;
        loadCountAlwaysLoaded = s_loadBar.loadPercentStreamSyncSP;
      }
    }
    else
    {
      loadCountAlwaysLoaded = s_loadBar.loadCountResident;
    }
    if ( loadCountAlwaysLoaded > (unsigned __int64)byteSize )
    {
      barSize = v1->barSize;
LABEL_22:
      v9 = jobDoneSize_low;
      *(float *)&v9 = *(float *)&jobDoneSize_low + barSize;
      jobDoneSize_low = v9;
      s_loadBar.actualDoneSize = *(float *)&v9;
LABEL_23:
      if ( *(float *)&jobDoneSize_low > s_loadBar.uiDoneSize )
      {
        v11 = jobDoneSize_low;
        *(float *)&v11 = *(float *)&jobDoneSize_low - s_loadBar.uiDoneSize;
        _XMM0 = v11;
        __asm { vminss  xmm1, xmm0, cs:__real@3c23d70a }
        s_loadBar.uiDoneSize = s_loadBar.uiDoneSize + *(float *)&_XMM1;
      }
      return;
    }
LABEL_15:
    if ( byteSize )
    {
      v5 = (float)loadCountAlwaysLoaded;
      if ( loadCountAlwaysLoaded < 0 )
      {
        v6 = (float)loadCountAlwaysLoaded;
        v5 = v6 + 1.8446744e19;
      }
      v7 = (float)byteSize;
      if ( byteSize < 0 )
      {
        v8 = (float)byteSize;
        v7 = v8 + 1.8446744e19;
      }
      barSize = (float)(v5 / v7) * v1->barSize;
    }
    else
    {
      barSize = 0.0;
    }
    goto LABEL_22;
  }
}

/*
==============
NextLoadJob
==============
*/
void NextLoadJob(LoadingBarJob *currentJob)
{
  float *v2; 

  if ( !currentJob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_loadingbar.cpp", 255, ASSERT_TYPE_ASSERT, "(currentJob)", (const char *)&queryFormat, "currentJob") )
    __debugbreak();
  if ( s_loadBar.currentJob < s_loadBar.numJobs )
  {
    v2 = (float *)&s_loadBar.jobs[s_loadBar.currentJob];
    if ( v2 )
    {
      if ( *(_DWORD *)v2 == currentJob->type )
      {
        s_loadBar.jobDoneSize = s_loadBar.jobDoneSize + v2[1];
        ++s_loadBar.currentJob;
      }
      else
      {
        AbortLoadBar();
      }
    }
  }
}

/*
==============
ShouldConsiderForLoadBar
==============
*/
_BOOL8 ShouldConsiderForLoadBar(const char *name)
{
  return I_stristr(name, "dev_") != name && I_stristr(name, "dbgshd_") != name && !DB_Zones_IsLocalizedZoneName(name) && !DB_Zones_IsRegionalZoneName(name) && I_stristr(name, "srv_") != name;
}

