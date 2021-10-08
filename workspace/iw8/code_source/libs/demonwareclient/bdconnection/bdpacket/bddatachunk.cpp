/*
==============
bdDataChunk::serializeUnencrypted
==============
*/

unsigned int __fastcall bdDataChunk::serializeUnencrypted(bdDataChunk *this, unsigned __int8 *data, const unsigned int size)
{
  return ?serializeUnencrypted@bdDataChunk@@IEBAIPEAEI@Z(this, data, size);
}

/*
==============
bdDataChunk::setSequenceNumber
==============
*/

void __fastcall bdDataChunk::setSequenceNumber(bdDataChunk *this, unsigned __int16 seqNum)
{
  ?setSequenceNumber@bdDataChunk@@QEAAXG@Z(this, seqNum);
}

/*
==============
bdDataChunk::getMessage
==============
*/

bdReference<bdMessage> *__fastcall bdDataChunk::getMessage(bdDataChunk *this, bdReference<bdMessage> *result)
{
  return ?getMessage@bdDataChunk@@QEBA?AV?$bdReference@VbdMessage@@@@XZ(this, result);
}

/*
==============
bdDataChunk::deserialize
==============
*/

bool __fastcall bdDataChunk::deserialize(bdDataChunk *this, const unsigned __int8 *const data, const unsigned int size, unsigned int *offset)
{
  return ?deserialize@bdDataChunk@@MEAA_NQEBEIAEAI@Z(this, data, size, offset);
}

/*
==============
bdDataChunk::getSerializedSize
==============
*/

unsigned int __fastcall bdDataChunk::getSerializedSize(bdDataChunk *this)
{
  return ?getSerializedSize@bdDataChunk@@UEBAIXZ(this);
}

/*
==============
bdDataChunk::deserialize
==============
*/

bool __fastcall bdDataChunk::deserialize(bdDataChunk *this, const unsigned __int8 *const data, const unsigned int size, unsigned int *offset, const unsigned __int8 *const unencData, const unsigned int unencSize, unsigned int *unencOffset)
{
  return ?deserialize@bdDataChunk@@IEAA_NQEBEIAEAI0I1@Z(this, data, size, offset, unencData, unencSize, unencOffset);
}

/*
==============
bdDataChunk::getSequenceNumber
==============
*/

unsigned __int16 __fastcall bdDataChunk::getSequenceNumber(bdDataChunk *this)
{
  return ?getSequenceNumber@bdDataChunk@@QEBAGXZ(this);
}

/*
==============
bdDataChunk::bdDataChunk
==============
*/

void __fastcall bdDataChunk::bdDataChunk(bdDataChunk *this, bdReference<bdMessage> data, const bdDataChunk::bdDataFlags flags)
{
  ??0bdDataChunk@@QEAA@V?$bdReference@VbdMessage@@@@W4bdDataFlags@0@@Z(this, data, flags);
}

/*
==============
bdDataChunk::bdDataChunk
==============
*/

void __fastcall bdDataChunk::bdDataChunk(bdDataChunk *this)
{
  ??0bdDataChunk@@QEAA@XZ(this);
}

/*
==============
bdDataChunk::serialize
==============
*/

unsigned int __fastcall bdDataChunk::serialize(bdDataChunk *this, unsigned __int8 *data, const unsigned int size)
{
  return ?serialize@bdDataChunk@@MEBAIPEAEI@Z(this, data, size);
}

/*
==============
bdDataChunk::getFlags
==============
*/

unsigned __int8 __fastcall bdDataChunk::getFlags(bdDataChunk *this)
{
  return ?getFlags@bdDataChunk@@QEBAEXZ(this);
}

/*
==============
bdDataChunk::~bdDataChunk
==============
*/

void __fastcall bdDataChunk::~bdDataChunk(bdDataChunk *this)
{
  ??1bdDataChunk@@UEAA@XZ(this);
}

/*
==============
bdDataChunk::bdDataChunk
==============
*/
void bdDataChunk::bdDataChunk(bdDataChunk *this, bdReference<bdMessage> data, const bdDataChunk::bdDataFlags flags)
{
  unsigned __int8 v3; 
  char v6; 
  bdMessage_vtbl *v7; 
  bdMessage *m_ptr; 
  unsigned int m_maxWritePosition; 
  unsigned int v10; 
  char v11; 
  bdReference<bdByteBuffer> *UnencryptedPayload; 
  bool v13; 
  bdReference<bdByteBuffer> v14; 
  __int64 v15; 
  bdReference<bdBitBuffer> result; 

  v15 = -2i64;
  v3 = flags;
  v6 = 0;
  bdChunk::bdChunk(this, BD_CT_DATA);
  this->__vftable = (bdDataChunk_vtbl *)&bdDataChunk::`vftable';
  v7 = data.m_ptr->__vftable;
  this->m_message.m_ptr = (bdMessage *)data.m_ptr->__vftable;
  if ( v7 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v7[1], 1u);
  this->m_flags = v3;
  this->m_seqNum = 0;
  m_ptr = this->m_message.m_ptr;
  if ( m_ptr )
  {
    if ( !bdMessage::hasPayload(m_ptr) )
      goto LABEL_9;
    v6 = 1;
    m_maxWritePosition = bdMessage::getPayload(this->m_message.m_ptr, &result)->m_ptr->m_maxWritePosition;
    v10 = m_maxWritePosition - 1;
    if ( !m_maxWritePosition )
      v10 = 0;
    if ( v10 )
      v11 = 1;
    else
LABEL_9:
      v11 = 0;
    if ( (v6 & 1) != 0 )
    {
      v6 &= ~1u;
      if ( result.m_ptr )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result.m_ptr )
          ((void (__fastcall *)(bdBitBuffer *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
      }
    }
    if ( v11 )
      this->m_flags |= 2u;
    v13 = 0;
    if ( bdMessage::hasUnencryptedPayload(this->m_message.m_ptr) )
    {
      UnencryptedPayload = bdMessage::getUnencryptedPayload(this->m_message.m_ptr, &v14);
      v6 |= 2u;
      if ( UnencryptedPayload->m_ptr->m_size + LODWORD(UnencryptedPayload->m_ptr->m_data) - LODWORD(UnencryptedPayload->m_ptr->m_readPtr) )
        v13 = 1;
    }
    if ( (v6 & 2) != 0 && v14.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v14.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v14.m_ptr )
      ((void (__fastcall *)(bdByteBuffer *, __int64))v14.m_ptr->~bdReferencable)(v14.m_ptr, 1i64);
    if ( v13 )
      this->m_flags |= 4u;
  }
  if ( data.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&data.m_ptr->__vftable[1], 0xFFFFFFFF) == 1 )
  {
    if ( data.m_ptr->__vftable )
      (*(void (__fastcall **)(bdMessage_vtbl *, __int64))data.m_ptr->~bdReferencable)(data.m_ptr->__vftable, 1i64);
    data.m_ptr->__vftable = NULL;
  }
}

/*
==============
bdDataChunk::bdDataChunk
==============
*/
void bdDataChunk::bdDataChunk(bdDataChunk *this)
{
  bdChunk::bdChunk(this, BD_CT_DATA);
  this->__vftable = (bdDataChunk_vtbl *)&bdDataChunk::`vftable';
  this->m_message.m_ptr = NULL;
  this->m_flags = 0;
  this->m_seqNum = 0;
}

/*
==============
bdDataChunk::~bdDataChunk
==============
*/
void bdDataChunk::~bdDataChunk(bdDataChunk *this)
{
  bdMessage *m_ptr; 
  bdMessage *v3; 

  this->__vftable = (bdDataChunk_vtbl *)&bdDataChunk::`vftable';
  m_ptr = this->m_message.m_ptr;
  if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
  {
    v3 = this->m_message.m_ptr;
    if ( v3 )
      ((void (__fastcall *)(bdMessage *, __int64))v3->~bdReferencable)(v3, 1i64);
    this->m_message.m_ptr = NULL;
  }
  bdChunk::~bdChunk(this);
}

/*
==============
bdDataChunk::deserialize
==============
*/
bool bdDataChunk::deserialize(bdDataChunk *this, const unsigned __int8 *const data, const unsigned int size, unsigned int *offset, const unsigned __int8 *const unencData, const unsigned int unencSize, unsigned int *unencOffset)
{
  __int64 v10; 
  unsigned int v11; 
  bdMessage *v12; 
  unsigned __int16 v13; 
  __int64 v14; 
  unsigned int v15; 
  bool result; 
  unsigned __int8 v17; 
  unsigned int v18; 
  bdMessage *v19; 
  bdMessage *v20; 
  bdMessage *m_ptr; 
  bdMessage *v22; 
  bool v23; 
  __int64 v24; 
  unsigned __int16 value; 
  unsigned __int16 v26[4]; 
  unsigned int offseta; 
  unsigned int v28; 
  __int64 v29; 
  unsigned __int8 v30; 

  v29 = -2i64;
  offseta = *offset;
  v28 = *unencOffset;
  if ( !bdChunk::deserialize(this, data, size, &offseta) || !bdBytePacker::removeBasicType<unsigned char>(data, size, offseta, &offseta, &this->m_flags) )
  {
    v17 = 0;
    v12 = NULL;
    v13 = 0;
LABEL_19:
    result = 0;
    goto LABEL_20;
  }
  v30 = 0;
  v10 = offseta;
  v11 = ++offseta;
  if ( data )
  {
    if ( v11 > size )
      bdLogMessage(BD_LOG_WARNING, "warn/", "byte packer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::removeBasicType", 0xA2u, "Not enough data left to read %u bytes.", 1i64);
    else
      v30 = data[v10];
  }
  if ( v11 > size && data )
  {
    v17 = v30;
    v12 = NULL;
    v13 = 0;
    goto LABEL_19;
  }
  v12 = NULL;
  v13 = 0;
  v14 = offseta;
  v15 = offseta + 2;
  offseta += 2;
  if ( data )
  {
    if ( v15 > size )
    {
      bdLogMessage(BD_LOG_WARNING, "warn/", "byte packer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::removeBasicType", 0xA2u, "Not enough data left to read %u bytes.", 2i64);
    }
    else
    {
      v13 = *(_WORD *)&data[v14];
      v26[2] = v13;
    }
  }
  if ( v15 > size && data )
  {
    v17 = v30;
    goto LABEL_19;
  }
  result = 1;
  v17 = v30;
LABEL_20:
  this->m_seqNum = v13;
  value = 0;
  if ( (this->m_flags & 2) != 0 )
  {
    result = result && bdBytePacker::removeEncodedUInt16(data, size, offseta, &offseta, &value);
    if ( value > size - offseta )
    {
      LODWORD(v24) = value;
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdDataChunk", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdpacket\\bddatachunk.cpp", "bdDataChunk::deserialize", 0xDBu, "Received a malformed packet!  Data chunk claims to have size [%u] bytes, but there are only [%u] bytes of data remaining in the buffer!", v24, size - offseta);
      return 0;
    }
  }
  v26[0] = 0;
  if ( (this->m_flags & 4) != 0 )
  {
    result = result && bdBytePacker::removeEncodedUInt16(data, size, offseta, &offseta, v26);
    v18 = v28;
    if ( v26[0] > unencSize - v28 )
    {
      LODWORD(v24) = v26[0];
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdDataChunk", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdpacket\\bddatachunk.cpp", "bdDataChunk::deserialize", 0xE9u, "Received a malformed packet!  Data chunk claims to have unencrypted payload of [%u] bytes, but there are only [%u] bytes of data remaining in the buffer!", v24, unencSize - v28);
      return 0;
    }
  }
  else
  {
    v18 = v28;
  }
  if ( result )
  {
    v19 = (bdMessage *)bdMemory::allocate(0x30ui64);
    if ( v19 )
    {
      bdMessage::bdMessage(v19, v17, &data[offseta], value, 1, &unencData[v18], v26[0]);
      v12 = v20;
    }
    m_ptr = this->m_message.m_ptr;
    if ( m_ptr )
    {
      if ( !_InterlockedDecrement((volatile signed __int32 *)&m_ptr->m_refCount) )
      {
        v22 = this->m_message.m_ptr;
        if ( v22 )
          ((void (__fastcall *)(bdMessage *, __int64))v22->~bdReferencable)(v22, 1i64);
      }
    }
    this->m_message.m_ptr = v12;
    v23 = v12 == NULL;
    if ( v12 )
    {
      _InterlockedExchangeAdd((volatile signed __int32 *)&v12->m_refCount, 1u);
      v23 = this->m_message.m_ptr == NULL;
    }
    result = !v23;
    *offset = offseta + value;
    *unencOffset = v18 + v26[0];
  }
  return result;
}

/*
==============
bdDataChunk::deserialize
==============
*/
bool bdDataChunk::deserialize(bdDataChunk *this, const unsigned __int8 *const data, const unsigned int size, unsigned int *offset)
{
  unsigned int unencOffset[6]; 

  unencOffset[0] = 0;
  return bdDataChunk::deserialize(this, data, size, offset, NULL, 0, unencOffset);
}

/*
==============
bdDataChunk::getFlags
==============
*/
__int64 bdDataChunk::getFlags(bdDataChunk *this)
{
  return this->m_flags;
}

/*
==============
bdDataChunk::getMessage
==============
*/
bdReference<bdMessage> *bdDataChunk::getMessage(bdDataChunk *this, bdReference<bdMessage> *result)
{
  bdMessage *m_ptr; 

  m_ptr = this->m_message.m_ptr;
  result->m_ptr = m_ptr;
  if ( m_ptr )
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
  return result;
}

/*
==============
bdDataChunk::getSequenceNumber
==============
*/
__int64 bdDataChunk::getSequenceNumber(bdDataChunk *this)
{
  return this->m_seqNum;
}

/*
==============
bdDataChunk::getSerializedSize
==============
*/
__int64 bdDataChunk::getSerializedSize(bdDataChunk *this)
{
  unsigned int v2; 
  unsigned int v3; 
  bool hasUnencryptedPayload; 
  bdByteBuffer *m_ptr; 
  unsigned __int8 *m_data; 
  unsigned int DataSize; 
  unsigned int newOffset; 
  bdReference<bdByteBuffer> result; 

  v2 = this->serialize(this, NULL, 0);
  v3 = 0;
  if ( (this->m_flags & 4) != 0 )
  {
    hasUnencryptedPayload = bdMessage::hasUnencryptedPayload(this->m_message.m_ptr);
    bdHandleAssert(hasUnencryptedPayload, "m_message->hasUnencryptedPayload()", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdpacket\\bddatachunk.cpp", "bdDataChunk::serializeUnencrypted", 0x4Eu, "BD_DC_UNENC_DATA flag set but no unencrypted payload.");
    bdMessage::getUnencryptedPayload(this->m_message.m_ptr, &result);
    m_ptr = result.m_ptr;
    if ( result.m_ptr )
    {
      m_data = result.m_ptr->m_data;
      DataSize = bdByteBuffer::getDataSize(result.m_ptr);
      newOffset = 0;
      if ( bdBytePacker::appendBuffer(NULL, 0, 0, &newOffset, m_data, DataSize) )
        v3 = newOffset;
      m_ptr = result.m_ptr;
    }
    if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result.m_ptr )
      ((void (__fastcall *)(bdByteBuffer *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
  }
  return v3 + v2;
}

/*
==============
bdDataChunk::serialize
==============
*/
__int64 bdDataChunk::serialize(bdDataChunk *this, unsigned __int8 *data, const unsigned int size)
{
  __int64 v6; 
  bool v7; 
  unsigned int v8; 
  unsigned int v9; 
  bool v10; 
  char v11; 
  unsigned __int8 Type; 
  __int64 v13; 
  unsigned int v14; 
  bool v15; 
  char v16; 
  unsigned __int16 m_seqNum; 
  __int64 v18; 
  unsigned int v19; 
  bool v20; 
  unsigned __int16 m_size; 
  bool hasPayload; 
  bdBitBuffer *m_ptr; 
  unsigned int m_maxWritePosition; 
  bool v25; 
  bool hasUnencryptedPayload; 
  unsigned __int16 DataSize; 
  bdByteBuffer *v28; 
  unsigned __int8 *m_data; 
  unsigned int offset; 
  bdReference<bdByteBuffer> v32; 
  bdReference<bdBitBuffer> result; 
  bdReference<bdBitBuffer> v34; 
  __int64 v35; 

  v35 = -2i64;
  v6 = bdChunk::serialize(this, data, size);
  v7 = 1;
  v8 = 0;
  if ( !this->m_message.m_ptr )
    goto LABEL_73;
  v9 = v6 + 1;
  offset = v6 + 1;
  v10 = (int)v6 + 1 <= size || !data;
  bdHandleAssert(v10, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 1i64);
  if ( !data )
  {
LABEL_9:
    if ( v9 <= size )
      goto LABEL_12;
    goto LABEL_10;
  }
  if ( v9 <= size )
  {
    data[v6] = this->m_flags;
    goto LABEL_9;
  }
LABEL_10:
  if ( data )
  {
    v11 = 0;
    goto LABEL_13;
  }
LABEL_12:
  v11 = 1;
LABEL_13:
  Type = bdMessage::getType(this->m_message.m_ptr);
  if ( !v11 )
    goto LABEL_24;
  v13 = offset;
  v14 = offset + 1;
  offset = v14;
  v15 = v14 <= size || !data;
  bdHandleAssert(v15, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 1i64);
  if ( !data )
    goto LABEL_21;
  if ( v14 <= size )
  {
    data[v13] = Type;
LABEL_21:
    if ( v14 <= size )
    {
LABEL_23:
      v16 = 1;
      goto LABEL_25;
    }
  }
  if ( !data )
    goto LABEL_23;
LABEL_24:
  v16 = 0;
LABEL_25:
  m_seqNum = this->m_seqNum;
  if ( !v16 )
    goto LABEL_36;
  v18 = offset;
  v19 = offset + 2;
  offset = v19;
  v20 = v19 <= size || !data;
  bdHandleAssert(v20, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 2i64);
  if ( data )
  {
    if ( v19 > size )
      goto LABEL_34;
    *(_WORD *)&data[v18] = m_seqNum;
  }
  if ( v19 > size )
  {
LABEL_34:
    if ( !data )
      goto LABEL_35;
LABEL_36:
    v7 = 0;
    goto LABEL_37;
  }
LABEL_35:
  v7 = 1;
LABEL_37:
  m_size = 0;
  if ( (this->m_flags & 2) != 0 )
  {
    hasPayload = bdMessage::hasPayload(this->m_message.m_ptr);
    bdHandleAssert(hasPayload, "m_message->hasPayload()", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdpacket\\bddatachunk.cpp", "bdDataChunk::serialize", 0x85u, "BD_DC_ENC_DATA flag set but no payload.");
    bdMessage::getPayload(this->m_message.m_ptr, &result);
    m_ptr = result.m_ptr;
    if ( result.m_ptr )
    {
      m_maxWritePosition = result.m_ptr->m_maxWritePosition;
      m_size = m_maxWritePosition - 1;
      if ( !m_maxWritePosition )
        m_size = 0;
      if ( m_size )
        m_size = result.m_ptr->m_data.m_size;
    }
    v7 = v7 && (v25 = !bdBytePacker::appendEncodedUInt16(data, size, offset, &offset, m_size), m_ptr = result.m_ptr, !v25);
    if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result.m_ptr )
      ((void (__fastcall *)(bdBitBuffer *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
  }
  if ( (this->m_flags & 4) != 0 )
  {
    hasUnencryptedPayload = bdMessage::hasUnencryptedPayload(this->m_message.m_ptr);
    bdHandleAssert(hasUnencryptedPayload, "m_message->hasUnencryptedPayload()", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdpacket\\bddatachunk.cpp", "bdDataChunk::serialize", 0x97u, "BD_DC_UNENC_DATA flag set but no unencrypted payload.");
    bdMessage::getUnencryptedPayload(this->m_message.m_ptr, &v32);
    DataSize = 0;
    v28 = v32.m_ptr;
    if ( v32.m_ptr )
    {
      DataSize = bdByteBuffer::getDataSize(v32.m_ptr);
      v28 = v32.m_ptr;
    }
    v7 = v7 && (v25 = !bdBytePacker::appendEncodedUInt16(data, size, offset, &offset, DataSize), v28 = v32.m_ptr, !v25);
    if ( v28 && _InterlockedExchangeAdd((volatile signed __int32 *)&v28->m_refCount, 0xFFFFFFFF) == 1 && v32.m_ptr )
      ((void (__fastcall *)(bdByteBuffer *, __int64))v32.m_ptr->~bdReferencable)(v32.m_ptr, 1i64);
  }
  if ( m_size )
  {
    m_data = bdMessage::getPayload(this->m_message.m_ptr, &v34)->m_ptr->m_data.m_data;
    if ( v34.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v34.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
    {
      if ( v34.m_ptr )
        ((void (__fastcall *)(bdBitBuffer *, __int64))v34.m_ptr->~bdReferencable)(v34.m_ptr, 1i64);
      v34.m_ptr = NULL;
    }
    v7 = v7 && bdBytePacker::appendBuffer(data, size, offset, &offset, m_data, m_size);
  }
  LODWORD(v6) = offset;
LABEL_73:
  if ( v7 )
    return (unsigned int)v6;
  return v8;
}

/*
==============
bdDataChunk::serializeUnencrypted
==============
*/
__int64 bdDataChunk::serializeUnencrypted(bdDataChunk *this, unsigned __int8 *data, const unsigned int size)
{
  unsigned int v6; 
  bool hasUnencryptedPayload; 
  bdByteBuffer *m_ptr; 
  unsigned __int8 *m_data; 
  unsigned int DataSize; 
  unsigned int newOffset; 
  bdReference<bdByteBuffer> result; 

  v6 = 0;
  if ( (this->m_flags & 4) != 0 )
  {
    hasUnencryptedPayload = bdMessage::hasUnencryptedPayload(this->m_message.m_ptr);
    bdHandleAssert(hasUnencryptedPayload, "m_message->hasUnencryptedPayload()", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdpacket\\bddatachunk.cpp", "bdDataChunk::serializeUnencrypted", 0x4Eu, "BD_DC_UNENC_DATA flag set but no unencrypted payload.", -2i64);
    bdMessage::getUnencryptedPayload(this->m_message.m_ptr, &result);
    m_ptr = result.m_ptr;
    if ( result.m_ptr )
    {
      m_data = result.m_ptr->m_data;
      DataSize = bdByteBuffer::getDataSize(result.m_ptr);
      newOffset = 0;
      if ( bdBytePacker::appendBuffer(data, size, 0, &newOffset, m_data, DataSize) )
        v6 = newOffset;
      m_ptr = result.m_ptr;
    }
    if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result.m_ptr )
      ((void (__fastcall *)(bdByteBuffer *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
  }
  return v6;
}

/*
==============
bdDataChunk::setSequenceNumber
==============
*/
void bdDataChunk::setSequenceNumber(bdDataChunk *this, unsigned __int16 seqNum)
{
  this->m_seqNum = seqNum;
}

