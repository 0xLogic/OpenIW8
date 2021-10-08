/*
==============
bdFileID::serialize
==============
*/

bool __fastcall bdFileID::serialize(bdFileID *this, bdByteBuffer *buffer)
{
  return ?serialize@bdFileID@@UEBA_NAEAVbdByteBuffer@@@Z(this, buffer);
}

/*
==============
bdFileID::sizeOf
==============
*/

unsigned int __fastcall bdFileID::sizeOf(bdFileID *this)
{
  return ?sizeOf@bdFileID@@UEAAIXZ(this);
}

/*
==============
bdFileID::~bdFileID
==============
*/

void __fastcall bdFileID::~bdFileID(bdFileID *this)
{
  ??1bdFileID@@UEAA@XZ(this);
}

/*
==============
bdFileID::deserialize
==============
*/

bool __fastcall bdFileID::deserialize(bdFileID *this, bdReference<bdByteBuffer> buffer)
{
  return ?deserialize@bdFileID@@UEAA_NV?$bdReference@VbdByteBuffer@@@@@Z(this, buffer);
}

/*
==============
printInfo
==============
*/

void __fastcall printInfo(const bdFileID *fileID, char *buf, const unsigned int length)
{
  ?printInfo@@YAXAEBVbdFileID@@PEADI@Z(fileID, buf, length);
}

/*
==============
bdFileID::bdFileID
==============
*/

void __fastcall bdFileID::bdFileID(bdFileID *this)
{
  ??0bdFileID@@QEAA@XZ(this);
}

/*
==============
bdFileID::bdFileID
==============
*/
void bdFileID::bdFileID(bdFileID *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdFileID::`vbtable'{for `bdTaskResult'};
    *((_QWORD *)&this->__vftable + 3) = &bdFileID::`vbtable'{for `bdSerializable'};
    *(_QWORD *)&this->_bytes_20[8] = &bdReferencable::`vftable';
    *(_DWORD *)this->gap30 = 0;
  }
  bdTaskResult::bdTaskResult(this);
  bdSerializable::bdSerializable((bdSerializable *)(&this->__vftable + 2));
  this->__vftable = (bdFileID_vtbl *)&bdFileID::`vftable'{for `bdTaskResult'};
  *((_QWORD *)&this->__vftable + 2) = &bdFileID::`vftable'{for `bdSerializable'};
  *(bdFileID_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdFileID_vtbl *)&bdFileID::`vftable'{for `bdReferencable'};
  *(_QWORD *)this->_bytes_20 = 0i64;
}

/*
==============
bdFileID::~bdFileID
==============
*/
void bdFileID::~bdFileID(bdFileID *this)
{
  bdTaskResult *v1; 

  v1 = (bdFileID *)((char *)this - 24);
  *((_QWORD *)&this[-1].__vftable + 2) = &bdFileID::`vftable'{for `bdTaskResult'};
  *(_QWORD *)this[-1]._bytes_20 = &bdFileID::`vftable'{for `bdSerializable'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)&this[-1].__vftable + 3) + 4i64) - 32) = &bdFileID::`vftable'{for `bdReferencable'};
  bdSerializable::~bdSerializable((bdSerializable *)this[-1].gap30);
  bdTaskResult::~bdTaskResult(v1);
}

/*
==============
bdFileID::deserialize
==============
*/
_BOOL8 bdFileID::deserialize(bdFileID *this, bdReference<bdByteBuffer> buffer)
{
  bool UInt64; 

  UInt64 = bdByteBuffer::readUInt64((bdByteBuffer *)buffer.m_ptr->__vftable, (unsigned __int64 *)this->_bytes_20);
  if ( buffer.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->allocateBuffer, 0xFFFFFFFF) == 1 )
  {
    if ( buffer.m_ptr->__vftable )
      (*(void (__fastcall **)(bdByteBuffer_vtbl *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr->__vftable, 1i64);
    buffer.m_ptr->__vftable = NULL;
  }
  return UInt64;
}

/*
==============
printInfo
==============
*/
void printInfo(const bdFileID *fileID, char *buf, const unsigned int length)
{
  if ( length )
    bdSnprintf(buf, length, "FileID : %I64d", *(_QWORD *)fileID->_bytes_20);
}

/*
==============
bdFileID::serialize
==============
*/
bool bdFileID::serialize(bdFileID *this, bdByteBuffer *buffer)
{
  return bdByteBuffer::writeUInt64(buffer, *((_QWORD *)&this->__vftable + 2));
}

/*
==============
bdFileID::sizeOf
==============
*/
__int64 bdFileID::sizeOf(bdFileID *this)
{
  return 56i64;
}

