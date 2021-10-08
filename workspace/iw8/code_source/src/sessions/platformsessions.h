/*
==============
sessionParameters::sessionParameters
==============
*/

void __fastcall sessionParameters::sessionParameters(sessionParameters *this, const sessionParameters *__that)
{
  ??0sessionParameters@@QEAA@AEBU0@@Z(this, __that);
}

/*
==============
sessionParameters::Clear
==============
*/

void __fastcall sessionParameters::Clear(sessionParameters *this)
{
  ?Clear@sessionParameters@@QEAAXXZ(this);
}

/*
==============
sessionParameters::~sessionParameters
==============
*/

void __fastcall sessionParameters::~sessionParameters(sessionParameters *this)
{
  ??1sessionParameters@@QEAA@XZ(this);
}

/*
==============
sessionParameters::sessionParameters
==============
*/

void __fastcall sessionParameters::sessionParameters(sessionParameters *this)
{
  ??0sessionParameters@@QEAA@XZ(this);
}

/*
==============
sessionParameters::sessionParameters
==============
*/
void sessionParameters::sessionParameters(sessionParameters *this, const sessionParameters *__that)
{
  XSECURITY_INFO *p_m_security; 

  _RSI = __that;
  _R14 = this;
  this->m_mainController = __that->m_mainController;
  this->m_secondaryController = __that->m_secondaryController;
  this->m_isHost = __that->m_isHost;
  this->m_isInviteOnly = __that->m_isInviteOnly;
  this->m_numSlots = __that->m_numSlots;
  __asm
  {
    vmovups ymm0, ymmword ptr [rdx+10h]
    vmovups ymmword ptr [rcx+10h], ymm0
    vmovups ymm1, ymmword ptr [rdx+30h]
    vmovups ymmword ptr [rcx+30h], ymm1
    vmovups xmm0, xmmword ptr [rdx+50h]
    vmovups xmmword ptr [rcx+50h], xmm0
  }
  *(_DWORD *)&this->m_joinInfo.communicationInfo.session.m_address.addrBuff[80] = *(_DWORD *)&__that->m_joinInfo.communicationInfo.session.m_address.addrBuff[80];
  p_m_security = &this->m_joinInfo.communicationInfo.session.m_security;
  bdSecurityID::bdSecurityID(&this->m_joinInfo.communicationInfo.session.m_security.m_id, &__that->m_joinInfo.communicationInfo.session.m_security.m_id);
  bdSecurityKey::bdSecurityKey(&p_m_security->m_key, &_RSI->m_joinInfo.communicationInfo.session.m_security.m_key);
  _R14->m_joinInfo.gameMode[0] = _RSI->m_joinInfo.gameMode[0];
  _R14->m_joinInfo.isInMatchmakingArea = _RSI->m_joinInfo.isInMatchmakingArea;
  _R14->m_joinInfo.clientPlatform[0] = _RSI->m_joinInfo.clientPlatform[0];
  _R14->m_joinInfo.matchmakingLobbyId = _RSI->m_joinInfo.matchmakingLobbyId;
  _R14->m_joinInfo.tournamentId = _RSI->m_joinInfo.tournamentId;
  _R14->m_joinInfo.isJoinerInInvitersBlocklist = _RSI->m_joinInfo.isJoinerInInvitersBlocklist;
  _R14->m_sessionName = _RSI->m_sessionName;
  _R14->m_activeSessionType = _RSI->m_activeSessionType;
  __asm
  {
    vmovups xmm0, xmmword ptr [rsi+0A4h]
    vmovups xmmword ptr [r14+0A4h], xmm0
  }
  _R14->m_createSessionForPartyRequest = _RSI->m_createSessionForPartyRequest;
  _R14->m_lobbyId = _RSI->m_lobbyId;
  _R14->m_hostXUID.m_id = _RSI->m_hostXUID.m_id;
  _R14->m_platformSessionHandledByPartyHost = _RSI->m_platformSessionHandledByPartyHost;
  _R14->m_partyVersionNumber = _RSI->m_partyVersionNumber;
  _R14->m_isMatchReady = _RSI->m_isMatchReady;
}

/*
==============
sessionParameters::sessionParameters
==============
*/
void sessionParameters::sessionParameters(sessionParameters *this)
{
  OnlineJoinInfo *p_m_joinInfo; 
  XSECURITY_INFO *p_m_security; 
  const XUID *v4; 
  XUID result; 

  p_m_joinInfo = &this->m_joinInfo;
  p_m_security = &this->m_joinInfo.communicationInfo.session.m_security;
  result.m_id = (unsigned __int64)&this->m_joinInfo.communicationInfo.session.m_security;
  bdSecurityID::bdSecurityID(&this->m_joinInfo.communicationInfo.session.m_security.m_id);
  bdSecurityKey::bdSecurityKey(&p_m_security->m_key);
  XUID::XUID(&this->m_hostXUID);
  *(_QWORD *)&this->m_mainController = -1i64;
  *(_WORD *)&this->m_isHost = 0;
  this->m_numSlots = -1;
  memset_0(p_m_joinInfo, 0, sizeof(OnlineJoinInfo));
  this->m_sessionName = NULL;
  this->m_activeSessionType = NO_SESSION;
  *(_QWORD *)&this->xb3SessionId.Data1 = 0i64;
  *(_QWORD *)this->xb3SessionId.Data4 = 0i64;
  this->m_createSessionForPartyRequest = NULL;
  this->m_lobbyId = 0i64;
  v4 = XUID::NullXUID(&result);
  XUID::operator=(&this->m_hostXUID, v4);
  this->m_platformSessionHandledByPartyHost = 0;
  this->m_isMatchReady = 0;
}

/*
==============
sessionParameters::~sessionParameters
==============
*/
void sessionParameters::~sessionParameters(sessionParameters *this)
{
  XSECURITY_INFO *p_m_security; 

  p_m_security = &this->m_joinInfo.communicationInfo.session.m_security;
  bdSecurityKey::~bdSecurityKey(&this->m_joinInfo.communicationInfo.session.m_security.m_key);
  bdSecurityID::~bdSecurityID(&p_m_security->m_id);
}

/*
==============
sessionParameters::Clear
==============
*/
void sessionParameters::Clear(sessionParameters *this)
{
  const XUID *v2; 
  XUID result; 

  *(_QWORD *)&this->m_mainController = -1i64;
  *(_WORD *)&this->m_isHost = 0;
  this->m_numSlots = -1;
  memset_0(&this->m_joinInfo, 0, sizeof(this->m_joinInfo));
  this->m_sessionName = NULL;
  this->m_activeSessionType = NO_SESSION;
  *(_QWORD *)&this->xb3SessionId.Data1 = 0i64;
  *(_QWORD *)this->xb3SessionId.Data4 = 0i64;
  this->m_createSessionForPartyRequest = NULL;
  this->m_lobbyId = 0i64;
  v2 = XUID::NullXUID(&result);
  XUID::operator=(&this->m_hostXUID, v2);
  this->m_platformSessionHandledByPartyHost = 0;
  this->m_isMatchReady = 0;
}

