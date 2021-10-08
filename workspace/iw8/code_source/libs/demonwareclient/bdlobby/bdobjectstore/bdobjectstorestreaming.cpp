/*
==============
bdObjectStoreStreaming::isIdle
==============
*/

bool __fastcall bdObjectStoreStreaming::isIdle(bdObjectStoreStreaming *this)
{
  return ?isIdle@bdObjectStoreStreaming@@QEBA_NXZ(this);
}

/*
==============
bdObjectStoreStreaming::getRemoteTaskStatus
==============
*/

bdTask::bdStatus __fastcall bdObjectStoreStreaming::getRemoteTaskStatus(bdObjectStoreStreaming *this)
{
  return ?getRemoteTaskStatus@bdObjectStoreStreaming@@QEBA?AW4bdStatus@bdTask@@XZ(this);
}

/*
==============
bdObjectStoreStreaming::setRemoteTask
==============
*/

void __fastcall bdObjectStoreStreaming::setRemoteTask(bdObjectStoreStreaming *this, bdReference<bdStructBufferTask> *remoteTask)
{
  ?setRemoteTask@bdObjectStoreStreaming@@QEAAXAEAV?$bdReference@VbdStructBufferTask@@@@@Z(this, remoteTask);
}

/*
==============
bdObjectStoreStreaming::pumpHTTP
==============
*/

void __fastcall bdObjectStoreStreaming::pumpHTTP(bdObjectStoreStreaming *this)
{
  ?pumpHTTP@bdObjectStoreStreaming@@IEAAXXZ(this);
}

/*
==============
bdObjectStoreStreaming::setFailedStateFromHTTPError
==============
*/

bool __fastcall bdObjectStoreStreaming::setFailedStateFromHTTPError(bdObjectStoreStreaming *this)
{
  return ?setFailedStateFromHTTPError@bdObjectStoreStreaming@@IEAA_NXZ(this);
}

/*
==============
bdObjectStoreStreaming::startContentUpload
==============
*/

bdHTTP::bdStatus __fastcall bdObjectStoreStreaming::startContentUpload(bdObjectStoreStreaming *this, const char *const uploadURL, unsigned __int64 transactionID, const char *authorizationHeader, bdObjectStoreHTTPHeader *extraHeaders, unsigned int numExtraHeaders)
{
  return ?startContentUpload@bdObjectStoreStreaming@@IEAA?AW4bdStatus@bdHTTP@@QEBD_KPEBDPEAVbdObjectStoreHTTPHeader@@I@Z(this, uploadURL, transactionID, authorizationHeader, extraHeaders, numExtraHeaders);
}

/*
==============
bdObjectStoreStreaming::setUploadStateForIndex
==============
*/

void __fastcall bdObjectStoreStreaming::setUploadStateForIndex(bdObjectStoreStreaming *this)
{
  ?setUploadStateForIndex@bdObjectStoreStreaming@@IEAAXXZ(this);
}

/*
==============
bdObjectStoreStreaming::logUploadProgress
==============
*/

void __fastcall bdObjectStoreStreaming::logUploadProgress(bdObjectStoreStreaming *this)
{
  ?logUploadProgress@bdObjectStoreStreaming@@IEBAXXZ(this);
}

/*
==============
bdObjectStoreStreaming::postMultipleUpload
==============
*/

bdReference<bdStructBufferTask> *__fastcall bdObjectStoreStreaming::postMultipleUpload(bdObjectStoreStreaming *this, bdReference<bdStructBufferTask> *result)
{
  return ?postMultipleUpload@bdObjectStoreStreaming@@IEAA?AV?$bdReference@VbdStructBufferTask@@@@XZ(this, result);
}

/*
==============
bdObjectStoreStreaming::setState
==============
*/

void __fastcall bdObjectStoreStreaming::setState(bdObjectStoreStreaming *this, bdObjectStoreStreaming::bdStatus newState, bdLobbyErrorCode errorCode)
{
  ?setState@bdObjectStoreStreaming@@IEAAXW4bdStatus@1@W4bdLobbyErrorCode@@@Z(this, newState, errorCode);
}

/*
==============
bdObjectStoreStreaming::startMultipleUpload
==============
*/

bdReference<bdRemoteTask> *__fastcall bdObjectStoreStreaming::startMultipleUpload(bdObjectStoreStreaming *this, bdReference<bdRemoteTask> *result)
{
  return ?startMultipleUpload@bdObjectStoreStreaming@@QEAA?AV?$bdReference@VbdRemoteTask@@@@XZ(this, result);
}

/*
==============
bdObjectStoreStreaming::startUpload
==============
*/

bdReference<bdRemoteTask> *__fastcall bdObjectStoreStreaming::startUpload(bdObjectStoreStreaming *this, bdReference<bdRemoteTask> *result)
{
  return ?startUpload@bdObjectStoreStreaming@@QEAA?AV?$bdReference@VbdRemoteTask@@@@XZ(this, result);
}

/*
==============
bdObjectStoreStreaming::startContentDownload
==============
*/

bdHTTP::bdStatus __fastcall bdObjectStoreStreaming::startContentDownload(bdObjectStoreStreaming *this, const char *const downloadURL, bdDownloadInterceptor *downloadInterceptor, unsigned __int64 transactionID, const char *authorizationHeader)
{
  return ?startContentDownload@bdObjectStoreStreaming@@IEAA?AW4bdStatus@bdHTTP@@QEBDPEAVbdDownloadInterceptor@@_KPEBD@Z(this, downloadURL, downloadInterceptor, transactionID, authorizationHeader);
}

/*
==============
bdObjectStoreStreaming::pumpPreHTTP
==============
*/

void __fastcall bdObjectStoreStreaming::pumpPreHTTP(bdObjectStoreStreaming *this)
{
  ?pumpPreHTTP@bdObjectStoreStreaming@@IEAAXXZ(this);
}

/*
==============
bdObjectStoreStreaming::start
==============
*/

bdReference<bdRemoteTask> *__fastcall bdObjectStoreStreaming::start(bdObjectStoreStreaming *this, bdReference<bdRemoteTask> *result, bdObjectStoreStreaming::bdObjectStoreOperation operation)
{
  return ?start@bdObjectStoreStreaming@@IEAA?AV?$bdReference@VbdRemoteTask@@@@W4bdObjectStoreOperation@1@@Z(this, result, operation);
}

/*
==============
bdObjectStoreStreaming::startDownload
==============
*/

bdReference<bdRemoteTask> *__fastcall bdObjectStoreStreaming::startDownload(bdObjectStoreStreaming *this, bdReference<bdRemoteTask> *result)
{
  return ?startDownload@bdObjectStoreStreaming@@QEAA?AV?$bdReference@VbdRemoteTask@@@@XZ(this, result);
}

/*
==============
bdObjectStoreStreaming::abortHTTPOperation
==============
*/

void __fastcall bdObjectStoreStreaming::abortHTTPOperation(bdObjectStoreStreaming *this)
{
  ?abortHTTPOperation@bdObjectStoreStreaming@@QEAAXXZ(this);
}

/*
==============
bdObjectStoreStreaming::initMultipleUpload
==============
*/

bool __fastcall bdObjectStoreStreaming::initMultipleUpload(bdObjectStoreStreaming *this, const char *const authorizationHeader, bdStructBufferSerializable *cachedCompleteRequest, bdStructBufferSerializable *cachedCompleteResponse)
{
  return ?initMultipleUpload@bdObjectStoreStreaming@@QEAA_NQEBDPEAVbdStructBufferSerializable@@1@Z(this, authorizationHeader, cachedCompleteRequest, cachedCompleteResponse);
}

/*
==============
bdObjectStoreStreaming::exitHTTPFailed
==============
*/

void __fastcall bdObjectStoreStreaming::exitHTTPFailed(bdObjectStoreStreaming *this)
{
  ?exitHTTPFailed@bdObjectStoreStreaming@@IEAAXXZ(this);
}

/*
==============
bdObjectStoreStreaming::bdObjectStoreStreaming
==============
*/

void __fastcall bdObjectStoreStreaming::bdObjectStoreStreaming(bdObjectStoreStreaming *this, bdRemoteTaskManager *const remoteTaskManager, bdLobbyService *lobbyService, const char *certificateAuthorityPath)
{
  ??0bdObjectStoreStreaming@@QEAA@QEAVbdRemoteTaskManager@@PEAVbdLobbyService@@PEBD@Z(this, remoteTaskManager, lobbyService, certificateAuthorityPath);
}

/*
==============
bdObjectStoreStreaming::initUpload
==============
*/

bool __fastcall bdObjectStoreStreaming::initUpload(bdObjectStoreStreaming *this, const char *const authorizationHeader, const char *const uploadURL, const unsigned __int8 *data, unsigned __int64 contentSize, bdStructBufferSerializable *cachedCompleteRequest, bdStructBufferSerializable *cachedCompleteResponse)
{
  return ?initUpload@bdObjectStoreStreaming@@QEAA_NQEBD0PEBE_KPEAVbdStructBufferSerializable@@3@Z(this, authorizationHeader, uploadURL, data, contentSize, cachedCompleteRequest, cachedCompleteResponse);
}

/*
==============
bdObjectStoreStreaming::pump
==============
*/

void __fastcall bdObjectStoreStreaming::pump(bdObjectStoreStreaming *this)
{
  ?pump@bdObjectStoreStreaming@@QEAAXXZ(this);
}

/*
==============
bdObjectStoreStreaming::~bdObjectStoreStreaming
==============
*/

void __fastcall bdObjectStoreStreaming::~bdObjectStoreStreaming(bdObjectStoreStreaming *this)
{
  ??1bdObjectStoreStreaming@@UEAA@XZ(this);
}

/*
==============
bdObjectStoreStreaming::finalizeHTTP
==============
*/

void __fastcall bdObjectStoreStreaming::finalizeHTTP(bdObjectStoreStreaming *this)
{
  ?finalizeHTTP@bdObjectStoreStreaming@@IEAAXXZ(this);
}

/*
==============
bdObjectStoreStreaming::startUserSummaryUpload
==============
*/

bdReference<bdRemoteTask> *__fastcall bdObjectStoreStreaming::startUserSummaryUpload(bdObjectStoreStreaming *this, bdReference<bdRemoteTask> *result)
{
  return ?startUserSummaryUpload@bdObjectStoreStreaming@@QEAA?AV?$bdReference@VbdRemoteTask@@@@XZ(this, result);
}

/*
==============
bdObjectStoreStreaming::isReady
==============
*/

bool __fastcall bdObjectStoreStreaming::isReady(bdObjectStoreStreaming *this)
{
  return ?isReady@bdObjectStoreStreaming@@QEBA_NXZ(this);
}

/*
==============
bdObjectStoreStreaming::reset
==============
*/

void __fastcall bdObjectStoreStreaming::reset(bdObjectStoreStreaming *this)
{
  ?reset@bdObjectStoreStreaming@@QEAAXXZ(this);
}

/*
==============
bdObjectStoreStreaming::initUserSummaryUpload
==============
*/

bool __fastcall bdObjectStoreStreaming::initUserSummaryUpload(bdObjectStoreStreaming *this, const char *const authorizationHeader, const char *const uploadURL, const unsigned __int8 *data, unsigned __int64 contentSize, const bdObjectStoreMetadata *metadata, bdStructBufferSerializable *cachedUserSummaryUploadResponse)
{
  return ?initUserSummaryUpload@bdObjectStoreStreaming@@QEAA_NQEBD0PEBE_KPEBVbdObjectStoreMetadata@@PEAVbdStructBufferSerializable@@@Z(this, authorizationHeader, uploadURL, data, contentSize, metadata, cachedUserSummaryUploadResponse);
}

/*
==============
bdObjectStoreStreaming::postUpload
==============
*/

bdReference<bdStructBufferTask> *__fastcall bdObjectStoreStreaming::postUpload(bdObjectStoreStreaming *this, bdReference<bdStructBufferTask> *result)
{
  return ?postUpload@bdObjectStoreStreaming@@IEAA?AV?$bdReference@VbdStructBufferTask@@@@XZ(this, result);
}

/*
==============
bdObjectStoreStreaming::initHTTP
==============
*/

void __fastcall bdObjectStoreStreaming::initHTTP(bdObjectStoreStreaming *this)
{
  ?initHTTP@bdObjectStoreStreaming@@MEAAXXZ(this);
}

/*
==============
bdObjectStoreStreaming::setContentRangeHeader
==============
*/

void __fastcall bdObjectStoreStreaming::setContentRangeHeader(bdObjectStoreStreaming *this, bdObjectStoreHTTPHeader *header)
{
  ?setContentRangeHeader@bdObjectStoreStreaming@@IEAAXAEAVbdObjectStoreHTTPHeader@@@Z(this, header);
}

/*
==============
bdObjectStoreStreaming::initDownload
==============
*/

bool __fastcall bdObjectStoreStreaming::initDownload(bdObjectStoreStreaming *this, bdObjectStoreDownloadInterceptor *downloadInterceptor, unsigned __int8 *data, unsigned __int64 contentSize, const char *const authorizationHeader, const bdObjectStoreMetadata *metadata)
{
  return ?initDownload@bdObjectStoreStreaming@@QEAA_NPEAVbdObjectStoreDownloadInterceptor@@PEAE_KQEBDPEBVbdObjectStoreMetadata@@@Z(this, downloadInterceptor, data, contentSize, authorizationHeader, metadata);
}

/*
==============
bdObjectStoreStreaming::exitHTTP
==============
*/

void __fastcall bdObjectStoreStreaming::exitHTTP(bdObjectStoreStreaming *this)
{
  ?exitHTTP@bdObjectStoreStreaming@@IEAAXXZ(this);
}

/*
==============
bdObjectStoreStreaming::getState
==============
*/

bdObjectStoreStreaming::bdStatus __fastcall bdObjectStoreStreaming::getState(bdObjectStoreStreaming *this)
{
  return ?getState@bdObjectStoreStreaming@@QEBA?AW4bdStatus@1@XZ(this);
}

/*
==============
bdObjectStoreStreaming::bdObjectStoreStreaming
==============
*/
void bdObjectStoreStreaming::bdObjectStoreStreaming(bdObjectStoreStreaming *this, bdRemoteTaskManager *const remoteTaskManager, bdLobbyService *lobbyService, const char *certificateAuthorityPath)
{
  bdHTTP *v5; 
  bdHTTPXboxOne *v6; 
  bdHTTP *v7; 

  this->__vftable = (bdObjectStoreStreaming_vtbl *)&bdObjectStoreStreaming::`vftable';
  this->m_remoteTaskManager = remoteTaskManager;
  v5 = NULL;
  this->m_overallTask.m_ptr = NULL;
  this->m_remoteTask.m_ptr = NULL;
  this->m_lobbyService = lobbyService;
  this->m_http = NULL;
  *(_QWORD *)&this->m_operation = 0i64;
  this->m_downloadInterceptor = NULL;
  bdObjectStoreDownloadInterceptor::bdObjectStoreDownloadInterceptor(&this->m_defaultDownloadInterceptor);
  bdObjectStoreUploadInterceptor::bdObjectStoreUploadInterceptor(&this->m_uploadHandler);
  this->m_authorizationHeader = NULL;
  this->m_uploadURL = NULL;
  this->m_cachedRequest = NULL;
  this->m_cachedResponse = NULL;
  v6 = (bdHTTPXboxOne *)bdMemory::allocate(0x9408ui64);
  if ( v6 )
  {
    bdHTTPXboxOne::bdHTTPXboxOne(v6, 0, 0);
    v5 = v7;
  }
  this->m_http = v5;
  memset_0(this->m_replyBuffer, 0, sizeof(this->m_replyBuffer));
}

/*
==============
bdObjectStoreStreaming::~bdObjectStoreStreaming
==============
*/
void bdObjectStoreStreaming::~bdObjectStoreStreaming(bdObjectStoreStreaming *this)
{
  bdHTTP *m_http; 
  bdStructBufferTask *m_ptr; 
  bdStructBufferTask *v4; 
  bdRemoteTask *v5; 
  bdRemoteTask *v6; 

  this->__vftable = (bdObjectStoreStreaming_vtbl *)&bdObjectStoreStreaming::`vftable';
  m_http = this->m_http;
  if ( m_http )
    ((void (__fastcall *)(bdHTTP *, __int64))m_http->~bdHTTP)(m_http, 1i64);
  bdObjectStoreUploadInterceptor::~bdObjectStoreUploadInterceptor(&this->m_uploadHandler);
  bdObjectStoreDownloadInterceptor::~bdObjectStoreDownloadInterceptor(&this->m_defaultDownloadInterceptor);
  m_ptr = this->m_remoteTask.m_ptr;
  if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
  {
    v4 = this->m_remoteTask.m_ptr;
    if ( v4 )
      ((void (__fastcall *)(bdStructBufferTask *, __int64))v4->~bdReferencable)(v4, 1i64);
    this->m_remoteTask.m_ptr = NULL;
  }
  v5 = this->m_overallTask.m_ptr;
  if ( v5 && _InterlockedExchangeAdd((volatile signed __int32 *)&v5->m_refCount, 0xFFFFFFFF) == 1 )
  {
    v6 = this->m_overallTask.m_ptr;
    if ( v6 )
      ((void (__fastcall *)(bdRemoteTask *, __int64))v6->~bdReferencable)(v6, 1i64);
    this->m_overallTask.m_ptr = NULL;
  }
}

/*
==============
bdObjectStoreStreaming::abortHTTPOperation
==============
*/
void bdObjectStoreStreaming::abortHTTPOperation(bdObjectStoreStreaming *this)
{
  bool v2; 
  bdStructBufferTask *m_ptr; 

  if ( this->m_overallTask.m_ptr )
  {
    v2 = this->m_http->getStatus(this->m_http) == BD_TIMED_OUT;
    if ( this->m_state == BD_DONE && !v2 )
    {
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdObjectStore/bdObjectStoreStreaming", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstorestreaming.cpp", "bdObjectStoreStreaming::abortHTTPOperation", 0x85u, "Aborting HTTP operation");
      this->m_http->abortOperation(this->m_http);
    }
    bdRemoteTask::cancelTask(this->m_overallTask.m_ptr);
    m_ptr = this->m_remoteTask.m_ptr;
    if ( m_ptr )
      bdRemoteTask::cancelTask(m_ptr);
    this->m_state = BD_MAX_STATUS;
    this->m_operation = 0;
  }
  else
  {
    this->m_state = BD_MAX_STATUS;
    this->m_operation = 0;
  }
}

/*
==============
bdObjectStoreStreaming::exitHTTP
==============
*/
void bdObjectStoreStreaming::exitHTTP(bdObjectStoreStreaming *this)
{
  int v3; 
  unsigned int v4; 
  unsigned int v5; 
  unsigned int v6; 
  bdStructBufferSerializable *m_cachedRequest; 
  bdObjectStoreCompleteUploadSessionsRequest *v8; 
  bdRemoteTask *v9; 
  bdObjectStoreStreaming::bdStatus v10; 
  bdLobbyErrorCode v11; 
  bdStructBufferTask *v12; 
  bdObjectStoreStreaming::bdStatus v13; 
  bdRemoteTask *v14; 
  bdObjectStoreStreaming::bdStatus v15; 
  bdObjectStoreMetadata *Metadata; 
  bdRemoteTask *v17; 
  bdObjectStoreStreaming::bdStatus v18; 
  bdRemoteTask *v19; 
  bdObjectStoreStreaming::bdStatus v20; 
  bdRemoteTask *v21; 
  bdLobbyErrorCode started; 
  bdStructBufferTask *m_ptr; 
  bdRemoteTask *v24; 
  bdObjectStoreStreaming::bdStatus m_state; 
  unsigned int v26; 
  __int64 v29; 
  unsigned __int64 ContentLength; 
  bdRemoteTask *v31; 
  bdObjectStoreStreaming::bdStatus v32; 
  bdRemoteTask *v33; 
  bdObjectStoreStreaming::bdStatus v34; 
  __int64 v35; 
  double v36; 
  bdReference<bdStructBufferTask> newTask; 
  bdReference<bdStructBufferTask> other; 
  __int64 v39; 
  bdJSONDeserializer json; 
  bdObjectStoreHTTPHeader v41; 

  v39 = -2i64;
  v3 = 0;
  v4 = this->m_operation - 1;
  if ( v4 )
  {
    v5 = v4 - 1;
    if ( !v5 )
    {
      bdObjectStoreStreaming::logUploadProgress(this);
      other.m_ptr = NULL;
      started = bdRemoteTaskManager::startStructTask(this->m_remoteTaskManager, &other, 0xC1u, 0xCu, this->m_cachedRequest, this->m_cachedResponse, this->m_lobbyService);
      if ( started )
        bdLogMessage(BD_LOG_WARNING, "warn/", "bdObjectStore", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstorestreaming.cpp", "bdObjectStoreStreaming::postUpload", 0x211u, "Failed to start task: Error %i", started);
      bdReference<bdStructBufferTask>::operator=(&this->m_remoteTask, &other);
      if ( other.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&other.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && other.m_ptr )
        ((void (__fastcall *)(bdStructBufferTask *, __int64))other.m_ptr->~bdReferencable)(other.m_ptr, 1i64);
      m_ptr = this->m_remoteTask.m_ptr;
      v13 = BD_TIMED_OUT;
      if ( !m_ptr )
        v13 = BD_MAX_STATUS;
      v24 = this->m_overallTask.m_ptr;
      if ( v24->m_errorCode == BD_NO_ERROR )
      {
        m_state = this->m_state;
        if ( m_state == BD_PENDING || m_state == BD_TIMED_OUT )
          v24->m_errorCode = m_ptr->m_errorCode;
      }
      if ( !m_ptr )
        this->m_overallTask.m_ptr->m_status = BD_FAILED;
      goto LABEL_58;
    }
    v6 = v5 - 1;
    if ( v6 )
    {
      if ( v6 != 1 )
        return;
      bdObjectStoreStreaming::logUploadProgress(this);
      m_cachedRequest = this->m_cachedRequest;
      v8 = (bdObjectStoreCompleteUploadSessionsRequest *)&m_cachedRequest[-1];
      if ( !m_cachedRequest )
        v8 = NULL;
      if ( bdObjectStoreCompleteUploadSessionsRequest::hasMoreObjectsToUpload(v8) )
      {
        bdObjectStoreCompleteUploadSessionsRequest::incrementIndex(v8);
        v9 = this->m_overallTask.m_ptr;
        if ( v9->m_errorCode == BD_NO_ERROR )
        {
          v10 = this->m_state;
          if ( v10 == BD_PENDING || v10 == BD_TIMED_OUT )
            v9->m_errorCode = this->m_remoteTask.m_ptr->m_errorCode;
        }
        this->m_state = BD_PENDING;
        return;
      }
      newTask.m_ptr = NULL;
      v11 = bdRemoteTaskManager::startStructTask(this->m_remoteTaskManager, &newTask, 0xC1u, 0x18u, this->m_cachedRequest, this->m_cachedResponse, this->m_lobbyService);
      if ( v11 )
        bdLogMessage(BD_LOG_WARNING, "warn/", "bdObjectStore", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstorestreaming.cpp", "bdObjectStoreStreaming::postMultipleUpload", 0x224u, "Failed to start task: Error %i", v11);
      bdReference<bdStructBufferTask>::operator=(&this->m_remoteTask, &newTask);
      if ( newTask.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&newTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && newTask.m_ptr )
        ((void (__fastcall *)(bdStructBufferTask *, __int64))newTask.m_ptr->~bdReferencable)(newTask.m_ptr, 1i64);
      v12 = this->m_remoteTask.m_ptr;
      v13 = BD_TIMED_OUT;
      if ( !v12 )
        v13 = BD_MAX_STATUS;
      v14 = this->m_overallTask.m_ptr;
      if ( v14->m_errorCode == BD_NO_ERROR )
      {
        v15 = this->m_state;
        if ( v15 == BD_PENDING || v15 == BD_TIMED_OUT )
          v14->m_errorCode = v12->m_errorCode;
      }
      if ( !v12 )
      {
        this->m_overallTask.m_ptr->m_status = BD_FAILED;
        this->m_state = v13;
        return;
      }
LABEL_58:
      this->m_state = v13;
      return;
    }
    bdObjectStoreStreaming::logUploadProgress(this);
    bdObjectStoreHTTPHeader::bdObjectStoreHTTPHeader(&v41);
    if ( this->m_http->getHeader(this->m_http, "Dw-Objectstore-Metadata", v41.m_value, 4096u) )
    {
      bdJSONDeserializer::bdJSONDeserializer(&json, v41.m_value);
      Metadata = bdObjectStoreUploadUserSummaryObjectResponse::getMetadata((bdObjectStoreUploadUserSummaryObjectResponse *)this->m_cachedResponse);
      if ( bdObjectStoreMetadata::deserializeFromJSON(Metadata, &json, USER_SUMMARY_OWNER_TYPE) )
      {
        v19 = this->m_overallTask.m_ptr;
        if ( v19->m_errorCode == BD_NO_ERROR )
        {
          v20 = this->m_state;
          if ( v20 == BD_PENDING || v20 == BD_TIMED_OUT )
          {
            v19->m_errorCode = this->m_remoteTask.m_ptr->m_errorCode;
            v19 = this->m_overallTask.m_ptr;
          }
        }
        LOBYTE(v3) = v19->m_errorCode != BD_NO_ERROR;
        v19->m_status = v3 + 2;
        this->m_state = BD_CANCELLED;
      }
      else
      {
        bdLogMessage(BD_LOG_ERROR, (const char *const)&::other, "bdObjectStore/bdObjectStoreStreaming", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstorestreaming.cpp", "bdObjectStoreStreaming::exitHTTP", 0x1F0u, "Error deserializing metadata header : [%s]", v41.m_value);
        v17 = this->m_overallTask.m_ptr;
        if ( v17->m_errorCode == BD_NO_ERROR )
        {
          v18 = this->m_state;
          if ( v18 == BD_PENDING || v18 == BD_TIMED_OUT )
          {
            v17->m_errorCode = this->m_remoteTask.m_ptr->m_errorCode;
            v17 = this->m_overallTask.m_ptr;
          }
        }
        v17->m_status = BD_FAILED;
        this->m_state = BD_MAX_STATUS;
      }
      bdJSONDeserializer::~bdJSONDeserializer(&json);
    }
    else
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&::other, "bdObjectStore/bdObjectStoreStreaming", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstorestreaming.cpp", "bdObjectStoreStreaming::exitHTTP", 0x1FAu, "Error getting metadata header");
      v21 = this->m_overallTask.m_ptr;
      if ( v21->m_errorCode == BD_NO_ERROR )
      {
        v21->m_errorCode = BD_OBJECTSTORE_HTTP_ERROR;
        v21 = this->m_overallTask.m_ptr;
      }
      v21->m_status = BD_FAILED;
      this->m_state = BD_MAX_STATUS;
    }
    bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&v41.__vftable + 2));
    bdReferencable::~bdReferencable((bdReferencable *)&v41.gap1074[4]);
  }
  else
  {
    v26 = this->m_http->getDownloadProgress(this->m_http) >> 10;
    *(double *)&_XMM0 = ((double (__fastcall *)(bdHTTP *))this->m_http->getDownloadRate)(this->m_http);
    __asm
    {
      vmulss  xmm1, xmm0, cs:__real@3a800000
      vcvtss2sd xmm2, xmm1, xmm1
      vmovsd  [rsp+1138h+var_10F8], xmm2
    }
    bdLogMessage(BD_LOG_INFO, "info/", "bdObjectStore/bdObjectStoreStreaming", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstorestreaming.cpp", "bdObjectStoreStreaming::exitHTTP", 0x1B0u, "Transferred: %d KB @ %0.2f KB/sec", v26, v36);
    bdLogMessage(BD_LOG_INFO, "info/", "bdObjectStore/bdObjectStoreStreaming", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstorestreaming.cpp", "bdObjectStoreStreaming::exitHTTP", 0x1B2u, "Completed download of object");
    v29 = this->m_http->getDownloadProgress(this->m_http);
    if ( v29 == bdObjectStoreMetadata::getContentLength((bdObjectStoreMetadata *)this->m_metadata) )
    {
      v33 = this->m_overallTask.m_ptr;
      if ( v33->m_errorCode == BD_NO_ERROR )
      {
        v34 = this->m_state;
        if ( v34 == BD_PENDING || v34 == BD_TIMED_OUT )
        {
          v33->m_errorCode = this->m_remoteTask.m_ptr->m_errorCode;
          v33 = this->m_overallTask.m_ptr;
        }
      }
      LOBYTE(v3) = v33->m_errorCode != BD_NO_ERROR;
      v33->m_status = v3 + 2;
      this->m_state = BD_CANCELLED;
    }
    else
    {
      ContentLength = bdObjectStoreMetadata::getContentLength((bdObjectStoreMetadata *)this->m_metadata);
      LODWORD(v35) = this->m_http->getDownloadProgress(this->m_http);
      bdLogMessage(BD_LOG_ERROR, (const char *const)&::other, "bdObjectStore/bdObjectStoreStreaming", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstorestreaming.cpp", "bdObjectStoreStreaming::exitHTTP", 0x1B6u, "HTTP GET failed, received %d of %d bytes", v35, ContentLength);
      v31 = this->m_overallTask.m_ptr;
      if ( v31->m_errorCode == BD_NO_ERROR )
      {
        v32 = this->m_state;
        if ( v32 == BD_PENDING || v32 == BD_TIMED_OUT )
        {
          v31->m_errorCode = this->m_remoteTask.m_ptr->m_errorCode;
          v31 = this->m_overallTask.m_ptr;
        }
      }
      v31->m_status = BD_FAILED;
      this->m_state = BD_MAX_STATUS;
    }
  }
}

/*
==============
bdObjectStoreStreaming::exitHTTPFailed
==============
*/
void bdObjectStoreStreaming::exitHTTPFailed(bdObjectStoreStreaming *this)
{
  unsigned int m_operation; 
  unsigned int v3; 
  unsigned int v4; 
  bool Object; 
  bdLobbyErrorCode LobbyErrorCodeFromErrorName; 
  bdRemoteTask *m_ptr; 
  bdObjectStoreStreaming::bdStatus m_state; 
  bdRemoteTask *v9; 
  bdJSONDeserializer value; 
  bdJSONDeserializer v11; 
  char errorName[112]; 

  m_operation = this->m_operation;
  if ( !m_operation )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdObjectStore/bdObjectStoreStreaming", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstorestreaming.cpp", "bdObjectStoreStreaming::exitHTTPFailed", 0x24Bu, "exitHTTPFailed should not be called when operation = BD_IDLE");
    return;
  }
  v3 = m_operation - 1;
  if ( !v3 )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdObjectStore/bdObjectStoreStreaming", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstorestreaming.cpp", "bdObjectStoreStreaming::exitHTTPFailed", 0x235u, "HTTP GET failed");
    goto LABEL_20;
  }
  v4 = v3 - 1;
  if ( !v4 )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdObjectStore/bdObjectStoreStreaming", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstorestreaming.cpp", "bdObjectStoreStreaming::exitHTTPFailed", 0x23Bu, "HTTP PUT failed");
    goto LABEL_20;
  }
  if ( v4 == 1 )
  {
    bdJSONDeserializer::bdJSONDeserializer(&v11, this->m_replyBuffer);
    bdJSONDeserializer::bdJSONDeserializer(&value);
    Object = bdJSONDeserializer::getObject(&v11, "error", &value);
    if ( Object )
    {
      if ( bdJSONDeserializer::getString(&value, (const char *const)&stru_143C9A1A4, errorName, 0x64u) )
      {
        Object = 1;
        LobbyErrorCodeFromErrorName = bdObjectStoreErrors::getLobbyErrorCodeFromErrorName(errorName);
        m_ptr = this->m_overallTask.m_ptr;
        if ( m_ptr->m_errorCode == BD_NO_ERROR )
        {
          if ( LobbyErrorCodeFromErrorName )
          {
            m_ptr->m_errorCode = LobbyErrorCodeFromErrorName;
          }
          else
          {
            m_state = this->m_state;
            if ( m_state == BD_PENDING || m_state == BD_TIMED_OUT )
              m_ptr->m_errorCode = this->m_remoteTask.m_ptr->m_errorCode;
          }
        }
        this->m_overallTask.m_ptr->m_status = BD_FAILED;
        this->m_state = BD_MAX_STATUS;
      }
      else
      {
        Object = 0;
      }
    }
    else
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdObjectStore/bdObjectStoreStreaming", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstorestreaming.cpp", "bdObjectStoreStreaming::setFailedStateFromHTTPError", 0x265u, "Reply was not valid json.");
    }
    bdJSONDeserializer::~bdJSONDeserializer(&value);
    bdJSONDeserializer::~bdJSONDeserializer(&v11);
    if ( !Object )
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdObjectStore/bdObjectStoreStreaming", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstorestreaming.cpp", "bdObjectStoreStreaming::exitHTTPFailed", 0x244u, "HTTP POST UserSummary failed with unknown error.");
LABEL_20:
      v9 = this->m_overallTask.m_ptr;
      if ( v9->m_errorCode == BD_NO_ERROR )
      {
        v9->m_errorCode = BD_OBJECTSTORE_HTTP_ERROR;
        v9 = this->m_overallTask.m_ptr;
      }
      v9->m_status = BD_FAILED;
      this->m_state = BD_MAX_STATUS;
    }
  }
}

/*
==============
bdObjectStoreStreaming::finalizeHTTP
==============
*/
void bdObjectStoreStreaming::finalizeHTTP(bdObjectStoreStreaming *this)
{
  ;
}

/*
==============
bdObjectStoreStreaming::getRemoteTaskStatus
==============
*/
__int64 bdObjectStoreStreaming::getRemoteTaskStatus(bdObjectStoreStreaming *this)
{
  return ((__int64 (__fastcall *)(bdStructBufferTask *))this->m_remoteTask.m_ptr->getStatus)(this->m_remoteTask.m_ptr);
}

/*
==============
bdObjectStoreStreaming::getState
==============
*/
__int64 bdObjectStoreStreaming::getState(bdObjectStoreStreaming *this)
{
  return (unsigned int)this->m_state;
}

/*
==============
bdObjectStoreStreaming::initDownload
==============
*/
bool bdObjectStoreStreaming::initDownload(bdObjectStoreStreaming *this, bdObjectStoreDownloadInterceptor *downloadInterceptor, unsigned __int8 *data, unsigned __int64 contentSize, const char *const authorizationHeader, const bdObjectStoreMetadata *metadata)
{
  bool result; 

  if ( bdObjectStoreStreaming::isReady(this) )
  {
    if ( !downloadInterceptor )
    {
      downloadInterceptor = &this->m_defaultDownloadInterceptor;
      bdObjectStoreDownloadInterceptor::setData(&this->m_defaultDownloadInterceptor, data, contentSize);
    }
    this->m_downloadInterceptor = downloadInterceptor;
    bdObjectStoreDownloadInterceptor::setMetadata(downloadInterceptor, metadata);
    this->m_authorizationHeader = authorizationHeader;
    result = 1;
    this->m_metadata = metadata;
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdObjectStore/bdObjectStoreStreaming", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstorestreaming.cpp", "bdObjectStoreStreaming::initDownload", 0xFEu, "bdObjectStoreStreaming is not in a ready state to start download.");
    return 0;
  }
  return result;
}

/*
==============
bdObjectStoreStreaming::initHTTP
==============
*/
void bdObjectStoreStreaming::initHTTP(bdObjectStoreStreaming *this)
{
  bdHTTP::bdStatus started; 
  unsigned int m_operation; 
  const char *m_authorizationHeader; 
  unsigned __int64 TransactionID; 
  bdObjectStoreDownloadInterceptor *m_downloadInterceptor; 
  const char *ContentURL; 
  char v8; 
  const char *v9; 
  unsigned __int64 v10; 
  bdStructBufferSerializable *m_cachedRequest; 
  bdObjectStoreCompleteUploadSessionsRequest *v12; 
  bdObjectStoreUploadSession *NextUploadSession; 
  bdObjectStoreObject *NextObject; 
  unsigned __int64 ContentSize; 
  const unsigned __int8 *Content; 
  const char *v17; 
  unsigned __int64 v18; 
  bdObjectStoreMetadata *m_metadata; 
  bdRemoteTask *m_ptr; 
  bdObjectStoreStreaming::bdStatus m_state; 
  bdRemoteTask *v22; 
  bdObjectStoreStreaming::bdStatus v23; 
  const char *v24; 
  unsigned __int64 v25; 
  bdRemoteTask *v26; 
  bdObjectStoreStreaming::bdStatus v27; 
  bdObjectStoreStreaming::bdStatus v28; 
  bdRemoteTask *v29; 
  bdRemoteTask *v30; 
  bdObjectStoreHTTPHeader ptr; 
  char buf[24]; 

  if ( this->m_state == BD_CANCELLED )
  {
    bdLogMessage(BD_LOG_INFO, "info/", "bdObjectStore/bdObjectStoreStreaming", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstorestreaming.cpp", "bdObjectStoreStreaming::initHTTP", 0x2BEu, "No need to perform this HTTP operation");
    return;
  }
  started = BD_PENDING;
  m_operation = this->m_operation;
  if ( m_operation == 1 )
  {
    m_authorizationHeader = this->m_authorizationHeader;
    TransactionID = bdRemoteTask::getTransactionID(this->m_remoteTask.m_ptr);
    m_downloadInterceptor = this->m_downloadInterceptor;
    ContentURL = bdObjectStoreMetadata::getContentURL((bdObjectStoreMetadata *)this->m_metadata);
    bdLogMessage(BD_LOG_INFO, "info/", "bdObjectStore/bdObjectStoreStreaming", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstorestreaming.cpp", "bdObjectStoreStreaming::startContentDownload", 0x29Cu, "Starting HTTP GET of [%s]", ContentURL);
    v8 = ((__int64 (__fastcall *)(bdHTTP *, __int64, const char *))this->m_http->initRequest)(this->m_http, 1i64, ContentURL);
    this->m_operation = 1;
    bdSnprintf(buf, 0x15ui64, "%I64u", TransactionID);
    if ( !v8 || !this->m_http->setHeader(this->m_http, "DW-Transaction", buf) || !this->m_http->setHeader(this->m_http, "Authorization", m_authorizationHeader) || !this->m_http->setDownloadHandler(this->m_http, m_downloadInterceptor) || this->m_http->sendRequest(this->m_http) != BD_FAILED )
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdObjectStore/bdObjectStoreStreaming", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstorestreaming.cpp", "bdObjectStoreStreaming::startContentDownload", 0x2B5u, "Failed to start GET from %s", ContentURL);
    started = this->m_http->getStatus(this->m_http);
  }
  else
  {
    switch ( m_operation )
    {
      case 2u:
        `eh vector vbase constructor iterator'(&ptr, 0x1088ui64, 1ui64, (void (__fastcall *)(void *))bdObjectStoreHTTPHeader::bdObjectStoreHTTPHeader, (void (__fastcall *)(void *))bdObjectStoreHTTPHeader::`vbase destructor);
        bdObjectStoreStreaming::setContentRangeHeader(this, &ptr);
        v9 = this->m_authorizationHeader;
        v10 = bdRemoteTask::getTransactionID(this->m_remoteTask.m_ptr);
        started = bdObjectStoreStreaming::startContentUpload(this, this->m_uploadURL, v10, v9, &ptr, 1u);
        break;
      case 4u:
        m_cachedRequest = this->m_cachedRequest;
        v12 = (bdObjectStoreCompleteUploadSessionsRequest *)&m_cachedRequest[-1];
        if ( !m_cachedRequest )
          v12 = NULL;
        NextUploadSession = bdObjectStoreCompleteUploadSessionsRequest::getNextUploadSession(v12);
        this->m_uploadURL = bdObjectStoreUploadSession::getUploadURL(NextUploadSession);
        NextObject = (bdObjectStoreObject *)bdObjectStoreCompleteUploadSessionsRequest::getNextObject(v12);
        ContentSize = bdObjectStoreObject::getContentSize(NextObject);
        Content = bdObjectStoreObject::getContent(NextObject);
        bdObjectStoreUploadInterceptor::setData(&this->m_uploadHandler, Content, ContentSize);
        `eh vector vbase constructor iterator'(&ptr, 0x1088ui64, 1ui64, (void (__fastcall *)(void *))bdObjectStoreHTTPHeader::bdObjectStoreHTTPHeader, (void (__fastcall *)(void *))bdObjectStoreHTTPHeader::`vbase destructor);
        bdObjectStoreStreaming::setContentRangeHeader(this, &ptr);
        v17 = this->m_authorizationHeader;
        v18 = bdRemoteTask::getTransactionID(this->m_remoteTask.m_ptr);
        started = bdObjectStoreStreaming::startContentUpload(this, this->m_uploadURL, v18, v17, &ptr, 1u);
        break;
      case 3u:
        `eh vector vbase constructor iterator'(&ptr, 0x1088ui64, 1ui64, (void (__fastcall *)(void *))bdObjectStoreHTTPHeader::bdObjectStoreHTTPHeader, (void (__fastcall *)(void *))bdObjectStoreHTTPHeader::`vbase destructor);
        m_metadata = (bdObjectStoreMetadata *)this->m_metadata;
        if ( !m_metadata )
        {
          bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdObjectStore/bdObjectStoreStreaming", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstorestreaming.cpp", "bdObjectStoreStreaming::initHTTP", 0x2ECu, "Metadata is not set correctly for summary object upload");
          m_ptr = this->m_overallTask.m_ptr;
          if ( m_ptr->m_errorCode == BD_NO_ERROR )
          {
            m_state = this->m_state;
            if ( m_state == BD_PENDING || m_state == BD_TIMED_OUT )
            {
              m_ptr->m_errorCode = this->m_remoteTask.m_ptr->m_errorCode;
              m_ptr = this->m_overallTask.m_ptr;
            }
          }
          m_ptr->m_status = BD_FAILED;
          this->m_state = BD_MAX_STATUS;
          m_metadata = (bdObjectStoreMetadata *)this->m_metadata;
        }
        if ( bdObjectStoreMetadata::serializeToHTTPHeader(m_metadata, &ptr) )
        {
          v24 = this->m_authorizationHeader;
          v25 = bdRemoteTask::getTransactionID(this->m_remoteTask.m_ptr);
          started = bdObjectStoreStreaming::startContentUpload(this, this->m_uploadURL, v25, v24, &ptr, 1u);
        }
        else
        {
          bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdObjectStore/bdObjectStoreStreaming", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstorestreaming.cpp", "bdObjectStoreStreaming::initHTTP", 0x2F1u, "Cannot serialize http header.");
          v22 = this->m_overallTask.m_ptr;
          if ( v22->m_errorCode == BD_NO_ERROR )
          {
            v23 = this->m_state;
            if ( v23 == BD_PENDING || v23 == BD_TIMED_OUT )
            {
              v22->m_errorCode = this->m_remoteTask.m_ptr->m_errorCode;
              v22 = this->m_overallTask.m_ptr;
            }
          }
          v22->m_status = BD_FAILED;
          this->m_state = BD_MAX_STATUS;
        }
        break;
      default:
        bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdObjectStore/bdObjectStoreStreaming", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstorestreaming.cpp", "bdObjectStoreStreaming::initHTTP", 0x301u, "Invalid operation specified.");
        v26 = this->m_overallTask.m_ptr;
        if ( v26->m_errorCode == BD_NO_ERROR )
        {
          v27 = this->m_state;
          if ( v27 == BD_PENDING || v27 == BD_TIMED_OUT )
          {
            v26->m_errorCode = this->m_remoteTask.m_ptr->m_errorCode;
            v26 = this->m_overallTask.m_ptr;
          }
        }
        v26->m_status = BD_FAILED;
        this->m_state = BD_MAX_STATUS;
        goto LABEL_37;
    }
    `eh vector destructor iterator'(&ptr, 0x1088ui64, 1ui64, (void (__fastcall *)(void *))bdObjectStoreHTTPHeader::`vbase destructor);
  }
LABEL_37:
  v28 = this->m_state;
  if ( v28 != BD_CANCELLED )
  {
    if ( ((started - 3) & 0xFFFFFFFD) != 0 )
    {
      v30 = this->m_overallTask.m_ptr;
      if ( v30->m_errorCode == BD_NO_ERROR )
      {
        v30->m_errorCode = BD_OBJECTSTORE_FAILED_TO_START_HTTP;
        v30 = this->m_overallTask.m_ptr;
      }
      v30->m_status = BD_FAILED;
      this->m_state = BD_MAX_STATUS;
    }
    else
    {
      v29 = this->m_overallTask.m_ptr;
      if ( v29->m_errorCode == BD_NO_ERROR && (v28 == BD_PENDING || v28 == BD_TIMED_OUT) )
        v29->m_errorCode = this->m_remoteTask.m_ptr->m_errorCode;
      this->m_state = BD_DONE;
    }
  }
}

/*
==============
bdObjectStoreStreaming::initMultipleUpload
==============
*/
bool bdObjectStoreStreaming::initMultipleUpload(bdObjectStoreStreaming *this, const char *const authorizationHeader, bdStructBufferSerializable *cachedCompleteRequest, bdStructBufferSerializable *cachedCompleteResponse)
{
  bool result; 

  if ( bdObjectStoreStreaming::isReady(this) )
  {
    this->m_authorizationHeader = authorizationHeader;
    result = 1;
    this->m_cachedRequest = cachedCompleteRequest;
    this->m_cachedResponse = cachedCompleteResponse;
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdObjectStore/bdObjectStoreStreaming", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstorestreaming.cpp", "bdObjectStoreStreaming::initMultipleUpload", 0x12Fu, "bdObjectStoreStreaming is not in a ready state to start upload.");
    return 0;
  }
  return result;
}

/*
==============
bdObjectStoreStreaming::initUpload
==============
*/
char bdObjectStoreStreaming::initUpload(bdObjectStoreStreaming *this, const char *const authorizationHeader, const char *const uploadURL, const unsigned __int8 *data, unsigned __int64 contentSize, bdStructBufferSerializable *cachedCompleteRequest, bdStructBufferSerializable *cachedCompleteResponse)
{
  if ( bdObjectStoreStreaming::isReady(this) )
  {
    this->m_authorizationHeader = authorizationHeader;
    this->m_uploadURL = uploadURL;
    bdObjectStoreUploadInterceptor::setData(&this->m_uploadHandler, data, contentSize);
    this->m_cachedRequest = cachedCompleteRequest;
    this->m_cachedResponse = cachedCompleteResponse;
    return 1;
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdObjectStore/bdObjectStoreStreaming", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstorestreaming.cpp", "bdObjectStoreStreaming::initUpload", 0x11Du, "bdObjectStoreStreaming is not in a ready state to start upload.");
    return 0;
  }
}

/*
==============
bdObjectStoreStreaming::initUserSummaryUpload
==============
*/
char bdObjectStoreStreaming::initUserSummaryUpload(bdObjectStoreStreaming *this, const char *const authorizationHeader, const char *const uploadURL, const unsigned __int8 *data, unsigned __int64 contentSize, const bdObjectStoreMetadata *metadata, bdStructBufferSerializable *cachedUserSummaryUploadResponse)
{
  if ( bdObjectStoreStreaming::isReady(this) )
  {
    this->m_authorizationHeader = authorizationHeader;
    this->m_uploadURL = uploadURL;
    bdObjectStoreUploadInterceptor::setData(&this->m_uploadHandler, data, contentSize);
    this->m_metadata = metadata;
    this->m_cachedResponse = cachedUserSummaryUploadResponse;
    return 1;
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdObjectStore/bdObjectStoreStreaming", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstorestreaming.cpp", "bdObjectStoreStreaming::initUserSummaryUpload", 0x142u, "bdObjectStoreStreaming is not in a ready state to start upload of summary.");
    return 0;
  }
}

/*
==============
bdObjectStoreStreaming::isIdle
==============
*/
bool bdObjectStoreStreaming::isIdle(bdObjectStoreStreaming *this)
{
  return !this->m_operation && (this->m_http->getStatus(this->m_http) == BD_PENDING || this->m_http->getStatus(this->m_http) == BD_CANCELLED || this->m_http->getStatus(this->m_http) == BD_MAX_STATUS || this->m_http->getStatus(this->m_http) == (BD_MAX_STATUS|BD_PENDING));
}

/*
==============
bdObjectStoreStreaming::isReady
==============
*/
bool bdObjectStoreStreaming::isReady(bdObjectStoreStreaming *this)
{
  bool result; 

  result = (this->m_remoteTask.m_ptr || (bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdObjectStore/bdObjectStoreStreaming", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstorestreaming.cpp", "bdObjectStoreStreaming::isReady", 0xD5u, "setRemoteTask() must be called"), this->m_remoteTask.m_ptr)) && !this->m_operation && (this->m_http->getStatus(this->m_http) == BD_PENDING || this->m_http->getStatus(this->m_http) == BD_CANCELLED || this->m_http->getStatus(this->m_http) == BD_MAX_STATUS || this->m_http->getStatus(this->m_http) == (BD_MAX_STATUS|BD_PENDING));
  return result;
}

/*
==============
bdObjectStoreStreaming::logUploadProgress
==============
*/
void bdObjectStoreStreaming::logUploadProgress(bdObjectStoreStreaming *this)
{
  unsigned int v7; 
  double v8; 

  __asm { vmovaps [rsp+68h+var_18], xmm6 }
  *(double *)&_XMM0 = ((double (__fastcall *)(bdHTTP *))this->m_http->getUploadRate)(this->m_http);
  __asm
  {
    vmulss  xmm1, xmm0, cs:__real@3a800000
    vcvtss2sd xmm6, xmm1, xmm1
    vmovsd  [rsp+68h+var_28], xmm6
  }
  v7 = this->m_http->getUploadProgress(this->m_http);
  bdLogMessage(BD_LOG_INFO, "info/", "bdObjectStore/bdObjectStoreStreaming", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstorestreaming.cpp", "bdObjectStoreStreaming::logUploadProgress", 0x1A3u, "Uploaded %d @ %.2f KB/sec", v7, v8);
  bdLogMessage(BD_LOG_INFO, "info/", "bdObjectStore/bdObjectStoreStreaming", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstorestreaming.cpp", "bdObjectStoreStreaming::logUploadProgress", 0x1A4u, "Completed upload of object.");
  __asm { vmovaps xmm6, [rsp+68h+var_18] }
}

/*
==============
bdObjectStoreStreaming::postMultipleUpload
==============
*/
bdReference<bdStructBufferTask> *bdObjectStoreStreaming::postMultipleUpload(bdObjectStoreStreaming *this, bdReference<bdStructBufferTask> *result)
{
  bdLobbyErrorCode started; 
  bdLobbyErrorCode v5; 

  result->m_ptr = NULL;
  started = bdRemoteTaskManager::startStructTask(this->m_remoteTaskManager, result, 0xC1u, 0x18u, this->m_cachedRequest, this->m_cachedResponse, this->m_lobbyService);
  if ( started )
  {
    v5 = started;
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdObjectStore", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstorestreaming.cpp", "bdObjectStoreStreaming::postMultipleUpload", 0x224u, "Failed to start task: Error %i", v5);
  }
  return result;
}

/*
==============
bdObjectStoreStreaming::postUpload
==============
*/
bdReference<bdStructBufferTask> *bdObjectStoreStreaming::postUpload(bdObjectStoreStreaming *this, bdReference<bdStructBufferTask> *result)
{
  bdLobbyErrorCode started; 
  bdLobbyErrorCode v5; 

  result->m_ptr = NULL;
  started = bdRemoteTaskManager::startStructTask(this->m_remoteTaskManager, result, 0xC1u, 0xCu, this->m_cachedRequest, this->m_cachedResponse, this->m_lobbyService);
  if ( started )
  {
    v5 = started;
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdObjectStore", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstorestreaming.cpp", "bdObjectStoreStreaming::postUpload", 0x211u, "Failed to start task: Error %i", v5);
  }
  return result;
}

/*
==============
bdObjectStoreStreaming::pump
==============
*/
void bdObjectStoreStreaming::pump(bdObjectStoreStreaming *this)
{
  bdRemoteTask *m_ptr; 
  bool v3; 
  bdStructBufferTask *v4; 
  bdTask::bdStatus v5; 
  bdRemoteTask *v6; 
  bdObjectStoreStreaming::bdStatus v7; 
  bdObjectStoreStreaming::bdStatus v8; 
  int v9; 
  bdTask::bdStatus v10; 
  bdRemoteTask *v11; 
  bdObjectStoreStreaming::bdStatus m_state; 
  bdObjectStoreStreaming::bdStatus v13; 

  if ( this->m_operation )
  {
    m_ptr = this->m_overallTask.m_ptr;
    if ( m_ptr )
    {
      if ( m_ptr->getStatus(m_ptr) == BD_CANCELLED )
      {
        if ( this->m_overallTask.m_ptr )
        {
          v3 = this->m_http->getStatus(this->m_http) == BD_TIMED_OUT;
          if ( this->m_state == BD_DONE && !v3 )
          {
            bdLogMessage(BD_LOG_WARNING, "warn/", "bdObjectStore/bdObjectStoreStreaming", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstorestreaming.cpp", "bdObjectStoreStreaming::abortHTTPOperation", 0x85u, "Aborting HTTP operation");
            this->m_http->abortOperation(this->m_http);
          }
          bdRemoteTask::cancelTask(this->m_overallTask.m_ptr);
          v4 = this->m_remoteTask.m_ptr;
          if ( v4 )
            bdRemoteTask::cancelTask(v4);
        }
        this->m_state = BD_MAX_STATUS;
        this->m_operation = 0;
      }
    }
  }
  switch ( this->m_state )
  {
    case BD_PENDING:
      v10 = this->m_remoteTask.m_ptr->getStatus(this->m_remoteTask.m_ptr);
      if ( v10 == BD_DONE )
      {
        bdLogMessage(BD_LOG_INFO, "info/", "bdObjectStore/bdObjectStoreStreaming", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstorestreaming.cpp", "bdObjectStoreStreaming::pumpPreHTTP", 0x17Eu, "Pre HTTP complete.");
        this->initHTTP(this);
      }
      else if ( v10 != BD_PENDING )
      {
        v11 = this->m_overallTask.m_ptr;
        if ( v11->m_errorCode == BD_NO_ERROR )
        {
          m_state = this->m_state;
          if ( m_state == BD_PENDING || m_state == BD_TIMED_OUT )
          {
            v11->m_errorCode = this->m_remoteTask.m_ptr->m_errorCode;
            v11 = this->m_overallTask.m_ptr;
          }
        }
        v11->m_status = BD_FAILED;
        this->m_state = 9;
      }
      break;
    case BD_DONE:
      v9 = ((__int64 (__fastcall *)(bdHTTP *))this->m_http->getStatus)(this->m_http) - 5;
      if ( v9 )
      {
        if ( v9 == 1 )
          bdObjectStoreStreaming::exitHTTPFailed(this);
      }
      else
      {
        bdObjectStoreStreaming::exitHTTP(this);
      }
      break;
    case BD_TIMED_OUT:
      v5 = this->m_remoteTask.m_ptr->getStatus(this->m_remoteTask.m_ptr);
      if ( v5 != BD_PENDING )
      {
        v6 = this->m_overallTask.m_ptr;
        v7 = (v5 != BD_DONE) + 5;
        if ( v6->m_errorCode == BD_NO_ERROR )
        {
          v8 = this->m_state;
          if ( v8 == BD_PENDING || v8 == BD_TIMED_OUT )
            v6->m_errorCode = this->m_remoteTask.m_ptr->m_errorCode;
        }
        if ( v7 == BD_CANCELLED )
        {
          this->m_overallTask.m_ptr->m_status = (this->m_overallTask.m_ptr->m_errorCode != BD_NO_ERROR) + 2;
          this->m_state = BD_CANCELLED;
        }
        else
        {
          if ( v7 == BD_MAX_STATUS )
            this->m_overallTask.m_ptr->m_status = BD_FAILED;
          this->m_state = v7;
        }
      }
      break;
  }
  v13 = this->m_state;
  if ( ((v13 - 5) & 0xFFFFFFFA) == 0 && v13 != 10 )
    this->m_operation = 0;
}

/*
==============
bdObjectStoreStreaming::pumpHTTP
==============
*/
void bdObjectStoreStreaming::pumpHTTP(bdObjectStoreStreaming *this)
{
  int v2; 

  v2 = ((__int64 (__fastcall *)(bdHTTP *))this->m_http->getStatus)(this->m_http) - 5;
  if ( v2 )
  {
    if ( v2 == 1 )
      bdObjectStoreStreaming::exitHTTPFailed(this);
  }
  else
  {
    bdObjectStoreStreaming::exitHTTP(this);
  }
}

/*
==============
bdObjectStoreStreaming::pumpPreHTTP
==============
*/
void bdObjectStoreStreaming::pumpPreHTTP(bdObjectStoreStreaming *this)
{
  bdTask::bdStatus v2; 
  bdRemoteTask *m_ptr; 
  bdObjectStoreStreaming::bdStatus m_state; 

  v2 = this->m_remoteTask.m_ptr->getStatus(this->m_remoteTask.m_ptr);
  if ( v2 == BD_DONE )
  {
    bdLogMessage(BD_LOG_INFO, "info/", "bdObjectStore/bdObjectStoreStreaming", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstorestreaming.cpp", "bdObjectStoreStreaming::pumpPreHTTP", 0x17Eu, "Pre HTTP complete.");
    this->initHTTP(this);
  }
  else if ( v2 != BD_PENDING )
  {
    m_ptr = this->m_overallTask.m_ptr;
    if ( m_ptr->m_errorCode == BD_NO_ERROR )
    {
      m_state = this->m_state;
      if ( m_state == BD_PENDING || m_state == BD_TIMED_OUT )
      {
        m_ptr->m_errorCode = this->m_remoteTask.m_ptr->m_errorCode;
        m_ptr = this->m_overallTask.m_ptr;
      }
    }
    m_ptr->m_status = BD_FAILED;
    this->m_state = 9;
  }
}

/*
==============
bdObjectStoreStreaming::reset
==============
*/
void bdObjectStoreStreaming::reset(bdObjectStoreStreaming *this)
{
  *(_QWORD *)&this->m_operation = 0i64;
}

/*
==============
bdObjectStoreStreaming::setContentRangeHeader
==============
*/
void bdObjectStoreStreaming::setContentRangeHeader(bdObjectStoreStreaming *this, bdObjectStoreHTTPHeader *header)
{
  bdObjectStoreHTTPHeader_vtbl **v4; 
  unsigned __int64 v5; 
  size_t v6; 
  unsigned __int64 ContentSize; 

  v4 = &header->__vftable + 2;
  bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v5 = -1i64;
  do
    ++v5;
  while ( aContentRange[v5] );
  if ( v4 )
  {
    v6 = 99i64;
    if ( v5 < 0x63 )
      v6 = v5;
    memcpy_0(v4, "Content-Range", v6);
    *((_BYTE *)v4 + v6) = 0;
  }
  ContentSize = bdObjectStoreUploadInterceptor::getContentSize(&this->m_uploadHandler);
  bdSnprintf(header->m_value, 0x1000ui64, "bytes 0-/%I64u", ContentSize);
}

/*
==============
bdObjectStoreStreaming::setFailedStateFromHTTPError
==============
*/
_BOOL8 bdObjectStoreStreaming::setFailedStateFromHTTPError(bdObjectStoreStreaming *this)
{
  bool Object; 
  bdLobbyErrorCode LobbyErrorCodeFromErrorName; 
  bdRemoteTask *m_ptr; 
  bdObjectStoreStreaming::bdStatus m_state; 
  bdJSONDeserializer value; 
  bdJSONDeserializer v8; 
  char errorName[112]; 

  bdJSONDeserializer::bdJSONDeserializer(&v8, this->m_replyBuffer);
  bdJSONDeserializer::bdJSONDeserializer(&value);
  Object = bdJSONDeserializer::getObject(&v8, "error", &value);
  if ( Object )
  {
    if ( bdJSONDeserializer::getString(&value, (const char *const)&stru_143C9A1A4, errorName, 0x64u) )
    {
      Object = 1;
      LobbyErrorCodeFromErrorName = bdObjectStoreErrors::getLobbyErrorCodeFromErrorName(errorName);
      m_ptr = this->m_overallTask.m_ptr;
      if ( m_ptr->m_errorCode == BD_NO_ERROR )
      {
        if ( LobbyErrorCodeFromErrorName )
        {
          m_ptr->m_errorCode = LobbyErrorCodeFromErrorName;
        }
        else
        {
          m_state = this->m_state;
          if ( m_state == BD_PENDING || m_state == BD_TIMED_OUT )
            m_ptr->m_errorCode = this->m_remoteTask.m_ptr->m_errorCode;
        }
      }
      this->m_overallTask.m_ptr->m_status = BD_FAILED;
      this->m_state = BD_MAX_STATUS;
    }
    else
    {
      Object = 0;
    }
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdObjectStore/bdObjectStoreStreaming", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstorestreaming.cpp", "bdObjectStoreStreaming::setFailedStateFromHTTPError", 0x265u, "Reply was not valid json.");
  }
  bdJSONDeserializer::~bdJSONDeserializer(&value);
  bdJSONDeserializer::~bdJSONDeserializer(&v8);
  return Object;
}

/*
==============
bdObjectStoreStreaming::setRemoteTask
==============
*/
void bdObjectStoreStreaming::setRemoteTask(bdObjectStoreStreaming *this, bdReference<bdStructBufferTask> *remoteTask)
{
  *(_QWORD *)&this->m_operation = 0i64;
  bdReference<bdStructBufferTask>::operator=(&this->m_remoteTask, remoteTask);
}

/*
==============
bdObjectStoreStreaming::setState
==============
*/
void bdObjectStoreStreaming::setState(bdObjectStoreStreaming *this, bdObjectStoreStreaming::bdStatus newState, bdLobbyErrorCode errorCode)
{
  bdRemoteTask *m_ptr; 
  bdObjectStoreStreaming::bdStatus m_state; 

  m_ptr = this->m_overallTask.m_ptr;
  if ( m_ptr->m_errorCode == BD_NO_ERROR )
  {
    if ( errorCode )
    {
      m_ptr->m_errorCode = errorCode;
    }
    else
    {
      m_state = this->m_state;
      if ( m_state == BD_PENDING || m_state == BD_TIMED_OUT )
        m_ptr->m_errorCode = this->m_remoteTask.m_ptr->m_errorCode;
    }
  }
  if ( newState == BD_CANCELLED )
  {
    this->m_overallTask.m_ptr->m_status = (this->m_overallTask.m_ptr->m_errorCode != BD_NO_ERROR) + 2;
    this->m_state = BD_CANCELLED;
  }
  else
  {
    if ( newState == BD_MAX_STATUS || newState == 9 )
      this->m_overallTask.m_ptr->m_status = BD_FAILED;
    this->m_state = newState;
  }
}

/*
==============
bdObjectStoreStreaming::setUploadStateForIndex
==============
*/
void bdObjectStoreStreaming::setUploadStateForIndex(bdObjectStoreStreaming *this)
{
  bdStructBufferSerializable *m_cachedRequest; 
  bdObjectStoreCompleteUploadSessionsRequest *v3; 
  bdObjectStoreUploadSession *NextUploadSession; 
  bdObjectStoreObject *NextObject; 
  unsigned __int64 ContentSize; 
  const unsigned __int8 *Content; 

  m_cachedRequest = this->m_cachedRequest;
  v3 = (bdObjectStoreCompleteUploadSessionsRequest *)&m_cachedRequest[-1];
  if ( !m_cachedRequest )
    v3 = NULL;
  NextUploadSession = bdObjectStoreCompleteUploadSessionsRequest::getNextUploadSession(v3);
  this->m_uploadURL = bdObjectStoreUploadSession::getUploadURL(NextUploadSession);
  NextObject = (bdObjectStoreObject *)bdObjectStoreCompleteUploadSessionsRequest::getNextObject(v3);
  ContentSize = bdObjectStoreObject::getContentSize(NextObject);
  Content = bdObjectStoreObject::getContent(NextObject);
  bdObjectStoreUploadInterceptor::setData(&this->m_uploadHandler, Content, ContentSize);
}

/*
==============
bdObjectStoreStreaming::start
==============
*/
bdReference<bdRemoteTask> *bdObjectStoreStreaming::start(bdObjectStoreStreaming *this, bdReference<bdRemoteTask> *result, bdObjectStoreStreaming::bdObjectStoreOperation operation)
{
  bdRemoteTask *v6; 
  bdRemoteTask *v7; 
  bdRemoteTask *v8; 
  bdRemoteTask *m_ptr; 
  bdRemoteTask *v10; 
  bdRemoteTask *v12; 
  bdObjectStoreStreaming::bdStatus m_state; 

  this->m_operation = operation;
  v6 = (bdRemoteTask *)bdMemory::allocate(0x68ui64);
  if ( v6 )
  {
    bdRemoteTask::bdRemoteTask(v6);
    v8 = v7;
  }
  else
  {
    v8 = NULL;
  }
  m_ptr = this->m_overallTask.m_ptr;
  if ( m_ptr )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
    {
      v10 = this->m_overallTask.m_ptr;
      if ( v10 )
        ((void (__fastcall *)(bdRemoteTask *, __int64))v10->~bdReferencable)(v10, 1i64);
    }
  }
  this->m_overallTask.m_ptr = v8;
  if ( v8 )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)&v8->m_refCount, 1u);
    v8 = this->m_overallTask.m_ptr;
  }
  __asm { vxorps  xmm1, xmm1, xmm1 }
  ((void (__fastcall *)(bdRemoteTask *))v8->start)(v8);
  v12 = this->m_overallTask.m_ptr;
  if ( v12->m_errorCode == BD_NO_ERROR )
  {
    m_state = this->m_state;
    if ( m_state == BD_PENDING || m_state == BD_TIMED_OUT )
    {
      v12->m_errorCode = this->m_remoteTask.m_ptr->m_errorCode;
      v12 = this->m_overallTask.m_ptr;
    }
  }
  this->m_state = BD_PENDING;
  result->m_ptr = v12;
  if ( v12 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v12->m_refCount, 1u);
  return result;
}

/*
==============
bdObjectStoreStreaming::startContentDownload
==============
*/
__int64 bdObjectStoreStreaming::startContentDownload(bdObjectStoreStreaming *this, const char *const downloadURL, bdDownloadInterceptor *downloadInterceptor, unsigned __int64 transactionID, const char *authorizationHeader)
{
  char v9; 
  char v10; 
  char buf[24]; 

  bdLogMessage(BD_LOG_INFO, "info/", "bdObjectStore/bdObjectStoreStreaming", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstorestreaming.cpp", "bdObjectStoreStreaming::startContentDownload", 0x29Cu, "Starting HTTP GET of [%s]", downloadURL);
  v9 = ((__int64 (__fastcall *)(bdHTTP *, __int64, const char *const))this->m_http->initRequest)(this->m_http, 1i64, downloadURL);
  this->m_operation = 1;
  v10 = v9;
  bdSnprintf(buf, 0x15ui64, "%I64u", transactionID);
  if ( !v10 || !this->m_http->setHeader(this->m_http, "DW-Transaction", buf) || !this->m_http->setHeader(this->m_http, "Authorization", authorizationHeader) || !this->m_http->setDownloadHandler(this->m_http, downloadInterceptor) || this->m_http->sendRequest(this->m_http) != BD_FAILED )
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdObjectStore/bdObjectStoreStreaming", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstorestreaming.cpp", "bdObjectStoreStreaming::startContentDownload", 0x2B5u, "Failed to start GET from %s", downloadURL);
  return ((__int64 (__fastcall *)(bdHTTP *))this->m_http->getStatus)(this->m_http);
}

/*
==============
bdObjectStoreStreaming::startContentUpload
==============
*/
__int64 bdObjectStoreStreaming::startContentUpload(bdObjectStoreStreaming *this, const char *const uploadURL, unsigned __int64 transactionID, const char *authorizationHeader, bdObjectStoreHTTPHeader *extraHeaders, unsigned int numExtraHeaders)
{
  char v10; 
  bool v11; 
  unsigned int i; 
  bdHTTP *m_http; 
  bool (__fastcall *setUploadHandler)(bdHTTP *, bdUploadInterceptor *, unsigned int); 
  unsigned int ContentSize; 
  char buf[24]; 

  bdLogMessage(BD_LOG_INFO, "info/", "bdHTTPWrapper", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstorestreaming.cpp", "bdObjectStoreStreaming::startContentUpload", 0x271u, "Starting HTTP PUT of [%s]", uploadURL);
  v10 = ((__int64 (__fastcall *)(bdHTTP *, __int64, const char *const))this->m_http->initRequest)(this->m_http, 4i64, uploadURL);
  bdSnprintf(buf, 0x15ui64, "%I64u", transactionID);
  v11 = v10 && this->m_http->setHeader(this->m_http, "DW-Transaction", buf);
  for ( i = 0; i < numExtraHeaders; ++i )
    v11 = v11 && this->m_http->setHeader(this->m_http, (const char *)(&extraHeaders[i].__vftable + 2), extraHeaders[i].m_value);
  if ( !v11 || !this->m_http->setHeader(this->m_http, "Content-Type", "application/octet-stream") || !this->m_http->setHeader(this->m_http, "Authorization", authorizationHeader) || (m_http = this->m_http, setUploadHandler = m_http->setUploadHandler, ContentSize = bdObjectStoreUploadInterceptor::getContentSize(&this->m_uploadHandler), !setUploadHandler(m_http, &this->m_uploadHandler, ContentSize)) || !bdHTTP::setDownloadBuffer(this->m_http, this->m_replyBuffer, 0x400u) || this->m_http->sendRequest(this->m_http) != BD_FAILED )
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdObjectStoreStreaming/bdObjectStoreStreaming", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstorestreaming.cpp", "bdObjectStoreStreaming::startContentUpload", 0x292u, "Failed to start PUT from %s", uploadURL);
  return ((__int64 (__fastcall *)(bdHTTP *))this->m_http->getStatus)(this->m_http);
}

/*
==============
bdObjectStoreStreaming::startDownload
==============
*/
bdReference<bdRemoteTask> *bdObjectStoreStreaming::startDownload(bdObjectStoreStreaming *this, bdReference<bdRemoteTask> *result)
{
  bdObjectStoreStreaming::start(this, result, BD_CREATING);
  return result;
}

/*
==============
bdObjectStoreStreaming::startMultipleUpload
==============
*/
bdReference<bdRemoteTask> *bdObjectStoreStreaming::startMultipleUpload(bdObjectStoreStreaming *this, bdReference<bdRemoteTask> *result)
{
  bdObjectStoreStreaming::start(this, result, BD_FINISHED);
  return result;
}

/*
==============
bdObjectStoreStreaming::startUpload
==============
*/
bdReference<bdRemoteTask> *bdObjectStoreStreaming::startUpload(bdObjectStoreStreaming *this, bdReference<bdRemoteTask> *result)
{
  bdObjectStoreStreaming::start(this, result, BD_RUNNING);
  return result;
}

/*
==============
bdObjectStoreStreaming::startUserSummaryUpload
==============
*/
bdReference<bdRemoteTask> *bdObjectStoreStreaming::startUserSummaryUpload(bdObjectStoreStreaming *this, bdReference<bdRemoteTask> *result)
{
  bdObjectStoreStreaming::start(this, result, BD_STOPPING);
  return result;
}

