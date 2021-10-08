/*
==============
bdUmbrella::convertSIErrorCode
==============
*/

bdLobbyErrorCode __fastcall bdUmbrella::convertSIErrorCode(bdUmbrella *this, const unsigned int errorCode)
{
  return ?convertSIErrorCode@bdUmbrella@@MEBA?AW4bdLobbyErrorCode@@I@Z(this, errorCode);
}

/*
==============
bdUmbrella::getProviderTokens
==============
*/

bdReference<bdRemoteTask> *__fastcall bdUmbrella::getProviderTokens(bdUmbrella *this, bdReference<bdRemoteTask> *result, unsigned __int64 umbrellaID, const bdUmbrellaProviderAccount *account, bdUmbrellaProviderToken *tokens, const char *accessToken, unsigned int refreshIfExpiresIn, bool psnIDMode, unsigned int xCacheAge)
{
  return ?getProviderTokens@bdUmbrella@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KPEBVbdUmbrellaProviderAccount@@PEAVbdUmbrellaProviderToken@@PEBDI_NI@Z(this, result, umbrellaID, account, tokens, accessToken, refreshIfExpiresIn, psnIDMode, xCacheAge);
}

/*
==============
bdUmbrella::getUrl
==============
*/

const char *__fastcall bdUmbrella::getUrl(bdUmbrella *this)
{
  return ?getUrl@bdUmbrella@@MEBAPEBDXZ(this);
}

/*
==============
bdUmbrella::deauthorizeUserProviderAccount
==============
*/

bdReference<bdRemoteTask> *__fastcall bdUmbrella::deauthorizeUserProviderAccount(bdUmbrella *this, bdReference<bdRemoteTask> *result, unsigned __int64 umbrellaID, const bdUmbrellaProviderAccount *account, const char *accessToken, bool psnIDMode)
{
  return ?deauthorizeUserProviderAccount@bdUmbrella@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KPEBVbdUmbrellaProviderAccount@@PEBD_N@Z(this, result, umbrellaID, account, accessToken, psnIDMode);
}

/*
==============
bdUmbrella::authenticateProviderTokenForProviderAccount
==============
*/

bdReference<bdRemoteTask> *__fastcall bdUmbrella::authenticateProviderTokenForProviderAccount(bdUmbrella *this, bdReference<bdRemoteTask> *result, const bdUmbrellaProviderAccount *account, const bdUmbrellaProviderToken *token, bdUmbrellaAccessInfo *accessInfo)
{
  return ?authenticateProviderTokenForProviderAccount@bdUmbrella@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBVbdUmbrellaProviderAccount@@PEBVbdUmbrellaProviderToken@@PEAVbdUmbrellaAccessInfo@@@Z(this, result, account, token, accessInfo);
}

/*
==============
bdUmbrella::authenticateProviderToken
==============
*/

bdReference<bdRemoteTask> *__fastcall bdUmbrella::authenticateProviderToken(bdUmbrella *this, bdReference<bdRemoteTask> *result, const bdUmbrellaProviderAccount *account, const bdUmbrellaProviderToken *token, bdUmbrellaAccessInfo *accessInfo)
{
  return ?authenticateProviderToken@bdUmbrella@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBVbdUmbrellaProviderAccount@@PEBVbdUmbrellaProviderToken@@PEAVbdUmbrellaAccessInfo@@@Z(this, result, account, token, accessInfo);
}

/*
==============
bdUmbrella::getSIAuthToken
==============
*/

bdReference<bdRemoteTask> *__fastcall bdUmbrella::getSIAuthToken(bdUmbrella *this, bdReference<bdRemoteTask> *result, const char *provider, const char *accessToken)
{
  return ?getSIAuthToken@bdUmbrella@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBD0@Z(this, result, provider, accessToken);
}

/*
==============
bdUmbrella::authenticate
==============
*/

bdReference<bdRemoteTask> *__fastcall bdUmbrella::authenticate(bdUmbrella *this, bdReference<bdRemoteTask> *result, const bdAuthInfo *authInfo, bdUmbrellaUserAccount *userInfo)
{
  return ?authenticate@bdUmbrella@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBVbdAuthInfo@@PEAVbdUmbrellaUserAccount@@@Z(this, result, authInfo, userInfo);
}

/*
==============
bdUmbrella::getUserByUmbrellaID
==============
*/

bdReference<bdRemoteTask> *__fastcall bdUmbrella::getUserByUmbrellaID(bdUmbrella *this, bdReference<bdRemoteTask> *result, unsigned __int64 umbrellaID, bdUmbrellaUserAccount *userInfo, const char *accessToken)
{
  return ?getUserByUmbrellaID@bdUmbrella@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KPEAVbdUmbrellaUserAccount@@PEBD@Z(this, result, umbrellaID, userInfo, accessToken);
}

/*
==============
bdUmbrella::authenticateProviderTokenForUser
==============
*/

bdReference<bdRemoteTask> *__fastcall bdUmbrella::authenticateProviderTokenForUser(bdUmbrella *this, bdReference<bdRemoteTask> *result, unsigned __int64 umbrellaID, const bdUmbrellaProviderAccount *account, const bdUmbrellaProviderToken *token, bdUmbrellaUserAccount *userInfo, const char *accessToken)
{
  return ?authenticateProviderTokenForUser@bdUmbrella@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KPEBVbdUmbrellaProviderAccount@@PEBVbdUmbrellaProviderToken@@PEAVbdUmbrellaUserAccount@@PEBD@Z(this, result, umbrellaID, account, token, userInfo, accessToken);
}

/*
==============
bdUmbrella::authenticate
==============
*/
bdReference<bdRemoteTask> *bdUmbrella::authenticate(bdUmbrella *this, bdReference<bdRemoteTask> *result, const bdAuthInfo *authInfo, bdUmbrellaUserAccount *userInfo)
{
  const bdReference<bdRemoteTask> *v8; 
  bdRemoteTask *v9; 
  __int64 v10; 
  const bdReference<bdRemoteTask> *NewTask; 
  bdReference<bdRemoteTask> *p_m_remoteTask; 
  const char *v13; 
  bdHTTP *m_httpInterface; 
  unsigned int v15; 
  bdHTTP *v16; 
  bool (__fastcall *setHeader)(bdHTTP *, const char *, const unsigned __int64); 
  unsigned __int64 TransactionID; 
  unsigned __int64 v19; 
  const bdReference<bdRemoteTask> *FailedTask; 
  bdRemoteTask *m_ptr; 
  bdReference<bdRemoteTask> v23; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> v25; 
  bdHTTP::bdHTTPHeader headers; 
  __int64 v27; 
  bdJSONSerializer v28; 
  char buf[32]; 
  char value[32]; 
  char dest[176]; 
  char v32[1024]; 

  v27 = -2i64;
  v23.m_ptr = (bdRemoteTask *)result;
  if ( bdSingleIdentityBase::readyForRequest(this) )
  {
    bdSingleIdentityBase::clearBuffers(this);
    memset_0(dest, 0, 0xADui64);
    bdBase64::encode(authInfo->m_data, 0x80u, dest, 0xADu);
    bdSnprintf(buf, 0x20ui64, "%u", authInfo->m_IVSeed);
    bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
    v10 = -1i64;
    do
      ++v10;
    while ( buf[v10] );
    bdBase64::encode(buf, v10, value, 0x20u);
    bdJSONSerializer::bdJSONSerializer(&v28);
    bdJSONSerializer::setBuffer(&v28, this->m_httpRequestBuffer, this->m_requestBufferSize);
    if ( bdJSONSerializer::writeBeginObject(&v28) && bdJSONSerializer::writeString(&v28, "ticket", dest) && bdJSONSerializer::writeString(&v28, "initialVectorSeed", value) && bdJSONSerializer::writeUInt32(&v28, "titleID", authInfo->m_titleID, 0) && bdJSONSerializer::writeEndObject(&v28) )
    {
      NewTask = bdSingleIdentityBase::getNewTask(this, &v25);
      p_m_remoteTask = &this->m_remoteTask;
      bdReference<bdRemoteTask>::operator=(&this->m_remoteTask, NewTask);
      if ( v25.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v25.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v25.m_ptr )
        ((void (__fastcall *)(bdRemoteTask *, __int64))v25.m_ptr->~bdReferencable)(v25.m_ptr, 1i64);
      this->m_outputObject = userInfo;
      v13 = this->getUrl(this);
      bdSnprintf(v32, 0x400ui64, "%s/v1.0/tokens/lsg/?client=%s", v13, this->m_client);
      bdSingleIdentityBase::setBasicHeaders(this, &headers, 1u, NULL, 0);
      ((void (__fastcall *)(bdHTTP *, __int64, char *))this->m_httpInterface->initRequest)(this->m_httpInterface, 3i64, v32);
      m_httpInterface = this->m_httpInterface;
      v15 = bdJSONSerializer::length(&v28);
      bdHTTP::setUploadData(m_httpInterface, this->m_httpRequestBuffer, v15);
      bdHTTP::setDownloadBuffer(this->m_httpInterface, this->m_httpResponseBuffer, this->m_responseBufferSize);
      this->m_httpInterface->setHeader(this->m_httpInterface, "Content-Type", "application/json");
      v16 = this->m_httpInterface;
      setHeader = v16->setHeader;
      TransactionID = bdRemoteTask::getTransactionID(p_m_remoteTask->m_ptr);
      setHeader(v16, "X-TransactionID", TransactionID);
      this->m_httpInterface->setHeader(this->m_httpInterface, headers.key, headers.value);
      this->m_httpInterface->sendRequest(this->m_httpInterface);
      v19 = bdRemoteTask::getTransactionID(p_m_remoteTask->m_ptr);
      bdLogMessage(BD_LOG_INFO, "info/", "bdSingleIdentity/bdUmbrella", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdsingleidentity\\bdumbrella.cpp", "bdUmbrella::authenticate", 0x51u, "Started call to bdUmbrella::authenticate. TransactionID: (%I64u)", v19);
    }
    else
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdSingleIdentity/bdUmbrella", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdsingleidentity\\bdumbrella.cpp", "bdUmbrella::authenticate", 0x55u, "Error serializing JSON, request cannot be sent.");
      FailedTask = bdSingleIdentityBase::getFailedTask(this, &v23);
      p_m_remoteTask = &this->m_remoteTask;
      bdReference<bdRemoteTask>::operator=(&this->m_remoteTask, FailedTask);
      if ( v23.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v23.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v23.m_ptr )
        ((void (__fastcall *)(bdRemoteTask *, __int64))v23.m_ptr->~bdReferencable)(v23.m_ptr, 1i64);
    }
    m_ptr = p_m_remoteTask->m_ptr;
    result->m_ptr = p_m_remoteTask->m_ptr;
    if ( m_ptr )
      _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
    bdJSONSerializer::~bdJSONSerializer(&v28);
  }
  else
  {
    v8 = bdSingleIdentityBase::getFailedTask(this, &resulta);
    bdReference<bdRemoteTask>::operator=(&this->m_remoteTask, v8);
    if ( resulta.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
    v9 = this->m_remoteTask.m_ptr;
    result->m_ptr = v9;
    if ( v9 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v9->m_refCount, 1u);
  }
  return result;
}

/*
==============
bdUmbrella::authenticateProviderToken
==============
*/
bdReference<bdRemoteTask> *bdUmbrella::authenticateProviderToken(bdUmbrella *this, bdReference<bdRemoteTask> *result, const bdUmbrellaProviderAccount *account, const bdUmbrellaProviderToken *token, bdUmbrellaAccessInfo *accessInfo)
{
  const bdReference<bdRemoteTask> *v9; 
  bdRemoteTask *v10; 
  const bdReference<bdRemoteTask> *NewTask; 
  bdReference<bdRemoteTask> *p_m_remoteTask; 
  const char *v13; 
  bdHTTP *m_httpInterface; 
  unsigned int v15; 
  bdHTTP *v16; 
  bool (__fastcall *setHeader)(bdHTTP *, const char *, const unsigned __int64); 
  unsigned __int64 TransactionID; 
  unsigned __int64 v19; 
  const bdReference<bdRemoteTask> *FailedTask; 
  bdRemoteTask *m_ptr; 
  bdReference<bdRemoteTask> v23; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> v25; 
  bdHTTP::bdHTTPHeader headers; 
  __int64 v27; 
  bdJSONSerializer v28; 
  char buf[1024]; 

  v27 = -2i64;
  v23.m_ptr = (bdRemoteTask *)result;
  if ( bdSingleIdentityBase::readyForRequest(this) )
  {
    bdSingleIdentityBase::clearBuffers(this);
    bdJSONSerializer::bdJSONSerializer(&v28);
    bdJSONSerializer::setBuffer(&v28, this->m_httpRequestBuffer, this->m_requestBufferSize);
    if ( bdJSONSerializer::writeBeginObject(&v28) && bdJSONSerializer::writeUInt64(&v28, "accountID", account->m_linkedAccountID, 0) && bdJSONSerializer::writeBeginObject(&v28, "tokens") && bdJSONSerializer::writeString(&v28, "accessToken", token->m_accessToken) && bdJSONSerializer::writeString(&v28, "refreshToken", token->m_refreshToken) && bdJSONSerializer::writeEndObject(&v28) && bdJSONSerializer::writeEndObject(&v28) )
    {
      this->m_outputObject = accessInfo;
      NewTask = bdSingleIdentityBase::getNewTask(this, &v25);
      p_m_remoteTask = &this->m_remoteTask;
      bdReference<bdRemoteTask>::operator=(&this->m_remoteTask, NewTask);
      if ( v25.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v25.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v25.m_ptr )
        ((void (__fastcall *)(bdRemoteTask *, __int64))v25.m_ptr->~bdReferencable)(v25.m_ptr, 1i64);
      memset_0(buf, 0, sizeof(buf));
      v13 = this->getUrl(this);
      bdSnprintf(buf, 0x400ui64, "%s/v1.0/tokens/%s/?client=%s", v13, account->m_provider, this->m_client);
      bdSingleIdentityBase::setBasicHeaders(this, &headers, 1u, NULL, 0);
      ((void (__fastcall *)(bdHTTP *, __int64, char *))this->m_httpInterface->initRequest)(this->m_httpInterface, 3i64, buf);
      m_httpInterface = this->m_httpInterface;
      v15 = bdJSONSerializer::length(&v28);
      bdHTTP::setUploadData(m_httpInterface, this->m_httpRequestBuffer, v15);
      bdHTTP::setDownloadBuffer(this->m_httpInterface, this->m_httpResponseBuffer, this->m_responseBufferSize);
      this->m_httpInterface->setHeader(this->m_httpInterface, "Content-Type", "application/json");
      v16 = this->m_httpInterface;
      setHeader = v16->setHeader;
      TransactionID = bdRemoteTask::getTransactionID(p_m_remoteTask->m_ptr);
      setHeader(v16, "X-TransactionID", TransactionID);
      this->m_httpInterface->setHeader(this->m_httpInterface, headers.key, headers.value);
      this->m_httpInterface->sendRequest(this->m_httpInterface);
      v19 = bdRemoteTask::getTransactionID(p_m_remoteTask->m_ptr);
      bdLogMessage(BD_LOG_INFO, "info/", "bdSingleIdentity/bdUmbrella", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdsingleidentity\\bdumbrella.cpp", "bdUmbrella::authenticateProviderToken", 0x1B8u, "Started call to bdUmbrella::authenticateProviderTokenForProviderAccount. TransactionID: (%I64u)", v19);
    }
    else
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdSingleIdentity/bdUmbrella", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdsingleidentity\\bdumbrella.cpp", "bdUmbrella::authenticateProviderToken", 0x1BCu, "Error serializing JSON, request cannot be sent.");
      FailedTask = bdSingleIdentityBase::getFailedTask(this, &v23);
      p_m_remoteTask = &this->m_remoteTask;
      bdReference<bdRemoteTask>::operator=(&this->m_remoteTask, FailedTask);
      if ( v23.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v23.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v23.m_ptr )
        ((void (__fastcall *)(bdRemoteTask *, __int64))v23.m_ptr->~bdReferencable)(v23.m_ptr, 1i64);
    }
    m_ptr = p_m_remoteTask->m_ptr;
    result->m_ptr = p_m_remoteTask->m_ptr;
    if ( m_ptr )
      _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
    bdJSONSerializer::~bdJSONSerializer(&v28);
  }
  else
  {
    v9 = bdSingleIdentityBase::getFailedTask(this, &resulta);
    bdReference<bdRemoteTask>::operator=(&this->m_remoteTask, v9);
    if ( resulta.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
    v10 = this->m_remoteTask.m_ptr;
    result->m_ptr = v10;
    if ( v10 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v10->m_refCount, 1u);
  }
  return result;
}

/*
==============
bdUmbrella::authenticateProviderTokenForProviderAccount
==============
*/
bdReference<bdRemoteTask> *bdUmbrella::authenticateProviderTokenForProviderAccount(bdUmbrella *this, bdReference<bdRemoteTask> *result, const bdUmbrellaProviderAccount *account, const bdUmbrellaProviderToken *token, bdUmbrellaAccessInfo *accessInfo)
{
  const bdReference<bdRemoteTask> *v9; 
  bdRemoteTask *v10; 
  const bdReference<bdRemoteTask> *NewTask; 
  bdReference<bdRemoteTask> *p_m_remoteTask; 
  unsigned __int64 m_linkedAccountID; 
  const char *v14; 
  __int64 v15; 
  bdHTTP *m_httpInterface; 
  unsigned int v17; 
  bdHTTP *v18; 
  bool (__fastcall *setHeader)(bdHTTP *, const char *, const unsigned __int64); 
  unsigned __int64 TransactionID; 
  bdHTTP::bdHTTPHeader *p_headers; 
  unsigned __int64 v22; 
  const bdReference<bdRemoteTask> *FailedTask; 
  bdRemoteTask *m_ptr; 
  bdReference<bdRemoteTask> v26; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> v28; 
  __int64 v29; 
  bdHTTP::bdHTTPHeader headers; 
  bdJSONSerializer v31; 
  char buf[1024]; 

  v29 = -2i64;
  v26.m_ptr = (bdRemoteTask *)result;
  bdLogMessage(BD_LOG_INFO, "info/", "bdSingleIdentity/bdUmbrella", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdsingleidentity\\bdumbrella.cpp", "bdUmbrella::authenticateProviderTokenForProviderAccount", 0x146u, "bdUmbrella::authenticateProviderTokenForProviderAccount is deprecated.Use bdUmbrella::authenticateProviderToken instead.");
  if ( bdSingleIdentityBase::readyForRequest(this) )
  {
    bdSingleIdentityBase::clearBuffers(this);
    bdJSONSerializer::bdJSONSerializer(&v31);
    bdJSONSerializer::setBuffer(&v31, this->m_httpRequestBuffer, this->m_requestBufferSize);
    if ( bdJSONSerializer::writeBeginObject(&v31) && bdJSONSerializer::writeString(&v31, "accessToken", token->m_accessToken) && bdJSONSerializer::writeString(&v31, "refreshToken", token->m_refreshToken) && bdJSONSerializer::writeEndObject(&v31) )
    {
      this->m_outputObject = accessInfo;
      NewTask = bdSingleIdentityBase::getNewTask(this, &v28);
      p_m_remoteTask = &this->m_remoteTask;
      bdReference<bdRemoteTask>::operator=(&this->m_remoteTask, NewTask);
      if ( v28.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v28.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v28.m_ptr )
        ((void (__fastcall *)(bdRemoteTask *, __int64))v28.m_ptr->~bdReferencable)(v28.m_ptr, 1i64);
      m_linkedAccountID = account->m_linkedAccountID;
      v14 = this->getUrl(this);
      bdSnprintf(buf, 0x400ui64, "%s/v1.0/accounts/%s/%I64u/tokens/?client=%s", v14, account->m_provider, m_linkedAccountID, this->m_client);
      v15 = 2i64;
      bdSingleIdentityBase::setBasicHeaders(this, &headers, 2u, NULL, 1);
      this->m_httpInterface->initRequest(this->m_httpInterface, BD_PUT, buf, 0);
      m_httpInterface = this->m_httpInterface;
      v17 = bdJSONSerializer::length(&v31);
      bdHTTP::setUploadData(m_httpInterface, this->m_httpRequestBuffer, v17);
      bdHTTP::setDownloadBuffer(this->m_httpInterface, this->m_httpResponseBuffer, this->m_responseBufferSize);
      v18 = this->m_httpInterface;
      setHeader = v18->setHeader;
      TransactionID = bdRemoteTask::getTransactionID(p_m_remoteTask->m_ptr);
      setHeader(v18, "X-TransactionID", TransactionID);
      p_headers = &headers;
      do
      {
        this->m_httpInterface->setHeader(this->m_httpInterface, p_headers->key, p_headers->value);
        ++p_headers;
        --v15;
      }
      while ( v15 );
      this->m_httpInterface->sendRequest(this->m_httpInterface);
      v22 = bdRemoteTask::getTransactionID(p_m_remoteTask->m_ptr);
      bdLogMessage(BD_LOG_INFO, "info/", "bdSingleIdentity/bdUmbrella", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdsingleidentity\\bdumbrella.cpp", "bdUmbrella::authenticateProviderTokenForProviderAccount", 0x176u, "Started call to bdUmbrella::authenticateProviderTokenForProviderAccount.\t\t\t\tTransactionID: (%I64u)", v22);
    }
    else
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdSingleIdentity/bdUmbrella", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdsingleidentity\\bdumbrella.cpp", "bdUmbrella::authenticateProviderTokenForProviderAccount", 0x17Au, "Error serializing JSON, request cannot be sent.");
      FailedTask = bdSingleIdentityBase::getFailedTask(this, &v26);
      p_m_remoteTask = &this->m_remoteTask;
      bdReference<bdRemoteTask>::operator=(&this->m_remoteTask, FailedTask);
      if ( v26.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v26.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v26.m_ptr )
        ((void (__fastcall *)(bdRemoteTask *, __int64))v26.m_ptr->~bdReferencable)(v26.m_ptr, 1i64);
    }
    m_ptr = p_m_remoteTask->m_ptr;
    result->m_ptr = p_m_remoteTask->m_ptr;
    if ( m_ptr )
      _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
    bdJSONSerializer::~bdJSONSerializer(&v31);
  }
  else
  {
    v9 = bdSingleIdentityBase::getFailedTask(this, &resulta);
    bdReference<bdRemoteTask>::operator=(&this->m_remoteTask, v9);
    if ( resulta.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
    v10 = this->m_remoteTask.m_ptr;
    result->m_ptr = v10;
    if ( v10 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v10->m_refCount, 1u);
  }
  return result;
}

/*
==============
bdUmbrella::authenticateProviderTokenForUser
==============
*/
bdReference<bdRemoteTask> *bdUmbrella::authenticateProviderTokenForUser(bdUmbrella *this, bdReference<bdRemoteTask> *result, unsigned __int64 umbrellaID, const bdUmbrellaProviderAccount *account, const bdUmbrellaProviderToken *token, bdUmbrellaUserAccount *userInfo, const char *accessToken)
{
  const bdReference<bdRemoteTask> *v10; 
  bdRemoteTask *v11; 
  const bdReference<bdRemoteTask> *NewTask; 
  bdReference<bdRemoteTask> *p_m_remoteTask; 
  unsigned __int64 m_linkedAccountID; 
  const char *v15; 
  __int64 v16; 
  bdHTTP *m_httpInterface; 
  unsigned int v18; 
  bdHTTP *v19; 
  bool (__fastcall *setHeader)(bdHTTP *, const char *, const unsigned __int64); 
  unsigned __int64 TransactionID; 
  bdHTTP::bdHTTPHeader *p_headers; 
  unsigned __int64 v23; 
  const bdReference<bdRemoteTask> *FailedTask; 
  bdRemoteTask *m_ptr; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> v28; 
  bdReference<bdRemoteTask> v29; 
  const char *v30; 
  unsigned __int64 v31; 
  __int64 v32; 
  bdJSONSerializer v33; 
  bdHTTP::bdHTTPHeader headers; 
  char buf[1024]; 
  char authorizationHeader[4144]; 

  v32 = -2i64;
  v31 = umbrellaID;
  v30 = accessToken;
  if ( bdSingleIdentityBase::readyForRequest(this) )
  {
    bdSingleIdentityBase::clearBuffers(this);
    bdJSONSerializer::bdJSONSerializer(&v33);
    bdJSONSerializer::setBuffer(&v33, this->m_httpRequestBuffer, this->m_requestBufferSize);
    if ( bdJSONSerializer::writeBeginObject(&v33) && bdJSONSerializer::writeString(&v33, "accessToken", token->m_accessToken) && bdJSONSerializer::writeString(&v33, "refreshToken", token->m_refreshToken) && bdJSONSerializer::writeEndObject(&v33) )
    {
      this->m_outputObject = userInfo;
      NewTask = bdSingleIdentityBase::getNewTask(this, &v28);
      p_m_remoteTask = &this->m_remoteTask;
      bdReference<bdRemoteTask>::operator=(&this->m_remoteTask, NewTask);
      if ( v28.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v28.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v28.m_ptr )
        ((void (__fastcall *)(bdRemoteTask *, __int64))v28.m_ptr->~bdReferencable)(v28.m_ptr, 1i64);
      m_linkedAccountID = account->m_linkedAccountID;
      v15 = this->getUrl(this);
      bdSnprintf(buf, 0x400ui64, "%s/v1.0/users/%I64u/%s/%I64u/tokens/?client=%s", v15, v31, account->m_provider, m_linkedAccountID, this->m_client);
      bdSnprintf(authorizationHeader, 0x1030ui64, "Bearer %s", v30);
      v16 = 3i64;
      bdSingleIdentityBase::setBasicHeaders(this, &headers, 3u, authorizationHeader, 1);
      this->m_httpInterface->initRequest(this->m_httpInterface, BD_PUT, buf, 0);
      m_httpInterface = this->m_httpInterface;
      v18 = bdJSONSerializer::length(&v33);
      bdHTTP::setUploadData(m_httpInterface, this->m_httpRequestBuffer, v18);
      bdHTTP::setDownloadBuffer(this->m_httpInterface, this->m_httpResponseBuffer, this->m_responseBufferSize);
      v19 = this->m_httpInterface;
      setHeader = v19->setHeader;
      TransactionID = bdRemoteTask::getTransactionID(p_m_remoteTask->m_ptr);
      setHeader(v19, "X-TransactionID", TransactionID);
      p_headers = &headers;
      do
      {
        this->m_httpInterface->setHeader(this->m_httpInterface, p_headers->key, p_headers->value);
        ++p_headers;
        --v16;
      }
      while ( v16 );
      this->m_httpInterface->sendRequest(this->m_httpInterface);
      v23 = bdRemoteTask::getTransactionID(p_m_remoteTask->m_ptr);
      bdLogMessage(BD_LOG_INFO, "info/", "bdSingleIdentity/bdUmbrella", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdsingleidentity\\bdumbrella.cpp", "bdUmbrella::authenticateProviderTokenForUser", 0x135u, "Started call to bdUmbrella::authenticateProviderTokenForUser. TransactionID: (%I64u)", v23);
    }
    else
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdSingleIdentity/bdUmbrella", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdsingleidentity\\bdumbrella.cpp", "bdUmbrella::authenticateProviderTokenForUser", 0x139u, "Error serializing JSON, request cannot be sent.");
      FailedTask = bdSingleIdentityBase::getFailedTask(this, &v29);
      p_m_remoteTask = &this->m_remoteTask;
      bdReference<bdRemoteTask>::operator=(&this->m_remoteTask, FailedTask);
      if ( v29.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v29.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v29.m_ptr )
        ((void (__fastcall *)(bdRemoteTask *, __int64))v29.m_ptr->~bdReferencable)(v29.m_ptr, 1i64);
    }
    m_ptr = p_m_remoteTask->m_ptr;
    result->m_ptr = p_m_remoteTask->m_ptr;
    if ( m_ptr )
      _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
    bdJSONSerializer::~bdJSONSerializer(&v33);
  }
  else
  {
    v10 = bdSingleIdentityBase::getFailedTask(this, &resulta);
    bdReference<bdRemoteTask>::operator=(&this->m_remoteTask, v10);
    if ( resulta.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
    v11 = this->m_remoteTask.m_ptr;
    result->m_ptr = v11;
    if ( v11 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v11->m_refCount, 1u);
  }
  return result;
}

/*
==============
bdUmbrella::convertSIErrorCode
==============
*/
__int64 bdUmbrella::convertSIErrorCode(bdUmbrella *this, const unsigned int errorCode)
{
  if ( errorCode > 0x35B60 )
  {
    if ( errorCode > 0x38270 )
    {
      switch ( errorCode )
      {
        case 0x38A40u:
          return 14013i64;
        case 0x38E28u:
          return 14014i64;
        case 0x3AD68u:
          return 14015i64;
        case 0x3E030u:
          return 14016i64;
      }
    }
    else
    {
      switch ( errorCode )
      {
        case 0x38270u:
          return 14012i64;
        case 0x36330u:
          return 14008i64;
        case 0x36F4Cu:
          return 14009i64;
        case 0x372D0u:
          return 14010i64;
        case 0x376B8u:
          return 14011i64;
      }
    }
    return 14002i64;
  }
  if ( errorCode == 220000 )
    return 14008i64;
  if ( errorCode > 0x33838 )
  {
    switch ( errorCode )
    {
      case 0x34008u:
        return 14005i64;
      case 0x34454u:
        return 14017i64;
      case 0x34FA8u:
        return 14006i64;
      case 0x35390u:
        return 14007i64;
    }
    return 14002i64;
  }
  if ( errorCode == 211000 )
    return 14004i64;
  if ( errorCode == 131000 )
    return 14000i64;
  if ( errorCode != 180000 )
  {
    if ( errorCode != 200000 && errorCode == 210000 )
      return 14003i64;
    return 14002i64;
  }
  return 14001i64;
}

/*
==============
bdUmbrella::deauthorizeUserProviderAccount
==============
*/
bdReference<bdRemoteTask> *bdUmbrella::deauthorizeUserProviderAccount(bdUmbrella *this, bdReference<bdRemoteTask> *result, unsigned __int64 umbrellaID, const bdUmbrellaProviderAccount *account, const char *accessToken, bool psnIDMode)
{
  const bdReference<bdRemoteTask> *FailedTask; 
  const bdReference<bdRemoteTask> *NewTask; 
  unsigned __int64 m_linkedAccountID; 
  const char *v13; 
  __int64 v14; 
  bdHTTP *m_httpInterface; 
  bool (__fastcall *setHeader)(bdHTTP *, const char *, const unsigned __int64); 
  unsigned __int64 TransactionID; 
  bdHTTP::bdHTTPHeader *p_headers; 
  unsigned __int64 v19; 
  bdRemoteTask *m_ptr; 
  bdReference<bdRemoteTask> v22; 
  bdReference<bdRemoteTask> resulta; 
  bdHTTP::bdHTTPHeader headers; 
  char buf[1024]; 
  char authorizationHeader[4144]; 

  v22.m_ptr = (bdRemoteTask *)result;
  if ( bdSingleIdentityBase::readyForRequest(this) )
  {
    bdSingleIdentityBase::clearBuffers(this);
    NewTask = bdSingleIdentityBase::getNewTask(this, &v22);
    bdReference<bdRemoteTask>::operator=(&this->m_remoteTask, NewTask);
    if ( v22.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v22.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v22.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))v22.m_ptr->~bdReferencable)(v22.m_ptr, 1i64);
    m_linkedAccountID = account->m_linkedAccountID;
    v13 = this->getUrl(this);
    bdSnprintf(buf, 0x400ui64, "%s/v1.0/users/%I64u/%s/%I64u/?client=%s", v13, umbrellaID, account->m_provider, m_linkedAccountID, this->m_client);
    if ( psnIDMode )
      bdSingleIdentityBase::appendQueryString(this, buf, (const char *)&queryFormat, "&psnIDMode=legacy");
    bdSnprintf(authorizationHeader, 0x1030ui64, "Bearer %s", accessToken);
    v14 = 2i64;
    bdSingleIdentityBase::setBasicHeaders(this, &headers, 2u, authorizationHeader, 0);
    this->m_httpInterface->initRequest(this->m_httpInterface, BD_DELETE, buf, 0);
    bdHTTP::setDownloadBuffer(this->m_httpInterface, this->m_httpResponseBuffer, this->m_responseBufferSize);
    m_httpInterface = this->m_httpInterface;
    setHeader = m_httpInterface->setHeader;
    TransactionID = bdRemoteTask::getTransactionID(this->m_remoteTask.m_ptr);
    setHeader(m_httpInterface, "X-TransactionID", TransactionID);
    p_headers = &headers;
    do
    {
      this->m_httpInterface->setHeader(this->m_httpInterface, p_headers->key, p_headers->value);
      ++p_headers;
      --v14;
    }
    while ( v14 );
    this->m_httpInterface->sendRequest(this->m_httpInterface);
    v19 = bdRemoteTask::getTransactionID(this->m_remoteTask.m_ptr);
    bdLogMessage(BD_LOG_INFO, "info/", "bdSingleIdentity/bdUmbrella", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdsingleidentity\\bdumbrella.cpp", "bdUmbrella::deauthorizeUserProviderAccount", 0xB3u, "Started call to bdUmbrella::deauthorizeUserProviderAccount. TransactionID: (%I64u)", v19);
  }
  else
  {
    FailedTask = bdSingleIdentityBase::getFailedTask(this, &resulta);
    bdReference<bdRemoteTask>::operator=(&this->m_remoteTask, FailedTask);
    if ( resulta.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
  }
  m_ptr = this->m_remoteTask.m_ptr;
  result->m_ptr = m_ptr;
  if ( m_ptr )
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
  return result;
}

/*
==============
bdUmbrella::getProviderTokens
==============
*/
bdReference<bdRemoteTask> *bdUmbrella::getProviderTokens(bdUmbrella *this, bdReference<bdRemoteTask> *result, unsigned __int64 umbrellaID, const bdUmbrellaProviderAccount *account, bdUmbrellaProviderToken *tokens, const char *accessToken, unsigned int refreshIfExpiresIn, bool psnIDMode, unsigned int xCacheAge)
{
  const bdReference<bdRemoteTask> *FailedTask; 
  unsigned __int64 m_linkedAccountID; 
  const char *v15; 
  const bdReference<bdRemoteTask> *NewTask; 
  unsigned int v17; 
  bdHTTP *m_httpInterface; 
  bool (__fastcall *setHeader)(bdHTTP *, const char *, const unsigned __int64); 
  unsigned __int64 TransactionID; 
  unsigned __int16 i; 
  unsigned __int64 v22; 
  bdRemoteTask *m_ptr; 
  bdReference<bdRemoteTask> v25; 
  bdReference<bdRemoteTask> resulta; 
  bdHTTP::bdHTTPHeader headers[2]; 
  const char *v28; 
  char *v29; 
  char v30[16]; 
  char buf[1024]; 
  char authorizationHeader[4144]; 

  v25.m_ptr = (bdRemoteTask *)result;
  if ( bdSingleIdentityBase::readyForRequest(this) )
  {
    bdSingleIdentityBase::clearBuffers(this);
    this->m_outputObject = tokens;
    m_linkedAccountID = account->m_linkedAccountID;
    v15 = this->getUrl(this);
    bdSnprintf(buf, 0x400ui64, "%s/v1.0/users/%I64u/%s/%I64u/tokens/?client=%s", v15, umbrellaID, account->m_provider, m_linkedAccountID, this->m_client);
    if ( psnIDMode )
      bdSingleIdentityBase::appendQueryString(this, buf, (const char *)&queryFormat, "&psnIDMode=legacy");
    if ( refreshIfExpiresIn )
      bdSingleIdentityBase::appendQueryString(this, buf, "&refreshIfExpiresIn=%u", refreshIfExpiresIn);
    NewTask = bdSingleIdentityBase::getNewTask(this, &v25);
    bdReference<bdRemoteTask>::operator=(&this->m_remoteTask, NewTask);
    if ( v25.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v25.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v25.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))v25.m_ptr->~bdReferencable)(v25.m_ptr, 1i64);
    v17 = 2;
    bdSnprintf(authorizationHeader, 0x1030ui64, "Bearer %s", accessToken);
    bdSingleIdentityBase::setBasicHeaders(this, headers, 2u, authorizationHeader, 0);
    if ( xCacheAge )
    {
      bdSnprintf(v30, 0xAui64, "%u", xCacheAge);
      v17 = 3;
      v28 = "X-Cache-Age";
      v29 = v30;
    }
    this->m_httpInterface->initRequest(this->m_httpInterface, BD_GET, buf, 0);
    bdHTTP::setDownloadBuffer(this->m_httpInterface, this->m_httpResponseBuffer, this->m_responseBufferSize);
    m_httpInterface = this->m_httpInterface;
    setHeader = m_httpInterface->setHeader;
    TransactionID = bdRemoteTask::getTransactionID(this->m_remoteTask.m_ptr);
    setHeader(m_httpInterface, "X-TransactionID", TransactionID);
    for ( i = 0; i < v17; ++i )
      this->m_httpInterface->setHeader(this->m_httpInterface, headers[i].key, headers[i].value);
    this->m_httpInterface->sendRequest(this->m_httpInterface);
    v22 = bdRemoteTask::getTransactionID(this->m_remoteTask.m_ptr);
    bdLogMessage(BD_LOG_INFO, "info/", "bdSingleIdentity/bdUmbrella", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdsingleidentity\\bdumbrella.cpp", "bdUmbrella::getProviderTokens", 0xFAu, "Started call to bdUmbrella::getProviderTokens. TransactionID: (%I64u)", v22);
  }
  else
  {
    FailedTask = bdSingleIdentityBase::getFailedTask(this, &resulta);
    bdReference<bdRemoteTask>::operator=(&this->m_remoteTask, FailedTask);
    if ( resulta.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
  }
  m_ptr = this->m_remoteTask.m_ptr;
  result->m_ptr = m_ptr;
  if ( m_ptr )
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
  return result;
}

/*
==============
bdUmbrella::getSIAuthToken
==============
*/
bdReference<bdRemoteTask> *bdUmbrella::getSIAuthToken(bdUmbrella *this, bdReference<bdRemoteTask> *result, const char *provider, const char *accessToken)
{
  const bdReference<bdRemoteTask> *v8; 
  bdRemoteTask *v9; 
  const bdReference<bdRemoteTask> *NewTask; 
  bdReference<bdRemoteTask> *p_m_remoteTask; 
  const char *v12; 
  bdHTTP *m_httpInterface; 
  unsigned int v14; 
  bdHTTP *v15; 
  bool (__fastcall *setHeader)(bdHTTP *, const char *, const unsigned __int64); 
  unsigned __int64 TransactionID; 
  unsigned __int64 v18; 
  const bdReference<bdRemoteTask> *FailedTask; 
  bdRemoteTask *m_ptr; 
  bdReference<bdRemoteTask> v22; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> v24; 
  bdHTTP::bdHTTPHeader headers; 
  __int64 v26; 
  bdJSONSerializer v27; 
  char buf[1024]; 

  v26 = -2i64;
  v22.m_ptr = (bdRemoteTask *)result;
  if ( bdSingleIdentityBase::readyForRequest(this) )
  {
    bdSingleIdentityBase::clearBuffers(this);
    bdJSONSerializer::bdJSONSerializer(&v27);
    bdJSONSerializer::setBuffer(&v27, this->m_httpRequestBuffer, this->m_requestBufferSize);
    if ( bdJSONSerializer::writeBeginObject(&v27) && bdJSONSerializer::writeString(&v27, "provider", "uno") && bdJSONSerializer::writeBeginObject(&v27, "tokens") && bdJSONSerializer::writeString(&v27, "accessToken", accessToken) && bdJSONSerializer::writeEndObject(&v27) && bdJSONSerializer::writeEndObject(&v27) )
    {
      NewTask = bdSingleIdentityBase::getNewTask(this, &v24);
      p_m_remoteTask = &this->m_remoteTask;
      bdReference<bdRemoteTask>::operator=(&this->m_remoteTask, NewTask);
      if ( v24.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v24.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v24.m_ptr )
        ((void (__fastcall *)(bdRemoteTask *, __int64))v24.m_ptr->~bdReferencable)(v24.m_ptr, 1i64);
      v12 = this->getUrl(this);
      bdSnprintf(buf, 0x400ui64, "%s/v1.0/tokens/siauth/%s/?client=%s", v12, provider, this->m_client);
      bdSingleIdentityBase::setBasicHeaders(this, &headers, 1u, NULL, 0);
      ((void (__fastcall *)(bdHTTP *, __int64, char *))this->m_httpInterface->initRequest)(this->m_httpInterface, 3i64, buf);
      m_httpInterface = this->m_httpInterface;
      v14 = bdJSONSerializer::length(&v27);
      bdHTTP::setUploadData(m_httpInterface, this->m_httpRequestBuffer, v14);
      bdHTTP::setDownloadBuffer(this->m_httpInterface, this->m_httpResponseBuffer, this->m_responseBufferSize);
      this->m_httpInterface->setHeader(this->m_httpInterface, "Content-Type", "application/json");
      v15 = this->m_httpInterface;
      setHeader = v15->setHeader;
      TransactionID = bdRemoteTask::getTransactionID(p_m_remoteTask->m_ptr);
      setHeader(v15, "X-TransactionID", TransactionID);
      this->m_httpInterface->setHeader(this->m_httpInterface, headers.key, headers.value);
      this->m_httpInterface->sendRequest(this->m_httpInterface);
      v18 = bdRemoteTask::getTransactionID(p_m_remoteTask->m_ptr);
      bdLogMessage(BD_LOG_INFO, "info/", "bdSingleIdentity/bdUmbrella", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdsingleidentity\\bdumbrella.cpp", "bdUmbrella::getSIAuthToken", 0x244u, "Started call to bdUmbrella::getSIAuthToken. TransactionID: (%I64u)", v18);
    }
    else
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdSingleIdentity/bdUmbrella", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdsingleidentity\\bdumbrella.cpp", "bdUmbrella::getSIAuthToken", 0x248u, "Error serializing JSON, request cannot be sent.");
      FailedTask = bdSingleIdentityBase::getFailedTask(this, &v22);
      p_m_remoteTask = &this->m_remoteTask;
      bdReference<bdRemoteTask>::operator=(&this->m_remoteTask, FailedTask);
      if ( v22.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v22.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v22.m_ptr )
        ((void (__fastcall *)(bdRemoteTask *, __int64))v22.m_ptr->~bdReferencable)(v22.m_ptr, 1i64);
    }
    m_ptr = p_m_remoteTask->m_ptr;
    result->m_ptr = p_m_remoteTask->m_ptr;
    if ( m_ptr )
      _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
    bdJSONSerializer::~bdJSONSerializer(&v27);
  }
  else
  {
    v8 = bdSingleIdentityBase::getFailedTask(this, &resulta);
    bdReference<bdRemoteTask>::operator=(&this->m_remoteTask, v8);
    if ( resulta.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
    v9 = this->m_remoteTask.m_ptr;
    result->m_ptr = v9;
    if ( v9 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v9->m_refCount, 1u);
  }
  return result;
}

/*
==============
bdUmbrella::getUrl
==============
*/
const char *bdUmbrella::getUrl(bdUmbrella *this)
{
  bdEnvironment m_environment; 

  m_environment = this->m_environment;
  if ( this->m_region[0] != aCn[0] || this->m_region[1] != aCn[1] || this->m_region[2] != aCn[2] )
  {
    if ( m_environment )
    {
      if ( m_environment == BD_ENVIRONMENT_CERT )
        return "https:
      if ( m_environment == BD_ENVIRONMENT_PROD )
        return "https:
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdSingleIdentity/bdUmbrella", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdsingleidentity\\bdumbrella.cpp", "bdUmbrella::getUrl", 0x2EFu, "Unknown environment (%u): Defaulting to DEV Umbrella URL", this->m_environment);
    }
    return "https:
  }
  if ( m_environment == BD_ENVIRONMENT_DEV )
    return "https:
  if ( m_environment == BD_ENVIRONMENT_CERT )
    return "https:
  if ( m_environment != BD_ENVIRONMENT_PROD )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdSingleIdentity/bdUmbrella", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdsingleidentity\\bdumbrella.cpp", "bdUmbrella::getUrl", 0x2D5u, "Unknown environment (%u): Defaulting to DEV Umbrella URL", this->m_environment);
    return "https:
  }
  return "https:
}

/*
==============
bdUmbrella::getUserByUmbrellaID
==============
*/
bdReference<bdRemoteTask> *bdUmbrella::getUserByUmbrellaID(bdUmbrella *this, bdReference<bdRemoteTask> *result, unsigned __int64 umbrellaID, bdUmbrellaUserAccount *userInfo, const char *accessToken)
{
  const bdReference<bdRemoteTask> *FailedTask; 
  const bdReference<bdRemoteTask> *NewTask; 
  const char *v11; 
  __int64 v12; 
  bdHTTP *m_httpInterface; 
  bool (__fastcall *setHeader)(bdHTTP *, const char *, const unsigned __int64); 
  unsigned __int64 TransactionID; 
  bdHTTP::bdHTTPHeader *p_headers; 
  unsigned __int64 v17; 
  bdRemoteTask *m_ptr; 
  bdReference<bdRemoteTask> v20; 
  bdReference<bdRemoteTask> resulta; 
  bdHTTP::bdHTTPHeader headers; 
  char buf[1024]; 
  char authorizationHeader[4144]; 

  v20.m_ptr = (bdRemoteTask *)result;
  if ( bdSingleIdentityBase::readyForRequest(this) )
  {
    this->m_outputObject = userInfo;
    bdSingleIdentityBase::clearBuffers(this);
    NewTask = bdSingleIdentityBase::getNewTask(this, &v20);
    bdReference<bdRemoteTask>::operator=(&this->m_remoteTask, NewTask);
    if ( v20.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v20.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v20.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))v20.m_ptr->~bdReferencable)(v20.m_ptr, 1i64);
    v11 = this->getUrl(this);
    bdSnprintf(buf, 0x400ui64, "%s/v1.0/users/%I64u/?client=%s", v11, umbrellaID, this->m_client);
    bdSnprintf(authorizationHeader, 0x1030ui64, "Bearer %s", accessToken);
    v12 = 2i64;
    bdSingleIdentityBase::setBasicHeaders(this, &headers, 2u, authorizationHeader, 0);
    this->m_httpInterface->initRequest(this->m_httpInterface, BD_GET, buf, 0);
    bdHTTP::setDownloadBuffer(this->m_httpInterface, this->m_httpResponseBuffer, this->m_responseBufferSize);
    m_httpInterface = this->m_httpInterface;
    setHeader = m_httpInterface->setHeader;
    TransactionID = bdRemoteTask::getTransactionID(this->m_remoteTask.m_ptr);
    setHeader(m_httpInterface, "X-TransactionID", TransactionID);
    p_headers = &headers;
    do
    {
      this->m_httpInterface->setHeader(this->m_httpInterface, p_headers->key, p_headers->value);
      ++p_headers;
      --v12;
    }
    while ( v12 );
    this->m_httpInterface->sendRequest(this->m_httpInterface);
    v17 = bdRemoteTask::getTransactionID(this->m_remoteTask.m_ptr);
    bdLogMessage(BD_LOG_INFO, "info/", "bdSingleIdentity/bdUmbrella", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdsingleidentity\\bdumbrella.cpp", "bdUmbrella::getUserByUmbrellaID", 0x7Fu, "Started call to bdUmbrella::getUserByUmbrellaID. TransactionID: (%I64u)", v17);
  }
  else
  {
    FailedTask = bdSingleIdentityBase::getFailedTask(this, &resulta);
    bdReference<bdRemoteTask>::operator=(&this->m_remoteTask, FailedTask);
    if ( resulta.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
  }
  m_ptr = this->m_remoteTask.m_ptr;
  result->m_ptr = m_ptr;
  if ( m_ptr )
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
  return result;
}

