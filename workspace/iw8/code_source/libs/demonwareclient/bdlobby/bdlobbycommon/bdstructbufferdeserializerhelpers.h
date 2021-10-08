/*
==============
bdStructBufferDeserializerHelpers::deserializeFromBuffer
==============
*/

bool __fastcall bdStructBufferDeserializerHelpers::deserializeFromBuffer(bdReference<bdByteBuffer> buffer, bdStructBufferSerializable *serializable)
{
  return ?deserializeFromBuffer@bdStructBufferDeserializerHelpers@@SA_NV?$bdReference@VbdByteBuffer@@@@AEAVbdStructBufferSerializable@@@Z(buffer, serializable);
}

/*
==============
bdStructBufferDeserializerHelpers::deserializeFromBuffer
==============
*/
__int64 bdStructBufferDeserializerHelpers::deserializeFromBuffer(bdReference<bdByteBuffer> buffer, bdStructBufferSerializable *serializable)
{
  unsigned int v4; 
  bdByteBuffer *v5; 
  bool v6; 
  unsigned __int8 v7; 
  unsigned int dataLen; 
  bdReference<bdByteBuffer> buffera; 
  __int64 v11; 
  bdByteBuffer *m_ptr; 
  bdStructBufferDeserializer v13; 

  v11 = -2i64;
  m_ptr = buffer.m_ptr;
  dataLen = 0;
  if ( !bdByteBuffer::readStructStart((bdByteBuffer *)buffer.m_ptr->__vftable, &dataLen) )
    goto LABEL_7;
  v4 = dataLen;
  v5 = (bdByteBuffer *)buffer.m_ptr->__vftable;
  buffera.m_ptr = v5;
  if ( v5 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v5->m_refCount, 1u);
  bdStructBufferDeserializer::bdStructBufferDeserializer(&v13, (bdReference<bdByteBuffer>)&buffera, v4, 0);
  v6 = serializable->deserialize(serializable, &v13);
  bdStructBufferDeserializer::~bdStructBufferDeserializer(&v13);
  if ( v6 && bdByteBuffer::readStructEnd((bdByteBuffer *)buffer.m_ptr->__vftable) )
    v7 = 1;
  else
LABEL_7:
    v7 = 0;
  if ( buffer.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->allocateBuffer, 0xFFFFFFFF) == 1 )
  {
    if ( buffer.m_ptr->__vftable )
      (*(void (__fastcall **)(bdByteBuffer_vtbl *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr->__vftable, 1i64);
    buffer.m_ptr->__vftable = NULL;
  }
  return v7;
}

