/*
==============
DCache_TOC_IsBlockReserved
==============
*/

bool __fastcall DCache_TOC_IsBlockReserved(dcacheType_t cacheType, int blockIndex)
{
  return ?DCache_TOC_IsBlockReserved@@YA_NW4dcacheType_t@@H@Z(cacheType, blockIndex);
}

/*
==============
DCache_TOC_FlushTOC
==============
*/

void __fastcall DCache_TOC_FlushTOC(dcacheType_t cacheType, bool keepAdditionalData)
{
  ?DCache_TOC_FlushTOC@@YAXW4dcacheType_t@@_N@Z(cacheType, keepAdditionalData);
}

/*
==============
DCache_TOC_IsCached
==============
*/

bool __fastcall DCache_TOC_IsCached(dcacheType_t cacheType, unsigned __int64 fileID, dcacheLocation_t location)
{
  return ?DCache_TOC_IsCached@@YA_NW4dcacheType_t@@_KW4dcacheLocation_t@@@Z(cacheType, fileID, location);
}

/*
==============
DCache_TOC_Shutdown
==============
*/

void DCache_TOC_Shutdown(void)
{
  ?DCache_TOC_Shutdown@@YAXXZ();
}

/*
==============
DCache_TOC_RemotePurgeCacheRequest
==============
*/

void __fastcall DCache_TOC_RemotePurgeCacheRequest(int remotePurgeCacheRequestId)
{
  ?DCache_TOC_RemotePurgeCacheRequest@@YAXH@Z(remotePurgeCacheRequestId);
}

/*
==============
DCache_TOC_GetBlocksUsed
==============
*/

int __fastcall DCache_TOC_GetBlocksUsed(dcacheType_t cacheType, int fileIndex)
{
  return ?DCache_TOC_GetBlocksUsed@@YAHW4dcacheType_t@@H@Z(cacheType, fileIndex);
}

/*
==============
DCache_TOC_GetIndex
==============
*/

bool __fastcall DCache_TOC_GetIndex(dcacheType_t cacheType, unsigned __int64 fileID, dcacheLocation_t location, int *index)
{
  return ?DCache_TOC_GetIndex@@YA_NW4dcacheType_t@@_KW4dcacheLocation_t@@PEAH@Z(cacheType, fileID, location, index);
}

/*
==============
DCache_TOC_DumpTOC
==============
*/

void __fastcall DCache_TOC_DumpTOC(dcacheType_t cacheType)
{
  ?DCache_TOC_DumpTOC@@YAXW4dcacheType_t@@@Z(cacheType);
}

/*
==============
DCache_TOC_VerifyHash
==============
*/

bool __fastcall DCache_TOC_VerifyHash(dcacheType_t cacheType, unsigned __int64 fileID, dcacheLocation_t location, cccHashValueSHA256_t *inHash)
{
  return ?DCache_TOC_VerifyHash@@YA_NW4dcacheType_t@@_KW4dcacheLocation_t@@PEAUcccHashValueSHA256_t@@@Z(cacheType, fileID, location, inHash);
}

/*
==============
DCache_TOC_GetFileSize
==============
*/

int __fastcall DCache_TOC_GetFileSize(dcacheType_t cacheType, unsigned __int64 fileID, dcacheLocation_t location)
{
  return ?DCache_TOC_GetFileSize@@YAHW4dcacheType_t@@_KW4dcacheLocation_t@@@Z(cacheType, fileID, location);
}

/*
==============
DCache_TOC_Allocate
==============
*/

dcacheResult_t __fastcall DCache_TOC_Allocate(dcacheType_t cacheType, unsigned __int64 fileID, dcacheLocation_t location, __int16 originID, char *fileName, int fileNameSize, int fileSize, unsigned int fileVersion, bool streamedFile, unsigned int createTime, unsigned int modifiedTime)
{
  return ?DCache_TOC_Allocate@@YA?AW4dcacheResult_t@@W4dcacheType_t@@_KW4dcacheLocation_t@@FPEADHHI_NII@Z(cacheType, fileID, location, originID, fileName, fileNameSize, fileSize, fileVersion, streamedFile, createTime, modifiedTime);
}

/*
==============
DCache_TOC_GetTOC
==============
*/

dcacheTOC_t *__fastcall DCache_TOC_GetTOC(dcacheType_t cacheType)
{
  return ?DCache_TOC_GetTOC@@YAPEAUdcacheTOC_t@@W4dcacheType_t@@@Z(cacheType);
}

/*
==============
DCache_TOC_GetCacheLocationFiles
==============
*/

bool __fastcall DCache_TOC_GetCacheLocationFiles(dcacheType_t cacheType, int locations, ntl::fixed_list<dcacheFileDetails_t *,2048,0> *outFiles)
{
  return ?DCache_TOC_GetCacheLocationFiles@@YA_NW4dcacheType_t@@HPEAV?$fixed_list@PEAUdcacheFileDetails_t@@$0IAA@$0A@@ntl@@@Z(cacheType, locations, outFiles);
}

/*
==============
DCache_TOC_IsBitSet
==============
*/

bool __fastcall DCache_TOC_IsBitSet(dcacheType_t cacheType, int fileIndex, int index)
{
  return ?DCache_TOC_IsBitSet@@YA_NW4dcacheType_t@@HH@Z(cacheType, fileIndex, index);
}

/*
==============
DCache_TOC_RemoveFile
==============
*/

int __fastcall DCache_TOC_RemoveFile(dcacheType_t cacheType, int fileIndex)
{
  return ?DCache_TOC_RemoveFile@@YAHW4dcacheType_t@@H@Z(cacheType, fileIndex);
}

/*
==============
DCache_TOC_TouchByIndex
==============
*/

void __fastcall DCache_TOC_TouchByIndex(dcacheType_t cacheType, int fileIndex)
{
  ?DCache_TOC_TouchByIndex@@YAXW4dcacheType_t@@H@Z(cacheType, fileIndex);
}

/*
==============
DCache_TOC_OnCorruptionConfig
==============
*/

void __fastcall DCache_TOC_OnCorruptionConfig(int onCorruptionConfig)
{
  ?DCache_TOC_OnCorruptionConfig@@YAXH@Z(onCorruptionConfig);
}

/*
==============
DCache_TOC_Init
==============
*/

bool __fastcall DCache_TOC_Init()
{
  return ?DCache_TOC_Init@@YA_NXZ();
}

/*
==============
DCache_TOC_GetFileDetails
==============
*/

bool __fastcall DCache_TOC_GetFileDetails(dcacheType_t cacheType, unsigned __int64 fileID, dcacheLocation_t location, dcacheFileDetails_t *outFileDetails)
{
  return ?DCache_TOC_GetFileDetails@@YA_NW4dcacheType_t@@_KW4dcacheLocation_t@@PEAUdcacheFileDetails_t@@@Z(cacheType, fileID, location, outFileDetails);
}

/*
==============
DCache_TOC_OnChecksumConfig
==============
*/

void __fastcall DCache_TOC_OnChecksumConfig(int onChecksumConfig)
{
  ?DCache_TOC_OnChecksumConfig@@YAXH@Z(onChecksumConfig);
}

/*
==============
DCache_TOC_OnGenericConfig
==============
*/

void __fastcall DCache_TOC_OnGenericConfig(int onGenericConfig)
{
  ?DCache_TOC_OnGenericConfig@@YAXH@Z(onGenericConfig);
}

/*
==============
DCache_TOC_SetNewLocation
==============
*/

bool __fastcall DCache_TOC_SetNewLocation(dcacheType_t cacheType, unsigned __int64 fileID, dcacheLocation_t location, dcacheLocation_t newLocation)
{
  return ?DCache_TOC_SetNewLocation@@YA_NW4dcacheType_t@@_KW4dcacheLocation_t@@2@Z(cacheType, fileID, location, newLocation);
}

/*
==============
DCache_TOC_CondenseTOC
==============
*/

bool __fastcall DCache_TOC_CondenseTOC(dcacheTOC_t *toc)
{
  return ?DCache_TOC_CondenseTOC@@YA_NPEAUdcacheTOC_t@@@Z(toc);
}

/*
==============
DCache_TOC_GetFileIDByFilename
==============
*/

bool __fastcall DCache_TOC_GetFileIDByFilename(const char *filename, dcacheType_t cacheType, dcacheLocation_t location, unsigned __int64 *outFileID)
{
  return ?DCache_TOC_GetFileIDByFilename@@YA_NPEBDW4dcacheType_t@@W4dcacheLocation_t@@PEA_K@Z(filename, cacheType, location, outFileID);
}

/*
==============
DCache_TOC_Allocate
==============
*/
__int64 DCache_TOC_Allocate(dcacheType_t cacheType, unsigned __int64 fileID, dcacheLocation_t location, __int16 originID, char *fileName, int fileNameSize, int fileSize, unsigned int fileVersion, bool streamedFile, unsigned int createTime, unsigned int modifiedTime)
{
  __int64 v13; 
  int v14; 
  int v15; 
  Online_ErrorReporting *v16; 
  Online_ErrorReporting *InstancePtr; 
  dcacheTOC_t **v18; 
  Online_ErrorReporting *v19; 
  Online_ErrorReporting *v21; 
  Online_ErrorReporting *v22; 
  int v23; 
  __int64 v24; 
  dcacheTOC_t *v25; 
  int BlocksRemaining; 
  Online_ErrorReporting *v27; 
  int v28; 
  int v29; 
  Online_ErrorReporting *v30; 
  Online_ErrorReporting *v31; 
  bool v32; 
  int v33; 
  __int64 v34; 
  __int64 m_numFiles; 
  dcacheTOC_t *TOC; 
  dcacheTOC_t *v37; 
  Online_ErrorReporting *v38; 
  Online_ErrorReporting *v39; 
  Online_ErrorReporting *v40; 
  dcacheTOC_t *v41; 
  dcacheTOC_t *v42; 
  dcacheTOC_t *v43; 
  dcacheTOC_t *v44; 
  dcacheTOC_t *v45; 
  dcacheTOC_t *v46; 
  dcacheTOC_t *v47; 
  dcacheTOC_t *v48; 
  dcacheTOC_t *v49; 
  dcacheTOC_t *v50; 
  dcacheTOC_t *v51; 
  __int64 v52; 
  Online_ErrorReporting *v53; 
  int v54; 
  __int64 v55; 
  _OWORD *m_ptr; 
  dcacheTOC_t *v57; 
  _OWORD *v58; 
  _OWORD *v59; 
  __int64 v60; 
  __int64 v61; 
  dcacheTOC_t *v62; 
  __int64 v63; 
  _OWORD *v64; 
  _OWORD *v65; 
  __int64 v66; 
  dcacheFileInfo_t *m_fileInfo; 
  dcacheFileInfo_t *v68; 
  Mem_LargeLocal v69; 

  v13 = cacheType;
  if ( (unsigned int)(fileSize - 1) > 0x10CFFFFF )
  {
    InstancePtr = Online_ErrorReporting::GetInstancePtr();
    Online_ErrorReporting::ReportError(InstancePtr, (Online_Error_CAT_DCACHE_t)0x4000, NULL);
    v15 = 0;
    goto LABEL_14;
  }
  v14 = fileSize / 0x20000 + 1;
  if ( ((((fileSize >> 31) & 0x1FFFF) + fileSize) & 0x1FFFF) == ((fileSize >> 31) & 0x1FFFF) )
    v14 = fileSize / 0x20000;
  if ( v14 > 2152 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_toc.cpp", 209, ASSERT_TYPE_ASSERT, "(blocksNeeded <= 2152)", (const char *)&queryFormat, "blocksNeeded <= DCACHE_MAX_BLOCKS", -2i64) )
    __debugbreak();
  if ( v14 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_toc.cpp", 210, ASSERT_TYPE_ASSERT, "(blocksNeeded > 0)", (const char *)&queryFormat, "blocksNeeded > 0") )
    __debugbreak();
  v15 = 0;
  if ( v14 > 2152 || v14 <= 0 )
  {
    v16 = Online_ErrorReporting::GetInstancePtr();
    Online_ErrorReporting::ReportError(v16, (Online_Error_CAT_DCACHE_t)0x8000, NULL);
LABEL_14:
    v14 = 0;
  }
  v18 = &s_dcacheTOCs[v13];
  if ( !*v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_toc.cpp", 30, ASSERT_TYPE_ASSERT, "(s_dcacheTOCs[cacheType])", (const char *)&queryFormat, "s_dcacheTOCs[cacheType]") )
    __debugbreak();
  if ( (*v18)->m_numFiles == 2048 )
  {
    if ( (_DWORD)v13 == 1 )
    {
      v19 = Online_ErrorReporting::GetInstancePtr();
      Online_ErrorReporting::ReportError(v19, (Online_Error_CAT_DCACHE_t)0x800000, NULL);
      return 0i64;
    }
    if ( !DCache_TOC_RemoveFile((dcacheType_t)v13, 0) || DCache_TOC_GetTOC((dcacheType_t)v13)->m_numFiles == 2048 )
    {
      v21 = Online_ErrorReporting::GetInstancePtr();
      Online_ErrorReporting::ReportError(v21, (Online_Error_CAT_DCACHE_t)0x1000000, NULL);
      return 0i64;
    }
  }
  if ( !*v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_toc.cpp", 30, ASSERT_TYPE_ASSERT, "(s_dcacheTOCs[cacheType])", (const char *)&queryFormat, "s_dcacheTOCs[cacheType]") )
    __debugbreak();
  if ( (*v18)->m_numFiles >= 2048 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_toc.cpp", 488, ASSERT_TYPE_ASSERT, "(DCache_TOC_GetTOC( cacheType )->m_numFiles < 2048)", (const char *)&queryFormat, "DCache_TOC_GetTOC( cacheType )->m_numFiles < DCACHE_MAX_FILES") )
    __debugbreak();
  if ( !v14 )
  {
    v22 = Online_ErrorReporting::GetInstancePtr();
    Online_ErrorReporting::ReportError(v22, (Online_Error_CAT_DCACHE_t)0x2000000, NULL);
    return 0i64;
  }
  v23 = 0;
  v24 = 0i64;
  v25 = *v18;
  while ( 1 )
  {
    if ( !v25 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_toc.cpp", 30, ASSERT_TYPE_ASSERT, "(s_dcacheTOCs[cacheType])", (const char *)&queryFormat, "s_dcacheTOCs[cacheType]") )
      __debugbreak();
    if ( v23 >= (*v18)->m_numFiles )
      break;
    if ( !*v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_toc.cpp", 30, ASSERT_TYPE_ASSERT, "(s_dcacheTOCs[cacheType])", (const char *)&queryFormat, "s_dcacheTOCs[cacheType]") )
      __debugbreak();
    v25 = *v18;
    if ( (*v18)->m_fileInfo[v24].m_details.m_fileID == fileID )
    {
      if ( !v25 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_toc.cpp", 30, ASSERT_TYPE_ASSERT, "(s_dcacheTOCs[cacheType])", (const char *)&queryFormat, "s_dcacheTOCs[cacheType]") )
        __debugbreak();
      v25 = *v18;
      if ( (*v18)->m_fileInfo[v24].m_details.m_location == location )
        return 2i64;
    }
    ++v23;
    ++v24;
  }
  BlocksRemaining = DCache_TOC_GetBlocksRemaining((dcacheType_t)v13);
  if ( BlocksRemaining >= v14 )
    goto LABEL_53;
  if ( (_DWORD)v13 == 1 )
  {
    v27 = Online_ErrorReporting::GetInstancePtr();
    Online_ErrorReporting::ReportError(v27, (Online_Error_CAT_DCACHE_t)0x4000000, NULL);
    return 0i64;
  }
  v28 = v14 - BlocksRemaining;
  v29 = DCache_TOC_FreeBlocks((dcacheType_t)v13, v14 - BlocksRemaining);
  if ( v29 && v29 >= v28 )
  {
LABEL_53:
    if ( v14 > DCache_TOC_GetBlocksRemaining((dcacheType_t)v13) )
    {
      DCache_TOC_DumpTOC((dcacheType_t)v13);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_toc.cpp", 302, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Disk cache error : too few blocks remaining even after attempting to free up blocks.") )
        __debugbreak();
      v31 = Online_ErrorReporting::GetInstancePtr();
      Online_ErrorReporting::ReportError(v31, (Online_Error_CAT_DCACHE_t)0x40000, NULL);
    }
    while ( 1 )
    {
      v32 = v14 == 0;
      if ( v14 <= 0 )
        break;
      if ( !*v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_toc.cpp", 30, ASSERT_TYPE_ASSERT, "(s_dcacheTOCs[cacheType])", (const char *)&queryFormat, "s_dcacheTOCs[cacheType]") )
        __debugbreak();
      v33 = v15 % 8;
      v34 = v15 / 8;
      if ( (((*v18)->m_usedBlocks[v34] >> (v15 % 8)) & 1) == 0 )
      {
        m_numFiles = DCache_TOC_GetTOC((dcacheType_t)v13)->m_numFiles;
        if ( (int)m_numFiles >= 2048 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_toc.cpp", 435, ASSERT_TYPE_ASSERT, "(fileIndex < 2048)", (const char *)&queryFormat, "fileIndex < DCACHE_MAX_FILES") )
          __debugbreak();
        if ( (int)m_numFiles < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_toc.cpp", 436, ASSERT_TYPE_ASSERT, "(fileIndex >= 0)", (const char *)&queryFormat, "fileIndex >= 0") )
          __debugbreak();
        if ( v15 < 0 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_toc.cpp", 149, ASSERT_TYPE_ASSERT, "(blockIndex >= 0)", (const char *)&queryFormat, "blockIndex >= 0") )
            __debugbreak();
          v39 = Online_ErrorReporting::GetInstancePtr();
          Online_ErrorReporting::ReportError(v39, (Online_Error_CAT_DCACHE_t)0x4000, NULL);
LABEL_80:
          v40 = Online_ErrorReporting::GetInstancePtr();
          Online_ErrorReporting::ReportError(v40, (Online_Error_CAT_DCACHE_t)0x400000, NULL);
          return 0i64;
        }
        if ( (unsigned int)m_numFiles > 0x7FF )
          goto LABEL_80;
        TOC = DCache_TOC_GetTOC((dcacheType_t)v13);
        TOC->m_usedBlocks[v34] |= 1 << v33;
        v37 = DCache_TOC_GetTOC((dcacheType_t)v13);
        v37->m_fileInfo[m_numFiles].m_bitfield[v34] |= 1 << v33;
        --v14;
      }
      if ( ++v15 >= 2152 )
      {
        v32 = v14 == 0;
        break;
      }
    }
    if ( v32 )
    {
      v41 = DCache_TOC_GetTOC((dcacheType_t)v13);
      v41->m_fileInfo[DCache_TOC_GetTOC((dcacheType_t)v13)->m_numFiles].m_details.m_fileID = fileID;
      v42 = DCache_TOC_GetTOC((dcacheType_t)v13);
      v42->m_fileInfo[DCache_TOC_GetTOC((dcacheType_t)v13)->m_numFiles].m_details.m_location = location;
      v43 = DCache_TOC_GetTOC((dcacheType_t)v13);
      v43->m_fileInfo[DCache_TOC_GetTOC((dcacheType_t)v13)->m_numFiles].m_details.m_originID = originID;
      v44 = DCache_TOC_GetTOC((dcacheType_t)v13);
      v44->m_fileInfo[DCache_TOC_GetTOC((dcacheType_t)v13)->m_numFiles].m_details.m_size = fileSize;
      v45 = DCache_TOC_GetTOC((dcacheType_t)v13);
      v45->m_fileInfo[DCache_TOC_GetTOC((dcacheType_t)v13)->m_numFiles].m_details.m_version = fileVersion;
      v46 = DCache_TOC_GetTOC((dcacheType_t)v13);
      v46->m_fileInfo[DCache_TOC_GetTOC((dcacheType_t)v13)->m_numFiles].m_details.m_serverCreateTime = createTime;
      v47 = DCache_TOC_GetTOC((dcacheType_t)v13);
      v47->m_fileInfo[DCache_TOC_GetTOC((dcacheType_t)v13)->m_numFiles].m_details.m_serverModifiedTime = modifiedTime;
      v48 = DCache_TOC_GetTOC((dcacheType_t)v13);
      v48->m_fileInfo[DCache_TOC_GetTOC((dcacheType_t)v13)->m_numFiles].m_details.m_streamingInProgress = streamedFile;
      if ( fileName )
      {
        v49 = DCache_TOC_GetTOC((dcacheType_t)v13);
        v50 = DCache_TOC_GetTOC((dcacheType_t)v13);
        Core_strcpy(v49->m_fileInfo[v50->m_numFiles].m_details.m_name, 0x80ui64, fileName);
      }
      v51 = DCache_TOC_GetTOC((dcacheType_t)v13);
      ++v51->m_numFiles;
      v52 = DCache_TOC_GetTOC((dcacheType_t)v13)->m_numFiles;
      if ( DCache_TOC_AssertFileIndex((dcacheType_t)v13, v52 - 1) )
      {
        v54 = Sys_Milliseconds();
        v55 = 472 * v52;
        *((_DWORD *)DCache_TOC_GetTOC((dcacheType_t)v13) + 118 * v52 - 62) = v54;
        if ( (_DWORD)v52 - 1 != DCache_TOC_GetTOC((dcacheType_t)v13)->m_numFiles - 1 )
        {
          Mem_LargeLocal::Mem_LargeLocal(&v69, 0x1D8ui64, "dcacheFileInfo_t tempFileInfo");
          m_ptr = v69.m_ptr;
          v57 = DCache_TOC_GetTOC((dcacheType_t)v13);
          v58 = m_ptr;
          v59 = (_OWORD *)((char *)v57 + v55 - 440);
          v60 = 3i64;
          v61 = 3i64;
          do
          {
            *v58 = *v59;
            v58[1] = v59[1];
            v58[2] = v59[2];
            v58[3] = v59[3];
            v58[4] = v59[4];
            v58[5] = v59[5];
            v58[6] = v59[6];
            v58 += 8;
            *(v58 - 1) = v59[7];
            v59 += 8;
            --v61;
          }
          while ( v61 );
          *v58 = *v59;
          v58[1] = v59[1];
          v58[2] = v59[2];
          v58[3] = v59[3];
          v58[4] = v59[4];
          *((_QWORD *)v58 + 10) = *((_QWORD *)v59 + 10);
          v62 = DCache_TOC_GetTOC((dcacheType_t)v13);
          v63 = 472i64 * DCache_TOC_GetTOC((dcacheType_t)v13)->m_numFiles;
          v64 = (_OWORD *)((char *)DCache_TOC_GetTOC((dcacheType_t)v13) + v55 - 440);
          v65 = (_OWORD *)((char *)v62 + v63 - 440);
          v66 = 3i64;
          do
          {
            *v64 = *v65;
            v64[1] = v65[1];
            v64[2] = v65[2];
            v64[3] = v65[3];
            v64[4] = v65[4];
            v64[5] = v65[5];
            v64[6] = v65[6];
            v64 += 8;
            *(v64 - 1) = v65[7];
            v65 += 8;
            --v66;
          }
          while ( v66 );
          *v64 = *v65;
          v64[1] = v65[1];
          v64[2] = v65[2];
          v64[3] = v65[3];
          v64[4] = v65[4];
          *((_QWORD *)v64 + 10) = *((_QWORD *)v65 + 10);
          m_fileInfo = DCache_TOC_GetTOC((dcacheType_t)v13)->m_fileInfo;
          v68 = &m_fileInfo[DCache_TOC_GetTOC((dcacheType_t)v13)->m_numFiles - 1];
          do
          {
            *(_OWORD *)&v68->m_details.m_fileID = *m_ptr;
            *(_OWORD *)&v68->m_details.m_name[4] = m_ptr[1];
            *(_OWORD *)&v68->m_details.m_name[20] = m_ptr[2];
            *(_OWORD *)&v68->m_details.m_name[36] = m_ptr[3];
            *(_OWORD *)&v68->m_details.m_name[52] = m_ptr[4];
            *(_OWORD *)&v68->m_details.m_name[68] = m_ptr[5];
            *(_OWORD *)&v68->m_details.m_name[84] = m_ptr[6];
            v68 = (dcacheFileInfo_t *)((char *)v68 + 128);
            *(_OWORD *)&v68[-1].m_bitfield[256] = m_ptr[7];
            m_ptr += 8;
            --v60;
          }
          while ( v60 );
          *(_OWORD *)&v68->m_details.m_fileID = *m_ptr;
          *(_OWORD *)&v68->m_details.m_name[4] = m_ptr[1];
          *(_OWORD *)&v68->m_details.m_name[20] = m_ptr[2];
          *(_OWORD *)&v68->m_details.m_name[36] = m_ptr[3];
          *(_OWORD *)&v68->m_details.m_name[52] = m_ptr[4];
          *(_QWORD *)&v68->m_details.m_name[68] = *((_QWORD *)m_ptr + 10);
          Mem_LargeLocal::~Mem_LargeLocal(&v69);
        }
      }
      else
      {
        v53 = Online_ErrorReporting::GetInstancePtr();
        Online_ErrorReporting::ReportError(v53, (Online_Error_CAT_DCACHE_t)0x20000, NULL);
      }
      return 4i64;
    }
    else
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_toc.cpp", 559, ASSERT_TYPE_ASSERT, "(blocksNeeded == 0)", (const char *)&queryFormat, "blocksNeeded == 0") )
        __debugbreak();
      v38 = Online_ErrorReporting::GetInstancePtr();
      Online_ErrorReporting::ReportError(v38, (Online_Error_CAT_DCACHE_t)0x10000000, NULL);
      return 0i64;
    }
  }
  else
  {
    v30 = Online_ErrorReporting::GetInstancePtr();
    Online_ErrorReporting::ReportError(v30, (Online_Error_CAT_DCACHE_t)0x8000000, NULL);
    return 0i64;
  }
}

/*
==============
DCache_TOC_AssertFileIndex
==============
*/
char DCache_TOC_AssertFileIndex(dcacheType_t cacheType, int fileIndex)
{
  dcacheTOC_t **v4; 
  Online_ErrorReporting *InstancePtr; 

  v4 = &s_dcacheTOCs[cacheType];
  if ( !*v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_toc.cpp", 30, ASSERT_TYPE_ASSERT, "(s_dcacheTOCs[cacheType])", (const char *)&queryFormat, "s_dcacheTOCs[cacheType]") )
    __debugbreak();
  if ( fileIndex >= (*v4)->m_numFiles && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_toc.cpp", 130, ASSERT_TYPE_ASSERT, "(fileIndex < DCache_TOC_GetTOC( cacheType )->m_numFiles)", (const char *)&queryFormat, "fileIndex < DCache_TOC_GetTOC( cacheType )->m_numFiles") )
    __debugbreak();
  if ( fileIndex < 0 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_toc.cpp", 131, ASSERT_TYPE_ASSERT, "(fileIndex >= 0)", (const char *)&queryFormat, "fileIndex >= 0") )
      __debugbreak();
    goto LABEL_10;
  }
  if ( fileIndex >= DCache_TOC_GetTOC(cacheType)->m_numFiles )
  {
LABEL_10:
    InstancePtr = Online_ErrorReporting::GetInstancePtr();
    Online_ErrorReporting::ReportError(InstancePtr, (Online_Error_CAT_DCACHE_t)0x2000, NULL);
    return 0;
  }
  return 1;
}

/*
==============
DCache_TOC_CondenseTOC
==============
*/
char DCache_TOC_CondenseTOC(dcacheTOC_t *toc)
{
  _DWORD *v2; 
  Online_ErrorReporting *InstancePtr; 
  int v5; 
  int v6; 
  _DWORD *v7; 
  _OWORD *v8; 
  dcacheFileInfo_t *v9; 
  __int64 v10; 
  __int128 v11; 
  StreamerMemLoan result; 

  if ( !toc && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_toc.cpp", 696, ASSERT_TYPE_ASSERT, "(toc)", (const char *)&queryFormat, "toc") )
    __debugbreak();
  PMem_BeginAlloc("DCACHE_TOC", PMEM_STACK_GAME);
  v2 = PMem_Alloc(0xF0480ui64, 8ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, "DCACHE_TOC");
  PMem_EndAlloc("DCACHE_TOC", PMEM_STACK_GAME);
  if ( v2 )
  {
    memcpy_0(v2, toc, 0xF0480ui64);
    memset_0(toc->m_fileInfo, 0, sizeof(toc->m_fileInfo));
    v5 = 0;
    v6 = 0;
    if ( (int)v2[246044] > 0 )
    {
      v7 = v2 + 8;
      do
      {
        if ( v7[2] )
        {
          v8 = v7;
          v9 = &toc->m_fileInfo[v5];
          v10 = 3i64;
          do
          {
            *(_OWORD *)&v9->m_details.m_fileID = *v8;
            *(_OWORD *)&v9->m_details.m_name[4] = v8[1];
            *(_OWORD *)&v9->m_details.m_name[20] = v8[2];
            *(_OWORD *)&v9->m_details.m_name[36] = v8[3];
            *(_OWORD *)&v9->m_details.m_name[52] = v8[4];
            *(_OWORD *)&v9->m_details.m_name[68] = v8[5];
            *(_OWORD *)&v9->m_details.m_name[84] = v8[6];
            v11 = v8[7];
            v8 += 8;
            v9 = (dcacheFileInfo_t *)((char *)v9 + 128);
            *(_OWORD *)&v9[-1].m_bitfield[256] = v11;
            --v10;
          }
          while ( v10 );
          *(_OWORD *)&v9->m_details.m_fileID = *v8;
          *(_OWORD *)&v9->m_details.m_name[4] = v8[1];
          *(_OWORD *)&v9->m_details.m_name[20] = v8[2];
          *(_OWORD *)&v9->m_details.m_name[36] = v8[3];
          *(_OWORD *)&v9->m_details.m_name[52] = v8[4];
          ++v5;
          *(_QWORD *)&v9->m_details.m_name[68] = *((_QWORD *)v8 + 10);
        }
        ++v6;
        v7 += 118;
      }
      while ( v6 < v2[246044] );
    }
    toc->m_numFiles = v5;
    PMem_Free(&result, "DCACHE_TOC", PMEM_STACK_GAME);
    StreamerMemLoan::~StreamerMemLoan(&result);
    return 1;
  }
  else
  {
    InstancePtr = Online_ErrorReporting::GetInstancePtr();
    Online_ErrorReporting::ReportError(InstancePtr, MOVEMENT, NULL);
    return 0;
  }
}

/*
==============
DCache_TOC_DumpTOC
==============
*/
void DCache_TOC_DumpTOC(dcacheType_t cacheType)
{
  __int64 v1; 
  int v2; 
  int v3; 
  dcacheTOC_t **v4; 
  __int64 v5; 
  __int64 v6; 
  Online_ErrorReporting *InstancePtr; 
  int v8; 
  int i; 
  __int64 j; 
  Online_ErrorReporting *v11; 
  int v12; 
  int k; 
  char *fmt; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 
  __int64 v18; 

  v1 = cacheType;
  Com_Printf(16, "dcache: %20s %20s %20s %20s %20s %20s %20s %64s %64s\n", "Cache Type", "File ID", "Location", "Origin ID", "Size", "Timestamp", "Blocks", "FileName", "Hash");
  v2 = 0;
  v3 = 0;
  v4 = &s_dcacheTOCs[v1];
  v5 = 0i64;
  while ( 1 )
  {
    if ( !*v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_toc.cpp", 30, ASSERT_TYPE_ASSERT, "(s_dcacheTOCs[cacheType])", (const char *)&queryFormat, "s_dcacheTOCs[cacheType]") )
      __debugbreak();
    if ( v3 >= (*v4)->m_numFiles )
      break;
    if ( !*v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_toc.cpp", 30, ASSERT_TYPE_ASSERT, "(s_dcacheTOCs[cacheType])", (const char *)&queryFormat, "s_dcacheTOCs[cacheType]") )
      __debugbreak();
    if ( (*v4)->m_fileInfo[v5].m_details.m_fileID )
    {
      if ( !*v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_toc.cpp", 30, ASSERT_TYPE_ASSERT, "(s_dcacheTOCs[cacheType])", (const char *)&queryFormat, "s_dcacheTOCs[cacheType]") )
        __debugbreak();
      v6 = (__int64)&(*v4)->m_fileInfo[v5];
      if ( DCache_TOC_AssertFileIndex((dcacheType_t)v1, v3) )
      {
        v8 = 0;
        for ( i = 0; i < 2152; ++i )
        {
          if ( DCache_TOC_IsBitSet((dcacheType_t)v1, v3, i) )
            ++v8;
        }
      }
      else
      {
        InstancePtr = Online_ErrorReporting::GetInstancePtr();
        Online_ErrorReporting::ReportError(InstancePtr, (Online_Error_CAT_DCACHE_t)0x10000, NULL);
        v8 = 0;
      }
      LODWORD(v18) = v8;
      LODWORD(v17) = *(_DWORD *)(v6 + 192);
      LODWORD(v16) = *(_DWORD *)(v6 + 176);
      LODWORD(v15) = *(__int16 *)(v6 + 180);
      LODWORD(fmt) = *(_DWORD *)(v6 + 8);
      Com_Printf(16, "dcache: %20d %20zu %20d %20d %20d %20d %20d %64s ", (unsigned int)v1, *(_QWORD *)v6, fmt, v15, v16, v17, v18, (const char *)(v6 + 12));
      for ( j = 0i64; j < 32; ++j )
        Com_Printf(16, "%02x", *(unsigned __int8 *)(v6 + j + 144));
      Com_Printf(16, "\n");
    }
    if ( DCache_TOC_AssertFileIndex((dcacheType_t)v1, v3) )
    {
      v12 = 0;
      for ( k = 0; k < 2152; ++k )
      {
        if ( DCache_TOC_IsBitSet((dcacheType_t)v1, v3, k) )
          ++v12;
      }
      v2 += v12;
      ++v3;
      ++v5;
    }
    else
    {
      v11 = Online_ErrorReporting::GetInstancePtr();
      Online_ErrorReporting::ReportError(v11, (Online_Error_CAT_DCACHE_t)0x10000, NULL);
      ++v3;
      ++v5;
    }
  }
  if ( v2 > 2152 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_toc.cpp", 685, ASSERT_TYPE_ASSERT, "(totalBlocksUsed <= 2152)", (const char *)&queryFormat, "totalBlocksUsed <= DCACHE_MAX_BLOCKS") )
    __debugbreak();
  Com_Printf(16, "dcache[%d]: Total blocks used: %d\n", (unsigned int)v1, (unsigned int)v2);
}

/*
==============
DCache_TOC_FlushTOC
==============
*/
void DCache_TOC_FlushTOC(dcacheType_t cacheType, bool keepAdditionalData)
{
  __int64 v3; 
  _DWORD *m_ptr; 
  dcacheTOC_t **v5; 
  dcacheTOC_t *v6; 
  Mem_LargeLocal v7; 

  v3 = cacheType;
  Mem_LargeLocal::Mem_LargeLocal(&v7, 0x14ui64, "dcacheAdditionalData_t additionalData");
  m_ptr = v7.m_ptr;
  v5 = &s_dcacheTOCs[v3];
  if ( !*v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_toc.cpp", 30, ASSERT_TYPE_ASSERT, "(s_dcacheTOCs[cacheType])", (const char *)&queryFormat, "s_dcacheTOCs[cacheType]", -2i64) )
    __debugbreak();
  v6 = *v5;
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_toc.cpp", 603, ASSERT_TYPE_ASSERT, "(toc)", (const char *)&queryFormat, "toc") )
    __debugbreak();
  *(_OWORD *)m_ptr = *(_OWORD *)&v6->m_additionalData.m_languageSetting;
  m_ptr[4] = v6->m_additionalData.m_genericConfig;
  memset_0(v6, 0, sizeof(dcacheTOC_t));
  *(_DWORD *)&v6->m_versionMajor = 589835;
  v6->m_localFileIDSequence = 0xFFFFFFFFi64;
  v6->m_additionalData.m_remotePurgeCacheRequestId = m_ptr[1];
  if ( keepAdditionalData )
  {
    *(_OWORD *)&v6->m_additionalData.m_languageSetting = *(_OWORD *)m_ptr;
    v6->m_additionalData.m_genericConfig = m_ptr[4];
  }
  else
  {
    v6->m_additionalData.m_languageSetting = MAX_LANGUAGES;
  }
  Mem_LargeLocal::~Mem_LargeLocal(&v7);
}

/*
==============
DCache_TOC_FreeBlocks
==============
*/
__int64 DCache_TOC_FreeBlocks(dcacheType_t cacheType, int blocksNeeded)
{
  int v3; 
  int v4; 
  int v6; 
  dcacheTOC_t **v7; 
  int v8; 
  Online_ErrorReporting *InstancePtr; 
  int i; 
  dcacheTOC_t *v11; 
  dcacheTOC_t *v12; 
  int j; 
  dcacheTOC_t *v14; 
  __int64 result; 
  Online_ErrorReporting *v16; 

  v3 = 0;
  v4 = 0;
  v6 = 0;
  v7 = &s_dcacheTOCs[cacheType];
  while ( 1 )
  {
    if ( !*v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_toc.cpp", 30, ASSERT_TYPE_ASSERT, "(s_dcacheTOCs[cacheType])", (const char *)&queryFormat, "s_dcacheTOCs[cacheType]") )
      __debugbreak();
    if ( v6 >= (*v7)->m_numFiles )
      break;
    v3 += DCache_TOC_RemoveFile(cacheType, v6);
    ++v4;
    if ( blocksNeeded <= v3 )
      break;
    ++v6;
  }
  if ( v4 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_toc.cpp", 391, ASSERT_TYPE_ASSERT, "(filesRemoved > 0)", (const char *)&queryFormat, "filesRemoved > 0") )
    __debugbreak();
  v8 = 0;
  while ( 1 )
  {
    if ( !*v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_toc.cpp", 30, ASSERT_TYPE_ASSERT, "(s_dcacheTOCs[cacheType])", (const char *)&queryFormat, "s_dcacheTOCs[cacheType]") )
      __debugbreak();
    if ( v8 >= (*v7)->m_numFiles )
      break;
    if ( DCache_TOC_AssertFileIndex(cacheType, v8) )
    {
      for ( i = 0; i < 2152; ++i )
        DCache_TOC_IsBitSet(cacheType, v8, i);
      ++v8;
    }
    else
    {
      InstancePtr = Online_ErrorReporting::GetInstancePtr();
      Online_ErrorReporting::ReportError(InstancePtr, (Online_Error_CAT_DCACHE_t)0x10000, NULL);
      ++v8;
    }
  }
  if ( !*v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_toc.cpp", 30, ASSERT_TYPE_ASSERT, "(s_dcacheTOCs[cacheType])", (const char *)&queryFormat, "s_dcacheTOCs[cacheType]") )
    __debugbreak();
  if ( v4 > (*v7)->m_numFiles && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_toc.cpp", 409, ASSERT_TYPE_ASSERT, "(filesRemoved <= DCache_TOC_GetTOC( cacheType )->m_numFiles)", (const char *)&queryFormat, "filesRemoved <= DCache_TOC_GetTOC( cacheType )->m_numFiles") )
    __debugbreak();
  if ( !*v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_toc.cpp", 30, ASSERT_TYPE_ASSERT, "(s_dcacheTOCs[cacheType])", (const char *)&queryFormat, "s_dcacheTOCs[cacheType]") )
    __debugbreak();
  if ( v4 > (*v7)->m_numFiles )
  {
    v16 = Online_ErrorReporting::GetInstancePtr();
    Online_ErrorReporting::ReportError(v16, (Online_Error_CAT_DCACHE_t)0x200000, NULL);
    return 0i64;
  }
  else
  {
    if ( !*v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_toc.cpp", 30, ASSERT_TYPE_ASSERT, "(s_dcacheTOCs[cacheType])", (const char *)&queryFormat, "s_dcacheTOCs[cacheType]") )
      __debugbreak();
    v11 = *v7;
    if ( !*v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_toc.cpp", 30, ASSERT_TYPE_ASSERT, "(s_dcacheTOCs[cacheType])", (const char *)&queryFormat, "s_dcacheTOCs[cacheType]") )
      __debugbreak();
    v12 = *v7;
    if ( !*v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_toc.cpp", 30, ASSERT_TYPE_ASSERT, "(s_dcacheTOCs[cacheType])", (const char *)&queryFormat, "s_dcacheTOCs[cacheType]") )
      __debugbreak();
    memmove_0((*v7)->m_fileInfo, &v12->m_fileInfo[v4], 472i64 * (v11->m_numFiles - v4));
    if ( !*v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_toc.cpp", 30, ASSERT_TYPE_ASSERT, "(s_dcacheTOCs[cacheType])", (const char *)&queryFormat, "s_dcacheTOCs[cacheType]") )
      __debugbreak();
    for ( j = (*v7)->m_numFiles - v4; ; ++j )
    {
      if ( !*v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_toc.cpp", 30, ASSERT_TYPE_ASSERT, "(s_dcacheTOCs[cacheType])", (const char *)&queryFormat, "s_dcacheTOCs[cacheType]") )
        __debugbreak();
      v14 = *v7;
      if ( j >= (*v7)->m_numFiles )
        break;
      if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_toc.cpp", 30, ASSERT_TYPE_ASSERT, "(s_dcacheTOCs[cacheType])", (const char *)&queryFormat, "s_dcacheTOCs[cacheType]") )
        __debugbreak();
      memset_0(&(*v7)->m_fileInfo[j], 0, sizeof((*v7)->m_fileInfo[j]));
    }
    if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_toc.cpp", 30, ASSERT_TYPE_ASSERT, "(s_dcacheTOCs[cacheType])", (const char *)&queryFormat, "s_dcacheTOCs[cacheType]") )
      __debugbreak();
    result = (unsigned int)v3;
    (*v7)->m_numFiles -= v4;
  }
  return result;
}

/*
==============
DCache_TOC_GetBlocksRemaining
==============
*/
__int64 DCache_TOC_GetBlocksRemaining(dcacheType_t cacheType)
{
  int v1; 
  __int64 v2; 
  dcacheTOC_t **v3; 
  unsigned __int8 v4; 
  int v5; 
  unsigned __int8 v6; 

  v1 = 2152;
  v2 = 0i64;
  v3 = &s_dcacheTOCs[cacheType];
  do
  {
    if ( !*v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_toc.cpp", 30, ASSERT_TYPE_ASSERT, "(s_dcacheTOCs[cacheType])", (const char *)&queryFormat, "s_dcacheTOCs[cacheType]") )
      __debugbreak();
    v4 = (*v3)->m_usedBlocks[v2];
    if ( v4 )
    {
      do
      {
        v5 = v1 - 1;
        v6 = v4;
        if ( (v4 & 1) == 0 )
          v5 = v1;
        v4 >>= 1;
        v1 = v5;
      }
      while ( v6 >= 2u );
    }
    ++v2;
  }
  while ( v2 < 269 );
  if ( v1 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_toc.cpp", 264, ASSERT_TYPE_ASSERT, "(blocksRemaining >= 0)", (const char *)&queryFormat, "blocksRemaining >= 0") )
    __debugbreak();
  return (unsigned int)v1;
}

/*
==============
DCache_TOC_GetBlocksUsed
==============
*/
__int64 DCache_TOC_GetBlocksUsed(dcacheType_t cacheType, int fileIndex)
{
  Online_ErrorReporting *InstancePtr; 
  unsigned int v6; 
  int i; 

  if ( DCache_TOC_AssertFileIndex(cacheType, fileIndex) )
  {
    v6 = 0;
    for ( i = 0; i < 2152; ++i )
    {
      if ( DCache_TOC_IsBitSet(cacheType, fileIndex, i) )
        ++v6;
    }
    return v6;
  }
  else
  {
    InstancePtr = Online_ErrorReporting::GetInstancePtr();
    Online_ErrorReporting::ReportError(InstancePtr, (Online_Error_CAT_DCACHE_t)0x10000, NULL);
    return 0i64;
  }
}

/*
==============
DCache_TOC_GetCacheLocationFiles
==============
*/
char DCache_TOC_GetCacheLocationFiles(dcacheType_t cacheType, int locations, ntl::fixed_list<dcacheFileDetails_t *,2048,0> *outFiles)
{
  dcacheTOC_t **v5; 
  dcacheTOC_t *v6; 
  int v7; 
  dcacheLocation_t *p_m_location; 
  ntl::internal::pool_allocator_freelist<24> *p_m_freelist; 
  ntl::internal::list_node<dcacheFileDetails_t *> *mp_next; 

  v5 = &s_dcacheTOCs[cacheType];
  if ( !*v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_toc.cpp", 30, ASSERT_TYPE_ASSERT, "(s_dcacheTOCs[cacheType])", (const char *)&queryFormat, "s_dcacheTOCs[cacheType]") )
    __debugbreak();
  v6 = *v5;
  v7 = 0;
  if ( (*v5)->m_numFiles > 0 )
  {
    p_m_location = &v6->m_fileInfo[0].m_details.m_location;
    do
    {
      if ( *((_QWORD *)p_m_location - 1) && (locations & *p_m_location) != 0 )
      {
        p_m_freelist = &outFiles->m_freelist;
        if ( !outFiles->m_freelist.m_head.mp_next )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
            __debugbreak();
          if ( !p_m_freelist->m_head.mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
            __debugbreak();
        }
        if ( (ntl::internal::pool_allocator_freelist<24> *)p_m_freelist->m_head.mp_next == p_m_freelist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 298, ASSERT_TYPE_ASSERT, "( !empty() )", "Pool out of elements to allocate (Elem size=%zu, Num elems=%zu)", 0x18ui64, 0x800ui64) )
          __debugbreak();
        mp_next = (ntl::internal::list_node<dcacheFileDetails_t *> *)p_m_freelist->m_head.mp_next;
        p_m_freelist->m_head.mp_next = p_m_freelist->m_head.mp_next->mp_next;
        mp_next->mp_prev = NULL;
        mp_next->mp_next = NULL;
        mp_next->m_data = &v6->m_fileInfo[v7].m_details;
        ntl::internal::list_head_base<ntl::internal::list_node<dcacheFileDetails_t *>>::insert_before(&outFiles->m_listHead, (ntl::internal::list_node<dcacheFileDetails_t *> *)&outFiles->m_listHead, mp_next);
      }
      ++v7;
      p_m_location += 118;
    }
    while ( v7 < v6->m_numFiles );
  }
  return 1;
}

/*
==============
DCache_TOC_GetFileDetails
==============
*/
char DCache_TOC_GetFileDetails(dcacheType_t cacheType, unsigned __int64 fileID, dcacheLocation_t location, dcacheFileDetails_t *outFileDetails)
{
  dcacheFileInfo_t *v8; 
  int index; 

  if ( !outFileDetails && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_toc.cpp", 88, ASSERT_TYPE_ASSERT, "(outFileDetails)", (const char *)&queryFormat, "outFileDetails") )
    __debugbreak();
  if ( !DCache_TOC_GetIndex(cacheType, fileID, location, &index) )
    return 0;
  v8 = &DCache_TOC_GetTOC(cacheType)->m_fileInfo[index];
  *(_OWORD *)&outFileDetails->m_fileID = *(_OWORD *)&v8->m_details.m_fileID;
  *(_OWORD *)&outFileDetails->m_name[4] = *(_OWORD *)&v8->m_details.m_name[4];
  *(_OWORD *)&outFileDetails->m_name[20] = *(_OWORD *)&v8->m_details.m_name[20];
  *(_OWORD *)&outFileDetails->m_name[36] = *(_OWORD *)&v8->m_details.m_name[36];
  *(_OWORD *)&outFileDetails->m_name[52] = *(_OWORD *)&v8->m_details.m_name[52];
  *(_OWORD *)&outFileDetails->m_name[68] = *(_OWORD *)&v8->m_details.m_name[68];
  *(_OWORD *)&outFileDetails->m_name[84] = *(_OWORD *)&v8->m_details.m_name[84];
  *(_OWORD *)&outFileDetails->m_name[100] = *(_OWORD *)&v8->m_details.m_name[100];
  *(_OWORD *)&outFileDetails->m_name[116] = *(_OWORD *)&v8->m_details.m_name[116];
  *(_OWORD *)outFileDetails->m_computedHashValue.hashBytes = *(_OWORD *)v8->m_details.m_computedHashValue.hashBytes;
  *(_OWORD *)&outFileDetails->m_computedHashValue.hashBytes[16] = *(_OWORD *)&v8->m_details.m_computedHashValue.hashBytes[16];
  *(_OWORD *)&outFileDetails->m_size = *(_OWORD *)&v8->m_details.m_size;
  *(_QWORD *)&outFileDetails->m_timestamp = *(_QWORD *)&v8->m_details.m_timestamp;
  return 1;
}

/*
==============
DCache_TOC_GetFileIDByFilename
==============
*/
bool DCache_TOC_GetFileIDByFilename(const char *filename, dcacheType_t cacheType, dcacheLocation_t location, unsigned __int64 *outFileID)
{
  dcacheTOC_t **v7; 
  dcacheTOC_t *v8; 
  Online_ErrorReporting *InstancePtr; 
  bool result; 
  int v11; 
  bool *i; 

  v7 = &s_dcacheTOCs[cacheType];
  if ( !*v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_toc.cpp", 30, ASSERT_TYPE_ASSERT, "(s_dcacheTOCs[cacheType])", (const char *)&queryFormat, "s_dcacheTOCs[cacheType]") )
    __debugbreak();
  v8 = *v7;
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_toc.cpp", 50, ASSERT_TYPE_ASSERT, "(toc)", (const char *)&queryFormat, "toc") )
    __debugbreak();
  if ( !outFileID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_toc.cpp", 51, ASSERT_TYPE_ASSERT, "(outFileID)", (const char *)&queryFormat, "outFileID") )
    __debugbreak();
  if ( DCache_IsStartupDisabled() )
  {
    InstancePtr = Online_ErrorReporting::GetInstancePtr();
    Online_ErrorReporting::ReportError(InstancePtr, (Online_Error_CAT_DCACHE_t)0x80000000, NULL);
    return 0;
  }
  else
  {
    v11 = 0;
    if ( v8->m_numFiles <= 0 )
    {
      return 0;
    }
    else
    {
      for ( i = &v8->m_fileInfo[0].m_details.m_streamingInProgress; *((_DWORD *)i - 47) != location || *i || I_strncmp(v8->m_fileInfo[v11].m_details.m_name, filename, 0x80ui64); i += 472 )
      {
        if ( ++v11 >= v8->m_numFiles )
          return 0;
      }
      result = 1;
      *outFileID = v8->m_fileInfo[v11].m_details.m_fileID;
    }
  }
  return result;
}

/*
==============
DCache_TOC_GetFileSize
==============
*/
__int64 DCache_TOC_GetFileSize(dcacheType_t cacheType, unsigned __int64 fileID, dcacheLocation_t location)
{
  int v3; 
  __int64 v6; 
  dcacheTOC_t **v7; 
  dcacheTOC_t *v8; 

  v3 = 0;
  v6 = 0i64;
  v7 = &s_dcacheTOCs[cacheType];
  v8 = *v7;
  while ( 1 )
  {
    if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_toc.cpp", 30, ASSERT_TYPE_ASSERT, "(s_dcacheTOCs[cacheType])", (const char *)&queryFormat, "s_dcacheTOCs[cacheType]") )
      __debugbreak();
    if ( v3 >= (*v7)->m_numFiles )
      return 0i64;
    if ( !*v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_toc.cpp", 30, ASSERT_TYPE_ASSERT, "(s_dcacheTOCs[cacheType])", (const char *)&queryFormat, "s_dcacheTOCs[cacheType]") )
      __debugbreak();
    v8 = *v7;
    if ( (*v7)->m_fileInfo[v6].m_details.m_fileID == fileID )
    {
      if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_toc.cpp", 30, ASSERT_TYPE_ASSERT, "(s_dcacheTOCs[cacheType])", (const char *)&queryFormat, "s_dcacheTOCs[cacheType]") )
        __debugbreak();
      v8 = *v7;
      if ( (*v7)->m_fileInfo[v6].m_details.m_location == location )
        break;
    }
    ++v3;
    ++v6;
  }
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_toc.cpp", 30, ASSERT_TYPE_ASSERT, "(s_dcacheTOCs[cacheType])", (const char *)&queryFormat, "s_dcacheTOCs[cacheType]") )
    __debugbreak();
  return (unsigned int)(*v7)->m_fileInfo[v3].m_details.m_size;
}

/*
==============
DCache_TOC_GetIndex
==============
*/
char DCache_TOC_GetIndex(dcacheType_t cacheType, unsigned __int64 fileID, dcacheLocation_t location, int *index)
{
  int v4; 
  dcacheTOC_t **v8; 
  __int64 v9; 
  dcacheTOC_t *v10; 

  v4 = 0;
  v8 = &s_dcacheTOCs[cacheType];
  v9 = 0i64;
  v10 = *v8;
  while ( 1 )
  {
    if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_toc.cpp", 30, ASSERT_TYPE_ASSERT, "(s_dcacheTOCs[cacheType])", (const char *)&queryFormat, "s_dcacheTOCs[cacheType]") )
      __debugbreak();
    if ( v4 >= (*v8)->m_numFiles )
      break;
    if ( !*v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_toc.cpp", 30, ASSERT_TYPE_ASSERT, "(s_dcacheTOCs[cacheType])", (const char *)&queryFormat, "s_dcacheTOCs[cacheType]") )
      __debugbreak();
    v10 = *v8;
    if ( (*v8)->m_fileInfo[v9].m_details.m_fileID == fileID )
    {
      if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_toc.cpp", 30, ASSERT_TYPE_ASSERT, "(s_dcacheTOCs[cacheType])", (const char *)&queryFormat, "s_dcacheTOCs[cacheType]") )
        __debugbreak();
      v10 = *v8;
      if ( (*v8)->m_fileInfo[v9].m_details.m_location == location )
      {
        *index = v4;
        return 1;
      }
    }
    ++v4;
    ++v9;
  }
  return 0;
}

/*
==============
DCache_TOC_GetTOC
==============
*/
dcacheTOC_t *DCache_TOC_GetTOC(dcacheType_t cacheType)
{
  dcacheTOC_t **v1; 

  v1 = &s_dcacheTOCs[cacheType];
  if ( !*v1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_toc.cpp", 30, ASSERT_TYPE_ASSERT, "(s_dcacheTOCs[cacheType])", (const char *)&queryFormat, "s_dcacheTOCs[cacheType]") )
    __debugbreak();
  return *v1;
}

/*
==============
DCache_TOC_Init
==============
*/
char DCache_TOC_Init()
{
  dcacheTOC_t **v0; 
  __int64 v1; 
  dcacheTOC_t *v2; 

  v0 = s_dcacheTOCs;
  v1 = 2i64;
  do
  {
    if ( !*v0 )
    {
      v2 = (dcacheTOC_t *)PMem_Alloc(0xF0480ui64, 8ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, "DCache_TOC_Init:s_dcacheTOC");
      *v0 = v2;
      memset_0(v2, 0, sizeof(dcacheTOC_t));
    }
    ++v0;
    --v1;
  }
  while ( v1 );
  return 1;
}

/*
==============
DCache_TOC_IsBitSet
==============
*/
bool DCache_TOC_IsBitSet(dcacheType_t cacheType, int fileIndex, int index)
{
  __int64 v4; 
  dcacheTOC_t **v5; 

  v4 = fileIndex;
  v5 = &s_dcacheTOCs[cacheType];
  if ( !*v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_toc.cpp", 30, ASSERT_TYPE_ASSERT, "(s_dcacheTOCs[cacheType])", (const char *)&queryFormat, "s_dcacheTOCs[cacheType]") )
    __debugbreak();
  return ((*v5)->m_fileInfo[v4].m_bitfield[index / 8] >> (index % 8)) & 1;
}

/*
==============
DCache_TOC_IsBlockReserved
==============
*/
bool DCache_TOC_IsBlockReserved(dcacheType_t cacheType, int blockIndex)
{
  dcacheTOC_t **v3; 

  v3 = &s_dcacheTOCs[cacheType];
  if ( !*v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_toc.cpp", 30, ASSERT_TYPE_ASSERT, "(s_dcacheTOCs[cacheType])", (const char *)&queryFormat, "s_dcacheTOCs[cacheType]") )
    __debugbreak();
  return ((*v3)->m_usedBlocks[blockIndex / 8] >> (blockIndex % 8)) & 1;
}

/*
==============
DCache_TOC_IsCached
==============
*/
char DCache_TOC_IsCached(dcacheType_t cacheType, unsigned __int64 fileID, dcacheLocation_t location)
{
  int v3; 
  __int64 v6; 
  dcacheTOC_t **v7; 
  dcacheTOC_t *v8; 

  v3 = 0;
  v6 = 0i64;
  v7 = &s_dcacheTOCs[cacheType];
  v8 = *v7;
  while ( 1 )
  {
    if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_toc.cpp", 30, ASSERT_TYPE_ASSERT, "(s_dcacheTOCs[cacheType])", (const char *)&queryFormat, "s_dcacheTOCs[cacheType]") )
      __debugbreak();
    if ( v3 >= (*v7)->m_numFiles )
      break;
    if ( !*v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_toc.cpp", 30, ASSERT_TYPE_ASSERT, "(s_dcacheTOCs[cacheType])", (const char *)&queryFormat, "s_dcacheTOCs[cacheType]") )
      __debugbreak();
    v8 = *v7;
    if ( (*v7)->m_fileInfo[v6].m_details.m_fileID == fileID )
    {
      if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_toc.cpp", 30, ASSERT_TYPE_ASSERT, "(s_dcacheTOCs[cacheType])", (const char *)&queryFormat, "s_dcacheTOCs[cacheType]") )
        __debugbreak();
      v8 = *v7;
      if ( (*v7)->m_fileInfo[v6].m_details.m_location == location )
        return 1;
    }
    ++v3;
    ++v6;
  }
  return 0;
}

/*
==============
DCache_TOC_OnChecksumConfig
==============
*/
void DCache_TOC_OnChecksumConfig(int onChecksumConfig)
{
  dcacheTOC_t **v2; 

  v2 = s_dcacheTOCs;
  do
  {
    if ( !*v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_toc.cpp", 30, ASSERT_TYPE_ASSERT, "(s_dcacheTOCs[cacheType])", (const char *)&queryFormat, "s_dcacheTOCs[cacheType]") )
      __debugbreak();
    if ( *v2 )
      (*v2)->m_additionalData.m_checksumConfig = onChecksumConfig;
    ++v2;
  }
  while ( (__int64)v2 < (__int64)&VFX_RAY_CAST_REST_VELOCITY_SQ_FLOAT4_667 );
}

/*
==============
DCache_TOC_OnCorruptionConfig
==============
*/
void DCache_TOC_OnCorruptionConfig(int onCorruptionConfig)
{
  dcacheTOC_t **v2; 

  v2 = s_dcacheTOCs;
  do
  {
    if ( !*v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_toc.cpp", 30, ASSERT_TYPE_ASSERT, "(s_dcacheTOCs[cacheType])", (const char *)&queryFormat, "s_dcacheTOCs[cacheType]") )
      __debugbreak();
    if ( *v2 )
      (*v2)->m_additionalData.m_corruptionConfig = onCorruptionConfig;
    ++v2;
  }
  while ( (__int64)v2 < (__int64)&VFX_RAY_CAST_REST_VELOCITY_SQ_FLOAT4_667 );
}

/*
==============
DCache_TOC_OnGenericConfig
==============
*/
void DCache_TOC_OnGenericConfig(int onGenericConfig)
{
  dcacheTOC_t **v2; 

  v2 = s_dcacheTOCs;
  do
  {
    if ( !*v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_toc.cpp", 30, ASSERT_TYPE_ASSERT, "(s_dcacheTOCs[cacheType])", (const char *)&queryFormat, "s_dcacheTOCs[cacheType]") )
      __debugbreak();
    if ( *v2 )
      (*v2)->m_additionalData.m_genericConfig = onGenericConfig;
    ++v2;
  }
  while ( (__int64)v2 < (__int64)&VFX_RAY_CAST_REST_VELOCITY_SQ_FLOAT4_667 );
}

/*
==============
DCache_TOC_RemotePurgeCacheRequest
==============
*/
void DCache_TOC_RemotePurgeCacheRequest(int remotePurgeCacheRequestId)
{
  int v2; 
  __int16 *v3; 
  dcacheTOC_t **v4; 
  int *v5; 
  dcacheTOC_t *v6; 
  int m_remotePurgeCacheRequestId; 
  _DWORD *m_ptr; 
  dcacheTOC_t *v9; 
  const char *v10; 
  Online_ErrorReporting *InstancePtr; 
  char *fmt; 
  __int64 v13; 
  Mem_LargeLocal v14; 
  __int16 v15; 
  __int64 v16; 

  v15 = 0;
  v2 = 0;
  v16 = 0i64;
  v3 = &v15;
  v4 = s_dcacheTOCs;
  v5 = (int *)&v16;
  do
  {
    if ( !*v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_toc.cpp", 30, ASSERT_TYPE_ASSERT, "(s_dcacheTOCs[cacheType])", (const char *)&queryFormat, "s_dcacheTOCs[cacheType]") )
      __debugbreak();
    v6 = *v4;
    if ( *v4 )
      m_remotePurgeCacheRequestId = v6->m_additionalData.m_remotePurgeCacheRequestId;
    else
      m_remotePurgeCacheRequestId = -1;
    *v5 = m_remotePurgeCacheRequestId;
    if ( v6 && v6->m_additionalData.m_remotePurgeCacheRequestId != remotePurgeCacheRequestId )
    {
      Mem_LargeLocal::Mem_LargeLocal(&v14, 0x14ui64, "dcacheAdditionalData_t additionalData");
      m_ptr = v14.m_ptr;
      if ( !*v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_toc.cpp", 30, ASSERT_TYPE_ASSERT, "(s_dcacheTOCs[cacheType])", (const char *)&queryFormat, "s_dcacheTOCs[cacheType]") )
        __debugbreak();
      v9 = *v4;
      if ( !*v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_toc.cpp", 603, ASSERT_TYPE_ASSERT, "(toc)", (const char *)&queryFormat, "toc") )
        __debugbreak();
      *(_OWORD *)m_ptr = *(_OWORD *)&v9->m_additionalData.m_languageSetting;
      m_ptr[4] = v9->m_additionalData.m_genericConfig;
      memset_0(v9, 0, sizeof(dcacheTOC_t));
      *(_DWORD *)&v9->m_versionMajor = 589835;
      v9->m_localFileIDSequence = 0xFFFFFFFFi64;
      v9->m_additionalData.m_remotePurgeCacheRequestId = m_ptr[1];
      *(_OWORD *)&v9->m_additionalData.m_languageSetting = *(_OWORD *)m_ptr;
      v9->m_additionalData.m_genericConfig = m_ptr[4];
      Mem_LargeLocal::~Mem_LargeLocal(&v14);
      v6->m_additionalData.m_remotePurgeCacheRequestId = remotePurgeCacheRequestId;
      if ( DCache_IO_SerializeTOC((dcacheType_t)v2, v6) )
        *(_BYTE *)v3 = 1;
    }
    ++v2;
    ++v5;
    ++v4;
    v3 = (__int16 *)((char *)v3 + 1);
  }
  while ( v2 < 2 );
  if ( remotePurgeCacheRequestId != (_DWORD)v16 || remotePurgeCacheRequestId != HIDWORD(v16) )
  {
    LODWORD(v13) = 1;
    LODWORD(fmt) = v16;
    v10 = j_va("RemotePurgeCache: %d, %d:%d(%d), %d:%d(%d)", (unsigned int)remotePurgeCacheRequestId, 0i64, (unsigned __int8)v15, fmt, v13, HIBYTE(v15), HIDWORD(v16));
    InstancePtr = Online_ErrorReporting::GetInstancePtr();
    Online_ErrorReporting::ReportError(InstancePtr, MOVEMENT, v10);
    Com_Error_impl(ERR_FATAL, (const ObfuscateErrorText)&stru_144000490, 6371i64, v10);
  }
}

/*
==============
DCache_TOC_RemoveFile
==============
*/
__int64 DCache_TOC_RemoveFile(dcacheType_t cacheType, int fileIndex)
{
  __int64 v3; 
  dcacheTOC_t **v4; 
  Online_ErrorReporting *InstancePtr; 
  unsigned int v6; 
  __int64 v7; 
  int v8; 
  unsigned int v9; 
  unsigned __int8 *v10; 
  dcacheTOC_t *TOC; 
  Online_ErrorReporting *v13; 

  v3 = fileIndex;
  v4 = &s_dcacheTOCs[cacheType];
  if ( !*v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_toc.cpp", 30, ASSERT_TYPE_ASSERT, "(s_dcacheTOCs[cacheType])", (const char *)&queryFormat, "s_dcacheTOCs[cacheType]") )
    __debugbreak();
  if ( (*v4)->m_numFiles <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_toc.cpp", 343, ASSERT_TYPE_ASSERT, "(DCache_TOC_GetTOC( cacheType )->m_numFiles > 0)", (const char *)&queryFormat, "DCache_TOC_GetTOC( cacheType )->m_numFiles > 0") )
    __debugbreak();
  if ( DCache_TOC_AssertFileIndex(cacheType, v3) && DCache_TOC_GetTOC(cacheType)->m_numFiles )
  {
    if ( DCache_TOC_AssertFileIndex(cacheType, v3) )
    {
      v7 = 975296i64;
      v8 = 0;
      v9 = 0;
      do
      {
        if ( DCache_TOC_IsBitSet(cacheType, v3, v8) )
        {
          ++v9;
          if ( !*v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_toc.cpp", 30, ASSERT_TYPE_ASSERT, "(s_dcacheTOCs[cacheType])", (const char *)&queryFormat, "s_dcacheTOCs[cacheType]") )
            __debugbreak();
          *(_DWORD *)((char *)*v4 + v7 - 8608) = 0;
          if ( !*v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_toc.cpp", 30, ASSERT_TYPE_ASSERT, "(s_dcacheTOCs[cacheType])", (const char *)&queryFormat, "s_dcacheTOCs[cacheType]") )
            __debugbreak();
          *(unsigned int *)((char *)&(*v4)->m_tocChecksum + v7) = 0;
          if ( !*v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_toc.cpp", 30, ASSERT_TYPE_ASSERT, "(s_dcacheTOCs[cacheType])", (const char *)&queryFormat, "s_dcacheTOCs[cacheType]") )
            __debugbreak();
          v10 = &(*v4)->m_usedBlocks[(unsigned __int64)(unsigned int)v8 >> 3];
          *v10 = (*v10 | (1 << (v8 & 7))) & ~(1 << (v8 & 7));
        }
        ++v8;
        v7 += 4i64;
      }
      while ( v8 < 2152 );
      v6 = v9;
    }
    else
    {
      InstancePtr = Online_ErrorReporting::GetInstancePtr();
      Online_ErrorReporting::ReportError(InstancePtr, (Online_Error_CAT_DCACHE_t)0x80000, NULL);
      v6 = 0;
    }
    TOC = DCache_TOC_GetTOC(cacheType);
    memset_0(&TOC->m_fileInfo[v3], 0, sizeof(TOC->m_fileInfo[v3]));
    return v6;
  }
  else
  {
    Com_PrintError(16, "dcache[%d]: Invalid file index passed to 'DCache_TOC_RemoveFile'\n", (unsigned int)cacheType);
    v13 = Online_ErrorReporting::GetInstancePtr();
    Online_ErrorReporting::ReportError(v13, (Online_Error_CAT_DCACHE_t)0x100000, NULL);
    return 0i64;
  }
}

/*
==============
DCache_TOC_SetNewLocation
==============
*/
bool DCache_TOC_SetNewLocation(dcacheType_t cacheType, unsigned __int64 fileID, dcacheLocation_t location, dcacheLocation_t newLocation)
{
  dcacheTOC_t **v7; 
  dcacheTOC_t *v9; 
  bool result; 
  int index; 

  v7 = &s_dcacheTOCs[cacheType];
  if ( !*v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_toc.cpp", 30, ASSERT_TYPE_ASSERT, "(s_dcacheTOCs[cacheType])", (const char *)&queryFormat, "s_dcacheTOCs[cacheType]") )
    __debugbreak();
  v9 = *v7;
  if ( !DCache_TOC_GetIndex(cacheType, fileID, location, &index) )
    return 0;
  result = 1;
  v9->m_fileInfo[index].m_details.m_location = newLocation;
  return result;
}

/*
==============
DCache_TOC_Shutdown
==============
*/

void __fastcall DCache_TOC_Shutdown(double _XMM0_8)
{
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)s_dcacheTOCs = _XMM0;
}

/*
==============
DCache_TOC_TouchByIndex
==============
*/
void DCache_TOC_TouchByIndex(dcacheType_t cacheType, int fileIndex)
{
  __int64 v2; 
  Online_ErrorReporting *InstancePtr; 
  int v5; 
  __int64 v6; 
  _OWORD *m_ptr; 
  dcacheTOC_t *TOC; 
  _OWORD *v9; 
  dcacheFileInfo_t *v10; 
  __int64 v11; 
  __int64 v12; 
  dcacheTOC_t *v13; 
  __int64 v14; 
  dcacheFileInfo_t *v15; 
  _OWORD *v16; 
  __int64 v17; 
  unsigned int *v18; 
  char *v19; 
  Mem_LargeLocal v20; 

  v2 = fileIndex;
  if ( DCache_TOC_AssertFileIndex(cacheType, fileIndex) )
  {
    v5 = Sys_Milliseconds();
    v6 = v2;
    DCache_TOC_GetTOC(cacheType)->m_fileInfo[v2].m_details.m_timestamp = v5;
    if ( (_DWORD)v2 != DCache_TOC_GetTOC(cacheType)->m_numFiles - 1 )
    {
      Mem_LargeLocal::Mem_LargeLocal(&v20, 0x1D8ui64, "dcacheFileInfo_t tempFileInfo");
      m_ptr = v20.m_ptr;
      TOC = DCache_TOC_GetTOC(cacheType);
      v9 = m_ptr;
      v10 = &TOC->m_fileInfo[v6];
      v11 = 3i64;
      v12 = 3i64;
      do
      {
        *v9 = *(_OWORD *)&v10->m_details.m_fileID;
        v9[1] = *(_OWORD *)&v10->m_details.m_name[4];
        v9[2] = *(_OWORD *)&v10->m_details.m_name[20];
        v9[3] = *(_OWORD *)&v10->m_details.m_name[36];
        v9[4] = *(_OWORD *)&v10->m_details.m_name[52];
        v9[5] = *(_OWORD *)&v10->m_details.m_name[68];
        v9[6] = *(_OWORD *)&v10->m_details.m_name[84];
        v9 += 8;
        *(v9 - 1) = *(_OWORD *)&v10->m_details.m_name[100];
        v10 = (dcacheFileInfo_t *)((char *)v10 + 128);
        --v12;
      }
      while ( v12 );
      *v9 = *(_OWORD *)&v10->m_details.m_fileID;
      v9[1] = *(_OWORD *)&v10->m_details.m_name[4];
      v9[2] = *(_OWORD *)&v10->m_details.m_name[20];
      v9[3] = *(_OWORD *)&v10->m_details.m_name[36];
      v9[4] = *(_OWORD *)&v10->m_details.m_name[52];
      *((_QWORD *)v9 + 10) = *(_QWORD *)&v10->m_details.m_name[68];
      v13 = DCache_TOC_GetTOC(cacheType);
      v14 = 472i64 * DCache_TOC_GetTOC(cacheType)->m_numFiles;
      v15 = &DCache_TOC_GetTOC(cacheType)->m_fileInfo[v6];
      v16 = (_OWORD *)((char *)v13 + v14 - 440);
      v17 = 3i64;
      do
      {
        *(_OWORD *)&v15->m_details.m_fileID = *v16;
        *(_OWORD *)&v15->m_details.m_name[4] = v16[1];
        *(_OWORD *)&v15->m_details.m_name[20] = v16[2];
        *(_OWORD *)&v15->m_details.m_name[36] = v16[3];
        *(_OWORD *)&v15->m_details.m_name[52] = v16[4];
        *(_OWORD *)&v15->m_details.m_name[68] = v16[5];
        *(_OWORD *)&v15->m_details.m_name[84] = v16[6];
        v15 = (dcacheFileInfo_t *)((char *)v15 + 128);
        *(_OWORD *)&v15[-1].m_bitfield[256] = v16[7];
        v16 += 8;
        --v17;
      }
      while ( v17 );
      *(_OWORD *)&v15->m_details.m_fileID = *v16;
      *(_OWORD *)&v15->m_details.m_name[4] = v16[1];
      *(_OWORD *)&v15->m_details.m_name[20] = v16[2];
      *(_OWORD *)&v15->m_details.m_name[36] = v16[3];
      *(_OWORD *)&v15->m_details.m_name[52] = v16[4];
      *(_QWORD *)&v15->m_details.m_name[68] = *((_QWORD *)v16 + 10);
      v18 = &DCache_TOC_GetTOC(cacheType)[-1].m_checksumByteCount[2114];
      v19 = (char *)&v18[118 * DCache_TOC_GetTOC(cacheType)->m_numFiles];
      do
      {
        *(_OWORD *)v19 = *m_ptr;
        *((_OWORD *)v19 + 1) = m_ptr[1];
        *((_OWORD *)v19 + 2) = m_ptr[2];
        *((_OWORD *)v19 + 3) = m_ptr[3];
        *((_OWORD *)v19 + 4) = m_ptr[4];
        *((_OWORD *)v19 + 5) = m_ptr[5];
        *((_OWORD *)v19 + 6) = m_ptr[6];
        v19 += 128;
        *((_OWORD *)v19 - 1) = m_ptr[7];
        m_ptr += 8;
        --v11;
      }
      while ( v11 );
      *(_OWORD *)v19 = *m_ptr;
      *((_OWORD *)v19 + 1) = m_ptr[1];
      *((_OWORD *)v19 + 2) = m_ptr[2];
      *((_OWORD *)v19 + 3) = m_ptr[3];
      *((_OWORD *)v19 + 4) = m_ptr[4];
      *((_QWORD *)v19 + 10) = *((_QWORD *)m_ptr + 10);
      Mem_LargeLocal::~Mem_LargeLocal(&v20);
    }
  }
  else
  {
    InstancePtr = Online_ErrorReporting::GetInstancePtr();
    Online_ErrorReporting::ReportError(InstancePtr, (Online_Error_CAT_DCACHE_t)0x20000, NULL);
  }
}

/*
==============
DCache_TOC_VerifyHash
==============
*/
bool DCache_TOC_VerifyHash(dcacheType_t cacheType, unsigned __int64 fileID, dcacheLocation_t location, cccHashValueSHA256_t *inHash)
{
  dcacheTOC_t **v7; 
  dcacheTOC_t *v9; 
  int index; 

  v7 = &s_dcacheTOCs[cacheType];
  if ( !*v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dcache_toc.cpp", 30, ASSERT_TYPE_ASSERT, "(s_dcacheTOCs[cacheType])", (const char *)&queryFormat, "s_dcacheTOCs[cacheType]") )
    __debugbreak();
  v9 = *v7;
  return DCache_TOC_GetIndex(cacheType, fileID, location, &index) && !memcmp_0(&v9->m_fileInfo[index].m_details.m_computedHashValue, inHash, 0x20ui64);
}

