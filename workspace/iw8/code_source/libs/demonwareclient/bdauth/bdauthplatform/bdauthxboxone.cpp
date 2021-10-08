/*
==============
bdAuthXboxOne::getEnvironment
==============
*/

bool __fastcall bdAuthXboxOne::getEnvironment(bdAuthXboxOne *this, bdEnvironment *environment)
{
  return ?getEnvironment@bdAuthXboxOne@@UEBA_NAEAW4bdEnvironment@@@Z(this, environment);
}

/*
==============
bdAuthXboxOne::handleReply
==============
*/

bdLobbyErrorCode __fastcall bdAuthXboxOne::handleReply(bdAuthXboxOne *this)
{
  return ?handleReply@bdAuthXboxOne@@MEAA?AW4bdLobbyErrorCode@@XZ(this);
}

/*
==============
bdAuthXboxOne::bdAuthXboxOne
==============
*/

void __fastcall bdAuthXboxOne::bdAuthXboxOne(bdAuthXboxOne *this, const unsigned int *titleID, const bdEnvironmentString *authAddresses, const unsigned __int16 authPort)
{
  ??0bdAuthXboxOne@@QEAA@QEBIAEBVbdEnvironmentString@@G@Z(this, titleID, authAddresses, authPort);
}

/*
==============
bdAuthXboxOne::isValidResponse
==============
*/

bool __fastcall bdAuthXboxOne::isValidResponse(bdAuthXboxOne *this, unsigned __int64 expectedTaskID, unsigned __int64 responseTaskID)
{
  return ?isValidResponse@bdAuthXboxOne@@MEBA_N_K0@Z(this, expectedTaskID, responseTaskID);
}

/*
==============
bdAuthXboxOne::getTitleId
==============
*/

unsigned int __fastcall bdAuthXboxOne::getTitleId(bdAuthXboxOne *this)
{
  return ?getTitleId@bdAuthXboxOne@@UEBAIXZ(this);
}

/*
==============
bdAuthXboxOne::createPlatformDataJson
==============
*/

bool __fastcall bdAuthXboxOne::createPlatformDataJson(bdAuthXboxOne *this, bdJSONSerializer *platformDataJson)
{
  return ?createPlatformDataJson@bdAuthXboxOne@@MEAA_NAEAVbdJSONSerializer@@@Z(this, platformDataJson);
}

/*
==============
bdAuthXboxOne::authorizeXBoxOne
==============
*/

bool __fastcall bdAuthXboxOne::authorizeXBoxOne(bdAuthXboxOne *this, const unsigned int userIndex, unsigned int version)
{
  return ?authorizeXBoxOne@bdAuthXboxOne@@QEAA_NII@Z(this, userIndex, version);
}

/*
==============
bdAuthXboxOne::deviceIDInitialized
==============
*/

bool __fastcall bdAuthXboxOne::deviceIDInitialized()
{
  return ?deviceIDInitialized@bdAuthXboxOne@@SA_NXZ();
}

/*
==============
bdAuthXboxOne::isLoginQueueResponse
==============
*/

bool __fastcall bdAuthXboxOne::isLoginQueueResponse(bdAuthXboxOne *this)
{
  return ?isLoginQueueResponse@bdAuthXboxOne@@UEBA_NXZ(this);
}

/*
==============
bdAuthXboxOne::authorizeXBoxOneForUserID
==============
*/

bool __fastcall bdAuthXboxOne::authorizeXBoxOneForUserID(bdAuthXboxOne *this, unsigned __int64 userID, unsigned int version)
{
  return ?authorizeXBoxOneForUserID@bdAuthXboxOne@@QEAA_N_KI@Z(this, userID, version);
}

/*
==============
bdAuthXboxOne::authorize
==============
*/

bool __fastcall bdAuthXboxOne::authorize(bdAuthXboxOne *this, const bdAuthUserInfo *userInfo)
{
  return ?authorize@bdAuthXboxOne@@UEAA_NAEBVbdAuthUserInfo@@@Z(this, userInfo);
}

/*
==============
bdAuthXboxOne::getMachineId
==============
*/

const bdString *__fastcall bdAuthXboxOne::getMachineId(bdAuthXboxOne *this)
{
  return ?getMachineId@bdAuthXboxOne@@QEBAPEBVbdString@@XZ(this);
}

/*
==============
bdAuthXboxOne::getDeviceID
==============
*/

const unsigned __int8 *__fastcall bdAuthXboxOne::getDeviceID()
{
  return ?getDeviceID@bdAuthXboxOne@@SAPEBEXZ();
}

/*
==============
bdAuthXboxOne::getSandboxid
==============
*/

const bdString *__fastcall bdAuthXboxOne::getSandboxid(bdAuthXboxOne *this)
{
  return ?getSandboxid@bdAuthXboxOne@@QEBAPEBVbdString@@XZ(this);
}

/*
==============
bdAuthXboxOne::~bdAuthXboxOne
==============
*/

void __fastcall bdAuthXboxOne::~bdAuthXboxOne(bdAuthXboxOne *this)
{
  ??1bdAuthXboxOne@@UEAA@XZ(this);
}

/*
==============
bdAuthXboxOne::findCertSubstring
==============
*/

bool __fastcall bdAuthXboxOne::findCertSubstring(bdAuthXboxOne *this, const wchar_t *sandbox)
{
  return ?findCertSubstring@bdAuthXboxOne@@IEBA?B_NPEB_W@Z(this, sandbox);
}

/*
==============
bdAuthXboxOne::processPlatformData
==============
*/

bool __fastcall bdAuthXboxOne::processPlatformData(bdAuthXboxOne *this, bdJSONDeserializer *responseJSON)
{
  return ?processPlatformData@bdAuthXboxOne@@MEAA_NAEAVbdJSONDeserializer@@@Z(this, responseJSON);
}

/*
==============
bdAuthXboxOne::bdAuthXboxOne
==============
*/

void __fastcall bdAuthXboxOne::bdAuthXboxOne(bdAuthXboxOne *this, const unsigned int titleID, const char *authAddress, const unsigned __int16 authPort)
{
  ??0bdAuthXboxOne@@QEAA@IPEBDG@Z(this, titleID, authAddress, authPort);
}

/*
==============
bdAuthXboxOne::makeAuthForXBoxOne
==============
*/

bool __fastcall bdAuthXboxOne::makeAuthForXBoxOne(bdAuthXboxOne *this, const unsigned int userIndex)
{
  return ?makeAuthForXBoxOne@bdAuthXboxOne@@IEAA_NI@Z(this, userIndex);
}

/*
==============
bdAuthXboxOne::bdAuthXboxOne
==============
*/
void bdAuthXboxOne::bdAuthXboxOne(bdAuthXboxOne *this, const unsigned int titleID, const char *authAddress, const unsigned __int16 authPort)
{
  bdAuth::bdAuth(this, titleID, authAddress, authPort);
  this->__vftable = (bdAuthXboxOne_vtbl *)&bdAuthXboxOne::`vftable';
  bdString::bdString(&this->m_claimSandboxId);
  bdString::bdString(&this->m_claimMachineId);
  bdHTTPXboxOne::setRequiresToken((bdHTTPXboxOne *)this->m_httpInterface, 1);
}

/*
==============
bdAuthXboxOne::bdAuthXboxOne
==============
*/
void bdAuthXboxOne::bdAuthXboxOne(bdAuthXboxOne *this, const unsigned int *titleID, const bdEnvironmentString *authAddresses, const unsigned __int16 authPort)
{
  bdAuth::bdAuth(this, titleID, authAddresses, authPort);
  this->__vftable = (bdAuthXboxOne_vtbl *)&bdAuthXboxOne::`vftable';
  bdString::bdString(&this->m_claimSandboxId);
  bdString::bdString(&this->m_claimMachineId);
  bdHTTPXboxOne::setRequiresToken((bdHTTPXboxOne *)this->m_httpInterface, 1);
}

/*
==============
bdAuthXboxOne::~bdAuthXboxOne
==============
*/
void bdAuthXboxOne::~bdAuthXboxOne(bdAuthXboxOne *this)
{
  this->__vftable = (bdAuthXboxOne_vtbl *)&bdAuthXboxOne::`vftable';
  bdString::~bdString(&this->m_claimMachineId);
  bdString::~bdString(&this->m_claimSandboxId);
  bdAuth::~bdAuth(this);
}

/*
==============
bdAuthXboxOne::authorize
==============
*/
bool bdAuthXboxOne::authorize(bdAuthXboxOne *this, const bdAuthUserInfo *userInfo)
{
  unsigned __int64 XboxOneUserId; 
  unsigned int XboxOneVersion; 
  bool result; 
  bdHTTPXboxOne *m_httpInterface; 
  unsigned int XboxOneUserIndex; 
  bdHTTPXboxOne *v9; 

  XboxOneUserId = bdAuthUserInfo::getXboxOneUserId((bdAuthUserInfo *)userInfo);
  XboxOneVersion = bdAuthUserInfo::getXboxOneVersion((bdAuthUserInfo *)userInfo);
  if ( XboxOneUserId )
  {
    result = 0;
    if ( this->m_status )
      return result;
    bdLogMessage(BD_LOG_INFO, "info/", "bdAuth", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdauth\\bdauthplatform\\bdauthxboxone.cpp", "bdAuthXboxOne::authorizeXBoxOneForUserID", 0x58u, "Making Auth request for User ID [%llu]", XboxOneUserId);
    m_httpInterface = (bdHTTPXboxOne *)this->m_httpInterface;
    this->m_errorCode = BD_NO_ERROR;
    this->m_titleVersion = XboxOneVersion;
    this->m_task = BD_AUTH_XBOXONE_FOR_MMP_REQUEST;
    result = bdHTTPXboxOne::setUserByID(m_httpInterface, XboxOneUserId);
    if ( !result )
    {
      this->m_errorCode = BD_AUTH_BAD_ACCOUNT;
      return result;
    }
  }
  else
  {
    XboxOneUserIndex = bdAuthUserInfo::getXboxOneUserIndex((bdAuthUserInfo *)userInfo);
    result = 0;
    if ( this->m_status )
      return result;
    bdLogMessage(BD_LOG_INFO, "info/", "bdAuth", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdauth\\bdauthplatform\\bdauthxboxone.cpp", "bdAuthXboxOne::authorizeXBoxOne", 0x47u, "Making Auth request for User index [%u]", XboxOneUserIndex);
    v9 = (bdHTTPXboxOne *)this->m_httpInterface;
    this->m_errorCode = BD_NO_ERROR;
    this->m_titleVersion = XboxOneVersion;
    this->m_task = BD_AUTH_XBOXONE_FOR_MMP_REQUEST;
    bdHTTPXboxOne::setUser(v9, XboxOneUserIndex);
  }
  return bdAuth::makeAuth(this);
}

/*
==============
bdAuthXboxOne::authorizeXBoxOne
==============
*/
bool bdAuthXboxOne::authorizeXBoxOne(bdAuthXboxOne *this, const unsigned int userIndex, unsigned int version)
{
  bdHTTPXboxOne *m_httpInterface; 

  if ( this->m_status )
    return 0;
  bdLogMessage(BD_LOG_INFO, "info/", "bdAuth", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdauth\\bdauthplatform\\bdauthxboxone.cpp", "bdAuthXboxOne::authorizeXBoxOne", 0x47u, "Making Auth request for User index [%u]", userIndex);
  m_httpInterface = (bdHTTPXboxOne *)this->m_httpInterface;
  this->m_errorCode = BD_NO_ERROR;
  this->m_titleVersion = version;
  this->m_task = BD_AUTH_XBOXONE_FOR_MMP_REQUEST;
  bdHTTPXboxOne::setUser(m_httpInterface, userIndex);
  return bdAuth::makeAuth(this);
}

/*
==============
bdAuthXboxOne::authorizeXBoxOneForUserID
==============
*/
bool bdAuthXboxOne::authorizeXBoxOneForUserID(bdAuthXboxOne *this, unsigned __int64 userID, unsigned int version)
{
  bdHTTPXboxOne *m_httpInterface; 
  bool result; 

  if ( this->m_status )
    return 0;
  bdLogMessage(BD_LOG_INFO, "info/", "bdAuth", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdauth\\bdauthplatform\\bdauthxboxone.cpp", "bdAuthXboxOne::authorizeXBoxOneForUserID", 0x58u, "Making Auth request for User ID [%llu]", userID);
  m_httpInterface = (bdHTTPXboxOne *)this->m_httpInterface;
  this->m_errorCode = BD_NO_ERROR;
  this->m_titleVersion = version;
  this->m_task = BD_AUTH_XBOXONE_FOR_MMP_REQUEST;
  result = bdHTTPXboxOne::setUserByID(m_httpInterface, userID);
  if ( result )
    return bdAuth::makeAuth(this);
  this->m_errorCode = BD_AUTH_BAD_ACCOUNT;
  return result;
}

/*
==============
bdAuthXboxOne::createPlatformDataJson
==============
*/
bool bdAuthXboxOne::createPlatformDataJson(bdAuthXboxOne *this, bdJSONSerializer *platformDataJson)
{
  return bdAuth::createPlatformDataJson(this, platformDataJson) && bdJSONSerializer::writeBoolean(platformDataJson, "extended_data", 1);
}

/*
==============
bdAuthXboxOne::deviceIDInitialized
==============
*/
_BOOL8 bdAuthXboxOne::deviceIDInitialized()
{
  return bdAuthXboxOne::s_deviceIDInitialized;
}

/*
==============
bdAuthXboxOne::findCertSubstring
==============
*/
bool bdAuthXboxOne::findCertSubstring(bdAuthXboxOne *this, const wchar_t *sandbox)
{
  wchar_t *v3; 

  if ( wcsstr_0(sandbox, L"CERT") || (v3 = wcsstr_0(sandbox, L".99")) != NULL )
    LOBYTE(v3) = 1;
  return (char)v3;
}

/*
==============
bdAuthXboxOne::getDeviceID
==============
*/
unsigned __int8 *bdAuthXboxOne::getDeviceID()
{
  if ( bdAuthXboxOne::s_deviceIDInitialized )
    return bdAuthXboxOne::s_deviceID;
  bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdauth\\bdauthplatform\\bdauthxboxone.cpp", "bdAuthXboxOne::getDeviceID", 0x12Au, "Cannot call getDeviceID() before Authentication");
  bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdAuth", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdauth\\bdauthplatform\\bdauthxboxone.cpp", "bdAuthXboxOne::getDeviceID", 0x12Bu, "Cannot call getDeviceID() before Authentication");
  return 0i64;
}

/*
==============
bdAuthXboxOne::getEnvironment
==============
*/
char bdAuthXboxOne::getEnvironment(bdAuthXboxOne *this, bdEnvironment *environment)
{
  int ActivationFactoryByPCWSTR; 
  int v4; 
  HSTRING v5; 
  int v6; 
  HSTRING v7; 
  int v8; 
  const wchar_t *StringRawBuffer_0; 
  HSTRING newString; 
  HSTRING v12; 
  __int64 v13; 
  HSTRING_HEADER pGuid; 
  HSTRING string; 
  void *ppActivationFactory; 

  v13 = -2i64;
  pGuid.Reserved.Reserved1 = (void *)0x4C676A8400193376i64;
  *(_QWORD *)&pGuid.Reserved.Reserved2[8] = 0x12A7AE8A8A3BA584i64;
  ppActivationFactory = NULL;
  ActivationFactoryByPCWSTR = __winRT::__getActivationFactoryByPCWSTR(L"Windows.Xbox.Services.XboxLiveConfiguration", (Platform::Guid *)&pGuid, &ppActivationFactory);
  if ( ActivationFactoryByPCWSTR < 0 )
    __abi_WinRTraiseException(ActivationFactoryByPCWSTR);
  string = NULL;
  v4 = (*(__int64 (__fastcall **)(void *, HSTRING *))(*(_QWORD *)ppActivationFactory + 64i64))(ppActivationFactory, &string);
  if ( v4 < 0 )
    __abi_WinRTraiseException(v4);
  v5 = string;
  if ( string )
  {
    v6 = WindowsDuplicateString_0(string, &newString);
    if ( v6 < 0 )
      __abi_WinRTraiseException(v6);
    v7 = newString;
    v5 = string;
  }
  else
  {
    v7 = NULL;
  }
  WindowsDeleteString_0(v5);
  v12 = NULL;
  WindowsDeleteString_0(NULL);
  v12 = NULL;
  WindowsDeleteString_0(NULL);
  if ( ppActivationFactory )
    (*(void (__fastcall **)(void *))(*(_QWORD *)ppActivationFactory + 16i64))(ppActivationFactory);
  v12 = v7;
  string = NULL;
  WindowsDeleteString_0(NULL);
  v8 = WindowsCreateStringReference_0(L"RETAIL", 6u, &pGuid, (HSTRING *)&ppActivationFactory);
  if ( v8 < 0 )
    __abi_WinRTraiseException(v8);
  LODWORD(string) = 0;
  WindowsCompareStringOrdinal_0(v7, (HSTRING)ppActivationFactory, (INT32 *)&string);
  if ( (_DWORD)string )
  {
    StringRawBuffer_0 = WindowsGetStringRawBuffer_0(v7, NULL);
    if ( wcsstr_0(StringRawBuffer_0, L"CERT") || wcsstr_0(StringRawBuffer_0, L".99") )
    {
      bdLogMessage(BD_LOG_INFO, "info/", "bdAuth", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdauth\\bdauthplatform\\bdauthxboxone.cpp", "bdAuthXboxOne::getEnvironment", 0x7Du, "Setting environment to Certification");
      *environment = BD_ENVIRONMENT_CERT;
    }
    else
    {
      bdLogMessage(BD_LOG_INFO, "info/", "bdAuth", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdauth\\bdauthplatform\\bdauthxboxone.cpp", "bdAuthXboxOne::getEnvironment", 0x83u, "Setting environment to Development");
      *environment = BD_ENVIRONMENT_DEV;
    }
  }
  else
  {
    bdLogMessage(BD_LOG_INFO, "info/", "bdAuth", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdauth\\bdauthplatform\\bdauthxboxone.cpp", "bdAuthXboxOne::getEnvironment", 0x77u, "Setting environment to Production");
    *environment = BD_ENVIRONMENT_PROD;
  }
  WindowsDeleteString_0(v7);
  return 1;
}

/*
==============
bdAuthXboxOne::getMachineId
==============
*/
bdString *bdAuthXboxOne::getMachineId(bdAuthXboxOne *this)
{
  return &this->m_claimMachineId;
}

/*
==============
bdAuthXboxOne::getSandboxid
==============
*/
bdString *bdAuthXboxOne::getSandboxid(bdAuthXboxOne *this)
{
  return &this->m_claimSandboxId;
}

/*
==============
bdAuthXboxOne::getTitleId
==============
*/
__int64 bdAuthXboxOne::getTitleId(bdAuthXboxOne *this)
{
  bdAuthXboxOne_vtbl *v1; 
  int v4; 

  v1 = this->__vftable;
  v4 = 2;
  v1->getEnvironment(this, (bdEnvironment *)&v4);
  return this->m_titleID[v4];
}

/*
==============
bdAuthXboxOne::handleReply
==============
*/
bdLobbyErrorCode bdAuthXboxOne::handleReply(bdAuthXboxOne *this)
{
  bdAuthMsgTypes m_task; 

  if ( this->m_task == BD_AUTH_XBOXONE_FOR_MMP_REQUEST )
    return bdAuth::handleAuthReply(this, 0x2Du, 0x80u);
  m_task = this->m_task;
  bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdAuth", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdauth\\bdauthplatform\\bdauthxboxone.cpp", "bdAuthXboxOne::handleReply", 0xB8u, "Unknown Auth task [%d]", m_task);
  return 715;
}

/*
==============
bdAuthXboxOne::isLoginQueueResponse
==============
*/
bool bdAuthXboxOne::isLoginQueueResponse(bdAuthXboxOne *this)
{
  return this->m_responseTask == BD_AUTH_XBOXONE_FOR_LOGINQUEUE_REPLY;
}

/*
==============
bdAuthXboxOne::isValidResponse
==============
*/
bool bdAuthXboxOne::isValidResponse(bdAuthXboxOne *this, unsigned __int64 expectedTaskID, unsigned __int64 responseTaskID)
{
  return (expectedTaskID == 45 || expectedTaskID == 65) && (responseTaskID == 45 || responseTaskID == 65);
}

/*
==============
bdAuthXboxOne::makeAuthForXBoxOne
==============
*/
bool bdAuthXboxOne::makeAuthForXBoxOne(bdAuthXboxOne *this, const unsigned int userIndex)
{
  this->m_task = BD_AUTH_XBOXONE_FOR_MMP_REQUEST;
  bdHTTPXboxOne::setUser((bdHTTPXboxOne *)this->m_httpInterface, userIndex);
  return bdAuth::makeAuth(this);
}

/*
==============
bdAuthXboxOne::processPlatformData
==============
*/
__int64 bdAuthXboxOne::processPlatformData(bdAuthXboxOne *this, bdJSONDeserializer *responseJSON)
{
  unsigned __int8 v4; 
  __int64 v6; 
  bdJSONDeserializer v7; 
  __int64 v8; 
  char v9[8]; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 
  char s[8]; 
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 
  __int64 v18; 
  __int64 v19; 
  __int64 v20; 
  char data[4112]; 
  char value[5120]; 

  v8 = -2i64;
  bdJSONDeserializer::bdJSONDeserializer(&v7);
  memset_0(value, 0, sizeof(value));
  *(_QWORD *)s = 0i64;
  v14 = 0i64;
  v15 = 0i64;
  v16 = 0i64;
  v17 = 0i64;
  v18 = 0i64;
  v19 = 0i64;
  v20 = 0i64;
  *(_QWORD *)v9 = 0i64;
  v10 = 0i64;
  v11 = 0i64;
  v12 = 0i64;
  memset_0(data, 0, 0x1001ui64);
  if ( !bdJSONDeserializer::hasKey(responseJSON, "extra_data") )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdAuth", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdauth\\bdauthplatform\\bdauthxboxone.cpp", "bdAuthXboxOne::processPlatformData", 0xE0u, "Expected Extended Auth Information but got nothing");
LABEL_3:
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdAuth", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdauth\\bdauthplatform\\bdauthxboxone.cpp", "bdAuthXboxOne::processPlatformData", 0xE7u, "Failed to read Auth Extra Data");
LABEL_4:
    v4 = 0;
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdAuth", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdauth\\bdauthplatform\\bdauthxboxone.cpp", "bdAuthXboxOne::processPlatformData", 0x102u, "Expected Extended Auth Information but got nothing");
    goto LABEL_5;
  }
  if ( !bdJSONDeserializer::getString(responseJSON, "extra_data", value, 0x1400u) || !bdJSONDeserializer::parse(&v7, value) )
    goto LABEL_3;
  if ( !bdJSONDeserializer::getString(&v7, "dpi", s, 0x40u) )
    goto LABEL_4;
  bdString::operator=(&this->m_claimMachineId, s);
  if ( !bdJSONDeserializer::getString(&v7, "sbx", v9, 0x20u) )
    goto LABEL_4;
  bdString::operator=(&this->m_claimSandboxId, v9);
  if ( !bdJSONDeserializer::hasKey(&v7, "extended_data") || !bdJSONDeserializer::getString(&v7, "extended_data", data, 0x1001u) )
    goto LABEL_4;
  bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v6 = -1i64;
  do
    ++v6;
  while ( data[v6] );
  bdLogMessage(BD_LOG_INFO, "info/", "bdAuth", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdauth\\bdauthplatform\\bdauthxboxone.cpp", "bdAuthXboxOne::processPlatformData", 0xFDu, "Got Extended Auth Information [%d]bytes", v6);
  if ( bdExtendedAuthInfo::setData(&this->m_extendedAuthInfo, data) )
  {
    v4 = 1;
    if ( !bdPlatformInfo::getDeviceIDInitialized() )
    {
      if ( bdBinASCII::unhexlify(s, 0x28u, bdAuthXboxOne::s_deviceID, 0x14u) == 20 )
      {
        bdAuthXboxOne::s_deviceIDInitialized = 1;
        bdPlatformInfo::setDeviceID(bdAuthXboxOne::s_deviceID, 0x14ui64);
      }
      else
      {
        bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdauth\\bdauthplatform\\bdauthxboxone.cpp", "bdAuthXboxOne::processPlatformData", 0x113u, "Fatal: Failed to decode XboxOne ConsoleID from Auth server");
        bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdAuth", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdauth\\bdauthplatform\\bdauthxboxone.cpp", "bdAuthXboxOne::processPlatformData", 0x114u, "Fatal: Failed to decode XboxOne ConsoleID from Auth server");
      }
    }
  }
  else
  {
    v4 = 0;
  }
LABEL_5:
  bdJSONDeserializer::~bdJSONDeserializer(&v7);
  return v4;
}

