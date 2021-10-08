/*
==============
bdStorage::getPublisherFiles
==============
*/

bdReference<bdRemoteTask> *__fastcall bdStorage::getPublisherFiles(bdStorage *this, bdReference<bdRemoteTask> *result, const char *const *fileNames, bdFileQueryResult *const files, unsigned int num_files)
{
  return ?getPublisherFiles@bdStorage@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBQEBDQEAVbdFileQueryResult@@I@Z(this, result, fileNames, files, num_files);
}

/*
==============
bdStorage::uploadAndValidateFiles
==============
*/

bdReference<bdRemoteTask> *__fastcall bdStorage::uploadAndValidateFiles(bdStorage *this, bdReference<bdRemoteTask> *result, const bdUploadFilesInfo *files, const unsigned int count, const unsigned int __formal, const bdUserAccountID *ownerID, bdValidatedContextUserStorageFileInfo *const fileInfo)
{
  return ?uploadAndValidateFiles@bdStorage@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBVbdUploadFilesInfo@@IIAEBVbdUserAccountID@@QEAVbdValidatedContextUserStorageFileInfo@@@Z(this, result, files, count, __formal, ownerID, fileInfo);
}

/*
==============
bdStorage::uploadAndValidateFile
==============
*/

bdReference<bdRemoteTask> *__fastcall bdStorage::uploadAndValidateFile(bdStorage *this, bdReference<bdRemoteTask> *result, const char *const fileName, const void *const fileData, const unsigned int fileSize, const unsigned int fileVersion, const bdFileInfo::bdVisibility fileVisibility, const bdUserAccountID *ownerID, bdValidatedContextUserStorageFileInfo *const fileInfo)
{
  return ?uploadAndValidateFile@bdStorage@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBDQEBXIIW4bdVisibility@bdFileInfo@@AEBVbdUserAccountID@@QEAVbdValidatedContextUserStorageFileInfo@@@Z(this, result, fileName, fileData, fileSize, fileVersion, fileVisibility, ownerID, fileInfo);
}

/*
==============
bdStorage::removeFile
==============
*/

bdReference<bdRemoteTask> *__fastcall bdStorage::removeFile(bdStorage *this, bdReference<bdRemoteTask> *result, const char *const fileName, const bdUserAccountID *ownerID)
{
  return ?removeFile@bdStorage@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBDAEBVbdUserAccountID@@@Z(this, result, fileName, ownerID);
}

/*
==============
bdStorage::getPublisherFiles
==============
*/

bdReference<bdRemoteTask> *__fastcall bdStorage::getPublisherFiles(bdStorage *this, bdReference<bdRemoteTask> *result, const char *const *fileNames, bdPublisherFile *const files, unsigned int num_files)
{
  return ?getPublisherFiles@bdStorage@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBQEBDQEAVbdPublisherFile@@I@Z(this, result, fileNames, files, num_files);
}

/*
==============
bdStorage::getFile
==============
*/

bdReference<bdRemoteTask> *__fastcall bdStorage::getFile(bdStorage *this, bdReference<bdRemoteTask> *result, const char *const fileName, bdFileData *const fileData, const bdUserAccountID *ownerUID)
{
  return ?getFile@bdStorage@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBDQEAVbdFileData@@AEBVbdUserAccountID@@@Z(this, result, fileName, fileData, ownerUID);
}

/*
==============
bdStorage::uploadFile
==============
*/

bdReference<bdRemoteTask> *__fastcall bdStorage::uploadFile(bdStorage *this, bdReference<bdRemoteTask> *result, const char *const fileName, const void *const fileData, const unsigned int fileSize, const unsigned int fileVersion, const bdFileInfo::bdVisibility fileVisibility, const bdUserAccountID *ownerID, bdContextUserStorageFileInfo *const fileInfo)
{
  return ?uploadFile@bdStorage@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBDQEBXIIW4bdVisibility@bdFileInfo@@AEBVbdUserAccountID@@QEAVbdContextUserStorageFileInfo@@@Z(this, result, fileName, fileData, fileSize, fileVersion, fileVisibility, ownerID, fileInfo);
}

/*
==============
bdStorage::listFilesByOwner
==============
*/

bdReference<bdRemoteTask> *__fastcall bdStorage::listFilesByOwner(bdStorage *this, bdReference<bdRemoteTask> *result, const bdUserAccountID *ownerID, const unsigned int startDate, bdContextUserStorageFileInfo *fileList, const unsigned __int16 maxNumResults, const unsigned __int16 offset, const char *const fileName)
{
  return ?listFilesByOwner@bdStorage@@QEAA?AV?$bdReference@VbdRemoteTask@@@@AEBVbdUserAccountID@@IQEAVbdContextUserStorageFileInfo@@GGQEBD@Z(this, result, ownerID, startDate, fileList, maxNumResults, offset, fileName);
}

/*
==============
bdStorage::getPublisherFile
==============
*/

bdReference<bdRemoteTask> *__fastcall bdStorage::getPublisherFile(bdStorage *this, bdReference<bdRemoteTask> *result, const char *const fileName, bdFileData *const fileData)
{
  return ?getPublisherFile@bdStorage@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBDQEAVbdFileData@@@Z(this, result, fileName, fileData);
}

/*
==============
bdStorage::uploadFile
==============
*/

bdReference<bdRemoteTask> *__fastcall bdStorage::uploadFile(bdStorage *this, bdReference<bdRemoteTask> *result, const char *const fileName, const void *const fileData, const unsigned int fileSize, const bdFileInfo::bdVisibility fileVisibility, const bdUserAccountID *ownerID, bdContextUserStorageFileInfo *const fileInfo)
{
  return ?uploadFile@bdStorage@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBDQEBXIW4bdVisibility@bdFileInfo@@AEBVbdUserAccountID@@QEAVbdContextUserStorageFileInfo@@@Z(this, result, fileName, fileData, fileSize, fileVisibility, ownerID, fileInfo);
}

/*
==============
bdStorage::moveFilesToContexts
==============
*/

bdReference<bdRemoteTask> *__fastcall bdStorage::moveFilesToContexts(bdStorage *this, bdReference<bdRemoteTask> *result, const bdUserAccountID *ownerID, const char *const *fileNames, const unsigned int numFiles, const char *const *destContexts, const unsigned int numContexts, const char *const returnContext, bdFileQueryResult *const files)
{
  return ?moveFilesToContexts@bdStorage@@QEAA?AV?$bdReference@VbdRemoteTask@@@@AEBVbdUserAccountID@@QEBQEBDI1IQEBDQEAVbdFileQueryResult@@@Z(this, result, ownerID, fileNames, numFiles, destContexts, numContexts, returnContext, files);
}

/*
==============
bdStorage::verifyValidationTokenData
==============
*/

bool __fastcall bdStorage::verifyValidationTokenData(bdStorage *this, const bdValidationTokenResult *validationToken, const char *payloadFilename, unsigned __int8 *payload, unsigned int *payloadLen, const bdStorageFileValidationKeyInfo *keyInfo, const char *expectedSubject, const bool verifyTimestamps)
{
  return ?verifyValidationTokenData@bdStorage@@QEAA_NAEBVbdValidationTokenResult@@PEBDPEAEAEAIAEBVbdStorageFileValidationKeyInfo@@1_N@Z(this, validationToken, payloadFilename, payload, payloadLen, keyInfo, expectedSubject, verifyTimestamps);
}

/*
==============
bdStorage::listAllPublisherFiles
==============
*/

bdReference<bdRemoteTask> *__fastcall bdStorage::listAllPublisherFiles(bdStorage *this, bdReference<bdRemoteTask> *result, const unsigned int startDate, bdFileInfo *fileList, const unsigned __int16 maxNumResults, const unsigned __int16 offset, const char *const fileName)
{
  return ?listAllPublisherFiles@bdStorage@@QEAA?AV?$bdReference@VbdRemoteTask@@@@IQEAVbdFileInfo@@GGQEBD@Z(this, result, startDate, fileList, maxNumResults, offset, fileName);
}

/*
==============
bdStorage::getFiles
==============
*/

bdReference<bdRemoteTask> *__fastcall bdStorage::getFiles(bdStorage *this, bdReference<bdRemoteTask> *result, const bdUserAccountID *const *ownerIDs, const char *const *fileNames, bdFileQueryResult *const files, const unsigned int count)
{
  return ?getFiles@bdStorage@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBQEBVbdUserAccountID@@QEBQEBDQEAVbdFileQueryResult@@I@Z(this, result, ownerIDs, fileNames, files, count);
}

/*
==============
bdStorage::~bdStorage
==============
*/

void __fastcall bdStorage::~bdStorage(bdStorage *this)
{
  ??1bdStorage@@UEAA@XZ(this);
}

/*
==============
bdStorage::bdStorage
==============
*/

void __fastcall bdStorage::bdStorage(bdStorage *this, bdRemoteTaskManager *const remoteTaskManager, const char *context)
{
  ??0bdStorage@@IEAA@QEAVbdRemoteTaskManager@@PEBD@Z(this, remoteTaskManager, context);
}

/*
==============
bdStorage::uploadFiles
==============
*/

bdReference<bdRemoteTask> *__fastcall bdStorage::uploadFiles(bdStorage *this, bdReference<bdRemoteTask> *result, const bdUploadFilesInfo *files, const unsigned int count, const unsigned int __formal, const bdUserAccountID *ownerID, bdContextUserStorageFileInfo *const fileInfo)
{
  return ?uploadFiles@bdStorage@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBVbdUploadFilesInfo@@IIAEBVbdUserAccountID@@QEAVbdContextUserStorageFileInfo@@@Z(this, result, files, count, __formal, ownerID, fileInfo);
}

/*
==============
bdStorage::triggerManualBackup
==============
*/

bdReference<bdRemoteTask> *__fastcall bdStorage::triggerManualBackup(bdStorage *this, bdReference<bdRemoteTask> *result, const char *const fileName, const bdUserAccountID *ownerID)
{
  return ?triggerManualBackup@bdStorage@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBDAEBVbdUserAccountID@@@Z(this, result, fileName, ownerID);
}

/*
==============
bdStorage::getFileValidationKeyInfo
==============
*/

bdReference<bdRemoteTask> *__fastcall bdStorage::getFileValidationKeyInfo(bdStorage *this, bdReference<bdRemoteTask> *result, bdStorageFileValidationKeyInfo *keyInfo)
{
  return ?getFileValidationKeyInfo@bdStorage@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEAVbdStorageFileValidationKeyInfo@@@Z(this, result, keyInfo);
}

/*
==============
bdStorage::checkFileExistsByTitleId
==============
*/

bdReference<bdRemoteTask> *__fastcall bdStorage::checkFileExistsByTitleId(bdStorage *this, bdReference<bdRemoteTask> *result, const unsigned int externalTitleID, const char *const fileName, bdBoolResult *const foundFile)
{
  return ?checkFileExistsByTitleId@bdStorage@@QEAA?AV?$bdReference@VbdRemoteTask@@@@IQEBDQEAVbdBoolResult@@@Z(this, result, externalTitleID, fileName, foundFile);
}

/*
==============
bdStorage::bdStorage
==============
*/
void bdStorage::bdStorage(bdStorage *this, bdRemoteTaskManager *const remoteTaskManager, const char *context)
{
  this->__vftable = (bdStorage_vtbl *)&bdStorage::`vftable';
  this->m_remoteTaskManager = remoteTaskManager;
  bdStrlcpy(this->m_context, context, 0x10ui64);
}

/*
==============
bdStorage::~bdStorage
==============
*/
void bdStorage::~bdStorage(bdStorage *this)
{
  this->m_remoteTaskManager = NULL;
  this->__vftable = (bdStorage_vtbl *)&bdStorage::`vftable';
}

/*
==============
bdStorage::checkFileExistsByTitleId
==============
*/
bdReference<bdRemoteTask> *bdStorage::checkFileExistsByTitleId(bdStorage *this, bdReference<bdRemoteTask> *result, const unsigned int externalTitleID, const char *const fileName, bdBoolResult *const foundFile)
{
  unsigned int maxBufferSize; 
  _BOOL8 v10; 
  bool v11; 
  bdLobbyErrorCode started; 
  bdTaskParams taskParams; 

  result->m_ptr = NULL;
  maxBufferSize = bdRemoteTaskManager::getTaskParamsMaxBufferSize(this->m_remoteTaskManager);
  bdTaskParams::bdTaskParams(&taskParams, 0xAu, 0xEu, 0x400u, maxBufferSize);
  bdTaskParams::addContext(&taskParams, this->m_context);
  LOBYTE(v10) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 4u, v10) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v11 = bdByteBuffer::writeInt32(taskParams.m_buffer.m_ptr, externalTitleID), taskParams.m_serializeOk = 1, !v11) )
      taskParams.m_serializeOk = 0;
  }
  bdBufferParams::addString(&taskParams, fileName, 0x80ui64);
  if ( taskParams.m_taskResults || taskParams.m_taskResultRefs )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
    taskParams.m_serializeOk = 0;
  }
  else
  {
    taskParams.m_taskResults = foundFile;
    taskParams.m_maxResults = 1;
  }
  started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
  if ( started )
    bdLogMessage(BD_LOG_WARNING, "warn/", "storage", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdstorage\\bdstorage.cpp", "bdStorage::checkFileExistsByTitleId", 0x2FFu, "Failed to start task: Error %i", started);
  bdTaskParams::~bdTaskParams(&taskParams);
  return result;
}

/*
==============
bdStorage::getFile
==============
*/
bdReference<bdRemoteTask> *bdStorage::getFile(bdStorage *this, bdReference<bdRemoteTask> *result, const char *const fileName, bdFileData *const fileData, const bdUserAccountID *ownerUID)
{
  unsigned int maxBufferSize; 
  bdLobbyErrorCode started; 
  bdTaskParams taskParams; 

  result->m_ptr = NULL;
  maxBufferSize = bdRemoteTaskManager::getTaskParamsMaxBufferSize(this->m_remoteTaskManager);
  bdTaskParams::bdTaskParams(&taskParams, 0xAu, 0xCu, 0x400u, maxBufferSize);
  bdTaskParams::addContext(&taskParams, this->m_context);
  bdBufferParams::addString(&taskParams, fileName, 0x80ui64);
  bdTaskParams::addContextUser(&taskParams, ownerUID);
  if ( *(_OWORD *)&taskParams.m_taskResults == 0i64 )
  {
    taskParams.m_taskResults = fileData;
    taskParams.m_maxResults = 1;
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
    taskParams.m_serializeOk = 0;
  }
  started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
  if ( started )
    bdLogMessage(BD_LOG_WARNING, "warn/", "storage", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdstorage\\bdstorage.cpp", "bdStorage::getFile", 0x1C2u, "Failed to start task: Error %i", started);
  bdTaskParams::~bdTaskParams(&taskParams);
  return result;
}

/*
==============
bdStorage::getFileValidationKeyInfo
==============
*/
bdReference<bdRemoteTask> *bdStorage::getFileValidationKeyInfo(bdStorage *this, bdReference<bdRemoteTask> *result, bdStorageFileValidationKeyInfo *keyInfo)
{
  bdLobbyErrorCode started; 
  bdTaskParams taskParams; 

  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&taskParams, 0xAu, 0x1Au, 0x400u, 0xFFFFu);
  bdTaskParams::addContext(&taskParams, this->m_context);
  if ( *(_OWORD *)&taskParams.m_taskResults == 0i64 )
  {
    taskParams.m_taskResults = keyInfo;
    taskParams.m_maxResults = 1;
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
    taskParams.m_serializeOk = 0;
  }
  started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
  if ( started )
    bdLogMessage(BD_LOG_WARNING, "warn/", "storage", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdstorage\\bdstorage.cpp", "bdStorage::getFileValidationKeyInfo", 0x121u, "Failed to start task: Error %i", started);
  bdTaskParams::~bdTaskParams(&taskParams);
  return result;
}

/*
==============
bdStorage::getFiles
==============
*/
bdReference<bdRemoteTask> *bdStorage::getFiles(bdStorage *this, bdReference<bdRemoteTask> *result, const bdUserAccountID *const *ownerIDs, const char *const *fileNames, bdFileQueryResult *const files, const unsigned int count)
{
  unsigned int maxBufferSize; 
  _BOOL8 v11; 
  _BOOL8 v12; 
  bool v13; 
  __int64 v14; 
  bool v15; 
  __int64 v16; 
  bdLobbyErrorCode started; 
  bdTaskParams taskParams; 

  result->m_ptr = NULL;
  maxBufferSize = bdRemoteTaskManager::getTaskParamsMaxBufferSize(this->m_remoteTaskManager);
  bdTaskParams::bdTaskParams(&taskParams, 0xAu, 0x10u, 0x400u, maxBufferSize);
  bdTaskParams::addContext(&taskParams, this->m_context);
  LOBYTE(v11) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 4u, v11) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v13 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, count), taskParams.m_serializeOk = 1, !v13) )
      taskParams.m_serializeOk = 0;
  }
  if ( count )
  {
    v14 = count;
    do
    {
      bdTaskParams::addContextUser(&taskParams, *ownerIDs++);
      --v14;
    }
    while ( v14 );
  }
  LOBYTE(v12) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 4u, v12) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v15 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, count), taskParams.m_serializeOk = 1, !v15) )
      taskParams.m_serializeOk = 0;
  }
  if ( count )
  {
    v16 = count;
    do
    {
      bdBufferParams::addString(&taskParams, *fileNames++, 0x80ui64);
      --v16;
    }
    while ( v16 );
  }
  if ( taskParams.m_taskResults || taskParams.m_taskResultRefs )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
    taskParams.m_serializeOk = 0;
  }
  else
  {
    taskParams.m_taskResults = files;
    taskParams.m_maxResults = count;
  }
  started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
  if ( started )
    bdLogMessage(BD_LOG_WARNING, "warn/", "storage", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdstorage\\bdstorage.cpp", "bdStorage::getFiles", 0x1EFu, "Failed to start task: Error %i", started);
  bdTaskParams::~bdTaskParams(&taskParams);
  return result;
}

/*
==============
bdStorage::getPublisherFile
==============
*/
bdReference<bdRemoteTask> *bdStorage::getPublisherFile(bdStorage *this, bdReference<bdRemoteTask> *result, const char *const fileName, bdFileData *const fileData)
{
  unsigned int maxBufferSize; 
  bdLobbyErrorCode started; 
  bdTaskParams taskParams; 

  result->m_ptr = NULL;
  maxBufferSize = bdRemoteTaskManager::getTaskParamsMaxBufferSize(this->m_remoteTaskManager);
  bdTaskParams::bdTaskParams(&taskParams, 0xAu, 0x15u, 0x400u, maxBufferSize);
  bdTaskParams::addContext(&taskParams, this->m_context);
  bdBufferParams::addString(&taskParams, fileName, 0x80ui64);
  if ( *(_OWORD *)&taskParams.m_taskResults == 0i64 )
  {
    taskParams.m_taskResults = fileData;
    taskParams.m_maxResults = 1;
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
    taskParams.m_serializeOk = 0;
  }
  started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
  if ( started )
    bdLogMessage(BD_LOG_WARNING, "warn/", "storage", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdstorage\\bdstorage.cpp", "bdStorage::getPublisherFile", 0x295u, "Failed to start task: Error %i", started);
  bdTaskParams::~bdTaskParams(&taskParams);
  return result;
}

/*
==============
bdStorage::getPublisherFiles
==============
*/
bdReference<bdRemoteTask> *bdStorage::getPublisherFiles(bdStorage *this, bdReference<bdRemoteTask> *result, const char *const *fileNames, bdFileQueryResult *const files, unsigned int num_files)
{
  unsigned int maxBufferSize; 
  _BOOL8 v10; 
  bool v11; 
  __int64 v12; 
  bdLobbyErrorCode started; 
  bdTaskParams taskParams; 

  result->m_ptr = NULL;
  maxBufferSize = bdRemoteTaskManager::getTaskParamsMaxBufferSize(this->m_remoteTaskManager);
  bdTaskParams::bdTaskParams(&taskParams, 0xAu, 0x19u, 0x400u, maxBufferSize);
  bdTaskParams::addContext(&taskParams, this->m_context);
  LOBYTE(v10) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 4u, v10) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v11 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, num_files), taskParams.m_serializeOk = 1, !v11) )
      taskParams.m_serializeOk = 0;
  }
  if ( num_files )
  {
    v12 = num_files;
    do
    {
      bdBufferParams::addString(&taskParams, *fileNames++, 0x80ui64);
      --v12;
    }
    while ( v12 );
  }
  if ( taskParams.m_taskResults || taskParams.m_taskResultRefs )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
    taskParams.m_serializeOk = 0;
  }
  else
  {
    taskParams.m_taskResults = files;
    taskParams.m_maxResults = num_files;
  }
  started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
  if ( started )
    bdLogMessage(BD_LOG_WARNING, "warn/", "storage", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdstorage\\bdstorage.cpp", "bdStorage::getPublisherFiles", 0x2DEu, "Failed to start task: Error %i", started);
  bdTaskParams::~bdTaskParams(&taskParams);
  return result;
}

/*
==============
bdStorage::getPublisherFiles
==============
*/
bdReference<bdRemoteTask> *bdStorage::getPublisherFiles(bdStorage *this, bdReference<bdRemoteTask> *result, const char *const *fileNames, bdPublisherFile *const files, unsigned int num_files)
{
  unsigned int maxBufferSize; 
  _BOOL8 v10; 
  bool v11; 
  __int64 v12; 
  bdLobbyErrorCode started; 
  bdTaskParams taskParams; 

  result->m_ptr = NULL;
  maxBufferSize = bdRemoteTaskManager::getTaskParamsMaxBufferSize(this->m_remoteTaskManager);
  bdTaskParams::bdTaskParams(&taskParams, 0xAu, 0x16u, 0x400u, maxBufferSize);
  bdTaskParams::addContext(&taskParams, this->m_context);
  LOBYTE(v10) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 4u, v10) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v11 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, num_files), taskParams.m_serializeOk = 1, !v11) )
      taskParams.m_serializeOk = 0;
  }
  if ( num_files )
  {
    v12 = num_files;
    do
    {
      bdBufferParams::addString(&taskParams, *fileNames++, 0x80ui64);
      --v12;
    }
    while ( v12 );
  }
  if ( taskParams.m_taskResults || taskParams.m_taskResultRefs )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
    taskParams.m_serializeOk = 0;
  }
  else
  {
    taskParams.m_taskResults = files;
    taskParams.m_maxResults = num_files;
  }
  started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
  if ( started )
    bdLogMessage(BD_LOG_WARNING, "warn/", "storage", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdstorage\\bdstorage.cpp", "bdStorage::getPublisherFiles", 0x2B9u, "Failed to start task: Error %i", started);
  bdTaskParams::~bdTaskParams(&taskParams);
  return result;
}

/*
==============
bdStorage::listAllPublisherFiles
==============
*/
bdReference<bdRemoteTask> *bdStorage::listAllPublisherFiles(bdStorage *this, bdReference<bdRemoteTask> *result, const unsigned int startDate, bdFileInfo *fileList, const unsigned __int16 maxNumResults, const unsigned __int16 offset, const char *const fileName)
{
  unsigned int maxBufferSize; 
  _BOOL8 v12; 
  _BOOL8 v13; 
  bool v14; 
  _BOOL8 v15; 
  bool v16; 
  bool v17; 
  bdLobbyErrorCode started; 
  bdTaskParams taskParams; 

  result->m_ptr = NULL;
  maxBufferSize = bdRemoteTaskManager::getTaskParamsMaxBufferSize(this->m_remoteTaskManager);
  bdTaskParams::bdTaskParams(&taskParams, 0xAu, 0x14u, 0x400u, maxBufferSize);
  bdTaskParams::addContext(&taskParams, this->m_context);
  LOBYTE(v12) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 4u, v12) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v14 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, startDate), taskParams.m_serializeOk = 1, !v14) )
      taskParams.m_serializeOk = 0;
  }
  LOBYTE(v13) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 2u, v13) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v16 = bdByteBuffer::writeUInt16(taskParams.m_buffer.m_ptr, maxNumResults), taskParams.m_serializeOk = 1, !v16) )
      taskParams.m_serializeOk = 0;
  }
  LOBYTE(v15) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 2u, v15) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v17 = bdByteBuffer::writeUInt16(taskParams.m_buffer.m_ptr, offset), taskParams.m_serializeOk = 1, !v17) )
      taskParams.m_serializeOk = 0;
  }
  if ( fileName )
    bdBufferParams::addString(&taskParams, fileName, 0x80ui64);
  if ( taskParams.m_taskResults || taskParams.m_taskResultRefs )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
    taskParams.m_serializeOk = 0;
  }
  else
  {
    taskParams.m_taskResults = fileList;
    taskParams.m_maxResults = maxNumResults;
  }
  started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
  if ( started )
    bdLogMessage(BD_LOG_WARNING, "warn/", "storage", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdstorage\\bdstorage.cpp", "bdStorage::listAllPublisherFiles", 0x276u, "Failed to start task: Error %i", started);
  bdTaskParams::~bdTaskParams(&taskParams);
  return result;
}

/*
==============
bdStorage::listFilesByOwner
==============
*/
bdReference<bdRemoteTask> *bdStorage::listFilesByOwner(bdStorage *this, bdReference<bdRemoteTask> *result, const bdUserAccountID *ownerID, const unsigned int startDate, bdContextUserStorageFileInfo *fileList, const unsigned __int16 maxNumResults, const unsigned __int16 offset, const char *const fileName)
{
  unsigned int maxBufferSize; 
  _BOOL8 v13; 
  _BOOL8 v14; 
  bool v15; 
  _BOOL8 v16; 
  bool v17; 
  bool v18; 
  bdLobbyErrorCode started; 
  bdTaskParams taskParams; 

  result->m_ptr = NULL;
  maxBufferSize = bdRemoteTaskManager::getTaskParamsMaxBufferSize(this->m_remoteTaskManager);
  bdTaskParams::bdTaskParams(&taskParams, 0xAu, 0xDu, 0x400u, maxBufferSize);
  bdTaskParams::addContext(&taskParams, this->m_context);
  bdTaskParams::addContextUser(&taskParams, ownerID);
  LOBYTE(v13) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 4u, v13) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v15 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, startDate), taskParams.m_serializeOk = 1, !v15) )
      taskParams.m_serializeOk = 0;
  }
  LOBYTE(v14) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 2u, v14) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v17 = bdByteBuffer::writeUInt16(taskParams.m_buffer.m_ptr, maxNumResults), taskParams.m_serializeOk = 1, !v17) )
      taskParams.m_serializeOk = 0;
  }
  LOBYTE(v16) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 2u, v16) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v18 = bdByteBuffer::writeUInt16(taskParams.m_buffer.m_ptr, offset), taskParams.m_serializeOk = 1, !v18) )
      taskParams.m_serializeOk = 0;
  }
  if ( fileName )
    bdBufferParams::addString(&taskParams, fileName, 0x80ui64);
  if ( taskParams.m_taskResults || taskParams.m_taskResultRefs )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
    taskParams.m_serializeOk = 0;
  }
  else
  {
    taskParams.m_taskResults = fileList;
    taskParams.m_maxResults = maxNumResults;
  }
  started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
  if ( started )
    bdLogMessage(BD_LOG_WARNING, "warn/", "storage", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdstorage\\bdstorage.cpp", "bdStorage::listFilesByOwner", 0x24Fu, "Failed to start task: Error %i", started);
  bdTaskParams::~bdTaskParams(&taskParams);
  return result;
}

/*
==============
bdStorage::moveFilesToContexts
==============
*/
bdReference<bdRemoteTask> *bdStorage::moveFilesToContexts(bdStorage *this, bdReference<bdRemoteTask> *result, const bdUserAccountID *ownerID, const char *const *fileNames, const unsigned int numFiles, const char *const *destContexts, const unsigned int numContexts, const char *const returnContext, bdFileQueryResult *const files)
{
  unsigned int maxBufferSize; 
  _BOOL8 v14; 
  bool v15; 
  __int64 v16; 
  _BOOL8 v17; 
  __int64 v18; 
  bool v19; 
  bdLobbyErrorCode started; 
  bdTaskParams taskParams; 

  result->m_ptr = NULL;
  maxBufferSize = bdRemoteTaskManager::getTaskParamsMaxBufferSize(this->m_remoteTaskManager);
  bdTaskParams::bdTaskParams(&taskParams, 0xAu, 0x13u, 0x400u, maxBufferSize);
  bdTaskParams::addContextUser(&taskParams, ownerID);
  LOBYTE(v14) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 4u, v14) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v15 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, numFiles), taskParams.m_serializeOk = 1, !v15) )
      taskParams.m_serializeOk = 0;
  }
  if ( numFiles )
  {
    v16 = numFiles;
    do
    {
      bdBufferParams::addString(&taskParams, *fileNames++, 0x80ui64);
      --v16;
    }
    while ( v16 );
  }
  bdTaskParams::addContext(&taskParams, this->m_context);
  LOBYTE(v17) = 1;
  v18 = numContexts;
  if ( taskParams.ensureCapacity(&taskParams, 4u, v17) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v19 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, numContexts), taskParams.m_serializeOk = 1, !v19) )
      taskParams.m_serializeOk = 0;
  }
  if ( numContexts )
  {
    do
    {
      bdBufferParams::addString(&taskParams, *destContexts++, 0x10ui64);
      --v18;
    }
    while ( v18 );
  }
  if ( returnContext )
    bdTaskParams::addContext(&taskParams, returnContext);
  if ( files )
  {
    if ( taskParams.m_taskResults || taskParams.m_taskResultRefs )
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
      taskParams.m_serializeOk = 0;
    }
    else
    {
      taskParams.m_taskResults = files;
      taskParams.m_maxResults = numFiles;
    }
  }
  started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
  if ( started )
    bdLogMessage(BD_LOG_WARNING, "warn/", "storage", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdstorage\\bdstorage.cpp", "bdStorage::moveFilesToContexts", 0x226u, "Failed to start task: Error %i", started);
  bdTaskParams::~bdTaskParams(&taskParams);
  return result;
}

/*
==============
bdStorage::removeFile
==============
*/
bdReference<bdRemoteTask> *bdStorage::removeFile(bdStorage *this, bdReference<bdRemoteTask> *result, const char *const fileName, const bdUserAccountID *ownerID)
{
  unsigned int maxBufferSize; 
  bdLobbyErrorCode started; 
  bdLobbyErrorCode v11; 
  bdTaskParams taskParams; 

  result->m_ptr = NULL;
  maxBufferSize = bdRemoteTaskManager::getTaskParamsMaxBufferSize(this->m_remoteTaskManager);
  bdTaskParams::bdTaskParams(&taskParams, 0xAu, 0xBu, 0x400u, maxBufferSize);
  bdTaskParams::addContext(&taskParams, this->m_context);
  bdBufferParams::addString(&taskParams, fileName, 0x80ui64);
  bdTaskParams::addContextUser(&taskParams, ownerID);
  started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
  if ( started )
  {
    v11 = started;
    bdLogMessage(BD_LOG_WARNING, "warn/", "storage", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdstorage\\bdstorage.cpp", "bdStorage::removeFile", 0x1A1u, "Failed to start task: Error %i", v11);
  }
  bdTaskParams::~bdTaskParams(&taskParams);
  return result;
}

/*
==============
bdStorage::triggerManualBackup
==============
*/
bdReference<bdRemoteTask> *bdStorage::triggerManualBackup(bdStorage *this, bdReference<bdRemoteTask> *result, const char *const fileName, const bdUserAccountID *ownerID)
{
  unsigned int maxBufferSize; 
  bdLobbyErrorCode started; 
  bdLobbyErrorCode v11; 
  bdTaskParams taskParams; 

  result->m_ptr = NULL;
  maxBufferSize = bdRemoteTaskManager::getTaskParamsMaxBufferSize(this->m_remoteTaskManager);
  bdTaskParams::bdTaskParams(&taskParams, 0xAu, 0x11u, 0x400u, maxBufferSize);
  bdTaskParams::addContext(&taskParams, this->m_context);
  bdBufferParams::addString(&taskParams, fileName, 0x80ui64);
  bdTaskParams::addContextUser(&taskParams, ownerID);
  started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
  if ( started )
  {
    v11 = started;
    bdLogMessage(BD_LOG_WARNING, "warn/", "storage", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdstorage\\bdstorage.cpp", "bdStorage::triggerManualBackup", 0x31Bu, "Failed to start task: Error %i", v11);
  }
  bdTaskParams::~bdTaskParams(&taskParams);
  return result;
}

/*
==============
bdStorage::uploadAndValidateFile
==============
*/
bdReference<bdRemoteTask> *bdStorage::uploadAndValidateFile(bdStorage *this, bdReference<bdRemoteTask> *result, const char *const fileName, const void *const fileData, const unsigned int fileSize, const unsigned int fileVersion, const bdFileInfo::bdVisibility fileVisibility, const bdUserAccountID *ownerID, bdValidatedContextUserStorageFileInfo *const fileInfo)
{
  unsigned int maxBufferSize; 
  _BOOL8 v14; 
  bool v15; 
  _BOOL8 v16; 
  bool v17; 
  bdLobbyErrorCode started; 
  bdTaskParams taskParams; 

  result->m_ptr = NULL;
  maxBufferSize = bdRemoteTaskManager::getTaskParamsMaxBufferSize(this->m_remoteTaskManager);
  bdTaskParams::bdTaskParams(&taskParams, 0xAu, 0x17u, 0x400u, maxBufferSize);
  bdTaskParams::addContext(&taskParams, this->m_context);
  bdBufferParams::addString(&taskParams, fileName, 0x80ui64);
  LOBYTE(v14) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 1u, v14) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v15 = bdByteBuffer::writeBool(taskParams.m_buffer.m_ptr, fileVisibility == BD_VISIBLE_PRIVATE), taskParams.m_serializeOk = 1, !v15) )
      taskParams.m_serializeOk = 0;
  }
  bdBufferParams::addBlob(&taskParams, fileData, fileSize);
  bdTaskParams::addContextUser(&taskParams, ownerID);
  LOBYTE(v16) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 4u, v16) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v17 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, fileVersion), taskParams.m_serializeOk = 1, !v17) )
      taskParams.m_serializeOk = 0;
  }
  if ( taskParams.m_taskResults || taskParams.m_taskResultRefs )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
    taskParams.m_serializeOk = 0;
  }
  else
  {
    taskParams.m_taskResults = fileInfo;
    taskParams.m_maxResults = 1;
  }
  started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
  if ( started )
    bdLogMessage(BD_LOG_WARNING, "warn/", "storage", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdstorage\\bdstorage.cpp", "bdStorage::uploadAndValidateFile", 0xDDu, "Failed to start task: Error %i", started);
  bdTaskParams::~bdTaskParams(&taskParams);
  return result;
}

/*
==============
bdStorage::uploadAndValidateFiles
==============
*/
bdReference<bdRemoteTask> *bdStorage::uploadAndValidateFiles(bdStorage *this, bdReference<bdRemoteTask> *result, const bdUploadFilesInfo *files, const unsigned int count, const unsigned int __formal, const bdUserAccountID *ownerID, bdValidatedContextUserStorageFileInfo *const fileInfo)
{
  __int64 v7; 
  unsigned int maxBufferSize; 
  _BOOL8 v12; 
  bool v13; 
  bdFileData_vtbl **v14; 
  char *m_fileName; 
  __int64 v16; 
  _BOOL8 v17; 
  _BOOL8 v18; 
  bool v19; 
  bool v20; 
  bool v21; 
  bdLobbyErrorCode started; 
  bdTaskParams taskParams; 

  v7 = count;
  result->m_ptr = NULL;
  maxBufferSize = bdRemoteTaskManager::getTaskParamsMaxBufferSize(this->m_remoteTaskManager);
  bdTaskParams::bdTaskParams(&taskParams, 0xAu, 0x18u, 0x400u, maxBufferSize);
  bdTaskParams::addContext(&taskParams, this->m_context);
  bdTaskParams::addContextUser(&taskParams, ownerID);
  LOBYTE(v12) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 4u, v12) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v13 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, v7), taskParams.m_serializeOk = 1, !v13) )
      taskParams.m_serializeOk = 0;
  }
  if ( (_DWORD)v7 )
  {
    v14 = &files->m_fileData.__vftable + 2;
    m_fileName = files->m_fileName;
    v16 = v7;
    do
    {
      bdBufferParams::addString(&taskParams, m_fileName, 0x80ui64);
      bdBufferParams::addBlob(&taskParams, *v14, *((_DWORD *)v14 + 2));
      LOBYTE(v17) = 1;
      if ( taskParams.ensureCapacity(&taskParams, 4u, v17) )
      {
        if ( taskParams.m_isWritingArray )
          --taskParams.m_arrayWriteCount;
        if ( !taskParams.m_serializeOk || (v19 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, *((_DWORD *)v14 + 8)), taskParams.m_serializeOk = 1, !v19) )
          taskParams.m_serializeOk = 0;
      }
      v20 = *((_DWORD *)v14 + 9) == 1;
      LOBYTE(v18) = 1;
      if ( taskParams.ensureCapacity(&taskParams, 1u, v18) )
      {
        if ( taskParams.m_isWritingArray )
          --taskParams.m_arrayWriteCount;
        if ( !taskParams.m_serializeOk || (v21 = bdByteBuffer::writeBool(taskParams.m_buffer.m_ptr, v20), taskParams.m_serializeOk = 1, !v21) )
          taskParams.m_serializeOk = 0;
      }
      m_fileName += 192;
      v14 += 24;
      --v16;
    }
    while ( v16 );
  }
  if ( taskParams.m_taskResults || taskParams.m_taskResultRefs )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
    taskParams.m_serializeOk = 0;
  }
  else
  {
    taskParams.m_taskResults = fileInfo;
    taskParams.m_maxResults = v7;
  }
  started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
  if ( started )
    bdLogMessage(BD_LOG_WARNING, "warn/", "storage", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdstorage\\bdstorage.cpp", "bdStorage::uploadAndValidateFiles", 0x108u, "Failed to start task: Error %i", started);
  bdTaskParams::~bdTaskParams(&taskParams);
  return result;
}

/*
==============
bdStorage::uploadFile
==============
*/
bdReference<bdRemoteTask> *bdStorage::uploadFile(bdStorage *this, bdReference<bdRemoteTask> *result, const char *const fileName, const void *const fileData, const unsigned int fileSize, const unsigned int fileVersion, const bdFileInfo::bdVisibility fileVisibility, const bdUserAccountID *ownerID, bdContextUserStorageFileInfo *const fileInfo)
{
  unsigned int maxBufferSize; 
  _BOOL8 v14; 
  bool v15; 
  _BOOL8 v16; 
  bool v17; 
  bdLobbyErrorCode started; 
  bdTaskParams taskParams; 

  result->m_ptr = NULL;
  maxBufferSize = bdRemoteTaskManager::getTaskParamsMaxBufferSize(this->m_remoteTaskManager);
  bdTaskParams::bdTaskParams(&taskParams, 0xAu, 0xAu, 0x400u, maxBufferSize);
  bdTaskParams::addContext(&taskParams, this->m_context);
  bdBufferParams::addString(&taskParams, fileName, 0x80ui64);
  LOBYTE(v14) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 1u, v14) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v15 = bdByteBuffer::writeBool(taskParams.m_buffer.m_ptr, fileVisibility == BD_VISIBLE_PRIVATE), taskParams.m_serializeOk = 1, !v15) )
      taskParams.m_serializeOk = 0;
  }
  bdBufferParams::addBlob(&taskParams, fileData, fileSize);
  bdTaskParams::addContextUser(&taskParams, ownerID);
  LOBYTE(v16) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 4u, v16) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v17 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, fileVersion), taskParams.m_serializeOk = 1, !v17) )
      taskParams.m_serializeOk = 0;
  }
  if ( taskParams.m_taskResults || taskParams.m_taskResultRefs )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
    taskParams.m_serializeOk = 0;
  }
  else
  {
    taskParams.m_taskResults = fileInfo;
    taskParams.m_maxResults = 1;
  }
  started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
  if ( started )
    bdLogMessage(BD_LOG_WARNING, "warn/", "storage", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdstorage\\bdstorage.cpp", "bdStorage::uploadFile", 0x8Au, "Failed to start task: Error %i", started);
  bdTaskParams::~bdTaskParams(&taskParams);
  return result;
}

/*
==============
bdStorage::uploadFile
==============
*/
bdReference<bdRemoteTask> *bdStorage::uploadFile(bdStorage *this, bdReference<bdRemoteTask> *result, const char *const fileName, const void *const fileData, const unsigned int fileSize, const bdFileInfo::bdVisibility fileVisibility, const bdUserAccountID *ownerID, bdContextUserStorageFileInfo *const fileInfo)
{
  unsigned int maxBufferSize; 
  _BOOL8 v13; 
  bool v14; 
  bdLobbyErrorCode started; 
  bdTaskParams taskParams; 

  result->m_ptr = NULL;
  maxBufferSize = bdRemoteTaskManager::getTaskParamsMaxBufferSize(this->m_remoteTaskManager);
  bdTaskParams::bdTaskParams(&taskParams, 0xAu, 0xAu, 0x400u, maxBufferSize);
  bdTaskParams::addContext(&taskParams, this->m_context);
  bdBufferParams::addString(&taskParams, fileName, 0x80ui64);
  LOBYTE(v13) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 1u, v13) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v14 = bdByteBuffer::writeBool(taskParams.m_buffer.m_ptr, fileVisibility == BD_VISIBLE_PRIVATE), taskParams.m_serializeOk = 1, !v14) )
      taskParams.m_serializeOk = 0;
  }
  bdBufferParams::addBlob(&taskParams, fileData, fileSize);
  bdTaskParams::addContextUser(&taskParams, ownerID);
  if ( *(_OWORD *)&taskParams.m_taskResults == 0i64 )
  {
    taskParams.m_taskResults = fileInfo;
    taskParams.m_maxResults = 1;
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
    taskParams.m_serializeOk = 0;
  }
  started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
  if ( started )
    bdLogMessage(BD_LOG_WARNING, "warn/", "storage", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdstorage\\bdstorage.cpp", "bdStorage::uploadFile", 0x62u, "Failed to start task: Error %i", started);
  bdTaskParams::~bdTaskParams(&taskParams);
  return result;
}

/*
==============
bdStorage::uploadFiles
==============
*/
bdReference<bdRemoteTask> *bdStorage::uploadFiles(bdStorage *this, bdReference<bdRemoteTask> *result, const bdUploadFilesInfo *files, const unsigned int count, const unsigned int __formal, const bdUserAccountID *ownerID, bdContextUserStorageFileInfo *const fileInfo)
{
  __int64 v7; 
  unsigned int maxBufferSize; 
  _BOOL8 v12; 
  bool v13; 
  bdFileData_vtbl **v14; 
  char *m_fileName; 
  __int64 v16; 
  _BOOL8 v17; 
  _BOOL8 v18; 
  bool v19; 
  bool v20; 
  bool v21; 
  bdLobbyErrorCode started; 
  bdTaskParams taskParams; 

  v7 = count;
  result->m_ptr = NULL;
  maxBufferSize = bdRemoteTaskManager::getTaskParamsMaxBufferSize(this->m_remoteTaskManager);
  bdTaskParams::bdTaskParams(&taskParams, 0xAu, 0x12u, 0x400u, maxBufferSize);
  bdTaskParams::addContext(&taskParams, this->m_context);
  bdTaskParams::addContextUser(&taskParams, ownerID);
  LOBYTE(v12) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 4u, v12) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v13 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, v7), taskParams.m_serializeOk = 1, !v13) )
      taskParams.m_serializeOk = 0;
  }
  if ( (_DWORD)v7 )
  {
    v14 = &files->m_fileData.__vftable + 2;
    m_fileName = files->m_fileName;
    v16 = v7;
    do
    {
      bdBufferParams::addString(&taskParams, m_fileName, 0x80ui64);
      bdBufferParams::addBlob(&taskParams, *v14, *((_DWORD *)v14 + 2));
      LOBYTE(v17) = 1;
      if ( taskParams.ensureCapacity(&taskParams, 4u, v17) )
      {
        if ( taskParams.m_isWritingArray )
          --taskParams.m_arrayWriteCount;
        if ( !taskParams.m_serializeOk || (v19 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, *((_DWORD *)v14 + 8)), taskParams.m_serializeOk = 1, !v19) )
          taskParams.m_serializeOk = 0;
      }
      v20 = *((_DWORD *)v14 + 9) == 1;
      LOBYTE(v18) = 1;
      if ( taskParams.ensureCapacity(&taskParams, 1u, v18) )
      {
        if ( taskParams.m_isWritingArray )
          --taskParams.m_arrayWriteCount;
        if ( !taskParams.m_serializeOk || (v21 = bdByteBuffer::writeBool(taskParams.m_buffer.m_ptr, v20), taskParams.m_serializeOk = 1, !v21) )
          taskParams.m_serializeOk = 0;
      }
      m_fileName += 192;
      v14 += 24;
      --v16;
    }
    while ( v16 );
  }
  if ( taskParams.m_taskResults || taskParams.m_taskResultRefs )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
    taskParams.m_serializeOk = 0;
  }
  else
  {
    taskParams.m_taskResults = fileInfo;
    taskParams.m_maxResults = v7;
  }
  started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
  if ( started )
    bdLogMessage(BD_LOG_WARNING, "warn/", "storage", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdstorage\\bdstorage.cpp", "bdStorage::uploadFiles", 0xB5u, "Failed to start task: Error %i", started);
  bdTaskParams::~bdTaskParams(&taskParams);
  return result;
}

/*
==============
bdStorage::verifyValidationTokenData
==============
*/
__int64 bdStorage::verifyValidationTokenData(bdStorage *this, const bdValidationTokenResult *validationToken, const char *payloadFilename, unsigned __int8 *payload, unsigned int *payloadLen, const bdStorageFileValidationKeyInfo *keyInfo, const char *expectedSubject, const bool verifyTimestamps)
{
  unsigned int ValidationTokenSize; 
  int v12; 
  const unsigned __int8 *v13; 
  __int64 v14; 
  char v15; 
  unsigned int v16; 
  __int64 v17; 
  char v18; 
  bool v19; 
  __int64 POSIXTimestamp; 
  const char *v21; 
  bool v22; 
  const char *v23; 
  const char *v24; 
  bool v25; 
  __int64 v26; 
  unsigned __int8 v27; 
  bdJOSE::bdJWTRegisteredClaim value; 
  int desLen; 
  unsigned int payloadLena; 
  bdJOSE::bdJWSSigAlgorithm allowedSigAlgorithms; 
  __int64 v33; 
  __int64 v34; 
  bdJSONDeserializer v35; 
  __int64 v36; 
  bdJSONDeserializer v37; 
  bdJSONDeserializer v38; 
  char v39[64]; 
  char payloada[10256]; 
  char src[13664]; 
  char des[20480]; 

  v36 = -2i64;
  ValidationTokenSize = bdValidationTokenResult::getValidationTokenSize((bdValidationTokenResult *)validationToken);
  bdHandleAssert(ValidationTokenSize != 0, "(validationToken.getValidationTokenSize() > 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdstorage\\bdstorage.cpp", "bdStorage::verifyValidationTokenData", 0x12Fu, "Error validationToken Size cannot be zero");
  bdHandleAssert(payloadFilename != NULL, "(payloadFilename != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdstorage\\bdstorage.cpp", "bdStorage::verifyValidationTokenData", 0x130u, "Error payloadFilename cannot be NULL");
  bdHandleAssert(payload != NULL, "(payload != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdstorage\\bdstorage.cpp", "bdStorage::verifyValidationTokenData", 0x131u, "Error payload cannot be NULL");
  bdHandleAssert(*payloadLen != 0, "(payloadLen > 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdstorage\\bdstorage.cpp", "bdStorage::verifyValidationTokenData", 0x132u, "Error payloadLen cannot be zero");
  if ( !bdValidationTokenResult::getValidationTokenSize((bdValidationTokenResult *)validationToken) || !payloadFilename || !payload || !*payloadLen )
  {
    v27 = 0;
LABEL_52:
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "storage", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdstorage\\bdstorage.cpp", "bdStorage::verifyValidationTokenData", 0x185u, "Error validating token data");
    return v27;
  }
  v12 = bdValidationTokenResult::getValidationTokenSize((bdValidationTokenResult *)validationToken);
  desLen = 20479;
  v13 = bdValidationTokenResult::getValidationToken((bdValidationTokenResult *)validationToken);
  if ( bdCompression::uncompress((unsigned __int8 *)des, &desLen, v13, v12) == 1 )
  {
    v15 = 1;
    if ( (unsigned __int64)desLen >= 0x5000 )
    {
      j___report_rangecheckfailure(v14);
      JUMPOUT(0x1435DE91Ei64);
    }
    des[desLen] = 0;
  }
  else
  {
    v15 = 0;
  }
  allowedSigAlgorithms = keyInfo->m_algorithm;
  v16 = bdStrlen(des);
  if ( !v15 || v16 != desLen )
  {
    payloadLena = 10240;
    goto LABEL_15;
  }
  payloadLena = 10240;
  if ( !bdJWS::verify(des, v16, (unsigned __int8 *)payloada, &payloadLena, &allowedSigAlgorithms, 1u, keyInfo->m_publicKey, keyInfo->m_keySize) )
  {
LABEL_15:
    v18 = 0;
    goto LABEL_16;
  }
  v18 = 1;
  if ( payloadLena >= 0x2801ui64 )
  {
    j___report_rangecheckfailure(v17);
    __debugbreak();
  }
  payloada[payloadLena] = 0;
LABEL_16:
  bdJSONDeserializer::bdJSONDeserializer(&v35);
  v19 = v18 && bdJSONDeserializer::parse(&v35, payloada);
  POSIXTimestamp = bdPlatformTiming::getPOSIXTimestamp();
  if ( verifyTimestamps )
  {
    v33 = 0i64;
    value = NOT_BEFORE;
    v21 = bdJOSE::getString<enum bdJOSE::bdJWTRegisteredClaim>(&value);
    v22 = v19 && bdJSONDeserializer::getInt64(&v35, v21, &v33) && v33 - 5 <= POSIXTimestamp;
    v34 = 0i64;
    value = EXPIRATION;
    v23 = bdJOSE::getString<enum bdJOSE::bdJWTRegisteredClaim>(&value);
    v19 = v22 && bdJSONDeserializer::getInt64(&v35, v23, &v34) && POSIXTimestamp <= v34 + 5;
  }
  if ( expectedSubject )
  {
    value = SUBJECT;
    v24 = bdJOSE::getString<enum bdJOSE::bdJWTRegisteredClaim>(&value);
    v19 = v19 && bdJSONDeserializer::getString(&v35, v24, v39, 0x40u) && !strcmp(v39, expectedSubject);
  }
  bdJSONDeserializer::bdJSONDeserializer(&v38);
  v25 = v19 && bdJSONDeserializer::getObject(&v35, "token", &v38);
  bdJSONDeserializer::bdJSONDeserializer(&v37);
  if ( !v25 )
    goto LABEL_48;
  if ( !bdJSONDeserializer::getObject(&v38, payloadFilename, &v37) )
    goto LABEL_48;
  if ( !bdJSONDeserializer::getString(&v37, "data", src, 0x3559u) )
    goto LABEL_48;
  bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v26 = -1i64;
  do
    ++v26;
  while ( src[v26] );
  if ( bdBase64::base64URLPadAndDecode(src, v26, payload, payloadLen) )
    v27 = 1;
  else
LABEL_48:
    v27 = 0;
  bdJSONDeserializer::~bdJSONDeserializer(&v37);
  bdJSONDeserializer::~bdJSONDeserializer(&v38);
  bdJSONDeserializer::~bdJSONDeserializer(&v35);
  if ( !v27 )
    goto LABEL_52;
  return v27;
}

