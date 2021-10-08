/*
==============
dwGetPublisherVariablesIterator
==============
*/

int __fastcall dwGetPublisherVariablesIterator(const int controllerIndex, const char *const nameSpace, bdPublisherVariablesIterator *iterator)
{
  return ?dwGetPublisherVariablesIterator@@YAHHQEBDAEAVbdPublisherVariablesIterator@@@Z(controllerIndex, nameSpace, iterator);
}

/*
==============
dwFetchUserFiles
==============
*/

unsigned int __fastcall dwFetchUserFiles(TaskCreateRequest *request, dwMultiFileTask *const fileTask)
{
  return ?dwFetchUserFiles@@YAIPEAVTaskCreateRequest@@QEAUdwMultiFileTask@@@Z(request, fileTask);
}

/*
==============
dwCSDownloadSummaryData
==============
*/

int __fastcall dwCSDownloadSummaryData(overlappedTask *const task, dwCSDownloadSummaryTask *const summaryTask)
{
  return ?dwCSDownloadSummaryData@@YAHQEAUoverlappedTask@@QEAUdwCSDownloadSummaryTask@@@Z(task, summaryTask);
}

/*
==============
dwFetchFileComplete
==============
*/

taskCompleteResults __fastcall dwFetchFileComplete(overlappedTask *const task, dwMultiFileTask *const fileTask)
{
  return ?dwFetchFileComplete@@YA?AW4taskCompleteResults@@QEAUoverlappedTask@@QEAUdwMultiFileTask@@@Z(task, fileTask);
}

/*
==============
dwCSRemoveFile
==============
*/

int __fastcall dwCSRemoveFile(overlappedTask *const task, dwCSRemoveFileTask *const fsTask)
{
  return ?dwCSRemoveFile@@YAHQEAUoverlappedTask@@QEAUdwCSRemoveFileTask@@@Z(task, fsTask);
}

/*
==============
dwRetrievePublisherVariables
==============
*/

int __fastcall dwRetrievePublisherVariables(TaskCreateRequest *request, const char *const nameSpace)
{
  return ?dwRetrievePublisherVariables@@YAHPEAVTaskCreateRequest@@QEBD@Z(request, nameSpace);
}

/*
==============
dwFetchUserFile
==============
*/

int __fastcall dwFetchUserFile(overlappedTask *const task, dwMultiFileTask *const fileTask)
{
  return ?dwFetchUserFile@@YAHQEAUoverlappedTask@@QEAUdwMultiFileTask@@@Z(task, fileTask);
}

/*
==============
dwListPublisherObjectsByCategory
==============
*/

int __fastcall dwListPublisherObjectsByCategory(TaskCreateRequest *taskRequest, bdObjectStoreListPublisherObjectsByCategoryRequest *request, bdObjectStoreListPublisherObjectsByCategoryResponse *response)
{
  return ?dwListPublisherObjectsByCategory@@YAHPEAVTaskCreateRequest@@PEAVbdObjectStoreListPublisherObjectsByCategoryRequest@@PEAVbdObjectStoreListPublisherObjectsByCategoryResponse@@@Z(taskRequest, request, response);
}

/*
==============
dwCSSearch
==============
*/

int __fastcall dwCSSearch(overlappedTask *const task, dwCSSearchTask *const searchTask)
{
  return ?dwCSSearch@@YAHQEAUoverlappedTask@@QEAUdwCSSearchTask@@@Z(task, searchTask);
}

/*
==============
dwMultiFileTask::SetContext
==============
*/

bool __fastcall dwMultiFileTask::SetContext(dwMultiFileTask *this, const char *context)
{
  return ?SetContext@dwMultiFileTask@@QEAA_NPEBD@Z(this, context);
}

/*
==============
dwCSWriteFileComplete
==============
*/

taskCompleteResults __fastcall dwCSWriteFileComplete(overlappedTask *const task, dwCSWriteFileTask *const writeTask)
{
  return ?dwCSWriteFileComplete@@YA?AW4taskCompleteResults@@QEAUoverlappedTask@@QEAUdwCSWriteFileTask@@@Z(task, writeTask);
}

/*
==============
dwFetchFileInfo
==============
*/

int __fastcall dwFetchFileInfo(overlappedTask *const task, dwMultiFileTask *const fileTask)
{
  return ?dwFetchFileInfo@@YAHQEAUoverlappedTask@@QEAUdwMultiFileTask@@@Z(task, fileTask);
}

/*
==============
dwCSGetListingComplete
==============
*/

taskCompleteResults __fastcall dwCSGetListingComplete(overlappedTask *const task, dwCSListTask *const fsTask)
{
  return ?dwCSGetListingComplete@@YA?AW4taskCompleteResults@@QEAUoverlappedTask@@QEAUdwCSListTask@@@Z(task, fsTask);
}

/*
==============
dwUpdateFiles
==============
*/

unsigned int __fastcall dwUpdateFiles(TaskCreateRequest *request, dwMultiFileTask *const fileTask)
{
  return ?dwUpdateFiles@@YAIPEAVTaskCreateRequest@@QEAUdwMultiFileTask@@@Z(request, fileTask);
}

/*
==============
dwFetchPublisherFile
==============
*/

int __fastcall dwFetchPublisherFile(overlappedTask *const task, dwMultiFileTask *const fileTask)
{
  return ?dwFetchPublisherFile@@YAHQEAUoverlappedTask@@QEAUdwMultiFileTask@@@Z(task, fileTask);
}

/*
==============
dwUpdateAndValidateFiles
==============
*/

unsigned int __fastcall dwUpdateAndValidateFiles(TaskCreateRequest *request, dwMultiFileTask *const fileTask)
{
  return ?dwUpdateAndValidateFiles@@YAIPEAVTaskCreateRequest@@QEAUdwMultiFileTask@@@Z(request, fileTask);
}

/*
==============
dwPublisherVariableSubscribeToGroup
==============
*/

int __fastcall dwPublisherVariableSubscribeToGroup(TaskCreateRequest *request, unsigned int group)
{
  return ?dwPublisherVariableSubscribeToGroup@@YAHPEAVTaskCreateRequest@@I@Z(request, group);
}

/*
==============
dwUpdateFile
==============
*/

int __fastcall dwUpdateFile(overlappedTask *const task, dwMultiFileTask *const fileTask, void *data, const unsigned int dataSize)
{
  return ?dwUpdateFile@@YAHQEAUoverlappedTask@@QEAUdwMultiFileTask@@PEAXI@Z(task, fileTask, data, dataSize);
}

/*
==============
dwCreateFile
==============
*/

int __fastcall dwCreateFile(overlappedTask *const task, dwMultiFileTask *const fileTask, void *data, const unsigned int dataSize)
{
  return ?dwCreateFile@@YAHQEAUoverlappedTask@@QEAUdwMultiFileTask@@PEAXI@Z(task, fileTask, data, dataSize);
}

/*
==============
dwListUserObjectsByCategory
==============
*/

int __fastcall dwListUserObjectsByCategory(TaskCreateRequest *taskRequest, bdObjectStoreListUserObjectsByCategoryRequest *request, bdObjectStoreListUserObjectsByCategoryResponse *response)
{
  return ?dwListUserObjectsByCategory@@YAHPEAVTaskCreateRequest@@PEAVbdObjectStoreListUserObjectsByCategoryRequest@@PEAVbdObjectStoreListUserObjectsByCategoryResponse@@@Z(taskRequest, request, response);
}

/*
==============
dwDeleteFileComplete
==============
*/

taskCompleteResults __fastcall dwDeleteFileComplete(overlappedTask *const task, const char *context)
{
  return ?dwDeleteFileComplete@@YA?AW4taskCompleteResults@@QEAUoverlappedTask@@PEBD@Z(task, context);
}

/*
==============
dwCSWriteFile
==============
*/

int __fastcall dwCSWriteFile(overlappedTask *const task, dwCSWriteFileTask *const writeTask)
{
  return ?dwCSWriteFile@@YAHQEAUoverlappedTask@@QEAUdwCSWriteFileTask@@@Z(task, writeTask);
}

/*
==============
dwGetPublisherObjects
==============
*/

int __fastcall dwGetPublisherObjects(TaskCreateRequest *taskRequest, bdObjectStoreGetPublisherObjectsRequest *request, bdObjectStoreGetPublisherObjectsResponse *response)
{
  return ?dwGetPublisherObjects@@YAHPEAVTaskCreateRequest@@PEAVbdObjectStoreGetPublisherObjectsRequest@@PEAVbdObjectStoreGetPublisherObjectsResponse@@@Z(taskRequest, request, response);
}

/*
==============
dwCSReadFile
==============
*/

int __fastcall dwCSReadFile(overlappedTask *const task, dwCSReadFileTask *const readTask)
{
  return ?dwCSReadFile@@YAHQEAUoverlappedTask@@QEAUdwCSReadFileTask@@@Z(task, readTask);
}

/*
==============
dwDeleteFile
==============
*/

int __fastcall dwDeleteFile(overlappedTask *const task, const char *const filename, const char *context, const bdUserAccountID *userId)
{
  return ?dwDeleteFile@@YAHQEAUoverlappedTask@@QEBDPEBDAEBVbdUserAccountID@@@Z(task, filename, context, userId);
}

/*
==============
dwGetUserObjectsVectorized
==============
*/

int __fastcall dwGetUserObjectsVectorized(TaskCreateRequest *taskRequest, const bdObjectStoreGetUserObjectsVectorizedRequest *request, bdObjectStoreGetUserObjectsVectorizedResponse *response)
{
  return ?dwGetUserObjectsVectorized@@YAHPEAVTaskCreateRequest@@PEBVbdObjectStoreGetUserObjectsVectorizedRequest@@PEAVbdObjectStoreGetUserObjectsVectorizedResponse@@@Z(taskRequest, request, response);
}

/*
==============
dwFetchFileInfoComplete
==============
*/

taskCompleteResults __fastcall dwFetchFileInfoComplete(overlappedTask *const task, dwMultiFileTask *const fileTask)
{
  return ?dwFetchFileInfoComplete@@YA?AW4taskCompleteResults@@QEAUoverlappedTask@@QEAUdwMultiFileTask@@@Z(task, fileTask);
}

/*
==============
dwCSAbortOperation
==============
*/

int __fastcall dwCSAbortOperation(const int controllerIndex)
{
  return ?dwCSAbortOperation@@YAHH@Z(controllerIndex);
}

/*
==============
dwCreateFileComplete
==============
*/

taskCompleteResults __fastcall dwCreateFileComplete(overlappedTask *const task, dwMultiFileTask *const fileTask)
{
  return ?dwCreateFileComplete@@YA?AW4taskCompleteResults@@QEAUoverlappedTask@@QEAUdwMultiFileTask@@@Z(task, fileTask);
}

/*
==============
dwCSSetTagsComplete
==============
*/

taskCompleteResults __fastcall dwCSSetTagsComplete(overlappedTask *const task, dwCSTagTask *const tagTask)
{
  return ?dwCSSetTagsComplete@@YA?AW4taskCompleteResults@@QEAUoverlappedTask@@QEAUdwCSTagTask@@@Z(task, tagTask);
}

/*
==============
dwCSGetListing
==============
*/

int __fastcall dwCSGetListing(overlappedTask *const task, dwCSListTask *const fsTask)
{
  return ?dwCSGetListing@@YAHQEAUoverlappedTask@@QEAUdwCSListTask@@@Z(task, fsTask);
}

/*
==============
dwCSCopyFromUserStorageComplete
==============
*/

taskCompleteResults __fastcall dwCSCopyFromUserStorageComplete(overlappedTask *const task, dwCSCopyFileTask *const copyTask)
{
  return ?dwCSCopyFromUserStorageComplete@@YA?AW4taskCompleteResults@@QEAUoverlappedTask@@QEAUdwCSCopyFileTask@@@Z(task, copyTask);
}

/*
==============
dwCSReadFileComplete
==============
*/

taskCompleteResults __fastcall dwCSReadFileComplete(overlappedTask *const task, dwCSReadFileTask *const readTask)
{
  return ?dwCSReadFileComplete@@YA?AW4taskCompleteResults@@QEAUoverlappedTask@@QEAUdwCSReadFileTask@@@Z(task, readTask);
}

/*
==============
dwCSGetDescriptors
==============
*/

int __fastcall dwCSGetDescriptors(overlappedTask *const task, dwCSDescriptorsTask *const descTask)
{
  return ?dwCSGetDescriptors@@YAHQEAUoverlappedTask@@QEAUdwCSDescriptorsTask@@@Z(task, descTask);
}

/*
==============
dwCSListPublisherFilesComplete
==============
*/

taskCompleteResults __fastcall dwCSListPublisherFilesComplete(overlappedTask *const task, dwCSListPublisherFilesTask *listTask)
{
  return ?dwCSListPublisherFilesComplete@@YA?AW4taskCompleteResults@@QEAUoverlappedTask@@PEAUdwCSListPublisherFilesTask@@@Z(task, listTask);
}

/*
==============
dwGetPublisherVariableKeyValueByIterator
==============
*/

int __fastcall dwGetPublisherVariableKeyValueByIterator(const int controllerIndex, bdPublisherVariablesIterator *iterator, char *const key, unsigned int keySize, char *const value, unsigned int valueSize)
{
  return ?dwGetPublisherVariableKeyValueByIterator@@YAHHAEAVbdPublisherVariablesIterator@@QEADI1I@Z(controllerIndex, iterator, key, keySize, value, valueSize);
}

/*
==============
dwCSListPublisherFiles
==============
*/

int __fastcall dwCSListPublisherFiles(overlappedTask *const task, dwCSListPublisherFilesTask *const listTask)
{
  return ?dwCSListPublisherFiles@@YAHQEAUoverlappedTask@@QEAUdwCSListPublisherFilesTask@@@Z(task, listTask);
}

/*
==============
dwCSSetTags
==============
*/

int __fastcall dwCSSetTags(overlappedTask *const task, dwCSTagTask *const tagTask)
{
  return ?dwCSSetTags@@YAHQEAUoverlappedTask@@QEAUdwCSTagTask@@@Z(task, tagTask);
}

/*
==============
dwUpdateFileComplete
==============
*/

taskCompleteResults __fastcall dwUpdateFileComplete(overlappedTask *const task, dwMultiFileTask *fileTask)
{
  return ?dwUpdateFileComplete@@YA?AW4taskCompleteResults@@QEAUoverlappedTask@@PEAUdwMultiFileTask@@@Z(task, fileTask);
}

/*
==============
dwGetPublisherVariable
==============
*/

int __fastcall dwGetPublisherVariable(const int controllerIndex, const char *const nameSpace, const char *const name, char *const value, int size)
{
  return ?dwGetPublisherVariable@@YAHHQEBD0QEADH@Z(controllerIndex, nameSpace, name, value, size);
}

/*
==============
dwUploadUserObjectsVectorized
==============
*/

int __fastcall dwUploadUserObjectsVectorized(TaskCreateRequest *taskRequest, const bdObjectStoreUploadUserObjectsVectorizedRequest *request, bdObjectStoreUploadUserObjectsVectorizedResponse *response)
{
  return ?dwUploadUserObjectsVectorized@@YAHPEAVTaskCreateRequest@@PEBVbdObjectStoreUploadUserObjectsVectorizedRequest@@PEAVbdObjectStoreUploadUserObjectsVectorizedResponse@@@Z(taskRequest, request, response);
}

/*
==============
dwStorageHandleTaskError
==============
*/

taskCompleteResults __fastcall dwStorageHandleTaskError(overlappedTask *const task, bdLobbyErrorCode errorCode)
{
  return ?dwStorageHandleTaskError@@YA?AW4taskCompleteResults@@QEAUoverlappedTask@@W4bdLobbyErrorCode@@@Z(task, errorCode);
}

/*
==============
dwCSGetDescriptorsComplete
==============
*/

taskCompleteResults __fastcall dwCSGetDescriptorsComplete(overlappedTask *const task, dwCSDescriptorsTask *const descTask)
{
  return ?dwCSGetDescriptorsComplete@@YA?AW4taskCompleteResults@@QEAUoverlappedTask@@QEAUdwCSDescriptorsTask@@@Z(task, descTask);
}

/*
==============
dwCSUploadSummaryMetaData
==============
*/

int __fastcall dwCSUploadSummaryMetaData(overlappedTask *const task, dwCSUploadSummaryTask *const summaryTask)
{
  return ?dwCSUploadSummaryMetaData@@YAHQEAUoverlappedTask@@QEAUdwCSUploadSummaryTask@@@Z(task, summaryTask);
}

/*
==============
dwCSDownloadSummaryComplete
==============
*/

taskCompleteResults __fastcall dwCSDownloadSummaryComplete(overlappedTask *const task, dwCSDownloadSummaryTask *const summaryTask)
{
  return ?dwCSDownloadSummaryComplete@@YA?AW4taskCompleteResults@@QEAUoverlappedTask@@QEAUdwCSDownloadSummaryTask@@@Z(task, summaryTask);
}

/*
==============
dwCSReadPublisherFile
==============
*/

int __fastcall dwCSReadPublisherFile(overlappedTask *const task, dwCSReadPublisherFileTask *const downloadTask)
{
  return ?dwCSReadPublisherFile@@YAHQEAUoverlappedTask@@QEAUdwCSReadPublisherFileTask@@@Z(task, downloadTask);
}

/*
==============
dwCSReadPublisherFileComplete
==============
*/

taskCompleteResults __fastcall dwCSReadPublisherFileComplete(overlappedTask *const task, dwCSReadPublisherFileTask *const downloadTask)
{
  return ?dwCSReadPublisherFileComplete@@YA?AW4taskCompleteResults@@QEAUoverlappedTask@@QEAUdwCSReadPublisherFileTask@@@Z(task, downloadTask);
}

/*
==============
dwCSUploadSummaryMetaDataComplete
==============
*/

taskCompleteResults __fastcall dwCSUploadSummaryMetaDataComplete(overlappedTask *const task, dwCSUploadSummaryTask *const summaryTask)
{
  return ?dwCSUploadSummaryMetaDataComplete@@YA?AW4taskCompleteResults@@QEAUoverlappedTask@@QEAUdwCSUploadSummaryTask@@@Z(task, summaryTask);
}

/*
==============
dwCSCopyFromUserStorage
==============
*/

int __fastcall dwCSCopyFromUserStorage(overlappedTask *const task, dwCSCopyFileTask *const copyTask)
{
  return ?dwCSCopyFromUserStorage@@YAHQEAUoverlappedTask@@QEAUdwCSCopyFileTask@@@Z(task, copyTask);
}

/*
==============
dwCSRemoveFileComplete
==============
*/

taskCompleteResults __fastcall dwCSRemoveFileComplete(overlappedTask *const task, dwCSRemoveFileTask *const fsTask)
{
  return ?dwCSRemoveFileComplete@@YA?AW4taskCompleteResults@@QEAUoverlappedTask@@QEAUdwCSRemoveFileTask@@@Z(task, fsTask);
}

/*
==============
dwRetrievePublisherVariables
==============
*/

int __fastcall dwRetrievePublisherVariables(TaskCreateRequest *request, const char *const *nameSpaces, const unsigned __int16 numNameSpaces)
{
  return ?dwRetrievePublisherVariables@@YAHPEAVTaskCreateRequest@@QEBQEBDG@Z(request, nameSpaces, numNameSpaces);
}

/*
==============
dwFetchFileInfoPersonalStorage
==============
*/

int __fastcall dwFetchFileInfoPersonalStorage(overlappedTask *const task, dwMultiFileTask *const fileTask)
{
  return ?dwFetchFileInfoPersonalStorage@@YAHQEAUoverlappedTask@@QEAUdwMultiFileTask@@@Z(task, fileTask);
}

/*
==============
dwCSGetProgress
==============
*/

int __fastcall dwCSGetProgress(const int controllerIndex, unsigned int *bytes, float *dataRate)
{
  return ?dwCSGetProgress@@YAHHPEAIPEAM@Z(controllerIndex, bytes, dataRate);
}

/*
==============
dwCSSearchComplete
==============
*/

taskCompleteResults __fastcall dwCSSearchComplete(overlappedTask *const task, dwCSSearchTask *const searchTask)
{
  return ?dwCSSearchComplete@@YA?AW4taskCompleteResults@@QEAUoverlappedTask@@QEAUdwCSSearchTask@@@Z(task, searchTask);
}

/*
==============
dwCSGetLastHTTPError
==============
*/

int __fastcall dwCSGetLastHTTPError(const int controllerIndex)
{
  return ?dwCSGetLastHTTPError@@YAHH@Z(controllerIndex);
}

/*
==============
dwGetPublisherObjectMetadatas
==============
*/

int __fastcall dwGetPublisherObjectMetadatas(TaskCreateRequest *taskRequest, bdObjectStoreGetPublisherObjectsRequest *request, bdObjectStoreGetPublisherObjectMetadatasResponse *response)
{
  return ?dwGetPublisherObjectMetadatas@@YAHPEAVTaskCreateRequest@@PEAVbdObjectStoreGetPublisherObjectsRequest@@PEAVbdObjectStoreGetPublisherObjectMetadatasResponse@@@Z(taskRequest, request, response);
}

/*
==============
dwMultiFileTask::SetContext
==============
*/
char dwMultiFileTask::SetContext(dwMultiFileTask *this, const char *context)
{
  Core_strcpy(this->m_context, 0x10ui64, context);
  return 1;
}

/*
==============
dwCSAbortOperation
==============
*/
__int64 dwCSAbortOperation(const int controllerIndex)
{
  DWServicesAccess *Instance; 
  DWServicesAccess *v3; 
  DWContentStreaming *ContentStreaming; 

  Instance = DWServicesAccess::GetInstance();
  if ( DWServicesAccess::isReady(Instance, controllerIndex) )
  {
    v3 = DWServicesAccess::GetInstance();
    ContentStreaming = DWServicesAccess::GetContentStreaming(v3, controllerIndex);
    DWContentStreaming::abortHTTPOperation(ContentStreaming, 0);
    return 1i64;
  }
  else
  {
    Com_PrintError(25, "Error aborting HTTP operation. No handle to content server storage.\n");
    return 0i64;
  }
}

/*
==============
dwCSCopyFromUserStorage
==============
*/
__int64 dwCSCopyFromUserStorage(overlappedTask *const task, dwCSCopyFileTask *const copyTask)
{
  DWServicesAccess *Instance; 
  DWServicesAccess *v6; 
  DWContentStreaming *ContentStreaming; 
  bdRemoteTask *m_ptr; 
  unsigned int v9; 
  overlappedTask::taskShim *p_u; 
  bdReference<bdRemoteTask> result; 

  if ( !task && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwstorage.cpp", 1176, ASSERT_TYPE_ASSERT, "(task)", (const char *)&queryFormat, "task") )
    __debugbreak();
  if ( !copyTask && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwstorage.cpp", 1177, ASSERT_TYPE_ASSERT, "(copyTask)", (const char *)&queryFormat, "copyTask") )
    __debugbreak();
  Instance = DWServicesAccess::GetInstance();
  if ( DWServicesAccess::isReady(Instance, task->controllerIndex) )
  {
    v6 = DWServicesAccess::GetInstance();
    ContentStreaming = DWServicesAccess::GetContentStreaming(v6, task->controllerIndex);
    DWContentStreaming::copyFromUserStorage(ContentStreaming, &result, copyTask->m_userFileID, copyTask->m_fileSlot, copyTask->m_fileName, copyTask->m_category, copyTask->m_metaData, copyTask->m_metaDataSize, copyTask->m_numTags, copyTask->m_tags, copyTask->m_outFileID);
    m_ptr = result.m_ptr;
    if ( result.m_ptr )
    {
      p_u = &task->u;
      if ( &result != (bdReference<bdRemoteTask> *)p_u )
      {
        if ( p_u->remoteTask.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&p_u->remoteTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && p_u->remoteTask.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))p_u->remoteTask.m_ptr->~bdReferencable)(p_u->remoteTask.m_ptr, 1i64);
          m_ptr = result.m_ptr;
        }
        p_u->remoteTask.m_ptr = m_ptr;
        if ( m_ptr )
        {
          _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
          m_ptr = result.m_ptr;
        }
      }
      v9 = 1;
    }
    else
    {
      dwStorageHandleTaskError(task, BD_START_TASK_FAILED);
      v9 = 0;
      m_ptr = result.m_ptr;
    }
    if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
    {
      if ( result.m_ptr )
        ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
    }
    return v9;
  }
  else
  {
    dwStorageHandleTaskError(task, BD_NOT_CONNECTED);
    return 0i64;
  }
}

/*
==============
dwCSCopyFromUserStorageComplete
==============
*/
taskCompleteResults dwCSCopyFromUserStorageComplete(overlappedTask *const task, dwCSCopyFileTask *const copyTask)
{
  DWServicesAccess *Instance; 
  DWServicesAccess *v6; 
  DWLobbyService *DWLobbyService; 
  bdTask::bdStatus v8; 
  bdLobbyErrorCode ErrorCode; 

  if ( !task && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwstorage.cpp", 1207, ASSERT_TYPE_ASSERT, "(task)", (const char *)&queryFormat, "task") )
    __debugbreak();
  if ( !copyTask && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwstorage.cpp", 1208, ASSERT_TYPE_ASSERT, "(copyTask)", (const char *)&queryFormat, "copyTask") )
    __debugbreak();
  if ( task->u.remoteTask.m_ptr )
  {
    Instance = DWServicesAccess::GetInstance();
    if ( DWServicesAccess::isReady(Instance, task->controllerIndex) )
    {
      v6 = DWServicesAccess::GetInstance();
      DWLobbyService = DWServicesAccess::GetDWLobbyService(v6, task->controllerIndex);
      DWLobbyService->pump(DWLobbyService);
      v8 = task->u.remoteTask.m_ptr->getStatus(task->u.remoteTask.m_ptr);
      ErrorCode = bdRemoteTask::getErrorCode(task->u.remoteTask.m_ptr);
      copyTask->m_error = ErrorCode;
      return dwTaskStatusConvert(v8, ErrorCode);
    }
    else
    {
      return dwStorageHandleTaskError(task, BD_NOT_CONNECTED);
    }
  }
  else
  {
    Com_Printf(25, "Failed to copy file from another user's storage area.\n");
    dwStorageHandleTaskError(task, BD_HANDLE_TASK_FAILED);
    return 2;
  }
}

/*
==============
dwCSDownloadSummaryComplete
==============
*/
taskCompleteResults dwCSDownloadSummaryComplete(overlappedTask *const task, dwCSDownloadSummaryTask *const summaryTask)
{
  DWServicesAccess *Instance; 
  DWServicesAccess *v6; 
  DWLobbyService *DWLobbyService; 
  bdTask::bdStatus v8; 
  bdLobbyErrorCode ErrorCode; 

  if ( !task && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwstorage.cpp", 1323, ASSERT_TYPE_ASSERT, "(task)", (const char *)&queryFormat, "task") )
    __debugbreak();
  if ( !summaryTask && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwstorage.cpp", 1324, ASSERT_TYPE_ASSERT, "(summaryTask)", (const char *)&queryFormat, "summaryTask") )
    __debugbreak();
  if ( task->u.remoteTask.m_ptr )
  {
    Instance = DWServicesAccess::GetInstance();
    if ( DWServicesAccess::isReady(Instance, task->controllerIndex) )
    {
      v6 = DWServicesAccess::GetInstance();
      DWLobbyService = DWServicesAccess::GetDWLobbyService(v6, task->controllerIndex);
      DWLobbyService->pump(DWLobbyService);
      v8 = task->u.remoteTask.m_ptr->getStatus(task->u.remoteTask.m_ptr);
      ErrorCode = bdRemoteTask::getErrorCode(task->u.remoteTask.m_ptr);
      summaryTask->m_error = ErrorCode;
      return dwTaskStatusConvert(v8, ErrorCode);
    }
    else
    {
      return dwStorageHandleTaskError(task, BD_NOT_CONNECTED);
    }
  }
  else
  {
    Com_Printf(25, "Failed to upload summary and meta data.\n");
    dwStorageHandleTaskError(task, BD_HANDLE_TASK_FAILED);
    return 2;
  }
}

/*
==============
dwCSDownloadSummaryData
==============
*/
__int64 dwCSDownloadSummaryData(overlappedTask *const task, dwCSDownloadSummaryTask *const summaryTask)
{
  DWServicesAccess *Instance; 
  DWServicesAccess *v6; 
  DWContentStreaming *ContentStreaming; 
  unsigned int v8; 
  bdRemoteTask *m_ptr; 
  overlappedTask::taskShim *p_u; 
  bdReference<bdRemoteTask> result; 

  if ( !task && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwstorage.cpp", 1297, ASSERT_TYPE_ASSERT, "(task)", (const char *)&queryFormat, "task") )
    __debugbreak();
  if ( !summaryTask && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwstorage.cpp", 1298, ASSERT_TYPE_ASSERT, "(summaryTask)", (const char *)&queryFormat, "summaryTask") )
    __debugbreak();
  Instance = DWServicesAccess::GetInstance();
  if ( DWServicesAccess::isReady(Instance, task->controllerIndex) )
  {
    v6 = DWServicesAccess::GetInstance();
    ContentStreaming = DWServicesAccess::GetContentStreaming(v6, task->controllerIndex);
    v8 = 0;
    DWContentStreaming::downloadUserSummary(ContentStreaming, &result, summaryTask->m_fileID, summaryTask->m_summaryData, summaryTask->m_summaryDataSize, 0, 0);
    m_ptr = result.m_ptr;
    if ( result.m_ptr )
    {
      p_u = &task->u;
      if ( &result != (bdReference<bdRemoteTask> *)p_u )
      {
        if ( p_u->remoteTask.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&p_u->remoteTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && p_u->remoteTask.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))p_u->remoteTask.m_ptr->~bdReferencable)(p_u->remoteTask.m_ptr, 1i64);
          m_ptr = result.m_ptr;
        }
        p_u->remoteTask.m_ptr = m_ptr;
        if ( m_ptr )
        {
          _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
          m_ptr = result.m_ptr;
        }
      }
      v8 = 1;
    }
    else
    {
      dwStorageHandleTaskError(task, BD_START_TASK_FAILED);
      m_ptr = result.m_ptr;
    }
    if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
    {
      if ( result.m_ptr )
        ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
    }
    return v8;
  }
  else
  {
    dwStorageHandleTaskError(task, BD_NOT_CONNECTED);
    return 0i64;
  }
}

/*
==============
dwCSGetDescriptors
==============
*/
__int64 dwCSGetDescriptors(overlappedTask *const task, dwCSDescriptorsTask *const descTask)
{
  DWServicesAccess *Instance; 
  unsigned int m_numFiles; 
  unsigned __int64 *v7; 
  _BYTE *bytes_20; 
  __int64 v9; 
  DWServicesAccess *v10; 
  DWContentStreaming *ContentStreaming; 
  bdRemoteTask *m_ptr; 
  unsigned int v13; 
  overlappedTask::taskShim *p_u; 
  bdReference<bdRemoteTask> result; 
  __int64 v16; 
  unsigned __int64 fileIDs[20]; 

  v16 = -2i64;
  if ( !task && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwstorage.cpp", 783, ASSERT_TYPE_ASSERT, "(task)", (const char *)&queryFormat, "task") )
    __debugbreak();
  if ( !descTask && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwstorage.cpp", 784, ASSERT_TYPE_ASSERT, "(descTask)", (const char *)&queryFormat, "descTask") )
    __debugbreak();
  if ( !descTask->m_descriptors && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwstorage.cpp", 785, ASSERT_TYPE_ASSERT, "(descTask->m_descriptors)", (const char *)&queryFormat, "descTask->m_descriptors") )
    __debugbreak();
  Instance = DWServicesAccess::GetInstance();
  if ( !DWServicesAccess::isReady(Instance, task->controllerIndex) )
  {
    dwStorageHandleTaskError(task, BD_NOT_CONNECTED);
    return 0i64;
  }
  m_numFiles = descTask->m_numFiles;
  if ( m_numFiles > 0x14 )
  {
    m_numFiles = 20;
    descTask->m_numFiles = 20;
    goto LABEL_15;
  }
  if ( m_numFiles )
  {
LABEL_15:
    v7 = fileIDs;
    bytes_20 = descTask->m_fileIDs->_bytes_20;
    v9 = m_numFiles;
    do
    {
      *v7 = *(_QWORD *)bytes_20;
      bytes_20 += 56;
      ++v7;
      --v9;
    }
    while ( v9 );
  }
  v10 = DWServicesAccess::GetInstance();
  ContentStreaming = DWServicesAccess::GetContentStreaming(v10, task->controllerIndex);
  DWContentStreaming::getFileMetaDataByID(ContentStreaming, &result, descTask->m_numFiles, fileIDs, descTask->m_descriptors);
  m_ptr = result.m_ptr;
  if ( result.m_ptr )
  {
    p_u = &task->u;
    if ( &result != (bdReference<bdRemoteTask> *)&task->u )
    {
      if ( p_u->remoteTask.m_ptr )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&p_u->remoteTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && p_u->remoteTask.m_ptr )
          ((void (__fastcall *)(bdRemoteTask *, __int64))p_u->remoteTask.m_ptr->~bdReferencable)(p_u->remoteTask.m_ptr, 1i64);
        m_ptr = result.m_ptr;
      }
      p_u->remoteTask.m_ptr = m_ptr;
      if ( m_ptr )
      {
        _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
        m_ptr = result.m_ptr;
      }
    }
    v13 = 1;
  }
  else
  {
    dwStorageHandleTaskError(task, BD_START_TASK_FAILED);
    v13 = 0;
    m_ptr = result.m_ptr;
  }
  if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
  {
    if ( result.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
  }
  return v13;
}

/*
==============
dwCSGetDescriptorsComplete
==============
*/
taskCompleteResults dwCSGetDescriptorsComplete(overlappedTask *const task, dwCSDescriptorsTask *const descTask)
{
  DWServicesAccess *Instance; 
  DWServicesAccess *v6; 
  DWLobbyService *DWLobbyService; 
  bdTask::bdStatus v8; 
  bdLobbyErrorCode ErrorCode; 

  if ( !task && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwstorage.cpp", 818, ASSERT_TYPE_ASSERT, "(task)", (const char *)&queryFormat, "task") )
    __debugbreak();
  if ( !descTask && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwstorage.cpp", 819, ASSERT_TYPE_ASSERT, "(descTask)", (const char *)&queryFormat, "descTask") )
    __debugbreak();
  if ( task->u.remoteTask.m_ptr )
  {
    Instance = DWServicesAccess::GetInstance();
    if ( DWServicesAccess::isReady(Instance, task->controllerIndex) )
    {
      v6 = DWServicesAccess::GetInstance();
      DWLobbyService = DWServicesAccess::GetDWLobbyService(v6, task->controllerIndex);
      DWLobbyService->pump(DWLobbyService);
      v8 = task->u.remoteTask.m_ptr->getStatus(task->u.remoteTask.m_ptr);
      ErrorCode = bdRemoteTask::getErrorCode(task->u.remoteTask.m_ptr);
      descTask->m_error = ErrorCode;
      return dwTaskStatusConvert(v8, ErrorCode);
    }
    else
    {
      return dwStorageHandleTaskError(task, BD_NOT_CONNECTED);
    }
  }
  else
  {
    Com_Printf(25, "Failed to retrieve update file status\n");
    dwStorageHandleTaskError(task, BD_HANDLE_TASK_FAILED);
    return 2;
  }
}

/*
==============
dwCSGetLastHTTPError
==============
*/
int dwCSGetLastHTTPError(const int controllerIndex)
{
  DWServicesAccess *Instance; 
  DWServicesAccess *v3; 
  DWContentStreaming *ContentStreaming; 

  Instance = DWServicesAccess::GetInstance();
  if ( DWServicesAccess::isReady(Instance, controllerIndex) )
  {
    v3 = DWServicesAccess::GetInstance();
    ContentStreaming = DWServicesAccess::GetContentStreaming(v3, controllerIndex);
    return DWContentStreaming::getLastHTTPError(ContentStreaming);
  }
  else
  {
    Com_PrintError(25, "Error: No handle to content server storage.\n");
    return 0;
  }
}

/*
==============
dwCSGetListing
==============
*/
__int64 dwCSGetListing(overlappedTask *const task, dwCSListTask *const fsTask)
{
  DWServicesAccess *Instance; 
  DWServicesAccess *v6; 
  DWContentStreaming *ContentStreaming; 
  bdRemoteTask *m_ptr; 
  unsigned int v9; 
  overlappedTask::taskShim *p_u; 
  bdReference<bdRemoteTask> result; 

  if ( !task && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwstorage.cpp", 730, ASSERT_TYPE_ASSERT, "(task)", (const char *)&queryFormat, "task") )
    __debugbreak();
  if ( !fsTask && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwstorage.cpp", 731, ASSERT_TYPE_ASSERT, "(fsTask)", (const char *)&queryFormat, "fsTask") )
    __debugbreak();
  Instance = DWServicesAccess::GetInstance();
  if ( DWServicesAccess::isReady(Instance, task->controllerIndex) )
  {
    v6 = DWServicesAccess::GetInstance();
    ContentStreaming = DWServicesAccess::GetContentStreaming(v6, task->controllerIndex);
    DWContentStreaming::listFilesByOwner(ContentStreaming, &result, fsTask->m_ownerID, fsTask->m_startDate, fsTask->m_category, fsTask->m_descriptors, fsTask->m_maxNumResults, fsTask->m_offset, fsTask->m_fileName);
    m_ptr = result.m_ptr;
    if ( result.m_ptr )
    {
      p_u = &task->u;
      if ( &result != (bdReference<bdRemoteTask> *)p_u )
      {
        if ( p_u->remoteTask.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&p_u->remoteTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && p_u->remoteTask.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))p_u->remoteTask.m_ptr->~bdReferencable)(p_u->remoteTask.m_ptr, 1i64);
          m_ptr = result.m_ptr;
        }
        p_u->remoteTask.m_ptr = m_ptr;
        if ( m_ptr )
        {
          _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
          m_ptr = result.m_ptr;
        }
      }
      v9 = 1;
    }
    else
    {
      dwStorageHandleTaskError(task, BD_START_TASK_FAILED);
      v9 = 0;
      m_ptr = result.m_ptr;
    }
    if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
    {
      if ( result.m_ptr )
        ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
    }
    return v9;
  }
  else
  {
    dwStorageHandleTaskError(task, BD_NOT_CONNECTED);
    return 0i64;
  }
}

/*
==============
dwCSGetListingComplete
==============
*/
taskCompleteResults dwCSGetListingComplete(overlappedTask *const task, dwCSListTask *const fsTask)
{
  DWServicesAccess *Instance; 
  DWServicesAccess *v6; 
  DWLobbyService *DWLobbyService; 
  bdTask::bdStatus v8; 
  bdLobbyErrorCode ErrorCode; 

  if ( !task && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwstorage.cpp", 753, ASSERT_TYPE_ASSERT, "(task)", (const char *)&queryFormat, "task") )
    __debugbreak();
  if ( !fsTask && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwstorage.cpp", 754, ASSERT_TYPE_ASSERT, "(fsTask)", (const char *)&queryFormat, "fsTask") )
    __debugbreak();
  if ( task->u.remoteTask.m_ptr )
  {
    Instance = DWServicesAccess::GetInstance();
    if ( DWServicesAccess::isReady(Instance, task->controllerIndex) )
    {
      v6 = DWServicesAccess::GetInstance();
      DWLobbyService = DWServicesAccess::GetDWLobbyService(v6, task->controllerIndex);
      DWLobbyService->pump(DWLobbyService);
      v8 = task->u.remoteTask.m_ptr->getStatus(task->u.remoteTask.m_ptr);
      ErrorCode = bdRemoteTask::getErrorCode(task->u.remoteTask.m_ptr);
      fsTask->m_error = ErrorCode;
      return dwTaskStatusConvert(v8, ErrorCode);
    }
    else
    {
      return dwStorageHandleTaskError(task, BD_NOT_CONNECTED);
    }
  }
  else
  {
    Com_Printf(25, "Failed to retrieve update file status\n");
    dwStorageHandleTaskError(task, BD_HANDLE_TASK_FAILED);
    return 2;
  }
}

/*
==============
dwCSGetProgress
==============
*/
__int64 dwCSGetProgress(const int controllerIndex, unsigned int *bytes, float *dataRate)
{
  DWServicesAccess *Instance; 
  __int64 result; 
  DWServicesAccess *v8; 
  DWContentStreaming *ContentStreaming; 

  if ( !bytes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwstorage.cpp", 848, ASSERT_TYPE_ASSERT, "(bytes)", (const char *)&queryFormat, "bytes") )
    __debugbreak();
  if ( !dataRate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwstorage.cpp", 849, ASSERT_TYPE_ASSERT, "(dataRate)", (const char *)&queryFormat, "dataRate") )
    __debugbreak();
  Instance = DWServicesAccess::GetInstance();
  if ( DWServicesAccess::isReady(Instance, controllerIndex) )
  {
    v8 = DWServicesAccess::GetInstance();
    ContentStreaming = DWServicesAccess::GetContentStreaming(v8, controllerIndex);
    DWContentStreaming::checkProgress(ContentStreaming, bytes, dataRate);
    return 1i64;
  }
  else
  {
    result = 0i64;
    *bytes = 0;
    *dataRate = 0.0;
  }
  return result;
}

/*
==============
dwCSListPublisherFiles
==============
*/
__int64 dwCSListPublisherFiles(overlappedTask *const task, dwCSListPublisherFilesTask *const listTask)
{
  DWServicesAccess *Instance; 
  DWServicesAccess *v6; 
  DWContentStreaming *ContentStreaming; 
  bdRemoteTask *m_ptr; 
  unsigned int v9; 
  overlappedTask::taskShim *p_u; 
  bdReference<bdRemoteTask> result; 

  if ( !task && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwstorage.cpp", 1352, ASSERT_TYPE_ASSERT, "(task)", (const char *)&queryFormat, "task") )
    __debugbreak();
  if ( !listTask && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwstorage.cpp", 1353, ASSERT_TYPE_ASSERT, "(listTask)", (const char *)&queryFormat, "listTask") )
    __debugbreak();
  Instance = DWServicesAccess::GetInstance();
  if ( DWServicesAccess::isReady(Instance, task->controllerIndex) )
  {
    v6 = DWServicesAccess::GetInstance();
    ContentStreaming = DWServicesAccess::GetContentStreaming(v6, task->controllerIndex);
    DWContentStreaming::listAllPublisherFiles(ContentStreaming, &result, listTask->m_startDate, listTask->m_category, listTask->m_outDescriptors, listTask->m_maxNumResults, listTask->m_offset, listTask->m_fileName);
    m_ptr = result.m_ptr;
    if ( result.m_ptr )
    {
      p_u = &task->u;
      if ( &result != (bdReference<bdRemoteTask> *)p_u )
      {
        if ( p_u->remoteTask.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&p_u->remoteTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && p_u->remoteTask.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))p_u->remoteTask.m_ptr->~bdReferencable)(p_u->remoteTask.m_ptr, 1i64);
          m_ptr = result.m_ptr;
        }
        p_u->remoteTask.m_ptr = m_ptr;
        if ( m_ptr )
        {
          _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
          m_ptr = result.m_ptr;
        }
      }
      v9 = 1;
    }
    else
    {
      dwStorageHandleTaskError(task, BD_START_TASK_FAILED);
      v9 = 0;
      m_ptr = result.m_ptr;
    }
    if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
    {
      if ( result.m_ptr )
        ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
    }
    return v9;
  }
  else
  {
    dwStorageHandleTaskError(task, BD_NOT_CONNECTED);
    return 0i64;
  }
}

/*
==============
dwCSListPublisherFilesComplete
==============
*/
taskCompleteResults dwCSListPublisherFilesComplete(overlappedTask *const task, dwCSListPublisherFilesTask *listTask)
{
  DWServicesAccess *Instance; 
  DWServicesAccess *v6; 
  DWLobbyService *DWLobbyService; 
  bdTask::bdStatus v8; 
  bdLobbyErrorCode ErrorCode; 

  if ( !task && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwstorage.cpp", 1380, ASSERT_TYPE_ASSERT, "(task)", (const char *)&queryFormat, "task") )
    __debugbreak();
  if ( !listTask && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwstorage.cpp", 1381, ASSERT_TYPE_ASSERT, "(listTask)", (const char *)&queryFormat, "listTask") )
    __debugbreak();
  if ( task->u.remoteTask.m_ptr )
  {
    Instance = DWServicesAccess::GetInstance();
    if ( DWServicesAccess::isReady(Instance, task->controllerIndex) )
    {
      v6 = DWServicesAccess::GetInstance();
      DWLobbyService = DWServicesAccess::GetDWLobbyService(v6, task->controllerIndex);
      DWLobbyService->pump(DWLobbyService);
      v8 = task->u.remoteTask.m_ptr->getStatus(task->u.remoteTask.m_ptr);
      ErrorCode = bdRemoteTask::getErrorCode(task->u.remoteTask.m_ptr);
      listTask->m_error = ErrorCode;
      return dwTaskStatusConvert(v8, ErrorCode);
    }
    else
    {
      return dwStorageHandleTaskError(task, BD_NOT_CONNECTED);
    }
  }
  else
  {
    Com_Printf(25, "Failed to upload summary and meta data.\n");
    dwStorageHandleTaskError(task, BD_HANDLE_TASK_FAILED);
    return 2;
  }
}

/*
==============
dwCSReadFile
==============
*/
__int64 dwCSReadFile(overlappedTask *const task, dwCSReadFileTask *const readTask)
{
  DWServicesAccess *Instance; 
  unsigned int v6; 
  DWServicesAccess *v7; 
  DWContentStreaming *ContentStreaming; 
  __int64 *v9; 
  volatile signed __int32 *v10; 
  volatile signed __int32 *v11; 
  bdRemoteTask *m_ptr; 
  DWServicesAccess *v13; 
  DWContentStreaming *v14; 
  __int64 *v15; 
  volatile signed __int32 *v16; 
  __int64 *p_u; 
  volatile signed __int32 *v18; 
  volatile signed __int32 *v19; 
  volatile signed __int32 *v20; 
  bdReference<bdRemoteTask> result; 
  bdReference<bdRemoteTask> v22; 

  if ( !task && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwstorage.cpp", 936, ASSERT_TYPE_ASSERT, "(task)", (const char *)&queryFormat, "task") )
    __debugbreak();
  if ( !readTask && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwstorage.cpp", 937, ASSERT_TYPE_ASSERT, "(readTask)", (const char *)&queryFormat, "readTask") )
    __debugbreak();
  Instance = DWServicesAccess::GetInstance();
  if ( !DWServicesAccess::isReady(Instance, task->controllerIndex) )
  {
    dwStorageHandleTaskError(task, BD_NOT_CONNECTED);
    return 0i64;
  }
  v6 = 0;
  v20 = NULL;
  if ( readTask->m_downloadHandler )
  {
    v7 = DWServicesAccess::GetInstance();
    ContentStreaming = DWServicesAccess::GetContentStreaming(v7, task->controllerIndex);
    v9 = (__int64 *)DWContentStreaming::download(ContentStreaming, &result, readTask->m_fileID, readTask->m_downloadHandler, &readTask->m_descriptor, 0, 0);
    v10 = NULL;
    if ( v9 != (__int64 *)&v20 )
    {
      v10 = (volatile signed __int32 *)*v9;
      v20 = v10;
      if ( v10 )
        _InterlockedExchangeAdd(v10 + 2, 1u);
    }
    v11 = v10;
    if ( !result.m_ptr || _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) != 1 )
      goto LABEL_24;
    m_ptr = result.m_ptr;
  }
  else
  {
    v13 = DWServicesAccess::GetInstance();
    v14 = DWServicesAccess::GetContentStreaming(v13, task->controllerIndex);
    v15 = (__int64 *)DWContentStreaming::download(v14, &v22, readTask->m_fileID, readTask->m_buffer, readTask->m_bufferSize, &readTask->m_descriptor, 0, 0);
    v16 = NULL;
    if ( v15 != (__int64 *)&v20 )
    {
      v16 = (volatile signed __int32 *)*v15;
      v20 = v16;
      if ( v16 )
        _InterlockedExchangeAdd(v16 + 2, 1u);
    }
    v11 = v16;
    if ( !v22.m_ptr || _InterlockedExchangeAdd((volatile signed __int32 *)&v22.m_ptr->m_refCount, 0xFFFFFFFF) != 1 )
      goto LABEL_24;
    m_ptr = v22.m_ptr;
  }
  if ( m_ptr )
    ((void (__fastcall *)(bdRemoteTask *, __int64))m_ptr->~bdReferencable)(m_ptr, 1i64);
LABEL_24:
  if ( v20 )
  {
    p_u = (__int64 *)&task->u;
    if ( &v20 != (volatile signed __int32 **)p_u )
    {
      v18 = v11;
      if ( *p_u && _InterlockedExchangeAdd((volatile signed __int32 *)(*p_u + 8), 0xFFFFFFFF) == 1 && *p_u )
      {
        (**(void (__fastcall ***)(__int64, __int64))*p_u)(*p_u, 1i64);
        v18 = v11;
      }
      v19 = v20;
      *p_u = (__int64)v20;
      _InterlockedExchangeAdd(v19 + 2, 1u);
      v11 = v18;
    }
    v6 = 1;
  }
  else
  {
    dwStorageHandleTaskError(task, BD_START_TASK_FAILED);
  }
  if ( v20 )
  {
    if ( _InterlockedExchangeAdd(v11 + 2, 0xFFFFFFFF) == 1 )
      (**(void (__fastcall ***)(volatile signed __int32 *, __int64))v20)(v20, 1i64);
  }
  return v6;
}

/*
==============
dwCSReadFileComplete
==============
*/
taskCompleteResults dwCSReadFileComplete(overlappedTask *const task, dwCSReadFileTask *const readTask)
{
  DWServicesAccess *Instance; 
  DWServicesAccess *v6; 
  DWLobbyService *DWLobbyService; 
  bdTask::bdStatus v8; 
  bdLobbyErrorCode ErrorCode; 

  if ( !task && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwstorage.cpp", 969, ASSERT_TYPE_ASSERT, "(task)", (const char *)&queryFormat, "task") )
    __debugbreak();
  if ( !readTask && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwstorage.cpp", 970, ASSERT_TYPE_ASSERT, "(readTask)", (const char *)&queryFormat, "readTask") )
    __debugbreak();
  if ( task->u.remoteTask.m_ptr )
  {
    Instance = DWServicesAccess::GetInstance();
    if ( DWServicesAccess::isReady(Instance, task->controllerIndex) )
    {
      v6 = DWServicesAccess::GetInstance();
      DWLobbyService = DWServicesAccess::GetDWLobbyService(v6, task->controllerIndex);
      DWLobbyService->pump(DWLobbyService);
      v8 = task->u.remoteTask.m_ptr->getStatus(task->u.remoteTask.m_ptr);
      ErrorCode = bdRemoteTask::getErrorCode(task->u.remoteTask.m_ptr);
      readTask->m_error = ErrorCode;
      return dwTaskStatusConvert(v8, ErrorCode);
    }
    else
    {
      return dwStorageHandleTaskError(task, BD_NOT_CONNECTED);
    }
  }
  else
  {
    Com_Printf(25, "Failed to retrieve update file status\n");
    dwStorageHandleTaskError(task, BD_HANDLE_TASK_FAILED);
    return 2;
  }
}

/*
==============
dwCSReadPublisherFile
==============
*/
__int64 dwCSReadPublisherFile(overlappedTask *const task, dwCSReadPublisherFileTask *const downloadTask)
{
  DWServicesAccess *Instance; 
  unsigned int v6; 
  DWServicesAccess *v7; 
  DWContentStreaming *ContentStreaming; 
  __int64 *v9; 
  volatile signed __int32 *v10; 
  volatile signed __int32 *v11; 
  bdRemoteTask *m_ptr; 
  DWServicesAccess *v13; 
  DWContentStreaming *v14; 
  __int64 *v15; 
  volatile signed __int32 *v16; 
  __int64 *p_u; 
  volatile signed __int32 *v18; 
  volatile signed __int32 *v19; 
  volatile signed __int32 *v20; 
  bdReference<bdRemoteTask> result; 
  bdReference<bdRemoteTask> v22; 

  if ( !task && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwstorage.cpp", 1409, ASSERT_TYPE_ASSERT, "(task)", (const char *)&queryFormat, "task") )
    __debugbreak();
  if ( !downloadTask && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwstorage.cpp", 1410, ASSERT_TYPE_ASSERT, "(downloadTask)", (const char *)&queryFormat, "downloadTask") )
    __debugbreak();
  Instance = DWServicesAccess::GetInstance();
  if ( !DWServicesAccess::isReady(Instance, task->controllerIndex) )
  {
    dwStorageHandleTaskError(task, BD_NOT_CONNECTED);
    return 0i64;
  }
  v6 = 0;
  v20 = NULL;
  if ( downloadTask->m_downloadHandler )
  {
    v7 = DWServicesAccess::GetInstance();
    ContentStreaming = DWServicesAccess::GetContentStreaming(v7, task->controllerIndex);
    v9 = (__int64 *)DWContentStreaming::downloadPublisherFile(ContentStreaming, &result, downloadTask->m_fileID, downloadTask->m_downloadHandler, downloadTask->m_outDescriptors, downloadTask->m_startByte, downloadTask->m_endByte);
    v10 = NULL;
    if ( v9 != (__int64 *)&v20 )
    {
      v10 = (volatile signed __int32 *)*v9;
      v20 = v10;
      if ( v10 )
        _InterlockedExchangeAdd(v10 + 2, 1u);
    }
    v11 = v10;
    if ( !result.m_ptr || _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) != 1 )
      goto LABEL_24;
    m_ptr = result.m_ptr;
  }
  else
  {
    v13 = DWServicesAccess::GetInstance();
    v14 = DWServicesAccess::GetContentStreaming(v13, task->controllerIndex);
    v15 = (__int64 *)DWContentStreaming::downloadPublisherFile(v14, &v22, downloadTask->m_fileID, downloadTask->m_buffer, downloadTask->m_bufferSize, downloadTask->m_outDescriptors, downloadTask->m_startByte, downloadTask->m_endByte);
    v16 = NULL;
    if ( v15 != (__int64 *)&v20 )
    {
      v16 = (volatile signed __int32 *)*v15;
      v20 = v16;
      if ( v16 )
        _InterlockedExchangeAdd(v16 + 2, 1u);
    }
    v11 = v16;
    if ( !v22.m_ptr || _InterlockedExchangeAdd((volatile signed __int32 *)&v22.m_ptr->m_refCount, 0xFFFFFFFF) != 1 )
      goto LABEL_24;
    m_ptr = v22.m_ptr;
  }
  if ( m_ptr )
    ((void (__fastcall *)(bdRemoteTask *, __int64))m_ptr->~bdReferencable)(m_ptr, 1i64);
LABEL_24:
  if ( v20 )
  {
    p_u = (__int64 *)&task->u;
    if ( &v20 != (volatile signed __int32 **)p_u )
    {
      v18 = v11;
      if ( *p_u && _InterlockedExchangeAdd((volatile signed __int32 *)(*p_u + 8), 0xFFFFFFFF) == 1 && *p_u )
      {
        (**(void (__fastcall ***)(__int64, __int64))*p_u)(*p_u, 1i64);
        v18 = v11;
      }
      v19 = v20;
      *p_u = (__int64)v20;
      _InterlockedExchangeAdd(v19 + 2, 1u);
      v11 = v18;
    }
    v6 = 1;
  }
  else
  {
    dwStorageHandleTaskError(task, BD_START_TASK_FAILED);
  }
  if ( v20 )
  {
    if ( _InterlockedExchangeAdd(v11 + 2, 0xFFFFFFFF) == 1 )
      (**(void (__fastcall ***)(volatile signed __int32 *, __int64))v20)(v20, 1i64);
  }
  return v6;
}

/*
==============
dwCSReadPublisherFileComplete
==============
*/
taskCompleteResults dwCSReadPublisherFileComplete(overlappedTask *const task, dwCSReadPublisherFileTask *const downloadTask)
{
  DWServicesAccess *Instance; 
  DWServicesAccess *v6; 
  DWLobbyService *DWLobbyService; 
  bdTask::bdStatus v8; 
  bdLobbyErrorCode ErrorCode; 

  if ( !task && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwstorage.cpp", 1450, ASSERT_TYPE_ASSERT, "(task)", (const char *)&queryFormat, "task") )
    __debugbreak();
  if ( !downloadTask && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwstorage.cpp", 1451, ASSERT_TYPE_ASSERT, "(downloadTask)", (const char *)&queryFormat, "downloadTask") )
    __debugbreak();
  if ( task->u.remoteTask.m_ptr )
  {
    Instance = DWServicesAccess::GetInstance();
    if ( DWServicesAccess::isReady(Instance, task->controllerIndex) )
    {
      v6 = DWServicesAccess::GetInstance();
      DWLobbyService = DWServicesAccess::GetDWLobbyService(v6, task->controllerIndex);
      DWLobbyService->pump(DWLobbyService);
      v8 = task->u.remoteTask.m_ptr->getStatus(task->u.remoteTask.m_ptr);
      ErrorCode = bdRemoteTask::getErrorCode(task->u.remoteTask.m_ptr);
      downloadTask->m_error = ErrorCode;
      return dwTaskStatusConvert(v8, ErrorCode);
    }
    else
    {
      return dwStorageHandleTaskError(task, BD_NOT_CONNECTED);
    }
  }
  else
  {
    Com_Printf(25, "Failed to upload summary and meta data.\n");
    dwStorageHandleTaskError(task, BD_HANDLE_TASK_FAILED);
    return 2;
  }
}

/*
==============
dwCSRemoveFile
==============
*/
__int64 dwCSRemoveFile(overlappedTask *const task, dwCSRemoveFileTask *const fsTask)
{
  DWServicesAccess *Instance; 
  DWServicesAccess *v6; 
  DWContentStreaming *ContentStreaming; 
  bdRemoteTask *m_ptr; 
  unsigned int v9; 
  overlappedTask::taskShim *p_u; 
  bdReference<bdRemoteTask> result; 

  if ( !task && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwstorage.cpp", 999, ASSERT_TYPE_ASSERT, "(task)", (const char *)&queryFormat, "task", -2i64) )
    __debugbreak();
  if ( !fsTask && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwstorage.cpp", 1000, ASSERT_TYPE_ASSERT, "(fsTask)", (const char *)&queryFormat, "fsTask") )
    __debugbreak();
  Instance = DWServicesAccess::GetInstance();
  if ( DWServicesAccess::isReady(Instance, task->controllerIndex) )
  {
    v6 = DWServicesAccess::GetInstance();
    ContentStreaming = DWServicesAccess::GetContentStreaming(v6, task->controllerIndex);
    DWContentStreaming::removeFile(ContentStreaming, &result, fsTask->m_fileSlot);
    m_ptr = result.m_ptr;
    if ( result.m_ptr )
    {
      p_u = &task->u;
      if ( &result != (bdReference<bdRemoteTask> *)p_u )
      {
        if ( p_u->remoteTask.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&p_u->remoteTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && p_u->remoteTask.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))p_u->remoteTask.m_ptr->~bdReferencable)(p_u->remoteTask.m_ptr, 1i64);
          m_ptr = result.m_ptr;
        }
        p_u->remoteTask.m_ptr = m_ptr;
        if ( m_ptr )
        {
          _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
          m_ptr = result.m_ptr;
        }
      }
      v9 = 1;
    }
    else
    {
      dwStorageHandleTaskError(task, BD_START_TASK_FAILED);
      v9 = 0;
      m_ptr = result.m_ptr;
    }
    if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
    {
      if ( result.m_ptr )
        ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
    }
    return v9;
  }
  else
  {
    dwStorageHandleTaskError(task, BD_NOT_CONNECTED);
    return 0i64;
  }
}

/*
==============
dwCSRemoveFileComplete
==============
*/
taskCompleteResults dwCSRemoveFileComplete(overlappedTask *const task, dwCSRemoveFileTask *const fsTask)
{
  DWServicesAccess *Instance; 
  DWServicesAccess *v6; 
  DWLobbyService *DWLobbyService; 
  bdTask::bdStatus v8; 
  bdLobbyErrorCode ErrorCode; 

  if ( !task && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwstorage.cpp", 1023, ASSERT_TYPE_ASSERT, "(task)", (const char *)&queryFormat, "task") )
    __debugbreak();
  if ( !fsTask && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwstorage.cpp", 1024, ASSERT_TYPE_ASSERT, "(fsTask)", (const char *)&queryFormat, "fsTask") )
    __debugbreak();
  if ( task->u.remoteTask.m_ptr )
  {
    Instance = DWServicesAccess::GetInstance();
    if ( DWServicesAccess::isReady(Instance, task->controllerIndex) )
    {
      v6 = DWServicesAccess::GetInstance();
      DWLobbyService = DWServicesAccess::GetDWLobbyService(v6, task->controllerIndex);
      DWLobbyService->pump(DWLobbyService);
      v8 = task->u.remoteTask.m_ptr->getStatus(task->u.remoteTask.m_ptr);
      ErrorCode = bdRemoteTask::getErrorCode(task->u.remoteTask.m_ptr);
      fsTask->m_error = ErrorCode;
      return dwTaskStatusConvert(v8, ErrorCode);
    }
    else
    {
      return dwStorageHandleTaskError(task, BD_NOT_CONNECTED);
    }
  }
  else
  {
    Com_Printf(25, "Failed to retrieve update file status\n");
    dwStorageHandleTaskError(task, BD_HANDLE_TASK_FAILED);
    return 2;
  }
}

/*
==============
dwCSSearch
==============
*/
__int64 dwCSSearch(overlappedTask *const task, dwCSSearchTask *const searchTask)
{
  DWServicesAccess *Instance; 
  DWServicesAccess *v6; 
  DWTags *TagService; 
  bdRemoteTask *m_ptr; 
  unsigned int v9; 
  overlappedTask::taskShim *p_u; 
  bdReference<bdRemoteTask> result; 

  if ( !task && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwstorage.cpp", 880, ASSERT_TYPE_ASSERT, "(task)", (const char *)&queryFormat, "task") )
    __debugbreak();
  if ( !searchTask && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwstorage.cpp", 881, ASSERT_TYPE_ASSERT, "(searchTask)", (const char *)&queryFormat, "searchTask") )
    __debugbreak();
  Instance = DWServicesAccess::GetInstance();
  if ( DWServicesAccess::isReady(Instance, task->controllerIndex) )
  {
    v6 = DWServicesAccess::GetInstance();
    TagService = DWServicesAccess::GetTagService(v6, task->controllerIndex);
    DWTags::searchByTags(TagService, &result, 1u, searchTask->m_startIndex, searchTask->m_maxNumResults, searchTask->m_orderNewestFirst, searchTask->m_numTags, searchTask->m_tags, searchTask->m_resultFileIDs);
    m_ptr = result.m_ptr;
    if ( result.m_ptr )
    {
      p_u = &task->u;
      if ( &result != (bdReference<bdRemoteTask> *)p_u )
      {
        if ( p_u->remoteTask.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&p_u->remoteTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && p_u->remoteTask.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))p_u->remoteTask.m_ptr->~bdReferencable)(p_u->remoteTask.m_ptr, 1i64);
          m_ptr = result.m_ptr;
        }
        p_u->remoteTask.m_ptr = m_ptr;
        if ( m_ptr )
        {
          _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
          m_ptr = result.m_ptr;
        }
      }
      v9 = 1;
    }
    else
    {
      dwStorageHandleTaskError(task, BD_START_TASK_FAILED);
      v9 = 0;
      m_ptr = result.m_ptr;
    }
    if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
    {
      if ( result.m_ptr )
        ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
    }
    return v9;
  }
  else
  {
    dwStorageHandleTaskError(task, BD_NOT_CONNECTED);
    return 0i64;
  }
}

/*
==============
dwCSSearchComplete
==============
*/
taskCompleteResults dwCSSearchComplete(overlappedTask *const task, dwCSSearchTask *const searchTask)
{
  DWServicesAccess *Instance; 
  DWServicesAccess *v6; 
  DWLobbyService *DWLobbyService; 
  bdTask::bdStatus v8; 
  bdLobbyErrorCode ErrorCode; 

  if ( !task && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwstorage.cpp", 906, ASSERT_TYPE_ASSERT, "(task)", (const char *)&queryFormat, "task") )
    __debugbreak();
  if ( !searchTask && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwstorage.cpp", 907, ASSERT_TYPE_ASSERT, "(searchTask)", (const char *)&queryFormat, "searchTask") )
    __debugbreak();
  if ( task->u.remoteTask.m_ptr )
  {
    Instance = DWServicesAccess::GetInstance();
    if ( DWServicesAccess::isReady(Instance, task->controllerIndex) )
    {
      v6 = DWServicesAccess::GetInstance();
      DWLobbyService = DWServicesAccess::GetDWLobbyService(v6, task->controllerIndex);
      DWLobbyService->pump(DWLobbyService);
      v8 = task->u.remoteTask.m_ptr->getStatus(task->u.remoteTask.m_ptr);
      ErrorCode = bdRemoteTask::getErrorCode(task->u.remoteTask.m_ptr);
      searchTask->m_error = ErrorCode;
      return dwTaskStatusConvert(v8, ErrorCode);
    }
    else
    {
      return dwStorageHandleTaskError(task, BD_NOT_CONNECTED);
    }
  }
  else
  {
    Com_Printf(25, "Failed to retrieve update file status\n");
    dwStorageHandleTaskError(task, BD_HANDLE_TASK_FAILED);
    return 2;
  }
}

/*
==============
dwCSSetTags
==============
*/
__int64 dwCSSetTags(overlappedTask *const task, dwCSTagTask *const tagTask)
{
  DWServicesAccess *Instance; 
  DWServicesAccess *v6; 
  DWTags *TagService; 
  bdRemoteTask *m_ptr; 
  unsigned int v9; 
  overlappedTask::taskShim *p_u; 
  bdReference<bdRemoteTask> result; 

  if ( !task && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwstorage.cpp", 1120, ASSERT_TYPE_ASSERT, "(task)", (const char *)&queryFormat, "task", -2i64) )
    __debugbreak();
  if ( !tagTask && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwstorage.cpp", 1121, ASSERT_TYPE_ASSERT, "(tagTask)", (const char *)&queryFormat, "tagTask") )
    __debugbreak();
  Instance = DWServicesAccess::GetInstance();
  if ( DWServicesAccess::isReady(Instance, task->controllerIndex) )
  {
    v6 = DWServicesAccess::GetInstance();
    TagService = DWServicesAccess::GetTagService(v6, task->controllerIndex);
    DWTags::setTagsForEntityID(TagService, &result, 1u, tagTask->m_entityID, tagTask->m_numTags, tagTask->m_tags);
    m_ptr = result.m_ptr;
    if ( result.m_ptr )
    {
      p_u = &task->u;
      if ( &result != (bdReference<bdRemoteTask> *)p_u )
      {
        if ( p_u->remoteTask.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&p_u->remoteTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && p_u->remoteTask.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))p_u->remoteTask.m_ptr->~bdReferencable)(p_u->remoteTask.m_ptr, 1i64);
          m_ptr = result.m_ptr;
        }
        p_u->remoteTask.m_ptr = m_ptr;
        if ( m_ptr )
        {
          _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
          m_ptr = result.m_ptr;
        }
      }
      v9 = 1;
    }
    else
    {
      dwStorageHandleTaskError(task, BD_START_TASK_FAILED);
      v9 = 0;
      m_ptr = result.m_ptr;
    }
    if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
    {
      if ( result.m_ptr )
        ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
    }
    return v9;
  }
  else
  {
    dwStorageHandleTaskError(task, BD_NOT_CONNECTED);
    return 0i64;
  }
}

/*
==============
dwCSSetTagsComplete
==============
*/
taskCompleteResults dwCSSetTagsComplete(overlappedTask *const task, dwCSTagTask *const tagTask)
{
  DWServicesAccess *Instance; 
  DWServicesAccess *v6; 
  DWLobbyService *DWLobbyService; 
  bdTask::bdStatus v8; 
  bdLobbyErrorCode ErrorCode; 

  if ( !task && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwstorage.cpp", 1146, ASSERT_TYPE_ASSERT, "(task)", (const char *)&queryFormat, "task") )
    __debugbreak();
  if ( !tagTask && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwstorage.cpp", 1147, ASSERT_TYPE_ASSERT, "(tagTask)", (const char *)&queryFormat, "tagTask") )
    __debugbreak();
  if ( task->u.remoteTask.m_ptr )
  {
    Instance = DWServicesAccess::GetInstance();
    if ( DWServicesAccess::isReady(Instance, task->controllerIndex) )
    {
      v6 = DWServicesAccess::GetInstance();
      DWLobbyService = DWServicesAccess::GetDWLobbyService(v6, task->controllerIndex);
      DWLobbyService->pump(DWLobbyService);
      v8 = task->u.remoteTask.m_ptr->getStatus(task->u.remoteTask.m_ptr);
      ErrorCode = bdRemoteTask::getErrorCode(task->u.remoteTask.m_ptr);
      tagTask->m_error = ErrorCode;
      return dwTaskStatusConvert(v8, ErrorCode);
    }
    else
    {
      return dwStorageHandleTaskError(task, BD_NOT_CONNECTED);
    }
  }
  else
  {
    Com_Printf(25, "Failed to retrieve update file status\n");
    dwStorageHandleTaskError(task, BD_HANDLE_TASK_FAILED);
    return 2;
  }
}

/*
==============
dwCSUploadSummaryMetaData
==============
*/
__int64 dwCSUploadSummaryMetaData(overlappedTask *const task, dwCSUploadSummaryTask *const summaryTask)
{
  DWServicesAccess *Instance; 
  DWServicesAccess *v6; 
  DWContentStreaming *ContentStreaming; 
  bdRemoteTask *m_ptr; 
  unsigned int v9; 
  overlappedTask::taskShim *p_u; 
  bdReference<bdRemoteTask> result; 

  if ( !task && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwstorage.cpp", 1237, ASSERT_TYPE_ASSERT, "(task)", (const char *)&queryFormat, "task") )
    __debugbreak();
  if ( !summaryTask && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwstorage.cpp", 1238, ASSERT_TYPE_ASSERT, "(summaryTask)", (const char *)&queryFormat, "summaryTask") )
    __debugbreak();
  Instance = DWServicesAccess::GetInstance();
  if ( DWServicesAccess::isReady(Instance, task->controllerIndex) )
  {
    v6 = DWServicesAccess::GetInstance();
    ContentStreaming = DWServicesAccess::GetContentStreaming(v6, task->controllerIndex);
    DWContentStreaming::uploadUserSummaryMetaData(ContentStreaming, &result, summaryTask->m_fileID, summaryTask->m_summaryData, summaryTask->m_summaryDataSize, summaryTask->m_metaData, summaryTask->m_metaDataSize, summaryTask->m_numTags, summaryTask->m_tags);
    m_ptr = result.m_ptr;
    if ( result.m_ptr )
    {
      p_u = &task->u;
      if ( &result != (bdReference<bdRemoteTask> *)p_u )
      {
        if ( p_u->remoteTask.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&p_u->remoteTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && p_u->remoteTask.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))p_u->remoteTask.m_ptr->~bdReferencable)(p_u->remoteTask.m_ptr, 1i64);
          m_ptr = result.m_ptr;
        }
        p_u->remoteTask.m_ptr = m_ptr;
        if ( m_ptr )
        {
          _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
          m_ptr = result.m_ptr;
        }
      }
      v9 = 1;
    }
    else
    {
      dwStorageHandleTaskError(task, BD_START_TASK_FAILED);
      v9 = 0;
      m_ptr = result.m_ptr;
    }
    if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
    {
      if ( result.m_ptr )
        ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
    }
    return v9;
  }
  else
  {
    dwStorageHandleTaskError(task, BD_NOT_CONNECTED);
    return 0i64;
  }
}

/*
==============
dwCSUploadSummaryMetaDataComplete
==============
*/
taskCompleteResults dwCSUploadSummaryMetaDataComplete(overlappedTask *const task, dwCSUploadSummaryTask *const summaryTask)
{
  DWServicesAccess *Instance; 
  DWServicesAccess *v6; 
  DWLobbyService *DWLobbyService; 
  bdTask::bdStatus v8; 
  bdLobbyErrorCode ErrorCode; 

  if ( !task && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwstorage.cpp", 1267, ASSERT_TYPE_ASSERT, "(task)", (const char *)&queryFormat, "task") )
    __debugbreak();
  if ( !summaryTask && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwstorage.cpp", 1268, ASSERT_TYPE_ASSERT, "(summaryTask)", (const char *)&queryFormat, "summaryTask") )
    __debugbreak();
  if ( task->u.remoteTask.m_ptr )
  {
    Instance = DWServicesAccess::GetInstance();
    if ( DWServicesAccess::isReady(Instance, task->controllerIndex) )
    {
      v6 = DWServicesAccess::GetInstance();
      DWLobbyService = DWServicesAccess::GetDWLobbyService(v6, task->controllerIndex);
      DWLobbyService->pump(DWLobbyService);
      v8 = task->u.remoteTask.m_ptr->getStatus(task->u.remoteTask.m_ptr);
      ErrorCode = bdRemoteTask::getErrorCode(task->u.remoteTask.m_ptr);
      summaryTask->m_error = ErrorCode;
      return dwTaskStatusConvert(v8, ErrorCode);
    }
    else
    {
      return dwStorageHandleTaskError(task, BD_NOT_CONNECTED);
    }
  }
  else
  {
    Com_Printf(25, "Failed to upload summary and meta data.\n");
    dwStorageHandleTaskError(task, BD_HANDLE_TASK_FAILED);
    return 2;
  }
}

/*
==============
dwCSWriteFile
==============
*/
__int64 dwCSWriteFile(overlappedTask *const task, dwCSWriteFileTask *const writeTask)
{
  DWServicesAccess *Instance; 
  unsigned int v6; 
  DWServicesAccess *v7; 
  DWContentStreaming *ContentStreaming; 
  __int64 *v9; 
  volatile signed __int32 *v10; 
  volatile signed __int32 *v11; 
  bdRemoteTask *m_ptr; 
  DWServicesAccess *v13; 
  DWContentStreaming *v14; 
  __int64 *v15; 
  volatile signed __int32 *v16; 
  __int64 *p_u; 
  volatile signed __int32 *v18; 
  volatile signed __int32 *v19; 
  volatile signed __int32 *v20; 
  bdReference<bdRemoteTask> result; 
  bdReference<bdRemoteTask> v22; 

  if ( !task && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwstorage.cpp", 1053, ASSERT_TYPE_ASSERT, "(task)", (const char *)&queryFormat, "task") )
    __debugbreak();
  if ( !writeTask && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwstorage.cpp", 1054, ASSERT_TYPE_ASSERT, "(writeTask)", (const char *)&queryFormat, "writeTask") )
    __debugbreak();
  Instance = DWServicesAccess::GetInstance();
  if ( !DWServicesAccess::isReady(Instance, task->controllerIndex) )
  {
    dwStorageHandleTaskError(task, BD_NOT_CONNECTED);
    return 0i64;
  }
  v6 = 0;
  v20 = NULL;
  if ( writeTask->m_uploadHandler )
  {
    v7 = DWServicesAccess::GetInstance();
    ContentStreaming = DWServicesAccess::GetContentStreaming(v7, task->controllerIndex);
    v9 = (__int64 *)DWContentStreaming::upload(ContentStreaming, &result, writeTask->m_fileSlot, writeTask->m_uploadHandler, 0, writeTask->m_fileName, writeTask->m_category, writeTask->m_thumbData, writeTask->m_thumbDataSize, writeTask->m_numTags, writeTask->m_tags, &writeTask->m_outFileID, NULL);
    v10 = NULL;
    if ( v9 != (__int64 *)&v20 )
    {
      v10 = (volatile signed __int32 *)*v9;
      v20 = v10;
      if ( v10 )
        _InterlockedExchangeAdd(v10 + 2, 1u);
    }
    v11 = v10;
    if ( !result.m_ptr || _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) != 1 )
      goto LABEL_24;
    m_ptr = result.m_ptr;
  }
  else
  {
    v13 = DWServicesAccess::GetInstance();
    v14 = DWServicesAccess::GetContentStreaming(v13, task->controllerIndex);
    v15 = (__int64 *)DWContentStreaming::upload(v14, &v22, writeTask->m_fileSlot, writeTask->m_fileData, writeTask->m_fileSize, writeTask->m_fileName, writeTask->m_category, writeTask->m_thumbData, writeTask->m_thumbDataSize, writeTask->m_numTags, writeTask->m_tags, &writeTask->m_outFileID, NULL);
    v16 = NULL;
    if ( v15 != (__int64 *)&v20 )
    {
      v16 = (volatile signed __int32 *)*v15;
      v20 = v16;
      if ( v16 )
        _InterlockedExchangeAdd(v16 + 2, 1u);
    }
    v11 = v16;
    if ( !v22.m_ptr || _InterlockedExchangeAdd((volatile signed __int32 *)&v22.m_ptr->m_refCount, 0xFFFFFFFF) != 1 )
      goto LABEL_24;
    m_ptr = v22.m_ptr;
  }
  if ( m_ptr )
    ((void (__fastcall *)(bdRemoteTask *, __int64))m_ptr->~bdReferencable)(m_ptr, 1i64);
LABEL_24:
  if ( v20 )
  {
    p_u = (__int64 *)&task->u;
    if ( &v20 != (volatile signed __int32 **)p_u )
    {
      v18 = v11;
      if ( *p_u && _InterlockedExchangeAdd((volatile signed __int32 *)(*p_u + 8), 0xFFFFFFFF) == 1 && *p_u )
      {
        (**(void (__fastcall ***)(__int64, __int64))*p_u)(*p_u, 1i64);
        v18 = v11;
      }
      v19 = v20;
      *p_u = (__int64)v20;
      _InterlockedExchangeAdd(v19 + 2, 1u);
      v11 = v18;
    }
    v6 = 1;
  }
  else
  {
    dwStorageHandleTaskError(task, BD_START_TASK_FAILED);
  }
  if ( v20 )
  {
    if ( _InterlockedExchangeAdd(v11 + 2, 0xFFFFFFFF) == 1 )
      (**(void (__fastcall ***)(volatile signed __int32 *, __int64))v20)(v20, 1i64);
  }
  return v6;
}

/*
==============
dwCSWriteFileComplete
==============
*/
taskCompleteResults dwCSWriteFileComplete(overlappedTask *const task, dwCSWriteFileTask *const writeTask)
{
  DWServicesAccess *Instance; 
  DWServicesAccess *v6; 
  DWLobbyService *DWLobbyService; 
  bdTask::bdStatus v8; 
  bdLobbyErrorCode ErrorCode; 

  if ( !task && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwstorage.cpp", 1090, ASSERT_TYPE_ASSERT, "(task)", (const char *)&queryFormat, "task") )
    __debugbreak();
  if ( !writeTask && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwstorage.cpp", 1091, ASSERT_TYPE_ASSERT, "(writeTask)", (const char *)&queryFormat, "writeTask") )
    __debugbreak();
  if ( task->u.remoteTask.m_ptr )
  {
    Instance = DWServicesAccess::GetInstance();
    if ( DWServicesAccess::isReady(Instance, task->controllerIndex) )
    {
      v6 = DWServicesAccess::GetInstance();
      DWLobbyService = DWServicesAccess::GetDWLobbyService(v6, task->controllerIndex);
      DWLobbyService->pump(DWLobbyService);
      v8 = task->u.remoteTask.m_ptr->getStatus(task->u.remoteTask.m_ptr);
      ErrorCode = bdRemoteTask::getErrorCode(task->u.remoteTask.m_ptr);
      writeTask->m_error = ErrorCode;
      return dwTaskStatusConvert(v8, ErrorCode);
    }
    else
    {
      return dwStorageHandleTaskError(task, BD_NOT_CONNECTED);
    }
  }
  else
  {
    Com_Printf(25, "Failed to retrieve update file status\n");
    dwStorageHandleTaskError(task, BD_HANDLE_TASK_FAILED);
    return 2;
  }
}

/*
==============
dwCreateFile
==============
*/
__int64 dwCreateFile(overlappedTask *const task, dwMultiFileTask *const fileTask, void *data, const unsigned int dataSize)
{
  DWServicesAccess *Instance; 
  DWServicesAccess *v10; 
  DWStorageContext *StorageContext; 
  bdRemoteTask *m_ptr; 
  bdReference<bdRemoteTask> result; 

  if ( !task && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwstorage.cpp", 282, ASSERT_TYPE_ASSERT, "(task)", (const char *)&queryFormat, "task") )
    __debugbreak();
  if ( !fileTask && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwstorage.cpp", 283, ASSERT_TYPE_ASSERT, "(fileTask)", (const char *)&queryFormat, "fileTask") )
    __debugbreak();
  if ( !fileTask->m_fileName[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwstorage.cpp", 284, ASSERT_TYPE_ASSERT, "(fileTask->m_fileName[0])", (const char *)&queryFormat, "fileTask->m_fileName[0]") )
    __debugbreak();
  Instance = DWServicesAccess::GetInstance();
  if ( DWServicesAccess::isReady(Instance, task->controllerIndex) )
  {
    Com_Printf(25, "Starting creation of file: %s.\n", fileTask->m_fileName[0]);
    v10 = DWServicesAccess::GetInstance();
    StorageContext = DWServicesAccess::GetStorageContext(v10, task->controllerIndex, fileTask->m_context);
    m_ptr = DWStorageContext::uploadFile(StorageContext, &result, fileTask->m_fileName[0], data, dataSize, BD_VISIBLE_PUBLIC, fileTask->m_userAccountID, fileTask->m_infoResult)->m_ptr;
    if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
    {
      if ( result.m_ptr )
        ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
      result.m_ptr = NULL;
    }
    if ( m_ptr )
    {
      bdReference<bdRemoteTask>::operator=(&task->u.remoteTask, m_ptr);
      return 1i64;
    }
    else
    {
      dwStorageHandleTaskError(task, BD_START_TASK_FAILED);
      return 0i64;
    }
  }
  else
  {
    dwStorageHandleTaskError(task, BD_NOT_CONNECTED);
    return 0i64;
  }
}

/*
==============
dwCreateFileComplete
==============
*/
taskCompleteResults dwCreateFileComplete(overlappedTask *const task, dwMultiFileTask *const fileTask)
{
  DWServicesAccess *Instance; 
  DWServicesAccess *v6; 
  DWLobbyService *DWLobbyService; 
  bdTask::bdStatus v8; 
  bdLobbyErrorCode ErrorCode; 

  if ( !task && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwstorage.cpp", 312, ASSERT_TYPE_ASSERT, "(task)", (const char *)&queryFormat, "task") )
    __debugbreak();
  if ( task->u.remoteTask.m_ptr )
  {
    Instance = DWServicesAccess::GetInstance();
    if ( DWServicesAccess::isReady(Instance, task->controllerIndex) )
    {
      v6 = DWServicesAccess::GetInstance();
      DWLobbyService = DWServicesAccess::GetDWLobbyService(v6, task->controllerIndex);
      DWLobbyService->pump(DWLobbyService);
      v8 = task->u.remoteTask.m_ptr->getStatus(task->u.remoteTask.m_ptr);
      ErrorCode = bdRemoteTask::getErrorCode(task->u.remoteTask.m_ptr);
      fileTask->m_error[0] = ErrorCode;
      if ( v8 == BD_DONE )
        fileTask->m_fileSize[0] = fileTask->m_infoResult[0].m_fileSize;
      if ( ErrorCode )
        return dwStorageHandleTaskError(task, ErrorCode);
      else
        return dwTaskStatusConvert(v8, BD_NO_ERROR);
    }
    else
    {
      return dwStorageHandleTaskError(task, BD_NOT_CONNECTED);
    }
  }
  else
  {
    Com_Printf(25, "Failed to retrieve create file status\n");
    dwStorageHandleTaskError(task, BD_HANDLE_TASK_FAILED);
    return 2;
  }
}

/*
==============
dwDeleteFile
==============
*/
__int64 dwDeleteFile(overlappedTask *const task, const char *const filename, const char *context, const bdUserAccountID *userId)
{
  DWServicesAccess *Instance; 
  DWServicesAccess *v10; 
  DWStorageContext *StorageContext; 
  bdRemoteTask *m_ptr; 
  unsigned int v13; 
  overlappedTask::taskShim *p_u; 
  unsigned __int64 userID; 
  bdReference<bdRemoteTask> result; 

  if ( !task && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwstorage.cpp", 658, ASSERT_TYPE_ASSERT, "(task)", (const char *)&queryFormat, "task", -2i64) )
    __debugbreak();
  Instance = DWServicesAccess::GetInstance();
  if ( DWServicesAccess::isReady(Instance, task->controllerIndex) )
  {
    if ( dwGetOnlineUserID(task->controllerIndex, &userID) )
    {
      v10 = DWServicesAccess::GetInstance();
      StorageContext = DWServicesAccess::GetStorageContext(v10, task->controllerIndex, context);
      DWStorageContext::removeFile(StorageContext, &result, filename, userId);
      m_ptr = result.m_ptr;
      if ( result.m_ptr )
      {
        p_u = &task->u;
        if ( &result != (bdReference<bdRemoteTask> *)p_u )
        {
          if ( p_u->remoteTask.m_ptr )
          {
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)&p_u->remoteTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && p_u->remoteTask.m_ptr )
              ((void (__fastcall *)(bdRemoteTask *, __int64))p_u->remoteTask.m_ptr->~bdReferencable)(p_u->remoteTask.m_ptr, 1i64);
            m_ptr = result.m_ptr;
          }
          p_u->remoteTask.m_ptr = m_ptr;
          if ( m_ptr )
          {
            _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
            m_ptr = result.m_ptr;
          }
        }
        v13 = 1;
      }
      else
      {
        dwStorageHandleTaskError(task, BD_START_TASK_FAILED);
        v13 = 0;
        m_ptr = result.m_ptr;
      }
      if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
      {
        if ( result.m_ptr )
          ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
      }
      return v13;
    }
    else
    {
      dwStorageHandleTaskError(task, BD_START_TASK_FAILED);
      return 0i64;
    }
  }
  else
  {
    dwStorageHandleTaskError(task, BD_NOT_CONNECTED);
    return 0i64;
  }
}

/*
==============
dwDeleteFileComplete
==============
*/
taskCompleteResults dwDeleteFileComplete(overlappedTask *const task, const char *context)
{
  DWServicesAccess *Instance; 
  DWServicesAccess *v5; 
  DWLobbyService *DWLobbyService; 
  bdTask::bdStatus v7; 
  bdLobbyErrorCode ErrorCode; 

  if ( !task && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwstorage.cpp", 689, ASSERT_TYPE_ASSERT, "(task)", (const char *)&queryFormat, "task") )
    __debugbreak();
  if ( task->u.remoteTask.m_ptr )
  {
    Instance = DWServicesAccess::GetInstance();
    if ( DWServicesAccess::isReady(Instance, task->controllerIndex) )
    {
      v5 = DWServicesAccess::GetInstance();
      DWLobbyService = DWServicesAccess::GetDWLobbyService(v5, task->controllerIndex);
      DWLobbyService->pump(DWLobbyService);
      v7 = task->u.remoteTask.m_ptr->getStatus(task->u.remoteTask.m_ptr);
      ErrorCode = bdRemoteTask::getErrorCode(task->u.remoteTask.m_ptr);
      if ( ErrorCode == BD_NO_ERROR || ErrorCode == BD_NO_FILE )
        return dwTaskStatusConvert(v7, ErrorCode);
      else
        return dwStorageHandleTaskError(task, ErrorCode);
    }
    else
    {
      return dwStorageHandleTaskError(task, BD_NOT_CONNECTED);
    }
  }
  else
  {
    Com_Printf(25, "Failed to retrieve fetch file status\n");
    return dwStorageHandleTaskError(task, BD_HANDLE_TASK_FAILED);
  }
}

/*
==============
dwFetchFileComplete
==============
*/
taskCompleteResults dwFetchFileComplete(overlappedTask *const task, dwMultiFileTask *const fileTask)
{
  taskCompleteResults result; 
  DWServicesAccess *Instance; 
  DWServicesAccess *v6; 
  DWLobbyService *DWLobbyService; 
  bdTask::bdStatus v8; 
  bdLobbyErrorCode ErrorCode; 
  char v10; 
  bdLobbyErrorCode v11; 

  if ( !task && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwstorage.cpp", 167, ASSERT_TYPE_ASSERT, "(task)", (const char *)&queryFormat, "task") )
    __debugbreak();
  if ( !fileTask && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwstorage.cpp", 168, ASSERT_TYPE_ASSERT, "(fileTask)", (const char *)&queryFormat, "fileTask") )
    __debugbreak();
  if ( task->u.remoteTask.m_ptr )
  {
    Instance = DWServicesAccess::GetInstance();
    if ( DWServicesAccess::isReady(Instance, task->controllerIndex) )
    {
      v6 = DWServicesAccess::GetInstance();
      DWLobbyService = DWServicesAccess::GetDWLobbyService(v6, task->controllerIndex);
      DWLobbyService->pump(DWLobbyService);
      v8 = task->u.remoteTask.m_ptr->getStatus(task->u.remoteTask.m_ptr);
      ErrorCode = bdRemoteTask::getErrorCode(task->u.remoteTask.m_ptr);
      v10 = 0;
      fileTask->m_error[0] = ErrorCode;
      v11 = ErrorCode;
      if ( v8 == BD_DONE && bdRemoteTask::getNumResults(task->u.remoteTask.m_ptr) == 1 )
      {
        v10 = 1;
        fileTask->m_fileSize[0] = *((_DWORD *)&fileTask->m_dataResult[0].__vftable + 6);
      }
      if ( v11 == BD_NO_ERROR || v11 == BD_NO_FILE )
      {
        result = dwTaskStatusConvert(v8, v11);
        if ( v8 == BD_DONE && !v10 )
          return 2;
      }
      else
      {
        return dwStorageHandleTaskError(task, v11);
      }
    }
    else
    {
      return dwStorageHandleTaskError(task, BD_NOT_CONNECTED);
    }
  }
  else
  {
    Com_Printf(25, "Failed to retrieve fetch file status\n");
    return dwStorageHandleTaskError(task, BD_HANDLE_TASK_FAILED);
  }
  return result;
}

/*
==============
dwFetchFileInfo
==============
*/
__int64 dwFetchFileInfo(overlappedTask *const task, dwMultiFileTask *const fileTask)
{
  DWServicesAccess *Instance; 
  bdLobbyErrorCode v5; 
  DWServicesAccess *v6; 
  DWStorageContext *StorageContext; 
  bdRemoteTask *m_ptr; 
  bdReference<bdRemoteTask> result; 

  if ( !task && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwstorage.cpp", 559, ASSERT_TYPE_ASSERT, "(task)", (const char *)&queryFormat, "task") )
    __debugbreak();
  if ( !fileTask && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwstorage.cpp", 560, ASSERT_TYPE_ASSERT, "(fileTask)", (const char *)&queryFormat, "fileTask") )
    __debugbreak();
  if ( !fileTask->m_fileName[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwstorage.cpp", 561, ASSERT_TYPE_ASSERT, "(fileTask->m_fileName[0])", (const char *)&queryFormat, "fileTask->m_fileName[0]") )
    __debugbreak();
  Instance = DWServicesAccess::GetInstance();
  if ( DWServicesAccess::isReady(Instance, task->controllerIndex) )
  {
    Com_Printf(131097, "Starting fetching info for file file: %s.\n", fileTask->m_fileName[0]);
    if ( fileTask->m_fileName[0] )
    {
      v6 = DWServicesAccess::GetInstance();
      StorageContext = DWServicesAccess::GetStorageContext(v6, task->controllerIndex, fileTask->m_context);
      m_ptr = DWStorageContext::listAllPublisherFiles(StorageContext, &result, 0, fileTask->m_infoPublisherResult, 1u, 0, fileTask->m_fileName[0])->m_ptr;
      if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
      {
        if ( result.m_ptr )
          ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
        result.m_ptr = NULL;
      }
      if ( m_ptr )
      {
        bdReference<bdRemoteTask>::operator=(&task->u.remoteTask, m_ptr);
        return 1i64;
      }
    }
    v5 = BD_START_TASK_FAILED;
  }
  else
  {
    v5 = BD_NOT_CONNECTED;
  }
  dwStorageHandleTaskError(task, v5);
  return 0i64;
}

/*
==============
dwFetchFileInfoComplete
==============
*/
taskCompleteResults dwFetchFileInfoComplete(overlappedTask *const task, dwMultiFileTask *const fileTask)
{
  DWServicesAccess *Instance; 
  DWServicesAccess *v6; 
  DWLobbyService *DWLobbyService; 
  bdTask::bdStatus v8; 
  bdLobbyErrorCode ErrorCode; 

  if ( !task && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwstorage.cpp", 591, ASSERT_TYPE_ASSERT, "(task)", (const char *)&queryFormat, "task") )
    __debugbreak();
  if ( task->u.remoteTask.m_ptr )
  {
    Instance = DWServicesAccess::GetInstance();
    if ( DWServicesAccess::isReady(Instance, task->controllerIndex) )
    {
      v6 = DWServicesAccess::GetInstance();
      DWLobbyService = DWServicesAccess::GetDWLobbyService(v6, task->controllerIndex);
      DWLobbyService->pump(DWLobbyService);
      v8 = task->u.remoteTask.m_ptr->getStatus(task->u.remoteTask.m_ptr);
      ErrorCode = bdRemoteTask::getErrorCode(task->u.remoteTask.m_ptr);
      fileTask->m_error[0] = ErrorCode;
      if ( ErrorCode )
        return dwStorageHandleTaskError(task, ErrorCode);
      else
        return dwTaskStatusConvert(v8, BD_NO_ERROR);
    }
    else
    {
      return dwStorageHandleTaskError(task, BD_NOT_CONNECTED);
    }
  }
  else
  {
    Com_Printf(25, "Failed to retrieve file info file status\n");
    dwStorageHandleTaskError(task, BD_HANDLE_TASK_FAILED);
    return 2;
  }
}

/*
==============
dwFetchFileInfoPersonalStorage
==============
*/
__int64 dwFetchFileInfoPersonalStorage(overlappedTask *const task, dwMultiFileTask *const fileTask)
{
  DWServicesAccess *Instance; 
  bdLobbyErrorCode v5; 
  DWServicesAccess *v6; 
  DWStorageContext *StorageContext; 
  bdRemoteTask *m_ptr; 
  bdReference<bdRemoteTask> result; 

  if ( !task && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwstorage.cpp", 526, ASSERT_TYPE_ASSERT, "(task)", (const char *)&queryFormat, "task") )
    __debugbreak();
  if ( !fileTask && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwstorage.cpp", 527, ASSERT_TYPE_ASSERT, "(fileTask)", (const char *)&queryFormat, "fileTask") )
    __debugbreak();
  if ( !fileTask->m_fileName[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwstorage.cpp", 528, ASSERT_TYPE_ASSERT, "(fileTask->m_fileName[0])", (const char *)&queryFormat, "fileTask->m_fileName[0]") )
    __debugbreak();
  Instance = DWServicesAccess::GetInstance();
  if ( DWServicesAccess::isReady(Instance, task->controllerIndex) )
  {
    Com_Printf(131097, "Starting fetching info for file file: %s.\n", fileTask->m_fileName[0]);
    if ( fileTask->m_fileName[0] )
    {
      v6 = DWServicesAccess::GetInstance();
      StorageContext = DWServicesAccess::GetStorageContext(v6, task->controllerIndex, fileTask->m_context);
      m_ptr = DWStorageContext::listFilesByOwner(StorageContext, &result, fileTask->m_userAccountID, 0, fileTask->m_infoResult, 1u, 0, fileTask->m_fileName[0])->m_ptr;
      if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
      {
        if ( result.m_ptr )
          ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
        result.m_ptr = NULL;
      }
      if ( m_ptr )
      {
        bdReference<bdRemoteTask>::operator=(&task->u.remoteTask, m_ptr);
        return 1i64;
      }
    }
    v5 = BD_START_TASK_FAILED;
  }
  else
  {
    v5 = BD_NOT_CONNECTED;
  }
  dwStorageHandleTaskError(task, v5);
  return 0i64;
}

/*
==============
dwFetchPublisherFile
==============
*/
__int64 dwFetchPublisherFile(overlappedTask *const task, dwMultiFileTask *const fileTask)
{
  DWServicesAccess *Instance; 
  unsigned int v6; 
  DWServicesAccess *v7; 
  DWStorageContext *StorageContext; 
  bdRemoteTask *m_ptr; 
  overlappedTask::taskShim *p_u; 
  bdReference<bdRemoteTask> result; 

  if ( !task && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwstorage.cpp", 96, ASSERT_TYPE_ASSERT, "(task)", (const char *)&queryFormat, "task", -2i64) )
    __debugbreak();
  if ( !fileTask && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwstorage.cpp", 97, ASSERT_TYPE_ASSERT, "(fileTask)", (const char *)&queryFormat, "fileTask") )
    __debugbreak();
  if ( !fileTask->m_fileName[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwstorage.cpp", 98, ASSERT_TYPE_ASSERT, "(fileTask->m_fileName[0])", (const char *)&queryFormat, "fileTask->m_fileName[0]") )
    __debugbreak();
  if ( !fileTask->m_buffer[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwstorage.cpp", 99, ASSERT_TYPE_ASSERT, "(fileTask->m_buffer[0])", (const char *)&queryFormat, "fileTask->m_buffer[0]") )
    __debugbreak();
  Instance = DWServicesAccess::GetInstance();
  if ( DWServicesAccess::isReady(Instance, task->controllerIndex) )
  {
    v6 = 0;
    fileTask->m_fileSize[0] = 0;
    *((_QWORD *)&fileTask->m_dataResult[0].__vftable + 2) = fileTask->m_buffer[0];
    *((_DWORD *)&fileTask->m_dataResult[0].__vftable + 6) = fileTask->m_bufferSize[0];
    v7 = DWServicesAccess::GetInstance();
    StorageContext = DWServicesAccess::GetStorageContext(v7, task->controllerIndex, (const char *)&queryFormat.fmt + 3);
    DWStorageContext::getPublisherFile(StorageContext, &result, fileTask->m_fileName[0], fileTask->m_dataResult);
    m_ptr = result.m_ptr;
    if ( result.m_ptr )
    {
      p_u = &task->u;
      if ( &result != (bdReference<bdRemoteTask> *)p_u )
      {
        if ( p_u->remoteTask.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&p_u->remoteTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && p_u->remoteTask.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))p_u->remoteTask.m_ptr->~bdReferencable)(p_u->remoteTask.m_ptr, 1i64);
          m_ptr = result.m_ptr;
        }
        p_u->remoteTask.m_ptr = m_ptr;
        if ( m_ptr )
        {
          _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
          m_ptr = result.m_ptr;
        }
      }
      v6 = 1;
    }
    else
    {
      dwStorageHandleTaskError(task, BD_START_TASK_FAILED);
      m_ptr = result.m_ptr;
    }
    if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
    {
      if ( result.m_ptr )
        ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
    }
    return v6;
  }
  else
  {
    dwStorageHandleTaskError(task, BD_NOT_CONNECTED);
    return 0i64;
  }
}

/*
==============
dwFetchUserFile
==============
*/
__int64 dwFetchUserFile(overlappedTask *const task, dwMultiFileTask *const fileTask)
{
  DWServicesAccess *Instance; 
  unsigned int v6; 
  DWServicesAccess *v7; 
  DWStorageContext *StorageContext; 
  bdRemoteTask *m_ptr; 
  overlappedTask::taskShim *p_u; 
  bdReference<bdRemoteTask> result; 
  unsigned __int64 userID; 

  if ( !task && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwstorage.cpp", 127, ASSERT_TYPE_ASSERT, "(task)", (const char *)&queryFormat, "task", -2i64) )
    __debugbreak();
  if ( !fileTask && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwstorage.cpp", 128, ASSERT_TYPE_ASSERT, "(fileTask)", (const char *)&queryFormat, "fileTask") )
    __debugbreak();
  if ( !fileTask->m_fileName[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwstorage.cpp", 129, ASSERT_TYPE_ASSERT, "(fileTask->m_fileName[0])", (const char *)&queryFormat, "fileTask->m_fileName[0]") )
    __debugbreak();
  if ( !fileTask->m_buffer[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwstorage.cpp", 130, ASSERT_TYPE_ASSERT, "(fileTask->m_buffer[0])", (const char *)&queryFormat, "fileTask->m_buffer[0]") )
    __debugbreak();
  Instance = DWServicesAccess::GetInstance();
  if ( !DWServicesAccess::isReady(Instance, task->controllerIndex) )
  {
    dwStorageHandleTaskError(task, BD_NOT_CONNECTED);
    return 0i64;
  }
  if ( !dwGetOnlineUserID(task->controllerIndex, &userID) )
  {
    Com_Printf(25, "dwFetchUserFile triggering error due to dwGetOnlineUserID failing.\n");
    dwStorageHandleTaskError(task, BD_START_TASK_FAILED);
    return 0i64;
  }
  v6 = 0;
  fileTask->m_fileSize[0] = 0;
  *((_QWORD *)&fileTask->m_dataResult[0].__vftable + 2) = fileTask->m_buffer[0];
  *((_DWORD *)&fileTask->m_dataResult[0].__vftable + 6) = fileTask->m_bufferSize[0];
  v7 = DWServicesAccess::GetInstance();
  StorageContext = DWServicesAccess::GetStorageContext(v7, task->controllerIndex, fileTask->m_context);
  DWStorageContext::getFile(StorageContext, &result, fileTask->m_fileName[0], fileTask->m_dataResult, fileTask->m_userAccountID);
  if ( !result.m_ptr )
  {
    dwStorageHandleTaskError(task, BD_START_TASK_FAILED);
    m_ptr = result.m_ptr;
    goto LABEL_28;
  }
  Com_Printf(25, "dwFetchUserFile: Fetching %s from context %s for user %zu (%s).\n", fileTask->m_fileName[0], fileTask->m_context, fileTask->m_userAccountID[0].m_userID, fileTask->m_userAccountID[0]._bytes_20);
  p_u = &task->u;
  if ( &result != (bdReference<bdRemoteTask> *)p_u )
  {
    if ( p_u->remoteTask.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&p_u->remoteTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && p_u->remoteTask.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))p_u->remoteTask.m_ptr->~bdReferencable)(p_u->remoteTask.m_ptr, 1i64);
    m_ptr = result.m_ptr;
    p_u->remoteTask = result;
    if ( !m_ptr )
      goto LABEL_27;
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
  }
  m_ptr = result.m_ptr;
LABEL_27:
  v6 = 1;
LABEL_28:
  if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
  {
    if ( result.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
  }
  return v6;
}

/*
==============
dwFetchUserFiles
==============
*/
__int64 dwFetchUserFiles(TaskCreateRequest *request, dwMultiFileTask *const fileTask)
{
  unsigned int m_localTaskId; 
  DWServicesAccess *Instance; 
  unsigned int i; 
  __int64 v8; 
  __int64 v9; 
  DWServicesAccess *v10; 
  DWServicesAccess *v11; 
  DWStorageContext *StorageContext; 
  const bdReference<bdRemoteTask> *Files; 
  TaskManager *v14; 
  bdReference<bdRemoteTask> result; 
  TaskCreateResult pTaskCreateResult; 
  unsigned __int64 userID; 
  bdUserAccountID *ownerIDs[24]; 

  m_localTaskId = 0;
  if ( !request && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwstorage.cpp", 223, ASSERT_TYPE_ASSERT, "(request)", (const char *)&queryFormat, "request") )
    __debugbreak();
  if ( !fileTask && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwstorage.cpp", 224, ASSERT_TYPE_ASSERT, "(fileTask)", (const char *)&queryFormat, "fileTask") )
    __debugbreak();
  if ( !fileTask->m_fileCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwstorage.cpp", 225, ASSERT_TYPE_ASSERT, "(fileTask->m_fileCount > 0)", (const char *)&queryFormat, "fileTask->m_fileCount > 0") )
    __debugbreak();
  if ( !fileTask->m_fileName[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwstorage.cpp", 226, ASSERT_TYPE_ASSERT, "(fileTask->m_fileName[0])", (const char *)&queryFormat, "fileTask->m_fileName[0]") )
    __debugbreak();
  if ( !fileTask->m_buffer[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwstorage.cpp", 227, ASSERT_TYPE_ASSERT, "(fileTask->m_buffer[0])", (const char *)&queryFormat, "fileTask->m_buffer[0]") )
    __debugbreak();
  Instance = DWServicesAccess::GetInstance();
  if ( !DWServicesAccess::isReady(Instance, request->m_controllerIndex) )
  {
    Com_Printf(25, "dwFetchUserFiles2 triggering error due to not being connected.\n");
    return 0i64;
  }
  if ( !dwGetOnlineUserID(request->m_controllerIndex, &userID) )
  {
    Com_Printf(25, "dwFetchUserFiles2 triggering error due to dwGetOnlineUserID failing.\n");
    return 0i64;
  }
  for ( i = 0; i < fileTask->m_fileCount; ownerIDs[v8] = &fileTask->m_userAccountID[v8] )
  {
    v8 = i++;
    v9 = v8;
    fileTask->m_fileSize[v8] = 0;
    fileTask->m_queryResult[v9].m_fileData = fileTask->m_buffer[v8];
    fileTask->m_queryResult[v9].m_fileSize = fileTask->m_bufferSize[v8];
  }
  v10 = DWServicesAccess::GetInstance();
  if ( DWServicesAccess::isReady(v10, request->m_controllerIndex) )
  {
    v11 = DWServicesAccess::GetInstance();
    StorageContext = DWServicesAccess::GetStorageContext(v11, request->m_controllerIndex, fileTask->m_context);
    Files = DWStorageContext::getFiles(StorageContext, &result, (const bdUserAccountID *const *)ownerIDs, fileTask->m_fileName, fileTask->m_queryResult, fileTask->m_fileCount);
    bdReference<bdRemoteTask>::operator=(&request->m_remoteDemonwareTask, Files);
    if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
    if ( !request->m_remoteDemonwareTask.m_ptr )
    {
      Com_Printf(25, "dwFetchUserFiles2 triggering error due to no dw task returned.\n");
      return 0i64;
    }
    pTaskCreateResult.m_localTaskId = 0;
    pTaskCreateResult.m_task = NULL;
    v14 = TaskManager::GetInstance();
    if ( TaskManager::CreateTask(v14, request, &pTaskCreateResult) )
    {
      m_localTaskId = pTaskCreateResult.m_localTaskId;
      fileTask->m_taskInUse = 1;
    }
  }
  Com_Printf(25, "dwFetchUserFile: Fetching %s (and other files) from context %s for user %zu (%s).\n", fileTask->m_fileName[0], fileTask->m_context, fileTask->m_userAccountID[0].m_userID, fileTask->m_userAccountID[0]._bytes_20);
  return m_localTaskId;
}

/*
==============
dwGetPublisherObjectMetadatas
==============
*/
_BOOL8 dwGetPublisherObjectMetadatas(TaskCreateRequest *taskRequest, bdObjectStoreGetPublisherObjectsRequest *request, bdObjectStoreGetPublisherObjectMetadatasResponse *response)
{
  DWServicesAccess *Instance; 
  DWServicesAccess *v7; 
  DWObjectStore *ObjectStore; 
  const bdReference<bdRemoteTask> *PublisherObjectMetadatas; 
  TaskManager *v11; 
  TaskCreateResult pTaskCreateResult; 
  bdReference<bdRemoteTask> result; 

  Instance = DWServicesAccess::GetInstance();
  if ( !DWServicesAccess::isReady(Instance, taskRequest->m_controllerIndex) )
    return 0i64;
  v7 = DWServicesAccess::GetInstance();
  ObjectStore = DWServicesAccess::GetObjectStore(v7, taskRequest->m_controllerIndex);
  PublisherObjectMetadatas = DWObjectStore::getPublisherObjectMetadatas(ObjectStore, &result, request, response);
  bdReference<bdRemoteTask>::operator=(&taskRequest->m_remoteDemonwareTask, PublisherObjectMetadatas);
  if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
  {
    if ( result.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
  }
  if ( !taskRequest->m_remoteDemonwareTask.m_ptr )
  {
    dwConnectionErrorHandler(12);
    return 0i64;
  }
  pTaskCreateResult.m_localTaskId = 0;
  pTaskCreateResult.m_task = NULL;
  v11 = TaskManager::GetInstance();
  return TaskManager::CreateTask(v11, taskRequest, &pTaskCreateResult);
}

/*
==============
dwGetPublisherObjects
==============
*/
_BOOL8 dwGetPublisherObjects(TaskCreateRequest *taskRequest, bdObjectStoreGetPublisherObjectsRequest *request, bdObjectStoreGetPublisherObjectsResponse *response)
{
  DWServicesAccess *Instance; 
  DWServicesAccess *v7; 
  DWObjectStore *ObjectStore; 
  const bdReference<bdRemoteTask> *PublisherObjects; 
  TaskManager *v11; 
  TaskCreateResult pTaskCreateResult; 
  bdReference<bdRemoteTask> result; 

  Instance = DWServicesAccess::GetInstance();
  if ( !DWServicesAccess::isReady(Instance, taskRequest->m_controllerIndex) )
    return 0i64;
  v7 = DWServicesAccess::GetInstance();
  ObjectStore = DWServicesAccess::GetObjectStore(v7, taskRequest->m_controllerIndex);
  PublisherObjects = DWObjectStore::getPublisherObjects(ObjectStore, &result, request, response);
  bdReference<bdRemoteTask>::operator=(&taskRequest->m_remoteDemonwareTask, PublisherObjects);
  if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
  {
    if ( result.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
  }
  if ( !taskRequest->m_remoteDemonwareTask.m_ptr )
  {
    dwConnectionErrorHandler(12);
    return 0i64;
  }
  pTaskCreateResult.m_localTaskId = 0;
  pTaskCreateResult.m_task = NULL;
  v11 = TaskManager::GetInstance();
  return TaskManager::CreateTask(v11, taskRequest, &pTaskCreateResult);
}

/*
==============
dwGetPublisherVariable
==============
*/
_BOOL8 dwGetPublisherVariable(const int controllerIndex, const char *const nameSpace, const char *const name, char *const value, int size)
{
  DWServicesAccess *Instance; 
  DWServicesAccess *v10; 
  DWPublisherVariables *PublisherVariables; 

  Instance = DWServicesAccess::GetInstance();
  if ( !DWServicesAccess::isReady(Instance, controllerIndex) )
    return 0i64;
  v10 = DWServicesAccess::GetInstance();
  PublisherVariables = DWServicesAccess::GetPublisherVariables(v10, controllerIndex);
  return DWPublisherVariables::getPublisherVariable(PublisherVariables, nameSpace, name, value, size);
}

/*
==============
dwGetPublisherVariableKeyValueByIterator
==============
*/
_BOOL8 dwGetPublisherVariableKeyValueByIterator(const int controllerIndex, bdPublisherVariablesIterator *iterator, char *const key, unsigned int keySize, char *const value, unsigned int valueSize)
{
  DWServicesAccess *Instance; 
  DWServicesAccess *v11; 
  DWPublisherVariables *PublisherVariables; 
  bdPublisherVariablesIterator v15; 

  _RBP = iterator;
  Instance = DWServicesAccess::GetInstance();
  if ( !DWServicesAccess::isReady(Instance, controllerIndex) )
    return 0i64;
  v11 = DWServicesAccess::GetInstance();
  PublisherVariables = DWServicesAccess::GetPublisherVariables(v11, controllerIndex);
  __asm
  {
    vmovups xmm0, xmmword ptr [rbp+0]
    vmovups xmmword ptr [rsp+48h+var_18.m_it], xmm0
  }
  return DWPublisherVariables::getKeyValueByIterator(PublisherVariables, &v15, key, keySize, value, valueSize);
}

/*
==============
dwGetPublisherVariablesIterator
==============
*/
_BOOL8 dwGetPublisherVariablesIterator(const int controllerIndex, const char *const nameSpace, bdPublisherVariablesIterator *iterator)
{
  DWServicesAccess *Instance; 
  DWServicesAccess *v7; 
  DWPublisherVariables *PublisherVariables; 

  Instance = DWServicesAccess::GetInstance();
  if ( !DWServicesAccess::isReady(Instance, controllerIndex) )
    return 0i64;
  v7 = DWServicesAccess::GetInstance();
  PublisherVariables = DWServicesAccess::GetPublisherVariables(v7, controllerIndex);
  return DWPublisherVariables::getIterator(PublisherVariables, nameSpace, iterator);
}

/*
==============
dwGetUserObjectsVectorized
==============
*/
_BOOL8 dwGetUserObjectsVectorized(TaskCreateRequest *taskRequest, const bdObjectStoreGetUserObjectsVectorizedRequest *request, bdObjectStoreGetUserObjectsVectorizedResponse *response)
{
  DWServicesAccess *Instance; 
  DWServicesAccess *v7; 
  DWObjectStore *ObjectStore; 
  const bdReference<bdRemoteTask> *UserObjectsVectorized; 
  TaskManager *v11; 
  TaskCreateResult pTaskCreateResult; 
  bdReference<bdRemoteTask> result; 

  Instance = DWServicesAccess::GetInstance();
  if ( !DWServicesAccess::isReady(Instance, taskRequest->m_controllerIndex) )
    return 0i64;
  v7 = DWServicesAccess::GetInstance();
  ObjectStore = DWServicesAccess::GetObjectStore(v7, taskRequest->m_controllerIndex);
  UserObjectsVectorized = DWObjectStore::getUserObjectsVectorized(ObjectStore, &result, request, response);
  bdReference<bdRemoteTask>::operator=(&taskRequest->m_remoteDemonwareTask, UserObjectsVectorized);
  if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
  {
    if ( result.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
  }
  if ( !taskRequest->m_remoteDemonwareTask.m_ptr )
  {
    dwConnectionErrorHandler(12);
    return 0i64;
  }
  pTaskCreateResult.m_localTaskId = 0;
  pTaskCreateResult.m_task = NULL;
  v11 = TaskManager::GetInstance();
  return TaskManager::CreateTask(v11, taskRequest, &pTaskCreateResult);
}

/*
==============
dwListPublisherObjectsByCategory
==============
*/
_BOOL8 dwListPublisherObjectsByCategory(TaskCreateRequest *taskRequest, bdObjectStoreListPublisherObjectsByCategoryRequest *request, bdObjectStoreListPublisherObjectsByCategoryResponse *response)
{
  DWServicesAccess *Instance; 
  DWServicesAccess *v7; 
  DWObjectStore *ObjectStore; 
  const bdReference<bdRemoteTask> *v9; 
  TaskManager *v11; 
  TaskCreateResult pTaskCreateResult; 
  bdReference<bdRemoteTask> result; 

  Instance = DWServicesAccess::GetInstance();
  if ( !DWServicesAccess::isReady(Instance, taskRequest->m_controllerIndex) )
    return 0i64;
  v7 = DWServicesAccess::GetInstance();
  ObjectStore = DWServicesAccess::GetObjectStore(v7, taskRequest->m_controllerIndex);
  v9 = DWObjectStore::listPublisherObjectsByCategory(ObjectStore, &result, request, response);
  bdReference<bdRemoteTask>::operator=(&taskRequest->m_remoteDemonwareTask, v9);
  if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
  {
    if ( result.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
  }
  if ( !taskRequest->m_remoteDemonwareTask.m_ptr )
  {
    dwConnectionErrorHandler(12);
    return 0i64;
  }
  pTaskCreateResult.m_localTaskId = 0;
  pTaskCreateResult.m_task = NULL;
  v11 = TaskManager::GetInstance();
  return TaskManager::CreateTask(v11, taskRequest, &pTaskCreateResult);
}

/*
==============
dwListUserObjectsByCategory
==============
*/
_BOOL8 dwListUserObjectsByCategory(TaskCreateRequest *taskRequest, bdObjectStoreListUserObjectsByCategoryRequest *request, bdObjectStoreListUserObjectsByCategoryResponse *response)
{
  DWServicesAccess *Instance; 
  DWServicesAccess *v7; 
  DWObjectStore *ObjectStore; 
  const bdReference<bdRemoteTask> *v9; 
  TaskManager *v11; 
  TaskCreateResult pTaskCreateResult; 
  bdReference<bdRemoteTask> result; 

  Instance = DWServicesAccess::GetInstance();
  if ( !DWServicesAccess::isReady(Instance, taskRequest->m_controllerIndex) )
    return 0i64;
  v7 = DWServicesAccess::GetInstance();
  ObjectStore = DWServicesAccess::GetObjectStore(v7, taskRequest->m_controllerIndex);
  v9 = DWObjectStore::listUserObjectsByCategory(ObjectStore, &result, request, response);
  bdReference<bdRemoteTask>::operator=(&taskRequest->m_remoteDemonwareTask, v9);
  if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
  {
    if ( result.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
  }
  if ( !taskRequest->m_remoteDemonwareTask.m_ptr )
  {
    dwConnectionErrorHandler(12);
    return 0i64;
  }
  pTaskCreateResult.m_localTaskId = 0;
  pTaskCreateResult.m_task = NULL;
  v11 = TaskManager::GetInstance();
  return TaskManager::CreateTask(v11, taskRequest, &pTaskCreateResult);
}

/*
==============
dwPublisherVariableSubscribeToGroup
==============
*/
_BOOL8 dwPublisherVariableSubscribeToGroup(TaskCreateRequest *request, unsigned int group)
{
  DWServicesAccess *Instance; 
  DWServicesAccess *v5; 
  DWPublisherVariables *PublisherVariables; 
  const bdReference<bdRemoteTask> *v7; 
  TaskManager *v9; 
  TaskCreateResult pTaskCreateResult; 
  bdReference<bdRemoteTask> result; 

  if ( !request )
    return 0i64;
  Instance = DWServicesAccess::GetInstance();
  if ( !DWServicesAccess::isReady(Instance, request->m_controllerIndex) )
    return 0i64;
  v5 = DWServicesAccess::GetInstance();
  PublisherVariables = DWServicesAccess::GetPublisherVariables(v5, request->m_controllerIndex);
  v7 = DWPublisherVariables::subscribeToGroup(PublisherVariables, &result, group);
  bdReference<bdRemoteTask>::operator=(&request->m_remoteDemonwareTask, v7);
  if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
  {
    if ( result.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
  }
  if ( !request->m_remoteDemonwareTask.m_ptr )
  {
    dwConnectionErrorHandler(12);
    return 0i64;
  }
  pTaskCreateResult.m_localTaskId = 0;
  pTaskCreateResult.m_task = NULL;
  v9 = TaskManager::GetInstance();
  return TaskManager::CreateTask(v9, request, &pTaskCreateResult);
}

/*
==============
dwRetrievePublisherVariables
==============
*/
_BOOL8 dwRetrievePublisherVariables(TaskCreateRequest *request, const char *const nameSpace)
{
  DWServicesAccess *Instance; 
  DWServicesAccess *v5; 
  DWPublisherVariables *PublisherVariables; 
  const bdReference<bdRemoteTask> *v7; 
  TaskManager *v9; 
  TaskCreateResult pTaskCreateResult; 
  bdReference<bdRemoteTask> result; 

  if ( !request )
    return 0i64;
  Instance = DWServicesAccess::GetInstance();
  if ( !DWServicesAccess::isReady(Instance, request->m_controllerIndex) )
    return 0i64;
  v5 = DWServicesAccess::GetInstance();
  PublisherVariables = DWServicesAccess::GetPublisherVariables(v5, request->m_controllerIndex);
  v7 = DWPublisherVariables::retrievePublisherVariables(PublisherVariables, &result, nameSpace);
  bdReference<bdRemoteTask>::operator=(&request->m_remoteDemonwareTask, v7);
  if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
  {
    if ( result.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
  }
  if ( !request->m_remoteDemonwareTask.m_ptr )
  {
    dwConnectionErrorHandler(12);
    return 0i64;
  }
  pTaskCreateResult.m_localTaskId = 0;
  pTaskCreateResult.m_task = NULL;
  v9 = TaskManager::GetInstance();
  return TaskManager::CreateTask(v9, request, &pTaskCreateResult);
}

/*
==============
dwRetrievePublisherVariables
==============
*/
_BOOL8 dwRetrievePublisherVariables(TaskCreateRequest *request, const char *const *nameSpaces, const unsigned __int16 numNameSpaces)
{
  DWServicesAccess *Instance; 
  DWServicesAccess *v7; 
  DWPublisherVariables *PublisherVariables; 
  const bdReference<bdRemoteTask> *v9; 
  TaskManager *v11; 
  TaskCreateResult pTaskCreateResult; 
  bdReference<bdRemoteTask> result; 

  if ( !request )
    return 0i64;
  Instance = DWServicesAccess::GetInstance();
  if ( !DWServicesAccess::isReady(Instance, request->m_controllerIndex) )
    return 0i64;
  v7 = DWServicesAccess::GetInstance();
  PublisherVariables = DWServicesAccess::GetPublisherVariables(v7, request->m_controllerIndex);
  v9 = DWPublisherVariables::retrievePublisherVariables(PublisherVariables, &result, nameSpaces, numNameSpaces);
  bdReference<bdRemoteTask>::operator=(&request->m_remoteDemonwareTask, v9);
  if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
  {
    if ( result.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
  }
  if ( !request->m_remoteDemonwareTask.m_ptr )
  {
    dwConnectionErrorHandler(12);
    return 0i64;
  }
  pTaskCreateResult.m_localTaskId = 0;
  pTaskCreateResult.m_task = NULL;
  v11 = TaskManager::GetInstance();
  return TaskManager::CreateTask(v11, request, &pTaskCreateResult);
}

/*
==============
dwStorageHandleTaskError
==============
*/
__int64 dwStorageHandleTaskError(overlappedTask *const task, bdLobbyErrorCode errorCode)
{
  __int64 type; 
  char buffer[64]; 

  if ( !task && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwstorage.cpp", 628, ASSERT_TYPE_ASSERT, "(task)", (const char *)&queryFormat, "task") )
    __debugbreak();
  Com_Printf(25, "%s()\n", "dwStorageHandleTaskError");
  dwLobbyErrorCodeToString(errorCode, buffer, 0x40u);
  type = (unsigned int)task->type;
  if ( errorCode == BD_NOT_CONNECTED )
    Com_Printf(25, "\t Task start requested while not connected! DW storage task type %d errorCode %i - '%s'\n", type, 2i64, buffer);
  else
    Com_PrintError(25, "\t DW storage task type %d errorCode %i - '%s'\n", type, (unsigned int)errorCode, buffer);
  TaskManager_ClearTask(task);
  if ( errorCode == BD_TOO_MANY_TASKS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwstorage.cpp", 649, ASSERT_TYPE_ASSERT, "(errorCode != BD_TOO_MANY_TASKS)", (const char *)&queryFormat, "errorCode != BD_TOO_MANY_TASKS") )
    __debugbreak();
  return 2i64;
}

/*
==============
dwUpdateAndValidateFiles
==============
*/
__int64 dwUpdateAndValidateFiles(TaskCreateRequest *request, dwMultiFileTask *const fileTask)
{
  unsigned int m_localTaskId; 
  DWServicesAccess *Instance; 
  DWServicesAccess *v7; 
  DWServicesAccess *v8; 
  DWStorageContext *StorageContext; 
  const bdReference<bdRemoteTask> *v10; 
  TaskManager *v11; 
  TaskCreateResult pTaskCreateResult; 
  bdReference<bdRemoteTask> result; 
  unsigned __int64 userID; 

  m_localTaskId = 0;
  if ( !request && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwstorage.cpp", 475, ASSERT_TYPE_ASSERT, "(request)", (const char *)&queryFormat, "request") )
    __debugbreak();
  if ( !fileTask && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwstorage.cpp", 476, ASSERT_TYPE_ASSERT, "(fileTask)", (const char *)&queryFormat, "fileTask") )
    __debugbreak();
  if ( !fileTask->m_fileCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwstorage.cpp", 477, ASSERT_TYPE_ASSERT, "(fileTask->m_fileCount > 0)", (const char *)&queryFormat, "fileTask->m_fileCount > 0") )
    __debugbreak();
  if ( !fileTask->m_fileName[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwstorage.cpp", 478, ASSERT_TYPE_ASSERT, "(fileTask->m_fileName[0])", (const char *)&queryFormat, "fileTask->m_fileName[0]") )
    __debugbreak();
  Instance = DWServicesAccess::GetInstance();
  if ( !DWServicesAccess::isReady(Instance, request->m_controllerIndex) )
  {
    Com_Printf(25, "dwUpdateAndValidateFiles triggering error due to not being connected.\n");
    return 0i64;
  }
  if ( !dwGetOnlineUserID(request->m_controllerIndex, &userID) )
  {
    Com_Printf(25, "dwUpdateAndValidateFiles triggering error due to dwGetOnlineUserID failing.\n");
    return 0i64;
  }
  v7 = DWServicesAccess::GetInstance();
  if ( DWServicesAccess::isReady(v7, request->m_controllerIndex) )
  {
    v8 = DWServicesAccess::GetInstance();
    StorageContext = DWServicesAccess::GetStorageContext(v8, request->m_controllerIndex, fileTask->m_context);
    v10 = DWStorageContext::uploadAndValidateFiles(StorageContext, &result, fileTask, fileTask->m_validatedFileInfo);
    bdReference<bdRemoteTask>::operator=(&request->m_remoteDemonwareTask, v10);
    if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
    if ( !request->m_remoteDemonwareTask.m_ptr )
    {
      Com_Printf(25, "dwUpdateAndValidateFiles triggering error due to no dw task returned.\n");
      return 0i64;
    }
    pTaskCreateResult.m_localTaskId = 0;
    pTaskCreateResult.m_task = NULL;
    v11 = TaskManager::GetInstance();
    if ( TaskManager::CreateTask(v11, request, &pTaskCreateResult) )
    {
      m_localTaskId = pTaskCreateResult.m_localTaskId;
      fileTask->m_taskInUse = 1;
    }
  }
  Com_Printf(25, "dwUpdateAndValidateFiles: Updating %s (and other files) from context %s for user %zu (%s).\n", fileTask->m_fileName[0], fileTask->m_context, fileTask->m_userAccountID[0].m_userID, fileTask->m_userAccountID[0]._bytes_20);
  return m_localTaskId;
}

/*
==============
dwUpdateFile
==============
*/
__int64 dwUpdateFile(overlappedTask *const task, dwMultiFileTask *const fileTask, void *data, const unsigned int dataSize)
{
  DWServicesAccess *Instance; 
  DWServicesAccess *v10; 
  DWStorageContext *StorageContext; 
  bdRemoteTask *m_ptr; 
  bdReference<bdRemoteTask> result; 

  if ( !task && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwstorage.cpp", 354, ASSERT_TYPE_ASSERT, "(task)", (const char *)&queryFormat, "task") )
    __debugbreak();
  if ( !fileTask && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwstorage.cpp", 355, ASSERT_TYPE_ASSERT, "(fileTask)", (const char *)&queryFormat, "fileTask") )
    __debugbreak();
  if ( !fileTask->m_fileName[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwstorage.cpp", 356, ASSERT_TYPE_ASSERT, "(fileTask->m_fileName[0])", (const char *)&queryFormat, "fileTask->m_fileName[0]") )
    __debugbreak();
  Instance = DWServicesAccess::GetInstance();
  if ( DWServicesAccess::isReady(Instance, task->controllerIndex) )
  {
    Com_Printf(25, "Starting update of file: %s.\n", fileTask->m_fileName[0]);
    v10 = DWServicesAccess::GetInstance();
    StorageContext = DWServicesAccess::GetStorageContext(v10, task->controllerIndex, fileTask->m_context);
    m_ptr = DWStorageContext::uploadFile(StorageContext, &result, fileTask->m_fileName[0], data, dataSize, BD_VISIBLE_PUBLIC, fileTask->m_userAccountID, fileTask->m_infoResult)->m_ptr;
    if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
    {
      if ( result.m_ptr )
        ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
      result.m_ptr = NULL;
    }
    if ( m_ptr )
    {
      bdReference<bdRemoteTask>::operator=(&task->u.remoteTask, m_ptr);
      return 1i64;
    }
    else
    {
      dwStorageHandleTaskError(task, BD_START_TASK_FAILED);
      return 0i64;
    }
  }
  else
  {
    dwStorageHandleTaskError(task, BD_NOT_CONNECTED);
    return 0i64;
  }
}

/*
==============
dwUpdateFileComplete
==============
*/
taskCompleteResults dwUpdateFileComplete(overlappedTask *const task, dwMultiFileTask *fileTask)
{
  DWServicesAccess *Instance; 
  DWServicesAccess *v6; 
  DWLobbyService *DWLobbyService; 
  bdTask::bdStatus v8; 
  bdLobbyErrorCode ErrorCode; 

  if ( !task && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwstorage.cpp", 384, ASSERT_TYPE_ASSERT, "(task)", (const char *)&queryFormat, "task") )
    __debugbreak();
  if ( task->u.remoteTask.m_ptr )
  {
    Instance = DWServicesAccess::GetInstance();
    if ( DWServicesAccess::isReady(Instance, task->controllerIndex) )
    {
      v6 = DWServicesAccess::GetInstance();
      DWLobbyService = DWServicesAccess::GetDWLobbyService(v6, task->controllerIndex);
      DWLobbyService->pump(DWLobbyService);
      v8 = task->u.remoteTask.m_ptr->getStatus(task->u.remoteTask.m_ptr);
      ErrorCode = bdRemoteTask::getErrorCode(task->u.remoteTask.m_ptr);
      fileTask->m_error[0] = ErrorCode;
      if ( ErrorCode )
        return dwStorageHandleTaskError(task, ErrorCode);
      else
        return dwTaskStatusConvert(v8, BD_NO_ERROR);
    }
    else
    {
      return dwStorageHandleTaskError(task, BD_NOT_CONNECTED);
    }
  }
  else
  {
    Com_Printf(25, "Failed to retrieve update file status\n");
    dwStorageHandleTaskError(task, BD_HANDLE_TASK_FAILED);
    return 2;
  }
}

/*
==============
dwUpdateFiles
==============
*/
__int64 dwUpdateFiles(TaskCreateRequest *request, dwMultiFileTask *const fileTask)
{
  unsigned int m_localTaskId; 
  DWServicesAccess *Instance; 
  DWServicesAccess *v7; 
  DWServicesAccess *v8; 
  DWStorageContext *StorageContext; 
  const bdReference<bdRemoteTask> *v10; 
  TaskManager *v11; 
  TaskCreateResult pTaskCreateResult; 
  bdReference<bdRemoteTask> result; 
  unsigned __int64 userID; 

  m_localTaskId = 0;
  if ( !request && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwstorage.cpp", 423, ASSERT_TYPE_ASSERT, "(request)", (const char *)&queryFormat, "request") )
    __debugbreak();
  if ( !fileTask && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwstorage.cpp", 424, ASSERT_TYPE_ASSERT, "(fileTask)", (const char *)&queryFormat, "fileTask") )
    __debugbreak();
  if ( !fileTask->m_fileCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwstorage.cpp", 425, ASSERT_TYPE_ASSERT, "(fileTask->m_fileCount > 0)", (const char *)&queryFormat, "fileTask->m_fileCount > 0") )
    __debugbreak();
  if ( !fileTask->m_fileName[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwstorage.cpp", 426, ASSERT_TYPE_ASSERT, "(fileTask->m_fileName[0])", (const char *)&queryFormat, "fileTask->m_fileName[0]") )
    __debugbreak();
  Instance = DWServicesAccess::GetInstance();
  if ( !DWServicesAccess::isReady(Instance, request->m_controllerIndex) )
  {
    Com_Printf(25, "dwUpdateFiles triggering error due to not being connected.\n");
    return 0i64;
  }
  if ( !dwGetOnlineUserID(request->m_controllerIndex, &userID) )
  {
    Com_Printf(25, "dwUpdateFiles triggering error due to dwGetOnlineUserID failing.\n");
    return 0i64;
  }
  v7 = DWServicesAccess::GetInstance();
  if ( DWServicesAccess::isReady(v7, request->m_controllerIndex) )
  {
    v8 = DWServicesAccess::GetInstance();
    StorageContext = DWServicesAccess::GetStorageContext(v8, request->m_controllerIndex, fileTask->m_context);
    v10 = DWStorageContext::uploadFiles(StorageContext, &result, fileTask, fileTask->m_infoResult);
    bdReference<bdRemoteTask>::operator=(&request->m_remoteDemonwareTask, v10);
    if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
    if ( !request->m_remoteDemonwareTask.m_ptr )
    {
      Com_Printf(25, "dwUpdateFiles triggering error due to no dw task returned.\n");
      return 0i64;
    }
    pTaskCreateResult.m_localTaskId = 0;
    pTaskCreateResult.m_task = NULL;
    v11 = TaskManager::GetInstance();
    if ( TaskManager::CreateTask(v11, request, &pTaskCreateResult) )
      m_localTaskId = pTaskCreateResult.m_localTaskId;
  }
  Com_Printf(25, "dwUpdateFiles: Updating %s (and other files) from context %s for user %zu (%s).\n", fileTask->m_fileName[0], fileTask->m_context, fileTask->m_userAccountID[0].m_userID, fileTask->m_userAccountID[0]._bytes_20);
  return m_localTaskId;
}

/*
==============
dwUploadUserObjectsVectorized
==============
*/
_BOOL8 dwUploadUserObjectsVectorized(TaskCreateRequest *taskRequest, const bdObjectStoreUploadUserObjectsVectorizedRequest *request, bdObjectStoreUploadUserObjectsVectorizedResponse *response)
{
  DWServicesAccess *Instance; 
  DWServicesAccess *v7; 
  DWObjectStore *ObjectStore; 
  const bdReference<bdRemoteTask> *v9; 
  TaskManager *v11; 
  TaskCreateResult pTaskCreateResult; 
  bdReference<bdRemoteTask> result; 

  Instance = DWServicesAccess::GetInstance();
  if ( !DWServicesAccess::isReady(Instance, taskRequest->m_controllerIndex) )
    return 0i64;
  v7 = DWServicesAccess::GetInstance();
  ObjectStore = DWServicesAccess::GetObjectStore(v7, taskRequest->m_controllerIndex);
  v9 = DWObjectStore::uploadUserObjectsVectorized(ObjectStore, &result, request, response);
  bdReference<bdRemoteTask>::operator=(&taskRequest->m_remoteDemonwareTask, v9);
  if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
  {
    if ( result.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
  }
  if ( !taskRequest->m_remoteDemonwareTask.m_ptr )
  {
    dwConnectionErrorHandler(12);
    return 0i64;
  }
  pTaskCreateResult.m_localTaskId = 0;
  pTaskCreateResult.m_task = NULL;
  v11 = TaskManager::GetInstance();
  return TaskManager::CreateTask(v11, taskRequest, &pTaskCreateResult);
}

