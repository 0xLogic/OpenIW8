/*
==============
bdRESTRequestBuilder::spanID
==============
*/

unsigned int __fastcall bdRESTRequestBuilder::spanID(bdRESTRequestBuilder *this)
{
  return ?spanID@bdRESTRequestBuilder@@QEBAIXZ(this);
}

/*
==============
bdRESTRequestBuilder::resourceName
==============
*/

const char *__fastcall bdRESTRequestBuilder::resourceName(bdRESTRequestBuilder *this)
{
  return ?resourceName@bdRESTRequestBuilder@@QEBAPEBDXZ(this);
}

/*
==============
bdRESTRequestBuilder::bdRESTRequestBuilder
==============
*/

void __fastcall bdRESTRequestBuilder::bdRESTRequestBuilder(bdRESTRequestBuilder *this, const bdRESTConfig *config, bdLobbyService *lobbyService)
{
  ??0bdRESTRequestBuilder@@QEAA@AEBVbdRESTConfig@@PEAVbdLobbyService@@@Z(this, config, lobbyService);
}

/*
==============
bdRESTRequestBuilder::operationName
==============
*/

const char *__fastcall bdRESTRequestBuilder::operationName(bdRESTRequestBuilder *this)
{
  return ?operationName@bdRESTRequestBuilder@@QEBAPEBDXZ(this);
}

/*
==============
bdRESTRequestBuilder::hasBody
==============
*/

bool __fastcall bdRESTRequestBuilder::hasBody(bdRESTRequestBuilder *this)
{
  return ?hasBody@bdRESTRequestBuilder@@QEBA_NXZ(this);
}

/*
==============
bdRESTRequest::~bdRESTRequest
==============
*/

void __fastcall bdRESTRequest::~bdRESTRequest(bdRESTRequest *this)
{
  ??1bdRESTRequest@@UEAA@XZ(this);
}

/*
==============
bdRESTRequestBuilder::getBodyJSONSerializer
==============
*/

bool __fastcall bdRESTRequestBuilder::getBodyJSONSerializer(bdRESTRequestBuilder *this, bdJSONSerializer **serializer)
{
  return ?getBodyJSONSerializer@bdRESTRequestBuilder@@QEAA_NAEAPEAVbdJSONSerializer@@@Z(this, serializer);
}

/*
==============
bdRESTRequestBuilder::method
==============
*/

bdREST::bdMethod __fastcall bdRESTRequestBuilder::method(bdRESTRequestBuilder *this)
{
  return ?method@bdRESTRequestBuilder@@QEBA?AW4bdMethod@bdREST@@XZ(this);
}

/*
==============
bdRESTRequestBuilder::getBodyStructBufferSerializer
==============
*/

bool __fastcall bdRESTRequestBuilder::getBodyStructBufferSerializer(bdRESTRequestBuilder *this, bdStructBufferSerializer **serializer)
{
  return ?getBodyStructBufferSerializer@bdRESTRequestBuilder@@QEAA_NAEAPEAVbdStructBufferSerializer@@@Z(this, serializer);
}

/*
==============
bdRESTRequestBuilder::setMethod
==============
*/

bool __fastcall bdRESTRequestBuilder::setMethod(bdRESTRequestBuilder *this, bdREST::bdMethod method)
{
  return ?setMethod@bdRESTRequestBuilder@@QEAA_NW4bdMethod@bdREST@@@Z(this, method);
}

/*
==============
bdRESTRequestBuilder::setResourceName
==============
*/

bool __fastcall bdRESTRequestBuilder::setResourceName(bdRESTRequestBuilder *this, const char *resourceName, const char *operationName)
{
  return ?setResourceName@bdRESTRequestBuilder@@QEAA_NPEBD0@Z(this, resourceName, operationName);
}

/*
==============
bdRESTRequestBuilder::setBodyRaw
==============
*/

bool __fastcall bdRESTRequestBuilder::setBodyRaw(bdRESTRequestBuilder *this, const void *data, unsigned int length)
{
  return ?setBodyRaw@bdRESTRequestBuilder@@QEAA_NPEBXI@Z(this, data, length);
}

/*
==============
bdRESTRequestBuilder::maxRetries
==============
*/

unsigned int __fastcall bdRESTRequestBuilder::maxRetries(bdRESTRequestBuilder *this)
{
  return ?maxRetries@bdRESTRequestBuilder@@QEBAIXZ(this);
}

/*
==============
bdRESTRequestBuilder::uri
==============
*/

bdRESTURI *__fastcall bdRESTRequestBuilder::uri(bdRESTRequestBuilder *this)
{
  return ?uri@bdRESTRequestBuilder@@QEAAAEAVbdRESTURI@@XZ(this);
}

/*
==============
bdRESTRequestBuilder::timeout
==============
*/

unsigned int __fastcall bdRESTRequestBuilder::timeout(bdRESTRequestBuilder *this)
{
  return ?timeout@bdRESTRequestBuilder@@QEBAIXZ(this);
}

/*
==============
bdRESTRequestBuilder::headers
==============
*/

bdRESTHeaders *__fastcall bdRESTRequestBuilder::headers(bdRESTRequestBuilder *this)
{
  return ?headers@bdRESTRequestBuilder@@QEAAAEAVbdRESTHeaders@@XZ(this);
}

/*
==============
bdRESTRequestBuilder::setTimeout
==============
*/

bool __fastcall bdRESTRequestBuilder::setTimeout(bdRESTRequestBuilder *this, unsigned int milliseconds)
{
  return ?setTimeout@bdRESTRequestBuilder@@QEAA_NI@Z(this, milliseconds);
}

/*
==============
bdRESTRequestBuilder::lobbyService
==============
*/

bdLobbyService *__fastcall bdRESTRequestBuilder::lobbyService(bdRESTRequestBuilder *this)
{
  return ?lobbyService@bdRESTRequestBuilder@@QEBAPEAVbdLobbyService@@XZ(this);
}

/*
==============
bdRESTRequestBuilder::setServiceName
==============
*/

bool __fastcall bdRESTRequestBuilder::setServiceName(bdRESTRequestBuilder *this, const char *serviceName)
{
  return ?setServiceName@bdRESTRequestBuilder@@QEAA_NPEBD@Z(this, serviceName);
}

/*
==============
bdRESTRequestBuilder::serviceName
==============
*/

const char *__fastcall bdRESTRequestBuilder::serviceName(bdRESTRequestBuilder *this)
{
  return ?serviceName@bdRESTRequestBuilder@@QEBAPEBDXZ(this);
}

/*
==============
bdRESTRequestBuilder::finalize
==============
*/

bool __fastcall bdRESTRequestBuilder::finalize(bdRESTRequestBuilder *this)
{
  return ?finalize@bdRESTRequestBuilder@@IEAA_NXZ(this);
}

/*
==============
bdRESTRequestBuilder::contentLength
==============
*/

unsigned int __fastcall bdRESTRequestBuilder::contentLength(bdRESTRequestBuilder *this)
{
  return ?contentLength@bdRESTRequestBuilder@@QEAAIXZ(this);
}

/*
==============
bdRESTRequestBuilder::body
==============
*/

void *__fastcall bdRESTRequestBuilder::body(bdRESTRequestBuilder *this)
{
  return ?body@bdRESTRequestBuilder@@QEAAPEAXXZ(this);
}

/*
==============
bdRESTRequestBuilder::bdRESTRequestBuilder
==============
*/
void bdRESTRequestBuilder::bdRESTRequestBuilder(bdRESTRequestBuilder *this, const bdRESTConfig *config, bdLobbyService *lobbyService)
{
  const bdStructBufferSerializer *v4; 
  bdReference<bdByteBuffer> buffer; 
  __int64 v6; 
  bdRESTRequestBuilder *v7; 
  bdStructBufferSerializer v8; 

  v6 = -2i64;
  v7 = this;
  this->m_lobbyService = lobbyService;
  this->m_method = BD_NONE;
  bdRESTURI::bdRESTURI(&this->m_uri);
  bdRESTHeaders::bdRESTHeaders(&this->m_headers);
  bdJSONSerializer::bdJSONSerializer(&this->m_json);
  buffer.m_ptr = NULL;
  bdStructBufferSerializer::bdStructBufferSerializer(&this->m_protobuf, (bdReference<bdByteBuffer>)&buffer, 0, 0);
  this->m_byteBuffer.m_ptr = NULL;
  this->m_body._Mypair._Myval2 = NULL;
  *(_QWORD *)&this->m_bodyBufferSize = 0i64;
  *(_QWORD *)&this->m_requestTimeoutMs = 30000i64;
  *(_WORD *)&this->m_finalized = 0;
  bdRESTURI::reset(&this->m_uri);
  this->m_bodyBufferSize = 0xFFFF;
  this->m_serviceName[0] = 0;
  this->m_resourceName[0] = 0;
  this->m_operationName[0] = 0;
  buffer.m_ptr = NULL;
  bdStructBufferSerializer::bdStructBufferSerializer(&v8, (bdReference<bdByteBuffer>)&buffer, this->m_bodyBufferSize, 0);
  bdStructBufferSerializer::operator=(&this->m_protobuf, v4);
  bdStructBufferSerializer::~bdStructBufferSerializer(&v8);
}

/*
==============
bdRESTRequest::~bdRESTRequest
==============
*/
void bdRESTRequest::~bdRESTRequest(bdRESTRequest *this)
{
  this->__vftable = (bdRESTRequest_vtbl *)&bdRESTRequest::`vftable';
}

/*
==============
bdRESTRequestBuilder::body
==============
*/
unsigned __int8 *bdRESTRequestBuilder::body(bdRESTRequestBuilder *this)
{
  unsigned __int8 *result; 
  unsigned __int8 *Myval2; 

  result = this->m_body._Mypair._Myval2;
  if ( !result )
  {
    result = (unsigned __int8 *)bdMemory::allocate(this->m_bodyBufferSize);
    Myval2 = this->m_body._Mypair._Myval2;
    this->m_body._Mypair._Myval2 = result;
    if ( Myval2 )
    {
      bdMemory::deallocate(Myval2);
      return this->m_body._Mypair._Myval2;
    }
  }
  return result;
}

/*
==============
bdRESTRequestBuilder::contentLength
==============
*/
unsigned int bdRESTRequestBuilder::contentLength(bdRESTRequestBuilder *this)
{
  bdREST::bdMimeType ContentType; 
  __int32 v3; 
  __int32 v4; 

  ContentType = bdRESTHeaders::getContentType(&this->m_headers);
  if ( ContentType == BD_MIME_INVALID )
    return 0;
  v3 = ContentType - 1;
  if ( !v3 )
    return bdJSONSerializer::length(&this->m_json);
  v4 = v3 - 1;
  if ( !v4 )
    return this->m_rawContentLength;
  if ( v4 != 1 )
  {
    bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdrestrequest.cpp", "bdRESTRequestBuilder::contentLength", 0x5Eu, "unsupported mime type");
    return 0;
  }
  return bdStructBufferSerializer::getWrittenSize(&this->m_protobuf);
}

/*
==============
bdRESTRequestBuilder::finalize
==============
*/
bool bdRESTRequestBuilder::finalize(bdRESTRequestBuilder *this)
{
  bool m_finalized; 
  bdREST::bdMimeType ContentType; 
  __int32 v4; 
  __int32 v5; 
  bool result; 
  bdByteBuffer *m_ptr; 
  unsigned int m_bodyBufferSize; 
  unsigned int v9; 
  unsigned __int8 *m_data; 
  void *v11; 
  bdRandom *RNG; 
  unsigned int DataSize; 

  bdHandleAssert(!this->m_finalized, "m_finalized == false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdrestrequest.cpp", "bdRESTRequestBuilder::finalize", 0x10Bu, "finalize() called multiple times. Call reset() if the instance is intended for reuse.");
  m_finalized = this->m_finalized;
  ContentType = bdRESTHeaders::getContentType(&this->m_headers);
  if ( ContentType == BD_MIME_INVALID )
    goto LABEL_16;
  v4 = ContentType - 1;
  if ( !v4 )
  {
    if ( m_finalized || !bdJSONSerializer::validate(&this->m_json) )
      return 0;
    goto LABEL_17;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
LABEL_16:
    if ( m_finalized )
      return 0;
    goto LABEL_17;
  }
  if ( v5 != 1 )
  {
    bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdrestrequest.cpp", "bdRESTRequestBuilder::finalize", 0x12Eu, "unsupported mime type");
    return 0;
  }
  bdHandleAssert(this->m_byteBuffer.m_ptr != NULL, "m_byteBuffer.notNull()", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdrestrequest.cpp", "bdRESTRequestBuilder::finalize", 0x11Bu, "setting MIME_PROTOBUF should guarantee m_byteBuffer is created");
  if ( m_finalized || (m_ptr = this->m_byteBuffer.m_ptr) == NULL )
  {
    m_bodyBufferSize = this->m_bodyBufferSize;
    goto LABEL_12;
  }
  m_bodyBufferSize = this->m_bodyBufferSize;
  if ( bdByteBuffer::getDataSize(m_ptr) >= m_bodyBufferSize )
  {
LABEL_12:
    DataSize = bdByteBuffer::getDataSize(this->m_byteBuffer.m_ptr);
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdREST", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdrestrequest.cpp", "bdRESTRequestBuilder::finalize", 0x125u, "byte buffer data is longer than the body size: %u > %u", DataSize, m_bodyBufferSize);
    return 0;
  }
  v9 = bdByteBuffer::getDataSize(this->m_byteBuffer.m_ptr);
  m_data = this->m_byteBuffer.m_ptr->m_data;
  v11 = bdRESTRequestBuilder::body(this);
  memcpy_0(v11, m_data, v9);
LABEL_17:
  if ( !bdRESTURI::buildURIString(&this->m_uri) )
    return 0;
  RNG = bdREST::getRNG();
  bdRandom::nextUBytes(RNG, (unsigned __int8 *)&this->m_spanID, 4);
  result = 1;
  this->m_finalized = 1;
  return result;
}

/*
==============
bdRESTRequestBuilder::getBodyJSONSerializer
==============
*/
char bdRESTRequestBuilder::getBodyJSONSerializer(bdRESTRequestBuilder *this, bdJSONSerializer **serializer)
{
  bool v4; 
  unsigned int m_bodyBufferSize; 
  char *v7; 

  v4 = bdRESTHeaders::getContentType(&this->m_headers) == BD_MIME_INVALID || bdRESTHeaders::getContentType(&this->m_headers) == BD_MIME_JSON;
  bdHandleAssert(v4, "ok", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdrestrequest.cpp", "bdRESTRequestBuilder::getBodyJSONSerializer", 0x7Du, "can't change the content type. did you set raw data or request different types of serializers from the same builder?");
  if ( !v4 )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdREST", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdrestrequest.cpp", "bdRESTRequestBuilder::getBodyJSONSerializer", 0x81u, "body is already set up for a different content type");
    return 0;
  }
  if ( !this->m_jsonBufferSet )
  {
    m_bodyBufferSize = this->m_bodyBufferSize;
    v7 = (char *)bdRESTRequestBuilder::body(this);
    bdJSONSerializer::setBuffer(&this->m_json, v7, m_bodyBufferSize);
    this->m_jsonBufferSet = 1;
  }
  if ( !bdRESTHeaders::setFieldContentType(&this->m_headers, BD_MIME_JSON) )
    return 0;
  *serializer = &this->m_json;
  return 1;
}

/*
==============
bdRESTRequestBuilder::getBodyStructBufferSerializer
==============
*/
char bdRESTRequestBuilder::getBodyStructBufferSerializer(bdRESTRequestBuilder *this, bdStructBufferSerializer **serializer)
{
  bdRESTHeaders *p_m_headers; 
  bool v5; 
  bdByteBuffer *v7; 
  size_t m_bodyBufferSize; 
  const void *v9; 
  unsigned __int8 *m_data; 
  bdByteBuffer *m_ptr; 
  bdByteBuffer *v12; 
  unsigned int v13; 
  bdStructBufferSerializer *p_m_protobuf; 
  const bdStructBufferSerializer *v15; 
  bdReference<bdByteBuffer> buffer; 
  __int64 v17; 
  bdStructBufferSerializer v18; 

  v17 = -2i64;
  p_m_headers = &this->m_headers;
  v5 = bdRESTHeaders::getContentType(&this->m_headers) == BD_MIME_INVALID || bdRESTHeaders::getContentType(p_m_headers) == BD_MIME_PROTOBUF;
  bdHandleAssert(v5, "ok", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdrestrequest.cpp", "bdRESTRequestBuilder::getBodyStructBufferSerializer", 0x99u, "can't change the content type. did you set raw data or request different types of serializers from the same builder?");
  if ( !v5 )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdREST", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdrestrequest.cpp", "bdRESTRequestBuilder::getBodyStructBufferSerializer", 0x9Du, "body is already set up for a different content type");
    return 0;
  }
  if ( this->m_byteBuffer.m_ptr )
  {
    p_m_protobuf = &this->m_protobuf;
  }
  else
  {
    v7 = (bdByteBuffer *)bdMemory::allocate(0x38ui64);
    buffer.m_ptr = v7;
    if ( v7 )
    {
      m_bodyBufferSize = this->m_bodyBufferSize;
      v9 = bdRESTRequestBuilder::body(this);
      v7->m_refCount.m_value._My_val = 0;
      v7->__vftable = (bdByteBuffer_vtbl *)&bdByteBuffer::`vftable';
      v7->m_size = m_bodyBufferSize;
      v7->m_data = NULL;
      *(_WORD *)&v7->m_typeChecked = 0;
      v7->m_allocatedData = 0;
      if ( v9 )
      {
        bdHandleAssert(1, "m_data == BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdbytebuffer.inl", "bdByteBuffer::init", 0x31u, "Buffer already allocated. init() called twice?");
        v7->m_size = m_bodyBufferSize;
        if ( (_DWORD)m_bodyBufferSize )
          v7->allocateBuffer(v7);
        m_data = v7->m_data;
        v7->m_writePtr = m_data;
        v7->m_readPtr = m_data;
        memcpy_0(m_data, v9, m_bodyBufferSize);
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
    m_ptr = this->m_byteBuffer.m_ptr;
    if ( m_ptr )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
      {
        v12 = this->m_byteBuffer.m_ptr;
        if ( v12 )
          ((void (__fastcall *)(bdByteBuffer *, __int64))v12->~bdReferencable)(v12, 1i64);
      }
    }
    this->m_byteBuffer.m_ptr = v7;
    if ( v7 )
    {
      _InterlockedExchangeAdd((volatile signed __int32 *)&v7->m_refCount, 1u);
      v7 = this->m_byteBuffer.m_ptr;
    }
    v13 = v7->m_size + LODWORD(v7->m_data) - LODWORD(v7->m_writePtr);
    buffer.m_ptr = v7;
    if ( v7 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v7->m_refCount, 1u);
    bdStructBufferSerializer::bdStructBufferSerializer(&v18, (bdReference<bdByteBuffer>)&buffer, v13, 0);
    p_m_protobuf = &this->m_protobuf;
    bdStructBufferSerializer::operator=(p_m_protobuf, v15);
    bdStructBufferSerializer::~bdStructBufferSerializer(&v18);
  }
  if ( !bdRESTHeaders::setFieldContentType(p_m_headers, BD_MIME_PROTOBUF) )
    return 0;
  *serializer = p_m_protobuf;
  return 1;
}

/*
==============
bdRESTRequestBuilder::hasBody
==============
*/
bool bdRESTRequestBuilder::hasBody(bdRESTRequestBuilder *this)
{
  return bdRESTHeaders::getContentType(&this->m_headers) != BD_MIME_INVALID;
}

/*
==============
bdRESTRequestBuilder::headers
==============
*/
bdRESTHeaders *bdRESTRequestBuilder::headers(bdRESTRequestBuilder *this)
{
  return &this->m_headers;
}

/*
==============
bdRESTRequestBuilder::lobbyService
==============
*/
bdLobbyService *bdRESTRequestBuilder::lobbyService(bdRESTRequestBuilder *this)
{
  return this->m_lobbyService;
}

/*
==============
bdRESTRequestBuilder::maxRetries
==============
*/
__int64 bdRESTRequestBuilder::maxRetries(bdRESTRequestBuilder *this)
{
  return 10i64;
}

/*
==============
bdRESTRequestBuilder::method
==============
*/
__int64 bdRESTRequestBuilder::method(bdRESTRequestBuilder *this)
{
  return (unsigned int)this->m_method;
}

/*
==============
bdRESTRequestBuilder::operationName
==============
*/
char *bdRESTRequestBuilder::operationName(bdRESTRequestBuilder *this)
{
  return this->m_operationName;
}

/*
==============
bdRESTRequestBuilder::resourceName
==============
*/
char *bdRESTRequestBuilder::resourceName(bdRESTRequestBuilder *this)
{
  return this->m_resourceName;
}

/*
==============
bdRESTRequestBuilder::serviceName
==============
*/
char *bdRESTRequestBuilder::serviceName(bdRESTRequestBuilder *this)
{
  return this->m_serviceName;
}

/*
==============
bdRESTRequestBuilder::setBodyRaw
==============
*/
char bdRESTRequestBuilder::setBodyRaw(bdRESTRequestBuilder *this, const void *data, unsigned int length)
{
  size_t v4; 
  bool v6; 
  void *v8; 

  v4 = length;
  v6 = bdRESTHeaders::getContentType(&this->m_headers) == BD_MIME_INVALID || bdRESTHeaders::getContentType(&this->m_headers) == BD_MIME_RAW;
  bdHandleAssert(v6, "ok", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdrestrequest.cpp", "bdRESTRequestBuilder::setBodyRaw", 0xB4u, "can't change the content type. did you request different types of serializers from the same builder?");
  if ( !v6 )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdREST", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdrestrequest.cpp", "bdRESTRequestBuilder::setBodyRaw", 0xB8u, "body is already set up for a different content type");
  if ( (unsigned int)v4 > this->m_bodyBufferSize )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdREST", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdrestrequest.cpp", "bdRESTRequestBuilder::setBodyRaw", 0xBDu, "data is too long to fit in body");
    v6 = 0;
  }
  if ( !data && (_DWORD)v4 )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdREST", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdrestrequest.cpp", "bdRESTRequestBuilder::setBodyRaw", 0xC3u, "NULL data but a length > 0 was specified");
    return 0;
  }
  if ( !v6 || !bdRESTHeaders::setFieldContentType(&this->m_headers, BD_MIME_RAW) )
    return 0;
  this->m_rawContentLength = v4;
  if ( data )
  {
    v8 = bdRESTRequestBuilder::body(this);
    memcpy_0(v8, data, v4);
  }
  return 1;
}

/*
==============
bdRESTRequestBuilder::setMethod
==============
*/
bool bdRESTRequestBuilder::setMethod(bdRESTRequestBuilder *this, bdREST::bdMethod method)
{
  this->m_method = method;
  return bdRESTInternal::methodIsValid(method);
}

/*
==============
bdRESTRequestBuilder::setResourceName
==============
*/
char bdRESTRequestBuilder::setResourceName(bdRESTRequestBuilder *this, const char *resourceName, const char *operationName)
{
  const char *v6; 
  const char *v7; 
  _BYTE *v8; 
  unsigned __int64 v9; 
  _BYTE *v10; 
  unsigned __int64 v11; 
  const char *v12; 
  const char *v13; 
  _BYTE *v14; 
  _BYTE *v15; 

  bdHandleAssert(resourceName != NULL, "resourceName != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdrestrequest.cpp", "bdRESTRequestBuilder::setResourceName", 0xDFu, "resource name can't be NULL");
  bdHandleAssert(operationName != NULL, "operationName != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdrestrequest.cpp", "bdRESTRequestBuilder::setResourceName", 0xE0u, "operation name can't be NULL");
  v6 = (char *)&queryFormat.fmt + 3;
  v7 = (char *)&queryFormat.fmt + 3;
  if ( resourceName )
    v7 = resourceName;
  v8 = memchr_0(v7, 0, 0x40ui64);
  v9 = 64i64;
  if ( v8 )
    v9 = v8 - v7;
  bdHandleAssert(v9 < 0x40, "bdStrnlen(resourceName ? resourceName : \"\", bdRESTConfig::BD_REST_REQUEST_MAX_RESOURCE_NAME_SIZE) < bdRESTConfig::BD_REST_REQUEST_MAX_RESOURCE_NAME_SIZE", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdrestrequest.cpp", "bdRESTRequestBuilder::setResourceName", 0xE1u, "resource name is too long");
  if ( operationName )
    v6 = operationName;
  v10 = memchr_0(v6, 0, 0x40ui64);
  v11 = 64i64;
  if ( v10 )
    v11 = v10 - v6;
  bdHandleAssert(v11 < 0x40, "bdStrnlen(operationName ? operationName : \"\", bdRESTConfig::BD_REST_REQUEST_MAX_OPERATION_NAME_SIZE) < bdRESTConfig::BD_REST_REQUEST_MAX_OPERATION_NAME_SIZE", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdrestrequest.cpp", "bdRESTRequestBuilder::setResourceName", 0xE2u, "operation name is too long");
  v12 = "undefined";
  v13 = "undefined";
  if ( resourceName )
    v13 = resourceName;
  if ( operationName )
    v12 = operationName;
  v14 = memchr_0(v13, 0, 0x40ui64);
  if ( !v14 )
    return 0;
  if ( (unsigned __int64)(v14 - v13) >= 0x40 )
    return 0;
  v15 = memchr_0(v12, 0, 0x40ui64);
  if ( !v15 || (unsigned __int64)(v15 - v12) >= 0x40 )
    return 0;
  bdStrlcpy(this->m_resourceName, v13, 0x40ui64);
  bdStrlcpy(this->m_operationName, v12, 0x40ui64);
  return 1;
}

/*
==============
bdRESTRequestBuilder::setServiceName
==============
*/
bool bdRESTRequestBuilder::setServiceName(bdRESTRequestBuilder *this, const char *serviceName)
{
  _BYTE *v4; 
  bool result; 

  result = 0;
  if ( serviceName )
  {
    v4 = memchr_0(serviceName, 0, 0x40ui64);
    if ( v4 )
    {
      if ( (unsigned __int64)(v4 - serviceName) < 0x40 && bdStrlcpy(this->m_serviceName, serviceName, 0x40ui64) < 0x40 )
        return 1;
    }
  }
  return result;
}

/*
==============
bdRESTRequestBuilder::setTimeout
==============
*/
char bdRESTRequestBuilder::setTimeout(bdRESTRequestBuilder *this, unsigned int milliseconds)
{
  this->m_requestTimeoutMs = milliseconds;
  return 1;
}

/*
==============
bdRESTRequestBuilder::spanID
==============
*/
__int64 bdRESTRequestBuilder::spanID(bdRESTRequestBuilder *this)
{
  bdHandleAssert(this->m_finalized, "m_finalized", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdrestrequest.cpp", "bdRESTRequestBuilder::spanID", 0x66u, "spanID() can only be called after the builder is finalized");
  return this->m_spanID;
}

/*
==============
bdRESTRequestBuilder::timeout
==============
*/
__int64 bdRESTRequestBuilder::timeout(bdRESTRequestBuilder *this)
{
  return this->m_requestTimeoutMs;
}

/*
==============
bdRESTRequestBuilder::uri
==============
*/
bdRESTURI *bdRESTRequestBuilder::uri(bdRESTRequestBuilder *this)
{
  return &this->m_uri;
}

