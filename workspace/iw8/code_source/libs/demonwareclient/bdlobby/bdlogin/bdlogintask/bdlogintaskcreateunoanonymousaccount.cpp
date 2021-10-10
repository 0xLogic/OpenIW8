/*
==============
bdLoginTaskCreateUnoAnonymousAccount::processUnoReply
==============
*/

void __fastcall bdLoginTaskCreateUnoAnonymousAccount::processUnoReply(bdLoginTaskCreateUnoAnonymousAccount *this)
{
  ?processUnoReply@bdLoginTaskCreateUnoAnonymousAccount@@IEAAXXZ(this);
}

/*
==============
bdLoginTaskCreateUnoAnonymousAccount::createTaskBuff
==============
*/

bool __fastcall bdLoginTaskCreateUnoAnonymousAccount::createTaskBuff(bdLoginTaskCreateUnoAnonymousAccount *this, unsigned int size)
{
  return ?createTaskBuff@bdLoginTaskCreateUnoAnonymousAccount@@IEAA_NI@Z(this, size);
}

/*
==============
bdLoginTaskCreateUnoAnonymousAccount::bdLoginTaskCreateUnoAnonymousAccount
==============
*/

void __fastcall bdLoginTaskCreateUnoAnonymousAccount::bdLoginTaskCreateUnoAnonymousAccount(bdLoginTaskCreateUnoAnonymousAccount *this, const bdLoginConfig *loginConfig, bdLoginResult *loginResult)
{
  ??0bdLoginTaskCreateUnoAnonymousAccount@@QEAA@PEBVbdLoginConfig@@PEAVbdLoginResult@@@Z(this, loginConfig, loginResult);
}

/*
==============
bdLoginTaskCreateUnoAnonymousAccount::getTaskCode
==============
*/

bdLoginTaskCreateUnoAnonymousAccount::CreateUnoAnonymousAccountStatusCode __fastcall bdLoginTaskCreateUnoAnonymousAccount::getTaskCode(bdLoginTaskCreateUnoAnonymousAccount *this)
{
  return ?getTaskCode@bdLoginTaskCreateUnoAnonymousAccount@@QEBA?AW4CreateUnoAnonymousAccountStatusCode@1@XZ(this);
}

/*
==============
bdLoginTaskCreateUnoAnonymousAccount::getUnoIDToken
==============
*/

const char *__fastcall bdLoginTaskCreateUnoAnonymousAccount::getUnoIDToken(bdLoginTaskCreateUnoAnonymousAccount *this)
{
  return ?getUnoIDToken@bdLoginTaskCreateUnoAnonymousAccount@@QEBAPEBDXZ(this);
}

/*
==============
bdLoginTaskCreateUnoAnonymousAccount::buildUnoRequest
==============
*/

void __fastcall bdLoginTaskCreateUnoAnonymousAccount::buildUnoRequest(bdLoginTaskCreateUnoAnonymousAccount *this)
{
  ?buildUnoRequest@bdLoginTaskCreateUnoAnonymousAccount@@IEAAXXZ(this);
}

/*
==============
bdLoginTaskCreateUnoAnonymousAccount::updateUnoStatus
==============
*/

void __fastcall bdLoginTaskCreateUnoAnonymousAccount::updateUnoStatus(bdLoginTaskCreateUnoAnonymousAccount *this, const char *messageInfo, const bdLoginTaskCreateUnoAnonymousAccount::CreateUnoAnonymousAccountStatusCode *code)
{
  ?updateUnoStatus@bdLoginTaskCreateUnoAnonymousAccount@@IEAAXPEBDAEBW4CreateUnoAnonymousAccountStatusCode@1@@Z(this, messageInfo, code);
}

/*
==============
bdLoginTaskCreateUnoAnonymousAccount::pump
==============
*/

void __fastcall bdLoginTaskCreateUnoAnonymousAccount::pump(bdLoginTaskCreateUnoAnonymousAccount *this)
{
  ?pump@bdLoginTaskCreateUnoAnonymousAccount@@UEAAXXZ(this);
}

/*
==============
bdLoginTaskCreateUnoAnonymousAccount::releaseTaskBuff
==============
*/

void __fastcall bdLoginTaskCreateUnoAnonymousAccount::releaseTaskBuff(bdLoginTaskCreateUnoAnonymousAccount *this)
{
  ?releaseTaskBuff@bdLoginTaskCreateUnoAnonymousAccount@@IEAAXXZ(this);
}

/*
==============
bdLoginTaskCreateUnoAnonymousAccount::~bdLoginTaskCreateUnoAnonymousAccount
==============
*/

void __fastcall bdLoginTaskCreateUnoAnonymousAccount::~bdLoginTaskCreateUnoAnonymousAccount(bdLoginTaskCreateUnoAnonymousAccount *this)
{
  ??1bdLoginTaskCreateUnoAnonymousAccount@@UEAA@XZ(this);
}

/*
==============
bdLoginTaskCreateUnoAnonymousAccount::getTaskMessage
==============
*/

const char *__fastcall bdLoginTaskCreateUnoAnonymousAccount::getTaskMessage(bdLoginTaskCreateUnoAnonymousAccount *this)
{
  return ?getTaskMessage@bdLoginTaskCreateUnoAnonymousAccount@@UEBAPEBDXZ(this);
}

/*
==============
bdLoginTaskCreateUnoAnonymousAccount::resetHttpInterface
==============
*/

void __fastcall bdLoginTaskCreateUnoAnonymousAccount::resetHttpInterface(bdLoginTaskCreateUnoAnonymousAccount *this)
{
  ?resetHttpInterface@bdLoginTaskCreateUnoAnonymousAccount@@IEAAXXZ(this);
}

/*
==============
bdLoginTaskCreateUnoAnonymousAccount::abortTask
==============
*/

void __fastcall bdLoginTaskCreateUnoAnonymousAccount::abortTask(bdLoginTaskCreateUnoAnonymousAccount *this)
{
  ?abortTask@bdLoginTaskCreateUnoAnonymousAccount@@UEAAXXZ(this);
}

/*
==============
bdLoginTaskCreateUnoAnonymousAccount::reset
==============
*/

void __fastcall bdLoginTaskCreateUnoAnonymousAccount::reset(bdLoginTaskCreateUnoAnonymousAccount *this)
{
  ?reset@bdLoginTaskCreateUnoAnonymousAccount@@UEAAXXZ(this);
}

/*
==============
bdLoginTaskCreateUnoAnonymousAccount::processUnoJSON
==============
*/

void __fastcall bdLoginTaskCreateUnoAnonymousAccount::processUnoJSON(bdLoginTaskCreateUnoAnonymousAccount *this, const bdJSONDeserializer *responseJSON)
{
  ?processUnoJSON@bdLoginTaskCreateUnoAnonymousAccount@@IEAAXAEBVbdJSONDeserializer@@@Z(this, responseJSON);
}

/*
==============
bdLoginTaskCreateUnoAnonymousAccount::bdLoginTaskCreateUnoAnonymousAccount
==============
*/
void bdLoginTaskCreateUnoAnonymousAccount::bdLoginTaskCreateUnoAnonymousAccount(bdLoginTaskCreateUnoAnonymousAccount *this, const bdLoginConfig *loginConfig, bdLoginResult *loginResult)
{
  this->__vftable = (bdLoginTaskCreateUnoAnonymousAccount_vtbl *)&bdLoginTask::`vftable';
  bdStopwatch::bdStopwatch(&this->m_taskTimer);
  this->m_loginConfig = loginConfig;
  this->__vftable = (bdLoginTaskCreateUnoAnonymousAccount_vtbl *)&bdLoginTaskCreateUnoAnonymousAccount::`vftable';
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
bdLoginTaskCreateUnoAnonymousAccount::~bdLoginTaskCreateUnoAnonymousAccount
==============
*/
void bdLoginTaskCreateUnoAnonymousAccount::~bdLoginTaskCreateUnoAnonymousAccount(bdLoginTaskCreateUnoAnonymousAccount *this)
{
  char *m_httpUnoRequest; 
  bdHTTP *m_httpInterface; 
  bdHTTP *v4; 

  this->__vftable = (bdLoginTaskCreateUnoAnonymousAccount_vtbl *)&bdLoginTaskCreateUnoAnonymousAccount::`vftable';
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
  this->__vftable = (bdLoginTaskCreateUnoAnonymousAccount_vtbl *)&bdLoginTask::`vftable';
}

/*
==============
bdLoginTaskCreateUnoAnonymousAccount::abortTask
==============
*/
void bdLoginTaskCreateUnoAnonymousAccount::abortTask(bdLoginTaskCreateUnoAnonymousAccount *this)
{
  double ElapsedTimeInSeconds; 
  bdHTTP *m_httpInterface; 
  bdHTTP *v4; 
  char *m_httpUnoRequest; 

  bdHandleAssert(1, "(messageInfo != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskcreateunoanonymousaccount.cpp", "bdLoginTaskCreateUnoAnonymousAccount::updateUnoStatus", 0xCBu, "Must provide valid message to update uno task status!");
  this->m_unoStatusCode = WAITING_FOR_REPORT_CONSOLE_DETAILS;
  bdStrlcpy(this->m_unoStatusMessage, "UnoAnonymousAccount task aborted", 0x400ui64);
  ElapsedTimeInSeconds = bdStopwatch::getElapsedTimeInSeconds(&this->m_taskTimer);
  bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskcreateunoanonymousaccount.cpp", "bdLoginTaskCreateUnoAnonymousAccount::updateUnoStatus", 0xD3u, "Task finished after %2.1f seconds", *(float *)&ElapsedTimeInSeconds);
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
bdLoginTaskCreateUnoAnonymousAccount::buildUnoRequest
==============
*/
void bdLoginTaskCreateUnoAnonymousAccount::buildUnoRequest(bdLoginTaskCreateUnoAnonymousAccount *this)
{
  bool v2; 
  const char *DesiredUserName; 
  size_t v4; 
  __int64 v5; 
  char *v6; 
  const char *FirstPartyUsername; 
  __int64 v8; 
  double ElapsedTimeInSeconds; 
  const char *FirstPartyAccountType; 
  __int64 v11; 
  char v12; 
  const char *v13; 
  const char *Region; 
  bdEnvironment Environment; 
  const char *v16; 
  unsigned __int64 v17; 
  size_t v18; 
  const char *v19; 
  bdHTTP *v20; 
  __int64 v21; 
  char *m_httpUnoRequest; 
  char *v23; 
  __int64 m_httpUnoRequestLength; 
  bdHTTP *m_httpInterface; 
  unsigned int v26; 
  bdHTTP *v27; 
  bool (__fastcall *setHeader)(bdHTTP *, const char *, const unsigned __int64); 
  unsigned __int64 TransactionID; 
  unsigned __int64 v30; 
  bdJSONSerializer v31; 
  char tokenBuffer[8]; 
  __int64 v33; 
  __int64 v34; 
  __int64 v35; 
  __int64 v36; 
  __int64 v37; 
  __int64 v38; 
  __int64 v39; 
  char v40; 
  char v41[512]; 
  char buf[512]; 
  char v43[512]; 
  char buffer[6784]; 

  memset_0(buffer, 0, sizeof(buffer));
  bdJSONSerializer::bdJSONSerializer(&v31, buffer, 0x1A80u);
  v2 = bdJSONSerializer::writeBeginObject(&v31) && bdJSONSerializer::writeString(&v31, "accountType", "anonymous");
  DesiredUserName = bdLoginConfig::getDesiredUserName((bdLoginConfig *)this->m_loginConfig);
  bdHandleAssert(DesiredUserName != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v4 = -1i64;
  v5 = -1i64;
  do
    ++v5;
  while ( DesiredUserName[v5] );
  if ( v5 )
  {
    if ( v2 )
    {
      v6 = (char *)bdLoginConfig::getDesiredUserName((bdLoginConfig *)this->m_loginConfig);
      goto LABEL_20;
    }
LABEL_53:
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskcreateunoanonymousaccount.cpp", "bdLoginTaskCreateUnoAnonymousAccount::buildUnoRequest", 0x8Fu, "Error serializing JSON, request cannot be sent.");
    goto LABEL_54;
  }
  FirstPartyUsername = bdLoginResult::getFirstPartyUsername(this->m_loginResult);
  bdHandleAssert(FirstPartyUsername != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v8 = -1i64;
  do
    ++v8;
  while ( FirstPartyUsername[v8] );
  if ( !v8 )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskcreateunoanonymousaccount.cpp", "bdLoginTaskCreateUnoAnonymousAccount::buildUnoRequest", 0x54u, "Failed to detect valid first party username for anon Uno account creation.");
    bdHandleAssert(1, "(messageInfo != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskcreateunoanonymousaccount.cpp", "bdLoginTaskCreateUnoAnonymousAccount::updateUnoStatus", 0xCBu, "Must provide valid message to update uno task status!");
    this->m_unoStatusCode = WAITING_FOR_REPORT_CONSOLE_DETAILS;
    bdStrlcpy(this->m_unoStatusMessage, "Failed to detect valid first party username for anon Uno account creation.", 0x400ui64);
    ElapsedTimeInSeconds = bdStopwatch::getElapsedTimeInSeconds(&this->m_taskTimer);
    bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskcreateunoanonymousaccount.cpp", "bdLoginTaskCreateUnoAnonymousAccount::updateUnoStatus", 0xD3u, "Task finished after %2.1f seconds", *(float *)&ElapsedTimeInSeconds);
    goto LABEL_54;
  }
  FirstPartyAccountType = bdLoginResult::getFirstPartyAccountType(this->m_loginResult);
  v11 = 0i64;
  while ( 1 )
  {
    v12 = FirstPartyAccountType[v11++];
    if ( v12 != aBnet[v11 - 1] )
      break;
    if ( v11 == 5 )
    {
      *(_QWORD *)tokenBuffer = 0i64;
      v33 = 0i64;
      v34 = 0i64;
      v35 = 0i64;
      v36 = 0i64;
      v37 = 0i64;
      v38 = 0i64;
      v39 = 0i64;
      v40 = 0;
      v13 = bdLoginResult::getFirstPartyUsername(this->m_loginResult);
      bdStrGetToken(v13, "#", tokenBuffer, 0x41u, NULL);
      v6 = tokenBuffer;
      goto LABEL_19;
    }
  }
  v6 = (char *)bdLoginResult::getFirstPartyUsername(this->m_loginResult);
LABEL_19:
  if ( !v2 )
    goto LABEL_53;
LABEL_20:
  if ( !bdJSONSerializer::writeString(&v31, "userName", v6) || !bdJSONSerializer::writeBoolean(&v31, "autogeneratePassword", 1) || !bdJSONSerializer::writeEndObject(&v31) )
    goto LABEL_53;
  Region = bdLoginConfig::getRegion((bdLoginConfig *)this->m_loginConfig);
  Environment = bdLoginResult::getEnvironment(this->m_loginResult);
  if ( *Region == aCn[0] && Region[1] == aCn[1] && Region[2] == aCn[2] )
  {
    bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
    v16 = "https:
    v17 = -1i64;
    do
      ++v17;
    while ( aHttpsUnoSCodQq[v17] );
  }
  else
  {
    bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
    v16 = "https:
    v17 = -1i64;
    do
      ++v17;
    while ( aHttpsSUnoDemon[v17] );
  }
  v18 = 511i64;
  if ( v17 < 0x1FF )
    v18 = v17;
  memcpy_0(v41, v16, v18);
  v41[v18] = 0;
  switch ( Environment )
  {
    case BD_ENVIRONMENT_DEV:
      goto LABEL_37;
    case BD_ENVIRONMENT_CERT:
      v19 = "cert";
      break;
    case BD_ENVIRONMENT_PROD:
      v19 = "prod";
      break;
    default:
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\helpers\\bdloginutils.h", "bdLoginUtils::getUnoUrl", 0xA6u, "Unknown environment (%u): Defaulting to DEV Uno URL", Environment);
LABEL_37:
      v19 = "dev";
      break;
  }
  bdSnprintf(buf, 0x200ui64, v41, v19);
  bdSnprintf(v43, 0x200ui64, "%s/users/?client=%s", buf, this->m_loginResult->m_clientID);
  bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskcreateunoanonymousaccount.cpp", "bdLoginTaskCreateUnoAnonymousAccount::buildUnoRequest", 0x76u, "Create Uno Anonymous Account URL : %s", v43);
  v20 = bdHTTPUtility::newHTTP(0, 0);
  this->m_httpInterface = v20;
  ((void (__fastcall *)(bdHTTP *, __int64, char *))v20->initRequest)(v20, 3i64, v43);
  bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v21 = -1i64;
  do
    ++v21;
  while ( buffer[v21] );
  m_httpUnoRequest = this->m_httpUnoRequest;
  if ( m_httpUnoRequest )
  {
    bdMemory::deallocate(m_httpUnoRequest);
    this->m_httpUnoRequest = NULL;
  }
  this->m_httpUnoRequestLength = v21 + 1;
  v23 = (char *)bdMemory::allocate((unsigned int)(v21 + 1));
  this->m_httpUnoRequest = v23;
  m_httpUnoRequestLength = this->m_httpUnoRequestLength;
  bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  do
    ++v4;
  while ( buffer[v4] );
  if ( m_httpUnoRequestLength && v23 )
  {
    if ( v4 >= m_httpUnoRequestLength - 1 )
      v4 = m_httpUnoRequestLength - 1;
    memcpy_0(v23, buffer, v4);
    v23[v4] = 0;
  }
  bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskcreateunoanonymousaccount.cpp", "bdLoginTaskCreateUnoAnonymousAccount::buildUnoRequest", 0x7Eu, "HTTP Request Params: %s", this->m_httpUnoRequest);
  m_httpInterface = this->m_httpInterface;
  v26 = bdJSONSerializer::length(&v31);
  bdHTTP::setUploadData(m_httpInterface, this->m_httpUnoRequest, v26);
  bdHTTP::setDownloadBuffer(this->m_httpInterface, this->m_httpUnoResponse, 0x1000u);
  this->m_httpInterface->setHeader(this->m_httpInterface, "Content-Type", "application/json");
  v27 = this->m_httpInterface;
  setHeader = v27->setHeader;
  TransactionID = bdLoginResult::getTransactionID(this->m_loginResult);
  setHeader(v27, "X-TransactionID", TransactionID);
  this->m_httpInterface->setHeader(this->m_httpInterface, "Accept", "application/json");
  bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskcreateunoanonymousaccount.cpp", "bdLoginTaskCreateUnoAnonymousAccount::buildUnoRequest", 0x86u, "Setting state to CREATING_UNO_ANONYMOUS_ACCOUNT");
  bdHandleAssert(1, "(messageInfo != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskcreateunoanonymousaccount.cpp", "bdLoginTaskCreateUnoAnonymousAccount::updateUnoStatus", 0xCBu, "Must provide valid message to update uno task status!");
  this->m_unoStatusCode = NOT_CONNECTED;
  bdStrlcpy(this->m_unoStatusMessage, "Creating anon Uno account", 0x400ui64);
  v30 = bdLoginResult::getTransactionID(this->m_loginResult);
  bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskcreateunoanonymousaccount.cpp", "bdLoginTaskCreateUnoAnonymousAccount::buildUnoRequest", 0x8Bu, "Started call to bdLoginTaskCreateUnoAnonymousAccount::createAccount. TransactionID: (%I64u)", v30);
LABEL_54:
  bdJSONSerializer::~bdJSONSerializer(&v31);
}

/*
==============
bdLoginTaskCreateUnoAnonymousAccount::createTaskBuff
==============
*/
bool bdLoginTaskCreateUnoAnonymousAccount::createTaskBuff(bdLoginTaskCreateUnoAnonymousAccount *this, unsigned int size)
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
bdLoginTaskCreateUnoAnonymousAccount::getTaskCode
==============
*/
__int64 bdLoginTaskCreateUnoAnonymousAccount::getTaskCode(bdLoginTaskCreateUnoAnonymousAccount *this)
{
  return (unsigned int)this->m_unoStatusCode;
}

/*
==============
bdLoginTaskCreateUnoAnonymousAccount::getTaskMessage
==============
*/
char *bdLoginTaskCreateUnoAnonymousAccount::getTaskMessage(bdLoginTaskCreateUnoAnonymousAccount *this)
{
  return this->m_unoStatusMessage;
}

/*
==============
bdLoginTaskCreateUnoAnonymousAccount::getUnoIDToken
==============
*/
char *bdLoginTaskCreateUnoAnonymousAccount::getUnoIDToken(bdLoginTaskCreateUnoAnonymousAccount *this)
{
  return this->m_unoIDToken;
}

/*
==============
bdLoginTaskCreateUnoAnonymousAccount::processUnoJSON
==============
*/
void bdLoginTaskCreateUnoAnonymousAccount::processUnoJSON(bdLoginTaskCreateUnoAnonymousAccount *this, const bdJSONDeserializer *responseJSON)
{
  bool Object; 
  const char *v5; 
  double ElapsedTimeInSeconds; 
  double v7; 
  double v8; 
  bdJSONDeserializer value; 

  if ( bdJSONDeserializer::hasKey((bdJSONDeserializer *)responseJSON, "tokens") )
  {
    bdJSONDeserializer::bdJSONDeserializer(&value);
    Object = bdJSONDeserializer::getObject((bdJSONDeserializer *)responseJSON, "tokens", &value);
    if ( bdJSONDeserializer::hasKey(&value, "IDToken") )
    {
      if ( Object && bdJSONDeserializer::getString(&value, "IDToken", this->m_unoIDToken, 0x400u) )
      {
        bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskcreateunoanonymousaccount.cpp", "bdLoginTaskCreateUnoAnonymousAccount::processUnoJSON", 0xA3u, "Setting state to COMPLETED");
        bdHandleAssert(1, "(messageInfo != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskcreateunoanonymousaccount.cpp", "bdLoginTaskCreateUnoAnonymousAccount::updateUnoStatus", 0xCBu, "Must provide valid message to update uno task status!");
        this->m_unoStatusCode = CONNECTED;
        v5 = "Saved UNO IDToken";
      }
      else
      {
        bdHandleAssert(1, "(messageInfo != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskcreateunoanonymousaccount.cpp", "bdLoginTaskCreateUnoAnonymousAccount::updateUnoStatus", 0xCBu, "Must provide valid message to update uno task status!");
        this->m_unoStatusCode = WAITING_FOR_REPORT_CONSOLE_DETAILS;
        v5 = "Unable to save UNO IDToken";
      }
      bdStrlcpy(this->m_unoStatusMessage, v5, 0x400ui64);
      ElapsedTimeInSeconds = bdStopwatch::getElapsedTimeInSeconds(&this->m_taskTimer);
      bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskcreateunoanonymousaccount.cpp", "bdLoginTaskCreateUnoAnonymousAccount::updateUnoStatus", 0xD3u, "Task finished after %2.1f seconds", *(float *)&ElapsedTimeInSeconds);
    }
    else
    {
      bdHandleAssert(1, "(messageInfo != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskcreateunoanonymousaccount.cpp", "bdLoginTaskCreateUnoAnonymousAccount::updateUnoStatus", 0xCBu, "Must provide valid message to update uno task status!");
      this->m_unoStatusCode = WAITING_FOR_REPORT_CONSOLE_DETAILS;
      bdStrlcpy(this->m_unoStatusMessage, "Uno response does not contain an IDToken", 0x400ui64);
      v7 = bdStopwatch::getElapsedTimeInSeconds(&this->m_taskTimer);
      bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskcreateunoanonymousaccount.cpp", "bdLoginTaskCreateUnoAnonymousAccount::updateUnoStatus", 0xD3u, "Task finished after %2.1f seconds", *(float *)&v7);
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskcreateunoanonymousaccount.cpp", "bdLoginTaskCreateUnoAnonymousAccount::processUnoJSON", 0xAEu, "Uno response does not contain an IDToken");
    }
    bdJSONDeserializer::~bdJSONDeserializer(&value);
  }
  else
  {
    bdHandleAssert(1, "(messageInfo != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskcreateunoanonymousaccount.cpp", "bdLoginTaskCreateUnoAnonymousAccount::updateUnoStatus", 0xCBu, "Must provide valid message to update uno task status!");
    this->m_unoStatusCode = WAITING_FOR_REPORT_CONSOLE_DETAILS;
    bdStrlcpy(this->m_unoStatusMessage, "Uno response does not contain any tokens", 0x400ui64);
    v8 = bdStopwatch::getElapsedTimeInSeconds(&this->m_taskTimer);
    bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskcreateunoanonymousaccount.cpp", "bdLoginTaskCreateUnoAnonymousAccount::updateUnoStatus", 0xD3u, "Task finished after %2.1f seconds", *(float *)&v8);
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskcreateunoanonymousaccount.cpp", "bdLoginTaskCreateUnoAnonymousAccount::processUnoJSON", 0xB3u, "Uno response does not contain any tokens");
  }
}

/*
==============
bdLoginTaskCreateUnoAnonymousAccount::processUnoReply
==============
*/
void bdLoginTaskCreateUnoAnonymousAccount::processUnoReply(bdLoginTaskCreateUnoAnonymousAccount *this)
{
  unsigned int v2; 
  unsigned int v3; 
  double ElapsedTimeInSeconds; 
  bdJSONDeserializer responseJSON; 
  bdLoginTaskCreateUnoAnonymousAccount::CreateUnoAnonymousAccountStatusCode code; 

  bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskcreateunoanonymousaccount.cpp", "bdLoginTaskCreateUnoAnonymousAccount::processUnoReply", 0x22u, "Processing bdLogin Anonymous Uno Account Creation task reply");
  v2 = this->m_httpInterface->getLastHTTPStatus(this->m_httpInterface);
  v3 = v2;
  if ( v2 == 201 )
  {
    bdJSONDeserializer::bdJSONDeserializer(&responseJSON);
    if ( bdJSONDeserializer::parse(&responseJSON, this->m_httpUnoResponse) && bdJSONDeserializer::isObject(&responseJSON) )
    {
      bdLoginTaskCreateUnoAnonymousAccount::processUnoJSON(this, &responseJSON);
    }
    else
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskcreateunoanonymousaccount.cpp", "bdLoginTaskCreateUnoAnonymousAccount::processUnoReply", 0x31u, "Failed to parse Uno response json");
      bdHandleAssert(1, "(messageInfo != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskcreateunoanonymousaccount.cpp", "bdLoginTaskCreateUnoAnonymousAccount::updateUnoStatus", 0xCBu, "Must provide valid message to update uno task status!");
      this->m_unoStatusCode = WAITING_FOR_REPORT_CONSOLE_DETAILS;
      bdStrlcpy(this->m_unoStatusMessage, "Failed to parse Uno response json", 0x400ui64);
      ElapsedTimeInSeconds = bdStopwatch::getElapsedTimeInSeconds(&this->m_taskTimer);
      bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskcreateunoanonymousaccount.cpp", "bdLoginTaskCreateUnoAnonymousAccount::updateUnoStatus", 0xD3u, "Task finished after %2.1f seconds", *(float *)&ElapsedTimeInSeconds);
    }
    bdJSONDeserializer::~bdJSONDeserializer(&responseJSON);
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskcreateunoanonymousaccount.cpp", "bdLoginTaskCreateUnoAnonymousAccount::processUnoReply", 0x37u, "Uno task failed with HTTP code [%u]", v2);
    bdSnprintf(this->m_unoStatusMessage, 0x400ui64, "Uno create anonymous account task failed with HTTP code [%u]", v3);
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskcreateunoanonymousaccount.cpp", "bdLoginTaskCreateUnoAnonymousAccount::processUnoReply", 0x3Du, this->m_unoStatusMessage);
    code = WAITING_FOR_REPORT_CONSOLE_DETAILS;
    bdLoginTaskCreateUnoAnonymousAccount::updateUnoStatus(this, this->m_unoStatusMessage, &code);
  }
}

/*
==============
bdLoginTaskCreateUnoAnonymousAccount::pump
==============
*/
void bdLoginTaskCreateUnoAnonymousAccount::pump(bdLoginTaskCreateUnoAnonymousAccount *this)
{
  bdLoginTaskCreateUnoAnonymousAccount::CreateUnoAnonymousAccountStatusCode m_unoStatusCode; 
  __int32 v3; 
  __int32 v4; 
  unsigned int v5; 
  unsigned int v6; 
  double ElapsedTimeInSeconds; 
  bdHTTP::bdStatus v8; 
  __int32 v9; 
  __int32 v10; 
  const char *v11; 
  bdJSONDeserializer responseJSON; 
  bdLoginTaskCreateUnoAnonymousAccount::CreateUnoAnonymousAccountStatusCode code; 

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
          bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskcreateunoanonymousaccount.cpp", "bdLoginTaskCreateUnoAnonymousAccount::pump", 0x11Fu, "Pumping in an unknown state!");
      }
      else
      {
        bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskcreateunoanonymousaccount.cpp", "bdLoginTaskCreateUnoAnonymousAccount::processUnoReply", 0x22u, "Processing bdLogin Anonymous Uno Account Creation task reply");
        v5 = this->m_httpInterface->getLastHTTPStatus(this->m_httpInterface);
        v6 = v5;
        if ( v5 == 201 )
        {
          bdJSONDeserializer::bdJSONDeserializer(&responseJSON);
          if ( bdJSONDeserializer::parse(&responseJSON, this->m_httpUnoResponse) && bdJSONDeserializer::isObject(&responseJSON) )
          {
            bdLoginTaskCreateUnoAnonymousAccount::processUnoJSON(this, &responseJSON);
          }
          else
          {
            bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskcreateunoanonymousaccount.cpp", "bdLoginTaskCreateUnoAnonymousAccount::processUnoReply", 0x31u, "Failed to parse Uno response json");
            bdHandleAssert(1, "(messageInfo != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskcreateunoanonymousaccount.cpp", "bdLoginTaskCreateUnoAnonymousAccount::updateUnoStatus", 0xCBu, "Must provide valid message to update uno task status!");
            this->m_unoStatusCode = WAITING_FOR_REPORT_CONSOLE_DETAILS;
            bdStrlcpy(this->m_unoStatusMessage, "Failed to parse Uno response json", 0x400ui64);
            ElapsedTimeInSeconds = bdStopwatch::getElapsedTimeInSeconds(&this->m_taskTimer);
            bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskcreateunoanonymousaccount.cpp", "bdLoginTaskCreateUnoAnonymousAccount::updateUnoStatus", 0xD3u, "Task finished after %2.1f seconds", *(float *)&ElapsedTimeInSeconds);
          }
          bdJSONDeserializer::~bdJSONDeserializer(&responseJSON);
        }
        else
        {
          bdLogMessage(BD_LOG_WARNING, "warn/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskcreateunoanonymousaccount.cpp", "bdLoginTaskCreateUnoAnonymousAccount::processUnoReply", 0x37u, "Uno task failed with HTTP code [%u]", v5);
          bdSnprintf(this->m_unoStatusMessage, 0x400ui64, "Uno create anonymous account task failed with HTTP code [%u]", v6);
          bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskcreateunoanonymousaccount.cpp", "bdLoginTaskCreateUnoAnonymousAccount::processUnoReply", 0x3Du, this->m_unoStatusMessage);
          code = WAITING_FOR_REPORT_CONSOLE_DETAILS;
          bdLoginTaskCreateUnoAnonymousAccount::updateUnoStatus(this, this->m_unoStatusMessage, &code);
        }
      }
    }
    else
    {
      v8 = this->m_httpInterface->getStatus(this->m_httpInterface);
      this->m_httpStatus = v8;
      v9 = v8 - 2;
      if ( v9 )
      {
        v10 = v9 - 3;
        if ( v10 )
        {
          if ( v10 != 1 )
            return;
          bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskcreateunoanonymousaccount.cpp", "bdLoginTaskCreateUnoAnonymousAccount::pump", 0x109u, "Setting state to RECEIVED_REPLY");
          v11 = "Something went wrong with Uno request";
          bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskcreateunoanonymousaccount.cpp", "bdLoginTaskCreateUnoAnonymousAccount::pump", 0x10Au, "Something went wrong with Uno request");
        }
        else
        {
          bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskcreateunoanonymousaccount.cpp", "bdLoginTaskCreateUnoAnonymousAccount::pump", 0x10Eu, "Setting state to RECEIVED_REPLY");
          v11 = "Got successful reply from request to Uno";
          bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskcreateunoanonymousaccount.cpp", "bdLoginTaskCreateUnoAnonymousAccount::pump", 0x10Fu, "Got successful reply from request to Uno");
        }
        code = CONNECTING;
        bdLoginTaskCreateUnoAnonymousAccount::updateUnoStatus(this, v11, &code);
      }
      else
      {
        this->m_httpInterface->sendRequest(this->m_httpInterface);
        bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskcreateunoanonymousaccount.cpp", "bdLoginTaskCreateUnoAnonymousAccount::pump", 0x104u, "Sent request to Uno");
      }
    }
  }
  else
  {
    bdStopwatch::start(&this->m_taskTimer);
    bdLoginTaskCreateUnoAnonymousAccount::buildUnoRequest(this);
  }
}

/*
==============
bdLoginTaskCreateUnoAnonymousAccount::releaseTaskBuff
==============
*/
void bdLoginTaskCreateUnoAnonymousAccount::releaseTaskBuff(bdLoginTaskCreateUnoAnonymousAccount *this)
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
bdLoginTaskCreateUnoAnonymousAccount::reset
==============
*/
void bdLoginTaskCreateUnoAnonymousAccount::reset(bdLoginTaskCreateUnoAnonymousAccount *this)
{
  bdHTTP *m_httpInterface; 
  bdHTTP *v3; 
  char *m_httpUnoRequest; 

  bdHandleAssert(1, "(messageInfo != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskcreateunoanonymousaccount.cpp", "bdLoginTaskCreateUnoAnonymousAccount::updateUnoStatus", 0xCBu, "Must provide valid message to update uno task status!");
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
  memset_0(this->m_unoIDToken, 0, sizeof(this->m_unoIDToken));
}

/*
==============
bdLoginTaskCreateUnoAnonymousAccount::resetHttpInterface
==============
*/
void bdLoginTaskCreateUnoAnonymousAccount::resetHttpInterface(bdLoginTaskCreateUnoAnonymousAccount *this)
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
bdLoginTaskCreateUnoAnonymousAccount::updateUnoStatus
==============
*/
void bdLoginTaskCreateUnoAnonymousAccount::updateUnoStatus(bdLoginTaskCreateUnoAnonymousAccount *this, const char *messageInfo, const bdLoginTaskCreateUnoAnonymousAccount::CreateUnoAnonymousAccountStatusCode *code)
{
  double ElapsedTimeInSeconds; 

  bdHandleAssert(messageInfo != NULL, "(messageInfo != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskcreateunoanonymousaccount.cpp", "bdLoginTaskCreateUnoAnonymousAccount::updateUnoStatus", 0xCBu, "Must provide valid message to update uno task status!");
  this->m_unoStatusCode = *code;
  bdStrlcpy(this->m_unoStatusMessage, messageInfo, 0x400ui64);
  if ( (unsigned int)(*code - 3) <= 1 )
  {
    ElapsedTimeInSeconds = bdStopwatch::getElapsedTimeInSeconds(&this->m_taskTimer);
    bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskcreateunoanonymousaccount.cpp", "bdLoginTaskCreateUnoAnonymousAccount::updateUnoStatus", 0xD3u, "Task finished after %2.1f seconds", *(float *)&ElapsedTimeInSeconds);
  }
}

