/*
==============
bdUInt64Result::~bdUInt64Result
==============
*/

void __fastcall bdUInt64Result::~bdUInt64Result(bdUInt64Result *this)
{
  ??1bdUInt64Result@@UEAA@XZ(this);
}

/*
==============
bdUInt64Result::deserialize
==============
*/

bool __fastcall bdUInt64Result::deserialize(bdUInt64Result *this, bdReference<bdByteBuffer> buffer)
{
  return ?deserialize@bdUInt64Result@@UEAA_NV?$bdReference@VbdByteBuffer@@@@@Z(this, buffer);
}

/*
==============
bdUInt64Result::bdUInt64Result
==============
*/

void __fastcall bdUInt64Result::bdUInt64Result(bdUInt64Result *this)
{
  ??0bdUInt64Result@@QEAA@XZ(this);
}

/*
==============
bdUInt64Result::sizeOf
==============
*/

unsigned int __fastcall bdUInt64Result::sizeOf(bdUInt64Result *this)
{
  return ?sizeOf@bdUInt64Result@@UEAAIXZ(this);
}

/*
==============
bdUInt64Result::bdUInt64Result
==============
*/
void bdUInt64Result::bdUInt64Result(bdUInt64Result *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdUInt64Result::`vbtable';
    *((_QWORD *)&this->__vftable + 3) = &bdReferencable::`vftable';
    *(_DWORD *)this->gap20 = 0;
  }
  bdTaskResult::bdTaskResult(this);
  this->__vftable = (bdUInt64Result_vtbl *)&bdUInt64Result::`vftable'{for `bdTaskResult'};
  *(bdUInt64Result_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdUInt64Result_vtbl *)&bdUInt64Result::`vftable'{for `bdReferencable'};
  *((_QWORD *)&this->__vftable + 2) = 0i64;
}

/*
==============
bdUInt64Result::~bdUInt64Result
==============
*/
void bdUInt64Result::~bdUInt64Result(bdUInt64Result *this)
{
  *((_QWORD *)&this[-1].__vftable + 2) = &bdUInt64Result::`vftable'{for `bdTaskResult'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)&this[-1].__vftable + 3) + 4i64) - 16) = &bdUInt64Result::`vftable'{for `bdReferencable'};
  bdTaskResult::~bdTaskResult((bdUInt64Result *)((char *)this - 8));
}

/*
==============
bdUInt64Result::deserialize
==============
*/
_BOOL8 bdUInt64Result::deserialize(bdUInt64Result *this, bdReference<bdByteBuffer> buffer)
{
  bool UInt64; 

  UInt64 = bdByteBuffer::readUInt64((bdByteBuffer *)buffer.m_ptr->__vftable, (unsigned __int64 *)&this->__vftable + 2);
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
bdUInt64Result::sizeOf
==============
*/
__int64 bdUInt64Result::sizeOf(bdUInt64Result *this)
{
  return 40i64;
}

