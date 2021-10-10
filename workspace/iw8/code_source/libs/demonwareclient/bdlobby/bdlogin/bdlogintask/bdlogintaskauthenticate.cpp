/*
==============
bdLoginTaskAuthenticate::createTaskBuff
==============
*/

bool __fastcall bdLoginTaskAuthenticate::createTaskBuff(bdLoginTaskAuthenticate *this, unsigned int size)
{
  return ?createTaskBuff@bdLoginTaskAuthenticate@@IEAA_NI@Z(this, size);
}

/*
==============
bdLoginTaskAuthenticate::buildAuthReq
==============
*/

void __fastcall bdLoginTaskAuthenticate::buildAuthReq(bdLoginTaskAuthenticate *this)
{
  ?buildAuthReq@bdLoginTaskAuthenticate@@IEAAXXZ(this);
}

/*
==============
bdLoginTaskAuthenticate::createPlatformDataJson
==============
*/

bool __fastcall bdLoginTaskAuthenticate::createPlatformDataJson(bdLoginTaskAuthenticate *this, bdJSONSerializer *platformDataJson, unsigned int titleVersion)
{
  return ?createPlatformDataJson@bdLoginTaskAuthenticate@@IEAA_NAEAVbdJSONSerializer@@I@Z(this, platformDataJson, titleVersion);
}

/*
==============
bdLoginTaskAuthenticate::bdLoginTaskAuthenticate
==============
*/

void __fastcall bdLoginTaskAuthenticate::bdLoginTaskAuthenticate(bdLoginTaskAuthenticate *this, const bdLoginConfig *loginConfig, bdLoginResult *loginResult)
{
  ??0bdLoginTaskAuthenticate@@QEAA@PEBVbdLoginConfig@@PEAVbdLoginResult@@@Z(this, loginConfig, loginResult);
}

/*
==============
bdLoginTaskAuthenticate::pump
==============
*/

void __fastcall bdLoginTaskAuthenticate::pump(bdLoginTaskAuthenticate *this)
{
  ?pump@bdLoginTaskAuthenticate@@UEAAXXZ(this);
}

/*
==============
bdLoginTaskAuthenticate::processPlatformData
==============
*/

bool __fastcall bdLoginTaskAuthenticate::processPlatformData(bdLoginTaskAuthenticate *this, const bdJSONDeserializer *responseJSON)
{
  return ?processPlatformData@bdLoginTaskAuthenticate@@IEAA_NAEBVbdJSONDeserializer@@@Z(this, responseJSON);
}

/*
==============
bdLoginTaskAuthenticate::~bdLoginTaskAuthenticate
==============
*/

void __fastcall bdLoginTaskAuthenticate::~bdLoginTaskAuthenticate(bdLoginTaskAuthenticate *this)
{
  ??1bdLoginTaskAuthenticate@@UEAA@XZ(this);
}

/*
==============
bdLoginTaskAuthenticate::getTaskCode
==============
*/

bdLoginTaskAuthenticate::AuthStatusCode __fastcall bdLoginTaskAuthenticate::getTaskCode(bdLoginTaskAuthenticate *this)
{
  return ?getTaskCode@bdLoginTaskAuthenticate@@QEBA?AW4AuthStatusCode@1@XZ(this);
}

/*
==============
bdLoginTaskAuthenticate::abortTask
==============
*/

void __fastcall bdLoginTaskAuthenticate::abortTask(bdLoginTaskAuthenticate *this)
{
  ?abortTask@bdLoginTaskAuthenticate@@UEAAXXZ(this);
}

/*
==============
bdLoginTaskAuthenticate::getLSGAddress
==============
*/

const char *__fastcall bdLoginTaskAuthenticate::getLSGAddress(bdLoginTaskAuthenticate *this)
{
  return ?getLSGAddress@bdLoginTaskAuthenticate@@QEBAPEBDXZ(this);
}

/*
==============
bdLoginTaskAuthenticate::processInvalidAuthReply
==============
*/

void __fastcall bdLoginTaskAuthenticate::processInvalidAuthReply(bdLoginTaskAuthenticate *this, unsigned __int64 errorCode)
{
  ?processInvalidAuthReply@bdLoginTaskAuthenticate@@IEAAX_K@Z(this, errorCode);
}

/*
==============
bdLoginTaskAuthenticate::getAuthAddress
==============
*/

const char *__fastcall bdLoginTaskAuthenticate::getAuthAddress(bdLoginTaskAuthenticate *this)
{
  return ?getAuthAddress@bdLoginTaskAuthenticate@@QEBAPEBDXZ(this);
}

/*
==============
bdLoginTaskAuthenticate::resetHttpInterface
==============
*/

void __fastcall bdLoginTaskAuthenticate::resetHttpInterface(bdLoginTaskAuthenticate *this)
{
  ?resetHttpInterface@bdLoginTaskAuthenticate@@IEAAXXZ(this);
}

/*
==============
bdLoginTaskAuthenticate::releaseTaskBuff
==============
*/

void __fastcall bdLoginTaskAuthenticate::releaseTaskBuff(bdLoginTaskAuthenticate *this)
{
  ?releaseTaskBuff@bdLoginTaskAuthenticate@@IEAAXXZ(this);
}

/*
==============
bdLoginTaskAuthenticate::updateAuthStatus
==============
*/

void __fastcall bdLoginTaskAuthenticate::updateAuthStatus(bdLoginTaskAuthenticate *this, const char *messageInfo, const bdLoginTaskAuthenticate::AuthStatusCode *code)
{
  ?updateAuthStatus@bdLoginTaskAuthenticate@@IEAAXPEBDAEBW4AuthStatusCode@1@@Z(this, messageInfo, code);
}

/*
==============
bdLoginTaskAuthenticate::reset
==============
*/

void __fastcall bdLoginTaskAuthenticate::reset(bdLoginTaskAuthenticate *this)
{
  ?reset@bdLoginTaskAuthenticate@@UEAAXXZ(this);
}

/*
==============
bdLoginTaskAuthenticate::buildAuthInfo
==============
*/

void __fastcall bdLoginTaskAuthenticate::buildAuthInfo(bdLoginTaskAuthenticate *this, const char *clientTicketBuffer, const unsigned __int64 ivSeed, const unsigned __int64 taskID, const char *accountType, const char *clientID, const bdJSONDeserializer *responseJSON)
{
  ?buildAuthInfo@bdLoginTaskAuthenticate@@IEAAXPEBC_K1PEBD2AEBVbdJSONDeserializer@@@Z(this, clientTicketBuffer, ivSeed, taskID, accountType, clientID, responseJSON);
}

/*
==============
bdLoginTaskAuthenticate::processAuthReply
==============
*/

void __fastcall bdLoginTaskAuthenticate::processAuthReply(bdLoginTaskAuthenticate *this)
{
  ?processAuthReply@bdLoginTaskAuthenticate@@IEAAXXZ(this);
}

/*
==============
bdLoginTaskAuthenticate::processAuthJSON
==============
*/

void __fastcall bdLoginTaskAuthenticate::processAuthJSON(bdLoginTaskAuthenticate *this, char *clientTicketBuffer, const bdJSONDeserializer *responseJSON)
{
  ?processAuthJSON@bdLoginTaskAuthenticate@@IEAAXPEACAEBVbdJSONDeserializer@@@Z(this, clientTicketBuffer, responseJSON);
}

/*
==============
bdLoginTaskAuthenticate::validateResponseSignature
==============
*/

bool __fastcall bdLoginTaskAuthenticate::validateResponseSignature(bdLoginTaskAuthenticate *this, bdHTTP *httpInterface)
{
  return ?validateResponseSignature@bdLoginTaskAuthenticate@@IEAA_NPEAVbdHTTP@@@Z(this, httpInterface);
}

/*
==============
bdLoginTaskAuthenticate::getTaskMessage
==============
*/

const char *__fastcall bdLoginTaskAuthenticate::getTaskMessage(bdLoginTaskAuthenticate *this)
{
  return ?getTaskMessage@bdLoginTaskAuthenticate@@UEBAPEBDXZ(this);
}

/*
==============
bdLoginTaskAuthenticate::processPlatformClientTicket
==============
*/

bool __fastcall bdLoginTaskAuthenticate::processPlatformClientTicket(bdLoginTaskAuthenticate *this, unsigned int ivSeed, char *clientTicketBuffer, unsigned int bufferSize)
{
  return ?processPlatformClientTicket@bdLoginTaskAuthenticate@@IEAA_NIPEACI@Z(this, ivSeed, clientTicketBuffer, bufferSize);
}

/*
==============
bdLoginTaskAuthenticate::bdLoginTaskAuthenticate
==============
*/
void bdLoginTaskAuthenticate::bdLoginTaskAuthenticate(bdLoginTaskAuthenticate *this, const bdLoginConfig *loginConfig, bdLoginResult *loginResult)
{
  this->__vftable = (bdLoginTaskAuthenticate_vtbl *)&bdLoginTask::`vftable';
  bdStopwatch::bdStopwatch(&this->m_taskTimer);
  this->m_loginConfig = loginConfig;
  this->__vftable = (bdLoginTaskAuthenticate_vtbl *)&bdLoginTaskAuthenticate::`vftable';
  this->m_loginResult = loginResult;
  this->m_authStatusCode = UNINITIALIZED;
  this->m_httpStatus = BD_EMPTY;
  this->m_httpAuthRequest = NULL;
  this->m_httpAuthRequestLength = 0;
  this->m_httpInterface = NULL;
  this->m_firstPartyTokenStatusCode = FETCHING_FIRST_PARTY_TOKEN;
  memset_0(this->m_authStatusMessage, 0, 0xC00ui64);
  memset_0(this->m_httpAuthReply, 0, sizeof(this->m_httpAuthReply));
}

/*
==============
bdLoginTaskAuthenticate::~bdLoginTaskAuthenticate
==============
*/
void bdLoginTaskAuthenticate::~bdLoginTaskAuthenticate(bdLoginTaskAuthenticate *this)
{
  bdHTTP *m_httpInterface; 
  bdHTTP *v3; 
  char *m_httpAuthRequest; 

  this->__vftable = (bdLoginTaskAuthenticate_vtbl *)&bdLoginTaskAuthenticate::`vftable';
  m_httpInterface = this->m_httpInterface;
  if ( m_httpInterface )
  {
    m_httpInterface->abortOperation(m_httpInterface);
    v3 = this->m_httpInterface;
    if ( v3 )
      ((void (__fastcall *)(bdHTTP *, __int64))v3->~bdHTTP)(v3, 1i64);
    this->m_httpInterface = NULL;
  }
  m_httpAuthRequest = this->m_httpAuthRequest;
  if ( m_httpAuthRequest )
  {
    bdMemory::deallocate(m_httpAuthRequest);
    this->m_httpAuthRequest = NULL;
    this->m_httpAuthRequestLength = 0;
  }
  this->__vftable = (bdLoginTaskAuthenticate_vtbl *)&bdLoginTask::`vftable';
}

/*
==============
bdLoginTaskAuthenticate::abortTask
==============
*/
void bdLoginTaskAuthenticate::abortTask(bdLoginTaskAuthenticate *this)
{
  char *m_authStatusMessage; 
  bdHTTP *m_httpInterface; 
  bdHTTP *v4; 
  char *m_httpAuthRequest; 
  bdLoginTaskAuthenticate::AuthStatusCode code; 

  m_authStatusMessage = this->m_authStatusMessage;
  bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticate.cpp", "bdLoginTaskAuthenticate::abortTask", 0x2F9u, "Aborting task, current status: [%s]", this->m_authStatusMessage);
  bdSnprintf(m_authStatusMessage, 0x400ui64, "Aborting task, current status: [%s]", m_authStatusMessage);
  code = CONNECTED;
  bdLoginTaskAuthenticate::updateAuthStatus(this, m_authStatusMessage, &code);
  m_httpInterface = this->m_httpInterface;
  if ( m_httpInterface )
  {
    m_httpInterface->abortOperation(m_httpInterface);
    v4 = this->m_httpInterface;
    if ( v4 )
      ((void (__fastcall *)(bdHTTP *, __int64))v4->~bdHTTP)(v4, 1i64);
    this->m_httpInterface = NULL;
  }
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
bdLoginTaskAuthenticate::buildAuthInfo
==============
*/
void bdLoginTaskAuthenticate::buildAuthInfo(bdLoginTaskAuthenticate *this, const char *clientTicketBuffer, const unsigned __int64 ivSeed, const unsigned __int64 taskID, const char *accountType, const char *clientID, const bdJSONDeserializer *responseJSON)
{
  unsigned int v9; 
  bdLoginResult *m_loginResult; 
  char *m_clientID; 
  unsigned __int64 v12; 
  size_t v13; 
  double ElapsedTimeInSeconds; 
  double v15; 
  bdLoginTaskAuthenticate::AuthStatusCode code; 

  v9 = ivSeed;
  bdAuthTicket::deserialize(&this->m_loginResult->m_authTicket, clientTicketBuffer);
  m_loginResult = this->m_loginResult;
  if ( m_loginResult->m_authTicket.m_magicNumber == BD_MAGIC_NUMBER )
  {
    *(_OWORD *)m_loginResult->m_sessionKey = *(_OWORD *)m_loginResult->m_authTicket.m_sessionKey;
    *(double *)&m_loginResult->m_sessionKey[16] = *(double *)&m_loginResult->m_authTicket.m_sessionKey[16];
    this->m_loginResult->m_titleID = this->m_loginResult->m_authTicket.m_titleID;
    this->m_loginResult->m_IVSeed = v9;
    this->m_loginResult->m_userAccount.m_userID = this->m_loginResult->m_authTicket.m_userID;
    bdStrlcpy(this->m_loginResult->m_firstPartyUsername, this->m_loginResult->m_authTicket.m_username, 0x40ui64);
    bdStrlcpy(this->m_loginResult->m_userAccount._bytes_20, accountType, 0xAui64);
    if ( this->m_loginResult->m_titleID != 5311 || bdLoginConfig::getEnvironment((bdLoginConfig *)this->m_loginConfig) )
    {
      bdStrlcpy(this->m_loginResult->m_clientID, clientID, 0x40ui64);
    }
    else
    {
      m_clientID = this->m_loginResult->m_clientID;
      bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
      v12 = -1i64;
      do
        ++v12;
      while ( aDemonware[v12] );
      if ( m_clientID )
      {
        v13 = 63i64;
        if ( v12 < 0x3F )
          v13 = v12;
        memcpy_0(m_clientID, "demonware", v13);
        m_clientID[v13] = 0;
      }
    }
    this->m_loginResult->m_authSessionKeyKDF = bdJSONDeserializer::hasKey((bdJSONDeserializer *)responseJSON, "identity");
    bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticate.cpp", "bdLoginTaskAuthenticate::buildAuthInfo", 0x151u, "Cross Authentication completed [%I64u]", this->m_loginResult->m_userAccount.m_userID);
    bdSnprintf(this->m_authStatusMessage, 0x400ui64, "Cross Authentication completed [%I64u]", this->m_loginResult->m_userAccount.m_userID);
    bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticate.cpp", "bdLoginTaskAuthenticate::buildAuthInfo", 0x156u, "Setting state to COMPLETED");
    code = DISCONNECTED;
    bdLoginTaskAuthenticate::updateAuthStatus(this, this->m_authStatusMessage, &code);
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticate.cpp", "bdLoginTaskAuthenticate::buildAuthInfo", 0x15Bu, "Auth ticket magic number mismatch");
    bdHandleAssert(1, "(messageInfo != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticate.cpp", "bdLoginTaskAuthenticate::updateAuthStatus", 0xA1u, "Must provide valid message to update auth task status!");
    this->m_authStatusCode = CONNECTED;
    if ( ((taskID - 11) & 0xFFFFFFFFFFFFFFFDui64) != 0 )
    {
      bdStrlcpy(this->m_authStatusMessage, "Auth ticket decryption error", 0x400ui64);
      ElapsedTimeInSeconds = bdStopwatch::getElapsedTimeInSeconds(&this->m_taskTimer);
      bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticate.cpp", "bdLoginTaskAuthenticate::updateAuthStatus", 0xA9u, "Task finished after %2.1f seconds", *(float *)&ElapsedTimeInSeconds);
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticate.cpp", "bdLoginTaskAuthenticate::buildAuthInfo", 0x165u, "Auth ticket decryption error");
    }
    else
    {
      bdStrlcpy(this->m_authStatusMessage, "Incorrect auth password", 0x400ui64);
      v15 = bdStopwatch::getElapsedTimeInSeconds(&this->m_taskTimer);
      bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticate.cpp", "bdLoginTaskAuthenticate::updateAuthStatus", 0xA9u, "Task finished after %2.1f seconds", *(float *)&v15);
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticate.cpp", "bdLoginTaskAuthenticate::buildAuthInfo", 0x160u, "Incorrect auth password");
    }
  }
}

/*
==============
bdLoginTaskAuthenticate::buildAuthReq
==============
*/
void bdLoginTaskAuthenticate::buildAuthReq(bdLoginTaskAuthenticate *this)
{
  const char *PlatformToken; 
  __int64 v3; 
  __int64 v4; 
  double v5; 
  unsigned __int64 NewIVSeed; 
  bool v7; 
  unsigned __int64 v8; 
  bool v9; 
  bool v10; 
  bdLoginConfig *m_loginConfig; 
  bdEnvironment Environment; 
  unsigned int TitleID; 
  bool v14; 
  const char *ServiceLevel; 
  bool v16; 
  bool v17; 
  bool v18; 
  unsigned int TitleVersion; 
  const char *v20; 
  const char *v21; 
  bool m_ok; 
  const char *v23; 
  bool v25; 
  bool v26; 
  bool v27; 
  bool v28; 
  bool v29; 
  bool v30; 
  char *m_httpAuthRequest; 
  char *v32; 
  const char *AuthAddress; 
  bdLoginConfig *v34; 
  const char *GameID; 
  const char *Region; 
  bool v37; 
  char *m_authAddress; 
  bdTrulyRandomImpl *v39; 
  bdSingletonRegistryImpl *Instance; 
  unsigned __int64 RandomUInt64; 
  bdHTTP *v42; 
  bool v43; 
  bool v44; 
  bool v45; 
  bool v46; 
  bool v47; 
  bool v48; 
  double ElapsedTimeInSeconds; 
  __int64 line; 
  bdLoginTaskAuthenticate::AuthStatusCode code[2]; 
  __int64 v52; 
  bdJSONSerializer v53; 
  char buf[32]; 
  bdJSONSerializer v55; 
  char buffer[6784]; 
  char value[6784]; 

  v52 = -2i64;
  PlatformToken = bdLoginResult::getPlatformToken(this->m_loginResult);
  bdHandleAssert(PlatformToken != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v3 = -1i64;
  v4 = -1i64;
  do
    ++v4;
  while ( PlatformToken[v4] );
  if ( v4 )
  {
    bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticate.cpp", "bdLoginTaskAuthenticate::buildAuthReq", 0x272u, "Making Auth request to Demonware");
    this->m_ok = 1;
    memset_0(buffer, 0, sizeof(buffer));
    NewIVSeed = bdCryptoUtils::getNewIVSeed();
    memset_0(this->m_httpAuthReply, 0, sizeof(this->m_httpAuthReply));
    bdJSONSerializer::bdJSONSerializer(&v53, buffer, 0x1A80u);
    v7 = this->m_ok && bdJSONSerializer::writeBeginObject(&v53);
    this->m_ok = v7;
    switch ( bdLoginConfig::getLoginType((bdLoginConfig *)this->m_loginConfig) )
    {
      case 2:
        v8 = 46i64;
        goto LABEL_17;
      case 3:
        v8 = 44i64;
        goto LABEL_17;
      case 4:
        v8 = 84i64;
        goto LABEL_17;
      case 5:
        v8 = 90i64;
        goto LABEL_17;
      case 6:
        v8 = 28i64;
        goto LABEL_17;
      case 7:
        v8 = 78i64;
        goto LABEL_17;
      case 8:
        v8 = 72i64;
LABEL_17:
        v9 = this->m_ok && bdJSONSerializer::writeUInt64(&v53, "auth_task", v8, 1);
        this->m_ok = v9;
        v10 = v9 && bdJSONSerializer::writeUInt64(&v53, "iv_seed", NewIVSeed, 1);
        this->m_ok = v10;
        v14 = 0;
        if ( v10 )
        {
          m_loginConfig = (bdLoginConfig *)this->m_loginConfig;
          Environment = bdLoginResult::getEnvironment(this->m_loginResult);
          TitleID = bdLoginConfig::getTitleID(m_loginConfig, Environment);
          if ( bdJSONSerializer::writeUInt64(&v53, "title_id", TitleID, 1) )
            v14 = 1;
        }
        this->m_ok = v14;
        v16 = 0;
        if ( v14 )
        {
          ServiceLevel = bdLoginConfig::getServiceLevel((bdLoginConfig *)this->m_loginConfig);
          if ( bdJSONSerializer::writeString(&v53, "service_level", ServiceLevel) )
            v16 = 1;
        }
        this->m_ok = v16;
        v17 = v16 && bdJSONSerializer::writeString(&v53, "identity", "356c4bc3");
        this->m_ok = v17;
        memset_0(value, 0, sizeof(value));
        bdJSONSerializer::bdJSONSerializer(&v55, value, 0x1A80u);
        v18 = this->m_ok && bdJSONSerializer::writeBeginObject(&v55);
        this->m_ok = v18;
        if ( !v18 )
          goto LABEL_56;
        TitleVersion = bdLoginConfig::getTitleVersion((bdLoginConfig *)this->m_loginConfig);
        this->m_ok = 1;
        this->m_ok = bdJSONSerializer::writeUInt64(&v55, "version", TitleVersion, 1);
        v20 = bdLoginResult::getPlatformToken(this->m_loginResult);
        v21 = (const char *)memchr_0(v20, 0, 1ui64);
        if ( v21 && v21 == v20 )
        {
          m_ok = this->m_ok;
        }
        else
        {
          m_ok = 0;
          if ( this->m_ok )
          {
            v23 = bdLoginResult::getPlatformToken(this->m_loginResult);
            if ( bdJSONSerializer::writeString(&v55, "token", v23) )
              m_ok = 1;
          }
          this->m_ok = m_ok;
        }
        if ( m_ok && bdJSONSerializer::writeBoolean(&v55, "extended_data", 1) )
          v25 = 1;
        else
LABEL_56:
          v25 = 0;
        this->m_ok = v25;
        v26 = v25 && bdJSONSerializer::writeEndObject(&v55);
        this->m_ok = v26;
        v27 = v26 && bdJSONSerializer::validate(&v55);
        this->m_ok = v27;
        bdJSONSerializer::~bdJSONSerializer(&v55);
        v28 = this->m_ok && bdJSONSerializer::writeString(&v53, "extra_data", value);
        this->m_ok = v28;
        v29 = v28 && bdJSONSerializer::writeEndObject(&v53);
        this->m_ok = v29;
        v30 = v29 && bdJSONSerializer::validate(&v53);
        this->m_ok = v30;
        if ( !v30 )
        {
          code[0] = CONNECTED;
          bdLoginTaskAuthenticate::updateAuthStatus(this, "Failed to serialize JSON for authentication request", code);
          bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticate.cpp", "bdLoginTaskAuthenticate::buildAuthReq", 0x2A8u, "Failed to serialize JSON for authentication request");
        }
        bdJSONSerializer::~bdJSONSerializer(&v53);
        if ( !this->m_ok )
          return;
        bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
        do
          ++v3;
        while ( buffer[v3] );
        m_httpAuthRequest = this->m_httpAuthRequest;
        if ( m_httpAuthRequest )
        {
          bdMemory::deallocate(m_httpAuthRequest);
          this->m_httpAuthRequest = NULL;
        }
        this->m_httpAuthRequestLength = v3;
        v32 = (char *)bdMemory::allocate((unsigned int)v3);
        this->m_httpAuthRequest = v32;
        memcpy_0(v32, buffer, this->m_httpAuthRequestLength);
        bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticate.cpp", "bdLoginTaskAuthenticate::buildAuthReq", 0x2B2u, "HTTP Request Params: %s", this->m_httpAuthRequest);
        memset_0(&v55, 0, 0x200ui64);
        AuthAddress = bdLoginConfig::getAuthAddress((bdLoginConfig *)this->m_loginConfig);
        v34 = (bdLoginConfig *)this->m_loginConfig;
        if ( *AuthAddress )
        {
          LODWORD(line) = bdLoginConfig::getAuthPort(v34);
          m_authAddress = (char *)bdLoginConfig::getAuthAddress((bdLoginConfig *)this->m_loginConfig);
        }
        else
        {
          GameID = bdLoginConfig::getGameID(v34);
          Region = bdLoginConfig::getRegion((bdLoginConfig *)this->m_loginConfig);
          code[0] = bdLoginResult::getEnvironment(this->m_loginResult);
          v37 = bdLoginUtils::getAuthAddress((char (*)[1024])this->m_authAddress, (const bdEnvironment *)code, Region, GameID);
          this->m_ok = v37;
          if ( !v37 )
          {
            bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticate.cpp", "bdLoginTaskAuthenticate::buildAuthReq", 0x2CDu, "Failed to disover auth environment, can't connect to service");
            code[0] = DISCONNECTING;
            bdLoginTaskAuthenticate::updateAuthStatus(this, "Failed to disover auth environment, can't connect to service", code);
            return;
          }
          LODWORD(line) = bdLoginConfig::getAuthPort((bdLoginConfig *)this->m_loginConfig);
          m_authAddress = this->m_authAddress;
        }
        bdSnprintf((char *)&v55, 0x200ui64, "https:
        bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticate.cpp", "bdLoginTaskAuthenticate::buildAuthReq", 0x2D9u, "Authenticating to: %s", (const char *)&v55);
        if ( bdSingleton<bdTrulyRandomImpl>::m_instance )
          goto LABEL_96;
        v39 = (bdTrulyRandomImpl *)bdMemory::allocate(1ui64);
        *(_QWORD *)code = v39;
        if ( v39 )
          bdTrulyRandomImpl::bdTrulyRandomImpl(v39);
        bdSingleton<bdTrulyRandomImpl>::m_instance = v39;
        if ( !v39 )
          goto LABEL_95;
        Instance = bdSingleton<bdSingletonRegistryImpl>::getInstance();
        if ( !bdSingletonRegistryImpl::add(Instance, bdSingleton<bdTrulyRandomImpl>::destroyInstance) )
        {
          bdMemory::deallocate(bdSingleton<bdTrulyRandomImpl>::m_instance);
          bdSingleton<bdTrulyRandomImpl>::m_instance = NULL;
LABEL_95:
          DebugBreak();
        }
LABEL_96:
        RandomUInt64 = bdTrulyRandomImpl::getRandomUInt64(bdSingleton<bdTrulyRandomImpl>::m_instance);
        bdLoginResult::setAuthTransactionID(this->m_loginResult, RandomUInt64);
        bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticate.cpp", "bdLoginTaskAuthenticate::buildAuthReq", 0x2DEu, "Authenticating (transaction ID: %I64u).", RandomUInt64);
        bdSnprintf(buf, 0x18ui64, "%I64u", RandomUInt64);
        if ( this->m_httpInterface )
          bdLoginTaskAuthenticate::resetHttpInterface(this);
        v42 = bdHTTPUtility::newHTTP(0, 0);
        this->m_httpInterface = v42;
        v43 = this->m_ok && v42->initRequest(v42, BD_POST, (const char *const)&v55, 15000u);
        this->m_ok = v43;
        v44 = v43 && this->m_httpInterface->setHeader(this->m_httpInterface, "Content-Type", "application/json");
        this->m_ok = v44;
        v45 = v44 && this->m_httpInterface->setHeader(this->m_httpInterface, "X-TransactionID", buf);
        this->m_ok = v45;
        v46 = v45 && this->m_httpInterface->setHeader(this->m_httpInterface, "Authorization", "UGljYXJkIERlbHRhIDU=");
        this->m_ok = v46;
        v47 = v46 && bdHTTP::setUploadData(this->m_httpInterface, this->m_httpAuthRequest, this->m_httpAuthRequestLength);
        this->m_ok = v47;
        v48 = v47 && bdHTTP::setDownloadBuffer(this->m_httpInterface, this->m_httpAuthReply, 0x1400u);
        this->m_ok = v48;
        bdHandleAssert(1, "(messageInfo != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticate.cpp", "bdLoginTaskAuthenticate::updateAuthStatus", 0xA1u, "Must provide valid message to update auth task status!");
        this->m_authStatusCode = NOT_CONNECTED;
        bdStrlcpy(this->m_authStatusMessage, "Ready to execute auth to Demonware", 0x400ui64);
        bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticate.cpp", "bdLoginTaskAuthenticate::buildAuthReq", 0x2F2u, "Setting state to READY");
        break;
      default:
        bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticate.h", "bdLoginTaskAuthenticate::getAuthRequestTask", 0x8Au, "Unknown Login Flow");
        bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticate.cpp", "bdLoginTaskAuthenticate::buildAuthReq", 0x285u, "Couldn't determine valid auth task id for request, make sure config set correctly");
        bdHandleAssert(1, "(messageInfo != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticate.cpp", "bdLoginTaskAuthenticate::updateAuthStatus", 0xA1u, "Must provide valid message to update auth task status!");
        this->m_authStatusCode = CONNECTED;
        bdStrlcpy(this->m_authStatusMessage, "Failed to determine valid auth task, make sure flow has been set for config", 0x400ui64);
        ElapsedTimeInSeconds = bdStopwatch::getElapsedTimeInSeconds(&this->m_taskTimer);
        bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticate.cpp", "bdLoginTaskAuthenticate::updateAuthStatus", 0xA9u, "Task finished after %2.1f seconds", *(float *)&ElapsedTimeInSeconds);
        bdJSONSerializer::~bdJSONSerializer(&v53);
        return;
    }
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticate.cpp", "bdLoginTaskAuthenticate::buildAuthReq", 0x26Cu, "You are attempting to Auth prior to fetching platform token from first party.");
    bdHandleAssert(1, "(messageInfo != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticate.cpp", "bdLoginTaskAuthenticate::updateAuthStatus", 0xA1u, "Must provide valid message to update auth task status!");
    this->m_authStatusCode = CONNECTED;
    bdStrlcpy(this->m_authStatusMessage, "Need to fetch First Party Platform Token First", 0x400ui64);
    v5 = bdStopwatch::getElapsedTimeInSeconds(&this->m_taskTimer);
    bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticate.cpp", "bdLoginTaskAuthenticate::updateAuthStatus", 0xA9u, "Task finished after %2.1f seconds", *(float *)&v5);
  }
}

/*
==============
bdLoginTaskAuthenticate::createPlatformDataJson
==============
*/
char bdLoginTaskAuthenticate::createPlatformDataJson(bdLoginTaskAuthenticate *this, bdJSONSerializer *platformDataJson, unsigned int titleVersion)
{
  bool v5; 
  bdLoginResult *m_loginResult; 
  const char *PlatformToken; 
  const char *v8; 
  bool m_ok; 
  const char *v10; 
  char result; 

  this->m_ok = 1;
  v5 = bdJSONSerializer::writeUInt64(platformDataJson, "version", titleVersion, 1);
  m_loginResult = this->m_loginResult;
  this->m_ok = v5;
  PlatformToken = bdLoginResult::getPlatformToken(m_loginResult);
  v8 = (const char *)memchr_0(PlatformToken, 0, 1ui64);
  if ( v8 && v8 == PlatformToken )
  {
    m_ok = this->m_ok;
  }
  else
  {
    m_ok = 0;
    if ( this->m_ok )
    {
      v10 = bdLoginResult::getPlatformToken(this->m_loginResult);
      if ( bdJSONSerializer::writeString(platformDataJson, "token", v10) )
        m_ok = 1;
    }
    this->m_ok = m_ok;
  }
  if ( m_ok && bdJSONSerializer::writeBoolean(platformDataJson, "extended_data", 1) )
  {
    this->m_ok = 1;
    return 1;
  }
  else
  {
    result = 0;
    this->m_ok = 0;
  }
  return result;
}

/*
==============
bdLoginTaskAuthenticate::createTaskBuff
==============
*/
bool bdLoginTaskAuthenticate::createTaskBuff(bdLoginTaskAuthenticate *this, unsigned int size)
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
bdLoginTaskAuthenticate::getAuthAddress
==============
*/
char *bdLoginTaskAuthenticate::getAuthAddress(bdLoginTaskAuthenticate *this)
{
  return this->m_authAddress;
}

/*
==============
bdLoginTaskAuthenticate::getLSGAddress
==============
*/
char *bdLoginTaskAuthenticate::getLSGAddress(bdLoginTaskAuthenticate *this)
{
  return this->m_lsgAddress;
}

/*
==============
bdLoginTaskAuthenticate::getTaskCode
==============
*/
__int64 bdLoginTaskAuthenticate::getTaskCode(bdLoginTaskAuthenticate *this)
{
  return (unsigned int)this->m_authStatusCode;
}

/*
==============
bdLoginTaskAuthenticate::getTaskMessage
==============
*/
char *bdLoginTaskAuthenticate::getTaskMessage(bdLoginTaskAuthenticate *this)
{
  return this->m_authStatusMessage;
}

/*
==============
bdLoginTaskAuthenticate::processAuthJSON
==============
*/
void bdLoginTaskAuthenticate::processAuthJSON(bdLoginTaskAuthenticate *this, char *clientTicketBuffer, const bdJSONDeserializer *responseJSON)
{
  char *v4; 
  bool v6; 
  bdLoginConfig::LoginFlow LoginType; 
  __int64 v8; 
  bool v9; 
  __int64 v10; 
  bdHTTP *m_httpInterface; 
  bool v12; 
  __int64 v13; 
  __int64 v14; 
  bool v15; 
  unsigned int v16; 
  bool v17; 
  bool m_ok; 
  bool v19; 
  bool v20; 
  bool v21; 
  bool v22; 
  bool v23; 
  bool v24; 
  __int64 v25; 
  unsigned int v26; 
  unsigned int v27; 
  bool v28; 
  bdLoginResult *m_loginResult; 
  unsigned int v30; 
  bool v31; 
  bool v32; 
  const char *v33; 
  const char *v34; 
  double ElapsedTimeInSeconds; 
  __int64 v36; 
  bdLoginTaskAuthenticate::AuthStatusCode code; 
  unsigned __int8 v38[4]; 
  unsigned __int64 value; 
  bdLobbyErrorCode v40[2]; 
  char *v41; 
  unsigned __int64 ivSeed[2]; 
  bdRSAKey v43; 
  char accountType[8]; 
  __int16 v45; 
  char clientID[8]; 
  __int64 v47; 
  __int64 v48; 
  __int64 v49; 
  __int64 v50; 
  __int64 v51; 
  __int64 v52; 
  __int64 v53; 
  char v54[208]; 
  char v55[208]; 
  char dest[256]; 
  char src[352]; 

  ivSeed[1] = -2i64;
  v4 = clientTicketBuffer;
  v41 = clientTicketBuffer;
  this->m_ok = 1;
  ivSeed[0] = 0i64;
  *(_QWORD *)v40 = 0i64;
  value = 0i64;
  *(_QWORD *)clientID = 0i64;
  v47 = 0i64;
  v48 = 0i64;
  v49 = 0i64;
  v50 = 0i64;
  v51 = 0i64;
  v52 = 0i64;
  v53 = 0i64;
  *(_QWORD *)accountType = 0i64;
  v45 = 0;
  v38[0] = 0;
  this->m_ok = bdJSONDeserializer::getUInt64((bdJSONDeserializer *)responseJSON, "auth_task", &value);
  if ( bdJSONDeserializer::hasKey((bdJSONDeserializer *)responseJSON, "loginqueue_enabled") )
  {
    v6 = this->m_ok && bdJSONDeserializer::getBoolean((bdJSONDeserializer *)responseJSON, "loginqueue_enabled", &this->m_loginResult->m_loginQueueEnabled);
    this->m_ok = v6;
  }
  LoginType = bdLoginConfig::getLoginType((bdLoginConfig *)this->m_loginConfig);
  if ( bdLoginResult::isLoginQueueEnabled(this->m_loginResult) )
  {
    switch ( LoginType )
    {
      case CONNECTING:
        v8 = 63i64;
        break;
      case WAITING_FOR_REPORT_CONSOLE_DETAILS:
        v8 = 65i64;
        break;
      case CONNECTED:
        v8 = 87i64;
        break;
      case DISCONNECTING:
        v8 = 93i64;
        break;
      case DISCONNECTED:
        v8 = 67i64;
        break;
      case DISCONNECTED|NOT_CONNECTED:
        v8 = 81i64;
        break;
      default:
        bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticate.h", "bdLoginTaskAuthenticate::getAuthResponseTask", 0xA2u, "Unknown Login Flow");
        goto LABEL_25;
    }
  }
  else
  {
    switch ( LoginType )
    {
      case 2:
        v8 = 47i64;
        break;
      case 3:
        v8 = 45i64;
        break;
      case 4:
        v8 = 85i64;
        break;
      case 5:
        v8 = 91i64;
        break;
      case 6:
        v8 = 29i64;
        break;
      case 7:
        v8 = 79i64;
        break;
      case 8:
        v8 = 73i64;
        break;
      default:
        bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticate.h", "bdLoginTaskAuthenticate::getAuthResponseTask", 0xB9u, "Unknown Login Flow");
LABEL_25:
        v8 = 0i64;
        break;
    }
  }
  if ( this->m_ok && v8 == value )
  {
    this->m_loginResult->m_responseTask = value;
    v9 = this->m_ok && bdJSONDeserializer::getUInt64((bdJSONDeserializer *)responseJSON, "code", (unsigned __int64 *)v40);
    this->m_ok = v9;
    if ( v9 )
    {
      v10 = *(_QWORD *)v40;
      if ( *(_QWORD *)v40 == 700i64 )
      {
        m_httpInterface = this->m_httpInterface;
        memset_0(src, 0, 0x159ui64);
        memset_0(dest, 0, sizeof(dest));
        v12 = m_httpInterface->getHeader(m_httpInterface, "X-Signature", src, 345u);
        this->m_ok = v12;
        v13 = -1i64;
        if ( v12 )
        {
          bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
          v14 = -1i64;
          do
            ++v14;
          while ( src[v14] );
          bdBase64::decode(src, v14, dest, 0x100u);
          bdRSAKey::bdRSAKey(&v43);
          v15 = this->m_ok && bdRSAKey::importKey(&v43, BD_AUTH_TRAFFIC_SIGNING_KEY_0, 0x126u);
          this->m_ok = v15;
          v17 = 0;
          if ( v15 )
          {
            v16 = bdStrlen(this->m_httpAuthReply);
            if ( bdRSAKey::verifySignatureSHA256(&v43, (const unsigned __int8 *)dest, this->m_httpAuthReply, v16, BD_RSA_PKCS_1_PSS) )
              v17 = 1;
          }
          this->m_ok = v17;
          bdRSAKey::~bdRSAKey(&v43);
        }
        m_ok = this->m_ok;
        if ( m_ok )
        {
          bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticate.cpp", "bdLoginTaskAuthenticate::validateResponseSignature", 0xDBu, "Auth traffic verified");
          m_ok = this->m_ok;
        }
        this->m_ok = m_ok;
        if ( m_ok )
        {
          this->m_ok = bdJSONDeserializer::getUInt64((bdJSONDeserializer *)responseJSON, "iv_seed", ivSeed);
          if ( bdJSONDeserializer::hasKey((bdJSONDeserializer *)responseJSON, "crossplay_enabled") )
          {
            v19 = this->m_ok && bdJSONDeserializer::getBoolean((bdJSONDeserializer *)responseJSON, "crossplay_enabled", &this->m_loginResult->m_crossplayEnabled);
            this->m_ok = v19;
          }
          if ( bdJSONDeserializer::hasKey((bdJSONDeserializer *)responseJSON, "client_id") )
          {
            v20 = this->m_ok && bdJSONDeserializer::getString((bdJSONDeserializer *)responseJSON, "client_id", clientID, 0x40u);
            this->m_ok = v20;
          }
          if ( bdJSONDeserializer::hasKey((bdJSONDeserializer *)responseJSON, "account_type") )
          {
            v21 = this->m_ok && bdJSONDeserializer::getString((bdJSONDeserializer *)responseJSON, "account_type", accountType, 0xAu);
            this->m_ok = v21;
          }
          if ( bdJSONDeserializer::hasKey((bdJSONDeserializer *)responseJSON, "queue_id") )
          {
            v22 = this->m_ok && bdJSONDeserializer::getUByte8((bdJSONDeserializer *)responseJSON, "queue_id", v38);
            this->m_ok = v22;
            bdLoginResult::setLoginQueueID(this->m_loginResult, v38[0]);
          }
          if ( bdJSONDeserializer::hasKey((bdJSONDeserializer *)responseJSON, "service_level") )
          {
            if ( this->m_ok && bdJSONDeserializer::getString((bdJSONDeserializer *)responseJSON, "service_level", this->m_loginResult->m_serviceLevel, 5u) )
            {
              v23 = 1;
              this->m_ok = 1;
            }
            else
            {
              v23 = 0;
              this->m_ok = 0;
            }
          }
          else
          {
            v23 = this->m_ok;
          }
          memset_0(v54, 0, 0xCDui64);
          v24 = v23 && bdJSONDeserializer::getString((bdJSONDeserializer *)responseJSON, "client_ticket", v54, 0xCDu);
          this->m_ok = v24;
          if ( v24 )
          {
            bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
            v25 = -1i64;
            do
              ++v25;
            while ( v54[v25] );
            v26 = bdBase64::decode(v54, v25, v4, 0x80u);
            v27 = v26;
            if ( v26 != 128 )
            {
              bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticate.cpp", "bdLoginTaskAuthenticate::processAuthJSON", 0x1D3u, "Decoded client ticket of unexpected size [%u]", v26);
              bdSnprintf(this->m_authStatusMessage, 0x400ui64, "Decoded client ticket of unexpected size [%u]", v27);
              code = CONNECTED;
              bdLoginTaskAuthenticate::updateAuthStatus(this, this->m_authStatusMessage, &code);
              this->m_ok = 0;
            }
            v4 = v41;
          }
          memset_0(v55, 0, 0xCDui64);
          v28 = this->m_ok && bdJSONDeserializer::getString((bdJSONDeserializer *)responseJSON, "server_ticket", v55, 0xCDu);
          this->m_ok = v28;
          if ( v28 )
          {
            m_loginResult = this->m_loginResult;
            bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
            do
              ++v13;
            while ( v55[v13] );
            v30 = bdBase64::decode(v55, v13, m_loginResult->m_data, 0x80u);
            if ( v30 != 128 )
            {
              LODWORD(v36) = v30;
              bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticate.cpp", "bdLoginTaskAuthenticate::processAuthJSON", 0x1E9u, "Decoded server ticket of unexpected size [%u]", v36);
              code = CONNECTED;
              bdLoginTaskAuthenticate::updateAuthStatus(this, "Decoded server ticket of unexpected size", &code);
              this->m_ok = 0;
            }
          }
          v31 = this->m_ok && bdLoginTaskAuthenticate::processPlatformData(this, responseJSON);
          this->m_ok = v31;
          v32 = v31;
          this->m_ok = v32;
          this->m_ok = v32;
          if ( v32 )
          {
            bdLoginTaskAuthenticate::buildAuthInfo(this, v4, ivSeed[0], value, accountType, clientID, responseJSON);
          }
          else
          {
            bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticate.cpp", "bdLoginTaskAuthenticate::processAuthJSON", 0x205u, "Auth task reply contains invalid data / format");
            code = CONNECTED;
            bdLoginTaskAuthenticate::updateAuthStatus(this, "Auth task reply contains invalid data", &code);
          }
        }
        else
        {
          bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticate.cpp", "bdLoginTaskAuthenticate::processAuthJSON", 0x19Cu, "Auth traffic verification failed");
          code = CONNECTED;
          bdLoginTaskAuthenticate::updateAuthStatus(this, "Auth signature error", &code);
        }
      }
      else
      {
        v33 = bdLobbyErrorCodeToString(v40[0]);
        bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticate.cpp", "bdLoginTaskAuthenticate::processInvalidAuthReply", 0x238u, "Auth task returned with error code [%llu][%s]", v10, v33);
        v34 = bdLobbyErrorCodeToString((const bdLobbyErrorCode)v10);
        bdSnprintf(this->m_authStatusMessage, 0x400ui64, "Auth task returned with error code: [%llu][%s]", v10, v34);
        if ( v10 == 703 || (code = CONNECTED, v10 == 781) )
          code = DISCONNECTING;
        bdLoginTaskAuthenticate::updateAuthStatus(this, this->m_authStatusMessage, &code);
      }
    }
    else
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticate.cpp", "bdLoginTaskAuthenticate::processAuthJSON", 0x210u, "Auth task returned without error code");
      bdHandleAssert(1, "(messageInfo != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticate.cpp", "bdLoginTaskAuthenticate::updateAuthStatus", 0xA1u, "Must provide valid message to update auth task status!");
      this->m_authStatusCode = CONNECTED;
      bdStrlcpy(this->m_authStatusMessage, "Auth task returned without error code", 0x400ui64);
      ElapsedTimeInSeconds = bdStopwatch::getElapsedTimeInSeconds(&this->m_taskTimer);
      bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticate.cpp", "bdLoginTaskAuthenticate::updateAuthStatus", 0xA9u, "Task finished after %2.1f seconds", *(float *)&ElapsedTimeInSeconds);
    }
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticate.cpp", "bdLoginTaskAuthenticate::processAuthJSON", 0x184u, "Invalid or No Task ID [%llu] in Auth reply", value);
    bdSnprintf(this->m_authStatusMessage, 0x400ui64, "Invalid or No Task ID [%llu] in Auth reply", value);
    code = CONNECTED;
    bdLoginTaskAuthenticate::updateAuthStatus(this, this->m_authStatusMessage, &code);
    this->m_ok = 0;
  }
}

/*
==============
bdLoginTaskAuthenticate::processAuthReply
==============
*/
void bdLoginTaskAuthenticate::processAuthReply(bdLoginTaskAuthenticate *this)
{
  unsigned int v2; 
  double ElapsedTimeInSeconds; 
  bdLoginTaskAuthenticate::AuthStatusCode code; 
  bdJSONDeserializer responseJSON; 
  __int64 v6; 
  char clientTicketBuffer[208]; 

  v6 = -2i64;
  v2 = this->m_httpInterface->getLastHTTPStatus(this->m_httpInterface);
  if ( v2 == 200 )
  {
    memset_0(clientTicketBuffer, 0, 0xCCui64);
    bdJSONDeserializer::bdJSONDeserializer(&responseJSON);
    if ( bdJSONDeserializer::parse(&responseJSON, this->m_httpAuthReply) && bdJSONDeserializer::isObject(&responseJSON) )
    {
      bdLoginTaskAuthenticate::processAuthJSON(this, clientTicketBuffer, &responseJSON);
    }
    else
    {
      bdHandleAssert(1, "(messageInfo != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticate.cpp", "bdLoginTaskAuthenticate::updateAuthStatus", 0xA1u, "Must provide valid message to update auth task status!");
      this->m_authStatusCode = CONNECTED;
      bdStrlcpy(this->m_authStatusMessage, "Failed to parse Auth response json", 0x400ui64);
      ElapsedTimeInSeconds = bdStopwatch::getElapsedTimeInSeconds(&this->m_taskTimer);
      bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticate.cpp", "bdLoginTaskAuthenticate::updateAuthStatus", 0xA9u, "Task finished after %2.1f seconds", *(float *)&ElapsedTimeInSeconds);
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticate.cpp", "bdLoginTaskAuthenticate::processAuthReply", 0x223u, "Failed to parse Auth response json");
    }
    bdJSONDeserializer::~bdJSONDeserializer(&responseJSON);
  }
  else
  {
    bdSnprintf(this->m_authStatusMessage, 0x400ui64, "Auth task failed with HTTP code [%u]", v2);
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticate.cpp", "bdLoginTaskAuthenticate::processAuthReply", 0x231u, this->m_authStatusMessage);
    code = CONNECTED;
    bdLoginTaskAuthenticate::updateAuthStatus(this, this->m_authStatusMessage, &code);
  }
}

/*
==============
bdLoginTaskAuthenticate::processInvalidAuthReply
==============
*/
void bdLoginTaskAuthenticate::processInvalidAuthReply(bdLoginTaskAuthenticate *this, unsigned __int64 errorCode)
{
  const char *v4; 
  const char *v5; 
  bdLoginTaskAuthenticate::AuthStatusCode code; 

  v4 = bdLobbyErrorCodeToString((const bdLobbyErrorCode)errorCode);
  bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticate.cpp", "bdLoginTaskAuthenticate::processInvalidAuthReply", 0x238u, "Auth task returned with error code [%llu][%s]", errorCode, v4);
  v5 = bdLobbyErrorCodeToString((const bdLobbyErrorCode)errorCode);
  bdSnprintf(this->m_authStatusMessage, 0x400ui64, "Auth task returned with error code: [%llu][%s]", errorCode, v5);
  if ( errorCode == 703 || (code = CONNECTED, errorCode == 781) )
    code = DISCONNECTING;
  bdLoginTaskAuthenticate::updateAuthStatus(this, this->m_authStatusMessage, &code);
}

/*
==============
bdLoginTaskAuthenticate::processPlatformClientTicket
==============
*/
char bdLoginTaskAuthenticate::processPlatformClientTicket(bdLoginTaskAuthenticate *this, unsigned int ivSeed, char *clientTicketBuffer, unsigned int bufferSize)
{
  return 1;
}

/*
==============
bdLoginTaskAuthenticate::processPlatformData
==============
*/
_BOOL8 bdLoginTaskAuthenticate::processPlatformData(bdLoginTaskAuthenticate *this, const bdJSONDeserializer *responseJSON)
{
  __int64 v4; 
  bool v5; 
  bdJSONDeserializer v7; 
  __int64 v8; 
  char extendedAuthInfo[4112]; 
  char value[5120]; 

  v8 = -2i64;
  bdJSONDeserializer::bdJSONDeserializer(&v7);
  memset_0(value, 0, sizeof(value));
  memset_0(extendedAuthInfo, 0, 0x1001ui64);
  if ( !bdJSONDeserializer::hasKey((bdJSONDeserializer *)responseJSON, "extra_data") || !bdJSONDeserializer::getString((bdJSONDeserializer *)responseJSON, "extra_data", value, 0x1400u) || !bdJSONDeserializer::parse(&v7, value) )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticate.cpp", "bdLoginTaskAuthenticate::processPlatformData", 0xEEu, "Failed to read Auth Extra Data");
LABEL_12:
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticate.cpp", "bdLoginTaskAuthenticate::processPlatformData", 0xF8u, "Failed to read XB1 Machine ID");
LABEL_13:
    v5 = 0;
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticate.cpp", "bdLoginTaskAuthenticate::processPlatformData", 0x107u, "Failed to read Extended Auth Information");
    goto LABEL_14;
  }
  if ( !bdJSONDeserializer::hasKey(&v7, "dpi") || !bdJSONDeserializer::getString(&v7, "dpi", this->m_loginResult->m_machineId, 0x40u) )
    goto LABEL_12;
  if ( !bdJSONDeserializer::hasKey(&v7, "extended_data") || !bdJSONDeserializer::getString(&v7, "extended_data", extendedAuthInfo, 0x1001u) )
    goto LABEL_13;
  bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v4 = -1i64;
  do
    ++v4;
  while ( extendedAuthInfo[v4] );
  bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticate.cpp", "bdLoginTaskAuthenticate::processPlatformData", 0x102u, "Got Extended Auth Information [%d]bytes", v4);
  v5 = bdLoginResult::setExtendedAuthInfo(this->m_loginResult, extendedAuthInfo);
LABEL_14:
  bdJSONDeserializer::~bdJSONDeserializer(&v7);
  return v5;
}

/*
==============
bdLoginTaskAuthenticate::pump
==============
*/
void bdLoginTaskAuthenticate::pump(bdLoginTaskAuthenticate *this)
{
  bdLoginTaskAuthenticate::AuthStatusCode m_authStatusCode; 
  __int32 v3; 
  __int32 v4; 
  const char *v5; 
  unsigned int v6; 
  double v7; 
  bdHTTP::bdStatus v8; 
  bool v9; 
  double ElapsedTimeInSeconds; 
  unsigned int format; 
  char *v12; 
  bdLoginTaskAuthenticate::AuthStatusCode code; 
  bdJSONDeserializer responseJSON; 
  __int64 v15; 
  char clientTicketBuffer[208]; 

  v15 = -2i64;
  m_authStatusCode = this->m_authStatusCode;
  if ( m_authStatusCode )
  {
    v3 = m_authStatusCode - 1;
    if ( v3 )
    {
      v4 = v3 - 1;
      if ( v4 )
      {
        if ( v4 != 1 )
        {
          v5 = "Pumping Authentication task in unexpected state";
          v12 = "Pumping Authentication task in unexpected state";
          format = 847;
LABEL_26:
          bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticate.cpp", "bdLoginTaskAuthenticate::pump", format, v12);
          bdHandleAssert(1, "(messageInfo != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticate.cpp", "bdLoginTaskAuthenticate::updateAuthStatus", 0xA1u, "Must provide valid message to update auth task status!");
          this->m_authStatusCode = CONNECTED;
          bdStrlcpy(this->m_authStatusMessage, v5, 0x400ui64);
          ElapsedTimeInSeconds = bdStopwatch::getElapsedTimeInSeconds(&this->m_taskTimer);
          bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticate.cpp", "bdLoginTaskAuthenticate::updateAuthStatus", 0xA9u, "Task finished after %2.1f seconds", *(float *)&ElapsedTimeInSeconds);
          return;
        }
        v6 = this->m_httpInterface->getLastHTTPStatus(this->m_httpInterface);
        if ( v6 == 200 )
        {
          memset_0(clientTicketBuffer, 0, 0xCCui64);
          bdJSONDeserializer::bdJSONDeserializer(&responseJSON);
          if ( bdJSONDeserializer::parse(&responseJSON, this->m_httpAuthReply) && bdJSONDeserializer::isObject(&responseJSON) )
          {
            bdLoginTaskAuthenticate::processAuthJSON(this, clientTicketBuffer, &responseJSON);
          }
          else
          {
            bdHandleAssert(1, "(messageInfo != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticate.cpp", "bdLoginTaskAuthenticate::updateAuthStatus", 0xA1u, "Must provide valid message to update auth task status!");
            this->m_authStatusCode = CONNECTED;
            bdStrlcpy(this->m_authStatusMessage, "Failed to parse Auth response json", 0x400ui64);
            v7 = bdStopwatch::getElapsedTimeInSeconds(&this->m_taskTimer);
            bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticate.cpp", "bdLoginTaskAuthenticate::updateAuthStatus", 0xA9u, "Task finished after %2.1f seconds", *(float *)&v7);
            bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticate.cpp", "bdLoginTaskAuthenticate::processAuthReply", 0x223u, "Failed to parse Auth response json");
          }
          bdJSONDeserializer::~bdJSONDeserializer(&responseJSON);
        }
        else
        {
          bdSnprintf(this->m_authStatusMessage, 0x400ui64, "Auth task failed with HTTP code [%u]", v6);
          bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticate.cpp", "bdLoginTaskAuthenticate::processAuthReply", 0x231u, this->m_authStatusMessage);
          code = CONNECTED;
          bdLoginTaskAuthenticate::updateAuthStatus(this, this->m_authStatusMessage, &code);
        }
      }
      else
      {
        v8 = this->m_httpInterface->getStatus(this->m_httpInterface);
        this->m_httpStatus = v8;
        if ( v8 != BD_FAILED )
        {
          bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticate.cpp", "bdLoginTaskAuthenticate::pump", 0x33Fu, "Setting state to RECEIVED_REPLY");
          if ( this->m_httpStatus == BD_MAX_STATUS )
            bdLogMessage(BD_LOG_WARNING, "warn/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticate.cpp", "bdLoginTaskAuthenticate::pump", 0x342u, "Got error from auth service, processing response");
          bdHandleAssert(1, "(messageInfo != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticate.cpp", "bdLoginTaskAuthenticate::updateAuthStatus", 0xA1u, "Must provide valid message to update auth task status!");
          this->m_authStatusCode = WAITING_FOR_REPORT_CONSOLE_DETAILS;
          bdStrlcpy(this->m_authStatusMessage, "Received reply from auth service", 0x400ui64);
        }
      }
    }
    else
    {
      if ( this->m_httpStatus )
      {
        v5 = "Auth HTTP request already initialized/in progress";
        v12 = "Auth HTTP request already initialized/in progress";
        format = 817;
        goto LABEL_26;
      }
      v9 = this->m_ok && this->m_httpInterface->sendRequest(this->m_httpInterface) == BD_FAILED;
      this->m_ok = v9;
      if ( v9 )
      {
        bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticate.cpp", "bdLoginTaskAuthenticate::pump", 0x32Au, "Setting state to AUTHENTICATING");
        code = CONNECTING;
        bdLoginTaskAuthenticate::updateAuthStatus(this, "Attempting Auth to DW", &code);
      }
      else
      {
        bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticate.cpp", "bdLoginTaskAuthenticate::pump", 0x322u, "Failed to start HTTP Auth request, status [%d]", this->m_httpStatus);
        bdSnprintf(this->m_authStatusMessage, 0x400ui64, "Failed to start HTTP Auth request, status [%d]", (unsigned int)this->m_httpStatus);
        code = CONNECTED;
        bdLoginTaskAuthenticate::updateAuthStatus(this, this->m_authStatusMessage, &code);
      }
    }
  }
  else
  {
    bdStopwatch::start(&this->m_taskTimer);
    bdLoginTaskAuthenticate::buildAuthReq(this);
  }
}

/*
==============
bdLoginTaskAuthenticate::releaseTaskBuff
==============
*/
void bdLoginTaskAuthenticate::releaseTaskBuff(bdLoginTaskAuthenticate *this)
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
bdLoginTaskAuthenticate::reset
==============
*/
void bdLoginTaskAuthenticate::reset(bdLoginTaskAuthenticate *this)
{
  bdHTTP *m_httpInterface; 
  bdHTTP *v3; 
  char *m_httpAuthRequest; 

  m_httpInterface = this->m_httpInterface;
  if ( m_httpInterface )
  {
    m_httpInterface->abortOperation(m_httpInterface);
    v3 = this->m_httpInterface;
    if ( v3 )
      ((void (__fastcall *)(bdHTTP *, __int64))v3->~bdHTTP)(v3, 1i64);
    this->m_httpInterface = NULL;
  }
  m_httpAuthRequest = this->m_httpAuthRequest;
  if ( m_httpAuthRequest )
    bdMemory::deallocate(m_httpAuthRequest);
  this->m_authStatusCode = UNINITIALIZED;
  this->m_httpStatus = BD_EMPTY;
  this->m_httpAuthRequest = NULL;
  this->m_httpAuthRequestLength = 0;
  memset_0(this->m_authStatusMessage, 0, 0xC00ui64);
  memset_0(this->m_httpAuthReply, 0, sizeof(this->m_httpAuthReply));
}

/*
==============
bdLoginTaskAuthenticate::resetHttpInterface
==============
*/
void bdLoginTaskAuthenticate::resetHttpInterface(bdLoginTaskAuthenticate *this)
{
  bdHTTP *m_httpInterface; 
  bdHTTP *v3; 

  m_httpInterface = this->m_httpInterface;
  if ( m_httpInterface )
  {
    m_httpInterface->abortOperation(m_httpInterface);
    v3 = this->m_httpInterface;
    if ( v3 )
      ((void (__fastcall *)(bdHTTP *, __int64))v3->~bdHTTP)(v3, 1i64);
    this->m_httpInterface = NULL;
  }
}

/*
==============
bdLoginTaskAuthenticate::updateAuthStatus
==============
*/
void bdLoginTaskAuthenticate::updateAuthStatus(bdLoginTaskAuthenticate *this, const char *messageInfo, const bdLoginTaskAuthenticate::AuthStatusCode *code)
{
  double ElapsedTimeInSeconds; 

  bdHandleAssert(messageInfo != NULL, "(messageInfo != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticate.cpp", "bdLoginTaskAuthenticate::updateAuthStatus", 0xA1u, "Must provide valid message to update auth task status!");
  this->m_authStatusCode = *code;
  bdStrlcpy(this->m_authStatusMessage, messageInfo, 0x400ui64);
  if ( (unsigned int)(*code - 4) <= 2 )
  {
    ElapsedTimeInSeconds = bdStopwatch::getElapsedTimeInSeconds(&this->m_taskTimer);
    bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticate.cpp", "bdLoginTaskAuthenticate::updateAuthStatus", 0xA9u, "Task finished after %2.1f seconds", *(float *)&ElapsedTimeInSeconds);
  }
}

/*
==============
bdLoginTaskAuthenticate::validateResponseSignature
==============
*/
_BOOL8 bdLoginTaskAuthenticate::validateResponseSignature(bdLoginTaskAuthenticate *this, bdHTTP *httpInterface)
{
  bool v4; 
  __int64 v5; 
  bool v6; 
  unsigned int v7; 
  bool v8; 
  _BOOL8 result; 
  bdRSAKey v10; 
  char dest[256]; 
  char src[352]; 

  memset_0(src, 0, 0x159ui64);
  memset_0(dest, 0, sizeof(dest));
  v4 = httpInterface->getHeader(httpInterface, "X-Signature", src, 345u);
  this->m_ok = v4;
  if ( v4 )
  {
    bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
    v5 = -1i64;
    do
      ++v5;
    while ( src[v5] );
    bdBase64::decode(src, v5, dest, 0x100u);
    bdRSAKey::bdRSAKey(&v10);
    v6 = this->m_ok && bdRSAKey::importKey(&v10, BD_AUTH_TRAFFIC_SIGNING_KEY_0, 0x126u);
    this->m_ok = v6;
    v8 = 0;
    if ( v6 )
    {
      v7 = bdStrlen(this->m_httpAuthReply);
      if ( bdRSAKey::verifySignatureSHA256(&v10, (const unsigned __int8 *)dest, this->m_httpAuthReply, v7, BD_RSA_PKCS_1_PSS) )
        v8 = 1;
    }
    this->m_ok = v8;
    bdRSAKey::~bdRSAKey(&v10);
  }
  result = this->m_ok;
  if ( result )
  {
    bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticate.cpp", "bdLoginTaskAuthenticate::validateResponseSignature", 0xDBu, "Auth traffic verified");
    return this->m_ok;
  }
  return result;
}

