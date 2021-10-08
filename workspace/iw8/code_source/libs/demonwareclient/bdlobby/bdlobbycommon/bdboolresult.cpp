/*
==============
bdBoolResult::serialize
==============
*/

bool __fastcall bdBoolResult::serialize(bdBoolResult *this, bdByteBuffer *buffer)
{
  return ?serialize@bdBoolResult@@UEBA_NAEAVbdByteBuffer@@@Z(this, buffer);
}

/*
==============
bdBoolResult::sizeOf
==============
*/

unsigned int __fastcall bdBoolResult::sizeOf(bdBoolResult *this)
{
  return ?sizeOf@bdBoolResult@@UEAAIXZ(this);
}

/*
==============
bdBoolResult::bdBoolResult
==============
*/

void __fastcall bdBoolResult::bdBoolResult(bdBoolResult *this)
{
  ??0bdBoolResult@@QEAA@XZ(this);
}

/*
==============
bdBoolResult::deserialize
==============
*/

bool __fastcall bdBoolResult::deserialize(bdBoolResult *this, bdReference<bdByteBuffer> buffer)
{
  return ?deserialize@bdBoolResult@@UEAA_NV?$bdReference@VbdByteBuffer@@@@@Z(this, buffer);
}

/*
==============
bdBoolResult::~bdBoolResult
==============
*/

void __fastcall bdBoolResult::~bdBoolResult(bdBoolResult *this)
{
  ??1bdBoolResult@@UEAA@XZ(this);
}

/*
==============
bdBoolResult::bdBoolResult
==============
*/
void bdBoolResult::bdBoolResult(bdBoolResult *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdBoolResult::`vbtable'{for `bdTaskResult'};
    *((_QWORD *)&this->__vftable + 3) = &bdBoolResult::`vbtable'{for `bdSerializable'};
    *(_QWORD *)&this->_bytes_20[8] = &bdReferencable::`vftable';
    *(_DWORD *)this->gap30 = 0;
  }
  bdTaskResult::bdTaskResult(this);
  bdSerializable::bdSerializable((bdSerializable *)(&this->__vftable + 2));
  this->__vftable = (bdBoolResult_vtbl *)&bdBoolResult::`vftable'{for `bdTaskResult'};
  *((_QWORD *)&this->__vftable + 2) = &bdBoolResult::`vftable'{for `bdSerializable'};
  *(bdBoolResult_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdBoolResult_vtbl *)&bdBoolResult::`vftable'{for `bdReferencable'};
  this->_bytes_20[0] = 0;
}

/*
==============
bdBoolResult::~bdBoolResult
==============
*/
void bdBoolResult::~bdBoolResult(bdBoolResult *this)
{
  bdTaskResult *v1; 

  v1 = (bdBoolResult *)((char *)this - 24);
  *((_QWORD *)&this[-1].__vftable + 2) = &bdBoolResult::`vftable'{for `bdTaskResult'};
  *(_QWORD *)this[-1]._bytes_20 = &bdBoolResult::`vftable'{for `bdSerializable'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)&this[-1].__vftable + 3) + 4i64) - 32) = &bdBoolResult::`vftable'{for `bdReferencable'};
  bdSerializable::~bdSerializable((bdSerializable *)this[-1].gap30);
  bdTaskResult::~bdTaskResult(v1);
}

/*
==============
bdBoolResult::deserialize
==============
*/
_BOOL8 bdBoolResult::deserialize(bdBoolResult *this, bdReference<bdByteBuffer> buffer)
{
  bool Bool; 

  Bool = bdByteBuffer::readBool((bdByteBuffer *)buffer.m_ptr->__vftable, this->_bytes_20);
  if ( buffer.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->allocateBuffer, 0xFFFFFFFF) == 1 )
  {
    if ( buffer.m_ptr->__vftable )
      (*(void (__fastcall **)(bdByteBuffer_vtbl *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr->__vftable, 1i64);
    buffer.m_ptr->__vftable = NULL;
  }
  return Bool;
}

/*
==============
bdBoolResult::serialize
==============
*/
bool bdBoolResult::serialize(bdBoolResult *this, bdByteBuffer *buffer)
{
  return bdByteBuffer::writeBool(buffer, *((_BYTE *)&this->__vftable + 16));
}

/*
==============
bdBoolResult::sizeOf
==============
*/
__int64 bdBoolResult::sizeOf(bdBoolResult *this)
{
  return 56i64;
}

