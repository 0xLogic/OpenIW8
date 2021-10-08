/*
==============
bdStructSerializationStream::prepare
==============
*/

bool __fastcall bdStructSerializationStream::prepare(bdStructSerializationStream *this, bdReference<bdByteBuffer> buffer, unsigned int bufferSize)
{
  return ?prepare@bdStructSerializationStream@@QEAA_NV?$bdReference@VbdByteBuffer@@@@I@Z(this, buffer, bufferSize);
}

/*
==============
bdStructSerializationStream::prepare
==============
*/
char bdStructSerializationStream::prepare(bdStructSerializationStream *this, bdReference<bdByteBuffer> buffer, unsigned int bufferSize)
{
  bdByteBuffer *m_ptr; 
  bdByteBuffer_vtbl *v7; 

  if ( (bdStructSerializationStream *)buffer.m_ptr != this )
  {
    m_ptr = this->m_buffer.m_ptr;
    if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 && this->m_buffer.m_ptr )
      ((void (__fastcall *)(bdByteBuffer *, __int64))this->m_buffer.m_ptr->~bdReferencable)(this->m_buffer.m_ptr, 1i64);
    v7 = buffer.m_ptr->__vftable;
    this->m_buffer.m_ptr = (bdByteBuffer *)buffer.m_ptr->__vftable;
    if ( v7 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v7->allocateBuffer, 1u);
  }
  this->m_bufferSize = bufferSize;
  if ( buffer.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->allocateBuffer, 0xFFFFFFFF) == 1 )
  {
    if ( buffer.m_ptr->__vftable )
      (*(void (__fastcall **)(bdByteBuffer_vtbl *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr->__vftable, 1i64);
    buffer.m_ptr->__vftable = NULL;
  }
  return 1;
}

