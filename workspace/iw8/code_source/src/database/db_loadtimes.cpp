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
void DB_LoadTimes_EndTimingAndPrint(const char *const profileName)
{
  const dvar_t *v1; 
  unsigned int flags; 
  __int128 v6; 
  __int128 v8; 
  float readSize; 
  float v11; 
  float v12; 
  bool UsingPCHostHDDFolders; 
  const char *v14; 
  int v15; 
  int v16; 
  int v17; 
  unsigned __int64 v18; 
  bool v19; 
  DLogContext context; 
  char buffer[4096]; 

  v1 = DVARBOOL_db_logLoadTimes;
  if ( !DVARBOOL_db_logLoadTimes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "db_logLoadTimes") )
    __debugbreak();
  if ( g_checkServerThread && Sys_IsAnyServerThreadWork() )
  {
    flags = v1->flags;
    if ( (flags & 0x81488) != 0 && (flags & 0x40000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 612, ASSERT_TYPE_ASSERT, "(!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & (((1 << 10) | (1 << 3) | (1 << 7) | ( 1 << 19 )) | (1 << 12)) ) || ( dvar->flags & ( 1 << 18 ) ))", "%s\n\tAccessing dvar '%s' from server context when we were not expected to, this can cause performance issues all the way to complete deadlocks.", "!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & SV_DVAR_LOAD_MODIFIED_MASK ) || ( dvar->flags & DVAR_DCONST )", v1->name) )
      __debugbreak();
  }
  if ( v1->current.enabled && s_loadTimes.readSize >= 0x100000 )
  {
    _XMM0 = 0i64;
    __asm { vcvtsi2sd xmm0, xmm0, rax }
    if ( (__int64)(__rdtsc() - s_loadTimes.beforeTicks) < 0 )
    {
      *((_QWORD *)&v6 + 1) = *((_QWORD *)&_XMM0 + 1);
      *(double *)&v6 = *(double *)&_XMM0 + 1.844674407370955e19;
      _XMM0 = v6;
    }
    *((_QWORD *)&v8 + 1) = *((_QWORD *)&_XMM0 + 1);
    *(double *)&v8 = *(double *)&_XMM0 * msecPerRawTimerTick;
    _XMM0 = v8;
    __asm { vcvtsd2ss xmm6, xmm0, xmm0 }
    if ( *(float *)&_XMM6 >= 0.1 )
    {
      readSize = (float)(__int64)s_loadTimes.readSize;
      if ( (s_loadTimes.readSize & 0x8000000000000000ui64) != 0i64 )
      {
        v11 = (float)(__int64)s_loadTimes.readSize;
        readSize = v11 + 1.8446744e19;
      }
      v12 = (float)(0.00095367432 / *(float *)&_XMM6) * readSize;
      UsingPCHostHDDFolders = Sys_GetUsingPCHostHDDFolders();
      v14 = "Unknown";
      v15 = GetConsoleType_0() - 1;
      if ( v15 )
      {
        v16 = v15 - 1;
        if ( v16 )
        {
          v17 = v16 - 1;
          if ( v17 )
          {
            if ( v17 == 1 )
              v14 = "XB1-X-Dev";
          }
          else
          {
            v14 = "XB1-X";
          }
        }
        else
        {
          v14 = "XB1-S";
        }
      }
      else
      {
        v14 = "XB1";
      }
      Com_Printf(0, "DB_LoadTimes: %s %s time: %.2f ms\n", profileName, s_loadTimes.mapName, *(float *)&_XMM6);
      Com_Printf(0, "DB_LoadTimes: %s %s size: %zu kb\n", profileName, s_loadTimes.mapName, s_loadTimes.readSize >> 10);
      Com_Printf(0, "DB_LoadTimes: %s %s size: %.2f mb/s\n", profileName, s_loadTimes.mapName, v12);
      v18 = s_loadTimes.readSize >> 10;
      if ( DLog_IsActive() && DLog_CreateContext(&context, 0i64, buffer, 4096) && DLog_IsActive() )
      {
        v19 = DLog_BeginEvent(&context, "loadtimes");
        context.autoEndEvent = 1;
        if ( v19 && DLog_String(&context, "step", profileName, 0) && DLog_String(&context, "map", s_loadTimes.mapName, 0) && DLog_Float32(&context, "timems", *(float *)&_XMM6) && DLog_UInt64(&context, "size", v18) && DLog_Float32(&context, "speed", v12) && DLog_String(&context, "platform", "xb3", 0) && DLog_String(&context, "plattype", v14, 0) && DLog_Int32(&context, "pchost", UsingPCHostHDDFolders) )
          DLog_RecordContext(&context);
      }
    }
  }
}

/*
==============
DB_LoadTimes_FastfileLoadFinished
==============
*/
void DB_LoadTimes_FastfileLoadFinished(const bool success)
{
  if ( s_loadTimes.state == 4 )
  {
    if ( success )
    {
      DB_LoadTimes_EndTimingAndPrint("fastfilesp");
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
void DB_LoadTimes_StreamSyncMPFinished(const bool success)
{
  if ( s_loadTimes.state == 10 )
  {
    if ( success )
      DB_LoadTimes_EndTimingAndPrint("streamsyncmp");
    s_loadTimes.state = Started;
  }
}

/*
==============
DB_LoadTimes_StreamSyncSPFinished
==============
*/
void DB_LoadTimes_StreamSyncSPFinished(const bool success)
{
  if ( s_loadTimes.state == 8 )
  {
    if ( success )
      DB_LoadTimes_EndTimingAndPrint("streamsyncsp");
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

