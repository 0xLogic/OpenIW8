/*
==============
bdMarketplaceAuditLogResult::deserialize
==============
*/

bool __fastcall bdMarketplaceAuditLogResult::deserialize(bdMarketplaceAuditLogResult *this, bdReference<bdByteBuffer> buffer)
{
  return ?deserialize@bdMarketplaceAuditLogResult@@UEAA_NV?$bdReference@VbdByteBuffer@@@@@Z(this, buffer);
}

/*
==============
bdMarketplaceAuditLogResult::sizeOf
==============
*/

unsigned int __fastcall bdMarketplaceAuditLogResult::sizeOf(bdMarketplaceAuditLogResult *this)
{
  return ?sizeOf@bdMarketplaceAuditLogResult@@UEAAIXZ(this);
}

/*
==============
bdMarketplaceAuditLogResult::deserialize
==============
*/
_BOOL8 bdMarketplaceAuditLogResult::deserialize(bdMarketplaceAuditLogResult *this, bdReference<bdByteBuffer> buffer)
{
  bool String; 

  String = bdByteBuffer::readString((bdByteBuffer *)buffer.m_ptr->__vftable, (char *const)&this->__vftable + 16, 0x19ui64);
  if ( buffer.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->allocateBuffer, 0xFFFFFFFF) == 1 )
  {
    if ( buffer.m_ptr->__vftable )
      (*(void (__fastcall **)(bdByteBuffer_vtbl *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr->__vftable, 1i64);
    buffer.m_ptr->__vftable = NULL;
  }
  return String;
}

/*
==============
bdMarketplaceAuditLogResult::sizeOf
==============
*/
__int64 bdMarketplaceAuditLogResult::sizeOf(bdMarketplaceAuditLogResult *this)
{
  return 64i64;
}

