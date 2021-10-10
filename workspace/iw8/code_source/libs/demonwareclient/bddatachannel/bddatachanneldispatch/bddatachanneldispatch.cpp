/*
==============
bdDataChannelDispatch::init
==============
*/

bool __fastcall bdDataChannelDispatch::init(bdDataChannelDispatch *this)
{
  return ?init@bdDataChannelDispatch@@QEAA_NXZ(this);
}

/*
==============
bdDataChannelDispatch::getLastPostTime
==============
*/

unsigned __int64 __fastcall bdDataChannelDispatch::getLastPostTime(bdDataChannelDispatch *this)
{
  return ?getLastPostTime@bdDataChannelDispatch@@IEBA_KXZ(this);
}

/*
==============
bdDataChannelDispatch::setAuthToken
==============
*/

bool __fastcall bdDataChannelDispatch::setAuthToken(bdDataChannelDispatch *this, const char *const authToken)
{
  return ?setAuthToken@bdDataChannelDispatch@@QEAA_NQEBD@Z(this, authToken);
}

/*
==============
bdDataChannelDispatch::bdDataChannelDispatch
==============
*/

void __fastcall bdDataChannelDispatch::bdDataChannelDispatch(bdDataChannelDispatch *this, const char *const ingestionEndpoint, const bdDataChannelUserInfoV2 *userInfo, const char *const authToken, const char *const client, unsigned __int64 titleId, const char *const msgName, const char *const msgSchemaGuid, unsigned int msgSchemaGuidSize)
{
  ??0bdDataChannelDispatch@@QEAA@QEBDAEBVbdDataChannelUserInfoV2@@00_K0QEBCI@Z(this, ingestionEndpoint, userInfo, authToken, client, titleId, msgName, msgSchemaGuid, msgSchemaGuidSize);
}

/*
==============
bdDataChannelDispatch::bdDataChannelDispatch
==============
*/

void __fastcall bdDataChannelDispatch::bdDataChannelDispatch(bdDataChannelDispatch *this, const char *const ingestionEndpoint, const char *const authToken, const char *const bucket, const char *const category, const char *const client, bdDataChannelBase::bdDataChannelContentType contentType, bool isDLog)
{
  ??0bdDataChannelDispatch@@QEAA@QEBD0000W4bdDataChannelContentType@bdDataChannelBase@@_N@Z(this, ingestionEndpoint, authToken, bucket, category, client, contentType, isDLog);
}

/*
==============
bdDataChannelDispatch::bdDataChannelDispatch
==============
*/

void __fastcall bdDataChannelDispatch::bdDataChannelDispatch(bdDataChannelDispatch *this, const char *const ingestionEndpoint, const char *const authToken, const char *const bucket, const char *const category, const char *const client, unsigned __int64 userid, bdDataChannelBase::bdDataChannelContentType contentType, bool isDLog)
{
  ??0bdDataChannelDispatch@@QEAA@QEBD0000_KW4bdDataChannelContentType@bdDataChannelBase@@_N@Z(this, ingestionEndpoint, authToken, bucket, category, client, userid, contentType, isDLog);
}

/*
==============
bdDataChannelDispatch::getStatus
==============
*/

bdDataChannelDispatch::bdDispatchStatus __fastcall bdDataChannelDispatch::getStatus(bdDataChannelDispatch *this)
{
  return ?getStatus@bdDataChannelDispatch@@QEAA?AW4bdDispatchStatus@1@XZ(this);
}

/*
==============
bdDataChannelDispatch::write
==============
*/

bool __fastcall bdDataChannelDispatch::write(bdDataChannelDispatch *this, const unsigned __int8 *const data, unsigned int size, bdMessageEnvelopeBase::bdMsgSerializationType msgSerializationType, bdMessageEnvelopeBase::bdMsgCompressionType msgCompressionType)
{
  return ?write@bdDataChannelDispatch@@QEAA_NQEBEIW4bdMsgSerializationType@bdMessageEnvelopeBase@@W4bdMsgCompressionType@3@@Z(this, data, size, msgSerializationType, msgCompressionType);
}

/*
==============
bdDataChannelDispatch::bdDataChannelDispatch
==============
*/

void __fastcall bdDataChannelDispatch::bdDataChannelDispatch(bdDataChannelDispatch *this, const char *const ingestionEndpoint, const char *const authToken, const char *const client, unsigned __int64 userId, unsigned __int64 titleId, const char *const msgName, const char *const msgSchemaGuid, unsigned int msgSchemaGuidSize, const char *const userAcctType)
{
  ??0bdDataChannelDispatch@@QEAA@QEBD00_K10QEBCI0@Z(this, ingestionEndpoint, authToken, client, userId, titleId, msgName, msgSchemaGuid, msgSchemaGuidSize, userAcctType);
}

/*
==============
bdDataChannelDispatch::getError
==============
*/

int __fastcall bdDataChannelDispatch::getError(bdDataChannelDispatch *this)
{
  return ?getError@bdDataChannelDispatch@@QEAAHXZ(this);
}

/*
==============
bdDataChannelDispatch::getErrorString
==============
*/

const char *__fastcall bdDataChannelDispatch::getErrorString(bdDataChannelDispatch *this)
{
  return ?getErrorString@bdDataChannelDispatch@@QEBAPEBDXZ(this);
}

/*
==============
bdDataChannelDispatch::reset
==============
*/

bool __fastcall bdDataChannelDispatch::reset(bdDataChannelDispatch *this)
{
  return ?reset@bdDataChannelDispatch@@QEAA_NXZ(this);
}

/*
==============
bdDataChannelDispatch::updateInternal
==============
*/

void __fastcall bdDataChannelDispatch::updateInternal(bdDataChannelDispatch *this)
{
  ?updateInternal@bdDataChannelDispatch@@IEAAXXZ(this);
}

/*
==============
bdDataChannelDispatch::setKeepAlive
==============
*/

void __fastcall bdDataChannelDispatch::setKeepAlive(bdDataChannelDispatch *this, bool keepAlive)
{
  ?setKeepAlive@bdDataChannelDispatch@@QEAAX_N@Z(this, keepAlive);
}

/*
==============
bdDataChannelDispatch::~bdDataChannelDispatch
==============
*/

void __fastcall bdDataChannelDispatch::~bdDataChannelDispatch(bdDataChannelDispatch *this)
{
  ??1bdDataChannelDispatch@@UEAA@XZ(this);
}

/*
==============
bdDataChannelDispatch::setStatus
==============
*/

bool __fastcall bdDataChannelDispatch::setStatus(bdDataChannelDispatch *this, bdDataChannelDispatch::bdDispatchStatus status, const char *const error)
{
  return ?setStatus@bdDataChannelDispatch@@IEAA_NW4bdDispatchStatus@1@QEBD@Z(this, status, error);
}

/*
==============
bdDataChannelDispatch::pump
==============
*/

bdDataChannelDispatch::bdDispatchStatus __fastcall bdDataChannelDispatch::pump(bdDataChannelDispatch *this)
{
  return ?pump@bdDataChannelDispatch@@QEAA?AW4bdDispatchStatus@1@XZ(this);
}

/*
==============
bdDataChannelDispatch::internalWrite
==============
*/

bool __fastcall bdDataChannelDispatch::internalWrite(bdDataChannelDispatch *this, const unsigned __int8 *data, unsigned int size, bdDataChannelBase::bdDataChannelContentType contentType)
{
  return ?internalWrite@bdDataChannelDispatch@@IEAA_NPEBEIW4bdDataChannelContentType@bdDataChannelBase@@@Z(this, data, size, contentType);
}

/*
==============
bdDataChannelDispatch::bdDataChannelDispatch
==============
*/
void bdDataChannelDispatch::bdDataChannelDispatch(bdDataChannelDispatch *this, const char *const ingestionEndpoint, const char *const authToken, const char *const bucket, const char *const category, const char *const client, bdDataChannelBase::bdDataChannelContentType contentType, bool isDLog)
{
  unsigned __int64 v12; 
  unsigned __int64 v13; 
  unsigned __int64 v14; 
  size_t v15; 

  bdDataChannelBase::bdDataChannelBase(this, NULL);
  this->__vftable = (bdDataChannelDispatch_vtbl *)&bdDataChannelDispatch::`vftable';
  this->m_contentType = contentType;
  this->m_isDLog = isDLog;
  this->m_http = NULL;
  *(_QWORD *)&this->m_currentStatus = 0i64;
  this->m_hasData = 0;
  this->m_lastPostTime = 0i64;
  this->m_userInfo = NULL;
  this->m_msgSchemaGuidSize = 0;
  this->m_useMsgEnvelope = 0;
  this->m_data.m_ptr = NULL;
  bdUUIDGenerator::bdUUIDGenerator(&this->m_uuidGenerator);
  bdHandleAssert(ingestionEndpoint != NULL, "ingestionEndpoint != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bddatachannel\\bddatachanneldispatch\\bddatachanneldispatch.cpp", "bdDataChannelDispatch::bdDataChannelDispatch", 0xA7u, "Error in arguement list: 'ingestionEndpoint' cannot be null.");
  bdHandleAssert(bucket != NULL, "bucket != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bddatachannel\\bddatachanneldispatch\\bddatachanneldispatch.cpp", "bdDataChannelDispatch::bdDataChannelDispatch", 0xA9u, "The bucket must not be null.");
  bdHandleAssert(bucket != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v12 = -1i64;
  v13 = -1i64;
  do
    ++v13;
  while ( bucket[v13] );
  bdHandleAssert(v13 < 0x40, "bdStrlen(bucket) < BD_DATACHANNEL_MAX_BUCKET_LENGTH", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bddatachannel\\bddatachanneldispatch\\bddatachanneldispatch.cpp", "bdDataChannelDispatch::bdDataChannelDispatch", 0xAAu, "The length of the bucket string is longer than the buffer.");
  bdStrlcpy(this->m_bucket, bucket, 0x40ui64);
  bdHandleAssert(category != NULL, "category != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bddatachannel\\bddatachanneldispatch\\bddatachanneldispatch.cpp", "bdDataChannelDispatch::bdDataChannelDispatch", 0xADu, "The category must not be null.");
  bdHandleAssert(category != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v14 = -1i64;
  do
    ++v14;
  while ( category[v14] );
  bdHandleAssert(v14 < 0x40, "bdStrlen(category) < BD_DATACHANNEL_MAX_CATEGORY_LENGTH", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bddatachannel\\bddatachanneldispatch\\bddatachanneldispatch.cpp", "bdDataChannelDispatch::bdDataChannelDispatch", 0xAEu, "The length of the category string is longer than the buffer.");
  bdStrlcpy(this->m_category, category, 0x40ui64);
  if ( ingestionEndpoint )
  {
    if ( authToken )
    {
      buildEndpointURL(this->m_endpoint, 1, ingestionEndpoint, this->m_bucket, this->m_category, client, 0i64);
      bdDataChannelDispatch::setAuthToken(this, authToken);
    }
    else
    {
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdDataChannel/bdDataChannelDispatch", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bddatachannel\\bddatachanneldispatch\\bddatachanneldispatch.cpp", "bdDataChannelDispatch::bdDataChannelDispatch", 0xB5u, "You are submitting a data channel request without an authToken! This will fail in production!");
      buildEndpointURL(this->m_endpoint, 0, ingestionEndpoint, this->m_bucket, this->m_category, client, 0i64);
    }
    bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
    do
      ++v12;
    while ( statusDataChannelOK[v12] );
    if ( this != (bdDataChannelDispatch *)-1469i64 )
    {
      v15 = 254i64;
      if ( v12 < 0xFE )
        v15 = v12;
      memcpy_0(this->m_httpError, "No Error", v15);
      this->m_httpError[v15] = 0;
    }
    memset_0(this->m_httpDownloadBuffer, 0, sizeof(this->m_httpDownloadBuffer));
    this->m_http = bdHTTPUtility::newHTTP(0, 0);
  }
}

/*
==============
bdDataChannelDispatch::bdDataChannelDispatch
==============
*/
void bdDataChannelDispatch::bdDataChannelDispatch(bdDataChannelDispatch *this, const char *const ingestionEndpoint, const char *const authToken, const char *const bucket, const char *const category, const char *const client, unsigned __int64 userid, bdDataChannelBase::bdDataChannelContentType contentType, bool isDLog)
{
  __int64 v13; 
  unsigned __int64 v14; 
  unsigned __int64 v15; 
  unsigned __int64 v16; 
  size_t v17; 

  bdDataChannelBase::bdDataChannelBase(this, NULL);
  this->__vftable = (bdDataChannelDispatch_vtbl *)&bdDataChannelDispatch::`vftable';
  this->m_contentType = contentType;
  this->m_isDLog = isDLog;
  this->m_http = NULL;
  *(_QWORD *)&this->m_currentStatus = 0i64;
  this->m_hasData = 0;
  this->m_lastPostTime = 0i64;
  this->m_userInfo = NULL;
  this->m_msgSchemaGuidSize = 0;
  this->m_useMsgEnvelope = 0;
  this->m_data.m_ptr = NULL;
  bdUUIDGenerator::bdUUIDGenerator(&this->m_uuidGenerator);
  bdHandleAssert(bucket != NULL, "bucket != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bddatachannel\\bddatachanneldispatch\\bddatachanneldispatch.cpp", "bdDataChannelDispatch::bdDataChannelDispatch", 0xDBu, "The bucket must not be null.");
  bdHandleAssert(bucket != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v13 = -1i64;
  v14 = -1i64;
  do
    ++v14;
  while ( bucket[v14] );
  bdHandleAssert(v14 < 0x40, "bdStrlen(bucket) < BD_DATACHANNEL_MAX_BUCKET_LENGTH", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bddatachannel\\bddatachanneldispatch\\bddatachanneldispatch.cpp", "bdDataChannelDispatch::bdDataChannelDispatch", 0xDCu, "The length of the bucket string is longer than the buffer.");
  bdStrlcpy(this->m_bucket, bucket, 0x40ui64);
  bdHandleAssert(category != NULL, "category != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bddatachannel\\bddatachanneldispatch\\bddatachanneldispatch.cpp", "bdDataChannelDispatch::bdDataChannelDispatch", 0xDFu, "The category must not be null.");
  bdHandleAssert(category != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v15 = -1i64;
  do
    ++v15;
  while ( category[v15] );
  bdHandleAssert(v15 < 0x40, "bdStrlen(category) < BD_DATACHANNEL_MAX_CATEGORY_LENGTH", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bddatachannel\\bddatachanneldispatch\\bddatachanneldispatch.cpp", "bdDataChannelDispatch::bdDataChannelDispatch", 0xE0u, "The length of the category string is longer than the buffer.");
  bdStrlcpy(this->m_category, category, 0x40ui64);
  bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v16 = -1i64;
  do
    ++v16;
  while ( statusDataChannelOK[v16] );
  if ( this != (bdDataChannelDispatch *)-1469i64 )
  {
    v17 = 254i64;
    if ( v16 < 0xFE )
      v17 = v16;
    memcpy_0(this->m_httpError, "No Error", v17);
    this->m_httpError[v17] = 0;
  }
  memset_0(this->m_httpDownloadBuffer, 0, sizeof(this->m_httpDownloadBuffer));
  bdHandleAssert(authToken != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  do
    ++v13;
  while ( authToken[v13] );
  buildEndpointURL(this->m_endpoint, v13 != 0, ingestionEndpoint, this->m_bucket, this->m_category, client, userid);
  bdDataChannelDispatch::setAuthToken(this, authToken);
}

/*
==============
bdDataChannelDispatch::bdDataChannelDispatch
==============
*/
void bdDataChannelDispatch::bdDataChannelDispatch(bdDataChannelDispatch *this, const char *const ingestionEndpoint, const char *const authToken, const char *const client, unsigned __int64 userId, unsigned __int64 titleId, const char *const msgName, const char *const msgSchemaGuid, unsigned int msgSchemaGuidSize, const char *const userAcctType)
{
  unsigned __int64 v12; 
  unsigned __int64 v13; 
  unsigned __int64 v14; 
  unsigned __int64 v15; 
  size_t v16; 

  bdDataChannelBase::bdDataChannelBase(this, NULL);
  this->__vftable = (bdDataChannelDispatch_vtbl *)&bdDataChannelDispatch::`vftable';
  this->m_contentType = BD_CONTENT_TYPE_BINARY;
  this->m_isDLog = 0;
  this->m_http = NULL;
  *(_QWORD *)&this->m_currentStatus = 0i64;
  this->m_hasData = 0;
  this->m_lastPostTime = 0i64;
  this->m_userInfo = NULL;
  this->m_userId = userId;
  this->m_titleId = titleId;
  this->m_msgSchemaGuidSize = 0;
  this->m_useMsgEnvelope = 1;
  this->m_data.m_ptr = NULL;
  bdUUIDGenerator::bdUUIDGenerator(&this->m_uuidGenerator);
  bdHandleAssert(titleId != 0, "titleId > 0", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bddatachannel\\bddatachanneldispatch\\bddatachanneldispatch.cpp", "bdDataChannelDispatch::bdDataChannelDispatch", 0x73u, "The 'titleId' must be valid and non-zero.");
  bdHandleAssert(client != NULL, "client != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bddatachannel\\bddatachanneldispatch\\bddatachanneldispatch.cpp", "bdDataChannelDispatch::bdDataChannelDispatch", 0x75u, "The client name must not be null.");
  bdHandleAssert(client != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v12 = -1i64;
  v13 = -1i64;
  do
    ++v13;
  while ( client[v13] );
  bdHandleAssert(v13 < 0x40, "bdStrlen(client) < BD_DATACHANNEL_MAX_CLIENT_NAME_LENGTH", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bddatachannel\\bddatachanneldispatch\\bddatachanneldispatch.cpp", "bdDataChannelDispatch::bdDataChannelDispatch", 0x77u, "The length of 'client' cannot be longer than 64.");
  bdStrlcpy(this->m_client, client, 0x40ui64);
  bdHandleAssert(msgName != NULL, "msgName != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bddatachannel\\bddatachanneldispatch\\bddatachanneldispatch.cpp", "bdDataChannelDispatch::bdDataChannelDispatch", 0x7Au, "The payload name must not be null.");
  bdHandleAssert(msgName != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v14 = -1i64;
  do
    ++v14;
  while ( msgName[v14] );
  bdHandleAssert(v14 < 0x40, "bdStrlen(msgName) < BD_DATACHANNEL_MAX_CATEGORY_LENGTH", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bddatachannel\\bddatachanneldispatch\\bddatachanneldispatch.cpp", "bdDataChannelDispatch::bdDataChannelDispatch", 0x7Cu, "The length of 'msgName' cannot be longer than 64");
  bdStrlcpy(this->m_msgName, msgName, 0x40ui64);
  *(__m256i *)this->m_msgSchemaGuid = *(__m256i *)msgSchemaGuid;
  this->m_msgSchemaGuidSize = msgSchemaGuidSize;
  bdHandleAssert(userAcctType != NULL, "userAcctType != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bddatachannel\\bddatachanneldispatch\\bddatachanneldispatch.cpp", "bdDataChannelDispatch::bdDataChannelDispatch", 0x82u, "The 'userAcctType' must not be null.");
  bdHandleAssert(userAcctType != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v15 = -1i64;
  do
    ++v15;
  while ( userAcctType[v15] );
  bdHandleAssert(v15 <= 0x20, "bdStrlen(userAcctType) <= BD_DATACHANNEL_MAX_USER_ACCOUNT_TYPE_LENGTH", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bddatachannel\\bddatachanneldispatch\\bddatachanneldispatch.cpp", "bdDataChannelDispatch::bdDataChannelDispatch", 0x84u, "The 'userAcctType' must not be longer than 32 in length.");
  bdStrlcpy(this->m_userAcctType, userAcctType, 0x20ui64);
  bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  do
    ++v12;
  while ( statusDataChannelOK[v12] );
  if ( this != (bdDataChannelDispatch *)-1469i64 )
  {
    v16 = 254i64;
    if ( v12 < 0xFE )
      v16 = v12;
    memcpy_0(this->m_httpError, "No Error", v16);
    this->m_httpError[v16] = 0;
  }
  memset_0(this->m_httpDownloadBuffer, 0, sizeof(this->m_httpDownloadBuffer));
  bdDataChannelUtilities::buildEndpointURLV2(this->m_endpoint, ingestionEndpoint, this->m_client, this->m_userId, titleId, this->m_userAcctType, this->m_msgName, bdDataChannelUtilities::DEFAULT_MESSAGE_STREAM_NAME);
  bdDataChannelDispatch::setAuthToken(this, authToken);
  this->m_http = bdHTTPUtility::newHTTP(0, 0);
}

/*
==============
bdDataChannelDispatch::bdDataChannelDispatch
==============
*/
void bdDataChannelDispatch::bdDataChannelDispatch(bdDataChannelDispatch *this, const char *const ingestionEndpoint, const bdDataChannelUserInfoV2 *userInfo, const char *const authToken, const char *const client, unsigned __int64 titleId, const char *const msgName, const char *const msgSchemaGuid, unsigned int msgSchemaGuidSize)
{
  unsigned __int64 v11; 
  unsigned __int64 v12; 
  unsigned __int64 v13; 
  const char *v14; 
  size_t v15; 

  bdDataChannelBase::bdDataChannelBase(this, NULL);
  this->__vftable = (bdDataChannelDispatch_vtbl *)&bdDataChannelDispatch::`vftable';
  this->m_contentType = BD_CONTENT_TYPE_BINARY;
  this->m_isDLog = 0;
  this->m_http = NULL;
  *(_QWORD *)&this->m_currentStatus = 0i64;
  this->m_hasData = 0;
  this->m_lastPostTime = 0i64;
  this->m_userInfo = NULL;
  this->m_titleId = titleId;
  this->m_msgSchemaGuidSize = 0;
  this->m_useMsgEnvelope = 1;
  this->m_data.m_ptr = NULL;
  bdUUIDGenerator::bdUUIDGenerator(&this->m_uuidGenerator);
  bdHandleAssert(titleId != 0, "titleId > 0", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bddatachannel\\bddatachanneldispatch\\bddatachanneldispatch.cpp", "bdDataChannelDispatch::bdDataChannelDispatch", 0x39u, "The 'titleId' must be valid and non-zero.");
  bdHandleAssert(client != NULL, "client != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bddatachannel\\bddatachanneldispatch\\bddatachanneldispatch.cpp", "bdDataChannelDispatch::bdDataChannelDispatch", 0x3Bu, "The client name must not be null.");
  bdHandleAssert(client != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v11 = -1i64;
  v12 = -1i64;
  do
    ++v12;
  while ( client[v12] );
  bdHandleAssert(v12 < 0x40, "bdStrlen(client) < BD_DATACHANNEL_MAX_CLIENT_NAME_LENGTH", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bddatachannel\\bddatachanneldispatch\\bddatachanneldispatch.cpp", "bdDataChannelDispatch::bdDataChannelDispatch", 0x3Du, "The length of 'client' cannot be longer than 64.");
  bdStrlcpy(this->m_client, client, 0x40ui64);
  bdHandleAssert(msgName != NULL, "msgName != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bddatachannel\\bddatachanneldispatch\\bddatachanneldispatch.cpp", "bdDataChannelDispatch::bdDataChannelDispatch", 0x40u, "The payload name must not be null.");
  bdHandleAssert(msgName != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v13 = -1i64;
  do
    ++v13;
  while ( msgName[v13] );
  bdHandleAssert(v13 < 0x40, "bdStrlen(msgName) < BD_DATACHANNEL_MAX_CATEGORY_LENGTH", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bddatachannel\\bddatachanneldispatch\\bddatachanneldispatch.cpp", "bdDataChannelDispatch::bdDataChannelDispatch", 0x42u, "The length of 'msgName' cannot be longer than 64");
  bdStrlcpy(this->m_msgName, msgName, 0x40ui64);
  bdHandleAssert(this->m_msgSchemaGuid != NULL, "m_msgSchemaGuid != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bddatachannel\\bddatachanneldispatch\\bddatachanneldispatch.cpp", "bdDataChannelDispatch::bdDataChannelDispatch", 0x45u, "The m_msgSchemaGuid must not be null.");
  bdHandleAssert(msgSchemaGuidSize <= 0x20, "msgSchemaGuidSize <= BD_DATACHANNEL_MAX_SCHEMA_GUID_LENGTH", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bddatachannel\\bddatachanneldispatch\\bddatachanneldispatch.cpp", "bdDataChannelDispatch::bdDataChannelDispatch", 0x47u, "The length of 'msgSchemaGuid' cannot be longer than 32");
  *(__m256i *)this->m_msgSchemaGuid = *(__m256i *)msgSchemaGuid;
  this->m_msgSchemaGuidSize = msgSchemaGuidSize;
  this->m_userInfo = userInfo->clone(userInfo);
  this->m_userId = bdDataChannelUserInfoV2::getUserId((bdDataChannelUserInfoV2 *)userInfo);
  *(_QWORD *)this->m_userAcctType = 0i64;
  *(_QWORD *)&this->m_userAcctType[8] = 0i64;
  *(_QWORD *)&this->m_userAcctType[16] = 0i64;
  *(_QWORD *)&this->m_userAcctType[24] = 0i64;
  v14 = bdDataChannelUserInfoV2::acctTypeEnumToString((bdDataChannelUserInfoV2 *)userInfo);
  bdStrlcpy(this->m_userAcctType, v14, 0x20ui64);
  bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  do
    ++v11;
  while ( statusDataChannelOK[v11] );
  if ( this != (bdDataChannelDispatch *)-1469i64 )
  {
    v15 = 254i64;
    if ( v11 < 0xFE )
      v15 = v11;
    memcpy_0(this->m_httpError, "No Error", v15);
    this->m_httpError[v15] = 0;
  }
  memset_0(this->m_httpDownloadBuffer, 0, sizeof(this->m_httpDownloadBuffer));
  bdDataChannelUtilities::buildEndpointURLV2(this->m_endpoint, ingestionEndpoint, this->m_client, this->m_userId, titleId, this->m_userAcctType, this->m_msgName, bdDataChannelUtilities::DEFAULT_MESSAGE_STREAM_NAME);
  bdDataChannelDispatch::setAuthToken(this, authToken);
  this->m_http = bdHTTPUtility::newHTTP(0, 0);
}

/*
==============
bdDataChannelDispatch::~bdDataChannelDispatch
==============
*/
void bdDataChannelDispatch::~bdDataChannelDispatch(bdDataChannelDispatch *this)
{
  bdDataChannelUserInfo *m_userInfo; 
  __int64 v3; 
  bdHTTP *m_http; 
  bdByteBuffer *m_ptr; 
  bdByteBuffer *v6; 

  this->__vftable = (bdDataChannelDispatch_vtbl *)&bdDataChannelDispatch::`vftable';
  memset_0(this->m_authToken, 0, sizeof(this->m_authToken));
  m_userInfo = this->m_userInfo;
  if ( m_userInfo )
  {
    v3 = *(int *)(*((_QWORD *)&m_userInfo->__vftable + 1) + 4i64);
    (**(void (__fastcall ***)(__int64, __int64))((char *)&m_userInfo->__vftable + v3 + 8))((__int64)&m_userInfo->__vftable + v3 + 8, 1i64);
  }
  m_http = this->m_http;
  this->m_userInfo = NULL;
  if ( m_http )
    ((void (__fastcall *)(bdHTTP *, __int64))m_http->~bdHTTP)(m_http, 1i64);
  this->m_http = NULL;
  bdUUIDGenerator::~bdUUIDGenerator(&this->m_uuidGenerator);
  m_ptr = this->m_data.m_ptr;
  if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
  {
    v6 = this->m_data.m_ptr;
    if ( v6 )
      ((void (__fastcall *)(bdByteBuffer *, __int64))v6->~bdReferencable)(v6, 1i64);
    this->m_data.m_ptr = NULL;
  }
  bdDataChannelBase::~bdDataChannelBase(this);
}

/*
==============
bdDataChannelDispatch::getError
==============
*/
__int64 bdDataChannelDispatch::getError(bdDataChannelDispatch *this)
{
  return this->m_httpStatusCode;
}

/*
==============
bdDataChannelDispatch::getErrorString
==============
*/
char *bdDataChannelDispatch::getErrorString(bdDataChannelDispatch *this)
{
  return this->m_httpError;
}

/*
==============
bdDataChannelDispatch::getLastPostTime
==============
*/
unsigned __int64 bdDataChannelDispatch::getLastPostTime(bdDataChannelDispatch *this)
{
  return this->m_lastPostTime;
}

/*
==============
bdDataChannelDispatch::getStatus
==============
*/
__int64 bdDataChannelDispatch::getStatus(bdDataChannelDispatch *this)
{
  return (unsigned int)this->m_currentStatus;
}

/*
==============
bdDataChannelDispatch::init
==============
*/
bool bdDataChannelDispatch::init(bdDataChannelDispatch *this)
{
  bdHTTP *m_http; 
  bool v3; 
  bdHTTP *v4; 

  m_http = this->m_http;
  v3 = m_http == NULL;
  if ( !m_http )
  {
    v4 = bdHTTPUtility::newHTTP(0, 0);
    this->m_http = v4;
    v3 = v4 == NULL;
  }
  return !v3;
}

/*
==============
bdDataChannelDispatch::internalWrite
==============
*/
bool bdDataChannelDispatch::internalWrite(bdDataChannelDispatch *this, const unsigned __int8 *data, unsigned int size, bdDataChannelBase::bdDataChannelContentType contentType)
{
  size_t v7; 
  unsigned __int64 v8; 
  char *m_httpError; 
  unsigned __int64 v10; 
  size_t v11; 
  const char *v12; 
  bool v13; 
  bool v14; 
  char *v16; 
  unsigned __int64 v17; 
  size_t v18; 

  if ( data && size )
  {
    v7 = 254i64;
    v8 = -1i64;
    if ( this->m_currentStatus != BD_DISPATCH_STATUS_PENDING )
    {
      this->m_currentStatus = BD_DISPATCH_STATUS_PENDING;
      m_httpError = this->m_httpError;
      bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
      v10 = -1i64;
      do
        ++v10;
      while ( statusDataChannelOperationPending[v10] );
      if ( m_httpError )
      {
        v11 = 254i64;
        if ( v10 < 0xFE )
          v11 = v10;
        memcpy_0(m_httpError, "HTTP Operation Pending", v11);
        m_httpError[v11] = 0;
      }
    }
    v12 = NULL;
    if ( contentType )
    {
      switch ( contentType )
      {
        case BD_CONTENT_TYPE_BINARY:
          v12 = "application/octet-stream";
          break;
        case BD_CONTENT_TYPE_JSON:
          v12 = "application/json";
          break;
        case BD_CONTENT_TYPE_PROTO:
          v12 = "application/x-protobuf";
          break;
        default:
          bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdDataChannel/bdDataChannelDispatch", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bddatachannel\\bddatachanneldispatch\\bddatachanneldispatch.cpp", "bdDataChannelDispatch::internalWrite", 0x19Du, "Invalid content type");
          if ( this->m_currentStatus != BD_DISPATCH_STATUS_FAILED )
          {
            this->m_currentStatus = BD_DISPATCH_STATUS_FAILED;
            bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
            do
              ++v8;
            while ( statusDataChannelInvalidContentType[v8] );
            if ( this != (bdDataChannelDispatch *)-1469i64 )
            {
              if ( v8 < 0xFE )
                v7 = v8;
              memcpy_0(this->m_httpError, "Invalid content type", v7);
              this->m_httpError[v7] = 0;
            }
          }
          break;
      }
    }
    else
    {
      v12 = "application/x-www-form-urlencoded";
    }
    v13 = ((unsigned __int8 (__fastcall *)(bdHTTP *, __int64, char *))this->m_http->initRequest)(this->m_http, 3i64, this->m_endpoint) && this->m_http->setHeader(this->m_http, "Content-Type", v12);
    v14 = v13 && (contentType != BD_CONTENT_TYPE_PROTO || this->m_http->setHeader(this->m_http, "Content-Type-Schema", "metrics-v1.proto")) && bdDataChannelUtilities::generateSecureHeaders(this->m_http, "*/*", this->m_authToken) && bdHTTP::setUploadData(this->m_http, data, size) && bdHTTP::setDownloadBuffer(this->m_http, this->m_httpDownloadBuffer, 0x400u) && this->m_http->sendRequest(this->m_http) == BD_FAILED;
    this->m_lastPostTime = bdPlatformTiming::getPOSIXTimestamp();
    this->m_hasData = v14;
    bdDataChannelDispatch::updateInternal(this);
    return this->m_currentStatus == BD_DISPATCH_STATUS_PENDING;
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdDataChannel/bdDataChannelDispatch", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bddatachannel\\bddatachanneldispatch\\bddatachanneldispatch.cpp", "bdDataChannelDispatch::internalWrite", 0x187u, "Attempting to write an empty payload!");
    if ( this->m_currentStatus != BD_DISPATCH_STATUS_FAILED )
    {
      this->m_currentStatus = BD_DISPATCH_STATUS_FAILED;
      v16 = this->m_httpError;
      bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
      v17 = -1i64;
      do
        ++v17;
      while ( statusDataChannelNoPayload[v17] );
      if ( v16 )
      {
        v18 = 254i64;
        if ( v17 < 0xFE )
          v18 = v17;
        memcpy_0(v16, "Attempting to write an empty payload!", v18);
        v16[v18] = 0;
      }
    }
    return 0;
  }
}

/*
==============
bdDataChannelDispatch::pump
==============
*/
__int64 bdDataChannelDispatch::pump(bdDataChannelDispatch *this)
{
  char *m_httpError; 
  unsigned __int64 v3; 
  size_t v4; 

  if ( this->m_currentStatus == BD_DISPATCH_STATUS_FAILED )
    return (unsigned int)this->m_currentStatus;
  if ( this->m_http )
  {
    if ( this->m_hasData )
    {
      bdDataChannelDispatch::updateInternal(this);
      return (unsigned int)this->m_currentStatus;
    }
    return (unsigned int)this->m_currentStatus;
  }
  this->m_currentStatus = BD_DISPATCH_STATUS_FAILED;
  m_httpError = this->m_httpError;
  bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v3 = -1i64;
  do
    ++v3;
  while ( statusDataChannelNoHTTPInterface[v3] );
  if ( !m_httpError )
    return (unsigned int)this->m_currentStatus;
  v4 = 254i64;
  if ( v3 < 0xFE )
    v4 = v3;
  memcpy_0(m_httpError, "No HTTP interface created.", v4);
  m_httpError[v4] = 0;
  return (unsigned int)this->m_currentStatus;
}

/*
==============
bdDataChannelDispatch::reset
==============
*/
bool bdDataChannelDispatch::reset(bdDataChannelDispatch *this)
{
  bool result; 
  char *m_httpError; 
  unsigned __int64 v4; 
  size_t v5; 

  result = 1;
  if ( this->m_currentStatus != BD_DISPATCH_STATUS_OK )
  {
    this->m_currentStatus = BD_DISPATCH_STATUS_OK;
    m_httpError = this->m_httpError;
    bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
    v4 = -1i64;
    do
      ++v4;
    while ( statusDataChannelOK[v4] );
    if ( m_httpError )
    {
      v5 = 254i64;
      if ( v4 < 0xFE )
        v5 = v4;
      memcpy_0(m_httpError, "No Error", v5);
      m_httpError[v5] = 0;
    }
    result = v4 != 0;
  }
  this->m_hasData = 0;
  this->m_httpStatusCode = 0;
  return result;
}

/*
==============
bdDataChannelDispatch::setAuthToken
==============
*/
_BOOL8 bdDataChannelDispatch::setAuthToken(bdDataChannelDispatch *this, const char *const authToken)
{
  char *m_authToken; 
  bool v3; 
  int v5; 

  m_authToken = this->m_authToken;
  v3 = authToken && bdDataChannelUtilities::buildAuthToken(this->m_authToken, authToken, 0x1030u);
  v5 = 4144;
  bdHandleAssert(v3, "ok", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bddatachannel\\bddatachanneldispatch\\bddatachanneldispatch.cpp", "bdDataChannelDispatch::setAuthToken", 0x11Au, "Unable to set the Auth Token. Ensure the auth token is less than %d characters.", v5);
  bdLogMessage(BD_LOG_INFO, "info/", "bdDataChannel/bdDataChannelDispatch", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bddatachannel\\bddatachanneldispatch\\bddatachanneldispatch.cpp", "bdDataChannelDispatch::setAuthToken", 0x11Cu, "Authorization token: '%s'", m_authToken);
  return v3;
}

/*
==============
bdDataChannelDispatch::setKeepAlive
==============
*/
void bdDataChannelDispatch::setKeepAlive(bdDataChannelDispatch *this, bool keepAlive)
{
  ;
}

/*
==============
bdDataChannelDispatch::setStatus
==============
*/
bool bdDataChannelDispatch::setStatus(bdDataChannelDispatch *this, bdDataChannelDispatch::bdDispatchStatus status, const char *const error)
{
  if ( this->m_currentStatus == status )
    return 1;
  this->m_currentStatus = status;
  return bdStrlcpy(this->m_httpError, error, 0xFFui64) != 0;
}

/*
==============
bdDataChannelDispatch::updateInternal
==============
*/
void bdDataChannelDispatch::updateInternal(bdDataChannelDispatch *this)
{
  bdHTTP::bdStatus v2; 
  unsigned int v3; 
  __int32 v4; 
  __int32 v5; 
  __int32 v6; 
  unsigned __int64 v7; 
  size_t v8; 
  unsigned int v9; 
  unsigned int v10; 
  char *m_httpError; 
  const char *v12; 
  unsigned __int64 v13; 
  char *v14; 
  size_t v15; 
  char *v16; 
  unsigned __int64 v17; 
  size_t v18; 

  v2 = this->m_http->getStatus(this->m_http);
  v3 = this->m_http->getLastHTTPStatus(this->m_http);
  this->m_httpStatusCode = v3;
  v4 = v2 - 1;
  if ( v4 )
  {
    v5 = v4 - 2;
    if ( !v5 )
      return;
    v6 = v5 - 2;
    if ( v6 )
    {
      if ( v6 != 1 )
      {
        bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdDataChannel/bdDataChannelDispatch", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bddatachannel\\bddatachanneldispatch\\bddatachanneldispatch.cpp", "bdDataChannelDispatch::updateInternal", 0x223u, "Invalid bdHTTP status found.");
        if ( this->m_currentStatus != BD_DISPATCH_STATUS_FAILED )
        {
          this->m_currentStatus = BD_DISPATCH_STATUS_FAILED;
          bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
          v7 = -1i64;
          do
            ++v7;
          while ( statusDataChannelBadHTTPStatus[v7] );
          if ( this != (bdDataChannelDispatch *)-1469i64 )
          {
            v8 = 254i64;
            if ( v7 < 0xFE )
              v8 = v7;
            memcpy_0(this->m_httpError, "Invalid bdHTTP status found.", v8);
            this->m_httpError[v8] = 0;
          }
        }
        this->m_httpStatusCode = 0;
        return;
      }
      v9 = v3 - 401;
      if ( v9 )
      {
        v10 = v9 - 3;
        if ( !v10 )
        {
          bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdDataChannel/bdDataChannelDispatch", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bddatachannel\\bddatachanneldispatch\\bddatachanneldispatch.cpp", "bdDataChannelDispatch::updateInternal", 0x208u, "%s %s.", "Unable to reach URL", this->m_endpoint);
          if ( this->m_currentStatus != BD_DISPATCH_STATUS_FAILED )
          {
            this->m_currentStatus = BD_DISPATCH_STATUS_FAILED;
            m_httpError = this->m_httpError;
            bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
            v13 = -1i64;
            do
              ++v13;
            while ( statusDataChannelURLUnreachable[v13] );
            if ( this != (bdDataChannelDispatch *)-1469i64 )
            {
              v12 = "Unable to reach URL";
LABEL_41:
              v15 = 254i64;
              if ( v13 < 0xFE )
                v15 = v13;
              memcpy_0(m_httpError, v12, v15);
              m_httpError[v15] = 0;
            }
          }
LABEL_44:
          this->m_hasData = 0;
          return;
        }
        if ( v10 == 25 )
        {
          m_httpError = this->m_httpError;
          this->m_http->getHeader(this->m_http, "Retry-After", this->m_httpError, 255u);
          v14 = strstr_0(this->m_httpError, "\r\n");
          if ( v14 && v14 != m_httpError )
            *v14 = 0;
          if ( this->m_currentStatus == BD_DISPATCH_STATUS_THROTTLED )
            goto LABEL_44;
          this->m_currentStatus = BD_DISPATCH_STATUS_THROTTLED;
          bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
          v12 = "HTTP operation throttled at host";
          v13 = -1i64;
          do
            ++v13;
          while ( statusDataChannelThrottled[v13] );
        }
        else
        {
          if ( this->m_currentStatus == BD_DISPATCH_STATUS_FAILED )
            goto LABEL_44;
          this->m_currentStatus = BD_DISPATCH_STATUS_FAILED;
          m_httpError = this->m_httpError;
          bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
          v12 = "Unknown HTTP error code";
          v13 = -1i64;
          do
            ++v13;
          while ( statusDataChannelUnknown[v13] );
        }
      }
      else
      {
        bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdDataChannel/bdDataChannelDispatch", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bddatachannel\\bddatachanneldispatch\\bddatachanneldispatch.cpp", "bdDataChannelDispatch::updateInternal", 0x217u, "User authentication failed. Make sure the Umbrella access token is valid and not expired");
        if ( this->m_currentStatus == BD_DISPATCH_STATUS_FAILED )
          goto LABEL_44;
        this->m_currentStatus = BD_DISPATCH_STATUS_FAILED;
        m_httpError = this->m_httpError;
        bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
        v12 = "Unable to authenticate this user.";
        v13 = -1i64;
        do
          ++v13;
        while ( statusDataChannelAuthenticationFailed[v13] );
      }
    }
    else
    {
      if ( this->m_currentStatus == BD_DISPATCH_STATUS_OK )
        goto LABEL_44;
      this->m_currentStatus = BD_DISPATCH_STATUS_OK;
      m_httpError = this->m_httpError;
      bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
      v12 = "HTTP Operation successful";
      v13 = -1i64;
      do
        ++v13;
      while ( statusDataChannelSuccess[v13] );
    }
    if ( m_httpError )
      goto LABEL_41;
    goto LABEL_44;
  }
  if ( this->m_currentStatus )
  {
    this->m_currentStatus = BD_DISPATCH_STATUS_NOT_READY;
    v16 = this->m_httpError;
    bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
    v17 = -1i64;
    do
      ++v17;
    while ( statusDataChannelHTTPInterfaceNotready[v17] );
    if ( v16 )
    {
      v18 = 254i64;
      if ( v17 < 0xFE )
        v18 = v17;
      memcpy_0(v16, "HTTP interface is not ready", v18);
      v16[v18] = 0;
    }
  }
}

/*
==============
bdDataChannelDispatch::write
==============
*/
bool bdDataChannelDispatch::write(bdDataChannelDispatch *this, const unsigned __int8 *const data, unsigned int size, bdMessageEnvelopeBase::bdMsgSerializationType msgSerializationType, bdMessageEnvelopeBase::bdMsgCompressionType msgCompressionType)
{
  size_t msgDataSize; 
  bool v8; 
  bdDataChannelDispatch::bdDispatchStatus m_currentStatus; 
  unsigned __int64 v10; 
  unsigned __int64 v11; 
  unsigned int v12; 
  bdByteBuffer *v13; 
  bdByteBuffer *v14; 
  bdDataChannelUserInfo *m_userInfo; 
  bool v16; 
  bdReferencable *v17; 
  bdReference<bdByteBuffer> *p_m_data; 
  bdDataChannelBase::bdDataChannelContentType m_contentType; 
  unsigned int WrittenSize; 
  bdByteBuffer *v22; 
  bdByteBuffer *v23; 
  bdByteBuffer *m_ptr; 
  bdByteBuffer *v25; 
  const char *v26; 
  const char *v27; 
  bdDataChannelDispatch::bdDispatchStatus v28; 
  char *m_httpError; 
  unsigned __int64 v30; 
  size_t v31; 
  __int64 msgSchemaGuidSize; 
  bdReference<bdByteBuffer> buffer; 
  __int64 v35[2]; 
  bdStructBufferSerializer v36; 
  bdMessageEnvelopeV2 v37; 
  bdMessageEnvelope v38; 
  unsigned __int8 uuid[8]; 
  __int64 v40; 

  v35[1] = -2i64;
  msgDataSize = size;
  bdHandleAssert(data != NULL, "data != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bddatachannel\\bddatachanneldispatch\\bddatachanneldispatch.cpp", "bdDataChannelDispatch::write", 0x125u, "No Data provided");
  bdHandleAssert((_DWORD)msgDataSize != 0, "size > 0", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bddatachannel\\bddatachanneldispatch\\bddatachanneldispatch.cpp", "bdDataChannelDispatch::write", 0x126u, "Data Size must be > 0");
  v8 = 0;
  m_currentStatus = this->m_currentStatus;
  if ( (unsigned int)(m_currentStatus - 3) <= 1 || !data || !(_DWORD)msgDataSize )
  {
    v26 = "False";
    v27 = "False";
    if ( m_currentStatus == BD_DISPATCH_STATUS_THROTTLED )
      v27 = "True";
    if ( data )
      v26 = "True";
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdDataChannel/bdDataChannelDispatch", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bddatachannel\\bddatachanneldispatch\\bddatachanneldispatch.cpp", "bdDataChannelDispatch::write", 0x176u, "bdDataChannel::write(): Invalid arguments! data valid: %s size: %u throttled: %s", v26, msgDataSize, v27);
    v28 = this->m_currentStatus;
    if ( v28 != BD_DISPATCH_STATUS_THROTTLED && !(_DWORD)msgDataSize && v28 != BD_DISPATCH_STATUS_FAILED )
    {
      this->m_currentStatus = BD_DISPATCH_STATUS_FAILED;
      m_httpError = this->m_httpError;
      bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
      v30 = -1i64;
      do
        ++v30;
      while ( statusDataChannelNoPayload[v30] );
      if ( m_httpError )
      {
        v31 = 254i64;
        if ( v30 < 0xFE )
          v31 = v30;
        memcpy_0(m_httpError, "Attempting to write an empty payload!", v31);
        m_httpError[v31] = 0;
      }
    }
    return v8;
  }
  if ( !this->m_useMsgEnvelope )
  {
    v22 = (bdByteBuffer *)bdMemory::allocate(0x38ui64);
    v23 = v22;
    v35[0] = (__int64)v22;
    if ( v22 )
    {
      v22->m_refCount.m_value._My_val = 0;
      v22->__vftable = (bdByteBuffer_vtbl *)&bdByteBuffer::`vftable';
      v22->m_size = msgDataSize;
      v22->m_data = NULL;
      *(_WORD *)&v22->m_typeChecked = 0;
      v22->m_allocatedData = 0;
      bdByteBuffer::init(v22, msgDataSize);
      memcpy_0(v23->m_data, data, msgDataSize);
    }
    else
    {
      v23 = NULL;
    }
    m_ptr = this->m_data.m_ptr;
    if ( m_ptr )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
      {
        v25 = this->m_data.m_ptr;
        if ( v25 )
          ((void (__fastcall *)(bdByteBuffer *, __int64))v25->~bdReferencable)(v25, 1i64);
      }
    }
    this->m_data.m_ptr = v23;
    if ( v23 )
    {
      _InterlockedExchangeAdd((volatile signed __int32 *)&v23->m_refCount, 1u);
      v23 = this->m_data.m_ptr;
    }
    return bdDataChannelDispatch::internalWrite(this, v23->m_data, v23->m_size, this->m_contentType);
  }
  v10 = bdPlatformTiming::getHiResTimeStamp() % 0xF4240;
  v11 = v10 + 1000000 * bdPlatformTiming::getPOSIXTimestamp();
  *(_QWORD *)uuid = 0i64;
  v40 = 0i64;
  bdUUIDGenerator::generateV1(&this->m_uuidGenerator, uuid, this->m_userId);
  v12 = msgDataSize + bdMessageEnvelope::getMaxBaseByteSize();
  v13 = (bdByteBuffer *)bdMemory::allocate(0x38ui64);
  v14 = v13;
  v35[0] = (__int64)v13;
  if ( v13 )
  {
    v13->m_refCount.m_value._My_val = 0;
    v13->__vftable = (bdByteBuffer_vtbl *)&bdByteBuffer::`vftable';
    v13->m_size = v12;
    v13->m_data = NULL;
    *(_WORD *)&v13->m_typeChecked = 0;
    v13->m_allocatedData = 0;
    bdByteBuffer::init(v13, v12);
  }
  else
  {
    v14 = NULL;
  }
  v35[0] = (__int64)v14;
  if ( v14 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v14->m_refCount, 1u);
  buffer.m_ptr = v14;
  if ( v14 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v14->m_refCount, 1u);
  bdStructBufferSerializer::bdStructBufferSerializer(&v36, (bdReference<bdByteBuffer>)&buffer, v12, 0);
  m_userInfo = this->m_userInfo;
  if ( m_userInfo && m_userInfo->getVersion(m_userInfo) == 2 )
  {
    bdMessageEnvelopeV2::bdMessageEnvelopeV2(&v37, this->m_titleId, (const bdDataChannelUserInfoV2 *)this->m_userInfo, v11, uuid, this->m_msgName, this->m_msgSchemaGuid, this->m_msgSchemaGuidSize, (unsigned __int8 *const)data, msgDataSize, msgSerializationType, msgCompressionType);
    v16 = bdStructBufferSerializer::writeObject(&v36, 1u, &v37);
    bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)v37.m_resourceOwner);
    bdReferencable::~bdReferencable((bdReferencable *)&v37.m_resourceOwner[32]);
    bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&v37.m_msgSchema.bdMessageEnvelopeBase::__vftable + 2));
    bdReferencable::~bdReferencable((bdReferencable *)&v37.m_msgSchema.gap34[4]);
    bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&v37.__vftable + 2));
    v17 = (bdReferencable *)v37.gap108;
  }
  else
  {
    bdMessageEnvelope::bdMessageEnvelope(&v38, this->m_titleId, this->m_userId, this->m_userAcctType, v11, uuid, this->m_msgName, this->m_msgSchemaGuid, this->m_msgSchemaGuidSize, (unsigned __int8 *const)data, msgDataSize, msgSerializationType, msgCompressionType);
    v16 = bdStructBufferSerializer::writeObject(&v36, 1u, &v38);
    bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)v38.m_resourceOwner);
    bdReferencable::~bdReferencable((bdReferencable *)&v38.m_resourceOwner[48]);
    bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&v38.m_msgSchema.bdMessageEnvelopeBase::__vftable + 2));
    bdReferencable::~bdReferencable((bdReferencable *)&v38.m_msgSchema.gap34[4]);
    bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&v38.__vftable + 2));
    v17 = (bdReferencable *)v38.gap118;
  }
  bdReferencable::~bdReferencable(v17);
  if ( v16 && bdStructBufferSerializer::getWrittenSize(&v36) )
  {
    p_m_data = &this->m_data;
    if ( v35 != (__int64 *)&this->m_data )
    {
      if ( p_m_data->m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&p_m_data->m_ptr->m_refCount, 0xFFFFFFFF) == 1 && p_m_data->m_ptr )
        ((void (__fastcall *)(bdByteBuffer *, __int64))p_m_data->m_ptr->~bdReferencable)(p_m_data->m_ptr, 1i64);
      p_m_data->m_ptr = v14;
      if ( v14 )
        _InterlockedExchangeAdd((volatile signed __int32 *)&v14->m_refCount, 1u);
    }
    m_contentType = this->m_contentType;
    WrittenSize = bdStructBufferSerializer::getWrittenSize(&v36);
    v8 = bdDataChannelDispatch::internalWrite(this, p_m_data->m_ptr->m_data, WrittenSize, m_contentType);
    LODWORD(msgSchemaGuidSize) = bdStructBufferSerializer::getWrittenSize(&v36);
    bdLogMessage(BD_LOG_INFO, "info/", "bdDataChannel/bdDataChannelDispatch", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bddatachannel\\bddatachanneldispatch\\bddatachanneldispatch.cpp", "bdDataChannelDispatch::write", 0x168u, "bdDataChannelDispatch::write dataSize:%u, endpoint:%s", msgSchemaGuidSize, this->m_endpoint);
    bdStructBufferSerializer::~bdStructBufferSerializer(&v36);
    if ( v14 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v14->m_refCount, 0xFFFFFFFF) == 1 )
        ((void (__fastcall *)(bdByteBuffer *, __int64))v14->~bdReferencable)(v14, 1i64);
    }
    return v8;
  }
  bdLogMessage(BD_LOG_WARNING, "warn/", "bdDataChannel/bdDataChannelDispatch", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bddatachannel\\bddatachanneldispatch\\bddatachanneldispatch.cpp", "bdDataChannelDispatch::write", 0x161u, "Cannot serialize the provided data in DW message envelope wireformat, failed to store data.");
  bdStructBufferSerializer::~bdStructBufferSerializer(&v36);
  if ( v14 && !_InterlockedDecrement((volatile signed __int32 *)&v14->m_refCount) )
    ((void (__fastcall *)(bdByteBuffer *, __int64))v14->~bdReferencable)(v14, 1i64);
  return 0;
}

