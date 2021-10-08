/*
==============
bdLoginTaskPollQueue::setPollStatusUpdated
==============
*/

void __fastcall bdLoginTaskPollQueue::setPollStatusUpdated(bdLoginTaskPollQueue *this, bool updated)
{
  ?setPollStatusUpdated@bdLoginTaskPollQueue@@QEAAX_N@Z(this, updated);
}

/*
==============
bdLoginTaskPollQueue::getLoginqueueRecord
==============
*/

bdLoginQueueRecord *__fastcall bdLoginTaskPollQueue::getLoginqueueRecord(bdLoginTaskPollQueue *this, bdLoginQueueRecord *result)
{
  return ?getLoginqueueRecord@bdLoginTaskPollQueue@@QEBA?AVbdLoginQueueRecord@@XZ(this, result);
}

/*
==============
bdLoginTaskPollQueue::pollStatusUpdated
==============
*/

bool __fastcall bdLoginTaskPollQueue::pollStatusUpdated(bdLoginTaskPollQueue *this)
{
  return ?pollStatusUpdated@bdLoginTaskPollQueue@@QEAA_NXZ(this);
}

/*
==============
bdLoginTaskPollQueue::updatePollQueueStatus
==============
*/

void __fastcall bdLoginTaskPollQueue::updatePollQueueStatus(bdLoginTaskPollQueue *this, const char *messageInfo, const bdLoginTaskPollQueue::PollQueueState *code)
{
  ?updatePollQueueStatus@bdLoginTaskPollQueue@@QEAAXPEBDAEBW4PollQueueState@1@@Z(this, messageInfo, code);
}

/*
==============
bdLoginTaskPollQueue::getUserQueueData
==============
*/

const char *__fastcall bdLoginTaskPollQueue::getUserQueueData(bdLoginTaskPollQueue *this)
{
  return ?getUserQueueData@bdLoginTaskPollQueue@@QEAAPEBDXZ(this);
}

/*
==============
bdLoginTaskPollQueue::~bdLoginTaskPollQueue
==============
*/

void __fastcall bdLoginTaskPollQueue::~bdLoginTaskPollQueue(bdLoginTaskPollQueue *this)
{
  ??1bdLoginTaskPollQueue@@UEAA@XZ(this);
}

/*
==============
bdLoginTaskPollQueue::abortTask
==============
*/

void __fastcall bdLoginTaskPollQueue::abortTask(bdLoginTaskPollQueue *this)
{
  ?abortTask@bdLoginTaskPollQueue@@UEAAXXZ(this);
}

/*
==============
bdLoginTaskPollQueue::pump
==============
*/

void __fastcall bdLoginTaskPollQueue::pump(bdLoginTaskPollQueue *this)
{
  ?pump@bdLoginTaskPollQueue@@UEAAXXZ(this);
}

/*
==============
bdLoginTaskPollQueue::resetHttpInterface
==============
*/

void __fastcall bdLoginTaskPollQueue::resetHttpInterface(bdLoginTaskPollQueue *this)
{
  ?resetHttpInterface@bdLoginTaskPollQueue@@QEAAXXZ(this);
}

/*
==============
bdLoginTaskPollQueue::getTaskMessage
==============
*/

const char *__fastcall bdLoginTaskPollQueue::getTaskMessage(bdLoginTaskPollQueue *this)
{
  return ?getTaskMessage@bdLoginTaskPollQueue@@UEBAPEBDXZ(this);
}

/*
==============
bdLoginTaskPollQueue::bdLoginTaskPollQueue
==============
*/

void __fastcall bdLoginTaskPollQueue::bdLoginTaskPollQueue(bdLoginTaskPollQueue *this, const bdLoginConfig *loginConfig, bdLoginResult *loginResult)
{
  ??0bdLoginTaskPollQueue@@QEAA@PEBVbdLoginConfig@@PEAVbdLoginResult@@@Z(this, loginConfig, loginResult);
}

/*
==============
bdLoginTaskPollQueue::buildPollLoginQueueReq
==============
*/

bool __fastcall bdLoginTaskPollQueue::buildPollLoginQueueReq(bdLoginTaskPollQueue *this)
{
  return ?buildPollLoginQueueReq@bdLoginTaskPollQueue@@QEAA_NXZ(this);
}

/*
==============
bdLoginTaskPollQueue::processLoginQueueReply
==============
*/

void __fastcall bdLoginTaskPollQueue::processLoginQueueReply(bdLoginTaskPollQueue *this)
{
  ?processLoginQueueReply@bdLoginTaskPollQueue@@QEAAXXZ(this);
}

/*
==============
bdLoginTaskPollQueue::reset
==============
*/

void __fastcall bdLoginTaskPollQueue::reset(bdLoginTaskPollQueue *this)
{
  ?reset@bdLoginTaskPollQueue@@UEAAXXZ(this);
}

/*
==============
bdLoginTaskPollQueue::_updatePollUrlString
==============
*/

bool __fastcall bdLoginTaskPollQueue::_updatePollUrlString(bdLoginTaskPollQueue *this)
{
  return ?_updatePollUrlString@bdLoginTaskPollQueue@@QEAA_NXZ(this);
}

/*
==============
bdLoginTaskPollQueue::getTaskCode
==============
*/

bdLoginTaskPollQueue::PollQueueState __fastcall bdLoginTaskPollQueue::getTaskCode(bdLoginTaskPollQueue *this)
{
  return ?getTaskCode@bdLoginTaskPollQueue@@QEBA?AW4PollQueueState@1@XZ(this);
}

/*
==============
bdLoginTaskPollQueue::setTicketHeaders
==============
*/

bool __fastcall bdLoginTaskPollQueue::setTicketHeaders(bdLoginTaskPollQueue *this)
{
  return ?setTicketHeaders@bdLoginTaskPollQueue@@QEAA_NXZ(this);
}

/*
==============
bdLoginTaskPollQueue::bdLoginTaskPollQueue
==============
*/
void bdLoginTaskPollQueue::bdLoginTaskPollQueue(bdLoginTaskPollQueue *this, const bdLoginConfig *loginConfig, bdLoginResult *loginResult)
{
  this->__vftable = (bdLoginTaskPollQueue_vtbl *)&bdLoginTask::`vftable';
  bdStopwatch::bdStopwatch(&this->m_taskTimer);
  this->m_loginConfig = loginConfig;
  this->m_loginResult = loginResult;
  this->m_firstPartyTokenStatusCode = FETCHING_FIRST_PARTY_TOKEN;
  this->__vftable = (bdLoginTaskPollQueue_vtbl *)&bdLoginTaskPollQueue::`vftable';
  bdLoginQueueTicket::bdLoginQueueTicket(&this->m_clientToLoginQueueTicket);
  bdLoginQueueRecord::bdLoginQueueRecord(&this->m_loginQueueRecord);
  this->m_pollStatusUpdated = 0;
  this->m_httpInterface = NULL;
  memset_0(this->m_urlString, 0, sizeof(this->m_urlString));
  memset_0(this->m_httpLoginQueueReply, 0, sizeof(this->m_httpLoginQueueReply));
  bdHandleAssert(1, "(messageInfo != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskpollqueue.cpp", "bdLoginTaskPollQueue::updatePollQueueStatus", 0x197u, "Must provide valid message to update auth task status!", -2i64);
  this->m_queueStatus = UNINITIALIZED;
  bdStrlcpy(this->m_queueStatusMessage, (const char *const)&queryFormat.fmt + 3, 0x400ui64);
  this->m_loginQueueRecord.m_estimatedWaitTimeMilliseconds = 0i64;
}

/*
==============
bdLoginTaskPollQueue::~bdLoginTaskPollQueue
==============
*/
void bdLoginTaskPollQueue::~bdLoginTaskPollQueue(bdLoginTaskPollQueue *this)
{
  bdHTTP *m_httpInterface; 
  bdHTTP *v3; 

  this->__vftable = (bdLoginTaskPollQueue_vtbl *)&bdLoginTaskPollQueue::`vftable';
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
  this->__vftable = (bdLoginTaskPollQueue_vtbl *)&bdLoginTask::`vftable';
}

/*
==============
bdLoginTaskPollQueue::_updatePollUrlString
==============
*/
char bdLoginTaskPollQueue::_updatePollUrlString(bdLoginTaskPollQueue *this)
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
  bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskpollqueue.cpp", "bdLoginTaskPollQueue::_updatePollUrlString", 0x110u, "Using URL [%s]", this->m_urlString);
  return 1;
}

/*
==============
bdLoginTaskPollQueue::abortTask
==============
*/
void bdLoginTaskPollQueue::abortTask(bdLoginTaskPollQueue *this)
{
  bdHTTP *m_httpInterface; 
  bdHTTP *v5; 
  double v6; 

  bdHandleAssert(1, "(messageInfo != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskpollqueue.cpp", "bdLoginTaskPollQueue::updatePollQueueStatus", 0x197u, "Must provide valid message to update auth task status!");
  this->m_queueStatus = CONNECTED;
  bdStrlcpy(this->m_queueStatusMessage, (const char *const)&queryFormat.fmt + 3, 0x400ui64);
  *(double *)&_XMM0 = bdStopwatch::getElapsedTimeInSeconds(&this->m_taskTimer);
  __asm
  {
    vcvtss2sd xmm1, xmm0, xmm0
    vmovsd  [rsp+48h+var_10], xmm1
  }
  bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskpollqueue.cpp", "bdLoginTaskPollQueue::updatePollQueueStatus", 0x19Fu, "Task finished after %2.1f seconds", v6);
  m_httpInterface = this->m_httpInterface;
  if ( m_httpInterface )
  {
    m_httpInterface->abortOperation(m_httpInterface);
    v5 = this->m_httpInterface;
    if ( v5 )
      ((void (__fastcall *)(bdHTTP *, __int64))v5->~bdHTTP)(v5, 1i64);
    this->m_httpInterface = NULL;
  }
}

/*
==============
bdLoginTaskPollQueue::buildPollLoginQueueReq
==============
*/
char bdLoginTaskPollQueue::buildPollLoginQueueReq(bdLoginTaskPollQueue *this)
{
  bdHTTP *v3; 
  bdLoginConfig *m_loginConfig; 
  const char *GameID; 
  const char *Region; 
  unsigned __int64 FirstPartyUserID; 
  bdHTTP *m_httpInterface; 
  bool (__fastcall *setHeader)(bdHTTP *, const char *, const unsigned __int64); 
  unsigned __int64 TransactionID; 
  bool v11; 
  unsigned __int64 v12; 
  unsigned int format; 
  int EffectiveQueueID; 
  double v17; 
  bdEnvironment env[4]; 
  char url[512]; 

  v3 = bdHTTPUtility::newHTTP(0, 0);
  m_loginConfig = (bdLoginConfig *)this->m_loginConfig;
  this->m_httpInterface = v3;
  GameID = bdLoginConfig::getGameID(m_loginConfig);
  Region = bdLoginConfig::getRegion((bdLoginConfig *)this->m_loginConfig);
  env[0] = bdLoginResult::getEnvironment(this->m_loginResult);
  bdLoginUtils::getLoginQueueUrl((char (*)[512])url, env, Region, GameID);
  FirstPartyUserID = bdLoginResult::getFirstPartyUserID(this->m_loginResult);
  EffectiveQueueID = bdLoginConfig::getEffectiveQueueID((bdLoginConfig *)this->m_loginConfig);
  format = this->m_loginResult->m_titleID;
  bdSnprintf(this->m_urlString, 0x200ui64, "%s:
  bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskpollqueue.cpp", "bdLoginTaskPollQueue::_updatePollUrlString", 0x110u, "Using URL [%s]", this->m_urlString);
  v11 = 0;
  if ( ((unsigned __int8 (__fastcall *)(bdHTTP *, __int64, char *))this->m_httpInterface->initRequest)(this->m_httpInterface, 1i64, this->m_urlString) )
  {
    if ( this->m_httpInterface->setHeader(this->m_httpInterface, "Content-Type", "application/json") )
    {
      m_httpInterface = this->m_httpInterface;
      setHeader = m_httpInterface->setHeader;
      TransactionID = bdLoginResult::getTransactionID(this->m_loginResult);
      if ( setHeader(m_httpInterface, "X-TransactionID", TransactionID) )
        v11 = 1;
    }
  }
  v12 = bdLoginResult::getTransactionID(this->m_loginResult);
  bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskpollqueue.cpp", "bdLoginTaskPollQueue::buildPollLoginQueueReq", 0x8Fu, "Transaction ID: %I64u).", v12);
  if ( v11 && bdLoginTaskPollQueue::setTicketHeaders(this) && bdHTTP::setUploadData(this->m_httpInterface, NULL, 0) && this->m_httpInterface->setHeader(this->m_httpInterface, "Content-Length", "0") && bdHTTP::setDownloadBuffer(this->m_httpInterface, this->m_httpLoginQueueReply, 0x400u) )
  {
    bdHandleAssert(1, "(messageInfo != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskpollqueue.cpp", "bdLoginTaskPollQueue::updatePollQueueStatus", 0x197u, "Must provide valid message to update auth task status!");
    this->m_queueStatus = NOT_CONNECTED;
    bdStrlcpy(this->m_queueStatusMessage, "Setting state to READY", 0x400ui64);
    return 1;
  }
  else
  {
    bdHandleAssert(1, "(messageInfo != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskpollqueue.cpp", "bdLoginTaskPollQueue::updatePollQueueStatus", 0x197u, "Must provide valid message to update auth task status!");
    this->m_queueStatus = CONNECTED;
    bdStrlcpy(this->m_queueStatusMessage, "Encountered error building poll login queue request", 0x400ui64);
    *(double *)&_XMM0 = bdStopwatch::getElapsedTimeInSeconds(&this->m_taskTimer);
    __asm
    {
      vcvtss2sd xmm1, xmm0, xmm0
      vmovsd  [rsp+278h+var_240], xmm1
    }
    bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskpollqueue.cpp", "bdLoginTaskPollQueue::updatePollQueueStatus", 0x19Fu, "Task finished after %2.1f seconds", v17);
    return 0;
  }
}

/*
==============
bdLoginTaskPollQueue::getLoginqueueRecord
==============
*/
bdLoginQueueRecord *bdLoginTaskPollQueue::getLoginqueueRecord(bdLoginTaskPollQueue *this, bdLoginQueueRecord *result)
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
bdLoginTaskPollQueue::getTaskCode
==============
*/
__int64 bdLoginTaskPollQueue::getTaskCode(bdLoginTaskPollQueue *this)
{
  return (unsigned int)this->m_queueStatus;
}

/*
==============
bdLoginTaskPollQueue::getTaskMessage
==============
*/
char *bdLoginTaskPollQueue::getTaskMessage(bdLoginTaskPollQueue *this)
{
  return this->m_queueStatusMessage;
}

/*
==============
bdLoginTaskPollQueue::getUserQueueData
==============
*/
char *bdLoginTaskPollQueue::getUserQueueData(bdLoginTaskPollQueue *this)
{
  char *m_loginQueueRecordMessage; 

  m_loginQueueRecordMessage = this->m_loginQueueRecordMessage;
  bdSnprintf(this->m_loginQueueRecordMessage, 0x400ui64, "Estimated remaining seconds in queue: [%I64u]", this->m_loginQueueRecord.m_estimatedWaitTimeSec);
  return m_loginQueueRecordMessage;
}

/*
==============
bdLoginTaskPollQueue::pollStatusUpdated
==============
*/
_BOOL8 bdLoginTaskPollQueue::pollStatusUpdated(bdLoginTaskPollQueue *this)
{
  return this->m_pollStatusUpdated;
}

/*
==============
bdLoginTaskPollQueue::processLoginQueueReply
==============
*/
void bdLoginTaskPollQueue::processLoginQueueReply(bdLoginTaskPollQueue *this)
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
  char *function; 
  bdLoginTaskPollQueue::PollQueueState code; 
  unsigned __int64 value; 
  unsigned __int64 v19; 
  bdJSONDeserializer responseJSON; 
  __int64 v21; 
  char src[208]; 

  v21 = -2i64;
  v2 = this->m_httpInterface->getLastHTTPStatus(this->m_httpInterface);
  if ( v2 == 200 )
  {
    bdJSONDeserializer::bdJSONDeserializer(&responseJSON);
    if ( bdJSONDeserializer::parse(&responseJSON, this->m_httpLoginQueueReply) && bdLoginQueueRecord::deserialize(&this->m_loginQueueRecord, &responseJSON) )
    {
      v11 = 1;
      this->m_pollStatusUpdated = 1;
    }
    else
    {
      v11 = 0;
    }
    value = 0i64;
    v12 = v11 && bdJSONDeserializer::getUInt64(&responseJSON, "lsg_server_ticket_size", &value);
    if ( value )
    {
      memset_0(src, 0, 0xCDui64);
      v12 = v12 && bdJSONDeserializer::getString(&responseJSON, "lsg_server_ticket", src, 0xCDu);
      if ( value > 0x80 )
      {
        bdLogMessage(BD_LOG_WARNING, "warn/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskpollqueue.cpp", "bdLoginTaskPollQueue::processLoginQueueReply", 0x142u, "Received server ticket is too large to be decoded");
LABEL_44:
        code = CONNECTED;
        bdLoginTaskPollQueue::updatePollQueueStatus(this, "BD_LOGIN_QUEUE_TICKET_PARSE_ERROR", &code);
LABEL_49:
        bdJSONDeserializer::~bdJSONDeserializer(&responseJSON);
        return;
      }
      m_loginResult = this->m_loginResult;
      bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
      v14 = -1i64;
      do
        ++v14;
      while ( src[v14] );
      v15 = bdBase64::decode(src, v14, m_loginResult->m_data, value);
      if ( v15 != value )
      {
        bdLogMessage(BD_LOG_WARNING, "warn/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskpollqueue.cpp", "bdLoginTaskPollQueue::processLoginQueueReply", 0x14Fu, "Decoded server ticket of unexpected size [%u]", v15);
        goto LABEL_44;
      }
      if ( !v12 )
        goto LABEL_44;
      v19 = 0i64;
      bdJSONDeserializer::getUInt64(&responseJSON, "iv_seed", &v19);
      this->m_loginResult->m_IVSeed = v19;
      bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskpollqueue.cpp", "bdLoginTaskPollQueue::processLoginQueueReply", 0x15Eu, "Setting IV Seed to [%u]", this->m_loginResult->m_IVSeed);
      code = DISCONNECTED;
      bdLoginTaskPollQueue::updatePollQueueStatus(this, "Finished in Queue", &code);
    }
    else
    {
      bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskpollqueue.cpp", "bdLoginTaskPollQueue::processLoginQueueReply", 0x165u, "User still queued, resetting poll task to allow for next pump request to poll the queue.");
      bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskpollqueue.cpp", "bdLoginTaskPollQueue::processLoginQueueReply", 0x169u, "Member position : [%u], estimated wait time : [%u]", this->m_loginQueueRecord.m_position, this->m_loginQueueRecord.m_estimatedWaitTimeSec);
      this->reset(this);
    }
    if ( !v12 )
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskpollqueue.cpp", "bdLoginTaskPollQueue::processLoginQueueReply", 0x16Fu, "BD_LOGIN_QUEUE_JSON_FORMAT_ERROR");
    goto LABEL_49;
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
  bdSnprintf(this->m_queueStatusMessage, 0x400ui64, "Login Queue task failed with HTTP code [%u],  Task Error Code [%u]", v2, function);
  bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskpollqueue.cpp", "bdLoginTaskPollQueue::processLoginQueueReply", 0x11Fu, this->m_queueStatusMessage);
  if ( v2 == 403 )
    code = DISCONNECTING;
  else
    code = CONNECTED;
  bdLoginTaskPollQueue::updatePollQueueStatus(this, this->m_queueStatusMessage, &code);
}

/*
==============
bdLoginTaskPollQueue::pump
==============
*/
void bdLoginTaskPollQueue::pump(bdLoginTaskPollQueue *this)
{
  bdLoginTaskPollQueue::PollQueueState m_queueStatus; 
  __int32 v4; 
  __int32 v5; 
  bdHTTP::bdStatus v7; 
  const char *v8; 
  bdHTTP::bdStatus v9; 
  char *m_queueStatusMessage; 
  unsigned int line; 
  const char *format; 
  double v13; 
  bdLoginTaskPollQueue::PollQueueState code; 

  m_queueStatus = this->m_queueStatus;
  if ( m_queueStatus == UNINITIALIZED )
  {
    bdStopwatch::start(&this->m_taskTimer);
    bdLoginTaskPollQueue::buildPollLoginQueueReq(this);
    return;
  }
  v4 = m_queueStatus - 1;
  if ( !v4 )
  {
    v9 = this->m_httpInterface->getStatus(this->m_httpInterface);
    this->m_httpStatus = v9;
    if ( (v9 & 0xFFFFFFFD) != 0 )
    {
      m_queueStatusMessage = "Auth HTTP request already initialized/in progress";
      format = "Auth HTTP request already initialized/in progress";
      line = 92;
    }
    else
    {
      if ( this->m_httpInterface->sendRequest(this->m_httpInterface) == BD_FAILED )
      {
        bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskpollqueue.cpp", "bdLoginTaskPollQueue::pump", 0x55u, "Setting state to POLLING");
        code = CONNECTING;
        v8 = "Attempting to poll queue";
        goto LABEL_11;
      }
      m_queueStatusMessage = this->m_queueStatusMessage;
      bdSnprintf(this->m_queueStatusMessage, 0x400ui64, "Failed to start HTTP Auth request, status [%d]", (unsigned int)this->m_httpStatus);
      format = this->m_queueStatusMessage;
      line = 81;
    }
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskpollqueue.cpp", "bdLoginTaskPollQueue::pump", line, format);
    code = CONNECTED;
    v8 = m_queueStatusMessage;
LABEL_11:
    bdLoginTaskPollQueue::updatePollQueueStatus(this, v8, &code);
    return;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    v7 = this->m_httpInterface->getStatus(this->m_httpInterface);
    this->m_httpStatus = v7;
    if ( v7 == BD_FAILED )
      return;
    bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskpollqueue.cpp", "bdLoginTaskPollQueue::pump", 0x6Au, "Setting state to RECEIVED_REPLY");
    if ( this->m_httpStatus == BD_MAX_STATUS )
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskpollqueue.cpp", "bdLoginTaskPollQueue::pump", 0x6Du, "Got error from login queue service, processing response");
    code = WAITING_FOR_REPORT_CONSOLE_DETAILS;
    v8 = "Received reply from login queue service";
    goto LABEL_11;
  }
  if ( v5 == 1 )
  {
    bdLoginTaskPollQueue::processLoginQueueReply(this);
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskpollqueue.cpp", "bdLoginTaskPollQueue::pump", 0x7Au, "Pumping Authentication task in unexpected state");
    bdHandleAssert(1, "(messageInfo != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskpollqueue.cpp", "bdLoginTaskPollQueue::updatePollQueueStatus", 0x197u, "Must provide valid message to update auth task status!");
    this->m_queueStatus = CONNECTED;
    bdStrlcpy(this->m_queueStatusMessage, "Pumping Authentication task in unexpected state", 0x400ui64);
    *(double *)&_XMM0 = bdStopwatch::getElapsedTimeInSeconds(&this->m_taskTimer);
    __asm
    {
      vcvtss2sd xmm1, xmm0, xmm0
      vmovsd  [rsp+48h+var_10], xmm1
    }
    bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskpollqueue.cpp", "bdLoginTaskPollQueue::updatePollQueueStatus", 0x19Fu, "Task finished after %2.1f seconds", v13);
  }
}

/*
==============
bdLoginTaskPollQueue::reset
==============
*/
void bdLoginTaskPollQueue::reset(bdLoginTaskPollQueue *this)
{
  bdHTTP *m_httpInterface; 
  bdHTTP *v3; 

  bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskpollqueue.cpp", "bdLoginTaskPollQueue::reset", 0x28u, "Resetting bdLoginTaskPollQueue");
  bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskpollqueue.cpp", "bdLoginTaskPollQueue::reset", 0x29u, "Setting state to UNINITIALIZED");
  bdHandleAssert(1, "(messageInfo != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskpollqueue.cpp", "bdLoginTaskPollQueue::updatePollQueueStatus", 0x197u, "Must provide valid message to update auth task status!");
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
bdLoginTaskPollQueue::resetHttpInterface
==============
*/
void bdLoginTaskPollQueue::resetHttpInterface(bdLoginTaskPollQueue *this)
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
bdLoginTaskPollQueue::setPollStatusUpdated
==============
*/
void bdLoginTaskPollQueue::setPollStatusUpdated(bdLoginTaskPollQueue *this, bool updated)
{
  this->m_pollStatusUpdated = updated;
}

/*
==============
bdLoginTaskPollQueue::setTicketHeaders
==============
*/
__int64 bdLoginTaskPollQueue::setTicketHeaders(bdLoginTaskPollQueue *this)
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
    if ( !v2 || !bdCryptoUtils::hkdfExpand(m_loginResult->m_sessionKey, 0x18u, BD_AUTH_TRAFFIC_SIGNING_KEY_2, 0x126u, outBuffer, 0x18u, BD_HASH_SHA1) )
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
    bdHandleAssert(m_size == 17, "encryptedTicketSizeBytes == BD_EXPECTED_LOGIN_QUEUE_TICKET_SIZE", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskpollqueue.cpp", "bdLoginTaskPollQueue::setTicketHeaders", 0xD4u, "encryptedTicketSizeBytes[%u] does not match expected size[%u]", hmacAlg, 17);
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
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskpollqueue.cpp", "bdLoginTaskPollQueue::setTicketHeaders", 0xD9u, "encryptedTicketSizeBytes[%u] does not match expected size[%u]", v15, 17);
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
bdLoginTaskPollQueue::updatePollQueueStatus
==============
*/
void bdLoginTaskPollQueue::updatePollQueueStatus(bdLoginTaskPollQueue *this, const char *messageInfo, const bdLoginTaskPollQueue::PollQueueState *code)
{
  double v8; 

  bdHandleAssert(messageInfo != NULL, "(messageInfo != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskpollqueue.cpp", "bdLoginTaskPollQueue::updatePollQueueStatus", 0x197u, "Must provide valid message to update auth task status!");
  this->m_queueStatus = *code;
  bdStrlcpy(this->m_queueStatusMessage, messageInfo, 0x400ui64);
  if ( ((*code - 4) & 0xFFFFFFFD) == 0 )
  {
    *(double *)&_XMM0 = bdStopwatch::getElapsedTimeInSeconds(&this->m_taskTimer);
    __asm
    {
      vcvtss2sd xmm1, xmm0, xmm0
      vmovsd  [rsp+48h+var_10], xmm1
    }
    bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskpollqueue.cpp", "bdLoginTaskPollQueue::updatePollQueueStatus", 0x19Fu, "Task finished after %2.1f seconds", v8);
  }
}

