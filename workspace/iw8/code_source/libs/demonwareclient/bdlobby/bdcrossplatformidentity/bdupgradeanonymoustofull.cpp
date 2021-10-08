/*
==============
bdUpgradeAnonymousToFull::pump
==============
*/

void __fastcall bdUpgradeAnonymousToFull::pump(bdUpgradeAnonymousToFull *this)
{
  ?pump@bdUpgradeAnonymousToFull@@QEAAXXZ(this);
}

/*
==============
bdUpgradeAnonymousToFull::getUmbrellaUpgradeResponse
==============
*/

bdUpgradeUmbrellaResponse *__fastcall bdUpgradeAnonymousToFull::getUmbrellaUpgradeResponse(bdUpgradeAnonymousToFull *this)
{
  return ?getUmbrellaUpgradeResponse@bdUpgradeAnonymousToFull@@QEAAPEAVbdUpgradeUmbrellaResponse@@XZ(this);
}

/*
==============
bdUpgradeAnonymousToFull::getUnoUpgradeResponse
==============
*/

bdUpgradeAnonUnoAccResponse *__fastcall bdUpgradeAnonymousToFull::getUnoUpgradeResponse(bdUpgradeAnonymousToFull *this)
{
  return ?getUnoUpgradeResponse@bdUpgradeAnonymousToFull@@QEAAPEAVbdUpgradeAnonUnoAccResponse@@XZ(this);
}

/*
==============
bdUpgradeAnonymousToFull::succeeded
==============
*/

bool __fastcall bdUpgradeAnonymousToFull::succeeded(bdUpgradeAnonymousToFull *this)
{
  return ?succeeded@bdUpgradeAnonymousToFull@@QEAA_NXZ(this);
}

/*
==============
bdUpgradeAnonymousToFull::getStatusMessage
==============
*/

char *__fastcall bdUpgradeAnonymousToFull::getStatusMessage(bdUpgradeAnonymousToFull *this)
{
  return ?getStatusMessage@bdUpgradeAnonymousToFull@@QEAAPEADXZ(this);
}

/*
==============
bdUpgradeAnonymousToFull::bdUpgradeAnonymousToFull
==============
*/

void __fastcall bdUpgradeAnonymousToFull::bdUpgradeAnonymousToFull(bdUpgradeAnonymousToFull *this, bdLoginResult *loginResult, const bdUnoAccountInfo *unoAccInfo)
{
  ??0bdUpgradeAnonymousToFull@@QEAA@PEAVbdLoginResult@@PEBVbdUnoAccountInfo@@@Z(this, loginResult, unoAccInfo);
}

/*
==============
bdUpgradeAnonymousToFull::isPending
==============
*/

bool __fastcall bdUpgradeAnonymousToFull::isPending(bdUpgradeAnonymousToFull *this)
{
  return ?isPending@bdUpgradeAnonymousToFull@@QEAA_NXZ(this);
}

/*
==============
bdUpgradeAnonymousToFull::getErrorCode
==============
*/

bdLobbyErrorCode __fastcall bdUpgradeAnonymousToFull::getErrorCode(bdUpgradeAnonymousToFull *this)
{
  return ?getErrorCode@bdUpgradeAnonymousToFull@@QEAA?AW4bdLobbyErrorCode@@XZ(this);
}

/*
==============
bdUpgradeAnonymousToFull::setStatusMessage
==============
*/

void __fastcall bdUpgradeAnonymousToFull::setStatusMessage(bdUpgradeAnonymousToFull *this, const char *message)
{
  ?setStatusMessage@bdUpgradeAnonymousToFull@@IEAAXPEBD@Z(this, message);
}

/*
==============
bdUpgradeAnonymousToFull::getStatus
==============
*/

bdUpgradeAnonymousToFull::UpgradeStatus __fastcall bdUpgradeAnonymousToFull::getStatus(bdUpgradeAnonymousToFull *this)
{
  return ?getStatus@bdUpgradeAnonymousToFull@@QEAA?AW4UpgradeStatus@1@XZ(this);
}

/*
==============
bdUpgradeAnonymousToFull::bdUpgradeAnonymousToFull
==============
*/
void bdUpgradeAnonymousToFull::bdUpgradeAnonymousToFull(bdUpgradeAnonymousToFull *this, bdLoginResult *loginResult, const bdUnoAccountInfo *unoAccInfo)
{
  unsigned __int64 v6; 
  size_t v7; 
  bdLobbyService *LobbyService; 
  bool isConnected; 
  const bdUmbrellaCrossplayAccessInfo *CrossplayAccessInfo; 
  const char *RefreshToken; 

  this->m_upgradeStatus = READY;
  bdUnoAccountInfo::bdUnoAccountInfo(&this->m_unoAccountInfo);
  bdUpgradeAnonUnoAccResponse::bdUpgradeAnonUnoAccResponse(&this->m_unoResponse);
  bdUpgradeUmbrellaResponse::bdUpgradeUmbrellaResponse(&this->m_umbrellaResponse);
  this->m_upgradeUnoTask.m_ptr = NULL;
  this->m_upgradeUmbrellaTask.m_ptr = NULL;
  this->m_errorCode = BD_NO_ERROR;
  bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen", -2i64);
  v6 = -1i64;
  do
    ++v6;
  while ( aSettingStateTo_12[v6] );
  if ( this != (bdUpgradeAnonymousToFull *)-8224i64 )
  {
    v7 = 1023i64;
    if ( v6 < 0x3FF )
      v7 = v6;
    memcpy_0(this->m_statusMessage, "Setting state to READY", v7);
    this->m_statusMessage[v7] = 0;
  }
  this->m_unoID = bdLoginResult::getUnoID(loginResult);
  LobbyService = bdLoginResult::getLobbyService(loginResult);
  this->m_lobby = LobbyService;
  isConnected = bdLobbyService::isConnected(LobbyService);
  bdHandleAssert(isConnected, "m_lobby->isConnected()", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcrossplatformidentity\\bdupgradeanonymoustofull.cpp", "bdUpgradeAnonymousToFull::bdUpgradeAnonymousToFull", 0x14u, "bdLobbyService is not connected.");
  bdUnoAccountInfo::operator=(&this->m_unoAccountInfo, unoAccInfo);
  CrossplayAccessInfo = bdLoginResult::getCrossplayAccessInfo(loginResult);
  bdStrlcpy(this->m_authToken, CrossplayAccessInfo->m_accessToken, 0x1000ui64);
  RefreshToken = bdLoginResult::getRefreshToken(loginResult);
  bdStrlcpy(this->m_refreshToken, RefreshToken, 0x1000ui64);
}

/*
==============
bdUpgradeAnonymousToFull::getErrorCode
==============
*/
__int64 bdUpgradeAnonymousToFull::getErrorCode(bdUpgradeAnonymousToFull *this)
{
  return (unsigned int)this->m_errorCode;
}

/*
==============
bdUpgradeAnonymousToFull::getStatus
==============
*/
__int64 bdUpgradeAnonymousToFull::getStatus(bdUpgradeAnonymousToFull *this)
{
  return (unsigned int)this->m_upgradeStatus;
}

/*
==============
bdUpgradeAnonymousToFull::getStatusMessage
==============
*/
char *bdUpgradeAnonymousToFull::getStatusMessage(bdUpgradeAnonymousToFull *this)
{
  return this->m_statusMessage;
}

/*
==============
bdUpgradeAnonymousToFull::getUmbrellaUpgradeResponse
==============
*/
bdUpgradeUmbrellaResponse *bdUpgradeAnonymousToFull::getUmbrellaUpgradeResponse(bdUpgradeAnonymousToFull *this)
{
  return &this->m_umbrellaResponse;
}

/*
==============
bdUpgradeAnonymousToFull::getUnoUpgradeResponse
==============
*/
bdUpgradeAnonUnoAccResponse *bdUpgradeAnonymousToFull::getUnoUpgradeResponse(bdUpgradeAnonymousToFull *this)
{
  return &this->m_unoResponse;
}

/*
==============
bdUpgradeAnonymousToFull::isPending
==============
*/
bool bdUpgradeAnonymousToFull::isPending(bdUpgradeAnonymousToFull *this)
{
  return (unsigned int)(this->m_upgradeStatus - 4) > 1;
}

/*
==============
bdUpgradeAnonymousToFull::pump
==============
*/
void bdUpgradeAnonymousToFull::pump(bdUpgradeAnonymousToFull *this)
{
  bdUpgradeAnonymousToFull::UpgradeStatus m_upgradeStatus; 
  __int32 v3; 
  __int32 v4; 
  bdLobbyErrorCode ErrorCode; 
  char *m_statusMessage; 
  const char *v7; 
  unsigned __int64 v8; 
  const char *UnoToken; 
  const bdReference<bdRemoteTask> *v10; 
  unsigned __int64 v11; 
  size_t v12; 
  bdRESTRequest *p_request; 
  bdLobbyErrorCode v14; 
  size_t v15; 
  char *v16; 
  unsigned __int64 v17; 
  size_t v18; 
  unsigned __int64 v19; 
  size_t v20; 
  bdCrossPlatformIdentity *CrossPlatformIdentity; 
  const bdReference<bdRemoteTask> *v22; 
  unsigned __int64 v23; 
  size_t v24; 
  bdReference<bdRemoteTask> result; 
  bdReference<bdRemoteTask> v26; 
  __int64 v27; 
  bdUpgradeUmbrellaRequest request; 
  bdUpgradeAnonUnoAccRequest v29; 

  v27 = -2i64;
  m_upgradeStatus = this->m_upgradeStatus;
  if ( m_upgradeStatus == READY )
  {
    bdUpgradeAnonUnoAccRequest::bdUpgradeAnonUnoAccRequest(&v29);
    bdUpgradeAnonUnoAccRequest::setAccountInfo(&v29, &this->m_unoAccountInfo);
    bdUpgradeAnonUnoAccRequest::setAuthToken(&v29, this->m_authToken);
    bdUpgradeAnonUnoAccRequest::setUnoID(&v29, this->m_unoID);
    CrossPlatformIdentity = bdLobbyService::getCrossPlatformIdentity(this->m_lobby);
    this->m_identity = CrossPlatformIdentity;
    v22 = bdCrossPlatformIdentity::upgradeAnonAccToFull(CrossPlatformIdentity, &v26, &v29, &this->m_unoResponse);
    bdReference<bdRemoteTask>::operator=(&this->m_upgradeUnoTask, v22);
    v23 = -1i64;
    if ( v26.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v26.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v26.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))v26.m_ptr->~bdReferencable)(v26.m_ptr, 1i64);
    this->m_upgradeStatus = FETCHING_FIRST_PARTY_TOKEN;
    bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
    do
      ++v23;
    while ( aUpgradingUnoAc[v23] );
    if ( this != (bdUpgradeAnonymousToFull *)-8224i64 )
    {
      v24 = 1023i64;
      if ( v23 < 0x3FF )
        v24 = v23;
      memcpy_0(this->m_statusMessage, "Upgrading Uno account.", v24);
      this->m_statusMessage[v24] = 0;
    }
    this->m_errorCode = bdUpgradeAnonUnoAccResponse::getErrorCode(&this->m_unoResponse);
    bdLobbyService::pump(this->m_lobby);
    bdUnoAccountInfo::~bdUnoAccountInfo(&v29.m_accountInfo);
    p_request = &v29;
    goto LABEL_58;
  }
  v3 = m_upgradeStatus - 1;
  if ( v3 )
  {
    v4 = v3 - 1;
    if ( v4 )
    {
      if ( v4 != 1 )
      {
        bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcrossplatformidentity\\bdupgradeanonymoustofull.cpp", "bdUpgradeAnonymousToFull::pump", 0x6Du, "Pumping in an unknown state!");
        this->m_errorCode = BD_LOGIN_UNKOWN_ERROR;
        return;
      }
      if ( this->m_upgradeUmbrellaTask.m_ptr->getStatus(this->m_upgradeUmbrellaTask.m_ptr) != BD_PENDING )
      {
        ErrorCode = bdRemoteTask::getErrorCode(this->m_upgradeUmbrellaTask.m_ptr);
        this->m_errorCode = bdUpgradeUmbrellaResponse::getErrorCode(&this->m_umbrellaResponse);
        if ( ErrorCode == BD_NO_ERROR )
        {
          this->m_upgradeStatus = AUTHENTICATED;
          return;
        }
        this->m_upgradeStatus = AUTHENTICATING;
        m_statusMessage = this->m_statusMessage;
        bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
        v7 = "Encountered error upgrading Umbrella linked Uno account.";
        v8 = -1i64;
        do
          ++v8;
        while ( aEncounteredErr_7[v8] );
        goto LABEL_28;
      }
LABEL_24:
      bdLobbyService::pump(this->m_lobby);
      return;
    }
    bdUpgradeUmbrellaRequest::bdUpgradeUmbrellaRequest(&request);
    bdUpgradeUmbrellaRequest::setUnoID(&request, this->m_unoID);
    UnoToken = bdUpgradeAnonUnoAccResponse::getUnoToken(&this->m_unoResponse);
    bdUpgradeUmbrellaRequest::setUnoToken(&request, UnoToken);
    bdUpgradeUmbrellaRequest::setRefreshToken(&request, this->m_refreshToken);
    v10 = bdCrossPlatformIdentity::upgradeUmbrellaAccount(this->m_identity, &result, &request, &this->m_umbrellaResponse);
    bdReference<bdRemoteTask>::operator=(&this->m_upgradeUmbrellaTask, v10);
    v11 = -1i64;
    if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
    this->m_upgradeStatus = LOGIN_DELAY;
    bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
    do
      ++v11;
    while ( aUpradingUmbrel[v11] );
    if ( this != (bdUpgradeAnonymousToFull *)-8224i64 )
    {
      v12 = 1023i64;
      if ( v11 < 0x3FF )
        v12 = v11;
      memcpy_0(this->m_statusMessage, "Uprading Umbrella linked Uno account.", v12);
      this->m_statusMessage[v12] = 0;
    }
    this->m_errorCode = bdUpgradeUmbrellaResponse::getErrorCode(&this->m_umbrellaResponse);
    bdLobbyService::pump(this->m_lobby);
    p_request = &request;
LABEL_58:
    bdRESTRequest::~bdRESTRequest(p_request);
    return;
  }
  if ( this->m_upgradeUnoTask.m_ptr->getStatus(this->m_upgradeUnoTask.m_ptr) == BD_PENDING )
    goto LABEL_24;
  v14 = bdRemoteTask::getErrorCode(this->m_upgradeUnoTask.m_ptr);
  this->m_errorCode = bdUpgradeAnonUnoAccResponse::getErrorCode(&this->m_unoResponse);
  if ( v14 )
  {
    this->m_upgradeStatus = AUTHENTICATING;
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
      v15 = 1023i64;
      if ( v8 < 0x3FF )
        v15 = v8;
      memcpy_0(m_statusMessage, v7, v15);
      m_statusMessage[v15] = 0;
    }
    return;
  }
  v16 = this->m_statusMessage;
  if ( *bdUpgradeAnonUnoAccResponse::getUnoToken(&this->m_unoResponse) )
  {
    bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
    v19 = -1i64;
    do
      ++v19;
    while ( aCompletedUnoUp[v19] );
    if ( this != (bdUpgradeAnonymousToFull *)-8224i64 )
    {
      v20 = 1023i64;
      if ( v19 < 0x3FF )
        v20 = v19;
      memcpy_0(this->m_statusMessage, "Completed Uno Upgrade.", v20);
      v16[v20] = 0;
    }
    this->m_upgradeStatus = FIRST_PARTY_AUTHED;
  }
  else
  {
    bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
    v17 = -1i64;
    do
      ++v17;
    while ( aResponseFromUn[v17] );
    if ( this != (bdUpgradeAnonymousToFull *)-8224i64 )
    {
      v18 = 1023i64;
      if ( v17 < 0x3FF )
        v18 = v17;
      memcpy_0(this->m_statusMessage, "Response from Uno Upgrade did not parse as expected.", v18);
      v16[v18] = 0;
    }
    this->m_upgradeStatus = AUTHENTICATING;
  }
}

/*
==============
bdUpgradeAnonymousToFull::setStatusMessage
==============
*/
void bdUpgradeAnonymousToFull::setStatusMessage(bdUpgradeAnonymousToFull *this, const char *message)
{
  bdStrlcpy(this->m_statusMessage, message, 0x400ui64);
}

/*
==============
bdUpgradeAnonymousToFull::succeeded
==============
*/
bool bdUpgradeAnonymousToFull::succeeded(bdUpgradeAnonymousToFull *this)
{
  return this->m_upgradeStatus == AUTHENTICATED;
}

