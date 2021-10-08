/*
==============
bdObjectStore::listUserObjects
==============
*/

bdReference<bdRemoteTask> *__fastcall bdObjectStore::listUserObjects(bdObjectStore *this, bdReference<bdRemoteTask> *result, const bdObjectStoreListUserObjectsRequest *request, bdObjectStoreListUserObjectsResponse *response)
{
  return ?listUserObjects@bdObjectStore@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBVbdObjectStoreListUserObjectsRequest@@PEAVbdObjectStoreListUserObjectsResponse@@@Z(this, result, request, response);
}

/*
==============
bdObjectStore::setBatchInProgress
==============
*/

void __fastcall bdObjectStore::setBatchInProgress(bdObjectStore *this, bdObjectStore::bdObjectStoreBatchInProgress batchInProgress)
{
  ?setBatchInProgress@bdObjectStore@@AEAAXW4bdObjectStoreBatchInProgress@1@@Z(this, batchInProgress);
}

/*
==============
bdObjectStore::getUserObjectsStatistics
==============
*/

bdReference<bdRemoteTask> *__fastcall bdObjectStore::getUserObjectsStatistics(bdObjectStore *this, bdReference<bdRemoteTask> *result, const bdObjectStoreGetUserObjectsStatisticsRequest *request, bdObjectStoreGetUserObjectsStatisticsResponse *response)
{
  return ?getUserObjectsStatistics@bdObjectStore@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBVbdObjectStoreGetUserObjectsStatisticsRequest@@PEAVbdObjectStoreGetUserObjectsStatisticsResponse@@@Z(this, result, request, response);
}

/*
==============
bdObjectStore::incrementUserObjectStatistic
==============
*/

bdReference<bdRemoteTask> *__fastcall bdObjectStore::incrementUserObjectStatistic(bdObjectStore *this, bdReference<bdRemoteTask> *result, const bdObjectStoreIncrementUserObjectStatisticRequest *request, bdObjectStoreIncrementUserObjectStatisticResponse *response)
{
  return ?incrementUserObjectStatistic@bdObjectStore@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBVbdObjectStoreIncrementUserObjectStatisticRequest@@PEAVbdObjectStoreIncrementUserObjectStatisticResponse@@@Z(this, result, request, response);
}

/*
==============
bdObjectStore::uploadUserObjectsVectorized
==============
*/

bdReference<bdRemoteTask> *__fastcall bdObjectStore::uploadUserObjectsVectorized(bdObjectStore *this, bdReference<bdRemoteTask> *result, const bdObjectStoreUploadUserObjectsVectorizedRequest *request, bdObjectStoreUploadUserObjectsVectorizedResponse *response)
{
  return ?uploadUserObjectsVectorized@bdObjectStore@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBVbdObjectStoreUploadUserObjectsVectorizedRequest@@PEAVbdObjectStoreUploadUserObjectsVectorizedResponse@@@Z(this, result, request, response);
}

/*
==============
bdObjectStore::getUserObjectIfChanged
==============
*/

bdReference<bdRemoteTask> *__fastcall bdObjectStore::getUserObjectIfChanged(bdObjectStore *this, bdReference<bdRemoteTask> *result, const bdObjectStoreGetUserObjectIfChangedRequest *request, bdObjectStoreGetUserObjectIfChangedResponse *response)
{
  return ?getUserObjectIfChanged@bdObjectStore@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBVbdObjectStoreGetUserObjectIfChangedRequest@@PEAVbdObjectStoreGetUserObjectIfChangedResponse@@@Z(this, result, request, response);
}

/*
==============
bdObjectStore::incrementBatchIndexToNextObject
==============
*/

void __fastcall bdObjectStore::incrementBatchIndexToNextObject(bdObjectStore *this)
{
  ?incrementBatchIndexToNextObject@bdObjectStore@@IEAAXXZ(this);
}

/*
==============
bdObjectStore::updateBatchDownloadStatus
==============
*/

void __fastcall bdObjectStore::updateBatchDownloadStatus(bdObjectStore *this, bdObjectStoreErrorWrappedObject::bdObjectStoreDownloadStatus downloadStatus)
{
  ?updateBatchDownloadStatus@bdObjectStore@@IEAAXW4bdObjectStoreDownloadStatus@bdObjectStoreErrorWrappedObject@@@Z(this, downloadStatus);
}

/*
==============
bdObjectStore::bdObjectStore
==============
*/

void __fastcall bdObjectStore::bdObjectStore(bdObjectStore *this, bdRemoteTaskManager *const remoteTaskManager, bdLobbyService *lobbyService, const char *certificateAuthorityPath)
{
  ??0bdObjectStore@@QEAA@QEAVbdRemoteTaskManager@@PEAVbdLobbyService@@PEBD@Z(this, remoteTaskManager, lobbyService, certificateAuthorityPath);
}

/*
==============
bdObjectStore::uploadUserObjectWithUserSummaryObject
==============
*/

bdReference<bdRemoteTask> *__fastcall bdObjectStore::uploadUserObjectWithUserSummaryObject(bdObjectStore *this, bdReference<bdRemoteTask> *result, const bdObjectStoreUploadMultipleLargeObjectsRequest *request, bdObjectStoreUploadMultipleLargeObjectsResponse *response)
{
  return ?uploadUserObjectWithUserSummaryObject@bdObjectStore@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBVbdObjectStoreUploadMultipleLargeObjectsRequest@@PEAVbdObjectStoreUploadMultipleLargeObjectsResponse@@@Z(this, result, request, response);
}

/*
==============
bdObjectStore::getUserSummaryObject
==============
*/

bdReference<bdRemoteTask> *__fastcall bdObjectStore::getUserSummaryObject(bdObjectStore *this, bdReference<bdRemoteTask> *result, const bdObjectStoreGetUserSummaryObjectRequest *request, bdObjectStoreGetUserSummaryObjectResponse *response)
{
  return ?getUserSummaryObject@bdObjectStore@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBVbdObjectStoreGetUserSummaryObjectRequest@@PEAVbdObjectStoreGetUserSummaryObjectResponse@@@Z(this, result, request, response);
}

/*
==============
bdObjectStore::getPublisherObject
==============
*/

bdReference<bdRemoteTask> *__fastcall bdObjectStore::getPublisherObject(bdObjectStore *this, bdReference<bdRemoteTask> *result, const bdObjectStoreGetPublisherObjectRequest *request, bdObjectStoreGetPublisherObjectResponse *response)
{
  return ?getPublisherObject@bdObjectStore@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBVbdObjectStoreGetPublisherObjectRequest@@PEAVbdObjectStoreGetPublisherObjectResponse@@@Z(this, result, request, response);
}

/*
==============
bdObjectStore::pump
==============
*/

void __fastcall bdObjectStore::pump(bdObjectStore *this)
{
  ?pump@bdObjectStore@@QEAAXXZ(this);
}

/*
==============
bdObjectStore::getBatchRemoteTaskRefErrorCode
==============
*/

bdLobbyErrorCode __fastcall bdObjectStore::getBatchRemoteTaskRefErrorCode(bdObjectStore *this)
{
  return ?getBatchRemoteTaskRefErrorCode@bdObjectStore@@IEBA?AW4bdLobbyErrorCode@@XZ(this);
}

/*
==============
bdObjectStore::validateUploadUserObjectWithUserSummaryObjectRequest
==============
*/

bool __fastcall bdObjectStore::validateUploadUserObjectWithUserSummaryObjectRequest(bdObjectStore *this, const bdObjectStoreUploadMultipleLargeObjectsRequest *request)
{
  return ?validateUploadUserObjectWithUserSummaryObjectRequest@bdObjectStore@@IEBA_NPEBVbdObjectStoreUploadMultipleLargeObjectsRequest@@@Z(this, request);
}

/*
==============
bdObjectStore::isInitialized
==============
*/

bool __fastcall bdObjectStore::isInitialized(bdObjectStore *this)
{
  return ?isInitialized@bdObjectStore@@QEBA_NXZ(this);
}

/*
==============
bdObjectStore::getUserObject
==============
*/

bdReference<bdRemoteTask> *__fastcall bdObjectStore::getUserObject(bdObjectStore *this, bdReference<bdRemoteTask> *result, const bdObjectStoreGetLargeUserObjectRequest *request, bdObjectStoreGetLargeUserObjectResponse *response)
{
  return ?getUserObject@bdObjectStore@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBVbdObjectStoreGetLargeUserObjectRequest@@PEAVbdObjectStoreGetLargeUserObjectResponse@@@Z(this, result, request, response);
}

/*
==============
bdObjectStore::checkTaskResult
==============
*/

void __fastcall bdObjectStore::checkTaskResult(bdObjectStore *this, const bdLobbyErrorCode startTaskResult)
{
  ?checkTaskResult@bdObjectStore@@AEBAXW4bdLobbyErrorCode@@@Z(this, startTaskResult);
}

/*
==============
bdObjectStore::getUserObjectCounts
==============
*/

bdReference<bdRemoteTask> *__fastcall bdObjectStore::getUserObjectCounts(bdObjectStore *this, bdReference<bdRemoteTask> *result, const bdObjectStoreGetUserObjectCountsRequest *request, bdObjectStoreGetUserObjectCountsResponse *response)
{
  return ?getUserObjectCounts@bdObjectStore@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBVbdObjectStoreGetUserObjectCountsRequest@@PEAVbdObjectStoreGetUserObjectCountsResponse@@@Z(this, result, request, response);
}

/*
==============
bdObjectStore::uploadUserSummaryObject
==============
*/

bdReference<bdRemoteTask> *__fastcall bdObjectStore::uploadUserSummaryObject(bdObjectStore *this, bdReference<bdRemoteTask> *result, const bdObjectStoreUploadUserSummaryObjectRequest *request, bdObjectStoreUploadUserSummaryObjectResponse *response)
{
  return ?uploadUserSummaryObject@bdObjectStore@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBVbdObjectStoreUploadUserSummaryObjectRequest@@PEAVbdObjectStoreUploadUserSummaryObjectResponse@@@Z(this, result, request, response);
}

/*
==============
bdObjectStore::listPublisherObjectsByCategory
==============
*/

bdReference<bdRemoteTask> *__fastcall bdObjectStore::listPublisherObjectsByCategory(bdObjectStore *this, bdReference<bdRemoteTask> *result, const bdObjectStoreListPublisherObjectsByCategoryRequest *request, bdObjectStoreListPublisherObjectsByCategoryResponse *response)
{
  return ?listPublisherObjectsByCategory@bdObjectStore@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBVbdObjectStoreListPublisherObjectsByCategoryRequest@@PEAVbdObjectStoreListPublisherObjectsByCategoryResponse@@@Z(this, result, request, response);
}

/*
==============
bdObjectStore::getBatchTotal
==============
*/

unsigned int __fastcall bdObjectStore::getBatchTotal(bdObjectStore *this)
{
  return ?getBatchTotal@bdObjectStore@@IEAAIXZ(this);
}

/*
==============
bdObjectStore::getPublisherObjectFromBatch
==============
*/

bdReference<bdRemoteTask> *__fastcall bdObjectStore::getPublisherObjectFromBatch(bdObjectStore *this, bdReference<bdRemoteTask> *result)
{
  return ?getPublisherObjectFromBatch@bdObjectStore@@IEAA?AV?$bdReference@VbdRemoteTask@@@@XZ(this, result);
}

/*
==============
bdObjectStore::getUserSummaryObjectFromBatch
==============
*/

bdReference<bdRemoteTask> *__fastcall bdObjectStore::getUserSummaryObjectFromBatch(bdObjectStore *this, bdReference<bdRemoteTask> *result)
{
  return ?getUserSummaryObjectFromBatch@bdObjectStore@@IEAA?AV?$bdReference@VbdRemoteTask@@@@XZ(this, result);
}

/*
==============
bdObjectStore::getPublisherObjects
==============
*/

bdReference<bdRemoteTask> *__fastcall bdObjectStore::getPublisherObjects(bdObjectStore *this, bdReference<bdRemoteTask> *result, bdObjectStoreGetPublisherObjectsRequest *request, bdObjectStoreGetPublisherObjectsResponse *response)
{
  return ?getPublisherObjects@bdObjectStore@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEAVbdObjectStoreGetPublisherObjectsRequest@@PEAVbdObjectStoreGetPublisherObjectsResponse@@@Z(this, result, request, response);
}

/*
==============
bdObjectStore::uploadUserObject
==============
*/

bdReference<bdRemoteTask> *__fastcall bdObjectStore::uploadUserObject(bdObjectStore *this, bdReference<bdRemoteTask> *result, const bdObjectStoreUploadUserObjectRequest *request, bdObjectStoreUploadUserObjectResponse *response)
{
  return ?uploadUserObject@bdObjectStore@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBVbdObjectStoreUploadUserObjectRequest@@PEAVbdObjectStoreUploadUserObjectResponse@@@Z(this, result, request, response);
}

/*
==============
bdObjectStore::abortHTTPOperation
==============
*/

void __fastcall bdObjectStore::abortHTTPOperation(bdObjectStore *this)
{
  ?abortHTTPOperation@bdObjectStore@@QEAAXXZ(this);
}

/*
==============
bdObjectStore::uploadUserObject
==============
*/

bdReference<bdRemoteTask> *__fastcall bdObjectStore::uploadUserObject(bdObjectStore *this, bdReference<bdRemoteTask> *result, const bdObjectStoreUploadLargeUserObjectRequest *request, bdObjectStoreUploadLargeUserObjectResponse *response)
{
  return ?uploadUserObject@bdObjectStore@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBVbdObjectStoreUploadLargeUserObjectRequest@@PEAVbdObjectStoreUploadLargeUserObjectResponse@@@Z(this, result, request, response);
}

/*
==============
bdObjectStore::getUserObjectMetadata
==============
*/

bdReference<bdRemoteTask> *__fastcall bdObjectStore::getUserObjectMetadata(bdObjectStore *this, bdReference<bdRemoteTask> *result, const bdObjectStoreGetUserObjectMetadataRequest *request, bdObjectStoreGetUserObjectMetadataResponse *response)
{
  return ?getUserObjectMetadata@bdObjectStore@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBVbdObjectStoreGetUserObjectMetadataRequest@@PEAVbdObjectStoreGetUserObjectMetadataResponse@@@Z(this, result, request, response);
}

/*
==============
bdObjectStore::getUserObjectsMetadataByStatisticRange
==============
*/

bdReference<bdRemoteTask> *__fastcall bdObjectStore::getUserObjectsMetadataByStatisticRange(bdObjectStore *this, bdReference<bdRemoteTask> *result, const bdObjectStoreGetUserObjectsMetadataByStatisticRangeRequest *request, bdObjectStoreGetUserObjectsMetadataByStatisticRangeResponse *response)
{
  return ?getUserObjectsMetadataByStatisticRange@bdObjectStore@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBVbdObjectStoreGetUserObjectsMetadataByStatisticRangeRequest@@PEAVbdObjectStoreGetUserObjectsMetadataByStatisticRangeResponse@@@Z(this, result, request, response);
}

/*
==============
bdObjectStore::resetAfterBatch
==============
*/

void __fastcall bdObjectStore::resetAfterBatch(bdObjectStore *this)
{
  ?resetAfterBatch@bdObjectStore@@IEAAXXZ(this);
}

/*
==============
bdObjectStore::getPublisherObjectMetadatas
==============
*/

bdReference<bdRemoteTask> *__fastcall bdObjectStore::getPublisherObjectMetadatas(bdObjectStore *this, bdReference<bdRemoteTask> *result, const bdObjectStoreGetPublisherObjectsRequest *request, bdObjectStoreGetPublisherObjectMetadatasResponse *response)
{
  return ?getPublisherObjectMetadatas@bdObjectStore@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBVbdObjectStoreGetPublisherObjectsRequest@@PEAVbdObjectStoreGetPublisherObjectMetadatasResponse@@@Z(this, result, request, response);
}

/*
==============
bdObjectStore::deleteUserObject
==============
*/

bdReference<bdRemoteTask> *__fastcall bdObjectStore::deleteUserObject(bdObjectStore *this, bdReference<bdRemoteTask> *result, const bdObjectStoreDeleteUserObjectRequest *request, bdObjectStoreDeleteUserObjectResponse *response)
{
  return ?deleteUserObject@bdObjectStore@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBVbdObjectStoreDeleteUserObjectRequest@@PEAVbdObjectStoreDeleteUserObjectResponse@@@Z(this, result, request, response);
}

/*
==============
bdObjectStore::downloadBatchObject
==============
*/

void __fastcall bdObjectStore::downloadBatchObject(bdObjectStore *this)
{
  ?downloadBatchObject@bdObjectStore@@IEAAXXZ(this);
}

/*
==============
bdObjectStore::objectAtCurrentIndexHasError
==============
*/

bool __fastcall bdObjectStore::objectAtCurrentIndexHasError(bdObjectStore *this)
{
  return ?objectAtCurrentIndexHasError@bdObjectStore@@IEAA_NXZ(this);
}

/*
==============
bdObjectStore::getUserVotes
==============
*/

bdReference<bdRemoteTask> *__fastcall bdObjectStore::getUserVotes(bdObjectStore *this, bdReference<bdRemoteTask> *result, const bdObjectStoreGetUserVotesRequest *request, bdObjectStoreGetUserVotesResponse *response)
{
  return ?getUserVotes@bdObjectStore@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBVbdObjectStoreGetUserVotesRequest@@PEAVbdObjectStoreGetUserVotesResponse@@@Z(this, result, request, response);
}

/*
==============
bdObjectStore::init
==============
*/

bool __fastcall bdObjectStore::init(bdObjectStore *this, bdEnvironment environment)
{
  return ?init@bdObjectStore@@QEAA_NW4bdEnvironment@@@Z(this, environment);
}

/*
==============
bdObjectStore::getUserObjectsVectorized
==============
*/

bdReference<bdRemoteTask> *__fastcall bdObjectStore::getUserObjectsVectorized(bdObjectStore *this, bdReference<bdRemoteTask> *result, const bdObjectStoreGetUserObjectsVectorizedRequest *request, bdObjectStoreGetUserObjectsVectorizedResponse *response)
{
  return ?getUserObjectsVectorized@bdObjectStore@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBVbdObjectStoreGetUserObjectsVectorizedRequest@@PEAVbdObjectStoreGetUserObjectsVectorizedResponse@@@Z(this, result, request, response);
}

/*
==============
bdObjectStore::getUserSummaryObjects
==============
*/

bdReference<bdRemoteTask> *__fastcall bdObjectStore::getUserSummaryObjects(bdObjectStore *this, bdReference<bdRemoteTask> *result, bdObjectStoreGetUserSummaryObjectsRequest *request, bdObjectStoreGetUserSummaryObjectsResponse *response)
{
  return ?getUserSummaryObjects@bdObjectStore@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEAVbdObjectStoreGetUserSummaryObjectsRequest@@PEAVbdObjectStoreGetUserSummaryObjectsResponse@@@Z(this, result, request, response);
}

/*
==============
bdObjectStore::searchUsersObjectsByTags
==============
*/

bdReference<bdRemoteTask> *__fastcall bdObjectStore::searchUsersObjectsByTags(bdObjectStore *this, bdReference<bdRemoteTask> *result, const bdObjectStoreSearchUsersObjectsByTagsRequest *request, bdObjectStoreSearchUsersObjectsByTagsResponse *response)
{
  return ?searchUsersObjectsByTags@bdObjectStore@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBVbdObjectStoreSearchUsersObjectsByTagsRequest@@PEAVbdObjectStoreSearchUsersObjectsByTagsResponse@@@Z(this, result, request, response);
}

/*
==============
bdObjectStore::listUserObjectsByCategory
==============
*/

bdReference<bdRemoteTask> *__fastcall bdObjectStore::listUserObjectsByCategory(bdObjectStore *this, bdReference<bdRemoteTask> *result, const bdObjectStoreListUserObjectsByCategoryRequest *request, bdObjectStoreListUserObjectsByCategoryResponse *response)
{
  return ?listUserObjectsByCategory@bdObjectStore@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBVbdObjectStoreListUserObjectsByCategoryRequest@@PEAVbdObjectStoreListUserObjectsByCategoryResponse@@@Z(this, result, request, response);
}

/*
==============
bdObjectStore::getUserObject
==============
*/

bdReference<bdRemoteTask> *__fastcall bdObjectStore::getUserObject(bdObjectStore *this, bdReference<bdRemoteTask> *result, const bdObjectStoreGetUserObjectRequest *request, bdObjectStoreGetUserObjectResponse *response)
{
  return ?getUserObject@bdObjectStore@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBVbdObjectStoreGetUserObjectRequest@@PEAVbdObjectStoreGetUserObjectResponse@@@Z(this, result, request, response);
}

/*
==============
bdObjectStore::isIdle
==============
*/

bool __fastcall bdObjectStore::isIdle(bdObjectStore *this)
{
  return ?isIdle@bdObjectStore@@QEBA_NXZ(this);
}

/*
==============
bdObjectStore::~bdObjectStore
==============
*/

void __fastcall bdObjectStore::~bdObjectStore(bdObjectStore *this)
{
  ??1bdObjectStore@@QEAA@XZ(this);
}

/*
==============
bdObjectStore::handleBatchFailure
==============
*/

void __fastcall bdObjectStore::handleBatchFailure(bdObjectStore *this)
{
  ?handleBatchFailure@bdObjectStore@@IEAAXXZ(this);
}

/*
==============
bdObjectStore::bdObjectStore
==============
*/
void bdObjectStore::bdObjectStore(bdObjectStore *this, bdRemoteTaskManager *const remoteTaskManager, bdLobbyService *lobbyService, const char *certificateAuthorityPath)
{
  bdRemoteTask *v6; 
  bdRemoteTask *v7; 
  bdRemoteTask *v8; 
  bdReference<bdRemoteTask> other; 
  bdRemoteTask *v10; 

  other.m_ptr = (bdRemoteTask *)this;
  this->m_remoteTaskManager = remoteTaskManager;
  this->m_environment = BD_ENVIRONMENT_MAX;
  bdObjectStoreStreaming::bdObjectStoreStreaming(&this->m_streaming, remoteTaskManager, lobbyService, certificateAuthorityPath);
  v6 = NULL;
  this->m_batchRequest = NULL;
  this->m_batchResponse = NULL;
  *(_QWORD *)&this->m_batchIndex = 0i64;
  this->m_batchOverallRemoteTaskRef.m_ptr = NULL;
  this->m_batchRemoteTaskRef.m_ptr = NULL;
  this->m_initialized = 0;
  this->m_lobbyService = lobbyService;
  this->m_batchDownloadStarted = 0;
  v7 = (bdRemoteTask *)bdMemory::allocate(0x68ui64);
  v10 = v7;
  if ( v7 )
  {
    bdRemoteTask::bdRemoteTask(v7);
    v6 = v8;
  }
  other.m_ptr = v6;
  if ( v6 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v6->m_refCount, 1u);
  bdReference<bdRemoteTask>::operator=(&this->m_batchOverallRemoteTaskRef, &other);
  if ( v6 && _InterlockedExchangeAdd((volatile signed __int32 *)&v6->m_refCount, 0xFFFFFFFF) == 1 )
    ((void (__fastcall *)(bdRemoteTask *, __int64))v6->~bdReferencable)(v6, 1i64);
  this->m_batchOverallRemoteTaskRef.m_ptr->m_status = BD_FAILED;
  this->m_batchOverallRemoteTaskRef.m_ptr->m_errorCode = BD_START_TASK_FAILED;
}

/*
==============
bdObjectStore::~bdObjectStore
==============
*/
void bdObjectStore::~bdObjectStore(bdObjectStore *this)
{
  bdRemoteTask *m_ptr; 
  bdRemoteTask *v3; 
  bdRemoteTask *v4; 
  bdRemoteTask *v5; 

  m_ptr = this->m_batchRemoteTaskRef.m_ptr;
  if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
  {
    v3 = this->m_batchRemoteTaskRef.m_ptr;
    if ( v3 )
      ((void (__fastcall *)(bdRemoteTask *, __int64))v3->~bdReferencable)(v3, 1i64);
    this->m_batchRemoteTaskRef.m_ptr = NULL;
  }
  v4 = this->m_batchOverallRemoteTaskRef.m_ptr;
  if ( v4 && _InterlockedExchangeAdd((volatile signed __int32 *)&v4->m_refCount, 0xFFFFFFFF) == 1 )
  {
    v5 = this->m_batchOverallRemoteTaskRef.m_ptr;
    if ( v5 )
      ((void (__fastcall *)(bdRemoteTask *, __int64))v5->~bdReferencable)(v5, 1i64);
    this->m_batchOverallRemoteTaskRef.m_ptr = NULL;
  }
  bdObjectStoreStreaming::~bdObjectStoreStreaming(&this->m_streaming);
}

/*
==============
bdObjectStore::abortHTTPOperation
==============
*/
void bdObjectStore::abortHTTPOperation(bdObjectStore *this)
{
  bdObjectStoreStreaming::abortHTTPOperation(&this->m_streaming);
  if ( this->m_batchInProgress )
  {
    bdObjectStore::updateBatchDownloadStatus(this, BD_DOWNLOAD_CANCELLED);
    this->m_batchOverallRemoteTaskRef.m_ptr->m_status = BD_CANCELLED;
    this->m_batchOverallRemoteTaskRef.m_ptr->m_errorCode = BD_NO_ERROR;
    this->m_batchRequest = NULL;
    this->m_batchResponse = NULL;
    *(_QWORD *)&this->m_batchIndex = 0i64;
    this->m_batchDownloadStarted = 0;
    bdObjectStoreStreaming::reset(&this->m_streaming);
  }
}

/*
==============
bdObjectStore::checkTaskResult
==============
*/
void bdObjectStore::checkTaskResult(bdObjectStore *this, const bdLobbyErrorCode startTaskResult)
{
  if ( startTaskResult )
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdObjectStore", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstore.cpp", "bdObjectStore::checkTaskResult", 0x43Du, "Failed to start task: Error %i", startTaskResult);
}

/*
==============
bdObjectStore::deleteUserObject
==============
*/
bdReference<bdRemoteTask> *bdObjectStore::deleteUserObject(bdObjectStore *this, bdReference<bdRemoteTask> *result, const bdObjectStoreDeleteUserObjectRequest *request, bdObjectStoreDeleteUserObjectResponse *response)
{
  bdStructBufferSerializable *v8; 
  bdLobbyErrorCode started; 
  bdStructBufferTask *m_ptr; 
  bdReference<bdStructBufferTask> newTask; 
  bdReference<bdRemoteTask> *v13; 

  v13 = result;
  bdHandleAssert(this->m_initialized, "isInitialized()", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstore.cpp", "bdObjectStore::deleteUserObject", 0x35Du, "init() must be called on ObjectStore before requests can be made");
  bdObjectStoreRequestBase::setEnvironment(&request->bdObjectStoreRequestBase, this->m_environment);
  result->m_ptr = NULL;
  newTask.m_ptr = NULL;
  v8 = &request->bdStructBufferSerializable;
  if ( !request )
    v8 = NULL;
  started = bdRemoteTaskManager::startStructTask(this->m_remoteTaskManager, &newTask, 0xC1u, 4u, v8, response, this->m_lobbyService);
  if ( started )
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdObjectStore", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstore.cpp", "bdObjectStore::checkTaskResult", 0x43Du, "Failed to start task: Error %i", started);
  if ( result == (bdReference<bdRemoteTask> *)&newTask )
    goto LABEL_12;
  if ( result->m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result->m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result->m_ptr )
    ((void (__fastcall *)(bdRemoteTask *, __int64))result->m_ptr->~bdReferencable)(result->m_ptr, 1i64);
  m_ptr = newTask.m_ptr;
  result->m_ptr = newTask.m_ptr;
  if ( m_ptr )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
LABEL_12:
    m_ptr = newTask.m_ptr;
  }
  if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 && newTask.m_ptr )
    ((void (__fastcall *)(bdStructBufferTask *, __int64))newTask.m_ptr->~bdReferencable)(newTask.m_ptr, 1i64);
  return result;
}

/*
==============
bdObjectStore::downloadBatchObject
==============
*/
void bdObjectStore::downloadBatchObject(bdObjectStore *this)
{
  unsigned int BatchTotal; 
  bdStructBufferSerializable *m_batchResponse; 
  bdObjectStoreGetUserSummaryObjectsResponse *v4; 
  bdObjectStoreErrorWrappedObject *ObjectList; 
  bdStructBufferSerializable *v6; 
  bdObjectStoreGetPublisherObjectsResponse *v7; 
  unsigned int v8; 
  unsigned int m_batchIndex; 
  bdStructBufferSerializable *v10; 
  bdStructBufferSerializable *v11; 
  bdObjectStoreGetUserSummaryObjectsResponse *v12; 
  bdObjectStoreGetUserSummaryObjectsRequest *v13; 
  bdObjectStoreObject *v14; 
  const bdObjectStoreMetadata *v15; 
  const char *v16; 
  bdObjectStoreObject *v17; 
  unsigned __int64 v18; 
  bdObjectStoreObject *v19; 
  unsigned __int8 *v20; 
  bdObjectStoreObject *v21; 
  bdObjectStoreDownloadInterceptor *v22; 
  bdRemoteTask *m_ptr; 
  bdStructBufferSerializable *m_batchRequest; 
  bdStructBufferSerializable *v25; 
  bdObjectStoreGetPublisherObjectsRequest *v26; 
  bdObjectStoreGetPublisherObjectsResponse *v27; 
  bdObjectStoreObject *ObjectAtIndex; 
  const bdObjectStoreMetadata *Metadata; 
  const char *AuthorizationHeaderValue; 
  bdObjectStoreObject *v31; 
  unsigned __int64 ContentSize; 
  bdObjectStoreObject *v33; 
  unsigned __int8 *Content; 
  bdObjectStoreObject *v35; 
  bdObjectStoreDownloadInterceptor *DownloadInterceptor; 
  bdReference<bdRemoteTask> result; 
  bdReference<bdRemoteTask> other; 

  BatchTotal = bdObjectStore::getBatchTotal(this);
  if ( this->m_batchIndex < BatchTotal )
  {
    while ( this->m_batchInProgress != BD_OBJECTSTORE_PUBLISHER_BATCH_DOWNLOAD )
    {
      if ( this->m_batchInProgress == BD_OBJECTSTORE_SUMMARY_BATCH_DOWNLOAD )
      {
        m_batchResponse = this->m_batchResponse;
        v4 = (bdObjectStoreGetUserSummaryObjectsResponse *)(&m_batchResponse[-1].__vftable + 3);
        if ( !m_batchResponse )
          v4 = NULL;
        ObjectList = bdObjectStoreGetUserSummaryObjectsResponse::getObjectList(v4);
        goto LABEL_11;
      }
      bdLogMessage(BD_LOG_ERROR, (const char *const)&::other, "bdObjectStore/bdObjectStore", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstore.cpp", "bdObjectStore::objectAtCurrentIndexHasError", 0xBAu, "Unknown Batching type.");
LABEL_12:
      if ( ++this->m_batchIndex >= BatchTotal )
        goto LABEL_13;
    }
    v6 = this->m_batchResponse;
    v7 = (bdObjectStoreGetPublisherObjectsResponse *)(&v6[-1].__vftable + 3);
    if ( !v6 )
      v7 = NULL;
    ObjectList = bdObjectStoreGetPublisherObjectsResponse::getObjectList(v7);
LABEL_11:
    if ( !bdObjectStoreErrorWrappedObject::hasError(&ObjectList[this->m_batchIndex]) )
      goto LABEL_13;
    goto LABEL_12;
  }
LABEL_13:
  v8 = bdObjectStore::getBatchTotal(this);
  m_batchIndex = this->m_batchIndex;
  if ( m_batchIndex >= v8 )
  {
    this->m_batchOverallRemoteTaskRef.m_ptr->m_status = BD_DONE;
    this->m_batchOverallRemoteTaskRef.m_ptr->m_errorCode = BD_NO_ERROR;
    this->m_batchRequest = NULL;
    this->m_batchResponse = NULL;
    *(_QWORD *)&this->m_batchIndex = 0i64;
    this->m_batchDownloadStarted = 0;
    bdObjectStoreStreaming::reset(&this->m_streaming);
    return;
  }
  if ( this->m_batchInProgress == BD_OBJECTSTORE_PUBLISHER_BATCH_DOWNLOAD )
  {
    bdHandleAssert(this->m_initialized, "isInitialized()", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstore.cpp", "bdObjectStore::getPublisherObjectFromBatch", 0x233u, "init() must be called on ObjectStore before requests can be made");
    m_batchRequest = this->m_batchRequest;
    v25 = this->m_batchResponse;
    v26 = (bdObjectStoreGetPublisherObjectsRequest *)&m_batchRequest[-1];
    v27 = (bdObjectStoreGetPublisherObjectsResponse *)(&v25[-1].__vftable + 3);
    if ( !v25 )
      v27 = NULL;
    if ( !m_batchRequest )
      v26 = NULL;
    bdObjectStoreGetPublisherObjectsRequest::setObjectIDForRequest(v26, this->m_batchIndex);
    bdObjectStoreGetPublisherObjectsResponse::setObjectForResponse(v27, this->m_batchIndex);
    ObjectAtIndex = bdObjectStoreGetPublisherObjectsResponse::getObjectAtIndex(v27, this->m_batchIndex);
    Metadata = bdObjectStoreObject::getMetadata(ObjectAtIndex);
    AuthorizationHeaderValue = bdObjectStoreGetPublisherObjectsResponse::getAuthorizationHeaderValue(v27);
    v31 = bdObjectStoreGetPublisherObjectsResponse::getObjectAtIndex(v27, this->m_batchIndex);
    ContentSize = bdObjectStoreObject::getContentSize(v31);
    v33 = bdObjectStoreGetPublisherObjectsResponse::getObjectAtIndex(v27, this->m_batchIndex);
    Content = bdObjectStoreObject::getContent(v33);
    v35 = bdObjectStoreGetPublisherObjectsResponse::getObjectAtIndex(v27, this->m_batchIndex);
    DownloadInterceptor = bdObjectStoreObject::getDownloadInterceptor(v35);
    bdObjectStoreStreaming::initDownload(&this->m_streaming, DownloadInterceptor, Content, ContentSize, AuthorizationHeaderValue, Metadata);
    bdObjectStore::updateBatchDownloadStatus(this, BD_DOWNLOAD_IN_PROGRESS);
    bdObjectStoreStreaming::startDownload(&this->m_streaming, &other);
    bdReference<bdRemoteTask>::operator=(&this->m_batchRemoteTaskRef, &other);
    if ( other.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&other.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
    {
      m_ptr = other.m_ptr;
LABEL_32:
      if ( m_ptr )
        ((void (__fastcall *)(bdRemoteTask *, __int64))m_ptr->~bdReferencable)(m_ptr, 1i64);
    }
  }
  else
  {
    if ( this->m_batchInProgress != BD_OBJECTSTORE_SUMMARY_BATCH_DOWNLOAD )
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&::other, "bdObjectStore/bdObjectStore", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstore.cpp", "bdObjectStore::downloadBatchObject", 0x121u, "Unknown Batching type.");
      return;
    }
    v10 = this->m_batchResponse;
    v11 = this->m_batchRequest;
    v12 = (bdObjectStoreGetUserSummaryObjectsResponse *)(&v10[-1].__vftable + 3);
    if ( !v10 )
      v12 = NULL;
    v13 = (bdObjectStoreGetUserSummaryObjectsRequest *)&v11[-1];
    if ( !v11 )
      v13 = NULL;
    bdObjectStoreGetUserSummaryObjectsRequest::setObjectIDForRequest(v13, m_batchIndex);
    bdObjectStoreGetUserSummaryObjectsResponse::setObjectForResponse(v12, this->m_batchIndex);
    v14 = bdObjectStoreGetUserSummaryObjectsResponse::getObjectAtIndex(v12, this->m_batchIndex);
    v15 = bdObjectStoreObject::getMetadata(v14);
    v16 = bdObjectStoreGetUserSummaryObjectsResponse::getAuthorizationHeaderValue(v12);
    v17 = bdObjectStoreGetUserSummaryObjectsResponse::getObjectAtIndex(v12, this->m_batchIndex);
    v18 = bdObjectStoreObject::getContentSize(v17);
    v19 = bdObjectStoreGetUserSummaryObjectsResponse::getObjectAtIndex(v12, this->m_batchIndex);
    v20 = bdObjectStoreObject::getContent(v19);
    v21 = bdObjectStoreGetUserSummaryObjectsResponse::getObjectAtIndex(v12, this->m_batchIndex);
    v22 = bdObjectStoreObject::getDownloadInterceptor(v21);
    bdObjectStoreStreaming::initDownload(&this->m_streaming, v22, v20, v18, v16, v15);
    bdObjectStoreStreaming::startDownload(&this->m_streaming, &result);
    bdReference<bdRemoteTask>::operator=(&this->m_batchRemoteTaskRef, &result);
    if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
    {
      m_ptr = result.m_ptr;
      goto LABEL_32;
    }
  }
}

/*
==============
bdObjectStore::getBatchRemoteTaskRefErrorCode
==============
*/
bdRemoteTask *bdObjectStore::getBatchRemoteTaskRefErrorCode(bdObjectStore *this)
{
  bdRemoteTask *result; 

  result = this->m_batchRemoteTaskRef.m_ptr;
  if ( result )
    return (bdRemoteTask *)(unsigned int)result->m_errorCode;
  return result;
}

/*
==============
bdObjectStore::getBatchTotal
==============
*/
unsigned int bdObjectStore::getBatchTotal(bdObjectStore *this)
{
  bdStructBufferSerializable *v2; 
  bdObjectStoreGetUserSummaryObjectsRequest *v3; 
  bdStructBufferSerializable *m_batchRequest; 
  bdObjectStoreGetPublisherObjectsRequest *v5; 

  if ( this->m_batchInProgress == BD_OBJECTSTORE_PUBLISHER_BATCH_DOWNLOAD )
  {
    m_batchRequest = this->m_batchRequest;
    v5 = (bdObjectStoreGetPublisherObjectsRequest *)&m_batchRequest[-1];
    if ( !m_batchRequest )
      v5 = NULL;
    return bdObjectStoreGetPublisherObjectsRequest::getObjectIDsSize(v5);
  }
  else if ( this->m_batchInProgress == BD_OBJECTSTORE_SUMMARY_BATCH_DOWNLOAD )
  {
    v2 = this->m_batchRequest;
    v3 = (bdObjectStoreGetUserSummaryObjectsRequest *)&v2[-1];
    if ( !v2 )
      v3 = NULL;
    return bdObjectStoreGetUserSummaryObjectsRequest::getObjectIDsSize(v3);
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdObjectStore/bdObjectStore", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstore.cpp", "bdObjectStore::getBatchTotal", 0x6Au, "Unknown Batching type.");
    return 0;
  }
}

/*
==============
bdObjectStore::getPublisherObject
==============
*/
bdReference<bdRemoteTask> *bdObjectStore::getPublisherObject(bdObjectStore *this, bdReference<bdRemoteTask> *result, const bdObjectStoreGetPublisherObjectRequest *request, bdObjectStoreGetPublisherObjectResponse *response)
{
  bdStructBufferSerializable *v8; 
  bdStructBufferSerializable *v9; 
  bdLobbyErrorCode started; 
  bdObjectStoreStreaming *p_m_streaming; 
  bdObjectStoreObject *Object; 
  const bdObjectStoreMetadata *Metadata; 
  const char *AuthorizationHeaderValue; 
  bdObjectStoreObject *v15; 
  unsigned __int64 ContentSize; 
  bdObjectStoreObject *v17; 
  unsigned __int8 *Content; 
  bdObjectStoreObject *v19; 
  bdObjectStoreDownloadInterceptor *DownloadInterceptor; 
  bdReference<bdStructBufferTask> newTask; 

  newTask.m_ptr = (bdStructBufferTask *)result;
  bdHandleAssert(this->m_initialized, "isInitialized()", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstore.cpp", "bdObjectStore::getPublisherObject", 0x1F5u, "init() must be called on ObjectStore before requests can be made");
  newTask.m_ptr = NULL;
  bdObjectStoreRequestBase::setEnvironment(&request->bdObjectStoreRequestBase, this->m_environment);
  v8 = &response->bdStructBufferSerializable;
  if ( !response )
    v8 = NULL;
  v9 = &request->bdStructBufferSerializable;
  if ( !request )
    v9 = NULL;
  started = bdRemoteTaskManager::startStructTask(this->m_remoteTaskManager, &newTask, 0xC1u, 8u, v9, v8, this->m_lobbyService);
  if ( started )
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdObjectStore", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstore.cpp", "bdObjectStore::checkTaskResult", 0x43Du, "Failed to start task: Error %i", started);
  p_m_streaming = &this->m_streaming;
  bdObjectStoreStreaming::setRemoteTask(p_m_streaming, &newTask);
  Object = bdObjectStoreGetPublisherObjectResponse::getObject(response);
  Metadata = bdObjectStoreObject::getMetadata(Object);
  AuthorizationHeaderValue = bdObjectStoreGetPublisherObjectResponse::getAuthorizationHeaderValue(response);
  v15 = bdObjectStoreGetPublisherObjectResponse::getObject(response);
  ContentSize = bdObjectStoreObject::getContentSize(v15);
  v17 = bdObjectStoreGetPublisherObjectResponse::getObject(response);
  Content = bdObjectStoreObject::getContent(v17);
  v19 = bdObjectStoreGetPublisherObjectResponse::getObject(response);
  DownloadInterceptor = bdObjectStoreObject::getDownloadInterceptor(v19);
  bdObjectStoreStreaming::initDownload(p_m_streaming, DownloadInterceptor, Content, ContentSize, AuthorizationHeaderValue, Metadata);
  bdObjectStoreStreaming::startDownload(p_m_streaming, result);
  if ( newTask.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&newTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && newTask.m_ptr )
    ((void (__fastcall *)(bdStructBufferTask *, __int64))newTask.m_ptr->~bdReferencable)(newTask.m_ptr, 1i64);
  return result;
}

/*
==============
bdObjectStore::getPublisherObjectFromBatch
==============
*/
bdReference<bdRemoteTask> *bdObjectStore::getPublisherObjectFromBatch(bdObjectStore *this, bdReference<bdRemoteTask> *result)
{
  bdStructBufferSerializable *m_batchResponse; 
  bdStructBufferSerializable *m_batchRequest; 
  bdObjectStoreGetPublisherObjectsResponse *v6; 
  bdObjectStoreGetPublisherObjectsRequest *v7; 
  bdObjectStoreObject *ObjectAtIndex; 
  const bdObjectStoreMetadata *Metadata; 
  const char *AuthorizationHeaderValue; 
  bdObjectStoreObject *v11; 
  unsigned __int64 ContentSize; 
  bdObjectStoreObject *v13; 
  unsigned __int8 *Content; 
  bdObjectStoreObject *v15; 
  bdObjectStoreDownloadInterceptor *DownloadInterceptor; 

  bdHandleAssert(this->m_initialized, "isInitialized()", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstore.cpp", "bdObjectStore::getPublisherObjectFromBatch", 0x233u, "init() must be called on ObjectStore before requests can be made");
  m_batchResponse = this->m_batchResponse;
  m_batchRequest = this->m_batchRequest;
  v6 = (bdObjectStoreGetPublisherObjectsResponse *)(&m_batchResponse[-1].__vftable + 3);
  if ( !m_batchResponse )
    v6 = NULL;
  v7 = (bdObjectStoreGetPublisherObjectsRequest *)&m_batchRequest[-1];
  if ( !m_batchRequest )
    v7 = NULL;
  bdObjectStoreGetPublisherObjectsRequest::setObjectIDForRequest(v7, this->m_batchIndex);
  bdObjectStoreGetPublisherObjectsResponse::setObjectForResponse(v6, this->m_batchIndex);
  ObjectAtIndex = bdObjectStoreGetPublisherObjectsResponse::getObjectAtIndex(v6, this->m_batchIndex);
  Metadata = bdObjectStoreObject::getMetadata(ObjectAtIndex);
  AuthorizationHeaderValue = bdObjectStoreGetPublisherObjectsResponse::getAuthorizationHeaderValue(v6);
  v11 = bdObjectStoreGetPublisherObjectsResponse::getObjectAtIndex(v6, this->m_batchIndex);
  ContentSize = bdObjectStoreObject::getContentSize(v11);
  v13 = bdObjectStoreGetPublisherObjectsResponse::getObjectAtIndex(v6, this->m_batchIndex);
  Content = bdObjectStoreObject::getContent(v13);
  v15 = bdObjectStoreGetPublisherObjectsResponse::getObjectAtIndex(v6, this->m_batchIndex);
  DownloadInterceptor = bdObjectStoreObject::getDownloadInterceptor(v15);
  bdObjectStoreStreaming::initDownload(&this->m_streaming, DownloadInterceptor, Content, ContentSize, AuthorizationHeaderValue, Metadata);
  bdObjectStore::updateBatchDownloadStatus(this, BD_DOWNLOAD_IN_PROGRESS);
  bdObjectStoreStreaming::startDownload(&this->m_streaming, result);
  return result;
}

/*
==============
bdObjectStore::getPublisherObjectMetadatas
==============
*/
bdReference<bdRemoteTask> *bdObjectStore::getPublisherObjectMetadatas(bdObjectStore *this, bdReference<bdRemoteTask> *result, const bdObjectStoreGetPublisherObjectsRequest *request, bdObjectStoreGetPublisherObjectMetadatasResponse *response)
{
  bdStructBufferSerializable *v8; 
  bdStructBufferSerializable *v9; 
  bdLobbyErrorCode started; 
  bdStructBufferTask *m_ptr; 
  bdReference<bdStructBufferTask> newTask; 

  newTask.m_ptr = NULL;
  bdObjectStoreGetPublisherObjectsRequest::setEnvironment((bdObjectStoreGetPublisherObjectsRequest *)request, this->m_environment);
  v8 = &response->bdStructBufferSerializable;
  if ( !response )
    v8 = NULL;
  v9 = &request->bdStructBufferSerializable;
  if ( !request )
    v9 = NULL;
  started = bdRemoteTaskManager::startStructTask(this->m_remoteTaskManager, &newTask, 0xC1u, 0x10u, v9, v8, this->m_lobbyService);
  if ( started )
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdObjectStore", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstore.cpp", "bdObjectStore::checkTaskResult", 0x43Du, "Failed to start task: Error %i", started);
  m_ptr = newTask.m_ptr;
  result->m_ptr = newTask.m_ptr;
  if ( m_ptr )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
    m_ptr = newTask.m_ptr;
  }
  if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 && newTask.m_ptr )
    ((void (__fastcall *)(bdStructBufferTask *, __int64))newTask.m_ptr->~bdReferencable)(newTask.m_ptr, 1i64);
  return result;
}

/*
==============
bdObjectStore::getPublisherObjects
==============
*/
bdReference<bdRemoteTask> *bdObjectStore::getPublisherObjects(bdObjectStore *this, bdReference<bdRemoteTask> *result, bdObjectStoreGetPublisherObjectsRequest *request, bdObjectStoreGetPublisherObjectsResponse *response)
{
  unsigned int ObjectIDsSize; 
  unsigned int ObjectListSize; 
  bdStructBufferSerializable *v10; 
  bdStructBufferSerializable *v11; 
  bdLobbyErrorCode started; 
  bdRemoteTask *m_ptr; 
  bdReference<bdStructBufferTask> newTask; 

  newTask.m_ptr = (bdStructBufferTask *)result;
  bdHandleAssert(this->m_initialized, "isInitialized()", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstore.cpp", "bdObjectStore::getPublisherObjects", 0x210u, "init() must be called on ObjectStore before requests can be made");
  ObjectIDsSize = bdObjectStoreGetPublisherObjectsRequest::getObjectIDsSize(request);
  ObjectListSize = bdObjectStoreGetPublisherObjectsResponse::getObjectListSize(response);
  bdHandleAssert(ObjectIDsSize == ObjectListSize, "request->getObjectIDsSize() == response->getObjectListSize()", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstore.cpp", "bdObjectStore::getPublisherObjects", 0x216u, "request and response arrays are different sizes.");
  bdHandleAssert(this->m_batchInProgress == BD_OBJECTSTORE_NO_BATCH, "m_batchInProgress == BD_OBJECTSTORE_NO_BATCH", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstore.cpp", "bdObjectStore::setBatchInProgress", 0x155u, "Batch already in progress, either pump existing task to completion or cancel it");
  this->m_batchInProgress = BD_OBJECTSTORE_PUBLISHER_BATCH_DOWNLOAD;
  bdObjectStoreGetPublisherObjectsRequest::setEnvironment(request, this->m_environment);
  v10 = &request->bdStructBufferSerializable;
  if ( !request )
    v10 = NULL;
  this->m_batchRequest = v10;
  v11 = &response->bdStructBufferSerializable;
  if ( !response )
    v11 = NULL;
  this->m_batchResponse = v11;
  newTask.m_ptr = NULL;
  started = bdRemoteTaskManager::startStructTask(this->m_remoteTaskManager, &newTask, 0xC1u, 0x10u, v10, v11, this->m_lobbyService);
  if ( started )
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdObjectStore", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstore.cpp", "bdObjectStore::checkTaskResult", 0x43Du, "Failed to start task: Error %i", started);
  bdObjectStoreStreaming::setRemoteTask(&this->m_streaming, &newTask);
  this->m_batchOverallRemoteTaskRef.m_ptr->m_status = BD_PENDING;
  this->m_batchOverallRemoteTaskRef.m_ptr->m_errorCode = BD_NO_ERROR;
  m_ptr = this->m_batchOverallRemoteTaskRef.m_ptr;
  result->m_ptr = m_ptr;
  if ( m_ptr )
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
  if ( newTask.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&newTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && newTask.m_ptr )
    ((void (__fastcall *)(bdStructBufferTask *, __int64))newTask.m_ptr->~bdReferencable)(newTask.m_ptr, 1i64);
  return result;
}

/*
==============
bdObjectStore::getUserObject
==============
*/
bdReference<bdRemoteTask> *bdObjectStore::getUserObject(bdObjectStore *this, bdReference<bdRemoteTask> *result, const bdObjectStoreGetLargeUserObjectRequest *request, bdObjectStoreGetLargeUserObjectResponse *response)
{
  bdStructBufferSerializable *v8; 
  bdStructBufferSerializable *v9; 
  bdLobbyErrorCode started; 
  bdObjectStoreStreaming *p_m_streaming; 
  bdObjectStoreObject *Object; 
  const bdObjectStoreMetadata *Metadata; 
  const char *AuthorizationHeaderValue; 
  bdObjectStoreObject *v15; 
  unsigned __int64 ContentSize; 
  bdObjectStoreObject *v17; 
  unsigned __int8 *Content; 
  bdObjectStoreObject *v19; 
  bdObjectStoreDownloadInterceptor *DownloadInterceptor; 
  bdReference<bdStructBufferTask> newTask; 

  newTask.m_ptr = NULL;
  bdObjectStoreRequestBase::setEnvironment(&request->bdObjectStoreRequestBase, this->m_environment);
  v8 = &response->bdStructBufferSerializable;
  if ( !response )
    v8 = NULL;
  v9 = &request->bdStructBufferSerializable;
  if ( !request )
    v9 = NULL;
  started = bdRemoteTaskManager::startStructTask(this->m_remoteTaskManager, &newTask, 0xC1u, 5u, v9, v8, this->m_lobbyService);
  if ( started )
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdObjectStore", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstore.cpp", "bdObjectStore::checkTaskResult", 0x43Du, "Failed to start task: Error %i", started);
  p_m_streaming = &this->m_streaming;
  bdObjectStoreStreaming::setRemoteTask(p_m_streaming, &newTask);
  Object = bdObjectStoreGetLargeUserObjectResponse::getObject(response);
  Metadata = bdObjectStoreObject::getMetadata(Object);
  AuthorizationHeaderValue = bdObjectStoreGetLargeUserObjectResponse::getAuthorizationHeaderValue(response);
  v15 = bdObjectStoreGetLargeUserObjectResponse::getObject(response);
  ContentSize = bdObjectStoreObject::getContentSize(v15);
  v17 = bdObjectStoreGetLargeUserObjectResponse::getObject(response);
  Content = bdObjectStoreObject::getContent(v17);
  v19 = bdObjectStoreGetLargeUserObjectResponse::getObject(response);
  DownloadInterceptor = bdObjectStoreObject::getDownloadInterceptor(v19);
  bdObjectStoreStreaming::initDownload(p_m_streaming, DownloadInterceptor, Content, ContentSize, AuthorizationHeaderValue, Metadata);
  bdObjectStoreStreaming::startDownload(p_m_streaming, result);
  if ( newTask.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&newTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && newTask.m_ptr )
    ((void (__fastcall *)(bdStructBufferTask *, __int64))newTask.m_ptr->~bdReferencable)(newTask.m_ptr, 1i64);
  return result;
}

/*
==============
bdObjectStore::getUserObject
==============
*/
bdReference<bdRemoteTask> *bdObjectStore::getUserObject(bdObjectStore *this, bdReference<bdRemoteTask> *result, const bdObjectStoreGetUserObjectRequest *request, bdObjectStoreGetUserObjectResponse *response)
{
  bdStructBufferSerializable *v8; 
  bdStructBufferSerializable *v9; 
  bdLobbyErrorCode started; 
  bdStructBufferTask *m_ptr; 
  bdReference<bdStructBufferTask> newTask; 
  bdReference<bdRemoteTask> *v14; 

  v14 = result;
  bdHandleAssert(this->m_initialized, "isInitialized()", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstore.cpp", "bdObjectStore::getUserObject", 0x15Cu, "init() must be called on ObjectStore before requests can be made");
  bdObjectStoreRequestBase::setEnvironment(&request->bdObjectStoreRequestBase, this->m_environment);
  result->m_ptr = NULL;
  newTask.m_ptr = NULL;
  v8 = &response->bdStructBufferSerializable;
  if ( !response )
    v8 = NULL;
  v9 = &request->bdStructBufferSerializable;
  if ( !request )
    v9 = NULL;
  started = bdRemoteTaskManager::startStructTask(this->m_remoteTaskManager, &newTask, 0xC1u, 1u, v9, v8, this->m_lobbyService);
  if ( started )
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdObjectStore", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstore.cpp", "bdObjectStore::checkTaskResult", 0x43Du, "Failed to start task: Error %i", started);
  if ( result == (bdReference<bdRemoteTask> *)&newTask )
    goto LABEL_14;
  if ( result->m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result->m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result->m_ptr )
    ((void (__fastcall *)(bdRemoteTask *, __int64))result->m_ptr->~bdReferencable)(result->m_ptr, 1i64);
  m_ptr = newTask.m_ptr;
  result->m_ptr = newTask.m_ptr;
  if ( m_ptr )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
LABEL_14:
    m_ptr = newTask.m_ptr;
  }
  if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 && newTask.m_ptr )
    ((void (__fastcall *)(bdStructBufferTask *, __int64))newTask.m_ptr->~bdReferencable)(newTask.m_ptr, 1i64);
  return result;
}

/*
==============
bdObjectStore::getUserObjectCounts
==============
*/
bdReference<bdRemoteTask> *bdObjectStore::getUserObjectCounts(bdObjectStore *this, bdReference<bdRemoteTask> *result, const bdObjectStoreGetUserObjectCountsRequest *request, bdObjectStoreGetUserObjectCountsResponse *response)
{
  bdStructBufferSerializable *v8; 
  bdStructBufferSerializable *v9; 
  bdLobbyErrorCode started; 
  bdStructBufferTask *m_ptr; 
  bdReference<bdStructBufferTask> newTask; 

  newTask.m_ptr = (bdStructBufferTask *)result;
  bdHandleAssert(this->m_initialized, "m_initialized", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstore.cpp", "bdObjectStore::getUserObjectCounts", 0x3F0u, "init() must be called on ObjectStore before requests can be made");
  newTask.m_ptr = NULL;
  bdObjectStoreRequestBase::setEnvironment(&request->bdObjectStoreRequestBase, this->m_environment);
  v8 = &response->bdStructBufferSerializable;
  if ( !response )
    v8 = NULL;
  v9 = &request->bdStructBufferSerializable;
  if ( !request )
    v9 = NULL;
  started = bdRemoteTaskManager::startStructTask(this->m_remoteTaskManager, &newTask, 0xC1u, 0x12u, v9, v8, this->m_lobbyService);
  if ( started )
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdObjectStore", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstore.cpp", "bdObjectStore::checkTaskResult", 0x43Du, "Failed to start task: Error %i", started);
  m_ptr = newTask.m_ptr;
  result->m_ptr = newTask.m_ptr;
  if ( m_ptr )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
    m_ptr = newTask.m_ptr;
  }
  if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 && newTask.m_ptr )
    ((void (__fastcall *)(bdStructBufferTask *, __int64))newTask.m_ptr->~bdReferencable)(newTask.m_ptr, 1i64);
  return result;
}

/*
==============
bdObjectStore::getUserObjectIfChanged
==============
*/
bdReference<bdRemoteTask> *bdObjectStore::getUserObjectIfChanged(bdObjectStore *this, bdReference<bdRemoteTask> *result, const bdObjectStoreGetUserObjectIfChangedRequest *request, bdObjectStoreGetUserObjectIfChangedResponse *response)
{
  bdStructBufferSerializable *v8; 
  bdStructBufferSerializable *v9; 
  bdLobbyErrorCode started; 
  bdStructBufferTask *m_ptr; 
  bdReference<bdStructBufferTask> newTask; 

  newTask.m_ptr = (bdStructBufferTask *)result;
  bdHandleAssert(this->m_initialized, "isInitialized()", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstore.cpp", "bdObjectStore::getUserObjectIfChanged", 0x27Fu, "init() must be called on ObjectStore before requests can be made");
  newTask.m_ptr = NULL;
  bdObjectStoreRequestBase::setEnvironment(&request->bdObjectStoreRequestBase, this->m_environment);
  v8 = &response->bdStructBufferSerializable;
  if ( !response )
    v8 = NULL;
  v9 = &request->bdStructBufferSerializable;
  if ( !request )
    v9 = NULL;
  started = bdRemoteTaskManager::startStructTask(this->m_remoteTaskManager, &newTask, 0xC1u, 1u, v9, v8, this->m_lobbyService);
  if ( started )
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdObjectStore", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstore.cpp", "bdObjectStore::checkTaskResult", 0x43Du, "Failed to start task: Error %i", started);
  m_ptr = newTask.m_ptr;
  result->m_ptr = newTask.m_ptr;
  if ( m_ptr )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
    m_ptr = newTask.m_ptr;
  }
  if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 && newTask.m_ptr )
    ((void (__fastcall *)(bdStructBufferTask *, __int64))newTask.m_ptr->~bdReferencable)(newTask.m_ptr, 1i64);
  return result;
}

/*
==============
bdObjectStore::getUserObjectMetadata
==============
*/
bdReference<bdRemoteTask> *bdObjectStore::getUserObjectMetadata(bdObjectStore *this, bdReference<bdRemoteTask> *result, const bdObjectStoreGetUserObjectMetadataRequest *request, bdObjectStoreGetUserObjectMetadataResponse *response)
{
  bdStructBufferSerializable *v8; 
  bdStructBufferSerializable *v9; 
  bdLobbyErrorCode started; 
  bdStructBufferTask *m_ptr; 
  bdReference<bdStructBufferTask> newTask; 

  newTask.m_ptr = (bdStructBufferTask *)result;
  bdHandleAssert(this->m_initialized, "isInitialized()", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstore.cpp", "bdObjectStore::getUserObjectMetadata", 0x37Cu, "init() must be called on ObjectStore before requests can be made");
  newTask.m_ptr = NULL;
  bdObjectStoreRequestBase::setEnvironment(&request->bdObjectStoreRequestBase, this->m_environment);
  v8 = &response->bdStructBufferSerializable;
  if ( !response )
    v8 = NULL;
  v9 = &request->bdStructBufferSerializable;
  if ( !request )
    v9 = NULL;
  started = bdRemoteTaskManager::startStructTask(this->m_remoteTaskManager, &newTask, 0xC1u, 5u, v9, v8, this->m_lobbyService);
  if ( started )
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdObjectStore", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstore.cpp", "bdObjectStore::checkTaskResult", 0x43Du, "Failed to start task: Error %i", started);
  m_ptr = newTask.m_ptr;
  result->m_ptr = newTask.m_ptr;
  if ( m_ptr )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
    m_ptr = newTask.m_ptr;
  }
  if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 && newTask.m_ptr )
    ((void (__fastcall *)(bdStructBufferTask *, __int64))newTask.m_ptr->~bdReferencable)(newTask.m_ptr, 1i64);
  return result;
}

/*
==============
bdObjectStore::getUserObjectsMetadataByStatisticRange
==============
*/
bdReference<bdRemoteTask> *bdObjectStore::getUserObjectsMetadataByStatisticRange(bdObjectStore *this, bdReference<bdRemoteTask> *result, const bdObjectStoreGetUserObjectsMetadataByStatisticRangeRequest *request, bdObjectStoreGetUserObjectsMetadataByStatisticRangeResponse *response)
{
  bdStructBufferSerializable *v8; 
  bdStructBufferSerializable *v9; 
  bdLobbyErrorCode started; 
  bdStructBufferTask *m_ptr; 
  bdReference<bdStructBufferTask> newTask; 

  newTask.m_ptr = (bdStructBufferTask *)result;
  bdHandleAssert(this->m_initialized, "m_initialized", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstore.cpp", "bdObjectStore::getUserObjectsMetadataByStatisticRange", 0x416u, "init() must be called on ObjectStore before requests can be made");
  newTask.m_ptr = NULL;
  bdObjectStoreRequestBase::setEnvironment(&request->bdObjectStoreRequestBase, this->m_environment);
  v8 = &response->bdStructBufferSerializable;
  if ( !response )
    v8 = NULL;
  v9 = &request->bdStructBufferSerializable;
  if ( !request )
    v9 = NULL;
  started = bdRemoteTaskManager::startStructTask(this->m_remoteTaskManager, &newTask, 0xC1u, 0x15u, v9, v8, this->m_lobbyService);
  if ( started )
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdObjectStore", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstore.cpp", "bdObjectStore::checkTaskResult", 0x43Du, "Failed to start task: Error %i", started);
  m_ptr = newTask.m_ptr;
  result->m_ptr = newTask.m_ptr;
  if ( m_ptr )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
    m_ptr = newTask.m_ptr;
  }
  if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 && newTask.m_ptr )
    ((void (__fastcall *)(bdStructBufferTask *, __int64))newTask.m_ptr->~bdReferencable)(newTask.m_ptr, 1i64);
  return result;
}

/*
==============
bdObjectStore::getUserObjectsStatistics
==============
*/
bdReference<bdRemoteTask> *bdObjectStore::getUserObjectsStatistics(bdObjectStore *this, bdReference<bdRemoteTask> *result, const bdObjectStoreGetUserObjectsStatisticsRequest *request, bdObjectStoreGetUserObjectsStatisticsResponse *response)
{
  bdStructBufferSerializable *v8; 
  bdStructBufferSerializable *v9; 
  bdLobbyErrorCode started; 
  bdStructBufferTask *m_ptr; 
  bdReference<bdStructBufferTask> newTask; 

  newTask.m_ptr = (bdStructBufferTask *)result;
  bdHandleAssert(this->m_initialized, "m_initialized", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstore.cpp", "bdObjectStore::getUserObjectsStatistics", 0x403u, "init() must be called on ObjectStore before requests can be made");
  newTask.m_ptr = NULL;
  bdObjectStoreRequestBase::setEnvironment(&request->bdObjectStoreRequestBase, this->m_environment);
  v8 = &response->bdStructBufferSerializable;
  if ( !response )
    v8 = NULL;
  v9 = &request->bdStructBufferSerializable;
  if ( !request )
    v9 = NULL;
  started = bdRemoteTaskManager::startStructTask(this->m_remoteTaskManager, &newTask, 0xC1u, 0x14u, v9, v8, this->m_lobbyService);
  if ( started )
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdObjectStore", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstore.cpp", "bdObjectStore::checkTaskResult", 0x43Du, "Failed to start task: Error %i", started);
  m_ptr = newTask.m_ptr;
  result->m_ptr = newTask.m_ptr;
  if ( m_ptr )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
    m_ptr = newTask.m_ptr;
  }
  if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 && newTask.m_ptr )
    ((void (__fastcall *)(bdStructBufferTask *, __int64))newTask.m_ptr->~bdReferencable)(newTask.m_ptr, 1i64);
  return result;
}

/*
==============
bdObjectStore::getUserObjectsVectorized
==============
*/
bdReference<bdRemoteTask> *bdObjectStore::getUserObjectsVectorized(bdObjectStore *this, bdReference<bdRemoteTask> *result, const bdObjectStoreGetUserObjectsVectorizedRequest *request, bdObjectStoreGetUserObjectsVectorizedResponse *response)
{
  bdStructBufferSerializable *v8; 
  bdStructBufferSerializable *v9; 
  bdLobbyErrorCode started; 
  bdStructBufferTask *m_ptr; 
  bdReference<bdStructBufferTask> newTask; 
  bdReference<bdRemoteTask> *v14; 

  v14 = result;
  bdHandleAssert(this->m_initialized, "isInitialized()", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstore.cpp", "bdObjectStore::getUserObjectsVectorized", 0x392u, "init() must be called on ObjectStore before requests can be made");
  bdObjectStoreRequestBase::setEnvironment(&request->bdObjectStoreRequestBase, this->m_environment);
  result->m_ptr = NULL;
  newTask.m_ptr = NULL;
  v8 = &response->bdStructBufferSerializable;
  if ( !response )
    v8 = NULL;
  v9 = &request->bdStructBufferSerializable;
  if ( !request )
    v9 = NULL;
  started = bdRemoteTaskManager::startStructTask(this->m_remoteTaskManager, &newTask, 0xC1u, 6u, v9, v8, this->m_lobbyService);
  if ( started )
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdObjectStore", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstore.cpp", "bdObjectStore::checkTaskResult", 0x43Du, "Failed to start task: Error %i", started);
  if ( result == (bdReference<bdRemoteTask> *)&newTask )
    goto LABEL_14;
  if ( result->m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result->m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result->m_ptr )
    ((void (__fastcall *)(bdRemoteTask *, __int64))result->m_ptr->~bdReferencable)(result->m_ptr, 1i64);
  m_ptr = newTask.m_ptr;
  result->m_ptr = newTask.m_ptr;
  if ( m_ptr )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
LABEL_14:
    m_ptr = newTask.m_ptr;
  }
  if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 && newTask.m_ptr )
    ((void (__fastcall *)(bdStructBufferTask *, __int64))newTask.m_ptr->~bdReferencable)(newTask.m_ptr, 1i64);
  return result;
}

/*
==============
bdObjectStore::getUserSummaryObject
==============
*/
bdReference<bdRemoteTask> *bdObjectStore::getUserSummaryObject(bdObjectStore *this, bdReference<bdRemoteTask> *result, const bdObjectStoreGetUserSummaryObjectRequest *request, bdObjectStoreGetUserSummaryObjectResponse *response)
{
  bdStructBufferSerializable *v8; 
  bdStructBufferSerializable *v9; 
  bdLobbyErrorCode started; 
  bdObjectStoreStreaming *p_m_streaming; 
  bdObjectStoreObject *Object; 
  const bdObjectStoreMetadata *Metadata; 
  const char *AuthorizationHeaderValue; 
  bdObjectStoreObject *v15; 
  unsigned __int64 ContentSize; 
  bdObjectStoreObject *v17; 
  unsigned __int8 *Content; 
  bdObjectStoreObject *v19; 
  bdObjectStoreDownloadInterceptor *DownloadInterceptor; 
  bdReference<bdStructBufferTask> newTask; 

  newTask.m_ptr = NULL;
  bdObjectStoreRequestBase::setEnvironment(&request->bdObjectStoreRequestBase, this->m_environment);
  v8 = &response->bdStructBufferSerializable;
  if ( !response )
    v8 = NULL;
  v9 = &request->bdStructBufferSerializable;
  if ( !request )
    v9 = NULL;
  started = bdRemoteTaskManager::startStructTask(this->m_remoteTaskManager, &newTask, 0xC1u, 0xEu, v9, v8, this->m_lobbyService);
  if ( started )
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdObjectStore", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstore.cpp", "bdObjectStore::checkTaskResult", 0x43Du, "Failed to start task: Error %i", started);
  p_m_streaming = &this->m_streaming;
  bdObjectStoreStreaming::setRemoteTask(p_m_streaming, &newTask);
  Object = bdObjectStoreGetUserSummaryObjectResponse::getObject(response);
  Metadata = bdObjectStoreObject::getMetadata(Object);
  AuthorizationHeaderValue = bdObjectStoreGetUserSummaryObjectResponse::getAuthorizationHeaderValue(response);
  v15 = bdObjectStoreGetUserSummaryObjectResponse::getObject(response);
  ContentSize = bdObjectStoreObject::getContentSize(v15);
  v17 = bdObjectStoreGetUserSummaryObjectResponse::getObject(response);
  Content = bdObjectStoreObject::getContent(v17);
  v19 = bdObjectStoreGetUserSummaryObjectResponse::getObject(response);
  DownloadInterceptor = bdObjectStoreObject::getDownloadInterceptor(v19);
  bdObjectStoreStreaming::initDownload(p_m_streaming, DownloadInterceptor, Content, ContentSize, AuthorizationHeaderValue, Metadata);
  bdObjectStoreStreaming::startDownload(p_m_streaming, result);
  if ( newTask.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&newTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && newTask.m_ptr )
    ((void (__fastcall *)(bdStructBufferTask *, __int64))newTask.m_ptr->~bdReferencable)(newTask.m_ptr, 1i64);
  return result;
}

/*
==============
bdObjectStore::getUserSummaryObjectFromBatch
==============
*/
bdReference<bdRemoteTask> *bdObjectStore::getUserSummaryObjectFromBatch(bdObjectStore *this, bdReference<bdRemoteTask> *result)
{
  bdStructBufferSerializable *m_batchResponse; 
  bdStructBufferSerializable *m_batchRequest; 
  bdObjectStoreGetUserSummaryObjectsResponse *v6; 
  bdObjectStoreGetUserSummaryObjectsRequest *v7; 
  bdObjectStoreObject *ObjectAtIndex; 
  const bdObjectStoreMetadata *metadata; 
  const char *authorizationHeader; 
  bdObjectStoreObject *v11; 
  unsigned __int64 ContentSize; 
  bdObjectStoreObject *v13; 
  unsigned __int8 *Content; 
  bdObjectStoreObject *v15; 
  bdObjectStoreDownloadInterceptor *DownloadInterceptor; 

  m_batchResponse = this->m_batchResponse;
  m_batchRequest = this->m_batchRequest;
  v6 = (bdObjectStoreGetUserSummaryObjectsResponse *)(&m_batchResponse[-1].__vftable + 3);
  if ( !m_batchResponse )
    v6 = NULL;
  v7 = (bdObjectStoreGetUserSummaryObjectsRequest *)&m_batchRequest[-1];
  if ( !m_batchRequest )
    v7 = NULL;
  bdObjectStoreGetUserSummaryObjectsRequest::setObjectIDForRequest(v7, this->m_batchIndex);
  bdObjectStoreGetUserSummaryObjectsResponse::setObjectForResponse(v6, this->m_batchIndex);
  ObjectAtIndex = bdObjectStoreGetUserSummaryObjectsResponse::getObjectAtIndex(v6, this->m_batchIndex);
  metadata = bdObjectStoreObject::getMetadata(ObjectAtIndex);
  authorizationHeader = bdObjectStoreGetUserSummaryObjectsResponse::getAuthorizationHeaderValue(v6);
  v11 = bdObjectStoreGetUserSummaryObjectsResponse::getObjectAtIndex(v6, this->m_batchIndex);
  ContentSize = bdObjectStoreObject::getContentSize(v11);
  v13 = bdObjectStoreGetUserSummaryObjectsResponse::getObjectAtIndex(v6, this->m_batchIndex);
  Content = bdObjectStoreObject::getContent(v13);
  v15 = bdObjectStoreGetUserSummaryObjectsResponse::getObjectAtIndex(v6, this->m_batchIndex);
  DownloadInterceptor = bdObjectStoreObject::getDownloadInterceptor(v15);
  bdObjectStoreStreaming::initDownload(&this->m_streaming, DownloadInterceptor, Content, ContentSize, authorizationHeader, metadata);
  bdObjectStoreStreaming::startDownload(&this->m_streaming, result);
  return result;
}

/*
==============
bdObjectStore::getUserSummaryObjects
==============
*/
bdReference<bdRemoteTask> *bdObjectStore::getUserSummaryObjects(bdObjectStore *this, bdReference<bdRemoteTask> *result, bdObjectStoreGetUserSummaryObjectsRequest *request, bdObjectStoreGetUserSummaryObjectsResponse *response)
{
  unsigned int ObjectListSize; 
  unsigned int ObjectIDsSize; 
  unsigned int v10; 
  unsigned int v11; 
  bdStructBufferSerializable *v12; 
  bdStructBufferSerializable *v13; 
  bdLobbyErrorCode started; 
  bdRemoteTask *m_ptr; 
  __int64 v17; 
  bdReference<bdStructBufferTask> newTask; 

  newTask.m_ptr = (bdStructBufferTask *)result;
  ObjectListSize = bdObjectStoreGetUserSummaryObjectsResponse::getObjectListSize(response);
  ObjectIDsSize = bdObjectStoreGetUserSummaryObjectsRequest::getObjectIDsSize(request);
  v10 = bdObjectStoreGetUserSummaryObjectsRequest::getObjectIDsSize(request);
  v11 = bdObjectStoreGetUserSummaryObjectsResponse::getObjectListSize(response);
  bdHandleAssert(v10 == v11, "request->getObjectIDsSize() == response->getObjectListSize()", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstore.cpp", "bdObjectStore::getUserSummaryObjects", 0x17Eu, "request and response arrays are different sizes. [%d] vs [%d].", ObjectIDsSize, ObjectListSize);
  bdHandleAssert(this->m_batchInProgress == BD_OBJECTSTORE_NO_BATCH, "m_batchInProgress == BD_OBJECTSTORE_NO_BATCH", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstore.cpp", "bdObjectStore::setBatchInProgress", 0x155u, "Batch already in progress, either pump existing task to completion or cancel it");
  this->m_batchInProgress = BD_OBJECTSTORE_SUMMARY_BATCH_DOWNLOAD;
  bdObjectStoreGetUserSummaryObjectsRequest::setEnvironment(request, this->m_environment);
  v12 = &request->bdStructBufferSerializable;
  if ( !request )
    v12 = NULL;
  this->m_batchRequest = v12;
  v13 = &response->bdStructBufferSerializable;
  if ( !response )
    v13 = NULL;
  this->m_batchResponse = v13;
  newTask.m_ptr = NULL;
  started = bdRemoteTaskManager::startStructTask(this->m_remoteTaskManager, &newTask, 0xC1u, 0xFu, v12, v13, this->m_lobbyService);
  if ( started )
  {
    LODWORD(v17) = started;
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdObjectStore", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstore.cpp", "bdObjectStore::checkTaskResult", 0x43Du, "Failed to start task: Error %i", v17);
  }
  bdObjectStoreStreaming::setRemoteTask(&this->m_streaming, &newTask);
  this->m_batchOverallRemoteTaskRef.m_ptr->m_status = BD_PENDING;
  this->m_batchOverallRemoteTaskRef.m_ptr->m_errorCode = BD_NO_ERROR;
  m_ptr = this->m_batchOverallRemoteTaskRef.m_ptr;
  result->m_ptr = m_ptr;
  if ( m_ptr )
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
  if ( newTask.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&newTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && newTask.m_ptr )
    ((void (__fastcall *)(bdStructBufferTask *, __int64))newTask.m_ptr->~bdReferencable)(newTask.m_ptr, 1i64);
  return result;
}

/*
==============
bdObjectStore::getUserVotes
==============
*/
bdReference<bdRemoteTask> *bdObjectStore::getUserVotes(bdObjectStore *this, bdReference<bdRemoteTask> *result, const bdObjectStoreGetUserVotesRequest *request, bdObjectStoreGetUserVotesResponse *response)
{
  bdStructBufferSerializable *v8; 
  bdStructBufferSerializable *v9; 
  bdLobbyErrorCode started; 
  bdStructBufferTask *m_ptr; 
  bdReference<bdStructBufferTask> newTask; 

  newTask.m_ptr = (bdStructBufferTask *)result;
  bdHandleAssert(this->m_initialized, "m_initialized", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstore.cpp", "bdObjectStore::getUserVotes", 0x429u, "init() must be called on ObjectStore before requests can be made");
  newTask.m_ptr = NULL;
  bdObjectStoreRequestBase::setEnvironment(&request->bdObjectStoreRequestBase, this->m_environment);
  v8 = &response->bdStructBufferSerializable;
  if ( !response )
    v8 = NULL;
  v9 = &request->bdStructBufferSerializable;
  if ( !request )
    v9 = NULL;
  started = bdRemoteTaskManager::startStructTask(this->m_remoteTaskManager, &newTask, 0xC1u, 0x16u, v9, v8, this->m_lobbyService);
  if ( started )
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdObjectStore", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstore.cpp", "bdObjectStore::checkTaskResult", 0x43Du, "Failed to start task: Error %i", started);
  m_ptr = newTask.m_ptr;
  result->m_ptr = newTask.m_ptr;
  if ( m_ptr )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
    m_ptr = newTask.m_ptr;
  }
  if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 && newTask.m_ptr )
    ((void (__fastcall *)(bdStructBufferTask *, __int64))newTask.m_ptr->~bdReferencable)(newTask.m_ptr, 1i64);
  return result;
}

/*
==============
bdObjectStore::handleBatchFailure
==============
*/
void bdObjectStore::handleBatchFailure(bdObjectStore *this)
{
  __int32 v2; 
  bdStructBufferSerializable *m_batchResponse; 
  bdLobbyErrorCode m_errorCode; 
  bdObjectStoreGetUserSummaryObjectsResponse *v5; 
  bdObjectStoreErrorWrappedObject *ObjectList; 
  bdObjectStoreErrorWrappedObject *v7; 
  bdStructBufferSerializable *v8; 
  bdObjectStoreGetPublisherObjectsResponse *v9; 
  bdObjectStoreErrorWrappedObject *v10; 
  bdObjectStoreErrorWrappedObject *v11; 
  bdRemoteTask *m_ptr; 

  v2 = this->m_batchInProgress - 1;
  if ( v2 )
  {
    if ( v2 != 1 )
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdObjectStore/bdObjectStore", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstore.cpp", "bdObjectStore::handleBatchFailure", 0x54u, "Unknown Batching type.");
      return;
    }
    m_batchResponse = this->m_batchResponse;
    m_errorCode = BD_NO_ERROR;
    v5 = (bdObjectStoreGetUserSummaryObjectsResponse *)(&m_batchResponse[-1].__vftable + 3);
    if ( !m_batchResponse )
      v5 = NULL;
    ObjectList = bdObjectStoreGetUserSummaryObjectsResponse::getObjectList(v5);
    if ( !bdObjectStoreErrorWrappedObject::hasError(&ObjectList[this->m_batchIndex]) )
    {
      v7 = bdObjectStoreGetUserSummaryObjectsResponse::getObjectList(v5);
LABEL_12:
      v11 = &v7[this->m_batchIndex];
      m_ptr = this->m_batchRemoteTaskRef.m_ptr;
      if ( m_ptr )
        m_errorCode = m_ptr->m_errorCode;
      bdObjectStoreErrorWrappedObject::setError(v11, m_errorCode);
    }
  }
  else
  {
    v8 = this->m_batchResponse;
    m_errorCode = BD_NO_ERROR;
    v9 = (bdObjectStoreGetPublisherObjectsResponse *)(&v8[-1].__vftable + 3);
    if ( !v8 )
      v9 = NULL;
    v10 = bdObjectStoreGetPublisherObjectsResponse::getObjectList(v9);
    if ( !bdObjectStoreErrorWrappedObject::hasError(&v10[this->m_batchIndex]) )
    {
      v7 = bdObjectStoreGetPublisherObjectsResponse::getObjectList(v9);
      goto LABEL_12;
    }
  }
}

/*
==============
bdObjectStore::incrementBatchIndexToNextObject
==============
*/
void bdObjectStore::incrementBatchIndexToNextObject(bdObjectStore *this)
{
  unsigned int BatchTotal; 
  bdStructBufferSerializable *m_batchResponse; 
  bdObjectStoreGetUserSummaryObjectsResponse *v4; 
  bdObjectStoreErrorWrappedObject *ObjectList; 
  bdStructBufferSerializable *v6; 
  bdObjectStoreGetPublisherObjectsResponse *v7; 

  BatchTotal = bdObjectStore::getBatchTotal(this);
  if ( this->m_batchIndex < BatchTotal )
  {
    while ( this->m_batchInProgress != BD_OBJECTSTORE_PUBLISHER_BATCH_DOWNLOAD )
    {
      if ( this->m_batchInProgress == BD_OBJECTSTORE_SUMMARY_BATCH_DOWNLOAD )
      {
        m_batchResponse = this->m_batchResponse;
        v4 = (bdObjectStoreGetUserSummaryObjectsResponse *)(&m_batchResponse[-1].__vftable + 3);
        if ( !m_batchResponse )
          v4 = NULL;
        ObjectList = bdObjectStoreGetUserSummaryObjectsResponse::getObjectList(v4);
        goto LABEL_11;
      }
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdObjectStore/bdObjectStore", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstore.cpp", "bdObjectStore::objectAtCurrentIndexHasError", 0xBAu, "Unknown Batching type.");
LABEL_12:
      if ( ++this->m_batchIndex >= BatchTotal )
        return;
    }
    v6 = this->m_batchResponse;
    v7 = (bdObjectStoreGetPublisherObjectsResponse *)(&v6[-1].__vftable + 3);
    if ( !v6 )
      v7 = NULL;
    ObjectList = bdObjectStoreGetPublisherObjectsResponse::getObjectList(v7);
LABEL_11:
    if ( !bdObjectStoreErrorWrappedObject::hasError(&ObjectList[this->m_batchIndex]) )
      return;
    goto LABEL_12;
  }
}

/*
==============
bdObjectStore::incrementUserObjectStatistic
==============
*/
bdReference<bdRemoteTask> *bdObjectStore::incrementUserObjectStatistic(bdObjectStore *this, bdReference<bdRemoteTask> *result, const bdObjectStoreIncrementUserObjectStatisticRequest *request, bdObjectStoreIncrementUserObjectStatisticResponse *response)
{
  bdStructBufferSerializable *v8; 
  bdStructBufferSerializable *v9; 
  bdLobbyErrorCode started; 
  bdStructBufferTask *m_ptr; 
  bdReference<bdStructBufferTask> newTask; 

  newTask.m_ptr = (bdStructBufferTask *)result;
  bdHandleAssert(this->m_initialized, "m_initialized", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstore.cpp", "bdObjectStore::incrementUserObjectStatistic", 0x3DDu, "init() must be called on ObjectStore before requests can be made");
  newTask.m_ptr = NULL;
  bdObjectStoreRequestBase::setEnvironment(&request->bdObjectStoreRequestBase, this->m_environment);
  v8 = &response->bdStructBufferSerializable;
  if ( !response )
    v8 = NULL;
  v9 = &request->bdStructBufferSerializable;
  if ( !request )
    v9 = NULL;
  started = bdRemoteTaskManager::startStructTask(this->m_remoteTaskManager, &newTask, 0xC1u, 0x13u, v9, v8, this->m_lobbyService);
  if ( started )
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdObjectStore", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstore.cpp", "bdObjectStore::checkTaskResult", 0x43Du, "Failed to start task: Error %i", started);
  m_ptr = newTask.m_ptr;
  result->m_ptr = newTask.m_ptr;
  if ( m_ptr )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
    m_ptr = newTask.m_ptr;
  }
  if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 && newTask.m_ptr )
    ((void (__fastcall *)(bdStructBufferTask *, __int64))newTask.m_ptr->~bdReferencable)(newTask.m_ptr, 1i64);
  return result;
}

/*
==============
bdObjectStore::init
==============
*/
bool bdObjectStore::init(bdObjectStore *this, bdEnvironment environment)
{
  bool result; 

  if ( this->m_initialized )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdObjectStore", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstore.cpp", "bdObjectStore::init", 0x35u, "Error calling ObjectStore init(): object has already been initialized");
    return 0;
  }
  else
  {
    bdHandleAssert((unsigned int)environment <= BD_ENVIRONMENT_PROD, "(environment >= BD_ENVIRONMENT_DEV) && (environment < BD_ENVIRONMENT_MAX)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstore.cpp", "bdObjectStore::init", 0x2Eu, "Invalid Environment %s", environment);
    result = 1;
    this->m_environment = environment;
    this->m_initialized = 1;
  }
  return result;
}

/*
==============
bdObjectStore::isIdle
==============
*/
bool bdObjectStore::isIdle(bdObjectStore *this)
{
  return bdObjectStoreStreaming::isIdle(&this->m_streaming);
}

/*
==============
bdObjectStore::isInitialized
==============
*/
_BOOL8 bdObjectStore::isInitialized(bdObjectStore *this)
{
  return this->m_initialized;
}

/*
==============
bdObjectStore::listPublisherObjectsByCategory
==============
*/
bdReference<bdRemoteTask> *bdObjectStore::listPublisherObjectsByCategory(bdObjectStore *this, bdReference<bdRemoteTask> *result, const bdObjectStoreListPublisherObjectsByCategoryRequest *request, bdObjectStoreListPublisherObjectsByCategoryResponse *response)
{
  bdStructBufferSerializable *v8; 
  bdStructBufferSerializable *v9; 
  bdLobbyErrorCode started; 
  bdStructBufferTask *m_ptr; 
  bdReference<bdStructBufferTask> newTask; 
  bdReference<bdRemoteTask> *v14; 

  v14 = result;
  bdHandleAssert(this->m_initialized, "isInitialized()", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstore.cpp", "bdObjectStore::listPublisherObjectsByCategory", 0x24Bu, "init() must be called on ObjectStore before requests can be made");
  bdObjectStoreRequestBase::setEnvironment(&request->bdObjectStorePaginatedRequestBase, this->m_environment);
  result->m_ptr = NULL;
  newTask.m_ptr = NULL;
  v8 = &response->bdStructBufferSerializable;
  if ( !response )
    v8 = NULL;
  v9 = &request->bdStructBufferSerializable;
  if ( !request )
    v9 = NULL;
  started = bdRemoteTaskManager::startStructTask(this->m_remoteTaskManager, &newTask, 0xC1u, 9u, v9, v8, this->m_lobbyService);
  if ( started )
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdObjectStore", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstore.cpp", "bdObjectStore::checkTaskResult", 0x43Du, "Failed to start task: Error %i", started);
  if ( result == (bdReference<bdRemoteTask> *)&newTask )
    goto LABEL_14;
  if ( result->m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result->m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result->m_ptr )
    ((void (__fastcall *)(bdRemoteTask *, __int64))result->m_ptr->~bdReferencable)(result->m_ptr, 1i64);
  m_ptr = newTask.m_ptr;
  result->m_ptr = newTask.m_ptr;
  if ( m_ptr )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
LABEL_14:
    m_ptr = newTask.m_ptr;
  }
  if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 && newTask.m_ptr )
    ((void (__fastcall *)(bdStructBufferTask *, __int64))newTask.m_ptr->~bdReferencable)(newTask.m_ptr, 1i64);
  return result;
}

/*
==============
bdObjectStore::listUserObjects
==============
*/
bdReference<bdRemoteTask> *bdObjectStore::listUserObjects(bdObjectStore *this, bdReference<bdRemoteTask> *result, const bdObjectStoreListUserObjectsRequest *request, bdObjectStoreListUserObjectsResponse *response)
{
  bdStructBufferSerializable *v8; 
  bdStructBufferSerializable *v9; 
  bdLobbyErrorCode started; 
  bdStructBufferTask *m_ptr; 
  bdReference<bdStructBufferTask> newTask; 
  bdReference<bdRemoteTask> *v14; 

  v14 = result;
  bdHandleAssert(this->m_initialized, "isInitialized()", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstore.cpp", "bdObjectStore::listUserObjects", 0x340u, "init() must be called on ObjectStore before requests can be made");
  bdObjectStoreRequestBase::setEnvironment(&request->bdObjectStorePaginatedRequestBase, this->m_environment);
  result->m_ptr = NULL;
  newTask.m_ptr = NULL;
  v8 = &response->bdStructBufferSerializable;
  if ( !response )
    v8 = NULL;
  v9 = &request->bdStructBufferSerializable;
  if ( !request )
    v9 = NULL;
  started = bdRemoteTaskManager::startStructTask(this->m_remoteTaskManager, &newTask, 0xC1u, 3u, v9, v8, this->m_lobbyService);
  if ( started )
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdObjectStore", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstore.cpp", "bdObjectStore::checkTaskResult", 0x43Du, "Failed to start task: Error %i", started);
  if ( result == (bdReference<bdRemoteTask> *)&newTask )
    goto LABEL_14;
  if ( result->m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result->m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result->m_ptr )
    ((void (__fastcall *)(bdRemoteTask *, __int64))result->m_ptr->~bdReferencable)(result->m_ptr, 1i64);
  m_ptr = newTask.m_ptr;
  result->m_ptr = newTask.m_ptr;
  if ( m_ptr )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
LABEL_14:
    m_ptr = newTask.m_ptr;
  }
  if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 && newTask.m_ptr )
    ((void (__fastcall *)(bdStructBufferTask *, __int64))newTask.m_ptr->~bdReferencable)(newTask.m_ptr, 1i64);
  return result;
}

/*
==============
bdObjectStore::listUserObjectsByCategory
==============
*/
bdReference<bdRemoteTask> *bdObjectStore::listUserObjectsByCategory(bdObjectStore *this, bdReference<bdRemoteTask> *result, const bdObjectStoreListUserObjectsByCategoryRequest *request, bdObjectStoreListUserObjectsByCategoryResponse *response)
{
  bdStructBufferSerializable *v8; 
  bdStructBufferSerializable *v9; 
  bdLobbyErrorCode started; 
  bdStructBufferTask *m_ptr; 
  bdReference<bdStructBufferTask> newTask; 

  newTask.m_ptr = (bdStructBufferTask *)result;
  bdHandleAssert(this->m_initialized, "isInitialized()", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstore.cpp", "bdObjectStore::listUserObjectsByCategory", 0x269u, "init() must be called on ObjectStore before requests can be made");
  newTask.m_ptr = NULL;
  bdObjectStoreRequestBase::setEnvironment(&request->bdObjectStorePaginatedRequestBase, this->m_environment);
  v8 = &response->bdStructBufferSerializable;
  if ( !response )
    v8 = NULL;
  v9 = &request->bdStructBufferSerializable;
  if ( !request )
    v9 = NULL;
  started = bdRemoteTaskManager::startStructTask(this->m_remoteTaskManager, &newTask, 0xC1u, 0xAu, v9, v8, this->m_lobbyService);
  if ( started )
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdObjectStore", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstore.cpp", "bdObjectStore::checkTaskResult", 0x43Du, "Failed to start task: Error %i", started);
  m_ptr = newTask.m_ptr;
  result->m_ptr = newTask.m_ptr;
  if ( m_ptr )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
    m_ptr = newTask.m_ptr;
  }
  if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 && newTask.m_ptr )
    ((void (__fastcall *)(bdStructBufferTask *, __int64))newTask.m_ptr->~bdReferencable)(newTask.m_ptr, 1i64);
  return result;
}

/*
==============
bdObjectStore::objectAtCurrentIndexHasError
==============
*/
bool bdObjectStore::objectAtCurrentIndexHasError(bdObjectStore *this)
{
  bdStructBufferSerializable *v3; 
  bdObjectStoreGetUserSummaryObjectsResponse *v4; 
  bdObjectStoreErrorWrappedObject *ObjectList; 
  bdStructBufferSerializable *m_batchResponse; 
  bdObjectStoreGetPublisherObjectsResponse *v7; 

  if ( this->m_batchInProgress == BD_OBJECTSTORE_PUBLISHER_BATCH_DOWNLOAD )
  {
    m_batchResponse = this->m_batchResponse;
    v7 = (bdObjectStoreGetPublisherObjectsResponse *)(&m_batchResponse[-1].__vftable + 3);
    if ( !m_batchResponse )
      v7 = NULL;
    ObjectList = bdObjectStoreGetPublisherObjectsResponse::getObjectList(v7);
  }
  else
  {
    if ( this->m_batchInProgress != BD_OBJECTSTORE_SUMMARY_BATCH_DOWNLOAD )
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdObjectStore/bdObjectStore", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstore.cpp", "bdObjectStore::objectAtCurrentIndexHasError", 0xBAu, "Unknown Batching type.");
      return 1;
    }
    v3 = this->m_batchResponse;
    v4 = (bdObjectStoreGetUserSummaryObjectsResponse *)(&v3[-1].__vftable + 3);
    if ( !v3 )
      v4 = NULL;
    ObjectList = bdObjectStoreGetUserSummaryObjectsResponse::getObjectList(v4);
  }
  return bdObjectStoreErrorWrappedObject::hasError(&ObjectList[this->m_batchIndex]);
}

/*
==============
bdObjectStore::pump
==============
*/
void bdObjectStore::pump(bdObjectStore *this)
{
  bdObjectStoreStreaming::bdStatus State; 
  bdObjectStoreStreaming::bdStatus v3; 
  bool v4; 
  bdLobbyErrorCode m_errorCode; 
  bdRemoteTask *m_ptr; 
  bdStructBufferSerializable *v7; 
  bdLobbyErrorCode v8; 
  bdObjectStoreGetUserSummaryObjectsResponse *v9; 
  bdObjectStoreErrorWrappedObject *v10; 
  bdObjectStoreErrorWrappedObject *v11; 
  bdRemoteTask *v12; 
  bdStructBufferSerializable *m_batchResponse; 
  bdObjectStoreGetPublisherObjectsResponse *v14; 
  bdObjectStoreErrorWrappedObject *ObjectList; 
  bdRemoteTask *v16; 

  bdObjectStoreStreaming::pump(&this->m_streaming);
  State = bdObjectStoreStreaming::getState(&this->m_streaming);
  v3 = State;
  v4 = ((State - 5) & 0xFFFFFFFA) == 0 && State != 10;
  if ( this->m_batchInProgress && bdObjectStoreStreaming::getRemoteTaskStatus(&this->m_streaming) != BD_PENDING )
  {
    if ( v3 == 9 )
    {
      m_errorCode = BD_NO_ERROR;
      this->m_batchOverallRemoteTaskRef.m_ptr->m_status = BD_FAILED;
      m_ptr = this->m_batchRemoteTaskRef.m_ptr;
      if ( m_ptr )
        m_errorCode = m_ptr->m_errorCode;
      this->m_batchOverallRemoteTaskRef.m_ptr->m_errorCode = m_errorCode;
      this->m_batchRequest = NULL;
      this->m_batchResponse = NULL;
      *(_QWORD *)&this->m_batchIndex = 0i64;
      this->m_batchDownloadStarted = 0;
      bdObjectStoreStreaming::reset(&this->m_streaming);
      return;
    }
    if ( !this->m_batchDownloadStarted )
    {
      this->m_batchDownloadStarted = 1;
LABEL_33:
      bdObjectStore::downloadBatchObject(this);
      return;
    }
    if ( !v4 )
      return;
    if ( v3 != BD_MAX_STATUS )
    {
      if ( v3 == BD_CANCELLED )
        bdObjectStore::updateBatchDownloadStatus(this, BD_DOWNLOAD_DONE);
      goto LABEL_32;
    }
    bdObjectStore::updateBatchDownloadStatus(this, BD_DOWNLOAD_FAILED);
    if ( this->m_batchInProgress == BD_OBJECTSTORE_PUBLISHER_BATCH_DOWNLOAD )
    {
      m_batchResponse = this->m_batchResponse;
      v8 = BD_NO_ERROR;
      v14 = (bdObjectStoreGetPublisherObjectsResponse *)(&m_batchResponse[-1].__vftable + 3);
      if ( !m_batchResponse )
        v14 = NULL;
      ObjectList = bdObjectStoreGetPublisherObjectsResponse::getObjectList(v14);
      if ( bdObjectStoreErrorWrappedObject::hasError(&ObjectList[this->m_batchIndex]) )
        goto LABEL_32;
      v11 = &bdObjectStoreGetPublisherObjectsResponse::getObjectList(v14)[this->m_batchIndex];
      v16 = this->m_batchRemoteTaskRef.m_ptr;
      if ( v16 )
        v8 = v16->m_errorCode;
    }
    else
    {
      if ( this->m_batchInProgress != BD_OBJECTSTORE_SUMMARY_BATCH_DOWNLOAD )
      {
        bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdObjectStore/bdObjectStore", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstore.cpp", "bdObjectStore::handleBatchFailure", 0x54u, "Unknown Batching type.");
LABEL_32:
        ++this->m_batchIndex;
        goto LABEL_33;
      }
      v7 = this->m_batchResponse;
      v8 = BD_NO_ERROR;
      v9 = (bdObjectStoreGetUserSummaryObjectsResponse *)(&v7[-1].__vftable + 3);
      if ( !v7 )
        v9 = NULL;
      v10 = bdObjectStoreGetUserSummaryObjectsResponse::getObjectList(v9);
      if ( bdObjectStoreErrorWrappedObject::hasError(&v10[this->m_batchIndex]) )
        goto LABEL_32;
      v11 = &bdObjectStoreGetUserSummaryObjectsResponse::getObjectList(v9)[this->m_batchIndex];
      v12 = this->m_batchRemoteTaskRef.m_ptr;
      if ( v12 )
        v8 = v12->m_errorCode;
    }
    bdObjectStoreErrorWrappedObject::setError(v11, v8);
    goto LABEL_32;
  }
}

/*
==============
bdObjectStore::resetAfterBatch
==============
*/
void bdObjectStore::resetAfterBatch(bdObjectStore *this)
{
  this->m_batchRequest = NULL;
  this->m_batchResponse = NULL;
  *(_QWORD *)&this->m_batchIndex = 0i64;
  this->m_batchDownloadStarted = 0;
  bdObjectStoreStreaming::reset(&this->m_streaming);
}

/*
==============
bdObjectStore::searchUsersObjectsByTags
==============
*/
bdReference<bdRemoteTask> *bdObjectStore::searchUsersObjectsByTags(bdObjectStore *this, bdReference<bdRemoteTask> *result, const bdObjectStoreSearchUsersObjectsByTagsRequest *request, bdObjectStoreSearchUsersObjectsByTagsResponse *response)
{
  bdStructBufferSerializable *v8; 
  bdStructBufferSerializable *v9; 
  bdLobbyErrorCode started; 
  bdStructBufferTask *m_ptr; 
  bdReference<bdStructBufferTask> newTask; 

  newTask.m_ptr = (bdStructBufferTask *)result;
  bdHandleAssert(this->m_initialized, "isInitialized()", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstore.cpp", "bdObjectStore::searchUsersObjectsByTags", 0x3CAu, "init() must be called on ObjectStore before requests can be made");
  newTask.m_ptr = NULL;
  bdObjectStoreRequestBase::setEnvironment(&request->bdObjectStorePaginatedRequestBase, this->m_environment);
  v8 = &response->bdStructBufferSerializable;
  if ( !response )
    v8 = NULL;
  v9 = &request->bdStructBufferSerializable;
  if ( !request )
    v9 = NULL;
  started = bdRemoteTaskManager::startStructTask(this->m_remoteTaskManager, &newTask, 0xC1u, 0x11u, v9, v8, this->m_lobbyService);
  if ( started )
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdObjectStore", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstore.cpp", "bdObjectStore::checkTaskResult", 0x43Du, "Failed to start task: Error %i", started);
  m_ptr = newTask.m_ptr;
  result->m_ptr = newTask.m_ptr;
  if ( m_ptr )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
    m_ptr = newTask.m_ptr;
  }
  if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 && newTask.m_ptr )
    ((void (__fastcall *)(bdStructBufferTask *, __int64))newTask.m_ptr->~bdReferencable)(newTask.m_ptr, 1i64);
  return result;
}

/*
==============
bdObjectStore::setBatchInProgress
==============
*/
void bdObjectStore::setBatchInProgress(bdObjectStore *this, bdObjectStore::bdObjectStoreBatchInProgress batchInProgress)
{
  bdHandleAssert(this->m_batchInProgress == BD_OBJECTSTORE_NO_BATCH, "m_batchInProgress == BD_OBJECTSTORE_NO_BATCH", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstore.cpp", "bdObjectStore::setBatchInProgress", 0x155u, "Batch already in progress, either pump existing task to completion or cancel it");
  this->m_batchInProgress = batchInProgress;
}

/*
==============
bdObjectStore::updateBatchDownloadStatus
==============
*/
void bdObjectStore::updateBatchDownloadStatus(bdObjectStore *this, bdObjectStoreErrorWrappedObject::bdObjectStoreDownloadStatus downloadStatus)
{
  bdStructBufferSerializable *v4; 
  bdObjectStoreGetUserSummaryObjectsResponse *v5; 
  bdObjectStoreErrorWrappedObject *ObjectList; 
  bdStructBufferSerializable *m_batchResponse; 
  bdObjectStoreGetPublisherObjectsResponse *v8; 

  if ( this->m_batchInProgress == BD_OBJECTSTORE_PUBLISHER_BATCH_DOWNLOAD )
  {
    m_batchResponse = this->m_batchResponse;
    v8 = (bdObjectStoreGetPublisherObjectsResponse *)(&m_batchResponse[-1].__vftable + 3);
    if ( !m_batchResponse )
      v8 = NULL;
    ObjectList = bdObjectStoreGetPublisherObjectsResponse::getObjectList(v8);
  }
  else
  {
    if ( this->m_batchInProgress != BD_OBJECTSTORE_SUMMARY_BATCH_DOWNLOAD )
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdObjectStore/bdObjectStore", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstore.cpp", "bdObjectStore::updateBatchDownloadStatus", 0x8Cu, "Unknown Batching type.");
      return;
    }
    v4 = this->m_batchResponse;
    v5 = (bdObjectStoreGetUserSummaryObjectsResponse *)(&v4[-1].__vftable + 3);
    if ( !v4 )
      v5 = NULL;
    ObjectList = bdObjectStoreGetUserSummaryObjectsResponse::getObjectList(v5);
  }
  bdObjectStoreErrorWrappedObject::setDownloadStatus(&ObjectList[this->m_batchIndex], downloadStatus);
}

/*
==============
bdObjectStore::uploadUserObject
==============
*/
bdReference<bdRemoteTask> *bdObjectStore::uploadUserObject(bdObjectStore *this, bdReference<bdRemoteTask> *result, const bdObjectStoreUploadLargeUserObjectRequest *request, bdObjectStoreUploadLargeUserObjectResponse *response)
{
  bdStructBufferSerializable *v8; 
  bdObjectStoreCompleteUploadSessionRequest *CompleteRequest; 
  bdObjectStoreObject *Object; 
  const bdObjectStoreMetadata *Metadata; 
  bdObjectStoreObject *v12; 
  unsigned __int64 ContentSize; 
  const char *Context; 
  bdStructBufferSerializable *v15; 
  bdStructBufferSerializable *v16; 
  bdLobbyErrorCode started; 
  bdObjectStoreStreaming *p_m_streaming; 
  bdObjectStoreCompleteUploadSessionResponse *CompleteResponse; 
  bdStructBufferSerializable *v20; 
  bdObjectStoreCompleteUploadSessionRequest *v21; 
  bdObjectStoreObject *v22; 
  unsigned __int64 v23; 
  bdObjectStoreObject *v24; 
  const unsigned __int8 *Content; 
  const char *UploadURL; 
  const char *AuthorizationHeaderValue; 
  bdReference<bdStructBufferTask> newTask; 
  bdObjectStoreUploadLargeUserObjectRequest *v30; 

  v30 = (bdObjectStoreUploadLargeUserObjectRequest *)request;
  v8 = NULL;
  newTask.m_ptr = NULL;
  bdObjectStoreRequestBase::setEnvironment(&request->bdObjectStoreRequestBase, this->m_environment);
  CompleteRequest = bdObjectStoreUploadLargeUserObjectResponse::getCompleteRequest(response);
  bdObjectStoreRequestBase::setEnvironment(CompleteRequest, this->m_environment);
  Object = (bdObjectStoreObject *)bdObjectStoreUploadLargeUserObjectRequest::getObject((bdObjectStoreUploadLargeUserObjectRequest *)request);
  Metadata = bdObjectStoreObject::getMetadata(Object);
  v12 = (bdObjectStoreObject *)bdObjectStoreUploadLargeUserObjectRequest::getObject((bdObjectStoreUploadLargeUserObjectRequest *)request);
  ContentSize = bdObjectStoreObject::getContentSize(v12);
  Context = bdObjectStoreUploadLargeUserObjectRequest::getContext((bdObjectStoreUploadLargeUserObjectRequest *)request);
  bdObjectStoreUploadLargeUserObjectResponse::setRequestData(response, Context, ContentSize, Metadata);
  v15 = &response->bdStructBufferSerializable;
  if ( !response )
    v15 = NULL;
  v16 = &request->bdStructBufferSerializable;
  if ( !request )
    v16 = NULL;
  started = bdRemoteTaskManager::startStructTask(this->m_remoteTaskManager, &newTask, 0xC1u, 0xBu, v16, v15, this->m_lobbyService);
  if ( started )
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdObjectStore", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstore.cpp", "bdObjectStore::checkTaskResult", 0x43Du, "Failed to start task: Error %i", started);
  p_m_streaming = &this->m_streaming;
  bdObjectStoreStreaming::setRemoteTask(p_m_streaming, &newTask);
  CompleteResponse = bdObjectStoreUploadLargeUserObjectResponse::getCompleteResponse(response);
  v20 = &CompleteResponse->bdStructBufferSerializable;
  if ( !CompleteResponse )
    v20 = NULL;
  v21 = bdObjectStoreUploadLargeUserObjectResponse::getCompleteRequest(response);
  if ( v21 )
    v8 = &v21->bdStructBufferSerializable;
  v22 = (bdObjectStoreObject *)bdObjectStoreUploadLargeUserObjectRequest::getObject((bdObjectStoreUploadLargeUserObjectRequest *)request);
  v23 = bdObjectStoreObject::getContentSize(v22);
  v24 = (bdObjectStoreObject *)bdObjectStoreUploadLargeUserObjectRequest::getObject(v30);
  Content = bdObjectStoreObject::getContent(v24);
  UploadURL = bdObjectStoreUploadLargeUserObjectResponse::getUploadURL(response);
  AuthorizationHeaderValue = bdObjectStoreUploadLargeUserObjectResponse::getAuthorizationHeaderValue(response);
  bdObjectStoreStreaming::initUpload(p_m_streaming, AuthorizationHeaderValue, UploadURL, Content, v23, v8, v20);
  bdObjectStoreStreaming::startUpload(p_m_streaming, result);
  if ( newTask.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&newTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && newTask.m_ptr )
    ((void (__fastcall *)(bdStructBufferTask *, __int64))newTask.m_ptr->~bdReferencable)(newTask.m_ptr, 1i64);
  return result;
}

/*
==============
bdObjectStore::uploadUserObject
==============
*/
bdReference<bdRemoteTask> *bdObjectStore::uploadUserObject(bdObjectStore *this, bdReference<bdRemoteTask> *result, const bdObjectStoreUploadUserObjectRequest *request, bdObjectStoreUploadUserObjectResponse *response)
{
  bdStructBufferSerializable *v8; 
  bdStructBufferSerializable *v9; 
  bdLobbyErrorCode started; 
  bdStructBufferTask *m_ptr; 
  bdReference<bdStructBufferTask> newTask; 
  bdReference<bdRemoteTask> *v14; 

  v14 = result;
  bdHandleAssert(this->m_initialized, "isInitialized()", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstore.cpp", "bdObjectStore::uploadUserObject", 0x323u, "init() must be called on ObjectStore before requests can be made");
  bdObjectStoreRequestBase::setEnvironment(&request->bdObjectStoreRequestBase, this->m_environment);
  result->m_ptr = NULL;
  newTask.m_ptr = NULL;
  v8 = &response->bdStructBufferSerializable;
  if ( !response )
    v8 = NULL;
  v9 = &request->bdStructBufferSerializable;
  if ( !request )
    v9 = NULL;
  started = bdRemoteTaskManager::startStructTask(this->m_remoteTaskManager, &newTask, 0xC1u, 2u, v9, v8, this->m_lobbyService);
  if ( started )
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdObjectStore", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstore.cpp", "bdObjectStore::checkTaskResult", 0x43Du, "Failed to start task: Error %i", started);
  if ( result == (bdReference<bdRemoteTask> *)&newTask )
    goto LABEL_14;
  if ( result->m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result->m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result->m_ptr )
    ((void (__fastcall *)(bdRemoteTask *, __int64))result->m_ptr->~bdReferencable)(result->m_ptr, 1i64);
  m_ptr = newTask.m_ptr;
  result->m_ptr = newTask.m_ptr;
  if ( m_ptr )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
LABEL_14:
    m_ptr = newTask.m_ptr;
  }
  if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 && newTask.m_ptr )
    ((void (__fastcall *)(bdStructBufferTask *, __int64))newTask.m_ptr->~bdReferencable)(newTask.m_ptr, 1i64);
  return result;
}

/*
==============
bdObjectStore::uploadUserObjectWithUserSummaryObject
==============
*/
bdReference<bdRemoteTask> *bdObjectStore::uploadUserObjectWithUserSummaryObject(bdObjectStore *this, bdReference<bdRemoteTask> *result, const bdObjectStoreUploadMultipleLargeObjectsRequest *request, bdObjectStoreUploadMultipleLargeObjectsResponse *response)
{
  bdStructBufferSerializable *v8; 
  bool v9; 
  bdObjectStoreCompleteUploadSessionsRequest *CompleteRequest; 
  bdObjectStoreCompleteUploadSessionsResponse *CompleteResponse; 
  unsigned int ObjectSize; 
  const bdObjectStoreObject *v13; 
  const char *Context; 
  unsigned int v15; 
  bdStructBufferSerializable *v16; 
  bdStructBufferSerializable *v17; 
  bdLobbyErrorCode started; 
  bdStructBufferSerializable *v19; 
  const char *AuthorizationHeaderValue; 
  bdObjectStoreObject *Objects; 
  bdObjectStoreMetadata *Metadata; 
  bdObjectStoreObjectID *ObjectID; 
  const char *ObjectName; 
  bdObjectStoreMetadata *v26; 
  bdObjectStoreObjectID *v27; 
  const char *v28; 
  bdObjectStoreMetadata *v29; 
  bdObjectStoreObjectID *v30; 
  const char *Owner; 
  bdObjectStoreMetadata *v32; 
  bdObjectStoreObjectID *v33; 
  const char *v34; 
  bdObjectStoreMetadata *v35; 
  bdObjectStoreObjectID *v36; 
  bdObjectStoreMetadata *v37; 
  bdObjectStoreObjectID *v38; 
  bdReference<bdStructBufferTask> newTask; 
  bdObjectStoreUploadMultipleLargeObjectsResponse *v40; 

  v40 = response;
  v8 = NULL;
  newTask.m_ptr = NULL;
  bdObjectStoreRequestBase::setEnvironment(&request->bdObjectStoreRequestBase, this->m_environment);
  if ( bdObjectStoreUploadMultipleLargeObjectsRequest::getObjectSize((bdObjectStoreUploadMultipleLargeObjectsRequest *)request) != 2 )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdObjectStore/bdObjectStore", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstore.cpp", "bdObjectStore::validateUploadUserObjectWithUserSummaryObjectRequest", 0x2B6u, "2 objects should be passed to this task. A user and a summary object.");
LABEL_3:
    v9 = 0;
    goto LABEL_4;
  }
  Objects = (bdObjectStoreObject *)bdObjectStoreUploadMultipleLargeObjectsRequest::getObjects((bdObjectStoreUploadMultipleLargeObjectsRequest *)request);
  Metadata = (bdObjectStoreMetadata *)bdObjectStoreObject::getMetadata(Objects + 1);
  ObjectID = (bdObjectStoreObjectID *)bdObjectStoreMetadata::getObjectID(Metadata);
  ObjectName = bdObjectStoreObjectID::getObjectName(ObjectID);
  v26 = (bdObjectStoreMetadata *)bdObjectStoreObject::getMetadata(Objects);
  v27 = (bdObjectStoreObjectID *)bdObjectStoreMetadata::getObjectID(v26);
  v28 = bdObjectStoreObjectID::getObjectName(v27);
  if ( strncmp(v28, ObjectName, 0x41ui64) )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdObjectStore/bdObjectStore", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstore.cpp", "bdObjectStore::validateUploadUserObjectWithUserSummaryObjectRequest", 0x2C2u, "Names differ between the 2 objects");
    goto LABEL_3;
  }
  v29 = (bdObjectStoreMetadata *)bdObjectStoreObject::getMetadata(Objects + 1);
  v30 = (bdObjectStoreObjectID *)bdObjectStoreMetadata::getObjectID(v29);
  Owner = bdObjectStoreObjectID::getOwner(v30);
  v32 = (bdObjectStoreMetadata *)bdObjectStoreObject::getMetadata(Objects);
  v33 = (bdObjectStoreObjectID *)bdObjectStoreMetadata::getObjectID(v32);
  v34 = bdObjectStoreObjectID::getOwner(v33);
  if ( strncmp(v34, Owner, 0x1Eui64) )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdObjectStore/bdObjectStore", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstore.cpp", "bdObjectStore::validateUploadUserObjectWithUserSummaryObjectRequest", 0x2CAu, "Owners differ between the 2 objects");
    goto LABEL_3;
  }
  v35 = (bdObjectStoreMetadata *)bdObjectStoreObject::getMetadata(Objects);
  v36 = (bdObjectStoreObjectID *)bdObjectStoreMetadata::getObjectID(v35);
  if ( bdObjectStoreObjectID::getOwnerType(v36) )
    goto LABEL_3;
  v37 = (bdObjectStoreMetadata *)bdObjectStoreObject::getMetadata(Objects + 1);
  v38 = (bdObjectStoreObjectID *)bdObjectStoreMetadata::getObjectID(v37);
  if ( bdObjectStoreObjectID::getOwnerType(v38) != USER_SUMMARY_OWNER_TYPE )
    goto LABEL_3;
  v9 = 1;
LABEL_4:
  bdHandleAssert(v9, "validateUploadUserObjectWithUserSummaryObjectRequest(request)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstore.cpp", "bdObjectStore::uploadUserObjectWithUserSummaryObject", 0x2DFu, "Request is invalid for uploadUserObjectWithUserSummaryObject");
  CompleteRequest = bdObjectStoreUploadMultipleLargeObjectsResponse::getCompleteRequest(response);
  CompleteResponse = bdObjectStoreUploadMultipleLargeObjectsResponse::getCompleteResponse(response);
  bdObjectStoreRequestBase::setEnvironment(CompleteRequest, this->m_environment);
  ObjectSize = bdObjectStoreUploadMultipleLargeObjectsRequest::getObjectSize((bdObjectStoreUploadMultipleLargeObjectsRequest *)request);
  v13 = bdObjectStoreUploadMultipleLargeObjectsRequest::getObjects((bdObjectStoreUploadMultipleLargeObjectsRequest *)request);
  Context = bdObjectStoreUploadMultipleLargeObjectsRequest::getContext((bdObjectStoreUploadMultipleLargeObjectsRequest *)request);
  bdObjectStoreCompleteUploadSessionsRequest::init(CompleteRequest, Context, v13, ObjectSize);
  v15 = bdObjectStoreUploadMultipleLargeObjectsRequest::getObjectSize((bdObjectStoreUploadMultipleLargeObjectsRequest *)request);
  bdObjectStoreCompleteUploadSessionsResponse::init(CompleteResponse, v15);
  v16 = &v40->bdStructBufferSerializable;
  if ( !v40 )
    v16 = NULL;
  v17 = &request->bdStructBufferSerializable;
  if ( !request )
    v17 = NULL;
  started = bdRemoteTaskManager::startStructTask(this->m_remoteTaskManager, &newTask, 0xC1u, 0x17u, v17, v16, this->m_lobbyService);
  if ( started )
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdObjectStore", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstore.cpp", "bdObjectStore::checkTaskResult", 0x43Du, "Failed to start task: Error %i", started);
  bdObjectStoreStreaming::setRemoteTask(&this->m_streaming, &newTask);
  v19 = &CompleteResponse->bdStructBufferSerializable;
  if ( !CompleteResponse )
    v19 = NULL;
  if ( CompleteRequest )
    v8 = &CompleteRequest->bdStructBufferSerializable;
  AuthorizationHeaderValue = bdObjectStoreCompleteUploadSessionsRequest::getAuthorizationHeaderValue(CompleteRequest);
  bdObjectStoreStreaming::initMultipleUpload(&this->m_streaming, AuthorizationHeaderValue, v8, v19);
  bdObjectStoreStreaming::startMultipleUpload(&this->m_streaming, result);
  if ( newTask.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&newTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && newTask.m_ptr )
    ((void (__fastcall *)(bdStructBufferTask *, __int64))newTask.m_ptr->~bdReferencable)(newTask.m_ptr, 1i64);
  return result;
}

/*
==============
bdObjectStore::uploadUserObjectsVectorized
==============
*/
bdReference<bdRemoteTask> *bdObjectStore::uploadUserObjectsVectorized(bdObjectStore *this, bdReference<bdRemoteTask> *result, const bdObjectStoreUploadUserObjectsVectorizedRequest *request, bdObjectStoreUploadUserObjectsVectorizedResponse *response)
{
  bdStructBufferSerializable *v8; 
  bdStructBufferSerializable *v9; 
  bdLobbyErrorCode started; 
  bdStructBufferTask *m_ptr; 
  bdReference<bdStructBufferTask> newTask; 
  bdReference<bdRemoteTask> *v14; 

  v14 = result;
  bdHandleAssert(this->m_initialized, "isInitialized()", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstore.cpp", "bdObjectStore::uploadUserObjectsVectorized", 0x3AEu, "init() must be called on ObjectStore before requests can be made");
  bdObjectStoreRequestBase::setEnvironment(&request->bdObjectStoreRequestBase, this->m_environment);
  result->m_ptr = NULL;
  newTask.m_ptr = NULL;
  v8 = &response->bdStructBufferSerializable;
  if ( !response )
    v8 = NULL;
  v9 = &request->bdStructBufferSerializable;
  if ( !request )
    v9 = NULL;
  started = bdRemoteTaskManager::startStructTask(this->m_remoteTaskManager, &newTask, 0xC1u, 7u, v9, v8, this->m_lobbyService);
  if ( started )
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdObjectStore", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstore.cpp", "bdObjectStore::checkTaskResult", 0x43Du, "Failed to start task: Error %i", started);
  if ( result == (bdReference<bdRemoteTask> *)&newTask )
    goto LABEL_14;
  if ( result->m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result->m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result->m_ptr )
    ((void (__fastcall *)(bdRemoteTask *, __int64))result->m_ptr->~bdReferencable)(result->m_ptr, 1i64);
  m_ptr = newTask.m_ptr;
  result->m_ptr = newTask.m_ptr;
  if ( m_ptr )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
LABEL_14:
    m_ptr = newTask.m_ptr;
  }
  if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 && newTask.m_ptr )
    ((void (__fastcall *)(bdStructBufferTask *, __int64))newTask.m_ptr->~bdReferencable)(newTask.m_ptr, 1i64);
  return result;
}

/*
==============
bdObjectStore::uploadUserSummaryObject
==============
*/
bdReference<bdRemoteTask> *bdObjectStore::uploadUserSummaryObject(bdObjectStore *this, bdReference<bdRemoteTask> *result, const bdObjectStoreUploadUserSummaryObjectRequest *request, bdObjectStoreUploadUserSummaryObjectResponse *response)
{
  bdStructBufferSerializable *v8; 
  bdLobbyErrorCode started; 
  bdObjectStoreStreaming *p_m_streaming; 
  bdObjectStoreObject *Object; 
  const bdObjectStoreMetadata *Metadata; 
  bdObjectStoreObject *v13; 
  unsigned __int64 ContentSize; 
  bdObjectStoreObject *v15; 
  const unsigned __int8 *Content; 
  const char *UploadURL; 
  const char *AuthorizationHeaderValue; 
  bdReference<bdStructBufferTask> newTask; 

  newTask.m_ptr = NULL;
  bdObjectStoreRequestBase::setEnvironment(&request->bdObjectStoreRequestBase, this->m_environment);
  v8 = &request->bdStructBufferSerializable;
  if ( !request )
    v8 = NULL;
  started = bdRemoteTaskManager::startStructTask(this->m_remoteTaskManager, &newTask, 0xC1u, 0xDu, v8, response, this->m_lobbyService);
  if ( started )
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdObjectStore", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstore.cpp", "bdObjectStore::checkTaskResult", 0x43Du, "Failed to start task: Error %i", started);
  p_m_streaming = &this->m_streaming;
  bdObjectStoreStreaming::setRemoteTask(p_m_streaming, &newTask);
  Object = (bdObjectStoreObject *)bdObjectStoreUploadUserSummaryObjectRequest::getObject((bdObjectStoreUploadUserSummaryObjectRequest *)request);
  Metadata = bdObjectStoreObject::getMetadata(Object);
  v13 = (bdObjectStoreObject *)bdObjectStoreUploadUserSummaryObjectRequest::getObject((bdObjectStoreUploadUserSummaryObjectRequest *)request);
  ContentSize = bdObjectStoreObject::getContentSize(v13);
  v15 = (bdObjectStoreObject *)bdObjectStoreUploadUserSummaryObjectRequest::getObject((bdObjectStoreUploadUserSummaryObjectRequest *)request);
  Content = bdObjectStoreObject::getContent(v15);
  UploadURL = bdObjectStoreUploadUserSummaryObjectResponse::getUploadURL(response);
  AuthorizationHeaderValue = bdObjectStoreUploadUserSummaryObjectResponse::getAuthorizationHeaderValue(response);
  bdObjectStoreStreaming::initUserSummaryUpload(p_m_streaming, AuthorizationHeaderValue, UploadURL, Content, ContentSize, Metadata, response);
  bdObjectStoreStreaming::startUserSummaryUpload(p_m_streaming, result);
  if ( newTask.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&newTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && newTask.m_ptr )
    ((void (__fastcall *)(bdStructBufferTask *, __int64))newTask.m_ptr->~bdReferencable)(newTask.m_ptr, 1i64);
  return result;
}

/*
==============
bdObjectStore::validateUploadUserObjectWithUserSummaryObjectRequest
==============
*/
bool bdObjectStore::validateUploadUserObjectWithUserSummaryObjectRequest(bdObjectStore *this, const bdObjectStoreUploadMultipleLargeObjectsRequest *request)
{
  bdObjectStoreObject *Objects; 
  bdObjectStoreMetadata *Metadata; 
  bdObjectStoreObjectID *ObjectID; 
  const char *ObjectName; 
  bdObjectStoreMetadata *v8; 
  bdObjectStoreObjectID *v9; 
  const char *v10; 
  bdObjectStoreMetadata *v11; 
  bdObjectStoreObjectID *v12; 
  const char *Owner; 
  bdObjectStoreMetadata *v14; 
  bdObjectStoreObjectID *v15; 
  const char *v16; 
  bdObjectStoreMetadata *v17; 
  bdObjectStoreObjectID *v18; 
  bdObjectStoreMetadata *v19; 
  bdObjectStoreObjectID *v20; 

  if ( bdObjectStoreUploadMultipleLargeObjectsRequest::getObjectSize((bdObjectStoreUploadMultipleLargeObjectsRequest *)request) != 2 )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdObjectStore/bdObjectStore", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstore.cpp", "bdObjectStore::validateUploadUserObjectWithUserSummaryObjectRequest", 0x2B6u, "2 objects should be passed to this task. A user and a summary object.");
    return 0;
  }
  Objects = (bdObjectStoreObject *)bdObjectStoreUploadMultipleLargeObjectsRequest::getObjects((bdObjectStoreUploadMultipleLargeObjectsRequest *)request);
  Metadata = (bdObjectStoreMetadata *)bdObjectStoreObject::getMetadata(Objects + 1);
  ObjectID = (bdObjectStoreObjectID *)bdObjectStoreMetadata::getObjectID(Metadata);
  ObjectName = bdObjectStoreObjectID::getObjectName(ObjectID);
  v8 = (bdObjectStoreMetadata *)bdObjectStoreObject::getMetadata(Objects);
  v9 = (bdObjectStoreObjectID *)bdObjectStoreMetadata::getObjectID(v8);
  v10 = bdObjectStoreObjectID::getObjectName(v9);
  if ( strncmp(v10, ObjectName, 0x41ui64) )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdObjectStore/bdObjectStore", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstore.cpp", "bdObjectStore::validateUploadUserObjectWithUserSummaryObjectRequest", 0x2C2u, "Names differ between the 2 objects");
    return 0;
  }
  v11 = (bdObjectStoreMetadata *)bdObjectStoreObject::getMetadata(Objects + 1);
  v12 = (bdObjectStoreObjectID *)bdObjectStoreMetadata::getObjectID(v11);
  Owner = bdObjectStoreObjectID::getOwner(v12);
  v14 = (bdObjectStoreMetadata *)bdObjectStoreObject::getMetadata(Objects);
  v15 = (bdObjectStoreObjectID *)bdObjectStoreMetadata::getObjectID(v14);
  v16 = bdObjectStoreObjectID::getOwner(v15);
  if ( strncmp(v16, Owner, 0x1Eui64) )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdObjectStore/bdObjectStore", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstore.cpp", "bdObjectStore::validateUploadUserObjectWithUserSummaryObjectRequest", 0x2CAu, "Owners differ between the 2 objects");
    return 0;
  }
  v17 = (bdObjectStoreMetadata *)bdObjectStoreObject::getMetadata(Objects);
  v18 = (bdObjectStoreObjectID *)bdObjectStoreMetadata::getObjectID(v17);
  if ( bdObjectStoreObjectID::getOwnerType(v18) )
    return 0;
  v19 = (bdObjectStoreMetadata *)bdObjectStoreObject::getMetadata(Objects + 1);
  v20 = (bdObjectStoreObjectID *)bdObjectStoreMetadata::getObjectID(v19);
  return bdObjectStoreObjectID::getOwnerType(v20) == USER_SUMMARY_OWNER_TYPE;
}

