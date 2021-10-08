/*
==============
bdMarketplaceEntitlement::bdMarketplaceEntitlement
==============
*/

void __fastcall bdMarketplaceEntitlement::bdMarketplaceEntitlement(bdMarketplaceEntitlement *this, const bdUserAccountID *playerId, const unsigned __int16 numPlayerEntitlements, const unsigned int *playerEntitlementIds)
{
  ??0bdMarketplaceEntitlement@@QEAA@VbdUserAccountID@@GPEBI@Z(this, playerId, numPlayerEntitlements, playerEntitlementIds);
}

/*
==============
bdMarketplaceEntitlement::reset
==============
*/

void __fastcall bdMarketplaceEntitlement::reset(bdMarketplaceEntitlement *this)
{
  ?reset@bdMarketplaceEntitlement@@QEAAXXZ(this);
}

/*
==============
bdMarketplaceEntitlement::deserialize
==============
*/

bool __fastcall bdMarketplaceEntitlement::deserialize(bdMarketplaceEntitlement *this, bdReference<bdByteBuffer> buffer, const bdUserAccountID *playerId)
{
  return ?deserialize@bdMarketplaceEntitlement@@UEAA_NV?$bdReference@VbdByteBuffer@@@@VbdUserAccountID@@@Z(this, buffer, playerId);
}

/*
==============
bdMarketplaceEntitlement::serializedSizeOf
==============
*/

int __fastcall bdMarketplaceEntitlement::serializedSizeOf(bdMarketplaceEntitlement *this)
{
  return ?serializedSizeOf@bdMarketplaceEntitlement@@UEBAHXZ(this);
}

/*
==============
bdMarketplaceEntitlement::deserialize
==============
*/

bool __fastcall bdMarketplaceEntitlement::deserialize(bdMarketplaceEntitlement *this, bdReference<bdByteBuffer> buffer)
{
  return ?deserialize@bdMarketplaceEntitlement@@UEAA_NV?$bdReference@VbdByteBuffer@@@@@Z(this, buffer);
}

/*
==============
bdMarketplaceEntitlement::bdMarketplaceEntitlement
==============
*/

void __fastcall bdMarketplaceEntitlement::bdMarketplaceEntitlement(bdMarketplaceEntitlement *this, const bdUserAccountID *playerId, const unsigned __int16 numPlayerEntitlements, const unsigned int *playerEntitlementIds, const unsigned int *playerEntitlementLevels)
{
  ??0bdMarketplaceEntitlement@@QEAA@VbdUserAccountID@@GPEBI1@Z(this, playerId, numPlayerEntitlements, playerEntitlementIds, playerEntitlementLevels);
}

/*
==============
bdMarketplaceEntitlement::serialize
==============
*/

bool __fastcall bdMarketplaceEntitlement::serialize(bdMarketplaceEntitlement *this, bdByteBuffer *buffer)
{
  return ?serialize@bdMarketplaceEntitlement@@UEBA_NAEAVbdByteBuffer@@@Z(this, buffer);
}

/*
==============
bdMarketplaceEntitlement::bdMarketplaceEntitlement
==============
*/

void __fastcall bdMarketplaceEntitlement::bdMarketplaceEntitlement(bdMarketplaceEntitlement *this)
{
  ??0bdMarketplaceEntitlement@@QEAA@XZ(this);
}

/*
==============
bdMarketplaceEntitlement::sizeOf
==============
*/

unsigned int __fastcall bdMarketplaceEntitlement::sizeOf(bdMarketplaceEntitlement *this)
{
  return ?sizeOf@bdMarketplaceEntitlement@@UEAAIXZ(this);
}

/*
==============
bdMarketplaceEntitlement::bdMarketplaceEntitlement
==============
*/
void bdMarketplaceEntitlement::bdMarketplaceEntitlement(bdMarketplaceEntitlement *this, const bdUserAccountID *playerId, const unsigned __int16 numPlayerEntitlements, const unsigned int *playerEntitlementIds, const unsigned int *playerEntitlementLevels, int a6)
{
  unsigned int v10; 
  unsigned int v11; 
  unsigned int v12; 

  if ( a6 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdMarketplaceEntitlement::`vbtable'{for `bdTaskResult'};
    *((_QWORD *)&this->__vftable + 3) = &bdMarketplaceEntitlement::`vbtable'{for `bdSerializable'};
    *(_QWORD *)&this->m_playerEntitlementLevels[1001] = &bdReferencable::`vftable';
    this->m_playerEntitlementLevels[1003] = 0;
  }
  bdTaskResult::bdTaskResult(this);
  bdSerializable::bdSerializable((bdSerializable *)(&this->__vftable + 2));
  this->__vftable = (bdMarketplaceEntitlement_vtbl *)&bdMarketplaceEntitlement::`vftable'{for `bdTaskResult'};
  *((_QWORD *)&this->__vftable + 2) = &bdMarketplaceEntitlement::`vftable'{for `bdSerializable'};
  *(bdMarketplaceEntitlement_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdMarketplaceEntitlement_vtbl *)&bdMarketplaceEntitlement::`vftable'{for `bdReferencable'};
  bdUserAccountID::bdUserAccountID((bdUserAccountID *)this->_bytes_20, playerId);
  this->m_numPlayerEntitlements = numPlayerEntitlements;
  memset_0(this->m_playerEntitlements, 0, sizeof(this->m_playerEntitlements));
  v10 = 1000;
  v11 = numPlayerEntitlements;
  if ( numPlayerEntitlements >= 0x3E8u )
    v11 = 1000;
  v12 = numPlayerEntitlements;
  if ( numPlayerEntitlements >= 0x3E8u )
    v12 = numPlayerEntitlements;
  memcpy_0(this->m_playerEntitlements, playerEntitlementIds, 4i64 * v11);
  memset_0(this->m_playerEntitlementLevels, 0, sizeof(this->m_playerEntitlementLevels));
  if ( numPlayerEntitlements < 0x3E8u )
    v10 = v12;
  memcpy_0(this->m_playerEntitlementLevels, playerEntitlementLevels, 4i64 * v10);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)playerId->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)playerId->gap38);
}

/*
==============
bdMarketplaceEntitlement::bdMarketplaceEntitlement
==============
*/
void bdMarketplaceEntitlement::bdMarketplaceEntitlement(bdMarketplaceEntitlement *this, const bdUserAccountID *playerId, const unsigned __int16 numPlayerEntitlements, const unsigned int *playerEntitlementIds, int a5)
{
  unsigned int v9; 

  if ( a5 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdMarketplaceEntitlement::`vbtable'{for `bdTaskResult'};
    *((_QWORD *)&this->__vftable + 3) = &bdMarketplaceEntitlement::`vbtable'{for `bdSerializable'};
    *(_QWORD *)&this->m_playerEntitlementLevels[1001] = &bdReferencable::`vftable';
    this->m_playerEntitlementLevels[1003] = 0;
  }
  bdTaskResult::bdTaskResult(this);
  bdSerializable::bdSerializable((bdSerializable *)(&this->__vftable + 2));
  this->__vftable = (bdMarketplaceEntitlement_vtbl *)&bdMarketplaceEntitlement::`vftable'{for `bdTaskResult'};
  *((_QWORD *)&this->__vftable + 2) = &bdMarketplaceEntitlement::`vftable'{for `bdSerializable'};
  *(bdMarketplaceEntitlement_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdMarketplaceEntitlement_vtbl *)&bdMarketplaceEntitlement::`vftable'{for `bdReferencable'};
  bdUserAccountID::bdUserAccountID((bdUserAccountID *)this->_bytes_20, playerId);
  this->m_numPlayerEntitlements = numPlayerEntitlements;
  memset_0(this->m_playerEntitlements, 0, sizeof(this->m_playerEntitlements));
  v9 = 1000;
  if ( numPlayerEntitlements < 0x3E8u )
    v9 = numPlayerEntitlements;
  memcpy_0(this->m_playerEntitlements, playerEntitlementIds, 4i64 * v9);
  memset_0(this->m_playerEntitlementLevels, 0, sizeof(this->m_playerEntitlementLevels));
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)playerId->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)playerId->gap38);
}

/*
==============
bdMarketplaceEntitlement::bdMarketplaceEntitlement
==============
*/
void bdMarketplaceEntitlement::bdMarketplaceEntitlement(bdMarketplaceEntitlement *this, int a2)
{
  unsigned __int64 userID[3]; 
  bdUserAccountID other; 

  userID[1] = -2i64;
  userID[2] = (unsigned __int64)this;
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdMarketplaceEntitlement::`vbtable'{for `bdTaskResult'};
    *((_QWORD *)&this->__vftable + 3) = &bdMarketplaceEntitlement::`vbtable'{for `bdSerializable'};
    *(_QWORD *)&this->m_playerEntitlementLevels[1001] = &bdReferencable::`vftable';
    this->m_playerEntitlementLevels[1003] = 0;
  }
  bdTaskResult::bdTaskResult(this);
  bdSerializable::bdSerializable((bdSerializable *)(&this->__vftable + 2));
  this->__vftable = (bdMarketplaceEntitlement_vtbl *)&bdMarketplaceEntitlement::`vftable'{for `bdTaskResult'};
  *((_QWORD *)&this->__vftable + 2) = &bdMarketplaceEntitlement::`vftable'{for `bdSerializable'};
  *(bdMarketplaceEntitlement_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdMarketplaceEntitlement_vtbl *)&bdMarketplaceEntitlement::`vftable'{for `bdReferencable'};
  bdUserAccountID::bdUserAccountID((bdUserAccountID *)this->_bytes_20);
  userID[0] = 0i64;
  bdUserAccountID::bdUserAccountID(&other, userID);
  bdUserAccountID::operator=((bdUserAccountID *)this->_bytes_20, &other);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)other.gap38);
  bdReferencable::~bdReferencable((bdReferencable *)other.gap38);
  this->m_numPlayerEntitlements = 0;
  memset_0(this->m_playerEntitlements, 0, 0x1F40ui64);
}

/*
==============
bdMarketplaceEntitlement::deserialize
==============
*/
__int64 bdMarketplaceEntitlement::deserialize(bdMarketplaceEntitlement *this, bdReference<bdByteBuffer> buffer)
{
  bool (__fastcall *deserialize)(bdMarketplaceEntitlement *, bdReference<bdByteBuffer>, const bdUserAccountID); 
  __int64 v5; 
  bdByteBuffer_vtbl *v6; 
  unsigned __int8 v7; 
  bdUserAccountID v9; 
  bdByteBuffer_vtbl *v10; 
  bdByteBuffer *m_ptr; 
  unsigned __int64 v12; 

  m_ptr = buffer.m_ptr;
  deserialize = this->deserialize;
  v12 = -1i64;
  bdUserAccountID::bdUserAccountID(&v9, &v12);
  v6 = buffer.m_ptr->__vftable;
  v10 = v6;
  if ( v6 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v6->allocateBuffer, 1u);
  v7 = ((__int64 (__fastcall *)(bdMarketplaceEntitlement *, bdByteBuffer_vtbl **, __int64))deserialize)(this, &v10, v5);
  if ( buffer.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->allocateBuffer, 0xFFFFFFFF) == 1 )
  {
    if ( buffer.m_ptr->__vftable )
      (*(void (__fastcall **)(bdByteBuffer_vtbl *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr->__vftable, 1i64);
    buffer.m_ptr->__vftable = NULL;
  }
  return v7;
}

/*
==============
bdMarketplaceEntitlement::deserialize
==============
*/
__int64 bdMarketplaceEntitlement::deserialize(bdMarketplaceEntitlement *this, bdReference<bdByteBuffer> buffer, const bdUserAccountID *playerId)
{
  bool v6; 
  bdByteBuffer *v7; 
  unsigned __int16 v8; 
  unsigned __int8 v9; 
  unsigned __int16 i; 
  __int64 v11; 
  bool v12; 
  __int64 v13; 
  unsigned int u; 
  bdReference<bdByteBuffer> buffera; 
  unsigned __int64 userID[4]; 
  bdUserAccountID other; 

  userID[1] = -2i64;
  userID[2] = (unsigned __int64)buffer.m_ptr;
  userID[3] = (unsigned __int64)playerId;
  userID[0] = -1i64;
  bdUserAccountID::bdUserAccountID(&other, userID);
  v6 = bdUserAccountID::operator==((bdUserAccountID *)playerId, &other);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)other.gap38);
  bdReferencable::~bdReferencable((bdReferencable *)other.gap38);
  if ( v6 )
  {
    v7 = (bdByteBuffer *)buffer.m_ptr->__vftable;
    buffera.m_ptr = v7;
    if ( v7 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v7->m_refCount, 1u);
    if ( !ContextSerialization::readUserID((bdReference<bdByteBuffer>)&buffera, (bdUserAccountID *)this->_bytes_20) )
    {
      v8 = 0;
      u = 0;
LABEL_6:
      v9 = 0;
      goto LABEL_7;
    }
  }
  else
  {
    bdUserAccountID::operator=((bdUserAccountID *)this->_bytes_20, playerId);
  }
  u = 0;
  v12 = !bdByteBuffer::readUInt32((bdByteBuffer *)buffer.m_ptr->__vftable, &u);
  v8 = u;
  if ( v12 )
    goto LABEL_6;
  v9 = 1;
LABEL_7:
  this->m_numPlayerEntitlements = v8;
  for ( i = 0; i < this->m_numPlayerEntitlements; ++i )
  {
    if ( !v9 )
      goto LABEL_20;
    v11 = i >= 0x3E7u ? 999i64 : i;
    if ( !bdByteBuffer::readUInt32((bdByteBuffer *)buffer.m_ptr->__vftable, &this->m_playerEntitlements[v11]) )
      goto LABEL_20;
    v13 = 999i64;
    if ( i < 0x3E7u )
      v13 = i;
    if ( bdByteBuffer::readUInt32((bdByteBuffer *)buffer.m_ptr->__vftable, &this->m_playerEntitlementLevels[v13]) )
      v9 = 1;
    else
LABEL_20:
      v9 = 0;
  }
  if ( buffer.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->allocateBuffer, 0xFFFFFFFF) == 1 )
  {
    if ( buffer.m_ptr->__vftable )
      (*(void (__fastcall **)(bdByteBuffer_vtbl *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr->__vftable, 1i64);
    buffer.m_ptr->__vftable = NULL;
  }
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)playerId->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)playerId->gap38);
  return v9;
}

/*
==============
bdMarketplaceEntitlement::reset
==============
*/
void bdMarketplaceEntitlement::reset(bdMarketplaceEntitlement *this)
{
  unsigned __int64 v2[2]; 
  bdUserAccountID other; 

  v2[1] = -2i64;
  v2[0] = 0i64;
  bdUserAccountID::bdUserAccountID(&other, v2);
  bdUserAccountID::operator=((bdUserAccountID *)this->_bytes_20, &other);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)other.gap38);
  bdReferencable::~bdReferencable((bdReferencable *)other.gap38);
  this->m_numPlayerEntitlements = 0;
  memset_0(this->m_playerEntitlements, 0, 0x1F40ui64);
}

/*
==============
bdMarketplaceEntitlement::serialize
==============
*/
_BOOL8 bdMarketplaceEntitlement::serialize(bdMarketplaceEntitlement *this, bdByteBuffer *buffer)
{
  bool v4; 
  unsigned __int16 v5; 
  unsigned __int16 v6; 
  unsigned int v7; 
  bool v8; 
  unsigned __int16 v9; 
  unsigned int v10; 
  bdReference<bdByteBuffer> buffera; 

  buffera.m_ptr = buffer;
  if ( buffer )
    _InterlockedExchangeAdd((volatile signed __int32 *)&buffer->m_refCount, 1u);
  v4 = ContextSerialization::writeUserID((bdReference<bdByteBuffer>)&buffera, (const bdUserAccountID *)(&this->__vftable + 2)) && bdByteBuffer::writeUInt32(buffer, *(unsigned __int16 *)&this->m_playerId[40]);
  v5 = 0;
  v6 = 0;
  while ( 1 )
  {
    v7 = 1000;
    if ( *(_WORD *)&this->m_playerId[40] < 0x3E8u )
      v7 = *(unsigned __int16 *)&this->m_playerId[40];
    if ( v6 >= v7 )
      break;
    if ( v4 && bdByteBuffer::writeUInt32(buffer, *(_DWORD *)&this->m_playerId[4 * v6 + 44]) )
    {
      v4 = 1;
      ++v6;
    }
    else
    {
      v4 = 0;
      ++v6;
    }
  }
  v8 = v4 && bdByteBuffer::writeUInt32(buffer, *(unsigned __int16 *)&this->m_playerId[40]);
  while ( 1 )
  {
    v9 = *(_WORD *)&this->m_playerId[40];
    v10 = v9;
    if ( v9 >= 0x3E8u )
      v10 = 1000;
    if ( v5 >= v10 )
      break;
    if ( v8 && bdByteBuffer::writeUInt32(buffer, this->m_playerEntitlements[v5 + 996]) )
    {
      v8 = 1;
      ++v5;
    }
    else
    {
      v8 = 0;
      ++v5;
    }
  }
  return v8;
}

/*
==============
bdMarketplaceEntitlement::serializedSizeOf
==============
*/
__int64 bdMarketplaceEntitlement::serializedSizeOf(bdMarketplaceEntitlement *this)
{
  unsigned __int16 v1; 
  int v2; 
  int v3; 

  v1 = *(_WORD *)&this->m_playerId[40];
  v2 = 1000;
  v3 = 1000;
  if ( v1 < 0x3E8u )
    v3 = *(unsigned __int16 *)&this->m_playerId[40];
  if ( v1 < 0x3E8u )
    v2 = *(unsigned __int16 *)&this->m_playerId[40];
  return 5 * (v2 + v3 + 1) + ContextSerialization::getUserIDSize((const bdUserAccountID *)(&this->__vftable + 2));
}

/*
==============
bdMarketplaceEntitlement::sizeOf
==============
*/
__int64 bdMarketplaceEntitlement::sizeOf(bdMarketplaceEntitlement *this)
{
  return 8128i64;
}

