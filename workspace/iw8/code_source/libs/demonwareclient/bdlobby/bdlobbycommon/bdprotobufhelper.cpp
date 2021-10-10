/*
==============
bdProtobufHelper::skipBytes
==============
*/

bool __fastcall bdProtobufHelper::skipBytes(bdStructSerializationInputStream *stream, unsigned __int64 byteCount)
{
  return ?skipBytes@bdProtobufHelper@@SA_NAEAVbdStructSerializationInputStream@@_K@Z(stream, byteCount);
}

/*
==============
bdProtobufHelper::encodeVarIntAtPosition
==============
*/

bool __fastcall bdProtobufHelper::encodeVarIntAtPosition(bdStructSerializationOutputStream *stream, unsigned __int64 value, unsigned __int8 *position, unsigned int availableSize)
{
  return ?encodeVarIntAtPosition@bdProtobufHelper@@SA_NAEAVbdStructSerializationOutputStream@@_KPEAEI@Z(stream, value, position, availableSize);
}

/*
==============
bdProtobufHelper::decode64bits
==============
*/

bool __fastcall bdProtobufHelper::decode64bits(bdStructSerializationInputStream *stream, long double *value)
{
  return ?decode64bits@bdProtobufHelper@@SA_NAEAVbdStructSerializationInputStream@@AEAN@Z(stream, value);
}

/*
==============
bdProtobufHelper::encode64bits
==============
*/

bool __fastcall bdProtobufHelper::encode64bits(bdStructSerializationOutputStream *stream, long double value)
{
  return ?encode64bits@bdProtobufHelper@@SA_NAEAVbdStructSerializationOutputStream@@N@Z(stream, value);
}

/*
==============
bdProtobufHelper::encodeTag
==============
*/

bool __fastcall bdProtobufHelper::encodeTag(bdStructSerializationOutputStream *stream, unsigned int tagId, bdProtobufHelper::eWireType wireType)
{
  return ?encodeTag@bdProtobufHelper@@SA_NAEAVbdStructSerializationOutputStream@@IW4eWireType@1@@Z(stream, tagId, wireType);
}

/*
==============
bdProtobufHelper::decodeString
==============
*/

bool __fastcall bdProtobufHelper::decodeString(bdStructSerializationInputStream *stream, void *value, unsigned int *len)
{
  return ?decodeString@bdProtobufHelper@@SA_NAEAVbdStructSerializationInputStream@@PEAXAEAI@Z(stream, value, len);
}

/*
==============
bdProtobufHelper::decode32bits
==============
*/

bool __fastcall bdProtobufHelper::decode32bits(bdStructSerializationInputStream *stream, float *value)
{
  return ?decode32bits@bdProtobufHelper@@SA_NAEAVbdStructSerializationInputStream@@AEAM@Z(stream, value);
}

/*
==============
bdProtobufHelper::encode32bits
==============
*/

bool __fastcall bdProtobufHelper::encode32bits(bdStructSerializationOutputStream *stream, float value)
{
  return ?encode32bits@bdProtobufHelper@@SA_NAEAVbdStructSerializationOutputStream@@M@Z(stream, value);
}

/*
==============
bdProtobufHelper::decodeVarInt
==============
*/

bool __fastcall bdProtobufHelper::decodeVarInt(bdStructSerializationInputStream *stream, __int64 *value)
{
  return ?decodeVarInt@bdProtobufHelper@@SA_NAEAVbdStructSerializationInputStream@@AEA_J@Z(stream, value);
}

/*
==============
bdProtobufHelper::decodeStringPointer
==============
*/

bool __fastcall bdProtobufHelper::decodeStringPointer(bdStructSerializationInputStream *stream, const unsigned __int8 **blob, unsigned int *len)
{
  return ?decodeStringPointer@bdProtobufHelper@@SA_NAEAVbdStructSerializationInputStream@@AEAPEBEAEAI@Z(stream, blob, len);
}

/*
==============
bdProtobufHelper::fillVarIntBuffer
==============
*/

unsigned int __fastcall bdProtobufHelper::fillVarIntBuffer(unsigned __int64 value, unsigned __int8 *buf)
{
  return ?fillVarIntBuffer@bdProtobufHelper@@CAI_KQEAE@Z(value, buf);
}

/*
==============
bdProtobufHelper::encodeVarInt
==============
*/

bool __fastcall bdProtobufHelper::encodeVarInt(bdStructSerializationOutputStream *stream, __int64 value)
{
  return ?encodeVarInt@bdProtobufHelper@@SA_NAEAVbdStructSerializationOutputStream@@_J@Z(stream, value);
}

/*
==============
bdProtobufHelper::decodeVarInt
==============
*/

bool __fastcall bdProtobufHelper::decodeVarInt(bdStructSerializationInputStream *stream, unsigned __int64 *value)
{
  return ?decodeVarInt@bdProtobufHelper@@SA_NAEAVbdStructSerializationInputStream@@AEA_K@Z(stream, value);
}

/*
==============
bdProtobufHelper::skip
==============
*/

bool __fastcall bdProtobufHelper::skip(bdStructSerializationInputStream *stream, bdProtobufHelper::eWireType wireType)
{
  return ?skip@bdProtobufHelper@@SA_NAEAVbdStructSerializationInputStream@@W4eWireType@1@@Z(stream, wireType);
}

/*
==============
bdProtobufHelper::encodeString
==============
*/

bool __fastcall bdProtobufHelper::encodeString(bdStructSerializationOutputStream *stream, const void *value, unsigned int len)
{
  return ?encodeString@bdProtobufHelper@@SA_NAEAVbdStructSerializationOutputStream@@PEBXI@Z(stream, value, len);
}

/*
==============
bdProtobufHelper::encodeVarInt
==============
*/

bool __fastcall bdProtobufHelper::encodeVarInt(bdStructSerializationOutputStream *stream, unsigned __int64 value)
{
  return ?encodeVarInt@bdProtobufHelper@@SA_NAEAVbdStructSerializationOutputStream@@_K@Z(stream, value);
}

/*
==============
bdProtobufHelper::decodeTag
==============
*/

bool __fastcall bdProtobufHelper::decodeTag(bdStructSerializationInputStream *stream, unsigned int *tagId, bdProtobufHelper::eWireType *wireType)
{
  return ?decodeTag@bdProtobufHelper@@SA_NAEAVbdStructSerializationInputStream@@AEAIAEAW4eWireType@1@@Z(stream, tagId, wireType);
}

/*
==============
bdProtobufHelper::decode32bits
==============
*/
char bdProtobufHelper::decode32bits(bdStructSerializationInputStream *stream, float *value)
{
  float valuea; 

  if ( bdStructSerializationInputStream::read(stream, &valuea, 4u) != 4 )
    return 0;
  *value = valuea;
  return 1;
}

/*
==============
bdProtobufHelper::decode64bits
==============
*/
char bdProtobufHelper::decode64bits(bdStructSerializationInputStream *stream, long double *value)
{
  double valuea; 

  if ( bdStructSerializationInputStream::read(stream, &valuea, 8u) != 8 )
    return 0;
  *value = valuea;
  return 1;
}

/*
==============
bdProtobufHelper::decodeString
==============
*/
char bdProtobufHelper::decodeString(bdStructSerializationInputStream *stream, void *value, unsigned int *len)
{
  unsigned __int64 v4; 
  unsigned int v7; 
  char v8; 
  unsigned __int64 v9; 
  unsigned __int64 v10; 
  bool v11; 
  char valuea; 

  v4 = 0i64;
  valuea = 0;
  v7 = 0;
  do
  {
    if ( v7 >= 0x40 || bdStructSerializationInputStream::read(stream, &valuea, 1u) != 1 )
      return 0;
    v8 = v7;
    v7 += 7;
    v4 |= (unsigned __int64)(valuea & 0x7F) << v8;
  }
  while ( valuea < 0 );
  v9 = *len;
  v10 = v4 - v9;
  v11 = v4 <= v9;
  if ( v4 <= v9 )
    LODWORD(v9) = v4;
  if ( v11 )
    v10 = 0i64;
  if ( bdStructSerializationInputStream::read(stream, value, v9) == (_DWORD)v9 && bdProtobufHelper::skipBytes(stream, v10) )
    *len = v9;
  return 1;
}

/*
==============
bdProtobufHelper::decodeStringPointer
==============
*/
char bdProtobufHelper::decodeStringPointer(bdStructSerializationInputStream *stream, const unsigned __int8 **blob, unsigned int *len)
{
  __int64 v3; 
  unsigned int v5; 
  char v8; 
  bdByteBuffer *m_ptr; 
  bdByteBuffer *v10; 
  bdByteBuffer *v12; 
  char value; 

  v3 = 0i64;
  value = 0;
  v5 = 0;
  do
  {
    if ( v5 >= 0x40 || bdStructSerializationInputStream::read(stream, &value, 1u) != 1 )
      return 0;
    v8 = v5;
    v5 += 7;
    v3 |= (unsigned __int64)(value & 0x7F) << v8;
  }
  while ( value < 0 );
  m_ptr = stream->m_buffer.m_ptr;
  v10 = stream->m_buffer.m_ptr;
  v12 = stream->m_buffer.m_ptr;
  if ( stream->m_buffer.m_ptr )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
    v10 = v12;
  }
  *blob = v10->m_readPtr;
  if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
    ((void (__fastcall *)(bdByteBuffer *, __int64))m_ptr->~bdReferencable)(m_ptr, 1i64);
  if ( bdProtobufHelper::skipBytes(stream, (unsigned int)v3) )
    *len = v3;
  return 1;
}

/*
==============
bdProtobufHelper::decodeTag
==============
*/
char bdProtobufHelper::decodeTag(bdStructSerializationInputStream *stream, unsigned int *tagId, bdProtobufHelper::eWireType *wireType)
{
  unsigned __int64 v3; 
  unsigned int i; 
  char v8; 
  char value; 

  v3 = 0i64;
  value = 0;
  for ( i = 0; i < 0x40 && bdStructSerializationInputStream::read(stream, &value, 1u) == 1; i += 7 )
  {
    v8 = i;
    v3 |= (unsigned __int64)(value & 0x7F) << v8;
    if ( value >= 0 )
    {
      *tagId = v3 >> 3;
      *wireType = v3 & 7;
      return 1;
    }
  }
  return 0;
}

/*
==============
bdProtobufHelper::decodeVarInt
==============
*/
char bdProtobufHelper::decodeVarInt(bdStructSerializationInputStream *stream, __int64 *value)
{
  unsigned __int64 v2; 
  unsigned int v4; 
  char v6; 
  __int64 v7; 
  char valuea; 

  v2 = 0i64;
  valuea = 0;
  v4 = 0;
  do
  {
    if ( v4 >= 0x40 || bdStructSerializationInputStream::read(stream, &valuea, 1u) != 1 )
      return 0;
    v6 = v4;
    v4 += 7;
    v2 |= (unsigned __int64)(valuea & 0x7F) << v6;
  }
  while ( valuea < 0 );
  v7 = v2 >> 1;
  if ( (v2 & 1) != 0 )
    v7 = ~v7;
  *value = v7;
  return 1;
}

/*
==============
bdProtobufHelper::decodeVarInt
==============
*/
char bdProtobufHelper::decodeVarInt(bdStructSerializationInputStream *stream, unsigned __int64 *value)
{
  unsigned __int64 v2; 
  unsigned int i; 
  char v6; 
  char valuea; 

  v2 = 0i64;
  valuea = 0;
  for ( i = 0; i < 0x40 && bdStructSerializationInputStream::read(stream, &valuea, 1u) == 1; i += 7 )
  {
    v6 = i;
    v2 |= (unsigned __int64)(valuea & 0x7F) << v6;
    if ( valuea >= 0 )
    {
      *value = v2;
      return 1;
    }
  }
  return 0;
}

/*
==============
bdProtobufHelper::encode32bits
==============
*/
bool bdProtobufHelper::encode32bits(bdStructSerializationOutputStream *stream, float value)
{
  float valuea; 

  valuea = value;
  return bdStructSerializationOutputStream::write(stream, &valuea, 4u) == 4;
}

/*
==============
bdProtobufHelper::encode64bits
==============
*/
bool bdProtobufHelper::encode64bits(bdStructSerializationOutputStream *stream, long double value)
{
  double valuea; 

  valuea = value;
  return bdStructSerializationOutputStream::write(stream, &valuea, 8u) == 8;
}

/*
==============
bdProtobufHelper::encodeString
==============
*/
bool bdProtobufHelper::encodeString(bdStructSerializationOutputStream *stream, const void *value, unsigned int len)
{
  bool result; 

  result = bdProtobufHelper::encodeVarInt(stream, len);
  if ( result )
    return bdStructSerializationOutputStream::write(stream, value, len) == len;
  return result;
}

/*
==============
bdProtobufHelper::encodeTag
==============
*/
bool bdProtobufHelper::encodeTag(bdStructSerializationOutputStream *stream, unsigned int tagId, bdProtobufHelper::eWireType wireType)
{
  return bdProtobufHelper::encodeVarInt(stream, (int)wireType | (8i64 * tagId));
}

/*
==============
bdProtobufHelper::encodeVarInt
==============
*/
bool bdProtobufHelper::encodeVarInt(bdStructSerializationOutputStream *stream, __int64 value)
{
  unsigned __int64 v2; 

  v2 = 2 * value;
  if ( value < 0 )
    v2 = ~v2;
  return bdProtobufHelper::encodeVarInt(stream, v2);
}

/*
==============
bdProtobufHelper::encodeVarInt
==============
*/
bool bdProtobufHelper::encodeVarInt(bdStructSerializationOutputStream *stream, unsigned __int64 value)
{
  __int64 v2; 
  unsigned __int64 v4; 
  char v5; 
  char valuea[16]; 

  v2 = 0i64;
  if ( value )
  {
    do
    {
      if ( (unsigned int)v2 >= 0xA )
        break;
      v4 = value;
      v5 = value | 0x80;
      value >>= 7;
      valuea[v2] = v5;
      v2 = (unsigned int)(v2 + 1);
    }
    while ( v4 >= 0x80 );
    valuea[(unsigned int)(v2 - 1)] &= ~0x80u;
  }
  else
  {
    valuea[0] = 0;
    LODWORD(v2) = 1;
  }
  return bdStructSerializationOutputStream::write(stream, valuea, v2) == (_DWORD)v2;
}

/*
==============
bdProtobufHelper::encodeVarIntAtPosition
==============
*/
bool bdProtobufHelper::encodeVarIntAtPosition(bdStructSerializationOutputStream *stream, unsigned __int64 value, unsigned __int8 *position, unsigned int availableSize)
{
  size_t v4; 
  __int64 v8; 
  bdByteBuffer *m_ptr; 
  char v10; 
  bool v11; 
  unsigned __int64 v12; 
  bdByteBuffer *v13; 
  bdByteBuffer *v14; 
  bdByteBuffer *v15; 
  unsigned __int8 *m_writePtr; 
  bdByteBuffer *v17; 
  bdByteBuffer *v18; 
  bool v19; 
  bdByteBuffer *v20; 
  bdByteBuffer *v21; 
  signed __int32 v22; 
  bdByteBuffer *v24; 
  bdByteBuffer *v25; 
  bdByteBuffer *v26; 
  bdByteBuffer *v27; 
  bdByteBuffer *v28; 
  char valuea[16]; 

  v4 = availableSize;
  v8 = 0i64;
  m_ptr = stream->m_buffer.m_ptr;
  if ( position )
  {
    v24 = m_ptr;
    if ( m_ptr )
      _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
    v10 = 2;
    if ( !m_ptr )
      goto LABEL_5;
LABEL_19:
    v11 = 1;
    goto LABEL_6;
  }
  v25 = m_ptr;
  if ( m_ptr )
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
  v10 = 1;
  if ( !m_ptr )
    goto LABEL_19;
LABEL_5:
  v11 = 0;
LABEL_6:
  bdHandleAssert(v11, "(position == BD_NULL && stream.getBuffer() == BD_NULL) || (position != BD_NULL && stream.getBuffer() != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdprotobufhelper.cpp", "bdProtobufHelper::encodeVarIntAtPosition", 0x36u, "If position is NULL stream.getBuffer() must be NULL and vice versa");
  if ( (v10 & 2) != 0 )
  {
    v10 &= ~2u;
    if ( v24 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v24->m_refCount, 0xFFFFFFFF) == 1 )
        ((void (__fastcall *)(bdByteBuffer *, __int64))v24->~bdReferencable)(v24, 1i64);
    }
  }
  if ( (v10 & 1) != 0 && v25 && _InterlockedExchangeAdd((volatile signed __int32 *)&v25->m_refCount, 0xFFFFFFFF) == 1 )
    ((void (__fastcall *)(bdByteBuffer *, __int64))v25->~bdReferencable)(v25, 1i64);
  memset_0(valuea, 128, v4);
  if ( value )
  {
    do
    {
      if ( (unsigned int)v8 >= 0xA )
        break;
      valuea[v8] = value | 0x80;
      v12 = value;
      value >>= 7;
      v8 = (unsigned int)(v8 + 1);
    }
    while ( v12 >= 0x80 );
    valuea[(unsigned int)(v8 - 1)] &= ~0x80u;
  }
  else
  {
    valuea[0] = 0;
    LODWORD(v8) = 1;
  }
  valuea[(unsigned int)(v8 - 1)] |= 0x80u;
  valuea[(unsigned int)(v4 - 1)] &= ~0x80u;
  if ( (unsigned int)v8 > (unsigned int)v4 )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "lobby/common/protobufhelper", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdprotobufhelper.cpp", "bdProtobufHelper::encodeVarIntAtPosition", 0x41u, "Could not insert VarInt at position: availableSize is lower than byteCount");
  v13 = stream->m_buffer.m_ptr;
  if ( !stream->m_buffer.m_ptr )
    return (unsigned int)v8 <= (unsigned int)v4 && bdStructSerializationOutputStream::write(stream, valuea, v4);
  _InterlockedExchangeAdd((volatile signed __int32 *)&v13->m_refCount, 1u);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v13->m_refCount, 0xFFFFFFFF) == 1 )
    ((void (__fastcall *)(bdByteBuffer *, __int64))v13->~bdReferencable)(v13, 1i64);
  v14 = stream->m_buffer.m_ptr;
  v15 = stream->m_buffer.m_ptr;
  v26 = stream->m_buffer.m_ptr;
  if ( stream->m_buffer.m_ptr )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)&v14->m_refCount, 1u);
    v15 = v26;
  }
  m_writePtr = v15->m_writePtr;
  if ( v14 && _InterlockedExchangeAdd((volatile signed __int32 *)&v14->m_refCount, 0xFFFFFFFF) == 1 )
    ((void (__fastcall *)(bdByteBuffer *, __int64))v14->~bdReferencable)(v14, 1i64);
  v17 = stream->m_buffer.m_ptr;
  v18 = stream->m_buffer.m_ptr;
  v27 = stream->m_buffer.m_ptr;
  if ( stream->m_buffer.m_ptr )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)&v17->m_refCount, 1u);
    v18 = v27;
  }
  v18->m_writePtr = position;
  if ( v17 && _InterlockedExchangeAdd((volatile signed __int32 *)&v17->m_refCount, 0xFFFFFFFF) == 1 )
    ((void (__fastcall *)(bdByteBuffer *, __int64))v17->~bdReferencable)(v17, 1i64);
  v19 = (unsigned int)v8 <= (unsigned int)v4 && bdStructSerializationOutputStream::write(stream, valuea, v4);
  v20 = stream->m_buffer.m_ptr;
  v21 = stream->m_buffer.m_ptr;
  v28 = stream->m_buffer.m_ptr;
  if ( stream->m_buffer.m_ptr )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)&v20->m_refCount, 1u);
    v21 = v28;
  }
  v21->m_writePtr = m_writePtr;
  if ( v20 )
  {
    v22 = _InterlockedExchangeAdd((volatile signed __int32 *)&v20->m_refCount, 0xFFFFFFFF);
    if ( v22 == 1 )
      ((void (__fastcall *)(bdByteBuffer *, __int64))v20->~bdReferencable)(v20, 1i64);
  }
  return v19;
}

/*
==============
bdProtobufHelper::fillVarIntBuffer
==============
*/
__int64 bdProtobufHelper::fillVarIntBuffer(unsigned __int64 value, unsigned __int8 *buf)
{
  __int64 result; 
  unsigned __int64 v4; 
  unsigned __int64 v5; 
  unsigned __int8 v6; 

  result = 0i64;
  v4 = value;
  if ( value )
  {
    do
    {
      if ( (unsigned int)result >= 0xA )
        break;
      v5 = v4;
      v6 = v4 | 0x80;
      v4 >>= 7;
      buf[result] = v6;
      result = (unsigned int)(result + 1);
    }
    while ( v5 >= 0x80 );
    buf[(unsigned int)(result - 1)] &= ~0x80u;
  }
  else
  {
    *buf = 0;
    return 1i64;
  }
  return result;
}

/*
==============
bdProtobufHelper::skip
==============
*/
bool bdProtobufHelper::skip(bdStructSerializationInputStream *stream, bdProtobufHelper::eWireType wireType)
{
  __int32 v3; 
  __int32 v4; 
  unsigned __int64 v5; 
  unsigned int v6; 
  unsigned __int64 v8; 
  unsigned int i; 
  char v10; 
  unsigned __int64 v11; 
  unsigned int v12; 
  char value; 

  if ( wireType == WIRETYPE_VARINT )
  {
    while ( bdStructSerializationInputStream::read(stream, &value, 1u) )
    {
      if ( value >= 0 )
        return 1;
    }
    return 0;
  }
  v3 = wireType - 1;
  if ( !v3 )
  {
    v11 = 8i64;
    while ( 1 )
    {
      v12 = v11;
      if ( v11 > 0xFFFFFFFF )
        v12 = -1;
      if ( !bdStructSerializationInputStream::read(stream, NULL, v12) )
        break;
      v11 -= v12;
      if ( !v11 )
        return 1;
    }
    return 0;
  }
  v4 = v3 - 1;
  if ( !v4 )
  {
    v8 = 0i64;
    value = 0;
    for ( i = 0; i < 0x40 && bdStructSerializationInputStream::read(stream, &value, 1u) == 1; i += 7 )
    {
      v10 = i;
      v8 |= (unsigned __int64)(value & 0x7F) << v10;
      if ( value >= 0 )
        return bdProtobufHelper::skipBytes(stream, v8);
    }
    return 0;
  }
  if ( v4 == 3 )
  {
    v5 = 4i64;
    while ( 1 )
    {
      v6 = v5;
      if ( v5 > 0xFFFFFFFF )
        v6 = -1;
      if ( !bdStructSerializationInputStream::read(stream, NULL, v6) )
        break;
      v5 -= v6;
      if ( !v5 )
        return 1;
    }
    return 0;
  }
  return 1;
}

/*
==============
bdProtobufHelper::skipBytes
==============
*/
char bdProtobufHelper::skipBytes(bdStructSerializationInputStream *stream, unsigned __int64 byteCount)
{
  unsigned __int64 v2; 
  unsigned int v4; 

  v2 = byteCount;
  if ( !byteCount )
    return 1;
  while ( 1 )
  {
    v4 = v2;
    if ( v2 > 0xFFFFFFFF )
      v4 = -1;
    if ( !bdStructSerializationInputStream::read(stream, NULL, v4) )
      break;
    v2 -= v4;
    if ( !v2 )
      return 1;
  }
  return 0;
}

