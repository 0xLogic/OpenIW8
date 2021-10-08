/*
==============
bdCSHTTPWrapperImpl::~bdCSHTTPWrapperImpl
==============
*/

void __fastcall bdCSHTTPWrapperImpl::~bdCSHTTPWrapperImpl(bdCSHTTPWrapperImpl *this)
{
  ??1bdCSHTTPWrapperImpl@@UEAA@XZ(this);
}

/*
==============
bdCSHTTPWrapperImpl::abortInProgress
==============
*/

bool __fastcall bdCSHTTPWrapperImpl::abortInProgress(bdCSHTTPWrapperImpl *this)
{
  return ?abortInProgress@bdCSHTTPWrapperImpl@@UEBA_NXZ(this);
}

/*
==============
bdCSHTTPWrapperImpl::abortOperation
==============
*/

void __fastcall bdCSHTTPWrapperImpl::abortOperation(bdCSHTTPWrapperImpl *this)
{
  ?abortOperation@bdCSHTTPWrapperImpl@@UEAAXXZ(this);
}

/*
==============
bdCSHTTPWrapperImpl::enableVerboseOutput
==============
*/

void __fastcall bdCSHTTPWrapperImpl::enableVerboseOutput(bdCSHTTPWrapperImpl *this, bool enable)
{
  ?enableVerboseOutput@bdCSHTTPWrapperImpl@@UEAAX_N@Z(this, enable);
}

/*
==============
bdCSHTTPWrapperImpl::bdCSHTTPWrapperImpl
==============
*/

void __fastcall bdCSHTTPWrapperImpl::bdCSHTTPWrapperImpl(bdCSHTTPWrapperImpl *this)
{
  ??0bdCSHTTPWrapperImpl@@QEAA@XZ(this);
}

/*
==============
bdCSHTTPWrapperImpl::run
==============
*/

unsigned int __fastcall bdCSHTTPWrapperImpl::run(bdCSHTTPWrapperImpl *this, void *args)
{
  return ?run@bdCSHTTPWrapperImpl@@UEAAIPEAX@Z(this, args);
}

/*
==============
bdCSHTTPWrapperImpl::startCopy
==============
*/

bdCSHTTPWrapper::bdStatus __fastcall bdCSHTTPWrapperImpl::startCopy(bdCSHTTPWrapperImpl *this, const char *const copyURL, const char *const destination, unsigned __int64 transactionID)
{
  return ?startCopy@bdCSHTTPWrapperImpl@@UEAA?AW4bdStatus@bdCSHTTPWrapper@@QEBD0_K@Z(this, copyURL, destination, transactionID);
}

/*
==============
bdCSHTTPWrapperImpl::getStatus
==============
*/

bdCSHTTPWrapper::bdStatus __fastcall bdCSHTTPWrapperImpl::getStatus(bdCSHTTPWrapperImpl *this)
{
  return ?getStatus@bdCSHTTPWrapperImpl@@UEAA?AW4bdStatus@bdCSHTTPWrapper@@XZ(this);
}

/*
==============
bdCSHTTPWrapperImpl::enableProgressMeter
==============
*/

void __fastcall bdCSHTTPWrapperImpl::enableProgressMeter(bdCSHTTPWrapperImpl *this, bool enable)
{
  ?enableProgressMeter@bdCSHTTPWrapperImpl@@UEAAX_N@Z(this, enable);
}

/*
==============
bdCSHTTPWrapperImpl::resetTransferStats
==============
*/

void __fastcall bdCSHTTPWrapperImpl::resetTransferStats(bdCSHTTPWrapperImpl *this)
{
  ?resetTransferStats@bdCSHTTPWrapperImpl@@UEAAXXZ(this);
}

/*
==============
bdCSHTTPWrapperImpl::_startUpload
==============
*/

bdCSHTTPWrapper::bdStatus __fastcall bdCSHTTPWrapperImpl::_startUpload(bdCSHTTPWrapperImpl *this, const char *const uploadURL, const void *const fileData, bdUploadInterceptor *uploadHandler, unsigned int uploadSize, unsigned __int64 transactionID, char *checksum, void *const replyBuffer, unsigned int replyBufferSize, bdCSHTTPWrapper::bdHTTPHeader *extraHeaders, unsigned int numExtraHeaders)
{
  return ?_startUpload@bdCSHTTPWrapperImpl@@MEAA?AW4bdStatus@bdCSHTTPWrapper@@QEBDQEBXPEAVbdUploadInterceptor@@I_KPEADQEAXIPEAUbdHTTPHeader@3@I@Z(this, uploadURL, fileData, uploadHandler, uploadSize, transactionID, checksum, replyBuffer, replyBufferSize, extraHeaders, numExtraHeaders);
}

/*
==============
bdCSHTTPWrapperImpl::getTransferSpeed
==============
*/

double __fastcall bdCSHTTPWrapperImpl::getTransferSpeed(bdCSHTTPWrapperImpl *this)
{
  double result; 

  *(float *)&result = ?getTransferSpeed@bdCSHTTPWrapperImpl@@UEAAMXZ(this);
  return result;
}

/*
==============
bdCSHTTPWrapperImpl::getLastHTTPError
==============
*/

int __fastcall bdCSHTTPWrapperImpl::getLastHTTPError(bdCSHTTPWrapperImpl *this)
{
  return ?getLastHTTPError@bdCSHTTPWrapperImpl@@UEBAHXZ(this);
}

/*
==============
bdCSHTTPWrapperImpl::_startDownload
==============
*/

bdCSHTTPWrapper::bdStatus __fastcall bdCSHTTPWrapperImpl::_startDownload(bdCSHTTPWrapperImpl *this, const char *const downloadURL, void *const downloadBuffer, unsigned int bufferSize, bdDownloadInterceptor *downloadHandler, unsigned __int64 transactionID, unsigned int startRange, unsigned int endRange, bdCSHTTPWrapper::bdHTTPHeader *__formal, unsigned int a10)
{
  return ?_startDownload@bdCSHTTPWrapperImpl@@MEAA?AW4bdStatus@bdCSHTTPWrapper@@QEBDQEAXIPEAVbdDownloadInterceptor@@_KIIPEAUbdHTTPHeader@3@I@Z(this, downloadURL, downloadBuffer, bufferSize, downloadHandler, transactionID, startRange, endRange, __formal, a10);
}

/*
==============
bdCSHTTPWrapperImpl::getTransferProgress
==============
*/

unsigned int __fastcall bdCSHTTPWrapperImpl::getTransferProgress(bdCSHTTPWrapperImpl *this)
{
  return ?getTransferProgress@bdCSHTTPWrapperImpl@@UEBAIXZ(this);
}

/*
==============
bdCSHTTPWrapperImpl::startDelete
==============
*/

bdCSHTTPWrapper::bdStatus __fastcall bdCSHTTPWrapperImpl::startDelete(bdCSHTTPWrapperImpl *this, const char *const deleteURL, unsigned __int64 transactionID, bdCSHTTPWrapper::bdHTTPHeader *extraHeaders, unsigned int numExtraHeaders, void *const replyBuffer, unsigned int replyBufferLength)
{
  return ?startDelete@bdCSHTTPWrapperImpl@@UEAA?AW4bdStatus@bdCSHTTPWrapper@@QEBD_KPEAUbdHTTPHeader@3@IQEAXI@Z(this, deleteURL, transactionID, extraHeaders, numExtraHeaders, replyBuffer, replyBufferLength);
}

/*
==============
bdCSHTTPWrapperImpl::getInternalError
==============
*/

int __fastcall bdCSHTTPWrapperImpl::getInternalError(bdCSHTTPWrapperImpl *this)
{
  return ?getInternalError@bdCSHTTPWrapperImpl@@UEBAHXZ(this);
}

/*
==============
bdCSHTTPWrapperImpl::finalize
==============
*/

void __fastcall bdCSHTTPWrapperImpl::finalize(bdCSHTTPWrapperImpl *this)
{
  ?finalize@bdCSHTTPWrapperImpl@@UEAAXXZ(this);
}

/*
==============
bdCSHTTPWrapperImpl::isOkayToStart
==============
*/

bool __fastcall bdCSHTTPWrapperImpl::isOkayToStart(bdCSHTTPWrapperImpl *this)
{
  return ?isOkayToStart@bdCSHTTPWrapperImpl@@UEBA_NXZ(this);
}

/*
==============
bdCSHTTPWrapperImpl::startPost
==============
*/

bdCSHTTPWrapper::bdStatus __fastcall bdCSHTTPWrapperImpl::startPost(bdCSHTTPWrapperImpl *this, const char *const postURL, const void *content, int contentLength, void *replyBuffer, unsigned int replyBufferLength, bdDownloadInterceptor *downloadHandler, const char *contentType, unsigned __int64 transactionID, bdCSHTTPWrapper::bdHTTPHeader *extraHeaders, unsigned int numExtraHeaders)
{
  return ?startPost@bdCSHTTPWrapperImpl@@UEAA?AW4bdStatus@bdCSHTTPWrapper@@QEBDPEBXHPEAXIPEAVbdDownloadInterceptor@@PEBD_KPEAUbdHTTPHeader@3@I@Z(this, postURL, content, contentLength, replyBuffer, replyBufferLength, downloadHandler, contentType, transactionID, extraHeaders, numExtraHeaders);
}

/*
==============
bdCSHTTPWrapperImpl::bdCSHTTPWrapperImpl
==============
*/
void bdCSHTTPWrapperImpl::bdCSHTTPWrapperImpl(bdCSHTTPWrapperImpl *this)
{
  bdHTTP *v2; 
  bdHTTPXboxOne *v3; 
  bdHTTP *v4; 

  v2 = NULL;
  this->m_refCount.m_value._My_val = 0;
  this->__vftable = (bdCSHTTPWrapperImpl_vtbl *)&bdCSHTTPWrapperImpl::`vftable';
  this->m_http = NULL;
  this->m_abortOperation = 0;
  this->m_operation = BD_IDLE;
  v3 = (bdHTTPXboxOne *)bdMemory::allocate(0x9408ui64);
  if ( v3 )
  {
    bdHTTPXboxOne::bdHTTPXboxOne(v3, 0, 0);
    v2 = v4;
  }
  this->m_http = v2;
}

/*
==============
bdCSHTTPWrapperImpl::~bdCSHTTPWrapperImpl
==============
*/
void bdCSHTTPWrapperImpl::~bdCSHTTPWrapperImpl(bdCSHTTPWrapperImpl *this)
{
  bdHTTP *m_http; 

  this->__vftable = (bdCSHTTPWrapperImpl_vtbl *)&bdCSHTTPWrapperImpl::`vftable';
  m_http = this->m_http;
  if ( m_http )
    ((void (__fastcall *)(bdHTTP *, __int64))m_http->~bdHTTP)(m_http, 1i64);
  this->__vftable = (bdCSHTTPWrapperImpl_vtbl *)&bdCSHTTPWrapper::`vftable';
  bdReferencable::~bdReferencable(this);
}

/*
==============
bdCSHTTPWrapperImpl::_startDownload
==============
*/
__int64 bdCSHTTPWrapperImpl::_startDownload(bdCSHTTPWrapperImpl *this, const char *const downloadURL, void *const downloadBuffer, unsigned int bufferSize, bdDownloadInterceptor *downloadHandler, unsigned __int64 transactionID, unsigned int startRange, unsigned int endRange)
{
  char v12; 
  bool v13; 
  __int64 result; 
  char *function; 
  char buf[40]; 

  bdLogMessage(BD_LOG_INFO, "info/", "bdLobby/bdHTTPWrapper/bdCSHTTPWrapperImpl", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcontentstreaming\\bdcshttpwrapperimpl.cpp", "bdCSHTTPWrapperImpl::_startDownload", 0x12Cu, "Starting HTTP GET of [%s]", downloadURL);
  v12 = ((__int64 (__fastcall *)(bdHTTP *, __int64, const char *const))this->m_http->initRequest)(this->m_http, 1i64, downloadURL);
  this->m_operation = BD_RUNNING;
  this->m_abortOperation = 0;
  if ( transactionID )
  {
    bdSnprintf(buf, 0x15ui64, "%I64u", transactionID);
    if ( !v12 )
      goto LABEL_17;
    v13 = !this->m_http->setHeader(this->m_http, "X-TransactionID", buf);
  }
  else
  {
    v13 = v12 == 0;
  }
  if ( v13 )
    goto LABEL_17;
  if ( startRange )
  {
    if ( !endRange )
    {
      bdSnprintf(buf, 0x28ui64, "bytes=%u-", startRange);
LABEL_12:
      if ( !this->m_http->setHeader(this->m_http, "range", buf) )
        goto LABEL_17;
      goto LABEL_13;
    }
LABEL_10:
    LODWORD(function) = endRange;
    bdSnprintf(buf, 0x28ui64, "bytes=%u-%u", startRange, function);
    goto LABEL_12;
  }
  if ( endRange )
    goto LABEL_10;
LABEL_13:
  if ( this->m_http->setDownloadBuffer(this->m_http, (char *)downloadBuffer, bufferSize) && this->m_http->setDownloadHandler(this->m_http, downloadHandler) )
  {
    result = ((__int64 (__fastcall *)(bdHTTP *))this->m_http->sendRequest)(this->m_http);
    if ( (_DWORD)result == 3 )
    {
      this->m_status = BD_FAILED;
      return result;
    }
  }
LABEL_17:
  bdLogMessage(BD_LOG_WARNING, "warn/", "bdLobby/bdHTTPWrapper/bdCSHTTPWrapperImpl", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcontentstreaming\\bdcshttpwrapperimpl.cpp", "bdCSHTTPWrapperImpl::_startDownload", 0x156u, "Failed to start GET from %s", downloadURL);
  return (unsigned int)this->m_status;
}

/*
==============
bdCSHTTPWrapperImpl::_startUpload
==============
*/
__int64 bdCSHTTPWrapperImpl::_startUpload(bdCSHTTPWrapperImpl *this, const char *const uploadURL, const void *const fileData, bdUploadInterceptor *uploadHandler, unsigned int uploadSize, unsigned __int64 transactionID, char *checksum, void *const replyBuffer, unsigned int replyBufferSize, bdCSHTTPWrapper::bdHTTPHeader *extraHeaders, unsigned int numExtraHeaders)
{
  char *v11; 
  char v17; 
  __int64 v18; 
  __int64 result; 
  char buf[24]; 

  v11 = (char *)replyBuffer;
  bdLogMessage(BD_LOG_INFO, "info/", "bdLobby/bdHTTPWrapper/bdCSHTTPWrapperImpl", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcontentstreaming\\bdcshttpwrapperimpl.cpp", "bdCSHTTPWrapperImpl::_startUpload", 0x166u, "Starting HTTP PUT of [%s]", uploadURL);
  v17 = ((__int64 (__fastcall *)(bdHTTP *, __int64, const char *const))this->m_http->initRequest)(this->m_http, 4i64, uploadURL);
  this->m_operation = BD_CREATING;
  this->m_abortOperation = 0;
  if ( transactionID )
  {
    bdSnprintf(buf, 0x15ui64, "%I64u", transactionID);
    v17 = v17 && this->m_http->setHeader(this->m_http, "X-TransactionID", buf);
  }
  if ( numExtraHeaders )
  {
    v18 = numExtraHeaders;
    do
    {
      v17 = v17 && this->m_http->setHeader(this->m_http, extraHeaders->key, extraHeaders->value);
      ++extraHeaders;
      --v18;
    }
    while ( v18 );
    v11 = (char *)replyBuffer;
  }
  if ( v17 && checksum )
    v17 = this->m_http->setHeader(this->m_http, "X-Checksum", checksum);
  if ( fileData )
    v17 = v17 && this->m_http->setUploadData(this->m_http, (const char *)fileData, uploadSize);
  if ( v17 && (!uploadHandler || this->m_http->setUploadHandler(this->m_http, uploadHandler, uploadSize)) && this->m_http->setDownloadBuffer(this->m_http, v11, replyBufferSize) && (result = ((__int64 (__fastcall *)(bdHTTP *))this->m_http->sendRequest)(this->m_http), (_DWORD)result == 3) )
  {
    this->m_status = BD_FAILED;
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdLobby/bdHTTPWrapper/bdCSHTTPWrapperImpl", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcontentstreaming\\bdcshttpwrapperimpl.cpp", "bdCSHTTPWrapperImpl::_startUpload", 0x195u, "Failed to start PUT from %s", uploadURL);
    return (unsigned int)this->m_status;
  }
  return result;
}

/*
==============
bdCSHTTPWrapperImpl::abortInProgress
==============
*/
_BOOL8 bdCSHTTPWrapperImpl::abortInProgress(bdCSHTTPWrapperImpl *this)
{
  return this->m_abortOperation;
}

/*
==============
bdCSHTTPWrapperImpl::abortOperation
==============
*/
void bdCSHTTPWrapperImpl::abortOperation(bdCSHTTPWrapperImpl *this)
{
  this->m_abortOperation = 1;
  this->m_http->abortOperation(this->m_http);
  this->m_status = BD_CANCELLED;
}

/*
==============
bdCSHTTPWrapperImpl::enableProgressMeter
==============
*/
void bdCSHTTPWrapperImpl::enableProgressMeter(bdCSHTTPWrapperImpl *this, bool enable)
{
  ;
}

/*
==============
bdCSHTTPWrapperImpl::enableVerboseOutput
==============
*/
void bdCSHTTPWrapperImpl::enableVerboseOutput(bdCSHTTPWrapperImpl *this, bool enable)
{
  ;
}

/*
==============
bdCSHTTPWrapperImpl::finalize
==============
*/
void bdCSHTTPWrapperImpl::finalize(bdCSHTTPWrapperImpl *this)
{
  ;
}

/*
==============
bdCSHTTPWrapperImpl::getInternalError
==============
*/
__int64 bdCSHTTPWrapperImpl::getInternalError(bdCSHTTPWrapperImpl *this)
{
  return ((__int64 (__fastcall *)(bdHTTP *))this->m_http->getInternalError)(this->m_http);
}

/*
==============
bdCSHTTPWrapperImpl::getLastHTTPError
==============
*/
__int64 bdCSHTTPWrapperImpl::getLastHTTPError(bdCSHTTPWrapperImpl *this)
{
  return ((__int64 (__fastcall *)(bdHTTP *))this->m_http->getLastHTTPStatus)(this->m_http);
}

/*
==============
bdCSHTTPWrapperImpl::getStatus
==============
*/
__int64 bdCSHTTPWrapperImpl::getStatus(bdCSHTTPWrapperImpl *this)
{
  int v2; 

  v2 = ((__int64 (__fastcall *)(bdHTTP *))this->m_http->getStatus)(this->m_http) - 5;
  if ( v2 )
  {
    if ( v2 == 1 )
    {
      this->m_status = BD_MAX_STATUS;
      return (unsigned int)this->m_status;
    }
  }
  else
  {
    this->m_status = BD_TIMED_OUT;
  }
  return (unsigned int)this->m_status;
}

/*
==============
bdCSHTTPWrapperImpl::getTransferProgress
==============
*/
__int64 bdCSHTTPWrapperImpl::getTransferProgress(bdCSHTTPWrapperImpl *this)
{
  bool v1; 
  bdHTTP *m_http; 
  bdHTTP_vtbl *v3; 

  v1 = this->m_operation == BD_CREATING;
  m_http = this->m_http;
  v3 = m_http->__vftable;
  if ( v1 )
    return ((__int64 (__fastcall *)(bdHTTP *))v3->getUploadProgress)(m_http);
  else
    return ((__int64 (__fastcall *)(bdHTTP *))v3->getDownloadProgress)(m_http);
}

/*
==============
bdCSHTTPWrapperImpl::getTransferSpeed
==============
*/
void bdCSHTTPWrapperImpl::getTransferSpeed(bdCSHTTPWrapperImpl *this)
{
  bool v1; 
  bdHTTP *m_http; 
  bdHTTP_vtbl *v3; 

  v1 = this->m_operation == BD_CREATING;
  m_http = this->m_http;
  v3 = m_http->__vftable;
  if ( v1 )
    v3->getUploadRate(m_http);
  else
    v3->getDownloadRate(m_http);
}

/*
==============
bdCSHTTPWrapperImpl::isOkayToStart
==============
*/
bool bdCSHTTPWrapperImpl::isOkayToStart(bdCSHTTPWrapperImpl *this)
{
  return this->m_http->getStatus(this->m_http) == BD_PENDING || this->m_http->getStatus(this->m_http) == BD_CANCELLED || this->m_http->getStatus(this->m_http) == BD_MAX_STATUS || this->m_http->getStatus(this->m_http) == (BD_MAX_STATUS|BD_PENDING);
}

/*
==============
bdCSHTTPWrapperImpl::resetTransferStats
==============
*/
void bdCSHTTPWrapperImpl::resetTransferStats(bdCSHTTPWrapperImpl *this)
{
  ;
}

/*
==============
bdCSHTTPWrapperImpl::run
==============
*/
__int64 bdCSHTTPWrapperImpl::run(bdCSHTTPWrapperImpl *this, void *args)
{
  return 0i64;
}

/*
==============
bdCSHTTPWrapperImpl::startCopy
==============
*/
__int64 bdCSHTTPWrapperImpl::startCopy(bdCSHTTPWrapperImpl *this, const char *const copyURL, const char *const destination, unsigned __int64 transactionID)
{
  char v8; 
  bool v9; 
  bool v10; 
  __int64 result; 
  char buf[24]; 

  bdLogMessage(BD_LOG_INFO, "info/", "bdLobby/bdHTTPWrapper/bdCSHTTPWrapperImpl", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcontentstreaming\\bdcshttpwrapperimpl.cpp", "bdCSHTTPWrapperImpl::startCopy", 0x3Eu, "Starting HTTP COPY of [%s] to [%s]", copyURL, destination);
  v8 = ((__int64 (__fastcall *)(bdHTTP *, __int64, const char *const))this->m_http->initRequest)(this->m_http, 6i64, copyURL);
  this->m_operation = BD_FINISHED;
  this->m_abortOperation = 0;
  v9 = v8 && this->m_http->setHeader(this->m_http, "Destination", destination);
  if ( transactionID )
  {
    bdSnprintf(buf, 0x15ui64, "%I64u", transactionID);
    if ( !v9 )
      goto LABEL_12;
    v10 = !this->m_http->setHeader(this->m_http, "X-TransactionID", buf);
  }
  else
  {
    v10 = !v9;
  }
  if ( !v10 )
  {
    result = ((__int64 (__fastcall *)(bdHTTP *))this->m_http->sendRequest)(this->m_http);
    if ( (_DWORD)result == 3 )
    {
      this->m_status = BD_FAILED;
      return result;
    }
  }
LABEL_12:
  bdLogMessage(BD_LOG_WARNING, "warn/", "bdLobby/bdHTTPWrapper/bdCSHTTPWrapperImpl", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcontentstreaming\\bdcshttpwrapperimpl.cpp", "bdCSHTTPWrapperImpl::startCopy", 0x58u, "Failed to start COPY from %s to %s", copyURL, destination);
  return (unsigned int)this->m_status;
}

/*
==============
bdCSHTTPWrapperImpl::startDelete
==============
*/
__int64 bdCSHTTPWrapperImpl::startDelete(bdCSHTTPWrapperImpl *this, const char *const deleteURL, unsigned __int64 transactionID, bdCSHTTPWrapper::bdHTTPHeader *extraHeaders, unsigned int numExtraHeaders, void *const replyBuffer, unsigned int replyBufferLength)
{
  char v11; 
  bool v12; 
  __int64 v13; 
  __int64 result; 
  char buf[24]; 

  bdLogMessage(BD_LOG_INFO, "info/", "bdLobby/bdHTTPWrapper/bdCSHTTPWrapperImpl", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcontentstreaming\\bdcshttpwrapperimpl.cpp", "bdCSHTTPWrapperImpl::startDelete", 0x64u, "Starting HTTP DELETE of [%s]", deleteURL);
  v11 = ((__int64 (__fastcall *)(bdHTTP *, __int64, const char *const))this->m_http->initRequest)(this->m_http, 5i64, deleteURL);
  this->m_operation = BD_STOPPING;
  v12 = v11;
  this->m_abortOperation = 0;
  if ( transactionID )
  {
    bdSnprintf(buf, 0x15ui64, "%I64u", transactionID);
    v12 = v12 && this->m_http->setHeader(this->m_http, "X-TransactionID", buf);
  }
  if ( numExtraHeaders )
  {
    v13 = numExtraHeaders;
    do
    {
      v12 = v12 && this->m_http->setHeader(this->m_http, extraHeaders->key, extraHeaders->value);
      ++extraHeaders;
      --v13;
    }
    while ( v13 );
  }
  if ( v12 && this->m_http->setDownloadBuffer(this->m_http, (char *)replyBuffer, replyBufferLength) && (result = ((__int64 (__fastcall *)(bdHTTP *))this->m_http->sendRequest)(this->m_http), (_DWORD)result == 3) )
  {
    this->m_status = BD_FAILED;
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdLobby/bdHTTPWrapper/bdCSHTTPWrapperImpl", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcontentstreaming\\bdcshttpwrapperimpl.cpp", "bdCSHTTPWrapperImpl::startDelete", 0x84u, "Failed to start DELETE from %s", deleteURL);
    return (unsigned int)this->m_status;
  }
  return result;
}

/*
==============
bdCSHTTPWrapperImpl::startPost
==============
*/
__int64 bdCSHTTPWrapperImpl::startPost(bdCSHTTPWrapperImpl *this, const char *const postURL, const void *content, int contentLength, void *replyBuffer, unsigned int replyBufferLength, bdDownloadInterceptor *downloadHandler, const char *contentType, unsigned __int64 transactionID, bdCSHTTPWrapper::bdHTTPHeader *extraHeaders, unsigned int numExtraHeaders)
{
  char *v11; 
  char v17; 
  bool v18; 
  __int64 v19; 
  __int64 result; 
  char buf[24]; 

  v11 = (char *)replyBuffer;
  v17 = ((__int64 (__fastcall *)(bdHTTP *, __int64, const char *const))this->m_http->initRequest)(this->m_http, 3i64, postURL);
  this->m_operation = BD_FINISHED|BD_RUNNING;
  this->m_abortOperation = 0;
  v18 = v17 && this->m_http->setHeader(this->m_http, "Content-Type", contentType);
  if ( transactionID )
  {
    bdSnprintf(buf, 0x15ui64, "%I64u", transactionID);
    v18 = v18 && this->m_http->setHeader(this->m_http, "X-TransactionID", buf);
  }
  if ( numExtraHeaders )
  {
    v19 = numExtraHeaders;
    do
    {
      v18 = v18 && this->m_http->setHeader(this->m_http, extraHeaders->key, extraHeaders->value);
      ++extraHeaders;
      --v19;
    }
    while ( v19 );
    v11 = (char *)replyBuffer;
  }
  if ( v18 && this->m_http->setUploadData(this->m_http, (const char *)content, contentLength) && this->m_http->setDownloadBuffer(this->m_http, v11, replyBufferLength) && this->m_http->setDownloadHandler(this->m_http, downloadHandler) && (result = ((__int64 (__fastcall *)(bdHTTP *))this->m_http->sendRequest)(this->m_http), (_DWORD)result == 3) )
  {
    this->m_status = BD_FAILED;
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdLobby/bdHTTPWrapper/bdCSHTTPWrapperImpl", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcontentstreaming\\bdcshttpwrapperimpl.cpp", "bdCSHTTPWrapperImpl::startPost", 0xB3u, "Failed to start GET from %s", postURL);
    return (unsigned int)this->m_status;
  }
  return result;
}

/*
==============
finalize
==============
*/
int finalize(lua_State *L)
{
  if ( !j_lua_toboolean(L, 1) )
  {
    j_lua_pushvalue(L, -10004);
    j_lua_call(L, 0, 0);
    j_lua_settop(L, 2);
    j_lua_createtable(L, 1, 0);
    j_lua_pushvalue(L, -2);
    j_lua_rawseti(L, -2, 1);
    j_lua_pushvalue(L, -10003);
    j_lua_setmetatable(L, -2);
    j_lua_error(L);
  }
  return j_lua_gettop(L);
}

