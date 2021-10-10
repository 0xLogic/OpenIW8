/*
==============
DB_FastfileLoad_IsFastfileValid
==============
*/

bool __fastcall DB_FastfileLoad_IsFastfileValid(const char *zoneName)
{
  return ?DB_FastfileLoad_IsFastfileValid@@YA_NPEBD@Z(zoneName);
}

/*
==============
DB_SetupTempLoadData
==============
*/

XZoneTemporaryLoadData *__fastcall DB_SetupTempLoadData(DB_FFOpenData *outOpenData, const XArchiveBlocks *archiveBlocks)
{
  return ?DB_SetupTempLoadData@@YAAEAUXZoneTemporaryLoadData@@AEAUDB_FFOpenData@@AEBUXArchiveBlocks@@@Z(outOpenData, archiveBlocks);
}

/*
==============
DB_LoadXFile
==============
*/

DB_LoadXFileReturn __fastcall DB_LoadXFile(const char *zoneName, XZoneMemory *zoneMem, XAssetList *assetList, unsigned int zoneFlags, bool wasPaused, const DB_FastFileFailureMode failureMode, DB_AuthSignature *outSignature)
{
  return ?DB_LoadXFile@@YA?AW4DB_LoadXFileReturn@@PEBDPEAUXZoneMemory@@PEAUXAssetList@@I_NW4DB_FastFileFailureMode@@PEAUDB_AuthSignature@@@Z(zoneName, zoneMem, assetList, zoneFlags, wasPaused, failureMode, outSignature);
}

/*
==============
DB_GetPerTransientAdditionalTempCostForPreload
==============
*/

unsigned __int64 __fastcall DB_GetPerTransientAdditionalTempCostForPreload()
{
  return ?DB_GetPerTransientAdditionalTempCostForPreload@@YA_KXZ();
}

/*
==============
DB_AllocateFastfileMemory
==============
*/
void DB_AllocateFastfileMemory(DB_FFHeader *outHeader, DB_FFOpenData *outOpenData, XZoneMemory *outZoneMem, const char *const zoneName)
{
  unsigned int v8; 
  const dvar_t *v9; 
  unsigned __int64 v10; 
  const dvar_t *v11; 
  unsigned __int64 BDiffWindowSizeAlloc; 
  unsigned __int64 v13; 
  int LogChannel; 
  XZoneTemporaryLoadData *v15; 
  XArchiveBlocks archiveBlocks; 

  memset_0(&archiveBlocks, 0, sizeof(archiveBlocks));
  v8 = 0;
  if ( g_dbPreloading )
  {
    outOpenData->topHeader.xfileHeader.preloadWalkSize += 16i64;
    v9 = DCONST_DVARBOOL_db_patchmem_preload;
    if ( !DCONST_DVARBOOL_db_patchmem_preload && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "db_patchmem_preload") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    if ( v9->current.enabled )
      outOpenData->topHeader.xfileHeader.preloadWalkSize += 147920i64;
  }
  else
  {
    outOpenData->topHeader.xfileHeader.blockSize[2] = 0i64;
    outOpenData->topHeader.xfileHeader.preloadWalkSize = 0i64;
  }
  v10 = 1728i64;
  if ( g_dbPreloading )
  {
    v10 = outOpenData->topHeader.xfileHeader.preloadWalkSize + 1728;
    v11 = DCONST_DVARBOOL_db_patchmem_preload;
    if ( !DCONST_DVARBOOL_db_patchmem_preload && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "db_patchmem_preload") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    if ( v11->current.enabled )
      v10 = ((v10 + 7) & 0xFFFFFFFFFFFFFFF8ui64) + 147920;
  }
  if ( outOpenData->diffCount )
  {
    do
    {
      BDiffWindowSizeAlloc = DB_BinaryPatch_GetBDiffWindowSizeAlloc(&outOpenData->diff[(unsigned __int64)v8++].header.residentWindowSizes);
      v10 = BDiffWindowSizeAlloc + ((((v10 + 7) & 0xFFFFFFFFFFFFFFF8ui64) + 4528) & 0xFFFFFFFFFFFFF000ui64);
    }
    while ( v8 < outOpenData->diffCount );
  }
  outOpenData->topHeader.xfileHeader.blockSize[0] = (((v10 + 7) & 0xFFFFFFFFFFFFFFF8ui64) + 240) & 0xFFFFFFFFFFFFFFF0ui64;
  v13 = outHeader->xfileHeader.blockSize[0] >> 10;
  LogChannel = DB_GetLogChannel();
  Com_Printf(LogChannel, "XFILE_BLOCK_TEMP_ADDITIONAL for %s is %zukb\n", zoneName, v13);
  DB_AllocXZoneMemory(outHeader->xfileHeader.blockSize, zoneName, outZoneMem, &archiveBlocks);
  if ( outZoneMem->tempData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_fastfile_load.cpp", 501, ASSERT_TYPE_ASSERT, "(outZoneMem.tempData == nullptr)", (const char *)&queryFormat, "outZoneMem.tempData == nullptr") )
    __debugbreak();
  v15 = DB_SetupTempLoadData(outOpenData, &archiveBlocks);
  outZoneMem->tempData = v15;
  if ( !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_fastfile_load.cpp", 503, ASSERT_TYPE_ASSERT, "(outZoneMem.tempData)", (const char *)&queryFormat, "outZoneMem.tempData") )
    __debugbreak();
  memcpy_0(outZoneMem->tempData, outOpenData, 0x5D0ui64);
}

/*
==============
DB_CheckFastfileHeaderVersionAndMagic
==============
*/
char DB_CheckFastfileHeaderVersionAndMagic(const DB_FFHeader *header, DBFile *outFile)
{
  unsigned int headerVersion; 
  unsigned int v5; 
  const char *v6; 

  headerVersion = header->headerVersion;
  if ( headerVersion == 11 )
  {
    outFile->isSecured = 0;
    if ( *(_QWORD *)header->magic == *(_QWORD *)"IWffx100" )
    {
      return 1;
    }
    else
    {
      DB_SetFastfileErrorString(COM_ERR_6033, outFile->name, "FF magic was invalid");
      return 0;
    }
  }
  else
  {
    if ( DB_File_IsFileCacheFileHandle(&outFile->dbFileHandle) )
    {
      DCache_InvalidatePersistentCache((Online_Error_CAT_DCACHE_t)0x40000000, outFile->name);
      if ( headerVersion >= 0xB )
        DB_SetFastfileErrorString(COM_ERR_6030, outFile->name, "DCache fastfile is newer than client executable (version %d, expecting %d), use '+set purgeDCache 1' to clear cache.", headerVersion, 11);
      else
        DB_SetFastfileErrorString(COM_ERR_6029, outFile->name, "DCache fastfile is out of date (version %d, expecting %d), use '+set purgeDCache 1' to clear cache.", headerVersion, 11);
    }
    v5 = header->headerVersion;
    v6 = "Fastfile is out of date (XFILE_FF_HEADER_VERSION %d, expecting %d)";
    if ( v5 >= 0xB )
      v6 = "Fastfile is newer than client executable (XFILE_FF_HEADER_VERSION %d, expecting %d)";
    DB_SetFastfileErrorString((ComErrorCode)(6032 - (v5 < 0xB)), outFile->name, v6);
    return 0;
  }
}

/*
==============
DB_CheckXFileVersion
==============
*/
char DB_CheckXFileVersion(const DB_FFHeader *header, const DBFileHandle *handle, const char *const path, const char *const baseFileForPatch)
{
  unsigned int ExpectedXFileVersion; 
  unsigned int xfileVersion; 
  unsigned int v10; 
  ComErrorCode v11; 
  const char *v12; 
  char *fmt; 
  __int64 v15; 
  char dest[256]; 

  if ( !path && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_fastfile_load.cpp", 447, ASSERT_TYPE_ASSERT, "(path)", (const char *)&queryFormat, "path") )
    __debugbreak();
  ExpectedXFileVersion = DB_FFHeader_GetExpectedXFileVersion(header);
  xfileVersion = header->xfileVersion;
  v10 = ExpectedXFileVersion;
  if ( xfileVersion == ExpectedXFileVersion )
    return 1;
  DB_InvalidateCacheFile(handle, path, ExpectedXFileVersion, xfileVersion);
  if ( baseFileForPatch )
    Com_sprintf<256>((char (*)[256])dest, "Toplevel patch (base fastfile '%s')", baseFileForPatch);
  else
    Com_sprintf<256>((char (*)[256])dest, "Fastfile (no patch found)");
  if ( header->xfileVersion >= v10 )
  {
    v11 = COM_ERR_6035;
    v12 = "%s is newer than client executable (XFILE_VERSION %d, expecting %d)";
  }
  else
  {
    v11 = COM_ERR_6034;
    v12 = "%s is out of date (XFILE_VERSION %d, expecting %d)";
  }
  LODWORD(v15) = v10;
  LODWORD(fmt) = header->xfileVersion;
  DB_SetFastfileErrorString(v11, path, v12, dest, fmt, v15);
  return 0;
}

/*
==============
DB_FastfileLoad_IsFastfileValid
==============
*/
_BOOL8 DB_FastfileLoad_IsFastfileValid(const char *zoneName)
{
  bool v2; 
  XZoneMemory outZoneMem; 
  DB_FFOpenData outOpenData; 
  char outErrMessage[256]; 
  char outErrFilename[256]; 

  memset_0(&outZoneMem, 0, sizeof(outZoneMem));
  DB_PushFastfileErrorString((char (*)[256])outErrFilename, (char (*)[256])outErrMessage);
  v2 = DB_ReadFastfileHeaderData(zoneName, 0, &outZoneMem, &outOpenData, 0);
  DB_PopFastfileErrorString();
  if ( outZoneMem.tempData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_fastfile_load.cpp", 1043, ASSERT_TYPE_ASSERT, "(zoneMem.tempData == nullptr)", (const char *)&queryFormat, "zoneMem.tempData == nullptr") )
    __debugbreak();
  DB_CloseTemporaryFileHandles(&outOpenData);
  return v2;
}

/*
==============
DB_FormatFastfilePathFromZoneName
==============
*/
void DB_FormatFastfilePathFromZoneName(char *const buffer, const int bufSize, const char *const zoneName, const char *const extension)
{
  unsigned __int64 v4; 
  const char *v8; 
  __int64 v9; 
  int v10; 
  char v11; 
  __int64 v12; 
  char v13; 
  unsigned __int64 v14; 
  const char *v15; 
  int v16; 
  const char *v17; 

  v4 = bufSize;
  if ( !buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_fastfile_load.cpp", 125, ASSERT_TYPE_ASSERT, "(buffer)", (const char *)&queryFormat, "buffer") )
    __debugbreak();
  if ( !zoneName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_fastfile_load.cpp", 126, ASSERT_TYPE_ASSERT, "(zoneName)", (const char *)&queryFormat, "zoneName") )
    __debugbreak();
  if ( !extension && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_fastfile_load.cpp", 127, ASSERT_TYPE_ASSERT, "(extension)", (const char *)&queryFormat, "extension") )
    __debugbreak();
  v8 = "dev_";
  v9 = 4i64;
  v10 = 1;
  if ( !zoneName && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  while ( 1 )
  {
    v11 = v8[zoneName - "dev_"];
    v12 = v9;
    v13 = *v8++;
    --v9;
    if ( !v12 )
    {
      v14 = v4;
      goto LABEL_23;
    }
    if ( v11 != v13 )
      break;
    if ( !v11 )
    {
      v10 = 0;
      goto LABEL_19;
    }
  }
  if ( v11 < v13 )
    v10 = -1;
LABEL_19:
  v14 = v4;
  if ( v10 )
  {
    if ( Com_sprintf(buffer, v4, "%s%s", zoneName, extension) > 0 )
      return;
    v15 = "Com_sprintf( buffer, bufSize, \"%s%s\", zoneName, extension ) > 0";
    v16 = 137;
    v17 = "(Com_sprintf( buffer, bufSize, \"%s%s\", zoneName, extension ) > 0)";
    goto LABEL_25;
  }
LABEL_23:
  if ( Com_sprintf(buffer, v14, "%s%sd", zoneName, extension) > 0 )
    return;
  v15 = "Com_sprintf( buffer, bufSize, \"%s%s\" \"d\", zoneName, extension ) > 0";
  v16 = 132;
  v17 = "(Com_sprintf( buffer, bufSize, \"%s%s\" \"d\", zoneName, extension ) > 0)";
LABEL_25:
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_fastfile_load.cpp", v16, ASSERT_TYPE_ASSERT, v17, (const char *)&queryFormat, v15) )
    __debugbreak();
}

/*
==============
DB_GetPerTransientAdditionalTempCostForPreload
==============
*/
unsigned __int64 DB_GetPerTransientAdditionalTempCostForPreload()
{
  return 327680i64;
}

/*
==============
DB_InvalidateCacheFile
==============
*/
void DB_InvalidateCacheFile(const DBFileHandle *handle, const char *const path, const unsigned int versionWanted, const unsigned int versionHad)
{
  unsigned int v7; 

  if ( DB_File_IsFileCacheFileHandle(handle) )
  {
    DCache_InvalidatePersistentCache((Online_Error_CAT_DCACHE_t)0x40000000, path);
    v7 = versionWanted;
    if ( versionHad >= versionWanted )
      DB_SetFastfileErrorString(COM_ERR_6030, path, "DCache fastfile is newer than client executable (version %d, expecting %d), use '+set purgeDCache 1' to clear cache.", versionHad, v7);
    else
      DB_SetFastfileErrorString(COM_ERR_6029, path, "DCache fastfile is out of date (version %d, expecting %d), use '+set purgeDCache 1' to clear cache.", versionHad, v7);
  }
}

/*
==============
DB_LoadXFile
==============
*/
__int64 DB_LoadXFile(const char *zoneName, XZoneMemory *zoneMem, XAssetList *assetList, unsigned int zoneFlags, bool wasPaused, const DB_FastFileFailureMode failureMode, DB_AuthSignature *outSignature)
{
  const char *v11; 
  bool v12; 
  XZoneTemporaryLoadData *tempData; 
  XZoneTemporaryLoadData *v14; 
  DB_LoadXFileReturn XFileResident; 
  const dvar_t *v16; 
  unsigned __int64 v17; 
  char outErrFilename[256]; 
  char outErrMessage[256]; 

  if ( !Sys_IsDatabaseThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_fastfile_load.cpp", 859, ASSERT_TYPE_ASSERT, "(Sys_IsDatabaseThread())", (const char *)&queryFormat, "Sys_IsDatabaseThread()") )
    __debugbreak();
  if ( !zoneMem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_fastfile_load.cpp", 860, ASSERT_TYPE_ASSERT, "(zoneMem)", (const char *)&queryFormat, "zoneMem") )
    __debugbreak();
  if ( !zoneName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_fastfile_load.cpp", 861, ASSERT_TYPE_ASSERT, "(zoneName)", (const char *)&queryFormat, "zoneName") )
    __debugbreak();
  ProfLoad_DB_Begin("DB_LoadXFile");
  v11 = j_va("DB_LoadXFile: %s", zoneName);
  Sys_ProfBeginNamedEvent(0xFF808080, v11);
  DB_LoadHashLookupData(zoneName);
  Com_Printf(16, "Begin alloc: paused %u\n", wasPaused);
  if ( !wasPaused )
  {
    DB_InitXZoneMemory(zoneMem);
    DB_PushFastfileErrorString((char (*)[256])outErrFilename, (char (*)[256])outErrMessage);
    v12 = DB_TryOpenFastfile(zoneName, zoneFlags, zoneMem);
    DB_PopFastfileErrorString();
    if ( !v12 )
    {
      if ( DB_Zones_IsOptionalSubZone(zoneName) || failureMode == ALLOW_MISSING )
      {
        DB_AppendFastfileFailureText(zoneFlags, outErrMessage, outErrFilename);
        XFileResident = LOGIN_DELAY;
        goto LABEL_50;
      }
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143F85548, outErrMessage, outErrFilename);
    }
    if ( !zoneMem->tempData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_fastfile_load.cpp", 915, ASSERT_TYPE_ASSERT, "(zoneMem->tempData)", (const char *)&queryFormat, "zoneMem->tempData") )
      __debugbreak();
    tempData = zoneMem->tempData;
    if ( tempData == (XZoneTemporaryLoadData *)-296i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_fastfile_load.cpp", 827, ASSERT_TYPE_ASSERT, "(header)", (const char *)&queryFormat, "header") )
      __debugbreak();
    if ( tempData->openData.topHeader.headerVersion != 11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_fastfile_load.cpp", 828, ASSERT_TYPE_ASSERT, "(header->headerVersion == XFILE_FF_HEADER_VERSION)", (const char *)&queryFormat, "header->headerVersion == XFILE_FF_HEADER_VERSION") )
      __debugbreak();
    if ( !tempData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_fastfile_load.cpp", 829, ASSERT_TYPE_ASSERT, "(file)", (const char *)&queryFormat, "file") )
      __debugbreak();
    if ( !LoadBar_IsComplete() )
      LoadBar_LoadingFastfile(tempData->openData.topHeader.residentPartSize, tempData->openData.topHeader.alwaysLoadedPartSize);
  }
  if ( !zoneMem->tempData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_fastfile_load.cpp", 924, ASSERT_TYPE_ASSERT, "(zoneMem->tempData)", (const char *)&queryFormat, "zoneMem->tempData") )
    __debugbreak();
  v14 = zoneMem->tempData;
  DB_InitLoadStreams(zoneMem);
  DB_PatchMem_BeginLoad();
  if ( g_dbPreloading )
    DB_PreloadPackedWalk_Start();
  XFileResident = DB_LoadXFileResident(zoneMem, assetList, wasPaused, outSignature);
  if ( XFileResident != FETCHING_FIRST_PARTY_TOKEN )
    DB_CloseTemporaryFileHandles(&v14->openData);
  if ( XFileResident == READY )
    DB_PatchMem_EndLoad();
  if ( g_dbPreloading )
    DB_PreloadPackedWalk_Finish();
  if ( XFileResident == READY )
  {
    v16 = DCONST_DVARBOOL_db_validateloadhash;
    if ( !DCONST_DVARBOOL_db_validateloadhash && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "db_validateloadhash") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v16);
    if ( v16->current.enabled )
    {
      v17 = j_CoD_XXH64_digest((const XXH64_state_s *)&g_streamPosGlob.runningHash);
      if ( ((unsigned int)v17 ^ HIDWORD(v17)) != v14->openData.topHeader.residentHash )
        Sys_Error((const ObfuscateErrorText)&stru_143F85570, zoneName);
    }
  }
  DB_CloseStreams();
  if ( XFileResident != FETCHING_FIRST_PARTY_TOKEN && !g_dbPreloading )
    DB_FreeXZoneTempMemory(zoneMem);
LABEL_50:
  Sys_ProfEndNamedEvent();
  ProfLoad_DB_End();
  return (unsigned int)XFileResident;
}

/*
==============
DB_LoadXFileResident
==============
*/
__int64 DB_LoadXFileResident(XZoneMemory *const zoneMem, XAssetList *const assetList, const bool wasPaused, DB_AuthSignature *const outSignature)
{
  XZoneTemporaryLoadData *tempData; 
  int CurrentZoneLoadIndex; 
  DB_LoadXFileReturn ArchiveData; 
  DB_LoadXFileReturn v10; 
  int v12; 
  char *fmt; 

  Sys_ProfBeginNamedEvent(0xFF808080, "DB_LoadXFileResident");
  if ( !zoneMem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_fastfile_load.cpp", 148, ASSERT_TYPE_ASSERT, "(zoneMem)", (const char *)&queryFormat, "zoneMem", -2i64) )
    __debugbreak();
  if ( !assetList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_fastfile_load.cpp", 149, ASSERT_TYPE_ASSERT, "(assetList)", (const char *)&queryFormat, "assetList") )
    __debugbreak();
  if ( !zoneMem->tempData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_fastfile_load.cpp", 150, ASSERT_TYPE_ASSERT, "(zoneMem->tempData)", (const char *)&queryFormat, "zoneMem->tempData") )
    __debugbreak();
  if ( !zoneMem->tempData->residentLoader && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_fastfile_load.cpp", 151, ASSERT_TYPE_ASSERT, "(zoneMem->tempData->residentLoader)", (const char *)&queryFormat, "zoneMem->tempData->residentLoader") )
    __debugbreak();
  tempData = zoneMem->tempData;
  if ( wasPaused )
  {
    if ( assetList->assetReadPos >= assetList->assetCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_fastfile_load.cpp", 157, ASSERT_TYPE_ASSERT, "(assetList->assetReadPos < assetList->assetCount)", (const char *)&queryFormat, "assetList->assetReadPos < assetList->assetCount") )
      __debugbreak();
    CurrentZoneLoadIndex = DB_Zones_GetCurrentZoneLoadIndex();
    LODWORD(fmt) = assetList->assetCount;
    Com_Printf(10, "Resuming resident fastfile load '%s' at asset %d / %d\n", tempData->openData.baseFastfile.name, assetList->assetReadPos, fmt);
    DB_UnpauseFastfileLoad(CurrentZoneLoadIndex);
  }
  if ( g_dbPreloading )
    ArchiveData = Preload_ArchiveData(zoneMem, assetList, tempData->openData.baseFastfile.name, wasPaused);
  else
    ArchiveData = Load_ArchiveData(zoneMem, assetList, tempData->openData.baseFastfile.name, wasPaused);
  v10 = ArchiveData;
  if ( ArchiveData == FIRST_PARTY_AUTHED )
  {
    if ( assetList->assetReadPos >= assetList->assetCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_fastfile_load.cpp", 178, ASSERT_TYPE_ASSERT, "(assetList->assetReadPos < assetList->assetCount)", (const char *)&queryFormat, "assetList->assetReadPos < assetList->assetCount") )
      __debugbreak();
    LODWORD(fmt) = assetList->assetCount;
    Com_Printf(10, "Cancelled resident fastfile load '%s' at asset %d / %d\n", tempData->openData.baseFastfile.name, assetList->assetReadPos, fmt);
    goto LABEL_26;
  }
  if ( ArchiveData != FETCHING_FIRST_PARTY_TOKEN )
  {
LABEL_26:
    DB_BinaryPatch_FinishLoad(zoneMem->tempData);
    DB_AsyncIWFileLoad::InflateShutdown(zoneMem->tempData->residentLoader);
    DB_AsyncIWFileLoad::Shutdown(zoneMem->tempData->residentLoader);
    DB_File_CloseDBFile(&zoneMem->tempData->openData.baseFastfile.dbFileHandle);
    goto LABEL_27;
  }
  if ( assetList->assetReadPos >= assetList->assetCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_fastfile_load.cpp", 185, ASSERT_TYPE_ASSERT, "(assetList->assetReadPos < assetList->assetCount)", (const char *)&queryFormat, "assetList->assetReadPos < assetList->assetCount") )
    __debugbreak();
  v12 = DB_Zones_GetCurrentZoneLoadIndex();
  LODWORD(fmt) = assetList->assetCount;
  Com_Printf(10, "Pausing resident fastfile load '%s' at asset %d / %d\n", tempData->openData.baseFastfile.name, assetList->assetReadPos, fmt);
  DB_PauseFastfileLoad(v12);
LABEL_27:
  Sys_ProfEndNamedEvent();
  return (unsigned int)v10;
}

/*
==============
DB_PopFastfileErrorString
==============
*/
__int64 DB_PopFastfileErrorString()
{
  __int64 v0; 
  __int64 result; 

  if ( !*(_QWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 704i64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_fastfile_load.cpp", 116, ASSERT_TYPE_ASSERT, "(s_fastfileErrorFilename)", (const char *)&queryFormat, "s_fastfileErrorFilename") )
    __debugbreak();
  if ( !*(_QWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 696i64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_fastfile_load.cpp", 117, ASSERT_TYPE_ASSERT, "(s_fastfileErrorMessage)", (const char *)&queryFormat, "s_fastfileErrorMessage") )
    __debugbreak();
  v0 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index);
  result = 0i64;
  *(_QWORD *)(v0 + 704) = 0i64;
  *(_QWORD *)(v0 + 696) = 0i64;
  return result;
}

/*
==============
DB_PushFastfileErrorString
==============
*/
void DB_PushFastfileErrorString(char (*outErrFilename)[256], char (*outErrMessage)[256])
{
  __int64 v4; 
  char *v5; 
  __int64 v6; 

  if ( *(_QWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 704i64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_fastfile_load.cpp", 105, ASSERT_TYPE_ASSERT, "(s_fastfileErrorFilename == nullptr)", (const char *)&queryFormat, "s_fastfileErrorFilename == nullptr") )
    __debugbreak();
  if ( *(_QWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 696i64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_fastfile_load.cpp", 106, ASSERT_TYPE_ASSERT, "(s_fastfileErrorMessage == nullptr)", (const char *)&queryFormat, "s_fastfileErrorMessage == nullptr") )
    __debugbreak();
  v4 = 8i64 * tls_index;
  (*outErrFilename)[0] = 0;
  v5 = (char *)NtCurrentTeb()->Reserved1[11];
  v6 = *(_QWORD *)&v5[v4];
  *(_QWORD *)(v6 + 696) = outErrMessage;
  *(_QWORD *)(v6 + 704) = outErrFilename;
  **(_BYTE **)(*(_QWORD *)&v5[v4] + 696i64) = 0;
}

/*
==============
DB_ReadFastfileHeaderData
==============
*/
__int64 DB_ReadFastfileHeaderData(const char *const zoneName, unsigned int zoneFlags, XZoneMemory *outZoneMem, DB_FFOpenData *outOpenData, const bool initForLoading)
{
  XZoneMemory *v6; 
  const char *v8; 
  unsigned int v9; 
  DB_AsyncIWFileLoad *v10; 
  DBFileHandle *p_dbFileHandle; 
  __int64 v12; 
  DB_FFHeader *p_topHeader; 
  DB_AsyncIWFileLoad *v14; 
  __int64 v15; 
  unsigned __int8 v16; 
  int v18; 
  bool v19; 
  const char **v20; 
  __int64 diffCount; 
  __int64 v22; 
  __int64 v23; 
  DB_FFDiffData *v24; 
  char *v25; 
  DB_AsyncIWFileLoad *v26; 
  int v27; 
  __int64 v28; 
  __int64 v29; 
  const void *v30; 
  unsigned int v31; 
  __int64 v32; 
  __int64 v33; 
  DB_FFOpenData *v34; 
  DBFileHandle *v35; 
  DB_FFOpenData *v36; 
  __int64 v37; 
  XZoneTemporaryLoadData *tempData; 
  DB_AsyncIWFileLoad *v39; 
  DB_AsyncIWFileLoad *v40; 
  __int64 v41; 
  char *fmt; 
  __int64 v43; 
  __int64 v44; 
  unsigned int v45; 
  const char *const *i; 
  char *v47; 
  DB_AsyncIWFileLoad other; 
  _QWORD ptr[67]; 
  char v52; 

  v6 = outZoneMem;
  v8 = zoneName;
  if ( !zoneName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_fastfile_load.cpp", 512, ASSERT_TYPE_ASSERT, "(zoneName)", (const char *)&queryFormat, "zoneName") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFF808080, "DB_ReadFastfileHeaderData");
  memset_0(outOpenData, 0, sizeof(DB_FFOpenData));
  v9 = 0;
  other.m_bufferCount = 0;
  `eh vector constructor iterator'(ptr, 0xE8ui64, 2ui64, (void (__fastcall *)(void *))DB_AsyncIWFileLoad::DB_AsyncIWFileLoad, (void (__fastcall *)(void *))DB_AsyncIWFileLoad::~DB_AsyncIWFileLoad);
  *(_DWORD *)outOpenData->baseFastfile.dbFileHandle.fileID = -16777217;
  DB_AsyncIWFileLoad::Init(&other);
  v10 = (DB_AsyncIWFileLoad *)ptr;
  p_dbFileHandle = &outOpenData->diff[0].file.dbFileHandle;
  v12 = 2i64;
  do
  {
    *(_DWORD *)p_dbFileHandle->fileID = -16777217;
    DB_AsyncIWFileLoad::Init(v10++);
    p_dbFileHandle += 32;
    --v12;
  }
  while ( v12 );
  p_topHeader = &outOpenData->topHeader;
  DB_FormatFastfilePathFromZoneName(outOpenData->baseFastfile.name, 64, v8, ".ff");
  if ( !DB_File_OpenDBFile(&outOpenData->baseFastfile.dbFileHandle, outOpenData->baseFastfile.name) )
  {
    DB_SetFastfileErrorString(COM_ERR_6036, outOpenData->baseFastfile.name, "Unable to open");
    goto $on_read_failure;
  }
  v18 = -1;
  v19 = initForLoading;
  if ( !initForLoading )
    v18 = 160;
  DB_AsyncIWFileLoad::PrepareToRead(&other, &outOpenData->baseFastfile, v18);
  if ( !DB_AsyncIWFileLoad::ReadHeader(&other, &outOpenData->baseHeader, 0xA0ui64) )
  {
    DB_SetFastfileErrorString(COM_ERR_6037, outOpenData->baseFastfile.name, "Unable to read header");
$on_read_failure:
    v14 = (DB_AsyncIWFileLoad *)ptr;
    v15 = 2i64;
    do
    {
      DB_AsyncIWFileLoad::Shutdown(v14++);
      --v15;
    }
    while ( v15 );
    DB_AsyncIWFileLoad::Shutdown(&other);
    v16 = 0;
    goto LABEL_11;
  }
  *(_OWORD *)p_topHeader->magic = *(_OWORD *)outOpenData->baseHeader.magic;
  *(_OWORD *)&outOpenData->topHeader.dashCompressBuild = *(_OWORD *)&outOpenData->baseHeader.dashCompressBuild;
  *(_OWORD *)&outOpenData->topHeader.xfileHeader.size = *(_OWORD *)&outOpenData->baseHeader.xfileHeader.size;
  *(_OWORD *)outOpenData->topHeader.xfileHeader.blockSize = *(_OWORD *)outOpenData->baseHeader.xfileHeader.blockSize;
  *(_OWORD *)&outOpenData->topHeader.xfileHeader.blockSize[2] = *(_OWORD *)&outOpenData->baseHeader.xfileHeader.blockSize[2];
  *(_OWORD *)&outOpenData->topHeader.xfileHeader.blockSize[4] = *(_OWORD *)&outOpenData->baseHeader.xfileHeader.blockSize[4];
  *(_OWORD *)&outOpenData->topHeader.xfileHeader.blockSize[6] = *(_OWORD *)&outOpenData->baseHeader.xfileHeader.blockSize[6];
  *(_OWORD *)&outOpenData->topHeader.xfileHeader.blockSize[8] = *(_OWORD *)&outOpenData->baseHeader.xfileHeader.blockSize[8];
  *(_OWORD *)&outOpenData->topHeader.xfileHeader.blockSize[10] = *(_OWORD *)&outOpenData->baseHeader.xfileHeader.blockSize[10];
  *(_OWORD *)&outOpenData->topHeader.xfileHeader.encryption.IV[4] = *(_OWORD *)&outOpenData->baseHeader.xfileHeader.encryption.IV[4];
  if ( !DB_CheckFastfileHeaderVersionAndMagic(&outOpenData->baseHeader, &outOpenData->baseFastfile) )
    goto $on_read_failure;
  if ( (zoneFlags & 0x3CFF000) == 0 || (zoneFlags & 0x404000) == zoneFlags )
  {
    v52 = 0;
    v45 = 0;
    v20 = (const char **)FASTFILE_DIFF_EXTS;
    for ( i = FASTFILE_DIFF_EXTS; ; v20 = (const char **)i )
    {
      diffCount = outOpenData->diffCount;
      if ( (unsigned int)diffCount >= 2 )
      {
        LODWORD(v44) = 2;
        LODWORD(v43) = outOpenData->diffCount;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_fastfile_load.cpp", 580, ASSERT_TYPE_ASSERT, "(unsigned)( diffIndex ) < (unsigned)( ( sizeof( *array_counter( outOpenData.diff ) ) + 0 ) )", "diffIndex doesn't index ARRAY_COUNT( outOpenData.diff )\n\t%i not in [0, %i)", v43, v44) )
          __debugbreak();
      }
      v22 = diffCount;
      v23 = diffCount << 9;
      v24 = &outOpenData->diff[diffCount];
      v47 = &outOpenData->baseFastfile.name[v23];
      v25 = &outOpenData->diff[0].header.magic[v23];
      *(_DWORD *)v24->file.dbFileHandle.fileID = -16777217;
      Com_sprintf(v24->file.name, 0x40ui64, "%s%s", zoneName, *v20);
      if ( DB_File_OpenDBFile(&v24->file.dbFileHandle, v24->file.name) )
      {
        v26 = (DB_AsyncIWFileLoad *)&ptr[29 * v22];
        v27 = -1;
        if ( !initForLoading )
          v27 = 376;
        DB_AsyncIWFileLoad::PrepareToRead(v26, &v24->file, v27);
        if ( DB_AsyncIWFileLoad::ReadHeader(v26, v25, 0x178ui64) )
        {
          ++outOpenData->diffCount;
          v28 = *((unsigned int *)v25 + 2);
          if ( (_DWORD)v28 != 6 )
          {
            LODWORD(fmt) = 6;
            DB_SetFastfileErrorString(COM_ERR_6039, v24->file.name, "XFILE_FD_HEADER_VERSION mismatch. Has '%d', wanted '%d'", v28, fmt);
            goto $on_read_failure;
          }
          v29 = *((unsigned int *)v25 + 3);
          if ( (_DWORD)v29 != 4 )
          {
            LODWORD(fmt) = 4;
            DB_SetFastfileErrorString(COM_ERR_6040, v24->file.name, "XFILE_DIFF_VERSION version mismatch. Has '%d', wanted '%d'", v29, fmt);
            goto $on_read_failure;
          }
          if ( !DB_CheckFastfileHeaderVersionAndMagic((const DB_FFHeader *)(v25 + 216), &v24->file) || !DB_CheckFastfileHeaderVersionAndMagic((const DB_FFHeader *)(v25 + 56), &v24->file) )
            goto $on_read_failure;
          v30 = v25 + 56;
          if ( v52 )
          {
            if ( memcmp_0(v30, &outOpenData->topHeader, 0xA0ui64) )
            {
              DB_SetFastfileErrorString(COM_ERR_6041, v24->file.name, "Patch header data mismatch between current and prior patch");
              goto $on_read_failure;
            }
          }
          else if ( memcmp_0(v30, &outOpenData->baseHeader, 0xA0ui64) )
          {
            DB_SetFastfileErrorString(COM_ERR_6042, v24->file.name, "Patch header data mismatch between base FF '%s' and current patch", outOpenData->baseFastfile.name);
            goto $on_read_failure;
          }
          v52 = 1;
          *(_OWORD *)outOpenData->topHeader.magic = *(_OWORD *)(v25 + 216);
          *(_OWORD *)&outOpenData->topHeader.dashCompressBuild = *(_OWORD *)(v25 + 232);
          *(_OWORD *)&outOpenData->topHeader.xfileHeader.size = *(_OWORD *)(v25 + 248);
          *(_OWORD *)outOpenData->topHeader.xfileHeader.blockSize = *(_OWORD *)(v25 + 264);
          *(_OWORD *)&outOpenData->topHeader.xfileHeader.blockSize[2] = *(_OWORD *)(v25 + 280);
          *(_OWORD *)&outOpenData->topHeader.xfileHeader.blockSize[4] = *(_OWORD *)(v25 + 296);
          *(_OWORD *)&outOpenData->topHeader.xfileHeader.blockSize[6] = *(_OWORD *)(v25 + 312);
          *(_OWORD *)&outOpenData->topHeader.xfileHeader.blockSize[8] = *(_OWORD *)(v25 + 328);
          *(_OWORD *)&outOpenData->topHeader.xfileHeader.blockSize[10] = *(_OWORD *)(v25 + 344);
          *(_OWORD *)&outOpenData->topHeader.xfileHeader.encryption.IV[4] = *(_OWORD *)(v25 + 360);
          if ( !*((_QWORD *)v25 + 6) )
          {
            if ( *((_QWORD *)v25 + 5) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_fastfile_load.cpp", 682, ASSERT_TYPE_ASSERT, "(fdHeader.residentDiffCompSize == 0)", (const char *)&queryFormat, "fdHeader.residentDiffCompSize == 0") )
              __debugbreak();
            DB_AsyncIWFileLoad::Shutdown(v26);
            DB_File_CloseDBFile(&v24->file.dbFileHandle);
            memset_0(v24, 0, sizeof(DB_FFDiffData));
            *((_DWORD *)v47 + 130) = -16777217;
            if ( !outOpenData->diffCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_fastfile_load.cpp", 691, ASSERT_TYPE_ASSERT, "(outOpenData.diffCount > 0)", (const char *)&queryFormat, "outOpenData.diffCount > 0") )
              __debugbreak();
            --outOpenData->diffCount;
          }
        }
        else
        {
          if ( DB_File_GetDBFileSize(&v24->file.dbFileHandle) )
          {
            DB_SetFastfileErrorString(COM_ERR_6038, v24->file.name, "Unable to read header");
            DB_AsyncIWFileLoad::Shutdown(v26);
            DB_File_CloseDBFile(&v24->file.dbFileHandle);
            goto $on_read_failure;
          }
          Com_PrintWarning(10, "WARNING: '%s' is a zero byte file.\n", v24->file.name);
          Com_PrintWarning(10, "WARNING: Unable to read header for '%s'.\n", v24->file.name);
          DB_AsyncIWFileLoad::Shutdown(v26);
          DB_File_CloseDBFile(&v24->file.dbFileHandle);
        }
      }
      else
      {
        v24->file.name[0] = 0;
      }
      ++v45;
      ++i;
      if ( v45 >= 2 )
        break;
    }
    p_topHeader = &outOpenData->topHeader;
    v6 = outZoneMem;
    v8 = zoneName;
    v19 = initForLoading;
  }
  v31 = outOpenData->diffCount;
  if ( v31 )
  {
    v32 = v31 - 1;
    if ( (unsigned int)v32 >= 2 )
    {
      LODWORD(v44) = 2;
      LODWORD(v43) = v32;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_fastfile_load.cpp", 707, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( sizeof( *array_counter( outOpenData.diff ) ) + 0 ) )", "index doesn't index ARRAY_COUNT( outOpenData.diff )\n\t%i not in [0, %i)", v43, v44) )
        __debugbreak();
    }
    v33 = v32 << 9;
    if ( memcmp_0(&outOpenData->diff[0].header.newHeader.magic[v33], p_topHeader, 0xA0ui64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_fastfile_load.cpp", 711, ASSERT_TYPE_ASSERT, "(I_memcmp( &fdHeader.newHeader, &topFFHeader, sizeof( topFFHeader ) ) == 0)", (const char *)&queryFormat, "I_memcmp( &fdHeader.newHeader, &topFFHeader, sizeof( topFFHeader ) ) == 0") )
      __debugbreak();
    v34 = (DB_FFOpenData *)((char *)outOpenData->diff + v33);
    v35 = (DBFileHandle *)((char *)&outOpenData->diff[0].file.dbFileHandle + v33);
    v36 = outOpenData;
  }
  else
  {
    v36 = NULL;
    v34 = outOpenData;
    v35 = &outOpenData->baseFastfile.dbFileHandle;
  }
  if ( !DB_CheckXFileVersion(p_topHeader, v35, v34->baseFastfile.name, v36->baseFastfile.name) )
    goto $on_read_failure;
  if ( v19 )
  {
    DB_AllocateFastfileMemory(p_topHeader, outOpenData, v6, v8);
    DB_AsyncIWFileLoad::CopyFrom(v6->tempData->residentLoader, &other, &v6->tempData->openData.baseFastfile);
    v37 = 1712i64;
    do
    {
      tempData = v6->tempData;
      v39 = *(DB_AsyncIWFileLoad **)&tempData->openData.baseFastfile.name[v37];
      if ( v39 )
        DB_AsyncIWFileLoad::CopyFrom(v39, (DB_AsyncIWFileLoad *)&ptr[29 * v9], &tempData->openData.diff[(unsigned __int64)v9].file);
      ++v9;
      v37 += 8i64;
    }
    while ( v9 < 2 );
    v16 = 1;
  }
  else
  {
    v40 = (DB_AsyncIWFileLoad *)ptr;
    v41 = 2i64;
    do
    {
      DB_AsyncIWFileLoad::Shutdown(v40++);
      --v41;
    }
    while ( v41 );
    DB_AsyncIWFileLoad::Shutdown(&other);
    v16 = 1;
  }
LABEL_11:
  `eh vector destructor iterator'(ptr, 0xE8ui64, 2ui64, (void (__fastcall *)(void *))DB_AsyncIWFileLoad::~DB_AsyncIWFileLoad);
  DB_AsyncIWFileLoad::~DB_AsyncIWFileLoad(&other);
  Sys_ProfEndNamedEvent();
  return v16;
}

/*
==============
DB_SetFastfileErrorString
==============
*/
void DB_SetFastfileErrorString(ComErrorCode uniqueErrorCode, const char *const filename, const char *const fmt, ...)
{
  __int64 v3; 
  __int64 v5; 
  va_list ap; 

  va_start(ap, fmt);
  v3 = tls_index;
  if ( !*(_QWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 704i64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_fastfile_load.cpp", 90, ASSERT_TYPE_ASSERT, "(s_fastfileErrorFilename)", (const char *)&queryFormat, "s_fastfileErrorFilename") )
    __debugbreak();
  if ( !*(_QWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v3) + 696i64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_fastfile_load.cpp", 91, ASSERT_TYPE_ASSERT, "(s_fastfileErrorMessage)", (const char *)&queryFormat, "s_fastfileErrorMessage") )
    __debugbreak();
  Core_strcpy_truncate(*(char **)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v3) + 704i64), 0x100ui64, filename);
  Com_vsprintf_truncate(*(char **)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v3) + 696i64), 0x100ui64, 0x100ui64, fmt, ap);
  v5 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + v3);
  Com_Printf(10, "DB ERROR: File: '%s', Text: '%s'\n", *(const char **)(v5 + 704), *(const char **)(v5 + 696));
}

/*
==============
DB_SetupTempLoadData
==============
*/
XBlock *DB_SetupTempLoadData(DB_FFOpenData *outOpenData, const XArchiveBlocks *archiveBlocks)
{
  unsigned __int8 *data; 
  XBlock *v5; 
  unsigned __int8 *v6; 
  unsigned __int8 *v7; 
  const dvar_t *v8; 
  unsigned __int64 v9; 
  __int64 v10; 
  DBBinaryPatchStream *v11; 
  unsigned __int64 BDiffWindowSizeAlloc; 
  unsigned __int64 v13; 

  if ( !archiveBlocks->blocks[0].data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_fastfile_load.cpp", 302, ASSERT_TYPE_ASSERT, "(archiveBlocks.blocks[XFILE_BLOCK_TEMP_ADDITIONAL].data)", (const char *)&queryFormat, "archiveBlocks.blocks[XFILE_BLOCK_TEMP_ADDITIONAL].data") )
    __debugbreak();
  if ( archiveBlocks->blocks[0].size < 0x6C0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_fastfile_load.cpp", 303, ASSERT_TYPE_ASSERT, "(archiveBlocks.blocks[XFILE_BLOCK_TEMP_ADDITIONAL].size >= sizeof( XZoneTemporaryLoadData ))", (const char *)&queryFormat, "archiveBlocks.blocks[XFILE_BLOCK_TEMP_ADDITIONAL].size >= sizeof( XZoneTemporaryLoadData )") )
    __debugbreak();
  data = archiveBlocks->blocks[0].data;
  if ( (unsigned __int16)archiveBlocks->blocks[0].data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_fastfile_load.cpp", 307, ASSERT_TYPE_ASSERT, "(IsAligned( tempDataPtr, MEM_PHYSICAL_PAGE_SIZE ))", (const char *)&queryFormat, "IsAligned( tempDataPtr, MEM_PHYSICAL_PAGE_SIZE )") )
    __debugbreak();
  v5 = (XBlock *)data;
  v6 = data;
  v7 = data + 1728;
  memset_0(v6, 0, 0x6C0ui64);
  if ( g_dbPreloading )
  {
    v5[105].data = v7;
    v5[105].size = outOpenData->topHeader.xfileHeader.preloadWalkSize;
    v7 += outOpenData->topHeader.xfileHeader.preloadWalkSize;
    v8 = DCONST_DVARBOOL_db_patchmem_preload;
    if ( !DCONST_DVARBOOL_db_patchmem_preload && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "db_patchmem_preload") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v8);
    if ( v8->current.enabled )
    {
      v9 = (unsigned __int64)(v7 + 7) & 0xFFFFFFFFFFFFFFF8ui64;
      v5[106].size = v9;
      v7 = (unsigned __int8 *)(v9 + 147920);
    }
  }
  if ( outOpenData->diffCount )
  {
    v10 = 0i64;
    do
    {
      v11 = (DBBinaryPatchStream *)((unsigned __int64)(v7 + 7) & 0xFFFFFFFFFFFFFFF8ui64);
      *((_QWORD *)&v5[107].data + v10) = v11;
      DB_BinaryPatch_MemSetClear(v11);
      BDiffWindowSizeAlloc = DB_BinaryPatch_GetBDiffWindowSizeAlloc(&outOpenData->diff[(unsigned __int64)(unsigned int)v10].header.residentWindowSizes);
      DB_BinaryPatch_SetWindowAllocs(v11, &outOpenData->diff[(unsigned __int64)(unsigned int)v10].header.residentWindowSizes, (unsigned __int8 *)(((unsigned __int64)&v11[10].asyncFileLoad.m_readBuffers[15] + 7) & 0xFFFFFFFFFFFFF000ui64), BDiffWindowSizeAlloc);
      v7 = (unsigned __int8 *)(BDiffWindowSizeAlloc + (((unsigned __int64)&v11[10].asyncFileLoad.m_readBuffers[15] + 7) & 0xFFFFFFFFFFFFF000ui64));
      v10 = (unsigned int)(v10 + 1);
    }
    while ( (unsigned int)v10 < outOpenData->diffCount );
  }
  v13 = (unsigned __int64)(v7 + 7) & 0xFFFFFFFFFFFFFFF8ui64;
  v5[104].size = v13;
  if ( ((v13 + 247) & 0xFFFFFFFFFFFFFFF0ui64) - (unsigned __int64)archiveBlocks->blocks[0].data != archiveBlocks->blocks[0].size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_fastfile_load.cpp", 361, ASSERT_TYPE_ASSERT, "(static_cast<size_t>( tempDataPtr - archiveBlocks.blocks[XFILE_BLOCK_TEMP_ADDITIONAL].data ) == archiveBlocks.blocks[XFILE_BLOCK_TEMP_ADDITIONAL].size)", (const char *)&queryFormat, "static_cast<size_t>( tempDataPtr - archiveBlocks.blocks[XFILE_BLOCK_TEMP_ADDITIONAL].data ) == archiveBlocks.blocks[XFILE_BLOCK_TEMP_ADDITIONAL].size") )
    __debugbreak();
  v5[93] = archiveBlocks->blocks[0];
  v5[94] = archiveBlocks->blocks[1];
  v5[95] = archiveBlocks->blocks[2];
  v5[96] = archiveBlocks->blocks[3];
  v5[97] = archiveBlocks->blocks[4];
  v5[98] = archiveBlocks->blocks[5];
  v5[99] = archiveBlocks->blocks[6];
  v5[100] = archiveBlocks->blocks[7];
  v5[101] = archiveBlocks->blocks[8];
  v5[102] = archiveBlocks->blocks[9];
  v5[103] = archiveBlocks->blocks[10];
  return v5;
}

/*
==============
DB_TryOpenFastfile
==============
*/
__int64 DB_TryOpenFastfile(const char *const zoneName, unsigned int zoneFlags, XZoneMemory *outZoneMem)
{
  __int64 v6; 
  unsigned __int8 v7; 
  XZoneTemporaryLoadData *tempData; 
  DB_FFOpenData outOpenData; 

  Sys_ProfBeginNamedEvent(0xFF808080, "DB_TryOpenFastfile");
  if ( !Sys_IsDatabaseThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_fastfile_load.cpp", 782, ASSERT_TYPE_ASSERT, "(Sys_IsDatabaseThread())", (const char *)&queryFormat, "Sys_IsDatabaseThread()", -2i64) )
    __debugbreak();
  if ( !zoneName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_fastfile_load.cpp", 783, ASSERT_TYPE_ASSERT, "(zoneName)", (const char *)&queryFormat, "zoneName") )
    __debugbreak();
  if ( outZoneMem->tempData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_fastfile_load.cpp", 784, ASSERT_TYPE_ASSERT, "(outZoneMem.tempData == nullptr)", (const char *)&queryFormat, "outZoneMem.tempData == nullptr") )
    __debugbreak();
  v6 = tls_index;
  if ( !*(_QWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 704i64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_fastfile_load.cpp", 785, ASSERT_TYPE_ASSERT, "(s_fastfileErrorFilename)", (const char *)&queryFormat, "s_fastfileErrorFilename") )
    __debugbreak();
  if ( !*(_QWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v6) + 696i64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_fastfile_load.cpp", 786, ASSERT_TYPE_ASSERT, "(s_fastfileErrorMessage)", (const char *)&queryFormat, "s_fastfileErrorMessage") )
    __debugbreak();
  if ( (unsigned __int8)DB_ReadFastfileHeaderData(zoneName, zoneFlags, outZoneMem, &outOpenData, 1) )
  {
    if ( !outZoneMem->tempData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_fastfile_load.cpp", 799, ASSERT_TYPE_ASSERT, "(outZoneMem.tempData)", (const char *)&queryFormat, "outZoneMem.tempData") )
      __debugbreak();
    tempData = outZoneMem->tempData;
    if ( tempData->openData.diffCount )
      DB_BinaryPatch_BeginLoad(tempData);
    DB_DecryptFileInit(&tempData->openData.baseFastfile, &tempData->openData.baseHeader.xfileHeader.encryption);
    if ( !tempData->residentLoader && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_fastfile_load.cpp", 814, ASSERT_TYPE_ASSERT, "(tempData.residentLoader)", (const char *)&queryFormat, "tempData.residentLoader") )
      __debugbreak();
    DB_AsyncIWFileLoad::InflateInit(tempData->residentLoader);
    v7 = 1;
  }
  else
  {
    if ( !**(_BYTE **)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v6) + 704i64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_fastfile_load.cpp", 790, ASSERT_TYPE_ASSERT, "( ( *s_fastfileErrorFilename )[0] != '\\0' )", "For failures, ensure you call DB_SetFastfileErrorString() with a fast file name") )
      __debugbreak();
    if ( !**(_BYTE **)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v6) + 696i64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_fastfile_load.cpp", 791, ASSERT_TYPE_ASSERT, "( ( *s_fastfileErrorMessage )[0] != '\\0' )", "For failures, ensure you call DB_SetFastfileErrorString() with a descriptive message") )
      __debugbreak();
    DB_CloseTemporaryFileHandles(&outOpenData);
    DB_CloseAllFileHandles(outZoneMem);
    v7 = 0;
  }
  Sys_ProfEndNamedEvent();
  return v7;
}

