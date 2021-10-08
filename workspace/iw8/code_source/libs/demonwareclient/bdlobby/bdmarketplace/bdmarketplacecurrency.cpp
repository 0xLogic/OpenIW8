/*
==============
bdMarketplaceCurrency::bdMarketplaceCurrency
==============
*/

void __fastcall bdMarketplaceCurrency::bdMarketplaceCurrency(bdMarketplaceCurrency *this)
{
  ??0bdMarketplaceCurrency@@QEAA@XZ(this);
}

/*
==============
bdMarketplaceCurrency::deserialize
==============
*/

bool __fastcall bdMarketplaceCurrency::deserialize(bdMarketplaceCurrency *this, bdReference<bdByteBuffer> buffer)
{
  return ?deserialize@bdMarketplaceCurrency@@UEAA_NV?$bdReference@VbdByteBuffer@@@@@Z(this, buffer);
}

/*
==============
bdMarketplaceCurrency::reset
==============
*/

void __fastcall bdMarketplaceCurrency::reset(bdMarketplaceCurrency *this)
{
  ?reset@bdMarketplaceCurrency@@QEAAXXZ(this);
}

/*
==============
bdMarketplaceCurrency::bdMarketplaceCurrency
==============
*/

void __fastcall bdMarketplaceCurrency::bdMarketplaceCurrency(bdMarketplaceCurrency *this, const unsigned __int8 currencyId, const unsigned int value)
{
  ??0bdMarketplaceCurrency@@QEAA@EI@Z(this, currencyId, value);
}

/*
==============
bdMarketplaceCurrency::sizeOf
==============
*/

unsigned int __fastcall bdMarketplaceCurrency::sizeOf(bdMarketplaceCurrency *this)
{
  return ?sizeOf@bdMarketplaceCurrency@@UEAAIXZ(this);
}

/*
==============
bdMarketplaceCurrency::serializedSizeOf
==============
*/

int __fastcall bdMarketplaceCurrency::serializedSizeOf(bdMarketplaceCurrency *this)
{
  return ?serializedSizeOf@bdMarketplaceCurrency@@UEBAHXZ(this);
}

/*
==============
bdMarketplaceCurrency::serialize
==============
*/

bool __fastcall bdMarketplaceCurrency::serialize(bdMarketplaceCurrency *this, bdByteBuffer *buffer)
{
  return ?serialize@bdMarketplaceCurrency@@UEBA_NAEAVbdByteBuffer@@@Z(this, buffer);
}

/*
==============
bdMarketplaceCurrency::bdMarketplaceCurrency
==============
*/
void bdMarketplaceCurrency::bdMarketplaceCurrency(bdMarketplaceCurrency *this, const unsigned __int8 currencyId, const unsigned int value, int a4)
{
  if ( a4 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdMarketplaceCurrency::`vbtable'{for `bdTaskResult'};
    *((_QWORD *)&this->__vftable + 3) = &bdMarketplaceCurrency::`vbtable'{for `bdSerializable'};
    *(_QWORD *)&this->_bytes_20[8] = &bdReferencable::`vftable';
    *(_DWORD *)this->gap30 = 0;
  }
  bdTaskResult::bdTaskResult(this);
  bdSerializable::bdSerializable((bdSerializable *)(&this->__vftable + 2));
  this->__vftable = (bdMarketplaceCurrency_vtbl *)&bdMarketplaceCurrency::`vftable'{for `bdTaskResult'};
  *((_QWORD *)&this->__vftable + 2) = &bdMarketplaceCurrency::`vftable'{for `bdSerializable'};
  *(bdMarketplaceCurrency_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdMarketplaceCurrency_vtbl *)&bdMarketplaceCurrency::`vftable'{for `bdReferencable'};
  this->_bytes_20[0] = currencyId;
  *(_DWORD *)&this->_bytes_20[4] = value;
}

/*
==============
bdMarketplaceCurrency::bdMarketplaceCurrency
==============
*/
void bdMarketplaceCurrency::bdMarketplaceCurrency(bdMarketplaceCurrency *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdMarketplaceCurrency::`vbtable'{for `bdTaskResult'};
    *((_QWORD *)&this->__vftable + 3) = &bdMarketplaceCurrency::`vbtable'{for `bdSerializable'};
    *(_QWORD *)&this->_bytes_20[8] = &bdReferencable::`vftable';
    *(_DWORD *)this->gap30 = 0;
  }
  bdTaskResult::bdTaskResult(this);
  bdSerializable::bdSerializable((bdSerializable *)(&this->__vftable + 2));
  this->__vftable = (bdMarketplaceCurrency_vtbl *)&bdMarketplaceCurrency::`vftable'{for `bdTaskResult'};
  *((_QWORD *)&this->__vftable + 2) = &bdMarketplaceCurrency::`vftable'{for `bdSerializable'};
  *(bdMarketplaceCurrency_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdMarketplaceCurrency_vtbl *)&bdMarketplaceCurrency::`vftable'{for `bdReferencable'};
  this->_bytes_20[0] = 0;
  *(_DWORD *)&this->_bytes_20[4] = 0;
}

/*
==============
bdMarketplaceCurrency::deserialize
==============
*/
_BOOL8 bdMarketplaceCurrency::deserialize(bdMarketplaceCurrency *this, bdReference<bdByteBuffer> buffer)
{
  bool v4; 

  v4 = bdByteBuffer::readUByte8((bdByteBuffer *)buffer.m_ptr->__vftable, this->_bytes_20) && bdByteBuffer::readUInt32((bdByteBuffer *)buffer.m_ptr->__vftable, (unsigned int *)&this->_bytes_20[4]);
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
bdMarketplaceCurrency::reset
==============
*/
void bdMarketplaceCurrency::reset(bdMarketplaceCurrency *this)
{
  this->_bytes_20[0] = 0;
  *(_DWORD *)&this->_bytes_20[4] = 0;
}

/*
==============
bdMarketplaceCurrency::serialize
==============
*/
bool bdMarketplaceCurrency::serialize(bdMarketplaceCurrency *this, bdByteBuffer *buffer)
{
  return bdByteBuffer::writeUByte8(buffer, *((_BYTE *)&this->__vftable + 16)) && bdByteBuffer::writeUInt32(buffer, *((_DWORD *)&this->__vftable + 5));
}

/*
==============
bdMarketplaceCurrency::serializedSizeOf
==============
*/
__int64 bdMarketplaceCurrency::serializedSizeOf(bdMarketplaceCurrency *this)
{
  return 7i64;
}

/*
==============
bdMarketplaceCurrency::sizeOf
==============
*/
__int64 bdMarketplaceCurrency::sizeOf(bdMarketplaceCurrency *this)
{
  return 56i64;
}

