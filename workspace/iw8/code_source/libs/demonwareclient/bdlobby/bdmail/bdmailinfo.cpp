/*
==============
bdMailInfo::bdMailInfo
==============
*/

void __fastcall bdMailInfo::bdMailInfo(bdMailInfo *this)
{
  ??0bdMailInfo@@QEAA@XZ(this);
}

/*
==============
bdMailInfo::~bdMailInfo
==============
*/

void __fastcall bdMailInfo::~bdMailInfo(bdMailInfo *this)
{
  ??1bdMailInfo@@UEAA@XZ(this);
}

/*
==============
bdMailInfo::sizeOf
==============
*/

unsigned int __fastcall bdMailInfo::sizeOf(bdMailInfo *this)
{
  return ?sizeOf@bdMailInfo@@UEAAIXZ(this);
}

/*
==============
bdMailInfo::deserialize
==============
*/

bool __fastcall bdMailInfo::deserialize(bdMailInfo *this, bdReference<bdByteBuffer> buffer)
{
  return ?deserialize@bdMailInfo@@UEAA_NV?$bdReference@VbdByteBuffer@@@@@Z(this, buffer);
}

/*
==============
bdMailInfo::bdMailInfo
==============
*/
void bdMailInfo::bdMailInfo(bdMailInfo *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdMailInfo::`vbtable';
    *(_QWORD *)this->gapB8 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gapB8[8] = 0;
  }
  bdTaskResult::bdTaskResult(this);
  this->__vftable = (bdMailInfo_vtbl *)&bdMailInfo::`vftable'{for `bdTaskResult'};
  *(bdMailInfo_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdMailInfo_vtbl *)&bdMailInfo::`vftable'{for `bdReferencable'};
  bdUserAccountID::bdUserAccountID((bdUserAccountID *)(&this->__vftable + 2));
}

/*
==============
bdMailInfo::~bdMailInfo
==============
*/
void bdMailInfo::~bdMailInfo(bdMailInfo *this)
{
  *((_QWORD *)&this[-1].__vftable + 2) = &bdMailInfo::`vftable'{for `bdTaskResult'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)&this[-1].__vftable + 3) + 4i64) - 176) = &bdMailInfo::`vftable'{for `bdReferencable'};
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)this[-1].m_senderName);
  bdReferencable::~bdReferencable((bdReferencable *)this[-1].m_senderName);
  bdTaskResult::~bdTaskResult((bdMailInfo *)((char *)this - 168));
}

/*
==============
bdMailInfo::deserialize
==============
*/
_BOOL8 bdMailInfo::deserialize(bdMailInfo *this, bdReference<bdByteBuffer> buffer)
{
  bdByteBuffer *v4; 
  bool v5; 
  bdReference<bdByteBuffer> buffera; 
  bdByteBuffer *m_ptr; 

  m_ptr = buffer.m_ptr;
  v4 = (bdByteBuffer *)buffer.m_ptr->__vftable;
  buffera.m_ptr = v4;
  if ( v4 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v4->m_refCount, 1u);
  v5 = ContextSerialization::readUserID((bdReference<bdByteBuffer>)&buffera, (bdUserAccountID *)(&this->__vftable + 2)) && bdByteBuffer::readString((bdByteBuffer *)buffer.m_ptr->__vftable, this->m_senderName, 0x40ui64) && bdByteBuffer::readUInt64((bdByteBuffer *)buffer.m_ptr->__vftable, &this->m_mailID) && bdByteBuffer::readUInt32((bdByteBuffer *)buffer.m_ptr->__vftable, &this->m_timeStamp) && bdByteBuffer::readUInt32((bdByteBuffer *)buffer.m_ptr->__vftable, &this->m_size) && bdByteBuffer::readUInt16((bdByteBuffer *)buffer.m_ptr->__vftable, &this->m_mailCategory) && bdByteBuffer::readBool((bdByteBuffer *)buffer.m_ptr->__vftable, &this->m_isRead) && bdByteBuffer::readBool((bdByteBuffer *)buffer.m_ptr->__vftable, &this->m_isUndelivered) && bdByteBuffer::readUInt32((bdByteBuffer *)buffer.m_ptr->__vftable, &this->m_lastUpdated) && bdByteBuffer::readUInt32((bdByteBuffer *)buffer.m_ptr->__vftable, &this->m_messageDuration) && bdByteBuffer::readUInt32((bdByteBuffer *)buffer.m_ptr->__vftable, &this->m_secondsToExpiration);
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
bdMailInfo::sizeOf
==============
*/
__int64 bdMailInfo::sizeOf(bdMailInfo *this)
{
  return 200i64;
}

