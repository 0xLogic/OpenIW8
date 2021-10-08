/*
==============
bdRESTResponseMessage::reset
==============
*/

void __fastcall bdRESTResponseMessage::reset(bdRESTResponseMessage *this)
{
  ?reset@bdRESTResponseMessage@@IEAAXXZ(this);
}

/*
==============
bdRESTResponseMessage::bdRESTError::deserialize
==============
*/

bool __fastcall bdRESTResponseMessage::bdRESTError::deserialize(bdRESTResponseMessage::bdRESTError *this, bdJSONDeserializer *json)
{
  return ?deserialize@bdRESTError@bdRESTResponseMessage@@QEAA_NAEAVbdJSONDeserializer@@@Z(this, json);
}

/*
==============
bdRESTResponseMessage::getLobbyService
==============
*/

bdLobbyService *__fastcall bdRESTResponseMessage::getLobbyService(bdRESTResponseMessage *this)
{
  return ?getLobbyService@bdRESTResponseMessage@@QEBAPEAVbdLobbyService@@XZ(this);
}

/*
==============
bdRESTResponseMessage::getContentLength
==============
*/

unsigned int __fastcall bdRESTResponseMessage::getContentLength(bdRESTResponseMessage *this)
{
  return ?getContentLength@bdRESTResponseMessage@@QEBAIXZ(this);
}

/*
==============
bdRESTResponseMessage::getErrorMessage
==============
*/

bool __fastcall bdRESTResponseMessage::getErrorMessage(bdRESTResponseMessage *this, const char **str)
{
  return ?getErrorMessage@bdRESTResponseMessage@@QEBA_NAEAPEBD@Z(this, str);
}

/*
==============
bdRESTResponseMessage::getBodyRaw
==============
*/

const void *__fastcall bdRESTResponseMessage::getBodyRaw(bdRESTResponseMessage *this)
{
  return ?getBodyRaw@bdRESTResponseMessage@@QEBAPEBXXZ(this);
}

/*
==============
bdRESTHeaderFieldDeserializer::deserialize
==============
*/

bool __fastcall bdRESTHeaderFieldDeserializer::deserialize(bdRESTHeaderFieldDeserializer *this, bdStructBufferDeserializer *deserializer)
{
  return ?deserialize@bdRESTHeaderFieldDeserializer@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, deserializer);
}

/*
==============
bdRESTResponseMessage::headerFieldValue
==============
*/

const char *__fastcall bdRESTResponseMessage::headerFieldValue(bdRESTResponseMessage *this, const char *key)
{
  return ?headerFieldValue@bdRESTResponseMessage@@QEBAPEBDPEBD@Z(this, key);
}

/*
==============
bdRESTResponseMessage::getBodyAsJSON
==============
*/

bool __fastcall bdRESTResponseMessage::getBodyAsJSON(bdRESTResponseMessage *this, bdJSONDeserializer *deserializer)
{
  return ?getBodyAsJSON@bdRESTResponseMessage@@QEBA_NAEAVbdJSONDeserializer@@@Z(this, deserializer);
}

/*
==============
bdRESTResponseMessage::getHTTPStatusCode
==============
*/

bdREST::bdHTTPStatus __fastcall bdRESTResponseMessage::getHTTPStatusCode(bdRESTResponseMessage *this)
{
  return ?getHTTPStatusCode@bdRESTResponseMessage@@QEBA?AW4bdHTTPStatus@bdREST@@XZ(this);
}

/*
==============
bdRESTResponseMessage::bdRESTResponseMessage
==============
*/

void __fastcall bdRESTResponseMessage::bdRESTResponseMessage(bdRESTResponseMessage *this)
{
  ??0bdRESTResponseMessage@@IEAA@XZ(this);
}

/*
==============
bdRESTResponseMessage::getContentType
==============
*/

bdREST::bdMimeType __fastcall bdRESTResponseMessage::getContentType(bdRESTResponseMessage *this)
{
  return ?getContentType@bdRESTResponseMessage@@QEBA?AW4bdMimeType@bdREST@@XZ(this);
}

/*
==============
bdRESTLSGResponseMessageDeserializer::deserialize
==============
*/

bool __fastcall bdRESTLSGResponseMessageDeserializer::deserialize(bdRESTLSGResponseMessageDeserializer *this, bdStructBufferDeserializer *deserializer)
{
  return ?deserialize@bdRESTLSGResponseMessageDeserializer@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, deserializer);
}

/*
==============
bdRESTResponseMessage::headerFieldCount
==============
*/

unsigned int __fastcall bdRESTResponseMessage::headerFieldCount(bdRESTResponseMessage *this)
{
  return ?headerFieldCount@bdRESTResponseMessage@@QEBAIXZ(this);
}

/*
==============
bdRESTResponseMessage::getBodyAsStructBuffer
==============
*/

bool __fastcall bdRESTResponseMessage::getBodyAsStructBuffer(bdRESTResponseMessage *this, bdStructBufferDeserializer *deserializer)
{
  return ?getBodyAsStructBuffer@bdRESTResponseMessage@@QEBA_NAEAVbdStructBufferDeserializer@@@Z(this, deserializer);
}

/*
==============
bdRESTResponseMessage::bdRESTLSGResponseMessage::dumpToLog
==============
*/

void __fastcall bdRESTResponseMessage::bdRESTLSGResponseMessage::dumpToLog(bdRESTResponseMessage::bdRESTLSGResponseMessage *this)
{
  ?dumpToLog@bdRESTLSGResponseMessage@bdRESTResponseMessage@@QEBAXXZ(this);
}

/*
==============
bdRESTResponseMessage::headerFieldBegin
==============
*/

const bdRESTHeaders::bdRESTHeaderField *__fastcall bdRESTResponseMessage::headerFieldBegin(bdRESTResponseMessage *this)
{
  return ?headerFieldBegin@bdRESTResponseMessage@@QEBAPEBUbdRESTHeaderField@bdRESTHeaders@@XZ(this);
}

/*
==============
bdRESTResponseMessage::getTransactionID
==============
*/

unsigned __int64 __fastcall bdRESTResponseMessage::getTransactionID(bdRESTResponseMessage *this)
{
  return ?getTransactionID@bdRESTResponseMessage@@QEBA_KXZ(this);
}

/*
==============
bdRESTResponseMessage::dumpToLog
==============
*/

void __fastcall bdRESTResponseMessage::dumpToLog(bdRESTResponseMessage *this)
{
  ?dumpToLog@bdRESTResponseMessage@@QEBAXXZ(this);
}

/*
==============
bdRESTResponseMessage::initFromBuffer
==============
*/

bool __fastcall bdRESTResponseMessage::initFromBuffer(bdRESTResponseMessage *this, bdLobbyService *lobbyService, bdReference<bdByteBuffer> buffer)
{
  return ?initFromBuffer@bdRESTResponseMessage@@IEAA_NPEAVbdLobbyService@@V?$bdReference@VbdByteBuffer@@@@@Z(this, lobbyService, buffer);
}

/*
==============
bdRESTResponseMessage::initFromLocalStatus
==============
*/

bool __fastcall bdRESTResponseMessage::initFromLocalStatus(bdRESTResponseMessage *this, bdLobbyService *lobbyService, bdREST::bdHTTPStatus httpStatusCode, const char *errName, const char *errMsg)
{
  return ?initFromLocalStatus@bdRESTResponseMessage@@IEAA_NPEAVbdLobbyService@@W4bdHTTPStatus@bdREST@@PEBD2@Z(this, lobbyService, httpStatusCode, errName, errMsg);
}

/*
==============
bdRESTResponseMessage::bdRESTLSGResponseMessage::bdRESTLSGResponseMessage
==============
*/

void __fastcall bdRESTResponseMessage::bdRESTLSGResponseMessage::bdRESTLSGResponseMessage(bdRESTResponseMessage::bdRESTLSGResponseMessage *this)
{
  ??0bdRESTLSGResponseMessage@bdRESTResponseMessage@@QEAA@XZ(this);
}

/*
==============
bdRESTResponseMessage::getErrorName
==============
*/

bool __fastcall bdRESTResponseMessage::getErrorName(bdRESTResponseMessage *this, const char **str)
{
  return ?getErrorName@bdRESTResponseMessage@@QEBA_NAEAPEBD@Z(this, str);
}

/*
==============
bdRESTResponseMessage::bdRESTReplyExtra::bdRESTReplyExtra
==============
*/

void __fastcall bdRESTResponseMessage::bdRESTReplyExtra::bdRESTReplyExtra(bdRESTResponseMessage::bdRESTReplyExtra *this)
{
  ??0bdRESTReplyExtra@bdRESTResponseMessage@@QEAA@XZ(this);
}

/*
==============
bdRESTResponseMessage::hasBody
==============
*/

bool __fastcall bdRESTResponseMessage::hasBody(bdRESTResponseMessage *this)
{
  return ?hasBody@bdRESTResponseMessage@@QEBA_NXZ(this);
}

/*
==============
bdRESTResponseMessage::headerFieldEnd
==============
*/

const bdRESTHeaders::bdRESTHeaderField *__fastcall bdRESTResponseMessage::headerFieldEnd(bdRESTResponseMessage *this)
{
  return ?headerFieldEnd@bdRESTResponseMessage@@QEBAPEBUbdRESTHeaderField@bdRESTHeaders@@XZ(this);
}

/*
==============
bdRESTResponseMessage::bdRESTError::bdRESTError
==============
*/

void __fastcall bdRESTResponseMessage::bdRESTError::bdRESTError(bdRESTResponseMessage::bdRESTError *this)
{
  ??0bdRESTError@bdRESTResponseMessage@@QEAA@XZ(this);
}

/*
==============
bdRESTHeaderFieldDeserializer::bdRESTHeaderFieldDeserializer
==============
*/

void __fastcall bdRESTHeaderFieldDeserializer::bdRESTHeaderFieldDeserializer(bdRESTHeaderFieldDeserializer *this)
{
  ??0bdRESTHeaderFieldDeserializer@@QEAA@XZ(this);
}

/*
==============
bdRESTResponseMessage::bdRESTError::deserialize
==============
*/

bool __fastcall bdRESTResponseMessage::bdRESTError::deserialize(bdRESTResponseMessage::bdRESTError *this, bdStructBufferDeserializer *deserializer)
{
  return ?deserialize@bdRESTError@bdRESTResponseMessage@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, deserializer);
}

/*
==============
bdRESTResponseMessage::bdRESTError::bdRESTError
==============
*/
void bdRESTResponseMessage::bdRESTError::bdRESTError(bdRESTResponseMessage::bdRESTError *this, int a2)
{
  unsigned __int64 v3; 
  unsigned __int64 v4; 
  size_t v5; 
  size_t v6; 

  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdRESTResponseMessage::bdRESTError::`vbtable';
    *(_QWORD *)&this->gap194[4] = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap194[12] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdRESTResponseMessage::bdRESTError_vtbl *)&bdRESTResponseMessage::bdRESTError::`vftable'{for `bdStructBufferSerializable'};
  *(bdRESTResponseMessage::bdRESTError_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdRESTResponseMessage::bdRESTError_vtbl *)&bdRESTResponseMessage::bdRESTError::`vftable'{for `bdReferencable'};
  *((_WORD *)&this->__vftable + 8) = 0;
  bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen", -2i64);
  v3 = -1i64;
  v4 = -1i64;
  do
    ++v4;
  while ( *((_BYTE *)&queryFormat.fmt + v4 + 3) );
  if ( this != (bdRESTResponseMessage::bdRESTError *)-18i64 )
  {
    v5 = 128i64;
    if ( v4 < 0x80 )
      v5 = v4;
    memcpy_0((char *)&this->__vftable + 18, (char *)&queryFormat.fmt + 3, v5);
    *((_BYTE *)&this->__vftable + v5 + 18) = 0;
  }
  bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  do
    ++v3;
  while ( *((_BYTE *)&queryFormat.fmt + v3 + 3) );
  if ( this != (bdRESTResponseMessage::bdRESTError *)-147i64 )
  {
    v6 = 256i64;
    if ( v3 < 0x100 )
      v6 = v3;
    memcpy_0(&this->m_message, (char *)&queryFormat.fmt + 3, v6);
    this->m_message.m_buffer[v6] = 0;
  }
}

/*
==============
bdRESTHeaderFieldDeserializer::bdRESTHeaderFieldDeserializer
==============
*/
void bdRESTHeaderFieldDeserializer::bdRESTHeaderFieldDeserializer(bdRESTHeaderFieldDeserializer *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdRESTHeaderFieldDeserializer::`vbtable';
    *((_QWORD *)&this->__vftable + 3) = &bdReferencable::`vftable';
    *(_DWORD *)this->gap20 = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdRESTHeaderFieldDeserializer_vtbl *)&bdRESTHeaderFieldDeserializer::`vftable'{for `bdStructBufferSerializable'};
  *(bdRESTHeaderFieldDeserializer_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdRESTHeaderFieldDeserializer_vtbl *)&bdRESTHeaderFieldDeserializer::`vftable'{for `bdReferencable'};
  *((_QWORD *)&this->__vftable + 2) = 0i64;
}

/*
==============
bdRESTResponseMessage::bdRESTLSGResponseMessage::bdRESTLSGResponseMessage
==============
*/
void bdRESTResponseMessage::bdRESTLSGResponseMessage::bdRESTLSGResponseMessage(bdRESTResponseMessage::bdRESTLSGResponseMessage *this)
{
  this->m_statusCode = BD_STATUS_I_AM_A_TEAPOT;
  bdRESTHeaders::bdRESTHeaders(&this->m_headers);
  *(_QWORD *)&this->m_retryAfter = 0i64;
  this->m_isGatewayGenerated = 0;
  this->m_replyExtra.m_transactionID = 0i64;
  *(_QWORD *)&this->m_replyExtra.m_debugInfoLength = 0i64;
  this->m_replyExtra.m_isRetryable = 0;
  memset_0(&this->m_replyExtra, 0, 0x1100ui64);
}

/*
==============
bdRESTResponseMessage::bdRESTReplyExtra::bdRESTReplyExtra
==============
*/
void bdRESTResponseMessage::bdRESTReplyExtra::bdRESTReplyExtra(bdRESTResponseMessage::bdRESTReplyExtra *this)
{
  this->m_transactionID = 0i64;
  *(_QWORD *)&this->m_debugInfoLength = 0i64;
  this->m_isRetryable = 0;
  memset_0(this, 0, 0x1100ui64);
}

/*
==============
bdRESTResponseMessage::bdRESTResponseMessage
==============
*/
void bdRESTResponseMessage::bdRESTResponseMessage(bdRESTResponseMessage *this)
{
  this->m_lobbyService = NULL;
  this->m_lsgResponse.m_statusCode = BD_STATUS_I_AM_A_TEAPOT;
  bdRESTHeaders::bdRESTHeaders(&this->m_lsgResponse.m_headers);
  *(_QWORD *)&this->m_lsgResponse.m_retryAfter = 0i64;
  this->m_lsgResponse.m_isGatewayGenerated = 0;
  this->m_lsgResponse.m_replyExtra.m_transactionID = 0i64;
  *(_QWORD *)&this->m_lsgResponse.m_replyExtra.m_debugInfoLength = 0i64;
  this->m_lsgResponse.m_replyExtra.m_isRetryable = 0;
  memset_0(&this->m_lsgResponse.m_replyExtra, 0, 0x1100ui64);
  this->m_hasBody = 0;
  this->m_body = NULL;
  this->m_contentLength = 0;
  bdRESTResponseMessage::bdRESTError::bdRESTError(&this->m_error);
}

/*
==============
bdRESTResponseMessage::bdRESTError::deserialize
==============
*/
_BOOL8 bdRESTResponseMessage::bdRESTError::deserialize(bdRESTResponseMessage::bdRESTError *this, bdJSONDeserializer *json)
{
  bool FieldByKey; 
  bool v5; 
  bool v6; 
  bdJSONDeserializer value; 

  bdJSONDeserializer::bdJSONDeserializer(&value);
  FieldByKey = bdJSONDeserializer::getFieldByKey(json, "error", &value, 1);
  v5 = FieldByKey && bdJSONDeserializer::getString(&value, (const char *const)&stru_143C9A1A4, (char *const)&this->__vftable + 18, 0x80u);
  *((_BYTE *)&this->__vftable + 16) = v5;
  v6 = FieldByKey && bdJSONDeserializer::getString(&value, "msg", this->m_message.m_buffer, 0x100u);
  *((_BYTE *)&this->__vftable + 17) = v6;
  bdJSONDeserializer::~bdJSONDeserializer(&value);
  return FieldByKey;
}

/*
==============
bdRESTResponseMessage::bdRESTError::deserialize
==============
*/
char bdRESTResponseMessage::bdRESTError::deserialize(bdRESTResponseMessage::bdRESTError *this, bdStructBufferDeserializer *deserializer)
{
  *((_BYTE *)&this->__vftable + 16) = bdStructBufferDeserializer::readString(deserializer, 1u, (char *const)&this->__vftable + 18, 0x81u);
  *((_BYTE *)&this->__vftable + 17) = bdStructBufferDeserializer::readString(deserializer, 2u, this->m_message.m_buffer, 0x101u);
  return 1;
}

/*
==============
bdRESTHeaderFieldDeserializer::deserialize
==============
*/
_BOOL8 bdRESTHeaderFieldDeserializer::deserialize(bdRESTHeaderFieldDeserializer *this, bdStructBufferDeserializer *deserializer)
{
  unsigned __int64 v4; 
  unsigned __int64 v5; 
  size_t v6; 
  size_t v7; 
  bool v8; 
  _BYTE *v9; 
  unsigned __int64 v10; 
  _BYTE *v11; 
  unsigned __int64 v12; 
  char value[64]; 
  char Buf[4096]; 

  bdHandleAssert(*((_QWORD *)&this->__vftable + 2) != 0i64, "m_headers != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdrestresponsemessage.cpp", "bdRESTHeaderFieldDeserializer::deserialize", 0x42u, "m_headers pointer not set. check members are initialized after default constructor is called.", -2i64);
  bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v4 = -1i64;
  v5 = -1i64;
  do
    ++v5;
  while ( *((_BYTE *)&queryFormat.fmt + v5 + 3) );
  v6 = 63i64;
  if ( v5 < 0x3F )
    v6 = v5;
  memcpy_0(value, (char *)&queryFormat.fmt + 3, v6);
  value[v6] = 0;
  bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  do
    ++v4;
  while ( *((_BYTE *)&queryFormat.fmt + v4 + 3) );
  v7 = 4095i64;
  if ( v4 < 0xFFF )
    v7 = v4;
  memcpy_0(Buf, (char *)&queryFormat.fmt + 3, v7);
  Buf[v7] = 0;
  v8 = *((_QWORD *)&this->__vftable + 2) && bdStructBufferDeserializer::readString(deserializer, 1u, value, 0x40u) && bdStructBufferDeserializer::readString(deserializer, 2u, Buf, 0x1000u) && bdRESTHeaders::addField(*((bdRESTHeaders **)&this->__vftable + 2), value, Buf);
  v9 = memchr_0(Buf, 0, 0x1000ui64);
  if ( v9 )
    v10 = v9 - Buf;
  else
    v10 = 4096i64;
  bdHandleAssert(v10 < 0x1000, "bdStrnlen(m_buffer, BufferSize) < BufferSize", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<4095>::~bdStructFixedSizeString", 0x1Fu, "Buffer overrun detected");
  v11 = memchr_0(value, 0, 0x40ui64);
  if ( v11 )
    v12 = v11 - value;
  else
    v12 = 64i64;
  bdHandleAssert(v12 < 0x40, "bdStrnlen(m_buffer, BufferSize) < BufferSize", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<63>::~bdStructFixedSizeString", 0x1Fu, "Buffer overrun detected");
  return v8;
}

/*
==============
bdRESTLSGResponseMessageDeserializer::deserialize
==============
*/
bool bdRESTLSGResponseMessageDeserializer::deserialize(bdRESTLSGResponseMessageDeserializer *this, bdStructBufferDeserializer *deserializer)
{
  bool v5; 
  __int64 v6; 
  __int64 v7; 
  bool v8; 
  bool v10; 
  bool v14; 
  unsigned int readCount; 
  unsigned int value; 
  long double v18[3]; 
  bdStructBufferSerializable ptr[40]; 

  v18[1] = NAN;
  value = 0;
  v5 = bdStructBufferDeserializer::readUInt32(deserializer, 1u, &value);
  **((_DWORD **)&this->__vftable + 2) = bdRESTInternal::HTTPStatusFromInteger(value);
  readCount = 0;
  `eh vector vbase constructor iterator'(ptr, 0x28ui64, 0x20ui64, (void (__fastcall *)(void *))bdRESTHeaderFieldDeserializer::bdRESTHeaderFieldDeserializer, (void (__fastcall *)(void *))bdRESTHeaderFieldDeserializer::`vbase destructor);
  v6 = *((_QWORD *)&this->__vftable + 2) + 8i64;
  v7 = 16i64;
  do
  {
    *((_QWORD *)&ptr[0].__vftable + 2) = v6;
    --v7;
  }
  while ( v7 );
  v8 = v5 && bdStructBufferDeserializer::readObjectArray(deserializer, 6u, ptr, 0x20u, &readCount);
  `eh vector destructor iterator'(ptr, 0x28ui64, 0x20ui64, (void (__fastcall *)(void *))bdRESTHeaderFieldDeserializer::`vbase destructor);
  __asm
  {
    vxorpd  xmm0, xmm0, xmm0
    vmovsd  [rsp+578h+var_540], xmm0
  }
  v10 = v8 && bdStructBufferDeserializer::readFloat64(deserializer, 0xCBu, v18);
  __asm
  {
    vmovsd  xmm0, [rsp+578h+var_540]
    vcvtpd2ps xmm0, xmm0
  }
  _RAX = *((_QWORD *)&this->__vftable + 2);
  __asm { vmovss  dword ptr [rax+2A28h], xmm0 }
  readCount = 0;
  v14 = v10 && bdStructBufferDeserializer::readUInt32(deserializer, 0x12Eu, &readCount);
  *(_DWORD *)(*((_QWORD *)&this->__vftable + 2) + 10796i64) = bdRESTInternal::mimeTypeFromInteger(readCount);
  return v14 && bdStructBufferDeserializer::readBool(deserializer, 0x190u, (bool *)(*((_QWORD *)&this->__vftable + 2) + 10800i64)) && bdStructBufferDeserializer::readObjectBegin(deserializer, 0x3E8u) && bdStructBufferDeserializer::readBlob(deserializer, 1u, (void *)(*((_QWORD *)&this->__vftable + 2) + 11064i64), 0x1000u, (unsigned int *)(*((_QWORD *)&this->__vftable + 2) + 15168i64)) && bdStructBufferDeserializer::readBlob(deserializer, 0x64u, (void *)(*((_QWORD *)&this->__vftable + 2) + 10808i64), 0x100u, (unsigned int *)(*((_QWORD *)&this->__vftable + 2) + 15172i64)) && bdStructBufferDeserializer::readUInt64(deserializer, 0x65u, (unsigned __int64 *)(*((_QWORD *)&this->__vftable + 2) + 15160i64)) && bdStructBufferDeserializer::readBool(deserializer, 0x66u, (bool *)(*((_QWORD *)&this->__vftable + 2) + 15176i64)) && bdStructBufferDeserializer::readObjectEnd(deserializer);
}

/*
==============
bdRESTResponseMessage::bdRESTLSGResponseMessage::dumpToLog
==============
*/
void bdRESTResponseMessage::bdRESTLSGResponseMessage::dumpToLog(bdRESTResponseMessage::bdRESTLSGResponseMessage *this)
{
  const char *v4; 
  int v5; 
  const bdRESTHeaders::bdRESTHeaderField *i; 
  bdREST::bdHTTPStatus m_statusCode; 
  double v8; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 

  m_statusCode = this->m_statusCode;
  _R14 = this;
  bdLogMessage(BD_LOG_INFO, "info/", "bdREST", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdrestresponsemessage.cpp", "bdRESTResponseMessage::bdRESTLSGResponseMessage::dumpToLog", 0x23u, "statusCode:          %d", m_statusCode);
  __asm
  {
    vmovss  xmm0, dword ptr [r14+2A28h]
    vcvtss2sd xmm0, xmm0, xmm0
    vmovsd  [rsp+68h+var_30], xmm0
  }
  bdLogMessage(BD_LOG_INFO, "info/", "bdREST", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdrestresponsemessage.cpp", "bdRESTResponseMessage::bdRESTLSGResponseMessage::dumpToLog", 0x24u, "retryAfter:          %f", v8);
  v4 = bdRESTInternal::mimeTypeEnumToString(_R14->m_contentType);
  bdLogMessage(BD_LOG_INFO, "info/", "bdREST", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdrestresponsemessage.cpp", "bdRESTResponseMessage::bdRESTLSGResponseMessage::dumpToLog", 0x25u, "contentType:         %s", v4);
  LODWORD(v9) = _R14->m_isGatewayGenerated;
  bdLogMessage(BD_LOG_INFO, "info/", "bdREST", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdrestresponsemessage.cpp", "bdRESTResponseMessage::bdRESTLSGResponseMessage::dumpToLog", 0x26u, "isGatewayGenerated:  %d", v9);
  LODWORD(v10) = bdRESTHeaders::getFieldCount(&_R14->m_headers);
  bdLogMessage(BD_LOG_INFO, "info/", "bdREST", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdrestresponsemessage.cpp", "bdRESTResponseMessage::bdRESTLSGResponseMessage::dumpToLog", 0x28u, "header fields count: %u", v10);
  v5 = 0;
  for ( i = bdRESTHeaders::begin(&_R14->m_headers); i != bdRESTHeaders::end(&_R14->m_headers); ++v5 )
  {
    LODWORD(v11) = v5;
    bdLogMessage(BD_LOG_INFO, "info/", "bdREST", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdrestresponsemessage.cpp", "bdRESTResponseMessage::bdRESTLSGResponseMessage::dumpToLog", 0x2Cu, "header[%02d]:  %s: %s", v11, i->m_key, i->m_value);
    ++i;
  }
  bdLogMessage(BD_LOG_INFO, "info/", "bdREST", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdrestresponsemessage.cpp", "bdRESTResponseMessage::bdRESTLSGResponseMessage::dumpToLog", 0x2Fu, "reply_extra.transactionID:      %llu", _R14->m_replyExtra.m_transactionID);
  LODWORD(v12) = _R14->m_replyExtra.m_debugInfoLength;
  bdLogMessage(BD_LOG_INFO, "info/", "bdREST", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdrestresponsemessage.cpp", "bdRESTResponseMessage::bdRESTLSGResponseMessage::dumpToLog", 0x30u, "reply_extra.m_debugInfoLength:  %u", v12);
  LODWORD(v13) = _R14->m_replyExtra.m_retryTokenLength;
  bdLogMessage(BD_LOG_INFO, "info/", "bdREST", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdrestresponsemessage.cpp", "bdRESTResponseMessage::bdRESTLSGResponseMessage::dumpToLog", 0x31u, "reply_extra.m_retryTokenLength: %u", v13);
  bdLogMessage(BD_LOG_INFO, "info/", "bdREST", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdrestresponsemessage.cpp", "bdRESTResponseMessage::bdRESTLSGResponseMessage::dumpToLog", 0x32u, "reply_extra.m_debugInfo:        %.*s", _R14->m_replyExtra.m_debugInfoLength, (const char *)_R14->m_replyExtra.m_debugInfo);
  bdLogMessage(BD_LOG_INFO, "info/", "bdREST", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdrestresponsemessage.cpp", "bdRESTResponseMessage::bdRESTLSGResponseMessage::dumpToLog", 0x33u, "reply_extra.m_retryToken:       %.*s", _R14->m_replyExtra.m_retryTokenLength, (const char *)&_R14->m_replyExtra);
}

/*
==============
bdRESTResponseMessage::dumpToLog
==============
*/
void bdRESTResponseMessage::dumpToLog(bdRESTResponseMessage *this)
{
  BOOL m_hasBody; 
  __int64 v3; 

  bdRESTResponseMessage::bdRESTLSGResponseMessage::dumpToLog(&this->m_lsgResponse);
  m_hasBody = this->m_hasBody;
  bdLogMessage(BD_LOG_INFO, "info/", "bdREST", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdrestresponsemessage.cpp", "bdRESTResponseMessage::dumpToLog", 0x1ABu, "m_hasBody:       %d", m_hasBody);
  LODWORD(v3) = this->m_contentLength;
  bdLogMessage(BD_LOG_INFO, "info/", "bdREST", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdrestresponsemessage.cpp", "bdRESTResponseMessage::dumpToLog", 0x1ACu, "m_contentLength: %d", v3);
  if ( this->m_hasBody )
    bdLogMessage(BD_LOG_INFO, "info/", "bdREST", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdrestresponsemessage.cpp", "bdRESTResponseMessage::dumpToLog", 0x1B0u, "%.*s", this->m_contentLength, (const char *)this->m_body);
}

/*
==============
bdRESTResponseMessage::getBodyAsJSON
==============
*/
__int64 bdRESTResponseMessage::getBodyAsJSON(bdRESTResponseMessage *this, bdJSONDeserializer *deserializer)
{
  unsigned __int8 v4; 
  bdREST::bdMimeType m_contentType; 
  const char *v6; 
  bool v7; 
  bdJSONDeserializer v10; 

  _RSI = deserializer;
  bdJSONDeserializer::bdJSONDeserializer(&v10);
  v4 = 1;
  m_contentType = this->m_lsgResponse.m_contentType;
  if ( m_contentType == BD_MIME_JSON )
  {
    if ( this->m_hasBody )
    {
      if ( this->m_body )
        goto LABEL_8;
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdREST", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdrestresponsemessage.cpp", "bdRESTResponseMessage::getBodyAsJSON", 0x142u, "Can't get body as JSON because the response body is NULL");
    }
    else
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdREST", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdrestresponsemessage.cpp", "bdRESTResponseMessage::getBodyAsJSON", 0x13Cu, "Can't get body as JSON because the response message has no body");
    }
  }
  else
  {
    v6 = bdRESTInternal::mimeTypeEnumToString(m_contentType);
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdREST", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdrestresponsemessage.cpp", "bdRESTResponseMessage::getBodyAsJSON", 0x136u, "Can't get body as JSON because the content type is %s.", v6);
  }
  v4 = 0;
LABEL_8:
  v7 = bdJSONDeserializer::parse(&v10, (const char *)this->m_body);
  if ( v4 )
  {
    if ( v7 )
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rsp+78h+var_30.m_type]
        vmovups ymmword ptr [rsi], ymm0
      }
    }
    else
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdREST", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdrestresponsemessage.cpp", "bdRESTResponseMessage::getBodyAsJSON", 0x14Au, "Can't get body as JSON because body failed to parse as JSON");
      v4 = 0;
    }
  }
  bdJSONDeserializer::~bdJSONDeserializer(&v10);
  return v4;
}

/*
==============
bdRESTResponseMessage::getBodyAsStructBuffer
==============
*/
char bdRESTResponseMessage::getBodyAsStructBuffer(bdRESTResponseMessage *this, bdStructBufferDeserializer *deserializer)
{
  bdREST::bdMimeType m_contentType; 
  const char *v5; 
  bdByteBuffer *v7; 
  bdByteBuffer *v8; 
  size_t m_contentLength; 
  const unsigned __int8 *m_body; 
  unsigned __int8 *m_data; 
  unsigned int v12; 
  __int64 v13; 
  __int64 v14; 
  bdStructSerializationInputStream *p_m_stream; 
  bdByteBuffer *v16; 
  unsigned __int8 *v17; 
  bdReference<bdByteBuffer> buffer; 
  __int64 v19; 
  bdByteBuffer *v20; 
  bdStructBufferDeserializer v21; 

  v19 = -2i64;
  m_contentType = this->m_lsgResponse.m_contentType;
  if ( m_contentType != BD_MIME_PROTOBUF )
  {
    v5 = bdRESTInternal::mimeTypeEnumToString(m_contentType);
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdREST", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdrestresponsemessage.cpp", "bdRESTResponseMessage::getBodyAsStructBuffer", 0x15Du, "Can't get body as struct buffer because the content type is %s.", v5);
    return 0;
  }
  if ( !this->m_hasBody )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdREST", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdrestresponsemessage.cpp", "bdRESTResponseMessage::getBodyAsStructBuffer", 0x163u, "Can't get body as struct buffer because the response message has no body");
    return 0;
  }
  if ( !this->m_body )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdREST", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdrestresponsemessage.cpp", "bdRESTResponseMessage::getBodyAsStructBuffer", 0x169u, "Can't get body as struct buffer because the response body is NULL");
    return 0;
  }
  v7 = (bdByteBuffer *)bdMemory::allocate(0x38ui64);
  v8 = v7;
  buffer.m_ptr = v7;
  if ( v7 )
  {
    m_contentLength = this->m_contentLength;
    m_body = this->m_body;
    v7->m_refCount.m_value._My_val = 0;
    v7->__vftable = (bdByteBuffer_vtbl *)&bdByteBuffer::`vftable';
    v7->m_size = m_contentLength;
    v7->m_data = NULL;
    *(_WORD *)&v7->m_typeChecked = 0;
    v7->m_allocatedData = 0;
    if ( m_body )
    {
      bdHandleAssert(1, "m_data == BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdbytebuffer.inl", "bdByteBuffer::init", 0x31u, "Buffer already allocated. init() called twice?");
      v8->m_size = m_contentLength;
      if ( (_DWORD)m_contentLength )
        v8->allocateBuffer(v8);
      m_data = v8->m_data;
      v8->m_writePtr = m_data;
      v8->m_readPtr = m_data;
      memcpy_0(m_data, m_body, m_contentLength);
    }
    else
    {
      bdHandleAssert(0, "bytesToCopy != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdbytebuffer.inl", "bdByteBuffer::init", 0x41u, "Buffer bytestToCopy should not be null");
    }
  }
  else
  {
    v8 = NULL;
  }
  v20 = v8;
  if ( v8 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v8->m_refCount, 1u);
  v12 = LODWORD(v8->m_data) + v8->m_size - LODWORD(v8->m_readPtr);
  buffer.m_ptr = v8;
  _InterlockedExchangeAdd((volatile signed __int32 *)&v8->m_refCount, 1u);
  bdStructBufferDeserializer::bdStructBufferDeserializer(&v21, (bdReference<bdByteBuffer>)&buffer, v12, 0);
  deserializer->m_nextTag = *(_DWORD *)v13;
  deserializer->m_nextType = *(_DWORD *)(v13 + 4);
  deserializer->m_nestedDepth = *(_DWORD *)(v13 + 8);
  deserializer->m_lastReadResult = *(_DWORD *)(v13 + 12);
  deserializer->m_nestedObjectCount = *(_DWORD *)(v13 + 16);
  deserializer->m_nestedObjectInfo[0] = *(bdStructBufferDeserializer::bdNestedObjectInfo *)(v13 + 20);
  deserializer->m_nestedObjectInfo[1] = *(bdStructBufferDeserializer::bdNestedObjectInfo *)(v13 + 28);
  deserializer->m_nestedObjectInfo[2] = *(bdStructBufferDeserializer::bdNestedObjectInfo *)(v13 + 36);
  deserializer->m_nestedObjectInfo[3] = *(bdStructBufferDeserializer::bdNestedObjectInfo *)(v13 + 44);
  deserializer->m_nestedObjectInfo[4] = *(bdStructBufferDeserializer::bdNestedObjectInfo *)(v13 + 52);
  deserializer->m_nestedObjectInfo[5] = *(bdStructBufferDeserializer::bdNestedObjectInfo *)(v13 + 60);
  deserializer->m_nestedObjectInfo[6] = *(bdStructBufferDeserializer::bdNestedObjectInfo *)(v13 + 68);
  deserializer->m_nestedObjectInfo[7] = *(bdStructBufferDeserializer::bdNestedObjectInfo *)(v13 + 76);
  deserializer->m_nestedObjectInfo[8] = *(bdStructBufferDeserializer::bdNestedObjectInfo *)(v13 + 84);
  deserializer->m_nestedObjectInfo[9] = *(bdStructBufferDeserializer::bdNestedObjectInfo *)(v13 + 92);
  deserializer->m_nestedObjectInfo[10] = *(bdStructBufferDeserializer::bdNestedObjectInfo *)(v13 + 100);
  deserializer->m_nestedObjectInfo[11] = *(bdStructBufferDeserializer::bdNestedObjectInfo *)(v13 + 108);
  deserializer->m_nestedObjectInfo[12] = *(bdStructBufferDeserializer::bdNestedObjectInfo *)(v13 + 116);
  deserializer->m_nestedObjectInfo[13] = *(bdStructBufferDeserializer::bdNestedObjectInfo *)(v13 + 124);
  deserializer->m_nestedObjectInfo[14] = *(bdStructBufferDeserializer::bdNestedObjectInfo *)(v13 + 132);
  deserializer->m_nestedObjectInfo[15] = *(bdStructBufferDeserializer::bdNestedObjectInfo *)(v13 + 140);
  v14 = v13 + 152;
  p_m_stream = &deserializer->m_stream;
  if ( (bdStructSerializationInputStream *)(v13 + 152) != &deserializer->m_stream )
  {
    if ( p_m_stream->m_buffer.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&p_m_stream->m_buffer.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && p_m_stream->m_buffer.m_ptr )
      ((void (__fastcall *)(bdByteBuffer *, __int64))p_m_stream->m_buffer.m_ptr->~bdReferencable)(p_m_stream->m_buffer.m_ptr, 1i64);
    v16 = *(bdByteBuffer **)v14;
    p_m_stream->m_buffer.m_ptr = *(bdByteBuffer **)v14;
    if ( v16 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v16->m_refCount, 1u);
  }
  deserializer->m_stream.m_bufferSize = *(_DWORD *)(v14 + 8);
  bdStructBufferDeserializer::~bdStructBufferDeserializer(&v21);
  v17 = v8->m_data;
  v8->m_writePtr = v17;
  v8->m_readPtr = v17;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v8->m_refCount, 0xFFFFFFFF) == 1 )
    ((void (__fastcall *)(bdByteBuffer *, __int64))v8->~bdReferencable)(v8, 1i64);
  return 1;
}

/*
==============
bdRESTResponseMessage::getBodyRaw
==============
*/
const unsigned __int8 *bdRESTResponseMessage::getBodyRaw(bdRESTResponseMessage *this)
{
  return this->m_body;
}

/*
==============
bdRESTResponseMessage::getContentLength
==============
*/
__int64 bdRESTResponseMessage::getContentLength(bdRESTResponseMessage *this)
{
  return this->m_contentLength;
}

/*
==============
bdRESTResponseMessage::getContentType
==============
*/
__int64 bdRESTResponseMessage::getContentType(bdRESTResponseMessage *this)
{
  return (unsigned int)this->m_lsgResponse.m_contentType;
}

/*
==============
bdRESTResponseMessage::getErrorMessage
==============
*/
__int64 bdRESTResponseMessage::getErrorMessage(bdRESTResponseMessage *this, const char **str)
{
  *str = this->m_error.m_message.m_buffer;
  return *((unsigned __int8 *)&this->m_error.__vftable + 17);
}

/*
==============
bdRESTResponseMessage::getErrorName
==============
*/
__int64 bdRESTResponseMessage::getErrorName(bdRESTResponseMessage *this, const char **str)
{
  *str = (char *)&this->m_error.__vftable + 18;
  return *((unsigned __int8 *)&this->m_error.__vftable + 16);
}

/*
==============
bdRESTResponseMessage::getHTTPStatusCode
==============
*/
__int64 bdRESTResponseMessage::getHTTPStatusCode(bdRESTResponseMessage *this)
{
  return (unsigned int)this->m_lsgResponse.m_statusCode;
}

/*
==============
bdRESTResponseMessage::getLobbyService
==============
*/
bdLobbyService *bdRESTResponseMessage::getLobbyService(bdRESTResponseMessage *this)
{
  return this->m_lobbyService;
}

/*
==============
bdRESTResponseMessage::getTransactionID
==============
*/
unsigned __int64 bdRESTResponseMessage::getTransactionID(bdRESTResponseMessage *this)
{
  return this->m_lsgResponse.m_replyExtra.m_transactionID;
}

/*
==============
bdRESTResponseMessage::hasBody
==============
*/
_BOOL8 bdRESTResponseMessage::hasBody(bdRESTResponseMessage *this)
{
  return this->m_hasBody;
}

/*
==============
bdRESTResponseMessage::headerFieldBegin
==============
*/
const bdRESTHeaders::bdRESTHeaderField *bdRESTResponseMessage::headerFieldBegin(bdRESTResponseMessage *this)
{
  return bdRESTHeaders::begin(&this->m_lsgResponse.m_headers);
}

/*
==============
bdRESTResponseMessage::headerFieldCount
==============
*/
unsigned int bdRESTResponseMessage::headerFieldCount(bdRESTResponseMessage *this)
{
  return bdRESTHeaders::getFieldCount(&this->m_lsgResponse.m_headers);
}

/*
==============
bdRESTResponseMessage::headerFieldEnd
==============
*/
const bdRESTHeaders::bdRESTHeaderField *bdRESTResponseMessage::headerFieldEnd(bdRESTResponseMessage *this)
{
  return bdRESTHeaders::end(&this->m_lsgResponse.m_headers);
}

/*
==============
bdRESTResponseMessage::headerFieldValue
==============
*/
const char *bdRESTResponseMessage::headerFieldValue(bdRESTResponseMessage *this, const char *key)
{
  return bdRESTHeaders::findValue(&this->m_lsgResponse.m_headers, key, 0);
}

/*
==============
bdRESTResponseMessage::initFromBuffer
==============
*/
_BOOL8 bdRESTResponseMessage::initFromBuffer(bdRESTResponseMessage *this, bdLobbyService *lobbyService, bdReference<bdByteBuffer> buffer)
{
  char v6; 
  bool v7; 
  unsigned int v8; 
  bdByteBuffer *v9; 
  bool v10; 
  bdREST::bdMimeType m_contentType; 
  char v12; 
  bdREST::bdMimeType v13; 
  const char *v14; 
  bool v15; 
  bool FieldByKey; 
  bool v18; 
  bool v19; 
  const char *v20; 
  __int64 v22; 
  unsigned int u; 
  unsigned int available; 
  __int64 v25; 
  bdReference<bdByteBuffer> buffera; 
  bdRESTLSGResponseMessageDeserializer v27; 
  bdJSONDeserializer value; 
  __int64 v29; 
  bdByteBuffer *m_ptr; 
  bdJSONDeserializer v31; 
  bdJSONDeserializer v32; 
  bdStructBufferDeserializer v33; 
  bdStructBufferDeserializer deserializer; 

  v29 = -2i64;
  m_ptr = buffer.m_ptr;
  LODWORD(v25) = 0;
  bdRESTResponseMessage::reset(this);
  this->m_lobbyService = lobbyService;
  u = 0;
  if ( !bdByteBuffer::readUInt32((bdByteBuffer *)buffer.m_ptr->__vftable, &u) )
    goto LABEL_4;
  v6 = 1;
  if ( bdREST::BD_REST_VERSION != u )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdREST", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdrestresponsemessage.cpp", "bdRESTResponseMessage::initFromBuffer", 0xC1u, "bdREST version mismatch. Expected: [%u] Received: [%u]", bdREST::BD_REST_VERSION, u);
LABEL_4:
    v6 = 0;
  }
  available = 0;
  *((_QWORD *)&v27.__vftable + 1) = &bdRESTLSGResponseMessageDeserializer::`vbtable';
  *((_QWORD *)&v27.__vftable + 3) = &bdReferencable::`vftable';
  *(_DWORD *)v27.gap20 = 0;
  LODWORD(v25) = 1;
  bdStructBufferSerializable::bdStructBufferSerializable(&v27);
  v27.__vftable = (bdRESTLSGResponseMessageDeserializer_vtbl *)&bdRESTLSGResponseMessageDeserializer::`vftable'{for `bdStructBufferSerializable'};
  *(_QWORD *)&v27.gap20[*(int *)(*((_QWORD *)&v27.__vftable + 1) + 4i64) - 24] = &bdRESTLSGResponseMessageDeserializer::`vftable'{for `bdReferencable'};
  *((_QWORD *)&v27.__vftable + 2) = &this->m_lsgResponse;
  v7 = v6 && bdByteBuffer::readDataType((bdByteBuffer *)buffer.m_ptr->__vftable) == BD_BB_BLOB_TYPE && bdByteBuffer::readUInt32((bdByteBuffer *)buffer.m_ptr->__vftable, &available);
  v8 = available;
  v9 = (bdByteBuffer *)buffer.m_ptr->__vftable;
  buffera.m_ptr = v9;
  if ( v9 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v9->m_refCount, 1u);
  bdStructBufferDeserializer::bdStructBufferDeserializer(&deserializer, (bdReference<bdByteBuffer>)&buffera, v8, 0);
  v10 = v7 && bdRESTLSGResponseMessageDeserializer::deserialize(&v27, &deserializer) && bdByteBuffer::readBool((bdByteBuffer *)buffer.m_ptr->__vftable, &this->m_hasBody) && bdByteBuffer::readBlobPointer((bdByteBuffer *)buffer.m_ptr->__vftable, &this->m_body, &this->m_contentLength);
  if ( !this->m_hasBody && this->m_contentLength )
  {
    v10 = 0;
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdREST", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdrestresponsemessage.cpp", "bdRESTResponseMessage::initFromBuffer", 0xD3u, "contentLength must be 0 if a response has no body");
    goto LABEL_56;
  }
  if ( v10 && !bdREST::isStatusSuccess(this->m_lsgResponse.m_statusCode) && this->m_hasBody )
  {
    m_contentType = this->m_lsgResponse.m_contentType;
    if ( m_contentType != BD_MIME_JSON )
    {
      if ( m_contentType == BD_MIME_PROTOBUF )
      {
        bdStructBufferDeserializer::bdStructBufferDeserializer(&v33);
        v10 = bdRESTResponseMessage::getBodyAsStructBuffer(this, &v33) && bdStructBufferDeserializer::readObject(&v33, 1u, &this->m_error);
        bdStructBufferDeserializer::~bdStructBufferDeserializer(&v33);
      }
      else
      {
        v10 = 0;
        v20 = bdRESTInternal::mimeTypeEnumToString(m_contentType);
        LODWORD(v22) = m_contentType;
        bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdREST", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdrestresponsemessage.cpp", "bdRESTResponseMessage::initFromBuffer", 0xECu, "received error with an unsupported mime type: %s [%d]", v20, v22);
      }
      goto LABEL_56;
    }
    bdJSONDeserializer::bdJSONDeserializer(&v32);
    bdJSONDeserializer::bdJSONDeserializer(&v31);
    v12 = 1;
    v13 = this->m_lsgResponse.m_contentType;
    if ( v13 == BD_MIME_JSON )
    {
      if ( this->m_hasBody )
      {
        if ( this->m_body )
        {
LABEL_32:
          v15 = bdJSONDeserializer::parse(&v31, (const char *)this->m_body);
          if ( v12 )
          {
            if ( v15 )
            {
              __asm
              {
                vmovups ymm0, ymmword ptr [rbp+190h+var_1D0.m_type]
                vmovups ymmword ptr [rbp+190h+var_1B0.m_type], ymm0
              }
            }
            else
            {
              bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdREST", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdrestresponsemessage.cpp", "bdRESTResponseMessage::getBodyAsJSON", 0x14Au, "Can't get body as JSON because body failed to parse as JSON");
              v12 = 0;
            }
          }
          bdJSONDeserializer::~bdJSONDeserializer(&v31);
          v10 = 0;
          if ( v12 )
          {
            bdJSONDeserializer::bdJSONDeserializer(&value);
            FieldByKey = bdJSONDeserializer::getFieldByKey(&v32, "error", &value, 1);
            v18 = FieldByKey && bdJSONDeserializer::getString(&value, (const char *const)&stru_143C9A1A4, (char *const)&this->m_error.__vftable + 18, 0x80u);
            *((_BYTE *)&this->m_error.__vftable + 16) = v18;
            v19 = FieldByKey && bdJSONDeserializer::getString(&value, "msg", this->m_error.m_message.m_buffer, 0x100u);
            *((_BYTE *)&this->m_error.__vftable + 17) = v19;
            bdJSONDeserializer::~bdJSONDeserializer(&value);
            if ( FieldByKey )
              v10 = 1;
          }
          bdJSONDeserializer::~bdJSONDeserializer(&v32);
          goto LABEL_56;
        }
        bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdREST", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdrestresponsemessage.cpp", "bdRESTResponseMessage::getBodyAsJSON", 0x142u, "Can't get body as JSON because the response body is NULL");
      }
      else
      {
        bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdREST", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdrestresponsemessage.cpp", "bdRESTResponseMessage::getBodyAsJSON", 0x13Cu, "Can't get body as JSON because the response message has no body");
      }
    }
    else
    {
      v14 = bdRESTInternal::mimeTypeEnumToString(v13);
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdREST", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdrestresponsemessage.cpp", "bdRESTResponseMessage::getBodyAsJSON", 0x136u, "Can't get body as JSON because the content type is %s.", v14);
    }
    v12 = 0;
    goto LABEL_32;
  }
LABEL_56:
  bdStructBufferDeserializer::~bdStructBufferDeserializer(&deserializer);
  bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&v27.__vftable + 2));
  bdReferencable::~bdReferencable((bdReferencable *)(&v27.__vftable + 3));
  if ( buffer.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->allocateBuffer, 0xFFFFFFFF) == 1 )
  {
    if ( buffer.m_ptr->__vftable )
      (*(void (__fastcall **)(bdByteBuffer_vtbl *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr->__vftable, 1i64);
    buffer.m_ptr->__vftable = NULL;
  }
  return v10;
}

/*
==============
bdRESTResponseMessage::initFromLocalStatus
==============
*/
char bdRESTResponseMessage::initFromLocalStatus(bdRESTResponseMessage *this, bdLobbyService *lobbyService, bdREST::bdHTTPStatus httpStatusCode, const char *errName, const char *errMsg)
{
  bdRESTResponseMessage::reset(this);
  this->m_lobbyService = lobbyService;
  this->m_lsgResponse.m_statusCode = httpStatusCode;
  *((_WORD *)&this->m_error.__vftable + 8) = 0;
  if ( errName )
  {
    bdStrlcpy((char *const)&this->m_error.__vftable + 18, errName, 0x81ui64);
    *((_BYTE *)&this->m_error.__vftable + 16) = 1;
  }
  if ( errMsg )
  {
    bdStrlcpy(this->m_error.m_message.m_buffer, errMsg, 0x101ui64);
    *((_BYTE *)&this->m_error.__vftable + 17) = 1;
  }
  return 1;
}

/*
==============
bdRESTResponseMessage::reset
==============
*/
void bdRESTResponseMessage::reset(bdRESTResponseMessage *this)
{
  __int64 v4; 
  __int64 v12; 
  int Src; 
  bdRESTHeaders v22; 
  int v24; 
  char v25; 
  char v26[4352]; 
  __int64 v27; 
  __int64 v28; 
  char v29; 

  _RDI = this;
  this->m_lobbyService = NULL;
  Src = 418;
  bdRESTHeaders::bdRESTHeaders(&v22);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  [rsp+3B98h+var_1140], xmm0
  }
  v24 = 0;
  v25 = 0;
  v27 = 0i64;
  v28 = 0i64;
  v29 = 0;
  memset_0(v26, 0, sizeof(v26));
  memcpy_0(&_RDI->m_lsgResponse, &Src, sizeof(_RDI->m_lsgResponse));
  _RDI->m_hasBody = 0;
  _RDI->m_body = NULL;
  _RDI->m_contentLength = 0;
  bdRESTResponseMessage::bdRESTError::bdRESTError((bdRESTResponseMessage::bdRESTError *)&Src);
  _RBX = (_BYTE *)v4;
  bdReferencable::operator=((bdReferencable *)((char *)&_RDI->m_error.__vftable + *(int *)(*((_QWORD *)&_RDI->m_error.__vftable + 1) + 4i64) + 8), (const bdReferencable *)(*(int *)(*(_QWORD *)(v4 + 8) + 4i64) + v4 + 8));
  *((_BYTE *)&_RDI->m_error.__vftable + 16) = _RBX[16];
  *((_BYTE *)&_RDI->m_error.__vftable + 17) = _RBX[17];
  __asm
  {
    vmovups ymm0, ymmword ptr [rbx+12h]
    vmovups ymmword ptr [rdi+3B82h], ymm0
    vmovups ymm1, ymmword ptr [rbx+32h]
    vmovups ymmword ptr [rdi+3BA2h], ymm1
    vmovups ymm0, ymmword ptr [rbx+52h]
    vmovups ymmword ptr [rdi+3BC2h], ymm0
    vmovups ymm1, ymmword ptr [rbx+72h]
    vmovups ymmword ptr [rdi+3BE2h], ymm1
  }
  _RDI->m_error.m_name[114] = _RBX[146];
  _RDI = &_RDI->m_error.m_message;
  _RBX = _RBX + 147;
  v12 = 2i64;
  do
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rbx]
      vmovups xmmword ptr [rdi], xmm0
      vmovups xmm1, xmmword ptr [rbx+10h]
      vmovups xmmword ptr [rdi+10h], xmm1
      vmovups xmm0, xmmword ptr [rbx+20h]
      vmovups xmmword ptr [rdi+20h], xmm0
      vmovups xmm1, xmmword ptr [rbx+30h]
      vmovups xmmword ptr [rdi+30h], xmm1
      vmovups xmm0, xmmword ptr [rbx+40h]
      vmovups xmmword ptr [rdi+40h], xmm0
      vmovups xmm1, xmmword ptr [rbx+50h]
      vmovups xmmword ptr [rdi+50h], xmm1
      vmovups xmm0, xmmword ptr [rbx+60h]
      vmovups xmmword ptr [rdi+60h], xmm0
    }
    _RDI = (bdStructFixedSizeString<256> *)((char *)_RDI + 128);
    __asm
    {
      vmovups xmm1, xmmword ptr [rbx+70h]
      vmovups xmmword ptr [rdi-10h], xmm1
    }
    _RBX += 128;
    --v12;
  }
  while ( v12 );
  _RDI->m_buffer[0] = *_RBX;
  bdStructFixedSizeString<256>::~bdStructFixedSizeString<256>((bdStructFixedSizeString<256> *)((char *)&v22.m_fields[8].m_key + 3));
  bdStructFixedSizeString<128>::~bdStructFixedSizeString<128>((bdStructFixedSizeString<128> *)((char *)&v22.m_fields[0].m_key + 2));
  bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)v22.m_fields);
  bdReferencable::~bdReferencable((bdReferencable *)&v22.m_fields[24].m_value);
}

