/*
==============
bdLoginTaskUpdateUnoAccount::processUnoReply
==============
*/

void __fastcall bdLoginTaskUpdateUnoAccount::processUnoReply(bdLoginTaskUpdateUnoAccount *this)
{
  ?processUnoReply@bdLoginTaskUpdateUnoAccount@@IEAAXXZ(this);
}

/*
==============
bdLoginTaskUpdateUnoAccount::getTaskCode
==============
*/

bdLoginTaskUpdateUnoAccount::UpdateUnoAccountStatusCode __fastcall bdLoginTaskUpdateUnoAccount::getTaskCode(bdLoginTaskUpdateUnoAccount *this)
{
  return ?getTaskCode@bdLoginTaskUpdateUnoAccount@@QEBA?AW4UpdateUnoAccountStatusCode@1@XZ(this);
}

/*
==============
bdLoginTaskUpdateUnoAccount::reset
==============
*/

void __fastcall bdLoginTaskUpdateUnoAccount::reset(bdLoginTaskUpdateUnoAccount *this)
{
  ?reset@bdLoginTaskUpdateUnoAccount@@UEAAXXZ(this);
}

/*
==============
bdLoginTaskUpdateUnoAccount::~bdLoginTaskUpdateUnoAccount
==============
*/

void __fastcall bdLoginTaskUpdateUnoAccount::~bdLoginTaskUpdateUnoAccount(bdLoginTaskUpdateUnoAccount *this)
{
  ??1bdLoginTaskUpdateUnoAccount@@UEAA@XZ(this);
}

/*
==============
bdLoginTaskUpdateUnoAccount::pump
==============
*/

void __fastcall bdLoginTaskUpdateUnoAccount::pump(bdLoginTaskUpdateUnoAccount *this)
{
  ?pump@bdLoginTaskUpdateUnoAccount@@UEAAXXZ(this);
}

/*
==============
bdLoginTaskUpdateUnoAccount::abortTask
==============
*/

void __fastcall bdLoginTaskUpdateUnoAccount::abortTask(bdLoginTaskUpdateUnoAccount *this)
{
  ?abortTask@bdLoginTaskUpdateUnoAccount@@UEAAXXZ(this);
}

/*
==============
bdLoginTaskUpdateUnoAccount::createTaskBuff
==============
*/

bool __fastcall bdLoginTaskUpdateUnoAccount::createTaskBuff(bdLoginTaskUpdateUnoAccount *this, unsigned int size)
{
  return ?createTaskBuff@bdLoginTaskUpdateUnoAccount@@IEAA_NI@Z(this, size);
}

/*
==============
bdLoginTaskUpdateUnoAccount::updateUser
==============
*/

void __fastcall bdLoginTaskUpdateUnoAccount::updateUser(bdLoginTaskUpdateUnoAccount *this, const bdUnoAccountInfo *accountInfo)
{
  ?updateUser@bdLoginTaskUpdateUnoAccount@@IEAAXAEBVbdUnoAccountInfo@@@Z(this, accountInfo);
}

/*
==============
bdLoginTaskUpdateUnoAccount::releaseTaskBuff
==============
*/

void __fastcall bdLoginTaskUpdateUnoAccount::releaseTaskBuff(bdLoginTaskUpdateUnoAccount *this)
{
  ?releaseTaskBuff@bdLoginTaskUpdateUnoAccount@@IEAAXXZ(this);
}

/*
==============
bdLoginTaskUpdateUnoAccount::getTaskMessage
==============
*/

const char *__fastcall bdLoginTaskUpdateUnoAccount::getTaskMessage(bdLoginTaskUpdateUnoAccount *this)
{
  return ?getTaskMessage@bdLoginTaskUpdateUnoAccount@@UEBAPEBDXZ(this);
}

/*
==============
bdLoginTaskUpdateUnoAccount::resetHttpInterface
==============
*/

void __fastcall bdLoginTaskUpdateUnoAccount::resetHttpInterface(bdLoginTaskUpdateUnoAccount *this)
{
  ?resetHttpInterface@bdLoginTaskUpdateUnoAccount@@IEAAXXZ(this);
}

/*
==============
bdLoginTaskUpdateUnoAccount::updateUnoStatus
==============
*/

void __fastcall bdLoginTaskUpdateUnoAccount::updateUnoStatus(bdLoginTaskUpdateUnoAccount *this, const char *messageInfo, const bdLoginTaskUpdateUnoAccount::UpdateUnoAccountStatusCode *code)
{
  ?updateUnoStatus@bdLoginTaskUpdateUnoAccount@@IEAAXPEBDAEBW4UpdateUnoAccountStatusCode@1@@Z(this, messageInfo, code);
}

/*
==============
bdLoginTaskUpdateUnoAccount::processUnoErrorJSON
==============
*/

void __fastcall bdLoginTaskUpdateUnoAccount::processUnoErrorJSON(bdLoginTaskUpdateUnoAccount *this, const bdJSONDeserializer *responseJSON)
{
  ?processUnoErrorJSON@bdLoginTaskUpdateUnoAccount@@IEAAXAEBVbdJSONDeserializer@@@Z(this, responseJSON);
}

/*
==============
bdLoginTaskUpdateUnoAccount::bdLoginTaskUpdateUnoAccount
==============
*/

void __fastcall bdLoginTaskUpdateUnoAccount::bdLoginTaskUpdateUnoAccount(bdLoginTaskUpdateUnoAccount *this, const bdLoginConfig *loginConfig, bdLoginResult *loginResult)
{
  ??0bdLoginTaskUpdateUnoAccount@@QEAA@PEBVbdLoginConfig@@PEAVbdLoginResult@@@Z(this, loginConfig, loginResult);
}

/*
==============
bdLoginTaskUpdateUnoAccount::bdLoginTaskUpdateUnoAccount
==============
*/
void bdLoginTaskUpdateUnoAccount::bdLoginTaskUpdateUnoAccount(bdLoginTaskUpdateUnoAccount *this, const bdLoginConfig *loginConfig, bdLoginResult *loginResult)
{
  this->__vftable = (bdLoginTaskUpdateUnoAccount_vtbl *)&bdLoginTask::`vftable';
  bdStopwatch::bdStopwatch(&this->m_taskTimer);
  this->m_loginConfig = loginConfig;
  this->__vftable = (bdLoginTaskUpdateUnoAccount_vtbl *)&bdLoginTaskUpdateUnoAccount::`vftable';
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
bdLoginTaskUpdateUnoAccount::~bdLoginTaskUpdateUnoAccount
==============
*/
void bdLoginTaskUpdateUnoAccount::~bdLoginTaskUpdateUnoAccount(bdLoginTaskUpdateUnoAccount *this)
{
  char *m_httpUnoRequest; 
  bdHTTP *m_httpInterface; 
  bdHTTP *v4; 

  this->__vftable = (bdLoginTaskUpdateUnoAccount_vtbl *)&bdLoginTaskUpdateUnoAccount::`vftable';
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
  this->__vftable = (bdLoginTaskUpdateUnoAccount_vtbl *)&bdLoginTask::`vftable';
}

/*
==============
bdLoginTaskUpdateUnoAccount::abortTask
==============
*/
void bdLoginTaskUpdateUnoAccount::abortTask(bdLoginTaskUpdateUnoAccount *this)
{
  double ElapsedTimeInSeconds; 
  bdHTTP *m_httpInterface; 
  bdHTTP *v4; 
  char *m_httpUnoRequest; 

  bdHandleAssert(1, "(messageInfo != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskupdateunoaccount.cpp", "bdLoginTaskUpdateUnoAccount::updateUnoStatus", 0x113u, "Must provide valid message to update uno task status!");
  this->m_unoStatusCode = WAITING_FOR_REPORT_CONSOLE_DETAILS;
  bdStrlcpy(this->m_unoStatusMessage, "UnoAccount task aborted", 0x400ui64);
  ElapsedTimeInSeconds = bdStopwatch::getElapsedTimeInSeconds(&this->m_taskTimer);
  bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskupdateunoaccount.cpp", "bdLoginTaskUpdateUnoAccount::updateUnoStatus", 0x11Bu, "Task finished after %2.1f seconds", *(float *)&ElapsedTimeInSeconds);
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
bdLoginTaskUpdateUnoAccount::createTaskBuff
==============
*/
bool bdLoginTaskUpdateUnoAccount::createTaskBuff(bdLoginTaskUpdateUnoAccount *this, unsigned int size)
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
bdLoginTaskUpdateUnoAccount::getTaskCode
==============
*/
__int64 bdLoginTaskUpdateUnoAccount::getTaskCode(bdLoginTaskUpdateUnoAccount *this)
{
  return (unsigned int)this->m_unoStatusCode;
}

/*
==============
bdLoginTaskUpdateUnoAccount::getTaskMessage
==============
*/
char *bdLoginTaskUpdateUnoAccount::getTaskMessage(bdLoginTaskUpdateUnoAccount *this)
{
  return this->m_unoStatusMessage;
}

/*
==============
bdLoginTaskUpdateUnoAccount::processUnoErrorJSON
==============
*/
void bdLoginTaskUpdateUnoAccount::processUnoErrorJSON(bdLoginTaskUpdateUnoAccount *this, const bdJSONDeserializer *responseJSON)
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
          bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskupdateunoaccount.cpp", "bdLoginTaskUpdateUnoAccount::processUnoErrorJSON", 0x60u, "Unable to retrieve error code from Uno account update response");
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
          if ( this != (bdLoginTaskUpdateUnoAccount *)-4168i64 )
          {
            v9 = 1023i64;
            if ( v8 < 0x3FF )
              v9 = v8;
            memcpy_0(this->m_unoStatusMessage, "Could not retrieve context message, field, or code from Uno response.", v9);
            this->m_unoStatusMessage[v9] = 0;
          }
          bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskupdateunoaccount.cpp", "bdLoginTaskUpdateUnoAccount::processUnoErrorJSON", 0x94u, this->m_unoStatusMessage);
          break;
        }
        bdSnprintf(buf, 0x400ui64, "Invalid Field: %s - Message: %s;", v17, v18);
        bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskupdateunoaccount.cpp", "bdLoginTaskUpdateUnoAccount::processUnoErrorJSON", 0x89u, buf);
        bdSnprintf(this->m_unoStatusMessage, 0x400ui64, "%sInvalid Field: %s - Message: %s;", this->m_unoStatusMessage, v17, v18);
      }
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskupdateunoaccount.cpp", "bdLoginTaskUpdateUnoAccount::processUnoErrorJSON", 0x97u, "Finished parsing Uno update account error JSON, view loginStatus for full info");
      if ( v4 )
      {
        bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskupdateunoaccount.cpp", "bdLoginTaskUpdateUnoAccount::processUnoErrorJSON", 0x9Cu, "Parsed a user input error, so fast failing from Update Uno Account Task");
        errorCode = 5;
      }
      else
      {
        errorCode = 3;
      }
      bdLoginTaskUpdateUnoAccount::updateUnoStatus(this, this->m_unoStatusMessage, (const bdLoginTaskUpdateUnoAccount::UpdateUnoAccountStatusCode *)&errorCode);
      bdJSONDeserializer::~bdJSONDeserializer(&v13);
    }
    else
    {
      bdHandleAssert(1, "(messageInfo != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskupdateunoaccount.cpp", "bdLoginTaskUpdateUnoAccount::updateUnoStatus", 0x113u, "Must provide valid message to update uno task status!");
      this->m_unoStatusCode = WAITING_FOR_REPORT_CONSOLE_DETAILS;
      bdStrlcpy(this->m_unoStatusMessage, "Could not retrieve error context information from Uno response.", 0x400ui64);
      ElapsedTimeInSeconds = bdStopwatch::getElapsedTimeInSeconds(&this->m_taskTimer);
      bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskupdateunoaccount.cpp", "bdLoginTaskUpdateUnoAccount::updateUnoStatus", 0x11Bu, "Task finished after %2.1f seconds", *(float *)&ElapsedTimeInSeconds);
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskupdateunoaccount.cpp", "bdLoginTaskUpdateUnoAccount::processUnoErrorJSON", 0xA8u, "Could not retrieve error context information from Uno response.");
    }
    bdJSONDeserializer::~bdJSONDeserializer(&v14);
  }
  else
  {
    bdHandleAssert(1, "(messageInfo != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskupdateunoaccount.cpp", "bdLoginTaskUpdateUnoAccount::updateUnoStatus", 0x113u, "Must provide valid message to update uno task status!");
    this->m_unoStatusCode = WAITING_FOR_REPORT_CONSOLE_DETAILS;
    bdStrlcpy(this->m_unoStatusMessage, "Could not retrieve error information from Uno response.", 0x400ui64);
    v11 = bdStopwatch::getElapsedTimeInSeconds(&this->m_taskTimer);
    bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskupdateunoaccount.cpp", "bdLoginTaskUpdateUnoAccount::updateUnoStatus", 0x11Bu, "Task finished after %2.1f seconds", *(float *)&v11);
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskupdateunoaccount.cpp", "bdLoginTaskUpdateUnoAccount::processUnoErrorJSON", 0xAEu, "Could not retrieve error information from Uno response.");
  }
  bdJSONDeserializer::~bdJSONDeserializer(&value);
}

/*
==============
bdLoginTaskUpdateUnoAccount::processUnoReply
==============
*/
void bdLoginTaskUpdateUnoAccount::processUnoReply(bdLoginTaskUpdateUnoAccount *this)
{
  unsigned int v2; 
  double ElapsedTimeInSeconds; 
  double v4; 
  unsigned int v5; 
  bdJSONDeserializer responseJSON; 

  bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskupdateunoaccount.cpp", "bdLoginTaskUpdateUnoAccount::processUnoReply", 0x22u, "Processing bdLogin Uno Account Creation task reply");
  v2 = this->m_httpInterface->getLastHTTPStatus(this->m_httpInterface);
  if ( v2 == 200 )
  {
    bdHandleAssert(1, "(messageInfo != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskupdateunoaccount.cpp", "bdLoginTaskUpdateUnoAccount::updateUnoStatus", 0x113u, "Must provide valid message to update uno task status!");
    this->m_unoStatusCode = CONNECTED;
    bdStrlcpy(this->m_unoStatusMessage, "Updated Account", 0x400ui64);
    ElapsedTimeInSeconds = bdStopwatch::getElapsedTimeInSeconds(&this->m_taskTimer);
    bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskupdateunoaccount.cpp", "bdLoginTaskUpdateUnoAccount::updateUnoStatus", 0x11Bu, "Task finished after %2.1f seconds", *(float *)&ElapsedTimeInSeconds);
  }
  else
  {
    v5 = v2;
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskupdateunoaccount.cpp", "bdLoginTaskUpdateUnoAccount::processUnoReply", 0x2Bu, "Uno task failed with HTTP code [%u]", v5);
    bdJSONDeserializer::bdJSONDeserializer(&responseJSON);
    if ( bdJSONDeserializer::parse(&responseJSON, this->m_httpUnoResponse) && bdJSONDeserializer::isObject(&responseJSON) )
    {
      bdLoginTaskUpdateUnoAccount::processUnoErrorJSON(this, &responseJSON);
    }
    else
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskupdateunoaccount.cpp", "bdLoginTaskUpdateUnoAccount::processUnoReply", 0x36u, "Failed to parse Uno error response json");
      bdHandleAssert(1, "(messageInfo != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskupdateunoaccount.cpp", "bdLoginTaskUpdateUnoAccount::updateUnoStatus", 0x113u, "Must provide valid message to update uno task status!");
      this->m_unoStatusCode = WAITING_FOR_REPORT_CONSOLE_DETAILS;
      bdStrlcpy(this->m_unoStatusMessage, "Failed to parse Uno error response json", 0x400ui64);
      v4 = bdStopwatch::getElapsedTimeInSeconds(&this->m_taskTimer);
      bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskupdateunoaccount.cpp", "bdLoginTaskUpdateUnoAccount::updateUnoStatus", 0x11Bu, "Task finished after %2.1f seconds", *(float *)&v4);
    }
    bdJSONDeserializer::~bdJSONDeserializer(&responseJSON);
  }
}

/*
==============
bdLoginTaskUpdateUnoAccount::pump
==============
*/
void bdLoginTaskUpdateUnoAccount::pump(bdLoginTaskUpdateUnoAccount *this)
{
  bdLoginTaskUpdateUnoAccount::UpdateUnoAccountStatusCode m_unoStatusCode; 
  __int32 v3; 
  __int32 v4; 
  bdHTTP::bdStatus v5; 
  __int32 v6; 
  __int32 v7; 
  const char *v8; 
  bdLoginResumeConfig *LoginResumeConfig; 
  const bdUnoAccountInfo *AccountInfo; 
  bdLoginTaskUpdateUnoAccount::UpdateUnoAccountStatusCode code; 
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
          bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskupdateunoaccount.cpp", "bdLoginTaskUpdateUnoAccount::pump", 0x167u, "Pumping in an unknown state!");
      }
      else
      {
        bdLoginTaskUpdateUnoAccount::processUnoReply(this);
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
          bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskupdateunoaccount.cpp", "bdLoginTaskUpdateUnoAccount::pump", 0x151u, "Setting state to RECEIVED_REPLY");
          v8 = "Something went wrong with Uno request";
          bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskupdateunoaccount.cpp", "bdLoginTaskUpdateUnoAccount::pump", 0x152u, "Something went wrong with Uno request");
        }
        else
        {
          bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskupdateunoaccount.cpp", "bdLoginTaskUpdateUnoAccount::pump", 0x156u, "Setting state to RECEIVED_REPLY");
          v8 = "Got successful reply from request to Uno";
          bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskupdateunoaccount.cpp", "bdLoginTaskUpdateUnoAccount::pump", 0x157u, "Got successful reply from request to Uno");
        }
        code = CONNECTING;
        bdLoginTaskUpdateUnoAccount::updateUnoStatus(this, v8, &code);
      }
      else
      {
        this->m_httpInterface->sendRequest(this->m_httpInterface);
        bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskupdateunoaccount.cpp", "bdLoginTaskUpdateUnoAccount::pump", 0x14Cu, "Sent request to Uno");
      }
    }
  }
  else
  {
    bdStopwatch::start(&this->m_taskTimer);
    LoginResumeConfig = bdLoginResult::getLoginResumeConfig(this->m_loginResult, &result);
    AccountInfo = bdLoginResumeConfig::getAccountInfo(LoginResumeConfig, &v13);
    bdLoginTaskUpdateUnoAccount::updateUser(this, AccountInfo);
    bdUnoAccountInfo::~bdUnoAccountInfo(&v13);
    bdLoginResumeConfig::~bdLoginResumeConfig(&result);
  }
}

/*
==============
bdLoginTaskUpdateUnoAccount::releaseTaskBuff
==============
*/
void bdLoginTaskUpdateUnoAccount::releaseTaskBuff(bdLoginTaskUpdateUnoAccount *this)
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
bdLoginTaskUpdateUnoAccount::reset
==============
*/
void bdLoginTaskUpdateUnoAccount::reset(bdLoginTaskUpdateUnoAccount *this)
{
  bdHTTP *m_httpInterface; 
  bdHTTP *v3; 
  char *m_httpUnoRequest; 

  bdHandleAssert(1, "(messageInfo != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskupdateunoaccount.cpp", "bdLoginTaskUpdateUnoAccount::updateUnoStatus", 0x113u, "Must provide valid message to update uno task status!");
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
    bdMemory::deallocate(m_httpUnoRequest);
  this->m_loginResult->m_taskErrorCode = BD_NO_ERROR;
  this->m_httpUnoRequest = NULL;
  this->m_httpUnoRequestLength = 0;
  memset_0(this->m_httpUnoResponse, 0, sizeof(this->m_httpUnoResponse));
  memset_0(this->m_unoStatusMessage, 0, sizeof(this->m_unoStatusMessage));
  memset_0(this->m_unoIDToken, 0, sizeof(this->m_unoIDToken));
}

/*
==============
bdLoginTaskUpdateUnoAccount::resetHttpInterface
==============
*/
void bdLoginTaskUpdateUnoAccount::resetHttpInterface(bdLoginTaskUpdateUnoAccount *this)
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
bdLoginTaskUpdateUnoAccount::updateUnoStatus
==============
*/
void bdLoginTaskUpdateUnoAccount::updateUnoStatus(bdLoginTaskUpdateUnoAccount *this, const char *messageInfo, const bdLoginTaskUpdateUnoAccount::UpdateUnoAccountStatusCode *code)
{
  double ElapsedTimeInSeconds; 

  bdHandleAssert(messageInfo != NULL, "(messageInfo != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskupdateunoaccount.cpp", "bdLoginTaskUpdateUnoAccount::updateUnoStatus", 0x113u, "Must provide valid message to update uno task status!");
  this->m_unoStatusCode = *code;
  bdStrlcpy(this->m_unoStatusMessage, messageInfo, 0x400ui64);
  if ( (unsigned int)(*code - 3) <= 2 )
  {
    ElapsedTimeInSeconds = bdStopwatch::getElapsedTimeInSeconds(&this->m_taskTimer);
    bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskupdateunoaccount.cpp", "bdLoginTaskUpdateUnoAccount::updateUnoStatus", 0x11Bu, "Task finished after %2.1f seconds", *(float *)&ElapsedTimeInSeconds);
  }
}

/*
==============
bdLoginTaskUpdateUnoAccount::updateUser
==============
*/
void bdLoginTaskUpdateUnoAccount::updateUser(bdLoginTaskUpdateUnoAccount *this, const bdUnoAccountInfo *accountInfo)
{
  bool v4; 
  size_t v5; 
  __int64 v6; 
  __int64 v7; 
  bool v8; 
  const char *Region; 
  bdEnvironment Environment; 
  const char *v11; 
  unsigned __int64 v12; 
  size_t v13; 
  const char *v14; 
  __int64 v15; 
  char *m_httpUnoRequest; 
  char *v17; 
  double ElapsedTimeInSeconds; 
  __int64 m_httpUnoRequestLength; 
  bdHTTP *v20; 
  bdHTTP *m_httpInterface; 
  unsigned int v22; 
  bdHTTP *v23; 
  bool (__fastcall *setHeader)(bdHTTP *, const char *, const unsigned __int64); 
  unsigned __int64 TransactionID; 
  const bdUmbrellaCrossplayAccessInfo *CrossplayAccessInfo; 
  unsigned __int64 v27; 
  bdJSONSerializer v28; 
  char v29[512]; 
  char buf[512]; 
  char v31[512]; 
  char buffer[6784]; 
  char v33[6784]; 

  memset_0(buffer, 0, sizeof(buffer));
  bdJSONSerializer::bdJSONSerializer(&v28, buffer, 0x1A80u);
  v4 = bdJSONSerializer::writeBeginObject(&v28);
  bdHandleAssert(accountInfo->m_email != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v5 = -1i64;
  v6 = -1i64;
  do
    ++v6;
  while ( accountInfo->m_email[v6] );
  if ( v6 )
    v4 = v4 && bdJSONSerializer::writeString(&v28, "email", accountInfo->m_email);
  bdHandleAssert(accountInfo->m_username != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v7 = -1i64;
  do
    ++v7;
  while ( accountInfo->m_username[v7] );
  if ( v7 )
  {
    if ( !v4 )
    {
LABEL_48:
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskupdateunoaccount.cpp", "bdLoginTaskUpdateUnoAccount::updateUser", 0xF6u, "Error serializing JSON, request cannot be sent.");
      goto LABEL_49;
    }
    v8 = !bdJSONSerializer::writeString(&v28, "userName", accountInfo->m_username);
  }
  else
  {
    v8 = !v4;
  }
  if ( v8 || !bdJSONSerializer::writeBoolean(&v28, "subscriptionOptIn", accountInfo->m_subscriptionOptIn) || !bdJSONSerializer::writeEndObject(&v28) )
    goto LABEL_48;
  Region = bdLoginConfig::getRegion((bdLoginConfig *)this->m_loginConfig);
  Environment = bdLoginResult::getEnvironment(this->m_loginResult);
  if ( *Region == aCn[0] && Region[1] == aCn[1] && Region[2] == aCn[2] )
  {
    bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
    v11 = "https:
    v12 = -1i64;
    do
      ++v12;
    while ( aHttpsUnoSCodQq[v12] );
  }
  else
  {
    bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
    v11 = "https:
    v12 = -1i64;
    do
      ++v12;
    while ( aHttpsSUnoDemon[v12] );
  }
  v13 = 511i64;
  if ( v12 < 0x1FF )
    v13 = v12;
  memcpy_0(v29, v11, v13);
  v29[v13] = 0;
  switch ( Environment )
  {
    case BD_ENVIRONMENT_DEV:
      goto LABEL_31;
    case BD_ENVIRONMENT_CERT:
      v14 = "cert";
      break;
    case BD_ENVIRONMENT_PROD:
      v14 = "prod";
      break;
    default:
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\helpers\\bdloginutils.h", "bdLoginUtils::getUnoUrl", 0xA6u, "Unknown environment (%u): Defaulting to DEV Uno URL", Environment);
LABEL_31:
      v14 = "dev";
      break;
  }
  bdSnprintf(buf, 0x200ui64, v29, v14);
  bdSnprintf(v31, 0x200ui64, "%s/users/%I64u/securedfields/?client=%s", buf, accountInfo->m_userID, this->m_loginResult->m_clientID);
  bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskupdateunoaccount.cpp", "bdLoginTaskUpdateUnoAccount::updateUser", 0xD2u, "Update Uno Account URL : %s", v31);
  bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v15 = -1i64;
  do
    ++v15;
  while ( buffer[v15] );
  m_httpUnoRequest = this->m_httpUnoRequest;
  if ( m_httpUnoRequest )
  {
    bdMemory::deallocate(m_httpUnoRequest);
    this->m_httpUnoRequest = NULL;
  }
  this->m_httpUnoRequestLength = v15 + 1;
  v17 = (char *)bdMemory::allocate((unsigned int)(v15 + 1));
  this->m_httpUnoRequest = v17;
  if ( v17 )
  {
    m_httpUnoRequestLength = this->m_httpUnoRequestLength;
    bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
    do
      ++v5;
    while ( buffer[v5] );
    if ( m_httpUnoRequestLength )
    {
      if ( v5 >= m_httpUnoRequestLength - 1 )
        v5 = m_httpUnoRequestLength - 1;
      memcpy_0(v17, buffer, v5);
      v17[v5] = 0;
    }
    bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskupdateunoaccount.cpp", "bdLoginTaskUpdateUnoAccount::updateUser", 0xDEu, "HTTP Request Params: %s", this->m_httpUnoRequest);
    v20 = bdHTTPUtility::newHTTP(0, 0);
    this->m_httpInterface = v20;
    ((void (__fastcall *)(bdHTTP *, __int64, char *))v20->initRequest)(v20, 4i64, v31);
    m_httpInterface = this->m_httpInterface;
    v22 = bdJSONSerializer::length(&v28);
    bdHTTP::setUploadData(m_httpInterface, this->m_httpUnoRequest, v22);
    bdHTTP::setDownloadBuffer(this->m_httpInterface, this->m_httpUnoResponse, 0x1000u);
    this->m_httpInterface->setHeader(this->m_httpInterface, "Content-Type", "application/json");
    v23 = this->m_httpInterface;
    setHeader = v23->setHeader;
    TransactionID = bdLoginResult::getTransactionID(this->m_loginResult);
    setHeader(v23, "X-TransactionID", TransactionID);
    this->m_httpInterface->setHeader(this->m_httpInterface, "Accept", "application/json");
    CrossplayAccessInfo = bdLoginResult::getCrossplayAccessInfo(this->m_loginResult);
    bdSnprintf(v33, 0x1A80ui64, "Bearer  %s", CrossplayAccessInfo->m_accessToken);
    this->m_httpInterface->setHeader(this->m_httpInterface, "Authorization", v33);
    bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskupdateunoaccount.cpp", "bdLoginTaskUpdateUnoAccount::updateUser", 0xEDu, "Setting state to UPDATING_UNO_ACCOUNT");
    bdHandleAssert(1, "(messageInfo != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskupdateunoaccount.cpp", "bdLoginTaskUpdateUnoAccount::updateUnoStatus", 0x113u, "Must provide valid message to update uno task status!");
    this->m_unoStatusCode = NOT_CONNECTED;
    bdStrlcpy(this->m_unoStatusMessage, "Creating Uno account", 0x400ui64);
    v27 = bdLoginResult::getTransactionID(this->m_loginResult);
    bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskupdateunoaccount.cpp", "bdLoginTaskUpdateUnoAccount::updateUser", 0xF2u, "Started call to bdLoginTaskUpdateUnoAccount::updateAccount. TransactionID: (%I64u)", v27);
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskupdateunoaccount.cpp", "bdLoginTaskUpdateUnoAccount::updateUser", 0xD8u, "Failed to create task buffer");
    bdHandleAssert(1, "(messageInfo != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskupdateunoaccount.cpp", "bdLoginTaskUpdateUnoAccount::updateUnoStatus", 0x113u, "Must provide valid message to update uno task status!");
    this->m_unoStatusCode = WAITING_FOR_REPORT_CONSOLE_DETAILS;
    bdStrlcpy(this->m_unoStatusMessage, "Failed to create task buffer", 0x400ui64);
    ElapsedTimeInSeconds = bdStopwatch::getElapsedTimeInSeconds(&this->m_taskTimer);
    bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskupdateunoaccount.cpp", "bdLoginTaskUpdateUnoAccount::updateUnoStatus", 0x11Bu, "Task finished after %2.1f seconds", *(float *)&ElapsedTimeInSeconds);
  }
LABEL_49:
  bdJSONSerializer::~bdJSONSerializer(&v28);
}

