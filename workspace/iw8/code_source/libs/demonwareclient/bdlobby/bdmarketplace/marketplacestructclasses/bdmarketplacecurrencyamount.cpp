/*
==============
bdMarketplaceCurrencyAmount::bdMarketplaceCurrencyAmount
==============
*/

void __fastcall bdMarketplaceCurrencyAmount::bdMarketplaceCurrencyAmount(bdMarketplaceCurrencyAmount *this)
{
  ??0bdMarketplaceCurrencyAmount@@QEAA@XZ(this);
}

/*
==============
bdMarketplaceCurrencyAmount::bdMarketplaceCurrencyAmount
==============
*/

void __fastcall bdMarketplaceCurrencyAmount::bdMarketplaceCurrencyAmount(bdMarketplaceCurrencyAmount *this, const unsigned __int8 currencyId, const __int64 amount, const unsigned __int16 collisionField)
{
  ??0bdMarketplaceCurrencyAmount@@QEAA@E_JG@Z(this, currencyId, amount, collisionField);
}

/*
==============
bdMarketplaceCurrencyAmount::reset
==============
*/

void __fastcall bdMarketplaceCurrencyAmount::reset(bdMarketplaceCurrencyAmount *this)
{
  ?reset@bdMarketplaceCurrencyAmount@@QEAAXXZ(this);
}

/*
==============
bdMarketplaceCurrencyAmount::getCurrencyID
==============
*/

unsigned __int8 __fastcall bdMarketplaceCurrencyAmount::getCurrencyID(bdMarketplaceCurrencyAmount *this)
{
  return ?getCurrencyID@bdMarketplaceCurrencyAmount@@QEAAEXZ(this);
}

/*
==============
bdMarketplaceCurrencyAmount::deserialize
==============
*/

bool __fastcall bdMarketplaceCurrencyAmount::deserialize(bdMarketplaceCurrencyAmount *this, bdStructBufferDeserializer *deserializer)
{
  return ?deserialize@bdMarketplaceCurrencyAmount@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, deserializer);
}

/*
==============
bdMarketplaceCurrencyAmount::setAmount
==============
*/

void __fastcall bdMarketplaceCurrencyAmount::setAmount(bdMarketplaceCurrencyAmount *this, __int64 amount)
{
  ?setAmount@bdMarketplaceCurrencyAmount@@QEAAX_J@Z(this, amount);
}

/*
==============
bdMarketplaceCurrencyAmount::getAmount
==============
*/

__int64 __fastcall bdMarketplaceCurrencyAmount::getAmount(bdMarketplaceCurrencyAmount *this)
{
  return ?getAmount@bdMarketplaceCurrencyAmount@@QEAA_JXZ(this);
}

/*
==============
bdMarketplaceCurrencyAmount::serialize
==============
*/

bool __fastcall bdMarketplaceCurrencyAmount::serialize(bdMarketplaceCurrencyAmount *this, bdStructBufferSerializer *serializer)
{
  return ?serialize@bdMarketplaceCurrencyAmount@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, serializer);
}

/*
==============
bdMarketplaceCurrencyAmount::bdMarketplaceCurrencyAmount
==============
*/
void bdMarketplaceCurrencyAmount::bdMarketplaceCurrencyAmount(bdMarketplaceCurrencyAmount *this, const unsigned __int8 currencyId, const __int64 amount, const unsigned __int16 collisionField, int a5)
{
  if ( a5 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdMarketplaceCurrencyAmount::`vbtable';
    *(_QWORD *)&this->gap22[6] = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap22[14] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdMarketplaceCurrencyAmount_vtbl *)&bdMarketplaceCurrencyAmount::`vftable'{for `bdStructBufferSerializable'};
  *(bdMarketplaceCurrencyAmount_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdMarketplaceCurrencyAmount_vtbl *)&bdMarketplaceCurrencyAmount::`vftable'{for `bdReferencable'};
  *((_BYTE *)&this->__vftable + 16) = currencyId;
  *((_QWORD *)&this->__vftable + 3) = amount;
  this->m_collisionField = collisionField;
}

/*
==============
bdMarketplaceCurrencyAmount::bdMarketplaceCurrencyAmount
==============
*/
void bdMarketplaceCurrencyAmount::bdMarketplaceCurrencyAmount(bdMarketplaceCurrencyAmount *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdMarketplaceCurrencyAmount::`vbtable';
    *(_QWORD *)&this->gap22[6] = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap22[14] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdMarketplaceCurrencyAmount_vtbl *)&bdMarketplaceCurrencyAmount::`vftable'{for `bdStructBufferSerializable'};
  *(bdMarketplaceCurrencyAmount_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdMarketplaceCurrencyAmount_vtbl *)&bdMarketplaceCurrencyAmount::`vftable'{for `bdReferencable'};
  *((_BYTE *)&this->__vftable + 16) = 0;
  *((_QWORD *)&this->__vftable + 3) = 0i64;
  this->m_collisionField = 0;
}

/*
==============
bdMarketplaceCurrencyAmount::deserialize
==============
*/
bool bdMarketplaceCurrencyAmount::deserialize(bdMarketplaceCurrencyAmount *this, bdStructBufferDeserializer *deserializer)
{
  return bdStructBufferDeserializer::readUByte8(deserializer, 1u, (unsigned __int8 *)&this->__vftable + 16) && bdStructBufferDeserializer::readInt64(deserializer, 2u, (__int64 *)&this->__vftable + 3) && bdStructBufferDeserializer::readUInt16(deserializer, 3u, &this->m_collisionField);
}

/*
==============
bdMarketplaceCurrencyAmount::getAmount
==============
*/
__int64 bdMarketplaceCurrencyAmount::getAmount(bdMarketplaceCurrencyAmount *this)
{
  return *((_QWORD *)&this->__vftable + 3);
}

/*
==============
bdMarketplaceCurrencyAmount::getCurrencyID
==============
*/
__int64 bdMarketplaceCurrencyAmount::getCurrencyID(bdMarketplaceCurrencyAmount *this)
{
  return *((unsigned __int8 *)&this->__vftable + 16);
}

/*
==============
bdMarketplaceCurrencyAmount::reset
==============
*/
void bdMarketplaceCurrencyAmount::reset(bdMarketplaceCurrencyAmount *this)
{
  *((_BYTE *)&this->__vftable + 16) = 0;
  *((_QWORD *)&this->__vftable + 3) = 0i64;
  this->m_collisionField = 0;
}

/*
==============
bdMarketplaceCurrencyAmount::serialize
==============
*/
bool bdMarketplaceCurrencyAmount::serialize(bdMarketplaceCurrencyAmount *this, bdStructBufferSerializer *serializer)
{
  return bdStructBufferSerializer::writeUByte8(serializer, 1u, *((_BYTE *)&this->__vftable + 16)) && bdStructBufferSerializer::writeInt64(serializer, 2u, *((_QWORD *)&this->__vftable + 3)) && bdStructBufferSerializer::writeUInt16(serializer, 3u, this->m_collisionField);
}

/*
==============
bdMarketplaceCurrencyAmount::setAmount
==============
*/
void bdMarketplaceCurrencyAmount::setAmount(bdMarketplaceCurrencyAmount *this, __int64 amount)
{
  *((_QWORD *)&this->__vftable + 3) = amount;
}

