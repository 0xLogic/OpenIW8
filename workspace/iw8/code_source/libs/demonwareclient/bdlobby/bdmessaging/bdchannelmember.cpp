/*
==============
bdChannelMember::~bdChannelMember
==============
*/

void __fastcall bdChannelMember::~bdChannelMember(bdChannelMember *this)
{
  ??1bdChannelMember@@UEAA@XZ(this);
}

/*
==============
bdChannelMember::sizeOf
==============
*/

unsigned int __fastcall bdChannelMember::sizeOf(bdChannelMember *this)
{
  return ?sizeOf@bdChannelMember@@UEAAIXZ(this);
}

/*
==============
bdChannelMember::bdChannelMember
==============
*/

void __fastcall bdChannelMember::bdChannelMember(bdChannelMember *this)
{
  ??0bdChannelMember@@QEAA@XZ(this);
}

/*
==============
bdChannelMember::bdChannelMember
==============
*/

void __fastcall bdChannelMember::bdChannelMember(bdChannelMember *this, const bdChannelMember *__that)
{
  ??0bdChannelMember@@QEAA@AEBV0@@Z(this, __that);
}

/*
==============
bdChannelMember::deserialize
==============
*/

bool __fastcall bdChannelMember::deserialize(bdChannelMember *this, bdReference<bdByteBuffer> buffer)
{
  return ?deserialize@bdChannelMember@@UEAA_NV?$bdReference@VbdByteBuffer@@@@@Z(this, buffer);
}

/*
==============
bdChannelMember::deserialize
==============
*/

bool __fastcall bdChannelMember::deserialize(bdChannelMember *this, bdStructBufferDeserializer *deserializer)
{
  return ?deserialize@bdChannelMember@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, deserializer);
}

/*
==============
bdChannelMember::bdChannelMember
==============
*/
void bdChannelMember::bdChannelMember(bdChannelMember *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdChannelMember::`vbtable'{for `bdTaskResult'};
    *((_QWORD *)&this->__vftable + 3) = &bdChannelMember::`vbtable'{for `bdStructBufferSerializable'};
    *((_QWORD *)&this->m_subscribedTimestamp + 1) = &bdReferencable::`vftable';
    *(&this->m_subscribedTimestamp + 4) = 0;
  }
  bdTaskResult::bdTaskResult(this);
  bdStructBufferSerializable::bdStructBufferSerializable((bdStructBufferSerializable *)(&this->__vftable + 2));
  this->__vftable = (bdChannelMember_vtbl *)&bdChannelMember::`vftable'{for `bdTaskResult'};
  *((_QWORD *)&this->__vftable + 2) = &bdChannelMember::`vftable'{for `bdStructBufferSerializable'};
  *(bdChannelMember_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdChannelMember_vtbl *)&bdChannelMember::`vftable'{for `bdReferencable'};
  *(_QWORD *)this->_bytes_20 = 0i64;
  this->m_subscribedTimestamp = 0;
  this->_bytes_20[8] = 0;
}

/*
==============
bdChannelMember::~bdChannelMember
==============
*/
void bdChannelMember::~bdChannelMember(bdChannelMember *this)
{
  bdTaskResult *v1; 

  v1 = (bdChannelMember *)((char *)this - 96);
  *((_QWORD *)&this[-1].__vftable + 2) = &bdChannelMember::`vftable'{for `bdTaskResult'};
  *(_QWORD *)this[-1]._bytes_20 = &bdChannelMember::`vftable'{for `bdStructBufferSerializable'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)&this[-1].__vftable + 3) + 4i64) - 104) = &bdChannelMember::`vftable'{for `bdReferencable'};
  bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)this[-1].m_userName);
  bdTaskResult::~bdTaskResult(v1);
}

/*
==============
bdChannelMember::deserialize
==============
*/
bool bdChannelMember::deserialize(bdChannelMember *this, bdStructBufferDeserializer *deserializer)
{
  return bdStructBufferDeserializer::readUInt64(deserializer, 1u, (unsigned __int64 *)&this->__vftable + 2) && bdStructBufferDeserializer::readString(deserializer, 2u, (char *const)&this->__vftable + 24, 0x40u) && bdStructBufferDeserializer::readUInt32(deserializer, 3u, (unsigned int *)&this->m_userName[40]);
}

/*
==============
bdChannelMember::deserialize
==============
*/
_BOOL8 bdChannelMember::deserialize(bdChannelMember *this, bdReference<bdByteBuffer> buffer)
{
  bool v4; 

  v4 = bdByteBuffer::readUInt64((bdByteBuffer *)buffer.m_ptr->__vftable, (unsigned __int64 *)this->_bytes_20) && bdByteBuffer::readString((bdByteBuffer *)buffer.m_ptr->__vftable, &this->_bytes_20[8], 0x40ui64) && bdByteBuffer::readUInt32((bdByteBuffer *)buffer.m_ptr->__vftable, &this->m_subscribedTimestamp);
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
bdChannelMember::sizeOf
==============
*/
__int64 bdChannelMember::sizeOf(bdChannelMember *this)
{
  return 128i64;
}

/*
==============
bdChannelMember::bdChannelMember
==============
*/
void bdChannelMember::bdChannelMember(bdChannelMember *this, const bdChannelMember *__that, int a3)
{
  if ( a3 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdChannelMember::`vbtable'{for `bdTaskResult'};
    *((_QWORD *)&this->__vftable + 3) = &bdChannelMember::`vbtable'{for `bdStructBufferSerializable'};
    bdReferencable::bdReferencable((bdReferencable *)(&this->m_subscribedTimestamp + 2), (const bdReferencable *)((char *)&__that->__vftable + *(int *)(*((_QWORD *)&__that->__vftable + 1) + 4i64) + 8));
  }
  bdTaskResult::bdTaskResult(this, __that);
  bdStructBufferSerializable::bdStructBufferSerializable((bdStructBufferSerializable *)(&this->__vftable + 2), (const bdStructBufferSerializable *)(&__that->__vftable + 2));
  this->__vftable = (bdChannelMember_vtbl *)&bdChannelMember::`vftable'{for `bdTaskResult'};
  *((_QWORD *)&this->__vftable + 2) = &bdChannelMember::`vftable'{for `bdStructBufferSerializable'};
  *(bdChannelMember_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdChannelMember_vtbl *)&bdChannelMember::`vftable'{for `bdReferencable'};
  *(_QWORD *)this->_bytes_20 = *(_QWORD *)__that->_bytes_20;
  *(__m256i *)&this->_bytes_20[8] = *(__m256i *)&__that->_bytes_20[8];
  *(__m256i *)&this->m_userName[24] = *(__m256i *)&__that->m_userName[24];
  this->m_subscribedTimestamp = __that->m_subscribedTimestamp;
}

