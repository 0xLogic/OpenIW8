/*
==============
bdHTTPXboxOne::initRequest
==============
*/

bool __fastcall bdHTTPXboxOne::initRequest(bdHTTPXboxOne *this, bdHTTP::bdOperation operation, const char *const url, const unsigned int timeout)
{
  return ?initRequest@bdHTTPXboxOne@@UEAA_NW4bdOperation@bdHTTP@@QEBDI@Z(this, operation, url, timeout);
}

/*
==============
bdHTTPXboxOne::setDownloadRate
==============
*/

void __fastcall bdHTTPXboxOne::setDownloadRate(bdHTTPXboxOne *this)
{
  ?setDownloadRate@bdHTTPXboxOne@@IEAAXXZ(this);
}

/*
==============
bdHTTPXboxOne::finalize
==============
*/

void __fastcall bdHTTPXboxOne::finalize(bdHTTPXboxOne *this)
{
  ?finalize@bdHTTPXboxOne@@UEAAXXZ(this);
}

/*
==============
bdHTTPXboxOne::setDownloadHandler
==============
*/

bool __fastcall bdHTTPXboxOne::setDownloadHandler(bdHTTPXboxOne *this, bdDownloadInterceptor *handler)
{
  return ?setDownloadHandler@bdHTTPXboxOne@@UEAA_NPEAVbdDownloadInterceptor@@@Z(this, handler);
}

/*
==============
bdHTTPXboxOne::fillRequestStream
==============
*/

bool __fastcall bdHTTPXboxOne::fillRequestStream(bdHTTPXboxOne *this)
{
  return ?fillRequestStream@bdHTTPXboxOne@@IEAA_NXZ(this);
}

/*
==============
bdHTTPXboxOne::getDownloadProgress
==============
*/

unsigned int __fastcall bdHTTPXboxOne::getDownloadProgress(bdHTTPXboxOne *this)
{
  return ?getDownloadProgress@bdHTTPXboxOne@@UEBAIXZ(this);
}

/*
==============
bdHTTPXboxOne::setUploadData
==============
*/

bool __fastcall bdHTTPXboxOne::setUploadData(bdHTTPXboxOne *this, const char *buffer, unsigned int size)
{
  return ?setUploadData@bdHTTPXboxOne@@UEAA_NPEBCI@Z(this, buffer, size);
}

/*
==============
bdHTTPXboxOne::sendHTTPRequest
==============
*/

void __fastcall bdHTTPXboxOne::sendHTTPRequest(bdHTTPXboxOne *this)
{
  ?sendHTTPRequest@bdHTTPXboxOne@@IEAAXXZ(this);
}

/*
==============
bdHTTPXboxOne::run
==============
*/

unsigned int __fastcall bdHTTPXboxOne::run(bdHTTPXboxOne *this, void *args)
{
  return ?run@bdHTTPXboxOne@@UEAAIPEAX@Z(this, args);
}

/*
==============
bdHTTPXboxOne::getUploadRate
==============
*/

double __fastcall bdHTTPXboxOne::getUploadRate(bdHTTPXboxOne *this)
{
  double result; 

  *(float *)&result = ?getUploadRate@bdHTTPXboxOne@@UEBAMXZ(this);
  return result;
}

/*
==============
bdHTTPXboxOne::setAnyUserAllowed
==============
*/

void __fastcall bdHTTPXboxOne::setAnyUserAllowed(bdHTTPXboxOne *this, bool useAnyUserAllowed)
{
  ?setAnyUserAllowed@bdHTTPXboxOne@@QEAAX_N@Z(this, useAnyUserAllowed);
}

/*
==============
bdHTTPXboxOne::getLastHTTPStatus
==============
*/

unsigned int __fastcall bdHTTPXboxOne::getLastHTTPStatus(bdHTTPXboxOne *this)
{
  return ?getLastHTTPStatus@bdHTTPXboxOne@@UEBAIXZ(this);
}

/*
==============
bdHTTPXboxOne::getResponseLength
==============
*/

bool __fastcall bdHTTPXboxOne::getResponseLength(bdHTTPXboxOne *this, unsigned int *responseLength)
{
  return ?getResponseLength@bdHTTPXboxOne@@UEAA_NAEAI@Z(this, responseLength);
}

/*
==============
bdHTTPXboxOne::setUploadRate
==============
*/

void __fastcall bdHTTPXboxOne::setUploadRate(bdHTTPXboxOne *this)
{
  ?setUploadRate@bdHTTPXboxOne@@IEAAXXZ(this);
}

/*
==============
bdHTTPXboxOne::getInternalError
==============
*/

int __fastcall bdHTTPXboxOne::getInternalError(bdHTTPXboxOne *this)
{
  return ?getInternalError@bdHTTPXboxOne@@UEBAHXZ(this);
}

/*
==============
bdHTTPXboxOne::setUserByID
==============
*/

bool __fastcall bdHTTPXboxOne::setUserByID(bdHTTPXboxOne *this, unsigned __int64 userID)
{
  return ?setUserByID@bdHTTPXboxOne@@QEAA_N_K@Z(this, userID);
}

/*
==============
bdHTTPXboxOne::bdHTTPXboxOne
==============
*/

void __fastcall bdHTTPXboxOne::bdHTTPXboxOne(bdHTTPXboxOne *this, int coreAffinity, int threadPriority)
{
  ??0bdHTTPXboxOne@@QEAA@HH@Z(this, coreAffinity, threadPriority);
}

/*
==============
bdHTTPXboxOne::clearResult
==============
*/

bool __fastcall bdHTTPXboxOne::clearResult(bdHTTPXboxOne *this)
{
  return ?clearResult@bdHTTPXboxOne@@UEAA_NXZ(this);
}

/*
==============
bdHTTPXboxOne::getUploadProgress
==============
*/

unsigned int __fastcall bdHTTPXboxOne::getUploadProgress(bdHTTPXboxOne *this)
{
  return ?getUploadProgress@bdHTTPXboxOne@@UEBAIXZ(this);
}

/*
==============
bdHTTPXboxOne::logMicrosoftErrorCode
==============
*/

void __fastcall bdHTTPXboxOne::logMicrosoftErrorCode(bdHTTPXboxOne *this, HRESULT code)
{
  ?logMicrosoftErrorCode@bdHTTPXboxOne@@IEAAXJ@Z(this, code);
}

/*
==============
convertUTF8ToUTF16
==============
*/

bool __fastcall convertUTF8ToUTF16(wchar_t *const dest, const unsigned int destCount, const char *const src)
{
  return ?convertUTF8ToUTF16@@YA_NQEA_WIQEBD@Z(dest, destCount, src);
}

/*
==============
bdHTTPXboxOne::startInstanceThread
==============
*/

bool __fastcall bdHTTPXboxOne::startInstanceThread(bdHTTPXboxOne *this)
{
  return ?startInstanceThread@bdHTTPXboxOne@@IEAA_NXZ(this);
}

/*
==============
bdHTTPXboxOne::getHeader
==============
*/

bool __fastcall bdHTTPXboxOne::getHeader(bdHTTPXboxOne *this, const char *headerName, char *outBuffer, const unsigned int outBufferSize)
{
  return ?getHeader@bdHTTPXboxOne@@UEAA_NPEBDPEADI@Z(this, headerName, outBuffer, outBufferSize);
}

/*
==============
bdHTTPXboxOne::initIXMLRequestInThread
==============
*/

bool __fastcall bdHTTPXboxOne::initIXMLRequestInThread(bdHTTPXboxOne *this)
{
  return ?initIXMLRequestInThread@bdHTTPXboxOne@@IEAA_NXZ(this);
}

/*
==============
bdHTTPXboxOne::setHeader
==============
*/

bool __fastcall bdHTTPXboxOne::setHeader(bdHTTPXboxOne *this, const char *key, const char *value)
{
  return ?setHeader@bdHTTPXboxOne@@UEAA_NPEBD0@Z(this, key, value);
}

/*
==============
bdHTTPXboxOne::setUser
==============
*/

bool __fastcall bdHTTPXboxOne::setUser(bdHTTPXboxOne *this, unsigned int userIndex)
{
  return ?setUser@bdHTTPXboxOne@@QEAA_NI@Z(this, userIndex);
}

/*
==============
bdHTTPXboxOne::abortOperation
==============
*/

void __fastcall bdHTTPXboxOne::abortOperation(bdHTTPXboxOne *this)
{
  ?abortOperation@bdHTTPXboxOne@@UEAAXXZ(this);
}

/*
==============
bdHTTPXboxOne::setHeader
==============
*/

bool __fastcall bdHTTPXboxOne::setHeader(bdHTTPXboxOne *this, const wchar_t *key, const wchar_t *value)
{
  return ?setHeader@bdHTTPXboxOne@@IEAA_NPEB_W0@Z(this, key, value);
}

/*
==============
bdHTTPXboxOne::sendRequest
==============
*/

bdHTTP::bdStatus __fastcall bdHTTPXboxOne::sendRequest(bdHTTPXboxOne *this)
{
  return ?sendRequest@bdHTTPXboxOne@@UEAA?AW4bdStatus@bdHTTP@@XZ(this);
}

/*
==============
bdHTTPXboxOne::~bdHTTPXboxOne
==============
*/

void __fastcall bdHTTPXboxOne::~bdHTTPXboxOne(bdHTTPXboxOne *this)
{
  ??1bdHTTPXboxOne@@UEAA@XZ(this);
}

/*
==============
bdHTTPXboxOne::getStatus
==============
*/

bdHTTP::bdStatus __fastcall bdHTTPXboxOne::getStatus(bdHTTPXboxOne *this)
{
  return ?getStatus@bdHTTPXboxOne@@UEAA?AW4bdStatus@bdHTTP@@XZ(this);
}

/*
==============
bdHTTPXboxOne::setRequiresToken
==============
*/

void __fastcall bdHTTPXboxOne::setRequiresToken(bdHTTPXboxOne *this, bool requiresToken)
{
  ?setRequiresToken@bdHTTPXboxOne@@QEAAX_N@Z(this, requiresToken);
}

/*
==============
bdHTTPXboxOne::startFetchingToken
==============
*/

void __fastcall bdHTTPXboxOne::startFetchingToken(bdHTTPXboxOne *this)
{
  ?startFetchingToken@bdHTTPXboxOne@@IEAAXXZ(this);
}

/*
==============
bdHTTPXboxOne::setDownloadBuffer
==============
*/

bool __fastcall bdHTTPXboxOne::setDownloadBuffer(bdHTTPXboxOne *this, char *buffer, unsigned int size)
{
  return ?setDownloadBuffer@bdHTTPXboxOne@@UEAA_NPEACI@Z(this, buffer, size);
}

/*
==============
bdHTTPXboxOne::bdHTTPXboxOne
==============
*/

void __fastcall bdHTTPXboxOne::bdHTTPXboxOne(bdHTTPXboxOne *this, unsigned __int64 userID, int coreAffinity, int threadPriority)
{
  ??0bdHTTPXboxOne@@QEAA@_KHH@Z(this, userID, coreAffinity, threadPriority);
}

/*
==============
bdHTTPXboxOne::getDownloadRate
==============
*/

double __fastcall bdHTTPXboxOne::getDownloadRate(bdHTTPXboxOne *this)
{
  double result; 

  *(float *)&result = ?getDownloadRate@bdHTTPXboxOne@@UEBAMXZ(this);
  return result;
}

/*
==============
bdHTTPXboxOne::setTimeout
==============
*/

bool __fastcall bdHTTPXboxOne::setTimeout(bdHTTPXboxOne *this, unsigned int timeout)
{
  return ?setTimeout@bdHTTPXboxOne@@UEAA_NI@Z(this, timeout);
}

/*
==============
bdHTTPXboxOne::setUploadHandler
==============
*/

bool __fastcall bdHTTPXboxOne::setUploadHandler(bdHTTPXboxOne *this, bdUploadInterceptor *handler, unsigned int size)
{
  return ?setUploadHandler@bdHTTPXboxOne@@UEAA_NPEAVbdUploadInterceptor@@I@Z(this, handler, size);
}

/*
==============
bdHTTPXboxOne::resetTask
==============
*/

bool __fastcall bdHTTPXboxOne::resetTask(bdHTTPXboxOne *this)
{
  return ?resetTask@bdHTTPXboxOne@@IEAA_NXZ(this);
}

/*
==============
bdHTTPXboxOne::bdHTTPXboxOne
==============
*/
void bdHTTPXboxOne::bdHTTPXboxOne(bdHTTPXboxOne *this, int coreAffinity, int threadPriority)
{
  bdSemaphore *v6; 
  bdHttpCallbackHandler *ptr; 
  bdHttpCallbackHandler *v8; 
  bdHttpCallbackHandler *v9; 
  bdHttpCallbackHandler *v10; 
  bdHttpCallbackHandler *v11; 
  HRESULT (__fastcall *QueryInterface)(IUnknown *, const _GUID *, void **); 
  IXMLHTTPRequest2Callback *v13; 
  bdSemaphore *v14; 
  bdSemaphore *v15; 

  bdHTTP::bdHTTP(this);
  bdRunnable::bdRunnable(&this->bdRunnable);
  this->bdHTTP::__vftable = (bdHTTPXboxOne_vtbl *)&bdHTTPXboxOne::`vftable'{for `bdHTTP'};
  this->bdRunnable::__vftable = (bdRunnable_vtbl *)&bdHTTPXboxOne::`vftable'{for `bdRunnable'};
  v6 = NULL;
  this->m_operation = BD_NONE;
  this->m_request.ptr_ = NULL;
  this->m_httpCallback.ptr_ = NULL;
  this->m_XHRCallback.ptr_ = NULL;
  this->m_requestStream.ptr_ = NULL;
  this->m_user.m_ptr = NULL;
  *(_WORD *)&this->m_useAnyUserAllowed = 1;
  memset_0(&this->m_headerOffsets, 0, 0x100ui64);
  this->m_headerOffsets.m_numHeaders = 0;
  this->m_authToken = NULL;
  this->m_authSignature = NULL;
  this->m_internalBufferSize = 0x20000;
  this->m_uploadBuffer = NULL;
  this->m_uploadSize = 0;
  this->m_uploadHandler = NULL;
  this->m_downloadBuffer = NULL;
  this->m_downloadBufferSize = 0;
  this->m_downloadHandler = NULL;
  *(_QWORD *)&this->m_httpErrorCode = 0i64;
  this->m_responseLength = 0;
  bdStopwatch::bdStopwatch(&this->m_stopwatch);
  *(_QWORD *)&this->m_uploadRate = 0i64;
  bdHTTPChunkedXboxOne::bdHTTPChunkedXboxOne(&this->m_chunkedXboxOne);
  this->m_instanceThread = NULL;
  this->m_threadStatus = BD_HTTPTHREAD_WAITING;
  this->m_sending = 0;
  bdMutex::bdMutex(&this->m_mutex);
  this->m_status = BD_PENDING;
  this->m_internalBuffer = (char *)bdMemory::allocate(this->m_internalBufferSize);
  this->m_timeout = 0;
  ptr = this->m_httpCallback.ptr_;
  if ( ptr )
  {
    this->m_httpCallback.ptr_ = NULL;
    ptr->Release(ptr);
  }
  this->m_httpCallback.ptr_ = NULL;
  v8 = (bdHttpCallbackHandler *)operator new(0x28ui64, &std::nothrow);
  if ( v8 )
  {
    bdHttpCallbackHandler::bdHttpCallbackHandler(v8);
    v10 = v9;
    if ( v9 )
      v9->AddRef(v9);
    this->m_httpCallback.ptr_ = v10;
    if ( v10 )
      v10->Release(v10);
  }
  bdHttpCallbackHandler::init(this->m_httpCallback.ptr_, this);
  v11 = this->m_httpCallback.ptr_;
  QueryInterface = v11->QueryInterface;
  v13 = this->m_XHRCallback.ptr_;
  if ( v13 )
  {
    this->m_XHRCallback.ptr_ = NULL;
    v13->Release(v13);
  }
  QueryInterface(v11, &GUID_a44a9299_e321_40de_8866_341b41669162, (void **)&this->m_XHRCallback.ptr_);
  this->m_url[0] = 0;
  this->m_verb[0] = 0;
  this->m_headers[0] = 0;
  v14 = (bdSemaphore *)bdMemory::allocate(0x10ui64);
  if ( v14 )
  {
    bdSemaphore::bdSemaphore(v14, 0, 1u);
    v6 = v15;
  }
  this->m_httpSemaphore = v6;
  this->m_coreAffinity = coreAffinity;
  this->m_threadPriority = threadPriority;
  bdHTTPChunkedXboxOne::init(&this->m_chunkedXboxOne, this, coreAffinity, threadPriority);
}

/*
==============
bdHTTPXboxOne::bdHTTPXboxOne
==============
*/
void bdHTTPXboxOne::bdHTTPXboxOne(bdHTTPXboxOne *this, unsigned __int64 userID, int coreAffinity, int threadPriority)
{
  bdHTTPXboxOne::bdHTTPXboxOne(this, coreAffinity, threadPriority);
  this->bdHTTP::__vftable = (bdHTTPXboxOne_vtbl *)&bdHTTPXboxOne::`vftable'{for `bdHTTP'};
  this->bdRunnable::__vftable = (bdRunnable_vtbl *)&bdHTTPXboxOne::`vftable'{for `bdRunnable'};
  this->m_requiresToken = 1;
  bdHTTPXboxOne::setUserByID(this, userID);
}

/*
==============
bdHTTPXboxOne::~bdHTTPXboxOne
==============
*/
void bdHTTPXboxOne::~bdHTTPXboxOne(bdHTTPXboxOne *this)
{
  IXMLHTTPRequest2 *ptr; 
  bdHTTP::bdStatus Status; 
  bdThread *m_instanceThread; 
  bdWinRTPtr *m_ptr; 
  bdWinRTPtr *v6; 
  bdRequestStream *v7; 
  IXMLHTTPRequest2Callback *v8; 
  bdHttpCallbackHandler *v9; 
  IXMLHTTPRequest2 *v10; 

  this->bdHTTP::__vftable = (bdHTTPXboxOne_vtbl *)&bdHTTPXboxOne::`vftable'{for `bdHTTP'};
  this->bdRunnable::__vftable = (bdRunnable_vtbl *)&bdHTTPXboxOne::`vftable'{for `bdRunnable'};
  if ( this->m_status == BD_FAILED )
  {
    bdMutex::lock(&this->m_mutex);
    ptr = this->m_request.ptr_;
    if ( ptr )
    {
      ptr->Abort(ptr);
      bdHTTPChunkedXboxOne::abortOperation(&this->m_chunkedXboxOne);
    }
    this->m_status = BD_TIMED_OUT;
    bdMutex::unlock(&this->m_mutex);
    Status = bdHTTPXboxOne::getStatus(this);
    while ( (unsigned int)(Status - 3) <= 1 )
    {
      Status = this->m_status;
      if ( Status == BD_FAILED )
      {
        if ( this->m_threadStatus == BD_HTTPTHREAD_DONE )
        {
          this->m_status = BD_CANCELLED;
          this->m_threadStatus = BD_HTTPTHREAD_WAITING;
          Status = BD_CANCELLED;
        }
        else if ( this->m_threadStatus == BD_HTTPTHREAD_FAILED )
        {
          this->m_status = BD_MAX_STATUS;
          this->m_threadStatus = BD_HTTPTHREAD_WAITING;
          Status = BD_MAX_STATUS;
        }
      }
      else if ( Status == BD_TIMED_OUT && this->m_threadStatus != BD_HTTPTHREAD_WORKING )
      {
        this->m_status = BD_MAX_STATUS|BD_PENDING;
        this->m_threadStatus = BD_HTTPTHREAD_WAITING;
        Status = BD_MAX_STATUS|BD_PENDING;
      }
    }
  }
  bdHTTPXboxOne::resetTask(this);
  this->m_internalBufferSize = 0;
  bdMemory::deallocate(this->m_internalBuffer);
  m_instanceThread = this->m_instanceThread;
  if ( m_instanceThread )
  {
    bdThread::stop(m_instanceThread);
    bdSemaphore::release(this->m_httpSemaphore);
    bdThread::join(this->m_instanceThread);
    bdThread::cleanup(this->m_instanceThread);
    this->m_instanceThread = NULL;
  }
  this->m_status = BD_CANCELLED;
  bdSemaphore::destroy(this->m_httpSemaphore);
  bdMutex::~bdMutex(&this->m_mutex);
  bdHTTPChunkedXboxOne::~bdHTTPChunkedXboxOne(&this->m_chunkedXboxOne);
  m_ptr = this->m_user.m_ptr;
  if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
  {
    v6 = this->m_user.m_ptr;
    if ( v6 )
      ((void (__fastcall *)(bdWinRTPtr *, __int64))v6->~bdReferencable)(v6, 1i64);
    this->m_user.m_ptr = NULL;
  }
  v7 = this->m_requestStream.ptr_;
  if ( v7 )
  {
    this->m_requestStream.ptr_ = NULL;
    v7->Release(v7);
  }
  v8 = this->m_XHRCallback.ptr_;
  if ( v8 )
  {
    this->m_XHRCallback.ptr_ = NULL;
    v8->Release(v8);
  }
  v9 = this->m_httpCallback.ptr_;
  if ( v9 )
  {
    this->m_httpCallback.ptr_ = NULL;
    v9->Release(v9);
  }
  v10 = this->m_request.ptr_;
  if ( v10 )
  {
    this->m_request.ptr_ = NULL;
    v10->Release(v10);
  }
  bdRunnable::~bdRunnable(&this->bdRunnable);
  this->bdHTTP::__vftable = (bdHTTPXboxOne_vtbl *)&bdHTTP::`vftable';
}

/*
==============
bdHTTPXboxOne::abortOperation
==============
*/
void bdHTTPXboxOne::abortOperation(bdHTTPXboxOne *this)
{
  bdMutex *p_m_mutex; 
  IXMLHTTPRequest2 *ptr; 

  p_m_mutex = &this->m_mutex;
  bdMutex::lock(&this->m_mutex);
  ptr = this->m_request.ptr_;
  if ( ptr )
  {
    ptr->Abort(ptr);
    bdHTTPChunkedXboxOne::abortOperation(&this->m_chunkedXboxOne);
  }
  this->m_status = BD_TIMED_OUT;
  bdMutex::unlock(p_m_mutex);
}

/*
==============
bdHTTPXboxOne::clearResult
==============
*/
char bdHTTPXboxOne::clearResult(bdHTTPXboxOne *this)
{
  return 1;
}

/*
==============
convertUTF8ToUTF16
==============
*/
_BOOL8 convertUTF8ToUTF16(wchar_t *const dest, const unsigned int destCount, const char *const src)
{
  size_t v3; 
  __int64 v6; 
  __int64 v7; 
  bool v8; 
  size_t PtNumOfCharConverted; 

  v3 = destCount;
  bdHandleAssert(src != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v6 = -1i64;
  do
    ++v6;
  while ( src[v6] );
  v7 = v6 + 1;
  mbstowcs_s(&PtNumOfCharConverted, dest, v3, src, 0xFFFFFFFFFFFFFFFFui64);
  v8 = PtNumOfCharConverted == v7;
  bdHandleAssert(PtNumOfCharConverted == v7, "ok", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpxboxone.cpp", "convertUTF8ToUTF16", 0x42Fu, "Converted length[%u] does not equal length[%u]", PtNumOfCharConverted, v7);
  return v8;
}

/*
==============
bdHTTPXboxOne::fillRequestStream
==============
*/
char bdHTTPXboxOne::fillRequestStream(bdHTTPXboxOne *this)
{
  bdRequestStream *v2; 
  bdRequestStream *ptr; 
  bdRequestStream *v5; 
  bdRequestStream *v6; 
  DWORD LastError; 

  if ( this->m_uploadBuffer )
  {
    v2 = (bdRequestStream *)operator new(0x48ui64, &std::nothrow);
    if ( v2 )
      bdRequestStream::bdRequestStream(v2);
    ptr = this->m_requestStream.ptr_;
    this->m_requestStream.ptr_ = v2;
    if ( ptr )
    {
      ptr->Release(ptr);
      v2 = this->m_requestStream.ptr_;
    }
    if ( bdRequestStream::Open(v2, this->m_uploadBuffer, this->m_uploadSize) )
    {
      LastError = GetLastError();
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdHTTPXboxOne", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpxboxone.cpp", "bdHTTPXboxOne::fillRequestStream", 0x271u, "Creation of Request Stream failed with error [%u] (using upload buffer)", LastError);
      this->abortOperation(this);
      this->m_threadStatus = BD_HTTPTHREAD_FAILED;
      return 0;
    }
  }
  else if ( this->m_uploadHandler )
  {
    v5 = (bdRequestStream *)operator new(0x48ui64, &std::nothrow);
    if ( v5 )
      bdRequestStream::bdRequestStream(v5);
    v6 = this->m_requestStream.ptr_;
    this->m_requestStream.ptr_ = v5;
    if ( v6 )
    {
      v6->Release(v6);
      v5 = this->m_requestStream.ptr_;
    }
    bdRequestStream::setupHandler(v5, this->m_uploadHandler, this->m_uploadSize);
  }
  return 1;
}

/*
==============
bdHTTPXboxOne::finalize
==============
*/
void bdHTTPXboxOne::finalize(bdHTTPXboxOne *this)
{
  bdThread *m_instanceThread; 

  m_instanceThread = this->m_instanceThread;
  if ( m_instanceThread )
  {
    bdThread::stop(m_instanceThread);
    bdSemaphore::release(this->m_httpSemaphore);
    bdThread::join(this->m_instanceThread);
    bdThread::cleanup(this->m_instanceThread);
    this->m_instanceThread = NULL;
  }
  this->m_status = BD_CANCELLED;
}

/*
==============
bdHTTPXboxOne::getDownloadProgress
==============
*/
unsigned int bdHTTPXboxOne::getDownloadProgress(bdHTTPXboxOne *this)
{
  bdHttpCallbackHandler *ptr; 

  ptr = this->m_httpCallback.ptr_;
  if ( ptr )
    return bdHttpCallbackHandler::getDownloadProgress(ptr);
  else
    return 0;
}

/*
==============
bdHTTPXboxOne::getDownloadRate
==============
*/
float bdHTTPXboxOne::getDownloadRate(bdHTTPXboxOne *this)
{
  __asm { vmovss  xmm0, dword ptr [rcx+89E4h] }
  return *(float *)&_XMM0;
}

/*
==============
bdHTTPXboxOne::getHeader
==============
*/
bool bdHTTPXboxOne::getHeader(bdHTTPXboxOne *this, const char *headerName, char *outBuffer, const unsigned int outBufferSize)
{
  size_t v4; 
  bool result; 
  int v9; 
  bool v10; 
  unsigned __int64 v11; 
  wchar_t *v12; 
  __int64 v13; 
  __int64 v14; 
  int v15; 
  int v16; 
  wchar_t *s; 
  size_t PtNumOfCharConverted; 
  wchar_t dest[4096]; 

  v4 = outBufferSize;
  bdHandleAssert(headerName != NULL, "(headerName != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpxboxone.cpp", "bdHTTPXboxOne::getHeader", 0x234u, "Cannot call getHeader() with a NULL headerName");
  bdHandleAssert(outBuffer != NULL, "(outBuffer != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpxboxone.cpp", "bdHTTPXboxOne::getHeader", 0x235u, "Cannot call getHeader() with a NULL outBuffer");
  if ( this->getStatus(this) == BD_CANCELLED && headerName && outBuffer )
  {
    result = convertUTF8ToUTF16(dest, 0x1000u, headerName);
    s = NULL;
    if ( result )
    {
      v9 = this->m_request.ptr_->GetResponseHeader(this->m_request.ptr_, dest, &s);
      v10 = v9 >= 0;
      if ( v9 < 0 )
      {
        v16 = 0;
        bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdHTTPXboxOne", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpxboxone.cpp", "bdHTTPXboxOne::getHeader", 0x253u, "getHeader(): HTTP header[%s]: Error[0x%08X]", headerName, v16);
      }
      else
      {
        v11 = bdStrlen(s);
        v10 = v11 < v4;
        if ( v11 >= v4 )
        {
          v15 = v4;
          bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdHTTPXboxOne", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpxboxone.cpp", "bdHTTPXboxOne::getHeader", 0x24Eu, "Insufficient space in outBuffer for header [%u vs %u]", v15, v11);
        }
        else
        {
          v12 = s;
          bdHandleAssert(s != NULL, "(s != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpxboxone.cpp", "bdStrlen", 0x422u, "Null ptr in bdStrlen");
          v13 = -1i64;
          do
            ++v13;
          while ( v12[v13] );
          v14 = v13 + 1;
          wcstombs_s(&PtNumOfCharConverted, outBuffer, v4, v12, 0xFFFFFFFFFFFFFFFFui64);
          v10 = PtNumOfCharConverted == v14;
          bdHandleAssert(PtNumOfCharConverted == v14, "ok", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpxboxone.cpp", "convertUTF16ToUTF8", 0x43Cu, "Converted length[%u] does not equal length[%u]", PtNumOfCharConverted, v14);
        }
      }
      if ( s )
        CoTaskMemFree(s);
      return v10;
    }
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdHTTPXboxOne", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpxboxone.cpp", "bdHTTPXboxOne::getHeader", 0x260u, "Cannot call getHeader() with NULL parameters or before request finishes");
    return 0;
  }
  return result;
}

/*
==============
bdHTTPXboxOne::getInternalError
==============
*/
__int64 bdHTTPXboxOne::getInternalError(bdHTTPXboxOne *this)
{
  return (unsigned int)this->m_internalError;
}

/*
==============
bdHTTPXboxOne::getLastHTTPStatus
==============
*/
__int64 bdHTTPXboxOne::getLastHTTPStatus(bdHTTPXboxOne *this)
{
  return (unsigned int)this->m_httpErrorCode;
}

/*
==============
bdHTTPXboxOne::getResponseLength
==============
*/
char bdHTTPXboxOne::getResponseLength(bdHTTPXboxOne *this, unsigned int *responseLength)
{
  *responseLength = this->m_responseLength;
  return 1;
}

/*
==============
bdHTTPXboxOne::getStatus
==============
*/
__int64 bdHTTPXboxOne::getStatus(bdHTTPXboxOne *this)
{
  __int64 result; 
  unsigned int v2; 

  result = (unsigned int)this->m_status;
  if ( (_DWORD)result == 3 )
  {
    v2 = 3;
    if ( this->m_threadStatus == BD_HTTPTHREAD_DONE )
    {
      v2 = 5;
      this->m_threadStatus = BD_HTTPTHREAD_WAITING;
      this->m_status = BD_CANCELLED;
    }
    else if ( this->m_threadStatus == BD_HTTPTHREAD_FAILED )
    {
      this->m_threadStatus = BD_HTTPTHREAD_WAITING;
      this->m_status = BD_MAX_STATUS;
      return 6i64;
    }
    return v2;
  }
  else if ( (_DWORD)result == 4 )
  {
    if ( this->m_threadStatus == BD_HTTPTHREAD_WORKING )
    {
      return 4i64;
    }
    else
    {
      this->m_status = BD_MAX_STATUS|BD_PENDING;
      result = 7i64;
      this->m_threadStatus = BD_HTTPTHREAD_WAITING;
    }
  }
  return result;
}

/*
==============
bdHTTPXboxOne::getUploadProgress
==============
*/
unsigned int bdHTTPXboxOne::getUploadProgress(bdHTTPXboxOne *this)
{
  bdRequestStream *ptr; 

  ptr = this->m_requestStream.ptr_;
  if ( ptr )
    return bdRequestStream::getBytesUploaded(ptr);
  else
    return 0;
}

/*
==============
bdHTTPXboxOne::getUploadRate
==============
*/
float bdHTTPXboxOne::getUploadRate(bdHTTPXboxOne *this)
{
  char v5; 
  char v6; 

  _RBX = this;
  if ( !this->m_request.ptr_ )
    goto LABEL_5;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vucomiss xmm0, dword ptr [rcx+89E0h]
  }
  if ( this->m_request.ptr_ )
    goto LABEL_5;
  *(double *)&_XMM0 = bdStopwatch::getElapsedTimeInSeconds(&this->m_stopwatch);
  __asm { vcomiss xmm0, cs:__real@3dcccccd }
  if ( v5 | v6 )
  {
LABEL_5:
    __asm { vmovss  xmm0, dword ptr [rbx+89E0h] }
  }
  else
  {
    __asm { vmovaps [rsp+38h+var_18], xmm6 }
    bdRequestStream::getBytesUploaded(_RBX->m_requestStream.ptr_);
    __asm
    {
      vxorps  xmm6, xmm6, xmm6
      vcvtsi2ss xmm6, xmm6, rax
    }
    bdStopwatch::getElapsedTimeInSeconds(&_RBX->m_stopwatch);
    __asm
    {
      vdivss  xmm0, xmm6, xmm0
      vmovaps xmm6, [rsp+38h+var_18]
    }
  }
  return *(float *)&_XMM0;
}

/*
==============
bdHTTPXboxOne::initIXMLRequestInThread
==============
*/
__int64 bdHTTPXboxOne::initIXMLRequestInThread(bdHTTPXboxOne *this)
{
  bdMutex *p_m_mutex; 
  unsigned __int8 v3; 
  Microsoft::WRL::ComPtr<IXMLHTTPRequest2> *p_m_request; 
  IXMLHTTPRequest2 *ptr; 
  HRESULT Instance; 
  HRESULT v7; 
  unsigned int v8; 
  bdHTTPHeaderOffsets *p_m_headerOffsets; 
  HRESULT v10; 
  __int64 v11; 
  unsigned int m_timeout; 
  HRESULT v13; 
  __int64 v15; 
  bdMutex *v16; 
  wchar_t v17[4096]; 
  wchar_t Destination[4096]; 

  p_m_mutex = &this->m_mutex;
  v16 = &this->m_mutex;
  bdMutex::lock(&this->m_mutex);
  v3 = 1;
  p_m_request = &this->m_request;
  ptr = this->m_request.ptr_;
  if ( ptr )
  {
    p_m_request->ptr_ = NULL;
    ptr->Release(ptr);
  }
  Instance = CoCreateInstance(&GUID_88d96a09_f192_11d4_a65f_0040963251e5, NULL, 0x15u, &GUID_e5d37dc0_552a_4d52_9cc0_a14d546fbd04, (LPVOID *)&this->m_request.ptr_);
  if ( Instance )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdHTTPXboxOne", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpxboxone.cpp", "bdHTTPXboxOne::initIXMLRequestInThread", 0x28Fu, "failed to initialize m_request: [0x%08X]", Instance);
LABEL_22:
    v3 = 0;
LABEL_23:
    LODWORD(v15) = GetLastError();
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdHTTPXboxOne", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpxboxone.cpp", "bdHTTPXboxOne::initIXMLRequestInThread", 0x2D2u, "Cannot create and init IXMLHTTPRequest2: Error [0x%08X]", v15);
    this->abortOperation(this);
    this->m_threadStatus = BD_HTTPTHREAD_FAILED;
    goto LABEL_24;
  }
  v7 = ((__int64 (__fastcall *)(IXMLHTTPRequest2 *, wchar_t *, wchar_t *, IXMLHTTPRequest2Callback *, _QWORD, _QWORD, _QWORD, _QWORD, __int64, bdMutex *))p_m_request->ptr_->Open)(p_m_request->ptr_, this->m_verb, this->m_url, this->m_XHRCallback.ptr_, 0i64, 0i64, 0i64, 0i64, -2i64, v16);
  v8 = 1;
  if ( v7 || (v7 = p_m_request->ptr_->SetProperty(p_m_request->ptr_, XHR_PROP_ONDATA_THRESHOLD, 0x1FFFFui64)) != 0 || (v7 = p_m_request->ptr_->SetProperty(p_m_request->ptr_, XHR_PROP_NO_CRED_PROMPT, 1ui64)) != 0 )
  {
    LODWORD(v15) = v7;
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdHTTPXboxOne", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpxboxone.cpp", "bdHTTPXboxOne::initIXMLRequestInThread", 0x2A6u, "http request error occured [0x%08X]", v15);
    goto LABEL_22;
  }
  p_m_headerOffsets = &this->m_headerOffsets;
  if ( !this->m_headerOffsets.m_numHeaders )
    p_m_headerOffsets = NULL;
  if ( p_m_headerOffsets )
  {
    do
    {
      wcsncpy_s(Destination, 0x1000ui64, &this->m_headers[p_m_headerOffsets->m_offsets[0].m_key], p_m_headerOffsets->m_offsets[0].m_keyLen);
      wcsncpy_s(v17, 0x1000ui64, &this->m_headers[p_m_headerOffsets->m_offsets[0].m_value], p_m_headerOffsets->m_offsets[0].m_valueLen);
      v10 = p_m_request->ptr_->SetRequestHeader(p_m_request->ptr_, Destination, v17);
      if ( v10 )
      {
        LODWORD(v15) = v10;
        bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdHTTPXboxOne", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpxboxone.cpp", "bdHTTPXboxOne::initIXMLRequestInThread", 0x2BCu, "Error setting HTTP header: [0x%08X]", v15);
        v3 = 0;
      }
      v11 = v8++;
      p_m_headerOffsets = NULL;
      if ( (unsigned int)v11 < this->m_headerOffsets.m_numHeaders )
        p_m_headerOffsets = (bdHTTPHeaderOffsets *)((char *)&this->m_headerOffsets + 8 * v11);
    }
    while ( p_m_headerOffsets );
    p_m_mutex = &this->m_mutex;
    if ( !v3 )
      goto LABEL_23;
  }
  m_timeout = this->m_timeout;
  if ( m_timeout )
  {
    v13 = p_m_request->ptr_->SetProperty(p_m_request->ptr_, XHR_PROP_TIMEOUT, m_timeout);
    if ( v13 )
    {
      LODWORD(v15) = v13;
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdHTTPXboxOne", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpxboxone.cpp", "bdHTTPXboxOne::initIXMLRequestInThread", 0x2CAu, "Error setting HTTP request timeout: [0x%08X]", v15);
      goto LABEL_22;
    }
  }
LABEL_24:
  bdMutex::unlock(p_m_mutex);
  return v3;
}

/*
==============
bdHTTPXboxOne::initRequest
==============
*/
char bdHTTPXboxOne::initRequest(bdHTTPXboxOne *this, bdHTTP::bdOperation operation, const char *const url, const unsigned int timeout)
{
  bool v8; 
  const char *v10; 
  __int64 v11; 
  __int64 v12; 
  bool v13; 
  bdThread *v14; 
  size_t PtNumOfCharConverted[3]; 

  PtNumOfCharConverted[1] = -2i64;
  if ( bdHTTPXboxOne::resetTask(this) )
  {
    this->m_timeout = timeout;
    this->m_operation = operation;
    v8 = convertUTF8ToUTF16(this->m_url, 0x400u, url);
    switch ( this->m_operation )
    {
      case BD_GET:
        if ( !v8 )
          goto LABEL_8;
        bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
        v10 = "GET";
        v11 = -1i64;
        do
          ++v11;
        while ( SrcBuf[v11] );
        break;
      case BD_POST:
        if ( !v8 )
          goto LABEL_8;
        bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
        v10 = "POST";
        v11 = -1i64;
        do
          ++v11;
        while ( method[v11] );
        break;
      case BD_PUT:
        if ( !v8 )
          goto LABEL_8;
        bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
        v10 = "PUT";
        v11 = -1i64;
        do
          ++v11;
        while ( aPut[v11] );
        break;
      case BD_DELETE:
        if ( !v8 )
          goto LABEL_8;
        bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
        v10 = "DELETE";
        v11 = -1i64;
        do
          ++v11;
        while ( aDelete[v11] );
        break;
      case BD_COPY:
        if ( !v8 )
          goto LABEL_8;
        bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
        v10 = "COPY";
        v11 = -1i64;
        do
          ++v11;
        while ( aCopy_1[v11] );
        break;
      default:
        bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdHTTPXboxOne", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpxboxone.cpp", "bdHTTPXboxOne::initRequest", 0xC1u, "Operation not supported.");
LABEL_8:
        this->m_status = BD_MAX_STATUS;
        bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdHTTPXboxOne", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpxboxone.cpp", "bdHTTPXboxOne::initRequest", 0xD0u, "Initializing HTTP request with URL [%s] failed", url);
        return 0;
    }
    v12 = v11 + 1;
    mbstowcs_s(PtNumOfCharConverted, this->m_verb, 0x10ui64, v10, 0xFFFFFFFFFFFFFFFFui64);
    v13 = PtNumOfCharConverted[0] == v12;
    bdHandleAssert(PtNumOfCharConverted[0] == v12, "ok", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpxboxone.cpp", "convertUTF8ToUTF16", 0x42Fu, "Converted length[%u] does not equal length[%u]", PtNumOfCharConverted[0], v12);
    if ( !v13 )
      goto LABEL_8;
    if ( !this->m_instanceThread )
    {
      v14 = (bdThread *)bdMemory::allocate(0x40ui64);
      PtNumOfCharConverted[0] = (size_t)v14;
      if ( v14 )
        bdThread::bdThread(v14, &this->bdRunnable, this->m_threadPriority, 0x8000u, this->m_coreAffinity);
      this->m_instanceThread = v14;
      if ( !bdThread::start(v14, NULL, 0i64, NULL) )
      {
        bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdHTTPXboxOne", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpxboxone.cpp", "bdHTTPXboxOne::startInstanceThread", 0x75u, "Couldn't start a bdHTTP thread.");
        goto LABEL_8;
      }
    }
    this->m_status = BD_DONE;
    return 1;
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdHTTPXboxOne", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpxboxone.cpp", "bdHTTPXboxOne::initRequest", 0xD5u, "Task already in progress");
    return 0;
  }
}

/*
==============
bdHTTPXboxOne::logMicrosoftErrorCode
==============
*/
void bdHTTPXboxOne::logMicrosoftErrorCode(bdHTTPXboxOne *this, HRESULT code)
{
  if ( code > -2015559679 )
  {
    switch ( code )
    {
      case -2015559678:
        bdLogMessage(BD_LOG_INFO, "info/", "bdHTTPXboxOne", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpxboxone.cpp", "bdHTTPXboxOne::logMicrosoftErrorCode", 0x386u, "Microsoft Error code: AM_E_NO_CONSOLE_CERTIFICATE");
        break;
      case -2015559677:
        bdLogMessage(BD_LOG_INFO, "info/", "bdHTTPXboxOne", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpxboxone.cpp", "bdHTTPXboxOne::logMicrosoftErrorCode", 0x387u, "Microsoft Error code: AM_E_XASD_UNEXPECTED");
        break;
      case -2015559676:
        bdLogMessage(BD_LOG_INFO, "info/", "bdHTTPXboxOne", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpxboxone.cpp", "bdHTTPXboxOne::logMicrosoftErrorCode", 0x388u, "Microsoft Error code: AM_E_XASU_UNEXPECTED");
        break;
      case -2015559675:
        bdLogMessage(BD_LOG_INFO, "info/", "bdHTTPXboxOne", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpxboxone.cpp", "bdHTTPXboxOne::logMicrosoftErrorCode", 0x389u, "Microsoft Error code: AM_E_XAST_UNEXPECTED");
        break;
      case -2015559674:
        bdLogMessage(BD_LOG_INFO, "info/", "bdHTTPXboxOne", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpxboxone.cpp", "bdHTTPXboxOne::logMicrosoftErrorCode", 0x36Du, "AM_E_XSTS_UNEXPECTED - Relying Party certificate is not trusted by Live (Check NSAL or contact Microsoft)");
        break;
      case -2015559673:
        bdLogMessage(BD_LOG_INFO, "info/", "bdHTTPXboxOne", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpxboxone.cpp", "bdHTTPXboxOne::logMicrosoftErrorCode", 0x38Au, "Microsoft Error code: AM_E_XDEVICE_UNEXPECTED");
        break;
      case -2015559672:
        bdLogMessage(BD_LOG_INFO, "info/", "bdHTTPXboxOne", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpxboxone.cpp", "bdHTTPXboxOne::logMicrosoftErrorCode", 0x38Bu, "Microsoft Error code: AM_E_DEVMODE_NOT_AUTHORIZED");
        break;
      case -2015559671:
        bdLogMessage(BD_LOG_INFO, "info/", "bdHTTPXboxOne", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpxboxone.cpp", "bdHTTPXboxOne::logMicrosoftErrorCode", 0x372u, "AM_E_NOT_AUTHORIZED - User not authorized to get XSTS token (Possibly SandboxId unset / incorrect)");
        break;
      case -2015559670:
        bdLogMessage(BD_LOG_INFO, "info/", "bdHTTPXboxOne", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpxboxone.cpp", "bdHTTPXboxOne::logMicrosoftErrorCode", 0x38Cu, "Microsoft Error code: AM_E_FORBIDDEN");
        break;
      case -2015559669:
        bdLogMessage(BD_LOG_INFO, "info/", "bdHTTPXboxOne", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpxboxone.cpp", "bdHTTPXboxOne::logMicrosoftErrorCode", 0x377u, "AM_E_UNKNOWN_TARGET - NSAL not available to Console (file or XDP)");
        break;
      case -2015559668:
        bdLogMessage(BD_LOG_INFO, "info/", "bdHTTPXboxOne", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpxboxone.cpp", "bdHTTPXboxOne::logMicrosoftErrorCode", 0x38Du, "Microsoft Error code: AM_E_INVALID_NSAL_DATA");
        break;
      case -2015559667:
        bdLogMessage(BD_LOG_INFO, "info/", "bdHTTPXboxOne", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpxboxone.cpp", "bdHTTPXboxOne::logMicrosoftErrorCode", 0x37Au, "AM_E_TITLE_NOT_AUTHENTICATED - Problem with Xbox Live title configuration (XDP)");
        break;
      case -2015559666:
        bdLogMessage(BD_LOG_INFO, "info/", "bdHTTPXboxOne", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpxboxone.cpp", "bdHTTPXboxOne::logMicrosoftErrorCode", 0x38Eu, "Microsoft Error code: AM_E_TITLE_NOT_AUTHORIZED");
        break;
      case -2015559665:
        bdLogMessage(BD_LOG_INFO, "info/", "bdHTTPXboxOne", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpxboxone.cpp", "bdHTTPXboxOne::logMicrosoftErrorCode", 0x38Fu, "Microsoft Error code: AM_E_DEVICE_NOT_AUTHENTICATED");
        break;
      case -2015559664:
        bdLogMessage(BD_LOG_INFO, "info/", "bdHTTPXboxOne", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpxboxone.cpp", "bdHTTPXboxOne::logMicrosoftErrorCode", 0x390u, "Microsoft Error code: AM_E_INVALID_USER_INDEX");
        break;
      case -2015559663:
        bdLogMessage(BD_LOG_INFO, "info/", "bdHTTPXboxOne", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpxboxone.cpp", "bdHTTPXboxOne::logMicrosoftErrorCode", 0x391u, "Microsoft Error code: AM_E_USER_HASH_MISSING");
        break;
      case -2015559662:
        bdLogMessage(BD_LOG_INFO, "info/", "bdHTTPXboxOne", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpxboxone.cpp", "bdHTTPXboxOne::logMicrosoftErrorCode", 0x392u, "Microsoft Error code: AM_E_ACTOR_NOT_SPECIFIED");
        break;
      case -2015559661:
        bdLogMessage(BD_LOG_INFO, "info/", "bdHTTPXboxOne", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpxboxone.cpp", "bdHTTPXboxOne::logMicrosoftErrorCode", 0x393u, "Microsoft Error code: AM_E_USER_NOT_FOUND");
        break;
      case -2015559660:
        bdLogMessage(BD_LOG_INFO, "info/", "bdHTTPXboxOne", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpxboxone.cpp", "bdHTTPXboxOne::logMicrosoftErrorCode", 0x394u, "Microsoft Error code: AM_E_INVALID_SUBTOKEN");
        break;
      case -2015559659:
        bdLogMessage(BD_LOG_INFO, "info/", "bdHTTPXboxOne", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpxboxone.cpp", "bdHTTPXboxOne::logMicrosoftErrorCode", 0x395u, "Microsoft Error code: AM_E_INVALID_ENVIRONMENT");
        break;
      case -2015559658:
        bdLogMessage(BD_LOG_INFO, "info/", "bdHTTPXboxOne", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpxboxone.cpp", "bdHTTPXboxOne::logMicrosoftErrorCode", 0x396u, "Microsoft Error code: AM_E_XASD_TIMEOUT");
        break;
      case -2015559657:
        bdLogMessage(BD_LOG_INFO, "info/", "bdHTTPXboxOne", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpxboxone.cpp", "bdHTTPXboxOne::logMicrosoftErrorCode", 0x397u, "Microsoft Error code: AM_E_XASU_TIMEOUT");
        break;
      case -2015559656:
        bdLogMessage(BD_LOG_INFO, "info/", "bdHTTPXboxOne", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpxboxone.cpp", "bdHTTPXboxOne::logMicrosoftErrorCode", 0x398u, "Microsoft Error code: AM_E_XAST_TIMEOUT");
        break;
      case -2015559655:
        bdLogMessage(BD_LOG_INFO, "info/", "bdHTTPXboxOne", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpxboxone.cpp", "bdHTTPXboxOne::logMicrosoftErrorCode", 0x399u, "Microsoft Error code: AM_E_XSTS_TIMEOUT");
        break;
      case -2015559654:
        bdLogMessage(BD_LOG_INFO, "info/", "bdHTTPXboxOne", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpxboxone.cpp", "bdHTTPXboxOne::logMicrosoftErrorCode", 0x39Au, "Microsoft Error code: AM_E_LIVE_CONNECTION_REQUIRED");
        break;
      case -2015559653:
        bdLogMessage(BD_LOG_INFO, "info/", "bdHTTPXboxOne", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpxboxone.cpp", "bdHTTPXboxOne::logMicrosoftErrorCode", 0x39Bu, "Microsoft Error code: AM_E_DEVICE_XTOKEN_EXPIRED");
        break;
      case -2015559652:
        bdLogMessage(BD_LOG_INFO, "info/", "bdHTTPXboxOne", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpxboxone.cpp", "bdHTTPXboxOne::logMicrosoftErrorCode", 0x39Cu, "Microsoft Error code: AM_E_SPONSOR_NOT_AUTHENTICATED");
        break;
      case -2015559651:
        bdLogMessage(BD_LOG_INFO, "info/", "bdHTTPXboxOne", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpxboxone.cpp", "bdHTTPXboxOne::logMicrosoftErrorCode", 0x39Du, "Microsoft Error code: AM_E_NO_SPONSOR");
        break;
      case -2015559650:
        bdLogMessage(BD_LOG_INFO, "info/", "bdHTTPXboxOne", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpxboxone.cpp", "bdHTTPXboxOne::logMicrosoftErrorCode", 0x39Eu, "Microsoft Error code: AM_E_NO_NETWORK");
        break;
      case -2015559648:
        bdLogMessage(BD_LOG_INFO, "info/", "bdHTTPXboxOne", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpxboxone.cpp", "bdHTTPXboxOne::logMicrosoftErrorCode", 0x39Fu, "Microsoft Error code: AM_E_XTITLE_UNEXPECTED");
        break;
      case -2015559647:
        bdLogMessage(BD_LOG_INFO, "info/", "bdHTTPXboxOne", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpxboxone.cpp", "bdHTTPXboxOne::logMicrosoftErrorCode", 0x37Du, "AM_E_NO_TOKEN_REQUIRED - NSAL not configured correctly for target");
        break;
      default:
        goto LABEL_39;
    }
  }
  else if ( code == -2015559679 )
  {
    bdLogMessage(BD_LOG_INFO, "info/", "bdHTTPXboxOne", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpxboxone.cpp", "bdHTTPXboxOne::logMicrosoftErrorCode", 0x385u, "Microsoft Error code: AM_E_XSTS_UNEXPECTED");
  }
  else if ( code == -2146051054 )
  {
    bdLogMessage(BD_LOG_INFO, "info/", "bdHTTPXboxOne", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpxboxone.cpp", "bdHTTPXboxOne::logMicrosoftErrorCode", 0x382u, "XO_E_CONTENT_ISOLATION - Problem with Sandbox configuration (Check XDP & Check SandboxId is correct and User is authorized to access the Sandbox)");
  }
  else
  {
LABEL_39:
    bdLogMessage(BD_LOG_INFO, "info/", "bdHTTPXboxOne", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpxboxone.cpp", "bdHTTPXboxOne::logMicrosoftErrorCode", 0x3A1u, "Unknown Microsoft Error Code: [0x%X] (Please check developer.xboxlive.com)", code);
  }
}

/*
==============
bdHTTPXboxOne::resetTask
==============
*/
char bdHTTPXboxOne::resetTask(bdHTTPXboxOne *this)
{
  wchar_t *m_authToken; 
  wchar_t *m_authSignature; 
  bdRequestStream *ptr; 

  if ( this->m_status == BD_FAILED )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdHTTPXboxOne", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpxboxone.cpp", "bdHTTPXboxOne::resetTask", 0x3DAu, "Operation not completed please call abort before resetTask or starting a new request");
    return 0;
  }
  else
  {
    this->m_operation = BD_NONE;
    this->m_status = BD_PENDING;
    bdHttpCallbackHandler::resetTask(this->m_httpCallback.ptr_);
    this->m_url[0] = 0;
    this->m_verb[0] = 0;
    this->m_headers[0] = 0;
    m_authToken = this->m_authToken;
    if ( m_authToken )
    {
      bdMemory::deallocate(m_authToken);
      this->m_authToken = NULL;
    }
    m_authSignature = this->m_authSignature;
    if ( m_authSignature )
    {
      bdMemory::deallocate(m_authSignature);
      this->m_authSignature = NULL;
    }
    this->m_uploadBuffer = NULL;
    this->m_uploadSize = 0;
    this->m_uploadHandler = NULL;
    this->m_downloadBuffer = NULL;
    this->m_downloadBufferSize = 0;
    this->m_downloadHandler = NULL;
    this->m_httpErrorCode = 0;
    this->m_responseLength = 0;
    bdStopwatch::reset(&this->m_stopwatch);
    bdStopwatch::start(&this->m_stopwatch);
    *(_QWORD *)&this->m_uploadRate = 0i64;
    memset_0(&this->m_headerOffsets, 0, 0x100ui64);
    this->m_headerOffsets.m_numHeaders = 0;
    ptr = this->m_requestStream.ptr_;
    if ( ptr )
    {
      this->m_requestStream.ptr_ = NULL;
      ptr->Release(ptr);
    }
    return 1;
  }
}

/*
==============
bdHTTPXboxOne::run
==============
*/
__int64 bdHTTPXboxOne::run(bdHTTPXboxOne *this, void *args)
{
  bdHTTPXboxOne *v3; 

  while ( !LOBYTE(this->m_status) )
  {
    bdSemaphore::wait((bdSemaphore *)this->m_instanceThread);
    if ( this->m_chunkedXboxOne.m_coreAffinity == 1 )
    {
      v3 = (bdHTTPXboxOne *)((char *)this - 16);
      if ( LOBYTE(this->m_chunkedXboxOne.m_threadPriority) )
        goto LABEL_7;
      if ( bdHTTPXboxOne::initIXMLRequestInThread(v3) )
      {
        bdHTTPXboxOne::fillRequestStream((bdHTTPXboxOne *)((char *)this - 16));
        v3 = (bdHTTPXboxOne *)((char *)this - 16);
        if ( !BYTE1(this->m_requestStream.ptr_) )
        {
LABEL_7:
          bdHTTPXboxOne::sendHTTPRequest(v3);
          continue;
        }
        bdHTTPXboxOne::startFetchingToken(v3);
      }
    }
  }
  return 0i64;
}

/*
==============
bdHTTPXboxOne::sendHTTPRequest
==============
*/
void bdHTTPXboxOne::sendHTTPRequest(bdHTTPXboxOne *this)
{
  wchar_t *m_authToken; 
  bool v3; 
  wchar_t *m_authSignature; 
  bdRequestStream *ptr; 
  int started; 
  IXMLHTTPRequest2 *v7; 
  HRESULT (__fastcall *Send)(IXMLHTTPRequest2 *, ISequentialStream *, unsigned __int64); 
  unsigned __int64 v9; 
  int v10; 

  m_authToken = this->m_authToken;
  v3 = 1;
  if ( m_authToken )
    v3 = bdHTTPXboxOne::setHeader(this, L"Authorization", m_authToken) && !this->m_request.ptr_->SetRequestHeader(this->m_request.ptr_, L"Authorization", this->m_authToken);
  m_authSignature = this->m_authSignature;
  if ( v3 && (!m_authSignature || bdHTTPXboxOne::setHeader(this, L"Signature", m_authSignature) && !this->m_request.ptr_->SetRequestHeader(this->m_request.ptr_, L"Signature", this->m_authSignature)) )
  {
    ptr = this->m_requestStream.ptr_;
    if ( ptr )
    {
      if ( bdRequestStream::Size(ptr) )
      {
        v7 = this->m_request.ptr_;
        Send = v7->Send;
        v9 = bdRequestStream::Size(this->m_requestStream.ptr_);
        started = Send(v7, this->m_requestStream.ptr_, v9);
      }
      else
      {
        started = bdHTTPChunkedXboxOne::startChunkedUpload(&this->m_chunkedXboxOne, this->m_url, this->m_uploadHandler, 0);
      }
    }
    else
    {
      started = this->m_request.ptr_->Send(this->m_request.ptr_, NULL, 0i64);
    }
    if ( started < 0 )
    {
      v10 = started;
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdHTTPXboxOne", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpxboxone.cpp", "bdHTTPXboxOne::sendHTTPRequest", 0x3CEu, "HTTP request error occured [0x%0x]", v10);
      this->abortOperation(this);
      this->m_threadStatus = BD_HTTPTHREAD_FAILED;
    }
  }
}

/*
==============
bdHTTPXboxOne::sendRequest
==============
*/
__int64 bdHTTPXboxOne::sendRequest(bdHTTPXboxOne *this)
{
  bdHTTP::bdStatus m_status; 
  bdHTTP::bdStatus v4; 

  if ( this->m_status == BD_DONE )
  {
    this->m_threadStatus = BD_HTTPTHREAD_WORKING;
    this->m_status = BD_FAILED;
    this->m_sending = 0;
    bdSemaphore::release(this->m_httpSemaphore);
  }
  else
  {
    m_status = this->m_status;
    bdHandleAssert(0, "\"ok\" && false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpxboxone.cpp", "bdHTTPXboxOne::sendRequest", 0x151u, "Cannot sendRequest while state is not BD_INITIALIZED. Current State [%d]. Aborting operation", m_status);
    v4 = this->m_status;
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "BD_ASSERT", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpxboxone.cpp", "bdHTTPXboxOne::sendRequest", 0x151u, "Cannot sendRequest while state is not BD_INITIALIZED. Current State [%d]. Aborting operation", v4);
    this->abortOperation(this);
  }
  return ((__int64 (__fastcall *)(bdHTTPXboxOne *))this->getStatus)(this);
}

/*
==============
bdHTTPXboxOne::setAnyUserAllowed
==============
*/
void bdHTTPXboxOne::setAnyUserAllowed(bdHTTPXboxOne *this, bool useAnyUserAllowed)
{
  bdWinRTPtr *m_ptr; 
  bdWinRTPtr *v4; 

  this->m_useAnyUserAllowed = useAnyUserAllowed;
  if ( useAnyUserAllowed )
  {
    m_ptr = this->m_user.m_ptr;
    if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
    {
      v4 = this->m_user.m_ptr;
      if ( v4 )
        ((void (__fastcall *)(bdWinRTPtr *, __int64))v4->~bdReferencable)(v4, 1i64);
    }
    this->m_user.m_ptr = NULL;
  }
}

/*
==============
bdHTTPXboxOne::setDownloadBuffer
==============
*/
_BOOL8 bdHTTPXboxOne::setDownloadBuffer(bdHTTPXboxOne *this, char *buffer, unsigned int size)
{
  bdHTTP::bdStatus m_status; 
  bool v5; 
  _BOOL8 result; 

  m_status = this->m_status;
  v5 = m_status == BD_DONE;
  if ( m_status != BD_DONE )
  {
    bdHandleAssert(0, "\"ok\" && false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpxboxone.cpp", "bdHTTPXboxOne::setDownloadBuffer", 0x129u, "Cannot set download buffer while state is not BD_INITIALIZED. Current State [%d]", this->m_status);
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "BD_ASSERT", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpxboxone.cpp", "bdHTTPXboxOne::setDownloadBuffer", 0x129u, "Cannot set download buffer while state is not BD_INITIALIZED. Current State [%d]", this->m_status);
    return v5;
  }
  if ( !buffer )
    return v5;
  result = v5;
  if ( size )
  {
    this->m_downloadBuffer = buffer;
    this->m_downloadBufferSize = size;
  }
  return result;
}

/*
==============
bdHTTPXboxOne::setDownloadHandler
==============
*/
_BOOL8 bdHTTPXboxOne::setDownloadHandler(bdHTTPXboxOne *this, bdDownloadInterceptor *handler)
{
  bdHTTP::bdStatus m_status; 
  bool v4; 

  m_status = this->m_status;
  v4 = m_status == BD_DONE;
  if ( m_status == BD_DONE )
  {
    if ( handler )
      this->m_downloadHandler = handler;
    return v4;
  }
  else
  {
    bdHandleAssert(0, "\"ok\" && false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpxboxone.cpp", "bdHTTPXboxOne::setDownloadHandler", 0x137u, "Cannot set download handler while state is not BD_INITIALIZED. Current State [%d]", this->m_status);
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "BD_ASSERT", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpxboxone.cpp", "bdHTTPXboxOne::setDownloadHandler", 0x137u, "Cannot set download handler while state is not BD_INITIALIZED. Current State [%d]", this->m_status);
    return v4;
  }
}

/*
==============
bdHTTPXboxOne::setDownloadRate
==============
*/
void bdHTTPXboxOne::setDownloadRate(bdHTTPXboxOne *this)
{
  char v4; 
  char v5; 

  _RBX = this;
  *(double *)&_XMM0 = bdStopwatch::getElapsedTimeInSeconds(&this->m_stopwatch);
  __asm { vcomiss xmm0, cs:__real@3dcccccd }
  if ( !(v4 | v5) )
  {
    __asm { vmovaps [rsp+38h+var_18], xmm6 }
    bdHttpCallbackHandler::getDownloadProgress(_RBX->m_httpCallback.ptr_);
    __asm
    {
      vxorps  xmm6, xmm6, xmm6
      vcvtsi2ss xmm6, xmm6, rax
    }
    bdStopwatch::getElapsedTimeInSeconds(&_RBX->m_stopwatch);
    __asm
    {
      vdivss  xmm1, xmm6, xmm0
      vmovaps xmm6, [rsp+38h+var_18]
      vmovss  dword ptr [rbx+89E4h], xmm1
    }
  }
}

/*
==============
bdHTTPXboxOne::setHeader
==============
*/
char bdHTTPXboxOne::setHeader(bdHTTPXboxOne *this, const wchar_t *key, const wchar_t *value)
{
  bdMutex *p_m_mutex; 
  wchar_t *m_headers; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 
  unsigned int m_numHeaders; 
  bdHTTPHeaderOffsets::bdHTTPHeaderOffset v14; 

  if ( !key || !value )
    return 0;
  p_m_mutex = &this->m_mutex;
  bdMutex::lock(&this->m_mutex);
  m_headers = this->m_headers;
  bdHandleAssert(this->m_headers != NULL, "(s != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpxboxone.cpp", "bdStrlen", 0x422u, "Null ptr in bdStrlen", -2i64);
  v8 = -1i64;
  v9 = -1i64;
  do
    ++v9;
  while ( m_headers[v9] );
  v14.m_key = v9;
  wcsncat_s(this->m_headers, 0x4000ui64, key, 0xFFFFFFFFFFFFFFFFui64);
  wcsncat_s(this->m_headers, 0x4000ui64, L": ", 0xFFFFFFFFFFFFFFFFui64);
  bdHandleAssert(1, "(s != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpxboxone.cpp", "bdStrlen", 0x422u, "Null ptr in bdStrlen");
  v10 = -1i64;
  do
    ++v10;
  while ( key[v10] );
  v14.m_keyLen = v10;
  bdHandleAssert(this->m_headers != NULL, "(s != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpxboxone.cpp", "bdStrlen", 0x422u, "Null ptr in bdStrlen");
  v11 = -1i64;
  do
    ++v11;
  while ( m_headers[v11] );
  v14.m_value = v11;
  wcsncat_s(this->m_headers, 0x4000ui64, value, 0xFFFFFFFFFFFFFFFFui64);
  wcsncat_s(this->m_headers, 0x4000ui64, L"\r\n", 0xFFFFFFFFFFFFFFFFui64);
  bdHandleAssert(1, "(s != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpxboxone.cpp", "bdStrlen", 0x422u, "Null ptr in bdStrlen");
  do
    ++v8;
  while ( value[v8] );
  v14.m_valueLen = v8;
  m_numHeaders = this->m_headerOffsets.m_numHeaders;
  if ( m_numHeaders < 0x20 )
  {
    this->m_headerOffsets.m_offsets[m_numHeaders] = v14;
    ++this->m_headerOffsets.m_numHeaders;
  }
  bdMutex::unlock(p_m_mutex);
  return 1;
}

/*
==============
bdHTTPXboxOne::setHeader
==============
*/
char bdHTTPXboxOne::setHeader(bdHTTPXboxOne *this, const char *key, const char *value)
{
  bdHTTP::bdStatus m_status; 
  wchar_t valuea[4096]; 
  wchar_t dest[4096]; 

  m_status = this->m_status;
  if ( m_status != BD_DONE )
  {
    bdHandleAssert(0, "\"ok\" && false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpxboxone.cpp", "bdHTTPXboxOne::setHeader", 0xDFu, "Cannot set header while state is not BD_INITIALIZED. Current State [%d]", this->m_status);
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "BD_ASSERT", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpxboxone.cpp", "bdHTTPXboxOne::setHeader", 0xDFu, "Cannot set header while state is not BD_INITIALIZED. Current State [%d]", this->m_status);
  }
  bdHandleAssert(key != NULL, "(key != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpxboxone.cpp", "bdHTTPXboxOne::setHeader", 0xE1u, "Key cannot be NULL");
  bdHandleAssert(value != NULL, "(value != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpxboxone.cpp", "bdHTTPXboxOne::setHeader", 0xE2u, "Value cannot be NULL");
  if ( m_status == BD_DONE && key && value && convertUTF8ToUTF16(dest, 0x1000u, key) && convertUTF8ToUTF16(valuea, 0x1000u, value) && bdHTTPXboxOne::setHeader(this, dest, valuea) )
    return 1;
  bdHandleAssert(0, "\"ok\" && false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpxboxone.cpp", "bdHTTPXboxOne::setHeader", 0xEFu, "Error setting HTTP header [%s: %s]", key, value);
  bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "BD_ASSERT", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpxboxone.cpp", "bdHTTPXboxOne::setHeader", 0xEFu, "Error setting HTTP header [%s: %s]", key, value);
  return 0;
}

/*
==============
bdHTTPXboxOne::setRequiresToken
==============
*/
void bdHTTPXboxOne::setRequiresToken(bdHTTPXboxOne *this, bool requiresToken)
{
  this->m_requiresToken = requiresToken;
}

/*
==============
bdHTTPXboxOne::setTimeout
==============
*/
_BOOL8 bdHTTPXboxOne::setTimeout(bdHTTPXboxOne *this, unsigned int timeout)
{
  bdHTTP::bdStatus m_status; 
  bool v4; 
  _BOOL8 result; 
  bdHTTP::bdStatus v6; 
  bdHTTP::bdStatus v7; 

  m_status = this->m_status;
  v4 = m_status == BD_DONE;
  if ( m_status == BD_DONE )
  {
    result = v4;
    this->m_timeout = timeout;
  }
  else
  {
    v6 = this->m_status;
    bdHandleAssert(0, "\"ok\" && false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpxboxone.cpp", "bdHTTPXboxOne::setTimeout", 0x144u, "Cannot set timeout while state is not BD_INITIALIZED. Current State [%d]", v6);
    v7 = this->m_status;
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "BD_ASSERT", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpxboxone.cpp", "bdHTTPXboxOne::setTimeout", 0x144u, "Cannot set timeout while state is not BD_INITIALIZED. Current State [%d]", v7);
    return v4;
  }
  return result;
}

/*
==============
bdHTTPXboxOne::setUploadData
==============
*/
bool bdHTTPXboxOne::setUploadData(bdHTTPXboxOne *this, const char *buffer, unsigned int size)
{
  bool result; 
  bdHTTP::bdStatus m_status; 
  bdHTTP::bdStatus v8; 

  if ( this->m_status != BD_DONE )
  {
    m_status = this->m_status;
    bdHandleAssert(0, "\"ok\" && false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpxboxone.cpp", "bdHTTPXboxOne::setUploadData", 0xF8u, "Cannot set upload data while state is not BD_INITIALIZED. Current State [%d]", m_status);
    v8 = this->m_status;
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "BD_ASSERT", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpxboxone.cpp", "bdHTTPXboxOne::setUploadData", 0xF8u, "Cannot set upload data while state is not BD_INITIALIZED. Current State [%d]", v8);
LABEL_3:
    bdHandleAssert(0, "\"ok\" && false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpxboxone.cpp", "bdHTTPXboxOne::setUploadData", 0x101u, "Error setting upload data");
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "BD_ASSERT", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpxboxone.cpp", "bdHTTPXboxOne::setUploadData", 0x101u, "Error setting upload data");
    return 0;
  }
  if ( !this->setHeader(this, "Content-Length", size) )
    goto LABEL_3;
  this->m_uploadBuffer = buffer;
  result = 1;
  this->m_uploadSize = size;
  return result;
}

/*
==============
bdHTTPXboxOne::setUploadHandler
==============
*/
bool bdHTTPXboxOne::setUploadHandler(bdHTTPXboxOne *this, bdUploadInterceptor *handler, unsigned int size)
{
  bdHTTP::bdStatus m_status; 
  bool v7; 
  bdHTTPXboxOne_vtbl *v8; 
  bool v9; 
  bdHTTP::bdStatus v11; 
  bdHTTP::bdStatus v12; 

  m_status = this->m_status;
  v7 = m_status == BD_DONE;
  if ( m_status == BD_DONE )
  {
    v8 = this->bdHTTP::__vftable;
    if ( !size )
    {
      if ( !v8->setHeader(this, "Transfer-Encoding", "chunked") )
        return 0;
      v7 = 1;
      goto LABEL_9;
    }
    v9 = v8->setHeader(this, "Content-Length", size);
    this->m_uploadSize = size;
    v7 = v9;
  }
  else
  {
    v11 = this->m_status;
    bdHandleAssert(0, "\"ok\" && false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpxboxone.cpp", "bdHTTPXboxOne::setUploadHandler", 0x10Au, "Cannot set upload handler while state is not BD_INITIALIZED. Current State [%d]", v11);
    v12 = this->m_status;
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "BD_ASSERT", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpxboxone.cpp", "bdHTTPXboxOne::setUploadHandler", 0x10Au, "Cannot set upload handler while state is not BD_INITIALIZED. Current State [%d]", v12);
  }
  if ( !v7 )
    return 0;
LABEL_9:
  if ( !handler )
    return 0;
  this->m_uploadHandler = handler;
  return v7;
}

/*
==============
bdHTTPXboxOne::setUploadRate
==============
*/
void bdHTTPXboxOne::setUploadRate(bdHTTPXboxOne *this)
{
  bdRequestStream *ptr; 

  ptr = this->m_requestStream.ptr_;
  _RBX = this;
  if ( ptr )
  {
    __asm { vmovaps [rsp+38h+var_18], xmm6 }
    *(double *)&_XMM0 = bdStopwatch::getElapsedTimeInSeconds(&this->m_stopwatch);
    __asm
    {
      vmovss  xmm1, cs:__real@3f800000
      vdivss  xmm6, xmm1, xmm0
    }
    bdRequestStream::getBytesUploaded(ptr);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rax
      vmulss  xmm1, xmm0, xmm6
      vmovaps xmm6, [rsp+38h+var_18]
      vmovss  dword ptr [rbx+89E0h], xmm1
    }
  }
}

/*
==============
bdHTTPXboxOne::setUser
==============
*/
_BOOL8 bdHTTPXboxOne::setUser(bdHTTPXboxOne *this, unsigned int userIndex)
{
  bdWinRTPtr *v4; 
  IUnknown *v5; 
  int v6; 
  bool v7; 
  Windows::Foundation::Collections::IVectorView<Windows::Xbox::System::User _> *v8; 
  int v9; 
  IUnknown *v10; 
  IUnknown *v11; 
  bdWinRTPtr *v12; 
  bdWinRTPtr *v13; 
  bdWinRTPtr *m_ptr; 
  bdWinRTPtr *v15; 
  unsigned int v17; 
  IUnknown *ptr; 

  v4 = NULL;
  v5 = (IUnknown *)Windows::Xbox::System::User::Users::get();
  ptr = v5;
  v6 = ((__int64 (__fastcall *)(IUnknown *, unsigned int *))v5->__vftable[2].AddRef)(v5, &v17);
  if ( v6 < 0 )
    __abi_WinRTraiseException(v6);
  v7 = userIndex < v17;
  v5->Release(v5);
  if ( v7 )
  {
    v8 = Windows::Xbox::System::User::Users::get();
    ptr = NULL;
    v9 = v8->Platform::Object::__vftable[1].__abi_QueryInterface(v8, (Platform::Guid *)userIndex, (void **)&ptr);
    if ( v9 < 0 )
      __abi_WinRTraiseException(v9);
    v10 = ptr;
    v11 = ptr;
    if ( ptr )
    {
      ptr->AddRef(ptr);
      v10 = ptr;
    }
    if ( v10 )
      v10->Release(v10);
    v8->__abi_Release(v8);
    v12 = (bdWinRTPtr *)bdMemory::allocate(0x18ui64);
    if ( v12 )
    {
      bdWinRTPtr::bdWinRTPtr(v12, v11);
      v4 = v13;
    }
    m_ptr = this->m_user.m_ptr;
    if ( m_ptr )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
      {
        v15 = this->m_user.m_ptr;
        if ( v15 )
          ((void (__fastcall *)(bdWinRTPtr *, __int64))v15->~bdReferencable)(v15, 1i64);
      }
    }
    this->m_user.m_ptr = v4;
    if ( v4 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v4->m_refCount, 1u);
    if ( v11 )
      v11->Release(v11);
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdHTTPXboxOne", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpxboxone.cpp", "bdHTTPXboxOne::setUser", 0x1E8u, "Could not set user: invalid index [%u] specified.", userIndex);
  }
  return v7;
}

/*
==============
bdHTTPXboxOne::setUserByID
==============
*/
__int64 bdHTTPXboxOne::setUserByID(bdHTTPXboxOne *this, unsigned __int64 userID)
{
  bdWinRTPtr *v2; 
  int v3; 
  unsigned __int8 v4; 
  IUnknown *v5; 
  unsigned int v6; 
  __int64 v7; 
  int ActivationFactoryByPCWSTR; 
  int v9; 
  __int64 v10; 
  int v11; 
  char v12; 
  int v13; 
  int v14; 
  __int64 v15; 
  __int64 v16; 
  int v17; 
  __int64 v18; 
  __int64 v19; 
  int v20; 
  bdWinRTPtr *v21; 
  bdWinRTPtr *v22; 
  bdWinRTPtr *m_ptr; 
  bdWinRTPtr *v24; 
  __int64 v26; 
  __int64 v27; 
  Platform::Guid pGuid; 
  Platform::Guid v29; 
  IUnknown *v30; 
  int v31; 
  __int64 v32; 
  void *ppActivationFactory; 
  __int64 v34; 
  void *v35; 
  __int64 v36; 
  __int64 v37; 
  unsigned int v40; 

  v37 = -2i64;
  v2 = NULL;
  v3 = 0;
  bdHandleAssert(this->m_requiresToken, "m_requiresToken", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpxboxone.cpp", "bdHTTPXboxOne::setUserByID", 0x1C8u, "If no token is required then user should never be set");
  v4 = 0;
  v5 = NULL;
  v30 = NULL;
  v6 = 0;
  v7 = v36;
  while ( 1 )
  {
    if ( v4 )
      goto LABEL_18;
    pGuid.__vftable = (Platform::Object_vtbl *)0x4A507FC6B4F23A93i64;
    *(_DWORD *)&pGuid.__d = 9786289;
    *(_DWORD *)&pGuid.__h = 1352546326;
    ppActivationFactory = NULL;
    ActivationFactoryByPCWSTR = __winRT::__getActivationFactoryByPCWSTR((void *)L"Windows.Xbox.System.User", &pGuid, &ppActivationFactory);
    if ( ActivationFactoryByPCWSTR < 0 )
      __abi_WinRTraiseException(ActivationFactoryByPCWSTR);
    v32 = 0i64;
    v9 = (*(__int64 (__fastcall **)(void *, __int64 *))(*(_QWORD *)ppActivationFactory + 72i64))(ppActivationFactory, &v32);
    if ( v9 < 0 )
      __abi_WinRTraiseException(v9);
    v10 = v32;
    v7 = v32;
    if ( v32 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 8i64))(v32);
      v10 = v32;
    }
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16i64))(v10);
    v27 = v7;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8i64))(v7);
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16i64))(v7);
    if ( ppActivationFactory )
      (*(void (__fastcall **)(void *))(*(_QWORD *)ppActivationFactory + 16i64))(ppActivationFactory);
    v36 = v7;
    v3 |= 1u;
    v11 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v7 + 56i64))(v7, &v40);
    if ( v11 < 0 )
      __abi_WinRTraiseException(v11);
    if ( v6 >= v40 )
LABEL_18:
      v12 = 0;
    else
      v12 = 1;
    if ( (v3 & 1) != 0 )
    {
      v3 &= ~1u;
      if ( v7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16i64))(v7);
    }
    if ( !v12 )
      break;
    v29.__vftable = (Platform::Object_vtbl *)0x4A507FC6B4F23A93i64;
    *(_DWORD *)&v29.__d = 9786289;
    *(_DWORD *)&v29.__h = 1352546326;
    v35 = NULL;
    v13 = __winRT::__getActivationFactoryByPCWSTR((void *)L"Windows.Xbox.System.User", &v29, &v35);
    if ( v13 < 0 )
      __abi_WinRTraiseException(v13);
    v34 = 0i64;
    v14 = (*(__int64 (__fastcall **)(void *, __int64 *))(*(_QWORD *)v35 + 72i64))(v35, &v34);
    if ( v14 < 0 )
      __abi_WinRTraiseException(v14);
    v15 = v34;
    v16 = v34;
    if ( v34 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 8i64))(v34);
      v15 = v34;
    }
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16i64))(v15);
    v27 = v16;
    v26 = 0i64;
    if ( v16 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8i64))(v16);
    if ( v16 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16i64))(v16);
    if ( v35 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v35 + 16i64))(v35);
    v27 = v16;
    v26 = 0i64;
    v17 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v16 + 48i64))(v16, v6, &v26);
    if ( v17 < 0 )
      __abi_WinRTraiseException(v17);
    v18 = v26;
    v19 = v26;
    if ( v26 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 8i64))(v26);
      v18 = v26;
    }
    if ( v18 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16i64))(v18);
    v27 = v19;
    if ( v5 )
      v5->Release(v5);
    v5 = (IUnknown *)v19;
    v30 = (IUnknown *)v19;
    v27 = 0i64;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16i64))(v16);
    if ( !v19 )
      goto LABEL_46;
    v20 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v19 + 48i64))(v19, &v31);
    if ( v20 < 0 )
      __abi_WinRTraiseException(v20);
    if ( v31 == userID )
    {
      v4 = 1;
      ++v6;
    }
    else
    {
LABEL_46:
      v4 = 0;
      ++v6;
    }
  }
  if ( v4 )
  {
    v21 = (bdWinRTPtr *)bdMemory::allocate(0x18ui64);
    v27 = (__int64)v21;
    if ( v21 )
    {
      bdWinRTPtr::bdWinRTPtr(v21, v5);
      v2 = v22;
    }
    m_ptr = this->m_user.m_ptr;
    if ( m_ptr )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
      {
        v24 = this->m_user.m_ptr;
        if ( v24 )
          ((void (__fastcall *)(bdWinRTPtr *, __int64))v24->~bdReferencable)(v24, 1i64);
      }
      v5 = v30;
    }
    this->m_user.m_ptr = v2;
    if ( v2 )
    {
      _InterlockedExchangeAdd((volatile signed __int32 *)&v2->m_refCount, 1u);
      v5 = v30;
    }
    this->m_useAnyUserAllowed = 0;
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdHTTPXboxOne", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpxboxone.cpp", "bdHTTPXboxOne::setUserByID", 0x1D8u, "Could not set user: user with ID [%llu] not found.", userID);
  }
  if ( v5 )
    v5->Release(v5);
  return v4;
}

/*
==============
bdHTTPXboxOne::startFetchingToken
==============
*/
void bdHTTPXboxOne::startFetchingToken(bdHTTPXboxOne *this)
{
  Platform::Array<unsigned char,1> *v2; 
  unsigned int v3; 
  __int64 v4; 
  __int64 v5; 
  Platform::Array<unsigned char,1> *v6; 
  unsigned int v7; 
  __int64 v8; 
  Platform::Array<unsigned char,1> *v9; 
  __int64 v10; 
  __int64 v11; 
  HSTRING v12; 
  __int64 v13; 
  HSTRING v14; 
  HSTRING v15; 
  HSTRING v16; 
  __int64 v17; 
  bdWinRTPtr *m_ptr; 
  IUnknown *v19; 
  Platform::Object_vtbl *v20; 
  __int64 v21; 
  int v22; 
  int v23; 
  __int64 v24; 
  int ActivationFactoryByPCWSTR; 
  __int64 v26; 
  int v27; 
  int v28; 
  __int64 v29; 
  void *v30; 
  __int64 v31; 
  __int64 v32; 
  int v33; 
  void *ppActivationFactory; 
  Platform::Guid pGuid; 
  __int64 v36; 
  __int64 v37; 
  HSTRING v38; 
  IUnknown *v39; 
  __int64 v40; 
  __int64 v41; 

  v40 = -2i64;
  bdHandleAssert(this->m_requiresToken, "m_requiresToken", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpxboxone.cpp", "bdHTTPXboxOne::startFetchingToken", 0x2DDu, "startFetchingToken should only be called when token is required");
  if ( this->m_uploadBuffer )
  {
    v2 = (Platform::Array<unsigned char,1> *)Platform::Details::Heap::Allocate(0x58ui64, 0x88ui64);
    v3 = bdRequestStream::Size(this->m_requestStream.ptr_);
    Platform::Array<unsigned char,1>::Array<unsigned char,1>(v2, (unsigned __int8 *)this->m_uploadBuffer, v3);
    v5 = v4;
  }
  else if ( this->m_uploadHandler && bdRequestStream::Size(this->m_requestStream.ptr_) )
  {
    v6 = (Platform::Array<unsigned char,1> *)Platform::Details::Heap::Allocate(0x58ui64, 0x88ui64);
    v7 = bdRequestStream::Size(this->m_requestStream.ptr_);
    Platform::Array<unsigned char,1>::Array<unsigned char,1>(v6, (unsigned __int8 *)this->m_internalBuffer, v7);
    v5 = v8;
  }
  else
  {
    v9 = (Platform::Array<unsigned char,1> *)Platform::Details::Heap::Allocate(0x58ui64, 0x88ui64);
    Platform::Array<unsigned char,1>::Array<unsigned char,1>(v9, (unsigned __int8 *)&_dataArg, 1u);
    v5 = v10;
  }
  Platform::String::String(NULL, this->m_verb);
  v12 = (HSTRING)v11;
  v36 = v11;
  WindowsDeleteString_0(NULL);
  Platform::String::String(NULL, this->m_headers);
  v14 = (HSTRING)v13;
  v37 = v13;
  WindowsDeleteString_0(NULL);
  Platform::String::String(NULL, this->m_url);
  v16 = v15;
  ppActivationFactory = v15;
  v38 = v15;
  WindowsDeleteString_0(NULL);
  v17 = 0i64;
  m_ptr = this->m_user.m_ptr;
  if ( m_ptr )
  {
    v19 = bdWinRTPtr::get(m_ptr);
    v20 = (Platform::Object_vtbl *)v19;
    v39 = v19;
    if ( v19 )
      v19->AddRef(v19);
    pGuid.__vftable = v20;
    v41 = 0i64;
    if ( v5 )
    {
      v21 = *(_QWORD *)(v5 + 80);
      v22 = *(_DWORD *)(v5 + 72);
    }
    else
    {
      v21 = 0i64;
      v22 = 0;
    }
    v23 = (*((__int64 (__fastcall **)(Platform::Object_vtbl *, HSTRING, void *, HSTRING, int, __int64, __int64 *))v20->__abi_QueryInterface + 17))(v20, v12, ppActivationFactory, v14, v22, v21, &v41);
    if ( v23 < 0 )
      __abi_WinRTraiseException(v23);
    v24 = v41;
    v17 = v41;
    if ( v41 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 8i64))(v41);
      v24 = v41;
    }
    if ( v24 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16i64))(v24);
    v41 = 0i64;
    if ( !v17 )
    {
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdHTTPXboxOne", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpxboxone.cpp", "bdHTTPXboxOne::startFetchingToken", 0x2FEu, "asyncOp returned from GetTokenAndSignatureAsync() is invalid.\n");
      this->abortOperation(this);
      this->m_threadStatus = BD_HTTPTHREAD_FAILED;
    }
    (*((void (__fastcall **)(Platform::Object_vtbl *))v20->__abi_QueryInterface + 2))(v20);
    v16 = (HSTRING)ppActivationFactory;
  }
  else if ( this->m_useAnyUserAllowed )
  {
    pGuid.__vftable = (Platform::Object_vtbl *)0x4A507FC6B4F23A93i64;
    *(_DWORD *)&pGuid.__d = 9786289;
    *(_DWORD *)&pGuid.__h = 1352546326;
    ppActivationFactory = NULL;
    ActivationFactoryByPCWSTR = __winRT::__getActivationFactoryByPCWSTR((void *)L"Windows.Xbox.System.User", &pGuid, &ppActivationFactory);
    if ( ActivationFactoryByPCWSTR < 0 )
      __abi_WinRTraiseException(ActivationFactoryByPCWSTR);
    v41 = 0i64;
    if ( v5 )
    {
      v26 = *(_QWORD *)(v5 + 80);
      v27 = *(_DWORD *)(v5 + 72);
    }
    else
    {
      v26 = 0i64;
      v27 = 0;
    }
    v28 = (*(__int64 (__fastcall **)(void *, HSTRING, HSTRING, HSTRING, int, __int64, __int64 *))(*(_QWORD *)ppActivationFactory + 128i64))(ppActivationFactory, v12, v16, v14, v27, v26, &v41);
    if ( v28 < 0 )
      __abi_WinRTraiseException(v28);
    v29 = v41;
    v17 = v41;
    if ( v41 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 8i64))(v41);
      v29 = v41;
    }
    if ( v29 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16i64))(v29);
    v41 = 0i64;
    if ( ppActivationFactory )
      (*(void (__fastcall **)(void *))(*(_QWORD *)ppActivationFactory + 16i64))(ppActivationFactory);
    v41 = 0i64;
    if ( !v17 )
    {
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdHTTPXboxOne", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpxboxone.cpp", "bdHTTPXboxOne::startFetchingToken", 0x313u, "asyncOp returned from GetTokenAndSignatureForAllUsersAsync() is invalid.\n");
      this->abortOperation(this);
      this->m_threadStatus = BD_HTTPTHREAD_FAILED;
    }
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdHTTPXboxOne", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpxboxone.cpp", "bdHTTPXboxOne::startFetchingToken", 0x322u, "GetTokenAndSignatureAsync(): No valid user set, cannot fetch XHTTP Token");
    this->abortOperation(this);
    this->m_threadStatus = BD_HTTPTHREAD_FAILED;
  }
  bdHandleAssert(v17 != 0, "asyncOp != nullptr", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpxboxone.cpp", "bdHTTPXboxOne::startFetchingToken", 0x327u, "The asyncOp must not be null.");
  v30 = Platform::Details::Heap::Allocate(0x18ui64, 0x130ui64);
  Windows::Foundation::AsyncOperationCompletedHandler_Windows::Xbox::System::GetTokenAndSignatureResult___::AsyncOperationCompletedHandler_Windows::Xbox::System::GetTokenAndSignatureResult_____lambda_ccc4df131b6ebb958b4d541ae580dfdc___((bdHTTPXboxOne::startFetchingToken::__l2::<lambda_ccc4df131b6ebb958b4d541ae580dfdc>)v30, (Platform::CallbackContext)this, 2);
  v32 = v31;
  v33 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v17 + 48i64))(v17, v31);
  if ( v33 < 0 )
    __abi_WinRTraiseException(v33);
  if ( v32 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16i64))(v32);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16i64))(v17);
  WindowsDeleteString_0(v16);
  WindowsDeleteString_0(v14);
  WindowsDeleteString_0(v12);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16i64))(v5);
}

/*
==============
bdHTTPXboxOne::startInstanceThread
==============
*/
char bdHTTPXboxOne::startInstanceThread(bdHTTPXboxOne *this)
{
  bdThread *v2; 
  bool v3; 

  if ( this->m_instanceThread )
    return 1;
  v2 = (bdThread *)bdMemory::allocate(0x40ui64);
  if ( v2 )
    bdThread::bdThread(v2, &this->bdRunnable, this->m_threadPriority, 0x8000u, this->m_coreAffinity);
  this->m_instanceThread = v2;
  v3 = bdThread::start(v2, NULL, 0i64, NULL);
  if ( !v3 )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdHTTPXboxOne", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpxboxone.cpp", "bdHTTPXboxOne::startInstanceThread", 0x75u, "Couldn't start a bdHTTP thread.");
    this->m_status = BD_MAX_STATUS;
  }
  return v3;
}

