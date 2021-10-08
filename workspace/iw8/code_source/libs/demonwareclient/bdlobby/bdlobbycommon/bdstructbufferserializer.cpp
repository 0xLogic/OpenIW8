/*
==============
bdStructBufferSerializer::writeUInt64
==============
*/

bool __fastcall bdStructBufferSerializer::writeUInt64(bdStructBufferSerializer *this, const unsigned int tag, unsigned __int64 value)
{
  return ?writeUInt64@bdStructBufferSerializer@@QEAA_NI_K@Z(this, tag, value);
}

/*
==============
bdStructBufferSerializer::writeObject
==============
*/

bool __fastcall bdStructBufferSerializer::writeObject(bdStructBufferSerializer *this, const unsigned int tag, const bdStructBufferSerializable *object)
{
  return ?writeObject@bdStructBufferSerializer@@QEAA_NIAEBVbdStructBufferSerializable@@@Z(this, tag, object);
}

/*
==============
bdStructBufferSerializer::~bdStructBufferSerializer
==============
*/

void __fastcall bdStructBufferSerializer::~bdStructBufferSerializer(bdStructBufferSerializer *this)
{
  ??1bdStructBufferSerializer@@QEAA@XZ(this);
}

/*
==============
bdStructBufferSerializer::writeString
==============
*/

bool __fastcall bdStructBufferSerializer::writeString(bdStructBufferSerializer *this, const unsigned int tag, const bdString *string)
{
  return ?writeString@bdStructBufferSerializer@@QEAA_NIAEBVbdString@@@Z(this, tag, string);
}

/*
==============
bdStructBufferSerializer::prepare
==============
*/

bool __fastcall bdStructBufferSerializer::prepare(bdStructBufferSerializer *this, bdReference<bdByteBuffer> buffer, unsigned int available)
{
  return ?prepare@bdStructBufferSerializer@@IEAA_NV?$bdReference@VbdByteBuffer@@@@I@Z(this, buffer, available);
}

/*
==============
bdStructBufferSerializer::writeUInt16
==============
*/

bool __fastcall bdStructBufferSerializer::writeUInt16(bdStructBufferSerializer *this, const unsigned int tag, unsigned __int16 value)
{
  return ?writeUInt16@bdStructBufferSerializer@@QEAA_NIG@Z(this, tag, value);
}

/*
==============
bdStructBufferSerializer::writeInt64
==============
*/

bool __fastcall bdStructBufferSerializer::writeInt64(bdStructBufferSerializer *this, const unsigned int tag, __int64 value)
{
  return ?writeInt64@bdStructBufferSerializer@@QEAA_NI_J@Z(this, tag, value);
}

/*
==============
bdStructBufferSerializer::writeUByte8
==============
*/

bool __fastcall bdStructBufferSerializer::writeUByte8(bdStructBufferSerializer *this, const unsigned int tag, unsigned __int8 value)
{
  return ?writeUByte8@bdStructBufferSerializer@@QEAA_NIE@Z(this, tag, value);
}

/*
==============
bdStructBufferSerializer::writeObjectBegin
==============
*/

bool __fastcall bdStructBufferSerializer::writeObjectBegin(bdStructBufferSerializer *this, const unsigned int tag)
{
  return ?writeObjectBegin@bdStructBufferSerializer@@QEAA_NI@Z(this, tag);
}

/*
==============
bdStructBufferSerializer::writeObjectEnd
==============
*/

bool __fastcall bdStructBufferSerializer::writeObjectEnd(bdStructBufferSerializer *this)
{
  return ?writeObjectEnd@bdStructBufferSerializer@@QEAA_NXZ(this);
}

/*
==============
bdStructBufferSerializer::writeInt16
==============
*/

bool __fastcall bdStructBufferSerializer::writeInt16(bdStructBufferSerializer *this, const unsigned int tag, __int16 value)
{
  return ?writeInt16@bdStructBufferSerializer@@QEAA_NIF@Z(this, tag, value);
}

/*
==============
bdStructBufferSerializer::writeByte8
==============
*/

bool __fastcall bdStructBufferSerializer::writeByte8(bdStructBufferSerializer *this, const unsigned int tag, char value)
{
  return ?writeByte8@bdStructBufferSerializer@@QEAA_NIC@Z(this, tag, value);
}

/*
==============
bdStructBufferSerializer::writeBlob
==============
*/

bool __fastcall bdStructBufferSerializer::writeBlob(bdStructBufferSerializer *this, const unsigned int tag, const void *value, const unsigned int size)
{
  return ?writeBlob@bdStructBufferSerializer@@QEAA_NIPEBXI@Z(this, tag, value, size);
}

/*
==============
bdStructBufferSerializer::writeString
==============
*/

bool __fastcall bdStructBufferSerializer::writeString(bdStructBufferSerializer *this, const unsigned int tag, const char *value, const unsigned int size)
{
  return ?writeString@bdStructBufferSerializer@@QEAA_NIPEBDI@Z(this, tag, value, size);
}

/*
==============
bdStructBufferSerializer::writeFloat32
==============
*/

bool __fastcall bdStructBufferSerializer::writeFloat32(bdStructBufferSerializer *this, const unsigned int tag, float value)
{
  return ?writeFloat32@bdStructBufferSerializer@@QEAA_NIM@Z(this, tag, value);
}

/*
==============
bdStructBufferSerializer::writeUInt32
==============
*/

bool __fastcall bdStructBufferSerializer::writeUInt32(bdStructBufferSerializer *this, const unsigned int tag, unsigned int value)
{
  return ?writeUInt32@bdStructBufferSerializer@@QEAA_NII@Z(this, tag, value);
}

/*
==============
bdStructBufferSerializer::bdStructBufferSerializer
==============
*/

void __fastcall bdStructBufferSerializer::bdStructBufferSerializer(bdStructBufferSerializer *this, bdReference<bdByteBuffer> buffer, unsigned int available, unsigned int nestedDepth)
{
  ??0bdStructBufferSerializer@@QEAA@V?$bdReference@VbdByteBuffer@@@@II@Z(this, buffer, available, nestedDepth);
}

/*
==============
bdStructBufferSerializer::getWrittenSize
==============
*/

unsigned int __fastcall bdStructBufferSerializer::getWrittenSize(bdStructBufferSerializer *this)
{
  return ?getWrittenSize@bdStructBufferSerializer@@QEAAIXZ(this);
}

/*
==============
bdStructBufferSerializer::writeBool
==============
*/

bool __fastcall bdStructBufferSerializer::writeBool(bdStructBufferSerializer *this, const unsigned int tag, bool value)
{
  return ?writeBool@bdStructBufferSerializer@@QEAA_NI_N@Z(this, tag, value);
}

/*
==============
bdStructBufferSerializer::writeInt32
==============
*/

bool __fastcall bdStructBufferSerializer::writeInt32(bdStructBufferSerializer *this, const unsigned int tag, int value)
{
  return ?writeInt32@bdStructBufferSerializer@@QEAA_NIH@Z(this, tag, value);
}

/*
==============
bdStructBufferSerializer::writeFloat64
==============
*/

bool __fastcall bdStructBufferSerializer::writeFloat64(bdStructBufferSerializer *this, const unsigned int tag, long double value)
{
  return ?writeFloat64@bdStructBufferSerializer@@QEAA_NIN@Z(this, tag, value);
}

/*
==============
bdStructBufferSerializer::bdStructBufferSerializer
==============
*/
void bdStructBufferSerializer::bdStructBufferSerializer(bdStructBufferSerializer *this, bdReference<bdByteBuffer> buffer, unsigned int available, unsigned int nestedDepth)
{
  bdByteBuffer *v8; 
  bdByteBuffer *v9; 
  bdReference<bdByteBuffer> buffera; 
  __int64 v11; 
  __int64 *v12; 

  v11 = -2i64;
  bdStructSerializationOutputStream::bdStructSerializationOutputStream(&this->m_stream);
  this->m_nestedDepth = nestedDepth;
  this->m_nestedObjectCount = 0;
  v8 = (bdByteBuffer *)buffer.m_ptr->__vftable;
  v9 = v8;
  if ( v8 )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)&v8->m_refCount, 1u);
    v8 = v9;
  }
  v12 = (__int64 *)&v9;
  buffera.m_ptr = v8;
  if ( v8 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v8->m_refCount, 1u);
  bdStructSerializationOutputStream::prepare(&this->m_stream, (bdReference<bdByteBuffer>)&buffera, available);
  if ( v9 && _InterlockedExchangeAdd((volatile signed __int32 *)&v9->m_refCount, 0xFFFFFFFF) == 1 && v9 )
    ((void (__fastcall *)(bdByteBuffer *, __int64))v9->~bdReferencable)(v9, 1i64);
  if ( buffer.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->allocateBuffer, 0xFFFFFFFF) == 1 )
  {
    if ( buffer.m_ptr->__vftable )
      (*(void (__fastcall **)(bdByteBuffer_vtbl *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr->__vftable, 1i64);
    buffer.m_ptr->__vftable = NULL;
  }
}

/*
==============
bdStructBufferSerializer::~bdStructBufferSerializer
==============
*/

void __fastcall bdStructBufferSerializer::~bdStructBufferSerializer(bdStructBufferSerializer *this)
{
  bdStructSerializationOutputStream::~bdStructSerializationOutputStream(&this->m_stream);
}

/*
==============
bdStructBufferSerializer::getWrittenSize
==============
*/

unsigned int __fastcall bdStructBufferSerializer::getWrittenSize(bdStructBufferSerializer *this)
{
  return bdStructSerializationOutputStream::getWrittenSize(&this->m_stream);
}

/*
==============
bdStructBufferSerializer::prepare
==============
*/
_BOOL8 bdStructBufferSerializer::prepare(bdStructBufferSerializer *this, bdReference<bdByteBuffer> buffer, unsigned int available)
{
  bdByteBuffer *v4; 
  bool v5; 
  bdReference<bdByteBuffer> buffera; 
  bdByteBuffer *m_ptr; 

  m_ptr = buffer.m_ptr;
  v4 = (bdByteBuffer *)buffer.m_ptr->__vftable;
  buffera.m_ptr = v4;
  if ( v4 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v4->m_refCount, 1u);
  v5 = bdStructSerializationOutputStream::prepare(&this->m_stream, (bdReference<bdByteBuffer>)&buffera, available);
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
bdStructBufferSerializer::writeBlob
==============
*/
bool bdStructBufferSerializer::writeBlob(bdStructBufferSerializer *this, const unsigned int tag, const void *value, const unsigned int size)
{
  return bdProtobufHelper::encodeTag(&this->m_stream, tag, WIRETYPE_STRING) && bdProtobufHelper::encodeString(&this->m_stream, value, size);
}

/*
==============
bdStructBufferSerializer::writeBool
==============
*/
bool bdStructBufferSerializer::writeBool(bdStructBufferSerializer *this, const unsigned int tag, bool value)
{
  return bdProtobufHelper::encodeTag(&this->m_stream, tag, WIRETYPE_VARINT) && bdProtobufHelper::encodeVarInt(&this->m_stream, value);
}

/*
==============
bdStructBufferSerializer::writeByte8
==============
*/
bool bdStructBufferSerializer::writeByte8(bdStructBufferSerializer *this, const unsigned int tag, char value)
{
  return bdProtobufHelper::encodeTag(&this->m_stream, tag, WIRETYPE_VARINT) && bdProtobufHelper::encodeVarInt(&this->m_stream, value);
}

/*
==============
bdStructBufferSerializer::writeFloat32
==============
*/

bool __fastcall bdStructBufferSerializer::writeFloat32(bdStructBufferSerializer *this, const unsigned int tag, double value)
{
  bool result; 

  __asm
  {
    vmovaps [rsp+38h+var_18], xmm6
    vmovaps xmm6, xmm2
  }
  if ( !bdProtobufHelper::encodeTag(&this->m_stream, tag, WIRETYPE_32BIT) )
    goto LABEL_4;
  __asm { vmovaps xmm1, xmm6; value }
  if ( bdProtobufHelper::encode32bits(&this->m_stream, *(float *)&_XMM1) )
  {
    result = 1;
    __asm { vmovaps xmm6, [rsp+38h+var_18] }
  }
  else
  {
LABEL_4:
    __asm { vmovaps xmm6, [rsp+38h+var_18] }
    return 0;
  }
  return result;
}

/*
==============
bdStructBufferSerializer::writeFloat64
==============
*/

bool __fastcall bdStructBufferSerializer::writeFloat64(bdStructBufferSerializer *this, const unsigned int tag, double value)
{
  bool result; 

  __asm
  {
    vmovaps [rsp+38h+var_18], xmm6
    vmovaps xmm6, xmm2
  }
  if ( !bdProtobufHelper::encodeTag(&this->m_stream, tag, WIRETYPE_64BIT) )
    goto LABEL_4;
  __asm { vmovaps xmm1, xmm6; value }
  if ( bdProtobufHelper::encode64bits(&this->m_stream, *(long double *)&_XMM1) )
  {
    result = 1;
    __asm { vmovaps xmm6, [rsp+38h+var_18] }
  }
  else
  {
LABEL_4:
    __asm { vmovaps xmm6, [rsp+38h+var_18] }
    return 0;
  }
  return result;
}

/*
==============
bdStructBufferSerializer::writeInt16
==============
*/
bool bdStructBufferSerializer::writeInt16(bdStructBufferSerializer *this, const unsigned int tag, __int16 value)
{
  return bdProtobufHelper::encodeTag(&this->m_stream, tag, WIRETYPE_VARINT) && bdProtobufHelper::encodeVarInt(&this->m_stream, value);
}

/*
==============
bdStructBufferSerializer::writeInt32
==============
*/
bool bdStructBufferSerializer::writeInt32(bdStructBufferSerializer *this, const unsigned int tag, int value)
{
  __int64 v3; 

  v3 = value;
  return bdProtobufHelper::encodeTag(&this->m_stream, tag, WIRETYPE_VARINT) && bdProtobufHelper::encodeVarInt(&this->m_stream, v3);
}

/*
==============
bdStructBufferSerializer::writeInt64
==============
*/
bool bdStructBufferSerializer::writeInt64(bdStructBufferSerializer *this, const unsigned int tag, __int64 value)
{
  return bdProtobufHelper::encodeTag(&this->m_stream, tag, WIRETYPE_VARINT) && bdProtobufHelper::encodeVarInt(&this->m_stream, value);
}

/*
==============
bdStructBufferSerializer::writeObject
==============
*/
bool bdStructBufferSerializer::writeObject(bdStructBufferSerializer *this, const unsigned int tag, const bdStructBufferSerializable *object)
{
  char v3; 
  bool v6; 
  bdByteBuffer *m_ptr; 
  char v8; 
  unsigned __int8 *m_writePtr; 
  bdByteBuffer *v10; 
  bdByteBuffer *v11; 
  bdByteBuffer *v12; 
  bdByteBuffer *v13; 
  bdByteBuffer *v14; 
  bdByteBuffer *v15; 
  __int64 WrittenSize; 
  bool v17; 
  unsigned __int64 v18; 
  bdByteBuffer *v20; 
  bdByteBuffer *v21; 
  bdByteBuffer *v22; 

  v3 = 0;
  LODWORD(v21) = 0;
  v6 = bdProtobufHelper::encodeTag(&this->m_stream, tag, WIRETYPE_STRING);
  m_ptr = this->m_stream.m_buffer.m_ptr;
  v8 = v6;
  m_writePtr = NULL;
  if ( !this->m_stream.m_buffer.m_ptr )
    goto LABEL_26;
  _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
    ((void (__fastcall *)(bdByteBuffer *, __int64))m_ptr->~bdReferencable)(m_ptr, 1i64);
  v10 = this->m_stream.m_buffer.m_ptr;
  v22 = this->m_stream.m_buffer.m_ptr;
  v11 = this->m_stream.m_buffer.m_ptr;
  if ( this->m_stream.m_buffer.m_ptr )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)&v10->m_refCount, 1u);
    v11 = v22;
  }
  m_writePtr = v11->m_writePtr;
  if ( v10 && _InterlockedExchangeAdd((volatile signed __int32 *)&v10->m_refCount, 0xFFFFFFFF) == 1 )
    ((void (__fastcall *)(bdByteBuffer *, __int64))v10->~bdReferencable)(v10, 1i64);
  if ( v8 )
  {
    v12 = this->m_stream.m_buffer.m_ptr;
    v21 = this->m_stream.m_buffer.m_ptr;
    v13 = this->m_stream.m_buffer.m_ptr;
    if ( this->m_stream.m_buffer.m_ptr )
    {
      _InterlockedExchangeAdd((volatile signed __int32 *)&v12->m_refCount, 1u);
      v13 = v21;
    }
    v3 = 1;
    if ( v12->m_size + LODWORD(v12->m_data) - LODWORD(v12->m_writePtr) >= 4 )
    {
      v8 = 1;
      goto LABEL_16;
    }
  }
  else
  {
    v13 = v21;
  }
  v8 = 0;
LABEL_16:
  if ( (v3 & 1) != 0 && v13 && _InterlockedExchangeAdd((volatile signed __int32 *)&v13->m_refCount, 0xFFFFFFFF) == 1 )
    ((void (__fastcall *)(bdByteBuffer *, __int64))v21->~bdReferencable)(v21, 1i64);
  if ( v8 )
  {
    v14 = this->m_stream.m_buffer.m_ptr;
    v15 = this->m_stream.m_buffer.m_ptr;
    v20 = this->m_stream.m_buffer.m_ptr;
    if ( this->m_stream.m_buffer.m_ptr )
    {
      _InterlockedExchangeAdd((volatile signed __int32 *)&v14->m_refCount, 1u);
      v15 = v20;
    }
    v15->m_writePtr = m_writePtr + 4;
    if ( v14 && _InterlockedExchangeAdd((volatile signed __int32 *)&v14->m_refCount, 0xFFFFFFFF) == 1 )
      ((void (__fastcall *)(bdByteBuffer *, __int64))v14->~bdReferencable)(v14, 1i64);
  }
LABEL_26:
  WrittenSize = bdStructSerializationOutputStream::getWrittenSize(&this->m_stream);
  v17 = v8 && object->serialize((bdStructBufferSerializable *)object, this);
  v18 = bdStructSerializationOutputStream::getWrittenSize(&this->m_stream) - WrittenSize;
  return v17 && bdProtobufHelper::encodeVarIntAtPosition(&this->m_stream, v18, m_writePtr, 4u);
}

/*
==============
bdStructBufferSerializer::writeObjectBegin
==============
*/
bool bdStructBufferSerializer::writeObjectBegin(bdStructBufferSerializer *this, const unsigned int tag)
{
  bool v3; 
  __int64 m_nestedObjectCount; 
  bdByteBuffer *m_ptr; 
  bdByteBuffer *v7; 
  bdByteBuffer *v8; 
  bdByteBuffer *v9; 
  bdByteBuffer *v10; 
  bdByteBuffer *v11; 
  bdByteBuffer *v12; 
  bdByteBuffer *v13; 
  bdByteBuffer *v14; 
  bdByteBuffer *v15; 
  char v16; 
  bdByteBuffer *v17; 
  bdByteBuffer *v18; 

  v16 = 0;
  v3 = bdProtobufHelper::encodeTag(&this->m_stream, tag, WIRETYPE_STRING);
  m_nestedObjectCount = this->m_nestedObjectCount;
  if ( (unsigned int)m_nestedObjectCount >= 0x10 )
  {
    bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructbufferserializer.cpp", "bdStructBufferSerializer::writeObjectBegin", 0xAAu, "too many nested objects");
    return 0;
  }
  this->m_writeObjectBeginSizePosition[m_nestedObjectCount] = NULL;
  m_ptr = this->m_stream.m_buffer.m_ptr;
  if ( this->m_stream.m_buffer.m_ptr )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
      ((void (__fastcall *)(bdByteBuffer *, __int64))m_ptr->~bdReferencable)(m_ptr, 1i64);
    v7 = this->m_stream.m_buffer.m_ptr;
    if ( this->m_stream.m_buffer.m_ptr )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v7->m_refCount, 1u);
    this->m_writeObjectBeginSizePosition[this->m_nestedObjectCount] = v7->m_writePtr;
    if ( v7 && _InterlockedExchangeAdd((volatile signed __int32 *)&v7->m_refCount, 0xFFFFFFFF) == 1 )
      ((void (__fastcall *)(bdByteBuffer *, __int64))v7->~bdReferencable)(v7, 1i64);
    if ( v3 )
    {
      v8 = this->m_stream.m_buffer.m_ptr;
      v9 = this->m_stream.m_buffer.m_ptr;
      v17 = this->m_stream.m_buffer.m_ptr;
      if ( this->m_stream.m_buffer.m_ptr )
      {
        _InterlockedExchangeAdd((volatile signed __int32 *)&v8->m_refCount, 1u);
        v9 = v17;
      }
      v16 = 1;
      if ( v8->m_size + LODWORD(v8->m_data) - LODWORD(v8->m_writePtr) >= 4 )
      {
        v3 = 1;
        goto LABEL_18;
      }
    }
    else
    {
      v9 = v17;
    }
    v3 = 0;
LABEL_18:
    if ( (v16 & 1) != 0 && v9 && _InterlockedExchangeAdd((volatile signed __int32 *)&v9->m_refCount, 0xFFFFFFFF) == 1 )
      ((void (__fastcall *)(bdByteBuffer *, __int64))v17->~bdReferencable)(v17, 1i64);
    if ( v3 )
    {
      v10 = this->m_stream.m_buffer.m_ptr;
      v15 = this->m_stream.m_buffer.m_ptr;
      if ( this->m_stream.m_buffer.m_ptr )
        _InterlockedExchangeAdd((volatile signed __int32 *)&v10->m_refCount, 1u);
      v3 = bdProtobufHelper::encodeVarIntAtPosition(&this->m_stream, 0i64, v10->m_writePtr, 4u);
      if ( v10 && _InterlockedExchangeAdd((volatile signed __int32 *)&v10->m_refCount, 0xFFFFFFFF) == 1 )
        ((void (__fastcall *)(bdByteBuffer *, __int64))v15->~bdReferencable)(v15, 1i64);
      v11 = this->m_stream.m_buffer.m_ptr;
      v18 = this->m_stream.m_buffer.m_ptr;
      v12 = this->m_stream.m_buffer.m_ptr;
      if ( this->m_stream.m_buffer.m_ptr )
      {
        _InterlockedExchangeAdd((volatile signed __int32 *)&v11->m_refCount, 1u);
        v12 = this->m_stream.m_buffer.m_ptr;
      }
      v13 = v12;
      if ( v12 )
      {
        _InterlockedExchangeAdd((volatile signed __int32 *)&v12->m_refCount, 1u);
        v13 = v12;
      }
      v11->m_writePtr = v13->m_writePtr + 4;
      if ( v12 && _InterlockedExchangeAdd((volatile signed __int32 *)&v12->m_refCount, 0xFFFFFFFF) == 1 )
        ((void (__fastcall *)(bdByteBuffer *, __int64))v12->~bdReferencable)(v12, 1i64);
      if ( v18 && _InterlockedExchangeAdd((volatile signed __int32 *)&v11->m_refCount, 0xFFFFFFFF) == 1 )
        ((void (__fastcall *)(bdByteBuffer *, __int64))v18->~bdReferencable)(v18, 1i64);
    }
  }
  v14 = this->m_stream.m_buffer.m_ptr;
  if ( this->m_stream.m_buffer.m_ptr )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v14->m_refCount, 1u);
  this->m_writeObjectBeginSizeBefore[this->m_nestedObjectCount] = v14->m_size + LODWORD(v14->m_data) - LODWORD(v14->m_writePtr);
  if ( v14 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v14->m_refCount, 0xFFFFFFFF) == 1 )
      ((void (__fastcall *)(bdByteBuffer *, __int64))v14->~bdReferencable)(v14, 1i64);
  }
  ++this->m_nestedObjectCount;
  return v3;
}

/*
==============
bdStructBufferSerializer::writeObjectEnd
==============
*/
bool bdStructBufferSerializer::writeObjectEnd(bdStructBufferSerializer *this)
{
  unsigned int m_nestedObjectCount; 
  bdByteBuffer *m_ptr; 
  int v5; 
  bool v6; 

  m_nestedObjectCount = this->m_nestedObjectCount;
  if ( m_nestedObjectCount )
  {
    this->m_nestedObjectCount = m_nestedObjectCount - 1;
    m_ptr = this->m_stream.m_buffer.m_ptr;
    if ( m_ptr )
      _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
    v5 = m_ptr->m_size + LODWORD(m_ptr->m_data) - LODWORD(m_ptr->m_writePtr);
    if ( m_ptr )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
        ((void (__fastcall *)(bdByteBuffer *, __int64))m_ptr->~bdReferencable)(m_ptr, 1i64);
    }
    v6 = bdProtobufHelper::encodeVarIntAtPosition(&this->m_stream, this->m_writeObjectBeginSizeBefore[this->m_nestedObjectCount] - v5, this->m_writeObjectBeginSizePosition[this->m_nestedObjectCount], 4u);
    this->m_writeObjectBeginSizePosition[this->m_nestedObjectCount] = NULL;
    this->m_writeObjectBeginSizeBefore[this->m_nestedObjectCount] = bdStructSerializationOutputStream::getWrittenSize(&this->m_stream);
    return v6;
  }
  else
  {
    bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructbufferserializer.cpp", "bdStructBufferSerializer::writeObjectEnd", 0xC9u, "WriteObjectEnd without a matching WriteObjectBegin");
    return 0;
  }
}

/*
==============
bdStructBufferSerializer::writeString
==============
*/
bool bdStructBufferSerializer::writeString(bdStructBufferSerializer *this, const unsigned int tag, const bdString *string)
{
  unsigned int Length; 
  const char *Buffer; 
  bool result; 

  result = 0;
  if ( bdProtobufHelper::encodeTag(&this->m_stream, tag, WIRETYPE_STRING) )
  {
    Length = bdString::getLength((bdString *)string);
    Buffer = bdString::getBuffer((bdString *)string);
    if ( bdProtobufHelper::encodeString(&this->m_stream, Buffer, Length) )
      return 1;
  }
  return result;
}

/*
==============
bdStructBufferSerializer::writeString
==============
*/
bool bdStructBufferSerializer::writeString(bdStructBufferSerializer *this, const unsigned int tag, const char *value, const unsigned int size)
{
  unsigned int v5; 
  void *v8; 

  v5 = size;
  v8 = memchr_0(value, 0, size);
  if ( v8 )
    v5 = (_DWORD)v8 - (_DWORD)value;
  return bdProtobufHelper::encodeTag(&this->m_stream, tag, WIRETYPE_STRING) && bdProtobufHelper::encodeString(&this->m_stream, value, v5);
}

/*
==============
bdStructBufferSerializer::writeUByte8
==============
*/
bool bdStructBufferSerializer::writeUByte8(bdStructBufferSerializer *this, const unsigned int tag, unsigned __int8 value)
{
  return bdProtobufHelper::encodeTag(&this->m_stream, tag, WIRETYPE_VARINT) && bdProtobufHelper::encodeVarInt(&this->m_stream, value);
}

/*
==============
bdStructBufferSerializer::writeUInt16
==============
*/
bool bdStructBufferSerializer::writeUInt16(bdStructBufferSerializer *this, const unsigned int tag, unsigned __int16 value)
{
  return bdProtobufHelper::encodeTag(&this->m_stream, tag, WIRETYPE_VARINT) && bdProtobufHelper::encodeVarInt(&this->m_stream, value);
}

/*
==============
bdStructBufferSerializer::writeUInt32
==============
*/
bool bdStructBufferSerializer::writeUInt32(bdStructBufferSerializer *this, const unsigned int tag, unsigned int value)
{
  return bdProtobufHelper::encodeTag(&this->m_stream, tag, WIRETYPE_VARINT) && bdProtobufHelper::encodeVarInt(&this->m_stream, value);
}

/*
==============
bdStructBufferSerializer::writeUInt64
==============
*/
bool bdStructBufferSerializer::writeUInt64(bdStructBufferSerializer *this, const unsigned int tag, unsigned __int64 value)
{
  return bdProtobufHelper::encodeTag(&this->m_stream, tag, WIRETYPE_VARINT) && bdProtobufHelper::encodeVarInt(&this->m_stream, value);
}

