/*
==============
bdDataChannelManagerBase::setUserInfo
==============
*/

void __fastcall bdDataChannelManagerBase::setUserInfo(bdDataChannelManagerBase *this, const bdDataChannelUserInfoV2 *userInfo)
{
  ?setUserInfo@bdDataChannelManagerBase@@QEAAXAEBVbdDataChannelUserInfoV2@@@Z(this, userInfo);
}

/*
==============
bdDataChannelManagerBase::pump
==============
*/

bdDataChannelManagerBase::bdDataChannelStatus __fastcall bdDataChannelManagerBase::pump(bdDataChannelManagerBase *this)
{
  return ?pump@bdDataChannelManagerBase@@QEAA?AW4bdDataChannelStatus@1@XZ(this);
}

/*
==============
bdDataChannelManagerBase::setMaxMessageQueueSize
==============
*/

void __fastcall bdDataChannelManagerBase::setMaxMessageQueueSize(bdDataChannelManagerBase *this, unsigned int maxSizeInBytes)
{
  ?setMaxMessageQueueSize@bdDataChannelManagerBase@@QEAAXI@Z(this, maxSizeInBytes);
}

/*
==============
bdDataChannelManagerBase::getMessageQueueSize
==============
*/

unsigned int __fastcall bdDataChannelManagerBase::getMessageQueueSize(bdDataChannelManagerBase *this)
{
  return ?getMessageQueueSize@bdDataChannelManagerBase@@QEBAIXZ(this);
}

/*
==============
bdDataChannelManagerBase::getUserInfo
==============
*/

bdDataChannelUserInfo *__fastcall bdDataChannelManagerBase::getUserInfo(bdDataChannelManagerBase *this)
{
  return ?getUserInfo@bdDataChannelManagerBase@@QEBAPEAVbdDataChannelUserInfo@@XZ(this);
}

/*
==============
bdDataChannelManagerBase::getAuthToken
==============
*/

const char *__fastcall bdDataChannelManagerBase::getAuthToken(bdDataChannelManagerBase *this)
{
  return ?getAuthToken@bdDataChannelManagerBase@@QEBAPEBDXZ(this);
}

/*
==============
bdDataChannelManagerBase::bdDataChannelManagerBase
==============
*/

void __fastcall bdDataChannelManagerBase::bdDataChannelManagerBase(bdDataChannelManagerBase *this)
{
  ??0bdDataChannelManagerBase@@QEAA@XZ(this);
}

/*
==============
bdDataChannelManagerBase::getError
==============
*/

int __fastcall bdDataChannelManagerBase::getError(bdDataChannelManagerBase *this)
{
  return ?getError@bdDataChannelManagerBase@@QEAAHXZ(this);
}

/*
==============
bdDataChannelManagerBase::populateEndpointAndClient
==============
*/

bool __fastcall bdDataChannelManagerBase::populateEndpointAndClient(bdDataChannelManagerBase *this, const char *const endpoint, const char *const client, unsigned __int64 userId, bdHTTP *http)
{
  return ?populateEndpointAndClient@bdDataChannelManagerBase@@IEAA_NQEBD0_KPEAVbdHTTP@@@Z(this, endpoint, client, userId, http);
}

/*
==============
bdDataChannelManagerBase::flushAllMessageQueues
==============
*/

bool __fastcall bdDataChannelManagerBase::flushAllMessageQueues(bdDataChannelManagerBase *this, float timeoutInSeconds)
{
  return ?flushAllMessageQueues@bdDataChannelManagerBase@@QEAA_NM@Z(this, timeoutInSeconds);
}

/*
==============
bdDataChannelManagerBase::incrementCurrentMessageQueueSize
==============
*/

void __fastcall bdDataChannelManagerBase::incrementCurrentMessageQueueSize(bdDataChannelManagerBase *this, unsigned int size)
{
  ?incrementCurrentMessageQueueSize@bdDataChannelManagerBase@@AEAAXI@Z(this, size);
}

/*
==============
bdDataChannelManagerBase::~bdDataChannelManagerBase
==============
*/

void __fastcall bdDataChannelManagerBase::~bdDataChannelManagerBase(bdDataChannelManagerBase *this)
{
  ??1bdDataChannelManagerBase@@UEAA@XZ(this);
}

/*
==============
bdDataChannelManagerBase::getFailureCode
==============
*/

bdDataChannelManagerBase::bdDataChannelFailureCode __fastcall bdDataChannelManagerBase::getFailureCode(bdDataChannelManagerBase *this)
{
  return ?getFailureCode@bdDataChannelManagerBase@@QEAA?AW4bdDataChannelFailureCode@1@XZ(this);
}

/*
==============
bdDataChannelManagerBase::getTokenExpiry
==============
*/

unsigned __int64 __fastcall bdDataChannelManagerBase::getTokenExpiry(bdDataChannelManagerBase *this)
{
  return ?getTokenExpiry@bdDataChannelManagerBase@@QEBA_KXZ(this);
}

/*
==============
bdDataChannelManagerBase::getEndpoint
==============
*/

const char *__fastcall bdDataChannelManagerBase::getEndpoint(bdDataChannelManagerBase *this)
{
  return ?getEndpoint@bdDataChannelManagerBase@@QEBAPEBDXZ(this);
}

/*
==============
bdDataChannelManagerBase::destroy
==============
*/

void __fastcall bdDataChannelManagerBase::destroy(bdDataChannelManagerBase *this)
{
  ?destroy@bdDataChannelManagerBase@@IEAAXXZ(this);
}

/*
==============
bdDataChannelManagerBase::setFailedOperation
==============
*/

void __fastcall bdDataChannelManagerBase::setFailedOperation(bdDataChannelManagerBase *this, bdDataChannelManagerBase::bdDataChannelFailureCode reason)
{
  ?setFailedOperation@bdDataChannelManagerBase@@IEAAXW4bdDataChannelFailureCode@1@@Z(this, reason);
}

/*
==============
bdDataChannelManagerBase::isMessageQueueEmpty
==============
*/

bool __fastcall bdDataChannelManagerBase::isMessageQueueEmpty(bdDataChannelManagerBase *this)
{
  return ?isMessageQueueEmpty@bdDataChannelManagerBase@@QEBA_NXZ(this);
}

/*
==============
bdDataChannelManagerBase::setAuthToken
==============
*/

void __fastcall bdDataChannelManagerBase::setAuthToken(bdDataChannelManagerBase *this, const char *const authToken, unsigned __int64 tokenExpiry)
{
  ?setAuthToken@bdDataChannelManagerBase@@QEAAXQEBD_K@Z(this, authToken, tokenExpiry);
}

/*
==============
bdDataChannelManagerBase::canIncrementCurrentMessageQueueSize
==============
*/

bool __fastcall bdDataChannelManagerBase::canIncrementCurrentMessageQueueSize(bdDataChannelManagerBase *this, unsigned int size)
{
  return ?canIncrementCurrentMessageQueueSize@bdDataChannelManagerBase@@AEBA_NI@Z(this, size);
}

/*
==============
bdDataChannelManagerBase::setSuccessfulOperation
==============
*/

void __fastcall bdDataChannelManagerBase::setSuccessfulOperation(bdDataChannelManagerBase *this)
{
  ?setSuccessfulOperation@bdDataChannelManagerBase@@IEAAXXZ(this);
}

/*
==============
bdDataChannelManagerBase::getStatus
==============
*/

bdDataChannelManagerBase::bdDataChannelStatus __fastcall bdDataChannelManagerBase::getStatus(bdDataChannelManagerBase *this)
{
  return ?getStatus@bdDataChannelManagerBase@@QEAA?AW4bdDataChannelStatus@1@XZ(this);
}

/*
==============
bdDataChannelManagerBase::allowWrite
==============
*/

bool __fastcall bdDataChannelManagerBase::allowWrite(bdDataChannelManagerBase *this)
{
  return ?allowWrite@bdDataChannelManagerBase@@QEBA_NXZ(this);
}

/*
==============
bdDataChannelManagerBase::decrementCurrentMessageQueueSize
==============
*/

void __fastcall bdDataChannelManagerBase::decrementCurrentMessageQueueSize(bdDataChannelManagerBase *this, unsigned int size)
{
  ?decrementCurrentMessageQueueSize@bdDataChannelManagerBase@@AEAAXI@Z(this, size);
}

/*
==============
bdDataChannelManagerBase::bdDataChannelManagerBase
==============
*/
void bdDataChannelManagerBase::bdDataChannelManagerBase(bdDataChannelManagerBase *this)
{
  *(_QWORD *)&this->m_maxMessageQueueSize = 0x80000i64;
  this->m_userid = 0i64;
  this->__vftable = (bdDataChannelManagerBase_vtbl *)&bdDataChannelManagerBase::`vftable';
  this->m_userInfo = NULL;
  this->m_http = NULL;
  this->m_deleteHttp = 1;
  bdSequenceNumber::bdSequenceNumber(&this->m_newestMessageID, -1);
  *(_QWORD *)&this->m_currentStatus = 0i64;
  this->m_httpStatusCode = 0;
  *(_WORD *)&this->m_sendSecurely = 1;
  this->m_allowWrite = 1;
  memset_0(this->m_authToken, 0, sizeof(this->m_authToken));
}

/*
==============
bdDataChannelManagerBase::~bdDataChannelManagerBase
==============
*/
void bdDataChannelManagerBase::~bdDataChannelManagerBase(bdDataChannelManagerBase *this)
{
  bdDataChannelUserInfo *m_userInfo; 
  void (__fastcall ***v3)(_QWORD, __int64); 
  bdHTTP *m_http; 
  bdHTTP *v5; 

  this->__vftable = (bdDataChannelManagerBase_vtbl *)&bdDataChannelManagerBase::`vftable';
  this->m_currentStatus = BD_DATACHANNEL_STATUS_NOT_READY;
  m_userInfo = this->m_userInfo;
  if ( m_userInfo )
  {
    v3 = (void (__fastcall ***)(_QWORD, __int64))((char *)&m_userInfo->__vftable + *(int *)(*((_QWORD *)&m_userInfo->__vftable + 1) + 4i64) + 8);
    (**v3)(v3, 1i64);
  }
  this->m_userInfo = NULL;
  m_http = this->m_http;
  if ( m_http )
  {
    if ( m_http->getStatus(m_http) == BD_FAILED )
    {
      do
        bdPlatformTiming::sleep(0);
      while ( this->m_http->getStatus(this->m_http) == BD_FAILED );
    }
    if ( this->m_deleteHttp )
    {
      v5 = this->m_http;
      if ( v5 )
        ((void (__fastcall *)(bdHTTP *, __int64))v5->~bdHTTP)(v5, 1i64);
      this->m_deleteHttp = 0;
    }
    this->m_http = NULL;
  }
  memset_0(this->m_authToken, 0, sizeof(this->m_authToken));
  bdHandleAssert(this->m_currentMessageQueueSize == 0, "m_currentMessageQueueSize == 0", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bddatachannel\\bddatachannelmanagerbase.cpp", "bdDataChannelManagerBase::~bdDataChannelManagerBase", 0x29u, "m_currentMessageQueueSize expected to be 0", -2i64);
}

/*
==============
bdDataChannelManagerBase::allowWrite
==============
*/
_BOOL8 bdDataChannelManagerBase::allowWrite(bdDataChannelManagerBase *this)
{
  return this->m_allowWrite;
}

/*
==============
bdDataChannelManagerBase::canIncrementCurrentMessageQueueSize
==============
*/
bool bdDataChannelManagerBase::canIncrementCurrentMessageQueueSize(bdDataChannelManagerBase *this, unsigned int size)
{
  return this->m_currentMessageQueueSize + size <= this->m_maxMessageQueueSize;
}

/*
==============
bdDataChannelManagerBase::decrementCurrentMessageQueueSize
==============
*/
void bdDataChannelManagerBase::decrementCurrentMessageQueueSize(bdDataChannelManagerBase *this, unsigned int size)
{
  bdHandleAssert(size <= this->m_currentMessageQueueSize, "size <= m_currentMessageQueueSize", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bddatachannel\\bddatachannelmanagerbase.cpp", "bdDataChannelManagerBase::decrementCurrentMessageQueueSize", 0x116u, "m_currentMessageQueueSize underflow");
  this->m_currentMessageQueueSize -= size;
}

/*
==============
bdDataChannelManagerBase::destroy
==============
*/
void bdDataChannelManagerBase::destroy(bdDataChannelManagerBase *this)
{
  bdDataChannelUserInfo *m_userInfo; 
  __int64 v3; 
  bdHTTP *m_http; 
  bdHTTP *v5; 

  this->m_currentStatus = BD_DATACHANNEL_STATUS_NOT_READY;
  m_userInfo = this->m_userInfo;
  if ( m_userInfo )
  {
    v3 = *(int *)(*((_QWORD *)&m_userInfo->__vftable + 1) + 4i64);
    (**(void (__fastcall ***)(__int64, __int64))((char *)&m_userInfo->__vftable + v3 + 8))((__int64)&m_userInfo->__vftable + v3 + 8, 1i64);
  }
  m_http = this->m_http;
  this->m_userInfo = NULL;
  if ( m_http )
  {
    if ( m_http->getStatus(m_http) == BD_FAILED )
    {
      do
        bdPlatformTiming::sleep(0);
      while ( this->m_http->getStatus(this->m_http) == BD_FAILED );
    }
    if ( this->m_deleteHttp )
    {
      v5 = this->m_http;
      if ( v5 )
        ((void (__fastcall *)(bdHTTP *, __int64))v5->~bdHTTP)(v5, 1i64);
      this->m_deleteHttp = 0;
    }
    this->m_http = NULL;
  }
  memset_0(this->m_authToken, 0, sizeof(this->m_authToken));
}

/*
==============
bdDataChannelManagerBase::flushAllMessageQueues
==============
*/

bool __fastcall bdDataChannelManagerBase::flushAllMessageQueues(bdDataChannelManagerBase *this, double timeoutInSeconds)
{
  unsigned __int64 HiResTimeStamp; 
  unsigned __int64 v7; 
  bdDataChannelManagerBase::bdDataChannelStatus m_currentStatus; 
  bdDataChannelManagerBase::bdDataChannelStatus v9; 
  char v10; 
  char v11; 
  bool result; 
  double v16; 
  double v17; 

  __asm
  {
    vmovaps [rsp+68h+var_18], xmm6
    vmovaps xmm6, xmm1
  }
  this->m_allowWrite = 0;
  HiResTimeStamp = bdPlatformTiming::getHiResTimeStamp();
  v7 = HiResTimeStamp;
  if ( this->m_currentMessageQueueSize )
  {
    while ( this->m_http )
    {
      m_currentStatus = this->m_currentStatus;
      v9 = m_currentStatus;
      if ( m_currentStatus > BD_DATACHANNEL_STATUS_NOT_READY && m_currentStatus <= BD_DATACHANNEL_STATUS_PENDING )
      {
        this->internalUpdate(this);
        v9 = this->m_currentStatus;
      }
      for ( ; v9 == BD_DATACHANNEL_STATUS_PENDING; v7 = bdPlatformTiming::getHiResTimeStamp() )
      {
        *(double *)&_XMM0 = bdPlatformTiming::getElapsedTime(HiResTimeStamp, v7);
        __asm { vcomiss xmm0, xmm6 }
        if ( !(v10 | v11) )
          break;
        bdPlatformTiming::sleep(0);
        if ( this->m_http )
        {
          v9 = this->m_currentStatus;
          if ( v9 > BD_DATACHANNEL_STATUS_NOT_READY && v9 <= BD_DATACHANNEL_STATUS_PENDING )
          {
            this->internalUpdate(this);
            v9 = this->m_currentStatus;
          }
        }
        else
        {
          v9 = BD_DATACHANNEL_STATUS_NOT_READY;
        }
      }
      if ( v9 != BD_DATACHANNEL_STATUS_OK )
        break;
      if ( !this->m_currentMessageQueueSize )
      {
        this->m_allowWrite = 1;
        result = 1;
        goto LABEL_17;
      }
    }
    *(double *)&_XMM0 = bdPlatformTiming::getElapsedTime(HiResTimeStamp, v7);
    __asm
    {
      vcvtss2sd xmm1, xmm0, xmm0
      vmovsd  [rsp+68h+var_20], xmm1
      vcvtss2sd xmm2, xmm6, xmm6
      vmovsd  [rsp+68h+var_28], xmm2
    }
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdOutOfBand/bdDataChannelEventManagerImpl", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bddatachannel\\bddatachannelmanagerbase.cpp", "bdDataChannelManagerBase::flushAllMessageQueues", 0x97u, "flushAllMessageQueues() did not complete due to failed sent message or timeout, %u bytes left to flush. Timeout [%.7g] Elapsed time [%.7g]", this->m_currentMessageQueueSize, v16, v17);
    result = 0;
    this->m_allowWrite = 1;
  }
  else
  {
    this->m_allowWrite = 1;
    result = 1;
  }
LABEL_17:
  __asm { vmovaps xmm6, [rsp+68h+var_18] }
  return result;
}

/*
==============
bdDataChannelManagerBase::getAuthToken
==============
*/
char *bdDataChannelManagerBase::getAuthToken(bdDataChannelManagerBase *this)
{
  return this->m_authToken;
}

/*
==============
bdDataChannelManagerBase::getEndpoint
==============
*/
char *bdDataChannelManagerBase::getEndpoint(bdDataChannelManagerBase *this)
{
  return this->m_gluttonEndpoint;
}

/*
==============
bdDataChannelManagerBase::getError
==============
*/
__int64 bdDataChannelManagerBase::getError(bdDataChannelManagerBase *this)
{
  return (unsigned int)this->m_httpStatusCode;
}

/*
==============
bdDataChannelManagerBase::getFailureCode
==============
*/
__int64 bdDataChannelManagerBase::getFailureCode(bdDataChannelManagerBase *this)
{
  return (unsigned int)this->m_currentFailure;
}

/*
==============
bdDataChannelManagerBase::getMessageQueueSize
==============
*/
__int64 bdDataChannelManagerBase::getMessageQueueSize(bdDataChannelManagerBase *this)
{
  return this->m_currentMessageQueueSize;
}

/*
==============
bdDataChannelManagerBase::getStatus
==============
*/
__int64 bdDataChannelManagerBase::getStatus(bdDataChannelManagerBase *this)
{
  return (unsigned int)this->m_currentStatus;
}

/*
==============
bdDataChannelManagerBase::getTokenExpiry
==============
*/
unsigned __int64 bdDataChannelManagerBase::getTokenExpiry(bdDataChannelManagerBase *this)
{
  return this->m_tokenExpiry;
}

/*
==============
bdDataChannelManagerBase::getUserInfo
==============
*/
bdDataChannelUserInfo *bdDataChannelManagerBase::getUserInfo(bdDataChannelManagerBase *this)
{
  return this->m_userInfo;
}

/*
==============
bdDataChannelManagerBase::incrementCurrentMessageQueueSize
==============
*/
void bdDataChannelManagerBase::incrementCurrentMessageQueueSize(bdDataChannelManagerBase *this, unsigned int size)
{
  bdHandleAssert(size + this->m_currentMessageQueueSize <= this->m_maxMessageQueueSize, "canIncrementCurrentMessageQueueSize(size)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bddatachannel\\bddatachannelmanagerbase.cpp", "bdDataChannelManagerBase::incrementCurrentMessageQueueSize", 0x110u, "canIncrementCurrentMessageQueueSize failed");
  this->m_currentMessageQueueSize += size;
}

/*
==============
bdDataChannelManagerBase::isMessageQueueEmpty
==============
*/
bool bdDataChannelManagerBase::isMessageQueueEmpty(bdDataChannelManagerBase *this)
{
  return this->m_currentMessageQueueSize == 0;
}

/*
==============
bdDataChannelManagerBase::populateEndpointAndClient
==============
*/
__int64 bdDataChannelManagerBase::populateEndpointAndClient(bdDataChannelManagerBase *this, const char *const endpoint, const char *const client, unsigned __int64 userId, bdHTTP *http)
{
  unsigned __int8 v9; 
  bdHTTP *v10; 
  unsigned __int64 v11; 
  __int64 result; 

  v9 = 1;
  memset_0(this->m_httpDownloadBuffer, 0, sizeof(this->m_httpDownloadBuffer));
  if ( !this->m_http )
  {
    v10 = http;
    if ( http )
    {
      this->m_deleteHttp = 0;
    }
    else
    {
      v10 = bdHTTPUtility::newHTTP(0, 0);
      this->m_deleteHttp = 1;
    }
    this->m_http = v10;
  }
  if ( bdStrlcpy(this->m_gluttonEndpoint, endpoint, 0x400ui64) >= 0x40 )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdOutOfBand/bdDataChannelEventManagerImpl", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bddatachannel\\bddatachannelmanagerbase.cpp", "bdDataChannelManagerBase::populateEndpointAndClient", 0xBDu, "Failed to copy the endpoint string.");
    v9 = 0;
    this->m_currentStatus = BD_DATACHANNEL_STATUS_FAILED;
    this->m_currentFailure = BD_DATACHANNEL_FAILURE_SET_ENDPOINT;
  }
  v11 = bdStrlcpy(this->m_client, client, 0x40ui64);
  if ( v9 && v11 >= 0x40 )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdOutOfBand/bdDataChannelEventManagerImpl", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bddatachannel\\bddatachannelmanagerbase.cpp", "bdDataChannelManagerBase::populateEndpointAndClient", 0xC4u, "Failed to copy the client string.");
    v9 = 0;
  }
  result = v9;
  this->m_userid = userId;
  *(_QWORD *)&this->m_currentStatus = 1i64;
  return result;
}

/*
==============
bdDataChannelManagerBase::pump
==============
*/
__int64 bdDataChannelManagerBase::pump(bdDataChannelManagerBase *this)
{
  bdDataChannelManagerBase::bdDataChannelStatus m_currentStatus; 
  bdDataChannelManagerBase::bdDataChannelStatus v4; 

  if ( !this->m_http )
    return 0i64;
  m_currentStatus = this->m_currentStatus;
  v4 = m_currentStatus;
  if ( m_currentStatus > BD_DATACHANNEL_STATUS_NOT_READY && m_currentStatus <= BD_DATACHANNEL_STATUS_PENDING )
  {
    this->internalUpdate(this);
    return (unsigned int)this->m_currentStatus;
  }
  return (unsigned int)v4;
}

/*
==============
bdDataChannelManagerBase::setAuthToken
==============
*/
void bdDataChannelManagerBase::setAuthToken(bdDataChannelManagerBase *this, const char *const authToken, unsigned __int64 tokenExpiry)
{
  bdDataChannelUtilities::buildAuthToken(this->m_authToken, authToken, 0x1030u);
  this->m_tokenExpiry = tokenExpiry;
}

/*
==============
bdDataChannelManagerBase::setFailedOperation
==============
*/
void bdDataChannelManagerBase::setFailedOperation(bdDataChannelManagerBase *this, bdDataChannelManagerBase::bdDataChannelFailureCode reason)
{
  this->m_currentStatus = BD_DATACHANNEL_STATUS_FAILED;
  this->m_currentFailure = reason;
}

/*
==============
bdDataChannelManagerBase::setMaxMessageQueueSize
==============
*/
void bdDataChannelManagerBase::setMaxMessageQueueSize(bdDataChannelManagerBase *this, unsigned int maxSizeInBytes)
{
  this->m_maxMessageQueueSize = maxSizeInBytes;
}

/*
==============
bdDataChannelManagerBase::setSuccessfulOperation
==============
*/
void bdDataChannelManagerBase::setSuccessfulOperation(bdDataChannelManagerBase *this)
{
  *(_QWORD *)&this->m_currentStatus = 1i64;
}

/*
==============
bdDataChannelManagerBase::setUserInfo
==============
*/
void bdDataChannelManagerBase::setUserInfo(bdDataChannelManagerBase *this, const bdDataChannelUserInfoV2 *userInfo)
{
  bdDataChannelUserInfo *m_userInfo; 
  __int64 v5; 

  m_userInfo = this->m_userInfo;
  if ( m_userInfo )
  {
    v5 = *(int *)(*((_QWORD *)&m_userInfo->__vftable + 1) + 4i64);
    (**(void (__fastcall ***)(__int64, __int64))((char *)&m_userInfo->__vftable + v5 + 8))((__int64)&m_userInfo->__vftable + v5 + 8, 1i64);
  }
  this->m_userInfo = userInfo->clone(userInfo);
}

