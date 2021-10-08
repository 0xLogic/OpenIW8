/*
==============
bdNATTravClient::setNATTravInterleaveMode
==============
*/

void __fastcall bdNATTravClient::setNATTravInterleaveMode(bdNATTravClient *this, bool enable)
{
  ?setNATTravInterleaveMode@bdNATTravClient@@QEAAX_N@Z(this, enable);
}

/*
==============
bdNATTravClient::getTelemetry
==============
*/

bdNATTravTelemetry *__fastcall bdNATTravClient::getTelemetry(bdNATTravClient *this, unsigned int key)
{
  return ?getTelemetry@bdNATTravClient@@IEAAPEAVbdNATTravTelemetry@@I@Z(this, key);
}

/*
==============
bdNATTravClient::getCacheEntry
==============
*/

bool __fastcall bdNATTravClient::getCacheEntry(unsigned int remoteAddressHash, bdNATTravClient::bdCachedTraversal *out)
{
  return ?getCacheEntry@bdNATTravClient@@KA_NIAEAUbdCachedTraversal@1@@Z(remoteAddressHash, out);
}

/*
==============
bdNATTravClient::isCached
==============
*/

bool __fastcall bdNATTravClient::isCached(bdReference<bdCommonAddr> remote)
{
  return ?isCached@bdNATTravClient@@SA_NV?$bdReference@VbdCommonAddr@@@@@Z(remote);
}

/*
==============
bdNATTravClient::setSimulateNAT
==============
*/

void __fastcall bdNATTravClient::setSimulateNAT(bdNATTravClient *this, bool simulateNAT)
{
  ?setSimulateNAT@bdNATTravClient@@QEAAX_N@Z(this, simulateNAT);
}

/*
==============
bdNATTravClient::doHMac
==============
*/

bool __fastcall bdNATTravClient::doHMac(bdNATTravClient *this, const unsigned int identifier, const bdAddr *src, const bdAddr *dest, unsigned __int8 *data)
{
  return ?doHMac@bdNATTravClient@@IEBA_NIAEBVbdAddr@@0QEAE@Z(this, identifier, src, dest, data);
}

/*
==============
bdNATTravClient::setNATTravStageMaxTries
==============
*/

void __fastcall bdNATTravClient::setNATTravStageMaxTries(bdNATTravClient *this, bdNATTravClientData::bdNATTravClientDataState stage, unsigned int tries)
{
  ?setNATTravStageMaxTries@bdNATTravClient@@QEAAXW4bdNATTravClientDataState@bdNATTravClientData@@I@Z(this, stage, tries);
}

/*
==============
bdNATTravClient::clearCache
==============
*/

void bdNATTravClient::clearCache(void)
{
  ?clearCache@bdNATTravClient@@SAXXZ();
}

/*
==============
bdNATTravClient::enableNATTravCache
==============
*/

void __fastcall bdNATTravClient::enableNATTravCache(bdNATTravClient *this, bool enable)
{
  ?enableNATTravCache@bdNATTravClient@@QEAAX_N@Z(this, enable);
}

/*
==============
bdNATTravClient::sendKeepAlive
==============
*/

bool __fastcall bdNATTravClient::sendKeepAlive(bdNATTravClient *this)
{
  return ?sendKeepAlive@bdNATTravClient@@IEAA_NXZ(this);
}

/*
==============
bdNATTravClient::isCacheEntryValid
==============
*/

bool __fastcall bdNATTravClient::isCacheEntryValid(const bdNATTravClient::bdCachedTraversal *entry, unsigned __int64 now)
{
  return ?isCacheEntryValid@bdNATTravClient@@KA_NAEBUbdCachedTraversal@1@_K@Z(entry, now);
}

/*
==============
bdNATTravClient::setNATTravTimeout
==============
*/

void __fastcall bdNATTravClient::setNATTravTimeout(bdNATTravClient *this, float NATTravTimeout)
{
  ?setNATTravTimeout@bdNATTravClient@@QEAAXM@Z(this, NATTravTimeout);
}

/*
==============
bdNATTravClient::sendStage2
==============
*/

bool __fastcall bdNATTravClient::sendStage2(bdNATTravClient *this, bdNATTravClientData *data)
{
  return ?sendStage2@bdNATTravClient@@IEAA_NAEAVbdNATTravClientData@@@Z(this, data);
}

/*
==============
bdNATTravClient::connectionAllowed
==============
*/

bool __fastcall bdNATTravClient::connectionAllowed(bdNATTravClient *this, bdReference<bdCommonAddr> local, bdReference<bdCommonAddr> remote)
{
  return ?connectionAllowed@bdNATTravClient@@IEAA_NV?$bdReference@VbdCommonAddr@@@@0@Z(this, local, remote);
}

/*
==============
bdNATTravClient::sendStage1
==============
*/

bool __fastcall bdNATTravClient::sendStage1(bdNATTravClient *this, bdNATTravClientData *data)
{
  return ?sendStage1@bdNATTravClient@@IEAA_NAEAVbdNATTravClientData@@@Z(this, data);
}

/*
==============
bdNATTravClient::updateLocalCommonAddr
==============
*/

bool __fastcall bdNATTravClient::updateLocalCommonAddr(bdNATTravClient *this, const bdReference<bdCommonAddr> newLocalCommonAddr)
{
  return ?updateLocalCommonAddr@bdNATTravClient@@QEAA_NV?$bdReference@VbdCommonAddr@@@@@Z(this, newLocalCommonAddr);
}

/*
==============
bdNATTravClient::quit
==============
*/

bool __fastcall bdNATTravClient::quit(bdNATTravClient *this)
{
  return ?quit@bdNATTravClient@@QEAA_NXZ(this);
}

/*
==============
bdNATTravClient::init
==============
*/

bool __fastcall bdNATTravClient::init(bdNATTravClient *this, bdSocket *socket, bdServiceBandwidthArbitrator *bandArb, bdReference<bdCommonAddr> localCommonAddr, bool interleaveStages, bool useNatTravCache)
{
  return ?init@bdNATTravClient@@QEAA_NPEAVbdSocket@@PEAVbdServiceBandwidthArbitrator@@V?$bdReference@VbdCommonAddr@@@@_N3@Z(this, socket, bandArb, localCommonAddr, interleaveStages, useNatTravCache);
}

/*
==============
bdNATTravClient::canInterleaveForNATType
==============
*/

bool __fastcall bdNATTravClient::canInterleaveForNATType(bdNATTravClient *this, const bdNATType natType)
{
  return ?canInterleaveForNATType@bdNATTravClient@@IEBA_NW4bdNATType@@@Z(this, natType);
}

/*
==============
bdNATTravClient::resetUsageStats
==============
*/

void __fastcall bdNATTravClient::resetUsageStats(bdNATTravClient *this)
{
  ?resetUsageStats@bdNATTravClient@@QEAAXXZ(this);
}

/*
==============
bdNATTravClient::isConnectInProgress
==============
*/

bool __fastcall bdNATTravClient::isConnectInProgress(bdNATTravClient *this, const bdReference<bdCommonAddr> remote)
{
  return ?isConnectInProgress@bdNATTravClient@@QEBA_NV?$bdReference@VbdCommonAddr@@@@@Z(this, remote);
}

/*
==============
bdNATTravClient::saveInCache
==============
*/

void __fastcall bdNATTravClient::saveInCache(unsigned int remoteAddressHash, const bdAddr *realAddress)
{
  ?saveInCache@bdNATTravClient@@KAXIAEBVbdAddr@@@Z(remoteAddressHash, realAddress);
}

/*
==============
bdNATTravClient::sendStage3
==============
*/

bool __fastcall bdNATTravClient::sendStage3(bdNATTravClient *this, bdNATTravClientData *data)
{
  return ?sendStage3@bdNATTravClient@@IEAA_NAEAVbdNATTravClientData@@@Z(this, data);
}

/*
==============
bdNATTravClient::connect
==============
*/

bool __fastcall bdNATTravClient::connect(bdNATTravClient *this, bdReference<bdCommonAddr> remote, bdNATTravListener *listener, bool throttle)
{
  return ?connect@bdNATTravClient@@QEAA_NV?$bdReference@VbdCommonAddr@@@@PEAVbdNATTravListener@@_N@Z(this, remote, listener, throttle);
}

/*
==============
bdNATTravClient::getCachedTraversalAge
==============
*/

unsigned int __fastcall bdNATTravClient::getCachedTraversalAge(bdReference<bdCommonAddr> remote)
{
  return ?getCachedTraversalAge@bdNATTravClient@@SAIV?$bdReference@VbdCommonAddr@@@@@Z(remote);
}

/*
==============
bdNATTravClient::pump
==============
*/

void __fastcall bdNATTravClient::pump(bdNATTravClient *this)
{
  ?pump@bdNATTravClient@@QEAAXXZ(this);
}

/*
==============
bdNATTravClient::getUsageStats
==============
*/

bool __fastcall bdNATTravClient::getUsageStats(bdNATTravClient *this, unsigned __int64 *counts, unsigned __int64 *sums, unsigned __int64 *sumsSq, unsigned __int64 *failureCounts)
{
  return ?getUsageStats@bdNATTravClient@@QEAA_NPEA_K000@Z(this, counts, sums, sumsSq, failureCounts);
}

/*
==============
bdNATTravClient::setupIntroducers
==============
*/

bool __fastcall bdNATTravClient::setupIntroducers(bdNATTravClient *this, const bdArray<bdAddr> *introducers)
{
  return ?setupIntroducers@bdNATTravClient@@QEAA_NAEBV?$bdArray@VbdAddr@@@@@Z(this, introducers);
}

/*
==============
bdNATTravClient::bdNATTravClient
==============
*/

void __fastcall bdNATTravClient::bdNATTravClient(bdNATTravClient *this)
{
  ??0bdNATTravClient@@QEAA@XZ(this);
}

/*
==============
bdNATTravClient::cancelConnect
==============
*/

void __fastcall bdNATTravClient::cancelConnect(bdNATTravClient *this, bdReference<bdCommonAddr> remote)
{
  ?cancelConnect@bdNATTravClient@@QEAAXV?$bdReference@VbdCommonAddr@@@@@Z(this, remote);
}

/*
==============
bdNATTravClient::setInterleaveMode
==============
*/

void __fastcall bdNATTravClient::setInterleaveMode(bdNATTravClient *this, bdNATTravClient::bdNATTravClientInterleaveMode mode)
{
  ?setInterleaveMode@bdNATTravClient@@QEAAXW4bdNATTravClientInterleaveMode@1@@Z(this, mode);
}

/*
==============
bdNATTravClient::setCacheTimeout
==============
*/

void __fastcall bdNATTravClient::setCacheTimeout(unsigned int milliseconds)
{
  ?setCacheTimeout@bdNATTravClient@@SAXI@Z(milliseconds);
}

/*
==============
bdNATTravClient::receiveFrom
==============
*/

void __fastcall bdNATTravClient::receiveFrom(bdNATTravClient *this, const bdAddr *addr, bdNATTraversalPacket *packet)
{
  ?receiveFrom@bdNATTravClient@@IEAAXAEBVbdAddr@@AEAVbdNATTraversalPacket@@@Z(this, addr, packet);
}

/*
==============
bdNATTravClient::acceptPacket
==============
*/

bool __fastcall bdNATTravClient::acceptPacket(bdNATTravClient *this, bdSocket *__formal, bdAddr *addr, void *data, const unsigned int size, const unsigned __int8 type)
{
  return ?acceptPacket@bdNATTravClient@@UEAA_NPEAVbdSocket@@VbdAddr@@PEAXIE@Z(this, __formal, addr, data, size, type);
}

/*
==============
bdNATTravClient::getFromCache
==============
*/

bool __fastcall bdNATTravClient::getFromCache(unsigned int remoteAddressHash, bdAddr *outAddr)
{
  return ?getFromCache@bdNATTravClient@@KA_NIAEAVbdAddr@@@Z(remoteAddressHash, outAddr);
}

/*
==============
bdNATTravClient::~bdNATTravClient
==============
*/

void __fastcall bdNATTravClient::~bdNATTravClient(bdNATTravClient *this)
{
  ??1bdNATTravClient@@UEAA@XZ(this);
}

/*
==============
bdNATTravClient::bdNATTravClient
==============
*/
void bdNATTravClient::bdNATTravClient(bdNATTravClient *this)
{
  unsigned int PowerOf2; 
  bdHashMap<unsigned int,bdNATTravClientData,bdHashingClass>::Node **v8; 

  bdPacketInterceptor::bdPacketInterceptor(this);
  this->__vftable = (bdNATTravClient_vtbl *)&bdNATTravClient::`vftable';
  this->m_introducers.m_data = NULL;
  *(_QWORD *)&this->m_introducers.m_capacity = 0i64;
  this->m_callbacks.m_numIterators.m_value._My_val = 0;
  this->m_callbacks.m_size = 0;
  PowerOf2 = bdBitOperations::nextPowerOf2(4u);
  this->m_callbacks.m_capacity = PowerOf2;
  this->m_callbacks.m_loadFactor = 0.75;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rcx
    vmulss  xmm1, xmm0, cs:__real@3f400000
    vcvttss2si rcx, xmm1
  }
  this->m_callbacks.m_threshold = _RCX;
  v8 = (bdHashMap<unsigned int,bdNATTravClientData,bdHashingClass>::Node **)bdMemory::allocate(8i64 * PowerOf2);
  this->m_callbacks.m_map = v8;
  memset_0(v8, 0, 8i64 * this->m_callbacks.m_capacity);
  bdGlobalStopwatch::bdGlobalStopwatch(&this->m_keepAliveTimer);
  this->m_status = BD_NAT_TRAV_UNINITIALIZED;
  this->m_localCommonAddr.m_ptr = NULL;
  this->m_simulateNAT = 0;
}

/*
==============
bdNATTravClient::~bdNATTravClient
==============
*/
void bdNATTravClient::~bdNATTravClient(bdNATTravClient *this)
{
  bdCommonAddr *m_ptr; 
  bdCommonAddr *v3; 

  this->__vftable = (bdNATTravClient_vtbl *)&bdNATTravClient::`vftable';
  bdNATTravClient::quit(this);
  m_ptr = this->m_localCommonAddr.m_ptr;
  if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
  {
    v3 = this->m_localCommonAddr.m_ptr;
    if ( v3 )
      ((void (__fastcall *)(bdCommonAddr *, __int64))v3->~bdReferencable)(v3, 1i64);
    this->m_localCommonAddr.m_ptr = NULL;
  }
  bdHashMap<unsigned int,bdNATTravClientData,bdHashingClass>::clear(&this->m_callbacks);
  bdMemory::deallocate(this->m_callbacks.m_map);
  bdMemory::deallocate(this->m_introducers.m_data);
  this->m_introducers.m_data = NULL;
  *(_QWORD *)&this->m_introducers.m_capacity = 0i64;
  bdPacketInterceptor::~bdPacketInterceptor(this);
}

/*
==============
bdNATTravClient::acceptPacket
==============
*/
char bdNATTravClient::acceptPacket(bdNATTravClient *this, bdSocket *__formal, bdAddr *addr, void *data, const unsigned int size, const unsigned __int8 type)
{
  unsigned int newOffset[4]; 
  bdNATTraversalPacket packet; 

  if ( this->m_status == BD_NAT_TRAV_UNINITIALIZED )
    return 0;
  if ( (unsigned __int8)(type - 10) > 9u )
    return 0;
  bdNATTraversalPacket::bdNATTraversalPacket(&packet);
  if ( !bdNATTraversalPacket::deserialize(&packet, data, size, 0, newOffset) || bdNATTraversalPacket::getType(&packet) < 0xAu || bdNATTraversalPacket::getType(&packet) > 0x13u )
    return 0;
  bdNATTravClient::receiveFrom(this, addr, &packet);
  return 1;
}

/*
==============
bdNATTravClient::canInterleaveForNATType
==============
*/
bool bdNATTravClient::canInterleaveForNATType(bdNATTravClient *this, const bdNATType natType)
{
  bdNATTravClient::bdNATTravClientInterleaveMode m_interleaveMode; 

  m_interleaveMode = this->m_interleaveMode;
  return m_interleaveMode == BD_NAT_TRAV_INTERLEAVE_ALL || m_interleaveMode == BD_NAT_TRAV_INTERLEAVE_MODERATE && natType == BD_NAT_MODERATE;
}

/*
==============
bdNATTravClient::cancelConnect
==============
*/
void bdNATTravClient::cancelConnect(bdNATTravClient *this, bdReference<bdCommonAddr> remote)
{
  const bdAddr *v4; 
  bdCommonAddr *v5; 
  unsigned int key; 
  bdReference<bdCommonAddr> addr; 
  __int64 v8; 
  bdCommonAddr *m_ptr; 
  bdAddr v10; 
  bdNATTravClientData value; 
  char buf[1024]; 

  v8 = -2i64;
  m_ptr = remote.m_ptr;
  if ( remote.m_ptr->__vftable )
  {
    key = HIDWORD(remote.m_ptr->__vftable[117].~bdReferencable);
    bdNATTravClientData::bdNATTravClientData(&value);
    if ( bdHashMap<unsigned int,bdNATTravClientData,bdHashingClass>::remove(&this->m_callbacks, &key, &value) )
    {
      bdAddr::bdAddr(&v10);
      bdNATTravTelemetry::setResult(&value.m_telemetry, BD_FAILURE|BD_SUCCESS, &value, v4);
      bdTelemetry::addNatTrav(&value.m_telemetry);
    }
    else
    {
      v5 = (bdCommonAddr *)remote.m_ptr->__vftable;
      addr.m_ptr = v5;
      if ( v5 )
        _InterlockedExchangeAdd((volatile signed __int32 *)&v5->m_refCount, 1u);
      bdCommonAddrInfo::getBriefInfo((const bdReference<bdCommonAddr>)&addr, buf, 0x400u);
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdnattravclient.cpp", "bdNATTravClient::cancelConnect", 0xDAu, "Connect canceled to unknown remote host %s. Ignoring.", buf);
    }
    bdNATTravTelemetry::~bdNATTravTelemetry(&value.m_telemetry);
    if ( value.m_remote.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&value.m_remote.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
    {
      if ( value.m_remote.m_ptr )
        ((void (__fastcall *)(bdCommonAddr *, __int64))value.m_remote.m_ptr->~bdReferencable)(value.m_remote.m_ptr, 1i64);
      value.m_remote.m_ptr = NULL;
    }
    if ( value.m_local.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&value.m_local.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && value.m_local.m_ptr )
      ((void (__fastcall *)(bdCommonAddr *, __int64))value.m_local.m_ptr->~bdReferencable)(value.m_local.m_ptr, 1i64);
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdnattravclient.cpp", "bdNATTravClient::cancelConnect", 0xDFu, "Connect canceled to null common addr ref.");
  }
  if ( remote.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&remote.m_ptr->__vftable[1], 0xFFFFFFFF) == 1 )
  {
    if ( remote.m_ptr->__vftable )
      (*(void (__fastcall **)(bdCommonAddr_vtbl *, __int64))remote.m_ptr->~bdReferencable)(remote.m_ptr->__vftable, 1i64);
    remote.m_ptr->__vftable = NULL;
  }
}

/*
==============
bdNATTravClient::clearCache
==============
*/
void bdNATTravClient::clearCache(void)
{
  bdNATTravClient::bdCachedTraversal *v0; 

  bdMutex::lock(&bdNATTravClient::m_cacheLock);
  v0 = bdNATTravClient::m_cachedTraversals;
  do
  {
    v0->m_timestamp = 0i64;
    ++v0;
  }
  while ( v0 < (bdNATTravClient::bdCachedTraversal *)&unk_1564C7E60 );
  bdMutex::unlock(&bdNATTravClient::m_cacheLock);
}

/*
==============
bdNATTravClient::connect
==============
*/
char bdNATTravClient::connect(bdNATTravClient *this, bdReference<bdCommonAddr> remote, bdNATTravListener *listener, bool throttle)
{
  unsigned int v8; 
  void (__fastcall *onNATAddrDiscovery)(bdNATTravListener *, bdReference<bdCommonAddr>, const bdAddr *); 
  bdCommonAddr_vtbl *v16; 
  char v18; 
  bdCommonAddr *v19; 
  unsigned int v20; 
  bdHashMap<unsigned int,bdNATTravClientData,bdHashingClass> *p_m_callbacks; 
  int v22; 
  bdHashMap<unsigned int,bdNATTravClientData,bdHashingClass>::Node *v23; 
  bdCommonAddr *v24; 
  bdCommonAddr *v25; 
  bdNATType NATType; 
  bdNATTravClient::bdNATTravClientInterleaveMode m_interleaveMode; 
  bdHashMap<unsigned int,bdNATTravClientData,bdHashingClass>::Node *v28; 
  bdCommonAddr *v29; 
  bdCommonAddr *v30; 
  unsigned int key; 
  bdReference<bdCommonAddr> v32; 
  bdReference<bdCommonAddr> v33; 
  bdReference<bdCommonAddr> local; 
  bdReference<bdCommonAddr> addr; 
  bdCommonAddr_vtbl *v36; 
  bdReference<bdCommonAddr> remotea; 
  __int64 v38; 
  bdCommonAddr *m_ptr; 
  bdNATTravClient::bdCachedTraversal out; 
  bdAddr v41; 
  bdNATTravClientData data; 
  char v43[1024]; 
  char buf[1024]; 
  char format[1024]; 

  v38 = -2i64;
  m_ptr = remote.m_ptr;
  bdAddr::bdAddr(&v41);
  if ( this->m_useNatTravCache && (v8 = HIDWORD(remote.m_ptr->__vftable[117].~bdReferencable), out.m_remoteAddressHash = 0, bdAddr::bdAddr(&out.m_realAddress), out.m_timestamp = 0i64, bdNATTravClient::getCacheEntry(v8, &out)) )
  {
    __asm
    {
      vmovups ymm0, ymmword ptr [rbp+36E0h+out.m_realAddress.m_address.inUn]
      vmovups ymmword ptr [rbp+36E0h+var_36A0.m_address.inUn], ymm0
      vmovups ymm1, ymmword ptr [rbp+36E0h+out.m_realAddress.m_address.inUn+20h]
      vmovups ymmword ptr [rbp+36E0h+var_36A0.m_address.inUn+20h], ymm1
      vmovups ymm0, ymmword ptr [rbp+36E0h+out.m_realAddress.m_address.inUn+40h]
      vmovups ymmword ptr [rbp+36E0h+var_36A0.m_address.inUn+40h], ymm0
      vmovups ymm1, ymmword ptr [rbp+36E0h+out.m_realAddress.m_address.inUn+60h]
      vmovups ymmword ptr [rbp+36E0h+var_36A0.m_address.inUn+60h], ymm1
      vmovups xmm0, xmmword ptr [rbp+36E0h+out.m_realAddress.m_relayRoute.m_relayID]
      vmovups xmmword ptr [rbp+36E0h+var_36A0.m_relayRoute.m_relayID], xmm0
      vmovsd  xmm1, qword ptr [rbp+36E0h+out.m_realAddress.m_type]
      vmovsd  qword ptr [rbp+36E0h+var_36A0.m_type], xmm1
    }
    bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdnattravclient.cpp", "bdNATTravClient::connect", 0x6Cu, "Cached Nat traversal - skipping 2nd attempt (1st attempt worked)");
    onNATAddrDiscovery = listener->onNATAddrDiscovery;
    v16 = remote.m_ptr->__vftable;
    v36 = v16;
    if ( v16 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v16[1], 1u);
    ((void (__fastcall *)(bdNATTravListener *, bdCommonAddr_vtbl **, bdAddr *))onNATAddrDiscovery)(listener, &v36, &v41);
    if ( remote.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&remote.m_ptr->__vftable[1], 0xFFFFFFFF) == 1 )
    {
      if ( remote.m_ptr->__vftable )
        (*(void (__fastcall **)(bdCommonAddr_vtbl *, __int64))remote.m_ptr->~bdReferencable)(remote.m_ptr->__vftable, 1i64);
      remote.m_ptr->__vftable = NULL;
    }
    return 1;
  }
  else
  {
    if ( this->m_status )
    {
      v19 = (bdCommonAddr *)remote.m_ptr->__vftable;
      v20 = HIDWORD(remote.m_ptr->__vftable[117].~bdReferencable);
      key = v20;
      p_m_callbacks = &this->m_callbacks;
      if ( this->m_callbacks.m_size && (v22 = HIBYTE(v20) ^ (16777619 * (BYTE2(v20) ^ (16777619 * (BYTE1(v20) ^ (16777619 * (unsigned __int8)v20))))), (v23 = this->m_callbacks.m_map[v22 & (this->m_callbacks.m_capacity - 1)]) != NULL) )
      {
        while ( v20 != v23->m_key )
        {
          v23 = v23->m_next;
          if ( !v23 )
            goto LABEL_17;
        }
        _InterlockedExchangeAdd((volatile signed __int32 *)&this->m_callbacks.m_numIterators, 1u);
        bdHandleAssert(this->m_callbacks.m_numIterators.m_value._My_val != 0, "m_numIterators != 0", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdhashmap.inl", "bdHashMap<unsigned int,class bdNATTravClientData,class bdHashingClass>::releaseIterator", 0x18Au, "bdHashMap::releaseIterator Iterator count reached 0, can't release iterator");
        _InterlockedExchangeAdd((volatile signed __int32 *)&this->m_callbacks.m_numIterators, 0xFFFFFFFF);
        if ( p_m_callbacks->m_size && (v28 = this->m_callbacks.m_map[v22 & (this->m_callbacks.m_capacity - 1)]) != NULL )
        {
          while ( key != v28->m_key )
          {
            v28 = v28->m_next;
            if ( !v28 )
              goto LABEL_33;
          }
          _InterlockedExchangeAdd((volatile signed __int32 *)&this->m_callbacks.m_numIterators, 1u);
        }
        else
        {
LABEL_33:
          v28 = NULL;
        }
        if ( v28->m_data.m_secondaryListener )
        {
          v29 = (bdCommonAddr *)remote.m_ptr->__vftable;
          v33.m_ptr = v29;
          if ( v29 )
            _InterlockedExchangeAdd((volatile signed __int32 *)&v29->m_refCount, 1u);
          bdCommonAddrInfo::getBriefInfo((const bdReference<bdCommonAddr>)&v33, v43, 0x400u);
          bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdnattravclient.cpp", "bdNATTravClient::connect", 0xBCu, "Third connect request to %s. Ignoring.", v43);
          v18 = 0;
          bdHashMap<unsigned int,bdNATTravClientData,bdHashingClass>::releaseIterator(p_m_callbacks, v28);
        }
        else
        {
          v28->m_data.m_secondaryListener = listener;
          v18 = 1;
          bdHashMap<unsigned int,bdNATTravClientData,bdHashingClass>::releaseIterator(p_m_callbacks, v28);
        }
      }
      else
      {
LABEL_17:
        remotea.m_ptr = v19;
        if ( v19 )
          _InterlockedExchangeAdd((volatile signed __int32 *)&v19->m_refCount, 1u);
        v24 = this->m_localCommonAddr.m_ptr;
        local.m_ptr = v24;
        if ( v24 )
          _InterlockedExchangeAdd((volatile signed __int32 *)&v24->m_refCount, 1u);
        bdNATTravClientData::bdNATTravClientData(&data, (bdReference<bdCommonAddr>)&local, (bdReference<bdCommonAddr>)&remotea, listener);
        data.m_throttled = throttle;
        bdStopwatch::start(&data.m_age);
        v25 = (bdCommonAddr *)remote.m_ptr->__vftable;
        addr.m_ptr = v25;
        if ( v25 )
          _InterlockedExchangeAdd((volatile signed __int32 *)&v25->m_refCount, 1u);
        bdCommonAddrInfo::getInfo((const bdReference<bdCommonAddr>)&addr, buf, 0x400u);
        bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdnattravclient.cpp", "bdNATTravClient::connect", 0x85u, "Starting NAT trav to %s", buf);
        NATType = bdCommonAddr::getNATType((bdCommonAddr *)remote.m_ptr->__vftable);
        m_interleaveMode = this->m_interleaveMode;
        if ( (m_interleaveMode == BD_NAT_TRAV_INTERLEAVE_ALL || m_interleaveMode == BD_NAT_TRAV_INTERLEAVE_MODERATE && NATType == BD_NAT_MODERATE) && this->m_introducers.m_size )
        {
          data.m_state = BD_NTCDS_STAGE_2;
          bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdnattravclient.cpp", "bdNATTravClient::connect", 0x8Cu, "Skipping phase 1, going to interleaved 1+2");
          if ( !bdNATTravClient::sendStage2(this, &data) )
            bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdnattravclient.cpp", "bdNATTravClient::connect", 0x8Fu, "Initial stage 2 send failed. Continuing anyway");
        }
        else if ( !bdNATTravClient::sendStage1(this, &data) )
        {
          bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdnattravclient.cpp", "bdNATTravClient::connect", 0x96u, "Initial stage 1 send failed. Continuing anyway");
        }
        if ( bdHashMap<unsigned int,bdNATTravClientData,bdHashingClass>::put(&this->m_callbacks, &key, &data) )
        {
          this->m_status = BD_NAT_TRAV_RUNNING;
          v18 = 1;
        }
        else
        {
          bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdnattravclient.cpp", "bdNATTravClient::connect", 0x9Eu, "Failed to put address in map.");
          v30 = (bdCommonAddr *)remote.m_ptr->__vftable;
          v32.m_ptr = v30;
          if ( v30 )
            _InterlockedExchangeAdd((volatile signed __int32 *)&v30->m_refCount, 1u);
          bdCommonAddrInfo::getBriefInfo((const bdReference<bdCommonAddr>)&v32, format, 0x400u);
          bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdnattravclient.cpp", "bdNATTravClient::connect", 0xA3u, format);
          v18 = 0;
        }
        bdNATTravClientData::~bdNATTravClientData(&data);
      }
    }
    else
    {
      v18 = 0;
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdnattravclient.cpp", "bdNATTravClient::connect", 0x75u, "Cannot call connect until this class has been initialized.");
    }
    if ( remote.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&remote.m_ptr->__vftable[1], 0xFFFFFFFF) == 1 )
    {
      if ( remote.m_ptr->__vftable )
        (*(void (__fastcall **)(bdCommonAddr_vtbl *, __int64))remote.m_ptr->~bdReferencable)(remote.m_ptr->__vftable, 1i64);
      remote.m_ptr->__vftable = NULL;
    }
    return v18;
  }
}

/*
==============
bdNATTravClient::connectionAllowed
==============
*/
_BOOL8 bdNATTravClient::connectionAllowed(bdNATTravClient *this, bdReference<bdCommonAddr> local, bdReference<bdCommonAddr> remote)
{
  bdNATType NATType; 
  bdNATType v6; 
  bool v7; 

  bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdnattravclient.cpp", "bdNATTravClient::connectionAllowed", 0x3B0u, "Using NAT simulation to determine connectivity.");
  NATType = bdCommonAddr::getNATType((bdCommonAddr *)local.m_ptr->__vftable);
  v6 = bdCommonAddr::getNATType((bdCommonAddr *)remote.m_ptr->__vftable);
  v7 = NATType == BD_NAT_OPEN || v6 == BD_NAT_OPEN || NATType == BD_NAT_MODERATE && v6 == BD_NAT_MODERATE;
  if ( local.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&local.m_ptr->__vftable[1], 0xFFFFFFFF) == 1 )
  {
    if ( local.m_ptr->__vftable )
      (*(void (__fastcall **)(bdCommonAddr_vtbl *, __int64))local.m_ptr->~bdReferencable)(local.m_ptr->__vftable, 1i64);
    local.m_ptr->__vftable = NULL;
  }
  if ( remote.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&remote.m_ptr->__vftable[1], 0xFFFFFFFF) == 1 )
  {
    if ( remote.m_ptr->__vftable )
      (*(void (__fastcall **)(bdCommonAddr_vtbl *, __int64))remote.m_ptr->~bdReferencable)(remote.m_ptr->__vftable, 1i64);
    remote.m_ptr->__vftable = NULL;
  }
  return v7;
}

/*
==============
bdNATTravClient::doHMac
==============
*/
_BOOL8 bdNATTravClient::doHMac(bdNATTravClient *this, const unsigned int identifier, const bdAddr *src, const bdAddr *dest, unsigned __int8 *data)
{
  bool v9; 
  unsigned int newOffset; 
  unsigned __int8 v12[4]; 
  unsigned int length; 
  bdHMacSHA256 v14; 
  __int64 v15; 
  unsigned __int8 v16[160]; 

  v15 = -2i64;
  newOffset = 4;
  bdHandleAssert(1, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 4i64);
  *(_DWORD *)v12 = identifier;
  bdHMacSHA256::bdHMacSHA256(&v14, this->m_secretKey, 0x1Cu);
  if ( bdHMacSHA256::process(&v14, v12, 4u) && (newOffset = 0, bdAddr::serialize((bdAddr *)src, v16, 0x98u, 0, &newOffset)) && bdHMacSHA256::process(&v14, v16, newOffset) && (newOffset = 0, bdAddr::serialize((bdAddr *)dest, v16, 0x98u, 0, &newOffset)) && bdHMacSHA256::process(&v14, v16, newOffset) )
  {
    length = 10;
    v9 = bdHMacSHA256::getData(&v14, data, &length);
  }
  else
  {
    v9 = 0;
  }
  bdHMacSHA256::~bdHMacSHA256(&v14);
  return v9;
}

/*
==============
bdNATTravClient::enableNATTravCache
==============
*/
void bdNATTravClient::enableNATTravCache(bdNATTravClient *this, bool enable)
{
  this->m_useNatTravCache = enable;
}

/*
==============
bdNATTravClient::getCacheEntry
==============
*/
__int64 bdNATTravClient::getCacheEntry(unsigned int remoteAddressHash, bdNATTravClient::bdCachedTraversal *out)
{
  unsigned __int8 v9; 
  unsigned __int64 HiResTimeStamp; 
  unsigned __int64 m_timestamp; 
  __int64 result; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
  }
  _R14 = out;
  v9 = 0;
  HiResTimeStamp = bdPlatformTiming::getHiResTimeStamp();
  bdMutex::lock(&bdNATTravClient::m_cacheLock);
  _RBX = bdNATTravClient::m_cachedTraversals;
  __asm
  {
    vmovss  xmm6, cs:__real@5f800000
    vmovss  xmm7, cs:__real@447a0000
  }
  do
  {
    if ( _RBX >= (bdNATTravClient::bdCachedTraversal *)&unk_1564C7E60 )
      break;
    if ( _RBX->m_remoteAddressHash == remoteAddressHash )
    {
      m_timestamp = _RBX->m_timestamp;
      if ( m_timestamp )
      {
        if ( !bdNATTravClient::m_cacheTimeoutMilliseconds )
          goto LABEL_9;
        *(double *)&_XMM0 = bdPlatformTiming::getElapsedTime(m_timestamp, HiResTimeStamp);
        __asm
        {
          vmulss  xmm2, xmm0, xmm7
          vxorps  xmm1, xmm1, xmm1
          vcvtsi2ss xmm1, xmm1, rax
        }
        if ( (bdNATTravClient::m_cacheTimeoutMilliseconds & 0x8000000000000000ui64) != 0i64 )
          __asm { vaddss  xmm1, xmm1, xmm6 }
        __asm { vcomiss xmm2, xmm1 }
        if ( !bdNATTravClient::m_cacheTimeoutMilliseconds )
        {
LABEL_9:
          __asm
          {
            vmovups xmm0, xmmword ptr [rbx]
            vmovups xmmword ptr [r14], xmm0
            vmovups xmm1, xmmword ptr [rbx+10h]
            vmovups xmmword ptr [r14+10h], xmm1
            vmovups xmm0, xmmword ptr [rbx+20h]
            vmovups xmmword ptr [r14+20h], xmm0
            vmovups xmm1, xmmword ptr [rbx+30h]
            vmovups xmmword ptr [r14+30h], xmm1
            vmovups xmm0, xmmword ptr [rbx+40h]
            vmovups xmmword ptr [r14+40h], xmm0
            vmovups xmm1, xmmword ptr [rbx+50h]
            vmovups xmmword ptr [r14+50h], xmm1
            vmovups xmm0, xmmword ptr [rbx+60h]
            vmovups xmmword ptr [r14+60h], xmm0
            vmovups xmm1, xmmword ptr [rbx+70h]
            vmovups xmmword ptr [r14+70h], xmm1
            vmovups xmm0, xmmword ptr [rbx+80h]
            vmovups xmmword ptr [r14+80h], xmm0
            vmovups xmm1, xmmword ptr [rbx+90h]
            vmovups xmmword ptr [r14+90h], xmm1
          }
          _R14->m_timestamp = _RBX->m_timestamp;
          v9 = 1;
        }
      }
    }
    ++_RBX;
  }
  while ( !v9 );
  bdMutex::unlock(&bdNATTravClient::m_cacheLock);
  result = v9;
  __asm
  {
    vmovaps xmm6, [rsp+78h+var_38]
    vmovaps xmm7, [rsp+78h+var_48]
  }
  return result;
}

/*
==============
bdNATTravClient::getCachedTraversalAge
==============
*/
__int64 bdNATTravClient::getCachedTraversalAge(bdReference<bdCommonAddr> remote)
{
  unsigned __int64 HiResTimeStamp; 
  bdNATTravClient::bdCachedTraversal out; 

  out.m_remoteAddressHash = 0;
  bdAddr::bdAddr(&out.m_realAddress);
  out.m_timestamp = 0i64;
  LODWORD(_RBX) = 0;
  if ( bdNATTravClient::getCacheEntry(HIDWORD(remote.m_ptr->__vftable[117].~bdReferencable), &out) )
  {
    HiResTimeStamp = bdPlatformTiming::getHiResTimeStamp();
    *(double *)&_XMM0 = bdPlatformTiming::getElapsedTime(out.m_timestamp, HiResTimeStamp);
    __asm
    {
      vmulss  xmm1, xmm0, cs:__real@447a0000
      vcvttss2si rbx, xmm1
    }
    if ( !(_DWORD)_RBX )
      LODWORD(_RBX) = 1;
  }
  if ( remote.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&remote.m_ptr->__vftable[1], 0xFFFFFFFF) == 1 )
  {
    if ( remote.m_ptr->__vftable )
      (*(void (__fastcall **)(bdCommonAddr_vtbl *, __int64))remote.m_ptr->~bdReferencable)(remote.m_ptr->__vftable, 1i64);
    remote.m_ptr->__vftable = NULL;
  }
  return (unsigned int)_RBX;
}

/*
==============
bdNATTravClient::getFromCache
==============
*/
bool bdNATTravClient::getFromCache(unsigned int remoteAddressHash, bdAddr *outAddr)
{
  bool result; 
  bdNATTravClient::bdCachedTraversal out; 

  out.m_remoteAddressHash = 0;
  _RDI = outAddr;
  bdAddr::bdAddr(&out.m_realAddress);
  out.m_timestamp = 0i64;
  result = bdNATTravClient::getCacheEntry(remoteAddressHash, &out);
  if ( result )
  {
    __asm
    {
      vmovups ymm0, ymmword ptr [rsp+0E8h+out.m_realAddress.m_address.inUn]
      vmovups ymm1, ymmword ptr [rsp+0E8h+out.m_realAddress.m_address.inUn+20h]
      vmovups ymmword ptr [rdi], ymm0
      vmovups ymm0, ymmword ptr [rsp+0E8h+out.m_realAddress.m_address.inUn+40h]
      vmovups ymmword ptr [rdi+20h], ymm1
      vmovups ymm1, ymmword ptr [rsp+0E8h+out.m_realAddress.m_address.inUn+60h]
      vmovups ymmword ptr [rdi+40h], ymm0
      vmovups xmm0, xmmword ptr [rsp+0E8h+out.m_realAddress.m_relayRoute.m_relayID]
      vmovups ymmword ptr [rdi+60h], ymm1
      vmovsd  xmm1, qword ptr [rsp+0E8h+out.m_realAddress.m_type]
      vmovups xmmword ptr [rdi+80h], xmm0
      vmovsd  qword ptr [rdi+90h], xmm1
    }
  }
  return result;
}

/*
==============
bdNATTravClient::getTelemetry
==============
*/
bdNATTravTelemetry *bdNATTravClient::getTelemetry(bdNATTravClient *this, unsigned int key)
{
  bdHashMap<unsigned int,bdNATTravClientData,bdHashingClass>::Node *v3; 
  bdNATTravTelemetry *p_m_telemetry; 

  if ( this->m_callbacks.m_size && (v3 = this->m_callbacks.m_map[((16777619 * (BYTE2(key) ^ (16777619 * (BYTE1(key) ^ (16777619 * (unsigned __int8)key))))) ^ HIBYTE(key)) & (this->m_callbacks.m_capacity - 1)]) != NULL )
  {
    while ( key != v3->m_key )
    {
      v3 = v3->m_next;
      if ( !v3 )
        goto LABEL_5;
    }
    _InterlockedExchangeAdd((volatile signed __int32 *)&this->m_callbacks.m_numIterators, 1u);
  }
  else
  {
LABEL_5:
    v3 = NULL;
  }
  p_m_telemetry = &v3->m_data.m_telemetry;
  if ( !v3 )
    p_m_telemetry = NULL;
  if ( v3 )
  {
    bdHandleAssert(this->m_callbacks.m_numIterators.m_value._My_val != 0, "m_numIterators != 0", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdhashmap.inl", "bdHashMap<unsigned int,class bdNATTravClientData,class bdHashingClass>::releaseIterator", 0x18Au, "bdHashMap::releaseIterator Iterator count reached 0, can't release iterator");
    _InterlockedExchangeAdd((volatile signed __int32 *)&this->m_callbacks.m_numIterators, 0xFFFFFFFF);
  }
  return p_m_telemetry;
}

/*
==============
bdNATTravClient::getUsageStats
==============
*/
char bdNATTravClient::getUsageStats(bdNATTravClient *this, unsigned __int64 *counts, unsigned __int64 *sums, unsigned __int64 *sumsSq, unsigned __int64 *failureCounts)
{
  unsigned __int64 *m_traversalDurationAggr; 
  signed __int64 v6; 
  int v7; 
  signed __int64 v8; 
  signed __int64 v9; 
  signed __int64 v10; 
  unsigned __int64 v11; 
  __int64 v13; 

  if ( !counts || !sums || !sumsSq || !failureCounts )
    return 0;
  m_traversalDurationAggr = this->m_traversalDurationAggr;
  v6 = (char *)failureCounts - (char *)this - 152;
  v7 = 0;
  v8 = (char *)counts - (char *)this - 152;
  v9 = (char *)sums - (char *)this - 152;
  v10 = (char *)sumsSq - (char *)this - 152;
  do
  {
    *(unsigned __int64 *)((char *)m_traversalDurationAggr + v8) = *(m_traversalDurationAggr - 4);
    *(unsigned __int64 *)((char *)m_traversalDurationAggr + v9) = *m_traversalDurationAggr;
    *(unsigned __int64 *)((char *)m_traversalDurationAggr + v10) = m_traversalDurationAggr[4];
    *(unsigned __int64 *)((char *)m_traversalDurationAggr + v6) = m_traversalDurationAggr[8];
    v11 = *(unsigned __int64 *)((char *)m_traversalDurationAggr + v8);
    if ( v11 )
    {
      LODWORD(v13) = v7;
      bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdnattravclient.cpp", "bdNATTravClient::getUsageStats", 0x3E6u, "NAT type: %d - Successes %d, Avg Time %d, Variance = %d", v13, v11, *(unsigned __int64 *)((char *)m_traversalDurationAggr + v9) / v11, (*(unsigned __int64 *)((char *)m_traversalDurationAggr + v10) - *(unsigned __int64 *)((char *)m_traversalDurationAggr + v9) * *(unsigned __int64 *)((char *)m_traversalDurationAggr + v9) / v11) / v11);
    }
    ++v7;
    ++m_traversalDurationAggr;
  }
  while ( v7 < 4 );
  return 1;
}

/*
==============
bdNATTravClient::init
==============
*/
_BOOL8 bdNATTravClient::init(bdNATTravClient *this, bdSocket *socket, bdServiceBandwidthArbitrator *bandArb, bdReference<bdCommonAddr> localCommonAddr, bool interleaveStages, bool useNatTravCache)
{
  bool v8; 
  bdTrulyRandomImpl *v9; 
  bdSingletonRegistryImpl *Instance; 
  unsigned int line; 
  char *format; 

  if ( this->m_status == BD_NAT_TRAV_UNINITIALIZED )
  {
    if ( !socket )
    {
      format = "A valid socket pointer is required by this class";
      line = 66;
      goto LABEL_9;
    }
    if ( !bandArb )
    {
      format = "A valid service bandwidth arbitrator pointer is required by this class";
      line = 71;
      goto LABEL_9;
    }
    if ( !localCommonAddr.m_ptr->__vftable )
    {
      format = "A valid local common addr ref is required by this class";
      line = 76;
      goto LABEL_9;
    }
    this->m_socket = socket;
    this->m_bandArb = bandArb;
    bdReference<bdCommonAddr>::operator=(&this->m_localCommonAddr, (const bdReference<bdCommonAddr> *)localCommonAddr.m_ptr);
    v8 = bdNATTravClient::sendKeepAlive(this);
    if ( !bdSingleton<bdTrulyRandomImpl>::m_instance )
    {
      v9 = (bdTrulyRandomImpl *)bdMemory::allocate(1ui64);
      if ( v9 )
        bdTrulyRandomImpl::bdTrulyRandomImpl(v9);
      bdSingleton<bdTrulyRandomImpl>::m_instance = v9;
      if ( !v9 )
        goto LABEL_16;
      Instance = bdSingleton<bdSingletonRegistryImpl>::getInstance();
      if ( !bdSingletonRegistryImpl::add(Instance, bdSingleton<bdTrulyRandomImpl>::destroyInstance) )
      {
        bdMemory::deallocate(bdSingleton<bdTrulyRandomImpl>::m_instance);
        bdSingleton<bdTrulyRandomImpl>::m_instance = NULL;
LABEL_16:
        DebugBreak();
      }
    }
    bdTrulyRandomImpl::getRandomUByte8(bdSingleton<bdTrulyRandomImpl>::m_instance, this->m_secretKey, 0x1Cu);
    this->m_status = BD_NAT_TRAV_INITIALIZED;
    memset_0(this->m_traversalCount, 0, 0x80ui64);
    this->m_natTravTimeout = 0.89999998;
    this->m_interleaveMode = interleaveStages;
    this->m_useNatTravCache = useNatTravCache;
    this->m_maxTriesPerStage[1] = 3;
    this->m_maxTriesPerStage[2] = 4;
    this->m_maxTriesPerStage[3] = 3;
    goto LABEL_18;
  }
  format = "Cannot call init multiple times.";
  line = 61;
LABEL_9:
  v8 = 0;
  bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdnattravclient.cpp", "bdNATTravClient::init", line, format);
LABEL_18:
  if ( localCommonAddr.m_ptr->__vftable && !_InterlockedDecrement((volatile signed __int32 *)&localCommonAddr.m_ptr->__vftable[1]) )
  {
    if ( localCommonAddr.m_ptr->__vftable )
      (*(void (__fastcall **)(bdCommonAddr_vtbl *, __int64))localCommonAddr.m_ptr->~bdReferencable)(localCommonAddr.m_ptr->__vftable, 1i64);
    localCommonAddr.m_ptr->__vftable = NULL;
  }
  return v8;
}

/*
==============
bdNATTravClient::isCacheEntryValid
==============
*/
bool bdNATTravClient::isCacheEntryValid(const bdNATTravClient::bdCachedTraversal *entry, unsigned __int64 now)
{
  unsigned __int64 m_timestamp; 
  bool result; 

  m_timestamp = entry->m_timestamp;
  if ( !m_timestamp )
    return 0;
  if ( !bdNATTravClient::m_cacheTimeoutMilliseconds )
    return 1;
  *(double *)&_XMM0 = bdPlatformTiming::getElapsedTime(m_timestamp, now);
  __asm
  {
    vmulss  xmm2, xmm0, cs:__real@447a0000
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, rax
  }
  if ( (bdNATTravClient::m_cacheTimeoutMilliseconds & 0x8000000000000000ui64) != 0i64 )
    __asm { vaddss  xmm1, xmm1, cs:__real@5f800000 }
  result = 1;
  __asm { vcomiss xmm2, xmm1 }
  return result;
}

/*
==============
bdNATTravClient::isCached
==============
*/
_BOOL8 bdNATTravClient::isCached(bdReference<bdCommonAddr> remote)
{
  bool CacheEntry; 
  bdNATTravClient::bdCachedTraversal out; 

  out.m_remoteAddressHash = 0;
  bdAddr::bdAddr(&out.m_realAddress);
  out.m_timestamp = 0i64;
  CacheEntry = bdNATTravClient::getCacheEntry(HIDWORD(remote.m_ptr->__vftable[117].~bdReferencable), &out);
  if ( remote.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&remote.m_ptr->__vftable[1], 0xFFFFFFFF) == 1 )
  {
    if ( remote.m_ptr->__vftable )
      (*(void (__fastcall **)(bdCommonAddr_vtbl *, __int64))remote.m_ptr->~bdReferencable)(remote.m_ptr->__vftable, 1i64);
    remote.m_ptr->__vftable = NULL;
  }
  return CacheEntry;
}

/*
==============
bdNATTravClient::isConnectInProgress
==============
*/
_BOOL8 bdNATTravClient::isConnectInProgress(bdNATTravClient *this, const bdReference<bdCommonAddr> remote)
{
  unsigned int v4; 
  __int64 v5; 
  bdHashMap<unsigned int,bdNATTravClientData,bdHashingClass>::Node *v6; 
  bool v7; 

  v4 = HIDWORD(remote.m_ptr->__vftable[117].~bdReferencable);
  v5 = HIBYTE(v4);
  if ( this->m_callbacks.m_size && (v6 = this->m_callbacks.m_map[((unsigned int)v5 ^ (16777619 * (BYTE2(v4) ^ (16777619 * (BYTE1(v4) ^ (16777619 * (unsigned __int8)v4)))))) & (this->m_callbacks.m_capacity - 1)]) != NULL )
  {
    while ( v4 != v6->m_key )
    {
      v6 = v6->m_next;
      if ( !v6 )
        goto LABEL_5;
    }
    _InterlockedExchangeAdd((volatile signed __int32 *)&this->m_callbacks.m_numIterators, 1u);
    bdHandleAssert(this->m_callbacks.m_numIterators.m_value._My_val != 0, "m_numIterators != 0", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdhashmap.inl", "bdHashMap<unsigned int,class bdNATTravClientData,class bdHashingClass>::releaseIterator", 0x18Au, "bdHashMap::releaseIterator Iterator count reached 0, can't release iterator", -2i64);
    _InterlockedExchangeAdd((volatile signed __int32 *)&this->m_callbacks.m_numIterators, 0xFFFFFFFF);
  }
  else
  {
LABEL_5:
    v6 = NULL;
  }
  v7 = v6 != NULL;
  if ( remote.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&remote.m_ptr->__vftable[1], 0xFFFFFFFF) == 1 )
  {
    if ( remote.m_ptr->__vftable )
      (*(void (__fastcall **)(bdCommonAddr_vtbl *, __int64, void (__fastcall *)(bdReferencable *), __int64))remote.m_ptr->~bdReferencable)(remote.m_ptr->__vftable, 1i64, remote.m_ptr->~bdReferencable, v5);
    remote.m_ptr->__vftable = NULL;
  }
  return v7;
}

/*
==============
bdNATTravClient::pump
==============
*/
void bdNATTravClient::pump(bdNATTravClient *this)
{
  signed __int64 v1; 
  void *v5; 
  char v7; 
  char v8; 
  unsigned int v10; 
  unsigned int m_capacity; 
  bdHashMap<unsigned int,bdNATTravClientData,bdHashingClass>::Node **m_map; 
  bdHashMap<unsigned int,bdNATTravClientData,bdHashingClass>::Node *v13; 
  const unsigned int *p_m_key; 
  const bdAddr *v17; 
  bdAddrString *v18; 
  const char *String; 
  const bdAddr *v20; 
  bdCommonAddr *v21; 
  bdLinkedList<unsigned int>::Node *v22; 
  bdLinkedList<unsigned int>::Node *v23; 
  bdLinkedList<unsigned int>::Node *m_tail; 
  bdLinkedList<unsigned int>::Node *m_next; 
  bdCommonAddr *v27; 
  bdNATType NATType; 
  const bdAddr *v29; 
  bdCommonAddr *v30; 
  bdCommonAddr *v31; 
  bdCommonAddr *v32; 
  bdCommonAddr *v33; 
  bdAddr *PublicAddr; 
  bdCommonAddr *v35; 
  bdCommonAddr *v36; 
  const bdAddr *v37; 
  bdCommonAddr *v38; 
  bdCommonAddr *m_ptr; 
  unsigned int v40; 
  __int64 v41; 
  bool v42; 
  bdLinkedList<unsigned int>::Node *m_head; 
  bdHashMap<unsigned int,bdNATTravClientData,bdHashingClass>::Node **v44; 
  bdHashMap<unsigned int,bdNATTravClientData,bdHashingClass>::Node *v45; 
  bdHashMap<unsigned int,bdNATTravClientData,bdHashingClass>::Node *v46; 
  bdHashMap<unsigned int,bdNATTravClientData,bdHashingClass>::Node *v47; 
  bdLinkedList<unsigned int>::Node *v48; 
  bdLinkedList<unsigned int>::Node *v49; 
  double v53; 
  double v54; 
  bdQueue<unsigned int> v55; 
  bdReference<bdCommonAddr> remote; 
  bdReference<bdCommonAddr> addr; 
  bdReference<bdCommonAddr> v58; 
  bdReference<bdCommonAddr> v59; 
  bdReference<bdCommonAddr> v60; 
  bdReference<bdCommonAddr> v61; 
  bdReference<bdCommonAddr> v62; 
  bdReference<bdCommonAddr> v63; 
  bdReference<bdCommonAddr> v64; 
  bdReference<bdCommonAddr> v65; 
  __int64 v66; 
  bdAddrString v67; 
  bdAddr v68; 
  bdAddr v69; 
  bdAddr v70; 
  char buf[1024]; 
  char format[1024]; 
  char v73[1024]; 
  char v74[1024]; 
  char v75[1024]; 
  char v76[1024]; 
  char v77[1024]; 
  char v80; 

  v5 = alloca(v1);
  v66 = -2i64;
  __asm
  {
    vmovaps [rsp+1F10h+var_30], xmm6
    vmovaps [rsp+1F10h+var_40], xmm7
  }
  _RSI = this;
  if ( this->m_status == BD_NAT_TRAV_UNINITIALIZED )
    goto LABEL_82;
  *(double *)&_XMM0 = bdGlobalStopwatch::getElapsedTimeInSeconds(&this->m_keepAliveTimer);
  __asm { vcomiss xmm0, cs:__real@41700000 }
  if ( !(v7 | v8) )
    bdNATTravClient::sendKeepAlive(_RSI);
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rsp+1F10h+var_1EB8.m_list.m_head], xmm0
  }
  v55.m_list.m_size = 0;
  if ( !_RSI->m_callbacks.m_size )
    goto LABEL_80;
  v10 = 0;
  m_capacity = _RSI->m_callbacks.m_capacity;
  if ( m_capacity )
  {
    do
    {
      if ( _RSI->m_callbacks.m_map[v10] )
        break;
      ++v10;
    }
    while ( v10 < m_capacity );
  }
  m_map = _RSI->m_callbacks.m_map;
  if ( m_map[v10] )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)&_RSI->m_callbacks.m_numIterators, 1u);
    m_map = _RSI->m_callbacks.m_map;
  }
  v13 = m_map[v10];
  if ( !v13 )
    goto LABEL_80;
  __asm { vmovss  xmm7, cs:__real@41a00000 }
  while ( 1 )
  {
    do
    {
      p_m_key = &v13->m_key;
      if ( !v13->m_data.m_throttled )
        goto LABEL_25;
      *(double *)&_XMM0 = bdStopwatch::getElapsedTimeInSeconds(&v13->m_data.m_age);
      __asm { vcomiss xmm0, xmm7 }
      if ( v7 | v8 )
      {
LABEL_25:
        *(double *)&_XMM0 = bdStopwatch::getElapsedTimeInSeconds(&v13->m_data.m_lastSent);
        __asm { vcomiss xmm0, dword ptr [rsi+108h] }
        if ( v7 | v8 )
          goto LABEL_63;
        *(double *)&_XMM0 = bdStopwatch::getElapsedTimeInSeconds(&v13->m_data.m_lastSent);
        __asm
        {
          vcvtss2sd xmm1, xmm0, xmm0
          vmovsd  [rsp+1F10h+var_1ED8], xmm1
        }
        bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdnattravclient.cpp", "bdNATTravClient::pump", 0x199u, "%f seconds since last send, retrying..", v53);
        switch ( v13->m_data.m_state )
        {
          case BD_NTCDS_STAGE_1:
            if ( v13->m_data.m_tries[1] < _RSI->m_maxTriesPerStage[1] )
            {
              bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdnattravclient.cpp", "bdNATTravClient::pump", 0x1BFu, "Request timed out. Retrying. (stage 1)");
              m_ptr = v13->m_data.m_remote.m_ptr;
              v65.m_ptr = m_ptr;
              if ( m_ptr )
                _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
              bdCommonAddrInfo::getBriefInfo((const bdReference<bdCommonAddr>)&v65, v77, 0x400u);
              bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdnattravclient.cpp", "bdNATTravClient::pump", 0x1C2u, v77);
              goto LABEL_62;
            }
            PublicAddr = (bdAddr *)bdCommonAddr::getPublicAddr(v13->m_data.m_remote.m_ptr);
            if ( bdSockAddr::isValid(&PublicAddr->m_address) && _RSI->m_introducers.m_size )
            {
              bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdnattravclient.cpp", "bdNATTravClient::pump", 0x1A5u, "Stage 1 failed. Starting stage 2.");
              v35 = v13->m_data.m_remote.m_ptr;
              v62.m_ptr = v35;
              if ( v35 )
                _InterlockedExchangeAdd((volatile signed __int32 *)&v35->m_refCount, 1u);
              bdCommonAddrInfo::getBriefInfo((const bdReference<bdCommonAddr>)&v62, v75, 0x400u);
              bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdnattravclient.cpp", "bdNATTravClient::pump", 0x1A8u, v75);
              v13->m_data.m_state = BD_NTCDS_STAGE_2;
              bdNATTravClient::sendStage2(_RSI, &v13->m_data);
            }
            else
            {
              bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdnattravclient.cpp", "bdNATTravClient::pump", 0x1B1u, "Address lookup failed. (Stage 1 failed. No public address so finished.)");
              v36 = v13->m_data.m_remote.m_ptr;
              v63.m_ptr = v36;
              if ( v36 )
                _InterlockedExchangeAdd((volatile signed __int32 *)&v36->m_refCount, 1u);
              bdCommonAddrInfo::getBriefInfo((const bdReference<bdCommonAddr>)&v63, v76, 0x400u);
              bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdnattravclient.cpp", "bdNATTravClient::pump", 0x1B4u, v76);
              bdAddr::bdAddr(&v70);
              bdNATTravTelemetry::setResult(&v13->m_data.m_telemetry, (bdNATTravTelemetry::bdNATTravResultType)4, &v13->m_data, v37);
              bdTelemetry::addNatTrav(&v13->m_data.m_telemetry);
              v38 = v13->m_data.m_remote.m_ptr;
              v64.m_ptr = v38;
              if ( v38 )
                _InterlockedExchangeAdd((volatile signed __int32 *)&v38->m_refCount, 1u);
              bdNATTravClientData::callOnNATAddrDiscoveryFailed(&v13->m_data, (bdReference<bdCommonAddr>)&v64);
              bdQueue<unsigned int>::enqueue(&v55, &v13->m_key);
            }
            break;
          case BD_NTCDS_STAGE_2:
            if ( v13->m_data.m_tries[2] >= _RSI->m_maxTriesPerStage[2] )
            {
              bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdnattravclient.cpp", "bdNATTravClient::pump", 0x1CCu, "Stage 2 failed. Starting stage 3.");
              v32 = v13->m_data.m_remote.m_ptr;
              v60.m_ptr = v32;
              if ( v32 )
                _InterlockedExchangeAdd((volatile signed __int32 *)&v32->m_refCount, 1u);
              bdCommonAddrInfo::getBriefInfo((const bdReference<bdCommonAddr>)&v60, v73, 0x400u);
              bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdnattravclient.cpp", "bdNATTravClient::pump", 0x1CFu, v73);
              v13->m_data.m_state = BD_NTCDS_STAGE_3;
              ++v13->m_data.m_tries[3];
              goto LABEL_62;
            }
            bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdnattravclient.cpp", "bdNATTravClient::pump", 0x1D7u, "Request timed out. Retrying. (stage 2)");
            v33 = v13->m_data.m_remote.m_ptr;
            v61.m_ptr = v33;
            if ( v33 )
              _InterlockedExchangeAdd((volatile signed __int32 *)&v33->m_refCount, 1u);
            bdCommonAddrInfo::getBriefInfo((const bdReference<bdCommonAddr>)&v61, v74, 0x400u);
            bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdnattravclient.cpp", "bdNATTravClient::pump", 0x1DAu, v74);
            bdNATTravClient::sendStage2(_RSI, &v13->m_data);
            break;
          case BD_NTCDS_STAGE_3:
            if ( v13->m_data.m_tries[3] < _RSI->m_maxTriesPerStage[3] )
            {
              bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdnattravclient.cpp", "bdNATTravClient::pump", 0x1FAu, "Request timed out. Retrying. (stage 3)");
              v31 = v13->m_data.m_remote.m_ptr;
              v59.m_ptr = v31;
              if ( v31 )
                _InterlockedExchangeAdd((volatile signed __int32 *)&v31->m_refCount, 1u);
              bdCommonAddrInfo::getBriefInfo((const bdReference<bdCommonAddr>)&v59, format, 0x400u);
              bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdnattravclient.cpp", "bdNATTravClient::pump", 0x1FDu, format);
              ++v13->m_data.m_tries[3];
LABEL_62:
              bdNATTravClient::sendStage1(_RSI, &v13->m_data);
              break;
            }
            bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdnattravclient.cpp", "bdNATTravClient::pump", 0x1E6u, "NAT traversal failed. (Stage 3 failed)");
            v27 = v13->m_data.m_remote.m_ptr;
            addr.m_ptr = v27;
            if ( v27 )
              _InterlockedExchangeAdd((volatile signed __int32 *)&v27->m_refCount, 1u);
            bdCommonAddrInfo::getBriefInfo((const bdReference<bdCommonAddr>)&addr, buf, 0x400u);
            bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdnattravclient.cpp", "bdNATTravClient::pump", 0x1E9u, buf);
            NATType = bdCommonAddr::getNATType(v13->m_data.m_remote.m_ptr);
            if ( (unsigned int)NATType <= BD_NAT_STRICT )
              ++_RSI->m_traversalFailureCount[NATType];
            bdAddr::bdAddr(&v69);
            bdNATTravTelemetry::setResult(&v13->m_data.m_telemetry, BD_FAILURE, &v13->m_data, v29);
            bdTelemetry::addNatTrav(&v13->m_data.m_telemetry);
            v30 = v13->m_data.m_remote.m_ptr;
            v58.m_ptr = v30;
            if ( v30 )
              _InterlockedExchangeAdd((volatile signed __int32 *)&v30->m_refCount, 1u);
            bdNATTravClientData::callOnNATAddrDiscoveryFailed(&v13->m_data, (bdReference<bdCommonAddr>)&v58);
            bdQueue<unsigned int>::enqueue(&v55, &v13->m_key);
            break;
          default:
            bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdnattravclient.cpp", "bdNATTravClient::pump", 0x205u, "Invalid state.");
            break;
        }
      }
      else
      {
        *(double *)&_XMM0 = bdStopwatch::getElapsedTimeInSeconds(&v13->m_data.m_age);
        __asm { vcvtss2sd xmm6, xmm0, xmm0 }
        v17 = bdCommonAddr::getPublicAddr(v13->m_data.m_remote.m_ptr);
        bdAddrString::bdAddrString(&v67, v17);
        String = bdAddrString::getString(v18);
        __asm { vmovsd  [rsp+1F10h+var_1ED0], xmm6 }
        bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdnattravclient.cpp", "bdNATTravClient::pump", 0x18Fu, "Request to %s has been pending for too long (%f seconds). Allocated bandwidth inconsistent with request rate.", String, v54);
        bdAddr::bdAddr(&v68);
        bdNATTravTelemetry::setResult(&v13->m_data.m_telemetry, BD_FAILURE, &v13->m_data, v20);
        bdTelemetry::addNatTrav(&v13->m_data.m_telemetry);
        v21 = v13->m_data.m_remote.m_ptr;
        remote.m_ptr = v21;
        if ( v21 )
          _InterlockedExchangeAdd((volatile signed __int32 *)&v21->m_refCount, 1u);
        bdNATTravClientData::callOnNATAddrDiscoveryFailed(&v13->m_data, (bdReference<bdCommonAddr>)&remote);
        v22 = (bdLinkedList<unsigned int>::Node *)bdMemory::allocate(0x18ui64);
        v23 = v22;
        if ( v22 )
          v22->m_data = *p_m_key;
        else
          v23 = NULL;
        m_tail = v55.m_list.m_tail;
        if ( v55.m_list.m_tail )
        {
          v23->m_next = v55.m_list.m_tail->m_next;
          v23->m_prev = m_tail;
          m_next = m_tail->m_next;
          if ( m_next )
          {
            m_next->m_prev = v23;
          }
          else
          {
            bdHandleAssert(1, "node == m_tail", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdlinkedlist.inl", "bdLinkedList<unsigned int>::insertAfter", 0x176u, "bdLinkedList::insertAfter, node has no next entry, but is not the tail.");
            v55.m_list.m_tail = v23;
          }
          m_tail->m_next = v23;
          ++v55.m_list.m_size;
        }
        else
        {
          v23->m_next = NULL;
          v23->m_prev = NULL;
          v55.m_list.m_head = v23;
          v55.m_list.m_tail = v23;
          ++v55.m_list.m_size;
        }
      }
LABEL_63:
      v13 = v13->m_next;
    }
    while ( v13 );
    v40 = _RSI->m_callbacks.m_capacity;
    v41 = ((*((unsigned __int8 *)p_m_key + 3) ^ (16777619 * (*((unsigned __int8 *)p_m_key + 2) ^ (16777619 * ((16777619 * *(unsigned __int8 *)p_m_key) ^ *((unsigned __int8 *)p_m_key + 1)))))) & (v40 - 1)) + 1;
    if ( (unsigned int)v41 >= v40 )
      break;
    while ( 1 )
    {
      v13 = _RSI->m_callbacks.m_map[v41];
      if ( v13 )
        break;
      v41 = (unsigned int)(v41 + 1);
      if ( (unsigned int)v41 >= v40 )
        goto LABEL_67;
    }
  }
LABEL_67:
  _InterlockedExchangeAdd((volatile signed __int32 *)&_RSI->m_callbacks.m_numIterators, 0xFFFFFFFF);
  for ( ; v55.m_list.m_size; --v55.m_list.m_size )
  {
    v42 = v55.m_list.m_size != 0;
    bdHandleAssert(v55.m_list.m_size != 0, "getSize() > 0", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdqueue.inl", "bdQueue<unsigned int>::peek", 0x19u, "bdQueue::dequeue, queue empty, can't peek.");
    bdHandleAssert(v55.m_list.m_head != NULL, "m_head != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdlinkedlist.inl", "bdLinkedList<unsigned int>::getHead", 0x42u, "bdLinkedList::GetHead, list is empty so has no head.");
    bdHandleAssert(_RSI->m_callbacks.m_numIterators.m_value._My_val == 0, "(m_numIterators == 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdhashmap.inl", "bdHashMap<unsigned int,class bdNATTravClientData,class bdHashingClass>::remove", 0xA5u, "bdHashMap::remove, another iterator is being held while removing from hashmap");
    m_head = v55.m_list.m_head;
    v44 = _RSI->m_callbacks.m_map;
    v45 = v44[(HIBYTE(v55.m_list.m_head->m_data) ^ (16777619 * (BYTE2(v55.m_list.m_head->m_data) ^ (16777619 * (BYTE1(v55.m_list.m_head->m_data) ^ (16777619 * LOBYTE(v55.m_list.m_head->m_data))))))) & (_RSI->m_callbacks.m_capacity - 1)];
    v46 = NULL;
    if ( v45 )
    {
      while ( v55.m_list.m_head->m_data != v45->m_key )
      {
        v46 = v45;
        v45 = v45->m_next;
        if ( !v45 )
          goto LABEL_76;
      }
      v47 = v45->m_next;
      if ( v46 )
        v46->m_next = v47;
      else
        v44[(HIBYTE(v55.m_list.m_head->m_data) ^ (16777619 * (BYTE2(v55.m_list.m_head->m_data) ^ (16777619 * (BYTE1(v55.m_list.m_head->m_data) ^ (16777619 * LOBYTE(v55.m_list.m_head->m_data))))))) & (_RSI->m_callbacks.m_capacity - 1)] = v47;
      bdNATTravClientData::~bdNATTravClientData(&v45->m_data);
      bdMemory::deallocate(v45);
      --_RSI->m_callbacks.m_size;
    }
LABEL_76:
    bdHandleAssert(v42, "getSize() > 0", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdqueue.inl", "bdQueue<unsigned int>::dequeue", 0x12u, "bdQueue::dequeue, queue empty, can't dequeue.");
    v48 = m_head->m_next;
    v55.m_list.m_head = v48;
    if ( m_head == v55.m_list.m_tail )
      v55.m_list.m_tail = m_head->m_prev;
    else
      v48->m_prev = m_head->m_prev;
    bdMemory::deallocate(m_head);
  }
LABEL_80:
  if ( v55.m_list.m_head )
  {
    do
    {
      v49 = v55.m_list.m_head->m_next;
      bdMemory::deallocate(v55.m_list.m_head);
      v55.m_list.m_head = v49;
    }
    while ( v49 );
  }
LABEL_82:
  if ( !_RSI->m_callbacks.m_size )
    _RSI->m_status = BD_NAT_TRAV_INITIALIZED;
  _R11 = &v80;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
}

/*
==============
bdNATTravClient::quit
==============
*/
char bdNATTravClient::quit(bdNATTravClient *this)
{
  bdNATTravClient::bdNATTravClientStatus m_status; 
  bdHashMap<unsigned int,bdNATTravClientData,bdHashingClass> *p_m_callbacks; 
  bdCommonAddr *m_ptr; 
  bdCommonAddr *v7; 
  bdNATTravTelemetry *v9; 
  __int64 v10; 
  bdCommonAddr *v11; 
  bdCommonAddr *v12; 
  const bdAddr *v13; 
  unsigned int m_capacity; 
  __int64 v15; 
  bdReference<bdCommonAddr> addr; 
  __int64 v17; 
  bdNATTravTelemetry *p_m_telemetry; 
  bdAddr v19; 
  bdNATTravClientData data; 
  char buf[1024]; 

  v17 = -2i64;
  m_status = this->m_status;
  if ( m_status == BD_NAT_TRAV_INITIALIZED )
  {
    this->m_socket = NULL;
    this->m_bandArb = NULL;
    this->m_status = BD_NAT_TRAV_UNINITIALIZED;
    bdHashMap<unsigned int,bdNATTravClientData,bdHashingClass>::clear(&this->m_callbacks);
    bdMemory::deallocate(this->m_introducers.m_data);
    this->m_introducers.m_data = NULL;
    *(_QWORD *)&this->m_introducers.m_capacity = 0i64;
    return 1;
  }
  else if ( m_status == BD_NAT_TRAV_RUNNING )
  {
    p_m_callbacks = &this->m_callbacks;
    _RBX = (bdHashMap<unsigned int,bdNATTravClientData,bdHashingClass>::Node *)bdHashMap<unsigned int,bdNATTravClientData,bdHashingClass>::getIterator(&this->m_callbacks);
    if ( _RBX )
    {
      p_m_telemetry = &data.m_telemetry;
      do
      {
        data.m_state = _RBX->m_data.m_state;
        m_ptr = _RBX->m_data.m_local.m_ptr;
        data.m_local.m_ptr = m_ptr;
        if ( m_ptr )
          _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
        v7 = _RBX->m_data.m_remote.m_ptr;
        data.m_remote.m_ptr = v7;
        if ( v7 )
          _InterlockedExchangeAdd((volatile signed __int32 *)&v7->m_refCount, 1u);
        data.m_listener = _RBX->m_data.m_listener;
        data.m_secondaryListener = _RBX->m_data.m_secondaryListener;
        __asm
        {
          vmovups xmm0, xmmword ptr [rbx+28h]
          vmovups xmmword ptr [rbp+2DE0h+data.m_tries], xmm0
        }
        data.m_lastSent.m_start = _RBX->m_data.m_lastSent.m_start;
        data.m_throttled = _RBX->m_data.m_throttled;
        data.m_age.m_start = _RBX->m_data.m_age.m_start;
        v9 = &data.m_telemetry;
        v10 = 32i64;
        do
        {
          bdNATTravTelemetry::bdNATTravEvent::bdNATTravEvent(v9->m_attemptRecords, (const bdNATTravTelemetry::bdNATTravEvent *)((char *)v9->m_attemptRecords + (char *)_RBX - (char *)&data));
          v9 = (bdNATTravTelemetry *)((char *)v9 + 320);
          --v10;
        }
        while ( v10 );
        data.m_telemetry.m_attemptRecordsCount = _RBX->m_data.m_telemetry.m_attemptRecordsCount;
        data.m_telemetry.m_age.m_start = _RBX->m_data.m_telemetry.m_age.m_start;
        v11 = _RBX->m_data.m_telemetry.m_localCommonAddr.m_ptr;
        data.m_telemetry.m_localCommonAddr.m_ptr = v11;
        if ( v11 )
          _InterlockedExchangeAdd((volatile signed __int32 *)&v11->m_refCount, 1u);
        v12 = _RBX->m_data.m_telemetry.m_remoteCommonAddr.m_ptr;
        data.m_telemetry.m_remoteCommonAddr.m_ptr = v12;
        if ( v12 )
          _InterlockedExchangeAdd((volatile signed __int32 *)&v12->m_refCount, 1u);
        bdAddr::bdAddr(&data.m_telemetry.m_realAddr, &_RBX->m_data.m_telemetry.m_realAddr);
        bdAddr::bdAddr(&data.m_telemetry.m_stunAddr, &_RBX->m_data.m_telemetry.m_stunAddr);
        data.m_telemetry.m_result = _RBX->m_data.m_telemetry.m_result;
        data.m_telemetry.m_triesStage1 = _RBX->m_data.m_telemetry.m_triesStage1;
        data.m_telemetry.m_triesStage2 = _RBX->m_data.m_telemetry.m_triesStage2;
        data.m_telemetry.m_triesStage3 = _RBX->m_data.m_telemetry.m_triesStage3;
        data.m_telemetry.m_throttled = _RBX->m_data.m_telemetry.m_throttled;
        data.m_telemetry.m_duration = _RBX->m_data.m_telemetry.m_duration;
        addr.m_ptr = data.m_remote.m_ptr;
        if ( data.m_remote.m_ptr )
          _InterlockedExchangeAdd((volatile signed __int32 *)&data.m_remote.m_ptr->m_refCount, 1u);
        bdCommonAddrInfo::getBriefInfo((const bdReference<bdCommonAddr>)&addr, buf, 0x400u);
        bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdnattravclient.cpp", "bdNATTravClient::quit", 0x234u, "NAT traversal to %s failed.", buf);
        bdAddr::bdAddr(&v19);
        bdNATTravTelemetry::setResult(&data.m_telemetry, BD_FAILURE|BD_SUCCESS, &data, v13);
        bdTelemetry::addNatTrav(&data.m_telemetry);
        if ( _RBX->m_next )
        {
          _RBX = _RBX->m_next;
        }
        else
        {
          m_capacity = this->m_callbacks.m_capacity;
          v15 = ((HIBYTE(_RBX->m_key) ^ (16777619 * (BYTE2(_RBX->m_key) ^ (16777619 * (BYTE1(_RBX->m_key) ^ (16777619 * LOBYTE(_RBX->m_key))))))) & (m_capacity - 1)) + 1;
          if ( (unsigned int)v15 >= m_capacity )
          {
LABEL_23:
            _RBX = NULL;
            _InterlockedExchangeAdd((volatile signed __int32 *)&this->m_callbacks.m_numIterators, 0xFFFFFFFF);
          }
          else
          {
            while ( 1 )
            {
              _RBX = this->m_callbacks.m_map[v15];
              if ( _RBX )
                break;
              v15 = (unsigned int)(v15 + 1);
              if ( (unsigned int)v15 >= m_capacity )
                goto LABEL_23;
            }
          }
        }
        bdNATTravTelemetry::~bdNATTravTelemetry(&data.m_telemetry);
        if ( data.m_remote.m_ptr && !_InterlockedDecrement((volatile signed __int32 *)&data.m_remote.m_ptr->m_refCount) )
        {
          if ( data.m_remote.m_ptr )
            ((void (__fastcall *)(bdCommonAddr *, __int64))data.m_remote.m_ptr->~bdReferencable)(data.m_remote.m_ptr, 1i64);
          data.m_remote.m_ptr = NULL;
        }
        if ( data.m_local.m_ptr && !_InterlockedDecrement((volatile signed __int32 *)&data.m_local.m_ptr->m_refCount) )
        {
          if ( data.m_local.m_ptr )
            ((void (__fastcall *)(bdCommonAddr *, __int64))data.m_local.m_ptr->~bdReferencable)(data.m_local.m_ptr, 1i64);
        }
      }
      while ( _RBX );
      p_m_callbacks = &this->m_callbacks;
    }
    bdHashMap<unsigned int,bdNATTravClientData,bdHashingClass>::releaseIterator(p_m_callbacks, _RBX);
    bdHashMap<unsigned int,bdNATTravClientData,bdHashingClass>::clear(p_m_callbacks);
    bdMemory::deallocate(this->m_introducers.m_data);
    this->m_introducers.m_data = NULL;
    *(_QWORD *)&this->m_introducers.m_capacity = 0i64;
    this->m_socket = NULL;
    this->m_bandArb = NULL;
    this->m_status = BD_NAT_TRAV_UNINITIALIZED;
    return 1;
  }
  else
  {
    return 0;
  }
}

/*
==============
bdNATTravClient::receiveFrom
==============
*/
void bdNATTravClient::receiveFrom(bdNATTravClient *this, const bdAddr *addr, bdNATTraversalPacket *packet)
{
  signed __int64 v3; 
  void *v7; 
  unsigned __int8 Type; 
  unsigned int v12; 
  const char *v13; 
  bdLogMessageType v14; 
  int v15; 
  bdAddrString *v16; 
  bdAddrString *v17; 
  bdAddrString *v18; 
  const bdAddr *AddrDest; 
  const bdAddr *v20; 
  const unsigned __int8 *HMAC; 
  bdAddrString *v22; 
  const char *v23; 
  const bdAddr *v24; 
  bdAddrString *v25; 
  const char *v26; 
  bdNATType NATType; 
  const bdAddr *PublicAddr; 
  unsigned int m_hash; 
  unsigned __int64 HiResTimeStamp; 
  bdNATTravClient::bdCachedTraversal *v37; 
  bdNATTravClient::bdCachedTraversal *v38; 
  unsigned __int64 v40; 
  unsigned __int64 m_timestamp; 
  const bdAddr *AddrSrc; 
  int v51; 
  bdAddrString *v52; 
  bdAddrString *v53; 
  unsigned int line; 
  unsigned int linea; 
  unsigned int lineb; 
  char *format; 
  char *formata; 
  const char *String; 
  const char *v63; 
  int v64; 
  __int64 v65; 
  unsigned int newOffset; 
  unsigned int key; 
  bdReference<bdCommonAddr> remote; 
  __int64 v69; 
  bdMutex *v70; 
  bdAddrString v71; 
  bdAddrString v72; 
  bdAddrString v73; 
  bdAddrString v74; 
  bdAddrString v75; 
  bdAddrString v76; 
  bdAddrString v77; 
  bdNATTravClientData value; 
  unsigned __int8 v79[8]; 
  __int16 v80; 
  char data[1296]; 
  char v84; 

  v7 = alloca(v3);
  v69 = -2i64;
  __asm
  {
    vmovaps [rsp+3050h+var_40], xmm6
    vmovaps [rsp+3050h+var_50], xmm7
  }
  _R12 = addr;
  Type = bdNATTraversalPacket::getType(packet);
  switch ( Type )
  {
    case 0xAu:
      format = "Received server packet in client code.";
      line = 239;
      v13 = "warn/";
      v14 = BD_LOG_WARNING;
      goto LABEL_50;
    case 0xBu:
      AddrSrc = bdNATTraversalPacket::getAddrSrc(packet);
      bdNATTraversalPacket::setType(packet, 0xCu);
      if ( !bdNATTraversalPacket::serialize(packet, data, 0x508u, 0, &newOffset) )
      {
        format = "Cannot serialize the packet.";
        line = 251;
        v13 = (const char *)&other;
        v14 = BD_LOG_ERROR;
        goto LABEL_50;
      }
      v51 = this->m_socket->sendTo(this->m_socket, AddrSrc, data, newOffset);
      if ( v51 > 0 )
      {
        bdAddrString::bdAddrString(&v76, AddrSrc);
        String = bdAddrString::getString(v52);
        formata = "sent INTRO REPLY to %s";
        linea = 261;
        goto LABEL_13;
      }
      bdAddrString::bdAddrString(&v77, AddrSrc);
      v64 = v51;
      v63 = bdAddrString::getString(v53);
      lineb = 265;
LABEL_11:
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdnattravclient.cpp", "bdNATTravClient::receiveFrom", lineb, "Failed to send INTRO REPLY to %s. Socket error %i", v63, v64);
      break;
    case 0xCu:
      bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdnattravclient.cpp", "bdNATTravClient::receiveFrom", 0x110u, "Received NAT Trav reply.");
      key = bdNATTraversalPacket::getIdentifier(packet);
      AddrDest = bdNATTraversalPacket::getAddrDest(packet);
      v20 = bdNATTraversalPacket::getAddrSrc(packet);
      if ( bdNATTravClient::doHMac(this, key, v20, AddrDest, v79) && (HMAC = bdNATTraversalPacket::getHMAC(packet), *(_QWORD *)v79 == *(_QWORD *)HMAC) && v80 == *((_WORD *)HMAC + 4) )
      {
        bdAddrString::bdAddrString(&v74, _R12);
        v23 = bdAddrString::getString(v22);
        v24 = bdNATTraversalPacket::getAddrDest(packet);
        bdAddrString::bdAddrString(&v75, v24);
        v26 = bdAddrString::getString(v25);
        bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdnattravclient.cpp", "bdNATTravClient::receiveFrom", 0x11Cu, "discovered addr for %s: %s", v26, v23);
        bdNATTravClientData::bdNATTravClientData(&value);
        if ( bdHashMap<unsigned int,bdNATTravClientData,bdHashingClass>::remove(&this->m_callbacks, &key, &value) )
        {
          *(double *)&_XMM0 = bdStopwatch::getElapsedTimeInSeconds(&value.m_age);
          __asm
          {
            vmovss  xmm7, cs:__real@447a0000
            vmulss  xmm1, xmm0, xmm7
            vmovss  xmm2, cs:__real@5f000000
            vcomiss xmm1, xmm2
            vsubss  xmm1, xmm1, xmm2
            vcomiss xmm1, xmm2
            vcvttss2si rbx, xmm1
          }
          NATType = bdCommonAddr::getNATType(value.m_remote.m_ptr);
          if ( (unsigned int)NATType <= BD_NAT_STRICT )
          {
            ++this->m_traversalCount[NATType];
            this->m_traversalDurationAggr[NATType] += _RBX;
            this->m_traversalDurationAggrSq[NATType] += _RBX * _RBX;
          }
          LODWORD(v65) = NATType;
          bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdnattravclient.cpp", "bdNATTravClient::receiveFrom", 0x12Cu, "NAT trav duration = %lld msecs (type %d)", _RBX, v65);
          PublicAddr = bdCommonAddr::getPublicAddr(this->m_localCommonAddr.m_ptr);
          bdNATTravTelemetry::addRecord(&value.m_telemetry, BD_RECV_INTRO_REPLY, _R12, PublicAddr, 1);
          bdNATTravTelemetry::setResult(&value.m_telemetry, BD_SUCCESS, &value, _R12);
          bdTelemetry::addNatTrav(&value.m_telemetry);
          remote.m_ptr = value.m_remote.m_ptr;
          if ( value.m_remote.m_ptr )
            _InterlockedExchangeAdd((volatile signed __int32 *)&value.m_remote.m_ptr->m_refCount, 1u);
          bdNATTravClientData::callOnNATAddrDiscovery(&value, (bdReference<bdCommonAddr>)&remote, _R12);
          m_hash = value.m_remote.m_ptr->m_hash;
          HiResTimeStamp = bdPlatformTiming::getHiResTimeStamp();
          _RDI = NULL;
          v37 = NULL;
          v70 = &bdNATTravClient::m_cacheLock;
          bdMutex::lock(&bdNATTravClient::m_cacheLock);
          v38 = bdNATTravClient::m_cachedTraversals;
          __asm { vmovss  xmm6, cs:__real@5f800000 }
          v40 = bdNATTravClient::m_cacheTimeoutMilliseconds;
          do
          {
            if ( v38 >= (bdNATTravClient::bdCachedTraversal *)&unk_1564C7E60 )
              break;
            m_timestamp = v38->m_timestamp;
            if ( !m_timestamp )
              goto LABEL_32;
            if ( !v40 )
              goto LABEL_54;
            *(double *)&_XMM0 = bdPlatformTiming::getElapsedTime(m_timestamp, HiResTimeStamp);
            __asm { vmulss  xmm1, xmm0, xmm7 }
            v40 = bdNATTravClient::m_cacheTimeoutMilliseconds;
            __asm
            {
              vxorps  xmm0, xmm0, xmm0
              vcvtsi2ss xmm0, xmm0, rdx
            }
            if ( (bdNATTravClient::m_cacheTimeoutMilliseconds & 0x8000000000000000ui64) != 0i64 )
              __asm { vaddss  xmm0, xmm0, xmm6 }
            __asm { vcomiss xmm1, xmm0 }
            if ( bdNATTravClient::m_cacheTimeoutMilliseconds )
            {
LABEL_32:
              _RDI = v38;
            }
            else
            {
LABEL_54:
              if ( !v37 || v38->m_timestamp < v37->m_timestamp )
                v37 = v38;
            }
            ++v38;
          }
          while ( !_RDI );
          if ( !_RDI )
            _RDI = v37;
          if ( _RDI )
          {
            _RDI->m_remoteAddressHash = m_hash;
            __asm
            {
              vmovups ymm0, ymmword ptr [r12]
              vmovups ymmword ptr [rdi+8], ymm0
              vmovups ymm1, ymmword ptr [r12+20h]
              vmovups ymmword ptr [rdi+28h], ymm1
              vmovups ymm0, ymmword ptr [r12+40h]
              vmovups ymmword ptr [rdi+48h], ymm0
              vmovups ymm1, ymmword ptr [r12+60h]
              vmovups ymmword ptr [rdi+68h], ymm1
              vmovups xmm0, xmmword ptr [r12+80h]
              vmovups xmmword ptr [rdi+88h], xmm0
              vmovsd  xmm1, qword ptr [r12+90h]
              vmovsd  qword ptr [rdi+98h], xmm1
            }
            if ( !HiResTimeStamp )
              HiResTimeStamp = 1i64;
            _RDI->m_timestamp = HiResTimeStamp;
          }
          bdMutex::unlock(&bdNATTravClient::m_cacheLock);
        }
        else
        {
          bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdnattravclient.cpp", "bdNATTravClient::receiveFrom", 0x13Au, "Failed to find identifier in callback table. This is ok if we have already received a reply for this search.");
        }
        bdNATTravClientData::~bdNATTravClientData(&value);
      }
      else
      {
        bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdnattravclient.cpp", "bdNATTravClient::receiveFrom", 0x13Fu, "Packet was tampered with, discarding.");
      }
      break;
    case 0xDu:
      v12 = this->m_localCommonAddr.m_ptr->m_hash;
      if ( bdNATTraversalPacket::getIdentifier(packet) != v12 )
      {
        bdAddrString::bdAddrString(&v73, _R12);
        String = bdAddrString::getString(v18);
        formata = "ignored request from %s";
        linea = 368;
        goto LABEL_13;
      }
      bdNATTraversalPacket::setType(packet, 0xCu);
      if ( !bdNATTraversalPacket::serialize(packet, data, 0x508u, 0, &newOffset) )
      {
        format = "Cannot serialze the packet.";
        line = 347;
        v13 = (const char *)&other;
        v14 = BD_LOG_ERROR;
LABEL_50:
        bdLogMessage(v14, v13, "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdnattravclient.cpp", "bdNATTravClient::receiveFrom", line, format);
        break;
      }
      v15 = this->m_socket->sendTo(this->m_socket, _R12, data, newOffset);
      if ( v15 > 0 )
      {
        bdAddrString::bdAddrString(&v71, _R12);
        String = bdAddrString::getString(v16);
        formata = "sent INTRO REPLY to %s";
        linea = 355;
LABEL_13:
        bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdnattravclient.cpp", "bdNATTravClient::receiveFrom", linea, formata, String);
        break;
      }
      bdAddrString::bdAddrString(&v72, _R12);
      v64 = v15;
      v63 = bdAddrString::getString(v17);
      lineb = 359;
      goto LABEL_11;
  }
  _R11 = &v84;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
}

/*
==============
bdNATTravClient::resetUsageStats
==============
*/
void bdNATTravClient::resetUsageStats(bdNATTravClient *this)
{
  memset_0(this->m_traversalCount, 0, 0x80ui64);
}

/*
==============
bdNATTravClient::saveInCache
==============
*/
void bdNATTravClient::saveInCache(unsigned int remoteAddressHash, const bdAddr *realAddress)
{
  unsigned __int64 HiResTimeStamp; 
  bdNATTravClient::bdCachedTraversal *v10; 
  bdNATTravClient::bdCachedTraversal *v11; 
  unsigned __int64 v14; 
  unsigned __int64 m_timestamp; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
  }
  _R14 = realAddress;
  HiResTimeStamp = bdPlatformTiming::getHiResTimeStamp();
  _RDI = NULL;
  v10 = NULL;
  bdMutex::lock(&bdNATTravClient::m_cacheLock);
  v11 = bdNATTravClient::m_cachedTraversals;
  __asm
  {
    vmovss  xmm6, cs:__real@5f800000
    vmovss  xmm7, cs:__real@447a0000
  }
  v14 = bdNATTravClient::m_cacheTimeoutMilliseconds;
  do
  {
    if ( v11 >= (bdNATTravClient::bdCachedTraversal *)&unk_1564C7E60 )
      break;
    m_timestamp = v11->m_timestamp;
    if ( !m_timestamp )
      goto LABEL_11;
    if ( !v14 )
      goto LABEL_22;
    *(double *)&_XMM0 = bdPlatformTiming::getElapsedTime(m_timestamp, HiResTimeStamp);
    __asm { vmulss  xmm1, xmm0, xmm7 }
    v14 = bdNATTravClient::m_cacheTimeoutMilliseconds;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rdx
    }
    if ( (bdNATTravClient::m_cacheTimeoutMilliseconds & 0x8000000000000000ui64) != 0i64 )
      __asm { vaddss  xmm0, xmm0, xmm6 }
    __asm { vcomiss xmm1, xmm0 }
    if ( bdNATTravClient::m_cacheTimeoutMilliseconds )
    {
LABEL_11:
      _RDI = v11;
    }
    else
    {
LABEL_22:
      if ( !v10 || v11->m_timestamp < v10->m_timestamp )
        v10 = v11;
    }
    ++v11;
  }
  while ( !_RDI );
  if ( !_RDI )
    _RDI = v10;
  if ( _RDI )
  {
    _RDI->m_remoteAddressHash = remoteAddressHash;
    __asm
    {
      vmovups ymm0, ymmword ptr [r14]
      vmovups ymmword ptr [rdi+8], ymm0
      vmovups ymm1, ymmword ptr [r14+20h]
      vmovups ymmword ptr [rdi+28h], ymm1
      vmovups ymm0, ymmword ptr [r14+40h]
      vmovups ymmword ptr [rdi+48h], ymm0
      vmovups ymm1, ymmword ptr [r14+60h]
      vmovups ymmword ptr [rdi+68h], ymm1
      vmovups xmm0, xmmword ptr [r14+80h]
      vmovups xmmword ptr [rdi+88h], xmm0
      vmovsd  xmm1, qword ptr [r14+90h]
      vmovsd  qword ptr [rdi+98h], xmm1
    }
    if ( !HiResTimeStamp )
      HiResTimeStamp = 1i64;
    _RDI->m_timestamp = HiResTimeStamp;
  }
  bdMutex::unlock(&bdNATTravClient::m_cacheLock);
  __asm
  {
    vmovaps xmm6, [rsp+78h+var_38]
    vmovaps xmm7, [rsp+78h+var_48]
  }
}

/*
==============
bdNATTravClient::sendKeepAlive
==============
*/
char bdNATTravClient::sendKeepAlive(bdNATTravClient *this)
{
  char v2; 
  const bdAddr *v3; 
  const bdAddr *addrDest; 
  const bdAddr *v5; 
  unsigned int i; 
  bdSocket *m_socket; 
  unsigned int v9; 
  int (__fastcall *sendTo)(bdSocket *, const bdAddr *, const void *, const unsigned int); 
  int v11; 
  unsigned __int8 type[4]; 
  unsigned int newOffset[3]; 
  bdAddr v14; 
  bdAddr v15; 
  bdNATTraversalPacket v16; 
  char data[1296]; 

  v2 = 1;
  bdGlobalStopwatch::start(&this->m_keepAliveTimer);
  if ( this->m_introducers.m_size )
  {
    bdAddr::bdAddr(&v14);
    addrDest = v3;
    bdAddr::bdAddr(&v15);
    type[0] = 14;
    bdNATTraversalPacket::bdNATTraversalPacket(&v16, type, 0, v5, addrDest);
    if ( !bdNATTraversalPacket::serialize(&v16, data, 0x508u, 0, newOffset) )
    {
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdnattravclient.cpp", "bdNATTravClient::sendKeepAlive", 0x279u, "Failed to send keepalive. Packet failed to serialize.");
      return 0;
    }
    for ( i = 0; i < this->m_introducers.m_size; ++i )
    {
      m_socket = this->m_socket;
      v9 = newOffset[0];
      sendTo = m_socket->sendTo;
      bdHandleAssert(i < this->m_introducers.m_size, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<class bdAddr>::operator []", 0x68u, "bdArray<T>::operator[], rangecheck failed");
      v11 = sendTo(m_socket, &this->m_introducers.m_data[i], data, v9);
      if ( v11 != newOffset[0] )
      {
        bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdnattravclient.cpp", "bdNATTravClient::sendKeepAlive", 0x281u, "Failed to send keepalive. Invalid socket?");
        v2 = 0;
      }
    }
  }
  return v2;
}

/*
==============
bdNATTravClient::sendStage1
==============
*/
char bdNATTravClient::sendStage1(bdNATTravClient *this, bdNATTravClientData *data)
{
  char result; 
  bdCommonAddr *m_ptr; 
  bdCommonAddr *v6; 
  bdAddr *LocalAddrByIndex; 
  unsigned int v8; 
  bdAddr *PublicAddr; 
  bool v10; 
  unsigned int v11; 
  char v12; 
  unsigned int v13; 
  const bdAddr *addrDest; 
  const bdAddr *v15; 
  bool v16; 
  const bdAddr *v17; 
  const bdAddr *AddrSrc; 
  const bdAddr *v19; 
  unsigned int v20; 
  bdServiceBandwidthArbitrator *m_bandArb; 
  unsigned int Size; 
  bdAddrString *v23; 
  const char *String; 
  int v25; 
  bdAddrString *v26; 
  const char *v27; 
  bdNATTravTelemetry *Telemetry; 
  char v29; 
  unsigned __int8 type[3]; 
  unsigned int ident; 
  unsigned int newOffset; 
  unsigned int v33; 
  bdCommonAddr *v34; 
  bdAddr *src; 
  bdCommonAddr *v36; 
  unsigned int m_size; 
  bdReference<bdCommonAddr> remote; 
  bdReference<bdCommonAddr> local; 
  __int64 v40; 
  bdAddrString v41; 
  bdAddrString v42; 
  bdNATTraversalPacket v43; 
  unsigned __int8 dataa[16]; 
  char v45[1296]; 

  v40 = -2i64;
  bdStopwatch::start(&data->m_lastSent);
  if ( !data->m_throttled || (result = bdServiceBandwidthArbitrator::allowedSend(this->m_bandArb, 0x1Cu)) != 0 )
  {
    ++data->m_tries[1];
    m_ptr = data->m_local.m_ptr;
    v34 = m_ptr;
    if ( m_ptr )
    {
      _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
      m_ptr = v34;
    }
    v6 = data->m_remote.m_ptr;
    v36 = v6;
    if ( v6 )
    {
      _InterlockedExchangeAdd((volatile signed __int32 *)&v6->m_refCount, 1u);
      m_ptr = v34;
      v6 = v36;
    }
    ident = v6->m_hash;
    LocalAddrByIndex = (bdAddr *)bdCommonAddr::getLocalAddrByIndex(m_ptr, 0);
    src = LocalAddrByIndex;
    m_size = bdCommonAddr::getLocalAddrs(v6)->m_size;
    v8 = m_size;
    PublicAddr = (bdAddr *)bdCommonAddr::getPublicAddr(v6);
    v10 = !bdSockAddr::isValid(&PublicAddr->m_address);
    v11 = m_size + 1;
    if ( v10 )
      v11 = m_size;
    v33 = v11;
    v12 = 1;
    v29 = 1;
    v13 = 0;
    if ( v11 )
    {
      while ( 1 )
      {
        addrDest = v13 >= v8 ? bdCommonAddr::getPublicAddr(v6) : bdCommonAddr::getLocalAddrByIndex(v6, v13);
        v15 = addrDest;
        v16 = 0;
        type[0] = 13;
        bdNATTraversalPacket::bdNATTraversalPacket(&v43, type, ident, LocalAddrByIndex, addrDest);
        v17 = bdNATTraversalPacket::getAddrDest(&v43);
        AddrSrc = bdNATTraversalPacket::getAddrSrc(&v43);
        v19 = v17;
        v20 = ident;
        if ( bdNATTravClient::doHMac(this, ident, AddrSrc, v19, dataa) )
          break;
        bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdnattravclient.cpp", "bdNATTravClient::sendStage1", 0x2E2u, "Failed to do hmac.");
        LocalAddrByIndex = src;
LABEL_31:
        ++v13;
        v8 = m_size;
        if ( v13 >= v33 )
        {
          v12 = v29;
          goto LABEL_33;
        }
      }
      bdNATTraversalPacket::setHMAC(&v43, dataa, 0xAu);
      newOffset = 0;
      bdNATTraversalPacket::serialize(&v43, v45, 0x508u, 0, &newOffset);
      if ( data->m_throttled )
      {
        m_bandArb = this->m_bandArb;
        Size = bdNATTraversalPacket::getSize(&v43);
        bdServiceBandwidthArbitrator::send(m_bandArb, Size + 28);
        v20 = ident;
      }
      if ( this->m_simulateNAT )
      {
        remote.m_ptr = v6;
        _InterlockedExchangeAdd((volatile signed __int32 *)&v6->m_refCount, 1u);
        local.m_ptr = v34;
        if ( v34 )
          _InterlockedExchangeAdd((volatile signed __int32 *)&v34->m_refCount, 1u);
        if ( !bdNATTravClient::connectionAllowed(this, (bdReference<bdCommonAddr>)&local, (bdReference<bdCommonAddr>)&remote) )
        {
          bdAddrString::bdAddrString(&v41, v15);
          String = bdAddrString::getString(v23);
          bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdnattravclient.cpp", "bdNATTravClient::sendStage1", 0x2C1u, "SIMULATED sent INTRO REQ to %s", String);
          v29 = 1;
          v6 = v36;
          goto LABEL_25;
        }
        v6 = v36;
      }
      v25 = this->m_socket->sendTo(this->m_socket, v15, v45, newOffset);
      if ( v25 != newOffset )
      {
        bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdnattravclient.cpp", "bdNATTravClient::sendStage1", 0x2CAu, "Failed to send. Invalid socket?");
        v29 = 0;
        goto LABEL_26;
      }
      bdAddrString::bdAddrString(&v42, v15);
      v27 = bdAddrString::getString(v26);
      bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdnattravclient.cpp", "bdNATTravClient::sendStage1", 0x2CFu, "sent INTRO REQ to %s", v27);
LABEL_25:
      v16 = 1;
LABEL_26:
      Telemetry = bdNATTravClient::getTelemetry(this, v20);
      LocalAddrByIndex = src;
      if ( Telemetry )
      {
        if ( data->m_state == BD_NTCDS_STAGE_1 )
          bdNATTravTelemetry::addRecord(Telemetry, BD_SEND_STAGE_1, src, v15, v16);
        else
          bdNATTravTelemetry::addRecord(Telemetry, BD_SEND_STAGE_3, src, v15, v16);
      }
      goto LABEL_31;
    }
LABEL_33:
    if ( !_InterlockedDecrement((volatile signed __int32 *)&v6->m_refCount) )
      ((void (__fastcall *)(bdCommonAddr *, __int64))v36->~bdReferencable)(v36, 1i64);
    if ( v34 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v34->m_refCount, 0xFFFFFFFF) == 1 )
        ((void (__fastcall *)(bdCommonAddr *, __int64))v34->~bdReferencable)(v34, 1i64);
    }
    return v12;
  }
  return result;
}

/*
==============
bdNATTravClient::sendStage2
==============
*/
bool bdNATTravClient::sendStage2(bdNATTravClient *this, bdNATTravClientData *data)
{
  bdNATType NATType; 
  bdNATTravClient::bdNATTravClientInterleaveMode m_interleaveMode; 
  bool result; 
  bdCommonAddr *m_ptr; 
  bdCommonAddr *v8; 
  volatile signed __int32 *p_m_refCount; 
  bool v10; 
  unsigned int v11; 
  const bdAddr *AddrDest; 
  const bdAddr *AddrSrc; 
  bdServiceBandwidthArbitrator *m_bandArb; 
  unsigned int Size; 
  const bdAddr *v16; 
  bdAddrString *v17; 
  const char *v18; 
  const bdAddr *v19; 
  bdAddrString *v20; 
  const char *v21; 
  bdArray<bdAddr> *p_m_introducers; 
  const bdAddr *v23; 
  bdAddrString *v24; 
  const char *v25; 
  bdSocket *m_socket; 
  int (__fastcall *sendTo)(bdSocket *, const bdAddr *, const void *, const unsigned int); 
  unsigned int v28; 
  bdAddr *v29; 
  int v30; 
  const bdAddr *v31; 
  const bdAddr *v32; 
  const bdAddr *v33; 
  const char *String; 
  const char *v35; 
  const char *v36; 
  bdNATTravTelemetry *Telemetry; 
  bdNATTravTelemetry *v38; 
  const bdAddr *v39; 
  unsigned __int8 type[4]; 
  unsigned int newOffset; 
  bdCommonAddr *v42; 
  unsigned int key; 
  bdReference<bdCommonAddr> remote; 
  bdReference<bdCommonAddr> local; 
  bdCommonAddr *v46; 
  bdAddr *dst; 
  bdAddr *src; 
  __int64 v49; 
  bdAddrString v50; 
  bdAddrString v51; 
  bdAddrString v52; 
  bdAddrString v53; 
  bdAddrString v54; 
  bdAddrString v55; 
  bdNATTraversalPacket v56; 
  unsigned __int8 dataa[16]; 
  char v58[1296]; 

  v49 = -2i64;
  NATType = bdCommonAddr::getNATType(data->m_remote.m_ptr);
  m_interleaveMode = this->m_interleaveMode;
  if ( m_interleaveMode == BD_NAT_TRAV_INTERLEAVE_ALL || m_interleaveMode == BD_NAT_TRAV_INTERLEAVE_MODERATE && NATType == BD_NAT_MODERATE )
    bdNATTravClient::sendStage1(this, data);
  if ( !data->m_throttled || (result = bdServiceBandwidthArbitrator::allowedSend(this->m_bandArb, 0x1Cu)) )
  {
    bdStopwatch::start(&data->m_lastSent);
    ++data->m_tries[2];
    m_ptr = data->m_local.m_ptr;
    v42 = m_ptr;
    if ( m_ptr )
    {
      _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
      m_ptr = v42;
    }
    v8 = data->m_remote.m_ptr;
    v46 = v8;
    p_m_refCount = (volatile signed __int32 *)&v8->m_refCount;
    if ( v8 )
    {
      _InterlockedExchangeAdd(p_m_refCount, 1u);
      m_ptr = v42;
      v8 = v46;
    }
    v10 = 1;
    key = v8->m_hash;
    v11 = key;
    src = (bdAddr *)bdCommonAddr::getPublicAddr(m_ptr);
    dst = (bdAddr *)bdCommonAddr::getPublicAddr(v8);
    type[0] = 10;
    bdNATTraversalPacket::bdNATTraversalPacket(&v56, type, key, src, dst);
    AddrDest = bdNATTraversalPacket::getAddrDest(&v56);
    AddrSrc = bdNATTraversalPacket::getAddrSrc(&v56);
    if ( bdNATTravClient::doHMac(this, v11, AddrSrc, AddrDest, dataa) )
    {
      bdNATTraversalPacket::setHMAC(&v56, dataa, 0xAu);
      newOffset = 0;
      bdNATTraversalPacket::serialize(&v56, v58, 0x508u, 0, &newOffset);
      if ( data->m_throttled )
      {
        m_bandArb = this->m_bandArb;
        Size = bdNATTraversalPacket::getSize(&v56);
        bdServiceBandwidthArbitrator::send(m_bandArb, Size + 28);
      }
      if ( !this->m_simulateNAT )
        goto LABEL_20;
      remote.m_ptr = v8;
      _InterlockedExchangeAdd((volatile signed __int32 *)&v8->m_refCount, 1u);
      local.m_ptr = v42;
      if ( v42 )
        _InterlockedExchangeAdd((volatile signed __int32 *)&v42->m_refCount, 1u);
      if ( bdNATTravClient::connectionAllowed(this, (bdReference<bdCommonAddr>)&local, (bdReference<bdCommonAddr>)&remote) )
      {
LABEL_20:
        p_m_introducers = &this->m_introducers;
        if ( this->m_introducers.m_size && (m_socket = this->m_socket, sendTo = m_socket->sendTo, v28 = newOffset, v29 = bdArray<bdAddr>::operator[](&this->m_introducers, 0), v30 = sendTo(m_socket, v29, v58, v28), v30 == newOffset) )
        {
          v31 = bdArray<bdAddr>::operator[](&this->m_introducers, 0);
          bdAddrString::bdAddrString(&v52, v31);
          v32 = bdNATTraversalPacket::getAddrDest(&v56);
          bdAddrString::bdAddrString(&v51, v32);
          v33 = bdNATTraversalPacket::getAddrSrc(&v56);
          bdAddrString::bdAddrString(&v50, v33);
          String = bdAddrString::getString(&v50);
          v35 = bdAddrString::getString(&v51);
          v36 = bdAddrString::getString(&v52);
          bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdnattravclient.cpp", "bdNATTravClient::sendStage2", 0x32Fu, "sent INTRO NAT req to %s for %s from %s", v36, v35, String);
        }
        else
        {
          bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdnattravclient.cpp", "bdNATTravClient::sendStage2", 0x326u, "Failed to send. Invalid socket?");
          v10 = 0;
        }
      }
      else
      {
        v16 = bdNATTraversalPacket::getAddrSrc(&v56);
        bdAddrString::bdAddrString(&v53, v16);
        v18 = bdAddrString::getString(v17);
        v19 = bdNATTraversalPacket::getAddrDest(&v56);
        bdAddrString::bdAddrString(&v54, v19);
        v21 = bdAddrString::getString(v20);
        p_m_introducers = &this->m_introducers;
        v23 = bdArray<bdAddr>::operator[](&this->m_introducers, 0);
        bdAddrString::bdAddrString(&v55, v23);
        v25 = bdAddrString::getString(v24);
        bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdnattravclient.cpp", "bdNATTravClient::sendStage2", 0x31Eu, "SIMULATED sent INTRO NAT req to %s for %s from %s", v25, v21, v18);
        v10 = 1;
      }
      Telemetry = bdNATTravClient::getTelemetry(this, key);
      v38 = Telemetry;
      if ( Telemetry )
      {
        bdNATTravTelemetry::addRecord(Telemetry, BD_SEND_STAGE_2, src, dst, v10);
        v39 = bdArray<bdAddr>::operator[](p_m_introducers, 0);
        bdNATTravTelemetry::setSTUNAddr(v38, v39);
      }
    }
    else
    {
      v10 = 0;
    }
    if ( !_InterlockedDecrement(p_m_refCount) )
      ((void (__fastcall *)(bdCommonAddr *, __int64))v46->~bdReferencable)(v46, 1i64);
    if ( v42 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v42->m_refCount, 0xFFFFFFFF) == 1 )
        ((void (__fastcall *)(bdCommonAddr *, __int64))v42->~bdReferencable)(v42, 1i64);
    }
    return v10;
  }
  return result;
}

/*
==============
bdNATTravClient::sendStage3
==============
*/
bool bdNATTravClient::sendStage3(bdNATTravClient *this, bdNATTravClientData *data)
{
  ++data->m_tries[3];
  return bdNATTravClient::sendStage1(this, data);
}

/*
==============
bdNATTravClient::setCacheTimeout
==============
*/
void bdNATTravClient::setCacheTimeout(unsigned int milliseconds)
{
  bdNATTravClient::m_cacheTimeoutMilliseconds = milliseconds;
}

/*
==============
bdNATTravClient::setInterleaveMode
==============
*/
void bdNATTravClient::setInterleaveMode(bdNATTravClient *this, bdNATTravClient::bdNATTravClientInterleaveMode mode)
{
  if ( (unsigned int)mode <= BD_NAT_TRAV_INTERLEAVE_ALL )
    this->m_interleaveMode = mode;
  else
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdnattravclient.cpp", "bdNATTravClient::setInterleaveMode", 0x416u, "Invalid interleave mode [%d] given to setNATTravInterleaveMode", mode);
}

/*
==============
bdNATTravClient::setNATTravInterleaveMode
==============
*/
void bdNATTravClient::setNATTravInterleaveMode(bdNATTravClient *this, bool enable)
{
  BOOL v2; 

  if ( (unsigned __int8)enable < 2u )
  {
    this->m_interleaveMode = enable;
  }
  else
  {
    v2 = enable;
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdnattravclient.cpp", "bdNATTravClient::setInterleaveMode", 0x416u, "Invalid interleave mode [%d] given to setNATTravInterleaveMode", v2);
  }
}

/*
==============
bdNATTravClient::setNATTravStageMaxTries
==============
*/
void bdNATTravClient::setNATTravStageMaxTries(bdNATTravClient *this, bdNATTravClientData::bdNATTravClientDataState stage, unsigned int tries)
{
  int v5; 
  unsigned int v7; 

  if ( (unsigned int)(stage - 1) > 2 )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdnattravclient.cpp", "bdNATTravClient::setNATTravStageMaxTries", 0x41Eu, "Invalid stage [%u] given to setNATTravStageMaxTries", stage);
  }
  else if ( tries <= 0xA )
  {
    this->m_maxTriesPerStage[stage] = tries;
  }
  else
  {
    v7 = this->m_maxTriesPerStage[stage];
    v5 = 10;
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdnattravclient.cpp", "bdNATTravClient::setNATTravStageMaxTries", 0x425u, "Attempted to set NAT traversal stage tries to %u which is greater than the maximum allowed %u.The value hasn't been modified: m_maxTriesPerStage[%d] = %u", tries, v5, stage, v7);
  }
}

/*
==============
bdNATTravClient::setNATTravTimeout
==============
*/

void __fastcall bdNATTravClient::setNATTravTimeout(bdNATTravClient *this, double NATTravTimeout)
{
  __asm { vmovss  dword ptr [rcx+108h], xmm1 }
}

/*
==============
bdNATTravClient::setSimulateNAT
==============
*/
void bdNATTravClient::setSimulateNAT(bdNATTravClient *this, bool simulateNAT)
{
  this->m_simulateNAT = simulateNAT;
}

/*
==============
bdNATTravClient::setupIntroducers
==============
*/
char bdNATTravClient::setupIntroducers(bdNATTravClient *this, const bdArray<bdAddr> *introducers)
{
  if ( this->m_status == BD_NAT_TRAV_UNINITIALIZED )
    return 0;
  if ( this->m_introducers.m_size )
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdnattravclient.cpp", "bdNATTravClient::setupIntroducers", 0x37Au, "Overwriting existing introducer entries.");
  bdArray<bdAddr>::operator=(&this->m_introducers, introducers);
  return 1;
}

/*
==============
bdNATTravClient::updateLocalCommonAddr
==============
*/
__int64 bdNATTravClient::updateLocalCommonAddr(bdNATTravClient *this, const bdReference<bdCommonAddr> newLocalCommonAddr)
{
  bdCommonAddr *m_ptr; 
  unsigned __int8 v4; 
  __int64 v6; 
  __int64 v7; 
  bdNATTravTelemetry *v9; 
  __int64 v10; 
  bdCommonAddr *v11; 
  bdCommonAddr *v12; 
  bdCommonAddr_vtbl *v13; 
  unsigned int m_capacity; 
  __int64 v15; 
  __int64 v18; 
  __int64 v19; 
  bdNATTravListener *m_listener; 
  bdNATTravListener *m_secondaryListener; 
  unsigned __int64 m_start; 
  bool m_throttled; 
  unsigned __int64 v25; 
  bdNATTravTelemetry v26; 

  m_ptr = newLocalCommonAddr.m_ptr;
  v4 = 0;
  if ( this->m_status )
  {
    if ( newLocalCommonAddr.m_ptr->__vftable )
    {
      _RBX = (bdHashMap<unsigned int,bdNATTravClientData,bdHashingClass>::Node *)bdHashMap<unsigned int,bdNATTravClientData,bdHashingClass>::getIterator(&this->m_callbacks);
      while ( _RBX )
      {
        v6 = (__int64)_RBX->m_data.m_local.m_ptr;
        v18 = v6;
        if ( v6 )
          _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 8), 1u);
        v7 = (__int64)_RBX->m_data.m_remote.m_ptr;
        v19 = v7;
        if ( v7 )
          _InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 8), 1u);
        m_listener = _RBX->m_data.m_listener;
        m_secondaryListener = _RBX->m_data.m_secondaryListener;
        __asm
        {
          vmovups xmm0, xmmword ptr [rbx+28h]
          vmovups [rbp+2950h+var_29C8], xmm0
        }
        m_start = _RBX->m_data.m_lastSent.m_start;
        m_throttled = _RBX->m_data.m_throttled;
        v25 = _RBX->m_data.m_age.m_start;
        v9 = &v26;
        v10 = 32i64;
        do
        {
          bdNATTravTelemetry::bdNATTravEvent::bdNATTravEvent(v9->m_attemptRecords, (const bdNATTravTelemetry::bdNATTravEvent *)((char *)v9->m_attemptRecords + (char *)&_RBX->m_data.m_telemetry - (char *)&v26));
          v9 = (bdNATTravTelemetry *)((char *)v9 + 320);
          --v10;
        }
        while ( v10 );
        v26.m_attemptRecordsCount = _RBX->m_data.m_telemetry.m_attemptRecordsCount;
        v26.m_age.m_start = _RBX->m_data.m_telemetry.m_age.m_start;
        v11 = _RBX->m_data.m_telemetry.m_localCommonAddr.m_ptr;
        v26.m_localCommonAddr.m_ptr = v11;
        if ( v11 )
          _InterlockedExchangeAdd((volatile signed __int32 *)&v11->m_refCount, 1u);
        v12 = _RBX->m_data.m_telemetry.m_remoteCommonAddr.m_ptr;
        v26.m_remoteCommonAddr.m_ptr = v12;
        if ( v12 )
          _InterlockedExchangeAdd((volatile signed __int32 *)&v12->m_refCount, 1u);
        bdAddr::bdAddr(&v26.m_realAddr, &_RBX->m_data.m_telemetry.m_realAddr);
        bdAddr::bdAddr(&v26.m_stunAddr, &_RBX->m_data.m_telemetry.m_stunAddr);
        v26.m_result = _RBX->m_data.m_telemetry.m_result;
        v26.m_triesStage1 = _RBX->m_data.m_telemetry.m_triesStage1;
        v26.m_triesStage2 = _RBX->m_data.m_telemetry.m_triesStage2;
        v26.m_triesStage3 = _RBX->m_data.m_telemetry.m_triesStage3;
        v26.m_throttled = _RBX->m_data.m_telemetry.m_throttled;
        v26.m_duration = _RBX->m_data.m_telemetry.m_duration;
        m_ptr = newLocalCommonAddr.m_ptr;
        if ( (__int64 *)newLocalCommonAddr.m_ptr != &v18 )
        {
          if ( v18 && _InterlockedExchangeAdd((volatile signed __int32 *)(v18 + 8), 0xFFFFFFFF) == 1 && v18 )
            (**(void (__fastcall ***)(__int64, __int64))v18)(v18, 1i64);
          v13 = newLocalCommonAddr.m_ptr->__vftable;
          v18 = (__int64)v13;
          if ( v13 )
            _InterlockedExchangeAdd((volatile signed __int32 *)&v13[1], 1u);
        }
        if ( _RBX->m_next )
        {
          _RBX = _RBX->m_next;
        }
        else
        {
          m_capacity = this->m_callbacks.m_capacity;
          v15 = ((HIBYTE(_RBX->m_key) ^ (16777619 * (BYTE2(_RBX->m_key) ^ (16777619 * (BYTE1(_RBX->m_key) ^ (16777619 * LOBYTE(_RBX->m_key))))))) & (m_capacity - 1)) + 1;
          if ( (unsigned int)v15 >= m_capacity )
          {
LABEL_27:
            _RBX = NULL;
            _InterlockedExchangeAdd((volatile signed __int32 *)&this->m_callbacks.m_numIterators, 0xFFFFFFFF);
          }
          else
          {
            while ( 1 )
            {
              _RBX = this->m_callbacks.m_map[v15];
              if ( _RBX )
                break;
              v15 = (unsigned int)(v15 + 1);
              if ( (unsigned int)v15 >= m_capacity )
                goto LABEL_27;
            }
          }
        }
        bdNATTravTelemetry::~bdNATTravTelemetry(&v26);
        if ( v19 && _InterlockedExchangeAdd((volatile signed __int32 *)(v19 + 8), 0xFFFFFFFF) == 1 )
        {
          if ( v19 )
            (**(void (__fastcall ***)(__int64, __int64))v19)(v19, 1i64);
          v19 = 0i64;
        }
        if ( v18 && _InterlockedExchangeAdd((volatile signed __int32 *)(v18 + 8), 0xFFFFFFFF) == 1 && v18 )
          (**(void (__fastcall ***)(__int64, __int64))v18)(v18, 1i64);
      }
      bdReference<bdCommonAddr>::operator=(&this->m_localCommonAddr, (const bdReference<bdCommonAddr> *)m_ptr);
      v4 = 1;
    }
    else
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdnattravclient.cpp", "bdNATTravClient::updateLocalCommonAddr", 0x38Au, "Null common addr cannot be used to setup NAT trav client");
    }
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdnattravclient.cpp", "bdNATTravClient::updateLocalCommonAddr", 0x39Bu, "Updating local common addr has no effect when class is uninitialized");
  }
  if ( m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->__vftable[1], 0xFFFFFFFF) == 1 )
  {
    if ( m_ptr->__vftable )
      (*(void (__fastcall **)(bdCommonAddr_vtbl *, __int64))m_ptr->~bdReferencable)(m_ptr->__vftable, 1i64);
    m_ptr->__vftable = NULL;
  }
  return v4;
}

