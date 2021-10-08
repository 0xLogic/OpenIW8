/*
==============
bdMarketplacePlayerCurrency::bdMarketplacePlayerCurrency
==============
*/

void __fastcall bdMarketplacePlayerCurrency::bdMarketplacePlayerCurrency(bdMarketplacePlayerCurrency *this, const bdUserAccountID *playerId, const unsigned __int8 currencyId, const unsigned int value)
{
  ??0bdMarketplacePlayerCurrency@@QEAA@VbdUserAccountID@@EI@Z(this, playerId, currencyId, value);
}

/*
==============
bdMarketplacePlayerCurrency::deserialize
==============
*/

bool __fastcall bdMarketplacePlayerCurrency::deserialize(bdMarketplacePlayerCurrency *this, bdReference<bdByteBuffer> buffer)
{
  return ?deserialize@bdMarketplacePlayerCurrency@@UEAA_NV?$bdReference@VbdByteBuffer@@@@@Z(this, buffer);
}

/*
==============
bdMarketplacePlayerCurrency::serializedSizeOf
==============
*/

int __fastcall bdMarketplacePlayerCurrency::serializedSizeOf(bdMarketplacePlayerCurrency *this)
{
  return ?serializedSizeOf@bdMarketplacePlayerCurrency@@UEBAHXZ(this);
}

/*
==============
bdMarketplacePlayerCurrency::serialize
==============
*/

bool __fastcall bdMarketplacePlayerCurrency::serialize(bdMarketplacePlayerCurrency *this, bdByteBuffer *buffer)
{
  return ?serialize@bdMarketplacePlayerCurrency@@UEBA_NAEAVbdByteBuffer@@@Z(this, buffer);
}

/*
==============
bdMarketplacePlayerCurrency::bdMarketplacePlayerCurrency
==============
*/

void __fastcall bdMarketplacePlayerCurrency::bdMarketplacePlayerCurrency(bdMarketplacePlayerCurrency *this)
{
  ??0bdMarketplacePlayerCurrency@@QEAA@XZ(this);
}

/*
==============
bdMarketplacePlayerCurrency::sizeOf
==============
*/

unsigned int __fastcall bdMarketplacePlayerCurrency::sizeOf(bdMarketplacePlayerCurrency *this)
{
  return ?sizeOf@bdMarketplacePlayerCurrency@@UEAAIXZ(this);
}

/*
==============
bdMarketplacePlayerCurrency::deserialize
==============
*/

bool __fastcall bdMarketplacePlayerCurrency::deserialize(bdMarketplacePlayerCurrency *this, bdReference<bdByteBuffer> buffer, const bdUserAccountID *playerId)
{
  return ?deserialize@bdMarketplacePlayerCurrency@@UEAA_NV?$bdReference@VbdByteBuffer@@@@VbdUserAccountID@@@Z(this, buffer, playerId);
}

/*
==============
bdMarketplacePlayerCurrency::reset
==============
*/

void __fastcall bdMarketplacePlayerCurrency::reset(bdMarketplacePlayerCurrency *this)
{
  ?reset@bdMarketplacePlayerCurrency@@QEAAXXZ(this);
}

/*
==============
bdMarketplacePlayerCurrency::bdMarketplacePlayerCurrency
==============
*/
void bdMarketplacePlayerCurrency::bdMarketplacePlayerCurrency(bdMarketplacePlayerCurrency *this, const bdUserAccountID *playerId, const unsigned __int8 currencyId, const unsigned int value, int a5)
{
  if ( a5 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdMarketplacePlayerCurrency::`vbtable'{for `bdTaskResult'};
    *((_QWORD *)&this->__vftable + 3) = &bdMarketplacePlayerCurrency::`vbtable'{for `bdSerializable'};
    *(_QWORD *)(&this->m_value + 1) = &bdReferencable::`vftable';
    *(&this->m_value + 3) = 0;
  }
  bdTaskResult::bdTaskResult(this);
  bdSerializable::bdSerializable((bdSerializable *)(&this->__vftable + 2));
  this->__vftable = (bdMarketplacePlayerCurrency_vtbl *)&bdMarketplacePlayerCurrency::`vftable'{for `bdTaskResult'};
  *((_QWORD *)&this->__vftable + 2) = &bdMarketplacePlayerCurrency::`vftable'{for `bdSerializable'};
  *(bdMarketplacePlayerCurrency_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdMarketplacePlayerCurrency_vtbl *)&bdMarketplacePlayerCurrency::`vftable'{for `bdReferencable'};
  bdUserAccountID::bdUserAccountID((bdUserAccountID *)this->_bytes_20, playerId);
  this->m_currencyId = currencyId;
  this->m_value = value;
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)playerId->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)playerId->gap38);
}

/*
==============
bdMarketplacePlayerCurrency::bdMarketplacePlayerCurrency
==============
*/
void bdMarketplacePlayerCurrency::bdMarketplacePlayerCurrency(bdMarketplacePlayerCurrency *this, int a2)
{
  unsigned __int64 userID[3]; 
  bdUserAccountID other; 

  userID[1] = -2i64;
  userID[2] = (unsigned __int64)this;
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdMarketplacePlayerCurrency::`vbtable'{for `bdTaskResult'};
    *((_QWORD *)&this->__vftable + 3) = &bdMarketplacePlayerCurrency::`vbtable'{for `bdSerializable'};
    *(_QWORD *)(&this->m_value + 1) = &bdReferencable::`vftable';
    *(&this->m_value + 3) = 0;
  }
  bdTaskResult::bdTaskResult(this);
  bdSerializable::bdSerializable((bdSerializable *)(&this->__vftable + 2));
  this->__vftable = (bdMarketplacePlayerCurrency_vtbl *)&bdMarketplacePlayerCurrency::`vftable'{for `bdTaskResult'};
  *((_QWORD *)&this->__vftable + 2) = &bdMarketplacePlayerCurrency::`vftable'{for `bdSerializable'};
  *(bdMarketplacePlayerCurrency_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdMarketplacePlayerCurrency_vtbl *)&bdMarketplacePlayerCurrency::`vftable'{for `bdReferencable'};
  bdUserAccountID::bdUserAccountID((bdUserAccountID *)this->_bytes_20);
  userID[0] = -1i64;
  bdUserAccountID::bdUserAccountID(&other, userID);
  bdUserAccountID::operator=((bdUserAccountID *)this->_bytes_20, &other);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)other.gap38);
  bdReferencable::~bdReferencable((bdReferencable *)other.gap38);
  this->m_currencyId = 0;
  this->m_value = 0;
}

/*
==============
bdMarketplacePlayerCurrency::deserialize
==============
*/
__int64 bdMarketplacePlayerCurrency::deserialize(bdMarketplacePlayerCurrency *this, bdReference<bdByteBuffer> buffer)
{
  bool (__fastcall *deserialize)(bdMarketplacePlayerCurrency *, bdReference<bdByteBuffer>, const bdUserAccountID); 
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
  v7 = ((__int64 (__fastcall *)(bdMarketplacePlayerCurrency *, bdByteBuffer_vtbl **, __int64))deserialize)(this, &v10, v5);
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
bdMarketplacePlayerCurrency::deserialize
==============
*/
__int64 bdMarketplacePlayerCurrency::deserialize(bdMarketplacePlayerCurrency *this, bdReference<bdByteBuffer> buffer, const bdUserAccountID *playerId)
{
  bool v6; 
  bdByteBuffer *v7; 
  unsigned __int8 v8; 
  bdReference<bdByteBuffer> buffera; 
  unsigned __int64 userID[5]; 
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
      goto LABEL_5;
  }
  else
  {
    bdUserAccountID::operator=((bdUserAccountID *)this->_bytes_20, playerId);
  }
  if ( bdByteBuffer::readUByte8((bdByteBuffer *)buffer.m_ptr->__vftable, &this->m_currencyId) && bdByteBuffer::readUInt32((bdByteBuffer *)buffer.m_ptr->__vftable, &this->m_value) )
  {
    v8 = 1;
    goto LABEL_6;
  }
LABEL_5:
  v8 = 0;
LABEL_6:
  if ( buffer.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->allocateBuffer, 0xFFFFFFFF) == 1 )
  {
    if ( buffer.m_ptr->__vftable )
      (*(void (__fastcall **)(bdByteBuffer_vtbl *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr->__vftable, 1i64);
    buffer.m_ptr->__vftable = NULL;
  }
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)playerId->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)playerId->gap38);
  return v8;
}

/*
==============
bdMarketplacePlayerCurrency::reset
==============
*/
void bdMarketplacePlayerCurrency::reset(bdMarketplacePlayerCurrency *this)
{
  unsigned __int64 userID[2]; 
  bdUserAccountID other; 

  userID[1] = -2i64;
  userID[0] = -1i64;
  bdUserAccountID::bdUserAccountID(&other, userID);
  bdUserAccountID::operator=((bdUserAccountID *)this->_bytes_20, &other);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)other.gap38);
  bdReferencable::~bdReferencable((bdReferencable *)other.gap38);
  this->m_currencyId = 0;
  this->m_value = 0;
}

/*
==============
bdMarketplacePlayerCurrency::serialize
==============
*/
bool bdMarketplacePlayerCurrency::serialize(bdMarketplacePlayerCurrency *this, bdByteBuffer *buffer)
{
  bdReference<bdByteBuffer> buffera; 

  buffera.m_ptr = buffer;
  if ( buffer )
    _InterlockedExchangeAdd((volatile signed __int32 *)&buffer->m_refCount, 1u);
  return ContextSerialization::writeUserID((bdReference<bdByteBuffer>)&buffera, (const bdUserAccountID *)(&this->__vftable + 2)) && bdByteBuffer::writeUByte8(buffer, this->m_playerId[40]) && bdByteBuffer::writeUInt32(buffer, *(_DWORD *)&this->m_playerId[44]);
}

/*
==============
bdMarketplacePlayerCurrency::serializedSizeOf
==============
*/
__int64 bdMarketplacePlayerCurrency::serializedSizeOf(bdMarketplacePlayerCurrency *this)
{
  return ContextSerialization::getUserIDSize((const bdUserAccountID *)(&this->__vftable + 2)) + 7;
}

/*
==============
bdMarketplacePlayerCurrency::sizeOf
==============
*/
__int64 bdMarketplacePlayerCurrency::sizeOf(bdMarketplacePlayerCurrency *this)
{
  return 128i64;
}

