/*
==============
bdMessage::bdMessage
==============
*/

void __fastcall bdMessage::bdMessage(bdMessage *this, const unsigned __int8 type, const bool typeChecked)
{
  ??0bdMessage@@QEAA@E_N@Z(this, type, typeChecked);
}

/*
==============
bdMessage::hasPayload
==============
*/

bool __fastcall bdMessage::hasPayload(bdMessage *this)
{
  return ?hasPayload@bdMessage@@QEBA_NXZ(this);
}

/*
==============
bdMessage::~bdMessage
==============
*/

void __fastcall bdMessage::~bdMessage(bdMessage *this)
{
  ??1bdMessage@@UEAA@XZ(this);
}

/*
==============
bdMessage::hasUnencryptedPayload
==============
*/

bool __fastcall bdMessage::hasUnencryptedPayload(bdMessage *this)
{
  return ?hasUnencryptedPayload@bdMessage@@QEBA_NXZ(this);
}

/*
==============
bdMessage::getUnencryptedPayload
==============
*/

bdReference<bdByteBuffer> *__fastcall bdMessage::getUnencryptedPayload(bdMessage *this, bdReference<bdByteBuffer> *result)
{
  return ?getUnencryptedPayload@bdMessage@@QEBA?AV?$bdReference@VbdByteBuffer@@@@XZ(this, result);
}

/*
==============
bdMessage::getPayload
==============
*/

bdReference<bdBitBuffer> *__fastcall bdMessage::getPayload(bdMessage *this, bdReference<bdBitBuffer> *result)
{
  return ?getPayload@bdMessage@@QEAA?AV?$bdReference@VbdBitBuffer@@@@XZ(this, result);
}

/*
==============
bdMessage::createUnencryptedPayload
==============
*/

void __fastcall bdMessage::createUnencryptedPayload(bdMessage *this, const unsigned int size)
{
  ?createUnencryptedPayload@bdMessage@@QEAAXI@Z(this, size);
}

/*
==============
bdMessage::bdMessage
==============
*/

void __fastcall bdMessage::bdMessage(bdMessage *this, const unsigned __int8 type, const unsigned __int8 *const payload, const unsigned int size, const bool hasTypeCheckedBit, const unsigned __int8 *const unencPayload, const unsigned int unencSize)
{
  ??0bdMessage@@QEAA@EQEBEI_N0I@Z(this, type, payload, size, hasTypeCheckedBit, unencPayload, unencSize);
}

/*
==============
bdMessage::getType
==============
*/

unsigned __int8 __fastcall bdMessage::getType(bdMessage *this)
{
  return ?getType@bdMessage@@QEBAEXZ(this);
}

/*
==============
bdMessage::bdMessage
==============
*/
void bdMessage::bdMessage(bdMessage *this, const unsigned __int8 type, const unsigned __int8 *const payload, const unsigned int size, const bool hasTypeCheckedBit, const unsigned __int8 *const unencPayload, const unsigned int unencSize)
{
  bdByteBuffer *v10; 
  bdBitBuffer *v11; 
  bdBitBuffer *v12; 
  bdByteBuffer *v13; 
  bdByteBuffer *v14; 

  v10 = NULL;
  this->m_refCount.m_value._My_val = 0;
  this->__vftable = (bdMessage_vtbl *)&bdMessage::`vftable';
  this->m_type = type;
  this->m_payload.m_ptr = NULL;
  this->m_payloadTypeChecked = 0;
  this->m_unencPayload.m_ptr = NULL;
  if ( payload && size )
  {
    v11 = (bdBitBuffer *)bdMemory::allocate(0x30ui64);
    if ( v11 )
      bdBitBuffer::bdBitBuffer(v11, payload, 8 * size, hasTypeCheckedBit);
    else
      v12 = NULL;
    bdReference<bdBitBuffer>::operator=(&this->m_payload, v12);
    this->m_payloadTypeChecked = bdBitBuffer::getTypeCheck(this->m_payload.m_ptr);
  }
  if ( unencPayload && unencSize )
  {
    v13 = (bdByteBuffer *)bdMemory::allocate(0x38ui64);
    if ( v13 )
    {
      bdByteBuffer::bdByteBuffer(v13, unencSize, 0);
      v10 = v14;
    }
    bdReference<bdByteBuffer>::operator=(&this->m_unencPayload, v10);
    bdByteBuffer::write(this->m_unencPayload.m_ptr, unencPayload, unencSize);
  }
}

/*
==============
bdMessage::bdMessage
==============
*/
void bdMessage::bdMessage(bdMessage *this, const unsigned __int8 type, const bool typeChecked)
{
  this->m_refCount.m_value._My_val = 0;
  this->__vftable = (bdMessage_vtbl *)&bdMessage::`vftable';
  this->m_type = type;
  this->m_payload.m_ptr = NULL;
  this->m_payloadTypeChecked = typeChecked;
  this->m_unencPayload.m_ptr = NULL;
}

/*
==============
bdMessage::~bdMessage
==============
*/
void bdMessage::~bdMessage(bdMessage *this)
{
  bdByteBuffer *m_ptr; 
  bdByteBuffer *v3; 
  bdBitBuffer *v4; 
  bdBitBuffer *v5; 

  this->__vftable = (bdMessage_vtbl *)&bdMessage::`vftable';
  m_ptr = this->m_unencPayload.m_ptr;
  if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
  {
    v3 = this->m_unencPayload.m_ptr;
    if ( v3 )
      ((void (__fastcall *)(bdByteBuffer *, __int64))v3->~bdReferencable)(v3, 1i64);
    this->m_unencPayload.m_ptr = NULL;
  }
  v4 = this->m_payload.m_ptr;
  if ( v4 && _InterlockedExchangeAdd((volatile signed __int32 *)&v4->m_refCount, 0xFFFFFFFF) == 1 )
  {
    v5 = this->m_payload.m_ptr;
    if ( v5 )
      ((void (__fastcall *)(bdBitBuffer *, __int64))v5->~bdReferencable)(v5, 1i64);
    this->m_payload.m_ptr = NULL;
  }
  bdReferencable::~bdReferencable(this);
}

/*
==============
bdMessage::createUnencryptedPayload
==============
*/
void bdMessage::createUnencryptedPayload(bdMessage *this, const unsigned int size)
{
  bdByteBuffer *v4; 
  bdByteBuffer *v5; 
  bdByteBuffer *m_ptr; 
  bdByteBuffer *v7; 

  v4 = (bdByteBuffer *)bdMemory::allocate(0x38ui64);
  v5 = v4;
  if ( v4 )
  {
    v4->m_refCount.m_value._My_val = 0;
    v4->__vftable = (bdByteBuffer_vtbl *)&bdByteBuffer::`vftable';
    v4->m_size = size;
    v4->m_data = NULL;
    *(_WORD *)&v4->m_typeChecked = 0;
    v4->m_allocatedData = 0;
    bdByteBuffer::init(v4, size);
  }
  else
  {
    v5 = NULL;
  }
  m_ptr = this->m_unencPayload.m_ptr;
  if ( m_ptr )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
    {
      v7 = this->m_unencPayload.m_ptr;
      if ( v7 )
        ((void (__fastcall *)(bdByteBuffer *, __int64))v7->~bdReferencable)(v7, 1i64);
    }
  }
  this->m_unencPayload.m_ptr = v5;
  if ( v5 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v5->m_refCount, 1u);
}

/*
==============
bdMessage::getPayload
==============
*/
bdReference<bdBitBuffer> *bdMessage::getPayload(bdMessage *this, bdReference<bdBitBuffer> *result)
{
  bdBitBuffer *m_ptr; 
  bdBitBuffer *v5; 
  bdBitBuffer *v6; 
  bdBitBuffer *v7; 
  bdBitBuffer *v8; 
  bdReference<bdBitBuffer> *v9; 

  m_ptr = this->m_payload.m_ptr;
  if ( !m_ptr )
  {
    v5 = (bdBitBuffer *)bdMemory::allocate(0x30ui64);
    if ( v5 )
    {
      bdBitBuffer::bdBitBuffer(v5, 0, this->m_payloadTypeChecked);
      m_ptr = v6;
    }
    else
    {
      m_ptr = NULL;
    }
    v7 = this->m_payload.m_ptr;
    if ( v7 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v7->m_refCount, 0xFFFFFFFF) == 1 )
      {
        v8 = this->m_payload.m_ptr;
        if ( v8 )
          ((void (__fastcall *)(bdBitBuffer *, __int64))v8->~bdReferencable)(v8, 1i64);
      }
    }
    this->m_payload.m_ptr = m_ptr;
    if ( m_ptr )
    {
      _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
      m_ptr = this->m_payload.m_ptr;
    }
  }
  result->m_ptr = m_ptr;
  v9 = result;
  if ( m_ptr )
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
  return v9;
}

/*
==============
bdMessage::getType
==============
*/
__int64 bdMessage::getType(bdMessage *this)
{
  return this->m_type;
}

/*
==============
bdMessage::getUnencryptedPayload
==============
*/
bdReference<bdByteBuffer> *bdMessage::getUnencryptedPayload(bdMessage *this, bdReference<bdByteBuffer> *result)
{
  bdByteBuffer *m_ptr; 

  m_ptr = this->m_unencPayload.m_ptr;
  result->m_ptr = m_ptr;
  if ( m_ptr )
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
  return result;
}

/*
==============
bdMessage::hasPayload
==============
*/
bool bdMessage::hasPayload(bdMessage *this)
{
  return this->m_payload.m_ptr != NULL;
}

/*
==============
bdMessage::hasUnencryptedPayload
==============
*/
bool bdMessage::hasUnencryptedPayload(bdMessage *this)
{
  return this->m_unencPayload.m_ptr != NULL;
}

