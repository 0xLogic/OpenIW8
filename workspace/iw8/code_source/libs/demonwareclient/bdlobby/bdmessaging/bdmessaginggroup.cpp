/*
==============
bdMessagingGroup::serialize
==============
*/

bool __fastcall bdMessagingGroup::serialize(bdMessagingGroup *this, bdByteBuffer *buffer)
{
  return ?serialize@bdMessagingGroup@@UEBA_NAEAVbdByteBuffer@@@Z(this, buffer);
}

/*
==============
bdMessagingGroup::sizeOf
==============
*/

unsigned int __fastcall bdMessagingGroup::sizeOf(bdMessagingGroup *this)
{
  return ?sizeOf@bdMessagingGroup@@UEAAIXZ(this);
}

/*
==============
bdMessagingGroup::~bdMessagingGroup
==============
*/

void __fastcall bdMessagingGroup::~bdMessagingGroup(bdMessagingGroup *this)
{
  ??1bdMessagingGroup@@UEAA@XZ(this);
}

/*
==============
bdMessagingGroup::bdMessagingGroup
==============
*/

void __fastcall bdMessagingGroup::bdMessagingGroup(bdMessagingGroup *this)
{
  ??0bdMessagingGroup@@QEAA@XZ(this);
}

/*
==============
bdMessagingGroup::deserialize
==============
*/

bool __fastcall bdMessagingGroup::deserialize(bdMessagingGroup *this, bdReference<bdByteBuffer> buffer)
{
  return ?deserialize@bdMessagingGroup@@UEAA_NV?$bdReference@VbdByteBuffer@@@@@Z(this, buffer);
}

/*
==============
bdMessagingGroup::bdMessagingGroup
==============
*/

void __fastcall bdMessagingGroup::bdMessagingGroup(bdMessagingGroup *this, unsigned __int8 category, unsigned __int64 groupID)
{
  ??0bdMessagingGroup@@QEAA@E_K@Z(this, category, groupID);
}

/*
==============
bdMessagingGroup::bdMessagingGroup
==============
*/
void bdMessagingGroup::bdMessagingGroup(bdMessagingGroup *this, unsigned __int8 category, unsigned __int64 groupID, int a4)
{
  if ( a4 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdMessagingGroup::`vbtable'{for `bdTaskResult'};
    *((_QWORD *)&this->__vftable + 3) = &bdMessagingGroup::`vbtable'{for `bdSerializable'};
    *(_QWORD *)&this->_bytes_20[16] = &bdReferencable::`vftable';
    *(_DWORD *)&this->_bytes_20[24] = 0;
  }
  bdTaskResult::bdTaskResult(this);
  bdSerializable::bdSerializable((bdSerializable *)(&this->__vftable + 2));
  this->__vftable = (bdMessagingGroup_vtbl *)&bdMessagingGroup::`vftable'{for `bdTaskResult'};
  *((_QWORD *)&this->__vftable + 2) = &bdMessagingGroup::`vftable'{for `bdSerializable'};
  *(bdMessagingGroup_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdMessagingGroup_vtbl *)&bdMessagingGroup::`vftable'{for `bdReferencable'};
  this->_bytes_20[0] = category;
  *(_QWORD *)&this->_bytes_20[8] = groupID;
}

/*
==============
bdMessagingGroup::bdMessagingGroup
==============
*/
void bdMessagingGroup::bdMessagingGroup(bdMessagingGroup *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdMessagingGroup::`vbtable'{for `bdTaskResult'};
    *((_QWORD *)&this->__vftable + 3) = &bdMessagingGroup::`vbtable'{for `bdSerializable'};
    *(_QWORD *)&this->_bytes_20[16] = &bdReferencable::`vftable';
    *(_DWORD *)&this->_bytes_20[24] = 0;
  }
  bdTaskResult::bdTaskResult(this);
  bdSerializable::bdSerializable((bdSerializable *)(&this->__vftable + 2));
  this->__vftable = (bdMessagingGroup_vtbl *)&bdMessagingGroup::`vftable'{for `bdTaskResult'};
  *((_QWORD *)&this->__vftable + 2) = &bdMessagingGroup::`vftable'{for `bdSerializable'};
  *(bdMessagingGroup_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdMessagingGroup_vtbl *)&bdMessagingGroup::`vftable'{for `bdReferencable'};
  this->_bytes_20[0] = -1;
  *(_QWORD *)&this->_bytes_20[8] = 0i64;
}

/*
==============
bdMessagingGroup::~bdMessagingGroup
==============
*/
void bdMessagingGroup::~bdMessagingGroup(bdMessagingGroup *this)
{
  bdTaskResult *v1; 

  v1 = (bdMessagingGroup *)((char *)this - 32);
  *((_QWORD *)&this[-1].__vftable + 2) = &bdMessagingGroup::`vftable'{for `bdTaskResult'};
  *(_QWORD *)this[-1]._bytes_20 = &bdMessagingGroup::`vftable'{for `bdSerializable'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)&this[-1].__vftable + 3) + 4i64) - 40) = &bdMessagingGroup::`vftable'{for `bdReferencable'};
  bdSerializable::~bdSerializable((bdSerializable *)&this[-1]._bytes_20[16]);
  bdTaskResult::~bdTaskResult(v1);
}

/*
==============
bdMessagingGroup::deserialize
==============
*/
_BOOL8 bdMessagingGroup::deserialize(bdMessagingGroup *this, bdReference<bdByteBuffer> buffer)
{
  bool v4; 

  v4 = bdByteBuffer::readUByte8((bdByteBuffer *)buffer.m_ptr->__vftable, this->_bytes_20) && bdByteBuffer::readUInt64((bdByteBuffer *)buffer.m_ptr->__vftable, (unsigned __int64 *)&this->_bytes_20[8]);
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
bdMessagingGroup::serialize
==============
*/
bool bdMessagingGroup::serialize(bdMessagingGroup *this, bdByteBuffer *buffer)
{
  return bdByteBuffer::writeUByte8(buffer, *((_BYTE *)&this->__vftable + 16)) && bdByteBuffer::writeUInt64(buffer, *((_QWORD *)&this->__vftable + 3));
}

/*
==============
bdMessagingGroup::sizeOf
==============
*/
__int64 bdMessagingGroup::sizeOf(bdMessagingGroup *this)
{
  return 64i64;
}

