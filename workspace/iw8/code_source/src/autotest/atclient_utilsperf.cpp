/*
==============
ATClient_CsvFileName
==============
*/

const char *__fastcall ATClient_CsvFileName(const LocalClientNum_t localClientNum, const int batchNum)
{
  return ?ATClient_CsvFileName@@YAPEBDW4LocalClientNum_t@@H@Z(localClientNum, batchNum);
}

/*
==============
ATClient_CsvLine
==============
*/

void ATClient_CsvLine(const char *msg, ...)
{
  ?ATClient_CsvLine@@YAXPEBDZZ(msg);
}

/*
==============
ATClient_CsvInit
==============
*/

void __fastcall ATClient_CsvInit(const char *csvFileName)
{
  ?ATClient_CsvInit@@YAXPEBD@Z(csvFileName);
}

/*
==============
ATClient_SetPerfTestSafeties
==============
*/

bool __fastcall ATClient_SetPerfTestSafeties(const LocalClientNum_t localClientNum, bool safetiesOn)
{
  return ?ATClient_SetPerfTestSafeties@@YA_NW4LocalClientNum_t@@_N@Z(localClientNum, safetiesOn);
}

/*
==============
ATClient_PerfTestReady
==============
*/

bool __fastcall ATClient_PerfTestReady(const LocalClientNum_t localClientNum)
{
  return ?ATClient_PerfTestReady@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
ATClient_CsvShutdown
==============
*/

void ATClient_CsvShutdown(void)
{
  ?ATClient_CsvShutdown@@YAXXZ();
}

/*
==============
ATClient_PerfGetAreaName
==============
*/

const char *__fastcall ATClient_PerfGetAreaName(const LocalClientNum_t localClientNum)
{
  return ?ATClient_PerfGetAreaName@@YAPEBDW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
ATClient_CsvFlush
==============
*/

void ATClient_CsvFlush(void)
{
  ?ATClient_CsvFlush@@YAXXZ();
}

/*
==============
ATClient_PerfGetStats
==============
*/

bool __fastcall ATClient_PerfGetStats(const LocalClientNum_t localClientNum, ATClientPerfStats *stats)
{
  return ?ATClient_PerfGetStats@@YA_NW4LocalClientNum_t@@PEAUATClientPerfStats@@@Z(localClientNum, stats);
}

/*
==============
ATClient_CsvFileName
==============
*/
char *ATClient_CsvFileName(const LocalClientNum_t localClientNum, const int batchNum)
{
  __int64 v2; 
  const char *ClientID; 
  const char *v5; 
  char *fmt; 

  v2 = localClientNum;
  if ( localClientNum < LOCAL_CLIENT_0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_utilsperf.cpp", 137, ASSERT_TYPE_ASSERT, "(localClientNum >= 0)", (const char *)&queryFormat, "localClientNum >= 0") )
    __debugbreak();
  if ( (int)v2 >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_utilsperf.cpp", 138, ASSERT_TYPE_ASSERT, "(localClientNum < LOCAL_CLIENT_COUNT)", (const char *)&queryFormat, "localClientNum < LOCAL_CLIENT_COUNT") )
    __debugbreak();
  ClientID = ATClient_NavGetClientID((const LocalClientNum_t)v2);
  v5 = ClientID;
  if ( (!ClientID || !*ClientID) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_utilsperf.cpp", 141, ASSERT_TYPE_ASSERT, "(userName != nullptr && userName[0] !='\\0')", (const char *)&queryFormat, "userName != nullptr && userName[0] !='\\0'") )
    __debugbreak();
  LODWORD(fmt) = batchNum;
  j_sprintf(s_csvFileName[v2], "%s-cl%d-%d.csv", v5, (unsigned int)v2, fmt);
  return s_csvFileName[v2];
}

/*
==============
ATClient_CsvFlush
==============
*/
void ATClient_CsvFlush(void)
{
  if ( s_csvFile.handle.handle != -1 )
    FS_Flush(s_csvFile);
}

/*
==============
ATClient_CsvInit
==============
*/
void ATClient_CsvInit(const char *csvFileName, const char *a2, __int64 a3, __int64 a4, __int64 a5)
{
  const char *v6; 

  if ( !csvFileName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_utilsperf.cpp", 162, ASSERT_TYPE_ASSERT, "(csvFileName)", (const char *)&queryFormat, "csvFileName") )
    __debugbreak();
  if ( !*csvFileName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_utilsperf.cpp", 163, ASSERT_TYPE_ASSERT, "(csvFileName[0])", (const char *)&queryFormat, "csvFileName[0]") )
    __debugbreak();
  if ( s_csvFile.handle.handle != -1 )
  {
    FS_Flush(s_csvFile);
    FS_FCloseFile(s_csvFile);
    s_csvFile.handle.handle = -1i64;
  }
  s_csvFile.handle.handle = (__int64)FS_FOpenTextFileWrite((fileHandle_t *)csvFileName, a2);
  v6 = "opened";
  if ( s_csvFile.handle.handle == -1 )
    v6 = "failed";
  Com_Printf(14, "PERFILE: \"%s\" %s", csvFileName, v6, a5);
}

/*
==============
ATClient_CsvLine
==============
*/
void ATClient_CsvLine(const char *msg, ...)
{
  int v2; 
  __int64 v3; 
  unsigned __int64 v4; 
  char dest[2048]; 
  va_list ap; 

  va_start(ap, msg);
  memset_0(dest, 0, sizeof(dest));
  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_utilsperf.cpp", 184, ASSERT_TYPE_ASSERT, "(msg != nullptr)", (const char *)&queryFormat, "msg != nullptr") )
    __debugbreak();
  v2 = Com_sprintf_truncate(dest, 0x800ui64, (const char *)&queryFormat.fmt + 3);
  Com_vsprintf(&dest[v2], 2046i64 - v2, msg, ap);
  v3 = -1i64;
  do
    ++v3;
  while ( dest[v3] );
  if ( dest[v3 - 1] != 10 )
  {
    dest[v3] = 10;
    v4 = v3 + 1;
    if ( v4 >= 0x800 )
    {
      j___report_rangecheckfailure(dest);
      JUMPOUT(0x14022A127i64);
    }
    dest[v4] = 0;
  }
  if ( s_csvFile.handle.handle != -1 )
    FS_Print(s_csvFile, dest);
  Com_Printf(14, "PERF:CSV  %s", dest);
}

/*
==============
ATClient_CsvShutdown
==============
*/
void ATClient_CsvShutdown(void)
{
  if ( s_csvFile.handle.handle != -1 )
  {
    FS_Flush(s_csvFile);
    FS_FCloseFile(s_csvFile);
    s_csvFile.handle.handle = -1i64;
  }
}

/*
==============
ATClient_PerfGetAreaName
==============
*/
const char *ATClient_PerfGetAreaName(const LocalClientNum_t localClientNum)
{
  const char *MapName; 
  const char *v2; 
  const char *ColumnValueForRow; 
  const char *result; 
  int outResult; 
  StringTable *tablePtr; 

  outResult = -1;
  if ( !ATClient_GetOmnvarValueInt32(localClientNum, "ui_callout_area_id", -1, &outResult) )
    return (char *)&queryFormat.fmt + 3;
  if ( outResult == -1 )
    return (char *)&queryFormat.fmt + 3;
  tablePtr = NULL;
  MapName = ATClient_GetMapName();
  v2 = j_va("mp/map_callouts/%s_callouts.csv", MapName);
  StringTable_GetAsset(v2, (const StringTable **)&tablePtr);
  if ( !tablePtr )
    return (char *)&queryFormat.fmt + 3;
  ColumnValueForRow = StringTable_GetColumnValueForRow(tablePtr, outResult, 2);
  result = SEH_LocalizeTextMessage(ColumnValueForRow, "ui string", LOCMSG_NOERR);
  if ( !result )
    return (char *)&queryFormat.fmt + 3;
  return result;
}

/*
==============
ATClient_PerfGetStats
==============
*/
char ATClient_PerfGetStats(const LocalClientNum_t localClientNum, ATClientPerfStats *stats)
{
  double Quality_Image; 
  StreamFrontendMemoryStats outStats; 

  if ( !stats && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_utilsperf.cpp", 59, ASSERT_TYPE_ASSERT, "(stats)", (const char *)&queryFormat, "stats") )
    __debugbreak();
  stats->renderFramerate = 0.0;
  Stream_GetMemoryStats(&outStats);
  stats->streamImageMemoryWanted = outStats.wantedImageMemory;
  stats->streamImageMemorySurplus = outStats.surplusImageMemory;
  Quality_Image = Stream_LoadQuality_Image();
  stats->streamImageStreamingQuality = *(float *)&Quality_Image;
  Stream_Debug_GetStreamKeyCountersFromDB(4, stats->memory, stats->counts);
  stats->canStreamMore = Stream_CanStreamMore();
  return 1;
}

/*
==============
ATClient_PerfTestReady
==============
*/
bool ATClient_PerfTestReady(const LocalClientNum_t localClientNum)
{
  int IsClientOnGround; 
  bool v3; 
  bool IsClientAtRest; 

  IsClientOnGround = ATCliet_NavIsClientOnGround(localClientNum);
  v3 = !ATClient_NavIsClientOutOfBounds(localClientNum);
  IsClientAtRest = ATCliet_NavIsClientAtRest(localClientNum);
  return IsClientOnGround != 2047 && v3 && IsClientAtRest;
}

/*
==============
ATClient_SetPerfTestSafeties
==============
*/
_BOOL8 ATClient_SetPerfTestSafeties(const LocalClientNum_t localClientNum, bool safetiesOn)
{
  __int64 v2; 
  __int64 v4; 
  unsigned __int64 v5; 
  unsigned __int64 v6; 
  int v7; 
  int cmdsize; 
  int v9; 
  __int64 i; 
  int v11; 
  int v12; 
  int v13; 
  __int64 j; 
  char dest[64]; 

  v2 = localClientNum;
  if ( localClientNum < LOCAL_CLIENT_0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_utilsperf.cpp", 106, ASSERT_TYPE_ASSERT, "(localClientNum >= 0)", (const char *)&queryFormat, "localClientNum >= 0") )
    __debugbreak();
  if ( (int)v2 >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_utilsperf.cpp", 107, ASSERT_TYPE_ASSERT, "(localClientNum < LOCAL_CLIENT_COUNT)", (const char *)&queryFormat, "localClientNum < LOCAL_CLIENT_COUNT") )
    __debugbreak();
  Com_sprintf(dest, 0x40ui64, "set com_disableGodMode 0");
  v4 = v2;
  Sys_EnterCriticalSection(CRITSECT_CBUF);
  v5 = -1i64;
  v6 = -1i64;
  do
    ++v6;
  while ( dest[v6] );
  v7 = truncate_cast<int,unsigned __int64>(v6);
  cmdsize = s_cmd_textArray[v4].cmdsize;
  v9 = v7 + 1;
  if ( cmdsize + v7 + 1 <= s_cmd_textArray[v4].maxsize )
  {
    for ( i = cmdsize - 1; i >= 0; --i )
      s_cmd_textArray[v4].data[v9 + i] = s_cmd_textArray[v4].data[i];
    memcpy_0(s_cmd_textArray[v4].data, dest, v7);
    s_cmd_textArray[v4].data[v9 - 1] = 10;
    s_cmd_textArray[v4].cmdsize += v9;
  }
  else
  {
    Com_PrintError(1, "Cbuf_InsertText overflowed\n");
  }
  Sys_LeaveCriticalSection(CRITSECT_CBUF);
  Com_sprintf(dest, 0x40ui64, "god %d", safetiesOn);
  Sys_EnterCriticalSection(CRITSECT_CBUF);
  do
    ++v5;
  while ( dest[v5] );
  v11 = truncate_cast<int,unsigned __int64>(v5);
  v12 = s_cmd_textArray[v4].cmdsize;
  v13 = v11 + 1;
  if ( v12 + v11 + 1 <= s_cmd_textArray[v4].maxsize )
  {
    for ( j = v12 - 1; j >= 0; --j )
      s_cmd_textArray[v4].data[v13 + j] = s_cmd_textArray[v4].data[j];
    memcpy_0(s_cmd_textArray[v4].data, dest, v11);
    s_cmd_textArray[v4].data[v13 - 1] = 10;
    s_cmd_textArray[v4].cmdsize += v13;
  }
  else
  {
    Com_PrintError(1, "Cbuf_InsertText overflowed\n");
  }
  Sys_LeaveCriticalSection(CRITSECT_CBUF);
  return safetiesOn;
}

