/*
==============
PooledStorage_FileManager_UploadFile
==============
*/

bool __fastcall PooledStorage_FileManager_UploadFile(int controllerIndex, pooledStorageWriteFileInfo *const fileInfo)
{
  return ?PooledStorage_FileManager_UploadFile@@YA_NHQEAUpooledStorageWriteFileInfo@@@Z(controllerIndex, fileInfo);
}

/*
==============
PooledStorage_FileManager_UploadFileComplete
==============
*/

void __fastcall PooledStorage_FileManager_UploadFileComplete(GenericTask *pTask, eTaskManagerTaskState taskState)
{
  ?PooledStorage_FileManager_UploadFileComplete@@YAXPEAVGenericTask@@W4eTaskManagerTaskState@@@Z(pTask, taskState);
}

/*
==============
PooledStorage_FileManager_UploadFile
==============
*/
bool PooledStorage_FileManager_UploadFile(int controllerIndex, pooledStorageWriteFileInfo *const fileInfo)
{
  unsigned int m_numTags; 
  unsigned int v5; 
  _BYTE *bytes_20; 
  DWServicesAccess *Instance; 
  DWPooledStorage *PooledStorage; 
  TaskCreateRequest *v9; 
  bdRemoteTask *v10; 
  bdRemoteTask *m_ptr; 
  DWServicesAccess *v12; 
  DWPooledStorage *v13; 
  TaskCreateRequest *v14; 
  bdRemoteTask *v15; 
  TaskManager *v16; 
  TaskCreateResult pTaskCreateResult; 
  bdReference<bdRemoteTask> result; 
  bdReference<bdRemoteTask> v20; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\pooled_storage_file_manager.cpp", 41, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  m_numTags = fileInfo->m_numTags;
  v5 = 0;
  pTaskCreateResult.m_localTaskId = 0;
  pTaskCreateResult.m_task = NULL;
  if ( m_numTags )
  {
    bytes_20 = fileInfo->m_tags[0]._bytes_20;
    while ( *(_QWORD *)bytes_20 != 4i64 )
    {
      ++v5;
      bytes_20 += 64;
      if ( v5 >= m_numTags )
        goto LABEL_8;
    }
  }
  else
  {
LABEL_8:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\pooled_storage_file_manager.cpp", 59, ASSERT_TYPE_ASSERT, "(ownerUserIDTagFound)", "%s\n\tPooledStorage_FileManager_UploadFile : No Owner user id tag set", "ownerUserIDTagFound") )
      __debugbreak();
  }
  s_pooledStorageRequestTask.m_controllerIndex = controllerIndex;
  s_pooledStorageRequestTask.m_appData = fileInfo;
  if ( fileInfo->m_uploadHandler )
  {
    Instance = DWServicesAccess::GetInstance();
    PooledStorage = DWServicesAccess::GetPooledStorage(Instance, controllerIndex);
    v9 = (TaskCreateRequest *)DWPooledStorage::upload(PooledStorage, &result, fileInfo->m_uploadHandler, fileInfo->m_category, fileInfo->m_fileName, fileInfo->m_numTags, fileInfo->m_tags, &fileInfo->m_outFileID, NULL);
    if ( v9 != (TaskCreateRequest *)&s_pooledStorageRequestTask.m_remoteDemonwareTask )
    {
      if ( s_pooledStorageRequestTask.m_remoteDemonwareTask.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&s_pooledStorageRequestTask.m_remoteDemonwareTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && s_pooledStorageRequestTask.m_remoteDemonwareTask.m_ptr )
        ((void (__fastcall *)(bdRemoteTask *, __int64))s_pooledStorageRequestTask.m_remoteDemonwareTask.m_ptr->~bdReferencable)(s_pooledStorageRequestTask.m_remoteDemonwareTask.m_ptr, 1i64);
      v10 = *(bdRemoteTask **)&v9->m_controllerIndex;
      s_pooledStorageRequestTask.m_remoteDemonwareTask.m_ptr = v10;
      if ( v10 )
        _InterlockedExchangeAdd((volatile signed __int32 *)&v10->m_refCount, 1u);
    }
    if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
    {
      m_ptr = result.m_ptr;
      goto LABEL_31;
    }
  }
  else
  {
    v12 = DWServicesAccess::GetInstance();
    v13 = DWServicesAccess::GetPooledStorage(v12, controllerIndex);
    v14 = (TaskCreateRequest *)DWPooledStorage::upload(v13, &v20, fileInfo->m_fileData, fileInfo->m_fileSize, fileInfo->m_category, fileInfo->m_fileName, fileInfo->m_numTags, fileInfo->m_tags, &fileInfo->m_outFileID);
    if ( v14 != (TaskCreateRequest *)&s_pooledStorageRequestTask.m_remoteDemonwareTask )
    {
      if ( s_pooledStorageRequestTask.m_remoteDemonwareTask.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&s_pooledStorageRequestTask.m_remoteDemonwareTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && s_pooledStorageRequestTask.m_remoteDemonwareTask.m_ptr )
        ((void (__fastcall *)(bdRemoteTask *, __int64))s_pooledStorageRequestTask.m_remoteDemonwareTask.m_ptr->~bdReferencable)(s_pooledStorageRequestTask.m_remoteDemonwareTask.m_ptr, 1i64);
      v15 = *(bdRemoteTask **)&v14->m_controllerIndex;
      s_pooledStorageRequestTask.m_remoteDemonwareTask.m_ptr = v15;
      if ( v15 )
        _InterlockedExchangeAdd((volatile signed __int32 *)&v15->m_refCount, 1u);
    }
    if ( v20.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v20.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
    {
      m_ptr = v20.m_ptr;
LABEL_31:
      if ( m_ptr )
        ((void (__fastcall *)(bdRemoteTask *, __int64))m_ptr->~bdReferencable)(m_ptr, 1i64);
    }
  }
  if ( s_pooledStorageRequestTask.m_remoteDemonwareTask.m_ptr )
  {
    s_pooledStorageRequestTask.m_onCompletionCallback = PooledStorage_FileManager_UploadFileComplete;
    v16 = TaskManager::GetInstance();
    return TaskManager::CreateTask(v16, &s_pooledStorageRequestTask, &pTaskCreateResult);
  }
  else
  {
    Com_Printf(25, "This was a failure\n");
    return 0;
  }
}

/*
==============
PooledStorage_FileManager_UploadFileComplete
==============
*/
void PooledStorage_FileManager_UploadFileComplete(GenericTask *pTask, eTaskManagerTaskState taskState)
{
  _QWORD *m_appData; 
  bdLobbyErrorCode ErrorCode; 
  void (__fastcall *v5)(_QWORD, _QWORD, unsigned __int64, __int64); 
  __int64 v6; 
  unsigned __int64 TransactionID; 
  bdLobbyErrorCode v8; 

  m_appData = pTask->m_appData;
  if ( taskState )
  {
    if ( (unsigned int)(taskState - 1) > 4 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\pooled_storage_file_manager.cpp", 30, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled task state %d", taskState) )
        __debugbreak();
    }
    else
    {
      ErrorCode = bdRemoteTask::getErrorCode(pTask->m_remoteDemonwareTask.m_ptr);
      Com_Printf(25, "PooledStorage_FileManager_UploadFileComplete: File upload failed with error code %d\n", (unsigned int)ErrorCode);
      v5 = (void (__fastcall *)(_QWORD, _QWORD, unsigned __int64, __int64))m_appData[2094];
      v6 = m_appData[2091];
      TransactionID = bdRemoteTask::getTransactionID(pTask->m_remoteDemonwareTask.m_ptr);
      v8 = bdRemoteTask::getErrorCode(pTask->m_remoteDemonwareTask.m_ptr);
      v5((unsigned int)pTask->m_controllerIndex, (unsigned int)v8, TransactionID, v6);
    }
  }
  else
  {
    Com_Printf(25, "PooledStorage_FileManager_UploadFileComplete: File upload successful for controller %d\n", (unsigned int)pTask->m_controllerIndex);
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))m_appData[2093])((unsigned int)pTask->m_controllerIndex, m_appData[2087], m_appData[2091]);
  }
  if ( s_pooledStorageRequestTask.m_remoteDemonwareTask.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&s_pooledStorageRequestTask.m_remoteDemonwareTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && s_pooledStorageRequestTask.m_remoteDemonwareTask.m_ptr )
    ((void (__fastcall *)(bdRemoteTask *, __int64))s_pooledStorageRequestTask.m_remoteDemonwareTask.m_ptr->~bdReferencable)(s_pooledStorageRequestTask.m_remoteDemonwareTask.m_ptr, 1i64);
  s_pooledStorageRequestTask.m_remoteDemonwareTask.m_ptr = NULL;
}

