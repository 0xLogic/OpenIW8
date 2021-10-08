/*
==============
bdNetStartParams::bdNetStartParams
==============
*/

void __fastcall bdNetStartParams::bdNetStartParams(bdNetStartParams *this, const bdNetStartParams *__that)
{
  ??0bdNetStartParams@@QEAA@AEBV0@@Z(this, __that);
}

/*
==============
bdNetStartParams::bdNetStartParams
==============
*/

void __fastcall bdNetStartParams::bdNetStartParams(bdNetStartParams *this)
{
  ??0bdNetStartParams@@QEAA@XZ(this);
}

/*
==============
bdNetStartParams::bdNetStartParams
==============
*/
void bdNetStartParams::bdNetStartParams(bdNetStartParams *this, const bdNetStartParams *__that)
{
  bdArray<bdString> *p_m_natTravHosts; 

  _RDI = __that;
  _RSI = this;
  this->m_onlineGame = __that->m_onlineGame;
  this->m_gamePort = __that->m_gamePort;
  this->m_socket = __that->m_socket;
  p_m_natTravHosts = &__that->m_natTravHosts;
  this->m_natTravHosts.m_capacity = p_m_natTravHosts->m_capacity;
  this->m_natTravHosts.m_size = p_m_natTravHosts->m_size;
  this->m_natTravHosts.m_data = bdArray<bdString>::uninitializedCopy(&this->m_natTravHosts, p_m_natTravHosts);
  _RSI->m_natTravPort = _RDI->m_natTravPort;
  _RSI->m_localAddresses.m_capacity = _RDI->m_localAddresses.m_capacity;
  _RSI->m_localAddresses.m_size = _RDI->m_localAddresses.m_size;
  _RSI->m_localAddresses.m_data = bdArray<bdSockAddr>::uninitializedCopy(&_RSI->m_localAddresses, &_RDI->m_localAddresses);
  bdAddr::bdAddr(&_RSI->m_overridePublicAddr, &_RDI->m_overridePublicAddr);
  _RSI->m_overrideNATType = _RDI->m_overrideNATType;
  _RSI->m_overridePlatformID = _RDI->m_overridePlatformID;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+0D8h]
    vmovss  dword ptr [rsi+0D8h], xmm0
  }
  bdUPnPConfig::bdUPnPConfig(&_RSI->m_UPnPConfig, &_RDI->m_UPnPConfig);
  _RSI->m_useAnyIP = _RDI->m_useAnyIP;
  _RSI->m_useMediaStreamingMode = _RDI->m_useMediaStreamingMode;
  _RSI->m_threadStackSize = _RDI->m_threadStackSize;
  __asm
  {
    vmovups ymm0, ymmword ptr [rdi+198h]
    vmovups ymmword ptr [rsi+198h], ymm0
    vmovups xmm0, xmmword ptr [rdi+1B8h]
    vmovups xmmword ptr [rsi+1B8h], xmm0
    vmovsd  xmm0, qword ptr [rdi+1C8h]
    vmovsd  qword ptr [rsi+1C8h], xmm0
  }
  *(_DWORD *)&_RSI->m_IPDiscoveryConfig.m_version = *(_DWORD *)&_RDI->m_IPDiscoveryConfig.m_version;
}

/*
==============
bdNetStartParams::bdNetStartParams
==============
*/
void bdNetStartParams::bdNetStartParams(bdNetStartParams *this)
{
  bdString value; 

  this->m_onlineGame = 0;
  this->m_gamePort = 3075;
  this->m_socket = NULL;
  this->m_natTravHosts.m_data = NULL;
  *(_QWORD *)&this->m_natTravHosts.m_capacity = 0i64;
  this->m_localAddresses.m_data = NULL;
  *(_QWORD *)&this->m_localAddresses.m_capacity = 0i64;
  bdAddr::bdAddr(&this->m_overridePublicAddr);
  this->m_overrideNATType = BD_NAT_OPEN;
  this->m_overridePlatformID = BD_PLATFORM_ID_XBOXONE;
  bdGetHostByNameConfig::bdGetHostByNameConfig(&this->m_hostNameLookupConfig);
  bdUPnPConfig::bdUPnPConfig(&this->m_UPnPConfig);
  *(_WORD *)&this->m_useAnyIP = 1;
  this->m_threadStackSize = 0;
  bdSocketRouterConfig::bdSocketRouterConfig(&this->m_socketRouterConfig);
  bdConnectionStoreConfig::bdConnectionStoreConfig(&this->m_connectionStoreConfig);
  bdIPDiscoveryConfig::bdIPDiscoveryConfig(&this->m_IPDiscoveryConfig);
  bdString::bdString(&value, "stun.us.demonware.net");
  bdArray<bdString>::pushBack(&this->m_natTravHosts, &value);
  bdString::~bdString(&value);
  bdString::bdString(&value, "stun.eu.demonware.net");
  bdArray<bdString>::pushBack(&this->m_natTravHosts, &value);
  bdString::~bdString(&value);
  bdString::bdString(&value, "stun.jp.demonware.net");
  bdArray<bdString>::pushBack(&this->m_natTravHosts, &value);
  bdString::~bdString(&value);
  bdString::bdString(&value, "stun.au.demonware.net");
  bdArray<bdString>::pushBack(&this->m_natTravHosts, &value);
  bdString::~bdString(&value);
  this->m_natTravPort = 3074;
}

