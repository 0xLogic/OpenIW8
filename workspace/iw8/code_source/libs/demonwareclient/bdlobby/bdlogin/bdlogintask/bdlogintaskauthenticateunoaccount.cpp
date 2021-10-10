/*
==============
bdLoginTaskAuthenticateUnoAccount::bdLoginTaskAuthenticateUnoAccount
==============
*/

void __fastcall bdLoginTaskAuthenticateUnoAccount::bdLoginTaskAuthenticateUnoAccount(bdLoginTaskAuthenticateUnoAccount *this, const bdLoginConfig *loginConfig, bdLoginResult *loginResult)
{
  ??0bdLoginTaskAuthenticateUnoAccount@@QEAA@PEBVbdLoginConfig@@PEAVbdLoginResult@@@Z(this, loginConfig, loginResult);
}

/*
==============
bdLoginTaskAuthenticateUnoAccount::authenticateUser
==============
*/

void __fastcall bdLoginTaskAuthenticateUnoAccount::authenticateUser(bdLoginTaskAuthenticateUnoAccount *this, const bdUnoAccountInfo *accountInfo, const char *fields)
{
  ?authenticateUser@bdLoginTaskAuthenticateUnoAccount@@IEAAXAEBVbdUnoAccountInfo@@PEBD@Z(this, accountInfo, fields);
}

/*
==============
bdLoginTaskAuthenticateUnoAccount::resetHttpInterface
==============
*/

void __fastcall bdLoginTaskAuthenticateUnoAccount::resetHttpInterface(bdLoginTaskAuthenticateUnoAccount *this)
{
  ?resetHttpInterface@bdLoginTaskAuthenticateUnoAccount@@IEAAXXZ(this);
}

/*
==============
bdLoginTaskAuthenticateUnoAccount::getUnoIDToken
==============
*/

const char *__fastcall bdLoginTaskAuthenticateUnoAccount::getUnoIDToken(bdLoginTaskAuthenticateUnoAccount *this)
{
  return ?getUnoIDToken@bdLoginTaskAuthenticateUnoAccount@@QEBAPEBDXZ(this);
}

/*
==============
bdLoginTaskAuthenticateUnoAccount::updateUnoStatus
==============
*/

void __fastcall bdLoginTaskAuthenticateUnoAccount::updateUnoStatus(bdLoginTaskAuthenticateUnoAccount *this, const char *messageInfo, const bdLoginTaskAuthenticateUnoAccount::AuthenticateUnoAccountStatusCode *code)
{
  ?updateUnoStatus@bdLoginTaskAuthenticateUnoAccount@@IEAAXPEBDAEBW4AuthenticateUnoAccountStatusCode@1@@Z(this, messageInfo, code);
}

/*
==============
bdLoginTaskAuthenticateUnoAccount::processUnoReply
==============
*/

void __fastcall bdLoginTaskAuthenticateUnoAccount::processUnoReply(bdLoginTaskAuthenticateUnoAccount *this)
{
  ?processUnoReply@bdLoginTaskAuthenticateUnoAccount@@IEAAXXZ(this);
}

/*
==============
bdLoginTaskAuthenticateUnoAccount::processUnoErrorJSON
==============
*/

void __fastcall bdLoginTaskAuthenticateUnoAccount::processUnoErrorJSON(bdLoginTaskAuthenticateUnoAccount *this, const bdJSONDeserializer *responseJSON)
{
  ?processUnoErrorJSON@bdLoginTaskAuthenticateUnoAccount@@IEAAXAEBVbdJSONDeserializer@@@Z(this, responseJSON);
}

/*
==============
bdLoginTaskAuthenticateUnoAccount::~bdLoginTaskAuthenticateUnoAccount
==============
*/

void __fastcall bdLoginTaskAuthenticateUnoAccount::~bdLoginTaskAuthenticateUnoAccount(bdLoginTaskAuthenticateUnoAccount *this)
{
  ??1bdLoginTaskAuthenticateUnoAccount@@UEAA@XZ(this);
}

/*
==============
bdLoginTaskAuthenticateUnoAccount::pump
==============
*/

void __fastcall bdLoginTaskAuthenticateUnoAccount::pump(bdLoginTaskAuthenticateUnoAccount *this)
{
  ?pump@bdLoginTaskAuthenticateUnoAccount@@UEAAXXZ(this);
}

/*
==============
bdLoginTaskAuthenticateUnoAccount::abortTask
==============
*/

void __fastcall bdLoginTaskAuthenticateUnoAccount::abortTask(bdLoginTaskAuthenticateUnoAccount *this)
{
  ?abortTask@bdLoginTaskAuthenticateUnoAccount@@UEAAXXZ(this);
}

/*
==============
bdLoginTaskAuthenticateUnoAccount::getTaskMessage
==============
*/

const char *__fastcall bdLoginTaskAuthenticateUnoAccount::getTaskMessage(bdLoginTaskAuthenticateUnoAccount *this)
{
  return ?getTaskMessage@bdLoginTaskAuthenticateUnoAccount@@UEBAPEBDXZ(this);
}

/*
==============
bdLoginTaskAuthenticateUnoAccount::getTaskCode
==============
*/

bdLoginTaskAuthenticateUnoAccount::AuthenticateUnoAccountStatusCode __fastcall bdLoginTaskAuthenticateUnoAccount::getTaskCode(bdLoginTaskAuthenticateUnoAccount *this)
{
  return ?getTaskCode@bdLoginTaskAuthenticateUnoAccount@@QEBA?AW4AuthenticateUnoAccountStatusCode@1@XZ(this);
}

/*
==============
bdLoginTaskAuthenticateUnoAccount::reset
==============
*/

void __fastcall bdLoginTaskAuthenticateUnoAccount::reset(bdLoginTaskAuthenticateUnoAccount *this)
{
  ?reset@bdLoginTaskAuthenticateUnoAccount@@UEAAXXZ(this);
}

/*
==============
bdLoginTaskAuthenticateUnoAccount::createTaskBuff
==============
*/

bool __fastcall bdLoginTaskAuthenticateUnoAccount::createTaskBuff(bdLoginTaskAuthenticateUnoAccount *this, unsigned int size)
{
  return ?createTaskBuff@bdLoginTaskAuthenticateUnoAccount@@IEAA_NI@Z(this, size);
}

/*
==============
bdLoginTaskAuthenticateUnoAccount::processUnoJSON
==============
*/

void __fastcall bdLoginTaskAuthenticateUnoAccount::processUnoJSON(bdLoginTaskAuthenticateUnoAccount *this, const bdJSONDeserializer *responseJSON)
{
  ?processUnoJSON@bdLoginTaskAuthenticateUnoAccount@@IEAAXAEBVbdJSONDeserializer@@@Z(this, responseJSON);
}

/*
==============
bdLoginTaskAuthenticateUnoAccount::releaseTaskBuff
==============
*/

void __fastcall bdLoginTaskAuthenticateUnoAccount::releaseTaskBuff(bdLoginTaskAuthenticateUnoAccount *this)
{
  ?releaseTaskBuff@bdLoginTaskAuthenticateUnoAccount@@IEAAXXZ(this);
}

/*
==============
bdLoginTaskAuthenticateUnoAccount::bdLoginTaskAuthenticateUnoAccount
==============
*/
void bdLoginTaskAuthenticateUnoAccount::bdLoginTaskAuthenticateUnoAccount(bdLoginTaskAuthenticateUnoAccount *this, const bdLoginConfig *loginConfig, bdLoginResult *loginResult)
{
  this->__vftable = (bdLoginTaskAuthenticateUnoAccount_vtbl *)&bdLoginTask::`vftable';
  bdStopwatch::bdStopwatch(&this->m_taskTimer);
  this->m_loginConfig = loginConfig;
  this->__vftable = (bdLoginTaskAuthenticateUnoAccount_vtbl *)&bdLoginTaskAuthenticateUnoAccount::`vftable';
  this->m_loginResult = loginResult;
  this->m_httpInterface = NULL;
  this->m_httpStatus = BD_EMPTY;
  this->m_httpUnoRequest = NULL;
  this->m_httpUnoRequestLength = 0;
  this->m_unoStatusCode = UNINITIALIZED;
  this->m_firstPartyTokenStatusCode = FETCHING_FIRST_PARTY_TOKEN;
  memset_0(this->m_httpUnoResponse, 0, sizeof(this->m_httpUnoResponse));
  memset_0(this->m_unoStatusMessage, 0, sizeof(this->m_unoStatusMessage));
  memset_0(this->m_unoIDToken, 0, sizeof(this->m_unoIDToken));
}

/*
==============
bdLoginTaskAuthenticateUnoAccount::~bdLoginTaskAuthenticateUnoAccount
==============
*/
void bdLoginTaskAuthenticateUnoAccount::~bdLoginTaskAuthenticateUnoAccount(bdLoginTaskAuthenticateUnoAccount *this)
{
  char *m_httpUnoRequest; 
  bdHTTP *m_httpInterface; 
  bdHTTP *v4; 

  this->__vftable = (bdLoginTaskAuthenticateUnoAccount_vtbl *)&bdLoginTaskAuthenticateUnoAccount::`vftable';
  m_httpUnoRequest = this->m_httpUnoRequest;
  if ( m_httpUnoRequest )
  {
    bdMemory::deallocate(m_httpUnoRequest);
    this->m_httpUnoRequest = NULL;
    this->m_httpUnoRequestLength = 0;
  }
  m_httpInterface = this->m_httpInterface;
  if ( m_httpInterface )
  {
    m_httpInterface->abortOperation(m_httpInterface);
    v4 = this->m_httpInterface;
    if ( v4 )
      ((void (__fastcall *)(bdHTTP *, __int64))v4->~bdHTTP)(v4, 1i64);
    this->m_httpInterface = NULL;
  }
  this->__vftable = (bdLoginTaskAuthenticateUnoAccount_vtbl *)&bdLoginTask::`vftable';
}

/*
==============
bdLoginTaskAuthenticateUnoAccount::abortTask
==============
*/
void bdLoginTaskAuthenticateUnoAccount::abortTask(bdLoginTaskAuthenticateUnoAccount *this)
{
  double ElapsedTimeInSeconds; 
  bdHTTP *m_httpInterface; 
  bdHTTP *v4; 
  char *m_httpUnoRequest; 

  bdHandleAssert(1, "(messageInfo != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticateunoaccount.cpp", "bdLoginTaskAuthenticateUnoAccount::updateUnoStatus", 0xF4u, "Must provide valid message to update uno task status!");
  this->m_unoStatusCode = WAITING_FOR_REPORT_CONSOLE_DETAILS;
  bdStrlcpy(this->m_unoStatusMessage, "UnoAccount task aborted", 0x400ui64);
  ElapsedTimeInSeconds = bdStopwatch::getElapsedTimeInSeconds(&this->m_taskTimer);
  bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticateunoaccount.cpp", "bdLoginTaskAuthenticateUnoAccount::updateUnoStatus", 0xFCu, "Task finished after %2.1f seconds", *(float *)&ElapsedTimeInSeconds);
  m_httpInterface = this->m_httpInterface;
  if ( m_httpInterface )
  {
    m_httpInterface->abortOperation(m_httpInterface);
    v4 = this->m_httpInterface;
    if ( v4 )
      ((void (__fastcall *)(bdHTTP *, __int64))v4->~bdHTTP)(v4, 1i64);
    this->m_httpInterface = NULL;
  }
  m_httpUnoRequest = this->m_httpUnoRequest;
  if ( m_httpUnoRequest )
  {
    bdMemory::deallocate(m_httpUnoRequest);
    this->m_httpUnoRequest = NULL;
    this->m_httpUnoRequestLength = 0;
  }
}

/*
==============
bdLoginTaskAuthenticateUnoAccount::authenticateUser
==============
*/
void bdLoginTaskAuthenticateUnoAccount::authenticateUser(bdLoginTaskAuthenticateUnoAccount *this, const bdUnoAccountInfo *accountInfo, const char *fields)
{
  bool v6; 
  size_t v7; 
  __int64 v8; 
  bool v9; 
  __int64 v10; 
  const char *Region; 
  bdEnvironment Environment; 
  const char *v13; 
  unsigned __int64 v14; 
  size_t v15; 
  const char *v16; 
  unsigned __int64 v17; 
  __int64 v18; 
  char *m_httpUnoRequest; 
  char *v20; 
  __int64 m_httpUnoRequestLength; 
  bdHTTP *v22; 
  bdHTTP *m_httpInterface; 
  unsigned int v24; 
  bdHTTP *v25; 
  bool (__fastcall *setHeader)(bdHTTP *, const char *, const unsigned __int64); 
  unsigned __int64 TransactionID; 
  unsigned __int64 v28; 
  bdJSONSerializer v29; 
  char v30[512]; 
  char buf[512]; 
  char s[512]; 
  char buffer[6784]; 

  memset_0(buffer, 0, sizeof(buffer));
  bdJSONSerializer::bdJSONSerializer(&v29, buffer, 0x1A80u);
  v6 = bdJSONSerializer::writeBeginObject(&v29);
  bdHandleAssert(accountInfo->m_email != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v7 = -1i64;
  v8 = -1i64;
  do
    ++v8;
  while ( accountInfo->m_email[v8] );
  if ( !v8 )
  {
    bdHandleAssert(accountInfo->m_username != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
    v10 = -1i64;
    do
      ++v10;
    while ( accountInfo->m_username[v10] );
    if ( v10 )
    {
      if ( v6 )
      {
        v9 = bdJSONSerializer::writeString(&v29, "userName", accountInfo->m_username);
        goto LABEL_13;
      }
    }
    else if ( v6 )
    {
      v9 = bdJSONSerializer::writeUInt64(&v29, "unoID", accountInfo->m_userID, 0);
      goto LABEL_13;
    }
LABEL_48:
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticateunoaccount.cpp", "bdLoginTaskAuthenticateUnoAccount::authenticateUser", 0x82u, "Error serializing JSON, request cannot be sent.");
    goto LABEL_49;
  }
  if ( !v6 )
    goto LABEL_48;
  v9 = bdJSONSerializer::writeString(&v29, "email", accountInfo->m_email);
LABEL_13:
  if ( !v9 || !bdJSONSerializer::writeString(&v29, "password", accountInfo->m_password) || !bdJSONSerializer::writeString(&v29, "grantType", "password") || !bdJSONSerializer::writeEndObject(&v29) )
    goto LABEL_48;
  Region = bdLoginConfig::getRegion((bdLoginConfig *)this->m_loginConfig);
  Environment = bdLoginResult::getEnvironment(this->m_loginResult);
  if ( *Region == aCn[0] && Region[1] == aCn[1] && Region[2] == aCn[2] )
  {
    bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
    v13 = "https:
    v14 = -1i64;
    do
      ++v14;
    while ( aHttpsUnoSCodQq[v14] );
  }
  else
  {
    bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
    v13 = "https:
    v14 = -1i64;
    do
      ++v14;
    while ( aHttpsSUnoDemon[v14] );
  }
  v15 = 511i64;
  if ( v14 < 0x1FF )
    v15 = v14;
  memcpy_0(v30, v13, v15);
  v30[v15] = 0;
  if ( Environment )
  {
    if ( Environment == BD_ENVIRONMENT_CERT )
    {
      v16 = "cert";
      goto LABEL_32;
    }
    if ( Environment == BD_ENVIRONMENT_PROD )
    {
      v16 = "prod";
      goto LABEL_32;
    }
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\helpers\\bdloginutils.h", "bdLoginUtils::getUnoUrl", 0xA6u, "Unknown environment (%u): Defaulting to DEV Uno URL", Environment);
  }
  v16 = "dev";
LABEL_32:
  bdSnprintf(buf, 0x200ui64, v30, v16);
  bdSnprintf(s, 0x200ui64, "%s/auth/?client=%s", buf, this->m_loginResult->m_clientID);
  if ( fields )
  {
    v17 = bdStrlen(s);
    bdSnprintf(&s[v17], 512 - v17, "&fields=%s", fields);
  }
  bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticateunoaccount.cpp", "bdLoginTaskAuthenticateUnoAccount::authenticateUser", 0x6Bu, "Login Uno Account URL : %s", s);
  bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v18 = -1i64;
  do
    ++v18;
  while ( buffer[v18] );
  m_httpUnoRequest = this->m_httpUnoRequest;
  if ( m_httpUnoRequest )
  {
    bdMemory::deallocate(m_httpUnoRequest);
    this->m_httpUnoRequest = NULL;
  }
  this->m_httpUnoRequestLength = v18 + 1;
  v20 = (char *)bdMemory::allocate((unsigned int)(v18 + 1));
  this->m_httpUnoRequest = v20;
  m_httpUnoRequestLength = this->m_httpUnoRequestLength;
  bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  do
    ++v7;
  while ( buffer[v7] );
  if ( m_httpUnoRequestLength && v20 )
  {
    if ( v7 >= m_httpUnoRequestLength - 1 )
      v7 = m_httpUnoRequestLength - 1;
    memcpy_0(v20, buffer, v7);
    v20[v7] = 0;
  }
  bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticateunoaccount.cpp", "bdLoginTaskAuthenticateUnoAccount::authenticateUser", 0x70u, "HTTP Request Params: %s", this->m_httpUnoRequest);
  v22 = bdHTTPUtility::newHTTP(0, 0);
  this->m_httpInterface = v22;
  ((void (__fastcall *)(bdHTTP *, __int64, char *))v22->initRequest)(v22, 3i64, s);
  m_httpInterface = this->m_httpInterface;
  v24 = bdJSONSerializer::length(&v29);
  bdHTTP::setUploadData(m_httpInterface, this->m_httpUnoRequest, v24);
  bdHTTP::setDownloadBuffer(this->m_httpInterface, this->m_httpUnoResponse, 0x1000u);
  this->m_httpInterface->setHeader(this->m_httpInterface, "Content-Type", "application/json");
  v25 = this->m_httpInterface;
  setHeader = v25->setHeader;
  TransactionID = bdLoginResult::getTransactionID(this->m_loginResult);
  setHeader(v25, "X-TransactionID", TransactionID);
  this->m_httpInterface->setHeader(this->m_httpInterface, "Accept", "application/json");
  bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticateunoaccount.cpp", "bdLoginTaskAuthenticateUnoAccount::authenticateUser", 0x79u, "Setting state to AUTHENTICATING_UNO_ACCOUNT");
  bdHandleAssert(1, "(messageInfo != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticateunoaccount.cpp", "bdLoginTaskAuthenticateUnoAccount::updateUnoStatus", 0xF4u, "Must provide valid message to update uno task status!");
  this->m_unoStatusCode = NOT_CONNECTED;
  bdStrlcpy(this->m_unoStatusMessage, "Creating Uno account", 0x400ui64);
  v28 = bdLoginResult::getTransactionID(this->m_loginResult);
  bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticateunoaccount.cpp", "bdLoginTaskAuthenticateUnoAccount::authenticateUser", 0x7Eu, "Started call to bdLoginTaskAuthenticateUnoAccount::authenticateUser. TransactionID: (%I64u)", v28);
LABEL_49:
  bdJSONSerializer::~bdJSONSerializer(&v29);
}

/*
==============
bdLoginTaskAuthenticateUnoAccount::createTaskBuff
==============
*/
bool bdLoginTaskAuthenticateUnoAccount::createTaskBuff(bdLoginTaskAuthenticateUnoAccount *this, unsigned int size)
{
  char *m_httpUnoRequest; 
  char *v5; 

  m_httpUnoRequest = this->m_httpUnoRequest;
  if ( m_httpUnoRequest )
  {
    bdMemory::deallocate(m_httpUnoRequest);
    this->m_httpUnoRequest = NULL;
  }
  this->m_httpUnoRequestLength = size + 1;
  v5 = (char *)bdMemory::allocate(size + 1);
  this->m_httpUnoRequest = v5;
  return v5 != NULL;
}

/*
==============
bdLoginTaskAuthenticateUnoAccount::getTaskCode
==============
*/
__int64 bdLoginTaskAuthenticateUnoAccount::getTaskCode(bdLoginTaskAuthenticateUnoAccount *this)
{
  return (unsigned int)this->m_unoStatusCode;
}

/*
==============
bdLoginTaskAuthenticateUnoAccount::getTaskMessage
==============
*/
char *bdLoginTaskAuthenticateUnoAccount::getTaskMessage(bdLoginTaskAuthenticateUnoAccount *this)
{
  return this->m_unoStatusMessage;
}

/*
==============
bdLoginTaskAuthenticateUnoAccount::getUnoIDToken
==============
*/
char *bdLoginTaskAuthenticateUnoAccount::getUnoIDToken(bdLoginTaskAuthenticateUnoAccount *this)
{
  return this->m_unoIDToken;
}

/*
==============
bdLoginTaskAuthenticateUnoAccount::processUnoErrorJSON
==============
*/
void bdLoginTaskAuthenticateUnoAccount::processUnoErrorJSON(bdLoginTaskAuthenticateUnoAccount *this, const bdJSONDeserializer *responseJSON)
{
  bool String; 
  unsigned __int64 v5; 
  size_t v6; 
  double ElapsedTimeInSeconds; 
  bdJSONDeserializer value; 
  unsigned int errorCode; 
  bdLoginTaskAuthenticateUnoAccount::AuthenticateUnoAccountStatusCode code; 

  bdJSONDeserializer::bdJSONDeserializer(&value);
  String = 1;
  if ( bdJSONDeserializer::hasKey((bdJSONDeserializer *)responseJSON, "error") && bdJSONDeserializer::getObject((bdJSONDeserializer *)responseJSON, "error", &value) )
  {
    if ( bdJSONDeserializer::hasKey(&value, "msg") )
    {
      String = bdJSONDeserializer::getString(&value, "msg", this->m_unoStatusMessage, 0x80u);
    }
    else
    {
      bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
      v5 = -1i64;
      do
        ++v5;
      while ( aCouldNotRetrie_0[v5] );
      if ( this != (bdLoginTaskAuthenticateUnoAccount *)-4168i64 )
      {
        v6 = 127i64;
        if ( v5 < 0x7F )
          v6 = v5;
        memcpy_0(this->m_unoStatusMessage, "Could not retrieve error information from Uno response.", v6);
        this->m_unoStatusMessage[v6] = 0;
      }
    }
    errorCode = 0;
    if ( bdJSONDeserializer::hasKey(&value, "code") )
    {
      if ( String )
        bdJSONDeserializer::getUInt32(&value, "code", &errorCode);
    }
    else
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticateunoaccount.cpp", "bdLoginTaskAuthenticateUnoAccount::processUnoErrorJSON", 0xC3u, "Unable to retrieve error code from Uno account authentication response");
      errorCode = 1;
    }
    this->m_loginResult->m_taskErrorCode = bdLoginUtils::convertUnoErrorCode(errorCode);
    if ( errorCode == 214600 || errorCode == 213000 || errorCode == 214000 || errorCode == 214500 || errorCode == 214700 || errorCode == 220000 || errorCode == 244000 )
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticateunoaccount.cpp", "bdLoginTaskAuthenticateUnoAccount::processUnoErrorJSON", 0xCEu, "Parsed a user input error, so fast failing from Authenticate Uno Account Task");
      code = DISCONNECTING;
      bdLoginTaskAuthenticateUnoAccount::updateUnoStatus(this, this->m_unoStatusMessage, &code);
    }
    else
    {
      code = WAITING_FOR_REPORT_CONSOLE_DETAILS;
      bdLoginTaskAuthenticateUnoAccount::updateUnoStatus(this, this->m_unoStatusMessage, &code);
    }
  }
  else
  {
    bdHandleAssert(1, "(messageInfo != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticateunoaccount.cpp", "bdLoginTaskAuthenticateUnoAccount::updateUnoStatus", 0xF4u, "Must provide valid message to update uno task status!");
    this->m_unoStatusCode = WAITING_FOR_REPORT_CONSOLE_DETAILS;
    bdStrlcpy(this->m_unoStatusMessage, "Could not retrieve error information from Uno response.", 0x400ui64);
    ElapsedTimeInSeconds = bdStopwatch::getElapsedTimeInSeconds(&this->m_taskTimer);
    bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticateunoaccount.cpp", "bdLoginTaskAuthenticateUnoAccount::updateUnoStatus", 0xFCu, "Task finished after %2.1f seconds", *(float *)&ElapsedTimeInSeconds);
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticateunoaccount.cpp", "bdLoginTaskAuthenticateUnoAccount::processUnoErrorJSON", 0xDAu, "Could not retrieve error information from Uno response.");
  }
  bdJSONDeserializer::~bdJSONDeserializer(&value);
}

/*
==============
bdLoginTaskAuthenticateUnoAccount::processUnoJSON
==============
*/
void bdLoginTaskAuthenticateUnoAccount::processUnoJSON(bdLoginTaskAuthenticateUnoAccount *this, const bdJSONDeserializer *responseJSON)
{
  double ElapsedTimeInSeconds; 
  double v5; 
  double v6; 
  bdJSONDeserializer value; 

  if ( bdJSONDeserializer::hasKey((bdJSONDeserializer *)responseJSON, "tokens") )
  {
    bdJSONDeserializer::bdJSONDeserializer(&value);
    if ( bdJSONDeserializer::getObject((bdJSONDeserializer *)responseJSON, "tokens", &value) && (!bdJSONDeserializer::hasKey(&value, "IDToken") || bdJSONDeserializer::getString(&value, "IDToken", this->m_unoIDToken, 0x400u)) )
    {
      bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticateunoaccount.cpp", "bdLoginTaskAuthenticateUnoAccount::processUnoJSON", 0x97u, "Setting state to COMPLETED");
      bdHandleAssert(1, "(messageInfo != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticateunoaccount.cpp", "bdLoginTaskAuthenticateUnoAccount::updateUnoStatus", 0xF4u, "Must provide valid message to update uno task status!");
      this->m_unoStatusCode = CONNECTED;
      bdStrlcpy(this->m_unoStatusMessage, "Saved UNO IDToken", 0x400ui64);
      ElapsedTimeInSeconds = bdStopwatch::getElapsedTimeInSeconds(&this->m_taskTimer);
      bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticateunoaccount.cpp", "bdLoginTaskAuthenticateUnoAccount::updateUnoStatus", 0xFCu, "Task finished after %2.1f seconds", *(float *)&ElapsedTimeInSeconds);
    }
    else
    {
      bdHandleAssert(1, "(messageInfo != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticateunoaccount.cpp", "bdLoginTaskAuthenticateUnoAccount::updateUnoStatus", 0xF4u, "Must provide valid message to update uno task status!");
      this->m_unoStatusCode = WAITING_FOR_REPORT_CONSOLE_DETAILS;
      bdStrlcpy(this->m_unoStatusMessage, "Uno response does not contain an IDToken", 0x400ui64);
      v5 = bdStopwatch::getElapsedTimeInSeconds(&this->m_taskTimer);
      bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticateunoaccount.cpp", "bdLoginTaskAuthenticateUnoAccount::updateUnoStatus", 0xFCu, "Task finished after %2.1f seconds", *(float *)&v5);
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticateunoaccount.cpp", "bdLoginTaskAuthenticateUnoAccount::processUnoJSON", 0x9Du, "Uno response does not contain an IDToken");
    }
    bdJSONDeserializer::~bdJSONDeserializer(&value);
  }
  else
  {
    bdHandleAssert(1, "(messageInfo != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticateunoaccount.cpp", "bdLoginTaskAuthenticateUnoAccount::updateUnoStatus", 0xF4u, "Must provide valid message to update uno task status!");
    this->m_unoStatusCode = WAITING_FOR_REPORT_CONSOLE_DETAILS;
    bdStrlcpy(this->m_unoStatusMessage, "Uno response does not contain any tokens", 0x400ui64);
    v6 = bdStopwatch::getElapsedTimeInSeconds(&this->m_taskTimer);
    bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticateunoaccount.cpp", "bdLoginTaskAuthenticateUnoAccount::updateUnoStatus", 0xFCu, "Task finished after %2.1f seconds", *(float *)&v6);
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticateunoaccount.cpp", "bdLoginTaskAuthenticateUnoAccount::processUnoJSON", 0xA2u, "Uno response does not contain any tokens");
  }
}

/*
==============
bdLoginTaskAuthenticateUnoAccount::processUnoReply
==============
*/
void bdLoginTaskAuthenticateUnoAccount::processUnoReply(bdLoginTaskAuthenticateUnoAccount *this)
{
  unsigned int v2; 
  double ElapsedTimeInSeconds; 
  double v4; 
  unsigned int v5; 
  bdJSONDeserializer responseJSON; 

  bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticateunoaccount.cpp", "bdLoginTaskAuthenticateUnoAccount::processUnoReply", 0x22u, "Processing bdLogin Uno Account Creation task reply");
  v2 = this->m_httpInterface->getLastHTTPStatus(this->m_httpInterface);
  if ( v2 == 200 )
  {
    bdJSONDeserializer::bdJSONDeserializer(&responseJSON);
    if ( bdJSONDeserializer::parse(&responseJSON, this->m_httpUnoResponse) && bdJSONDeserializer::isObject(&responseJSON) )
    {
      bdLoginTaskAuthenticateUnoAccount::processUnoJSON(this, &responseJSON);
    }
    else
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticateunoaccount.cpp", "bdLoginTaskAuthenticateUnoAccount::processUnoReply", 0x31u, "Failed to parse Uno response json");
      bdHandleAssert(1, "(messageInfo != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticateunoaccount.cpp", "bdLoginTaskAuthenticateUnoAccount::updateUnoStatus", 0xF4u, "Must provide valid message to update uno task status!");
      this->m_unoStatusCode = WAITING_FOR_REPORT_CONSOLE_DETAILS;
      bdStrlcpy(this->m_unoStatusMessage, "Failed to parse Uno response json", 0x400ui64);
      ElapsedTimeInSeconds = bdStopwatch::getElapsedTimeInSeconds(&this->m_taskTimer);
      bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticateunoaccount.cpp", "bdLoginTaskAuthenticateUnoAccount::updateUnoStatus", 0xFCu, "Task finished after %2.1f seconds", *(float *)&ElapsedTimeInSeconds);
    }
  }
  else
  {
    v5 = v2;
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticateunoaccount.cpp", "bdLoginTaskAuthenticateUnoAccount::processUnoReply", 0x37u, "Uno task failed with HTTP code [%u]", v5);
    bdJSONDeserializer::bdJSONDeserializer(&responseJSON);
    if ( bdJSONDeserializer::parse(&responseJSON, this->m_httpUnoResponse) && bdJSONDeserializer::isObject(&responseJSON) )
    {
      bdLoginTaskAuthenticateUnoAccount::processUnoErrorJSON(this, &responseJSON);
    }
    else
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticateunoaccount.cpp", "bdLoginTaskAuthenticateUnoAccount::processUnoReply", 0x42u, "Failed to parse Uno error response json");
      bdHandleAssert(1, "(messageInfo != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticateunoaccount.cpp", "bdLoginTaskAuthenticateUnoAccount::updateUnoStatus", 0xF4u, "Must provide valid message to update uno task status!");
      this->m_unoStatusCode = WAITING_FOR_REPORT_CONSOLE_DETAILS;
      bdStrlcpy(this->m_unoStatusMessage, "Failed to parse Uno error response json", 0x400ui64);
      v4 = bdStopwatch::getElapsedTimeInSeconds(&this->m_taskTimer);
      bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticateunoaccount.cpp", "bdLoginTaskAuthenticateUnoAccount::updateUnoStatus", 0xFCu, "Task finished after %2.1f seconds", *(float *)&v4);
    }
  }
  bdJSONDeserializer::~bdJSONDeserializer(&responseJSON);
}

/*
==============
bdLoginTaskAuthenticateUnoAccount::pump
==============
*/
void bdLoginTaskAuthenticateUnoAccount::pump(bdLoginTaskAuthenticateUnoAccount *this)
{
  bdLoginTaskAuthenticateUnoAccount::AuthenticateUnoAccountStatusCode m_unoStatusCode; 
  __int32 v3; 
  __int32 v4; 
  bdHTTP::bdStatus v5; 
  __int32 v6; 
  __int32 v7; 
  const char *v8; 
  bdLoginResumeConfig *LoginResumeConfig; 
  const bdUnoAccountInfo *AccountInfo; 
  bdLoginTaskAuthenticateUnoAccount::AuthenticateUnoAccountStatusCode code; 
  __int64 v12; 
  bdUnoAccountInfo v13; 
  bdLoginResumeConfig result; 

  v12 = -2i64;
  m_unoStatusCode = this->m_unoStatusCode;
  if ( m_unoStatusCode )
  {
    v3 = m_unoStatusCode - 1;
    if ( v3 )
    {
      v4 = v3 - 1;
      if ( v4 )
      {
        if ( v4 != 2 )
          bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticateunoaccount.cpp", "bdLoginTaskAuthenticateUnoAccount::pump", 0x148u, "Pumping in an unknown state!");
      }
      else
      {
        bdLoginTaskAuthenticateUnoAccount::processUnoReply(this);
      }
    }
    else
    {
      v5 = this->m_httpInterface->getStatus(this->m_httpInterface);
      this->m_httpStatus = v5;
      v6 = v5 - 2;
      if ( v6 )
      {
        v7 = v6 - 3;
        if ( v7 )
        {
          if ( v7 != 1 )
            return;
          bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticateunoaccount.cpp", "bdLoginTaskAuthenticateUnoAccount::pump", 0x132u, "Setting state to RECEIVED_REPLY");
          v8 = "Something went wrong with Uno request";
          bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticateunoaccount.cpp", "bdLoginTaskAuthenticateUnoAccount::pump", 0x133u, "Something went wrong with Uno request");
        }
        else
        {
          bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticateunoaccount.cpp", "bdLoginTaskAuthenticateUnoAccount::pump", 0x137u, "Setting state to RECEIVED_REPLY");
          v8 = "Got successful reply from request to Uno";
          bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticateunoaccount.cpp", "bdLoginTaskAuthenticateUnoAccount::pump", 0x138u, "Got successful reply from request to Uno");
        }
        code = CONNECTING;
        bdLoginTaskAuthenticateUnoAccount::updateUnoStatus(this, v8, &code);
      }
      else
      {
        this->m_httpInterface->sendRequest(this->m_httpInterface);
        bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticateunoaccount.cpp", "bdLoginTaskAuthenticateUnoAccount::pump", 0x12Du, "Sent request to Uno");
      }
    }
  }
  else
  {
    bdStopwatch::start(&this->m_taskTimer);
    LoginResumeConfig = bdLoginResult::getLoginResumeConfig(this->m_loginResult, &result);
    AccountInfo = bdLoginResumeConfig::getAccountInfo(LoginResumeConfig, &v13);
    bdLoginTaskAuthenticateUnoAccount::authenticateUser(this, AccountInfo, NULL);
    bdUnoAccountInfo::~bdUnoAccountInfo(&v13);
    bdLoginResumeConfig::~bdLoginResumeConfig(&result);
  }
}

/*
==============
bdLoginTaskAuthenticateUnoAccount::releaseTaskBuff
==============
*/
void bdLoginTaskAuthenticateUnoAccount::releaseTaskBuff(bdLoginTaskAuthenticateUnoAccount *this)
{
  char *m_httpUnoRequest; 

  m_httpUnoRequest = this->m_httpUnoRequest;
  if ( m_httpUnoRequest )
  {
    bdMemory::deallocate(m_httpUnoRequest);
    this->m_httpUnoRequest = NULL;
    this->m_httpUnoRequestLength = 0;
  }
}

/*
==============
bdLoginTaskAuthenticateUnoAccount::reset
==============
*/
void bdLoginTaskAuthenticateUnoAccount::reset(bdLoginTaskAuthenticateUnoAccount *this)
{
  bdHTTP *m_httpInterface; 
  bdHTTP *v3; 
  char *m_httpUnoRequest; 

  bdHandleAssert(1, "(messageInfo != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticateunoaccount.cpp", "bdLoginTaskAuthenticateUnoAccount::updateUnoStatus", 0xF4u, "Must provide valid message to update uno task status!");
  this->m_unoStatusCode = UNINITIALIZED;
  bdStrlcpy(this->m_unoStatusMessage, (const char *const)&queryFormat.fmt + 3, 0x400ui64);
  this->m_loginResult->m_taskErrorCode = BD_NO_ERROR;
  m_httpInterface = this->m_httpInterface;
  if ( m_httpInterface )
  {
    m_httpInterface->abortOperation(m_httpInterface);
    v3 = this->m_httpInterface;
    if ( v3 )
      ((void (__fastcall *)(bdHTTP *, __int64))v3->~bdHTTP)(v3, 1i64);
    this->m_httpInterface = NULL;
  }
  m_httpUnoRequest = this->m_httpUnoRequest;
  if ( m_httpUnoRequest )
  {
    bdMemory::deallocate(m_httpUnoRequest);
    this->m_httpUnoRequest = NULL;
    this->m_httpUnoRequestLength = 0;
  }
  memset_0(this->m_httpUnoResponse, 0, sizeof(this->m_httpUnoResponse));
  memset_0(this->m_unoStatusMessage, 0, sizeof(this->m_unoStatusMessage));
  memset_0(this->m_unoIDToken, 0, sizeof(this->m_unoIDToken));
}

/*
==============
bdLoginTaskAuthenticateUnoAccount::resetHttpInterface
==============
*/
void bdLoginTaskAuthenticateUnoAccount::resetHttpInterface(bdLoginTaskAuthenticateUnoAccount *this)
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
bdLoginTaskAuthenticateUnoAccount::updateUnoStatus
==============
*/
void bdLoginTaskAuthenticateUnoAccount::updateUnoStatus(bdLoginTaskAuthenticateUnoAccount *this, const char *messageInfo, const bdLoginTaskAuthenticateUnoAccount::AuthenticateUnoAccountStatusCode *code)
{
  double ElapsedTimeInSeconds; 

  bdHandleAssert(messageInfo != NULL, "(messageInfo != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticateunoaccount.cpp", "bdLoginTaskAuthenticateUnoAccount::updateUnoStatus", 0xF4u, "Must provide valid message to update uno task status!");
  this->m_unoStatusCode = *code;
  bdStrlcpy(this->m_unoStatusMessage, messageInfo, 0x400ui64);
  if ( (unsigned int)(*code - 3) <= 2 )
  {
    ElapsedTimeInSeconds = bdStopwatch::getElapsedTimeInSeconds(&this->m_taskTimer);
    bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskauthenticateunoaccount.cpp", "bdLoginTaskAuthenticateUnoAccount::updateUnoStatus", 0xFCu, "Task finished after %2.1f seconds", *(float *)&ElapsedTimeInSeconds);
  }
}

