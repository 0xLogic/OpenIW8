/*
==============
bdMarketplacePurchaseSkusSkuOrderV2::serialize
==============
*/

bool __fastcall bdMarketplacePurchaseSkusSkuOrderV2::serialize(bdMarketplacePurchaseSkusSkuOrderV2 *this, bdByteBuffer *buffer)
{
  return ?serialize@bdMarketplacePurchaseSkusSkuOrderV2@@UEBA_NAEAVbdByteBuffer@@@Z(this, buffer);
}

/*
==============
bdMarketplacePurchaseSkusSkuOrderV2::bdMarketplacePurchaseSkusSkuOrderV2
==============
*/

void __fastcall bdMarketplacePurchaseSkusSkuOrderV2::bdMarketplacePurchaseSkusSkuOrderV2(bdMarketplacePurchaseSkusSkuOrderV2 *this, const bdMarketplacePurchaseSkusSkuOrderV2 *skuOrder)
{
  ??0bdMarketplacePurchaseSkusSkuOrderV2@@QEAA@AEBV0@@Z(this, skuOrder);
}

/*
==============
bdMarketplacePurchaseSkusSkuOrderV2::bdMarketplacePurchaseSkusSkuOrderV2
==============
*/

void __fastcall bdMarketplacePurchaseSkusSkuOrderV2::bdMarketplacePurchaseSkusSkuOrderV2(bdMarketplacePurchaseSkusSkuOrderV2 *this)
{
  ??0bdMarketplacePurchaseSkusSkuOrderV2@@QEAA@XZ(this);
}

/*
==============
bdMarketplacePurchaseSkusSkuOrderV2::reset
==============
*/

void __fastcall bdMarketplacePurchaseSkusSkuOrderV2::reset(bdMarketplacePurchaseSkusSkuOrderV2 *this)
{
  ?reset@bdMarketplacePurchaseSkusSkuOrderV2@@UEAAXXZ(this);
}

/*
==============
bdMarketplacePurchaseSkusSkuOrderV2::serializedSizeOf
==============
*/

int __fastcall bdMarketplacePurchaseSkusSkuOrderV2::serializedSizeOf(bdMarketplacePurchaseSkusSkuOrderV2 *this)
{
  return ?serializedSizeOf@bdMarketplacePurchaseSkusSkuOrderV2@@UEBAHXZ(this);
}

/*
==============
bdMarketplacePurchaseSkusSkuOrderV2::bdMarketplacePurchaseSkusSkuOrderV2
==============
*/

void __fastcall bdMarketplacePurchaseSkusSkuOrderV2::bdMarketplacePurchaseSkusSkuOrderV2(bdMarketplacePurchaseSkusSkuOrderV2 *this, unsigned int skuId, unsigned int skuQuantity, unsigned int discountId)
{
  ??0bdMarketplacePurchaseSkusSkuOrderV2@@QEAA@III@Z(this, skuId, skuQuantity, discountId);
}

/*
==============
bdMarketplacePurchaseSkusSkuOrderV2::~bdMarketplacePurchaseSkusSkuOrderV2
==============
*/

void __fastcall bdMarketplacePurchaseSkusSkuOrderV2::~bdMarketplacePurchaseSkusSkuOrderV2(bdMarketplacePurchaseSkusSkuOrderV2 *this)
{
  ??1bdMarketplacePurchaseSkusSkuOrderV2@@UEAA@XZ(this);
}

/*
==============
bdMarketplacePurchaseSkusSkuOrderV2::bdMarketplacePurchaseSkusSkuOrderV2
==============
*/
void bdMarketplacePurchaseSkusSkuOrderV2::bdMarketplacePurchaseSkusSkuOrderV2(bdMarketplacePurchaseSkusSkuOrderV2 *this, const bdMarketplacePurchaseSkusSkuOrderV2 *skuOrder, int a3)
{
  unsigned __int8 i; 
  __int64 v6; 
  _BYTE *v7; 
  _BYTE *v8; 

  if ( a3 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdMarketplacePurchaseSkusSkuOrderV2::`vbtable';
    *(_QWORD *)this->gap258 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap258[8] = 0;
  }
  bdMarketplacePurchaseSkusSkuOrder::bdMarketplacePurchaseSkusSkuOrder(this, skuOrder);
  this->__vftable = (bdMarketplacePurchaseSkusSkuOrderV2_vtbl *)&bdMarketplacePurchaseSkusSkuOrderV2::`vftable'{for `bdSerializable'};
  *(bdMarketplacePurchaseSkusSkuOrderV2_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdMarketplacePurchaseSkusSkuOrderV2_vtbl *)&bdMarketplacePurchaseSkusSkuOrderV2::`vftable'{for `bdReferencable'};
  `eh vector vbase constructor iterator'(&this->gap20[8], 0x38ui64, 0xAui64, (void (__fastcall *)(void *))bdMarketplaceCurrency::bdMarketplaceCurrency, (void (__fastcall *)(void *))bdMarketplaceCurrency::`vbase destructor);
  this->gap20[0] = skuOrder->gap20[0];
  for ( i = 0; i < skuOrder->gap20[0]; ++i )
  {
    v6 = 56i64 * i;
    v7 = &skuOrder->gap20[v6 + 8];
    v8 = &this->gap20[v6 + 8];
    bdReferencable::operator=((bdReferencable *)&v8[*(int *)(*(_QWORD *)&this->m_expectedPrices[v6] + 4i64) + 8], (const bdReferencable *)&v7[*(int *)(*(_QWORD *)&skuOrder->m_expectedPrices[v6] + 4i64) + 8]);
    bdReferencable::operator=((bdReferencable *)&v8[*(int *)(*((_QWORD *)v8 + 3) + 4i64) + 24], (const bdReferencable *)&v7[*(int *)(*((_QWORD *)v7 + 3) + 4i64) + 24]);
    v8[32] = v7[32];
    *((_DWORD *)v8 + 9) = *((_DWORD *)v7 + 9);
  }
}

/*
==============
bdMarketplacePurchaseSkusSkuOrderV2::bdMarketplacePurchaseSkusSkuOrderV2
==============
*/
void bdMarketplacePurchaseSkusSkuOrderV2::bdMarketplacePurchaseSkusSkuOrderV2(bdMarketplacePurchaseSkusSkuOrderV2 *this, unsigned int skuId, unsigned int skuQuantity, unsigned int discountId, int a5)
{
  if ( a5 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdMarketplacePurchaseSkusSkuOrderV2::`vbtable';
    *(_QWORD *)this->gap258 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap258[8] = 0;
  }
  bdMarketplacePurchaseSkusSkuOrder::bdMarketplacePurchaseSkusSkuOrder(this, skuId, skuQuantity, discountId);
  this->__vftable = (bdMarketplacePurchaseSkusSkuOrderV2_vtbl *)&bdMarketplacePurchaseSkusSkuOrderV2::`vftable'{for `bdSerializable'};
  *(bdMarketplacePurchaseSkusSkuOrderV2_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdMarketplacePurchaseSkusSkuOrderV2_vtbl *)&bdMarketplacePurchaseSkusSkuOrderV2::`vftable'{for `bdReferencable'};
  `eh vector vbase constructor iterator'(&this->gap20[8], 0x38ui64, 0xAui64, (void (__fastcall *)(void *))bdMarketplaceCurrency::bdMarketplaceCurrency, (void (__fastcall *)(void *))bdMarketplaceCurrency::`vbase destructor);
  this->gap20[0] = 0;
}

/*
==============
bdMarketplacePurchaseSkusSkuOrderV2::bdMarketplacePurchaseSkusSkuOrderV2
==============
*/
void bdMarketplacePurchaseSkusSkuOrderV2::bdMarketplacePurchaseSkusSkuOrderV2(bdMarketplacePurchaseSkusSkuOrderV2 *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdMarketplacePurchaseSkusSkuOrderV2::`vbtable';
    *(_QWORD *)this->gap258 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap258[8] = 0;
  }
  bdMarketplacePurchaseSkusSkuOrder::bdMarketplacePurchaseSkusSkuOrder(this);
  this->__vftable = (bdMarketplacePurchaseSkusSkuOrderV2_vtbl *)&bdMarketplacePurchaseSkusSkuOrderV2::`vftable'{for `bdSerializable'};
  *(bdMarketplacePurchaseSkusSkuOrderV2_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdMarketplacePurchaseSkusSkuOrderV2_vtbl *)&bdMarketplacePurchaseSkusSkuOrderV2::`vftable'{for `bdReferencable'};
  `eh vector vbase constructor iterator'(&this->gap20[8], 0x38ui64, 0xAui64, (void (__fastcall *)(void *))bdMarketplaceCurrency::bdMarketplaceCurrency, (void (__fastcall *)(void *))bdMarketplaceCurrency::`vbase destructor);
  bdMarketplacePurchaseSkusSkuOrder::reset(this);
  this->gap20[0] = 0;
}

/*
==============
bdMarketplacePurchaseSkusSkuOrderV2::~bdMarketplacePurchaseSkusSkuOrderV2
==============
*/
void bdMarketplacePurchaseSkusSkuOrderV2::~bdMarketplacePurchaseSkusSkuOrderV2(bdMarketplacePurchaseSkusSkuOrderV2 *this)
{
  *((_QWORD *)&this[-1].__vftable + 2) = &bdMarketplacePurchaseSkusSkuOrderV2::`vftable'{for `bdSerializable'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)&this[-1].__vftable + 3) + 4i64) - 592) = &bdMarketplacePurchaseSkusSkuOrderV2::`vftable'{for `bdReferencable'};
  `eh vector destructor iterator'(&this[-1].m_expectedPrices[8], 0x38ui64, 0xAui64, (void (__fastcall *)(void *))bdMarketplaceCurrency::`vbase destructor);
  bdMarketplacePurchaseSkusSkuOrder::~bdMarketplacePurchaseSkusSkuOrder((bdMarketplacePurchaseSkusSkuOrderV2 *)((char *)this - 568));
}

/*
==============
bdMarketplacePurchaseSkusSkuOrderV2::reset
==============
*/
void bdMarketplacePurchaseSkusSkuOrderV2::reset(bdMarketplacePurchaseSkusSkuOrderV2 *this)
{
  bdMarketplacePurchaseSkusSkuOrder::reset(this);
  this->gap20[0] = 0;
}

/*
==============
bdMarketplacePurchaseSkusSkuOrderV2::serialize
==============
*/
bool bdMarketplacePurchaseSkusSkuOrderV2::serialize(bdMarketplacePurchaseSkusSkuOrderV2 *this, bdByteBuffer *buffer)
{
  bool v4; 
  unsigned __int8 v5; 
  unsigned int v6; 
  bool result; 
  unsigned __int8 i; 

  v4 = bdMarketplacePurchaseSkusSkuOrder::serialize(this, buffer);
  v5 = this->gap20[0];
  v6 = v5;
  if ( v5 >= 0xAu )
    v6 = 10;
  result = v4 && bdByteBuffer::writeUInt32(buffer, v6);
  for ( i = 0; i < v6; ++i )
    result = result && (**(unsigned __int8 (__fastcall ***)(_BYTE *, bdByteBuffer *))&this->m_expectedPrices[56 * i + 8])(&this->m_expectedPrices[56 * i + 8], buffer);
  return result;
}

/*
==============
bdMarketplacePurchaseSkusSkuOrderV2::serializedSizeOf
==============
*/
__int64 bdMarketplacePurchaseSkusSkuOrderV2::serializedSizeOf(bdMarketplacePurchaseSkusSkuOrderV2 *this)
{
  unsigned int v2; 
  unsigned int i; 
  int v4; 

  v2 = 0;
  for ( i = bdMarketplacePurchaseSkusSkuOrder::serializedSizeOf(this) + 5; v2 < (unsigned __int8)this->gap20[0]; i += v4 )
  {
    v4 = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)&this->m_expectedPrices[56 * v2 + 8] + 8i64))(&this->m_expectedPrices[56 * v2 + 8]);
    ++v2;
  }
  return i;
}

