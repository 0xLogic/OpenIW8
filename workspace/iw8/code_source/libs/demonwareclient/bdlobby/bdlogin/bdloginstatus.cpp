/*
==============
bdLoginStatus::getNextPollAfterMS
==============
*/

unsigned __int64 __fastcall bdLoginStatus::getNextPollAfterMS(bdLoginStatus *this)
{
  return ?getNextPollAfterMS@bdLoginStatus@@QEBA_KXZ(this);
}

/*
==============
bdLoginStatus::setFinishedFlow
==============
*/

void __fastcall bdLoginStatus::setFinishedFlow(bdLoginStatus *this, bool finished)
{
  ?setFinishedFlow@bdLoginStatus@@QEAAX_N@Z(this, finished);
}

/*
==============
bdLoginStatus::updateLoginStatusMessage
==============
*/

void __fastcall bdLoginStatus::updateLoginStatusMessage(bdLoginStatus *this, const char *messageInfo)
{
  ?updateLoginStatusMessage@bdLoginStatus@@IEAAXPEBD@Z(this, messageInfo);
}

/*
==============
bdLoginStatus::getLoginStatusCode
==============
*/

bdLoginStatus::bdLoginStatusCode __fastcall bdLoginStatus::getLoginStatusCode(bdLoginStatus *this)
{
  return ?getLoginStatusCode@bdLoginStatus@@QEBA?AW4bdLoginStatusCode@1@XZ(this);
}

/*
==============
bdLoginStatus::startLoginTimer
==============
*/

void __fastcall bdLoginStatus::startLoginTimer(bdLoginStatus *this)
{
  ?startLoginTimer@bdLoginStatus@@IEAAXXZ(this);
}

/*
==============
bdLoginStatus::~bdLoginStatus
==============
*/

void __fastcall bdLoginStatus::~bdLoginStatus(bdLoginStatus *this)
{
  ??1bdLoginStatus@@UEAA@XZ(this);
}

/*
==============
bdLoginStatus::updateLoginStatusCode
==============
*/

void __fastcall bdLoginStatus::updateLoginStatusCode(bdLoginStatus *this, const bdLoginStatus::bdLoginStatusCode code)
{
  ?updateLoginStatusCode@bdLoginStatus@@IEAAXW4bdLoginStatusCode@1@@Z(this, code);
}

/*
==============
bdLoginStatus::bdLoginStatus
==============
*/

void __fastcall bdLoginStatus::bdLoginStatus(bdLoginStatus *this)
{
  ??0bdLoginStatus@@QEAA@XZ(this);
}

/*
==============
bdLoginStatus::getEstimatedQueueTimeMS
==============
*/

unsigned __int64 __fastcall bdLoginStatus::getEstimatedQueueTimeMS(bdLoginStatus *this)
{
  return ?getEstimatedQueueTimeMS@bdLoginStatus@@QEBA_KXZ(this);
}

/*
==============
bdLoginStatus::bdLoginStatus
==============
*/

void __fastcall bdLoginStatus::bdLoginStatus(bdLoginStatus *this, const char *messageInfo, const bdLoginStatus::bdLoginStatusCode *code)
{
  ??0bdLoginStatus@@QEAA@PEBDAEBW4bdLoginStatusCode@0@@Z(this, messageInfo, code);
}

/*
==============
bdLoginStatus::updateLoginStatus
==============
*/

void __fastcall bdLoginStatus::updateLoginStatus(bdLoginStatus *this, const char *messageInfo, const bdLoginStatus::bdLoginStatusCode code)
{
  ?updateLoginStatus@bdLoginStatus@@IEAAXPEBDW4bdLoginStatusCode@1@@Z(this, messageInfo, code);
}

/*
==============
bdLoginStatus::getLoginStatusMessage
==============
*/

const char *__fastcall bdLoginStatus::getLoginStatusMessage(bdLoginStatus *this)
{
  return ?getLoginStatusMessage@bdLoginStatus@@QEBAPEBDXZ(this);
}

/*
==============
bdLoginStatus::finishedFlow
==============
*/

bool __fastcall bdLoginStatus::finishedFlow(bdLoginStatus *this)
{
  return ?finishedFlow@bdLoginStatus@@QEBA_NXZ(this);
}

/*
==============
bdLoginStatus::bdLoginStatus
==============
*/
void bdLoginStatus::bdLoginStatus(bdLoginStatus *this, const char *messageInfo, const bdLoginStatus::bdLoginStatusCode *code)
{
  this->__vftable = (bdLoginStatus_vtbl *)&bdLoginStatus::`vftable';
  bdStopwatch::bdStopwatch(&this->m_loginTimer);
  bdLoginQueueRecord::bdLoginQueueRecord(&this->m_loginQueueInfo);
  this->m_finishedFlow = 0;
  bdLoginStatus::updateLoginStatusCode(this, *code);
  bdHandleAssert(this->m_loginStatusMessage != NULL, "(m_loginStatusMessage != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdloginstatus.cpp", "bdLoginStatus::bdLoginStatus", 0x15u, "Attempted bdLoginStatus instantiation with invalid message.", -2i64);
  bdStrlcpy(this->m_loginStatusMessage, messageInfo, 0x400ui64);
}

/*
==============
bdLoginStatus::bdLoginStatus
==============
*/
void bdLoginStatus::bdLoginStatus(bdLoginStatus *this)
{
  unsigned __int64 v2; 
  size_t v3; 

  this->__vftable = (bdLoginStatus_vtbl *)&bdLoginStatus::`vftable';
  bdStopwatch::bdStopwatch(&this->m_loginTimer);
  bdLoginQueueRecord::bdLoginQueueRecord(&this->m_loginQueueInfo);
  this->m_finishedFlow = 0;
  this->m_lastSuccesfulCode = this->m_loginStatusCode;
  this->m_loginStatusCode = READY;
  bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen", -2i64);
  v2 = -1i64;
  do
    ++v2;
  while ( *((_BYTE *)&queryFormat.fmt + v2 + 3) );
  if ( this != (bdLoginStatus *)-24i64 )
  {
    v3 = 1023i64;
    if ( v2 < 0x3FF )
      v3 = v2;
    memcpy_0(this->m_loginStatusMessage, (char *)&queryFormat.fmt + 3, v3);
    this->m_loginStatusMessage[v3] = 0;
  }
}

/*
==============
bdLoginStatus::~bdLoginStatus
==============
*/
void bdLoginStatus::~bdLoginStatus(bdLoginStatus *this)
{
  this->__vftable = (bdLoginStatus_vtbl *)&bdLoginStatus::`vftable';
  bdLoginQueueRecord::~bdLoginQueueRecord(&this->m_loginQueueInfo);
}

/*
==============
bdLoginStatus::finishedFlow
==============
*/
_BOOL8 bdLoginStatus::finishedFlow(bdLoginStatus *this)
{
  return this->m_finishedFlow;
}

/*
==============
bdLoginStatus::getEstimatedQueueTimeMS
==============
*/
unsigned __int64 bdLoginStatus::getEstimatedQueueTimeMS(bdLoginStatus *this)
{
  return this->m_loginQueueInfo.m_estimatedWaitTimeMilliseconds;
}

/*
==============
bdLoginStatus::getLoginStatusCode
==============
*/
__int64 bdLoginStatus::getLoginStatusCode(bdLoginStatus *this)
{
  return (unsigned int)this->m_loginStatusCode;
}

/*
==============
bdLoginStatus::getLoginStatusMessage
==============
*/
char *bdLoginStatus::getLoginStatusMessage(bdLoginStatus *this)
{
  return this->m_loginStatusMessage;
}

/*
==============
bdLoginStatus::getNextPollAfterMS
==============
*/
unsigned __int64 bdLoginStatus::getNextPollAfterMS(bdLoginStatus *this)
{
  return this->m_loginQueueInfo.m_nextPollAfterMilliseconds;
}

/*
==============
bdLoginStatus::setFinishedFlow
==============
*/
void bdLoginStatus::setFinishedFlow(bdLoginStatus *this, bool finished)
{
  this->m_finishedFlow = finished;
}

/*
==============
bdLoginStatus::startLoginTimer
==============
*/
void bdLoginStatus::startLoginTimer(bdLoginStatus *this)
{
  bdStopwatch::start(&this->m_loginTimer);
}

/*
==============
bdLoginStatus::updateLoginStatus
==============
*/
void bdLoginStatus::updateLoginStatus(bdLoginStatus *this, const char *messageInfo, const bdLoginStatus::bdLoginStatusCode code)
{
  bdHandleAssert(messageInfo != NULL, "(messageInfo != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdloginstatus.cpp", "bdLoginStatus::updateLoginStatus", 0x42u, "Must provide valid message to update login status!");
  bdLoginStatus::updateLoginStatusCode(this, code);
  bdStrlcpy(this->m_loginStatusMessage, messageInfo, 0x400ui64);
}

/*
==============
bdLoginStatus::updateLoginStatusCode
==============
*/
void bdLoginStatus::updateLoginStatusCode(bdLoginStatus *this, const bdLoginStatus::bdLoginStatusCode code)
{
  double v4; 

  this->m_lastSuccesfulCode = this->m_loginStatusCode;
  this->m_loginStatusCode = code;
  if ( (unsigned int)(code - 26) <= 1 )
  {
    *(double *)&_XMM0 = bdStopwatch::getElapsedTimeInSeconds(&this->m_loginTimer);
    __asm
    {
      vcvtss2sd xmm1, xmm0, xmm0
      vmovsd  [rsp+48h+var_10], xmm1
    }
    bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdloginstatus.cpp", "bdLoginStatus::updateLoginStatusCode", 0x5Au, "Login completed in %2.1f seconds", v4);
  }
}

/*
==============
bdLoginStatus::updateLoginStatusMessage
==============
*/
void bdLoginStatus::updateLoginStatusMessage(bdLoginStatus *this, const char *messageInfo)
{
  bdStrlcpy(this->m_loginStatusMessage, messageInfo, 0x400ui64);
}

