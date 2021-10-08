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
  int v10; 
  unsigned __int8 i; 
  unsigned int numJobs; 
  int v14; 

  if ( s_loadBar.numJobs >= 0x20 )
  {
    v14 = 32;
    numJobs = s_loadBar.numJobs;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_loadingbar.cpp", 166, ASSERT_TYPE_ASSERT, "(unsigned)( s_loadBar.numJobs ) < (unsigned)( MAX_BAR_JOBS )", "s_loadBar.numJobs doesn't index MAX_BAR_JOBS\n\t%i not in [0, %i)", numJobs, v14) )
      __debugbreak();
  }
  if ( ShouldConsiderForLoadBar(name) )
  {
    _R8 = &s_loadBar;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rdi
    }
    s_loadBar.jobs[s_loadBar.numJobs].type = type;
    if ( (estimate & 0x8000000000000000ui64) != 0i64 )
      __asm { vaddss  xmm0, xmm0, cs:__real@5f800000 }
    v10 = 0;
    _RCX = 3i64 * s_loadBar.numJobs;
    __asm { vmovss  dword ptr [r8+rcx*8+4], xmm0 }
    s_loadBar.jobs[s_loadBar.numJobs].byteSize = 0i64;
    for ( i = *name; *name; i = *name )
    {
      ++name;
      v10 = i ^ (16777619 * v10);
    }
    s_loadBar.jobs[s_loadBar.numJobs++].hashName = v10;
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
  __int64 v9; 
  signed __int32 CurrentThreadContext; 
  const char *v13; 
  const char *ThreadContextName; 
  __int64 v16; 
  int v17; 
  __int64 v18; 
  unsigned int v21; 
  bool v37; 
  float *p_barSize; 
  __int64 v39; 
  bool v40; 
  signed __int32 v45; 
  char dest[64]; 

  v9 = numZones;
  CurrentThreadContext = Sys_GetCurrentThreadContext();
  if ( ((unsigned __int8)&s_threadCheck & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_threadCheck) )
    __debugbreak();
  if ( _InterlockedCompareExchange((volatile signed __int32 *)&s_threadCheck, CurrentThreadContext, 28) != 28 )
  {
    v13 = (const char *)s_lastFunction;
    ThreadContextName = Sys_GetThreadContextName(s_threadCheck);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_loadingbar.cpp", 104, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Loadingbar - ScopedThreadCheck - %s - Last func: %s", ThreadContextName, v13) )
      __debugbreak();
  }
  s_lastFunction = "LoadBar_EstimateFastfiles";
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_loadingbar.cpp", 368, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  _R12 = &s_loadBar;
  memset_0(&s_loadBar, 0, sizeof(s_loadBar));
  if ( (_DWORD)v9 )
  {
    v16 = v9;
    do
    {
      Com_sprintf<64>((char (*)[64])dest, "%s%s", "techsets_", zones->name);
      AddNewJob(LOADJOB_FF_RESIDENT, 0xA00000ui64, dest);
      AddNewJob(LOADJOB_FF_RESIDENT, *estimates, zones->name);
      ++zones;
      ++estimates;
      --v16;
    }
    while ( v16 );
  }
  AddNewJob(LOADJOB_FF_ALWAYSLOADED, 0i64, (const char *)&queryFormat.fmt + 3);
  if ( DB_IsDebugZoneActive() )
    AddNewJob(LOADJOB_FF_ALWAYSLOADED, 0i64, (const char *)&queryFormat.fmt + 3);
  if ( transientEst )
  {
    AddNewJob(LOADJOB_FF_RESIDENT, transientEst, "transient");
    AddNewJob(LOADJOB_FF_ALWAYSLOADED, 0i64, (const char *)&queryFormat.fmt + 3);
  }
  v17 = 2;
  if ( streamSyncEst )
    AddNewJob(LOADJOB_STREAMSYNC, streamSyncEst, (const char *)&queryFormat.fmt + 3);
  v18 = 0i64;
  s_loadBar.currentJob = 0;
  __asm
  {
    vxorps  xmm3, xmm3, xmm3
    vxorps  xmm1, xmm1, xmm1
  }
  v21 = 0;
  if ( s_loadBar.numJobs )
  {
    if ( s_loadBar.numJobs >= 8 )
    {
      __asm { vxorps  xmm2, xmm2, xmm2 }
      do
      {
        _RCX = 3i64 * v21;
        __asm
        {
          vmovss  xmm0, dword ptr [r12+rcx*8+4]
          vinsertps xmm0, xmm0, dword ptr [r12+rdx*8+4], 10h
          vinsertps xmm0, xmm0, dword ptr [r12+r8*8+4], 20h ; ' '
          vinsertps xmm0, xmm0, dword ptr [r12+r9*8+4], 30h ; '0'
          vaddps  xmm1, xmm1, xmm0
        }
        _RAX = 3i64 * (unsigned int)(v17 + 2);
        __asm
        {
          vmovss  xmm0, dword ptr [r12+rax*8+4]
          vinsertps xmm0, xmm0, dword ptr [r12+rdx*8+4], 10h
          vinsertps xmm0, xmm0, dword ptr [r12+r8*8+4], 20h ; ' '
          vinsertps xmm0, xmm0, dword ptr [r12+r9*8+4], 30h ; '0'
          vaddps  xmm2, xmm2, xmm0
        }
        v21 += 8;
        v17 += 8;
      }
      while ( v21 < (s_loadBar.numJobs & 0xFFFFFFF8) );
      __asm
      {
        vaddps  xmm1, xmm2, xmm1
        vmovhlps xmm0, xmm1, xmm1
        vaddps  xmm1, xmm0, xmm1
        vshufps xmm0, xmm1, xmm1, 0F5h ; 'õ'
        vaddss  xmm1, xmm1, xmm0
      }
    }
    v37 = v21 <= s_loadBar.numJobs;
    if ( v21 < s_loadBar.numJobs )
    {
      p_barSize = &s_loadBar.jobs[v21].barSize;
      v39 = s_loadBar.numJobs - v21;
      do
      {
        __asm { vaddss  xmm1, xmm1, dword ptr [rax] }
        p_barSize += 6;
        v40 = v39-- == 0;
        v37 = v40 || v39 == 0;
      }
      while ( v39 );
    }
    __asm { vcomiss xmm1, xmm3 }
    if ( !v37 )
    {
      __asm
      {
        vmovss  xmm0, cs:__real@3f800000
        vdivss  xmm2, xmm0, xmm1
      }
      do
      {
        _RCX = 3 * v18;
        __asm
        {
          vmulss  xmm0, xmm2, dword ptr [r12+rcx*8+4]
          vmovss  dword ptr [r12+rcx*8+4], xmm0
        }
        v18 = (unsigned int)(v18 + 1);
      }
      while ( (unsigned int)v18 < s_loadBar.numJobs );
    }
  }
  v45 = Sys_GetCurrentThreadContext();
  if ( ((unsigned __int64)&s_threadCheck & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_threadCheck) )
    __debugbreak();
  if ( v45 != _InterlockedCompareExchange((volatile signed __int32 *)&s_threadCheck, 28, v45) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_loadingbar.cpp", 113, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Loadingbar - ScopedThreadCheck - destructor failure") )
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
  __asm { vmovss  xmm0, cs:s_loadBar.uiDoneSize }
  return *(float *)&_XMM0;
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
  const char *v6; 
  const char *ThreadContextName; 
  __int64 v11; 
  signed __int32 v28; 

  CurrentThreadContext = Sys_GetCurrentThreadContext();
  if ( ((unsigned __int8)&s_threadCheck & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_threadCheck) )
    __debugbreak();
  if ( _InterlockedCompareExchange((volatile signed __int32 *)&s_threadCheck, CurrentThreadContext, 28) != 28 )
  {
    v6 = (const char *)s_lastFunction;
    ThreadContextName = Sys_GetThreadContextName(s_threadCheck);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_loadingbar.cpp", 104, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Loadingbar - ScopedThreadCheck - %s - Last func: %s", ThreadContextName, v6) )
      __debugbreak();
  }
  s_lastFunction = "LoadBar_LoadingFastfile";
  if ( !Sys_IsDatabaseThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_loadingbar.cpp", 501, ASSERT_TYPE_ASSERT, "(Sys_IsDatabaseThread())", (const char *)&queryFormat, "Sys_IsDatabaseThread()") )
    __debugbreak();
  if ( s_loadBar.loadingFastfile )
  {
    if ( s_loadBar.currentJob < s_loadBar.numJobs )
    {
      _RBP = &s_loadBar.jobs[s_loadBar.currentJob];
      if ( _RBP )
      {
        if ( _RBP->type )
        {
          AbortLoadBar();
        }
        else
        {
          _RBX = NULL;
          s_loadBar.loadCountResident = 0i64;
          s_loadBar.loadCountAlwaysLoaded = 0;
          v11 = s_loadBar.currentJob + 1;
          if ( (unsigned int)v11 >= s_loadBar.numJobs )
          {
LABEL_19:
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_loadingbar.cpp", 524, ASSERT_TYPE_ASSERT, "(alwaysLoadedJob && ( alwaysLoadedJob->type == LOADJOB_FF_ALWAYSLOADED ))", (const char *)&queryFormat, "alwaysLoadedJob && ( alwaysLoadedJob->type == LOADJOB_FF_ALWAYSLOADED )") )
              __debugbreak();
          }
          else
          {
            while ( 1 )
            {
              _RBX = &s_loadBar.jobs[v11];
              if ( _RBX->type == LOADJOB_FF_ALWAYSLOADED )
                break;
              v11 = (unsigned int)(v11 + 1);
              if ( (unsigned int)v11 >= s_loadBar.numJobs )
              {
                if ( _RBX->type == LOADJOB_FF_ALWAYSLOADED )
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
          _RBP->byteSize = residentBytes;
          _RBX->byteSize += estimatedAlwaysLoaded;
          __asm
          {
            vxorps  xmm1, xmm1, xmm1
            vcvtsi2ss xmm1, xmm1, rsi
            vmovss  xmm0, cs:__real@5f800000
          }
          if ( (residentBytes & 0x8000000000000000ui64) != 0i64 )
            __asm { vaddss  xmm1, xmm1, xmm0 }
          __asm
          {
            vxorps  xmm5, xmm5, xmm5
            vcvtsi2ss xmm5, xmm5, rdi
          }
          if ( (estimatedAlwaysLoaded & 0x8000000000000000ui64) != 0i64 )
            __asm { vaddss  xmm5, xmm5, xmm0 }
          __asm
          {
            vaddss  xmm2, xmm5, xmm1
            vxorps  xmm0, xmm0, xmm0
            vcomiss xmm2, xmm0
          }
          if ( estimatedAlwaysLoaded )
          {
            __asm
            {
              vmovss  xmm4, dword ptr [rbp+4]
              vmovss  xmm0, cs:__real@3f800000
              vdivss  xmm3, xmm0, xmm2
              vmulss  xmm1, xmm3, xmm1
              vmulss  xmm2, xmm1, xmm4
              vmovss  dword ptr [rbp+4], xmm2
              vmulss  xmm0, xmm3, xmm5
              vmulss  xmm1, xmm0, xmm4
              vaddss  xmm2, xmm1, dword ptr [rbx+4]
              vmovss  dword ptr [rbx+4], xmm2
            }
          }
        }
      }
    }
  }
  v28 = Sys_GetCurrentThreadContext();
  if ( ((unsigned __int64)&s_threadCheck & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_threadCheck) )
    __debugbreak();
  if ( v28 != _InterlockedCompareExchange((volatile signed __int32 *)&s_threadCheck, 28, v28) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_loadingbar.cpp", 113, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Loadingbar - ScopedThreadCheck - destructor failure") )
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

void __fastcall LoadBar_UpdateProgress(double _XMM0_8, __int64 a2, double _XMM2_8)
{
  __int64 loadCountAlwaysLoaded; 
  __int64 byteSize; 
  bool v7; 

  if ( s_loadBar.numJobs )
  {
    loadCountAlwaysLoaded = 0i64;
    if ( s_loadBar.currentJob >= s_loadBar.numJobs )
      _R8 = NULL;
    else
      _R8 = &s_loadBar.jobs[s_loadBar.currentJob];
    __asm
    {
      vmovss  xmm1, cs:s_loadBar.jobDoneSize
      vmovss  cs:s_loadBar.actualDoneSize, xmm1
    }
    if ( !_R8 )
    {
      __asm { vmovss  cs:s_loadBar.uiDoneSize, xmm1 }
      return;
    }
    byteSize = _R8->byteSize;
    v7 = byteSize == 0;
    if ( !byteSize )
      goto LABEL_23;
    if ( _R8->type )
    {
      if ( _R8->type == LOADJOB_FF_ALWAYSLOADED )
      {
        loadCountAlwaysLoaded = s_loadBar.loadCountAlwaysLoaded;
        byteSize = _R8->byteSize;
        __asm { vmovss  xmm1, cs:s_loadBar.actualDoneSize }
      }
      else
      {
        if ( _R8->type != LOADJOB_STREAMSYNC )
          goto LABEL_15;
        loadCountAlwaysLoaded = s_loadBar.loadPercentStreamSyncSP;
      }
    }
    else
    {
      loadCountAlwaysLoaded = s_loadBar.loadCountResident;
    }
    v7 = loadCountAlwaysLoaded <= (unsigned __int64)byteSize;
    if ( loadCountAlwaysLoaded > (unsigned __int64)byteSize )
    {
      __asm { vmovss  xmm0, dword ptr [r8+4] }
LABEL_22:
      __asm
      {
        vaddss  xmm1, xmm1, xmm0
        vmovss  cs:s_loadBar.actualDoneSize, xmm1
      }
LABEL_23:
      __asm
      {
        vmovss  xmm2, cs:s_loadBar.uiDoneSize
        vcomiss xmm1, xmm2
      }
      if ( !v7 )
      {
        __asm
        {
          vsubss  xmm0, xmm1, xmm2
          vminss  xmm1, xmm0, cs:__real@3c23d70a
          vaddss  xmm2, xmm2, xmm1
          vmovss  cs:s_loadBar.uiDoneSize, xmm2
        }
      }
      return;
    }
LABEL_15:
    v7 = byteSize == 0;
    if ( byteSize )
    {
      __asm
      {
        vmovss  xmm3, cs:__real@5f800000
        vxorps  xmm2, xmm2, xmm2
        vcvtsi2ss xmm2, xmm2, rdx
      }
      if ( loadCountAlwaysLoaded < 0 )
        __asm { vaddss  xmm2, xmm2, xmm3 }
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, rcx
      }
      v7 = byteSize == 0;
      if ( byteSize < 0 )
        __asm { vaddss  xmm0, xmm0, xmm3 }
      __asm
      {
        vdivss  xmm0, xmm2, xmm0
        vmulss  xmm0, xmm0, dword ptr [r8+4]
      }
    }
    else
    {
      __asm { vxorps  xmm0, xmm0, xmm0 }
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
  LoadingBarJob *v2; 

  if ( !currentJob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_loadingbar.cpp", 255, ASSERT_TYPE_ASSERT, "(currentJob)", (const char *)&queryFormat, "currentJob") )
    __debugbreak();
  if ( s_loadBar.currentJob < s_loadBar.numJobs )
  {
    v2 = &s_loadBar.jobs[s_loadBar.currentJob];
    if ( v2 )
    {
      if ( v2->type == currentJob->type )
      {
        __asm
        {
          vmovss  xmm0, cs:s_loadBar.jobDoneSize
          vaddss  xmm1, xmm0, dword ptr [rax+4]
          vmovss  cs:s_loadBar.jobDoneSize, xmm1
        }
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

