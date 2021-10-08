/*
==============
bdRedeemableCodeService::redeemPayload
==============
*/

bdReference<bdRemoteTask> *__fastcall bdRedeemableCodeService::redeemPayload(bdRedeemableCodeService *this, bdReference<bdRemoteTask> *result, const bdRedeemPayloadRequest *request, bdRedeemCodeResult *a4)
{
  return ?redeemPayload@bdRedeemableCodeService@@AEAA?AV?$bdReference@VbdRemoteTask@@@@AEBVbdRedeemPayloadRequest@@PEAVbdRedeemCodeResult@@@Z(this, result, request, a4);
}

/*
==============
bdRedeemableCodeService::redeemPayload
==============
*/

bdReference<bdRemoteTask> *__fastcall bdRedeemableCodeService::redeemPayload(bdRedeemableCodeService *this, bdReference<bdRemoteTask> *result, const char *clientTransactionId, const char *payload, const char *payloadSignature, bdRedeemCodeResult *a6)
{
  return ?redeemPayload@bdRedeemableCodeService@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBD00PEAVbdRedeemCodeResult@@@Z(this, result, clientTransactionId, payload, payloadSignature, a6);
}

/*
==============
bdRedeemableCodeService::redeemPayloadFromComms
==============
*/

bdReference<bdRemoteTask> *__fastcall bdRedeemableCodeService::redeemPayloadFromComms(bdRedeemableCodeService *this, bdReference<bdRemoteTask> *result, const char *clientTransactionId, const unsigned __int8 *payload, unsigned int payloadSize, const unsigned __int8 *payloadSignature, unsigned int payloadSignatureSize, bdRedeemCodeResult *a8)
{
  return ?redeemPayloadFromComms@bdRedeemableCodeService@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBDPEBEI1IPEAVbdRedeemCodeResult@@@Z(this, result, clientTransactionId, payload, payloadSize, payloadSignature, payloadSignatureSize, a8);
}

/*
==============
bdRedeemableCodeService::initRedeemPayloadRequestFromComms
==============
*/

void __fastcall bdRedeemableCodeService::initRedeemPayloadRequestFromComms(bdRedeemPayloadRequest *request, const char *context, const char *clientTransactionId, const unsigned __int8 *payload, unsigned int payloadSize, const unsigned __int8 *payloadSignature, unsigned int payloadSignatureSize)
{
  ?initRedeemPayloadRequestFromComms@bdRedeemableCodeService@@SAXPEAVbdRedeemPayloadRequest@@PEBD1PEBEI2I@Z(request, context, clientTransactionId, payload, payloadSize, payloadSignature, payloadSignatureSize);
}

/*
==============
bdRedeemableCodeService::copyBlobToString
==============
*/

void __fastcall bdRedeemableCodeService::copyBlobToString(char *stringBuffer, unsigned __int64 stringBufferSize, const unsigned __int8 *blob, unsigned int blobSize)
{
  ?copyBlobToString@bdRedeemableCodeService@@CAXPEAD_KPEBEI@Z(stringBuffer, stringBufferSize, blob, blobSize);
}

/*
==============
bdRedeemableCodeService::bdRedeemableCodeService
==============
*/

void __fastcall bdRedeemableCodeService::bdRedeemableCodeService(bdRedeemableCodeService *this, bdRemoteTaskManager *const remoteTaskManager, const char *context)
{
  ??0bdRedeemableCodeService@@QEAA@QEAVbdRemoteTaskManager@@PEBD@Z(this, remoteTaskManager, context);
}

/*
==============
bdRedeemableCodeService::redeemCode
==============
*/

bdReference<bdRemoteTask> *__fastcall bdRedeemableCodeService::redeemCode(bdRedeemableCodeService *this, bdReference<bdRemoteTask> *result, const char *clientTransactionId, const char *code, bdRedeemCodeResult *a5)
{
  return ?redeemCode@bdRedeemableCodeService@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBD0PEAVbdRedeemCodeResult@@@Z(this, result, clientTransactionId, code, a5);
}

/*
==============
bdRedeemableCodeService::~bdRedeemableCodeService
==============
*/

void __fastcall bdRedeemableCodeService::~bdRedeemableCodeService(bdRedeemableCodeService *this)
{
  ??1bdRedeemableCodeService@@QEAA@XZ(this);
}

/*
==============
bdRedeemableCodeService::bdRedeemableCodeService
==============
*/
void bdRedeemableCodeService::bdRedeemableCodeService(bdRedeemableCodeService *this, bdRemoteTaskManager *const remoteTaskManager, const char *context)
{
  this->m_remoteTaskManager = remoteTaskManager;
  bdStrlcpy(this->m_context, context, 0x10ui64);
}

/*
==============
bdRedeemableCodeService::~bdRedeemableCodeService
==============
*/
void bdRedeemableCodeService::~bdRedeemableCodeService(bdRedeemableCodeService *this)
{
  this->m_remoteTaskManager = NULL;
}

/*
==============
bdRedeemableCodeService::copyBlobToString
==============
*/
void bdRedeemableCodeService::copyBlobToString(char *stringBuffer, unsigned __int64 stringBufferSize, const unsigned __int8 *blob, unsigned int blobSize)
{
  unsigned __int64 v4; 
  __int64 i; 
  unsigned __int64 v9; 

  v4 = blobSize;
  bdHandleAssert(blobSize < stringBufferSize, "blobSize < stringBufferSize", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdredeemablecode\\bdredeemablecodeservice.cpp", "bdRedeemableCodeService::copyBlobToString", 0x85u, "blob will not fit in string. Check that BD_REDEEMABLE_CODE_MAX_PAYLOAD_SIGNATURE_LENGTH == BD_COMMS_MAX_PAYLOAD_SIGNATURE_LENGTH");
  for ( i = 0i64; ; i = (unsigned int)(i + 1) )
  {
    v9 = stringBufferSize;
    if ( v4 < stringBufferSize )
      v9 = v4;
    if ( (unsigned int)i >= v9 )
      break;
    stringBuffer[i] = blob[i];
  }
  stringBuffer[v4] = 0;
}

/*
==============
bdRedeemableCodeService::initRedeemPayloadRequestFromComms
==============
*/
void bdRedeemableCodeService::initRedeemPayloadRequestFromComms(bdRedeemPayloadRequest *request, const char *context, const char *clientTransactionId, const unsigned __int8 *payload, unsigned int payloadSize, const unsigned __int8 *payloadSignature, unsigned int payloadSignatureSize)
{
  unsigned __int64 v11; 
  unsigned __int64 v12; 
  size_t v13; 
  size_t v14; 
  _BYTE *v15; 
  unsigned __int64 v16; 
  _BYTE *v17; 
  unsigned __int64 v18; 
  char Buf[80]; 
  char stringBuffer[1040]; 

  bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen", -2i64);
  v11 = -1i64;
  v12 = -1i64;
  do
    ++v12;
  while ( *((_BYTE *)&queryFormat.fmt + v12 + 3) );
  v13 = 1024i64;
  if ( v12 < 0x400 )
    v13 = v12;
  memcpy_0(stringBuffer, (char *)&queryFormat.fmt + 3, v13);
  stringBuffer[v13] = 0;
  bdRedeemableCodeService::copyBlobToString(stringBuffer, 0x401ui64, payload, payloadSize);
  bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  do
    ++v11;
  while ( *((_BYTE *)&queryFormat.fmt + v11 + 3) );
  v14 = 64i64;
  if ( v11 < 0x40 )
    v14 = v11;
  memcpy_0(Buf, (char *)&queryFormat.fmt + 3, v14);
  Buf[v14] = 0;
  bdRedeemableCodeService::copyBlobToString(Buf, 0x41ui64, payloadSignature, payloadSignatureSize);
  bdRedeemPayloadRequest::init(request, context, clientTransactionId, stringBuffer, Buf);
  v15 = memchr_0(Buf, 0, 0x41ui64);
  if ( v15 )
    v16 = v15 - Buf;
  else
    v16 = 65i64;
  bdHandleAssert(v16 < 0x41, "bdStrnlen(m_buffer, BufferSize) < BufferSize", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<64>::~bdStructFixedSizeString", 0x1Fu, "Buffer overrun detected");
  v17 = memchr_0(stringBuffer, 0, 0x401ui64);
  if ( v17 )
    v18 = v17 - stringBuffer;
  else
    v18 = 1025i64;
  bdHandleAssert(v18 < 0x401, "bdStrnlen(m_buffer, BufferSize) < BufferSize", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<1024>::~bdStructFixedSizeString", 0x1Fu, "Buffer overrun detected");
}

/*
==============
bdRedeemableCodeService::redeemCode
==============
*/
bdReference<bdRemoteTask> *bdRedeemableCodeService::redeemCode(bdRedeemableCodeService *this, bdReference<bdRemoteTask> *result, const char *clientTransactionId, const char *code, bdRedeemCodeResult *resulta)
{
  bdLobbyErrorCode started; 
  bdStructBufferTask *m_ptr; 
  bdLobbyErrorCode v12; 
  bdReference<bdStructBufferTask> newTask; 
  __int64 v14; 
  bdRedeemCodeRequest request; 

  v14 = -2i64;
  newTask.m_ptr = NULL;
  bdRedeemCodeRequest::bdRedeemCodeRequest(&request);
  bdRedeemCodeRequest::init(&request, this->m_context, clientTransactionId, code);
  started = bdRemoteTaskManager::startStructTask(this->m_remoteTaskManager, &newTask, 0x7Bu, 1u, &request, resulta, NULL);
  if ( started )
  {
    v12 = started;
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdRedeemableCodeService", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdredeemablecode\\bdredeemablecodeservice.cpp", "bdRedeemableCodeService::redeemCode", 0x32u, "Failed to start task: Error %i", v12);
  }
  m_ptr = newTask.m_ptr;
  result->m_ptr = newTask.m_ptr;
  if ( m_ptr )
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
  bdStructFixedSizeString<25>::~bdStructFixedSizeString<25>(&request.m_code);
  bdStructFixedSizeString<25>::~bdStructFixedSizeString<25>(&request.m_clientTransactionId);
  bdStructFixedSizeString<16>::~bdStructFixedSizeString<16>((bdStructFixedSizeString<16> *)(&request.__vftable + 2));
  bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&request.__vftable + 2));
  bdReferencable::~bdReferencable((bdReferencable *)&request.gap55[3]);
  if ( newTask.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&newTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && newTask.m_ptr )
    ((void (__fastcall *)(bdStructBufferTask *, __int64))newTask.m_ptr->~bdReferencable)(newTask.m_ptr, 1i64);
  return result;
}

/*
==============
bdRedeemableCodeService::redeemPayload
==============
*/
bdReference<bdRemoteTask> *bdRedeemableCodeService::redeemPayload(bdRedeemableCodeService *this, bdReference<bdRemoteTask> *result, const bdRedeemPayloadRequest *request, bdRedeemCodeResult *a4)
{
  bdLobbyErrorCode started; 
  bdStructBufferTask *m_ptr; 
  bdLobbyErrorCode v8; 
  bdReference<bdStructBufferTask> v9; 

  v9.m_ptr = NULL;
  started = bdRemoteTaskManager::startStructTask(this->m_remoteTaskManager, &v9, 0x7Bu, 2u, request, a4, NULL);
  if ( started )
  {
    v8 = started;
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdRedeemableCodeService", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdredeemablecode\\bdredeemablecodeservice.cpp", "bdRedeemableCodeService::redeemPayload", 0x66u, "Failed to start task: Error %i", v8);
  }
  m_ptr = v9.m_ptr;
  result->m_ptr = v9.m_ptr;
  if ( m_ptr )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
    m_ptr = v9.m_ptr;
  }
  if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v9.m_ptr )
    ((void (__fastcall *)(bdStructBufferTask *, __int64))v9.m_ptr->~bdReferencable)(v9.m_ptr, 1i64);
  return result;
}

/*
==============
bdRedeemableCodeService::redeemPayload
==============
*/
bdReference<bdRemoteTask> *bdRedeemableCodeService::redeemPayload(bdRedeemableCodeService *this, bdReference<bdRemoteTask> *result, const char *clientTransactionId, const char *payload, const char *payloadSignature, bdRedeemCodeResult *resulta)
{
  bdRedeemPayloadRequest request; 

  bdRedeemPayloadRequest::bdRedeemPayloadRequest(&request);
  bdRedeemPayloadRequest::init(&request, this->m_context, clientTransactionId, payload, payloadSignature);
  bdRedeemableCodeService::redeemPayload(this, result, &request, resulta);
  bdStructFixedSizeString<64>::~bdStructFixedSizeString<64>(&request.m_payloadSignature);
  bdStructFixedSizeString<1024>::~bdStructFixedSizeString<1024>(&request.m_payload);
  bdStructFixedSizeString<25>::~bdStructFixedSizeString<25>(&request.m_clientTransactionId);
  bdStructFixedSizeString<16>::~bdStructFixedSizeString<16>((bdStructFixedSizeString<16> *)(&request.__vftable + 2));
  bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&request.__vftable + 2));
  bdReferencable::~bdReferencable((bdReferencable *)&request.gap47D[3]);
  return result;
}

/*
==============
bdRedeemableCodeService::redeemPayloadFromComms
==============
*/
bdReference<bdRemoteTask> *bdRedeemableCodeService::redeemPayloadFromComms(bdRedeemableCodeService *this, bdReference<bdRemoteTask> *result, const char *clientTransactionId, const unsigned __int8 *payload, unsigned int payloadSize, const unsigned __int8 *payloadSignature, unsigned int payloadSignatureSize, bdRedeemCodeResult *resulta)
{
  bdRedeemPayloadRequest request; 

  bdRedeemPayloadRequest::bdRedeemPayloadRequest(&request);
  bdRedeemableCodeService::initRedeemPayloadRequestFromComms(&request, this->m_context, clientTransactionId, payload, payloadSize, payloadSignature, payloadSignatureSize);
  bdRedeemableCodeService::redeemPayload(this, result, &request, resulta);
  bdStructFixedSizeString<64>::~bdStructFixedSizeString<64>(&request.m_payloadSignature);
  bdStructFixedSizeString<1024>::~bdStructFixedSizeString<1024>(&request.m_payload);
  bdStructFixedSizeString<25>::~bdStructFixedSizeString<25>(&request.m_clientTransactionId);
  bdStructFixedSizeString<16>::~bdStructFixedSizeString<16>((bdStructFixedSizeString<16> *)(&request.__vftable + 2));
  bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&request.__vftable + 2));
  bdReferencable::~bdReferencable((bdReferencable *)&request.gap47D[3]);
  return result;
}

