/*
==============
Load_ReadTempData
==============
*/

const void *__fastcall Load_ReadTempData(unsigned __int64 size, unsigned __int64 alignment)
{
  return ?Load_ReadTempData@@YAPEBX_K0@Z(size, alignment);
}

/*
==============
Preload_ArchiveData
==============
*/

DB_LoadXFileReturn __fastcall Preload_ArchiveData(XZoneMemory *zoneMem, XAssetList *outAssetList, const char *zoneName, bool wasPaused)
{
  return ?Preload_ArchiveData@@YA?AW4DB_LoadXFileReturn@@PEAUXZoneMemory@@PEAUXAssetList@@PEBD_N@Z(zoneMem, outAssetList, zoneName, wasPaused);
}

/*
==============
DB_PathDataParentIndexResolved
==============
*/

bool __fastcall DB_PathDataParentIndexResolved()
{
  return ?DB_PathDataParentIndexResolved@@YA_NXZ();
}

/*
==============
DB_SetStreamLoadIdle
==============
*/

void DB_SetStreamLoadIdle(void)
{
  ?DB_SetStreamLoadIdle@@YAXXZ();
}

/*
==============
DB_ProcessPreloadedXFile
==============
*/

void __fastcall DB_ProcessPreloadedXFile(XZoneMemory *zoneMem, XAssetList *assetList, const char *zoneName)
{
  ?DB_ProcessPreloadedXFile@@YAXPEAUXZoneMemory@@PEAUXAssetList@@PEBD@Z(zoneMem, assetList, zoneName);
}

/*
==============
DB_SetStreamLoadReading
==============
*/

void __fastcall DB_SetStreamLoadReading(bool isPreloading)
{
  ?DB_SetStreamLoadReading@@YAX_N@Z(isPreloading);
}

/*
==============
Load_TempStringCustom
==============
*/

void __fastcall Load_TempStringCustom(const char **str)
{
  ?Load_TempStringCustom@@YAXPEAPEBD@Z(str);
}

/*
==============
Load_ArchiveData
==============
*/

DB_LoadXFileReturn __fastcall Load_ArchiveData(XZoneMemory *zoneMem, XAssetList *outAssetList, const char *zoneName, bool wasPaused)
{
  return ?Load_ArchiveData@@YA?AW4DB_LoadXFileReturn@@PEAUXZoneMemory@@PEAUXAssetList@@PEBD_N@Z(zoneMem, outAssetList, zoneName, wasPaused);
}

/*
==============
Postload_ArchiveData
==============
*/

DB_LoadXFileReturn __fastcall Postload_ArchiveData(XZoneMemory *zoneMem, XAssetList *outAssetList, const char *zoneName)
{
  return ?Postload_ArchiveData@@YA?AW4DB_LoadXFileReturn@@PEAUXZoneMemory@@PEAUXAssetList@@PEBD@Z(zoneMem, outAssetList, zoneName);
}

/*
==============
Load_XStringCustom
==============
*/

void __fastcall Load_XStringCustom(const char **str)
{
  ?Load_XStringCustom@@YAXPEAPEBD@Z(str);
}

/*
==============
Load_Stream
==============
*/

void __fastcall Load_Stream(DBStreamStart streamStart, void *ptr, unsigned __int64 size)
{
  ?Load_Stream@@YAXW4DBStreamStart@@PEAX_K@Z(streamStart, ptr, size);
}

/*
==============
DB_IsInPostload
==============
*/

bool __fastcall DB_IsInPostload()
{
  return ?DB_IsInPostload@@YA_NXZ();
}

/*
==============
DB_InitLoadStreams
==============
*/

void __fastcall DB_InitLoadStreams(XZoneMemory *zoneMem)
{
  ?DB_InitLoadStreams@@YAXPEAUXZoneMemory@@@Z(zoneMem);
}

/*
==============
DB_InitLoadStreams
==============
*/
void DB_InitLoadStreams(XZoneMemory *zoneMem)
{
  if ( !zoneMem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_stream_load.cpp", 544, ASSERT_TYPE_ASSERT, "(zoneMem)", (const char *)&queryFormat, "zoneMem") )
    __debugbreak();
  if ( !zoneMem->tempData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_stream_load.cpp", 545, ASSERT_TYPE_ASSERT, "(zoneMem->tempData)", (const char *)&queryFormat, "zoneMem->tempData") )
    __debugbreak();
  DB_InitStreams(&zoneMem->tempData->archiveBlocks);
  g_streamPosGlob.zoneMem = zoneMem;
  g_streamPosGlob.tempData = zoneMem->tempData;
  j_CoD_XXH64_reset((XXH64_state_s *)&g_streamPosGlob.runningHash, 0i64);
}

/*
==============
DB_IsInPostload
==============
*/
bool DB_IsInPostload()
{
  return s_dbReadType == DB_READ_POSTLOAD;
}

/*
==============
DB_PathDataParentIndexResolved
==============
*/
_BOOL8 DB_PathDataParentIndexResolved()
{
  _BOOL8 result; 

  result = pathData.parentIndexResolved;
  if ( s_dbReadType == DB_READ_PRELOAD )
    return 0i64;
  return result;
}

/*
==============
DB_ProcessPreloadedXFile
==============
*/
void DB_ProcessPreloadedXFile(XZoneMemory *zoneMem, XAssetList *assetList, const char *zoneName)
{
  unsigned __int64 v6; 

  if ( !Sys_IsDatabaseThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_stream_load.cpp", 435, ASSERT_TYPE_ASSERT, "(Sys_IsDatabaseThread())", (const char *)&queryFormat, "Sys_IsDatabaseThread()") )
    __debugbreak();
  if ( !zoneMem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_stream_load.cpp", 436, ASSERT_TYPE_ASSERT, "(zoneMem)", (const char *)&queryFormat, "zoneMem") )
    __debugbreak();
  if ( !zoneMem->tempData )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_stream_load.cpp", 437, ASSERT_TYPE_ASSERT, "(zoneMem->tempData)", (const char *)&queryFormat, "zoneMem->tempData") )
      __debugbreak();
    if ( !zoneMem->tempData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_stream_load.cpp", 545, ASSERT_TYPE_ASSERT, "(zoneMem->tempData)", (const char *)&queryFormat, "zoneMem->tempData") )
      __debugbreak();
  }
  DB_InitStreams(&zoneMem->tempData->archiveBlocks);
  g_streamPosGlob.zoneMem = zoneMem;
  g_streamPosGlob.tempData = zoneMem->tempData;
  j_CoD_XXH64_reset((XXH64_state_s *)&g_streamPosGlob.runningHash, 0i64);
  DB_PatchMem_BeginLoad();
  DB_PreloadPackedWalk_Start();
  DB_PatchMem_BeginPostload();
  if ( !Sys_IsDatabaseThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_stream_load.cpp", 385, ASSERT_TYPE_ASSERT, "(Sys_IsDatabaseThread())", (const char *)&queryFormat, "Sys_IsDatabaseThread()") )
    __debugbreak();
  v6 = __rdtsc();
  if ( s_dbReadType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_stream_load.cpp", 396, ASSERT_TYPE_ASSERT, "(s_dbReadType == DB_READ_IDLE)", (const char *)&queryFormat, "s_dbReadType == DB_READ_IDLE") )
    __debugbreak();
  s_dbReadType = DB_READ_POSTLOAD;
  varXAssetList = assetList;
  if ( !assetList )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_stream_load.cpp", 401, ASSERT_TYPE_ASSERT, "(varXAssetList)", (const char *)&queryFormat, "varXAssetList") )
      __debugbreak();
    if ( !varXAssetList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_stream_load.cpp", 294, ASSERT_TYPE_ASSERT, "(varXAssetList)", (const char *)&queryFormat, "varXAssetList") )
      __debugbreak();
  }
  DB_PushStreamPos(8u);
  varScriptStringList = &varXAssetList->stringList;
  DB_WalkDataProcessedInPreload();
  DB_PopStreamPos();
  DB_PushStreamPos(8u);
  if ( varXAssetList->assets )
  {
    varXAssetList->assets = AllocPostload_XAsset();
    Postload_XAssetArrayCustom();
  }
  DB_PopStreamPos();
  s_dbReadType = DB_READ_IDLE;
  _XMM0 = 0i64;
  __asm { vcvtsi2sd xmm0, xmm0, rax }
  if ( (__int64)(__rdtsc() - v6) < 0 )
    *(double *)&_XMM0 = *(double *)&_XMM0 + 1.844674407370955e19;
  Com_Printf(16, "ARCHIVE POSTLOAD for %s took %.2fms\n", zoneName, (double)(*(double *)&_XMM0 * msecPerRawTimerTick));
  DB_PreloadPackedWalk_Finish();
  DB_PatchMem_EndLoad();
  DB_CloseStreams();
  DB_FreeXZoneTempMemory(zoneMem);
}

/*
==============
DB_SetStreamLoadIdle
==============
*/
void DB_SetStreamLoadIdle(void)
{
  s_dbReadType = DB_READ_IDLE;
}

/*
==============
DB_SetStreamLoadReading
==============
*/
void DB_SetStreamLoadReading(bool isPreloading)
{
  if ( s_dbReadType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_stream_load.cpp", 48, ASSERT_TYPE_ASSERT, "(s_dbReadType == DB_READ_IDLE)", (const char *)&queryFormat, "s_dbReadType == DB_READ_IDLE") )
    __debugbreak();
  s_dbReadType = isPreloading + 1;
}

/*
==============
Load_ArchiveData
==============
*/
__int64 Load_ArchiveData(XZoneMemory *zoneMem, XAssetList *outAssetList, const char *zoneName, bool wasPaused)
{
  unsigned __int64 v7; 
  unsigned int v8; 
  XAsset *assets; 
  unsigned int assetCount; 
  unsigned int assetReadPos; 
  const char *XAssetTypeName; 
  long double v15; 
  int LogChannel; 

  if ( !Sys_IsDatabaseThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_stream_load.cpp", 197, ASSERT_TYPE_ASSERT, "(Sys_IsDatabaseThread())", (const char *)&queryFormat, "Sys_IsDatabaseThread()") )
    __debugbreak();
  v7 = __rdtsc();
  if ( s_dbReadType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_stream_load.cpp", 48, ASSERT_TYPE_ASSERT, "(s_dbReadType == DB_READ_IDLE)", (const char *)&queryFormat, "s_dbReadType == DB_READ_IDLE") )
    __debugbreak();
  varXAssetList = outAssetList;
  v8 = 1;
  s_dbReadType = DB_READ_LOAD;
  if ( !outAssetList )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_stream_load.cpp", 211, ASSERT_TYPE_ASSERT, "(varXAssetList)", (const char *)&queryFormat, "varXAssetList") )
      __debugbreak();
    outAssetList = varXAssetList;
  }
  if ( !wasPaused )
  {
    if ( !outAssetList )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_stream_load.cpp", 136, ASSERT_TYPE_ASSERT, "(varXAssetList)", (const char *)&queryFormat, "varXAssetList") )
        __debugbreak();
      outAssetList = varXAssetList;
    }
    DB_ReadXFile((unsigned __int8 *)outAssetList, 0x20ui64);
    DB_PushStreamPos(8u);
    varScriptStringList = &varXAssetList->stringList;
    Load_ScriptStringList(NotAtStart);
    if ( varScriptStringList->loaded && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_stream_load.cpp", 143, ASSERT_TYPE_ASSERT, "( varScriptStringList->loaded == false )", "DB detected double load of the same XAssetList's ScriptStringList") )
      __debugbreak();
    varScriptStringList->loaded = 1;
    DB_PopStreamPos();
    DB_PushStreamPos(8u);
    outAssetList = varXAssetList;
    if ( varXAssetList->assets )
    {
      varXAssetList->assets = AllocLoad_XAsset();
      outAssetList = varXAssetList;
    }
  }
  assets = outAssetList->assets;
  if ( !assets )
    goto LABEL_32;
  assetCount = outAssetList->assetCount;
  if ( !assetCount )
    goto LABEL_29;
  if ( !wasPaused )
  {
    Load_Stream(AtStart, assets, 16i64 * assetCount);
    outAssetList = varXAssetList;
  }
  assetReadPos = outAssetList->assetReadPos;
  if ( assetReadPos >= outAssetList->assetCount )
  {
LABEL_29:
    if ( outAssetList->assetReadPos != outAssetList->assetCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_stream_load.cpp", 187, ASSERT_TYPE_ASSERT, "(varXAssetList->assetReadPos == varXAssetList->assetCount)", (const char *)&queryFormat, "varXAssetList->assetReadPos == varXAssetList->assetCount") )
      __debugbreak();
LABEL_32:
    v8 = 0;
    goto LABEL_33;
  }
  while ( !DB_IsCurrentFastfileLoadCancelled() )
  {
    if ( DB_IsCurrentFastfileLoadPaused() )
      goto LABEL_34;
    varXAsset = &varXAssetList->assets[assetReadPos];
    XAssetTypeName = DB_GetXAssetTypeName(varXAsset->type);
    ProfLoad_DB_Begin(XAssetTypeName);
    Load_XAsset(NotAtStart);
    ProfLoad_DB_End();
    ++assetReadPos;
    ++varXAssetList->assetReadPos;
    outAssetList = varXAssetList;
    if ( assetReadPos >= varXAssetList->assetCount )
      goto LABEL_29;
  }
  v8 = 2;
LABEL_33:
  DB_PopStreamPos();
LABEL_34:
  s_dbReadType = DB_READ_IDLE;
  _XMM0 = 0i64;
  __asm { vcvtsi2sd xmm0, xmm0, rax }
  if ( (__int64)(__rdtsc() - v7) < 0 )
    *(double *)&_XMM0 = *(double *)&_XMM0 + 1.844674407370955e19;
  v15 = *(double *)&_XMM0 * msecPerRawTimerTick;
  LogChannel = DB_GetLogChannel();
  Com_Printf(LogChannel, "ARCHIVE LOAD for %s took %.2fms\n", zoneName, (double)v15);
  return v8;
}

/*
==============
Load_ReadTempData
==============
*/
unsigned __int8 *Load_ReadTempData(unsigned __int64 size, unsigned __int64 alignment)
{
  unsigned __int64 v3; 
  unsigned __int8 *pos; 

  v3 = alignment - 1;
  DB_PushStreamPos(1u);
  if ( ((v3 + 1) & v3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_stream.h", 157, ASSERT_TYPE_ASSERT, "( ( ( alignment & ( alignment + 1 ) ) == 0 ) )", "( alignment ) = %zu", v3) )
    __debugbreak();
  if ( v3 )
  {
    DB_PatchMem_FixStreamAlignment(v3);
    DB_CheckCanIncStreamPos(0i64);
  }
  pos = g_streamPosGlob.pos;
  Load_Stream(AtStart, g_streamPosGlob.pos, size);
  DB_PopStreamPos();
  return pos;
}

/*
==============
Load_Stream
==============
*/
void Load_Stream(DBStreamStart streamStart, void *ptr, unsigned __int64 size)
{
  if ( streamStart != (ptr != g_streamPosGlob.pos) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_stream_load.cpp", 65, ASSERT_TYPE_ASSERT, "( streamStart == ( ( ptr == DB_GetStreamPos() ) ? DBStreamStart::AtStart : DBStreamStart::NotAtStart ) )", "%d %p %p %zu", streamStart, ptr, g_streamPosGlob.pos, size) )
    __debugbreak();
  if ( streamStart != NotAtStart && size )
  {
    if ( size > 0x7FFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_stream_load.cpp", 72, ASSERT_TYPE_ASSERT, "(size <= 2147483647i32)", (const char *)&queryFormat, "size <= INT32_MAX") )
      __debugbreak();
    if ( s_dbReadType == DB_READ_POSTLOAD && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_stream_load.cpp", 77, ASSERT_TYPE_ASSERT, "(!DB_IsInPostload())", (const char *)&queryFormat, "!DB_IsInPostload()") )
      __debugbreak();
    DB_CheckCanIncStreamPos(size);
    if ( g_streamPosGlob.posIndex - 4 <= 1 )
      memset_0(ptr, 0, size);
    else
      DB_ReadXFile((unsigned __int8 *)ptr, size);
    DB_IncStreamPos(size);
  }
}

/*
==============
Load_TempStringCustom
==============
*/
void Load_TempStringCustom(const char **str)
{
  const char *v1; 
  const char *v3; 
  scr_string_t String; 

  v1 = *str;
  v3 = *str;
  DB_ReadXFile((unsigned __int8 *)*str, 1ui64);
  if ( *v1 )
  {
    do
      DB_ReadXFile((unsigned __int8 *)++v3, 1ui64);
    while ( *v3 );
    if ( v3 < v1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_stream_load.cpp", 494, ASSERT_TYPE_ASSERT, "(pos >= s)", (const char *)&queryFormat, "pos >= s") )
      __debugbreak();
  }
  DB_IncStreamPos(v3 - v1 + 1);
  if ( *str )
    String = SL_GetString(*str, 4u);
  else
    String = 0;
  *str = (const char *)(int)String;
}

/*
==============
Load_XStringCustom
==============
*/
void Load_XStringCustom(const char **str)
{
  const char *v1; 
  const char *v2; 
  unsigned __int64 v3; 

  v1 = *str;
  v2 = *str;
  DB_ReadXFile((unsigned __int8 *)*str, 1ui64);
  if ( *v1 )
  {
    do
      DB_ReadXFile((unsigned __int8 *)++v2, 1ui64);
    while ( *v2 );
    if ( v2 < v1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_stream_load.cpp", 494, ASSERT_TYPE_ASSERT, "(pos >= s)", (const char *)&queryFormat, "pos >= s") )
      __debugbreak();
  }
  v3 = v2 - v1 + 1;
  if ( !g_streamPosGlob.pos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_stream.h", 181, ASSERT_TYPE_ASSERT, "(g_streamPosGlob.pos)", (const char *)&queryFormat, "g_streamPosGlob.pos") )
    __debugbreak();
  DB_CheckCanIncStreamPos(v3);
  g_streamPosGlob.pos += v3;
}

/*
==============
Postload_ArchiveData
==============
*/
__int64 Postload_ArchiveData(XZoneMemory *zoneMem, XAssetList *outAssetList, const char *zoneName)
{
  unsigned __int64 v5; 

  if ( !Sys_IsDatabaseThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_stream_load.cpp", 385, ASSERT_TYPE_ASSERT, "(Sys_IsDatabaseThread())", (const char *)&queryFormat, "Sys_IsDatabaseThread()") )
    __debugbreak();
  v5 = __rdtsc();
  if ( s_dbReadType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_stream_load.cpp", 396, ASSERT_TYPE_ASSERT, "(s_dbReadType == DB_READ_IDLE)", (const char *)&queryFormat, "s_dbReadType == DB_READ_IDLE") )
    __debugbreak();
  s_dbReadType = DB_READ_POSTLOAD;
  varXAssetList = outAssetList;
  if ( !outAssetList )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_stream_load.cpp", 401, ASSERT_TYPE_ASSERT, "(varXAssetList)", (const char *)&queryFormat, "varXAssetList") )
      __debugbreak();
    if ( !varXAssetList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_stream_load.cpp", 294, ASSERT_TYPE_ASSERT, "(varXAssetList)", (const char *)&queryFormat, "varXAssetList") )
      __debugbreak();
  }
  DB_PushStreamPos(8u);
  varScriptStringList = &varXAssetList->stringList;
  DB_WalkDataProcessedInPreload();
  DB_PopStreamPos();
  DB_PushStreamPos(8u);
  if ( varXAssetList->assets )
  {
    varXAssetList->assets = AllocPostload_XAsset();
    Postload_XAssetArrayCustom();
  }
  DB_PopStreamPos();
  s_dbReadType = DB_READ_IDLE;
  _XMM0 = 0i64;
  __asm { vcvtsi2sd xmm0, xmm0, rax }
  if ( (__int64)(__rdtsc() - v5) < 0 )
    *(double *)&_XMM0 = *(double *)&_XMM0 + 1.844674407370955e19;
  Com_Printf(16, "ARCHIVE POSTLOAD for %s took %.2fms\n", zoneName, (double)(*(double *)&_XMM0 * msecPerRawTimerTick));
  return 0i64;
}

/*
==============
Preload_ArchiveData
==============
*/
__int64 Preload_ArchiveData(XZoneMemory *zoneMem, XAssetList *outAssetList, const char *zoneName, bool wasPaused)
{
  unsigned __int64 v7; 
  DB_LoadXFileReturn v8; 

  if ( !Sys_IsDatabaseThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_stream_load.cpp", 323, ASSERT_TYPE_ASSERT, "(Sys_IsDatabaseThread())", (const char *)&queryFormat, "Sys_IsDatabaseThread()") )
    __debugbreak();
  v7 = __rdtsc();
  if ( s_dbReadType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_stream_load.cpp", 48, ASSERT_TYPE_ASSERT, "(s_dbReadType == DB_READ_IDLE)", (const char *)&queryFormat, "s_dbReadType == DB_READ_IDLE") )
    __debugbreak();
  s_dbReadType = DB_READ_PRELOAD;
  varXAssetList = outAssetList;
  if ( !outAssetList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_stream_load.cpp", 337, ASSERT_TYPE_ASSERT, "(varXAssetList)", (const char *)&queryFormat, "varXAssetList") )
    __debugbreak();
  if ( !wasPaused )
  {
    if ( !varXAssetList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_stream_load.cpp", 261, ASSERT_TYPE_ASSERT, "(varXAssetList)", (const char *)&queryFormat, "varXAssetList") )
      __debugbreak();
    DB_ReadXFile((unsigned __int8 *)varXAssetList, 0x20ui64);
    DB_PushStreamPos(8u);
    varScriptStringList = &varXAssetList->stringList;
    DB_PushPreloadProcessing();
    Load_ScriptStringList(NotAtStart);
    if ( varScriptStringList->loaded && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_stream_load.cpp", 273, ASSERT_TYPE_ASSERT, "( varScriptStringList->loaded == false )", "DB detected double preload of the same XAssetList's ScriptStringList") )
      __debugbreak();
    varScriptStringList->loaded = 1;
    DB_PopPreloadProcessing();
    DB_PopStreamPos();
    DB_PushStreamPos(8u);
    if ( varXAssetList->assets )
      varXAssetList->assets = AllocPreload_XAsset();
  }
  if ( varXAssetList->assets )
  {
    v8 = Preload_XAssetArrayCustom(wasPaused);
    if ( v8 == FETCHING_FIRST_PARTY_TOKEN )
      goto LABEL_24;
  }
  else
  {
    v8 = READY;
  }
  DB_PopStreamPos();
LABEL_24:
  s_dbReadType = DB_READ_IDLE;
  _XMM0 = 0i64;
  __asm { vcvtsi2sd xmm0, xmm0, rax }
  if ( (__int64)(__rdtsc() - v7) < 0 )
    *(double *)&_XMM0 = *(double *)&_XMM0 + 1.844674407370955e19;
  Com_Printf(16, "ARCHIVE PRELOAD for %s took %.2fms\n", zoneName, (double)(*(double *)&_XMM0 * msecPerRawTimerTick));
  return (unsigned int)v8;
}

