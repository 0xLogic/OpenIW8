/*
==============
bdStringResult::sizeOf
==============
*/

unsigned int __fastcall bdStringResult::sizeOf(bdStringResult *this)
{
  return ?sizeOf@bdStringResult@@UEAAIXZ(this);
}

/*
==============
bdStringResult::serialize
==============
*/

bool __fastcall bdStringResult::serialize(bdStringResult *this, bdByteBuffer *buffer)
{
  return ?serialize@bdStringResult@@UEBA_NAEAVbdByteBuffer@@@Z(this, buffer);
}

/*
==============
bdStringResult::deserialize
==============
*/

bool __fastcall bdStringResult::deserialize(bdStringResult *this, bdReference<bdByteBuffer> buffer)
{
  return ?deserialize@bdStringResult@@UEAA_NV?$bdReference@VbdByteBuffer@@@@@Z(this, buffer);
}

/*
==============
bdStringResult::bdStringResult
==============
*/

void __fastcall bdStringResult::bdStringResult(bdStringResult *this, char *result, unsigned int length)
{
  ??0bdStringResult@@QEAA@PEADI@Z(this, result, length);
}

/*
==============
bdStringResult::bdStringResult
==============
*/

void __fastcall bdStringResult::bdStringResult(bdStringResult *this)
{
  ??0bdStringResult@@QEAA@XZ(this);
}

/*
==============
bdStringResult::~bdStringResult
==============
*/

void __fastcall bdStringResult::~bdStringResult(bdStringResult *this)
{
  ??1bdStringResult@@UEAA@XZ(this);
}

/*
==============
bdStringResult::bdStringResult
==============
*/
void bdStringResult::bdStringResult(bdStringResult *this, char *result, unsigned int length, int a4)
{
  if ( a4 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdStringResult::`vbtable'{for `bdTaskResult'};
    *((_QWORD *)&this->__vftable + 3) = &bdStringResult::`vbtable'{for `bdSerializable'};
    *(_QWORD *)&this->_bytes_20[16] = &bdReferencable::`vftable';
    *(_DWORD *)&this->_bytes_20[24] = 0;
  }
  bdTaskResult::bdTaskResult(this);
  bdSerializable::bdSerializable((bdSerializable *)(&this->__vftable + 2));
  this->__vftable = (bdStringResult_vtbl *)&bdStringResult::`vftable'{for `bdTaskResult'};
  *((_QWORD *)&this->__vftable + 2) = &bdStringResult::`vftable'{for `bdSerializable'};
  *(bdStringResult_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdStringResult_vtbl *)&bdStringResult::`vftable'{for `bdReferencable'};
  *(_QWORD *)this->_bytes_20 = result;
  *(_DWORD *)&this->_bytes_20[8] = length;
}

/*
==============
bdStringResult::bdStringResult
==============
*/
void bdStringResult::bdStringResult(bdStringResult *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdStringResult::`vbtable'{for `bdTaskResult'};
    *((_QWORD *)&this->__vftable + 3) = &bdStringResult::`vbtable'{for `bdSerializable'};
    *(_QWORD *)&this->_bytes_20[16] = &bdReferencable::`vftable';
    *(_DWORD *)&this->_bytes_20[24] = 0;
  }
  bdTaskResult::bdTaskResult(this);
  bdSerializable::bdSerializable((bdSerializable *)(&this->__vftable + 2));
  this->__vftable = (bdStringResult_vtbl *)&bdStringResult::`vftable'{for `bdTaskResult'};
  *((_QWORD *)&this->__vftable + 2) = &bdStringResult::`vftable'{for `bdSerializable'};
  *(bdStringResult_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdStringResult_vtbl *)&bdStringResult::`vftable'{for `bdReferencable'};
  *(_QWORD *)this->_bytes_20 = 0i64;
  *(_DWORD *)&this->_bytes_20[8] = 0;
}

/*
==============
bdStringResult::~bdStringResult
==============
*/
void bdStringResult::~bdStringResult(bdStringResult *this)
{
  bdTaskResult *v1; 

  v1 = (bdStringResult *)((char *)this - 32);
  *((_QWORD *)&this[-1].__vftable + 2) = &bdStringResult::`vftable'{for `bdTaskResult'};
  *(_QWORD *)this[-1]._bytes_20 = &bdStringResult::`vftable'{for `bdSerializable'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)&this[-1].__vftable + 3) + 4i64) - 40) = &bdStringResult::`vftable'{for `bdReferencable'};
  bdSerializable::~bdSerializable((bdSerializable *)&this[-1]._bytes_20[16]);
  bdTaskResult::~bdTaskResult(v1);
}

/*
==============
bdStringResult::deserialize
==============
*/
_BOOL8 bdStringResult::deserialize(bdStringResult *this, bdReference<bdByteBuffer> buffer)
{
  bool String; 

  String = bdByteBuffer::readString((bdByteBuffer *)buffer.m_ptr->__vftable, *(char *const *)this->_bytes_20, *(unsigned int *)&this->_bytes_20[8]);
  if ( buffer.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->allocateBuffer, 0xFFFFFFFF) == 1 )
  {
    if ( buffer.m_ptr->__vftable )
      (*(void (__fastcall **)(bdByteBuffer_vtbl *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr->__vftable, 1i64);
    buffer.m_ptr->__vftable = NULL;
  }
  return String;
}

/*
==============
bdStringResult::serialize
==============
*/
bool bdStringResult::serialize(bdStringResult *this, bdByteBuffer *buffer)
{
  return bdByteBuffer::writeString(buffer, *((const char *const *)&this->__vftable + 2), *((unsigned int *)&this->__vftable + 6));
}

/*
==============
bdStringResult::sizeOf
==============
*/
__int64 bdStringResult::sizeOf(bdStringResult *this)
{
  return *(unsigned int *)&this->_bytes_20[8];
}

