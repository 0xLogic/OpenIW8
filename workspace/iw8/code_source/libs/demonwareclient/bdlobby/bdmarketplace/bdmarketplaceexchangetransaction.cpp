/*
==============
bdExchangeTransactionResult::deserialize
==============
*/

bool __fastcall bdExchangeTransactionResult::deserialize(bdExchangeTransactionResult *this, bdReference<bdByteBuffer> buffer)
{
  return ?deserialize@bdExchangeTransactionResult@@UEAA_NV?$bdReference@VbdByteBuffer@@@@@Z(this, buffer);
}

/*
==============
bdExchangeTransactionResult::sizeOf
==============
*/

unsigned int __fastcall bdExchangeTransactionResult::sizeOf(bdExchangeTransactionResult *this)
{
  return ?sizeOf@bdExchangeTransactionResult@@UEAAIXZ(this);
}

/*
==============
bdExchangeTransactionMultipleResults::sizeOf
==============
*/

unsigned int __fastcall bdExchangeTransactionMultipleResults::sizeOf(bdExchangeTransactionMultipleResults *this)
{
  return ?sizeOf@bdExchangeTransactionMultipleResults@@UEAAIXZ(this);
}

/*
==============
bdExchangeTransactionResult::bdExchangeTransactionResult
==============
*/

void __fastcall bdExchangeTransactionResult::bdExchangeTransactionResult(bdExchangeTransactionResult *this)
{
  ??0bdExchangeTransactionResult@@QEAA@XZ(this);
}

/*
==============
bdExchangeTransactionMultipleResults::deserialize
==============
*/

bool __fastcall bdExchangeTransactionMultipleResults::deserialize(bdExchangeTransactionMultipleResults *this, bdReference<bdByteBuffer> buffer)
{
  return ?deserialize@bdExchangeTransactionMultipleResults@@UEAA_NV?$bdReference@VbdByteBuffer@@@@@Z(this, buffer);
}

/*
==============
bdExchangeTransactionMultipleResults::~bdExchangeTransactionMultipleResults
==============
*/

void __fastcall bdExchangeTransactionMultipleResults::~bdExchangeTransactionMultipleResults(bdExchangeTransactionMultipleResults *this)
{
  ??1bdExchangeTransactionMultipleResults@@UEAA@XZ(this);
}

/*
==============
bdExchangeTransactionResultV2::deserialize
==============
*/

bool __fastcall bdExchangeTransactionResultV2::deserialize(bdExchangeTransactionResultV2 *this, bdReference<bdByteBuffer> buffer)
{
  return ?deserialize@bdExchangeTransactionResultV2@@UEAA_NV?$bdReference@VbdByteBuffer@@@@@Z(this, buffer);
}

/*
==============
bdProductInfo::bdProductInfo
==============
*/

void __fastcall bdProductInfo::bdProductInfo(bdProductInfo *this)
{
  ??0bdProductInfo@@QEAA@XZ(this);
}

/*
==============
bdProductInfo::deserialize
==============
*/

bool __fastcall bdProductInfo::deserialize(bdProductInfo *this, bdReference<bdByteBuffer> buffer)
{
  return ?deserialize@bdProductInfo@@QEAA_NV?$bdReference@VbdByteBuffer@@@@@Z(this, buffer);
}

/*
==============
bdExchangeTransactionResultV2::sizeOf
==============
*/

unsigned int __fastcall bdExchangeTransactionResultV2::sizeOf(bdExchangeTransactionResultV2 *this)
{
  return ?sizeOf@bdExchangeTransactionResultV2@@UEAAIXZ(this);
}

/*
==============
bdExchangeTransactionMultipleResults::bdExchangeTransactionMultipleResults
==============
*/

void __fastcall bdExchangeTransactionMultipleResults::bdExchangeTransactionMultipleResults(bdExchangeTransactionMultipleResults *this)
{
  ??0bdExchangeTransactionMultipleResults@@QEAA@XZ(this);
}

/*
==============
bdExchangeTransactionMultipleResults::bdExchangeTransactionMultipleResults
==============
*/
void bdExchangeTransactionMultipleResults::bdExchangeTransactionMultipleResults(bdExchangeTransactionMultipleResults *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdExchangeTransactionMultipleResults::`vbtable';
    *(_QWORD *)this->gap20 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap20[8] = 0;
  }
  bdTaskResult::bdTaskResult(this);
  this->__vftable = (bdExchangeTransactionMultipleResults_vtbl *)&bdExchangeTransactionMultipleResults::`vftable'{for `bdTaskResult'};
  *(bdExchangeTransactionMultipleResults_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdExchangeTransactionMultipleResults_vtbl *)&bdExchangeTransactionMultipleResults::`vftable'{for `bdReferencable'};
  *((_DWORD *)&this->__vftable + 4) = 0;
  *((_QWORD *)&this->__vftable + 3) = 0i64;
}

/*
==============
bdExchangeTransactionResult::bdExchangeTransactionResult
==============
*/
void bdExchangeTransactionResult::bdExchangeTransactionResult(bdExchangeTransactionResult *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdExchangeTransactionResult::`vbtable';
    *(_QWORD *)&this->m_purchasedCouponId[16] = &bdReferencable::`vftable';
    *(_DWORD *)&this->m_purchasedCouponId[24] = 0;
  }
  bdTaskResult::bdTaskResult(this);
  this->__vftable = (bdExchangeTransactionResult_vtbl *)&bdExchangeTransactionResult::`vftable'{for `bdTaskResult'};
  *(bdExchangeTransactionResult_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdExchangeTransactionResult_vtbl *)&bdExchangeTransactionResult::`vftable'{for `bdReferencable'};
}

/*
==============
bdProductInfo::bdProductInfo
==============
*/
void bdProductInfo::bdProductInfo(bdProductInfo *this)
{
  this->m_status = 0;
  *(_QWORD *)&this->m_iTunesTransactionId[16] = 0i64;
  *(_QWORD *)this->m_iTunesTransactionId = 0i64;
  *(_QWORD *)&this->m_iTunesTransactionId[8] = 0i64;
  *(_QWORD *)this->m_purchasedCouponId = 0i64;
  *(_QWORD *)&this->m_purchasedCouponId[8] = 0i64;
  *(_QWORD *)&this->m_purchasedCouponId[16] = 0i64;
  this->m_purchasedCouponId[24] = 0;
  *(_QWORD *)this->m_auditLogId = 0i64;
  *(_QWORD *)&this->m_auditLogId[8] = 0i64;
  *(_QWORD *)&this->m_auditLogId[16] = 0i64;
  this->m_auditLogId[24] = 0;
}

/*
==============
bdExchangeTransactionMultipleResults::~bdExchangeTransactionMultipleResults
==============
*/
void bdExchangeTransactionMultipleResults::~bdExchangeTransactionMultipleResults(bdExchangeTransactionMultipleResults *this)
{
  void *v2; 

  *((_QWORD *)&this[-1].__vftable + 2) = &bdExchangeTransactionMultipleResults::`vftable'{for `bdTaskResult'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)&this[-1].__vftable + 3) + 4i64) - 24) = &bdExchangeTransactionMultipleResults::`vftable'{for `bdReferencable'};
  v2 = *(void **)&this[-1].gap20[8];
  if ( v2 )
    operator delete[](v2);
  bdTaskResult::~bdTaskResult((bdExchangeTransactionMultipleResults *)((char *)this - 16));
}

/*
==============
bdExchangeTransactionMultipleResults::deserialize
==============
*/
_BOOL8 bdExchangeTransactionMultipleResults::deserialize(bdExchangeTransactionMultipleResults *this, bdReference<bdByteBuffer> buffer)
{
  bool UInt32; 
  unsigned __int64 v5; 
  bdByteBuffer **v6; 
  bdByteBuffer **v7; 
  bdProductInfo *i; 
  __int64 j; 
  __int64 v10; 
  bdByteBuffer *v11; 
  bool v12; 
  bdByteBuffer *v14; 
  bdByteBuffer *m_ptr; 
  bdByteBuffer **v16; 

  m_ptr = buffer.m_ptr;
  UInt32 = bdByteBuffer::readUInt32((bdByteBuffer *)buffer.m_ptr->__vftable, (unsigned int *)&this->__vftable + 4);
  v5 = *((unsigned int *)&this->__vftable + 4);
  v14 = (bdByteBuffer *)v5;
  v6 = (bdByteBuffer **)operator new[](saturated_mul(v5, 0x50ui64));
  v7 = v6;
  v16 = v6;
  if ( v6 )
  {
    for ( i = (bdProductInfo *)v6; v5; --v5 )
      bdProductInfo::bdProductInfo(i++);
  }
  else
  {
    v7 = NULL;
  }
  *((_QWORD *)&this->__vftable + 3) = v7;
  for ( j = 0i64; (unsigned int)j < *((_DWORD *)&this->__vftable + 4); j = (unsigned int)(j + 1) )
  {
    if ( !UInt32 )
      goto LABEL_23;
    v10 = *((_QWORD *)&this->__vftable + 3) + 80 * j;
    v11 = (bdByteBuffer *)buffer.m_ptr->__vftable;
    v14 = v11;
    if ( v11 )
    {
      _InterlockedExchangeAdd((volatile signed __int32 *)&v11->m_refCount, 1u);
      v11 = v14;
    }
    v16 = &v14;
    v12 = bdByteBuffer::readUInt32(v11, (unsigned int *)v10) && bdByteBuffer::readString(v14, (char *const)(v10 + 4), 0x14ui64) && bdByteBuffer::readUInt32(v14, (unsigned int *)(v10 + 24)) && bdByteBuffer::readString(v14, (char *const)(v10 + 28), 0x19ui64) && bdByteBuffer::readString(v14, (char *const)(v10 + 53), 0x19ui64);
    if ( v14 && _InterlockedExchangeAdd((volatile signed __int32 *)&v14->m_refCount, 0xFFFFFFFF) == 1 && v14 )
      ((void (__fastcall *)(bdByteBuffer *, __int64))v14->~bdReferencable)(v14, 1i64);
    if ( v12 )
      UInt32 = 1;
    else
LABEL_23:
      UInt32 = 0;
  }
  if ( buffer.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->allocateBuffer, 0xFFFFFFFF) == 1 )
  {
    if ( buffer.m_ptr->__vftable )
      (*(void (__fastcall **)(bdByteBuffer_vtbl *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr->__vftable, 1i64);
    buffer.m_ptr->__vftable = NULL;
  }
  return UInt32;
}

/*
==============
bdExchangeTransactionResult::deserialize
==============
*/
_BOOL8 bdExchangeTransactionResult::deserialize(bdExchangeTransactionResult *this, bdReference<bdByteBuffer> buffer)
{
  bool v4; 

  v4 = bdByteBuffer::readUInt32((bdByteBuffer *)buffer.m_ptr->__vftable, (unsigned int *)&this->__vftable + 4) && bdByteBuffer::readString((bdByteBuffer *)buffer.m_ptr->__vftable, (char *const)&this->__vftable + 20, 0x19ui64);
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
bdExchangeTransactionResultV2::deserialize
==============
*/
_BOOL8 bdExchangeTransactionResultV2::deserialize(bdExchangeTransactionResultV2 *this, bdReference<bdByteBuffer> buffer)
{
  bdByteBuffer *v4; 
  bool v5; 
  bool v6; 
  bdByteBuffer *v8; 
  bdByteBuffer **v9; 

  v4 = (bdByteBuffer *)buffer.m_ptr->__vftable;
  v8 = v4;
  if ( v4 )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)&v4->m_refCount, 1u);
    v4 = v8;
  }
  v9 = &v8;
  v5 = bdByteBuffer::readUInt32(v4, (unsigned int *)&this->__vftable + 4) && bdByteBuffer::readString(v8, (char *const)&this->__vftable + 20, 0x19ui64);
  if ( v8 && _InterlockedExchangeAdd((volatile signed __int32 *)&v8->m_refCount, 0xFFFFFFFF) == 1 && v8 )
    ((void (__fastcall *)(bdByteBuffer *, __int64))v8->~bdReferencable)(v8, 1i64);
  v6 = v5 && bdByteBuffer::readString((bdByteBuffer *)buffer.m_ptr->__vftable, &this->m_purchasedCouponId[16], 0x19ui64);
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
bdProductInfo::deserialize
==============
*/
_BOOL8 bdProductInfo::deserialize(bdProductInfo *this, bdReference<bdByteBuffer> buffer)
{
  bool v4; 

  v4 = bdByteBuffer::readUInt32((bdByteBuffer *)buffer.m_ptr->__vftable, &this->m_status) && bdByteBuffer::readString((bdByteBuffer *)buffer.m_ptr->__vftable, this->m_iTunesTransactionId, 0x14ui64) && bdByteBuffer::readUInt32((bdByteBuffer *)buffer.m_ptr->__vftable, &this->m_purchasedFirstPartySkuId) && bdByteBuffer::readString((bdByteBuffer *)buffer.m_ptr->__vftable, this->m_purchasedCouponId, 0x19ui64) && bdByteBuffer::readString((bdByteBuffer *)buffer.m_ptr->__vftable, this->m_auditLogId, 0x19ui64);
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
bdExchangeTransactionMultipleResults::sizeOf
==============
*/
__int64 bdExchangeTransactionMultipleResults::sizeOf(bdExchangeTransactionMultipleResults *this)
{
  return 48i64;
}

/*
==============
bdExchangeTransactionResult::sizeOf
==============
*/
__int64 bdExchangeTransactionResult::sizeOf(bdExchangeTransactionResult *this)
{
  return 64i64;
}

/*
==============
bdExchangeTransactionResultV2::sizeOf
==============
*/
__int64 bdExchangeTransactionResultV2::sizeOf(bdExchangeTransactionResultV2 *this)
{
  return 96i64;
}

