/*
==============
bdLoginTaskConnectToLSG::reset
==============
*/

void __fastcall bdLoginTaskConnectToLSG::reset(bdLoginTaskConnectToLSG *this)
{
  ?reset@bdLoginTaskConnectToLSG@@UEAAXXZ(this);
}

/*
==============
bdLoginTaskConnectToLSG::~bdLoginTaskConnectToLSG
==============
*/

void __fastcall bdLoginTaskConnectToLSG::~bdLoginTaskConnectToLSG(bdLoginTaskConnectToLSG *this)
{
  ??1bdLoginTaskConnectToLSG@@UEAA@XZ(this);
}

/*
==============
bdLoginTaskConnectToLSG::updateLSGStatus
==============
*/

void __fastcall bdLoginTaskConnectToLSG::updateLSGStatus(bdLoginTaskConnectToLSG *this, const char *messageInfo, const bdLoginTaskConnectToLSG::LSGConnectionState *code)
{
  ?updateLSGStatus@bdLoginTaskConnectToLSG@@IEAAXPEBDAEBW4LSGConnectionState@1@@Z(this, messageInfo, code);
}

/*
==============
bdLoginTaskConnectToLSG::abortTask
==============
*/

void __fastcall bdLoginTaskConnectToLSG::abortTask(bdLoginTaskConnectToLSG *this)
{
  ?abortTask@bdLoginTaskConnectToLSG@@UEAAXXZ(this);
}

/*
==============
bdLoginTaskConnectToLSG::startReconnectWait
==============
*/

void __fastcall bdLoginTaskConnectToLSG::startReconnectWait(bdLoginTaskConnectToLSG *this)
{
  ?startReconnectWait@bdLoginTaskConnectToLSG@@IEAAXXZ(this);
}

/*
==============
bdLoginTaskConnectToLSG::registerHandlers
==============
*/

void __fastcall bdLoginTaskConnectToLSG::registerHandlers(bdLoginTaskConnectToLSG *this)
{
  ?registerHandlers@bdLoginTaskConnectToLSG@@IEAAXXZ(this);
}

/*
==============
bdLoginTaskConnectToLSG::bdLoginTaskConnectToLSG
==============
*/

void __fastcall bdLoginTaskConnectToLSG::bdLoginTaskConnectToLSG(bdLoginTaskConnectToLSG *this, const bdLoginConfig *loginConfig, bdLoginResult *loginResult)
{
  ??0bdLoginTaskConnectToLSG@@QEAA@PEBVbdLoginConfig@@PEAVbdLoginResult@@@Z(this, loginConfig, loginResult);
}

/*
==============
bdLoginTaskConnectToLSG::startLobbyDnsLookup
==============
*/

void __fastcall bdLoginTaskConnectToLSG::startLobbyDnsLookup(bdLoginTaskConnectToLSG *this)
{
  ?startLobbyDnsLookup@bdLoginTaskConnectToLSG@@IEAAXXZ(this);
}

/*
==============
bdLoginTaskConnectToLSG::pumpReconnectWait
==============
*/

bool __fastcall bdLoginTaskConnectToLSG::pumpReconnectWait(bdLoginTaskConnectToLSG *this)
{
  return ?pumpReconnectWait@bdLoginTaskConnectToLSG@@IEAA_NXZ(this);
}

/*
==============
bdLoginTaskConnectToLSG::startConnecting
==============
*/

void __fastcall bdLoginTaskConnectToLSG::startConnecting(bdLoginTaskConnectToLSG *this)
{
  ?startConnecting@bdLoginTaskConnectToLSG@@IEAAXXZ(this);
}

/*
==============
bdLoginTaskConnectToLSG::getTaskMessage
==============
*/

const char *__fastcall bdLoginTaskConnectToLSG::getTaskMessage(bdLoginTaskConnectToLSG *this)
{
  return ?getTaskMessage@bdLoginTaskConnectToLSG@@UEBAPEBDXZ(this);
}

/*
==============
bdLoginTaskConnectToLSG::pump
==============
*/

void __fastcall bdLoginTaskConnectToLSG::pump(bdLoginTaskConnectToLSG *this)
{
  ?pump@bdLoginTaskConnectToLSG@@UEAAXXZ(this);
}

/*
==============
bdLoginTaskConnectToLSG::pumpLobbyDnsLookup
==============
*/

bool __fastcall bdLoginTaskConnectToLSG::pumpLobbyDnsLookup(bdLoginTaskConnectToLSG *this)
{
  return ?pumpLobbyDnsLookup@bdLoginTaskConnectToLSG@@IEAA_NXZ(this);
}

/*
==============
bdLoginTaskConnectToLSG::pumpConnecting
==============
*/

bool __fastcall bdLoginTaskConnectToLSG::pumpConnecting(bdLoginTaskConnectToLSG *this)
{
  return ?pumpConnecting@bdLoginTaskConnectToLSG@@IEAA_NXZ(this);
}

/*
==============
bdLoginTaskConnectToLSG::getTaskCode
==============
*/

bdLoginTaskConnectToLSG::LSGConnectionState __fastcall bdLoginTaskConnectToLSG::getTaskCode(bdLoginTaskConnectToLSG *this)
{
  return ?getTaskCode@bdLoginTaskConnectToLSG@@QEBA?AW4LSGConnectionState@1@XZ(this);
}

/*
==============
bdLoginTaskConnectToLSG::setState
==============
*/

void __fastcall bdLoginTaskConnectToLSG::setState(bdLoginTaskConnectToLSG *this, const bdLoginTaskConnectToLSG::LSGConnectionState *state)
{
  ?setState@bdLoginTaskConnectToLSG@@IEAAXAEBW4LSGConnectionState@1@@Z(this, state);
}

/*
==============
bdLoginTaskConnectToLSG::pumpConnected
==============
*/

void __fastcall bdLoginTaskConnectToLSG::pumpConnected(bdLoginTaskConnectToLSG *this)
{
  ?pumpConnected@bdLoginTaskConnectToLSG@@IEAAXXZ(this);
}

/*
==============
bdLoginTaskConnectToLSG::bdLoginTaskConnectToLSG
==============
*/
void bdLoginTaskConnectToLSG::bdLoginTaskConnectToLSG(bdLoginTaskConnectToLSG *this, const bdLoginConfig *loginConfig, bdLoginResult *loginResult)
{
  __m256i v6; 
  __int64 v7; 
  _BYTE v8[160]; 
  _BYTE v9[88]; 

  this->__vftable = (bdLoginTaskConnectToLSG_vtbl *)&bdLoginTask::`vftable';
  bdStopwatch::bdStopwatch(&this->m_taskTimer);
  this->m_loginResult = loginResult;
  this->__vftable = (bdLoginTaskConnectToLSG_vtbl *)&bdLoginTaskConnectToLSG::`vftable';
  this->m_loginConfig = loginConfig;
  this->m_firstPartyTokenStatusCode = FETCHING_FIRST_PARTY_TOKEN;
  memset_0(this->m_authInfo.m_data, 0, 0x98ui64);
  *(_QWORD *)v8 = 0i64;
  *(_QWORD *)&this->m_authInfo.m_clientID[8] = 0i64;
  *(_QWORD *)&this->m_authInfo.m_clientID[40] = 0i64;
  *(_QWORD *)&this->m_authInfo.m_clientID[56] = 0i64;
  this->m_lsgConnectionState = UNINITIALIZED;
  this->m_lsgPort = 3074;
  *(_QWORD *)&this->m_reconnectAttempt = 0i64;
  *(_QWORD *)v9 = 0i64;
  v9[82] = 0;
  memset_0(&v8[8], 0, 0x98ui64);
  memset(&v9[8], 0, 74);
  v6 = *(__m256i *)&v8[128];
  *(__m256i *)&this->m_authInfo.m_titleID = *(__m256i *)v8;
  *(__m256i *)&this->m_authInfo.m_data[24] = *(__m256i *)&v8[32];
  *(__m256i *)&this->m_authInfo.m_data[56] = *(__m256i *)&v8[64];
  *(__m256i *)&this->m_authInfo.m_data[88] = *(__m256i *)&v8[96];
  *(__m256i *)&this->m_authInfo.m_data[120] = v6;
  *(__m256i *)&this->m_authInfo.m_userID = *(__m256i *)v9;
  *(__m256i *)&this->m_authInfo.m_clientID[14] = *(__m256i *)&v9[32];
  v7 = *(_QWORD *)&v9[80];
  *(_OWORD *)&this->m_authInfo.m_clientID[46] = *(_OWORD *)&v9[64];
  *(_QWORD *)&this->m_authInfo.m_clientID[62] = v7;
}

/*
==============
bdLoginTaskConnectToLSG::~bdLoginTaskConnectToLSG
==============
*/
void bdLoginTaskConnectToLSG::~bdLoginTaskConnectToLSG(bdLoginTaskConnectToLSG *this)
{
  this->__vftable = (bdLoginTaskConnectToLSG_vtbl *)&bdLoginTaskConnectToLSG::`vftable';
  bdLoginResult::resetLobbyService(this->m_loginResult);
  bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskconnecttolsg.cpp", "bdLoginTaskConnectToLSG::abortTask", 0x1Fu, "Setting state to NOT_CONNECTED");
  this->m_lsgConnectionState = UNINITIALIZED;
  this->__vftable = (bdLoginTaskConnectToLSG_vtbl *)&bdLoginTask::`vftable';
}

/*
==============
bdLoginTaskConnectToLSG::abortTask
==============
*/
void bdLoginTaskConnectToLSG::abortTask(bdLoginTaskConnectToLSG *this)
{
  bdLoginResult::resetLobbyService(this->m_loginResult);
  bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskconnecttolsg.cpp", "bdLoginTaskConnectToLSG::abortTask", 0x1Fu, "Setting state to NOT_CONNECTED");
  this->m_lsgConnectionState = UNINITIALIZED;
}

/*
==============
bdLoginTaskConnectToLSG::getTaskCode
==============
*/
__int64 bdLoginTaskConnectToLSG::getTaskCode(bdLoginTaskConnectToLSG *this)
{
  return (unsigned int)this->m_lsgConnectionState;
}

/*
==============
bdLoginTaskConnectToLSG::getTaskMessage
==============
*/
char *bdLoginTaskConnectToLSG::getTaskMessage(bdLoginTaskConnectToLSG *this)
{
  return this->m_lsgStatusMessage;
}

/*
==============
bdLoginTaskConnectToLSG::pump
==============
*/
void bdLoginTaskConnectToLSG::pump(bdLoginTaskConnectToLSG *this)
{
  bdLoginTaskConnectToLSG::LSGConnectionState m_lsgConnectionState; 
  __int32 v3; 
  __int32 v4; 
  __int32 v5; 
  const char *function; 
  bdLobbyService *LobbyService; 
  bdLobbyService *v8; 
  bdLobbyConnection::Status v9; 
  bdLobbyService *v10; 
  bdRemoteTaskManager *TaskManager; 
  unsigned __int64 ConnectionID; 
  unsigned int LoResTimeStamp; 
  float m_reconnectAttemptWait; 
  float v15; 
  __int128 m_reconnectAttemptWait_low; 
  bdLoginTaskConnectToLSG_vtbl *v19; 
  bdLobbyService *v22; 
  bdLobbyService *v23; 
  bdLobbyConnection::Status v24; 
  bdLobbyService *v25; 
  bdLobbyErrorCode ErrorCode; 
  const char *v27; 
  bdLobbyService *v28; 
  bdRemoteTaskManager *v29; 
  unsigned __int64 v30; 
  bdLobbyService *v31; 
  double ElapsedTimeInSeconds; 
  unsigned int TitleID; 
  bdLoginResult *m_loginResult; 
  unsigned __int64 UserID; 
  bdLoginResult *v36; 
  const char *AccountType; 
  const char *ClientID; 
  bdLoginResult *v39; 
  bdLoginResult *v40; 
  bdLobbyService *v41; 
  unsigned int line; 
  char *format; 
  bdGetHostByName::bdStatus status; 

  m_lsgConnectionState = this->m_lsgConnectionState;
  if ( m_lsgConnectionState == UNINITIALIZED )
  {
    bdStopwatch::start(&this->m_taskTimer);
    bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskconnecttolsg.cpp", "bdLoginTaskConnectToLSG::pump", 0x34u, "Starting Lobby DNS lookup");
    bdLoginTaskConnectToLSG::startLobbyDnsLookup(this);
    return;
  }
  v3 = m_lsgConnectionState - 1;
  if ( v3 )
  {
    v4 = v3 - 1;
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( v5 )
      {
        if ( v5 != 2 )
        {
          format = "pumping in an unknown state!";
          function = "bdLoginTaskConnectToLSG::pump";
          line = 80;
LABEL_25:
          bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskconnecttolsg.cpp", function, line, format);
          return;
        }
        LobbyService = bdLoginResult::getLobbyService(this->m_loginResult);
        bdLobbyService::pump(LobbyService);
        v8 = bdLoginResult::getLobbyService(this->m_loginResult);
        v9 = bdLobbyService::getStatus(v8);
        if ( v9 == BD_NO_ERROR )
          goto LABEL_13;
        if ( v9 == BD_TOO_MANY_TASKS )
        {
          bdLogMessage(BD_LOG_WARNING, "warn/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskconnecttolsg.cpp", "bdLoginTaskConnectToLSG::pumpConnected", 0xE9u, "Lobby connection re-connecting after being connected, this shouldn't happen");
          this->m_lsgConnectionState = CONNECTING;
          return;
        }
        if ( v9 != BD_NOT_CONNECTED )
        {
          if ( (unsigned int)(v9 - 3) > 1 )
          {
            format = "Unknown lobby connection state";
            function = "bdLoginTaskConnectToLSG::pumpConnected";
            line = 241;
            goto LABEL_25;
          }
LABEL_13:
          v10 = bdLoginResult::getLobbyService(this->m_loginResult);
          TaskManager = bdLobbyService::getTaskManager(v10);
          ConnectionID = bdRemoteTaskManager::getConnectionID(TaskManager);
          bdLogMessage(BD_LOG_WARNING, "warn/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskconnecttolsg.cpp", "bdLoginTaskConnectToLSG::pumpConnected", 0xE4u, "Lobby connection lost (connectionID: %I64u)", ConnectionID);
LABEL_14:
          bdLoginTaskConnectToLSG::startReconnectWait(this);
        }
      }
      else
      {
        LoResTimeStamp = bdPlatformTiming::getLoResTimeStamp();
        m_reconnectAttemptWait = this->m_reconnectAttemptWait;
        v15 = (float)LoResTimeStamp;
        if ( (float)((float)(v15 * 0.001) - this->m_reconnectAttemptTimestamp) > m_reconnectAttemptWait )
        {
          m_reconnectAttemptWait_low = LODWORD(this->m_reconnectAttemptWait);
          *(float *)&m_reconnectAttemptWait_low = m_reconnectAttemptWait * 3.0;
          _XMM2 = m_reconnectAttemptWait_low;
          _XMM1 = LODWORD(FLOAT_60_0);
          v19 = this->__vftable;
          __asm
          {
            vcmpltss xmm0, xmm1, xmm2
            vblendvps xmm0, xmm2, xmm1, xmm0
          }
          this->m_reconnectAttemptWait = *(float *)&_XMM0;
          v19->abortTask(this);
          bdLoginTaskConnectToLSG::startLobbyDnsLookup(this);
        }
      }
    }
    else
    {
      v22 = bdLoginResult::getLobbyService(this->m_loginResult);
      bdLobbyService::pump(v22);
      v23 = bdLoginResult::getLobbyService(this->m_loginResult);
      v24 = bdLobbyService::getStatus(v23);
      if ( v24 == BD_NO_ERROR )
        goto LABEL_21;
      if ( v24 == BD_NOT_CONNECTED )
      {
        v28 = bdLoginResult::getLobbyService(this->m_loginResult);
        v29 = bdLobbyService::getTaskManager(v28);
        v30 = bdRemoteTaskManager::getConnectionID(v29);
        bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskconnecttolsg.cpp", "bdLoginTaskConnectToLSG::pumpConnecting", 0xCBu, "Setting state to CONNECTED");
        bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskconnecttolsg.cpp", "bdLoginTaskConnectToLSG::pumpConnecting", 0xCCu, "Connected to lobby (connectionID: %I64u)", v30);
        this->m_lsgConnectionState = DISCONNECTING;
        bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskconnecttolsg.cpp", "bdLoginTaskConnectToLSG::pump", 0x40u, "Setting state to CONNECTED");
        this->m_lsgConnectionState = DISCONNECTING;
        return;
      }
      if ( (unsigned int)(v24 - 3) <= 1 )
      {
LABEL_21:
        v25 = bdLoginResult::getLobbyService(this->m_loginResult);
        ErrorCode = bdLobbyService::getErrorCode(v25);
        v27 = bdLobbyErrorCodeToString(ErrorCode);
        bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskconnecttolsg.cpp", "bdLoginTaskConnectToLSG::pumpConnecting", 0xC2u, "Error connecting to lobby: %s (%u)", v27, ErrorCode);
        goto LABEL_14;
      }
    }
  }
  else
  {
    if ( !bdLoginResult::getLobbyService(this->m_loginResult) )
    {
      format = "LobbyService should not be null";
      function = "bdLoginTaskConnectToLSG::pumpLobbyDnsLookup";
      line = 126;
      goto LABEL_25;
    }
    v31 = bdLoginResult::getLobbyService(this->m_loginResult);
    if ( bdLobbyService::pumpDNSLookup(v31, &status) && status != BD_LOOKUP_PENDING )
    {
      if ( status == BD_LOOKUP_SUCCEEDED )
      {
        TitleID = bdLoginResult::getTitleID(this->m_loginResult);
        m_loginResult = this->m_loginResult;
        this->m_authInfo.m_titleID = TitleID;
        UserID = bdLoginResult::getUserID(m_loginResult);
        v36 = this->m_loginResult;
        this->m_authInfo.m_userID = UserID;
        AccountType = bdLoginResult::getAccountType(v36);
        bdStrlcpy(this->m_authInfo.m_accountType, AccountType, 0xAui64);
        ClientID = bdLoginResult::getClientID(this->m_loginResult);
        bdStrlcpy(this->m_authInfo.m_clientID, ClientID, 0x40ui64);
        v39 = this->m_loginResult;
        *(_OWORD *)this->m_authInfo.m_sessionKey = *(_OWORD *)v39->m_sessionKey;
        *(double *)&this->m_authInfo.m_sessionKey[16] = *(double *)&v39->m_sessionKey[16];
        v40 = this->m_loginResult;
        this->m_authInfo.m_authSessionKeyKDF = v40->m_authSessionKeyKDF;
        this->m_authInfo.m_IVSeed = v40->m_IVSeed;
        *(__m256i *)this->m_authInfo.m_data = *(__m256i *)v40->m_data;
        *(__m256i *)&this->m_authInfo.m_data[32] = *(__m256i *)&v40->m_data[32];
        *(__m256i *)&this->m_authInfo.m_data[64] = *(__m256i *)&v40->m_data[64];
        *(__m256i *)&this->m_authInfo.m_data[96] = *(__m256i *)&v40->m_data[96];
        bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskconnecttolsg.cpp", "bdLoginTaskConnectToLSG::startConnecting", 0xABu, "Connecting to lobby: titleID[%d], userID[%I64u]", this->m_authInfo.m_titleID, this->m_authInfo.m_userID);
        v41 = bdLoginResult::getLobbyService(this->m_loginResult);
        if ( bdLobbyService::connect(v41, &this->m_authInfo, 1) )
        {
          this->m_lsgConnectionState = CONNECTING;
          bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskconnecttolsg.cpp", "bdLoginTaskConnectToLSG::startConnecting", 0xAFu, "Setting state to CONNECTING");
        }
        else
        {
          bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskconnecttolsg.cpp", "bdLoginTaskConnectToLSG::startConnecting", 0xB3u, "Error starting lobby connection");
        }
      }
      else
      {
        bdSnprintf(this->m_lsgStatusMessage, 0x400ui64, "Lobby DNS Lookup Error (status: %u)", (unsigned int)status);
        bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskconnecttolsg.cpp", "bdLoginTaskConnectToLSG::pumpLobbyDnsLookup", 0x94u, this->m_lsgStatusMessage);
        bdHandleAssert(this->m_lsgStatusMessage != NULL, "(messageInfo != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskconnecttolsg.cpp", "bdLoginTaskConnectToLSG::updateLSGStatus", 0x12Bu, "Must provide valid message to update lsg task status!");
        this->m_lsgConnectionState = CONNECTED;
        bdStrlcpy(this->m_lsgStatusMessage, this->m_lsgStatusMessage, 0x400ui64);
        ElapsedTimeInSeconds = bdStopwatch::getElapsedTimeInSeconds(&this->m_taskTimer);
        bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskconnecttolsg.cpp", "bdLoginTaskConnectToLSG::updateLSGStatus", 0x133u, "Task finished after %2.1f seconds", *(float *)&ElapsedTimeInSeconds);
      }
    }
  }
}

/*
==============
bdLoginTaskConnectToLSG::pumpConnected
==============
*/
void bdLoginTaskConnectToLSG::pumpConnected(bdLoginTaskConnectToLSG *this)
{
  bdLobbyService *LobbyService; 
  bdLobbyService *v3; 
  bdLobbyConnection::Status Status; 
  bdLobbyService *v5; 
  bdRemoteTaskManager *TaskManager; 
  unsigned __int64 ConnectionID; 

  LobbyService = bdLoginResult::getLobbyService(this->m_loginResult);
  bdLobbyService::pump(LobbyService);
  v3 = bdLoginResult::getLobbyService(this->m_loginResult);
  Status = bdLobbyService::getStatus(v3);
  if ( Status )
  {
    if ( Status == BD_TOO_MANY_TASKS )
    {
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskconnecttolsg.cpp", "bdLoginTaskConnectToLSG::pumpConnected", 0xE9u, "Lobby connection re-connecting after being connected, this shouldn't happen");
      this->m_lsgConnectionState = CONNECTING;
      return;
    }
    if ( Status == BD_NOT_CONNECTED )
      return;
    if ( (unsigned int)(Status - 3) > 1 )
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskconnecttolsg.cpp", "bdLoginTaskConnectToLSG::pumpConnected", 0xF1u, "Unknown lobby connection state");
      return;
    }
  }
  v5 = bdLoginResult::getLobbyService(this->m_loginResult);
  TaskManager = bdLobbyService::getTaskManager(v5);
  ConnectionID = bdRemoteTaskManager::getConnectionID(TaskManager);
  bdLogMessage(BD_LOG_WARNING, "warn/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskconnecttolsg.cpp", "bdLoginTaskConnectToLSG::pumpConnected", 0xE4u, "Lobby connection lost (connectionID: %I64u)", ConnectionID);
  bdLoginTaskConnectToLSG::startReconnectWait(this);
}

/*
==============
bdLoginTaskConnectToLSG::pumpConnecting
==============
*/
bool bdLoginTaskConnectToLSG::pumpConnecting(bdLoginTaskConnectToLSG *this)
{
  bdLobbyService *LobbyService; 
  bdLobbyService *v3; 
  bdLobbyConnection::Status Status; 
  bdLobbyService *v5; 
  bdLobbyErrorCode ErrorCode; 
  const char *v7; 
  bool result; 
  bdLobbyService *v9; 
  bdRemoteTaskManager *TaskManager; 
  unsigned __int64 ConnectionID; 
  bdLobbyErrorCode v12; 

  LobbyService = bdLoginResult::getLobbyService(this->m_loginResult);
  bdLobbyService::pump(LobbyService);
  v3 = bdLoginResult::getLobbyService(this->m_loginResult);
  Status = bdLobbyService::getStatus(v3);
  if ( Status == BD_NO_ERROR )
    goto LABEL_4;
  if ( Status != BD_NOT_CONNECTED )
  {
    if ( (unsigned int)(Status - 3) > 1 )
      return 0;
LABEL_4:
    v5 = bdLoginResult::getLobbyService(this->m_loginResult);
    ErrorCode = bdLobbyService::getErrorCode(v5);
    v7 = bdLobbyErrorCodeToString(ErrorCode);
    v12 = ErrorCode;
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskconnecttolsg.cpp", "bdLoginTaskConnectToLSG::pumpConnecting", 0xC2u, "Error connecting to lobby: %s (%u)", v7, v12);
    bdLoginTaskConnectToLSG::startReconnectWait(this);
    return 0;
  }
  v9 = bdLoginResult::getLobbyService(this->m_loginResult);
  TaskManager = bdLobbyService::getTaskManager(v9);
  ConnectionID = bdRemoteTaskManager::getConnectionID(TaskManager);
  bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskconnecttolsg.cpp", "bdLoginTaskConnectToLSG::pumpConnecting", 0xCBu, "Setting state to CONNECTED");
  bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskconnecttolsg.cpp", "bdLoginTaskConnectToLSG::pumpConnecting", 0xCCu, "Connected to lobby (connectionID: %I64u)", ConnectionID);
  result = 1;
  this->m_lsgConnectionState = DISCONNECTING;
  return result;
}

/*
==============
bdLoginTaskConnectToLSG::pumpLobbyDnsLookup
==============
*/
char bdLoginTaskConnectToLSG::pumpLobbyDnsLookup(bdLoginTaskConnectToLSG *this)
{
  bdLobbyService *LobbyService; 
  double ElapsedTimeInSeconds; 
  bdGetHostByName::bdStatus status; 

  if ( !bdLoginResult::getLobbyService(this->m_loginResult) )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskconnecttolsg.cpp", "bdLoginTaskConnectToLSG::pumpLobbyDnsLookup", 0x7Eu, "LobbyService should not be null");
    return 0;
  }
  LobbyService = bdLoginResult::getLobbyService(this->m_loginResult);
  if ( !bdLobbyService::pumpDNSLookup(LobbyService, &status) || status == BD_LOOKUP_PENDING )
    return 0;
  if ( status == BD_LOOKUP_SUCCEEDED )
    return 1;
  bdSnprintf(this->m_lsgStatusMessage, 0x400ui64, "Lobby DNS Lookup Error (status: %u)", (unsigned int)status);
  bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskconnecttolsg.cpp", "bdLoginTaskConnectToLSG::pumpLobbyDnsLookup", 0x94u, this->m_lsgStatusMessage);
  bdHandleAssert(this->m_lsgStatusMessage != NULL, "(messageInfo != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskconnecttolsg.cpp", "bdLoginTaskConnectToLSG::updateLSGStatus", 0x12Bu, "Must provide valid message to update lsg task status!");
  this->m_lsgConnectionState = CONNECTED;
  bdStrlcpy(this->m_lsgStatusMessage, this->m_lsgStatusMessage, 0x400ui64);
  ElapsedTimeInSeconds = bdStopwatch::getElapsedTimeInSeconds(&this->m_taskTimer);
  bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskconnecttolsg.cpp", "bdLoginTaskConnectToLSG::updateLSGStatus", 0x133u, "Task finished after %2.1f seconds", *(float *)&ElapsedTimeInSeconds);
  return 0;
}

/*
==============
bdLoginTaskConnectToLSG::pumpReconnectWait
==============
*/
char bdLoginTaskConnectToLSG::pumpReconnectWait(bdLoginTaskConnectToLSG *this)
{
  unsigned int LoResTimeStamp; 
  float m_reconnectAttemptWait; 
  float v4; 
  __int128 m_reconnectAttemptWait_low; 

  LoResTimeStamp = bdPlatformTiming::getLoResTimeStamp();
  m_reconnectAttemptWait = this->m_reconnectAttemptWait;
  v4 = (float)LoResTimeStamp;
  if ( (float)((float)(v4 * 0.001) - this->m_reconnectAttemptTimestamp) <= m_reconnectAttemptWait )
    return 0;
  m_reconnectAttemptWait_low = LODWORD(this->m_reconnectAttemptWait);
  *(float *)&m_reconnectAttemptWait_low = m_reconnectAttemptWait * 3.0;
  _XMM2 = m_reconnectAttemptWait_low;
  _XMM1 = LODWORD(FLOAT_60_0);
  __asm
  {
    vcmpltss xmm0, xmm1, xmm2
    vblendvps xmm0, xmm2, xmm1, xmm0
  }
  this->m_reconnectAttemptWait = *(float *)&_XMM0;
  return 1;
}

/*
==============
bdLoginTaskConnectToLSG::registerHandlers
==============
*/
void bdLoginTaskConnectToLSG::registerHandlers(bdLoginTaskConnectToLSG *this)
{
  bdLobbyService *m_lobbyService; 
  bdLobbyEventHandler *LobbyEventHandler; 
  unsigned __int16 v4; 
  unsigned int v5; 
  bdLobbyService *v6; 
  const bdFastArray<bdPushMessageHandler *> *LobbyPushMessageHandlers; 

  m_lobbyService = this->m_loginResult->m_lobbyService;
  LobbyEventHandler = bdLoginConfig::getLobbyEventHandler((bdLoginConfig *)this->m_loginConfig);
  bdLobbyService::registerEventHandler(m_lobbyService, LobbyEventHandler);
  v4 = 0;
  if ( bdLoginConfig::getLobbyPushMessageHandlers((bdLoginConfig *)this->m_loginConfig)->m_size )
  {
    v5 = 0;
    do
    {
      v6 = this->m_loginResult->m_lobbyService;
      LobbyPushMessageHandlers = bdLoginConfig::getLobbyPushMessageHandlers((bdLoginConfig *)this->m_loginConfig);
      bdHandleAssert(v5 < LobbyPushMessageHandlers->m_size, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdfastarray.inl", "bdFastArray<class bdPushMessageHandler *>::operator []", 0x58u, "bdFastArray<T>::operator[], rangecheck failed");
      bdLobbyService::registerPushMessageHandler(v6, LobbyPushMessageHandlers->m_data[v5]);
      v5 = ++v4;
    }
    while ( v4 < bdLoginConfig::getLobbyPushMessageHandlers((bdLoginConfig *)this->m_loginConfig)->m_size );
  }
}

/*
==============
bdLoginTaskConnectToLSG::reset
==============
*/
void bdLoginTaskConnectToLSG::reset(bdLoginTaskConnectToLSG *this)
{
  bdLoginResult *m_loginResult; 
  __m256i v3; 
  __int64 v4; 
  _BYTE v5[160]; 
  _BYTE v6[88]; 

  *(_QWORD *)v5 = 0i64;
  *(_QWORD *)v6 = 0i64;
  v6[82] = 0;
  memset_0(&v5[8], 0, 0x98ui64);
  m_loginResult = this->m_loginResult;
  memset(&v6[8], 0, 74);
  v3 = *(__m256i *)&v5[128];
  *(__m256i *)&this->m_authInfo.m_titleID = *(__m256i *)v5;
  *(__m256i *)&this->m_authInfo.m_data[24] = *(__m256i *)&v5[32];
  *(__m256i *)&this->m_authInfo.m_data[56] = *(__m256i *)&v5[64];
  *(__m256i *)&this->m_authInfo.m_data[88] = *(__m256i *)&v5[96];
  *(__m256i *)&this->m_authInfo.m_data[120] = v3;
  *(__m256i *)&this->m_authInfo.m_userID = *(__m256i *)v6;
  *(__m256i *)&this->m_authInfo.m_clientID[14] = *(__m256i *)&v6[32];
  v4 = *(_QWORD *)&v6[80];
  *(_OWORD *)&this->m_authInfo.m_clientID[46] = *(_OWORD *)&v6[64];
  *(_QWORD *)&this->m_authInfo.m_clientID[62] = v4;
  *(_QWORD *)&this->m_reconnectAttempt = 0i64;
  bdLoginResult::resetLobbyService(m_loginResult);
  this->m_lsgConnectionState = UNINITIALIZED;
}

/*
==============
bdLoginTaskConnectToLSG::setState
==============
*/
void bdLoginTaskConnectToLSG::setState(bdLoginTaskConnectToLSG *this, const bdLoginTaskConnectToLSG::LSGConnectionState *state)
{
  this->m_lsgConnectionState = *state;
}

/*
==============
bdLoginTaskConnectToLSG::startConnecting
==============
*/
void bdLoginTaskConnectToLSG::startConnecting(bdLoginTaskConnectToLSG *this)
{
  unsigned int TitleID; 
  bdLoginResult *m_loginResult; 
  unsigned __int64 UserID; 
  bdLoginResult *v5; 
  const char *AccountType; 
  const char *ClientID; 
  bdLoginResult *v8; 
  bdLoginResult *v9; 
  bdLobbyService *LobbyService; 
  unsigned int m_titleID; 

  TitleID = bdLoginResult::getTitleID(this->m_loginResult);
  m_loginResult = this->m_loginResult;
  this->m_authInfo.m_titleID = TitleID;
  UserID = bdLoginResult::getUserID(m_loginResult);
  v5 = this->m_loginResult;
  this->m_authInfo.m_userID = UserID;
  AccountType = bdLoginResult::getAccountType(v5);
  bdStrlcpy(this->m_authInfo.m_accountType, AccountType, 0xAui64);
  ClientID = bdLoginResult::getClientID(this->m_loginResult);
  bdStrlcpy(this->m_authInfo.m_clientID, ClientID, 0x40ui64);
  v8 = this->m_loginResult;
  *(_OWORD *)this->m_authInfo.m_sessionKey = *(_OWORD *)v8->m_sessionKey;
  *(double *)&this->m_authInfo.m_sessionKey[16] = *(double *)&v8->m_sessionKey[16];
  v9 = this->m_loginResult;
  this->m_authInfo.m_authSessionKeyKDF = v9->m_authSessionKeyKDF;
  this->m_authInfo.m_IVSeed = v9->m_IVSeed;
  *(__m256i *)this->m_authInfo.m_data = *(__m256i *)v9->m_data;
  *(__m256i *)&this->m_authInfo.m_data[32] = *(__m256i *)&v9->m_data[32];
  *(__m256i *)&this->m_authInfo.m_data[64] = *(__m256i *)&v9->m_data[64];
  *(__m256i *)&this->m_authInfo.m_data[96] = *(__m256i *)&v9->m_data[96];
  m_titleID = this->m_authInfo.m_titleID;
  bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskconnecttolsg.cpp", "bdLoginTaskConnectToLSG::startConnecting", 0xABu, "Connecting to lobby: titleID[%d], userID[%I64u]", m_titleID, this->m_authInfo.m_userID);
  LobbyService = bdLoginResult::getLobbyService(this->m_loginResult);
  if ( bdLobbyService::connect(LobbyService, &this->m_authInfo, 1) )
  {
    this->m_lsgConnectionState = CONNECTING;
    bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskconnecttolsg.cpp", "bdLoginTaskConnectToLSG::startConnecting", 0xAFu, "Setting state to CONNECTING");
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskconnecttolsg.cpp", "bdLoginTaskConnectToLSG::startConnecting", 0xB3u, "Error starting lobby connection");
  }
}

/*
==============
bdLoginTaskConnectToLSG::startLobbyDnsLookup
==============
*/
void bdLoginTaskConnectToLSG::startLobbyDnsLookup(bdLoginTaskConnectToLSG *this)
{
  const char *LSGAddress; 
  __int64 v3; 
  bdLobbyService *v4; 
  unsigned __int16 v5; 
  unsigned __int16 m_lsgPort; 
  const char *v7; 
  bdLobbyService *v8; 
  bdLobbyService *v9; 
  bdLobbyService *v10; 
  unsigned __int16 LSGPort; 
  const char *v12; 
  bdLobbyService *v13; 
  bdLobbyService *v14; 
  bdLobbyService *m_lobbyService; 
  bdLobbyEventHandler *LobbyEventHandler; 
  unsigned int v17; 
  bdLobbyService *v18; 
  const bdFastArray<bdPushMessageHandler *> *LobbyPushMessageHandlers; 

  this->m_lsgConnectionState = NOT_CONNECTED;
  bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskconnecttolsg.cpp", "bdLoginTaskConnectToLSG::startLobbyDnsLookup", 0x62u, "Setting state to DNS_LOOKUP");
  if ( bdLoginResult::getLobbyService(this->m_loginResult) )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskconnecttolsg.cpp", "bdLoginTaskConnectToLSG::startLobbyDnsLookup", 0x65u, "Lobby Service exists, deleting and recreating");
    bdLoginResult::resetLobbyService(this->m_loginResult);
  }
  LSGAddress = bdLoginResult::getLSGAddress(this->m_loginResult);
  bdHandleAssert(LSGAddress != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v3 = -1i64;
  do
    ++v3;
  while ( LSGAddress[v3] );
  if ( v3 )
  {
    v4 = (bdLobbyService *)bdMemory::allocate(0x1840ui64);
    v5 = 0;
    if ( v4 )
    {
      m_lsgPort = this->m_lsgPort;
      v7 = bdLoginResult::getLSGAddress(this->m_loginResult);
      bdLobbyService::bdLobbyService(v4, v7, m_lsgPort);
      v9 = v8;
    }
    else
    {
      v9 = NULL;
    }
    this->m_loginResult->m_lobbyService = v9;
    bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskconnecttolsg.cpp", "bdLoginTaskConnectToLSG::startLobbyDnsLookup", 0x6Du, "LSG discovery enabled, using LSG connection settings retrieved from Auth");
  }
  else
  {
    v10 = (bdLobbyService *)bdMemory::allocate(0x1840ui64);
    v5 = 0;
    if ( v10 )
    {
      LSGPort = bdLoginConfig::getLSGPort((bdLoginConfig *)this->m_loginConfig);
      v12 = bdLoginConfig::getLSGAddress((bdLoginConfig *)this->m_loginConfig);
      bdLobbyService::bdLobbyService(v10, v12, LSGPort);
      v14 = v13;
    }
    else
    {
      v14 = NULL;
    }
    this->m_loginResult->m_lobbyService = v14;
    bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskconnecttolsg.cpp", "bdLoginTaskConnectToLSG::startLobbyDnsLookup", 0x73u, "LSG discovery disabled, using LSG connection configured by login builder");
  }
  m_lobbyService = this->m_loginResult->m_lobbyService;
  LobbyEventHandler = bdLoginConfig::getLobbyEventHandler((bdLoginConfig *)this->m_loginConfig);
  bdLobbyService::registerEventHandler(m_lobbyService, LobbyEventHandler);
  if ( bdLoginConfig::getLobbyPushMessageHandlers((bdLoginConfig *)this->m_loginConfig)->m_size )
  {
    v17 = 0;
    do
    {
      v18 = this->m_loginResult->m_lobbyService;
      LobbyPushMessageHandlers = bdLoginConfig::getLobbyPushMessageHandlers((bdLoginConfig *)this->m_loginConfig);
      bdHandleAssert(v17 < LobbyPushMessageHandlers->m_size, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdfastarray.inl", "bdFastArray<class bdPushMessageHandler *>::operator []", 0x58u, "bdFastArray<T>::operator[], rangecheck failed");
      bdLobbyService::registerPushMessageHandler(v18, LobbyPushMessageHandlers->m_data[v17]);
      v17 = ++v5;
    }
    while ( v5 < bdLoginConfig::getLobbyPushMessageHandlers((bdLoginConfig *)this->m_loginConfig)->m_size );
  }
}

/*
==============
bdLoginTaskConnectToLSG::startReconnectWait
==============
*/
void bdLoginTaskConnectToLSG::startReconnectWait(bdLoginTaskConnectToLSG *this)
{
  float LoResTimeStamp; 
  float v3; 
  unsigned int m_reconnectAttempt; 
  bdTrulyRandomImpl *v5; 
  bdSingletonRegistryImpl *Instance; 
  float v7; 
  float v8; 
  unsigned int v9; 

  LoResTimeStamp = (float)bdPlatformTiming::getLoResTimeStamp();
  v3 = LoResTimeStamp * 0.001;
  if ( (float)((float)(LoResTimeStamp * 0.001) - this->m_reconnectAttemptTimestamp) <= (float)(this->m_reconnectAttemptWait * 3.0) )
  {
    m_reconnectAttempt = this->m_reconnectAttempt;
  }
  else
  {
    this->m_reconnectAttempt = 0;
    this->m_reconnectAttemptWait = 3.0;
    m_reconnectAttempt = 0;
  }
  this->m_reconnectAttempt = m_reconnectAttempt + 1;
  if ( m_reconnectAttempt != -1 )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskconnecttolsg.cpp", "bdLoginTaskConnectToLSG::startReconnectWait", 0x103u, "Lobby connection retry limit exceeded, not trying again");
    this->m_lsgConnectionState = CONNECTED;
    return;
  }
  bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskconnecttolsg.cpp", "bdLoginTaskConnectToLSG::startReconnectWait", 0x108u, "Setting state to RECONNECTING");
  this->m_lsgConnectionState = WAITING_FOR_REPORT_CONSOLE_DETAILS;
  if ( !bdSingleton<bdTrulyRandomImpl>::m_instance )
  {
    v5 = (bdTrulyRandomImpl *)bdMemory::allocate(1ui64);
    if ( v5 )
      bdTrulyRandomImpl::bdTrulyRandomImpl(v5);
    bdSingleton<bdTrulyRandomImpl>::m_instance = v5;
    if ( !v5 )
      goto LABEL_12;
    Instance = bdSingleton<bdSingletonRegistryImpl>::getInstance();
    if ( !bdSingletonRegistryImpl::add(Instance, bdSingleton<bdTrulyRandomImpl>::destroyInstance) )
    {
      bdMemory::deallocate(bdSingleton<bdTrulyRandomImpl>::m_instance);
      bdSingleton<bdTrulyRandomImpl>::m_instance = NULL;
LABEL_12:
      DebugBreak();
    }
  }
  v7 = (float)(bdTrulyRandomImpl::getRandomUInt(bdSingleton<bdTrulyRandomImpl>::m_instance) % 0x20C49B);
  v8 = (float)(v7 * 0.00000046566143) + this->m_reconnectAttemptWait;
  this->m_reconnectAttemptWait = v8;
  v9 = this->m_reconnectAttempt;
  bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskconnecttolsg.cpp", "bdLoginTaskConnectToLSG::startReconnectWait", 0x112u, "Lobby connection retry %u/%u in %.1f seconds", v9, 0i64, v8);
  this->m_reconnectAttemptTimestamp = v3;
}

/*
==============
bdLoginTaskConnectToLSG::updateLSGStatus
==============
*/
void bdLoginTaskConnectToLSG::updateLSGStatus(bdLoginTaskConnectToLSG *this, const char *messageInfo, const bdLoginTaskConnectToLSG::LSGConnectionState *code)
{
  double ElapsedTimeInSeconds; 

  bdHandleAssert(messageInfo != NULL, "(messageInfo != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskconnecttolsg.cpp", "bdLoginTaskConnectToLSG::updateLSGStatus", 0x12Bu, "Must provide valid message to update lsg task status!");
  this->m_lsgConnectionState = *code;
  bdStrlcpy(this->m_lsgStatusMessage, messageInfo, 0x400ui64);
  if ( (unsigned int)(*code - 4) <= 1 )
  {
    ElapsedTimeInSeconds = bdStopwatch::getElapsedTimeInSeconds(&this->m_taskTimer);
    bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskconnecttolsg.cpp", "bdLoginTaskConnectToLSG::updateLSGStatus", 0x133u, "Task finished after %2.1f seconds", *(float *)&ElapsedTimeInSeconds);
  }
}

