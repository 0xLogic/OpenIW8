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
  bdSockAddr result; 
  bdAddr v17; 

  _RSI = addr;
  if ( this->m_params.m_useAnyIP )
  {
    m_gamePort = this->m_params.m_gamePort;
    m_data = bdSockAddr::Any(&result, 2u, 0);
    p_result = &v17;
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
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rsi], ymm0
    vmovups ymm1, ymmword ptr [rax+20h]
    vmovups ymmword ptr [rsi+20h], ymm1
    vmovups ymm0, ymmword ptr [rax+40h]
    vmovups ymmword ptr [rsi+40h], ymm0
    vmovups ymm1, ymmword ptr [rax+60h]
    vmovups ymmword ptr [rsi+60h], ymm1
    vmovups xmm0, xmmword ptr [rax+80h]
    vmovups xmmword ptr [rsi+80h], xmm0
    vmovsd  xmm1, qword ptr [rax+90h]
    vmovsd  qword ptr [rsi+90h], xmm1
  }
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

void __fastcall bdNetImpl::pump(bdNetImpl *this, double _XMM1_8, double _XMM2_8)
{
  signed __int64 v3; 
  void *v7; 
  unsigned int LoResTimeStamp; 
  char v10; 
  unsigned int m_size; 
  bdUPnP *p_m_UPnP; 
  bool isRunning; 
  bdNATTypeDiscoveryClient *v20; 
  bdUPnP *v21; 
  bdNetImpl *v22; 
  bdArray<bdString> *p_m_natTravHosts; 
  bdNetImpl *Instance; 
  bdGetHostByName *m_getHostByName; 
  bdGetHostByName::bdStatus Status; 
  bdGetHostByName::bdStatus v27; 
  unsigned int NumAddresses; 
  unsigned int i; 
  int v30; 
  bdString *v31; 
  const char *v32; 
  const bdSockAddr *v33; 
  bdString *v34; 
  const char *Buffer; 
  bdString *v36; 
  const char *v37; 
  const bdSockAddr *v38; 
  unsigned int m_currentNatTravHostIndex; 
  bool v40; 
  bdGetHostByName *v41; 
  bdString *v43; 
  const char *v44; 
  bdString *v46; 
  const char *v47; 
  bdGetHostByName *v48; 
  const bdSockAddr *v49; 
  const bdAddr *v50; 
  bdIPDiscoveryClient *v51; 
  bdIPDiscoveryClient *v52; 
  bdIPDiscoveryClient *v53; 
  bool v55; 
  bdNATTypeDiscoveryClient *v56; 
  bdNATTypeDiscoveryClient *v57; 
  bdNATTypeDiscoveryClient *v58; 
  bdNATTypeDiscoveryConfig *v59; 
  bool v60; 
  unsigned int v61; 
  bdString *v62; 
  const char *v63; 
  unsigned int j; 
  unsigned __int16 m_gamePort; 
  const bdSockAddr *v66; 
  bdCommonAddr *v67; 
  __int64 v68; 
  __int64 v69; 
  bdSocketRouter *m_socketRouter; 
  bool (__fastcall *init)(bdSocketRouter *, bdSocket *, const bdReference<bdCommonAddr>, const bdSocketRouterConfig *); 
  int v72; 
  bdIPDiscoveryClient *m_ipDiscClient; 
  bdAddr *v74; 
  bdIPDiscoveryClient::bdIPDiscoveryClientStatus v75; 
  char v76; 
  bdNATTypeDiscoveryClient *m_natTypeDiscClient; 
  bdAddr *v78; 
  bool v79; 
  char v80; 
  unsigned int k; 
  unsigned __int16 v82; 
  const bdSockAddr *v83; 
  const bdAddr *PublicAddress; 
  bdNATType NATType; 
  bdCommonAddr *v86; 
  __int64 v87; 
  __int64 v88; 
  bdIPDiscoveryClient *v89; 
  bdIPDiscoveryClient *v90; 
  bdNATTypeDiscoveryClient *v91; 
  bdNATTypeDiscoveryClient *v92; 
  __int64 m_capacity; 
  bdAddr *v94; 
  unsigned int v95; 
  bdAddr *v96; 
  signed __int64 v97; 
  __int64 v98; 
  const bdAddr *v99; 
  __int64 m_currentNatTravAddrIndex; 
  bdSocketRouter *v125; 
  bool (__fastcall *v126)(bdSocketRouter *, bdSocket *, const bdReference<bdCommonAddr>, const bdSocketRouterConfig *); 
  const bdAddr *v127; 
  bdIPDiscoveryClient *v128; 
  bdIPDiscoveryClient *v129; 
  bdIPDiscoveryClient *v130; 
  bdIPDiscoveryClient *v131; 
  bdIPDiscoveryClient *v132; 
  bool v135; 
  bdNATTypeDiscoveryClient *v136; 
  bdNATTypeDiscoveryClient *v137; 
  bdNATTypeDiscoveryClient *v138; 
  bdNATTypeDiscoveryClient *v139; 
  bdNATTypeDiscoveryConfig *v140; 
  bool v141; 
  bdString *v142; 
  const char *v143; 
  __int64 v147; 
  double v148; 
  __int64 v149; 
  __int64 v150; 
  bdArray<bdAddr> introducers; 
  bdAddr *v152; 
  bdAddr *v153; 
  bdAddr *v154; 
  bdArray<bdAddr> v155; 
  __int64 v156; 
  bdArray<bdAddr> localAddrs; 
  bdNATTypeDiscoveryConfig v158; 
  bdIPDiscoveryConfig v159; 
  bdIPDiscoveryConfig v160; 
  __int64 v161; 
  __int64 v162; 
  bdNATTypeDiscoveryConfig v163; 
  bdIPDiscoveryConfig v168; 
  bdSockAddr v169; 
  bdSockAddr v170; 
  bdAddr v171; 
  bdAddr v172; 
  bdNetStartParams params; 
  bdNetStartParams v174; 
  bdAddr v175; 
  bdAddr value; 
  bdAddr publicAddr; 
  bdAddr other; 
  bdSockAddr result; 
  bdAddr serverAddr; 
  bdAddr externalAddr; 
  bdAddr v182; 
  bdAddr v183; 
  bdAddr v184; 
  bdAddr v185; 
  bdAddr v186; 
  bdAddr v187; 
  char str[24]; 
  char v189[24]; 
  unsigned __int8 v190[1296]; 
  char v193; 

  v7 = alloca(v3);
  v161 = -2i64;
  __asm
  {
    vmovaps [rsp+1510h+var_30], xmm6
    vmovaps [rsp+1510h+var_40], xmm7
  }
  _RDI = this;
  LoResTimeStamp = bdPlatformTiming::getLoResTimeStamp();
  bdPlatformTiming::getLoResElapsedTime(_RDI->m_lastPumpTime, LoResTimeStamp);
  __asm
  {
    vxorps  xmm2, xmm2, xmm2
    vcvtsi2ss xmm2, xmm2, rdx
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, rdx
    vxorps  xmm0, xmm0, xmm0
    vucomiss xmm1, xmm0
  }
  if ( !v40 )
  {
    __asm { vcomiss xmm2, cs:__real@41200000 }
    if ( !v10 )
    {
      __asm
      {
        vcvtss2sd xmm0, xmm2, xmm2
        vmovsd  [rsp+1510h+var_14D8], xmm0
      }
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdNet/net", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdnet.cpp", "bdNetImpl::pump", 0x98u, "STARVATION - bdNet has been starved for %.2f seconds", v148);
    }
  }
  _RDI->m_lastPumpTime = LoResTimeStamp;
  if ( !_RDI->m_params.m_onlineGame || _RDI->m_status != BD_NET_PENDING )
    goto LABEL_155;
  LOBYTE(v153) = 0;
  LOBYTE(v154) = 0;
  m_size = _RDI->m_params.m_natTravHosts.m_size;
  LODWORD(v152) = _RDI->m_currentNatTravHostIndex;
  p_m_UPnP = &_RDI->m_UPnP;
  isRunning = bdUPnP::isRunning(&_RDI->m_UPnP);
  v20 = NULL;
  v21 = &_RDI->m_UPnP;
  if ( isRunning )
  {
    bdUPnP::pump(v21);
  }
  else if ( bdUPnP::getState(v21) == BD_UPNP_FINISHED && bdUPnP::getPortStatus(&_RDI->m_UPnP) == BD_UPNP_PORT_COLLISION_FOUND )
  {
    if ( ++_RDI->m_upnpCollisionRetryCount <= 5 )
    {
      bdNetStartParams::bdNetStartParams(&v174, &_RDI->m_params);
      v174.m_socket = NULL;
      LODWORD(v147) = ++v174.m_gamePort;
      bdLogMessage(BD_LOG_INFO, "info/", "bdNet/net", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdnet.cpp", "bdNetImpl::pump", 0xD3u, "UPnP Mapping collision found. New port Selected: %d", v147);
      Instance = bdSingleton<bdNetImpl>::getInstance();
      bdNetImpl::stop(Instance);
      bdNetImpl::start(_RDI, &v174);
      bdMemory::deallocate(v174.m_localAddresses.m_data);
      v174.m_localAddresses.m_data = NULL;
      *(_QWORD *)&v174.m_localAddresses.m_capacity = 0i64;
      p_m_natTravHosts = &v174.m_natTravHosts;
    }
    else
    {
      bdUPnP::startShutdown(&_RDI->m_UPnP, BD_UPNP_DEVICE_SHUTDOWN_IMMEDIATE);
      LODWORD(v147) = _RDI->m_upnpCollisionRetryCount;
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdNet/net", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdnet.cpp", "bdNetImpl::pump", 0xB3u, "UPnP stopping after %u port collisions. ", v147);
      bdNetStartParams::bdNetStartParams(&params, &_RDI->m_params);
      params.m_socket = NULL;
      params.m_gamePort = 3075;
      params.m_UPnPConfig.m_runMode = BD_UPNP_EXTERNAL_IP_ONLY;
      v22 = bdSingleton<bdNetImpl>::getInstance();
      bdNetImpl::stop(v22);
      bdNetImpl::start(_RDI, &params);
      bdMemory::deallocate(params.m_localAddresses.m_data);
      params.m_localAddresses.m_data = NULL;
      *(_QWORD *)&params.m_localAddresses.m_capacity = 0i64;
      p_m_natTravHosts = &params.m_natTravHosts;
    }
    bdArray<bdString>::~bdArray<bdString>(p_m_natTravHosts);
  }
  m_getHostByName = _RDI->m_getHostByName;
  if ( m_getHostByName )
  {
    Status = bdGetHostByName::getStatus(m_getHostByName);
    v27 = Status;
    if ( Status == BD_LOOKUP_PENDING )
    {
      bdGetHostByName::pump(_RDI->m_getHostByName);
    }
    else if ( Status == BD_LOOKUP_SUCCEEDED )
    {
      NumAddresses = bdGetHostByName::getNumAddresses(_RDI->m_getHostByName);
      for ( i = 0; i < NumAddresses; ++i )
      {
        bdGetHostByName::getAddressAt(_RDI->m_getHostByName, &result, i);
        bdAddr::bdAddr(&value, &result, _RDI->m_params.m_natTravPort);
        bdAddr::toString(&value, str, 0x16ui64);
        v30 = 0;
        if ( _RDI->m_natTravAddrs.m_size )
        {
          while ( !bdSockAddr::compare(&value.m_address, &_RDI->m_natTravAddrs.m_data[v30].m_address, 1) )
          {
            if ( ++v30 >= _RDI->m_natTravAddrs.m_size )
              goto LABEL_22;
          }
          v34 = bdArray<bdString>::operator[](&_RDI->m_params.m_natTravHosts, _RDI->m_currentNatTravHostIndex);
          Buffer = bdString::getBuffer(v34);
          bdLogMessage(BD_LOG_INFO, "info/", "bdNet/net", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdnet.cpp", "bdNetImpl::pump", 0xFCu, "Duplicate IP %s for Host: %s ignored", str, Buffer);
        }
        else
        {
LABEL_22:
          v31 = bdArray<bdString>::operator[](&_RDI->m_params.m_natTravHosts, _RDI->m_currentNatTravHostIndex);
          v32 = bdString::getBuffer(v31);
          bdLogMessage(BD_LOG_INFO, "info/", "bdNet/net", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdnet.cpp", "bdNetImpl::pump", 0xF7u, "Adding IP %s for Host: %s ", str, v32);
          bdArray<bdAddr>::pushBack(&_RDI->m_natTravAddrs, &value);
        }
        bdSockAddr::bdSockAddr(&v169, &result);
        bdNetTelemetry::finishGetHostByName(&_RDI->m_telemetry, _RDI->m_telemetryCurrentGetHostIndex, v33);
      }
      ++_RDI->m_currentNatTravHostIndex;
      p_m_UPnP = &_RDI->m_UPnP;
    }
    else
    {
      v36 = bdArray<bdString>::operator[](&_RDI->m_params.m_natTravHosts, _RDI->m_currentNatTravHostIndex);
      v37 = bdString::getBuffer(v36);
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdNet/net", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdnet.cpp", "bdNetImpl::pump", 0x106u, "No IP found for Host: %s ", v37);
      ++_RDI->m_currentNatTravHostIndex;
      bdSockAddr::bdSockAddr(&v170, 0xFF00FF00);
      bdNetTelemetry::finishGetHostByName(&_RDI->m_telemetry, _RDI->m_telemetryCurrentGetHostIndex, v38);
    }
    m_currentNatTravHostIndex = _RDI->m_currentNatTravHostIndex;
    v40 = m_currentNatTravHostIndex == m_size;
    if ( m_currentNatTravHostIndex < m_size )
    {
      if ( v27 != BD_LOOKUP_PENDING )
      {
        bdGetHostByName::quit(_RDI->m_getHostByName);
        v41 = _RDI->m_getHostByName;
        __asm { vmovss  xmm6, dword ptr [rdi+0E0h] }
        v43 = bdArray<bdString>::operator[](&_RDI->m_params.m_natTravHosts, _RDI->m_currentNatTravHostIndex);
        v44 = bdString::getBuffer(v43);
        __asm { vmovd   r8d, xmm6; config }
        if ( !bdGetHostByName::start(v41, v44, _ER8) )
        {
          bdLogMessage(BD_LOG_WARNING, "warn/", "bdNet/net", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdnet.cpp", "bdNetImpl::pump", 0x113u, "Failed to start DNS lookup task.");
          _RDI->m_status = BD_NET_INIT_FAILED;
          bdNetTelemetry::setStatus(&_RDI->m_telemetry, 255);
          if ( _RDI->m_telemetryPending )
          {
            bdTelemetry::addNet(&_RDI->m_telemetry);
            _RDI->m_telemetryPending = 0;
          }
        }
        v46 = bdArray<bdString>::operator[](&_RDI->m_params.m_natTravHosts, _RDI->m_currentNatTravHostIndex);
        v47 = bdString::getBuffer(v46);
        _RDI->m_telemetryCurrentGetHostIndex = bdNetTelemetry::startGetHostByName(&_RDI->m_telemetry, v47);
        m_currentNatTravHostIndex = _RDI->m_currentNatTravHostIndex;
      }
      v40 = m_currentNatTravHostIndex == m_size;
    }
    if ( v40 )
    {
      bdGetHostByName::quit(_RDI->m_getHostByName);
      v48 = _RDI->m_getHostByName;
      if ( v48 )
        ((void (__fastcall *)(bdGetHostByName *, __int64))v48->~bdRunnable)(v48, 1i64);
      _RDI->m_getHostByName = NULL;
    }
  }
  if ( !_RDI->m_getHostByName && !bdUPnP::isRunning(p_m_UPnP) && bdUPnP::getPortStatus(p_m_UPnP) != BD_UPNP_PORT_COLLISION_FOUND && !_RDI->m_ipDiscClient && !_RDI->m_natTypeDiscClient )
  {
    bdAddr::bdAddr(&v187);
    if ( bdSockAddr::compare(&_RDI->m_params.m_overridePublicAddr.m_address, v49, 1) )
    {
      if ( !_RDI->m_natTravAddrs.m_size )
      {
        v61 = 0;
        if ( _RDI->m_params.m_natTravHosts.m_size )
        {
          do
          {
            v62 = bdArray<bdString>::operator[](&_RDI->m_params.m_natTravHosts, v61);
            v63 = bdString::getBuffer(v62);
            bdLogMessage(BD_LOG_WARNING, "warn/", "bdNet/net", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdnet.cpp", "bdNetImpl::pump", 0x149u, "Failed to lookup address %s", v63);
            ++v61;
          }
          while ( v61 < _RDI->m_params.m_natTravHosts.m_size );
          p_m_UPnP = &_RDI->m_UPnP;
        }
        goto LABEL_56;
      }
      v50 = bdArray<bdAddr>::operator[](&_RDI->m_natTravAddrs, _RDI->m_currentNatTravAddrIndex);
      bdAddr::bdAddr(&serverAddr, v50);
      v51 = (bdIPDiscoveryClient *)bdMemory::allocate(0x2D8ui64);
      v150 = (__int64)v51;
      if ( v51 )
      {
        bdIPDiscoveryClient::bdIPDiscoveryClient(v51);
        v53 = v52;
      }
      else
      {
        v53 = NULL;
      }
      _RDI->m_ipDiscClient = v53;
      __asm
      {
        vmovsd  xmm0, qword ptr [rdi+1D0h]
        vmovsd  [rbp+1410h+var_1450], xmm0
      }
      *(_DWORD *)&v159.m_version = *(_DWORD *)&_RDI->m_params.m_IPDiscoveryConfig.m_version;
      v55 = bdIPDiscoveryClient::init(v53, _RDI->m_params.m_socket, &serverAddr, &v159);
      v56 = (bdNATTypeDiscoveryClient *)bdMemory::allocate(0x10D0ui64);
      v150 = (__int64)v56;
      if ( v56 )
      {
        bdNATTypeDiscoveryClient::bdNATTypeDiscoveryClient(v56);
        v58 = v57;
      }
      else
      {
        v58 = NULL;
      }
      _RDI->m_natTypeDiscClient = v58;
      bdNATTypeDiscoveryConfig::bdNATTypeDiscoveryConfig(&v158);
      v60 = bdNATTypeDiscoveryClient::init(v58, _RDI->m_params.m_socket, &serverAddr, *v59);
      if ( !v55 )
      {
        bdLogMessage(BD_LOG_WARNING, "warn/", "bdNet/net", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdnet.cpp", "bdNetImpl::pump", 0x13Cu, "Failed to start IP discovery");
        _RDI->m_status = BD_NET_ONLINE_FAILED;
        bdNetTelemetry::setStatus(&_RDI->m_telemetry, 254);
        if ( _RDI->m_telemetryPending )
        {
          bdTelemetry::addNet(&_RDI->m_telemetry);
          _RDI->m_telemetryPending = 0;
        }
      }
      if ( !v60 )
      {
        bdLogMessage(BD_LOG_WARNING, "warn/", "bdNet/net", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdnet.cpp", "bdNetImpl::pump", 0x141u, "Failed to start NAT type discovery");
LABEL_56:
        _RDI->m_status = BD_NET_ONLINE_FAILED;
        bdNetTelemetry::setStatus(&_RDI->m_telemetry, 254);
        if ( _RDI->m_telemetryPending )
        {
          bdTelemetry::addNet(&_RDI->m_telemetry);
          _RDI->m_telemetryPending = 0;
        }
      }
    }
    else
    {
      localAddrs.m_data = NULL;
      *(_QWORD *)&localAddrs.m_capacity = 0i64;
      for ( j = 0; j < _RDI->m_params.m_localAddresses.m_size; ++j )
      {
        m_gamePort = _RDI->m_params.m_gamePort;
        v66 = bdArray<bdSockAddr>::operator[](&_RDI->m_params.m_localAddresses, j);
        bdAddr::bdAddr(&v185, v66, m_gamePort);
        bdArray<bdAddr>::pushBack(&localAddrs, &v185);
      }
      bdAddr::bdAddr(&publicAddr, &_RDI->m_params.m_overridePublicAddr);
      bdAddr::toString(&publicAddr, v189, 0x16ui64);
      bdLogMessage(BD_LOG_INFO, "info/", "bdNet/net", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdnet.cpp", "bdNetImpl::pump", 0x160u, "Public IP overriding specified. Disabling STUN. Public address: %s.", v189);
      bdAddr::bdAddr(&externalAddr);
      if ( bdUPnP::getExternalAddr(p_m_UPnP, &externalAddr) )
      {
        if ( bdSockAddr::compare(&externalAddr.m_address, &publicAddr.m_address, 1) )
          bdLogMessage(BD_LOG_INFO, "info/", "bdNet/net", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdnet.cpp", "bdNetImpl::pump", 0x167u, "UPnP mapping confirmed.");
        else
          bdLogMessage(BD_LOG_INFO, "info/", "bdNet/net", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdnet.cpp", "bdNetImpl::pump", 0x16Bu, "Public IP specified does not match the one detected through UPnP.");
      }
      v67 = (bdCommonAddr *)bdMemory::allocate(0x4E0ui64);
      v158 = (bdNATTypeDiscoveryConfig)v67;
      if ( v67 )
      {
        bdCommonAddr::bdCommonAddr(v67, &localAddrs, &publicAddr, (const bdNATType)_RDI->m_params.m_overrideNATType, (const bdPlatformID)_RDI->m_params.m_overridePlatformID);
        v69 = v68;
      }
      else
      {
        v69 = 0i64;
      }
      v162 = v69;
      if ( v69 )
        _InterlockedExchangeAdd((volatile signed __int32 *)(v69 + 8), 1u);
      m_socketRouter = _RDI->m_socketRouter;
      init = m_socketRouter->init;
      v149 = v69;
      if ( v69 )
        _InterlockedExchangeAdd((volatile signed __int32 *)(v69 + 8), 1u);
      ((void (__fastcall *)(bdSocketRouter *, bdSocket *, __int64 *, bdSocketRouterConfig *))init)(m_socketRouter, _RDI->m_params.m_socket, &v149, &_RDI->m_params.m_socketRouterConfig);
      bdConnectionStore::init(&_RDI->m_connectionStore, _RDI->m_socketRouter, &_RDI->m_params.m_connectionStoreConfig);
      _RDI->m_status = BD_NET_DONE;
      bdNetTelemetry::setStatus(&_RDI->m_telemetry, 2);
      if ( _RDI->m_telemetryPending )
      {
        bdTelemetry::addNet(&_RDI->m_telemetry);
        _RDI->m_telemetryPending = 0;
      }
      if ( v69 && _InterlockedExchangeAdd((volatile signed __int32 *)(v69 + 8), 0xFFFFFFFF) == 1 )
        (**(void (__fastcall ***)(__int64, __int64))v69)(v69, 1i64);
      bdMemory::deallocate(localAddrs.m_data);
    }
  }
  if ( _RDI->m_status == BD_NET_PENDING )
  {
    bdAddr::bdAddr(&other);
    v72 = _RDI->m_params.m_socket->receiveFrom(_RDI->m_params.m_socket, &other, v190, 1288u);
    m_ipDiscClient = _RDI->m_ipDiscClient;
    if ( m_ipDiscClient )
    {
      bdAddr::bdAddr(&v171, &other);
      bdIPDiscoveryClient::pump(m_ipDiscClient, v74, v190, v72);
      v75 = bdIPDiscoveryClient::getStatus(_RDI->m_ipDiscClient);
      v76 = (char)v153;
      if ( v75 != BD_IP_DISC_RUNNING )
        v76 = 1;
    }
    else
    {
      v76 = (char)v153;
    }
    m_natTypeDiscClient = _RDI->m_natTypeDiscClient;
    if ( m_natTypeDiscClient )
    {
      bdAddr::bdAddr(&v172, &other);
      bdNATTypeDiscoveryClient::pump(m_natTypeDiscClient, v78, v190, v72);
      v79 = bdNATTypeDiscoveryClient::isRunning(_RDI->m_natTypeDiscClient);
      v80 = (char)v154;
      if ( !v79 )
        v80 = 1;
    }
    else
    {
      v80 = (char)v154;
    }
    if ( (_DWORD)v152 == m_size && v76 && v80 )
    {
      bdHandleAssert(_RDI->m_ipDiscClient != NULL, "m_ipDiscClient != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdnet.cpp", "bdNetImpl::pump", 0x19Au, "null m_ipDiscClient");
      bdHandleAssert(_RDI->m_natTypeDiscClient != NULL, "m_natTypeDiscClient != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdnet.cpp", "bdNetImpl::pump", 0x19Bu, "null m_natTypeDiscClient");
      if ( bdIPDiscoveryClient::getStatus(_RDI->m_ipDiscClient) == BD_IP_DISC_SUCCESS && bdNATTypeDiscoveryClient::getStatus(_RDI->m_natTypeDiscClient) == BD_NTDCS_FINI )
      {
        v155.m_data = NULL;
        *(_QWORD *)&v155.m_capacity = 0i64;
        for ( k = 0; k < _RDI->m_params.m_localAddresses.m_size; ++k )
        {
          v82 = _RDI->m_params.m_gamePort;
          v83 = bdArray<bdSockAddr>::operator[](&_RDI->m_params.m_localAddresses, k);
          bdAddr::bdAddr(&v186, v83, v82);
          bdArray<bdAddr>::pushBack(&v155, &v186);
        }
        PublicAddress = bdIPDiscoveryClient::getPublicAddress(_RDI->m_ipDiscClient);
        bdAddr::bdAddr(&v183, PublicAddress);
        NATType = bdNATTypeDiscoveryClient::getNATType(_RDI->m_natTypeDiscClient);
        bdAddr::bdAddr(&v182);
        if ( bdUPnP::getExternalAddr(p_m_UPnP, &v182) )
        {
          if ( bdSockAddr::compare(&v182.m_address, &v183.m_address, 1) )
            bdLogMessage(BD_LOG_INFO, "info/", "bdNet/net", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdnet.cpp", "bdNetImpl::pump", 0x1B1u, "UPnP mapping confirmed.");
          else
            bdLogMessage(BD_LOG_INFO, "info/", "bdNet/net", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdnet.cpp", "bdNetImpl::pump", 0x1B5u, "External IP detected through STUN server does not match the one detected through UPnP. Possible Nested NATs.");
        }
        v86 = (bdCommonAddr *)bdMemory::allocate(0x4E0ui64);
        v152 = (bdAddr *)v86;
        if ( v86 )
        {
          bdCommonAddr::bdCommonAddr(v86, &v155, &v183, NATType, (const bdPlatformID)_RDI->m_params.m_overridePlatformID);
          v88 = v87;
        }
        else
        {
          v88 = 0i64;
        }
        v156 = v88;
        if ( v88 )
          _InterlockedExchangeAdd((volatile signed __int32 *)(v88 + 8), 1u);
        v89 = _RDI->m_ipDiscClient;
        if ( v89 )
        {
          bdIPDiscoveryClient::quit(v89);
          v90 = _RDI->m_ipDiscClient;
          if ( v90 )
          {
            bdIPDiscoveryClient::~bdIPDiscoveryClient(_RDI->m_ipDiscClient);
            bdMemory::deallocate(v90);
          }
          _RDI->m_ipDiscClient = NULL;
        }
        v91 = _RDI->m_natTypeDiscClient;
        if ( v91 )
        {
          bdNATTypeDiscoveryClient::quit(v91);
          v92 = _RDI->m_natTypeDiscClient;
          if ( v92 )
          {
            bdNATTypeDiscoveryClient::~bdNATTypeDiscoveryClient(_RDI->m_natTypeDiscClient);
            bdMemory::deallocate(v92);
          }
          _RDI->m_natTypeDiscClient = NULL;
        }
        m_capacity = _RDI->m_natTravAddrs.m_capacity;
        introducers.m_capacity = m_capacity;
        introducers.m_size = _RDI->m_natTravAddrs.m_size;
        v94 = NULL;
        if ( (_DWORD)m_capacity )
        {
          v94 = (bdAddr *)bdMemory::allocate(152 * m_capacity);
          v152 = v94;
          v95 = _RDI->m_natTravAddrs.m_size;
          if ( v95 )
          {
            v96 = v94;
            v97 = (char *)_RDI->m_natTravAddrs.m_data - (char *)v94;
            v98 = v95;
            do
            {
              v154 = v96;
              v153 = v96;
              if ( v96 )
                bdAddr::bdAddr(v96, (bdAddr *)((char *)v96 + v97));
              ++v96;
              --v98;
            }
            while ( v98 );
            v94 = v152;
          }
        }
        introducers.m_data = v94;
        if ( _RDI->m_currentNatTravAddrIndex )
        {
          v99 = bdArray<bdAddr>::operator[](&_RDI->m_natTravAddrs, 0);
          bdAddr::bdAddr(&v175, v99);
          _RAX = bdArray<bdAddr>::operator[](&_RDI->m_natTravAddrs, _RDI->m_currentNatTravAddrIndex);
          __asm
          {
            vmovups ymm0, ymmword ptr [rax]
            vmovups [rbp+1410h+var_13B8], ymm0
            vmovups ymm0, ymmword ptr [rax+20h]
            vmovups [rbp+1410h+var_1418], ymm0
            vmovups ymm0, ymmword ptr [rax+40h]
            vmovups [rbp+1410h+var_13F8], ymm0
            vmovups ymm0, ymmword ptr [rax+60h]
            vmovups [rbp+1410h+var_13D8], ymm0
            vmovups xmm7, xmmword ptr [rax+80h]
            vmovsd  xmm6, qword ptr [rax+90h]
          }
          bdHandleAssert(introducers.m_size != 0, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<class bdAddr>::operator []", 0x68u, "bdArray<T>::operator[], rangecheck failed");
          _RAX = introducers.m_data;
          __asm
          {
            vmovups ymm0, [rbp+1410h+var_13B8]
            vmovups ymmword ptr [rax], ymm0
            vmovups ymm1, [rbp+1410h+var_1418]
            vmovups ymmword ptr [rax+20h], ymm1
            vmovups ymm0, [rbp+1410h+var_13F8]
            vmovups ymmword ptr [rax+40h], ymm0
            vmovups ymm1, [rbp+1410h+var_13D8]
            vmovups ymmword ptr [rax+60h], ymm1
            vmovups xmmword ptr [rax+80h], xmm7
            vmovsd  qword ptr [rax+90h], xmm6
            vmovups ymm0, ymmword ptr [rbp+1410h+var_D90.m_address.inUn]
            vmovups [rbp+1410h+var_13D8], ymm0
            vmovups ymm0, ymmword ptr [rbp+1410h+var_D90.m_address.inUn+20h]
            vmovups [rbp+1410h+var_13F8], ymm0
            vmovups ymm0, ymmword ptr [rbp+1410h+var_D90.m_address.inUn+40h]
            vmovups [rbp+1410h+var_1418], ymm0
            vmovups ymm0, ymmword ptr [rbp+1410h+var_D90.m_address.inUn+60h]
            vmovups [rbp+1410h+var_13B8], ymm0
            vmovups xmm7, xmmword ptr [rbp+1410h+var_D90.m_relayRoute.m_relayID]
            vmovsd  xmm6, qword ptr [rbp+1410h+var_D90.m_type]
          }
          m_currentNatTravAddrIndex = _RDI->m_currentNatTravAddrIndex;
          bdHandleAssert((unsigned int)m_currentNatTravAddrIndex < introducers.m_size, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<class bdAddr>::operator []", 0x68u, "bdArray<T>::operator[], rangecheck failed");
          _RCX = 152 * m_currentNatTravAddrIndex;
          _RAX = introducers.m_data;
          __asm
          {
            vmovups ymm0, [rbp+1410h+var_13D8]
            vmovups ymmword ptr [rcx+rax], ymm0
            vmovups ymm1, [rbp+1410h+var_13F8]
            vmovups ymmword ptr [rcx+rax+20h], ymm1
            vmovups ymm0, [rbp+1410h+var_1418]
            vmovups ymmword ptr [rcx+rax+40h], ymm0
            vmovups ymm1, [rbp+1410h+var_13B8]
            vmovups ymmword ptr [rcx+rax+60h], ymm1
            vmovups xmmword ptr [rcx+rax+80h], xmm7
            vmovsd  qword ptr [rcx+rax+90h], xmm6
          }
        }
        v125 = _RDI->m_socketRouter;
        v126 = v125->init;
        v150 = v88;
        if ( v88 )
          _InterlockedExchangeAdd((volatile signed __int32 *)(v88 + 8), 1u);
        ((void (__fastcall *)(bdSocketRouter *, bdSocket *, __int64 *, bdSocketRouterConfig *))v126)(v125, _RDI->m_params.m_socket, &v150, &_RDI->m_params.m_socketRouterConfig);
        bdSocketRouter::setupIntroducers(_RDI->m_socketRouter, &introducers);
        bdConnectionStore::init(&_RDI->m_connectionStore, _RDI->m_socketRouter, &_RDI->m_params.m_connectionStoreConfig);
        _RDI->m_status = BD_NET_DONE;
        bdNetTelemetry::setStatus(&_RDI->m_telemetry, 2);
        if ( _RDI->m_telemetryPending )
        {
          bdTelemetry::addNet(&_RDI->m_telemetry);
          _RDI->m_telemetryPending = 0;
        }
        bdMemory::deallocate(introducers.m_data);
        introducers.m_data = NULL;
        *(_QWORD *)&introducers.m_capacity = 0i64;
        if ( v88 && _InterlockedExchangeAdd((volatile signed __int32 *)(v88 + 8), 0xFFFFFFFF) == 1 )
          (**(void (__fastcall ***)(__int64, __int64))v88)(v88, 1i64);
        bdMemory::deallocate(v155.m_data);
        goto LABEL_155;
      }
      if ( _RDI->m_currentNatTravAddrIndex + 1 >= _RDI->m_natTravAddrs.m_size )
      {
        if ( _RDI->m_params.m_natTravHosts.m_size )
        {
          do
          {
            v142 = bdArray<bdString>::operator[](&_RDI->m_params.m_natTravHosts, (const unsigned int)v20);
            v143 = bdString::getBuffer(v142);
            bdLogMessage(BD_LOG_WARNING, "warn/", "bdNet/net", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdnet.cpp", "bdNetImpl::pump", 0x20Fu, "Failed to do IP and NAT discovery using %s", v143);
            LODWORD(v20) = (_DWORD)v20 + 1;
          }
          while ( (unsigned int)v20 < _RDI->m_params.m_natTravHosts.m_size );
        }
        goto LABEL_153;
      }
      bdLogMessage(BD_LOG_INFO, "info/", "bdNet/net", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdnet.cpp", "bdNetImpl::pump", 0x1E8u, "Trying next IP address for IP and NAT discovery.");
      v127 = bdArray<bdAddr>::operator[](&_RDI->m_natTravAddrs, ++_RDI->m_currentNatTravAddrIndex);
      bdAddr::bdAddr(&v184, v127);
      v128 = _RDI->m_ipDiscClient;
      if ( v128 )
      {
        bdIPDiscoveryClient::quit(v128);
        v129 = _RDI->m_ipDiscClient;
        if ( v129 )
        {
          bdIPDiscoveryClient::~bdIPDiscoveryClient(_RDI->m_ipDiscClient);
          bdMemory::deallocate(v129);
        }
        _RDI->m_ipDiscClient = NULL;
      }
      v130 = (bdIPDiscoveryClient *)bdMemory::allocate(0x2D8ui64);
      v156 = (__int64)v130;
      if ( v130 )
      {
        bdIPDiscoveryClient::bdIPDiscoveryClient(v130);
        v132 = v131;
      }
      else
      {
        v132 = NULL;
      }
      _RDI->m_ipDiscClient = v132;
      bdIPDiscoveryConfig::bdIPDiscoveryConfig(&v168);
      __asm
      {
        vmovsd  xmm0, qword ptr [rax]
        vmovsd  [rbp+1410h+var_1440], xmm0
      }
      *(_DWORD *)&v160.m_version = *(_DWORD *)(_RAX + 8);
      v135 = bdIPDiscoveryClient::init(v132, _RDI->m_params.m_socket, &v184, &v160);
      v136 = _RDI->m_natTypeDiscClient;
      if ( v136 )
      {
        bdNATTypeDiscoveryClient::quit(v136);
        v137 = _RDI->m_natTypeDiscClient;
        if ( v137 )
        {
          bdNATTypeDiscoveryClient::~bdNATTypeDiscoveryClient(_RDI->m_natTypeDiscClient);
          bdMemory::deallocate(v137);
        }
        _RDI->m_natTypeDiscClient = NULL;
      }
      v138 = (bdNATTypeDiscoveryClient *)bdMemory::allocate(0x10D0ui64);
      v156 = (__int64)v138;
      if ( v138 )
      {
        bdNATTypeDiscoveryClient::bdNATTypeDiscoveryClient(v138);
        v20 = v139;
      }
      _RDI->m_natTypeDiscClient = v20;
      bdNATTypeDiscoveryConfig::bdNATTypeDiscoveryConfig(&v163);
      v141 = bdNATTypeDiscoveryClient::init(v20, _RDI->m_params.m_socket, &v184, *v140);
      if ( !v135 )
      {
        bdLogMessage(BD_LOG_WARNING, "warn/", "bdNet/net", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdnet.cpp", "bdNetImpl::pump", 0x202u, "Failed to start IP discovery");
        _RDI->m_status = BD_NET_ONLINE_FAILED;
        bdNetTelemetry::setStatus(&_RDI->m_telemetry, 254);
        if ( _RDI->m_telemetryPending )
        {
          bdTelemetry::addNet(&_RDI->m_telemetry);
          _RDI->m_telemetryPending = 0;
        }
      }
      if ( !v141 )
      {
        bdLogMessage(BD_LOG_WARNING, "warn/", "bdNet/net", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdnet.cpp", "bdNetImpl::pump", 0x207u, "Failed to start NAT discovery");
LABEL_153:
        _RDI->m_status = BD_NET_ONLINE_FAILED;
        bdNetTelemetry::setStatus(&_RDI->m_telemetry, 254);
        if ( _RDI->m_telemetryPending )
        {
          bdTelemetry::addNet(&_RDI->m_telemetry);
          _RDI->m_telemetryPending = 0;
        }
      }
    }
  }
LABEL_155:
  _R11 = &v193;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
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
bool bdNetImpl::start(bdNetImpl *this, const bdNetStartParams *params)
{
  bool v6; 
  unsigned int m_size; 
  unsigned __int16 m_gamePort; 
  const bdSockAddr *m_data; 
  bdAddr *v31; 
  char v32; 
  bdSocketRouter *v40; 
  __int64 v41; 
  bdSocketRouter *v42; 
  bdNetTelemetry *p_m_telemetry; 
  bdGetHostByName *v44; 
  __int64 v45; 
  bdString *v47; 
  const char *Buffer; 
  bool v50; 
  bdString *v51; 
  const char *v52; 
  bdUPnPConfig *v53; 
  bool v54; 
  unsigned int v55; 
  unsigned __int16 v56; 
  const bdSockAddr *v57; 
  bdCommonAddr *v58; 
  __int64 v59; 
  bdSocketRouter *m_socketRouter; 
  bool (__fastcall *init)(bdSocketRouter *, bdSocket *, const bdReference<bdCommonAddr>, const bdSocketRouterConfig *); 
  __int64 v63; 
  bdArray<bdAddr> localAddrs; 
  __int64 v65; 
  __int64 v66; 
  bdUPnPConfig v67; 
  bdAddr addr; 
  bdAddr value; 
  bdAddr publicAddr; 
  bdSockAddr result; 
  char v72; 
  bdAddr v73; 
  void *retaddr; 

  _RAX = &retaddr;
  v65 = -2i64;
  __asm { vmovaps xmmword ptr [rax-48h], xmm6 }
  _RSI = params;
  _RBX = this;
  v6 = 1;
  if ( this->m_status )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdNet/net", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdnet.cpp", "bdNetImpl::start", 0x22u, "bdNet can only be started when in the uninitialized state. Call stop() to reset");
LABEL_40:
    v6 = 0;
LABEL_41:
    v54 = v6;
    goto LABEL_42;
  }
  bdNetTelemetry::setNetStart(&this->m_telemetry, params);
  _RBX->m_telemetryCurrentGetHostIndex = -1;
  _RBX->m_telemetryPending = 1;
  _RBX->m_params.m_onlineGame = _RSI->m_onlineGame;
  _RBX->m_params.m_gamePort = _RSI->m_gamePort;
  _RBX->m_params.m_socket = _RSI->m_socket;
  bdArray<bdString>::operator=(&_RBX->m_params.m_natTravHosts, &_RSI->m_natTravHosts);
  _RBX->m_params.m_natTravPort = _RSI->m_natTravPort;
  bdArray<bdSockAddr>::operator=(&_RBX->m_params.m_localAddresses, &_RSI->m_localAddresses);
  __asm
  {
    vmovups ymm0, ymmword ptr [rsi+38h]
    vmovups ymmword ptr [rbx+40h], ymm0
    vmovups ymm1, ymmword ptr [rsi+58h]
    vmovups ymmword ptr [rbx+60h], ymm1
    vmovups ymm0, ymmword ptr [rsi+78h]
    vmovups ymmword ptr [rbx+80h], ymm0
    vmovups ymm1, ymmword ptr [rsi+98h]
    vmovups ymmword ptr [rbx+0A0h], ymm1
    vmovups xmm0, xmmword ptr [rsi+0B8h]
    vmovups xmmword ptr [rbx+0C0h], xmm0
    vmovsd  xmm1, qword ptr [rsi+0C8h]
    vmovsd  qword ptr [rbx+0D0h], xmm1
  }
  _RBX->m_params.m_overrideNATType = _RSI->m_overrideNATType;
  _RBX->m_params.m_overridePlatformID = _RSI->m_overridePlatformID;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+0D8h]
    vmovss  dword ptr [rbx+0E0h], xmm0
    vmovups xmm0, xmmword ptr [rsi+0E0h]
    vmovups xmmword ptr [rbx+0E8h], xmm0
    vmovups xmm1, xmmword ptr [rsi+0F0h]
    vmovups xmmword ptr [rbx+0F8h], xmm1
    vmovups xmm0, xmmword ptr [rsi+100h]
    vmovups xmmword ptr [rbx+108h], xmm0
    vmovups xmm1, xmmword ptr [rsi+110h]
    vmovups xmmword ptr [rbx+118h], xmm1
    vmovups xmm0, xmmword ptr [rsi+120h]
    vmovups xmmword ptr [rbx+128h], xmm0
    vmovups xmm1, xmmword ptr [rsi+130h]
    vmovups xmmword ptr [rbx+138h], xmm1
    vmovups xmm0, xmmword ptr [rsi+140h]
    vmovups xmmword ptr [rbx+148h], xmm0
    vmovups xmm0, xmmword ptr [rsi+150h]
    vmovups xmmword ptr [rbx+158h], xmm0
    vmovups xmm1, xmmword ptr [rsi+160h]
    vmovups xmmword ptr [rbx+168h], xmm1
    vmovups xmm0, xmmword ptr [rsi+170h]
    vmovups xmmword ptr [rbx+178h], xmm0
    vmovups xmm1, xmmword ptr [rsi+180h]
    vmovups xmmword ptr [rbx+188h], xmm1
  }
  _RBX->m_params.m_useAnyIP = _RSI->m_useAnyIP;
  _RBX->m_params.m_useMediaStreamingMode = _RSI->m_useMediaStreamingMode;
  _RBX->m_params.m_threadStackSize = _RSI->m_threadStackSize;
  __asm
  {
    vmovups ymm0, ymmword ptr [rsi+198h]
    vmovups ymmword ptr [rbx+1A0h], ymm0
    vmovups xmm0, xmmword ptr [rsi+1B8h]
    vmovups xmmword ptr [rbx+1C0h], xmm0
    vmovsd  xmm0, qword ptr [rsi+1C8h]
    vmovsd  qword ptr [rbx+1D0h], xmm0
  }
  *(_DWORD *)&_RBX->m_params.m_IPDiscoveryConfig.m_version = *(_DWORD *)&_RSI->m_IPDiscoveryConfig.m_version;
  bdAddr::bdAddr(&addr);
  if ( _RBX->m_params.m_useAnyIP )
  {
    m_gamePort = _RBX->m_params.m_gamePort;
    m_data = bdSockAddr::Any(&result, 2u, 0);
    v31 = &v73;
  }
  else
  {
    m_size = _RBX->m_params.m_localAddresses.m_size;
    if ( m_size > 1 )
    {
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdNet/net", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdnet.cpp", "bdNetImpl::getBindAddr", 0x32Au, "When binding to a specific IP, entries in m_localAddresses other than the zeroth are ignored");
      m_size = _RBX->m_params.m_localAddresses.m_size;
    }
    if ( !m_size )
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdNet/net", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdnet.cpp", "bdNetImpl::getBindAddr", 0x334u, "When binding to a specific IP, m_localAddresses should not be empty");
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdNet/net", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdnet.cpp", "bdNetImpl::start", 0x37u, "Failed to configure bind address");
      _RBX->m_status = BD_NET_PARAMS_CONFIG_ERROR;
      v32 = -4;
      goto LABEL_38;
    }
    m_gamePort = _RBX->m_params.m_gamePort;
    bdHandleAssert(_RBX->m_params.m_localAddresses.m_size != 0, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<class bdSockAddr>::operator []", 0x68u, "bdArray<T>::operator[], rangecheck failed");
    m_data = _RBX->m_params.m_localAddresses.m_data;
    v31 = (bdAddr *)&v72;
  }
  bdAddr::bdAddr(v31, m_data, m_gamePort);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rbp+410h+addr.m_address.inUn], ymm0
    vmovups ymm1, ymmword ptr [rax+20h]
    vmovups ymmword ptr [rbp+410h+addr.m_address.inUn+20h], ymm1
    vmovups ymm0, ymmword ptr [rax+40h]
    vmovups ymmword ptr [rbp+410h+addr.m_address.inUn+40h], ymm0
    vmovups ymm1, ymmword ptr [rax+60h]
    vmovups ymmword ptr [rbp+410h+addr.m_address.inUn+60h], ymm1
    vmovups xmm0, xmmword ptr [rax+80h]
    vmovups xmmword ptr [rbp+410h+addr.m_relayRoute.m_relayID], xmm0
    vmovsd  xmm1, qword ptr [rax+90h]
    vmovsd  qword ptr [rbp+410h+addr.m_type], xmm1
  }
  if ( !bdNetImpl::bindRandPort(&_RBX->m_params, &addr) )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdNet/net", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdnet.cpp", "bdNetImpl::start", 0x89u, "Failed to find a free port");
    _RBX->m_status = BD_NET_BIND_FAILED;
    v32 = -3;
LABEL_38:
    bdNetTelemetry::setStatus(&_RBX->m_telemetry, v32);
    if ( _RBX->m_telemetryPending )
    {
      bdTelemetry::addNet(&_RBX->m_telemetry);
      _RBX->m_telemetryPending = 0;
    }
    goto LABEL_40;
  }
  v40 = (bdSocketRouter *)bdMemory::allocate(0x4B8ui64);
  v63 = (__int64)v40;
  v41 = 0i64;
  if ( v40 )
    bdSocketRouter::bdSocketRouter(v40);
  else
    v42 = NULL;
  _RBX->m_socketRouter = v42;
  p_m_telemetry = &_RBX->m_telemetry;
  if ( _RBX->m_params.m_onlineGame )
  {
    _RBX->m_status = BD_NET_PENDING;
    bdNetTelemetry::setStatus(p_m_telemetry, 1);
    *(_QWORD *)&_RBX->m_currentNatTravAddrIndex = 0i64;
    v44 = (bdGetHostByName *)bdMemory::allocate(0x240ui64);
    v63 = (__int64)v44;
    if ( v44 )
    {
      bdGetHostByName::bdGetHostByName(v44, _RSI->m_threadStackSize);
      v41 = v45;
    }
    _RBX->m_getHostByName = (bdGetHostByName *)v41;
    __asm { vmovss  xmm6, dword ptr [rbx+0E0h] }
    v47 = bdArray<bdString>::operator[](&_RBX->m_params.m_natTravHosts, _RBX->m_currentNatTravHostIndex);
    Buffer = bdString::getBuffer(v47);
    __asm { vmovd   r8d, xmm6; config }
    v50 = bdGetHostByName::start((bdGetHostByName *)v41, Buffer, _ER8);
    v51 = bdArray<bdString>::operator[](&_RBX->m_params.m_natTravHosts, _RBX->m_currentNatTravHostIndex);
    v52 = bdString::getBuffer(v51);
    _RBX->m_telemetryCurrentGetHostIndex = bdNetTelemetry::startGetHostByName(&_RBX->m_telemetry, v52);
    if ( v50 )
    {
      bdUPnPConfig::bdUPnPConfig(&v67, &_RBX->m_params.m_UPnPConfig);
      if ( !bdUPnP::init(&_RBX->m_UPnP, _RBX->m_params.m_gamePort, &_RBX->m_params.m_localAddresses, v53) )
        bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdNet/net", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdnet.cpp", "bdNetImpl::start", 0x64u, "UPnP module failed to start.");
      goto LABEL_41;
    }
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdNet/net", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdnet.cpp", "bdNetImpl::start", 0x59u, "Failed to start DNS lookup task.");
    _RBX->m_status = BD_NET_INIT_FAILED;
    v32 = -1;
    goto LABEL_38;
  }
  _RBX->m_status = BD_NET_DONE;
  bdNetTelemetry::setStatus(p_m_telemetry, 2);
  if ( _RBX->m_telemetryPending )
  {
    bdTelemetry::addNet(&_RBX->m_telemetry);
    _RBX->m_telemetryPending = 0;
  }
  if ( _RBX->m_params.m_localAddresses.m_size )
  {
    localAddrs.m_data = NULL;
    *(_QWORD *)&localAddrs.m_capacity = 0i64;
    v55 = 0;
    do
    {
      v56 = _RBX->m_params.m_gamePort;
      v57 = bdArray<bdSockAddr>::operator[](&_RBX->m_params.m_localAddresses, v55);
      bdAddr::bdAddr(&value, v57, v56);
      bdArray<bdAddr>::pushBack(&localAddrs, &value);
      ++v55;
    }
    while ( v55 < _RBX->m_params.m_localAddresses.m_size );
    bdAddr::bdAddr(&publicAddr);
    v58 = (bdCommonAddr *)bdMemory::allocate(0x4E0ui64);
    v63 = (__int64)v58;
    if ( v58 )
    {
      bdCommonAddr::bdCommonAddr(v58, &localAddrs, &publicAddr, BD_NAT_OPEN, (const bdPlatformID)_RBX->m_params.m_overridePlatformID);
      v41 = v59;
    }
    v66 = v41;
    if ( v41 )
      _InterlockedExchangeAdd((volatile signed __int32 *)(v41 + 8), 1u);
    m_socketRouter = _RBX->m_socketRouter;
    init = m_socketRouter->init;
    v63 = v41;
    if ( v41 )
      _InterlockedExchangeAdd((volatile signed __int32 *)(v41 + 8), 1u);
    ((void (__fastcall *)(bdSocketRouter *, bdSocket *, __int64 *, bdSocketRouterConfig *))init)(m_socketRouter, _RBX->m_params.m_socket, &v63, &_RBX->m_params.m_socketRouterConfig);
    bdConnectionStore::init(&_RBX->m_connectionStore, _RBX->m_socketRouter, &_RBX->m_params.m_connectionStoreConfig);
    if ( v41 && !_InterlockedDecrement((volatile signed __int32 *)(v41 + 8)) )
      (**(void (__fastcall ***)(__int64, __int64))v41)(v41, 1i64);
    bdMemory::deallocate(localAddrs.m_data);
    goto LABEL_41;
  }
  bdLogMessage(BD_LOG_WARNING, "warn/", "bdNet/net", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdnet.cpp", "bdNetImpl::start", 0x6Fu, "No local address specified when starting bdNet. See bdNetStartParams.");
  v54 = 0;
LABEL_42:
  __asm { vmovaps xmm6, xmmword ptr [rsp+510h+var_48+8] }
  return v54;
}

/*
==============
bdNetImpl::stop
==============
*/
void bdNetImpl::stop(bdNetImpl *this)
{
  char v6; 
  char v7; 
  char v8; 
  bdSocketRouter *m_socketRouter; 
  bdSocketRouter *v10; 
  bdSocket *m_socket; 
  bdSocket *v12; 
  bdIPDiscoveryClient *m_ipDiscClient; 
  bdIPDiscoveryClient *v14; 
  bdNATTypeDiscoveryClient *m_natTypeDiscClient; 
  bdNATTypeDiscoveryClient *v16; 
  bdGetHostByName *m_getHostByName; 
  bdGetHostByName *v18; 
  unsigned int m_size; 
  bdString *m_data; 
  __int64 v21; 
  void *retaddr; 
  bdStopwatch v25; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-38h], xmm6 }
  if ( bdUPnP::getState(&this->m_UPnP) )
    bdUPnP::startShutdown(&this->m_UPnP, BD_UPNP_DEVICE_SHUTDOWN_ELEGANT);
  bdConnectionStore::startShutdown(&this->m_connectionStore, BD_CONNECTION_STORE_SHUTDOWN_ELEGANT);
  bdStopwatch::bdStopwatch(&v25);
  bdStopwatch::start(&v25);
  __asm { vmovss  xmm6, cs:__real@3f800000 }
  while ( 1 )
  {
    v6 = 0;
    if ( bdConnectionStore::getStatus(&this->m_connectionStore) )
    {
      v6 = 1;
      if ( !bdConnectionStore::receiveAll(&this->m_connectionStore) )
        bdLogMessage(BD_LOG_WARNING, "warn/", "bdNet/net", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdnet.cpp", "bdNetImpl::receiveAll", 0x28Eu, "Failed to receive data for all connections in the connection store");
      bdConnectionStore::dispatchAll(&this->m_connectionStore);
      if ( !bdConnectionStore::flushAll(&this->m_connectionStore) )
        bdLogMessage(BD_LOG_WARNING, "warn/", "bdNet/net", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdnet.cpp", "bdNetImpl::sendAll", 0x284u, "Failed to flush all connections in the connection store");
    }
    if ( bdUPnP::getState(&this->m_UPnP) )
    {
      v6 = 1;
      bdUPnP::pump(&this->m_UPnP);
    }
    *(double *)&_XMM0 = bdStopwatch::getElapsedTimeInSeconds(&v25);
    __asm { vcomiss xmm0, xmm6 }
    if ( !(v7 | v8) )
      break;
    if ( !v6 )
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
    v10 = this->m_socketRouter;
    if ( v10 )
      ((void (__fastcall *)(bdSocketRouter *, __int64))v10->~bdNATTravListener)(v10, 1i64);
    this->m_socketRouter = NULL;
  }
  m_socket = this->m_params.m_socket;
  if ( m_socket )
  {
    if ( !m_socket->close(m_socket) )
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdNet/net", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdnet.cpp", "bdNetImpl::stop", 0x255u, "Game socket failed to close with an error");
    v12 = this->m_params.m_socket;
    if ( v12 )
      ((void (__fastcall *)(bdSocket *, __int64))v12->~bdSocket)(v12, 1i64);
    this->m_params.m_socket = NULL;
  }
  m_ipDiscClient = this->m_ipDiscClient;
  if ( m_ipDiscClient )
  {
    bdIPDiscoveryClient::quit(m_ipDiscClient);
    v14 = this->m_ipDiscClient;
    if ( v14 )
    {
      bdIPDiscoveryClient::~bdIPDiscoveryClient(this->m_ipDiscClient);
      bdMemory::deallocate(v14);
    }
    this->m_ipDiscClient = NULL;
  }
  m_natTypeDiscClient = this->m_natTypeDiscClient;
  if ( m_natTypeDiscClient )
  {
    bdNATTypeDiscoveryClient::quit(m_natTypeDiscClient);
    v16 = this->m_natTypeDiscClient;
    if ( v16 )
    {
      bdNATTypeDiscoveryClient::~bdNATTypeDiscoveryClient(this->m_natTypeDiscClient);
      bdMemory::deallocate(v16);
    }
    this->m_natTypeDiscClient = NULL;
  }
  m_getHostByName = this->m_getHostByName;
  if ( m_getHostByName )
  {
    bdGetHostByName::quit(m_getHostByName);
    v18 = this->m_getHostByName;
    if ( v18 )
      ((void (__fastcall *)(bdGetHostByName *, __int64))v18->~bdRunnable)(v18, 1i64);
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
    v21 = m_size;
    do
    {
      bdString::~bdString(m_data++);
      --v21;
    }
    while ( v21 );
    m_data = this->m_params.m_natTravHosts.m_data;
  }
  bdMemory::deallocate(m_data);
  this->m_params.m_natTravHosts.m_data = NULL;
  *(_QWORD *)&this->m_params.m_natTravHosts.m_capacity = 0i64;
  bdMemory::deallocate(this->m_natTravAddrs.m_data);
  this->m_natTravAddrs.m_data = NULL;
  *(_QWORD *)&this->m_natTravAddrs.m_capacity = 0i64;
  __asm { vmovaps xmm6, [rsp+88h+var_38] }
}

