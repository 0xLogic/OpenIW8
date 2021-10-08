/*
==============
bdTag::deserialize
==============
*/

bool __fastcall bdTag::deserialize(bdTag *this, bdReference<bdByteBuffer> buffer)
{
  return ?deserialize@bdTag@@UEAA_NV?$bdReference@VbdByteBuffer@@@@@Z(this, buffer);
}

/*
==============
bdTag::set
==============
*/

void __fastcall bdTag::set(bdTag *this, unsigned __int64 priTag, unsigned __int64 secTag)
{
  ?set@bdTag@@QEAAX_K0@Z(this, priTag, secTag);
}

/*
==============
bdTag::bdTag
==============
*/

void __fastcall bdTag::bdTag(bdTag *this)
{
  ??0bdTag@@QEAA@XZ(this);
}

/*
==============
bdTag::isSerializable
==============
*/

bool __fastcall bdTag::isSerializable(bdTag *this)
{
  return ?isSerializable@bdTag@@UEBA_NXZ(this);
}

/*
==============
bdTag::~bdTag
==============
*/

void __fastcall bdTag::~bdTag(bdTag *this)
{
  ??1bdTag@@UEAA@XZ(this);
}

/*
==============
bdTag::serialize
==============
*/

bool __fastcall bdTag::serialize(bdTag *this, bdByteBuffer *buffer)
{
  return ?serialize@bdTag@@UEBA_NAEAVbdByteBuffer@@@Z(this, buffer);
}

/*
==============
bdTag::sizeOf
==============
*/

unsigned int __fastcall bdTag::sizeOf(bdTag *this)
{
  return ?sizeOf@bdTag@@UEAAIXZ(this);
}

/*
==============
bdTag::bdTag
==============
*/

void __fastcall bdTag::bdTag(bdTag *this, unsigned __int64 priTag, unsigned __int64 secTag)
{
  ??0bdTag@@QEAA@_K0@Z(this, priTag, secTag);
}

/*
==============
bdTag::bdTag
==============
*/
void bdTag::bdTag(bdTag *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdTag::`vbtable'{for `bdTaskResult'};
    *((_QWORD *)&this->__vftable + 3) = &bdTag::`vbtable'{for `bdSerializable'};
    *(_QWORD *)&this->_bytes_20[16] = &bdReferencable::`vftable';
    *(_DWORD *)&this->_bytes_20[24] = 0;
  }
  bdTaskResult::bdTaskResult(this);
  bdSerializable::bdSerializable((bdSerializable *)(&this->__vftable + 2));
  this->__vftable = (bdTag_vtbl *)&bdTag::`vftable'{for `bdTaskResult'};
  *((_QWORD *)&this->__vftable + 2) = &bdTag::`vftable'{for `bdSerializable'};
  *(bdTag_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdTag_vtbl *)&bdTag::`vftable'{for `bdReferencable'};
  *(_QWORD *)this->_bytes_20 = 0i64;
  *(_QWORD *)&this->_bytes_20[8] = 0i64;
}

/*
==============
bdTag::bdTag
==============
*/
void bdTag::bdTag(bdTag *this, unsigned __int64 priTag, unsigned __int64 secTag, int a4)
{
  if ( a4 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdTag::`vbtable'{for `bdTaskResult'};
    *((_QWORD *)&this->__vftable + 3) = &bdTag::`vbtable'{for `bdSerializable'};
    *(_QWORD *)&this->_bytes_20[16] = &bdReferencable::`vftable';
    *(_DWORD *)&this->_bytes_20[24] = 0;
  }
  bdTaskResult::bdTaskResult(this);
  bdSerializable::bdSerializable((bdSerializable *)(&this->__vftable + 2));
  this->__vftable = (bdTag_vtbl *)&bdTag::`vftable'{for `bdTaskResult'};
  *((_QWORD *)&this->__vftable + 2) = &bdTag::`vftable'{for `bdSerializable'};
  *(bdTag_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdTag_vtbl *)&bdTag::`vftable'{for `bdReferencable'};
  *(_QWORD *)this->_bytes_20 = priTag;
  *(_QWORD *)&this->_bytes_20[8] = secTag;
}

/*
==============
bdTag::~bdTag
==============
*/
void bdTag::~bdTag(bdTag *this)
{
  bdTaskResult *v1; 

  v1 = (bdTag *)((char *)this - 32);
  *((_QWORD *)&this[-1].__vftable + 2) = &bdTag::`vftable'{for `bdTaskResult'};
  *(_QWORD *)this[-1]._bytes_20 = &bdTag::`vftable'{for `bdSerializable'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)&this[-1].__vftable + 3) + 4i64) - 40) = &bdTag::`vftable'{for `bdReferencable'};
  bdSerializable::~bdSerializable((bdSerializable *)&this[-1]._bytes_20[16]);
  bdTaskResult::~bdTaskResult(v1);
}

/*
==============
bdTag::deserialize
==============
*/
_BOOL8 bdTag::deserialize(bdTag *this, bdReference<bdByteBuffer> buffer)
{
  bool v4; 

  v4 = bdByteBuffer::readUInt64((bdByteBuffer *)buffer.m_ptr->__vftable, (unsigned __int64 *)this->_bytes_20) && bdByteBuffer::readUInt64((bdByteBuffer *)buffer.m_ptr->__vftable, (unsigned __int64 *)&this->_bytes_20[8]);
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
bdTag::isSerializable
==============
*/
bool bdTag::isSerializable(bdTag *this)
{
  return *(_QWORD *)this->_bytes_20 != -1i64 && *(_QWORD *)&this->_bytes_20[8] != -1i64;
}

/*
==============
bdTag::serialize
==============
*/
bool bdTag::serialize(bdTag *this, bdByteBuffer *buffer)
{
  return bdByteBuffer::writeUInt64(buffer, *((_QWORD *)&this->__vftable + 2)) && bdByteBuffer::writeUInt64(buffer, *((_QWORD *)&this->__vftable + 3));
}

/*
==============
bdTag::set
==============
*/
void bdTag::set(bdTag *this, unsigned __int64 priTag, unsigned __int64 secTag)
{
  *(_QWORD *)this->_bytes_20 = priTag;
  *(_QWORD *)&this->_bytes_20[8] = secTag;
}

/*
==============
bdTag::sizeOf
==============
*/
__int64 bdTag::sizeOf(bdTag *this)
{
  return 64i64;
}

