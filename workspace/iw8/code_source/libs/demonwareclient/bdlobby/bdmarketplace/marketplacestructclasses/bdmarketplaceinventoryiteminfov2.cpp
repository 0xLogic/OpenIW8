/*
==============
bdMarketplaceInventoryItemInfoV2::bdMarketplaceInventoryItemInfoV2
==============
*/

void __fastcall bdMarketplaceInventoryItemInfoV2::bdMarketplaceInventoryItemInfoV2(bdMarketplaceInventoryItemInfoV2 *this, const bdMarketplaceInventoryItemInfoV2 *other)
{
  ??0bdMarketplaceInventoryItemInfoV2@@QEAA@AEBV0@@Z(this, other);
}

/*
==============
bdMarketplaceInventoryItemInfoV2::deserialize
==============
*/

bool __fastcall bdMarketplaceInventoryItemInfoV2::deserialize(bdMarketplaceInventoryItemInfoV2 *this, bdStructBufferDeserializer *deserializer)
{
  return ?deserialize@bdMarketplaceInventoryItemInfoV2@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, deserializer);
}

/*
==============
bdMarketplaceInventoryItemInfoV2::reset
==============
*/

void __fastcall bdMarketplaceInventoryItemInfoV2::reset(bdMarketplaceInventoryItemInfoV2 *this)
{
  ?reset@bdMarketplaceInventoryItemInfoV2@@QEAAXXZ(this);
}

/*
==============
bdMarketplaceInventoryItemInfoV2::bdMarketplaceInventoryItemInfoV2
==============
*/

void __fastcall bdMarketplaceInventoryItemInfoV2::bdMarketplaceInventoryItemInfoV2(bdMarketplaceInventoryItemInfoV2 *this)
{
  ??0bdMarketplaceInventoryItemInfoV2@@QEAA@XZ(this);
}

/*
==============
bdMarketplaceInventoryItemInfoV2::bdMarketplaceInventoryItemInfoV2
==============
*/
void bdMarketplaceInventoryItemInfoV2::bdMarketplaceInventoryItemInfoV2(bdMarketplaceInventoryItemInfoV2 *this, const bdMarketplaceInventoryItemInfoV2 *other, int a3)
{
  bdStructFixedSizeString<769> *p_m_itemName; 
  bdStructFixedSizeString<769> *v6; 
  __int64 v7; 

  if ( a3 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdMarketplaceInventoryItemInfoV2::`vbtable';
    *(_QWORD *)&this->gap3BC[4] = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap3BC[12] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdMarketplaceInventoryItemInfoV2_vtbl *)&bdMarketplaceInventoryItemInfoV2::`vftable'{for `bdStructBufferSerializable'};
  *(bdMarketplaceInventoryItemInfoV2_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdMarketplaceInventoryItemInfoV2_vtbl *)&bdMarketplaceInventoryItemInfoV2::`vftable'{for `bdReferencable'};
  *((_DWORD *)&this->__vftable + 4) = *((_DWORD *)&other->__vftable + 4);
  *((_DWORD *)&this->__vftable + 5) = *((_DWORD *)&other->__vftable + 5);
  *((_DWORD *)&this->__vftable + 6) = *((_DWORD *)&other->__vftable + 6);
  this->m_dataSize = other->m_dataSize;
  this->m_isRental = other->m_isRental;
  this->m_expiry = other->m_expiry;
  this->m_usageExpiry = other->m_usageExpiry;
  this->m_lastUpdate = other->m_lastUpdate;
  this->m_collisionField = other->m_collisionField;
  this->m_expiryDuration = other->m_expiryDuration;
  this->m_sourceType = other->m_sourceType;
  p_m_itemName = &this->m_itemName;
  bdStructFixedSizeString<769>::bdStructFixedSizeString<769>(&this->m_itemName);
  bdStructFixedSizeString<10>::bdStructFixedSizeString<10>(&this->m_itemType);
  bdStructFixedSizeString<10>::bdStructFixedSizeString<10>(&this->m_itemSubtype);
  this->m_isConsumable = other->m_isConsumable;
  this->m_isExpirable = other->m_isExpirable;
  this->m_maxQuantity = other->m_maxQuantity;
  this->m_maxUsageTime = other->m_maxUsageTime;
  this->m_platformSince = other->m_platformSince;
  this->m_platformUntil = other->m_platformUntil;
  *(bdStructBufferSerializable *)((char *)&this->bdStructBufferSerializable + 28) = *(bdStructBufferSerializable *)((char *)&other->bdStructBufferSerializable + 28);
  *(__m256i *)&this->m_data[28] = *(__m256i *)&other->m_data[28];
  v6 = &other->m_itemName;
  v7 = 6i64;
  do
  {
    *(_OWORD *)p_m_itemName->m_buffer = *(_OWORD *)v6->m_buffer;
    *(_OWORD *)&p_m_itemName->m_buffer[16] = *(_OWORD *)&v6->m_buffer[16];
    *(_OWORD *)&p_m_itemName->m_buffer[32] = *(_OWORD *)&v6->m_buffer[32];
    *(_OWORD *)&p_m_itemName->m_buffer[48] = *(_OWORD *)&v6->m_buffer[48];
    *(_OWORD *)&p_m_itemName->m_buffer[64] = *(_OWORD *)&v6->m_buffer[64];
    *(_OWORD *)&p_m_itemName->m_buffer[80] = *(_OWORD *)&v6->m_buffer[80];
    *(_OWORD *)&p_m_itemName->m_buffer[96] = *(_OWORD *)&v6->m_buffer[96];
    p_m_itemName = (bdStructFixedSizeString<769> *)((char *)p_m_itemName + 128);
    *(_OWORD *)&p_m_itemName[-1].m_buffer[754] = *(_OWORD *)&v6->m_buffer[112];
    v6 = (bdStructFixedSizeString<769> *)((char *)v6 + 128);
    --v7;
  }
  while ( v7 );
  *(_WORD *)p_m_itemName->m_buffer = *(_WORD *)v6->m_buffer;
  *(double *)this->m_itemType.m_buffer = *(double *)other->m_itemType.m_buffer;
  *(_WORD *)&this->m_itemType.m_buffer[8] = *(_WORD *)&other->m_itemType.m_buffer[8];
  this->m_itemType.m_buffer[10] = other->m_itemType.m_buffer[10];
  *(double *)this->m_itemSubtype.m_buffer = *(double *)other->m_itemSubtype.m_buffer;
  *(_WORD *)&this->m_itemSubtype.m_buffer[8] = *(_WORD *)&other->m_itemSubtype.m_buffer[8];
  this->m_itemSubtype.m_buffer[10] = other->m_itemSubtype.m_buffer[10];
  bdStrlcpy(this->m_platform, other->m_platform, 0xBui64);
}

/*
==============
bdMarketplaceInventoryItemInfoV2::bdMarketplaceInventoryItemInfoV2
==============
*/
void bdMarketplaceInventoryItemInfoV2::bdMarketplaceInventoryItemInfoV2(bdMarketplaceInventoryItemInfoV2 *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdMarketplaceInventoryItemInfoV2::`vbtable';
    *(_QWORD *)&this->gap3BC[4] = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap3BC[12] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdMarketplaceInventoryItemInfoV2_vtbl *)&bdMarketplaceInventoryItemInfoV2::`vftable'{for `bdStructBufferSerializable'};
  *(bdMarketplaceInventoryItemInfoV2_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdMarketplaceInventoryItemInfoV2_vtbl *)&bdMarketplaceInventoryItemInfoV2::`vftable'{for `bdReferencable'};
  bdStructFixedSizeString<769>::bdStructFixedSizeString<769>(&this->m_itemName);
  bdStructFixedSizeString<10>::bdStructFixedSizeString<10>(&this->m_itemType);
  bdStructFixedSizeString<10>::bdStructFixedSizeString<10>(&this->m_itemSubtype);
  *((_DWORD *)&this->__vftable + 4) = -1;
  *(bdMarketplaceInventoryItemInfoV2_vtbl **)((char *)&this->__vftable + 20) = NULL;
  *(bdMarketplaceInventoryItemInfoV2_vtbl **)((char *)&this->__vftable + 28) = NULL;
  *(_QWORD *)&this->m_data[4] = 0i64;
  *(_QWORD *)&this->m_data[12] = 0i64;
  *(_QWORD *)&this->m_data[20] = 0i64;
  *(_QWORD *)&this->m_data[28] = 0i64;
  *(_QWORD *)&this->m_data[36] = 0i64;
  *(_QWORD *)&this->m_data[44] = 0i64;
  *(_QWORD *)&this->m_data[52] = 0i64;
  this->m_dataSize = 0;
  this->m_isRental = 0;
  *(_QWORD *)&this->m_expiry = -1i64;
  this->m_lastUpdate = -1;
  this->m_collisionField = 0;
  this->m_expiryDuration = 0i64;
  this->m_sourceType = -1;
  bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen", -2i64);
  if ( this != (bdMarketplaceInventoryItemInfoV2 *)-132i64 )
    this->m_itemName.m_buffer[0] = 0;
  bdStructFixedSizeString<10>::operator=(&this->m_itemType, (const char *const)&queryFormat.fmt + 3);
  bdStructFixedSizeString<10>::operator=(&this->m_itemSubtype, (const char *const)&queryFormat.fmt + 3);
  *(_WORD *)&this->m_isConsumable = 0;
  *(_QWORD *)&this->m_maxQuantity = -1i64;
  *(_QWORD *)this->m_platform = 0i64;
  *(_WORD *)&this->m_platform[8] = 0;
  this->m_platform[10] = 0;
  *(_QWORD *)&this->m_platformSince = -1i64;
}

/*
==============
bdMarketplaceInventoryItemInfoV2::deserialize
==============
*/
bool bdMarketplaceInventoryItemInfoV2::deserialize(bdMarketplaceInventoryItemInfoV2 *this, bdStructBufferDeserializer *deserializer)
{
  return bdStructBufferDeserializer::readUInt32(deserializer, 1u, (unsigned int *)&this->__vftable + 4) && bdStructBufferDeserializer::readUInt32(deserializer, 2u, (unsigned int *)&this->__vftable + 5) && bdStructBufferDeserializer::readUInt32(deserializer, 3u, (unsigned int *)&this->__vftable + 6) && bdStructBufferDeserializer::readBlob(deserializer, 4u, (char *)&this->__vftable + 28, 0x40u, &this->m_dataSize) && bdStructBufferDeserializer::readBool(deserializer, 5u, &this->m_isRental) && bdStructBufferDeserializer::readUInt32(deserializer, 6u, &this->m_expiry) && bdStructBufferDeserializer::readUInt32(deserializer, 7u, &this->m_usageExpiry) && bdStructBufferDeserializer::readUInt32(deserializer, 8u, &this->m_lastUpdate) && bdStructBufferDeserializer::readUInt16(deserializer, 9u, &this->m_collisionField) && bdStructBufferDeserializer::readInt64(deserializer, 0xAu, &this->m_expiryDuration) && bdStructBufferDeserializer::readUInt32(deserializer, 0xBu, &this->m_sourceType) && bdStructBufferDeserializer::readString(deserializer, 0xDu, this->m_itemName.m_buffer, 0x302u) && bdStructBufferDeserializer::readString(deserializer, 0xEu, this->m_itemType.m_buffer, 0xBu) && bdStructBufferDeserializer::readString(deserializer, 0xFu, this->m_itemSubtype.m_buffer, 0xBu) && bdStructBufferDeserializer::readBool(deserializer, 0x10u, &this->m_isConsumable) && bdStructBufferDeserializer::readBool(deserializer, 0x11u, &this->m_isExpirable) && bdStructBufferDeserializer::readUInt32(deserializer, 0x12u, &this->m_maxQuantity) && bdStructBufferDeserializer::readUInt32(deserializer, 0x13u, &this->m_maxUsageTime) && bdStructBufferDeserializer::readString(deserializer, 0x14u, this->m_platform, 0xBu) && bdStructBufferDeserializer::readUInt32(deserializer, 0x15u, &this->m_platformSince) && bdStructBufferDeserializer::readUInt32(deserializer, 0x16u, &this->m_platformUntil);
}

/*
==============
bdMarketplaceInventoryItemInfoV2::reset
==============
*/
void bdMarketplaceInventoryItemInfoV2::reset(bdMarketplaceInventoryItemInfoV2 *this)
{
  bdStructFixedSizeString<769> *p_m_itemName; 
  unsigned __int64 v3; 
  size_t v4; 

  *((_DWORD *)&this->__vftable + 4) = -1;
  *(bdMarketplaceInventoryItemInfoV2_vtbl **)((char *)&this->__vftable + 20) = NULL;
  *(bdMarketplaceInventoryItemInfoV2_vtbl **)((char *)&this->__vftable + 28) = NULL;
  p_m_itemName = &this->m_itemName;
  *(_QWORD *)&this->m_data[4] = 0i64;
  *(_QWORD *)&this->m_data[12] = 0i64;
  *(_QWORD *)&this->m_data[20] = 0i64;
  *(_QWORD *)&this->m_data[28] = 0i64;
  *(_QWORD *)&this->m_data[36] = 0i64;
  *(_QWORD *)&this->m_data[44] = 0i64;
  *(_QWORD *)&this->m_data[52] = 0i64;
  this->m_isRental = 0;
  this->m_dataSize = 0;
  this->m_collisionField = 0;
  this->m_expiryDuration = 0i64;
  *(_QWORD *)&this->m_expiry = -1i64;
  this->m_lastUpdate = -1;
  this->m_sourceType = -1;
  bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v3 = -1i64;
  do
    ++v3;
  while ( *((_BYTE *)&queryFormat.fmt + v3 + 3) );
  if ( this != (bdMarketplaceInventoryItemInfoV2 *)-132i64 )
  {
    v4 = 769i64;
    if ( v3 < 0x301 )
      v4 = v3;
    memcpy_0(&this->m_itemName, (char *)&queryFormat.fmt + 3, v4);
    p_m_itemName->m_buffer[v4] = 0;
  }
  if ( v3 > 0x301 )
  {
    bdHandleAssert(0, "\"sLength <= MaxLength\" && false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<769>::copy", 0x56u, "bdStructFixedSizeString buffer is too small");
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "BD_ASSERT", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<769>::copy", 0x56u, "bdStructFixedSizeString buffer is too small");
  }
  bdStructFixedSizeString<10>::operator=(&this->m_itemType, (const char *const)&queryFormat.fmt + 3);
  bdStructFixedSizeString<10>::operator=(&this->m_itemSubtype, (const char *const)&queryFormat.fmt + 3);
  *(_WORD *)&this->m_isConsumable = 0;
  *(_QWORD *)&this->m_maxQuantity = -1i64;
  *(_QWORD *)this->m_platform = 0i64;
  *(_WORD *)&this->m_platform[8] = 0;
  this->m_platform[10] = 0;
  *(_QWORD *)&this->m_platformSince = -1i64;
}

