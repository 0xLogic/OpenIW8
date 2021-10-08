/*
==============
bdMarketplacePurchaseSkusSkuOrder::bdMarketplacePurchaseSkusSkuOrder
==============
*/

void __fastcall bdMarketplacePurchaseSkusSkuOrder::bdMarketplacePurchaseSkusSkuOrder(bdMarketplacePurchaseSkusSkuOrder *this, unsigned int skuId, unsigned int skuQuantity, unsigned int discountId)
{
  ??0bdMarketplacePurchaseSkusSkuOrder@@QEAA@III@Z(this, skuId, skuQuantity, discountId);
}

/*
==============
bdMarketplacePurchaseSkusSkuOrder::serializedSizeOf
==============
*/

int __fastcall bdMarketplacePurchaseSkusSkuOrder::serializedSizeOf(bdMarketplacePurchaseSkusSkuOrder *this)
{
  return ?serializedSizeOf@bdMarketplacePurchaseSkusSkuOrder@@UEBAHXZ(this);
}

/*
==============
bdMarketplacePurchaseSkusSkuOrder::reset
==============
*/

void __fastcall bdMarketplacePurchaseSkusSkuOrder::reset(bdMarketplacePurchaseSkusSkuOrder *this)
{
  ?reset@bdMarketplacePurchaseSkusSkuOrder@@UEAAXXZ(this);
}

/*
==============
bdMarketplacePurchaseSkusSkuOrder::~bdMarketplacePurchaseSkusSkuOrder
==============
*/

void __fastcall bdMarketplacePurchaseSkusSkuOrder::~bdMarketplacePurchaseSkusSkuOrder(bdMarketplacePurchaseSkusSkuOrder *this)
{
  ??1bdMarketplacePurchaseSkusSkuOrder@@UEAA@XZ(this);
}

/*
==============
bdMarketplacePurchaseSkusSkuOrder::bdMarketplacePurchaseSkusSkuOrder
==============
*/

void __fastcall bdMarketplacePurchaseSkusSkuOrder::bdMarketplacePurchaseSkusSkuOrder(bdMarketplacePurchaseSkusSkuOrder *this)
{
  ??0bdMarketplacePurchaseSkusSkuOrder@@QEAA@XZ(this);
}

/*
==============
bdMarketplacePurchaseSkusSkuOrder::bdMarketplacePurchaseSkusSkuOrder
==============
*/

void __fastcall bdMarketplacePurchaseSkusSkuOrder::bdMarketplacePurchaseSkusSkuOrder(bdMarketplacePurchaseSkusSkuOrder *this, const bdMarketplacePurchaseSkusSkuOrder *skuOrder)
{
  ??0bdMarketplacePurchaseSkusSkuOrder@@QEAA@AEBV0@@Z(this, skuOrder);
}

/*
==============
bdMarketplacePurchaseSkusSkuOrder::serialize
==============
*/

bool __fastcall bdMarketplacePurchaseSkusSkuOrder::serialize(bdMarketplacePurchaseSkusSkuOrder *this, bdByteBuffer *buffer)
{
  return ?serialize@bdMarketplacePurchaseSkusSkuOrder@@UEBA_NAEAVbdByteBuffer@@@Z(this, buffer);
}

/*
==============
bdMarketplacePurchaseSkusSkuOrder::bdMarketplacePurchaseSkusSkuOrder
==============
*/
void bdMarketplacePurchaseSkusSkuOrder::bdMarketplacePurchaseSkusSkuOrder(bdMarketplacePurchaseSkusSkuOrder *this, const bdMarketplacePurchaseSkusSkuOrder *skuOrder, int a3)
{
  if ( a3 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdMarketplacePurchaseSkusSkuOrder::`vbtable';
    *(_QWORD *)this->gap20 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap20[8] = 0;
  }
  bdSerializable::bdSerializable(this);
  this->__vftable = (bdMarketplacePurchaseSkusSkuOrder_vtbl *)&bdMarketplacePurchaseSkusSkuOrder::`vftable'{for `bdSerializable'};
  *(bdMarketplacePurchaseSkusSkuOrder_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdMarketplacePurchaseSkusSkuOrder_vtbl *)&bdMarketplacePurchaseSkusSkuOrder::`vftable'{for `bdReferencable'};
  *((_DWORD *)&this->__vftable + 4) = *((_DWORD *)&skuOrder->__vftable + 4);
  *((_DWORD *)&this->__vftable + 5) = *((_DWORD *)&skuOrder->__vftable + 5);
  *((_DWORD *)&this->__vftable + 6) = *((_DWORD *)&skuOrder->__vftable + 6);
}

/*
==============
bdMarketplacePurchaseSkusSkuOrder::bdMarketplacePurchaseSkusSkuOrder
==============
*/
void bdMarketplacePurchaseSkusSkuOrder::bdMarketplacePurchaseSkusSkuOrder(bdMarketplacePurchaseSkusSkuOrder *this, unsigned int skuId, unsigned int skuQuantity, unsigned int discountId, int a5)
{
  if ( a5 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdMarketplacePurchaseSkusSkuOrder::`vbtable';
    *(_QWORD *)this->gap20 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap20[8] = 0;
  }
  bdSerializable::bdSerializable(this);
  this->__vftable = (bdMarketplacePurchaseSkusSkuOrder_vtbl *)&bdMarketplacePurchaseSkusSkuOrder::`vftable'{for `bdSerializable'};
  *(bdMarketplacePurchaseSkusSkuOrder_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdMarketplacePurchaseSkusSkuOrder_vtbl *)&bdMarketplacePurchaseSkusSkuOrder::`vftable'{for `bdReferencable'};
  *((_DWORD *)&this->__vftable + 4) = skuId;
  *((_DWORD *)&this->__vftable + 5) = skuQuantity;
  *((_DWORD *)&this->__vftable + 6) = discountId;
}

/*
==============
bdMarketplacePurchaseSkusSkuOrder::bdMarketplacePurchaseSkusSkuOrder
==============
*/
void bdMarketplacePurchaseSkusSkuOrder::bdMarketplacePurchaseSkusSkuOrder(bdMarketplacePurchaseSkusSkuOrder *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdMarketplacePurchaseSkusSkuOrder::`vbtable';
    *(_QWORD *)this->gap20 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap20[8] = 0;
  }
  bdSerializable::bdSerializable(this);
  this->__vftable = (bdMarketplacePurchaseSkusSkuOrder_vtbl *)&bdMarketplacePurchaseSkusSkuOrder::`vftable'{for `bdSerializable'};
  *(bdMarketplacePurchaseSkusSkuOrder_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdMarketplacePurchaseSkusSkuOrder_vtbl *)&bdMarketplacePurchaseSkusSkuOrder::`vftable'{for `bdReferencable'};
  *((_DWORD *)&this->__vftable + 4) = -1;
  *(bdMarketplacePurchaseSkusSkuOrder_vtbl **)((char *)&this->__vftable + 20) = NULL;
}

/*
==============
bdMarketplacePurchaseSkusSkuOrder::~bdMarketplacePurchaseSkusSkuOrder
==============
*/
void bdMarketplacePurchaseSkusSkuOrder::~bdMarketplacePurchaseSkusSkuOrder(bdMarketplacePurchaseSkusSkuOrder *this)
{
  *((_QWORD *)&this[-1].__vftable + 2) = &bdMarketplacePurchaseSkusSkuOrder::`vftable'{for `bdSerializable'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)&this[-1].__vftable + 3) + 4i64) - 24) = &bdMarketplacePurchaseSkusSkuOrder::`vftable'{for `bdReferencable'};
  bdSerializable::~bdSerializable((bdMarketplacePurchaseSkusSkuOrder *)((char *)this - 16));
}

/*
==============
bdMarketplacePurchaseSkusSkuOrder::reset
==============
*/
void bdMarketplacePurchaseSkusSkuOrder::reset(bdMarketplacePurchaseSkusSkuOrder *this)
{
  *((_DWORD *)&this->__vftable + 4) = -1;
  *(bdMarketplacePurchaseSkusSkuOrder_vtbl **)((char *)&this->__vftable + 20) = NULL;
}

/*
==============
bdMarketplacePurchaseSkusSkuOrder::serialize
==============
*/
bool bdMarketplacePurchaseSkusSkuOrder::serialize(bdMarketplacePurchaseSkusSkuOrder *this, bdByteBuffer *buffer)
{
  return bdByteBuffer::writeUInt32(buffer, *((_DWORD *)&this->__vftable + 4)) && bdByteBuffer::writeUInt32(buffer, *((_DWORD *)&this->__vftable + 5)) && bdByteBuffer::writeUInt32(buffer, *((_DWORD *)&this->__vftable + 6));
}

/*
==============
bdMarketplacePurchaseSkusSkuOrder::serializedSizeOf
==============
*/
__int64 bdMarketplacePurchaseSkusSkuOrder::serializedSizeOf(bdMarketplacePurchaseSkusSkuOrder *this)
{
  return 15i64;
}

