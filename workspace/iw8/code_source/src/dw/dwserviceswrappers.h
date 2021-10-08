/*
==============
DWLogin::DWLogin
==============
*/

void __fastcall DWLogin::DWLogin(DWLogin *this)
{
  ??0DWLogin@@QEAA@XZ(this);
}

/*
==============
DWUmbrella::shouldRegisterForPump
==============
*/

bool __fastcall DWUmbrella::shouldRegisterForPump(DWUmbrella *this)
{
  return ?shouldRegisterForPump@DWUmbrella@@UEAA_NXZ(this);
}

/*
==============
BaseDWWrapper::shouldRegisterForPump
==============
*/

bool __fastcall BaseDWWrapper::shouldRegisterForPump(BaseDWWrapper *this)
{
  return ?shouldRegisterForPump@BaseDWWrapper@@UEAA_NXZ(this);
}

/*
==============
DWDataChannelDispatch::DataChannelDispatchInstances::DataChannelDispatchInstances
==============
*/

void __fastcall DWDataChannelDispatch::DataChannelDispatchInstances::DataChannelDispatchInstances(DWDataChannelDispatch::DataChannelDispatchInstances *this)
{
  ??0DataChannelDispatchInstances@DWDataChannelDispatch@@QEAA@XZ(this);
}

/*
==============
DWGameMetrics::isReady
==============
*/

bool __fastcall DWGameMetrics::isReady(DWGameMetrics *this)
{
  return ?isReady@DWGameMetrics@@UEBA_NXZ(this);
}

/*
==============
DWLobbyServiceHandle::~DWLobbyServiceHandle
==============
*/

void __fastcall DWLobbyServiceHandle::~DWLobbyServiceHandle(DWLobbyServiceHandle *this)
{
  ??1DWLobbyServiceHandle@@QEAA@XZ(this);
}

/*
==============
BaseDWWrapper::pump
==============
*/

void __fastcall BaseDWWrapper::pump(BaseDWWrapper *this)
{
  ?pump@BaseDWWrapper@@UEAAXXZ(this);
}

/*
==============
DWGameMetrics::shouldRegisterForPump
==============
*/

bool __fastcall DWGameMetrics::shouldRegisterForPump(DWGameMetrics *this)
{
  return ?shouldRegisterForPump@DWGameMetrics@@UEAA_NXZ(this);
}

/*
==============
DWLobbyService::shouldRegisterForPump
==============
*/

bool __fastcall DWLobbyService::shouldRegisterForPump(DWLobbyService *this)
{
  return ?shouldRegisterForPump@DWLobbyService@@UEAA_NXZ(this);
}

/*
==============
DWContentStreaming::shouldRegisterForPump
==============
*/

bool __fastcall DWContentStreaming::shouldRegisterForPump(DWContentStreaming *this)
{
  return ?shouldRegisterForPump@DWContentStreaming@@UEAA_NXZ(this);
}

/*
==============
DWUno::shouldRegisterForPump
==============
*/

bool __fastcall DWUno::shouldRegisterForPump(DWUno *this)
{
  return ?shouldRegisterForPump@DWUno@@UEAA_NXZ(this);
}

/*
==============
DWDataChannelDispatch::shouldRegisterForPump
==============
*/

bool __fastcall DWDataChannelDispatch::shouldRegisterForPump(DWDataChannelDispatch *this)
{
  return ?shouldRegisterForPump@DWDataChannelDispatch@@MEAA_NXZ(this);
}

/*
==============
DWStandaloneUmbrella::shouldRegisterForPump
==============
*/

bool __fastcall DWStandaloneUmbrella::shouldRegisterForPump(DWStandaloneUmbrella *this)
{
  return ?shouldRegisterForPump@DWStandaloneUmbrella@@MEAA_NXZ(this);
}

/*
==============
DWLobbyServiceHandle::~DWLobbyServiceHandle
==============
*/
void DWLobbyServiceHandle::~DWLobbyServiceHandle(DWLobbyServiceHandle *this)
{
  DWLobbyService::releaseAccess(this->m_lobbyService);
}

/*
==============
BaseDWWrapper::pump
==============
*/
void BaseDWWrapper::pump(BaseDWWrapper *this)
{
  ;
}

/*
==============
BaseDWWrapper::shouldRegisterForPump
==============
*/
bool BaseDWWrapper::shouldRegisterForPump(BaseDWWrapper *this)
{
  return 0;
}

/*
==============
DWContentStreaming::shouldRegisterForPump
==============
*/
char DWContentStreaming::shouldRegisterForPump(DWContentStreaming *this)
{
  return 1;
}

/*
==============
DWLobbyService::shouldRegisterForPump
==============
*/
char DWLobbyService::shouldRegisterForPump(DWLobbyService *this)
{
  return 1;
}

/*
==============
DWUmbrella::shouldRegisterForPump
==============
*/
char DWUmbrella::shouldRegisterForPump(DWUmbrella *this)
{
  return 1;
}

/*
==============
DWUno::shouldRegisterForPump
==============
*/
char DWUno::shouldRegisterForPump(DWUno *this)
{
  return 1;
}

/*
==============
DWGameMetrics::shouldRegisterForPump
==============
*/
char DWGameMetrics::shouldRegisterForPump(DWGameMetrics *this)
{
  return 1;
}

/*
==============
DWGameMetrics::isReady
==============
*/
bool DWGameMetrics::isReady(DWGameMetrics *this)
{
  return this->m_gameMetrics != NULL;
}

/*
==============
DWStandaloneUmbrella::shouldRegisterForPump
==============
*/
char DWStandaloneUmbrella::shouldRegisterForPump(DWStandaloneUmbrella *this)
{
  return 1;
}

/*
==============
DWDataChannelDispatch::shouldRegisterForPump
==============
*/
char DWDataChannelDispatch::shouldRegisterForPump(DWDataChannelDispatch *this)
{
  return 1;
}

/*
==============
DWLogin::DWLogin
==============
*/
void DWLogin::DWLogin(DWLogin *this)
{
  this->__vftable = (DWLogin_vtbl *)&DWLogin::`vftable';
  this->m_owningWrapper = NULL;
  this->m_login = NULL;
  *(_WORD *)&this->m_pending = 0;
  *(_QWORD *)&this->m_cachedClientId[1] = 0i64;
  *(_QWORD *)&this->m_cachedClientId[9] = 0i64;
  *(_QWORD *)&this->m_cachedClientId[17] = 0i64;
  *(_QWORD *)&this->m_cachedClientId[25] = 0i64;
  *(_QWORD *)&this->m_cachedClientId[33] = 0i64;
  *(_QWORD *)&this->m_cachedClientId[41] = 0i64;
  *(_QWORD *)&this->m_cachedClientId[49] = 0i64;
  *(_DWORD *)&this->m_cachedClientId[57] = 0;
  *(_WORD *)&this->m_cachedClientId[61] = 0;
  this->m_cachedClientId[63] = 0;
  this->m_previousStatus = READY;
}

/*
==============
DWDataChannelDispatch::DataChannelDispatchInstances::DataChannelDispatchInstances
==============
*/
void DWDataChannelDispatch::DataChannelDispatchInstances::DataChannelDispatchInstances(DWDataChannelDispatch::DataChannelDispatchInstances *this)
{
  this->m_dispatch = NULL;
  this->m_inUse = 0;
}

