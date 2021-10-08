/*
==============
bdHTTPChunkedXboxOne::run
==============
*/

unsigned int __fastcall bdHTTPChunkedXboxOne::run(bdHTTPChunkedXboxOne *this, void *__formal)
{
  return ?run@bdHTTPChunkedXboxOne@@UEAAIPEAX@Z(this, __formal);
}

/*
==============
bdHTTPChunkedXboxOne::finalize
==============
*/

void __fastcall bdHTTPChunkedXboxOne::finalize(bdHTTPChunkedXboxOne *this)
{
  ?finalize@bdHTTPChunkedXboxOne@@QEAAXXZ(this);
}

/*
==============
bdHTTPChunkedXboxOne::startAsyncOperation
==============
*/

bool __fastcall bdHTTPChunkedXboxOne::startAsyncOperation(bdHTTPChunkedXboxOne *this)
{
  return ?startAsyncOperation@bdHTTPChunkedXboxOne@@QEAA_NXZ(this);
}

/*
==============
bdHTTPChunkedXboxOne::startChunkedUpload
==============
*/

HRESULT __fastcall bdHTTPChunkedXboxOne::startChunkedUpload(bdHTTPChunkedXboxOne *this, wchar_t *url, bdUploadInterceptor *uploadHandler, unsigned int uploadSize)
{
  return ?startChunkedUpload@bdHTTPChunkedXboxOne@@QEAAJQEA_WPEAVbdUploadInterceptor@@I@Z(this, url, uploadHandler, uploadSize);
}

/*
==============
bdHTTPChunkedXboxOne::getTransferProgress
==============
*/

unsigned int __fastcall bdHTTPChunkedXboxOne::getTransferProgress(bdHTTPChunkedXboxOne *this)
{
  return ?getTransferProgress@bdHTTPChunkedXboxOne@@QEBAIXZ(this);
}

/*
==============
bdHTTPChunkedXboxOne::abortOperation
==============
*/

void __fastcall bdHTTPChunkedXboxOne::abortOperation(bdHTTPChunkedXboxOne *this)
{
  ?abortOperation@bdHTTPChunkedXboxOne@@QEAAXXZ(this);
}

/*
==============
bdHTTPChunkedXboxOne::init
==============
*/

void __fastcall bdHTTPChunkedXboxOne::init(bdHTTPChunkedXboxOne *this, bdHTTPXboxOne *http, int coreAffinity, int threadPriority)
{
  ?init@bdHTTPChunkedXboxOne@@QEAAXPEAVbdHTTPXboxOne@@HH@Z(this, http, coreAffinity, threadPriority);
}

/*
==============
bdHTTPChunkedXboxOne::bdHTTPChunkedXboxOne
==============
*/

void __fastcall bdHTTPChunkedXboxOne::bdHTTPChunkedXboxOne(bdHTTPChunkedXboxOne *this)
{
  ??0bdHTTPChunkedXboxOne@@IEAA@XZ(this);
}

/*
==============
bdHTTPChunkedXboxOne::~bdHTTPChunkedXboxOne
==============
*/

void __fastcall bdHTTPChunkedXboxOne::~bdHTTPChunkedXboxOne(bdHTTPChunkedXboxOne *this)
{
  ??1bdHTTPChunkedXboxOne@@MEAA@XZ(this);
}

/*
==============
bdHTTPChunkedXboxOne::getLastHTTPError
==============
*/

int __fastcall bdHTTPChunkedXboxOne::getLastHTTPError(bdHTTPChunkedXboxOne *this)
{
  return ?getLastHTTPError@bdHTTPChunkedXboxOne@@QEBAHXZ(this);
}

/*
==============
bdHTTPChunkedXboxOne::bdHTTPChunkedXboxOne
==============
*/
void bdHTTPChunkedXboxOne::bdHTTPChunkedXboxOne(bdHTTPChunkedXboxOne *this)
{
  bdSemaphore *v2; 
  bdSemaphore *v3; 
  bdSemaphore *v4; 

  bdRunnable::bdRunnable(this);
  this->__vftable = (bdHTTPChunkedXboxOne_vtbl *)&bdHTTPChunkedXboxOne::`vftable';
  bdHTTPClient::bdHTTPClient(&this->m_httpClient);
  bdMutex::bdMutex(&this->m_threadMutex);
  this->m_threadExiting = 0;
  v2 = NULL;
  this->m_thread = NULL;
  v3 = (bdSemaphore *)bdMemory::allocate(0x10ui64);
  if ( v3 )
  {
    bdSemaphore::bdSemaphore(v3, 0, 1u);
    v2 = v4;
  }
  this->m_httpSemaphore = v2;
}

/*
==============
bdHTTPChunkedXboxOne::~bdHTTPChunkedXboxOne
==============
*/
void bdHTTPChunkedXboxOne::~bdHTTPChunkedXboxOne(bdHTTPChunkedXboxOne *this)
{
  this->__vftable = (bdHTTPChunkedXboxOne_vtbl *)&bdHTTPChunkedXboxOne::`vftable';
  if ( this->m_httpClient.m_status == BD_HTTP_STATUS_BUSY )
    this->m_httpClient.m_abort = 1;
  bdMutex::lock(&this->m_threadMutex);
  if ( this->m_thread && !this->m_threadExiting )
  {
    this->m_threadExiting = 1;
    bdMutex::unlock(&this->m_threadMutex);
    bdSemaphore::release(this->m_httpSemaphore);
    bdThread::join(this->m_thread);
    bdMutex::lock(&this->m_threadMutex);
    bdThread::cleanup(this->m_thread);
    this->m_thread = NULL;
    this->m_threadExiting = 0;
  }
  bdMutex::unlock(&this->m_threadMutex);
  bdHandleAssert(this->m_thread == NULL, "m_thread == BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpchunked-xboxone.cpp", "bdHTTPChunkedXboxOne::~bdHTTPChunkedXboxOne", 0x1Fu, "Thread not cleaned up", -2i64);
  bdSemaphore::destroy(this->m_httpSemaphore);
  bdMutex::~bdMutex(&this->m_threadMutex);
  bdHTTPClient::~bdHTTPClient(&this->m_httpClient);
  bdRunnable::~bdRunnable(this);
}

/*
==============
bdHTTPChunkedXboxOne::abortOperation
==============
*/
void bdHTTPChunkedXboxOne::abortOperation(bdHTTPChunkedXboxOne *this)
{
  if ( this->m_httpClient.m_status == BD_HTTP_STATUS_BUSY )
    this->m_httpClient.m_abort = 1;
}

/*
==============
bdHTTPChunkedXboxOne::finalize
==============
*/
void bdHTTPChunkedXboxOne::finalize(bdHTTPChunkedXboxOne *this)
{
  bdMutex::lock(&this->m_threadMutex);
  if ( this->m_thread && !this->m_threadExiting )
  {
    this->m_threadExiting = 1;
    bdMutex::unlock(&this->m_threadMutex);
    bdSemaphore::release(this->m_httpSemaphore);
    bdThread::join(this->m_thread);
    bdMutex::lock(&this->m_threadMutex);
    bdThread::cleanup(this->m_thread);
    this->m_thread = NULL;
    this->m_threadExiting = 0;
  }
  bdMutex::unlock(&this->m_threadMutex);
}

/*
==============
bdHTTPChunkedXboxOne::getLastHTTPError
==============
*/
__int64 bdHTTPChunkedXboxOne::getLastHTTPError(bdHTTPChunkedXboxOne *this)
{
  return this->m_httpClient.m_httpResponseCode;
}

/*
==============
bdHTTPChunkedXboxOne::getTransferProgress
==============
*/
__int64 bdHTTPChunkedXboxOne::getTransferProgress(bdHTTPChunkedXboxOne *this)
{
  return LODWORD(this->m_httpClient.m_bytesTransfered);
}

/*
==============
bdHTTPChunkedXboxOne::init
==============
*/
void bdHTTPChunkedXboxOne::init(bdHTTPChunkedXboxOne *this, bdHTTPXboxOne *http, int coreAffinity, int threadPriority)
{
  this->m_http = http;
  this->m_coreAffinity = coreAffinity;
  this->m_threadPriority = threadPriority;
}

/*
==============
bdHTTPChunkedXboxOne::run
==============
*/
__int64 bdHTTPChunkedXboxOne::run(bdHTTPChunkedXboxOne *this, void *__formal)
{
  bdHTTPClient::BD_HTTP_STATUS m_status; 

  do
  {
    bdSemaphore::wait(this->m_httpSemaphore);
    if ( this->m_httpClient.m_status != BD_HTTP_STATUS_BUSY )
      continue;
    bdHTTPClient::performOperation(&this->m_httpClient);
    if ( this->m_httpClient.m_abort )
      goto LABEL_3;
    m_status = this->m_httpClient.m_status;
    if ( m_status != BD_HTTP_STATUS_DONE )
    {
      bdHandleAssert(m_status != BD_HTTP_STATUS_BUSY, "m_httpClient.getStatus() != bdHTTPClient::BD_HTTP_STATUS_BUSY", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpchunked-xboxone.cpp", "bdHTTPChunkedXboxOne::run", 0x63u, "Sync error");
      this->m_http->m_httpErrorCode = this->m_httpClient.m_httpResponseCode;
LABEL_3:
      this->m_http->m_threadStatus = BD_HTTPTHREAD_FAILED;
      continue;
    }
    bdRequestStream::setBytesUploaded(this->m_http->m_requestStream.ptr_, this->m_httpClient.m_bytesTransfered);
    this->m_http->m_httpErrorCode = this->m_httpClient.m_httpResponseCode;
    this->m_http->m_threadStatus = BD_HTTPTHREAD_DONE;
  }
  while ( !this->m_threadExiting );
  return 0i64;
}

/*
==============
bdHTTPChunkedXboxOne::startAsyncOperation
==============
*/
_BOOL8 bdHTTPChunkedXboxOne::startAsyncOperation(bdHTTPChunkedXboxOne *this)
{
  bool m_threadExiting; 
  bool v3; 
  bdThread *v4; 

  m_threadExiting = this->m_threadExiting;
  v3 = !m_threadExiting;
  bdMutex::lock(&this->m_threadMutex);
  if ( !m_threadExiting && !this->m_thread )
  {
    v4 = (bdThread *)bdMemory::allocate(0x40ui64);
    if ( v4 )
      bdThread::bdThread(v4, this, this->m_threadPriority, 0x8000u, this->m_coreAffinity);
    this->m_thread = v4;
    v3 = bdThread::start(v4, NULL, 0i64, NULL);
  }
  bdMutex::unlock(&this->m_threadMutex);
  if ( v3 )
    bdSemaphore::release(this->m_httpSemaphore);
  else
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdHTTPChunked-XboxOne", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpchunked-xboxone.cpp", "bdHTTPChunkedXboxOne::startAsyncOperation", 0xB8u, "Unable to start thread for HTTP operations");
  return v3;
}

/*
==============
bdHTTPChunkedXboxOne::startChunkedUpload
==============
*/
__int64 bdHTTPChunkedXboxOne::startChunkedUpload(bdHTTPChunkedXboxOne *this, wchar_t *url, bdUploadInterceptor *uploadHandler, unsigned int uploadSize)
{
  bool v8; 
  bdThread *v9; 
  errno_t v10; 
  unsigned int v11; 
  BOOL v13; 
  bool m_threadExiting; 
  bool v15; 
  bdThread *v16; 
  bdThread *v17; 
  unsigned int port; 
  char *startRequestPath; 
  size_t PtNumOfCharConverted[4]; 
  char Dst[1024]; 
  char serverName[1024]; 

  PtNumOfCharConverted[1] = -2i64;
  v8 = uploadHandler && !uploadSize;
  bdHandleAssert(v8, "uploadHandler != BD_NULL && uploadSize == 0", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpchunked-xboxone.cpp", "bdHTTPChunkedXboxOne::startChunkedUpload", 0x77u, "This function should only be used for chunked uploading");
  v9 = NULL;
  startRequestPath = NULL;
  memset_0(Dst, 0, sizeof(Dst));
  PtNumOfCharConverted[0] = 0i64;
  v10 = wcstombs_s(PtNumOfCharConverted, Dst, 0x400ui64, url, 0x3FFui64);
  v11 = v10;
  if ( v10 )
  {
    if ( v10 == 22 )
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdHTTPChunked-XboxOne", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpchunked-xboxone.cpp", "bdHTTPChunkedXboxOne::startChunkedUpload", 0x87u, "Could not convert url to char*, mbstr is NULL and sizeInBytes > 0 OR wcstr is NULL.");
    }
    else if ( v10 == 34 )
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdHTTPChunked-XboxOne", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpchunked-xboxone.cpp", "bdHTTPChunkedXboxOne::startChunkedUpload", 0x8Bu, "The destination buffer is too small to contain the converted string.");
    }
    return v11;
  }
  else
  {
    if ( bdHTTPUtility::parseURL(Dst, serverName, &startRequestPath, &port) )
    {
      v13 = bdHTTPClient::httpPut(&this->m_httpClient, serverName, startRequestPath, NULL, uploadSize, uploadHandler, port, 0i64, NULL);
      if ( v13 )
      {
        m_threadExiting = this->m_threadExiting;
        v15 = !m_threadExiting;
        bdMutex::lock(&this->m_threadMutex);
        if ( !m_threadExiting && !this->m_thread )
        {
          v16 = (bdThread *)bdMemory::allocate(0x40ui64);
          PtNumOfCharConverted[2] = (size_t)v16;
          if ( v16 )
          {
            bdThread::bdThread(v16, this, this->m_threadPriority, 0x8000u, this->m_coreAffinity);
            v9 = v17;
          }
          this->m_thread = v9;
          v15 = bdThread::start(v9, NULL, 0i64, NULL);
        }
        bdMutex::unlock(&this->m_threadMutex);
        if ( v15 )
        {
          bdSemaphore::release(this->m_httpSemaphore);
        }
        else
        {
          bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdHTTPChunked-XboxOne", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpchunked-xboxone.cpp", "bdHTTPChunkedXboxOne::startAsyncOperation", 0xB8u, "Unable to start thread for HTTP operations");
          return -1;
        }
      }
    }
    else
    {
      return -2;
    }
    return v13;
  }
}

