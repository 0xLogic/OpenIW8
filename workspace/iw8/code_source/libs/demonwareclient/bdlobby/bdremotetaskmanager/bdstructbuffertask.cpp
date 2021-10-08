/*
==============
bdStructBufferTask::bdStructBufferTask
==============
*/

void __fastcall bdStructBufferTask::bdStructBufferTask(bdStructBufferTask *this, bdLobbyService *lobbyService)
{
  ??0bdStructBufferTask@@QEAA@PEAVbdLobbyService@@@Z(this, lobbyService);
}

/*
==============
bdStructBufferTask::getTaskBuffer
==============
*/

bdReference<bdTaskByteBuffer> *__fastcall bdStructBufferTask::getTaskBuffer(bdStructBufferTask *this, bdReference<bdTaskByteBuffer> *result)
{
  return ?getTaskBuffer@bdStructBufferTask@@QEAA?AV?$bdReference@VbdTaskByteBuffer@@@@XZ(this, result);
}

/*
==============
bdStructBufferTask::setResponse
==============
*/

bool __fastcall bdStructBufferTask::setResponse(bdStructBufferTask *this, bdStructBufferSerializable *response)
{
  return ?setResponse@bdStructBufferTask@@QEAA_NPEAVbdStructBufferSerializable@@@Z(this, response);
}

/*
==============
bdStructBufferTask::deserializeTaskReply
==============
*/

bool __fastcall bdStructBufferTask::deserializeTaskReply(bdStructBufferTask *this, const bdReference<bdByteBuffer> buffer)
{
  return ?deserializeTaskReply@bdStructBufferTask@@MEAA_NV?$bdReference@VbdByteBuffer@@@@@Z(this, buffer);
}

/*
==============
bdStructBufferTask::~bdStructBufferTask
==============
*/

void __fastcall bdStructBufferTask::~bdStructBufferTask(bdStructBufferTask *this)
{
  ??1bdStructBufferTask@@UEAA@XZ(this);
}

/*
==============
bdStructBufferTask::setRequest
==============
*/

bool __fastcall bdStructBufferTask::setRequest(bdStructBufferTask *this, const unsigned __int8 serviceID, const unsigned __int8 taskID, const bdStructBufferSerializable *request)
{
  return ?setRequest@bdStructBufferTask@@QEAA_NEEPEBVbdStructBufferSerializable@@@Z(this, serviceID, taskID, request);
}

/*
==============
bdStructBufferTask::bdStructBufferTask
==============
*/
void bdStructBufferTask::bdStructBufferTask(bdStructBufferTask *this, bdLobbyService *lobbyService)
{
  bdRemoteTask::bdRemoteTask(this);
  this->__vftable = (bdStructBufferTask_vtbl *)&bdStructBufferTask::`vftable';
  this->m_structResult = NULL;
  this->m_taskBuffer.m_ptr = NULL;
  this->m_lobbyService = lobbyService;
}

/*
==============
bdStructBufferTask::~bdStructBufferTask
==============
*/
void bdStructBufferTask::~bdStructBufferTask(bdStructBufferTask *this)
{
  bdTaskByteBuffer *m_ptr; 
  bdTaskByteBuffer *v3; 

  this->__vftable = (bdStructBufferTask_vtbl *)&bdStructBufferTask::`vftable';
  m_ptr = this->m_taskBuffer.m_ptr;
  if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
  {
    v3 = this->m_taskBuffer.m_ptr;
    if ( v3 )
      ((void (__fastcall *)(bdTaskByteBuffer *, __int64))v3->~bdReferencable)(v3, 1i64);
    this->m_taskBuffer.m_ptr = NULL;
  }
  bdRemoteTask::~bdRemoteTask(this);
}

/*
==============
bdStructBufferTask::deserializeTaskReply
==============
*/
__int64 bdStructBufferTask::deserializeTaskReply(bdStructBufferTask *this, const bdReference<bdByteBuffer> buffer)
{
  bool v4; 
  unsigned int v5; 
  bdByteBuffer *v6; 
  bdStructBufferSerializable *m_structResult; 
  unsigned __int8 v8; 
  unsigned int dataLen; 
  bdReference<bdByteBuffer> buffera; 
  __int64 v12; 
  bdByteBuffer *m_ptr; 
  bdStructBufferDeserializer v14; 

  v12 = -2i64;
  m_ptr = buffer.m_ptr;
  dataLen = 0;
  v4 = bdByteBuffer::readStructStart((bdByteBuffer *)buffer.m_ptr->__vftable, &dataLen);
  if ( !v4 )
    goto LABEL_9;
  v5 = dataLen;
  v6 = (bdByteBuffer *)buffer.m_ptr->__vftable;
  buffera.m_ptr = v6;
  if ( v6 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v6->m_refCount, 1u);
  bdStructBufferDeserializer::bdStructBufferDeserializer(&v14, (bdReference<bdByteBuffer>)&buffera, v5, 0);
  m_structResult = this->m_structResult;
  if ( m_structResult )
    v4 = m_structResult->deserializeWithLobbyService(m_structResult, &v14, this->m_lobbyService);
  bdStructBufferDeserializer::~bdStructBufferDeserializer(&v14);
  if ( v4 && bdByteBuffer::readStructEnd((bdByteBuffer *)buffer.m_ptr->__vftable) )
    v8 = 1;
  else
LABEL_9:
    v8 = 0;
  if ( buffer.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->allocateBuffer, 0xFFFFFFFF) == 1 )
  {
    if ( buffer.m_ptr->__vftable )
      (*(void (__fastcall **)(bdByteBuffer_vtbl *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr->__vftable, 1i64);
    buffer.m_ptr->__vftable = NULL;
  }
  return v8;
}

/*
==============
bdStructBufferTask::getTaskBuffer
==============
*/
bdReference<bdTaskByteBuffer> *bdStructBufferTask::getTaskBuffer(bdStructBufferTask *this, bdReference<bdTaskByteBuffer> *result)
{
  bdTaskByteBuffer *m_ptr; 

  m_ptr = this->m_taskBuffer.m_ptr;
  result->m_ptr = m_ptr;
  if ( m_ptr )
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
  return result;
}

/*
==============
bdStructBufferTask::setRequest
==============
*/
_BOOL8 bdStructBufferTask::setRequest(bdStructBufferTask *this, const unsigned __int8 serviceID, const unsigned __int8 taskID, const bdStructBufferSerializable *request)
{
  bdTaskByteBuffer *v8; 
  unsigned int WrittenSize; 
  bdTaskByteBuffer *v10; 
  bdTaskByteBuffer *v11; 
  bdReference<bdTaskByteBuffer> *p_m_taskBuffer; 
  bdTaskByteBuffer *m_ptr; 
  bool v14; 
  bdByteBuffer *v15; 
  bool v16; 
  int v18; 
  int v19; 
  bdReference<bdByteBuffer> v20; 
  bdReference<bdByteBuffer> buffer; 
  __int64 v22; 
  bdStructBufferSerializer v23; 
  bdStructBufferSerializer v24; 

  v22 = -2i64;
  v8 = NULL;
  buffer.m_ptr = NULL;
  bdStructBufferSerializer::bdStructBufferSerializer(&v23, (bdReference<bdByteBuffer>)&buffer, 0xFFFFu, 0);
  if ( request && !request->serializeWithLobbyService((bdStructBufferSerializable *)request, &v23, this->m_lobbyService) )
  {
    v19 = taskID;
    v18 = serviceID;
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "lobby/structbuffertask", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdremotetaskmanager\\bdstructbuffertask.cpp", "bdStructBufferTask::setRequest", 0x2Eu, "Failed to Serialize Request object for Service %d Task %d", v18, v19);
  }
  WrittenSize = bdStructBufferSerializer::getWrittenSize(&v23);
  v10 = (bdTaskByteBuffer *)bdMemory::allocate(0x58ui64);
  v20.m_ptr = v10;
  if ( v10 )
  {
    bdTaskByteBuffer::bdTaskByteBuffer(v10, WrittenSize + 77, 1);
    v8 = v11;
  }
  p_m_taskBuffer = &this->m_taskBuffer;
  m_ptr = this->m_taskBuffer.m_ptr;
  if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 && p_m_taskBuffer->m_ptr )
    ((void (__fastcall *)(bdTaskByteBuffer *, __int64))p_m_taskBuffer->m_ptr->~bdReferencable)(p_m_taskBuffer->m_ptr, 1i64);
  p_m_taskBuffer->m_ptr = v8;
  if ( v8 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v8->m_refCount, 1u);
  bdRemoteTaskManager::initTaskBuffer(&this->m_taskBuffer, serviceID, taskID);
  v14 = bdByteBuffer::writeStructStart(p_m_taskBuffer->m_ptr, WrittenSize);
  if ( request )
  {
    v15 = p_m_taskBuffer->m_ptr;
    v20.m_ptr = v15;
    if ( v15 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v15->m_refCount, 1u);
    bdStructBufferSerializer::bdStructBufferSerializer(&v24, (bdReference<bdByteBuffer>)&v20, WrittenSize, 0);
    v14 = v14 && request->serializeWithLobbyService((bdStructBufferSerializable *)request, &v24, this->m_lobbyService);
    bdStructBufferSerializer::~bdStructBufferSerializer(&v24);
  }
  v16 = v14 && bdByteBuffer::writeStructEnd(p_m_taskBuffer->m_ptr);
  bdStructBufferSerializer::~bdStructBufferSerializer(&v23);
  return v16;
}

/*
==============
bdStructBufferTask::setResponse
==============
*/
char bdStructBufferTask::setResponse(bdStructBufferTask *this, bdStructBufferSerializable *response)
{
  this->m_structResult = response;
  return 1;
}

