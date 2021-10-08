/*
==============
bdStructSerializationOutputStream::getWrittenSize
==============
*/

unsigned int __fastcall bdStructSerializationOutputStream::getWrittenSize(bdStructSerializationOutputStream *this)
{
  return ?getWrittenSize@bdStructSerializationOutputStream@@QEAAIXZ(this);
}

/*
==============
bdStructSerializationOutputStream::~bdStructSerializationOutputStream
==============
*/

void __fastcall bdStructSerializationOutputStream::~bdStructSerializationOutputStream(bdStructSerializationOutputStream *this)
{
  ??1bdStructSerializationOutputStream@@QEAA@XZ(this);
}

/*
==============
bdStructSerializationOutputStream::write
==============
*/

unsigned int __fastcall bdStructSerializationOutputStream::write(bdStructSerializationOutputStream *this, unsigned int byteCount)
{
  return ?write@bdStructSerializationOutputStream@@QEAAII@Z(this, byteCount);
}

/*
==============
bdStructSerializationInputStream::read
==============
*/

unsigned int __fastcall bdStructSerializationInputStream::read(bdStructSerializationInputStream *this, void *value, unsigned int byteCount)
{
  return ?read@bdStructSerializationInputStream@@QEAAIPEAXI@Z(this, value, byteCount);
}

/*
==============
bdStructSerializationInputStream::read
==============
*/

unsigned int __fastcall bdStructSerializationInputStream::read(bdStructSerializationInputStream *this, unsigned int byteCount)
{
  return ?read@bdStructSerializationInputStream@@QEAAII@Z(this, byteCount);
}

/*
==============
bdStructSerializationInputStream::~bdStructSerializationInputStream
==============
*/

void __fastcall bdStructSerializationInputStream::~bdStructSerializationInputStream(bdStructSerializationInputStream *this)
{
  ??1bdStructSerializationInputStream@@QEAA@XZ(this);
}

/*
==============
bdStructSerializationOutputStream::write
==============
*/

unsigned int __fastcall bdStructSerializationOutputStream::write(bdStructSerializationOutputStream *this, const void *value, unsigned int byteCount)
{
  return ?write@bdStructSerializationOutputStream@@QEAAIPEBXI@Z(this, value, byteCount);
}

/*
==============
bdStructSerializationOutputStream::prepare
==============
*/

bool __fastcall bdStructSerializationOutputStream::prepare(bdStructSerializationOutputStream *this, bdReference<bdByteBuffer> buffer, unsigned int bufferSize)
{
  return ?prepare@bdStructSerializationOutputStream@@QEAA_NV?$bdReference@VbdByteBuffer@@@@I@Z(this, buffer, bufferSize);
}

/*
==============
bdStructSerializationInputStream::bdStructSerializationInputStream
==============
*/

void __fastcall bdStructSerializationInputStream::bdStructSerializationInputStream(bdStructSerializationInputStream *this)
{
  ??0bdStructSerializationInputStream@@QEAA@XZ(this);
}

/*
==============
bdStructSerializationInputStream::prepare
==============
*/

bool __fastcall bdStructSerializationInputStream::prepare(bdStructSerializationInputStream *this, bdReference<bdByteBuffer> buffer, unsigned int bufferSize)
{
  return ?prepare@bdStructSerializationInputStream@@QEAA_NV?$bdReference@VbdByteBuffer@@@@I@Z(this, buffer, bufferSize);
}

/*
==============
bdStructSerializationOutputStream::bdStructSerializationOutputStream
==============
*/

void __fastcall bdStructSerializationOutputStream::bdStructSerializationOutputStream(bdStructSerializationOutputStream *this)
{
  ??0bdStructSerializationOutputStream@@QEAA@XZ(this);
}

/*
==============
bdStructSerializationInputStream::bdStructSerializationInputStream
==============
*/
void bdStructSerializationInputStream::bdStructSerializationInputStream(bdStructSerializationInputStream *this)
{
  this->m_buffer.m_ptr = NULL;
  this->m_bufferSize = 0;
}

/*
==============
bdStructSerializationOutputStream::bdStructSerializationOutputStream
==============
*/
void bdStructSerializationOutputStream::bdStructSerializationOutputStream(bdStructSerializationOutputStream *this)
{
  this->m_buffer.m_ptr = NULL;
  this->m_bufferSize = 0;
  this->m_bufferWritten = 0;
}

/*
==============
bdStructSerializationInputStream::~bdStructSerializationInputStream
==============
*/
void bdStructSerializationInputStream::~bdStructSerializationInputStream(bdStructSerializationInputStream *this)
{
  bdByteBuffer *m_ptr; 

  m_ptr = this->m_buffer.m_ptr;
  if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
  {
    if ( this->m_buffer.m_ptr )
      ((void (__fastcall *)(bdByteBuffer *, __int64))this->m_buffer.m_ptr->~bdReferencable)(this->m_buffer.m_ptr, 1i64);
    this->m_buffer.m_ptr = NULL;
  }
}

/*
==============
bdStructSerializationOutputStream::~bdStructSerializationOutputStream
==============
*/
void bdStructSerializationOutputStream::~bdStructSerializationOutputStream(bdStructSerializationOutputStream *this)
{
  bdByteBuffer *m_ptr; 

  m_ptr = this->m_buffer.m_ptr;
  if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
  {
    if ( this->m_buffer.m_ptr )
      ((void (__fastcall *)(bdByteBuffer *, __int64))this->m_buffer.m_ptr->~bdReferencable)(this->m_buffer.m_ptr, 1i64);
    this->m_buffer.m_ptr = NULL;
  }
}

/*
==============
bdStructSerializationOutputStream::getWrittenSize
==============
*/
__int64 bdStructSerializationOutputStream::getWrittenSize(bdStructSerializationOutputStream *this)
{
  return this->m_bufferWritten;
}

/*
==============
bdStructSerializationInputStream::prepare
==============
*/
_BOOL8 bdStructSerializationInputStream::prepare(bdStructSerializationInputStream *this, bdReference<bdByteBuffer> buffer, unsigned int bufferSize)
{
  unsigned int v3; 
  bdByteBuffer *v5; 
  bool v6; 
  bdReference<bdByteBuffer> buffera; 

  buffera.m_ptr = buffer.m_ptr;
  v3 = 0;
  v5 = (bdByteBuffer *)buffer.m_ptr->__vftable;
  buffera.m_ptr = v5;
  if ( v5 )
    v3 = bufferSize;
  if ( v5 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v5->m_refCount, 1u);
  v6 = bdStructSerializationStream::prepare(this, (bdReference<bdByteBuffer>)&buffera, v3);
  if ( buffer.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->allocateBuffer, 0xFFFFFFFF) == 1 )
  {
    if ( buffer.m_ptr->__vftable )
      (*(void (__fastcall **)(bdByteBuffer_vtbl *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr->__vftable, 1i64);
    buffer.m_ptr->__vftable = NULL;
  }
  return v6;
}

/*
==============
bdStructSerializationOutputStream::prepare
==============
*/
_BOOL8 bdStructSerializationOutputStream::prepare(bdStructSerializationOutputStream *this, bdReference<bdByteBuffer> buffer, unsigned int bufferSize)
{
  bdByteBuffer *v4; 
  bool v5; 
  bdReference<bdByteBuffer> buffera; 

  buffera.m_ptr = buffer.m_ptr;
  this->m_bufferWritten = 0;
  v4 = (bdByteBuffer *)buffer.m_ptr->__vftable;
  buffera.m_ptr = v4;
  if ( v4 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v4->m_refCount, 1u);
  v5 = bdStructSerializationStream::prepare(this, (bdReference<bdByteBuffer>)&buffera, bufferSize);
  if ( buffer.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->allocateBuffer, 0xFFFFFFFF) == 1 )
  {
    if ( buffer.m_ptr->__vftable )
      (*(void (__fastcall **)(bdByteBuffer_vtbl *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr->__vftable, 1i64);
    buffer.m_ptr->__vftable = NULL;
  }
  return v5;
}

/*
==============
bdStructSerializationInputStream::read
==============
*/
__int64 bdStructSerializationInputStream::read(bdStructSerializationInputStream *this, unsigned int byteCount)
{
  this->m_bufferSize -= byteCount;
  return byteCount;
}

/*
==============
bdStructSerializationInputStream::read
==============
*/
__int64 bdStructSerializationInputStream::read(bdStructSerializationInputStream *this, void *value, unsigned int byteCount)
{
  unsigned int v6; 

  if ( this->m_bufferSize < byteCount )
    return 0i64;
  if ( !bdByteBuffer::read(this->m_buffer.m_ptr, value, byteCount) )
  {
    v6 = byteCount;
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "lobby/common/structbuffercommon", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructbuffercommon.cpp", "bdStructSerializationInputStream::read", 0x57u, "Failed to Read %d bytes from StructStream", v6);
    return 0i64;
  }
  this->m_bufferSize -= byteCount;
  return byteCount;
}

/*
==============
bdStructSerializationOutputStream::write
==============
*/
__int64 bdStructSerializationOutputStream::write(bdStructSerializationOutputStream *this, unsigned int byteCount)
{
  __int64 result; 

  this->m_bufferSize -= byteCount;
  result = byteCount;
  this->m_bufferWritten += byteCount;
  return result;
}

/*
==============
bdStructSerializationOutputStream::write
==============
*/
__int64 bdStructSerializationOutputStream::write(bdStructSerializationOutputStream *this, const void *value, unsigned int byteCount)
{
  bdByteBuffer *m_ptr; 
  __int64 result; 

  if ( this->m_bufferSize < byteCount )
    return 0i64;
  m_ptr = this->m_buffer.m_ptr;
  if ( m_ptr )
  {
    if ( !bdByteBuffer::write(m_ptr, value, byteCount) )
      return 0i64;
  }
  this->m_bufferSize -= byteCount;
  result = byteCount;
  this->m_bufferWritten += byteCount;
  return result;
}

