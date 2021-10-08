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
  unsigned int v10; 
  char *m_clientID; 
  unsigned __int64 v15; 
  size_t v16; 
  double v19; 
  double v20; 
  bdLoginTaskAuthenticate::AuthStatusCode code; 

  v10 = ivSeed;
  bdAuthTicket::deserialize(&this->m_loginResult->m_authTicket, clientTicketBuffer);
  _RCX = this->m_loginResult;
  if ( _RCX->m_authTicket.m_magicNumber == BD_MAGIC_NUMBER )
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rcx+7288h]
      vmovups xmmword ptr [rcx+1B08h], xmm0
      vmovsd  xmm1, qword ptr [rcx+7298h]
      vmovsd  qword ptr [rcx+1B18h], xmm1
    }
    this->m_loginResult->m_titleID = this->m_loginResult->m_authTicket.m_titleID;
    this->m_loginResult->m_IVSeed = v10;
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
      v15 = -1i64;
      do
        ++v15;
      while ( aDemonware[v15] );
      if ( m_clientID )
      {
        v16 = 63i64;
        if ( v15 < 0x3F )
          v16 = v15;
        memcpy_0(m_clientID, "demonware", v16);
        m_clientID[v16] = 0;
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
      *(double *)&_XMM0 = bdStopwatch::getElapsedTimeInSeconds(&this->m_taskTimer);
      __asm
      {
        vcvtss2sd xmm1, xmm0, xmm0
        vmovsd  [rsp+48h+var_10], xmm1
      }
      bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticate.cpp", "bdLoginTaskAuthenticate::updateAuthStatus", 0xA9u, "Task finished after %2.1f seconds", v19);
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticate.cpp", "bdLoginTaskAuthenticate::buildAuthInfo", 0x165u, "Auth ticket decryption error");
    }
    else
    {
      bdStrlcpy(this->m_authStatusMessage, "Incorrect auth password", 0x400ui64);
      *(double *)&_XMM0 = bdStopwatch::getElapsedTimeInSeconds(&this->m_taskTimer);
      __asm
      {
        vcvtss2sd xmm1, xmm0, xmm0
        vmovsd  [rsp+48h+var_10], xmm1
      }
      bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticate.cpp", "bdLoginTaskAuthenticate::updateAuthStatus", 0xA9u, "Task finished after %2.1f seconds", v20);
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
  __int64 v4; 
  __int64 v5; 
  unsigned __int64 NewIVSeed; 
  bool v8; 
  unsigned __int64 v9; 
  bool v10; 
  bool v11; 
  bdLoginConfig *m_loginConfig; 
  bdEnvironment Environment; 
  unsigned int TitleID; 
  bool v15; 
  const char *ServiceLevel; 
  bool v17; 
  bool v18; 
  bool v19; 
  unsigned int TitleVersion; 
  const char *v21; 
  const char *v22; 
  bool m_ok; 
  const char *v24; 
  bool v26; 
  bool v27; 
  bool v28; 
  bool v29; 
  bool v30; 
  bool v31; 
  char *m_httpAuthRequest; 
  char *v33; 
  const char *AuthAddress; 
  bdLoginConfig *v35; 
  const char *GameID; 
  const char *Region; 
  bool v38; 
  char *m_authAddress; 
  bdTrulyRandomImpl *v40; 
  bdSingletonRegistryImpl *Instance; 
  unsigned __int64 RandomUInt64; 
  bdHTTP *v43; 
  bool v44; 
  bool v45; 
  bool v46; 
  bool v47; 
  bool v48; 
  bool v49; 
  __int64 line; 
  double v52; 
  double v53; 
  bdLoginTaskAuthenticate::AuthStatusCode code[2]; 
  __int64 v55; 
  bdJSONSerializer v56; 
  char buf[32]; 
  bdJSONSerializer v58; 
  char buffer[6784]; 
  char value[6784]; 

  v55 = -2i64;
  PlatformToken = bdLoginResult::getPlatformToken(this->m_loginResult);
  bdHandleAssert(PlatformToken != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v4 = -1i64;
  v5 = -1i64;
  do
    ++v5;
  while ( PlatformToken[v5] );
  if ( v5 )
  {
    bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticate.cpp", "bdLoginTaskAuthenticate::buildAuthReq", 0x272u, "Making Auth request to Demonware");
    this->m_ok = 1;
    memset_0(buffer, 0, sizeof(buffer));
    NewIVSeed = bdCryptoUtils::getNewIVSeed();
    memset_0(this->m_httpAuthReply, 0, sizeof(this->m_httpAuthReply));
    bdJSONSerializer::bdJSONSerializer(&v56, buffer, 0x1A80u);
    v8 = this->m_ok && bdJSONSerializer::writeBeginObject(&v56);
    this->m_ok = v8;
    switch ( bdLoginConfig::getLoginType((bdLoginConfig *)this->m_loginConfig) )
    {
      case 2:
        v9 = 46i64;
        goto LABEL_17;
      case 3:
        v9 = 44i64;
        goto LABEL_17;
      case 4:
        v9 = 84i64;
        goto LABEL_17;
      case 5:
        v9 = 90i64;
        goto LABEL_17;
      case 6:
        v9 = 28i64;
        goto LABEL_17;
      case 7:
        v9 = 78i64;
        goto LABEL_17;
      case 8:
        v9 = 72i64;
LABEL_17:
        v10 = this->m_ok && bdJSONSerializer::writeUInt64(&v56, "auth_task", v9, 1);
        this->m_ok = v10;
        v11 = v10 && bdJSONSerializer::writeUInt64(&v56, "iv_seed", NewIVSeed, 1);
        this->m_ok = v11;
        v15 = 0;
        if ( v11 )
        {
          m_loginConfig = (bdLoginConfig *)this->m_loginConfig;
          Environment = bdLoginResult::getEnvironment(this->m_loginResult);
          TitleID = bdLoginConfig::getTitleID(m_loginConfig, Environment);
          if ( bdJSONSerializer::writeUInt64(&v56, "title_id", TitleID, 1) )
            v15 = 1;
        }
        this->m_ok = v15;
        v17 = 0;
        if ( v15 )
        {
          ServiceLevel = bdLoginConfig::getServiceLevel((bdLoginConfig *)this->m_loginConfig);
          if ( bdJSONSerializer::writeString(&v56, "service_level", ServiceLevel) )
            v17 = 1;
        }
        this->m_ok = v17;
        v18 = v17 && bdJSONSerializer::writeString(&v56, "identity", "356c4bc3");
        this->m_ok = v18;
        memset_0(value, 0, sizeof(value));
        bdJSONSerializer::bdJSONSerializer(&v58, value, 0x1A80u);
        v19 = this->m_ok && bdJSONSerializer::writeBeginObject(&v58);
        this->m_ok = v19;
        if ( !v19 )
          goto LABEL_56;
        TitleVersion = bdLoginConfig::getTitleVersion((bdLoginConfig *)this->m_loginConfig);
        this->m_ok = 1;
        this->m_ok = bdJSONSerializer::writeUInt64(&v58, "version", TitleVersion, 1);
        v21 = bdLoginResult::getPlatformToken(this->m_loginResult);
        v22 = (const char *)memchr_0(v21, 0, 1ui64);
        if ( v22 && v22 == v21 )
        {
          m_ok = this->m_ok;
        }
        else
        {
          m_ok = 0;
          if ( this->m_ok )
          {
            v24 = bdLoginResult::getPlatformToken(this->m_loginResult);
            if ( bdJSONSerializer::writeString(&v58, "token", v24) )
              m_ok = 1;
          }
          this->m_ok = m_ok;
        }
        if ( m_ok && bdJSONSerializer::writeBoolean(&v58, "extended_data", 1) )
          v26 = 1;
        else
LABEL_56:
          v26 = 0;
        this->m_ok = v26;
        v27 = v26 && bdJSONSerializer::writeEndObject(&v58);
        this->m_ok = v27;
        v28 = v27 && bdJSONSerializer::validate(&v58);
        this->m_ok = v28;
        bdJSONSerializer::~bdJSONSerializer(&v58);
        v29 = this->m_ok && bdJSONSerializer::writeString(&v56, "extra_data", value);
        this->m_ok = v29;
        v30 = v29 && bdJSONSerializer::writeEndObject(&v56);
        this->m_ok = v30;
        v31 = v30 && bdJSONSerializer::validate(&v56);
        this->m_ok = v31;
        if ( !v31 )
        {
          code[0] = CONNECTED;
          bdLoginTaskAuthenticate::updateAuthStatus(this, "Failed to serialize JSON for authentication request", code);
          bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticate.cpp", "bdLoginTaskAuthenticate::buildAuthReq", 0x2A8u, "Failed to serialize JSON for authentication request");
        }
        bdJSONSerializer::~bdJSONSerializer(&v56);
        if ( !this->m_ok )
          return;
        bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
        do
          ++v4;
        while ( buffer[v4] );
        m_httpAuthRequest = this->m_httpAuthRequest;
        if ( m_httpAuthRequest )
        {
          bdMemory::deallocate(m_httpAuthRequest);
          this->m_httpAuthRequest = NULL;
        }
        this->m_httpAuthRequestLength = v4;
        v33 = (char *)bdMemory::allocate((unsigned int)v4);
        this->m_httpAuthRequest = v33;
        memcpy_0(v33, buffer, this->m_httpAuthRequestLength);
        bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticate.cpp", "bdLoginTaskAuthenticate::buildAuthReq", 0x2B2u, "HTTP Request Params: %s", this->m_httpAuthRequest);
        memset_0(&v58, 0, 0x200ui64);
        AuthAddress = bdLoginConfig::getAuthAddress((bdLoginConfig *)this->m_loginConfig);
        v35 = (bdLoginConfig *)this->m_loginConfig;
        if ( *AuthAddress )
        {
          LODWORD(line) = bdLoginConfig::getAuthPort(v35);
          m_authAddress = (char *)bdLoginConfig::getAuthAddress((bdLoginConfig *)this->m_loginConfig);
        }
        else
        {
          GameID = bdLoginConfig::getGameID(v35);
          Region = bdLoginConfig::getRegion((bdLoginConfig *)this->m_loginConfig);
          code[0] = bdLoginResult::getEnvironment(this->m_loginResult);
          v38 = bdLoginUtils::getAuthAddress((char (*)[1024])this->m_authAddress, (const bdEnvironment *)code, Region, GameID);
          this->m_ok = v38;
          if ( !v38 )
          {
            bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticate.cpp", "bdLoginTaskAuthenticate::buildAuthReq", 0x2CDu, "Failed to disover auth environment, can't connect to service");
            code[0] = DISCONNECTING;
            bdLoginTaskAuthenticate::updateAuthStatus(this, "Failed to disover auth environment, can't connect to service", code);
            return;
          }
          LODWORD(line) = bdLoginConfig::getAuthPort((bdLoginConfig *)this->m_loginConfig);
          m_authAddress = this->m_authAddress;
        }
        bdSnprintf((char *)&v58, 0x200ui64, "https:
        bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticate.cpp", "bdLoginTaskAuthenticate::buildAuthReq", 0x2D9u, "Authenticating to: %s", (const char *)&v58);
        if ( bdSingleton<bdTrulyRandomImpl>::m_instance )
          goto LABEL_96;
        v40 = (bdTrulyRandomImpl *)bdMemory::allocate(1ui64);
        *(_QWORD *)code = v40;
        if ( v40 )
          bdTrulyRandomImpl::bdTrulyRandomImpl(v40);
        bdSingleton<bdTrulyRandomImpl>::m_instance = v40;
        if ( !v40 )
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
        v43 = bdHTTPUtility::newHTTP(0, 0);
        this->m_httpInterface = v43;
        v44 = this->m_ok && v43->initRequest(v43, BD_POST, (const char *const)&v58, 15000u);
        this->m_ok = v44;
        v45 = v44 && this->m_httpInterface->setHeader(this->m_httpInterface, "Content-Type", "application/json");
        this->m_ok = v45;
        v46 = v45 && this->m_httpInterface->setHeader(this->m_httpInterface, "X-TransactionID", buf);
        this->m_ok = v46;
        v47 = v46 && this->m_httpInterface->setHeader(this->m_httpInterface, "Authorization", "UGljYXJkIERlbHRhIDU=");
        this->m_ok = v47;
        v48 = v47 && bdHTTP::setUploadData(this->m_httpInterface, this->m_httpAuthRequest, this->m_httpAuthRequestLength);
        this->m_ok = v48;
        v49 = v48 && bdHTTP::setDownloadBuffer(this->m_httpInterface, this->m_httpAuthReply, 0x1400u);
        this->m_ok = v49;
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
        *(double *)&_XMM0 = bdStopwatch::getElapsedTimeInSeconds(&this->m_taskTimer);
        __asm
        {
          vcvtss2sd xmm1, xmm0, xmm0
          vmovsd  [rsp+38C0h+var_3888], xmm1
        }
        bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticate.cpp", "bdLoginTaskAuthenticate::updateAuthStatus", 0xA9u, "Task finished after %2.1f seconds", v53);
        bdJSONSerializer::~bdJSONSerializer(&v56);
        return;
    }
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticate.cpp", "bdLoginTaskAuthenticate::buildAuthReq", 0x26Cu, "You are attempting to Auth prior to fetching platform token from first party.");
    bdHandleAssert(1, "(messageInfo != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticate.cpp", "bdLoginTaskAuthenticate::updateAuthStatus", 0xA1u, "Must provide valid message to update auth task status!");
    this->m_authStatusCode = CONNECTED;
    bdStrlcpy(this->m_authStatusMessage, "Need to fetch First Party Platform Token First", 0x400ui64);
    *(double *)&_XMM0 = bdStopwatch::getElapsedTimeInSeconds(&this->m_taskTimer);
    __asm
    {
      vcvtss2sd xmm1, xmm0, xmm0
      vmovsd  [rsp+38C0h+var_3888], xmm1
    }
    bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticate.cpp", "bdLoginTaskAuthenticate::updateAuthStatus", 0xA9u, "Task finished after %2.1f seconds", v52);
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
  char *v5; 
  bool v7; 
  bdLoginConfig::LoginFlow LoginType; 
  __int64 v9; 
  bool v10; 
  __int64 v11; 
  bdHTTP *m_httpInterface; 
  bool v13; 
  __int64 v14; 
  __int64 v15; 
  bool v16; 
  unsigned int v17; 
  bool v18; 
  bool m_ok; 
  bool v20; 
  bool v21; 
  bool v22; 
  bool v23; 
  bool v24; 
  bool v25; 
  __int64 v26; 
  unsigned int v27; 
  unsigned int v28; 
  bool v29; 
  bdLoginResult *m_loginResult; 
  unsigned int v31; 
  bool v32; 
  bool v33; 
  const char *v34; 
  const char *v35; 
  __int64 v37; 
  double v38; 
  bdLoginTaskAuthenticate::AuthStatusCode code; 
  unsigned __int8 v40[4]; 
  unsigned __int64 value; 
  bdLobbyErrorCode v42[2]; 
  char *v43; 
  unsigned __int64 ivSeed[2]; 
  bdRSAKey v45; 
  char accountType[8]; 
  __int16 v47; 
  char clientID[8]; 
  __int64 v49; 
  __int64 v50; 
  __int64 v51; 
  __int64 v52; 
  __int64 v53; 
  __int64 v54; 
  __int64 v55; 
  char v56[208]; 
  char v57[208]; 
  char dest[256]; 
  char src[352]; 

  ivSeed[1] = -2i64;
  v5 = clientTicketBuffer;
  v43 = clientTicketBuffer;
  this->m_ok = 1;
  ivSeed[0] = 0i64;
  *(_QWORD *)v42 = 0i64;
  value = 0i64;
  *(_QWORD *)clientID = 0i64;
  v49 = 0i64;
  v50 = 0i64;
  v51 = 0i64;
  v52 = 0i64;
  v53 = 0i64;
  v54 = 0i64;
  v55 = 0i64;
  *(_QWORD *)accountType = 0i64;
  v47 = 0;
  v40[0] = 0;
  this->m_ok = bdJSONDeserializer::getUInt64((bdJSONDeserializer *)responseJSON, "auth_task", &value);
  if ( bdJSONDeserializer::hasKey((bdJSONDeserializer *)responseJSON, "loginqueue_enabled") )
  {
    v7 = this->m_ok && bdJSONDeserializer::getBoolean((bdJSONDeserializer *)responseJSON, "loginqueue_enabled", &this->m_loginResult->m_loginQueueEnabled);
    this->m_ok = v7;
  }
  LoginType = bdLoginConfig::getLoginType((bdLoginConfig *)this->m_loginConfig);
  if ( bdLoginResult::isLoginQueueEnabled(this->m_loginResult) )
  {
    switch ( LoginType )
    {
      case CONNECTING:
        v9 = 63i64;
        break;
      case WAITING_FOR_REPORT_CONSOLE_DETAILS:
        v9 = 65i64;
        break;
      case CONNECTED:
        v9 = 87i64;
        break;
      case DISCONNECTING:
        v9 = 93i64;
        break;
      case DISCONNECTED:
        v9 = 67i64;
        break;
      case DISCONNECTED|NOT_CONNECTED:
        v9 = 81i64;
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
        v9 = 47i64;
        break;
      case 3:
        v9 = 45i64;
        break;
      case 4:
        v9 = 85i64;
        break;
      case 5:
        v9 = 91i64;
        break;
      case 6:
        v9 = 29i64;
        break;
      case 7:
        v9 = 79i64;
        break;
      case 8:
        v9 = 73i64;
        break;
      default:
        bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticate.h", "bdLoginTaskAuthenticate::getAuthResponseTask", 0xB9u, "Unknown Login Flow");
LABEL_25:
        v9 = 0i64;
        break;
    }
  }
  if ( this->m_ok && v9 == value )
  {
    this->m_loginResult->m_responseTask = value;
    v10 = this->m_ok && bdJSONDeserializer::getUInt64((bdJSONDeserializer *)responseJSON, "code", (unsigned __int64 *)v42);
    this->m_ok = v10;
    if ( v10 )
    {
      v11 = *(_QWORD *)v42;
      if ( *(_QWORD *)v42 == 700i64 )
      {
        m_httpInterface = this->m_httpInterface;
        memset_0(src, 0, 0x159ui64);
        memset_0(dest, 0, sizeof(dest));
        v13 = m_httpInterface->getHeader(m_httpInterface, "X-Signature", src, 345u);
        this->m_ok = v13;
        v14 = -1i64;
        if ( v13 )
        {
          bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
          v15 = -1i64;
          do
            ++v15;
          while ( src[v15] );
          bdBase64::decode(src, v15, dest, 0x100u);
          bdRSAKey::bdRSAKey(&v45);
          v16 = this->m_ok && bdRSAKey::importKey(&v45, BD_AUTH_TRAFFIC_SIGNING_KEY_0, 0x126u);
          this->m_ok = v16;
          v18 = 0;
          if ( v16 )
          {
            v17 = bdStrlen(this->m_httpAuthReply);
            if ( bdRSAKey::verifySignatureSHA256(&v45, (const unsigned __int8 *)dest, this->m_httpAuthReply, v17, BD_RSA_PKCS_1_PSS) )
              v18 = 1;
          }
          this->m_ok = v18;
          bdRSAKey::~bdRSAKey(&v45);
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
            v20 = this->m_ok && bdJSONDeserializer::getBoolean((bdJSONDeserializer *)responseJSON, "crossplay_enabled", &this->m_loginResult->m_crossplayEnabled);
            this->m_ok = v20;
          }
          if ( bdJSONDeserializer::hasKey((bdJSONDeserializer *)responseJSON, "client_id") )
          {
            v21 = this->m_ok && bdJSONDeserializer::getString((bdJSONDeserializer *)responseJSON, "client_id", clientID, 0x40u);
            this->m_ok = v21;
          }
          if ( bdJSONDeserializer::hasKey((bdJSONDeserializer *)responseJSON, "account_type") )
          {
            v22 = this->m_ok && bdJSONDeserializer::getString((bdJSONDeserializer *)responseJSON, "account_type", accountType, 0xAu);
            this->m_ok = v22;
          }
          if ( bdJSONDeserializer::hasKey((bdJSONDeserializer *)responseJSON, "queue_id") )
          {
            v23 = this->m_ok && bdJSONDeserializer::getUByte8((bdJSONDeserializer *)responseJSON, "queue_id", v40);
            this->m_ok = v23;
            bdLoginResult::setLoginQueueID(this->m_loginResult, v40[0]);
          }
          if ( bdJSONDeserializer::hasKey((bdJSONDeserializer *)responseJSON, "service_level") )
          {
            if ( this->m_ok && bdJSONDeserializer::getString((bdJSONDeserializer *)responseJSON, "service_level", this->m_loginResult->m_serviceLevel, 5u) )
            {
              v24 = 1;
              this->m_ok = 1;
            }
            else
            {
              v24 = 0;
              this->m_ok = 0;
            }
          }
          else
          {
            v24 = this->m_ok;
          }
          memset_0(v56, 0, 0xCDui64);
          v25 = v24 && bdJSONDeserializer::getString((bdJSONDeserializer *)responseJSON, "client_ticket", v56, 0xCDu);
          this->m_ok = v25;
          if ( v25 )
          {
            bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
            v26 = -1i64;
            do
              ++v26;
            while ( v56[v26] );
            v27 = bdBase64::decode(v56, v26, v5, 0x80u);
            v28 = v27;
            if ( v27 != 128 )
            {
              bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticate.cpp", "bdLoginTaskAuthenticate::processAuthJSON", 0x1D3u, "Decoded client ticket of unexpected size [%u]", v27);
              bdSnprintf(this->m_authStatusMessage, 0x400ui64, "Decoded client ticket of unexpected size [%u]", v28);
              code = CONNECTED;
              bdLoginTaskAuthenticate::updateAuthStatus(this, this->m_authStatusMessage, &code);
              this->m_ok = 0;
            }
            v5 = v43;
          }
          memset_0(v57, 0, 0xCDui64);
          v29 = this->m_ok && bdJSONDeserializer::getString((bdJSONDeserializer *)responseJSON, "server_ticket", v57, 0xCDu);
          this->m_ok = v29;
          if ( v29 )
          {
            m_loginResult = this->m_loginResult;
            bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
            do
              ++v14;
            while ( v57[v14] );
            v31 = bdBase64::decode(v57, v14, m_loginResult->m_data, 0x80u);
            if ( v31 != 128 )
            {
              LODWORD(v37) = v31;
              bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticate.cpp", "bdLoginTaskAuthenticate::processAuthJSON", 0x1E9u, "Decoded server ticket of unexpected size [%u]", v37);
              code = CONNECTED;
              bdLoginTaskAuthenticate::updateAuthStatus(this, "Decoded server ticket of unexpected size", &code);
              this->m_ok = 0;
            }
          }
          v32 = this->m_ok && bdLoginTaskAuthenticate::processPlatformData(this, responseJSON);
          this->m_ok = v32;
          v33 = v32;
          this->m_ok = v33;
          this->m_ok = v33;
          if ( v33 )
          {
            bdLoginTaskAuthenticate::buildAuthInfo(this, v5, ivSeed[0], value, accountType, clientID, responseJSON);
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
        v34 = bdLobbyErrorCodeToString(v42[0]);
        bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticate.cpp", "bdLoginTaskAuthenticate::processInvalidAuthReply", 0x238u, "Auth task returned with error code [%llu][%s]", v11, v34);
        v35 = bdLobbyErrorCodeToString((const bdLobbyErrorCode)v11);
        bdSnprintf(this->m_authStatusMessage, 0x400ui64, "Auth task returned with error code: [%llu][%s]", v11, v35);
        if ( v11 == 703 || (code = CONNECTED, v11 == 781) )
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
      *(double *)&_XMM0 = bdStopwatch::getElapsedTimeInSeconds(&this->m_taskTimer);
      __asm
      {
        vcvtss2sd xmm1, xmm0, xmm0
        vmovsd  [rsp+570h+var_538], xmm1
      }
      bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticate.cpp", "bdLoginTaskAuthenticate::updateAuthStatus", 0xA9u, "Task finished after %2.1f seconds", v38);
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
  unsigned int v3; 
  double v5; 
  bdLoginTaskAuthenticate::AuthStatusCode code; 
  bdJSONDeserializer responseJSON; 
  __int64 v8; 
  char clientTicketBuffer[208]; 

  v8 = -2i64;
  v3 = this->m_httpInterface->getLastHTTPStatus(this->m_httpInterface);
  if ( v3 == 200 )
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
      *(double *)&_XMM0 = bdStopwatch::getElapsedTimeInSeconds(&this->m_taskTimer);
      __asm
      {
        vcvtss2sd xmm1, xmm0, xmm0
        vmovsd  [rsp+158h+var_120], xmm1
      }
      bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticate.cpp", "bdLoginTaskAuthenticate::updateAuthStatus", 0xA9u, "Task finished after %2.1f seconds", v5);
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticate.cpp", "bdLoginTaskAuthenticate::processAuthReply", 0x223u, "Failed to parse Auth response json");
    }
    bdJSONDeserializer::~bdJSONDeserializer(&responseJSON);
  }
  else
  {
    bdSnprintf(this->m_authStatusMessage, 0x400ui64, "Auth task failed with HTTP code [%u]", v3);
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
  __int32 v4; 
  __int32 v5; 
  const char *v6; 
  unsigned int v7; 
  bdHTTP::bdStatus v9; 
  bool v10; 
  unsigned int format; 
  char *v13; 
  double v14; 
  double v15; 
  bdLoginTaskAuthenticate::AuthStatusCode code; 
  bdJSONDeserializer responseJSON; 
  __int64 v18; 
  char clientTicketBuffer[208]; 

  v18 = -2i64;
  m_authStatusCode = this->m_authStatusCode;
  if ( m_authStatusCode )
  {
    v4 = m_authStatusCode - 1;
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( v5 )
      {
        if ( v5 != 1 )
        {
          v6 = "Pumping Authentication task in unexpected state";
          v13 = "Pumping Authentication task in unexpected state";
          format = 847;
LABEL_26:
          bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticate.cpp", "bdLoginTaskAuthenticate::pump", format, v13);
          bdHandleAssert(1, "(messageInfo != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticate.cpp", "bdLoginTaskAuthenticate::updateAuthStatus", 0xA1u, "Must provide valid message to update auth task status!");
          this->m_authStatusCode = CONNECTED;
          bdStrlcpy(this->m_authStatusMessage, v6, 0x400ui64);
          *(double *)&_XMM0 = bdStopwatch::getElapsedTimeInSeconds(&this->m_taskTimer);
          __asm
          {
            vcvtss2sd xmm1, xmm0, xmm0
            vmovsd  [rsp+158h+var_120], xmm1
          }
          bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticate.cpp", "bdLoginTaskAuthenticate::updateAuthStatus", 0xA9u, "Task finished after %2.1f seconds", v15);
          return;
        }
        v7 = this->m_httpInterface->getLastHTTPStatus(this->m_httpInterface);
        if ( v7 == 200 )
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
            *(double *)&_XMM0 = bdStopwatch::getElapsedTimeInSeconds(&this->m_taskTimer);
            __asm
            {
              vcvtss2sd xmm1, xmm0, xmm0
              vmovsd  [rsp+158h+var_120], xmm1
            }
            bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticate.cpp", "bdLoginTaskAuthenticate::updateAuthStatus", 0xA9u, "Task finished after %2.1f seconds", v14);
            bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticate.cpp", "bdLoginTaskAuthenticate::processAuthReply", 0x223u, "Failed to parse Auth response json");
          }
          bdJSONDeserializer::~bdJSONDeserializer(&responseJSON);
        }
        else
        {
          bdSnprintf(this->m_authStatusMessage, 0x400ui64, "Auth task failed with HTTP code [%u]", v7);
          bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticate.cpp", "bdLoginTaskAuthenticate::processAuthReply", 0x231u, this->m_authStatusMessage);
          code = CONNECTED;
          bdLoginTaskAuthenticate::updateAuthStatus(this, this->m_authStatusMessage, &code);
        }
      }
      else
      {
        v9 = this->m_httpInterface->getStatus(this->m_httpInterface);
        this->m_httpStatus = v9;
        if ( v9 != BD_FAILED )
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
        v6 = "Auth HTTP request already initialized/in progress";
        v13 = "Auth HTTP request already initialized/in progress";
        format = 817;
        goto LABEL_26;
      }
      v10 = this->m_ok && this->m_httpInterface->sendRequest(this->m_httpInterface) == BD_FAILED;
      this->m_ok = v10;
      if ( v10 )
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
  double v8; 

  bdHandleAssert(messageInfo != NULL, "(messageInfo != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticate.cpp", "bdLoginTaskAuthenticate::updateAuthStatus", 0xA1u, "Must provide valid message to update auth task status!");
  this->m_authStatusCode = *code;
  bdStrlcpy(this->m_authStatusMessage, messageInfo, 0x400ui64);
  if ( (unsigned int)(*code - 4) <= 2 )
  {
    *(double *)&_XMM0 = bdStopwatch::getElapsedTimeInSeconds(&this->m_taskTimer);
    __asm
    {
      vcvtss2sd xmm1, xmm0, xmm0
      vmovsd  [rsp+48h+var_10], xmm1
    }
    bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticate.cpp", "bdLoginTaskAuthenticate::updateAuthStatus", 0xA9u, "Task finished after %2.1f seconds", v8);
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

