/*
==============
bdSessionID::bdSessionID
==============
*/

void __fastcall bdSessionID::bdSessionID(bdSessionID *this)
{
  ??0bdSessionID@@QEAA@XZ(this);
}

/*
==============
bdSessionID::bdSessionID
==============
*/

void __fastcall bdSessionID::bdSessionID(bdSessionID *this, const bdSessionID *other)
{
  ??0bdSessionID@@QEAA@AEBV0@@Z(this, other);
}

/*
==============
bdSessionID::sizeOf
==============
*/

unsigned int __fastcall bdSessionID::sizeOf(bdSessionID *this)
{
  return ?sizeOf@bdSessionID@@UEAAIXZ(this);
}

/*
==============
bdSessionID::serialize
==============
*/

bool __fastcall bdSessionID::serialize(bdSessionID *this, bdByteBuffer *buffer)
{
  return ?serialize@bdSessionID@@UEBA_NAEAVbdByteBuffer@@@Z(this, buffer);
}

/*
==============
bdSessionID::deserialize
==============
*/

bool __fastcall bdSessionID::deserialize(bdSessionID *this, bdReference<bdByteBuffer> buffer)
{
  return ?deserialize@bdSessionID@@UEAA_NV?$bdReference@VbdByteBuffer@@@@@Z(this, buffer);
}

/*
==============
bdSessionID::bdSessionID
==============
*/
void bdSessionID::bdSessionID(bdSessionID *this, const bdSessionID *other, int a3)
{
  _RSI = other;
  _RDI = this;
  if ( a3 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdSessionID::`vbtable'{for `bdTaskResult'};
    *((_QWORD *)&this->__vftable + 3) = &bdSessionID::`vbtable'{for `bdSerializable'};
    *(_QWORD *)&this->_bytes_20[8] = &bdReferencable::`vftable';
    *(_DWORD *)this->gap30 = 0;
  }
  bdTaskResult::bdTaskResult(this);
  bdSerializable::bdSerializable((bdSerializable *)(&_RDI->__vftable + 2));
  _RDI->__vftable = (bdSessionID_vtbl *)&bdSessionID::`vftable'{for `bdTaskResult'};
  *((_QWORD *)&_RDI->__vftable + 2) = &bdSessionID::`vftable'{for `bdSerializable'};
  *(bdSessionID_vtbl **)((char *)&_RDI->__vftable + *(int *)(*((_QWORD *)&_RDI->__vftable + 1) + 4i64) + 8) = (bdSessionID_vtbl *)&bdSessionID::`vftable'{for `bdReferencable'};
  bdSecurityID::bdSecurityID((bdSecurityID *)_RDI->_bytes_20);
  __asm
  {
    vmovsd  xmm0, qword ptr [rsi+20h]
    vmovsd  qword ptr [rdi+20h], xmm0
  }
}

/*
==============
bdSessionID::bdSessionID
==============
*/
void bdSessionID::bdSessionID(bdSessionID *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdSessionID::`vbtable'{for `bdTaskResult'};
    *((_QWORD *)&this->__vftable + 3) = &bdSessionID::`vbtable'{for `bdSerializable'};
    *(_QWORD *)&this->_bytes_20[8] = &bdReferencable::`vftable';
    *(_DWORD *)this->gap30 = 0;
  }
  bdTaskResult::bdTaskResult(this);
  bdSerializable::bdSerializable((bdSerializable *)(&this->__vftable + 2));
  this->__vftable = (bdSessionID_vtbl *)&bdSessionID::`vftable'{for `bdTaskResult'};
  *((_QWORD *)&this->__vftable + 2) = &bdSessionID::`vftable'{for `bdSerializable'};
  *(bdSessionID_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdSessionID_vtbl *)&bdSessionID::`vftable'{for `bdReferencable'};
  bdSecurityID::bdSecurityID((bdSecurityID *)this->_bytes_20);
  *(_QWORD *)this->_bytes_20 = 0i64;
}

/*
==============
bdSessionID::deserialize
==============
*/
_BOOL8 bdSessionID::deserialize(bdSessionID *this, bdReference<bdByteBuffer> buffer)
{
  bool v3; 
  unsigned int length; 
  bdByteBuffer *m_ptr; 

  m_ptr = buffer.m_ptr;
  length = 8;
  v3 = bdByteBuffer::readBlob((bdByteBuffer *)buffer.m_ptr->__vftable, this->_bytes_20, &length);
  if ( buffer.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->allocateBuffer, 0xFFFFFFFF) == 1 )
  {
    if ( buffer.m_ptr->__vftable )
      (*(void (__fastcall **)(bdByteBuffer_vtbl *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr->__vftable, 1i64);
    buffer.m_ptr->__vftable = NULL;
  }
  return v3;
}

/*
==============
bdSessionID::serialize
==============
*/
bool bdSessionID::serialize(bdSessionID *this, bdByteBuffer *buffer)
{
  return bdByteBuffer::writeBlob(buffer, &this->__vftable + 2, 8u);
}

/*
==============
bdSessionID::sizeOf
==============
*/
__int64 bdSessionID::sizeOf(bdSessionID *this)
{
  return 56i64;
}

