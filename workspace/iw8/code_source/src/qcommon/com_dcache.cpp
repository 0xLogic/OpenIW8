/*
==============
DCache_InvalidatePersistentCache
==============
*/

void __fastcall DCache_InvalidatePersistentCache(Online_Error_CAT_DCACHE_t errorToReport, const char *contextString)
{
  ?DCache_InvalidatePersistentCache@@YAXW4Online_Error_CAT_DCACHE_t@@PEBD@Z(errorToReport, contextString);
}

/*
==============
DCache_Throttle
==============
*/

int __fastcall DCache_Throttle(unsigned int bytesUploaded)
{
  return ?DCache_Throttle@@YAHI@Z(bytesUploaded);
}

/*
==============
DCache_SaveTOC
==============
*/

bool __fastcall DCache_SaveTOC(dcacheType_t cacheType)
{
  return ?DCache_SaveTOC@@YA_NW4dcacheType_t@@@Z(cacheType);
}

/*
==============
Com_DCache_Shutdown
==============
*/

void Com_DCache_Shutdown(void)
{
  ?Com_DCache_Shutdown@@YAXXZ();
}

/*
==============
DCache_AdditionalData_SetLanguage
==============
*/

void __fastcall DCache_AdditionalData_SetLanguage(language_t language)
{
  ?DCache_AdditionalData_SetLanguage@@YAXW4language_t@@@Z(language);
}

/*
==============
DCache_DebugDoIntegrityCheck
==============
*/

void __fastcall DCache_DebugDoIntegrityCheck()
{
  ?DCache_DebugDoIntegrityCheck@@YAXXZ();
}

/*
==============
Com_DCache_Clear
==============
*/

void __fastcall Com_DCache_Clear(dcacheType_t cacheType)
{
  ?Com_DCache_Clear@@YAXW4dcacheType_t@@@Z(cacheType);
}

/*
==============
DCache_IncStartupCount
==============
*/

unsigned __int16 __fastcall DCache_IncStartupCount()
{
  return ?DCache_IncStartupCount@@YAGXZ();
}

/*
==============
DCache_DeleteFromCacheInMemory
==============
*/

bool __fastcall DCache_DeleteFromCacheInMemory(dcacheType_t cacheType, unsigned __int64 fileID, dcacheLocation_t location)
{
  return ?DCache_DeleteFromCacheInMemory@@YA_NW4dcacheType_t@@_KW4dcacheLocation_t@@@Z(cacheType, fileID, location);
}

/*
==============
DCache_StreamToCache
==============
*/

int __fastcall DCache_StreamToCache(dcacheType_t cacheType, unsigned __int64 fileID, dcacheLocation_t location, int offset, int size, unsigned __int8 *buffer)
{
  return ?DCache_StreamToCache@@YAHW4dcacheType_t@@_KW4dcacheLocation_t@@HHPEAE@Z(cacheType, fileID, location, offset, size, buffer);
}

/*
==============
DCache_GetFileIndex
==============
*/

int __fastcall DCache_GetFileIndex(dcacheType_t cacheType, unsigned __int64 fileID, dcacheLocation_t location)
{
  return ?DCache_GetFileIndex@@YAHW4dcacheType_t@@_KW4dcacheLocation_t@@@Z(cacheType, fileID, location);
}

/*
==============
DCache_DebugDeleteFile
==============
*/

void __fastcall DCache_DebugDeleteFile()
{
  ?DCache_DebugDeleteFile@@YAXXZ();
}

/*
==============
DCache_GetNextLocalFileID
==============
*/

unsigned __int64 __fastcall DCache_GetNextLocalFileID()
{
  return ?DCache_GetNextLocalFileID@@YA_KXZ();
}

/*
==============
DCache_IsHDDPresent
==============
*/

bool __fastcall DCache_IsHDDPresent()
{
  return ?DCache_IsHDDPresent@@YA_NXZ();
}

/*
==============
DCache_AdditionalData_GetLanguage
==============
*/

language_t __fastcall DCache_AdditionalData_GetLanguage()
{
  return ?DCache_AdditionalData_GetLanguage@@YA?AW4language_t@@XZ();
}

/*
==============
DCache_WriteToCache
==============
*/

bool __fastcall DCache_WriteToCache(dcacheType_t cacheType, unsigned __int64 fileID, dcacheLocation_t location, __int16 originID, char *fileName, int fileNameSize, unsigned int fileVersion, unsigned int createTime, unsigned int modifiedTime, bool beginStream, int bufferSize, unsigned __int8 *buffer)
{
  return ?DCache_WriteToCache@@YA_NW4dcacheType_t@@_KW4dcacheLocation_t@@FPEADHIII_NHPEAE@Z(cacheType, fileID, location, originID, fileName, fileNameSize, fileVersion, createTime, modifiedTime, beginStream, bufferSize, buffer);
}

/*
==============
DCache_UploadDataCallback
==============
*/

unsigned int __fastcall DCache_UploadDataCallback(void *data, unsigned int dataSize, unsigned int bytesUploaded)
{
  return ?DCache_UploadDataCallback@@YAIPEAXII@Z(data, dataSize, bytesUploaded);
}

/*
==============
DCache_DebugListAll
==============
*/

void __fastcall DCache_DebugListAll()
{
  ?DCache_DebugListAll@@YAXXZ();
}

/*
==============
DCache_GetFileIDByFilename
==============
*/

unsigned __int64 __fastcall DCache_GetFileIDByFilename(const char *filename, dcacheType_t cacheType, dcacheLocation_t location)
{
  return ?DCache_GetFileIDByFilename@@YA_KPEBDW4dcacheType_t@@W4dcacheLocation_t@@@Z(filename, cacheType, location);
}

/*
==============
DCache_GetUploadFileInformation
==============
*/

void __fastcall DCache_GetUploadFileInformation(unsigned __int64 *fileID, int *fileSize)
{
  ?DCache_GetUploadFileInformation@@YAXPEA_KPEAH@Z(fileID, fileSize);
}

/*
==============
DCache_DebugRecalcHash
==============
*/

void __fastcall DCache_DebugRecalcHash()
{
  ?DCache_DebugRecalcHash@@YAXXZ();
}

/*
==============
DCache_ThrottleSetup
==============
*/

void DCache_ThrottleSetup(void)
{
  ?DCache_ThrottleSetup@@YAXXZ();
}

/*
==============
DCache_StreamToCacheComplete
==============
*/

bool __fastcall DCache_StreamToCacheComplete(dcacheType_t cacheType, unsigned __int64 fileID, dcacheLocation_t location, int finalSize, unsigned int createTime, unsigned int modifiedTime)
{
  return ?DCache_StreamToCacheComplete@@YA_NW4dcacheType_t@@_KW4dcacheLocation_t@@HII@Z(cacheType, fileID, location, finalSize, createTime, modifiedTime);
}

/*
==============
DCache_IsStartupDisabled
==============
*/

bool __fastcall DCache_IsStartupDisabled()
{
  return ?DCache_IsStartupDisabled@@YA_NXZ();
}

/*
==============
DCache_IsCached
==============
*/

bool __fastcall DCache_IsCached(dcacheType_t cacheType, unsigned __int64 fileID, dcacheLocation_t location)
{
  return ?DCache_IsCached@@YA_NW4dcacheType_t@@_KW4dcacheLocation_t@@@Z(cacheType, fileID, location);
}

/*
==============
DCache_DebugDisplayFileBlocks
==============
*/

void __fastcall DCache_DebugDisplayFileBlocks()
{
  ?DCache_DebugDisplayFileBlocks@@YAXXZ();
}

/*
==============
DCache_UploadFromCache
==============
*/

bool __fastcall DCache_UploadFromCache(const int controllerIndex, dcacheType_t cacheType, unsigned __int64 fileID, dcacheLocation_t location, contentServerWriteFileInfo *info)
{
  return ?DCache_UploadFromCache@@YA_NHW4dcacheType_t@@_KW4dcacheLocation_t@@PEAUcontentServerWriteFileInfo@@@Z(controllerIndex, cacheType, fileID, location, info);
}

/*
==============
Com_DCache_RegisterDvars
==============
*/

void Com_DCache_RegisterDvars(void)
{
  ?Com_DCache_RegisterDvars@@YAXXZ();
}

/*
==============
DCache_ReadFromCache
==============
*/

bool __fastcall DCache_ReadFromCache(dcacheType_t cacheType, unsigned __int64 fileID, dcacheLocation_t location, int size, unsigned __int8 *buffer)
{
  return ?DCache_ReadFromCache@@YA_NW4dcacheType_t@@_KW4dcacheLocation_t@@HPEAE@Z(cacheType, fileID, location, size, buffer);
}

/*
==============
DCache_DebugClearAll
==============
*/

void __fastcall DCache_DebugClearAll()
{
  ?DCache_DebugClearAll@@YAXXZ();
}

/*
==============
DCache_OnCorruption
==============
*/

bool __fastcall DCache_OnCorruption(dcacheType_t cacheType, DCacheCorruption corruptionType)
{
  return ?DCache_OnCorruption@@YA_NW4dcacheType_t@@W4DCacheCorruption@@@Z(cacheType, corruptionType);
}

/*
==============
DCache_ClearStreaming
==============
*/

void __fastcall DCache_ClearStreaming(dcacheType_t cacheType)
{
  ?DCache_ClearStreaming@@YAXW4dcacheType_t@@@Z(cacheType);
}

/*
==============
DCache_ReadFromCacheByOffset
==============
*/

bool __fastcall DCache_ReadFromCacheByOffset(dcacheType_t cacheType, unsigned __int64 fileID, dcacheLocation_t location, int offset, int size, unsigned __int8 *buffer, int *numBytesRead, bool validateChecksum)
{
  return ?DCache_ReadFromCacheByOffset@@YA_NW4dcacheType_t@@_KW4dcacheLocation_t@@HHPEAEPEAH_N@Z(cacheType, fileID, location, offset, size, buffer, numBytesRead, validateChecksum);
}

/*
==============
Com_DCache_Setup
==============
*/

bool __fastcall Com_DCache_Setup()
{
  return ?Com_DCache_Setup@@YA_NXZ();
}

/*
==============
Com_DCache_Allocate
==============
*/

bool __fastcall Com_DCache_Allocate()
{
  return ?Com_DCache_Allocate@@YA_NXZ();
}

/*
==============
DCache_GetFileSize
==============
*/

int __fastcall DCache_GetFileSize(dcacheType_t cacheType, unsigned __int64 fileID, dcacheLocation_t location)
{
  return ?DCache_GetFileSize@@YAHW4dcacheType_t@@_KW4dcacheLocation_t@@@Z(cacheType, fileID, location);
}

/*
==============
DCache_DeleteFromCache
==============
*/

bool __fastcall DCache_DeleteFromCache(dcacheType_t cacheType, unsigned __int64 fileID, dcacheLocation_t location)
{
  return ?DCache_DeleteFromCache@@YA_NW4dcacheType_t@@_KW4dcacheLocation_t@@@Z(cacheType, fileID, location);
}

/*
==============
DCache_ResetStartupCount
==============
*/

void __fastcall DCache_ResetStartupCount(bool clearExceeded)
{
  ?DCache_ResetStartupCount@@YAX_N@Z(clearExceeded);
}

/*
==============
Com_DCache_Allocate
==============
*/
bool Com_DCache_Allocate()
{
  Online_ErrorReporting *InstancePtr; 
  int Int_Internal_DebugName; 

  Live_DCacheInitialize();
  Cmd_AddCommandInternal("dcache_listAll", DCache_DebugListAll, &DCache_DebugListAll_VAR);
  Cmd_AddCommandInternal("dcache_clearAll", DCache_DebugClearAll, &DCache_DebugClearAll_VAR);
  Cmd_AddCommandInternal("dcache_showBlocks", DCache_DebugDisplayFileBlocks, &DCache_DebugDisplayFileBlocks_VAR);
  Cmd_AddCommandInternal("dcache_deleteFile", DCache_DebugDeleteFile, &DCache_DebugDeleteFile_VAR);
  Cmd_AddCommandInternal("dcache_recalcHash", DCache_DebugRecalcHash, &DCache_DebugRecalcHash_VAR);
  Cmd_AddCommandInternal("dcache_doIntegrity", DCache_DebugDoIntegrityCheck, &DCache_DebugDoIntegrityCheck_VAR);
  s_dcacheHDDAvailable = 1;
  if ( s_dcacheSimulateNoHDD && s_dcacheSimulateNoHDD->current.enabled )
  {
    InstancePtr = Online_ErrorReporting::GetInstancePtr();
    Online_ErrorReporting::ReportError(InstancePtr, (Online_Error_CAT_DCACHE_t)512, NULL);
    return 0;
  }
  if ( !DCache_TOC_Init() )
    return 0;
  Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DVARINT_purgeDCache, "purgeDCache");
  return DCache_IO_Init(Int_Internal_DebugName != 0);
}

/*
==============
Com_DCache_Clear
==============
*/
void Com_DCache_Clear(dcacheType_t cacheType)
{
  dcacheTOC_t *TOC; 

  DCache_TOC_FlushTOC(cacheType, 1);
  TOC = DCache_TOC_GetTOC(cacheType);
  DCache_IO_SerializeTOC(cacheType, TOC);
}

/*
==============
Com_DCache_RegisterDvars
==============
*/
void Com_DCache_RegisterDvars(void)
{
  Dvar_BeginPermanentRegistration();
  s_dcacheSimulateNoHDD = Dvar_RegisterBool("MSPSNQNRO", 0, 0, "When turned on, simulate no HDD for caching.");
  Dvar_EndPermanentRegistration();
}

/*
==============
Com_DCache_Setup
==============
*/
bool Com_DCache_Setup()
{
  Online_ErrorReporting *InstancePtr; 
  int Int_Internal_DebugName; 

  Cmd_AddCommandInternal("dcache_listAll", DCache_DebugListAll, &DCache_DebugListAll_VAR);
  Cmd_AddCommandInternal("dcache_clearAll", DCache_DebugClearAll, &DCache_DebugClearAll_VAR);
  Cmd_AddCommandInternal("dcache_showBlocks", DCache_DebugDisplayFileBlocks, &DCache_DebugDisplayFileBlocks_VAR);
  Cmd_AddCommandInternal("dcache_deleteFile", DCache_DebugDeleteFile, &DCache_DebugDeleteFile_VAR);
  Cmd_AddCommandInternal("dcache_recalcHash", DCache_DebugRecalcHash, &DCache_DebugRecalcHash_VAR);
  Cmd_AddCommandInternal("dcache_doIntegrity", DCache_DebugDoIntegrityCheck, &DCache_DebugDoIntegrityCheck_VAR);
  s_dcacheHDDAvailable = 1;
  if ( s_dcacheSimulateNoHDD && s_dcacheSimulateNoHDD->current.enabled )
  {
    InstancePtr = Online_ErrorReporting::GetInstancePtr();
    Online_ErrorReporting::ReportError(InstancePtr, (Online_Error_CAT_DCACHE_t)512, NULL);
    return 0;
  }
  if ( !DCache_TOC_Init() )
    return 0;
  Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DVARINT_purgeDCache, "purgeDCache");
  return DCache_IO_Init(Int_Internal_DebugName != 0);
}

/*
==============
Com_DCache_Shutdown
==============
*/
void Com_DCache_Shutdown(void)
{
  DCache_IO_Shutdown();
  DCache_TOC_Shutdown();
}

/*
==============
DCache_AdditionalData_GetLanguage
==============
*/
__int64 DCache_AdditionalData_GetLanguage()
{
  dcacheTOC_t *TOC; 

  TOC = DCache_TOC_GetTOC(DCACHE_TYPE_PERSISTENT);
  if ( TOC )
    return (unsigned int)TOC->m_additionalData.m_languageSetting;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache.cpp", 659, ASSERT_TYPE_ASSERT, "(toc)", (const char *)&queryFormat, "toc") )
    __debugbreak();
  return MEMORY[8];
}

/*
==============
DCache_AdditionalData_SetLanguage
==============
*/
void DCache_AdditionalData_SetLanguage(language_t language)
{
  dcacheTOC_t *TOC; 

  TOC = DCache_TOC_GetTOC(DCACHE_TYPE_PERSISTENT);
  if ( !TOC && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache.cpp", 670, ASSERT_TYPE_ASSERT, "(toc)", (const char *)&queryFormat, "toc") )
    __debugbreak();
  TOC->m_additionalData.m_languageSetting = language;
  DCache_IO_SerializeTOC(DCACHE_TYPE_PERSISTENT, TOC);
}

/*
==============
DCache_ClearStreaming
==============
*/
void DCache_ClearStreaming(dcacheType_t cacheType)
{
  dcacheType_t m_cacheType; 
  dcacheTOC_t *TOC; 
  int index; 

  s_dcacheUploadState.m_isStreamingInProgress = 0;
  s_dcacheHDDAvailable = 1;
  if ( !s_dcacheSimulateNoHDD || !s_dcacheSimulateNoHDD->current.enabled )
  {
    if ( cacheType == DCACHE_TYPE_PERSISTENT && (m_cacheType = s_dcacheUploadState.m_cacheType, index = 0, DCache_TOC_GetIndex(s_dcacheUploadState.m_cacheType, s_dcacheUploadState.m_fileID, s_dcacheUploadState.m_location, &index)) )
    {
      DCache_TOC_RemoveFile(m_cacheType, index);
      TOC = DCache_TOC_GetTOC(m_cacheType);
      DCache_TOC_CondenseTOC(TOC);
      DCache_SaveTOC(m_cacheType);
    }
    else
    {
      DCache_TOC_FlushTOC(cacheType, 1);
    }
  }
}

/*
==============
DCache_DebugClearAll
==============
*/
void DCache_DebugClearAll(void)
{
  dcacheType_t v0; 
  dcacheTOC_t *TOC; 

  if ( Cmd_Argc() >= 1 )
    v0 = Cmd_ArgInt(1);
  else
    v0 = DCACHE_TYPE_PERSISTENT;
  TOC = DCache_TOC_GetTOC(v0);
  DCache_TOC_FlushTOC(v0, 1);
  DCache_IO_SerializeTOC(v0, TOC);
}

/*
==============
DCache_DebugDeleteFile
==============
*/
void DCache_DebugDeleteFile(void)
{
  dcacheType_t v0; 
  dcacheLocation_t v1; 
  int v2; 
  dcacheTOC_t *TOC; 
  int index; 

  if ( Cmd_Argc() >= 3 )
  {
    v0 = Cmd_ArgInt(1);
    v1 = Cmd_ArgInt(2);
    v2 = Cmd_ArgInt(3);
    index = 0;
    if ( DCache_TOC_GetIndex(v0, v2, v1, &index) )
    {
      DCache_TOC_RemoveFile(v0, index);
      TOC = DCache_TOC_GetTOC(v0);
      DCache_TOC_CondenseTOC(TOC);
      DCache_SaveTOC(v0);
    }
  }
  else
  {
    Com_Printf(16, "dcache cmd: file delete requires cachetype, location and fileID.\n");
  }
}

/*
==============
DCache_DebugDisplayFileBlocks
==============
*/
void DCache_DebugDisplayFileBlocks(void)
{
  dcacheType_t v0; 
  dcacheLocation_t v1; 
  unsigned __int64 v2; 
  dcacheTOC_t *TOC; 
  int FileIndex; 
  int v5; 
  int v6; 
  int i; 

  if ( Cmd_Argc() >= 3 )
  {
    v0 = Cmd_ArgInt(1);
    v1 = Cmd_ArgInt(2);
    v2 = Cmd_ArgInt(3);
    TOC = DCache_TOC_GetTOC(v0);
    FileIndex = DCache_GetFileIndex(v0, v2, v1);
    v5 = FileIndex;
    if ( FileIndex == -1 )
    {
      Com_Printf(16, "dcache[%d] block list: file not found. [Location:%d, FileID: %zu] \n", (unsigned int)v0, (unsigned int)v1, v2);
    }
    else
    {
      Com_Printf(16, "dcache[%d] block list: %s [Location:%d, FileID: %zu] \n", (unsigned int)v0, TOC->m_fileInfo[FileIndex].m_details.m_name, v1, v2);
      v6 = 0;
      for ( i = 0; i < 2152; ++i )
      {
        if ( DCache_TOC_IsBitSet(v0, v5, i) )
          Com_Printf(16, "blk %d is at index %d. \n", (unsigned int)++v6, (unsigned int)i);
      }
    }
  }
  else
  {
    Com_Printf(16, "dcache cmd: file block listing requires cachetype, location and fileID.\n");
  }
}

/*
==============
DCache_DebugDoIntegrityCheck
==============
*/
void DCache_DebugDoIntegrityCheck(void)
{
  dcacheType_t v0; 
  dcacheTOC_t *TOC; 
  unsigned int v2; 
  dcacheLocation_t *p_m_location; 
  unsigned __int64 v4; 
  __int64 v5; 
  const unsigned __int8 *hashBytes; 
  const char *m_name; 
  int i; 
  __int64 v9; 
  cccHashValueSHA256_t outHash; 
  char outHexString[8]; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 
  __int64 v18; 
  char v19; 
  char v20[8]; 
  __int64 v21; 
  __int64 v22; 
  __int64 v23; 
  __int64 v24; 
  __int64 v25; 
  __int64 v26; 
  __int64 v27; 
  char v28; 

  memset(&outHash, 0, sizeof(outHash));
  if ( Cmd_Argc() >= 1 )
  {
    v0 = Cmd_ArgInt(1);
    TOC = DCache_TOC_GetTOC(v0);
    Com_Printf(16, "dcache[%d] integrity: started.\n", (unsigned int)v0);
    v2 = 0;
    if ( TOC->m_numFiles > 0 )
    {
      p_m_location = &TOC->m_fileInfo[0].m_details.m_location;
      do
      {
        v4 = *((_QWORD *)p_m_location - 1);
        if ( v4 )
        {
          DCache_IO_CalculateHash(v0, v4, *p_m_location, &outHash);
          *(_QWORD *)outHexString = 0i64;
          v12 = 0i64;
          v13 = 0i64;
          v14 = 0i64;
          v15 = 0i64;
          v16 = 0i64;
          v17 = 0i64;
          v18 = 0i64;
          v19 = 0;
          ByteBufferToHexString(outHash.hashBytes, 32, outHexString, 65);
          v5 = (int)v2;
          hashBytes = TOC->m_fileInfo[v5].m_details.m_computedHashValue.hashBytes;
          m_name = TOC->m_fileInfo[v5].m_details.m_name;
          if ( !memcmp_0(&outHash, hashBytes, 0x20ui64) )
          {
            Com_Printf(16, "dcache[%d] integrity: Hash Success => %d. %s [%s] \n", (unsigned int)v0, v2, m_name, outHexString);
            for ( i = 0; i < 2152; ++i )
            {
              if ( DCache_TOC_IsBitSet(v0, v2, i) && !DCache_IO_DebugIsChecksumValid(v0, i) )
              {
                LODWORD(v9) = i;
                Com_Printf(16, "dcache[%d] integrity: Checksum Failed=> %d. %s blk:%d \n", (unsigned int)v0, v2, m_name, v9);
              }
            }
          }
          else
          {
            *(_QWORD *)v20 = 0i64;
            v21 = 0i64;
            v22 = 0i64;
            v23 = 0i64;
            v24 = 0i64;
            v25 = 0i64;
            v26 = 0i64;
            v27 = 0i64;
            v28 = 0;
            ByteBufferToHexString(hashBytes, 32, v20, 65);
            Com_Printf(16, "dcache[%d] integrity: Hash Failed  => %d. %s [%s]vs[%s]\n", (unsigned int)v0, v2, m_name, outHexString, v20);
          }
        }
        ++v2;
        p_m_location += 118;
      }
      while ( (signed int)v2 < TOC->m_numFiles );
    }
    Com_Printf(16, "dcache[%d] integrity: finished.\n", (unsigned int)v0);
  }
  else
  {
    Com_Printf(16, "dcache cmd: recalc hash requires cache type. 0 = temp, 1 = perm. \n");
  }
}

/*
==============
DCache_DebugListAll
==============
*/
void DCache_DebugListAll(void)
{
  dcacheType_t v0; 

  if ( Cmd_Argc() < 1 )
    DCache_TOC_DumpTOC(DCACHE_TYPE_PERSISTENT);
  v0 = Cmd_ArgInt(1);
  DCache_TOC_DumpTOC(v0);
}

/*
==============
DCache_DebugRecalcHash
==============
*/
void DCache_DebugRecalcHash(void)
{
  int v0; 
  dcacheType_t v1; 
  dcacheTOC_t *TOC; 
  unsigned int v3; 
  int i; 
  unsigned int v5; 
  cccHashValueSHA256_t *v8; 
  const char *v9; 
  int v10; 
  unsigned __int8 inByteBuffer[32]; 
  char outHexString[8]; 
  __int64 v13; 
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 
  __int64 v18; 
  __int64 v19; 
  char v20; 

  *(_QWORD *)outHexString = 0i64;
  v13 = 0i64;
  v14 = 0i64;
  v15 = 0i64;
  v16 = 0i64;
  v17 = 0i64;
  v18 = 0i64;
  v19 = 0i64;
  v20 = 0;
  memset(inByteBuffer, 0, sizeof(inByteBuffer));
  if ( Cmd_Argc() >= 1 )
  {
    v0 = 1;
    v10 = 1;
    v1 = Cmd_ArgInt(1);
    TOC = DCache_TOC_GetTOC(v1);
    if ( Cmd_Argc() > 2 )
    {
      v0 = Cmd_ArgInt(2);
      v10 = v0;
    }
    v3 = 0;
    Com_Printf(16, "============== Hash Itegrity Start ===========\n");
    for ( i = 0; i < v0; ++i )
    {
      v5 = 0;
      if ( TOC->m_numFiles > 0 )
      {
        _RBX = TOC->m_fileInfo;
        do
        {
          if ( _RBX->m_details.m_fileID )
          {
            Com_Printf(16, "============== %d ===========\n", (unsigned int)i);
            __asm
            {
              vmovups ymm0, ymmword ptr [rbx+90h]
              vmovups ymmword ptr [rsp+0E8h+inByteBuffer], ymm0
            }
            ByteBufferToHexString(inByteBuffer, 32, outHexString, 65);
            v8 = (cccHashValueSHA256_t *)((char *)TOC + 472 * (int)v5);
            v9 = (const char *)&v8[1].hashBytes[12];
            Com_Printf(16, "dcache[%d] integrity: Old => %d. %s [%s] \n", (unsigned int)v1, v5, (const char *)&v8[1].hashBytes[12], outHexString);
            v8 = (cccHashValueSHA256_t *)((char *)v8 + 176);
            DCache_IO_CalculateHash(v1, _RBX->m_details.m_fileID, _RBX->m_details.m_location, v8);
            ByteBufferToHexString(v8->hashBytes, 32, outHexString, 65);
            Com_Printf(16, "dcache[%d] integrity: New => %d. %s [%s] \n", (unsigned int)v1, v5, v9, outHexString);
            if ( memcmp_0(inByteBuffer, v8, 0x20ui64) )
              Com_Printf(16, "============== MISMATCH %d =========== \n", ++v3);
          }
          ++v5;
          ++_RBX;
        }
        while ( (signed int)v5 < TOC->m_numFiles );
        v0 = v10;
      }
    }
    Com_Printf(16, "============== Hash Itegrity End. %d mismatches. ===========\n", v3);
  }
  else
  {
    Com_Printf(16, "dcache cmd: recalc hash requires cache type. 0 = temp, 1 = perm. \n");
  }
}

/*
==============
DCache_DeleteFromCache
==============
*/
char DCache_DeleteFromCache(dcacheType_t cacheType, unsigned __int64 fileID, dcacheLocation_t location)
{
  dcacheTOC_t *TOC; 
  int index; 

  index = 0;
  if ( !DCache_TOC_GetIndex(cacheType, fileID, location, &index) )
    return 0;
  DCache_TOC_RemoveFile(cacheType, index);
  TOC = DCache_TOC_GetTOC(cacheType);
  DCache_TOC_CondenseTOC(TOC);
  DCache_SaveTOC(cacheType);
  return 1;
}

/*
==============
DCache_DeleteFromCacheInMemory
==============
*/
char DCache_DeleteFromCacheInMemory(dcacheType_t cacheType, unsigned __int64 fileID, dcacheLocation_t location)
{
  dcacheTOC_t *TOC; 
  int index; 

  index = 0;
  if ( !DCache_TOC_GetIndex(cacheType, fileID, location, &index) )
    return 0;
  DCache_TOC_RemoveFile(cacheType, index);
  TOC = DCache_TOC_GetTOC(cacheType);
  DCache_TOC_CondenseTOC(TOC);
  return 1;
}

/*
==============
DCache_GetFileIDByFilename
==============
*/
unsigned __int64 DCache_GetFileIDByFilename(const char *filename, dcacheType_t cacheType, dcacheLocation_t location)
{
  bool FileIDByFilename; 
  __int64 v4; 
  unsigned __int64 outFileID; 

  FileIDByFilename = DCache_TOC_GetFileIDByFilename(filename, cacheType, location, &outFileID);
  v4 = 0i64;
  if ( FileIDByFilename )
    return outFileID;
  return v4;
}

/*
==============
DCache_GetFileIndex
==============
*/
__int64 DCache_GetFileIndex(dcacheType_t cacheType, unsigned __int64 fileID, dcacheLocation_t location)
{
  dcacheTOC_t *TOC; 
  __int64 m_numFiles; 
  unsigned int v9; 
  __int64 v10; 
  dcacheLocation_t *i; 

  s_dcacheHDDAvailable = 1;
  if ( s_dcacheSimulateNoHDD && s_dcacheSimulateNoHDD->current.enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache.cpp", 386, ASSERT_TYPE_ASSERT, "(DCache_IsHDDPresent())", (const char *)&queryFormat, "DCache_IsHDDPresent()") )
    __debugbreak();
  TOC = DCache_TOC_GetTOC(cacheType);
  if ( !TOC )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache.cpp", 389, ASSERT_TYPE_ASSERT, "(toc)", (const char *)&queryFormat, "toc") )
      __debugbreak();
    return 0xFFFFFFFFi64;
  }
  m_numFiles = TOC->m_numFiles;
  v9 = 0;
  if ( m_numFiles <= 0 )
    return 0xFFFFFFFFi64;
  v10 = 0i64;
  for ( i = &TOC->m_fileInfo[0].m_details.m_location; *((_QWORD *)i - 1) != fileID || *i != location; i += 118 )
  {
    ++v9;
    if ( ++v10 >= m_numFiles )
      return 0xFFFFFFFFi64;
  }
  return v9;
}

/*
==============
DCache_GetFileSize
==============
*/
int DCache_GetFileSize(dcacheType_t cacheType, unsigned __int64 fileID, dcacheLocation_t location)
{
  int v6; 
  int v7; 

  s_dcacheHDDAvailable = 1;
  if ( s_dcacheSimulateNoHDD && s_dcacheSimulateNoHDD->current.enabled )
    v6 = 3;
  else
    v6 = DCache_TOC_IsCached(cacheType, fileID, location) + 1;
  v7 = v6 - 1;
  if ( v7 && v7 == 1 )
    return DCache_TOC_GetFileSize(cacheType, fileID, location);
  else
    return 0;
}

/*
==============
DCache_GetNextLocalFileID
==============
*/
__int64 DCache_GetNextLocalFileID()
{
  dcacheTOC_t *TOC; 
  __int64 result; 

  TOC = DCache_TOC_GetTOC(DCACHE_TYPE_PERSISTENT);
  if ( !TOC && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache.cpp", 166, ASSERT_TYPE_ASSERT, "(toc)", (const char *)&queryFormat, "toc") )
    __debugbreak();
  result = TOC->m_localFileIDSequence + 1;
  TOC->m_localFileIDSequence = result;
  return result;
}

/*
==============
DCache_GetUploadFileInformation
==============
*/
void DCache_GetUploadFileInformation(unsigned __int64 *fileID, int *fileSize)
{
  *fileID = s_dcacheUploadState.m_fileID;
  *fileSize = s_dcacheUploadState.m_fileSize;
}

/*
==============
DCache_IncStartupCount
==============
*/
__int64 DCache_IncStartupCount()
{
  dcacheTOC_t *TOC; 
  Online_ErrorReporting *InstancePtr; 

  TOC = DCache_TOC_GetTOC(DCACHE_TYPE_PERSISTENT);
  if ( !TOC && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache.cpp", 607, ASSERT_TYPE_ASSERT, "(toc)", (const char *)&queryFormat, "toc") )
    __debugbreak();
  if ( ++TOC->m_startupCount > 5u )
  {
    TOC->m_cacheInvalidated = 1;
    InstancePtr = Online_ErrorReporting::GetInstancePtr();
    Online_ErrorReporting::ReportError(InstancePtr, (Online_Error_CAT_DCACHE_t)0x20000000, NULL);
  }
  DCache_IO_SerializeTOC(DCACHE_TYPE_PERSISTENT, TOC);
  return TOC->m_startupCount;
}

/*
==============
DCache_InvalidatePersistentCache
==============
*/
void DCache_InvalidatePersistentCache(Online_Error_CAT_DCACHE_t errorToReport, const char *contextString)
{
  dcacheTOC_t *TOC; 
  Online_ErrorReporting *InstancePtr; 

  TOC = DCache_TOC_GetTOC(DCACHE_TYPE_PERSISTENT);
  if ( !TOC && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache.cpp", 683, ASSERT_TYPE_ASSERT, "(toc)", (const char *)&queryFormat, "toc") )
    __debugbreak();
  TOC->m_cacheInvalidated = 1;
  DCache_IO_SerializeTOC(DCACHE_TYPE_PERSISTENT, TOC);
  InstancePtr = Online_ErrorReporting::GetInstancePtr();
  Online_ErrorReporting::ReportError(InstancePtr, errorToReport, contextString);
}

/*
==============
DCache_IsCached
==============
*/
bool DCache_IsCached(dcacheType_t cacheType, unsigned __int64 fileID, dcacheLocation_t location)
{
  int v3; 
  int v4; 

  s_dcacheHDDAvailable = 1;
  if ( s_dcacheSimulateNoHDD && s_dcacheSimulateNoHDD->current.enabled )
    v3 = 3;
  else
    v3 = DCache_TOC_IsCached(cacheType, fileID, location) + 1;
  v4 = v3 - 1;
  return v4 && v4 == 1;
}

/*
==============
DCache_IsHDDPresent
==============
*/
bool DCache_IsHDDPresent()
{
  s_dcacheHDDAvailable = 1;
  return !s_dcacheSimulateNoHDD || !s_dcacheSimulateNoHDD->current.enabled;
}

/*
==============
DCache_IsStartupDisabled
==============
*/
bool DCache_IsStartupDisabled()
{
  return 0;
}

/*
==============
DCache_OnCorruption
==============
*/
char DCache_OnCorruption(dcacheType_t cacheType, DCacheCorruption corruptionType)
{
  dcacheTOC_t *TOC; 
  dcacheTOC_t *v5; 
  int m_corruptionConfig; 

  TOC = DCache_TOC_GetTOC(cacheType);
  v5 = TOC;
  if ( TOC )
    m_corruptionConfig = TOC->m_additionalData.m_corruptionConfig;
  else
    m_corruptionConfig = 0;
  if ( (m_corruptionConfig & corruptionType) == 0 )
    return 0;
  DCache_TOC_FlushTOC(cacheType, 0);
  DCache_IO_SerializeTOC(cacheType, v5);
  return 1;
}

/*
==============
DCache_ReadFromCache
==============
*/
char DCache_ReadFromCache(dcacheType_t cacheType, unsigned __int64 fileID, dcacheLocation_t location, int size, unsigned __int8 *buffer)
{
  int v9; 
  int v10; 
  Online_ErrorReporting *InstancePtr; 
  bool v13; 
  Online_ErrorReporting *v14; 

  s_dcacheHDDAvailable = 1;
  if ( s_dcacheSimulateNoHDD && s_dcacheSimulateNoHDD->current.enabled )
    return 0;
  DCache_IO_ValidateTOCFileHandle(cacheType, 1);
  DCache_IO_ValidateDataFileHandle(cacheType, 1);
  s_dcacheHDDAvailable = 1;
  if ( s_dcacheSimulateNoHDD && s_dcacheSimulateNoHDD->current.enabled )
  {
    v9 = 3;
  }
  else if ( DCache_TOC_IsCached(cacheType, fileID, location) )
  {
    v9 = 2;
  }
  else
  {
    v9 = 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache.cpp", 326, ASSERT_TYPE_ASSERT, "(result == DCACHE_RESULT_FOUND || result == DCACHE_RESULT_NOHDD)", (const char *)&queryFormat, "result == DCACHE_RESULT_FOUND || result == DCACHE_RESULT_NOHDD") )
      __debugbreak();
  }
  v10 = v9 - 2;
  if ( v10 )
  {
    if ( v10 != 1 )
    {
      InstancePtr = Online_ErrorReporting::GetInstancePtr();
      Online_ErrorReporting::ReportError(InstancePtr, (Online_Error_CAT_DCACHE_t)32, NULL);
      return 0;
    }
    return 0;
  }
  if ( !DCache_IO_ReadFromCache(cacheType, fileID, location, size, buffer) )
  {
    v13 = DCache_DeleteFromCache(cacheType, fileID, location);
    v14 = Online_ErrorReporting::GetInstancePtr();
    if ( !v13 )
    {
      Online_ErrorReporting::ReportError(v14, (Online_Error_CAT_DCACHE_t)64, NULL);
      DCache_TOC_FlushTOC(cacheType, 1);
      return 0;
    }
    Online_ErrorReporting::ReportError(v14, (Online_Error_CAT_DCACHE_t)256, NULL);
    return 0;
  }
  return 1;
}

/*
==============
DCache_ReadFromCacheByOffset
==============
*/
bool DCache_ReadFromCacheByOffset(dcacheType_t cacheType, unsigned __int64 fileID, dcacheLocation_t location, int offset, int size, unsigned __int8 *buffer, int *numBytesRead, bool validateChecksum)
{
  s_dcacheHDDAvailable = 1;
  if ( s_dcacheSimulateNoHDD && s_dcacheSimulateNoHDD->current.enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache.cpp", 372, ASSERT_TYPE_ASSERT, "(DCache_IsHDDPresent())", (const char *)&queryFormat, "DCache_IsHDDPresent()") )
    __debugbreak();
  DCache_IO_ValidateTOCFileHandle(cacheType, 0);
  DCache_IO_ValidateDataFileHandle(cacheType, 0);
  return DCache_IO_ReadFromCacheByOffset(cacheType, fileID, location, offset, offset + size, buffer, numBytesRead, validateChecksum);
}

/*
==============
DCache_ResetStartupCount
==============
*/
void DCache_ResetStartupCount(bool clearExceeded)
{
  dcacheTOC_t *TOC; 

  TOC = DCache_TOC_GetTOC(DCACHE_TYPE_PERSISTENT);
  if ( !TOC && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache.cpp", 626, ASSERT_TYPE_ASSERT, "(toc)", (const char *)&queryFormat, "toc") )
    __debugbreak();
  TOC->m_startupCount = 0;
  if ( clearExceeded )
    TOC->m_cacheInvalidated = 0;
  DCache_IO_SerializeTOC(DCACHE_TYPE_PERSISTENT, TOC);
}

/*
==============
DCache_SaveTOC
==============
*/
bool DCache_SaveTOC(dcacheType_t cacheType)
{
  dcacheTOC_t *TOC; 

  TOC = DCache_TOC_GetTOC(cacheType);
  return DCache_IO_SerializeTOC(cacheType, TOC);
}

/*
==============
DCache_StreamToCache
==============
*/
int DCache_StreamToCache(dcacheType_t cacheType, unsigned __int64 fileID, dcacheLocation_t location, int offset, int size, unsigned __int8 *buffer)
{
  s_dcacheHDDAvailable = 1;
  if ( s_dcacheSimulateNoHDD && s_dcacheSimulateNoHDD->current.enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache.cpp", 282, ASSERT_TYPE_ASSERT, "(DCache_IsHDDPresent())", (const char *)&queryFormat, "DCache_IsHDDPresent()") )
    __debugbreak();
  DCache_IO_ValidateTOCFileHandle(cacheType, 1);
  DCache_IO_ValidateDataFileHandle(cacheType, 1);
  return DCache_IO_StreamToCache(cacheType, fileID, location, offset, size, buffer);
}

/*
==============
DCache_StreamToCacheComplete
==============
*/
char DCache_StreamToCacheComplete(dcacheType_t cacheType, unsigned __int64 fileID, dcacheLocation_t location, int finalSize, unsigned int createTime, unsigned int modifiedTime)
{
  Online_ErrorReporting *InstancePtr; 

  if ( DCache_IO_StreamToCacheComplete(cacheType, fileID, location, finalSize, createTime, modifiedTime) )
    return 1;
  InstancePtr = Online_ErrorReporting::GetInstancePtr();
  Online_ErrorReporting::ReportError(InstancePtr, (Online_Error_CAT_DCACHE_t)16, NULL);
  return 0;
}

/*
==============
DCache_Throttle
==============
*/
__int64 DCache_Throttle(unsigned int bytesUploaded)
{
  int integer; 
  int v4; 
  unsigned int v5; 
  unsigned int v6; 

  if ( !dcacheThrottleEnabled->current.enabled )
    return 0i64;
  integer = dcacheThrottleKBytesPerSec->current.integer;
  v4 = Sys_Milliseconds();
  v5 = 0;
  v6 = integer * (v4 - s_xferThrottleStartTime);
  if ( bytesUploaded > v6 )
    return (unsigned int)((int)(bytesUploaded - v6) / integer);
  return v5;
}

/*
==============
DCache_ThrottleSetup
==============
*/
void DCache_ThrottleSetup(void)
{
  s_xferThrottleStartTime = Sys_Milliseconds();
}

/*
==============
DCache_UploadDataCallback
==============
*/
__int64 DCache_UploadDataCallback(void *data, unsigned int dataSize, unsigned int bytesUploaded)
{
  unsigned int m_fileSize; 
  bool v7; 
  int v8; 
  int integer; 
  int v10; 
  unsigned int v11; 
  int numBytesRead; 

  s_dcacheHDDAvailable = 1;
  if ( s_dcacheSimulateNoHDD && s_dcacheSimulateNoHDD->current.enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache.cpp", 469, ASSERT_TYPE_ASSERT, "(DCache_IsHDDPresent())", (const char *)&queryFormat, "DCache_IsHDDPresent()") )
    __debugbreak();
  m_fileSize = s_dcacheUploadState.m_fileSize;
  v7 = bytesUploaded == s_dcacheUploadState.m_fileSize;
  if ( bytesUploaded > s_dcacheUploadState.m_fileSize )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache.cpp", 470, ASSERT_TYPE_ASSERT, "(bytesUploaded <= ( unsigned int )s_dcacheUploadState.m_fileSize)", (const char *)&queryFormat, "bytesUploaded <= ( unsigned int )s_dcacheUploadState.m_fileSize") )
      __debugbreak();
    m_fileSize = s_dcacheUploadState.m_fileSize;
    v7 = bytesUploaded == s_dcacheUploadState.m_fileSize;
  }
  if ( v7 )
    goto LABEL_23;
  if ( dataSize + bytesUploaded > m_fileSize )
    dataSize = m_fileSize - bytesUploaded;
  if ( dcacheThrottleEnabled->current.enabled )
  {
    integer = dcacheThrottleKBytesPerSec->current.integer;
    v10 = Sys_Milliseconds();
    v8 = 0;
    v11 = integer * (v10 - s_xferThrottleStartTime);
    if ( bytesUploaded > v11 )
      v8 = (int)(bytesUploaded - v11) / integer;
  }
  else
  {
    v8 = 0;
  }
  Sys_Sleep(v8);
  if ( !DCache_IO_ReadFromCacheByOffset(s_dcacheUploadState.m_cacheType, s_dcacheUploadState.m_fileID, s_dcacheUploadState.m_location, bytesUploaded, dataSize + bytesUploaded, (unsigned __int8 *)data, &numBytesRead, 1) )
  {
LABEL_23:
    s_dcacheUploadState.m_isStreamingInProgress = 0;
    DCache_TOC_FlushTOC(DCACHE_TYPE_TEMPORARY, 1);
    return 0i64;
  }
  else
  {
    if ( numBytesRead <= 0 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache.cpp", 498, ASSERT_TYPE_ASSERT, "(bytesRead > 0)", (const char *)&queryFormat, "bytesRead > 0") )
        __debugbreak();
      if ( !numBytesRead )
      {
        s_dcacheUploadState.m_isStreamingInProgress = 0;
        DCache_TOC_FlushTOC(DCACHE_TYPE_TEMPORARY, 1);
      }
    }
    return (unsigned int)numBytesRead;
  }
}

/*
==============
DCache_UploadFromCache
==============
*/
char DCache_UploadFromCache(const int controllerIndex, dcacheType_t cacheType, unsigned __int64 fileID, dcacheLocation_t location, contentServerWriteFileInfo *info)
{
  dcacheTOC_t *TOC; 
  unsigned int m_size; 

  if ( !info && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache.cpp", 535, ASSERT_TYPE_ASSERT, "(info)", (const char *)&queryFormat, "info") )
    __debugbreak();
  if ( !DCache_TOC_GetTOC(cacheType) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache.cpp", 536, ASSERT_TYPE_ASSERT, "(DCache_TOC_GetTOC( cacheType ))", (const char *)&queryFormat, "DCache_TOC_GetTOC( cacheType )") )
    __debugbreak();
  s_dcacheHDDAvailable = 1;
  if ( s_dcacheSimulateNoHDD && s_dcacheSimulateNoHDD->current.enabled )
    return 0;
  if ( s_dcacheUploadState.m_isStreamingInProgress )
    return 0;
  s_dcacheUploadState.m_fileIndex = DCache_GetFileIndex(cacheType, fileID, location);
  if ( s_dcacheUploadState.m_fileIndex == -1 )
    return 0;
  TOC = DCache_TOC_GetTOC(cacheType);
  s_dcacheUploadState.m_fileID = fileID;
  s_dcacheUploadState.m_location = location;
  s_dcacheUploadState.m_cacheType = cacheType;
  m_size = TOC->m_fileInfo[s_dcacheUploadState.m_fileIndex].m_details.m_size;
  info->m_dataCallback = DCache_UploadDataCallback;
  s_dcacheUploadState.m_fileSize = m_size;
  info->m_fileSize = m_size;
  s_xferThrottleStartTime = Sys_Milliseconds();
  if ( !LiveStorage_CS_WriteFile(controllerIndex, info) )
    return 0;
  s_dcacheUploadState.m_isStreamingInProgress = 1;
  return 1;
}

/*
==============
DCache_WriteToCache
==============
*/
char DCache_WriteToCache(dcacheType_t cacheType, unsigned __int64 fileID, dcacheLocation_t location, __int16 originID, char *fileName, int fileNameSize, unsigned int fileVersion, unsigned int createTime, unsigned int modifiedTime, bool beginStream, int bufferSize, unsigned __int8 *buffer)
{
  int v16; 
  int v17; 
  int v18; 
  Online_ErrorReporting *InstancePtr; 
  Online_Error_CAT_DCACHE_t v20; 
  Online_ErrorReporting *v22; 
  dcacheTOC_t *TOC; 

  s_dcacheHDDAvailable = 1;
  if ( s_dcacheSimulateNoHDD && s_dcacheSimulateNoHDD->current.enabled )
    return 0;
  DCache_IO_ValidateTOCFileHandle(cacheType, 1);
  DCache_IO_ValidateDataFileHandle(cacheType, 1);
  s_dcacheHDDAvailable = 1;
  if ( s_dcacheSimulateNoHDD && s_dcacheSimulateNoHDD->current.enabled )
    v16 = 3;
  else
    v16 = DCache_TOC_IsCached(cacheType, fileID, location) + 1;
  v17 = v16 - 1;
  if ( v17 )
  {
    v18 = v17 - 1;
    if ( v18 )
    {
      if ( v18 == 1 )
        return 0;
      InstancePtr = Online_ErrorReporting::GetInstancePtr();
      v20 = COUNT;
LABEL_11:
      Online_ErrorReporting::ReportError(InstancePtr, v20, NULL);
      return 0;
    }
    if ( !DCache_DeleteFromCache(cacheType, fileID, location) )
    {
      v22 = Online_ErrorReporting::GetInstancePtr();
      Online_ErrorReporting::ReportError(v22, DODGE, NULL);
      DCache_TOC_FlushTOC(cacheType, 1);
    }
  }
  if ( !bufferSize )
  {
    InstancePtr = Online_ErrorReporting::GetInstancePtr();
    v20 = 4;
    goto LABEL_11;
  }
  if ( DCache_TOC_Allocate(cacheType, fileID, location, originID, fileName, fileNameSize, bufferSize, fileVersion, beginStream, createTime, modifiedTime) != DCACHE_RESULT_ALLOCATED )
  {
    InstancePtr = Online_ErrorReporting::GetInstancePtr();
    v20 = 8;
    goto LABEL_11;
  }
  if ( !beginStream )
  {
    if ( !DCache_IO_WriteToCache(cacheType, fileID, location, bufferSize, buffer) )
      return 0;
    TOC = DCache_TOC_GetTOC(cacheType);
    DCache_IO_SerializeTOC(cacheType, TOC);
  }
  return 1;
}

