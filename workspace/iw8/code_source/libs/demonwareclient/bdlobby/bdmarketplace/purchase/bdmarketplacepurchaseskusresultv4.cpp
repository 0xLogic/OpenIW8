/*
==============
bdMarketplacePurchaseSkusResultV4::reset
==============
*/

void __fastcall bdMarketplacePurchaseSkusResultV4::reset(bdMarketplacePurchaseSkusResultV4 *this)
{
  ?reset@bdMarketplacePurchaseSkusResultV4@@QEAAXXZ(this);
}

/*
==============
bdMarketplacePurchaseSkusResultV4::bdMarketplacePurchaseSkusResultV4
==============
*/

void __fastcall bdMarketplacePurchaseSkusResultV4::bdMarketplacePurchaseSkusResultV4(bdMarketplacePurchaseSkusResultV4 *this)
{
  ??0bdMarketplacePurchaseSkusResultV4@@QEAA@XZ(this);
}

/*
==============
bdMarketplacePurchaseSkusResultV4::sizeOf
==============
*/

unsigned int __fastcall bdMarketplacePurchaseSkusResultV4::sizeOf(bdMarketplacePurchaseSkusResultV4 *this)
{
  return ?sizeOf@bdMarketplacePurchaseSkusResultV4@@UEAAIXZ(this);
}

/*
==============
bdMarketplacePurchaseSkusResultV4::~bdMarketplacePurchaseSkusResultV4
==============
*/

void __fastcall bdMarketplacePurchaseSkusResultV4::~bdMarketplacePurchaseSkusResultV4(bdMarketplacePurchaseSkusResultV4 *this)
{
  ??1bdMarketplacePurchaseSkusResultV4@@UEAA@XZ(this);
}

/*
==============
bdMarketplacePurchaseSkusResultV4::deserialize
==============
*/

bool __fastcall bdMarketplacePurchaseSkusResultV4::deserialize(bdMarketplacePurchaseSkusResultV4 *this, bdReference<bdByteBuffer> buffer)
{
  return ?deserialize@bdMarketplacePurchaseSkusResultV4@@UEAA_NV?$bdReference@VbdByteBuffer@@@@@Z(this, buffer);
}

/*
==============
bdMarketplacePurchaseSkusResultV4::bdMarketplacePurchaseSkusResultV4
==============
*/
void bdMarketplacePurchaseSkusResultV4::bdMarketplacePurchaseSkusResultV4(bdMarketplacePurchaseSkusResultV4 *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdMarketplacePurchaseSkusResultV4::`vbtable';
    *(_QWORD *)this->gap20C8 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap20C8[8] = 0;
  }
  bdTaskResult::bdTaskResult(this);
  this->__vftable = (bdMarketplacePurchaseSkusResultV4_vtbl *)&bdMarketplacePurchaseSkusResultV4::`vftable'{for `bdTaskResult'};
  *(bdMarketplacePurchaseSkusResultV4_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdMarketplacePurchaseSkusResultV4_vtbl *)&bdMarketplacePurchaseSkusResultV4::`vftable'{for `bdReferencable'};
  bdMarketplacePlayerAssetsV3::bdMarketplacePlayerAssetsV3(&this->m_affectedPlayerAssets);
  this->m_otherPlayersCoupons.m_data = NULL;
  *(_QWORD *)&this->m_otherPlayersCoupons.m_capacity = 0i64;
  this->m_affectedPlayerAssets.reset(&this->m_affectedPlayerAssets);
  this->m_numOtherPlayersCoupons = 0;
  bdMemory::deallocate(this->m_otherPlayersCoupons.m_data);
  this->m_otherPlayersCoupons.m_data = NULL;
  *(_QWORD *)&this->m_otherPlayersCoupons.m_capacity = 0i64;
}

/*
==============
bdMarketplacePurchaseSkusResultV4::~bdMarketplacePurchaseSkusResultV4
==============
*/
void bdMarketplacePurchaseSkusResultV4::~bdMarketplacePurchaseSkusResultV4(bdMarketplacePurchaseSkusResultV4 *this)
{
  *((_QWORD *)&this[-1].__vftable + 2) = &bdMarketplacePurchaseSkusResultV4::`vftable'{for `bdTaskResult'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)&this[-1].__vftable + 3) + 4i64) - 8384) = &bdMarketplacePurchaseSkusResultV4::`vftable'{for `bdReferencable'};
  bdMemory::deallocate(*(void **)this[-1].gap20C8);
  *(_QWORD *)this[-1].gap20C8 = 0i64;
  *(_QWORD *)&this[-1].gap20C8[8] = 0i64;
  bdMarketplacePlayerAssetsV3::`vbase destructor((bdMarketplacePlayerAssetsV3 *)(&this[-1].m_affectedPlayerAssets.__vftable + 2));
  bdTaskResult::~bdTaskResult((bdMarketplacePurchaseSkusResultV4 *)((char *)this - 8376));
}

/*
==============
bdMarketplacePurchaseSkusResultV4::deserialize
==============
*/
__int64 bdMarketplacePurchaseSkusResultV4::deserialize(bdMarketplacePurchaseSkusResultV4 *this, bdReference<bdByteBuffer> buffer)
{
  bool (__fastcall *deserialize)(bdTaskResult *, bdReference<bdByteBuffer>); 
  bdByteBuffer_vtbl *v5; 
  unsigned __int8 v6; 
  unsigned int m_numOtherPlayersCoupons; 
  unsigned int v8; 
  bdByteBuffer *v9; 
  unsigned int m_capacity; 
  unsigned int v11; 
  bdMarketplaceCouponInventoryV4 *v12; 
  unsigned int v13; 
  __int64 m_size; 
  __int64 v17; 
  bdReference<bdByteBuffer> buffera; 
  __int64 v33[3]; 
  bdMarketplaceCouponInventoryV4 v34; 

  v33[1] = -2i64;
  v33[2] = (__int64)buffer.m_ptr;
  if ( !bdByteBuffer::readString((bdByteBuffer *)buffer.m_ptr->__vftable, (char *const)&this->__vftable + 16, 0x19ui64) )
    goto LABEL_7;
  deserialize = this->m_affectedPlayerAssets.deserialize;
  v5 = buffer.m_ptr->__vftable;
  v33[0] = (__int64)v5;
  if ( v5 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v5->allocateBuffer, 1u);
  if ( ((unsigned __int8 (__fastcall *)(bdMarketplacePlayerAssetsV3 *, __int64 *))deserialize)(&this->m_affectedPlayerAssets, v33) && bdByteBuffer::readUInt32((bdByteBuffer *)buffer.m_ptr->__vftable, &this->m_numOtherPlayersCoupons) )
    v6 = 1;
  else
LABEL_7:
    v6 = 0;
  bdMemory::deallocate(this->m_otherPlayersCoupons.m_data);
  this->m_otherPlayersCoupons.m_data = NULL;
  *(_QWORD *)&this->m_otherPlayersCoupons.m_capacity = 0i64;
  m_numOtherPlayersCoupons = this->m_numOtherPlayersCoupons;
  if ( m_numOtherPlayersCoupons )
  {
    bdFastArray<bdMarketplaceCouponInventoryV4>::increaseCapacity(&this->m_otherPlayersCoupons, m_numOtherPlayersCoupons);
    m_numOtherPlayersCoupons = this->m_numOtherPlayersCoupons;
  }
  v8 = 0;
  if ( m_numOtherPlayersCoupons )
  {
    do
    {
      bdMarketplaceCouponInventoryV4::bdMarketplaceCouponInventoryV4(&v34);
      if ( !v6 )
        goto LABEL_25;
      v9 = (bdByteBuffer *)buffer.m_ptr->__vftable;
      buffera.m_ptr = v9;
      if ( v9 )
        _InterlockedExchangeAdd((volatile signed __int32 *)&v9->m_refCount, 1u);
      if ( bdMarketplaceCouponInventoryV4::deserialize(&v34, (bdReference<bdByteBuffer>)&buffera) )
      {
        v6 = 1;
        m_capacity = this->m_otherPlayersCoupons.m_capacity;
        if ( this->m_otherPlayersCoupons.m_size == m_capacity )
        {
          v11 = this->m_otherPlayersCoupons.m_capacity;
          if ( !m_capacity )
            v11 = 1;
          v12 = NULL;
          v13 = m_capacity + v11;
          if ( v13 )
          {
            v12 = (bdMarketplaceCouponInventoryV4 *)bdMemory::allocate(336i64 * v13);
            m_size = this->m_otherPlayersCoupons.m_size;
            if ( (_DWORD)m_size )
              memcpy_0(v12, this->m_otherPlayersCoupons.m_data, 336 * m_size);
          }
          bdMemory::deallocate(this->m_otherPlayersCoupons.m_data);
          this->m_otherPlayersCoupons.m_data = v12;
          this->m_otherPlayersCoupons.m_capacity = v13;
        }
        _RAX = &this->m_otherPlayersCoupons.m_data[this->m_otherPlayersCoupons.m_size];
        _RCX = &v34;
        v17 = 2i64;
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
          --v17;
        }
        while ( v17 );
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
        ++this->m_otherPlayersCoupons.m_size;
      }
      else
      {
LABEL_25:
        v6 = 0;
      }
      bdUserAccountID::~bdUserAccountID((bdUserAccountID *)v34.m_buyerPlayerId.gap38);
      bdReferencable::~bdReferencable((bdReferencable *)v34.m_buyerPlayerId.gap38);
      bdUserAccountID::~bdUserAccountID((bdUserAccountID *)v34.m_ownerPlayerId.gap38);
      bdReferencable::~bdReferencable((bdReferencable *)v34.m_ownerPlayerId.gap38);
      bdSerializable::~bdSerializable((bdSerializable *)v34._bytes_20);
      bdTaskResult::~bdTaskResult((bdTaskResult *)(&v34.__vftable + 2));
      bdReferencable::~bdReferencable((bdReferencable *)&v34.gap13C[4]);
      ++v8;
    }
    while ( v8 < this->m_numOtherPlayersCoupons );
  }
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
bdMarketplacePurchaseSkusResultV4::reset
==============
*/
void bdMarketplacePurchaseSkusResultV4::reset(bdMarketplacePurchaseSkusResultV4 *this)
{
  this->m_affectedPlayerAssets.reset(&this->m_affectedPlayerAssets);
  this->m_numOtherPlayersCoupons = 0;
  bdMemory::deallocate(this->m_otherPlayersCoupons.m_data);
  this->m_otherPlayersCoupons.m_data = NULL;
  *(_QWORD *)&this->m_otherPlayersCoupons.m_capacity = 0i64;
}

/*
==============
bdMarketplacePurchaseSkusResultV4::sizeOf
==============
*/
__int64 bdMarketplacePurchaseSkusResultV4::sizeOf(bdMarketplacePurchaseSkusResultV4 *this)
{
  return 8408i64;
}

