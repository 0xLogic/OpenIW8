/*
==============
bdBufferParams::~bdBufferParams
==============
*/

void __fastcall bdBufferParams::~bdBufferParams(bdBufferParams *this)
{
  ??1bdBufferParams@@UEAA@XZ(this);
}

/*
==============
bdBufferParams::ensureCapacity
==============
*/

bool __fastcall bdBufferParams::ensureCapacity(bdBufferParams *this, unsigned int paramSize, bool typeChecked)
{
  return ?ensureCapacity@bdBufferParams@@MEAA_NI_N@Z(this, paramSize, typeChecked);
}

/*
==============
bdBufferParams::addString
==============
*/

void __fastcall bdBufferParams::addString(bdBufferParams *this, const char *str, const unsigned __int64 maxLen)
{
  ?addString@bdBufferParams@@QEAAXPEBD_K@Z(this, str, maxLen);
}

/*
==============
bdBufferParams::addSerializable
==============
*/

void __fastcall bdBufferParams::addSerializable(bdBufferParams *this, const bdSerializable *param)
{
  ?addSerializable@bdBufferParams@@QEAAXAEBVbdSerializable@@@Z(this, param);
}

/*
==============
bdBufferParams::addBlob
==============
*/

void __fastcall bdBufferParams::addBlob(bdBufferParams *this, const void *data, const unsigned int length)
{
  ?addBlob@bdBufferParams@@QEAAXPEBXI@Z(this, data, length);
}

/*
==============
bdBufferParams::arrayStart
==============
*/

void __fastcall bdBufferParams::arrayStart(bdBufferParams *this, unsigned __int8 type, unsigned int numElements, unsigned int elementSize)
{
  ?arrayStart@bdBufferParams@@QEAAXEII@Z(this, type, numElements, elementSize);
}

/*
==============
bdBufferParams::arrayEnd
==============
*/

void __fastcall bdBufferParams::arrayEnd(bdBufferParams *this)
{
  ?arrayEnd@bdBufferParams@@QEAAXXZ(this);
}

/*
==============
bdBufferParams::addNAN
==============
*/

void __fastcall bdBufferParams::addNAN(bdBufferParams *this)
{
  ?addNAN@bdBufferParams@@QEAAXXZ(this);
}

/*
==============
bdBufferParams::addNoType
==============
*/

void __fastcall bdBufferParams::addNoType(bdBufferParams *this)
{
  ?addNoType@bdBufferParams@@QEAAXXZ(this);
}

/*
==============
bdBufferParams::~bdBufferParams
==============
*/
void bdBufferParams::~bdBufferParams(bdBufferParams *this)
{
  bdByteBuffer *m_ptr; 
  bdByteBuffer *v3; 

  this->__vftable = (bdBufferParams_vtbl *)&bdBufferParams::`vftable';
  m_ptr = this->m_buffer.m_ptr;
  if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
  {
    v3 = this->m_buffer.m_ptr;
    if ( v3 )
      ((void (__fastcall *)(bdByteBuffer *, __int64))v3->~bdReferencable)(v3, 1i64);
    this->m_buffer.m_ptr = NULL;
  }
}

/*
==============
bdBufferParams::addBlob
==============
*/
void bdBufferParams::addBlob(bdBufferParams *this, const void *data, _BOOL8 length)
{
  unsigned int v3; 
  _BOOL8 v6; 

  v3 = length;
  if ( !data && length )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdBufferParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdbufferparams.cpp", "bdBufferParams::addBlob", 0xB0u, "The Blob parameter being referenced is NULL and desired write length is not zero; cannot add to the buffer.");
LABEL_11:
    this->m_serializeOk = 0;
    return;
  }
  if ( this->m_isWritingArray )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdLobbyCommon/bdBufferParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdbufferparams.cpp", "bdBufferParams::addBlob", 0xC7u, "Cannot add data blobs in buffer 'arrays'.");
    goto LABEL_11;
  }
  v6 = length + 5;
  LOBYTE(length) = 1;
  if ( this->ensureCapacity(this, v6, length) )
    this->m_serializeOk = this->m_serializeOk && bdByteBuffer::writeBlob(this->m_buffer.m_ptr, data, v3);
}

/*
==============
bdBufferParams::addNAN
==============
*/
void bdBufferParams::addNAN(bdBufferParams *this, __int64 a2, _BOOL8 a3)
{
  if ( this->m_isWritingArray )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdLobbyCommon/bdBufferParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdbufferparams.cpp", "bdBufferParams::addNAN", 0xDCu, "Cannot write NANs in buffer 'arrays'.");
    this->m_serializeOk = 0;
  }
  else
  {
    LOBYTE(a3) = 1;
    if ( this->ensureCapacity(this, 0, a3) )
      this->m_serializeOk = this->m_serializeOk && bdByteBuffer::writeNAN(this->m_buffer.m_ptr);
  }
}

/*
==============
bdBufferParams::addNoType
==============
*/
void bdBufferParams::addNoType(bdBufferParams *this, __int64 a2, _BOOL8 a3)
{
  if ( this->m_isWritingArray )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdLobbyCommon/bdBufferParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdbufferparams.cpp", "bdBufferParams::addNoType", 0xF2u, "Cannot add 'NoType' elements in buffer 'arrays'.");
    this->m_serializeOk = 0;
  }
  else
  {
    LOBYTE(a3) = 1;
    if ( this->ensureCapacity(this, 0, a3) )
      this->m_serializeOk = this->m_serializeOk && bdByteBuffer::writeNoType(this->m_buffer.m_ptr);
  }
}

/*
==============
bdBufferParams::addSerializable
==============
*/
void bdBufferParams::addSerializable(bdBufferParams *this, const bdSerializable *param)
{
  signed int v4; 

  if ( this->m_isWritingArray )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdLobbyCommon/bdBufferParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdbufferparams.cpp", "bdBufferParams::addSerializable", 0x37u, "Cannot write serializable objects in buffer 'arrays'.");
    this->m_serializeOk = 0;
  }
  else
  {
    v4 = param->serializedSizeOf((bdSerializable *)param);
    bdHandleAssert(v4 >= 0, "objectSize >= 0", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdbufferparams.cpp", "bdBufferParams::addSerializable", 0x2Au, "ERROR: object cannot be serialized. Please ensure serialize() has been implemented properly.");
    if ( this->ensureCapacity(this, v4, 0) )
      this->m_serializeOk = this->m_serializeOk && param->serialize((bdSerializable *)param, this->m_buffer.m_ptr);
  }
}

/*
==============
bdBufferParams::addString
==============
*/
void bdBufferParams::addString(bdBufferParams *this, const char *str, const unsigned __int64 maxLen)
{
  _BYTE *v6; 
  _BOOL8 v7; 
  int v8; 

  if ( !str )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdBufferParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdbufferparams.cpp", "bdBufferParams::addString", 0x85u, "The String parameter being referenced is NULL; cannot add to the buffer.");
LABEL_15:
    this->m_serializeOk = 0;
    return;
  }
  if ( this->m_isWritingArray )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdLobbyCommon/bdBufferParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdbufferparams.cpp", "bdBufferParams::addString", 0xA3u, "Cannot add Strings in buffer 'arrays'.");
    goto LABEL_15;
  }
  v6 = memchr_0(str, 0, maxLen);
  if ( v6 )
  {
    v8 = (_DWORD)v6 - (_DWORD)str;
    if ( v6 - str < maxLen )
      goto LABEL_9;
  }
  else
  {
    v8 = maxLen;
  }
  bdLogMessage(BD_LOG_WARNING, "warn/", "bdLobbyCommon/bdBufferParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdbufferparams.cpp", "bdBufferParams::addString", 0x92u, "String parameter is too long (>=%d); it will be truncated.", maxLen);
LABEL_9:
  LOBYTE(v7) = 1;
  if ( this->ensureCapacity(this, v8 + 1, v7) )
    this->m_serializeOk = this->m_serializeOk && bdByteBuffer::writeString(this->m_buffer.m_ptr, str, maxLen);
}

/*
==============
bdBufferParams::arrayEnd
==============
*/
void bdBufferParams::arrayEnd(bdBufferParams *this)
{
  int m_arrayWriteCount; 
  int v3; 
  int v4; 

  m_arrayWriteCount = this->m_arrayWriteCount;
  if ( m_arrayWriteCount < 0 )
  {
    v3 = -m_arrayWriteCount;
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdBufferParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdbufferparams.cpp", "bdBufferParams::arrayEnd", 0x6Bu, "+%u too many elements were written to the array.", v3);
LABEL_5:
    this->m_serializeOk = 0;
    return;
  }
  if ( m_arrayWriteCount > 0 )
  {
    v4 = this->m_arrayWriteCount;
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdBufferParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdbufferparams.cpp", "bdBufferParams::arrayEnd", 0x71u, "arrayEnd() was called but there are %u elements remaining to be written.", v4);
    goto LABEL_5;
  }
  bdByteBuffer::writeArrayEnd(this->m_buffer.m_ptr);
  this->m_arrayWriteCount = 0;
  this->m_isWritingArray = 0;
}

/*
==============
bdBufferParams::arrayStart
==============
*/
void bdBufferParams::arrayStart(bdBufferParams *this, unsigned __int8 type, unsigned int numElements, unsigned int elementSize)
{
  bool v8; 
  int m_arrayWriteCount; 

  if ( this->m_isWritingArray )
  {
    m_arrayWriteCount = this->m_arrayWriteCount;
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdLobbyCommon/bdBufferParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdbufferparams.cpp", "bdBufferParams::arrayStart", 0x5Fu, "Cannot start writing another array; %d more elements remain to be written.", m_arrayWriteCount);
    this->m_serializeOk = 0;
  }
  else if ( ((unsigned __int8 (__fastcall *)(bdBufferParams *, __int64))this->ensureCapacity)(this, 10i64) )
  {
    v8 = !this->m_serializeOk;
    this->m_arrayWriteCount = numElements;
    if ( v8 || !bdByteBuffer::writeArrayStart(this->m_buffer.m_ptr, type, numElements, elementSize) )
    {
      this->m_isWritingArray = 1;
      this->m_serializeOk = 0;
    }
    else
    {
      this->m_serializeOk = 1;
      this->m_isWritingArray = 1;
    }
  }
}

/*
==============
bdBufferParams::ensureCapacity
==============
*/
char bdBufferParams::ensureCapacity(bdBufferParams *this, unsigned int paramSize, bool typeChecked)
{
  bdByteBuffer *m_ptr; 
  unsigned int v4; 
  unsigned int m_size; 
  int v7; 
  unsigned int m_maxBufferSize; 
  unsigned int v9; 
  unsigned int v10; 
  bool v11; 
  unsigned int m_hint; 
  __int64 v14; 

  m_ptr = this->m_buffer.m_ptr;
  v4 = 0;
  m_size = m_ptr->m_size;
  v7 = m_size + LODWORD(m_ptr->m_data) - LODWORD(m_ptr->m_writePtr) - typeChecked - paramSize;
  if ( v7 < 0 )
  {
    m_maxBufferSize = this->m_maxBufferSize;
    v9 = m_maxBufferSize - m_size;
    v10 = -v7;
    if ( v10 <= m_maxBufferSize - m_size )
    {
      m_hint = this->m_hint;
      v4 = v10;
      if ( m_hint >= v9 )
        m_hint = v9;
      if ( v10 < m_hint )
        v4 = m_hint;
      bdLogMessage(BD_LOG_INFO, "info/", "bdLobbyCommon/bdBufferParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdbufferparams.cpp", "bdBufferParams::ensureCapacity", 0x125u, "bdByteBuffer is expanding by %u Bytes.", v4);
      v11 = this->m_buffer.m_ptr->expand(this->m_buffer.m_ptr, v4);
      if ( v11 )
        return v11;
    }
    else
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdBufferParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdbufferparams.cpp", "bdBufferParams::ensureCapacity", 0x117u, "Max buffer size (%uB) would be exceeded: current size = %uB, required = %uB.", m_maxBufferSize, m_size, v10);
      v11 = 0;
    }
    LODWORD(v14) = v4;
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdBufferParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdbufferparams.cpp", "bdBufferParams::ensureCapacity", 0x12Fu, "Failed to expand bdByteBuffer by %u Bytes.", v14);
    this->m_serializeOk = 0;
    return v11;
  }
  return 1;
}

