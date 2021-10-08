/*
==============
bdDemonataPushMessage::getTransactionID
==============
*/

unsigned __int64 __fastcall bdDemonataPushMessage::getTransactionID(bdDemonataPushMessage *this)
{
  return ?getTransactionID@bdDemonataPushMessage@@QEBA_KXZ(this);
}

/*
==============
bdDemonataPushMessage::getSender
==============
*/

const char *__fastcall bdDemonataPushMessage::getSender(bdDemonataPushMessage *this)
{
  return ?getSender@bdDemonataPushMessage@@QEBAPEBDXZ(this);
}

/*
==============
bdDemonataPushMessage::getBodyAsJSON
==============
*/

bool __fastcall bdDemonataPushMessage::getBodyAsJSON(bdDemonataPushMessage *this, bdJSONDeserializer *deserializer)
{
  return ?getBodyAsJSON@bdDemonataPushMessage@@QEBA_NAEAVbdJSONDeserializer@@@Z(this, deserializer);
}

/*
==============
bdDemonataPushMessage::getSchema
==============
*/

const char *__fastcall bdDemonataPushMessage::getSchema(bdDemonataPushMessage *this)
{
  return ?getSchema@bdDemonataPushMessage@@QEBAPEBDXZ(this);
}

/*
==============
bdDemonataPushMessage::getBodyAsStructBuffer
==============
*/

bool __fastcall bdDemonataPushMessage::getBodyAsStructBuffer(bdDemonataPushMessage *this, bdStructBufferDeserializer *deserializer)
{
  return ?getBodyAsStructBuffer@bdDemonataPushMessage@@QEBA_NAEAVbdStructBufferDeserializer@@@Z(this, deserializer);
}

/*
==============
bdDemonataPushMessage::reset
==============
*/

void __fastcall bdDemonataPushMessage::reset(bdDemonataPushMessage *this)
{
  ?reset@bdDemonataPushMessage@@IEAAXXZ(this);
}

/*
==============
bdDemonataPushMessage::getContentType
==============
*/

const char *__fastcall bdDemonataPushMessage::getContentType(bdDemonataPushMessage *this)
{
  return ?getContentType@bdDemonataPushMessage@@QEBAPEBDXZ(this);
}

/*
==============
bdDemonataPushMessage::initFromBufferWithProtobuf
==============
*/

bool __fastcall bdDemonataPushMessage::initFromBufferWithProtobuf(bdDemonataPushMessage *this, bdReference<bdByteBuffer> buffer)
{
  return ?initFromBufferWithProtobuf@bdDemonataPushMessage@@IEAA_NV?$bdReference@VbdByteBuffer@@@@@Z(this, buffer);
}

/*
==============
bdDemonataPushMessage::initFromBuffer
==============
*/

bool __fastcall bdDemonataPushMessage::initFromBuffer(bdDemonataPushMessage *this, bdReference<bdByteBuffer> buffer)
{
  return ?initFromBuffer@bdDemonataPushMessage@@IEAA_NV?$bdReference@VbdByteBuffer@@@@@Z(this, buffer);
}

/*
==============
bdDemonataPushMessage::bdDemonataPushMessage
==============
*/

void __fastcall bdDemonataPushMessage::bdDemonataPushMessage(bdDemonataPushMessage *this)
{
  ??0bdDemonataPushMessage@@IEAA@XZ(this);
}

/*
==============
bdDemonataPushMessage::getBodyRaw
==============
*/

const void *__fastcall bdDemonataPushMessage::getBodyRaw(bdDemonataPushMessage *this)
{
  return ?getBodyRaw@bdDemonataPushMessage@@QEBAPEBXXZ(this);
}

/*
==============
bdDemonataPushMessage::hasBody
==============
*/

bool __fastcall bdDemonataPushMessage::hasBody(bdDemonataPushMessage *this)
{
  return ?hasBody@bdDemonataPushMessage@@QEBA_NXZ(this);
}

/*
==============
bdDemonataPushMessage::getContentLength
==============
*/

unsigned int __fastcall bdDemonataPushMessage::getContentLength(bdDemonataPushMessage *this)
{
  return ?getContentLength@bdDemonataPushMessage@@QEBAIXZ(this);
}

/*
==============
bdDemonataPushMessage::bdDemonataPushMessage
==============
*/
void bdDemonataPushMessage::bdDemonataPushMessage(bdDemonataPushMessage *this)
{
  memset_0(this, 0, 0x900ui64);
  this->m_transactionID = 0i64;
  this->m_hasBody = 0;
  this->m_body = NULL;
  this->m_contentLength = 0;
}

/*
==============
bdDemonataPushMessage::getBodyAsJSON
==============
*/
__int64 bdDemonataPushMessage::getBodyAsJSON(bdDemonataPushMessage *this, bdJSONDeserializer *deserializer)
{
  unsigned __int8 v4; 
  bool v5; 
  bdJSONDeserializer v8; 

  _RBP = deserializer;
  bdJSONDeserializer::bdJSONDeserializer(&v8);
  v4 = 1;
  if ( _strcmpi(this->m_mimeType, "application/json") )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdDemonataPushMessage", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bddemonatapushmessagecommon\\bddemonatapushmessage.cpp", "bdDemonataPushMessage::getBodyAsJSON", 0x9Eu, "Can't get body as JSON because the content type is %s.", this->m_mimeType);
  }
  else
  {
    if ( this->m_hasBody )
      goto LABEL_6;
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdDemonataPushMessage", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bddemonatapushmessagecommon\\bddemonatapushmessage.cpp", "bdDemonataPushMessage::getBodyAsJSON", 0xA4u, "Can't get body as JSON because the push message has no body.");
  }
  v4 = 0;
LABEL_6:
  v5 = bdJSONDeserializer::parse(&v8, (const char *)this->m_body);
  if ( v4 )
  {
    if ( v5 )
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rsp+78h+var_30.m_type]
        vmovups ymmword ptr [rbp+0], ymm0
      }
    }
    else
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdDemonataPushMessage", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bddemonatapushmessagecommon\\bddemonatapushmessage.cpp", "bdDemonataPushMessage::getBodyAsJSON", 0xABu, "Can't get body as JSON because body failed to parse as JSON.");
      v4 = 0;
    }
  }
  bdJSONDeserializer::~bdJSONDeserializer(&v8);
  return v4;
}

/*
==============
bdDemonataPushMessage::getBodyAsStructBuffer
==============
*/
char bdDemonataPushMessage::getBodyAsStructBuffer(bdDemonataPushMessage *this, bdStructBufferDeserializer *deserializer)
{
  char *m_mimeType; 
  bdByteBuffer *v6; 
  bdByteBuffer *v7; 
  size_t m_contentLength; 
  const unsigned __int8 *m_body; 
  unsigned __int8 *m_data; 
  unsigned int v11; 
  __int64 v12; 
  __int64 v13; 
  bdStructSerializationInputStream *p_m_stream; 
  bdByteBuffer *v15; 
  unsigned __int8 *v16; 
  bdReference<bdByteBuffer> buffer; 
  __int64 v18; 
  bdByteBuffer *v19; 
  bdStructBufferDeserializer v20; 

  v18 = -2i64;
  m_mimeType = this->m_mimeType;
  if ( _strcmpi(this->m_mimeType, "application/protobuf") )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdDemonataPushMessage", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bddemonatapushmessagecommon\\bddemonatapushmessage.cpp", "bdDemonataPushMessage::getBodyAsStructBuffer", 0xBDu, "Can't get body as struct buffer because the content type is %s.", m_mimeType);
    return 0;
  }
  else if ( this->m_hasBody )
  {
    v6 = (bdByteBuffer *)bdMemory::allocate(0x38ui64);
    v7 = v6;
    buffer.m_ptr = v6;
    if ( v6 )
    {
      m_contentLength = this->m_contentLength;
      m_body = this->m_body;
      v6->m_refCount.m_value._My_val = 0;
      v6->__vftable = (bdByteBuffer_vtbl *)&bdByteBuffer::`vftable';
      v6->m_size = m_contentLength;
      v6->m_data = NULL;
      *(_WORD *)&v6->m_typeChecked = 0;
      v6->m_allocatedData = 0;
      if ( m_body )
      {
        bdHandleAssert(1, "m_data == BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdbytebuffer.inl", "bdByteBuffer::init", 0x31u, "Buffer already allocated. init() called twice?");
        v7->m_size = m_contentLength;
        if ( (_DWORD)m_contentLength )
          v7->allocateBuffer(v7);
        m_data = v7->m_data;
        v7->m_writePtr = m_data;
        v7->m_readPtr = m_data;
        memcpy_0(m_data, m_body, m_contentLength);
      }
      else
      {
        bdHandleAssert(0, "bytesToCopy != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdbytebuffer.inl", "bdByteBuffer::init", 0x41u, "Buffer bytestToCopy should not be null");
      }
    }
    else
    {
      v7 = NULL;
    }
    v19 = v7;
    if ( v7 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v7->m_refCount, 1u);
    v11 = LODWORD(v7->m_data) + v7->m_size - LODWORD(v7->m_readPtr);
    buffer.m_ptr = v7;
    _InterlockedExchangeAdd((volatile signed __int32 *)&v7->m_refCount, 1u);
    bdStructBufferDeserializer::bdStructBufferDeserializer(&v20, (bdReference<bdByteBuffer>)&buffer, v11, 0);
    deserializer->m_nextTag = *(_DWORD *)v12;
    deserializer->m_nextType = *(_DWORD *)(v12 + 4);
    deserializer->m_nestedDepth = *(_DWORD *)(v12 + 8);
    deserializer->m_lastReadResult = *(_DWORD *)(v12 + 12);
    deserializer->m_nestedObjectCount = *(_DWORD *)(v12 + 16);
    deserializer->m_nestedObjectInfo[0] = *(bdStructBufferDeserializer::bdNestedObjectInfo *)(v12 + 20);
    deserializer->m_nestedObjectInfo[1] = *(bdStructBufferDeserializer::bdNestedObjectInfo *)(v12 + 28);
    deserializer->m_nestedObjectInfo[2] = *(bdStructBufferDeserializer::bdNestedObjectInfo *)(v12 + 36);
    deserializer->m_nestedObjectInfo[3] = *(bdStructBufferDeserializer::bdNestedObjectInfo *)(v12 + 44);
    deserializer->m_nestedObjectInfo[4] = *(bdStructBufferDeserializer::bdNestedObjectInfo *)(v12 + 52);
    deserializer->m_nestedObjectInfo[5] = *(bdStructBufferDeserializer::bdNestedObjectInfo *)(v12 + 60);
    deserializer->m_nestedObjectInfo[6] = *(bdStructBufferDeserializer::bdNestedObjectInfo *)(v12 + 68);
    deserializer->m_nestedObjectInfo[7] = *(bdStructBufferDeserializer::bdNestedObjectInfo *)(v12 + 76);
    deserializer->m_nestedObjectInfo[8] = *(bdStructBufferDeserializer::bdNestedObjectInfo *)(v12 + 84);
    deserializer->m_nestedObjectInfo[9] = *(bdStructBufferDeserializer::bdNestedObjectInfo *)(v12 + 92);
    deserializer->m_nestedObjectInfo[10] = *(bdStructBufferDeserializer::bdNestedObjectInfo *)(v12 + 100);
    deserializer->m_nestedObjectInfo[11] = *(bdStructBufferDeserializer::bdNestedObjectInfo *)(v12 + 108);
    deserializer->m_nestedObjectInfo[12] = *(bdStructBufferDeserializer::bdNestedObjectInfo *)(v12 + 116);
    deserializer->m_nestedObjectInfo[13] = *(bdStructBufferDeserializer::bdNestedObjectInfo *)(v12 + 124);
    deserializer->m_nestedObjectInfo[14] = *(bdStructBufferDeserializer::bdNestedObjectInfo *)(v12 + 132);
    deserializer->m_nestedObjectInfo[15] = *(bdStructBufferDeserializer::bdNestedObjectInfo *)(v12 + 140);
    v13 = v12 + 152;
    p_m_stream = &deserializer->m_stream;
    if ( (bdStructSerializationInputStream *)(v12 + 152) != &deserializer->m_stream )
    {
      if ( p_m_stream->m_buffer.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&p_m_stream->m_buffer.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && p_m_stream->m_buffer.m_ptr )
        ((void (__fastcall *)(bdByteBuffer *, __int64))p_m_stream->m_buffer.m_ptr->~bdReferencable)(p_m_stream->m_buffer.m_ptr, 1i64);
      v15 = *(bdByteBuffer **)v13;
      p_m_stream->m_buffer.m_ptr = *(bdByteBuffer **)v13;
      if ( v15 )
        _InterlockedExchangeAdd((volatile signed __int32 *)&v15->m_refCount, 1u);
    }
    deserializer->m_stream.m_bufferSize = *(_DWORD *)(v13 + 8);
    bdStructBufferDeserializer::~bdStructBufferDeserializer(&v20);
    v16 = v7->m_data;
    v7->m_writePtr = v16;
    v7->m_readPtr = v16;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v7->m_refCount, 0xFFFFFFFF) == 1 )
      ((void (__fastcall *)(bdByteBuffer *, __int64))v7->~bdReferencable)(v7, 1i64);
    return 1;
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdDemonataPushMessage", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bddemonatapushmessagecommon\\bddemonatapushmessage.cpp", "bdDemonataPushMessage::getBodyAsStructBuffer", 0xC3u, "Can't get body as struct buffer because the push message has no body.");
    return 0;
  }
}

/*
==============
bdDemonataPushMessage::getBodyRaw
==============
*/
const unsigned __int8 *bdDemonataPushMessage::getBodyRaw(bdDemonataPushMessage *this)
{
  return this->m_body;
}

/*
==============
bdDemonataPushMessage::getContentLength
==============
*/
__int64 bdDemonataPushMessage::getContentLength(bdDemonataPushMessage *this)
{
  return this->m_contentLength;
}

/*
==============
bdDemonataPushMessage::getContentType
==============
*/
char *bdDemonataPushMessage::getContentType(bdDemonataPushMessage *this)
{
  return this->m_mimeType;
}

/*
==============
bdDemonataPushMessage::getSchema
==============
*/
char *bdDemonataPushMessage::getSchema(bdDemonataPushMessage *this)
{
  return this->m_schema;
}

/*
==============
bdDemonataPushMessage::getSender
==============
*/
bdDemonataPushMessage *bdDemonataPushMessage::getSender(bdDemonataPushMessage *this)
{
  return this;
}

/*
==============
bdDemonataPushMessage::getTransactionID
==============
*/
unsigned __int64 bdDemonataPushMessage::getTransactionID(bdDemonataPushMessage *this)
{
  return this->m_transactionID;
}

/*
==============
bdDemonataPushMessage::hasBody
==============
*/
_BOOL8 bdDemonataPushMessage::hasBody(bdDemonataPushMessage *this)
{
  return this->m_hasBody;
}

/*
==============
bdDemonataPushMessage::initFromBuffer
==============
*/
_BOOL8 bdDemonataPushMessage::initFromBuffer(bdDemonataPushMessage *this, bdReference<bdByteBuffer> buffer)
{
  bool v4; 

  memset_0(this, 0, 0x80ui64);
  memset_0(this->m_schema, 0, sizeof(this->m_schema));
  memset_0(this->m_mimeType, 0, sizeof(this->m_mimeType));
  this->m_transactionID = 0i64;
  this->m_hasBody = 0;
  this->m_body = NULL;
  this->m_contentLength = 0;
  v4 = bdByteBuffer::readString((bdByteBuffer *)buffer.m_ptr->__vftable, this->m_sender, 0x80ui64) && bdByteBuffer::readString((bdByteBuffer *)buffer.m_ptr->__vftable, this->m_schema, 0x800ui64) && bdByteBuffer::readString((bdByteBuffer *)buffer.m_ptr->__vftable, this->m_mimeType, 0x80ui64) && bdByteBuffer::readBlobPointer((bdByteBuffer *)buffer.m_ptr->__vftable, &this->m_body, &this->m_contentLength);
  this->m_hasBody = this->m_contentLength != 0;
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
bdDemonataPushMessage::initFromBufferWithProtobuf
==============
*/
_BOOL8 bdDemonataPushMessage::initFromBufferWithProtobuf(bdDemonataPushMessage *this, bdReference<bdByteBuffer> buffer)
{
  bool v4; 
  unsigned int v5; 
  bdByteBuffer *v6; 
  bool v7; 
  bool v8; 
  unsigned int dataLen; 
  bdReference<bdByteBuffer> buffera; 
  unsigned __int64 value; 
  unsigned __int64 v13[3]; 
  bdStructBufferDeserializer v14; 
  char buf[128]; 

  v13[1] = -2i64;
  v13[2] = (unsigned __int64)buffer.m_ptr;
  memset_0(this, 0, 0x80ui64);
  memset_0(this->m_schema, 0, sizeof(this->m_schema));
  memset_0(this->m_mimeType, 0, sizeof(this->m_mimeType));
  this->m_transactionID = 0i64;
  this->m_hasBody = 0;
  this->m_body = NULL;
  this->m_contentLength = 0;
  dataLen = 0;
  v13[0] = 0i64;
  value = 0i64;
  memset_0(buf, 0, sizeof(buf));
  v4 = bdByteBuffer::readStructStart((bdByteBuffer *)buffer.m_ptr->__vftable, &dataLen);
  v5 = dataLen;
  v6 = (bdByteBuffer *)buffer.m_ptr->__vftable;
  buffera.m_ptr = v6;
  if ( v6 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v6->m_refCount, 1u);
  bdStructBufferDeserializer::bdStructBufferDeserializer(&v14, (bdReference<bdByteBuffer>)&buffera, v5, 0);
  v7 = v4 && bdStructBufferDeserializer::readString(&v14, 1u, this->m_sender, 0x80u) && bdStructBufferDeserializer::readString(&v14, 2u, this->m_schema, 0x800u) && bdStructBufferDeserializer::readString(&v14, 3u, this->m_mimeType, 0x80u) && bdStructBufferDeserializer::readObjectBegin(&v14, 4u) && bdStructBufferDeserializer::readUInt64(&v14, 1u, &value) && bdStructBufferDeserializer::readUInt64(&v14, 2u, v13);
  if ( (unsigned int)(bdSnprintf(buf, 0x80ui64, "%llx%llx", v13[0], value) - 1) <= 0x13 )
    this->m_transactionID = _strtoui64(buf, NULL, 10);
  v8 = v7 && bdStructBufferDeserializer::readObjectEnd(&v14) && bdStructBufferDeserializer::readBlobPointer(&v14, 5u, &this->m_body, 0x1000u, &this->m_contentLength) && bdByteBuffer::readStructEnd((bdByteBuffer *)buffer.m_ptr->__vftable);
  this->m_hasBody = this->m_contentLength != 0;
  bdStructBufferDeserializer::~bdStructBufferDeserializer(&v14);
  if ( buffer.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->allocateBuffer, 0xFFFFFFFF) == 1 )
  {
    if ( buffer.m_ptr->__vftable )
      (*(void (__fastcall **)(bdByteBuffer_vtbl *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr->__vftable, 1i64);
    buffer.m_ptr->__vftable = NULL;
  }
  return v8;
}

/*
==============
bdDemonataPushMessage::reset
==============
*/
void bdDemonataPushMessage::reset(bdDemonataPushMessage *this)
{
  memset_0(this, 0, 0x900ui64);
  this->m_transactionID = 0i64;
  this->m_hasBody = 0;
  this->m_body = NULL;
  this->m_contentLength = 0;
}

