/*
==============
bdLoginTaskCreateUnoAccount::~bdLoginTaskCreateUnoAccount
==============
*/

void __fastcall bdLoginTaskCreateUnoAccount::~bdLoginTaskCreateUnoAccount(bdLoginTaskCreateUnoAccount *this)
{
  ??1bdLoginTaskCreateUnoAccount@@UEAA@XZ(this);
}

/*
==============
bdLoginTaskCreateUnoAccount::pump
==============
*/

void __fastcall bdLoginTaskCreateUnoAccount::pump(bdLoginTaskCreateUnoAccount *this)
{
  ?pump@bdLoginTaskCreateUnoAccount@@UEAAXXZ(this);
}

/*
==============
bdLoginTaskCreateUnoAccount::processUnoErrorJSON
==============
*/

void __fastcall bdLoginTaskCreateUnoAccount::processUnoErrorJSON(bdLoginTaskCreateUnoAccount *this, const bdJSONDeserializer *responseJSON)
{
  ?processUnoErrorJSON@bdLoginTaskCreateUnoAccount@@IEAAXAEBVbdJSONDeserializer@@@Z(this, responseJSON);
}

/*
==============
bdLoginTaskCreateUnoAccount::bdLoginTaskCreateUnoAccount
==============
*/

void __fastcall bdLoginTaskCreateUnoAccount::bdLoginTaskCreateUnoAccount(bdLoginTaskCreateUnoAccount *this, const bdLoginConfig *loginConfig, bdLoginResult *loginResult)
{
  ??0bdLoginTaskCreateUnoAccount@@QEAA@PEBVbdLoginConfig@@PEAVbdLoginResult@@@Z(this, loginConfig, loginResult);
}

/*
==============
bdLoginTaskCreateUnoAccount::reset
==============
*/

void __fastcall bdLoginTaskCreateUnoAccount::reset(bdLoginTaskCreateUnoAccount *this)
{
  ?reset@bdLoginTaskCreateUnoAccount@@UEAAXXZ(this);
}

/*
==============
bdLoginTaskCreateUnoAccount::createTaskBuff
==============
*/

bool __fastcall bdLoginTaskCreateUnoAccount::createTaskBuff(bdLoginTaskCreateUnoAccount *this, unsigned int size)
{
  return ?createTaskBuff@bdLoginTaskCreateUnoAccount@@IEAA_NI@Z(this, size);
}

/*
==============
bdLoginTaskCreateUnoAccount::abortTask
==============
*/

void __fastcall bdLoginTaskCreateUnoAccount::abortTask(bdLoginTaskCreateUnoAccount *this)
{
  ?abortTask@bdLoginTaskCreateUnoAccount@@UEAAXXZ(this);
}

/*
==============
bdLoginTaskCreateUnoAccount::getTaskCode
==============
*/

bdLoginTaskCreateUnoAccount::CreateUnoAccountStatusCode __fastcall bdLoginTaskCreateUnoAccount::getTaskCode(bdLoginTaskCreateUnoAccount *this)
{
  return ?getTaskCode@bdLoginTaskCreateUnoAccount@@QEBA?AW4CreateUnoAccountStatusCode@1@XZ(this);
}

/*
==============
bdLoginTaskCreateUnoAccount::getUnoIDToken
==============
*/

const char *__fastcall bdLoginTaskCreateUnoAccount::getUnoIDToken(bdLoginTaskCreateUnoAccount *this)
{
  return ?getUnoIDToken@bdLoginTaskCreateUnoAccount@@QEBAPEBDXZ(this);
}

/*
==============
bdLoginTaskCreateUnoAccount::updateUnoStatus
==============
*/

void __fastcall bdLoginTaskCreateUnoAccount::updateUnoStatus(bdLoginTaskCreateUnoAccount *this, const char *messageInfo, const bdLoginTaskCreateUnoAccount::CreateUnoAccountStatusCode *code)
{
  ?updateUnoStatus@bdLoginTaskCreateUnoAccount@@IEAAXPEBDAEBW4CreateUnoAccountStatusCode@1@@Z(this, messageInfo, code);
}

/*
==============
bdLoginTaskCreateUnoAccount::releaseTaskBuff
==============
*/

void __fastcall bdLoginTaskCreateUnoAccount::releaseTaskBuff(bdLoginTaskCreateUnoAccount *this)
{
  ?releaseTaskBuff@bdLoginTaskCreateUnoAccount@@IEAAXXZ(this);
}

/*
==============
bdLoginTaskCreateUnoAccount::validateFields
==============
*/

bool __fastcall bdLoginTaskCreateUnoAccount::validateFields(bdLoginTaskCreateUnoAccount *this, const char *fields)
{
  return ?validateFields@bdLoginTaskCreateUnoAccount@@IEAA_NPEBD@Z(this, fields);
}

/*
==============
bdLoginTaskCreateUnoAccount::createAccount
==============
*/

void __fastcall bdLoginTaskCreateUnoAccount::createAccount(bdLoginTaskCreateUnoAccount *this, bdLoginResumeConfig *resumeConfig)
{
  ?createAccount@bdLoginTaskCreateUnoAccount@@IEAAXAEAVbdLoginResumeConfig@@@Z(this, resumeConfig);
}

/*
==============
bdLoginTaskCreateUnoAccount::processUnoReply
==============
*/

void __fastcall bdLoginTaskCreateUnoAccount::processUnoReply(bdLoginTaskCreateUnoAccount *this)
{
  ?processUnoReply@bdLoginTaskCreateUnoAccount@@IEAAXXZ(this);
}

/*
==============
bdLoginTaskCreateUnoAccount::resetHttpInterface
==============
*/

void __fastcall bdLoginTaskCreateUnoAccount::resetHttpInterface(bdLoginTaskCreateUnoAccount *this)
{
  ?resetHttpInterface@bdLoginTaskCreateUnoAccount@@IEAAXXZ(this);
}

/*
==============
bdLoginTaskCreateUnoAccount::getTaskMessage
==============
*/

const char *__fastcall bdLoginTaskCreateUnoAccount::getTaskMessage(bdLoginTaskCreateUnoAccount *this)
{
  return ?getTaskMessage@bdLoginTaskCreateUnoAccount@@UEBAPEBDXZ(this);
}

/*
==============
bdLoginTaskCreateUnoAccount::processUnoJSON
==============
*/

void __fastcall bdLoginTaskCreateUnoAccount::processUnoJSON(bdLoginTaskCreateUnoAccount *this, const bdJSONDeserializer *responseJSON)
{
  ?processUnoJSON@bdLoginTaskCreateUnoAccount@@IEAAXAEBVbdJSONDeserializer@@@Z(this, responseJSON);
}

/*
==============
bdLoginTaskCreateUnoAccount::bdLoginTaskCreateUnoAccount
==============
*/
void bdLoginTaskCreateUnoAccount::bdLoginTaskCreateUnoAccount(bdLoginTaskCreateUnoAccount *this, const bdLoginConfig *loginConfig, bdLoginResult *loginResult)
{
  this->__vftable = (bdLoginTaskCreateUnoAccount_vtbl *)&bdLoginTask::`vftable';
  bdStopwatch::bdStopwatch(&this->m_taskTimer);
  this->m_loginConfig = loginConfig;
  this->__vftable = (bdLoginTaskCreateUnoAccount_vtbl *)&bdLoginTaskCreateUnoAccount::`vftable';
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
bdLoginTaskCreateUnoAccount::~bdLoginTaskCreateUnoAccount
==============
*/
void bdLoginTaskCreateUnoAccount::~bdLoginTaskCreateUnoAccount(bdLoginTaskCreateUnoAccount *this)
{
  char *m_httpUnoRequest; 
  bdHTTP *m_httpInterface; 
  bdHTTP *v4; 

  this->__vftable = (bdLoginTaskCreateUnoAccount_vtbl *)&bdLoginTaskCreateUnoAccount::`vftable';
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
  this->__vftable = (bdLoginTaskCreateUnoAccount_vtbl *)&bdLoginTask::`vftable';
}

/*
==============
bdLoginTaskCreateUnoAccount::abortTask
==============
*/
void bdLoginTaskCreateUnoAccount::abortTask(bdLoginTaskCreateUnoAccount *this)
{
  double ElapsedTimeInSeconds; 
  bdHTTP *m_httpInterface; 
  bdHTTP *v4; 
  char *m_httpUnoRequest; 

  bdHandleAssert(1, "(messageInfo != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskcreateunoaccount.cpp", "bdLoginTaskCreateUnoAccount::updateUnoStatus", 0x153u, "Must provide valid message to update uno task status!");
  this->m_unoStatusCode = WAITING_FOR_REPORT_CONSOLE_DETAILS;
  bdStrlcpy(this->m_unoStatusMessage, "UnoAccount task aborted", 0x400ui64);
  ElapsedTimeInSeconds = bdStopwatch::getElapsedTimeInSeconds(&this->m_taskTimer);
  bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskcreateunoaccount.cpp", "bdLoginTaskCreateUnoAccount::updateUnoStatus", 0x15Bu, "Task finished after %2.1f seconds", *(float *)&ElapsedTimeInSeconds);
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
bdLoginTaskCreateUnoAccount::createAccount
==============
*/
void bdLoginTaskCreateUnoAccount::createAccount(bdLoginTaskCreateUnoAccount *this, bdLoginResumeConfig *resumeConfig)
{
  char *m_fields; 
  bool v5; 
  bool v6; 
  unsigned __int16 i; 
  const char *Region; 
  bdEnvironment Environment; 
  const char *v10; 
  size_t v11; 
  unsigned __int64 v12; 
  size_t v13; 
  const char *v14; 
  unsigned __int64 v15; 
  char *v16; 
  unsigned __int64 v17; 
  char *m_source; 
  unsigned __int64 v19; 
  __int64 v20; 
  char *m_httpUnoRequest; 
  char *v22; 
  __int64 m_httpUnoRequestLength; 
  bdHTTP *v24; 
  bdHTTP *m_httpInterface; 
  unsigned int v26; 
  bdHTTP *v27; 
  bool (__fastcall *setHeader)(bdHTTP *, const char *, const unsigned __int64); 
  unsigned __int64 TransactionID; 
  bdHTTP *v30; 
  bool (__fastcall *v31)(bdHTTP *, const char *, const char *); 
  const char *DWToken; 
  unsigned __int64 v33; 
  double ElapsedTimeInSeconds; 
  bdLoginTaskCreateUnoAccount::CreateUnoAccountStatusCode code; 
  __int64 v36; 
  bdJSONSerializer json; 
  char s[512]; 
  char v39[512]; 
  char buf[512]; 
  char buffer[6784]; 

  v36 = -2i64;
  m_fields = resumeConfig->m_fields;
  if ( m_fields && (!strstr_0(m_fields, "accountType") || !strstr_0(m_fields, "unoID") || !strstr_0(m_fields, "userName")) )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskcreateunoaccount.cpp", "bdLoginTaskCreateUnoAccount::validateFields", 0x1D2u, "Fields parameter for Uno requests must contain the mandatory fields %s, %s and %s", "accountType", "unoID", "userName");
    bdSnprintf(this->m_unoStatusMessage, 0x400ui64, "Fields parameter for Uno requests must contain the mandatory fields %s, %s and %s", "accountType", "unoID", "userName");
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskcreateunoaccount.cpp", "bdLoginTaskCreateUnoAccount::createAccount", 0x52u, this->m_unoStatusMessage);
    code = WAITING_FOR_REPORT_CONSOLE_DETAILS;
    bdLoginTaskCreateUnoAccount::updateUnoStatus(this, this->m_unoStatusMessage, &code);
    return;
  }
  this->m_outputObject = &resumeConfig->m_accountInfo;
  memset_0(buffer, 0, sizeof(buffer));
  bdJSONSerializer::bdJSONSerializer(&json, buffer, 0x1A80u);
  v5 = bdJSONSerializer::writeBeginObject(&json) && bdUnoAccountInfo::serializeSecuredFieldsToJSON(&resumeConfig->m_accountInfo, &json, 1) && bdUnoAccountInfo::serializeUnsecuredFieldsToJSON(&resumeConfig->m_accountInfo, &json, 1);
  if ( resumeConfig->m_numSubscriptions )
  {
    v6 = v5 && bdJSONSerializer::writeBeginObject(&json, "subscriptions");
    for ( i = 0; i < resumeConfig->m_numSubscriptions; ++i )
      v6 = v6 && bdUnoSubscription::serializeToJSON(&resumeConfig->m_subscriptions[i], &json, 1);
    v5 = v6 && bdJSONSerializer::writeEndObject(&json);
  }
  if ( resumeConfig->m_termsOfService )
    v5 = v5 && bdJSONSerializer::writeBeginObject(&json, "termsOfService") && bdUnoTermsOfService::serializeToJSON(resumeConfig->m_termsOfService, &json) && bdJSONSerializer::writeEndObject(&json);
  if ( resumeConfig->m_accountInfo.m_accountType == BD_UNO_ACCOUNT_FULL )
  {
    if ( !v5 )
      goto LABEL_73;
    v5 = bdJSONSerializer::writeBoolean(&json, "subscriptionOptIn", resumeConfig->m_accountInfo.m_subscriptionOptIn);
  }
  if ( v5 && bdJSONSerializer::writeEndObject(&json) )
  {
    Region = bdLoginConfig::getRegion((bdLoginConfig *)this->m_loginConfig);
    Environment = bdLoginResult::getEnvironment(this->m_loginResult);
    if ( *Region == aCn[0] && Region[1] == aCn[1] && Region[2] == aCn[2] )
    {
      bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
      v10 = "https:
      v11 = -1i64;
      v12 = -1i64;
      do
        ++v12;
      while ( aHttpsUnoSCodQq[v12] );
    }
    else
    {
      bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
      v10 = "https:
      v11 = -1i64;
      v12 = -1i64;
      do
        ++v12;
      while ( aHttpsSUnoDemon[v12] );
    }
    v13 = 511i64;
    if ( v12 < 0x1FF )
      v13 = v12;
    memcpy_0(v39, v10, v13);
    v39[v13] = 0;
    if ( Environment )
    {
      if ( Environment == BD_ENVIRONMENT_CERT )
      {
        v14 = "cert";
        goto LABEL_53;
      }
      if ( Environment == BD_ENVIRONMENT_PROD )
      {
        v14 = "prod";
        goto LABEL_53;
      }
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\helpers\\bdloginutils.h", "bdLoginUtils::getUnoUrl", 0xA6u, "Unknown environment (%u): Defaulting to DEV Uno URL", Environment);
    }
    v14 = "dev";
LABEL_53:
    bdSnprintf(buf, 0x200ui64, v39, v14);
    bdSnprintf(s, 0x200ui64, "%s/users/?client=%s", buf, this->m_loginResult->m_clientID);
    if ( resumeConfig != (bdLoginResumeConfig *)-5672i64 )
    {
      v15 = bdStrlen(s);
      bdSnprintf(&s[v15], 512 - v15, "&locale=%s", resumeConfig->m_locale);
    }
    v16 = resumeConfig->m_fields;
    if ( v16 )
    {
      v17 = bdStrlen(s);
      bdSnprintf(&s[v17], 512 - v17, "&fields=%s", v16);
    }
    m_source = resumeConfig->m_source;
    if ( m_source )
    {
      v19 = bdStrlen(s);
      bdSnprintf(&s[v19], 512 - v19, "&source=%s", m_source);
    }
    bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskcreateunoaccount.cpp", "bdLoginTaskCreateUnoAccount::createAccount", 0x88u, "Create Uno Account URL : %s", s);
    bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
    v20 = -1i64;
    do
      ++v20;
    while ( buffer[v20] );
    m_httpUnoRequest = this->m_httpUnoRequest;
    if ( m_httpUnoRequest )
    {
      bdMemory::deallocate(m_httpUnoRequest);
      this->m_httpUnoRequest = NULL;
    }
    this->m_httpUnoRequestLength = v20 + 1;
    v22 = (char *)bdMemory::allocate((unsigned int)(v20 + 1));
    this->m_httpUnoRequest = v22;
    m_httpUnoRequestLength = this->m_httpUnoRequestLength;
    bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
    do
      ++v11;
    while ( buffer[v11] );
    if ( m_httpUnoRequestLength && v22 )
    {
      if ( v11 >= m_httpUnoRequestLength - 1 )
        v11 = m_httpUnoRequestLength - 1;
      memcpy_0(v22, buffer, v11);
      v22[v11] = 0;
    }
    bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskcreateunoaccount.cpp", "bdLoginTaskCreateUnoAccount::createAccount", 0x8Du, "HTTP Request Params: %s", this->m_httpUnoRequest);
    v24 = bdHTTPUtility::newHTTP(0, 0);
    this->m_httpInterface = v24;
    ((void (__fastcall *)(bdHTTP *, __int64, char *))v24->initRequest)(v24, 3i64, s);
    m_httpInterface = this->m_httpInterface;
    v26 = bdJSONSerializer::length(&json);
    bdHTTP::setUploadData(m_httpInterface, this->m_httpUnoRequest, v26);
    bdHTTP::setDownloadBuffer(this->m_httpInterface, this->m_httpUnoResponse, 0x1000u);
    this->m_httpInterface->setHeader(this->m_httpInterface, "Content-Type", "application/json");
    v27 = this->m_httpInterface;
    setHeader = v27->setHeader;
    TransactionID = bdLoginResult::getTransactionID(this->m_loginResult);
    setHeader(v27, "X-TransactionID", TransactionID);
    this->m_httpInterface->setHeader(this->m_httpInterface, "Accept", "application/json");
    v30 = this->m_httpInterface;
    v31 = v30->setHeader;
    DWToken = bdLoginResult::getDWToken(this->m_loginResult);
    v31(v30, "Authorization", DWToken);
    bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskcreateunoaccount.cpp", "bdLoginTaskCreateUnoAccount::createAccount", 0x97u, "Setting state to CREATING_UNO_ACCOUNT");
    bdHandleAssert(1, "(messageInfo != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskcreateunoaccount.cpp", "bdLoginTaskCreateUnoAccount::updateUnoStatus", 0x153u, "Must provide valid message to update uno task status!");
    this->m_unoStatusCode = NOT_CONNECTED;
    bdStrlcpy(this->m_unoStatusMessage, "Creating Uno account", 0x400ui64);
    v33 = bdLoginResult::getTransactionID(this->m_loginResult);
    bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskcreateunoaccount.cpp", "bdLoginTaskCreateUnoAccount::createAccount", 0x9Cu, "Started call to bdLoginTaskCreateUnoAccount::createAccount. TransactionID: (%I64u)", v33);
    goto LABEL_74;
  }
LABEL_73:
  bdHandleAssert(1, "(messageInfo != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskcreateunoaccount.cpp", "bdLoginTaskCreateUnoAccount::updateUnoStatus", 0x153u, "Must provide valid message to update uno task status!");
  this->m_unoStatusCode = WAITING_FOR_REPORT_CONSOLE_DETAILS;
  bdStrlcpy(this->m_unoStatusMessage, "Error serializing JSON, request cannot be sent.", 0x400ui64);
  ElapsedTimeInSeconds = bdStopwatch::getElapsedTimeInSeconds(&this->m_taskTimer);
  bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskcreateunoaccount.cpp", "bdLoginTaskCreateUnoAccount::updateUnoStatus", 0x15Bu, "Task finished after %2.1f seconds", *(float *)&ElapsedTimeInSeconds);
  bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskcreateunoaccount.cpp", "bdLoginTaskCreateUnoAccount::createAccount", 0xA1u, "Error serializing JSON, request cannot be sent.");
LABEL_74:
  bdJSONSerializer::~bdJSONSerializer(&json);
}

/*
==============
bdLoginTaskCreateUnoAccount::createTaskBuff
==============
*/
bool bdLoginTaskCreateUnoAccount::createTaskBuff(bdLoginTaskCreateUnoAccount *this, unsigned int size)
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
bdLoginTaskCreateUnoAccount::getTaskCode
==============
*/
__int64 bdLoginTaskCreateUnoAccount::getTaskCode(bdLoginTaskCreateUnoAccount *this)
{
  return (unsigned int)this->m_unoStatusCode;
}

/*
==============
bdLoginTaskCreateUnoAccount::getTaskMessage
==============
*/
char *bdLoginTaskCreateUnoAccount::getTaskMessage(bdLoginTaskCreateUnoAccount *this)
{
  return this->m_unoStatusMessage;
}

/*
==============
bdLoginTaskCreateUnoAccount::getUnoIDToken
==============
*/
char *bdLoginTaskCreateUnoAccount::getUnoIDToken(bdLoginTaskCreateUnoAccount *this)
{
  return this->m_unoIDToken;
}

/*
==============
bdLoginTaskCreateUnoAccount::processUnoErrorJSON
==============
*/
void bdLoginTaskCreateUnoAccount::processUnoErrorJSON(bdLoginTaskCreateUnoAccount *this, const bdJSONDeserializer *responseJSON)
{
  char v4; 
  unsigned int i; 
  bool Object; 
  bool v7; 
  unsigned __int64 v8; 
  size_t v9; 
  double ElapsedTimeInSeconds; 
  double v11; 
  unsigned int errorCode; 
  bdJSONDeserializer v13; 
  bdJSONDeserializer v14; 
  bdJSONDeserializer value; 
  __int64 v16; 
  char v17[32]; 
  char v18[8]; 
  char v19[8]; 
  char buf[1024]; 

  v16 = -2i64;
  bdJSONDeserializer::bdJSONDeserializer(&value);
  if ( bdJSONDeserializer::hasKey((bdJSONDeserializer *)responseJSON, "error") && bdJSONDeserializer::getObject((bdJSONDeserializer *)responseJSON, "error", &value) )
  {
    bdJSONDeserializer::bdJSONDeserializer(&v14);
    if ( bdJSONDeserializer::hasKey(&value, "context") && bdJSONDeserializer::getArray(&value, "context", &v14) )
    {
      bdJSONDeserializer::bdJSONDeserializer(&v13);
      v4 = 0;
      memset_0(this->m_unoStatusMessage, 0, sizeof(this->m_unoStatusMessage));
      for ( i = 0; i < v14.m_count; ++i )
      {
        memset_0(buf, 0, sizeof(buf));
        Object = bdJSONDeserializer::getObject(&v14, i, &v13);
        errorCode = 0;
        if ( bdJSONDeserializer::hasKey(&v13, "code") )
        {
          Object = Object && bdJSONDeserializer::getUInt32(&v13, "code", &errorCode);
        }
        else
        {
          bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskcreateunoaccount.cpp", "bdLoginTaskCreateUnoAccount::processUnoErrorJSON", 0xECu, "Unable to retrieve error code from Uno account creation response");
          errorCode = 1;
        }
        this->m_loginResult->m_taskErrorCode = bdLoginUtils::convertUnoErrorCode(errorCode);
        if ( errorCode == 214600 || errorCode == 213000 || errorCode == 214000 || errorCode == 214500 || errorCode == 214700 || errorCode == 220000 || errorCode == 244000 )
          v4 = 1;
        if ( bdJSONDeserializer::hasKey(&v13, "msg") )
        {
          Object = Object && bdJSONDeserializer::getString(&v13, "msg", v18, 0x80u);
        }
        else
        {
          bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
          *(double *)v18 = *(double *)"Uknown Error";
          strcpy(v19, "rror");
        }
        if ( bdJSONDeserializer::hasKey(&v13, "field") )
        {
          if ( !Object )
            goto LABEL_33;
          v7 = !bdJSONDeserializer::getString(&v13, "field", v17, 0x12u);
        }
        else
        {
          bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
          strcpy(v17, "Unknown");
          v7 = !Object;
        }
        if ( v7 )
        {
LABEL_33:
          bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
          v8 = -1i64;
          do
            ++v8;
          while ( aCouldNotRetrie_1[v8] );
          if ( this != (bdLoginTaskCreateUnoAccount *)-4168i64 )
          {
            v9 = 1023i64;
            if ( v8 < 0x3FF )
              v9 = v8;
            memcpy_0(this->m_unoStatusMessage, "Could not retrieve context message, field, or code from Uno response.", v9);
            this->m_unoStatusMessage[v9] = 0;
          }
          bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskcreateunoaccount.cpp", "bdLoginTaskCreateUnoAccount::processUnoErrorJSON", 0x120u, this->m_unoStatusMessage);
          break;
        }
        bdSnprintf(buf, 0x400ui64, "Invalid Field: %s - Message: %s;", v17, v18);
        bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskcreateunoaccount.cpp", "bdLoginTaskCreateUnoAccount::processUnoErrorJSON", 0x115u, buf);
        bdSnprintf(this->m_unoStatusMessage, 0x400ui64, "%sInvalid Field: %s - Message: %s;", this->m_unoStatusMessage, v17, v18);
      }
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskcreateunoaccount.cpp", "bdLoginTaskCreateUnoAccount::processUnoErrorJSON", 0x123u, "Finished parsing Uno create account error JSON, view loginStatus for full info");
      if ( v4 )
      {
        bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskcreateunoaccount.cpp", "bdLoginTaskCreateUnoAccount::processUnoErrorJSON", 0x128u, "Parsed a user input error so fast failing from Create Uno Account Task");
        errorCode = 5;
      }
      else
      {
        errorCode = 3;
      }
      bdLoginTaskCreateUnoAccount::updateUnoStatus(this, this->m_unoStatusMessage, (const bdLoginTaskCreateUnoAccount::CreateUnoAccountStatusCode *)&errorCode);
      bdJSONDeserializer::~bdJSONDeserializer(&v13);
    }
    else
    {
      bdHandleAssert(1, "(messageInfo != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskcreateunoaccount.cpp", "bdLoginTaskCreateUnoAccount::updateUnoStatus", 0x153u, "Must provide valid message to update uno task status!");
      this->m_unoStatusCode = WAITING_FOR_REPORT_CONSOLE_DETAILS;
      bdStrlcpy(this->m_unoStatusMessage, "Could not retrieve error context information from Uno response.", 0x400ui64);
      ElapsedTimeInSeconds = bdStopwatch::getElapsedTimeInSeconds(&this->m_taskTimer);
      bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskcreateunoaccount.cpp", "bdLoginTaskCreateUnoAccount::updateUnoStatus", 0x15Bu, "Task finished after %2.1f seconds", *(float *)&ElapsedTimeInSeconds);
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskcreateunoaccount.cpp", "bdLoginTaskCreateUnoAccount::processUnoErrorJSON", 0x134u, "Could not retrieve error context information from Uno response.");
    }
    bdJSONDeserializer::~bdJSONDeserializer(&v14);
  }
  else
  {
    bdHandleAssert(1, "(messageInfo != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskcreateunoaccount.cpp", "bdLoginTaskCreateUnoAccount::updateUnoStatus", 0x153u, "Must provide valid message to update uno task status!");
    this->m_unoStatusCode = WAITING_FOR_REPORT_CONSOLE_DETAILS;
    bdStrlcpy(this->m_unoStatusMessage, "Could not retrieve error information from Uno response.", 0x400ui64);
    v11 = bdStopwatch::getElapsedTimeInSeconds(&this->m_taskTimer);
    bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskcreateunoaccount.cpp", "bdLoginTaskCreateUnoAccount::updateUnoStatus", 0x15Bu, "Task finished after %2.1f seconds", *(float *)&v11);
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskcreateunoaccount.cpp", "bdLoginTaskCreateUnoAccount::processUnoErrorJSON", 0x13Au, "Could not retrieve error information from Uno response.");
  }
  bdJSONDeserializer::~bdJSONDeserializer(&value);
}

/*
==============
bdLoginTaskCreateUnoAccount::processUnoJSON
==============
*/
void bdLoginTaskCreateUnoAccount::processUnoJSON(bdLoginTaskCreateUnoAccount *this, const bdJSONDeserializer *responseJSON)
{
  bool Object; 
  bdLoginResumeConfig *LoginResumeConfig; 
  double ElapsedTimeInSeconds; 
  double v7; 
  double v8; 
  bdJSONDeserializer value; 
  __int64 v10; 
  bdLoginResumeConfig result; 

  v10 = -2i64;
  if ( bdJSONDeserializer::hasKey((bdJSONDeserializer *)responseJSON, "tokens") )
  {
    bdJSONDeserializer::bdJSONDeserializer(&value);
    Object = bdJSONDeserializer::getObject((bdJSONDeserializer *)responseJSON, "tokens", &value);
    if ( bdJSONDeserializer::hasKey(&value, "IDToken") )
    {
      if ( Object && bdJSONDeserializer::getString(&value, "IDToken", this->m_unoIDToken, 0x400u) )
      {
        bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskcreateunoaccount.cpp", "bdLoginTaskCreateUnoAccount::processUnoJSON", 0xB4u, "Setting state to COMPLETED");
        LoginResumeConfig = bdLoginResult::getLoginResumeConfig(this->m_loginResult, &result);
        bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskcreateunoaccount.cpp", "bdLoginTaskCreateUnoAccount::processUnoJSON", 0xB7u, "Created UnoID: (%I64u)", LoginResumeConfig->m_accountInfo.m_userID);
        bdLoginResumeConfig::~bdLoginResumeConfig(&result);
        bdHandleAssert(1, "(messageInfo != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskcreateunoaccount.cpp", "bdLoginTaskCreateUnoAccount::updateUnoStatus", 0x153u, "Must provide valid message to update uno task status!");
        this->m_unoStatusCode = CONNECTED;
        bdStrlcpy(this->m_unoStatusMessage, "Saved UNO IDToken", 0x400ui64);
        ElapsedTimeInSeconds = bdStopwatch::getElapsedTimeInSeconds(&this->m_taskTimer);
        bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskcreateunoaccount.cpp", "bdLoginTaskCreateUnoAccount::updateUnoStatus", 0x15Bu, "Task finished after %2.1f seconds", *(float *)&ElapsedTimeInSeconds);
      }
    }
    else
    {
      bdHandleAssert(1, "(messageInfo != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskcreateunoaccount.cpp", "bdLoginTaskCreateUnoAccount::updateUnoStatus", 0x153u, "Must provide valid message to update uno task status!");
      this->m_unoStatusCode = WAITING_FOR_REPORT_CONSOLE_DETAILS;
      bdStrlcpy(this->m_unoStatusMessage, "Uno response does not contain an IDToken", 0x400ui64);
      v7 = bdStopwatch::getElapsedTimeInSeconds(&this->m_taskTimer);
      bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskcreateunoaccount.cpp", "bdLoginTaskCreateUnoAccount::updateUnoStatus", 0x15Bu, "Task finished after %2.1f seconds", *(float *)&v7);
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskcreateunoaccount.cpp", "bdLoginTaskCreateUnoAccount::processUnoJSON", 0xBEu, "Uno response does not contain an IDToken");
    }
    bdJSONDeserializer::~bdJSONDeserializer(&value);
  }
  else
  {
    bdHandleAssert(1, "(messageInfo != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskcreateunoaccount.cpp", "bdLoginTaskCreateUnoAccount::updateUnoStatus", 0x153u, "Must provide valid message to update uno task status!");
    this->m_unoStatusCode = WAITING_FOR_REPORT_CONSOLE_DETAILS;
    bdStrlcpy(this->m_unoStatusMessage, "Uno response does not contain any tokens", 0x400ui64);
    v8 = bdStopwatch::getElapsedTimeInSeconds(&this->m_taskTimer);
    bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskcreateunoaccount.cpp", "bdLoginTaskCreateUnoAccount::updateUnoStatus", 0x15Bu, "Task finished after %2.1f seconds", *(float *)&v8);
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskcreateunoaccount.cpp", "bdLoginTaskCreateUnoAccount::processUnoJSON", 0xC4u, "Uno response does not contain any tokens");
  }
}

/*
==============
bdLoginTaskCreateUnoAccount::processUnoReply
==============
*/
void bdLoginTaskCreateUnoAccount::processUnoReply(bdLoginTaskCreateUnoAccount *this)
{
  unsigned int v2; 
  double ElapsedTimeInSeconds; 
  double v4; 
  unsigned int v5; 
  bdJSONDeserializer responseJSON; 

  bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskcreateunoaccount.cpp", "bdLoginTaskCreateUnoAccount::processUnoReply", 0x22u, "Processing bdLogin Uno Account Creation task reply");
  v2 = this->m_httpInterface->getLastHTTPStatus(this->m_httpInterface);
  if ( v2 == 201 )
  {
    bdJSONDeserializer::bdJSONDeserializer(&responseJSON);
    if ( bdJSONDeserializer::parse(&responseJSON, this->m_httpUnoResponse) && bdJSONDeserializer::isObject(&responseJSON) )
    {
      bdLoginTaskCreateUnoAccount::processUnoJSON(this, &responseJSON);
    }
    else
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskcreateunoaccount.cpp", "bdLoginTaskCreateUnoAccount::processUnoReply", 0x31u, "Failed to parse Uno response json");
      bdHandleAssert(1, "(messageInfo != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskcreateunoaccount.cpp", "bdLoginTaskCreateUnoAccount::updateUnoStatus", 0x153u, "Must provide valid message to update uno task status!");
      this->m_unoStatusCode = WAITING_FOR_REPORT_CONSOLE_DETAILS;
      bdStrlcpy(this->m_unoStatusMessage, "Failed to parse Uno response json", 0x400ui64);
      ElapsedTimeInSeconds = bdStopwatch::getElapsedTimeInSeconds(&this->m_taskTimer);
      bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskcreateunoaccount.cpp", "bdLoginTaskCreateUnoAccount::updateUnoStatus", 0x15Bu, "Task finished after %2.1f seconds", *(float *)&ElapsedTimeInSeconds);
    }
  }
  else
  {
    v5 = v2;
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskcreateunoaccount.cpp", "bdLoginTaskCreateUnoAccount::processUnoReply", 0x37u, "Uno task failed with HTTP code [%u]", v5);
    bdJSONDeserializer::bdJSONDeserializer(&responseJSON);
    if ( bdJSONDeserializer::parse(&responseJSON, this->m_httpUnoResponse) && bdJSONDeserializer::isObject(&responseJSON) )
    {
      bdLoginTaskCreateUnoAccount::processUnoErrorJSON(this, &responseJSON);
    }
    else
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskcreateunoaccount.cpp", "bdLoginTaskCreateUnoAccount::processUnoReply", 0x42u, "Failed to parse Uno error response json");
      bdHandleAssert(1, "(messageInfo != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskcreateunoaccount.cpp", "bdLoginTaskCreateUnoAccount::updateUnoStatus", 0x153u, "Must provide valid message to update uno task status!");
      this->m_unoStatusCode = WAITING_FOR_REPORT_CONSOLE_DETAILS;
      bdStrlcpy(this->m_unoStatusMessage, "Failed to parse Uno error response json", 0x400ui64);
      v4 = bdStopwatch::getElapsedTimeInSeconds(&this->m_taskTimer);
      bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskcreateunoaccount.cpp", "bdLoginTaskCreateUnoAccount::updateUnoStatus", 0x15Bu, "Task finished after %2.1f seconds", *(float *)&v4);
    }
  }
  bdJSONDeserializer::~bdJSONDeserializer(&responseJSON);
}

/*
==============
bdLoginTaskCreateUnoAccount::pump
==============
*/
void bdLoginTaskCreateUnoAccount::pump(bdLoginTaskCreateUnoAccount *this)
{
  bdLoginTaskCreateUnoAccount::CreateUnoAccountStatusCode m_unoStatusCode; 
  __int32 v3; 
  __int32 v4; 
  bdHTTP::bdStatus v5; 
  __int32 v6; 
  __int32 v7; 
  bdJSONDeserializer v8; 
  bdLoginTaskCreateUnoAccount::CreateUnoAccountStatusCode code; 

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
          bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskcreateunoaccount.cpp", "bdLoginTaskCreateUnoAccount::pump", 0x1ACu, "Pumping in an unknown state!");
      }
      else
      {
        bdLoginTaskCreateUnoAccount::processUnoReply(this);
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
          if ( v7 == 1 )
          {
            bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskcreateunoaccount.cpp", "bdLoginTaskCreateUnoAccount::pump", 0x191u, "Setting state to RECEIVED_REPLY");
            bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskcreateunoaccount.cpp", "bdLoginTaskCreateUnoAccount::pump", 0x192u, "Something went wrong with Uno request");
            code = CONNECTING;
            bdLoginTaskCreateUnoAccount::updateUnoStatus(this, "Something went wrong with Uno request", &code);
          }
        }
        else
        {
          bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskcreateunoaccount.cpp", "bdLoginTaskCreateUnoAccount::pump", 0x196u, "Setting state to RECEIVED_REPLY");
          bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskcreateunoaccount.cpp", "bdLoginTaskCreateUnoAccount::pump", 0x197u, "Got successful reply from request to Uno");
          code = CONNECTING;
          bdLoginTaskCreateUnoAccount::updateUnoStatus(this, "Got successful reply from request to Uno", &code);
          if ( this->m_outputObject )
          {
            bdJSONDeserializer::bdJSONDeserializer(&v8, this->m_httpUnoResponse);
            this->m_outputObject->deserializeFromJSON(this->m_outputObject, &v8);
            bdJSONDeserializer::~bdJSONDeserializer(&v8);
          }
        }
      }
      else
      {
        this->m_httpInterface->sendRequest(this->m_httpInterface);
        bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskcreateunoaccount.cpp", "bdLoginTaskCreateUnoAccount::pump", 0x18Cu, "Sent request to Uno");
      }
    }
  }
  else
  {
    bdStopwatch::start(&this->m_taskTimer);
    bdLoginTaskCreateUnoAccount::createAccount(this, &this->m_loginResult->m_loginResumeConfig);
  }
}

/*
==============
bdLoginTaskCreateUnoAccount::releaseTaskBuff
==============
*/
void bdLoginTaskCreateUnoAccount::releaseTaskBuff(bdLoginTaskCreateUnoAccount *this)
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
bdLoginTaskCreateUnoAccount::reset
==============
*/
void bdLoginTaskCreateUnoAccount::reset(bdLoginTaskCreateUnoAccount *this)
{
  bdHTTP *m_httpInterface; 
  bdHTTP *v3; 
  char *m_httpUnoRequest; 

  bdHandleAssert(1, "(messageInfo != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskcreateunoaccount.cpp", "bdLoginTaskCreateUnoAccount::updateUnoStatus", 0x153u, "Must provide valid message to update uno task status!");
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
bdLoginTaskCreateUnoAccount::resetHttpInterface
==============
*/
void bdLoginTaskCreateUnoAccount::resetHttpInterface(bdLoginTaskCreateUnoAccount *this)
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
bdLoginTaskCreateUnoAccount::updateUnoStatus
==============
*/
void bdLoginTaskCreateUnoAccount::updateUnoStatus(bdLoginTaskCreateUnoAccount *this, const char *messageInfo, const bdLoginTaskCreateUnoAccount::CreateUnoAccountStatusCode *code)
{
  double ElapsedTimeInSeconds; 

  bdHandleAssert(messageInfo != NULL, "(messageInfo != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskcreateunoaccount.cpp", "bdLoginTaskCreateUnoAccount::updateUnoStatus", 0x153u, "Must provide valid message to update uno task status!");
  this->m_unoStatusCode = *code;
  bdStrlcpy(this->m_unoStatusMessage, messageInfo, 0x400ui64);
  if ( (unsigned int)(*code - 3) <= 2 )
  {
    ElapsedTimeInSeconds = bdStopwatch::getElapsedTimeInSeconds(&this->m_taskTimer);
    bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskcreateunoaccount.cpp", "bdLoginTaskCreateUnoAccount::updateUnoStatus", 0x15Bu, "Task finished after %2.1f seconds", *(float *)&ElapsedTimeInSeconds);
  }
}

/*
==============
bdLoginTaskCreateUnoAccount::validateFields
==============
*/
char bdLoginTaskCreateUnoAccount::validateFields(bdLoginTaskCreateUnoAccount *this, const char *fields)
{
  if ( !fields )
    return 1;
  if ( strstr_0(fields, "accountType") && strstr_0(fields, "unoID") && strstr_0(fields, "userName") )
    return 1;
  bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskcreateunoaccount.cpp", "bdLoginTaskCreateUnoAccount::validateFields", 0x1D2u, "Fields parameter for Uno requests must contain the mandatory fields %s, %s and %s", "accountType", "unoID", "userName");
  return 0;
}

