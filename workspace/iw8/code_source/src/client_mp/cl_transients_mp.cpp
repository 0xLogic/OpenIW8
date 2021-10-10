/*
==============
CL_TransientsMP_StallUntilCompletion
==============
*/

void CL_TransientsMP_StallUntilCompletion(void)
{
  ?CL_TransientsMP_StallUntilCompletion@@YAXXZ();
}

/*
==============
CL_TransientsMP_GetAssetsForFileIndex
==============
*/

unsigned __int16 __fastcall CL_TransientsMP_GetAssetsForFileIndex(const unsigned __int16 fileIndex)
{
  return ?CL_TransientsMP_GetAssetsForFileIndex@@YAGG@Z(fileIndex);
}

/*
==============
CL_TransientsMP_GetFileName
==============
*/

const char *__fastcall CL_TransientsMP_GetFileName(const unsigned __int16 fileIndex)
{
  return ?CL_TransientsMP_GetFileName@@YAPEBDG@Z(fileIndex);
}

/*
==============
CL_TransientsMP_GetYieldTimeProgress
==============
*/

int __fastcall CL_TransientsMP_GetYieldTimeProgress()
{
  return ?CL_TransientsMP_GetYieldTimeProgress@@YAHXZ();
}

/*
==============
CL_TransientsMP_DoOverrideFixups
==============
*/

void CL_TransientsMP_DoOverrideFixups(void)
{
  ?CL_TransientsMP_DoOverrideFixups@@YAXXZ();
}

/*
==============
CL_TransientsMP_IsXModelNameLoaded
==============
*/

bool __fastcall CL_TransientsMP_IsXModelNameLoaded(const char *xmodelName)
{
  return ?CL_TransientsMP_IsXModelNameLoaded@@YA_NPEBD@Z(xmodelName);
}

/*
==============
CL_TransientsMP_UnloadByFileIndex
==============
*/

void __fastcall CL_TransientsMP_UnloadByFileIndex(unsigned __int16 fileIndex)
{
  ?CL_TransientsMP_UnloadByFileIndex@@YAXG@Z(fileIndex);
}

/*
==============
CL_TransientsMP_Init
==============
*/

void CL_TransientsMP_Init(void)
{
  ?CL_TransientsMP_Init@@YAXXZ();
}

/*
==============
CL_TransientsMP_IsTransientAssetIndex
==============
*/

bool __fastcall CL_TransientsMP_IsTransientAssetIndex(const unsigned __int16 assetIndex, const XAssetType type)
{
  return ?CL_TransientsMP_IsTransientAssetIndex@@YA_NGW4XAssetType@@@Z(assetIndex, type);
}

/*
==============
CL_TransientsMP_GetRemainingLoadCountAbovePriority
==============
*/

unsigned int __fastcall CL_TransientsMP_GetRemainingLoadCountAbovePriority(unsigned int priority)
{
  return ?CL_TransientsMP_GetRemainingLoadCountAbovePriority@@YAII@Z(priority);
}

/*
==============
CL_TransientsMP_GetTransientStats
==============
*/

void __fastcall CL_TransientsMP_GetTransientStats(TransientDebugStats *outStats)
{
  ?CL_TransientsMP_GetTransientStats@@YAXAEAUTransientDebugStats@@@Z(outStats);
}

/*
==============
CL_TransientsMP_IsXModelAssetIndexLoaded
==============
*/

bool __fastcall CL_TransientsMP_IsXModelAssetIndexLoaded(const unsigned __int16 assetIndex)
{
  return ?CL_TransientsMP_IsXModelAssetIndexLoaded@@YA_NG@Z(assetIndex);
}

/*
==============
CL_TransientsMP_FixupModelAssets
==============
*/

void __fastcall CL_TransientsMP_FixupModelAssets(const int zoneIndex)
{
  ?CL_TransientsMP_FixupModelAssets@@YAXH@Z(zoneIndex);
}

/*
==============
CL_TransientsMP_IsLoadedByFileIndex
==============
*/

bool __fastcall CL_TransientsMP_IsLoadedByFileIndex(const unsigned __int16 fileIndex)
{
  return ?CL_TransientsMP_IsLoadedByFileIndex@@YA_NG@Z(fileIndex);
}

/*
==============
CL_TransientsMP_DeregisterFile
==============
*/

void __fastcall CL_TransientsMP_DeregisterFile(const char *fileName, TransientFileType fileType)
{
  ?CL_TransientsMP_DeregisterFile@@YAXPEBDW4TransientFileType@@@Z(fileName, fileType);
}

/*
==============
CL_TransientsMP_RegisterFile
==============
*/

unsigned int __fastcall CL_TransientsMP_RegisterFile(const char *filename, TransientFileType fileType, unsigned int zoneFlags, unsigned __int64 cost)
{
  return ?CL_TransientsMP_RegisterFile@@YAIPEBDW4TransientFileType@@I_K@Z(filename, fileType, zoneFlags, cost);
}

/*
==============
CL_TransientsMP_LoadByAssetIndex
==============
*/

void __fastcall CL_TransientsMP_LoadByAssetIndex(const unsigned __int16 assetIndex, const unsigned int priority)
{
  ?CL_TransientsMP_LoadByAssetIndex@@YAXGI@Z(assetIndex, priority);
}

/*
==============
CL_TransientsMP_GetFileIndexForAssetIndex
==============
*/

unsigned __int16 __fastcall CL_TransientsMP_GetFileIndexForAssetIndex(const unsigned __int16 assetIndex)
{
  return ?CL_TransientsMP_GetFileIndexForAssetIndex@@YAGG@Z(assetIndex);
}

/*
==============
CL_TransientsMP_LoadByFileIndex
==============
*/

void __fastcall CL_TransientsMP_LoadByFileIndex(unsigned __int16 fileIndex, unsigned int priority)
{
  ?CL_TransientsMP_LoadByFileIndex@@YAXGI@Z(fileIndex, priority);
}

/*
==============
CL_TransientsMP_IsXModelLoaded
==============
*/

bool __fastcall CL_TransientsMP_IsXModelLoaded(const XModel *xmodel)
{
  return ?CL_TransientsMP_IsXModelLoaded@@YA_NPEBUXModel@@@Z(xmodel);
}

/*
==============
CL_TransientsMP_ResetOverridden
==============
*/

void __fastcall CL_TransientsMP_ResetOverridden(const char *name, const XAssetType type)
{
  ?CL_TransientsMP_ResetOverridden@@YAXPEBDW4XAssetType@@@Z(name, type);
}

/*
==============
CL_TransientsMP_GetYieldTimeout
==============
*/

int __fastcall CL_TransientsMP_GetYieldTimeout()
{
  return ?CL_TransientsMP_GetYieldTimeout@@YAHXZ();
}

/*
==============
CL_TransientsMP_IsRegisteredAsset
==============
*/

bool __fastcall CL_TransientsMP_IsRegisteredAsset(const char *name, const XAssetType type)
{
  return ?CL_TransientsMP_IsRegisteredAsset@@YA_NPEBDW4XAssetType@@@Z(name, type);
}

/*
==============
CL_TransientsMP_RegisterAsset
==============
*/

unsigned int __fastcall CL_TransientsMP_RegisterAsset(const char *assetName, const XAssetType assetType, const unsigned int fileIndex)
{
  return ?CL_TransientsMP_RegisterAsset@@YAIPEBDW4XAssetType@@I@Z(assetName, assetType, fileIndex);
}

/*
==============
CL_TransientsMP_GetFileIndexForFileName
==============
*/

unsigned __int16 __fastcall CL_TransientsMP_GetFileIndexForFileName(const char *filename)
{
  return ?CL_TransientsMP_GetFileIndexForFileName@@YAGPEBD@Z(filename);
}

/*
==============
CL_TransientsMP_HasPendingLoadsAbovePriority
==============
*/

bool __fastcall CL_TransientsMP_HasPendingLoadsAbovePriority(unsigned int priority)
{
  return ?CL_TransientsMP_HasPendingLoadsAbovePriority@@YA_NI@Z(priority);
}

/*
==============
CL_TransientsMP_SetLoadPriorityByXModel
==============
*/

void __fastcall CL_TransientsMP_SetLoadPriorityByXModel(const char *xmodelName, const unsigned int priority)
{
  ?CL_TransientsMP_SetLoadPriorityByXModel@@YAXPEBDI@Z(xmodelName, priority);
}

/*
==============
CL_TransientsMP_IsYielding
==============
*/

bool __fastcall CL_TransientsMP_IsYielding()
{
  return ?CL_TransientsMP_IsYielding@@YA_NXZ();
}

/*
==============
CL_TransientsMP_GetTransientAssetIndexForXModel
==============
*/

unsigned __int16 __fastcall CL_TransientsMP_GetTransientAssetIndexForXModel(const char *xmodelName)
{
  return ?CL_TransientsMP_GetTransientAssetIndexForXModel@@YAGPEBD@Z(xmodelName);
}

/*
==============
CL_TransientsMP_OnPreloadFrontendUnload
==============
*/

void CL_TransientsMP_OnPreloadFrontendUnload(void)
{
  ?CL_TransientsMP_OnPreloadFrontendUnload@@YAXXZ();
}

/*
==============
CL_TransientsMP_OnLevelUnload
==============
*/

void CL_TransientsMP_OnLevelUnload(void)
{
  ?CL_TransientsMP_OnLevelUnload@@YAXXZ();
}

/*
==============
CL_TransientsMP_Process
==============
*/

void CL_TransientsMP_Process(void)
{
  ?CL_TransientsMP_Process@@YAXXZ();
}

/*
==============
CL_TransientsMP_IsTransientAsset
==============
*/

bool __fastcall CL_TransientsMP_IsTransientAsset(const char *name, const XAssetType type)
{
  return ?CL_TransientsMP_IsTransientAsset@@YA_NPEBDW4XAssetType@@@Z(name, type);
}

/*
==============
CL_TransientsMP_OnUnloadAll
==============
*/

void CL_TransientsMP_OnUnloadAll(void)
{
  ?CL_TransientsMP_OnUnloadAll@@YAXXZ();
}

/*
==============
CL_TransientsMP_SetLoadPriorityByFile
==============
*/

void __fastcall CL_TransientsMP_SetLoadPriorityByFile(const char *filename, const unsigned int priority)
{
  ?CL_TransientsMP_SetLoadPriorityByFile@@YAXPEBDI@Z(filename, priority);
}

/*
==============
CL_TransientsMP_IsLoadModeInFrontend
==============
*/

bool __fastcall CL_TransientsMP_IsLoadModeInFrontend()
{
  return ?CL_TransientsMP_IsLoadModeInFrontend@@YA_NXZ();
}

/*
==============
CL_TransientsMP_GetTransientAssetIndices
==============
*/

unsigned int __fastcall CL_TransientsMP_GetTransientAssetIndices(const char *const *names, const unsigned int nameCount, const XAssetType type, unsigned __int16 *outAssetIndices)
{
  return ?CL_TransientsMP_GetTransientAssetIndices@@YAIPEBQEBDIW4XAssetType@@PEAG@Z(names, nameCount, type, outAssetIndices);
}

/*
==============
CL_TransientsMP_NeedsProcessing
==============
*/

bool __fastcall CL_TransientsMP_NeedsProcessing()
{
  return ?CL_TransientsMP_NeedsProcessing@@YA_NXZ();
}

/*
==============
CL_TransientsMP_SetLoadPriorityByFileIndex
==============
*/

void __fastcall CL_TransientsMP_SetLoadPriorityByFileIndex(unsigned __int16 fileIndex, unsigned int priority)
{
  ?CL_TransientsMP_SetLoadPriorityByFileIndex@@YAXGI@Z(fileIndex, priority);
}

/*
==============
CL_TransientsMP_CanUseAsset
==============
*/

bool __fastcall CL_TransientsMP_CanUseAsset(const char *name, const XAssetType type)
{
  return ?CL_TransientsMP_CanUseAsset@@YA_NPEBDW4XAssetType@@@Z(name, type);
}

/*
==============
CL_TransientsMP_DebugDrawQueue
==============
*/

void __fastcall CL_TransientsMP_DebugDrawQueue(const ScreenPlacement *const scrPlace, const float x, const float y)
{
  ?CL_TransientsMP_DebugDrawQueue@@YAXQEBUScreenPlacement@@MM@Z(scrPlace, x, y);
}

/*
==============
CL_TransientsMP_UnloadByAssetIndex
==============
*/

void __fastcall CL_TransientsMP_UnloadByAssetIndex(unsigned __int16 assetIndex)
{
  ?CL_TransientsMP_UnloadByAssetIndex@@YAXG@Z(assetIndex);
}

/*
==============
CL_TransientsMP_OnLevelLoad
==============
*/

void CL_TransientsMP_OnLevelLoad(void)
{
  ?CL_TransientsMP_OnLevelLoad@@YAXXZ();
}

/*
==============
CL_TransientsMP_GetAssetFastfileName
==============
*/

const char *__fastcall CL_TransientsMP_GetAssetFastfileName(const char *name, const XAssetType type)
{
  return ?CL_TransientsMP_GetAssetFastfileName@@YAPEBDPEBDW4XAssetType@@@Z(name, type);
}

/*
==============
CL_TransientsMP_UnloadByXModel
==============
*/

void __fastcall CL_TransientsMP_UnloadByXModel(const char *xmodelName)
{
  ?CL_TransientsMP_UnloadByXModel@@YAXPEBD@Z(xmodelName);
}

/*
==============
CL_TransientsMP_SetOverridden
==============
*/

void __fastcall CL_TransientsMP_SetOverridden(const char *name, const XAssetType type)
{
  ?CL_TransientsMP_SetOverridden@@YAXPEBDW4XAssetType@@@Z(name, type);
}

/*
==============
CL_TransientsMP_UnloadByFile
==============
*/

void __fastcall CL_TransientsMP_UnloadByFile(const char *filename)
{
  ?CL_TransientsMP_UnloadByFile@@YAXPEBD@Z(filename);
}

/*
==============
CL_TransientsMP_DumpTransientList
==============
*/

void CL_TransientsMP_DumpTransientList(void)
{
  ?CL_TransientsMP_DumpTransientList@@YAXXZ();
}

/*
==============
CL_TransientsMP_Shutdown
==============
*/

void CL_TransientsMP_Shutdown(void)
{
  ?CL_TransientsMP_Shutdown@@YAXXZ();
}

/*
==============
CL_TransientsMP_LoadByXModel
==============
*/

void __fastcall CL_TransientsMP_LoadByXModel(const char *xmodelName, const unsigned int priority)
{
  ?CL_TransientsMP_LoadByXModel@@YAXPEBDI@Z(xmodelName, priority);
}

/*
==============
CL_TransientsMP_GetAssetName
==============
*/

const char *__fastcall CL_TransientsMP_GetAssetName(const unsigned __int16 assetIndex)
{
  return ?CL_TransientsMP_GetAssetName@@YAPEBDG@Z(assetIndex);
}

/*
==============
CL_TransientsMP_SetLoadPriorityByAssetIndex
==============
*/

void __fastcall CL_TransientsMP_SetLoadPriorityByAssetIndex(const unsigned __int16 assetIndex, const unsigned int priority)
{
  ?CL_TransientsMP_SetLoadPriorityByAssetIndex@@YAXGI@Z(assetIndex, priority);
}

/*
==============
CL_TransientsMP_DeregisterAsset
==============
*/

void __fastcall CL_TransientsMP_DeregisterAsset(const char *assetName, const XAssetType assetType)
{
  ?CL_TransientsMP_DeregisterAsset@@YAXPEBDW4XAssetType@@@Z(assetName, assetType);
}

/*
==============
CL_TransientsMP_LoadByFile
==============
*/

void __fastcall CL_TransientsMP_LoadByFile(const char *filename, const unsigned int priority)
{
  ?CL_TransientsMP_LoadByFile@@YAXPEBDI@Z(filename, priority);
}

/*
==============
CL_TransientMP_StatusPrint
==============
*/
void CL_TransientMP_StatusPrint(const char *formatString, ...)
{
  const dvar_t *v1; 
  char dest[4096]; 
  va_list ap; 

  va_start(ap, formatString);
  v1 = DCONST_DVARINT_cl_transient_mp_printVerbosity;
  if ( !DCONST_DVARINT_cl_transient_mp_printVerbosity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_transient_mp_printVerbosity") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( v1->current.integer > 0 )
  {
    Com_vsprintf_truncate(dest, 0x1000ui64, 0x1000ui64, formatString, ap);
    Com_Printf(10, (const char *)&queryFormat, dest);
  }
}

/*
==============
CL_TransientsMP_AddToQueue
==============
*/
void CL_TransientsMP_AddToQueue(TransientFile *file, unsigned int priority)
{
  __int64 v4; 

  if ( s_transientQueueSize >= 0x741 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 408, ASSERT_TYPE_ASSERT, "(unsigned)( s_transientQueueSize ) < (unsigned)( MAX_QUEUED_FILES )", "s_transientQueueSize doesn't index MAX_QUEUED_FILES\n\t%i not in [0, %i)", s_transientQueueSize, 1857) )
    __debugbreak();
  if ( !file && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 409, ASSERT_TYPE_ASSERT, "(file)", (const char *)&queryFormat, "file") )
    __debugbreak();
  v4 = s_transientQueueSize++;
  s_transientQueue[v4].file = file;
  s_transientQueue[v4].priority = priority;
}

/*
==============
CL_TransientsMP_CanUseAsset
==============
*/
_BOOL8 CL_TransientsMP_CanUseAsset(const char *name, const XAssetType type)
{
  unsigned __int16 AssetIndexByHash; 
  unsigned __int8 v5; 
  int i; 
  bool CanUseAssetIndexInternal; 

  if ( s_shutdownLock.writeThreadId == Sys_GetCurrentThreadId() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 62, ASSERT_TYPE_ASSERT, "( critSect->writeThreadId != Sys_GetCurrentThreadId() )", "This is a non-recursive lock! Don't attempt to take a read lock if the calling thread already has the write lock or this will loop infinitely.") )
    __debugbreak();
  if ( ((unsigned __int8)&s_shutdownLock & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &s_shutdownLock) )
    __debugbreak();
  _InterlockedIncrement((volatile signed __int32 *)&s_shutdownLock);
  while ( s_shutdownLock.writeCount )
    Sys_Sleep(0);
  if ( type == ASSET_TYPE_XMODEL )
  {
    v5 = *name;
    for ( i = 0; *name; v5 = *name )
    {
      ++name;
      i = v5 ^ (16777619 * i);
    }
    AssetIndexByHash = CL_TransientsMP_FindAssetIndexByHash(i ^ 9);
  }
  else
  {
    AssetIndexByHash = -1;
  }
  CanUseAssetIndexInternal = CL_TransientsMP_CanUseAssetIndexInternal(AssetIndexByHash, type);
  if ( s_shutdownLock.readCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 90, ASSERT_TYPE_ASSERT, "( critSect->readCount ) > ( 0 )", "%s > %s\n\t%i, %i", "critSect->readCount", "0", s_shutdownLock.readCount, 0i64) )
    __debugbreak();
  if ( ((unsigned __int64)&s_shutdownLock & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &s_shutdownLock) )
    __debugbreak();
  _InterlockedDecrement((volatile signed __int32 *)&s_shutdownLock);
  return CanUseAssetIndexInternal;
}

/*
==============
CL_TransientsMP_CanUseAssetIndexInternal
==============
*/
char CL_TransientsMP_CanUseAssetIndexInternal(const unsigned __int16 assetIndex, const XAssetType type)
{
  TransientAssetEntry *AssetByIndex; 
  char v6; 
  TransientFile *FileByIndex; 
  const dvar_t *v8; 
  const char *AssetName; 
  const char *filename; 

  if ( assetIndex == 0xFFFF )
    return 1;
  AssetByIndex = CL_TransientsMP_GetAssetByIndex(assetIndex);
  if ( !AssetByIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 1898, ASSERT_TYPE_ASSERT, "(asset)", (const char *)&queryFormat, "asset") )
    __debugbreak();
  if ( (*(_BYTE *)&AssetByIndex->TransientEntryBase & 2) != 0 )
  {
    v6 = 3;
  }
  else if ( AssetByIndex->referenceCount )
  {
    FileByIndex = CL_TransientsMP_GetFileByIndex(AssetByIndex->fileIndex);
    if ( !FileByIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 1913, ASSERT_TYPE_ASSERT, "(file)", (const char *)&queryFormat, "file") )
      __debugbreak();
    v6 = FileByIndex->state[0];
  }
  else
  {
    v6 = 0;
  }
  if ( v6 == 2 || v6 != 3 )
    return 0;
  v8 = DVARBOOL_db_pedantic;
  if ( !DVARBOOL_db_pedantic && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "db_pedantic") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  if ( v8->current.enabled )
  {
    AssetName = CL_TransientsMP_GetAssetName(assetIndex);
    if ( (*(_BYTE *)&CL_TransientsMP_GetAssetByIndex(assetIndex)->TransientEntryBase & 2) == 0 )
    {
      filename = CL_TransientsMP_GetFileByIndex(s_transientAssetEntries[assetIndex].fileIndex)->filename;
      if ( DB_PollFastfileState(filename) != AWAITING_COMMIT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 2609, ASSERT_TYPE_ASSERT, "( ( (DB_PollFastfileState( filename ) == DB_FastfileState::LOADED) ) )", "( filename ) = %s", filename) )
        __debugbreak();
    }
    if ( !DB_XAssetExists(type, AssetName) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 2611, ASSERT_TYPE_ASSERT, "( ( DB_XAssetExists( static_cast<XAssetType>(type), name ) ) )", "( name ) = %s", AssetName) )
      __debugbreak();
  }
  return 1;
}

/*
==============
CL_TransientsMP_CompareLoadPriority
==============
*/
bool CL_TransientsMP_CompareLoadPriority(const unsigned int queueIndex1, const unsigned int queueIndex2)
{
  unsigned int v2; 
  __int64 v3; 
  __int64 v4; 
  __int64 v6; 
  __int64 v8; 
  unsigned int v9; 

  v2 = s_transientQueueSize;
  v3 = queueIndex2;
  v4 = queueIndex1;
  if ( queueIndex1 >= s_transientQueueSize )
  {
    v9 = s_transientQueueSize;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 1061, ASSERT_TYPE_ASSERT, "(unsigned)( queueIndex1 ) < (unsigned)( s_transientQueueSize )", "queueIndex1 doesn't index s_transientQueueSize\n\t%i not in [0, %i)", queueIndex1, v9) )
      __debugbreak();
    v2 = s_transientQueueSize;
  }
  if ( (unsigned int)v3 >= v2 )
  {
    LODWORD(v8) = v2;
    LODWORD(v6) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 1062, ASSERT_TYPE_ASSERT, "(unsigned)( queueIndex2 ) < (unsigned)( s_transientQueueSize )", "queueIndex2 doesn't index s_transientQueueSize\n\t%i not in [0, %i)", v6, v8) )
      __debugbreak();
  }
  return s_transientQueue[v4].priority > s_transientQueue[v3].priority;
}

/*
==============
CL_TransientsMP_ConvertShiftedToFlags
==============
*/
__int64 CL_TransientsMP_ConvertShiftedToFlags(const unsigned __int8 shiftedFlags)
{
  int v3; 
  int v4; 

  if ( shiftedFlags > 0x1Fu )
  {
    v4 = 31;
    v3 = shiftedFlags;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 288, ASSERT_TYPE_ASSERT, "( shiftedFlags ) <= ( 31 )", "%s <= %s\n\t%u, %u", "shiftedFlags", "31", v3, v4) )
      __debugbreak();
  }
  return (unsigned int)(1 << shiftedFlags);
}

/*
==============
CL_TransientsMP_DebugDrawQueue
==============
*/
void CL_TransientsMP_DebugDrawQueue(const ScreenPlacement *const scrPlace, const float x, const float y)
{
  signed __int64 v3; 
  void *v4; 
  unsigned int i; 
  TransientFile *file; 
  char *fmt; 
  char *s; 
  vec4_t *color; 
  int destPos[4]; 
  char dest[4000]; 

  v4 = alloca(v3);
  destPos[0] = 0;
  dest[0] = 0;
  for ( i = (s_debugLoadedRingBufferSize + 1) % 0x32; i != s_debugLoadedRingBufferSize; i = (i + 1) % 0x32 )
  {
    if ( i >= 0x32 )
    {
      LODWORD(color) = 50;
      LODWORD(s) = i;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 1781, ASSERT_TYPE_ASSERT, "(unsigned)( ringBufferPos ) < (unsigned)( ( sizeof( *array_counter( s_debugLoadedRingBufferEnties ) ) + 0 ) )", "ringBufferPos doesn't index ARRAY_COUNT( s_debugLoadedRingBufferEnties )\n\t%i not in [0, %i)", s, color) )
        __debugbreak();
    }
    file = s_debugLoadedRingBufferEnties[i].file;
    if ( file )
    {
      LODWORD(fmt) = s_debugLoadedRingBufferEnties[i].priority;
      Com_sprintfPos_truncate(dest, 0xFA0ui64, destPos, "%4u '%s'\n", fmt, file->filename);
    }
  }
  CG_DrawDevString(scrPlace, x, y, 0.5, 0.5, dest, &colorWhite, 5, cls.smallDevFont);
}

/*
==============
CL_TransientsMP_DeregisterAsset
==============
*/
void CL_TransientsMP_DeregisterAsset(const char *assetName, const XAssetType assetType)
{
  unsigned __int8 v4; 
  int v5; 
  const char *i; 
  __int32 v7; 
  unsigned __int16 AssetIndexByHash; 
  TransientAssetEntry *AssetByIndex; 
  TransientFile *FileByIndex; 
  unsigned __int16 assets; 
  TransientAssetEntry *v12; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 3306, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( !assetName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 3307, ASSERT_TYPE_ASSERT, "(assetName)", (const char *)&queryFormat, "assetName") )
    __debugbreak();
  v4 = *assetName;
  v5 = 0;
  for ( i = assetName; *i; v4 = *i )
  {
    ++i;
    v5 = v4 ^ (16777619 * v5);
  }
  v7 = assetType ^ v5;
  AssetIndexByHash = CL_TransientsMP_FindAssetIndexByHash(v7);
  if ( AssetIndexByHash == 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 3312, ASSERT_TYPE_ASSERT, "(assetIndex != UNUSED_ASSET)", "%s\n\tCouldn't find asset we're about to unload (%s)", "assetIndex != UNUSED_ASSET", assetName) )
    __debugbreak();
  AssetByIndex = CL_TransientsMP_GetAssetByIndex(AssetIndexByHash);
  if ( !AssetByIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 3316, ASSERT_TYPE_ASSERT, "(assetEntry)", (const char *)&queryFormat, "assetEntry") )
    __debugbreak();
  if ( AssetByIndex->referenceCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 3317, ASSERT_TYPE_ASSERT, "(assetEntry->referenceCount == 0)", "%s\n\tLeaking asset references (%s)", "assetEntry->referenceCount == 0", assetName) )
    __debugbreak();
  FileByIndex = CL_TransientsMP_GetFileByIndex(AssetByIndex->fileIndex);
  if ( !FileByIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 3320, ASSERT_TYPE_ASSERT, "(file)", (const char *)&queryFormat, "file") )
    __debugbreak();
  assets = FileByIndex->assets;
  if ( AssetIndexByHash == assets )
  {
    FileByIndex->assets = AssetByIndex->nextAsset;
  }
  else if ( assets != 0xFFFF )
  {
    while ( 1 )
    {
      v12 = CL_TransientsMP_GetAssetByIndex(assets);
      assets = v12->nextAsset;
      if ( assets == AssetIndexByHash )
        break;
      if ( assets == 0xFFFF )
        goto LABEL_28;
    }
    v12->nextAsset = AssetByIndex->nextAsset;
  }
LABEL_28:
  CL_TransientsMP_FreeTransientEntry_TransientAssetEntry_ntl::fixed_hash_map_unsigned_int_unsigned_short_16384_16411_ntl::hash_unsigned_int__ntl::equal_to_unsigned_int_____(v7, AssetIndexByHash, s_transientAssetEntries, 0x4000u, &s_transientAssetHashMap);
}

/*
==============
CL_TransientsMP_DeregisterFile
==============
*/
void CL_TransientsMP_DeregisterFile(const char *fileName, TransientFileType fileType)
{
  unsigned __int8 v3; 
  int v4; 
  const char *v5; 
  unsigned __int16 FileIndexByHash; 
  unsigned __int16 *p_fileIndex; 
  __int64 v8; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 3350, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( !fileName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 3351, ASSERT_TYPE_ASSERT, "(fileName)", (const char *)&queryFormat, "fileName") )
    __debugbreak();
  v3 = *fileName;
  v4 = 0;
  v5 = fileName;
  if ( !*fileName )
    goto LABEL_36;
  do
  {
    ++v5;
    v4 = v3 ^ (16777619 * v4);
    v3 = *v5;
  }
  while ( *v5 );
  if ( !v4 )
  {
LABEL_36:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 3354, ASSERT_TYPE_ASSERT, "(fileHash != 0)", (const char *)&queryFormat, "fileHash != 0") )
      __debugbreak();
  }
  FileIndexByHash = CL_TransientsMP_FindFileIndexByHash(v4);
  if ( FileIndexByHash == 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 3357, ASSERT_TYPE_ASSERT, "(fileIndex != UNUSED_FILE)", "%s\n\tCould not find file we're about to unload (%s)", "fileIndex != UNUSED_FILE", fileName) )
    __debugbreak();
  if ( !CL_TransientsMP_GetFileByIndex(FileIndexByHash) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 3359, ASSERT_TYPE_ASSERT, "(CL_TransientsMP_GetFileByIndex( fileIndex ))", (const char *)&queryFormat, "CL_TransientsMP_GetFileByIndex( fileIndex )") )
    __debugbreak();
  if ( CL_TransientsMP_GetFileByIndex(FileIndexByHash)->filename != fileName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 3360, ASSERT_TYPE_ASSERT, "(CL_TransientsMP_GetFileByIndex( fileIndex )->filename == fileName)", (const char *)&queryFormat, "CL_TransientsMP_GetFileByIndex( fileIndex )->filename == fileName") )
    __debugbreak();
  if ( CL_TransientsMP_GetFileByIndex(FileIndexByHash)->assets != 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 3361, ASSERT_TYPE_ASSERT, "(CL_TransientsMP_GetFileByIndex( fileIndex )->assets == UNUSED_ASSET)", "%s\n\tDangling asset references (%s)", "CL_TransientsMP_GetFileByIndex( fileIndex )->assets == UNUSED_ASSET", fileName) )
    __debugbreak();
  if ( CL_TransientsMP_GetFileByIndex(FileIndexByHash)->referenceCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 3362, ASSERT_TYPE_ASSERT, "(CL_TransientsMP_GetFileByIndex( fileIndex )->referenceCount == 0)", "%s\n\tLeaking file references (%s)", "CL_TransientsMP_GetFileByIndex( fileIndex )->referenceCount == 0", fileName) )
    __debugbreak();
  p_fileIndex = &s_transientAssetEntries[0].fileIndex;
  v8 = 0x4000i64;
  do
  {
    if ( (*(_BYTE *)(p_fileIndex - 1) & 1) != 0 && *p_fileIndex == FileIndexByHash && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 3369, ASSERT_TYPE_ASSERT, "(s_transientAssetEntries[assetIndex].fileIndex != fileIndex)", "%s\n\tAssets must be freed before the containing file gets freed", "s_transientAssetEntries[assetIndex].fileIndex != fileIndex") )
      __debugbreak();
    p_fileIndex += 8;
    --v8;
  }
  while ( v8 );
  CL_TransientsMP_FreeTransientEntry_TransientFile_ntl::fixed_hash_map_unsigned_int_unsigned_short_10253_10391_ntl::hash_unsigned_int__ntl::equal_to_unsigned_int_____(v4, FileIndexByHash, s_transientFiles, 0x280Du, &s_transientFileHashMap);
}

/*
==============
CL_TransientsMP_DoOverrideFixups
==============
*/
void CL_TransientsMP_DoOverrideFixups(void)
{
  unsigned __int16 v0; 
  TransientAssetEntry *v1; 
  char v2; 
  unsigned __int8 referenceCount; 
  unsigned __int8 v4; 
  __int64 v5; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 3490, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( s_transientOverrideNeedsFixup )
  {
    Sys_ProfBeginNamedEvent(0xFFFFFFFF, "CL_TransientsMP_DoOverrideFixups");
    v0 = 0;
    v1 = s_transientAssetEntries;
    do
    {
      if ( (*(_BYTE *)&v1->TransientEntryBase & 1) != 0 )
      {
        CL_TransientsMP_LockTransientState("index doesn't index ARRAY_COUNT( s_transientAssetEntries )\n\t%i not in [0, %i)");
        v2 = (char)v1->TransientEntryBase;
        if ( (*(_BYTE *)&v1->TransientEntryBase & 1) != 0 )
        {
          if ( (v2 & 8) != 0 )
          {
            if ( (v2 & 2) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 3514, ASSERT_TYPE_ASSERT, "(!assetEntry->isOverridden)", (const char *)&queryFormat, "!assetEntry->isOverridden") )
              __debugbreak();
            if ( (*(_BYTE *)&v1->TransientEntryBase & 4) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 3515, ASSERT_TYPE_ASSERT, "(!assetEntry->overrideNeedsReload)", (const char *)&queryFormat, "!assetEntry->overrideNeedsReload") )
              __debugbreak();
            if ( v1->assetType != 9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 3516, ASSERT_TYPE_ASSERT, "(assetEntry->assetType == ASSET_TYPE_XMODEL)", (const char *)&queryFormat, "assetEntry->assetType == ASSET_TYPE_XMODEL") )
              __debugbreak();
            referenceCount = v1->referenceCount;
            if ( !referenceCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 3519, ASSERT_TYPE_ASSERT, "( ( originalRefCount ) )", "( assetEntry->assetName ) = %s", v1->assetName) )
              __debugbreak();
            while ( v1->referenceCount )
              CL_TransientsMP_UnloadAssetIndexInternal(v0);
            if ( (*(_BYTE *)&v1->TransientEntryBase & 2) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 3526, ASSERT_TYPE_ASSERT, "(assetEntry->isOverridden)", (const char *)&queryFormat, "assetEntry->isOverridden") )
              __debugbreak();
            if ( (*(_BYTE *)&v1->TransientEntryBase & 8) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 3527, ASSERT_TYPE_ASSERT, "(!assetEntry->overrideNeedsUnload)", (const char *)&queryFormat, "!assetEntry->overrideNeedsUnload") )
              __debugbreak();
            if ( v1->referenceCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 3530, ASSERT_TYPE_ASSERT, "(assetEntry->referenceCount == 0)", (const char *)&queryFormat, "assetEntry->referenceCount == 0") )
              __debugbreak();
            v1->referenceCount = referenceCount;
          }
          else if ( (v2 & 4) != 0 )
          {
            if ( (v2 & 2) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 3536, ASSERT_TYPE_ASSERT, "(!assetEntry->isOverridden)", (const char *)&queryFormat, "!assetEntry->isOverridden") )
              __debugbreak();
            if ( (*(_BYTE *)&v1->TransientEntryBase & 8) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 3537, ASSERT_TYPE_ASSERT, "(!assetEntry->overrideNeedsUnload)", (const char *)&queryFormat, "!assetEntry->overrideNeedsUnload") )
              __debugbreak();
            if ( v1->assetType != 9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 3538, ASSERT_TYPE_ASSERT, "(assetEntry->assetType == ASSET_TYPE_XMODEL)", (const char *)&queryFormat, "assetEntry->assetType == ASSET_TYPE_XMODEL") )
              __debugbreak();
            v4 = v1->referenceCount;
            if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 3541, ASSERT_TYPE_ASSERT, "( ( originalRefCount ) )", "( assetEntry->assetName ) = %s", v1->assetName) )
              __debugbreak();
            v1->referenceCount = 0;
            if ( v4 )
            {
              v5 = v4;
              do
              {
                CL_TransientsMP_LoadAssetIndexInternal(v0, 0xFFFFFFFF);
                --v5;
              }
              while ( v5 );
            }
            if ( (*(_BYTE *)&v1->TransientEntryBase & 4) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 3551, ASSERT_TYPE_ASSERT, "(!assetEntry->overrideNeedsReload)", (const char *)&queryFormat, "!assetEntry->overrideNeedsReload") )
              __debugbreak();
            if ( v1->referenceCount != v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 3553, ASSERT_TYPE_ASSERT, "(assetEntry->referenceCount == originalRefCount)", (const char *)&queryFormat, "assetEntry->referenceCount == originalRefCount") )
              __debugbreak();
          }
          DB_SetXAssetTransientOverridden(ASSET_TYPE_XMODEL, v1->assetName, (*(_BYTE *)&v1->TransientEntryBase & 2) != 0);
        }
        if ( !Sys_IsMainThread() && !Sys_IsDatabaseThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 281, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread() || Sys_IsDatabaseThread())", (const char *)&queryFormat, "Sys_IsMainThread() || Sys_IsDatabaseThread()") )
          __debugbreak();
        Sys_UnlockWrite(&s_transientStateLock);
      }
      ++v0;
      ++v1;
    }
    while ( v0 < 0x4000u );
    s_transientOverrideNeedsFixup = 0;
    Sys_ProfEndNamedEvent();
  }
}

/*
==============
CL_TransientsMP_DumpTransientList
==============
*/
void CL_TransientsMP_DumpTransientList(void)
{
  unsigned __int16 *p_fileIndex; 
  unsigned __int16 i; 
  TransientFile *FileByIndex; 
  unsigned __int8 *v3; 
  int v4; 
  unsigned __int8 j; 
  char *fmt; 

  Com_Printf(14, "Client Transient Asset Dump:\n");
  p_fileIndex = &s_transientAssetEntries[0].fileIndex;
  for ( i = 0; i < 0x4000u; ++i )
  {
    if ( (*(_BYTE *)(p_fileIndex - 1) & 1) != 0 )
    {
      FileByIndex = CL_TransientsMP_GetFileByIndex(*p_fileIndex);
      LODWORD(fmt) = *p_fileIndex;
      Com_Printf(14, "%i: '%s'. File %d '%s'\n", i, *(const char **)(p_fileIndex + 3), fmt, FileByIndex->filename);
      if ( *((_BYTE *)p_fileIndex + 4) != 9 )
        goto LABEL_12;
      v3 = *(unsigned __int8 **)(p_fileIndex + 3);
      v4 = 0;
      for ( j = *v3; *v3; j = *v3 )
      {
        ++v3;
        v4 = j ^ (16777619 * v4);
      }
      if ( CL_TransientsMP_FindAssetIndexByHash(v4 ^ 9) == 0xFFFF )
      {
LABEL_12:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 3583, ASSERT_TYPE_ASSERT, "( ( UNUSED_ASSET != CL_TransientsMP_FindAssetIndexByName( assetEntry->assetName, static_cast<XAssetType>( assetEntry->assetType ) ) ) )", "( assetEntry->assetName ) = %s", *(const char **)(p_fileIndex + 3)) )
          __debugbreak();
      }
    }
    p_fileIndex += 8;
  }
}

/*
==============
CL_TransientsMP_FindAssetIndexByHash
==============
*/
__int64 CL_TransientsMP_FindAssetIndexByHash(const unsigned int assetNameAndTypeHash)
{
  unsigned __int64 v2; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,unsigned short> > *v3; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,unsigned short> > *mp_next; 

  v2 = assetNameAndTypeHash % 0x401Bui64;
  if ( v2 >= 0x401B && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
    __debugbreak();
  v3 = &s_transientAssetHashMap.m_buckets.ntl::internal::hash_table<unsigned int,unsigned short,ntl::fixed_pool_allocator<ntl::internal::hash_table_node<unsigned int,unsigned short>,16384,8>,ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,unsigned short> >,16411>,ntl::hash<unsigned int>,ntl::equal_to<unsigned int>,ntl::integral_constant<bool,1> >::m_data[v2];
  mp_next = (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,unsigned short> > *)v3->m_listHead.m_sentinel.mp_next;
  if ( (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,unsigned short> > *)v3->m_listHead.m_sentinel.mp_next == v3 )
  {
LABEL_10:
    mp_next = NULL;
  }
  else
  {
    while ( 1 )
    {
      if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 78, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      if ( LODWORD(mp_next[1].m_listHead.m_sentinel.mp_next) == assetNameAndTypeHash )
        break;
      mp_next = (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,unsigned short> > *)mp_next->m_listHead.m_sentinel.mp_next;
      if ( mp_next == v3 )
        goto LABEL_10;
    }
  }
  if ( !mp_next )
    return 0xFFFFi64;
  if ( LODWORD(mp_next[1].m_listHead.m_sentinel.mp_next) != assetNameAndTypeHash && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 315, ASSERT_TYPE_ASSERT, "(assetIter->first == assetNameAndTypeHash)", (const char *)&queryFormat, "assetIter->first == assetNameAndTypeHash") )
    __debugbreak();
  return WORD2(mp_next[1].m_listHead.m_sentinel.mp_next);
}

/*
==============
CL_TransientsMP_FindFileIndexByHash
==============
*/
__int64 CL_TransientsMP_FindFileIndexByHash(const unsigned int fileNameHash)
{
  unsigned __int64 v2; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,unsigned short> > *v3; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,unsigned short> > *mp_next; 

  v2 = fileNameHash % 0x2897ui64;
  if ( v2 >= 0x2897 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
    __debugbreak();
  v3 = &s_transientFileHashMap.m_buckets.ntl::internal::hash_table<unsigned int,unsigned short,ntl::fixed_pool_allocator<ntl::internal::hash_table_node<unsigned int,unsigned short>,10253,8>,ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,unsigned short> >,10391>,ntl::hash<unsigned int>,ntl::equal_to<unsigned int>,ntl::integral_constant<bool,1> >::m_data[v2];
  mp_next = (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,unsigned short> > *)v3->m_listHead.m_sentinel.mp_next;
  if ( (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,unsigned short> > *)v3->m_listHead.m_sentinel.mp_next == v3 )
  {
LABEL_10:
    mp_next = NULL;
  }
  else
  {
    while ( 1 )
    {
      if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 78, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      if ( LODWORD(mp_next[1].m_listHead.m_sentinel.mp_next) == fileNameHash )
        break;
      mp_next = (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,unsigned short> > *)mp_next->m_listHead.m_sentinel.mp_next;
      if ( mp_next == v3 )
        goto LABEL_10;
    }
  }
  if ( !mp_next )
    return 0xFFFFi64;
  if ( LODWORD(mp_next[1].m_listHead.m_sentinel.mp_next) != fileNameHash && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 326, ASSERT_TYPE_ASSERT, "(assetIter->first == fileNameHash)", (const char *)&queryFormat, "assetIter->first == fileNameHash") )
    __debugbreak();
  return WORD2(mp_next[1].m_listHead.m_sentinel.mp_next);
}

/*
==============
CL_TransientsMP_FixupModelAssets
==============
*/
void CL_TransientsMP_FixupModelAssets(const int zoneIndex)
{
  const char *ZoneNameFromIndex; 
  const char *v3; 
  unsigned __int8 v4; 
  int v5; 
  unsigned __int16 FileIndexByHash; 
  TransientFile *FileByIndex; 
  unsigned __int16 i; 
  TransientAssetEntry *v9; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 3396, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  ZoneNameFromIndex = DB_Zones_GetZoneNameFromIndex(zoneIndex);
  v3 = ZoneNameFromIndex;
  if ( (!ZoneNameFromIndex || !*ZoneNameFromIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 3399, ASSERT_TYPE_ASSERT, "(fileName && fileName[0])", (const char *)&queryFormat, "fileName && fileName[0]") )
    __debugbreak();
  v4 = *v3;
  v5 = 0;
  if ( !*v3 )
    goto LABEL_25;
  do
  {
    ++v3;
    v5 = v4 ^ (16777619 * v5);
    v4 = *v3;
  }
  while ( *v3 );
  if ( !v5 )
  {
LABEL_25:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 3402, ASSERT_TYPE_ASSERT, "(fileHash != 0)", (const char *)&queryFormat, "fileHash != 0") )
      __debugbreak();
  }
  FileIndexByHash = CL_TransientsMP_FindFileIndexByHash(v5);
  FileByIndex = CL_TransientsMP_GetFileByIndex(FileIndexByHash);
  if ( !FileByIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 3406, ASSERT_TYPE_ASSERT, "(file)", (const char *)&queryFormat, "file") )
    __debugbreak();
  for ( i = FileByIndex->assets; i != 0xFFFF; i = v9->nextAsset )
  {
    v9 = &s_transientAssetEntries[i];
    if ( (*(_BYTE *)&v9->TransientEntryBase & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 3412, ASSERT_TYPE_ASSERT, "(assetEntry->inUse)", (const char *)&queryFormat, "assetEntry->inUse") )
      __debugbreak();
    if ( v9->assetType == 9 )
      DB_TransientXModelSurfsFixup(ASSET_TYPE_XMODEL, v9->assetName, zoneIndex);
  }
}

/*
==============
CL_TransientsMP_GatherTransientFiles
==============
*/
__int64 CL_TransientsMP_GatherTransientFiles(TransientFile **files, unsigned int fileCount, const TransientMPZoneState fileState, const bool waitForGPU)
{
  TransientFile **v4; 
  char v5; 
  unsigned int v6; 
  unsigned int v7; 
  unsigned int v8; 
  unsigned int v9; 
  TransientFile *file; 
  __int64 v11; 
  int *v12; 
  __int64 v13; 
  __int64 v14; 
  __int64 v16; 
  __int64 v17; 
  int v20[1860]; 

  v4 = files;
  v5 = fileState;
  v6 = fileCount;
  if ( !files && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 715, ASSERT_TYPE_ASSERT, "(files)", (const char *)&queryFormat, "files") )
    __debugbreak();
  if ( v6 > 0x741 )
  {
    LODWORD(v16) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 716, ASSERT_TYPE_ASSERT, "( fileCount ) <= ( MAX_QUEUED_FILES )", "fileCount not in [0, MAX_QUEUED_FILES]\n\t%u not in [0, %u]", v16, 1857) )
      __debugbreak();
  }
  v7 = 0;
  v8 = 0;
  v9 = 0;
  if ( s_transientQueueSize )
  {
    do
    {
      if ( v8 >= 0x741 )
        break;
      file = s_transientQueue[v9].file;
      if ( !file && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 681, ASSERT_TYPE_ASSERT, "(file)", (const char *)&queryFormat, "file") )
        __debugbreak();
      if ( file->state[0] == v5 )
      {
        v11 = v8++;
        v20[v11] = v9;
      }
      ++v9;
    }
    while ( v9 < s_transientQueueSize );
    v6 = fileCount;
    v4 = files;
    if ( v8 > 0x741 )
    {
      LODWORD(v17) = 1857;
      LODWORD(v16) = v8;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 719, ASSERT_TYPE_ASSERT, "( addFileCount ) <= ( MAX_QUEUED_FILES )", "addFileCount not in [0, MAX_QUEUED_FILES]\n\t%u not in [0, %u]", v16, v17) )
        __debugbreak();
    }
  }
  if ( v8 )
  {
    v12 = v20;
    do
    {
      if ( v6 >= 0x741 )
        break;
      ++v7;
      v13 = (unsigned int)*v12;
      v14 = v6++;
      ++v12;
      v4[v14] = s_transientQueue[v13].file;
    }
    while ( v7 < v8 );
  }
  return v6;
}

/*
==============
CL_TransientsMP_GetAndValidateExpectedTransientZone
==============
*/
__int64 CL_TransientsMP_GetAndValidateExpectedTransientZone(const TransientFileType type, const unsigned int parentZoneFlags)
{
  __int64 result; 
  int v9; 

  switch ( (char)type )
  {
    case 2:
      if ( (parentZoneFlags & 0x100100) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 3224, ASSERT_TYPE_ASSERT, "( ( ( parentZoneFlags & ( DB_ZONE_GAME | DB_ZONE_PRELOAD_FRONTEND ) ) != 0 ) )", "( parentZoneFlags ) = %u", parentZoneFlags) )
        __debugbreak();
      result = 0x8000i64;
      break;
    case 3:
      if ( (parentZoneFlags & 0x100100) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 3230, ASSERT_TYPE_ASSERT, "( ( ( parentZoneFlags & ( DB_ZONE_GAME | DB_ZONE_PRELOAD_FRONTEND ) ) != 0 ) )", "( parentZoneFlags ) = %u", parentZoneFlags) )
        __debugbreak();
      result = 0x10000i64;
      break;
    case 4:
      if ( (parentZoneFlags & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 3242, ASSERT_TYPE_ASSERT, "( ( ( parentZoneFlags & DB_ZONE_GAMEMODE_TIER1 ) != 0 ) )", "( parentZoneFlags ) = %u", parentZoneFlags) )
        __debugbreak();
      result = 0x20000i64;
      break;
    case 5:
      if ( (parentZoneFlags & 0x100100) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 3236, ASSERT_TYPE_ASSERT, "( ( ( parentZoneFlags & ( DB_ZONE_GAME | DB_ZONE_PRELOAD_FRONTEND ) ) != 0 ) )", "( parentZoneFlags ) = %u", parentZoneFlags) )
        __debugbreak();
      result = 0x40000i64;
      break;
    case 7:
    case 8:
    case 9:
      if ( (parentZoneFlags & 2) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 3250, ASSERT_TYPE_ASSERT, "( ( ( parentZoneFlags & DB_TRANSIENT_CUSTOMIZATION_PARENT ) != 0 ) )", "( parentZoneFlags ) = %u", parentZoneFlags) )
        __debugbreak();
      result = 0x80000i64;
      break;
    case 10:
    case 11:
    case 12:
    case 13:
      if ( (parentZoneFlags & 2) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 3218, ASSERT_TYPE_ASSERT, "( ( ( parentZoneFlags & DB_ZONE_GLOBAL_TIER1 ) != 0 ) )", "( parentZoneFlags ) = %u", parentZoneFlags) )
        __debugbreak();
      result = 0x2000i64;
      break;
    default:
      v9 = (unsigned __int8)type;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 3255, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unknown transient filetype: %d. Zoneflags: %08x", v9, parentZoneFlags) )
        __debugbreak();
      result = 0i64;
      break;
  }
  return result;
}

/*
==============
CL_TransientsMP_GetAssetByIndex
==============
*/
TransientAssetEntry *CL_TransientsMP_GetAssetByIndex(const unsigned __int16 index)
{
  TransientAssetEntry *v2; 
  int v4; 
  int v5; 

  if ( index >= 0x4000u )
  {
    v5 = 0x4000;
    v4 = index;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 366, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( sizeof( *array_counter( s_transientAssetEntries ) ) + 0 ) )", "index doesn't index ARRAY_COUNT( s_transientAssetEntries )\n\t%i not in [0, %i)", v4, v5) )
      __debugbreak();
  }
  v2 = &s_transientAssetEntries[index];
  if ( (*(_BYTE *)&v2->TransientEntryBase & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 369, ASSERT_TYPE_ASSERT, "(asset->inUse)", (const char *)&queryFormat, "asset->inUse") )
    __debugbreak();
  return v2;
}

/*
==============
CL_TransientsMP_GetAssetFastfileName
==============
*/
const char *CL_TransientsMP_GetAssetFastfileName(const char *name, const XAssetType type)
{
  const char *filename; 
  unsigned __int8 v5; 
  int i; 
  unsigned __int16 AssetIndexByHash; 
  TransientFile *FileByIndex; 
  __int64 v10; 

  if ( s_shutdownLock.writeThreadId == Sys_GetCurrentThreadId() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 62, ASSERT_TYPE_ASSERT, "( critSect->writeThreadId != Sys_GetCurrentThreadId() )", "This is a non-recursive lock! Don't attempt to take a read lock if the calling thread already has the write lock or this will loop infinitely.") )
    __debugbreak();
  if ( ((unsigned __int8)&s_shutdownLock & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &s_shutdownLock) )
    __debugbreak();
  _InterlockedIncrement((volatile signed __int32 *)&s_shutdownLock);
  while ( s_shutdownLock.writeCount )
    Sys_Sleep(0);
  if ( type == ASSET_TYPE_XMODEL )
  {
    v5 = *name;
    for ( i = 0; *name; v5 = *name )
    {
      ++name;
      i = v5 ^ (16777619 * i);
    }
    AssetIndexByHash = CL_TransientsMP_FindAssetIndexByHash(i ^ 9u);
    filename = NULL;
    if ( AssetIndexByHash != 0xFFFF )
    {
      if ( AssetIndexByHash >= 0x4000u )
      {
        LODWORD(v10) = AssetIndexByHash;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 3604, ASSERT_TYPE_ASSERT, "(unsigned)( assetIndex ) < (unsigned)( ( sizeof( *array_counter( s_transientAssetEntries ) ) + 0 ) )", "assetIndex doesn't index ARRAY_COUNT( s_transientAssetEntries )\n\t%i not in [0, %i)", v10, 0x4000) )
          __debugbreak();
      }
      FileByIndex = CL_TransientsMP_GetFileByIndex(s_transientAssetEntries[AssetIndexByHash].fileIndex);
      if ( !FileByIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 3606, ASSERT_TYPE_ASSERT, "(transFile)", (const char *)&queryFormat, "transFile") )
        __debugbreak();
      filename = FileByIndex->filename;
    }
  }
  else
  {
    filename = NULL;
  }
  if ( s_shutdownLock.readCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 90, ASSERT_TYPE_ASSERT, "( critSect->readCount ) > ( 0 )", "%s > %s\n\t%i, %i", "critSect->readCount", "0", s_shutdownLock.readCount, 0i64) )
    __debugbreak();
  if ( ((unsigned __int64)&s_shutdownLock & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &s_shutdownLock) )
    __debugbreak();
  _InterlockedDecrement((volatile signed __int32 *)&s_shutdownLock);
  return filename;
}

/*
==============
CL_TransientsMP_GetAssetName
==============
*/
const char *CL_TransientsMP_GetAssetName(const unsigned __int16 assetIndex)
{
  TransientAssetEntry *AssetByIndex; 
  const char *assetName; 
  __int64 v5; 

  if ( assetIndex == 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 2993, ASSERT_TYPE_ASSERT, "( assetIndex ) != ( UNUSED_ASSET )", "%s != %s\n\t%i, %i", "assetIndex", "UNUSED_ASSET", 0xFFFF, 0xFFFF) )
    __debugbreak();
  if ( s_shutdownLock.writeThreadId == Sys_GetCurrentThreadId() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 62, ASSERT_TYPE_ASSERT, "( critSect->writeThreadId != Sys_GetCurrentThreadId() )", "This is a non-recursive lock! Don't attempt to take a read lock if the calling thread already has the write lock or this will loop infinitely.") )
    __debugbreak();
  if ( ((unsigned __int8)&s_shutdownLock & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &s_shutdownLock) )
    __debugbreak();
  _InterlockedIncrement((volatile signed __int32 *)&s_shutdownLock);
  while ( s_shutdownLock.writeCount )
    Sys_Sleep(0);
  AssetByIndex = CL_TransientsMP_GetAssetByIndex(assetIndex);
  if ( !AssetByIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 2998, ASSERT_TYPE_ASSERT, "( ( asset != nullptr ) )", "( asset ) = %p", NULL) )
    __debugbreak();
  assetName = AssetByIndex->assetName;
  if ( s_shutdownLock.readCount <= 0 )
  {
    LODWORD(v5) = s_shutdownLock.readCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 90, ASSERT_TYPE_ASSERT, "( critSect->readCount ) > ( 0 )", "%s > %s\n\t%i, %i", "critSect->readCount", "0", v5, 0i64) )
      __debugbreak();
  }
  if ( ((unsigned __int64)&s_shutdownLock & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &s_shutdownLock) )
    __debugbreak();
  _InterlockedDecrement((volatile signed __int32 *)&s_shutdownLock);
  return assetName;
}

/*
==============
CL_TransientsMP_GetAssetsForFileIndex
==============
*/
__int64 CL_TransientsMP_GetAssetsForFileIndex(const unsigned __int16 fileIndex)
{
  TransientFile *FileByIndex; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 2942, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( fileIndex == 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 2944, ASSERT_TYPE_ASSERT, "(fileIndex != UNUSED_FILE)", (const char *)&queryFormat, "fileIndex != UNUSED_FILE") )
    __debugbreak();
  FileByIndex = CL_TransientsMP_GetFileByIndex(fileIndex);
  if ( FileByIndex )
    return FileByIndex->assets;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 2947, ASSERT_TYPE_ASSERT, "(file)", (const char *)&queryFormat, "file") )
    __debugbreak();
  return MEMORY[0x14];
}

/*
==============
CL_TransientsMP_GetFileByIndex
==============
*/
TransientFile *CL_TransientsMP_GetFileByIndex(const unsigned __int16 index)
{
  bool v2; 
  TransientFile *v3; 
  int v5; 
  int v6; 

  if ( index >= 0x280Du )
  {
    v6 = 10253;
    v5 = index;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 335, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( sizeof( *array_counter( s_transientFiles ) ) + 0 ) )", "index doesn't index ARRAY_COUNT( s_transientFiles )\n\t%i not in [0, %i)", v5, v6) )
      __debugbreak();
  }
  v2 = (*(_BYTE *)&s_transientFiles[index].TransientEntryBase & 1) == 0;
  v3 = &s_transientFiles[index];
  if ( v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 338, ASSERT_TYPE_ASSERT, "(file->inUse)", (const char *)&queryFormat, "file->inUse") )
    __debugbreak();
  return v3;
}

/*
==============
CL_TransientsMP_GetFileIndexForAssetIndex
==============
*/
__int64 CL_TransientsMP_GetFileIndexForAssetIndex(const unsigned __int16 assetIndex)
{
  TransientAssetEntry *AssetByIndex; 
  unsigned __int16 fileIndex; 
  __int64 v5; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 2955, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( s_shutdownLock.writeThreadId == Sys_GetCurrentThreadId() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 62, ASSERT_TYPE_ASSERT, "( critSect->writeThreadId != Sys_GetCurrentThreadId() )", "This is a non-recursive lock! Don't attempt to take a read lock if the calling thread already has the write lock or this will loop infinitely.") )
    __debugbreak();
  if ( ((unsigned __int8)&s_shutdownLock & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &s_shutdownLock) )
    __debugbreak();
  _InterlockedIncrement((volatile signed __int32 *)&s_shutdownLock);
  while ( s_shutdownLock.writeCount )
    Sys_Sleep(0);
  if ( assetIndex == 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 2959, ASSERT_TYPE_ASSERT, "( assetIndex ) != ( UNUSED_ASSET )", "%s != %s\n\t%i, %i", "assetIndex", "UNUSED_ASSET", 0xFFFF, 0xFFFF) )
    __debugbreak();
  AssetByIndex = CL_TransientsMP_GetAssetByIndex(assetIndex);
  if ( !AssetByIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 2962, ASSERT_TYPE_ASSERT, "( ( asset != nullptr ) )", "( asset ) = %p", NULL) )
    __debugbreak();
  fileIndex = AssetByIndex->fileIndex;
  if ( s_shutdownLock.readCount <= 0 )
  {
    LODWORD(v5) = s_shutdownLock.readCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 90, ASSERT_TYPE_ASSERT, "( critSect->readCount ) > ( 0 )", "%s > %s\n\t%i, %i", "critSect->readCount", "0", v5, 0i64) )
      __debugbreak();
  }
  if ( ((unsigned __int64)&s_shutdownLock & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &s_shutdownLock) )
    __debugbreak();
  _InterlockedDecrement((volatile signed __int32 *)&s_shutdownLock);
  return fileIndex;
}

/*
==============
CL_TransientsMP_GetFileIndexForFileName
==============
*/
__int64 CL_TransientsMP_GetFileIndexForFileName(const char *filename)
{
  unsigned __int8 v2; 
  int v3; 
  const char *v4; 
  unsigned __int16 FileIndexByHash; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 2974, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( !filename && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 2975, ASSERT_TYPE_ASSERT, "(filename)", (const char *)&queryFormat, "filename") )
    __debugbreak();
  v2 = *filename;
  v3 = 0;
  v4 = filename;
  if ( !*filename )
    goto LABEL_32;
  do
  {
    ++v4;
    v3 = v2 ^ (16777619 * v3);
    v2 = *v4;
  }
  while ( *v4 );
  if ( !v3 )
  {
LABEL_32:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 2978, ASSERT_TYPE_ASSERT, "(fileHash != 0)", (const char *)&queryFormat, "fileHash != 0") )
      __debugbreak();
  }
  if ( s_shutdownLock.writeThreadId == Sys_GetCurrentThreadId() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 62, ASSERT_TYPE_ASSERT, "( critSect->writeThreadId != Sys_GetCurrentThreadId() )", "This is a non-recursive lock! Don't attempt to take a read lock if the calling thread already has the write lock or this will loop infinitely.") )
    __debugbreak();
  if ( ((unsigned __int8)&s_shutdownLock & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &s_shutdownLock) )
    __debugbreak();
  _InterlockedIncrement((volatile signed __int32 *)&s_shutdownLock);
  while ( s_shutdownLock.writeCount )
    Sys_Sleep(0);
  FileIndexByHash = CL_TransientsMP_FindFileIndexByHash(v3);
  if ( FileIndexByHash == 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 2983, ASSERT_TYPE_ASSERT, "( ( fileIndex != UNUSED_FILE ) )", "( filename ) = %s", filename) )
    __debugbreak();
  if ( s_shutdownLock.readCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 90, ASSERT_TYPE_ASSERT, "( critSect->readCount ) > ( 0 )", "%s > %s\n\t%i, %i", "critSect->readCount", "0", s_shutdownLock.readCount, 0i64) )
    __debugbreak();
  if ( ((unsigned __int64)&s_shutdownLock & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &s_shutdownLock) )
    __debugbreak();
  _InterlockedDecrement((volatile signed __int32 *)&s_shutdownLock);
  return FileIndexByHash;
}

/*
==============
CL_TransientsMP_GetFileName
==============
*/
const char *CL_TransientsMP_GetFileName(const unsigned __int16 fileIndex)
{
  TransientFile *FileByIndex; 
  const char *filename; 
  __int64 v5; 

  if ( fileIndex == 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 3010, ASSERT_TYPE_ASSERT, "( fileIndex ) != ( UNUSED_FILE )", "%s != %s\n\t%i, %i", "fileIndex", "UNUSED_FILE", 0xFFFF, 0xFFFF) )
    __debugbreak();
  if ( s_shutdownLock.writeThreadId == Sys_GetCurrentThreadId() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 62, ASSERT_TYPE_ASSERT, "( critSect->writeThreadId != Sys_GetCurrentThreadId() )", "This is a non-recursive lock! Don't attempt to take a read lock if the calling thread already has the write lock or this will loop infinitely.") )
    __debugbreak();
  if ( ((unsigned __int8)&s_shutdownLock & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &s_shutdownLock) )
    __debugbreak();
  _InterlockedIncrement((volatile signed __int32 *)&s_shutdownLock);
  while ( s_shutdownLock.writeCount )
    Sys_Sleep(0);
  FileByIndex = CL_TransientsMP_GetFileByIndex(fileIndex);
  if ( !FileByIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 3015, ASSERT_TYPE_ASSERT, "( ( file != nullptr ) )", "( file ) = %p", NULL) )
    __debugbreak();
  filename = FileByIndex->filename;
  if ( s_shutdownLock.readCount <= 0 )
  {
    LODWORD(v5) = s_shutdownLock.readCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 90, ASSERT_TYPE_ASSERT, "( critSect->readCount ) > ( 0 )", "%s > %s\n\t%i, %i", "critSect->readCount", "0", v5, 0i64) )
      __debugbreak();
  }
  if ( ((unsigned __int64)&s_shutdownLock & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &s_shutdownLock) )
    __debugbreak();
  _InterlockedDecrement((volatile signed __int32 *)&s_shutdownLock);
  return filename;
}

/*
==============
CL_TransientsMP_GetRemainingLoadCountAbovePriority
==============
*/
__int64 CL_TransientsMP_GetRemainingLoadCountAbovePriority(unsigned int priority)
{
  unsigned int v1; 
  unsigned __int64 v3; 
  unsigned int v4; 
  int v5; 
  TransientFile *file; 
  unsigned int v7; 

  v1 = 0;
  if ( s_shutdownLock.writeThreadId == Sys_GetCurrentThreadId() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 62, ASSERT_TYPE_ASSERT, "( critSect->writeThreadId != Sys_GetCurrentThreadId() )", "This is a non-recursive lock! Don't attempt to take a read lock if the calling thread already has the write lock or this will loop infinitely.") )
    __debugbreak();
  v3 = (unsigned __int64)&s_shutdownLock & 3;
  if ( ((unsigned __int8)&s_shutdownLock & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &s_shutdownLock) )
    __debugbreak();
  _InterlockedIncrement((volatile signed __int32 *)&s_shutdownLock);
  while ( s_shutdownLock.writeCount )
    Sys_Sleep(0);
  v4 = 0;
  if ( s_transientQueueSize )
  {
    v5 = 2566;
    do
    {
      file = s_transientQueue[v4].file;
      if ( !file && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 2913, ASSERT_TYPE_ASSERT, "(file)", (const char *)&queryFormat, "file") )
        __debugbreak();
      v7 = (unsigned __int8)file->state[0];
      if ( (unsigned __int8)v7 <= 0xBu && _bittest(&v5, v7) && s_transientQueue[v4].priority > priority )
        ++v1;
      ++v4;
    }
    while ( v4 < s_transientQueueSize );
    v3 = (unsigned __int64)&s_shutdownLock & 3;
  }
  if ( s_shutdownLock.readCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 90, ASSERT_TYPE_ASSERT, "( critSect->readCount ) > ( 0 )", "%s > %s\n\t%i, %i", "critSect->readCount", "0", s_shutdownLock.readCount, 0i64) )
    __debugbreak();
  if ( v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &s_shutdownLock) )
    __debugbreak();
  _InterlockedDecrement((volatile signed __int32 *)&s_shutdownLock);
  return v1;
}

/*
==============
CL_TransientsMP_GetTransientAssetIndexForXModel
==============
*/
__int64 CL_TransientsMP_GetTransientAssetIndexForXModel(const char *xmodelName)
{
  int v1; 
  const char *v2; 
  unsigned __int8 i; 
  __int64 result; 

  v1 = 0;
  v2 = xmodelName;
  if ( !xmodelName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 3055, ASSERT_TYPE_ASSERT, "( ( xmodelName != nullptr ) )", "( xmodelName ) = %p", NULL) )
    __debugbreak();
  for ( i = *v2; *v2; i = *v2 )
  {
    ++v2;
    v1 = i ^ (16777619 * v1);
  }
  result = CL_TransientsMP_FindAssetIndexByHash(v1 ^ 9u);
  if ( (_WORD)result != 0xFFFF && (*(_BYTE *)&s_transientAssetEntries[(unsigned __int16)result].TransientEntryBase & 2) != 0 )
    return 0xFFFFi64;
  return result;
}

/*
==============
CL_TransientsMP_GetTransientAssetIndices
==============
*/
__int64 CL_TransientsMP_GetTransientAssetIndices(const char *const *names, const unsigned int nameCount, const XAssetType type, unsigned __int16 *outAssetIndices)
{
  __int64 v4; 
  const char *const *v7; 
  __int64 v8; 
  const char *v9; 
  int v10; 
  unsigned __int8 v11; 
  unsigned __int16 AssetIndexByHash; 

  v4 = nameCount;
  v7 = names;
  if ( !names && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 3029, ASSERT_TYPE_ASSERT, "(names)", (const char *)&queryFormat, "names") )
    __debugbreak();
  if ( !outAssetIndices && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 3030, ASSERT_TYPE_ASSERT, "(outAssetIndices)", (const char *)&queryFormat, "outAssetIndices") )
    __debugbreak();
  if ( s_shutdownLock.writeThreadId == Sys_GetCurrentThreadId() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 62, ASSERT_TYPE_ASSERT, "( critSect->writeThreadId != Sys_GetCurrentThreadId() )", "This is a non-recursive lock! Don't attempt to take a read lock if the calling thread already has the write lock or this will loop infinitely.") )
    __debugbreak();
  if ( ((unsigned __int8)&s_shutdownLock & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &s_shutdownLock) )
    __debugbreak();
  _InterlockedIncrement((volatile signed __int32 *)&s_shutdownLock);
  while ( s_shutdownLock.writeCount )
    Sys_Sleep(0);
  v8 = 0i64;
  if ( (_DWORD)v4 )
  {
    do
    {
      if ( type == ASSET_TYPE_XMODEL )
      {
        v9 = *v7;
        v10 = 0;
        v11 = **(_BYTE **)v7;
        if ( v11 )
        {
          do
          {
            ++v9;
            v10 = v11 ^ (16777619 * v10);
            v11 = *v9;
          }
          while ( *v9 );
        }
        AssetIndexByHash = CL_TransientsMP_FindAssetIndexByHash(v10 ^ 9u);
        if ( AssetIndexByHash != 0xFFFF )
        {
          outAssetIndices[v8] = AssetIndexByHash;
          v8 = (unsigned int)(v8 + 1);
        }
      }
      ++v7;
      --v4;
    }
    while ( v4 );
  }
  if ( s_shutdownLock.readCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 90, ASSERT_TYPE_ASSERT, "( critSect->readCount ) > ( 0 )", "%s > %s\n\t%i, %i", "critSect->readCount", "0", s_shutdownLock.readCount, 0i64) )
    __debugbreak();
  if ( ((unsigned __int64)&s_shutdownLock & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &s_shutdownLock) )
    __debugbreak();
  _InterlockedDecrement((volatile signed __int32 *)&s_shutdownLock);
  return (unsigned int)v8;
}

/*
==============
CL_TransientsMP_GetTransientStats
==============
*/
void CL_TransientsMP_GetTransientStats(TransientDebugStats *outStats)
{
  int v1; 
  bool v2; 
  int v4; 
  TransientFile *file; 
  unsigned int v6; 
  TransientFileType v7; 
  unsigned int v8; 
  __int64 v9; 
  unsigned int priority; 

  v1 = 0;
  v2 = s_transientQueueSize == 0;
  *(_QWORD *)outStats->queuedCommon = 0i64;
  *(_QWORD *)&outStats->queuedCommon[2] = 0i64;
  *(_QWORD *)&outStats->queuedCommon[4] = 0i64;
  *(_QWORD *)&outStats->queuedCommon[6] = 0i64;
  *(_QWORD *)&outStats->queuedCommon[8] = 0i64;
  *(_QWORD *)&outStats->queuedCommon[10] = 0i64;
  *(_QWORD *)outStats->queuedWorldTiles = 0i64;
  *(_QWORD *)&outStats->queuedWorldTiles[2] = 0i64;
  outStats->queuedWorldTiles[4] = 0;
  if ( !v2 )
  {
    v4 = 2566;
    while ( 1 )
    {
      file = s_transientQueue[v1].file;
      if ( !file && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 3706, ASSERT_TYPE_ASSERT, "(file)", (const char *)&queryFormat, "file") )
        __debugbreak();
      v6 = (unsigned __int8)file->state[0];
      if ( (unsigned __int8)v6 > 0xBu || !_bittest(&v4, v6) )
        goto LABEL_42;
      v7 = (unsigned __int8)file->type[0];
      if ( (_BYTE)v7 == COUNT )
        break;
      if ( DB_TransientFileType_IsMPCommon(v7) )
      {
        priority = s_transientQueue[v1].priority;
        if ( priority < 0x1F39 )
        {
          if ( priority < 0x1B40 )
          {
            if ( priority < 0x1B3B )
            {
              if ( priority < 0x1B30 )
              {
                if ( priority < 0x1B2F )
                {
                  if ( priority < 0x1388 )
                  {
                    if ( priority < 0x1355 )
                    {
                      if ( priority < 0x1098 )
                      {
                        if ( priority < 0x1065 )
                        {
                          if ( priority < 0x8A2 )
                          {
                            v9 = 11i64;
                            if ( priority >= 0x8A1 )
                              v9 = 10i64;
                          }
                          else
                          {
                            v9 = 9i64;
                          }
                        }
                        else
                        {
                          v9 = 8i64;
                        }
                      }
                      else
                      {
                        v9 = 7i64;
                      }
                    }
                    else
                    {
                      v9 = 6i64;
                    }
                  }
                  else
                  {
                    v9 = 5i64;
                  }
                }
                else
                {
                  v9 = 4i64;
                }
              }
              else
              {
                v9 = 3i64;
              }
            }
            else
            {
              v9 = 2i64;
            }
          }
          else
          {
            v9 = 1i64;
          }
        }
        else
        {
          v9 = 0i64;
        }
        goto LABEL_41;
      }
LABEL_42:
      if ( ++v1 >= s_transientQueueSize )
        return;
    }
    v8 = s_transientQueue[v1].priority;
    if ( v8 < 0x175E )
    {
      if ( v8 < 0x1758 )
      {
        if ( v8 < 0xF82 )
        {
          v9 = 16i64;
          if ( v8 >= 0xB70 )
            v9 = 15i64;
        }
        else
        {
          v9 = 14i64;
        }
      }
      else
      {
        v9 = 13i64;
      }
    }
    else
    {
      v9 = 12i64;
    }
LABEL_41:
    ++outStats->queuedCommon[v9];
    goto LABEL_42;
  }
}

/*
==============
CL_TransientsMP_GetYieldTimeProgress
==============
*/
__int64 CL_TransientsMP_GetYieldTimeProgress()
{
  return (unsigned int)(Sys_Milliseconds() - s_transientYieldTime);
}

/*
==============
CL_TransientsMP_GetYieldTimeout
==============
*/

int __fastcall CL_TransientsMP_GetYieldTimeout(double _XMM0_8)
{
  const dvar_t *v1; 
  float v2; 
  float value; 
  char v5; 
  LocalClientNum_t i; 
  const dvar_t *v7; 
  const dvar_t *v8; 
  const dvar_t *v10; 
  float v11; 
  const dvar_t *v12; 
  float v13; 
  int v14; 
  const dvar_t *v15; 
  float v16; 
  float v17; 
  const dvar_t *v18; 
  float v19; 
  int integer; 
  const dvar_t *v21; 

  _XMM0_8 = CL_StreamViews_GetMaxLocalClientVelocity();
  v1 = DVARFLT_cl_transient_mp_yield_mid_velocity;
  v2 = *(float *)&_XMM0_8;
  if ( !DVARFLT_cl_transient_mp_yield_mid_velocity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_transient_mp_yield_mid_velocity") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  value = v1->current.value;
  if ( value < 0.0 )
  {
    __asm { vxorpd  xmm0, xmm0, xmm0 }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 1510, ASSERT_TYPE_ASSERT, "( midVelocity ) >= ( 0.0f )", "%s >= %s\n\t%g, %g", "midVelocity", "0.0f", value, *(double *)&_XMM0) )
      __debugbreak();
  }
  v5 = 0;
  for ( i = LOCAL_CLIENT_0; i < SLODWORD(cl_maxLocalClients); ++i )
    v5 |= CL_TransientsWorldMP_IsZoomLoadActive(i);
  v7 = DVARBOOL_cl_transient_mp_yield_for_streamer_zoom_enabled;
  if ( !DVARBOOL_cl_transient_mp_yield_for_streamer_zoom_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_transient_mp_yield_for_streamer_zoom_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  if ( v7->current.enabled && v5 )
  {
    v8 = DVARINT_cl_transient_mp_yield_timeout_zoom;
    if ( !DVARINT_cl_transient_mp_yield_timeout_zoom && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_transient_mp_yield_timeout_zoom") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v8);
    return v8->current.integer;
  }
  else
  {
    if ( v2 < value )
    {
      I_fclamp(v2 / value, 0.0, 1.0);
      v18 = DVARINT_cl_transient_mp_yield_timeout_at_min_velocity;
      v19 = v2 / value;
      if ( !DVARINT_cl_transient_mp_yield_timeout_at_min_velocity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_transient_mp_yield_timeout_at_min_velocity") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v18);
      integer = v18->current.integer;
      v21 = DVARINT_cl_transient_mp_yield_timeout_at_mid_velocity;
      if ( !DVARINT_cl_transient_mp_yield_timeout_at_mid_velocity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_transient_mp_yield_timeout_at_mid_velocity") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v21);
      v16 = (float)(1.0 - v19) * (float)integer;
      v17 = (float)v21->current.integer * v19;
    }
    else
    {
      v10 = DVARFLT_cl_transient_mp_yield_max_velocity;
      if ( !DVARFLT_cl_transient_mp_yield_max_velocity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_transient_mp_yield_max_velocity") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v10);
      v11 = v10->current.value;
      if ( v11 < value && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 1527, ASSERT_TYPE_ASSERT, "( maxVelocity ) >= ( midVelocity )", "%s >= %s\n\t%g, %g", "maxVelocity", "midVelocity", v11, value) )
        __debugbreak();
      I_fclamp((float)(v2 - value) / (float)(v11 - value), 0.0, 1.0);
      v12 = DVARINT_cl_transient_mp_yield_timeout_at_mid_velocity;
      v13 = (float)(v2 - value) / (float)(v11 - value);
      if ( !DVARINT_cl_transient_mp_yield_timeout_at_mid_velocity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_transient_mp_yield_timeout_at_mid_velocity") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v12);
      v14 = v12->current.integer;
      v15 = DVARINT_cl_transient_mp_yield_timeout_at_max_velocity;
      if ( !DVARINT_cl_transient_mp_yield_timeout_at_max_velocity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_transient_mp_yield_timeout_at_max_velocity") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v15);
      v16 = (float)(1.0 - v13) * (float)v14;
      v17 = (float)v15->current.integer * v13;
    }
    return float_to_integral_cast<int,float>(v16 + v17);
  }
}

/*
==============
CL_TransientsMP_HasLoadRequestsAtPriority
==============
*/
char CL_TransientsMP_HasLoadRequestsAtPriority(unsigned int priority)
{
  unsigned int v1; 
  TransientFile *file; 
  __int64 v5; 
  __int64 v6; 

  v1 = 0;
  if ( !s_transientQueueSize )
    return 0;
  while ( 1 )
  {
    if ( v1 >= 0x741 )
    {
      LODWORD(v6) = 1857;
      LODWORD(v5) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 1399, ASSERT_TYPE_ASSERT, "(unsigned)( transientQueueIndex ) < (unsigned)( ( sizeof( *array_counter( s_transientQueue ) ) + 0 ) )", "transientQueueIndex doesn't index ARRAY_COUNT( s_transientQueue )\n\t%i not in [0, %i)", v5, v6) )
        __debugbreak();
    }
    file = s_transientQueue[v1].file;
    if ( !file && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 1401, ASSERT_TYPE_ASSERT, "(file)", (const char *)&queryFormat, "file") )
      __debugbreak();
    if ( file->state[0] == 1 && s_transientQueue[v1].priority >= priority )
      break;
    if ( ++v1 >= s_transientQueueSize )
      return 0;
  }
  return 1;
}

/*
==============
CL_TransientsMP_HasPendingLoadsAbovePriority
==============
*/
__int64 CL_TransientsMP_HasPendingLoadsAbovePriority(unsigned int priority)
{
  unsigned __int8 v1; 
  int v3; 
  int v4; 
  TransientFile *file; 
  unsigned int v6; 

  v1 = 0;
  if ( s_shutdownLock.writeThreadId == Sys_GetCurrentThreadId() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 62, ASSERT_TYPE_ASSERT, "( critSect->writeThreadId != Sys_GetCurrentThreadId() )", "This is a non-recursive lock! Don't attempt to take a read lock if the calling thread already has the write lock or this will loop infinitely.") )
    __debugbreak();
  if ( ((unsigned __int8)&s_shutdownLock & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &s_shutdownLock) )
    __debugbreak();
  _InterlockedIncrement((volatile signed __int32 *)&s_shutdownLock);
  while ( s_shutdownLock.writeCount )
    Sys_Sleep(0);
  v3 = 0;
  if ( s_transientQueueSize )
  {
    v4 = 2566;
    while ( 1 )
    {
      file = s_transientQueue[v3].file;
      if ( !file && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 2874, ASSERT_TYPE_ASSERT, "(file)", (const char *)&queryFormat, "file") )
        __debugbreak();
      v6 = (unsigned __int8)file->state[0];
      if ( (unsigned __int8)v6 <= 0xBu && _bittest(&v4, v6) && s_transientQueue[v3].priority > priority )
        break;
      if ( ++v3 >= s_transientQueueSize )
        goto LABEL_20;
    }
    v1 = 1;
  }
LABEL_20:
  if ( s_shutdownLock.readCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 90, ASSERT_TYPE_ASSERT, "( critSect->readCount ) > ( 0 )", "%s > %s\n\t%i, %i", "critSect->readCount", "0", s_shutdownLock.readCount, 0i64) )
    __debugbreak();
  if ( ((unsigned __int64)&s_shutdownLock & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &s_shutdownLock) )
    __debugbreak();
  _InterlockedDecrement((volatile signed __int32 *)&s_shutdownLock);
  return v1;
}

/*
==============
CL_TransientsMP_Init
==============
*/
void CL_TransientsMP_Init(void)
{
  ntl::fixed_hash_map<unsigned int,unsigned short,16384,16411,ntl::hash<unsigned int>,ntl::equal_to<unsigned int> > *p_m_buckets; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *i; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *v2; 
  ntl::fixed_hash_map<unsigned int,unsigned short,10253,10391,ntl::hash<unsigned int>,ntl::equal_to<unsigned int> > *v3; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *j; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *v5; 

  memset_0(s_transientAssetEntries, 0, sizeof(s_transientAssetEntries));
  memset_0(s_transientFiles, 0, sizeof(s_transientFiles));
  p_m_buckets = (ntl::fixed_hash_map<unsigned int,unsigned short,16384,16411,ntl::hash<unsigned int>,ntl::equal_to<unsigned int> > *)&s_transientAssetHashMap.m_buckets;
  do
  {
    for ( i = *(ntl::internal::pool_allocator_pointer_freelist::free_item_pointer **)p_m_buckets->m_data.m_buffer; i != (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)p_m_buckets; s_transientAssetHashMap.m_freelist.m_head.mp_next = v2 )
    {
      if ( !i && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 72, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      v2 = i;
      if ( !i && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 93, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      i = i->mp_next;
      v2->mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)s_transientAssetHashMap.m_freelist.m_head;
    }
    *(_QWORD *)p_m_buckets->m_data.m_buffer = p_m_buckets;
    p_m_buckets = (ntl::fixed_hash_map<unsigned int,unsigned short,16384,16411,ntl::hash<unsigned int>,ntl::equal_to<unsigned int> > *)((char *)p_m_buckets + 8);
  }
  while ( p_m_buckets != (ntl::fixed_hash_map<unsigned int,unsigned short,16384,16411,ntl::hash<unsigned int>,ntl::equal_to<unsigned int> > *)&s_transientAssetHashMap.m_currentNumItems );
  s_transientAssetHashMap.m_currentNumItems = 0i64;
  v3 = (ntl::fixed_hash_map<unsigned int,unsigned short,10253,10391,ntl::hash<unsigned int>,ntl::equal_to<unsigned int> > *)&s_transientFileHashMap.m_buckets;
  do
  {
    for ( j = *(ntl::internal::pool_allocator_pointer_freelist::free_item_pointer **)v3->m_data.m_buffer; j != (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v3; s_transientFileHashMap.m_freelist.m_head.mp_next = v5 )
    {
      if ( !j && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 72, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      v5 = j;
      if ( !j && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 93, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      j = j->mp_next;
      v5->mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)s_transientFileHashMap.m_freelist.m_head;
    }
    *(_QWORD *)v3->m_data.m_buffer = v3;
    v3 = (ntl::fixed_hash_map<unsigned int,unsigned short,10253,10391,ntl::hash<unsigned int>,ntl::equal_to<unsigned int> > *)((char *)v3 + 8);
  }
  while ( v3 != (ntl::fixed_hash_map<unsigned int,unsigned short,10253,10391,ntl::hash<unsigned int>,ntl::equal_to<unsigned int> > *)&s_transientFileHashMap.m_currentNumItems );
  s_transientFileHashMap.m_currentNumItems = 0i64;
  CL_TransientsMP_Reset();
}

/*
==============
CL_TransientsMP_IsInHostMigration
==============
*/
char CL_TransientsMP_IsInHostMigration()
{
  unsigned int v0; 
  clientMigState_t *i; 
  __int64 v3; 
  __int64 v4; 

  v0 = 0;
  if ( SLODWORD(cl_maxLocalClients) <= 0 )
    return 0;
  for ( i = &clientUIActives[0].migrationState; ; i += 110 )
  {
    if ( v0 >= 2 )
    {
      LODWORD(v4) = 2;
      LODWORD(v3) = v0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\client_mp.h", 254, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v3, v4) )
        __debugbreak();
    }
    if ( *i )
      break;
    if ( (int)++v0 >= SLODWORD(cl_maxLocalClients) )
      return 0;
  }
  return 1;
}

/*
==============
CL_TransientsMP_IsLoadModeInFrontend
==============
*/
bool CL_TransientsMP_IsLoadModeInFrontend()
{
  return s_transientMPLoadMode == Frontend;
}

/*
==============
CL_TransientsMP_IsLoadedByFileIndex
==============
*/
bool CL_TransientsMP_IsLoadedByFileIndex(const unsigned __int16 fileIndex)
{
  __int64 v3; 
  int v4; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 3073, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( fileIndex >= 0x280Du )
  {
    v4 = 10253;
    LODWORD(v3) = fileIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 349, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( sizeof( *array_counter( s_transientFiles ) ) + 0 ) )", "index doesn't index ARRAY_COUNT( s_transientFiles )\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  return (*(_BYTE *)&s_transientFiles[fileIndex].TransientEntryBase & 1) != 0 && s_transientFiles[fileIndex].state[0] == 3;
}

/*
==============
CL_TransientsMP_IsRegisteredAsset
==============
*/
_BOOL8 CL_TransientsMP_IsRegisteredAsset(const char *name, const XAssetType type)
{
  __int16 AssetIndexByHash; 
  unsigned __int8 v5; 
  int i; 
  bool v7; 

  if ( s_shutdownLock.writeThreadId == Sys_GetCurrentThreadId() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 62, ASSERT_TYPE_ASSERT, "( critSect->writeThreadId != Sys_GetCurrentThreadId() )", "This is a non-recursive lock! Don't attempt to take a read lock if the calling thread already has the write lock or this will loop infinitely.") )
    __debugbreak();
  if ( ((unsigned __int8)&s_shutdownLock & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &s_shutdownLock) )
    __debugbreak();
  _InterlockedIncrement((volatile signed __int32 *)&s_shutdownLock);
  while ( s_shutdownLock.writeCount )
    Sys_Sleep(0);
  if ( type == ASSET_TYPE_XMODEL )
  {
    v5 = *name;
    for ( i = 0; *name; v5 = *name )
    {
      ++name;
      i = v5 ^ (16777619 * i);
    }
    AssetIndexByHash = CL_TransientsMP_FindAssetIndexByHash(i ^ 9u);
  }
  else
  {
    AssetIndexByHash = -1;
  }
  v7 = AssetIndexByHash != -1;
  if ( s_shutdownLock.readCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 90, ASSERT_TYPE_ASSERT, "( critSect->readCount ) > ( 0 )", "%s > %s\n\t%i, %i", "critSect->readCount", "0", s_shutdownLock.readCount, 0i64) )
    __debugbreak();
  if ( ((unsigned __int64)&s_shutdownLock & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &s_shutdownLock) )
    __debugbreak();
  _InterlockedDecrement((volatile signed __int32 *)&s_shutdownLock);
  return v7;
}

/*
==============
CL_TransientsMP_IsSystemIdle
==============
*/
bool CL_TransientsMP_IsSystemIdle()
{
  return s_transientSystemLoadState == IDLE || s_transientSystemLoadState == ERRORING;
}

/*
==============
CL_TransientsMP_IsTransientAsset
==============
*/
_BOOL8 CL_TransientsMP_IsTransientAsset(const char *name, const XAssetType type)
{
  bool v2; 
  const char *v4; 
  unsigned __int8 v5; 
  int i; 
  unsigned __int16 AssetIndexByHash; 

  v2 = 0;
  v4 = name;
  if ( name && *name )
  {
    if ( s_shutdownLock.writeThreadId == Sys_GetCurrentThreadId() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 62, ASSERT_TYPE_ASSERT, "( critSect->writeThreadId != Sys_GetCurrentThreadId() )", "This is a non-recursive lock! Don't attempt to take a read lock if the calling thread already has the write lock or this will loop infinitely.") )
      __debugbreak();
    if ( ((unsigned __int8)&s_shutdownLock & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &s_shutdownLock) )
      __debugbreak();
    _InterlockedIncrement((volatile signed __int32 *)&s_shutdownLock);
    while ( s_shutdownLock.writeCount )
      Sys_Sleep(0);
    if ( type == ASSET_TYPE_XMODEL )
    {
      v5 = *v4;
      for ( i = 0; *v4; v5 = *v4 )
      {
        ++v4;
        i = v5 ^ (16777619 * i);
      }
      AssetIndexByHash = CL_TransientsMP_FindAssetIndexByHash(i ^ 9u);
      if ( AssetIndexByHash != 0xFFFF )
        v2 = (*(_BYTE *)&s_transientAssetEntries[AssetIndexByHash].TransientEntryBase & 2) == 0;
    }
    if ( s_shutdownLock.readCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 90, ASSERT_TYPE_ASSERT, "( critSect->readCount ) > ( 0 )", "%s > %s\n\t%i, %i", "critSect->readCount", "0", s_shutdownLock.readCount, 0i64) )
      __debugbreak();
    if ( ((unsigned __int64)&s_shutdownLock & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &s_shutdownLock) )
      __debugbreak();
    _InterlockedDecrement((volatile signed __int32 *)&s_shutdownLock);
  }
  return v2;
}

/*
==============
CL_TransientsMP_IsTransientAssetIndex
==============
*/
_BOOL8 CL_TransientsMP_IsTransientAssetIndex(const unsigned __int16 assetIndex, const XAssetType type)
{
  bool v3; 
  __int64 v5; 

  if ( assetIndex == 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 3139, ASSERT_TYPE_ASSERT, "( assetIndex ) != ( UNUSED_ASSET )", "%s != %s\n\t%i, %i", "assetIndex", "UNUSED_ASSET", 0xFFFF, 0xFFFF) )
    __debugbreak();
  if ( s_shutdownLock.writeThreadId == Sys_GetCurrentThreadId() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 62, ASSERT_TYPE_ASSERT, "( critSect->writeThreadId != Sys_GetCurrentThreadId() )", "This is a non-recursive lock! Don't attempt to take a read lock if the calling thread already has the write lock or this will loop infinitely.") )
    __debugbreak();
  if ( ((unsigned __int8)&s_shutdownLock & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &s_shutdownLock) )
    __debugbreak();
  _InterlockedIncrement((volatile signed __int32 *)&s_shutdownLock);
  while ( s_shutdownLock.writeCount )
    Sys_Sleep(0);
  v3 = (*(_BYTE *)&s_transientAssetEntries[assetIndex].TransientEntryBase & 2) == 0;
  if ( s_shutdownLock.readCount <= 0 )
  {
    LODWORD(v5) = s_shutdownLock.readCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 90, ASSERT_TYPE_ASSERT, "( critSect->readCount ) > ( 0 )", "%s > %s\n\t%i, %i", "critSect->readCount", "0", v5, 0i64) )
      __debugbreak();
  }
  if ( ((unsigned __int64)&s_shutdownLock & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &s_shutdownLock) )
    __debugbreak();
  _InterlockedDecrement((volatile signed __int32 *)&s_shutdownLock);
  return v3;
}

/*
==============
CL_TransientsMP_IsXModelAssetIndexLoaded
==============
*/
__int64 CL_TransientsMP_IsXModelAssetIndexLoaded(const unsigned __int16 assetIndex)
{
  unsigned __int8 CanUseAssetIndexInternal; 
  volatile int readCount; 

  if ( !Sys_IsMainThread() && !Sys_IsMainThreadEntityWorker() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 2843, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread() || Sys_IsMainThreadEntityWorker())", (const char *)&queryFormat, "Sys_IsMainThread() || Sys_IsMainThreadEntityWorker()") )
    __debugbreak();
  if ( s_shutdownLock.writeThreadId == Sys_GetCurrentThreadId() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 62, ASSERT_TYPE_ASSERT, "( critSect->writeThreadId != Sys_GetCurrentThreadId() )", "This is a non-recursive lock! Don't attempt to take a read lock if the calling thread already has the write lock or this will loop infinitely.") )
    __debugbreak();
  if ( ((unsigned __int8)&s_shutdownLock & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &s_shutdownLock) )
    __debugbreak();
  _InterlockedIncrement((volatile signed __int32 *)&s_shutdownLock);
  while ( s_shutdownLock.writeCount )
    Sys_Sleep(0);
  CanUseAssetIndexInternal = CL_TransientsMP_CanUseAssetIndexInternal(assetIndex, ASSET_TYPE_XMODEL);
  if ( s_shutdownLock.readCount <= 0 )
  {
    readCount = s_shutdownLock.readCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 90, ASSERT_TYPE_ASSERT, "( critSect->readCount ) > ( 0 )", "%s > %s\n\t%i, %i", "critSect->readCount", "0", readCount, 0i64) )
      __debugbreak();
  }
  if ( ((unsigned __int64)&s_shutdownLock & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &s_shutdownLock) )
    __debugbreak();
  _InterlockedDecrement((volatile signed __int32 *)&s_shutdownLock);
  return CanUseAssetIndexInternal;
}

/*
==============
CL_TransientsMP_IsXModelLoaded
==============
*/
bool CL_TransientsMP_IsXModelLoaded(const XModel *xmodel)
{
  if ( !Sys_IsMainThread() && !Sys_IsMainThreadEntityWorker() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 2825, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread() || Sys_IsMainThreadEntityWorker())", (const char *)&queryFormat, "Sys_IsMainThread() || Sys_IsMainThreadEntityWorker()") )
    __debugbreak();
  if ( !xmodel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 2826, ASSERT_TYPE_ASSERT, "(xmodel)", (const char *)&queryFormat, "xmodel") )
    __debugbreak();
  return CL_TransientsMP_CanUseAsset(xmodel->name, ASSET_TYPE_XMODEL);
}

/*
==============
CL_TransientsMP_IsXModelNameLoaded
==============
*/
bool CL_TransientsMP_IsXModelNameLoaded(const char *xmodelName)
{
  if ( !Sys_IsMainThread() && !Sys_IsMainThreadEntityWorker() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 2834, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread() || Sys_IsMainThreadEntityWorker())", (const char *)&queryFormat, "Sys_IsMainThread() || Sys_IsMainThreadEntityWorker()") )
    __debugbreak();
  if ( !xmodelName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 2835, ASSERT_TYPE_ASSERT, "(xmodelName)", (const char *)&queryFormat, "xmodelName") )
    __debugbreak();
  return CL_TransientsMP_CanUseAsset(xmodelName, ASSET_TYPE_XMODEL);
}

/*
==============
CL_TransientsMP_IsYielding
==============
*/
bool CL_TransientsMP_IsYielding()
{
  if ( (unsigned int)(s_transientSystemLoadState - 2) <= 1 )
    return s_transientSystemPostUnloadState == ERRORING;
  else
    return s_transientSystemLoadState == ERRORING;
}

/*
==============
CL_TransientsMP_LimitFileCount
==============
*/
__int64 CL_TransientsMP_LimitFileCount(const unsigned int *const queueIndex, const unsigned int fileCount)
{
  bool v4; 
  unsigned int unsignedInt; 
  const dvar_t *v7; 
  const char *v8; 
  unsigned __int64 v9; 
  unsigned int v10; 
  __int64 v11; 
  __int64 v12; 
  TransientFile *file; 
  unsigned __int8 zoneFlagShifted; 
  int v15; 
  bool v16; 
  const dvar_t *v17; 
  __int64 v18; 
  __int64 v19; 
  __int64 v20; 
  __int64 v21; 
  char v22; 
  bool IsBRMode; 
  bool IsActive; 
  bool v25; 
  char v26; 

  v4 = Com_FrontEnd_IsInFrontEnd();
  v25 = v4;
  IsActive = Com_GameStart_IsActive();
  if ( !IsActive )
  {
    if ( v4 )
    {
      v7 = DCONST_DVARINT_cl_transient_max_load_zones_fe;
      if ( !DCONST_DVARINT_cl_transient_max_load_zones_fe )
      {
        v8 = "cl_transient_max_load_zones_fe";
        goto LABEL_10;
      }
    }
    else
    {
      v7 = DCONST_DVARINT_cl_transient_max_load_zones;
      if ( !DCONST_DVARINT_cl_transient_max_load_zones )
      {
        v8 = "cl_transient_max_load_zones";
LABEL_10:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v8) )
          __debugbreak();
      }
    }
    Dvar_CheckFrontendServerThread(v7);
    unsignedInt = v7->current.unsignedInt;
    goto LABEL_13;
  }
  if ( !Stream_LoadSync_AllowMPTransientLoads() )
    return 0i64;
  unsignedInt = 1857;
LABEL_13:
  if ( unsignedInt > fileCount )
    unsignedInt = fileCount;
  v9 = 0i64;
  v22 = 0;
  v26 = 0;
  IsBRMode = CL_TransientsWorldMP_IsBRMode();
  v10 = 0;
  if ( !unsignedInt )
    return unsignedInt;
  while ( 1 )
  {
    if ( v10 >= fileCount )
    {
      LODWORD(v19) = fileCount;
      LODWORD(v18) = v10;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 1121, ASSERT_TYPE_ASSERT, "(unsigned)( i ) < (unsigned)( fileCount )", "i doesn't index fileCount\n\t%i not in [0, %i)", v18, v19) )
        __debugbreak();
    }
    v11 = *queueIndex;
    if ( (unsigned int)v11 >= s_transientQueueSize )
    {
      LODWORD(v19) = s_transientQueueSize;
      LODWORD(v18) = *queueIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 1124, ASSERT_TYPE_ASSERT, "(unsigned)( transientQueueIndex ) < (unsigned)( s_transientQueueSize )", "transientQueueIndex doesn't index s_transientQueueSize\n\t%i not in [0, %i)", v18, v19) )
        __debugbreak();
    }
    v12 = v11;
    file = s_transientQueue[v11].file;
    if ( !file && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 1126, ASSERT_TYPE_ASSERT, "(file)", (const char *)&queryFormat, "file") )
      __debugbreak();
    zoneFlagShifted = file->zoneFlagShifted;
    if ( zoneFlagShifted > 0x1Fu )
    {
      LODWORD(v21) = 31;
      LODWORD(v20) = zoneFlagShifted;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 288, ASSERT_TYPE_ASSERT, "( shiftedFlags ) <= ( 31 )", "%s <= %s\n\t%u, %u", "shiftedFlags", "31", v20, v21) )
        __debugbreak();
    }
    v15 = 1 << zoneFlagShifted;
    if ( 1 << zoneFlagShifted == 0x8000 || v15 == 0x10000 || v15 == 0x20000 || v15 == 0x40000 )
    {
      if ( v26 )
        return v10;
      v22 = 1;
    }
    else
    {
      if ( v22 )
        return v10;
      v26 = 1;
    }
    v16 = s_transientQueue[v12].priority > 0xBB9;
    if ( IsBRMode && file->type[0] == 2 && v25 )
      v16 = 1;
    v9 += (unsigned __int64)file->fileCostMul64k << 16;
    if ( (!IsActive || !v16) && (!v25 || !v16 || (unsigned __int8)(file->type[0] - 2) > 3u) )
    {
      v17 = DCONST_DVARINT_cl_transient_mp_cost_threshold;
      if ( !DCONST_DVARINT_cl_transient_mp_cost_threshold && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_transient_mp_cost_threshold") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v17);
      if ( v9 > v17->current.integer )
        break;
    }
    ++v10;
    ++queueIndex;
    if ( v10 >= unsignedInt )
      return unsignedInt;
  }
  if ( (int)v10 < 1 )
    return 1;
  return v10;
}

/*
==============
CL_TransientsMP_LoadAssetIndexInternal
==============
*/
void CL_TransientsMP_LoadAssetIndexInternal(const unsigned __int16 assetIndex, const unsigned int priority)
{
  const char *AssetName; 
  TransientAssetEntry *AssetByIndex; 
  TransientFile *FileByIndex; 
  bool v7; 
  unsigned __int8 referenceCount; 

  if ( assetIndex == 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 2543, ASSERT_TYPE_ASSERT, "(assetIndex != UNUSED_ASSET)", (const char *)&queryFormat, "assetIndex != UNUSED_ASSET") )
    __debugbreak();
  AssetName = CL_TransientsMP_GetAssetName(assetIndex);
  if ( !AssetName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 2547, ASSERT_TYPE_ASSERT, "( ( assetName != nullptr ) )", "( assetName ) = %p", NULL) )
    __debugbreak();
  AssetByIndex = CL_TransientsMP_GetAssetByIndex(assetIndex);
  if ( !AssetByIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 2551, ASSERT_TYPE_ASSERT, "(asset)", (const char *)&queryFormat, "asset") )
    __debugbreak();
  FileByIndex = CL_TransientsMP_GetFileByIndex(AssetByIndex->fileIndex);
  if ( !FileByIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 2554, ASSERT_TYPE_ASSERT, "(file)", (const char *)&queryFormat, "file") )
    __debugbreak();
  if ( AssetByIndex->referenceCount == 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 2556, ASSERT_TYPE_ASSERT, "(asset->referenceCount < 0xffui8)", (const char *)&queryFormat, "asset->referenceCount < UINT8_MAX") )
    __debugbreak();
  v7 = (*(_BYTE *)&AssetByIndex->TransientEntryBase & 8) == 0;
  referenceCount = AssetByIndex->referenceCount;
  AssetByIndex->referenceCount = referenceCount + 1;
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 2562, ASSERT_TYPE_ASSERT, "( !asset->overrideNeedsUnload )", "Trying to load '%s', when we've just overridden it and wanted to unload it.", AssetName) )
    __debugbreak();
  if ( (*(_BYTE *)&AssetByIndex->TransientEntryBase & 2) != 0 )
  {
    if ( (*(_BYTE *)&AssetByIndex->TransientEntryBase & 4) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 2566, ASSERT_TYPE_ASSERT, "(!asset->overrideNeedsReload)", (const char *)&queryFormat, "!asset->overrideNeedsReload") )
      __debugbreak();
    CL_TransientMP_StatusPrint("CL_TransientsMP_LoadAssetIndexInternal() '%s' was overridden by an upstream fastfile, no need to load it.\n", AssetName);
  }
  else
  {
    CL_TransientsMP_LoadFileInternal(FileByIndex, priority);
    if ( !referenceCount && (*(_BYTE *)&AssetByIndex->TransientEntryBase & 4) != 0 )
    {
      if ( (*(_BYTE *)&AssetByIndex->TransientEntryBase & 2) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 2578, ASSERT_TYPE_ASSERT, "(!asset->isOverridden)", (const char *)&queryFormat, "!asset->isOverridden") )
        __debugbreak();
      *(_BYTE *)&AssetByIndex->TransientEntryBase &= ~4u;
    }
  }
}

/*
==============
CL_TransientsMP_LoadByAssetIndex
==============
*/
void CL_TransientsMP_LoadByAssetIndex(const unsigned __int16 assetIndex, const unsigned int priority)
{
  __int64 v4; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 2693, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  CL_TransientsMP_LockTransientState(v4);
  if ( assetIndex == 0xFFFF )
    CL_TransientMP_StatusPrint("CL_TransientsMP_LoadByXModel() asset %d is not a transient model, no need to load it.\n", 0xFFFFi64);
  else
    CL_TransientsMP_LoadAssetIndexInternal(assetIndex, priority);
  if ( !Sys_IsMainThread() && !Sys_IsDatabaseThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 281, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread() || Sys_IsDatabaseThread())", (const char *)&queryFormat, "Sys_IsMainThread() || Sys_IsDatabaseThread()") )
    __debugbreak();
  Sys_UnlockWrite(&s_transientStateLock);
}

/*
==============
CL_TransientsMP_LoadByFile
==============
*/
void CL_TransientsMP_LoadByFile(const char *filename, const unsigned int priority)
{
  __int64 v4; 
  unsigned __int8 v5; 
  int v6; 
  const char *v7; 
  unsigned __int16 FileIndexByHash; 
  TransientFile *FileByIndex; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 2634, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( !filename && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 2635, ASSERT_TYPE_ASSERT, "(filename)", (const char *)&queryFormat, "filename") )
    __debugbreak();
  CL_TransientsMP_LockTransientState(v4);
  v5 = *filename;
  v6 = 0;
  v7 = filename;
  if ( !*filename )
    goto LABEL_25;
  do
  {
    ++v7;
    v6 = v5 ^ (16777619 * v6);
    v5 = *v7;
  }
  while ( *v7 );
  if ( !v6 )
  {
LABEL_25:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 2640, ASSERT_TYPE_ASSERT, "(fileHash != 0)", (const char *)&queryFormat, "fileHash != 0") )
      __debugbreak();
  }
  FileIndexByHash = CL_TransientsMP_FindFileIndexByHash(v6);
  if ( FileIndexByHash == 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 2643, ASSERT_TYPE_ASSERT, "( ( fileIndex != UNUSED_FILE ) )", "( filename ) = %s", filename) )
    __debugbreak();
  FileByIndex = CL_TransientsMP_GetFileByIndex(FileIndexByHash);
  if ( !FileByIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 2646, ASSERT_TYPE_ASSERT, "(file)", (const char *)&queryFormat, "file") )
    __debugbreak();
  CL_TransientsMP_LoadFileInternal(FileByIndex, priority);
  if ( !Sys_IsMainThread() && !Sys_IsDatabaseThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 281, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread() || Sys_IsDatabaseThread())", (const char *)&queryFormat, "Sys_IsMainThread() || Sys_IsDatabaseThread()") )
    __debugbreak();
  Sys_UnlockWrite(&s_transientStateLock);
}

/*
==============
CL_TransientsMP_LoadByFileIndex
==============
*/
void CL_TransientsMP_LoadByFileIndex(unsigned __int16 fileIndex, unsigned int priority)
{
  __int64 v4; 
  TransientFile *FileByIndex; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 2656, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  CL_TransientsMP_LockTransientState(v4);
  FileByIndex = CL_TransientsMP_GetFileByIndex(fileIndex);
  if ( !FileByIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 2661, ASSERT_TYPE_ASSERT, "(file)", (const char *)&queryFormat, "file") )
    __debugbreak();
  CL_TransientsMP_LoadFileInternal(FileByIndex, priority);
  if ( !Sys_IsMainThread() && !Sys_IsDatabaseThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 281, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread() || Sys_IsDatabaseThread())", (const char *)&queryFormat, "Sys_IsMainThread() || Sys_IsDatabaseThread()") )
    __debugbreak();
  Sys_UnlockWrite(&s_transientStateLock);
}

/*
==============
CL_TransientsMP_LoadByXModel
==============
*/
void CL_TransientsMP_LoadByXModel(const char *xmodelName, const unsigned int priority)
{
  __int64 v4; 
  unsigned __int8 v5; 
  int v6; 
  const char *i; 
  unsigned __int16 AssetIndexByHash; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 2671, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( !xmodelName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 2672, ASSERT_TYPE_ASSERT, "(xmodelName)", (const char *)&queryFormat, "xmodelName") )
    __debugbreak();
  CL_TransientsMP_LockTransientState(v4);
  v5 = *xmodelName;
  v6 = 0;
  for ( i = xmodelName; *i; v5 = *i )
  {
    ++i;
    v6 = v5 ^ (16777619 * v6);
  }
  AssetIndexByHash = CL_TransientsMP_FindAssetIndexByHash(v6 ^ 9u);
  if ( AssetIndexByHash == 0xFFFF )
    CL_TransientMP_StatusPrint("CL_TransientsMP_LoadByXModel() '%s' is not a transient model, no need to load it.\n", xmodelName);
  else
    CL_TransientsMP_LoadAssetIndexInternal(AssetIndexByHash, priority);
  if ( !Sys_IsMainThread() && !Sys_IsDatabaseThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 281, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread() || Sys_IsDatabaseThread())", (const char *)&queryFormat, "Sys_IsMainThread() || Sys_IsDatabaseThread()") )
    __debugbreak();
  Sys_UnlockWrite(&s_transientStateLock);
}

/*
==============
CL_TransientsMP_LoadFileInternal
==============
*/
void CL_TransientsMP_LoadFileInternal(TransientFile *const file, const unsigned int priority)
{
  DB_FastfileState v4; 
  DB_FastfileState v5; 
  bool v6; 
  DB_FastfileState v7; 
  const char *v8; 
  int v9; 
  const char *fmt; 
  const char *filename; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 2450, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( !file && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 2451, ASSERT_TYPE_ASSERT, "(file)", (const char *)&queryFormat, "file") )
    __debugbreak();
  if ( file->referenceCount == 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 2453, ASSERT_TYPE_ASSERT, "(file->referenceCount < 0xffui8)", (const char *)&queryFormat, "file->referenceCount < UINT8_MAX") )
    __debugbreak();
  ++file->referenceCount;
  switch ( file->state[0] )
  {
    case 0:
      v7 = DB_PollFastfileState(file->filename);
      if ( v7 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 2491, ASSERT_TYPE_ASSERT, "( (ffState == DB_FastfileState::NOT_LOADED) )", "EMPTY: Expected NOT_LOADED state for '%s', but got %d instead\n", file->filename, v7) )
          __debugbreak();
      }
      file->state[0] = 1;
      CL_TransientsMP_AddToQueue(file, priority);
      return;
    case 1:
      v5 = DB_PollFastfileState(file->filename);
      if ( v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 2481, ASSERT_TYPE_ASSERT, "( (ffState == DB_FastfileState::NOT_LOADED) )", "QUEUED_FOR_LOAD: Expected NOT_LOADED state for '%s', but got %d instead\n", file->filename, v5) )
        __debugbreak();
      if ( !CL_TransientsMP_UpdatePriority(file, priority) )
      {
        v6 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 2484, ASSERT_TYPE_ASSERT, "(CL_TransientsMP_UpdatePriority( file, priority ))", (const char *)&queryFormat, "CL_TransientsMP_UpdatePriority( file, priority )");
        goto LABEL_34;
      }
      return;
    case 3:
      if ( DB_PollFastfileState(file->filename) != AWAITING_COMMIT )
      {
        v8 = "( ( ( DB_PollFastfileState( file->filename ) == DB_FastfileState::LOADED ) ) )";
        filename = file->filename;
        v9 = 2520;
        fmt = "( file->filename ) = %s";
        goto LABEL_33;
      }
      return;
    case 4:
      v8 = (char *)&queryFormat.fmt + 3;
      filename = file->filename;
      v9 = 2516;
      fmt = "CL_TransientsMP_LoadFileInternal: UNLOADING state unexpected for %s";
LABEL_33:
      v6 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", v9, ASSERT_TYPE_ASSERT, v8, fmt, filename);
LABEL_34:
      if ( v6 )
        __debugbreak();
      return;
    case 5:
      file->state[0] = 6;
      goto LABEL_16;
    case 7:
      v4 = DB_PollFastfileState(file->filename);
      if ( v4 != AWAITING_COMMIT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 2465, ASSERT_TYPE_ASSERT, "( (ffState == DB_FastfileState::LOADED) )", "QUEUED_FOR_UNLOAD: Expected NOT_LOADED state for '%s', but got %d instead\n", file->filename, v4) )
        __debugbreak();
      file->state[0] = 3;
      CL_TransientsMP_PurgeStaleQueueItems();
      return;
    case 8:
      file->state[0] = 9;
      goto LABEL_16;
    case 0xA:
      file->state[0] = 11;
      goto LABEL_16;
    case 0xC:
      file->state[0] = 2;
      goto LABEL_16;
    default:
LABEL_16:
      CL_TransientsMP_UpdatePriority(file, priority);
      return;
  }
}

/*
==============
CL_TransientsMP_LockTransientState
==============
*/
void CL_TransientsMP_LockTransientState()
{
  if ( !Sys_IsMainThread() && !Sys_IsDatabaseThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 268, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread() || Sys_IsDatabaseThread())", (const char *)&queryFormat, "Sys_IsMainThread() || Sys_IsDatabaseThread()") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "s_transientStateLock Write");
  Sys_LockWrite(&s_transientStateLock);
  Sys_ProfEndNamedEvent();
}

/*
==============
CL_TransientsMP_NeedsProcessing
==============
*/
char CL_TransientsMP_NeedsProcessing()
{
  TransientMPLoadState v1; 
  unsigned int v2; 
  __int64 v3; 

  if ( !Sys_IsMainThread() && (!Sys_IsRenderThread() || !R_IsInRemoteScreenUpdate()) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 2001, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread() || Sys_IsRenderThread() && R_IsInRemoteScreenUpdate())", (const char *)&queryFormat, "Sys_IsMainThread() || Sys_IsRenderThread() && R_IsInRemoteScreenUpdate()") )
    __debugbreak();
  if ( !CL_TransientsMP_IsInHostMigration() )
  {
    if ( CL_TransientsMP_PeekTransientQueueActive() )
      return 1;
    v1 = s_transientSystemLoadState;
    if ( s_transientSystemLoadState && s_transientSystemLoadState != ERRORING && s_transientQueueSize )
    {
      v2 = 0;
      if ( s_transientQueueSize )
      {
        do
        {
          CL_TransientMP_StatusPrint("%u: %s state=%d\n", v2, s_transientQueue[v2].file->filename, (unsigned __int8)s_transientQueue[v2].file->state[0]);
          ++v2;
        }
        while ( v2 < s_transientQueueSize );
        v1 = s_transientSystemLoadState;
      }
      LODWORD(v3) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 2021, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Did not detect any active queue items, but we're not idle, s_transientSystemLoadState=%d", v3) )
        __debugbreak();
    }
  }
  return 0;
}

/*
==============
CL_TransientsMP_OnLevelLoad
==============
*/
void CL_TransientsMP_OnLevelLoad(void)
{
  unsigned int v0; 
  unsigned __int64 v1; 
  unsigned int i; 
  const char *ZoneNameFromIndex; 
  int v6; 
  unsigned __int8 *v7; 
  unsigned __int8 v8; 
  unsigned __int16 FileIndexByHash; 
  TransientFile *FileByIndex; 
  __int64 v11; 
  unsigned __int64 v12; 
  __int64 v15; 
  __int64 v16; 
  DB_FastfileInfo zoneInfo[1857]; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 2205, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( s_transientMPLoadMode == Frontend )
  {
    v0 = 0;
    v1 = __rdtsc();
    if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 2406, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
      __debugbreak();
    if ( CL_TransientsMP_IsInHostMigration() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 2407, ASSERT_TYPE_ASSERT, "(!CL_TransientsMP_IsInHostMigration())", (const char *)&queryFormat, "!CL_TransientsMP_IsInHostMigration()") )
      __debugbreak();
    R_BeginRemoteScreenUpdateWithAnimatedTexture();
    Sys_ProcessWorkerCmdsWithTimeout(CL_TransientsMP_WaitUntilProcessingDone, NULL);
    R_EndRemoteScreenUpdateWithAnimatedTexture();
    _XMM0 = 0i64;
    __asm { vcvtsi2sd xmm0, xmm0, rax }
    if ( (__int64)(__rdtsc() - v1) < 0 )
      *(double *)&_XMM0 = *(double *)&_XMM0 + 1.844674407370955e19;
    CL_TransientMP_StatusPrint("CL_TransientsMP_OnLevelLoad: StallUntilCompletion took %.2fms\n", *(double *)&_XMM0 * msecPerRawTimerTick);
    for ( i = 0; i < 0x7A4; ++i )
    {
      if ( DB_Zones_IsValidZoneIndex(i) && (DB_Zones_GetZoneFlagsFromIndex(i) & 0x3800000) != 0 )
      {
        ZoneNameFromIndex = DB_Zones_GetZoneNameFromIndex(i);
        v6 = 0;
        v7 = (unsigned __int8 *)ZoneNameFromIndex;
        v8 = *ZoneNameFromIndex;
        if ( !*ZoneNameFromIndex )
          goto LABEL_39;
        do
        {
          ++v7;
          v6 = v8 ^ (16777619 * v6);
          v8 = *v7;
        }
        while ( *v7 );
        if ( !v6 )
        {
LABEL_39:
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 2234, ASSERT_TYPE_ASSERT, "(fileHash != 0)", (const char *)&queryFormat, "fileHash != 0") )
            __debugbreak();
        }
        FileIndexByHash = CL_TransientsMP_FindFileIndexByHash(v6);
        if ( FileIndexByHash == 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 2237, ASSERT_TYPE_ASSERT, "( ( fileIndex != UNUSED_FILE ) )", "( filename ) = %s", ZoneNameFromIndex) )
          __debugbreak();
        FileByIndex = CL_TransientsMP_GetFileByIndex(FileIndexByHash);
        if ( !FileByIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 2240, ASSERT_TYPE_ASSERT, "(file)", (const char *)&queryFormat, "file") )
          __debugbreak();
        if ( v0 >= 0x741 )
        {
          LODWORD(v16) = 1857;
          LODWORD(v15) = v0;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 2242, ASSERT_TYPE_ASSERT, "(unsigned)( fileCount ) < (unsigned)( ( sizeof( *array_counter( zoneInfo ) ) + 0 ) )", "fileCount doesn't index ARRAY_COUNT( zoneInfo )\n\t%i not in [0, %i)", v15, v16) )
            __debugbreak();
        }
        v11 = v0;
        zoneInfo[v11].failureMode = REQUIRED;
        zoneInfo[v11].name = ZoneNameFromIndex;
        zoneInfo[v0++].zoneFlags = CL_TransientsMP_ConvertShiftedToFlags(FileByIndex->zoneFlagShifted);
      }
    }
    if ( v0 )
    {
      v12 = __rdtsc();
      R_BeginRemoteScreenUpdate();
      DB_LoadFastfiles(zoneInfo, v0, 2u, 0);
      DB_Update();
      R_EndRemoteScreenUpdate();
      _XMM0 = 0i64;
      __asm { vcvtsi2sd xmm0, xmm0, rax }
      if ( (__int64)(__rdtsc() - v12) < 0 )
        *(double *)&_XMM0 = *(double *)&_XMM0 + 1.844674407370955e19;
      CL_TransientMP_StatusPrint("CL_TransientsMP_OnLevelLoad: LoadFastfiles (%i) took %.2fms\n", v0, *(double *)&_XMM0 * msecPerRawTimerTick);
    }
    s_transientMPLoadMode = InGame;
  }
}

/*
==============
CL_TransientsMP_OnLevelUnload
==============
*/
void CL_TransientsMP_OnLevelUnload(void)
{
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 2427, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  CL_TransientsMP_UnloadAllWorldTransients();
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 2406, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( CL_TransientsMP_IsInHostMigration() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 2407, ASSERT_TYPE_ASSERT, "(!CL_TransientsMP_IsInHostMigration())", (const char *)&queryFormat, "!CL_TransientsMP_IsInHostMigration()") )
    __debugbreak();
  R_BeginRemoteScreenUpdateWithAnimatedTexture();
  Sys_ProcessWorkerCmdsWithTimeout(CL_TransientsMP_WaitUntilProcessingDone, NULL);
  R_EndRemoteScreenUpdateWithAnimatedTexture();
  s_transientMPLoadMode = Frontend;
}

/*
==============
CL_TransientsMP_OnPreloadFrontendUnload
==============
*/
void CL_TransientsMP_OnPreloadFrontendUnload(void)
{
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 2440, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  CL_TransientsMP_UnloadAllWorldTransients();
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 2406, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( CL_TransientsMP_IsInHostMigration() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 2407, ASSERT_TYPE_ASSERT, "(!CL_TransientsMP_IsInHostMigration())", (const char *)&queryFormat, "!CL_TransientsMP_IsInHostMigration()") )
    __debugbreak();
  Sys_ProcessWorkerCmdsWithTimeout(CL_TransientsMP_WaitUntilProcessingDone, NULL);
}

/*
==============
CL_TransientsMP_OnUnloadAll
==============
*/

void CL_TransientsMP_OnUnloadAll(void)
{
  CL_TransientsMP_Reset();
}

/*
==============
CL_TransientsMP_PeekTransientQueueActive
==============
*/
char CL_TransientsMP_PeekTransientQueueActive()
{
  int v0; 
  TransientFile *file; 
  char v2; 

  v0 = 0;
  if ( !s_transientQueueSize )
    return 0;
  while ( 1 )
  {
    file = s_transientQueue[v0].file;
    if ( !file && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 537, ASSERT_TYPE_ASSERT, "(file)", (const char *)&queryFormat, "file") )
      __debugbreak();
    v2 = file->state[0];
    if ( v2 )
    {
      if ( v2 != 3 )
        break;
    }
    if ( ++v0 >= s_transientQueueSize )
      return 0;
  }
  return 1;
}

/*
==============
CL_TransientsMP_PostLoadUpdate
==============
*/
void CL_TransientsMP_PostLoadUpdate()
{
  unsigned int v0; 
  TransientFile *file; 
  DB_FastfileState v2; 
  unsigned int v3; 
  DB_FastfileState v4; 
  bool v5; 
  int v6; 
  char *fmt; 
  const char *filename; 
  const char *v9; 

  if ( !DB_AreFastfileLoadsCompleted() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 561, ASSERT_TYPE_ASSERT, "(DB_AreFastfileLoadsCompleted())", (const char *)&queryFormat, "DB_AreFastfileLoadsCompleted()") )
    __debugbreak();
  v0 = 0;
  if ( s_transientQueueSize )
  {
    while ( 2 )
    {
      file = s_transientQueue[v0].file;
      if ( !file && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 566, ASSERT_TYPE_ASSERT, "(file)", (const char *)&queryFormat, "file") )
        __debugbreak();
      switch ( file->state[0] )
      {
        case 0:
        case 1:
          ++v0;
          if ( DB_PollFastfileState(file->filename) )
          {
            v5 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 617, ASSERT_TYPE_ASSERT, "( ( (DB_PollFastfileState( file->filename ) == DB_FastfileState::NOT_LOADED) ) )", "( file->filename ) = %s", file->filename);
            goto LABEL_33;
          }
          goto LABEL_35;
        case 2:
          if ( !file->referenceCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 572, ASSERT_TYPE_ASSERT, "(file->referenceCount)", (const char *)&queryFormat, "file->referenceCount") )
            __debugbreak();
          v2 = DB_PollFastfileState(file->filename);
          if ( v2 == AWAITING_COMMIT )
          {
            v3 = s_debugLoadedRingBufferSize;
            if ( s_debugLoadedRingBufferSize >= 0x32 )
            {
              LODWORD(v9) = 50;
              LODWORD(filename) = s_debugLoadedRingBufferSize;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 399, ASSERT_TYPE_ASSERT, "(unsigned)( s_debugLoadedRingBufferSize ) < (unsigned)( ( sizeof( *array_counter( s_debugLoadedRingBufferEnties ) ) + 0 ) )", "s_debugLoadedRingBufferSize doesn't index ARRAY_COUNT( s_debugLoadedRingBufferEnties )\n\t%i not in [0, %i)", filename, v9) )
                __debugbreak();
              v3 = s_debugLoadedRingBufferSize;
            }
            s_debugLoadedRingBufferEnties[v3] = s_transientQueue[v0];
            file->state[0] = 3;
            s_debugLoadedRingBufferSize = (v3 + 1) % 0x32;
            CL_TransientsMP_RemoveFromQueue(v0);
          }
          else
          {
            Sys_Error((const ObfuscateErrorText)&stru_144224268, file->filename, (unsigned int)v2);
          }
          goto LABEL_35;
        case 3:
        case 7:
          ++v0;
          if ( DB_PollFastfileState(file->filename) != AWAITING_COMMIT )
          {
            v5 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 611, ASSERT_TYPE_ASSERT, "( ( (DB_PollFastfileState( file->filename ) == DB_FastfileState::LOADED) ) )", "( file->filename ) = %s", file->filename);
            goto LABEL_33;
          }
          goto LABEL_35;
        case 4:
        case 0xA:
        case 0xB:
          LODWORD(v9) = (unsigned __int8)file->state[0];
          v6 = 629;
          filename = file->filename;
          fmt = "Unloading transient file not correctly removed from the load queue: %s (%d)";
          goto LABEL_32;
        case 8:
        case 9:
          goto $LN51_24;
        case 0xC:
          if ( file->referenceCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 591, ASSERT_TYPE_ASSERT, "(file->referenceCount == 0)", (const char *)&queryFormat, "file->referenceCount == 0") )
            __debugbreak();
          v4 = DB_PollFastfileState(file->filename);
          if ( v4 == AWAITING_COMMIT )
          {
            file->state[0] = 7;
$LN51_24:
            ++v0;
          }
          else
          {
            Sys_Error((const ObfuscateErrorText)&stru_1442242D8, file->filename, (unsigned int)v4);
          }
LABEL_35:
          if ( v0 >= s_transientQueueSize )
            return;
          continue;
        default:
          v9 = file->filename;
          LODWORD(filename) = (unsigned __int8)file->state[0];
          v6 = 634;
          fmt = "Unknown transient file state %d for %s";
LABEL_32:
          ++v0;
          v5 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", v6, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, fmt, filename, v9);
LABEL_33:
          if ( v5 )
            __debugbreak();
          goto LABEL_35;
      }
    }
  }
}

/*
==============
CL_TransientsMP_Process
==============
*/
void CL_TransientsMP_Process(void)
{
  CL_TransientsMP_ProcessWithGpuWait(0);
}

/*
==============
CL_TransientsMP_ProcessCancelQueue
==============
*/
char CL_TransientsMP_ProcessCancelQueue()
{
  const dvar_t *v0; 
  TransientMPZoneState v1; 
  unsigned int v2; 
  TransientMPZoneState v3; 
  int v4; 
  int v5; 
  TransientFile *files[1858]; 
  DB_FastfileInfo outZoneInfo; 

  if ( s_transientSystemLoadState != INITIALIZING && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 1287, ASSERT_TYPE_ASSERT, "(s_transientSystemLoadState == TransientMPLoadState::LOADING)", (const char *)&queryFormat, "s_transientSystemLoadState == TransientMPLoadState::LOADING") )
    __debugbreak();
  if ( DB_AreFastfileLoadsCompleted() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 1288, ASSERT_TYPE_ASSERT, "(!DB_AreFastfileLoadsCompleted())", (const char *)&queryFormat, "!DB_AreFastfileLoadsCompleted()") )
    __debugbreak();
  v0 = DCONST_DVARBOOL_cl_transient_cancel_load_zones;
  if ( !DCONST_DVARBOOL_cl_transient_cancel_load_zones && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_transient_cancel_load_zones") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  if ( !v0->current.enabled )
    return 0;
  LOBYTE(v1) = 12;
  v2 = CL_TransientsMP_GatherTransientFiles(files, 0, v1, 0);
  if ( !v2 )
    return 0;
  if ( !CL_TransientsMP_PeekTransientQueueActive() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 1301, ASSERT_TYPE_ASSERT, "(CL_TransientsMP_PeekTransientQueueActive())", "%s\n\tThe peek request should have succeeded, since we have work to do", "CL_TransientsMP_PeekTransientQueueActive()") )
    __debugbreak();
  LOBYTE(v3) = 8;
  CL_TransientsMP_ProcessTransientFileList(files, NULL, v2, v3, &outZoneInfo);
  v4 = Sys_Milliseconds();
  DB_CancelLoadFastfiles(&outZoneInfo, v2);
  if ( DB_Transients_VerbosePrint() )
  {
    v5 = Sys_Milliseconds();
    CL_TransientMP_StatusPrint("DB_CancelLoadFastfiles() took %ims\n", (unsigned int)(v5 - v4));
  }
  return 1;
}

/*
==============
CL_TransientsMP_ProcessLoadQueue
==============
*/
char CL_TransientsMP_ProcessLoadQueue(const bool waitForGPU)
{
  unsigned int v1; 
  unsigned int v2; 
  unsigned int i; 
  TransientFile *file; 
  __int64 v5; 
  unsigned int v6; 
  TransientFile **v7; 
  __int64 v8; 
  __int64 v9; 
  TransientQueueEntry *v10; 
  TransientMPZoneState v11; 
  int v12; 
  int v13; 
  __int64 v15; 
  __int64 v16; 
  unsigned int _Last[1860]; 
  unsigned int priorities[1860]; 
  TransientFile *files[1858]; 
  DB_FastfileInfo outZoneInfo; 

  if ( !CL_TransientsMP_IsSystemIdle() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 1207, ASSERT_TYPE_ASSERT, "(CL_TransientsMP_IsSystemIdle())", (const char *)&queryFormat, "CL_TransientsMP_IsSystemIdle()") )
    __debugbreak();
  if ( !DB_AreFastfileLoadsCompleted() )
    return 0;
  v1 = 0;
  v2 = 0;
  for ( i = 0; v2 < s_transientQueueSize; ++v2 )
  {
    if ( i >= 0x741 )
      break;
    file = s_transientQueue[v2].file;
    if ( !file && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 681, ASSERT_TYPE_ASSERT, "(file)", (const char *)&queryFormat, "file") )
      __debugbreak();
    if ( file->state[0] == 1 )
    {
      v5 = i++;
      _Last[v5] = v2;
    }
  }
  std::_Sort_unchecked<unsigned int *,bool (*)(unsigned int,unsigned int)>(_Last, &_Last[i], i, (bool (__fastcall *)(unsigned int, unsigned int))CL_TransientsMP_CompareLoadPriority);
  v6 = CL_TransientsMP_LimitFileCount(_Last, i);
  if ( DB_Transients_VerbosePrint() )
  {
    if ( !v6 )
      return 0;
    CL_TransientMP_StatusPrint("CL_TransientsMP_ProcessLoadQueue() queueing %d files:\n", v6);
  }
  if ( !v6 )
    return 0;
  v7 = files;
  v8 = 0i64;
  do
  {
    v9 = _Last[v8];
    if ( (unsigned int)v9 >= s_transientQueueSize )
    {
      LODWORD(v16) = s_transientQueueSize;
      LODWORD(v15) = _Last[v8];
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 1234, ASSERT_TYPE_ASSERT, "(unsigned)( transientQueueIndex ) < (unsigned)( s_transientQueueSize )", "transientQueueIndex doesn't index s_transientQueueSize\n\t%i not in [0, %i)", v15, v16) )
        __debugbreak();
    }
    v10 = &s_transientQueue[v9];
    if ( v1 >= 0x741 )
    {
      LODWORD(v16) = 1857;
      LODWORD(v15) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 1237, ASSERT_TYPE_ASSERT, "(unsigned)( fileIndex ) < (unsigned)( ( sizeof( *array_counter( files ) ) + 0 ) )", "fileIndex doesn't index ARRAY_COUNT( files )\n\t%i not in [0, %i)", v15, v16) )
        __debugbreak();
    }
    *v7 = v10->file;
    if ( v1 >= 0x741 )
    {
      LODWORD(v16) = 1857;
      LODWORD(v15) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 1240, ASSERT_TYPE_ASSERT, "(unsigned)( fileIndex ) < (unsigned)( ( sizeof( *array_counter( priorities ) ) + 0 ) )", "fileIndex doesn't index ARRAY_COUNT( priorities )\n\t%i not in [0, %i)", v15, v16) )
        __debugbreak();
    }
    priorities[v8] = v10->priority;
    if ( DB_Transients_VerbosePrint() )
      CL_TransientMP_StatusPrint(" * Queueing '%s', priority: %u, pages: %u\n", v10->file->filename, v10->priority, v10->file->fileCostMul64k);
    ++v1;
    ++v7;
    ++v8;
  }
  while ( v1 < v6 );
  if ( !CL_TransientsMP_PeekTransientQueueActive() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 1255, ASSERT_TYPE_ASSERT, "(CL_TransientsMP_PeekTransientQueueActive())", "%s\n\tThe peek request should have succeeded, since we have work to do", "CL_TransientsMP_PeekTransientQueueActive()") )
    __debugbreak();
  if ( v6 > 0x741 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 1258, ASSERT_TYPE_ASSERT, "(fileCount <= ( sizeof( *array_counter( files ) ) + 0 ))", (const char *)&queryFormat, "fileCount <= ARRAY_COUNT( files )") )
    __debugbreak();
  LOBYTE(v11) = 2;
  CL_TransientsMP_ProcessTransientFileList(files, priorities, v6, v11, &outZoneInfo);
  v12 = Sys_Milliseconds();
  DB_LoadFastfiles(&outZoneInfo, v6, 2u, 0);
  if ( DB_Transients_VerbosePrint() )
  {
    v13 = Sys_Milliseconds();
    CL_TransientMP_StatusPrint("DB_LoadFastfiles() took %ims\n", (unsigned int)(v13 - v12));
  }
  return 1;
}

/*
==============
CL_TransientsMP_ProcessLoadingQueue
==============
*/
char CL_TransientsMP_ProcessLoadingQueue()
{
  unsigned int v1; 
  unsigned int v2; 
  unsigned int priority; 
  TransientFile *file; 
  TransientFile *v5; 
  unsigned int v6; 
  const char *filename; 
  __int64 v8; 
  __int64 v9; 

  if ( s_transientSystemLoadState != INITIALIZING && s_transientSystemLoadState != JOINED_LOBBY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 1349, ASSERT_TYPE_ASSERT, "(s_transientSystemLoadState == TransientMPLoadState::LOADING || s_transientSystemLoadState == TransientMPLoadState::CANCELING)", (const char *)&queryFormat, "s_transientSystemLoadState == TransientMPLoadState::LOADING || s_transientSystemLoadState == TransientMPLoadState::CANCELING") )
    __debugbreak();
  if ( DB_AreFastfileLoadsCompleted() )
  {
    CL_TransientsMP_PostLoadUpdate();
    return 1;
  }
  else
  {
    v1 = 0;
    v2 = 0;
    priority = 0;
    if ( s_transientQueueSize )
    {
      do
      {
        if ( v2 >= 0x741 )
        {
          LODWORD(v9) = 1857;
          LODWORD(v8) = v2;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 1331, ASSERT_TYPE_ASSERT, "(unsigned)( transientQueueIndex ) < (unsigned)( ( sizeof( *array_counter( s_transientQueue ) ) + 0 ) )", "transientQueueIndex doesn't index ARRAY_COUNT( s_transientQueue )\n\t%i not in [0, %i)", v8, v9) )
            __debugbreak();
        }
        file = s_transientQueue[v2].file;
        if ( !file && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 1333, ASSERT_TYPE_ASSERT, "(file)", (const char *)&queryFormat, "file") )
          __debugbreak();
        if ( file->state[0] == 1 && s_transientQueue[v2].priority > priority )
          priority = s_transientQueue[v2].priority;
        ++v2;
      }
      while ( v2 < s_transientQueueSize );
      v1 = 0;
    }
    if ( s_transientQueueSize )
    {
      do
      {
        if ( v1 >= 0x741 )
        {
          LODWORD(v9) = 1857;
          LODWORD(v8) = v1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 1364, ASSERT_TYPE_ASSERT, "(unsigned)( transientQueueIndex ) < (unsigned)( ( sizeof( *array_counter( s_transientQueue ) ) + 0 ) )", "transientQueueIndex doesn't index ARRAY_COUNT( s_transientQueue )\n\t%i not in [0, %i)", v8, v9) )
            __debugbreak();
        }
        v5 = s_transientQueue[v1].file;
        if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 1366, ASSERT_TYPE_ASSERT, "(file)", (const char *)&queryFormat, "file") )
          __debugbreak();
        if ( v5->state[0] == 2 )
        {
          v6 = s_transientQueue[v1].priority;
          filename = v5->filename;
          if ( priority <= v6 )
          {
            DB_SetInflightTransientPriority(filename, v6);
          }
          else if ( DB_TryFastTransientCancel(filename) )
          {
            v5->state[0] = 1;
          }
        }
        ++v1;
      }
      while ( v1 < s_transientQueueSize );
    }
    return 0;
  }
}

/*
==============
CL_TransientsMP_ProcessQueue
==============
*/
void CL_TransientsMP_ProcessQueue(const bool waitForGPU)
{
  BOOL v2; 
  bool v3; 
  TransientMPLoadState v4; 
  bool v5; 

  Profile_Begin(823);
  if ( s_transientSystemPostUnloadState && s_transientSystemPostUnloadState != ERRORING && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 1661, ASSERT_TYPE_SANITY, "( s_transientSystemPostUnloadState == TransientMPLoadState::IDLE || s_transientSystemPostUnloadState == TransientMPLoadState::YIELDING )", (const char *)&queryFormat, "s_transientSystemPostUnloadState == TransientMPLoadState::IDLE || s_transientSystemPostUnloadState == TransientMPLoadState::YIELDING") )
    __debugbreak();
  switch ( s_transientSystemLoadState )
  {
    case IDLE:
      if ( CL_TransientsMP_ShouldYieldToStreamer() )
      {
        s_transientSystemLoadState = ERRORING;
        s_transientYieldTime = Sys_Milliseconds();
        Profile_EndInternal(NULL);
      }
      else
      {
        if ( CL_TransientsMP_ProcessUnloadQueue(waitForGPU) )
          goto LABEL_9;
        if ( !CL_TransientsMP_ProcessLoadQueue(waitForGPU) )
          goto LABEL_35;
        s_transientSystemLoadState = INITIALIZING;
        Profile_EndInternal(NULL);
      }
      return;
    case INITIALIZING:
      if ( CL_TransientsMP_ProcessLoadingQueue() )
      {
        s_transientSystemLoadState = IDLE;
        if ( DB_AreFastfileLoadsCompleted() )
          goto LABEL_35;
        v3 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 1710, ASSERT_TYPE_ASSERT, "(DB_AreFastfileLoadsCompleted())", (const char *)&queryFormat, "DB_AreFastfileLoadsCompleted()");
        goto LABEL_33;
      }
      if ( !CL_TransientsMP_ProcessCancelQueue() )
        goto LABEL_35;
      s_transientSystemLoadState = JOINED_LOBBY;
      Profile_EndInternal(NULL);
      return;
    case SEARCHING:
      s_transientSystemLoadState = CL_TransientsMP_ProcessUnloadingQueue(waitForGPU);
      Profile_EndInternal(NULL);
      return;
    case QOSING:
      if ( DB_AreFastfileLoadsCompleted() )
      {
        CL_TransientsMP_ProcessUnloadingPrimedQueue(waitForGPU);
        v4 = s_transientSystemPostUnloadState;
        s_transientSystemPostUnloadState = IDLE;
        s_transientSystemLoadState = v4;
      }
      else
      {
        CL_TransientMP_StatusPrint("TransientMPLoadState::UNLOADING_PRIMED: Waiting for DB load...\n");
      }
      goto LABEL_35;
    case JOINED_LOBBY:
      if ( !CL_TransientsMP_ProcessLoadingQueue() )
        goto LABEL_35;
      if ( !DB_AreFastfileLoadsCompleted() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 1740, ASSERT_TYPE_ASSERT, "(DB_AreFastfileLoadsCompleted())", "%s\n\tProcessLoadingQueue should fail until the DB is available", "DB_AreFastfileLoadsCompleted()") )
        __debugbreak();
      v5 = CL_TransientsMP_ProcessUnloadQueue(waitForGPU);
      v2 = 0;
      if ( !v5 )
        goto LABEL_16;
LABEL_9:
      s_transientSystemPostUnloadState = IDLE;
      s_transientSystemLoadState = SEARCHING;
      Profile_EndInternal(NULL);
      break;
    case ERRORING:
      if ( CL_TransientsMP_ProcessUnloadQueue(waitForGPU) )
      {
        s_transientSystemPostUnloadState = ERRORING;
        s_transientSystemLoadState = SEARCHING;
        Profile_EndInternal(NULL);
      }
      else if ( CL_TransientsMP_ShouldStopYieldingToStreamer() )
      {
        v2 = CL_TransientsMP_ProcessLoadQueue(waitForGPU) != 0;
LABEL_16:
        s_transientSystemLoadState = v2;
        Profile_EndInternal(NULL);
      }
      else
      {
LABEL_35:
        Profile_EndInternal(NULL);
      }
      break;
    default:
      v3 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 1755, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Invalid transient MP load state\n");
LABEL_33:
      if ( v3 )
        __debugbreak();
      goto LABEL_35;
  }
}

/*
==============
CL_TransientsMP_ProcessTransientFileList
==============
*/
void CL_TransientsMP_ProcessTransientFileList(TransientFile **files, const unsigned int *const priorities, unsigned int fileCount, TransientMPZoneState fileState, DB_FastfileInfo *outZoneInfo)
{
  __int64 v5; 
  TransientFile **v7; 
  const unsigned int *v8; 
  DB_FastFileFailureMode *p_failureMode; 
  __int64 v10; 
  TransientFile *v11; 
  unsigned __int8 zoneFlagShifted; 
  int v13; 
  unsigned __int8 v14; 
  int v15; 
  int v16; 
  unsigned int v17; 
  __int64 v18; 
  __int64 v19; 
  __int64 v20; 
  char v21; 

  v21 = fileState;
  v5 = fileCount;
  v7 = files;
  if ( !files && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 774, ASSERT_TYPE_ASSERT, "(files)", (const char *)&queryFormat, "files") )
    __debugbreak();
  if ( (unsigned int)v5 > 0x741 )
  {
    LODWORD(v18) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 775, ASSERT_TYPE_ASSERT, "( fileCount ) <= ( MAX_QUEUED_FILES )", "fileCount not in [0, MAX_QUEUED_FILES]\n\t%u not in [0, %u]", v18, 1857) )
      __debugbreak();
  }
  if ( !outZoneInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 776, ASSERT_TYPE_ASSERT, "(outZoneInfo)", (const char *)&queryFormat, "outZoneInfo") )
    __debugbreak();
  if ( (_DWORD)v5 )
  {
    v8 = priorities;
    p_failureMode = &outZoneInfo->failureMode;
    v10 = v5;
    do
    {
      v11 = *v7;
      if ( !*v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 781, ASSERT_TYPE_ASSERT, "(file)", (const char *)&queryFormat, "file") )
        __debugbreak();
      if ( !v11->filename && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 782, ASSERT_TYPE_ASSERT, "(file->filename)", (const char *)&queryFormat, "file->filename") )
        __debugbreak();
      zoneFlagShifted = v11->zoneFlagShifted;
      if ( zoneFlagShifted > 0x1Fu )
      {
        LODWORD(v20) = 31;
        LODWORD(v19) = zoneFlagShifted;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 288, ASSERT_TYPE_ASSERT, "( shiftedFlags ) <= ( 31 )", "%s <= %s\n\t%u, %u", "shiftedFlags", "31", v19, v20) )
          __debugbreak();
      }
      v13 = 1 << zoneFlagShifted;
      if ( s_transientMPLoadMode == Frontend )
      {
        v14 = v11->zoneFlagShifted;
        if ( v14 > 0x1Fu )
        {
          LODWORD(v20) = 31;
          LODWORD(v19) = v14;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 288, ASSERT_TYPE_ASSERT, "( shiftedFlags ) <= ( 31 )", "%s <= %s\n\t%u, %u", "shiftedFlags", "31", v19, v20) )
            __debugbreak();
        }
        v15 = 1 << v14;
        if ( 1 << v14 == 0x8000 || v15 == 0x10000 || v15 == 0x20000 || v15 == 0x40000 )
        {
          v16 = CL_TransientsMP_ConvertShiftedToFlags(v11->zoneFlagShifted);
          if ( v16 == 0x8000 )
          {
            v13 = 0x800000;
          }
          else if ( v16 == 0x10000 )
          {
            v13 = 0x1000000;
          }
          else if ( ((v16 - 0x20000) & 0xFFFDFFFF) != 0 )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 763, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Can't preload %s", v11->filename) )
              __debugbreak();
            v13 = 0;
          }
          else
          {
            v13 = 0x2000000;
          }
        }
      }
      *(_QWORD *)(p_failureMode - 3) = v11->filename;
      *((_DWORD *)p_failureMode - 1) = v13;
      *p_failureMode = REQUIRED;
      if ( priorities )
        v17 = *v8;
      else
        v17 = 0;
      *((_DWORD *)p_failureMode + 1) = v17;
      p_failureMode += 6;
      v11->state[0] = v21;
      ++v7;
      ++v8;
      --v10;
    }
    while ( v10 );
  }
}

/*
==============
CL_TransientsMP_ProcessUnloadQueue
==============
*/
char CL_TransientsMP_ProcessUnloadQueue(const bool waitForGPU)
{
  TransientMPZoneState v2; 
  unsigned int v3; 
  __int64 v4; 
  TransientMPZoneState v5; 
  unsigned int v6; 
  __int64 v7; 
  TransientMPZoneState v8; 
  unsigned int v9; 
  TransientFile **v10; 
  __int64 v11; 
  TransientFile *v12; 
  TransientFile **v13; 
  __int64 v14; 
  TransientFile *v15; 
  TransientFile **v16; 
  __int64 v17; 
  TransientFile *v18; 
  unsigned int v20; 
  TransientFile *files[1858]; 

  if ( !CL_TransientsMP_IsSystemIdle() && s_transientSystemLoadState != JOINED_LOBBY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 829, ASSERT_TYPE_ASSERT, "(CL_TransientsMP_IsSystemIdle() || s_transientSystemLoadState == TransientMPLoadState::CANCELING)", (const char *)&queryFormat, "CL_TransientsMP_IsSystemIdle() || s_transientSystemLoadState == TransientMPLoadState::CANCELING") )
    __debugbreak();
  if ( !DB_AreFastfileLoadsCompleted() )
    return 0;
  LOBYTE(v2) = 9;
  v3 = CL_TransientsMP_GatherTransientFiles(files, 0, v2, 0);
  v4 = v3;
  LOBYTE(v5) = 8;
  v6 = CL_TransientsMP_GatherTransientFiles(files, v3, v5, 0);
  v7 = v6;
  LOBYTE(v8) = 7;
  v20 = CL_TransientsMP_GatherTransientFiles(files, v6, v8, waitForGPU);
  v9 = v20;
  if ( !v20 )
    return 0;
  if ( !CL_TransientsMP_PeekTransientQueueActive() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 853, ASSERT_TYPE_ASSERT, "(CL_TransientsMP_PeekTransientQueueActive())", "%s\n\tThe peek request should have succeeded, since we have work to do", "CL_TransientsMP_PeekTransientQueueActive()") )
    __debugbreak();
  if ( (_DWORD)v4 )
  {
    v10 = files;
    v11 = v4;
    do
    {
      v12 = *v10;
      if ( !*v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 858, ASSERT_TYPE_ASSERT, "(files[fileIndex])", (const char *)&queryFormat, "files[fileIndex]") )
        __debugbreak();
      if ( v12->state[0] != 9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 859, ASSERT_TYPE_ASSERT, "(files[fileIndex]->state == TransientMPZoneState::CANCELING_QUEUED_FOR_LOAD)", (const char *)&queryFormat, "files[fileIndex]->state == TransientMPZoneState::CANCELING_QUEUED_FOR_LOAD") )
      {
        __debugbreak();
        v12 = *v10;
      }
      ++v10;
      v12->state[0] = 11;
      --v11;
    }
    while ( v11 );
    v9 = v20;
  }
  if ( (unsigned int)v4 < (unsigned int)v7 )
  {
    v13 = &files[v4];
    v14 = (unsigned int)(v7 - v4);
    do
    {
      v15 = *v13;
      if ( !*v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 866, ASSERT_TYPE_ASSERT, "(files[fileIndex])", (const char *)&queryFormat, "files[fileIndex]") )
        __debugbreak();
      if ( v15->state[0] != 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 867, ASSERT_TYPE_ASSERT, "(files[fileIndex]->state == TransientMPZoneState::CANCELING)", (const char *)&queryFormat, "files[fileIndex]->state == TransientMPZoneState::CANCELING") )
      {
        __debugbreak();
        v15 = *v13;
      }
      ++v13;
      v15->state[0] = 10;
      --v14;
    }
    while ( v14 );
  }
  if ( (unsigned int)v7 < v9 )
  {
    v16 = &files[v7];
    v17 = v9 - (unsigned int)v7;
    do
    {
      v18 = *v16;
      if ( !*v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 874, ASSERT_TYPE_ASSERT, "(files[fileIndex])", (const char *)&queryFormat, "files[fileIndex]") )
        __debugbreak();
      if ( v18->state[0] != 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 875, ASSERT_TYPE_ASSERT, "(files[fileIndex]->state == TransientMPZoneState::QUEUED_FOR_UNLOAD)", (const char *)&queryFormat, "files[fileIndex]->state == TransientMPZoneState::QUEUED_FOR_UNLOAD") )
      {
        __debugbreak();
        v18 = *v16;
      }
      ++v16;
      v18->state[0] = 5;
      --v17;
    }
    while ( v17 );
  }
  return 1;
}

/*
==============
CL_TransientsMP_ProcessUnloadingPrimedQueue
==============
*/
void CL_TransientsMP_ProcessUnloadingPrimedQueue(const bool waitForGPU)
{
  TransientMPZoneState v1; 
  unsigned int v2; 
  TransientMPZoneState v3; 
  unsigned int v4; 
  unsigned int v5; 
  TransientMPZoneState v6; 
  unsigned int v7; 
  __int64 v8; 
  TransientMPZoneState v9; 
  int v10; 
  int v11; 
  __int64 i; 
  TransientFile *v13; 
  unsigned int v14; 
  unsigned int v15; 
  TransientFile *file; 
  unsigned int v17; 
  unsigned int v18; 
  TransientQueueEntry *v19; 
  TransientQueueEntry v20; 
  __int64 v21; 
  TransientFile **v22; 
  __int64 v23; 
  TransientFile *v24; 
  TransientFile *files[1858]; 
  DB_FastfileInfo outZoneInfo; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 1007, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( s_transientSystemLoadState != QOSING && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 1008, ASSERT_TYPE_ASSERT, "(s_transientSystemLoadState == TransientMPLoadState::UNLOADING_PRIMED)", (const char *)&queryFormat, "s_transientSystemLoadState == TransientMPLoadState::UNLOADING_PRIMED") )
    __debugbreak();
  if ( !DB_AreFastfileLoadsCompleted() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 1009, ASSERT_TYPE_ASSERT, "(DB_AreFastfileLoadsCompleted())", "%s\n\tPrimed unload should be active only when free of stalls", "DB_AreFastfileLoadsCompleted()") )
    __debugbreak();
  CL_TransientsMP_PurgeStaleUnloadingItems();
  LOBYTE(v1) = 11;
  v2 = CL_TransientsMP_GatherTransientFiles(files, 0, v1, 0);
  LOBYTE(v3) = 10;
  v4 = v2;
  v5 = CL_TransientsMP_GatherTransientFiles(files, v2, v3, 0);
  LOBYTE(v6) = 5;
  v7 = CL_TransientsMP_GatherTransientFiles(files, v5, v6, 0);
  v8 = v7;
  if ( v7 )
  {
    if ( !CL_TransientsMP_PeekTransientQueueActive() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 1017, ASSERT_TYPE_ASSERT, "(CL_TransientsMP_PeekTransientQueueActive())", "%s\n\tThe peek request should have succeeded, since we have work to do", "CL_TransientsMP_PeekTransientQueueActive()") )
      __debugbreak();
    if ( (unsigned int)v8 > 0x741 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 1020, ASSERT_TYPE_ASSERT, "(fileCount <= ( sizeof( *array_counter( files ) ) + 0 ))", (const char *)&queryFormat, "fileCount <= ARRAY_COUNT( files )") )
      __debugbreak();
    LOBYTE(v9) = 4;
    CL_TransientsMP_ProcessTransientFileList(files, NULL, v8, v9, &outZoneInfo);
    v10 = Sys_Milliseconds();
    DB_UnloadFastfiles(&outZoneInfo, v8, 3u);
    if ( DB_Transients_VerbosePrint() )
    {
      v11 = Sys_Milliseconds();
      CL_TransientMP_StatusPrint("DB_UnloadFastfiles() took %ims\n", (unsigned int)(v11 - v10));
    }
    for ( i = 0i64; (unsigned int)i < v4; v13->state[0] = 1 )
    {
      v13 = files[i];
      if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 1038, ASSERT_TYPE_ASSERT, "(file)", (const char *)&queryFormat, "file") )
        __debugbreak();
      if ( !v13->referenceCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 1039, ASSERT_TYPE_ASSERT, "(file->referenceCount > 0)", (const char *)&queryFormat, "file->referenceCount > 0") )
        __debugbreak();
      i = (unsigned int)(i + 1);
    }
    v14 = s_transientQueueSize;
    if ( s_transientQueueSize )
    {
      v15 = 1;
      do
      {
        file = s_transientQueue[v15 - 1].file;
        if ( !file )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 464, ASSERT_TYPE_ASSERT, "(file)", (const char *)&queryFormat, "file") )
            __debugbreak();
          v14 = s_transientQueueSize;
        }
        if ( file->state[0] == 4 )
        {
          if ( DB_Zones_GetZoneIndexFromName(file->filename) != 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 469, ASSERT_TYPE_ASSERT, "( ( DB_Zones_GetZoneIndexFromName( file->filename ) == INVALID_ZONE_INDEX ) )", "( file->filename ) = %s", file->filename) )
            __debugbreak();
          v17 = s_transientQueueSize;
          v18 = v15;
          file->state[0] = 0;
          if ( v15 < v17 )
          {
            v19 = &s_transientQueue[v15];
            do
            {
              v20 = *v19;
              v21 = v18++ - 1;
              ++v19;
              s_transientQueue[v21] = v20;
            }
            while ( v18 < v17 );
          }
          v14 = v17 - 1;
          s_transientQueueSize = v14;
        }
        else
        {
          ++v15;
        }
      }
      while ( v15 - 1 < v14 );
    }
    if ( (_DWORD)v8 )
    {
      v22 = files;
      v23 = v8;
      do
      {
        v24 = *v22;
        if ( !*v22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 1051, ASSERT_TYPE_ASSERT, "(file)", (const char *)&queryFormat, "file") )
          __debugbreak();
        if ( v24->state[0] == 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 1052, ASSERT_TYPE_ASSERT, "( ( file->state != TransientMPZoneState::UNLOADING ) )", "( file->filename ) = %s", v24->filename) )
          __debugbreak();
        ++v22;
        --v23;
      }
      while ( v23 );
    }
  }
}

/*
==============
CL_TransientsMP_ProcessUnloadingQueue
==============
*/
__int64 CL_TransientsMP_ProcessUnloadingQueue(const bool waitForGPU)
{
  TransientMPZoneState v2; 
  unsigned int v3; 
  TransientMPZoneState v4; 
  unsigned int v5; 
  TransientMPZoneState v6; 
  unsigned int v7; 
  __int64 result; 
  TransientMPZoneState v9; 
  unsigned int v10; 
  TransientMPZoneState v11; 
  unsigned int v12; 
  TransientMPZoneState v13; 
  TransientFile *files[1858]; 

  if ( s_transientSystemLoadState != SEARCHING && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 944, ASSERT_TYPE_ASSERT, "(s_transientSystemLoadState == TransientMPLoadState::UNLOADING)", (const char *)&queryFormat, "s_transientSystemLoadState == TransientMPLoadState::UNLOADING") )
    __debugbreak();
  if ( CL_TransientsMP_PurgeStaleUnloadingItems() )
  {
    CL_TransientMP_StatusPrint("CL_TransientsMP_ProcessUnloadingQueue : CL_TransientsMP_PurgeStaleUnloadingItems\n");
    LOBYTE(v2) = 11;
    v3 = CL_TransientsMP_GatherTransientFiles(files, 0, v2, 0);
    LOBYTE(v4) = 10;
    v5 = CL_TransientsMP_GatherTransientFiles(files, v3, v4, 0);
    LOBYTE(v6) = 5;
    v7 = CL_TransientsMP_GatherTransientFiles(files, v5, v6, 0);
    if ( !v7 )
    {
      CL_TransientMP_StatusPrint("CL_TransientsMP_ProcessUnloadingQueue : Now idle\n");
      return 0i64;
    }
    CL_TransientMP_StatusPrint("CL_TransientsMP_ProcessUnloadingQueue : Filecount %u\n", v7);
  }
  if ( !DB_AreFastfileLoadsCompleted() )
    return 2i64;
  LOBYTE(v9) = 11;
  v10 = CL_TransientsMP_GatherTransientFiles(files, 0, v9, 0);
  LOBYTE(v11) = 10;
  v12 = CL_TransientsMP_GatherTransientFiles(files, v10, v11, 0);
  LOBYTE(v13) = 5;
  if ( !(unsigned int)CL_TransientsMP_GatherTransientFiles(files, v12, v13, 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 973, ASSERT_TYPE_ASSERT, "(CL_TransientsMP_GatherUnloadingTransientFiles( files, &reloadCount ) > 0)", (const char *)&queryFormat, "CL_TransientsMP_GatherUnloadingTransientFiles( files, &reloadCount ) > 0") )
    __debugbreak();
  CL_TransientMP_StatusPrint("CL_TransientsMP_ProcessUnloadingQueue : CL_TransientsMP_TryProcessUnloadingQueue\n");
  if ( !DB_AreFastfileLoadsCompleted() )
    return 3i64;
  s_transientSystemLoadState = QOSING;
  CL_TransientsMP_ProcessUnloadingPrimedQueue(waitForGPU);
  result = (unsigned int)s_transientSystemPostUnloadState;
  if ( s_transientSystemPostUnloadState && s_transientSystemPostUnloadState != ERRORING )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 986, ASSERT_TYPE_SANITY, "( s_transientSystemPostUnloadState == TransientMPLoadState::IDLE || s_transientSystemPostUnloadState == TransientMPLoadState::YIELDING )", (const char *)&queryFormat, "s_transientSystemPostUnloadState == TransientMPLoadState::IDLE || s_transientSystemPostUnloadState == TransientMPLoadState::YIELDING") )
      __debugbreak();
    result = (unsigned int)s_transientSystemPostUnloadState;
  }
  s_transientSystemPostUnloadState = IDLE;
  return result;
}

/*
==============
CL_TransientsMP_ProcessWithGpuWait
==============
*/
void CL_TransientsMP_ProcessWithGpuWait(const bool waitForGPU)
{
  TransientMPLoadState v2; 
  bool v3; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 1959, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( !CL_TransientsMP_IsInHostMigration() )
  {
    v2 = s_transientSystemLoadState;
    CL_TransientsMP_ProcessQueue(waitForGPU);
    if ( v2 != s_transientSystemLoadState && s_transientSystemLoadState != SEARCHING )
    {
      v3 = s_transientSystemLoadState == IDLE;
      CL_TransientsMP_ProcessQueue(waitForGPU);
      if ( v3 && (s_transientSystemLoadState & 0xFFFFFFFD) != 0 )
        CL_TransientsMP_ProcessQueue(waitForGPU);
    }
  }
}

/*
==============
CL_TransientsMP_PurgeStaleQueueItems
==============
*/
__int64 CL_TransientsMP_PurgeStaleQueueItems()
{
  __int64 result; 
  unsigned int v1; 
  TransientFile *file; 
  char v3; 
  unsigned int v4; 
  TransientQueueEntry *v5; 
  TransientQueueEntry v6; 
  __int64 v7; 

  result = s_transientQueueSize;
  if ( s_transientQueueSize )
  {
    v1 = 1;
    do
    {
      file = s_transientQueue[v1 - 1].file;
      if ( !file )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 490, ASSERT_TYPE_ASSERT, "(file)", (const char *)&queryFormat, "file") )
          __debugbreak();
        result = s_transientQueueSize;
      }
      v3 = file->state[0];
      if ( !v3 || v3 == 3 )
      {
        v4 = v1;
        if ( v1 < (unsigned int)result )
        {
          v5 = &s_transientQueue[v1];
          do
          {
            v6 = *v5;
            v7 = v4++ - 1;
            ++v5;
            s_transientQueue[v7] = v6;
          }
          while ( v4 < (unsigned int)result );
        }
        result = (unsigned int)(result - 1);
        s_transientQueueSize = result;
      }
      else
      {
        ++v1;
      }
    }
    while ( v1 - 1 < (unsigned int)result );
  }
  return result;
}

/*
==============
CL_TransientsMP_PurgeStaleUnloadingItems
==============
*/
char CL_TransientsMP_PurgeStaleUnloadingItems(__int64 a1, __int64 a2, TransientMPZoneState a3)
{
  unsigned int v3; 
  TransientFile **v4; 
  __int64 v5; 
  TransientFile *v6; 
  TransientFile *files[1858]; 

  LOBYTE(a3) = 6;
  v3 = CL_TransientsMP_GatherTransientFiles(files, 0, a3, 0);
  if ( !v3 )
    return 0;
  v4 = files;
  v5 = v3;
  do
  {
    v6 = *v4;
    if ( !*v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 923, ASSERT_TYPE_ASSERT, "(files[fileIndex])", (const char *)&queryFormat, "files[fileIndex]") )
      __debugbreak();
    ++v4;
    v6->state[0] = 3;
    --v5;
  }
  while ( v5 );
  CL_TransientsMP_PurgeStaleQueueItems();
  return 1;
}

/*
==============
CL_TransientsMP_RegisterAsset
==============
*/
__int64 CL_TransientsMP_RegisterAsset(const char *assetName, const XAssetType assetType, const unsigned int fileIndex)
{
  unsigned __int8 v6; 
  int v7; 
  const char *i; 
  __int32 v9; 
  unsigned __int16 AssetIndexByHash; 
  unsigned __int16 v11; 
  TransientFile *FileByIndex; 
  __int64 v13; 
  __int64 v14; 
  __int64 v15; 

  if ( !assetName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 3171, ASSERT_TYPE_ASSERT, "(assetName)", (const char *)&queryFormat, "assetName") )
    __debugbreak();
  if ( !Sys_IsDatabaseThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 3172, ASSERT_TYPE_ASSERT, "(Sys_IsDatabaseThread())", (const char *)&queryFormat, "Sys_IsDatabaseThread()") )
    __debugbreak();
  CL_TransientsMP_LockTransientState();
  v6 = *assetName;
  v7 = 0;
  for ( i = assetName; *i; v6 = *i )
  {
    ++i;
    v7 = v6 ^ (16777619 * v7);
  }
  v9 = assetType ^ v7;
  AssetIndexByHash = CL_TransientsMP_FindAssetIndexByHash(v9);
  v11 = truncate_cast<unsigned short,unsigned int>(fileIndex);
  FileByIndex = CL_TransientsMP_GetFileByIndex(v11);
  if ( AssetIndexByHash != 0xFFFF )
  {
    v13 = AssetIndexByHash;
    if ( s_transientAssetEntries[v13].fileIndex != fileIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 3183, ASSERT_TYPE_ASSERT, "( ( s_transientAssetEntries[existingIndex].fileIndex == fileIndex ) )", "( file->filename ) = %s", FileByIndex->filename) )
      __debugbreak();
    if ( s_transientAssetEntries[v13].referenceCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 3184, ASSERT_TYPE_ASSERT, "( ( s_transientAssetEntries[existingIndex].referenceCount == 0 ) )", "( file->filename ) = %s", FileByIndex->filename) )
      __debugbreak();
    Sys_Error((const ObfuscateErrorText)&stru_1442270B0, assetName, FileByIndex->filename);
  }
  v14 = CL_TransientsMP_AllocateTransientEntry_TransientAssetEntry_ntl::fixed_hash_map_unsigned_int_unsigned_short_16384_16411_ntl::hash_unsigned_int__ntl::equal_to_unsigned_int_____(v9, s_transientAssetEntries, 0x4000u, &s_transientAssetHashMap);
  v15 = v14;
  s_transientAssetEntries[v15].fileIndex = truncate_cast<unsigned short,unsigned int>(fileIndex);
  s_transientAssetEntries[v15].nextAsset = FileByIndex->assets;
  if ( (assetType < ASSET_TYPE_PHYSICSLIBRARY || (unsigned int)assetType > (ASSET_TYPE_ASSETLIST|ASSET_TYPE_SERIALIZEDSHADER|0x80)) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,enum XAssetType>(enum XAssetType)", "unsigned", (unsigned __int8)assetType, "signed", assetType) )
    __debugbreak();
  s_transientAssetEntries[v14].assetType = assetType;
  s_transientAssetEntries[v14].assetName = assetName;
  FileByIndex->assets = v14;
  if ( (unsigned __int16)CL_TransientsMP_FindAssetIndexByHash(v9) != (_WORD)v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 3201, ASSERT_TYPE_ASSERT, "(CL_TransientsMP_FindAssetIndexByHash( nameAndTypeHash ) == newAssetIndex)", (const char *)&queryFormat, "CL_TransientsMP_FindAssetIndexByHash( nameAndTypeHash ) == newAssetIndex") )
    __debugbreak();
  if ( !Sys_IsMainThread() && !Sys_IsDatabaseThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 281, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread() || Sys_IsDatabaseThread())", (const char *)&queryFormat, "Sys_IsMainThread() || Sys_IsDatabaseThread()") )
    __debugbreak();
  Sys_UnlockWrite(&s_transientStateLock);
  return (unsigned __int16)v14;
}

/*
==============
CL_TransientsMP_RegisterFile
==============
*/
__int64 CL_TransientsMP_RegisterFile(const char *filename, TransientFileType fileType, unsigned int zoneFlags, unsigned __int64 cost)
{
  unsigned __int8 v6; 
  unsigned __int8 v8; 
  int v9; 
  const char *v10; 
  unsigned __int16 FileIndexByHash; 
  TransientFile *FileByIndex; 
  __int64 v13; 
  __int64 v14; 
  unsigned __int64 v15; 
  unsigned int v16; 
  unsigned int v17; 
  unsigned int v18; 
  __int64 v20; 
  __int64 v21; 

  v6 = fileType;
  if ( !filename && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 3263, ASSERT_TYPE_ASSERT, "(filename)", (const char *)&queryFormat, "filename") )
    __debugbreak();
  if ( !Sys_IsDatabaseThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 3264, ASSERT_TYPE_ASSERT, "(Sys_IsDatabaseThread())", (const char *)&queryFormat, "Sys_IsDatabaseThread()") )
    __debugbreak();
  CL_TransientsMP_LockTransientState();
  v8 = *filename;
  v9 = 0;
  v10 = filename;
  if ( !*filename )
    goto LABEL_48;
  do
  {
    ++v10;
    v9 = v8 ^ (16777619 * v9);
    v8 = *v10;
  }
  while ( *v10 );
  if ( !v9 )
  {
LABEL_48:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 3269, ASSERT_TYPE_ASSERT, "(fileHash != 0)", (const char *)&queryFormat, "fileHash != 0") )
      __debugbreak();
  }
  FileIndexByHash = CL_TransientsMP_FindFileIndexByHash(v9);
  if ( FileIndexByHash != 0xFFFF )
  {
    FileByIndex = CL_TransientsMP_GetFileByIndex(FileIndexByHash);
    if ( FileByIndex->referenceCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 3277, ASSERT_TYPE_ASSERT, "( ( existingFile->referenceCount == 0 ) )", "( filename ) = %s", filename) )
      __debugbreak();
    Sys_Error((const ObfuscateErrorText)&stru_1442273C0, FileByIndex->filename);
  }
  v13 = CL_TransientsMP_AllocateTransientEntry_TransientFile_ntl::fixed_hash_map_unsigned_int_unsigned_short_10253_10391_ntl::hash_unsigned_int__ntl::equal_to_unsigned_int_____(v9, s_transientFiles, 0x280Du, &s_transientFileHashMap);
  v14 = v13;
  s_transientFiles[v14].filename = filename;
  v15 = (cost + 0xFFFF) >> 16;
  s_transientFiles[v14].state[0] = 0;
  s_transientFiles[v14].type[0] = v6;
  s_transientFiles[v14].assets = -1;
  if ( v15 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned __int64>(unsigned __int64)", "unsigned", (unsigned __int16)v15, "unsigned", v15) )
    __debugbreak();
  s_transientFiles[v14].fileCostMul64k = v15;
  v16 = CL_TransientsMP_GetAndValidateExpectedTransientZone((const TransientFileType)v6, zoneFlags);
  if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 295, ASSERT_TYPE_ASSERT, "(flags)", (const char *)&queryFormat, "flags") )
    __debugbreak();
  if ( ((v16 - 1) & v16) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 296, ASSERT_TYPE_ASSERT, "(IsPowerOf2( flags ))", (const char *)&queryFormat, "IsPowerOf2( flags )") )
    __debugbreak();
  v17 = __lzcnt(v16);
  v18 = 31 - v17;
  if ( 31 - v17 > 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,unsigned int>(unsigned int)", "unsigned", (unsigned __int8)(31 - v17), "unsigned", v18) )
    __debugbreak();
  if ( (unsigned __int8)v18 > 0x1Fu )
  {
    LODWORD(v21) = 31;
    LODWORD(v20) = (unsigned __int8)v18;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 288, ASSERT_TYPE_ASSERT, "( shiftedFlags ) <= ( 31 )", "%s <= %s\n\t%u, %u", "shiftedFlags", "31", v20, v21) )
      __debugbreak();
  }
  if ( 1 << v18 != v16 )
  {
    if ( (unsigned __int8)v18 > 0x1Fu )
    {
      LODWORD(v21) = 31;
      LODWORD(v20) = (unsigned __int8)v18;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 288, ASSERT_TYPE_ASSERT, "( shiftedFlags ) <= ( 31 )", "%s <= %s\n\t%u, %u", "shiftedFlags", "31", v20, v21) )
        __debugbreak();
    }
    LODWORD(v21) = v16;
    LODWORD(v20) = 1 << v18;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 298, ASSERT_TYPE_ASSERT, "( CL_TransientsMP_ConvertShiftedToFlags( cntLz ) ) == ( flags )", "%s == %s\n\t%u, %u", "CL_TransientsMP_ConvertShiftedToFlags( cntLz )", "flags", v20, v21) )
      __debugbreak();
  }
  s_transientFiles[v14].zoneFlagShifted = v18;
  if ( (unsigned __int16)CL_TransientsMP_FindFileIndexByHash(v9) != (_WORD)v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 3296, ASSERT_TYPE_ASSERT, "(CL_TransientsMP_FindFileIndexByHash( fileHash ) == newFileIndex)", (const char *)&queryFormat, "CL_TransientsMP_FindFileIndexByHash( fileHash ) == newFileIndex") )
    __debugbreak();
  if ( !Sys_IsMainThread() && !Sys_IsDatabaseThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 281, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread() || Sys_IsDatabaseThread())", (const char *)&queryFormat, "Sys_IsMainThread() || Sys_IsDatabaseThread()") )
    __debugbreak();
  Sys_UnlockWrite(&s_transientStateLock);
  return (unsigned __int16)v13;
}

/*
==============
CL_TransientsMP_RemoveFromQueue
==============
*/
void CL_TransientsMP_RemoveFromQueue(unsigned int removeIndex)
{
  unsigned int v1; 
  unsigned int v2; 
  TransientQueueEntry *v3; 
  TransientQueueEntry v4; 
  __int64 v5; 

  v1 = s_transientQueueSize;
  v2 = removeIndex + 1;
  if ( removeIndex + 1 < s_transientQueueSize )
  {
    v3 = &s_transientQueue[v2];
    do
    {
      v4 = *v3;
      v5 = v2++ - 1;
      ++v3;
      s_transientQueue[v5] = v4;
    }
    while ( v2 < v1 );
  }
  s_transientQueueSize = v1 - 1;
}

/*
==============
CL_TransientsMP_Reset
==============
*/
void *CL_TransientsMP_Reset()
{
  void *result; 
  TransientFile *v1; 
  unsigned __int16 i; 
  TransientAssetEntry *v3; 
  unsigned __int16 j; 

  if ( s_transientQueueSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 1817, ASSERT_TYPE_ASSERT, "(s_transientQueueSize == 0)", (const char *)&queryFormat, "s_transientQueueSize == 0") )
    __debugbreak();
  s_transientQueueSize = 0;
  result = memset_0(s_debugLoadedRingBufferEnties, 0, sizeof(s_debugLoadedRingBufferEnties));
  s_debugLoadedRingBufferSize = 0;
  v1 = s_transientFiles;
  for ( i = 0; i < 0x280Du; ++i )
  {
    if ( (*(_BYTE *)&v1->TransientEntryBase & 1) != 0 )
    {
      v1->referenceCount = 0;
      v1->state[0] = 0;
    }
    ++v1;
  }
  v3 = s_transientAssetEntries;
  for ( j = 0; j < 0x4000u; ++j )
  {
    if ( (*(_BYTE *)&v3->TransientEntryBase & 1) != 0 )
    {
      v3->referenceCount = 0;
      *(_BYTE *)&v3->TransientEntryBase &= 0xF1u;
    }
    ++v3;
  }
  if ( s_transientSystemLoadState == SEARCHING || s_transientSystemLoadState == QOSING )
    s_transientSystemLoadState = IDLE;
  return result;
}

/*
==============
CL_TransientsMP_ResetOverridden
==============
*/
void CL_TransientsMP_ResetOverridden(const char *name, const XAssetType type)
{
  unsigned __int8 v4; 
  int v5; 
  const char *i; 
  unsigned __int16 AssetIndexByHash; 
  TransientAssetEntry *AssetByIndex; 
  char v9; 
  char v10; 
  bool v11; 
  __int64 v12; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 3458, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 3459, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
    __debugbreak();
  if ( (unsigned int)type >= ASSET_TYPE_COUNT )
  {
    LODWORD(v12) = type;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 3460, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( ASSET_TYPE_COUNT )", "type doesn't index ASSET_TYPE_COUNT\n\t%i not in [0, %i)", v12, 113) )
      __debugbreak();
  }
  if ( type == ASSET_TYPE_XMODEL )
  {
    v4 = *name;
    v5 = 0;
    for ( i = name; *i; v4 = *i )
    {
      ++i;
      v5 = v4 ^ (16777619 * v5);
    }
    AssetIndexByHash = CL_TransientsMP_FindAssetIndexByHash(v5 ^ 9u);
    if ( AssetIndexByHash != 0xFFFF )
    {
      AssetByIndex = CL_TransientsMP_GetAssetByIndex(AssetIndexByHash);
      if ( !AssetByIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 3467, ASSERT_TYPE_ASSERT, "(asset)", (const char *)&queryFormat, "asset") )
        __debugbreak();
      if ( (*(_BYTE *)&AssetByIndex->TransientEntryBase & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 3468, ASSERT_TYPE_ASSERT, "(asset->inUse)", (const char *)&queryFormat, "asset->inUse") )
        __debugbreak();
      if ( (*(_BYTE *)&AssetByIndex->TransientEntryBase & 4) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 3469, ASSERT_TYPE_ASSERT, "(!asset->overrideNeedsReload)", (const char *)&queryFormat, "!asset->overrideNeedsReload") )
        __debugbreak();
      if ( (*(_BYTE *)&AssetByIndex->TransientEntryBase & 8) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 3470, ASSERT_TYPE_ASSERT, "(!asset->overrideNeedsUnload)", (const char *)&queryFormat, "!asset->overrideNeedsUnload") )
        __debugbreak();
      v9 = (char)AssetByIndex->TransientEntryBase;
      if ( (*(_BYTE *)&AssetByIndex->TransientEntryBase & 2) == 0 )
      {
        if ( AssetByIndex->referenceCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 3474, ASSERT_TYPE_ASSERT, "( ( asset->referenceCount == 0 ) )", "( name ) = %s", name) )
          __debugbreak();
        v9 = (char)AssetByIndex->TransientEntryBase;
      }
      v10 = v9 & 0xFD;
      v11 = AssetByIndex->referenceCount == 0;
      *(_BYTE *)&AssetByIndex->TransientEntryBase = v10;
      if ( !v11 )
      {
        s_transientOverrideNeedsFixup = 1;
        *(_BYTE *)&AssetByIndex->TransientEntryBase = v10 | 4;
      }
    }
  }
}

/*
==============
CL_TransientsMP_SetFileLoadPriorityInternal
==============
*/
void CL_TransientsMP_SetFileLoadPriorityInternal(const unsigned __int16 fileIndex, const unsigned int priority)
{
  TransientFile *FileByIndex; 
  __int64 v5; 

  if ( fileIndex == 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 2714, ASSERT_TYPE_ASSERT, "(fileIndex != UNUSED_FILE)", (const char *)&queryFormat, "fileIndex != UNUSED_FILE") )
    __debugbreak();
  FileByIndex = CL_TransientsMP_GetFileByIndex(fileIndex);
  if ( !FileByIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 2717, ASSERT_TYPE_ASSERT, "(file)", (const char *)&queryFormat, "file") )
    __debugbreak();
  if ( !FileByIndex->referenceCount )
  {
    LODWORD(v5) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 2719, ASSERT_TYPE_ASSERT, "( 1 ) <= ( file->referenceCount ) && ( file->referenceCount ) <= ( 0xffui8 )", "file->referenceCount not in [1, UINT8_MAX]\n\t%i not in [%i, %i]", v5, 1, 255) )
      __debugbreak();
  }
  if ( FileByIndex->state[0] == 1 )
  {
    if ( DB_PollFastfileState(FileByIndex->filename) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 2723, ASSERT_TYPE_ASSERT, "( ( ( DB_PollFastfileState( file->filename ) == DB_FastfileState::NOT_LOADED ) ) )", "( file->filename ) = %s", FileByIndex->filename) )
      __debugbreak();
    if ( !CL_TransientsMP_UpdatePriority(FileByIndex, priority) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 2724, ASSERT_TYPE_ASSERT, "(CL_TransientsMP_UpdatePriority( file, priority ))", (const char *)&queryFormat, "CL_TransientsMP_UpdatePriority( file, priority )") )
      __debugbreak();
  }
  else
  {
    CL_TransientsMP_UpdatePriority(FileByIndex, priority);
  }
}

/*
==============
CL_TransientsMP_SetLoadPriorityByAssetIndex
==============
*/
void CL_TransientsMP_SetLoadPriorityByAssetIndex(const unsigned __int16 assetIndex, const unsigned int priority)
{
  const char *AssetName; 
  TransientAssetEntry *AssetByIndex; 
  __int64 v6; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 2794, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  AssetName = CL_TransientsMP_GetAssetName(assetIndex);
  if ( !AssetName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 2798, ASSERT_TYPE_ASSERT, "(assetName)", (const char *)&queryFormat, "assetName") )
    __debugbreak();
  if ( assetIndex == 0xFFFF )
  {
    CL_TransientMP_StatusPrint("CL_TransientsMP_SetLoadPriority() '%s' is not a transient model, no need to load it.\n", AssetName);
  }
  else
  {
    AssetByIndex = CL_TransientsMP_GetAssetByIndex(assetIndex);
    if ( !AssetByIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 2808, ASSERT_TYPE_ASSERT, "(asset)", (const char *)&queryFormat, "asset") )
      __debugbreak();
    if ( !AssetByIndex->referenceCount )
    {
      LODWORD(v6) = 0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 2811, ASSERT_TYPE_ASSERT, "( 1 ) <= ( asset->referenceCount ) && ( asset->referenceCount ) <= ( 0xffui8 )", "asset->referenceCount not in [1, UINT8_MAX]\n\t%i not in [%i, %i]", v6, 1, 255) )
        __debugbreak();
    }
    if ( (*(_BYTE *)&AssetByIndex->TransientEntryBase & 2) != 0 )
      CL_TransientMP_StatusPrint("CL_TransientsMP_SetLoadPriority() '%s' was overridden by an upstream fastfile, no need to load it.\n", AssetName);
    else
      CL_TransientsMP_SetFileLoadPriorityInternal(AssetByIndex->fileIndex, priority);
  }
}

/*
==============
CL_TransientsMP_SetLoadPriorityByFile
==============
*/
void CL_TransientsMP_SetLoadPriorityByFile(const char *filename, const unsigned int priority)
{
  unsigned __int8 v4; 
  int v5; 
  const char *v6; 
  unsigned __int16 FileIndexByHash; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 2736, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( !filename && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 2737, ASSERT_TYPE_ASSERT, "(filename)", (const char *)&queryFormat, "filename") )
    __debugbreak();
  v4 = *filename;
  v5 = 0;
  v6 = filename;
  if ( !*filename )
    goto LABEL_18;
  do
  {
    ++v6;
    v5 = v4 ^ (16777619 * v5);
    v4 = *v6;
  }
  while ( *v6 );
  if ( !v5 )
  {
LABEL_18:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 2740, ASSERT_TYPE_ASSERT, "(fileHash != 0)", (const char *)&queryFormat, "fileHash != 0") )
      __debugbreak();
  }
  FileIndexByHash = CL_TransientsMP_FindFileIndexByHash(v5);
  if ( FileIndexByHash == 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 2743, ASSERT_TYPE_ASSERT, "( ( fileIndex != UNUSED_FILE ) )", "( filename ) = %s", filename) )
    __debugbreak();
  CL_TransientsMP_SetFileLoadPriorityInternal(FileIndexByHash, priority);
}

/*
==============
CL_TransientsMP_SetLoadPriorityByFileIndex
==============
*/
void CL_TransientsMP_SetLoadPriorityByFileIndex(unsigned __int16 fileIndex, unsigned int priority)
{
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 2751, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  CL_TransientsMP_SetFileLoadPriorityInternal(fileIndex, priority);
}

/*
==============
CL_TransientsMP_SetLoadPriorityByXModel
==============
*/
void CL_TransientsMP_SetLoadPriorityByXModel(const char *xmodelName, const unsigned int priority)
{
  unsigned __int8 v4; 
  int v5; 
  const char *i; 
  unsigned __int16 AssetIndexByHash; 
  TransientAssetEntry *AssetByIndex; 
  __int64 v9; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 2761, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( !xmodelName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 2762, ASSERT_TYPE_ASSERT, "(xmodelName)", (const char *)&queryFormat, "xmodelName") )
    __debugbreak();
  v4 = *xmodelName;
  v5 = 0;
  for ( i = xmodelName; *i; v4 = *i )
  {
    ++i;
    v5 = v4 ^ (16777619 * v5);
  }
  AssetIndexByHash = CL_TransientsMP_FindAssetIndexByHash(v5 ^ 9u);
  if ( AssetIndexByHash == 0xFFFF )
  {
    CL_TransientMP_StatusPrint("CL_TransientsMP_SetLoadPriority() '%s' is not a transient model, no need to load it.\n", xmodelName);
  }
  else
  {
    AssetByIndex = CL_TransientsMP_GetAssetByIndex(AssetIndexByHash);
    if ( !AssetByIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 2772, ASSERT_TYPE_ASSERT, "(asset)", (const char *)&queryFormat, "asset") )
      __debugbreak();
    if ( !AssetByIndex->referenceCount )
    {
      LODWORD(v9) = 0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 2775, ASSERT_TYPE_ASSERT, "( 1 ) <= ( asset->referenceCount ) && ( asset->referenceCount ) <= ( 0xffui8 )", "asset->referenceCount not in [1, UINT8_MAX]\n\t%i not in [%i, %i]", v9, 1, 255) )
        __debugbreak();
    }
    if ( (*(_BYTE *)&AssetByIndex->TransientEntryBase & 2) != 0 )
      CL_TransientMP_StatusPrint("CL_TransientsMP_SetLoadPriority() '%s' was overridden by an upstream fastfile, no need to load it.\n", xmodelName);
    else
      CL_TransientsMP_SetFileLoadPriorityInternal(AssetByIndex->fileIndex, priority);
  }
}

/*
==============
CL_TransientsMP_SetOverridden
==============
*/
void CL_TransientsMP_SetOverridden(const char *name, const XAssetType type)
{
  unsigned __int8 v4; 
  int v5; 
  const char *i; 
  unsigned __int16 AssetIndexByHash; 
  TransientAssetEntry *AssetByIndex; 
  char v9; 
  __int64 v10; 

  if ( !Sys_IsDatabaseThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 3427, ASSERT_TYPE_ASSERT, "(Sys_IsDatabaseThread())", (const char *)&queryFormat, "Sys_IsDatabaseThread()") )
    __debugbreak();
  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 3428, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
    __debugbreak();
  if ( (unsigned int)type >= ASSET_TYPE_COUNT )
  {
    LODWORD(v10) = type;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 3429, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( ASSET_TYPE_COUNT )", "type doesn't index ASSET_TYPE_COUNT\n\t%i not in [0, %i)", v10, 113) )
      __debugbreak();
  }
  if ( type == ASSET_TYPE_XMODEL )
  {
    v4 = *name;
    v5 = 0;
    for ( i = name; *i; v4 = *i )
    {
      ++i;
      v5 = v4 ^ (16777619 * v5);
    }
    AssetIndexByHash = CL_TransientsMP_FindAssetIndexByHash(v5 ^ 9u);
    if ( AssetIndexByHash != 0xFFFF )
    {
      AssetByIndex = CL_TransientsMP_GetAssetByIndex(AssetIndexByHash);
      if ( !AssetByIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 3436, ASSERT_TYPE_ASSERT, "(asset)", (const char *)&queryFormat, "asset") )
        __debugbreak();
      if ( (*(_BYTE *)&AssetByIndex->TransientEntryBase & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 3437, ASSERT_TYPE_ASSERT, "(asset->inUse)", (const char *)&queryFormat, "asset->inUse") )
        __debugbreak();
      if ( (*(_BYTE *)&AssetByIndex->TransientEntryBase & 4) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 3438, ASSERT_TYPE_ASSERT, "(!asset->overrideNeedsReload)", (const char *)&queryFormat, "!asset->overrideNeedsReload") )
        __debugbreak();
      if ( (*(_BYTE *)&AssetByIndex->TransientEntryBase & 8) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 3439, ASSERT_TYPE_ASSERT, "(!asset->overrideNeedsUnload)", (const char *)&queryFormat, "!asset->overrideNeedsUnload") )
        __debugbreak();
      if ( (*(_BYTE *)&AssetByIndex->TransientEntryBase & 2) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 3440, ASSERT_TYPE_ASSERT, "( !asset->isOverridden )", "Transient asset %s(%s) was not expected to be overriden. Refcount = %u", name, g_assetNames[9], AssetByIndex->referenceCount) )
        __debugbreak();
      v9 = (char)AssetByIndex->TransientEntryBase;
      if ( AssetByIndex->referenceCount )
      {
        s_transientOverrideNeedsFixup = 1;
        *(_BYTE *)&AssetByIndex->TransientEntryBase = v9 | 8;
      }
      else
      {
        *(_BYTE *)&AssetByIndex->TransientEntryBase = v9 | 2;
      }
    }
  }
}

/*
==============
CL_TransientsMP_ShouldStopYieldingToStreamer
==============
*/
char CL_TransientsMP_ShouldStopYieldingToStreamer()
{
  int v0; 
  const dvar_t *v2; 
  double v3; 
  float v4; 
  double Quality_Image; 
  const dvar_t *v6; 
  float value; 
  float v8; 
  const dvar_t *v9; 

  if ( s_transientSystemLoadState != ERRORING && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 1572, ASSERT_TYPE_ASSERT, "(s_transientSystemLoadState == TransientMPLoadState::YIELDING)", (const char *)&queryFormat, "s_transientSystemLoadState == TransientMPLoadState::YIELDING") )
    __debugbreak();
  v0 = Sys_Milliseconds();
  if ( v0 <= s_transientYieldTime + CL_TransientsMP_GetYieldTimeout() )
  {
    if ( Stream_CanStreamMore() )
    {
      v2 = DVARINT_cl_transient_mp_yield_priority_timeout;
      if ( !DVARINT_cl_transient_mp_yield_priority_timeout && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_transient_mp_yield_priority_timeout") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v2);
      if ( s_transientYieldTime < v0 - v2->current.integer )
      {
        v3 = CL_StreamViews_MaxParametricVelocity();
        v4 = *(float *)&v3;
        Quality_Image = Stream_LoadQuality_Image();
        if ( CL_TransientsMP_HasLoadRequestsAtPriority(0xFA1u) )
        {
          if ( DB_Transients_VerbosePrint() )
            CL_TransientMP_StatusPrint("Yield for streamer timed out for loading near tiles after %d milliseconds\n", (unsigned int)(v0 - s_transientYieldTime));
          return 1;
        }
        v6 = DVARVEC2_cl_transient_mp_yield_medium_priority;
        if ( !DVARVEC2_cl_transient_mp_yield_medium_priority && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 727, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_transient_mp_yield_medium_priority") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v6);
        value = v6->current.value;
        v8 = v6->current.vector.v[1];
        if ( CL_TransientsMP_HasLoadRequestsAtPriority(0xBB9u) && *(float *)&Quality_Image >= (float)((float)((float)(1.0 - v4) * value) + (float)(v8 * v4)) )
        {
          if ( DB_Transients_VerbosePrint() )
            CL_TransientMP_StatusPrint("Yield for streamer timed out for loading medium tiles after %d milliseconds\n", (unsigned int)(v0 - s_transientYieldTime));
          return 1;
        }
        v9 = DVARVEC2_cl_transient_mp_yield_far_priority;
        if ( !DVARVEC2_cl_transient_mp_yield_far_priority && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 727, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_transient_mp_yield_far_priority") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v9);
        if ( *(float *)&Quality_Image >= (float)((float)(v4 * v9->current.vector.v[1]) + (float)((float)(1.0 - v4) * v9->current.value)) )
        {
          if ( DB_Transients_VerbosePrint() )
            CL_TransientMP_StatusPrint("Yield for streamer finished loading far tiles after %d milliseconds\n", (unsigned int)(v0 - s_transientYieldTime));
          return 1;
        }
      }
      return 0;
    }
  }
  else if ( DB_Transients_VerbosePrint() )
  {
    CL_TransientMP_StatusPrint("Yield for streamer timed out after %d milliseconds\n", (unsigned int)(v0 - s_transientYieldTime));
  }
  return 1;
}

/*
==============
CL_TransientsMP_ShouldYieldToStreamer
==============
*/
char CL_TransientsMP_ShouldYieldToStreamer()
{
  double v0; 
  float v1; 
  double Quality_Image; 
  const dvar_t *v3; 
  float v4; 
  const dvar_t *v5; 
  const dvar_t *v7; 
  const char *v8; 
  const dvar_t *v9; 

  if ( s_transientSystemLoadState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 1419, ASSERT_TYPE_ASSERT, "(s_transientSystemLoadState == TransientMPLoadState::IDLE)", (const char *)&queryFormat, "s_transientSystemLoadState == TransientMPLoadState::IDLE") )
    __debugbreak();
  v0 = CL_StreamViews_MaxParametricVelocity();
  v1 = *(float *)&v0;
  Quality_Image = Stream_LoadQuality_Image();
  v3 = DVARVEC2_cl_transient_mp_yield_to_streamer_quality_threshold;
  if ( !DVARVEC2_cl_transient_mp_yield_to_streamer_quality_threshold && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 727, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_transient_mp_yield_to_streamer_quality_threshold") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  v4 = 1.0 - v1;
  if ( *(float *)&Quality_Image > (float)((float)(v1 * v3->current.vector.v[1]) + (float)((float)(1.0 - v1) * v3->current.value)) || !CL_TransientsMP_PeekTransientQueueActive() )
    return 0;
  v5 = DVARBOOL_cl_transient_mp_streamer_interrupt_enabled;
  if ( !DVARBOOL_cl_transient_mp_streamer_interrupt_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_transient_mp_streamer_interrupt_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( !v5->current.enabled || !CL_TransientsMP_HasPendingLoadsAbovePriority(0xFA1u) )
  {
    if ( !Stream_CanStreamMore() )
    {
      if ( DB_Transients_VerbosePrint() )
        CL_TransientMP_StatusPrint("Not yielding to streamer since streamer cannot load more\n");
      return 0;
    }
    if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_cl_transient_mp_streamer_interrupt_enabled, "cl_transient_mp_streamer_interrupt_enabled") && CL_TransientsMP_HasPendingLoadsAbovePriority(0xBB9u) )
    {
      v7 = DVARVEC2_cl_transient_mp_yield_medium_priority;
      if ( !DVARVEC2_cl_transient_mp_yield_medium_priority && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 727, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_transient_mp_yield_medium_priority") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v7);
      if ( *(float *)&Quality_Image >= (float)((float)(v1 * v7->current.vector.v[1]) + (float)(v4 * v7->current.value)) )
        return 0;
      if ( DB_Transients_VerbosePrint() )
      {
        v8 = "Yield to streamer before loading medium tiles (Streaming quality: %f)\n";
LABEL_35:
        CL_TransientMP_StatusPrint(v8, *(float *)&Quality_Image);
      }
    }
    else
    {
      v9 = DVARVEC2_cl_transient_mp_yield_far_priority;
      if ( !DVARVEC2_cl_transient_mp_yield_far_priority && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 727, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_transient_mp_yield_far_priority") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v9);
      if ( *(float *)&Quality_Image >= (float)((float)(v1 * v9->current.vector.v[1]) + (float)(v4 * v9->current.value)) )
        return 0;
      if ( DB_Transients_VerbosePrint() )
      {
        v8 = "Yield to streamer before loading far tiles (Streaming quality: %f)\n";
        goto LABEL_35;
      }
    }
    return 1;
  }
  if ( DB_Transients_VerbosePrint() )
    CL_TransientMP_StatusPrint("Not yielding to streamer because we have near tiles to load\n");
  return 0;
}

/*
==============
CL_TransientsMP_Shutdown
==============
*/
void CL_TransientsMP_Shutdown(void)
{
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 1934, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  CL_TransientsCollisionMP_Shutdown();
  if ( s_transientSystemLoadState )
  {
    CL_TransientMP_StatusPrint("CL_ShutdownTransients: Syncing for existing DB loads...\n");
    DB_SyncXAssetsBlocking();
    if ( !DB_AreFastfileLoadsCompleted() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 1945, ASSERT_TYPE_ASSERT, "(DB_AreFastfileLoadsCompleted())", (const char *)&queryFormat, "DB_AreFastfileLoadsCompleted()") )
      __debugbreak();
  }
  Sys_LockWrite(&s_shutdownLock);
  s_transientQueueSize = 0;
  CL_TransientsMP_Reset();
  Sys_UnlockWrite(&s_shutdownLock);
}

/*
==============
CL_TransientsMP_StallUntilCompletion
==============
*/
void CL_TransientsMP_StallUntilCompletion(void)
{
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 3380, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( !CL_TransientsMP_IsInHostMigration() )
  {
    if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 2406, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
      __debugbreak();
    if ( CL_TransientsMP_IsInHostMigration() )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 2407, ASSERT_TYPE_ASSERT, "(!CL_TransientsMP_IsInHostMigration())", (const char *)&queryFormat, "!CL_TransientsMP_IsInHostMigration()") )
        __debugbreak();
    }
    R_BeginRemoteScreenUpdateWithAnimatedTexture();
    Sys_ProcessWorkerCmdsWithTimeout(CL_TransientsMP_WaitUntilProcessingDone, NULL);
    R_EndRemoteScreenUpdateWithAnimatedTexture();
  }
}

/*
==============
CL_TransientsMP_UnloadAllWorldTransients
==============
*/
void CL_TransientsMP_UnloadAllWorldTransients()
{
  unsigned __int16 v0; 
  TransientFile *v1; 
  unsigned __int8 zoneFlagShifted; 
  int v3; 
  __int64 v4; 
  __int64 v5; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 2341, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( CL_TransientsMP_IsInHostMigration() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 2342, ASSERT_TYPE_ASSERT, "(!CL_TransientsMP_IsInHostMigration())", (const char *)&queryFormat, "!CL_TransientsMP_IsInHostMigration()") )
    __debugbreak();
  CL_TransientsMP_LockTransientState();
  v0 = 0;
  v1 = s_transientFiles;
  do
  {
    if ( (*(_BYTE *)&v1->TransientEntryBase & 1) != 0 )
    {
      zoneFlagShifted = v1->zoneFlagShifted;
      if ( zoneFlagShifted > 0x1Fu )
      {
        LODWORD(v5) = 31;
        LODWORD(v4) = zoneFlagShifted;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 288, ASSERT_TYPE_ASSERT, "( shiftedFlags ) <= ( 31 )", "%s <= %s\n\t%u, %u", "shiftedFlags", "31", v4, v5) )
          __debugbreak();
      }
      v3 = 1 << zoneFlagShifted;
      if ( (1 << zoneFlagShifted == 0x8000 || v3 == 0x10000 || v3 == 0x20000 || v3 == 0x40000) && v1->referenceCount )
      {
        do
          CL_TransientsMP_UnloadFileInternal(v1);
        while ( v1->referenceCount );
      }
    }
    ++v0;
    ++v1;
  }
  while ( v0 < 0x280Du );
  if ( !Sys_IsMainThread() && !Sys_IsDatabaseThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 281, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread() || Sys_IsDatabaseThread())", (const char *)&queryFormat, "Sys_IsMainThread() || Sys_IsDatabaseThread()") )
    __debugbreak();
  Sys_UnlockWrite(&s_transientStateLock);
}

/*
==============
CL_TransientsMP_UnloadAssetIndexInternal
==============
*/
void CL_TransientsMP_UnloadAssetIndexInternal(const unsigned __int16 assetIndex)
{
  const char *AssetName; 
  TransientAssetEntry *AssetByIndex; 
  TransientFile *FileByIndex; 

  if ( assetIndex != 0xFFFF )
  {
    AssetName = CL_TransientsMP_GetAssetName(assetIndex);
    if ( !AssetName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 2164, ASSERT_TYPE_ASSERT, "( ( assetName != nullptr ) )", "( assetName ) = %p", NULL) )
      __debugbreak();
    AssetByIndex = CL_TransientsMP_GetAssetByIndex(assetIndex);
    if ( !AssetByIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 2168, ASSERT_TYPE_ASSERT, "(asset)", (const char *)&queryFormat, "asset") )
      __debugbreak();
    FileByIndex = CL_TransientsMP_GetFileByIndex(AssetByIndex->fileIndex);
    if ( !FileByIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 2171, ASSERT_TYPE_ASSERT, "(file)", (const char *)&queryFormat, "file") )
      __debugbreak();
    if ( !AssetByIndex->referenceCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 2173, ASSERT_TYPE_ASSERT, "(asset->referenceCount > 0)", (const char *)&queryFormat, "asset->referenceCount > 0") )
      __debugbreak();
    --AssetByIndex->referenceCount;
    if ( (*(_BYTE *)&AssetByIndex->TransientEntryBase & 4) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 2177, ASSERT_TYPE_ASSERT, "( !asset->overrideNeedsReload )", "Trying to unload '%s', when we've just unset the override and wanted to reload it.", AssetName) )
      __debugbreak();
    if ( (*(_BYTE *)&AssetByIndex->TransientEntryBase & 2) != 0 )
    {
      if ( (*(_BYTE *)&AssetByIndex->TransientEntryBase & 8) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 2181, ASSERT_TYPE_ASSERT, "(!asset->overrideNeedsUnload)", (const char *)&queryFormat, "!asset->overrideNeedsUnload") )
        __debugbreak();
      CL_TransientMP_StatusPrint("CL_TransientsMP_UnloadAssetIndexInternal() '%s' was overridden by an upstream fastfile, no need to unload it.\n", AssetName);
    }
    else
    {
      CL_TransientsMP_UnloadFileInternal(FileByIndex);
      if ( !AssetByIndex->referenceCount && (*(_BYTE *)&AssetByIndex->TransientEntryBase & 8) != 0 )
      {
        if ( (*(_BYTE *)&AssetByIndex->TransientEntryBase & 2) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 2193, ASSERT_TYPE_ASSERT, "(!asset->isOverridden)", (const char *)&queryFormat, "!asset->isOverridden") )
          __debugbreak();
        *(_BYTE *)&AssetByIndex->TransientEntryBase = *(_BYTE *)&AssetByIndex->TransientEntryBase & 0xF5 | 2;
      }
    }
  }
}

/*
==============
CL_TransientsMP_UnloadByAssetIndex
==============
*/
void CL_TransientsMP_UnloadByAssetIndex(unsigned __int16 assetIndex)
{
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 2315, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  CL_TransientsMP_LockTransientState();
  CL_TransientsMP_UnloadAssetIndexInternal(assetIndex);
  if ( !Sys_IsMainThread() && !Sys_IsDatabaseThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 281, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread() || Sys_IsDatabaseThread())", (const char *)&queryFormat, "Sys_IsMainThread() || Sys_IsDatabaseThread()") )
    __debugbreak();
  Sys_UnlockWrite(&s_transientStateLock);
}

/*
==============
CL_TransientsMP_UnloadByFile
==============
*/
void CL_TransientsMP_UnloadByFile(const char *filename)
{
  unsigned __int8 v2; 
  int v3; 
  const char *v4; 
  unsigned __int16 FileIndexByHash; 
  TransientFile *FileByIndex; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 2278, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( !filename && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 2279, ASSERT_TYPE_ASSERT, "(filename)", (const char *)&queryFormat, "filename") )
    __debugbreak();
  CL_TransientsMP_LockTransientState();
  v2 = *filename;
  v3 = 0;
  v4 = filename;
  if ( !*filename )
    goto LABEL_25;
  do
  {
    ++v4;
    v3 = v2 ^ (16777619 * v3);
    v2 = *v4;
  }
  while ( *v4 );
  if ( !v3 )
  {
LABEL_25:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 2284, ASSERT_TYPE_ASSERT, "(fileHash != 0)", (const char *)&queryFormat, "fileHash != 0") )
      __debugbreak();
  }
  FileIndexByHash = CL_TransientsMP_FindFileIndexByHash(v3);
  if ( FileIndexByHash == 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 2287, ASSERT_TYPE_ASSERT, "( ( fileIndex != UNUSED_FILE ) )", "( filename ) = %s", filename) )
    __debugbreak();
  FileByIndex = CL_TransientsMP_GetFileByIndex(FileIndexByHash);
  if ( !FileByIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 2290, ASSERT_TYPE_ASSERT, "(file)", (const char *)&queryFormat, "file") )
    __debugbreak();
  CL_TransientsMP_UnloadFileInternal(FileByIndex);
  if ( !Sys_IsMainThread() && !Sys_IsDatabaseThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 281, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread() || Sys_IsDatabaseThread())", (const char *)&queryFormat, "Sys_IsMainThread() || Sys_IsDatabaseThread()") )
    __debugbreak();
  Sys_UnlockWrite(&s_transientStateLock);
}

/*
==============
CL_TransientsMP_UnloadByFileIndex
==============
*/
void CL_TransientsMP_UnloadByFileIndex(unsigned __int16 fileIndex)
{
  TransientFile *FileByIndex; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 2300, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  CL_TransientsMP_LockTransientState();
  FileByIndex = CL_TransientsMP_GetFileByIndex(fileIndex);
  if ( !FileByIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 2305, ASSERT_TYPE_ASSERT, "(file)", (const char *)&queryFormat, "file") )
    __debugbreak();
  CL_TransientsMP_UnloadFileInternal(FileByIndex);
  if ( !Sys_IsMainThread() && !Sys_IsDatabaseThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 281, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread() || Sys_IsDatabaseThread())", (const char *)&queryFormat, "Sys_IsMainThread() || Sys_IsDatabaseThread()") )
    __debugbreak();
  Sys_UnlockWrite(&s_transientStateLock);
}

/*
==============
CL_TransientsMP_UnloadByXModel
==============
*/
void CL_TransientsMP_UnloadByXModel(const char *xmodelName)
{
  unsigned __int8 v2; 
  int i; 
  unsigned __int16 AssetIndexByHash; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 2327, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( !xmodelName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 2328, ASSERT_TYPE_ASSERT, "(xmodelName)", (const char *)&queryFormat, "xmodelName") )
    __debugbreak();
  CL_TransientsMP_LockTransientState();
  v2 = *xmodelName;
  for ( i = 0; *xmodelName; v2 = *xmodelName )
  {
    ++xmodelName;
    i = v2 ^ (16777619 * i);
  }
  AssetIndexByHash = CL_TransientsMP_FindAssetIndexByHash(i ^ 9u);
  CL_TransientsMP_UnloadAssetIndexInternal(AssetIndexByHash);
  if ( !Sys_IsMainThread() && !Sys_IsDatabaseThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 281, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread() || Sys_IsDatabaseThread())", (const char *)&queryFormat, "Sys_IsMainThread() || Sys_IsDatabaseThread()") )
    __debugbreak();
  Sys_UnlockWrite(&s_transientStateLock);
}

/*
==============
CL_TransientsMP_UnloadFileInternal
==============
*/
void CL_TransientsMP_UnloadFileInternal(TransientFile *const file)
{
  unsigned __int16 i; 
  TransientAssetEntry *AssetByIndex; 
  TransientAssetEntry *v5; 
  DB_FastfileState v6; 
  DB_FastfileState v7; 
  DB_FastfileState v8; 
  bool v9; 
  __int64 v10; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 2038, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( !file && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 2039, ASSERT_TYPE_ASSERT, "(file)", (const char *)&queryFormat, "file") )
    __debugbreak();
  if ( !file->referenceCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 2041, ASSERT_TYPE_ASSERT, "(file->referenceCount > 0)", (const char *)&queryFormat, "file->referenceCount > 0") )
    __debugbreak();
  if ( file->referenceCount-- == 1 )
  {
    for ( i = file->assets; i != 0xFFFF; i = v5->nextAsset )
    {
      AssetByIndex = CL_TransientsMP_GetAssetByIndex(i);
      v5 = AssetByIndex;
      if ( (*(_BYTE *)&AssetByIndex->TransientEntryBase & 2) == 0 && AssetByIndex->referenceCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 2054, ASSERT_TYPE_ASSERT, "(localAssetEntry->referenceCount == 0)", (const char *)&queryFormat, "localAssetEntry->referenceCount == 0") )
        __debugbreak();
    }
  }
  switch ( file->state[0] )
  {
    case 1:
      if ( !file->referenceCount )
      {
        v6 = DB_PollFastfileState(file->filename);
        if ( v6 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 2069, ASSERT_TYPE_ASSERT, "( (ffState == DB_FastfileState::NOT_LOADED) )", "QUEUED_FOR_LOAD: Expected NOT_LOADED state for '%s', but got %d instead\n", file->filename, v6) )
            __debugbreak();
        }
        file->state[0] = 0;
        goto LABEL_23;
      }
      break;
    case 2:
      if ( !file->referenceCount )
      {
        if ( DB_TryFastTransientCancel(file->filename) )
        {
          v8 = DB_PollFastfileState(file->filename);
          if ( v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 2113, ASSERT_TYPE_ASSERT, "( (ffState == DB_FastfileState::NOT_LOADED) )", "LOADING: Expected NOT_LOADED state for '%s', but got %d instead\n", file->filename, v8) )
            __debugbreak();
          file->state[0] = 0;
LABEL_23:
          CL_TransientsMP_PurgeStaleQueueItems();
        }
        else
        {
          file->state[0] = 12;
        }
      }
      break;
    case 3:
      if ( !file->referenceCount )
      {
        v7 = DB_PollFastfileState(file->filename);
        if ( v7 != AWAITING_COMMIT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 2095, ASSERT_TYPE_ASSERT, "( (ffState == DB_FastfileState::LOADED) )", "LOADED: Expected LOADED state for '%s', but got %d instead\n", file->filename, v7) )
          __debugbreak();
        file->state[0] = 7;
        CL_TransientsMP_AddToQueue(file, 0);
      }
      break;
    case 4:
      v9 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 2135, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "CL_TransientsMP_UnloadFileInternal: UNLOADING state unexpected for %s", file->filename);
      goto LABEL_44;
    case 5:
    case 0xA:
      LODWORD(v10) = (unsigned __int8)file->state[0];
      v9 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 2140, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Bad state %d", v10);
LABEL_44:
      if ( v9 )
        __debugbreak();
      break;
    case 6:
      if ( !file->referenceCount )
        file->state[0] = 5;
      break;
    case 9:
      if ( !file->referenceCount )
        file->state[0] = 8;
      break;
    case 0xB:
      if ( !file->referenceCount )
        file->state[0] = 10;
      break;
    default:
      return;
  }
}

/*
==============
CL_TransientsMP_UpdatePriority
==============
*/
bool CL_TransientsMP_UpdatePriority(const TransientFile *const file, const unsigned int priority)
{
  __int64 v4; 
  TransientQueueEntry *i; 
  bool result; 
  unsigned int *p_priority; 

  if ( !file && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 420, ASSERT_TYPE_ASSERT, "(file)", (const char *)&queryFormat, "file") )
    __debugbreak();
  v4 = 0i64;
  if ( !s_transientQueueSize )
    return 0;
  for ( i = s_transientQueue; i->file != file; ++i )
  {
    v4 = (unsigned int)(v4 + 1);
    if ( (unsigned int)v4 >= s_transientQueueSize )
      return 0;
  }
  p_priority = &s_transientQueue[v4].priority;
  if ( file->referenceCount != 1 && *p_priority > priority )
    priority = *p_priority;
  result = 1;
  *p_priority = priority;
  return result;
}

/*
==============
CL_TransientsMP_WaitUntilProcessingDone
==============
*/
char CL_TransientsMP_WaitUntilProcessingDone(void *__formal)
{
  TransientMPLoadState v1; 
  unsigned int v2; 
  unsigned int i; 
  TransientFile *file; 
  unsigned __int8 v6; 
  __int64 v7; 

  if ( !Sys_IsMainThread() && (!Sys_IsRenderThread() || !R_IsInRemoteScreenUpdate()) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 2001, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread() || Sys_IsRenderThread() && R_IsInRemoteScreenUpdate())", (const char *)&queryFormat, "Sys_IsMainThread() || Sys_IsRenderThread() && R_IsInRemoteScreenUpdate()") )
    __debugbreak();
  if ( CL_TransientsMP_IsInHostMigration() )
    return 1;
  if ( !CL_TransientsMP_PeekTransientQueueActive() )
  {
    v1 = s_transientSystemLoadState;
    if ( s_transientSystemLoadState && s_transientSystemLoadState != ERRORING && s_transientQueueSize )
    {
      v2 = 0;
      if ( s_transientQueueSize )
      {
        do
        {
          CL_TransientMP_StatusPrint("%u: %s state=%d\n", v2, s_transientQueue[v2].file->filename, (unsigned __int8)s_transientQueue[v2].file->state[0]);
          ++v2;
        }
        while ( v2 < s_transientQueueSize );
        v1 = s_transientSystemLoadState;
      }
      LODWORD(v7) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 2021, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Did not detect any active queue items, but we're not idle, s_transientSystemLoadState=%d", v7) )
        __debugbreak();
    }
    return 1;
  }
  DB_Update();
  CL_TransientsMP_ProcessWithGpuWait(0);
  if ( s_transientSystemLoadState == SEARCHING )
  {
    for ( i = 0; i < s_transientQueueSize; ++i )
    {
      file = s_transientQueue[i].file;
      if ( !file && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_mp.cpp", 513, ASSERT_TYPE_ASSERT, "(file)", (const char *)&queryFormat, "file") )
        __debugbreak();
      v6 = file->state[0];
      if ( v6 && v6 != 3 )
        CL_TransientMP_StatusPrint("CL_TransientsMP_DebugPrintTransientQueueActive : %s is in state %u.\n", file->filename, v6);
    }
  }
  Sys_LoadingKeepAlive();
  return 0;
}

