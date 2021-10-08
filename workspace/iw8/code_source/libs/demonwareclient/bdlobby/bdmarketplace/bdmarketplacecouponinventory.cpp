/*
==============
bdMarketplaceCouponInventory::deserialize
==============
*/

bool __fastcall bdMarketplaceCouponInventory::deserialize(bdMarketplaceCouponInventory *this, bdReference<bdByteBuffer> buffer)
{
  return ?deserialize@bdMarketplaceCouponInventory@@UEAA_NV?$bdReference@VbdByteBuffer@@@@@Z(this, buffer);
}

/*
==============
bdMarketplaceCouponInventory::sizeOf
==============
*/

unsigned int __fastcall bdMarketplaceCouponInventory::sizeOf(bdMarketplaceCouponInventory *this)
{
  return ?sizeOf@bdMarketplaceCouponInventory@@UEAAIXZ(this);
}

/*
==============
bdMarketplaceCouponInventory::serialize
==============
*/

bool __fastcall bdMarketplaceCouponInventory::serialize(bdMarketplaceCouponInventory *this, bdByteBuffer *buffer)
{
  return ?serialize@bdMarketplaceCouponInventory@@UEBA_NAEAVbdByteBuffer@@@Z(this, buffer);
}

/*
==============
bdMarketplaceCouponInventory::serializedSizeOf
==============
*/

int __fastcall bdMarketplaceCouponInventory::serializedSizeOf(bdMarketplaceCouponInventory *this)
{
  return ?serializedSizeOf@bdMarketplaceCouponInventory@@UEBAHXZ(this);
}

/*
==============
bdMarketplaceCouponInventory::bdMarketplaceCouponInventory
==============
*/

void __fastcall bdMarketplaceCouponInventory::bdMarketplaceCouponInventory(bdMarketplaceCouponInventory *this)
{
  ??0bdMarketplaceCouponInventory@@QEAA@XZ(this);
}

/*
==============
bdMarketplaceCouponInventory::reset
==============
*/

void __fastcall bdMarketplaceCouponInventory::reset(bdMarketplaceCouponInventory *this)
{
  ?reset@bdMarketplaceCouponInventory@@QEAAXXZ(this);
}

/*
==============
bdMarketplaceCouponInventory::bdMarketplaceCouponInventory
==============
*/
void bdMarketplaceCouponInventory::bdMarketplaceCouponInventory(bdMarketplaceCouponInventory *this, int a2)
{
  unsigned __int64 userID[3]; 
  bdUserAccountID other; 

  userID[1] = -2i64;
  userID[2] = (unsigned __int64)this;
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdMarketplaceCouponInventory::`vbtable'{for `bdTaskResult'};
    *((_QWORD *)&this->__vftable + 3) = &bdMarketplaceCouponInventory::`vbtable'{for `bdSerializable'};
    *(_QWORD *)this->gap138 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap138[8] = 0;
  }
  bdTaskResult::bdTaskResult(this);
  bdSerializable::bdSerializable((bdSerializable *)(&this->__vftable + 2));
  this->__vftable = (bdMarketplaceCouponInventory_vtbl *)&bdMarketplaceCouponInventory::`vftable'{for `bdTaskResult'};
  *((_QWORD *)&this->__vftable + 2) = &bdMarketplaceCouponInventory::`vftable'{for `bdSerializable'};
  *(bdMarketplaceCouponInventory_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdMarketplaceCouponInventory_vtbl *)&bdMarketplaceCouponInventory::`vftable'{for `bdReferencable'};
  bdUserAccountID::bdUserAccountID(&this->m_ownerPlayerId);
  bdUserAccountID::bdUserAccountID(&this->m_buyerPlayerId);
  userID[0] = -1i64;
  bdUserAccountID::bdUserAccountID(&other, userID);
  bdUserAccountID::operator=(&this->m_ownerPlayerId, &other);
  this->m_claimed = 0;
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)other.gap38);
  bdReferencable::~bdReferencable((bdReferencable *)other.gap38);
  this->m_productId = 0;
  userID[0] = 0i64;
  bdUserAccountID::bdUserAccountID(&other, userID);
  bdUserAccountID::operator=(&this->m_buyerPlayerId, &other);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)other.gap38);
  bdReferencable::~bdReferencable((bdReferencable *)other.gap38);
  *(_QWORD *)&this->m_skuId = -1i64;
  this->m_expireDateTime = -1;
  this->m_penalty_percentage = 0;
  *(_QWORD *)this->_bytes_20 = 0i64;
  *(_QWORD *)&this->_bytes_20[8] = 0i64;
  *(_QWORD *)this->m_couponId = 0i64;
  this->m_couponId[8] = 0;
  this->m_metadataSize = 0;
  *(_QWORD *)this->m_metadata = 0i64;
  *(_QWORD *)&this->m_metadata[8] = 0i64;
  *(_QWORD *)&this->m_metadata[16] = 0i64;
  *(_QWORD *)&this->m_metadata[24] = 0i64;
  *(_QWORD *)&this->m_metadata[32] = 0i64;
  *(_QWORD *)&this->m_metadata[40] = 0i64;
  *(_QWORD *)&this->m_metadata[48] = 0i64;
  *(_QWORD *)&this->m_metadata[56] = 0i64;
  this->m_customSourceType = 0;
}

/*
==============
bdMarketplaceCouponInventory::deserialize
==============
*/
__int64 bdMarketplaceCouponInventory::deserialize(bdMarketplaceCouponInventory *this, bdReference<bdByteBuffer> buffer)
{
  bdByteBuffer *v4; 
  bdByteBuffer *v5; 
  unsigned __int8 v6; 
  bdReference<bdByteBuffer> buffera; 
  bdReference<bdByteBuffer> v9; 

  if ( !bdByteBuffer::readString((bdByteBuffer *)buffer.m_ptr->__vftable, this->_bytes_20, 0x19ui64) )
    goto LABEL_15;
  v4 = (bdByteBuffer *)buffer.m_ptr->__vftable;
  buffera.m_ptr = v4;
  if ( v4 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v4->m_refCount, 1u);
  if ( !ContextSerialization::readUserID((bdReference<bdByteBuffer>)&buffera, &this->m_ownerPlayerId) || !bdByteBuffer::readBool((bdByteBuffer *)buffer.m_ptr->__vftable, &this->m_claimed) || !bdByteBuffer::readUInt32((bdByteBuffer *)buffer.m_ptr->__vftable, &this->m_productId) )
    goto LABEL_15;
  v5 = (bdByteBuffer *)buffer.m_ptr->__vftable;
  v9.m_ptr = v5;
  if ( v5 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v5->m_refCount, 1u);
  if ( ContextSerialization::readUserID((bdReference<bdByteBuffer>)&v9, &this->m_buyerPlayerId) && bdByteBuffer::readUInt32((bdByteBuffer *)buffer.m_ptr->__vftable, &this->m_skuId) && bdByteBuffer::readUInt32((bdByteBuffer *)buffer.m_ptr->__vftable, &this->m_rentalDuration) && bdByteBuffer::readUInt32((bdByteBuffer *)buffer.m_ptr->__vftable, &this->m_expireDateTime) && bdByteBuffer::readInt32((bdByteBuffer *)buffer.m_ptr->__vftable, &this->m_penalty_percentage) )
    v6 = 1;
  else
LABEL_15:
    v6 = 0;
  if ( buffer.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->allocateBuffer, 0xFFFFFFFF) == 1 )
  {
    if ( buffer.m_ptr->__vftable )
      (*(void (__fastcall **)(bdByteBuffer_vtbl *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr->__vftable, 1i64);
    buffer.m_ptr->__vftable = NULL;
  }
  return v6;
}

/*
==============
bdMarketplaceCouponInventory::reset
==============
*/
void bdMarketplaceCouponInventory::reset(bdMarketplaceCouponInventory *this)
{
  unsigned __int64 userID[2]; 
  bdUserAccountID other; 

  userID[1] = -2i64;
  userID[0] = -1i64;
  bdUserAccountID::bdUserAccountID(&other, userID);
  bdUserAccountID::operator=(&this->m_ownerPlayerId, &other);
  this->m_claimed = 0;
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)other.gap38);
  bdReferencable::~bdReferencable((bdReferencable *)other.gap38);
  this->m_productId = 0;
  userID[0] = 0i64;
  bdUserAccountID::bdUserAccountID(&other, userID);
  bdUserAccountID::operator=(&this->m_buyerPlayerId, &other);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)other.gap38);
  bdReferencable::~bdReferencable((bdReferencable *)other.gap38);
  *(_QWORD *)&this->m_skuId = -1i64;
  this->m_expireDateTime = -1;
  this->m_penalty_percentage = 0;
  *(_QWORD *)this->_bytes_20 = 0i64;
  *(_QWORD *)&this->_bytes_20[8] = 0i64;
  *(_QWORD *)this->m_couponId = 0i64;
  this->m_couponId[8] = 0;
  this->m_metadataSize = 0;
  *(_QWORD *)this->m_metadata = 0i64;
  *(_QWORD *)&this->m_metadata[8] = 0i64;
  *(_QWORD *)&this->m_metadata[16] = 0i64;
  *(_QWORD *)&this->m_metadata[24] = 0i64;
  *(_QWORD *)&this->m_metadata[32] = 0i64;
  *(_QWORD *)&this->m_metadata[40] = 0i64;
  *(_QWORD *)&this->m_metadata[48] = 0i64;
  *(_QWORD *)&this->m_metadata[56] = 0i64;
  this->m_customSourceType = 0;
}

/*
==============
bdMarketplaceCouponInventory::serialize
==============
*/
bool bdMarketplaceCouponInventory::serialize(bdMarketplaceCouponInventory *this, bdByteBuffer *buffer)
{
  bdReference<bdByteBuffer> buffera; 
  bdReference<bdByteBuffer> v6; 

  if ( !bdByteBuffer::writeString(buffer, (const char *const)&this->__vftable + 16, 0x19ui64) )
    return 0;
  buffera.m_ptr = buffer;
  if ( buffer )
    _InterlockedExchangeAdd((volatile signed __int32 *)&buffer->m_refCount, 1u);
  if ( !ContextSerialization::writeUserID((bdReference<bdByteBuffer>)&buffera, (const bdUserAccountID *)this->m_couponId) || !bdByteBuffer::writeBool(buffer, this->m_ownerPlayerId.gap38[0]) || !bdByteBuffer::writeUInt32(buffer, *(_DWORD *)&this->m_ownerPlayerId.gap38[4]) )
    return 0;
  v6.m_ptr = buffer;
  if ( buffer )
    _InterlockedExchangeAdd((volatile signed __int32 *)&buffer->m_refCount, 1u);
  return ContextSerialization::writeUserID((bdReference<bdByteBuffer>)&v6, (const bdUserAccountID *)&this->m_ownerPlayerId.gap38[8]) && bdByteBuffer::writeUInt32(buffer, *(_DWORD *)this->m_buyerPlayerId.gap38) && bdByteBuffer::writeUInt32(buffer, *(_DWORD *)&this->m_buyerPlayerId.gap38[4]) && bdByteBuffer::writeUInt32(buffer, *(_DWORD *)&this->m_buyerPlayerId.gap38[12]) && bdByteBuffer::writeInt32(buffer, this->m_rentalDuration);
}

/*
==============
bdMarketplaceCouponInventory::serializedSizeOf
==============
*/
__int64 bdMarketplaceCouponInventory::serializedSizeOf(bdMarketplaceCouponInventory *this)
{
  unsigned int v2; 

  v2 = ContextSerialization::getUserIDSize((const bdUserAccountID *)this->m_couponId) + 25;
  return ContextSerialization::getUserIDSize((const bdUserAccountID *)&this->m_ownerPlayerId.gap38[8]) + v2 + 27;
}

/*
==============
bdMarketplaceCouponInventory::sizeOf
==============
*/
__int64 bdMarketplaceCouponInventory::sizeOf(bdMarketplaceCouponInventory *this)
{
  return 328i64;
}

