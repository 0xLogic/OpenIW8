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
  bool v22; 
  unsigned int m_numPlayerInventoryItems; 
  unsigned int v24; 
  const bdUserAccountID *v25; 
  bdByteBuffer_vtbl *v26; 
  unsigned int v27; 
  unsigned int v28; 
  bdMarketplaceInventoryV3 *v29; 
  unsigned int v30; 
  __int64 v31; 
  bool (__fastcall *deserialize)(bdMarketplaceEntitlement *, bdReference<bdByteBuffer>, const bdUserAccountID); 
  __int64 v49; 
  bdByteBuffer_vtbl *v50; 
  char v51; 
  unsigned int m_numCoupons; 
  unsigned int v53; 
  bdByteBuffer *v54; 
  unsigned int v55; 
  unsigned int v56; 
  unsigned int v57; 
  bdMarketplaceCouponInventoryV4 *v58; 
  __int64 v59; 
  __int64 v62; 
  int v76; 
  bdReference<bdByteBuffer> v77; 
  bdReference<bdByteBuffer> buffera; 
  bdByteBuffer_vtbl *v79; 
  bdByteBuffer_vtbl *v80; 
  __int64 v81[3]; 
  bdUserAccountID v82; 
  bdUserAccountID v83; 
  bdUserAccountID v84; 
  bdMarketplacePlayerCurrency v85; 
  bdMarketplaceInventory v86; 
  bdMarketplaceCouponInventoryV4 v87; 

  v81[1] = -2i64;
  v81[2] = (__int64)buffer.m_ptr;
  v4 = 0;
  v76 = 0;
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
        bdMarketplacePlayerCurrency::bdMarketplacePlayerCurrency(&v85);
        if ( !v7 )
          goto LABEL_21;
        bdUserAccountID::bdUserAccountID(&v82, bytes_20);
        v11 = buffer.m_ptr->__vftable;
        v79 = v11;
        if ( v11 )
          _InterlockedExchangeAdd((volatile signed __int32 *)&v11->allocateBuffer, 1u);
        if ( bdMarketplacePlayerCurrency::deserialize(&v85, (bdReference<bdByteBuffer>)&v79, v10) )
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
        _RAX = &this->m_playerBalances.m_data[(unsigned __int64)this->m_playerBalances.m_size];
        __asm
        {
          vmovups ymm0, ymmword ptr [rbp+370h+var_300.baseclass_0.__vftable]
          vmovups ymmword ptr [rax], ymm0
          vmovups ymm1, ymmword ptr [rbp+370h+var_300._bytes_20]
          vmovups ymmword ptr [rax+20h], ymm1
          vmovups ymm0, ymmword ptr [rbp+370h+var_300.m_playerId+10h]
          vmovups ymmword ptr [rax+40h], ymm0
          vmovups ymm1, ymmword ptr [rbp+370h+var_300.m_playerId+30h]
          vmovups ymmword ptr [rax+60h], ymm1
        }
        ++this->m_playerBalances.m_size;
        bdUserAccountID::~bdUserAccountID((bdUserAccountID *)&v85.m_playerId[40]);
        bdReferencable::~bdReferencable((bdReferencable *)&v85.m_playerId[40]);
        bdSerializable::~bdSerializable((bdSerializable *)v85._bytes_20);
        bdTaskResult::~bdTaskResult((bdTaskResult *)(&v85.__vftable + 2));
        bdReferencable::~bdReferencable((bdReferencable *)(&v85.m_value + 1));
        ++v4;
      }
      while ( v4 < this->m_numPlayerBalances );
    }
  }
  v22 = v7 && bdByteBuffer::readUInt32((bdByteBuffer *)buffer.m_ptr->__vftable, &this->m_numPlayerInventoryItems);
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
  v24 = 0;
  if ( m_numPlayerInventoryItems )
  {
    do
    {
      *((_QWORD *)&v86.__vftable + 1) = &bdMarketplaceInventoryV3::`vbtable'{for `bdTaskResult'};
      *((_QWORD *)&v86.__vftable + 3) = &bdMarketplaceInventoryV3::`vbtable'{for `bdSerializable'};
      *(_QWORD *)&v86.gapD4[4] = &bdReferencable::`vftable';
      *(_DWORD *)&v86.gapD4[12] = 0;
      v76 |= 1u;
      bdMarketplaceInventory::bdMarketplaceInventory(&v86);
      v86.__vftable = (bdMarketplaceInventory_vtbl *)&bdMarketplaceInventoryV3::`vftable'{for `bdTaskResult'};
      *((_QWORD *)&v86.__vftable + 2) = &bdMarketplaceInventoryV3::`vftable'{for `bdSerializable'};
      *(_QWORD *)&v86._bytes_20[*(int *)(*((_QWORD *)&v86.__vftable + 1) + 4i64) - 24] = &bdMarketplaceInventoryV3::`vftable'{for `bdReferencable'};
      if ( !v22 )
        goto LABEL_49;
      bdUserAccountID::bdUserAccountID(&v83, bytes_20);
      v26 = buffer.m_ptr->__vftable;
      v80 = v26;
      if ( v26 )
        _InterlockedExchangeAdd((volatile signed __int32 *)&v26->allocateBuffer, 1u);
      if ( bdMarketplaceInventoryV3::deserialize((bdMarketplaceInventoryV3 *)&v86, (bdReference<bdByteBuffer>)&v80, v25) )
        v22 = 1;
      else
LABEL_49:
        v22 = 0;
      v27 = this->m_playerInventoryItems.m_capacity;
      if ( this->m_playerInventoryItems.m_size == v27 )
      {
        v28 = this->m_playerInventoryItems.m_capacity;
        if ( !v27 )
          v28 = 1;
        v29 = NULL;
        v30 = v27 + v28;
        if ( v30 )
        {
          v29 = (bdMarketplaceInventoryV3 *)bdMemory::allocate(232i64 * v30);
          v31 = this->m_playerInventoryItems.m_size;
          if ( (_DWORD)v31 )
            memcpy_0(v29, this->m_playerInventoryItems.m_data, 232 * v31);
        }
        bdMemory::deallocate(this->m_playerInventoryItems.m_data);
        this->m_playerInventoryItems.m_data = v29;
        this->m_playerInventoryItems.m_capacity = v30;
      }
      _RCX = &this->m_playerInventoryItems.m_data[this->m_playerInventoryItems.m_size];
      _RAX = &v86;
      __asm
      {
        vmovups xmm0, xmmword ptr [rax]
        vmovups xmmword ptr [rcx], xmm0
        vmovups xmm1, xmmword ptr [rax+10h]
        vmovups xmmword ptr [rcx+10h], xmm1
        vmovups xmm0, xmmword ptr [rax+20h]
        vmovups xmmword ptr [rcx+20h], xmm0
        vmovups xmm1, xmmword ptr [rax+30h]
        vmovups xmmword ptr [rcx+30h], xmm1
        vmovups xmm0, xmmword ptr [rax+40h]
        vmovups xmmword ptr [rcx+40h], xmm0
        vmovups xmm1, xmmword ptr [rax+50h]
        vmovups xmmword ptr [rcx+50h], xmm1
        vmovups xmm0, xmmword ptr [rax+60h]
        vmovups xmmword ptr [rcx+60h], xmm0
        vmovups xmm1, xmmword ptr [rax+70h]
        vmovups xmmword ptr [rcx+70h], xmm1
        vmovups xmm0, xmmword ptr [rax+80h]
        vmovups xmmword ptr [rcx+80h], xmm0
        vmovups xmm1, xmmword ptr [rax+90h]
        vmovups xmmword ptr [rcx+90h], xmm1
        vmovups xmm0, xmmword ptr [rax+0A0h]
        vmovups xmmword ptr [rcx+0A0h], xmm0
        vmovups xmm1, xmmword ptr [rax+0B0h]
        vmovups xmmword ptr [rcx+0B0h], xmm1
        vmovups xmm0, xmmword ptr [rax+0C0h]
        vmovups xmmword ptr [rcx+0C0h], xmm0
        vmovups xmm1, xmmword ptr [rax+0D0h]
        vmovups xmmword ptr [rcx+0D0h], xmm1
      }
      *(_QWORD *)&_RCX->gapD4[12] = *(_QWORD *)&v86.gapD4[12];
      ++this->m_playerInventoryItems.m_size;
      bdUserAccountID::~bdUserAccountID((bdUserAccountID *)&v86.m_playerId[40]);
      bdReferencable::~bdReferencable((bdReferencable *)&v86.m_playerId[40]);
      bdSerializable::~bdSerializable((bdSerializable *)v86._bytes_20);
      bdTaskResult::~bdTaskResult((bdTaskResult *)(&v86.__vftable + 2));
      bdReferencable::~bdReferencable((bdReferencable *)&v86.gapD4[4]);
      ++v24;
      bytes_20 = (const bdUserAccountID *)this->_bytes_20;
    }
    while ( v24 < this->m_numPlayerInventoryItems );
  }
  if ( !v22 )
    goto LABEL_64;
  deserialize = this->m_playerEntitlements.deserialize;
  bdUserAccountID::bdUserAccountID(&v84, (const bdUserAccountID *)this->_bytes_20);
  v50 = buffer.m_ptr->__vftable;
  v81[0] = (__int64)v50;
  if ( v50 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v50->allocateBuffer, 1u);
  if ( ((unsigned __int8 (__fastcall *)(bdMarketplaceEntitlement *, __int64 *, __int64))deserialize)(&this->m_playerEntitlements, v81, v49) && bdByteBuffer::readUInt32((bdByteBuffer *)buffer.m_ptr->__vftable, &this->m_numCoupons) )
    v51 = 1;
  else
LABEL_64:
    v51 = 0;
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
  v53 = 0;
  if ( m_numCoupons )
  {
    do
    {
      bdMarketplaceCouponInventoryV4::bdMarketplaceCouponInventoryV4(&v87);
      if ( !v51 )
        goto LABEL_78;
      v54 = (bdByteBuffer *)buffer.m_ptr->__vftable;
      v77.m_ptr = v54;
      if ( v54 )
        _InterlockedExchangeAdd((volatile signed __int32 *)&v54->m_refCount, 1u);
      if ( bdMarketplaceCouponInventoryV4::deserialize(&v87, (bdReference<bdByteBuffer>)&v77) )
        v51 = 1;
      else
LABEL_78:
        v51 = 0;
      v55 = this->m_coupons.m_capacity;
      if ( this->m_coupons.m_size == v55 )
      {
        v56 = this->m_coupons.m_capacity;
        if ( !v55 )
          v56 = 1;
        v57 = v55 + v56;
        v58 = NULL;
        if ( v55 + v56 )
        {
          v58 = (bdMarketplaceCouponInventoryV4 *)bdMemory::allocate(336i64 * v57);
          v59 = this->m_coupons.m_size;
          if ( (_DWORD)v59 )
            memcpy_0(v58, this->m_coupons.m_data, 336 * v59);
        }
        bdMemory::deallocate(this->m_coupons.m_data);
        this->m_coupons.m_data = v58;
        this->m_coupons.m_capacity = v57;
      }
      _RAX = &this->m_coupons.m_data[this->m_coupons.m_size];
      _RCX = &v87;
      v62 = 2i64;
      do
      {
        __asm
        {
          vmovups xmm0, xmmword ptr [rcx]
          vmovups xmmword ptr [rax], xmm0
          vmovups xmm1, xmmword ptr [rcx+10h]
          vmovups xmmword ptr [rax+10h], xmm1
          vmovups xmm0, xmmword ptr [rcx+20h]
          vmovups xmmword ptr [rax+20h], xmm0
          vmovups xmm1, xmmword ptr [rcx+30h]
          vmovups xmmword ptr [rax+30h], xmm1
          vmovups xmm0, xmmword ptr [rcx+40h]
          vmovups xmmword ptr [rax+40h], xmm0
          vmovups xmm1, xmmword ptr [rcx+50h]
          vmovups xmmword ptr [rax+50h], xmm1
          vmovups xmm0, xmmword ptr [rcx+60h]
          vmovups xmmword ptr [rax+60h], xmm0
        }
        _RAX = (bdMarketplaceCouponInventoryV4 *)((char *)_RAX + 128);
        __asm
        {
          vmovups xmm1, xmmword ptr [rcx+70h]
          vmovups xmmword ptr [rax-10h], xmm1
        }
        _RCX = (bdMarketplaceCouponInventoryV4 *)((char *)_RCX + 128);
        --v62;
      }
      while ( v62 );
      __asm
      {
        vmovups xmm0, xmmword ptr [rcx]
        vmovups xmmword ptr [rax], xmm0
        vmovups xmm1, xmmword ptr [rcx+10h]
        vmovups xmmword ptr [rax+10h], xmm1
        vmovups xmm0, xmmword ptr [rcx+20h]
        vmovups xmmword ptr [rax+20h], xmm0
        vmovups xmm1, xmmword ptr [rcx+30h]
        vmovups xmmword ptr [rax+30h], xmm1
        vmovups xmm0, xmmword ptr [rcx+40h]
        vmovups xmmword ptr [rax+40h], xmm0
      }
      ++this->m_coupons.m_size;
      bdUserAccountID::~bdUserAccountID((bdUserAccountID *)v87.m_buyerPlayerId.gap38);
      bdReferencable::~bdReferencable((bdReferencable *)v87.m_buyerPlayerId.gap38);
      bdUserAccountID::~bdUserAccountID((bdUserAccountID *)v87.m_ownerPlayerId.gap38);
      bdReferencable::~bdReferencable((bdReferencable *)v87.m_ownerPlayerId.gap38);
      bdSerializable::~bdSerializable((bdSerializable *)v87._bytes_20);
      bdTaskResult::~bdTaskResult((bdTaskResult *)(&v87.__vftable + 2));
      bdReferencable::~bdReferencable((bdReferencable *)&v87.gap13C[4]);
      ++v53;
    }
    while ( v53 < this->m_numCoupons );
  }
  if ( buffer.m_ptr->__vftable && !_InterlockedDecrement((volatile signed __int32 *)&buffer.m_ptr->allocateBuffer) )
  {
    if ( buffer.m_ptr->__vftable )
      (*(void (__fastcall **)(bdByteBuffer_vtbl *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr->__vftable, 1i64);
    buffer.m_ptr->__vftable = NULL;
  }
  return v51;
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

