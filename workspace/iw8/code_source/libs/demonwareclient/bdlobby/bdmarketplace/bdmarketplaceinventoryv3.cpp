/*
==============
bdMarketplaceInventoryV3::sizeOf
==============
*/

unsigned int __fastcall bdMarketplaceInventoryV3::sizeOf(bdMarketplaceInventoryV3 *this)
{
  return ?sizeOf@bdMarketplaceInventoryV3@@UEAAIXZ(this);
}

/*
==============
bdMarketplaceInventoryV3::serialize
==============
*/

bool __fastcall bdMarketplaceInventoryV3::serialize(bdMarketplaceInventoryV3 *this, bdByteBuffer *buffer)
{
  return ?serialize@bdMarketplaceInventoryV3@@UEBA_NAEAVbdByteBuffer@@@Z(this, buffer);
}

/*
==============
bdMarketplaceInventoryV3::deserialize
==============
*/

bool __fastcall bdMarketplaceInventoryV3::deserialize(bdMarketplaceInventoryV3 *this, bdReference<bdByteBuffer> buffer, const bdUserAccountID *playerId)
{
  return ?deserialize@bdMarketplaceInventoryV3@@UEAA_NV?$bdReference@VbdByteBuffer@@@@VbdUserAccountID@@@Z(this, buffer, playerId);
}

/*
==============
bdMarketplaceInventoryV3::serializedSizeOf
==============
*/

int __fastcall bdMarketplaceInventoryV3::serializedSizeOf(bdMarketplaceInventoryV3 *this)
{
  return ?serializedSizeOf@bdMarketplaceInventoryV3@@UEBAHXZ(this);
}

/*
==============
bdMarketplaceInventoryV3::deserialize
==============
*/
_BOOL8 bdMarketplaceInventoryV3::deserialize(bdMarketplaceInventoryV3 *this, bdReference<bdByteBuffer> buffer, const bdUserAccountID *playerId)
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
  v9 = v8 && bdByteBuffer::readUInt32((bdByteBuffer *)buffer.m_ptr->__vftable, &this->m_expireDateTime) && bdByteBuffer::readInt64((bdByteBuffer *)buffer.m_ptr->__vftable, &this->m_expiryDuration) && bdByteBuffer::readUInt16((bdByteBuffer *)buffer.m_ptr->__vftable, &this->m_collisionField) && bdByteBuffer::readUInt32((bdByteBuffer *)buffer.m_ptr->__vftable, &this->m_modDateTime) && bdByteBuffer::readUInt32((bdByteBuffer *)buffer.m_ptr->__vftable, &this->m_customSourceType);
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
bdMarketplaceInventoryV3::serialize
==============
*/
bool bdMarketplaceInventoryV3::serialize(bdMarketplaceInventoryV3 *this, bdByteBuffer *buffer)
{
  bdReference<bdByteBuffer> buffera; 

  buffera.m_ptr = buffer;
  if ( buffer )
    _InterlockedExchangeAdd((volatile signed __int32 *)&buffer->m_refCount, 1u);
  return ContextSerialization::writeUserID((bdReference<bdByteBuffer>)&buffera, (const bdUserAccountID *)(&this->__vftable + 2)) && bdByteBuffer::writeUInt32(buffer, *(_DWORD *)&this->m_playerId[40]) && bdByteBuffer::writeUInt32(buffer, *(_DWORD *)&this->m_playerId[44]) && bdByteBuffer::writeUInt32(buffer, *(_DWORD *)&this->m_playerId[48]) && bdByteBuffer::writeBlob(buffer, &this->m_playerId[52], this->m_itemData[48]) && bdByteBuffer::writeUInt32(buffer, *(_DWORD *)&this->m_itemData[52]) && bdByteBuffer::writeInt64(buffer, *(_QWORD *)&this->m_itemData[60]) && bdByteBuffer::writeUInt16(buffer, this->m_expireDateTime) && bdByteBuffer::writeUInt32(buffer, *(&this->m_expireDateTime + 1)) && bdByteBuffer::writeUInt32(buffer, this->m_expiryDuration);
}

/*
==============
bdMarketplaceInventoryV3::serializedSizeOf
==============
*/
__int64 bdMarketplaceInventoryV3::serializedSizeOf(bdMarketplaceInventoryV3 *this)
{
  return this->m_itemData[48] + ContextSerialization::getUserIDSize((const bdUserAccountID *)(&this->__vftable + 2)) + 48;
}

/*
==============
bdMarketplaceInventoryV3::sizeOf
==============
*/
__int64 bdMarketplaceInventoryV3::sizeOf(bdMarketplaceInventoryV3 *this)
{
  return 232i64;
}

