/*
==============
bdHttpCallbackHandler::OnRedirect
==============
*/

HRESULT __fastcall bdHttpCallbackHandler::OnRedirect(bdHttpCallbackHandler *this, IXMLHTTPRequest2 *request, const wchar_t *redirectURL)
{
  return ?OnRedirect@bdHttpCallbackHandler@@UEAAJPEAUIXMLHTTPRequest2@@PEB_W@Z(this, request, redirectURL);
}

/*
==============
bdHttpCallbackHandler::bdHttpCallbackHandler
==============
*/

void __fastcall bdHttpCallbackHandler::bdHttpCallbackHandler(bdHttpCallbackHandler *this)
{
  ??0bdHttpCallbackHandler@@QEAA@XZ(this);
}

/*
==============
bdHttpCallbackHandler::getDownloadProgress
==============
*/

unsigned int __fastcall bdHttpCallbackHandler::getDownloadProgress(bdHttpCallbackHandler *this)
{
  return ?getDownloadProgress@bdHttpCallbackHandler@@QEAAIXZ(this);
}

/*
==============
bdHttpCallbackHandler::OnDataAvailable
==============
*/

HRESULT __fastcall bdHttpCallbackHandler::OnDataAvailable(bdHttpCallbackHandler *this, IXMLHTTPRequest2 *request, ISequentialStream *responseStream)
{
  return ?OnDataAvailable@bdHttpCallbackHandler@@UEAAJPEAUIXMLHTTPRequest2@@PEAUISequentialStream@@@Z(this, request, responseStream);
}

/*
==============
bdHttpCallbackHandler::OnHeadersAvailable
==============
*/

HRESULT __fastcall bdHttpCallbackHandler::OnHeadersAvailable(bdHttpCallbackHandler *this, IXMLHTTPRequest2 *request, unsigned int httpStatus, const wchar_t *statusString)
{
  return ?OnHeadersAvailable@bdHttpCallbackHandler@@UEAAJPEAUIXMLHTTPRequest2@@KPEB_W@Z(this, request, httpStatus, statusString);
}

/*
==============
bdHttpCallbackHandler::~bdHttpCallbackHandler
==============
*/

void __fastcall bdHttpCallbackHandler::~bdHttpCallbackHandler(bdHttpCallbackHandler *this)
{
  ??1bdHttpCallbackHandler@@UEAA@XZ(this);
}

/*
==============
bdHttpCallbackHandler::init
==============
*/

void __fastcall bdHttpCallbackHandler::init(bdHttpCallbackHandler *this, bdHTTPXboxOne *http)
{
  ?init@bdHttpCallbackHandler@@QEAAXPEAVbdHTTPXboxOne@@@Z(this, http);
}

/*
==============
bdHttpCallbackHandler::OnError
==============
*/

HRESULT __fastcall bdHttpCallbackHandler::OnError(bdHttpCallbackHandler *this, IXMLHTTPRequest2 *request, HRESULT error)
{
  return ?OnError@bdHttpCallbackHandler@@UEAAJPEAUIXMLHTTPRequest2@@J@Z(this, request, error);
}

/*
==============
bdHttpCallbackHandler::resetTask
==============
*/

void __fastcall bdHttpCallbackHandler::resetTask(bdHttpCallbackHandler *this)
{
  ?resetTask@bdHttpCallbackHandler@@QEAAXXZ(this);
}

/*
==============
bdHttpCallbackHandler::OnResponseReceived
==============
*/

HRESULT __fastcall bdHttpCallbackHandler::OnResponseReceived(bdHttpCallbackHandler *this, IXMLHTTPRequest2 *request, ISequentialStream *responseStream)
{
  return ?OnResponseReceived@bdHttpCallbackHandler@@UEAAJPEAUIXMLHTTPRequest2@@PEAUISequentialStream@@@Z(this, request, responseStream);
}

/*
==============
bdHttpCallbackHandler::bdHttpCallbackHandler
==============
*/
void bdHttpCallbackHandler::bdHttpCallbackHandler(bdHttpCallbackHandler *this)
{
  this->refcount_ = 1;
  this->__vftable = (bdHttpCallbackHandler_vtbl *)&Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IXMLHTTPRequest2Callback,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    Microsoft::WRL::Details::ModuleBase::module_->IncrementObjectCount(Microsoft::WRL::Details::ModuleBase::module_);
  this->__vftable = (bdHttpCallbackHandler_vtbl *)&bdHttpCallbackHandler::`vftable';
  this->m_http = NULL;
  *(_QWORD *)&this->m_bytesRead = 0i64;
  this->m_hasContentLength = 1;
}

/*
==============
bdHttpCallbackHandler::~bdHttpCallbackHandler
==============
*/
void bdHttpCallbackHandler::~bdHttpCallbackHandler(bdHttpCallbackHandler *this)
{
  this->__vftable = (bdHttpCallbackHandler_vtbl *)&bdHttpCallbackHandler::`vftable';
  this->refcount_ = -1073741823;
}

/*
==============
bdHttpCallbackHandler::OnDataAvailable
==============
*/
__int64 bdHttpCallbackHandler::OnDataAvailable(bdHttpCallbackHandler *this, IXMLHTTPRequest2 *request, ISequentialStream *responseStream)
{
  __int64 m_bytesLeftToRead; 
  bdHTTPXboxOne *m_http; 
  char *m_downloadBuffer; 
  ISequentialStream_vtbl *v9; 
  char *v10; 
  int v11; 
  char v12; 
  unsigned int v13; 
  int v14; 
  DWORD LastError; 
  DWORD v17; 
  int v18; 

  bdHandleAssert(this->m_http != NULL, "m_http != NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpcallbackhandler-xboxone.cpp", "bdHttpCallbackHandler::OnDataAvailable", 0x8Fu, "HTTP object not initialized. You must initialize bdHttpCallbackHandler wlfh an HTTP object before using it.");
  m_bytesLeftToRead = this->m_bytesLeftToRead;
  if ( (_DWORD)m_bytesLeftToRead )
  {
    m_http = this->m_http;
    m_downloadBuffer = m_http->m_downloadBuffer;
    if ( m_downloadBuffer )
    {
      v9 = responseStream->__vftable;
      v10 = &m_downloadBuffer[this->m_bytesRead];
      v18 = 0;
      if ( (unsigned int)v9->Read(responseStream, v10, m_bytesLeftToRead, (unsigned int *)&v18) > 1 )
      {
        LastError = GetLastError();
        bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdHTTPXboxOne", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpcallbackhandler-xboxone.cpp", "bdHttpCallbackHandler::OnDataAvailable", 0x9Bu, "Attempt to read response failed with error %d", LastError);
        request->Abort(request);
        this->m_http->m_threadStatus = BD_HTTPTHREAD_FAILED;
      }
      v11 = v18;
      this->m_bytesRead += v18;
      this->m_bytesLeftToRead -= v11;
LABEL_21:
      bdHTTPXboxOne::setDownloadRate(this->m_http);
      return 0i64;
    }
    if ( !m_http->m_downloadHandler )
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdHTTPXboxOne", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpcallbackhandler-xboxone.cpp", "bdHttpCallbackHandler::OnDataAvailable", 0xD1u, "HTTP operation failed because no download buffer or download hander was specified.");
LABEL_20:
      request->Abort(request);
      this->m_http->m_threadStatus = BD_HTTPTHREAD_FAILED;
      goto LABEL_21;
    }
    v18 = 0;
    v12 = 0;
    while ( 1 )
    {
      if ( v12 )
      {
LABEL_18:
        v17 = GetLastError();
        bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdHTTPXboxOne", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpcallbackhandler-xboxone.cpp", "bdHttpCallbackHandler::OnDataAvailable", 0xCAu, "Attempt to read response failed with error [%u]", v17);
        goto LABEL_20;
      }
      v13 = responseStream->Read(responseStream, this->m_http->m_internalBuffer, this->m_http->m_internalBufferSize, (unsigned int *)&v18);
      if ( v13 <= 1 )
      {
        v14 = v18;
        if ( !v18 )
          goto LABEL_16;
        this->m_bytesRead += v18;
        if ( this->m_hasContentLength )
          this->m_bytesLeftToRead -= v14;
        if ( ((unsigned int (__fastcall *)(bdDownloadInterceptor *, char *))this->m_http->m_downloadHandler->handleDownload)(this->m_http->m_downloadHandler, this->m_http->m_internalBuffer) )
          goto LABEL_16;
        bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdHTTPXboxOne", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpcallbackhandler-xboxone.cpp", "bdHttpCallbackHandler::OnDataAvailable", 0xC2u, "Download handler reports 0 bytes read.  Treating as error.");
      }
      v12 = 1;
LABEL_16:
      if ( v13 == 1 )
      {
        if ( !v12 )
          goto LABEL_21;
        goto LABEL_18;
      }
    }
  }
  bdLogMessage(BD_LOG_WARNING, "warn/", "bdHTTPXboxOne", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpcallbackhandler-xboxone.cpp", "bdHttpCallbackHandler::OnDataAvailable", 0xDAu, "OnDataAvailable called while m_bytesLeftToRead == %d", 0);
  return 0i64;
}

/*
==============
bdHttpCallbackHandler::OnError
==============
*/
__int64 bdHttpCallbackHandler::OnError(bdHttpCallbackHandler *this, IXMLHTTPRequest2 *request, HRESULT error)
{
  bdHTTP::bdStatus m_status; 

  m_status = this->m_http->m_status;
  if ( m_status == (BD_MAX_STATUS|BD_PENDING) || m_status == BD_TIMED_OUT )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdHTTPXboxOne", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpcallbackhandler-xboxone.cpp", "bdHttpCallbackHandler::OnError", 0x111u, "XHTTP request aborted successfully.");
    bdHandleAssert(this->m_http != NULL, "m_http != NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpcallbackhandler-xboxone.cpp", "bdHttpCallbackHandler::OnError", 0x112u, "HTTP object not initialized. You must initialize bdHttpCallbackHandler with an HTTP object before using it.");
    goto LABEL_8;
  }
  if ( m_status != BD_FAILED )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdHTTPXboxOne", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpcallbackhandler-xboxone.cpp", "bdHttpCallbackHandler::OnError", 0x127u, "XHTTP task failed with Error [0x%08X]", error);
    bdHandleAssert(this->m_http != NULL, "m_http != NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpcallbackhandler-xboxone.cpp", "bdHttpCallbackHandler::OnError", 0x128u, "HTTP object not initialized. You must initialize bdHttpCallbackHandler with an HTTP object before using it.");
LABEL_8:
    this->m_http->m_threadStatus = BD_HTTPTHREAD_FAILED;
    this->m_http->m_internalError = 5;
    return (unsigned int)error;
  }
  bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdHTTPXboxOne", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpcallbackhandler-xboxone.cpp", "bdHttpCallbackHandler::OnError", 0x118u, "XHTTP task failed with Error [0x%08X]", error);
  bdHandleAssert(this->m_http != NULL, "m_http != NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpcallbackhandler-xboxone.cpp", "bdHttpCallbackHandler::OnError", 0x119u, "HTTP object not initialized. You must initialize bdHttpCallbackHandler with an HTTP object before using it.");
  this->m_http->m_threadStatus = BD_HTTPTHREAD_FAILED;
  this->m_http->m_internalError = 6;
  if ( error == -2147024891 )
  {
    this->m_http->m_httpErrorCode = 403;
    return 2147942405i64;
  }
  return (unsigned int)error;
}

/*
==============
bdHttpCallbackHandler::OnHeadersAvailable
==============
*/
__int64 bdHttpCallbackHandler::OnHeadersAvailable(bdHttpCallbackHandler *this, IXMLHTTPRequest2 *request, unsigned int httpStatus, const wchar_t *statusString)
{
  bdHTTPXboxOne *m_http; 
  bdHTTPXboxOne::bdHTTPInternalThreadStatus m_threadStatus; 
  unsigned int v9; 
  bdHTTPXboxOne *v10; 
  unsigned int m_downloadBufferSize; 
  bool v12; 
  __int64 v13; 
  wchar_t v14; 
  bool v15; 
  const char *v16; 
  bdHTTPXboxOne *v18; 
  unsigned int m_internalBufferSize; 
  bdHTTP::bdStatus m_status; 
  __int64 v21; 
  wchar_t *v22; 

  bdHandleAssert(this->m_http != NULL, "m_http != NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpcallbackhandler-xboxone.cpp", "bdHttpCallbackHandler::OnHeadersAvailable", 0x2Cu, "HTTP object not initialized. You must initialize bdHttpCallbackHandler wlfh an HTTP object before using it.");
  this->m_http->m_httpErrorCode = httpStatus;
  bdHTTPXboxOne::setUploadRate(this->m_http);
  bdStopwatch::reset(&this->m_http->m_stopwatch);
  bdStopwatch::start(&this->m_http->m_stopwatch);
  m_http = this->m_http;
  m_threadStatus = m_http->m_threadStatus;
  if ( m_threadStatus == BD_HTTPTHREAD_WORKING )
  {
    if ( request->GetResponseHeader(request, L"Content-Length", &v22) )
    {
      v18 = this->m_http;
      this->m_bytesRead = 0;
      if ( v18->m_downloadHandler )
        m_internalBufferSize = v18->m_internalBufferSize;
      else
        m_internalBufferSize = v18->m_downloadBufferSize;
      this->m_bytesLeftToRead = m_internalBufferSize;
      this->m_hasContentLength = 0;
    }
    else
    {
      v9 = _wtoi(v22);
      this->m_http->m_responseLength = v9;
      bdLogMessage(BD_LOG_INFO, "info/", "bdHTTPXboxOne", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpcallbackhandler-xboxone.cpp", "bdHttpCallbackHandler::OnHeadersAvailable", 0x4Bu, "Received reply with content length [%u]", v9);
      CoTaskMemFree(v22);
      v10 = this->m_http;
      if ( v10->m_downloadHandler )
      {
        v12 = 0;
        if ( !request->GetResponseHeader(request, L"Transfer-Encoding", &v22) )
        {
          v13 = 0i64;
          while ( 1 )
          {
            v14 = v22[v13++];
            v15 = v14 == aChunked_0[v13 - 1];
            if ( v14 != aChunked_0[v13 - 1] )
              break;
            if ( v13 == 8 )
            {
              v15 = v14 == aChunked_0[7];
              break;
            }
          }
          v12 = v15;
          CoTaskMemFree(v22);
        }
        if ( this->m_http->m_downloadHandler->handleContentLength(this->m_http->m_downloadHandler, v9, v12) )
        {
          this->m_bytesRead = 0;
          this->m_bytesLeftToRead = v9;
        }
        else
        {
          this->m_http->abortOperation(this->m_http);
          v16 = "false";
          if ( v12 )
            v16 = "true";
          LODWORD(v21) = v9;
          bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdHTTPXboxOne", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpcallbackhandler-xboxone.cpp", "bdHttpCallbackHandler::OnHeadersAvailable", 0x64u, "Download handler rejected content length %d (chunked: %s)", v21, v16);
        }
      }
      else
      {
        m_downloadBufferSize = v10->m_downloadBufferSize;
        if ( v9 < m_downloadBufferSize )
          m_downloadBufferSize = v9;
        this->m_bytesLeftToRead = m_downloadBufferSize;
      }
    }
  }
  else
  {
    m_status = m_http->m_status;
    if ( m_status != (BD_MAX_STATUS|BD_PENDING) && m_status != BD_TIMED_OUT )
    {
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdHTTPXboxOne", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpcallbackhandler-xboxone.cpp", "bdHttpCallbackHandler::OnHeadersAvailable", 0x83u, "OnHeadersAvailable called while not in state BD_HTTPTHREAD_WORKING. Current State %d", m_threadStatus);
      request->Abort(request);
      this->m_http->m_threadStatus = BD_HTTPTHREAD_FAILED;
    }
  }
  return 0i64;
}

/*
==============
bdHttpCallbackHandler::OnRedirect
==============
*/
__int64 bdHttpCallbackHandler::OnRedirect(bdHttpCallbackHandler *this, IXMLHTTPRequest2 *request, const wchar_t *redirectURL)
{
  return 0i64;
}

/*
==============
bdHttpCallbackHandler::OnResponseReceived
==============
*/
__int64 bdHttpCallbackHandler::OnResponseReceived(bdHttpCallbackHandler *this, IXMLHTTPRequest2 *request, ISequentialStream *responseStream)
{
  bdHTTPXboxOne *m_http; 
  unsigned int m_bytesLeftToRead; 
  int m_httpErrorCode; 

  bdHandleAssert(this->m_http != NULL, "m_http != NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpcallbackhandler-xboxone.cpp", "bdHttpCallbackHandler::OnResponseReceived", 0xE5u, "HTTP object not initialized. You must initialize bdHttpCallbackHandler wlfh an HTTP object before using it.");
  if ( this->m_bytesLeftToRead )
    this->OnDataAvailable(this, request, responseStream);
  m_http = this->m_http;
  if ( m_http->m_threadStatus == BD_HTTPTHREAD_FAILED )
  {
LABEL_10:
    m_http->m_threadStatus = BD_HTTPTHREAD_FAILED;
    return 0i64;
  }
  if ( m_http->m_operation != BD_GET || !this->m_hasContentLength || !this->m_bytesLeftToRead )
  {
    if ( m_http->m_httpErrorCode < 400 )
    {
      m_http->m_threadStatus = BD_HTTPTHREAD_DONE;
      return 0i64;
    }
    m_httpErrorCode = m_http->m_httpErrorCode;
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdHTTPXboxOne", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpcallbackhandler-xboxone.cpp", "bdHttpCallbackHandler::OnResponseReceived", 0xFCu, "m_httpErrorCode >= HTTP_STATUS_BAD_REQUEST. m_httpErrorCode [%d]", m_httpErrorCode);
    m_http = this->m_http;
    goto LABEL_10;
  }
  m_http->m_threadStatus = BD_HTTPTHREAD_FAILED;
  m_bytesLeftToRead = this->m_bytesLeftToRead;
  bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdHTTPXboxOne", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpcallbackhandler-xboxone.cpp", "bdHttpCallbackHandler::OnResponseReceived", 0xF5u, "Download operation received OnResponseReceived before all data was downloaded. %d bytes remaining.", m_bytesLeftToRead);
  return 0i64;
}

/*
==============
bdHttpCallbackHandler::getDownloadProgress
==============
*/
__int64 bdHttpCallbackHandler::getDownloadProgress(bdHttpCallbackHandler *this)
{
  return this->m_bytesRead;
}

/*
==============
bdHttpCallbackHandler::init
==============
*/
void bdHttpCallbackHandler::init(bdHttpCallbackHandler *this, bdHTTPXboxOne *http)
{
  this->m_http = http;
}

/*
==============
bdHttpCallbackHandler::resetTask
==============
*/
void bdHttpCallbackHandler::resetTask(bdHttpCallbackHandler *this)
{
  *(_QWORD *)&this->m_bytesRead = 0i64;
}

