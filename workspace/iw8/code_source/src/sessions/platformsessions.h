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

  this->m_mainController = __that->m_mainController;
  this->m_secondaryController = __that->m_secondaryController;
  this->m_isHost = __that->m_isHost;
  this->m_isInviteOnly = __that->m_isInviteOnly;
  this->m_numSlots = __that->m_numSlots;
  *(__m256i *)this->m_joinInfo.communicationInfo.session.m_address.addrBuff = *(__m256i *)__that->m_joinInfo.communicationInfo.session.m_address.addrBuff;
  *(__m256i *)&this->m_joinInfo.communicationInfo.session.m_address.addrBuff[32] = *(__m256i *)&__that->m_joinInfo.communicationInfo.session.m_address.addrBuff[32];
  *(_OWORD *)&this->m_joinInfo.communicationInfo.session.m_address.addrBuff[64] = *(_OWORD *)&__that->m_joinInfo.communicationInfo.session.m_address.addrBuff[64];
  *(_DWORD *)&this->m_joinInfo.communicationInfo.session.m_address.addrBuff[80] = *(_DWORD *)&__that->m_joinInfo.communicationInfo.session.m_address.addrBuff[80];
  p_m_security = &this->m_joinInfo.communicationInfo.session.m_security;
  bdSecurityID::bdSecurityID(&this->m_joinInfo.communicationInfo.session.m_security.m_id, &__that->m_joinInfo.communicationInfo.session.m_security.m_id);
  bdSecurityKey::bdSecurityKey(&p_m_security->m_key, &__that->m_joinInfo.communicationInfo.session.m_security.m_key);
  this->m_joinInfo.gameMode[0] = __that->m_joinInfo.gameMode[0];
  this->m_joinInfo.isInMatchmakingArea = __that->m_joinInfo.isInMatchmakingArea;
  this->m_joinInfo.clientPlatform[0] = __that->m_joinInfo.clientPlatform[0];
  this->m_joinInfo.matchmakingLobbyId = __that->m_joinInfo.matchmakingLobbyId;
  this->m_joinInfo.tournamentId = __that->m_joinInfo.tournamentId;
  this->m_joinInfo.isJoinerInInvitersBlocklist = __that->m_joinInfo.isJoinerInInvitersBlocklist;
  this->m_sessionName = __that->m_sessionName;
  this->m_activeSessionType = __that->m_activeSessionType;
  this->xb3SessionId = __that->xb3SessionId;
  this->m_createSessionForPartyRequest = __that->m_createSessionForPartyRequest;
  this->m_lobbyId = __that->m_lobbyId;
  this->m_hostXUID.m_id = __that->m_hostXUID.m_id;
  this->m_platformSessionHandledByPartyHost = __that->m_platformSessionHandledByPartyHost;
  this->m_partyVersionNumber = __that->m_partyVersionNumber;
  this->m_isMatchReady = __that->m_isMatchReady;
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

