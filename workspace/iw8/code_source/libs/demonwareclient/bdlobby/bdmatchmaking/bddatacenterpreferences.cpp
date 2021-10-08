/*
==============
bdDataCenterPreferences::deserialize
==============
*/

bool __fastcall bdDataCenterPreferences::deserialize(bdDataCenterPreferences *this, bdReference<bdByteBuffer> buffer)
{
  return ?deserialize@bdDataCenterPreferences@@UEAA_NV?$bdReference@VbdByteBuffer@@@@@Z(this, buffer);
}

/*
==============
bdDataCenterPreferences::serialize
==============
*/

bool __fastcall bdDataCenterPreferences::serialize(bdDataCenterPreferences *this, bdByteBuffer *__formal)
{
  return ?serialize@bdDataCenterPreferences@@UEBA_NAEAVbdByteBuffer@@@Z(this, __formal);
}

/*
==============
bdDataCenterPreferences::sizeOf
==============
*/

unsigned int __fastcall bdDataCenterPreferences::sizeOf(bdDataCenterPreferences *this)
{
  return ?sizeOf@bdDataCenterPreferences@@UEAAIXZ(this);
}

/*
==============
bdDataCenterPreferences::~bdDataCenterPreferences
==============
*/

void __fastcall bdDataCenterPreferences::~bdDataCenterPreferences(bdDataCenterPreferences *this)
{
  ??1bdDataCenterPreferences@@UEAA@XZ(this);
}

/*
==============
bdDataCenterPreferences::bdDataCenterPreferences
==============
*/

void __fastcall bdDataCenterPreferences::bdDataCenterPreferences(bdDataCenterPreferences *this)
{
  ??0bdDataCenterPreferences@@QEAA@XZ(this);
}

/*
==============
bdDataCenterPreferences::bdDataCenterPreferences
==============
*/
void bdDataCenterPreferences::bdDataCenterPreferences(bdDataCenterPreferences *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdDataCenterPreferences::`vbtable'{for `bdTaskResult'};
    *((_QWORD *)&this->__vftable + 3) = &bdDataCenterPreferences::`vbtable'{for `bdSerializable'};
    *(_QWORD *)&this->gap1024[4] = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap1024[12] = 0;
  }
  bdTaskResult::bdTaskResult(this);
  bdSerializable::bdSerializable((bdSerializable *)(&this->__vftable + 2));
  this->__vftable = (bdDataCenterPreferences_vtbl *)&bdDataCenterPreferences::`vftable'{for `bdTaskResult'};
  *((_QWORD *)&this->__vftable + 2) = &bdDataCenterPreferences::`vftable'{for `bdSerializable'};
  *(bdDataCenterPreferences_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdDataCenterPreferences_vtbl *)&bdDataCenterPreferences::`vftable'{for `bdReferencable'};
}

/*
==============
bdDataCenterPreferences::~bdDataCenterPreferences
==============
*/
void bdDataCenterPreferences::~bdDataCenterPreferences(bdDataCenterPreferences *this)
{
  bdTaskResult *v1; 

  v1 = (bdDataCenterPreferences *)((char *)this - 4120);
  *((_QWORD *)&this[-1].__vftable + 2) = &bdDataCenterPreferences::`vftable'{for `bdTaskResult'};
  *(_QWORD *)this[-1]._bytes_20 = &bdDataCenterPreferences::`vftable'{for `bdSerializable'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)&this[-1].__vftable + 3) + 4i64) - 4128) = &bdDataCenterPreferences::`vftable'{for `bdReferencable'};
  bdSerializable::~bdSerializable((bdSerializable *)this[-1].m_dataCenterPreferences);
  bdTaskResult::~bdTaskResult(v1);
}

/*
==============
bdDataCenterPreferences::deserialize
==============
*/
_BOOL8 bdDataCenterPreferences::deserialize(bdDataCenterPreferences *this, bdReference<bdByteBuffer> buffer)
{
  bool v4; 
  unsigned int i; 

  v4 = 1;
  bdByteBuffer::readArrayStart((bdByteBuffer *)buffer.m_ptr->__vftable, 0x10u, &this->m_numDataCenterPreferences);
  for ( i = 0; i < this->m_numDataCenterPreferences; ++i )
    v4 = v4 && bdByteBuffer::readString((bdByteBuffer *)buffer.m_ptr->__vftable, &this->_bytes_20[64 * (unsigned __int64)i], 0x40ui64);
  bdByteBuffer::readArrayEnd((bdByteBuffer *)buffer.m_ptr->__vftable);
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
bdDataCenterPreferences::serialize
==============
*/
bool bdDataCenterPreferences::serialize(bdDataCenterPreferences *this, bdByteBuffer *__formal)
{
  bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmatchmaking\\bddatacenterpreferences.cpp", "bdDataCenterPreferences::serialize", 0x19u, "NOT IMPLEMENTED");
  return 0;
}

/*
==============
bdDataCenterPreferences::sizeOf
==============
*/
__int64 bdDataCenterPreferences::sizeOf(bdDataCenterPreferences *this)
{
  return 4152i64;
}

