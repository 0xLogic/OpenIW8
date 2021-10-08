/*
==============
bdRewardEvent::deserialize
==============
*/

bool __fastcall bdRewardEvent::deserialize(bdRewardEvent *this, bdReference<bdByteBuffer> buffer)
{
  return ?deserialize@bdRewardEvent@@UEAA_NV?$bdReference@VbdByteBuffer@@@@@Z(this, buffer);
}

/*
==============
bdRewardEvent::serialize
==============
*/

bool __fastcall bdRewardEvent::serialize(bdRewardEvent *this, bdByteBuffer *buffer)
{
  return ?serialize@bdRewardEvent@@UEBA_NAEAVbdByteBuffer@@@Z(this, buffer);
}

/*
==============
bdRewardEvent::bdRewardEvent
==============
*/

void __fastcall bdRewardEvent::bdRewardEvent(bdRewardEvent *this, bdRewardEvent::bdRewardEventTypes type)
{
  ??0bdRewardEvent@@IEAA@W4bdRewardEventTypes@0@@Z(this, type);
}

/*
==============
bdRewardEvent::getType
==============
*/

bdRewardEvent::bdRewardEventTypes __fastcall bdRewardEvent::getType(bdRewardEvent *this)
{
  return ?getType@bdRewardEvent@@QEBA?AW4bdRewardEventTypes@1@XZ(this);
}

/*
==============
bdRewardEvent::~bdRewardEvent
==============
*/

void __fastcall bdRewardEvent::~bdRewardEvent(bdRewardEvent *this)
{
  ??1bdRewardEvent@@MEAA@XZ(this);
}

/*
==============
bdRewardEvent::bdRewardEvent
==============
*/
void bdRewardEvent::bdRewardEvent(bdRewardEvent *this, bdRewardEvent::bdRewardEventTypes type)
{
  bdTaskResult::bdTaskResult(this);
  bdSerializable::bdSerializable((bdSerializable *)(&this->__vftable + 2));
  this->__vftable = (bdRewardEvent_vtbl *)&bdRewardEvent::`vftable'{for `bdTaskResult'};
  *((_QWORD *)&this->__vftable + 2) = &bdRewardEvent::`vftable'{for `bdSerializable'};
  *(bdRewardEvent_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdRewardEvent_vtbl *)&bdRewardEvent::`vftable'{for `bdReferencable'};
  *(_DWORD *)this->_bytes_20 = type;
}

/*
==============
bdRewardEvent::~bdRewardEvent
==============
*/
void bdRewardEvent::~bdRewardEvent(bdRewardEvent *this)
{
  bdTaskResult *v1; 

  v1 = (bdRewardEvent *)((char *)this - 24);
  *((_QWORD *)&this[-1].__vftable + 2) = &bdRewardEvent::`vftable'{for `bdTaskResult'};
  *(_QWORD *)this[-1]._bytes_20 = &bdRewardEvent::`vftable'{for `bdSerializable'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)&this[-1].__vftable + 3) + 4i64) - 32) = &bdRewardEvent::`vftable'{for `bdReferencable'};
  bdSerializable::~bdSerializable((bdSerializable *)this[-1].gap30);
  bdTaskResult::~bdTaskResult(v1);
}

/*
==============
bdRewardEvent::deserialize
==============
*/
_BOOL8 bdRewardEvent::deserialize(bdRewardEvent *this, bdReference<bdByteBuffer> buffer)
{
  bool v4; 
  int i; 
  bdByteBuffer *m_ptr; 

  m_ptr = buffer.m_ptr;
  i = 0;
  v4 = bdByteBuffer::readInt32((bdByteBuffer *)buffer.m_ptr->__vftable, &i);
  *(_DWORD *)this->_bytes_20 = i;
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
bdRewardEvent::getType
==============
*/
__int64 bdRewardEvent::getType(bdRewardEvent *this)
{
  return *(unsigned int *)this->_bytes_20;
}

/*
==============
bdRewardEvent::serialize
==============
*/
bool bdRewardEvent::serialize(bdRewardEvent *this, bdByteBuffer *buffer)
{
  return bdByteBuffer::writeInt32(buffer, *((_DWORD *)&this->__vftable + 4));
}

