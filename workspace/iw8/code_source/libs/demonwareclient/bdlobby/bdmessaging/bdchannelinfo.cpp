/*
==============
bdChannelInfo::~bdChannelInfo
==============
*/

void __fastcall bdChannelInfo::~bdChannelInfo(bdChannelInfo *this)
{
  ??1bdChannelInfo@@UEAA@XZ(this);
}

/*
==============
bdChannelInfo::bdChannelInfo
==============
*/

void __fastcall bdChannelInfo::bdChannelInfo(bdChannelInfo *this, const bdChannelInfo *__that)
{
  ??0bdChannelInfo@@QEAA@AEBV0@@Z(this, __that);
}

/*
==============
bdChannelInfo::deserializeWithCategory
==============
*/

bool __fastcall bdChannelInfo::deserializeWithCategory(bdChannelInfo *this, bdReference<bdByteBuffer> buffer)
{
  return ?deserializeWithCategory@bdChannelInfo@@UEAA_NV?$bdReference@VbdByteBuffer@@@@@Z(this, buffer);
}

/*
==============
bdChannelInfo::sizeOf
==============
*/

unsigned int __fastcall bdChannelInfo::sizeOf(bdChannelInfo *this)
{
  return ?sizeOf@bdChannelInfo@@UEAAIXZ(this);
}

/*
==============
bdChannelInfo::deserialize
==============
*/

bool __fastcall bdChannelInfo::deserialize(bdChannelInfo *this, bdStructBufferDeserializer *deserializer)
{
  return ?deserialize@bdChannelInfo@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, deserializer);
}

/*
==============
bdChannelInfo::deserialize
==============
*/

bool __fastcall bdChannelInfo::deserialize(bdChannelInfo *this, bdReference<bdByteBuffer> buffer)
{
  return ?deserialize@bdChannelInfo@@UEAA_NV?$bdReference@VbdByteBuffer@@@@@Z(this, buffer);
}

/*
==============
bdChannelInfo::reset
==============
*/

void __fastcall bdChannelInfo::reset(bdChannelInfo *this)
{
  ?reset@bdChannelInfo@@QEAAXXZ(this);
}

/*
==============
bdChannelInfo::bdChannelInfo
==============
*/

void __fastcall bdChannelInfo::bdChannelInfo(bdChannelInfo *this)
{
  ??0bdChannelInfo@@QEAA@XZ(this);
}

/*
==============
bdChannelInfo::bdChannelInfo
==============
*/
void bdChannelInfo::bdChannelInfo(bdChannelInfo *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdChannelInfo::`vbtable'{for `bdTaskResult'};
    *((_QWORD *)&this->__vftable + 3) = &bdChannelInfo::`vbtable'{for `bdStructBufferSerializable'};
    *(_QWORD *)(&this->m_dataVersion + 1) = &bdReferencable::`vftable';
    *(&this->m_dataVersion + 3) = 0;
  }
  bdTaskResult::bdTaskResult(this);
  bdStructBufferSerializable::bdStructBufferSerializable((bdStructBufferSerializable *)(&this->__vftable + 2));
  this->__vftable = (bdChannelInfo_vtbl *)&bdChannelInfo::`vftable'{for `bdTaskResult'};
  *((_QWORD *)&this->__vftable + 2) = &bdChannelInfo::`vftable'{for `bdStructBufferSerializable'};
  *(bdChannelInfo_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdChannelInfo_vtbl *)&bdChannelInfo::`vftable'{for `bdReferencable'};
  *(_QWORD *)this->_bytes_20 = 0i64;
  *(_QWORD *)&this->_bytes_20[8] = 0i64;
  this->m_channelID = 0i64;
  *(_QWORD *)&this->m_numSubscribers = 0i64;
  this->m_adminID = 0i64;
  *(_WORD *)&this->m_isPasswordRequired = 0;
  this->m_dataVersion = 0;
}

/*
==============
bdChannelInfo::~bdChannelInfo
==============
*/
void bdChannelInfo::~bdChannelInfo(bdChannelInfo *this)
{
  bdTaskResult *v1; 

  v1 = (bdChannelInfo *)((char *)this - 64);
  *((_QWORD *)&this[-1].__vftable + 2) = &bdChannelInfo::`vftable'{for `bdTaskResult'};
  *(_QWORD *)this[-1]._bytes_20 = &bdChannelInfo::`vftable'{for `bdStructBufferSerializable'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)&this[-1].__vftable + 3) + 4i64) - 72) = &bdChannelInfo::`vftable'{for `bdReferencable'};
  bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)&this[-1].m_channelID);
  bdTaskResult::~bdTaskResult(v1);
}

/*
==============
bdChannelInfo::deserialize
==============
*/
bool bdChannelInfo::deserialize(bdChannelInfo *this, bdStructBufferDeserializer *deserializer)
{
  return bdStructBufferDeserializer::readString(deserializer, 1u, (char *const)&this->__vftable + 16, 0x10u) && bdStructBufferDeserializer::readUInt64(deserializer, 2u, (unsigned __int64 *)this->_bytes_20) && bdStructBufferDeserializer::readUInt32(deserializer, 3u, (unsigned int *)&this->_bytes_20[8]) && bdStructBufferDeserializer::readUInt32(deserializer, 4u, (unsigned int *)&this->_bytes_20[12]) && bdStructBufferDeserializer::readUInt64(deserializer, 5u, &this->m_channelID) && bdStructBufferDeserializer::readBool(deserializer, 6u, (bool *)&this->m_numSubscribers) && bdStructBufferDeserializer::readBool(deserializer, 7u, (bool *)&this->m_numSubscribers + 1) && bdStructBufferDeserializer::readUInt32(deserializer, 8u, &this->m_maxSubscribers);
}

/*
==============
bdChannelInfo::deserialize
==============
*/
_BOOL8 bdChannelInfo::deserialize(bdChannelInfo *this, bdReference<bdByteBuffer> buffer)
{
  bool v4; 

  v4 = bdByteBuffer::readUInt64((bdByteBuffer *)buffer.m_ptr->__vftable, &this->m_channelID) && bdByteBuffer::readUInt32((bdByteBuffer *)buffer.m_ptr->__vftable, &this->m_numSubscribers) && bdByteBuffer::readUInt32((bdByteBuffer *)buffer.m_ptr->__vftable, &this->m_maxSubscribers) && bdByteBuffer::readUInt64((bdByteBuffer *)buffer.m_ptr->__vftable, &this->m_adminID) && bdByteBuffer::readBool((bdByteBuffer *)buffer.m_ptr->__vftable, &this->m_isPasswordRequired) && bdByteBuffer::readBool((bdByteBuffer *)buffer.m_ptr->__vftable, &this->m_isPublicChannel) && bdByteBuffer::readUInt32((bdByteBuffer *)buffer.m_ptr->__vftable, &this->m_dataVersion);
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
bdChannelInfo::deserializeWithCategory
==============
*/
_BOOL8 bdChannelInfo::deserializeWithCategory(bdChannelInfo *this, bdReference<bdByteBuffer> buffer)
{
  bool v4; 

  v4 = bdByteBuffer::readString((bdByteBuffer *)buffer.m_ptr->__vftable, this->_bytes_20, 0x10ui64) && bdByteBuffer::readUInt64((bdByteBuffer *)buffer.m_ptr->__vftable, &this->m_channelID) && bdByteBuffer::readUInt32((bdByteBuffer *)buffer.m_ptr->__vftable, &this->m_numSubscribers) && bdByteBuffer::readUInt32((bdByteBuffer *)buffer.m_ptr->__vftable, &this->m_maxSubscribers) && bdByteBuffer::readUInt64((bdByteBuffer *)buffer.m_ptr->__vftable, &this->m_adminID) && bdByteBuffer::readBool((bdByteBuffer *)buffer.m_ptr->__vftable, &this->m_isPasswordRequired) && bdByteBuffer::readBool((bdByteBuffer *)buffer.m_ptr->__vftable, &this->m_isPublicChannel) && bdByteBuffer::readUInt32((bdByteBuffer *)buffer.m_ptr->__vftable, &this->m_dataVersion);
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
bdChannelInfo::reset
==============
*/
void bdChannelInfo::reset(bdChannelInfo *this)
{
  *(_QWORD *)this->_bytes_20 = 0i64;
  *(_QWORD *)&this->_bytes_20[8] = 0i64;
  this->m_channelID = 0i64;
  *(_QWORD *)&this->m_numSubscribers = 0i64;
  this->m_adminID = 0i64;
  *(_WORD *)&this->m_isPasswordRequired = 0;
  this->m_dataVersion = 0;
}

/*
==============
bdChannelInfo::sizeOf
==============
*/
__int64 bdChannelInfo::sizeOf(bdChannelInfo *this)
{
  return 96i64;
}

/*
==============
bdChannelInfo::bdChannelInfo
==============
*/
void bdChannelInfo::bdChannelInfo(bdChannelInfo *this, const bdChannelInfo *__that, int a3)
{
  if ( a3 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdChannelInfo::`vbtable'{for `bdTaskResult'};
    *((_QWORD *)&this->__vftable + 3) = &bdChannelInfo::`vbtable'{for `bdStructBufferSerializable'};
    bdReferencable::bdReferencable((bdReferencable *)(&this->m_dataVersion + 1), (const bdReferencable *)((char *)&__that->__vftable + *(int *)(*((_QWORD *)&__that->__vftable + 1) + 4i64) + 8));
  }
  bdTaskResult::bdTaskResult(this, __that);
  bdStructBufferSerializable::bdStructBufferSerializable((bdStructBufferSerializable *)(&this->__vftable + 2), (const bdStructBufferSerializable *)(&__that->__vftable + 2));
  this->__vftable = (bdChannelInfo_vtbl *)&bdChannelInfo::`vftable'{for `bdTaskResult'};
  *((_QWORD *)&this->__vftable + 2) = &bdChannelInfo::`vftable'{for `bdStructBufferSerializable'};
  *(bdChannelInfo_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdChannelInfo_vtbl *)&bdChannelInfo::`vftable'{for `bdReferencable'};
  *(_OWORD *)this->_bytes_20 = *(_OWORD *)__that->_bytes_20;
  this->m_channelID = __that->m_channelID;
  this->m_numSubscribers = __that->m_numSubscribers;
  this->m_maxSubscribers = __that->m_maxSubscribers;
  this->m_adminID = __that->m_adminID;
  this->m_isPasswordRequired = __that->m_isPasswordRequired;
  this->m_isPublicChannel = __that->m_isPublicChannel;
  this->m_dataVersion = __that->m_dataVersion;
}

