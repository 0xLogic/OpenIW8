/*
==============
bdTimeStamp::bdTimeStamp
==============
*/

void __fastcall bdTimeStamp::bdTimeStamp(bdTimeStamp *this)
{
  ??0bdTimeStamp@@QEAA@XZ(this);
}

/*
==============
bdTimeStamp::sizeOf
==============
*/

unsigned int __fastcall bdTimeStamp::sizeOf(bdTimeStamp *this)
{
  return ?sizeOf@bdTimeStamp@@UEAAIXZ(this);
}

/*
==============
bdTimeStamp::deserialize
==============
*/

bool __fastcall bdTimeStamp::deserialize(bdTimeStamp *this, bdReference<bdByteBuffer> buffer)
{
  return ?deserialize@bdTimeStamp@@UEAA_NV?$bdReference@VbdByteBuffer@@@@@Z(this, buffer);
}

/*
==============
bdTimeStamp::bdTimeStamp
==============
*/
void bdTimeStamp::bdTimeStamp(bdTimeStamp *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdTimeStamp::`vbtable';
    *((_QWORD *)&this->__vftable + 3) = &bdReferencable::`vftable';
    *(_DWORD *)this->gap20 = 0;
  }
  bdTaskResult::bdTaskResult(this);
  this->__vftable = (bdTimeStamp_vtbl *)&bdTimeStamp::`vftable'{for `bdTaskResult'};
  *(bdTimeStamp_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdTimeStamp_vtbl *)&bdTimeStamp::`vftable'{for `bdReferencable'};
  *((_DWORD *)&this->__vftable + 4) = 0;
}

/*
==============
bdTimeStamp::deserialize
==============
*/
_BOOL8 bdTimeStamp::deserialize(bdTimeStamp *this, bdReference<bdByteBuffer> buffer)
{
  bool UInt32; 

  UInt32 = bdByteBuffer::readUInt32((bdByteBuffer *)buffer.m_ptr->__vftable, (unsigned int *)&this->__vftable + 4);
  if ( buffer.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->allocateBuffer, 0xFFFFFFFF) == 1 )
  {
    if ( buffer.m_ptr->__vftable )
      (*(void (__fastcall **)(bdByteBuffer_vtbl *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr->__vftable, 1i64);
    buffer.m_ptr->__vftable = NULL;
  }
  return UInt32;
}

/*
==============
bdTimeStamp::sizeOf
==============
*/
__int64 bdTimeStamp::sizeOf(bdTimeStamp *this)
{
  return 40i64;
}

