/*
==============
bdRESTTaskManager::startRequest
==============
*/

bdReference<bdRemoteTask> *__fastcall bdRESTTaskManager::startRequest(bdRESTTaskManager *this, bdReference<bdRemoteTask> *result, const bdRESTRequest *request, bdRESTResponse *response)
{
  return ?startRequest@bdRESTTaskManager@@QEAA?AV?$bdReference@VbdRemoteTask@@@@AEBVbdRESTRequest@@AEAVbdRESTResponse@@@Z(this, result, request, response);
}

/*
==============
bdRESTTaskManager::deinit
==============
*/

void __fastcall bdRESTTaskManager::deinit(bdRESTTaskManager *this)
{
  ?deinit@bdRESTTaskManager@@IEAAXXZ(this);
}

/*
==============
bdRESTTaskManager::startResponseTask
==============
*/

bool __fastcall bdRESTTaskManager::startResponseTask(bdRESTTaskManager *this, bdRESTInternalResponse *response)
{
  return ?startResponseTask@bdRESTTaskManager@@IEAA_NPEAVbdRESTInternalResponse@@@Z(this, response);
}

/*
==============
bdRESTTaskManager::startRequest
==============
*/

bdReference<bdRemoteTask> *__fastcall bdRESTTaskManager::startRequest(bdRESTTaskManager *this, bdReference<bdRemoteTask> *result, const bdRESTRequest *request)
{
  return ?startRequest@bdRESTTaskManager@@QEAA?AV?$bdReference@VbdRemoteTask@@@@AEBVbdRESTRequest@@@Z(this, result, request);
}

/*
==============
bdRESTTaskManager::bdRESTTaskManager
==============
*/

void __fastcall bdRESTTaskManager::bdRESTTaskManager(bdRESTTaskManager *this, const bdRESTConfig *restConfig, bdLobbyService *lobbyService)
{
  ??0bdRESTTaskManager@@QEAA@PEBVbdRESTConfig@@PEAVbdLobbyService@@@Z(this, restConfig, lobbyService);
}

/*
==============
bdRESTTaskManager::pump
==============
*/

void __fastcall bdRESTTaskManager::pump(bdRESTTaskManager *this)
{
  ?pump@bdRESTTaskManager@@IEAAXXZ(this);
}

/*
==============
bdRESTTaskManager::allocateResponse
==============
*/

bdRESTInternalResponse *__fastcall bdRESTTaskManager::allocateResponse(bdRESTTaskManager *this, const bdRESTRequestBuilder *builder, bdRESTResponse *externalResponse, bdReference<bdTaskByteBuffer> taskBuffer, unsigned int retryTokenOffset)
{
  return ?allocateResponse@bdRESTTaskManager@@IEAAPEAVbdRESTInternalResponse@@AEBVbdRESTRequestBuilder@@PEAVbdRESTResponse@@V?$bdReference@VbdTaskByteBuffer@@@@I@Z(this, builder, externalResponse, taskBuffer, retryTokenOffset);
}

/*
==============
bdRESTTaskManager::startRequest
==============
*/

bdReference<bdRemoteTask> *__fastcall bdRESTTaskManager::startRequest(bdRESTTaskManager *this, bdReference<bdRemoteTask> *result, const bdRESTRequest *request, bdRESTResponse *response)
{
  return ?startRequest@bdRESTTaskManager@@IEAA?AV?$bdReference@VbdRemoteTask@@@@AEBVbdRESTRequest@@PEAVbdRESTResponse@@@Z(this, result, request, response);
}

/*
==============
bdRESTTaskManager::init
==============
*/

bool __fastcall bdRESTTaskManager::init(bdRESTTaskManager *this, unsigned int maxConcurrentRequests, bdLobbyService *lobbyService)
{
  return ?init@bdRESTTaskManager@@IEAA_NIPEAVbdLobbyService@@@Z(this, maxConcurrentRequests, lobbyService);
}

/*
==============
bdRESTTaskManager::~bdRESTTaskManager
==============
*/

void __fastcall bdRESTTaskManager::~bdRESTTaskManager(bdRESTTaskManager *this)
{
  ??1bdRESTTaskManager@@QEAA@XZ(this);
}

/*
==============
bdRESTTaskManager::bdRESTTaskManager
==============
*/
void bdRESTTaskManager::bdRESTTaskManager(bdRESTTaskManager *this, const bdRESTConfig *restConfig, bdLobbyService *lobbyService)
{
  this->m_responsePool.m_data = NULL;
  *(_QWORD *)&this->m_responsePool.m_capacity = 0i64;
  this->m_restConfig = restConfig;
  bdRESTTaskManager::init(this, 0x20u, lobbyService);
}

/*
==============
bdRESTTaskManager::~bdRESTTaskManager
==============
*/
void bdRESTTaskManager::~bdRESTTaskManager(bdRESTTaskManager *this)
{
  bdRESTInternalResponse *m_data; 
  __int64 m_size; 
  bdRemoteTask *m_ptr; 
  __int64 v5; 

  m_data = this->m_responsePool.m_data;
  m_size = this->m_responsePool.m_size;
  if ( this->m_responsePool.m_data != &this->m_responsePool.m_data[m_size] )
  {
    do
    {
      if ( m_data->m_state )
      {
        m_ptr = m_data->m_task.m_ptr;
        if ( m_ptr )
          bdRemoteTask::cancelTask(m_ptr);
      }
      ++m_data;
      m_size = this->m_responsePool.m_size;
    }
    while ( m_data != &this->m_responsePool.m_data[m_size] );
    m_data = this->m_responsePool.m_data;
  }
  if ( (_DWORD)m_size )
  {
    v5 = (unsigned int)m_size;
    do
    {
      bdRESTInternalResponse::`vbase destructor(m_data++);
      --v5;
    }
    while ( v5 );
    m_data = this->m_responsePool.m_data;
  }
  bdMemory::deallocate(m_data);
  this->m_responsePool.m_data = NULL;
  *(_QWORD *)&this->m_responsePool.m_capacity = 0i64;
  this->m_remoteTaskManager = NULL;
  this->m_maxConcurrentRequests = 0;
  bdArray<bdRESTInternalResponse>::~bdArray<bdRESTInternalResponse>(&this->m_responsePool);
}

/*
==============
bdRESTTaskManager::allocateResponse
==============
*/
bdRESTInternalResponse *bdRESTTaskManager::allocateResponse(bdRESTTaskManager *this, const bdRESTRequestBuilder *builder, bdRESTResponse *externalResponse, bdReference<bdTaskByteBuffer> taskBuffer, unsigned int retryTokenOffset)
{
  bdRESTInternalResponse *v9; 
  bdRESTInternalResponse *m_data; 
  bdRESTInternalResponse *v11; 

  v9 = NULL;
  m_data = this->m_responsePool.m_data;
  v11 = &this->m_responsePool.m_data[this->m_responsePool.m_size];
  if ( this->m_responsePool.m_data == v11 )
  {
LABEL_8:
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdREST", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdresttaskmanager.cpp", "bdRESTTaskManager::allocateResponse", 0x10Du, "No free responses. If more concurrent requests are required increase maxConcurrentRequests in bdRESTTaskManager::init().");
  }
  else
  {
    while ( !v9 )
    {
      v9 = m_data;
      if ( m_data->m_state )
        v9 = NULL;
      if ( ++m_data == v11 )
      {
        if ( !v9 )
          goto LABEL_8;
        break;
      }
    }
    *((_QWORD *)&v9->__vftable + 2) = this->m_lobbyService;
    v9->m_state = BD_STOPPING;
    v9->m_timeoutMs = bdRESTRequestBuilder::timeout((bdRESTRequestBuilder *)builder);
    v9->m_maximumRetries = bdRESTRequestBuilder::maxRetries((bdRESTRequestBuilder *)builder);
    *((_QWORD *)&v9->__vftable + 3) = externalResponse;
    bdReference<bdTaskByteBuffer>::operator=(&v9->m_taskBuffer, (const bdReference<bdTaskByteBuffer> *)taskBuffer.m_ptr);
    v9->m_retryTokenOffset = retryTokenOffset;
    bdStopwatch::start(&v9->m_timer);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rax
      vmulss  xmm1, xmm0, cs:__real@3a83126f; timeout
    }
    bdRESTLegacyTask::setRequestTimeout(v9->m_legacyTask.m_ptr, *(const float *)&_XMM1);
  }
  if ( taskBuffer.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&taskBuffer.m_ptr->allocateBuffer, 0xFFFFFFFF) == 1 )
  {
    if ( taskBuffer.m_ptr->__vftable )
      (*(void (__fastcall **)(bdTaskByteBuffer_vtbl *, __int64))taskBuffer.m_ptr->~bdReferencable)(taskBuffer.m_ptr->__vftable, 1i64);
    taskBuffer.m_ptr->__vftable = NULL;
  }
  return v9;
}

/*
==============
bdRESTTaskManager::deinit
==============
*/
void bdRESTTaskManager::deinit(bdRESTTaskManager *this)
{
  bdRESTInternalResponse *m_data; 
  __int64 m_size; 
  bdRemoteTask *m_ptr; 
  __int64 v5; 

  m_data = this->m_responsePool.m_data;
  m_size = this->m_responsePool.m_size;
  if ( this->m_responsePool.m_data != &this->m_responsePool.m_data[m_size] )
  {
    do
    {
      if ( m_data->m_state )
      {
        m_ptr = m_data->m_task.m_ptr;
        if ( m_ptr )
          bdRemoteTask::cancelTask(m_ptr);
      }
      m_size = this->m_responsePool.m_size;
      ++m_data;
    }
    while ( m_data != &this->m_responsePool.m_data[m_size] );
    m_data = this->m_responsePool.m_data;
  }
  if ( (_DWORD)m_size )
  {
    v5 = (unsigned int)m_size;
    do
    {
      bdRESTInternalResponse::`vbase destructor(m_data++);
      --v5;
    }
    while ( v5 );
    m_data = this->m_responsePool.m_data;
  }
  bdMemory::deallocate(m_data);
  this->m_responsePool.m_data = NULL;
  *(_QWORD *)&this->m_responsePool.m_capacity = 0i64;
  this->m_remoteTaskManager = NULL;
  this->m_maxConcurrentRequests = 0;
}

/*
==============
bdRESTTaskManager::init
==============
*/
char bdRESTTaskManager::init(bdRESTTaskManager *this, unsigned int maxConcurrentRequests, bdLobbyService *lobbyService)
{
  __int64 v4; 
  unsigned int m_capacity; 
  __int64 v8; 
  const bdRESTInternalResponse *v9; 
  const bdRESTInternalResponse *v10; 
  unsigned int m_size; 
  bdRESTInternalResponse *v12; 
  bdRESTLegacyTask *m_ptr; 
  bdRESTInternalResponse v14; 

  v4 = maxConcurrentRequests;
  bdHandleAssert(lobbyService != NULL, "lobbyService != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdresttaskmanager.cpp", "bdRESTTaskManager::init", 0x1Fu, "lobbyservice can't be NULL");
  if ( lobbyService )
  {
    this->m_maxConcurrentRequests = v4;
    this->m_lobbyService = lobbyService;
    this->m_remoteTaskManager = bdLobbyService::getTaskManager(lobbyService);
    m_capacity = this->m_responsePool.m_capacity;
    if ( m_capacity < (unsigned int)v4 )
      bdArray<bdRESTInternalResponse>::increaseCapacity(&this->m_responsePool, v4 - m_capacity);
    if ( (_DWORD)v4 )
    {
      v8 = v4;
      do
      {
        bdRESTInternalResponse::bdRESTInternalResponse(&v14);
        v10 = v9;
        m_size = this->m_responsePool.m_size;
        if ( m_size == this->m_responsePool.m_capacity )
        {
          bdArray<bdRESTInternalResponse>::increaseCapacity(&this->m_responsePool, 1u);
          m_size = this->m_responsePool.m_size;
        }
        v12 = &this->m_responsePool.m_data[m_size];
        if ( v12 )
        {
          bdRESTInternalResponse::bdRESTInternalResponse(v12, v10);
          m_size = this->m_responsePool.m_size;
        }
        this->m_responsePool.m_size = m_size + 1;
        if ( v14.m_legacyTask.m_ptr && !_InterlockedDecrement((volatile signed __int32 *)&v14.m_legacyTask.m_ptr->m_refCount) )
        {
          m_ptr = v14.m_legacyTask.m_ptr;
          if ( v14.m_legacyTask.m_ptr )
          {
            bdRemoteTask::~bdRemoteTask(v14.m_legacyTask.m_ptr);
            bdMemory::deallocate(m_ptr);
          }
          v14.m_legacyTask.m_ptr = NULL;
        }
        if ( v14.m_task.m_ptr && !_InterlockedDecrement((volatile signed __int32 *)&v14.m_task.m_ptr->m_refCount) )
        {
          if ( v14.m_task.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))v14.m_task.m_ptr->~bdReferencable)(v14.m_task.m_ptr, 1i64);
          v14.m_task.m_ptr = NULL;
        }
        if ( v14.m_taskBuffer.m_ptr && !_InterlockedDecrement((volatile signed __int32 *)&v14.m_taskBuffer.m_ptr->m_refCount) )
        {
          if ( v14.m_taskBuffer.m_ptr )
            ((void (__fastcall *)(bdTaskByteBuffer *, __int64))v14.m_taskBuffer.m_ptr->~bdReferencable)(v14.m_taskBuffer.m_ptr, 1i64);
          v14.m_taskBuffer.m_ptr = NULL;
        }
        bdTaskResult::~bdTaskResult((bdTaskResult *)(&v14.__vftable + 2));
        bdReferencable::~bdReferencable((bdReferencable *)v14.gap60);
        --v8;
      }
      while ( v8 );
    }
    return 1;
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdREST", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdresttaskmanager.cpp", "bdRESTTaskManager::init", 0x26u, "remoteTaskManager can't be NULL");
    return 0;
  }
}

/*
==============
bdRESTTaskManager::pump
==============
*/
void bdRESTTaskManager::pump(bdRESTTaskManager *this)
{
  unsigned int v3; 
  unsigned int m_size; 
  bool v5; 
  __int64 v6; 
  bdRESTInternalResponse::State m_state; 
  __int32 v9; 
  __int32 v10; 
  __int64 v11; 
  __int64 v12; 
  bdRESTInternalResponse *v13; 
  bdRemoteTask **v14; 
  bdReference<bdRemoteTask> *p_m_task; 
  bdRemoteTask *v16; 
  bdRemoteTask **v17; 
  bdRemoteTask **p_m_ptr; 
  bdRemoteTask *v19; 
  bdRemoteTask *v20; 
  unsigned int LoResTimeStamp; 
  char v22; 
  int v23; 
  int v24; 
  int v25; 
  const char *v26; 
  const char *v27; 
  bdREST::bdHTTPStatus v28; 
  unsigned int v29; 
  bdRESTInternalResponse v30; 

  v3 = 0;
  m_size = this->m_responsePool.m_size;
  if ( m_size )
  {
    v5 = m_size != 0;
    do
    {
      bdHandleAssert(v5, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<class bdRESTInternalResponse>::operator []", 0x68u, "bdArray<T>::operator[], rangecheck failed");
      v6 = v3;
      _RBX = &this->m_responsePool.m_data[v6];
      m_state = _RBX->m_state;
      if ( m_state )
      {
        v9 = m_state - 1;
        if ( v9 )
        {
          v10 = v9 - 1;
          if ( v10 )
          {
            if ( v10 == 1 )
            {
              bdRESTInternalResponse::bdRESTInternalResponse(&v30);
              v12 = v11;
              bdHandleAssert(v3 < this->m_responsePool.m_size, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<class bdRESTInternalResponse>::operator []", 0x68u, "bdArray<T>::operator[], rangecheck failed");
              v13 = &this->m_responsePool.m_data[v6];
              bdReferencable::operator=((bdReferencable *)((char *)&v13->__vftable + *(int *)(*((_QWORD *)&v13->__vftable + 1) + 4i64) + 8), (const bdReferencable *)(*(int *)(*(_QWORD *)(v12 + 8) + 4i64) + v12 + 8));
              *((_QWORD *)&v13->__vftable + 2) = *(_QWORD *)(v12 + 16);
              *((_QWORD *)&v13->__vftable + 3) = *(_QWORD *)(v12 + 24);
              bdReference<bdTaskByteBuffer>::operator=(&v13->m_taskBuffer, (const bdReference<bdTaskByteBuffer> *)(v12 + 32));
              v14 = (bdRemoteTask **)(v12 + 40);
              p_m_task = &v13->m_task;
              if ( (bdReference<bdRemoteTask> *)(v12 + 40) != &v13->m_task )
              {
                if ( p_m_task->m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&p_m_task->m_ptr->m_refCount, 0xFFFFFFFF) == 1 && p_m_task->m_ptr )
                  ((void (__fastcall *)(bdRemoteTask *, __int64))p_m_task->m_ptr->~bdReferencable)(p_m_task->m_ptr, 1i64);
                v16 = *v14;
                p_m_task->m_ptr = *v14;
                if ( v16 )
                  _InterlockedExchangeAdd((volatile signed __int32 *)&v16->m_refCount, 1u);
              }
              v17 = (bdRemoteTask **)(v12 + 48);
              p_m_ptr = &v13->m_legacyTask.m_ptr;
              if ( (bdReference<bdRESTLegacyTask> *)(v12 + 48) != &v13->m_legacyTask )
              {
                if ( *p_m_ptr )
                {
                  if ( _InterlockedExchangeAdd((volatile signed __int32 *)&(*p_m_ptr)->m_refCount, 0xFFFFFFFF) == 1 )
                  {
                    v19 = *p_m_ptr;
                    if ( *p_m_ptr )
                    {
                      bdRemoteTask::~bdRemoteTask(*p_m_ptr);
                      bdMemory::deallocate(v19);
                    }
                  }
                }
                v20 = *v17;
                *p_m_ptr = *v17;
                if ( v20 )
                  _InterlockedExchangeAdd((volatile signed __int32 *)&v20->m_refCount, 1u);
              }
              v13->m_state = *(_DWORD *)(v12 + 56);
              v13->m_timer.m_start = *(_QWORD *)(v12 + 64);
              v13->m_timeoutMs = *(_DWORD *)(v12 + 72);
              v13->m_retryTokenOffset = *(_DWORD *)(v12 + 76);
              v13->m_retryWaitFrom = *(_DWORD *)(v12 + 80);
              v13->m_retryWaitSeconds = *(float *)(v12 + 84);
              v13->m_retries = *(_DWORD *)(v12 + 88);
              v13->m_maximumRetries = *(_DWORD *)(v12 + 92);
              bdRESTInternalResponse::`vbase destructor(&v30);
            }
            else
            {
              bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdresttaskmanager.cpp", "bdRESTTaskManager::pump", 0xEDu, "bad bdRESTInternalResponse state");
            }
          }
          else
          {
            LoResTimeStamp = bdPlatformTiming::getLoResTimeStamp();
            *(double *)&_XMM0 = bdPlatformTiming::getLoResElapsedTimeFloat(_RBX->m_retryWaitFrom, LoResTimeStamp);
            __asm { vcomiss xmm0, dword ptr [rbx+54h] }
            if ( !(v5 | v22) )
            {
              bdLogMessage(BD_LOG_INFO, "info/", "bdREST", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdresttaskmanager.cpp", "bdRESTTaskManager::pump", 0xE3u, "Retrying rest task");
              bdRESTTaskManager::startResponseTask(this, _RBX);
            }
          }
          goto LABEL_34;
        }
        v23 = ((__int64 (__fastcall *)(bdRemoteTask *))_RBX->m_task.m_ptr->getStatus)(_RBX->m_task.m_ptr) - 1;
        if ( v23 )
        {
          v24 = v23 - 2;
          if ( !v24 )
          {
            bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdREST", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdresttaskmanager.cpp", "bdRESTTaskManager::pump", 0xCFu, "Rest task failed");
            v26 = "Task failed.";
            v27 = "Error:ServerError";
            v28 = BD_STATUS_INTERNAL_SERVER_ERROR;
            goto LABEL_33;
          }
          v25 = v24 - 1;
          if ( v25 )
          {
            if ( v25 == 1 )
            {
              bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdREST", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdresttaskmanager.cpp", "bdRESTTaskManager::pump", 0xD3u, "Rest task cancelled");
              v26 = "Task cancelled.";
              v27 = "Error:ClientError:RequestCancelled";
              v28 = BD_STATUS_BAD_REQUEST;
LABEL_33:
              bdRESTInternalResponse::finishResponseLocally(_RBX, v28, v27, v26);
              goto LABEL_34;
            }
            _RBX->m_state = BD_STOPPING;
          }
          else
          {
            bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdREST", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdresttaskmanager.cpp", "bdRESTTaskManager::pump", 0xCAu, "Rest task timed out");
            bdRESTInternalResponse::finishResponseLocally(_RBX, BD_STATUS_INTERNAL_SERVER_ERROR, "Error:ServerError", "Task timed out.");
            bdRESTLegacyTask::setStatus(_RBX->m_legacyTask.m_ptr, BD_TIMED_OUT);
          }
        }
      }
LABEL_34:
      ++v3;
      v29 = this->m_responsePool.m_size;
      v5 = v3 < v29;
    }
    while ( v3 < v29 );
  }
}

/*
==============
bdRESTTaskManager::startRequest
==============
*/
bdReference<bdRemoteTask> *bdRESTTaskManager::startRequest(bdRESTTaskManager *this, bdReference<bdRemoteTask> *result, const bdRESTRequest *request, bdRESTResponse *response)
{
  bdRESTRequestBuilder *v8; 
  bdRESTRequestBuilder *v9; 
  bdRESTRequestBuilder *v10; 
  unsigned int TaskParamsMaxBufferSize; 
  const char *v12; 
  _BYTE *v13; 
  size_t v14; 
  const char *v15; 
  _BYTE *v16; 
  size_t v17; 
  const bdRESTHeaders *v18; 
  const bdRESTURI *v19; 
  const char *v20; 
  bdREST::bdMethod v21; 
  bool started; 
  bdReference<bdRemoteTask> *p_body; 
  bdRemoteTask *v24; 
  bdRESTResponse *v25; 
  unsigned __int8 *Myval2; 
  bdByteBuffer *v27; 
  bdByteBuffer *v28; 
  unsigned int v30; 
  bdRESTInternalResponse *v31; 
  bdRESTInternalResponse *m_data; 
  bdRESTInternalResponse *v33; 
  volatile signed __int32 *m_ptr; 
  char v38; 
  char v39; 
  unsigned int bodySize[2]; 
  void *body; 
  unsigned int retryTokenOffset; 
  bdRESTConfig *config; 
  bdRESTResponse *v44; 
  __int64 v45; 
  bdReference<bdRemoteTask> *v46; 
  bdRESTRequestBuilder *v47; 
  unsigned int *v48; 
  bdTaskParams params; 
  bdRESTLSGRequest v50; 
  bdRESTLSGRequestMessage::bdRESTLSGRequestParamsMessage requestParams; 

  v45 = -2i64;
  v44 = response;
  v46 = result;
  bdHandleAssert(this->m_lobbyService != NULL, "m_lobbyService != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdresttaskmanager.cpp", "bdRESTTaskManager::startRequest", 0x54u, "initialization should have failed if lobby service is null");
  result->m_ptr = NULL;
  v38 = 1;
  v8 = (bdRESTRequestBuilder *)bdMemory::allocate(0x6030ui64);
  body = v8;
  if ( v8 )
  {
    bdRESTRequestBuilder::bdRESTRequestBuilder(v8, this->m_restConfig, this->m_lobbyService);
    v10 = v9;
  }
  else
  {
    v10 = NULL;
  }
  v47 = v10;
  if ( !request->restSerializeRequest((bdRESTRequest *)request, v10) )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdREST", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdresttaskmanager.cpp", "bdRESTTaskManager::startRequest", 0x5Cu, "failed to create request");
LABEL_7:
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdREST", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdresttaskmanager.cpp", "bdRESTTaskManager::startRequest", 0x63u, "failed to finalize request");
    goto LABEL_38;
  }
  if ( !bdRESTRequestBuilder::finalize(v10) )
    goto LABEL_7;
  TaskParamsMaxBufferSize = bdRemoteTaskManager::getTaskParamsMaxBufferSize(this->m_remoteTaskManager);
  bdTaskParams::bdTaskParams(&params, 0xFFu, 0xAu, 0x400u, TaskParamsMaxBufferSize);
  bdRESTLSGRequestMessage::bdRESTLSGRequestParamsMessage::bdRESTLSGRequestParamsMessage(&requestParams);
  requestParams.m_debugReturnAllHeaders = (bdRESTInternal::g_debug_flags & 8) != 0;
  requestParams.m_useStrictRules = (bdRESTInternal::g_debug_flags & 4) != 0;
  requestParams.m_requestTimeoutMs = bdRESTRequestBuilder::timeout(v10);
  v12 = bdRESTRequestBuilder::resourceName(v10);
  v13 = memchr_0(v12, 0, 0x40ui64);
  if ( !v13 || (v14 = v13 - v12, (unsigned __int64)(v13 - v12) >= 0x3F) )
    v14 = 63i64;
  memcpy_0(requestParams.m_restResourceName, v12, v14);
  requestParams.m_restResourceName[v14] = 0;
  v15 = bdRESTRequestBuilder::operationName(v10);
  v16 = memchr_0(v15, 0, 0x40ui64);
  if ( !v16 || (v17 = v16 - v15, (unsigned __int64)(v16 - v15) >= 0x3F) )
    v17 = 63i64;
  memcpy_0(requestParams.m_restOperationName, v15, v17);
  requestParams.m_restOperationName[v17] = 0;
  config = (bdRESTConfig *)this->m_restConfig;
  bodySize[0] = bdRESTRequestBuilder::contentLength(v10);
  if ( bdRESTRequestBuilder::hasBody(v10) )
    body = bdRESTRequestBuilder::body(v10);
  else
    body = NULL;
  v18 = bdRESTRequestBuilder::headers(v10);
  v19 = bdRESTRequestBuilder::uri(v10);
  v20 = bdRESTRequestBuilder::serviceName(v10);
  v21 = bdRESTRequestBuilder::method(v10);
  bdRESTLSGRequest::bdRESTLSGRequest(&v50, v21, v20, v19, v18, body, bodySize[0], &requestParams, config);
  retryTokenOffset = 0;
  if ( bdRESTLSGRequest::serialize(&v50, &params, &retryTokenOffset) )
  {
    v30 = retryTokenOffset;
    if ( !params.m_serializeOk )
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::getTaskBuffer", 0x13u, "Failed to serialize one or more task parameters.");
    *(_QWORD *)bodySize = params.m_taskBuffer.m_ptr;
    if ( params.m_taskBuffer.m_ptr )
      _InterlockedExchangeAdd((volatile signed __int32 *)&params.m_taskBuffer.m_ptr->m_refCount, 1u);
    v38 = 9;
    v48 = bodySize;
    v31 = NULL;
    m_data = this->m_responsePool.m_data;
    v33 = &this->m_responsePool.m_data[this->m_responsePool.m_size];
    if ( this->m_responsePool.m_data == v33 )
    {
LABEL_59:
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdREST", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdresttaskmanager.cpp", "bdRESTTaskManager::allocateResponse", 0x10Du, "No free responses. If more concurrent requests are required increase maxConcurrentRequests in bdRESTTaskManager::init().");
    }
    else
    {
      while ( !v31 )
      {
        v31 = m_data;
        if ( m_data->m_state )
          v31 = NULL;
        if ( ++m_data == v33 )
        {
          if ( !v31 )
            goto LABEL_59;
          break;
        }
      }
      *((_QWORD *)&v31->__vftable + 2) = this->m_lobbyService;
      v31->m_state = BD_STOPPING;
      v31->m_timeoutMs = bdRESTRequestBuilder::timeout(v10);
      v31->m_maximumRetries = bdRESTRequestBuilder::maxRetries(v10);
      *((_QWORD *)&v31->__vftable + 3) = v44;
      bdReference<bdTaskByteBuffer>::operator=(&v31->m_taskBuffer, (const bdReference<bdTaskByteBuffer> *)bodySize);
      v31->m_retryTokenOffset = v30;
      bdStopwatch::start(&v31->m_timer);
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, rax
        vmulss  xmm1, xmm0, cs:__real@3a83126f; timeout
      }
      bdRESTLegacyTask::setRequestTimeout(v31->m_legacyTask.m_ptr, *(const float *)&_XMM1);
    }
    if ( *(_QWORD *)bodySize && _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)bodySize + 8i64), 0xFFFFFFFF) == 1 )
    {
      if ( *(_QWORD *)bodySize )
        (***(void (__fastcall ****)(_QWORD, __int64))bodySize)(*(_QWORD *)bodySize, 1i64);
      *(_QWORD *)bodySize = 0i64;
    }
    started = bdRESTTaskManager::startResponseTask(this, v31);
    if ( started )
    {
      m_ptr = (volatile signed __int32 *)v31->m_legacyTask.m_ptr;
      body = (void *)m_ptr;
      if ( m_ptr )
        _InterlockedExchangeAdd(m_ptr + 2, 1u);
      p_body = (bdReference<bdRemoteTask> *)&body;
      v39 = 11;
      goto LABEL_20;
    }
  }
  else
  {
    started = 0;
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdREST", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdresttaskmanager.cpp", "bdRESTTaskManager::startRequest", 0x8Bu, "Failed to serialize the task buffer.");
  }
  config = NULL;
  p_body = (bdReference<bdRemoteTask> *)&config;
  v39 = v38 | 4;
LABEL_20:
  if ( result != p_body )
  {
    if ( result->m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result->m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result->m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))result->m_ptr->~bdReferencable)(result->m_ptr, 1i64);
    v24 = p_body->m_ptr;
    result->m_ptr = p_body->m_ptr;
    if ( v24 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v24->m_refCount, 1u);
  }
  if ( (v39 & 4) != 0 )
  {
    v39 &= ~4u;
    if ( config )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&config[8], 0xFFFFFFFF) == 1 )
      {
        bdRemoteTask::~bdRemoteTask((bdRemoteTask *)config);
        bdMemory::deallocate(config);
      }
    }
  }
  if ( (v39 & 2) != 0 && body && _InterlockedExchangeAdd((volatile signed __int32 *)body + 2, 0xFFFFFFFF) == 1 )
  {
    bdRemoteTask::~bdRemoteTask((bdRemoteTask *)body);
    bdMemory::deallocate(body);
  }
  v25 = v44;
  if ( v44 )
  {
    bdRESTResponse::reset(v44);
    v25->m_bdrest_spanID = bdRESTRequestBuilder::spanID(v10);
    v25->m_bdrest_status = 2 * !started + 1;
  }
  bdTaskParams::~bdTaskParams(&params);
LABEL_38:
  if ( v10 )
  {
    Myval2 = v10->m_body._Mypair._Myval2;
    if ( Myval2 )
      bdMemory::deallocate(Myval2);
    v27 = v10->m_byteBuffer.m_ptr;
    if ( v27 && _InterlockedExchangeAdd((volatile signed __int32 *)&v27->m_refCount, 0xFFFFFFFF) == 1 )
    {
      v28 = v10->m_byteBuffer.m_ptr;
      if ( v28 )
        ((void (__fastcall *)(bdByteBuffer *, __int64))v28->~bdReferencable)(v28, 1i64);
      v10->m_byteBuffer.m_ptr = NULL;
    }
    bdStructBufferSerializer::~bdStructBufferSerializer(&v10->m_protobuf);
    bdJSONSerializer::~bdJSONSerializer(&v10->m_json);
    bdMemory::deallocate(v10);
  }
  return result;
}

/*
==============
bdRESTTaskManager::startRequest
==============
*/
bdReference<bdRemoteTask> *bdRESTTaskManager::startRequest(bdRESTTaskManager *this, bdReference<bdRemoteTask> *result, const bdRESTRequest *request)
{
  bdRESTTaskManager::startRequest(this, result, request, NULL);
  return result;
}

/*
==============
bdRESTTaskManager::startRequest
==============
*/
bdReference<bdRemoteTask> *bdRESTTaskManager::startRequest(bdRESTTaskManager *this, bdReference<bdRemoteTask> *result, const bdRESTRequest *request, bdRESTResponse *response)
{
  bdRESTTaskManager::startRequest(this, result, request, response);
  return result;
}

/*
==============
bdRESTTaskManager::startResponseTask
==============
*/
bool bdRESTTaskManager::startResponseTask(bdRESTTaskManager *this, bdRESTInternalResponse *response)
{
  bool result; 
  bdTaskByteBuffer *m_ptr; 
  bool v8; 
  bdRemoteTask *v9; 
  bdRESTLegacyTask *v15; 
  bdTask::bdStatus v16; 
  bdReference<bdTaskByteBuffer> queryParams; 
  bdTaskByteBuffer *v20; 

  __asm { vmovaps [rsp+58h+var_28], xmm6 }
  result = response != NULL;
  if ( response )
  {
    m_ptr = (bdTaskByteBuffer *)bdMemory::allocate(0x58ui64);
    v20 = m_ptr;
    if ( m_ptr )
      bdTaskByteBuffer::bdTaskByteBuffer(m_ptr, 0, 1);
    queryParams.m_ptr = m_ptr;
    if ( m_ptr )
    {
      _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
      m_ptr = queryParams.m_ptr;
    }
    if ( !bdTaskByteBuffer::deepCopy(m_ptr, response->m_taskBuffer.m_ptr) || bdRemoteTaskManager::startTask(this->m_remoteTaskManager, &response->m_task, &queryParams) )
    {
      v8 = 0;
    }
    else
    {
      v8 = 1;
      v9 = response->m_task.m_ptr;
      if ( v9 )
      {
        bdRemoteTask::setTaskResult(v9, response, 1u);
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, rax
          vmulss  xmm6, xmm0, cs:__real@3a83126f
        }
        bdStopwatch::getElapsedTimeInSeconds(&response->m_timer);
        __asm
        {
          vsubss  xmm1, xmm6, xmm0
          vmaxss  xmm1, xmm1, cs:__real@3a83126f
        }
        ((void (__fastcall *)(bdRemoteTask *))response->m_task.m_ptr->setTimeout)(response->m_task.m_ptr);
        v15 = response->m_legacyTask.m_ptr;
        v16 = response->m_task.m_ptr->getStatus(response->m_task.m_ptr);
        bdRESTLegacyTask::setStatus(v15, v16);
      }
    }
    response->m_state = 2 * !v8 + 1;
    if ( queryParams.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&queryParams.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && queryParams.m_ptr )
      ((void (__fastcall *)(bdTaskByteBuffer *, __int64))queryParams.m_ptr->~bdReferencable)(queryParams.m_ptr, 1i64);
    result = v8;
  }
  __asm { vmovaps xmm6, [rsp+58h+var_28] }
  return result;
}

