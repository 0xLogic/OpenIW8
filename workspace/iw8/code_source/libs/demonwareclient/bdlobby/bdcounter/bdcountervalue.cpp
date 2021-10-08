/*
==============
bdCounterValue::deserialize
==============
*/

bool __fastcall bdCounterValue::deserialize(bdCounterValue *this, bdReference<bdByteBuffer> buffer)
{
  return ?deserialize@bdCounterValue@@UEAA_NV?$bdReference@VbdByteBuffer@@@@@Z(this, buffer);
}

/*
==============
bdCounterValue::serialize
==============
*/

bool __fastcall bdCounterValue::serialize(bdCounterValue *this, bdByteBuffer *buffer)
{
  return ?serialize@bdCounterValue@@UEBA_NAEAVbdByteBuffer@@@Z(this, buffer);
}

/*
==============
bdCounterValue::bdCounterValue
==============
*/

void __fastcall bdCounterValue::bdCounterValue(bdCounterValue *this)
{
  ??0bdCounterValue@@QEAA@XZ(this);
}

/*
==============
bdCounterValue::sizeOf
==============
*/

unsigned int __fastcall bdCounterValue::sizeOf(bdCounterValue *this)
{
  return ?sizeOf@bdCounterValue@@UEAAIXZ(this);
}

/*
==============
bdCounterValue::bdCounterValue
==============
*/
void bdCounterValue::bdCounterValue(bdCounterValue *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdCounterValue::`vbtable'{for `bdTaskResult'};
    *((_QWORD *)&this->__vftable + 3) = &bdCounterValue::`vbtable'{for `bdSerializable'};
    *(_QWORD *)&this->_bytes_20[16] = &bdReferencable::`vftable';
    *(_DWORD *)&this->_bytes_20[24] = 0;
  }
  bdTaskResult::bdTaskResult(this);
  bdSerializable::bdSerializable((bdSerializable *)(&this->__vftable + 2));
  this->__vftable = (bdCounterValue_vtbl *)&bdCounterValue::`vftable'{for `bdTaskResult'};
  *((_QWORD *)&this->__vftable + 2) = &bdCounterValue::`vftable'{for `bdSerializable'};
  *(bdCounterValue_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdCounterValue_vtbl *)&bdCounterValue::`vftable'{for `bdReferencable'};
  *(_DWORD *)this->_bytes_20 = 0;
  *(_QWORD *)&this->_bytes_20[8] = 0i64;
}

/*
==============
bdCounterValue::deserialize
==============
*/
_BOOL8 bdCounterValue::deserialize(bdCounterValue *this, bdReference<bdByteBuffer> buffer)
{
  bool v4; 

  v4 = bdByteBuffer::readUInt32((bdByteBuffer *)buffer.m_ptr->__vftable, (unsigned int *)this->_bytes_20) && bdByteBuffer::readInt64((bdByteBuffer *)buffer.m_ptr->__vftable, (__int64 *)&this->_bytes_20[8]);
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
bdCounterValue::serialize
==============
*/
bool bdCounterValue::serialize(bdCounterValue *this, bdByteBuffer *buffer)
{
  return bdByteBuffer::writeUInt32(buffer, *((_DWORD *)&this->__vftable + 4)) && bdByteBuffer::writeInt64(buffer, *((_QWORD *)&this->__vftable + 3));
}

/*
==============
bdCounterValue::sizeOf
==============
*/
__int64 bdCounterValue::sizeOf(bdCounterValue *this)
{
  return 64i64;
}

