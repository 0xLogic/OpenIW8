/*
==============
bdLoginAndLink::getErrorCode
==============
*/

bdLobbyErrorCode __fastcall bdLoginAndLink::getErrorCode(bdLoginAndLink *this)
{
  return ?getErrorCode@bdLoginAndLink@@QEAA?AW4bdLobbyErrorCode@@XZ(this);
}

/*
==============
bdLoginAndLink::getStatus
==============
*/

bdLoginAndLink::LoginLinkStatus __fastcall bdLoginAndLink::getStatus(bdLoginAndLink *this)
{
  return ?getStatus@bdLoginAndLink@@QEAA?AW4LoginLinkStatus@1@XZ(this);
}

/*
==============
bdLoginAndLink::getStatusMessage
==============
*/

char *__fastcall bdLoginAndLink::getStatusMessage(bdLoginAndLink *this)
{
  return ?getStatusMessage@bdLoginAndLink@@QEAAPEADXZ(this);
}

/*
==============
bdLoginAndLink::succeeded
==============
*/

bool __fastcall bdLoginAndLink::succeeded(bdLoginAndLink *this)
{
  return ?succeeded@bdLoginAndLink@@QEAA_NXZ(this);
}

/*
==============
bdLoginAndLink::setStatusMessage
==============
*/

void __fastcall bdLoginAndLink::setStatusMessage(bdLoginAndLink *this, const char *message)
{
  ?setStatusMessage@bdLoginAndLink@@IEAAXPEBD@Z(this, message);
}

/*
==============
bdLoginAndLink::pump
==============
*/

void __fastcall bdLoginAndLink::pump(bdLoginAndLink *this)
{
  ?pump@bdLoginAndLink@@QEAAXXZ(this);
}

/*
==============
bdLoginAndLink::getAuthResponse
==============
*/

bdAuthenticateCrossPlatformUserResponse *__fastcall bdLoginAndLink::getAuthResponse(bdLoginAndLink *this)
{
  return ?getAuthResponse@bdLoginAndLink@@QEAAPEAVbdAuthenticateCrossPlatformUserResponse@@XZ(this);
}

/*
==============
bdLoginAndLink::bdLoginAndLink
==============
*/

void __fastcall bdLoginAndLink::bdLoginAndLink(bdLoginAndLink *this, bdLoginResult *loginResult, char *email, char *password)
{
  ??0bdLoginAndLink@@QEAA@PEAVbdLoginResult@@PEAD1@Z(this, loginResult, email, password);
}

/*
==============
bdLoginAndLink::isPending
==============
*/

bool __fastcall bdLoginAndLink::isPending(bdLoginAndLink *this)
{
  return ?isPending@bdLoginAndLink@@QEAA_NXZ(this);
}

/*
==============
bdLoginAndLink::getLinkResponse
==============
*/

bdCrossPlatformLinkUserResponse *__fastcall bdLoginAndLink::getLinkResponse(bdLoginAndLink *this)
{
  return ?getLinkResponse@bdLoginAndLink@@QEAAPEAVbdCrossPlatformLinkUserResponse@@XZ(this);
}

/*
==============
bdLoginAndLink::bdLoginAndLink
==============
*/
void bdLoginAndLink::bdLoginAndLink(bdLoginAndLink *this, bdLoginResult *loginResult, char *email, char *password)
{
  unsigned __int64 v8; 
  size_t v9; 
  bdLobbyService *LobbyService; 
  bool isConnected; 
  const bdUmbrellaCrossplayAccessInfo *CrossplayAccessInfo; 

  this->m_loginLinkStatus = READY;
  bdCrossPlatformLinkUserResponse::bdCrossPlatformLinkUserResponse(&this->m_linkResponse);
  bdAuthenticateCrossPlatformUserResponse::bdAuthenticateCrossPlatformUserResponse(&this->m_authResponse);
  this->m_authenticateUserTask.m_ptr = NULL;
  this->m_linkAccountTask.m_ptr = NULL;
  this->m_errorCode = BD_NO_ERROR;
  bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen", -2i64);
  v8 = -1i64;
  do
    ++v8;
  while ( aSettingStateTo_12[v8] );
  if ( this != (bdLoginAndLink *)-4488i64 )
  {
    v9 = 1023i64;
    if ( v8 < 0x3FF )
      v9 = v8;
    memcpy_0(this->m_statusMessage, "Setting state to READY", v9);
    this->m_statusMessage[v9] = 0;
  }
  LobbyService = bdLoginResult::getLobbyService(loginResult);
  this->m_lobby = LobbyService;
  isConnected = bdLobbyService::isConnected(LobbyService);
  bdHandleAssert(isConnected, "m_lobby->isConnected()", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcrossplatformidentity\\bdloginandlink.cpp", "bdLoginAndLink::bdLoginAndLink", 0x13u, "bdLobbyService is not connected.");
  this->m_umbrellaID = bdLoginResult::getUmbrellaID(loginResult);
  bdStrlcpy(this->m_email, email, 0x100ui64);
  bdStrlcpy(this->m_password, password, 0x65ui64);
  CrossplayAccessInfo = bdLoginResult::getCrossplayAccessInfo(loginResult);
  bdStrlcpy(this->m_authToken, CrossplayAccessInfo->m_accessToken, 0x1000ui64);
}

/*
==============
bdLoginAndLink::getAuthResponse
==============
*/
bdAuthenticateCrossPlatformUserResponse *bdLoginAndLink::getAuthResponse(bdLoginAndLink *this)
{
  return &this->m_authResponse;
}

/*
==============
bdLoginAndLink::getErrorCode
==============
*/
__int64 bdLoginAndLink::getErrorCode(bdLoginAndLink *this)
{
  return (unsigned int)this->m_errorCode;
}

/*
==============
bdLoginAndLink::getLinkResponse
==============
*/
bdCrossPlatformLinkUserResponse *bdLoginAndLink::getLinkResponse(bdLoginAndLink *this)
{
  return &this->m_linkResponse;
}

/*
==============
bdLoginAndLink::getStatus
==============
*/
__int64 bdLoginAndLink::getStatus(bdLoginAndLink *this)
{
  return (unsigned int)this->m_loginLinkStatus;
}

/*
==============
bdLoginAndLink::getStatusMessage
==============
*/
char *bdLoginAndLink::getStatusMessage(bdLoginAndLink *this)
{
  return this->m_statusMessage;
}

/*
==============
bdLoginAndLink::isPending
==============
*/
bool bdLoginAndLink::isPending(bdLoginAndLink *this)
{
  return (unsigned int)(this->m_loginLinkStatus - 4) > 1;
}

/*
==============
bdLoginAndLink::pump
==============
*/
void bdLoginAndLink::pump(bdLoginAndLink *this)
{
  bdLoginAndLink::LoginLinkStatus m_loginLinkStatus; 
  __int32 v3; 
  __int32 v4; 
  bdLobbyErrorCode ErrorCode; 
  char *m_statusMessage; 
  const char *v7; 
  unsigned __int64 v8; 
  const char *AccessToken; 
  const char *RereshToken; 
  const char *IDToken; 
  const bdReference<bdRemoteTask> *v12; 
  unsigned __int64 v13; 
  size_t v14; 
  bdRESTRequest *p_request; 
  bdLobbyErrorCode v16; 
  size_t v17; 
  unsigned __int64 v18; 
  size_t v19; 
  unsigned __int64 v20; 
  size_t v21; 
  bdCrossPlatformIdentity *CrossPlatformIdentity; 
  const bdReference<bdRemoteTask> *v23; 
  unsigned __int64 v24; 
  size_t v25; 
  bdReference<bdRemoteTask> result; 
  bdReference<bdRemoteTask> v27; 
  __int64 v28; 
  bdAuthenticateCrossPlatformUserRequest v29; 
  bdCrossPlatformLinkUserRequest request; 

  v28 = -2i64;
  m_loginLinkStatus = this->m_loginLinkStatus;
  if ( m_loginLinkStatus == READY )
  {
    bdAuthenticateCrossPlatformUserRequest::bdAuthenticateCrossPlatformUserRequest(&v29);
    bdAuthenticateCrossPlatformUserRequest::setEmail(&v29, this->m_email);
    bdAuthenticateCrossPlatformUserRequest::setPassword(&v29, this->m_password);
    CrossPlatformIdentity = bdLobbyService::getCrossPlatformIdentity(this->m_lobby);
    this->m_identity = CrossPlatformIdentity;
    v23 = bdCrossPlatformIdentity::authenticateUser(CrossPlatformIdentity, &v27, &v29, &this->m_authResponse);
    bdReference<bdRemoteTask>::operator=(&this->m_authenticateUserTask, v23);
    v24 = -1i64;
    if ( v27.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v27.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v27.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))v27.m_ptr->~bdReferencable)(v27.m_ptr, 1i64);
    this->m_loginLinkStatus = FETCHING_FIRST_PARTY_TOKEN;
    bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
    do
      ++v24;
    while ( aAuthenticating_1[v24] );
    if ( this != (bdLoginAndLink *)-4488i64 )
    {
      v25 = 1023i64;
      if ( v24 < 0x3FF )
        v25 = v24;
      memcpy_0(this->m_statusMessage, "Authenticating Uno account.", v25);
      this->m_statusMessage[v25] = 0;
    }
    this->m_errorCode = bdAuthenticateCrossPlatformUserResponse::getErrorCode(&this->m_authResponse);
    bdLobbyService::pump(this->m_lobby);
    p_request = &v29;
    goto LABEL_60;
  }
  v3 = m_loginLinkStatus - 1;
  if ( v3 )
  {
    v4 = v3 - 1;
    if ( v4 )
    {
      if ( v4 != 1 )
      {
        bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcrossplatformidentity\\bdloginandlink.cpp", "bdLoginAndLink::pump", 0x72u, "Pumping in an unknown state!");
        this->m_errorCode = BD_LOGIN_UNKOWN_ERROR;
        return;
      }
      if ( this->m_linkAccountTask.m_ptr->getStatus(this->m_linkAccountTask.m_ptr) != BD_PENDING )
      {
        ErrorCode = bdRemoteTask::getErrorCode(this->m_linkAccountTask.m_ptr);
        this->m_errorCode = bdCrossPlatformLinkUserResponse::getErrorCode(&this->m_linkResponse);
        if ( ErrorCode == BD_NO_ERROR )
        {
          this->m_loginLinkStatus = AUTHENTICATED;
          return;
        }
        this->m_loginLinkStatus = AUTHENTICATING;
        m_statusMessage = this->m_statusMessage;
        bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
        v7 = "Encountered error linking authorized Uno account.";
        v8 = -1i64;
        do
          ++v8;
        while ( aEncounteredErr_4[v8] );
        goto LABEL_28;
      }
LABEL_24:
      bdLobbyService::pump(this->m_lobby);
      return;
    }
    bdCrossPlatformLinkUserRequest::bdCrossPlatformLinkUserRequest(&request);
    bdCrossPlatformLinkUserRequest::setUmbrellaID(&request, this->m_umbrellaID);
    AccessToken = bdAuthenticateCrossPlatformUserResponse::getAccessToken(&this->m_authResponse);
    bdCrossPlatformLinkUserRequest::setUnoAccessToken(&request, AccessToken);
    RereshToken = bdAuthenticateCrossPlatformUserResponse::getRereshToken(&this->m_authResponse);
    bdCrossPlatformLinkUserRequest::setUnoRefreshToken(&request, RereshToken);
    IDToken = bdAuthenticateCrossPlatformUserResponse::getIDToken(&this->m_authResponse);
    bdCrossPlatformLinkUserRequest::setUnoToken(&request, IDToken);
    bdCrossPlatformLinkUserRequest::setAuthToken(&request, this->m_authToken);
    v12 = bdCrossPlatformIdentity::linkUser(this->m_identity, &result, &request, &this->m_linkResponse);
    bdReference<bdRemoteTask>::operator=(&this->m_linkAccountTask, v12);
    v13 = -1i64;
    if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
    this->m_loginLinkStatus = LOGIN_DELAY;
    bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
    do
      ++v13;
    while ( aLinkingAuthori[v13] );
    if ( this != (bdLoginAndLink *)-4488i64 )
    {
      v14 = 1023i64;
      if ( v13 < 0x3FF )
        v14 = v13;
      memcpy_0(this->m_statusMessage, "Linking authorized Uno account.", v14);
      this->m_statusMessage[v14] = 0;
    }
    this->m_errorCode = bdCrossPlatformLinkUserResponse::getErrorCode(&this->m_linkResponse);
    bdLobbyService::pump(this->m_lobby);
    p_request = &request;
LABEL_60:
    bdRESTRequest::~bdRESTRequest(p_request);
    return;
  }
  if ( this->m_authenticateUserTask.m_ptr->getStatus(this->m_authenticateUserTask.m_ptr) == BD_PENDING )
    goto LABEL_24;
  v16 = bdRemoteTask::getErrorCode(this->m_authenticateUserTask.m_ptr);
  this->m_errorCode = bdAuthenticateCrossPlatformUserResponse::getErrorCode(&this->m_authResponse);
  if ( v16 )
  {
    this->m_loginLinkStatus = AUTHENTICATING;
    m_statusMessage = this->m_statusMessage;
    bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
    v7 = "Encountered error logging in to Uno account.";
    v8 = -1i64;
    do
      ++v8;
    while ( aEncounteredErr_6[v8] );
LABEL_28:
    if ( m_statusMessage )
    {
      v17 = 1023i64;
      if ( v8 < 0x3FF )
        v17 = v8;
      memcpy_0(m_statusMessage, v7, v17);
      m_statusMessage[v17] = 0;
    }
    return;
  }
  if ( *bdAuthenticateCrossPlatformUserResponse::getAccessToken(&this->m_authResponse) && *bdAuthenticateCrossPlatformUserResponse::getRereshToken(&this->m_authResponse) && *bdAuthenticateCrossPlatformUserResponse::getIDToken(&this->m_authResponse) )
  {
    bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
    v18 = -1i64;
    do
      ++v18;
    while ( aCompletedUnoLo[v18] );
    if ( this != (bdLoginAndLink *)-4488i64 )
    {
      v19 = 1023i64;
      if ( v18 < 0x3FF )
        v19 = v18;
      memcpy_0(this->m_statusMessage, "Completed Uno Log in.", v19);
      this->m_statusMessage[v19] = 0;
    }
    this->m_loginLinkStatus = FIRST_PARTY_AUTHED;
  }
  else
  {
    bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
    v20 = -1i64;
    do
      ++v20;
    while ( aResponseFromUn_0[v20] );
    if ( this != (bdLoginAndLink *)-4488i64 )
    {
      v21 = 1023i64;
      if ( v20 < 0x3FF )
        v21 = v20;
      memcpy_0(this->m_statusMessage, "Response from Uno Login did not parse as expected.", v21);
      this->m_statusMessage[v21] = 0;
    }
    this->m_loginLinkStatus = AUTHENTICATING;
  }
}

/*
==============
bdLoginAndLink::setStatusMessage
==============
*/
void bdLoginAndLink::setStatusMessage(bdLoginAndLink *this, const char *message)
{
  bdStrlcpy(this->m_statusMessage, message, 0x400ui64);
}

/*
==============
bdLoginAndLink::succeeded
==============
*/
bool bdLoginAndLink::succeeded(bdLoginAndLink *this)
{
  return this->m_loginLinkStatus == AUTHENTICATED;
}

