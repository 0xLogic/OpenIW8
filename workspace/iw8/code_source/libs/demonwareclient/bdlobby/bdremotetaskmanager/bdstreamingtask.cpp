/*
==============
bdStreamingTask::getStreamingTimeout
==============
*/

double __fastcall bdStreamingTask::getStreamingTimeout(bdStreamingTask *this)
{
  double result; 

  *(float *)&result = ?getStreamingTimeout@bdStreamingTask@@QEBAMXZ(this);
  return result;
}

/*
==============
bdStreamingTask::setStreamingTimeout
==============
*/

void __fastcall bdStreamingTask::setStreamingTimeout(bdStreamingTask *this, float timeout)
{
  ?setStreamingTimeout@bdStreamingTask@@QEAAXM@Z(this, timeout);
}

/*
==============
bdStreamingTask::getStatus
==============
*/

bdTask::bdStatus __fastcall bdStreamingTask::getStatus(bdStreamingTask *this)
{
  return ?getStatus@bdStreamingTask@@UEAA?AW4bdStatus@bdTask@@XZ(this);
}

/*
==============
bdStreamingTask::handleAsyncTaskReply
==============
*/

void __fastcall bdStreamingTask::handleAsyncTaskReply(bdStreamingTask *this, const bdReference<bdByteBuffer> buffer)
{
  ?handleAsyncTaskReply@bdStreamingTask@@UEAAXV?$bdReference@VbdByteBuffer@@@@@Z(this, buffer);
}

/*
==============
bdStreamingTask::start
==============
*/

void __fastcall bdStreamingTask::start(bdStreamingTask *this, const float timeout)
{
  ?start@bdStreamingTask@@MEAAXM@Z(this, timeout);
}

/*
==============
start
==============
*/

void __fastcall start(bdRemoteTask *this, const float a2)
{
  WinMainCRTStartup();
}

/*
==============
bdStreamingTask::~bdStreamingTask
==============
*/

void __fastcall bdStreamingTask::~bdStreamingTask(bdStreamingTask *this)
{
  ??1bdStreamingTask@@UEAA@XZ(this);
}

/*
==============
bdStreamingTask::setFailBehavior
==============
*/

void __fastcall bdStreamingTask::setFailBehavior(bdStreamingTask *this, bool failOnPartialError)
{
  ?setFailBehavior@bdStreamingTask@@QEAAX_N@Z(this, failOnPartialError);
}

/*
==============
bdStreamingTask::deserializeTaskReply
==============
*/

bool __fastcall bdStreamingTask::deserializeTaskReply(bdStreamingTask *this, const bdReference<bdByteBuffer> buffer)
{
  return ?deserializeTaskReply@bdStreamingTask@@MEAA_NV?$bdReference@VbdByteBuffer@@@@@Z(this, buffer);
}

/*
==============
bdStreamingTask::bdStreamingTask
==============
*/

void __fastcall bdStreamingTask::bdStreamingTask(bdStreamingTask *this, bool failOnPartialError)
{
  ??0bdStreamingTask@@QEAA@_N@Z(this, failOnPartialError);
}

/*
==============
bdStreamingTask::bdStreamingTask
==============
*/
void bdStreamingTask::bdStreamingTask(bdStreamingTask *this, bool failOnPartialError)
{
  bdRemoteTask::bdRemoteTask(this);
  this->__vftable = (bdStreamingTask_vtbl *)&bdStreamingTask::`vftable';
  this->m_failOnPartialError = failOnPartialError;
  this->m_partsFailed = 0;
  bdStopwatch::bdStopwatch(&this->m_streamingTimer);
  this->m_streamingTimeout = 0.0;
  bdStopwatch::reset(&this->m_streamingTimer);
}

/*
==============
bdStreamingTask::~bdStreamingTask
==============
*/
void bdStreamingTask::~bdStreamingTask(bdStreamingTask *this)
{
  this->__vftable = (bdStreamingTask_vtbl *)&bdStreamingTask::`vftable';
  bdRemoteTask::~bdRemoteTask(this);
}

/*
==============
bdStreamingTask::deserializeTaskReply
==============
*/
__int64 bdStreamingTask::deserializeTaskReply(bdStreamingTask *this, const bdReference<bdByteBuffer> buffer)
{
  unsigned __int8 v4; 
  bdTaskResult *m_taskResult; 
  unsigned int v6; 
  unsigned int i; 
  unsigned int m_numResults; 
  char *v9; 
  unsigned __int8 (__fastcall *v10)(char *, bdByteBuffer_vtbl **); 
  bdByteBuffer_vtbl *v11; 
  unsigned int j; 
  unsigned int v13; 
  bdTaskResult *v14; 
  bool (__fastcall *deserialize)(bdTaskResult *, bdReference<bdByteBuffer>); 
  bdByteBuffer_vtbl *v16; 
  bdByteBuffer_vtbl *v18; 
  __int64 v19[8]; 
  unsigned int v20; 
  unsigned int u; 

  v19[1] = -2i64;
  v20 = 0;
  u = 0;
  if ( !bdByteBuffer::readUInt32((bdByteBuffer *)buffer.m_ptr->__vftable, &v20) || !bdByteBuffer::readUInt32((bdByteBuffer *)buffer.m_ptr->__vftable, &u) )
    goto LABEL_25;
  v4 = 1;
  if ( u )
    this->m_totalNumResults = u;
  if ( v20 )
  {
    m_taskResult = this->m_taskResult;
    if ( m_taskResult )
    {
      v6 = m_taskResult->sizeOf(m_taskResult);
      for ( i = 0; i < v20; ++i )
      {
        m_numResults = this->m_numResults;
        if ( m_numResults >= this->m_maxNumResults )
          break;
        v9 = (char *)this->m_taskResult + v6 * m_numResults;
        v10 = **(unsigned __int8 (__fastcall ***)(char *, bdByteBuffer_vtbl **))v9;
        v11 = buffer.m_ptr->__vftable;
        v18 = v11;
        if ( v11 )
          _InterlockedExchangeAdd((volatile signed __int32 *)&v11->allocateBuffer, 1u);
        if ( v10(v9, &v18) )
          ++this->m_numResults;
      }
      goto LABEL_26;
    }
    if ( this->m_taskResultList )
    {
      for ( j = 0; j < v20; ++j )
      {
        v13 = this->m_numResults;
        if ( v13 >= this->m_maxNumResults )
          break;
        v14 = this->m_taskResultList[v13];
        deserialize = v14->deserialize;
        v16 = buffer.m_ptr->__vftable;
        v19[0] = (__int64)v16;
        if ( v16 )
          _InterlockedExchangeAdd((volatile signed __int32 *)&v16->allocateBuffer, 1u);
        if ( ((unsigned __int8 (__fastcall *)(bdTaskResult *, __int64 *))deserialize)(v14, v19) )
          ++this->m_numResults;
      }
      goto LABEL_26;
    }
    bdLogMessage(BD_LOG_WARNING, "warn/", "streaming task", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdremotetaskmanager\\bdstreamingtask.cpp", "bdStreamingTask::deserializeTaskReply", 0xAAu, "Received streaming result but have nowhere to deserialize to");
LABEL_25:
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "streaming task", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdremotetaskmanager\\bdstreamingtask.cpp", "bdStreamingTask::deserializeTaskReply", 0xB1u, "Failed to deserialize task results (transaction ID: %I64u)!", this->m_transactionID);
    v4 = 0;
  }
LABEL_26:
  if ( buffer.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->allocateBuffer, 0xFFFFFFFF) == 1 )
  {
    if ( buffer.m_ptr->__vftable )
      (*(void (__fastcall **)(bdByteBuffer_vtbl *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr->__vftable, 1i64);
    buffer.m_ptr->__vftable = NULL;
  }
  return v4;
}

/*
==============
bdStreamingTask::getStatus
==============
*/
__int64 bdStreamingTask::getStatus(bdStreamingTask *this)
{
  double ElapsedTimeInSeconds; 
  bdByteBuffer *m_ptr; 
  bdByteBuffer *v4; 

  if ( bdRemoteTask::getStatus(this) == BD_PENDING && this->m_streamingTimeout > 0.0 )
  {
    ElapsedTimeInSeconds = bdStopwatch::getElapsedTimeInSeconds(&this->m_streamingTimer);
    if ( *(float *)&ElapsedTimeInSeconds >= this->m_streamingTimeout )
    {
      this->m_status = BD_TIMED_OUT;
      m_ptr = this->m_byteResults.m_ptr;
      if ( m_ptr )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
        {
          v4 = this->m_byteResults.m_ptr;
          if ( v4 )
            ((void (__fastcall *)(bdByteBuffer *, __int64))v4->~bdReferencable)(v4, 1i64);
        }
      }
      this->m_byteResults.m_ptr = NULL;
      bdLogMessage(BD_LOG_INFO, "info/", "streaming task", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdremotetaskmanager\\bdstreamingtask.cpp", "bdStreamingTask::getStatus", 0x29u, "Streaming task timed out after %.3fs.", this->m_streamingTimeout);
    }
  }
  return (unsigned int)this->m_status;
}

/*
==============
bdStreamingTask::getStreamingTimeout
==============
*/
float bdStreamingTask::getStreamingTimeout(bdStreamingTask *this)
{
  return this->m_streamingTimeout;
}

/*
==============
bdStreamingTask::handleAsyncTaskReply
==============
*/
void bdStreamingTask::handleAsyncTaskReply(bdStreamingTask *this, const bdReference<bdByteBuffer> buffer)
{
  unsigned int v4; 
  bool (__fastcall *deserializeTaskReply)(bdRemoteTask *, const bdReference<bdByteBuffer>); 
  bdByteBuffer_vtbl *v6; 
  char v7; 
  unsigned int m_totalNumResults; 
  unsigned int m_partsFailed; 
  __int64 v10; 
  unsigned int u; 
  bdByteBuffer *m_ptr; 
  bdByteBuffer_vtbl *v13; 

  m_ptr = buffer.m_ptr;
  u = 4;
  bdLogMessage(BD_LOG_INFO, "info/", "streaming task", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdremotetaskmanager\\bdstreamingtask.cpp", "bdStreamingTask::handleAsyncTaskReply", 0x44u, "Received asynchronous task reply (transaction ID: %I64u).", this->m_transactionID);
  if ( !bdByteBuffer::readUInt32((bdByteBuffer *)buffer.m_ptr->__vftable, &u) )
  {
    this->m_errorCode = BD_HANDLE_TASK_FAILED;
    this->m_status = BD_FAILED;
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "streaming task", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdremotetaskmanager\\bdstreamingtask.cpp", "bdStreamingTask::handleAsyncTaskReply", 0x74u, "Failed to deserialize asynchronous task result (transaction ID: %I64u)!", this->m_transactionID);
    goto LABEL_25;
  }
  bdStopwatch::start(&this->m_streamingTimer);
  v4 = u;
  if ( u )
    goto LABEL_8;
  deserializeTaskReply = this->deserializeTaskReply;
  v6 = buffer.m_ptr->__vftable;
  v13 = v6;
  if ( v6 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v6->allocateBuffer, 1u);
  v7 = ((__int64 (__fastcall *)(bdStreamingTask *, bdByteBuffer_vtbl **))deserializeTaskReply)(this, &v13);
  v4 = u;
  if ( !v7 )
  {
    this->m_failOnPartialError = 1;
LABEL_9:
    ++this->m_partsFailed;
    goto LABEL_10;
  }
  if ( u )
  {
LABEL_8:
    if ( v4 != 201 )
      goto LABEL_9;
  }
LABEL_10:
  m_totalNumResults = this->m_totalNumResults;
  if ( m_totalNumResults )
  {
    if ( m_totalNumResults >= this->m_maxNumResults )
      m_totalNumResults = this->m_maxNumResults;
  }
  else
  {
    m_totalNumResults = this->m_maxNumResults;
  }
  m_partsFailed = this->m_partsFailed;
  if ( m_partsFailed && this->m_failOnPartialError )
  {
    this->m_status = BD_FAILED;
    if ( v4 == 200 || !v4 )
      v4 = 4;
    this->m_errorCode = v4;
    bdLogMessage(BD_LOG_WARNING, "warn/", "streaming task", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdremotetaskmanager\\bdstreamingtask.cpp", "bdStreamingTask::handleAsyncTaskReply", 0x62u, "Remote task failed (transaction ID: %I64u, error code: %u).", this->m_transactionID, v4);
  }
  else if ( v4 == 201 || m_partsFailed + this->m_numResults >= m_totalNumResults )
  {
    this->m_status = BD_DONE;
    this->m_errorCode = BD_NO_ERROR;
    LODWORD(v10) = this->m_numResults;
    bdLogMessage(BD_LOG_INFO, "info/", "streaming task", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdremotetaskmanager\\bdstreamingtask.cpp", "bdStreamingTask::handleAsyncTaskReply", 0x6Bu, "Streaming complete with %u parts succeeded, %u failed.", v10, m_partsFailed);
  }
LABEL_25:
  if ( buffer.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->allocateBuffer, 0xFFFFFFFF) == 1 )
  {
    if ( buffer.m_ptr->__vftable )
      (*(void (__fastcall **)(bdByteBuffer_vtbl *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr->__vftable, 1i64);
    buffer.m_ptr->__vftable = NULL;
  }
}

/*
==============
bdStreamingTask::setFailBehavior
==============
*/
void bdStreamingTask::setFailBehavior(bdStreamingTask *this, bool failOnPartialError)
{
  this->m_failOnPartialError = failOnPartialError;
}

/*
==============
bdStreamingTask::setStreamingTimeout
==============
*/
void bdStreamingTask::setStreamingTimeout(bdStreamingTask *this, float timeout)
{
  this->m_streamingTimeout = timeout;
}

/*
==============
bdStreamingTask::start
==============
*/
void bdStreamingTask::start(bdStreamingTask *this, const float timeout)
{
  bdRemoteTask::start(this, timeout);
  bdStopwatch::start(&this->m_streamingTimer);
}

