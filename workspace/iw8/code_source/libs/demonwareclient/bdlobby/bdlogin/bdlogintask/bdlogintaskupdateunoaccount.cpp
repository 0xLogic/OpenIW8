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
  bdHTTP *m_httpInterface; 
  bdHTTP *v5; 
  char *m_httpUnoRequest; 
  double v7; 

  bdHandleAssert(1, "(messageInfo != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskupdateunoaccount.cpp", "bdLoginTaskUpdateUnoAccount::updateUnoStatus", 0x113u, "Must provide valid message to update uno task status!");
  this->m_unoStatusCode = WAITING_FOR_REPORT_CONSOLE_DETAILS;
  bdStrlcpy(this->m_unoStatusMessage, "UnoAccount task aborted", 0x400ui64);
  *(double *)&_XMM0 = bdStopwatch::getElapsedTimeInSeconds(&this->m_taskTimer);
  __asm
  {
    vcvtss2sd xmm1, xmm0, xmm0
    vmovsd  [rsp+48h+var_10], xmm1
  }
  bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskupdateunoaccount.cpp", "bdLoginTaskUpdateUnoAccount::updateUnoStatus", 0x11Bu, "Task finished after %2.1f seconds", v7);
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
  char v5; 
  unsigned int i; 
  bool Object; 
  bool v9; 
  unsigned __int64 v10; 
  size_t v11; 
  double v14; 
  double v15; 
  unsigned int errorCode; 
  bdJSONDeserializer v17; 
  bdJSONDeserializer v18; 
  bdJSONDeserializer value; 
  __int64 v20; 
  char v21[32]; 
  char v22[8]; 
  char v23[8]; 
  char buf[1024]; 

  v20 = -2i64;
  bdJSONDeserializer::bdJSONDeserializer(&value);
  if ( bdJSONDeserializer::hasKey((bdJSONDeserializer *)responseJSON, "error") && bdJSONDeserializer::getObject((bdJSONDeserializer *)responseJSON, "error", &value) )
  {
    bdJSONDeserializer::bdJSONDeserializer(&v18);
    if ( bdJSONDeserializer::hasKey(&value, "context") && bdJSONDeserializer::getArray(&value, "context", &v18) )
    {
      bdJSONDeserializer::bdJSONDeserializer(&v17);
      v5 = 0;
      memset_0(this->m_unoStatusMessage, 0, sizeof(this->m_unoStatusMessage));
      for ( i = 0; i < v18.m_count; ++i )
      {
        memset_0(buf, 0, sizeof(buf));
        Object = bdJSONDeserializer::getObject(&v18, i, &v17);
        errorCode = 0;
        if ( bdJSONDeserializer::hasKey(&v17, "code") )
        {
          Object = Object && bdJSONDeserializer::getUInt32(&v17, "code", &errorCode);
        }
        else
        {
          bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskupdateunoaccount.cpp", "bdLoginTaskUpdateUnoAccount::processUnoErrorJSON", 0x60u, "Unable to retrieve error code from Uno account update response");
          errorCode = 1;
        }
        this->m_loginResult->m_taskErrorCode = bdLoginUtils::convertUnoErrorCode(errorCode);
        if ( errorCode == 214600 || errorCode == 213000 || errorCode == 214000 || errorCode == 214500 || errorCode == 214700 || errorCode == 220000 || errorCode == 244000 )
          v5 = 1;
        if ( bdJSONDeserializer::hasKey(&v17, "msg") )
        {
          Object = Object && bdJSONDeserializer::getString(&v17, "msg", v22, 0x80u);
        }
        else
        {
          bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
          __asm
          {
            vmovsd  xmm0, qword ptr cs:aUknownError; "Uknown Error"
            vmovsd  qword ptr [rbp+490h+var_4C0], xmm0
          }
          strcpy(v23, "rror");
        }
        if ( bdJSONDeserializer::hasKey(&v17, "field") )
        {
          if ( !Object )
            goto LABEL_33;
          v9 = !bdJSONDeserializer::getString(&v17, "field", v21, 0x12u);
        }
        else
        {
          bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
          strcpy(v21, "Unknown");
          v9 = !Object;
        }
        if ( v9 )
        {
LABEL_33:
          bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
          v10 = -1i64;
          do
            ++v10;
          while ( aCouldNotRetrie_1[v10] );
          if ( this != (bdLoginTaskUpdateUnoAccount *)-4168i64 )
          {
            v11 = 1023i64;
            if ( v10 < 0x3FF )
              v11 = v10;
            memcpy_0(this->m_unoStatusMessage, "Could not retrieve context message, field, or code from Uno response.", v11);
            this->m_unoStatusMessage[v11] = 0;
          }
          bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskupdateunoaccount.cpp", "bdLoginTaskUpdateUnoAccount::processUnoErrorJSON", 0x94u, this->m_unoStatusMessage);
          break;
        }
        bdSnprintf(buf, 0x400ui64, "Invalid Field: %s - Message: %s;", v21, v22);
        bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskupdateunoaccount.cpp", "bdLoginTaskUpdateUnoAccount::processUnoErrorJSON", 0x89u, buf);
        bdSnprintf(this->m_unoStatusMessage, 0x400ui64, "%sInvalid Field: %s - Message: %s;", this->m_unoStatusMessage, v21, v22);
      }
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskupdateunoaccount.cpp", "bdLoginTaskUpdateUnoAccount::processUnoErrorJSON", 0x97u, "Finished parsing Uno update account error JSON, view loginStatus for full info");
      if ( v5 )
      {
        bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskupdateunoaccount.cpp", "bdLoginTaskUpdateUnoAccount::processUnoErrorJSON", 0x9Cu, "Parsed a user input error, so fast failing from Update Uno Account Task");
        errorCode = 5;
      }
      else
      {
        errorCode = 3;
      }
      bdLoginTaskUpdateUnoAccount::updateUnoStatus(this, this->m_unoStatusMessage, (const bdLoginTaskUpdateUnoAccount::UpdateUnoAccountStatusCode *)&errorCode);
      bdJSONDeserializer::~bdJSONDeserializer(&v17);
    }
    else
    {
      bdHandleAssert(1, "(messageInfo != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskupdateunoaccount.cpp", "bdLoginTaskUpdateUnoAccount::updateUnoStatus", 0x113u, "Must provide valid message to update uno task status!");
      this->m_unoStatusCode = WAITING_FOR_REPORT_CONSOLE_DETAILS;
      bdStrlcpy(this->m_unoStatusMessage, "Could not retrieve error context information from Uno response.", 0x400ui64);
      *(double *)&_XMM0 = bdStopwatch::getElapsedTimeInSeconds(&this->m_taskTimer);
      __asm
      {
        vcvtss2sd xmm1, xmm0, xmm0
        vmovsd  [rsp+590h+var_558], xmm1
      }
      bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskupdateunoaccount.cpp", "bdLoginTaskUpdateUnoAccount::updateUnoStatus", 0x11Bu, "Task finished after %2.1f seconds", v14);
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskupdateunoaccount.cpp", "bdLoginTaskUpdateUnoAccount::processUnoErrorJSON", 0xA8u, "Could not retrieve error context information from Uno response.");
    }
    bdJSONDeserializer::~bdJSONDeserializer(&v18);
  }
  else
  {
    bdHandleAssert(1, "(messageInfo != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskupdateunoaccount.cpp", "bdLoginTaskUpdateUnoAccount::updateUnoStatus", 0x113u, "Must provide valid message to update uno task status!");
    this->m_unoStatusCode = WAITING_FOR_REPORT_CONSOLE_DETAILS;
    bdStrlcpy(this->m_unoStatusMessage, "Could not retrieve error information from Uno response.", 0x400ui64);
    *(double *)&_XMM0 = bdStopwatch::getElapsedTimeInSeconds(&this->m_taskTimer);
    __asm
    {
      vcvtss2sd xmm1, xmm0, xmm0
      vmovsd  [rsp+590h+var_558], xmm1
    }
    bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskupdateunoaccount.cpp", "bdLoginTaskUpdateUnoAccount::updateUnoStatus", 0x11Bu, "Task finished after %2.1f seconds", v15);
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
  unsigned int v3; 
  double v6; 
  unsigned int v7; 
  double v8; 
  bdJSONDeserializer responseJSON; 

  bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskupdateunoaccount.cpp", "bdLoginTaskUpdateUnoAccount::processUnoReply", 0x22u, "Processing bdLogin Uno Account Creation task reply");
  v3 = this->m_httpInterface->getLastHTTPStatus(this->m_httpInterface);
  if ( v3 == 200 )
  {
    bdHandleAssert(1, "(messageInfo != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskupdateunoaccount.cpp", "bdLoginTaskUpdateUnoAccount::updateUnoStatus", 0x113u, "Must provide valid message to update uno task status!");
    this->m_unoStatusCode = CONNECTED;
    bdStrlcpy(this->m_unoStatusMessage, "Updated Account", 0x400ui64);
    *(double *)&_XMM0 = bdStopwatch::getElapsedTimeInSeconds(&this->m_taskTimer);
    __asm
    {
      vcvtss2sd xmm1, xmm0, xmm0
      vmovsd  [rsp+78h+var_40], xmm1
    }
    bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskupdateunoaccount.cpp", "bdLoginTaskUpdateUnoAccount::updateUnoStatus", 0x11Bu, "Task finished after %2.1f seconds", v6);
  }
  else
  {
    v7 = v3;
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskupdateunoaccount.cpp", "bdLoginTaskUpdateUnoAccount::processUnoReply", 0x2Bu, "Uno task failed with HTTP code [%u]", v7);
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
      *(double *)&_XMM0 = bdStopwatch::getElapsedTimeInSeconds(&this->m_taskTimer);
      __asm
      {
        vcvtss2sd xmm1, xmm0, xmm0
        vmovsd  [rsp+78h+var_40], xmm1
      }
      bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskupdateunoaccount.cpp", "bdLoginTaskUpdateUnoAccount::updateUnoStatus", 0x11Bu, "Task finished after %2.1f seconds", v8);
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
  double v8; 

  bdHandleAssert(messageInfo != NULL, "(messageInfo != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskupdateunoaccount.cpp", "bdLoginTaskUpdateUnoAccount::updateUnoStatus", 0x113u, "Must provide valid message to update uno task status!");
  this->m_unoStatusCode = *code;
  bdStrlcpy(this->m_unoStatusMessage, messageInfo, 0x400ui64);
  if ( (unsigned int)(*code - 3) <= 2 )
  {
    *(double *)&_XMM0 = bdStopwatch::getElapsedTimeInSeconds(&this->m_taskTimer);
    __asm
    {
      vcvtss2sd xmm1, xmm0, xmm0
      vmovsd  [rsp+48h+var_10], xmm1
    }
    bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskupdateunoaccount.cpp", "bdLoginTaskUpdateUnoAccount::updateUnoStatus", 0x11Bu, "Task finished after %2.1f seconds", v8);
  }
}

/*
==============
bdLoginTaskUpdateUnoAccount::updateUser
==============
*/
void bdLoginTaskUpdateUnoAccount::updateUser(bdLoginTaskUpdateUnoAccount *this, const bdUnoAccountInfo *accountInfo)
{
  bool v5; 
  size_t v6; 
  __int64 v7; 
  __int64 v8; 
  bool v9; 
  const char *Region; 
  bdEnvironment Environment; 
  const char *v12; 
  unsigned __int64 v13; 
  size_t v14; 
  const char *v15; 
  __int64 v16; 
  char *m_httpUnoRequest; 
  char *v18; 
  __int64 m_httpUnoRequestLength; 
  bdHTTP *v21; 
  bdHTTP *m_httpInterface; 
  unsigned int v23; 
  bdHTTP *v24; 
  bool (__fastcall *setHeader)(bdHTTP *, const char *, const unsigned __int64); 
  unsigned __int64 TransactionID; 
  const bdUmbrellaCrossplayAccessInfo *CrossplayAccessInfo; 
  __int64 v28; 
  unsigned __int64 v29; 
  bdJSONSerializer v30; 
  char v31[512]; 
  char buf[512]; 
  char v33[512]; 
  char buffer[6784]; 
  char v35[6784]; 

  memset_0(buffer, 0, sizeof(buffer));
  bdJSONSerializer::bdJSONSerializer(&v30, buffer, 0x1A80u);
  v5 = bdJSONSerializer::writeBeginObject(&v30);
  bdHandleAssert(accountInfo->m_email != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v6 = -1i64;
  v7 = -1i64;
  do
    ++v7;
  while ( accountInfo->m_email[v7] );
  if ( v7 )
    v5 = v5 && bdJSONSerializer::writeString(&v30, "email", accountInfo->m_email);
  bdHandleAssert(accountInfo->m_username != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v8 = -1i64;
  do
    ++v8;
  while ( accountInfo->m_username[v8] );
  if ( v8 )
  {
    if ( !v5 )
    {
LABEL_48:
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskupdateunoaccount.cpp", "bdLoginTaskUpdateUnoAccount::updateUser", 0xF6u, "Error serializing JSON, request cannot be sent.");
      goto LABEL_49;
    }
    v9 = !bdJSONSerializer::writeString(&v30, "userName", accountInfo->m_username);
  }
  else
  {
    v9 = !v5;
  }
  if ( v9 || !bdJSONSerializer::writeBoolean(&v30, "subscriptionOptIn", accountInfo->m_subscriptionOptIn) || !bdJSONSerializer::writeEndObject(&v30) )
    goto LABEL_48;
  Region = bdLoginConfig::getRegion((bdLoginConfig *)this->m_loginConfig);
  Environment = bdLoginResult::getEnvironment(this->m_loginResult);
  if ( *Region == aCn[0] && Region[1] == aCn[1] && Region[2] == aCn[2] )
  {
    bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
    v12 = "https:
    v13 = -1i64;
    do
      ++v13;
    while ( aHttpsUnoSCodQq[v13] );
  }
  else
  {
    bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
    v12 = "https:
    v13 = -1i64;
    do
      ++v13;
    while ( aHttpsSUnoDemon[v13] );
  }
  v14 = 511i64;
  if ( v13 < 0x1FF )
    v14 = v13;
  memcpy_0(v31, v12, v14);
  v31[v14] = 0;
  switch ( Environment )
  {
    case BD_ENVIRONMENT_DEV:
      goto LABEL_31;
    case BD_ENVIRONMENT_CERT:
      v15 = "cert";
      break;
    case BD_ENVIRONMENT_PROD:
      v15 = "prod";
      break;
    default:
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\helpers\\bdloginutils.h", "bdLoginUtils::getUnoUrl", 0xA6u, "Unknown environment (%u): Defaulting to DEV Uno URL", Environment);
LABEL_31:
      v15 = "dev";
      break;
  }
  bdSnprintf(buf, 0x200ui64, v31, v15);
  bdSnprintf(v33, 0x200ui64, "%s/users/%I64u/securedfields/?client=%s", buf, accountInfo->m_userID, this->m_loginResult->m_clientID);
  bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskupdateunoaccount.cpp", "bdLoginTaskUpdateUnoAccount::updateUser", 0xD2u, "Update Uno Account URL : %s", v33);
  bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v16 = -1i64;
  do
    ++v16;
  while ( buffer[v16] );
  m_httpUnoRequest = this->m_httpUnoRequest;
  if ( m_httpUnoRequest )
  {
    bdMemory::deallocate(m_httpUnoRequest);
    this->m_httpUnoRequest = NULL;
  }
  this->m_httpUnoRequestLength = v16 + 1;
  v18 = (char *)bdMemory::allocate((unsigned int)(v16 + 1));
  this->m_httpUnoRequest = v18;
  if ( v18 )
  {
    m_httpUnoRequestLength = this->m_httpUnoRequestLength;
    bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
    do
      ++v6;
    while ( buffer[v6] );
    if ( m_httpUnoRequestLength )
    {
      if ( v6 >= m_httpUnoRequestLength - 1 )
        v6 = m_httpUnoRequestLength - 1;
      memcpy_0(v18, buffer, v6);
      v18[v6] = 0;
    }
    bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskupdateunoaccount.cpp", "bdLoginTaskUpdateUnoAccount::updateUser", 0xDEu, "HTTP Request Params: %s", this->m_httpUnoRequest);
    v21 = bdHTTPUtility::newHTTP(0, 0);
    this->m_httpInterface = v21;
    ((void (__fastcall *)(bdHTTP *, __int64, char *))v21->initRequest)(v21, 4i64, v33);
    m_httpInterface = this->m_httpInterface;
    v23 = bdJSONSerializer::length(&v30);
    bdHTTP::setUploadData(m_httpInterface, this->m_httpUnoRequest, v23);
    bdHTTP::setDownloadBuffer(this->m_httpInterface, this->m_httpUnoResponse, 0x1000u);
    this->m_httpInterface->setHeader(this->m_httpInterface, "Content-Type", "application/json");
    v24 = this->m_httpInterface;
    setHeader = v24->setHeader;
    TransactionID = bdLoginResult::getTransactionID(this->m_loginResult);
    setHeader(v24, "X-TransactionID", TransactionID);
    this->m_httpInterface->setHeader(this->m_httpInterface, "Accept", "application/json");
    CrossplayAccessInfo = bdLoginResult::getCrossplayAccessInfo(this->m_loginResult);
    bdSnprintf(v35, 0x1A80ui64, "Bearer  %s", CrossplayAccessInfo->m_accessToken);
    this->m_httpInterface->setHeader(this->m_httpInterface, "Authorization", v35);
    bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskupdateunoaccount.cpp", "bdLoginTaskUpdateUnoAccount::updateUser", 0xEDu, "Setting state to UPDATING_UNO_ACCOUNT");
    bdHandleAssert(1, "(messageInfo != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskupdateunoaccount.cpp", "bdLoginTaskUpdateUnoAccount::updateUnoStatus", 0x113u, "Must provide valid message to update uno task status!");
    this->m_unoStatusCode = NOT_CONNECTED;
    bdStrlcpy(this->m_unoStatusMessage, "Creating Uno account", 0x400ui64);
    v29 = bdLoginResult::getTransactionID(this->m_loginResult);
    bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskupdateunoaccount.cpp", "bdLoginTaskUpdateUnoAccount::updateUser", 0xF2u, "Started call to bdLoginTaskUpdateUnoAccount::updateAccount. TransactionID: (%I64u)", v29);
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskupdateunoaccount.cpp", "bdLoginTaskUpdateUnoAccount::updateUser", 0xD8u, "Failed to create task buffer");
    bdHandleAssert(1, "(messageInfo != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskupdateunoaccount.cpp", "bdLoginTaskUpdateUnoAccount::updateUnoStatus", 0x113u, "Must provide valid message to update uno task status!");
    this->m_unoStatusCode = WAITING_FOR_REPORT_CONSOLE_DETAILS;
    bdStrlcpy(this->m_unoStatusMessage, "Failed to create task buffer", 0x400ui64);
    *(double *)&_XMM0 = bdStopwatch::getElapsedTimeInSeconds(&this->m_taskTimer);
    __asm
    {
      vcvtss2sd xmm1, xmm0, xmm0
      vmovsd  [rsp+3CA0h+var_3C68], xmm1
    }
    bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskupdateunoaccount.cpp", "bdLoginTaskUpdateUnoAccount::updateUnoStatus", 0x11Bu, "Task finished after %2.1f seconds", v28);
  }
LABEL_49:
  bdJSONSerializer::~bdJSONSerializer(&v30);
}

