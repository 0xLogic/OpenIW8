/*
==============
bdRESTInternalResponse::sizeOf
==============
*/

unsigned int __fastcall bdRESTInternalResponse::sizeOf(bdRESTInternalResponse *this)
{
  return ?sizeOf@bdRESTInternalResponse@@UEAAIXZ(this);
}

/*
==============
bdRESTInternalResponse::finishResponseLocally
==============
*/

void __fastcall bdRESTInternalResponse::finishResponseLocally(bdRESTInternalResponse *this, bdREST::bdHTTPStatus statusCode, const char *errorName, const char *errorMessage)
{
  ?finishResponseLocally@bdRESTInternalResponse@@QEAAXW4bdHTTPStatus@bdREST@@PEBD1@Z(this, statusCode, errorName, errorMessage);
}

/*
==============
bdRESTLSGRequest::bdRESTLSGRequest
==============
*/

void __fastcall bdRESTLSGRequest::bdRESTLSGRequest(bdRESTLSGRequest *this, const bdREST::bdMethod method, const char *serviceName, const bdRESTURI *uri, const bdRESTHeaders *headers, const void *body, const unsigned int bodySize, const bdRESTLSGRequestMessage::bdRESTLSGRequestParamsMessage *requestParams, const bdRESTConfig *config)
{
  ??0bdRESTLSGRequest@@QEAA@W4bdMethod@bdREST@@PEBDAEBVbdRESTURI@@AEBVbdRESTHeaders@@PEBXIPEBVbdRESTLSGRequestParamsMessage@bdRESTLSGRequestMessage@@AEBVbdRESTConfig@@@Z(this, method, serviceName, uri, headers, body, bodySize, requestParams, config);
}

/*
==============
bdRESTLSGRequestMessage::dumpToLog
==============
*/

void __fastcall bdRESTLSGRequestMessage::dumpToLog(bdRESTLSGRequestMessage *this)
{
  ?dumpToLog@bdRESTLSGRequestMessage@@QEBAXXZ(this);
}

/*
==============
bdRESTInternalResponse::bdRESTInternalResponse
==============
*/

void __fastcall bdRESTInternalResponse::bdRESTInternalResponse(bdRESTInternalResponse *this, const bdRESTInternalResponse *__that)
{
  ??0bdRESTInternalResponse@@QEAA@AEBV0@@Z(this, __that);
}

/*
==============
bdRESTLSGRequest::serialize
==============
*/

bool __fastcall bdRESTLSGRequest::serialize(bdRESTLSGRequest *this, bdTaskParams *params, unsigned int *retryTokenOffset)
{
  return ?serialize@bdRESTLSGRequest@@QEBA_NAEAVbdTaskParams@@AEAI@Z(this, params, retryTokenOffset);
}

/*
==============
bdRESTLSGRequestMessage::serialize
==============
*/

bool __fastcall bdRESTLSGRequestMessage::serialize(bdRESTLSGRequestMessage *this, bdReference<bdByteBuffer> buffer, unsigned int *retryTokenOffset)
{
  return ?serialize@bdRESTLSGRequestMessage@@QEBA_NV?$bdReference@VbdByteBuffer@@@@AEAI@Z(this, buffer, retryTokenOffset);
}

/*
==============
bdRESTInternalResponse::findErrorCode
==============
*/

unsigned int __fastcall bdRESTInternalResponse::findErrorCode(bdRESTInternalResponse *this, const bdRESTResponseMessage *msg)
{
  return ?findErrorCode@bdRESTInternalResponse@@IEBAIAEBVbdRESTResponseMessage@@@Z(this, msg);
}

/*
==============
bdRESTLSGRequestMessage::validate
==============
*/

bool __fastcall bdRESTLSGRequestMessage::validate(bdRESTLSGRequestMessage *this)
{
  return ?validate@bdRESTLSGRequestMessage@@QEBA_NXZ(this);
}

/*
==============
bdRESTLSGRequestMessage::bdRESTLSGRequestParamsMessage::bdRESTLSGRequestParamsMessage
==============
*/

void __fastcall bdRESTLSGRequestMessage::bdRESTLSGRequestParamsMessage::bdRESTLSGRequestParamsMessage(bdRESTLSGRequestMessage::bdRESTLSGRequestParamsMessage *this)
{
  ??0bdRESTLSGRequestParamsMessage@bdRESTLSGRequestMessage@@QEAA@XZ(this);
}

/*
==============
bdRESTInternalResponse::deserialize
==============
*/

bool __fastcall bdRESTInternalResponse::deserialize(bdRESTInternalResponse *this, bdReference<bdByteBuffer> buffer)
{
  return ?deserialize@bdRESTInternalResponse@@UEAA_NV?$bdReference@VbdByteBuffer@@@@@Z(this, buffer);
}

/*
==============
bdRESTLSGRequestMessage::bdRESTLSGRequestMessage
==============
*/

void __fastcall bdRESTLSGRequestMessage::bdRESTLSGRequestMessage(bdRESTLSGRequestMessage *this)
{
  ??0bdRESTLSGRequestMessage@@QEAA@XZ(this);
}

/*
==============
bdRESTInternalResponse::doResultHandling
==============
*/

void __fastcall bdRESTInternalResponse::doResultHandling(bdRESTInternalResponse *this, const bdRESTResponseMessage *msg)
{
  ?doResultHandling@bdRESTInternalResponse@@IEAAXAEBVbdRESTResponseMessage@@@Z(this, msg);
}

/*
==============
bdRESTInternalResponse::bdRESTInternalResponse
==============
*/

void __fastcall bdRESTInternalResponse::bdRESTInternalResponse(bdRESTInternalResponse *this)
{
  ??0bdRESTInternalResponse@@QEAA@XZ(this);
}

/*
==============
bdRESTInternalResponse::bdRESTInternalResponse
==============
*/
void bdRESTInternalResponse::bdRESTInternalResponse(bdRESTInternalResponse *this, const bdRESTInternalResponse *__that, int a3)
{
  bdTaskByteBuffer *m_ptr; 
  bdRemoteTask *v6; 
  bdRESTLegacyTask *v7; 

  if ( a3 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdRESTInternalResponse::`vbtable';
    bdReferencable::bdReferencable((bdReferencable *)this->gap60, (const bdReferencable *)((char *)&__that->__vftable + *(int *)(*((_QWORD *)&__that->__vftable + 1) + 4i64) + 8));
  }
  bdTaskResult::bdTaskResult(this, __that);
  this->__vftable = (bdRESTInternalResponse_vtbl *)&bdRESTInternalResponse::`vftable'{for `bdTaskResult'};
  *(bdRESTInternalResponse_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdRESTInternalResponse_vtbl *)&bdRESTInternalResponse::`vftable'{for `bdReferencable'};
  *((_QWORD *)&this->__vftable + 2) = *((_QWORD *)&__that->__vftable + 2);
  *((_QWORD *)&this->__vftable + 3) = *((_QWORD *)&__that->__vftable + 3);
  m_ptr = __that->m_taskBuffer.m_ptr;
  this->m_taskBuffer.m_ptr = m_ptr;
  if ( m_ptr )
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
  v6 = __that->m_task.m_ptr;
  this->m_task.m_ptr = v6;
  if ( v6 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v6->m_refCount, 1u);
  v7 = __that->m_legacyTask.m_ptr;
  this->m_legacyTask.m_ptr = v7;
  if ( v7 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v7->m_refCount, 1u);
  this->m_state = __that->m_state;
  this->m_timer.m_start = __that->m_timer.m_start;
  this->m_timeoutMs = __that->m_timeoutMs;
  this->m_retryTokenOffset = __that->m_retryTokenOffset;
  this->m_retryWaitFrom = __that->m_retryWaitFrom;
  this->m_retryWaitSeconds = __that->m_retryWaitSeconds;
  this->m_retries = __that->m_retries;
  this->m_maximumRetries = __that->m_maximumRetries;
}

/*
==============
bdRESTInternalResponse::bdRESTInternalResponse
==============
*/
void bdRESTInternalResponse::bdRESTInternalResponse(bdRESTInternalResponse *this, int a2)
{
  bdRESTLegacyTask *v3; 
  bdRESTLegacyTask *v4; 
  bdRESTLegacyTask *m_ptr; 
  bdRESTLegacyTask *v6; 

  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdRESTInternalResponse::`vbtable';
    *(_QWORD *)this->gap60 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap60[8] = 0;
  }
  bdTaskResult::bdTaskResult(this);
  this->__vftable = (bdRESTInternalResponse_vtbl *)&bdRESTInternalResponse::`vftable'{for `bdTaskResult'};
  *(bdRESTInternalResponse_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdRESTInternalResponse_vtbl *)&bdRESTInternalResponse::`vftable'{for `bdReferencable'};
  *((_QWORD *)&this->__vftable + 3) = 0i64;
  this->m_taskBuffer.m_ptr = NULL;
  this->m_task.m_ptr = NULL;
  this->m_legacyTask.m_ptr = NULL;
  this->m_state = BD_IDLE;
  bdStopwatch::bdStopwatch(&this->m_timer);
  *(_QWORD *)&this->m_timeoutMs = 0i64;
  *(_QWORD *)&this->m_retryWaitFrom = 0i64;
  *(_QWORD *)&this->m_retries = 0i64;
  v3 = (bdRESTLegacyTask *)bdMemory::allocate(0x68ui64);
  v4 = v3;
  if ( v3 )
  {
    memset_0(v3, 0, sizeof(bdRESTLegacyTask));
    bdRemoteTask::bdRemoteTask(v4);
    v4->__vftable = (bdRESTLegacyTask_vtbl *)&bdRESTLegacyTask::`vftable';
  }
  else
  {
    v4 = NULL;
  }
  m_ptr = this->m_legacyTask.m_ptr;
  if ( m_ptr )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
    {
      v6 = this->m_legacyTask.m_ptr;
      if ( v6 )
      {
        bdRemoteTask::~bdRemoteTask(this->m_legacyTask.m_ptr);
        bdMemory::deallocate(v6);
      }
    }
  }
  this->m_legacyTask.m_ptr = v4;
  if ( v4 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v4->m_refCount, 1u);
}

/*
==============
bdRESTLSGRequest::bdRESTLSGRequest
==============
*/
void bdRESTLSGRequest::bdRESTLSGRequest(bdRESTLSGRequest *this, const bdREST::bdMethod method, const char *serviceName, const bdRESTURI *uri, const bdRESTHeaders *headers, const void *body, const unsigned int bodySize, const bdRESTLSGRequestMessage::bdRESTLSGRequestParamsMessage *requestParams)
{
  int v8; 
  const bdRESTLSGRequestMessage::bdRESTLSGRequestParamsMessage *v9; 
  unsigned int v13; 
  bdREST::bdMimeType AcceptType; 
  __int64 m_size; 
  char v16; 
  unsigned int m_bodySize; 
  bool v18; 
  bool v19; 
  __int64 v20; 
  __int64 v21; 

  v8 = 0;
  v9 = requestParams;
  this->m_http1req.m_defaultAcceptType = BD_MIME_INVALID;
  this->m_http1req.m_serviceName = NULL;
  this->m_http1req.m_target = NULL;
  *(_QWORD *)&this->m_http1req.m_accepts.m_size = 0i64;
  this->m_http1req.m_headers = NULL;
  this->m_body = body;
  this->m_bodySize = bodySize;
  this->m_isValid = 0;
  this->m_http1req.m_method = method;
  this->m_http1req.m_params = requestParams;
  this->m_http1req.m_defaultAcceptType = bdRESTHeaders::getErrorAcceptType((bdRESTHeaders *)headers);
  v13 = 0;
  if ( bdRESTHeaders::getAcceptTypesCount((bdRESTHeaders *)headers) )
  {
    do
    {
      AcceptType = bdRESTHeaders::getAcceptType((bdRESTHeaders *)headers, v13);
      bdHandleAssert(this->m_http1req.m_accepts.m_size < 3, "canPushBack()", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<enum bdREST::bdMimeType,3>::pushBack", 0x40u, "No more capacity for pushBack");
      m_size = this->m_http1req.m_accepts.m_size;
      if ( (unsigned int)m_size < 3 )
      {
        this->m_http1req.m_accepts.m_elements[m_size] = AcceptType;
        ++this->m_http1req.m_accepts.m_size;
      }
      ++v13;
    }
    while ( v13 < bdRESTHeaders::getAcceptTypesCount((bdRESTHeaders *)headers) );
    v9 = requestParams;
  }
  this->m_http1req.m_contentType = bdRESTHeaders::getContentType((bdRESTHeaders *)headers);
  v16 = 1;
  this->m_http1req.m_headers = headers;
  this->m_http1req.m_serviceName = serviceName;
  if ( !v9 )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdREST", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdrestinternal.cpp", "bdRESTLSGRequest::bdRESTLSGRequest", 0xF5u, "request's params is NULL. This must be set a valid pointer.");
    v16 = 0;
  }
  if ( !bdRESTHeaders::isOK((bdRESTHeaders *)headers) )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdREST", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdrestinternal.cpp", "bdRESTLSGRequest::bdRESTLSGRequest", 0xFBu, "Headers are invalid");
    v16 = 0;
  }
  if ( bdRESTURI::isOK((bdRESTURI *)uri) )
  {
    this->m_http1req.m_target = bdRESTURI::getURIString((bdRESTURI *)uri);
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdREST", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdrestinternal.cpp", "bdRESTLSGRequest::bdRESTLSGRequest", 0x105u, "URI is invalid");
    v16 = 0;
  }
  m_bodySize = this->m_bodySize;
  if ( m_bodySize >= 0xFFFF )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdREST", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdrestinternal.cpp", "bdRESTLSGRequest::bdRESTLSGRequest", 0x10Bu, "Invalid body length [%d]. expected: 0 < m_bodySize < %d", this->m_bodySize, 0xFFFF);
    m_bodySize = this->m_bodySize;
    v16 = 0;
  }
  if ( m_bodySize )
  {
    if ( this->m_body )
      goto LABEL_19;
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdREST", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdrestinternal.cpp", "bdRESTLSGRequest::bdRESTLSGRequest", 0x111u, "m_bodySize > 0 but m_body is NULL");
    v16 = 0;
  }
  if ( !this->m_body )
  {
LABEL_22:
    if ( this->m_http1req.m_contentType )
    {
      LODWORD(v20) = this->m_http1req.m_contentType;
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdREST", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdrestinternal.cpp", "bdRESTLSGRequest::bdRESTLSGRequest", 0x11Du, "If body is NULL then the content type must be BD_MIME_INVALID but got: [%d]", v20);
      v16 = 0;
    }
    goto LABEL_24;
  }
LABEL_19:
  if ( !bdRESTInternal::mimeTypeIsValid(this->m_http1req.m_contentType) )
  {
    LODWORD(v20) = this->m_http1req.m_contentType;
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdREST", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdrestinternal.cpp", "bdRESTLSGRequest::bdRESTLSGRequest", 0x117u, "If body exists then content type must be valid but got: [%d]", v20);
    v16 = 0;
  }
  if ( !this->m_body )
    goto LABEL_22;
LABEL_24:
  v18 = bdRESTLSGRequestMessage::validate(&this->m_http1req);
  v19 = v16 && v18;
  if ( (bdRESTInternal::g_debug_flags & 1) != 0 )
  {
    bdRESTLSGRequestMessage::dumpToLog(&this->m_http1req);
    LOBYTE(v8) = this->m_body != NULL;
    LODWORD(v20) = v8;
    bdLogMessage(BD_LOG_INFO, "info/", "bdREST", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdrestinternal.cpp", "bdRESTLSGRequest::bdRESTLSGRequest", 0x128u, "m_hasBody:       %d", v20);
    LODWORD(v21) = this->m_bodySize;
    bdLogMessage(BD_LOG_INFO, "info/", "bdREST", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdrestinternal.cpp", "bdRESTLSGRequest::bdRESTLSGRequest", 0x129u, "m_bodySize:      %d", v21);
    if ( this->m_body )
      bdLogMessage(BD_LOG_INFO, "info/", "bdREST", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdrestinternal.cpp", "bdRESTLSGRequest::bdRESTLSGRequest", 0x12Du, "%.*s", this->m_bodySize, (const char *)this->m_body);
  }
  this->m_isValid = v19;
}

/*
==============
bdRESTLSGRequestMessage::bdRESTLSGRequestMessage
==============
*/
void bdRESTLSGRequestMessage::bdRESTLSGRequestMessage(bdRESTLSGRequestMessage *this)
{
  *(_QWORD *)&this->m_defaultAcceptType = 0i64;
  this->m_serviceName = NULL;
  this->m_target = NULL;
  *(_QWORD *)&this->m_accepts.m_size = 0i64;
  this->m_headers = NULL;
}

/*
==============
bdRESTLSGRequestMessage::bdRESTLSGRequestParamsMessage::bdRESTLSGRequestParamsMessage
==============
*/
void bdRESTLSGRequestMessage::bdRESTLSGRequestParamsMessage::bdRESTLSGRequestParamsMessage(bdRESTLSGRequestMessage::bdRESTLSGRequestParamsMessage *this)
{
  *(_WORD *)&this->m_useStrictRules = 0;
  *(_QWORD *)&this->m_spanID = 0i64;
  memset_0(this->m_requestRetryToken, 0, sizeof(this->m_requestRetryToken));
  this->m_restResourceName[0] = 0;
  this->m_restOperationName[0] = 0;
}

/*
==============
bdRESTInternalResponse::deserialize
==============
*/
_BOOL8 bdRESTInternalResponse::deserialize(bdRESTInternalResponse *this, bdReference<bdByteBuffer> buffer)
{
  bdByteBuffer *v4; 
  bdRESTResponseMessage *v5; 
  bdRESTResponseMessage *v6; 
  bdByteBuffer *v7; 
  bool v8; 
  unsigned int DataSize; 
  unsigned int m_retryTokenOffset; 
  unsigned int v11; 
  bool v12; 
  __int64 v15; 
  __int64 v24; 
  __int64 v27; 
  double v29; 
  bdReference<bdByteBuffer> buffera; 
  bdByteBuffer *m_ptr; 
  std::unique_ptr<bdRESTResponseMessage> v32; 

  m_ptr = buffer.m_ptr;
  _RBP = this;
  this->m_state = BD_STOPPING;
  v4 = (bdByteBuffer *)bdMemory::allocate(0x3D18ui64);
  buffera.m_ptr = v4;
  if ( v4 )
  {
    bdRESTResponseMessage::bdRESTResponseMessage((bdRESTResponseMessage *)v4);
    v6 = v5;
  }
  else
  {
    v6 = NULL;
  }
  v32._Mypair._Myval2 = v6;
  v7 = (bdByteBuffer *)buffer.m_ptr->__vftable;
  buffera.m_ptr = v7;
  if ( v7 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v7->m_refCount, 1u);
  v8 = bdRESTResponseMessage::initFromBuffer(v6, *((bdLobbyService **)&_RBP->__vftable + 2), (bdReference<bdByteBuffer>)&buffera);
  if ( v8 )
  {
    if ( *((_QWORD *)&_RBP->__vftable + 3) )
      *(_QWORD *)(*((_QWORD *)&_RBP->__vftable + 3) + 32i64) = bdRESTResponseMessage::getTransactionID(v6);
    if ( (bdRESTInternal::g_debug_flags & 2) != 0 )
      bdRESTResponseMessage::dumpToLog(v6);
    if ( v6->m_lsgResponse.m_replyExtra.m_isRetryable && _RBP->m_retries < _RBP->m_maximumRetries )
    {
      DataSize = bdByteBuffer::getDataSize(_RBP->m_taskBuffer.m_ptr);
      m_retryTokenOffset = _RBP->m_retryTokenOffset;
      v11 = m_retryTokenOffset + 256;
      v12 = m_retryTokenOffset + 256 < DataSize;
      bdHandleAssert(m_retryTokenOffset != 0, "m_retryTokenOffset != 0", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdrestinternal.cpp", "bdRESTInternalResponse::deserialize", 0x174u, "m_retryTokenOffset unset?");
      bdHandleAssert(v12, "inRange", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdrestinternal.cpp", "bdRESTInternalResponse::deserialize", 0x175u, "retry token offset overflows buffer. invalid offset?");
      if ( v11 < DataSize )
      {
        _RDX = &v6->m_lsgResponse.m_replyExtra;
        _RCX = &_RBP->m_taskBuffer.m_ptr->m_data[_RBP->m_retryTokenOffset];
        v15 = 2i64;
        do
        {
          __asm
          {
            vmovups xmm0, xmmword ptr [rdx]
            vmovups xmmword ptr [rcx], xmm0
            vmovups xmm1, xmmword ptr [rdx+10h]
            vmovups xmmword ptr [rcx+10h], xmm1
            vmovups xmm0, xmmword ptr [rdx+20h]
            vmovups xmmword ptr [rcx+20h], xmm0
            vmovups xmm1, xmmword ptr [rdx+30h]
            vmovups xmmword ptr [rcx+30h], xmm1
            vmovups xmm0, xmmword ptr [rdx+40h]
            vmovups xmmword ptr [rcx+40h], xmm0
            vmovups xmm1, xmmword ptr [rdx+50h]
            vmovups xmmword ptr [rcx+50h], xmm1
            vmovups xmm0, xmmword ptr [rdx+60h]
            vmovups xmmword ptr [rcx+60h], xmm0
          }
          _RCX += 128;
          __asm
          {
            vmovups xmm1, xmmword ptr [rdx+70h]
            vmovups xmmword ptr [rcx-10h], xmm1
          }
          _RDX = (bdRESTResponseMessage::bdRESTReplyExtra *)((char *)_RDX + 128);
          --v15;
        }
        while ( v15 );
      }
      _RBP->m_retryWaitFrom = bdPlatformTiming::getLoResTimeStamp();
      _RBP->m_retryWaitSeconds = v6->m_lsgResponse.m_retryAfter;
      ++_RBP->m_retries;
      _RBP->m_state = BD_RUNNING;
      _RBP->m_legacyTask.m_ptr->m_status = BD_PENDING;
      v24 = *((_QWORD *)&_RBP->__vftable + 3);
      if ( v24 )
        *(_DWORD *)(v24 + 12) = _RBP->m_retries;
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+54h]
        vcvtss2sd xmm0, xmm0, xmm0
        vmovsd  [rsp+98h+var_60], xmm0
      }
      bdLogMessage(BD_LOG_INFO, "info/", "bdREST", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdrestinternal.cpp", "bdRESTInternalResponse::deserialize", 0x186u, "Retrying request in %.3f seconds. Retry %d/%d", v29, _RBP->m_retries, _RBP->m_maximumRetries);
    }
    else
    {
      bdRESTInternalResponse::doResultHandling(_RBP, v6);
    }
  }
  else
  {
    _RBP->m_legacyTask.m_ptr->m_status = BD_FAILED;
    _RBP->m_legacyTask.m_ptr->m_errorCode = BD_HANDLE_TASK_FAILED;
    v27 = *((_QWORD *)&_RBP->__vftable + 3);
    if ( v27 )
      *(_DWORD *)(v27 + 8) = 3;
  }
  std::unique_ptr<bdRESTResponseMessage>::~unique_ptr<bdRESTResponseMessage>(&v32);
  if ( buffer.m_ptr->__vftable && !_InterlockedDecrement((volatile signed __int32 *)&buffer.m_ptr->allocateBuffer) )
  {
    if ( buffer.m_ptr->__vftable )
      (*(void (__fastcall **)(bdByteBuffer_vtbl *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr->__vftable, 1i64);
    buffer.m_ptr->__vftable = NULL;
  }
  return v8;
}

/*
==============
bdRESTInternalResponse::doResultHandling
==============
*/
void bdRESTInternalResponse::doResultHandling(bdRESTInternalResponse *this, const bdRESTResponseMessage *msg)
{
  bdREST::bdHTTPStatus HTTPStatusCode; 
  bool isStatusSuccess; 
  __int64 v6; 
  int v7; 
  bdRESTLegacyTask *m_ptr; 
  bdReference<bdRESTLegacyTask> *p_m_legacyTask; 
  int v10; 
  int v11; 
  int v12; 
  int v13; 
  bdRESTLegacyTask *v14; 
  __int64 v15; 
  __int64 v18; 
  bdRESTErrorMap v19; 
  char v20[16]; 
  bdRESTErrorMap maps; 
  bdRESTErrorMap v22; 
  const char *code; 
  char *str; 
  char *errName; 

  HTTPStatusCode = bdRESTResponseMessage::getHTTPStatusCode((bdRESTResponseMessage *)msg);
  isStatusSuccess = bdREST::isStatusSuccess(HTTPStatusCode);
  v6 = *((_QWORD *)&this->__vftable + 3);
  if ( isStatusSuccess )
  {
    if ( v6 )
    {
      v7 = (*(__int64 (__fastcall **)(__int64, const bdRESTResponseMessage *))(*(_QWORD *)v6 + 8i64))(v6, msg);
      if ( !v7 )
      {
        p_m_legacyTask = &this->m_legacyTask;
        v10 = 3;
        this->m_legacyTask.m_ptr->m_status = BD_FAILED;
        this->m_legacyTask.m_ptr->m_errorCode = BD_HANDLE_TASK_FAILED;
        goto LABEL_33;
      }
    }
    else
    {
      v7 = 2;
    }
    m_ptr = this->m_legacyTask.m_ptr;
    p_m_legacyTask = &this->m_legacyTask;
    if ( (unsigned int)(v7 - 1) > 1 )
    {
      v10 = 3;
      m_ptr->m_status = BD_FAILED;
      p_m_legacyTask->m_ptr->m_errorCode = BD_HANDLE_TASK_FAILED;
      bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdrestinternal.cpp", "bdRESTInternalResponse::doResultHandling", 0x1ACu, "bad handled result");
    }
    else
    {
      v10 = 2;
      m_ptr->m_status = BD_DONE;
      p_m_legacyTask->m_ptr->m_errorCode = BD_NO_ERROR;
    }
  }
  else
  {
    if ( v6 )
      v11 = (*(__int64 (__fastcall **)(__int64, const bdRESTResponseMessage *))(*(_QWORD *)v6 + 16i64))(v6, msg);
    else
      v11 = 2;
    if ( v11 )
    {
      if ( v11 == 1 )
      {
        p_m_legacyTask = &this->m_legacyTask;
        v10 = 2;
        this->m_legacyTask.m_ptr->m_status = BD_DONE;
        this->m_legacyTask.m_ptr->m_errorCode = BD_NO_ERROR;
      }
      else if ( v11 == 2 )
      {
        str = NULL;
        if ( !bdRESTResponseMessage::getErrorName((bdRESTResponseMessage *)msg, (const char **)&str) || (v12 = strcmp_0(str, "Error:ClientError:RequestTimeout"), v13 = 4, v12) )
          v13 = 3;
        v14 = this->m_legacyTask.m_ptr;
        p_m_legacyTask = &this->m_legacyTask;
        LODWORD(code) = 4;
        v14->m_status = v13;
        if ( bdRESTResponseMessage::getErrorName((bdRESTResponseMessage *)msg, (const char **)&errName) )
        {
          v15 = *((_QWORD *)&this->__vftable + 3);
          if ( v15 )
            _RAX = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v15 + 24i64))(v15, v20);
          else
            bdRESTErrorMap::bdRESTErrorMap(&v19, NULL, 0);
          __asm
          {
            vmovups xmm0, xmmword ptr [rax]
            vmovups xmmword ptr [rsp+0A8h+maps.m_entries], xmm0
          }
          bdRESTErrorMap::bdRESTErrorMap(&v22, bdRESTInternal::BD_REST_STANDARD_ERRORS, 0x17u);
          bdRESTErrorMap::errorNameToCode(&maps, 2u, errName, (unsigned int *)&code);
        }
        p_m_legacyTask->m_ptr->m_errorCode = (int)code;
        if ( bdRESTResponseMessage::getErrorName((bdRESTResponseMessage *)msg, &code) )
          bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdREST", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdrestinternal.cpp", "bdRESTInternalResponse::doResultHandling", 0x1D9u, "error name: %s", code);
        else
          bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdREST", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdrestinternal.cpp", "bdRESTInternalResponse::doResultHandling", 0x1DDu, "No error name found in response");
        if ( bdRESTResponseMessage::getErrorMessage((bdRESTResponseMessage *)msg, (const char **)&str) )
          bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdREST", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdrestinternal.cpp", "bdRESTInternalResponse::doResultHandling", 0x1E2u, "error message: %s", str);
        else
          bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdREST", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdrestinternal.cpp", "bdRESTInternalResponse::doResultHandling", 0x1E6u, "No error message found in response");
        v10 = 3;
      }
      else
      {
        p_m_legacyTask = &this->m_legacyTask;
        v10 = 3;
        this->m_legacyTask.m_ptr->m_status = BD_FAILED;
        this->m_legacyTask.m_ptr->m_errorCode = BD_HANDLE_TASK_FAILED;
        bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdrestinternal.cpp", "bdRESTInternalResponse::doResultHandling", 0x1CDu, "bad handled result");
      }
    }
    else
    {
      p_m_legacyTask = &this->m_legacyTask;
      v10 = 3;
      this->m_legacyTask.m_ptr->m_status = BD_FAILED;
      this->m_legacyTask.m_ptr->m_errorCode = BD_HANDLE_TASK_FAILED;
    }
  }
LABEL_33:
  bdHandleAssert(1, "restResultStatus != bdRESTResponse::BD_INVALID", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdrestinternal.cpp", "bdRESTInternalResponse::doResultHandling", 0x1EBu, "response's rest status cannot be BD_INVALID. Ensure all cases are covered.");
  v18 = *((_QWORD *)&this->__vftable + 3);
  if ( v18 )
  {
    *(_DWORD *)(v18 + 8) = v10;
    v18 = *((_QWORD *)&this->__vftable + 3);
  }
  if ( v18 && *(_BYTE *)(v18 + 16) )
    p_m_legacyTask->m_ptr->m_errorCode = *(_DWORD *)(v18 + 20);
  p_m_legacyTask->m_ptr->m_transactionID = bdRESTResponseMessage::getTransactionID((bdRESTResponseMessage *)msg);
}

/*
==============
bdRESTLSGRequestMessage::dumpToLog
==============
*/
void bdRESTLSGRequestMessage::dumpToLog(bdRESTLSGRequestMessage *this)
{
  const char *v2; 
  const char *v3; 
  int v4; 
  unsigned int v5; 
  bool v6; 
  const char *v7; 
  const char *v8; 
  const bdRESTHeaders::bdRESTHeaderField *i; 
  __int64 v10; 
  __int64 v11; 

  v2 = bdRESTInternal::methodEnumToString(this->m_method);
  bdLogMessage(BD_LOG_INFO, "info/", "bdREST", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdrestinternal.cpp", "bdRESTLSGRequestMessage::dumpToLog", 0xC5u, "method:              %s", v2);
  bdLogMessage(BD_LOG_INFO, "info/", "bdREST", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdrestinternal.cpp", "bdRESTLSGRequestMessage::dumpToLog", 0xC6u, "serviceName:         %s", this->m_serviceName);
  bdLogMessage(BD_LOG_INFO, "info/", "bdREST", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdrestinternal.cpp", "bdRESTLSGRequestMessage::dumpToLog", 0xC7u, "target:              %s", this->m_target);
  v3 = bdRESTInternal::mimeTypeEnumToString(this->m_defaultAcceptType);
  bdLogMessage(BD_LOG_INFO, "info/", "bdREST", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdrestinternal.cpp", "bdRESTLSGRequestMessage::dumpToLog", 0xC8u, "defaultAcceptType:   %s", v3);
  v4 = 0;
  v5 = 0;
  if ( this->m_accepts.m_size )
  {
    v6 = this->m_accepts.m_size != 0;
    do
    {
      bdHandleAssert(v6, "i < m_size", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<enum bdREST::bdMimeType,3>::operator []", 0x54u, "i is out of range");
      v7 = bdRESTInternal::mimeTypeEnumToString(this->m_accepts.m_elements[v5]);
      LODWORD(v10) = v5;
      bdLogMessage(BD_LOG_INFO, "info/", "bdREST", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdrestinternal.cpp", "bdRESTLSGRequestMessage::dumpToLog", 0xCCu, "accepts[%d]:          %s", v10, v7);
      v6 = ++v5 < this->m_accepts.m_size;
    }
    while ( v5 < this->m_accepts.m_size );
  }
  v8 = bdRESTInternal::mimeTypeEnumToString(this->m_contentType);
  bdLogMessage(BD_LOG_INFO, "info/", "bdREST", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdrestinternal.cpp", "bdRESTLSGRequestMessage::dumpToLog", 0xCFu, "contentType:         %s", v8);
  for ( i = bdRESTHeaders::begin((bdRESTHeaders *)this->m_headers); i != bdRESTHeaders::end((bdRESTHeaders *)this->m_headers); ++v4 )
  {
    LODWORD(v11) = v4;
    bdLogMessage(BD_LOG_INFO, "info/", "bdREST", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdrestinternal.cpp", "bdRESTLSGRequestMessage::dumpToLog", 0xD4u, "headers[%02d]:  %s: %s", v11, i->m_key, i->m_value);
    ++i;
  }
}

/*
==============
bdRESTInternalResponse::findErrorCode
==============
*/
__int64 bdRESTInternalResponse::findErrorCode(bdRESTInternalResponse *this, const bdRESTResponseMessage *msg)
{
  __int64 v3; 
  bdRESTErrorMap v7; 
  char v8[16]; 
  bdRESTErrorMap maps; 
  bdRESTErrorMap v10; 
  unsigned int code; 
  char *errName; 

  code = 4;
  if ( bdRESTResponseMessage::getErrorName((bdRESTResponseMessage *)msg, (const char **)&errName) )
  {
    v3 = *((_QWORD *)&this->__vftable + 3);
    if ( v3 )
      _RAX = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v3 + 24i64))(v3, v8);
    else
      bdRESTErrorMap::bdRESTErrorMap(&v7, NULL, 0);
    __asm
    {
      vmovups xmm0, xmmword ptr [rax]
      vmovups xmmword ptr [rsp+68h+maps.m_entries], xmm0
    }
    bdRESTErrorMap::bdRESTErrorMap(&v10, bdRESTInternal::BD_REST_STANDARD_ERRORS, 0x17u);
    bdRESTErrorMap::errorNameToCode(&maps, 2u, errName, &code);
  }
  return code;
}

/*
==============
bdRESTInternalResponse::finishResponseLocally
==============
*/
void bdRESTInternalResponse::finishResponseLocally(bdRESTInternalResponse *this, bdREST::bdHTTPStatus statusCode, const char *errorName, const char *errorMessage)
{
  bdRESTResponseMessage *v8; 
  bdRESTResponseMessage *v9; 
  bdRESTResponseMessage *v10; 
  std::unique_ptr<bdRESTResponseMessage> v11; 

  this->m_state = BD_STOPPING;
  v8 = (bdRESTResponseMessage *)bdMemory::allocate(0x3D18ui64);
  v11._Mypair._Myval2 = v8;
  if ( v8 )
  {
    bdRESTResponseMessage::bdRESTResponseMessage(v8);
    v10 = v9;
  }
  else
  {
    v10 = NULL;
  }
  v11._Mypair._Myval2 = v10;
  bdRESTResponseMessage::initFromLocalStatus(v10, *((bdLobbyService **)&this->__vftable + 2), statusCode, errorName, errorMessage);
  bdRESTInternalResponse::doResultHandling(this, v10);
  std::unique_ptr<bdRESTResponseMessage>::~unique_ptr<bdRESTResponseMessage>(&v11);
}

/*
==============
bdRESTLSGRequest::serialize
==============
*/
_BOOL8 bdRESTLSGRequest::serialize(bdRESTLSGRequest *this, bdTaskParams *params, unsigned int *retryTokenOffset)
{
  bool m_isValid; 
  bdByteBuffer *v7; 
  _BOOL8 v8; 
  bdByteBuffer *v9; 
  unsigned __int8 *m_data; 
  char v11; 
  bool v12; 
  unsigned int DataSize; 
  bdTaskByteBuffer *m_ptr; 
  unsigned int v15; 
  unsigned int v16; 
  _BOOL8 v17; 
  bool v18; 
  bool v19; 
  int *p_m_arrayWriteCount; 
  bdByteBuffer *v21; 
  bool v22; 
  bdByteBuffer *retryTokenOffseta; 
  bdReference<bdByteBuffer> buffer; 
  bdByteBuffer *v26; 
  bdTaskByteBuffer *v27; 

  m_isValid = this->m_isValid;
  v7 = (bdByteBuffer *)bdMemory::allocate(0x38ui64);
  v9 = v7;
  retryTokenOffseta = v7;
  if ( v7 )
  {
    v7->m_refCount.m_value._My_val = 0;
    v7->__vftable = (bdByteBuffer_vtbl *)&bdByteBuffer::`vftable';
    v7->m_size = 0xFFFF;
    v7->m_data = NULL;
    *(_WORD *)&v7->m_typeChecked = 257;
    v7->m_allocatedData = 0;
    bdHandleAssert(1, "m_data == BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdbytebuffer.inl", "bdByteBuffer::init", 0x31u, "Buffer already allocated. init() called twice?");
    v9->m_size = 0xFFFF;
    v9->allocateBuffer(v9);
    m_data = v9->m_data;
    v9->m_writePtr = m_data;
    v9->m_readPtr = m_data;
  }
  else
  {
    v9 = NULL;
  }
  v26 = v9;
  if ( v9 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v9->m_refCount, 1u);
  LODWORD(retryTokenOffseta) = 0;
  if ( !m_isValid )
    goto LABEL_11;
  buffer.m_ptr = v9;
  if ( v9 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v9->m_refCount, 1u);
  if ( bdRESTLSGRequestMessage::serialize(&this->m_http1req, (bdReference<bdByteBuffer>)&buffer, (unsigned int *)&retryTokenOffseta) )
    v11 = 1;
  else
LABEL_11:
    v11 = 0;
  LOBYTE(v8) = 1;
  if ( params->ensureCapacity(params, 4u, v8) )
  {
    if ( params->m_isWritingArray )
      --params->m_arrayWriteCount;
    v12 = params->m_serializeOk && bdByteBuffer::writeUInt32(params->m_buffer.m_ptr, bdREST::BD_REST_VERSION);
    params->m_serializeOk = v12;
  }
  DataSize = bdByteBuffer::getDataSize(v9);
  bdBufferParams::addBlob(params, v9->m_data, DataSize);
  if ( !params->m_serializeOk )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::getTaskBuffer", 0x13u, "Failed to serialize one or more task parameters.");
  m_ptr = params->m_taskBuffer.m_ptr;
  v27 = m_ptr;
  if ( m_ptr )
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
  v15 = bdByteBuffer::getDataSize(v9);
  v16 = (_DWORD)retryTokenOffseta - v15;
  *retryTokenOffset = v16 + bdByteBuffer::getDataSize(m_ptr);
  if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
    ((void (__fastcall *)(bdTaskByteBuffer *, __int64))m_ptr->~bdReferencable)(m_ptr, 1i64);
  v18 = this->m_body != NULL;
  LOBYTE(v17) = 1;
  if ( params->ensureCapacity(params, 1u, v17) )
  {
    if ( params->m_isWritingArray )
      --params->m_arrayWriteCount;
    v19 = params->m_serializeOk && bdByteBuffer::writeBool(params->m_buffer.m_ptr, v18);
    params->m_serializeOk = v19;
  }
  bdBufferParams::addBlob(params, this->m_body, this->m_bodySize);
  v22 = 0;
  if ( v11 )
  {
    if ( (p_m_arrayWriteCount = &params->m_arrayWriteCount, !params->m_isWritingArray) && !*p_m_arrayWriteCount || (bdLogMessage(BD_LOG_WARNING, "warn/", "bdLobbyCommon/bdBufferParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdbufferparams.inl", "bdBufferParams::serializedOk", 0xECu, "Did you forget to call arrayEnd() at the correct time (remaining = %u)?", *p_m_arrayWriteCount), !params->m_isWritingArray) && !*p_m_arrayWriteCount )
    {
      if ( params->m_serializeOk )
      {
        v21 = params->m_buffer.m_ptr;
        if ( v21 )
        {
          if ( v21->m_data )
            v22 = 1;
        }
      }
    }
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v9->m_refCount, 0xFFFFFFFF) == 1 )
    ((void (__fastcall *)(bdByteBuffer *, __int64))v9->~bdReferencable)(v9, 1i64);
  return v22;
}

/*
==============
bdRESTLSGRequestMessage::serialize
==============
*/
_BOOL8 bdRESTLSGRequestMessage::serialize(bdRESTLSGRequestMessage *this, bdReference<bdByteBuffer> buffer, unsigned int *retryTokenOffset)
{
  int v6; 
  bdByteBuffer *v7; 
  unsigned int v8; 
  bool v9; 
  unsigned __int8 *m_restResourceName; 
  unsigned int v11; 
  void *v12; 
  unsigned int v13; 
  bool v14; 
  unsigned __int8 *m_restOperationName; 
  void *v16; 
  unsigned int v17; 
  bool v18; 
  signed __int64 v19; 
  _BYTE *v20; 
  bool v21; 
  const bdRESTHeaders::bdRESTHeaderField *i; 
  bool v23; 
  bool v24; 
  const char *m_serviceName; 
  void *v26; 
  bool v27; 
  __int64 v28; 
  unsigned int m_size; 
  bool v30; 
  bdString v32; 
  bdReference<bdByteBuffer> buffera; 
  bdString string; 
  __int64 v35; 
  bdByteBuffer *m_ptr; 
  bdStructBufferSerializer v37; 

  v35 = -2i64;
  m_ptr = buffer.m_ptr;
  v6 = 0;
  v7 = (bdByteBuffer *)buffer.m_ptr->__vftable;
  v8 = LODWORD(buffer.m_ptr->expand) + LODWORD(buffer.m_ptr->resizeToFit) - LODWORD(buffer.m_ptr->__vftable[1].allocateBuffer);
  buffera.m_ptr = v7;
  if ( v7 )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)&v7->m_refCount, 1u);
    v6 = 0;
  }
  bdStructBufferSerializer::bdStructBufferSerializer(&v37, (bdReference<bdByteBuffer>)&buffera, v8, 0);
  v9 = bdStructBufferSerializer::writeObjectBegin(&v37, 1u) && bdStructBufferSerializer::writeBool(&v37, 1u, this->m_params->m_useStrictRules) && bdStructBufferSerializer::writeBool(&v37, 2u, this->m_params->m_debugReturnAllHeaders) && bdStructBufferSerializer::writeUInt32(&v37, 3u, this->m_params->m_spanID) && bdStructBufferSerializer::writeUInt32(&v37, 0x64u, this->m_params->m_requestTimeoutMs) && bdStructBufferSerializer::writeBlob(&v37, 0xC8u, this->m_params->m_requestRetryToken, 0x100u);
  *retryTokenOffset = bdByteBuffer::getDataSize((bdByteBuffer *)buffer.m_ptr->__vftable) - 256;
  m_restResourceName = this->m_params->m_restResourceName;
  v11 = 64;
  v12 = memchr_0(m_restResourceName, 0, 0x40ui64);
  v13 = 64;
  if ( v12 )
    v13 = (_DWORD)v12 - (_DWORD)m_restResourceName;
  v14 = v9 && bdStructBufferSerializer::writeBlob(&v37, 0x12Cu, m_restResourceName, v13);
  m_restOperationName = this->m_params->m_restOperationName;
  v16 = memchr_0(m_restOperationName, 0, 0x40ui64);
  v17 = 64;
  if ( v16 )
    v17 = (_DWORD)v16 - (_DWORD)m_restOperationName;
  v18 = v14 && bdStructBufferSerializer::writeBlob(&v37, 0x12Du, m_restOperationName, v17) && bdStructBufferSerializer::writeObjectEnd(&v37) && bdStructBufferSerializer::writeUInt32(&v37, 2u, this->m_defaultAcceptType) && bdStructBufferSerializer::writeUInt32(&v37, 0xAu, this->m_method);
  LODWORD(v19) = 4096;
  v20 = memchr_0(this->m_target, 0, 0x1000ui64);
  if ( v20 )
    v19 = v20 - this->m_target;
  v21 = v18 && bdStructBufferSerializer::writeString(&v37, 0xBu, this->m_target, v19);
  for ( i = bdRESTHeaders::begin((bdRESTHeaders *)this->m_headers); i != bdRESTHeaders::end((bdRESTHeaders *)this->m_headers); ++i )
  {
    v23 = 0;
    if ( v21 && bdStructBufferSerializer::writeObjectBegin(&v37, 0xEu) )
    {
      bdString::bdString(&string, i->m_key);
      v6 |= 1u;
      if ( bdStructBufferSerializer::writeString(&v37, 1u, &string) )
        v23 = 1;
    }
    if ( (v6 & 1) != 0 )
    {
      v6 &= ~1u;
      bdString::~bdString(&string);
    }
    v24 = 0;
    if ( v23 )
    {
      bdString::bdString(&v32, i->m_value);
      v6 |= 2u;
      if ( bdStructBufferSerializer::writeString(&v37, 2u, &v32) )
        v24 = 1;
    }
    if ( (v6 & 2) != 0 )
    {
      v6 &= ~2u;
      bdString::~bdString(&v32);
    }
    v21 = v24 && bdStructBufferSerializer::writeObjectEnd(&v37);
  }
  m_serviceName = this->m_serviceName;
  v26 = memchr_0(m_serviceName, 0, 0x40ui64);
  if ( v26 )
    v11 = (_DWORD)v26 - (_DWORD)m_serviceName;
  if ( !v21 || !bdStructBufferSerializer::writeString(&v37, 0x65u, m_serviceName, v11) )
    goto LABEL_63;
  v27 = 1;
  v28 = 0i64;
  m_size = this->m_accepts.m_size;
  if ( !m_size )
    goto LABEL_62;
  do
  {
    v27 = v27 && (bdHandleAssert((unsigned int)v28 < m_size, "i < m_size", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<enum bdREST::bdMimeType,3>::operator []", 0x54u, "i is out of range"), bdStructBufferSerializer::writeUInt64(&v37, 0x66u, this->m_accepts.m_elements[v28]));
    v28 = (unsigned int)(v28 + 1);
    m_size = this->m_accepts.m_size;
  }
  while ( (unsigned int)v28 < m_size );
  if ( v27 )
LABEL_62:
    v30 = 1;
  else
LABEL_63:
    v30 = 0;
  if ( bdRESTInternal::mimeTypeIsValid(this->m_contentType) )
    v30 = v30 && bdStructBufferSerializer::writeUInt32(&v37, 0x12Eu, this->m_contentType);
  bdStructBufferSerializer::~bdStructBufferSerializer(&v37);
  if ( buffer.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->allocateBuffer, 0xFFFFFFFF) == 1 )
  {
    if ( buffer.m_ptr->__vftable )
      (*(void (__fastcall **)(bdByteBuffer_vtbl *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr->__vftable, 1i64);
    buffer.m_ptr->__vftable = NULL;
  }
  return v30;
}

/*
==============
bdRESTInternalResponse::sizeOf
==============
*/
__int64 bdRESTInternalResponse::sizeOf(bdRESTInternalResponse *this)
{
  return 112i64;
}

/*
==============
bdRESTLSGRequestMessage::validate
==============
*/
char bdRESTLSGRequestMessage::validate(bdRESTLSGRequestMessage *this)
{
  const char *m_serviceName; 
  char v3; 
  _BYTE *v4; 
  __int64 v5; 
  const char *m_target; 
  _BYTE *v7; 
  __int64 v8; 
  __int64 v9; 
  bool v10; 
  const bdRESTLSGRequestMessage::bdRESTLSGRequestParamsMessage *m_params; 
  __int64 v13; 
  __int64 v14; 

  m_serviceName = this->m_serviceName;
  v3 = 1;
  if ( !m_serviceName )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdREST", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdrestinternal.cpp", "bdRESTLSGRequestMessage::validate", 0x63u, "service name is NULL");
    m_serviceName = this->m_serviceName;
    v3 = 0;
  }
  v4 = memchr_0(m_serviceName, 0, 0x40ui64);
  if ( v4 )
  {
    v5 = v4 - m_serviceName;
    if ( (unsigned __int64)(v4 - m_serviceName - 1) <= 0x3E )
      goto LABEL_8;
  }
  else
  {
    v5 = 64i64;
  }
  bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdREST", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdrestinternal.cpp", "bdRESTLSGRequestMessage::validate", 0x6Au, "Invalid service name string length [%d]. expected: 0 < serviceNameLen < %d", v5, 64);
  v3 = 0;
LABEL_8:
  m_target = this->m_target;
  if ( !m_target )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdREST", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdrestinternal.cpp", "bdRESTLSGRequestMessage::validate", 0x70u, "target is NULL");
    m_target = this->m_target;
    v3 = 0;
  }
  v7 = memchr_0(m_target, 0, 0x1000ui64);
  if ( v7 )
  {
    v8 = v7 - m_target;
    if ( (unsigned __int64)(v7 - m_target - 1) <= 0xFFE )
      goto LABEL_15;
  }
  else
  {
    v8 = 4096i64;
  }
  LODWORD(v14) = 4096;
  bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdREST", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdrestinternal.cpp", "bdRESTLSGRequestMessage::validate", 0x77u, "Invalid target string length [%d]. expected: 0 < targetLen < %d", v8, v14);
  v3 = 0;
LABEL_15:
  if ( !bdRESTInternal::methodIsValid(this->m_method) )
  {
    LODWORD(v13) = this->m_method;
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdREST", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdrestinternal.cpp", "bdRESTLSGRequestMessage::validate", 0x81u, "Invalid method [%d]", v13);
    v3 = 0;
  }
  if ( !bdRESTInternal::mimeTypeIsValid(this->m_defaultAcceptType) )
  {
    LODWORD(v13) = this->m_defaultAcceptType;
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdREST", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdrestinternal.cpp", "bdRESTLSGRequestMessage::validate", 0x87u, "Invalid default accept type [%d]. The list of accept types must contain JSON or PROTOBUF.", v13);
    v3 = 0;
  }
  v9 = 0i64;
  if ( this->m_accepts.m_size )
  {
    v10 = this->m_accepts.m_size != 0;
    do
    {
      bdHandleAssert(v10, "i < m_size", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<enum bdREST::bdMimeType,3>::operator []", 0x54u, "i is out of range");
      if ( !bdRESTInternal::mimeTypeIsValid(this->m_accepts.m_elements[v9]) )
      {
        bdHandleAssert((unsigned int)v9 < this->m_accepts.m_size, "i < m_size", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<enum bdREST::bdMimeType,3>::operator []", 0x54u, "i is out of range");
        LODWORD(v14) = this->m_accepts.m_elements[v9];
        LODWORD(v13) = v9;
        bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdREST", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdrestinternal.cpp", "bdRESTLSGRequestMessage::validate", 0x8Fu, "Invalid accept type accepts[%d] = [%d]", v13, v14);
        v3 = 0;
      }
      v9 = (unsigned int)(v9 + 1);
      v10 = (unsigned int)v9 < this->m_accepts.m_size;
    }
    while ( (unsigned int)v9 < this->m_accepts.m_size );
  }
  if ( bdRESTHeaders::findValue((bdRESTHeaders *)this->m_headers, "accept", 0) )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdREST", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdrestinternal.cpp", "bdRESTLSGRequestMessage::validate", 0x9Au, "header contains \"accept\" field which should be set by calling setFieldAccept");
    v3 = 0;
  }
  if ( bdRESTHeaders::findValue((bdRESTHeaders *)this->m_headers, "content-type", 0) )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdREST", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdrestinternal.cpp", "bdRESTLSGRequestMessage::validate", 0xA0u, "header contains \"content-type\" field which should be set by calling setFieldContentType");
    v3 = 0;
  }
  if ( bdRESTHeaders::findValue((bdRESTHeaders *)this->m_headers, "host", 0) )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdREST", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdrestinternal.cpp", "bdRESTLSGRequestMessage::validate", 0xA6u, "header contains \"host\" field which should not be set. The host set to a request's service name.");
    v3 = 0;
  }
  m_params = this->m_params;
  if ( !this->m_params )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdREST", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdrestinternal.cpp", "bdRESTLSGRequestMessage::validate", 0xB0u, "request params cannot be NULL");
    m_params = this->m_params;
    v3 = 0;
    if ( !this->m_params )
      return v3;
  }
  if ( !m_params->m_restResourceName[0] )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdREST", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdrestinternal.cpp", "bdRESTLSGRequestMessage::validate", 0xB6u, "request params resource name is empty. This must be set to a string defined by the service team.");
    m_params = this->m_params;
    v3 = 0;
  }
  if ( !m_params || m_params->m_restOperationName[0] )
    return v3;
  bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdREST", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdrestinternal.cpp", "bdRESTLSGRequestMessage::validate", 0xBCu, "request params operation name is empty. This must be set to a string defined by the service team.");
  return 0;
}

