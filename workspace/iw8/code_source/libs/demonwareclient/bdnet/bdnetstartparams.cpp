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

  this->m_onlineGame = __that->m_onlineGame;
  this->m_gamePort = __that->m_gamePort;
  this->m_socket = __that->m_socket;
  p_m_natTravHosts = &__that->m_natTravHosts;
  this->m_natTravHosts.m_capacity = p_m_natTravHosts->m_capacity;
  this->m_natTravHosts.m_size = p_m_natTravHosts->m_size;
  this->m_natTravHosts.m_data = bdArray<bdString>::uninitializedCopy(&this->m_natTravHosts, p_m_natTravHosts);
  this->m_natTravPort = __that->m_natTravPort;
  this->m_localAddresses.m_capacity = __that->m_localAddresses.m_capacity;
  this->m_localAddresses.m_size = __that->m_localAddresses.m_size;
  this->m_localAddresses.m_data = bdArray<bdSockAddr>::uninitializedCopy(&this->m_localAddresses, &__that->m_localAddresses);
  bdAddr::bdAddr(&this->m_overridePublicAddr, &__that->m_overridePublicAddr);
  this->m_overrideNATType = __that->m_overrideNATType;
  this->m_overridePlatformID = __that->m_overridePlatformID;
  this->m_hostNameLookupConfig.m_timeout = __that->m_hostNameLookupConfig.m_timeout;
  bdUPnPConfig::bdUPnPConfig(&this->m_UPnPConfig, &__that->m_UPnPConfig);
  this->m_useAnyIP = __that->m_useAnyIP;
  this->m_useMediaStreamingMode = __that->m_useMediaStreamingMode;
  this->m_threadStackSize = __that->m_threadStackSize;
  this->m_socketRouterConfig = __that->m_socketRouterConfig;
  this->m_connectionStoreConfig = __that->m_connectionStoreConfig;
  this->m_IPDiscoveryConfig = __that->m_IPDiscoveryConfig;
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

