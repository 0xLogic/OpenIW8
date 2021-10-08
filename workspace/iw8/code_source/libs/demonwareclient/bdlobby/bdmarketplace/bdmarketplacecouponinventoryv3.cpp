/*
==============
bdMarketplaceCouponInventoryV3::serialize
==============
*/

bool __fastcall bdMarketplaceCouponInventoryV3::serialize(bdMarketplaceCouponInventoryV3 *this, bdByteBuffer *buffer)
{
  return ?serialize@bdMarketplaceCouponInventoryV3@@UEBA_NAEAVbdByteBuffer@@@Z(this, buffer);
}

/*
==============
bdMarketplaceCouponInventoryV3::bdMarketplaceCouponInventoryV3
==============
*/

void __fastcall bdMarketplaceCouponInventoryV3::bdMarketplaceCouponInventoryV3(bdMarketplaceCouponInventoryV3 *this)
{
  ??0bdMarketplaceCouponInventoryV3@@QEAA@XZ(this);
}

/*
==============
bdMarketplaceCouponInventoryV3::deserialize
==============
*/

bool __fastcall bdMarketplaceCouponInventoryV3::deserialize(bdMarketplaceCouponInventoryV3 *this, bdReference<bdByteBuffer> buffer)
{
  return ?deserialize@bdMarketplaceCouponInventoryV3@@UEAA_NV?$bdReference@VbdByteBuffer@@@@@Z(this, buffer);
}

/*
==============
bdMarketplaceCouponInventoryV3::sizeOf
==============
*/

unsigned int __fastcall bdMarketplaceCouponInventoryV3::sizeOf(bdMarketplaceCouponInventoryV3 *this)
{
  return ?sizeOf@bdMarketplaceCouponInventoryV3@@UEAAIXZ(this);
}

/*
==============
bdMarketplaceCouponInventoryV3::reset
==============
*/

void __fastcall bdMarketplaceCouponInventoryV3::reset(bdMarketplaceCouponInventoryV3 *this)
{
  ?reset@bdMarketplaceCouponInventoryV3@@QEAAXXZ(this);
}

/*
==============
bdMarketplaceCouponInventoryV3::bdMarketplaceCouponInventoryV3
==============
*/
void bdMarketplaceCouponInventoryV3::bdMarketplaceCouponInventoryV3(bdMarketplaceCouponInventoryV3 *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdMarketplaceCouponInventoryV3::`vbtable'{for `bdTaskResult'};
    *((_QWORD *)&this->__vftable + 3) = &bdMarketplaceCouponInventoryV3::`vbtable'{for `bdSerializable'};
    *(_QWORD *)&this->gap132[14] = &bdReferencable::`vftable';
    *((_DWORD *)&this->bdMarketplaceCouponInventoryV2 + 82) = 0;
  }
  bdMarketplaceCouponInventoryV2::bdMarketplaceCouponInventoryV2(this);
  this->__vftable = (bdMarketplaceCouponInventoryV3_vtbl *)&bdMarketplaceCouponInventoryV3::`vftable'{for `bdTaskResult'};
  *((_QWORD *)&this->__vftable + 2) = &bdMarketplaceCouponInventoryV3::`vftable'{for `bdSerializable'};
  *(bdMarketplaceCouponInventoryV3_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdMarketplaceCouponInventoryV3_vtbl *)&bdMarketplaceCouponInventoryV3::`vftable'{for `bdReferencable'};
  bdMarketplaceCouponInventoryV2::reset(this);
  *(_DWORD *)&this->gap132[6] = -1;
}

/*
==============
bdMarketplaceCouponInventoryV3::deserialize
==============
*/
_BOOL8 bdMarketplaceCouponInventoryV3::deserialize(bdMarketplaceCouponInventoryV3 *this, bdReference<bdByteBuffer> buffer)
{
  bdByteBuffer *v4; 
  bool v5; 
  bdReference<bdByteBuffer> buffera; 

  v4 = (bdByteBuffer *)buffer.m_ptr->__vftable;
  buffera.m_ptr = v4;
  if ( v4 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v4->m_refCount, 1u);
  v5 = bdMarketplaceCouponInventoryV2::deserialize(this, (bdReference<bdByteBuffer>)&buffera) && bdByteBuffer::readUInt32((bdByteBuffer *)buffer.m_ptr->__vftable, (unsigned int *)&this->gap132[6]);
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
bdMarketplaceCouponInventoryV3::reset
==============
*/
void bdMarketplaceCouponInventoryV3::reset(bdMarketplaceCouponInventoryV3 *this)
{
  bdMarketplaceCouponInventoryV2::reset(this);
  *(_DWORD *)&this->gap132[6] = -1;
}

/*
==============
bdMarketplaceCouponInventoryV3::serialize
==============
*/
bool bdMarketplaceCouponInventoryV3::serialize(bdMarketplaceCouponInventoryV3 *this, bdByteBuffer *buffer)
{
  return bdMarketplaceCouponInventoryV2::serialize(this, buffer) && bdByteBuffer::writeUInt32(buffer, *(_DWORD *)&this->m_metadata[56]);
}

/*
==============
bdMarketplaceCouponInventoryV3::sizeOf
==============
*/
__int64 bdMarketplaceCouponInventoryV3::sizeOf(bdMarketplaceCouponInventoryV3 *this)
{
  return 336i64;
}

