/*
==============
bdRedeemCodeGrantedItem::toString
==============
*/

bdString *__fastcall bdRedeemCodeGrantedItem::toString(bdRedeemCodeGrantedItem *this, bdString *result)
{
  return ?toString@bdRedeemCodeGrantedItem@@QEBA?AVbdString@@XZ(this, result);
}

/*
==============
bdRedeemCodeGrantedItem::bdRedeemCodeGrantedItem
==============
*/

void __fastcall bdRedeemCodeGrantedItem::bdRedeemCodeGrantedItem(bdRedeemCodeGrantedItem *this, const bdRedeemCodeGrantedItem *copy)
{
  ??0bdRedeemCodeGrantedItem@@QEAA@AEBV0@@Z(this, copy);
}

/*
==============
bdRedeemCodeGrantedItem::operator=
==============
*/

bdRedeemCodeGrantedItem *__fastcall bdRedeemCodeGrantedItem::operator=(bdRedeemCodeGrantedItem *this, const bdRedeemCodeGrantedItem *copy)
{
  return ??4bdRedeemCodeGrantedItem@@QEAAAEAV0@AEBV0@@Z(this, copy);
}

/*
==============
bdRedeemCodeGrantedItem::bdRedeemCodeGrantedItem
==============
*/

void __fastcall bdRedeemCodeGrantedItem::bdRedeemCodeGrantedItem(bdRedeemCodeGrantedItem *this)
{
  ??0bdRedeemCodeGrantedItem@@QEAA@XZ(this);
}

/*
==============
bdRedeemCodeGrantedItem::reset
==============
*/

void __fastcall bdRedeemCodeGrantedItem::reset(bdRedeemCodeGrantedItem *this)
{
  ?reset@bdRedeemCodeGrantedItem@@AEAAXXZ(this);
}

/*
==============
bdRedeemCodeGrantedItem::serialize
==============
*/

bool __fastcall bdRedeemCodeGrantedItem::serialize(bdRedeemCodeGrantedItem *this, bdStructBufferSerializer *__formal)
{
  return ?serialize@bdRedeemCodeGrantedItem@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, __formal);
}

/*
==============
bdRedeemCodeGrantedItem::copyFrom
==============
*/

void __fastcall bdRedeemCodeGrantedItem::copyFrom(bdRedeemCodeGrantedItem *this, const bdRedeemCodeGrantedItem *rhs)
{
  ?copyFrom@bdRedeemCodeGrantedItem@@AEAAXAEBV1@@Z(this, rhs);
}

/*
==============
bdRedeemCodeGrantedItem::deserialize
==============
*/

bool __fastcall bdRedeemCodeGrantedItem::deserialize(bdRedeemCodeGrantedItem *this, bdStructBufferDeserializer *deserializer)
{
  return ?deserialize@bdRedeemCodeGrantedItem@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, deserializer);
}

/*
==============
bdRedeemCodeGrantedItem::bdRedeemCodeGrantedItem
==============
*/
void bdRedeemCodeGrantedItem::bdRedeemCodeGrantedItem(bdRedeemCodeGrantedItem *this, const bdRedeemCodeGrantedItem *copy, int a3)
{
  if ( a3 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdRedeemCodeGrantedItem::`vbtable';
    *(_QWORD *)&this->gap39C[4] = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap39C[12] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdRedeemCodeGrantedItem_vtbl *)&bdRedeemCodeGrantedItem::`vftable'{for `bdStructBufferSerializable'};
  *(bdRedeemCodeGrantedItem_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdRedeemCodeGrantedItem_vtbl *)&bdRedeemCodeGrantedItem::`vftable'{for `bdReferencable'};
  bdRedeemCodeGrantedItem::copyFrom(this, copy);
}

/*
==============
bdRedeemCodeGrantedItem::bdRedeemCodeGrantedItem
==============
*/
void bdRedeemCodeGrantedItem::bdRedeemCodeGrantedItem(bdRedeemCodeGrantedItem *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdRedeemCodeGrantedItem::`vbtable';
    *(_QWORD *)&this->gap39C[4] = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap39C[12] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdRedeemCodeGrantedItem_vtbl *)&bdRedeemCodeGrantedItem::`vftable'{for `bdStructBufferSerializable'};
  *(bdRedeemCodeGrantedItem_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdRedeemCodeGrantedItem_vtbl *)&bdRedeemCodeGrantedItem::`vftable'{for `bdReferencable'};
  *((_DWORD *)&this->__vftable + 4) = -1;
  memset_0((char *)&this->__vftable + 20, 0, 0x355ui64);
  *(_QWORD *)&this->m_itemDataSize = 0i64;
  *(_QWORD *)&this->m_itemXp = 0i64;
  this->m_expireDateTime = -1;
  this->m_expiryDuration = -1i64;
  *(_QWORD *)&this->m_modDateTime = -1i64;
  *(_WORD *)&this->m_isEnabled = 0;
  *(_QWORD *)&this->m_maxQuantity = -1i64;
}

/*
==============
bdRedeemCodeGrantedItem::operator=
==============
*/
bdRedeemCodeGrantedItem *bdRedeemCodeGrantedItem::operator=(bdRedeemCodeGrantedItem *this, const bdRedeemCodeGrantedItem *copy)
{
  if ( this != copy )
    bdRedeemCodeGrantedItem::copyFrom(this, copy);
  return this;
}

/*
==============
bdRedeemCodeGrantedItem::copyFrom
==============
*/
void bdRedeemCodeGrantedItem::copyFrom(bdRedeemCodeGrantedItem *this, const bdRedeemCodeGrantedItem *rhs)
{
  *((_DWORD *)&this->__vftable + 4) = *((_DWORD *)&rhs->__vftable + 4);
  bdStrlcpy((char *const)&this->__vftable + 20, (const char *const)&rhs->__vftable + 20, 0x301ui64);
  bdStrlcpy(this->m_itemType, rhs->m_itemType, 0x301ui64);
  bdStrlcpy(this->m_itemSubtype, rhs->m_itemSubtype, 0x301ui64);
  memcpy_0(this->m_itemData, rhs->m_itemData, rhs->m_itemDataSize);
  this->m_itemDataSize = rhs->m_itemDataSize;
  this->m_itemQuantity = rhs->m_itemQuantity;
  this->m_itemXp = rhs->m_itemXp;
  this->m_collisionField = rhs->m_collisionField;
  this->m_expireDateTime = rhs->m_expireDateTime;
  this->m_expiryDuration = rhs->m_expiryDuration;
  this->m_modDateTime = rhs->m_modDateTime;
  this->m_usageExpiryTime = rhs->m_usageExpiryTime;
  this->m_isEnabled = rhs->m_isEnabled;
  this->m_isConsumable = rhs->m_isConsumable;
  this->m_maxQuantity = rhs->m_maxQuantity;
  this->m_maxUsageTime = rhs->m_maxUsageTime;
}

/*
==============
bdRedeemCodeGrantedItem::deserialize
==============
*/
bool bdRedeemCodeGrantedItem::deserialize(bdRedeemCodeGrantedItem *this, bdStructBufferDeserializer *deserializer)
{
  return bdStructBufferDeserializer::readUInt32(deserializer, 1u, (unsigned int *)&this->__vftable + 4) && bdStructBufferDeserializer::readString(deserializer, 2u, (char *const)&this->__vftable + 20, 0x301u) && bdStructBufferDeserializer::readString(deserializer, 3u, this->m_itemType, 0xAu) && bdStructBufferDeserializer::readString(deserializer, 4u, this->m_itemSubtype, 0xAu) && bdStructBufferDeserializer::readBlob(deserializer, 5u, this->m_itemData, 0x40u, &this->m_itemDataSize) && bdStructBufferDeserializer::readUInt32(deserializer, 6u, &this->m_itemQuantity) && bdStructBufferDeserializer::readUInt32(deserializer, 7u, &this->m_itemXp) && bdStructBufferDeserializer::readUInt32(deserializer, 8u, &this->m_collisionField) && bdStructBufferDeserializer::readUInt32(deserializer, 9u, &this->m_expireDateTime) && bdStructBufferDeserializer::readInt64(deserializer, 0xAu, &this->m_expiryDuration) && bdStructBufferDeserializer::readUInt32(deserializer, 0xBu, &this->m_modDateTime) && bdStructBufferDeserializer::readUInt32(deserializer, 0xCu, &this->m_usageExpiryTime) && bdStructBufferDeserializer::readUByte8(deserializer, 0xDu, &this->m_isEnabled) && bdStructBufferDeserializer::readUByte8(deserializer, 0xEu, &this->m_isConsumable) && bdStructBufferDeserializer::readUInt32(deserializer, 0xFu, &this->m_maxQuantity) && bdStructBufferDeserializer::readUInt32(deserializer, 0x10u, &this->m_maxUsageTime);
}

/*
==============
bdRedeemCodeGrantedItem::reset
==============
*/
void bdRedeemCodeGrantedItem::reset(bdRedeemCodeGrantedItem *this)
{
  *((_DWORD *)&this->__vftable + 4) = -1;
  memset_0((char *)&this->__vftable + 20, 0, 0x355ui64);
  this->m_expireDateTime = -1;
  *(_QWORD *)&this->m_itemDataSize = 0i64;
  *(_QWORD *)&this->m_itemXp = 0i64;
  *(_WORD *)&this->m_isEnabled = 0;
  this->m_expiryDuration = -1i64;
  *(_QWORD *)&this->m_modDateTime = -1i64;
  *(_QWORD *)&this->m_maxQuantity = -1i64;
}

/*
==============
bdRedeemCodeGrantedItem::serialize
==============
*/
bool bdRedeemCodeGrantedItem::serialize(bdRedeemCodeGrantedItem *this, bdStructBufferSerializer *__formal)
{
  bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdredeemablecode\\bdredeemcodegranteditem.cpp", "bdRedeemCodeGrantedItem::serialize", 0x25u, "NOT IMPLEMENTED");
  return 0;
}

/*
==============
bdRedeemCodeGrantedItem::toString
==============
*/
bdString *bdRedeemCodeGrantedItem::toString(bdRedeemCodeGrantedItem *this, bdString *result)
{
  unsigned int m_itemQuantity; 

  m_itemQuantity = this->m_itemQuantity;
  makeFormattedString(result, "{ itemId:%d , itemName:%s , itemType:%s , itemSubtype:%s , itemQuantity:%d }", *((unsigned int *)&this->__vftable + 4), (const char *)&this->__vftable + 20, this->m_itemType, this->m_itemSubtype, m_itemQuantity);
  return result;
}

