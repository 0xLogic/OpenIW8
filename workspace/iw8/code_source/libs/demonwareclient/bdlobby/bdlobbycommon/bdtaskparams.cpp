/*
==============
bdTaskParams::bdTaskParams
==============
*/

void __fastcall bdTaskParams::bdTaskParams(bdTaskParams *this, unsigned __int8 serviceID, unsigned __int8 taskID, unsigned int capacityIncreaseHint, unsigned int maxBufferSize)
{
  ??0bdTaskParams@@QEAA@EEII@Z(this, serviceID, taskID, capacityIncreaseHint, maxBufferSize);
}

/*
==============
bdTaskParams::addContextUser
==============
*/

void __fastcall bdTaskParams::addContextUser(bdTaskParams *this, const unsigned __int64 *userID)
{
  ?addContextUser@bdTaskParams@@QEAAXAEB_K@Z(this, userID);
}

/*
==============
bdTaskParams::addContext
==============
*/

void __fastcall bdTaskParams::addContext(bdTaskParams *this, const char *context)
{
  ?addContext@bdTaskParams@@QEAAXPEBD@Z(this, context);
}

/*
==============
bdTaskParams::addContextUser
==============
*/

void __fastcall bdTaskParams::addContextUser(bdTaskParams *this, const bdUserAccountID *userID)
{
  ?addContextUser@bdTaskParams@@QEAAXAEBVbdUserAccountID@@@Z(this, userID);
}

/*
==============
bdTaskParams::~bdTaskParams
==============
*/

void __fastcall bdTaskParams::~bdTaskParams(bdTaskParams *this)
{
  ??1bdTaskParams@@UEAA@XZ(this);
}

/*
==============
bdTaskParams::bdTaskParams
==============
*/
void bdTaskParams::bdTaskParams(bdTaskParams *this, unsigned __int8 serviceID, unsigned __int8 taskID, unsigned int capacityIncreaseHint, unsigned int maxBufferSize)
{
  unsigned int v5; 
  bdReference<bdByteBuffer> *p_m_buffer; 
  bdTaskByteBuffer *v8; 
  bdReference<bdTaskByteBuffer> *p_m_taskBuffer; 
  bdTaskByteBuffer *v10; 
  bdTaskByteBuffer *v11; 
  bdTaskByteBuffer *m_ptr; 
  int v13; 

  v5 = capacityIncreaseHint;
  this->m_hint = capacityIncreaseHint;
  this->m_maxBufferSize = maxBufferSize;
  this->m_serializeOk = 1;
  p_m_buffer = &this->m_buffer;
  v8 = NULL;
  this->m_buffer.m_ptr = NULL;
  this->m_isWritingArray = 0;
  this->m_arrayWriteCount = 0;
  this->__vftable = (bdTaskParams_vtbl *)&bdTaskParams::`vftable';
  this->m_serviceID = serviceID;
  this->m_taskID = taskID;
  this->m_taskResults = NULL;
  this->m_taskResultRefs = NULL;
  this->m_maxResults = 0;
  p_m_taskBuffer = &this->m_taskBuffer;
  this->m_taskBuffer.m_ptr = NULL;
  if ( maxBufferSize < 0x4C )
  {
    bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.cpp", "bdTaskParams::bdTaskParams", 0x27u, "Error creating task buffer params: maximum buffer size is too small!");
    v13 = 76;
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.cpp", "bdTaskParams::bdTaskParams", 0x29u, "Max buffer size must be at least %u Bytes.", v13);
    this->m_maxBufferSize = 76;
  }
  if ( v5 < 0x4C )
    v5 = 76;
  if ( maxBufferSize < v5 )
    v5 = maxBufferSize;
  v10 = (bdTaskByteBuffer *)bdMemory::allocate(0x58ui64);
  if ( v10 )
  {
    bdTaskByteBuffer::bdTaskByteBuffer(v10, v5, 1);
    v8 = v11;
  }
  if ( p_m_taskBuffer->m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&p_m_taskBuffer->m_ptr->m_refCount, 0xFFFFFFFF) == 1 && p_m_taskBuffer->m_ptr )
    ((void (__fastcall *)(bdTaskByteBuffer *, __int64))p_m_taskBuffer->m_ptr->~bdReferencable)(p_m_taskBuffer->m_ptr, 1i64);
  p_m_taskBuffer->m_ptr = v8;
  if ( v8 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v8->m_refCount, 1u);
  if ( p_m_buffer != (bdReference<bdByteBuffer> *)p_m_taskBuffer )
  {
    if ( p_m_buffer->m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&p_m_buffer->m_ptr->m_refCount, 0xFFFFFFFF) == 1 && p_m_buffer->m_ptr )
      ((void (__fastcall *)(bdByteBuffer *, __int64))p_m_buffer->m_ptr->~bdReferencable)(p_m_buffer->m_ptr, 1i64);
    m_ptr = p_m_taskBuffer->m_ptr;
    p_m_buffer->m_ptr = p_m_taskBuffer->m_ptr;
    if ( m_ptr )
      _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
  }
  if ( p_m_buffer->m_ptr )
  {
    bdRemoteTaskManager::initTaskBuffer(p_m_taskBuffer, this->m_serviceID, this->m_taskID);
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.cpp", "bdTaskParams::bdTaskParams", 0x3Bu, "Could not allocate task buffer!");
    bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.cpp", "bdTaskParams::bdTaskParams", 0x3Cu, "Task memory allocation failed.");
    this->m_serializeOk = 0;
  }
}

/*
==============
bdTaskParams::~bdTaskParams
==============
*/
void bdTaskParams::~bdTaskParams(bdTaskParams *this)
{
  bdTaskByteBuffer *m_ptr; 
  bdTaskByteBuffer *v3; 

  this->__vftable = (bdTaskParams_vtbl *)&bdTaskParams::`vftable';
  m_ptr = this->m_taskBuffer.m_ptr;
  if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
  {
    v3 = this->m_taskBuffer.m_ptr;
    if ( v3 )
      ((void (__fastcall *)(bdTaskByteBuffer *, __int64))v3->~bdReferencable)(v3, 1i64);
    this->m_taskBuffer.m_ptr = NULL;
  }
  bdBufferParams::~bdBufferParams(this);
}

/*
==============
bdTaskParams::addContext
==============
*/
void bdTaskParams::addContext(bdTaskParams *this, const char *context, _BOOL8 a3)
{
  bdByteBuffer *m_ptr; 
  bdReference<bdByteBuffer> buffer; 

  if ( this->m_isWritingArray )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.cpp", "bdTaskParams::addContext", 0x86u, "Cannot write Context strings into buffer 'arrays'.");
    this->m_serializeOk = 0;
  }
  else
  {
    LOBYTE(a3) = 1;
    if ( this->ensureCapacity(this, 16u, a3) )
    {
      if ( !this->m_serializeOk )
        goto LABEL_8;
      m_ptr = this->m_buffer.m_ptr;
      buffer.m_ptr = m_ptr;
      if ( m_ptr )
        _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
      if ( ContextSerialization::writeContext((bdReference<bdByteBuffer>)&buffer, context) )
        this->m_serializeOk = 1;
      else
LABEL_8:
        this->m_serializeOk = 0;
    }
  }
}

/*
==============
bdTaskParams::addContextUser
==============
*/
void bdTaskParams::addContextUser(bdTaskParams *this, const bdUserAccountID *userID)
{
  bool (__fastcall *ensureCapacity)(bdBufferParams *, unsigned int, bool); 
  unsigned int UserIDSize; 
  _BOOL8 v6; 
  bdByteBuffer *m_ptr; 
  bdReference<bdByteBuffer> buffer; 

  if ( this->m_isWritingArray )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.cpp", "bdTaskParams::addContextUser", 0x5Au, "Cannot write Context-dependent user IDs in buffer 'arrays'.");
    this->m_serializeOk = 0;
  }
  else
  {
    ensureCapacity = this->ensureCapacity;
    UserIDSize = ContextSerialization::getUserIDSize(userID);
    LOBYTE(v6) = 1;
    if ( ensureCapacity(this, UserIDSize, v6) )
    {
      if ( !this->m_serializeOk )
        goto LABEL_8;
      m_ptr = this->m_buffer.m_ptr;
      buffer.m_ptr = m_ptr;
      if ( m_ptr )
        _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
      if ( ContextSerialization::writeUserID((bdReference<bdByteBuffer>)&buffer, userID) )
        this->m_serializeOk = 1;
      else
LABEL_8:
        this->m_serializeOk = 0;
    }
  }
}

/*
==============
bdTaskParams::addContextUser
==============
*/
void bdTaskParams::addContextUser(bdTaskParams *this, const unsigned __int64 *userID)
{
  bool (__fastcall *ensureCapacity)(bdBufferParams *, unsigned int, bool); 
  unsigned int UserIDSize; 
  _BOOL8 v6; 
  bdByteBuffer *m_ptr; 
  bdReference<bdByteBuffer> buffer; 

  if ( this->m_isWritingArray )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.cpp", "bdTaskParams::addContextUser", 0x70u, "Cannot write Context-dependent user IDs in buffer 'arrays'.");
    this->m_serializeOk = 0;
  }
  else
  {
    ensureCapacity = this->ensureCapacity;
    UserIDSize = ContextSerialization::getUserIDSize(userID);
    LOBYTE(v6) = 1;
    if ( ensureCapacity(this, UserIDSize, v6) )
    {
      if ( !this->m_serializeOk )
        goto LABEL_8;
      m_ptr = this->m_buffer.m_ptr;
      buffer.m_ptr = m_ptr;
      if ( m_ptr )
        _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
      if ( ContextSerialization::writeUserID((bdReference<bdByteBuffer>)&buffer, userID) )
        this->m_serializeOk = 1;
      else
LABEL_8:
        this->m_serializeOk = 0;
    }
  }
}

