/*
==============
DB_Zones_IsPreloadZoneIndex
==============
*/

bool __fastcall DB_Zones_IsPreloadZoneIndex(int zoneIndex)
{
  return ?DB_Zones_IsPreloadZoneIndex@@YA_NH@Z(zoneIndex);
}

/*
==============
DB_Zones_AddInUseFlags
==============
*/

void __fastcall DB_Zones_AddInUseFlags(const unsigned int flags)
{
  ?DB_Zones_AddInUseFlags@@YAXI@Z(flags);
}

/*
==============
DB_Zones_GetAssetCountInZone
==============
*/

unsigned int __fastcall DB_Zones_GetAssetCountInZone(const int zoneIndex)
{
  return ?DB_Zones_GetAssetCountInZone@@YAIH@Z(zoneIndex);
}

/*
==============
DB_Zones_IsTransientZoneName
==============
*/

bool __fastcall DB_Zones_IsTransientZoneName(const char *zoneName)
{
  return ?DB_Zones_IsTransientZoneName@@YA_NPEBD@Z(zoneName);
}

/*
==============
DB_Zones_GetCurrentZoneLoadHandleUnique
==============
*/

XZoneHandleUnique __fastcall DB_Zones_GetCurrentZoneLoadHandleUnique()
{
  return ?DB_Zones_GetCurrentZoneLoadHandleUnique@@YA?AUXZoneHandleUnique@@XZ();
}

/*
==============
DB_Zones_DumpMemoryUsage
==============
*/

void DB_Zones_DumpMemoryUsage(void)
{
  ?DB_Zones_DumpMemoryUsage@@YAXXZ();
}

/*
==============
DB_Zones_GetInferredGameMode
==============
*/

DBInferredGameMode __fastcall DB_Zones_GetInferredGameMode()
{
  return ?DB_Zones_GetInferredGameMode@@YA?AW4DBInferredGameMode@@XZ();
}

/*
==============
DB_Zones_MarkInProgressZoneStrings
==============
*/

void __fastcall DB_Zones_MarkInProgressZoneStrings(const DB_ZoneBitArray *unloadZones)
{
  ?DB_Zones_MarkInProgressZoneStrings@@YAXAEBUDB_ZoneBitArray@@@Z(unloadZones);
}

/*
==============
DB_Zones_AreTransientOnlyFlags
==============
*/

bool __fastcall DB_Zones_AreTransientOnlyFlags(unsigned int flags)
{
  return ?DB_Zones_AreTransientOnlyFlags@@YA_NI@Z(flags);
}

/*
==============
DB_Zones_IsLocalizedZoneName
==============
*/

bool __fastcall DB_Zones_IsLocalizedZoneName(const char *zoneName)
{
  return ?DB_Zones_IsLocalizedZoneName@@YA_NPEBD@Z(zoneName);
}

/*
==============
DB_Zones_GetZoneUniqueHandleFromWorldTransientIndex
==============
*/

XZoneHandleUnique __fastcall DB_Zones_GetZoneUniqueHandleFromWorldTransientIndex(const unsigned int worldTransientIndex)
{
  return ?DB_Zones_GetZoneUniqueHandleFromWorldTransientIndex@@YA?AUXZoneHandleUnique@@I@Z(worldTransientIndex);
}

/*
==============
DB_Zones_BeginZoneLoad
==============
*/

bool __fastcall DB_Zones_BeginZoneLoad(const char *zoneName, const char *parentZoneName, unsigned int zoneFlags, bool processingPreloadedFiles, bool wasPaused)
{
  return ?DB_Zones_BeginZoneLoad@@YA_NPEBD0I_N1@Z(zoneName, parentZoneName, zoneFlags, processingPreloadedFiles, wasPaused);
}

/*
==============
DB_Zones_NameStartsWith
==============
*/

bool __fastcall DB_Zones_NameStartsWith(const char *name, const char *find)
{
  return ?DB_Zones_NameStartsWith@@YA_NPEBD0@Z(name, find);
}

/*
==============
DB_Zones_GetZoneFlagsFromIndex
==============
*/

unsigned int __fastcall DB_Zones_GetZoneFlagsFromIndex(int zoneIndex)
{
  return ?DB_Zones_GetZoneFlagsFromIndex@@YAIH@Z(zoneIndex);
}

/*
==============
DB_Zones_GetZoneNameFromIndex
==============
*/

const char *__fastcall DB_Zones_GetZoneNameFromIndex(int zoneIndex)
{
  return ?DB_Zones_GetZoneNameFromIndex@@YAPEBDH@Z(zoneIndex);
}

/*
==============
DB_Zones_UnloadAndFreeZone
==============
*/

void __fastcall DB_Zones_UnloadAndFreeZone(int zoneIndex, bool freeGpuWait)
{
  ?DB_Zones_UnloadAndFreeZone@@YAXH_N@Z(zoneIndex, freeGpuWait);
}

/*
==============
DB_CloseTemporaryFileHandles
==============
*/

void __fastcall DB_CloseTemporaryFileHandles(DB_FFOpenData *outOpenData)
{
  ?DB_CloseTemporaryFileHandles@@YAXAEAUDB_FFOpenData@@@Z(outOpenData);
}

/*
==============
DB_Zones_IsFrontEndSceneZoneName
==============
*/

bool __fastcall DB_Zones_IsFrontEndSceneZoneName(const char *const zoneName)
{
  return ?DB_Zones_IsFrontEndSceneZoneName@@YA_NQEBD@Z(zoneName);
}

/*
==============
DB_Zones_IsPreloadZoneName
==============
*/

bool __fastcall DB_Zones_IsPreloadZoneName(const char *zoneName)
{
  return ?DB_Zones_IsPreloadZoneName@@YA_NPEBD@Z(zoneName);
}

/*
==============
DB_Zones_IsWorldTransientZone
==============
*/

bool __fastcall DB_Zones_IsWorldTransientZone(const int zoneIndex)
{
  return ?DB_Zones_IsWorldTransientZone@@YA_NH@Z(zoneIndex);
}

/*
==============
DB_Zones_IsFinishedLoadingByIndex
==============
*/

bool __fastcall DB_Zones_IsFinishedLoadingByIndex(int zoneIndex)
{
  return ?DB_Zones_IsFinishedLoadingByIndex@@YA_NH@Z(zoneIndex);
}

/*
==============
DB_Zones_FastfileInfoMatches
==============
*/

bool __fastcall DB_Zones_FastfileInfoMatches(const DB_FastfileInfo *zoneInfo, const unsigned int flags, const char *const name)
{
  return ?DB_Zones_FastfileInfoMatches@@YA_NAEBUDB_FastfileInfo@@IQEBD@Z(zoneInfo, flags, name);
}

/*
==============
DB_CloseAllFileHandles
==============
*/

void __fastcall DB_CloseAllFileHandles(XZoneMemory *outZoneMem)
{
  ?DB_CloseAllFileHandles@@YAXAEAUXZoneMemory@@@Z(outZoneMem);
}

/*
==============
DB_Zones_IsPermanentZoneIndex
==============
*/

bool __fastcall DB_Zones_IsPermanentZoneIndex(int zoneIndex)
{
  return ?DB_Zones_IsPermanentZoneIndex@@YA_NH@Z(zoneIndex);
}

/*
==============
DB_Zones_IsOptionalSubZone
==============
*/

bool __fastcall DB_Zones_IsOptionalSubZone(const char *const zoneName)
{
  return ?DB_Zones_IsOptionalSubZone@@YA_NQEBD@Z(zoneName);
}

/*
==============
DB_Zones_GetCurrentZoneHandleUniqueForIndex
==============
*/

XZoneHandleUnique __fastcall DB_Zones_GetCurrentZoneHandleUniqueForIndex(unsigned __int16 zoneIndex)
{
  return ?DB_Zones_GetCurrentZoneHandleUniqueForIndex@@YA?AUXZoneHandleUnique@@G@Z(zoneIndex);
}

/*
==============
DB_Zones_IsFinishedLoading
==============
*/

bool __fastcall DB_Zones_IsFinishedLoading(const char *zoneName)
{
  return ?DB_Zones_IsFinishedLoading@@YA_NPEBD@Z(zoneName);
}

/*
==============
DB_Zones_ProcessPendingUnloadFrees
==============
*/

void __fastcall DB_Zones_ProcessPendingUnloadFrees(bool forceFree)
{
  ?DB_Zones_ProcessPendingUnloadFrees@@YAX_N@Z(forceFree);
}

/*
==============
DB_Zones_GetZoneLoadOrder
==============
*/

unsigned __int8 __fastcall DB_Zones_GetZoneLoadOrder(int zoneIndex)
{
  return ?DB_Zones_GetZoneLoadOrder@@YAEH@Z(zoneIndex);
}

/*
==============
DB_Zones_IsValidZoneIndex
==============
*/

bool __fastcall DB_Zones_IsValidZoneIndex(int zoneIndex)
{
  return ?DB_Zones_IsValidZoneIndex@@YA_NH@Z(zoneIndex);
}

/*
==============
DB_Zones_GetUnloadBitArray
==============
*/

unsigned int __fastcall DB_Zones_GetUnloadBitArray(DB_ZoneBitArray *outArray, const DB_FastfileInfo *zoneInfo, unsigned int zoneCount)
{
  return ?DB_Zones_GetUnloadBitArray@@YAIAEAUDB_ZoneBitArray@@PEBUDB_FastfileInfo@@I@Z(outArray, zoneInfo, zoneCount);
}

/*
==============
DB_Zones_GetInUseFlags
==============
*/

unsigned int __fastcall DB_Zones_GetInUseFlags()
{
  return ?DB_Zones_GetInUseFlags@@YAIXZ();
}

/*
==============
DB_Zones_UpdateInUseFlags
==============
*/

void DB_Zones_UpdateInUseFlags(void)
{
  ?DB_Zones_UpdateInUseFlags@@YAXXZ();
}

/*
==============
DB_Zones_Init
==============
*/

void DB_Zones_Init(void)
{
  ?DB_Zones_Init@@YAXXZ();
}

/*
==============
DB_Zones_NameEndsWith
==============
*/

bool __fastcall DB_Zones_NameEndsWith(const char *name, const char *find)
{
  return ?DB_Zones_NameEndsWith@@YA_NPEBD0@Z(name, find);
}

/*
==============
DB_Zones_GetCurrentZoneLoadIndex
==============
*/

unsigned __int16 __fastcall DB_Zones_GetCurrentZoneLoadIndex()
{
  return ?DB_Zones_GetCurrentZoneLoadIndex@@YAGXZ();
}

/*
==============
DB_Zones_GetZoneIndexFromWorldTransientIndex
==============
*/

int __fastcall DB_Zones_GetZoneIndexFromWorldTransientIndex(const unsigned int worldTransientIndex)
{
  return ?DB_Zones_GetZoneIndexFromWorldTransientIndex@@YAHI@Z(worldTransientIndex);
}

/*
==============
DB_Zones_GetFootprintSizesForBudgeting
==============
*/

void __fastcall DB_Zones_GetFootprintSizesForBudgeting(MemBudget_PollZoneSizes *outSizes)
{
  ?DB_Zones_GetFootprintSizesForBudgeting@@YAXAEAUMemBudget_PollZoneSizes@@@Z(outSizes);
}

/*
==============
DB_Zones_AreStreamOnlyFlags
==============
*/

bool __fastcall DB_Zones_AreStreamOnlyFlags(unsigned int flags)
{
  return ?DB_Zones_AreStreamOnlyFlags@@YA_NI@Z(flags);
}

/*
==============
DB_Zones_MarkAllLoadsCompleted
==============
*/

void DB_Zones_MarkAllLoadsCompleted(void)
{
  ?DB_Zones_MarkAllLoadsCompleted@@YAXXZ();
}

/*
==============
DB_Zones_ForEachZone
==============
*/

void __fastcall DB_Zones_ForEachZone(void (__fastcall *callback)(const char *, unsigned int, unsigned __int64))
{
  ?DB_Zones_ForEachZone@@YAXP6AXPEBDI_K@Z@Z(callback);
}

/*
==============
DB_Zones_PerformZoneLoad
==============
*/

DB_LoadXFileReturn __fastcall DB_Zones_PerformZoneLoad(bool processingPreloadedFiles, bool isBaseMap, bool wasPaused, DB_FastFileFailureMode failureMode)
{
  return ?DB_Zones_PerformZoneLoad@@YA?AW4DB_LoadXFileReturn@@_N00W4DB_FastFileFailureMode@@@Z(processingPreloadedFiles, isBaseMap, wasPaused, failureMode);
}

/*
==============
DB_Zones_AreZonesWithFlagsLoaded
==============
*/

bool __fastcall DB_Zones_AreZonesWithFlagsLoaded(unsigned int dbZoneFlags)
{
  return ?DB_Zones_AreZonesWithFlagsLoaded@@YA_NI@Z(dbZoneFlags);
}

/*
==============
DB_Zones_IsServerZoneName
==============
*/

bool __fastcall DB_Zones_IsServerZoneName(const char *zoneName)
{
  return ?DB_Zones_IsServerZoneName@@YA_NPEBD@Z(zoneName);
}

/*
==============
DB_Zones_FreeGpuTempMemory
==============
*/

void __fastcall DB_Zones_FreeGpuTempMemory(XZoneMemoryAllocation *alloc)
{
  ?DB_Zones_FreeGpuTempMemory@@YAXAEAUXZoneMemoryAllocation@@@Z(alloc);
}

/*
==============
DB_Zones_IsFrontendUIPreloadZoneIndex
==============
*/

bool __fastcall DB_Zones_IsFrontendUIPreloadZoneIndex(int zoneIndex)
{
  return ?DB_Zones_IsFrontendUIPreloadZoneIndex@@YA_NH@Z(zoneIndex);
}

/*
==============
DB_Zones_GetCurrentZoneLoadName
==============
*/

const char *__fastcall DB_Zones_GetCurrentZoneLoadName()
{
  return ?DB_Zones_GetCurrentZoneLoadName@@YAPEBDXZ();
}

/*
==============
DB_Zones_IsLevelZoneName
==============
*/

bool __fastcall DB_Zones_IsLevelZoneName(const char *zoneName)
{
  return ?DB_Zones_IsLevelZoneName@@YA_NPEBD@Z(zoneName);
}

/*
==============
DB_Zones_IsRegionalZoneName
==============
*/

bool __fastcall DB_Zones_IsRegionalZoneName(const char *zoneName)
{
  return ?DB_Zones_IsRegionalZoneName@@YA_NPEBD@Z(zoneName);
}

/*
==============
DB_Zones_GetZoneIndexFromName
==============
*/

int __fastcall DB_Zones_GetZoneIndexFromName(const char *name)
{
  return ?DB_Zones_GetZoneIndexFromName@@YAHPEBD@Z(name);
}

/*
==============
DB_Zones_GetMemoryUsage
==============
*/

unsigned __int64 __fastcall DB_Zones_GetMemoryUsage(const int zoneIndex)
{
  return ?DB_Zones_GetMemoryUsage@@YA_KH@Z(zoneIndex);
}

/*
==============
DB_Zones_GpuTempMemoryAllocTransferOwnership
==============
*/

XZoneMemoryAllocation *__fastcall DB_Zones_GpuTempMemoryAllocTransferOwnership(XZoneMemoryAllocation *result, int zoneIndex)
{
  return ?DB_Zones_GpuTempMemoryAllocTransferOwnership@@YA?AUXZoneMemoryAllocation@@H@Z(result, zoneIndex);
}

/*
==============
DB_Zones_IsDevZoneIndex
==============
*/

bool __fastcall DB_Zones_IsDevZoneIndex(int zoneIndex)
{
  return ?DB_Zones_IsDevZoneIndex@@YA_NH@Z(zoneIndex);
}

/*
==============
DB_Zones_RemoveXPak
==============
*/

void __fastcall DB_Zones_RemoveXPak(int zoneIndex)
{
  ?DB_Zones_RemoveXPak@@YAXH@Z(zoneIndex);
}

/*
==============
DB_Zones_IsTransientOrTransientPreloadZoneIndex
==============
*/

bool __fastcall DB_Zones_IsTransientOrTransientPreloadZoneIndex(int zoneIndex)
{
  return ?DB_Zones_IsTransientOrTransientPreloadZoneIndex@@YA_NH@Z(zoneIndex);
}

/*
==============
DB_Zones_GetWorldTransientIndexFromZoneIndex
==============
*/

unsigned __int16 __fastcall DB_Zones_GetWorldTransientIndexFromZoneIndex(const int zoneIndex)
{
  return ?DB_Zones_GetWorldTransientIndexFromZoneIndex@@YAGH@Z(zoneIndex);
}

/*
==============
DB_Zones_IsTransientZoneIndex
==============
*/

bool __fastcall DB_Zones_IsTransientZoneIndex(int zoneIndex)
{
  return ?DB_Zones_IsTransientZoneIndex@@YA_NH@Z(zoneIndex);
}

/*
==============
DB_CloseAllFileHandles
==============
*/
void DB_CloseAllFileHandles(XZoneMemory *outZoneMem)
{
  XZoneTemporaryLoadData *tempData; 
  __int64 v3; 
  unsigned int i; 
  XZoneTemporaryLoadData *v5; 
  DB_AsyncIWFileLoad *residentLoader; 
  DB_AsyncIWFileLoad *p_asyncFileLoad; 

  Sys_ProfBeginNamedEvent(0xFF808080, "DB_CloseAllFileHandles");
  tempData = outZoneMem->tempData;
  if ( tempData )
  {
    Sys_ProfBeginNamedEvent(0xFF808080, "DB_CloseTemporaryFileHandles");
    DB_File_CloseDBFile(&tempData->openData.baseFastfile.dbFileHandle);
    v3 = 0i64;
    for ( i = 0; i < tempData->openData.diffCount; ++i )
      DB_File_CloseDBFile(&tempData->openData.diff[(unsigned __int64)i].file.dbFileHandle);
    Sys_ProfEndNamedEvent();
    v5 = outZoneMem->tempData;
    residentLoader = v5->residentLoader;
    if ( residentLoader && !DB_AsyncIWFileLoad::IsShutdown(residentLoader) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 1364, ASSERT_TYPE_ASSERT, "(tempData.residentLoader->IsShutdown())", (const char *)&queryFormat, "tempData.residentLoader->IsShutdown()", -2i64) )
      __debugbreak();
    if ( DB_File_IsDBFileOpen(&v5->openData.baseFastfile.dbFileHandle) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 1366, ASSERT_TYPE_ASSERT, "(!DB_File_IsDBFileOpen( &tempData.openData.baseFastfile.dbFileHandle ))", (const char *)&queryFormat, "!DB_File_IsDBFileOpen( &tempData.openData.baseFastfile.dbFileHandle )") )
      __debugbreak();
    if ( v5->openData.diffCount )
    {
      do
      {
        p_asyncFileLoad = &v5->patchStreams[v3]->asyncFileLoad;
        if ( p_asyncFileLoad )
        {
          if ( !DB_AsyncIWFileLoad::IsShutdown(p_asyncFileLoad) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 1373, ASSERT_TYPE_ASSERT, "(tempData.patchStreams[i]->asyncFileLoad.IsShutdown())", (const char *)&queryFormat, "tempData.patchStreams[i]->asyncFileLoad.IsShutdown()") )
            __debugbreak();
          if ( DB_File_IsDBFileOpen(&v5->openData.diff[(unsigned __int64)(unsigned int)v3].file.dbFileHandle) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 1374, ASSERT_TYPE_ASSERT, "(!DB_File_IsDBFileOpen( &tempData.openData.diff[i].file.dbFileHandle ))", (const char *)&queryFormat, "!DB_File_IsDBFileOpen( &tempData.openData.diff[i].file.dbFileHandle )") )
            __debugbreak();
        }
        v3 = (unsigned int)(v3 + 1);
      }
      while ( (unsigned int)v3 < v5->openData.diffCount );
    }
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
DB_CloseTemporaryFileHandles
==============
*/
void DB_CloseTemporaryFileHandles(DB_FFOpenData *outOpenData)
{
  unsigned int i; 

  Sys_ProfBeginNamedEvent(0xFF808080, "DB_CloseTemporaryFileHandles");
  DB_File_CloseDBFile(&outOpenData->baseFastfile.dbFileHandle);
  for ( i = 0; i < outOpenData->diffCount; ++i )
    DB_File_CloseDBFile(&outOpenData->diff[(unsigned __int64)i].file.dbFileHandle);
  Sys_ProfEndNamedEvent();
}

/*
==============
DB_Zones_AddInUseFlags
==============
*/
void DB_Zones_AddInUseFlags(const unsigned int flags)
{
  s_zones.inUseFlags |= flags;
}

/*
==============
DB_Zones_AreStreamOnlyFlags
==============
*/
bool DB_Zones_AreStreamOnlyFlags(unsigned int flags)
{
  return (flags & 0x38FF000) != 0 && (flags & 0xFC700FFF) == 0;
}

/*
==============
DB_Zones_AreTransientOnlyFlags
==============
*/
bool DB_Zones_AreTransientOnlyFlags(unsigned int flags)
{
  return (flags & 0xFF000) != 0 && (flags & 0xFFF00FFF) == 0;
}

/*
==============
DB_Zones_AreZonesWithFlagsLoaded
==============
*/
bool DB_Zones_AreZonesWithFlagsLoaded(unsigned int dbZoneFlags)
{
  bool result; 
  unsigned int v3; 
  volatile bool *p_loadComplete; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 1575, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  result = 0;
  if ( (dbZoneFlags & s_zones.inUseFlags) != 0 )
  {
    v3 = 0;
    p_loadComplete = &s_zones.zones[0].loadComplete;
    do
    {
      if ( (dbZoneFlags & *((_DWORD *)p_loadComplete - 2)) != 0 )
      {
        if ( !*p_loadComplete )
          return 0;
        result = 1;
      }
      ++v3;
      p_loadComplete += 272;
    }
    while ( v3 < 0x7A4 );
  }
  return result;
}

/*
==============
DB_Zones_BeginZoneLoad
==============
*/
char DB_Zones_BeginZoneLoad(const char *zoneName, const char *parentZoneName, unsigned int zoneFlags, bool processingPreloadedFiles, bool wasPaused)
{
  unsigned int ZoneIndexFromName; 
  unsigned __int16 i; 
  const char *v11; 
  int v12; 
  const char *v13; 
  unsigned __int16 *v14; 
  __int64 HashIndex; 
  unsigned __int16 v16; 
  int loadingZoneIndex; 
  unsigned __int16 *v18; 
  unsigned int WorldTransientIndexFromName; 
  unsigned int v20; 
  unsigned __int16 v21; 
  unsigned __int16 v22; 
  __int64 v23; 
  unsigned int v24; 
  int v25; 
  __int64 v27; 
  __int64 v28; 
  __int64 v29; 
  int v30; 
  __int64 v31; 

  if ( !Sys_IsDatabaseThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 993, ASSERT_TYPE_ASSERT, "(Sys_IsDatabaseThread())", (const char *)&queryFormat, "Sys_IsDatabaseThread()") )
    __debugbreak();
  if ( !zoneName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 994, ASSERT_TYPE_ASSERT, "(zoneName)", (const char *)&queryFormat, "zoneName") )
    __debugbreak();
  if ( !*zoneName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 995, ASSERT_TYPE_ASSERT, "(zoneName[0] != '\\0')", (const char *)&queryFormat, "zoneName[0] != '\\0'") )
    __debugbreak();
  if ( !parentZoneName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 996, ASSERT_TYPE_ASSERT, "(parentZoneName)", (const char *)&queryFormat, "parentZoneName") )
    __debugbreak();
  if ( !*parentZoneName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 997, ASSERT_TYPE_ASSERT, "(parentZoneName[0] != '\\0')", (const char *)&queryFormat, "parentZoneName[0] != '\\0'") )
    __debugbreak();
  if ( s_zones.loadingZoneIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 998, ASSERT_TYPE_ASSERT, "(s_zones.loadingZoneIndex == DEFAULT_ZONE_INDEX)", (const char *)&queryFormat, "s_zones.loadingZoneIndex == DEFAULT_ZONE_INDEX") )
    __debugbreak();
  if ( wasPaused )
  {
    if ( processingPreloadedFiles && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 1003, ASSERT_TYPE_ASSERT, "(!processingPreloadedFiles)", (const char *)&queryFormat, "!processingPreloadedFiles") )
      __debugbreak();
    goto LABEL_23;
  }
  if ( processingPreloadedFiles )
  {
LABEL_23:
    ZoneIndexFromName = DB_Zones_GetZoneIndexFromName(zoneName);
    if ( ZoneIndexFromName == 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 1014, ASSERT_TYPE_ASSERT, "(foundZoneIndex != INVALID_ZONE_INDEX)", "%s\n\tShouldn't be here, preloadedZone should prevent this", "foundZoneIndex != INVALID_ZONE_INDEX") )
      __debugbreak();
    s_zones.loadingZoneIndex = truncate_cast<unsigned short,unsigned int>(ZoneIndexFromName);
    goto LABEL_51;
  }
  if ( DB_Zones_GetZoneIndexFromName(zoneName) != 0xFFFF )
  {
    v30 = DB_Zones_GetZoneIndexFromName(zoneName);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 1019, ASSERT_TYPE_ASSERT, "( DB_Zones_GetZoneIndexFromName( zoneName ) ) == ( INVALID_ZONE_INDEX )", "%s == %s\n\t%u, %u", "DB_Zones_GetZoneIndexFromName( zoneName )", "INVALID_ZONE_INDEX", v30, 0xFFFF) )
      __debugbreak();
  }
  if ( DB_Zones_GetZoneIndexFromName(zoneName) != 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 294, ASSERT_TYPE_ASSERT, "(DB_Zones_GetZoneIndexFromName( zoneName ) == INVALID_ZONE_INDEX)", (const char *)&queryFormat, "DB_Zones_GetZoneIndexFromName( zoneName ) == INVALID_ZONE_INDEX") )
    __debugbreak();
  for ( i = 1; i < 0x7A4u; ++i )
  {
    if ( !s_zones.zones[i].name[0] )
      break;
  }
  if ( i == 0xFFFF )
  {
    v11 = "zoneIndex != INVALID_ZONE_INDEX";
    v12 = 307;
    v13 = "(zoneIndex != INVALID_ZONE_INDEX)";
  }
  else
  {
    if ( i )
    {
      if ( i == 1956 )
        Sys_Error((const ObfuscateErrorText)&stru_143E01C00, zoneName);
      goto LABEL_45;
    }
    v11 = "zoneIndex != DEFAULT_ZONE_INDEX";
    v12 = 308;
    v13 = "(zoneIndex != DEFAULT_ZONE_INDEX)";
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", v12, ASSERT_TYPE_ASSERT, v13, (const char *)&queryFormat, v11) )
    __debugbreak();
LABEL_45:
  v14 = &s_zones.zoneHandleGeneration[136 * i - 266016];
  memset_0(v14, 0, 0x110ui64);
  Core_strcpy((char *)v14, 0x40ui64, zoneName);
  HashIndex = DB_Zones_GetHashIndex(zoneName);
  v16 = s_zones.nameHashTable[HashIndex];
  s_zones.nameHashTable[HashIndex] = i;
  v14[131] = v16;
  ++s_zones.zoneHandleGeneration[i];
  if ( DB_Zones_GetZoneIndexFromName(zoneName) != i )
  {
    LODWORD(v31) = i;
    LODWORD(v29) = DB_Zones_GetZoneIndexFromName(zoneName);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 1021, ASSERT_TYPE_ASSERT, "( DB_Zones_GetZoneIndexFromName( zoneName ) ) == ( newZoneIndex )", "%s == %s\n\t%u, %u", "DB_Zones_GetZoneIndexFromName( zoneName )", "newZoneIndex", v29, v31) )
      __debugbreak();
  }
  s_zones.loadingZoneIndex = i;
  if ( (zoneFlags & 0x82000) != 0 && ++s_zones.commonMPTransientCount > 0x320 )
    Sys_Error((const ObfuscateErrorText)&stru_143E02FB0, 800i64);
LABEL_51:
  if ( !s_zones.loadingZoneIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 1037, ASSERT_TYPE_ASSERT, "(s_zones.loadingZoneIndex != DEFAULT_ZONE_INDEX)", (const char *)&queryFormat, "s_zones.loadingZoneIndex != DEFAULT_ZONE_INDEX") )
    __debugbreak();
  if ( s_zones.loadingZoneIndex >= 0x7A4u )
  {
    LODWORD(v28) = 1956;
    LODWORD(v27) = s_zones.loadingZoneIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 1038, ASSERT_TYPE_ASSERT, "(unsigned)( s_zones.loadingZoneIndex ) < (unsigned)( ( sizeof( *array_counter( s_zones.zones ) ) + 0 ) )", "s_zones.loadingZoneIndex doesn't index ARRAY_COUNT( s_zones.zones )\n\t%i not in [0, %i)", v27, v28) )
      __debugbreak();
  }
  loadingZoneIndex = s_zones.loadingZoneIndex;
  if ( DB_Zones_GetZoneIndexFromName(zoneName) != loadingZoneIndex )
  {
    LODWORD(v31) = loadingZoneIndex;
    LODWORD(v29) = DB_Zones_GetZoneIndexFromName(zoneName);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 1039, ASSERT_TYPE_ASSERT, "( DB_Zones_GetZoneIndexFromName( zoneName ) ) == ( s_zones.loadingZoneIndex )", "%s == %s\n\t%u, %u", "DB_Zones_GetZoneIndexFromName( zoneName )", "s_zones.loadingZoneIndex", v29, v31) )
      __debugbreak();
  }
  v18 = &s_zones.zoneHandleGeneration[136 * s_zones.loadingZoneIndex - 266016];
  if ( wasPaused )
  {
    if ( *((_BYTE *)v18 + 264) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 1045, ASSERT_TYPE_ASSERT, "(!zone.loadComplete)", "%s\n\tExpected zone %s to be incomplete", "!zone.loadComplete", zoneName) )
      __debugbreak();
    if ( !*((_DWORD *)v18 + 20) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 1046, ASSERT_TYPE_ASSERT, "(zone.assetList.assetCount)", (const char *)&queryFormat, "zone.assetList.assetCount") )
      __debugbreak();
    if ( processingPreloadedFiles && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 1047, ASSERT_TYPE_ASSERT, "(!processingPreloadedFiles)", (const char *)&queryFormat, "!processingPreloadedFiles") )
      __debugbreak();
  }
  else
  {
    if ( processingPreloadedFiles )
    {
      if ( (*((_DWORD *)v18 + 64) & 0x3F00000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 1054, ASSERT_TYPE_ASSERT, "(zone.flags & DB_MASK_PRELOAD_ZONES)", (const char *)&queryFormat, "zone.flags & DB_MASK_PRELOAD_ZONES") )
        __debugbreak();
      if ( (zoneFlags & 0x3F00000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 1055, ASSERT_TYPE_ASSERT, "(( zoneFlags & DB_MASK_PRELOAD_ZONES ) == 0)", (const char *)&queryFormat, "( zoneFlags & DB_MASK_PRELOAD_ZONES ) == 0") )
        __debugbreak();
    }
    v18[130] = 0;
    if ( (zoneFlags & 0xC000) != 0 )
    {
      if ( (zoneFlags & 0x8000) != 0 )
      {
        WorldTransientIndexFromName = DB_Transients_GetWorldTransientIndexFromName(zoneName);
      }
      else
      {
        if ( (zoneFlags & 0x4000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 1074, ASSERT_TYPE_ASSERT, "(zoneFlags & DB_ZONE_TRANSIENT_WORLD_SP)", (const char *)&queryFormat, "zoneFlags & DB_ZONE_TRANSIENT_WORLD_SP") )
          __debugbreak();
        WorldTransientIndexFromName = DB_Transients_GetWorldTransientIndexFromList(zoneName);
      }
      v20 = WorldTransientIndexFromName;
      if ( WorldTransientIndexFromName == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 1078, ASSERT_TYPE_ASSERT, "(transientZoneIndex != 0xffffffff)", (const char *)&queryFormat, "transientZoneIndex != UINT_MAX") )
        __debugbreak();
      v21 = truncate_cast<unsigned short,unsigned int>(v20);
      v18[130] = v21;
      if ( !v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 1081, ASSERT_TYPE_ASSERT, "(zone.worldTransientIndex != 0)", (const char *)&queryFormat, "zone.worldTransientIndex != 0") )
        __debugbreak();
      if ( !s_zones.loadingZoneIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 1082, ASSERT_TYPE_ASSERT, "(s_zones.loadingZoneIndex != 0)", (const char *)&queryFormat, "s_zones.loadingZoneIndex != 0") )
        __debugbreak();
      v22 = v18[130];
      if ( v22 >= 0x600u )
      {
        LODWORD(v28) = 1536;
        LODWORD(v27) = v22;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 1084, ASSERT_TYPE_ASSERT, "(unsigned)( zone.worldTransientIndex ) < (unsigned)( ( sizeof( *array_counter( s_zones.worldTransientZoneIndices ) ) + 0 ) )", "zone.worldTransientIndex doesn't index ARRAY_COUNT( s_zones.worldTransientZoneIndices )\n\t%i not in [0, %i)", v27, v28) )
          __debugbreak();
      }
      if ( s_zones.worldTransientZoneIndices[v18[130]] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 1085, ASSERT_TYPE_ASSERT, "(s_zones.worldTransientZoneIndices[zone.worldTransientIndex] == 0)", (const char *)&queryFormat, "s_zones.worldTransientZoneIndices[zone.worldTransientIndex] == 0") )
        __debugbreak();
      s_zones.worldTransientZoneIndices[v18[130]] = s_zones.loadingZoneIndex;
    }
    *((_DWORD *)v18 + 64) = zoneFlags;
    *((_BYTE *)v18 + 266) = DB_Zones_IsFrontendPreloadZoneName(parentZoneName, zoneFlags);
    v23 = s_zones.loadingZoneIndex;
    if ( !zoneFlags && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 269, ASSERT_TYPE_ASSERT, "(zoneFlags)", (const char *)&queryFormat, "zoneFlags") )
      __debugbreak();
    if ( ((zoneFlags - 1) & zoneFlags) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 270, ASSERT_TYPE_ASSERT, "(IsPowerOf2( zoneFlags ))", (const char *)&queryFormat, "IsPowerOf2( zoneFlags )") )
      __debugbreak();
    v24 = __lzcnt(zoneFlags);
    if ( v24 >= 0x20 )
    {
      LODWORD(v28) = 32;
      LODWORD(v27) = v24;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 272, ASSERT_TYPE_ASSERT, "(unsigned)( cntlz ) < (unsigned)( ( sizeof( *array_counter( s_zones.zoneFlagClzOrder ) ) + 0 ) )", "cntlz doesn't index ARRAY_COUNT( s_zones.zoneFlagClzOrder )\n\t%i not in [0, %i)", v27, v28) )
        __debugbreak();
    }
    if ( (unsigned int)v23 >= 0x7A4 )
    {
      LODWORD(v28) = 1956;
      LODWORD(v27) = v23;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 273, ASSERT_TYPE_ASSERT, "(unsigned)( zoneIndex ) < (unsigned)( ( sizeof( *array_counter( s_zones.zoneLoadOrder ) ) + 0 ) )", "zoneIndex doesn't index ARRAY_COUNT( s_zones.zoneLoadOrder )\n\t%i not in [0, %i)", v27, v28) )
        __debugbreak();
    }
    s_zones.zoneLoadOrder[v23] = s_zones.zoneFlagClzOrder[v24];
  }
  v25 = s_zones.loadingZoneIndex;
  if ( DB_Zones_GetZoneIndexFromName((const char *)v18) != v25 )
  {
    LODWORD(v31) = v25;
    LODWORD(v29) = DB_Zones_GetZoneIndexFromName((const char *)v18);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 1100, ASSERT_TYPE_ASSERT, "( DB_Zones_GetZoneIndexFromName( zone.name ) ) == ( s_zones.loadingZoneIndex )", "%s == %s\n\t%u, %u", "DB_Zones_GetZoneIndexFromName( zone.name )", "s_zones.loadingZoneIndex", v29, v31) )
      __debugbreak();
  }
  return 1;
}

/*
==============
DB_Zones_DumpMemoryUsage
==============
*/
void DB_Zones_DumpMemoryUsage(void)
{
  unsigned __int64 v0; 
  unsigned int v1; 
  unsigned __int64 *p_size; 
  unsigned __int64 v3; 
  unsigned __int64 v4; 
  unsigned __int64 v5; 
  unsigned __int64 v6; 
  unsigned __int64 v7; 
  unsigned __int64 v8; 
  unsigned __int64 v9; 
  unsigned __int64 v10; 
  unsigned __int64 v11; 
  unsigned int v12; 
  DB_Zone *zones; 
  unsigned __int64 v14; 
  AlwaysloadedTotals::PerZoneTotals *zoneTotals; 
  unsigned __int64 v16; 
  __int64 modelSurfs; 
  __int64 images; 
  unsigned __int64 v19; 
  unsigned __int64 v20; 
  unsigned __int64 v21; 
  const char *v22; 
  char *fmt; 
  __int64 v24; 
  unsigned __int64 v25; 
  unsigned __int64 v26; 
  AlwaysloadedTotals outTotals; 

  Com_MemDumpPrintf("\nZones loaded:\n\n");
  Com_MemDumpPrintf("%3s %53s %7s %8s %9s %9s %9s %8s %8s %8s %9s    %8s %9s    %8s %9s\n", (const char *)&queryFormat.fmt + 3, "zone", "flags", "assets", "main", "video", "cached", "script", "temp", "gputemp", "total", "xb3delta", "xb3total", "patchmem", "memreport");
  v0 = 0i64;
  v1 = 0;
  p_size = &s_zones.zones[0].mem.alloc[4].size;
  v3 = 0i64;
  v24 = 0i64;
  v4 = 0i64;
  v26 = 0i64;
  v5 = 0i64;
  do
  {
    if ( *((_BYTE *)p_size - 208) )
    {
      v6 = *(p_size - 9);
      v7 = *(p_size - 12);
      v8 = *(p_size - 6);
      v9 = *(p_size - 3);
      v10 = p_size[3];
      v11 = *p_size + v10 + v9 + v8 + v7 + v6;
      LODWORD(fmt) = *((_DWORD *)p_size - 32);
      Com_MemDumpPrintf("%3d %53s %7d %8d %7zu k %7zu k %7zu k %6zu k %6zu k %6zu k %7zu k    %6zd k %7zu k    %6zd k %7zu k\n", v1, (const char *)p_size - 208, *((unsigned int *)p_size + 12), fmt, v7 >> 10, v6 >> 10, v8 >> 10, v9 >> 10, *p_size >> 10, v10 >> 10, v11 >> 10, 0i64, v11 >> 10, (unsigned __int64)*((unsigned int *)p_size + 11) >> 10, (*((unsigned int *)p_size + 11) + v11) >> 10);
      v3 = v11 + v24;
      v5 += v11;
      v24 += v11;
      v4 = v11 + *((unsigned int *)p_size + 11) + v26;
      v26 = v4;
    }
    ++v1;
    p_size += 34;
  }
  while ( v1 < 0x7A4 );
  Com_MemDumpPrintf("                                                                                                                                          TOTAL %7zu k      XB3EST %7zu k   MEMREPORT %7zu k\n", v5 >> 10, v3 >> 10, v4 >> 10);
  Com_MemDumpPrintf("\n");
  DB_StreamingInfo_GetLastGoodAlwaysloadedTotals(&outTotals);
  Com_MemDumpPrintf("\nAlwaysloaded streamed data:\n\n");
  Com_MemDumpPrintf("%3s %53s  %9s %9s    %9s\n", (const char *)&queryFormat.fmt + 3, "zone", "images", "surfs", "total");
  v12 = 0;
  v25 = 0i64;
  zones = s_zones.zones;
  v14 = 0i64;
  zoneTotals = outTotals.zoneTotals;
  v16 = 0i64;
  do
  {
    if ( zones->name[0] )
    {
      modelSurfs = zoneTotals->modelSurfs;
      images = zoneTotals->images;
      v19 = (unsigned int)(modelSurfs + images);
      if ( (_DWORD)modelSurfs + (_DWORD)images )
      {
        v0 += (unsigned int)(modelSurfs + images);
        v14 += images;
        v25 = modelSurfs + v16;
        v20 = (unsigned int)images;
        v21 = (unsigned int)modelSurfs;
        if ( v12 )
        {
          if ( !zones->name[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 402, ASSERT_TYPE_ASSERT, "(r_zone.name[0] != '\\0')", (const char *)&queryFormat, "r_zone.name[0] != '\\0'") )
            __debugbreak();
          v22 = (const char *)zones;
        }
        else
        {
          v22 = "<default>";
        }
        Com_MemDumpPrintf("%3d %53s  %7zu k %7zu k    %7zu k\n", v12, v22, v20 >> 10, v21 >> 10, v19 >> 10);
      }
    }
    v16 = v25;
    ++v12;
    ++zoneTotals;
    ++zones;
  }
  while ( v12 < 0x7A4 );
  Com_MemDumpPrintf("                                                    TOTAL  %7zu k %7zu k    %7zu k\n", v14 >> 10, v25 >> 10, v0 >> 10);
  Com_MemDumpPrintf("\n");
}

/*
==============
DB_Zones_FastfileInfoMatches
==============
*/
bool DB_Zones_FastfileInfoMatches(const DB_FastfileInfo *zoneInfo, const unsigned int flags, const char *const name)
{
  const char *v6; 
  const dvar_t *v7; 

  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 742, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
    __debugbreak();
  if ( (flags & zoneInfo->zoneFlags) == 0 )
    return 0;
  v6 = zoneInfo->name;
  if ( (flags & 0x3FFF000) == 0 )
  {
    if ( v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 765, ASSERT_TYPE_ASSERT, "( ( zoneInfo.name == 0 ) )", "( \"Only transient unloads are allowed to specify fastfile names\" ) = %s", "Only transient unloads are allowed to specify fastfile names") )
      __debugbreak();
    return 1;
  }
  if ( !v6 )
    return 1;
  v7 = DCONST_DVARBOOL_db_comprehensiveSanityChecks;
  if ( !DCONST_DVARBOOL_db_comprehensiveSanityChecks && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "db_comprehensiveSanityChecks") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  if ( v7->current.enabled )
  {
    if ( !DB_IsAssetNameValid(zoneInfo->name) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 755, ASSERT_TYPE_ASSERT, "( ( DB_IsAssetNameValid( zoneInfo.name ) ) )", "( zoneInfo.name ) = %s", zoneInfo->name) )
      __debugbreak();
    if ( !DB_IsAssetNameValid(name) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 756, ASSERT_TYPE_ASSERT, "( ( DB_IsAssetNameValid( name ) ) )", "( name ) = %s", name) )
      __debugbreak();
  }
  return I_strncmp(zoneInfo->name, name, 0x7FFFFFFFui64) == 0;
}

/*
==============
DB_Zones_ForEachZone
==============
*/
void DB_Zones_ForEachZone(void (*callback)(const char *, unsigned int, unsigned __int64))
{
  unsigned int v2; 
  unsigned __int64 *p_size; 

  if ( !callback && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 1922, ASSERT_TYPE_ASSERT, "(callback)", (const char *)&queryFormat, "callback") )
    __debugbreak();
  v2 = 0;
  p_size = &s_zones.zones[0].mem.alloc[4].size;
  do
  {
    if ( *((_BYTE *)p_size - 208) )
    {
      if ( *p_size + p_size[3] + *(p_size - 3) + *(p_size - 6) + *(p_size - 9) + *(p_size - 12) )
        ((void (__fastcall *)(unsigned __int64 *, _QWORD))callback)(p_size - 26, *((unsigned int *)p_size + 12));
    }
    ++v2;
    p_size += 34;
  }
  while ( v2 < 0x7A4 );
}

/*
==============
DB_Zones_FreeGpuTempMemory
==============
*/

void __fastcall DB_Zones_FreeGpuTempMemory(XZoneMemoryAllocation *alloc)
{
  DB_FreeXZoneGpuTempMemory(alloc);
}

/*
==============
DB_Zones_GetAssetCountInZone
==============
*/
__int64 DB_Zones_GetAssetCountInZone(const int zoneIndex)
{
  return DB_Zones_GetZoneFromIndex(zoneIndex)->assetList.assetCount;
}

/*
==============
DB_Zones_GetCurrentZoneHandleUniqueForIndex
==============
*/
__int64 DB_Zones_GetCurrentZoneHandleUniqueForIndex(unsigned __int16 zoneIndex)
{
  int v3; 
  int v4; 
  unsigned int v5; 

  if ( zoneIndex >= 0x7A4u )
  {
    v4 = 1956;
    v3 = zoneIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 880, ASSERT_TYPE_ASSERT, "(unsigned)( zoneIndex ) < (unsigned)( ( sizeof( *array_counter( s_zones.zones ) ) + 0 ) )", "zoneIndex doesn't index ARRAY_COUNT( s_zones.zones )\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  HIWORD(v5) = zoneIndex;
  LOWORD(v5) = s_zones.zoneHandleGeneration[zoneIndex];
  return v5;
}

/*
==============
DB_Zones_GetCurrentZoneLoadHandleUnique
==============
*/
__int64 DB_Zones_GetCurrentZoneLoadHandleUnique()
{
  unsigned __int16 loadingZoneIndex; 
  int v2; 
  int v3; 
  unsigned int v4; 

  loadingZoneIndex = s_zones.loadingZoneIndex;
  if ( s_zones.loadingZoneIndex >= 0x7A4u )
  {
    v3 = 1956;
    v2 = s_zones.loadingZoneIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 868, ASSERT_TYPE_ASSERT, "(unsigned)( s_zones.loadingZoneIndex ) < (unsigned)( ( sizeof( *array_counter( s_zones.zones ) ) + 0 ) )", "s_zones.loadingZoneIndex doesn't index ARRAY_COUNT( s_zones.zones )\n\t%i not in [0, %i)", v2, v3) )
      __debugbreak();
    loadingZoneIndex = s_zones.loadingZoneIndex;
  }
  HIWORD(v4) = loadingZoneIndex;
  LOWORD(v4) = s_zones.zoneHandleGeneration[loadingZoneIndex];
  return v4;
}

/*
==============
DB_Zones_GetCurrentZoneLoadIndex
==============
*/
__int64 DB_Zones_GetCurrentZoneLoadIndex()
{
  return s_zones.loadingZoneIndex;
}

/*
==============
DB_Zones_GetCurrentZoneLoadName
==============
*/
const char *DB_Zones_GetCurrentZoneLoadName()
{
  if ( s_zones.loadingZoneIndex )
    return DB_Zones_GetZoneNameFromIndex(s_zones.loadingZoneIndex);
  else
    return 0i64;
}

/*
==============
DB_Zones_GetFootprintSizesForBudgeting
==============
*/
void DB_Zones_GetFootprintSizesForBudgeting(MemBudget_PollZoneSizes *outSizes)
{
  unsigned int v1; 
  DB_Zone *v2; 
  unsigned int flags; 
  int v4; 
  unsigned __int64 *p_size; 
  __int64 v6; 
  unsigned __int64 v7; 
  const char *v8; 
  __int64 v9; 
  int v10; 
  __int64 v11; 
  int v12; 
  int v13; 
  int v14; 
  const char *v15; 
  __int64 v16; 
  const char *v17; 
  __int64 v18; 
  int v19; 
  __int64 v20; 
  int v21; 
  int v22; 
  int v23; 
  __int64 v24; 
  __int64 v25; 
  __int64 v26; 
  int v28; 

  memset_0(outSizes, 0, sizeof(MemBudget_PollZoneSizes));
  v1 = 1;
  v2 = &s_zones.zones[1];
  v28 = 1;
  do
  {
    if ( v2->name[0] )
    {
      flags = v2->flags;
      if ( flags )
      {
        if ( ((flags - 1) & flags) == 0 )
        {
          v4 = 0;
          p_size = &v2->mem.alloc[0].size;
          v6 = 6i64;
          do
          {
            v7 = *p_size;
            if ( *p_size > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned int __cdecl truncate_cast_impl<unsigned int,unsigned __int64>(unsigned __int64)", "unsigned", (unsigned int)v7, "unsigned", *p_size) )
              __debugbreak();
            v4 += v7;
            p_size += 3;
            --v6;
          }
          while ( v6 );
          v1 = v28;
          if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 532, ASSERT_TYPE_ASSERT, "(zoneName)", (const char *)&queryFormat, "zoneName") )
            __debugbreak();
          if ( I_strnicmp(v2->name, "srv_", 4ui64) )
          {
            v8 = "dev_";
            v9 = 4i64;
            if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
              __debugbreak();
            do
            {
              v10 = (unsigned __int8)v8[(char *)v2 - "dev_"];
              v11 = v9;
              v12 = *(unsigned __int8 *)v8++;
              --v9;
              if ( !v11 )
                break;
              if ( v10 != v12 )
              {
                v13 = v10 + 32;
                if ( (unsigned int)(v10 - 65) > 0x19 )
                  v13 = v10;
                v10 = v13;
                v14 = v12 + 32;
                if ( (unsigned int)(v12 - 65) > 0x19 )
                  v14 = v12;
                if ( v10 != v14 )
                {
                  if ( (flags & 0x400) == 0 )
                  {
                    if ( (flags & 1) == 0 )
                      goto LABEL_39;
                    if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 497, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
                      __debugbreak();
                    v15 = I_stristr(v2->name, "development");
                    if ( v15 )
                    {
                      while ( 1 )
                      {
                        v16 = -1i64;
                        do
                          ++v16;
                        while ( v15[v16] );
                        if ( v16 == 11 )
                          break;
                        v15 = I_stristr(v15 + 1, "development");
                        if ( !v15 )
                          goto LABEL_39;
                      }
                    }
                    else
                    {
LABEL_39:
                      v17 = "dbgshd_";
                      v18 = 7i64;
                      if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
                        __debugbreak();
                      while ( 1 )
                      {
                        v19 = (unsigned __int8)v17[(char *)v2 - "dbgshd_"];
                        v20 = v18;
                        v21 = *(unsigned __int8 *)v17++;
                        --v18;
                        if ( !v20 )
                          break;
                        if ( v19 != v21 )
                        {
                          v22 = v19 + 32;
                          if ( (unsigned int)(v19 - 65) > 0x19 )
                            v22 = v19;
                          v19 = v22;
                          v23 = v21 + 32;
                          if ( (unsigned int)(v21 - 65) > 0x19 )
                            v23 = v21;
                          if ( v19 != v23 )
                          {
                            v24 = 31 - __lzcnt(flags);
                            if ( (unsigned int)v24 >= 0x20 )
                            {
                              LODWORD(v26) = 32;
                              LODWORD(v25) = v24;
                              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 2011, ASSERT_TYPE_ASSERT, "(unsigned)( flagIndex ) < (unsigned)( ( sizeof( *array_counter( outSizes.zoneFlagSizes ) ) + 0 ) )", "flagIndex doesn't index ARRAY_COUNT( outSizes.zoneFlagSizes )\n\t%i not in [0, %i)", v25, v26) )
                                __debugbreak();
                            }
                            outSizes->zoneFlagSizes[v24] += v4;
                            if ( v2->mem.devPatchMemSavings )
                            {
                              if ( (unsigned int)v24 >= 0x20 )
                              {
                                LODWORD(v26) = 32;
                                LODWORD(v25) = v24;
                                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 2024, ASSERT_TYPE_ASSERT, "(unsigned)( flagIndex ) < (unsigned)( ( sizeof( *array_counter( outSizes.devPatchSavings ) ) + 0 ) )", "flagIndex doesn't index ARRAY_COUNT( outSizes.devPatchSavings )\n\t%i not in [0, %i)", v25, v26) )
                                  __debugbreak();
                              }
                              outSizes->devPatchSavings[v24] += v2->mem.devPatchMemSavings;
                            }
                            goto LABEL_27;
                          }
                        }
                        if ( !v19 )
                          goto LABEL_26;
                      }
                    }
                  }
                  break;
                }
              }
            }
            while ( v10 );
LABEL_26:
            outSizes->devSize += v4;
          }
          else
          {
            outSizes->serverSize += v4;
          }
        }
      }
    }
LABEL_27:
    ++v1;
    ++v2;
    v28 = v1;
  }
  while ( v1 < 0x7A4 );
}

/*
==============
DB_Zones_GetHashIndex
==============
*/
__int64 DB_Zones_GetHashIndex(const char *const name)
{
  const char *v1; 
  const char *v2; 
  char v3; 
  __int64 v4; 
  char v5; 
  unsigned __int8 v6; 
  unsigned int i; 

  v1 = name;
  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 281, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
    __debugbreak();
  if ( I_strempty(v1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 282, ASSERT_TYPE_ASSERT, "(!I_strempty( name ))", (const char *)&queryFormat, "!I_strempty( name )") )
    __debugbreak();
  if ( !v1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnamefix.h", 100, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
    __debugbreak();
  v2 = v1;
  if ( *v1 && *v1 > 32 )
  {
    v3 = *v1;
    v4 = 0x1000000000001001i64;
    while ( 1 )
    {
      v5 = v3;
      if ( (unsigned __int8)(v3 - 65) <= 0x19u || (unsigned __int8)(v3 - 32) <= 0x3Cu && _bittest64(&v4, (char)(v3 - 32)) )
        break;
      if ( v3 == 124 )
        break;
      v3 = *++v2;
      if ( !v3 )
      {
        if ( v5 > 32 )
          goto LABEL_21;
        break;
      }
    }
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 284, ASSERT_TYPE_ASSERT, "( ( DB_IsAssetNameValid( name ) ) )", "( name ) = %s", v1) )
    __debugbreak();
LABEL_21:
  v6 = *v1;
  for ( i = 0; *v1; v6 = *v1 )
  {
    ++v1;
    i = v6 ^ (16777619 * i);
  }
  return i % 0x5D1;
}

/*
==============
DB_Zones_GetInUseFlags
==============
*/
__int64 DB_Zones_GetInUseFlags()
{
  return s_zones.inUseFlags;
}

/*
==============
DB_Zones_GetInferredGameMode
==============
*/
__int64 DB_Zones_GetInferredGameMode()
{
  int v0; 
  unsigned int *i; 
  __int64 v2; 
  const char *v3; 
  int v4; 
  int v5; 
  int v7; 
  int v8; 
  const char *v10; 
  __int64 v11; 
  int v12; 
  __int64 v13; 
  int v14; 
  int v15; 
  int v16; 
  const char *v17; 
  __int64 v18; 
  int v19; 
  __int64 v20; 
  int v21; 
  int v22; 
  int v23; 

  v0 = 0;
  for ( i = &s_zones.zones[0].flags; ; i += 68 )
  {
    if ( !*((_BYTE *)i - 256) )
      goto LABEL_35;
    if ( (*(_BYTE *)i & 2) != 0 )
      break;
LABEL_14:
    if ( (*(_BYTE *)i & 4) != 0 )
    {
      v10 = "global_core_mp";
      v11 = 0x7FFFFFFFi64;
      while ( 1 )
      {
        v12 = (unsigned __int8)v10[(char *)i - "enSocket != COM_INVALID_DHSOCKET"];
        v13 = v11;
        v14 = *(unsigned __int8 *)v10++;
        --v11;
        if ( !v13 )
          return 2i64;
        if ( v12 != v14 )
        {
          v15 = v12 + 32;
          if ( (unsigned int)(v12 - 65) > 0x19 )
            v15 = v12;
          v12 = v15;
          v16 = v14 + 32;
          if ( (unsigned int)(v14 - 65) > 0x19 )
            v16 = v14;
          if ( v12 != v16 )
            break;
        }
        if ( !v12 )
          return 2i64;
      }
      v17 = "global_cp";
      v18 = 0x7FFFFFFFi64;
      do
      {
        v19 = (unsigned __int8)v17[(char *)i - "DHSOCKET"];
        v20 = v18;
        v21 = *(unsigned __int8 *)v17++;
        --v18;
        if ( !v20 )
          break;
        if ( v19 != v21 )
        {
          v22 = v19 + 32;
          if ( (unsigned int)(v19 - 65) > 0x19 )
            v22 = v19;
          v19 = v22;
          v23 = v21 + 32;
          if ( (unsigned int)(v21 - 65) > 0x19 )
            v23 = v21;
          if ( v19 != v23 )
            goto LABEL_35;
        }
      }
      while ( v19 );
      return 3i64;
    }
LABEL_35:
    if ( (unsigned int)++v0 >= 0x7A4 )
      return 0i64;
  }
  v2 = 0x7FFFFFFFi64;
  v3 = "global_sp";
  do
  {
    v4 = *(unsigned __int8 *)v3++;
    v5 = (unsigned __int8)v3[(char *)i - "g_devhost.m_listenSocket != COM_INVALID_DHSOCKET" - 1];
    if ( !v2-- )
      break;
    if ( v5 != v4 )
    {
      v7 = v5 + 32;
      if ( (unsigned int)(v5 - 65) > 0x19 )
        v7 = (unsigned __int8)v3[(char *)i - "g_devhost.m_listenSocket != COM_INVALID_DHSOCKET" - 1];
      v5 = v7;
      v8 = v4 + 32;
      if ( (unsigned int)(v4 - 65) > 0x19 )
        v8 = v4;
      if ( v5 != v8 )
        goto LABEL_14;
    }
  }
  while ( v5 );
  return 1i64;
}

/*
==============
DB_Zones_GetMemoryUsage
==============
*/
unsigned __int64 DB_Zones_GetMemoryUsage(const int zoneIndex)
{
  DB_Zone *ZoneFromIndex; 

  ZoneFromIndex = DB_Zones_GetZoneFromIndex(zoneIndex);
  return ZoneFromIndex->mem.alloc[0].size + ZoneFromIndex->mem.alloc[1].size + ZoneFromIndex->mem.alloc[2].size + ZoneFromIndex->mem.alloc[3].size + ZoneFromIndex->mem.alloc[4].size + ZoneFromIndex->mem.alloc[5].size;
}

/*
==============
DB_Zones_GetUnloadBitArray
==============
*/
__int64 DB_Zones_GetUnloadBitArray(DB_ZoneBitArray *outArray, const DB_FastfileInfo *zoneInfo, unsigned int zoneCount)
{
  unsigned int v3; 
  bitarray_base<bitarray<1984> > *v4; 
  int v6; 
  unsigned int v7; 
  __int64 v8; 
  DB_ZoneBitArray *v9; 
  __int64 v10; 
  unsigned int zoneFlags; 
  int ZoneIndexFromName; 
  __int64 v13; 
  bool v14; 
  unsigned int *p_flags; 
  unsigned int i; 
  __int64 v17; 
  unsigned int flags; 
  unsigned int v19; 
  bool v20; 
  __int64 v22; 
  __int64 v23; 
  __int64 v24; 

  v3 = 0;
  v4 = (bitarray_base<bitarray<1984> > *)outArray;
  v6 = 0;
  v7 = 0;
  v8 = zoneCount;
  v9 = outArray;
  while ( !v9->zones.array[0] )
  {
    ++v7;
    v9 = (DB_ZoneBitArray *)((char *)v9 + 4);
    if ( v7 >= 0x3E )
      goto LABEL_7;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 780, ASSERT_TYPE_ASSERT, "(!outArray.zones.anyBitsOn())", (const char *)&queryFormat, "!outArray.zones.anyBitsOn()") )
    __debugbreak();
LABEL_7:
  if ( (_DWORD)v8 )
  {
    v10 = v8;
    while ( 1 )
    {
      zoneFlags = zoneInfo->zoneFlags;
      if ( zoneInfo->name )
      {
        if ( (zoneFlags & 0x3FFF000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 786, ASSERT_TYPE_ASSERT, "(DB_Zones_CanSpecifyInfoByName( zoneInfo[i].zoneFlags ))", (const char *)&queryFormat, "DB_Zones_CanSpecifyInfoByName( zoneInfo[i].zoneFlags )") )
          __debugbreak();
        ZoneIndexFromName = DB_Zones_GetZoneIndexFromName(zoneInfo->name);
        v13 = ZoneIndexFromName;
        if ( ZoneIndexFromName != 0xFFFF )
        {
          if ( ZoneIndexFromName )
          {
            if ( (unsigned int)ZoneIndexFromName >= 0x7A4 )
            {
              LODWORD(v23) = 1956;
              LODWORD(v22) = ZoneIndexFromName;
              v14 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 387, ASSERT_TYPE_ASSERT, "(unsigned)( zoneIndex ) < (unsigned)( ( sizeof( *array_counter( s_zones.zones ) ) + 0 ) )", "zoneIndex doesn't index ARRAY_COUNT( s_zones.zones )\n\t%i not in [0, %i)", v22, v23);
              goto LABEL_19;
            }
          }
          else
          {
            v14 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 802, ASSERT_TYPE_ASSERT, "(zoneIndexFind != DEFAULT_ZONE_INDEX)", (const char *)&queryFormat, "zoneIndexFind != DEFAULT_ZONE_INDEX");
LABEL_19:
            if ( v14 )
              __debugbreak();
          }
          p_flags = &s_zones.zones[v13].flags;
          if ( (zoneInfo->zoneFlags & *p_flags) != 0 )
          {
            if ( (*p_flags & 0x3FFF000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 815, ASSERT_TYPE_ASSERT, "(DB_Zones_CanSpecifyInfoByName( r_zone.flags ))", (const char *)&queryFormat, "DB_Zones_CanSpecifyInfoByName( r_zone.flags )") )
              __debugbreak();
            bitarray_base<bitarray<1984>>::setBit(v4, v13);
            v3 |= *p_flags;
          }
          else
          {
            LODWORD(v24) = *p_flags;
            LODWORD(v23) = zoneInfo->zoneFlags;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 810, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Flags for %s do not match %08x & %08x", zoneInfo->name, v23, v24) )
              __debugbreak();
          }
          goto LABEL_24;
        }
        Com_PrintWarning(10, "DB_Zones_GetUnloadBitArray: Unable to find %s to unload. Flags %u.\n", zoneInfo->name, zoneInfo->zoneFlags);
      }
      else
      {
        v6 |= zoneFlags;
      }
LABEL_24:
      ++zoneInfo;
      if ( !--v10 )
      {
        if ( v6 )
        {
          for ( i = 1; i < 0x7A4; ++i )
          {
            v17 = (int)i;
            if ( s_zones.zones[v17].name[0] )
            {
              if ( !i && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 436, ASSERT_TYPE_ASSERT, "(zoneIndex != DEFAULT_ZONE_INDEX)", (const char *)&queryFormat, "zoneIndex != DEFAULT_ZONE_INDEX") )
                __debugbreak();
              flags = s_zones.zones[v17].flags;
              if ( (flags & v6) != 0 )
              {
                *(_DWORD *)&v4[4 * ((unsigned __int64)i >> 5)] |= 0x80000000 >> (i & 0x1F);
                v3 |= flags;
              }
            }
          }
        }
        break;
      }
    }
  }
  v19 = 0;
  while ( !*(_DWORD *)v4 )
  {
    ++v19;
    v4 += 4;
    if ( v19 >= 0x3E )
    {
      if ( !v3 )
        return v3;
      LODWORD(v24) = v3;
      v20 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 853, ASSERT_TYPE_ASSERT, "( returnFlags ) == ( 0 )", "%s == %s\n\t%u, %u", "returnFlags", "0", v24, 0i64);
      goto LABEL_48;
    }
  }
  if ( v3 )
    return v3;
  LODWORD(v24) = 0;
  v20 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 849, ASSERT_TYPE_ASSERT, "( returnFlags ) != ( 0 )", "%s != %s\n\t%u, %u", "returnFlags", "0", v24, 0i64);
LABEL_48:
  if ( v20 )
    __debugbreak();
  return v3;
}

/*
==============
DB_Zones_GetWorldTransientIndexFromZoneIndex
==============
*/
__int64 DB_Zones_GetWorldTransientIndexFromZoneIndex(const int zoneIndex)
{
  DB_Zone *ZoneFromIndex; 
  DB_Zone *v2; 
  unsigned __int16 worldTransientIndex; 
  __int64 v5; 
  int v6; 

  ZoneFromIndex = DB_Zones_GetZoneFromIndex(zoneIndex);
  v2 = ZoneFromIndex;
  if ( (ZoneFromIndex->flags & 0xC000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 608, ASSERT_TYPE_ASSERT, "( ( r_zone.flags & DB_MASK_TRANSIENT_WORLD_ZONES ) )", "( r_zone.name ) = %s", ZoneFromIndex->name) )
    __debugbreak();
  worldTransientIndex = v2->worldTransientIndex;
  if ( worldTransientIndex >= 0x600u )
  {
    v6 = 1536;
    LODWORD(v5) = worldTransientIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 609, ASSERT_TYPE_ASSERT, "(unsigned)( r_zone.worldTransientIndex ) < (unsigned)( MAX_MAP_TRANSIENT_ZONES )", "r_zone.worldTransientIndex doesn't index MAX_MAP_TRANSIENT_ZONES\n\t%i not in [0, %i)", v5, v6) )
      __debugbreak();
  }
  return v2->worldTransientIndex;
}

/*
==============
DB_Zones_GetZoneFlagsFromIndex
==============
*/
__int64 DB_Zones_GetZoneFlagsFromIndex(int zoneIndex)
{
  if ( !zoneIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 436, ASSERT_TYPE_ASSERT, "(zoneIndex != DEFAULT_ZONE_INDEX)", (const char *)&queryFormat, "zoneIndex != DEFAULT_ZONE_INDEX") )
    __debugbreak();
  return DB_Zones_GetZoneFromIndex(zoneIndex)->flags;
}

/*
==============
DB_Zones_GetZoneFromIndex
==============
*/
DB_Zone *DB_Zones_GetZoneFromIndex(const int zoneIndex)
{
  __int64 v1; 
  int v4; 

  v1 = zoneIndex;
  if ( (unsigned int)zoneIndex >= 0x7A4 )
  {
    v4 = 1956;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 387, ASSERT_TYPE_ASSERT, "(unsigned)( zoneIndex ) < (unsigned)( ( sizeof( *array_counter( s_zones.zones ) ) + 0 ) )", "zoneIndex doesn't index ARRAY_COUNT( s_zones.zones )\n\t%i not in [0, %i)", zoneIndex, v4) )
      __debugbreak();
  }
  return (DB_Zone *)&s_zones.zoneHandleGeneration[136 * v1 - 266016];
}

/*
==============
DB_Zones_GetZoneIndexFromName
==============
*/
__int64 DB_Zones_GetZoneIndexFromName(const char *name)
{
  unsigned __int16 HashIndex; 
  unsigned __int16 nextHashEntry; 
  __int64 v4; 
  __int64 v6; 
  __int64 v7; 

  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 410, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
    __debugbreak();
  if ( !*name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 411, ASSERT_TYPE_ASSERT, "(name[0])", (const char *)&queryFormat, "name[0]") )
    __debugbreak();
  HashIndex = DB_Zones_GetHashIndex(name);
  if ( HashIndex >= 0x5D1u )
  {
    LODWORD(v6) = HashIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 415, ASSERT_TYPE_ASSERT, "(unsigned)( hashIndex ) < (unsigned)( ( sizeof( *array_counter( s_zones.nameHashTable ) ) + 0 ) )", "hashIndex doesn't index ARRAY_COUNT( s_zones.nameHashTable )\n\t%i not in [0, %i)", v6, 1489) )
      __debugbreak();
  }
  nextHashEntry = s_zones.nameHashTable[HashIndex];
  if ( !nextHashEntry )
    return 0xFFFFi64;
  while ( 1 )
  {
    if ( nextHashEntry >= 0x7A4u )
    {
      LODWORD(v7) = 1956;
      LODWORD(v6) = nextHashEntry;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 420, ASSERT_TYPE_ASSERT, "(unsigned)( walkIndex ) < (unsigned)( ( sizeof( *array_counter( s_zones.zones ) ) + 0 ) )", "walkIndex doesn't index ARRAY_COUNT( s_zones.zones )\n\t%i not in [0, %i)", v6, v7) )
        __debugbreak();
    }
    v4 = nextHashEntry;
    if ( !I_strncmp(s_zones.zones[v4].name, name, 0x7FFFFFFFui64) )
      break;
    nextHashEntry = s_zones.zones[v4].nextHashEntry;
    if ( !nextHashEntry )
      return 0xFFFFi64;
  }
  return nextHashEntry;
}

/*
==============
DB_Zones_GetZoneIndexFromWorldTransientIndex
==============
*/
__int64 DB_Zones_GetZoneIndexFromWorldTransientIndex(const unsigned int worldTransientIndex)
{
  __int64 v1; 
  unsigned __int16 v2; 
  unsigned __int16 *v3; 
  __int64 v5; 
  __int64 v7; 
  int v8; 

  v1 = worldTransientIndex;
  if ( worldTransientIndex >= 0x600 )
  {
    v8 = 1536;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 624, ASSERT_TYPE_ASSERT, "(unsigned)( worldTransientIndex ) < (unsigned)( ( sizeof( *array_counter( s_zones.worldTransientZoneIndices ) ) + 0 ) )", "worldTransientIndex doesn't index ARRAY_COUNT( s_zones.worldTransientZoneIndices )\n\t%i not in [0, %i)", worldTransientIndex, v8) )
      __debugbreak();
  }
  v2 = s_zones.worldTransientZoneIndices[v1];
  v3 = &s_zones.worldTransientZoneIndices[v1];
  if ( v2 >= 0x7A4u )
  {
    LODWORD(v7) = 1956;
    LODWORD(v5) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 626, ASSERT_TYPE_ASSERT, "(unsigned)( s_zones.worldTransientZoneIndices[worldTransientIndex] ) < (unsigned)( MAX_ZONES )", "s_zones.worldTransientZoneIndices[worldTransientIndex] doesn't index MAX_ZONES\n\t%i not in [0, %i)", v5, v7) )
      __debugbreak();
  }
  return *v3;
}

/*
==============
DB_Zones_GetZoneLoadOrder
==============
*/
__int64 DB_Zones_GetZoneLoadOrder(int zoneIndex)
{
  __int64 v1; 
  int v4; 

  v1 = zoneIndex;
  if ( (unsigned int)zoneIndex >= 0x7A4 )
  {
    v4 = 1956;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 455, ASSERT_TYPE_ASSERT, "(unsigned)( zoneIndex ) < (unsigned)( ( sizeof( *array_counter( s_zones.zoneLoadOrder ) ) + 0 ) )", "zoneIndex doesn't index ARRAY_COUNT( s_zones.zoneLoadOrder )\n\t%i not in [0, %i)", zoneIndex, v4) )
      __debugbreak();
  }
  return s_zones.zoneLoadOrder[v1];
}

/*
==============
DB_Zones_GetZoneNameFromIndex
==============
*/
DB_Zone *DB_Zones_GetZoneNameFromIndex(int zoneIndex)
{
  DB_Zone *ZoneFromIndex; 

  if ( !zoneIndex )
    return (DB_Zone *)"<default>";
  ZoneFromIndex = DB_Zones_GetZoneFromIndex(zoneIndex);
  if ( !ZoneFromIndex->name[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 402, ASSERT_TYPE_ASSERT, "(r_zone.name[0] != '\\0')", (const char *)&queryFormat, "r_zone.name[0] != '\\0'") )
    __debugbreak();
  return ZoneFromIndex;
}

/*
==============
DB_Zones_GetZoneUniqueHandleFromWorldTransientIndex
==============
*/
__int64 DB_Zones_GetZoneUniqueHandleFromWorldTransientIndex(const unsigned int worldTransientIndex)
{
  __int64 v1; 
  unsigned __int16 v2; 
  __int64 v4; 
  __int64 v5; 
  unsigned int v6; 

  v1 = worldTransientIndex;
  if ( worldTransientIndex >= 0x600 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 632, ASSERT_TYPE_ASSERT, "(unsigned)( worldTransientIndex ) < (unsigned)( ( sizeof( *array_counter( s_zones.worldTransientZoneIndices ) ) + 0 ) )", "worldTransientIndex doesn't index ARRAY_COUNT( s_zones.worldTransientZoneIndices )\n\t%i not in [0, %i)", worldTransientIndex, 1536) )
    __debugbreak();
  v2 = s_zones.worldTransientZoneIndices[v1];
  if ( v2 >= 0x7A4u )
  {
    LODWORD(v5) = 1956;
    LODWORD(v4) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 634, ASSERT_TYPE_ASSERT, "(unsigned)( s_zones.worldTransientZoneIndices[worldTransientIndex] ) < (unsigned)( MAX_ZONES )", "s_zones.worldTransientZoneIndices[worldTransientIndex] doesn't index MAX_ZONES\n\t%i not in [0, %i)", v4, v5) )
      __debugbreak();
  }
  HIWORD(v6) = s_zones.worldTransientZoneIndices[v1];
  LOWORD(v6) = s_zones.zoneHandleGeneration[HIWORD(v6)];
  return v6;
}

/*
==============
DB_Zones_GpuTempMemoryAllocTransferOwnership
==============
*/
XZoneMemoryAllocation *DB_Zones_GpuTempMemoryAllocTransferOwnership(XZoneMemoryAllocation *result, int zoneIndex)
{
  XZoneMemoryAllocation *v6; 

  _RBX = result;
  _RAX = DB_Zones_GetZoneFromIndex(zoneIndex);
  __asm
  {
    vmovups xmm0, xmmword ptr [rax+0D8h]
    vmovsd  xmm1, qword ptr [rax+0E8h]
    vmovups xmmword ptr [rbx], xmm0
  }
  _RAX->mem.alloc[5].pageRange = (Mem_PageRange)-1i64;
  _RAX->mem.alloc[5].alloc = NULL;
  _RAX->mem.alloc[5].size = 0i64;
  v6 = _RBX;
  __asm { vmovsd  qword ptr [rbx+10h], xmm1 }
  return v6;
}

/*
==============
DB_Zones_Init
==============
*/
void DB_Zones_Init(void)
{
  unsigned __int8 v0; 
  unsigned int *v1; 
  __int64 v2; 
  unsigned __int8 *zoneFlagClzOrder; 
  unsigned int v4; 
  unsigned __int8 *v5; 
  __int64 v6; 
  __int64 v7; 
  __int64 v8; 

  v0 = 0;
  v1 = (unsigned int *)ALWAYSLOADED_OWNER_ZONE_PRIORITY_ORDER;
  v2 = 32i64;
  zoneFlagClzOrder = s_zones.zoneFlagClzOrder;
  do
  {
    v4 = __lzcnt(*v1);
    if ( v4 >= 0x20 )
    {
      LODWORD(v7) = 32;
      LODWORD(v6) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 246, ASSERT_TYPE_ASSERT, "(unsigned)( cntlz ) < (unsigned)( ( sizeof( *array_counter( s_zones.zoneFlagClzOrder ) ) + 0 ) )", "cntlz doesn't index ARRAY_COUNT( s_zones.zoneFlagClzOrder )\n\t%i not in [0, %i)", v6, v7) )
        __debugbreak();
    }
    v5 = &s_zones.zoneFlagClzOrder[v4];
    if ( *v5 )
    {
      LODWORD(v8) = *v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 247, ASSERT_TYPE_ASSERT, "( s_zones.zoneFlagClzOrder[cntlz] ) == ( 0 )", "%s == %s\n\t%u, %u", "s_zones.zoneFlagClzOrder[cntlz]", "0", v8, 0i64) )
        __debugbreak();
    }
    ++v0;
    ++v1;
    *v5 = v0;
  }
  while ( v0 < 0x1Au );
  do
  {
    if ( !*zoneFlagClzOrder )
      *zoneFlagClzOrder = 127;
    ++zoneFlagClzOrder;
    --v2;
  }
  while ( v2 );
  CrashReport_AddMemRegion("g_streamPosGlob", &g_streamPosGlob, 0x588ui64);
}

/*
==============
DB_Zones_IsDevZoneIndex
==============
*/
bool DB_Zones_IsDevZoneIndex(int zoneIndex)
{
  return (DB_Zones_GetZoneFromIndex(zoneIndex)->flags & 0x400) != 0;
}

/*
==============
DB_Zones_IsFinishedLoading
==============
*/
bool DB_Zones_IsFinishedLoading(const char *zoneName)
{
  int ZoneIndexFromName; 

  if ( !zoneName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 702, ASSERT_TYPE_ASSERT, "(zoneName)", (const char *)&queryFormat, "zoneName") )
    __debugbreak();
  ZoneIndexFromName = DB_Zones_GetZoneIndexFromName(zoneName);
  return ZoneIndexFromName != 0xFFFF && DB_Zones_GetZoneFromIndex(ZoneIndexFromName)->loadComplete;
}

/*
==============
DB_Zones_IsFinishedLoadingByIndex
==============
*/
_BOOL8 DB_Zones_IsFinishedLoadingByIndex(int zoneIndex)
{
  return DB_Zones_GetZoneFromIndex(zoneIndex)->loadComplete;
}

/*
==============
DB_Zones_IsFrontEndSceneZoneName
==============
*/
bool DB_Zones_IsFrontEndSceneZoneName(const char *const zoneName)
{
  int ZoneIndexFromName; 
  int v2; 

  ZoneIndexFromName = DB_Zones_GetZoneIndexFromName(zoneName);
  v2 = ZoneIndexFromName;
  if ( ZoneIndexFromName == 0xFFFF )
    return 0;
  if ( !ZoneIndexFromName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 436, ASSERT_TYPE_ASSERT, "(zoneIndex != DEFAULT_ZONE_INDEX)", (const char *)&queryFormat, "zoneIndex != DEFAULT_ZONE_INDEX") )
    __debugbreak();
  return (DB_Zones_GetZoneFromIndex(v2)->flags & 0x80) != 0;
}

/*
==============
DB_Zones_IsFrontendPreloadZoneName
==============
*/
char DB_Zones_IsFrontendPreloadZoneName(const char *const parentZoneName, const unsigned int zoneFlags)
{
  const char *v4; 
  __int64 v5; 
  __int64 v6; 
  int v7; 
  __int64 v8; 
  int v9; 
  int v10; 
  int v11; 
  const char *v13; 
  int v14; 
  __int64 v15; 
  int v16; 
  int v17; 
  int v18; 
  const char *v19; 
  __int64 v20; 
  signed __int64 v21; 
  int v22; 
  __int64 v23; 
  int v24; 
  int v25; 
  int v26; 

  if ( !parentZoneName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 968, ASSERT_TYPE_ASSERT, "(parentZoneName)", (const char *)&queryFormat, "parentZoneName") )
    __debugbreak();
  if ( (zoneFlags & 0x100000) == 0 )
    return 0;
  v4 = "ui_boot";
  v5 = 0x7FFFFFFFi64;
  v6 = 0x7FFFFFFFi64;
  if ( !parentZoneName && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  while ( 1 )
  {
    v7 = (unsigned __int8)v4[parentZoneName - "ui_boot"];
    v8 = v6;
    v9 = *(unsigned __int8 *)v4++;
    --v6;
    if ( !v8 )
      break;
    if ( v7 != v9 )
    {
      v10 = v7 + 32;
      if ( (unsigned int)(v7 - 65) > 0x19 )
        v10 = v7;
      v7 = v10;
      v11 = v9 + 32;
      if ( (unsigned int)(v9 - 65) > 0x19 )
        v11 = v9;
      if ( v7 != v11 )
      {
        v13 = "ui";
        if ( !parentZoneName && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
          __debugbreak();
        while ( 1 )
        {
          v14 = (unsigned __int8)v13[parentZoneName - "ui"];
          v15 = v5;
          v16 = *(unsigned __int8 *)v13++;
          --v5;
          if ( !v15 )
            break;
          if ( v14 != v16 )
          {
            v17 = v14 + 32;
            if ( (unsigned int)(v14 - 65) > 0x19 )
              v17 = v14;
            v14 = v17;
            v18 = v16 + 32;
            if ( (unsigned int)(v16 - 65) > 0x19 )
              v18 = v16;
            if ( v14 != v18 )
            {
              v19 = "mp_frontend";
              v20 = 11i64;
              if ( !parentZoneName && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
                __debugbreak();
              v21 = parentZoneName - "mp_frontend";
              while ( 1 )
              {
                v22 = (unsigned __int8)v19[v21];
                v23 = v20;
                v24 = *(unsigned __int8 *)v19++;
                --v20;
                if ( !v23 )
                  break;
                if ( v22 != v24 )
                {
                  v25 = v22 + 32;
                  if ( (unsigned int)(v22 - 65) > 0x19 )
                    v25 = v22;
                  v22 = v25;
                  v26 = v24 + 32;
                  if ( (unsigned int)(v24 - 65) > 0x19 )
                    v26 = v24;
                  if ( v22 != v26 )
                    return 0;
                }
                if ( !v22 )
                  return 1;
              }
              return 1;
            }
          }
          if ( !v14 )
            return 1;
        }
        return 1;
      }
    }
    if ( !v7 )
      return 1;
  }
  return 1;
}

/*
==============
DB_Zones_IsFrontendUIPreloadZoneIndex
==============
*/
_BOOL8 DB_Zones_IsFrontendUIPreloadZoneIndex(int zoneIndex)
{
  return DB_Zones_GetZoneFromIndex(zoneIndex)->frontendUIPreloadZone;
}

/*
==============
DB_Zones_IsLevelZoneName
==============
*/
char DB_Zones_IsLevelZoneName(const char *zoneName)
{
  const char *ExtensionSubString; 
  const char *v3; 
  const char *v4; 
  __int64 v5; 
  char v6; 
  __int64 v7; 
  char v8; 
  __int64 v9; 
  const char *v10; 
  signed __int64 v11; 
  char v12; 
  __int64 v13; 
  char v14; 
  const char *v16; 
  __int64 v17; 
  char v18; 
  __int64 v19; 
  char v20; 
  const char *v21; 
  __int64 v22; 
  __int64 v23; 
  char v24; 
  __int64 v25; 
  char v26; 
  const char *v27; 
  char v28; 
  __int64 v29; 
  char v30; 
  const char *v31; 
  __int64 v32; 
  char v33; 
  __int64 v34; 
  char v35; 
  const char *v36; 
  __int64 v37; 
  signed __int64 v38; 
  char v39; 
  __int64 v40; 
  char v41; 

  ExtensionSubString = Com_GetExtensionSubString(zoneName);
  v3 = ExtensionSubString;
  if ( zoneName != ExtensionSubString )
  {
    v4 = ".ff";
    v5 = 0x7FFFFFFFi64;
    if ( !ExtensionSubString && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    do
    {
      v6 = v4[v3 - ".ff"];
      v7 = v5;
      v8 = *v4++;
      --v5;
      if ( !v7 )
        break;
      if ( v6 != v8 )
        return 0;
    }
    while ( v6 );
    v9 = 3i64;
    v10 = "_tr";
    if ( v3 == (const char *)3 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    v11 = v3 - "_tr";
    do
    {
      v12 = v10[v11 - 3];
      v13 = v9;
      v14 = *v10++;
      --v9;
      if ( !v13 )
        break;
      if ( v12 != v14 )
      {
        v16 = "code_";
        v17 = 5i64;
        if ( !zoneName && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
          __debugbreak();
        while ( 1 )
        {
          v18 = v16[zoneName - "code_"];
          v19 = v17;
          v20 = *v16++;
          --v17;
          if ( !v19 )
            break;
          if ( v18 != v20 )
          {
            v21 = "common";
            v22 = 6i64;
            v23 = 6i64;
            if ( !zoneName && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
              __debugbreak();
            while ( 1 )
            {
              v24 = v21[zoneName - "common"];
              v25 = v23;
              v26 = *v21++;
              --v23;
              if ( !v25 )
                break;
              if ( v24 != v26 )
              {
                v27 = "global";
                if ( !zoneName && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
                  __debugbreak();
                while ( 1 )
                {
                  v28 = v27[zoneName - "global"];
                  v29 = v22;
                  v30 = *v27++;
                  --v22;
                  if ( !v29 )
                    break;
                  if ( v28 != v30 )
                  {
                    v31 = "ui";
                    v32 = 2i64;
                    if ( !zoneName && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
                      __debugbreak();
                    while ( 1 )
                    {
                      v33 = v31[zoneName - "ui"];
                      v34 = v32;
                      v35 = *v31++;
                      --v32;
                      if ( !v34 )
                        break;
                      if ( v33 != v35 )
                      {
                        v36 = "development";
                        v37 = 11i64;
                        if ( !zoneName && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
                          __debugbreak();
                        v38 = zoneName - "development";
                        while ( 1 )
                        {
                          v39 = v36[v38];
                          v40 = v37;
                          v41 = *v36++;
                          --v37;
                          if ( !v40 )
                            break;
                          if ( v39 != v41 )
                            return 1;
                          if ( !v39 )
                            return 0;
                        }
                        return 0;
                      }
                      if ( !v33 )
                        return 0;
                    }
                    return 0;
                  }
                  if ( !v28 )
                    return 0;
                }
                return 0;
              }
              if ( !v24 )
                return 0;
            }
            return 0;
          }
          if ( !v18 )
            return 0;
        }
        return 0;
      }
    }
    while ( v12 );
  }
  return 0;
}

/*
==============
DB_Zones_IsLocalizedZoneName
==============
*/
bool DB_Zones_IsLocalizedZoneName(const char *zoneName)
{
  const char *CurrentLanguageCode; 
  unsigned __int64 v3; 
  char dest[256]; 

  CurrentLanguageCode = SEH_GetCurrentLanguageCode();
  Com_sprintf(dest, 0x100ui64, "%s_", CurrentLanguageCode);
  v3 = -1i64;
  do
    ++v3;
  while ( dest[v3] );
  return I_strnicmp(zoneName, dest, v3) == 0;
}

/*
==============
DB_Zones_IsOptionalSubZone
==============
*/
bool DB_Zones_IsOptionalSubZone(const char *const zoneName)
{
  const char *v1; 
  __int64 v3; 
  char v4; 
  __int64 v5; 
  char v6; 
  const char *v8; 
  __int64 v9; 
  char v10; 
  __int64 v11; 
  char v12; 
  const char *v13; 
  unsigned __int64 v14; 
  __int64 v15; 
  const char *v16; 
  __int64 v17; 
  char v18; 
  __int64 v19; 
  char v20; 
  const char *CurrentLanguageCode; 
  char dest[256]; 

  v1 = "dev_";
  v3 = 4i64;
  if ( !zoneName && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  do
  {
    v4 = v1[zoneName - "dev_"];
    v5 = v3;
    v6 = *v1++;
    --v3;
    if ( !v5 )
      break;
    if ( v4 != v6 )
    {
      v8 = "dbgshd_";
      v9 = 7i64;
      if ( !zoneName && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
        __debugbreak();
      while ( 1 )
      {
        v10 = v8[zoneName - "dbgshd_"];
        v11 = v9;
        v12 = *v8++;
        --v9;
        if ( !v11 )
          return 1;
        if ( v10 != v12 )
        {
          if ( !zoneName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 497, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
            __debugbreak();
          v13 = I_stristr(zoneName, "_load");
          v14 = -1i64;
          if ( !v13 )
          {
LABEL_23:
            v16 = "techsets_";
            v17 = 9i64;
            if ( !zoneName && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
              __debugbreak();
            do
            {
              v18 = v16[zoneName - "techsets_"];
              v19 = v17;
              v20 = *v16++;
              --v17;
              if ( !v19 )
                break;
              if ( v18 != v20 )
              {
                if ( DB_Zones_IsTransientZoneName(zoneName) )
                {
                  CurrentLanguageCode = SEH_GetCurrentLanguageCode();
                  Com_sprintf(dest, 0x100ui64, "%s_", CurrentLanguageCode);
                  do
                    ++v14;
                  while ( dest[v14] );
                  if ( !I_strnicmp(zoneName, dest, v14) )
                    goto LABEL_35;
                }
                return 0;
              }
            }
            while ( v18 );
            Com_PrintWarning(10, "WARNING: Missing shader zone '%s'. This will delay shader compiles during load.\n", zoneName);
            return !Dvar_GetBool_Internal_DebugName(DVARBOOL_db_errorOnMissingTechsetZones, "db_errorOnMissingTechsetZones");
          }
          while ( 1 )
          {
            v15 = -1i64;
            do
              ++v15;
            while ( v13[v15] );
            if ( v15 == 5 )
              break;
            v13 = I_stristr(v13 + 1, "_load");
            if ( !v13 )
              goto LABEL_23;
          }
LABEL_35:
          Com_PrintWarning(10, "WARNING: Could not find zone '%s'\n", zoneName);
          return 1;
        }
        if ( !v10 )
          return 1;
      }
    }
  }
  while ( v4 );
  return 1;
}

/*
==============
DB_Zones_IsPermanentZoneIndex
==============
*/
bool DB_Zones_IsPermanentZoneIndex(int zoneIndex)
{
  return DB_Zones_GetZoneFromIndex(zoneIndex)->flags & 1;
}

/*
==============
DB_Zones_IsPreloadZoneIndex
==============
*/
bool DB_Zones_IsPreloadZoneIndex(int zoneIndex)
{
  if ( !zoneIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 436, ASSERT_TYPE_ASSERT, "(zoneIndex != DEFAULT_ZONE_INDEX)", (const char *)&queryFormat, "zoneIndex != DEFAULT_ZONE_INDEX") )
    __debugbreak();
  return (DB_Zones_GetZoneFromIndex(zoneIndex)->flags & 0x3F00000) != 0;
}

/*
==============
DB_Zones_IsPreloadZoneName
==============
*/
bool DB_Zones_IsPreloadZoneName(const char *zoneName)
{
  int ZoneIndexFromName; 
  int v2; 

  ZoneIndexFromName = DB_Zones_GetZoneIndexFromName(zoneName);
  v2 = ZoneIndexFromName;
  if ( ZoneIndexFromName == 0xFFFF )
    return 0;
  if ( !ZoneIndexFromName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 436, ASSERT_TYPE_ASSERT, "(zoneIndex != DEFAULT_ZONE_INDEX)", (const char *)&queryFormat, "zoneIndex != DEFAULT_ZONE_INDEX") )
    __debugbreak();
  return (DB_Zones_GetZoneFromIndex(v2)->flags & 0x3F00000) != 0;
}

/*
==============
DB_Zones_IsRegionalZoneName
==============
*/
bool DB_Zones_IsRegionalZoneName(const char *zoneName)
{
  const char *CurrentRegionCode; 
  int v3; 
  char dest[256]; 

  CurrentRegionCode = RG_GetCurrentRegionCode();
  v3 = Com_sprintf(dest, 0x100ui64, "%s_", CurrentRegionCode);
  return I_strnicmp(zoneName, dest, v3) == 0;
}

/*
==============
DB_Zones_IsServerZoneName
==============
*/
bool DB_Zones_IsServerZoneName(const char *zoneName)
{
  if ( !zoneName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 532, ASSERT_TYPE_ASSERT, "(zoneName)", (const char *)&queryFormat, "zoneName") )
    __debugbreak();
  return I_strnicmp(zoneName, "srv_", 4ui64) == 0;
}

/*
==============
DB_Zones_IsTransientOrTransientPreloadZoneIndex
==============
*/
bool DB_Zones_IsTransientOrTransientPreloadZoneIndex(int zoneIndex)
{
  return (DB_Zones_GetZoneFromIndex(zoneIndex)->flags & 0x3CFF000) != 0;
}

/*
==============
DB_Zones_IsTransientZoneIndex
==============
*/
bool DB_Zones_IsTransientZoneIndex(int zoneIndex)
{
  return (DB_Zones_GetZoneFromIndex(zoneIndex)->flags & 0xFF000) != 0;
}

/*
==============
DB_Zones_IsTransientZoneName
==============
*/
char DB_Zones_IsTransientZoneName(const char *zoneName)
{
  const char *v2; 
  __int64 v3; 

  if ( !zoneName )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 569, ASSERT_TYPE_ASSERT, "(zoneName)", (const char *)&queryFormat, "zoneName") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 497, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
      __debugbreak();
  }
  v2 = I_stristr(zoneName, "_tr");
  if ( !v2 )
    return 0;
  while ( 1 )
  {
    v3 = -1i64;
    do
      ++v3;
    while ( v2[v3] );
    if ( v3 == 3 )
      break;
    v2 = I_stristr(v2 + 1, "_tr");
    if ( !v2 )
      return 0;
  }
  return 1;
}

/*
==============
DB_Zones_IsValidZoneIndex
==============
*/
bool DB_Zones_IsValidZoneIndex(int zoneIndex)
{
  return DB_Zones_GetZoneFromIndex(zoneIndex)->name[0] != 0;
}

/*
==============
DB_Zones_IsWorldTransientZone
==============
*/
bool DB_Zones_IsWorldTransientZone(const int zoneIndex)
{
  return (DB_Zones_GetZoneFromIndex(zoneIndex)->flags & 0xC000) != 0;
}

/*
==============
DB_Zones_MarkAllLoadsCompleted
==============
*/
void DB_Zones_MarkAllLoadsCompleted(void)
{
  char v0; 
  int v1; 
  unsigned int *p_flags; 
  __int64 v3; 
  DB_Zone *v4; 
  unsigned int v5; 
  unsigned int v6; 
  unsigned int v7; 
  unsigned int *v8; 
  DB_Zone *v9; 
  char *RawFile; 
  char *v11; 
  Mem_LargeLocal v12; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 1531, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  v0 = 0;
  v1 = 0;
  p_flags = &s_zones.zones[0].flags;
  do
  {
    if ( !*((_BYTE *)p_flags + 8) )
    {
      if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 1466, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
        __debugbreak();
      v3 = v1;
      v4 = &s_zones.zones[v3];
      if ( v4->name[0] )
      {
        if ( !s_zones.zones[v3].flags && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 1475, ASSERT_TYPE_ASSERT, "(s_zones.zones[zoneIndex].flags)", (const char *)&queryFormat, "s_zones.zones[zoneIndex].flags") )
          __debugbreak();
        if ( DB_IsFastfileFullyLoaded(v4->name, v1) )
        {
          s_zones.zones[v1].loadComplete = 1;
          if ( *p_flags == 256 )
            v0 = 1;
        }
      }
    }
    ++v1;
    p_flags += 68;
  }
  while ( (unsigned int)v1 < 0x7A4 );
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "DB_Zones_UpdateInUseFlags");
  v5 = 0;
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 1453, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 1433, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  v6 = 0;
  if ( s_zones.zones[0].flags && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 1437, ASSERT_TYPE_ASSERT, "(s_zones.zones[DEFAULT_ZONE_INDEX].flags == 0)", (const char *)&queryFormat, "s_zones.zones[DEFAULT_ZONE_INDEX].flags == 0") )
    __debugbreak();
  v7 = 1;
  v8 = &s_zones.zones[1].flags;
  do
  {
    if ( ((*v8 - 1) & *v8) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 1441, ASSERT_TYPE_ASSERT, "(IsPowerOf2( s_zones.zones[zoneIndex].flags ))", (const char *)&queryFormat, "IsPowerOf2( s_zones.zones[zoneIndex].flags )") )
      __debugbreak();
    v6 |= *v8;
    ++v7;
    v8 += 68;
  }
  while ( v7 < 0x7A4 );
  s_zones.inUseFlags = v6;
  Sys_ProfEndNamedEvent();
  if ( v0 )
  {
    do
    {
      if ( v5 )
      {
        v9 = &s_zones.zones[v5];
        if ( v9->name[0] )
        {
          if ( !DB_Zones_IsTransientZoneName(v9->name) )
          {
            Mem_LargeLocal::Mem_LargeLocal(&v12, 0x18000ui64, "max_raw_buf buf");
            RawFile = DB_ReadRawFile(v9->name, (char *)v12.m_ptr, 98304);
            v11 = RawFile;
            if ( RawFile )
            {
              if ( *RawFile )
              {
                Com_PrintError(1, "There were errors when building fast file '%s'\n", v9->name);
                Com_PrintError(1, (const char *)&queryFormat, v11);
                Com_PrintError(1, "\n");
              }
            }
            Mem_LargeLocal::~Mem_LargeLocal(&v12);
          }
        }
      }
      ++v5;
    }
    while ( v5 < 0x7A4 );
  }
}

/*
==============
DB_Zones_MarkInProgressZoneStrings
==============
*/
void DB_Zones_MarkInProgressZoneStrings(const DB_ZoneBitArray *unloadZones)
{
  unsigned int v2; 
  XAssetList *p_assetList; 
  int v4; 
  __int64 v5; 
  const char *v6; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 1765, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  v2 = 0;
  p_assetList = &s_zones.zones[0].assetList;
  do
  {
    if ( LOBYTE(s_zones.zoneHandleGeneration[136 * v2 - 266016]) )
    {
      if ( p_assetList->stringList.loaded && ((0x80000000 >> (v2 & 0x1F)) & unloadZones->zones.array[(unsigned __int64)v2 >> 5]) == 0 )
      {
        v4 = 0;
        if ( p_assetList->stringList.count > 0 )
        {
          v5 = 0i64;
          do
          {
            v6 = p_assetList->stringList.strings[v5];
            if ( (const char *)(unsigned int)v6 != v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_stringtable_load.h", 22, ASSERT_TYPE_SANITY, "( ( stringValue & SCRIPTSTRING_MASK ) == stringValue )", (const char *)&queryFormat, "( stringValue & SCRIPTSTRING_MASK ) == stringValue") )
              __debugbreak();
            if ( (_DWORD)v6 )
              j_SL_AddUser((scr_string_t)v6, 4u);
            ++v4;
            ++v5;
          }
          while ( v4 < p_assetList->stringList.count );
        }
      }
    }
    ++v2;
    p_assetList = (XAssetList *)((char *)p_assetList + 272);
  }
  while ( v2 < 0x7A4 );
}

/*
==============
DB_Zones_NameEndsWith
==============
*/
char DB_Zones_NameEndsWith(const char *name, const char *find)
{
  const char *v4; 
  __int64 v5; 
  __int64 v6; 

  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 497, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
    __debugbreak();
  if ( !find && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 498, ASSERT_TYPE_ASSERT, "(find)", (const char *)&queryFormat, "find") )
    __debugbreak();
  v4 = I_stristr(name, find);
  if ( !v4 )
    return 0;
  while ( 1 )
  {
    v5 = -1i64;
    do
      ++v5;
    while ( v4[v5] );
    v6 = -1i64;
    do
      ++v6;
    while ( find[v6] );
    if ( v5 == v6 )
      break;
    v4 = I_stristr(v4 + 1, find);
    if ( !v4 )
      return 0;
  }
  return 1;
}

/*
==============
DB_Zones_NameStartsWith
==============
*/
bool DB_Zones_NameStartsWith(const char *name, const char *find)
{
  unsigned __int64 v2; 

  v2 = -1i64;
  do
    ++v2;
  while ( find[v2] );
  return I_strnicmp(name, find, v2) == 0;
}

/*
==============
DB_Zones_PerformZoneLoad
==============
*/
__int64 DB_Zones_PerformZoneLoad(bool processingPreloadedFiles, bool isBaseMap, bool wasPaused, DB_FastFileFailureMode failureMode)
{
  unsigned __int16 loadingZoneIndex; 
  int v8; 
  DB_Zone *ZoneFromIndex; 
  const char *v10; 
  const char *v11; 
  XZoneMemory *p_mem; 
  unsigned int v13; 
  DB_LoadXFileReturn XFile; 
  XZoneHandleUnique CurrentZoneLoadHandleUnique; 
  XZoneHandleUnique v16; 
  XAsset *v17; 
  __int64 type; 
  const char **p_name; 
  __int64 v20; 
  __int64 failureModea; 
  __int64 failureModeb; 
  DB_AuthSignature *outSignature; 
  DB_AuthSignature *outSignaturea; 

  if ( DB_BackendCallbacks_AnyCallbacksToSubmit() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 1206, ASSERT_TYPE_ASSERT, "(!DB_BackendCallbacks_AnyCallbacksToSubmit())", (const char *)&queryFormat, "!DB_BackendCallbacks_AnyCallbacksToSubmit()") )
    __debugbreak();
  DB_BackendCallbacks_EnsureExclusiveAccess();
  if ( !Sys_IsDatabaseThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 1212, ASSERT_TYPE_ASSERT, "(Sys_IsDatabaseThread())", (const char *)&queryFormat, "Sys_IsDatabaseThread()") )
    __debugbreak();
  if ( !s_zones.loadingZoneIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 1213, ASSERT_TYPE_ASSERT, "(s_zones.loadingZoneIndex != DEFAULT_ZONE_INDEX)", (const char *)&queryFormat, "s_zones.loadingZoneIndex != DEFAULT_ZONE_INDEX") )
    __debugbreak();
  loadingZoneIndex = s_zones.loadingZoneIndex;
  v8 = s_zones.loadingZoneIndex;
  ZoneFromIndex = DB_Zones_GetZoneFromIndex(s_zones.loadingZoneIndex);
  if ( processingPreloadedFiles )
  {
    v10 = "ProcessingPreloaded";
  }
  else
  {
    if ( g_dbPreloading )
    {
      v10 = "Preloading-Unpaused";
      v11 = "Preloading";
    }
    else
    {
      v10 = "Regular-Unpaused";
      v11 = "Regular";
    }
    if ( !wasPaused )
      v10 = v11;
  }
  CrashReport_AddKVP("LastFastfile", ZoneFromIndex->name);
  CrashReport_AddKVP("LastFastfileLoadType", v10);
  if ( processingPreloadedFiles )
  {
    if ( wasPaused && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 1230, ASSERT_TYPE_ASSERT, "(!wasPaused)", (const char *)&queryFormat, "!wasPaused") )
      __debugbreak();
    ProfLoad_DB_Begin("DB_ProcessPreloadedXFile");
    p_mem = &ZoneFromIndex->mem;
    DB_ProcessPreloadedXFile(&ZoneFromIndex->mem, &ZoneFromIndex->assetList, ZoneFromIndex->name);
    ProfLoad_DB_End();
    v13 = 0;
    XFile = READY;
  }
  else
  {
    if ( ZoneFromIndex->loadComplete && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 1241, ASSERT_TYPE_ASSERT, "(!r_zone.loadComplete)", (const char *)&queryFormat, "!r_zone.loadComplete") )
      __debugbreak();
    if ( !wasPaused && ZoneFromIndex->assetList.assetCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 1245, ASSERT_TYPE_ASSERT, "(r_zone.assetList.assetCount == 0)", (const char *)&queryFormat, "r_zone.assetList.assetCount == 0") )
      __debugbreak();
    p_mem = &ZoneFromIndex->mem;
    v13 = 0;
    XFile = DB_LoadXFile(ZoneFromIndex->name, &ZoneFromIndex->mem, &ZoneFromIndex->assetList, ZoneFromIndex->flags, wasPaused, failureMode, NULL);
  }
  if ( !ZoneFromIndex->addedXPaks && (ZoneFromIndex->flags & 0x3CFF000) == 0 && XPak_AddPackFilesForZone(ZoneFromIndex->name) )
    ZoneFromIndex->addedXPaks = 1;
  if ( (unsigned int)(XFile - 2) <= 1 )
  {
    if ( loadingZoneIndex != s_zones.loadingZoneIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 1273, ASSERT_TYPE_ASSERT, "(zoneIndex == DB_Zones_GetCurrentZoneLoadIndex())", (const char *)&queryFormat, "zoneIndex == DB_Zones_GetCurrentZoneLoadIndex()") )
      __debugbreak();
    CurrentZoneLoadHandleUnique = DB_Zones_GetCurrentZoneLoadHandleUnique();
    DB_BackendCallbacks_CancelZoneCallbacks(CurrentZoneLoadHandleUnique);
  }
  if ( XFile == FETCHING_FIRST_PARTY_TOKEN )
  {
    if ( DB_BackendCallbacks_AnyCallbacksToSubmit() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 1282, ASSERT_TYPE_ASSERT, "(!DB_BackendCallbacks_AnyCallbacksToSubmit())", (const char *)&queryFormat, "!DB_BackendCallbacks_AnyCallbacksToSubmit()") )
      __debugbreak();
    s_zones.loadingZoneIndex = 0;
  }
  else
  {
    if ( !Sys_IsDatabaseThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 1119, ASSERT_TYPE_ASSERT, "(Sys_IsDatabaseThread())", (const char *)&queryFormat, "Sys_IsDatabaseThread()") )
      __debugbreak();
    if ( !s_zones.loadingZoneIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 1120, ASSERT_TYPE_ASSERT, "(s_zones.loadingZoneIndex != DEFAULT_ZONE_INDEX)", (const char *)&queryFormat, "s_zones.loadingZoneIndex != DEFAULT_ZONE_INDEX") )
      __debugbreak();
    if ( g_dbPreloading )
    {
      if ( DB_BackendCallbacks_AnyCallbacksToSubmit() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 1302, ASSERT_TYPE_ASSERT, "(!DB_BackendCallbacks_AnyCallbacksToSubmit())", (const char *)&queryFormat, "!DB_BackendCallbacks_AnyCallbacksToSubmit()") )
        __debugbreak();
    }
    else
    {
      DB_BackendCallbacks_Submit();
      v16 = DB_Zones_GetCurrentZoneLoadHandleUnique();
      DB_GpuTempMemCallbacksTransferGpuTempMemOwnership(v16);
    }
    s_zones.loadingZoneIndex = 0;
    if ( XFile )
    {
      if ( XFile == LOGIN_DELAY )
      {
        DB_CloseAllFileHandles(p_mem);
        v20 = 6i64;
        do
        {
          if ( p_mem->alloc[0].size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 1339, ASSERT_TYPE_ASSERT, "(r_zone.mem.alloc[memType].size == 0)", (const char *)&queryFormat, "r_zone.mem.alloc[memType].size == 0") )
            __debugbreak();
          if ( p_mem->alloc[0].pageRange.firstPageID != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 1340, ASSERT_TYPE_ASSERT, "(r_zone.mem.alloc[memType].pageRange.firstPageID == MEM_PAGEID_INVALID)", (const char *)&queryFormat, "r_zone.mem.alloc[memType].pageRange.firstPageID == MEM_PAGEID_INVALID") )
            __debugbreak();
          if ( p_mem->alloc[0].pageRange.lastPageID != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 1341, ASSERT_TYPE_ASSERT, "(r_zone.mem.alloc[memType].pageRange.lastPageID == MEM_PAGEID_INVALID)", (const char *)&queryFormat, "r_zone.mem.alloc[memType].pageRange.lastPageID == MEM_PAGEID_INVALID") )
            __debugbreak();
          p_mem = (XZoneMemory *)((char *)p_mem + 24);
          --v20;
        }
        while ( v20 );
        DB_Zones_RemoveFromHashTable(v8);
        memset_0(ZoneFromIndex, 0, sizeof(DB_Zone));
      }
    }
    else if ( (ZoneFromIndex->flags & 0x400) != 0 && ZoneFromIndex->assetList.assetCount )
    {
      do
      {
        v17 = &ZoneFromIndex->assetList.assets[v13];
        if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnames.h", 80, ASSERT_TYPE_ASSERT, "(asset)", (const char *)&queryFormat, "asset") )
          __debugbreak();
        type = v17->type;
        p_name = &v17->header.physicsLibrary->name;
        if ( (unsigned int)type >= 0x71 )
        {
          LODWORD(outSignature) = 113;
          LODWORD(failureModea) = v17->type;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnames.h", 62, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( ASSET_TYPE_COUNT )", "type doesn't index ASSET_TYPE_COUNT\n\t%i not in [0, %i)", failureModea, outSignature) )
            __debugbreak();
          LODWORD(outSignaturea) = 113;
          LODWORD(failureModeb) = type;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnames.h", 20, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( ASSET_TYPE_COUNT )", "type doesn't index ASSET_TYPE_COUNT\n\t%i not in [0, %i)", failureModeb, outSignaturea) )
            __debugbreak();
        }
        if ( !g_assetNameFieldValid[type] )
        {
          if ( (unsigned int)type >= 0x71 )
          {
            LODWORD(outSignature) = 113;
            LODWORD(failureModea) = type;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnames.h", 38, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( ASSET_TYPE_COUNT )", "type doesn't index ASSET_TYPE_COUNT\n\t%i not in [0, %i)", failureModea, outSignature) )
              __debugbreak();
          }
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnames.h", 63, ASSERT_TYPE_ASSERT, "(DB_XAssetTypeHasName( type ))", "%s\n\tDB_GetXAssetHeaderName %s, 0x%p", "DB_XAssetTypeHasName( type )", g_assetNames[type], p_name) )
            __debugbreak();
        }
        if ( !p_name )
        {
          if ( (unsigned int)type >= 0x71 )
          {
            LODWORD(outSignature) = 113;
            LODWORD(failureModea) = type;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnames.h", 38, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( ASSET_TYPE_COUNT )", "type doesn't index ASSET_TYPE_COUNT\n\t%i not in [0, %i)", failureModea, outSignature) )
              __debugbreak();
          }
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnames.h", 65, ASSERT_TYPE_ASSERT, "(header.data)", "%s\n\tDB_GetXAssetHeaderName %s, nullptr", "header.data", g_assetNames[type]) )
            __debugbreak();
        }
        DB_MyChanges_LoadAsset((const XAssetType)v17->type, *p_name);
        ++v13;
      }
      while ( v13 < ZoneFromIndex->assetList.assetCount );
    }
  }
  DB_BackendCallbacks_EndExclusiveAccess();
  return (unsigned int)XFile;
}

/*
==============
DB_Zones_ProcessPendingUnloadFrees
==============
*/
void DB_Zones_ProcessPendingUnloadFrees(bool forceFree)
{
  ntl::fixed_vector<DB_ZoneUnloadGPUWait,1956,0> *p_gpuUnloadWaitList; 
  __int64 v3; 
  unsigned __int64 v4; 
  unsigned int v5; 
  unsigned int *v6; 
  signed __int64 v7; 
  __int64 v8; 
  unsigned __int16 *v9; 
  bool v11; 
  __int64 v23; 
  __int64 v24; 
  __int64 v25; 
  __int64 v26; 

  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "DB_Zones_ProcessPendingUnloadFrees");
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 1705, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  p_gpuUnloadWaitList = &s_zones.gpuUnloadWaitList;
  while ( p_gpuUnloadWaitList != (ntl::fixed_vector<DB_ZoneUnloadGPUWait,1956,0> *)&s_zones.worldTransientZoneIndices[84 * s_zones.gpuUnloadWaitList.m_size - 164308] )
  {
    if ( (unsigned int)(g_gpuSwapFrame - *(_DWORD *)&p_gpuUnloadWaitList->m_data.m_buffer[160]) > 2 || forceFree )
    {
      v3 = *(unsigned int *)&p_gpuUnloadWaitList->m_data.m_buffer[164];
      if ( (_DWORD)v3 != 768 )
      {
        GfxWorldTransientZoneDeferredRelease_Release(&s_GfxWorldTransientZoneDeferredReleaseWaitList.pointers[v3]);
        v4 = *(unsigned int *)&p_gpuUnloadWaitList->m_data.m_buffer[164];
        if ( !s_GfxWorldTransientZoneDeferredReleaseWaitList.numPointers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 186, ASSERT_TYPE_ASSERT, "(numPointers > 0)", (const char *)&queryFormat, "numPointers > 0") )
          __debugbreak();
        if ( (unsigned int)v4 >= 0x300 )
        {
          LODWORD(v24) = 768;
          LODWORD(v23) = v4;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v23, v24) )
            __debugbreak();
        }
        v5 = 0x80000000 >> (v4 & 0x1F);
        v6 = &s_GfxWorldTransientZoneDeferredReleaseWaitList.freeList.array[v4 >> 5];
        if ( (v5 & *v6) == 0 )
        {
          LODWORD(v23) = v4;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 187, ASSERT_TYPE_ASSERT, "( ( freeList.testBit( index ) ) )", "( index ) = %u", v23) )
            __debugbreak();
        }
        --s_GfxWorldTransientZoneDeferredReleaseWaitList.numPointers;
        if ( (unsigned int)v4 >= 0x300 )
        {
          LODWORD(v26) = 768;
          LODWORD(v25) = v4;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v25, v26) )
            __debugbreak();
        }
        *v6 &= ~v5;
      }
      DB_FreeXZoneMemory((XZoneMemory *)p_gpuUnloadWaitList);
      if ( !s_zones.gpuUnloadWaitList.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 341, ASSERT_TYPE_ASSERT, "( empty() == false )", (const char *)&queryFormat, "empty() == false") )
        __debugbreak();
      if ( (p_gpuUnloadWaitList < &s_zones.gpuUnloadWaitList || p_gpuUnloadWaitList > (ntl::fixed_vector<DB_ZoneUnloadGPUWait,1956,0> *)&s_zones.worldTransientZoneIndices[84 * s_zones.gpuUnloadWaitList.m_size - 164308]) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 494, ASSERT_TYPE_ASSERT, "( ( iter >= begin()) && ( iter <= end()) )", (const char *)&queryFormat, "( iter >= begin()) && ( iter <= end())") )
        __debugbreak();
      v7 = (char *)p_gpuUnloadWaitList - (char *)&s_zones.gpuUnloadWaitList;
      v8 = ((unsigned __int64)((char *)p_gpuUnloadWaitList - (char *)&s_zones.gpuUnloadWaitList) * (unsigned __int128)0x8618618618618619ui64) >> 64;
      if ( (char *)p_gpuUnloadWaitList - (char *)&s_zones.gpuUnloadWaitList != 168 * ((v8 + ((unsigned __int64)((char *)p_gpuUnloadWaitList - (char *)&s_zones.gpuUnloadWaitList - v8) >> 1)) >> 7) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 495, ASSERT_TYPE_ASSERT, "( (( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0 )", (const char *)&queryFormat, "(( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0") )
        __debugbreak();
      if ( p_gpuUnloadWaitList == (ntl::fixed_vector<DB_ZoneUnloadGPUWait,1956,0> *)&s_zones.worldTransientZoneIndices[84 * s_zones.gpuUnloadWaitList.m_size - 164308] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 343, ASSERT_TYPE_ASSERT, "( citer != end() )", (const char *)&queryFormat, "citer != end()") )
        __debugbreak();
      p_gpuUnloadWaitList = &s_zones.gpuUnloadWaitList;
      if ( s_zones.gpuUnloadWaitList.m_size )
        p_gpuUnloadWaitList = (ntl::fixed_vector<DB_ZoneUnloadGPUWait,1956,0> *)&s_zones.worldTransientZoneIndices[84 * (v7 / 168) - 164308];
      v9 = &s_zones.worldTransientZoneIndices[84 * s_zones.gpuUnloadWaitList.m_size - 164308];
      _RBX = &p_gpuUnloadWaitList->m_data.m_buffer[168];
      if ( &p_gpuUnloadWaitList->m_data.m_buffer[168] == (char *)p_gpuUnloadWaitList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 460, ASSERT_TYPE_ASSERT, "( first != result )", (const char *)&queryFormat, "first != result") )
        __debugbreak();
      if ( v9 == (unsigned __int16 *)p_gpuUnloadWaitList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 461, ASSERT_TYPE_ASSERT, "( last != result )", (const char *)&queryFormat, "last != result") )
        __debugbreak();
      v11 = _RBX < (char *)v9;
      if ( _RBX > (char *)v9 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 463, ASSERT_TYPE_ASSERT, "( last >= first )", (const char *)&queryFormat, "last >= first") )
          __debugbreak();
        v11 = _RBX < (char *)v9;
      }
      if ( v11 )
      {
        _RDX = p_gpuUnloadWaitList;
        do
        {
          __asm
          {
            vmovups xmm0, xmmword ptr [rbx]
            vmovups xmmword ptr [rdx], xmm0
            vmovups xmm1, xmmword ptr [rbx+10h]
            vmovups xmmword ptr [rdx+10h], xmm1
            vmovups xmm0, xmmword ptr [rbx+20h]
            vmovups xmmword ptr [rdx+20h], xmm0
            vmovups xmm1, xmmword ptr [rbx+30h]
            vmovups xmmword ptr [rdx+30h], xmm1
            vmovups xmm0, xmmword ptr [rbx+40h]
            vmovups xmmword ptr [rdx+40h], xmm0
            vmovups xmm1, xmmword ptr [rbx+50h]
            vmovups xmmword ptr [rdx+50h], xmm1
            vmovups xmm0, xmmword ptr [rbx+60h]
            vmovups xmmword ptr [rdx+60h], xmm0
            vmovups xmm1, xmmword ptr [rbx+70h]
            vmovups xmmword ptr [rdx+70h], xmm1
            vmovups xmm0, xmmword ptr [rbx+80h]
            vmovups xmmword ptr [rdx+80h], xmm0
            vmovups xmm1, xmmword ptr [rbx+90h]
            vmovups xmmword ptr [rdx+90h], xmm1
          }
          *(_QWORD *)&_RDX->m_data.m_buffer[160] = *((_QWORD *)_RBX + 20);
          _RBX += 168;
          _RDX = (ntl::fixed_vector<DB_ZoneUnloadGPUWait,1956,0> *)((char *)_RDX + 168);
        }
        while ( _RBX < (char *)v9 );
      }
      --s_zones.gpuUnloadWaitList.m_size;
    }
    else
    {
      p_gpuUnloadWaitList = (ntl::fixed_vector<DB_ZoneUnloadGPUWait,1956,0> *)((char *)p_gpuUnloadWaitList + 168);
    }
  }
  if ( forceFree && s_zones.gpuUnloadWaitList.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 1737, ASSERT_TYPE_ASSERT, "(s_zones.gpuUnloadWaitList.empty())", (const char *)&queryFormat, "s_zones.gpuUnloadWaitList.empty()") )
    __debugbreak();
  Sys_ProfEndNamedEvent();
}

/*
==============
DB_Zones_RemoveFromHashTable
==============
*/
void DB_Zones_RemoveFromHashTable(const int zoneIndex)
{
  unsigned __int16 *v2; 
  unsigned __int16 HashIndex; 
  unsigned __int16 *i; 
  unsigned __int16 v5; 
  bool v6; 
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 
  int ZoneIndexFromName; 

  v2 = &s_zones.zoneHandleGeneration[136 * zoneIndex - 266016];
  HashIndex = DB_Zones_GetHashIndex((const char *const)v2);
  if ( DB_Zones_GetZoneIndexFromName((const char *)v2) != zoneIndex )
  {
    ZoneIndexFromName = DB_Zones_GetZoneIndexFromName((const char *)v2);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 353, ASSERT_TYPE_ASSERT, "( DB_Zones_GetZoneIndexFromName( r_zone.name ) ) == ( zoneIndex )", "%s == %s\n\t%i, %i", "DB_Zones_GetZoneIndexFromName( r_zone.name )", "zoneIndex", ZoneIndexFromName, zoneIndex) )
      __debugbreak();
  }
  if ( (*((_DWORD *)v2 + 64) & 0x82000) != 0 )
  {
    if ( !s_zones.commonMPTransientCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 358, ASSERT_TYPE_ASSERT, "(s_zones.commonMPTransientCount > 0)", (const char *)&queryFormat, "s_zones.commonMPTransientCount > 0") )
      __debugbreak();
    --s_zones.commonMPTransientCount;
  }
  if ( HashIndex >= 0x5D1u )
  {
    LODWORD(v9) = 1489;
    LODWORD(v8) = HashIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 363, ASSERT_TYPE_ASSERT, "(unsigned)( zoneHashIndex ) < (unsigned)( ( sizeof( *array_counter( s_zones.nameHashTable ) ) + 0 ) )", "zoneHashIndex doesn't index ARRAY_COUNT( s_zones.nameHashTable )\n\t%i not in [0, %i)", v8, v9) )
      __debugbreak();
  }
  for ( i = &s_zones.nameHashTable[HashIndex]; ; i = &s_zones.zones[v7].nextHashEntry )
  {
    v5 = *i;
    if ( *i )
    {
      if ( v5 < 0x7A4u )
        goto LABEL_19;
      LODWORD(v9) = 1956;
      LODWORD(v8) = v5;
      v6 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 371, ASSERT_TYPE_ASSERT, "(unsigned)( nextIndex ) < (unsigned)( ( sizeof( *array_counter( s_zones.zones ) ) + 0 ) )", "nextIndex doesn't index ARRAY_COUNT( s_zones.zones )\n\t%i not in [0, %i)", v8, v9);
    }
    else
    {
      v6 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 370, ASSERT_TYPE_ASSERT, "(nextIndex != DB_ZonesGlob::INVALID_HASH_ENTRY)", (const char *)&queryFormat, "nextIndex != DB_ZonesGlob::INVALID_HASH_ENTRY");
    }
    if ( v6 )
      __debugbreak();
LABEL_19:
    v7 = v5;
    if ( v5 == zoneIndex )
      break;
  }
  if ( &s_zones.zones[v7].nextHashEntry != v2 + 131 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 375, ASSERT_TYPE_ASSERT, "(&s_zones.zones[nextIndex].nextHashEntry == &r_zone.nextHashEntry)", (const char *)&queryFormat, "&s_zones.zones[nextIndex].nextHashEntry == &r_zone.nextHashEntry") )
    __debugbreak();
  *i = v2[131];
}

/*
==============
DB_Zones_RemoveXPak
==============
*/
void DB_Zones_RemoveXPak(int zoneIndex)
{
  __int64 v1; 
  DB_Zone *ZoneFromIndex; 
  int v4; 

  v1 = zoneIndex;
  if ( (unsigned int)zoneIndex >= 0x7A4 )
  {
    v4 = 1956;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 387, ASSERT_TYPE_ASSERT, "(unsigned)( zoneIndex ) < (unsigned)( ( sizeof( *array_counter( s_zones.zones ) ) + 0 ) )", "zoneIndex doesn't index ARRAY_COUNT( s_zones.zones )\n\t%i not in [0, %i)", zoneIndex, v4) )
      __debugbreak();
  }
  if ( !LOBYTE(s_zones.zoneHandleGeneration[136 * v1 - 266016]) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 1180, ASSERT_TYPE_ASSERT, "(DB_Zones_IsValidZoneIndex( zoneIndex ))", (const char *)&queryFormat, "DB_Zones_IsValidZoneIndex( zoneIndex )") )
    __debugbreak();
  ZoneFromIndex = DB_Zones_GetZoneFromIndex(v1);
  if ( (ZoneFromIndex->flags & 0x3CFF000) != 0 )
  {
    if ( ZoneFromIndex->addedXPaks && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 1197, ASSERT_TYPE_ASSERT, "( !r_zone.addedXPaks )", "%s had loaded an xpak file, logic in DB_Zones_ShouldLoadXPak is likely bad", ZoneFromIndex->name) )
      __debugbreak();
  }
  else
  {
    XPak_RemovePackFilesForZone(ZoneFromIndex->name);
  }
}

/*
==============
DB_Zones_UnloadAndFreeZone
==============
*/
void DB_Zones_UnloadAndFreeZone(int zoneIndex, bool freeGpuWait)
{
  unsigned int v4; 
  XZoneTemporaryLoadData *tempData; 
  DB_AsyncIWFileLoad *residentLoader; 
  unsigned int i; 
  DB_AsyncIWFileLoad *p_asyncFileLoad; 
  unsigned int v17; 
  unsigned int v18; 
  GfxWorldTransientZoneDeferredReleaseWaitList *v19; 
  unsigned int v20; 
  __int64 v34; 
  int LogChannel; 
  unsigned __int16 worldTransientIndex; 
  const dvar_t *v37; 
  DB_Zone *zones; 
  __int64 v39; 
  __int64 v40; 
  __int64 v41; 
  __int64 v42; 
  char v43[160]; 
  __int64 v44; 
  GfxWorldTransientZoneDeferredReleasePointers dstPointers; 
  GfxWorldTransientZoneDeferredReleasePointers pointers; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 1609, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  v4 = 0;
  _R15 = DB_Zones_GetZoneFromIndex(zoneIndex);
  tempData = _R15->mem.tempData;
  if ( tempData )
  {
    residentLoader = tempData->residentLoader;
    if ( residentLoader )
      DB_AsyncIWFileLoad::Shutdown(residentLoader);
    for ( i = 0; i < tempData->openData.diffCount; ++i )
    {
      p_asyncFileLoad = &tempData->patchStreams[i]->asyncFileLoad;
      if ( p_asyncFileLoad )
        DB_AsyncIWFileLoad::Shutdown(p_asyncFileLoad);
    }
  }
  DB_CloseAllFileHandles(&_R15->mem);
  DB_Zones_RemoveFromHashTable(zoneIndex);
  if ( freeGpuWait )
  {
    __asm
    {
      vmovups ymm0, ymmword ptr [r15+60h]
      vmovups ymm1, ymmword ptr [r15+0E0h]
    }
    _RAX = v43;
    __asm
    {
      vmovups ymmword ptr [rax], ymm0
      vmovups ymm0, ymmword ptr [r15+80h]
      vmovups ymmword ptr [rax+20h], ymm0
      vmovups ymm0, ymmword ptr [r15+0A0h]
      vmovups ymmword ptr [rax+40h], ymm0
      vmovups ymm0, ymmword ptr [r15+0C0h]
      vmovups ymmword ptr [rax+60h], ymm0
      vmovups ymmword ptr [rax+80h], ymm1
    }
    v44 = (unsigned int)g_gpuSwapFrame | 0x30000000000i64;
    if ( GfxWorldTransientZoneDeferredRelease_TakeOwnership(&dstPointers, zoneIndex) )
    {
      _RSI = &s_GfxWorldTransientZoneDeferredReleaseWaitList;
      do
      {
        if ( s_GfxWorldTransientZoneDeferredReleaseWaitList.numPointers < 0x300 )
        {
          v17 = 0;
          v18 = 0;
          v19 = &s_GfxWorldTransientZoneDeferredReleaseWaitList;
          do
          {
            v20 = __lzcnt(~v19->freeList.array[0]);
            v17 += v20;
            if ( v20 < 0x20 )
              break;
            ++v18;
            v19 = (GfxWorldTransientZoneDeferredReleaseWaitList *)((char *)v19 + 4);
          }
          while ( v18 < 0x18 );
          if ( v17 >= 0x300 )
          {
            LODWORD(v42) = 768;
            LODWORD(v41) = v17;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v41, v42) )
              __debugbreak();
          }
          s_GfxWorldTransientZoneDeferredReleaseWaitList.freeList.array[(unsigned __int64)v17 >> 5] |= 0x80000000 >> (v17 & 0x1F);
          ++s_GfxWorldTransientZoneDeferredReleaseWaitList.numPointers;
        }
        else
        {
          Sys_Error((const ObfuscateErrorText)&stru_143E017E0);
          v17 = 0;
        }
        __asm
        {
          vmovups ymm0, ymmword ptr [rsp+238h+dstPointers.posBuffer.baseclass_0.buffer]
          vmovups ymm1, ymmword ptr [rsp+238h+dstPointers.auxBuffer.baseclass_0.buffer]
        }
        _RCX = 120i64 * v17;
        HIDWORD(v44) = v17;
        __asm
        {
          vmovups ymmword ptr [rcx+rsi+68h], ymm0
          vmovups ymm0, ymmword ptr [rsp+238h+dstPointers.indexBuffer]
          vmovups ymmword ptr [rcx+rsi+88h], ymm1
          vmovups xmm1, xmmword ptr [rsp+238h+dstPointers.SMLGppZone]
          vmovups ymmword ptr [rcx+rsi+0A8h], ymm0
          vmovsd  xmm0, [rsp+238h+dstPointers.reflectionProbes]
          vmovups xmmword ptr [rcx+rsi+0C8h], xmm1
          vmovsd  qword ptr [rcx+rsi+0D8h], xmm0
        }
      }
      while ( GfxWorldTransientZoneDeferredRelease_TakeOwnership(&dstPointers, zoneIndex) );
    }
    if ( s_zones.gpuUnloadWaitList.m_size >= 0x7A4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 190, ASSERT_TYPE_ASSERT, "( size() < max_size() )", (const char *)&queryFormat, "size() < max_size()") )
      __debugbreak();
    _RCX = &s_zones.gpuUnloadWaitList.m_data.m_buffer[168 * s_zones.gpuUnloadWaitList.m_size];
    _RAX = v43;
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr [rcx], ymm0
      vmovups ymm0, ymmword ptr [rax+20h]
      vmovups ymmword ptr [rcx+20h], ymm0
      vmovups ymm0, ymmword ptr [rax+40h]
      vmovups ymmword ptr [rcx+40h], ymm0
      vmovups ymm0, ymmword ptr [rax+60h]
      vmovups ymmword ptr [rcx+60h], ymm0
      vmovups ymm0, ymmword ptr [rax+80h]
    }
    v34 = v44;
    __asm { vmovups ymmword ptr [rcx+80h], ymm0 }
    *((_QWORD *)_RCX + 20) = v34;
    ++s_zones.gpuUnloadWaitList.m_size;
  }
  else
  {
    while ( GfxWorldTransientZoneDeferredRelease_TakeOwnership(&pointers, zoneIndex) )
      GfxWorldTransientZoneDeferredRelease_Release(&pointers);
    DB_FreeXZoneMemory(&_R15->mem);
  }
  LogChannel = DB_GetLogChannel();
  Com_Printf(LogChannel, "Unloaded fastfile %s\n", _R15->name);
  worldTransientIndex = _R15->worldTransientIndex;
  if ( worldTransientIndex )
  {
    if ( worldTransientIndex >= 0x600u )
    {
      LODWORD(v40) = 1536;
      LODWORD(v39) = worldTransientIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 1678, ASSERT_TYPE_ASSERT, "(unsigned)( r_zone.worldTransientIndex ) < (unsigned)( ( sizeof( *array_counter( s_zones.worldTransientZoneIndices ) ) + 0 ) )", "r_zone.worldTransientIndex doesn't index ARRAY_COUNT( s_zones.worldTransientZoneIndices )\n\t%i not in [0, %i)", v39, v40) )
        __debugbreak();
    }
    s_zones.worldTransientZoneIndices[_R15->worldTransientIndex] = 0;
  }
  DB_UnloadHashLookupData(_R15->name);
  memset_0(_R15, 0, sizeof(DB_Zone));
  v37 = DCONST_DVARBOOL_db_comprehensiveSanityChecks;
  if ( !DCONST_DVARBOOL_db_comprehensiveSanityChecks && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "db_comprehensiveSanityChecks") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v37);
  if ( v37->current.enabled )
  {
    zones = s_zones.zones;
    do
    {
      if ( zones->name[0] && DB_Zones_GetZoneIndexFromName(s_zones.zones[v4].name) != v4 )
      {
        LODWORD(v42) = v4;
        LODWORD(v41) = DB_Zones_GetZoneIndexFromName(s_zones.zones[v4].name);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 340, ASSERT_TYPE_ASSERT, "( DB_Zones_GetZoneIndexFromName( s_zones.zones[i].name ) ) == ( i )", "%s == %s\n\t%u, %u", "DB_Zones_GetZoneIndexFromName( s_zones.zones[i].name )", "i", v41, v42) )
          __debugbreak();
      }
      ++v4;
      ++zones;
    }
    while ( v4 < 0x7A4 );
  }
}

/*
==============
DB_Zones_UpdateInUseFlags
==============
*/
void DB_Zones_UpdateInUseFlags(void)
{
  unsigned int v0; 
  unsigned int v1; 
  unsigned int *p_flags; 

  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "DB_Zones_UpdateInUseFlags");
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 1453, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()", -2i64) )
    __debugbreak();
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 1433, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  v0 = 0;
  if ( s_zones.zones[0].flags && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 1437, ASSERT_TYPE_ASSERT, "(s_zones.zones[DEFAULT_ZONE_INDEX].flags == 0)", (const char *)&queryFormat, "s_zones.zones[DEFAULT_ZONE_INDEX].flags == 0") )
    __debugbreak();
  v1 = 1;
  p_flags = &s_zones.zones[1].flags;
  do
  {
    if ( ((*p_flags - 1) & *p_flags) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_zones.cpp", 1441, ASSERT_TYPE_ASSERT, "(IsPowerOf2( s_zones.zones[zoneIndex].flags ))", (const char *)&queryFormat, "IsPowerOf2( s_zones.zones[zoneIndex].flags )") )
      __debugbreak();
    v0 |= *p_flags;
    ++v1;
    p_flags += 68;
  }
  while ( v1 < 0x7A4 );
  s_zones.inUseFlags = v0;
  Sys_ProfEndNamedEvent();
}

