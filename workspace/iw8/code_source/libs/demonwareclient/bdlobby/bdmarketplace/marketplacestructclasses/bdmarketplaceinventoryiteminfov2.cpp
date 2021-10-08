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
  __int64 v9; 

  _RSI = other;
  _RDI = this;
  if ( a3 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdMarketplaceInventoryItemInfoV2::`vbtable';
    *(_QWORD *)&this->gap3BC[4] = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap3BC[12] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  _RDI->__vftable = (bdMarketplaceInventoryItemInfoV2_vtbl *)&bdMarketplaceInventoryItemInfoV2::`vftable'{for `bdStructBufferSerializable'};
  *(bdMarketplaceInventoryItemInfoV2_vtbl **)((char *)&_RDI->__vftable + *(int *)(*((_QWORD *)&_RDI->__vftable + 1) + 4i64) + 8) = (bdMarketplaceInventoryItemInfoV2_vtbl *)&bdMarketplaceInventoryItemInfoV2::`vftable'{for `bdReferencable'};
  *((_DWORD *)&_RDI->__vftable + 4) = *((_DWORD *)&_RSI->__vftable + 4);
  *((_DWORD *)&_RDI->__vftable + 5) = *((_DWORD *)&_RSI->__vftable + 5);
  *((_DWORD *)&_RDI->__vftable + 6) = *((_DWORD *)&_RSI->__vftable + 6);
  _RDI->m_dataSize = _RSI->m_dataSize;
  _RDI->m_isRental = _RSI->m_isRental;
  _RDI->m_expiry = _RSI->m_expiry;
  _RDI->m_usageExpiry = _RSI->m_usageExpiry;
  _RDI->m_lastUpdate = _RSI->m_lastUpdate;
  _RDI->m_collisionField = _RSI->m_collisionField;
  _RDI->m_expiryDuration = _RSI->m_expiryDuration;
  _RDI->m_sourceType = _RSI->m_sourceType;
  _RBX = &_RDI->m_itemName;
  bdStructFixedSizeString<769>::bdStructFixedSizeString<769>(&_RDI->m_itemName);
  bdStructFixedSizeString<10>::bdStructFixedSizeString<10>(&_RDI->m_itemType);
  bdStructFixedSizeString<10>::bdStructFixedSizeString<10>(&_RDI->m_itemSubtype);
  _RDI->m_isConsumable = _RSI->m_isConsumable;
  _RDI->m_isExpirable = _RSI->m_isExpirable;
  _RDI->m_maxQuantity = _RSI->m_maxQuantity;
  _RDI->m_maxUsageTime = _RSI->m_maxUsageTime;
  _RDI->m_platformSince = _RSI->m_platformSince;
  _RDI->m_platformUntil = _RSI->m_platformUntil;
  __asm
  {
    vmovups ymm0, ymmword ptr [rsi+1Ch]
    vmovups ymmword ptr [rdi+1Ch], ymm0
    vmovups ymm1, ymmword ptr [rsi+3Ch]
    vmovups ymmword ptr [rdi+3Ch], ymm1
  }
  _RAX = &_RSI->m_itemName;
  v9 = 6i64;
  do
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rax]
      vmovups xmmword ptr [rbx], xmm0
      vmovups xmm1, xmmword ptr [rax+10h]
      vmovups xmmword ptr [rbx+10h], xmm1
      vmovups xmm0, xmmword ptr [rax+20h]
      vmovups xmmword ptr [rbx+20h], xmm0
      vmovups xmm1, xmmword ptr [rax+30h]
      vmovups xmmword ptr [rbx+30h], xmm1
      vmovups xmm0, xmmword ptr [rax+40h]
      vmovups xmmword ptr [rbx+40h], xmm0
      vmovups xmm1, xmmword ptr [rax+50h]
      vmovups xmmword ptr [rbx+50h], xmm1
      vmovups xmm0, xmmword ptr [rax+60h]
      vmovups xmmword ptr [rbx+60h], xmm0
    }
    _RBX = (bdStructFixedSizeString<769> *)((char *)_RBX + 128);
    __asm
    {
      vmovups xmm1, xmmword ptr [rax+70h]
      vmovups xmmword ptr [rbx-10h], xmm1
    }
    _RAX = (bdStructFixedSizeString<769> *)((char *)_RAX + 128);
    --v9;
  }
  while ( v9 );
  *(_WORD *)_RBX->m_buffer = *(_WORD *)_RAX->m_buffer;
  __asm
  {
    vmovsd  xmm0, qword ptr [rsi+386h]
    vmovsd  qword ptr [rdi+386h], xmm0
  }
  *(_WORD *)&_RDI->m_itemType.m_buffer[8] = *(_WORD *)&_RSI->m_itemType.m_buffer[8];
  _RDI->m_itemType.m_buffer[10] = _RSI->m_itemType.m_buffer[10];
  __asm
  {
    vmovsd  xmm0, qword ptr [rsi+391h]
    vmovsd  qword ptr [rdi+391h], xmm0
  }
  *(_WORD *)&_RDI->m_itemSubtype.m_buffer[8] = *(_WORD *)&_RSI->m_itemSubtype.m_buffer[8];
  _RDI->m_itemSubtype.m_buffer[10] = _RSI->m_itemSubtype.m_buffer[10];
  bdStrlcpy(_RDI->m_platform, _RSI->m_platform, 0xBui64);
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

