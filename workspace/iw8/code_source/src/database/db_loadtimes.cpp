/*
==============
DB_LoadTimes_BeginSPLevelLoad
==============
*/

void __fastcall DB_LoadTimes_BeginSPLevelLoad(const char *const mapName)
{
  ?DB_LoadTimes_BeginSPLevelLoad@@YAXQEBD@Z(mapName);
}

/*
==============
DB_LoadTimes_BeginMPLevelLoad
==============
*/

void __fastcall DB_LoadTimes_BeginMPLevelLoad(const char *const mapName)
{
  ?DB_LoadTimes_BeginMPLevelLoad@@YAXQEBD@Z(mapName);
}

/*
==============
DB_LoadTimes_OnErrorCleanup
==============
*/

void DB_LoadTimes_OnErrorCleanup(void)
{
  ?DB_LoadTimes_OnErrorCleanup@@YAXXZ();
}

/*
==============
DB_LoadTimes_StreamSyncStarted
==============
*/

void DB_LoadTimes_StreamSyncStarted(void)
{
  ?DB_LoadTimes_StreamSyncStarted@@YAXXZ();
}

/*
==============
DB_LoadTimes_OnFileRead
==============
*/

void __fastcall DB_LoadTimes_OnFileRead(const unsigned __int64 size)
{
  ?DB_LoadTimes_OnFileRead@@YAX_K@Z(size);
}

/*
==============
DB_LoadTimes_AlwaysLoadedFinished
==============
*/

void DB_LoadTimes_AlwaysLoadedFinished(void)
{
  ?DB_LoadTimes_AlwaysLoadedFinished@@YAXXZ();
}

/*
==============
DB_LoadTimes_FastfileLoadStarted
==============
*/

void DB_LoadTimes_FastfileLoadStarted(void)
{
  ?DB_LoadTimes_FastfileLoadStarted@@YAXXZ();
}

/*
==============
DB_LoadTimes_AlwaysLoadedStarted
==============
*/

void DB_LoadTimes_AlwaysLoadedStarted(void)
{
  ?DB_LoadTimes_AlwaysLoadedStarted@@YAXXZ();
}

/*
==============
DB_LoadTimes_StreamSyncSPFinished
==============
*/

void __fastcall DB_LoadTimes_StreamSyncSPFinished(const bool success)
{
  ?DB_LoadTimes_StreamSyncSPFinished@@YAX_N@Z(success);
}

/*
==============
DB_LoadTimes_FastfileLoadFinished
==============
*/

void __fastcall DB_LoadTimes_FastfileLoadFinished(const bool success)
{
  ?DB_LoadTimes_FastfileLoadFinished@@YAX_N@Z(success);
}

/*
==============
DB_LoadTimes_OnPauseOrCancel
==============
*/

void DB_LoadTimes_OnPauseOrCancel(void)
{
  ?DB_LoadTimes_OnPauseOrCancel@@YAXXZ();
}

/*
==============
DB_LoadTimes_StreamSyncMPFinished
==============
*/

void __fastcall DB_LoadTimes_StreamSyncMPFinished(const bool success)
{
  ?DB_LoadTimes_StreamSyncMPFinished@@YAX_N@Z(success);
}

/*
==============
DB_LoadTimes_AlwaysLoadedFinished
==============
*/
void DB_LoadTimes_AlwaysLoadedFinished(void)
{
  if ( s_loadTimes.state == 6 )
  {
    DB_LoadTimes_EndTimingAndPrint("alwaysloadedsp");
    s_loadTimes.state = Error|0x4;
  }
}

/*
==============
DB_LoadTimes_AlwaysLoadedStarted
==============
*/
void DB_LoadTimes_AlwaysLoadedStarted(void)
{
  if ( s_loadTimes.state == 5 )
  {
    s_loadTimes.state = 6;
    s_loadTimes.readSize = 0i64;
    s_loadTimes.beforeTicks = __rdtsc();
  }
}

/*
==============
DB_LoadTimes_BeginMPLevelLoad
==============
*/
void DB_LoadTimes_BeginMPLevelLoad(const char *const mapName)
{
  Core_strcpy(s_loadTimes.mapName, 0x104ui64, mapName);
  s_loadTimes.state = 9;
}

/*
==============
DB_LoadTimes_BeginSPLevelLoad
==============
*/
void DB_LoadTimes_BeginSPLevelLoad(const char *const mapName)
{
  Core_strcpy(s_loadTimes.mapName, 0x104ui64, mapName);
  s_loadTimes.state = Error;
}

/*
==============
DB_LoadTimes_EndTimingAndPrint
==============
*/

void __fastcall DB_LoadTimes_EndTimingAndPrint(const char *const profileName, double _XMM1_8)
{
  const dvar_t *v5; 
  unsigned int flags; 
  unsigned __int64 v8; 
  bool UsingPCHostHDDFolders; 
  const char *v20; 
  int v21; 
  int v22; 
  int v23; 
  unsigned __int64 v26; 
  bool v27; 
  char *fmt; 
  char *fmta; 
  DLogContext context; 
  char buffer[4096]; 

  v5 = DVARBOOL_db_logLoadTimes;
  if ( !DVARBOOL_db_logLoadTimes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "db_logLoadTimes") )
    __debugbreak();
  if ( g_checkServerThread && Sys_IsAnyServerThreadWork() )
  {
    flags = v5->flags;
    if ( (flags & 0x81488) != 0 && (flags & 0x40000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 612, ASSERT_TYPE_ASSERT, "(!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & (((1 << 10) | (1 << 3) | (1 << 7) | ( 1 << 19 )) | (1 << 12)) ) || ( dvar->flags & ( 1 << 18 ) ))", "%s\n\tAccessing dvar '%s' from server context when we were not expected to, this can cause performance issues all the way to complete deadlocks.", "!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & SV_DVAR_LOAD_MODIFIED_MASK ) || ( dvar->flags & DVAR_DCONST )", v5->name) )
      __debugbreak();
  }
  if ( v5->current.enabled && s_loadTimes.readSize >= 0x100000 )
  {
    __asm { vmovaps [rsp+11D8h+var_18], xmm6 }
    v8 = __rdtsc();
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2sd xmm0, xmm0, rax
    }
    if ( (__int64)(v8 - s_loadTimes.beforeTicks) < 0 )
      __asm { vaddsd  xmm0, xmm0, cs:__real@43f0000000000000 }
    __asm
    {
      vmulsd  xmm0, xmm0, cs:?msecPerRawTimerTick@@3NA; double msecPerRawTimerTick
      vcvtsd2ss xmm6, xmm0, xmm0
      vcomiss xmm6, cs:__real@3dcccccd
    }
    if ( v8 >= s_loadTimes.beforeTicks )
    {
      __asm
      {
        vmovaps [rsp+11D8h+var_28], xmm7
        vmovss  xmm0, cs:__real@3a7a0000
        vxorps  xmm1, xmm1, xmm1
        vdivss  xmm2, xmm0, xmm6
        vcvtsi2ss xmm1, xmm1, rcx
      }
      if ( (s_loadTimes.readSize & 0x8000000000000000ui64) != 0i64 )
        __asm { vaddss  xmm1, xmm1, cs:__real@5f800000 }
      __asm { vmulss  xmm7, xmm2, xmm1 }
      UsingPCHostHDDFolders = Sys_GetUsingPCHostHDDFolders();
      v20 = "Unknown";
      v21 = GetConsoleType_0() - 1;
      if ( v21 )
      {
        v22 = v21 - 1;
        if ( v22 )
        {
          v23 = v22 - 1;
          if ( v23 )
          {
            if ( v23 == 1 )
              v20 = "XB1-X-Dev";
          }
          else
          {
            v20 = "XB1-X";
          }
        }
        else
        {
          v20 = "XB1-S";
        }
      }
      else
      {
        v20 = "XB1";
      }
      __asm
      {
        vcvtss2sd xmm0, xmm6, xmm6
        vmovsd  [rsp+11D8h+fmt], xmm0
      }
      Com_Printf(0, "DB_LoadTimes: %s %s time: %.2f ms\n", profileName, s_loadTimes.mapName, *(double *)&fmt);
      Com_Printf(0, "DB_LoadTimes: %s %s size: %zu kb\n", profileName, s_loadTimes.mapName, s_loadTimes.readSize >> 10);
      __asm
      {
        vcvtss2sd xmm0, xmm7, xmm7
        vmovsd  [rsp+11D8h+fmt], xmm0
      }
      Com_Printf(0, "DB_LoadTimes: %s %s size: %.2f mb/s\n", profileName, s_loadTimes.mapName, *(double *)&fmta);
      v26 = s_loadTimes.readSize >> 10;
      if ( DLog_IsActive() && DLog_CreateContext(&context, 0i64, buffer, 4096) && DLog_IsActive() )
      {
        v27 = DLog_BeginEvent(&context, "loadtimes");
        context.autoEndEvent = 1;
        if ( v27 && DLog_String(&context, "step", profileName, 0) && DLog_String(&context, "map", s_loadTimes.mapName, 0) )
        {
          __asm { vmovaps xmm2, xmm6; value }
          if ( DLog_Float32(&context, "timems", *(float *)&_XMM2) && DLog_UInt64(&context, "size", v26) )
          {
            __asm { vmovaps xmm2, xmm7; value }
            if ( DLog_Float32(&context, "speed", *(float *)&_XMM2) && DLog_String(&context, "platform", "xb3", 0) && DLog_String(&context, "plattype", v20, 0) && DLog_Int32(&context, "pchost", UsingPCHostHDDFolders) )
              DLog_RecordContext(&context);
          }
        }
      }
      __asm { vmovaps xmm7, [rsp+11D8h+var_28] }
    }
    __asm { vmovaps xmm6, [rsp+11D8h+var_18] }
  }
}

/*
==============
DB_LoadTimes_FastfileLoadFinished
==============
*/
void DB_LoadTimes_FastfileLoadFinished(const bool success, double a2)
{
  if ( s_loadTimes.state == 4 )
  {
    if ( success )
    {
      DB_LoadTimes_EndTimingAndPrint("fastfilesp", a2);
      s_loadTimes.state = 5;
    }
    else
    {
      s_loadTimes.state = Started;
    }
  }
}

/*
==============
DB_LoadTimes_FastfileLoadStarted
==============
*/
void DB_LoadTimes_FastfileLoadStarted(void)
{
  if ( s_loadTimes.state == Error )
  {
    s_loadTimes.state = 4;
    s_loadTimes.readSize = 0i64;
    s_loadTimes.beforeTicks = __rdtsc();
  }
}

/*
==============
DB_LoadTimes_OnErrorCleanup
==============
*/
void DB_LoadTimes_OnErrorCleanup(void)
{
  s_loadTimes.state = Canceled;
}

/*
==============
DB_LoadTimes_OnFileRead
==============
*/
void DB_LoadTimes_OnFileRead(const unsigned __int64 size)
{
  if ( ((s_loadTimes.state - 4) & 0xFFFFFFF9) == 0 )
    s_loadTimes.readSize += size;
}

/*
==============
DB_LoadTimes_OnPauseOrCancel
==============
*/
void DB_LoadTimes_OnPauseOrCancel(void)
{
  s_loadTimes.state = Completed;
}

/*
==============
DB_LoadTimes_StreamSyncMPFinished
==============
*/
void DB_LoadTimes_StreamSyncMPFinished(const bool success, double a2)
{
  if ( s_loadTimes.state == 10 )
  {
    if ( success )
      DB_LoadTimes_EndTimingAndPrint("streamsyncmp", a2);
    s_loadTimes.state = Started;
  }
}

/*
==============
DB_LoadTimes_StreamSyncSPFinished
==============
*/
void DB_LoadTimes_StreamSyncSPFinished(const bool success, double a2)
{
  if ( s_loadTimes.state == 8 )
  {
    if ( success )
      DB_LoadTimes_EndTimingAndPrint("streamsyncsp", a2);
    s_loadTimes.state = Started;
  }
}

/*
==============
DB_LoadTimes_StreamSyncStarted
==============
*/
void DB_LoadTimes_StreamSyncStarted(void)
{
  if ( s_loadTimes.state == (Error|0x4) )
  {
    s_loadTimes.state = 8;
  }
  else
  {
    if ( s_loadTimes.state != 9 )
      return;
    s_loadTimes.state = 10;
  }
  s_loadTimes.readSize = 0i64;
  s_loadTimes.beforeTicks = __rdtsc();
}

