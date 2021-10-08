/*
==============
bdMarketplacePurchaseSkusResult::deserialize
==============
*/

bool __fastcall bdMarketplacePurchaseSkusResult::deserialize(bdMarketplacePurchaseSkusResult *this, bdReference<bdByteBuffer> buffer)
{
  return ?deserialize@bdMarketplacePurchaseSkusResult@@UEAA_NV?$bdReference@VbdByteBuffer@@@@@Z(this, buffer);
}

/*
==============
bdMarketplacePurchaseSkusResult::reset
==============
*/

void __fastcall bdMarketplacePurchaseSkusResult::reset(bdMarketplacePurchaseSkusResult *this)
{
  ?reset@bdMarketplacePurchaseSkusResult@@QEAAXXZ(this);
}

/*
==============
bdMarketplacePurchaseSkusResult::bdMarketplacePurchaseSkusResult
==============
*/

void __fastcall bdMarketplacePurchaseSkusResult::bdMarketplacePurchaseSkusResult(bdMarketplacePurchaseSkusResult *this)
{
  ??0bdMarketplacePurchaseSkusResult@@QEAA@XZ(this);
}

/*
==============
bdMarketplacePurchaseSkusResult::sizeOf
==============
*/

unsigned int __fastcall bdMarketplacePurchaseSkusResult::sizeOf(bdMarketplacePurchaseSkusResult *this)
{
  return ?sizeOf@bdMarketplacePurchaseSkusResult@@UEAAIXZ(this);
}

/*
==============
bdMarketplacePurchaseSkusResult::bdMarketplacePurchaseSkusResult
==============
*/

void __fastcall bdMarketplacePurchaseSkusResult::bdMarketplacePurchaseSkusResult(bdMarketplacePurchaseSkusResult *this, unsigned int numCouponInventories, bdMarketplaceCouponInventory *couponInventories)
{
  ??0bdMarketplacePurchaseSkusResult@@QEAA@IPEAVbdMarketplaceCouponInventory@@@Z(this, numCouponInventories, couponInventories);
}

/*
==============
bdMarketplacePurchaseSkusResult::bdMarketplacePurchaseSkusResult
==============
*/
void bdMarketplacePurchaseSkusResult::bdMarketplacePurchaseSkusResult(bdMarketplacePurchaseSkusResult *this, unsigned int numCouponInventories, bdMarketplaceCouponInventory *couponInventories, int a4)
{
  if ( a4 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdMarketplacePurchaseSkusResult::`vbtable';
    *(_QWORD *)this->gap38 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap38[8] = 0;
  }
  bdTaskResult::bdTaskResult(this);
  this->__vftable = (bdMarketplacePurchaseSkusResult_vtbl *)&bdMarketplacePurchaseSkusResult::`vftable'{for `bdTaskResult'};
  *(bdMarketplacePurchaseSkusResult_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdMarketplacePurchaseSkusResult_vtbl *)&bdMarketplacePurchaseSkusResult::`vftable'{for `bdReferencable'};
  this->m_numCouponInventories = numCouponInventories;
  this->m_couponInventories = couponInventories;
}

/*
==============
bdMarketplacePurchaseSkusResult::bdMarketplacePurchaseSkusResult
==============
*/
void bdMarketplacePurchaseSkusResult::bdMarketplacePurchaseSkusResult(bdMarketplacePurchaseSkusResult *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdMarketplacePurchaseSkusResult::`vbtable';
    *(_QWORD *)this->gap38 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap38[8] = 0;
  }
  bdTaskResult::bdTaskResult(this);
  this->__vftable = (bdMarketplacePurchaseSkusResult_vtbl *)&bdMarketplacePurchaseSkusResult::`vftable'{for `bdTaskResult'};
  *(bdMarketplacePurchaseSkusResult_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdMarketplacePurchaseSkusResult_vtbl *)&bdMarketplacePurchaseSkusResult::`vftable'{for `bdReferencable'};
  this->m_numCouponInventories = 0;
  this->m_couponInventories = NULL;
}

/*
==============
bdMarketplacePurchaseSkusResult::deserialize
==============
*/
_BOOL8 bdMarketplacePurchaseSkusResult::deserialize(bdMarketplacePurchaseSkusResult *this, bdReference<bdByteBuffer> buffer)
{
  bool v4; 
  unsigned __int8 i; 
  bdMarketplaceCouponInventory *v6; 
  bool (__fastcall *deserialize)(bdTaskResult *, bdReference<bdByteBuffer>); 
  bdByteBuffer_vtbl *v8; 
  bdByteBuffer_vtbl *v10; 
  bdByteBuffer *m_ptr; 

  m_ptr = buffer.m_ptr;
  v4 = bdByteBuffer::readString((bdByteBuffer *)buffer.m_ptr->__vftable, (char *const)&this->__vftable + 16, 0x19ui64) && bdByteBuffer::readUInt32((bdByteBuffer *)buffer.m_ptr->__vftable, &this->m_numCouponInventories);
  for ( i = 0; i < this->m_numCouponInventories; ++i )
  {
    if ( !v4 )
      goto LABEL_11;
    v6 = &this->m_couponInventories[i];
    deserialize = v6->deserialize;
    v8 = buffer.m_ptr->__vftable;
    v10 = v8;
    if ( v8 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v8->allocateBuffer, 1u);
    if ( ((unsigned __int8 (__fastcall *)(bdMarketplaceCouponInventory *, bdByteBuffer_vtbl **))deserialize)(v6, &v10) )
      v4 = 1;
    else
LABEL_11:
      v4 = 0;
  }
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
bdMarketplacePurchaseSkusResult::reset
==============
*/
void bdMarketplacePurchaseSkusResult::reset(bdMarketplacePurchaseSkusResult *this)
{
  this->m_numCouponInventories = 0;
  this->m_couponInventories = NULL;
}

/*
==============
bdMarketplacePurchaseSkusResult::sizeOf
==============
*/
__int64 bdMarketplacePurchaseSkusResult::sizeOf(bdMarketplacePurchaseSkusResult *this)
{
  return 72i64;
}

