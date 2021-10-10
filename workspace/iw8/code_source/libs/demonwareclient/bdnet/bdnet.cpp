/*
==============
bdNetImpl::bdNetImpl
==============
*/

void __fastcall bdNetImpl::bdNetImpl(bdNetImpl *this)
{
  ??0bdNetImpl@@IEAA@XZ(this);
}

/*
==============
bdNetImpl::getSocketRouter
==============
*/

bdSocketRouter *__fastcall bdNetImpl::getSocketRouter(bdNetImpl *this)
{
  return ?getSocketRouter@bdNetImpl@@QEAAPEAVbdSocketRouter@@XZ(this);
}

/*
==============
bdNetImpl::sendAll
==============
*/

bool __fastcall bdNetImpl::sendAll(bdNetImpl *this)
{
  return ?sendAll@bdNetImpl@@QEAA_NXZ(this);
}

/*
==============
bdNetImpl::getUPnPStatus
==============
*/

bdUPnPDevice::bdUPnPPortStatus __fastcall bdNetImpl::getUPnPStatus(bdNetImpl *this)
{
  return ?getUPnPStatus@bdNetImpl@@QEBA?AW4bdUPnPPortStatus@bdUPnPDevice@@XZ(this);
}

/*
==============
bdNetImpl::bindRandPort
==============
*/

bool __fastcall bdNetImpl::bindRandPort(bdNetStartParams *params, bdAddr *addr)
{
  return ?bindRandPort@bdNetImpl@@KA_NAEAVbdNetStartParams@@AEAVbdAddr@@@Z(params, addr);
}

/*
==============
bdNetImpl::getStatus
==============
*/

bdNetImpl::bdNetStatus __fastcall bdNetImpl::getStatus(bdNetImpl *this)
{
  return ?getStatus@bdNetImpl@@QEBA?AW4bdNetStatus@1@XZ(this);
}

/*
==============
bdNetImpl::receiveAll
==============
*/

bool __fastcall bdNetImpl::receiveAll(bdNetImpl *this)
{
  return ?receiveAll@bdNetImpl@@QEAA_NXZ(this);
}

/*
==============
bdNetImpl::~bdNetImpl
==============
*/

void __fastcall bdNetImpl::~bdNetImpl(bdNetImpl *this)
{
  ??1bdNetImpl@@MEAA@XZ(this);
}

/*
==============
bdNetImpl::pump
==============
*/

void __fastcall bdNetImpl::pump(bdNetImpl *this)
{
  ?pump@bdNetImpl@@QEAAXXZ(this);
}

/*
==============
bdNetImpl::setStatus
==============
*/

void __fastcall bdNetImpl::setStatus(bdNetImpl *this, bdNetImpl::bdNetStatus status)
{
  ?setStatus@bdNetImpl@@QEAAXW4bdNetStatus@1@@Z(this, status);
}

/*
==============
bdNetImpl::start
==============
*/

bool __fastcall bdNetImpl::start(bdNetImpl *this, const bdNetStartParams *params)
{
  return ?start@bdNetImpl@@QEAA_NAEBVbdNetStartParams@@@Z(this, params);
}

/*
==============
bdNetImpl::getParams
==============
*/

const bdNetStartParams *__fastcall bdNetImpl::getParams(bdNetImpl *this)
{
  return ?getParams@bdNetImpl@@QEAAAEBVbdNetStartParams@@XZ(this);
}

/*
==============
bdNetImpl::stop
==============
*/

void __fastcall bdNetImpl::stop(bdNetImpl *this)
{
  ?stop@bdNetImpl@@QEAAXXZ(this);
}

/*
==============
bdNetImpl::getLocalCommonAddr
==============
*/

bdReference<bdCommonAddr> *__fastcall bdNetImpl::getLocalCommonAddr(bdNetImpl *this, bdReference<bdCommonAddr> *result)
{
  return ?getLocalCommonAddr@bdNetImpl@@QEBA?AV?$bdReference@VbdCommonAddr@@@@XZ(this, result);
}

/*
==============
bdNetImpl::getBindAddr
==============
*/

bool __fastcall bdNetImpl::getBindAddr(bdNetImpl *this, bdAddr *addr)
{
  return ?getBindAddr@bdNetImpl@@IEAA_NAEAVbdAddr@@@Z(this, addr);
}

/*
==============
bdNetImpl::getStatusAsString
==============
*/

bdString *__fastcall bdNetImpl::getStatusAsString(bdNetImpl *this, bdString *result)
{
  return ?getStatusAsString@bdNetImpl@@QEBA?AVbdString@@XZ(this, result);
}

/*
==============
bdNetImpl::dispatchAll
==============
*/

void __fastcall bdNetImpl::dispatchAll(bdNetImpl *this)
{
  ?dispatchAll@bdNetImpl@@QEAAXXZ(this);
}

/*
==============
bdNetImpl::getUPnPDeviceDescriptor
==============
*/

const char *__fastcall bdNetImpl::getUPnPDeviceDescriptor(bdNetImpl *this)
{
  return ?getUPnPDeviceDescriptor@bdNetImpl@@QEBAPEBDXZ(this);
}

/*
==============
bdNetImpl::getConnectionStore
==============
*/

bdConnectionStore *__fastcall bdNetImpl::getConnectionStore(bdNetImpl *this)
{
  return ?getConnectionStore@bdNetImpl@@QEAAPEAVbdConnectionStore@@XZ(this);
}

/*
==============
bdNetImpl::bdNetImpl
==============
*/
void bdNetImpl::bdNetImpl(bdNetImpl *this)
{
  this->__vftable = (bdNetImpl_vtbl *)&bdNetImpl::`vftable';
  bdNetStartParams::bdNetStartParams(&this->m_params);
  bdConnectionStore::bdConnectionStore(&this->m_connectionStore);
  this->m_socketRouter = NULL;
  this->m_status = BD_NET_STOPPED;
  this->m_ipDiscClient = NULL;
  this->m_natTypeDiscClient = NULL;
  this->m_getHostByName = NULL;
  bdUPnP::bdUPnP(&this->m_UPnP);
  this->m_natTravAddrs.m_data = NULL;
  *(_QWORD *)&this->m_natTravAddrs.m_capacity = 0i64;
  *(_QWORD *)&this->m_currentNatTravAddrIndex = 0i64;
  this->m_upnpCollisionRetryCount = 0;
  bdNetTelemetry::bdNetTelemetry(&this->m_telemetry);
  this->m_telemetryCurrentGetHostIndex = 0;
  this->m_telemetryPending = 0;
  this->m_lastPumpTime = 0;
}

/*
==============
bdNetImpl::~bdNetImpl
==============
*/
void bdNetImpl::~bdNetImpl(bdNetImpl *this)
{
  bdGetHostByName *m_getHostByName; 
  bdGetHostByName *v3; 
  bdNATTypeDiscoveryClient *m_natTypeDiscClient; 
  bdNATTypeDiscoveryClient *v5; 
  bdIPDiscoveryClient *m_ipDiscClient; 
  bdIPDiscoveryClient *v7; 
  bdSocketRouter *m_socketRouter; 
  bdSocketRouter *v9; 

  this->__vftable = (bdNetImpl_vtbl *)&bdNetImpl::`vftable';
  m_getHostByName = this->m_getHostByName;
  if ( m_getHostByName )
  {
    bdGetHostByName::quit(m_getHostByName);
    v3 = this->m_getHostByName;
    if ( v3 )
      ((void (__fastcall *)(bdGetHostByName *, __int64))v3->~bdRunnable)(v3, 1i64);
    this->m_getHostByName = NULL;
  }
  m_natTypeDiscClient = this->m_natTypeDiscClient;
  if ( m_natTypeDiscClient )
  {
    bdNATTypeDiscoveryClient::quit(m_natTypeDiscClient);
    v5 = this->m_natTypeDiscClient;
    if ( v5 )
    {
      bdNATTypeDiscoveryClient::~bdNATTypeDiscoveryClient(this->m_natTypeDiscClient);
      bdMemory::deallocate(v5);
    }
    this->m_natTypeDiscClient = NULL;
  }
  m_ipDiscClient = this->m_ipDiscClient;
  if ( m_ipDiscClient )
  {
    bdIPDiscoveryClient::quit(m_ipDiscClient);
    v7 = this->m_ipDiscClient;
    if ( v7 )
    {
      bdIPDiscoveryClient::~bdIPDiscoveryClient(this->m_ipDiscClient);
      bdMemory::deallocate(v7);
    }
    this->m_ipDiscClient = NULL;
  }
  m_socketRouter = this->m_socketRouter;
  if ( m_socketRouter )
  {
    m_socketRouter->quit(m_socketRouter);
    v9 = this->m_socketRouter;
    if ( v9 )
      ((void (__fastcall *)(bdSocketRouter *, __int64))v9->~bdNATTravListener)(v9, 1i64);
    this->m_socketRouter = NULL;
  }
  bdMemory::deallocate(this->m_natTravAddrs.m_data);
  this->m_natTravAddrs.m_data = NULL;
  *(_QWORD *)&this->m_natTravAddrs.m_capacity = 0i64;
  bdUPnP::~bdUPnP(&this->m_UPnP);
  bdConnectionStore::~bdConnectionStore(&this->m_connectionStore);
  bdMemory::deallocate(this->m_params.m_localAddresses.m_data);
  this->m_params.m_localAddresses.m_data = NULL;
  *(_QWORD *)&this->m_params.m_localAddresses.m_capacity = 0i64;
  bdArray<bdString>::~bdArray<bdString>(&this->m_params.m_natTravHosts);
}

/*
==============
bdNetImpl::bindRandPort
==============
*/
char bdNetImpl::bindRandPort(bdNetStartParams *params, bdAddr *addr)
{
  unsigned __int16 Port; 
  unsigned __int16 v5; 
  int v6; 
  bdSocket *v7; 
  bdSocket *v8; 
  bdSocketStatusCode v9; 
  bool v10; 
  bdSocket_vtbl *v11; 
  bdRandom *v12; 
  unsigned __int16 v13; 
  bdRandom v15[2]; 
  __int64 v16; 
  bdAddr v17; 

  v16 = -2i64;
  Port = bdSockAddr::getPort(&addr->m_address);
  v5 = Port;
  v6 = 0;
  if ( !params->m_socket )
  {
    v7 = (bdSocket *)bdMemory::allocate(0x10ui64);
    *(_QWORD *)&v15[0].m_val = v7;
    if ( v7 )
      bdSocket::bdSocket(v7);
    else
      v8 = NULL;
    params->m_socket = v8;
  }
  while ( ((unsigned __int8 (__fastcall *)(bdSocket *, _QWORD, __int64))params->m_socket->create)(params->m_socket, 0i64, 1i64) )
  {
    bdAddr::bdAddr(&v17, &addr->m_address, v5);
    v9 = params->m_socket->bind(params->m_socket, &v17);
    if ( v9 == BD_NET_SUCCESS )
    {
      v13 = bdSockAddr::getPort(&v17.m_address);
      params->m_gamePort = v13;
      bdLogMessage(BD_LOG_INFO, "info/", "bdNet/net", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdnet.cpp", "bdNetImpl::bindRandPort", 0x305u, "Requested port %u, using port %u", v5, v13);
      return 1;
    }
    v10 = v9 == BD_NET_ADDRESS_IN_USE;
    v11 = params->m_socket->__vftable;
    if ( v10 )
    {
      if ( ((unsigned __int8 (*)(void))v11->close)() )
        bdLogMessage(BD_LOG_WARNING, "warn/", "bdNet/net", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdnet.cpp", "bdNetImpl::bindRandPort", 0x311u, "Socket bind failed, but subsequent close succeeded!");
    }
    else if ( !((unsigned __int8 (*)(void))v11->close)() )
    {
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdNet/net", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdnet.cpp", "bdNetImpl::bindRandPort", 0x319u, "Socket failed to close with an error");
    }
    bdRandom::bdRandom(v15);
    v5 = Port + bdRandom::nextUInt(v12) % 0x64;
    bdRandom::~bdRandom(v15);
    if ( (unsigned int)++v6 >= 0x64 )
      return 0;
  }
  bdLogMessage(BD_LOG_WARNING, "warn/", "bdNet/net", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdnet.cpp", "bdNetImpl::bindRandPort", 0x2FBu, "Create socket failed ");
  return 0;
}

/*
==============
bdNetImpl::dispatchAll
==============
*/
void bdNetImpl::dispatchAll(bdNetImpl *this)
{
  bdConnectionStore::dispatchAll(&this->m_connectionStore);
}

/*
==============
bdNetImpl::getBindAddr
==============
*/
char bdNetImpl::getBindAddr(bdNetImpl *this, bdAddr *addr)
{
  unsigned int m_size; 
  unsigned __int16 m_gamePort; 
  bdSockAddr *m_data; 
  bdAddr *p_result; 
  __int64 v9; 
  bdSockAddr result; 
  bdAddr v11; 

  if ( this->m_params.m_useAnyIP )
  {
    m_gamePort = this->m_params.m_gamePort;
    m_data = bdSockAddr::Any(&result, 2u, 0);
    p_result = &v11;
  }
  else
  {
    m_size = this->m_params.m_localAddresses.m_size;
    if ( m_size > 1 )
    {
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdNet/net", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdnet.cpp", "bdNetImpl::getBindAddr", 0x32Au, "When binding to a specific IP, entries in m_localAddresses other than the zeroth are ignored");
      m_size = this->m_params.m_localAddresses.m_size;
    }
    if ( !m_size )
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdNet/net", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdnet.cpp", "bdNetImpl::getBindAddr", 0x334u, "When binding to a specific IP, m_localAddresses should not be empty");
      return 0;
    }
    m_gamePort = this->m_params.m_gamePort;
    bdHandleAssert(this->m_params.m_localAddresses.m_size != 0, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<class bdSockAddr>::operator []", 0x68u, "bdArray<T>::operator[], rangecheck failed");
    m_data = this->m_params.m_localAddresses.m_data;
    p_result = (bdAddr *)&result;
  }
  bdAddr::bdAddr(p_result, m_data, m_gamePort);
  *(__m256i *)&addr->m_address.inUn.m_sockaddrStorage.ss_family = *(__m256i *)v9;
  *((__m256i *)&addr->m_address.inUn.m_ipv6Sockaddr + 1) = *(__m256i *)(v9 + 32);
  *((__m256i *)&addr->m_address.inUn.m_ipv6Sockaddr + 2) = *(__m256i *)(v9 + 64);
  *((__m256i *)&addr->m_address.inUn.m_ipv6Sockaddr + 3) = *(__m256i *)(v9 + 96);
  addr->m_relayRoute = *(bdRelayRoute *)(v9 + 128);
  *(double *)&addr->m_type = *(double *)(v9 + 144);
  return 1;
}

/*
==============
bdNetImpl::getConnectionStore
==============
*/
bdConnectionStore *bdNetImpl::getConnectionStore(bdNetImpl *this)
{
  return &this->m_connectionStore;
}

/*
==============
bdNetImpl::getLocalCommonAddr
==============
*/
bdReference<bdCommonAddr> *bdNetImpl::getLocalCommonAddr(bdNetImpl *this, bdReference<bdCommonAddr> *result)
{
  bdSocketRouter *m_socketRouter; 
  bdReference<bdCommonAddr> *LocalCommonAddr; 
  bdCommonAddr *m_ptr; 
  bdReference<bdCommonAddr> resulta; 
  bdReference<bdCommonAddr> *v8; 

  v8 = result;
  result->m_ptr = NULL;
  m_socketRouter = this->m_socketRouter;
  if ( m_socketRouter )
  {
    LocalCommonAddr = bdSocketRouter::getLocalCommonAddr(m_socketRouter, &resulta);
    if ( LocalCommonAddr != result )
    {
      if ( result->m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result->m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result->m_ptr )
        ((void (__fastcall *)(bdCommonAddr *, __int64))result->m_ptr->~bdReferencable)(result->m_ptr, 1i64);
      m_ptr = LocalCommonAddr->m_ptr;
      result->m_ptr = LocalCommonAddr->m_ptr;
      if ( m_ptr )
        _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
    }
    if ( resulta.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
      ((void (__fastcall *)(bdCommonAddr *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
  }
  return result;
}

/*
==============
bdNetImpl::getParams
==============
*/
bdNetStartParams *bdNetImpl::getParams(bdNetImpl *this)
{
  return &this->m_params;
}

/*
==============
bdNetImpl::getSocketRouter
==============
*/
bdSocketRouter *bdNetImpl::getSocketRouter(bdNetImpl *this)
{
  return this->m_socketRouter;
}

/*
==============
bdNetImpl::getStatus
==============
*/
__int64 bdNetImpl::getStatus(bdNetImpl *this)
{
  return (unsigned int)this->m_status;
}

/*
==============
bdNetImpl::getStatusAsString
==============
*/
bdString *bdNetImpl::getStatusAsString(bdNetImpl *this, bdString *result)
{
  bdString *v3; 

  switch ( this->m_status )
  {
    case BD_NET_PARAMS_CONFIG_ERROR:
      bdString::bdString(result, "PARAMS_CONFIG_ERROR");
      v3 = result;
      break;
    case BD_NET_BIND_FAILED:
      bdString::bdString(result, "BIND_ERROR");
      v3 = result;
      break;
    case BD_NET_ONLINE_FAILED:
      bdString::bdString(result, "ONLINE_FAILED");
      v3 = result;
      break;
    case BD_NET_INIT_FAILED:
      bdString::bdString(result, "INIT_FAILED");
      v3 = result;
      break;
    case BD_NET_STOPPED:
      bdString::bdString(result, "STOPPED");
      v3 = result;
      break;
    case BD_NET_PENDING:
      bdString::bdString(result, "PENDING");
      v3 = result;
      break;
    case BD_NET_DONE:
      bdString::bdString(result, "DONE");
      v3 = result;
      break;
    default:
      bdString::bdString(result, "UNKNOWN_STATUS - Did you update bdNetStatus?");
      v3 = result;
      break;
  }
  return v3;
}

/*
==============
bdNetImpl::getUPnPDeviceDescriptor
==============
*/
const char *bdNetImpl::getUPnPDeviceDescriptor(bdNetImpl *this)
{
  return bdUPnP::getDeviceDescriptor(&this->m_UPnP);
}

/*
==============
bdNetImpl::getUPnPStatus
==============
*/
bdUPnPDevice::bdUPnPPortStatus bdNetImpl::getUPnPStatus(bdNetImpl *this)
{
  return bdUPnP::getPortStatus(&this->m_UPnP);
}

/*
==============
bdNetImpl::pump
==============
*/
void bdNetImpl::pump(bdNetImpl *this)
{
  signed __int64 v1; 
  void *v2; 
  unsigned int LoResTimeStamp; 
  float LoResElapsedTime; 
  float m_lastPumpTime; 
  unsigned int m_size; 
  bdUPnP *p_m_UPnP; 
  bool isRunning; 
  bdNATTypeDiscoveryClient *v10; 
  bdUPnP *v11; 
  bdNetImpl *v12; 
  bdArray<bdString> *p_m_natTravHosts; 
  bdNetImpl *Instance; 
  bdGetHostByName *m_getHostByName; 
  bdGetHostByName::bdStatus Status; 
  bdGetHostByName::bdStatus v17; 
  unsigned int NumAddresses; 
  unsigned int i; 
  int v20; 
  bdString *v21; 
  const char *v22; 
  const bdSockAddr *v23; 
  bdString *v24; 
  const char *Buffer; 
  bdString *v26; 
  const char *v27; 
  const bdSockAddr *v28; 
  unsigned int m_currentNatTravHostIndex; 
  bool v30; 
  bdGetHostByName *v31; 
  bdGetHostByNameConfig v32; 
  bdString *v33; 
  const char *v34; 
  bdString *v35; 
  const char *v36; 
  bdGetHostByName *v37; 
  const bdSockAddr *v38; 
  const bdAddr *v39; 
  bdIPDiscoveryClient *v40; 
  bdIPDiscoveryClient *v41; 
  bdIPDiscoveryClient *v42; 
  bool v43; 
  bdNATTypeDiscoveryClient *v44; 
  bdNATTypeDiscoveryClient *v45; 
  bdNATTypeDiscoveryClient *v46; 
  bdNATTypeDiscoveryConfig *v47; 
  bool v48; 
  unsigned int v49; 
  bdString *v50; 
  const char *v51; 
  unsigned int j; 
  unsigned __int16 m_gamePort; 
  const bdSockAddr *v54; 
  bdCommonAddr *v55; 
  __int64 v56; 
  __int64 v57; 
  bdSocketRouter *m_socketRouter; 
  bool (__fastcall *init)(bdSocketRouter *, bdSocket *, const bdReference<bdCommonAddr>, const bdSocketRouterConfig *); 
  int v60; 
  bdIPDiscoveryClient *m_ipDiscClient; 
  bdAddr *v62; 
  bdIPDiscoveryClient::bdIPDiscoveryClientStatus v63; 
  char v64; 
  bdNATTypeDiscoveryClient *m_natTypeDiscClient; 
  bdAddr *v66; 
  bool v67; 
  char v68; 
  unsigned int k; 
  unsigned __int16 v70; 
  const bdSockAddr *v71; 
  const bdAddr *PublicAddress; 
  bdNATType NATType; 
  bdCommonAddr *v74; 
  __int64 v75; 
  __int64 v76; 
  bdIPDiscoveryClient *v77; 
  bdIPDiscoveryClient *v78; 
  bdNATTypeDiscoveryClient *v79; 
  bdNATTypeDiscoveryClient *v80; 
  __int64 m_capacity; 
  bdAddr *v82; 
  unsigned int v83; 
  bdAddr *v84; 
  char *v85; 
  __int64 v86; 
  const bdAddr *v87; 
  bdAddr *v88; 
  bdRelayRoute m_relayRoute; 
  double v90; 
  bdAddr *m_data; 
  bdRelayRoute v92; 
  double v93; 
  unsigned __int64 m_currentNatTravAddrIndex; 
  unsigned __int64 v95; 
  bdAddr *v96; 
  bdSocketRouter *v97; 
  bool (__fastcall *v98)(bdSocketRouter *, bdSocket *, const bdReference<bdCommonAddr>, const bdSocketRouterConfig *); 
  const bdAddr *v99; 
  bdIPDiscoveryClient *v100; 
  bdIPDiscoveryClient *v101; 
  bdIPDiscoveryClient *v102; 
  bdIPDiscoveryClient *v103; 
  bdIPDiscoveryClient *v104; 
  bdIPDiscoveryConfig *v105; 
  bool v106; 
  bdNATTypeDiscoveryClient *v107; 
  bdNATTypeDiscoveryClient *v108; 
  bdNATTypeDiscoveryClient *v109; 
  bdNATTypeDiscoveryClient *v110; 
  bdNATTypeDiscoveryConfig *v111; 
  bool v112; 
  bdString *v113; 
  const char *v114; 
  __int64 v115; 
  __int64 v116; 
  __int64 v117; 
  bdArray<bdAddr> introducers; 
  bdAddr *v119; 
  bdAddr *v120; 
  bdAddr *v121; 
  bdArray<bdAddr> v122; 
  __int64 v123; 
  bdArray<bdAddr> localAddrs; 
  bdNATTypeDiscoveryConfig v125; 
  bdIPDiscoveryConfig m_IPDiscoveryConfig; 
  bdIPDiscoveryConfig v127; 
  __int64 v128; 
  __int64 v129; 
  bdNATTypeDiscoveryConfig v130; 
  __m256i v131; 
  __m256i v132; 
  __m256i v133; 
  __m256i v134; 
  bdIPDiscoveryConfig v135; 
  bdSockAddr v136; 
  bdSockAddr v137; 
  bdAddr v138; 
  bdAddr v139; 
  bdNetStartParams params; 
  bdNetStartParams v141; 
  bdAddr v142; 
  bdAddr value; 
  bdAddr publicAddr; 
  bdAddr other; 
  bdSockAddr result; 
  bdAddr serverAddr; 
  bdAddr externalAddr; 
  bdAddr v149; 
  bdAddr v150; 
  bdAddr v151; 
  bdAddr v152; 
  bdAddr v153; 
  bdAddr v154; 
  char str[24]; 
  char v156[24]; 
  unsigned __int8 v157[1296]; 

  v2 = alloca(v1);
  v128 = -2i64;
  LoResTimeStamp = bdPlatformTiming::getLoResTimeStamp();
  LoResElapsedTime = (float)bdPlatformTiming::getLoResElapsedTime(this->m_lastPumpTime, LoResTimeStamp);
  m_lastPumpTime = (float)this->m_lastPumpTime;
  if ( m_lastPumpTime != 0.0 && LoResElapsedTime >= 10.0 )
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdNet/net", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdnet.cpp", "bdNetImpl::pump", 0x98u, "STARVATION - bdNet has been starved for %.2f seconds", LoResElapsedTime);
  this->m_lastPumpTime = LoResTimeStamp;
  if ( !this->m_params.m_onlineGame || this->m_status != BD_NET_PENDING )
    return;
  LOBYTE(v120) = 0;
  LOBYTE(v121) = 0;
  m_size = this->m_params.m_natTravHosts.m_size;
  LODWORD(v119) = this->m_currentNatTravHostIndex;
  p_m_UPnP = &this->m_UPnP;
  isRunning = bdUPnP::isRunning(&this->m_UPnP);
  v10 = NULL;
  v11 = &this->m_UPnP;
  if ( isRunning )
  {
    bdUPnP::pump(v11);
  }
  else if ( bdUPnP::getState(v11) == BD_UPNP_FINISHED && bdUPnP::getPortStatus(&this->m_UPnP) == BD_UPNP_PORT_COLLISION_FOUND )
  {
    if ( ++this->m_upnpCollisionRetryCount <= 5 )
    {
      bdNetStartParams::bdNetStartParams(&v141, &this->m_params);
      v141.m_socket = NULL;
      LODWORD(v115) = ++v141.m_gamePort;
      bdLogMessage(BD_LOG_INFO, "info/", "bdNet/net", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdnet.cpp", "bdNetImpl::pump", 0xD3u, "UPnP Mapping collision found. New port Selected: %d", v115);
      Instance = bdSingleton<bdNetImpl>::getInstance();
      bdNetImpl::stop(Instance);
      bdNetImpl::start(this, &v141);
      bdMemory::deallocate(v141.m_localAddresses.m_data);
      v141.m_localAddresses.m_data = NULL;
      *(_QWORD *)&v141.m_localAddresses.m_capacity = 0i64;
      p_m_natTravHosts = &v141.m_natTravHosts;
    }
    else
    {
      bdUPnP::startShutdown(&this->m_UPnP, BD_UPNP_DEVICE_SHUTDOWN_IMMEDIATE);
      LODWORD(v115) = this->m_upnpCollisionRetryCount;
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdNet/net", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdnet.cpp", "bdNetImpl::pump", 0xB3u, "UPnP stopping after %u port collisions. ", v115);
      bdNetStartParams::bdNetStartParams(&params, &this->m_params);
      params.m_socket = NULL;
      params.m_gamePort = 3075;
      params.m_UPnPConfig.m_runMode = BD_UPNP_EXTERNAL_IP_ONLY;
      v12 = bdSingleton<bdNetImpl>::getInstance();
      bdNetImpl::stop(v12);
      bdNetImpl::start(this, &params);
      bdMemory::deallocate(params.m_localAddresses.m_data);
      params.m_localAddresses.m_data = NULL;
      *(_QWORD *)&params.m_localAddresses.m_capacity = 0i64;
      p_m_natTravHosts = &params.m_natTravHosts;
    }
    bdArray<bdString>::~bdArray<bdString>(p_m_natTravHosts);
  }
  m_getHostByName = this->m_getHostByName;
  if ( m_getHostByName )
  {
    Status = bdGetHostByName::getStatus(m_getHostByName);
    v17 = Status;
    if ( Status == BD_LOOKUP_PENDING )
    {
      bdGetHostByName::pump(this->m_getHostByName);
    }
    else if ( Status == BD_LOOKUP_SUCCEEDED )
    {
      NumAddresses = bdGetHostByName::getNumAddresses(this->m_getHostByName);
      for ( i = 0; i < NumAddresses; ++i )
      {
        bdGetHostByName::getAddressAt(this->m_getHostByName, &result, i);
        bdAddr::bdAddr(&value, &result, this->m_params.m_natTravPort);
        bdAddr::toString(&value, str, 0x16ui64);
        v20 = 0;
        if ( this->m_natTravAddrs.m_size )
        {
          while ( !bdSockAddr::compare(&value.m_address, &this->m_natTravAddrs.m_data[v20].m_address, 1) )
          {
            if ( ++v20 >= this->m_natTravAddrs.m_size )
              goto LABEL_22;
          }
          v24 = bdArray<bdString>::operator[](&this->m_params.m_natTravHosts, this->m_currentNatTravHostIndex);
          Buffer = bdString::getBuffer(v24);
          bdLogMessage(BD_LOG_INFO, "info/", "bdNet/net", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdnet.cpp", "bdNetImpl::pump", 0xFCu, "Duplicate IP %s for Host: %s ignored", str, Buffer);
        }
        else
        {
LABEL_22:
          v21 = bdArray<bdString>::operator[](&this->m_params.m_natTravHosts, this->m_currentNatTravHostIndex);
          v22 = bdString::getBuffer(v21);
          bdLogMessage(BD_LOG_INFO, "info/", "bdNet/net", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdnet.cpp", "bdNetImpl::pump", 0xF7u, "Adding IP %s for Host: %s ", str, v22);
          bdArray<bdAddr>::pushBack(&this->m_natTravAddrs, &value);
        }
        bdSockAddr::bdSockAddr(&v136, &result);
        bdNetTelemetry::finishGetHostByName(&this->m_telemetry, this->m_telemetryCurrentGetHostIndex, v23);
      }
      ++this->m_currentNatTravHostIndex;
      p_m_UPnP = &this->m_UPnP;
    }
    else
    {
      v26 = bdArray<bdString>::operator[](&this->m_params.m_natTravHosts, this->m_currentNatTravHostIndex);
      v27 = bdString::getBuffer(v26);
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdNet/net", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdnet.cpp", "bdNetImpl::pump", 0x106u, "No IP found for Host: %s ", v27);
      ++this->m_currentNatTravHostIndex;
      bdSockAddr::bdSockAddr(&v137, 0xFF00FF00);
      bdNetTelemetry::finishGetHostByName(&this->m_telemetry, this->m_telemetryCurrentGetHostIndex, v28);
    }
    m_currentNatTravHostIndex = this->m_currentNatTravHostIndex;
    v30 = m_currentNatTravHostIndex == m_size;
    if ( m_currentNatTravHostIndex < m_size )
    {
      if ( v17 != BD_LOOKUP_PENDING )
      {
        bdGetHostByName::quit(this->m_getHostByName);
        v31 = this->m_getHostByName;
        v32.m_timeout = this->m_params.m_hostNameLookupConfig.m_timeout;
        v33 = bdArray<bdString>::operator[](&this->m_params.m_natTravHosts, this->m_currentNatTravHostIndex);
        v34 = bdString::getBuffer(v33);
        if ( !bdGetHostByName::start(v31, v34, v32) )
        {
          bdLogMessage(BD_LOG_WARNING, "warn/", "bdNet/net", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdnet.cpp", "bdNetImpl::pump", 0x113u, "Failed to start DNS lookup task.");
          this->m_status = BD_NET_INIT_FAILED;
          bdNetTelemetry::setStatus(&this->m_telemetry, 255);
          if ( this->m_telemetryPending )
          {
            bdTelemetry::addNet(&this->m_telemetry);
            this->m_telemetryPending = 0;
          }
        }
        v35 = bdArray<bdString>::operator[](&this->m_params.m_natTravHosts, this->m_currentNatTravHostIndex);
        v36 = bdString::getBuffer(v35);
        this->m_telemetryCurrentGetHostIndex = bdNetTelemetry::startGetHostByName(&this->m_telemetry, v36);
        m_currentNatTravHostIndex = this->m_currentNatTravHostIndex;
      }
      v30 = m_currentNatTravHostIndex == m_size;
    }
    if ( v30 )
    {
      bdGetHostByName::quit(this->m_getHostByName);
      v37 = this->m_getHostByName;
      if ( v37 )
        ((void (__fastcall *)(bdGetHostByName *, __int64))v37->~bdRunnable)(v37, 1i64);
      this->m_getHostByName = NULL;
    }
  }
  if ( !this->m_getHostByName && !bdUPnP::isRunning(p_m_UPnP) && bdUPnP::getPortStatus(p_m_UPnP) != BD_UPNP_PORT_COLLISION_FOUND && !this->m_ipDiscClient && !this->m_natTypeDiscClient )
  {
    bdAddr::bdAddr(&v154);
    if ( bdSockAddr::compare(&this->m_params.m_overridePublicAddr.m_address, v38, 1) )
    {
      if ( !this->m_natTravAddrs.m_size )
      {
        v49 = 0;
        if ( this->m_params.m_natTravHosts.m_size )
        {
          do
          {
            v50 = bdArray<bdString>::operator[](&this->m_params.m_natTravHosts, v49);
            v51 = bdString::getBuffer(v50);
            bdLogMessage(BD_LOG_WARNING, "warn/", "bdNet/net", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdnet.cpp", "bdNetImpl::pump", 0x149u, "Failed to lookup address %s", v51);
            ++v49;
          }
          while ( v49 < this->m_params.m_natTravHosts.m_size );
          p_m_UPnP = &this->m_UPnP;
        }
        goto LABEL_56;
      }
      v39 = bdArray<bdAddr>::operator[](&this->m_natTravAddrs, this->m_currentNatTravAddrIndex);
      bdAddr::bdAddr(&serverAddr, v39);
      v40 = (bdIPDiscoveryClient *)bdMemory::allocate(0x2D8ui64);
      v117 = (__int64)v40;
      if ( v40 )
      {
        bdIPDiscoveryClient::bdIPDiscoveryClient(v40);
        v42 = v41;
      }
      else
      {
        v42 = NULL;
      }
      this->m_ipDiscClient = v42;
      m_IPDiscoveryConfig = this->m_params.m_IPDiscoveryConfig;
      v43 = bdIPDiscoveryClient::init(v42, this->m_params.m_socket, &serverAddr, &m_IPDiscoveryConfig);
      v44 = (bdNATTypeDiscoveryClient *)bdMemory::allocate(0x10D0ui64);
      v117 = (__int64)v44;
      if ( v44 )
      {
        bdNATTypeDiscoveryClient::bdNATTypeDiscoveryClient(v44);
        v46 = v45;
      }
      else
      {
        v46 = NULL;
      }
      this->m_natTypeDiscClient = v46;
      bdNATTypeDiscoveryConfig::bdNATTypeDiscoveryConfig(&v125);
      v48 = bdNATTypeDiscoveryClient::init(v46, this->m_params.m_socket, &serverAddr, *v47);
      if ( !v43 )
      {
        bdLogMessage(BD_LOG_WARNING, "warn/", "bdNet/net", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdnet.cpp", "bdNetImpl::pump", 0x13Cu, "Failed to start IP discovery");
        this->m_status = BD_NET_ONLINE_FAILED;
        bdNetTelemetry::setStatus(&this->m_telemetry, 254);
        if ( this->m_telemetryPending )
        {
          bdTelemetry::addNet(&this->m_telemetry);
          this->m_telemetryPending = 0;
        }
      }
      if ( !v48 )
      {
        bdLogMessage(BD_LOG_WARNING, "warn/", "bdNet/net", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdnet.cpp", "bdNetImpl::pump", 0x141u, "Failed to start NAT type discovery");
LABEL_56:
        this->m_status = BD_NET_ONLINE_FAILED;
        bdNetTelemetry::setStatus(&this->m_telemetry, 254);
        if ( this->m_telemetryPending )
        {
          bdTelemetry::addNet(&this->m_telemetry);
          this->m_telemetryPending = 0;
        }
      }
    }
    else
    {
      localAddrs.m_data = NULL;
      *(_QWORD *)&localAddrs.m_capacity = 0i64;
      for ( j = 0; j < this->m_params.m_localAddresses.m_size; ++j )
      {
        m_gamePort = this->m_params.m_gamePort;
        v54 = bdArray<bdSockAddr>::operator[](&this->m_params.m_localAddresses, j);
        bdAddr::bdAddr(&v152, v54, m_gamePort);
        bdArray<bdAddr>::pushBack(&localAddrs, &v152);
      }
      bdAddr::bdAddr(&publicAddr, &this->m_params.m_overridePublicAddr);
      bdAddr::toString(&publicAddr, v156, 0x16ui64);
      bdLogMessage(BD_LOG_INFO, "info/", "bdNet/net", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdnet.cpp", "bdNetImpl::pump", 0x160u, "Public IP overriding specified. Disabling STUN. Public address: %s.", v156);
      bdAddr::bdAddr(&externalAddr);
      if ( bdUPnP::getExternalAddr(p_m_UPnP, &externalAddr) )
      {
        if ( bdSockAddr::compare(&externalAddr.m_address, &publicAddr.m_address, 1) )
          bdLogMessage(BD_LOG_INFO, "info/", "bdNet/net", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdnet.cpp", "bdNetImpl::pump", 0x167u, "UPnP mapping confirmed.");
        else
          bdLogMessage(BD_LOG_INFO, "info/", "bdNet/net", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdnet.cpp", "bdNetImpl::pump", 0x16Bu, "Public IP specified does not match the one detected through UPnP.");
      }
      v55 = (bdCommonAddr *)bdMemory::allocate(0x4E0ui64);
      v125 = (bdNATTypeDiscoveryConfig)v55;
      if ( v55 )
      {
        bdCommonAddr::bdCommonAddr(v55, &localAddrs, &publicAddr, (const bdNATType)this->m_params.m_overrideNATType, (const bdPlatformID)this->m_params.m_overridePlatformID);
        v57 = v56;
      }
      else
      {
        v57 = 0i64;
      }
      v129 = v57;
      if ( v57 )
        _InterlockedExchangeAdd((volatile signed __int32 *)(v57 + 8), 1u);
      m_socketRouter = this->m_socketRouter;
      init = m_socketRouter->init;
      v116 = v57;
      if ( v57 )
        _InterlockedExchangeAdd((volatile signed __int32 *)(v57 + 8), 1u);
      ((void (__fastcall *)(bdSocketRouter *, bdSocket *, __int64 *, bdSocketRouterConfig *))init)(m_socketRouter, this->m_params.m_socket, &v116, &this->m_params.m_socketRouterConfig);
      bdConnectionStore::init(&this->m_connectionStore, this->m_socketRouter, &this->m_params.m_connectionStoreConfig);
      this->m_status = BD_NET_DONE;
      bdNetTelemetry::setStatus(&this->m_telemetry, 2);
      if ( this->m_telemetryPending )
      {
        bdTelemetry::addNet(&this->m_telemetry);
        this->m_telemetryPending = 0;
      }
      if ( v57 && _InterlockedExchangeAdd((volatile signed __int32 *)(v57 + 8), 0xFFFFFFFF) == 1 )
        (**(void (__fastcall ***)(__int64, __int64))v57)(v57, 1i64);
      bdMemory::deallocate(localAddrs.m_data);
    }
  }
  if ( this->m_status == BD_NET_PENDING )
  {
    bdAddr::bdAddr(&other);
    v60 = this->m_params.m_socket->receiveFrom(this->m_params.m_socket, &other, v157, 1288u);
    m_ipDiscClient = this->m_ipDiscClient;
    if ( m_ipDiscClient )
    {
      bdAddr::bdAddr(&v138, &other);
      bdIPDiscoveryClient::pump(m_ipDiscClient, v62, v157, v60);
      v63 = bdIPDiscoveryClient::getStatus(this->m_ipDiscClient);
      v64 = (char)v120;
      if ( v63 != BD_IP_DISC_RUNNING )
        v64 = 1;
    }
    else
    {
      v64 = (char)v120;
    }
    m_natTypeDiscClient = this->m_natTypeDiscClient;
    if ( m_natTypeDiscClient )
    {
      bdAddr::bdAddr(&v139, &other);
      bdNATTypeDiscoveryClient::pump(m_natTypeDiscClient, v66, v157, v60);
      v67 = bdNATTypeDiscoveryClient::isRunning(this->m_natTypeDiscClient);
      v68 = (char)v121;
      if ( !v67 )
        v68 = 1;
    }
    else
    {
      v68 = (char)v121;
    }
    if ( (_DWORD)v119 == m_size && v64 && v68 )
    {
      bdHandleAssert(this->m_ipDiscClient != NULL, "m_ipDiscClient != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdnet.cpp", "bdNetImpl::pump", 0x19Au, "null m_ipDiscClient");
      bdHandleAssert(this->m_natTypeDiscClient != NULL, "m_natTypeDiscClient != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdnet.cpp", "bdNetImpl::pump", 0x19Bu, "null m_natTypeDiscClient");
      if ( bdIPDiscoveryClient::getStatus(this->m_ipDiscClient) == BD_IP_DISC_SUCCESS && bdNATTypeDiscoveryClient::getStatus(this->m_natTypeDiscClient) == BD_NTDCS_FINI )
      {
        v122.m_data = NULL;
        *(_QWORD *)&v122.m_capacity = 0i64;
        for ( k = 0; k < this->m_params.m_localAddresses.m_size; ++k )
        {
          v70 = this->m_params.m_gamePort;
          v71 = bdArray<bdSockAddr>::operator[](&this->m_params.m_localAddresses, k);
          bdAddr::bdAddr(&v153, v71, v70);
          bdArray<bdAddr>::pushBack(&v122, &v153);
        }
        PublicAddress = bdIPDiscoveryClient::getPublicAddress(this->m_ipDiscClient);
        bdAddr::bdAddr(&v150, PublicAddress);
        NATType = bdNATTypeDiscoveryClient::getNATType(this->m_natTypeDiscClient);
        bdAddr::bdAddr(&v149);
        if ( bdUPnP::getExternalAddr(p_m_UPnP, &v149) )
        {
          if ( bdSockAddr::compare(&v149.m_address, &v150.m_address, 1) )
            bdLogMessage(BD_LOG_INFO, "info/", "bdNet/net", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdnet.cpp", "bdNetImpl::pump", 0x1B1u, "UPnP mapping confirmed.");
          else
            bdLogMessage(BD_LOG_INFO, "info/", "bdNet/net", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdnet.cpp", "bdNetImpl::pump", 0x1B5u, "External IP detected through STUN server does not match the one detected through UPnP. Possible Nested NATs.");
        }
        v74 = (bdCommonAddr *)bdMemory::allocate(0x4E0ui64);
        v119 = (bdAddr *)v74;
        if ( v74 )
        {
          bdCommonAddr::bdCommonAddr(v74, &v122, &v150, NATType, (const bdPlatformID)this->m_params.m_overridePlatformID);
          v76 = v75;
        }
        else
        {
          v76 = 0i64;
        }
        v123 = v76;
        if ( v76 )
          _InterlockedExchangeAdd((volatile signed __int32 *)(v76 + 8), 1u);
        v77 = this->m_ipDiscClient;
        if ( v77 )
        {
          bdIPDiscoveryClient::quit(v77);
          v78 = this->m_ipDiscClient;
          if ( v78 )
          {
            bdIPDiscoveryClient::~bdIPDiscoveryClient(this->m_ipDiscClient);
            bdMemory::deallocate(v78);
          }
          this->m_ipDiscClient = NULL;
        }
        v79 = this->m_natTypeDiscClient;
        if ( v79 )
        {
          bdNATTypeDiscoveryClient::quit(v79);
          v80 = this->m_natTypeDiscClient;
          if ( v80 )
          {
            bdNATTypeDiscoveryClient::~bdNATTypeDiscoveryClient(this->m_natTypeDiscClient);
            bdMemory::deallocate(v80);
          }
          this->m_natTypeDiscClient = NULL;
        }
        m_capacity = this->m_natTravAddrs.m_capacity;
        introducers.m_capacity = m_capacity;
        introducers.m_size = this->m_natTravAddrs.m_size;
        v82 = NULL;
        if ( (_DWORD)m_capacity )
        {
          v82 = (bdAddr *)bdMemory::allocate(152 * m_capacity);
          v119 = v82;
          v83 = this->m_natTravAddrs.m_size;
          if ( v83 )
          {
            v84 = v82;
            v85 = (char *)((char *)this->m_natTravAddrs.m_data - (char *)v82);
            v86 = v83;
            do
            {
              v121 = v84;
              v120 = v84;
              if ( v84 )
                bdAddr::bdAddr(v84, (const bdAddr *)((char *)v84 + (_QWORD)v85));
              ++v84;
              --v86;
            }
            while ( v86 );
            v82 = v119;
          }
        }
        introducers.m_data = v82;
        if ( this->m_currentNatTravAddrIndex )
        {
          v87 = bdArray<bdAddr>::operator[](&this->m_natTravAddrs, 0);
          bdAddr::bdAddr(&v142, v87);
          v88 = bdArray<bdAddr>::operator[](&this->m_natTravAddrs, this->m_currentNatTravAddrIndex);
          v134 = *(__m256i *)&v88->m_address.inUn.m_sockaddrStorage.ss_family;
          v131 = *((__m256i *)&v88->m_address.inUn.m_ipv6Sockaddr + 1);
          v132 = *((__m256i *)&v88->m_address.inUn.m_ipv6Sockaddr + 2);
          v133 = *((__m256i *)&v88->m_address.inUn.m_ipv6Sockaddr + 3);
          m_relayRoute = v88->m_relayRoute;
          v90 = *(double *)&v88->m_type;
          bdHandleAssert(introducers.m_size != 0, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<class bdAddr>::operator []", 0x68u, "bdArray<T>::operator[], rangecheck failed");
          m_data = introducers.m_data;
          *(__m256i *)introducers.m_data = v134;
          *((__m256i *)&m_data->m_address.inUn.m_ipv6Sockaddr + 1) = v131;
          *((__m256i *)&m_data->m_address.inUn.m_ipv6Sockaddr + 2) = v132;
          *((__m256i *)&m_data->m_address.inUn.m_ipv6Sockaddr + 3) = v133;
          m_data->m_relayRoute = m_relayRoute;
          *(double *)&m_data->m_type = v90;
          v133 = *(__m256i *)&v142.m_address.inUn.m_sockaddrStorage.ss_family;
          v132 = *((__m256i *)&v142.m_address.inUn.m_ipv6Sockaddr + 1);
          v131 = *((__m256i *)&v142.m_address.inUn.m_ipv6Sockaddr + 2);
          v134 = *((__m256i *)&v142.m_address.inUn.m_ipv6Sockaddr + 3);
          v92 = v142.m_relayRoute;
          v93 = *(double *)&v142.m_type;
          m_currentNatTravAddrIndex = this->m_currentNatTravAddrIndex;
          bdHandleAssert((unsigned int)m_currentNatTravAddrIndex < introducers.m_size, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<class bdAddr>::operator []", 0x68u, "bdArray<T>::operator[], rangecheck failed");
          v95 = m_currentNatTravAddrIndex;
          v96 = introducers.m_data;
          *(__m256i *)&introducers.m_data[v95].m_address.inUn.m_sockaddrStorage.ss_family = v133;
          *((__m256i *)&v96[v95].m_address.inUn.m_ipv6Sockaddr + 1) = v132;
          *((__m256i *)&v96[v95].m_address.inUn.m_ipv6Sockaddr + 2) = v131;
          *((__m256i *)&v96[v95].m_address.inUn.m_ipv6Sockaddr + 3) = v134;
          v96[v95].m_relayRoute = v92;
          *(double *)&v96[v95].m_type = v93;
        }
        v97 = this->m_socketRouter;
        v98 = v97->init;
        v117 = v76;
        if ( v76 )
          _InterlockedExchangeAdd((volatile signed __int32 *)(v76 + 8), 1u);
        ((void (__fastcall *)(bdSocketRouter *, bdSocket *, __int64 *, bdSocketRouterConfig *))v98)(v97, this->m_params.m_socket, &v117, &this->m_params.m_socketRouterConfig);
        bdSocketRouter::setupIntroducers(this->m_socketRouter, &introducers);
        bdConnectionStore::init(&this->m_connectionStore, this->m_socketRouter, &this->m_params.m_connectionStoreConfig);
        this->m_status = BD_NET_DONE;
        bdNetTelemetry::setStatus(&this->m_telemetry, 2);
        if ( this->m_telemetryPending )
        {
          bdTelemetry::addNet(&this->m_telemetry);
          this->m_telemetryPending = 0;
        }
        bdMemory::deallocate(introducers.m_data);
        introducers.m_data = NULL;
        *(_QWORD *)&introducers.m_capacity = 0i64;
        if ( v76 )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v76 + 8), 0xFFFFFFFF) == 1 )
            (**(void (__fastcall ***)(__int64, __int64))v76)(v76, 1i64);
        }
        bdMemory::deallocate(v122.m_data);
        return;
      }
      if ( this->m_currentNatTravAddrIndex + 1 >= this->m_natTravAddrs.m_size )
      {
        if ( this->m_params.m_natTravHosts.m_size )
        {
          do
          {
            v113 = bdArray<bdString>::operator[](&this->m_params.m_natTravHosts, (const unsigned int)v10);
            v114 = bdString::getBuffer(v113);
            bdLogMessage(BD_LOG_WARNING, "warn/", "bdNet/net", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdnet.cpp", "bdNetImpl::pump", 0x20Fu, "Failed to do IP and NAT discovery using %s", v114);
            LODWORD(v10) = (_DWORD)v10 + 1;
          }
          while ( (unsigned int)v10 < this->m_params.m_natTravHosts.m_size );
        }
        goto LABEL_153;
      }
      bdLogMessage(BD_LOG_INFO, "info/", "bdNet/net", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdnet.cpp", "bdNetImpl::pump", 0x1E8u, "Trying next IP address for IP and NAT discovery.");
      v99 = bdArray<bdAddr>::operator[](&this->m_natTravAddrs, ++this->m_currentNatTravAddrIndex);
      bdAddr::bdAddr(&v151, v99);
      v100 = this->m_ipDiscClient;
      if ( v100 )
      {
        bdIPDiscoveryClient::quit(v100);
        v101 = this->m_ipDiscClient;
        if ( v101 )
        {
          bdIPDiscoveryClient::~bdIPDiscoveryClient(this->m_ipDiscClient);
          bdMemory::deallocate(v101);
        }
        this->m_ipDiscClient = NULL;
      }
      v102 = (bdIPDiscoveryClient *)bdMemory::allocate(0x2D8ui64);
      v123 = (__int64)v102;
      if ( v102 )
      {
        bdIPDiscoveryClient::bdIPDiscoveryClient(v102);
        v104 = v103;
      }
      else
      {
        v104 = NULL;
      }
      this->m_ipDiscClient = v104;
      bdIPDiscoveryConfig::bdIPDiscoveryConfig(&v135);
      v127 = *v105;
      v106 = bdIPDiscoveryClient::init(v104, this->m_params.m_socket, &v151, &v127);
      v107 = this->m_natTypeDiscClient;
      if ( v107 )
      {
        bdNATTypeDiscoveryClient::quit(v107);
        v108 = this->m_natTypeDiscClient;
        if ( v108 )
        {
          bdNATTypeDiscoveryClient::~bdNATTypeDiscoveryClient(this->m_natTypeDiscClient);
          bdMemory::deallocate(v108);
        }
        this->m_natTypeDiscClient = NULL;
      }
      v109 = (bdNATTypeDiscoveryClient *)bdMemory::allocate(0x10D0ui64);
      v123 = (__int64)v109;
      if ( v109 )
      {
        bdNATTypeDiscoveryClient::bdNATTypeDiscoveryClient(v109);
        v10 = v110;
      }
      this->m_natTypeDiscClient = v10;
      bdNATTypeDiscoveryConfig::bdNATTypeDiscoveryConfig(&v130);
      v112 = bdNATTypeDiscoveryClient::init(v10, this->m_params.m_socket, &v151, *v111);
      if ( !v106 )
      {
        bdLogMessage(BD_LOG_WARNING, "warn/", "bdNet/net", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdnet.cpp", "bdNetImpl::pump", 0x202u, "Failed to start IP discovery");
        this->m_status = BD_NET_ONLINE_FAILED;
        bdNetTelemetry::setStatus(&this->m_telemetry, 254);
        if ( this->m_telemetryPending )
        {
          bdTelemetry::addNet(&this->m_telemetry);
          this->m_telemetryPending = 0;
        }
      }
      if ( !v112 )
      {
        bdLogMessage(BD_LOG_WARNING, "warn/", "bdNet/net", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdnet.cpp", "bdNetImpl::pump", 0x207u, "Failed to start NAT discovery");
LABEL_153:
        this->m_status = BD_NET_ONLINE_FAILED;
        bdNetTelemetry::setStatus(&this->m_telemetry, 254);
        if ( this->m_telemetryPending )
        {
          bdTelemetry::addNet(&this->m_telemetry);
          this->m_telemetryPending = 0;
        }
      }
    }
  }
}

/*
==============
bdNetImpl::receiveAll
==============
*/
_BOOL8 bdNetImpl::receiveAll(bdNetImpl *this)
{
  bool v1; 

  v1 = bdConnectionStore::receiveAll(&this->m_connectionStore);
  if ( !v1 )
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdNet/net", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdnet.cpp", "bdNetImpl::receiveAll", 0x28Eu, "Failed to receive data for all connections in the connection store");
  return v1;
}

/*
==============
bdNetImpl::sendAll
==============
*/
_BOOL8 bdNetImpl::sendAll(bdNetImpl *this)
{
  bool v1; 

  v1 = bdConnectionStore::flushAll(&this->m_connectionStore);
  if ( !v1 )
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdNet/net", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdnet.cpp", "bdNetImpl::sendAll", 0x284u, "Failed to flush all connections in the connection store");
  return v1;
}

/*
==============
bdNetImpl::setStatus
==============
*/
void bdNetImpl::setStatus(bdNetImpl *this, bdNetImpl::bdNetStatus status)
{
  this->m_status = status;
  bdNetTelemetry::setStatus(&this->m_telemetry, status);
  if ( status != BD_NET_PENDING && this->m_telemetryPending )
  {
    bdTelemetry::addNet(&this->m_telemetry);
    this->m_telemetryPending = 0;
  }
}

/*
==============
bdNetImpl::start
==============
*/
char bdNetImpl::start(bdNetImpl *this, const bdNetStartParams *params)
{
  char v4; 
  unsigned int m_size; 
  unsigned __int16 m_gamePort; 
  bdSockAddr *m_data; 
  bdAddr *v8; 
  char v9; 
  bdAddr *v10; 
  bdSocketRouter *v11; 
  __int64 v12; 
  bdSocketRouter *v13; 
  bdNetTelemetry *p_m_telemetry; 
  bdGetHostByName *v15; 
  __int64 v16; 
  bdGetHostByNameConfig v17; 
  bdString *v18; 
  const char *Buffer; 
  bool v20; 
  bdString *v21; 
  const char *v22; 
  bdUPnPConfig *v23; 
  unsigned int v25; 
  unsigned __int16 v26; 
  const bdSockAddr *v27; 
  bdCommonAddr *v28; 
  __int64 v29; 
  bdSocketRouter *m_socketRouter; 
  bool (__fastcall *init)(bdSocketRouter *, bdSocket *, const bdReference<bdCommonAddr>, const bdSocketRouterConfig *); 
  __int64 v32; 
  bdArray<bdAddr> localAddrs; 
  __int64 v34; 
  __int64 v35; 
  bdUPnPConfig v36; 
  bdAddr addr; 
  bdAddr value; 
  bdAddr publicAddr; 
  bdSockAddr result; 
  char v41; 
  bdAddr v42; 

  v34 = -2i64;
  v4 = 1;
  if ( this->m_status )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdNet/net", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdnet.cpp", "bdNetImpl::start", 0x22u, "bdNet can only be started when in the uninitialized state. Call stop() to reset");
    return 0;
  }
  bdNetTelemetry::setNetStart(&this->m_telemetry, params);
  this->m_telemetryCurrentGetHostIndex = -1;
  this->m_telemetryPending = 1;
  this->m_params.m_onlineGame = params->m_onlineGame;
  this->m_params.m_gamePort = params->m_gamePort;
  this->m_params.m_socket = params->m_socket;
  bdArray<bdString>::operator=(&this->m_params.m_natTravHosts, &params->m_natTravHosts);
  this->m_params.m_natTravPort = params->m_natTravPort;
  bdArray<bdSockAddr>::operator=(&this->m_params.m_localAddresses, &params->m_localAddresses);
  *(__m256i *)&this->m_params.m_overridePublicAddr.m_address.inUn.m_sockaddrStorage.ss_family = *(__m256i *)&params->m_overridePublicAddr.m_address.inUn.m_sockaddrStorage.ss_family;
  *((__m256i *)&this->m_params.m_overridePublicAddr.m_address.inUn.m_ipv6Sockaddr + 1) = *((__m256i *)&params->m_overridePublicAddr.m_address.inUn.m_ipv6Sockaddr + 1);
  *((__m256i *)&this->m_params.m_overridePublicAddr.m_address.inUn.m_ipv6Sockaddr + 2) = *((__m256i *)&params->m_overridePublicAddr.m_address.inUn.m_ipv6Sockaddr + 2);
  *((__m256i *)&this->m_params.m_overridePublicAddr.m_address.inUn.m_ipv6Sockaddr + 3) = *((__m256i *)&params->m_overridePublicAddr.m_address.inUn.m_ipv6Sockaddr + 3);
  this->m_params.m_overridePublicAddr.m_relayRoute = params->m_overridePublicAddr.m_relayRoute;
  *(double *)&this->m_params.m_overridePublicAddr.m_type = *(double *)&params->m_overridePublicAddr.m_type;
  this->m_params.m_overrideNATType = params->m_overrideNATType;
  this->m_params.m_overridePlatformID = params->m_overridePlatformID;
  this->m_params.m_hostNameLookupConfig.m_timeout = params->m_hostNameLookupConfig.m_timeout;
  *(_OWORD *)&this->m_params.m_UPnPConfig.m_discoveryTimeout = *(_OWORD *)&params->m_UPnPConfig.m_discoveryTimeout;
  *(_OWORD *)&this->m_params.m_UPnPConfig.m_discoveryRetries = *(_OWORD *)&params->m_UPnPConfig.m_discoveryRetries;
  *(_OWORD *)&this->m_params.m_UPnPConfig.m_disabled = *(_OWORD *)&params->m_UPnPConfig.m_disabled;
  this->m_params.m_UPnPConfig.m_gatewayAddr.inUn.m_ipv6Sockaddr.sin6_addr = params->m_UPnPConfig.m_gatewayAddr.inUn.m_ipv6Sockaddr.sin6_addr;
  *(_OWORD *)&this->m_params.m_UPnPConfig.m_gatewayAddr.inUn.m_ipv6Sockaddr.sin6_scope_id = *(_OWORD *)&params->m_UPnPConfig.m_gatewayAddr.inUn.m_ipv6Sockaddr.sin6_scope_id;
  *(_OWORD *)((char *)&this->m_params.m_UPnPConfig.m_gatewayAddr.inUn.m_ipv6Sockaddr + 40) = *(_OWORD *)((char *)&params->m_UPnPConfig.m_gatewayAddr.inUn.m_ipv6Sockaddr + 40);
  *(_OWORD *)(&this->m_params.m_UPnPConfig.m_gatewayAddr.inUn.m_ipv6Sockaddr + 2) = *(_OWORD *)(&params->m_UPnPConfig.m_gatewayAddr.inUn.m_ipv6Sockaddr + 2);
  *(_OWORD *)((char *)&this->m_params.m_UPnPConfig.m_gatewayAddr.inUn.m_ipv6Sockaddr + 72) = *(_OWORD *)((char *)&params->m_UPnPConfig.m_gatewayAddr.inUn.m_ipv6Sockaddr + 72);
  *(_OWORD *)((char *)&this->m_params.m_UPnPConfig.m_gatewayAddr.inUn.m_ipv6Sockaddr + 88) = *(_OWORD *)((char *)&params->m_UPnPConfig.m_gatewayAddr.inUn.m_ipv6Sockaddr + 88);
  *(_OWORD *)((char *)&this->m_params.m_UPnPConfig.m_gatewayAddr.inUn.m_ipv6Sockaddr + 104) = *(_OWORD *)((char *)&params->m_UPnPConfig.m_gatewayAddr.inUn.m_ipv6Sockaddr + 104);
  *(_OWORD *)((char *)&this->m_params.m_UPnPConfig.m_gatewayAddr.inUn.m_ipv6Sockaddr + 120) = *(_OWORD *)((char *)&params->m_UPnPConfig.m_gatewayAddr.inUn.m_ipv6Sockaddr + 120);
  this->m_params.m_useAnyIP = params->m_useAnyIP;
  this->m_params.m_useMediaStreamingMode = params->m_useMediaStreamingMode;
  this->m_params.m_threadStackSize = params->m_threadStackSize;
  this->m_params.m_socketRouterConfig = params->m_socketRouterConfig;
  this->m_params.m_connectionStoreConfig = params->m_connectionStoreConfig;
  *(double *)&this->m_params.m_IPDiscoveryConfig.m_retries = *(double *)&params->m_IPDiscoveryConfig.m_retries;
  *(_DWORD *)&this->m_params.m_IPDiscoveryConfig.m_version = *(_DWORD *)&params->m_IPDiscoveryConfig.m_version;
  bdAddr::bdAddr(&addr);
  if ( this->m_params.m_useAnyIP )
  {
    m_gamePort = this->m_params.m_gamePort;
    m_data = bdSockAddr::Any(&result, 2u, 0);
    v8 = &v42;
  }
  else
  {
    m_size = this->m_params.m_localAddresses.m_size;
    if ( m_size > 1 )
    {
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdNet/net", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdnet.cpp", "bdNetImpl::getBindAddr", 0x32Au, "When binding to a specific IP, entries in m_localAddresses other than the zeroth are ignored");
      m_size = this->m_params.m_localAddresses.m_size;
    }
    if ( !m_size )
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdNet/net", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdnet.cpp", "bdNetImpl::getBindAddr", 0x334u, "When binding to a specific IP, m_localAddresses should not be empty");
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdNet/net", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdnet.cpp", "bdNetImpl::start", 0x37u, "Failed to configure bind address");
      this->m_status = BD_NET_PARAMS_CONFIG_ERROR;
      v9 = -4;
      goto LABEL_38;
    }
    m_gamePort = this->m_params.m_gamePort;
    bdHandleAssert(this->m_params.m_localAddresses.m_size != 0, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<class bdSockAddr>::operator []", 0x68u, "bdArray<T>::operator[], rangecheck failed");
    m_data = this->m_params.m_localAddresses.m_data;
    v8 = (bdAddr *)&v41;
  }
  bdAddr::bdAddr(v8, m_data, m_gamePort);
  addr = *v10;
  if ( !bdNetImpl::bindRandPort(&this->m_params, &addr) )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdNet/net", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdnet.cpp", "bdNetImpl::start", 0x89u, "Failed to find a free port");
    this->m_status = BD_NET_BIND_FAILED;
    v9 = -3;
LABEL_38:
    bdNetTelemetry::setStatus(&this->m_telemetry, v9);
    if ( this->m_telemetryPending )
    {
      bdTelemetry::addNet(&this->m_telemetry);
      this->m_telemetryPending = 0;
    }
    return 0;
  }
  v11 = (bdSocketRouter *)bdMemory::allocate(0x4B8ui64);
  v32 = (__int64)v11;
  v12 = 0i64;
  if ( v11 )
    bdSocketRouter::bdSocketRouter(v11);
  else
    v13 = NULL;
  this->m_socketRouter = v13;
  p_m_telemetry = &this->m_telemetry;
  if ( this->m_params.m_onlineGame )
  {
    this->m_status = BD_NET_PENDING;
    bdNetTelemetry::setStatus(p_m_telemetry, 1);
    *(_QWORD *)&this->m_currentNatTravAddrIndex = 0i64;
    v15 = (bdGetHostByName *)bdMemory::allocate(0x240ui64);
    v32 = (__int64)v15;
    if ( v15 )
    {
      bdGetHostByName::bdGetHostByName(v15, params->m_threadStackSize);
      v12 = v16;
    }
    this->m_getHostByName = (bdGetHostByName *)v12;
    v17.m_timeout = this->m_params.m_hostNameLookupConfig.m_timeout;
    v18 = bdArray<bdString>::operator[](&this->m_params.m_natTravHosts, this->m_currentNatTravHostIndex);
    Buffer = bdString::getBuffer(v18);
    v20 = bdGetHostByName::start((bdGetHostByName *)v12, Buffer, v17);
    v21 = bdArray<bdString>::operator[](&this->m_params.m_natTravHosts, this->m_currentNatTravHostIndex);
    v22 = bdString::getBuffer(v21);
    this->m_telemetryCurrentGetHostIndex = bdNetTelemetry::startGetHostByName(&this->m_telemetry, v22);
    if ( v20 )
    {
      bdUPnPConfig::bdUPnPConfig(&v36, &this->m_params.m_UPnPConfig);
      if ( !bdUPnP::init(&this->m_UPnP, this->m_params.m_gamePort, &this->m_params.m_localAddresses, v23) )
        bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdNet/net", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdnet.cpp", "bdNetImpl::start", 0x64u, "UPnP module failed to start.");
      return v4;
    }
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdNet/net", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdnet.cpp", "bdNetImpl::start", 0x59u, "Failed to start DNS lookup task.");
    this->m_status = BD_NET_INIT_FAILED;
    v9 = -1;
    goto LABEL_38;
  }
  this->m_status = BD_NET_DONE;
  bdNetTelemetry::setStatus(p_m_telemetry, 2);
  if ( this->m_telemetryPending )
  {
    bdTelemetry::addNet(&this->m_telemetry);
    this->m_telemetryPending = 0;
  }
  if ( !this->m_params.m_localAddresses.m_size )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdNet/net", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdnet.cpp", "bdNetImpl::start", 0x6Fu, "No local address specified when starting bdNet. See bdNetStartParams.");
    return 0;
  }
  localAddrs.m_data = NULL;
  *(_QWORD *)&localAddrs.m_capacity = 0i64;
  v25 = 0;
  do
  {
    v26 = this->m_params.m_gamePort;
    v27 = bdArray<bdSockAddr>::operator[](&this->m_params.m_localAddresses, v25);
    bdAddr::bdAddr(&value, v27, v26);
    bdArray<bdAddr>::pushBack(&localAddrs, &value);
    ++v25;
  }
  while ( v25 < this->m_params.m_localAddresses.m_size );
  bdAddr::bdAddr(&publicAddr);
  v28 = (bdCommonAddr *)bdMemory::allocate(0x4E0ui64);
  v32 = (__int64)v28;
  if ( v28 )
  {
    bdCommonAddr::bdCommonAddr(v28, &localAddrs, &publicAddr, BD_NAT_OPEN, (const bdPlatformID)this->m_params.m_overridePlatformID);
    v12 = v29;
  }
  v35 = v12;
  if ( v12 )
    _InterlockedExchangeAdd((volatile signed __int32 *)(v12 + 8), 1u);
  m_socketRouter = this->m_socketRouter;
  init = m_socketRouter->init;
  v32 = v12;
  if ( v12 )
    _InterlockedExchangeAdd((volatile signed __int32 *)(v12 + 8), 1u);
  ((void (__fastcall *)(bdSocketRouter *, bdSocket *, __int64 *, bdSocketRouterConfig *))init)(m_socketRouter, this->m_params.m_socket, &v32, &this->m_params.m_socketRouterConfig);
  bdConnectionStore::init(&this->m_connectionStore, this->m_socketRouter, &this->m_params.m_connectionStoreConfig);
  if ( v12 && !_InterlockedDecrement((volatile signed __int32 *)(v12 + 8)) )
    (**(void (__fastcall ***)(__int64, __int64))v12)(v12, 1i64);
  bdMemory::deallocate(localAddrs.m_data);
  return v4;
}

/*
==============
bdNetImpl::stop
==============
*/
void bdNetImpl::stop(bdNetImpl *this)
{
  char v2; 
  double ElapsedTimeInSeconds; 
  bdSocketRouter *m_socketRouter; 
  bdSocketRouter *v5; 
  bdSocket *m_socket; 
  bdSocket *v7; 
  bdIPDiscoveryClient *m_ipDiscClient; 
  bdIPDiscoveryClient *v9; 
  bdNATTypeDiscoveryClient *m_natTypeDiscClient; 
  bdNATTypeDiscoveryClient *v11; 
  bdGetHostByName *m_getHostByName; 
  bdGetHostByName *v13; 
  unsigned int m_size; 
  bdString *m_data; 
  __int64 v16; 
  bdStopwatch v17; 

  if ( bdUPnP::getState(&this->m_UPnP) )
    bdUPnP::startShutdown(&this->m_UPnP, BD_UPNP_DEVICE_SHUTDOWN_ELEGANT);
  bdConnectionStore::startShutdown(&this->m_connectionStore, BD_CONNECTION_STORE_SHUTDOWN_ELEGANT);
  bdStopwatch::bdStopwatch(&v17);
  bdStopwatch::start(&v17);
  while ( 1 )
  {
    v2 = 0;
    if ( bdConnectionStore::getStatus(&this->m_connectionStore) )
    {
      v2 = 1;
      if ( !bdConnectionStore::receiveAll(&this->m_connectionStore) )
        bdLogMessage(BD_LOG_WARNING, "warn/", "bdNet/net", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdnet.cpp", "bdNetImpl::receiveAll", 0x28Eu, "Failed to receive data for all connections in the connection store");
      bdConnectionStore::dispatchAll(&this->m_connectionStore);
      if ( !bdConnectionStore::flushAll(&this->m_connectionStore) )
        bdLogMessage(BD_LOG_WARNING, "warn/", "bdNet/net", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdnet.cpp", "bdNetImpl::sendAll", 0x284u, "Failed to flush all connections in the connection store");
    }
    if ( bdUPnP::getState(&this->m_UPnP) )
    {
      v2 = 1;
      bdUPnP::pump(&this->m_UPnP);
    }
    ElapsedTimeInSeconds = bdStopwatch::getElapsedTimeInSeconds(&v17);
    if ( *(float *)&ElapsedTimeInSeconds > 1.0 )
      break;
    if ( !v2 )
      goto LABEL_15;
    bdPlatformTiming::sleep(0x14u);
  }
  bdConnectionStore::startShutdown(&this->m_connectionStore, BD_CONNECTION_STORE_SHUTDOWN_IMMEDIATE);
  bdUPnP::startShutdown(&this->m_UPnP, BD_UPNP_DEVICE_SHUTDOWN_IMMEDIATE);
LABEL_15:
  m_socketRouter = this->m_socketRouter;
  if ( m_socketRouter )
  {
    m_socketRouter->quit(m_socketRouter);
    v5 = this->m_socketRouter;
    if ( v5 )
      ((void (__fastcall *)(bdSocketRouter *, __int64))v5->~bdNATTravListener)(v5, 1i64);
    this->m_socketRouter = NULL;
  }
  m_socket = this->m_params.m_socket;
  if ( m_socket )
  {
    if ( !m_socket->close(m_socket) )
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdNet/net", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdnet.cpp", "bdNetImpl::stop", 0x255u, "Game socket failed to close with an error");
    v7 = this->m_params.m_socket;
    if ( v7 )
      ((void (__fastcall *)(bdSocket *, __int64))v7->~bdSocket)(v7, 1i64);
    this->m_params.m_socket = NULL;
  }
  m_ipDiscClient = this->m_ipDiscClient;
  if ( m_ipDiscClient )
  {
    bdIPDiscoveryClient::quit(m_ipDiscClient);
    v9 = this->m_ipDiscClient;
    if ( v9 )
    {
      bdIPDiscoveryClient::~bdIPDiscoveryClient(this->m_ipDiscClient);
      bdMemory::deallocate(v9);
    }
    this->m_ipDiscClient = NULL;
  }
  m_natTypeDiscClient = this->m_natTypeDiscClient;
  if ( m_natTypeDiscClient )
  {
    bdNATTypeDiscoveryClient::quit(m_natTypeDiscClient);
    v11 = this->m_natTypeDiscClient;
    if ( v11 )
    {
      bdNATTypeDiscoveryClient::~bdNATTypeDiscoveryClient(this->m_natTypeDiscClient);
      bdMemory::deallocate(v11);
    }
    this->m_natTypeDiscClient = NULL;
  }
  m_getHostByName = this->m_getHostByName;
  if ( m_getHostByName )
  {
    bdGetHostByName::quit(m_getHostByName);
    v13 = this->m_getHostByName;
    if ( v13 )
      ((void (__fastcall *)(bdGetHostByName *, __int64))v13->~bdRunnable)(v13, 1i64);
    this->m_getHostByName = NULL;
  }
  this->m_status = BD_NET_STOPPED;
  bdNetTelemetry::setStatus(&this->m_telemetry, 0);
  if ( this->m_telemetryPending )
  {
    bdTelemetry::addNet(&this->m_telemetry);
    this->m_telemetryPending = 0;
  }
  *(_QWORD *)&this->m_currentNatTravAddrIndex = 0i64;
  bdMemory::deallocate(this->m_params.m_localAddresses.m_data);
  this->m_params.m_localAddresses.m_data = NULL;
  *(_QWORD *)&this->m_params.m_localAddresses.m_capacity = 0i64;
  m_size = this->m_params.m_natTravHosts.m_size;
  m_data = this->m_params.m_natTravHosts.m_data;
  if ( m_size )
  {
    v16 = m_size;
    do
    {
      bdString::~bdString(m_data++);
      --v16;
    }
    while ( v16 );
    m_data = this->m_params.m_natTravHosts.m_data;
  }
  bdMemory::deallocate(m_data);
  this->m_params.m_natTravHosts.m_data = NULL;
  *(_QWORD *)&this->m_params.m_natTravHosts.m_capacity = 0i64;
  bdMemory::deallocate(this->m_natTravAddrs.m_data);
  this->m_natTravAddrs.m_data = NULL;
  *(_QWORD *)&this->m_natTravAddrs.m_capacity = 0i64;
}

