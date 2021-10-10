/*
==============
bdMarketplacePlayerAssetsV3::bdMarketplacePlayerAssetsV3
==============
*/

void __fastcall bdMarketplacePlayerAssetsV3::bdMarketplacePlayerAssetsV3(bdMarketplacePlayerAssetsV3 *this, const bdUserAccountID *playerId, const bdFastArray<bdMarketplacePlayerCurrency> *balances, const bdFastArray<bdMarketplaceInventoryV3> *inventory, const bdMarketplaceEntitlement *entitlements, const bdFastArray<bdMarketplaceCouponInventoryV4> *coupons)
{
  ??0bdMarketplacePlayerAssetsV3@@QEAA@VbdUserAccountID@@V?$bdFastArray@VbdMarketplacePlayerCurrency@@@@V?$bdFastArray@VbdMarketplaceInventoryV3@@@@PEBVbdMarketplaceEntitlement@@V?$bdFastArray@VbdMarketplaceCouponInventoryV4@@@@@Z(this, playerId, balances, inventory, entitlements, coupons);
}

/*
==============
bdMarketplacePlayerAssetsV3::sizeOf
==============
*/

unsigned int __fastcall bdMarketplacePlayerAssetsV3::sizeOf(bdMarketplacePlayerAssetsV3 *this)
{
  return ?sizeOf@bdMarketplacePlayerAssetsV3@@UEAAIXZ(this);
}

/*
==============
bdMarketplacePlayerAssetsV3::bdMarketplacePlayerAssetsV3
==============
*/

void __fastcall bdMarketplacePlayerAssetsV3::bdMarketplacePlayerAssetsV3(bdMarketplacePlayerAssetsV3 *this)
{
  ??0bdMarketplacePlayerAssetsV3@@QEAA@XZ(this);
}

/*
==============
bdMarketplacePlayerAssetsV3::reset
==============
*/

void __fastcall bdMarketplacePlayerAssetsV3::reset(bdMarketplacePlayerAssetsV3 *this)
{
  ?reset@bdMarketplacePlayerAssetsV3@@UEAAXXZ(this);
}

/*
==============
bdMarketplacePlayerAssetsV3::serializedSizeOf
==============
*/

int __fastcall bdMarketplacePlayerAssetsV3::serializedSizeOf(bdMarketplacePlayerAssetsV3 *this)
{
  return ?serializedSizeOf@bdMarketplacePlayerAssetsV3@@UEBAHXZ(this);
}

/*
==============
bdMarketplacePlayerAssetsV3::serialize
==============
*/

bool __fastcall bdMarketplacePlayerAssetsV3::serialize(bdMarketplacePlayerAssetsV3 *this, bdByteBuffer *buffer)
{
  return ?serialize@bdMarketplacePlayerAssetsV3@@UEBA_NAEAVbdByteBuffer@@@Z(this, buffer);
}

/*
==============
bdMarketplacePlayerAssetsV3::deserialize
==============
*/

bool __fastcall bdMarketplacePlayerAssetsV3::deserialize(bdMarketplacePlayerAssetsV3 *this, bdReference<bdByteBuffer> buffer)
{
  return ?deserialize@bdMarketplacePlayerAssetsV3@@UEAA_NV?$bdReference@VbdByteBuffer@@@@@Z(this, buffer);
}

/*
==============
bdMarketplacePlayerAssetsV3::bdMarketplacePlayerAssetsV3
==============
*/
void bdMarketplacePlayerAssetsV3::bdMarketplacePlayerAssetsV3(bdMarketplacePlayerAssetsV3 *this, const bdUserAccountID *playerId, const bdFastArray<bdMarketplacePlayerCurrency> *balances, const bdFastArray<bdMarketplaceInventoryV3> *inventory, const bdMarketplaceEntitlement *entitlements, const bdFastArray<bdMarketplaceCouponInventoryV4> *coupons, int a7)
{
  bdMarketplaceCouponInventoryV4 *v11; 
  bdMarketplacePlayerCurrency *v12; 
  unsigned int m_capacity; 
  unsigned int m_size; 
  bdMarketplaceInventoryV3 *v15; 
  __int64 v16; 
  __int64 v17; 
  __int64 v18; 
  __int64 v19; 
  unsigned int *m_playerEntitlements; 
  signed __int64 v21; 
  __int64 v22; 
  __int64 v23; 
  unsigned int *m_playerEntitlementLevels; 

  v11 = NULL;
  if ( a7 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdMarketplacePlayerAssetsV3::`vbtable'{for `bdTaskResult'};
    *((_QWORD *)&this->__vftable + 3) = &bdMarketplacePlayerAssetsV3::`vbtable'{for `bdSerializable'};
    *((_QWORD *)&this->m_coupons + 2) = &bdReferencable::`vftable';
    *((_DWORD *)&this->m_coupons + 6) = 0;
  }
  bdTaskResult::bdTaskResult(this);
  bdSerializable::bdSerializable((bdSerializable *)(&this->__vftable + 2));
  this->__vftable = (bdMarketplacePlayerAssetsV3_vtbl *)&bdMarketplacePlayerAssetsV3::`vftable'{for `bdTaskResult'};
  *((_QWORD *)&this->__vftable + 2) = &bdMarketplacePlayerAssetsV3::`vftable'{for `bdSerializable'};
  *(bdMarketplacePlayerAssetsV3_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdMarketplacePlayerAssetsV3_vtbl *)&bdMarketplacePlayerAssetsV3::`vftable'{for `bdReferencable'};
  bdUserAccountID::bdUserAccountID((bdUserAccountID *)this->_bytes_20, playerId);
  this->m_playerBalances.m_capacity = balances->m_capacity;
  this->m_playerBalances.m_size = balances->m_size;
  v12 = NULL;
  m_capacity = balances->m_capacity;
  if ( m_capacity )
  {
    v12 = (bdMarketplacePlayerCurrency *)bdMemory::allocate((unsigned __int64)m_capacity << 7);
    m_size = balances->m_size;
    if ( m_size )
      memcpy_0(v12, balances->m_data, (unsigned __int64)m_size << 7);
  }
  this->m_playerBalances.m_data = v12;
  this->m_playerInventoryItems.m_capacity = inventory->m_capacity;
  this->m_playerInventoryItems.m_size = inventory->m_size;
  v15 = NULL;
  v16 = inventory->m_capacity;
  if ( (_DWORD)v16 )
  {
    v15 = (bdMarketplaceInventoryV3 *)bdMemory::allocate(232 * v16);
    v17 = inventory->m_size;
    if ( (_DWORD)v17 )
      memcpy_0(v15, inventory->m_data, 232 * v17);
  }
  this->m_playerInventoryItems.m_data = v15;
  bdMarketplaceEntitlement::bdMarketplaceEntitlement(&this->m_playerEntitlements);
  this->m_coupons.m_capacity = coupons->m_capacity;
  this->m_coupons.m_size = coupons->m_size;
  v18 = coupons->m_capacity;
  if ( (_DWORD)v18 )
  {
    v11 = (bdMarketplaceCouponInventoryV4 *)bdMemory::allocate(336 * v18);
    v19 = coupons->m_size;
    if ( (_DWORD)v19 )
      memcpy_0(v11, coupons->m_data, 336 * v19);
  }
  this->m_coupons.m_data = v11;
  this->m_numPlayerBalances = balances->m_size;
  this->m_numPlayerInventoryItems = inventory->m_size;
  this->m_numCoupons = coupons->m_size;
  bdReferencable::operator=((bdReferencable *)((char *)&this->m_playerEntitlements.__vftable + *(int *)(*((_QWORD *)&this->m_playerEntitlements.__vftable + 1) + 4i64) + 8), (const bdReferencable *)((char *)&entitlements->__vftable + *(int *)(*((_QWORD *)&entitlements->__vftable + 1) + 4i64) + 8));
  bdReferencable::operator=((bdReferencable *)((char *)&this->m_playerEntitlements.__vftable + *(int *)(*((_QWORD *)&this->m_playerEntitlements.__vftable + 3) + 4i64) + 24), (const bdReferencable *)((char *)&entitlements->__vftable + *(int *)(*((_QWORD *)&entitlements->__vftable + 3) + 4i64) + 24));
  bdUserAccountID::operator=((bdUserAccountID *)this->m_playerEntitlements._bytes_20, (const bdUserAccountID *)entitlements->_bytes_20);
  this->m_playerEntitlements.m_numPlayerEntitlements = entitlements->m_numPlayerEntitlements;
  m_playerEntitlements = this->m_playerEntitlements.m_playerEntitlements;
  v21 = (char *)entitlements - (char *)&this->m_playerEntitlements;
  v22 = 500i64;
  v23 = 500i64;
  do
  {
    *m_playerEntitlements = *(unsigned int *)((char *)m_playerEntitlements + v21);
    m_playerEntitlements[1] = *(unsigned int *)((char *)m_playerEntitlements + v21 + 4);
    m_playerEntitlements += 2;
    --v23;
  }
  while ( v23 );
  m_playerEntitlementLevels = this->m_playerEntitlements.m_playerEntitlementLevels;
  do
  {
    *m_playerEntitlementLevels = *(unsigned int *)((char *)m_playerEntitlementLevels + v21);
    m_playerEntitlementLevels[1] = *(unsigned int *)((char *)m_playerEntitlementLevels + v21 + 4);
    m_playerEntitlementLevels += 2;
    --v22;
  }
  while ( v22 );
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)playerId->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)playerId->gap38);
  bdMemory::deallocate(balances->m_data);
  balances->m_data = NULL;
  *(_QWORD *)&balances->m_capacity = 0i64;
  bdMemory::deallocate(inventory->m_data);
  inventory->m_data = NULL;
  *(_QWORD *)&inventory->m_capacity = 0i64;
  bdMemory::deallocate(coupons->m_data);
  coupons->m_data = NULL;
  *(_QWORD *)&coupons->m_capacity = 0i64;
}

/*
==============
bdMarketplacePlayerAssetsV3::bdMarketplacePlayerAssetsV3
==============
*/
void bdMarketplacePlayerAssetsV3::bdMarketplacePlayerAssetsV3(bdMarketplacePlayerAssetsV3 *this, int a2)
{
  unsigned __int64 userID[3]; 
  bdUserAccountID other; 

  userID[1] = -2i64;
  userID[2] = (unsigned __int64)this;
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdMarketplacePlayerAssetsV3::`vbtable'{for `bdTaskResult'};
    *((_QWORD *)&this->__vftable + 3) = &bdMarketplacePlayerAssetsV3::`vbtable'{for `bdSerializable'};
    *((_QWORD *)&this->m_coupons + 2) = &bdReferencable::`vftable';
    *((_DWORD *)&this->m_coupons + 6) = 0;
  }
  bdTaskResult::bdTaskResult(this);
  bdSerializable::bdSerializable((bdSerializable *)(&this->__vftable + 2));
  this->__vftable = (bdMarketplacePlayerAssetsV3_vtbl *)&bdMarketplacePlayerAssetsV3::`vftable'{for `bdTaskResult'};
  *((_QWORD *)&this->__vftable + 2) = &bdMarketplacePlayerAssetsV3::`vftable'{for `bdSerializable'};
  *(bdMarketplacePlayerAssetsV3_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdMarketplacePlayerAssetsV3_vtbl *)&bdMarketplacePlayerAssetsV3::`vftable'{for `bdReferencable'};
  bdUserAccountID::bdUserAccountID((bdUserAccountID *)this->_bytes_20);
  this->m_playerBalances.m_data = NULL;
  *(_QWORD *)&this->m_playerBalances.m_capacity = 0i64;
  this->m_playerInventoryItems.m_data = NULL;
  *(_QWORD *)&this->m_playerInventoryItems.m_capacity = 0i64;
  bdMarketplaceEntitlement::bdMarketplaceEntitlement(&this->m_playerEntitlements);
  this->m_coupons.m_data = NULL;
  *(_QWORD *)&this->m_coupons.m_capacity = 0i64;
  userID[0] = 0i64;
  bdUserAccountID::bdUserAccountID(&other, userID);
  bdUserAccountID::operator=((bdUserAccountID *)this->_bytes_20, &other);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)other.gap38);
  bdReferencable::~bdReferencable((bdReferencable *)other.gap38);
  this->m_numPlayerBalances = 0;
  this->m_numPlayerInventoryItems = 0;
  this->m_numCoupons = 0;
  bdMemory::deallocate(this->m_playerBalances.m_data);
  this->m_playerBalances.m_data = NULL;
  *(_QWORD *)&this->m_playerBalances.m_capacity = 0i64;
  bdMemory::deallocate(this->m_playerInventoryItems.m_data);
  this->m_playerInventoryItems.m_data = NULL;
  *(_QWORD *)&this->m_playerInventoryItems.m_capacity = 0i64;
  bdMarketplaceEntitlement::reset(&this->m_playerEntitlements);
  bdMemory::deallocate(this->m_coupons.m_data);
  this->m_coupons.m_data = NULL;
  *(_QWORD *)&this->m_coupons.m_capacity = 0i64;
}

/*
==============
bdMarketplacePlayerAssetsV3::deserialize
==============
*/
char bdMarketplacePlayerAssetsV3::deserialize(bdMarketplacePlayerAssetsV3 *this, bdReference<bdByteBuffer> buffer)
{
  unsigned int v4; 
  bdByteBuffer *v5; 
  const bdUserAccountID *bytes_20; 
  bool v7; 
  unsigned int m_numPlayerBalances; 
  const bdUserAccountID *v10; 
  bdByteBuffer_vtbl *v11; 
  unsigned int m_capacity; 
  unsigned int v13; 
  unsigned int v14; 
  bdMarketplacePlayerCurrency *v15; 
  unsigned int m_size; 
  bool v17; 
  unsigned int m_numPlayerInventoryItems; 
  unsigned int v19; 
  const bdUserAccountID *v20; 
  bdByteBuffer_vtbl *v21; 
  unsigned int v22; 
  unsigned int v23; 
  bdMarketplaceInventoryV3 *v24; 
  unsigned int v25; 
  __int64 v26; 
  bool (__fastcall *deserialize)(bdMarketplaceEntitlement *, bdReference<bdByteBuffer>, const bdUserAccountID); 
  __int64 v28; 
  bdByteBuffer_vtbl *v29; 
  char v30; 
  unsigned int m_numCoupons; 
  unsigned int v32; 
  bdByteBuffer *v33; 
  unsigned int v34; 
  unsigned int v35; 
  unsigned int v36; 
  bdMarketplaceCouponInventoryV4 *v37; 
  __int64 v38; 
  bdMarketplaceCouponInventoryV4 *v39; 
  bdMarketplaceCouponInventoryV4 *v40; 
  __int64 v41; 
  int v42; 
  bdReference<bdByteBuffer> v43; 
  bdReference<bdByteBuffer> buffera; 
  bdByteBuffer_vtbl *v45; 
  bdByteBuffer_vtbl *v46; 
  __int64 v47[3]; 
  bdUserAccountID v48; 
  bdUserAccountID v49; 
  bdUserAccountID v50; 
  bdMarketplacePlayerCurrency v51; 
  bdMarketplaceInventory v52; 
  bdMarketplaceCouponInventoryV4 v53; 

  v47[1] = -2i64;
  v47[2] = (__int64)buffer.m_ptr;
  v4 = 0;
  v42 = 0;
  v5 = (bdByteBuffer *)buffer.m_ptr->__vftable;
  buffera.m_ptr = v5;
  if ( v5 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v5->m_refCount, 1u);
  bytes_20 = (const bdUserAccountID *)this->_bytes_20;
  v7 = ContextSerialization::readUserID((bdReference<bdByteBuffer>)&buffera, (bdUserAccountID *)this->_bytes_20) && bdByteBuffer::readUInt32((bdByteBuffer *)buffer.m_ptr->__vftable, &this->m_numPlayerBalances);
  if ( this->m_numPlayerBalances > 0xA )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdMarketplace/bdMarketplacePlayerAssetsV3", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplaceplayerassetsv3.cpp", "bdMarketplacePlayerAssetsV3::deserialize", 0x51u, "numPlayerBalances %u exceeded maximum size %u", this->m_numPlayerBalances, 10);
    this->reset(this);
    if ( buffer.m_ptr->__vftable && !_InterlockedDecrement((volatile signed __int32 *)&buffer.m_ptr->allocateBuffer) )
    {
      if ( buffer.m_ptr->__vftable )
        (*(void (__fastcall **)(bdByteBuffer_vtbl *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr->__vftable, 1i64);
      buffer.m_ptr->__vftable = NULL;
    }
    return 0;
  }
  bdMemory::deallocate(this->m_playerBalances.m_data);
  this->m_playerBalances.m_data = NULL;
  *(_QWORD *)&this->m_playerBalances.m_capacity = 0i64;
  m_numPlayerBalances = this->m_numPlayerBalances;
  if ( m_numPlayerBalances )
  {
    bdFastArray<bdMarketplacePlayerCurrency>::increaseCapacity(&this->m_playerBalances, m_numPlayerBalances);
    if ( this->m_numPlayerBalances )
    {
      do
      {
        bdMarketplacePlayerCurrency::bdMarketplacePlayerCurrency(&v51);
        if ( !v7 )
          goto LABEL_21;
        bdUserAccountID::bdUserAccountID(&v48, bytes_20);
        v11 = buffer.m_ptr->__vftable;
        v45 = v11;
        if ( v11 )
          _InterlockedExchangeAdd((volatile signed __int32 *)&v11->allocateBuffer, 1u);
        if ( bdMarketplacePlayerCurrency::deserialize(&v51, (bdReference<bdByteBuffer>)&v45, v10) )
          v7 = 1;
        else
LABEL_21:
          v7 = 0;
        m_capacity = this->m_playerBalances.m_capacity;
        if ( this->m_playerBalances.m_size == m_capacity )
        {
          v13 = this->m_playerBalances.m_capacity;
          if ( !m_capacity )
            v13 = 1;
          v14 = m_capacity + v13;
          v15 = NULL;
          if ( m_capacity + v13 )
          {
            v15 = (bdMarketplacePlayerCurrency *)bdMemory::allocate((unsigned __int64)v14 << 7);
            m_size = this->m_playerBalances.m_size;
            if ( m_size )
              memcpy_0(v15, this->m_playerBalances.m_data, (unsigned __int64)m_size << 7);
          }
          bdMemory::deallocate(this->m_playerBalances.m_data);
          this->m_playerBalances.m_data = v15;
          this->m_playerBalances.m_capacity = v14;
          bytes_20 = (const bdUserAccountID *)this->_bytes_20;
        }
        this->m_playerBalances.m_data[(unsigned __int64)this->m_playerBalances.m_size++] = v51;
        bdUserAccountID::~bdUserAccountID((bdUserAccountID *)&v51.m_playerId[40]);
        bdReferencable::~bdReferencable((bdReferencable *)&v51.m_playerId[40]);
        bdSerializable::~bdSerializable((bdSerializable *)v51._bytes_20);
        bdTaskResult::~bdTaskResult((bdTaskResult *)(&v51.__vftable + 2));
        bdReferencable::~bdReferencable((bdReferencable *)(&v51.m_value + 1));
        ++v4;
      }
      while ( v4 < this->m_numPlayerBalances );
    }
  }
  v17 = v7 && bdByteBuffer::readUInt32((bdByteBuffer *)buffer.m_ptr->__vftable, &this->m_numPlayerInventoryItems);
  if ( this->m_numPlayerInventoryItems > 0x800 )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdMarketplace/bdMarketplacePlayerAssetsV3", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplaceplayerassetsv3.cpp", "bdMarketplacePlayerAssetsV3::deserialize", 0x67u, "numPlayerInventoryItems %u exceeded maximum size %u", this->m_numPlayerInventoryItems, 2048);
    this->reset(this);
    if ( !buffer.m_ptr->__vftable || _InterlockedDecrement((volatile signed __int32 *)&buffer.m_ptr->allocateBuffer) )
      return 0;
    if ( buffer.m_ptr->__vftable )
      (*(void (__fastcall **)(bdByteBuffer_vtbl *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr->__vftable, 1i64);
LABEL_39:
    buffer.m_ptr->__vftable = NULL;
    return 0;
  }
  bdMemory::deallocate(this->m_playerInventoryItems.m_data);
  this->m_playerInventoryItems.m_data = NULL;
  *(_QWORD *)&this->m_playerInventoryItems.m_capacity = 0i64;
  m_numPlayerInventoryItems = this->m_numPlayerInventoryItems;
  if ( m_numPlayerInventoryItems )
  {
    bdFastArray<bdMarketplaceInventoryV3>::increaseCapacity(&this->m_playerInventoryItems, m_numPlayerInventoryItems);
    m_numPlayerInventoryItems = this->m_numPlayerInventoryItems;
  }
  v19 = 0;
  if ( m_numPlayerInventoryItems )
  {
    do
    {
      *((_QWORD *)&v52.__vftable + 1) = &bdMarketplaceInventoryV3::`vbtable'{for `bdTaskResult'};
      *((_QWORD *)&v52.__vftable + 3) = &bdMarketplaceInventoryV3::`vbtable'{for `bdSerializable'};
      *(_QWORD *)&v52.gapD4[4] = &bdReferencable::`vftable';
      *(_DWORD *)&v52.gapD4[12] = 0;
      v42 |= 1u;
      bdMarketplaceInventory::bdMarketplaceInventory(&v52);
      v52.__vftable = (bdMarketplaceInventory_vtbl *)&bdMarketplaceInventoryV3::`vftable'{for `bdTaskResult'};
      *((_QWORD *)&v52.__vftable + 2) = &bdMarketplaceInventoryV3::`vftable'{for `bdSerializable'};
      *(_QWORD *)&v52._bytes_20[*(int *)(*((_QWORD *)&v52.__vftable + 1) + 4i64) - 24] = &bdMarketplaceInventoryV3::`vftable'{for `bdReferencable'};
      if ( !v17 )
        goto LABEL_49;
      bdUserAccountID::bdUserAccountID(&v49, bytes_20);
      v21 = buffer.m_ptr->__vftable;
      v46 = v21;
      if ( v21 )
        _InterlockedExchangeAdd((volatile signed __int32 *)&v21->allocateBuffer, 1u);
      if ( bdMarketplaceInventoryV3::deserialize((bdMarketplaceInventoryV3 *)&v52, (bdReference<bdByteBuffer>)&v46, v20) )
        v17 = 1;
      else
LABEL_49:
        v17 = 0;
      v22 = this->m_playerInventoryItems.m_capacity;
      if ( this->m_playerInventoryItems.m_size == v22 )
      {
        v23 = this->m_playerInventoryItems.m_capacity;
        if ( !v22 )
          v23 = 1;
        v24 = NULL;
        v25 = v22 + v23;
        if ( v25 )
        {
          v24 = (bdMarketplaceInventoryV3 *)bdMemory::allocate(232i64 * v25);
          v26 = this->m_playerInventoryItems.m_size;
          if ( (_DWORD)v26 )
            memcpy_0(v24, this->m_playerInventoryItems.m_data, 232 * v26);
        }
        bdMemory::deallocate(this->m_playerInventoryItems.m_data);
        this->m_playerInventoryItems.m_data = v24;
        this->m_playerInventoryItems.m_capacity = v25;
      }
      this->m_playerInventoryItems.m_data[this->m_playerInventoryItems.m_size++] = (bdMarketplaceInventoryV3)v52;
      bdUserAccountID::~bdUserAccountID((bdUserAccountID *)&v52.m_playerId[40]);
      bdReferencable::~bdReferencable((bdReferencable *)&v52.m_playerId[40]);
      bdSerializable::~bdSerializable((bdSerializable *)v52._bytes_20);
      bdTaskResult::~bdTaskResult((bdTaskResult *)(&v52.__vftable + 2));
      bdReferencable::~bdReferencable((bdReferencable *)&v52.gapD4[4]);
      ++v19;
      bytes_20 = (const bdUserAccountID *)this->_bytes_20;
    }
    while ( v19 < this->m_numPlayerInventoryItems );
  }
  if ( !v17 )
    goto LABEL_64;
  deserialize = this->m_playerEntitlements.deserialize;
  bdUserAccountID::bdUserAccountID(&v50, (const bdUserAccountID *)this->_bytes_20);
  v29 = buffer.m_ptr->__vftable;
  v47[0] = (__int64)v29;
  if ( v29 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v29->allocateBuffer, 1u);
  if ( ((unsigned __int8 (__fastcall *)(bdMarketplaceEntitlement *, __int64 *, __int64))deserialize)(&this->m_playerEntitlements, v47, v28) && bdByteBuffer::readUInt32((bdByteBuffer *)buffer.m_ptr->__vftable, &this->m_numCoupons) )
    v30 = 1;
  else
LABEL_64:
    v30 = 0;
  if ( this->m_numCoupons > 0x800 )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdMarketplace/bdMarketplacePlayerAssetsV3", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplaceplayerassetsv3.cpp", "bdMarketplacePlayerAssetsV3::deserialize", 0x80u, "numCoupons %u exceeded maximum size %u", this->m_numCoupons, 2048);
    this->reset(this);
    if ( !buffer.m_ptr->__vftable || _InterlockedDecrement((volatile signed __int32 *)&buffer.m_ptr->allocateBuffer) )
      return 0;
    if ( buffer.m_ptr->__vftable )
    {
      (*(void (__fastcall **)(bdByteBuffer_vtbl *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr->__vftable, 1i64);
      buffer.m_ptr->__vftable = NULL;
      return 0;
    }
    goto LABEL_39;
  }
  bdMemory::deallocate(this->m_coupons.m_data);
  this->m_coupons.m_data = NULL;
  *(_QWORD *)&this->m_coupons.m_capacity = 0i64;
  m_numCoupons = this->m_numCoupons;
  if ( m_numCoupons )
  {
    bdFastArray<bdMarketplaceCouponInventoryV4>::increaseCapacity(&this->m_coupons, m_numCoupons);
    m_numCoupons = this->m_numCoupons;
  }
  v32 = 0;
  if ( m_numCoupons )
  {
    do
    {
      bdMarketplaceCouponInventoryV4::bdMarketplaceCouponInventoryV4(&v53);
      if ( !v30 )
        goto LABEL_78;
      v33 = (bdByteBuffer *)buffer.m_ptr->__vftable;
      v43.m_ptr = v33;
      if ( v33 )
        _InterlockedExchangeAdd((volatile signed __int32 *)&v33->m_refCount, 1u);
      if ( bdMarketplaceCouponInventoryV4::deserialize(&v53, (bdReference<bdByteBuffer>)&v43) )
        v30 = 1;
      else
LABEL_78:
        v30 = 0;
      v34 = this->m_coupons.m_capacity;
      if ( this->m_coupons.m_size == v34 )
      {
        v35 = this->m_coupons.m_capacity;
        if ( !v34 )
          v35 = 1;
        v36 = v34 + v35;
        v37 = NULL;
        if ( v34 + v35 )
        {
          v37 = (bdMarketplaceCouponInventoryV4 *)bdMemory::allocate(336i64 * v36);
          v38 = this->m_coupons.m_size;
          if ( (_DWORD)v38 )
            memcpy_0(v37, this->m_coupons.m_data, 336 * v38);
        }
        bdMemory::deallocate(this->m_coupons.m_data);
        this->m_coupons.m_data = v37;
        this->m_coupons.m_capacity = v36;
      }
      v39 = &this->m_coupons.m_data[this->m_coupons.m_size];
      v40 = &v53;
      v41 = 2i64;
      do
      {
        *(_OWORD *)&v39->__vftable = *(_OWORD *)&v40->__vftable;
        *((_OWORD *)&v39->__vftable + 1) = *((_OWORD *)&v40->__vftable + 1);
        *(_OWORD *)v39->_bytes_20 = *(_OWORD *)v40->_bytes_20;
        *(_OWORD *)v39->m_couponId = *(_OWORD *)v40->m_couponId;
        *(_OWORD *)&v39->m_ownerPlayerId.__vftable = *(_OWORD *)&v40->m_ownerPlayerId.__vftable;
        *((_OWORD *)&v39->m_ownerPlayerId.__vftable + 1) = *((_OWORD *)&v40->m_ownerPlayerId.__vftable + 1);
        *(_OWORD *)v39->m_ownerPlayerId._bytes_20 = *(_OWORD *)v40->m_ownerPlayerId._bytes_20;
        v39 = (bdMarketplaceCouponInventoryV4 *)((char *)v39 + 128);
        *(_OWORD *)&v39[-1].gap13C[4] = *(_OWORD *)&v40->m_ownerPlayerId.m_userID;
        v40 = (bdMarketplaceCouponInventoryV4 *)((char *)v40 + 128);
        --v41;
      }
      while ( v41 );
      *(_OWORD *)&v39->__vftable = *(_OWORD *)&v40->__vftable;
      *((_OWORD *)&v39->__vftable + 1) = *((_OWORD *)&v40->__vftable + 1);
      *(_OWORD *)v39->_bytes_20 = *(_OWORD *)v40->_bytes_20;
      *(_OWORD *)v39->m_couponId = *(_OWORD *)v40->m_couponId;
      *(_OWORD *)&v39->m_ownerPlayerId.__vftable = *(_OWORD *)&v40->m_ownerPlayerId.__vftable;
      ++this->m_coupons.m_size;
      bdUserAccountID::~bdUserAccountID((bdUserAccountID *)v53.m_buyerPlayerId.gap38);
      bdReferencable::~bdReferencable((bdReferencable *)v53.m_buyerPlayerId.gap38);
      bdUserAccountID::~bdUserAccountID((bdUserAccountID *)v53.m_ownerPlayerId.gap38);
      bdReferencable::~bdReferencable((bdReferencable *)v53.m_ownerPlayerId.gap38);
      bdSerializable::~bdSerializable((bdSerializable *)v53._bytes_20);
      bdTaskResult::~bdTaskResult((bdTaskResult *)(&v53.__vftable + 2));
      bdReferencable::~bdReferencable((bdReferencable *)&v53.gap13C[4]);
      ++v32;
    }
    while ( v32 < this->m_numCoupons );
  }
  if ( buffer.m_ptr->__vftable && !_InterlockedDecrement((volatile signed __int32 *)&buffer.m_ptr->allocateBuffer) )
  {
    if ( buffer.m_ptr->__vftable )
      (*(void (__fastcall **)(bdByteBuffer_vtbl *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr->__vftable, 1i64);
    buffer.m_ptr->__vftable = NULL;
  }
  return v30;
}

/*
==============
bdMarketplacePlayerAssetsV3::reset
==============
*/
void bdMarketplacePlayerAssetsV3::reset(bdMarketplacePlayerAssetsV3 *this)
{
  unsigned __int64 v2[2]; 
  bdUserAccountID other; 

  v2[1] = -2i64;
  v2[0] = 0i64;
  bdUserAccountID::bdUserAccountID(&other, v2);
  bdUserAccountID::operator=((bdUserAccountID *)this->_bytes_20, &other);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)other.gap38);
  bdReferencable::~bdReferencable((bdReferencable *)other.gap38);
  this->m_numPlayerBalances = 0;
  this->m_numPlayerInventoryItems = 0;
  this->m_numCoupons = 0;
  bdMemory::deallocate(this->m_playerBalances.m_data);
  this->m_playerBalances.m_data = NULL;
  *(_QWORD *)&this->m_playerBalances.m_capacity = 0i64;
  bdMemory::deallocate(this->m_playerInventoryItems.m_data);
  this->m_playerInventoryItems.m_data = NULL;
  *(_QWORD *)&this->m_playerInventoryItems.m_capacity = 0i64;
  bdMarketplaceEntitlement::reset(&this->m_playerEntitlements);
  bdMemory::deallocate(this->m_coupons.m_data);
  this->m_coupons.m_data = NULL;
  *(_QWORD *)&this->m_coupons.m_capacity = 0i64;
}

/*
==============
bdMarketplacePlayerAssetsV3::serialize
==============
*/
bool bdMarketplacePlayerAssetsV3::serialize(bdMarketplacePlayerAssetsV3 *this, bdByteBuffer *buffer)
{
  bool v4; 
  unsigned int v5; 
  unsigned int i; 
  unsigned __int8 (__fastcall ***v7)(_QWORD, bdByteBuffer *); 
  bool v8; 
  unsigned int j; 
  unsigned __int8 (__fastcall ***v10)(_QWORD, bdByteBuffer *); 
  bool result; 
  unsigned __int8 (__fastcall ***v12)(_QWORD, bdByteBuffer *); 
  bdReference<bdByteBuffer> buffera; 

  buffera.m_ptr = buffer;
  if ( buffer )
    _InterlockedExchangeAdd((volatile signed __int32 *)&buffer->m_refCount, 1u);
  v4 = ContextSerialization::writeUserID((bdReference<bdByteBuffer>)&buffera, (const bdUserAccountID *)(&this->__vftable + 2)) && bdByteBuffer::writeUInt32(buffer, *(_DWORD *)&this->m_playerId[40]);
  v5 = 0;
  for ( i = 0; i < *(_DWORD *)&this->m_playerId[40]; ++i )
    v4 = v4 && (bdHandleAssert(i < *(&this->m_numPlayerBalances + 1), "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdfastarray.inl", "bdFastArray<class bdMarketplacePlayerCurrency>::operator []", 0x58u, "bdFastArray<T>::operator[], rangecheck failed"), v7 = (unsigned __int8 (__fastcall ***)(_QWORD, bdByteBuffer *))(((unsigned __int64)i << 7) + *(_QWORD *)&this->m_playerId[48] + 16), (**v7)(v7, buffer));
  v8 = v4 && bdByteBuffer::writeUInt32(buffer, (const unsigned int)this->m_playerBalances.m_data);
  for ( j = 0; j < LODWORD(this->m_playerBalances.m_data); ++j )
    v8 = v8 && (bdHandleAssert(j < *(&this->m_numPlayerInventoryItems + 1), "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdfastarray.inl", "bdFastArray<class bdMarketplaceInventoryV3>::operator []", 0x58u, "bdFastArray<T>::operator[], rangecheck failed"), v10 = (unsigned __int8 (__fastcall ***)(_QWORD, bdByteBuffer *))(232i64 * j + *(_QWORD *)&this->m_playerBalances.m_capacity + 16), (**v10)(v10, buffer));
  result = v8 && ((__int64 (__fastcall *)(bdMarketplaceEntitlement *, bdByteBuffer *))this->m_playerEntitlements.deserialize)(&this->m_playerEntitlements, buffer) && bdByteBuffer::writeUInt32(buffer, this->m_playerEntitlements.m_playerEntitlementLevels[1001]);
  if ( this->m_playerEntitlements.m_playerEntitlementLevels[1001] )
  {
    do
    {
      result = result && (bdHandleAssert(v5 < *(&this->m_numCoupons + 1), "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdfastarray.inl", "bdFastArray<class bdMarketplaceCouponInventoryV4>::operator []", 0x58u, "bdFastArray<T>::operator[], rangecheck failed"), v12 = (unsigned __int8 (__fastcall ***)(_QWORD, bdByteBuffer *))(336i64 * v5 + *(_QWORD *)&this->m_playerEntitlements.m_playerEntitlementLevels[1003] + 16), (**v12)(v12, buffer));
      ++v5;
    }
    while ( v5 < this->m_playerEntitlements.m_playerEntitlementLevels[1001] );
  }
  return result;
}

/*
==============
bdMarketplacePlayerAssetsV3::serializedSizeOf
==============
*/
__int64 bdMarketplacePlayerAssetsV3::serializedSizeOf(bdMarketplacePlayerAssetsV3 *this)
{
  unsigned int v2; 
  unsigned int v3; 
  unsigned int v4; 

  v2 = ContextSerialization::getUserIDSize((const bdUserAccountID *)(&this->__vftable + 2)) + 5;
  if ( *(_DWORD *)&this->m_playerId[40] )
  {
    bdHandleAssert(*(&this->m_numPlayerBalances + 1) != 0, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdfastarray.inl", "bdFastArray<class bdMarketplacePlayerCurrency>::operator []", 0x58u, "bdFastArray<T>::operator[], rangecheck failed");
    v2 += *(_DWORD *)&this->m_playerId[40] * (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)&this->m_playerId[48] + 16i64) + 8i64))(*(_QWORD *)&this->m_playerId[48] + 16i64);
  }
  v3 = v2 + 5;
  if ( LODWORD(this->m_playerBalances.m_data) )
  {
    bdHandleAssert(*(&this->m_numPlayerInventoryItems + 1) != 0, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdfastarray.inl", "bdFastArray<class bdMarketplaceInventoryV3>::operator []", 0x58u, "bdFastArray<T>::operator[], rangecheck failed");
    v3 += LODWORD(this->m_playerBalances.m_data) * (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)&this->m_playerBalances.m_capacity + 16i64) + 8i64))(*(_QWORD *)&this->m_playerBalances.m_capacity + 16i64);
  }
  v4 = v3 + ((__int64 (__fastcall *)(bdMarketplaceEntitlement *))this->m_playerEntitlements.sizeOf)(&this->m_playerEntitlements) + 5;
  if ( !this->m_playerEntitlements.m_playerEntitlementLevels[1001] )
    return v4;
  bdHandleAssert(*(&this->m_numCoupons + 1) != 0, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdfastarray.inl", "bdFastArray<class bdMarketplaceCouponInventoryV4>::operator []", 0x58u, "bdFastArray<T>::operator[], rangecheck failed");
  return v4 + this->m_playerEntitlements.m_playerEntitlementLevels[1001] * (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)&this->m_playerEntitlements.m_playerEntitlementLevels[1003] + 16i64) + 8i64))(*(_QWORD *)&this->m_playerEntitlements.m_playerEntitlementLevels[1003] + 16i64);
}

/*
==============
bdMarketplacePlayerAssetsV3::sizeOf
==============
*/
__int64 bdMarketplacePlayerAssetsV3::sizeOf(bdMarketplacePlayerAssetsV3 *this)
{
  return 8320i64;
}

