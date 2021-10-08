/*
==============
bdMarketplaceInventory::reset
==============
*/

void __fastcall bdMarketplaceInventory::reset(bdMarketplaceInventory *this)
{
  ?reset@bdMarketplaceInventory@@QEAAXXZ(this);
}

/*
==============
bdMarketplaceInventory::deserialize
==============
*/

bool __fastcall bdMarketplaceInventory::deserialize(bdMarketplaceInventory *this, bdReference<bdByteBuffer> buffer)
{
  return ?deserialize@bdMarketplaceInventory@@UEAA_NV?$bdReference@VbdByteBuffer@@@@@Z(this, buffer);
}

/*
==============
bdMarketplaceInventory::sizeOf
==============
*/

unsigned int __fastcall bdMarketplaceInventory::sizeOf(bdMarketplaceInventory *this)
{
  return ?sizeOf@bdMarketplaceInventory@@UEAAIXZ(this);
}

/*
==============
bdMarketplaceInventory::bdMarketplaceInventory
==============
*/

void __fastcall bdMarketplaceInventory::bdMarketplaceInventory(bdMarketplaceInventory *this, const bdUserAccountID *playerId, const unsigned int itemId, const unsigned int itemQuantity, const unsigned int itemXp, const unsigned __int8 *itemData, const unsigned __int8 itemDataSize, const unsigned int expireDateTime, const __int64 expiryDuration, const unsigned __int16 collisionField, const unsigned int modDateTime, const unsigned int customSourceType)
{
  ??0bdMarketplaceInventory@@QEAA@VbdUserAccountID@@IIIQEBEEI_JGII@Z(this, playerId, itemId, itemQuantity, itemXp, itemData, itemDataSize, expireDateTime, expiryDuration, collisionField, modDateTime, customSourceType);
}

/*
==============
bdMarketplaceInventory::deserialize
==============
*/

bool __fastcall bdMarketplaceInventory::deserialize(bdMarketplaceInventory *this, bdReference<bdByteBuffer> buffer, const bdUserAccountID *playerId)
{
  return ?deserialize@bdMarketplaceInventory@@UEAA_NV?$bdReference@VbdByteBuffer@@@@VbdUserAccountID@@@Z(this, buffer, playerId);
}

/*
==============
bdMarketplaceInventory::serializedSizeOf
==============
*/

int __fastcall bdMarketplaceInventory::serializedSizeOf(bdMarketplaceInventory *this)
{
  return ?serializedSizeOf@bdMarketplaceInventory@@UEBAHXZ(this);
}

/*
==============
bdMarketplaceInventory::serialize
==============
*/

bool __fastcall bdMarketplaceInventory::serialize(bdMarketplaceInventory *this, bdByteBuffer *buffer)
{
  return ?serialize@bdMarketplaceInventory@@UEBA_NAEAVbdByteBuffer@@@Z(this, buffer);
}

/*
==============
bdMarketplaceInventory::bdMarketplaceInventory
==============
*/

void __fastcall bdMarketplaceInventory::bdMarketplaceInventory(bdMarketplaceInventory *this)
{
  ??0bdMarketplaceInventory@@QEAA@XZ(this);
}

/*
==============
bdMarketplaceInventory::bdMarketplaceInventory
==============
*/
void bdMarketplaceInventory::bdMarketplaceInventory(bdMarketplaceInventory *this, const bdUserAccountID *playerId, const unsigned int itemId, const unsigned int itemQuantity, const unsigned int itemXp, const unsigned __int8 *itemData, const unsigned __int8 itemDataSize, const unsigned int expireDateTime, const __int64 expiryDuration, const unsigned __int16 collisionField, const unsigned int modDateTime, const unsigned int customSourceType, int a13)
{
  unsigned __int8 v17; 

  if ( a13 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdMarketplaceInventory::`vbtable'{for `bdTaskResult'};
    *((_QWORD *)&this->__vftable + 3) = &bdMarketplaceInventory::`vbtable'{for `bdSerializable'};
    *(_QWORD *)&this->gapD4[4] = &bdReferencable::`vftable';
    *(_DWORD *)&this->gapD4[12] = 0;
  }
  bdTaskResult::bdTaskResult(this);
  bdSerializable::bdSerializable((bdSerializable *)(&this->__vftable + 2));
  this->__vftable = (bdMarketplaceInventory_vtbl *)&bdMarketplaceInventory::`vftable'{for `bdTaskResult'};
  *((_QWORD *)&this->__vftable + 2) = &bdMarketplaceInventory::`vftable'{for `bdSerializable'};
  *(bdMarketplaceInventory_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdMarketplaceInventory_vtbl *)&bdMarketplaceInventory::`vftable'{for `bdReferencable'};
  bdUserAccountID::bdUserAccountID((bdUserAccountID *)this->_bytes_20, playerId);
  this->m_itemId = itemId;
  this->m_itemQuantity = itemQuantity;
  this->m_itemXp = itemXp;
  v17 = itemDataSize;
  this->m_itemDataSize = itemDataSize;
  this->m_expireDateTime = expireDateTime;
  this->m_expiryDuration = expiryDuration;
  this->m_collisionField = collisionField;
  this->m_modDateTime = modDateTime;
  this->m_customSourceType = customSourceType;
  if ( itemData && itemDataSize )
  {
    if ( itemDataSize > 0x40u )
    {
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdMarketplace/bdMarketplaceInventory", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplaceinventory.cpp", "bdMarketplaceInventory::bdMarketplaceInventory", 0x32u, "Truncating response blob as size exceeds max allowed");
      this->m_itemDataSize = 64;
      v17 = 64;
    }
    memset_0(this->m_itemData, 0, v17);
    memcpy_0(this->m_itemData, itemData, this->m_itemDataSize);
  }
  else
  {
    memset_0(this->m_itemData, 0, itemDataSize);
  }
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)playerId->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)playerId->gap38);
}

/*
==============
bdMarketplaceInventory::bdMarketplaceInventory
==============
*/
void bdMarketplaceInventory::bdMarketplaceInventory(bdMarketplaceInventory *this, int a2)
{
  unsigned __int64 userID[3]; 
  bdUserAccountID other; 

  userID[1] = -2i64;
  userID[2] = (unsigned __int64)this;
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdMarketplaceInventory::`vbtable'{for `bdTaskResult'};
    *((_QWORD *)&this->__vftable + 3) = &bdMarketplaceInventory::`vbtable'{for `bdSerializable'};
    *(_QWORD *)&this->gapD4[4] = &bdReferencable::`vftable';
    *(_DWORD *)&this->gapD4[12] = 0;
  }
  bdTaskResult::bdTaskResult(this);
  bdSerializable::bdSerializable((bdSerializable *)(&this->__vftable + 2));
  this->__vftable = (bdMarketplaceInventory_vtbl *)&bdMarketplaceInventory::`vftable'{for `bdTaskResult'};
  *((_QWORD *)&this->__vftable + 2) = &bdMarketplaceInventory::`vftable'{for `bdSerializable'};
  *(bdMarketplaceInventory_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdMarketplaceInventory_vtbl *)&bdMarketplaceInventory::`vftable'{for `bdReferencable'};
  bdUserAccountID::bdUserAccountID((bdUserAccountID *)this->_bytes_20);
  userID[0] = 0i64;
  bdUserAccountID::bdUserAccountID(&other, userID);
  bdUserAccountID::operator=((bdUserAccountID *)this->_bytes_20, &other);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)other.gap38);
  bdReferencable::~bdReferencable((bdReferencable *)other.gap38);
  *(_QWORD *)&this->m_itemId = 0i64;
  this->m_itemXp = 0;
  this->m_itemDataSize = 0;
  this->m_expireDateTime = -1;
  this->m_expiryDuration = 0x7FFFFFFFFFFFFFFFi64;
  this->m_collisionField = 0;
  this->m_modDateTime = -1;
  *(_QWORD *)this->m_itemData = 0i64;
  *(_QWORD *)&this->m_itemData[8] = 0i64;
  *(_QWORD *)&this->m_itemData[16] = 0i64;
  *(_QWORD *)&this->m_itemData[24] = 0i64;
  *(_QWORD *)&this->m_itemData[32] = 0i64;
  *(_QWORD *)&this->m_itemData[40] = 0i64;
  *(_QWORD *)&this->m_itemData[48] = 0i64;
  *(_QWORD *)&this->m_itemData[56] = 0i64;
  this->m_customSourceType = 0;
}

/*
==============
bdMarketplaceInventory::deserialize
==============
*/
__int64 bdMarketplaceInventory::deserialize(bdMarketplaceInventory *this, bdReference<bdByteBuffer> buffer)
{
  bool (__fastcall *deserialize)(bdMarketplaceInventory *, bdReference<bdByteBuffer>, const bdUserAccountID); 
  __int64 v5; 
  bdByteBuffer_vtbl *v6; 
  unsigned __int8 v7; 
  bdUserAccountID v9; 
  bdByteBuffer_vtbl *v10; 
  bdByteBuffer *m_ptr; 
  unsigned __int64 v12; 

  m_ptr = buffer.m_ptr;
  deserialize = this->deserialize;
  v12 = -1i64;
  bdUserAccountID::bdUserAccountID(&v9, &v12);
  v6 = buffer.m_ptr->__vftable;
  v10 = v6;
  if ( v6 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v6->allocateBuffer, 1u);
  v7 = ((__int64 (__fastcall *)(bdMarketplaceInventory *, bdByteBuffer_vtbl **, __int64))deserialize)(this, &v10, v5);
  if ( buffer.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->allocateBuffer, 0xFFFFFFFF) == 1 )
  {
    if ( buffer.m_ptr->__vftable )
      (*(void (__fastcall **)(bdByteBuffer_vtbl *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr->__vftable, 1i64);
    buffer.m_ptr->__vftable = NULL;
  }
  return v7;
}

/*
==============
bdMarketplaceInventory::deserialize
==============
*/
_BOOL8 bdMarketplaceInventory::deserialize(bdMarketplaceInventory *this, bdReference<bdByteBuffer> buffer, const bdUserAccountID *playerId)
{
  bool v6; 
  bdByteBuffer *v7; 
  char v8; 
  bool v9; 
  unsigned int length; 
  bdReference<bdByteBuffer> buffera; 
  unsigned __int64 userID[4]; 
  bdUserAccountID other; 

  userID[1] = -2i64;
  userID[2] = (unsigned __int64)buffer.m_ptr;
  userID[3] = (unsigned __int64)playerId;
  userID[0] = -1i64;
  bdUserAccountID::bdUserAccountID(&other, userID);
  v6 = bdUserAccountID::operator==((bdUserAccountID *)playerId, &other);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)other.gap38);
  bdReferencable::~bdReferencable((bdReferencable *)other.gap38);
  if ( v6 )
  {
    v7 = (bdByteBuffer *)buffer.m_ptr->__vftable;
    buffera.m_ptr = v7;
    if ( v7 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v7->m_refCount, 1u);
    if ( !ContextSerialization::readUserID((bdReference<bdByteBuffer>)&buffera, (bdUserAccountID *)this->_bytes_20) )
      goto LABEL_5;
  }
  else
  {
    bdUserAccountID::operator=((bdUserAccountID *)this->_bytes_20, playerId);
  }
  if ( !bdByteBuffer::readUInt32((bdByteBuffer *)buffer.m_ptr->__vftable, &this->m_itemId) || !bdByteBuffer::readUInt32((bdByteBuffer *)buffer.m_ptr->__vftable, &this->m_itemQuantity) || !bdByteBuffer::readUInt32((bdByteBuffer *)buffer.m_ptr->__vftable, &this->m_itemXp) )
  {
LABEL_5:
    length = 64;
    goto LABEL_6;
  }
  length = 64;
  if ( bdByteBuffer::readBlob((bdByteBuffer *)buffer.m_ptr->__vftable, this->m_itemData, &length) )
  {
    v8 = 1;
    goto LABEL_7;
  }
LABEL_6:
  v8 = 0;
LABEL_7:
  this->m_itemDataSize = length;
  v9 = v8 && bdByteBuffer::readUInt32((bdByteBuffer *)buffer.m_ptr->__vftable, &this->m_expireDateTime) && bdByteBuffer::readInt64((bdByteBuffer *)buffer.m_ptr->__vftable, &this->m_expiryDuration) && bdByteBuffer::readUInt16((bdByteBuffer *)buffer.m_ptr->__vftable, &this->m_collisionField) && bdByteBuffer::readUInt32((bdByteBuffer *)buffer.m_ptr->__vftable, &this->m_modDateTime);
  if ( buffer.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->allocateBuffer, 0xFFFFFFFF) == 1 )
  {
    if ( buffer.m_ptr->__vftable )
      (*(void (__fastcall **)(bdByteBuffer_vtbl *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr->__vftable, 1i64);
    buffer.m_ptr->__vftable = NULL;
  }
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)playerId->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)playerId->gap38);
  return v9;
}

/*
==============
bdMarketplaceInventory::reset
==============
*/
void bdMarketplaceInventory::reset(bdMarketplaceInventory *this)
{
  unsigned __int64 v2[2]; 
  bdUserAccountID other; 

  v2[1] = -2i64;
  v2[0] = 0i64;
  bdUserAccountID::bdUserAccountID(&other, v2);
  bdUserAccountID::operator=((bdUserAccountID *)this->_bytes_20, &other);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)other.gap38);
  bdReferencable::~bdReferencable((bdReferencable *)other.gap38);
  *(_QWORD *)&this->m_itemId = 0i64;
  this->m_itemXp = 0;
  this->m_itemDataSize = 0;
  this->m_expireDateTime = -1;
  this->m_expiryDuration = 0x7FFFFFFFFFFFFFFFi64;
  this->m_collisionField = 0;
  this->m_modDateTime = -1;
  *(_QWORD *)this->m_itemData = 0i64;
  *(_QWORD *)&this->m_itemData[8] = 0i64;
  *(_QWORD *)&this->m_itemData[16] = 0i64;
  *(_QWORD *)&this->m_itemData[24] = 0i64;
  *(_QWORD *)&this->m_itemData[32] = 0i64;
  *(_QWORD *)&this->m_itemData[40] = 0i64;
  *(_QWORD *)&this->m_itemData[48] = 0i64;
  *(_QWORD *)&this->m_itemData[56] = 0i64;
  this->m_customSourceType = 0;
}

/*
==============
bdMarketplaceInventory::serialize
==============
*/
bool bdMarketplaceInventory::serialize(bdMarketplaceInventory *this, bdByteBuffer *buffer)
{
  bdReference<bdByteBuffer> buffera; 

  buffera.m_ptr = buffer;
  if ( buffer )
    _InterlockedExchangeAdd((volatile signed __int32 *)&buffer->m_refCount, 1u);
  return ContextSerialization::writeUserID((bdReference<bdByteBuffer>)&buffera, (const bdUserAccountID *)(&this->__vftable + 2)) && bdByteBuffer::writeUInt32(buffer, *(_DWORD *)&this->m_playerId[40]) && bdByteBuffer::writeUInt32(buffer, *(_DWORD *)&this->m_playerId[44]) && bdByteBuffer::writeUInt32(buffer, *(_DWORD *)&this->m_playerId[48]) && bdByteBuffer::writeBlob(buffer, &this->m_playerId[52], this->m_itemData[48]) && bdByteBuffer::writeUInt32(buffer, *(_DWORD *)&this->m_itemData[52]) && bdByteBuffer::writeInt64(buffer, *(_QWORD *)&this->m_itemData[60]) && bdByteBuffer::writeUInt16(buffer, this->m_expireDateTime) && bdByteBuffer::writeUInt32(buffer, *(&this->m_expireDateTime + 1));
}

/*
==============
bdMarketplaceInventory::serializedSizeOf
==============
*/
__int64 bdMarketplaceInventory::serializedSizeOf(bdMarketplaceInventory *this)
{
  return this->m_itemData[48] + ContextSerialization::getUserIDSize((const bdUserAccountID *)(&this->__vftable + 2)) + 43;
}

/*
==============
bdMarketplaceInventory::sizeOf
==============
*/
__int64 bdMarketplaceInventory::sizeOf(bdMarketplaceInventory *this)
{
  return 232i64;
}

