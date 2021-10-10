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
  bdRESTInternalResponse *v8; 
  bdRESTInternalResponse *m_data; 
  bdRESTInternalResponse *v10; 
  float m_timeoutMs; 

  v8 = NULL;
  m_data = this->m_responsePool.m_data;
  v10 = &this->m_responsePool.m_data[this->m_responsePool.m_size];
  if ( this->m_responsePool.m_data == v10 )
  {
LABEL_8:
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdREST", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdresttaskmanager.cpp", "bdRESTTaskManager::allocateResponse", 0x10Du, "No free responses. If more concurrent requests are required increase maxConcurrentRequests in bdRESTTaskManager::init().");
  }
  else
  {
    while ( !v8 )
    {
      v8 = m_data;
      if ( m_data->m_state )
        v8 = NULL;
      if ( ++m_data == v10 )
      {
        if ( !v8 )
          goto LABEL_8;
        break;
      }
    }
    *((_QWORD *)&v8->__vftable + 2) = this->m_lobbyService;
    v8->m_state = BD_STOPPING;
    v8->m_timeoutMs = bdRESTRequestBuilder::timeout((bdRESTRequestBuilder *)builder);
    v8->m_maximumRetries = bdRESTRequestBuilder::maxRetries((bdRESTRequestBuilder *)builder);
    *((_QWORD *)&v8->__vftable + 3) = externalResponse;
    bdReference<bdTaskByteBuffer>::operator=(&v8->m_taskBuffer, (const bdReference<bdTaskByteBuffer> *)taskBuffer.m_ptr);
    v8->m_retryTokenOffset = retryTokenOffset;
    bdStopwatch::start(&v8->m_timer);
    m_timeoutMs = (float)v8->m_timeoutMs;
    bdRESTLegacyTask::setRequestTimeout(v8->m_legacyTask.m_ptr, m_timeoutMs * 0.001);
  }
  if ( taskBuffer.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&taskBuffer.m_ptr->allocateBuffer, 0xFFFFFFFF) == 1 )
  {
    if ( taskBuffer.m_ptr->__vftable )
      (*(void (__fastcall **)(bdTaskByteBuffer_vtbl *, __int64))taskBuffer.m_ptr->~bdReferencable)(taskBuffer.m_ptr->__vftable, 1i64);
    taskBuffer.m_ptr->__vftable = NULL;
  }
  return v8;
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
  unsigned int v2; 
  unsigned int m_size; 
  bool v4; 
  __int64 v5; 
  bdRESTInternalResponse *v6; 
  bdRESTInternalResponse::State m_state; 
  __int32 v8; 
  __int32 v9; 
  __int64 v10; 
  __int64 v11; 
  bdRESTInternalResponse *v12; 
  bdRemoteTask **v13; 
  bdReference<bdRemoteTask> *p_m_task; 
  bdRemoteTask *v15; 
  bdRemoteTask **v16; 
  bdRemoteTask **p_m_ptr; 
  bdRemoteTask *v18; 
  bdRemoteTask *v19; 
  unsigned int LoResTimeStamp; 
  double LoResElapsedTimeFloat; 
  int v22; 
  int v23; 
  int v24; 
  const char *v25; 
  const char *v26; 
  bdREST::bdHTTPStatus v27; 
  unsigned int v28; 
  bdRESTInternalResponse v29; 

  v2 = 0;
  m_size = this->m_responsePool.m_size;
  if ( m_size )
  {
    v4 = m_size != 0;
    do
    {
      bdHandleAssert(v4, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<class bdRESTInternalResponse>::operator []", 0x68u, "bdArray<T>::operator[], rangecheck failed");
      v5 = v2;
      v6 = &this->m_responsePool.m_data[v5];
      m_state = v6->m_state;
      if ( m_state )
      {
        v8 = m_state - 1;
        if ( v8 )
        {
          v9 = v8 - 1;
          if ( v9 )
          {
            if ( v9 == 1 )
            {
              bdRESTInternalResponse::bdRESTInternalResponse(&v29);
              v11 = v10;
              bdHandleAssert(v2 < this->m_responsePool.m_size, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<class bdRESTInternalResponse>::operator []", 0x68u, "bdArray<T>::operator[], rangecheck failed");
              v12 = &this->m_responsePool.m_data[v5];
              bdReferencable::operator=((bdReferencable *)((char *)&v12->__vftable + *(int *)(*((_QWORD *)&v12->__vftable + 1) + 4i64) + 8), (const bdReferencable *)(*(int *)(*(_QWORD *)(v11 + 8) + 4i64) + v11 + 8));
              *((_QWORD *)&v12->__vftable + 2) = *(_QWORD *)(v11 + 16);
              *((_QWORD *)&v12->__vftable + 3) = *(_QWORD *)(v11 + 24);
              bdReference<bdTaskByteBuffer>::operator=(&v12->m_taskBuffer, (const bdReference<bdTaskByteBuffer> *)(v11 + 32));
              v13 = (bdRemoteTask **)(v11 + 40);
              p_m_task = &v12->m_task;
              if ( (bdReference<bdRemoteTask> *)(v11 + 40) != &v12->m_task )
              {
                if ( p_m_task->m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&p_m_task->m_ptr->m_refCount, 0xFFFFFFFF) == 1 && p_m_task->m_ptr )
                  ((void (__fastcall *)(bdRemoteTask *, __int64))p_m_task->m_ptr->~bdReferencable)(p_m_task->m_ptr, 1i64);
                v15 = *v13;
                p_m_task->m_ptr = *v13;
                if ( v15 )
                  _InterlockedExchangeAdd((volatile signed __int32 *)&v15->m_refCount, 1u);
              }
              v16 = (bdRemoteTask **)(v11 + 48);
              p_m_ptr = &v12->m_legacyTask.m_ptr;
              if ( (bdReference<bdRESTLegacyTask> *)(v11 + 48) != &v12->m_legacyTask )
              {
                if ( *p_m_ptr )
                {
                  if ( _InterlockedExchangeAdd((volatile signed __int32 *)&(*p_m_ptr)->m_refCount, 0xFFFFFFFF) == 1 )
                  {
                    v18 = *p_m_ptr;
                    if ( *p_m_ptr )
                    {
                      bdRemoteTask::~bdRemoteTask(*p_m_ptr);
                      bdMemory::deallocate(v18);
                    }
                  }
                }
                v19 = *v16;
                *p_m_ptr = *v16;
                if ( v19 )
                  _InterlockedExchangeAdd((volatile signed __int32 *)&v19->m_refCount, 1u);
              }
              v12->m_state = *(_DWORD *)(v11 + 56);
              v12->m_timer.m_start = *(_QWORD *)(v11 + 64);
              v12->m_timeoutMs = *(_DWORD *)(v11 + 72);
              v12->m_retryTokenOffset = *(_DWORD *)(v11 + 76);
              v12->m_retryWaitFrom = *(_DWORD *)(v11 + 80);
              v12->m_retryWaitSeconds = *(float *)(v11 + 84);
              v12->m_retries = *(_DWORD *)(v11 + 88);
              v12->m_maximumRetries = *(_DWORD *)(v11 + 92);
              bdRESTInternalResponse::`vbase destructor(&v29);
            }
            else
            {
              bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdresttaskmanager.cpp", "bdRESTTaskManager::pump", 0xEDu, "bad bdRESTInternalResponse state");
            }
          }
          else
          {
            LoResTimeStamp = bdPlatformTiming::getLoResTimeStamp();
            LoResElapsedTimeFloat = bdPlatformTiming::getLoResElapsedTimeFloat(v6->m_retryWaitFrom, LoResTimeStamp);
            if ( *(float *)&LoResElapsedTimeFloat > v6->m_retryWaitSeconds )
            {
              bdLogMessage(BD_LOG_INFO, "info/", "bdREST", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdresttaskmanager.cpp", "bdRESTTaskManager::pump", 0xE3u, "Retrying rest task");
              bdRESTTaskManager::startResponseTask(this, v6);
            }
          }
          goto LABEL_34;
        }
        v22 = ((__int64 (__fastcall *)(bdRemoteTask *))v6->m_task.m_ptr->getStatus)(v6->m_task.m_ptr) - 1;
        if ( v22 )
        {
          v23 = v22 - 2;
          if ( !v23 )
          {
            bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdREST", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdresttaskmanager.cpp", "bdRESTTaskManager::pump", 0xCFu, "Rest task failed");
            v25 = "Task failed.";
            v26 = "Error:ServerError";
            v27 = BD_STATUS_INTERNAL_SERVER_ERROR;
            goto LABEL_33;
          }
          v24 = v23 - 1;
          if ( v24 )
          {
            if ( v24 == 1 )
            {
              bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdREST", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdresttaskmanager.cpp", "bdRESTTaskManager::pump", 0xD3u, "Rest task cancelled");
              v25 = "Task cancelled.";
              v26 = "Error:ClientError:RequestCancelled";
              v27 = BD_STATUS_BAD_REQUEST;
LABEL_33:
              bdRESTInternalResponse::finishResponseLocally(v6, v27, v26, v25);
              goto LABEL_34;
            }
            v6->m_state = BD_STOPPING;
          }
          else
          {
            bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdREST", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdresttaskmanager.cpp", "bdRESTTaskManager::pump", 0xCAu, "Rest task timed out");
            bdRESTInternalResponse::finishResponseLocally(v6, BD_STATUS_INTERNAL_SERVER_ERROR, "Error:ServerError", "Task timed out.");
            bdRESTLegacyTask::setStatus(v6->m_legacyTask.m_ptr, BD_TIMED_OUT);
          }
        }
      }
LABEL_34:
      ++v2;
      v28 = this->m_responsePool.m_size;
      v4 = v2 < v28;
    }
    while ( v2 < v28 );
  }
}

/*
==============
bdRESTTaskManager::startRequest
==============
*/
bdReference<bdRemoteTask> *bdRESTTaskManager::startRequest(bdRESTTaskManager *this, bdReference<bdRemoteTask> *result, const bdRESTRequest *request, bdRESTResponse *response)
{
  bdRESTRequestBuilder *v7; 
  bdRESTRequestBuilder *v8; 
  bdRESTRequestBuilder *v9; 
  unsigned int TaskParamsMaxBufferSize; 
  const char *v11; 
  _BYTE *v12; 
  size_t v13; 
  const char *v14; 
  _BYTE *v15; 
  size_t v16; 
  const bdRESTHeaders *v17; 
  const bdRESTURI *v18; 
  const char *v19; 
  bdREST::bdMethod v20; 
  bool started; 
  bdReference<bdRemoteTask> *p_body; 
  bdRemoteTask *v23; 
  bdRESTResponse *v24; 
  unsigned __int8 *Myval2; 
  bdByteBuffer *v26; 
  bdByteBuffer *v27; 
  unsigned int v29; 
  bdRESTInternalResponse *v30; 
  bdRESTInternalResponse *m_data; 
  bdRESTInternalResponse *v32; 
  float m_timeoutMs; 
  volatile signed __int32 *m_ptr; 
  char v35; 
  char v36; 
  unsigned int bodySize[2]; 
  void *body; 
  unsigned int retryTokenOffset; 
  bdRESTConfig *config; 
  bdRESTResponse *v41; 
  __int64 v42; 
  bdReference<bdRemoteTask> *v43; 
  bdRESTRequestBuilder *v44; 
  unsigned int *v45; 
  bdTaskParams params; 
  bdRESTLSGRequest v47; 
  bdRESTLSGRequestMessage::bdRESTLSGRequestParamsMessage requestParams; 

  v42 = -2i64;
  v41 = response;
  v43 = result;
  bdHandleAssert(this->m_lobbyService != NULL, "m_lobbyService != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdresttaskmanager.cpp", "bdRESTTaskManager::startRequest", 0x54u, "initialization should have failed if lobby service is null");
  result->m_ptr = NULL;
  v35 = 1;
  v7 = (bdRESTRequestBuilder *)bdMemory::allocate(0x6030ui64);
  body = v7;
  if ( v7 )
  {
    bdRESTRequestBuilder::bdRESTRequestBuilder(v7, this->m_restConfig, this->m_lobbyService);
    v9 = v8;
  }
  else
  {
    v9 = NULL;
  }
  v44 = v9;
  if ( !request->restSerializeRequest((bdRESTRequest *)request, v9) )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdREST", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdresttaskmanager.cpp", "bdRESTTaskManager::startRequest", 0x5Cu, "failed to create request");
LABEL_7:
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdREST", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdresttaskmanager.cpp", "bdRESTTaskManager::startRequest", 0x63u, "failed to finalize request");
    goto LABEL_38;
  }
  if ( !bdRESTRequestBuilder::finalize(v9) )
    goto LABEL_7;
  TaskParamsMaxBufferSize = bdRemoteTaskManager::getTaskParamsMaxBufferSize(this->m_remoteTaskManager);
  bdTaskParams::bdTaskParams(&params, 0xFFu, 0xAu, 0x400u, TaskParamsMaxBufferSize);
  bdRESTLSGRequestMessage::bdRESTLSGRequestParamsMessage::bdRESTLSGRequestParamsMessage(&requestParams);
  requestParams.m_debugReturnAllHeaders = (bdRESTInternal::g_debug_flags & 8) != 0;
  requestParams.m_useStrictRules = (bdRESTInternal::g_debug_flags & 4) != 0;
  requestParams.m_requestTimeoutMs = bdRESTRequestBuilder::timeout(v9);
  v11 = bdRESTRequestBuilder::resourceName(v9);
  v12 = memchr_0(v11, 0, 0x40ui64);
  if ( !v12 || (v13 = v12 - v11, (unsigned __int64)(v12 - v11) >= 0x3F) )
    v13 = 63i64;
  memcpy_0(requestParams.m_restResourceName, v11, v13);
  requestParams.m_restResourceName[v13] = 0;
  v14 = bdRESTRequestBuilder::operationName(v9);
  v15 = memchr_0(v14, 0, 0x40ui64);
  if ( !v15 || (v16 = v15 - v14, (unsigned __int64)(v15 - v14) >= 0x3F) )
    v16 = 63i64;
  memcpy_0(requestParams.m_restOperationName, v14, v16);
  requestParams.m_restOperationName[v16] = 0;
  config = (bdRESTConfig *)this->m_restConfig;
  bodySize[0] = bdRESTRequestBuilder::contentLength(v9);
  if ( bdRESTRequestBuilder::hasBody(v9) )
    body = bdRESTRequestBuilder::body(v9);
  else
    body = NULL;
  v17 = bdRESTRequestBuilder::headers(v9);
  v18 = bdRESTRequestBuilder::uri(v9);
  v19 = bdRESTRequestBuilder::serviceName(v9);
  v20 = bdRESTRequestBuilder::method(v9);
  bdRESTLSGRequest::bdRESTLSGRequest(&v47, v20, v19, v18, v17, body, bodySize[0], &requestParams, config);
  retryTokenOffset = 0;
  if ( bdRESTLSGRequest::serialize(&v47, &params, &retryTokenOffset) )
  {
    v29 = retryTokenOffset;
    if ( !params.m_serializeOk )
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::getTaskBuffer", 0x13u, "Failed to serialize one or more task parameters.");
    *(_QWORD *)bodySize = params.m_taskBuffer.m_ptr;
    if ( params.m_taskBuffer.m_ptr )
      _InterlockedExchangeAdd((volatile signed __int32 *)&params.m_taskBuffer.m_ptr->m_refCount, 1u);
    v35 = 9;
    v45 = bodySize;
    v30 = NULL;
    m_data = this->m_responsePool.m_data;
    v32 = &this->m_responsePool.m_data[this->m_responsePool.m_size];
    if ( this->m_responsePool.m_data == v32 )
    {
LABEL_59:
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdREST", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdresttaskmanager.cpp", "bdRESTTaskManager::allocateResponse", 0x10Du, "No free responses. If more concurrent requests are required increase maxConcurrentRequests in bdRESTTaskManager::init().");
    }
    else
    {
      while ( !v30 )
      {
        v30 = m_data;
        if ( m_data->m_state )
          v30 = NULL;
        if ( ++m_data == v32 )
        {
          if ( !v30 )
            goto LABEL_59;
          break;
        }
      }
      *((_QWORD *)&v30->__vftable + 2) = this->m_lobbyService;
      v30->m_state = BD_STOPPING;
      v30->m_timeoutMs = bdRESTRequestBuilder::timeout(v9);
      v30->m_maximumRetries = bdRESTRequestBuilder::maxRetries(v9);
      *((_QWORD *)&v30->__vftable + 3) = v41;
      bdReference<bdTaskByteBuffer>::operator=(&v30->m_taskBuffer, (const bdReference<bdTaskByteBuffer> *)bodySize);
      v30->m_retryTokenOffset = v29;
      bdStopwatch::start(&v30->m_timer);
      m_timeoutMs = (float)v30->m_timeoutMs;
      bdRESTLegacyTask::setRequestTimeout(v30->m_legacyTask.m_ptr, m_timeoutMs * 0.001);
    }
    if ( *(_QWORD *)bodySize && _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)bodySize + 8i64), 0xFFFFFFFF) == 1 )
    {
      if ( *(_QWORD *)bodySize )
        (***(void (__fastcall ****)(_QWORD, __int64))bodySize)(*(_QWORD *)bodySize, 1i64);
      *(_QWORD *)bodySize = 0i64;
    }
    started = bdRESTTaskManager::startResponseTask(this, v30);
    if ( started )
    {
      m_ptr = (volatile signed __int32 *)v30->m_legacyTask.m_ptr;
      body = (void *)m_ptr;
      if ( m_ptr )
        _InterlockedExchangeAdd(m_ptr + 2, 1u);
      p_body = (bdReference<bdRemoteTask> *)&body;
      v36 = 11;
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
  v36 = v35 | 4;
LABEL_20:
  if ( result != p_body )
  {
    if ( result->m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result->m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result->m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))result->m_ptr->~bdReferencable)(result->m_ptr, 1i64);
    v23 = p_body->m_ptr;
    result->m_ptr = p_body->m_ptr;
    if ( v23 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v23->m_refCount, 1u);
  }
  if ( (v36 & 4) != 0 )
  {
    v36 &= ~4u;
    if ( config )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&config[8], 0xFFFFFFFF) == 1 )
      {
        bdRemoteTask::~bdRemoteTask((bdRemoteTask *)config);
        bdMemory::deallocate(config);
      }
    }
  }
  if ( (v36 & 2) != 0 && body && _InterlockedExchangeAdd((volatile signed __int32 *)body + 2, 0xFFFFFFFF) == 1 )
  {
    bdRemoteTask::~bdRemoteTask((bdRemoteTask *)body);
    bdMemory::deallocate(body);
  }
  v24 = v41;
  if ( v41 )
  {
    bdRESTResponse::reset(v41);
    v24->m_bdrest_spanID = bdRESTRequestBuilder::spanID(v9);
    v24->m_bdrest_status = 2 * !started + 1;
  }
  bdTaskParams::~bdTaskParams(&params);
LABEL_38:
  if ( v9 )
  {
    Myval2 = v9->m_body._Mypair._Myval2;
    if ( Myval2 )
      bdMemory::deallocate(Myval2);
    v26 = v9->m_byteBuffer.m_ptr;
    if ( v26 && _InterlockedExchangeAdd((volatile signed __int32 *)&v26->m_refCount, 0xFFFFFFFF) == 1 )
    {
      v27 = v9->m_byteBuffer.m_ptr;
      if ( v27 )
        ((void (__fastcall *)(bdByteBuffer *, __int64))v27->~bdReferencable)(v27, 1i64);
      v9->m_byteBuffer.m_ptr = NULL;
    }
    bdStructBufferSerializer::~bdStructBufferSerializer(&v9->m_protobuf);
    bdJSONSerializer::~bdJSONSerializer(&v9->m_json);
    bdMemory::deallocate(v9);
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
unsigned __int8 bdRESTTaskManager::startResponseTask(bdRESTTaskManager *this, bdRESTInternalResponse *response)
{
  unsigned __int8 result; 
  bdTaskByteBuffer *m_ptr; 
  unsigned __int8 v6; 
  bdRemoteTask *v7; 
  __int128 v8; 
  double ElapsedTimeInSeconds; 
  bdRESTLegacyTask *v12; 
  bdTask::bdStatus v13; 
  bdReference<bdTaskByteBuffer> queryParams; 
  bdTaskByteBuffer *v15; 

  result = response != NULL;
  if ( response )
  {
    m_ptr = (bdTaskByteBuffer *)bdMemory::allocate(0x58ui64);
    v15 = m_ptr;
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
      v6 = 0;
    }
    else
    {
      v6 = 1;
      v7 = response->m_task.m_ptr;
      if ( v7 )
      {
        bdRemoteTask::setTaskResult(v7, response, 1u);
        v8 = 0i64;
        *(float *)&v8 = (float)response->m_timeoutMs;
        ElapsedTimeInSeconds = bdStopwatch::getElapsedTimeInSeconds(&response->m_timer);
        *(float *)&v8 = (float)(*(float *)&v8 * 0.001) - *(float *)&ElapsedTimeInSeconds;
        _XMM1 = v8;
        __asm { vmaxss  xmm1, xmm1, cs:__real@3a83126f }
        ((void (__fastcall *)(bdRemoteTask *))response->m_task.m_ptr->setTimeout)(response->m_task.m_ptr);
        v12 = response->m_legacyTask.m_ptr;
        v13 = response->m_task.m_ptr->getStatus(response->m_task.m_ptr);
        bdRESTLegacyTask::setStatus(v12, v13);
      }
    }
    response->m_state = 2 * (v6 ^ 1) + 1;
    if ( queryParams.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&queryParams.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
    {
      if ( queryParams.m_ptr )
        ((void (__fastcall *)(bdTaskByteBuffer *, __int64))queryParams.m_ptr->~bdReferencable)(queryParams.m_ptr, 1i64);
    }
    return v6;
  }
  return result;
}

