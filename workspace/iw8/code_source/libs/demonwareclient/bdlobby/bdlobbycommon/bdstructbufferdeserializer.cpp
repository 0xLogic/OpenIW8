/*
==============
bdStructBufferDeserializer::readUInt64Array
==============
*/

bool __fastcall bdStructBufferDeserializer::readUInt64Array(bdStructBufferDeserializer *this, const unsigned int tag, bdFastArray<unsigned __int64> *values)
{
  return ?readUInt64Array@bdStructBufferDeserializer@@QEAA_NIAEAV?$bdFastArray@_K@@@Z(this, tag, values);
}

/*
==============
bdStructBufferDeserializer::readFloat32
==============
*/

bool __fastcall bdStructBufferDeserializer::readFloat32(bdStructBufferDeserializer *this, const unsigned int tag, float *value)
{
  return ?readFloat32@bdStructBufferDeserializer@@QEAA_NIAEAM@Z(this, tag, value);
}

/*
==============
bdStructBufferDeserializer::peekCurrentTag
==============
*/

bool __fastcall bdStructBufferDeserializer::peekCurrentTag(bdStructBufferDeserializer *this, unsigned int *tag)
{
  return ?peekCurrentTag@bdStructBufferDeserializer@@QEAA_NAEAI@Z(this, tag);
}

/*
==============
bdStructBufferDeserializer::readObjectArray
==============
*/

bool __fastcall bdStructBufferDeserializer::readObjectArray(bdStructBufferDeserializer *this, const unsigned int tag, bdStructBufferSerializable *const objects, const unsigned int objectsLength, unsigned int *readCount)
{
  return ?readObjectArray@bdStructBufferDeserializer@@QEAA_NIQEAVbdStructBufferSerializable@@IAEAI@Z(this, tag, objects, objectsLength, readCount);
}

/*
==============
bdStructBufferDeserializer::skipCurrentTag
==============
*/

bool __fastcall bdStructBufferDeserializer::skipCurrentTag(bdStructBufferDeserializer *this)
{
  return ?skipCurrentTag@bdStructBufferDeserializer@@QEAA_NXZ(this);
}

/*
==============
bdStructBufferDeserializer::getRemainingReadSize
==============
*/

unsigned int __fastcall bdStructBufferDeserializer::getRemainingReadSize(bdStructBufferDeserializer *this)
{
  return ?getRemainingReadSize@bdStructBufferDeserializer@@QEAAIXZ(this);
}

/*
==============
bdStructBufferDeserializer::readFloat64
==============
*/

bool __fastcall bdStructBufferDeserializer::readFloat64(bdStructBufferDeserializer *this, const unsigned int tag, long double *value)
{
  return ?readFloat64@bdStructBufferDeserializer@@QEAA_NIAEAN@Z(this, tag, value);
}

/*
==============
bdStructBufferDeserializer::~bdStructBufferDeserializer
==============
*/

void __fastcall bdStructBufferDeserializer::~bdStructBufferDeserializer(bdStructBufferDeserializer *this)
{
  ??1bdStructBufferDeserializer@@QEAA@XZ(this);
}

/*
==============
bdStructBufferDeserializer::readObject
==============
*/

bool __fastcall bdStructBufferDeserializer::readObject(bdStructBufferDeserializer *this, const unsigned int tag, bdStructBufferSerializable *object)
{
  return ?readObject@bdStructBufferDeserializer@@QEAA_NIAEAVbdStructBufferSerializable@@@Z(this, tag, object);
}

/*
==============
bdStructBufferDeserializer::readBlobPointer
==============
*/

bool __fastcall bdStructBufferDeserializer::readBlobPointer(bdStructBufferDeserializer *this, const unsigned int tag, const unsigned __int8 **blob, const unsigned int maxSize, unsigned int *readSize)
{
  return ?readBlobPointer@bdStructBufferDeserializer@@QEAA_NIAEAPEBEIAEAI@Z(this, tag, blob, maxSize, readSize);
}

/*
==============
bdStructBufferDeserializer::readUByte8
==============
*/

bool __fastcall bdStructBufferDeserializer::readUByte8(bdStructBufferDeserializer *this, const unsigned int tag, unsigned __int8 *value)
{
  return ?readUByte8@bdStructBufferDeserializer@@QEAA_NIAEAE@Z(this, tag, value);
}

/*
==============
bdStructBufferDeserializer::readBool
==============
*/

bool __fastcall bdStructBufferDeserializer::readBool(bdStructBufferDeserializer *this, const unsigned int tag, bool *value)
{
  return ?readBool@bdStructBufferDeserializer@@QEAA_NIAEA_N@Z(this, tag, value);
}

/*
==============
bdStructBufferDeserializer::readNextTag
==============
*/

bool __fastcall bdStructBufferDeserializer::readNextTag(bdStructBufferDeserializer *this)
{
  return ?readNextTag@bdStructBufferDeserializer@@IEAA_NXZ(this);
}

/*
==============
bdStructBufferDeserializer::bdStructBufferDeserializer
==============
*/

void __fastcall bdStructBufferDeserializer::bdStructBufferDeserializer(bdStructBufferDeserializer *this)
{
  ??0bdStructBufferDeserializer@@QEAA@XZ(this);
}

/*
==============
bdStructBufferDeserializer::readObjectBegin
==============
*/

bool __fastcall bdStructBufferDeserializer::readObjectBegin(bdStructBufferDeserializer *this, const unsigned int tag)
{
  return ?readObjectBegin@bdStructBufferDeserializer@@QEAA_NI@Z(this, tag);
}

/*
==============
bdStructBufferDeserializer::readUntilTag
==============
*/

bdStructBufferDeserializer::bdReadResult __fastcall bdStructBufferDeserializer::readUntilTag(bdStructBufferDeserializer *this, unsigned int tag, unsigned int tagType)
{
  return ?readUntilTag@bdStructBufferDeserializer@@IEAA?AW4bdReadResult@1@II@Z(this, tag, tagType);
}

/*
==============
bdStructBufferDeserializer::bdStructBufferDeserializer
==============
*/

void __fastcall bdStructBufferDeserializer::bdStructBufferDeserializer(bdStructBufferDeserializer *this, bdReference<bdByteBuffer> buffer, unsigned int available, unsigned int nestedDepth)
{
  ??0bdStructBufferDeserializer@@QEAA@V?$bdReference@VbdByteBuffer@@@@II@Z(this, buffer, available, nestedDepth);
}

/*
==============
bdStructBufferDeserializer::prepare
==============
*/

bool __fastcall bdStructBufferDeserializer::prepare(bdStructBufferDeserializer *this, bdReference<bdByteBuffer> buffer, unsigned int available, unsigned int nestedDepth)
{
  return ?prepare@bdStructBufferDeserializer@@IEAA_NV?$bdReference@VbdByteBuffer@@@@II@Z(this, buffer, available, nestedDepth);
}

/*
==============
bdStructBufferDeserializer::read
==============
*/

bdStructBufferDeserializer::bdReadResult __fastcall bdStructBufferDeserializer::read(bdStructBufferDeserializer *this, const unsigned int tag, __int64 *value)
{
  return ?read@bdStructBufferDeserializer@@IEAA?AW4bdReadResult@1@IAEA_J@Z(this, tag, value);
}

/*
==============
bdStructBufferDeserializer::getLastReadResult
==============
*/

bdStructBufferDeserializer::bdReadResult __fastcall bdStructBufferDeserializer::getLastReadResult(bdStructBufferDeserializer *this)
{
  return ?getLastReadResult@bdStructBufferDeserializer@@QEAA?AW4bdReadResult@1@XZ(this);
}

/*
==============
bdStructBufferDeserializer::readUInt16
==============
*/

bool __fastcall bdStructBufferDeserializer::readUInt16(bdStructBufferDeserializer *this, const unsigned int tag, unsigned __int16 *value)
{
  return ?readUInt16@bdStructBufferDeserializer@@QEAA_NIAEAG@Z(this, tag, value);
}

/*
==============
bdStructBufferDeserializer::readInt16
==============
*/

bool __fastcall bdStructBufferDeserializer::readInt16(bdStructBufferDeserializer *this, const unsigned int tag, __int16 *value)
{
  return ?readInt16@bdStructBufferDeserializer@@QEAA_NIAEAF@Z(this, tag, value);
}

/*
==============
bdStructBufferDeserializer::readInt32
==============
*/

bool __fastcall bdStructBufferDeserializer::readInt32(bdStructBufferDeserializer *this, const unsigned int tag, int *value)
{
  return ?readInt32@bdStructBufferDeserializer@@QEAA_NIAEAH@Z(this, tag, value);
}

/*
==============
bdStructBufferDeserializer::readUInt16Array
==============
*/

bool __fastcall bdStructBufferDeserializer::readUInt16Array(bdStructBufferDeserializer *this, const unsigned int tag, bdFastArray<unsigned short> *values)
{
  return ?readUInt16Array@bdStructBufferDeserializer@@QEAA_NIAEAV?$bdFastArray@G@@@Z(this, tag, values);
}

/*
==============
bdStructBufferDeserializer::readOptionalUInt64
==============
*/

bool __fastcall bdStructBufferDeserializer::readOptionalUInt64(bdStructBufferDeserializer *this, const unsigned int tag, bdStructOptionalObject<unsigned __int64> *object)
{
  return ?readOptionalUInt64@bdStructBufferDeserializer@@QEAA_NIAEAV?$bdStructOptionalObject@_K@@@Z(this, tag, object);
}

/*
==============
bdStructBufferDeserializer::readString
==============
*/

bool __fastcall bdStructBufferDeserializer::readString(bdStructBufferDeserializer *this, const unsigned int tag, char *const value, const unsigned int size)
{
  return ?readString@bdStructBufferDeserializer@@QEAA_NIQEADI@Z(this, tag, value, size);
}

/*
==============
bdStructBufferDeserializer::readBlob
==============
*/

bool __fastcall bdStructBufferDeserializer::readBlob(bdStructBufferDeserializer *this, const unsigned int tag, void *value, const unsigned int maxSize, unsigned int *readSize)
{
  return ?readBlob@bdStructBufferDeserializer@@QEAA_NIPEAXIAEAI@Z(this, tag, value, maxSize, readSize);
}

/*
==============
bdStructBufferDeserializer::readUInt64
==============
*/

bool __fastcall bdStructBufferDeserializer::readUInt64(bdStructBufferDeserializer *this, const unsigned int tag, unsigned __int64 *value)
{
  return ?readUInt64@bdStructBufferDeserializer@@QEAA_NIAEA_K@Z(this, tag, value);
}

/*
==============
bdStructBufferDeserializer::readInt64
==============
*/

bool __fastcall bdStructBufferDeserializer::readInt64(bdStructBufferDeserializer *this, const unsigned int tag, __int64 *value)
{
  return ?readInt64@bdStructBufferDeserializer@@QEAA_NIAEA_J@Z(this, tag, value);
}

/*
==============
bdStructBufferDeserializer::readByte8
==============
*/

bool __fastcall bdStructBufferDeserializer::readByte8(bdStructBufferDeserializer *this, const unsigned int tag, char *value)
{
  return ?readByte8@bdStructBufferDeserializer@@QEAA_NIAEAC@Z(this, tag, value);
}

/*
==============
bdStructBufferDeserializer::readObjectEnd
==============
*/

bool __fastcall bdStructBufferDeserializer::readObjectEnd(bdStructBufferDeserializer *this)
{
  return ?readObjectEnd@bdStructBufferDeserializer@@QEAA_NXZ(this);
}

/*
==============
bdStructBufferDeserializer::readUInt32
==============
*/

bool __fastcall bdStructBufferDeserializer::readUInt32(bdStructBufferDeserializer *this, const unsigned int tag, unsigned int *value)
{
  return ?readUInt32@bdStructBufferDeserializer@@QEAA_NIAEAI@Z(this, tag, value);
}

/*
==============
bdStructBufferDeserializer::read
==============
*/

bdStructBufferDeserializer::bdReadResult __fastcall bdStructBufferDeserializer::read(bdStructBufferDeserializer *this, const unsigned int tag, unsigned __int64 *value)
{
  return ?read@bdStructBufferDeserializer@@IEAA?AW4bdReadResult@1@IAEA_K@Z(this, tag, value);
}

/*
==============
bdStructBufferDeserializer::bdStructBufferDeserializer
==============
*/
void bdStructBufferDeserializer::bdStructBufferDeserializer(bdStructBufferDeserializer *this, bdReference<bdByteBuffer> buffer, unsigned int available, unsigned int nestedDepth)
{
  bdByteBuffer *v8; 
  bdReference<bdByteBuffer> buffera; 
  __int64 v10; 

  v10 = -2i64;
  *(_QWORD *)&this->m_nextTag = 0i64;
  this->m_nestedDepth = nestedDepth;
  this->m_nestedObjectCount = 0;
  bdStructSerializationInputStream::bdStructSerializationInputStream(&this->m_stream);
  v8 = (bdByteBuffer *)buffer.m_ptr->__vftable;
  buffera.m_ptr = v8;
  if ( v8 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v8->m_refCount, 1u);
  bdStructBufferDeserializer::prepare(this, (bdReference<bdByteBuffer>)&buffera, available, nestedDepth);
  if ( buffer.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->allocateBuffer, 0xFFFFFFFF) == 1 )
  {
    if ( buffer.m_ptr->__vftable )
      (*(void (__fastcall **)(bdByteBuffer_vtbl *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr->__vftable, 1i64);
    buffer.m_ptr->__vftable = NULL;
  }
}

/*
==============
bdStructBufferDeserializer::bdStructBufferDeserializer
==============
*/
void bdStructBufferDeserializer::bdStructBufferDeserializer(bdStructBufferDeserializer *this)
{
  bdReference<bdByteBuffer> buffer; 

  *(_QWORD *)&this->m_nextTag = 0i64;
  this->m_nestedDepth = 0;
  this->m_nestedObjectCount = 0;
  bdStructSerializationInputStream::bdStructSerializationInputStream(&this->m_stream);
  buffer.m_ptr = NULL;
  bdStructBufferDeserializer::prepare(this, (bdReference<bdByteBuffer>)&buffer, 0, 0);
}

/*
==============
bdStructBufferDeserializer::~bdStructBufferDeserializer
==============
*/
void bdStructBufferDeserializer::~bdStructBufferDeserializer(bdStructBufferDeserializer *this)
{
  unsigned int m_bufferSize; 
  bdStructSerializationInputStream *p_m_stream; 

  m_bufferSize = this->m_stream.m_bufferSize;
  p_m_stream = &this->m_stream;
  if ( m_bufferSize )
    bdStructSerializationInputStream::read(&this->m_stream, NULL, m_bufferSize);
  bdStructSerializationInputStream::~bdStructSerializationInputStream(p_m_stream);
}

/*
==============
bdStructBufferDeserializer::getLastReadResult
==============
*/
__int64 bdStructBufferDeserializer::getLastReadResult(bdStructBufferDeserializer *this)
{
  return (unsigned int)this->m_lastReadResult;
}

/*
==============
bdStructBufferDeserializer::getRemainingReadSize
==============
*/
__int64 bdStructBufferDeserializer::getRemainingReadSize(bdStructBufferDeserializer *this)
{
  return this->m_stream.m_bufferSize;
}

/*
==============
bdStructBufferDeserializer::peekCurrentTag
==============
*/
char bdStructBufferDeserializer::peekCurrentTag(bdStructBufferDeserializer *this, unsigned int *tag)
{
  unsigned int m_nextTag; 
  bdProtobufHelper::eWireType wireType; 

  m_nextTag = this->m_nextTag;
  if ( this->m_nextTag )
    goto LABEL_4;
  if ( bdProtobufHelper::decodeTag(&this->m_stream, &this->m_nextTag, &wireType) )
  {
    this->m_nextType = wireType;
    m_nextTag = this->m_nextTag;
LABEL_4:
    *tag = m_nextTag;
    return 1;
  }
  return 0;
}

/*
==============
bdStructBufferDeserializer::prepare
==============
*/
_BOOL8 bdStructBufferDeserializer::prepare(bdStructBufferDeserializer *this, bdReference<bdByteBuffer> buffer, unsigned int available, unsigned int nestedDepth)
{
  bdStructSerializationInputStream *p_m_stream; 
  bdByteBuffer *v6; 
  bool v7; 
  bdReference<bdByteBuffer> buffera; 
  bdByteBuffer *m_ptr; 

  m_ptr = buffer.m_ptr;
  *(_QWORD *)&this->m_nextTag = 0i64;
  this->m_nestedDepth = nestedDepth;
  this->m_lastReadResult = BD_READ_SUCCESS;
  p_m_stream = &this->m_stream;
  v6 = (bdByteBuffer *)buffer.m_ptr->__vftable;
  buffera.m_ptr = v6;
  if ( v6 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v6->m_refCount, 1u);
  v7 = bdStructSerializationInputStream::prepare(p_m_stream, (bdReference<bdByteBuffer>)&buffera, available);
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
bdStructBufferDeserializer::read
==============
*/
bdStructBufferDeserializer::bdReadResult bdStructBufferDeserializer::read(bdStructBufferDeserializer *this, const unsigned int tag, __int64 *value)
{
  bdStructBufferDeserializer::bdReadResult result; 
  bdStructBufferDeserializer::bdReadResult v6; 

  result = bdStructBufferDeserializer::readUntilTag(this, tag, 0);
  v6 = result;
  if ( result == BD_READ_SUCCESS )
  {
    if ( !bdProtobufHelper::decodeVarInt(&this->m_stream, value) )
      return 2;
    return v6;
  }
  return result;
}

/*
==============
bdStructBufferDeserializer::read
==============
*/
bdStructBufferDeserializer::bdReadResult bdStructBufferDeserializer::read(bdStructBufferDeserializer *this, const unsigned int tag, unsigned __int64 *value)
{
  bdStructBufferDeserializer::bdReadResult result; 
  bdStructBufferDeserializer::bdReadResult v6; 

  result = bdStructBufferDeserializer::readUntilTag(this, tag, 0);
  v6 = result;
  if ( result == BD_READ_SUCCESS )
  {
    if ( !bdProtobufHelper::decodeVarInt(&this->m_stream, value) )
      return 2;
    return v6;
  }
  return result;
}

/*
==============
bdStructBufferDeserializer::readBlob
==============
*/
bool bdStructBufferDeserializer::readBlob(bdStructBufferDeserializer *this, const unsigned int tag, void *value, const unsigned int maxSize, unsigned int *readSize)
{
  bdStructBufferDeserializer::bdReadResult UntilTag; 
  unsigned int len; 

  UntilTag = bdStructBufferDeserializer::readUntilTag(this, tag, 2u);
  if ( UntilTag == BD_READ_SUCCESS )
  {
    len = maxSize;
    if ( bdProtobufHelper::decodeString(&this->m_stream, value, &len) )
      *readSize = len;
    else
      UntilTag = BD_READ_FAILED_STREAM_ERROR;
  }
  this->m_lastReadResult = UntilTag;
  return (unsigned int)UntilTag <= BD_READ_SUCCESS_TAG_NOT_FOUND;
}

/*
==============
bdStructBufferDeserializer::readBlobPointer
==============
*/
bool bdStructBufferDeserializer::readBlobPointer(bdStructBufferDeserializer *this, const unsigned int tag, const unsigned __int8 **blob, const unsigned int maxSize, unsigned int *readSize)
{
  bdStructBufferDeserializer::bdReadResult UntilTag; 
  unsigned int len; 

  UntilTag = bdStructBufferDeserializer::readUntilTag(this, tag, 2u);
  if ( UntilTag == BD_READ_SUCCESS )
  {
    len = maxSize;
    if ( bdProtobufHelper::decodeStringPointer(&this->m_stream, blob, &len) )
      *readSize = len;
    else
      UntilTag = BD_READ_FAILED_STREAM_ERROR;
  }
  this->m_lastReadResult = UntilTag;
  return (unsigned int)UntilTag <= BD_READ_SUCCESS_TAG_NOT_FOUND;
}

/*
==============
bdStructBufferDeserializer::readBool
==============
*/
bool bdStructBufferDeserializer::readBool(bdStructBufferDeserializer *this, const unsigned int tag, bool *value)
{
  bdStructBufferDeserializer::bdReadResult UntilTag; 
  unsigned __int64 valuea; 

  UntilTag = bdStructBufferDeserializer::readUntilTag(this, tag, 0);
  if ( UntilTag == BD_READ_SUCCESS )
  {
    if ( bdProtobufHelper::decodeVarInt(&this->m_stream, &valuea) )
      *value = valuea != 0;
    else
      UntilTag = BD_READ_FAILED_STREAM_ERROR;
  }
  this->m_lastReadResult = UntilTag;
  return (unsigned int)UntilTag <= BD_READ_SUCCESS_TAG_NOT_FOUND;
}

/*
==============
bdStructBufferDeserializer::readByte8
==============
*/
bool bdStructBufferDeserializer::readByte8(bdStructBufferDeserializer *this, const unsigned int tag, char *value)
{
  bdStructBufferDeserializer::bdReadResult UntilTag; 
  __int64 valuea; 

  UntilTag = bdStructBufferDeserializer::readUntilTag(this, tag, 0);
  if ( UntilTag == BD_READ_SUCCESS && !bdProtobufHelper::decodeVarInt(&this->m_stream, &valuea) )
    UntilTag = BD_READ_FAILED_STREAM_ERROR;
  if ( UntilTag == BD_READ_SUCCESS )
  {
    if ( (unsigned __int64)(valuea + 128) > 0xFF )
    {
      bdLogMessage(BD_LOG_WARNING, "warn/", "lobby/common/structbufferdeserializer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructbufferdeserializer.cpp", "bdStructBufferDeserializer::readByte8", 0xA7u, "Value out of Range for bdByte8");
      UntilTag = BD_READ_FAILED_DATA_INTEGRITY;
    }
    else
    {
      *value = valuea;
    }
  }
  this->m_lastReadResult = UntilTag;
  return (unsigned int)UntilTag <= BD_READ_SUCCESS_TAG_NOT_FOUND;
}

/*
==============
bdStructBufferDeserializer::readFloat32
==============
*/
bool bdStructBufferDeserializer::readFloat32(bdStructBufferDeserializer *this, const unsigned int tag, float *value)
{
  bdStructBufferDeserializer::bdReadResult UntilTag; 

  UntilTag = bdStructBufferDeserializer::readUntilTag(this, tag, 5u);
  if ( this->m_lastReadResult == BD_READ_SUCCESS && !bdProtobufHelper::decode32bits(&this->m_stream, value) )
    UntilTag = BD_READ_FAILED_STREAM_ERROR;
  this->m_lastReadResult = UntilTag;
  return (unsigned int)UntilTag <= BD_READ_SUCCESS_TAG_NOT_FOUND;
}

/*
==============
bdStructBufferDeserializer::readFloat64
==============
*/
bool bdStructBufferDeserializer::readFloat64(bdStructBufferDeserializer *this, const unsigned int tag, long double *value)
{
  bdStructBufferDeserializer::bdReadResult UntilTag; 

  UntilTag = bdStructBufferDeserializer::readUntilTag(this, tag, 1u);
  if ( UntilTag == BD_READ_SUCCESS && !bdProtobufHelper::decode64bits(&this->m_stream, value) )
    UntilTag = BD_READ_FAILED_STREAM_ERROR;
  this->m_lastReadResult = UntilTag;
  return (unsigned int)UntilTag <= BD_READ_SUCCESS_TAG_NOT_FOUND;
}

/*
==============
bdStructBufferDeserializer::readInt16
==============
*/
bool bdStructBufferDeserializer::readInt16(bdStructBufferDeserializer *this, const unsigned int tag, __int16 *value)
{
  bdStructBufferDeserializer::bdReadResult UntilTag; 
  __int64 valuea; 

  UntilTag = bdStructBufferDeserializer::readUntilTag(this, tag, 0);
  if ( UntilTag == BD_READ_SUCCESS && !bdProtobufHelper::decodeVarInt(&this->m_stream, &valuea) )
    UntilTag = BD_READ_FAILED_STREAM_ERROR;
  if ( UntilTag == BD_READ_SUCCESS )
  {
    if ( (unsigned __int64)(valuea + 0x8000) > 0xFFFF )
    {
      bdLogMessage(BD_LOG_WARNING, "warn/", "lobby/common/structbufferdeserializer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructbufferdeserializer.cpp", "bdStructBufferDeserializer::readInt16", 0xCDu, "Value out of Range for bdInt16");
      UntilTag = BD_READ_FAILED_DATA_INTEGRITY;
    }
    else
    {
      *value = valuea;
    }
  }
  this->m_lastReadResult = UntilTag;
  return (unsigned int)UntilTag <= BD_READ_SUCCESS_TAG_NOT_FOUND;
}

/*
==============
bdStructBufferDeserializer::readInt32
==============
*/
bool bdStructBufferDeserializer::readInt32(bdStructBufferDeserializer *this, const unsigned int tag, int *value)
{
  bdStructBufferDeserializer::bdReadResult UntilTag; 
  __int64 valuea; 

  UntilTag = bdStructBufferDeserializer::readUntilTag(this, tag, 0);
  if ( UntilTag == BD_READ_SUCCESS && !bdProtobufHelper::decodeVarInt(&this->m_stream, &valuea) )
    UntilTag = BD_READ_FAILED_STREAM_ERROR;
  if ( UntilTag == BD_READ_SUCCESS )
  {
    if ( (unsigned __int64)(valuea + 0x80000000i64) > 0xFFFFFFFF )
    {
      bdLogMessage(BD_LOG_WARNING, "warn/", "lobby/common/structbufferdeserializer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructbufferdeserializer.cpp", "bdStructBufferDeserializer::readInt32", 0xF3u, "Value out of Range for bdInt32");
      UntilTag = BD_READ_FAILED_DATA_INTEGRITY;
    }
    else
    {
      *value = valuea;
    }
  }
  this->m_lastReadResult = UntilTag;
  return (unsigned int)UntilTag <= BD_READ_SUCCESS_TAG_NOT_FOUND;
}

/*
==============
bdStructBufferDeserializer::readInt64
==============
*/
bool bdStructBufferDeserializer::readInt64(bdStructBufferDeserializer *this, const unsigned int tag, __int64 *value)
{
  bdStructBufferDeserializer::bdReadResult UntilTag; 

  UntilTag = bdStructBufferDeserializer::readUntilTag(this, tag, 0);
  if ( UntilTag == BD_READ_SUCCESS && !bdProtobufHelper::decodeVarInt(&this->m_stream, value) )
    UntilTag = BD_READ_FAILED_STREAM_ERROR;
  this->m_lastReadResult = UntilTag;
  return (unsigned int)UntilTag <= BD_READ_SUCCESS_TAG_NOT_FOUND;
}

/*
==============
bdStructBufferDeserializer::readNextTag
==============
*/
bool bdStructBufferDeserializer::readNextTag(bdStructBufferDeserializer *this)
{
  bool result; 
  bdProtobufHelper::eWireType wireType; 

  result = bdProtobufHelper::decodeTag(&this->m_stream, &this->m_nextTag, &wireType);
  if ( result )
  {
    this->m_nextType = wireType;
    return 1;
  }
  return result;
}

/*
==============
bdStructBufferDeserializer::readObject
==============
*/
bool bdStructBufferDeserializer::readObject(bdStructBufferDeserializer *this, const unsigned int tag, bdStructBufferSerializable *object)
{
  bdStructBufferDeserializer::bdReadResult UntilTag; 
  unsigned int v6; 
  unsigned int v7; 
  bdByteBuffer *m_ptr; 
  bdByteBuffer *v9; 
  bdByteBuffer *v11; 
  bdByteBuffer *v12; 
  bdReference<bdByteBuffer> buffer; 
  unsigned __int64 value[5]; 
  __int64 v15; 
  unsigned int v16; 
  unsigned int v17; 
  int v18; 
  bdStructSerializationInputStream v19; 

  value[1] = -2i64;
  UntilTag = bdStructBufferDeserializer::readUntilTag(this, tag, 2u);
  if ( UntilTag == BD_READ_SUCCESS )
  {
    value[0] = 0i64;
    if ( bdProtobufHelper::decodeVarInt(&this->m_stream, value) )
    {
      v6 = value[0];
      if ( value[0] <= 0xFFFFFFFF )
      {
        v7 = this->m_nestedDepth + 1;
        m_ptr = this->m_stream.m_buffer.m_ptr;
        v12 = m_ptr;
        if ( m_ptr )
          _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
        value[2] = (unsigned __int64)&v12;
        v15 = 0i64;
        v16 = v7;
        v18 = 0;
        bdStructSerializationInputStream::bdStructSerializationInputStream(&v19);
        v9 = v12;
        v11 = v12;
        if ( v12 )
        {
          _InterlockedExchangeAdd((volatile signed __int32 *)&v12->m_refCount, 1u);
          v9 = v11;
        }
        value[3] = (unsigned __int64)&v11;
        v15 = 0i64;
        v16 = v7;
        v17 = 0;
        buffer.m_ptr = v9;
        if ( v9 )
          _InterlockedExchangeAdd((volatile signed __int32 *)&v9->m_refCount, 1u);
        bdStructSerializationInputStream::prepare(&v19, (bdReference<bdByteBuffer>)&buffer, v6);
        if ( v11 && _InterlockedExchangeAdd((volatile signed __int32 *)&v11->m_refCount, 0xFFFFFFFF) == 1 )
        {
          if ( v11 )
            ((void (__fastcall *)(bdByteBuffer *, __int64))v11->~bdReferencable)(v11, 1i64);
          v11 = NULL;
        }
        if ( v12 && _InterlockedExchangeAdd((volatile signed __int32 *)&v12->m_refCount, 0xFFFFFFFF) == 1 )
        {
          if ( v12 )
            ((void (__fastcall *)(bdByteBuffer *, __int64))v12->~bdReferencable)(v12, 1i64);
          v12 = NULL;
        }
        if ( object->deserialize(object, (bdStructBufferDeserializer *)&v15) )
        {
          bdStructSerializationInputStream::read(&this->m_stream, v6);
        }
        else
        {
          UntilTag = v17;
          if ( v17 <= 1 )
            UntilTag = BD_READ_FAILED_DATA_INTEGRITY;
        }
        if ( v19.m_bufferSize )
          bdStructSerializationInputStream::read(&v19, NULL, v19.m_bufferSize);
        bdStructSerializationInputStream::~bdStructSerializationInputStream(&v19);
      }
      else
      {
        bdProtobufHelper::skipBytes(&this->m_stream, value[0]);
        UntilTag = BD_READ_FAILED_DATA_INTEGRITY;
      }
    }
    else
    {
      UntilTag = BD_READ_FAILED_STREAM_ERROR;
    }
  }
  this->m_lastReadResult = UntilTag;
  return (unsigned int)UntilTag <= BD_READ_SUCCESS_TAG_NOT_FOUND;
}

/*
==============
bdStructBufferDeserializer::readObjectArray
==============
*/
bool bdStructBufferDeserializer::readObjectArray(bdStructBufferDeserializer *this, const unsigned int tag, bdStructBufferSerializable *const objects, const unsigned int objectsLength, unsigned int *readCount)
{
  bool v9; 
  char v10; 

  bdHandleAssert(objects != NULL, "objects != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructbufferdeserializer.cpp", "bdStructBufferDeserializer::readObjectArray", 0x1DFu, "objects array cannot be NULL");
  bdHandleAssert(objectsLength != 0, "objectsLength > 0", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructbufferdeserializer.cpp", "bdStructBufferDeserializer::readObjectArray", 0x1E0u, "there must be at least one object to deserialize into");
  v9 = objects && objectsLength;
  v10 = 0;
  *readCount = 0;
  if ( !v9 )
    goto LABEL_14;
  while ( *readCount < objectsLength )
  {
    if ( v10 )
      return v9 && v10;
    if ( !bdStructBufferDeserializer::readObject(this, tag, &objects[*readCount]) )
    {
      v9 = 0;
      goto LABEL_14;
    }
    v9 = 1;
    if ( this->m_lastReadResult == BD_READ_SUCCESS_TAG_NOT_FOUND )
      v10 = 1;
    else
      ++*readCount;
  }
  if ( !v10 )
  {
LABEL_14:
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "lobby/common/structbufferdeserializer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructbufferdeserializer.cpp", "bdStructBufferDeserializer::readObjectArray", 0x1F9u, "Too few elements to deserialize into. Buffer contains more than objectsLength [%u] objects.", objectsLength);
    this->m_lastReadResult = BD_READ_FAILED_STREAM_ERROR;
  }
  return v9 && v10;
}

/*
==============
bdStructBufferDeserializer::readObjectBegin
==============
*/
bool bdStructBufferDeserializer::readObjectBegin(bdStructBufferDeserializer *this, const unsigned int tag)
{
  bdStructBufferDeserializer::bdReadResult UntilTag; 
  unsigned __int64 m_bufferSize; 
  __int64 m_nestedObjectCount; 
  unsigned __int64 value; 

  UntilTag = bdStructBufferDeserializer::readUntilTag(this, tag, 2u);
  if ( UntilTag == BD_READ_SUCCESS )
  {
    value = 0i64;
    if ( bdProtobufHelper::decodeVarInt(&this->m_stream, &value) )
    {
      m_bufferSize = this->m_stream.m_bufferSize;
      if ( value <= m_bufferSize )
      {
        m_nestedObjectCount = this->m_nestedObjectCount;
        if ( (unsigned int)m_nestedObjectCount < 0x10 )
        {
          this->m_nestedObjectInfo[m_nestedObjectCount].m_remaining = m_bufferSize;
          this->m_nestedObjectInfo[this->m_nestedObjectCount++].m_readSize = value;
        }
        else
        {
          UntilTag = BD_READ_OBJECT_BEGIN_END_FAILURE;
          bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructbufferdeserializer.cpp", "bdStructBufferDeserializer::readObjectBegin", 0x1AFu, "too many nested objects");
        }
      }
      else
      {
        bdProtobufHelper::skipBytes(&this->m_stream, value);
        UntilTag = BD_READ_FAILED_DATA_INTEGRITY;
      }
    }
    else
    {
      UntilTag = BD_READ_FAILED_STREAM_ERROR;
    }
  }
  this->m_lastReadResult = UntilTag;
  return (unsigned int)UntilTag <= BD_READ_SUCCESS_TAG_NOT_FOUND;
}

/*
==============
bdStructBufferDeserializer::readObjectEnd
==============
*/
bool bdStructBufferDeserializer::readObjectEnd(bdStructBufferDeserializer *this)
{
  unsigned int m_nestedObjectCount; 
  bdStructBufferDeserializer::bdReadResult m_lastReadResult; 
  unsigned int m_bufferSize; 
  __int64 v5; 
  unsigned int m_readSize; 
  unsigned int line; 
  char *format; 

  m_nestedObjectCount = this->m_nestedObjectCount;
  m_lastReadResult = this->m_lastReadResult;
  if ( !m_nestedObjectCount )
  {
    format = "readObjectEnd without a matching readObjectBegin";
    line = 458;
LABEL_6:
    m_lastReadResult = BD_READ_OBJECT_BEGIN_END_FAILURE;
    bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructbufferdeserializer.cpp", "bdStructBufferDeserializer::readObjectEnd", line, format);
    goto LABEL_7;
  }
  m_bufferSize = this->m_stream.m_bufferSize;
  v5 = m_nestedObjectCount - 1;
  this->m_nestedObjectCount = v5;
  m_readSize = this->m_nestedObjectInfo[v5].m_readSize;
  if ( this->m_nestedObjectInfo[v5].m_remaining - m_bufferSize > m_readSize )
  {
    format = "read wrong amount of bytes.";
    line = 470;
    goto LABEL_6;
  }
  bdStructSerializationInputStream::read(&this->m_stream, NULL, m_bufferSize + m_readSize - this->m_nestedObjectInfo[v5].m_remaining);
LABEL_7:
  this->m_lastReadResult = m_lastReadResult;
  return (unsigned int)m_lastReadResult <= BD_READ_SUCCESS_TAG_NOT_FOUND;
}

/*
==============
bdStructBufferDeserializer::readOptionalUInt64
==============
*/
bool bdStructBufferDeserializer::readOptionalUInt64(bdStructBufferDeserializer *this, const unsigned int tag, bdStructOptionalObject<unsigned __int64> *object)
{
  bdStructBufferDeserializer::bdReadResult UntilTag; 
  bool result; 
  unsigned __int64 value; 

  object->m_hasValue = 0;
  UntilTag = bdStructBufferDeserializer::readUntilTag(this, tag, 0);
  if ( UntilTag == BD_READ_SUCCESS && !bdProtobufHelper::decodeVarInt(&this->m_stream, &value) )
    UntilTag = BD_READ_FAILED_STREAM_ERROR;
  this->m_lastReadResult = UntilTag;
  if ( (unsigned int)UntilTag > BD_READ_SUCCESS_TAG_NOT_FOUND )
    return 0;
  result = 1;
  if ( UntilTag != BD_READ_SUCCESS_TAG_NOT_FOUND )
  {
    object->m_value = value;
    object->m_hasValue = 1;
  }
  return result;
}

/*
==============
bdStructBufferDeserializer::readString
==============
*/
char bdStructBufferDeserializer::readString(bdStructBufferDeserializer *this, const unsigned int tag, char *const value, const unsigned int size)
{
  unsigned int v5; 
  bdStructBufferDeserializer::bdReadResult UntilTag; 
  unsigned int len; 

  v5 = 0;
  UntilTag = bdStructBufferDeserializer::readUntilTag(this, tag, 2u);
  if ( UntilTag == BD_READ_SUCCESS )
  {
    len = size;
    if ( bdProtobufHelper::decodeString(&this->m_stream, value, &len) )
      v5 = len;
    else
      UntilTag = BD_READ_FAILED_STREAM_ERROR;
  }
  this->m_lastReadResult = UntilTag;
  if ( (unsigned int)UntilTag > BD_READ_SUCCESS_TAG_NOT_FOUND )
    return 0;
  if ( UntilTag == BD_READ_SUCCESS && size )
  {
    if ( v5 < size )
      value[v5] = 0;
    else
      value[size - 1] = 0;
  }
  return 1;
}

/*
==============
bdStructBufferDeserializer::readUByte8
==============
*/
bool bdStructBufferDeserializer::readUByte8(bdStructBufferDeserializer *this, const unsigned int tag, unsigned __int8 *value)
{
  bdStructBufferDeserializer::bdReadResult UntilTag; 
  unsigned __int64 valuea; 

  UntilTag = bdStructBufferDeserializer::readUntilTag(this, tag, 0);
  if ( UntilTag == BD_READ_SUCCESS && !bdProtobufHelper::decodeVarInt(&this->m_stream, &valuea) )
    UntilTag = BD_READ_FAILED_STREAM_ERROR;
  if ( UntilTag == BD_READ_SUCCESS )
  {
    if ( valuea <= 0xFF )
    {
      *value = valuea;
    }
    else
    {
      bdLogMessage(BD_LOG_WARNING, "warn/", "lobby/common/structbufferdeserializer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructbufferdeserializer.cpp", "bdStructBufferDeserializer::readUByte8", 0xBAu, "Value out of Range for bdUByte8");
      UntilTag = BD_READ_FAILED_DATA_INTEGRITY;
    }
  }
  this->m_lastReadResult = UntilTag;
  return (unsigned int)UntilTag <= BD_READ_SUCCESS_TAG_NOT_FOUND;
}

/*
==============
bdStructBufferDeserializer::readUInt16
==============
*/
bool bdStructBufferDeserializer::readUInt16(bdStructBufferDeserializer *this, const unsigned int tag, unsigned __int16 *value)
{
  bdStructBufferDeserializer::bdReadResult UntilTag; 
  unsigned __int64 valuea; 

  UntilTag = bdStructBufferDeserializer::readUntilTag(this, tag, 0);
  if ( UntilTag == BD_READ_SUCCESS && !bdProtobufHelper::decodeVarInt(&this->m_stream, &valuea) )
    UntilTag = BD_READ_FAILED_STREAM_ERROR;
  if ( UntilTag == BD_READ_SUCCESS )
  {
    if ( valuea <= 0xFFFF )
    {
      *value = valuea;
    }
    else
    {
      bdLogMessage(BD_LOG_WARNING, "warn/", "lobby/common/structbufferdeserializer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructbufferdeserializer.cpp", "bdStructBufferDeserializer::readUInt16", 0xE0u, "Value out of Range for bdUInt16");
      UntilTag = BD_READ_FAILED_DATA_INTEGRITY;
    }
  }
  this->m_lastReadResult = UntilTag;
  return (unsigned int)UntilTag <= BD_READ_SUCCESS_TAG_NOT_FOUND;
}

/*
==============
bdStructBufferDeserializer::readUInt16Array
==============
*/
char bdStructBufferDeserializer::readUInt16Array(bdStructBufferDeserializer *this, const unsigned int tag, bdFastArray<unsigned short> *values)
{
  char v6; 
  unsigned __int16 v7; 
  bdStructBufferDeserializer::bdReadResult UntilTag; 
  unsigned int m_capacity; 
  unsigned int v10; 
  void *v11; 
  unsigned int v12; 
  unsigned int m_size; 
  __int64 v14; 
  unsigned __int64 value; 

  bdMemory::deallocate(values->m_data);
  values->m_data = NULL;
  v6 = 0;
  *(_QWORD *)&values->m_capacity = 0i64;
  while ( !v6 )
  {
    v7 = 0;
    UntilTag = bdStructBufferDeserializer::readUntilTag(this, tag, 0);
    if ( UntilTag == BD_READ_SUCCESS && !bdProtobufHelper::decodeVarInt(&this->m_stream, &value) )
      UntilTag = BD_READ_FAILED_STREAM_ERROR;
    if ( UntilTag == BD_READ_SUCCESS )
    {
      if ( value <= 0xFFFF )
      {
        v7 = value;
      }
      else
      {
        bdLogMessage(BD_LOG_WARNING, "warn/", "lobby/common/structbufferdeserializer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructbufferdeserializer.cpp", "bdStructBufferDeserializer::readUInt16", 0xE0u, "Value out of Range for bdUInt16");
        UntilTag = BD_READ_FAILED_DATA_INTEGRITY;
      }
    }
    this->m_lastReadResult = UntilTag;
    if ( (unsigned int)UntilTag > BD_READ_SUCCESS_TAG_NOT_FOUND )
      return 0;
    if ( UntilTag == BD_READ_SUCCESS_TAG_NOT_FOUND )
    {
      v6 = 1;
    }
    else
    {
      m_capacity = values->m_capacity;
      if ( values->m_size == m_capacity )
      {
        v10 = values->m_capacity;
        v11 = NULL;
        if ( !m_capacity )
          v10 = 1;
        v12 = m_capacity + v10;
        if ( m_capacity + v10 )
        {
          v11 = bdMemory::allocate(2i64 * v12);
          m_size = values->m_size;
          if ( m_size )
            memcpy_0(v11, values->m_data, 2i64 * m_size);
        }
        bdMemory::deallocate(values->m_data);
        v14 = values->m_size;
        values->m_capacity = v12;
        values->m_data = (unsigned __int16 *)v11;
        *((_WORD *)v11 + v14) = v7;
        ++values->m_size;
      }
      else
      {
        values->m_data[values->m_size++] = v7;
      }
    }
  }
  return 1;
}

/*
==============
bdStructBufferDeserializer::readUInt32
==============
*/
bool bdStructBufferDeserializer::readUInt32(bdStructBufferDeserializer *this, const unsigned int tag, unsigned int *value)
{
  bdStructBufferDeserializer::bdReadResult UntilTag; 
  unsigned __int64 valuea; 

  UntilTag = bdStructBufferDeserializer::readUntilTag(this, tag, 0);
  if ( UntilTag == BD_READ_SUCCESS && !bdProtobufHelper::decodeVarInt(&this->m_stream, &valuea) )
    UntilTag = BD_READ_FAILED_STREAM_ERROR;
  if ( UntilTag == BD_READ_SUCCESS )
  {
    if ( valuea <= 0xFFFFFFFF )
    {
      *value = valuea;
    }
    else
    {
      bdLogMessage(BD_LOG_WARNING, "warn/", "lobby/common/structbufferdeserializer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructbufferdeserializer.cpp", "bdStructBufferDeserializer::readUInt32", 0x106u, "Value out of Range for bdUInt32");
      UntilTag = BD_READ_FAILED_DATA_INTEGRITY;
    }
  }
  this->m_lastReadResult = UntilTag;
  return (unsigned int)UntilTag <= BD_READ_SUCCESS_TAG_NOT_FOUND;
}

/*
==============
bdStructBufferDeserializer::readUInt64
==============
*/
bool bdStructBufferDeserializer::readUInt64(bdStructBufferDeserializer *this, const unsigned int tag, unsigned __int64 *value)
{
  bdStructBufferDeserializer::bdReadResult UntilTag; 

  UntilTag = bdStructBufferDeserializer::readUntilTag(this, tag, 0);
  if ( UntilTag == BD_READ_SUCCESS && !bdProtobufHelper::decodeVarInt(&this->m_stream, value) )
    UntilTag = BD_READ_FAILED_STREAM_ERROR;
  this->m_lastReadResult = UntilTag;
  return (unsigned int)UntilTag <= BD_READ_SUCCESS_TAG_NOT_FOUND;
}

/*
==============
bdStructBufferDeserializer::readUInt64Array
==============
*/
char bdStructBufferDeserializer::readUInt64Array(bdStructBufferDeserializer *this, const unsigned int tag, bdFastArray<unsigned __int64> *values)
{
  char v6; 
  bdStructBufferDeserializer::bdReadResult UntilTag; 
  unsigned int m_capacity; 
  unsigned int v9; 
  unsigned int v11; 
  unsigned int m_size; 
  unsigned __int64 value; 

  bdMemory::deallocate(values->m_data);
  values->m_data = NULL;
  v6 = 0;
  *(_QWORD *)&values->m_capacity = 0i64;
  while ( !v6 )
  {
    value = 0i64;
    UntilTag = bdStructBufferDeserializer::readUntilTag(this, tag, 0);
    if ( UntilTag == BD_READ_SUCCESS && !bdProtobufHelper::decodeVarInt(&this->m_stream, &value) )
      UntilTag = BD_READ_FAILED_STREAM_ERROR;
    this->m_lastReadResult = UntilTag;
    if ( (unsigned int)UntilTag > BD_READ_SUCCESS_TAG_NOT_FOUND )
      return 0;
    if ( UntilTag == BD_READ_SUCCESS_TAG_NOT_FOUND )
    {
      v6 = 1;
    }
    else
    {
      m_capacity = values->m_capacity;
      if ( values->m_size == m_capacity )
      {
        v9 = values->m_capacity;
        _RDI = NULL;
        if ( !m_capacity )
          v9 = 1;
        v11 = m_capacity + v9;
        if ( v11 )
        {
          _RDI = (unsigned __int64 *)bdMemory::allocate(8i64 * v11);
          m_size = values->m_size;
          if ( m_size )
            memcpy_0(_RDI, values->m_data, 8i64 * m_size);
        }
        bdMemory::deallocate(values->m_data);
        values->m_capacity = v11;
        values->m_data = _RDI;
      }
      else
      {
        _RDI = values->m_data;
      }
      _RAX = values->m_size;
      __asm
      {
        vmovsd  xmm0, [rsp+48h+value]
        vmovsd  qword ptr [rdi+rax*8], xmm0
      }
      ++values->m_size;
    }
  }
  return 1;
}

/*
==============
bdStructBufferDeserializer::readUntilTag
==============
*/
__int64 bdStructBufferDeserializer::readUntilTag(bdStructBufferDeserializer *this, unsigned int tag, unsigned int tagType)
{
  unsigned int m_nextTag; 
  unsigned int v7; 
  unsigned int v8; 
  unsigned int v10; 
  unsigned int m_nextType; 
  unsigned int v12; 
  bdProtobufHelper::eWireType wireType; 

  m_nextTag = this->m_nextTag;
  v7 = 1;
  if ( this->m_nextTag < tag )
  {
    v8 = this->m_nextTag;
    while ( 1 )
    {
      m_nextTag = v8;
      if ( v8 )
      {
        if ( !bdProtobufHelper::skip(&this->m_stream, (bdProtobufHelper::eWireType)this->m_nextType) )
          break;
        this->m_nextTag = 0;
        m_nextTag = 0;
      }
      if ( !this->m_stream.m_bufferSize )
        goto LABEL_11;
      if ( !bdProtobufHelper::decodeTag(&this->m_stream, &this->m_nextTag, &wireType) )
        break;
      this->m_nextType = wireType;
      m_nextTag = this->m_nextTag;
      v8 = this->m_nextTag;
      if ( this->m_nextTag >= tag )
        goto LABEL_11;
    }
    m_nextTag = this->m_nextTag;
    v7 = 2;
  }
LABEL_11:
  if ( m_nextTag != tag )
    return v7;
  if ( this->m_nextType == tagType )
  {
    this->m_nextTag = 0;
    return 0i64;
  }
  else
  {
    v12 = tagType;
    m_nextType = this->m_nextType;
    v10 = tag;
    bdLogMessage(BD_LOG_WARNING, "warn/", "lobby/common/structbufferdeserializer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructbufferdeserializer.cpp", "bdStructBufferDeserializer::readUntilTag", 0x67u, "Parsed Tag %d and required %d wiretype but got %d", v10, m_nextType, v12);
    return 3i64;
  }
}

/*
==============
bdStructBufferDeserializer::skipCurrentTag
==============
*/
bool bdStructBufferDeserializer::skipCurrentTag(bdStructBufferDeserializer *this)
{
  bool result; 

  if ( this->m_nextTag )
  {
    result = bdProtobufHelper::skip(&this->m_stream, (bdProtobufHelper::eWireType)this->m_nextType);
    if ( !result )
      return result;
    this->m_nextTag = 0;
  }
  return 1;
}

