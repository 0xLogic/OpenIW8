/*
==============
bdLoginTaskFetchUnoAccount::fetchAccount
==============
*/

void __fastcall bdLoginTaskFetchUnoAccount::fetchAccount(bdLoginTaskFetchUnoAccount *this)
{
  ?fetchAccount@bdLoginTaskFetchUnoAccount@@IEAAXXZ(this);
}

/*
==============
bdLoginTaskFetchUnoAccount::reset
==============
*/

void __fastcall bdLoginTaskFetchUnoAccount::reset(bdLoginTaskFetchUnoAccount *this)
{
  ?reset@bdLoginTaskFetchUnoAccount@@UEAAXXZ(this);
}

/*
==============
bdLoginTaskFetchUnoAccount::pump
==============
*/

void __fastcall bdLoginTaskFetchUnoAccount::pump(bdLoginTaskFetchUnoAccount *this)
{
  ?pump@bdLoginTaskFetchUnoAccount@@UEAAXXZ(this);
}

/*
==============
bdLoginTaskFetchUnoAccount::resetHttpInterface
==============
*/

void __fastcall bdLoginTaskFetchUnoAccount::resetHttpInterface(bdLoginTaskFetchUnoAccount *this)
{
  ?resetHttpInterface@bdLoginTaskFetchUnoAccount@@IEAAXXZ(this);
}

/*
==============
bdLoginTaskFetchUnoAccount::getTaskMessage
==============
*/

const char *__fastcall bdLoginTaskFetchUnoAccount::getTaskMessage(bdLoginTaskFetchUnoAccount *this)
{
  return ?getTaskMessage@bdLoginTaskFetchUnoAccount@@UEBAPEBDXZ(this);
}

/*
==============
bdLoginTaskFetchUnoAccount::processUnoJSON
==============
*/

void __fastcall bdLoginTaskFetchUnoAccount::processUnoJSON(bdLoginTaskFetchUnoAccount *this, bdJSONDeserializer *responseJSON)
{
  ?processUnoJSON@bdLoginTaskFetchUnoAccount@@IEAAXAEAVbdJSONDeserializer@@@Z(this, responseJSON);
}

/*
==============
bdLoginTaskFetchUnoAccount::releaseTaskBuff
==============
*/

void __fastcall bdLoginTaskFetchUnoAccount::releaseTaskBuff(bdLoginTaskFetchUnoAccount *this)
{
  ?releaseTaskBuff@bdLoginTaskFetchUnoAccount@@IEAAXXZ(this);
}

/*
==============
bdLoginTaskFetchUnoAccount::processUnoReply
==============
*/

void __fastcall bdLoginTaskFetchUnoAccount::processUnoReply(bdLoginTaskFetchUnoAccount *this)
{
  ?processUnoReply@bdLoginTaskFetchUnoAccount@@IEAAXXZ(this);
}

/*
==============
bdLoginTaskFetchUnoAccount::getTaskCode
==============
*/

bdLoginTaskFetchUnoAccount::FetchUnoAccountStatusCode __fastcall bdLoginTaskFetchUnoAccount::getTaskCode(bdLoginTaskFetchUnoAccount *this)
{
  return ?getTaskCode@bdLoginTaskFetchUnoAccount@@QEBA?AW4FetchUnoAccountStatusCode@1@XZ(this);
}

/*
==============
bdLoginTaskFetchUnoAccount::createTaskBuff
==============
*/

bool __fastcall bdLoginTaskFetchUnoAccount::createTaskBuff(bdLoginTaskFetchUnoAccount *this, unsigned int size)
{
  return ?createTaskBuff@bdLoginTaskFetchUnoAccount@@IEAA_NI@Z(this, size);
}

/*
==============
bdLoginTaskFetchUnoAccount::bdLoginTaskFetchUnoAccount
==============
*/

void __fastcall bdLoginTaskFetchUnoAccount::bdLoginTaskFetchUnoAccount(bdLoginTaskFetchUnoAccount *this, const bdLoginConfig *loginConfig, bdLoginResult *loginResult)
{
  ??0bdLoginTaskFetchUnoAccount@@QEAA@PEBVbdLoginConfig@@PEAVbdLoginResult@@@Z(this, loginConfig, loginResult);
}

/*
==============
bdLoginTaskFetchUnoAccount::~bdLoginTaskFetchUnoAccount
==============
*/

void __fastcall bdLoginTaskFetchUnoAccount::~bdLoginTaskFetchUnoAccount(bdLoginTaskFetchUnoAccount *this)
{
  ??1bdLoginTaskFetchUnoAccount@@UEAA@XZ(this);
}

/*
==============
bdLoginTaskFetchUnoAccount::abortTask
==============
*/

void __fastcall bdLoginTaskFetchUnoAccount::abortTask(bdLoginTaskFetchUnoAccount *this)
{
  ?abortTask@bdLoginTaskFetchUnoAccount@@UEAAXXZ(this);
}

/*
==============
bdLoginTaskFetchUnoAccount::updateUnoStatus
==============
*/

void __fastcall bdLoginTaskFetchUnoAccount::updateUnoStatus(bdLoginTaskFetchUnoAccount *this, const char *messageInfo, const bdLoginTaskFetchUnoAccount::FetchUnoAccountStatusCode *code)
{
  ?updateUnoStatus@bdLoginTaskFetchUnoAccount@@IEAAXPEBDAEBW4FetchUnoAccountStatusCode@1@@Z(this, messageInfo, code);
}

/*
==============
bdLoginTaskFetchUnoAccount::bdLoginTaskFetchUnoAccount
==============
*/
void bdLoginTaskFetchUnoAccount::bdLoginTaskFetchUnoAccount(bdLoginTaskFetchUnoAccount *this, const bdLoginConfig *loginConfig, bdLoginResult *loginResult)
{
  this->__vftable = (bdLoginTaskFetchUnoAccount_vtbl *)&bdLoginTask::`vftable';
  bdStopwatch::bdStopwatch(&this->m_taskTimer);
  this->m_loginConfig = loginConfig;
  this->m_loginResult = loginResult;
  this->m_firstPartyTokenStatusCode = FETCHING_FIRST_PARTY_TOKEN;
  this->__vftable = (bdLoginTaskFetchUnoAccount_vtbl *)&bdLoginTaskFetchUnoAccount::`vftable';
  this->m_httpInterface = NULL;
  this->m_httpStatus = BD_EMPTY;
  this->m_httpUnoRequest = NULL;
  this->m_httpUnoRequestLength = 0;
  this->m_unoStatusCode = UNINITIALIZED;
  bdCrossPlatformAccountInfo::bdCrossPlatformAccountInfo(&this->m_unoAccount);
  memset_0(this->m_httpUnoResponse, 0, sizeof(this->m_httpUnoResponse));
  memset_0(this->m_unoStatusMessage, 0, sizeof(this->m_unoStatusMessage));
}

/*
==============
bdLoginTaskFetchUnoAccount::~bdLoginTaskFetchUnoAccount
==============
*/
void bdLoginTaskFetchUnoAccount::~bdLoginTaskFetchUnoAccount(bdLoginTaskFetchUnoAccount *this)
{
  char *m_httpUnoRequest; 
  bdHTTP *m_httpInterface; 
  bdHTTP *v4; 

  this->__vftable = (bdLoginTaskFetchUnoAccount_vtbl *)&bdLoginTaskFetchUnoAccount::`vftable';
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
  bdCrossPlatformAccountInfo::~bdCrossPlatformAccountInfo(&this->m_unoAccount);
  this->__vftable = (bdLoginTaskFetchUnoAccount_vtbl *)&bdLoginTask::`vftable';
}

/*
==============
bdLoginTaskFetchUnoAccount::abortTask
==============
*/
void bdLoginTaskFetchUnoAccount::abortTask(bdLoginTaskFetchUnoAccount *this)
{
  bdHTTP *m_httpInterface; 
  bdHTTP *v5; 
  char *m_httpUnoRequest; 
  double v7; 

  bdHandleAssert(1, "(messageInfo != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskfetchunoaccount.cpp", "bdLoginTaskFetchUnoAccount::updateUnoStatus", 0x9Bu, "Must provide valid message to update uno task status!");
  this->m_unoStatusCode = WAITING_FOR_REPORT_CONSOLE_DETAILS;
  bdStrlcpy(this->m_unoStatusMessage, "UnoAccount task aborted", 0x400ui64);
  *(double *)&_XMM0 = bdStopwatch::getElapsedTimeInSeconds(&this->m_taskTimer);
  __asm
  {
    vcvtss2sd xmm1, xmm0, xmm0
    vmovsd  [rsp+48h+var_10], xmm1
  }
  bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskfetchunoaccount.cpp", "bdLoginTaskFetchUnoAccount::updateUnoStatus", 0xA3u, "Task finished after %2.1f seconds", v7);
  m_httpInterface = this->m_httpInterface;
  if ( m_httpInterface )
  {
    m_httpInterface->abortOperation(m_httpInterface);
    v5 = this->m_httpInterface;
    if ( v5 )
      ((void (__fastcall *)(bdHTTP *, __int64))v5->~bdHTTP)(v5, 1i64);
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
bdLoginTaskFetchUnoAccount::createTaskBuff
==============
*/
bool bdLoginTaskFetchUnoAccount::createTaskBuff(bdLoginTaskFetchUnoAccount *this, unsigned int size)
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
bdLoginTaskFetchUnoAccount::fetchAccount
==============
*/
void bdLoginTaskFetchUnoAccount::fetchAccount(bdLoginTaskFetchUnoAccount *this)
{
  const char *Region; 
  bdEnvironment Environment; 
  const char *v5; 
  __int64 v6; 
  unsigned __int64 v7; 
  size_t v8; 
  const char *v9; 
  bdLoginResult *m_loginResult; 
  const char *m_clientID; 
  unsigned __int64 UnoID; 
  char *m_httpUnoRequest; 
  char *v14; 
  bdHTTP *v15; 
  bdHTTP *m_httpInterface; 
  bool (__fastcall *setHeader)(bdHTTP *, const char *, const unsigned __int64); 
  unsigned __int64 TransactionID; 
  const char *DWToken; 
  unsigned __int64 v21; 
  __int64 v22; 
  bdJSONSerializer v23; 
  char buf[512]; 
  char v25[512]; 
  char v26[6784]; 
  char buffer[6784]; 

  memset_0(buffer, 0, sizeof(buffer));
  bdJSONSerializer::bdJSONSerializer(&v23, buffer, 0x1A80u);
  Region = bdLoginConfig::getRegion((bdLoginConfig *)this->m_loginConfig);
  Environment = bdLoginResult::getEnvironment(this->m_loginResult);
  if ( *(_WORD *)Region == *(_WORD *)"cn" && Region[2] == aCn[2] )
  {
    bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
    v5 = "https:
    v6 = -1i64;
    v7 = -1i64;
    do
      ++v7;
    while ( aHttpsUnoSCodQq[v7] );
  }
  else
  {
    bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
    v5 = "https:
    v6 = -1i64;
    v7 = -1i64;
    do
      ++v7;
    while ( aHttpsSUnoDemon[v7] );
  }
  v8 = 511i64;
  if ( v7 < 0x1FF )
    v8 = v7;
  memcpy_0(v26, v5, v8);
  v26[v8] = 0;
  if ( Environment )
  {
    if ( Environment == BD_ENVIRONMENT_CERT )
    {
      v9 = "cert";
      goto LABEL_15;
    }
    if ( Environment == BD_ENVIRONMENT_PROD )
    {
      v9 = "prod";
      goto LABEL_15;
    }
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\helpers\\bdloginutils.h", "bdLoginUtils::getUnoUrl", 0xA6u, "Unknown environment (%u): Defaulting to DEV Uno URL", Environment);
  }
  v9 = "dev";
LABEL_15:
  bdSnprintf(buf, 0x200ui64, v26, v9);
  m_loginResult = this->m_loginResult;
  m_clientID = m_loginResult->m_clientID;
  UnoID = bdLoginResult::getUnoID(m_loginResult);
  bdSnprintf(v25, 0x200ui64, "%s/users/%I64u/?client=%s", buf, UnoID, m_clientID);
  bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskfetchunoaccount.cpp", "bdLoginTaskFetchUnoAccount::fetchAccount", 0x61u, "Fetch Uno Account URL : %s", v25);
  bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  do
    ++v6;
  while ( buffer[v6] );
  m_httpUnoRequest = this->m_httpUnoRequest;
  if ( m_httpUnoRequest )
  {
    bdMemory::deallocate(m_httpUnoRequest);
    this->m_httpUnoRequest = NULL;
  }
  this->m_httpUnoRequestLength = v6 + 1;
  v14 = (char *)bdMemory::allocate((unsigned int)(v6 + 1));
  this->m_httpUnoRequest = v14;
  if ( v14 )
  {
    v15 = bdHTTPUtility::newHTTP(0, 0);
    this->m_httpInterface = v15;
    ((void (__fastcall *)(bdHTTP *, __int64, char *))v15->initRequest)(v15, 1i64, v25);
    bdHTTP::setDownloadBuffer(this->m_httpInterface, this->m_httpUnoResponse, 0x1000u);
    m_httpInterface = this->m_httpInterface;
    setHeader = m_httpInterface->setHeader;
    TransactionID = bdLoginResult::getTransactionID(this->m_loginResult);
    setHeader(m_httpInterface, "X-TransactionID", TransactionID);
    this->m_httpInterface->setHeader(this->m_httpInterface, "Accept", "application/json");
    DWToken = bdLoginResult::getDWToken(this->m_loginResult);
    bdSnprintf(v26, 0x1A80ui64, "Bearer %s", DWToken);
    this->m_httpInterface->setHeader(this->m_httpInterface, "Authorization", v26);
    bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskfetchunoaccount.cpp", "bdLoginTaskFetchUnoAccount::fetchAccount", 0x72u, "Setting state to FETCHING_UNO_ACCOUNT");
    bdHandleAssert(1, "(messageInfo != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskfetchunoaccount.cpp", "bdLoginTaskFetchUnoAccount::updateUnoStatus", 0x9Bu, "Must provide valid message to update uno task status!");
    this->m_unoStatusCode = NOT_CONNECTED;
    bdStrlcpy(this->m_unoStatusMessage, "Fetching Uno account", 0x400ui64);
    v21 = bdLoginResult::getTransactionID(this->m_loginResult);
    bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskfetchunoaccount.cpp", "bdLoginTaskFetchUnoAccount::fetchAccount", 0x77u, "Started call to bdLoginTaskFetchUnoAccount::fetchAccount. TransactionID: (%I64u)", v21);
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskfetchunoaccount.cpp", "bdLoginTaskFetchUnoAccount::fetchAccount", 0x7Bu, "Failed to create task buffer");
    bdHandleAssert(1, "(messageInfo != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskfetchunoaccount.cpp", "bdLoginTaskFetchUnoAccount::updateUnoStatus", 0x9Bu, "Must provide valid message to update uno task status!");
    this->m_unoStatusCode = WAITING_FOR_REPORT_CONSOLE_DETAILS;
    bdStrlcpy(this->m_unoStatusMessage, "Failed to create task buffer", 0x400ui64);
    *(double *)&_XMM0 = bdStopwatch::getElapsedTimeInSeconds(&this->m_taskTimer);
    __asm
    {
      vcvtss2sd xmm1, xmm0, xmm0
      vmovsd  [rsp+3A98h+var_3A60], xmm1
    }
    bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskfetchunoaccount.cpp", "bdLoginTaskFetchUnoAccount::updateUnoStatus", 0xA3u, "Task finished after %2.1f seconds", v22);
  }
  bdJSONSerializer::~bdJSONSerializer(&v23);
}

/*
==============
bdLoginTaskFetchUnoAccount::getTaskCode
==============
*/
__int64 bdLoginTaskFetchUnoAccount::getTaskCode(bdLoginTaskFetchUnoAccount *this)
{
  return (unsigned int)this->m_unoStatusCode;
}

/*
==============
bdLoginTaskFetchUnoAccount::getTaskMessage
==============
*/
char *bdLoginTaskFetchUnoAccount::getTaskMessage(bdLoginTaskFetchUnoAccount *this)
{
  return this->m_unoStatusMessage;
}

/*
==============
bdLoginTaskFetchUnoAccount::processUnoJSON
==============
*/
void bdLoginTaskFetchUnoAccount::processUnoJSON(bdLoginTaskFetchUnoAccount *this, bdJSONDeserializer *responseJSON)
{
  double v5; 

  bdCrossPlatformAccountInfo::deserializeFromJSON(&this->m_unoAccount, responseJSON);
  bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskfetchunoaccount.cpp", "bdLoginTaskFetchUnoAccount::processUnoJSON", 0x83u, "Successfully deserialized Uno Account, setting state to COMPLETED");
  bdHandleAssert(1, "(messageInfo != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskfetchunoaccount.cpp", "bdLoginTaskFetchUnoAccount::updateUnoStatus", 0x9Bu, "Must provide valid message to update uno task status!");
  this->m_unoStatusCode = CONNECTED;
  bdStrlcpy(this->m_unoStatusMessage, "Successfully deserialized Uno Account", 0x400ui64);
  *(double *)&_XMM0 = bdStopwatch::getElapsedTimeInSeconds(&this->m_taskTimer);
  __asm
  {
    vcvtss2sd xmm1, xmm0, xmm0
    vmovsd  [rsp+48h+var_10], xmm1
  }
  bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskfetchunoaccount.cpp", "bdLoginTaskFetchUnoAccount::updateUnoStatus", 0xA3u, "Task finished after %2.1f seconds", v5);
  bdLoginResult::setCrossPlatformAccountInfo(this->m_loginResult, &this->m_unoAccount);
}

/*
==============
bdLoginTaskFetchUnoAccount::processUnoReply
==============
*/
void bdLoginTaskFetchUnoAccount::processUnoReply(bdLoginTaskFetchUnoAccount *this)
{
  unsigned int v3; 
  unsigned int v4; 
  bdJSONDeserializer *p_json; 
  unsigned int v8; 
  bool Object; 
  unsigned int m_count; 
  unsigned int i; 
  bdLobbyErrorCode v12; 
  double v13; 
  double v14; 
  __int64 v15; 
  bdJSONDeserializer json; 
  bdJSONDeserializer value; 
  bdJSONDeserializer v18; 
  bdJSONDeserializer v19; 
  __int64 v20; 
  bdLoginTaskFetchUnoAccount::FetchUnoAccountStatusCode code; 

  v20 = -2i64;
  bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskfetchunoaccount.cpp", "bdLoginTaskFetchUnoAccount::processUnoReply", 0x20u, "Processing bdLogin Uno Account Creation task reply");
  v3 = this->m_httpInterface->getLastHTTPStatus(this->m_httpInterface);
  v4 = v3;
  if ( v3 != 200 )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskfetchunoaccount.cpp", "bdLoginTaskFetchUnoAccount::processUnoReply", 0x35u, "Uno task failed with HTTP code [%u]", v3);
    bdJSONDeserializer::bdJSONDeserializer(&v19);
    v8 = 0;
    if ( !bdJSONDeserializer::parse(&v19, this->m_httpUnoResponse) || !bdJSONDeserializer::isObject(&v19) )
      goto LABEL_26;
    bdJSONDeserializer::bdJSONDeserializer(&value);
    Object = bdJSONDeserializer::getObject(&v19, "error", &value);
    bdHandleAssert(1, "errCode != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\helpers\\bdloginutils.h", "bdLoginUtils::parseErrorJSON", 0x1DFu, "No errcode provided to parseErrorJson");
    if ( Object && value.m_type == BD_JSON_OBJECT )
    {
      v8 = bdLoginUtils::parseSingleError(&value);
      if ( bdJSONDeserializer::hasKey(&value, "context") )
      {
        bdJSONDeserializer::bdJSONDeserializer(&json);
        bdJSONDeserializer::getArray(&value, "context", &json);
        if ( bdJSONDeserializer::isArray(&json) )
        {
          m_count = json.m_count;
          for ( i = 0; i < m_count; ++i )
          {
            bdJSONDeserializer::bdJSONDeserializer(&v18);
            bdJSONDeserializer::getObject(&json, i, &v18);
            if ( v18.m_type == BD_JSON_OBJECT )
              v8 = bdLoginUtils::parseSingleError(&v18);
            bdJSONDeserializer::~bdJSONDeserializer(&v18);
          }
        }
        bdJSONDeserializer::~bdJSONDeserializer(&json);
      }
    }
    bdJSONDeserializer::~bdJSONDeserializer(&value);
    if ( !v8 )
      goto LABEL_26;
    if ( v8 > 0x346AC )
    {
      if ( v8 > 0x38E8C )
      {
        switch ( v8 )
        {
          case 0x3AD68u:
            v12 = BD_UNO_TOS_ALREADY_ACCEPTED;
            goto LABEL_27;
          case 0x3B920u:
            v12 = BD_UNO_EMAIL_ALREADY_EXISTS;
            goto LABEL_27;
          case 0x3D860u:
            v12 = BD_UNO_NO_RENAME_TOKENS;
            goto LABEL_27;
        }
      }
      else
      {
        switch ( v8 )
        {
          case 0x38E8Cu:
            v12 = BD_UNO_TOS_CONTENT_NOT_FOUND;
            goto LABEL_27;
          case 0x35B60u:
            v12 = BD_UNO_UNAUTHORIZED_ACCESS;
            goto LABEL_27;
          case 0x36330u:
            v12 = BD_UNO_INVALID_TOKEN;
            goto LABEL_27;
          case 0x36394u:
            v12 = BD_UMBRELLA_EXPIRED_TOKEN;
            goto LABEL_27;
          case 0x38E28u:
            v12 = BD_UNO_TOS_VERSION_NOT_FOUND;
            goto LABEL_27;
        }
      }
    }
    else
    {
      if ( v8 == 214700 )
      {
        v12 = BD_UNO_INVALID_DATE_OF_BIRTH;
        goto LABEL_27;
      }
      if ( v8 > 0x34008 )
      {
        switch ( v8 )
        {
          case 0x343F0u:
            v12 = BD_UNO_FIELD_INVALID;
            goto LABEL_27;
          case 0x34454u:
            v12 = BD_UNO_MISSING_FIELD;
            goto LABEL_27;
          case 0x345E4u:
            v12 = BD_UNO_INVALID_USERNAME;
            goto LABEL_27;
          case 0x34648u:
            v12 = BD_UNO_INVALID_PASSWORD;
            goto LABEL_27;
        }
      }
      else
      {
        switch ( v8 )
        {
          case 0x34008u:
            v12 = BD_UNO_INVALID_DATA;
            goto LABEL_27;
          case 1u:
LABEL_55:
            v12 = BD_LOGIN_UNKOWN_ERROR;
            goto LABEL_27;
          case 0x21340u:
            v12 = BD_UNO_MARKETPLACE_ERROR;
            goto LABEL_27;
          case 0x30D40u:
LABEL_26:
            v12 = BD_UNO_ERROR;
LABEL_27:
            this->m_loginResult->m_taskErrorCode = v12;
            bdSnprintf(this->m_unoStatusMessage, 0x400ui64, "Uno fetch account task failed with HTTP code [%u]", v4);
            bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskfetchunoaccount.cpp", "bdLoginTaskFetchUnoAccount::processUnoReply", 0x4Du, this->m_unoStatusMessage);
            code = WAITING_FOR_REPORT_CONSOLE_DETAILS;
            bdLoginTaskFetchUnoAccount::updateUnoStatus(this, this->m_unoStatusMessage, &code);
            p_json = &v19;
            goto LABEL_28;
        }
      }
    }
    LODWORD(v15) = v8;
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\helpers\\bdloginutils.h", "bdLoginUtils::convertUnoErrorCode", 0x1BAu, "Got unexpected code: [%u] during mapping of login error code to lobbyErrorCode in bdLoginUtils.", v15);
    goto LABEL_55;
  }
  bdJSONDeserializer::bdJSONDeserializer(&json);
  if ( bdJSONDeserializer::parse(&json, this->m_httpUnoResponse) && bdJSONDeserializer::isObject(&json) )
  {
    bdCrossPlatformAccountInfo::deserializeFromJSON(&this->m_unoAccount, &json);
    bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskfetchunoaccount.cpp", "bdLoginTaskFetchUnoAccount::processUnoJSON", 0x83u, "Successfully deserialized Uno Account, setting state to COMPLETED");
    bdHandleAssert(1, "(messageInfo != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskfetchunoaccount.cpp", "bdLoginTaskFetchUnoAccount::updateUnoStatus", 0x9Bu, "Must provide valid message to update uno task status!");
    this->m_unoStatusCode = CONNECTED;
    bdStrlcpy(this->m_unoStatusMessage, "Successfully deserialized Uno Account", 0x400ui64);
    *(double *)&_XMM0 = bdStopwatch::getElapsedTimeInSeconds(&this->m_taskTimer);
    __asm
    {
      vcvtss2sd xmm1, xmm0, xmm0
      vmovsd  [rsp+0F0h+var_B8], xmm1
    }
    bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskfetchunoaccount.cpp", "bdLoginTaskFetchUnoAccount::updateUnoStatus", 0xA3u, "Task finished after %2.1f seconds", v13);
    bdLoginResult::setCrossPlatformAccountInfo(this->m_loginResult, &this->m_unoAccount);
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskfetchunoaccount.cpp", "bdLoginTaskFetchUnoAccount::processUnoReply", 0x2Fu, "Failed to parse Uno response json");
    bdHandleAssert(1, "(messageInfo != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskfetchunoaccount.cpp", "bdLoginTaskFetchUnoAccount::updateUnoStatus", 0x9Bu, "Must provide valid message to update uno task status!");
    this->m_unoStatusCode = WAITING_FOR_REPORT_CONSOLE_DETAILS;
    bdStrlcpy(this->m_unoStatusMessage, "Failed to parse Uno response json", 0x400ui64);
    *(double *)&_XMM0 = bdStopwatch::getElapsedTimeInSeconds(&this->m_taskTimer);
    __asm
    {
      vcvtss2sd xmm1, xmm0, xmm0
      vmovsd  [rsp+0F0h+var_B8], xmm1
    }
    bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskfetchunoaccount.cpp", "bdLoginTaskFetchUnoAccount::updateUnoStatus", 0xA3u, "Task finished after %2.1f seconds", v14);
  }
  p_json = &json;
LABEL_28:
  bdJSONDeserializer::~bdJSONDeserializer(p_json);
}

/*
==============
bdLoginTaskFetchUnoAccount::pump
==============
*/
void bdLoginTaskFetchUnoAccount::pump(bdLoginTaskFetchUnoAccount *this)
{
  bdLoginTaskFetchUnoAccount::FetchUnoAccountStatusCode m_unoStatusCode; 
  __int32 v3; 
  __int32 v4; 
  bdHTTP::bdStatus v5; 
  __int32 v6; 
  __int32 v7; 
  const char *v8; 
  bdLoginTaskFetchUnoAccount::FetchUnoAccountStatusCode code; 

  m_unoStatusCode = this->m_unoStatusCode;
  if ( m_unoStatusCode == UNINITIALIZED )
  {
    bdStopwatch::start(&this->m_taskTimer);
    bdLoginTaskFetchUnoAccount::fetchAccount(this);
    return;
  }
  v3 = m_unoStatusCode - 1;
  if ( v3 )
  {
    v4 = v3 - 1;
    if ( v4 )
    {
      if ( v4 != 2 )
        bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskfetchunoaccount.cpp", "bdLoginTaskFetchUnoAccount::pump", 0xEFu, "Pumping in an unknown state!");
    }
    else
    {
      bdLoginTaskFetchUnoAccount::processUnoReply(this);
    }
  }
  else
  {
    v5 = this->m_httpInterface->getStatus(this->m_httpInterface);
    this->m_httpStatus = v5;
    v6 = v5 - 2;
    if ( !v6 )
    {
      this->m_httpInterface->sendRequest(this->m_httpInterface);
      bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskfetchunoaccount.cpp", "bdLoginTaskFetchUnoAccount::pump", 0xD4u, "Sent request to Uno");
      return;
    }
    v7 = v6 - 3;
    if ( v7 )
    {
      if ( v7 != 1 )
        return;
      bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskfetchunoaccount.cpp", "bdLoginTaskFetchUnoAccount::pump", 0xD9u, "Setting state to RECEIVED_REPLY");
      v8 = "Something went wrong with Uno request";
      bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskfetchunoaccount.cpp", "bdLoginTaskFetchUnoAccount::pump", 0xDAu, "Something went wrong with Uno request");
    }
    else
    {
      bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskfetchunoaccount.cpp", "bdLoginTaskFetchUnoAccount::pump", 0xDEu, "Setting state to RECEIVED_REPLY");
      v8 = "Got successful reply from request to Uno";
      bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskfetchunoaccount.cpp", "bdLoginTaskFetchUnoAccount::pump", 0xDFu, "Got successful reply from request to Uno");
    }
    code = CONNECTING;
    bdLoginTaskFetchUnoAccount::updateUnoStatus(this, v8, &code);
  }
}

/*
==============
bdLoginTaskFetchUnoAccount::releaseTaskBuff
==============
*/
void bdLoginTaskFetchUnoAccount::releaseTaskBuff(bdLoginTaskFetchUnoAccount *this)
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
bdLoginTaskFetchUnoAccount::reset
==============
*/
void bdLoginTaskFetchUnoAccount::reset(bdLoginTaskFetchUnoAccount *this)
{
  bdHTTP *m_httpInterface; 
  bdHTTP *v3; 
  char *m_httpUnoRequest; 

  bdHandleAssert(1, "(messageInfo != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskfetchunoaccount.cpp", "bdLoginTaskFetchUnoAccount::updateUnoStatus", 0x9Bu, "Must provide valid message to update uno task status!");
  this->m_unoStatusCode = UNINITIALIZED;
  bdStrlcpy(this->m_unoStatusMessage, (const char *const)&queryFormat.fmt + 3, 0x400ui64);
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
}

/*
==============
bdLoginTaskFetchUnoAccount::resetHttpInterface
==============
*/
void bdLoginTaskFetchUnoAccount::resetHttpInterface(bdLoginTaskFetchUnoAccount *this)
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
bdLoginTaskFetchUnoAccount::updateUnoStatus
==============
*/
void bdLoginTaskFetchUnoAccount::updateUnoStatus(bdLoginTaskFetchUnoAccount *this, const char *messageInfo, const bdLoginTaskFetchUnoAccount::FetchUnoAccountStatusCode *code)
{
  double v8; 

  bdHandleAssert(messageInfo != NULL, "(messageInfo != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskfetchunoaccount.cpp", "bdLoginTaskFetchUnoAccount::updateUnoStatus", 0x9Bu, "Must provide valid message to update uno task status!");
  this->m_unoStatusCode = *code;
  bdStrlcpy(this->m_unoStatusMessage, messageInfo, 0x400ui64);
  if ( (unsigned int)(*code - 3) <= 1 )
  {
    *(double *)&_XMM0 = bdStopwatch::getElapsedTimeInSeconds(&this->m_taskTimer);
    __asm
    {
      vcvtss2sd xmm1, xmm0, xmm0
      vmovsd  [rsp+48h+var_10], xmm1
    }
    bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskfetchunoaccount.cpp", "bdLoginTaskFetchUnoAccount::updateUnoStatus", 0xA3u, "Task finished after %2.1f seconds", v8);
  }
}

