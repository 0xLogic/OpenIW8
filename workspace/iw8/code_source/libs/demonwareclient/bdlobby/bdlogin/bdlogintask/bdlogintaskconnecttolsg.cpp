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
  __int64 v15; 
  __int64 v16; 
  char v17[152]; 
  __int64 v18; 
  __int64 v19; 
  __int16 v20; 
  __int64 v21; 
  __int64 v22; 
  __int64 v23; 
  __int64 v24; 
  __int64 v25; 
  __int64 v26; 
  __int64 v27; 
  _BYTE v28[14]; 

  _RSI = this;
  this->__vftable = (bdLoginTaskConnectToLSG_vtbl *)&bdLoginTask::`vftable';
  bdStopwatch::bdStopwatch(&this->m_taskTimer);
  _RSI->m_loginResult = loginResult;
  _RSI->__vftable = (bdLoginTaskConnectToLSG_vtbl *)&bdLoginTaskConnectToLSG::`vftable';
  _RSI->m_loginConfig = loginConfig;
  _RSI->m_firstPartyTokenStatusCode = FETCHING_FIRST_PARTY_TOKEN;
  memset_0(_RSI->m_authInfo.m_data, 0, 0x98ui64);
  v16 = 0i64;
  *(_QWORD *)&_RSI->m_authInfo.m_clientID[8] = 0i64;
  *(_QWORD *)&_RSI->m_authInfo.m_clientID[40] = 0i64;
  *(_QWORD *)&_RSI->m_authInfo.m_clientID[56] = 0i64;
  _RSI->m_lsgConnectionState = UNINITIALIZED;
  _RSI->m_lsgPort = 3074;
  *(_QWORD *)&_RSI->m_reconnectAttempt = 0i64;
  v18 = 0i64;
  v28[8] = 0;
  memset_0(v17, 0, sizeof(v17));
  v19 = 0i64;
  v20 = 0;
  v21 = 0i64;
  v22 = 0i64;
  v23 = 0i64;
  v24 = 0i64;
  v25 = 0i64;
  v26 = 0i64;
  v27 = 0i64;
  *(_QWORD *)v28 = 0i64;
  _RAX = &v16;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymm1, ymmword ptr [rax+80h]
    vmovups ymmword ptr [rsi+30h], ymm0
    vmovups ymm0, ymmword ptr [rax+20h]
    vmovups ymmword ptr [rsi+50h], ymm0
    vmovups ymm0, ymmword ptr [rax+40h]
    vmovups ymmword ptr [rsi+70h], ymm0
    vmovups ymm0, ymmword ptr [rax+60h]
    vmovups ymmword ptr [rsi+90h], ymm0
    vmovups ymmword ptr [rsi+0B0h], ymm1
    vmovups ymm1, ymmword ptr [rax+0A0h]
    vmovups ymmword ptr [rsi+0D0h], ymm1
    vmovups ymm1, ymmword ptr [rax+0C0h]
    vmovups ymmword ptr [rsi+0F0h], ymm1
    vmovups xmm1, xmmword ptr [rax+0E0h]
  }
  v15 = *(_QWORD *)&v28[6];
  __asm { vmovups xmmword ptr [rsi+110h], xmm1 }
  *(_QWORD *)&_RSI->m_authInfo.m_clientID[62] = v15;
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
  __int32 v4; 
  __int32 v5; 
  __int32 v6; 
  const char *function; 
  bdLobbyService *LobbyService; 
  bdLobbyService *v9; 
  bdLobbyConnection::Status v10; 
  bdLobbyService *v11; 
  bdRemoteTaskManager *TaskManager; 
  unsigned __int64 ConnectionID; 
  char v19; 
  char v20; 
  bdLoginTaskConnectToLSG_vtbl *v23; 
  bdLobbyService *v26; 
  bdLobbyService *v27; 
  bdLobbyConnection::Status v28; 
  bdLobbyService *v29; 
  bdLobbyErrorCode ErrorCode; 
  const char *v31; 
  bdLobbyService *v32; 
  bdRemoteTaskManager *v33; 
  unsigned __int64 v34; 
  bdLobbyService *v35; 
  unsigned int TitleID; 
  bdLoginResult *m_loginResult; 
  unsigned __int64 UserID; 
  bdLoginResult *v40; 
  const char *AccountType; 
  const char *ClientID; 
  bdLobbyService *v51; 
  unsigned int line; 
  char *format; 
  double v54; 
  bdGetHostByName::bdStatus status; 

  _RDI = this;
  m_lsgConnectionState = this->m_lsgConnectionState;
  if ( m_lsgConnectionState == UNINITIALIZED )
  {
    bdStopwatch::start(&_RDI->m_taskTimer);
    bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskconnecttolsg.cpp", "bdLoginTaskConnectToLSG::pump", 0x34u, "Starting Lobby DNS lookup");
    bdLoginTaskConnectToLSG::startLobbyDnsLookup(_RDI);
    return;
  }
  v4 = m_lsgConnectionState - 1;
  if ( v4 )
  {
    v5 = v4 - 1;
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( v6 )
      {
        if ( v6 != 2 )
        {
          format = "pumping in an unknown state!";
          function = "bdLoginTaskConnectToLSG::pump";
          line = 80;
LABEL_25:
          bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskconnecttolsg.cpp", function, line, format);
          return;
        }
        LobbyService = bdLoginResult::getLobbyService(_RDI->m_loginResult);
        bdLobbyService::pump(LobbyService);
        v9 = bdLoginResult::getLobbyService(_RDI->m_loginResult);
        v10 = bdLobbyService::getStatus(v9);
        if ( v10 == BD_NO_ERROR )
          goto LABEL_13;
        if ( v10 == BD_TOO_MANY_TASKS )
        {
          bdLogMessage(BD_LOG_WARNING, "warn/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskconnecttolsg.cpp", "bdLoginTaskConnectToLSG::pumpConnected", 0xE9u, "Lobby connection re-connecting after being connected, this shouldn't happen");
          _RDI->m_lsgConnectionState = CONNECTING;
          return;
        }
        if ( v10 != BD_NOT_CONNECTED )
        {
          if ( (unsigned int)(v10 - 3) > 1 )
          {
            format = "Unknown lobby connection state";
            function = "bdLoginTaskConnectToLSG::pumpConnected";
            line = 241;
            goto LABEL_25;
          }
LABEL_13:
          v11 = bdLoginResult::getLobbyService(_RDI->m_loginResult);
          TaskManager = bdLobbyService::getTaskManager(v11);
          ConnectionID = bdRemoteTaskManager::getConnectionID(TaskManager);
          bdLogMessage(BD_LOG_WARNING, "warn/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskconnecttolsg.cpp", "bdLoginTaskConnectToLSG::pumpConnected", 0xE4u, "Lobby connection lost (connectionID: %I64u)", ConnectionID);
LABEL_14:
          bdLoginTaskConnectToLSG::startReconnectWait(_RDI);
        }
      }
      else
      {
        bdPlatformTiming::getLoResTimeStamp();
        __asm
        {
          vmovss  xmm2, dword ptr [rdi+534h]
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, rax
          vmulss  xmm1, xmm0, cs:__real@3a83126f
          vsubss  xmm0, xmm1, dword ptr [rdi+530h]
          vcomiss xmm0, xmm2
        }
        if ( !(v19 | v20) )
        {
          __asm
          {
            vmulss  xmm2, xmm2, cs:__real@40400000
            vmovss  xmm1, cs:__real@42700000
          }
          v23 = _RDI->__vftable;
          __asm
          {
            vcmpltss xmm0, xmm1, xmm2
            vblendvps xmm0, xmm2, xmm1, xmm0
            vmovss  dword ptr [rdi+534h], xmm0
          }
          v23->abortTask(_RDI);
          bdLoginTaskConnectToLSG::startLobbyDnsLookup(_RDI);
        }
      }
    }
    else
    {
      v26 = bdLoginResult::getLobbyService(_RDI->m_loginResult);
      bdLobbyService::pump(v26);
      v27 = bdLoginResult::getLobbyService(_RDI->m_loginResult);
      v28 = bdLobbyService::getStatus(v27);
      if ( v28 == BD_NO_ERROR )
        goto LABEL_21;
      if ( v28 == BD_NOT_CONNECTED )
      {
        v32 = bdLoginResult::getLobbyService(_RDI->m_loginResult);
        v33 = bdLobbyService::getTaskManager(v32);
        v34 = bdRemoteTaskManager::getConnectionID(v33);
        bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskconnecttolsg.cpp", "bdLoginTaskConnectToLSG::pumpConnecting", 0xCBu, "Setting state to CONNECTED");
        bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskconnecttolsg.cpp", "bdLoginTaskConnectToLSG::pumpConnecting", 0xCCu, "Connected to lobby (connectionID: %I64u)", v34);
        _RDI->m_lsgConnectionState = DISCONNECTING;
        bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskconnecttolsg.cpp", "bdLoginTaskConnectToLSG::pump", 0x40u, "Setting state to CONNECTED");
        _RDI->m_lsgConnectionState = DISCONNECTING;
        return;
      }
      if ( (unsigned int)(v28 - 3) <= 1 )
      {
LABEL_21:
        v29 = bdLoginResult::getLobbyService(_RDI->m_loginResult);
        ErrorCode = bdLobbyService::getErrorCode(v29);
        v31 = bdLobbyErrorCodeToString(ErrorCode);
        bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskconnecttolsg.cpp", "bdLoginTaskConnectToLSG::pumpConnecting", 0xC2u, "Error connecting to lobby: %s (%u)", v31, ErrorCode);
        goto LABEL_14;
      }
    }
  }
  else
  {
    if ( !bdLoginResult::getLobbyService(_RDI->m_loginResult) )
    {
      format = "LobbyService should not be null";
      function = "bdLoginTaskConnectToLSG::pumpLobbyDnsLookup";
      line = 126;
      goto LABEL_25;
    }
    v35 = bdLoginResult::getLobbyService(_RDI->m_loginResult);
    if ( bdLobbyService::pumpDNSLookup(v35, &status) && status != BD_LOOKUP_PENDING )
    {
      if ( status == BD_LOOKUP_SUCCEEDED )
      {
        TitleID = bdLoginResult::getTitleID(_RDI->m_loginResult);
        m_loginResult = _RDI->m_loginResult;
        _RDI->m_authInfo.m_titleID = TitleID;
        UserID = bdLoginResult::getUserID(m_loginResult);
        v40 = _RDI->m_loginResult;
        _RDI->m_authInfo.m_userID = UserID;
        AccountType = bdLoginResult::getAccountType(v40);
        bdStrlcpy(_RDI->m_authInfo.m_accountType, AccountType, 0xAui64);
        ClientID = bdLoginResult::getClientID(_RDI->m_loginResult);
        bdStrlcpy(_RDI->m_authInfo.m_clientID, ClientID, 0x40ui64);
        _RAX = _RDI->m_loginResult;
        __asm
        {
          vmovups xmm0, xmmword ptr [rax+1B08h]
          vmovups xmmword ptr [rdi+0B8h], xmm0
          vmovsd  xmm1, qword ptr [rax+1B18h]
          vmovsd  qword ptr [rdi+0C8h], xmm1
        }
        _RCX = _RDI->m_loginResult;
        _RDI->m_authInfo.m_authSessionKeyKDF = _RCX->m_authSessionKeyKDF;
        _RDI->m_authInfo.m_IVSeed = _RCX->m_IVSeed;
        __asm
        {
          vmovups ymm0, ymmword ptr [rcx+1A88h]
          vmovups ymmword ptr [rdi+38h], ymm0
          vmovups ymm1, ymmword ptr [rcx+1AA8h]
          vmovups ymmword ptr [rdi+58h], ymm1
          vmovups ymm0, ymmword ptr [rcx+1AC8h]
          vmovups ymmword ptr [rdi+78h], ymm0
          vmovups ymm1, ymmword ptr [rcx+1AE8h]
          vmovups ymmword ptr [rdi+98h], ymm1
        }
        bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskconnecttolsg.cpp", "bdLoginTaskConnectToLSG::startConnecting", 0xABu, "Connecting to lobby: titleID[%d], userID[%I64u]", _RDI->m_authInfo.m_titleID, _RDI->m_authInfo.m_userID);
        v51 = bdLoginResult::getLobbyService(_RDI->m_loginResult);
        if ( bdLobbyService::connect(v51, &_RDI->m_authInfo, 1) )
        {
          _RDI->m_lsgConnectionState = CONNECTING;
          bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskconnecttolsg.cpp", "bdLoginTaskConnectToLSG::startConnecting", 0xAFu, "Setting state to CONNECTING");
        }
        else
        {
          bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskconnecttolsg.cpp", "bdLoginTaskConnectToLSG::startConnecting", 0xB3u, "Error starting lobby connection");
        }
      }
      else
      {
        bdSnprintf(_RDI->m_lsgStatusMessage, 0x400ui64, "Lobby DNS Lookup Error (status: %u)", (unsigned int)status);
        bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskconnecttolsg.cpp", "bdLoginTaskConnectToLSG::pumpLobbyDnsLookup", 0x94u, _RDI->m_lsgStatusMessage);
        bdHandleAssert(_RDI->m_lsgStatusMessage != NULL, "(messageInfo != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskconnecttolsg.cpp", "bdLoginTaskConnectToLSG::updateLSGStatus", 0x12Bu, "Must provide valid message to update lsg task status!");
        _RDI->m_lsgConnectionState = CONNECTED;
        bdStrlcpy(_RDI->m_lsgStatusMessage, _RDI->m_lsgStatusMessage, 0x400ui64);
        *(double *)&_XMM0 = bdStopwatch::getElapsedTimeInSeconds(&_RDI->m_taskTimer);
        __asm
        {
          vcvtss2sd xmm1, xmm0, xmm0
          vmovsd  [rsp+58h+var_20], xmm1
        }
        bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskconnecttolsg.cpp", "bdLoginTaskConnectToLSG::updateLSGStatus", 0x133u, "Task finished after %2.1f seconds", v54);
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
  double v6; 
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
  *(double *)&_XMM0 = bdStopwatch::getElapsedTimeInSeconds(&this->m_taskTimer);
  __asm
  {
    vcvtss2sd xmm1, xmm0, xmm0
    vmovsd  [rsp+48h+var_10], xmm1
  }
  bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskconnecttolsg.cpp", "bdLoginTaskConnectToLSG::updateLSGStatus", 0x133u, "Task finished after %2.1f seconds", v6);
  return 0;
}

/*
==============
bdLoginTaskConnectToLSG::pumpReconnectWait
==============
*/
char bdLoginTaskConnectToLSG::pumpReconnectWait(bdLoginTaskConnectToLSG *this)
{
  char v8; 
  char v9; 

  _RBX = this;
  bdPlatformTiming::getLoResTimeStamp();
  __asm
  {
    vmovss  xmm2, dword ptr [rbx+534h]
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm1, xmm0, cs:__real@3a83126f
    vsubss  xmm0, xmm1, dword ptr [rbx+530h]
    vcomiss xmm0, xmm2
  }
  if ( v8 | v9 )
    return 0;
  __asm
  {
    vmulss  xmm2, xmm2, cs:__real@40400000
    vmovss  xmm1, cs:__real@42700000
    vcmpltss xmm0, xmm1, xmm2
    vblendvps xmm0, xmm2, xmm1, xmm0
    vmovss  dword ptr [rbx+534h], xmm0
  }
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
  __int64 v12; 
  __int64 v13; 
  char v14[152]; 
  __int64 v15; 
  __int64 v16; 
  __int16 v17; 
  __int64 v18; 
  __int64 v19; 
  __int64 v20; 
  __int64 v21; 
  __int64 v22; 
  __int64 v23; 
  __int64 v24; 
  _QWORD v25[3]; 

  _RBX = this;
  v13 = 0i64;
  v15 = 0i64;
  LOBYTE(v25[1]) = 0;
  memset_0(v14, 0, sizeof(v14));
  m_loginResult = _RBX->m_loginResult;
  v16 = 0i64;
  v17 = 0;
  v18 = 0i64;
  v19 = 0i64;
  v20 = 0i64;
  v21 = 0i64;
  v22 = 0i64;
  v23 = 0i64;
  v24 = 0i64;
  v25[0] = 0i64;
  _RAX = &v13;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymm1, ymmword ptr [rax+80h]
    vmovups ymmword ptr [rbx+30h], ymm0
    vmovups ymm0, ymmword ptr [rax+20h]
    vmovups ymmword ptr [rbx+50h], ymm0
    vmovups ymm0, ymmword ptr [rax+40h]
    vmovups ymmword ptr [rbx+70h], ymm0
    vmovups ymm0, ymmword ptr [rax+60h]
    vmovups ymmword ptr [rbx+90h], ymm0
    vmovups ymmword ptr [rbx+0B0h], ymm1
    vmovups ymm1, ymmword ptr [rax+0A0h]
    vmovups ymmword ptr [rbx+0D0h], ymm1
    vmovups ymm1, ymmword ptr [rax+0C0h]
    vmovups ymmword ptr [rbx+0F0h], ymm1
    vmovups xmm1, xmmword ptr [rax+0E0h]
  }
  v12 = *(_QWORD *)((char *)v25 + 6);
  __asm { vmovups xmmword ptr [rbx+110h], xmm1 }
  *(_QWORD *)&_RBX->m_authInfo.m_clientID[62] = v12;
  *(_QWORD *)&_RBX->m_reconnectAttempt = 0i64;
  bdLoginResult::resetLobbyService(m_loginResult);
  _RBX->m_lsgConnectionState = UNINITIALIZED;
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
  bdLobbyService *LobbyService; 
  unsigned int m_titleID; 

  _RDI = this;
  TitleID = bdLoginResult::getTitleID(this->m_loginResult);
  m_loginResult = _RDI->m_loginResult;
  _RDI->m_authInfo.m_titleID = TitleID;
  UserID = bdLoginResult::getUserID(m_loginResult);
  v5 = _RDI->m_loginResult;
  _RDI->m_authInfo.m_userID = UserID;
  AccountType = bdLoginResult::getAccountType(v5);
  bdStrlcpy(_RDI->m_authInfo.m_accountType, AccountType, 0xAui64);
  ClientID = bdLoginResult::getClientID(_RDI->m_loginResult);
  bdStrlcpy(_RDI->m_authInfo.m_clientID, ClientID, 0x40ui64);
  _RAX = _RDI->m_loginResult;
  __asm
  {
    vmovups xmm0, xmmword ptr [rax+1B08h]
    vmovups xmmword ptr [rdi+0B8h], xmm0
    vmovsd  xmm1, qword ptr [rax+1B18h]
    vmovsd  qword ptr [rdi+0C8h], xmm1
  }
  _RCX = _RDI->m_loginResult;
  _RDI->m_authInfo.m_authSessionKeyKDF = _RCX->m_authSessionKeyKDF;
  _RDI->m_authInfo.m_IVSeed = _RCX->m_IVSeed;
  __asm
  {
    vmovups ymm0, ymmword ptr [rcx+1A88h]
    vmovups ymmword ptr [rdi+38h], ymm0
    vmovups ymm1, ymmword ptr [rcx+1AA8h]
    vmovups ymmword ptr [rdi+58h], ymm1
    vmovups ymm0, ymmword ptr [rcx+1AC8h]
    vmovups ymmword ptr [rdi+78h], ymm0
    vmovups ymm1, ymmword ptr [rcx+1AE8h]
    vmovups ymmword ptr [rdi+98h], ymm1
  }
  m_titleID = _RDI->m_authInfo.m_titleID;
  bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskconnecttolsg.cpp", "bdLoginTaskConnectToLSG::startConnecting", 0xABu, "Connecting to lobby: titleID[%d], userID[%I64u]", m_titleID, _RDI->m_authInfo.m_userID);
  LobbyService = bdLoginResult::getLobbyService(_RDI->m_loginResult);
  if ( bdLobbyService::connect(LobbyService, &_RDI->m_authInfo, 1) )
  {
    _RDI->m_lsgConnectionState = CONNECTING;
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
  char v10; 
  char v11; 
  unsigned int m_reconnectAttempt; 
  bdTrulyRandomImpl *v14; 
  bdSingletonRegistryImpl *Instance; 
  unsigned int v22; 
  double v23; 

  __asm { vmovaps [rsp+78h+var_18], xmm6 }
  _RBX = this;
  bdPlatformTiming::getLoResTimeStamp();
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm6, xmm0, cs:__real@3a83126f
    vsubss  xmm2, xmm6, dword ptr [rbx+530h]
    vmovss  xmm0, dword ptr [rbx+534h]
    vmulss  xmm1, xmm0, cs:__real@40400000
    vcomiss xmm2, xmm1
  }
  if ( v10 | v11 )
  {
    m_reconnectAttempt = _RBX->m_reconnectAttempt;
  }
  else
  {
    _RBX->m_reconnectAttempt = 0;
    _RBX->m_reconnectAttemptWait = 3.0;
    m_reconnectAttempt = 0;
  }
  _RBX->m_reconnectAttempt = m_reconnectAttempt + 1;
  if ( m_reconnectAttempt != -1 )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskconnecttolsg.cpp", "bdLoginTaskConnectToLSG::startReconnectWait", 0x103u, "Lobby connection retry limit exceeded, not trying again");
    _RBX->m_lsgConnectionState = CONNECTED;
    __asm { vmovaps xmm6, [rsp+78h+var_18] }
    return;
  }
  bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskconnecttolsg.cpp", "bdLoginTaskConnectToLSG::startReconnectWait", 0x108u, "Setting state to RECONNECTING");
  _RBX->m_lsgConnectionState = WAITING_FOR_REPORT_CONSOLE_DETAILS;
  if ( !bdSingleton<bdTrulyRandomImpl>::m_instance )
  {
    v14 = (bdTrulyRandomImpl *)bdMemory::allocate(1ui64);
    if ( v14 )
      bdTrulyRandomImpl::bdTrulyRandomImpl(v14);
    bdSingleton<bdTrulyRandomImpl>::m_instance = v14;
    if ( !v14 )
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
  bdTrulyRandomImpl::getRandomUInt(bdSingleton<bdTrulyRandomImpl>::m_instance);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm1, xmm0, cs:__real@34fa0005
    vaddss  xmm2, xmm1, dword ptr [rbx+534h]
    vmovss  dword ptr [rbx+534h], xmm2
    vcvtss2sd xmm0, xmm2, xmm2
    vmovsd  [rsp+78h+var_30], xmm0
  }
  v22 = _RBX->m_reconnectAttempt;
  bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskconnecttolsg.cpp", "bdLoginTaskConnectToLSG::startReconnectWait", 0x112u, "Lobby connection retry %u/%u in %.1f seconds", v22, 0i64, v23);
  __asm
  {
    vmovss  dword ptr [rbx+530h], xmm6
    vmovaps xmm6, [rsp+78h+var_18]
  }
}

/*
==============
bdLoginTaskConnectToLSG::updateLSGStatus
==============
*/
void bdLoginTaskConnectToLSG::updateLSGStatus(bdLoginTaskConnectToLSG *this, const char *messageInfo, const bdLoginTaskConnectToLSG::LSGConnectionState *code)
{
  double v8; 

  bdHandleAssert(messageInfo != NULL, "(messageInfo != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskconnecttolsg.cpp", "bdLoginTaskConnectToLSG::updateLSGStatus", 0x12Bu, "Must provide valid message to update lsg task status!");
  this->m_lsgConnectionState = *code;
  bdStrlcpy(this->m_lsgStatusMessage, messageInfo, 0x400ui64);
  if ( (unsigned int)(*code - 4) <= 1 )
  {
    *(double *)&_XMM0 = bdStopwatch::getElapsedTimeInSeconds(&this->m_taskTimer);
    __asm
    {
      vcvtss2sd xmm1, xmm0, xmm0
      vmovsd  [rsp+48h+var_10], xmm1
    }
    bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskconnecttolsg.cpp", "bdLoginTaskConnectToLSG::updateLSGStatus", 0x133u, "Task finished after %2.1f seconds", v8);
  }
}

