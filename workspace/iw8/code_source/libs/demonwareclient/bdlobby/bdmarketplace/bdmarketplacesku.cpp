/*
==============
bdMarketplaceSku::deserialize
==============
*/

bool __fastcall bdMarketplaceSku::deserialize(bdMarketplaceSku *this, bdReference<bdByteBuffer> buffer)
{
  return ?deserialize@bdMarketplaceSku@@UEAA_NV?$bdReference@VbdByteBuffer@@@@@Z(this, buffer);
}

/*
==============
bdMarketplaceSkuV2::reset
==============
*/

void __fastcall bdMarketplaceSkuV2::reset(bdMarketplaceSkuV2 *this)
{
  ?reset@bdMarketplaceSkuV2@@QEAAXXZ(this);
}

/*
==============
bdMarketplaceSkuV2::deserialize
==============
*/

bool __fastcall bdMarketplaceSkuV2::deserialize(bdMarketplaceSkuV2 *this, bdReference<bdByteBuffer> buffer)
{
  return ?deserialize@bdMarketplaceSkuV2@@UEAA_NV?$bdReference@VbdByteBuffer@@@@@Z(this, buffer);
}

/*
==============
bdMarketplaceSku::serialize
==============
*/

bool __fastcall bdMarketplaceSku::serialize(bdMarketplaceSku *this, bdByteBuffer *buffer)
{
  return ?serialize@bdMarketplaceSku@@UEBA_NAEAVbdByteBuffer@@@Z(this, buffer);
}

/*
==============
bdMarketplaceSkuTombstone::sizeOf
==============
*/

unsigned int __fastcall bdMarketplaceSkuTombstone::sizeOf(bdMarketplaceSkuTombstone *this)
{
  return ?sizeOf@bdMarketplaceSkuTombstone@@UEAAIXZ(this);
}

/*
==============
bdMarketplaceSku::reset
==============
*/

void __fastcall bdMarketplaceSku::reset(bdMarketplaceSku *this)
{
  ?reset@bdMarketplaceSku@@QEAAXXZ(this);
}

/*
==============
bdMarketplaceSkuV2::bdMarketplaceSkuV2
==============
*/

void __fastcall bdMarketplaceSkuV2::bdMarketplaceSkuV2(bdMarketplaceSkuV2 *this)
{
  ??0bdMarketplaceSkuV2@@QEAA@XZ(this);
}

/*
==============
bdMarketplaceSkuTombstone::reset
==============
*/

void __fastcall bdMarketplaceSkuTombstone::reset(bdMarketplaceSkuTombstone *this)
{
  ?reset@bdMarketplaceSkuTombstone@@QEAAXXZ(this);
}

/*
==============
bdMarketplaceSkuV3::reset
==============
*/

void __fastcall bdMarketplaceSkuV3::reset(bdMarketplaceSkuV3 *this)
{
  ?reset@bdMarketplaceSkuV3@@QEAAXXZ(this);
}

/*
==============
bdMarketplaceSkuV2::serialize
==============
*/

bool __fastcall bdMarketplaceSkuV2::serialize(bdMarketplaceSkuV2 *this, bdByteBuffer *buffer)
{
  return ?serialize@bdMarketplaceSkuV2@@UEBA_NAEAVbdByteBuffer@@@Z(this, buffer);
}

/*
==============
bdMarketplaceSku::bdMarketplaceSku
==============
*/

void __fastcall bdMarketplaceSku::bdMarketplaceSku(bdMarketplaceSku *this)
{
  ??0bdMarketplaceSku@@QEAA@XZ(this);
}

/*
==============
bdMarketplaceSkuTombstone::serialize
==============
*/

bool __fastcall bdMarketplaceSkuTombstone::serialize(bdMarketplaceSkuTombstone *this, bdByteBuffer *buffer)
{
  return ?serialize@bdMarketplaceSkuTombstone@@UEBA_NAEAVbdByteBuffer@@@Z(this, buffer);
}

/*
==============
bdMarketplaceSkuTombstone::bdMarketplaceSkuTombstone
==============
*/

void __fastcall bdMarketplaceSkuTombstone::bdMarketplaceSkuTombstone(bdMarketplaceSkuTombstone *this)
{
  ??0bdMarketplaceSkuTombstone@@QEAA@XZ(this);
}

/*
==============
bdMarketplaceSkuTombstone::deserialize
==============
*/

bool __fastcall bdMarketplaceSkuTombstone::deserialize(bdMarketplaceSkuTombstone *this, bdReference<bdByteBuffer> buffer)
{
  return ?deserialize@bdMarketplaceSkuTombstone@@UEAA_NV?$bdReference@VbdByteBuffer@@@@@Z(this, buffer);
}

/*
==============
bdMarketplaceSkuV3::sizeOf
==============
*/

unsigned int __fastcall bdMarketplaceSkuV3::sizeOf(bdMarketplaceSkuV3 *this)
{
  return ?sizeOf@bdMarketplaceSkuV3@@UEAAIXZ(this);
}

/*
==============
bdMarketplaceSkuV3::deserialize
==============
*/

bool __fastcall bdMarketplaceSkuV3::deserialize(bdMarketplaceSkuV3 *this, bdReference<bdByteBuffer> buffer)
{
  return ?deserialize@bdMarketplaceSkuV3@@UEAA_NV?$bdReference@VbdByteBuffer@@@@@Z(this, buffer);
}

/*
==============
bdMarketplaceSkuV3::serialize
==============
*/

bool __fastcall bdMarketplaceSkuV3::serialize(bdMarketplaceSkuV3 *this, bdByteBuffer *buffer)
{
  return ?serialize@bdMarketplaceSkuV3@@UEBA_NAEAVbdByteBuffer@@@Z(this, buffer);
}

/*
==============
bdMarketplaceSkuV2::sizeOf
==============
*/

unsigned int __fastcall bdMarketplaceSkuV2::sizeOf(bdMarketplaceSkuV2 *this)
{
  return ?sizeOf@bdMarketplaceSkuV2@@UEAAIXZ(this);
}

/*
==============
bdMarketplaceSkuV3::bdMarketplaceSkuV3
==============
*/

void __fastcall bdMarketplaceSkuV3::bdMarketplaceSkuV3(bdMarketplaceSkuV3 *this)
{
  ??0bdMarketplaceSkuV3@@QEAA@XZ(this);
}

/*
==============
bdMarketplaceSku::sizeOf
==============
*/

unsigned int __fastcall bdMarketplaceSku::sizeOf(bdMarketplaceSku *this)
{
  return ?sizeOf@bdMarketplaceSku@@UEAAIXZ(this);
}

/*
==============
bdMarketplaceSku::bdMarketplaceSku
==============
*/
void bdMarketplaceSku::bdMarketplaceSku(bdMarketplaceSku *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdMarketplaceSku::`vbtable'{for `bdTaskResult'};
    *((_QWORD *)&this->__vftable + 3) = &bdMarketplaceSku::`vbtable'{for `bdSerializable'};
    *(_QWORD *)this->gap8C8 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap8C8[8] = 0;
  }
  bdTaskResult::bdTaskResult(this);
  bdSerializable::bdSerializable((bdSerializable *)(&this->__vftable + 2));
  this->__vftable = (bdMarketplaceSku_vtbl *)&bdMarketplaceSku::`vftable'{for `bdTaskResult'};
  *((_QWORD *)&this->__vftable + 2) = &bdMarketplaceSku::`vftable'{for `bdSerializable'};
  *(bdMarketplaceSku_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdMarketplaceSku_vtbl *)&bdMarketplaceSku::`vftable'{for `bdReferencable'};
  `eh vector vbase constructor iterator'(this->m_skuPrices, 0x38ui64, 0xAui64, (void (__fastcall *)(void *))bdMarketplaceCurrency::bdMarketplaceCurrency, (void (__fastcall *)(void *))bdMarketplaceCurrency::`vbase destructor);
  bdMarketplaceSku::reset(this);
}

/*
==============
bdMarketplaceSkuTombstone::bdMarketplaceSkuTombstone
==============
*/
void bdMarketplaceSkuTombstone::bdMarketplaceSkuTombstone(bdMarketplaceSkuTombstone *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdMarketplaceSkuTombstone::`vbtable';
    *((_QWORD *)&this->__vftable + 3) = &bdReferencable::`vftable';
    *(_DWORD *)this->gap20 = 0;
  }
  bdTaskResult::bdTaskResult(this);
  this->__vftable = (bdMarketplaceSkuTombstone_vtbl *)&bdMarketplaceSkuTombstone::`vftable'{for `bdTaskResult'};
  *(bdMarketplaceSkuTombstone_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdMarketplaceSkuTombstone_vtbl *)&bdMarketplaceSkuTombstone::`vftable'{for `bdReferencable'};
  *((_QWORD *)&this->__vftable + 2) = 0i64;
}

/*
==============
bdMarketplaceSkuV2::bdMarketplaceSkuV2
==============
*/
void bdMarketplaceSkuV2::bdMarketplaceSkuV2(bdMarketplaceSkuV2 *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdMarketplaceSkuV2::`vbtable'{for `bdTaskResult'};
    *((_QWORD *)&this->__vftable + 3) = &bdMarketplaceSkuV2::`vbtable'{for `bdSerializable'};
    *(_QWORD *)&this->gap8C8[8] = &bdReferencable::`vftable';
    *((_DWORD *)&this->bdMarketplaceSku + 566) = 0;
  }
  bdTaskResult::bdTaskResult(this);
  bdSerializable::bdSerializable((bdSerializable *)(&this->__vftable + 2));
  this->__vftable = (bdMarketplaceSkuV2_vtbl *)&bdMarketplaceSku::`vftable'{for `bdTaskResult'};
  *((_QWORD *)&this->__vftable + 2) = &bdMarketplaceSku::`vftable'{for `bdSerializable'};
  *(bdMarketplaceSkuV2_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdMarketplaceSkuV2_vtbl *)&bdMarketplaceSku::`vftable'{for `bdReferencable'};
  `eh vector vbase constructor iterator'(this->m_skuPrices, 0x38ui64, 0xAui64, (void (__fastcall *)(void *))bdMarketplaceCurrency::bdMarketplaceCurrency, (void (__fastcall *)(void *))bdMarketplaceCurrency::`vbase destructor);
  bdMarketplaceSku::reset(this);
  this->__vftable = (bdMarketplaceSkuV2_vtbl *)&bdMarketplaceSkuV2::`vftable'{for `bdTaskResult'};
  *((_QWORD *)&this->__vftable + 2) = &bdMarketplaceSkuV2::`vftable'{for `bdSerializable'};
  *(bdMarketplaceSkuV2_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdMarketplaceSkuV2_vtbl *)&bdMarketplaceSkuV2::`vftable'{for `bdReferencable'};
  bdMarketplaceSku::reset(this);
  this->gap8C8[0] = 0;
}

/*
==============
bdMarketplaceSkuV3::bdMarketplaceSkuV3
==============
*/
void bdMarketplaceSkuV3::bdMarketplaceSkuV3(bdMarketplaceSkuV3 *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdMarketplaceSkuV3::`vbtable'{for `bdTaskResult'};
    *((_QWORD *)&this->__vftable + 3) = &bdMarketplaceSkuV3::`vbtable'{for `bdSerializable'};
    *((_QWORD *)&this->bdMarketplaceSku + 283) = &bdReferencable::`vftable';
    *(_DWORD *)this->gap8E0 = 0;
  }
  bdTaskResult::bdTaskResult(this);
  bdSerializable::bdSerializable((bdSerializable *)(&this->__vftable + 2));
  this->__vftable = (bdMarketplaceSkuV3_vtbl *)&bdMarketplaceSku::`vftable'{for `bdTaskResult'};
  *((_QWORD *)&this->__vftable + 2) = &bdMarketplaceSku::`vftable'{for `bdSerializable'};
  *(bdMarketplaceSkuV3_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdMarketplaceSkuV3_vtbl *)&bdMarketplaceSku::`vftable'{for `bdReferencable'};
  `eh vector vbase constructor iterator'(this->m_skuPrices, 0x38ui64, 0xAui64, (void (__fastcall *)(void *))bdMarketplaceCurrency::bdMarketplaceCurrency, (void (__fastcall *)(void *))bdMarketplaceCurrency::`vbase destructor);
  bdMarketplaceSku::reset(this);
  this->__vftable = (bdMarketplaceSkuV3_vtbl *)&bdMarketplaceSkuV2::`vftable'{for `bdTaskResult'};
  *((_QWORD *)&this->__vftable + 2) = &bdMarketplaceSkuV2::`vftable'{for `bdSerializable'};
  *(bdMarketplaceSkuV3_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdMarketplaceSkuV3_vtbl *)&bdMarketplaceSkuV2::`vftable'{for `bdReferencable'};
  bdMarketplaceSku::reset(this);
  this->gap8C8[0] = 0;
  this->__vftable = (bdMarketplaceSkuV3_vtbl *)&bdMarketplaceSkuV3::`vftable'{for `bdTaskResult'};
  *((_QWORD *)&this->__vftable + 2) = &bdMarketplaceSkuV3::`vftable'{for `bdSerializable'};
  *(bdMarketplaceSkuV3_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdMarketplaceSkuV3_vtbl *)&bdMarketplaceSkuV3::`vftable'{for `bdReferencable'};
  bdMarketplaceSku::reset(this);
  this->gap8C8[0] = 0;
  *(_DWORD *)&this->gap8C8[8] = -1;
  this->gap8C8[12] = 0;
}

/*
==============
bdMarketplaceSku::deserialize
==============
*/
__int64 bdMarketplaceSku::deserialize(bdMarketplaceSku *this, bdReference<bdByteBuffer> buffer)
{
  char v4; 
  char v5; 
  bool v6; 
  unsigned __int8 v7; 
  unsigned __int8 v8; 
  unsigned __int8 i; 
  __int64 v10; 
  bdMarketplaceCurrency *v11; 
  bool (__fastcall *deserialize)(bdTaskResult *, bdReference<bdByteBuffer>); 
  bdByteBuffer_vtbl *v13; 
  __int64 v15[7]; 
  unsigned int u; 
  bdByteBuffer *m_ptr; 
  unsigned int length; 
  unsigned int v19; 

  m_ptr = buffer.m_ptr;
  v15[1] = -2i64;
  if ( !bdByteBuffer::readUInt32((bdByteBuffer *)buffer.m_ptr->__vftable, (unsigned int *)this->_bytes_20) || !bdByteBuffer::readUInt32((bdByteBuffer *)buffer.m_ptr->__vftable, (unsigned int *)&this->_bytes_20[4]) || !bdByteBuffer::readUByte8((bdByteBuffer *)buffer.m_ptr->__vftable, &this->_bytes_20[8]) )
  {
    length = 64;
    goto LABEL_7;
  }
  length = 64;
  if ( !bdByteBuffer::readBlob((bdByteBuffer *)buffer.m_ptr->__vftable, &this->_bytes_20[9], &length) )
  {
LABEL_7:
    v4 = 0;
    goto LABEL_8;
  }
  v4 = 1;
LABEL_8:
  this->m_skuDataSize = length;
  if ( !v4 || !bdByteBuffer::readUByte8((bdByteBuffer *)buffer.m_ptr->__vftable, &this->m_ignoreEntitlements) || !bdByteBuffer::readUInt32((bdByteBuffer *)buffer.m_ptr->__vftable, &this->m_saleStartDateTime) || !bdByteBuffer::readUInt32((bdByteBuffer *)buffer.m_ptr->__vftable, &this->m_saleEndDateTime) || !bdByteBuffer::readUInt32((bdByteBuffer *)buffer.m_ptr->__vftable, &this->m_rentalDuration) )
  {
    v19 = 1536;
    goto LABEL_16;
  }
  v19 = 1536;
  if ( !bdByteBuffer::readBlob((bdByteBuffer *)buffer.m_ptr->__vftable, this->m_promotionalText, &v19) )
  {
LABEL_16:
    v5 = 0;
    goto LABEL_17;
  }
  v5 = 1;
LABEL_17:
  this->m_promotionalTextSize = v19;
  if ( v5 && bdByteBuffer::readUInt32((bdByteBuffer *)buffer.m_ptr->__vftable, &this->m_origSkuId) && bdByteBuffer::readUInt16((bdByteBuffer *)buffer.m_ptr->__vftable, &this->m_collisionField) && bdByteBuffer::readUInt32((bdByteBuffer *)buffer.m_ptr->__vftable, &this->m_modDateTime) && bdByteBuffer::readUByte8((bdByteBuffer *)buffer.m_ptr->__vftable, &this->m_couponEnabled) )
  {
    u = 0;
    v6 = !bdByteBuffer::readUInt32((bdByteBuffer *)buffer.m_ptr->__vftable, &u);
    v7 = u;
    if ( !v6 )
    {
      v8 = 1;
      goto LABEL_26;
    }
  }
  else
  {
    v7 = 0;
    u = 0;
  }
  v8 = 0;
LABEL_26:
  this->m_numPrices = v7;
  for ( i = 0; i < this->m_numPrices; ++i )
  {
    if ( !v8 )
      goto LABEL_34;
    v10 = i;
    if ( i >= 9u )
      v10 = 9i64;
    v11 = &this->m_skuPrices[v10];
    deserialize = v11->deserialize;
    v13 = buffer.m_ptr->__vftable;
    v15[0] = (__int64)v13;
    if ( v13 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v13->allocateBuffer, 1u);
    if ( ((unsigned __int8 (__fastcall *)(bdMarketplaceCurrency *, __int64 *))deserialize)(v11, v15) )
      v8 = 1;
    else
LABEL_34:
      v8 = 0;
  }
  if ( buffer.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->allocateBuffer, 0xFFFFFFFF) == 1 )
  {
    if ( buffer.m_ptr->__vftable )
      (*(void (__fastcall **)(bdByteBuffer_vtbl *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr->__vftable, 1i64);
    buffer.m_ptr->__vftable = NULL;
  }
  return v8;
}

/*
==============
bdMarketplaceSkuTombstone::deserialize
==============
*/
_BOOL8 bdMarketplaceSkuTombstone::deserialize(bdMarketplaceSkuTombstone *this, bdReference<bdByteBuffer> buffer)
{
  bool v4; 

  v4 = bdByteBuffer::readUInt32((bdByteBuffer *)buffer.m_ptr->__vftable, (unsigned int *)&this->__vftable + 4) && bdByteBuffer::readUInt32((bdByteBuffer *)buffer.m_ptr->__vftable, (unsigned int *)&this->__vftable + 5);
  if ( buffer.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->allocateBuffer, 0xFFFFFFFF) == 1 )
  {
    if ( buffer.m_ptr->__vftable )
      (*(void (__fastcall **)(bdByteBuffer_vtbl *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr->__vftable, 1i64);
    buffer.m_ptr->__vftable = NULL;
  }
  return v4;
}

/*
==============
bdMarketplaceSkuV2::deserialize
==============
*/
_BOOL8 bdMarketplaceSkuV2::deserialize(bdMarketplaceSkuV2 *this, bdReference<bdByteBuffer> buffer)
{
  bdByteBuffer *v4; 
  bool v5; 
  bdReference<bdByteBuffer> buffera; 

  v4 = (bdByteBuffer *)buffer.m_ptr->__vftable;
  buffera.m_ptr = v4;
  if ( v4 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v4->m_refCount, 1u);
  v5 = bdMarketplaceSku::deserialize(this, (bdReference<bdByteBuffer>)&buffera) && bdByteBuffer::readUByte8((bdByteBuffer *)buffer.m_ptr->__vftable, this->gap8C8);
  if ( buffer.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->allocateBuffer, 0xFFFFFFFF) == 1 )
  {
    if ( buffer.m_ptr->__vftable )
      (*(void (__fastcall **)(bdByteBuffer_vtbl *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr->__vftable, 1i64);
    buffer.m_ptr->__vftable = NULL;
  }
  return v5;
}

/*
==============
bdMarketplaceSkuV3::deserialize
==============
*/
_BOOL8 bdMarketplaceSkuV3::deserialize(bdMarketplaceSkuV3 *this, bdReference<bdByteBuffer> buffer)
{
  bdByteBuffer *v4; 
  bool v5; 
  bool v6; 
  bdByteBuffer *v8; 
  bdReference<bdByteBuffer> buffera; 

  v4 = (bdByteBuffer *)buffer.m_ptr->__vftable;
  v8 = (bdByteBuffer *)buffer.m_ptr->__vftable;
  if ( buffer.m_ptr->__vftable )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)&v4->m_refCount, 1u);
    v4 = v8;
  }
  buffera.m_ptr = v4;
  if ( v4 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v4->m_refCount, 1u);
  v5 = bdMarketplaceSku::deserialize(this, (bdReference<bdByteBuffer>)&buffera) && bdByteBuffer::readUByte8(v8, this->gap8C8);
  if ( v8 && _InterlockedExchangeAdd((volatile signed __int32 *)&v8->m_refCount, 0xFFFFFFFF) == 1 && v8 )
    ((void (__fastcall *)(bdByteBuffer *, __int64))v8->~bdReferencable)(v8, 1i64);
  v6 = v5 && bdByteBuffer::readUInt32((bdByteBuffer *)buffer.m_ptr->__vftable, (unsigned int *)&this->gap8C8[8]) && bdByteBuffer::readBool((bdByteBuffer *)buffer.m_ptr->__vftable, &this->gap8C8[12]);
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
bdMarketplaceSku::reset
==============
*/
void bdMarketplaceSku::reset(bdMarketplaceSku *this)
{
  __int64 v2; 
  bdMarketplaceCurrency *m_skuPrices; 

  *(_QWORD *)this->_bytes_20 = -1i64;
  this->m_promotionalTextSize = 0;
  this->m_collisionField = 0;
  this->m_numPrices = 0;
  this->_bytes_20[8] = 1;
  *(_WORD *)&this->m_skuDataSize = 0;
  this->m_couponEnabled = 0;
  *(_QWORD *)&this->m_saleStartDateTime = -1i64;
  this->m_rentalDuration = -1;
  this->m_rentalDurationUnit = 5;
  this->m_origSkuId = -1;
  this->m_modDateTime = -1;
  this->m_expiryDate = -1;
  memset_0(this->m_promotionalText, 0, sizeof(this->m_promotionalText));
  *(_QWORD *)&this->_bytes_20[9] = 0i64;
  *(_QWORD *)&this->m_skuData[1] = 0i64;
  *(_QWORD *)&this->m_skuData[9] = 0i64;
  *(_QWORD *)&this->m_skuData[17] = 0i64;
  v2 = 10i64;
  *(_QWORD *)&this->m_skuData[25] = 0i64;
  *(_QWORD *)&this->m_skuData[33] = 0i64;
  *(_QWORD *)&this->m_skuData[41] = 0i64;
  *(_QWORD *)&this->m_skuData[49] = 0i64;
  m_skuPrices = this->m_skuPrices;
  do
  {
    bdMarketplaceCurrency::reset(m_skuPrices++);
    --v2;
  }
  while ( v2 );
}

/*
==============
bdMarketplaceSkuTombstone::reset
==============
*/
void bdMarketplaceSkuTombstone::reset(bdMarketplaceSkuTombstone *this)
{
  *((_QWORD *)&this->__vftable + 2) = 0i64;
}

/*
==============
bdMarketplaceSkuV2::reset
==============
*/
void bdMarketplaceSkuV2::reset(bdMarketplaceSkuV2 *this)
{
  bdMarketplaceSku::reset(this);
  this->gap8C8[0] = 0;
}

/*
==============
bdMarketplaceSkuV3::reset
==============
*/
void bdMarketplaceSkuV3::reset(bdMarketplaceSkuV3 *this)
{
  bdMarketplaceSku::reset(this);
  this->gap8C8[0] = 0;
  *(_DWORD *)&this->gap8C8[8] = -1;
  this->gap8C8[12] = 0;
}

/*
==============
bdMarketplaceSku::serialize
==============
*/
bool bdMarketplaceSku::serialize(bdMarketplaceSku *this, bdByteBuffer *buffer)
{
  bool v4; 
  unsigned __int8 v5; 
  unsigned int v6; 
  bool v7; 
  unsigned int v8; 
  bool v9; 
  unsigned __int8 m_promotionalTextSize; 
  unsigned int v11; 
  bool result; 
  unsigned __int8 i; 

  v4 = bdByteBuffer::writeUInt32(buffer, *((_DWORD *)&this->__vftable + 4)) && bdByteBuffer::writeUInt32(buffer, *((_DWORD *)&this->__vftable + 5)) && bdByteBuffer::writeUByte8(buffer, *((_BYTE *)&this->__vftable + 24));
  v5 = this->m_skuData[41];
  v6 = v5;
  if ( v5 >= 0x40u )
    v6 = 64;
  v7 = v4 && bdByteBuffer::writeBlob(buffer, (char *)&this->__vftable + 25, v6) && bdByteBuffer::writeUByte8(buffer, this->m_skuData[42]) && bdByteBuffer::writeUInt32(buffer, *(_DWORD *)&this->m_skuData[44]) && bdByteBuffer::writeUInt32(buffer, *(_DWORD *)&this->m_skuData[48]) && bdByteBuffer::writeUInt32(buffer, *(_DWORD *)&this->m_skuData[52]);
  v8 = 1536;
  if ( *(_DWORD *)&this->m_promotionalText[1520] < 0x600u )
    v8 = *(_DWORD *)&this->m_promotionalText[1520];
  v9 = v7 && bdByteBuffer::writeBlob(buffer, &this->m_saleEndDateTime, v8) && bdByteBuffer::writeUInt32(buffer, *(_DWORD *)&this->m_promotionalText[1524]) && bdByteBuffer::writeUInt16(buffer, *(_WORD *)&this->m_promotionalText[1528]) && bdByteBuffer::writeUInt32(buffer, *(_DWORD *)&this->m_promotionalText[1532]) && bdByteBuffer::writeUByte8(buffer, this->m_skuData[43]);
  m_promotionalTextSize = this->m_promotionalTextSize;
  v11 = m_promotionalTextSize;
  if ( m_promotionalTextSize >= 0xAu )
    v11 = 10;
  result = v9 && bdByteBuffer::writeUInt32(buffer, v11);
  for ( i = 0; i < v11; ++i )
    result = result && ((__int64 (__fastcall *)(bdMarketplaceCurrency *, bdByteBuffer *))this->m_skuPrices[i].deserialize)(&this->m_skuPrices[i], buffer);
  return result;
}

/*
==============
bdMarketplaceSkuTombstone::serialize
==============
*/
bool bdMarketplaceSkuTombstone::serialize(bdMarketplaceSkuTombstone *this, bdByteBuffer *buffer)
{
  return bdByteBuffer::writeUInt32(buffer, *((_DWORD *)&this->__vftable + 4)) && bdByteBuffer::writeUInt32(buffer, *((_DWORD *)&this->__vftable + 5));
}

/*
==============
bdMarketplaceSkuV2::serialize
==============
*/
bool bdMarketplaceSkuV2::serialize(bdMarketplaceSkuV2 *this, bdByteBuffer *buffer)
{
  return bdMarketplaceSku::serialize(this, buffer) && bdByteBuffer::writeUByte8(buffer, this->m_skuPrices[9]._bytes_20[8]);
}

/*
==============
bdMarketplaceSkuV3::serialize
==============
*/
bool bdMarketplaceSkuV3::serialize(bdMarketplaceSkuV3 *this, bdByteBuffer *buffer)
{
  return bdMarketplaceSku::serialize(this, buffer) && bdByteBuffer::writeUByte8(buffer, this->m_skuPrices[9]._bytes_20[8]) && bdByteBuffer::writeUInt32(buffer, *(_DWORD *)this->m_skuPrices[9].gap30) && bdByteBuffer::writeBool(buffer, this->m_skuPrices[9].gap30[4]);
}

/*
==============
bdMarketplaceSku::sizeOf
==============
*/
__int64 bdMarketplaceSku::sizeOf(bdMarketplaceSku *this)
{
  return 2264i64;
}

/*
==============
bdMarketplaceSkuTombstone::sizeOf
==============
*/
__int64 bdMarketplaceSkuTombstone::sizeOf(bdMarketplaceSkuTombstone *this)
{
  return 40i64;
}

/*
==============
bdMarketplaceSkuV2::sizeOf
==============
*/
__int64 bdMarketplaceSkuV2::sizeOf(bdMarketplaceSkuV2 *this)
{
  return 2272i64;
}

/*
==============
bdMarketplaceSkuV3::sizeOf
==============
*/
__int64 bdMarketplaceSkuV3::sizeOf(bdMarketplaceSkuV3 *this)
{
  return 2280i64;
}

