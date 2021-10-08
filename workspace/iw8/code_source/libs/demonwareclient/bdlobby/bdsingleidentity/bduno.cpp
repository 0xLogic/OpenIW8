/*
==============
bdUno::authenticateUser
==============
*/

bdReference<bdRemoteTask> *__fastcall bdUno::authenticateUser(bdUno *this, bdReference<bdRemoteTask> *result, bdUnoAccountInfo *accountInfo, const char *fields)
{
  return ?authenticateUser@bdUno@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEAVbdUnoAccountInfo@@PEBD@Z(this, result, accountInfo, fields);
}

/*
==============
bdUno::createPreRegistration
==============
*/

bdReference<bdRemoteTask> *__fastcall bdUno::createPreRegistration(bdUno *this, bdReference<bdRemoteTask> *result, const bdUmbrellaAccessInfo *umbrellaAccessInfo, const bdUmbrellaProviderAccount *umbrellaProviderAccount, const char *email, const char *country, const char *dateOfBirth, const char *locale)
{
  return ?createPreRegistration@bdUno@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBVbdUmbrellaAccessInfo@@PEBVbdUmbrellaProviderAccount@@PEBD222@Z(this, result, umbrellaAccessInfo, umbrellaProviderAccount, email, country, dateOfBirth, locale);
}

/*
==============
bdUno::getBaseUrl
==============
*/

const char *__fastcall bdUno::getBaseUrl(bdUno *this)
{
  return ?getBaseUrl@bdUno@@IEBAPEBDXZ(this);
}

/*
==============
bdUno::~bdUno
==============
*/

void __fastcall bdUno::~bdUno(bdUno *this)
{
  ??1bdUno@@UEAA@XZ(this);
}

/*
==============
bdUno::getAuthServerToken
==============
*/

bdReference<bdRemoteTask> *__fastcall bdUno::getAuthServerToken(bdUno *this, bdReference<bdRemoteTask> *result, bdUnoAccountInfo *accountInfo)
{
  return ?getAuthServerToken@bdUno@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEAVbdUnoAccountInfo@@@Z(this, result, accountInfo);
}

/*
==============
bdUno::acceptTermsOfServiceForClient
==============
*/

bdReference<bdRemoteTask> *__fastcall bdUno::acceptTermsOfServiceForClient(bdUno *this, bdReference<bdRemoteTask> *result, unsigned __int64 accountID, const bdUnoTermsOfService *termsOfService, const char *accessToken)
{
  return ?acceptTermsOfServiceForClient@bdUno@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KPEBVbdUnoTermsOfService@@PEBD@Z(this, result, accountID, termsOfService, accessToken);
}

/*
==============
bdUno::isRegistrationAvailable
==============
*/

bdReference<bdRemoteTask> *__fastcall bdUno::isRegistrationAvailable(bdUno *this, bdReference<bdRemoteTask> *result, bool *isAvailable)
{
  return ?isRegistrationAvailable@bdUno@@QEAA?AV?$bdReference@VbdRemoteTask@@@@AEA_N@Z(this, result, isAvailable);
}

/*
==============
bdUno::getUserAcceptedTermsOfService
==============
*/

bdReference<bdRemoteTask> *__fastcall bdUno::getUserAcceptedTermsOfService(bdUno *this, bdReference<bdRemoteTask> *result, unsigned __int64 accountID, bdUnoTermsOfService *termsOfService, const char *accessToken)
{
  return ?getUserAcceptedTermsOfService@bdUno@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KPEAVbdUnoTermsOfService@@PEBD@Z(this, result, accountID, termsOfService, accessToken);
}

/*
==============
bdUno::updateUserSecuredFields
==============
*/

bdReference<bdRemoteTask> *__fastcall bdUno::updateUserSecuredFields(bdUno *this, bdReference<bdRemoteTask> *result, const bdUnoAccountInfo *accountInfo, const char *accessToken, const char *currentPassword, const char *locale)
{
  return ?updateUserSecuredFields@bdUno@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBVbdUnoAccountInfo@@PEBD11@Z(this, result, accountInfo, accessToken, currentPassword, locale);
}

/*
==============
bdUno::isSubscribedToEmailMarketing
==============
*/

bdReference<bdRemoteTask> *__fastcall bdUno::isSubscribedToEmailMarketing(bdUno *this, bdReference<bdRemoteTask> *result, unsigned __int64 accountID, const char *accessToken, bdUnoSubscriptionsEnabled *subscriptionsEnabled)
{
  return ?isSubscribedToEmailMarketing@bdUno@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KPEBDPEAVbdUnoSubscriptionsEnabled@@@Z(this, result, accountID, accessToken, subscriptionsEnabled);
}

/*
==============
bdUno::updateUser
==============
*/

bdReference<bdRemoteTask> *__fastcall bdUno::updateUser(bdUno *this, bdReference<bdRemoteTask> *result, const bdUnoAccountInfo *accountInfo, const char *accessToken, const char *locale)
{
  return ?updateUser@bdUno@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBVbdUnoAccountInfo@@PEBD1@Z(this, result, accountInfo, accessToken, locale);
}

/*
==============
bdUno::bdUno
==============
*/

void __fastcall bdUno::bdUno(bdUno *this)
{
  ??0bdUno@@QEAA@XZ(this);
}

/*
==============
bdUno::getUrl
==============
*/

const char *__fastcall bdUno::getUrl(bdUno *this)
{
  return ?getUrl@bdUno@@MEBAPEBDXZ(this);
}

/*
==============
bdUno::validateFields
==============
*/

bool __fastcall bdUno::validateFields(bdUno *this, const char *fields)
{
  return ?validateFields@bdUno@@IEAA_NPEBD@Z(this, fields);
}

/*
==============
bdUno::subscribeUserToEmailMarketing
==============
*/

bdReference<bdRemoteTask> *__fastcall bdUno::subscribeUserToEmailMarketing(bdUno *this, bdReference<bdRemoteTask> *result, unsigned __int64 accountID, const char *accessToken, const char **subscriptionNames, unsigned __int16 numSubscriptions)
{
  return ?subscribeUserToEmailMarketing@bdUno@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KPEBDPEAPEBDG@Z(this, result, accountID, accessToken, subscriptionNames, numSubscriptions);
}

/*
==============
bdUno::unsubscribeUserFromEmailMarketing
==============
*/

bdReference<bdRemoteTask> *__fastcall bdUno::unsubscribeUserFromEmailMarketing(bdUno *this, bdReference<bdRemoteTask> *result, unsigned __int64 accountID, const char *accessToken, const char *subscriptionName)
{
  return ?unsubscribeUserFromEmailMarketing@bdUno@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KPEBD1@Z(this, result, accountID, accessToken, subscriptionName);
}

/*
==============
bdUno::createAccount
==============
*/

bdReference<bdRemoteTask> *__fastcall bdUno::createAccount(bdUno *this, bdReference<bdRemoteTask> *result, bdUnoAccountInfo *accountInfo, const bdUnoSubscription *subscriptions, unsigned __int16 numSubscriptions, const bdUnoTermsOfService *termsOfService, const char *locale, const char *fields, const char *source)
{
  return ?createAccount@bdUno@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEAVbdUnoAccountInfo@@PEBVbdUnoSubscription@@GPEBVbdUnoTermsOfService@@PEBD33@Z(this, result, accountInfo, subscriptions, numSubscriptions, termsOfService, locale, fields, source);
}

/*
==============
bdUno::pump
==============
*/

void __fastcall bdUno::pump(bdUno *this)
{
  ?pump@bdUno@@QEAAXXZ(this);
}

/*
==============
bdUno::authenticateUmbrellaToken
==============
*/

bdReference<bdRemoteTask> *__fastcall bdUno::authenticateUmbrellaToken(bdUno *this, bdReference<bdRemoteTask> *result, const bdUmbrellaAccessInfo *umbrellaAccessInfo, bdUnoTokens *unoTokens)
{
  return ?authenticateUmbrellaToken@bdUno@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBVbdUmbrellaAccessInfo@@PEAVbdUnoTokens@@@Z(this, result, umbrellaAccessInfo, unoTokens);
}

/*
==============
bdUno::getTermsOfServiceData
==============
*/

bdReference<bdRemoteTask> *__fastcall bdUno::getTermsOfServiceData(bdUno *this, bdReference<bdRemoteTask> *result, bdUnoTermsOfService *termsOfService)
{
  return ?getTermsOfServiceData@bdUno@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEAVbdUnoTermsOfService@@@Z(this, result, termsOfService);
}

/*
==============
bdUno::handleLookupComplete
==============
*/

void __fastcall bdUno::handleLookupComplete(bdUno *this)
{
  ?handleLookupComplete@bdUno@@IEAAXXZ(this);
}

/*
==============
bdUno::deleteUser
==============
*/

bdReference<bdRemoteTask> *__fastcall bdUno::deleteUser(bdUno *this, bdReference<bdRemoteTask> *result, unsigned __int64 accountID, const char *accessToken)
{
  return ?deleteUser@bdUno@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KPEBD@Z(this, result, accountID, accessToken);
}

/*
==============
bdUno::getTermsOfServiceContent
==============
*/

bdReference<bdRemoteTask> *__fastcall bdUno::getTermsOfServiceContent(bdUno *this, bdReference<bdRemoteTask> *result, bdUnoTermsOfService *termsOfService, const char *locale)
{
  return ?getTermsOfServiceContent@bdUno@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEAVbdUnoTermsOfService@@PEBD@Z(this, result, termsOfService, locale);
}

/*
==============
bdUno::authenticateUmbrellaToken
==============
*/

bdReference<bdRemoteTask> *__fastcall bdUno::authenticateUmbrellaToken(bdUno *this, bdReference<bdRemoteTask> *result, const bdUmbrellaAccessInfo *umbrellaAccessInfo, bdUnoAccountInfoAndTokens *unoAccountInfoAndTokens, const char *fields)
{
  return ?authenticateUmbrellaToken@bdUno@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBVbdUmbrellaAccessInfo@@PEAVbdUnoAccountInfoAndTokens@@PEBD@Z(this, result, umbrellaAccessInfo, unoAccountInfoAndTokens, fields);
}

/*
==============
bdUno::pumpLookup
==============
*/

void __fastcall bdUno::pumpLookup(bdUno *this)
{
  ?pumpLookup@bdUno@@IEAAXXZ(this);
}

/*
==============
bdUno::handleLookupFailure
==============
*/

void __fastcall bdUno::handleLookupFailure(bdUno *this)
{
  ?handleLookupFailure@bdUno@@IEAAXXZ(this);
}

/*
==============
bdUno::createPreRegistrationCode
==============
*/

bdReference<bdRemoteTask> *__fastcall bdUno::createPreRegistrationCode(bdUno *this, bdReference<bdRemoteTask> *result, bdUnoPreRegistrationCode *unoPreRegistrationCode, const bdUmbrellaAccessInfo *umbrellaAccessInfo, const bdUmbrellaProviderAccount *umbrellaProviderAccount, const char *email, const char *country, const char *dateOfBirth, const char *locale)
{
  return ?createPreRegistrationCode@bdUno@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEAVbdUnoPreRegistrationCode@@PEBVbdUmbrellaAccessInfo@@PEBVbdUmbrellaProviderAccount@@PEBD333@Z(this, result, unoPreRegistrationCode, umbrellaAccessInfo, umbrellaProviderAccount, email, country, dateOfBirth, locale);
}

/*
==============
bdUno::convertSIErrorCode
==============
*/

bdLobbyErrorCode __fastcall bdUno::convertSIErrorCode(bdUno *this, const unsigned int errorCode)
{
  return ?convertSIErrorCode@bdUno@@MEBA?AW4bdLobbyErrorCode@@I@Z(this, errorCode);
}

/*
==============
bdUno::bdUno
==============
*/
void bdUno::bdUno(bdUno *this)
{
  bdGetHostByName *v2; 
  bdGetHostByName *v3; 
  bdGetHostByName *v4; 

  bdSingleIdentityBase::bdSingleIdentityBase(this);
  this->__vftable = (bdUno_vtbl *)&bdUno::`vftable';
  v2 = NULL;
  this->m_lookup = NULL;
  this->m_isRegistrationAvailable = NULL;
  v3 = (bdGetHostByName *)bdMemory::allocate(0x240ui64);
  if ( v3 )
  {
    bdGetHostByName::bdGetHostByName(v3, 0);
    v2 = v4;
  }
  this->m_lookup = v2;
}

/*
==============
bdUno::~bdUno
==============
*/
void bdUno::~bdUno(bdUno *this)
{
  bdGetHostByName *m_lookup; 

  this->__vftable = (bdUno_vtbl *)&bdUno::`vftable';
  m_lookup = this->m_lookup;
  if ( m_lookup )
  {
    ((void (__fastcall *)(bdGetHostByName *, __int64))m_lookup->~bdRunnable)(m_lookup, 1i64);
    this->m_lookup = NULL;
  }
  bdSingleIdentityBase::~bdSingleIdentityBase(this);
}

/*
==============
bdUno::acceptTermsOfServiceForClient
==============
*/
bdReference<bdRemoteTask> *bdUno::acceptTermsOfServiceForClient(bdUno *this, bdReference<bdRemoteTask> *result, unsigned __int64 accountID, const bdUnoTermsOfService *termsOfService, const char *accessToken)
{
  const bdReference<bdRemoteTask> *v9; 
  bdRemoteTask *v10; 
  const bdReference<bdRemoteTask> *NewTask; 
  bdReference<bdRemoteTask> *p_m_remoteTask; 
  const char *v13; 
  __int64 v14; 
  bdHTTP *m_httpInterface; 
  unsigned int v16; 
  bdHTTP *v17; 
  bool (__fastcall *setHeader)(bdHTTP *, const char *, const unsigned __int64); 
  unsigned __int64 TransactionID; 
  bdHTTP::bdHTTPHeader *p_headers; 
  unsigned __int64 v21; 
  const bdReference<bdRemoteTask> *FailedTask; 
  bdRemoteTask *m_ptr; 
  bdReference<bdRemoteTask> v25; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> v27; 
  __int64 v28; 
  bdHTTP::bdHTTPHeader headers; 
  bdJSONSerializer v30; 
  char buf[1024]; 
  char authorizationHeader[4144]; 

  v28 = -2i64;
  v25.m_ptr = (bdRemoteTask *)result;
  if ( bdSingleIdentityBase::readyForRequest(this) )
  {
    bdSingleIdentityBase::clearBuffers(this);
    bdJSONSerializer::bdJSONSerializer(&v30);
    bdJSONSerializer::setBuffer(&v30, this->m_httpRequestBuffer, this->m_requestBufferSize);
    if ( bdJSONSerializer::writeBeginObject(&v30) && bdJSONSerializer::writeUInt32(&v30, "version", termsOfService->m_version, 0) && bdJSONSerializer::writeEndObject(&v30) )
    {
      NewTask = bdSingleIdentityBase::getNewTask(this, &v27);
      p_m_remoteTask = &this->m_remoteTask;
      bdReference<bdRemoteTask>::operator=(&this->m_remoteTask, NewTask);
      if ( v27.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v27.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v27.m_ptr )
        ((void (__fastcall *)(bdRemoteTask *, __int64))v27.m_ptr->~bdReferencable)(v27.m_ptr, 1i64);
      v13 = this->getUrl(this);
      bdSnprintf(buf, 0x400ui64, "%s/users/%I64u/termsofservice/%s/?client=%s", v13, accountID, this->m_client, this->m_client);
      bdSnprintf(authorizationHeader, 0x1030ui64, "Bearer %s", accessToken);
      v14 = 2i64;
      bdSingleIdentityBase::setBasicHeaders(this, &headers, 2u, authorizationHeader, 0);
      this->m_httpInterface->initRequest(this->m_httpInterface, BD_POST, buf, 0);
      m_httpInterface = this->m_httpInterface;
      v16 = bdJSONSerializer::length(&v30);
      bdHTTP::setUploadData(m_httpInterface, this->m_httpRequestBuffer, v16);
      bdHTTP::setDownloadBuffer(this->m_httpInterface, this->m_httpResponseBuffer, this->m_responseBufferSize);
      this->m_httpInterface->setHeader(this->m_httpInterface, "Content-Type", "application/json");
      v17 = this->m_httpInterface;
      setHeader = v17->setHeader;
      TransactionID = bdRemoteTask::getTransactionID(p_m_remoteTask->m_ptr);
      setHeader(v17, "X-TransactionID", TransactionID);
      p_headers = &headers;
      do
      {
        this->m_httpInterface->setHeader(this->m_httpInterface, p_headers->key, p_headers->value);
        ++p_headers;
        --v14;
      }
      while ( v14 );
      this->m_httpInterface->sendRequest(this->m_httpInterface);
      v21 = bdRemoteTask::getTransactionID(p_m_remoteTask->m_ptr);
      bdLogMessage(BD_LOG_INFO, "info/", "bdSingleIdentity/bdUno", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdsingleidentity\\bduno.cpp", "bdUno::acceptTermsOfServiceForClient", 0x384u, "Started call to bdUno::acceptTermsOfServiceForClient. TransactionID: (%I64u)", v21);
    }
    else
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdSingleIdentity/bdUno", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdsingleidentity\\bduno.cpp", "bdUno::acceptTermsOfServiceForClient", 0x388u, "Error serializing JSON, request cannot be sent.");
      FailedTask = bdSingleIdentityBase::getFailedTask(this, &v25);
      p_m_remoteTask = &this->m_remoteTask;
      bdReference<bdRemoteTask>::operator=(&this->m_remoteTask, FailedTask);
      if ( v25.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v25.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v25.m_ptr )
        ((void (__fastcall *)(bdRemoteTask *, __int64))v25.m_ptr->~bdReferencable)(v25.m_ptr, 1i64);
    }
    m_ptr = p_m_remoteTask->m_ptr;
    result->m_ptr = p_m_remoteTask->m_ptr;
    if ( m_ptr )
      _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
    bdJSONSerializer::~bdJSONSerializer(&v30);
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
bdUno::authenticateUmbrellaToken
==============
*/
bdReference<bdRemoteTask> *bdUno::authenticateUmbrellaToken(bdUno *this, bdReference<bdRemoteTask> *result, const bdUmbrellaAccessInfo *umbrellaAccessInfo, bdUnoAccountInfoAndTokens *unoAccountInfoAndTokens, const char *fields)
{
  const bdReference<bdRemoteTask> *v9; 
  bdRemoteTask *v10; 
  const bdReference<bdRemoteTask> *NewTask; 
  bdReference<bdRemoteTask> *p_m_remoteTask; 
  const char *v13; 
  const char *v14; 
  bdHTTP *m_httpInterface; 
  unsigned int v16; 
  bdHTTP *v17; 
  bool (__fastcall *setHeader)(bdHTTP *, const char *, const unsigned __int64); 
  unsigned __int64 TransactionID; 
  unsigned __int64 v20; 
  const bdReference<bdRemoteTask> *FailedTask; 
  bdRemoteTask *m_ptr; 
  bdReference<bdRemoteTask> v24; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> v26; 
  bdHTTP::bdHTTPHeader headers; 
  __int64 v28; 
  bdJSONSerializer v29; 
  char buf[1024]; 

  v28 = -2i64;
  v24.m_ptr = (bdRemoteTask *)result;
  if ( bdSingleIdentityBase::readyForRequest(this) )
  {
    this->m_outputObject = unoAccountInfoAndTokens;
    bdSingleIdentityBase::clearBuffers(this);
    bdJSONSerializer::bdJSONSerializer(&v29);
    bdJSONSerializer::setBuffer(&v29, this->m_httpRequestBuffer, this->m_requestBufferSize);
    if ( bdJSONSerializer::writeBeginObject(&v29) && bdJSONSerializer::writeString(&v29, "grantType", "umbrella") && bdJSONSerializer::writeString(&v29, "umbrellaToken", umbrellaAccessInfo->m_accessToken) && bdJSONSerializer::writeEndObject(&v29) )
    {
      NewTask = bdSingleIdentityBase::getNewTask(this, &v26);
      p_m_remoteTask = &this->m_remoteTask;
      bdReference<bdRemoteTask>::operator=(&this->m_remoteTask, NewTask);
      if ( v26.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v26.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v26.m_ptr )
        ((void (__fastcall *)(bdRemoteTask *, __int64))v26.m_ptr->~bdReferencable)(v26.m_ptr, 1i64);
      v13 = this->getUrl(this);
      bdSnprintf(buf, 0x400ui64, "%s/tokens/?client=%s", v13, this->m_client);
      v14 = fields;
      if ( !fields )
        v14 = (char *)&queryFormat.fmt + 3;
      bdSingleIdentityBase::appendQueryString(this, buf, "&fields=unoID,userName,accountType,%s", v14);
      bdSingleIdentityBase::setBasicHeaders(this, &headers, 1u, NULL, 0);
      ((void (__fastcall *)(bdHTTP *, __int64, char *))this->m_httpInterface->initRequest)(this->m_httpInterface, 3i64, buf);
      m_httpInterface = this->m_httpInterface;
      v16 = bdJSONSerializer::length(&v29);
      bdHTTP::setUploadData(m_httpInterface, this->m_httpRequestBuffer, v16);
      bdHTTP::setDownloadBuffer(this->m_httpInterface, this->m_httpResponseBuffer, this->m_responseBufferSize);
      this->m_httpInterface->setHeader(this->m_httpInterface, "Content-Type", "application/json");
      v17 = this->m_httpInterface;
      setHeader = v17->setHeader;
      TransactionID = bdRemoteTask::getTransactionID(p_m_remoteTask->m_ptr);
      setHeader(v17, "X-TransactionID", TransactionID);
      this->m_httpInterface->setHeader(this->m_httpInterface, headers.key, headers.value);
      this->m_httpInterface->sendRequest(this->m_httpInterface);
      v20 = bdRemoteTask::getTransactionID(p_m_remoteTask->m_ptr);
      bdLogMessage(BD_LOG_INFO, "info/", "bdSingleIdentity/bdUno", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdsingleidentity\\bduno.cpp", "bdUno::authenticateUmbrellaToken", 0x19Au, "Started call to bdUno::authenticateUmbrellaToken. TransactionID: (%I64u)", v20);
    }
    else
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdSingleIdentity/bdUno", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdsingleidentity\\bduno.cpp", "bdUno::authenticateUmbrellaToken", 0x19Eu, "Error serializing JSON, request cannot be sent.");
      FailedTask = bdSingleIdentityBase::getFailedTask(this, &v24);
      p_m_remoteTask = &this->m_remoteTask;
      bdReference<bdRemoteTask>::operator=(&this->m_remoteTask, FailedTask);
      if ( v24.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v24.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v24.m_ptr )
        ((void (__fastcall *)(bdRemoteTask *, __int64))v24.m_ptr->~bdReferencable)(v24.m_ptr, 1i64);
    }
    m_ptr = p_m_remoteTask->m_ptr;
    result->m_ptr = p_m_remoteTask->m_ptr;
    if ( m_ptr )
      _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
    bdJSONSerializer::~bdJSONSerializer(&v29);
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
bdUno::authenticateUmbrellaToken
==============
*/
bdReference<bdRemoteTask> *bdUno::authenticateUmbrellaToken(bdUno *this, bdReference<bdRemoteTask> *result, const bdUmbrellaAccessInfo *umbrellaAccessInfo, bdUnoTokens *unoTokens)
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
    this->m_outputObject = unoTokens;
    bdSingleIdentityBase::clearBuffers(this);
    bdJSONSerializer::bdJSONSerializer(&v27);
    bdJSONSerializer::setBuffer(&v27, this->m_httpRequestBuffer, this->m_requestBufferSize);
    if ( bdJSONSerializer::writeBeginObject(&v27) && bdJSONSerializer::writeString(&v27, "grantType", "umbrella") && bdJSONSerializer::writeString(&v27, "umbrellaToken", umbrellaAccessInfo->m_accessToken) && bdJSONSerializer::writeEndObject(&v27) )
    {
      NewTask = bdSingleIdentityBase::getNewTask(this, &v24);
      p_m_remoteTask = &this->m_remoteTask;
      bdReference<bdRemoteTask>::operator=(&this->m_remoteTask, NewTask);
      if ( v24.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v24.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v24.m_ptr )
        ((void (__fastcall *)(bdRemoteTask *, __int64))v24.m_ptr->~bdReferencable)(v24.m_ptr, 1i64);
      v12 = this->getUrl(this);
      bdSnprintf(buf, 0x400ui64, "%s/tokens/?client=%s", v12, this->m_client);
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
      bdLogMessage(BD_LOG_INFO, "info/", "bdSingleIdentity/bdUno", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdsingleidentity\\bduno.cpp", "bdUno::authenticateUmbrellaToken", 0x15Au, "Started call to bdUno::authenticateUmbrellaToken. TransactionID: (%I64u)", v18);
    }
    else
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdSingleIdentity/bdUno", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdsingleidentity\\bduno.cpp", "bdUno::authenticateUmbrellaToken", 0x15Eu, "Error serializing JSON, request cannot be sent.");
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
bdUno::authenticateUser
==============
*/
bdReference<bdRemoteTask> *bdUno::authenticateUser(bdUno *this, bdReference<bdRemoteTask> *result, bdUnoAccountInfo *accountInfo, const char *fields)
{
  bool v8; 
  char *m_email; 
  const char *v10; 
  const bdReference<bdRemoteTask> *FailedTask; 
  bdReference<bdRemoteTask> *p_m_remoteTask; 
  bdRemoteTask *m_ptr; 
  const bdReference<bdRemoteTask> *NewTask; 
  const char *v15; 
  bdHTTP *m_httpInterface; 
  unsigned int v17; 
  bdHTTP *v18; 
  bool (__fastcall *setHeader)(bdHTTP *, const char *, const unsigned __int64); 
  unsigned __int64 TransactionID; 
  unsigned __int64 v21; 
  const bdReference<bdRemoteTask> *v22; 
  bdRemoteTask *v23; 
  bdReference<bdRemoteTask> v25; 
  bdReference<bdRemoteTask> v26; 
  bdReference<bdRemoteTask> resulta; 
  bdHTTP::bdHTTPHeader headers; 
  __int64 v29; 
  bdJSONSerializer v30; 
  char buf[1024]; 

  v29 = -2i64;
  v25.m_ptr = (bdRemoteTask *)result;
  if ( bdSingleIdentityBase::readyForRequest(this) && bdUno::validateFields(this, fields) )
  {
    this->m_outputObject = accountInfo;
    bdSingleIdentityBase::clearBuffers(this);
    bdJSONSerializer::bdJSONSerializer(&v30);
    bdJSONSerializer::setBuffer(&v30, this->m_httpRequestBuffer, this->m_requestBufferSize);
    v8 = bdJSONSerializer::writeBeginObject(&v30);
    if ( bdStrlen(accountInfo->m_email) )
    {
      if ( !v8 )
        goto LABEL_7;
      m_email = accountInfo->m_email;
      v10 = "email";
    }
    else
    {
      if ( !bdStrlen(accountInfo->m_username) )
      {
        if ( !v8 || !bdJSONSerializer::writeUInt64(&v30, "unoID", accountInfo->m_userID, 0) )
          goto LABEL_7;
        goto LABEL_19;
      }
      if ( !v8 )
        goto LABEL_7;
      m_email = accountInfo->m_username;
      v10 = "userName";
    }
    if ( !bdJSONSerializer::writeString(&v30, v10, m_email) )
      goto LABEL_7;
LABEL_19:
    if ( bdJSONSerializer::writeString(&v30, "password", accountInfo->m_password) && bdJSONSerializer::writeString(&v30, "grantType", "password") && bdJSONSerializer::writeEndObject(&v30) )
    {
      NewTask = bdSingleIdentityBase::getNewTask(this, &v26);
      p_m_remoteTask = &this->m_remoteTask;
      bdReference<bdRemoteTask>::operator=(&this->m_remoteTask, NewTask);
      if ( v26.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v26.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v26.m_ptr )
        ((void (__fastcall *)(bdRemoteTask *, __int64))v26.m_ptr->~bdReferencable)(v26.m_ptr, 1i64);
      v15 = this->getUrl(this);
      bdSnprintf(buf, 0x400ui64, "%s/auth/?client=%s", v15, this->m_client);
      bdSingleIdentityBase::appendQueryString(this, buf, "&fields=%s", fields);
      bdSingleIdentityBase::setBasicHeaders(this, &headers, 1u, NULL, 0);
      ((void (__fastcall *)(bdHTTP *, __int64, char *))this->m_httpInterface->initRequest)(this->m_httpInterface, 3i64, buf);
      m_httpInterface = this->m_httpInterface;
      v17 = bdJSONSerializer::length(&v30);
      bdHTTP::setUploadData(m_httpInterface, this->m_httpRequestBuffer, v17);
      bdHTTP::setDownloadBuffer(this->m_httpInterface, this->m_httpResponseBuffer, this->m_responseBufferSize);
      this->m_httpInterface->setHeader(this->m_httpInterface, "Content-Type", "application/json");
      v18 = this->m_httpInterface;
      setHeader = v18->setHeader;
      TransactionID = bdRemoteTask::getTransactionID(p_m_remoteTask->m_ptr);
      setHeader(v18, "X-TransactionID", TransactionID);
      this->m_httpInterface->setHeader(this->m_httpInterface, headers.key, headers.value);
      this->m_httpInterface->sendRequest(this->m_httpInterface);
      v21 = bdRemoteTask::getTransactionID(p_m_remoteTask->m_ptr);
      bdLogMessage(BD_LOG_INFO, "info/", "bdSingleIdentity/bdUno", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdsingleidentity\\bduno.cpp", "bdUno::authenticateUser", 0xECu, "Started call to bdUno::authenticateUser. TransactionID: (%I64u)", v21);
      goto LABEL_11;
    }
LABEL_7:
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdSingleIdentity/bdUno", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdsingleidentity\\bduno.cpp", "bdUno::authenticateUser", 0xF0u, "Error serializing JSON, request cannot be sent.");
    FailedTask = bdSingleIdentityBase::getFailedTask(this, &resulta);
    p_m_remoteTask = &this->m_remoteTask;
    bdReference<bdRemoteTask>::operator=(&this->m_remoteTask, FailedTask);
    if ( resulta.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
LABEL_11:
    m_ptr = p_m_remoteTask->m_ptr;
    result->m_ptr = p_m_remoteTask->m_ptr;
    if ( m_ptr )
      _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
    bdJSONSerializer::~bdJSONSerializer(&v30);
    return result;
  }
  v22 = bdSingleIdentityBase::getFailedTask(this, &v25);
  bdReference<bdRemoteTask>::operator=(&this->m_remoteTask, v22);
  if ( v25.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v25.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v25.m_ptr )
    ((void (__fastcall *)(bdRemoteTask *, __int64))v25.m_ptr->~bdReferencable)(v25.m_ptr, 1i64);
  v23 = this->m_remoteTask.m_ptr;
  result->m_ptr = v23;
  if ( v23 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v23->m_refCount, 1u);
  return result;
}

/*
==============
bdUno::convertSIErrorCode
==============
*/
__int64 bdUno::convertSIErrorCode(bdUno *this, const unsigned int errorCode)
{
  unsigned int v3; 
  unsigned int v4; 
  unsigned int v5; 

  if ( errorCode > 0x36330 )
  {
    v3 = errorCode - 222100;
    if ( v3 )
    {
      v4 = v3 - 10900;
      if ( v4 )
      {
        v5 = v4 - 100;
        if ( v5 )
        {
          if ( v5 != 7900 )
            return 14100i64;
          return 14109i64;
        }
        else
        {
          return 14108i64;
        }
      }
      else
      {
        return 14107i64;
      }
    }
    else
    {
      return 14105i64;
    }
  }
  else
  {
    if ( errorCode != 222000 )
    {
      if ( errorCode != 200000 )
      {
        switch ( errorCode )
        {
          case 0x34008u:
            return 14101i64;
          case 0x34454u:
            return 14110i64;
          case 0x346ACu:
            return 14102i64;
          case 0x35B60u:
            return 14103i64;
        }
      }
      return 14100i64;
    }
    return 14104i64;
  }
}

/*
==============
bdUno::createAccount
==============
*/
bdReference<bdRemoteTask> *bdUno::createAccount(bdUno *this, bdReference<bdRemoteTask> *result, bdUnoAccountInfo *accountInfo, const bdUnoSubscription *subscriptions, unsigned __int16 numSubscriptions, const bdUnoTermsOfService *termsOfService, const char *locale, const char *fields, const char *source)
{
  bool v13; 
  bool v14; 
  unsigned __int16 i; 
  const bdReference<bdRemoteTask> *FailedTask; 
  bdReference<bdRemoteTask> *p_m_remoteTask; 
  bdRemoteTask *m_ptr; 
  const bdReference<bdRemoteTask> *NewTask; 
  const char *v20; 
  bdHTTP *m_httpInterface; 
  unsigned int v22; 
  bdHTTP *v23; 
  bool (__fastcall *setHeader)(bdHTTP *, const char *, const unsigned __int64); 
  unsigned __int64 TransactionID; 
  unsigned __int64 v26; 
  bdReference<bdRemoteTask> v28; 
  bdReference<bdRemoteTask> resulta; 
  char *v30; 
  char *queryVal; 
  bdHTTP::bdHTTPHeader headers; 
  __int64 v33; 
  bdJSONSerializer json; 
  char buf[1024]; 

  v33 = -2i64;
  queryVal = (char *)locale;
  v30 = (char *)source;
  if ( !bdSingleIdentityBase::readyForRequest(this) || !bdUno::validateFields(this, fields) )
  {
    bdSingleIdentityBase::getFailedTask(this, result);
    return result;
  }
  this->m_outputObject = accountInfo;
  bdSingleIdentityBase::clearBuffers(this);
  bdJSONSerializer::bdJSONSerializer(&json);
  bdJSONSerializer::setBuffer(&json, this->m_httpRequestBuffer, this->m_requestBufferSize);
  v13 = bdJSONSerializer::writeBeginObject(&json) && bdUnoAccountInfo::serializeSecuredFieldsToJSON(accountInfo, &json, 1) && bdUnoAccountInfo::serializeUnsecuredFieldsToJSON(accountInfo, &json, 1);
  if ( numSubscriptions )
  {
    v14 = v13 && bdJSONSerializer::writeBeginObject(&json, "subscriptions");
    for ( i = 0; i < numSubscriptions; ++i )
      v14 = v14 && bdUnoSubscription::serializeToJSON((bdUnoSubscription *)&subscriptions[i], &json, 1);
    v13 = v14 && bdJSONSerializer::writeEndObject(&json);
  }
  if ( termsOfService )
  {
    if ( !v13 || !bdJSONSerializer::writeBeginObject(&json, "termsOfService") || !bdUnoTermsOfService::serializeToJSON((bdUnoTermsOfService *)termsOfService, &json) || !bdJSONSerializer::writeEndObject(&json) )
      goto LABEL_28;
  }
  else if ( !v13 )
  {
    goto LABEL_28;
  }
  if ( bdJSONSerializer::writeEndObject(&json) )
  {
    NewTask = bdSingleIdentityBase::getNewTask(this, &v28);
    p_m_remoteTask = &this->m_remoteTask;
    bdReference<bdRemoteTask>::operator=(&this->m_remoteTask, NewTask);
    if ( v28.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v28.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v28.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))v28.m_ptr->~bdReferencable)(v28.m_ptr, 1i64);
    v20 = this->getUrl(this);
    bdSnprintf(buf, 0x400ui64, "%s/users/?client=%s", v20, this->m_client);
    bdSingleIdentityBase::appendQueryString(this, buf, "&locale=%s", queryVal);
    bdSingleIdentityBase::appendQueryString(this, buf, "&fields=%s", fields);
    bdSingleIdentityBase::appendQueryString(this, buf, "&source=%s", v30);
    bdSingleIdentityBase::setBasicHeaders(this, &headers, 1u, NULL, 0);
    ((void (__fastcall *)(bdHTTP *, __int64, char *))this->m_httpInterface->initRequest)(this->m_httpInterface, 3i64, buf);
    m_httpInterface = this->m_httpInterface;
    v22 = bdJSONSerializer::length(&json);
    bdHTTP::setUploadData(m_httpInterface, this->m_httpRequestBuffer, v22);
    bdHTTP::setDownloadBuffer(this->m_httpInterface, this->m_httpResponseBuffer, this->m_responseBufferSize);
    this->m_httpInterface->setHeader(this->m_httpInterface, "Content-Type", "application/json");
    v23 = this->m_httpInterface;
    setHeader = v23->setHeader;
    TransactionID = bdRemoteTask::getTransactionID(p_m_remoteTask->m_ptr);
    setHeader(v23, "X-TransactionID", TransactionID);
    this->m_httpInterface->setHeader(this->m_httpInterface, headers.key, headers.value);
    this->m_httpInterface->sendRequest(this->m_httpInterface);
    v26 = bdRemoteTask::getTransactionID(p_m_remoteTask->m_ptr);
    bdLogMessage(BD_LOG_INFO, "info/", "bdSingleIdentity/bdUno", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdsingleidentity\\bduno.cpp", "bdUno::createAccount", 0xA7u, "Started call to bdUno::createAccount. TransactionID: (%I64u)", v26);
    goto LABEL_32;
  }
LABEL_28:
  bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdSingleIdentity/bdUno", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdsingleidentity\\bduno.cpp", "bdUno::createAccount", 0xABu, "Error serializing JSON, request cannot be sent.");
  FailedTask = bdSingleIdentityBase::getFailedTask(this, &resulta);
  p_m_remoteTask = &this->m_remoteTask;
  bdReference<bdRemoteTask>::operator=(&this->m_remoteTask, FailedTask);
  if ( resulta.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
    ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
LABEL_32:
  m_ptr = p_m_remoteTask->m_ptr;
  result->m_ptr = p_m_remoteTask->m_ptr;
  if ( m_ptr )
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
  bdJSONSerializer::~bdJSONSerializer(&json);
  return result;
}

/*
==============
bdUno::createPreRegistration
==============
*/
bdReference<bdRemoteTask> *bdUno::createPreRegistration(bdUno *this, bdReference<bdRemoteTask> *result, const bdUmbrellaAccessInfo *umbrellaAccessInfo, const bdUmbrellaProviderAccount *umbrellaProviderAccount, const char *email, const char *country, const char *dateOfBirth, const char *locale)
{
  const bdReference<bdRemoteTask> *FailedTask; 
  bdRemoteTask *m_ptr; 
  bool v14; 
  const bdReference<bdRemoteTask> *v15; 
  bdReference<bdRemoteTask> *p_m_remoteTask; 
  bdRemoteTask *v17; 
  const bdReference<bdRemoteTask> *NewTask; 
  const char *v20; 
  bdHTTP *m_httpInterface; 
  unsigned int v22; 
  bdHTTP *v23; 
  bool (__fastcall *setHeader)(bdHTTP *, const char *, const unsigned __int64); 
  unsigned __int64 TransactionID; 
  unsigned __int64 v26; 
  char *value; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> v29; 
  bdHTTP::bdHTTPHeader headers; 
  __int64 v31; 
  bdJSONSerializer v32; 
  char buf[1024]; 

  v31 = -2i64;
  value = (char *)email;
  if ( !bdSingleIdentityBase::readyForRequest(this) )
  {
    FailedTask = bdSingleIdentityBase::getFailedTask(this, &resulta);
    bdReference<bdRemoteTask>::operator=(&this->m_remoteTask, FailedTask);
    if ( resulta.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
    m_ptr = this->m_remoteTask.m_ptr;
    result->m_ptr = m_ptr;
    if ( m_ptr )
      _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
    return result;
  }
  bdSingleIdentityBase::clearBuffers(this);
  bdJSONSerializer::bdJSONSerializer(&v32);
  bdJSONSerializer::setBuffer(&v32, this->m_httpRequestBuffer, this->m_requestBufferSize);
  v14 = bdJSONSerializer::writeBeginObject(&v32) && bdJSONSerializer::writeString(&v32, "umbrellaToken", umbrellaAccessInfo->m_accessToken) && bdJSONSerializer::writeString(&v32, "provider", umbrellaProviderAccount->m_provider) && bdJSONSerializer::writeString(&v32, "userName", umbrellaProviderAccount->m_username) && bdJSONSerializer::writeString(&v32, "email", value);
  if ( country )
    v14 = v14 && bdJSONSerializer::writeString(&v32, "country", country);
  if ( dateOfBirth )
  {
    if ( !v14 || !bdJSONSerializer::writeString(&v32, "dateOfBirth", dateOfBirth) )
      goto LABEL_23;
  }
  else if ( !v14 )
  {
    goto LABEL_23;
  }
  if ( bdJSONSerializer::writeEndObject(&v32) )
  {
    NewTask = bdSingleIdentityBase::getNewTask(this, &v29);
    p_m_remoteTask = &this->m_remoteTask;
    bdReference<bdRemoteTask>::operator=(&this->m_remoteTask, NewTask);
    if ( v29.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v29.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v29.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))v29.m_ptr->~bdReferencable)(v29.m_ptr, 1i64);
    v20 = this->getUrl(this);
    bdSnprintf(buf, 0x400ui64, "%s/preregistration/?client=%s", v20, this->m_client);
    if ( locale )
      bdSingleIdentityBase::appendQueryString(this, buf, "&locale=%s", locale);
    bdSingleIdentityBase::setBasicHeaders(this, &headers, 1u, NULL, 0);
    ((void (__fastcall *)(bdHTTP *, __int64, char *))this->m_httpInterface->initRequest)(this->m_httpInterface, 3i64, buf);
    m_httpInterface = this->m_httpInterface;
    v22 = bdJSONSerializer::length(&v32);
    bdHTTP::setUploadData(m_httpInterface, this->m_httpRequestBuffer, v22);
    bdHTTP::setDownloadBuffer(this->m_httpInterface, this->m_httpResponseBuffer, this->m_responseBufferSize);
    this->m_httpInterface->setHeader(this->m_httpInterface, "Content-Type", "application/json");
    v23 = this->m_httpInterface;
    setHeader = v23->setHeader;
    TransactionID = bdRemoteTask::getTransactionID(p_m_remoteTask->m_ptr);
    setHeader(v23, "X-TransactionID", TransactionID);
    this->m_httpInterface->setHeader(this->m_httpInterface, headers.key, headers.value);
    this->m_httpInterface->sendRequest(this->m_httpInterface);
    v26 = bdRemoteTask::getTransactionID(p_m_remoteTask->m_ptr);
    bdLogMessage(BD_LOG_INFO, "info/", "bdSingleIdentity/bdUno", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdsingleidentity\\bduno.cpp", "bdUno::createPreRegistration", 0x4BBu, "Started call to bdUno::createPreRegistration. TransactionID: (%I64u)", v26);
    goto LABEL_27;
  }
LABEL_23:
  bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdSingleIdentity/bdUno", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdsingleidentity\\bduno.cpp", "bdUno::createPreRegistration", 0x4BFu, "Error serializing JSON, request cannot be sent.");
  v15 = bdSingleIdentityBase::getFailedTask(this, (bdReference<bdRemoteTask> *)&value);
  p_m_remoteTask = &this->m_remoteTask;
  bdReference<bdRemoteTask>::operator=(&this->m_remoteTask, v15);
  if ( value && _InterlockedExchangeAdd((volatile signed __int32 *)value + 2, 0xFFFFFFFF) == 1 && value )
    (**(void (__fastcall ***)(char *, __int64))value)(value, 1i64);
LABEL_27:
  v17 = p_m_remoteTask->m_ptr;
  result->m_ptr = p_m_remoteTask->m_ptr;
  if ( v17 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v17->m_refCount, 1u);
  bdJSONSerializer::~bdJSONSerializer(&v32);
  return result;
}

/*
==============
bdUno::createPreRegistrationCode
==============
*/
bdReference<bdRemoteTask> *bdUno::createPreRegistrationCode(bdUno *this, bdReference<bdRemoteTask> *result, bdUnoPreRegistrationCode *unoPreRegistrationCode, const bdUmbrellaAccessInfo *umbrellaAccessInfo, const bdUmbrellaProviderAccount *umbrellaProviderAccount, const char *email, const char *country, const char *dateOfBirth, const char *locale)
{
  const bdReference<bdRemoteTask> *FailedTask; 
  bdRemoteTask *m_ptr; 
  bool v13; 
  const bdReference<bdRemoteTask> *v14; 
  bdReference<bdRemoteTask> *p_m_remoteTask; 
  bdRemoteTask *v16; 
  const bdReference<bdRemoteTask> *NewTask; 
  const char *v19; 
  bdHTTP *m_httpInterface; 
  unsigned int v21; 
  bdHTTP *v22; 
  bool (__fastcall *setHeader)(bdHTTP *, const char *, const unsigned __int64); 
  unsigned __int64 TransactionID; 
  unsigned __int64 v25; 
  bdReference<bdRemoteTask> v26; 
  bdReference<bdRemoteTask> v27; 
  bdReference<bdRemoteTask> resulta; 
  bdHTTP::bdHTTPHeader headers; 
  __int64 v30; 
  bdJSONSerializer v31; 
  char buf[1024]; 

  v30 = -2i64;
  v26.m_ptr = (bdRemoteTask *)umbrellaAccessInfo;
  v27.m_ptr = (bdRemoteTask *)unoPreRegistrationCode;
  resulta.m_ptr = (bdRemoteTask *)result;
  if ( !bdSingleIdentityBase::readyForRequest(this) )
  {
    FailedTask = bdSingleIdentityBase::getFailedTask(this, &resulta);
    bdReference<bdRemoteTask>::operator=(&this->m_remoteTask, FailedTask);
    if ( resulta.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
    m_ptr = this->m_remoteTask.m_ptr;
    result->m_ptr = m_ptr;
    if ( m_ptr )
      _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
    return result;
  }
  this->m_outputObject = (bdSingleIdentityJSONDeserializable *)v27.m_ptr;
  bdSingleIdentityBase::clearBuffers(this);
  bdJSONSerializer::bdJSONSerializer(&v31);
  bdJSONSerializer::setBuffer(&v31, this->m_httpRequestBuffer, this->m_requestBufferSize);
  v13 = bdJSONSerializer::writeBeginObject(&v31) && bdJSONSerializer::writeString(&v31, "umbrellaToken", (const char *)&v26.m_ptr->m_timer) && bdJSONSerializer::writeString(&v31, "provider", umbrellaProviderAccount->m_provider) && bdJSONSerializer::writeString(&v31, "userName", umbrellaProviderAccount->m_username);
  if ( email )
    v13 = v13 && bdJSONSerializer::writeString(&v31, "email", email);
  if ( country )
    v13 = v13 && bdJSONSerializer::writeString(&v31, "country", country);
  if ( dateOfBirth )
  {
    if ( !v13 || !bdJSONSerializer::writeString(&v31, "dateOfBirth", dateOfBirth) )
      goto LABEL_27;
  }
  else if ( !v13 )
  {
    goto LABEL_27;
  }
  if ( bdJSONSerializer::writeEndObject(&v31) )
  {
    NewTask = bdSingleIdentityBase::getNewTask(this, &v26);
    p_m_remoteTask = &this->m_remoteTask;
    bdReference<bdRemoteTask>::operator=(&this->m_remoteTask, NewTask);
    if ( v26.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v26.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v26.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))v26.m_ptr->~bdReferencable)(v26.m_ptr, 1i64);
    v19 = this->getUrl(this);
    bdSnprintf(buf, 0x400ui64, "%s/preregistrationcodes/?client=%s", v19, this->m_client);
    if ( locale )
      bdSingleIdentityBase::appendQueryString(this, buf, "&locale=%s", locale);
    bdSingleIdentityBase::setBasicHeaders(this, &headers, 1u, NULL, 0);
    ((void (__fastcall *)(bdHTTP *, __int64, char *))this->m_httpInterface->initRequest)(this->m_httpInterface, 3i64, buf);
    m_httpInterface = this->m_httpInterface;
    v21 = bdJSONSerializer::length(&v31);
    bdHTTP::setUploadData(m_httpInterface, this->m_httpRequestBuffer, v21);
    bdHTTP::setDownloadBuffer(this->m_httpInterface, this->m_httpResponseBuffer, this->m_responseBufferSize);
    this->m_httpInterface->setHeader(this->m_httpInterface, "Content-Type", "application/json");
    v22 = this->m_httpInterface;
    setHeader = v22->setHeader;
    TransactionID = bdRemoteTask::getTransactionID(p_m_remoteTask->m_ptr);
    setHeader(v22, "X-TransactionID", TransactionID);
    this->m_httpInterface->setHeader(this->m_httpInterface, headers.key, headers.value);
    this->m_httpInterface->sendRequest(this->m_httpInterface);
    v25 = bdRemoteTask::getTransactionID(p_m_remoteTask->m_ptr);
    bdLogMessage(BD_LOG_INFO, "info/", "bdSingleIdentity/bdUno", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdsingleidentity\\bduno.cpp", "bdUno::createPreRegistrationCode", 0x509u, "Started call to bdUno::createPreRegistrationCode. TransactionID: (%I64u)", v25);
    goto LABEL_31;
  }
LABEL_27:
  bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdSingleIdentity/bdUno", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdsingleidentity\\bduno.cpp", "bdUno::createPreRegistrationCode", 0x50Du, "Error serializing JSON, request cannot be sent.");
  v14 = bdSingleIdentityBase::getFailedTask(this, &v27);
  p_m_remoteTask = &this->m_remoteTask;
  bdReference<bdRemoteTask>::operator=(&this->m_remoteTask, v14);
  if ( v27.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v27.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v27.m_ptr )
    ((void (__fastcall *)(bdRemoteTask *, __int64))v27.m_ptr->~bdReferencable)(v27.m_ptr, 1i64);
LABEL_31:
  v16 = p_m_remoteTask->m_ptr;
  result->m_ptr = p_m_remoteTask->m_ptr;
  if ( v16 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v16->m_refCount, 1u);
  bdJSONSerializer::~bdJSONSerializer(&v31);
  return result;
}

/*
==============
bdUno::deleteUser
==============
*/
bdReference<bdRemoteTask> *bdUno::deleteUser(bdUno *this, bdReference<bdRemoteTask> *result, unsigned __int64 accountID, const char *accessToken)
{
  const bdReference<bdRemoteTask> *FailedTask; 
  const bdReference<bdRemoteTask> *NewTask; 
  const char *v10; 
  __int64 v11; 
  bdHTTP *m_httpInterface; 
  bool (__fastcall *setHeader)(bdHTTP *, const char *, const unsigned __int64); 
  unsigned __int64 TransactionID; 
  bdHTTP::bdHTTPHeader *p_headers; 
  unsigned __int64 v16; 
  bdRemoteTask *m_ptr; 
  bdReference<bdRemoteTask> v19; 
  bdReference<bdRemoteTask> resulta; 
  bdHTTP::bdHTTPHeader headers; 
  char buf[1024]; 
  char authorizationHeader[4144]; 

  v19.m_ptr = (bdRemoteTask *)result;
  if ( bdSingleIdentityBase::readyForRequest(this) )
  {
    bdSingleIdentityBase::clearBuffers(this);
    NewTask = bdSingleIdentityBase::getNewTask(this, &v19);
    bdReference<bdRemoteTask>::operator=(&this->m_remoteTask, NewTask);
    if ( v19.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v19.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v19.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))v19.m_ptr->~bdReferencable)(v19.m_ptr, 1i64);
    v10 = this->getUrl(this);
    bdSnprintf(buf, 0x400ui64, "%s/users/%I64u/?client=%s", v10, accountID, this->m_client);
    bdSnprintf(authorizationHeader, 0x1030ui64, "Bearer %s", accessToken);
    v11 = 2i64;
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
      --v11;
    }
    while ( v11 );
    this->m_httpInterface->sendRequest(this->m_httpInterface);
    v16 = bdRemoteTask::getTransactionID(this->m_remoteTask.m_ptr);
    bdLogMessage(BD_LOG_INFO, "info/", "bdSingleIdentity/bdUno", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdsingleidentity\\bduno.cpp", "bdUno::deleteUser", 0x2E1u, "Started call to bdUno::deleteUser. TransactionID: (%I64u)", v16);
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
bdUno::getAuthServerToken
==============
*/
bdReference<bdRemoteTask> *bdUno::getAuthServerToken(bdUno *this, bdReference<bdRemoteTask> *result, bdUnoAccountInfo *accountInfo)
{
  const bdReference<bdRemoteTask> *v6; 
  bdRemoteTask *v7; 
  const bdReference<bdRemoteTask> *NewTask; 
  bdReference<bdRemoteTask> *p_m_remoteTask; 
  const char *v10; 
  bdHTTP *m_httpInterface; 
  unsigned int v12; 
  bdHTTP *v13; 
  bool (__fastcall *setHeader)(bdHTTP *, const char *, const unsigned __int64); 
  unsigned __int64 TransactionID; 
  unsigned __int64 v16; 
  const bdReference<bdRemoteTask> *FailedTask; 
  bdRemoteTask *m_ptr; 
  bdReference<bdRemoteTask> v20; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> v22; 
  bdHTTP::bdHTTPHeader headers; 
  __int64 v24; 
  bdJSONSerializer v25; 
  char buf[1024]; 

  v24 = -2i64;
  v20.m_ptr = (bdRemoteTask *)result;
  if ( bdSingleIdentityBase::readyForRequest(this) )
  {
    this->m_outputObject = accountInfo;
    bdSingleIdentityBase::clearBuffers(this);
    bdJSONSerializer::bdJSONSerializer(&v25);
    bdJSONSerializer::setBuffer(&v25, this->m_httpRequestBuffer, this->m_requestBufferSize);
    if ( bdJSONSerializer::writeBeginObject(&v25) && bdJSONSerializer::writeUInt64(&v25, "unoID", accountInfo->m_userID, 0) && bdJSONSerializer::writeString(&v25, "password", accountInfo->m_password) && bdJSONSerializer::writeEndObject(&v25) )
    {
      NewTask = bdSingleIdentityBase::getNewTask(this, &v22);
      p_m_remoteTask = &this->m_remoteTask;
      bdReference<bdRemoteTask>::operator=(&this->m_remoteTask, NewTask);
      if ( v22.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v22.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v22.m_ptr )
        ((void (__fastcall *)(bdRemoteTask *, __int64))v22.m_ptr->~bdReferencable)(v22.m_ptr, 1i64);
      v10 = this->getUrl(this);
      bdSnprintf(buf, 0x400ui64, "%s/login/?client=%s", v10, this->m_client);
      bdSingleIdentityBase::setBasicHeaders(this, &headers, 1u, NULL, 0);
      ((void (__fastcall *)(bdHTTP *, __int64, char *))this->m_httpInterface->initRequest)(this->m_httpInterface, 3i64, buf);
      m_httpInterface = this->m_httpInterface;
      v12 = bdJSONSerializer::length(&v25);
      bdHTTP::setUploadData(m_httpInterface, this->m_httpRequestBuffer, v12);
      bdHTTP::setDownloadBuffer(this->m_httpInterface, this->m_httpResponseBuffer, this->m_responseBufferSize);
      this->m_httpInterface->setHeader(this->m_httpInterface, "Content-Type", "application/json");
      v13 = this->m_httpInterface;
      setHeader = v13->setHeader;
      TransactionID = bdRemoteTask::getTransactionID(p_m_remoteTask->m_ptr);
      setHeader(v13, "X-TransactionID", TransactionID);
      this->m_httpInterface->setHeader(this->m_httpInterface, headers.key, headers.value);
      this->m_httpInterface->sendRequest(this->m_httpInterface);
      v16 = bdRemoteTask::getTransactionID(p_m_remoteTask->m_ptr);
      bdLogMessage(BD_LOG_INFO, "info/", "bdSingleIdentity/bdUno", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdsingleidentity\\bduno.cpp", "bdUno::getAuthServerToken", 0x124u, "Started call to bdUno::getAuthServerToken. TransactionID: (%I64u)", v16);
    }
    else
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdSingleIdentity/bdUno", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdsingleidentity\\bduno.cpp", "bdUno::getAuthServerToken", 0x128u, "Error serializing JSON, request cannot be sent.");
      FailedTask = bdSingleIdentityBase::getFailedTask(this, &v20);
      p_m_remoteTask = &this->m_remoteTask;
      bdReference<bdRemoteTask>::operator=(&this->m_remoteTask, FailedTask);
      if ( v20.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v20.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v20.m_ptr )
        ((void (__fastcall *)(bdRemoteTask *, __int64))v20.m_ptr->~bdReferencable)(v20.m_ptr, 1i64);
    }
    m_ptr = p_m_remoteTask->m_ptr;
    result->m_ptr = p_m_remoteTask->m_ptr;
    if ( m_ptr )
      _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
    bdJSONSerializer::~bdJSONSerializer(&v25);
  }
  else
  {
    v6 = bdSingleIdentityBase::getFailedTask(this, &resulta);
    bdReference<bdRemoteTask>::operator=(&this->m_remoteTask, v6);
    if ( resulta.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
    v7 = this->m_remoteTask.m_ptr;
    result->m_ptr = v7;
    if ( v7 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v7->m_refCount, 1u);
  }
  return result;
}

/*
==============
bdUno::getBaseUrl
==============
*/
const char *bdUno::getBaseUrl(bdUno *this)
{
  bdEnvironment m_environment; 

  m_environment = this->m_environment;
  if ( this->m_region[0] != aCn[0] || this->m_region[1] != aCn[1] || this->m_region[2] != aCn[2] )
  {
    if ( m_environment )
    {
      if ( m_environment == BD_ENVIRONMENT_CERT )
        return "cert.uno.demonware.net";
      if ( m_environment == BD_ENVIRONMENT_PROD )
        return "prod.uno.demonware.net";
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdSingleIdentity/bdUno", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdsingleidentity\\bduno.cpp", "bdUno::getBaseUrl", 0x45Bu, "Unknown environment (%u): Defaulting to base DEV Uno URL", this->m_environment);
    }
    return "dev.uno.demonware.net";
  }
  if ( m_environment == BD_ENVIRONMENT_DEV )
    return "uno.dev.cod.qq.com";
  if ( m_environment == BD_ENVIRONMENT_CERT )
    return "uno.cert.cod.qq.com";
  if ( m_environment != BD_ENVIRONMENT_PROD )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdSingleIdentity/bdUno", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdsingleidentity\\bduno.cpp", "bdUno::getBaseUrl", 0x441u, "Unknown environment (%u): Defaulting to base DEV Uno URL", this->m_environment);
    return "uno.dev.cod.qq.com";
  }
  return "uno.prod.cod.qq.com";
}

/*
==============
bdUno::getTermsOfServiceContent
==============
*/
bdReference<bdRemoteTask> *bdUno::getTermsOfServiceContent(bdUno *this, bdReference<bdRemoteTask> *result, bdUnoTermsOfService *termsOfService, const char *locale)
{
  const bdReference<bdRemoteTask> *FailedTask; 
  const bdReference<bdRemoteTask> *NewTask; 
  const char *v10; 
  const char *v11; 
  bdHTTP *m_httpInterface; 
  bool (__fastcall *setHeader)(bdHTTP *, const char *, const unsigned __int64); 
  unsigned __int64 TransactionID; 
  unsigned __int64 v15; 
  bdRemoteTask *m_ptr; 
  bdReference<bdRemoteTask> v18; 
  bdReference<bdRemoteTask> resulta; 
  bdHTTP::bdHTTPHeader headers; 
  char buf[1024]; 

  v18.m_ptr = (bdRemoteTask *)result;
  if ( bdSingleIdentityBase::readyForRequest(this) )
  {
    this->m_outputObject = termsOfService;
    bdSingleIdentityBase::clearBuffers(this);
    NewTask = bdSingleIdentityBase::getNewTask(this, &v18);
    bdReference<bdRemoteTask>::operator=(&this->m_remoteTask, NewTask);
    if ( v18.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v18.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v18.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))v18.m_ptr->~bdReferencable)(v18.m_ptr, 1i64);
    v10 = bdUnoTermsOfService::bdUnoTermsOfServiceTypeStrings[termsOfService->m_type];
    v11 = this->getUrl(this);
    bdSnprintf(buf, 0x400ui64, "%s/termsofservice/%s/?client=%s&type=%s", v11, this->m_client, this->m_client, v10);
    bdSingleIdentityBase::appendQueryString(this, buf, "&locale=%s", locale);
    bdSingleIdentityBase::setBasicHeaders(this, &headers, 1u, NULL, 0);
    this->m_httpInterface->initRequest(this->m_httpInterface, BD_GET, buf, 0);
    bdHTTP::setDownloadBuffer(this->m_httpInterface, this->m_httpResponseBuffer, this->m_responseBufferSize);
    m_httpInterface = this->m_httpInterface;
    setHeader = m_httpInterface->setHeader;
    TransactionID = bdRemoteTask::getTransactionID(this->m_remoteTask.m_ptr);
    setHeader(m_httpInterface, "X-TransactionID", TransactionID);
    this->m_httpInterface->setHeader(this->m_httpInterface, headers.key, headers.value);
    this->m_httpInterface->sendRequest(this->m_httpInterface);
    v15 = bdRemoteTask::getTransactionID(this->m_remoteTask.m_ptr);
    bdLogMessage(BD_LOG_INFO, "info/", "bdSingleIdentity/bdUno", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdsingleidentity\\bduno.cpp", "bdUno::getTermsOfServiceContent", 0x354u, "Started call to bdUno::getTermsOfServiceContent. TransactionID: (%I64u)", v15);
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
bdUno::getTermsOfServiceData
==============
*/
bdReference<bdRemoteTask> *bdUno::getTermsOfServiceData(bdUno *this, bdReference<bdRemoteTask> *result, bdUnoTermsOfService *termsOfService)
{
  const bdReference<bdRemoteTask> *FailedTask; 
  const bdReference<bdRemoteTask> *NewTask; 
  const char *v8; 
  bdHTTP *m_httpInterface; 
  bool (__fastcall *setHeader)(bdHTTP *, const char *, const unsigned __int64); 
  unsigned __int64 TransactionID; 
  unsigned __int64 v12; 
  bdRemoteTask *m_ptr; 
  bdReference<bdRemoteTask> v15; 
  bdReference<bdRemoteTask> resulta; 
  bdHTTP::bdHTTPHeader headers; 
  char buf[1024]; 

  v15.m_ptr = (bdRemoteTask *)result;
  if ( bdSingleIdentityBase::readyForRequest(this) )
  {
    this->m_outputObject = termsOfService;
    bdSingleIdentityBase::clearBuffers(this);
    NewTask = bdSingleIdentityBase::getNewTask(this, &v15);
    bdReference<bdRemoteTask>::operator=(&this->m_remoteTask, NewTask);
    if ( v15.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v15.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v15.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))v15.m_ptr->~bdReferencable)(v15.m_ptr, 1i64);
    v8 = this->getUrl(this);
    bdSnprintf(buf, 0x400ui64, "%s/termsofservice/?client=%s", v8, termsOfService->m_client);
    bdSingleIdentityBase::setBasicHeaders(this, &headers, 1u, NULL, 0);
    this->m_httpInterface->initRequest(this->m_httpInterface, BD_GET, buf, 0);
    bdHTTP::setDownloadBuffer(this->m_httpInterface, this->m_httpResponseBuffer, this->m_responseBufferSize);
    m_httpInterface = this->m_httpInterface;
    setHeader = m_httpInterface->setHeader;
    TransactionID = bdRemoteTask::getTransactionID(this->m_remoteTask.m_ptr);
    setHeader(m_httpInterface, "X-TransactionID", TransactionID);
    this->m_httpInterface->setHeader(this->m_httpInterface, headers.key, headers.value);
    this->m_httpInterface->sendRequest(this->m_httpInterface);
    v12 = bdRemoteTask::getTransactionID(this->m_remoteTask.m_ptr);
    bdLogMessage(BD_LOG_INFO, "info/", "bdSingleIdentity/bdUno", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdsingleidentity\\bduno.cpp", "bdUno::getTermsOfServiceData", 0x305u, "Started call to bdUno::getTermsOfServiceData. TransactionID: (%I64u)", v12);
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
bdUno::getUrl
==============
*/
const char *bdUno::getUrl(bdUno *this)
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
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdSingleIdentity/bdUno", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdsingleidentity\\bduno.cpp", "bdUno::getUrl", 0x41Fu, "Unknown environment (%u): Defaulting to DEV Uno URL", this->m_environment);
    }
    return "https:
  }
  if ( m_environment == BD_ENVIRONMENT_DEV )
    return "https:
  if ( m_environment == BD_ENVIRONMENT_CERT )
    return "https:
  if ( m_environment != BD_ENVIRONMENT_PROD )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdSingleIdentity/bdUno", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdsingleidentity\\bduno.cpp", "bdUno::getUrl", 0x405u, "Unknown environment (%u): Defaulting to DEV Uno URL", this->m_environment);
    return "https:
  }
  return "https:
}

/*
==============
bdUno::getUserAcceptedTermsOfService
==============
*/
bdReference<bdRemoteTask> *bdUno::getUserAcceptedTermsOfService(bdUno *this, bdReference<bdRemoteTask> *result, unsigned __int64 accountID, bdUnoTermsOfService *termsOfService, const char *accessToken)
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
    this->m_outputObject = termsOfService;
    bdSingleIdentityBase::clearBuffers(this);
    NewTask = bdSingleIdentityBase::getNewTask(this, &v20);
    bdReference<bdRemoteTask>::operator=(&this->m_remoteTask, NewTask);
    if ( v20.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v20.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v20.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))v20.m_ptr->~bdReferencable)(v20.m_ptr, 1i64);
    v11 = this->getUrl(this);
    bdSnprintf(buf, 0x400ui64, "%s/users/%I64u/termsofservice/%s/?client=%s", v11, accountID, this->m_client, this->m_client);
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
    bdLogMessage(BD_LOG_INFO, "info/", "bdSingleIdentity/bdUno", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdsingleidentity\\bduno.cpp", "bdUno::getUserAcceptedTermsOfService", 0x32Eu, "Started call to bdUno::getUserAcceptedTermsOfService. TransactionID: (%I64u)", v17);
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
bdUno::handleLookupComplete
==============
*/
void bdUno::handleLookupComplete(bdUno *this)
{
  const bdSockAddr *v2; 
  bdGetHostByName *m_lookup; 
  bdSockAddr result; 
  bdSockAddr v5; 
  char str[8]; 
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 
  int v11; 
  char v12; 

  this->m_remoteTask.m_ptr->m_status = BD_DONE;
  bdGetHostByName::getAddressAt(this->m_lookup, &result, 0);
  v2 = bdSockAddr::Loopback(&v5, 2u, 0);
  *this->m_isRegistrationAvailable = !bdSockAddr::compare(&result, v2, 0);
  *(_QWORD *)str = 0i64;
  v7 = 0i64;
  v8 = 0i64;
  v9 = 0i64;
  v10 = 0i64;
  v11 = 0;
  v12 = 0;
  bdSockAddr::toString(&result, str, 0x2Dui64);
  bdLogMessage(BD_LOG_INFO, "info/", "bdSingleIdentity/bdUno", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdsingleidentity\\bduno.cpp", "bdUno::handleLookupComplete", 0x53u, "Uno address resolved to '%s'", str);
  m_lookup = this->m_lookup;
  this->m_isRegistrationAvailable = NULL;
  bdGetHostByName::quit(m_lookup);
}

/*
==============
bdUno::handleLookupFailure
==============
*/
void bdUno::handleLookupFailure(bdUno *this)
{
  this->m_remoteTask.m_ptr->m_status = BD_FAILED;
  this->m_remoteTask.m_ptr->m_errorCode = BD_UNO_DNS_RESOLUTION_FAILED;
  this->m_isRegistrationAvailable = NULL;
  bdGetHostByName::quit(this->m_lookup);
}

/*
==============
bdUno::isRegistrationAvailable
==============
*/
bdReference<bdRemoteTask> *bdUno::isRegistrationAvailable(bdUno *this, bdReference<bdRemoteTask> *result, bool *isAvailable)
{
  const bdReference<bdRemoteTask> *FailedTask; 
  bdEnvironment m_environment; 
  const char *v8; 
  bdGetHostByName *m_lookup; 
  bdGetHostByNameConfig *v10; 
  const bdReference<bdRemoteTask> *NewTask; 
  const bdReference<bdRemoteTask> *v12; 
  bdRemoteTask *m_ptr; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> v16; 
  bdReference<bdRemoteTask> v17; 
  bdGetHostByNameConfig v18; 

  if ( !bdSingleIdentityBase::readyForRequest(this) )
  {
    FailedTask = bdSingleIdentityBase::getFailedTask(this, &resulta);
    bdReference<bdRemoteTask>::operator=(&this->m_remoteTask, FailedTask);
    if ( resulta.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
    goto LABEL_33;
  }
  m_environment = this->m_environment;
  this->m_isRegistrationAvailable = isAvailable;
  if ( this->m_region[0] != aCn[0] || this->m_region[1] != aCn[1] || this->m_region[2] != aCn[2] )
  {
    if ( m_environment )
    {
      if ( m_environment == BD_ENVIRONMENT_CERT )
      {
        v8 = "cert.uno.demonware.net";
        goto LABEL_21;
      }
      if ( m_environment == BD_ENVIRONMENT_PROD )
      {
        v8 = "prod.uno.demonware.net";
        goto LABEL_21;
      }
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdSingleIdentity/bdUno", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdsingleidentity\\bduno.cpp", "bdUno::getBaseUrl", 0x45Bu, "Unknown environment (%u): Defaulting to base DEV Uno URL", m_environment);
    }
    v8 = "dev.uno.demonware.net";
    goto LABEL_21;
  }
  switch ( m_environment )
  {
    case BD_ENVIRONMENT_DEV:
LABEL_13:
      v8 = "uno.dev.cod.qq.com";
      break;
    case BD_ENVIRONMENT_CERT:
      v8 = "uno.cert.cod.qq.com";
      break;
    case BD_ENVIRONMENT_PROD:
      v8 = "uno.prod.cod.qq.com";
      break;
    default:
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdSingleIdentity/bdUno", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdsingleidentity\\bduno.cpp", "bdUno::getBaseUrl", 0x441u, "Unknown environment (%u): Defaulting to base DEV Uno URL", m_environment);
      goto LABEL_13;
  }
LABEL_21:
  bdGetHostByName::quit(this->m_lookup);
  m_lookup = this->m_lookup;
  bdGetHostByNameConfig::bdGetHostByNameConfig(&v18);
  if ( bdGetHostByName::start(m_lookup, v8, LODWORD(v10->m_timeout)) )
  {
    NewTask = bdSingleIdentityBase::getNewTask(this, &v16);
    bdReference<bdRemoteTask>::operator=(&this->m_remoteTask, NewTask);
    if ( v16.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v16.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v16.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))v16.m_ptr->~bdReferencable)(v16.m_ptr, 1i64);
    bdLogMessage(BD_LOG_INFO, "info/", "bdSingleIdentity/bdUno", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdsingleidentity\\bduno.cpp", "bdUno::isRegistrationAvailable", 0x3A1u, "Started DNS lookup for '%s' to check for registration availability.", v8);
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdSingleIdentity/bdUno", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdsingleidentity\\bduno.cpp", "bdUno::isRegistrationAvailable", 0x3A5u, "Error starting DNS lookup for '%s'", v8);
    v12 = bdSingleIdentityBase::getFailedTask(this, &v17);
    bdReference<bdRemoteTask>::operator=(&this->m_remoteTask, v12);
    if ( v17.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v17.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v17.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))v17.m_ptr->~bdReferencable)(v17.m_ptr, 1i64);
  }
LABEL_33:
  m_ptr = this->m_remoteTask.m_ptr;
  result->m_ptr = m_ptr;
  if ( m_ptr )
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
  return result;
}

/*
==============
bdUno::isSubscribedToEmailMarketing
==============
*/
bdReference<bdRemoteTask> *bdUno::isSubscribedToEmailMarketing(bdUno *this, bdReference<bdRemoteTask> *result, unsigned __int64 accountID, const char *accessToken, bdUnoSubscriptionsEnabled *subscriptionsEnabled)
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
    this->m_outputObject = subscriptionsEnabled;
    bdSingleIdentityBase::clearBuffers(this);
    NewTask = bdSingleIdentityBase::getNewTask(this, &v20);
    bdReference<bdRemoteTask>::operator=(&this->m_remoteTask, NewTask);
    if ( v20.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v20.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v20.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))v20.m_ptr->~bdReferencable)(v20.m_ptr, 1i64);
    memset_0(buf, 0, sizeof(buf));
    v11 = this->getUrl(this);
    bdSnprintf(buf, 0x400ui64, "%s/users/%I64u/subscriptions/?client=%s", v11, accountID, this->m_client);
    memset_0(authorizationHeader, 0, sizeof(authorizationHeader));
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
    bdLogMessage(BD_LOG_INFO, "info/", "bdSingleIdentity/bdUno", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdsingleidentity\\bduno.cpp", "bdUno::isSubscribedToEmailMarketing", 0x23Eu, "Started call to bdUno::isSubscribedToEmailMarketing. TransactionID: (%I64u)", v17);
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
bdUno::pump
==============
*/
void bdUno::pump(bdUno *this)
{
  if ( bdGetHostByName::getStatus(this->m_lookup) )
    bdUno::pumpLookup(this);
  else
    bdSingleIdentityBase::pump(this);
}

/*
==============
bdUno::pumpLookup
==============
*/
void bdUno::pumpLookup(bdUno *this)
{
  bdGetHostByName::bdStatus Status; 
  const bdSockAddr *v3; 
  bdGetHostByName *m_lookup; 
  bdSockAddr result; 
  bdSockAddr v6; 
  char str[8]; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 
  int v12; 
  char v13; 

  Status = bdGetHostByName::getStatus(this->m_lookup);
  if ( this->m_remoteTask.m_ptr->getStatus(this->m_remoteTask.m_ptr) == BD_CANCELLED )
  {
    bdLogMessage(BD_LOG_INFO, "info/", "bdSingleIdentity/bdUno", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdsingleidentity\\bduno.cpp", "bdUno::pumpLookup", 0x31u, "Cancelling Uno DNS lookup.");
    Status = BD_LOOKUP_CANCELLED;
  }
  if ( Status == BD_LOOKUP_PENDING )
  {
    bdGetHostByName::pump(this->m_lookup);
  }
  else
  {
    if ( Status == BD_LOOKUP_SUCCEEDED )
    {
      this->m_remoteTask.m_ptr->m_status = BD_DONE;
      bdGetHostByName::getAddressAt(this->m_lookup, &result, 0);
      v3 = bdSockAddr::Loopback(&v6, 2u, 0);
      *this->m_isRegistrationAvailable = !bdSockAddr::compare(&result, v3, 0);
      *(_QWORD *)str = 0i64;
      v8 = 0i64;
      v9 = 0i64;
      v10 = 0i64;
      v11 = 0i64;
      v12 = 0;
      v13 = 0;
      bdSockAddr::toString(&result, str, 0x2Dui64);
      bdLogMessage(BD_LOG_INFO, "info/", "bdSingleIdentity/bdUno", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdsingleidentity\\bduno.cpp", "bdUno::handleLookupComplete", 0x53u, "Uno address resolved to '%s'", str);
    }
    else
    {
      if ( (unsigned int)(Status - 3) > 3 )
      {
        bdLogMessage(BD_LOG_WARNING, "warn/", "bdSingleIdentity/bdUno", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdsingleidentity\\bduno.cpp", "bdUno::pumpLookup", 0x46u, "Pumping uninitialized DNS lookup.");
        return;
      }
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdSingleIdentity/bdUno", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdsingleidentity\\bduno.cpp", "bdUno::pumpLookup", 0x41u, "Uno DNS lookup error (status: %u)", Status);
      this->m_remoteTask.m_ptr->m_status = BD_FAILED;
      this->m_remoteTask.m_ptr->m_errorCode = BD_UNO_DNS_RESOLUTION_FAILED;
    }
    m_lookup = this->m_lookup;
    this->m_isRegistrationAvailable = NULL;
    bdGetHostByName::quit(m_lookup);
  }
}

/*
==============
bdUno::subscribeUserToEmailMarketing
==============
*/
bdReference<bdRemoteTask> *bdUno::subscribeUserToEmailMarketing(bdUno *this, bdReference<bdRemoteTask> *result, unsigned __int64 accountID, const char *accessToken, const char **subscriptionNames, unsigned __int16 numSubscriptions)
{
  _QWORD *p_m_ptr; 
  const bdReference<bdRemoteTask> *v9; 
  bdRemoteTask *v10; 
  bool v11; 
  __int64 v12; 
  const char *v13; 
  unsigned __int64 v14; 
  const bdReference<bdRemoteTask> *NewTask; 
  bdReference<bdRemoteTask> *p_m_remoteTask; 
  const char *v17; 
  __int64 v18; 
  bdHTTP *m_httpInterface; 
  unsigned int v20; 
  bdHTTP *v21; 
  bool (__fastcall *setHeader)(bdHTTP *, const char *, const unsigned __int64); 
  unsigned __int64 TransactionID; 
  bdHTTP::bdHTTPHeader *p_headers; 
  unsigned __int64 v25; 
  const bdReference<bdRemoteTask> *FailedTask; 
  bdRemoteTask *m_ptr; 
  bdReference<bdRemoteTask> v29; 
  bdReference<bdRemoteTask> v30; 
  bdReference<bdRemoteTask> resulta; 
  unsigned __int64 v32; 
  const char *v33; 
  __int64 v34; 
  bdHTTP::bdHTTPHeader headers; 
  bdJSONSerializer json; 
  bdUnoSubscription v37; 
  char buf[1024]; 
  char authorizationHeader[4144]; 

  v34 = -2i64;
  v33 = accessToken;
  v32 = accountID;
  p_m_ptr = &result->m_ptr;
  v29.m_ptr = (bdRemoteTask *)result;
  v30.m_ptr = (bdRemoteTask *)result;
  if ( bdSingleIdentityBase::readyForRequest(this) )
  {
    bdSingleIdentityBase::clearBuffers(this);
    bdJSONSerializer::bdJSONSerializer(&json);
    bdJSONSerializer::setBuffer(&json, this->m_httpRequestBuffer, this->m_requestBufferSize);
    v11 = bdJSONSerializer::writeBeginObject(&json);
    bdUnoSubscription::bdUnoSubscription(&v37);
    v37.m_channels[0].m_channel = BD_UNO_SUBSCRIPTION_EMAIL;
    if ( numSubscriptions )
    {
      v12 = numSubscriptions;
      do
      {
        v13 = *subscriptionNames;
        bdHandleAssert(*subscriptionNames != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
        v14 = -1i64;
        do
          ++v14;
        while ( v13[v14] );
        if ( v14 <= 0x65 )
          bdStrlcpy(v37.m_subscriptionName, v13, 0x65ui64);
        v11 = v11 && bdUnoSubscription::serializeToJSON(&v37, &json, 0);
        ++subscriptionNames;
        --v12;
      }
      while ( v12 );
      p_m_ptr = v29.m_ptr;
    }
    if ( v11 && bdJSONSerializer::writeEndObject(&json) )
    {
      NewTask = bdSingleIdentityBase::getNewTask(this, &v30);
      p_m_remoteTask = &this->m_remoteTask;
      bdReference<bdRemoteTask>::operator=(&this->m_remoteTask, NewTask);
      if ( v30.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v30.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v30.m_ptr )
        ((void (__fastcall *)(bdRemoteTask *, __int64))v30.m_ptr->~bdReferencable)(v30.m_ptr, 1i64);
      memset_0(buf, 0, sizeof(buf));
      v17 = this->getUrl(this);
      bdSnprintf(buf, 0x400ui64, "%s/users/%I64u/subscriptions/?client=%s", v17, v32, this->m_client);
      memset_0(authorizationHeader, 0, sizeof(authorizationHeader));
      bdSnprintf(authorizationHeader, 0x1030ui64, "Bearer %s", v33);
      v18 = 2i64;
      bdSingleIdentityBase::setBasicHeaders(this, &headers, 2u, authorizationHeader, 0);
      this->m_httpInterface->initRequest(this->m_httpInterface, BD_POST, buf, 0);
      m_httpInterface = this->m_httpInterface;
      v20 = bdJSONSerializer::length(&json);
      bdHTTP::setUploadData(m_httpInterface, this->m_httpRequestBuffer, v20);
      bdHTTP::setDownloadBuffer(this->m_httpInterface, this->m_httpResponseBuffer, this->m_responseBufferSize);
      this->m_httpInterface->setHeader(this->m_httpInterface, "Content-Type", "application/json");
      v21 = this->m_httpInterface;
      setHeader = v21->setHeader;
      TransactionID = bdRemoteTask::getTransactionID(p_m_remoteTask->m_ptr);
      setHeader(v21, "X-TransactionID", TransactionID);
      p_headers = &headers;
      do
      {
        this->m_httpInterface->setHeader(this->m_httpInterface, p_headers->key, p_headers->value);
        ++p_headers;
        --v18;
      }
      while ( v18 );
      this->m_httpInterface->sendRequest(this->m_httpInterface);
      v25 = bdRemoteTask::getTransactionID(p_m_remoteTask->m_ptr);
      bdLogMessage(BD_LOG_INFO, "info/", "bdSingleIdentity/bdUno", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdsingleidentity\\bduno.cpp", "bdUno::subscribeUserToEmailMarketing", 0x1D9u, "Started call to bdUno::subscribeUserToEmailMarketing. TransactionID: (%I64u)", v25);
    }
    else
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdSingleIdentity/bdUno", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdsingleidentity\\bduno.cpp", "bdUno::subscribeUserToEmailMarketing", 0x1DDu, "Error serializing JSON, request cannot be sent.");
      FailedTask = bdSingleIdentityBase::getFailedTask(this, &v29);
      p_m_remoteTask = &this->m_remoteTask;
      bdReference<bdRemoteTask>::operator=(&this->m_remoteTask, FailedTask);
      if ( v29.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v29.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v29.m_ptr )
        ((void (__fastcall *)(bdRemoteTask *, __int64))v29.m_ptr->~bdReferencable)(v29.m_ptr, 1i64);
    }
    m_ptr = p_m_remoteTask->m_ptr;
    *p_m_ptr = p_m_remoteTask->m_ptr;
    if ( m_ptr )
      _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
    bdUnoSubscription::~bdUnoSubscription(&v37);
    bdJSONSerializer::~bdJSONSerializer(&json);
  }
  else
  {
    v9 = bdSingleIdentityBase::getFailedTask(this, &resulta);
    bdReference<bdRemoteTask>::operator=(&this->m_remoteTask, v9);
    if ( resulta.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
    v10 = this->m_remoteTask.m_ptr;
    *p_m_ptr = v10;
    if ( v10 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v10->m_refCount, 1u);
  }
  return (bdReference<bdRemoteTask> *)p_m_ptr;
}

/*
==============
bdUno::unsubscribeUserFromEmailMarketing
==============
*/
bdReference<bdRemoteTask> *bdUno::unsubscribeUserFromEmailMarketing(bdUno *this, bdReference<bdRemoteTask> *result, unsigned __int64 accountID, const char *accessToken, const char *subscriptionName)
{
  const bdReference<bdRemoteTask> *v9; 
  bdRemoteTask *v10; 
  const bdReference<bdRemoteTask> *NewTask; 
  bdReference<bdRemoteTask> *p_m_remoteTask; 
  const char *v13; 
  __int64 v14; 
  bdHTTP *m_httpInterface; 
  unsigned int v16; 
  bdHTTP *v17; 
  bool (__fastcall *setHeader)(bdHTTP *, const char *, const unsigned __int64); 
  unsigned __int64 TransactionID; 
  bdHTTP::bdHTTPHeader *p_headers; 
  unsigned __int64 v21; 
  const bdReference<bdRemoteTask> *FailedTask; 
  bdRemoteTask *m_ptr; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> v26; 
  bdReference<bdRemoteTask> v27; 
  const char *v28; 
  __int64 v29; 
  bdHTTP::bdHTTPHeader headers; 
  bdJSONSerializer v31; 
  char buf[1024]; 
  char authorizationHeader[4144]; 

  v29 = -2i64;
  v28 = subscriptionName;
  if ( bdSingleIdentityBase::readyForRequest(this) )
  {
    bdSingleIdentityBase::clearBuffers(this);
    bdJSONSerializer::bdJSONSerializer(&v31);
    bdJSONSerializer::setBuffer(&v31, this->m_httpRequestBuffer, this->m_requestBufferSize);
    bdJSONSerializer::writeBeginObject(&v31);
    if ( bdJSONSerializer::writeBeginObject(&v31, "email") && bdJSONSerializer::writeBoolean(&v31, "enabled", 0) && bdJSONSerializer::writeEndObject(&v31) && bdJSONSerializer::validate(&v31) )
    {
      NewTask = bdSingleIdentityBase::getNewTask(this, &v26);
      p_m_remoteTask = &this->m_remoteTask;
      bdReference<bdRemoteTask>::operator=(&this->m_remoteTask, NewTask);
      if ( v26.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v26.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v26.m_ptr )
        ((void (__fastcall *)(bdRemoteTask *, __int64))v26.m_ptr->~bdReferencable)(v26.m_ptr, 1i64);
      memset_0(buf, 0, sizeof(buf));
      v13 = this->getUrl(this);
      bdSnprintf(buf, 0x400ui64, "%s/users/%I64u/subscriptions/%s/?client=%s&fields=unoID&extra=subscriptions", v13, accountID, v28, this->m_client);
      memset_0(authorizationHeader, 0, sizeof(authorizationHeader));
      bdSnprintf(authorizationHeader, 0x1030ui64, "Bearer %s", accessToken);
      v14 = 2i64;
      bdSingleIdentityBase::setBasicHeaders(this, &headers, 2u, authorizationHeader, 0);
      this->m_httpInterface->initRequest(this->m_httpInterface, BD_PUT, buf, 0);
      m_httpInterface = this->m_httpInterface;
      v16 = bdJSONSerializer::length(&v31);
      bdHTTP::setUploadData(m_httpInterface, this->m_httpRequestBuffer, v16);
      bdHTTP::setDownloadBuffer(this->m_httpInterface, this->m_httpResponseBuffer, this->m_responseBufferSize);
      this->m_httpInterface->setHeader(this->m_httpInterface, "Content-Type", "application/json");
      v17 = this->m_httpInterface;
      setHeader = v17->setHeader;
      TransactionID = bdRemoteTask::getTransactionID(p_m_remoteTask->m_ptr);
      setHeader(v17, "X-TransactionID", TransactionID);
      p_headers = &headers;
      do
      {
        this->m_httpInterface->setHeader(this->m_httpInterface, p_headers->key, p_headers->value);
        ++p_headers;
        --v14;
      }
      while ( v14 );
      this->m_httpInterface->sendRequest(this->m_httpInterface);
      v21 = bdRemoteTask::getTransactionID(p_m_remoteTask->m_ptr);
      bdLogMessage(BD_LOG_INFO, "info/", "bdSingleIdentity/bdUno", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdsingleidentity\\bduno.cpp", "bdUno::unsubscribeUserFromEmailMarketing", 0x211u, "Started call to bdUno::unsubscribeUserFromEmailMarketing. TransactionID: (%I64u)", v21);
    }
    else
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdSingleIdentity/bdUno", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdsingleidentity\\bduno.cpp", "bdUno::unsubscribeUserFromEmailMarketing", 0x215u, "Error serializing JSON, request cannot be sent.");
      FailedTask = bdSingleIdentityBase::getFailedTask(this, &v27);
      p_m_remoteTask = &this->m_remoteTask;
      bdReference<bdRemoteTask>::operator=(&this->m_remoteTask, FailedTask);
      if ( v27.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v27.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v27.m_ptr )
        ((void (__fastcall *)(bdRemoteTask *, __int64))v27.m_ptr->~bdReferencable)(v27.m_ptr, 1i64);
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
bdUno::updateUser
==============
*/
bdReference<bdRemoteTask> *bdUno::updateUser(bdUno *this, bdReference<bdRemoteTask> *result, const bdUnoAccountInfo *accountInfo, const char *accessToken, const char *locale)
{
  const bdReference<bdRemoteTask> *FailedTask; 
  bdRemoteTask *m_ptr; 
  bool v11; 
  const bdReference<bdRemoteTask> *NewTask; 
  bdReference<bdRemoteTask> *p_m_remoteTask; 
  unsigned __int64 m_userID; 
  const char *v15; 
  __int64 v16; 
  bdHTTP *m_httpInterface; 
  unsigned int v18; 
  bdHTTP *v19; 
  bool (__fastcall *setHeader)(bdHTTP *, const char *, const unsigned __int64); 
  unsigned __int64 TransactionID; 
  bdHTTP::bdHTTPHeader *p_headers; 
  unsigned __int64 v23; 
  const bdReference<bdRemoteTask> *v24; 
  bdRemoteTask *v25; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> v28; 
  bdReference<bdRemoteTask> v29; 
  char *queryVal; 
  __int64 v31; 
  bdJSONSerializer json; 
  bdHTTP::bdHTTPHeader headers; 
  char buf[1024]; 
  char authorizationHeader[4144]; 

  v31 = -2i64;
  queryVal = (char *)locale;
  if ( !bdSingleIdentityBase::readyForRequest(this) )
  {
    FailedTask = bdSingleIdentityBase::getFailedTask(this, &resulta);
    bdReference<bdRemoteTask>::operator=(&this->m_remoteTask, FailedTask);
    if ( resulta.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
    m_ptr = this->m_remoteTask.m_ptr;
    result->m_ptr = m_ptr;
    if ( m_ptr )
      _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
    return result;
  }
  bdSingleIdentityBase::clearBuffers(this);
  bdJSONSerializer::bdJSONSerializer(&json);
  bdJSONSerializer::setBuffer(&json, this->m_httpRequestBuffer, this->m_requestBufferSize);
  v11 = bdJSONSerializer::writeBeginObject(&json) && bdUnoAccountInfo::serializeUnsecuredFieldsToJSON((bdUnoAccountInfo *)accountInfo, &json, 0);
  if ( accountInfo->m_accountType == BD_UNO_ACCOUNT_HALF )
  {
    if ( !v11 )
      goto LABEL_24;
    v11 = bdUnoAccountInfo::serializeSecuredFieldsToJSON((bdUnoAccountInfo *)accountInfo, &json, 1);
  }
  if ( !v11 || !bdJSONSerializer::writeEndObject(&json) )
  {
LABEL_24:
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdSingleIdentity/bdUno", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdsingleidentity\\bduno.cpp", "bdUno::updateUser", 0x278u, "Error serializing JSON, request cannot be sent.");
    v24 = bdSingleIdentityBase::getFailedTask(this, &v29);
    p_m_remoteTask = &this->m_remoteTask;
    bdReference<bdRemoteTask>::operator=(&this->m_remoteTask, v24);
    if ( v29.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v29.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v29.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))v29.m_ptr->~bdReferencable)(v29.m_ptr, 1i64);
    goto LABEL_28;
  }
  NewTask = bdSingleIdentityBase::getNewTask(this, &v28);
  p_m_remoteTask = &this->m_remoteTask;
  bdReference<bdRemoteTask>::operator=(&this->m_remoteTask, NewTask);
  if ( v28.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v28.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v28.m_ptr )
    ((void (__fastcall *)(bdRemoteTask *, __int64))v28.m_ptr->~bdReferencable)(v28.m_ptr, 1i64);
  m_userID = accountInfo->m_userID;
  v15 = this->getUrl(this);
  bdSnprintf(buf, 0x400ui64, "%s/users/%I64u/?client=%s", v15, m_userID, this->m_client);
  bdSingleIdentityBase::appendQueryString(this, buf, "&locale=%s", queryVal);
  bdSnprintf(authorizationHeader, 0x1030ui64, "Bearer %s", accessToken);
  v16 = 3i64;
  bdSingleIdentityBase::setBasicHeaders(this, &headers, 3u, authorizationHeader, 1);
  this->m_httpInterface->initRequest(this->m_httpInterface, BD_PUT, buf, 0);
  m_httpInterface = this->m_httpInterface;
  v18 = bdJSONSerializer::length(&json);
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
  bdLogMessage(BD_LOG_INFO, "info/", "bdSingleIdentity/bdUno", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdsingleidentity\\bduno.cpp", "bdUno::updateUser", 0x274u, "Started call to bdUno::updateUser. TransactionID: (%I64u)", v23);
LABEL_28:
  v25 = p_m_remoteTask->m_ptr;
  result->m_ptr = p_m_remoteTask->m_ptr;
  if ( v25 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v25->m_refCount, 1u);
  bdJSONSerializer::~bdJSONSerializer(&json);
  return result;
}

/*
==============
bdUno::updateUserSecuredFields
==============
*/
bdReference<bdRemoteTask> *bdUno::updateUserSecuredFields(bdUno *this, bdReference<bdRemoteTask> *result, const bdUnoAccountInfo *accountInfo, const char *accessToken, const char *currentPassword, const char *locale)
{
  const bdReference<bdRemoteTask> *FailedTask; 
  bdRemoteTask *m_ptr; 
  bool v12; 
  const char *m_password; 
  const bdReference<bdRemoteTask> *NewTask; 
  bdReference<bdRemoteTask> *p_m_remoteTask; 
  unsigned __int64 m_userID; 
  const char *v17; 
  __int64 v18; 
  bdHTTP *m_httpInterface; 
  unsigned int v20; 
  bdHTTP *v21; 
  bool (__fastcall *setHeader)(bdHTTP *, const char *, const unsigned __int64); 
  unsigned __int64 TransactionID; 
  bdHTTP::bdHTTPHeader *p_headers; 
  unsigned __int64 v25; 
  const bdReference<bdRemoteTask> *v26; 
  bdRemoteTask *v27; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> v30; 
  bdReference<bdRemoteTask> v31; 
  char *queryVal; 
  __int64 v33; 
  bdJSONSerializer json; 
  bdHTTP::bdHTTPHeader headers; 
  char buf[1024]; 
  char authorizationHeader[4144]; 

  v33 = -2i64;
  queryVal = (char *)locale;
  if ( !bdSingleIdentityBase::readyForRequest(this) )
  {
    FailedTask = bdSingleIdentityBase::getFailedTask(this, &resulta);
    bdReference<bdRemoteTask>::operator=(&this->m_remoteTask, FailedTask);
    if ( resulta.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
    m_ptr = this->m_remoteTask.m_ptr;
    result->m_ptr = m_ptr;
    if ( m_ptr )
      _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
    return result;
  }
  bdSingleIdentityBase::clearBuffers(this);
  bdJSONSerializer::bdJSONSerializer(&json);
  bdJSONSerializer::setBuffer(&json, this->m_httpRequestBuffer, this->m_requestBufferSize);
  v12 = bdJSONSerializer::writeBeginObject(&json) && bdUnoAccountInfo::serializeSecuredFieldsToJSON((bdUnoAccountInfo *)accountInfo, &json, currentPassword != NULL);
  if ( currentPassword )
  {
    if ( !v12 )
      goto LABEL_26;
    m_password = currentPassword;
  }
  else
  {
    if ( !v12 )
      goto LABEL_26;
    m_password = accountInfo->m_password;
  }
  if ( !bdJSONSerializer::writeString(&json, "currentPassword", m_password) || !bdJSONSerializer::writeEndObject(&json) )
  {
LABEL_26:
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdSingleIdentity/bdUno", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdsingleidentity\\bduno.cpp", "bdUno::updateUserSecuredFields", 0x2B9u, "Error serializing JSON, request cannot be sent.");
    v26 = bdSingleIdentityBase::getFailedTask(this, &v31);
    p_m_remoteTask = &this->m_remoteTask;
    bdReference<bdRemoteTask>::operator=(&this->m_remoteTask, v26);
    if ( v31.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v31.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v31.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))v31.m_ptr->~bdReferencable)(v31.m_ptr, 1i64);
    goto LABEL_30;
  }
  NewTask = bdSingleIdentityBase::getNewTask(this, &v30);
  p_m_remoteTask = &this->m_remoteTask;
  bdReference<bdRemoteTask>::operator=(&this->m_remoteTask, NewTask);
  if ( v30.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v30.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v30.m_ptr )
    ((void (__fastcall *)(bdRemoteTask *, __int64))v30.m_ptr->~bdReferencable)(v30.m_ptr, 1i64);
  m_userID = accountInfo->m_userID;
  v17 = this->getUrl(this);
  bdSnprintf(buf, 0x400ui64, "%s/users/%I64u/securedfields/?client=%s", v17, m_userID, this->m_client);
  bdSingleIdentityBase::appendQueryString(this, buf, "&locale=%s", queryVal);
  bdSnprintf(authorizationHeader, 0x1030ui64, "Bearer %s", accessToken);
  v18 = 3i64;
  bdSingleIdentityBase::setBasicHeaders(this, &headers, 3u, authorizationHeader, 1);
  this->m_httpInterface->initRequest(this->m_httpInterface, BD_PUT, buf, 0);
  m_httpInterface = this->m_httpInterface;
  v20 = bdJSONSerializer::length(&json);
  bdHTTP::setUploadData(m_httpInterface, this->m_httpRequestBuffer, v20);
  bdHTTP::setDownloadBuffer(this->m_httpInterface, this->m_httpResponseBuffer, this->m_responseBufferSize);
  v21 = this->m_httpInterface;
  setHeader = v21->setHeader;
  TransactionID = bdRemoteTask::getTransactionID(p_m_remoteTask->m_ptr);
  setHeader(v21, "X-TransactionID", TransactionID);
  p_headers = &headers;
  do
  {
    this->m_httpInterface->setHeader(this->m_httpInterface, p_headers->key, p_headers->value);
    ++p_headers;
    --v18;
  }
  while ( v18 );
  this->m_httpInterface->sendRequest(this->m_httpInterface);
  v25 = bdRemoteTask::getTransactionID(p_m_remoteTask->m_ptr);
  bdLogMessage(BD_LOG_INFO, "info/", "bdSingleIdentity/bdUno", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdsingleidentity\\bduno.cpp", "bdUno::updateUserSecuredFields", 0x2B5u, "Started call to bdUno::updateUserSecuredFields. TransactionID: (%I64u)", v25);
LABEL_30:
  v27 = p_m_remoteTask->m_ptr;
  result->m_ptr = p_m_remoteTask->m_ptr;
  if ( v27 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v27->m_refCount, 1u);
  bdJSONSerializer::~bdJSONSerializer(&json);
  return result;
}

/*
==============
bdUno::validateFields
==============
*/
char bdUno::validateFields(bdUno *this, const char *fields)
{
  if ( !fields )
    return 1;
  if ( strstr_0(fields, "accountType") && strstr_0(fields, "unoID") && strstr_0(fields, "userName") )
    return 1;
  bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdSingleIdentity/bdUno", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdsingleidentity\\bduno.cpp", "bdUno::validateFields", 0x474u, "Fields parameter for Uno requests must contain the mandatory fields %s, %s and %s", "accountType", "unoID", "userName");
  return 0;
}

