/*
==============
bdAuth::authorize
==============
*/

bool __fastcall bdAuth::authorize(bdAuth *this, const bdAuthUserInfo *__formal)
{
  return ?authorize@bdAuth@@UEAA_NAEBVbdAuthUserInfo@@@Z(this, __formal);
}

/*
==============
bdAuth::getErrorCode
==============
*/

bdLobbyErrorCode __fastcall bdAuth::getErrorCode(bdAuth *this)
{
  return ?getErrorCode@bdAuth@@QEBA?AW4bdLobbyErrorCode@@XZ(this);
}

/*
==============
bdAuth::tryCreateAccount
==============
*/

bool __fastcall bdAuth::tryCreateAccount(bdAuth *this, const bdAuthUserInfo *__formal)
{
  return ?tryCreateAccount@bdAuth@@UEAA_NAEBVbdAuthUserInfo@@@Z(this, __formal);
}

/*
==============
bdAuth::getExtendedAuthInfo
==============
*/

const bdExtendedAuthInfo *__fastcall bdAuth::getExtendedAuthInfo(bdAuth *this)
{
  return ?getExtendedAuthInfo@bdAuth@@QEBAPEBVbdExtendedAuthInfo@@XZ(this);
}

/*
==============
bdAuth::validateResponseSignature
==============
*/

bool __fastcall bdAuth::validateResponseSignature(bdAuth *this)
{
  return ?validateResponseSignature@bdAuth@@AEAA_NXZ(this);
}

/*
==============
bdAuth::createPlatformExtraHeaders
==============
*/

unsigned int __fastcall bdAuth::createPlatformExtraHeaders(bdAuth *this, bdHTTP::bdHTTPHeader *const extraHeaders, const unsigned int maxNumExtraHeaders)
{
  return ?createPlatformExtraHeaders@bdAuth@@MEAAIQEAUbdHTTPHeader@bdHTTP@@I@Z(this, extraHeaders, maxNumExtraHeaders);
}

/*
==============
bdAuth::bdAuth
==============
*/

void __fastcall bdAuth::bdAuth(bdAuth *this, const unsigned int titleID, const char *authAddress, const unsigned __int16 authPort)
{
  ??0bdAuth@@QEAA@IPEBDG@Z(this, titleID, authAddress, authPort);
}

/*
==============
bdAuth::abortOperation
==============
*/

void __fastcall bdAuth::abortOperation(bdAuth *this)
{
  ?abortOperation@bdAuth@@QEAAXXZ(this);
}

/*
==============
bdAuth::getAuthTicket
==============
*/

const bdAuthTicket *__fastcall bdAuth::getAuthTicket(bdAuth *this)
{
  return ?getAuthTicket@bdAuth@@QEBAPEBVbdAuthTicket@@XZ(this);
}

/*
==============
bdAuth::processPlatformClientTicket
==============
*/

bool __fastcall bdAuth::processPlatformClientTicket(bdAuth *this, unsigned int ivSeed, char *clientTicketBuffer, unsigned int bufferSize)
{
  return ?processPlatformClientTicket@bdAuth@@MEAA_NIPEACI@Z(this, ivSeed, clientTicketBuffer, bufferSize);
}

/*
==============
bdAuth::createPlatformDataJson
==============
*/

bool __fastcall bdAuth::createPlatformDataJson(bdAuth *this, bdJSONSerializer *platformDataJson)
{
  return ?createPlatformDataJson@bdAuth@@MEAA_NAEAVbdJSONSerializer@@@Z(this, platformDataJson);
}

/*
==============
bdAuth::isValidResponse
==============
*/

bool __fastcall bdAuth::isValidResponse(bdAuth *this, unsigned __int64 expectedTaskID, unsigned __int64 responseTaskID)
{
  return ?isValidResponse@bdAuth@@MEBA_N_K0@Z(this, expectedTaskID, responseTaskID);
}

/*
==============
bdAuth::processPlatformData
==============
*/

bool __fastcall bdAuth::processPlatformData(bdAuth *this, bdJSONDeserializer *responseJSON)
{
  return ?processPlatformData@bdAuth@@MEAA_NAEAVbdJSONDeserializer@@@Z(this, responseJSON);
}

/*
==============
bdAuth::handleAuthReply
==============
*/

bdLobbyErrorCode __fastcall bdAuth::handleAuthReply(bdAuth *this, unsigned int expectedTaskID, unsigned int expectedTicketSize)
{
  return ?handleAuthReply@bdAuth@@IEAA?AW4bdLobbyErrorCode@@II@Z(this, expectedTaskID, expectedTicketSize);
}

/*
==============
bdAuth::getStatus
==============
*/

bdAuth::bdStatus __fastcall bdAuth::getStatus(bdAuth *this)
{
  return ?getStatus@bdAuth@@UEAA?AW4bdStatus@1@XZ(this);
}

/*
==============
createAuthService
==============
*/

bdAuth *__fastcall createAuthService(unsigned int titleId, const char *authHostName, unsigned __int16 authPort, const char *npServiceId)
{
  return ?createAuthService@@YAPEAVbdAuth@@IPEBDG0@Z(titleId, authHostName, authPort, npServiceId);
}

/*
==============
bdAuth::isLoginQueueResponse
==============
*/

bool __fastcall bdAuth::isLoginQueueResponse(bdAuth *this)
{
  return ?isLoginQueueResponse@bdAuth@@UEBA_NXZ(this);
}

/*
==============
bdAuth::releaseRequestBuffer
==============
*/

void __fastcall bdAuth::releaseRequestBuffer(bdAuth *this)
{
  ?releaseRequestBuffer@bdAuth@@IEAAXXZ(this);
}

/*
==============
bdAuth::bdAuth
==============
*/

void __fastcall bdAuth::bdAuth(bdAuth *this, const unsigned int *titleID, const bdEnvironmentString *authAddresses, const unsigned __int16 authPort)
{
  ??0bdAuth@@QEAA@QEBIAEBVbdEnvironmentString@@G@Z(this, titleID, authAddresses, authPort);
}

/*
==============
bdAuth::getAuthInfo
==============
*/

const bdAuthInfo *__fastcall bdAuth::getAuthInfo(bdAuth *this)
{
  return ?getAuthInfo@bdAuth@@QEBAPEBVbdAuthInfo@@XZ(this);
}

/*
==============
bdAuth::~bdAuth
==============
*/

void __fastcall bdAuth::~bdAuth(bdAuth *this)
{
  ??1bdAuth@@UEAA@XZ(this);
}

/*
==============
bdAuth::makeAuth
==============
*/

bool __fastcall bdAuth::makeAuth(bdAuth *this)
{
  return ?makeAuth@bdAuth@@IEAA_NXZ(this);
}

/*
==============
bdAuth::createRequestBuffer
==============
*/

bool __fastcall bdAuth::createRequestBuffer(bdAuth *this, unsigned int size)
{
  return ?createRequestBuffer@bdAuth@@IEAA_NI@Z(this, size);
}

/*
==============
bdAuth::bdAuth
==============
*/
void bdAuth::bdAuth(bdAuth *this, const unsigned int titleID, const char *authAddress, const unsigned __int16 authPort)
{
  this->__vftable = (bdAuth_vtbl *)&bdAuth::`vftable';
  this->m_titleVersion = 0;
  *(_QWORD *)&this->m_authInfo.m_titleID = 0i64;
  this->m_authInfo.m_userID = 0i64;
  this->m_authInfo.m_authSessionKeyKDF = 0;
  memset_0(this->m_authInfo.m_data, 0, 0x98ui64);
  *(_QWORD *)this->m_authInfo.m_accountType = 0i64;
  *(_WORD *)&this->m_authInfo.m_accountType[8] = 0;
  *(_QWORD *)this->m_authInfo.m_clientID = 0i64;
  *(_QWORD *)&this->m_authInfo.m_clientID[8] = 0i64;
  *(_QWORD *)&this->m_authInfo.m_clientID[16] = 0i64;
  *(_QWORD *)&this->m_authInfo.m_clientID[24] = 0i64;
  *(_QWORD *)&this->m_authInfo.m_clientID[32] = 0i64;
  *(_QWORD *)&this->m_authInfo.m_clientID[40] = 0i64;
  *(_QWORD *)&this->m_authInfo.m_clientID[48] = 0i64;
  *(_QWORD *)&this->m_authInfo.m_clientID[56] = 0i64;
  bdAuthTicket::bdAuthTicket(&this->m_authTicket);
  this->m_httpAuthRequest = NULL;
  this->m_httpAuthRequestLength = 0;
  this->m_errorCode = BD_NO_ERROR;
  bdEnvironmentString::bdEnvironmentString(&this->m_authAddresses);
  this->m_authPort = authPort;
  this->m_ivSeed = 0;
  bdExtendedAuthInfo::bdExtendedAuthInfo(&this->m_extendedAuthInfo);
  this->m_httpInterface = bdHTTPUtility::newHTTP(0, 0);
  bdEnvironmentString::setAll(&this->m_authAddresses, authAddress);
  this->m_status = BD_READY;
  this->m_task = BD_AUTH_INVALID_REQUEST;
  this->m_responseTask = BD_AUTH_INVALID_REQUEST;
  this->m_titleID[0] = titleID;
  this->m_titleID[1] = titleID;
  this->m_titleID[2] = titleID;
}

/*
==============
bdAuth::bdAuth
==============
*/
void bdAuth::bdAuth(bdAuth *this, const unsigned int *titleID, const bdEnvironmentString *authAddresses, const unsigned __int16 authPort)
{
  this->__vftable = (bdAuth_vtbl *)&bdAuth::`vftable';
  *(_QWORD *)&this->m_authInfo.m_titleID = 0i64;
  this->m_authInfo.m_userID = 0i64;
  this->m_authInfo.m_authSessionKeyKDF = 0;
  memset_0(this->m_authInfo.m_data, 0, 0x98ui64);
  *(_QWORD *)this->m_authInfo.m_accountType = 0i64;
  *(_WORD *)&this->m_authInfo.m_accountType[8] = 0;
  *(_QWORD *)this->m_authInfo.m_clientID = 0i64;
  *(_QWORD *)&this->m_authInfo.m_clientID[8] = 0i64;
  *(_QWORD *)&this->m_authInfo.m_clientID[16] = 0i64;
  *(_QWORD *)&this->m_authInfo.m_clientID[24] = 0i64;
  *(_QWORD *)&this->m_authInfo.m_clientID[32] = 0i64;
  *(_QWORD *)&this->m_authInfo.m_clientID[40] = 0i64;
  *(_QWORD *)&this->m_authInfo.m_clientID[48] = 0i64;
  *(_QWORD *)&this->m_authInfo.m_clientID[56] = 0i64;
  bdAuthTicket::bdAuthTicket(&this->m_authTicket);
  this->m_httpAuthRequest = NULL;
  this->m_httpAuthRequestLength = 0;
  this->m_errorCode = BD_NO_ERROR;
  bdEnvironmentString::bdEnvironmentString(&this->m_authAddresses, authAddresses);
  this->m_authPort = authPort;
  this->m_ivSeed = 0;
  bdExtendedAuthInfo::bdExtendedAuthInfo(&this->m_extendedAuthInfo);
  this->m_httpInterface = bdHTTPUtility::newHTTP(0, 0);
  this->m_status = BD_READY;
  this->m_task = BD_AUTH_INVALID_REQUEST;
  this->m_responseTask = BD_AUTH_INVALID_REQUEST;
  *(double *)this->m_titleID = *(double *)titleID;
  this->m_titleID[2] = titleID[2];
}

/*
==============
bdAuth::~bdAuth
==============
*/
void bdAuth::~bdAuth(bdAuth *this)
{
  char *m_httpAuthRequest; 
  bdHTTP *m_httpInterface; 

  this->__vftable = (bdAuth_vtbl *)&bdAuth::`vftable';
  m_httpAuthRequest = this->m_httpAuthRequest;
  if ( m_httpAuthRequest )
  {
    bdMemory::deallocate(m_httpAuthRequest);
    this->m_httpAuthRequest = NULL;
    this->m_httpAuthRequestLength = 0;
  }
  m_httpInterface = this->m_httpInterface;
  if ( m_httpInterface )
    ((void (__fastcall *)(bdHTTP *, __int64))m_httpInterface->~bdHTTP)(m_httpInterface, 1i64);
  bdExtendedAuthInfo::~bdExtendedAuthInfo((bdExtendedAuthInfo *)&this->m_extendedAuthInfo.gap1012[6]);
  bdReferencable::~bdReferencable((bdReferencable *)&this->m_extendedAuthInfo.gap1012[6]);
  bdAuthTicket::~bdAuthTicket(&this->m_authTicket);
}

/*
==============
bdAuth::abortOperation
==============
*/
void bdAuth::abortOperation(bdAuth *this)
{
  char *m_httpAuthRequest; 

  this->m_status = BD_READY;
  this->m_httpInterface->abortOperation(this->m_httpInterface);
  m_httpAuthRequest = this->m_httpAuthRequest;
  if ( m_httpAuthRequest )
  {
    bdMemory::deallocate(m_httpAuthRequest);
    this->m_httpAuthRequest = NULL;
    this->m_httpAuthRequestLength = 0;
  }
}

/*
==============
bdAuth::authorize
==============
*/
bool bdAuth::authorize(bdAuth *this, const bdAuthUserInfo *__formal)
{
  bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdauth\\bdauth.cpp", "bdAuth::authorize", 0x52u, "This function is not supported on the current platform.");
  return 0;
}

/*
==============
createAuthService
==============
*/
void createAuthService(unsigned int titleId, const char *authHostName, unsigned __int16 authPort, const char *npServiceId)
{
  bdAuthXboxOne *v7; 

  v7 = (bdAuthXboxOne *)bdMemory::allocate(0x3208ui64);
  if ( v7 )
    bdAuthXboxOne::bdAuthXboxOne(v7, titleId, authHostName, authPort);
}

/*
==============
bdAuth::createPlatformDataJson
==============
*/
bool bdAuth::createPlatformDataJson(bdAuth *this, bdJSONSerializer *platformDataJson)
{
  return bdJSONSerializer::writeUInt64(platformDataJson, "version", this->m_titleVersion, 1);
}

/*
==============
bdAuth::createPlatformExtraHeaders
==============
*/
__int64 bdAuth::createPlatformExtraHeaders(bdAuth *this, bdHTTP::bdHTTPHeader *const extraHeaders, const unsigned int maxNumExtraHeaders)
{
  return 0i64;
}

/*
==============
bdAuth::createRequestBuffer
==============
*/
bool bdAuth::createRequestBuffer(bdAuth *this, unsigned int size)
{
  unsigned __int64 v3; 
  char *m_httpAuthRequest; 
  char *v5; 

  v3 = size;
  m_httpAuthRequest = this->m_httpAuthRequest;
  if ( m_httpAuthRequest )
  {
    bdMemory::deallocate(m_httpAuthRequest);
    this->m_httpAuthRequest = NULL;
  }
  this->m_httpAuthRequestLength = v3;
  v5 = (char *)bdMemory::allocate(v3);
  this->m_httpAuthRequest = v5;
  return v5 != NULL;
}

/*
==============
bdAuth::getAuthInfo
==============
*/
bdAuthInfo *bdAuth::getAuthInfo(bdAuth *this)
{
  return &this->m_authInfo;
}

/*
==============
bdAuth::getAuthTicket
==============
*/
bdAuthTicket *bdAuth::getAuthTicket(bdAuth *this)
{
  return &this->m_authTicket;
}

/*
==============
bdAuth::getErrorCode
==============
*/
__int64 bdAuth::getErrorCode(bdAuth *this)
{
  return (unsigned int)this->m_errorCode;
}

/*
==============
bdAuth::getExtendedAuthInfo
==============
*/
bdExtendedAuthInfo *bdAuth::getExtendedAuthInfo(bdAuth *this)
{
  return &this->m_extendedAuthInfo;
}

/*
==============
bdAuth::getStatus
==============
*/
__int64 bdAuth::getStatus(bdAuth *this)
{
  bdHTTP::bdStatus v2; 
  bdHTTP::bdStatus v3; 
  bdLobbyErrorCode v4; 
  int v6; 
  const char *InternalErrorCodeString; 
  unsigned int v8; 
  const char *StatusCodeString; 
  unsigned int v10; 
  int v11; 

  if ( this->m_status != BD_CONNECTING )
    return (unsigned int)this->m_status;
  v2 = this->m_httpInterface->getStatus(this->m_httpInterface);
  v3 = v2;
  if ( ((v2 - 1) & 0xFFFFFFFD) == 0 )
    return (unsigned int)this->m_status;
  if ( v2 == BD_CANCELLED )
  {
    v4 = this->handleReply(this);
    this->m_errorCode = v4;
    if ( v4 != BD_AUTH_CONTINUING )
    {
      this->m_status = BD_READY;
      bdAuth::releaseRequestBuffer(this);
    }
    return (unsigned int)this->m_status;
  }
  v6 = this->m_httpInterface->getInternalError(this->m_httpInterface);
  InternalErrorCodeString = bdAuthHTTPUtility::getInternalErrorCodeString(v6);
  v8 = this->m_httpInterface->getLastHTTPStatus(this->m_httpInterface);
  StatusCodeString = bdAuthHTTPUtility::getStatusCodeString(v3);
  v11 = v6;
  v10 = v8;
  bdLogMessage(BD_LOG_WARNING, "warn/", "bdAuth", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdauth\\bdauth.cpp", "bdAuth::getStatus", 0x96u, "bdAuth status[%s] HTTP Code[%d] Internal Code[%d][%s]", StatusCodeString, v10, v11, InternalErrorCodeString);
  this->m_errorCode = bdAuthHTTPUtility::mapHTTPErrorCode(this->m_httpInterface);
  this->m_status = BD_READY;
  bdAuth::releaseRequestBuffer(this);
  return (unsigned int)this->m_status;
}

/*
==============
bdAuth::handleAuthReply
==============
*/
__int64 bdAuth::handleAuthReply(bdAuth *this, unsigned int expectedTaskID, unsigned int expectedTicketSize)
{
  bdLobbyErrorCode v6; 
  unsigned int v7; 
  int v8; 
  unsigned __int64 v9; 
  __int64 v10; 
  unsigned int v11; 
  bool v12; 
  bool UInt64; 
  char v14; 
  __int64 v15; 
  unsigned int v16; 
  __int64 v17; 
  unsigned int v18; 
  bool v19; 
  unsigned __int64 v20; 
  size_t v21; 
  size_t v22; 
  const char *v24; 
  __int64 v25; 
  unsigned __int64 value; 
  unsigned __int64 v27; 
  bdLobbyErrorCode code[2]; 
  bdJSONDeserializer v29; 
  __int64 v30; 
  bdRSAKey v31; 
  char Src[8]; 
  __int16 v33; 
  char v34[8]; 
  __int64 v35; 
  __int64 v36; 
  __int64 v37; 
  __int64 v38; 
  __int64 v39; 
  __int64 v40; 
  __int64 v41; 
  char buffer[4]; 
  char v43[208]; 
  char v44[208]; 
  char dest[256]; 
  char src[352]; 

  v30 = -2i64;
  bdLogMessage(BD_LOG_INFO, "info/", "bdAuth", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdauth\\bdauth.cpp", "bdAuth::handleAuthReply", 0x135u, "Received reply from DemonWare Auth server");
  v6 = BD_AUTH_NO_ERROR;
  v7 = this->m_httpInterface->getLastHTTPStatus(this->m_httpInterface);
  if ( v7 != 200 )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdAuth", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdauth\\bdauth.cpp", "bdAuth::handleAuthReply", 0x1EBu, "Auth task failed with HTTP code [%u]", v7);
    return (unsigned int)bdAuthHTTPUtility::mapHTTPErrorCode(this->m_httpInterface);
  }
  v8 = 0;
  v27 = 0i64;
  value = 0i64;
  *(_QWORD *)code = 0i64;
  *(_QWORD *)v34 = 0i64;
  v35 = 0i64;
  v36 = 0i64;
  v37 = 0i64;
  v38 = 0i64;
  v39 = 0i64;
  v40 = 0i64;
  v41 = 0i64;
  *(_QWORD *)Src = 0i64;
  v33 = 0;
  memset_0(buffer, 0, 0xCCui64);
  bdJSONDeserializer::bdJSONDeserializer(&v29);
  if ( !bdJSONDeserializer::parse(&v29, this->m_httpAuthReply) || !bdJSONDeserializer::isObject(&v29) )
  {
    v6 = BD_AUTH_JSON_FORMAT_ERROR;
    goto LABEL_69;
  }
  if ( !bdJSONDeserializer::getUInt64(&v29, "auth_task", &value) || !this->isValidResponse(this, expectedTaskID, value) )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdAuth", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdauth\\bdauth.cpp", "bdAuth::handleAuthReply", 0x152u, "Invalid or No Task ID [%llu] in Auth reply", value);
    v6 = BD_AUTH_REPLY_CONTENT_ERROR;
    goto LABEL_69;
  }
  this->m_responseTask = value;
  if ( !bdJSONDeserializer::getUInt64(&v29, "code", (unsigned __int64 *)code) )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdAuth", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdauth\\bdauth.cpp", "bdAuth::handleAuthReply", 0x1E3u, "Auth task returned without error code");
    v6 = BD_AUTH_REPLY_CONTENT_ERROR;
    goto LABEL_69;
  }
  if ( *(_QWORD *)code != 700i64 )
  {
    v6 = code[0];
    v24 = bdLobbyErrorCodeToString(code[0]);
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdAuth", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdauth\\bdauth.cpp", "bdAuth::handleAuthReply", 0x1DEu, "Auth task returned with error code [%llu][%s]", *(_QWORD *)code, v24);
    goto LABEL_69;
  }
  memset_0(src, 0, 0x159ui64);
  memset_0(dest, 0, sizeof(dest));
  if ( !this->m_httpInterface->getHeader(this->m_httpInterface, "X-Signature", src, 345u) )
    goto LABEL_64;
  bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v9 = -1i64;
  v10 = -1i64;
  do
    ++v10;
  while ( src[v10] );
  bdBase64::decode(src, v10, dest, 0x100u);
  bdRSAKey::bdRSAKey(&v31);
  v12 = 0;
  if ( bdRSAKey::importKey(&v31, BD_AUTH_TRAFFIC_SIGNING_KEY, 0x126u) )
  {
    v11 = bdStrlen(this->m_httpAuthReply);
    if ( bdRSAKey::verifySignatureSHA256(&v31, (const unsigned __int8 *)dest, this->m_httpAuthReply, v11, BD_RSA_PKCS_1_PSS) )
      v12 = 1;
  }
  bdRSAKey::~bdRSAKey(&v31);
  if ( !v12 )
  {
LABEL_64:
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdAuth", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdauth\\bdauth.cpp", "bdAuth::handleAuthReply", 0x166u, "Auth traffic verification failed");
    bdJSONDeserializer::~bdJSONDeserializer(&v29);
    return 749i64;
  }
  bdLogMessage(BD_LOG_INFO, "info/", "bdAuth", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdauth\\bdauth.cpp", "bdAuth::validateResponseSignature", 0x222u, "Auth traffic verified");
  UInt64 = bdJSONDeserializer::getUInt64(&v29, "iv_seed", &v27);
  if ( bdJSONDeserializer::hasKey(&v29, "client_id") )
    UInt64 = UInt64 && bdJSONDeserializer::getString(&v29, "client_id", v34, 0x40u);
  if ( bdJSONDeserializer::hasKey(&v29, "account_type") )
    UInt64 = UInt64 && bdJSONDeserializer::getString(&v29, "account_type", Src, 0xAu);
  memset_0(v43, 0, 0xCDui64);
  if ( !UInt64 || !bdJSONDeserializer::getString(&v29, "client_ticket", v43, 0xCDu) )
    goto LABEL_32;
  v14 = 1;
  bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v15 = -1i64;
  do
    ++v15;
  while ( v43[v15] );
  v16 = bdBase64::decode(v43, v15, buffer, expectedTicketSize);
  if ( v16 != expectedTicketSize )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdAuth", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdauth\\bdauth.cpp", "bdAuth::handleAuthReply", 0x18Au, "Decoded client ticket of unexpected size [%u]", v16);
LABEL_32:
    v14 = 0;
  }
  memset_0(v44, 0, 0xCDui64);
  if ( !v14 || !bdJSONDeserializer::getString(&v29, "server_ticket", v44, 0xCDu) )
    goto LABEL_39;
  bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v17 = -1i64;
  do
    ++v17;
  while ( v44[v17] );
  v18 = bdBase64::decode(v44, v17, this->m_authInfo.m_data, 0x80u);
  if ( v18 != 128 )
  {
    LODWORD(v25) = v18;
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdAuth", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdauth\\bdauth.cpp", "bdAuth::handleAuthReply", 0x19Bu, "Decoded server ticket of unexpected size [%u]", v25);
LABEL_39:
    v19 = 0;
    goto LABEL_40;
  }
  if ( !this->processPlatformData(this, &v29) )
    goto LABEL_39;
  v8 = *(_DWORD *)buffer;
  v19 = 1;
LABEL_40:
  if ( v8 == BD_MAGIC_NUMBER )
    goto LABEL_43;
  if ( v19 )
  {
    v19 = this->processPlatformClientTicket(this, v27, buffer, expectedTicketSize);
LABEL_43:
    if ( v19 )
    {
      bdAuthTicket::deserialize(&this->m_authTicket, buffer);
      if ( this->m_authTicket.m_magicNumber == BD_MAGIC_NUMBER )
      {
        *(_OWORD *)this->m_authInfo.m_sessionKey = *(_OWORD *)this->m_authTicket.m_sessionKey;
        *(double *)&this->m_authInfo.m_sessionKey[16] = *(double *)&this->m_authTicket.m_sessionKey[16];
        this->m_authInfo.m_titleID = this->m_authTicket.m_titleID;
        this->m_authInfo.m_IVSeed = v27;
        this->m_authInfo.m_userID = this->m_authTicket.m_userID;
        bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
        v20 = -1i64;
        do
          ++v20;
        while ( Src[v20] );
        if ( this != (bdAuth *)-216i64 )
        {
          v21 = 9i64;
          if ( v20 < 9 )
            v21 = v20;
          memcpy_0(this->m_authInfo.m_accountType, Src, v21);
          this->m_authInfo.m_accountType[v21] = 0;
        }
        bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
        do
          ++v9;
        while ( v34[v9] );
        if ( this != (bdAuth *)-226i64 )
        {
          v22 = 63i64;
          if ( v9 < 0x3F )
            v22 = v9;
          memcpy_0(this->m_authInfo.m_clientID, v34, v22);
          this->m_authInfo.m_clientID[v22] = 0;
        }
        this->m_authInfo.m_authSessionKeyKDF = bdJSONDeserializer::hasKey(&v29, "identity");
        bdLogMessage(BD_LOG_INFO, "info/", "bdAuth", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdauth\\bdauth.cpp", "bdAuth::handleAuthReply", 0x1C4u, "Cross Authentication completed [%I64u]", this->m_authInfo.m_userID);
      }
      else
      {
        bdLogMessage(BD_LOG_WARNING, "warn/", "bdAuth", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdauth\\bdauth.cpp", "bdAuth::handleAuthReply", 0x1C8u, "Auth ticket magic number mismatch");
        v6 = BD_AUTH_INCORRECT_PASSWORD;
        if ( ((value - 11) & 0xFFFFFFFFFFFFFFFDui64) != 0 )
          v6 = BD_AUTH_TICKET_DECRYPTION_ERROR;
      }
      goto LABEL_69;
    }
  }
  bdLogMessage(BD_LOG_WARNING, "warn/", "bdAuth", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdauth\\bdauth.cpp", "bdAuth::handleAuthReply", 0x1D6u, "Auth task reply contains invalid data / format");
  v6 = BD_AUTH_REPLY_CONTENT_ERROR;
LABEL_69:
  bdJSONDeserializer::~bdJSONDeserializer(&v29);
  return (unsigned int)v6;
}

/*
==============
bdAuth::isLoginQueueResponse
==============
*/
bool bdAuth::isLoginQueueResponse(bdAuth *this)
{
  return this->m_responseTask == BD_AUTH_ACCOUNT_FOR_LOGINQUEUE_REPLY;
}

/*
==============
bdAuth::isValidResponse
==============
*/
bool bdAuth::isValidResponse(bdAuth *this, unsigned __int64 expectedTaskID, unsigned __int64 responseTaskID)
{
  return expectedTaskID == responseTaskID;
}

/*
==============
bdAuth::makeAuth
==============
*/
bool bdAuth::makeAuth(bdAuth *this)
{
  bool v2; 
  bool v3; 
  bool v4; 
  __int64 v5; 
  char *m_httpAuthRequest; 
  char *v7; 
  int m_authPort; 
  const char *v9; 
  bdTrulyRandomImpl *v10; 
  bdTrulyRandomImpl *v11; 
  bdSingletonRegistryImpl *Instance; 
  unsigned __int64 RandomUInt64; 
  __int64 v14; 
  bool v15; 
  const char **v16; 
  bdHTTP::bdStatus v17; 
  char *function; 
  __int64 v20; 
  bdEnvironment environment; 
  __int64 v22; 
  bdTrulyRandomImpl *v23; 
  char v24[24]; 
  bdJSONSerializer v25; 
  char buf[32]; 
  bdJSONSerializer v27; 
  char buffer[5120]; 
  char value[5120]; 

  v22 = -2i64;
  v2 = 1;
  if ( !this->getEnvironment(this, &environment) )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdAuth", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdauth\\bdauth.cpp", "bdAuth::makeAuth", 0xA7u, "Failed to determine Environment");
    this->m_errorCode = BD_AUTH_ENVIRONMENT_ERROR;
    v2 = 0;
  }
  memset_0(buffer, 0, sizeof(buffer));
  if ( !v2 )
    return v2;
  this->m_ivSeed = bdCryptoUtils::getNewIVSeed();
  memset_0(this->m_httpAuthReply, 0, sizeof(this->m_httpAuthReply));
  bdJSONSerializer::bdJSONSerializer(&v25, buffer, 0x1400u);
  v3 = bdJSONSerializer::writeBeginObject(&v25) && bdJSONSerializer::writeUInt64(&v25, "auth_task", this->m_task, 1) && bdJSONSerializer::writeUInt64(&v25, "iv_seed", this->m_ivSeed, 1) && bdJSONSerializer::writeUInt64(&v25, "title_id", this->m_titleID[environment], 1) && bdJSONSerializer::writeString(&v25, "identity", "356c4bc3");
  memset_0(value, 0, sizeof(value));
  bdJSONSerializer::bdJSONSerializer(&v27, value, 0x1400u);
  v4 = v3 && bdJSONSerializer::writeBeginObject(&v27) && this->createPlatformDataJson(this, &v27) && bdJSONSerializer::writeEndObject(&v27) && bdJSONSerializer::validate(&v27);
  bdJSONSerializer::~bdJSONSerializer(&v27);
  if ( v4 && bdJSONSerializer::writeString(&v25, "extra_data", value) && bdJSONSerializer::writeEndObject(&v25) && bdJSONSerializer::validate(&v25) )
  {
    v2 = 1;
  }
  else
  {
    v2 = 0;
    this->m_errorCode = BD_AUTH_JSON_FORMAT_ERROR;
  }
  bdJSONSerializer::~bdJSONSerializer(&v25);
  if ( !v2 )
    return v2;
  bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v5 = -1i64;
  do
    ++v5;
  while ( buffer[v5] );
  m_httpAuthRequest = this->m_httpAuthRequest;
  if ( m_httpAuthRequest )
  {
    bdMemory::deallocate(m_httpAuthRequest);
    this->m_httpAuthRequest = NULL;
  }
  this->m_httpAuthRequestLength = v5;
  v7 = (char *)bdMemory::allocate((unsigned int)v5);
  this->m_httpAuthRequest = v7;
  memcpy_0(v7, buffer, this->m_httpAuthRequestLength);
  memset_0(&v27, 0, 0x200ui64);
  m_authPort = this->m_authPort;
  v9 = bdEnvironmentString::get(&this->m_authAddresses, environment);
  LODWORD(function) = m_authPort;
  bdSnprintf((char *)&v27, 0x200ui64, "https:
  bdLogMessage(BD_LOG_INFO, "info/", "bdAuth", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdauth\\bdauth.cpp", "bdAuth::makeAuth", 0xE7u, "Authenticating to: %s", (const char *)&v27);
  if ( !bdSingleton<bdTrulyRandomImpl>::m_instance )
  {
    v10 = (bdTrulyRandomImpl *)bdMemory::allocate(1ui64);
    v23 = v10;
    if ( v10 )
      bdTrulyRandomImpl::bdTrulyRandomImpl(v10);
    else
      v11 = NULL;
    bdSingleton<bdTrulyRandomImpl>::m_instance = v11;
    if ( !v11 )
      goto LABEL_36;
    Instance = bdSingleton<bdSingletonRegistryImpl>::getInstance();
    if ( !bdSingletonRegistryImpl::add(Instance, bdSingleton<bdTrulyRandomImpl>::destroyInstance) )
    {
      bdMemory::deallocate(bdSingleton<bdTrulyRandomImpl>::m_instance);
      bdSingleton<bdTrulyRandomImpl>::m_instance = NULL;
LABEL_36:
      DebugBreak();
    }
  }
  RandomUInt64 = bdTrulyRandomImpl::getRandomUInt64(bdSingleton<bdTrulyRandomImpl>::m_instance);
  v14 = this->createPlatformExtraHeaders(this, (bdHTTP::bdHTTPHeader *const)v24, 1u);
  bdSnprintf(buf, 0x18ui64, "%I64u", RandomUInt64);
  v15 = this->m_httpInterface->initRequest(this->m_httpInterface, BD_POST, (const char *const)&v27, 15000u) && this->m_httpInterface->setHeader(this->m_httpInterface, "Content-Type", "application/json") && this->m_httpInterface->setHeader(this->m_httpInterface, "X-TransactionID", buf);
  if ( (_DWORD)v14 )
  {
    v16 = (const char **)v24;
    do
    {
      v15 = v15 && this->m_httpInterface->setHeader(this->m_httpInterface, *v16, v16[1]);
      v16 += 2;
      --v14;
    }
    while ( v14 );
  }
  v2 = v15 && bdHTTP::setUploadData(this->m_httpInterface, this->m_httpAuthRequest, this->m_httpAuthRequestLength) && bdHTTP::setDownloadBuffer(this->m_httpInterface, this->m_httpAuthReply, 0x1400u) && this->m_httpInterface->sendRequest(this->m_httpInterface) == BD_FAILED;
  v17 = this->m_httpInterface->getStatus(this->m_httpInterface);
  if ( !v2 )
    return v2;
  if ( v17 == BD_FAILED )
  {
    this->m_status = BD_CONNECTING;
    return v2;
  }
  LODWORD(v20) = v17;
  bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdAuth", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdauth\\bdauth.cpp", "bdAuth::makeAuth", 0x108u, "Failed to start HTTP Auth request, status [%d]", v20);
  this->m_errorCode = BD_START_TASK_FAILED;
  return 0;
}

/*
==============
bdAuth::processPlatformClientTicket
==============
*/
char bdAuth::processPlatformClientTicket(bdAuth *this, unsigned int ivSeed, char *clientTicketBuffer, unsigned int bufferSize)
{
  return 1;
}

/*
==============
bdAuth::processPlatformData
==============
*/
char bdAuth::processPlatformData(bdAuth *this, bdJSONDeserializer *responseJSON)
{
  return 1;
}

/*
==============
bdAuth::releaseRequestBuffer
==============
*/
void bdAuth::releaseRequestBuffer(bdAuth *this)
{
  char *m_httpAuthRequest; 

  m_httpAuthRequest = this->m_httpAuthRequest;
  if ( m_httpAuthRequest )
  {
    bdMemory::deallocate(m_httpAuthRequest);
    this->m_httpAuthRequest = NULL;
    this->m_httpAuthRequestLength = 0;
  }
}

/*
==============
bdAuth::tryCreateAccount
==============
*/
bool bdAuth::tryCreateAccount(bdAuth *this, const bdAuthUserInfo *__formal)
{
  bdLogMessage(BD_LOG_INFO, "info/", "bdAuth", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdauth\\bdauth.cpp", "bdAuth::tryCreateAccount", 0x58u, "Creating accounts not supported on the current platform.");
  return 0;
}

/*
==============
bdAuth::validateResponseSignature
==============
*/
__int64 bdAuth::validateResponseSignature(bdAuth *this)
{
  __int64 result; 
  __int64 v3; 
  char *m_httpAuthReply; 
  unsigned int v5; 
  bool v6; 
  bdRSAKey v7; 
  char dest[256]; 
  char src[352]; 

  memset_0(src, 0, 0x159ui64);
  memset_0(dest, 0, sizeof(dest));
  result = ((__int64 (__fastcall *)(bdHTTP *, const char *, char *, __int64))this->m_httpInterface->getHeader)(this->m_httpInterface, "X-Signature", src, 345i64);
  if ( (_BYTE)result )
  {
    bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
    v3 = -1i64;
    do
      ++v3;
    while ( src[v3] );
    bdBase64::decode(src, v3, dest, 0x100u);
    bdRSAKey::bdRSAKey(&v7);
    v6 = 0;
    if ( bdRSAKey::importKey(&v7, BD_AUTH_TRAFFIC_SIGNING_KEY, 0x126u) )
    {
      m_httpAuthReply = this->m_httpAuthReply;
      v5 = bdStrlen(m_httpAuthReply);
      if ( bdRSAKey::verifySignatureSHA256(&v7, (const unsigned __int8 *)dest, m_httpAuthReply, v5, BD_RSA_PKCS_1_PSS) )
        v6 = 1;
    }
    bdRSAKey::~bdRSAKey(&v7);
    if ( v6 )
      bdLogMessage(BD_LOG_INFO, "info/", "bdAuth", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdauth\\bdauth.cpp", "bdAuth::validateResponseSignature", 0x222u, "Auth traffic verified");
    return v6;
  }
  return result;
}

