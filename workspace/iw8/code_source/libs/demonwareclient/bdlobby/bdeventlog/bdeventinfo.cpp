/*
==============
bdEventInfo::serialize
==============
*/

bool __fastcall bdEventInfo::serialize(bdEventInfo *this, bdByteBuffer *buffer)
{
  return ?serialize@bdEventInfo@@UEBA_NAEAVbdByteBuffer@@@Z(this, buffer);
}

/*
==============
bdEventInfo::bdEventInfo
==============
*/

void __fastcall bdEventInfo::bdEventInfo(bdEventInfo *this)
{
  ??0bdEventInfo@@QEAA@XZ(this);
}

/*
==============
bdEventInfo::sizeOf
==============
*/

unsigned int __fastcall bdEventInfo::sizeOf(bdEventInfo *this)
{
  return ?sizeOf@bdEventInfo@@UEAAIXZ(this);
}

/*
==============
bdEventInfo::~bdEventInfo
==============
*/

void __fastcall bdEventInfo::~bdEventInfo(bdEventInfo *this)
{
  ??1bdEventInfo@@UEAA@XZ(this);
}

/*
==============
bdEventInfo::deserialize
==============
*/

bool __fastcall bdEventInfo::deserialize(bdEventInfo *this, bdReference<bdByteBuffer> buffer)
{
  return ?deserialize@bdEventInfo@@UEAA_NV?$bdReference@VbdByteBuffer@@@@@Z(this, buffer);
}

/*
==============
bdEventInfo::bdEventInfo
==============
*/
void bdEventInfo::bdEventInfo(bdEventInfo *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdEventInfo::`vbtable'{for `bdTaskResult'};
    *((_QWORD *)&this->__vftable + 3) = &bdEventInfo::`vbtable'{for `bdSerializable'};
    *(_QWORD *)this->gap38 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap38[8] = 0;
  }
  bdTaskResult::bdTaskResult(this);
  bdSerializable::bdSerializable((bdSerializable *)(&this->__vftable + 2));
  this->__vftable = (bdEventInfo_vtbl *)&bdEventInfo::`vftable'{for `bdTaskResult'};
  *((_QWORD *)&this->__vftable + 2) = &bdEventInfo::`vftable'{for `bdSerializable'};
  *(bdEventInfo_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdEventInfo_vtbl *)&bdEventInfo::`vftable'{for `bdReferencable'};
  this->_bytes_20[0] = 0;
  *(_QWORD *)&this->_bytes_20[4] = 0i64;
  this->m_eventDesc = NULL;
}

/*
==============
bdEventInfo::~bdEventInfo
==============
*/
void bdEventInfo::~bdEventInfo(bdEventInfo *this)
{
  bdTaskResult *v1; 

  v1 = (bdEventInfo *)((char *)this - 40);
  *((_QWORD *)&this[-1].__vftable + 2) = &bdEventInfo::`vftable'{for `bdTaskResult'};
  *(_QWORD *)this[-1]._bytes_20 = &bdEventInfo::`vftable'{for `bdSerializable'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)&this[-1].__vftable + 3) + 4i64) - 48) = &bdEventInfo::`vftable'{for `bdReferencable'};
  bdSerializable::~bdSerializable((bdSerializable *)&this[-1].m_eventDesc);
  bdTaskResult::~bdTaskResult(v1);
}

/*
==============
bdEventInfo::deserialize
==============
*/
_BOOL8 bdEventInfo::deserialize(bdEventInfo *this, bdReference<bdByteBuffer> buffer)
{
  bool v4; 
  unsigned __int8 *m_eventDesc; 
  bdByteBuffer *v6; 

  v4 = bdByteBuffer::readUInt32((bdByteBuffer *)buffer.m_ptr->__vftable, (unsigned int *)&this->_bytes_20[4]) && bdByteBuffer::readBool((bdByteBuffer *)buffer.m_ptr->__vftable, this->_bytes_20);
  m_eventDesc = this->m_eventDesc;
  v6 = (bdByteBuffer *)buffer.m_ptr->__vftable;
  if ( this->_bytes_20[0] )
    bdByteBuffer::readBlob(v6, m_eventDesc, (unsigned int *)&this->_bytes_20[8]);
  else
    bdByteBuffer::readString(v6, (char *const)m_eventDesc, *(unsigned int *)&this->_bytes_20[8]);
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
bdEventInfo::serialize
==============
*/
bool bdEventInfo::serialize(bdEventInfo *this, bdByteBuffer *buffer)
{
  bool v4; 

  v4 = bdByteBuffer::writeUInt32(buffer, *((_DWORD *)&this->__vftable + 5)) && bdByteBuffer::writeBool(buffer, *((_BYTE *)&this->__vftable + 16));
  if ( *((_BYTE *)&this->__vftable + 16) )
  {
    if ( !v4 )
      return 0;
    return bdByteBuffer::writeBlob(buffer, *(const void *const *)this->_bytes_20, *((_DWORD *)&this->__vftable + 6));
  }
  else
  {
    if ( !v4 )
      return 0;
    return bdByteBuffer::writeString(buffer, *(const char *const *)this->_bytes_20, *((unsigned int *)&this->__vftable + 6));
  }
}

/*
==============
bdEventInfo::sizeOf
==============
*/
__int64 bdEventInfo::sizeOf(bdEventInfo *this)
{
  return 72i64;
}

