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
  float v3; 
  bdHashMap<unsigned int,bdNATTravClientData,bdHashingClass>::Node **v4; 

  bdPacketInterceptor::bdPacketInterceptor(this);
  this->__vftable = (bdNATTravClient_vtbl *)&bdNATTravClient::`vftable';
  this->m_introducers.m_data = NULL;
  *(_QWORD *)&this->m_introducers.m_capacity = 0i64;
  this->m_callbacks.m_numIterators.m_value._My_val = 0;
  this->m_callbacks.m_size = 0;
  PowerOf2 = bdBitOperations::nextPowerOf2(4u);
  this->m_callbacks.m_capacity = PowerOf2;
  this->m_callbacks.m_loadFactor = 0.75;
  v3 = (float)PowerOf2;
  this->m_callbacks.m_threshold = (int)(float)(v3 * 0.75);
  v4 = (bdHashMap<unsigned int,bdNATTravClientData,bdHashingClass>::Node **)bdMemory::allocate(8i64 * PowerOf2);
  this->m_callbacks.m_map = v4;
  memset_0(v4, 0, 8i64 * this->m_callbacks.m_capacity);
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
  bdCommonAddr_vtbl *v10; 
  char v12; 
  bdCommonAddr *v13; 
  unsigned int v14; 
  bdHashMap<unsigned int,bdNATTravClientData,bdHashingClass> *p_m_callbacks; 
  int v16; 
  bdHashMap<unsigned int,bdNATTravClientData,bdHashingClass>::Node *v17; 
  bdCommonAddr *v18; 
  bdCommonAddr *v19; 
  bdNATType NATType; 
  bdNATTravClient::bdNATTravClientInterleaveMode m_interleaveMode; 
  bdHashMap<unsigned int,bdNATTravClientData,bdHashingClass>::Node *v22; 
  bdCommonAddr *v23; 
  bdCommonAddr *v24; 
  unsigned int key; 
  bdReference<bdCommonAddr> v26; 
  bdReference<bdCommonAddr> v27; 
  bdReference<bdCommonAddr> local; 
  bdReference<bdCommonAddr> addr; 
  bdCommonAddr_vtbl *v30; 
  bdReference<bdCommonAddr> remotea; 
  __int64 v32; 
  bdCommonAddr *m_ptr; 
  bdNATTravClient::bdCachedTraversal out; 
  bdAddr m_realAddress; 
  bdNATTravClientData data; 
  char v37[1024]; 
  char buf[1024]; 
  char format[1024]; 

  v32 = -2i64;
  m_ptr = remote.m_ptr;
  bdAddr::bdAddr(&m_realAddress);
  if ( this->m_useNatTravCache && (v8 = HIDWORD(remote.m_ptr->__vftable[117].~bdReferencable), out.m_remoteAddressHash = 0, bdAddr::bdAddr(&out.m_realAddress), out.m_timestamp = 0i64, bdNATTravClient::getCacheEntry(v8, &out)) )
  {
    m_realAddress = out.m_realAddress;
    bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdnattravclient.cpp", "bdNATTravClient::connect", 0x6Cu, "Cached Nat traversal - skipping 2nd attempt (1st attempt worked)");
    onNATAddrDiscovery = listener->onNATAddrDiscovery;
    v10 = remote.m_ptr->__vftable;
    v30 = v10;
    if ( v10 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v10[1], 1u);
    ((void (__fastcall *)(bdNATTravListener *, bdCommonAddr_vtbl **, bdAddr *))onNATAddrDiscovery)(listener, &v30, &m_realAddress);
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
      v13 = (bdCommonAddr *)remote.m_ptr->__vftable;
      v14 = HIDWORD(remote.m_ptr->__vftable[117].~bdReferencable);
      key = v14;
      p_m_callbacks = &this->m_callbacks;
      if ( this->m_callbacks.m_size && (v16 = HIBYTE(v14) ^ (16777619 * (BYTE2(v14) ^ (16777619 * (BYTE1(v14) ^ (16777619 * (unsigned __int8)v14))))), (v17 = this->m_callbacks.m_map[v16 & (this->m_callbacks.m_capacity - 1)]) != NULL) )
      {
        while ( v14 != v17->m_key )
        {
          v17 = v17->m_next;
          if ( !v17 )
            goto LABEL_17;
        }
        _InterlockedExchangeAdd((volatile signed __int32 *)&this->m_callbacks.m_numIterators, 1u);
        bdHandleAssert(this->m_callbacks.m_numIterators.m_value._My_val != 0, "m_numIterators != 0", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdhashmap.inl", "bdHashMap<unsigned int,class bdNATTravClientData,class bdHashingClass>::releaseIterator", 0x18Au, "bdHashMap::releaseIterator Iterator count reached 0, can't release iterator");
        _InterlockedExchangeAdd((volatile signed __int32 *)&this->m_callbacks.m_numIterators, 0xFFFFFFFF);
        if ( p_m_callbacks->m_size && (v22 = this->m_callbacks.m_map[v16 & (this->m_callbacks.m_capacity - 1)]) != NULL )
        {
          while ( key != v22->m_key )
          {
            v22 = v22->m_next;
            if ( !v22 )
              goto LABEL_33;
          }
          _InterlockedExchangeAdd((volatile signed __int32 *)&this->m_callbacks.m_numIterators, 1u);
        }
        else
        {
LABEL_33:
          v22 = NULL;
        }
        if ( v22->m_data.m_secondaryListener )
        {
          v23 = (bdCommonAddr *)remote.m_ptr->__vftable;
          v27.m_ptr = v23;
          if ( v23 )
            _InterlockedExchangeAdd((volatile signed __int32 *)&v23->m_refCount, 1u);
          bdCommonAddrInfo::getBriefInfo((const bdReference<bdCommonAddr>)&v27, v37, 0x400u);
          bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdnattravclient.cpp", "bdNATTravClient::connect", 0xBCu, "Third connect request to %s. Ignoring.", v37);
          v12 = 0;
          bdHashMap<unsigned int,bdNATTravClientData,bdHashingClass>::releaseIterator(p_m_callbacks, v22);
        }
        else
        {
          v22->m_data.m_secondaryListener = listener;
          v12 = 1;
          bdHashMap<unsigned int,bdNATTravClientData,bdHashingClass>::releaseIterator(p_m_callbacks, v22);
        }
      }
      else
      {
LABEL_17:
        remotea.m_ptr = v13;
        if ( v13 )
          _InterlockedExchangeAdd((volatile signed __int32 *)&v13->m_refCount, 1u);
        v18 = this->m_localCommonAddr.m_ptr;
        local.m_ptr = v18;
        if ( v18 )
          _InterlockedExchangeAdd((volatile signed __int32 *)&v18->m_refCount, 1u);
        bdNATTravClientData::bdNATTravClientData(&data, (bdReference<bdCommonAddr>)&local, (bdReference<bdCommonAddr>)&remotea, listener);
        data.m_throttled = throttle;
        bdStopwatch::start(&data.m_age);
        v19 = (bdCommonAddr *)remote.m_ptr->__vftable;
        addr.m_ptr = v19;
        if ( v19 )
          _InterlockedExchangeAdd((volatile signed __int32 *)&v19->m_refCount, 1u);
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
          v12 = 1;
        }
        else
        {
          bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdnattravclient.cpp", "bdNATTravClient::connect", 0x9Eu, "Failed to put address in map.");
          v24 = (bdCommonAddr *)remote.m_ptr->__vftable;
          v26.m_ptr = v24;
          if ( v24 )
            _InterlockedExchangeAdd((volatile signed __int32 *)&v24->m_refCount, 1u);
          bdCommonAddrInfo::getBriefInfo((const bdReference<bdCommonAddr>)&v26, format, 0x400u);
          bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdnattravclient.cpp", "bdNATTravClient::connect", 0xA3u, format);
          v12 = 0;
        }
        bdNATTravClientData::~bdNATTravClientData(&data);
      }
    }
    else
    {
      v12 = 0;
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdnattravclient.cpp", "bdNATTravClient::connect", 0x75u, "Cannot call connect until this class has been initialized.");
    }
    if ( remote.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&remote.m_ptr->__vftable[1], 0xFFFFFFFF) == 1 )
    {
      if ( remote.m_ptr->__vftable )
        (*(void (__fastcall **)(bdCommonAddr_vtbl *, __int64))remote.m_ptr->~bdReferencable)(remote.m_ptr->__vftable, 1i64);
      remote.m_ptr->__vftable = NULL;
    }
    return v12;
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
  unsigned __int8 v4; 
  unsigned __int64 HiResTimeStamp; 
  bdNATTravClient::bdCachedTraversal *v6; 
  unsigned __int64 m_timestamp; 
  double ElapsedTime; 
  float v9; 
  float v10; 

  v4 = 0;
  HiResTimeStamp = bdPlatformTiming::getHiResTimeStamp();
  bdMutex::lock(&bdNATTravClient::m_cacheLock);
  v6 = bdNATTravClient::m_cachedTraversals;
  do
  {
    if ( v6 >= (bdNATTravClient::bdCachedTraversal *)&unk_1564C7E60 )
      break;
    if ( v6->m_remoteAddressHash == remoteAddressHash )
    {
      m_timestamp = v6->m_timestamp;
      if ( m_timestamp )
      {
        if ( !bdNATTravClient::m_cacheTimeoutMilliseconds )
          goto LABEL_9;
        ElapsedTime = bdPlatformTiming::getElapsedTime(m_timestamp, HiResTimeStamp);
        v9 = (float)(__int64)bdNATTravClient::m_cacheTimeoutMilliseconds;
        if ( (bdNATTravClient::m_cacheTimeoutMilliseconds & 0x8000000000000000ui64) != 0i64 )
        {
          v10 = (float)(__int64)bdNATTravClient::m_cacheTimeoutMilliseconds;
          v9 = v10 + 1.8446744e19;
        }
        if ( (float)(*(float *)&ElapsedTime * 1000.0) <= v9 )
        {
LABEL_9:
          *(_OWORD *)&out->m_remoteAddressHash = *(_OWORD *)&v6->m_remoteAddressHash;
          out->m_realAddress.m_address.inUn.m_ipv6Sockaddr.sin6_addr = v6->m_realAddress.m_address.inUn.m_ipv6Sockaddr.sin6_addr;
          *(_OWORD *)&out->m_realAddress.m_address.inUn.m_ipv6Sockaddr.sin6_scope_id = *(_OWORD *)&v6->m_realAddress.m_address.inUn.m_ipv6Sockaddr.sin6_scope_id;
          *(_OWORD *)((char *)&out->m_realAddress.m_address.inUn.m_ipv6Sockaddr + 40) = *(_OWORD *)((char *)&v6->m_realAddress.m_address.inUn.m_ipv6Sockaddr + 40);
          *(_OWORD *)(&out->m_realAddress.m_address.inUn.m_ipv6Sockaddr + 2) = *(_OWORD *)(&v6->m_realAddress.m_address.inUn.m_ipv6Sockaddr + 2);
          *(_OWORD *)((char *)&out->m_realAddress.m_address.inUn.m_ipv6Sockaddr + 72) = *(_OWORD *)((char *)&v6->m_realAddress.m_address.inUn.m_ipv6Sockaddr + 72);
          *(_OWORD *)((char *)&out->m_realAddress.m_address.inUn.m_ipv6Sockaddr + 88) = *(_OWORD *)((char *)&v6->m_realAddress.m_address.inUn.m_ipv6Sockaddr + 88);
          *(_OWORD *)((char *)&out->m_realAddress.m_address.inUn.m_ipv6Sockaddr + 104) = *(_OWORD *)((char *)&v6->m_realAddress.m_address.inUn.m_ipv6Sockaddr + 104);
          *(_OWORD *)((char *)&out->m_realAddress.m_address.inUn.m_ipv6Sockaddr + 120) = *(_OWORD *)((char *)&v6->m_realAddress.m_address.inUn.m_ipv6Sockaddr + 120);
          *(_OWORD *)&out->m_realAddress.m_relayRoute.m_relayRoutingID = *(_OWORD *)&v6->m_realAddress.m_relayRoute.m_relayRoutingID;
          out->m_timestamp = v6->m_timestamp;
          v4 = 1;
        }
      }
    }
    ++v6;
  }
  while ( !v4 );
  bdMutex::unlock(&bdNATTravClient::m_cacheLock);
  return v4;
}

/*
==============
bdNATTravClient::getCachedTraversalAge
==============
*/
__int64 bdNATTravClient::getCachedTraversalAge(bdReference<bdCommonAddr> remote)
{
  unsigned int v2; 
  unsigned __int64 HiResTimeStamp; 
  double ElapsedTime; 
  bdNATTravClient::bdCachedTraversal out; 

  out.m_remoteAddressHash = 0;
  bdAddr::bdAddr(&out.m_realAddress);
  out.m_timestamp = 0i64;
  v2 = 0;
  if ( bdNATTravClient::getCacheEntry(HIDWORD(remote.m_ptr->__vftable[117].~bdReferencable), &out) )
  {
    HiResTimeStamp = bdPlatformTiming::getHiResTimeStamp();
    ElapsedTime = bdPlatformTiming::getElapsedTime(out.m_timestamp, HiResTimeStamp);
    v2 = (int)(float)(*(float *)&ElapsedTime * 1000.0);
    if ( !v2 )
      v2 = 1;
  }
  if ( remote.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&remote.m_ptr->__vftable[1], 0xFFFFFFFF) == 1 )
  {
    if ( remote.m_ptr->__vftable )
      (*(void (__fastcall **)(bdCommonAddr_vtbl *, __int64))remote.m_ptr->~bdReferencable)(remote.m_ptr->__vftable, 1i64);
    remote.m_ptr->__vftable = NULL;
  }
  return v2;
}

/*
==============
bdNATTravClient::getFromCache
==============
*/
bool bdNATTravClient::getFromCache(unsigned int remoteAddressHash, bdAddr *outAddr)
{
  bool result; 
  __m256i v5; 
  __m256i v6; 
  __m256i v7; 
  bdRelayRoute m_relayRoute; 
  double v9; 
  bdNATTravClient::bdCachedTraversal out; 

  out.m_remoteAddressHash = 0;
  bdAddr::bdAddr(&out.m_realAddress);
  out.m_timestamp = 0i64;
  result = bdNATTravClient::getCacheEntry(remoteAddressHash, &out);
  if ( result )
  {
    v5 = *((__m256i *)&out.m_realAddress.m_address.inUn.m_ipv6Sockaddr + 1);
    *(__m256i *)&outAddr->m_address.inUn.m_sockaddrStorage.ss_family = *(__m256i *)&out.m_realAddress.m_address.inUn.m_sockaddrStorage.ss_family;
    v6 = *((__m256i *)&out.m_realAddress.m_address.inUn.m_ipv6Sockaddr + 2);
    *((__m256i *)&outAddr->m_address.inUn.m_ipv6Sockaddr + 1) = v5;
    v7 = *((__m256i *)&out.m_realAddress.m_address.inUn.m_ipv6Sockaddr + 3);
    *((__m256i *)&outAddr->m_address.inUn.m_ipv6Sockaddr + 2) = v6;
    m_relayRoute = out.m_realAddress.m_relayRoute;
    *((__m256i *)&outAddr->m_address.inUn.m_ipv6Sockaddr + 3) = v7;
    v9 = *(double *)&out.m_realAddress.m_type;
    outAddr->m_relayRoute = m_relayRoute;
    *(double *)&outAddr->m_type = v9;
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
  double ElapsedTime; 
  float v5; 
  float v6; 

  m_timestamp = entry->m_timestamp;
  if ( !m_timestamp )
    return 0;
  if ( !bdNATTravClient::m_cacheTimeoutMilliseconds )
    return 1;
  ElapsedTime = bdPlatformTiming::getElapsedTime(m_timestamp, now);
  v5 = (float)(__int64)bdNATTravClient::m_cacheTimeoutMilliseconds;
  if ( (bdNATTravClient::m_cacheTimeoutMilliseconds & 0x8000000000000000ui64) != 0i64 )
  {
    v6 = (float)(__int64)bdNATTravClient::m_cacheTimeoutMilliseconds;
    v5 = v6 + 1.8446744e19;
  }
  return (float)(*(float *)&ElapsedTime * 1000.0) <= v5;
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
  void *v3; 
  unsigned int v6; 
  unsigned int m_capacity; 
  bdHashMap<unsigned int,bdNATTravClientData,bdHashingClass>::Node **m_map; 
  bdHashMap<unsigned int,bdNATTravClientData,bdHashingClass>::Node *v9; 
  const unsigned int *p_m_key; 
  double v11; 
  double ElapsedTimeInSeconds; 
  const bdAddr *PublicAddr; 
  bdAddrString *v14; 
  const char *String; 
  const bdAddr *v16; 
  bdCommonAddr *m_ptr; 
  bdLinkedList<unsigned int>::Node *v18; 
  bdLinkedList<unsigned int>::Node *v19; 
  bdLinkedList<unsigned int>::Node *m_tail; 
  bdLinkedList<unsigned int>::Node *m_next; 
  double v22; 
  double v23; 
  bdCommonAddr *v24; 
  bdNATType NATType; 
  const bdAddr *v26; 
  bdCommonAddr *v27; 
  bdCommonAddr *v28; 
  bdCommonAddr *v29; 
  bdCommonAddr *v30; 
  bdAddr *v31; 
  bdCommonAddr *v32; 
  bdCommonAddr *v33; 
  const bdAddr *v34; 
  bdCommonAddr *v35; 
  bdCommonAddr *v36; 
  unsigned int v37; 
  __int64 v38; 
  bool v39; 
  bdLinkedList<unsigned int>::Node *m_head; 
  bdHashMap<unsigned int,bdNATTravClientData,bdHashingClass>::Node **v41; 
  bdHashMap<unsigned int,bdNATTravClientData,bdHashingClass>::Node *v42; 
  bdHashMap<unsigned int,bdNATTravClientData,bdHashingClass>::Node *v43; 
  bdHashMap<unsigned int,bdNATTravClientData,bdHashingClass>::Node *v44; 
  bdLinkedList<unsigned int>::Node *v45; 
  bdLinkedList<unsigned int>::Node *v46; 
  bdQueue<unsigned int> v47; 
  bdReference<bdCommonAddr> remote; 
  bdReference<bdCommonAddr> addr; 
  bdReference<bdCommonAddr> v50; 
  bdReference<bdCommonAddr> v51; 
  bdReference<bdCommonAddr> v52; 
  bdReference<bdCommonAddr> v53; 
  bdReference<bdCommonAddr> v54; 
  bdReference<bdCommonAddr> v55; 
  bdReference<bdCommonAddr> v56; 
  bdReference<bdCommonAddr> v57; 
  __int64 v58; 
  bdAddrString v59; 
  bdAddr v60; 
  bdAddr v61; 
  bdAddr v62; 
  char buf[1024]; 
  char format[1024]; 
  char v65[1024]; 
  char v66[1024]; 
  char v67[1024]; 
  char v68[1024]; 
  char v69[1024]; 

  v3 = alloca(v1);
  v58 = -2i64;
  if ( this->m_status == BD_NAT_TRAV_UNINITIALIZED )
    goto LABEL_81;
  *(double *)&_XMM0 = bdGlobalStopwatch::getElapsedTimeInSeconds(&this->m_keepAliveTimer);
  if ( *(float *)&_XMM0 > 15.0 )
    bdNATTravClient::sendKeepAlive(this);
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&v47.m_list.m_head = _XMM0;
  v47.m_list.m_size = 0;
  if ( !this->m_callbacks.m_size )
    goto LABEL_79;
  v6 = 0;
  m_capacity = this->m_callbacks.m_capacity;
  if ( m_capacity )
  {
    do
    {
      if ( this->m_callbacks.m_map[v6] )
        break;
      ++v6;
    }
    while ( v6 < m_capacity );
  }
  m_map = this->m_callbacks.m_map;
  if ( m_map[v6] )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)&this->m_callbacks.m_numIterators, 1u);
    m_map = this->m_callbacks.m_map;
  }
  v9 = m_map[v6];
  if ( !v9 )
    goto LABEL_79;
  while ( 1 )
  {
    do
    {
      p_m_key = &v9->m_key;
      if ( v9->m_data.m_throttled && (v11 = bdStopwatch::getElapsedTimeInSeconds(&v9->m_data.m_age), *(float *)&v11 > 20.0) )
      {
        ElapsedTimeInSeconds = bdStopwatch::getElapsedTimeInSeconds(&v9->m_data.m_age);
        PublicAddr = bdCommonAddr::getPublicAddr(v9->m_data.m_remote.m_ptr);
        bdAddrString::bdAddrString(&v59, PublicAddr);
        String = bdAddrString::getString(v14);
        bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdnattravclient.cpp", "bdNATTravClient::pump", 0x18Fu, "Request to %s has been pending for too long (%f seconds). Allocated bandwidth inconsistent with request rate.", String, *(float *)&ElapsedTimeInSeconds);
        bdAddr::bdAddr(&v60);
        bdNATTravTelemetry::setResult(&v9->m_data.m_telemetry, BD_FAILURE, &v9->m_data, v16);
        bdTelemetry::addNatTrav(&v9->m_data.m_telemetry);
        m_ptr = v9->m_data.m_remote.m_ptr;
        remote.m_ptr = m_ptr;
        if ( m_ptr )
          _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
        bdNATTravClientData::callOnNATAddrDiscoveryFailed(&v9->m_data, (bdReference<bdCommonAddr>)&remote);
        v18 = (bdLinkedList<unsigned int>::Node *)bdMemory::allocate(0x18ui64);
        v19 = v18;
        if ( v18 )
          v18->m_data = *p_m_key;
        else
          v19 = NULL;
        m_tail = v47.m_list.m_tail;
        if ( v47.m_list.m_tail )
        {
          v19->m_next = v47.m_list.m_tail->m_next;
          v19->m_prev = m_tail;
          m_next = m_tail->m_next;
          if ( m_next )
          {
            m_next->m_prev = v19;
          }
          else
          {
            bdHandleAssert(1, "node == m_tail", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdlinkedlist.inl", "bdLinkedList<unsigned int>::insertAfter", 0x176u, "bdLinkedList::insertAfter, node has no next entry, but is not the tail.");
            v47.m_list.m_tail = v19;
          }
          m_tail->m_next = v19;
          ++v47.m_list.m_size;
        }
        else
        {
          v19->m_next = NULL;
          v19->m_prev = NULL;
          v47.m_list.m_head = v19;
          v47.m_list.m_tail = v19;
          ++v47.m_list.m_size;
        }
      }
      else
      {
        v22 = bdStopwatch::getElapsedTimeInSeconds(&v9->m_data.m_lastSent);
        if ( *(float *)&v22 <= this->m_natTravTimeout )
          goto LABEL_62;
        v23 = bdStopwatch::getElapsedTimeInSeconds(&v9->m_data.m_lastSent);
        bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdnattravclient.cpp", "bdNATTravClient::pump", 0x199u, "%f seconds since last send, retrying..", *(float *)&v23);
        switch ( v9->m_data.m_state )
        {
          case BD_NTCDS_STAGE_1:
            if ( v9->m_data.m_tries[1] < this->m_maxTriesPerStage[1] )
            {
              bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdnattravclient.cpp", "bdNATTravClient::pump", 0x1BFu, "Request timed out. Retrying. (stage 1)");
              v36 = v9->m_data.m_remote.m_ptr;
              v57.m_ptr = v36;
              if ( v36 )
                _InterlockedExchangeAdd((volatile signed __int32 *)&v36->m_refCount, 1u);
              bdCommonAddrInfo::getBriefInfo((const bdReference<bdCommonAddr>)&v57, v69, 0x400u);
              bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdnattravclient.cpp", "bdNATTravClient::pump", 0x1C2u, v69);
              goto LABEL_61;
            }
            v31 = (bdAddr *)bdCommonAddr::getPublicAddr(v9->m_data.m_remote.m_ptr);
            if ( bdSockAddr::isValid(&v31->m_address) && this->m_introducers.m_size )
            {
              bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdnattravclient.cpp", "bdNATTravClient::pump", 0x1A5u, "Stage 1 failed. Starting stage 2.");
              v32 = v9->m_data.m_remote.m_ptr;
              v54.m_ptr = v32;
              if ( v32 )
                _InterlockedExchangeAdd((volatile signed __int32 *)&v32->m_refCount, 1u);
              bdCommonAddrInfo::getBriefInfo((const bdReference<bdCommonAddr>)&v54, v67, 0x400u);
              bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdnattravclient.cpp", "bdNATTravClient::pump", 0x1A8u, v67);
              v9->m_data.m_state = BD_NTCDS_STAGE_2;
              bdNATTravClient::sendStage2(this, &v9->m_data);
            }
            else
            {
              bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdnattravclient.cpp", "bdNATTravClient::pump", 0x1B1u, "Address lookup failed. (Stage 1 failed. No public address so finished.)");
              v33 = v9->m_data.m_remote.m_ptr;
              v55.m_ptr = v33;
              if ( v33 )
                _InterlockedExchangeAdd((volatile signed __int32 *)&v33->m_refCount, 1u);
              bdCommonAddrInfo::getBriefInfo((const bdReference<bdCommonAddr>)&v55, v68, 0x400u);
              bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdnattravclient.cpp", "bdNATTravClient::pump", 0x1B4u, v68);
              bdAddr::bdAddr(&v62);
              bdNATTravTelemetry::setResult(&v9->m_data.m_telemetry, (bdNATTravTelemetry::bdNATTravResultType)4, &v9->m_data, v34);
              bdTelemetry::addNatTrav(&v9->m_data.m_telemetry);
              v35 = v9->m_data.m_remote.m_ptr;
              v56.m_ptr = v35;
              if ( v35 )
                _InterlockedExchangeAdd((volatile signed __int32 *)&v35->m_refCount, 1u);
              bdNATTravClientData::callOnNATAddrDiscoveryFailed(&v9->m_data, (bdReference<bdCommonAddr>)&v56);
              bdQueue<unsigned int>::enqueue(&v47, &v9->m_key);
            }
            break;
          case BD_NTCDS_STAGE_2:
            if ( v9->m_data.m_tries[2] >= this->m_maxTriesPerStage[2] )
            {
              bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdnattravclient.cpp", "bdNATTravClient::pump", 0x1CCu, "Stage 2 failed. Starting stage 3.");
              v29 = v9->m_data.m_remote.m_ptr;
              v52.m_ptr = v29;
              if ( v29 )
                _InterlockedExchangeAdd((volatile signed __int32 *)&v29->m_refCount, 1u);
              bdCommonAddrInfo::getBriefInfo((const bdReference<bdCommonAddr>)&v52, v65, 0x400u);
              bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdnattravclient.cpp", "bdNATTravClient::pump", 0x1CFu, v65);
              v9->m_data.m_state = BD_NTCDS_STAGE_3;
              ++v9->m_data.m_tries[3];
              goto LABEL_61;
            }
            bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdnattravclient.cpp", "bdNATTravClient::pump", 0x1D7u, "Request timed out. Retrying. (stage 2)");
            v30 = v9->m_data.m_remote.m_ptr;
            v53.m_ptr = v30;
            if ( v30 )
              _InterlockedExchangeAdd((volatile signed __int32 *)&v30->m_refCount, 1u);
            bdCommonAddrInfo::getBriefInfo((const bdReference<bdCommonAddr>)&v53, v66, 0x400u);
            bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdnattravclient.cpp", "bdNATTravClient::pump", 0x1DAu, v66);
            bdNATTravClient::sendStage2(this, &v9->m_data);
            break;
          case BD_NTCDS_STAGE_3:
            if ( v9->m_data.m_tries[3] < this->m_maxTriesPerStage[3] )
            {
              bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdnattravclient.cpp", "bdNATTravClient::pump", 0x1FAu, "Request timed out. Retrying. (stage 3)");
              v28 = v9->m_data.m_remote.m_ptr;
              v51.m_ptr = v28;
              if ( v28 )
                _InterlockedExchangeAdd((volatile signed __int32 *)&v28->m_refCount, 1u);
              bdCommonAddrInfo::getBriefInfo((const bdReference<bdCommonAddr>)&v51, format, 0x400u);
              bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdnattravclient.cpp", "bdNATTravClient::pump", 0x1FDu, format);
              ++v9->m_data.m_tries[3];
LABEL_61:
              bdNATTravClient::sendStage1(this, &v9->m_data);
              break;
            }
            bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdnattravclient.cpp", "bdNATTravClient::pump", 0x1E6u, "NAT traversal failed. (Stage 3 failed)");
            v24 = v9->m_data.m_remote.m_ptr;
            addr.m_ptr = v24;
            if ( v24 )
              _InterlockedExchangeAdd((volatile signed __int32 *)&v24->m_refCount, 1u);
            bdCommonAddrInfo::getBriefInfo((const bdReference<bdCommonAddr>)&addr, buf, 0x400u);
            bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdnattravclient.cpp", "bdNATTravClient::pump", 0x1E9u, buf);
            NATType = bdCommonAddr::getNATType(v9->m_data.m_remote.m_ptr);
            if ( (unsigned int)NATType <= BD_NAT_STRICT )
              ++this->m_traversalFailureCount[NATType];
            bdAddr::bdAddr(&v61);
            bdNATTravTelemetry::setResult(&v9->m_data.m_telemetry, BD_FAILURE, &v9->m_data, v26);
            bdTelemetry::addNatTrav(&v9->m_data.m_telemetry);
            v27 = v9->m_data.m_remote.m_ptr;
            v50.m_ptr = v27;
            if ( v27 )
              _InterlockedExchangeAdd((volatile signed __int32 *)&v27->m_refCount, 1u);
            bdNATTravClientData::callOnNATAddrDiscoveryFailed(&v9->m_data, (bdReference<bdCommonAddr>)&v50);
            bdQueue<unsigned int>::enqueue(&v47, &v9->m_key);
            break;
          default:
            bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdnattravclient.cpp", "bdNATTravClient::pump", 0x205u, "Invalid state.");
            break;
        }
      }
LABEL_62:
      v9 = v9->m_next;
    }
    while ( v9 );
    v37 = this->m_callbacks.m_capacity;
    v38 = ((*((unsigned __int8 *)p_m_key + 3) ^ (16777619 * (*((unsigned __int8 *)p_m_key + 2) ^ (16777619 * ((16777619 * *(unsigned __int8 *)p_m_key) ^ *((unsigned __int8 *)p_m_key + 1)))))) & (v37 - 1)) + 1;
    if ( (unsigned int)v38 >= v37 )
      break;
    while ( 1 )
    {
      v9 = this->m_callbacks.m_map[v38];
      if ( v9 )
        break;
      v38 = (unsigned int)(v38 + 1);
      if ( (unsigned int)v38 >= v37 )
        goto LABEL_66;
    }
  }
LABEL_66:
  _InterlockedExchangeAdd((volatile signed __int32 *)&this->m_callbacks.m_numIterators, 0xFFFFFFFF);
  for ( ; v47.m_list.m_size; --v47.m_list.m_size )
  {
    v39 = v47.m_list.m_size != 0;
    bdHandleAssert(v47.m_list.m_size != 0, "getSize() > 0", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdqueue.inl", "bdQueue<unsigned int>::peek", 0x19u, "bdQueue::dequeue, queue empty, can't peek.");
    bdHandleAssert(v47.m_list.m_head != NULL, "m_head != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdlinkedlist.inl", "bdLinkedList<unsigned int>::getHead", 0x42u, "bdLinkedList::GetHead, list is empty so has no head.");
    bdHandleAssert(this->m_callbacks.m_numIterators.m_value._My_val == 0, "(m_numIterators == 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdhashmap.inl", "bdHashMap<unsigned int,class bdNATTravClientData,class bdHashingClass>::remove", 0xA5u, "bdHashMap::remove, another iterator is being held while removing from hashmap");
    m_head = v47.m_list.m_head;
    v41 = this->m_callbacks.m_map;
    v42 = v41[(HIBYTE(v47.m_list.m_head->m_data) ^ (16777619 * (BYTE2(v47.m_list.m_head->m_data) ^ (16777619 * (BYTE1(v47.m_list.m_head->m_data) ^ (16777619 * LOBYTE(v47.m_list.m_head->m_data))))))) & (this->m_callbacks.m_capacity - 1)];
    v43 = NULL;
    if ( v42 )
    {
      while ( v47.m_list.m_head->m_data != v42->m_key )
      {
        v43 = v42;
        v42 = v42->m_next;
        if ( !v42 )
          goto LABEL_75;
      }
      v44 = v42->m_next;
      if ( v43 )
        v43->m_next = v44;
      else
        v41[(HIBYTE(v47.m_list.m_head->m_data) ^ (16777619 * (BYTE2(v47.m_list.m_head->m_data) ^ (16777619 * (BYTE1(v47.m_list.m_head->m_data) ^ (16777619 * LOBYTE(v47.m_list.m_head->m_data))))))) & (this->m_callbacks.m_capacity - 1)] = v44;
      bdNATTravClientData::~bdNATTravClientData(&v42->m_data);
      bdMemory::deallocate(v42);
      --this->m_callbacks.m_size;
    }
LABEL_75:
    bdHandleAssert(v39, "getSize() > 0", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdqueue.inl", "bdQueue<unsigned int>::dequeue", 0x12u, "bdQueue::dequeue, queue empty, can't dequeue.");
    v45 = m_head->m_next;
    v47.m_list.m_head = v45;
    if ( m_head == v47.m_list.m_tail )
      v47.m_list.m_tail = m_head->m_prev;
    else
      v45->m_prev = m_head->m_prev;
    bdMemory::deallocate(m_head);
  }
LABEL_79:
  if ( v47.m_list.m_head )
  {
    do
    {
      v46 = v47.m_list.m_head->m_next;
      bdMemory::deallocate(v47.m_list.m_head);
      v47.m_list.m_head = v46;
    }
    while ( v46 );
  }
LABEL_81:
  if ( !this->m_callbacks.m_size )
    this->m_status = BD_NAT_TRAV_INITIALIZED;
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
  bdHashMap<unsigned int,bdNATTravClientData,bdHashingClass>::Node *Iterator; 
  bdCommonAddr *m_ptr; 
  bdCommonAddr *v7; 
  bdNATTravTelemetry *v8; 
  __int64 v9; 
  bdCommonAddr *v10; 
  bdCommonAddr *v11; 
  const bdAddr *v12; 
  unsigned int m_capacity; 
  __int64 v14; 
  bdReference<bdCommonAddr> addr; 
  __int64 v16; 
  bdNATTravTelemetry *p_m_telemetry; 
  bdAddr v18; 
  bdNATTravClientData data; 
  char buf[1024]; 

  v16 = -2i64;
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
    Iterator = (bdHashMap<unsigned int,bdNATTravClientData,bdHashingClass>::Node *)bdHashMap<unsigned int,bdNATTravClientData,bdHashingClass>::getIterator(&this->m_callbacks);
    if ( Iterator )
    {
      p_m_telemetry = &data.m_telemetry;
      do
      {
        data.m_state = Iterator->m_data.m_state;
        m_ptr = Iterator->m_data.m_local.m_ptr;
        data.m_local.m_ptr = m_ptr;
        if ( m_ptr )
          _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
        v7 = Iterator->m_data.m_remote.m_ptr;
        data.m_remote.m_ptr = v7;
        if ( v7 )
          _InterlockedExchangeAdd((volatile signed __int32 *)&v7->m_refCount, 1u);
        data.m_listener = Iterator->m_data.m_listener;
        data.m_secondaryListener = Iterator->m_data.m_secondaryListener;
        *(_OWORD *)data.m_tries = *(_OWORD *)Iterator->m_data.m_tries;
        data.m_lastSent.m_start = Iterator->m_data.m_lastSent.m_start;
        data.m_throttled = Iterator->m_data.m_throttled;
        data.m_age.m_start = Iterator->m_data.m_age.m_start;
        v8 = &data.m_telemetry;
        v9 = 32i64;
        do
        {
          bdNATTravTelemetry::bdNATTravEvent::bdNATTravEvent(v8->m_attemptRecords, (const bdNATTravTelemetry::bdNATTravEvent *)((char *)v8->m_attemptRecords + (char *)Iterator - (char *)&data));
          v8 = (bdNATTravTelemetry *)((char *)v8 + 320);
          --v9;
        }
        while ( v9 );
        data.m_telemetry.m_attemptRecordsCount = Iterator->m_data.m_telemetry.m_attemptRecordsCount;
        data.m_telemetry.m_age.m_start = Iterator->m_data.m_telemetry.m_age.m_start;
        v10 = Iterator->m_data.m_telemetry.m_localCommonAddr.m_ptr;
        data.m_telemetry.m_localCommonAddr.m_ptr = v10;
        if ( v10 )
          _InterlockedExchangeAdd((volatile signed __int32 *)&v10->m_refCount, 1u);
        v11 = Iterator->m_data.m_telemetry.m_remoteCommonAddr.m_ptr;
        data.m_telemetry.m_remoteCommonAddr.m_ptr = v11;
        if ( v11 )
          _InterlockedExchangeAdd((volatile signed __int32 *)&v11->m_refCount, 1u);
        bdAddr::bdAddr(&data.m_telemetry.m_realAddr, &Iterator->m_data.m_telemetry.m_realAddr);
        bdAddr::bdAddr(&data.m_telemetry.m_stunAddr, &Iterator->m_data.m_telemetry.m_stunAddr);
        data.m_telemetry.m_result = Iterator->m_data.m_telemetry.m_result;
        data.m_telemetry.m_triesStage1 = Iterator->m_data.m_telemetry.m_triesStage1;
        data.m_telemetry.m_triesStage2 = Iterator->m_data.m_telemetry.m_triesStage2;
        data.m_telemetry.m_triesStage3 = Iterator->m_data.m_telemetry.m_triesStage3;
        data.m_telemetry.m_throttled = Iterator->m_data.m_telemetry.m_throttled;
        data.m_telemetry.m_duration = Iterator->m_data.m_telemetry.m_duration;
        addr.m_ptr = data.m_remote.m_ptr;
        if ( data.m_remote.m_ptr )
          _InterlockedExchangeAdd((volatile signed __int32 *)&data.m_remote.m_ptr->m_refCount, 1u);
        bdCommonAddrInfo::getBriefInfo((const bdReference<bdCommonAddr>)&addr, buf, 0x400u);
        bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdnattravclient.cpp", "bdNATTravClient::quit", 0x234u, "NAT traversal to %s failed.", buf);
        bdAddr::bdAddr(&v18);
        bdNATTravTelemetry::setResult(&data.m_telemetry, BD_FAILURE|BD_SUCCESS, &data, v12);
        bdTelemetry::addNatTrav(&data.m_telemetry);
        if ( Iterator->m_next )
        {
          Iterator = Iterator->m_next;
        }
        else
        {
          m_capacity = this->m_callbacks.m_capacity;
          v14 = ((HIBYTE(Iterator->m_key) ^ (16777619 * (BYTE2(Iterator->m_key) ^ (16777619 * (BYTE1(Iterator->m_key) ^ (16777619 * LOBYTE(Iterator->m_key))))))) & (m_capacity - 1)) + 1;
          if ( (unsigned int)v14 >= m_capacity )
          {
LABEL_23:
            Iterator = NULL;
            _InterlockedExchangeAdd((volatile signed __int32 *)&this->m_callbacks.m_numIterators, 0xFFFFFFFF);
          }
          else
          {
            while ( 1 )
            {
              Iterator = this->m_callbacks.m_map[v14];
              if ( Iterator )
                break;
              v14 = (unsigned int)(v14 + 1);
              if ( (unsigned int)v14 >= m_capacity )
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
      while ( Iterator );
      p_m_callbacks = &this->m_callbacks;
    }
    bdHashMap<unsigned int,bdNATTravClientData,bdHashingClass>::releaseIterator(p_m_callbacks, Iterator);
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
  void *v4; 
  unsigned __int8 Type; 
  unsigned int m_hash; 
  const char *v10; 
  bdLogMessageType v11; 
  int v12; 
  bdAddrString *v13; 
  bdAddrString *v14; 
  bdAddrString *v15; 
  const bdAddr *AddrDest; 
  const bdAddr *v17; 
  const unsigned __int8 *HMAC; 
  bdAddrString *v19; 
  const char *v20; 
  const bdAddr *v21; 
  bdAddrString *v22; 
  const char *v23; 
  double ElapsedTimeInSeconds; 
  float v25; 
  float v26; 
  unsigned __int64 v27; 
  unsigned __int64 v28; 
  bdNATType NATType; 
  const bdAddr *PublicAddr; 
  unsigned int v31; 
  unsigned __int64 HiResTimeStamp; 
  bdNATTravClient::bdCachedTraversal *v33; 
  bdNATTravClient::bdCachedTraversal *v34; 
  bdNATTravClient::bdCachedTraversal *v35; 
  unsigned __int64 v36; 
  unsigned __int64 m_timestamp; 
  double ElapsedTime; 
  float v39; 
  float v40; 
  float v41; 
  const bdAddr *AddrSrc; 
  int v43; 
  bdAddrString *v44; 
  bdAddrString *v45; 
  unsigned int line; 
  unsigned int linea; 
  unsigned int lineb; 
  char *format; 
  char *formata; 
  const char *String; 
  const char *v52; 
  int v53; 
  __int64 v54; 
  unsigned int newOffset; 
  unsigned int key; 
  bdReference<bdCommonAddr> remote; 
  __int64 v58; 
  bdMutex *v59; 
  bdAddrString v60; 
  bdAddrString v61; 
  bdAddrString v62; 
  bdAddrString v63; 
  bdAddrString v64; 
  bdAddrString v65; 
  bdAddrString v66; 
  bdNATTravClientData value; 
  unsigned __int8 v68[8]; 
  __int16 v69; 
  char data[1296]; 

  v4 = alloca(v3);
  v58 = -2i64;
  Type = bdNATTraversalPacket::getType(packet);
  if ( Type == 10 )
  {
    format = "Received server packet in client code.";
    line = 239;
    v10 = "warn/";
    v11 = BD_LOG_WARNING;
    goto LABEL_53;
  }
  if ( Type == 11 )
  {
    AddrSrc = bdNATTraversalPacket::getAddrSrc(packet);
    bdNATTraversalPacket::setType(packet, 0xCu);
    if ( !bdNATTraversalPacket::serialize(packet, data, 0x508u, 0, &newOffset) )
    {
      format = "Cannot serialize the packet.";
      line = 251;
      v10 = (const char *)&other;
      v11 = BD_LOG_ERROR;
      goto LABEL_53;
    }
    v43 = this->m_socket->sendTo(this->m_socket, AddrSrc, data, newOffset);
    if ( v43 > 0 )
    {
      bdAddrString::bdAddrString(&v65, AddrSrc);
      String = bdAddrString::getString(v44);
      formata = "sent INTRO REPLY to %s";
      linea = 261;
      goto LABEL_13;
    }
    bdAddrString::bdAddrString(&v66, AddrSrc);
    v53 = v43;
    v52 = bdAddrString::getString(v45);
    lineb = 265;
    goto LABEL_11;
  }
  if ( Type != 12 )
  {
    if ( Type != 13 )
      return;
    m_hash = this->m_localCommonAddr.m_ptr->m_hash;
    if ( bdNATTraversalPacket::getIdentifier(packet) != m_hash )
    {
      bdAddrString::bdAddrString(&v62, addr);
      String = bdAddrString::getString(v15);
      formata = "ignored request from %s";
      linea = 368;
      goto LABEL_13;
    }
    bdNATTraversalPacket::setType(packet, 0xCu);
    if ( !bdNATTraversalPacket::serialize(packet, data, 0x508u, 0, &newOffset) )
    {
      format = "Cannot serialze the packet.";
      line = 347;
      v10 = (const char *)&other;
      v11 = BD_LOG_ERROR;
LABEL_53:
      bdLogMessage(v11, v10, "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdnattravclient.cpp", "bdNATTravClient::receiveFrom", line, format);
      return;
    }
    v12 = this->m_socket->sendTo(this->m_socket, addr, data, newOffset);
    if ( v12 > 0 )
    {
      bdAddrString::bdAddrString(&v60, addr);
      String = bdAddrString::getString(v13);
      formata = "sent INTRO REPLY to %s";
      linea = 355;
LABEL_13:
      bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdnattravclient.cpp", "bdNATTravClient::receiveFrom", linea, formata, String);
      return;
    }
    bdAddrString::bdAddrString(&v61, addr);
    v53 = v12;
    v52 = bdAddrString::getString(v14);
    lineb = 359;
LABEL_11:
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdnattravclient.cpp", "bdNATTravClient::receiveFrom", lineb, "Failed to send INTRO REPLY to %s. Socket error %i", v52, v53);
    return;
  }
  bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdnattravclient.cpp", "bdNATTravClient::receiveFrom", 0x110u, "Received NAT Trav reply.");
  key = bdNATTraversalPacket::getIdentifier(packet);
  AddrDest = bdNATTraversalPacket::getAddrDest(packet);
  v17 = bdNATTraversalPacket::getAddrSrc(packet);
  if ( bdNATTravClient::doHMac(this, key, v17, AddrDest, v68) && (HMAC = bdNATTraversalPacket::getHMAC(packet), *(_QWORD *)v68 == *(_QWORD *)HMAC) && v69 == *((_WORD *)HMAC + 4) )
  {
    bdAddrString::bdAddrString(&v63, addr);
    v20 = bdAddrString::getString(v19);
    v21 = bdNATTraversalPacket::getAddrDest(packet);
    bdAddrString::bdAddrString(&v64, v21);
    v23 = bdAddrString::getString(v22);
    bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdnattravclient.cpp", "bdNATTravClient::receiveFrom", 0x11Cu, "discovered addr for %s: %s", v23, v20);
    bdNATTravClientData::bdNATTravClientData(&value);
    if ( bdHashMap<unsigned int,bdNATTravClientData,bdHashingClass>::remove(&this->m_callbacks, &key, &value) )
    {
      ElapsedTimeInSeconds = bdStopwatch::getElapsedTimeInSeconds(&value.m_age);
      v26 = *(float *)&ElapsedTimeInSeconds * 1000.0;
      v25 = *(float *)&ElapsedTimeInSeconds * 1000.0;
      v27 = 0i64;
      if ( (float)(*(float *)&ElapsedTimeInSeconds * 1000.0) >= 9.223372e18 )
      {
        v25 = v26 - 9.223372e18;
        if ( (float)(v26 - 9.223372e18) < 9.223372e18 )
          v27 = 0x8000000000000000ui64;
      }
      v28 = v27 + (unsigned int)(int)v25;
      NATType = bdCommonAddr::getNATType(value.m_remote.m_ptr);
      if ( (unsigned int)NATType <= BD_NAT_STRICT )
      {
        ++this->m_traversalCount[NATType];
        this->m_traversalDurationAggr[NATType] += v28;
        this->m_traversalDurationAggrSq[NATType] += v28 * v28;
      }
      LODWORD(v54) = NATType;
      bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/nat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdnat\\bdnattravclient.cpp", "bdNATTravClient::receiveFrom", 0x12Cu, "NAT trav duration = %lld msecs (type %d)", v28, v54);
      PublicAddr = bdCommonAddr::getPublicAddr(this->m_localCommonAddr.m_ptr);
      bdNATTravTelemetry::addRecord(&value.m_telemetry, BD_RECV_INTRO_REPLY, addr, PublicAddr, 1);
      bdNATTravTelemetry::setResult(&value.m_telemetry, BD_SUCCESS, &value, addr);
      bdTelemetry::addNatTrav(&value.m_telemetry);
      remote.m_ptr = value.m_remote.m_ptr;
      if ( value.m_remote.m_ptr )
        _InterlockedExchangeAdd((volatile signed __int32 *)&value.m_remote.m_ptr->m_refCount, 1u);
      bdNATTravClientData::callOnNATAddrDiscovery(&value, (bdReference<bdCommonAddr>)&remote, addr);
      v31 = value.m_remote.m_ptr->m_hash;
      HiResTimeStamp = bdPlatformTiming::getHiResTimeStamp();
      v33 = NULL;
      v34 = NULL;
      v59 = &bdNATTravClient::m_cacheLock;
      bdMutex::lock(&bdNATTravClient::m_cacheLock);
      v35 = bdNATTravClient::m_cachedTraversals;
      v36 = bdNATTravClient::m_cacheTimeoutMilliseconds;
      do
      {
        if ( v35 >= (bdNATTravClient::bdCachedTraversal *)&unk_1564C7E60 )
          break;
        m_timestamp = v35->m_timestamp;
        if ( !m_timestamp )
          goto LABEL_35;
        if ( !v36 )
          goto LABEL_56;
        ElapsedTime = bdPlatformTiming::getElapsedTime(m_timestamp, HiResTimeStamp);
        v39 = *(float *)&ElapsedTime * 1000.0;
        v36 = bdNATTravClient::m_cacheTimeoutMilliseconds;
        v40 = (float)(__int64)bdNATTravClient::m_cacheTimeoutMilliseconds;
        if ( (bdNATTravClient::m_cacheTimeoutMilliseconds & 0x8000000000000000ui64) != 0i64 )
        {
          v41 = (float)(__int64)bdNATTravClient::m_cacheTimeoutMilliseconds;
          v40 = v41 + 1.8446744e19;
        }
        if ( v39 > v40 )
        {
LABEL_35:
          v33 = v35;
        }
        else
        {
LABEL_56:
          if ( !v34 || v35->m_timestamp < v34->m_timestamp )
            v34 = v35;
        }
        ++v35;
      }
      while ( !v33 );
      if ( !v33 )
        v33 = v34;
      if ( v33 )
      {
        v33->m_remoteAddressHash = v31;
        *(__m256i *)&v33->m_realAddress.m_address.inUn.m_sockaddrStorage.ss_family = *(__m256i *)&addr->m_address.inUn.m_sockaddrStorage.ss_family;
        *((__m256i *)&v33->m_realAddress.m_address.inUn.m_ipv6Sockaddr + 1) = *((__m256i *)&addr->m_address.inUn.m_ipv6Sockaddr + 1);
        *((__m256i *)&v33->m_realAddress.m_address.inUn.m_ipv6Sockaddr + 2) = *((__m256i *)&addr->m_address.inUn.m_ipv6Sockaddr + 2);
        *((__m256i *)&v33->m_realAddress.m_address.inUn.m_ipv6Sockaddr + 3) = *((__m256i *)&addr->m_address.inUn.m_ipv6Sockaddr + 3);
        v33->m_realAddress.m_relayRoute = addr->m_relayRoute;
        *(double *)&v33->m_realAddress.m_type = *(double *)&addr->m_type;
        if ( !HiResTimeStamp )
          HiResTimeStamp = 1i64;
        v33->m_timestamp = HiResTimeStamp;
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
  bdNATTravClient::bdCachedTraversal *v5; 
  bdNATTravClient::bdCachedTraversal *v6; 
  bdNATTravClient::bdCachedTraversal *v7; 
  unsigned __int64 v8; 
  unsigned __int64 m_timestamp; 
  double ElapsedTime; 
  float v11; 
  float v12; 
  float v13; 

  HiResTimeStamp = bdPlatformTiming::getHiResTimeStamp();
  v5 = NULL;
  v6 = NULL;
  bdMutex::lock(&bdNATTravClient::m_cacheLock);
  v7 = bdNATTravClient::m_cachedTraversals;
  v8 = bdNATTravClient::m_cacheTimeoutMilliseconds;
  do
  {
    if ( v7 >= (bdNATTravClient::bdCachedTraversal *)&unk_1564C7E60 )
      break;
    m_timestamp = v7->m_timestamp;
    if ( !m_timestamp )
      goto LABEL_11;
    if ( !v8 )
      goto LABEL_22;
    ElapsedTime = bdPlatformTiming::getElapsedTime(m_timestamp, HiResTimeStamp);
    v11 = *(float *)&ElapsedTime * 1000.0;
    v8 = bdNATTravClient::m_cacheTimeoutMilliseconds;
    v12 = (float)(__int64)bdNATTravClient::m_cacheTimeoutMilliseconds;
    if ( (bdNATTravClient::m_cacheTimeoutMilliseconds & 0x8000000000000000ui64) != 0i64 )
    {
      v13 = (float)(__int64)bdNATTravClient::m_cacheTimeoutMilliseconds;
      v12 = v13 + 1.8446744e19;
    }
    if ( v11 > v12 )
    {
LABEL_11:
      v5 = v7;
    }
    else
    {
LABEL_22:
      if ( !v6 || v7->m_timestamp < v6->m_timestamp )
        v6 = v7;
    }
    ++v7;
  }
  while ( !v5 );
  if ( !v5 )
    v5 = v6;
  if ( v5 )
  {
    v5->m_remoteAddressHash = remoteAddressHash;
    *(__m256i *)&v5->m_realAddress.m_address.inUn.m_sockaddrStorage.ss_family = *(__m256i *)&realAddress->m_address.inUn.m_sockaddrStorage.ss_family;
    *((__m256i *)&v5->m_realAddress.m_address.inUn.m_ipv6Sockaddr + 1) = *((__m256i *)&realAddress->m_address.inUn.m_ipv6Sockaddr + 1);
    *((__m256i *)&v5->m_realAddress.m_address.inUn.m_ipv6Sockaddr + 2) = *((__m256i *)&realAddress->m_address.inUn.m_ipv6Sockaddr + 2);
    *((__m256i *)&v5->m_realAddress.m_address.inUn.m_ipv6Sockaddr + 3) = *((__m256i *)&realAddress->m_address.inUn.m_ipv6Sockaddr + 3);
    v5->m_realAddress.m_relayRoute = realAddress->m_relayRoute;
    *(double *)&v5->m_realAddress.m_type = *(double *)&realAddress->m_type;
    if ( !HiResTimeStamp )
      HiResTimeStamp = 1i64;
    v5->m_timestamp = HiResTimeStamp;
  }
  bdMutex::unlock(&bdNATTravClient::m_cacheLock);
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
void bdNATTravClient::setNATTravTimeout(bdNATTravClient *this, float NATTravTimeout)
{
  this->m_natTravTimeout = NATTravTimeout;
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
  bdHashMap<unsigned int,bdNATTravClientData,bdHashingClass>::Node *Iterator; 
  __int64 v6; 
  __int64 v7; 
  bdNATTravTelemetry *v8; 
  __int64 v9; 
  bdCommonAddr *v10; 
  bdCommonAddr *v11; 
  bdCommonAddr_vtbl *v12; 
  unsigned int m_capacity; 
  __int64 v14; 
  __int64 v17; 
  __int64 v18; 
  bdNATTravListener *m_listener; 
  bdNATTravListener *m_secondaryListener; 
  __int128 v21; 
  unsigned __int64 m_start; 
  bool m_throttled; 
  unsigned __int64 v24; 
  bdNATTravTelemetry v25; 

  m_ptr = newLocalCommonAddr.m_ptr;
  v4 = 0;
  if ( this->m_status )
  {
    if ( newLocalCommonAddr.m_ptr->__vftable )
    {
      Iterator = (bdHashMap<unsigned int,bdNATTravClientData,bdHashingClass>::Node *)bdHashMap<unsigned int,bdNATTravClientData,bdHashingClass>::getIterator(&this->m_callbacks);
      while ( Iterator )
      {
        v6 = (__int64)Iterator->m_data.m_local.m_ptr;
        v17 = v6;
        if ( v6 )
          _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 8), 1u);
        v7 = (__int64)Iterator->m_data.m_remote.m_ptr;
        v18 = v7;
        if ( v7 )
          _InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 8), 1u);
        m_listener = Iterator->m_data.m_listener;
        m_secondaryListener = Iterator->m_data.m_secondaryListener;
        v21 = *(_OWORD *)Iterator->m_data.m_tries;
        m_start = Iterator->m_data.m_lastSent.m_start;
        m_throttled = Iterator->m_data.m_throttled;
        v24 = Iterator->m_data.m_age.m_start;
        v8 = &v25;
        v9 = 32i64;
        do
        {
          bdNATTravTelemetry::bdNATTravEvent::bdNATTravEvent(v8->m_attemptRecords, (const bdNATTravTelemetry::bdNATTravEvent *)((char *)v8->m_attemptRecords + (char *)&Iterator->m_data.m_telemetry - (char *)&v25));
          v8 = (bdNATTravTelemetry *)((char *)v8 + 320);
          --v9;
        }
        while ( v9 );
        v25.m_attemptRecordsCount = Iterator->m_data.m_telemetry.m_attemptRecordsCount;
        v25.m_age.m_start = Iterator->m_data.m_telemetry.m_age.m_start;
        v10 = Iterator->m_data.m_telemetry.m_localCommonAddr.m_ptr;
        v25.m_localCommonAddr.m_ptr = v10;
        if ( v10 )
          _InterlockedExchangeAdd((volatile signed __int32 *)&v10->m_refCount, 1u);
        v11 = Iterator->m_data.m_telemetry.m_remoteCommonAddr.m_ptr;
        v25.m_remoteCommonAddr.m_ptr = v11;
        if ( v11 )
          _InterlockedExchangeAdd((volatile signed __int32 *)&v11->m_refCount, 1u);
        bdAddr::bdAddr(&v25.m_realAddr, &Iterator->m_data.m_telemetry.m_realAddr);
        bdAddr::bdAddr(&v25.m_stunAddr, &Iterator->m_data.m_telemetry.m_stunAddr);
        v25.m_result = Iterator->m_data.m_telemetry.m_result;
        v25.m_triesStage1 = Iterator->m_data.m_telemetry.m_triesStage1;
        v25.m_triesStage2 = Iterator->m_data.m_telemetry.m_triesStage2;
        v25.m_triesStage3 = Iterator->m_data.m_telemetry.m_triesStage3;
        v25.m_throttled = Iterator->m_data.m_telemetry.m_throttled;
        v25.m_duration = Iterator->m_data.m_telemetry.m_duration;
        m_ptr = newLocalCommonAddr.m_ptr;
        if ( (__int64 *)newLocalCommonAddr.m_ptr != &v17 )
        {
          if ( v17 && _InterlockedExchangeAdd((volatile signed __int32 *)(v17 + 8), 0xFFFFFFFF) == 1 && v17 )
            (**(void (__fastcall ***)(__int64, __int64))v17)(v17, 1i64);
          v12 = newLocalCommonAddr.m_ptr->__vftable;
          v17 = (__int64)v12;
          if ( v12 )
            _InterlockedExchangeAdd((volatile signed __int32 *)&v12[1], 1u);
        }
        if ( Iterator->m_next )
        {
          Iterator = Iterator->m_next;
        }
        else
        {
          m_capacity = this->m_callbacks.m_capacity;
          v14 = ((HIBYTE(Iterator->m_key) ^ (16777619 * (BYTE2(Iterator->m_key) ^ (16777619 * (BYTE1(Iterator->m_key) ^ (16777619 * LOBYTE(Iterator->m_key))))))) & (m_capacity - 1)) + 1;
          if ( (unsigned int)v14 >= m_capacity )
          {
LABEL_27:
            Iterator = NULL;
            _InterlockedExchangeAdd((volatile signed __int32 *)&this->m_callbacks.m_numIterators, 0xFFFFFFFF);
          }
          else
          {
            while ( 1 )
            {
              Iterator = this->m_callbacks.m_map[v14];
              if ( Iterator )
                break;
              v14 = (unsigned int)(v14 + 1);
              if ( (unsigned int)v14 >= m_capacity )
                goto LABEL_27;
            }
          }
        }
        bdNATTravTelemetry::~bdNATTravTelemetry(&v25);
        if ( v18 && _InterlockedExchangeAdd((volatile signed __int32 *)(v18 + 8), 0xFFFFFFFF) == 1 )
        {
          if ( v18 )
            (**(void (__fastcall ***)(__int64, __int64))v18)(v18, 1i64);
          v18 = 0i64;
        }
        if ( v17 && _InterlockedExchangeAdd((volatile signed __int32 *)(v17 + 8), 0xFFFFFFFF) == 1 && v17 )
          (**(void (__fastcall ***)(__int64, __int64))v17)(v17, 1i64);
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

