/*
==============
bdMarketplacePlayerCurrencyV2::bdMarketplacePlayerCurrencyV2
==============
*/

void __fastcall bdMarketplacePlayerCurrencyV2::bdMarketplacePlayerCurrencyV2(bdMarketplacePlayerCurrencyV2 *this)
{
  ??0bdMarketplacePlayerCurrencyV2@@QEAA@XZ(this);
}

/*
==============
bdMarketplacePlayerCurrencyV2::deserialize
==============
*/

bool __fastcall bdMarketplacePlayerCurrencyV2::deserialize(bdMarketplacePlayerCurrencyV2 *this, bdStructBufferDeserializer *deserializer)
{
  return ?deserialize@bdMarketplacePlayerCurrencyV2@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, deserializer);
}

/*
==============
bdMarketplacePlayerCurrencyV2::getBalance
==============
*/

__int64 __fastcall bdMarketplacePlayerCurrencyV2::getBalance(bdMarketplacePlayerCurrencyV2 *this)
{
  return ?getBalance@bdMarketplacePlayerCurrencyV2@@QEAA_JXZ(this);
}

/*
==============
bdMarketplacePlayerCurrencyV2::bdMarketplacePlayerCurrencyV2
==============
*/

void __fastcall bdMarketplacePlayerCurrencyV2::bdMarketplacePlayerCurrencyV2(bdMarketplacePlayerCurrencyV2 *this, const bdStructUserAccountID *playerId, const unsigned __int8 currencyId, const __int64 amount, const unsigned __int16 collisionField)
{
  ??0bdMarketplacePlayerCurrencyV2@@QEAA@VbdStructUserAccountID@@E_JG@Z(this, playerId, currencyId, amount, collisionField);
}

/*
==============
bdMarketplacePlayerCurrencyV2::serialize
==============
*/

bool __fastcall bdMarketplacePlayerCurrencyV2::serialize(bdMarketplacePlayerCurrencyV2 *this, bdStructBufferSerializer *serializer)
{
  return ?serialize@bdMarketplacePlayerCurrencyV2@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, serializer);
}

/*
==============
bdMarketplacePlayerCurrencyV2::setBalance
==============
*/

void __fastcall bdMarketplacePlayerCurrencyV2::setBalance(bdMarketplacePlayerCurrencyV2 *this, __int64 value)
{
  ?setBalance@bdMarketplacePlayerCurrencyV2@@QEAAX_J@Z(this, value);
}

/*
==============
bdMarketplacePlayerCurrencyV2::reset
==============
*/

void __fastcall bdMarketplacePlayerCurrencyV2::reset(bdMarketplacePlayerCurrencyV2 *this)
{
  ?reset@bdMarketplacePlayerCurrencyV2@@QEAAXXZ(this);
}

/*
==============
bdMarketplacePlayerCurrencyV2::bdMarketplacePlayerCurrencyV2
==============
*/
void bdMarketplacePlayerCurrencyV2::bdMarketplacePlayerCurrencyV2(bdMarketplacePlayerCurrencyV2 *this, const bdStructUserAccountID *playerId, const unsigned __int8 currencyId, const __int64 amount, const unsigned __int16 collisionField, int a6)
{
  if ( a6 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdMarketplacePlayerCurrencyV2::`vbtable';
    *(_QWORD *)this->gap80 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap80[8] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdMarketplacePlayerCurrencyV2_vtbl *)&bdMarketplacePlayerCurrencyV2::`vftable'{for `bdStructBufferSerializable'};
  *(bdMarketplacePlayerCurrencyV2_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdMarketplacePlayerCurrencyV2_vtbl *)&bdMarketplacePlayerCurrencyV2::`vftable'{for `bdReferencable'};
  bdStructUserAccountID::bdStructUserAccountID((bdStructUserAccountID *)(&this->__vftable + 2), playerId);
  this->m_currencyId = currencyId;
  this->m_collisionField = collisionField;
  this->m_signedBalance = amount;
  if ( amount >= 0 )
  {
    if ( amount > 4294967294i64 )
      LODWORD(amount) = -2;
    this->m_value = amount;
  }
  else
  {
    this->m_value = 0;
  }
  bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)playerId->_bytes_48);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)playerId->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)playerId->_bytes_48);
}

/*
==============
bdMarketplacePlayerCurrencyV2::bdMarketplacePlayerCurrencyV2
==============
*/
void bdMarketplacePlayerCurrencyV2::bdMarketplacePlayerCurrencyV2(bdMarketplacePlayerCurrencyV2 *this, int a2)
{
  unsigned __int64 other[3]; 
  bdStructUserAccountID v4; 

  other[1] = -2i64;
  other[2] = (unsigned __int64)this;
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdMarketplacePlayerCurrencyV2::`vbtable';
    *(_QWORD *)this->gap80 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap80[8] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdMarketplacePlayerCurrencyV2_vtbl *)&bdMarketplacePlayerCurrencyV2::`vftable'{for `bdStructBufferSerializable'};
  *(bdMarketplacePlayerCurrencyV2_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdMarketplacePlayerCurrencyV2_vtbl *)&bdMarketplacePlayerCurrencyV2::`vftable'{for `bdReferencable'};
  bdStructUserAccountID::bdStructUserAccountID((bdStructUserAccountID *)(&this->__vftable + 2));
  other[0] = -1i64;
  bdStructUserAccountID::bdStructUserAccountID(&v4, other);
  bdUserAccountID::operator=((bdUserAccountID *)(&this->__vftable + 2), &v4);
  bdReferencable::operator=((bdReferencable *)&this->m_playerId[*(int *)(*(_QWORD *)&this->m_playerId[48] + 4i64) + 48], (const bdReferencable *)&v4.gap38[*(int *)(*(_QWORD *)&v4.gap38[8] + 4i64) + 8]);
  bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)v4._bytes_48);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)v4.gap38);
  bdReferencable::~bdReferencable((bdReferencable *)v4._bytes_48);
  this->m_currencyId = 0;
  this->m_value = 0;
  this->m_collisionField = 0;
  this->m_signedBalance = 0i64;
}

/*
==============
bdMarketplacePlayerCurrencyV2::deserialize
==============
*/
bool bdMarketplacePlayerCurrencyV2::deserialize(bdMarketplacePlayerCurrencyV2 *this, bdStructBufferDeserializer *deserializer)
{
  return bdStructBufferDeserializer::readObject(deserializer, 1u, (bdStructBufferSerializable *)&this->m_playerId[40]) && bdStructBufferDeserializer::readUByte8(deserializer, 2u, &this->m_currencyId) && bdStructBufferDeserializer::readUInt32(deserializer, 3u, &this->m_value) && bdStructBufferDeserializer::readUInt16(deserializer, 4u, &this->m_collisionField) && bdStructBufferDeserializer::readInt64(deserializer, 5u, &this->m_signedBalance);
}

/*
==============
bdMarketplacePlayerCurrencyV2::getBalance
==============
*/
__int64 bdMarketplacePlayerCurrencyV2::getBalance(bdMarketplacePlayerCurrencyV2 *this)
{
  return this->m_signedBalance;
}

/*
==============
bdMarketplacePlayerCurrencyV2::reset
==============
*/
void bdMarketplacePlayerCurrencyV2::reset(bdMarketplacePlayerCurrencyV2 *this)
{
  unsigned __int64 other[2]; 
  bdStructUserAccountID v3; 

  other[1] = -2i64;
  other[0] = -1i64;
  bdStructUserAccountID::bdStructUserAccountID(&v3, other);
  bdUserAccountID::operator=((bdUserAccountID *)(&this->__vftable + 2), &v3);
  bdReferencable::operator=((bdReferencable *)&this->m_playerId[*(int *)(*(_QWORD *)&this->m_playerId[48] + 4i64) + 48], (const bdReferencable *)&v3.gap38[*(int *)(*(_QWORD *)&v3.gap38[8] + 4i64) + 8]);
  bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)v3._bytes_48);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)v3.gap38);
  bdReferencable::~bdReferencable((bdReferencable *)v3._bytes_48);
  this->m_currencyId = 0;
  this->m_value = 0;
  this->m_collisionField = 0;
  this->m_signedBalance = 0i64;
}

/*
==============
bdMarketplacePlayerCurrencyV2::serialize
==============
*/
bool bdMarketplacePlayerCurrencyV2::serialize(bdMarketplacePlayerCurrencyV2 *this, bdStructBufferSerializer *serializer)
{
  return bdStructBufferSerializer::writeObject(serializer, 1u, (const bdStructBufferSerializable *)&this->m_playerId[40]) && bdStructBufferSerializer::writeUByte8(serializer, 2u, this->m_currencyId) && bdStructBufferSerializer::writeUInt32(serializer, 3u, this->m_value) && bdStructBufferSerializer::writeUInt16(serializer, 4u, this->m_collisionField) && bdStructBufferSerializer::writeInt64(serializer, 5u, this->m_signedBalance);
}

/*
==============
bdMarketplacePlayerCurrencyV2::setBalance
==============
*/
void bdMarketplacePlayerCurrencyV2::setBalance(bdMarketplacePlayerCurrencyV2 *this, __int64 value)
{
  this->m_signedBalance = value;
  this->m_value = -1;
}

