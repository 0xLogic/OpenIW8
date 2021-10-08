/*
==============
bdMarketplaceCouponInventoryV2::deserialize
==============
*/

bool __fastcall bdMarketplaceCouponInventoryV2::deserialize(bdMarketplaceCouponInventoryV2 *this, bdReference<bdByteBuffer> buffer)
{
  return ?deserialize@bdMarketplaceCouponInventoryV2@@UEAA_NV?$bdReference@VbdByteBuffer@@@@@Z(this, buffer);
}

/*
==============
bdMarketplaceCouponInventoryV2::reset
==============
*/

void __fastcall bdMarketplaceCouponInventoryV2::reset(bdMarketplaceCouponInventoryV2 *this)
{
  ?reset@bdMarketplaceCouponInventoryV2@@QEAAXXZ(this);
}

/*
==============
bdMarketplaceCouponInventoryV2::serialize
==============
*/

bool __fastcall bdMarketplaceCouponInventoryV2::serialize(bdMarketplaceCouponInventoryV2 *this, bdByteBuffer *buffer)
{
  return ?serialize@bdMarketplaceCouponInventoryV2@@UEBA_NAEAVbdByteBuffer@@@Z(this, buffer);
}

/*
==============
bdMarketplaceCouponInventoryV2::bdMarketplaceCouponInventoryV2
==============
*/

void __fastcall bdMarketplaceCouponInventoryV2::bdMarketplaceCouponInventoryV2(bdMarketplaceCouponInventoryV2 *this)
{
  ??0bdMarketplaceCouponInventoryV2@@QEAA@XZ(this);
}

/*
==============
bdMarketplaceCouponInventoryV2::serializedSizeOf
==============
*/

int __fastcall bdMarketplaceCouponInventoryV2::serializedSizeOf(bdMarketplaceCouponInventoryV2 *this)
{
  return ?serializedSizeOf@bdMarketplaceCouponInventoryV2@@UEBAHXZ(this);
}

/*
==============
bdMarketplaceCouponInventoryV2::sizeOf
==============
*/

unsigned int __fastcall bdMarketplaceCouponInventoryV2::sizeOf(bdMarketplaceCouponInventoryV2 *this)
{
  return ?sizeOf@bdMarketplaceCouponInventoryV2@@UEAAIXZ(this);
}

/*
==============
bdMarketplaceCouponInventoryV2::bdMarketplaceCouponInventoryV2
==============
*/
void bdMarketplaceCouponInventoryV2::bdMarketplaceCouponInventoryV2(bdMarketplaceCouponInventoryV2 *this, int a2)
{
  unsigned __int64 userID[3]; 
  bdUserAccountID other; 

  userID[1] = -2i64;
  userID[2] = (unsigned __int64)this;
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdMarketplaceCouponInventoryV2::`vbtable'{for `bdTaskResult'};
    *((_QWORD *)&this->__vftable + 3) = &bdMarketplaceCouponInventoryV2::`vbtable'{for `bdSerializable'};
    *(_QWORD *)&this->gap132[6] = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap132[14] = 0;
  }
  bdTaskResult::bdTaskResult(this);
  bdSerializable::bdSerializable((bdSerializable *)(&this->__vftable + 2));
  this->__vftable = (bdMarketplaceCouponInventoryV2_vtbl *)&bdMarketplaceCouponInventoryV2::`vftable'{for `bdTaskResult'};
  *((_QWORD *)&this->__vftable + 2) = &bdMarketplaceCouponInventoryV2::`vftable'{for `bdSerializable'};
  *(bdMarketplaceCouponInventoryV2_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdMarketplaceCouponInventoryV2_vtbl *)&bdMarketplaceCouponInventoryV2::`vftable'{for `bdReferencable'};
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
  this->m_rentalDurationUnit = 5;
  this->m_expireDateTime = -1;
  this->m_penalty_percentage = 0;
  *(_QWORD *)this->_bytes_20 = 0i64;
  *(_QWORD *)&this->_bytes_20[8] = 0i64;
  *(_QWORD *)this->m_couponId = 0i64;
  this->m_couponId[8] = 0;
  *(_WORD *)&this->m_metadataSize = 0;
  *(_QWORD *)this->m_metadata = 0i64;
  *(_QWORD *)&this->m_metadata[8] = 0i64;
  *(_QWORD *)&this->m_metadata[16] = 0i64;
  *(_QWORD *)&this->m_metadata[24] = 0i64;
  *(_QWORD *)&this->m_metadata[32] = 0i64;
  *(_QWORD *)&this->m_metadata[40] = 0i64;
  *(_QWORD *)&this->m_metadata[48] = 0i64;
  *(_QWORD *)&this->m_metadata[56] = 0i64;
}

/*
==============
bdMarketplaceCouponInventoryV2::deserialize
==============
*/
_BOOL8 bdMarketplaceCouponInventoryV2::deserialize(bdMarketplaceCouponInventoryV2 *this, bdReference<bdByteBuffer> buffer)
{
  bdByteBuffer *v4; 
  bdByteBuffer *v5; 
  char v6; 
  bool v7; 
  unsigned int length; 
  bdByteBuffer *m_ptr; 
  bdReference<bdByteBuffer> buffera; 
  bdReference<bdByteBuffer> v12; 

  m_ptr = buffer.m_ptr;
  if ( !bdByteBuffer::readString((bdByteBuffer *)buffer.m_ptr->__vftable, this->_bytes_20, 0x19ui64) )
    goto LABEL_18;
  v4 = (bdByteBuffer *)buffer.m_ptr->__vftable;
  buffera.m_ptr = v4;
  if ( v4 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v4->m_refCount, 1u);
  if ( !ContextSerialization::readUserID((bdReference<bdByteBuffer>)&buffera, &this->m_ownerPlayerId) || !bdByteBuffer::readBool((bdByteBuffer *)buffer.m_ptr->__vftable, &this->m_claimed) || !bdByteBuffer::readUInt32((bdByteBuffer *)buffer.m_ptr->__vftable, &this->m_productId) )
    goto LABEL_18;
  v5 = (bdByteBuffer *)buffer.m_ptr->__vftable;
  v12.m_ptr = v5;
  if ( v5 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v5->m_refCount, 1u);
  if ( !ContextSerialization::readUserID((bdReference<bdByteBuffer>)&v12, &this->m_buyerPlayerId) || !bdByteBuffer::readUInt32((bdByteBuffer *)buffer.m_ptr->__vftable, &this->m_skuId) || !bdByteBuffer::readUInt32((bdByteBuffer *)buffer.m_ptr->__vftable, &this->m_rentalDuration) || !bdByteBuffer::readUByte8((bdByteBuffer *)buffer.m_ptr->__vftable, &this->m_rentalDurationUnit) || !bdByteBuffer::readUInt32((bdByteBuffer *)buffer.m_ptr->__vftable, &this->m_expireDateTime) || !bdByteBuffer::readInt32((bdByteBuffer *)buffer.m_ptr->__vftable, &this->m_penalty_percentage) || !bdByteBuffer::readUInt32((bdByteBuffer *)buffer.m_ptr->__vftable, &this->m_productExpireDateTime) )
  {
LABEL_18:
    length = 64;
    goto LABEL_19;
  }
  length = 64;
  if ( !bdByteBuffer::readBlob((bdByteBuffer *)buffer.m_ptr->__vftable, this->m_metadata, &length) )
  {
LABEL_19:
    v6 = 0;
    goto LABEL_20;
  }
  v6 = 1;
LABEL_20:
  this->m_metadataSize = length;
  v7 = v6 && bdByteBuffer::readUByte8((bdByteBuffer *)buffer.m_ptr->__vftable, &this->m_customSourceType);
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
bdMarketplaceCouponInventoryV2::reset
==============
*/
void bdMarketplaceCouponInventoryV2::reset(bdMarketplaceCouponInventoryV2 *this)
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
  this->m_rentalDurationUnit = 5;
  this->m_expireDateTime = -1;
  this->m_penalty_percentage = 0;
  *(_QWORD *)this->_bytes_20 = 0i64;
  *(_QWORD *)&this->_bytes_20[8] = 0i64;
  *(_QWORD *)this->m_couponId = 0i64;
  this->m_couponId[8] = 0;
  *(_WORD *)&this->m_metadataSize = 0;
  *(_QWORD *)this->m_metadata = 0i64;
  *(_QWORD *)&this->m_metadata[8] = 0i64;
  *(_QWORD *)&this->m_metadata[16] = 0i64;
  *(_QWORD *)&this->m_metadata[24] = 0i64;
  *(_QWORD *)&this->m_metadata[32] = 0i64;
  *(_QWORD *)&this->m_metadata[40] = 0i64;
  *(_QWORD *)&this->m_metadata[48] = 0i64;
  *(_QWORD *)&this->m_metadata[56] = 0i64;
}

/*
==============
bdMarketplaceCouponInventoryV2::serialize
==============
*/
bool bdMarketplaceCouponInventoryV2::serialize(bdMarketplaceCouponInventoryV2 *this, bdByteBuffer *buffer)
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
  return ContextSerialization::writeUserID((bdReference<bdByteBuffer>)&v6, (const bdUserAccountID *)&this->m_ownerPlayerId.gap38[8]) && bdByteBuffer::writeUInt32(buffer, *(_DWORD *)this->m_buyerPlayerId.gap38) && bdByteBuffer::writeUInt32(buffer, *(_DWORD *)&this->m_buyerPlayerId.gap38[4]) && bdByteBuffer::writeUByte8(buffer, this->m_buyerPlayerId.gap38[8]) && bdByteBuffer::writeUInt32(buffer, *(_DWORD *)&this->m_buyerPlayerId.gap38[12]) && bdByteBuffer::writeInt32(buffer, this->m_rentalDuration) && bdByteBuffer::writeUInt32(buffer, this->m_skuId) && bdByteBuffer::writeBlob(buffer, &this->m_rentalDurationUnit, this->m_metadata[48]) && bdByteBuffer::writeUByte8(buffer, this->m_metadata[49]);
}

/*
==============
bdMarketplaceCouponInventoryV2::serializedSizeOf
==============
*/
__int64 bdMarketplaceCouponInventoryV2::serializedSizeOf(bdMarketplaceCouponInventoryV2 *this)
{
  unsigned int v2; 

  v2 = ContextSerialization::getUserIDSize((const bdUserAccountID *)this->m_couponId) + 25;
  return v2 + this->m_metadata[48] + ContextSerialization::getUserIDSize((const bdUserAccountID *)&this->m_ownerPlayerId.gap38[8]) + 42;
}

/*
==============
bdMarketplaceCouponInventoryV2::sizeOf
==============
*/
__int64 bdMarketplaceCouponInventoryV2::sizeOf(bdMarketplaceCouponInventoryV2 *this)
{
  return 328i64;
}

