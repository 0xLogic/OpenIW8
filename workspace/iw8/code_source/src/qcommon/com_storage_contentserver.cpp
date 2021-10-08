/*
==============
LiveStorage_CS_GetAllocatedMemorySize
==============
*/

unsigned __int64 __fastcall LiveStorage_CS_GetAllocatedMemorySize()
{
  return ?LiveStorage_CS_GetAllocatedMemorySize@@YA_KXZ();
}

/*
==============
LiveStorage_CS_RefreshPrivateData_Success
==============
*/

void __fastcall LiveStorage_CS_RefreshPrivateData_Success(int controllerIndex, contentServerPrivateData *csData)
{
  ?LiveStorage_CS_RefreshPrivateData_Success@@YAXHPEAUcontentServerPrivateData@@@Z(controllerIndex, csData);
}

/*
==============
csUploadInterceptor::handleUpload
==============
*/

unsigned int __fastcall csUploadInterceptor::handleUpload(csUploadInterceptor *this, void *data, unsigned int dataSize, unsigned int bytesUploaded)
{
  return ?handleUpload@csUploadInterceptor@@UEAAIPEAXII@Z(this, data, dataSize, bytesUploaded);
}

/*
==============
LiveStorage_CS_DownloadSummaryData
==============
*/

int __fastcall LiveStorage_CS_DownloadSummaryData(const int controllerIndex, contentServerDownloadSummaryInfo *summaryInfo)
{
  return ?LiveStorage_CS_DownloadSummaryData@@YAHHPEAUcontentServerDownloadSummaryInfo@@@Z(controllerIndex, summaryInfo);
}

/*
==============
LiveStorage_CS_ReadFileData
==============
*/

unsigned int __fastcall LiveStorage_CS_ReadFileData(void *data, unsigned int dataSize, dwCSReadFileTask *fileTask)
{
  return ?LiveStorage_CS_ReadFileData@@YAIPEAXIPEAUdwCSReadFileTask@@@Z(data, dataSize, fileTask);
}

/*
==============
LiveStorage_CS_RemoveFile
==============
*/

int __fastcall LiveStorage_CS_RemoveFile(const int controllerIndex, contentServerRemoveFileInfo *fileInfo)
{
  return ?LiveStorage_CS_RemoveFile@@YAHHPEAUcontentServerRemoveFileInfo@@@Z(controllerIndex, fileInfo);
}

/*
==============
LiveStorage_CS_ListAllPublisherFilesComplete
==============
*/

taskCompleteResults __fastcall LiveStorage_CS_ListAllPublisherFilesComplete(const int tasknum)
{
  return ?LiveStorage_CS_ListAllPublisherFilesComplete@@YA?AW4taskCompleteResults@@H@Z(tasknum);
}

/*
==============
LiveStorage_CS_IsTaskCSTask
==============
*/

bool __fastcall LiveStorage_CS_IsTaskCSTask(const int taskIndex)
{
  return ?LiveStorage_CS_IsTaskCSTask@@YA_NH@Z(taskIndex);
}

/*
==============
csDownloadInterceptor::handleDownload
==============
*/

unsigned int __fastcall csDownloadInterceptor::handleDownload(csDownloadInterceptor *this, void *data, unsigned int dataSize)
{
  return ?handleDownload@csDownloadInterceptor@@UEAAIPEAXI@Z(this, data, dataSize);
}

/*
==============
LiveStorage_CS_InitDemonware
==============
*/

int __fastcall LiveStorage_CS_InitDemonware(const int controllerIndex)
{
  return ?LiveStorage_CS_InitDemonware@@YAHH@Z(controllerIndex);
}

/*
==============
LiveStorage_CS_ReadPublisherFile
==============
*/

int __fastcall LiveStorage_CS_ReadPublisherFile(const int controllerIndex, contentServerReadPublisherFileInfo *downloadInfo)
{
  return ?LiveStorage_CS_ReadPublisherFile@@YAHHPEAUcontentServerReadPublisherFileInfo@@@Z(controllerIndex, downloadInfo);
}

/*
==============
LiveStorage_CS_Search
==============
*/

int __fastcall LiveStorage_CS_Search(const int controllerIndex, contentServerSearchInfo *searchInfo)
{
  return ?LiveStorage_CS_Search@@YAHHPEAUcontentServerSearchInfo@@@Z(controllerIndex, searchInfo);
}

/*
==============
LiveStorage_CS_ShutdownAll
==============
*/

void LiveStorage_CS_ShutdownAll(void)
{
  ?LiveStorage_CS_ShutdownAll@@YAXXZ();
}

/*
==============
LiveStorage_CS_ReadFile
==============
*/

int __fastcall LiveStorage_CS_ReadFile(const int controllerIndex, contentServerReadFileInfo *readInfo)
{
  return ?LiveStorage_CS_ReadFile@@YAHHPEAUcontentServerReadFileInfo@@@Z(controllerIndex, readInfo);
}

/*
==============
LiveStorage_CS_ClearDWOverlappedTasks
==============
*/

void __fastcall LiveStorage_CS_ClearDWOverlappedTasks(const int controllerIndex)
{
  ?LiveStorage_CS_ClearDWOverlappedTasks@@YAXH@Z(controllerIndex);
}

/*
==============
LiveStorage_CS_WriteFile
==============
*/

int __fastcall LiveStorage_CS_WriteFile(const int controllerIndex, contentServerWriteFileInfo *writeInfo)
{
  return ?LiveStorage_CS_WriteFile@@YAHHPEAUcontentServerWriteFileInfo@@@Z(controllerIndex, writeInfo);
}

/*
==============
LiveStorage_CS_SetTags
==============
*/

int __fastcall LiveStorage_CS_SetTags(const int controllerIndex, contentServerSetTagsInfo *setTagsInfo)
{
  return ?LiveStorage_CS_SetTags@@YAHHPEAUcontentServerSetTagsInfo@@@Z(controllerIndex, setTagsInfo);
}

/*
==============
LiveStorage_CS_DownloadSummaryDataComplete
==============
*/

taskCompleteResults __fastcall LiveStorage_CS_DownloadSummaryDataComplete(const int tasknum)
{
  return ?LiveStorage_CS_DownloadSummaryDataComplete@@YA?AW4taskCompleteResults@@H@Z(tasknum);
}

/*
==============
LiveStorage_CS_IsInited
==============
*/

bool __fastcall LiveStorage_CS_IsInited(const int controllerIndex)
{
  return ?LiveStorage_CS_IsInited@@YA_NH@Z(controllerIndex);
}

/*
==============
LiveStorage_CS_GetListing
==============
*/

int __fastcall LiveStorage_CS_GetListing(const int controllerIndex, const contentServerGetListingInfo *listingInfo)
{
  return ?LiveStorage_CS_GetListing@@YAHHPEBUcontentServerGetListingInfo@@@Z(controllerIndex, listingInfo);
}

/*
==============
LiveStorage_CS_AllocMemory
==============
*/

void LiveStorage_CS_AllocMemory(void)
{
  ?LiveStorage_CS_AllocMemory@@YAXXZ();
}

/*
==============
LiveStorage_CS_GetDownloadingFileTotalSize
==============
*/

unsigned int __fastcall LiveStorage_CS_GetDownloadingFileTotalSize(const int controllerIndex)
{
  return ?LiveStorage_CS_GetDownloadingFileTotalSize@@YAIH@Z(controllerIndex);
}

/*
==============
LiveStorage_CS_Shutdown
==============
*/

void __fastcall LiveStorage_CS_Shutdown(const int controllerIndex)
{
  ?LiveStorage_CS_Shutdown@@YAXH@Z(controllerIndex);
}

/*
==============
LiveStorage_CS_GetFriendPrivateData_Success
==============
*/

void __fastcall LiveStorage_CS_GetFriendPrivateData_Success(int controllerIndex, contentServerPrivateData *csData)
{
  ?LiveStorage_CS_GetFriendPrivateData_Success@@YAXHPEAUcontentServerPrivateData@@@Z(controllerIndex, csData);
}

/*
==============
LiveStorage_CS_IsTaskInProgress
==============
*/

bool __fastcall LiveStorage_CS_IsTaskInProgress(const int controllerIndex, const char *taskName)
{
  return ?LiveStorage_CS_IsTaskInProgress@@YA_NHPEBD@Z(controllerIndex, taskName);
}

/*
==============
LiveStorage_CS_ReadPublisherFileData
==============
*/

unsigned int __fastcall LiveStorage_CS_ReadPublisherFileData(void *data, unsigned int dataSize, dwCSReadPublisherFileTask *fileTask)
{
  return ?LiveStorage_CS_ReadPublisherFileData@@YAIPEAXIPEAUdwCSReadPublisherFileTask@@@Z(data, dataSize, fileTask);
}

/*
==============
LiveStorage_CS_AddTag
==============
*/

void __fastcall LiveStorage_CS_AddTag(unsigned __int64 priTag, unsigned __int64 secTag, int *numTags, bdTag *tags, const int maxNumTags)
{
  ?LiveStorage_CS_AddTag@@YAX_K0PEAHQEAVbdTag@@H@Z(priTag, secTag, numTags, tags, maxNumTags);
}

/*
==============
LiveStorage_CS_GetDescriptors
==============
*/

int __fastcall LiveStorage_CS_GetDescriptors(const int controllerIndex, contentServerGetDescriptorsInfo *descInfo)
{
  return ?LiveStorage_CS_GetDescriptors@@YAHHPEAUcontentServerGetDescriptorsInfo@@@Z(controllerIndex, descInfo);
}

/*
==============
LiveStorage_CS_GetDescriptorsComplete
==============
*/

taskCompleteResults __fastcall LiveStorage_CS_GetDescriptorsComplete(const int tasknum)
{
  return ?LiveStorage_CS_GetDescriptorsComplete@@YA?AW4taskCompleteResults@@H@Z(tasknum);
}

/*
==============
LiveStorage_CS_ListAllPublisherFiles
==============
*/

int __fastcall LiveStorage_CS_ListAllPublisherFiles(const int controllerIndex, contentServerListAllPublisherFilesInfo *listInfo)
{
  return ?LiveStorage_CS_ListAllPublisherFiles@@YAHHPEAUcontentServerListAllPublisherFilesInfo@@@Z(controllerIndex, listInfo);
}

/*
==============
LiveStorage_CS_UploadSummaryMetadataComplete
==============
*/

taskCompleteResults __fastcall LiveStorage_CS_UploadSummaryMetadataComplete(const int tasknum)
{
  return ?LiveStorage_CS_UploadSummaryMetadataComplete@@YA?AW4taskCompleteResults@@H@Z(tasknum);
}

/*
==============
LiveStorage_CS_GetDownloadProgress
==============
*/

void __fastcall LiveStorage_CS_GetDownloadProgress(const int controllerIndex, unsigned int *bytes, float *dataRate)
{
  ?LiveStorage_CS_GetDownloadProgress@@YAXHPEAIPEAM@Z(controllerIndex, bytes, dataRate);
}

/*
==============
LiveStorage_CS_SetTagsComplete
==============
*/

taskCompleteResults __fastcall LiveStorage_CS_SetTagsComplete(const int tasknum)
{
  return ?LiveStorage_CS_SetTagsComplete@@YA?AW4taskCompleteResults@@H@Z(tasknum);
}

/*
==============
LiveStorage_CS_ReadFileComplete
==============
*/

taskCompleteResults __fastcall LiveStorage_CS_ReadFileComplete(const int tasknum)
{
  return ?LiveStorage_CS_ReadFileComplete@@YA?AW4taskCompleteResults@@H@Z(tasknum);
}

/*
==============
LiveStorage_CS_GetListingComplete
==============
*/

taskCompleteResults __fastcall LiveStorage_CS_GetListingComplete(const int tasknum)
{
  return ?LiveStorage_CS_GetListingComplete@@YA?AW4taskCompleteResults@@H@Z(tasknum);
}

/*
==============
LiveStorage_CS_ReadPublisherFileComplete
==============
*/

taskCompleteResults __fastcall LiveStorage_CS_ReadPublisherFileComplete(const int tasknum)
{
  return ?LiveStorage_CS_ReadPublisherFileComplete@@YA?AW4taskCompleteResults@@H@Z(tasknum);
}

/*
==============
LiveStorage_CS_UploadSummaryMetadata
==============
*/

int __fastcall LiveStorage_CS_UploadSummaryMetadata(const int controllerIndex, contentServerUploadSummaryInfo *summaryInfo)
{
  return ?LiveStorage_CS_UploadSummaryMetadata@@YAHHPEAUcontentServerUploadSummaryInfo@@@Z(controllerIndex, summaryInfo);
}

/*
==============
LiveStorage_CS_IsAvailable
==============
*/

bool __fastcall LiveStorage_CS_IsAvailable(const int controllerIndex)
{
  return ?LiveStorage_CS_IsAvailable@@YA_NH@Z(controllerIndex);
}

/*
==============
LiveStorage_CS_CancelTask
==============
*/

void __fastcall LiveStorage_CS_CancelTask(const int controllerIndex, const int taskType)
{
  ?LiveStorage_CS_CancelTask@@YAXHH@Z(controllerIndex, taskType);
}

/*
==============
LiveStorage_CS_WriteFileComplete
==============
*/

taskCompleteResults __fastcall LiveStorage_CS_WriteFileComplete(const int tasknum)
{
  return ?LiveStorage_CS_WriteFileComplete@@YA?AW4taskCompleteResults@@H@Z(tasknum);
}

/*
==============
LiveStorage_CS_Init
==============
*/

void __fastcall LiveStorage_CS_Init(const int controllerIndex)
{
  ?LiveStorage_CS_Init@@YAXH@Z(controllerIndex);
}

/*
==============
csReadPublisherFileInterceptor::handleDownload
==============
*/

unsigned int __fastcall csReadPublisherFileInterceptor::handleDownload(csReadPublisherFileInterceptor *this, void *data, unsigned int dataSize)
{
  return ?handleDownload@csReadPublisherFileInterceptor@@UEAAIPEAXI@Z(this, data, dataSize);
}

/*
==============
LiveStorage_CS_GetFriendPrivateData
==============
*/

contentServerPrivateData *__fastcall LiveStorage_CS_GetFriendPrivateData(const int controllerIndex, XUID xuid)
{
  return ?LiveStorage_CS_GetFriendPrivateData@@YAPEAUcontentServerPrivateData@@HUXUID@@@Z(controllerIndex, xuid);
}

/*
==============
LiveStorage_CS_CopyFromOtherUser
==============
*/

int __fastcall LiveStorage_CS_CopyFromOtherUser(const int controllerIndex, contentServerCopyFromOtherUserInfo *copyInfo)
{
  return ?LiveStorage_CS_CopyFromOtherUser@@YAHHPEAUcontentServerCopyFromOtherUserInfo@@@Z(controllerIndex, copyInfo);
}

/*
==============
LiveStorage_CS_RefreshPrivateData
==============
*/

void __fastcall LiveStorage_CS_RefreshPrivateData(const int controllerIndex)
{
  ?LiveStorage_CS_RefreshPrivateData@@YAXH@Z(controllerIndex);
}

/*
==============
LiveStorage_CS_SearchComplete
==============
*/

taskCompleteResults __fastcall LiveStorage_CS_SearchComplete(const int tasknum)
{
  return ?LiveStorage_CS_SearchComplete@@YA?AW4taskCompleteResults@@H@Z(tasknum);
}

/*
==============
LiveStorage_CS_RemoveFileComplete
==============
*/

taskCompleteResults __fastcall LiveStorage_CS_RemoveFileComplete(const int tasknum)
{
  return ?LiveStorage_CS_RemoveFileComplete@@YA?AW4taskCompleteResults@@H@Z(tasknum);
}

/*
==============
LiveStorage_CS_GetUploadProgress
==============
*/

void __fastcall LiveStorage_CS_GetUploadProgress(const int controllerIndex, unsigned int *bytes, float *dataRate)
{
  ?LiveStorage_CS_GetUploadProgress@@YAXHPEAIPEAM@Z(controllerIndex, bytes, dataRate);
}

/*
==============
LiveStorage_CS_PlatformInit
==============
*/

bool __fastcall LiveStorage_CS_PlatformInit(const int controllerIndex)
{
  return ?LiveStorage_CS_PlatformInit@@YA_NH@Z(controllerIndex);
}

/*
==============
LiveStorage_CS_GetPrivateData
==============
*/

contentServerPrivateData *__fastcall LiveStorage_CS_GetPrivateData(const int controllerIndex)
{
  return ?LiveStorage_CS_GetPrivateData@@YAPEAUcontentServerPrivateData@@H@Z(controllerIndex);
}

/*
==============
LiveStorage_CS_IsValidHTTPCode
==============
*/

bool __fastcall LiveStorage_CS_IsValidHTTPCode(int httpCode)
{
  return ?LiveStorage_CS_IsValidHTTPCode@@YA_NH@Z(httpCode);
}

/*
==============
LiveStorage_CS_GetUploadingFileTotalSize
==============
*/

unsigned int __fastcall LiveStorage_CS_GetUploadingFileTotalSize(const int controllerIndex)
{
  return ?LiveStorage_CS_GetUploadingFileTotalSize@@YAIH@Z(controllerIndex);
}

/*
==============
LiveStorage_CS_CopyFromOtherUserComplete
==============
*/

taskCompleteResults __fastcall LiveStorage_CS_CopyFromOtherUserComplete(const int tasknum)
{
  return ?LiveStorage_CS_CopyFromOtherUserComplete@@YA?AW4taskCompleteResults@@H@Z(tasknum);
}

/*
==============
LiveStorage_CS_WriteFileData
==============
*/

unsigned int __fastcall LiveStorage_CS_WriteFileData(void *data, unsigned int dataSize, unsigned int bytesUploaded, dwCSWriteFileTask *fileTask)
{
  return ?LiveStorage_CS_WriteFileData@@YAIPEAXIIPEAUdwCSWriteFileTask@@@Z(data, dataSize, bytesUploaded, fileTask);
}

/*
==============
LiveStorage_CS_AddTag
==============
*/
void LiveStorage_CS_AddTag(unsigned __int64 priTag, unsigned __int64 secTag, int *numTags, bdTag *tags, const int maxNumTags)
{
  __int64 v5; 

  v5 = *numTags;
  if ( (int)v5 >= maxNumTags )
  {
    Com_PrintError(16, "Too many tags for file share search while adding a new search tag type.\n", numTags, tags);
  }
  else
  {
    *(_QWORD *)tags[v5]._bytes_20 = priTag;
    *(_QWORD *)&tags[(__int64)(*numTags)++]._bytes_20[8] = secTag;
  }
}

/*
==============
LiveStorage_CS_AllocMemory
==============
*/
void LiveStorage_CS_AllocMemory(void)
{
  int v0; 
  __int64 v1; 
  bool v2; 
  contentServerPrivateData *v3; 
  contentServerPrivateData *v4; 
  contentServerPrivateData *v5; 
  __int64 v6; 

  v0 = s_ContentServerMemoryState;
  if ( (s_ContentServerMemoryState & 0x400000) == 0 )
  {
    v1 = 8i64;
    if ( (s_ContentServerMemoryState & 2) == 0 )
    {
      v2 = AllocContentServerArray<contentServerPrivateData>(&g_ContentServerPrimary, 8, "LiveStorage_CS_AllocMemory:g_ContentServerPrimary");
      v0 = s_ContentServerMemoryState;
      if ( v2 )
      {
        v0 = s_ContentServerMemoryState | 2;
        s_ContentServerMemoryState |= 2u;
        g_ContentServerPrimary->m_valid = 0;
        g_ContentServerPrimary[1].m_valid = 0;
        g_ContentServerPrimary[2].m_valid = 0;
        g_ContentServerPrimary[3].m_valid = 0;
        g_ContentServerPrimary[4].m_valid = 0;
        g_ContentServerPrimary[5].m_valid = 0;
        g_ContentServerPrimary[6].m_valid = 0;
        g_ContentServerPrimary[7].m_valid = 0;
      }
    }
    if ( (v0 & 4) != 0 )
      goto LABEL_13;
    v3 = g_ContentServerSecondary;
    if ( !g_ContentServerSecondary )
    {
      v4 = (contentServerPrivateData *)PMem_Alloc(0x4D20C0ui64, 8ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, "LiveStorage_CS_AllocMemory:g_ContentServerSecondary");
      v5 = v4;
      if ( !v4 )
        goto LABEL_13;
      v6 = 0i64;
      for ( g_ContentServerSecondary = v4; ; v5 = g_ContentServerSecondary )
      {
        XUID::XUID(&v5[v6].m_playerXuid);
        `eh vector vbase constructor iterator'(v5[v6++].m_descriptors, 0x4D20ui64, 0x20ui64, (void (__fastcall *)(void *))bdFileMetaData::bdFileMetaData, (void (__fastcall *)(void *))bdFileMetaData::`vbase destructor);
        if ( !--v1 )
          break;
      }
      g_AllocatedContentServerMemorySize += 5054656i64;
      v0 = s_ContentServerMemoryState;
      v3 = g_ContentServerSecondary;
    }
    v3->m_valid = 0;
    s_ContentServerMemoryState = v0 | 4;
    g_ContentServerSecondary[1].m_valid = 0;
    g_ContentServerSecondary[2].m_valid = 0;
    g_ContentServerSecondary[3].m_valid = 0;
    g_ContentServerSecondary[4].m_valid = 0;
    g_ContentServerSecondary[5].m_valid = 0;
    g_ContentServerSecondary[6].m_valid = 0;
    g_ContentServerSecondary[7].m_valid = 0;
LABEL_13:
    LiveStorage_CS_AllocTaskArrays();
    LiveStorage_CS_AllocCacheMemory();
    if ( (s_ContentServerMemoryState & 0x301FFE) == 3153918 )
      s_ContentServerMemoryState |= 0x400000u;
  }
}

/*
==============
LiveStorage_CS_AllocTaskArrays
==============
*/
int LiveStorage_CS_AllocTaskArrays()
{
  dwCSListTask *v0; 
  __int64 v1; 
  dwCSReadFileTask *v2; 
  __int64 v3; 
  __int64 v4; 
  dwCSWriteFileTask *v5; 
  __int64 v6; 

  LODWORD(v0) = s_ContentServerMemoryState;
  if ( (s_ContentServerMemoryState & 8) == 0 )
  {
    if ( g_CSListTask )
    {
LABEL_5:
      LODWORD(v0) = (unsigned int)v0 | 8;
      s_ContentServerMemoryState = (int)v0;
      goto LABEL_6;
    }
    v0 = (dwCSListTask *)PMem_Alloc(0x200ui64, 8ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, "LiveStorage_CS_AllocMemory:g_CSListTask");
    if ( v0 )
    {
      g_AllocatedContentServerMemorySize += 512i64;
      g_CSListTask = v0;
      LODWORD(v0) = s_ContentServerMemoryState;
      goto LABEL_5;
    }
    LODWORD(v0) = s_ContentServerMemoryState;
  }
LABEL_6:
  if ( ((unsigned __int8)v0 & 0x10) != 0 )
    goto LABEL_11;
  if ( g_CSSearchTask )
    goto LABEL_10;
  v0 = (dwCSListTask *)PMem_Alloc(0x240ui64, 8ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, "LiveStorage_CS_AllocMemory:g_CSSearchTask");
  if ( v0 )
  {
    g_AllocatedContentServerMemorySize += 576i64;
    g_CSSearchTask = (dwCSSearchTask *)v0;
    LODWORD(v0) = s_ContentServerMemoryState;
LABEL_10:
    LODWORD(v0) = (unsigned int)v0 | 0x10;
    s_ContentServerMemoryState = (int)v0;
    goto LABEL_11;
  }
  LODWORD(v0) = s_ContentServerMemoryState;
LABEL_11:
  if ( ((unsigned __int8)v0 & 0x20) != 0 )
    goto LABEL_16;
  if ( g_CSDescriptorsTask )
    goto LABEL_15;
  v0 = (dwCSListTask *)PMem_Alloc(0x1C0ui64, 8ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, "LiveStorage_CS_AllocMemory:g_CSDescriptorsTask");
  if ( v0 )
  {
    g_AllocatedContentServerMemorySize += 448i64;
    g_CSDescriptorsTask = (dwCSDescriptorsTask *)v0;
    LODWORD(v0) = s_ContentServerMemoryState;
LABEL_15:
    LODWORD(v0) = (unsigned int)v0 | 0x20;
    s_ContentServerMemoryState = (int)v0;
    goto LABEL_16;
  }
  LODWORD(v0) = s_ContentServerMemoryState;
LABEL_16:
  v1 = 0i64;
  if ( ((unsigned __int8)v0 & 0x40) != 0 )
    goto LABEL_27;
  if ( g_CSReadFileTask )
    goto LABEL_26;
  v2 = (dwCSReadFileTask *)PMem_Alloc(0x26B80ui64, 8ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, "LiveStorage_CS_AllocMemory:g_CSReadFileTask");
  if ( v2 )
  {
    v3 = 0i64;
    v4 = 8i64;
    for ( g_CSReadFileTask = v2; ; v2 = g_CSReadFileTask )
    {
      bdFileMetaData::bdFileMetaData(&v2[v3++].m_descriptor);
      if ( !--v4 )
        break;
    }
    g_AllocatedContentServerMemorySize += 158592i64;
    LODWORD(v0) = s_ContentServerMemoryState;
LABEL_26:
    LODWORD(v0) = (unsigned int)v0 | 0x40;
    s_ContentServerMemoryState = (int)v0;
    goto LABEL_27;
  }
  LODWORD(v0) = s_ContentServerMemoryState;
LABEL_27:
  if ( (char)v0 < 0 )
    goto LABEL_36;
  if ( g_CSWriteFileTask )
    goto LABEL_35;
  v5 = (dwCSWriteFileTask *)PMem_Alloc(0x500ui64, 8ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, "LiveStorage_CS_AllocMemory:g_CSWriteFileTask");
  if ( v5 )
  {
    g_CSWriteFileTask = v5;
    v6 = 8i64;
    while ( 1 )
    {
      bdFileID::bdFileID(&v5[v1++].m_outFileID);
      if ( !--v6 )
        break;
      v5 = g_CSWriteFileTask;
    }
    g_AllocatedContentServerMemorySize += 1280i64;
    LODWORD(v0) = s_ContentServerMemoryState;
LABEL_35:
    LODWORD(v0) = (unsigned int)v0 | 0x80;
    s_ContentServerMemoryState = (int)v0;
    goto LABEL_36;
  }
  LODWORD(v0) = s_ContentServerMemoryState;
LABEL_36:
  if ( ((unsigned __int16)v0 & 0x100) != 0 )
    goto LABEL_41;
  if ( g_CSSetTagTask )
    goto LABEL_40;
  v0 = (dwCSListTask *)PMem_Alloc(0x140ui64, 8ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, "LiveStorage_CS_AllocMemory:g_CSSetTagTask");
  if ( v0 )
  {
    g_AllocatedContentServerMemorySize += 320i64;
    g_CSSetTagTask = (dwCSTagTask *)v0;
    LODWORD(v0) = s_ContentServerMemoryState;
LABEL_40:
    LODWORD(v0) = (unsigned int)v0 | 0x100;
    s_ContentServerMemoryState = (int)v0;
    goto LABEL_41;
  }
  LODWORD(v0) = s_ContentServerMemoryState;
LABEL_41:
  if ( ((unsigned __int16)v0 & 0x200) != 0 )
    goto LABEL_46;
  if ( g_CSRemoveFileTask )
    goto LABEL_45;
  v0 = (dwCSListTask *)PMem_Alloc(0xC0ui64, 8ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, "LiveStorage_CS_AllocMemory:g_CSRemoveFileTask");
  if ( v0 )
  {
    g_AllocatedContentServerMemorySize += 192i64;
    g_CSRemoveFileTask = (dwCSRemoveFileTask *)v0;
    LODWORD(v0) = s_ContentServerMemoryState;
LABEL_45:
    LODWORD(v0) = (unsigned int)v0 | 0x200;
    s_ContentServerMemoryState = (int)v0;
    goto LABEL_46;
  }
  LODWORD(v0) = s_ContentServerMemoryState;
LABEL_46:
  if ( ((unsigned __int16)v0 & 0x400) != 0 )
    goto LABEL_51;
  if ( g_CSCopyFileTask )
    goto LABEL_50;
  v0 = (dwCSListTask *)PMem_Alloc(0x2C0ui64, 8ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, "LiveStorage_CS_AllocMemory:g_CSCopyFileTask");
  if ( v0 )
  {
    g_AllocatedContentServerMemorySize += 704i64;
    g_CSCopyFileTask = (dwCSCopyFileTask *)v0;
    LODWORD(v0) = s_ContentServerMemoryState;
LABEL_50:
    LODWORD(v0) = (unsigned int)v0 | 0x400;
    s_ContentServerMemoryState = (int)v0;
    goto LABEL_51;
  }
  LODWORD(v0) = s_ContentServerMemoryState;
LABEL_51:
  if ( ((unsigned __int16)v0 & 0x800) != 0 )
    goto LABEL_56;
  if ( g_CSUploadSummaryTask )
    goto LABEL_55;
  v0 = (dwCSListTask *)PMem_Alloc(0x240ui64, 8ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, "LiveStorage_CS_AllocMemory:g_CSUploadSummaryTask");
  if ( v0 )
  {
    g_AllocatedContentServerMemorySize += 576i64;
    g_CSUploadSummaryTask = (dwCSUploadSummaryTask *)v0;
    LODWORD(v0) = s_ContentServerMemoryState;
LABEL_55:
    LODWORD(v0) = (unsigned int)v0 | 0x800;
    s_ContentServerMemoryState = (int)v0;
    goto LABEL_56;
  }
  LODWORD(v0) = s_ContentServerMemoryState;
LABEL_56:
  if ( ((unsigned __int16)v0 & 0x1000) != 0 )
    goto LABEL_61;
  if ( g_CSDownloadSummaryTask )
    goto LABEL_60;
  v0 = (dwCSListTask *)PMem_Alloc(0x140ui64, 8ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, "LiveStorage_CS_AllocMemory:g_CSDownloadSummaryTask");
  if ( v0 )
  {
    g_AllocatedContentServerMemorySize += 320i64;
    g_CSDownloadSummaryTask = (dwCSDownloadSummaryTask *)v0;
    LODWORD(v0) = s_ContentServerMemoryState;
LABEL_60:
    LODWORD(v0) = (unsigned int)v0 | 0x1000;
    s_ContentServerMemoryState = (int)v0;
    goto LABEL_61;
  }
  LODWORD(v0) = s_ContentServerMemoryState;
LABEL_61:
  if ( ((unsigned int)v0 & 0x100000) != 0 )
    goto LABEL_66;
  if ( g_CSListPublisherFilesTask )
    goto LABEL_65;
  v0 = (dwCSListTask *)PMem_Alloc(0x240ui64, 8ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, "LiveStorage_CS_AllocMemory:g_CSDownloadSummaryTask");
  if ( v0 )
  {
    g_AllocatedContentServerMemorySize += 576i64;
    g_CSListPublisherFilesTask = (dwCSListPublisherFilesTask *)v0;
    LODWORD(v0) = s_ContentServerMemoryState;
LABEL_65:
    LODWORD(v0) = (unsigned int)v0 | 0x100000;
    s_ContentServerMemoryState = (int)v0;
    goto LABEL_66;
  }
  LODWORD(v0) = s_ContentServerMemoryState;
LABEL_66:
  if ( ((unsigned int)v0 & 0x200000) == 0 )
  {
    if ( g_CSReadPublisherFileTask )
    {
LABEL_70:
      LODWORD(v0) = (unsigned int)v0 | 0x200000;
      s_ContentServerMemoryState = (int)v0;
      return (int)v0;
    }
    v0 = (dwCSListTask *)PMem_Alloc(0x380ui64, 8ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, "LiveStorage_CS_AllocMemory:g_CSDownloadSummaryTask");
    if ( v0 )
    {
      g_AllocatedContentServerMemorySize += 896i64;
      g_CSReadPublisherFileTask = (dwCSReadPublisherFileTask *)v0;
      LODWORD(v0) = s_ContentServerMemoryState;
      goto LABEL_70;
    }
  }
  return (int)v0;
}

/*
==============
LiveStorage_CS_CancelTask
==============
*/
void LiveStorage_CS_CancelTask(const int controllerIndex, const int taskType)
{
  TaskManager_CancelTasksForController(&storageTasks, taskType, controllerIndex);
}

/*
==============
LiveStorage_CS_CancelTasks
==============
*/
void LiveStorage_CS_CancelTasks(const int controllerIndex)
{
  TaskManager_CancelTasksForController(&storageTasks, 4, controllerIndex);
  TaskManager_CancelTasksForController(&storageTasks, 5, controllerIndex);
  TaskManager_CancelTasksForController(&storageTasks, 6, controllerIndex);
  TaskManager_CancelTasksForController(&storageTasks, 7, controllerIndex);
  TaskManager_CancelTasksForController(&storageTasks, 8, controllerIndex);
  TaskManager_CancelTasksForController(&storageTasks, 9, controllerIndex);
  TaskManager_CancelTasksForController(&storageTasks, 10, controllerIndex);
  TaskManager_CancelTasksForController(&storageTasks, 11, controllerIndex);
  TaskManager_CancelTasksForController(&storageTasks, 12, controllerIndex);
  TaskManager_CancelTasksForController(&storageTasks, 13, controllerIndex);
  TaskManager_CancelTasksForController(&storageTasks, 14, controllerIndex);
  TaskManager_CancelTasksForController(&storageTasks, 15, controllerIndex);
}

/*
==============
LiveStorage_CS_ClearDWOverlappedTasks
==============
*/
void LiveStorage_CS_ClearDWOverlappedTasks(const int controllerIndex)
{
  __int64 v1; 
  DWServicesAccess *Instance; 
  DWLobbyService *DWLobbyService; 
  int *p_type; 
  __int64 v5; 
  overlappedTask *tasks; 

  v1 = controllerIndex;
  LiveStorage_CS_CancelTasks(controllerIndex);
  Instance = DWServicesAccess::GetInstance();
  DWLobbyService = DWServicesAccess::GetDWLobbyService(Instance, v1);
  DWLobbyService->pump(DWLobbyService);
  p_type = &storageTasks.tasks[0].type;
  v5 = 32i64;
  tasks = storageTasks.tasks;
  do
  {
    if ( *((unsigned __int8 *)p_type + 5) == (_DWORD)v1 || (unsigned int)(*p_type - 4) <= 0xB )
      TaskManager_ClearTask(tasks);
    ++tasks;
    p_type += 10;
    --v5;
  }
  while ( v5 );
  s_ContentServerState[v1] = 1;
}

/*
==============
LiveStorage_CS_CopyFromOtherUser
==============
*/
__int64 LiveStorage_CS_CopyFromOtherUser(const int controllerIndex, contentServerCopyFromOtherUserInfo *copyInfo)
{
  __int64 v2; 
  __int64 v4; 
  overlappedTask *OpenTaskSlot; 
  overlappedTask *v7; 
  dwCSCopyFileTask *v8; 

  v2 = controllerIndex;
  if ( !copyInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage_contentserver.cpp", 1514, ASSERT_TYPE_ASSERT, "(copyInfo)", (const char *)&queryFormat, "copyInfo") )
    __debugbreak();
  if ( !g_CSCopyFileTask && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage_contentserver.cpp", 1515, ASSERT_TYPE_ASSERT, "(g_CSCopyFileTask)", (const char *)&queryFormat, "g_CSCopyFileTask") )
    __debugbreak();
  if ( (unsigned int)v2 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage_contentserver.cpp", 1516, ASSERT_TYPE_ASSERT, "(controllerIndex >= 0 && controllerIndex < 8)", (const char *)&queryFormat, "controllerIndex >= 0 && controllerIndex < MAX_GPAD_COUNT") )
    __debugbreak();
  v4 = v2;
  if ( (s_ContentServerState[v2] & 4) == 0 || (s_ContentServerMemoryState & 0x301FFE) != 3153918 || !g_CSCopyFileTask )
    return 0i64;
  if ( !LiveStorage_CheckConnection(v2) )
  {
    Com_Printf(14, "Not connected to live or Demonware(cont %i)\n", (unsigned int)v2);
    return 0i64;
  }
  if ( TaskManager_TaskIsInProgressForController(&storageTasks, 11, v2) )
  {
    Com_Printf(14, "Set copy other user file already in progress, earlying out (cont %i)\n", (unsigned int)v2);
    return 0i64;
  }
  OpenTaskSlot = TaskManager_GetOpenTaskSlot(&storageTasks, v2, 11);
  v7 = OpenTaskSlot;
  if ( OpenTaskSlot )
  {
    v8 = &g_CSCopyFileTask[v4];
    v8->m_category = copyInfo->m_category;
    v8->m_userFileID = copyInfo->m_userFileID;
    v8->m_fileName = copyInfo->m_fileName;
    v8->m_fileSlot = copyInfo->m_fileSlot;
    v8->m_metaData = copyInfo->m_metaData;
    v8->m_metaDataSize = copyInfo->m_metaDataSize;
    v8->m_numTags = copyInfo->m_numTags;
    v8->m_tags = copyInfo->m_tags;
    v8->m_outFileID = copyInfo->m_outFileID;
    v8->m_successCallback = copyInfo->m_successCallback;
    v8->m_failureCallback = copyInfo->m_failureCallback;
    OpenTaskSlot->data = v8;
    if ( dwCSCopyFromUserStorage(OpenTaskSlot, v8) )
    {
      return 1i64;
    }
    else
    {
      TaskManager_ClearTask(v7);
      Com_Printf(14, "Could not create task for copying another user's file.\n");
      return 0i64;
    }
  }
  else
  {
    Com_Printf(14, "Couldn't allocate task for setting tags.\n");
    return 0i64;
  }
}

/*
==============
LiveStorage_CS_CopyFromOtherUserComplete
==============
*/
taskCompleteResults LiveStorage_CS_CopyFromOtherUserComplete(const int tasknum)
{
  overlappedTask *v1; 
  dwCSCopyFileTask *data; 
  taskCompleteResults result; 
  taskCompleteResults v4; 
  void (__fastcall *m_successCallback)(const int); 
  void (__fastcall *m_failureCallback)(const int, bdLobbyErrorCode); 

  v1 = &storageTasks.tasks[tasknum];
  if ( !v1->active && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage_contentserver.cpp", 1578, ASSERT_TYPE_ASSERT, "(task->active)", (const char *)&queryFormat, "task->active") )
    __debugbreak();
  if ( v1->type != 11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage_contentserver.cpp", 1579, ASSERT_TYPE_ASSERT, "(task->type == TASK_CS_COPYOTHERUSERFILE)", (const char *)&queryFormat, "task->type == TASK_CS_COPYOTHERUSERFILE") )
    __debugbreak();
  data = (dwCSCopyFileTask *)v1->data;
  result = dwCSCopyFromUserStorageComplete(v1, data);
  v4 = result;
  if ( result == TASK_COMPLETE )
  {
    m_successCallback = data->m_successCallback;
    if ( m_successCallback )
      m_successCallback(v1->controllerIndex);
  }
  else
  {
    if ( result != TASK_ERROR )
      return result;
    m_failureCallback = data->m_failureCallback;
    if ( m_failureCallback )
      m_failureCallback(v1->controllerIndex, data->m_error);
  }
  TaskManager_ClearTask(v1);
  return v4;
}

/*
==============
LiveStorage_CS_DownloadSummaryData
==============
*/
__int64 LiveStorage_CS_DownloadSummaryData(const int controllerIndex, contentServerDownloadSummaryInfo *summaryInfo)
{
  __int64 v2; 
  __int64 v4; 
  overlappedTask *OpenTaskSlot; 
  overlappedTask *v7; 
  dwCSDownloadSummaryTask *v8; 

  v2 = controllerIndex;
  if ( !summaryInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage_contentserver.cpp", 1694, ASSERT_TYPE_ASSERT, "(summaryInfo)", (const char *)&queryFormat, "summaryInfo") )
    __debugbreak();
  if ( !g_CSDownloadSummaryTask && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage_contentserver.cpp", 1695, ASSERT_TYPE_ASSERT, "(g_CSDownloadSummaryTask)", (const char *)&queryFormat, "g_CSDownloadSummaryTask") )
    __debugbreak();
  if ( (unsigned int)v2 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage_contentserver.cpp", 1696, ASSERT_TYPE_ASSERT, "(controllerIndex >= 0 && controllerIndex < 8)", (const char *)&queryFormat, "controllerIndex >= 0 && controllerIndex < MAX_GPAD_COUNT") )
    __debugbreak();
  v4 = v2;
  if ( (s_ContentServerState[v2] & 4) == 0 || (s_ContentServerMemoryState & 0x301FFE) != 3153918 || !g_CSDownloadSummaryTask )
    return 0i64;
  if ( !LiveStorage_CheckConnection(v2) )
  {
    Com_Printf(14, "Not connected to live or Demonware(cont %i)\n", (unsigned int)v2);
    return 0i64;
  }
  if ( TaskManager_TaskIsInProgressForController(&storageTasks, 13, v2) )
  {
    Com_Printf(14, "Set tag task already in progress, earlying out (cont %i)\n", (unsigned int)v2);
    return 0i64;
  }
  OpenTaskSlot = TaskManager_GetOpenTaskSlot(&storageTasks, v2, 13);
  v7 = OpenTaskSlot;
  if ( OpenTaskSlot )
  {
    v8 = &g_CSDownloadSummaryTask[v4];
    v8->m_fileID = summaryInfo->m_fileID;
    v8->m_summaryData = summaryInfo->m_summaryData;
    v8->m_summaryDataSize = summaryInfo->m_summaryDataSize;
    v8->m_successCallback = summaryInfo->m_successCallback;
    v8->m_failureCallback = summaryInfo->m_failureCallback;
    OpenTaskSlot->data = v8;
    if ( dwCSDownloadSummaryData(OpenTaskSlot, v8) )
    {
      return 1i64;
    }
    else
    {
      TaskManager_ClearTask(v7);
      Com_Printf(14, "Could not create task for downloading summary data.\n");
      return 0i64;
    }
  }
  else
  {
    Com_Printf(14, "Couldn't allocate task for setting tags.\n");
    return 0i64;
  }
}

/*
==============
LiveStorage_CS_DownloadSummaryDataComplete
==============
*/
taskCompleteResults LiveStorage_CS_DownloadSummaryDataComplete(const int tasknum)
{
  overlappedTask *v1; 
  dwCSDownloadSummaryTask *data; 
  taskCompleteResults result; 
  taskCompleteResults v4; 
  void (__fastcall *m_successCallback)(int, const dwCSDownloadSummaryTask *); 
  void (__fastcall *m_failureCallback)(const int, bdLobbyErrorCode); 

  v1 = &storageTasks.tasks[tasknum];
  if ( !v1->active && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage_contentserver.cpp", 1753, ASSERT_TYPE_ASSERT, "(task->active)", (const char *)&queryFormat, "task->active") )
    __debugbreak();
  if ( v1->type != 13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage_contentserver.cpp", 1754, ASSERT_TYPE_ASSERT, "(task->type == TASK_CS_DOWNLOADSUMMARY)", (const char *)&queryFormat, "task->type == TASK_CS_DOWNLOADSUMMARY") )
    __debugbreak();
  data = (dwCSDownloadSummaryTask *)v1->data;
  result = dwCSDownloadSummaryComplete(v1, data);
  v4 = result;
  if ( result == TASK_COMPLETE )
  {
    m_successCallback = data->m_successCallback;
    if ( m_successCallback )
      m_successCallback(v1->controllerIndex, data);
  }
  else
  {
    if ( result != TASK_ERROR )
      return result;
    m_failureCallback = data->m_failureCallback;
    if ( m_failureCallback )
      m_failureCallback(v1->controllerIndex, data->m_error);
  }
  TaskManager_ClearTask(v1);
  return v4;
}

/*
==============
LiveStorage_CS_GetAllocatedMemorySize
==============
*/
unsigned __int64 LiveStorage_CS_GetAllocatedMemorySize()
{
  return g_AllocatedContentServerMemorySize;
}

/*
==============
LiveStorage_CS_GetDescriptors
==============
*/
__int64 LiveStorage_CS_GetDescriptors(const int controllerIndex, contentServerGetDescriptorsInfo *descInfo)
{
  __int64 v3; 
  overlappedTask *OpenTaskSlot; 
  dwCSDescriptorsTask *v5; 
  int m_numFiles; 
  int v7; 
  int v8; 
  __int64 v9; 
  __int64 v10; 
  bdFileID_vtbl **v11; 
  __int64 v12; 
  int v13; 
  bdFileID *v14; 
  __int64 v15; 
  __int64 v16; 
  int *m_descriptorCount; 
  void (__fastcall *m_successCallback)(const int); 
  int v20; 
  bdFileID_vtbl **v21; 
  dwCSDescriptorsTask *v22; 
  overlappedTask *v23; 

  v3 = controllerIndex;
  if ( !descInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage_contentserver.cpp", 803, ASSERT_TYPE_ASSERT, "(descInfo)", (const char *)&queryFormat, "descInfo", -2i64) )
    __debugbreak();
  if ( !g_CSDescriptorsTask && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage_contentserver.cpp", 804, ASSERT_TYPE_ASSERT, "(g_CSDescriptorsTask)", (const char *)&queryFormat, "g_CSDescriptorsTask") )
    __debugbreak();
  if ( (unsigned int)v3 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage_contentserver.cpp", 805, ASSERT_TYPE_ASSERT, "(controllerIndex >= 0 && controllerIndex < 8)", (const char *)&queryFormat, "controllerIndex >= 0 && controllerIndex < MAX_GPAD_COUNT") )
    __debugbreak();
  if ( (s_ContentServerState[v3] & 4) != 0 && (s_ContentServerMemoryState & 0x301FFE) == 3153918 && g_CSDescriptorsTask )
  {
    if ( LiveStorage_CheckConnection(v3) )
    {
      if ( TaskManager_TaskIsInProgressForController(&storageTasks, 5, v3) )
      {
        Com_Printf(14, "Get top rated task already in progress, earlying out (cont %i)\n", (unsigned int)v3);
      }
      else
      {
        OpenTaskSlot = TaskManager_GetOpenTaskSlot(&storageTasks, v3, 5);
        v23 = OpenTaskSlot;
        if ( OpenTaskSlot )
        {
          v5 = &g_CSDescriptorsTask[v3];
          v22 = v5;
          m_numFiles = 10;
          if ( dword_14CDC13B0 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1772i64) )
          {
            j__Init_thread_header(&dword_14CDC13B0);
            if ( dword_14CDC13B0 == -1 )
            {
              `eh vector vbase constructor iterator'(searchFileIDs, 0x38ui64, 0xAui64, (void (__fastcall *)(void *))bdFileID::bdFileID, (void (__fastcall *)(void *))bdFileID::`vbase destructor);
              j_atexit(LiveStorage_CS_GetDescriptors_::_2_::_dynamic_atexit_destructor_for__searchFileIDs__);
              j__Init_thread_footer(&dword_14CDC13B0);
            }
          }
          v7 = 0;
          v8 = 0;
          if ( descInfo->m_numFiles < 10 )
            m_numFiles = descInfo->m_numFiles;
          v9 = m_numFiles;
          if ( m_numFiles > 0 )
          {
            v10 = 0i64;
            v11 = &searchFileIDs[0].__vftable + 1;
            v21 = &searchFileIDs[0].__vftable + 1;
            v12 = m_numFiles;
            v13 = 0;
            do
            {
              if ( LiveStorage_CSCache_GetDescriptor(*(_QWORD *)descInfo->m_fileIDs[v10]._bytes_20, &descInfo->m_outDescriptors[v8]) )
              {
                ++v8;
              }
              else
              {
                v14 = &descInfo->m_fileIDs[v10];
                bdReferencable::operator=((bdReferencable *)((char *)v11 + SHIDWORD((*v11)->deserialize)), (const bdReferencable *)((char *)&v14->__vftable + *(int *)(*((_QWORD *)&v14->__vftable + 1) + 4i64) + 8));
                bdReferencable::operator=((bdReferencable *)((char *)v11 + SHIDWORD(v11[2]->deserialize) + 16), (const bdReferencable *)((char *)&v14->__vftable + *(int *)(*((_QWORD *)&v14->__vftable + 3) + 4i64) + 24));
                v21[3] = *(bdFileID_vtbl **)v14->_bytes_20;
                ++v13;
                v21 += 7;
                v11 = v21;
              }
              ++v10;
              --v12;
            }
            while ( v12 );
            v20 = v13;
            v5 = v22;
            OpenTaskSlot = v23;
            v7 = v20;
          }
          if ( v8 < v9 )
          {
            v15 = v8;
            v16 = v9 - v8;
            do
            {
              *((_QWORD *)&descInfo->m_outDescriptors[v15++].__vftable + 2) = 0i64;
              --v16;
            }
            while ( v16 );
          }
          v5->m_numFiles = v7;
          v5->m_fileIDs = searchFileIDs;
          v5->m_descriptors = &descInfo->m_outDescriptors[v8];
          v5->m_descriptorCount = &descInfo->m_outDescriptorCount[-v8];
          v5->m_cacheLoadedFileCount = v8;
          v5->m_successCallback = descInfo->m_successCallback;
          v5->m_failureCallback = descInfo->m_failureCallback;
          OpenTaskSlot->data = v5;
          if ( v7 <= 0 )
          {
            v5->m_descriptors = descInfo->m_outDescriptors;
            m_descriptorCount = v5->m_descriptorCount;
            if ( m_descriptorCount )
              *m_descriptorCount = v8;
            m_successCallback = v5->m_successCallback;
            if ( m_successCallback )
              m_successCallback(OpenTaskSlot->controllerIndex);
            TaskManager_ClearTask(OpenTaskSlot);
          }
          else
          {
            if ( dwCSGetDescriptors(OpenTaskSlot, v5) )
              return 1i64;
            TaskManager_ClearTask(OpenTaskSlot);
            Com_Printf(14, "Could not create task to fetch descriptors from DW.\n");
          }
        }
        else
        {
          Com_Printf(14, "Couldn't allocate task to get descriptors\n");
        }
      }
    }
    else
    {
      Com_Printf(14, "Not connected to live or Demonware(cont %i)\n", (unsigned int)v3);
    }
  }
  return 0i64;
}

/*
==============
LiveStorage_CS_GetDescriptorsComplete
==============
*/
__int64 LiveStorage_CS_GetDescriptorsComplete(const int tasknum)
{
  overlappedTask *v1; 
  dwCSDescriptorsTask *data; 
  taskCompleteResults v3; 
  unsigned int NumResults; 
  __int64 m_cacheLoadedFileCount; 
  int *m_descriptorCount; 
  __int64 v7; 
  int v8; 
  __int64 v9; 
  __int64 v10; 
  void (__fastcall *m_successCallback)(const int); 
  __int64 v12; 
  int *v13; 
  void (__fastcall *v14)(const int); 
  void (__fastcall *m_failureCallback)(const int, bdLobbyErrorCode); 

  v1 = &storageTasks.tasks[tasknum];
  if ( !v1->active && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage_contentserver.cpp", 901, ASSERT_TYPE_ASSERT, "(task->active)", (const char *)&queryFormat, "task->active") )
    __debugbreak();
  if ( v1->type != 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage_contentserver.cpp", 902, ASSERT_TYPE_ASSERT, "(task->type == TASK_CS_GETDESCRIPTORS)", (const char *)&queryFormat, "task->type == TASK_CS_GETDESCRIPTORS") )
    __debugbreak();
  data = (dwCSDescriptorsTask *)v1->data;
  v3 = dwCSGetDescriptorsComplete(v1, data);
  if ( v3 == TASK_COMPLETE )
  {
    NumResults = bdRemoteTask::getNumResults(v1->u.remoteTask.m_ptr);
    m_cacheLoadedFileCount = data->m_cacheLoadedFileCount;
    m_descriptorCount = data->m_descriptorCount;
    v7 = m_cacheLoadedFileCount;
    v8 = NumResults + m_cacheLoadedFileCount;
    data->m_descriptors -= m_cacheLoadedFileCount;
    if ( m_descriptorCount )
      *m_descriptorCount = v8;
    if ( (int)m_cacheLoadedFileCount < v8 )
    {
      v9 = m_cacheLoadedFileCount;
      v10 = NumResults;
      do
      {
        LiveStorage_CSCache_AddDescriptor(*((_QWORD *)&data->m_descriptors[v7++].__vftable + 2), &data->m_descriptors[v9++]);
        --v10;
      }
      while ( v10 );
    }
    m_successCallback = data->m_successCallback;
    if ( m_successCallback )
      m_successCallback(v1->controllerIndex);
LABEL_25:
    TaskManager_ClearTask(v1);
    return (unsigned int)v3;
  }
  if ( v3 != TASK_ERROR )
    return (unsigned int)v3;
  if ( data->m_error != BD_CONTENTSTREAMING_FILE_NOT_AVAILABLE || (v12 = data->m_cacheLoadedFileCount, (int)v12 <= 0) )
  {
    Com_Printf(14, "Get descriptors task failed.\n");
    m_failureCallback = data->m_failureCallback;
    if ( m_failureCallback )
      m_failureCallback(v1->controllerIndex, data->m_error);
    goto LABEL_25;
  }
  v13 = data->m_descriptorCount;
  data->m_descriptors -= v12;
  if ( v13 )
    *v13 = v12;
  v14 = data->m_successCallback;
  if ( v14 )
    v14(v1->controllerIndex);
  TaskManager_ClearTask(v1);
  return 2i64;
}

/*
==============
LiveStorage_CS_GetDownloadProgress
==============
*/
void LiveStorage_CS_GetDownloadProgress(const int controllerIndex, unsigned int *bytes, float *dataRate)
{
  if ( (s_ContentServerState[controllerIndex] & 4) != 0 && (s_ContentServerMemoryState & 0x301FFE) == 3153918 )
  {
    if ( dwGetLogOnStatus(controllerIndex) == DW_LIVE_CONNECTED && TaskManager_TaskIsInProgressForController(&storageTasks, 7, controllerIndex) )
    {
      dwCSGetProgress(controllerIndex, bytes, dataRate);
      return;
    }
  }
  else
  {
    Com_PrintError(16, "[LiveStorage_CS_GetDownloadProgress] Failed to write, LiveStorage_CS_IsAvailable = false\n");
  }
  *bytes = 0;
  *dataRate = 0.0;
}

/*
==============
LiveStorage_CS_GetDownloadingFileTotalSize
==============
*/
__int64 LiveStorage_CS_GetDownloadingFileTotalSize(const int controllerIndex)
{
  __int64 v2; 

  v2 = controllerIndex;
  if ( (s_ContentServerState[controllerIndex] & 4) != 0 && (s_ContentServerMemoryState & 0x301FFE) == 3153918 )
  {
    if ( dwGetLogOnStatus(controllerIndex) == DW_LIVE_CONNECTED && TaskManager_TaskIsInProgressForController(&storageTasks, 7, controllerIndex) )
      return g_CSReadFileTask[v2].m_fileSize;
  }
  else
  {
    Com_PrintError(16, "[LiveStorage_CS_GetDownloadingFileTotalSize] Failed to write, LiveStorage_CS_IsAvailable = false\n");
  }
  return 0i64;
}

/*
==============
LiveStorage_CS_GetFriendPrivateData
==============
*/
contentServerPrivateData *LiveStorage_CS_GetFriendPrivateData(const int controllerIndex, XUID xuid)
{
  __int64 v2; 
  __int64 v3; 
  contentServerPrivateData *v4; 
  int v5; 
  int v6; 
  const XUID *v7; 
  contentServerGetListingInfo v8; 
  XUID xuida; 
  XUID result; 

  xuida.m_id = xuid.m_id;
  v2 = controllerIndex;
  XUID::XUID(&v8.m_playerXUID);
  v3 = v2;
  if ( XUID::operator!=(&g_ContentServerSecondary[v2].m_playerXuid, &xuida) )
    g_ContentServerSecondary[v3].m_valid = 0;
  v4 = &g_ContentServerSecondary[v3];
  if ( !g_ContentServerSecondary[v3].m_valid )
  {
    v5 = s_ContentServerState[v2];
    if ( (v5 & 4) == 0 || (v6 = s_ContentServerMemoryState, (s_ContentServerMemoryState & 0x301FFE) != 3153918) )
    {
      LiveStorage_CS_Init(v2);
      v5 = s_ContentServerState[v2];
      v6 = s_ContentServerMemoryState;
    }
    if ( (v5 & 4) != 0 && (v6 & 0x301FFE) == 3153918 && !TaskManager_TaskIsInProgressForController(&storageTasks, 4, v2) )
    {
      v7 = Live_GetXuid(&result, v2);
      if ( !XUID::operator!=(&xuida, v7) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage_contentserver.cpp", 657, ASSERT_TYPE_ASSERT, "(xuid != Live_GetXuid( controllerIndex ))", (const char *)&queryFormat, "xuid != Live_GetXuid( controllerIndex )") )
        __debugbreak();
      XUID::operator=(&v8.m_playerXUID, &xuida);
      v8.m_category = 0;
      v8.m_fileName = NULL;
      v8.m_offset = 0;
      v8.m_startDate = 0;
      v8.m_failureCallback = NULL;
      v8.m_successCallback = (void (__fastcall *)(const int, contentServerPrivateData *))LiveStorage_CS_GetFriendPrivateData_Success;
      LiveStorage_CS_GetListing(v2, &v8);
    }
    return 0i64;
  }
  return v4;
}

/*
==============
LiveStorage_CS_GetFriendPrivateData_Success
==============
*/
void LiveStorage_CS_GetFriendPrivateData_Success(int controllerIndex, contentServerPrivateData *csData)
{
  Com_Printf(14, "LiveStorage_CS_GetFriendPrivateData - Get listing task succeeded for client %d's friend.\n", (unsigned int)controllerIndex);
}

/*
==============
LiveStorage_CS_GetListing
==============
*/
__int64 LiveStorage_CS_GetListing(const int controllerIndex, const contentServerGetListingInfo *listingInfo)
{
  __int64 v2; 
  overlappedTask *OpenTaskSlot; 
  __int64 v6; 
  const XUID *Xuid; 
  contentServerPrivateData *v8; 
  dwCSListTask *v9; 
  const XUID *v10; 
  XUID result; 

  v2 = controllerIndex;
  if ( !listingInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage_contentserver.cpp", 686, ASSERT_TYPE_ASSERT, "(listingInfo)", (const char *)&queryFormat, "listingInfo") )
    __debugbreak();
  if ( (unsigned int)v2 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage_contentserver.cpp", 687, ASSERT_TYPE_ASSERT, "(controllerIndex >= 0 && controllerIndex < 8)", (const char *)&queryFormat, "controllerIndex >= 0 && controllerIndex < MAX_GPAD_COUNT") )
    __debugbreak();
  if ( !g_CSListTask && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage_contentserver.cpp", 688, ASSERT_TYPE_ASSERT, "(g_CSListTask)", (const char *)&queryFormat, "g_CSListTask") )
    __debugbreak();
  if ( (s_ContentServerState[v2] & 4) == 0 || (s_ContentServerMemoryState & 0x301FFE) != 3153918 || !g_CSListTask || XUID::IsNull(&listingInfo->m_playerXUID) || (unsigned int)v2 > 7 )
    return 0i64;
  if ( !LiveStorage_CheckConnection(v2) )
  {
    Com_Printf(14, "Not connected to live or Demonware(cont %i)\n", (unsigned int)v2);
    return 0i64;
  }
  if ( TaskManager_TaskIsInProgressForController(&storageTasks, 4, v2) )
  {
    Com_Printf(14, "Get listing task already in progress, earlying out (cont %i)\n", (unsigned int)v2);
    return 0i64;
  }
  OpenTaskSlot = TaskManager_GetOpenTaskSlot(&storageTasks, v2, 4);
  if ( !OpenTaskSlot )
  {
    Com_Printf(14, "Couldn't allocate task for storage file listing\n");
    return 0i64;
  }
  v6 = v2;
  Xuid = Live_GetXuid(&result, v2);
  if ( XUID::operator==(&listingInfo->m_playerXUID, Xuid) )
    v8 = &g_ContentServerPrimary[v6];
  else
    v8 = &g_ContentServerSecondary[v6];
  if ( v8->m_valid && Sys_Milliseconds() - v8->m_lastRead < 60000 && XUID::operator==(&v8->m_playerXuid, &listingInfo->m_playerXUID) )
  {
    TaskManager_ClearTask(OpenTaskSlot);
    Com_Printf(14, "Trying to fetch listing too often, earlying out (cont %i)\n", (unsigned int)v2);
  }
  else
  {
    v9 = &g_CSListTask[v2];
    v8->m_valid = 0;
    v9->m_maxNumResults = 32;
    v9->m_ownerID = XUID::GetUniversalId(&listingInfo->m_playerXUID);
    v9->m_category = listingInfo->m_category;
    v9->m_fileName = listingInfo->m_fileName;
    v9->m_startDate = listingInfo->m_startDate;
    v9->m_offset = listingInfo->m_offset;
    v9->m_descriptors = v8->m_descriptors;
    v10 = Live_GetXuid(&result, v2);
    if ( !XUID::operator==(&listingInfo->m_playerXUID, v10) )
      LODWORD(v2) = v2 + 8;
    v9->m_bufferLocation = v2;
    v9->m_successCallback = listingInfo->m_successCallback;
    v9->m_failureCallback = listingInfo->m_failureCallback;
    OpenTaskSlot->data = v9;
    if ( dwCSGetListing(OpenTaskSlot, v9) )
      return 1i64;
    TaskManager_ClearTask(OpenTaskSlot);
    Com_Printf(14, "Could not create task to fetch file list from DW.\n");
  }
  return 0i64;
}

/*
==============
LiveStorage_CS_GetListingComplete
==============
*/
taskCompleteResults LiveStorage_CS_GetListingComplete(const int tasknum)
{
  overlappedTask *v1; 
  dwCSListTask *data; 
  taskCompleteResults v3; 
  taskCompleteResults v4; 
  __int64 m_bufferLocation; 
  contentServerPrivateData *v6; 
  const XUID *v7; 
  void (__fastcall *m_successCallback)(const int, contentServerPrivateData *); 
  void (__fastcall *m_failureCallback)(const int, bdLobbyErrorCode); 
  XUID result; 

  v1 = &storageTasks.tasks[tasknum];
  if ( !v1->active && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage_contentserver.cpp", 768, ASSERT_TYPE_ASSERT, "(task->active)", (const char *)&queryFormat, "task->active") )
    __debugbreak();
  if ( v1->type != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage_contentserver.cpp", 769, ASSERT_TYPE_ASSERT, "(task->type == TASK_CS_GETLISTING)", (const char *)&queryFormat, "task->type == TASK_CS_GETLISTING") )
    __debugbreak();
  data = (dwCSListTask *)v1->data;
  v3 = dwCSGetListingComplete(v1, data);
  v4 = v3;
  if ( v3 == TASK_COMPLETE )
  {
    m_bufferLocation = data->m_bufferLocation;
    if ( (int)m_bufferLocation >= 8 )
      v6 = &g_ContentServerSecondary[(int)m_bufferLocation - 8];
    else
      v6 = &g_ContentServerPrimary[m_bufferLocation];
    v7 = XUID::FromUniversalId(&result, data->m_ownerID);
    XUID::operator=(&v6->m_playerXuid, v7);
    v6->m_descriptorCount = bdRemoteTask::getNumResults(v1->u.remoteTask.m_ptr);
    v6->m_lastRead = Sys_Milliseconds();
    v6->m_valid = 1;
    m_successCallback = data->m_successCallback;
    if ( m_successCallback )
      m_successCallback(v1->controllerIndex, v6);
    TaskManager_ClearTask(v1);
  }
  else
  {
    if ( v3 != TASK_ERROR )
      return v3;
    m_failureCallback = data->m_failureCallback;
    if ( m_failureCallback )
      m_failureCallback(v1->controllerIndex, data->m_error);
    TaskManager_ClearTask(v1);
    Com_Printf(14, "Get Listing task errored out.\n");
  }
  return v4;
}

/*
==============
LiveStorage_CS_GetPrivateData
==============
*/
contentServerPrivateData *LiveStorage_CS_GetPrivateData(const int controllerIndex)
{
  contentServerPrivateData *result; 
  int v3; 
  int *v4; 
  int v5; 

  result = &g_ContentServerPrimary[controllerIndex];
  if ( !result->m_valid )
  {
    v3 = s_ContentServerState[controllerIndex];
    v4 = &s_ContentServerState[controllerIndex];
    if ( (v3 & 4) == 0 || (v5 = s_ContentServerMemoryState, (s_ContentServerMemoryState & 0x301FFE) != 3153918) )
    {
      LiveStorage_CS_Init(controllerIndex);
      v3 = *v4;
      v5 = s_ContentServerMemoryState;
    }
    if ( (v3 & 4) != 0 && (v5 & 0x301FFE) == 3153918 && !TaskManager_TaskIsInProgressForController(&storageTasks, 4, controllerIndex) )
      LiveStorage_CS_RefreshPrivateData(controllerIndex);
    return 0i64;
  }
  return result;
}

/*
==============
LiveStorage_CS_GetUploadProgress
==============
*/
void LiveStorage_CS_GetUploadProgress(const int controllerIndex, unsigned int *bytes, float *dataRate)
{
  if ( (s_ContentServerState[controllerIndex] & 4) != 0 && (s_ContentServerMemoryState & 0x301FFE) == 3153918 )
  {
    if ( dwGetLogOnStatus(controllerIndex) == DW_LIVE_CONNECTED && TaskManager_TaskIsInProgressForController(&storageTasks, 9, controllerIndex) )
    {
      dwCSGetProgress(controllerIndex, bytes, dataRate);
      return;
    }
  }
  else
  {
    Com_PrintError(16, "[LiveStorage_CS_GetUploadProgress] Failed to write, LiveStorage_CS_IsAvailable = false\n");
  }
  *bytes = 0;
  *dataRate = 0.0;
}

/*
==============
LiveStorage_CS_GetUploadingFileTotalSize
==============
*/
__int64 LiveStorage_CS_GetUploadingFileTotalSize(const int controllerIndex)
{
  __int64 v1; 

  v1 = controllerIndex;
  if ( (s_ContentServerState[controllerIndex] & 4) != 0 && (s_ContentServerMemoryState & 0x301FFE) == 3153918 )
  {
    if ( dwGetLogOnStatus(controllerIndex) == DW_LIVE_CONNECTED && TaskManager_TaskIsInProgressForController(&storageTasks, 9, v1) )
      return g_CSWriteFileTask[v1].m_fileSize;
  }
  else
  {
    Com_PrintError(16, "[LiveStorage_CS_GetUploadingFileTotalSize] Failed to write, LiveStorage_CS_IsAvailable = false\n");
  }
  return 0i64;
}

/*
==============
LiveStorage_CS_Init
==============
*/
void LiveStorage_CS_Init(const int controllerIndex)
{
  __int64 v1; 
  DWServicesAccess *Instance; 
  int v3; 
  int ActivationFactoryByPCWSTR; 
  int v5; 
  __int64 v6; 
  __int64 v7; 
  int v8; 
  DWServicesAccess *v9; 
  DWServicesAccess *v10; 
  DWContentStreaming *ContentStreaming; 
  DWServicesAccess *v12; 
  DWContentStreaming *v13; 
  Platform::Guid pGuid; 
  int v15; 
  __int64 v16; 
  void *ppActivationFactory; 
  __int64 v18; 

  v1 = controllerIndex;
  if ( (s_ContentServerState[controllerIndex] & 4) == 0 )
  {
    Instance = DWServicesAccess::GetInstance();
    if ( DWServicesAccess::isReady(Instance, v1) && (s_ContentServerMemoryState & 0x301FFE) == 3153918 )
    {
      v3 = s_ContentServerState[v1];
      if ( (v3 & 2) != 0 )
      {
LABEL_17:
        s_ContentServerState[v1] = v3 | 4;
LABEL_18:
        LiveStorage_CS_RefreshPrivateData(v1);
        return;
      }
      Sys_ProfBeginNamedEvent(0xFFFFFFFF, "Windows Users->Size 1");
      pGuid.__vftable = (Platform::Object_vtbl *)0x4A507FC6B4F23A93i64;
      *(_DWORD *)&pGuid.__d = 9786289;
      *(_DWORD *)&pGuid.__h = 1352546326;
      ppActivationFactory = NULL;
      ActivationFactoryByPCWSTR = __winRT::__getActivationFactoryByPCWSTR((void *)L"Windows.Xbox.System.User", &pGuid, &ppActivationFactory);
      if ( ActivationFactoryByPCWSTR < 0 )
        __abi_WinRTraiseException(ActivationFactoryByPCWSTR);
      v16 = 0i64;
      v5 = (*(__int64 (__fastcall **)(void *, __int64 *))(*(_QWORD *)ppActivationFactory + 72i64))(ppActivationFactory, &v16);
      if ( v5 < 0 )
        __abi_WinRTraiseException(v5);
      v6 = v16;
      v7 = v16;
      if ( v16 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8i64))(v16);
        v6 = v16;
      }
      if ( v6 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16i64))(v6);
      v18 = 0i64;
      if ( ppActivationFactory )
        (*(void (__fastcall **)(void *))(*(_QWORD *)ppActivationFactory + 16i64))(ppActivationFactory);
      v18 = v7;
      v8 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v7 + 56i64))(v7, &v15);
      if ( v8 < 0 )
        __abi_WinRTraiseException(v8);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16i64))(v7);
      Sys_ProfEndNamedEvent();
      if ( v15 )
      {
        v9 = DWServicesAccess::GetInstance();
        if ( !DWServicesAccess::isReady(v9, v1) )
        {
          Sys_Error((const ObfuscateErrorText)&stru_1440056B0);
          LiveStorage_CS_Shutdown(v1);
          return;
        }
        v10 = DWServicesAccess::GetInstance();
        ContentStreaming = DWServicesAccess::GetContentStreaming(v10, v1);
        DWContentStreaming::enablePersistentThread(ContentStreaming, 1);
        v12 = DWServicesAccess::GetInstance();
        v13 = DWServicesAccess::GetContentStreaming(v12, v1);
        v13->pump(v13);
        v3 = s_ContentServerState[v1] | 2;
        s_ContentServerState[v1] = v3;
        if ( (v3 & 2) == 0 )
          goto LABEL_18;
        goto LABEL_17;
      }
    }
  }
}

/*
==============
LiveStorage_CS_InitDemonware
==============
*/
__int64 LiveStorage_CS_InitDemonware(const int controllerIndex)
{
  DWServicesAccess *Instance; 
  DWServicesAccess *v3; 
  DWContentStreaming *ContentStreaming; 
  DWServicesAccess *v5; 
  DWContentStreaming *v6; 

  Instance = DWServicesAccess::GetInstance();
  if ( !DWServicesAccess::isReady(Instance, controllerIndex) )
    return 4294967293i64;
  v3 = DWServicesAccess::GetInstance();
  ContentStreaming = DWServicesAccess::GetContentStreaming(v3, controllerIndex);
  DWContentStreaming::enablePersistentThread(ContentStreaming, 1);
  v5 = DWServicesAccess::GetInstance();
  v6 = DWServicesAccess::GetContentStreaming(v5, controllerIndex);
  v6->pump(v6);
  return 2i64;
}

/*
==============
LiveStorage_CS_IsAvailable
==============
*/
bool LiveStorage_CS_IsAvailable(const int controllerIndex)
{
  return (s_ContentServerState[controllerIndex] & 4) != 0 && (s_ContentServerMemoryState & 0x301FFE) == 3153918;
}

/*
==============
LiveStorage_CS_IsInited
==============
*/
bool LiveStorage_CS_IsInited(const int controllerIndex)
{
  return (s_ContentServerState[controllerIndex] & 4) != 0 && (s_ContentServerMemoryState & 0x301FFE) == 3153918;
}

/*
==============
LiveStorage_CS_IsTaskCSTask
==============
*/
bool LiveStorage_CS_IsTaskCSTask(const int taskIndex)
{
  return (unsigned int)(storageTasks.tasks[taskIndex].type - 4) <= 0xB;
}

/*
==============
LiveStorage_CS_IsTaskInProgress
==============
*/
char LiveStorage_CS_IsTaskInProgress(const int controllerIndex, const char *taskName)
{
  int v4; 

  if ( (s_ContentServerState[controllerIndex] & 4) == 0 || (s_ContentServerMemoryState & 0x301FFE) != 3153918 )
  {
    Com_PrintError(16, "[LiveStorage_CS_IsTaskInProgress] Failed to write, LiveStorage_CS_IsAvailable = false\n");
    return 0;
  }
  if ( dwGetLogOnStatus(controllerIndex) == DW_LIVE_CONNECTED )
  {
    if ( I_stricmp(taskName, "getlisting") )
    {
      if ( I_stricmp(taskName, "getdescriptors") )
      {
        if ( I_stricmp(taskName, "readfile") )
        {
          if ( I_stricmp(taskName, "removefile") )
          {
            if ( I_stricmp(taskName, "writefile") )
            {
              if ( I_stricmp(taskName, "settags") )
              {
                if ( I_stricmp(taskName, "copyotherfile") )
                {
                  if ( I_stricmp(taskName, "uploadsummary") )
                  {
                    if ( I_stricmp(taskName, "listpublisherfiles") )
                    {
                      if ( I_stricmp(taskName, "downloadpublisherfile") )
                        return 0;
                      v4 = 15;
                    }
                    else
                    {
                      v4 = 14;
                    }
                  }
                  else
                  {
                    v4 = 12;
                  }
                }
                else
                {
                  v4 = 11;
                }
              }
              else
              {
                v4 = 10;
              }
            }
            else
            {
              v4 = 9;
            }
          }
          else
          {
            v4 = 8;
          }
        }
        else
        {
          v4 = 7;
        }
      }
      else
      {
        v4 = 5;
      }
    }
    else
    {
      v4 = 4;
    }
    if ( TaskManager_TaskIsInProgressForController(&storageTasks, v4, controllerIndex) )
      return 1;
  }
  return 0;
}

/*
==============
LiveStorage_CS_IsValidHTTPCode
==============
*/
bool LiveStorage_CS_IsValidHTTPCode(int httpCode)
{
  return !httpCode || (unsigned int)(httpCode - 200) <= 0x63;
}

/*
==============
LiveStorage_CS_ListAllPublisherFiles
==============
*/
__int64 LiveStorage_CS_ListAllPublisherFiles(const int controllerIndex, contentServerListAllPublisherFilesInfo *listInfo)
{
  __int64 v2; 
  __int64 v4; 
  overlappedTask *OpenTaskSlot; 
  overlappedTask *v7; 
  Online_ErrorReporting *v8; 
  dwCSListPublisherFilesTask *v9; 
  Online_ErrorReporting *InstancePtr; 

  v2 = controllerIndex;
  if ( !listInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage_contentserver.cpp", 2094, ASSERT_TYPE_ASSERT, "(listInfo)", (const char *)&queryFormat, "listInfo") )
    __debugbreak();
  if ( !g_CSListPublisherFilesTask && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage_contentserver.cpp", 2095, ASSERT_TYPE_ASSERT, "(g_CSListPublisherFilesTask)", (const char *)&queryFormat, "g_CSListPublisherFilesTask") )
    __debugbreak();
  if ( (unsigned int)v2 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage_contentserver.cpp", 2096, ASSERT_TYPE_ASSERT, "(controllerIndex >= 0 && controllerIndex < 8)", (const char *)&queryFormat, "controllerIndex >= 0 && controllerIndex < MAX_GPAD_COUNT") )
    __debugbreak();
  v4 = v2;
  if ( (s_ContentServerState[v2] & 4) == 0 || (s_ContentServerMemoryState & 0x301FFE) != 3153918 || !g_CSListPublisherFilesTask )
    return 0i64;
  if ( !LiveStorage_CheckConnection(v2) )
  {
    Com_Printf(14, "Not connected to live or Demonware(cont %i)\n", (unsigned int)v2);
    return 0i64;
  }
  if ( TaskManager_TaskIsInProgressForController(&storageTasks, 14, v2) )
  {
    Com_Printf(14, "List publisher files task already in progress, earlying out (cont %i)\n", (unsigned int)v2);
    return 0i64;
  }
  OpenTaskSlot = TaskManager_GetOpenTaskSlot(&storageTasks, v2, 14);
  v7 = OpenTaskSlot;
  if ( OpenTaskSlot )
  {
    v9 = &g_CSListPublisherFilesTask[v4];
    v9->m_startDate = listInfo->m_startDate;
    v9->m_category = listInfo->m_category;
    v9->m_outDescriptors = listInfo->m_outDescriptors;
    v9->m_maxNumResults = listInfo->m_maxNumResults;
    v9->m_descriptorCount = listInfo->m_outDescriptorCount;
    v9->m_offset = listInfo->m_offset;
    v9->m_fileName = listInfo->m_fileName;
    v9->m_successCallback = listInfo->m_successCallback;
    v9->m_failureCallback = listInfo->m_failureCallback;
    OpenTaskSlot->data = v9;
    if ( dwCSListPublisherFiles(OpenTaskSlot, v9) )
    {
      return 1i64;
    }
    else
    {
      TaskManager_ClearTask(v7);
      InstancePtr = Online_ErrorReporting::GetInstancePtr();
      Online_ErrorReporting::ReportError(InstancePtr, (Online_Error_CAT_CONTENT_STORAGE_t)32, NULL);
      Com_Printf(14, "Could not create task for listing publisher files.\n");
      return 0i64;
    }
  }
  else
  {
    v8 = Online_ErrorReporting::GetInstancePtr();
    Online_ErrorReporting::ReportError(v8, (Online_Error_CAT_CONTENT_STORAGE_t)16, NULL);
    Com_Printf(14, "Couldn't allocate task for listing publisher files.\n");
    return 0i64;
  }
}

/*
==============
LiveStorage_CS_ListAllPublisherFilesComplete
==============
*/
taskCompleteResults LiveStorage_CS_ListAllPublisherFilesComplete(const int tasknum)
{
  overlappedTask *v1; 
  dwCSListPublisherFilesTask *data; 
  taskCompleteResults result; 
  taskCompleteResults v4; 
  void (__fastcall *m_successCallback)(const int, const int); 
  void (__fastcall *m_failureCallback)(const int, const int, bdLobbyErrorCode); 
  Online_ErrorReporting *InstancePtr; 

  v1 = &storageTasks.tasks[tasknum];
  if ( !v1->active && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage_contentserver.cpp", 2159, ASSERT_TYPE_ASSERT, "(task->active)", (const char *)&queryFormat, "task->active") )
    __debugbreak();
  if ( v1->type != 14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage_contentserver.cpp", 2160, ASSERT_TYPE_ASSERT, "(task->type == TASK_CS_LISTPUBLISHERFILES)", (const char *)&queryFormat, "task->type == TASK_CS_LISTPUBLISHERFILES") )
    __debugbreak();
  data = (dwCSListPublisherFilesTask *)v1->data;
  result = dwCSListPublisherFilesComplete(v1, data);
  v4 = result;
  if ( result == TASK_COMPLETE )
  {
    if ( data->m_descriptorCount )
      *data->m_descriptorCount = bdRemoteTask::getNumResults(v1->u.remoteTask.m_ptr);
    m_successCallback = data->m_successCallback;
    if ( m_successCallback )
      m_successCallback(v1->controllerIndex, data->m_category);
    TaskManager_ClearTask(v1);
    return v4;
  }
  else if ( result == TASK_ERROR )
  {
    m_failureCallback = data->m_failureCallback;
    if ( m_failureCallback )
      m_failureCallback(v1->controllerIndex, data->m_category, data->m_error);
    TaskManager_ClearTask(v1);
    InstancePtr = Online_ErrorReporting::GetInstancePtr();
    Online_ErrorReporting::ReportError(InstancePtr, (Online_Error_CAT_CONTENT_STORAGE_t)32, NULL);
    return 2;
  }
  return result;
}

/*
==============
LiveStorage_CS_PlatformInit
==============
*/
char LiveStorage_CS_PlatformInit(const int controllerIndex)
{
  return 1;
}

/*
==============
LiveStorage_CS_ReadFile
==============
*/
__int64 LiveStorage_CS_ReadFile(const int controllerIndex, contentServerReadFileInfo *readInfo)
{
  __int64 v3; 
  overlappedTask *OpenTaskSlot; 
  dwCSReadFileTask *v6; 

  v3 = controllerIndex;
  if ( !readInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage_contentserver.cpp", 1056, ASSERT_TYPE_ASSERT, "(readInfo)", (const char *)&queryFormat, "readInfo", -2i64) )
    __debugbreak();
  if ( !g_CSReadFileTask && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage_contentserver.cpp", 1057, ASSERT_TYPE_ASSERT, "(g_CSReadFileTask)", (const char *)&queryFormat, "g_CSReadFileTask") )
    __debugbreak();
  if ( (unsigned int)v3 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage_contentserver.cpp", 1058, ASSERT_TYPE_ASSERT, "(controllerIndex >= 0 && controllerIndex < 8)", (const char *)&queryFormat, "controllerIndex >= 0 && controllerIndex < MAX_GPAD_COUNT") )
    __debugbreak();
  if ( dword_14CDC13D4 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1772i64) )
  {
    j__Init_thread_header(&dword_14CDC13D4);
    if ( dword_14CDC13D4 == -1 )
    {
      bdDownloadInterceptor::bdDownloadInterceptor(&downloadInterceptor_0);
      downloadInterceptor_0.__vftable = (csDownloadInterceptor_vtbl *)&csDownloadInterceptor::`vftable';
      j_atexit(LiveStorage_CS_ReadFile_::_2_::_dynamic_atexit_destructor_for__downloadInterceptor__);
      j__Init_thread_footer(&dword_14CDC13D4);
    }
  }
  if ( (s_ContentServerState[v3] & 4) == 0 || (s_ContentServerMemoryState & 0x301FFE) != 3153918 || !g_CSReadFileTask )
    return 0i64;
  if ( !LiveStorage_CheckConnection(v3) )
  {
    Com_Printf(14, "Not connected to live or Demonware(cont %i)\n", (unsigned int)v3);
    return 0i64;
  }
  if ( TaskManager_TaskIsInProgressForController(&storageTasks, 7, v3) )
  {
    Com_Printf(14, "Read file task already in progress, earlying out (cont %i)\n", (unsigned int)v3);
    return 0i64;
  }
  OpenTaskSlot = TaskManager_GetOpenTaskSlot(&storageTasks, v3, 7);
  if ( !OpenTaskSlot )
  {
    Com_Printf(14, "Couldn't allocate task for storage file reading\n");
    return 0i64;
  }
  v6 = &g_CSReadFileTask[v3];
  v6->m_fileID = readInfo->m_fileID;
  v6->m_fileSize = readInfo->m_fileSize;
  v6->m_bytesDownloaded = 0;
  v6->m_loadedFromCache = 0;
  v6->m_cacheBuffer = readInfo->m_cacheBuffer;
  v6->m_dataCallback = readInfo->m_dataCallback;
  v6->m_failureCallback = readInfo->m_failureCallback;
  v6->m_successCallback = readInfo->m_successCallback;
  OpenTaskSlot->data = v6;
  if ( readInfo->m_isStreamed )
  {
    downloadInterceptor_0.callback = LiveStorage_CS_ReadFileData;
    downloadInterceptor_0.task = v6;
    v6->m_downloadHandler = &downloadInterceptor_0;
  }
  else
  {
    v6->m_buffer = readInfo->m_buffer;
    v6->m_bufferSize = readInfo->m_bufferSize;
    v6->m_downloadHandler = NULL;
  }
  if ( readInfo->m_cacheBuffer && DCache_IsCached(DCACHE_TYPE_TEMPORARY, readInfo->m_fileID, DCACHE_LOC_USER) && DCache_ReadFromCache(DCACHE_TYPE_TEMPORARY, readInfo->m_fileID, DCACHE_LOC_USER, readInfo->m_fileSize, (unsigned __int8 *)readInfo->m_cacheBuffer) )
  {
    v6->m_loadedFromCache = 1;
    v6->m_bytesDownloaded = v6->m_fileSize;
  }
  else if ( !dwCSReadFile(OpenTaskSlot, v6) )
  {
    TaskManager_ClearTask(OpenTaskSlot);
    Com_Printf(14, "Could not create task to read file from DW.\n");
    return 0i64;
  }
  return 1i64;
}

/*
==============
LiveStorage_CS_ReadFileComplete
==============
*/
__int64 LiveStorage_CS_ReadFileComplete(const int tasknum)
{
  overlappedTask *v1; 
  unsigned int *data; 
  void (__fastcall *v3)(_QWORD, void *); 
  taskCompleteResults v5; 
  int HTTPError; 
  void (__fastcall *v7)(_QWORD, unsigned int *); 
  void (__fastcall *v8)(_QWORD, _QWORD); 

  v1 = &storageTasks.tasks[tasknum];
  if ( !v1->active && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage_contentserver.cpp", 1140, ASSERT_TYPE_ASSERT, "(task->active)", (const char *)&queryFormat, "task->active") )
    __debugbreak();
  if ( v1->type != 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage_contentserver.cpp", 1141, ASSERT_TYPE_ASSERT, "(task->type == TASK_CS_READFILE)", (const char *)&queryFormat, "task->type == TASK_CS_READFILE") )
    __debugbreak();
  data = (unsigned int *)v1->data;
  if ( *((_BYTE *)data + 19784) )
  {
    v3 = (void (__fastcall *)(_QWORD, void *))*((_QWORD *)data + 2476);
    if ( v3 )
      v3(v1->controllerIndex, v1->data);
    TaskManager_ClearTask(v1);
    return 1i64;
  }
  v5 = dwCSReadFileComplete(v1, (dwCSReadFileTask *const)v1->data);
  if ( v5 != TASK_COMPLETE )
  {
    if ( v5 != TASK_ERROR )
      return (unsigned int)v5;
LABEL_20:
    v8 = (void (__fastcall *)(_QWORD, _QWORD))*((_QWORD *)data + 2477);
    if ( v8 )
      v8(v1->controllerIndex, data[4947]);
    TaskManager_ClearTask(v1);
    Com_Printf(14, "Read from DW task failed. Error = %d\n", data[4947]);
    return (unsigned int)v5;
  }
  HTTPError = dwCSGetLastHTTPError(v1->controllerIndex);
  if ( HTTPError && (unsigned int)(HTTPError - 200) > 0x63 )
    goto LABEL_20;
  if ( *((_QWORD *)data + 2471) )
    DCache_WriteToCache(DCACHE_TYPE_TEMPORARY, *(_QWORD *)data, DCACHE_LOC_USER, -1, NULL, 0, 0, data[8], data[9], 0, data[4938], *((unsigned __int8 **)data + 2471));
  v7 = (void (__fastcall *)(_QWORD, unsigned int *))*((_QWORD *)data + 2476);
  if ( v7 )
    v7(v1->controllerIndex, data);
  TaskManager_ClearTask(v1);
  return (unsigned int)v5;
}

/*
==============
LiveStorage_CS_ReadFileData
==============
*/
__int64 LiveStorage_CS_ReadFileData(void *data, __int64 dataSize, dwCSReadFileTask *fileTask)
{
  unsigned int v4; 

  v4 = dataSize;
  fileTask->m_dataCallback(data, dataSize, fileTask->m_bytesDownloaded, fileTask->m_fileSize);
  fileTask->m_bytesDownloaded += v4;
  return v4;
}

/*
==============
LiveStorage_CS_ReadPublisherFile
==============
*/
__int64 LiveStorage_CS_ReadPublisherFile(const int controllerIndex, contentServerReadPublisherFileInfo *downloadInfo)
{
  __int64 v3; 
  overlappedTask *OpenTaskSlot; 
  Online_ErrorReporting *InstancePtr; 
  dwCSReadPublisherFileTask *v7; 
  Online_ErrorReporting *v8; 

  v3 = controllerIndex;
  if ( !downloadInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage_contentserver.cpp", 2214, ASSERT_TYPE_ASSERT, "(downloadInfo)", (const char *)&queryFormat, "downloadInfo", -2i64) )
    __debugbreak();
  if ( !g_CSReadPublisherFileTask && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage_contentserver.cpp", 2215, ASSERT_TYPE_ASSERT, "(g_CSReadPublisherFileTask)", (const char *)&queryFormat, "g_CSReadPublisherFileTask") )
    __debugbreak();
  if ( (unsigned int)v3 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage_contentserver.cpp", 2216, ASSERT_TYPE_ASSERT, "(controllerIndex >= 0 && controllerIndex < 8)", (const char *)&queryFormat, "controllerIndex >= 0 && controllerIndex < MAX_GPAD_COUNT") )
    __debugbreak();
  if ( dword_14CDC1414 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1772i64) )
  {
    j__Init_thread_header(&dword_14CDC1414);
    if ( dword_14CDC1414 == -1 )
    {
      bdDownloadInterceptor::bdDownloadInterceptor(&downloadInterceptor_1);
      downloadInterceptor_1.__vftable = (csReadPublisherFileInterceptor_vtbl *)&csReadPublisherFileInterceptor::`vftable';
      j_atexit(LiveStorage_CS_ReadPublisherFile_::_2_::_dynamic_atexit_destructor_for__downloadInterceptor__);
      j__Init_thread_footer(&dword_14CDC1414);
    }
  }
  if ( (s_ContentServerState[v3] & 4) == 0 || (s_ContentServerMemoryState & 0x301FFE) != 3153918 || !g_CSReadPublisherFileTask )
    return 0i64;
  if ( !LiveStorage_CheckConnection(v3) )
  {
    Com_Printf(14, "Not connected to live or Demonware(cont %i)\n", (unsigned int)v3);
    return 0i64;
  }
  if ( TaskManager_TaskIsInProgressForController(&storageTasks, 15, v3) )
  {
    Com_Printf(14, "Read file task already in progress, earlying out (cont %i)\n", (unsigned int)v3);
    return 0i64;
  }
  OpenTaskSlot = TaskManager_GetOpenTaskSlot(&storageTasks, v3, 15);
  if ( !OpenTaskSlot )
  {
    InstancePtr = Online_ErrorReporting::GetInstancePtr();
    Online_ErrorReporting::ReportError(InstancePtr, DODGE, NULL);
    Com_Printf(14, "Couldn't allocate task for content server publisher file reading\n");
    return 0i64;
  }
  v7 = &g_CSReadPublisherFileTask[v3];
  v7->m_fileID = downloadInfo->m_fileID;
  v7->m_fileSize = downloadInfo->m_fileSize;
  v7->m_outDescriptors = downloadInfo->m_outDescriptors;
  v7->m_bufferSize = downloadInfo->m_bufferSize;
  v7->m_startByte = downloadInfo->m_startByte;
  v7->m_endByte = downloadInfo->m_endByte;
  v7->m_bytesDownloaded = 0;
  v7->m_cacheBuffer = downloadInfo->m_cacheBuffer;
  v7->m_loadedFromCache = 0;
  v7->m_dataCallback = downloadInfo->m_dataCallback;
  v7->m_failureCallback = downloadInfo->m_failureCallback;
  v7->m_successCallback = downloadInfo->m_successCallback;
  OpenTaskSlot->data = v7;
  if ( downloadInfo->m_isStreamed )
  {
    downloadInterceptor_1.callback = LiveStorage_CS_ReadPublisherFileData;
    downloadInterceptor_1.task = v7;
    v7->m_downloadHandler = &downloadInterceptor_1;
  }
  else
  {
    v7->m_buffer = downloadInfo->m_buffer;
    v7->m_bufferSize = downloadInfo->m_bufferSize;
    v7->m_downloadHandler = NULL;
  }
  if ( downloadInfo->m_cacheBuffer && DCache_IsCached(DCACHE_TYPE_TEMPORARY, downloadInfo->m_fileID, DCACHE_LOC_USER) && DCache_ReadFromCache(DCACHE_TYPE_TEMPORARY, downloadInfo->m_fileID, DCACHE_LOC_USER, downloadInfo->m_fileSize, (unsigned __int8 *)downloadInfo->m_cacheBuffer) )
  {
    downloadInfo->m_loadedFromCache = 1;
  }
  else if ( !dwCSReadPublisherFile(OpenTaskSlot, v7) )
  {
    TaskManager_ClearTask(OpenTaskSlot);
    v8 = Online_ErrorReporting::GetInstancePtr();
    Online_ErrorReporting::ReportError(v8, COUNT, NULL);
    Com_Printf(14, "Could not create task to read file from DW.\n");
    return 0i64;
  }
  return 1i64;
}

/*
==============
LiveStorage_CS_ReadPublisherFileComplete
==============
*/
__int64 LiveStorage_CS_ReadPublisherFileComplete(const int tasknum)
{
  overlappedTask *v1; 
  unsigned int *data; 
  void (__fastcall *v3)(_QWORD, void *); 
  taskCompleteResults v5; 
  int HTTPError; 
  Online_Error_CAT_CONTENT_STORAGE_t v7; 
  void (__fastcall *v8)(_QWORD, unsigned int *); 
  Online_ErrorReporting *InstancePtr; 
  void (__fastcall *v10)(_QWORD, _QWORD); 

  v1 = &storageTasks.tasks[tasknum];
  if ( !v1->active && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage_contentserver.cpp", 2303, ASSERT_TYPE_ASSERT, "(task->active)", (const char *)&queryFormat, "task->active") )
    __debugbreak();
  if ( v1->type != 15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage_contentserver.cpp", 2304, ASSERT_TYPE_ASSERT, "(task->type == TASK_CS_DOWNLOADPUBLISHERFILE)", (const char *)&queryFormat, "task->type == TASK_CS_DOWNLOADPUBLISHERFILE") )
    __debugbreak();
  data = (unsigned int *)v1->data;
  if ( !*((_BYTE *)data + 64) )
  {
    v5 = dwCSReadPublisherFileComplete(v1, (dwCSReadPublisherFileTask *const)v1->data);
    if ( v5 == TASK_COMPLETE )
    {
      HTTPError = dwCSGetLastHTTPError(v1->controllerIndex);
      if ( !HTTPError || (unsigned int)(HTTPError - 200) <= 0x63 )
      {
        if ( *((_QWORD *)data + 7) )
          DCache_WriteToCache(DCACHE_TYPE_TEMPORARY, *(_QWORD *)data, DCACHE_LOC_USER, -1, NULL, 0, 0, *(_DWORD *)(*((_QWORD *)data + 4) + 24i64), *(_DWORD *)(*((_QWORD *)data + 4) + 28i64), 0, data[2], *((unsigned __int8 **)data + 7));
        v8 = (void (__fastcall *)(_QWORD, unsigned int *))*((_QWORD *)data + 12);
        if ( v8 )
          v8(v1->controllerIndex, data);
        TaskManager_ClearTask(v1);
        return (unsigned int)v5;
      }
      v7 = v5 + 3;
    }
    else
    {
      if ( v5 != TASK_ERROR )
        return (unsigned int)v5;
      v7 = 8;
    }
    InstancePtr = Online_ErrorReporting::GetInstancePtr();
    Online_ErrorReporting::ReportError(InstancePtr, v7, NULL);
    v10 = (void (__fastcall *)(_QWORD, _QWORD))*((_QWORD *)data + 13);
    if ( v10 )
      v10(v1->controllerIndex, data[20]);
    TaskManager_ClearTask(v1);
    Com_Printf(14, "Read from DW task failed. Error = %d\n", data[20]);
    return (unsigned int)v5;
  }
  v3 = (void (__fastcall *)(_QWORD, void *))*((_QWORD *)data + 12);
  if ( v3 )
    v3(v1->controllerIndex, v1->data);
  TaskManager_ClearTask(v1);
  return 1i64;
}

/*
==============
LiveStorage_CS_ReadPublisherFileData
==============
*/
__int64 LiveStorage_CS_ReadPublisherFileData(void *data, __int64 dataSize, dwCSReadPublisherFileTask *fileTask)
{
  unsigned int v4; 
  __int64 result; 
  Online_ErrorReporting *InstancePtr; 

  v4 = dataSize;
  if ( (s_ContentServerMemoryState & 0x200000) != 0 )
  {
    fileTask->m_dataCallback(data, dataSize, fileTask->m_bytesDownloaded, fileTask->m_fileSize, fileTask);
    fileTask->m_bytesDownloaded += v4;
    result = 1i64;
    if ( v4 )
      return v4;
  }
  else
  {
    InstancePtr = Online_ErrorReporting::GetInstancePtr();
    Online_ErrorReporting::ReportError(InstancePtr, (Online_Error_CAT_CONTENT_STORAGE_t)128, NULL);
    return 0i64;
  }
  return result;
}

/*
==============
LiveStorage_CS_RefreshPrivateData
==============
*/
void LiveStorage_CS_RefreshPrivateData(const int controllerIndex)
{
  const XUID *Xuid; 
  contentServerGetListingInfo v3; 
  XUID result; 

  g_ContentServerPrimary[controllerIndex].m_valid = 0;
  XUID::XUID(&v3.m_playerXUID);
  Xuid = Live_GetXuid(&result, controllerIndex);
  XUID::operator=(&v3.m_playerXUID, Xuid);
  v3.m_category = 0;
  v3.m_fileName = NULL;
  v3.m_offset = 0;
  v3.m_startDate = 0;
  v3.m_failureCallback = NULL;
  v3.m_successCallback = (void (__fastcall *)(const int, contentServerPrivateData *))LiveStorage_CS_RefreshPrivateData_Success;
  LiveStorage_CS_GetListing(controllerIndex, &v3);
}

/*
==============
LiveStorage_CS_RefreshPrivateData_Success
==============
*/
void LiveStorage_CS_RefreshPrivateData_Success(int controllerIndex, contentServerPrivateData *csData)
{
  LocalClientNum_t ClientFromController; 

  Com_Printf(14, "RefreshPrivateData - Get listing task succeeded for client %d.\n", (unsigned int)controllerIndex);
  ClientFromController = CL_Mgr_GetClientFromController(controllerIndex);
  if ( LUI_BeginEvent(ClientFromController, "live_storage_private_data_update", LUI_luaVM) )
  {
    LUI_SetTableBool("dispatchChildren", 1, LUI_luaVM);
    LUI_EndEvent(LUI_luaVM);
  }
}

/*
==============
LiveStorage_CS_RemoveFile
==============
*/
__int64 LiveStorage_CS_RemoveFile(const int controllerIndex, contentServerRemoveFileInfo *fileInfo)
{
  __int64 v2; 
  __int64 v4; 
  overlappedTask *OpenTaskSlot; 
  overlappedTask *v7; 
  dwCSRemoveFileTask *v8; 

  v2 = controllerIndex;
  if ( !fileInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage_contentserver.cpp", 1210, ASSERT_TYPE_ASSERT, "(fileInfo)", (const char *)&queryFormat, "fileInfo") )
    __debugbreak();
  if ( !g_CSRemoveFileTask && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage_contentserver.cpp", 1211, ASSERT_TYPE_ASSERT, "(g_CSRemoveFileTask)", (const char *)&queryFormat, "g_CSRemoveFileTask") )
    __debugbreak();
  if ( (unsigned int)v2 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage_contentserver.cpp", 1212, ASSERT_TYPE_ASSERT, "(controllerIndex >= 0 && controllerIndex < 8)", (const char *)&queryFormat, "controllerIndex >= 0 && controllerIndex < MAX_GPAD_COUNT") )
    __debugbreak();
  v4 = v2;
  if ( (s_ContentServerState[v2] & 4) == 0 || (s_ContentServerMemoryState & 0x301FFE) != 3153918 || !g_CSRemoveFileTask )
    return 0i64;
  if ( !LiveStorage_CheckConnection(v2) )
  {
    Com_Printf(14, "Not connected to live or Demonware(cont %i)\n", (unsigned int)v2);
    return 0i64;
  }
  if ( TaskManager_TaskIsInProgressForController(&storageTasks, 8, v2) )
  {
    Com_Printf(14, "Remove file task already in progress, earlying out (cont %i)\n", (unsigned int)v2);
    return 0i64;
  }
  OpenTaskSlot = TaskManager_GetOpenTaskSlot(&storageTasks, v2, 8);
  v7 = OpenTaskSlot;
  if ( OpenTaskSlot )
  {
    v8 = &g_CSRemoveFileTask[v4];
    v8->m_fileSlot = fileInfo->m_fileSlot;
    v8->m_successCallback = fileInfo->m_successCallback;
    v8->m_failureCallback = fileInfo->m_failureCallback;
    OpenTaskSlot->data = v8;
    if ( dwCSRemoveFile(OpenTaskSlot, v8) )
    {
      return 1i64;
    }
    else
    {
      TaskManager_ClearTask(v7);
      Com_Printf(14, "Could not create task to delete file from DW.\n");
      return 0i64;
    }
  }
  else
  {
    Com_Printf(14, "Couldn't allocate task for storage file listing\n");
    return 0i64;
  }
}

/*
==============
LiveStorage_CS_RemoveFileComplete
==============
*/
taskCompleteResults LiveStorage_CS_RemoveFileComplete(const int tasknum)
{
  overlappedTask *v1; 
  dwCSRemoveFileTask *data; 
  taskCompleteResults result; 
  taskCompleteResults v4; 
  void (__fastcall *m_successCallback)(const int); 
  void (__fastcall *m_failureCallback)(const int, bdLobbyErrorCode); 

  v1 = &storageTasks.tasks[tasknum];
  if ( !v1->active && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage_contentserver.cpp", 1266, ASSERT_TYPE_ASSERT, "(task->active)", (const char *)&queryFormat, "task->active") )
    __debugbreak();
  if ( v1->type != 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage_contentserver.cpp", 1267, ASSERT_TYPE_ASSERT, "(task->type == TASK_CS_REMOVEFILE)", (const char *)&queryFormat, "task->type == TASK_CS_REMOVEFILE") )
    __debugbreak();
  data = (dwCSRemoveFileTask *)v1->data;
  result = dwCSRemoveFileComplete(v1, data);
  v4 = result;
  if ( result == TASK_COMPLETE )
  {
    LiveStorage_CS_RefreshPrivateData(v1->controllerIndex);
    m_successCallback = data->m_successCallback;
    if ( m_successCallback )
      m_successCallback(v1->controllerIndex);
  }
  else
  {
    if ( result != TASK_ERROR )
      return result;
    m_failureCallback = data->m_failureCallback;
    if ( m_failureCallback )
      m_failureCallback(v1->controllerIndex, data->m_error);
  }
  TaskManager_ClearTask(v1);
  return v4;
}

/*
==============
LiveStorage_CS_Search
==============
*/
__int64 LiveStorage_CS_Search(const int controllerIndex, contentServerSearchInfo *searchInfo)
{
  __int64 v2; 
  __int64 v4; 
  overlappedTask *OpenTaskSlot; 
  overlappedTask *v7; 
  dwCSSearchTask *v8; 

  v2 = controllerIndex;
  if ( !searchInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage_contentserver.cpp", 955, ASSERT_TYPE_ASSERT, "(searchInfo)", (const char *)&queryFormat, "searchInfo") )
    __debugbreak();
  if ( !g_CSSearchTask && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage_contentserver.cpp", 956, ASSERT_TYPE_ASSERT, "(g_CSSearchTask)", (const char *)&queryFormat, "g_CSSearchTask") )
    __debugbreak();
  if ( (unsigned int)v2 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage_contentserver.cpp", 957, ASSERT_TYPE_ASSERT, "(controllerIndex >= 0 && controllerIndex < 8)", (const char *)&queryFormat, "controllerIndex >= 0 && controllerIndex < MAX_GPAD_COUNT") )
    __debugbreak();
  v4 = v2;
  if ( (s_ContentServerState[v2] & 4) == 0 || (s_ContentServerMemoryState & 0x301FFE) != 3153918 || !g_CSSearchTask )
    return 0i64;
  if ( !LiveStorage_CheckConnection(v2) )
  {
    Com_Printf(14, "Not connected to live or Demonware(cont %i)\n", (unsigned int)v2);
    return 0i64;
  }
  if ( TaskManager_TaskIsInProgressForController(&storageTasks, 6, v2) )
  {
    Com_Printf(14, "Search task already in progress, earlying out (cont %i)\n", (unsigned int)v2);
    return 0i64;
  }
  OpenTaskSlot = TaskManager_GetOpenTaskSlot(&storageTasks, v2, 6);
  v7 = OpenTaskSlot;
  if ( OpenTaskSlot )
  {
    v8 = &g_CSSearchTask[v4];
    v8->m_tags = searchInfo->m_tags;
    v8->m_numTags = searchInfo->m_numTags;
    v8->m_startIndex = searchInfo->m_startIndex;
    v8->m_maxNumResults = searchInfo->m_maxFileIDs;
    v8->m_resultFileIDs = searchInfo->m_outFileIDs;
    v8->m_resultFileCount = searchInfo->m_outFileCount;
    v8->m_resultTotalFileCount = searchInfo->m_outTotalFileCount;
    v8->m_orderNewestFirst = searchInfo->m_orderNewestFirst;
    v8->m_successCallback = searchInfo->m_successCallback;
    v8->m_failureCallback = searchInfo->m_failureCallback;
    OpenTaskSlot->data = v8;
    if ( dwCSSearch(OpenTaskSlot, v8) )
    {
      return 1i64;
    }
    else
    {
      TaskManager_ClearTask(v7);
      Com_Printf(14, "Couldn't allocate search task\n");
      return 0i64;
    }
  }
  else
  {
    Com_Printf(14, "Couldn't allocate task for searching\n");
    return 0i64;
  }
}

/*
==============
LiveStorage_CS_SearchComplete
==============
*/
taskCompleteResults LiveStorage_CS_SearchComplete(const int tasknum)
{
  overlappedTask *v1; 
  dwCSSearchTask *data; 
  taskCompleteResults result; 
  taskCompleteResults v4; 
  void (__fastcall *m_successCallback)(const int); 
  void (__fastcall *m_failureCallback)(const int, bdLobbyErrorCode); 

  v1 = &storageTasks.tasks[tasknum];
  if ( !v1->active && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage_contentserver.cpp", 1017, ASSERT_TYPE_ASSERT, "(task->active)", (const char *)&queryFormat, "task->active") )
    __debugbreak();
  if ( v1->type != 6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage_contentserver.cpp", 1018, ASSERT_TYPE_ASSERT, "(task->type == TASK_CS_SEARCH)", (const char *)&queryFormat, "task->type == TASK_CS_SEARCH") )
    __debugbreak();
  data = (dwCSSearchTask *)v1->data;
  result = dwCSSearchComplete(v1, data);
  v4 = result;
  if ( result == TASK_COMPLETE )
  {
    if ( data->m_resultFileCount )
      *data->m_resultFileCount = bdRemoteTask::getNumResults(v1->u.remoteTask.m_ptr);
    if ( data->m_resultTotalFileCount )
      *data->m_resultTotalFileCount = bdRemoteTask::getTotalNumResults(v1->u.remoteTask.m_ptr);
    m_successCallback = data->m_successCallback;
    if ( m_successCallback )
      m_successCallback(v1->controllerIndex);
  }
  else
  {
    if ( result != TASK_ERROR )
      return result;
    m_failureCallback = data->m_failureCallback;
    if ( m_failureCallback )
      m_failureCallback(v1->controllerIndex, data->m_error);
  }
  TaskManager_ClearTask(v1);
  return v4;
}

/*
==============
LiveStorage_CS_SetTags
==============
*/
__int64 LiveStorage_CS_SetTags(const int controllerIndex, contentServerSetTagsInfo *setTagsInfo)
{
  __int64 v2; 
  __int64 v4; 
  overlappedTask *OpenTaskSlot; 
  overlappedTask *v7; 
  dwCSTagTask *v8; 

  v2 = controllerIndex;
  if ( !setTagsInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage_contentserver.cpp", 1426, ASSERT_TYPE_ASSERT, "(setTagsInfo)", (const char *)&queryFormat, "setTagsInfo") )
    __debugbreak();
  if ( !g_CSSetTagTask && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage_contentserver.cpp", 1427, ASSERT_TYPE_ASSERT, "(g_CSSetTagTask)", (const char *)&queryFormat, "g_CSSetTagTask") )
    __debugbreak();
  if ( (unsigned int)v2 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage_contentserver.cpp", 1428, ASSERT_TYPE_ASSERT, "(controllerIndex >= 0 && controllerIndex < 8)", (const char *)&queryFormat, "controllerIndex >= 0 && controllerIndex < MAX_GPAD_COUNT") )
    __debugbreak();
  v4 = v2;
  if ( (s_ContentServerState[v2] & 4) == 0 || (s_ContentServerMemoryState & 0x301FFE) != 3153918 || !g_CSSetTagTask )
    return 0i64;
  if ( !LiveStorage_CheckConnection(v2) )
  {
    Com_Printf(14, "Not connected to live or Demonware(cont %i)\n", (unsigned int)v2);
    return 0i64;
  }
  if ( TaskManager_TaskIsInProgressForController(&storageTasks, 10, v2) )
  {
    Com_Printf(14, "Set tag task already in progress, earlying out (cont %i)\n", (unsigned int)v2);
    return 0i64;
  }
  OpenTaskSlot = TaskManager_GetOpenTaskSlot(&storageTasks, v2, 10);
  v7 = OpenTaskSlot;
  if ( OpenTaskSlot )
  {
    v8 = &g_CSSetTagTask[v4];
    v8->m_entityID = setTagsInfo->m_entityID;
    v8->m_numTags = setTagsInfo->m_numTags;
    v8->m_tags = setTagsInfo->m_tags;
    v8->m_successCallback = setTagsInfo->m_successCallback;
    v8->m_failureCallback = setTagsInfo->m_failureCallback;
    OpenTaskSlot->data = v8;
    if ( dwCSSetTags(OpenTaskSlot, v8) )
    {
      return 1i64;
    }
    else
    {
      TaskManager_ClearTask(v7);
      Com_Printf(14, "Could not create task for setting tags.\n");
      return 0i64;
    }
  }
  else
  {
    Com_Printf(14, "Couldn't allocate task for setting tags.\n");
    return 0i64;
  }
}

/*
==============
LiveStorage_CS_SetTagsComplete
==============
*/
taskCompleteResults LiveStorage_CS_SetTagsComplete(const int tasknum)
{
  overlappedTask *v1; 
  dwCSTagTask *data; 
  taskCompleteResults result; 
  taskCompleteResults v4; 
  void (__fastcall *m_successCallback)(const int); 
  void (__fastcall *m_failureCallback)(const int, bdLobbyErrorCode); 

  v1 = &storageTasks.tasks[tasknum];
  if ( !v1->active && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage_contentserver.cpp", 1484, ASSERT_TYPE_ASSERT, "(task->active)", (const char *)&queryFormat, "task->active") )
    __debugbreak();
  if ( v1->type != 10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage_contentserver.cpp", 1485, ASSERT_TYPE_ASSERT, "(task->type == TASK_CS_SETTAGS)", (const char *)&queryFormat, "task->type == TASK_CS_SETTAGS") )
    __debugbreak();
  data = (dwCSTagTask *)v1->data;
  result = dwCSSetTagsComplete(v1, data);
  v4 = result;
  if ( result == TASK_COMPLETE )
  {
    LiveStorage_CS_RefreshPrivateData(v1->controllerIndex);
    m_successCallback = data->m_successCallback;
    if ( m_successCallback )
      m_successCallback(v1->controllerIndex);
  }
  else
  {
    if ( result != TASK_ERROR )
      return result;
    m_failureCallback = data->m_failureCallback;
    if ( m_failureCallback )
      m_failureCallback(v1->controllerIndex, data->m_error);
  }
  TaskManager_ClearTask(v1);
  return v4;
}

/*
==============
LiveStorage_CS_Shutdown
==============
*/
void LiveStorage_CS_Shutdown(const int controllerIndex)
{
  int *v2; 
  Online_CachedContentStreamer *Instance; 
  DWServicesAccess *v4; 
  DWLobbyService *DWLobbyService; 

  v2 = &s_ContentServerState[controllerIndex];
  if ( *v2 != 1 )
  {
    if ( !Sys_IsMainThread() && !Sys_AreThreadsSuspended() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage_contentserver.cpp", 437, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread() || Sys_AreThreadsSuspended())", "%s\n\tTrying to perform DW shutdown from non main thread. This is a serious error.\n", "Sys_IsMainThread() || Sys_AreThreadsSuspended()") )
      __debugbreak();
    Com_DPrintf(25, "LiveStorage_CS_Shutdown( %d )\n", (unsigned int)controllerIndex);
    Instance = Online_CachedContentStreamer::GetInstance();
    Online_CachedContentStreamer::OnCSShutdown(Instance, controllerIndex);
    LiveStorage_CheckOngoingSessionTasks();
    LiveStorage_CS_CancelTasks(controllerIndex);
    v4 = DWServicesAccess::GetInstance();
    DWLobbyService = DWServicesAccess::GetDWLobbyService(v4, controllerIndex);
    DWLobbyService->pump(DWLobbyService);
    *v2 = 1;
  }
}

/*
==============
LiveStorage_CS_ShutdownAll
==============
*/
void LiveStorage_CS_ShutdownAll(void)
{
  int i; 

  for ( i = 0; i < 8; ++i )
    LiveStorage_CS_Shutdown(i);
  s_ContentServerMemoryState = 1;
  LiveStorage_CS_ClearCacheMemory();
  g_ContentServerPrimary = NULL;
  g_ContentServerSecondary = NULL;
  g_CSListTask = NULL;
  g_CSSearchTask = NULL;
  g_CSDescriptorsTask = NULL;
  g_CSReadFileTask = NULL;
  g_CSWriteFileTask = NULL;
  g_CSSetTagTask = NULL;
  g_CSRemoveFileTask = NULL;
  g_CSCopyFileTask = NULL;
  g_CSUploadSummaryTask = NULL;
  g_CSDownloadSummaryTask = NULL;
  g_CSListPublisherFilesTask = NULL;
  g_CSReadPublisherFileTask = NULL;
  g_AllocatedContentServerMemorySize = 0i64;
}

/*
==============
LiveStorage_CS_UploadSummaryMetadata
==============
*/
__int64 LiveStorage_CS_UploadSummaryMetadata(const int controllerIndex, contentServerUploadSummaryInfo *summaryInfo)
{
  __int64 v2; 
  __int64 v4; 
  overlappedTask *OpenTaskSlot; 
  overlappedTask *v7; 
  dwCSUploadSummaryTask *v8; 

  v2 = controllerIndex;
  if ( !summaryInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage_contentserver.cpp", 1605, ASSERT_TYPE_ASSERT, "(summaryInfo)", (const char *)&queryFormat, "summaryInfo") )
    __debugbreak();
  if ( !g_CSUploadSummaryTask && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage_contentserver.cpp", 1606, ASSERT_TYPE_ASSERT, "(g_CSUploadSummaryTask)", (const char *)&queryFormat, "g_CSUploadSummaryTask") )
    __debugbreak();
  if ( (unsigned int)v2 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage_contentserver.cpp", 1607, ASSERT_TYPE_ASSERT, "(controllerIndex >= 0 && controllerIndex < 8)", (const char *)&queryFormat, "controllerIndex >= 0 && controllerIndex < MAX_GPAD_COUNT") )
    __debugbreak();
  v4 = v2;
  if ( (s_ContentServerState[v2] & 4) == 0 || (s_ContentServerMemoryState & 0x301FFE) != 3153918 || !g_CSUploadSummaryTask )
    return 0i64;
  if ( !LiveStorage_CheckConnection(v2) )
  {
    Com_Printf(14, "Not connected to live or Demonware(cont %i)\n", (unsigned int)v2);
    return 0i64;
  }
  if ( TaskManager_TaskIsInProgressForController(&storageTasks, 12, v2) )
  {
    Com_Printf(14, "Set tag task already in progress, earlying out (cont %i)\n", (unsigned int)v2);
    return 0i64;
  }
  OpenTaskSlot = TaskManager_GetOpenTaskSlot(&storageTasks, v2, 12);
  v7 = OpenTaskSlot;
  if ( OpenTaskSlot )
  {
    v8 = &g_CSUploadSummaryTask[v4];
    v8->m_fileID = summaryInfo->m_fileID;
    v8->m_metaData = summaryInfo->m_metaData;
    v8->m_metaDataSize = summaryInfo->m_metaDataSize;
    v8->m_numTags = summaryInfo->m_numTags;
    v8->m_tags = summaryInfo->m_tags;
    v8->m_summaryData = summaryInfo->m_summaryData;
    v8->m_summaryDataSize = summaryInfo->m_summaryDataSize;
    v8->m_successCallback = summaryInfo->m_successCallback;
    v8->m_failureCallback = summaryInfo->m_failureCallback;
    OpenTaskSlot->data = v8;
    if ( dwCSUploadSummaryMetaData(OpenTaskSlot, v8) )
    {
      return 1i64;
    }
    else
    {
      TaskManager_ClearTask(v7);
      Com_Printf(14, "Could not create task for uploading summary metadata.\n");
      return 0i64;
    }
  }
  else
  {
    Com_Printf(14, "Couldn't allocate task for setting tags.\n");
    return 0i64;
  }
}

/*
==============
LiveStorage_CS_UploadSummaryMetadataComplete
==============
*/
taskCompleteResults LiveStorage_CS_UploadSummaryMetadataComplete(const int tasknum)
{
  overlappedTask *v1; 
  dwCSUploadSummaryTask *data; 
  taskCompleteResults result; 
  taskCompleteResults v4; 
  void (__fastcall *m_successCallback)(const int); 
  void (__fastcall *m_failureCallback)(const int, bdLobbyErrorCode); 

  v1 = &storageTasks.tasks[tasknum];
  if ( !v1->active && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage_contentserver.cpp", 1668, ASSERT_TYPE_ASSERT, "(task->active)", (const char *)&queryFormat, "task->active") )
    __debugbreak();
  if ( v1->type != 12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage_contentserver.cpp", 1669, ASSERT_TYPE_ASSERT, "(task->type == TASK_CS_UPLOADSUMMARY)", (const char *)&queryFormat, "task->type == TASK_CS_UPLOADSUMMARY") )
    __debugbreak();
  data = (dwCSUploadSummaryTask *)v1->data;
  result = dwCSUploadSummaryMetaDataComplete(v1, data);
  v4 = result;
  if ( result == TASK_COMPLETE )
  {
    m_successCallback = data->m_successCallback;
    if ( m_successCallback )
      m_successCallback(v1->controllerIndex);
  }
  else
  {
    if ( result != TASK_ERROR )
      return result;
    m_failureCallback = data->m_failureCallback;
    if ( m_failureCallback )
      m_failureCallback(v1->controllerIndex, data->m_error);
  }
  TaskManager_ClearTask(v1);
  return v4;
}

/*
==============
LiveStorage_CS_WriteFile
==============
*/
__int64 LiveStorage_CS_WriteFile(const int controllerIndex, contentServerWriteFileInfo *writeInfo)
{
  __int64 v3; 
  __int64 v4; 
  overlappedTask *OpenTaskSlot; 
  dwCSWriteFileTask *v7; 
  unsigned int (__fastcall *m_dataCallback)(void *, unsigned int, unsigned int); 

  v3 = controllerIndex;
  if ( !writeInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage_contentserver.cpp", 1304, ASSERT_TYPE_ASSERT, "(writeInfo)", (const char *)&queryFormat, "writeInfo", -2i64) )
    __debugbreak();
  if ( !g_CSWriteFileTask && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage_contentserver.cpp", 1305, ASSERT_TYPE_ASSERT, "(g_CSWriteFileTask)", (const char *)&queryFormat, "g_CSWriteFileTask") )
    __debugbreak();
  if ( (unsigned int)v3 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage_contentserver.cpp", 1306, ASSERT_TYPE_ASSERT, "(controllerIndex >= 0 && controllerIndex < 8)", (const char *)&queryFormat, "controllerIndex >= 0 && controllerIndex < MAX_GPAD_COUNT") )
    __debugbreak();
  if ( dword_14CDC13F4 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1772i64) )
  {
    j__Init_thread_header(&dword_14CDC13F4);
    if ( dword_14CDC13F4 == -1 )
    {
      bdUploadInterceptor::bdUploadInterceptor(&uploadInterceptor);
      uploadInterceptor.__vftable = (csUploadInterceptor_vtbl *)&csUploadInterceptor::`vftable';
      j_atexit(LiveStorage_CS_WriteFile_::_2_::_dynamic_atexit_destructor_for__uploadInterceptor__);
      j__Init_thread_footer(&dword_14CDC13F4);
    }
  }
  v4 = v3;
  if ( (s_ContentServerState[v3] & 4) == 0 || (s_ContentServerMemoryState & 0x301FFE) != 3153918 || !g_CSWriteFileTask )
    return 0i64;
  if ( !LiveStorage_CheckConnection(v3) )
  {
    Com_Printf(14, "Not connected to live or Demonware(cont %i)\n", (unsigned int)v3);
    return 0i64;
  }
  if ( TaskManager_TaskIsInProgressForController(&storageTasks, 9, v3) )
  {
    Com_Printf(14, "Write file task already in progress, earlying out (cont %i)\n", (unsigned int)v3);
    return 0i64;
  }
  OpenTaskSlot = TaskManager_GetOpenTaskSlot(&storageTasks, v3, 9);
  if ( !OpenTaskSlot )
  {
    Com_Printf(14, "Couldn't allocate task for storage file writing\n");
    return 0i64;
  }
  v7 = &g_CSWriteFileTask[v4];
  v7->m_fileSlot = writeInfo->m_fileSlot;
  v7->m_fileData = writeInfo->m_fileData;
  v7->m_fileSize = writeInfo->m_fileSize;
  v7->m_fileName = writeInfo->m_fileName;
  v7->m_category = writeInfo->m_category;
  v7->m_thumbData = writeInfo->m_thumbData;
  v7->m_thumbDataSize = writeInfo->m_thumbDataSize;
  v7->m_numTags = writeInfo->m_numTags;
  v7->m_tags = writeInfo->m_tags;
  v7->m_successCallback = writeInfo->m_successCallback;
  v7->m_failureCallback = writeInfo->m_failureCallback;
  uploadInterceptor.task = v7;
  uploadInterceptor.callback = LiveStorage_CS_WriteFileData;
  m_dataCallback = writeInfo->m_dataCallback;
  if ( m_dataCallback )
    v7->m_uploadHandler = &uploadInterceptor;
  else
    v7->m_uploadHandler = NULL;
  v7->m_dataCallback = m_dataCallback;
  OpenTaskSlot->data = v7;
  if ( !dwCSWriteFile(OpenTaskSlot, v7) )
  {
    TaskManager_ClearTask(OpenTaskSlot);
    Com_Printf(14, "Could not create task to write file to DW.\n");
    return 0i64;
  }
  return 1i64;
}

/*
==============
LiveStorage_CS_WriteFileComplete
==============
*/
taskCompleteResults LiveStorage_CS_WriteFileComplete(const int tasknum)
{
  overlappedTask *v1; 
  dwCSWriteFileTask *data; 
  taskCompleteResults result; 
  taskCompleteResults v4; 
  int HTTPError; 
  void (__fastcall *m_successCallback)(const int, unsigned __int64); 
  void (__fastcall *m_failureCallback)(const int, bdLobbyErrorCode); 

  v1 = &storageTasks.tasks[tasknum];
  if ( !v1->active && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage_contentserver.cpp", 1384, ASSERT_TYPE_ASSERT, "(task->active)", (const char *)&queryFormat, "task->active") )
    __debugbreak();
  if ( v1->type != 9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage_contentserver.cpp", 1385, ASSERT_TYPE_ASSERT, "(task->type == TASK_CS_WRITEFILE)", (const char *)&queryFormat, "task->type == TASK_CS_WRITEFILE") )
    __debugbreak();
  data = (dwCSWriteFileTask *)v1->data;
  result = dwCSWriteFileComplete(v1, data);
  v4 = result;
  if ( result == TASK_COMPLETE )
  {
    HTTPError = dwCSGetLastHTTPError(v1->controllerIndex);
    if ( !HTTPError || (unsigned int)(HTTPError - 200) <= 0x63 )
    {
      m_successCallback = data->m_successCallback;
      if ( m_successCallback )
        m_successCallback(v1->controllerIndex, *(_QWORD *)data->m_outFileID._bytes_20);
      TaskManager_ClearTask(v1);
      return v4;
    }
  }
  else if ( result != TASK_ERROR )
  {
    return result;
  }
  m_failureCallback = data->m_failureCallback;
  if ( m_failureCallback )
    m_failureCallback(v1->controllerIndex, data->m_error);
  TaskManager_ClearTask(v1);
  Com_Printf(14, "Write to DW task failed.\n");
  return v4;
}

/*
==============
LiveStorage_CS_WriteFileData
==============
*/
__int64 LiveStorage_CS_WriteFileData(void *data, unsigned int dataSize, unsigned int bytesUploaded, dwCSWriteFileTask *fileTask)
{
  if ( !fileTask && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage_contentserver.cpp", 1296, ASSERT_TYPE_ASSERT, "(fileTask)", (const char *)&queryFormat, "fileTask") )
    __debugbreak();
  if ( !fileTask->m_dataCallback && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage_contentserver.cpp", 1297, ASSERT_TYPE_ASSERT, "(fileTask->m_dataCallback)", (const char *)&queryFormat, "fileTask->m_dataCallback") )
    __debugbreak();
  return ((__int64 (__fastcall *)(void *, _QWORD, _QWORD))fileTask->m_dataCallback)(data, dataSize, bytesUploaded);
}

/*
==============
csDownloadInterceptor::handleDownload
==============
*/
__int64 csDownloadInterceptor::handleDownload(csDownloadInterceptor *this, void *data, unsigned int dataSize)
{
  return ((__int64 (__fastcall *)(void *, _QWORD, dwCSReadFileTask *))this->callback)(data, dataSize, this->task);
}

/*
==============
csReadPublisherFileInterceptor::handleDownload
==============
*/
__int64 csReadPublisherFileInterceptor::handleDownload(csReadPublisherFileInterceptor *this, void *data, unsigned int dataSize)
{
  return ((__int64 (__fastcall *)(void *, _QWORD, dwCSReadPublisherFileTask *))this->callback)(data, dataSize, this->task);
}

/*
==============
csUploadInterceptor::handleUpload
==============
*/
__int64 csUploadInterceptor::handleUpload(csUploadInterceptor *this, void *data, unsigned int dataSize, unsigned int bytesUploaded)
{
  return ((__int64 (__fastcall *)(void *, _QWORD, _QWORD, dwCSWriteFileTask *))this->callback)(data, dataSize, bytesUploaded, this->task);
}

