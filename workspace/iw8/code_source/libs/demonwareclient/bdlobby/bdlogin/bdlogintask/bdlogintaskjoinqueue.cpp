/*
==============
bdLoginTaskJoinQueue::pump
==============
*/

void __fastcall bdLoginTaskJoinQueue::pump(bdLoginTaskJoinQueue *this)
{
  ?pump@bdLoginTaskJoinQueue@@UEAAXXZ(this);
}

/*
==============
bdLoginTaskJoinQueue::~bdLoginTaskJoinQueue
==============
*/

void __fastcall bdLoginTaskJoinQueue::~bdLoginTaskJoinQueue(bdLoginTaskJoinQueue *this)
{
  ??1bdLoginTaskJoinQueue@@UEAA@XZ(this);
}

/*
==============
bdLoginTaskJoinQueue::abortTask
==============
*/

void __fastcall bdLoginTaskJoinQueue::abortTask(bdLoginTaskJoinQueue *this)
{
  ?abortTask@bdLoginTaskJoinQueue@@UEAAXXZ(this);
}

/*
==============
bdLoginTaskJoinQueue::getLoginqueueRecord
==============
*/

bdLoginQueueRecord *__fastcall bdLoginTaskJoinQueue::getLoginqueueRecord(bdLoginTaskJoinQueue *this, bdLoginQueueRecord *result)
{
  return ?getLoginqueueRecord@bdLoginTaskJoinQueue@@QEBA?AVbdLoginQueueRecord@@XZ(this, result);
}

/*
==============
bdLoginTaskJoinQueue::buildLoginQueueReq
==============
*/

bool __fastcall bdLoginTaskJoinQueue::buildLoginQueueReq(bdLoginTaskJoinQueue *this)
{
  return ?buildLoginQueueReq@bdLoginTaskJoinQueue@@QEAA_NXZ(this);
}

/*
==============
bdLoginTaskJoinQueue::resetHttpInterface
==============
*/

void __fastcall bdLoginTaskJoinQueue::resetHttpInterface(bdLoginTaskJoinQueue *this)
{
  ?resetHttpInterface@bdLoginTaskJoinQueue@@QEAAXXZ(this);
}

/*
==============
bdLoginTaskJoinQueue::getTaskCode
==============
*/

bdLoginTaskJoinQueue::JoinQueueState __fastcall bdLoginTaskJoinQueue::getTaskCode(bdLoginTaskJoinQueue *this)
{
  return ?getTaskCode@bdLoginTaskJoinQueue@@QEBA?AW4JoinQueueState@1@XZ(this);
}

/*
==============
bdLoginTaskJoinQueue::reset
==============
*/

void __fastcall bdLoginTaskJoinQueue::reset(bdLoginTaskJoinQueue *this)
{
  ?reset@bdLoginTaskJoinQueue@@UEAAXXZ(this);
}

/*
==============
bdLoginTaskJoinQueue::getQueueMemberStatus
==============
*/

bdLoginTaskJoinQueue::bdQueueMemberStatus __fastcall bdLoginTaskJoinQueue::getQueueMemberStatus(bdLoginTaskJoinQueue *this)
{
  return ?getQueueMemberStatus@bdLoginTaskJoinQueue@@QEBA?AW4bdQueueMemberStatus@1@XZ(this);
}

/*
==============
bdLoginTaskJoinQueue::updateJoinQueueStatus
==============
*/

void __fastcall bdLoginTaskJoinQueue::updateJoinQueueStatus(bdLoginTaskJoinQueue *this, const char *messageInfo, const bdLoginTaskJoinQueue::JoinQueueState *code)
{
  ?updateJoinQueueStatus@bdLoginTaskJoinQueue@@QEAAXPEBDAEBW4JoinQueueState@1@@Z(this, messageInfo, code);
}

/*
==============
bdLoginTaskJoinQueue::bdLoginTaskJoinQueue
==============
*/

void __fastcall bdLoginTaskJoinQueue::bdLoginTaskJoinQueue(bdLoginTaskJoinQueue *this, const bdLoginConfig *loginConfig, bdLoginResult *loginResult)
{
  ??0bdLoginTaskJoinQueue@@QEAA@PEBVbdLoginConfig@@PEAVbdLoginResult@@@Z(this, loginConfig, loginResult);
}

/*
==============
bdLoginTaskJoinQueue::_updateJoinUrlString
==============
*/

bool __fastcall bdLoginTaskJoinQueue::_updateJoinUrlString(bdLoginTaskJoinQueue *this)
{
  return ?_updateJoinUrlString@bdLoginTaskJoinQueue@@QEAA_NXZ(this);
}

/*
==============
bdLoginTaskJoinQueue::processLoginQueueReply
==============
*/

void __fastcall bdLoginTaskJoinQueue::processLoginQueueReply(bdLoginTaskJoinQueue *this)
{
  ?processLoginQueueReply@bdLoginTaskJoinQueue@@QEAAXXZ(this);
}

/*
==============
bdLoginTaskJoinQueue::getTaskMessage
==============
*/

const char *__fastcall bdLoginTaskJoinQueue::getTaskMessage(bdLoginTaskJoinQueue *this)
{
  return ?getTaskMessage@bdLoginTaskJoinQueue@@UEBAPEBDXZ(this);
}

/*
==============
bdLoginTaskJoinQueue::setTicketHeaders
==============
*/

bool __fastcall bdLoginTaskJoinQueue::setTicketHeaders(bdLoginTaskJoinQueue *this)
{
  return ?setTicketHeaders@bdLoginTaskJoinQueue@@QEAA_NXZ(this);
}

/*
==============
bdLoginTaskJoinQueue::getURLString
==============
*/

const char *__fastcall bdLoginTaskJoinQueue::getURLString(bdLoginTaskJoinQueue *this)
{
  return ?getURLString@bdLoginTaskJoinQueue@@QEBAPEBDXZ(this);
}

/*
==============
bdLoginTaskJoinQueue::bdLoginTaskJoinQueue
==============
*/
void bdLoginTaskJoinQueue::bdLoginTaskJoinQueue(bdLoginTaskJoinQueue *this, const bdLoginConfig *loginConfig, bdLoginResult *loginResult)
{
  this->__vftable = (bdLoginTaskJoinQueue_vtbl *)&bdLoginTask::`vftable';
  bdStopwatch::bdStopwatch(&this->m_taskTimer);
  this->m_loginConfig = loginConfig;
  this->m_loginResult = loginResult;
  this->m_firstPartyTokenStatusCode = FETCHING_FIRST_PARTY_TOKEN;
  this->__vftable = (bdLoginTaskJoinQueue_vtbl *)&bdLoginTaskJoinQueue::`vftable';
  bdLoginQueueTicket::bdLoginQueueTicket(&this->m_clientToLoginQueueTicket);
  bdLoginQueueRecord::bdLoginQueueRecord(&this->m_loginQueueRecord);
  *(_QWORD *)&this->m_loginQueueToClientInfo.m_titleID = 0i64;
  this->m_loginQueueToClientInfo.m_userID = 0i64;
  this->m_loginQueueToClientInfo.m_authSessionKeyKDF = 0;
  memset_0(this->m_loginQueueToClientInfo.m_data, 0, 0x98ui64);
  *(_QWORD *)this->m_loginQueueToClientInfo.m_accountType = 0i64;
  *(_WORD *)&this->m_loginQueueToClientInfo.m_accountType[8] = 0;
  *(_QWORD *)this->m_loginQueueToClientInfo.m_clientID = 0i64;
  *(_QWORD *)&this->m_loginQueueToClientInfo.m_clientID[8] = 0i64;
  *(_QWORD *)&this->m_loginQueueToClientInfo.m_clientID[16] = 0i64;
  *(_QWORD *)&this->m_loginQueueToClientInfo.m_clientID[24] = 0i64;
  *(_QWORD *)&this->m_loginQueueToClientInfo.m_clientID[32] = 0i64;
  *(_QWORD *)&this->m_loginQueueToClientInfo.m_clientID[40] = 0i64;
  *(_QWORD *)&this->m_loginQueueToClientInfo.m_clientID[48] = 0i64;
  *(_QWORD *)&this->m_loginQueueToClientInfo.m_clientID[56] = 0i64;
  this->m_httpInterface = NULL;
  memset_0(this->m_urlString, 0, sizeof(this->m_urlString));
  memset_0(this->m_httpLoginQueueReply, 0, sizeof(this->m_httpLoginQueueReply));
  bdHandleAssert(1, "(messageInfo != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskjoinqueue.cpp", "bdLoginTaskJoinQueue::updateJoinQueueStatus", 0x189u, "Must provide valid message to update auth task status!", -2i64);
  this->m_queueStatus = UNINITIALIZED;
  bdStrlcpy(this->m_queueStatusMessage, (const char *const)&queryFormat.fmt + 3, 0x400ui64);
  this->m_loginQueueRecord.m_estimatedWaitTimeMilliseconds = 0i64;
}

/*
==============
bdLoginTaskJoinQueue::~bdLoginTaskJoinQueue
==============
*/
void bdLoginTaskJoinQueue::~bdLoginTaskJoinQueue(bdLoginTaskJoinQueue *this)
{
  bdHTTP *m_httpInterface; 
  bdHTTP *v3; 

  this->__vftable = (bdLoginTaskJoinQueue_vtbl *)&bdLoginTaskJoinQueue::`vftable';
  m_httpInterface = this->m_httpInterface;
  if ( m_httpInterface )
  {
    m_httpInterface->abortOperation(m_httpInterface);
    v3 = this->m_httpInterface;
    if ( v3 )
      ((void (__fastcall *)(bdHTTP *, __int64))v3->~bdHTTP)(v3, 1i64);
    this->m_httpInterface = NULL;
  }
  bdLoginQueueRecord::~bdLoginQueueRecord(&this->m_loginQueueRecord);
  bdLoginQueueTicket::~bdLoginQueueTicket(&this->m_clientToLoginQueueTicket);
  this->__vftable = (bdLoginTaskJoinQueue_vtbl *)&bdLoginTask::`vftable';
}

/*
==============
bdLoginTaskJoinQueue::_updateJoinUrlString
==============
*/
char bdLoginTaskJoinQueue::_updateJoinUrlString(bdLoginTaskJoinQueue *this)
{
  const char *GameID; 
  const char *Region; 
  unsigned __int64 FirstPartyUserID; 
  unsigned int format; 
  int EffectiveQueueID; 
  bdEnvironment env[4]; 
  char url[512]; 

  GameID = bdLoginConfig::getGameID((bdLoginConfig *)this->m_loginConfig);
  Region = bdLoginConfig::getRegion((bdLoginConfig *)this->m_loginConfig);
  env[0] = bdLoginResult::getEnvironment(this->m_loginResult);
  bdLoginUtils::getLoginQueueUrl((char (*)[512])url, env, Region, GameID);
  FirstPartyUserID = bdLoginResult::getFirstPartyUserID(this->m_loginResult);
  EffectiveQueueID = bdLoginConfig::getEffectiveQueueID((bdLoginConfig *)this->m_loginConfig);
  format = this->m_loginResult->m_titleID;
  bdSnprintf(this->m_urlString, 0x200ui64, "%s:
  bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskjoinqueue.cpp", "bdLoginTaskJoinQueue::_updateJoinUrlString", 0x112u, "Login Queue URL [%s]", this->m_urlString);
  return 1;
}

/*
==============
bdLoginTaskJoinQueue::abortTask
==============
*/
void bdLoginTaskJoinQueue::abortTask(bdLoginTaskJoinQueue *this)
{
  double ElapsedTimeInSeconds; 
  bdHTTP *m_httpInterface; 
  bdHTTP *v4; 

  bdHandleAssert(1, "(messageInfo != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskjoinqueue.cpp", "bdLoginTaskJoinQueue::updateJoinQueueStatus", 0x189u, "Must provide valid message to update auth task status!");
  this->m_queueStatus = CONNECTED;
  bdStrlcpy(this->m_queueStatusMessage, (const char *const)&queryFormat.fmt + 3, 0x400ui64);
  ElapsedTimeInSeconds = bdStopwatch::getElapsedTimeInSeconds(&this->m_taskTimer);
  bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskjoinqueue.cpp", "bdLoginTaskJoinQueue::updateJoinQueueStatus", 0x191u, "Task finished after %2.1f seconds", *(float *)&ElapsedTimeInSeconds);
  m_httpInterface = this->m_httpInterface;
  if ( m_httpInterface )
  {
    m_httpInterface->abortOperation(m_httpInterface);
    v4 = this->m_httpInterface;
    if ( v4 )
      ((void (__fastcall *)(bdHTTP *, __int64))v4->~bdHTTP)(v4, 1i64);
    this->m_httpInterface = NULL;
  }
}

/*
==============
bdLoginTaskJoinQueue::buildLoginQueueReq
==============
*/
char bdLoginTaskJoinQueue::buildLoginQueueReq(bdLoginTaskJoinQueue *this)
{
  bdHTTP *v2; 
  bdLoginResult *m_loginResult; 
  unsigned __int64 FirstPartyUserID; 
  bdLoginResult *v5; 
  const char *GameID; 
  const char *Region; 
  unsigned __int64 v8; 
  bdHTTP *m_httpInterface; 
  bool (__fastcall *setHeader)(bdHTTP *, const char *, const unsigned __int64); 
  unsigned __int64 TransactionID; 
  bool v12; 
  unsigned __int64 v13; 
  double ElapsedTimeInSeconds; 
  unsigned int format; 
  int EffectiveQueueID; 
  unsigned __int64 userID[2]; 
  char url[512]; 

  v2 = bdHTTPUtility::newHTTP(0, 0);
  m_loginResult = this->m_loginResult;
  this->m_httpInterface = v2;
  FirstPartyUserID = bdLoginResult::getFirstPartyUserID(m_loginResult);
  v5 = this->m_loginResult;
  userID[0] = FirstPartyUserID;
  bdLoginQueueTicket::setData(&this->m_clientToLoginQueueTicket, &v5->m_titleID, userID);
  GameID = bdLoginConfig::getGameID((bdLoginConfig *)this->m_loginConfig);
  Region = bdLoginConfig::getRegion((bdLoginConfig *)this->m_loginConfig);
  LODWORD(userID[0]) = bdLoginResult::getEnvironment(this->m_loginResult);
  bdLoginUtils::getLoginQueueUrl((char (*)[512])url, (const bdEnvironment *)userID, Region, GameID);
  v8 = bdLoginResult::getFirstPartyUserID(this->m_loginResult);
  EffectiveQueueID = bdLoginConfig::getEffectiveQueueID((bdLoginConfig *)this->m_loginConfig);
  format = this->m_loginResult->m_titleID;
  bdSnprintf(this->m_urlString, 0x200ui64, "%s:
  bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskjoinqueue.cpp", "bdLoginTaskJoinQueue::_updateJoinUrlString", 0x112u, "Login Queue URL [%s]", this->m_urlString);
  v12 = 0;
  if ( ((unsigned __int8 (__fastcall *)(bdHTTP *, __int64, char *))this->m_httpInterface->initRequest)(this->m_httpInterface, 4i64, this->m_urlString) )
  {
    if ( this->m_httpInterface->setHeader(this->m_httpInterface, "Content-Type", "application/json") )
    {
      m_httpInterface = this->m_httpInterface;
      setHeader = m_httpInterface->setHeader;
      TransactionID = bdLoginResult::getTransactionID(this->m_loginResult);
      if ( setHeader(m_httpInterface, "X-TransactionID", TransactionID) )
        v12 = 1;
    }
  }
  v13 = bdLoginResult::getTransactionID(this->m_loginResult);
  bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskjoinqueue.cpp", "bdLoginTaskJoinQueue::buildLoginQueueReq", 0x8Eu, "Transaction ID: %I64u).", v13);
  if ( v12 && bdLoginTaskJoinQueue::setTicketHeaders(this) && this->m_httpInterface->setUploadData(this->m_httpInterface, NULL, 0) && this->m_httpInterface->setHeader(this->m_httpInterface, "Content-Length", "0") && bdHTTP::setDownloadBuffer(this->m_httpInterface, this->m_httpLoginQueueReply, 0x400u) )
  {
    bdHandleAssert(1, "(messageInfo != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskjoinqueue.cpp", "bdLoginTaskJoinQueue::updateJoinQueueStatus", 0x189u, "Must provide valid message to update auth task status!");
    this->m_queueStatus = NOT_CONNECTED;
    bdStrlcpy(this->m_queueStatusMessage, "Setting state to READY", 0x400ui64);
    return 1;
  }
  else
  {
    bdHandleAssert(1, "(messageInfo != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskjoinqueue.cpp", "bdLoginTaskJoinQueue::updateJoinQueueStatus", 0x189u, "Must provide valid message to update auth task status!");
    this->m_queueStatus = CONNECTED;
    bdStrlcpy(this->m_queueStatusMessage, "Encountered error building join login queue request", 0x400ui64);
    ElapsedTimeInSeconds = bdStopwatch::getElapsedTimeInSeconds(&this->m_taskTimer);
    bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskjoinqueue.cpp", "bdLoginTaskJoinQueue::updateJoinQueueStatus", 0x191u, "Task finished after %2.1f seconds", *(float *)&ElapsedTimeInSeconds);
    return 0;
  }
}

/*
==============
bdLoginTaskJoinQueue::getLoginqueueRecord
==============
*/
bdLoginQueueRecord *bdLoginTaskJoinQueue::getLoginqueueRecord(bdLoginTaskJoinQueue *this, bdLoginQueueRecord *result)
{
  result->__vftable = (bdLoginQueueRecord_vtbl *)&bdLoginQueueRecord::`vftable';
  result->m_position = this->m_loginQueueRecord.m_position;
  result->m_estimatedWaitTimeSec = this->m_loginQueueRecord.m_estimatedWaitTimeSec;
  result->m_estimatedWaitTimeMilliseconds = this->m_loginQueueRecord.m_estimatedWaitTimeMilliseconds;
  result->m_nextPollAfterSec = this->m_loginQueueRecord.m_nextPollAfterSec;
  result->m_nextPollAfterMilliseconds = this->m_loginQueueRecord.m_nextPollAfterMilliseconds;
  result->m_ivSeed = this->m_loginQueueRecord.m_ivSeed;
  return result;
}

/*
==============
bdLoginTaskJoinQueue::getQueueMemberStatus
==============
*/
__int64 bdLoginTaskJoinQueue::getQueueMemberStatus(bdLoginTaskJoinQueue *this)
{
  return (unsigned int)this->m_queueMemberStatus;
}

/*
==============
bdLoginTaskJoinQueue::getTaskCode
==============
*/
__int64 bdLoginTaskJoinQueue::getTaskCode(bdLoginTaskJoinQueue *this)
{
  return (unsigned int)this->m_queueStatus;
}

/*
==============
bdLoginTaskJoinQueue::getTaskMessage
==============
*/
char *bdLoginTaskJoinQueue::getTaskMessage(bdLoginTaskJoinQueue *this)
{
  return this->m_queueStatusMessage;
}

/*
==============
bdLoginTaskJoinQueue::getURLString
==============
*/
char *bdLoginTaskJoinQueue::getURLString(bdLoginTaskJoinQueue *this)
{
  return this->m_urlString;
}

/*
==============
bdLoginTaskJoinQueue::processLoginQueueReply
==============
*/
void bdLoginTaskJoinQueue::processLoginQueueReply(bdLoginTaskJoinQueue *this)
{
  unsigned int v2; 
  bdHTTP *m_httpInterface; 
  int v4; 
  bdLobbyErrorCode v5; 
  bdLobbyErrorCode v6; 
  unsigned int v7; 
  bdLobbyErrorCode v8; 
  unsigned int v9; 
  bdLobbyErrorCode v10; 
  char v11; 
  bool v12; 
  bdLoginResult *m_loginResult; 
  __int64 v14; 
  unsigned int v15; 
  double ElapsedTimeInSeconds; 
  char *function; 
  bdLoginTaskJoinQueue::JoinQueueState code; 
  unsigned __int64 value; 
  unsigned __int64 v20; 
  bdJSONDeserializer responseJSON; 
  __int64 v22; 
  char src[208]; 

  v22 = -2i64;
  bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskjoinqueue.cpp", "bdLoginTaskJoinQueue::processLoginQueueReply", 0x119u, "Received reply from Demonware Login Queue server");
  v2 = this->m_httpInterface->getLastHTTPStatus(this->m_httpInterface);
  if ( v2 == 200 )
  {
    bdJSONDeserializer::bdJSONDeserializer(&responseJSON);
    if ( bdJSONDeserializer::parse(&responseJSON, this->m_httpLoginQueueReply) && bdLoginQueueRecord::deserialize(&this->m_loginQueueRecord, &responseJSON) )
    {
      value = 0i64;
      if ( bdJSONDeserializer::getUInt64(&responseJSON, "lsg_server_ticket_size", &value) )
      {
        v11 = 1;
        goto LABEL_30;
      }
    }
    else
    {
      value = 0i64;
    }
    v11 = 0;
LABEL_30:
    if ( !value )
    {
      this->m_queueMemberStatus = BD_JOINED;
      bdHandleAssert(1, "(messageInfo != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskjoinqueue.cpp", "bdLoginTaskJoinQueue::updateJoinQueueStatus", 0x189u, "Must provide valid message to update auth task status!");
      this->m_queueStatus = DISCONNECTED;
      bdStrlcpy(this->m_queueStatusMessage, "Successfully joined the Login Queue", 0x400ui64);
      ElapsedTimeInSeconds = bdStopwatch::getElapsedTimeInSeconds(&this->m_taskTimer);
      bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskjoinqueue.cpp", "bdLoginTaskJoinQueue::updateJoinQueueStatus", 0x191u, "Task finished after %2.1f seconds", *(float *)&ElapsedTimeInSeconds);
      goto LABEL_45;
    }
    memset_0(src, 0, 0xCDui64);
    v12 = v11 && bdJSONDeserializer::getString(&responseJSON, "lsg_server_ticket", src, 0xCDu);
    if ( value <= 0x80 )
    {
      m_loginResult = this->m_loginResult;
      bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
      v14 = -1i64;
      do
        ++v14;
      while ( src[v14] );
      v15 = bdBase64::decode(src, v14, m_loginResult->m_data, value);
      if ( v15 == value )
      {
        if ( v12 )
        {
          v20 = 0i64;
          bdJSONDeserializer::getUInt64(&responseJSON, "iv_seed", &v20);
          this->m_loginResult->m_IVSeed = v20;
          bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskjoinqueue.cpp", "bdLoginTaskJoinQueue::processLoginQueueReply", 0x15Cu, "Setting IV Seed to [%u]", this->m_loginResult->m_IVSeed);
          code = DISCONNECTED;
          bdLoginTaskJoinQueue::updateJoinQueueStatus(this, "Finished in Queue", &code);
          this->m_queueMemberStatus = BD_POPPED_FROM_THE_QUEUE;
          goto LABEL_45;
        }
      }
      else
      {
        bdLogMessage(BD_LOG_WARNING, "warn/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskjoinqueue.cpp", "bdLoginTaskJoinQueue::processLoginQueueReply", 0x14Du, "Decoded server ticket of unexpected size [%u]", v15);
      }
    }
    else
    {
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskjoinqueue.cpp", "bdLoginTaskJoinQueue::processLoginQueueReply", 0x140u, "Received server ticket is too large to be decoded");
    }
    code = CONNECTED;
    bdLoginTaskJoinQueue::updateJoinQueueStatus(this, "BD_LOGIN_QUEUE_TICKET_PARSE_ERROR", &code);
LABEL_45:
    bdJSONDeserializer::~bdJSONDeserializer(&responseJSON);
    return;
  }
  m_httpInterface = this->m_httpInterface;
  v4 = m_httpInterface->getLastHTTPStatus(m_httpInterface);
  v5 = BD_LOGIN_QUEUE_UNKNOWN_ERROR;
  if ( v4 > 404 )
  {
    switch ( v4 )
    {
      case 429:
        v7 = m_httpInterface->getInternalError(m_httpInterface);
        v8 = BD_LOGIN_QUEUE_TOO_MANY_REQUESTS;
        break;
      case 500:
        v9 = m_httpInterface->getInternalError(m_httpInterface);
        v10 = bdLoginQueueUtils::mapHTTPWrapperInternalErrorCode(BD_LOGIN_QUEUE_INTERNAL_ERROR, v9);
        v6 = bdLoginQueueUtils::parseErrorCodeFromResponse(v10, this->m_httpLoginQueueReply);
        goto LABEL_19;
      case 503:
        v7 = m_httpInterface->getInternalError(m_httpInterface);
        v8 = BD_LOGIN_QUEUE_SERVER_UNAVAILABLE_ERROR;
        break;
      default:
LABEL_14:
        bdLogMessage(BD_LOG_WARNING, "warn/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\helpers\\bdloginqueueutils.h", "bdLoginQueueUtils::mapHTTPErrorCode", 0x3Eu, "Unexpected HTTP Error Code[%d] received from Login Queue", v4);
        goto LABEL_20;
    }
    v6 = bdLoginQueueUtils::mapHTTPWrapperInternalErrorCode(v8, v7);
    goto LABEL_19;
  }
  if ( v4 == 404 )
  {
    v6 = bdLoginQueueUtils::parseErrorCodeFromResponse(BD_LOGIN_QUEUE_NOT_FOUND, this->m_httpLoginQueueReply);
    goto LABEL_19;
  }
  if ( v4 != 200 )
  {
    if ( v4 == 400 )
    {
      v6 = bdLoginQueueUtils::parseErrorCodeFromResponse(BD_LOGIN_QUEUE_BAD_REQUEST, this->m_httpLoginQueueReply);
      goto LABEL_19;
    }
    if ( v4 == 403 )
    {
      v6 = bdLoginQueueUtils::parseErrorCodeFromResponse(BD_LOGIN_QUEUE_CLOSED_QUEUE, this->m_httpLoginQueueReply);
LABEL_19:
      v5 = v6;
      goto LABEL_20;
    }
    goto LABEL_14;
  }
  v5 = BD_LOGIN_QUEUE_NO_ERROR;
LABEL_20:
  this->m_loginResult->m_taskErrorCode = v5;
  LODWORD(function) = this->m_loginResult->m_taskErrorCode;
  bdSnprintf(this->m_queueStatusMessage, 0x400ui64, "Login Queue task failed with HTTP code [%u], Task Error Code [%u]", v2, function);
  bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskjoinqueue.cpp", "bdLoginTaskJoinQueue::processLoginQueueReply", 0x122u, this->m_queueStatusMessage);
  if ( v2 == 403 )
    code = DISCONNECTING;
  else
    code = CONNECTED;
  bdLoginTaskJoinQueue::updateJoinQueueStatus(this, this->m_queueStatusMessage, &code);
}

/*
==============
bdLoginTaskJoinQueue::pump
==============
*/
void bdLoginTaskJoinQueue::pump(bdLoginTaskJoinQueue *this)
{
  bdLoginTaskJoinQueue::JoinQueueState m_queueStatus; 
  __int32 v3; 
  __int32 v4; 
  double ElapsedTimeInSeconds; 
  bdHTTP::bdStatus v6; 
  const char *v7; 
  bdHTTP::bdStatus v8; 
  char *m_queueStatusMessage; 
  unsigned int line; 
  const char *format; 
  bdLoginTaskJoinQueue::JoinQueueState code; 

  m_queueStatus = this->m_queueStatus;
  if ( m_queueStatus == UNINITIALIZED )
  {
    bdStopwatch::start(&this->m_taskTimer);
    bdLoginTaskJoinQueue::buildLoginQueueReq(this);
    return;
  }
  v3 = m_queueStatus - 1;
  if ( !v3 )
  {
    v8 = this->m_httpInterface->getStatus(this->m_httpInterface);
    this->m_httpStatus = v8;
    if ( (v8 & 0xFFFFFFFD) != 0 )
    {
      m_queueStatusMessage = "Auth HTTP request already initialized/in progress";
      format = "Auth HTTP request already initialized/in progress";
      line = 90;
    }
    else
    {
      if ( this->m_httpInterface->sendRequest(this->m_httpInterface) == BD_FAILED )
      {
        bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskjoinqueue.cpp", "bdLoginTaskJoinQueue::pump", 0x53u, "Setting state to JOINING");
        code = CONNECTING;
        v7 = "Attempting to join queue";
        goto LABEL_11;
      }
      m_queueStatusMessage = this->m_queueStatusMessage;
      bdSnprintf(this->m_queueStatusMessage, 0x400ui64, "Failed to start HTTP Auth request, status [%d]", (unsigned int)this->m_httpStatus);
      format = this->m_queueStatusMessage;
      line = 79;
    }
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskjoinqueue.cpp", "bdLoginTaskJoinQueue::pump", line, format);
    code = CONNECTED;
    v7 = m_queueStatusMessage;
LABEL_11:
    bdLoginTaskJoinQueue::updateJoinQueueStatus(this, v7, &code);
    return;
  }
  v4 = v3 - 1;
  if ( !v4 )
  {
    v6 = this->m_httpInterface->getStatus(this->m_httpInterface);
    this->m_httpStatus = v6;
    if ( ((v6 - 1) & 0xFFFFFFFD) == 0 )
      return;
    bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskjoinqueue.cpp", "bdLoginTaskJoinQueue::pump", 0x6Au, "Setting state to RECEIVED_REPLY");
    if ( this->m_httpStatus == BD_MAX_STATUS )
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskjoinqueue.cpp", "bdLoginTaskJoinQueue::pump", 0x6Du, "Got error from login queue service, processing response");
    code = WAITING_FOR_REPORT_CONSOLE_DETAILS;
    v7 = "Received reply from login queue service";
    goto LABEL_11;
  }
  if ( v4 == 1 )
  {
    bdLoginTaskJoinQueue::processLoginQueueReply(this);
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskjoinqueue.cpp", "bdLoginTaskJoinQueue::pump", 0x78u, "Pumping Authentication task in unexpected state");
    bdHandleAssert(1, "(messageInfo != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskjoinqueue.cpp", "bdLoginTaskJoinQueue::updateJoinQueueStatus", 0x189u, "Must provide valid message to update auth task status!");
    this->m_queueStatus = CONNECTED;
    bdStrlcpy(this->m_queueStatusMessage, "Pumping Authentication task in unexpected state", 0x400ui64);
    ElapsedTimeInSeconds = bdStopwatch::getElapsedTimeInSeconds(&this->m_taskTimer);
    bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskjoinqueue.cpp", "bdLoginTaskJoinQueue::updateJoinQueueStatus", 0x191u, "Task finished after %2.1f seconds", *(float *)&ElapsedTimeInSeconds);
  }
}

/*
==============
bdLoginTaskJoinQueue::reset
==============
*/
void bdLoginTaskJoinQueue::reset(bdLoginTaskJoinQueue *this)
{
  bdHTTP *m_httpInterface; 
  bdHTTP *v3; 

  bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskjoinqueue.cpp", "bdLoginTaskJoinQueue::reset", 0x27u, "Resetting bdLoginTaskJoinQueue");
  bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskjoinqueue.cpp", "bdLoginTaskJoinQueue::reset", 0x28u, "Setting state to UNINITIALIZED");
  bdHandleAssert(1, "(messageInfo != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskjoinqueue.cpp", "bdLoginTaskJoinQueue::updateJoinQueueStatus", 0x189u, "Must provide valid message to update auth task status!");
  this->m_queueStatus = UNINITIALIZED;
  bdStrlcpy(this->m_queueStatusMessage, (const char *const)&queryFormat.fmt + 3, 0x400ui64);
  memset_0(this->m_urlString, 0, sizeof(this->m_urlString));
  memset_0(this->m_httpLoginQueueReply, 0, sizeof(this->m_httpLoginQueueReply));
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
bdLoginTaskJoinQueue::resetHttpInterface
==============
*/
void bdLoginTaskJoinQueue::resetHttpInterface(bdLoginTaskJoinQueue *this)
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
bdLoginTaskJoinQueue::setTicketHeaders
==============
*/
__int64 bdLoginTaskJoinQueue::setTicketHeaders(bdLoginTaskJoinQueue *this)
{
  bool v2; 
  bdBitBuffer *v3; 
  bdBitBuffer *v4; 
  bdBitBuffer *v5; 
  bdLoginResult *m_loginResult; 
  bdLoginQueueTicket *p_m_clientToLoginQueueTicket; 
  bdReference<bdBitBuffer> *p_outDataBuf; 
  const unsigned __int8 (*m_sessionKey)[24]; 
  unsigned int m_size; 
  unsigned __int64 m_writePosition; 
  unsigned __int8 v12; 
  __int64 hmacAlg; 
  __int64 v15; 
  bdReference<bdBitBuffer> outDataBuf; 
  __int64 v17[3]; 
  unsigned __int8 iv[24]; 
  char outBuffer[24]; 
  char dest[32]; 
  char v21[176]; 

  v17[1] = -2i64;
  bdBase64::encode(this->m_loginResult->m_data, 0x80u, v21, 0xADu);
  v2 = this->m_httpInterface->setHeader(this->m_httpInterface, "DW-Server-Ticket", v21) && this->m_httpInterface->setHeader(this->m_httpInterface, "DW-Server-Ticket-Size", 128ui64);
  bdCryptoUtils::calculateInitialVector(this->m_loginResult->m_IVSeed, iv);
  v3 = (bdBitBuffer *)bdMemory::allocate(0x30ui64);
  outDataBuf.m_ptr = v3;
  if ( v3 )
  {
    bdBitBuffer::bdBitBuffer(v3, 0, 0);
    v5 = v4;
  }
  else
  {
    v5 = NULL;
  }
  v17[2] = (__int64)v5;
  if ( v5 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v5->m_refCount, 1u);
  m_loginResult = this->m_loginResult;
  if ( m_loginResult->m_authSessionKeyKDF )
  {
    if ( !v2 || !bdCryptoUtils::hkdfExpand(m_loginResult->m_sessionKey, 0x18u, BD_AUTH_TRAFFIC_SIGNING_KEY_1, 0x126u, outBuffer, 0x18u, BD_HASH_SHA1) )
      goto LABEL_23;
    p_m_clientToLoginQueueTicket = &this->m_clientToLoginQueueTicket;
    v17[0] = (__int64)v5;
    if ( v5 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v5->m_refCount, 1u);
    p_outDataBuf = (bdReference<bdBitBuffer> *)v17;
    m_sessionKey = (const unsigned __int8 (*)[24])outBuffer;
  }
  else
  {
    p_m_clientToLoginQueueTicket = &this->m_clientToLoginQueueTicket;
    outDataBuf.m_ptr = v5;
    if ( v5 )
    {
      _InterlockedExchangeAdd((volatile signed __int32 *)&v5->m_refCount, 1u);
      m_loginResult = this->m_loginResult;
    }
    m_sessionKey = (const unsigned __int8 (*)[24])m_loginResult->m_sessionKey;
    p_outDataBuf = &outDataBuf;
  }
  if ( bdLoginQueueTicket::encrypt(p_m_clientToLoginQueueTicket, m_sessionKey, iv, (bdReference<bdBitBuffer>)p_outDataBuf) && v5 )
  {
    m_size = v5->m_data.m_size;
    m_writePosition = v5->m_writePosition;
    LODWORD(hmacAlg) = m_size;
    bdHandleAssert(m_size == 17, "encryptedTicketSizeBytes == BD_EXPECTED_LOGIN_QUEUE_TICKET_SIZE", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskjoinqueue.cpp", "bdLoginTaskJoinQueue::setTicketHeaders", 0xD5u, "encryptedTicketSizeBytes[%u] does not match expected size[%u]", hmacAlg, 17);
    if ( m_size == 17 )
    {
      bdBase64::encode(v5->m_data.m_data, 0x11u, dest, 0x19u);
      if ( this->m_httpInterface->setHeader(this->m_httpInterface, "DW-Client-Ticket", dest) && this->m_httpInterface->setHeader(this->m_httpInterface, "DW-Client-Ticket-Size", m_writePosition) && this->m_httpInterface->setHeader(this->m_httpInterface, "DW-Ticket-Seed", this->m_loginResult->m_IVSeed) )
      {
        v12 = 1;
        goto LABEL_24;
      }
    }
    else
    {
      LODWORD(v15) = m_size;
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskjoinqueue.cpp", "bdLoginTaskJoinQueue::setTicketHeaders", 0xDBu, "encryptedTicketSizeBytes[%u] does not match expected size[%u]", v15, 17);
    }
  }
LABEL_23:
  v12 = 0;
LABEL_24:
  if ( v5 && _InterlockedExchangeAdd((volatile signed __int32 *)&v5->m_refCount, 0xFFFFFFFF) == 1 )
    ((void (__fastcall *)(bdBitBuffer *, __int64))v5->~bdReferencable)(v5, 1i64);
  return v12;
}

/*
==============
bdLoginTaskJoinQueue::updateJoinQueueStatus
==============
*/
void bdLoginTaskJoinQueue::updateJoinQueueStatus(bdLoginTaskJoinQueue *this, const char *messageInfo, const bdLoginTaskJoinQueue::JoinQueueState *code)
{
  double ElapsedTimeInSeconds; 

  bdHandleAssert(messageInfo != NULL, "(messageInfo != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskjoinqueue.cpp", "bdLoginTaskJoinQueue::updateJoinQueueStatus", 0x189u, "Must provide valid message to update auth task status!");
  this->m_queueStatus = *code;
  bdStrlcpy(this->m_queueStatusMessage, messageInfo, 0x400ui64);
  if ( ((*code - 4) & 0xFFFFFFFD) == 0 )
  {
    ElapsedTimeInSeconds = bdStopwatch::getElapsedTimeInSeconds(&this->m_taskTimer);
    bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskjoinqueue.cpp", "bdLoginTaskJoinQueue::updateJoinQueueStatus", 0x191u, "Task finished after %2.1f seconds", *(float *)&ElapsedTimeInSeconds);
  }
}

