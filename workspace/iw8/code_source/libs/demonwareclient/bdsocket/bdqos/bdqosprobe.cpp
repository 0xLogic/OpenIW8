/*
==============
bdQoSProbe::disableListener
==============
*/

void __fastcall bdQoSProbe::disableListener(bdQoSProbe *this)
{
  ?disableListener@bdQoSProbe@@QEAAXXZ(this);
}

/*
==============
bdQoSProbe::init
==============
*/

bool __fastcall bdQoSProbe::init(bdQoSProbe *this, bdSocket *socket, bdNATTravClient *natTrav, bdServiceBandwidthArbitrator *bandArb, bdRoutingLayer *routingLayer)
{
  return ?init@bdQoSProbe@@QEAA_NPEAVbdSocket@@PEAVbdNATTravClient@@PEAVbdServiceBandwidthArbitrator@@PEAVbdRoutingLayer@@@Z(this, socket, natTrav, bandArb, routingLayer);
}

/*
==============
bdQoSProbe::isListening
==============
*/

bool __fastcall bdQoSProbe::isListening(bdQoSProbe *this)
{
  return ?isListening@bdQoSProbe@@QEBA_NXZ(this);
}

/*
==============
bdQoSProbe::enableListener
==============
*/

void __fastcall bdQoSProbe::enableListener(bdQoSProbe *this)
{
  ?enableListener@bdQoSProbe@@QEAAXXZ(this);
}

/*
==============
bdQoSProbe::shutdownListener
==============
*/

void __fastcall bdQoSProbe::shutdownListener(bdQoSProbe *this)
{
  ?shutdownListener@bdQoSProbe@@QEAAXXZ(this);
}

/*
==============
bdQoSProbe::singleProbeComplete
==============
*/

void __fastcall bdQoSProbe::singleProbeComplete(bdQoSProbe *this, bdQoSReplyPacket *packet, bdQoSProbe::bdQoSProbeEntryWrapper *entry, unsigned int packetSize)
{
  ?singleProbeComplete@bdQoSProbe@@AEAAXAEAVbdQoSReplyPacket@@AEAUbdQoSProbeEntryWrapper@1@I@Z(this, packet, entry, packetSize);
}

/*
==============
bdQoSProbe::registerSecId
==============
*/

void __fastcall bdQoSProbe::registerSecId(bdQoSProbe *this, const bdSecurityID *secid)
{
  ?registerSecId@bdQoSProbe@@QEAAXAEBVbdSecurityID@@@Z(this, secid);
}

/*
==============
bdQoSProbe::findHostStats
==============
*/

bool __fastcall bdQoSProbe::findHostStats(bdQoSProbe *this, const unsigned int *secID, unsigned int *index)
{
  return ?findHostStats@bdQoSProbe@@AEAA_NAEBIAEAI@Z(this, secID, index);
}

/*
==============
bdQoSProbe::sendRequest
==============
*/

void __fastcall bdQoSProbe::sendRequest(bdQoSProbe *this, bool *stopProcessing, bdQoSProbe::bdQoSProbeEntryWrapper *entry, unsigned int id)
{
  ?sendRequest@bdQoSProbe@@AEAAXAEA_NAEAUbdQoSProbeEntryWrapper@1@I@Z(this, stopProcessing, entry, id);
}

/*
==============
bdQoSProbe::bdQoSProbe
==============
*/

void __fastcall bdQoSProbe::bdQoSProbe(bdQoSProbe *this)
{
  ??0bdQoSProbe@@QEAA@XZ(this);
}

/*
==============
bdQoSProbe::getPacketSendSize
==============
*/

void __fastcall bdQoSProbe::getPacketSendSize(bdQoSProbe *this, unsigned int serializedSize, unsigned int *numPackets, unsigned int *totalSize)
{
  ?getPacketSendSize@bdQoSProbe@@AEAAXIAEAI0@Z(this, serializedSize, numPackets, totalSize);
}

/*
==============
bdQoSProbe::onRelayConnectionFailure
==============
*/

void __fastcall bdQoSProbe::onRelayConnectionFailure(bdQoSProbe *this, const bdReference<bdCommonAddr> remote)
{
  ?onRelayConnectionFailure@bdQoSProbe@@UEAAXV?$bdReference@VbdCommonAddr@@@@@Z(this, remote);
}

/*
==============
bdQoSProbe::setProbeAsFailed
==============
*/

bool __fastcall bdQoSProbe::setProbeAsFailed(bdQoSProbe *this, bdReference<bdCommonAddr> remote, bool didUseRelay)
{
  return ?setProbeAsFailed@bdQoSProbe@@IEAA_NV?$bdReference@VbdCommonAddr@@@@_N@Z(this, remote, didUseRelay);
}

/*
==============
bdQoSProbe::cancelProbes
==============
*/

void __fastcall bdQoSProbe::cancelProbes(bdQoSProbe *this)
{
  ?cancelProbes@bdQoSProbe@@QEAAXXZ(this);
}

/*
==============
bdQoSProbe::quit
==============
*/

bool __fastcall bdQoSProbe::quit(bdQoSProbe *this)
{
  return ?quit@bdQoSProbe@@QEAA_NXZ(this);
}

/*
==============
bdQoSProbe::cancelProbes
==============
*/

void __fastcall bdQoSProbe::cancelProbes(bdQoSProbe *this, const bdSecurityID *id)
{
  ?cancelProbes@bdQoSProbe@@QEAAXAEBVbdSecurityID@@@Z(this, id);
}

/*
==============
bdQoSProbe::isInitialized
==============
*/

bool __fastcall bdQoSProbe::isInitialized(bdQoSProbe *this)
{
  return ?isInitialized@bdQoSProbe@@QEBA_NXZ(this);
}

/*
==============
bdQoSProbe::processRequestPackets
==============
*/

bool __fastcall bdQoSProbe::processRequestPackets(bdQoSProbe *this, const bdQoSRequestPacket *packet, const bdAddr *addr, int packetSize)
{
  return ?processRequestPackets@bdQoSProbe@@AEAA_NAEBVbdQoSRequestPacket@@AEBVbdAddr@@H@Z(this, packet, addr, packetSize);
}

/*
==============
bdQoSProbe::probe
==============
*/

bool __fastcall bdQoSProbe::probe(bdQoSProbe *this, bdReference<bdCommonAddr> addr, const bdSecurityID *id, const bdSecurityKey *key, bdQoSProbeListener *listener, unsigned int numProbes)
{
  return ?probe@bdQoSProbe@@IEAA_NV?$bdReference@VbdCommonAddr@@@@AEBVbdSecurityID@@AEBVbdSecurityKey@@PEAVbdQoSProbeListener@@I@Z(this, addr, id, key, listener, numProbes);
}

/*
==============
bdQoSProbe::setMaxConcurrentProbes
==============
*/

void __fastcall bdQoSProbe::setMaxConcurrentProbes(bdQoSProbe *this, unsigned int maxConcurrentProbes)
{
  ?setMaxConcurrentProbes@bdQoSProbe@@QEAAXI@Z(this, maxConcurrentProbes);
}

/*
==============
bdQoSProbe::setProbeAsProbing
==============
*/

bool __fastcall bdQoSProbe::setProbeAsProbing(bdQoSProbe *this, bdReference<bdCommonAddr> remote, const bdAddr *realAddr, bool didUseRelay)
{
  return ?setProbeAsProbing@bdQoSProbe@@IEAA_NV?$bdReference@VbdCommonAddr@@@@AEBVbdAddr@@_N@Z(this, remote, realAddr, didUseRelay);
}

/*
==============
bdQoSProbe::logProbeDiscards
==============
*/

void __fastcall bdQoSProbe::logProbeDiscards(bdQoSProbe *this, unsigned int secID)
{
  ?logProbeDiscards@bdQoSProbe@@AEAAXI@Z(this, secID);
}

/*
==============
bdQoSProbe::acceptPacket
==============
*/

bool __fastcall bdQoSProbe::acceptPacket(bdQoSProbe *this, bdSocket *__formal, bdAddr *addr, void *data, const unsigned int size, const unsigned __int8 type)
{
  return ?acceptPacket@bdQoSProbe@@UEAA_NPEAVbdSocket@@VbdAddr@@PEAXIE@Z(this, __formal, addr, data, size, type);
}

/*
==============
bdQoSProbe::getListenStats
==============
*/

bool __fastcall bdQoSProbe::getListenStats(bdQoSProbe *this, const bdSecurityID *securityID, bdQoSHostStats *stats)
{
  return ?getListenStats@bdQoSProbe@@QEAA_NAEBVbdSecurityID@@AEAUbdQoSHostStats@@@Z(this, securityID, stats);
}

/*
==============
bdQoSProbe::shrinkSecId
==============
*/

unsigned int __fastcall bdQoSProbe::shrinkSecId(bdQoSProbe *this, const bdSecurityID *id)
{
  return ?shrinkSecId@bdQoSProbe@@IEBAIAEBVbdSecurityID@@@Z(this, id);
}

/*
==============
bdQoSProbe::useMultiplePacketsPerProbe
==============
*/

void __fastcall bdQoSProbe::useMultiplePacketsPerProbe(bdQoSProbe *this, bool useMultiplePacketsPerProbe)
{
  ?useMultiplePacketsPerProbe@bdQoSProbe@@QEAAX_N@Z(this, useMultiplePacketsPerProbe);
}

/*
==============
bdQoSProbe::calculateBandwidth
==============
*/

unsigned int __fastcall bdQoSProbe::calculateBandwidth(bdQoSProbe *this, float timeDiffBetweenPackets, unsigned int packetSize)
{
  return ?calculateBandwidth@bdQoSProbe@@AEAAIMI@Z(this, timeDiffBetweenPackets, packetSize);
}

/*
==============
bdQoSProbe::setProbeTimeout
==============
*/

void __fastcall bdQoSProbe::setProbeTimeout(bdQoSProbe *this, float probeTimeout)
{
  ?setProbeTimeout@bdQoSProbe@@QEAAXM@Z(this, probeTimeout);
}

/*
==============
bdQoSProbe::sendReply
==============
*/

bool __fastcall bdQoSProbe::sendReply(bdQoSProbe *this, const bdAddr *addr, const bdQoSProbe::bdQosProbeHost *probe)
{
  return ?sendReply@bdQoSProbe@@AEAA_NAEBVbdAddr@@AEBUbdQosProbeHost@1@@Z(this, addr, probe);
}

/*
==============
bdQoSProbe::setMaxBandwidth
==============
*/

void __fastcall bdQoSProbe::setMaxBandwidth(bdQoSProbe *this, const unsigned int maxBandwidth)
{
  ?setMaxBandwidth@bdQoSProbe@@QEAAXI@Z(this, maxBandwidth);
}

/*
==============
bdQoSProbe::logProbeRequests
==============
*/

void __fastcall bdQoSProbe::logProbeRequests(bdQoSProbe *this, unsigned int secID, bool requestingData)
{
  ?logProbeRequests@bdQoSProbe@@AEAAXI_N@Z(this, secID, requestingData);
}

/*
==============
bdQoSProbe::checkHostProbes
==============
*/

void __fastcall bdQoSProbe::checkHostProbes(bdQoSProbe *this)
{
  ?checkHostProbes@bdQoSProbe@@AEAAXXZ(this);
}

/*
==============
bdQoSProbe::listen
==============
*/

bool __fastcall bdQoSProbe::listen(bdQoSProbe *this, const bdFastArray<bdSecurityID> *secids, unsigned __int8 *data, unsigned int dataSize)
{
  return ?listen@bdQoSProbe@@QEAA_NAEBV?$bdFastArray@VbdSecurityID@@@@PEAEI@Z(this, secids, data, dataSize);
}

/*
==============
bdQoSProbe::setData
==============
*/

bool __fastcall bdQoSProbe::setData(bdQoSProbe *this, unsigned __int8 *data, unsigned int dataSize)
{
  return ?setData@bdQoSProbe@@QEAA_NPEAEI@Z(this, data, dataSize);
}

/*
==============
bdQoSProbe::isProbing
==============
*/

bool __fastcall bdQoSProbe::isProbing(bdQoSProbe *this)
{
  return ?isProbing@bdQoSProbe@@QEBA_NXZ(this);
}

/*
==============
bdQoSProbe::probe
==============
*/

bool __fastcall bdQoSProbe::probe(bdQoSProbe *this, const bdArray<bdQoSRemoteAddr> *addrs, bdQoSProbeListener *listener, unsigned int numProbes)
{
  return ?probe@bdQoSProbe@@QEAA_NAEBV?$bdArray@VbdQoSRemoteAddr@@@@PEAVbdQoSProbeListener@@I@Z(this, addrs, listener, numProbes);
}

/*
==============
bdQoSProbe::onNATAddrDiscovery
==============
*/

void __fastcall bdQoSProbe::onNATAddrDiscovery(bdQoSProbe *this, bdReference<bdCommonAddr> remote, const bdAddr *realAddr)
{
  ?onNATAddrDiscovery@bdQoSProbe@@UEAAXV?$bdReference@VbdCommonAddr@@@@AEBVbdAddr@@@Z(this, remote, realAddr);
}

/*
==============
bdQoSProbe::setMaxRetries
==============
*/

void __fastcall bdQoSProbe::setMaxRetries(bdQoSProbe *this, unsigned int numProbeRetries)
{
  ?setMaxRetries@bdQoSProbe@@QEAAXI@Z(this, numProbeRetries);
}

/*
==============
bdQoSProbe::onRelayConnectionSuccess
==============
*/

void __fastcall bdQoSProbe::onRelayConnectionSuccess(bdQoSProbe *this, const bdReference<bdCommonAddr> remote, const bdAddr *relay)
{
  ?onRelayConnectionSuccess@bdQoSProbe@@UEAAXV?$bdReference@VbdCommonAddr@@@@AEBVbdAddr@@@Z(this, remote, relay);
}

/*
==============
bdQoSProbe::logProbeReplys
==============
*/

void __fastcall bdQoSProbe::logProbeReplys(bdQoSProbe *this, unsigned int secID, bool sendingData)
{
  ?logProbeReplys@bdQoSProbe@@AEAAXI_N@Z(this, secID, sendingData);
}

/*
==============
bdQoSProbe::pump
==============
*/

void __fastcall bdQoSProbe::pump(bdQoSProbe *this)
{
  ?pump@bdQoSProbe@@QEAAXXZ(this);
}

/*
==============
bdQoSProbe::bdQoSProbe
==============
*/

void __fastcall bdQoSProbe::bdQoSProbe(bdQoSProbe *this, bdSocket *socket, bdNATTravClient *natTrav, bdServiceBandwidthArbitrator *bandArb)
{
  ??0bdQoSProbe@@QEAA@PEAVbdSocket@@PEAVbdNATTravClient@@PEAVbdServiceBandwidthArbitrator@@@Z(this, socket, natTrav, bandArb);
}

/*
==============
bdQoSProbe::handleRequest
==============
*/

bool __fastcall bdQoSProbe::handleRequest(bdQoSProbe *this, bdQoSRequestPacket *packet, bdAddr *addr, int packetSize)
{
  return ?handleRequest@bdQoSProbe@@IEAA_NAEAVbdQoSRequestPacket@@AEAVbdAddr@@H@Z(this, packet, addr, packetSize);
}

/*
==============
bdQoSProbe::onNATAddrDiscoveryFailed
==============
*/

void __fastcall bdQoSProbe::onNATAddrDiscoveryFailed(bdQoSProbe *this, bdReference<bdCommonAddr> remote)
{
  ?onNATAddrDiscoveryFailed@bdQoSProbe@@UEAAXV?$bdReference@VbdCommonAddr@@@@@Z(this, remote);
}

/*
==============
bdQoSProbe::logProbeReplyFailures
==============
*/

void __fastcall bdQoSProbe::logProbeReplyFailures(bdQoSProbe *this, unsigned int secID, bool sendingData)
{
  ?logProbeReplyFailures@bdQoSProbe@@AEAAXI_N@Z(this, secID, sendingData);
}

/*
==============
bdQoSProbe::probe
==============
*/

bool __fastcall bdQoSProbe::probe(bdQoSProbe *this, bdQoSRemoteAddr *addr, bdQoSProbeListener *listener, unsigned int numProbes)
{
  return ?probe@bdQoSProbe@@QEAA_NAEAVbdQoSRemoteAddr@@PEAVbdQoSProbeListener@@I@Z(this, addr, listener, numProbes);
}

/*
==============
bdQoSProbe::~bdQoSProbe
==============
*/

void __fastcall bdQoSProbe::~bdQoSProbe(bdQoSProbe *this)
{
  ??1bdQoSProbe@@UEAA@XZ(this);
}

/*
==============
bdQoSProbe::listen
==============
*/

bool __fastcall bdQoSProbe::listen(bdQoSProbe *this, const bdSecurityID *secid, unsigned __int8 *data, unsigned int dataSize)
{
  return ?listen@bdQoSProbe@@QEAA_NAEBVbdSecurityID@@PEAEI@Z(this, secid, data, dataSize);
}

/*
==============
bdQoSProbe::handleReply
==============
*/

bool __fastcall bdQoSProbe::handleReply(bdQoSProbe *this, bdQoSReplyPacket *packet, bdAddr *addr, unsigned int packetSize)
{
  return ?handleReply@bdQoSProbe@@IEAA_NAEAVbdQoSReplyPacket@@AEAVbdAddr@@I@Z(this, packet, addr, packetSize);
}

/*
==============
bdQoSProbe::bdQoSProbe
==============
*/
void bdQoSProbe::bdQoSProbe(bdQoSProbe *this, bdSocket *socket, bdNATTravClient *natTrav, bdServiceBandwidthArbitrator *bandArb)
{
  bdNATTravListener::bdNATTravListener(this);
  bdPacketInterceptor::bdPacketInterceptor(&this->bdPacketInterceptor);
  this->bdNATTravListener::__vftable = (bdQoSProbe_vtbl *)&bdQoSProbe::`vftable'{for `bdNATTravListener'};
  this->bdPacketInterceptor::__vftable = (bdPacketInterceptor_vtbl *)&bdQoSProbe::`vftable'{for `bdPacketInterceptor'};
  this->bdRelayAssociationListener::__vftable = (bdRelayAssociationListener_vtbl *)&bdQoSProbe::`vftable'{for `bdRelayAssociationListener'};
  this->m_maxBandwidth = 0x4000;
  this->m_socket = socket;
  this->m_natTrav = natTrav;
  this->m_bandArb = bandArb;
  this->m_nextProbeId = 0;
  bdGlobalStopwatch::bdGlobalStopwatch(&this->m_probingTimer);
  this->m_secids.m_data = NULL;
  *(_QWORD *)&this->m_secids.m_capacity = 0i64;
  bdQoSReplyPacket::bdQoSReplyPacket(&this->m_replyData);
  this->m_listenState = BD_QOS_OFF;
  this->m_status = BD_QOS_PROBE_INITIALIZED;
  this->m_maxRetries = 4;
  this->m_probeTimeout = 0.89999998;
  this->m_maxConcurrentProbes = 8;
  this->m_useMultiplePacketsPerProbe = 0;
  __asm { vmovss  xmm2, cs:__real@3f400000; loadFactor }
  bdHashMap<bdReference<bdCommonAddr>,bdArray<bdQoSProbe::bdQoSProbeEntryWrapper>,bdCommonAddrHash>::bdHashMap<bdReference<bdCommonAddr>,bdArray<bdQoSProbe::bdQoSProbeEntryWrapper>,bdCommonAddrHash>(&this->m_probesResolving, 4u, *(const float *)&_XMM2);
  __asm { vmovss  xmm2, cs:__real@3f400000; loadFactor }
  bdHashMap<unsigned int,bdQoSProbe::bdQoSProbeEntryWrapper,bdHashingClass>::bdHashMap<unsigned int,bdQoSProbe::bdQoSProbeEntryWrapper,bdHashingClass>(&this->m_probesProbing, 4u, *(const float *)&_XMM2);
  __asm { vmovss  xmm2, cs:__real@3f400000; loadFactor }
  bdHashMap<unsigned int,bdQoSProbe::bdQosProbeHost,bdHashingClass>::bdHashMap<unsigned int,bdQoSProbe::bdQosProbeHost,bdHashingClass>(&this->m_probesProcessing, 4u, *(const float *)&_XMM2);
  this->m_statsPerSession.m_data = NULL;
  *(_QWORD *)&this->m_statsPerSession.m_capacity = 0i64;
  bdGlobalStopwatch::start(&this->m_probingTimer);
  bdServiceBandwidthArbitrator::reset(this->m_bandArb);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm1, xmm0, cs:__real@3e4ccccd
    vcvttss2si rdx, xmm1; bytes
  }
  bdServiceBandwidthArbitrator::addSliceQuota(this->m_bandArb, _RDX);
}

/*
==============
bdQoSProbe::bdQoSProbe
==============
*/
void bdQoSProbe::bdQoSProbe(bdQoSProbe *this)
{
  bdNATTravListener::bdNATTravListener(this);
  bdPacketInterceptor::bdPacketInterceptor(&this->bdPacketInterceptor);
  this->bdNATTravListener::__vftable = (bdQoSProbe_vtbl *)&bdQoSProbe::`vftable'{for `bdNATTravListener'};
  this->bdPacketInterceptor::__vftable = (bdPacketInterceptor_vtbl *)&bdQoSProbe::`vftable'{for `bdPacketInterceptor'};
  this->bdRelayAssociationListener::__vftable = (bdRelayAssociationListener_vtbl *)&bdQoSProbe::`vftable'{for `bdRelayAssociationListener'};
  bdGlobalStopwatch::bdGlobalStopwatch(&this->m_probingTimer);
  this->m_secids.m_data = NULL;
  *(_QWORD *)&this->m_secids.m_capacity = 0i64;
  bdQoSReplyPacket::bdQoSReplyPacket(&this->m_replyData);
  this->m_status = BD_QOS_PROBE_UNINITIALIZED;
  __asm { vmovss  xmm2, cs:__real@3f400000; loadFactor }
  bdHashMap<bdReference<bdCommonAddr>,bdArray<bdQoSProbe::bdQoSProbeEntryWrapper>,bdCommonAddrHash>::bdHashMap<bdReference<bdCommonAddr>,bdArray<bdQoSProbe::bdQoSProbeEntryWrapper>,bdCommonAddrHash>(&this->m_probesResolving, 4u, *(const float *)&_XMM2);
  __asm { vmovss  xmm2, cs:__real@3f400000; loadFactor }
  bdHashMap<unsigned int,bdQoSProbe::bdQoSProbeEntryWrapper,bdHashingClass>::bdHashMap<unsigned int,bdQoSProbe::bdQoSProbeEntryWrapper,bdHashingClass>(&this->m_probesProbing, 4u, *(const float *)&_XMM2);
  __asm { vmovss  xmm2, cs:__real@3f400000; loadFactor }
  bdHashMap<unsigned int,bdQoSProbe::bdQosProbeHost,bdHashingClass>::bdHashMap<unsigned int,bdQoSProbe::bdQosProbeHost,bdHashingClass>(&this->m_probesProcessing, 4u, *(const float *)&_XMM2);
  this->m_statsPerSession.m_data = NULL;
  *(_QWORD *)&this->m_statsPerSession.m_capacity = 0i64;
}

/*
==============
bdQoSProbe::~bdQoSProbe
==============
*/
void bdQoSProbe::~bdQoSProbe(bdQoSProbe *this)
{
  this->bdNATTravListener::__vftable = (bdQoSProbe_vtbl *)&bdQoSProbe::`vftable'{for `bdNATTravListener'};
  this->bdPacketInterceptor::__vftable = (bdPacketInterceptor_vtbl *)&bdQoSProbe::`vftable'{for `bdPacketInterceptor'};
  this->bdRelayAssociationListener::__vftable = (bdRelayAssociationListener_vtbl *)&bdQoSProbe::`vftable'{for `bdRelayAssociationListener'};
  this->m_bandArb = NULL;
  this->m_natTrav = NULL;
  this->m_socket = NULL;
  bdMemory::deallocate(this->m_statsPerSession.m_data);
  this->m_statsPerSession.m_data = NULL;
  *(_QWORD *)&this->m_statsPerSession.m_capacity = 0i64;
  bdHashMap<unsigned int,bdQoSProbe::bdQosProbeHost,bdHashingClass>::~bdHashMap<unsigned int,bdQoSProbe::bdQosProbeHost,bdHashingClass>(&this->m_probesProcessing);
  bdHashMap<unsigned int,bdQoSProbe::bdQoSProbeEntryWrapper,bdHashingClass>::clear(&this->m_probesProbing);
  bdMemory::deallocate(this->m_probesProbing.m_map);
  bdHashMap<bdReference<bdCommonAddr>,bdArray<bdQoSProbe::bdQoSProbeEntryWrapper>,bdCommonAddrHash>::clear(&this->m_probesResolving);
  bdMemory::deallocate(this->m_probesResolving.m_map);
  bdQoSReplyPacket::~bdQoSReplyPacket(&this->m_replyData);
  bdMemory::deallocate(this->m_secids.m_data);
  this->m_secids.m_data = NULL;
  *(_QWORD *)&this->m_secids.m_capacity = 0i64;
  this->bdRelayAssociationListener::__vftable = (bdRelayAssociationListener_vtbl *)&bdRelayAssociationListener::`vftable';
  bdPacketInterceptor::~bdPacketInterceptor(&this->bdPacketInterceptor);
  bdNATTravListener::~bdNATTravListener(this);
}

/*
==============
bdQoSProbe::acceptPacket
==============
*/
bool bdQoSProbe::acceptPacket(bdQoSProbe *this, bdSocket *__formal, bdAddr *addr, void *data, const unsigned int size, const unsigned __int8 type)
{
  bool v9; 
  int v11; 
  unsigned int newOffset; 
  __int64 v13; 
  bdQoSReplyPacket packet; 
  char v15[24]; 

  v13 = -2i64;
  v9 = 0;
  if ( *((_DWORD *)&this->m_replyData.m_hasData + 1) != 1 || (unsigned __int8)(type - 40) > 9u )
    return v9;
  bdAddr::toString(addr, v15, 0x16ui64);
  v11 = type;
  bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/qos", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdqos\\bdqosprobe.cpp", "bdQoSProbe::acceptPacket", 0x161u, "Received QoS packet from %s with type %u", v15, v11);
  if ( type != 40 )
  {
    if ( type == 41 )
    {
      bdQoSReplyPacket::bdQoSReplyPacket(&packet);
      if ( bdQoSReplyPacket::deserialize(&packet, data, size, 0, &newOffset) && newOffset == size )
        v9 = bdQoSProbe::handleReply((bdQoSProbe *)((char *)this - 8), &packet, addr, size);
      bdQoSReplyPacket::~bdQoSReplyPacket(&packet);
    }
    else
    {
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/qos", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdqos\\bdqosprobe.cpp", "bdQoSProbe::acceptPacket", 0x17Cu, "Got packet with invalid type.");
    }
    return v9;
  }
  bdQoSRequestPacket::bdQoSRequestPacket((bdQoSRequestPacket *)&packet);
  if ( !bdQoSRequestPacket::deserialize((bdQoSRequestPacket *)&packet, data, size, 0, &newOffset) || newOffset != size )
    return v9;
  return bdQoSProbe::handleRequest((bdQoSProbe *)((char *)this - 8), (bdQoSRequestPacket *)&packet, addr, size);
}

/*
==============
bdQoSProbe::calculateBandwidth
==============
*/

__int64 __fastcall bdQoSProbe::calculateBandwidth(bdQoSProbe *this, double timeDiffBetweenPackets, unsigned int packetSize)
{
  char v3; 
  __int64 result; 

  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vucomiss xmm1, xmm0
  }
  if ( v3 || !this->m_useMultiplePacketsPerProbe )
    return 0xFFFFFFFFi64;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rcx
    vdivss  xmm1, xmm0, xmm1
    vcvttss2si rax, xmm1
  }
  return result;
}

/*
==============
bdQoSProbe::cancelProbes
==============
*/
void bdQoSProbe::cancelProbes(bdQoSProbe *this, const bdSecurityID *id)
{
  bdQoSProbe *v2; 
  unsigned int v3; 
  unsigned int v4; 
  bdHashMap<bdReference<bdCommonAddr>,bdArray<bdQoSProbe::bdQoSProbeEntryWrapper>,bdCommonAddrHash> *p_m_probesResolving; 
  __int64 v6; 
  __int64 v7; 
  unsigned int m_capacity; 
  bdHashMap<bdReference<bdCommonAddr>,bdArray<bdQoSProbe::bdQoSProbeEntryWrapper>,bdCommonAddrHash>::Node **m_map; 
  bdArray<bdQoSProbe::bdQoSProbeEntryWrapper> *p_m_data; 
  __int64 v11; 
  unsigned int m_size; 
  bool v13; 
  unsigned int v14; 
  unsigned int v15; 
  __int64 v16; 
  unsigned int v17; 
  int v18; 
  void *v19; 
  void *v20; 
  _QWORD *v21; 
  char *v22; 
  __int64 v23; 
  _QWORD *v24; 
  __int64 v25; 
  bdQoSProbe::bdQoSProbeEntryWrapper **v26; 
  bdQoSProbe::bdQoSProbeEntryWrapper *m_data; 
  void *v28; 
  unsigned int v29; 
  __int64 v30; 
  __int64 v31; 
  unsigned int v32; 
  bdHashMap<unsigned int,bdQoSProbe::bdQoSProbeEntryWrapper,bdHashingClass>::Node **v33; 
  bdSecurityID *v34; 
  void *v35; 
  __int64 v36; 
  unsigned int v37; 
  bdCommonAddr **v38; 
  bdNATTravClient *m_natTrav; 
  bool v40; 
  bdCommonAddr *v41; 
  bdCommonAddr *v42; 
  _QWORD *v43; 
  __int64 v44; 
  bdReference<bdCommonAddr> remote; 
  bdReference<bdCommonAddr> v46; 
  __int64 v47; 
  void *p; 
  __int64 v49; 
  void *iterator; 
  void *v53; 

  v47 = -2i64;
  v2 = this;
  p = NULL;
  v3 = 0;
  v49 = 0i64;
  v4 = 0;
  p_m_probesResolving = &this->m_probesResolving;
  v6 = 1i64;
  if ( this->m_probesResolving.m_size )
  {
    v7 = 0i64;
    m_capacity = p_m_probesResolving->m_capacity;
    if ( m_capacity )
    {
      do
      {
        if ( p_m_probesResolving->m_map[v7] )
          break;
        v7 = (unsigned int)(v7 + 1);
      }
      while ( (unsigned int)v7 < m_capacity );
      v6 = 1i64;
    }
    m_map = p_m_probesResolving->m_map;
    if ( m_map[v7] )
    {
      _InterlockedExchangeAdd((volatile signed __int32 *)&p_m_probesResolving->m_numIterators, 1u);
      m_map = p_m_probesResolving->m_map;
      v4 = HIDWORD(v49);
      v3 = v49;
    }
    p_m_data = &m_map[v7]->m_data;
LABEL_9:
    for ( iterator = p_m_data; ; p_m_data = (bdArray<bdQoSProbe::bdQoSProbeEntryWrapper> *)iterator )
    {
      while ( 1 )
      {
        if ( !p_m_data )
          goto LABEL_52;
        v11 = 0i64;
        m_size = p_m_data->m_size;
        if ( !m_size )
          break;
        v13 = m_size != 0;
        do
        {
          bdHandleAssert(v13, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<struct bdQoSProbe::bdQoSProbeEntryWrapper>::operator []", 0x68u, "bdArray<T>::operator[], rangecheck failed");
          if ( bdSecurityID::operator==(&p_m_data->m_data[v11].m_id, id) )
          {
            v14 = p_m_data->m_size;
            if ( (unsigned int)v11 < v14 )
            {
              bdQoSProbe::bdQoSProbeEntryWrapper::operator=(&p_m_data->m_data[v11], &p_m_data->m_data[v14 - 1]);
              v15 = p_m_data->m_size;
              if ( v15 )
              {
                v16 = v15 - 1;
                p_m_data->m_size = v16;
                bdQoSProbe::bdQoSProbeEntryWrapper::~bdQoSProbeEntryWrapper(&p_m_data->m_data[v16]);
                bdArray<bdQoSProbe::bdQoSProbeEntryWrapper>::decreaseCapacity(p_m_data, 0);
              }
            }
          }
          else
          {
            v11 = (unsigned int)(v11 + 1);
          }
          v17 = p_m_data->m_size;
          v13 = (unsigned int)v11 < v17;
        }
        while ( (unsigned int)v11 < v17 );
        v2 = this;
        p_m_probesResolving = &this->m_probesResolving;
        if ( !v17 )
          break;
        v28 = *(void **)&p_m_data[1].m_capacity;
        if ( !v28 )
        {
          v29 = this->m_probesResolving.m_capacity;
          v30 = (p_m_data[1].m_data[1].m_currentProbe.m_bandwidthUp & (v29 - 1)) + 1;
          if ( (unsigned int)v30 >= v29 )
          {
LABEL_51:
            _InterlockedExchangeAdd((volatile signed __int32 *)&this->m_probesResolving.m_numIterators, 0xFFFFFFFF);
            v4 = HIDWORD(v49);
            goto LABEL_52;
          }
          v6 = (__int64)this->m_probesResolving.m_map;
          while ( 1 )
          {
            p_m_data = *(bdArray<bdQoSProbe::bdQoSProbeEntryWrapper> **)(v6 + 8 * v30);
            if ( p_m_data )
              goto LABEL_9;
            v30 = (unsigned int)(v30 + 1);
            if ( (unsigned int)v30 >= v29 )
              goto LABEL_51;
          }
        }
        p_m_data = *(bdArray<bdQoSProbe::bdQoSProbeEntryWrapper> **)&p_m_data[1].m_capacity;
        iterator = v28;
      }
      if ( v4 == v3 )
        break;
LABEL_41:
      v26 = (bdQoSProbe::bdQoSProbeEntryWrapper **)((char *)p + 8 * v4);
      if ( v26 )
      {
        m_data = p_m_data[1].m_data;
        *v26 = m_data;
        if ( m_data )
        {
          _InterlockedExchangeAdd((volatile signed __int32 *)&m_data->m_id, 1u);
          v4 = HIDWORD(v49);
          v3 = v49;
        }
      }
      HIDWORD(v49) = ++v4;
      bdHashMap<bdReference<bdCommonAddr>,bdArray<bdQoSProbe::bdQoSProbeEntryWrapper>,bdCommonAddrHash>::remove(p_m_probesResolving, &iterator);
    }
    v18 = v3;
    if ( !v3 )
      v18 = 1;
    v19 = NULL;
    v3 += v18;
    if ( v3 )
    {
      v20 = bdMemory::allocate(8i64 * v3);
      v19 = v20;
      if ( !v4 )
      {
LABEL_40:
        bdMemory::deallocate(p);
        p = v19;
        LODWORD(v49) = v3;
        goto LABEL_41;
      }
      v21 = v20;
      v22 = (char *)((_BYTE *)p - (_BYTE *)v20);
      v6 = v4;
      do
      {
        if ( v21 )
        {
          v23 = *(_QWORD *)((char *)v21 + (_QWORD)v22);
          *v21 = v23;
          if ( v23 )
            _InterlockedExchangeAdd((volatile signed __int32 *)(v23 + 8), 1u);
        }
        ++v21;
        --v6;
      }
      while ( v6 );
      v4 = HIDWORD(v49);
      p_m_data = (bdArray<bdQoSProbe::bdQoSProbeEntryWrapper> *)iterator;
    }
    if ( v4 )
    {
      v24 = p;
      v25 = v4;
      do
      {
        if ( *v24 && _InterlockedExchangeAdd((volatile signed __int32 *)(*v24 + 8i64), 0xFFFFFFFF) == 1 )
        {
          if ( *v24 )
            (**(void (__fastcall ***)(_QWORD, __int64, __int64))*v24)(*v24, 1i64, v6);
          *v24 = 0i64;
        }
        ++v24;
        --v25;
      }
      while ( v25 );
      p_m_probesResolving = &v2->m_probesResolving;
      v4 = HIDWORD(v49);
      p_m_data = (bdArray<bdQoSProbe::bdQoSProbeEntryWrapper> *)iterator;
    }
    goto LABEL_40;
  }
LABEL_52:
  if ( v2->m_probesProbing.m_size )
  {
    v31 = 0i64;
    v32 = v2->m_probesProbing.m_capacity;
    if ( v32 )
    {
      v6 = (__int64)v2->m_probesProbing.m_map;
      do
      {
        if ( *(_QWORD *)(v6 + 8 * v31) )
          break;
        v31 = (unsigned int)(v31 + 1);
      }
      while ( (unsigned int)v31 < v32 );
    }
    v33 = v2->m_probesProbing.m_map;
    if ( v33[v31] )
    {
      _InterlockedExchangeAdd((volatile signed __int32 *)&v2->m_probesProbing.m_numIterators, 1u);
      v33 = v2->m_probesProbing.m_map;
      v4 = HIDWORD(v49);
    }
    v34 = (bdSecurityID *)v33[v31];
LABEL_60:
    v53 = v34;
    while ( v34 )
    {
      if ( bdSecurityID::operator==(v34 + 1, id) )
      {
        bdHashMap<unsigned int,bdQoSProbe::bdQoSProbeEntryWrapper,bdHashingClass>::remove(&v2->m_probesProbing, &v53);
        v34 = (bdSecurityID *)v53;
      }
      else
      {
        v35 = (void *)v34[81];
        if ( !v35 )
        {
          v6 = v2->m_probesProbing.m_capacity;
          v36 = ((v34[80].ab[3] ^ (16777619 * (v34[80].ab[2] ^ (16777619 * (v34[80].ab[1] ^ (16777619 * v34[80].ab[0])))))) & (unsigned int)(v6 - 1)) + 1;
          if ( (unsigned int)v36 >= (unsigned int)v6 )
          {
LABEL_69:
            _InterlockedExchangeAdd((volatile signed __int32 *)&v2->m_probesProbing.m_numIterators, 0xFFFFFFFF);
            v4 = HIDWORD(v49);
            break;
          }
          while ( 1 )
          {
            v34 = (bdSecurityID *)v2->m_probesProbing.m_map[v36];
            if ( v34 )
              goto LABEL_60;
            v36 = (unsigned int)(v36 + 1);
            if ( (unsigned int)v36 >= (unsigned int)v6 )
              goto LABEL_69;
          }
        }
        v34 = (bdSecurityID *)v34[81];
        v53 = v35;
      }
    }
  }
  if ( v2->m_status == BD_QOS_PROBE_INITIALIZED )
  {
    v37 = 0;
    if ( v4 )
    {
      v38 = (bdCommonAddr **)p;
      do
      {
        m_natTrav = v2->m_natTrav;
        v40 = v37 < v4;
        bdHandleAssert(v37 < v4, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<class bdReference<class bdCommonAddr> >::operator []", 0x68u, "bdArray<T>::operator[], rangecheck failed");
        v41 = *v38;
        remote.m_ptr = v41;
        if ( v41 )
        {
          _InterlockedExchangeAdd((volatile signed __int32 *)&v41->m_refCount, 1u);
          v4 = HIDWORD(v49);
        }
        bdNATTravClient::cancelConnect(m_natTrav, (bdReference<bdCommonAddr>)&remote);
        bdHandleAssert(v40, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<class bdReference<class bdCommonAddr> >::operator []", 0x68u, "bdArray<T>::operator[], rangecheck failed");
        v42 = *v38;
        v46.m_ptr = v42;
        if ( v42 )
        {
          _InterlockedExchangeAdd((volatile signed __int32 *)&v42->m_refCount, 1u);
          v4 = HIDWORD(v49);
        }
        bdQoSProbe::setProbeAsFailed(v2, (bdReference<bdCommonAddr>)&v46, 0);
        ++v37;
        ++v38;
      }
      while ( v37 < v4 );
    }
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/qos", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdqos\\bdqosprobe.cpp", "bdQoSProbe::cancelProbes", 0x365u, "Cannot cancel probes when class is uninitialized.");
  }
  if ( v4 )
  {
    v43 = p;
    v44 = v4;
    do
    {
      if ( *v43 && _InterlockedExchangeAdd((volatile signed __int32 *)(*v43 + 8i64), 0xFFFFFFFF) == 1 )
      {
        if ( *v43 )
          (**(void (__fastcall ***)(_QWORD, __int64, __int64))*v43)(*v43, 1i64, v6);
        *v43 = 0i64;
      }
      ++v43;
      --v44;
    }
    while ( v44 );
  }
  bdMemory::deallocate(p);
}

/*
==============
bdQoSProbe::cancelProbes
==============
*/
void bdQoSProbe::cancelProbes(bdQoSProbe *this)
{
  _QWORD *v2; 
  unsigned int v3; 
  __int64 v4; 
  __int64 v5; 
  unsigned int m_capacity; 
  bdHashMap<bdReference<bdCommonAddr>,bdArray<bdQoSProbe::bdQoSProbeEntryWrapper>,bdCommonAddrHash>::Node **m_map; 
  bdHashMap<bdReference<bdCommonAddr>,bdArray<bdQoSProbe::bdQoSProbeEntryWrapper>,bdCommonAddrHash>::Node *v8; 
  int v9; 
  _QWORD *v10; 
  _QWORD *v11; 
  _QWORD *v12; 
  signed __int64 v13; 
  __int64 v14; 
  __int64 v15; 
  bdCommonAddr **v16; 
  bdCommonAddr *m_ptr; 
  unsigned int v18; 
  __int64 v19; 
  unsigned int v20; 
  bdNATTravClient *m_natTrav; 
  bool v22; 
  bdCommonAddr *v23; 
  bdCommonAddr *v24; 
  _QWORD *v25; 
  __int64 v26; 
  bdReference<bdCommonAddr> remote; 
  bdReference<bdCommonAddr> v28; 

  if ( this->m_status == BD_QOS_PROBE_INITIALIZED )
  {
    v2 = NULL;
    v25 = NULL;
    v3 = 0;
    v26 = 0i64;
    v4 = 0i64;
    if ( this->m_probesResolving.m_size )
    {
      v5 = 0i64;
      m_capacity = this->m_probesResolving.m_capacity;
      if ( m_capacity )
      {
        do
        {
          if ( this->m_probesResolving.m_map[v5] )
            break;
          v5 = (unsigned int)(v5 + 1);
        }
        while ( (unsigned int)v5 < m_capacity );
      }
      m_map = this->m_probesResolving.m_map;
      if ( m_map[v5] )
      {
        _InterlockedExchangeAdd((volatile signed __int32 *)&this->m_probesResolving.m_numIterators, 1u);
        m_map = this->m_probesResolving.m_map;
        v4 = 0i64;
        v3 = 0;
        v2 = NULL;
      }
      v8 = m_map[v5];
LABEL_9:
      if ( v8 )
      {
        while ( (_DWORD)v4 != v3 )
        {
LABEL_30:
          v16 = (bdCommonAddr **)&v2[(unsigned int)v4];
          if ( v16 )
          {
            m_ptr = v8->m_key.m_ptr;
            *v16 = m_ptr;
            if ( m_ptr )
            {
              _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
              LODWORD(v4) = HIDWORD(v26);
              v3 = v26;
              v2 = v25;
            }
          }
          v4 = (unsigned int)(v4 + 1);
          HIDWORD(v26) = v4;
          if ( v8->m_next )
          {
            v8 = v8->m_next;
            goto LABEL_9;
          }
          v18 = this->m_probesResolving.m_capacity;
          v19 = (v8->m_key.m_ptr->m_hash & (v18 - 1)) + 1;
          if ( (unsigned int)v19 >= v18 )
          {
LABEL_38:
            _InterlockedExchangeAdd((volatile signed __int32 *)&this->m_probesResolving.m_numIterators, 0xFFFFFFFF);
            v4 = (unsigned int)v4;
            v2 = v25;
            goto LABEL_39;
          }
          while ( 1 )
          {
            v8 = this->m_probesResolving.m_map[v19];
            if ( v8 )
              break;
            v19 = (unsigned int)(v19 + 1);
            if ( (unsigned int)v19 >= v18 )
              goto LABEL_38;
          }
        }
        v9 = v3;
        if ( !v3 )
          v9 = 1;
        v10 = NULL;
        v3 += v9;
        if ( v3 )
        {
          v11 = bdMemory::allocate(8i64 * v3);
          v10 = v11;
          if ( !(_DWORD)v4 )
          {
LABEL_29:
            bdMemory::deallocate(v2);
            v2 = v10;
            v25 = v10;
            LODWORD(v26) = v3;
            goto LABEL_30;
          }
          v12 = v11;
          v13 = (char *)v2 - (char *)v11;
          v14 = (unsigned int)v4;
          do
          {
            if ( v12 )
            {
              v15 = *(_QWORD *)((char *)v12 + v13);
              *v12 = v15;
              if ( v15 )
                _InterlockedExchangeAdd((volatile signed __int32 *)(v15 + 8), 1u);
            }
            ++v12;
            --v14;
          }
          while ( v14 );
          v4 = HIDWORD(v26);
          v2 = v25;
        }
        if ( (_DWORD)v4 )
        {
          do
          {
            if ( *v2 && _InterlockedExchangeAdd((volatile signed __int32 *)(*v2 + 8i64), 0xFFFFFFFF) == 1 )
            {
              if ( *v2 )
                (**(void (__fastcall ***)(_QWORD, __int64))*v2)(*v2, 1i64);
              *v2 = 0i64;
            }
            ++v2;
            --v4;
          }
          while ( v4 );
          LODWORD(v4) = HIDWORD(v26);
          v2 = v25;
        }
        goto LABEL_29;
      }
LABEL_39:
      v20 = 0;
      if ( (_DWORD)v4 )
      {
        do
        {
          m_natTrav = this->m_natTrav;
          v22 = v20 < (unsigned int)v4;
          bdHandleAssert(v20 < (unsigned int)v4, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<class bdReference<class bdCommonAddr> >::operator []", 0x68u, "bdArray<T>::operator[], rangecheck failed");
          v23 = (bdCommonAddr *)*v2;
          remote.m_ptr = v23;
          if ( v23 )
          {
            _InterlockedExchangeAdd((volatile signed __int32 *)&v23->m_refCount, 1u);
            v4 = HIDWORD(v26);
          }
          bdNATTravClient::cancelConnect(m_natTrav, (bdReference<bdCommonAddr>)&remote);
          bdHandleAssert(v22, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<class bdReference<class bdCommonAddr> >::operator []", 0x68u, "bdArray<T>::operator[], rangecheck failed");
          v24 = (bdCommonAddr *)*v2;
          v28.m_ptr = v24;
          if ( v24 )
          {
            _InterlockedExchangeAdd((volatile signed __int32 *)&v24->m_refCount, 1u);
            v4 = HIDWORD(v26);
          }
          bdQoSProbe::setProbeAsFailed(this, (bdReference<bdCommonAddr>)&v28, 0);
          ++v20;
          ++v2;
        }
        while ( v20 < (unsigned int)v4 );
        v2 = v25;
      }
    }
    if ( (_DWORD)v4 )
    {
      do
      {
        if ( *v2 && _InterlockedExchangeAdd((volatile signed __int32 *)(*v2 + 8i64), 0xFFFFFFFF) == 1 )
        {
          if ( *v2 )
            (**(void (__fastcall ***)(_QWORD, __int64))*v2)(*v2, 1i64);
          *v2 = 0i64;
        }
        ++v2;
        --v4;
      }
      while ( v4 );
      v2 = v25;
    }
    bdMemory::deallocate(v2);
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/qos", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdqos\\bdqosprobe.cpp", "bdQoSProbe::cancelProbes", 0x32Bu, "Cannot cancel probes when class is uninitialized.");
  }
  bdHashMap<unsigned int,bdQoSProbe::bdQoSProbeEntryWrapper,bdHashingClass>::clear(&this->m_probesProbing);
  bdHashMap<bdReference<bdCommonAddr>,bdArray<bdQoSProbe::bdQoSProbeEntryWrapper>,bdCommonAddrHash>::clear(&this->m_probesResolving);
}

/*
==============
bdQoSProbe::checkHostProbes
==============
*/
void bdQoSProbe::checkHostProbes(bdQoSProbe *this)
{
  bdHashMap<unsigned int,bdQoSProbe::bdQosProbeHost,bdHashingClass>::Node *v3; 
  unsigned int v4; 
  unsigned int m_capacity; 
  bdHashMap<unsigned int,bdQoSProbe::bdQosProbeHost,bdHashingClass>::Node **m_map; 
  unsigned int m_size; 
  bdLinkedList<unsigned int>::Node *m_head; 
  bdLinkedList<unsigned int>::Node *m_tail; 
  char v11; 
  bool v12; 
  bdServiceBandwidthArbitrator *m_bandArb; 
  unsigned int SerializedSize; 
  bdLinkedList<unsigned int>::Node *v15; 
  bdLinkedList<unsigned int>::Node *v16; 
  bdLinkedList<unsigned int>::Node **p_m_next; 
  bdLinkedList<unsigned int>::Node *m_next; 
  unsigned int v19; 
  __int64 v20; 
  bdLinkedList<unsigned int>::Node *v21; 
  bdHashMap<unsigned int,bdQoSProbe::bdQosProbeHost,bdHashingClass>::Node **v22; 
  bdHashMap<unsigned int,bdQoSProbe::bdQosProbeHost,bdHashingClass>::Node *v23; 
  bdHashMap<unsigned int,bdQoSProbe::bdQosProbeHost,bdHashingClass>::Node *v24; 
  bdHashMap<unsigned int,bdQoSProbe::bdQosProbeHost,bdHashingClass>::Node *v25; 
  bdLinkedList<unsigned int>::Node *v26; 
  bdQueue<unsigned int> v27; 
  __int64 v28; 
  bdLinkedList<unsigned int>::Node *v29; 
  bdQoSProbe::bdQosProbeHost probe; 
  char str[24]; 

  v28 = -2i64;
  _RSI = this;
  if ( this->m_probesProcessing.m_size )
  {
    v4 = 0;
    m_capacity = _RSI->m_probesProcessing.m_capacity;
    if ( m_capacity )
    {
      do
      {
        if ( _RSI->m_probesProcessing.m_map[v4] )
          break;
        ++v4;
      }
      while ( v4 < m_capacity );
    }
    m_map = _RSI->m_probesProcessing.m_map;
    if ( m_map[v4] )
    {
      _InterlockedExchangeAdd((volatile signed __int32 *)&_RSI->m_probesProcessing.m_numIterators, 1u);
      m_map = _RSI->m_probesProcessing.m_map;
    }
    v3 = m_map[v4];
  }
  else
  {
    v3 = NULL;
  }
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rsp+190h+var_150.m_list.m_head], xmm0
  }
  m_size = 0;
  v27.m_list.m_size = 0;
  m_head = v27.m_list.m_head;
  if ( !v3 )
    goto LABEL_48;
  m_tail = v27.m_list.m_tail;
  do
  {
    while ( 1 )
    {
      probe.m_numPacketsReceived = v3->m_data.m_numPacketsReceived;
      bdAddr::bdAddr(&probe.m_realAddr, &v3->m_data.m_realAddr);
      probe.m_timer.m_start = v3->m_data.m_timer.m_start;
      probe.m_holdTimePacket1.m_start = v3->m_data.m_holdTimePacket1.m_start;
      probe.m_holdTimePacket2.m_start = v3->m_data.m_holdTimePacket2.m_start;
      probe.m_completed = v3->m_data.m_completed;
      probe.m_bandwidth = v3->m_data.m_bandwidth;
      probe.m_id = v3->m_data.m_id;
      probe.m_probeTimestamp = v3->m_data.m_probeTimestamp;
      probe.m_needToSendData = v3->m_data.m_needToSendData;
      probe.m_secid = v3->m_data.m_secid;
      *(double *)&_XMM0 = bdStopwatch::getElapsedTimeInSeconds(&probe.m_timer);
      __asm { vcomiss xmm0, dword ptr [rsi+0A0h] }
      if ( v11 | v12 && probe.m_completed )
      {
        if ( bdServiceBandwidthArbitrator::allowedSend(_RSI->m_bandArb, 0x1Cu) )
        {
          m_bandArb = _RSI->m_bandArb;
          SerializedSize = bdQoSReplyPacket::getSerializedSize(&_RSI->m_replyData);
          if ( bdServiceBandwidthArbitrator::allowedSend(m_bandArb, SerializedSize + 28) && _RSI->m_useMultiplePacketsPerProbe && probe.m_completed )
          {
            bdQoSProbe::sendReply(_RSI, &probe.m_realAddr, &probe);
            bdQueue<unsigned int>::enqueue(&v27, &v3->m_key);
            m_size = v27.m_list.m_size;
            m_tail = v27.m_list.m_tail;
            m_head = v27.m_list.m_head;
          }
        }
      }
      else
      {
        bdAddr::toString(&probe.m_realAddr, str, 0x16ui64);
        bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/qos", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdqos\\bdqosprobe.cpp", "bdQoSProbe::checkHostProbes", 0x3A9u, "Only received one packet from %s. Timing this request out", str);
        v15 = (bdLinkedList<unsigned int>::Node *)bdMemory::allocate(0x18ui64);
        v16 = v15;
        v29 = v15;
        if ( v15 )
          v15->m_data = v3->m_key;
        else
          v16 = NULL;
        if ( m_tail )
        {
          p_m_next = &m_tail->m_next;
          v16->m_next = m_tail->m_next;
          v16->m_prev = m_tail;
          m_next = m_tail->m_next;
          if ( m_next )
          {
            m_next->m_prev = v16;
          }
          else
          {
            bdHandleAssert(1, "node == m_tail", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdlinkedlist.inl", "bdLinkedList<unsigned int>::insertAfter", 0x176u, "bdLinkedList::insertAfter, node has no next entry, but is not the tail.");
            m_tail = v16;
            v27.m_list.m_tail = v16;
          }
          *p_m_next = v16;
        }
        else
        {
          v16->m_next = NULL;
          v16->m_prev = NULL;
          m_head = v16;
          v27.m_list.m_head = v16;
          m_tail = v16;
          v27.m_list.m_tail = v16;
        }
        v27.m_list.m_size = ++m_size;
      }
      if ( v3->m_next )
      {
        v3 = v3->m_next;
        goto LABEL_34;
      }
      v19 = _RSI->m_probesProcessing.m_capacity;
      v20 = ((HIBYTE(v3->m_key) ^ (16777619 * (BYTE2(v3->m_key) ^ (16777619 * ((16777619 * LOBYTE(v3->m_key)) ^ BYTE1(v3->m_key)))))) & (v19 - 1)) + 1;
      if ( (unsigned int)v20 >= v19 )
        break;
      while ( 1 )
      {
        v3 = _RSI->m_probesProcessing.m_map[v20];
        if ( v3 )
          break;
        v20 = (unsigned int)(v20 + 1);
        if ( (unsigned int)v20 >= v19 )
          goto LABEL_33;
      }
    }
LABEL_33:
    v3 = NULL;
    _InterlockedExchangeAdd((volatile signed __int32 *)&_RSI->m_probesProcessing.m_numIterators, 0xFFFFFFFF);
    m_size = v27.m_list.m_size;
    m_tail = v27.m_list.m_tail;
    m_head = v27.m_list.m_head;
LABEL_34:
    ;
  }
  while ( v3 );
  if ( m_size )
  {
    do
    {
      bdHandleAssert(m_size != 0, "getSize() > 0", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdqueue.inl", "bdQueue<unsigned int>::peek", 0x19u, "bdQueue::dequeue, queue empty, can't peek.");
      bdHandleAssert(m_head != NULL, "m_head != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdlinkedlist.inl", "bdLinkedList<unsigned int>::getHead", 0x42u, "bdLinkedList::GetHead, list is empty so has no head.");
      bdHandleAssert(_RSI->m_probesProcessing.m_numIterators.m_value._My_val == 0, "(m_numIterators == 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdhashmap.inl", "bdHashMap<unsigned int,struct bdQoSProbe::bdQosProbeHost,class bdHashingClass>::remove", 0xA5u, "bdHashMap::remove, another iterator is being held while removing from hashmap");
      v21 = v27.m_list.m_head;
      v22 = _RSI->m_probesProcessing.m_map;
      v23 = v22[(HIBYTE(v27.m_list.m_head->m_data) ^ (16777619 * (BYTE2(v27.m_list.m_head->m_data) ^ (16777619 * (BYTE1(v27.m_list.m_head->m_data) ^ (16777619 * LOBYTE(v27.m_list.m_head->m_data))))))) & (_RSI->m_probesProcessing.m_capacity - 1)];
      v24 = NULL;
      if ( v23 )
      {
        while ( v27.m_list.m_head->m_data != v23->m_key )
        {
          v24 = v23;
          v23 = v23->m_next;
          if ( !v23 )
            goto LABEL_44;
        }
        v25 = v23->m_next;
        if ( v24 )
          v24->m_next = v25;
        else
          v22[(HIBYTE(v27.m_list.m_head->m_data) ^ (16777619 * (BYTE2(v27.m_list.m_head->m_data) ^ (16777619 * (BYTE1(v27.m_list.m_head->m_data) ^ (16777619 * LOBYTE(v27.m_list.m_head->m_data))))))) & (_RSI->m_probesProcessing.m_capacity - 1)] = v25;
        bdMemory::deallocate(v23);
        --_RSI->m_probesProcessing.m_size;
      }
LABEL_44:
      bdHandleAssert(m_size != 0, "getSize() > 0", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdqueue.inl", "bdQueue<unsigned int>::dequeue", 0x12u, "bdQueue::dequeue, queue empty, can't dequeue.");
      m_head = v21->m_next;
      v27.m_list.m_head = m_head;
      if ( v21 == v27.m_list.m_tail )
        v27.m_list.m_tail = v21->m_prev;
      else
        m_head->m_prev = v21->m_prev;
      bdMemory::deallocate(v21);
      v12 = v27.m_list.m_size == 1;
      m_size = --v27.m_list.m_size;
    }
    while ( !v12 );
  }
LABEL_48:
  if ( m_head )
  {
    do
    {
      v26 = m_head->m_next;
      bdMemory::deallocate(m_head);
      m_head = v26;
    }
    while ( v26 );
  }
}

/*
==============
bdQoSProbe::disableListener
==============
*/
void bdQoSProbe::disableListener(bdQoSProbe *this)
{
  this->m_listenState = BD_QOS_DISABLED;
  bdQoSReplyPacket::setEnabled(&this->m_replyData, 0);
}

/*
==============
bdQoSProbe::enableListener
==============
*/
void bdQoSProbe::enableListener(bdQoSProbe *this)
{
  this->m_listenState = BD_QOS_ENABLED;
  bdQoSReplyPacket::setEnabled(&this->m_replyData, 1);
}

/*
==============
bdQoSProbe::findHostStats
==============
*/
char bdQoSProbe::findHostStats(bdQoSProbe *this, const unsigned int *secID, unsigned int *index)
{
  __int64 v3; 
  bool v7; 

  v3 = 0i64;
  *index = 0;
  if ( !this->m_statsPerSession.m_size )
    return 0;
  v7 = this->m_statsPerSession.m_size != 0;
  while ( 1 )
  {
    bdHandleAssert(v7, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<struct bdQoSHostStats>::operator []", 0x68u, "bdArray<T>::operator[], rangecheck failed");
    if ( this->m_statsPerSession.m_data[v3].m_secID == *secID )
      break;
    v3 = *index + 1;
    *index = v3;
    v7 = (unsigned int)v3 < this->m_statsPerSession.m_size;
    if ( (unsigned int)v3 >= this->m_statsPerSession.m_size )
      return 0;
  }
  return 1;
}

/*
==============
bdQoSProbe::getListenStats
==============
*/
bool bdQoSProbe::getListenStats(bdQoSProbe *this, const bdSecurityID *securityID, bdQoSHostStats *stats)
{
  __int64 v3; 
  int v6; 
  bool v7; 
  bool result; 

  v3 = 0i64;
  _R14 = stats;
  v6 = 0;
  if ( securityID )
    v6 = *(_DWORD *)securityID->ab;
  if ( !this->m_statsPerSession.m_size )
    return 0;
  v7 = this->m_statsPerSession.m_size != 0;
  while ( 1 )
  {
    bdHandleAssert(v7, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<struct bdQoSHostStats>::operator []", 0x68u, "bdArray<T>::operator[], rangecheck failed");
    if ( this->m_statsPerSession.m_data[v3].m_secID == v6 )
      break;
    v3 = (unsigned int)(v3 + 1);
    v7 = (unsigned int)v3 < this->m_statsPerSession.m_size;
    if ( (unsigned int)v3 >= this->m_statsPerSession.m_size )
      return 0;
  }
  bdHandleAssert((unsigned int)v3 < this->m_statsPerSession.m_size, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<struct bdQoSHostStats>::operator []", 0x68u, "bdArray<T>::operator[], rangecheck failed");
  _RCX = this->m_statsPerSession.m_data;
  _RDX = 9 * v3;
  result = 1;
  __asm
  {
    vmovups ymm0, ymmword ptr [rcx+rdx*8]
    vmovups ymmword ptr [r14], ymm0
    vmovups ymm1, ymmword ptr [rcx+rdx*8+20h]
    vmovups ymmword ptr [r14+20h], ymm1
    vmovsd  xmm0, qword ptr [rcx+rdx*8+40h]
    vmovsd  qword ptr [r14+40h], xmm0
  }
  return result;
}

/*
==============
bdQoSProbe::getPacketSendSize
==============
*/
void bdQoSProbe::getPacketSendSize(bdQoSProbe *this, unsigned int serializedSize, unsigned int *numPackets, unsigned int *totalSize)
{
  unsigned int v4; 

  v4 = this->m_useMultiplePacketsPerProbe + 1;
  *numPackets = v4;
  *totalSize = v4 * (serializedSize + 28);
}

/*
==============
bdQoSProbe::handleReply
==============
*/
char bdQoSProbe::handleReply(bdQoSProbe *this, bdQoSReplyPacket *packet, bdAddr *addr, unsigned int packetSize)
{
  unsigned int v10; 
  unsigned int Id; 
  bdHashMap<unsigned int,bdQoSProbe::bdQoSProbeEntryWrapper,bdHashingClass>::Node *v12; 
  unsigned int v14; 
  bdHashMap<unsigned int,bdQoSProbe::bdQoSProbeEntryWrapper,bdHashingClass>::Node *v15; 
  char v16; 
  char v17; 
  void *iterator[3]; 
  bdQoSProbe::bdQoSProbeEntryWrapper entry; 

  iterator[1] = (void *)-2i64;
  _RBX = NULL;
  v10 = this->m_useMultiplePacketsPerProbe + 1;
  if ( this->m_status == BD_QOS_PROBE_UNINITIALIZED )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/qos", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdqos\\bdqosprobe.cpp", "bdQoSProbe::handleReply", 0x275u, "Cannot handle request when in uninitialized state");
    return 0;
  }
  Id = bdQoSReplyPacket::getId(packet);
  if ( !this->m_probesProbing.m_size || (v12 = this->m_probesProbing.m_map[(HIBYTE(Id) ^ (16777619 * (BYTE2(Id) ^ (16777619 * (BYTE1(Id) ^ (16777619 * (unsigned __int8)Id)))))) & (this->m_probesProbing.m_capacity - 1)]) == NULL )
  {
LABEL_7:
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/qos", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdqos\\bdqosprobe.cpp", "bdQoSProbe::handleReply", 0x2A8u, "Received probe reply with invalid id.");
    return 0;
  }
  while ( Id != v12->m_key )
  {
    v12 = v12->m_next;
    if ( !v12 )
      goto LABEL_7;
  }
  _InterlockedExchangeAdd((volatile signed __int32 *)&this->m_probesProbing.m_numIterators, 1u);
  bdHandleAssert(this->m_probesProbing.m_numIterators.m_value._My_val != 0, "m_numIterators != 0", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdhashmap.inl", "bdHashMap<unsigned int,struct bdQoSProbe::bdQoSProbeEntryWrapper,class bdHashingClass>::releaseIterator", 0x18Au, "bdHashMap::releaseIterator Iterator count reached 0, can't release iterator");
  _InterlockedExchangeAdd((volatile signed __int32 *)&this->m_probesProbing.m_numIterators, 0xFFFFFFFF);
  v14 = bdQoSReplyPacket::getId(packet);
  if ( this->m_probesProbing.m_size )
  {
    v15 = this->m_probesProbing.m_map[(this->m_probesProbing.m_capacity - 1) & (HIBYTE(v14) ^ (16777619 * (BYTE2(v14) ^ (16777619 * (BYTE1(v14) ^ (16777619 * (unsigned __int8)v14))))))];
    if ( v15 )
    {
      while ( v14 != v15->m_key )
      {
        v15 = v15->m_next;
        if ( !v15 )
          goto LABEL_15;
      }
      _InterlockedExchangeAdd((volatile signed __int32 *)&this->m_probesProbing.m_numIterators, 1u);
      _RBX = &v15->m_data;
    }
  }
LABEL_15:
  iterator[0] = _RBX;
  if ( !bdSockAddr::compare(&_RBX->m_realAddr.m_address, &addr->m_address, 1) )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/qos", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdqos\\bdqosprobe.cpp", "bdQoSProbe::handleReply", 0x2A2u, "Received probe reply with spoofed id?");
    return 0;
  }
  ++_RBX->m_currentProbe.m_numPacketsReceived;
  *(double *)&_XMM0 = bdQoSReplyPacket::getElapsedTime(packet);
  __asm
  {
    vmovaps xmm1, xmm0
    vmovss  xmm0, dword ptr [rbx+0DCh]
    vucomiss xmm0, cs:__real@4f000000
  }
  if ( v17 )
    goto LABEL_18;
  __asm { vcomiss xmm0, xmm1 }
  if ( !(v16 | v17) )
LABEL_18:
    __asm { vmovss  dword ptr [rbx+0DCh], xmm1 }
  __asm
  {
    vaddss  xmm0, xmm1, dword ptr [rbx+0D8h]
    vmovss  dword ptr [rbx+0D8h], xmm0
  }
  _RAX = _RBX->m_numRepliesReceived;
  __asm { vmovss  dword ptr [rbx+rax*4+0E0h], xmm1 }
  ++_RBX->m_numRepliesReceived;
  if ( _RBX->m_currentProbe.m_numPacketsReceived < v10 )
  {
    bdStopwatch::start(&_RBX->m_currentProbe.m_timer);
    bdHashMap<unsigned int,bdQoSProbe::bdQoSProbeEntryWrapper,bdHashingClass>::releaseIterator(&this->m_probesProbing, _RBX);
  }
  else
  {
    bdQoSProbe::bdQoSProbeEntryWrapper::bdQoSProbeEntryWrapper(&entry, _RBX);
    bdHashMap<unsigned int,bdQoSProbe::bdQoSProbeEntryWrapper,bdHashingClass>::remove(&this->m_probesProbing, iterator);
    bdHashMap<unsigned int,bdQoSProbe::bdQoSProbeEntryWrapper,bdHashingClass>::releaseIterator(&this->m_probesProbing, iterator[0]);
    bdQoSProbe::singleProbeComplete(this, packet, &entry, packetSize);
    bdQoSTelemetry::setResult(&entry.m_telemetry, BD_SUCCESS);
    bdTelemetry::addQoS(&entry.m_telemetry);
    bdQoSProbe::bdQoSProbeEntryWrapper::~bdQoSProbeEntryWrapper(&entry);
  }
  return 1;
}

/*
==============
bdQoSProbe::handleRequest
==============
*/
bool bdQoSProbe::handleRequest(bdQoSProbe *this, bdQoSRequestPacket *packet, bdAddr *addr, int packetSize)
{
  bool v7; 
  __int64 v9; 
  unsigned int SecId; 
  unsigned int m_size; 
  int v12; 
  unsigned int v13; 
  unsigned int v14; 
  bdServiceBandwidthArbitrator *m_bandArb; 
  unsigned int SerializedSize; 
  bool v17; 
  bool RequestingData; 
  unsigned int v19; 
  unsigned int v20; 
  bdQoSProbe::bdQosProbeHost probe; 

  v7 = bdQoSProbe::processRequestPackets(this, packet, addr, packetSize);
  if ( this->m_listenState == BD_QOS_OFF )
    return 0;
  if ( this->m_status == BD_QOS_PROBE_UNINITIALIZED )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/qos", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdqos\\bdqosprobe.cpp", "bdQoSProbe::handleRequest", 0x254u, "Cannot handle request when in uninitialized state");
    return 0;
  }
  v9 = 0i64;
  if ( !bdServiceBandwidthArbitrator::allowedSend(this->m_bandArb, 0x1Cu) )
    goto LABEL_9;
  SecId = bdQoSRequestPacket::getSecId(packet);
  m_size = this->m_secids.m_size;
  v12 = 0;
  if ( !m_size )
    goto LABEL_9;
  while ( SecId != this->m_secids.m_data[v12] )
  {
    if ( ++v12 >= m_size )
      goto LABEL_9;
  }
  m_bandArb = this->m_bandArb;
  SerializedSize = bdQoSReplyPacket::getSerializedSize(&this->m_replyData);
  if ( bdServiceBandwidthArbitrator::allowedSend(m_bandArb, SerializedSize + 28) && !this->m_useMultiplePacketsPerProbe )
  {
    bdQoSProbe::bdQosProbeHost::bdQosProbeHost(&probe);
    probe.m_id = bdQoSRequestPacket::getId(packet);
    probe.m_secid = bdQoSRequestPacket::getSecId(packet);
    probe.m_probeTimestamp = bdQoSRequestPacket::getTimestamp(packet);
    probe.m_needToSendData = bdQoSRequestPacket::getRequestingData(packet);
    v17 = bdQoSProbe::sendReply(this, addr, &probe);
    RequestingData = bdQoSRequestPacket::getRequestingData(packet);
    v19 = bdQoSRequestPacket::getSecId(packet);
    bdQoSProbe::logProbeRequests(this, v19, RequestingData);
    return v17;
  }
  else
  {
LABEL_9:
    v13 = bdQoSRequestPacket::getSecId(packet);
    v14 = this->m_secids.m_size;
    if ( v14 )
    {
      while ( v13 != this->m_secids.m_data[v9] )
      {
        v9 = (unsigned int)(v9 + 1);
        if ( (unsigned int)v9 >= v14 )
          goto LABEL_12;
      }
    }
    else
    {
LABEL_12:
      v20 = bdQoSRequestPacket::getSecId(packet);
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/qos", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdqos\\bdqosprobe.cpp", "bdQoSProbe::handleRequest", 0x268u, "Received a packet with invalid security ID. Dropping. %u", v20);
    }
    return v7;
  }
}

/*
==============
bdQoSProbe::init
==============
*/
bool bdQoSProbe::init(bdQoSProbe *this, bdSocket *socket, bdNATTravClient *natTrav, bdServiceBandwidthArbitrator *bandArb, bdRoutingLayer *routingLayer)
{
  bool result; 

  if ( this->m_status )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdSocket/qos", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdqos\\bdqosprobe.cpp", "bdQoSProbe::init", 0x45u, "Cannot call init multiple times.");
    return 0;
  }
  if ( !socket )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdSocket/qos", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdqos\\bdqosprobe.cpp", "bdQoSProbe::init", 0x4Au, "A valid socket pointer is required by this class");
    return 0;
  }
  if ( !natTrav )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdSocket/qos", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdqos\\bdqosprobe.cpp", "bdQoSProbe::init", 0x4Fu, "A valid NAT trav pointer is required by this class");
    return 0;
  }
  if ( !bandArb )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdSocket/qos", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdqos\\bdqosprobe.cpp", "bdQoSProbe::init", 0x54u, "A valid service bandwidth arbitrator pointer is required by this class");
    return 0;
  }
  if ( !routingLayer )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdSocket/qos", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdqos\\bdqosprobe.cpp", "bdQoSProbe::init", 0x59u, "A valid relay layer pointer is required by this class");
    return 0;
  }
  this->m_maxBandwidth = 0x4000;
  this->m_socket = socket;
  this->m_natTrav = natTrav;
  this->m_routingLayer = routingLayer;
  this->m_bandArb = bandArb;
  this->m_nextProbeId = 0;
  bdMemory::deallocate(this->m_secids.m_data);
  this->m_secids.m_data = NULL;
  *(_QWORD *)&this->m_secids.m_capacity = 0i64;
  bdMemory::deallocate(this->m_statsPerSession.m_data);
  this->m_statsPerSession.m_data = NULL;
  *(_QWORD *)&this->m_statsPerSession.m_capacity = 0i64;
  this->m_listenState = BD_QOS_OFF;
  this->m_maxRetries = 4;
  this->m_probeTimeout = 0.89999998;
  this->m_maxConcurrentProbes = 8;
  this->m_hostSideTimeout = 0.44999999;
  this->m_useMultiplePacketsPerProbe = 0;
  bdGlobalStopwatch::start(&this->m_probingTimer);
  bdServiceBandwidthArbitrator::reset(this->m_bandArb);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rcx
    vmulss  xmm1, xmm0, cs:__real@3e4ccccd
    vcvttss2si rdx, xmm1; bytes
  }
  bdServiceBandwidthArbitrator::addSliceQuota(this->m_bandArb, _RDX);
  result = 1;
  this->m_status = BD_QOS_PROBE_INITIALIZED;
  return result;
}

/*
==============
bdQoSProbe::isInitialized
==============
*/
bool bdQoSProbe::isInitialized(bdQoSProbe *this)
{
  return this->m_status != BD_QOS_PROBE_UNINITIALIZED;
}

/*
==============
bdQoSProbe::isListening
==============
*/
bool bdQoSProbe::isListening(bdQoSProbe *this)
{
  return this->m_listenState == BD_QOS_ENABLED;
}

/*
==============
bdQoSProbe::isProbing
==============
*/
bool bdQoSProbe::isProbing(bdQoSProbe *this)
{
  return (int)this->m_probesProbing.m_size > 0 || (int)this->m_probesResolving.m_size > 0;
}

/*
==============
bdQoSProbe::listen
==============
*/
char bdQoSProbe::listen(bdQoSProbe *this, const bdFastArray<bdSecurityID> *secids, unsigned __int8 *data, unsigned int dataSize)
{
  __int64 i; 
  bdSecurityID secid; 

  if ( !bdQoSReplyPacket::setData(&this->m_replyData, data, dataSize) )
    return 0;
  for ( i = 0i64; (unsigned int)i < secids->m_size; i = (unsigned int)(i + 1) )
  {
    bdSecurityID::bdSecurityID(&secid);
    if ( (unsigned int)i < secids->m_size )
      secid = secids->m_data[i];
    bdQoSProbe::registerSecId(this, &secid);
    bdSecurityID::~bdSecurityID(&secid);
  }
  this->m_listenState = BD_QOS_ENABLED;
  bdQoSReplyPacket::setEnabled(&this->m_replyData, 1);
  bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/qos", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdqos\\bdqosprobe.cpp", "bdQoSProbe::listen", 0x2CEu, "Enabled QoS listener for multiple security IDs.");
  return 1;
}

/*
==============
bdQoSProbe::listen
==============
*/
char bdQoSProbe::listen(bdQoSProbe *this, const bdSecurityID *secid, unsigned __int8 *data, unsigned int dataSize)
{
  if ( !bdQoSReplyPacket::setData(&this->m_replyData, data, dataSize) )
    return 0;
  bdQoSProbe::registerSecId(this, secid);
  this->m_listenState = BD_QOS_ENABLED;
  bdQoSReplyPacket::setEnabled(&this->m_replyData, 1);
  bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/qos", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdqos\\bdqosprobe.cpp", "bdQoSProbe::listen", 0x2B8u, "Enabled QoS listener.");
  return 1;
}

/*
==============
bdQoSProbe::logProbeDiscards
==============
*/
void bdQoSProbe::logProbeDiscards(bdQoSProbe *this, unsigned int secID)
{
  __int64 v2; 
  bool v5; 
  unsigned int v6; 

  v2 = 0i64;
  if ( this->m_statsPerSession.m_size )
  {
    v5 = this->m_statsPerSession.m_size != 0;
    while ( 1 )
    {
      bdHandleAssert(v5, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<struct bdQoSHostStats>::operator []", 0x68u, "bdArray<T>::operator[], rangecheck failed");
      if ( this->m_statsPerSession.m_data[v2].m_secID == secID )
        break;
      v2 = (unsigned int)(v2 + 1);
      v5 = (unsigned int)v2 < this->m_statsPerSession.m_size;
      if ( (unsigned int)v2 >= this->m_statsPerSession.m_size )
        goto LABEL_5;
    }
    bdHandleAssert((unsigned int)v2 < this->m_statsPerSession.m_size, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<struct bdQoSHostStats>::operator []", 0x68u, "bdArray<T>::operator[], rangecheck failed");
    ++this->m_statsPerSession.m_data[v2].m_numSlotsFullDiscards;
  }
  else
  {
LABEL_5:
    v6 = secID;
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/qos", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdqos\\bdqosprobe.cpp", "bdQoSProbe::logProbeDiscards", 0x427u, "Can't log probe data for secID %u", v6);
  }
}

/*
==============
bdQoSProbe::logProbeReplyFailures
==============
*/
void bdQoSProbe::logProbeReplyFailures(bdQoSProbe *this, unsigned int secID, bool sendingData)
{
  __int64 v3; 
  bool v7; 

  v3 = 0i64;
  if ( this->m_statsPerSession.m_size )
  {
    v7 = this->m_statsPerSession.m_size != 0;
    while ( 1 )
    {
      bdHandleAssert(v7, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<struct bdQoSHostStats>::operator []", 0x68u, "bdArray<T>::operator[], rangecheck failed");
      if ( this->m_statsPerSession.m_data[v3].m_secID == secID )
        break;
      v3 = (unsigned int)(v3 + 1);
      v7 = (unsigned int)v3 < this->m_statsPerSession.m_size;
      if ( (unsigned int)v3 >= this->m_statsPerSession.m_size )
        goto LABEL_5;
    }
    bdHandleAssert((unsigned int)v3 < this->m_statsPerSession.m_size, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<struct bdQoSHostStats>::operator []", 0x68u, "bdArray<T>::operator[], rangecheck failed");
    if ( sendingData )
    {
      ++this->m_statsPerSession.m_data[v3].m_numDataRepliesFailed;
      bdHandleAssert((unsigned int)v3 < this->m_statsPerSession.m_size, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<struct bdQoSHostStats>::operator []", 0x68u, "bdArray<T>::operator[], rangecheck failed");
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/qos", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdqos\\bdqosprobe.cpp", "bdQoSProbe::logProbeReplyFailures", 0x410u, "[QOS] Data reply failure #%ld\n", this->m_statsPerSession.m_data[v3].m_numDataRepliesFailed);
    }
    else
    {
      ++this->m_statsPerSession.m_data[v3].m_numProbeRepliesFailed;
      bdHandleAssert((unsigned int)v3 < this->m_statsPerSession.m_size, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<struct bdQoSHostStats>::operator []", 0x68u, "bdArray<T>::operator[], rangecheck failed");
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/qos", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdqos\\bdqosprobe.cpp", "bdQoSProbe::logProbeReplyFailures", 0x415u, "[QOS] Probe reply failure #%ld\n", this->m_statsPerSession.m_data[v3].m_numProbeRepliesFailed);
    }
  }
  else
  {
LABEL_5:
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/qos", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdqos\\bdqosprobe.cpp", "bdQoSProbe::logProbeReplyFailures", 0x41Au, "Can't log probe data for secID %u", secID);
  }
}

/*
==============
bdQoSProbe::logProbeReplys
==============
*/
void bdQoSProbe::logProbeReplys(bdQoSProbe *this, unsigned int secID, bool sendingData)
{
  __int64 v3; 
  bool v7; 
  __int64 DataSize; 

  v3 = 0i64;
  if ( this->m_statsPerSession.m_size )
  {
    v7 = this->m_statsPerSession.m_size != 0;
    while ( 1 )
    {
      bdHandleAssert(v7, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<struct bdQoSHostStats>::operator []", 0x68u, "bdArray<T>::operator[], rangecheck failed");
      if ( this->m_statsPerSession.m_data[v3].m_secID == secID )
        break;
      v3 = (unsigned int)(v3 + 1);
      v7 = (unsigned int)v3 < this->m_statsPerSession.m_size;
      if ( (unsigned int)v3 >= this->m_statsPerSession.m_size )
        goto LABEL_5;
    }
    if ( sendingData )
    {
      bdHandleAssert((unsigned int)v3 < this->m_statsPerSession.m_size, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<struct bdQoSHostStats>::operator []", 0x68u, "bdArray<T>::operator[], rangecheck failed");
      ++this->m_statsPerSession.m_data[v3].m_numDataRepliesSent;
      DataSize = bdQoSReplyPacket::getDataSize(&this->m_replyData);
      bdHandleAssert((unsigned int)v3 < this->m_statsPerSession.m_size, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<struct bdQoSHostStats>::operator []", 0x68u, "bdArray<T>::operator[], rangecheck failed");
      this->m_statsPerSession.m_data[v3].m_numDataReplyBytesSent += DataSize;
    }
    else
    {
      bdHandleAssert((unsigned int)v3 < this->m_statsPerSession.m_size, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<struct bdQoSHostStats>::operator []", 0x68u, "bdArray<T>::operator[], rangecheck failed");
      ++this->m_statsPerSession.m_data[v3].m_numProbeRepliesSent;
    }
  }
  else
  {
LABEL_5:
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/qos", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdqos\\bdqosprobe.cpp", "bdQoSProbe::logProbeReplys", 0x404u, "Can't log probe data for secID %u", secID);
  }
}

/*
==============
bdQoSProbe::logProbeRequests
==============
*/
void bdQoSProbe::logProbeRequests(bdQoSProbe *this, unsigned int secID, bool requestingData)
{
  __int64 v3; 
  bool v7; 

  v3 = 0i64;
  if ( this->m_statsPerSession.m_size )
  {
    v7 = this->m_statsPerSession.m_size != 0;
    while ( 1 )
    {
      bdHandleAssert(v7, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<struct bdQoSHostStats>::operator []", 0x68u, "bdArray<T>::operator[], rangecheck failed");
      if ( this->m_statsPerSession.m_data[v3].m_secID == secID )
        break;
      v3 = (unsigned int)(v3 + 1);
      v7 = (unsigned int)v3 < this->m_statsPerSession.m_size;
      if ( (unsigned int)v3 >= this->m_statsPerSession.m_size )
        goto LABEL_5;
    }
    bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/qos", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdqos\\bdqosprobe.cpp", "bdQoSProbe::logProbeRequests", 0x3EDu, "log probe data for secID %u", secID);
    bdHandleAssert((unsigned int)v3 < this->m_statsPerSession.m_size, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<struct bdQoSHostStats>::operator []", 0x68u, "bdArray<T>::operator[], rangecheck failed");
    if ( requestingData )
      ++this->m_statsPerSession.m_data[v3].m_numDataRequestsReceived;
    else
      ++this->m_statsPerSession.m_data[v3].m_numProbesReceived;
  }
  else
  {
LABEL_5:
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/qos", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdqos\\bdqosprobe.cpp", "bdQoSProbe::logProbeRequests", 0x3F2u, "Can't log probe data for secID %u", secID);
  }
}

/*
==============
bdQoSProbe::onNATAddrDiscovery
==============
*/
void bdQoSProbe::onNATAddrDiscovery(bdQoSProbe *this, bdReference<bdCommonAddr> remote, const bdAddr *realAddr)
{
  bdCommonAddr *v4; 
  bdReference<bdCommonAddr> remotea; 

  v4 = (bdCommonAddr *)remote.m_ptr->__vftable;
  remotea.m_ptr = v4;
  if ( v4 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v4->m_refCount, 1u);
  if ( !bdQoSProbe::setProbeAsProbing(this, (bdReference<bdCommonAddr>)&remotea, realAddr, 0) )
    bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/qos", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdqos\\bdqosprobe.cpp", "bdQoSProbe::onNATAddrDiscovery", 0x125u, "Received NAT Traversal success for unrecognized address.");
  if ( remote.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&remote.m_ptr->__vftable[1], 0xFFFFFFFF) == 1 )
  {
    if ( remote.m_ptr->__vftable )
      (*(void (__fastcall **)(bdCommonAddr_vtbl *, __int64))remote.m_ptr->~bdReferencable)(remote.m_ptr->__vftable, 1i64);
    remote.m_ptr->__vftable = NULL;
  }
}

/*
==============
bdQoSProbe::onNATAddrDiscoveryFailed
==============
*/
void bdQoSProbe::onNATAddrDiscoveryFailed(bdQoSProbe *this, bdReference<bdCommonAddr> remote)
{
  bdNetImpl *Instance; 
  bdSocketRouter *SocketRouter; 
  bdRoutingLayer *m_routingLayer; 
  bdCommonAddr *v7; 
  bdCommonAddr *v8; 
  bdReference<bdCommonAddr> remotea; 
  bdReference<bdCommonAddr> v10; 

  Instance = bdSingleton<bdNetImpl>::getInstance();
  SocketRouter = bdNetImpl::getSocketRouter(Instance);
  if ( !SocketRouter->shouldUseRelayIfNatTravFails(SocketRouter, (const bdReference<bdCommonAddr> *)remote.m_ptr) )
    goto LABEL_5;
  bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/qos", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdqos\\bdqosprobe.cpp", "bdQoSProbe::onNATAddrDiscoveryFailed", 0x139u, "Attempting to connect via relay instead.");
  m_routingLayer = this->m_routingLayer;
  v7 = (bdCommonAddr *)remote.m_ptr->__vftable;
  remotea.m_ptr = v7;
  if ( v7 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v7->m_refCount, 1u);
  if ( !bdRoutingLayer::connect(m_routingLayer, (const bdReference<bdCommonAddr>)&remotea, &this->bdRelayAssociationListener) )
  {
LABEL_5:
    v8 = (bdCommonAddr *)remote.m_ptr->__vftable;
    v10.m_ptr = v8;
    if ( v8 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v8->m_refCount, 1u);
    if ( !bdQoSProbe::setProbeAsFailed(this, (bdReference<bdCommonAddr>)&v10, 0) )
      bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/qos", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdqos\\bdqosprobe.cpp", "bdQoSProbe::onNATAddrDiscoveryFailed", 0x145u, "Received NAT Traversal failure for unrecognized address.");
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
bdQoSProbe::onRelayConnectionFailure
==============
*/
void bdQoSProbe::onRelayConnectionFailure(bdQoSProbe *this, const bdReference<bdCommonAddr> remote)
{
  bdQoSProbe *v3; 
  bdCommonAddr *v4; 
  bdReference<bdCommonAddr> remotea; 
  bdCommonAddr *m_ptr; 

  m_ptr = remote.m_ptr;
  v3 = (bdQoSProbe *)((char *)this - 16);
  v4 = (bdCommonAddr *)remote.m_ptr->__vftable;
  remotea.m_ptr = v4;
  if ( v4 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v4->m_refCount, 1u);
  if ( !bdQoSProbe::setProbeAsFailed(v3, (bdReference<bdCommonAddr>)&remotea, 1) )
    bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/qos", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdqos\\bdqosprobe.cpp", "bdQoSProbe::onRelayConnectionFailure", 0x150u, "Received relay connection failure for unrecognized address.");
  if ( remote.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&remote.m_ptr->__vftable[1], 0xFFFFFFFF) == 1 )
  {
    if ( remote.m_ptr->__vftable )
      (*(void (__fastcall **)(bdCommonAddr_vtbl *, __int64))remote.m_ptr->~bdReferencable)(remote.m_ptr->__vftable, 1i64);
    remote.m_ptr->__vftable = NULL;
  }
}

/*
==============
bdQoSProbe::onRelayConnectionSuccess
==============
*/
void bdQoSProbe::onRelayConnectionSuccess(bdQoSProbe *this, const bdReference<bdCommonAddr> remote, const bdAddr *relay)
{
  bdQoSProbe *v4; 
  bdCommonAddr *v5; 
  bdReference<bdCommonAddr> remotea; 
  bdCommonAddr *m_ptr; 

  m_ptr = remote.m_ptr;
  v4 = (bdQoSProbe *)((char *)this - 16);
  v5 = (bdCommonAddr *)remote.m_ptr->__vftable;
  remotea.m_ptr = v5;
  if ( v5 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v5->m_refCount, 1u);
  if ( !bdQoSProbe::setProbeAsProbing(v4, (bdReference<bdCommonAddr>)&remotea, relay, 1) )
    bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/qos", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdqos\\bdqosprobe.cpp", "bdQoSProbe::onRelayConnectionSuccess", 0x12Fu, "Received relay connection success for unrecognized address.");
  if ( remote.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&remote.m_ptr->__vftable[1], 0xFFFFFFFF) == 1 )
  {
    if ( remote.m_ptr->__vftable )
      (*(void (__fastcall **)(bdCommonAddr_vtbl *, __int64))remote.m_ptr->~bdReferencable)(remote.m_ptr->__vftable, 1i64);
    remote.m_ptr->__vftable = NULL;
  }
}

/*
==============
bdQoSProbe::probe
==============
*/
_BOOL8 bdQoSProbe::probe(bdQoSProbe *this, bdReference<bdCommonAddr> addr, const bdSecurityID *id, const bdSecurityKey *key, bdQoSProbeListener *listener, unsigned int numProbes)
{
  bdQoSProbe *v9; 
  bool v10; 
  bdCommonAddr *v11; 
  bdQoSProbe::bdQoSProbeEntryWrapper *v13; 
  bdHashMap<bdReference<bdCommonAddr>,bdArray<bdQoSProbe::bdQoSProbeEntryWrapper>,bdCommonAddrHash> *p_m_probesResolving; 
  bdQoSProbe::bdQoSProbeEntryWrapper *v15; 
  bdHashMap<bdReference<bdCommonAddr>,bdArray<bdQoSProbe::bdQoSProbeEntryWrapper>,bdCommonAddrHash>::Node *v16; 
  unsigned int m_capacity; 
  unsigned int m_size; 
  unsigned int v19; 
  unsigned int v20; 
  __int64 v21; 
  bdQoSProbe::bdQoSProbeEntryWrapper *m_data; 
  __int64 v23; 
  bdNetImpl *Instance; 
  bdSocketRouter *SocketRouter; 
  bool v26; 
  bdCommonAddr_vtbl *v27; 
  bdRoutingLayer *m_routingLayer; 
  bdRelayAssociationListener *v29; 
  bool v30; 
  bdNATTravClient *m_natTrav; 
  bdReference<bdCommonAddr> remote; 
  bdReference<bdCommonAddr> v35; 
  bdArray<bdQoSProbe::bdQoSProbeEntryWrapper> value; 
  __int64 v37; 
  bdCommonAddr *m_ptr; 
  bdQoSProbe::bdQoSProbeEntryWrapper src; 

  v37 = -2i64;
  _R12 = key;
  v9 = this;
  m_ptr = addr.m_ptr;
  v10 = 0;
  if ( this->m_status )
  {
    bdQoSProbe::bdQoSProbeEntryWrapper::bdQoSProbeEntryWrapper(&src);
    if ( (bdQoSProbe::bdQoSProbeEntryWrapper *)addr.m_ptr != &src )
    {
      if ( src.m_addr.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&src.m_addr.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && src.m_addr.m_ptr )
        ((void (__fastcall *)(bdCommonAddr *, __int64))src.m_addr.m_ptr->~bdReferencable)(src.m_addr.m_ptr, 1i64);
      v11 = (bdCommonAddr *)addr.m_ptr->__vftable;
      src.m_addr.m_ptr = v11;
      if ( v11 )
        _InterlockedExchangeAdd((volatile signed __int32 *)&v11->m_refCount, 1u);
    }
    src.m_id = *id;
    __asm
    {
      vmovups xmm0, xmmword ptr [r12]
      vmovups xmmword ptr [rbp+250h+src.m_key.ab], xmm0
    }
    src.m_listener = listener;
    v13 = NULL;
    src.m_numRepliesExpected = numProbes * (v9->m_useMultiplePacketsPerProbe + 1);
    p_m_probesResolving = &v9->m_probesResolving;
    if ( bdHashMap<bdReference<bdCommonAddr>,bdArray<bdQoSProbe::bdQoSProbeEntryWrapper>,bdCommonAddrHash>::containsKey(&v9->m_probesResolving, (const bdReference<bdCommonAddr> *)addr.m_ptr) )
    {
      bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/qos", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdqos\\bdqosprobe.cpp", "bdQoSProbe::probe", 0xBAu, "Got multiple probes for the same address.\n");
      if ( p_m_probesResolving->m_size && (v16 = v9->m_probesResolving.m_map[HIDWORD(addr.m_ptr->__vftable[117].~bdReferencable) & (v9->m_probesResolving.m_capacity - 1)]) != NULL )
      {
        while ( addr.m_ptr->__vftable != (bdCommonAddr_vtbl *)v16->m_key.m_ptr )
        {
          v16 = v16->m_next;
          if ( !v16 )
            goto LABEL_15;
        }
        _InterlockedExchangeAdd((volatile signed __int32 *)&v9->m_probesResolving.m_numIterators, 1u);
      }
      else
      {
LABEL_15:
        v16 = NULL;
      }
      m_capacity = v16->m_data.m_capacity;
      m_size = v16->m_data.m_size;
      v19 = m_capacity - m_size;
      if ( m_capacity == m_size )
      {
        v20 = 1 - v19;
        if ( 1 - v19 <= m_capacity )
          v20 = v16->m_data.m_capacity;
        v21 = m_capacity + v20;
        if ( (_DWORD)v21 )
        {
          v13 = (bdQoSProbe::bdQoSProbeEntryWrapper *)bdMemory::allocate(640 * v21);
          bdArray<bdQoSProbe::bdQoSProbeEntryWrapper>::copyConstructArrayArray(&v16->m_data, v13, v16->m_data.m_data, v16->m_data.m_size);
          m_size = v16->m_data.m_size;
        }
        m_data = v16->m_data.m_data;
        if ( m_size )
        {
          v23 = m_size;
          do
          {
            bdQoSProbe::bdQoSProbeEntryWrapper::~bdQoSProbeEntryWrapper(m_data++);
            --v23;
          }
          while ( v23 );
          m_data = v16->m_data.m_data;
        }
        bdMemory::deallocate(m_data);
        v16->m_data.m_data = v13;
        v16->m_data.m_capacity = v21;
        v9 = this;
      }
      else
      {
        v13 = v16->m_data.m_data;
      }
      bdArray<bdQoSProbe::bdQoSProbeEntryWrapper>::copyConstructArrayArray(&v16->m_data, &v13[v16->m_data.m_size], &src, 1u);
      ++v16->m_data.m_size;
      bdHashMap<bdReference<bdCommonAddr>,bdArray<bdQoSProbe::bdQoSProbeEntryWrapper>,bdCommonAddrHash>::releaseIterator(p_m_probesResolving, v16);
    }
    else
    {
      value.m_capacity = 1;
      value.m_size = 1;
      v15 = (bdQoSProbe::bdQoSProbeEntryWrapper *)bdMemory::allocate(0x280ui64);
      value.m_data = v15;
      bdArray<bdQoSProbe::bdQoSProbeEntryWrapper>::copyConstructArrayObject(&value, v15, &src, 1u);
      bdHashMap<bdReference<bdCommonAddr>,bdArray<bdQoSProbe::bdQoSProbeEntryWrapper>,bdCommonAddrHash>::put(&v9->m_probesResolving, (const bdReference<bdCommonAddr> *)addr.m_ptr, &value);
      bdQoSProbe::bdQoSProbeEntryWrapper::~bdQoSProbeEntryWrapper(v15);
      bdMemory::deallocate(v15);
    }
    Instance = bdSingleton<bdNetImpl>::getInstance();
    SocketRouter = bdNetImpl::getSocketRouter(Instance);
    v26 = SocketRouter->shouldUseRelay(SocketRouter, (const bdReference<bdCommonAddr> *)addr.m_ptr);
    v27 = addr.m_ptr->__vftable;
    if ( v26 )
    {
      m_routingLayer = v9->m_routingLayer;
      v29 = &v9->bdRelayAssociationListener;
      if ( !v9 )
        v29 = NULL;
      remote.m_ptr = (bdCommonAddr *)addr.m_ptr->__vftable;
      if ( v27 )
        _InterlockedExchangeAdd((volatile signed __int32 *)&v27[1], 1u);
      v30 = bdRoutingLayer::connect(m_routingLayer, (const bdReference<bdCommonAddr>)&remote, v29);
    }
    else
    {
      m_natTrav = v9->m_natTrav;
      v35.m_ptr = (bdCommonAddr *)addr.m_ptr->__vftable;
      if ( v27 )
        _InterlockedExchangeAdd((volatile signed __int32 *)&v27[1], 1u);
      v30 = bdNATTravClient::connect(m_natTrav, (bdReference<bdCommonAddr>)&v35, v9, 0);
    }
    v10 = v30;
    if ( src.m_telemetry.m_probeInfo.m_addr.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&src.m_telemetry.m_probeInfo.m_addr.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
    {
      if ( src.m_telemetry.m_probeInfo.m_addr.m_ptr )
        ((void (__fastcall *)(bdCommonAddr *, __int64))src.m_telemetry.m_probeInfo.m_addr.m_ptr->~bdReferencable)(src.m_telemetry.m_probeInfo.m_addr.m_ptr, 1i64);
      src.m_telemetry.m_probeInfo.m_addr.m_ptr = NULL;
    }
    bdSecurityKey::~bdSecurityKey(&src.m_key);
    bdSecurityID::~bdSecurityID(&src.m_id);
    if ( src.m_addr.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&src.m_addr.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && src.m_addr.m_ptr )
      ((void (__fastcall *)(bdCommonAddr *, __int64))src.m_addr.m_ptr->~bdReferencable)(src.m_addr.m_ptr, 1i64);
  }
  if ( addr.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&addr.m_ptr->__vftable[1], 0xFFFFFFFF) == 1 )
  {
    if ( addr.m_ptr->__vftable )
      (*(void (__fastcall **)(bdCommonAddr_vtbl *, __int64))addr.m_ptr->~bdReferencable)(addr.m_ptr->__vftable, 1i64);
    addr.m_ptr->__vftable = NULL;
  }
  return v10;
}

/*
==============
bdQoSProbe::probe
==============
*/
bool bdQoSProbe::probe(bdQoSProbe *this, bdQoSRemoteAddr *addr, bdQoSProbeListener *listener, unsigned int numProbes)
{
  bdCommonAddr *m_ptr; 
  bdReference<bdCommonAddr> addra; 

  m_ptr = addr->m_addr.m_ptr;
  addra.m_ptr = m_ptr;
  if ( m_ptr )
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
  return bdQoSProbe::probe(this, (bdReference<bdCommonAddr>)&addra, &addr->m_id, &addr->m_key, listener, numProbes);
}

/*
==============
bdQoSProbe::probe
==============
*/
char bdQoSProbe::probe(bdQoSProbe *this, const bdArray<bdQoSRemoteAddr> *addrs, bdQoSProbeListener *listener, unsigned int numProbes)
{
  unsigned int i; 
  __int64 v9; 
  bdSecurityKey *p_m_key; 
  bdSecurityID *p_m_id; 
  bdCommonAddr *m_ptr; 
  bdReference<bdCommonAddr> addr; 

  for ( i = 0; i < addrs->m_size; ++i )
  {
    bdHandleAssert(1, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<class bdQoSRemoteAddr>::operator []", 0x70u, "bdArray<T>::operator[], rangecheck failed");
    v9 = i;
    p_m_key = &addrs->m_data[v9].m_key;
    bdHandleAssert(i < addrs->m_size, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<class bdQoSRemoteAddr>::operator []", 0x70u, "bdArray<T>::operator[], rangecheck failed");
    p_m_id = &addrs->m_data[v9].m_id;
    bdHandleAssert(i < addrs->m_size, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<class bdQoSRemoteAddr>::operator []", 0x70u, "bdArray<T>::operator[], rangecheck failed");
    m_ptr = addrs->m_data[v9].m_addr.m_ptr;
    addr.m_ptr = m_ptr;
    if ( m_ptr )
      _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
    if ( !bdQoSProbe::probe(this, (bdReference<bdCommonAddr>)&addr, p_m_id, p_m_key, listener, numProbes) )
      return 0;
  }
  return 1;
}

/*
==============
bdQoSProbe::processRequestPackets
==============
*/
char bdQoSProbe::processRequestPackets(bdQoSProbe *this, const bdQoSRequestPacket *packet, const bdAddr *addr, int packetSize)
{
  char v5; 
  unsigned int SecId; 
  unsigned int m_size; 
  __int64 v11; 
  int v12; 
  unsigned int Hash; 
  bdHashMap<unsigned int,bdQoSProbe::bdQosProbeHost,bdHashingClass>::Node *v15; 
  bool v16; 
  unsigned int v17; 
  unsigned int v24; 
  bool RequestingData; 
  unsigned int v26; 
  unsigned int v28; 
  unsigned int v29; 
  bool v30; 
  unsigned int v31; 
  unsigned int m_maxConcurrentProbes; 
  unsigned int key; 
  bdQoSProbe::bdQosProbeHost value; 
  char str[24]; 

  v5 = 0;
  _R13 = (bdAddr *)addr;
  if ( this->m_listenState == BD_QOS_OFF || this->m_status == BD_QOS_PROBE_UNINITIALIZED || !this->m_useMultiplePacketsPerProbe )
    return 0;
  SecId = bdQoSRequestPacket::getSecId((bdQoSRequestPacket *)packet);
  m_size = this->m_secids.m_size;
  v11 = 0i64;
  v12 = 0;
  if ( !m_size )
    return 0;
  while ( SecId != this->m_secids.m_data[v12] )
  {
    if ( ++v12 >= m_size )
      return 0;
  }
  Hash = bdAddr::getHash(_R13);
  if ( this->m_probesProcessing.m_size && (v15 = this->m_probesProcessing.m_map[(HIBYTE(Hash) ^ (16777619 * (BYTE2(Hash) ^ (16777619 * (BYTE1(Hash) ^ (16777619 * (unsigned __int8)Hash)))))) & (this->m_probesProcessing.m_capacity - 1)]) != NULL )
  {
    while ( Hash != v15->m_key )
    {
      v15 = v15->m_next;
      if ( !v15 )
        goto LABEL_12;
    }
    _InterlockedExchangeAdd((volatile signed __int32 *)&this->m_probesProcessing.m_numIterators, 1u);
    if ( !v15->m_data.m_completed )
    {
      bdStopwatch::start(&v15->m_data.m_holdTimePacket2);
      RequestingData = bdQoSRequestPacket::getRequestingData((bdQoSRequestPacket *)packet);
      v26 = bdQoSRequestPacket::getSecId((bdQoSRequestPacket *)packet);
      bdQoSProbe::logProbeRequests(this, v26, RequestingData);
      *(double *)&_XMM0 = bdStopwatch::getElapsedTimeInSeconds(&v15->m_data.m_timer);
      __asm { vmovaps xmm1, xmm0; timeDiffBetweenPackets }
      v28 = bdQoSProbe::calculateBandwidth(this, *(float *)&_XMM1, packetSize);
      ++v15->m_data.m_numPacketsReceived;
      v15->m_data.m_bandwidth = v28;
      v15->m_data.m_completed = 1;
      v15->m_data.m_needToSendData = bdQoSRequestPacket::getRequestingData((bdQoSRequestPacket *)packet);
      v5 = 1;
    }
    bdHashMap<unsigned int,bdQoSProbe::bdQosProbeHost,bdHashingClass>::releaseIterator(&this->m_probesProcessing, v15);
  }
  else
  {
LABEL_12:
    if ( (signed int)this->m_probesProcessing.m_size < (signed int)this->m_maxConcurrentProbes )
    {
      bdQoSProbe::bdQosProbeHost::bdQosProbeHost(&value);
      bdStopwatch::start(&value.m_holdTimePacket1);
      v16 = bdQoSRequestPacket::getRequestingData((bdQoSRequestPacket *)packet);
      v17 = bdQoSRequestPacket::getSecId((bdQoSRequestPacket *)packet);
      bdQoSProbe::logProbeRequests(this, v17, v16);
      __asm
      {
        vmovups ymm0, ymmword ptr [r13+0]
        vmovups ymm1, ymmword ptr [r13+20h]
        vmovups ymmword ptr [rsp+1A8h+value.m_realAddr.m_address.inUn], ymm0
        vmovups ymm0, ymmword ptr [r13+40h]
        vmovups ymmword ptr [rsp+1A8h+value.m_realAddr.m_address.inUn+20h], ymm1
        vmovups ymm1, ymmword ptr [r13+60h]
        vmovups ymmword ptr [rsp+1A8h+value.m_realAddr.m_address.inUn+40h], ymm0
        vmovups xmm0, xmmword ptr [r13+80h]
        vmovups ymmword ptr [rsp+1A8h+value.m_realAddr.m_address.inUn+60h], ymm1
        vmovsd  xmm1, qword ptr [r13+90h]
        vmovups xmmword ptr [rsp+1A8h+value.m_realAddr.m_relayRoute.m_relayID], xmm0
        vmovsd  qword ptr [rsp+1A8h+value.m_realAddr.m_type], xmm1
      }
      v24 = bdQoSRequestPacket::getSecId((bdQoSRequestPacket *)packet);
      ++value.m_numPacketsReceived;
      value.m_secid = v24;
      bdStopwatch::start(&value.m_timer);
      value.m_id = bdQoSRequestPacket::getId((bdQoSRequestPacket *)packet);
      value.m_probeTimestamp = bdQoSRequestPacket::getTimestamp((bdQoSRequestPacket *)packet);
      key = bdAddr::getHash(_R13);
      bdHashMap<unsigned int,bdQoSProbe::bdQosProbeHost,bdHashingClass>::put(&this->m_probesProcessing, &key, &value);
      return 1;
    }
    v29 = bdQoSRequestPacket::getSecId((bdQoSRequestPacket *)packet);
    if ( this->m_statsPerSession.m_size )
    {
      v30 = this->m_statsPerSession.m_size != 0;
      while ( 1 )
      {
        bdHandleAssert(v30, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<struct bdQoSHostStats>::operator []", 0x68u, "bdArray<T>::operator[], rangecheck failed");
        if ( this->m_statsPerSession.m_data[v11].m_secID == v29 )
          break;
        v11 = (unsigned int)(v11 + 1);
        v30 = (unsigned int)v11 < this->m_statsPerSession.m_size;
        if ( (unsigned int)v11 >= this->m_statsPerSession.m_size )
          goto LABEL_22;
      }
      bdHandleAssert((unsigned int)v11 < this->m_statsPerSession.m_size, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<struct bdQoSHostStats>::operator []", 0x68u, "bdArray<T>::operator[], rangecheck failed");
      ++this->m_statsPerSession.m_data[v11].m_numSlotsFullDiscards;
    }
    else
    {
LABEL_22:
      v31 = v29;
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/qos", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdqos\\bdqosprobe.cpp", "bdQoSProbe::logProbeDiscards", 0x427u, "Can't log probe data for secID %u", v31);
    }
    bdAddr::toString(_R13, str, 0x16ui64);
    m_maxConcurrentProbes = this->m_maxConcurrentProbes;
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/qos", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdqos\\bdqosprobe.cpp", "bdQoSProbe::processRequestPackets", 0x470u, "Cannot process probe from %s as we have already reached max concurrent probes (%d)", str, m_maxConcurrentProbes);
  }
  return v5;
}

/*
==============
bdQoSProbe::pump
==============
*/
void bdQoSProbe::pump(bdQoSProbe *this)
{
  char v7; 
  char v8; 
  bdHashMap<unsigned int,bdQoSProbe::bdQoSProbeEntryWrapper,bdHashingClass>::Node *Iterator; 
  unsigned __int8 *p_m_key; 
  unsigned int m_key; 
  bdCommonAddr *m_ptr; 
  unsigned int m_capacity; 
  __int64 v17; 
  bool v20; 
  bdLinkedList<unsigned int>::Node *m_head; 
  bool v22; 
  const bdQoSProbe::bdQoSProbeEntryWrapper *v23; 
  char m_useMultiplePacketsPerProbe; 
  unsigned int v25; 
  bdLinkedList<unsigned int>::Node *v49; 
  bdHashMap<unsigned int,bdQoSProbe::bdQoSProbeEntryWrapper,bdHashingClass>::Node **m_map; 
  bdHashMap<unsigned int,bdQoSProbe::bdQoSProbeEntryWrapper,bdHashingClass>::Node *v51; 
  bdHashMap<unsigned int,bdQoSProbe::bdQoSProbeEntryWrapper,bdHashingClass>::Node *v52; 
  bdHashMap<unsigned int,bdQoSProbe::bdQoSProbeEntryWrapper,bdHashingClass>::Node *m_next; 
  bdLinkedList<unsigned int>::Node *v54; 
  bdLinkedList<unsigned int>::Node *v55; 
  bool stopProcessing[8]; 
  bdQueue<unsigned int> v60; 
  unsigned int item[2]; 
  bdReference<bdCommonAddr> addr; 
  __int64 v63; 
  bdQoSProbe::bdQoSProbeEntryWrapper v64; 
  bdQoSProbeInfo v65; 
  char buf[1024]; 
  char v67; 
  void *retaddr; 

  _RAX = &retaddr;
  v63 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
  }
  _RDI = this;
  if ( this->m_status == BD_QOS_PROBE_INITIALIZED )
  {
    *(double *)&_XMM0 = bdGlobalStopwatch::getElapsedTimeInSeconds(&this->m_probingTimer);
    __asm
    {
      vmovss  xmm1, cs:__real@3e4ccccd
      vcomiss xmm0, xmm1
    }
    if ( !(v7 | v8) )
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, rax
        vmulss  xmm1, xmm0, xmm1
        vcvttss2si rdx, xmm1; bytes
      }
      bdServiceBandwidthArbitrator::addSliceQuota(_RDI->m_bandArb, _RDX);
      bdGlobalStopwatch::start(&_RDI->m_probingTimer);
    }
    if ( (int)_RDI->m_probesProbing.m_size > 0 && bdServiceBandwidthArbitrator::allowedSend(_RDI->m_bandArb, 0x1Cu) )
    {
      memset(&v60, 0, 20);
      stopProcessing[0] = 0;
      Iterator = (bdHashMap<unsigned int,bdQoSProbe::bdQoSProbeEntryWrapper,bdHashingClass>::Node *)bdHashMap<unsigned int,bdQoSProbe::bdQoSProbeEntryWrapper,bdHashingClass>::getIterator(&_RDI->m_probesProbing);
      if ( Iterator )
      {
        while ( bdServiceBandwidthArbitrator::allowedSend(_RDI->m_bandArb, 0x1Cu) && !stopProcessing[0] )
        {
          p_m_key = (unsigned __int8 *)&Iterator->m_key;
          m_key = Iterator->m_key;
          item[0] = m_key;
          if ( !Iterator->m_data.m_retries )
            goto LABEL_11;
          *(double *)&_XMM0 = bdStopwatch::getElapsedTimeInSeconds(&Iterator->m_data.m_lastTry);
          __asm { vcomiss xmm0, dword ptr [rdi+9Ch] }
          if ( !(v7 | v8) )
          {
LABEL_11:
            if ( Iterator->m_data.m_retries < _RDI->m_maxRetries )
            {
              bdQoSProbe::sendRequest(_RDI, stopProcessing, &Iterator->m_data, m_key);
            }
            else
            {
              m_ptr = Iterator->m_data.m_addr.m_ptr;
              addr.m_ptr = m_ptr;
              if ( m_ptr )
                _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
              bdCommonAddrInfo::getBriefInfo((const bdReference<bdCommonAddr>)&addr, buf, 0x400u);
              bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/qos", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdqos\\bdqosprobe.cpp", "bdQoSProbe::pump", 0x1A1u, " QOS retries exceeded: QoS failed to %s ", buf);
              bdQueue<unsigned int>::enqueue(&v60, item);
            }
          }
          Iterator = Iterator->m_next;
          if ( !Iterator )
          {
            m_capacity = _RDI->m_probesProbing.m_capacity;
            v17 = ((p_m_key[3] ^ (16777619 * (p_m_key[2] ^ (16777619 * (p_m_key[1] ^ (16777619 * *p_m_key)))))) & (m_capacity - 1)) + 1;
            if ( (unsigned int)v17 >= m_capacity )
            {
LABEL_20:
              Iterator = NULL;
              _InterlockedExchangeAdd((volatile signed __int32 *)&_RDI->m_probesProbing.m_numIterators, 0xFFFFFFFF);
              break;
            }
            while ( 1 )
            {
              Iterator = _RDI->m_probesProbing.m_map[v17];
              if ( Iterator )
                break;
              v17 = (unsigned int)(v17 + 1);
              if ( (unsigned int)v17 >= m_capacity )
                goto LABEL_20;
            }
          }
        }
      }
      bdHashMap<unsigned int,bdQoSProbe::bdQoSProbeEntryWrapper,bdHashingClass>::releaseIterator(&_RDI->m_probesProbing, Iterator);
      if ( v60.m_list.m_size )
      {
        __asm
        {
          vxorps  xmm7, xmm7, xmm7
          vmovss  xmm6, cs:__real@4f000000
        }
        do
        {
          v64.m_addr.m_ptr = NULL;
          bdSecurityID::bdSecurityID(&v64.m_id);
          bdSecurityKey::bdSecurityKey(&v64.m_key);
          v64.m_listener = NULL;
          bdAddr::bdAddr(&v64.m_realAddr);
          v64.m_retries = 0;
          bdStopwatch::bdStopwatch(&v64.m_lastTry);
          *(_QWORD *)&v64.m_numRepliesReceived = 0i64;
          __asm { vmovss  [rbp+770h+var_7F0.m_latency], xmm7 }
          memset(&v64.m_bandwidthUp, 0, 24);
          bdStopwatch::bdStopwatch(&v64.m_currentProbe.m_timer);
          __asm
          {
            vmovss  [rbp+770h+var_7F0.m_currentProbe.m_minLatency], xmm6
            vmovss  [rbp+770h+var_7F0.m_currentProbe.m_latency], xmm6
          }
          bdStopwatch::reset(&v64.m_currentProbe.m_timer);
          bdQoSTelemetry::bdQoSTelemetry(&v64.m_telemetry);
          bdStopwatch::reset(&v64.m_lastTry);
          __asm { vmovss  [rbp+770h+var_7F0.m_minLatency], xmm6 }
          v20 = v60.m_list.m_size != 0;
          bdHandleAssert(v60.m_list.m_size != 0, "getSize() > 0", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdqueue.inl", "bdQueue<unsigned int>::peek", 0x19u, "bdQueue::dequeue, queue empty, can't peek.");
          m_head = v60.m_list.m_head;
          v22 = v60.m_list.m_head != NULL;
          bdHandleAssert(v60.m_list.m_head != NULL, "m_head != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdlinkedlist.inl", "bdLinkedList<unsigned int>::getHead", 0x42u, "bdLinkedList::GetHead, list is empty so has no head.");
          v23 = (const bdQoSProbe::bdQoSProbeEntryWrapper *)bdHashMap<unsigned int,bdQoSProbe::bdQoSProbeEntryWrapper,bdHashingClass>::getIterator(&_RDI->m_probesProbing, &m_head->m_data);
          if ( v23 )
          {
            bdQoSProbe::bdQoSProbeEntryWrapper::operator=(&v64, v23);
            bdHandleAssert(_RDI->m_probesProbing.m_numIterators.m_value._My_val != 0, "m_numIterators != 0", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdhashmap.inl", "bdHashMap<unsigned int,struct bdQoSProbe::bdQoSProbeEntryWrapper,class bdHashingClass>::releaseIterator", 0x18Au, "bdHashMap::releaseIterator Iterator count reached 0, can't release iterator");
            _InterlockedExchangeAdd((volatile signed __int32 *)&_RDI->m_probesProbing.m_numIterators, 0xFFFFFFFF);
          }
          m_useMultiplePacketsPerProbe = _RDI->m_useMultiplePacketsPerProbe;
          v25 = v64.m_numRepliesReceived >> m_useMultiplePacketsPerProbe;
          bdQoSProbeInfo::bdQoSProbeInfo(&v65);
          v65.m_failureReason = BD_QOS_PROBE_FAILURE_TIMED_OUT;
          __asm
          {
            vmovups ymm0, ymmword ptr [rbp+770h+var_7F0.m_realAddr.m_address.inUn]
            vmovups ymmword ptr [rbp+770h+var_570.m_realAddr.m_address.inUn], ymm0
            vmovups ymm1, ymmword ptr [rbp+770h+var_7F0.m_realAddr.m_address.inUn+20h]
            vmovups ymmword ptr [rbp+770h+var_570.m_realAddr.m_address.inUn+20h], ymm1
            vmovups ymm0, ymmword ptr [rbp+770h+var_7F0.m_realAddr.m_address.inUn+40h]
            vmovups ymmword ptr [rbp+770h+var_570.m_realAddr.m_address.inUn+40h], ymm0
            vmovups ymm1, ymmword ptr [rbp+770h+var_7F0.m_realAddr.m_address.inUn+60h]
            vmovups ymmword ptr [rbp+770h+var_570.m_realAddr.m_address.inUn+60h], ymm1
            vmovups xmm0, xmmword ptr [rbp+770h+var_7F0.m_realAddr.m_relayRoute.m_relayID]
            vmovups xmmword ptr [rbp+770h+var_570.m_realAddr.m_relayRoute.m_relayID], xmm0
            vmovsd  xmm1, qword ptr [rbp+770h+var_7F0.m_realAddr.m_type]
            vmovsd  qword ptr [rbp+770h+var_570.m_realAddr.m_type], xmm1
          }
          if ( v65.m_addr.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v65.m_addr.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v65.m_addr.m_ptr )
            ((void (__fastcall *)(bdCommonAddr *, __int64))v65.m_addr.m_ptr->~bdReferencable)(v65.m_addr.m_ptr, 1i64);
          v65.m_addr.m_ptr = v64.m_addr.m_ptr;
          if ( v64.m_addr.m_ptr )
            _InterlockedExchangeAdd((volatile signed __int32 *)&v64.m_addr.m_ptr->m_refCount, 1u);
          v65.m_numProbesReceived = v25;
          v65.m_numProbesExpected = v64.m_numRepliesExpected >> m_useMultiplePacketsPerProbe;
          v65.m_numRetries = v64.m_retries;
          __asm
          {
            vmovss  xmm0, [rbp+770h+var_7F0.m_minLatency]
            vmovss  [rbp+770h+var_570.m_minLatency], xmm0
            vxorps  xmm1, xmm1, xmm1
            vcvtsi2ss xmm1, xmm1, rcx
            vmovss  xmm0, [rbp+770h+var_7F0.m_latency]
            vdivss  xmm1, xmm0, xmm1
            vmovss  [rbp+770h+var_570.m_latency], xmm1
            vmovups ymm2, ymmword ptr [rbp+770h+var_7F0.m_replies]
            vmovups ymmword ptr [rbp+770h+var_570.m_replies], ymm2
            vmovups ymm0, ymmword ptr [rbp+770h+var_7F0.m_replies+20h]
            vmovups ymmword ptr [rbp+770h+var_570.m_replies+20h], ymm0
          }
          v65.m_numReplies = v64.m_numRepliesReceived;
          bdReference<bdCommonAddr>::operator=(&v64.m_telemetry.m_probeInfo.m_addr, &v65.m_addr);
          __asm
          {
            vmovups ymm0, ymmword ptr [rbp+770h+var_570.m_realAddr.m_address.inUn]
            vmovups ymmword ptr [rbp+770h+var_7F0.m_telemetry.m_probeInfo.m_realAddr.m_address.inUn], ymm0
            vmovups ymm1, ymmword ptr [rbp+770h+var_570.m_realAddr.m_address.inUn+20h]
            vmovups ymmword ptr [rbp+770h+var_7F0.m_telemetry.m_probeInfo.m_realAddr.m_address.inUn+20h], ymm1
            vmovups ymm0, ymmword ptr [rbp+770h+var_570.m_realAddr.m_address.inUn+40h]
            vmovups ymmword ptr [rbp+770h+var_7F0.m_telemetry.m_probeInfo.m_realAddr.m_address.inUn+40h], ymm0
            vmovups ymm1, ymmword ptr [rbp+770h+var_570.m_realAddr.m_address.inUn+60h]
            vmovups ymmword ptr [rbp+770h+var_7F0.m_telemetry.m_probeInfo.m_realAddr.m_address.inUn+60h], ymm1
            vmovups xmm0, xmmword ptr [rbp+770h+var_570.m_realAddr.m_relayRoute.m_relayID]
            vmovups xmmword ptr [rbp+770h+var_7F0.m_telemetry.m_probeInfo.m_realAddr.m_relayRoute.m_relayID], xmm0
            vmovsd  xmm1, qword ptr [rbp+770h+var_570.m_realAddr.m_type]
            vmovsd  qword ptr [rbp+770h+var_7F0.m_telemetry.m_probeInfo.m_realAddr.m_type], xmm1
            vmovss  xmm0, [rbp+770h+var_570.m_latency]
            vmovss  [rbp+770h+var_7F0.m_telemetry.m_probeInfo.m_latency], xmm0
          }
          v64.m_telemetry.m_probeInfo.m_data = v65.m_data;
          v64.m_telemetry.m_probeInfo.m_dataSize = v65.m_dataSize;
          v64.m_telemetry.m_probeInfo.m_disabled = v65.m_disabled;
          v64.m_telemetry.m_probeInfo.m_bandwidthDown = v65.m_bandwidthDown;
          v64.m_telemetry.m_probeInfo.m_bandwidthUp = v65.m_bandwidthUp;
          __asm
          {
            vmovss  xmm0, [rbp+770h+var_570.m_minLatency]
            vmovss  [rbp+770h+var_7F0.m_telemetry.m_probeInfo.m_minLatency], xmm0
          }
          v64.m_telemetry.m_probeInfo.m_numReplies = v65.m_numReplies;
          __asm
          {
            vmovups ymm0, ymmword ptr [rbp+770h+var_570.m_replies]
            vmovups ymmword ptr [rbp+770h+var_7F0.m_telemetry.m_probeInfo.m_replies], ymm0
            vmovups ymm0, ymmword ptr [rbp+770h+var_570.m_replies+20h]
            vmovups ymmword ptr [rbp+770h+var_7F0.m_telemetry.m_probeInfo.m_replies+20h], ymm0
          }
          v64.m_telemetry.m_probeInfo.m_numProbesReceived = v65.m_numProbesReceived;
          v64.m_telemetry.m_probeInfo.m_numProbesExpected = v65.m_numProbesExpected;
          v64.m_telemetry.m_probeInfo.m_numRetries = v65.m_numRetries;
          v64.m_telemetry.m_probeInfo.m_failureReason = v65.m_failureReason;
          v64.m_listener->onQoSProbeFail(v64.m_listener, &v65);
          bdQoSTelemetry::setResult(&v64.m_telemetry, BD_FAILURE);
          bdTelemetry::addQoS(&v64.m_telemetry);
          bdHandleAssert(v20, "getSize() > 0", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdqueue.inl", "bdQueue<unsigned int>::peek", 0x19u, "bdQueue::dequeue, queue empty, can't peek.");
          bdHandleAssert(v22, "m_head != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdlinkedlist.inl", "bdLinkedList<unsigned int>::getHead", 0x42u, "bdLinkedList::GetHead, list is empty so has no head.");
          bdHandleAssert(_RDI->m_probesProbing.m_numIterators.m_value._My_val == 0, "(m_numIterators == 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdhashmap.inl", "bdHashMap<unsigned int,struct bdQoSProbe::bdQoSProbeEntryWrapper,class bdHashingClass>::remove", 0xA5u, "bdHashMap::remove, another iterator is being held while removing from hashmap");
          v49 = v60.m_list.m_head;
          m_map = _RDI->m_probesProbing.m_map;
          v51 = m_map[(HIBYTE(v60.m_list.m_head->m_data) ^ (16777619 * (BYTE2(v60.m_list.m_head->m_data) ^ (16777619 * ((16777619 * LOBYTE(v60.m_list.m_head->m_data)) ^ BYTE1(v60.m_list.m_head->m_data)))))) & (_RDI->m_probesProbing.m_capacity - 1)];
          v52 = NULL;
          if ( v51 )
          {
            while ( v60.m_list.m_head->m_data != v51->m_key )
            {
              v52 = v51;
              v51 = v51->m_next;
              if ( !v51 )
                goto LABEL_39;
            }
            m_next = v51->m_next;
            if ( v52 )
              v52->m_next = m_next;
            else
              m_map[(HIBYTE(v60.m_list.m_head->m_data) ^ (16777619 * (BYTE2(v60.m_list.m_head->m_data) ^ (16777619 * ((16777619 * LOBYTE(v60.m_list.m_head->m_data)) ^ BYTE1(v60.m_list.m_head->m_data)))))) & (_RDI->m_probesProbing.m_capacity - 1)] = m_next;
            bdQoSProbe::bdQoSProbeEntryWrapper::~bdQoSProbeEntryWrapper(&v51->m_data);
            bdMemory::deallocate(v51);
            --_RDI->m_probesProbing.m_size;
          }
LABEL_39:
          bdHandleAssert(v20, "getSize() > 0", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdqueue.inl", "bdQueue<unsigned int>::dequeue", 0x12u, "bdQueue::dequeue, queue empty, can't dequeue.");
          v54 = v49->m_next;
          v60.m_list.m_head = v54;
          if ( v49 == v60.m_list.m_tail )
            v60.m_list.m_tail = v49->m_prev;
          else
            v54->m_prev = v49->m_prev;
          bdMemory::deallocate(v49);
          --v60.m_list.m_size;
          if ( v65.m_addr.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v65.m_addr.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
          {
            if ( v65.m_addr.m_ptr )
              ((void (__fastcall *)(bdCommonAddr *, __int64))v65.m_addr.m_ptr->~bdReferencable)(v65.m_addr.m_ptr, 1i64);
            v65.m_addr.m_ptr = NULL;
          }
          if ( v64.m_telemetry.m_probeInfo.m_addr.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v64.m_telemetry.m_probeInfo.m_addr.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
          {
            if ( v64.m_telemetry.m_probeInfo.m_addr.m_ptr )
              ((void (__fastcall *)(bdCommonAddr *, __int64))v64.m_telemetry.m_probeInfo.m_addr.m_ptr->~bdReferencable)(v64.m_telemetry.m_probeInfo.m_addr.m_ptr, 1i64);
            v64.m_telemetry.m_probeInfo.m_addr.m_ptr = NULL;
          }
          bdSecurityKey::~bdSecurityKey(&v64.m_key);
          bdSecurityID::~bdSecurityID(&v64.m_id);
          if ( v64.m_addr.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v64.m_addr.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v64.m_addr.m_ptr )
            ((void (__fastcall *)(bdCommonAddr *, __int64))v64.m_addr.m_ptr->~bdReferencable)(v64.m_addr.m_ptr, 1i64);
        }
        while ( v60.m_list.m_size );
      }
      if ( v60.m_list.m_head )
      {
        do
        {
          v55 = v60.m_list.m_head->m_next;
          bdMemory::deallocate(v60.m_list.m_head);
          v60.m_list.m_head = v55;
        }
        while ( v55 );
      }
    }
    bdQoSProbe::checkHostProbes(_RDI);
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/qos", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdqos\\bdqosprobe.cpp", "bdQoSProbe::pump", 0x1D0u, "Cannot pump class before it has been initialized.");
  }
  _R11 = &v67;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
}

/*
==============
bdQoSProbe::quit
==============
*/
bool bdQoSProbe::quit(bdQoSProbe *this)
{
  bool result; 

  if ( this->m_status == BD_QOS_PROBE_UNINITIALIZED )
    return 0;
  bdQoSProbe::cancelProbes(this);
  result = 1;
  this->m_status = BD_QOS_PROBE_UNINITIALIZED;
  this->m_socket = NULL;
  this->m_natTrav = NULL;
  this->m_bandArb = NULL;
  return result;
}

/*
==============
bdQoSProbe::registerSecId
==============
*/
void bdQoSProbe::registerSecId(bdQoSProbe *this, const bdSecurityID *secid)
{
  bdQoSHostStats *v4; 
  unsigned int v5; 
  unsigned int m_capacity; 
  unsigned int v7; 
  unsigned int *m_data; 
  unsigned int v9; 
  unsigned int m_size; 
  unsigned int v11; 
  bool v12; 
  unsigned int v13; 
  unsigned int v14; 
  unsigned int v15; 
  __int64 v16; 
  __int64 v17; 
  unsigned int v23; 
  _BYTE v28[64]; 
  __int64 v29; 

  bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/qos", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdqos\\bdqosprobe.cpp", "bdQoSProbe::registerSecId", 0x2D8u, "Registering new security ID with listener.");
  v4 = NULL;
  v5 = 0;
  if ( secid )
    v5 = *(_DWORD *)secid->ab;
  m_capacity = this->m_secids.m_capacity;
  if ( this->m_secids.m_size == m_capacity )
  {
    v7 = this->m_secids.m_capacity;
    if ( !m_capacity )
      v7 = 1;
    m_data = NULL;
    v9 = m_capacity + v7;
    if ( v9 )
    {
      m_data = (unsigned int *)bdMemory::allocate(4i64 * v9);
      m_size = this->m_secids.m_size;
      if ( m_size )
        memcpy_0(m_data, this->m_secids.m_data, 4i64 * m_size);
    }
    bdMemory::deallocate(this->m_secids.m_data);
    this->m_secids.m_data = m_data;
    this->m_secids.m_capacity = v9;
  }
  else
  {
    m_data = this->m_secids.m_data;
  }
  m_data[this->m_secids.m_size++] = v5;
  memset(v28, 0, sizeof(v28));
  LODWORD(v29) = v5;
  v11 = 0;
  if ( this->m_statsPerSession.m_size )
  {
    v12 = this->m_statsPerSession.m_size != 0;
    while ( 1 )
    {
      bdHandleAssert(v12, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<struct bdQoSHostStats>::operator []", 0x68u, "bdArray<T>::operator[], rangecheck failed");
      if ( this->m_statsPerSession.m_data[v11].m_secID == v5 )
        break;
      v12 = ++v11 < this->m_statsPerSession.m_size;
      if ( v11 >= this->m_statsPerSession.m_size )
        goto LABEL_15;
    }
  }
  else
  {
LABEL_15:
    v13 = this->m_statsPerSession.m_size;
    v14 = this->m_statsPerSession.m_capacity;
    if ( v13 == v14 )
    {
      v15 = this->m_statsPerSession.m_capacity;
      if ( !v14 )
        v15 = 1;
      v16 = v14 + v15;
      if ( (_DWORD)v16 )
      {
        v4 = (bdQoSHostStats *)bdMemory::allocate(72 * v16);
        v17 = this->m_statsPerSession.m_size;
        if ( (_DWORD)v17 )
        {
          _RCX = v4;
          _RDX = (char *)((char *)this->m_statsPerSession.m_data - (char *)v4);
          do
          {
            if ( _RCX )
            {
              __asm
              {
                vmovups ymm0, ymmword ptr [rdx+rcx]
                vmovups ymmword ptr [rcx], ymm0
                vmovups ymm1, ymmword ptr [rdx+rcx+20h]
                vmovups ymmword ptr [rcx+20h], ymm1
                vmovsd  xmm0, qword ptr [rdx+rcx+40h]
                vmovsd  qword ptr [rcx+40h], xmm0
              }
            }
            ++_RCX;
            --v17;
          }
          while ( v17 );
        }
      }
      bdMemory::deallocate(this->m_statsPerSession.m_data);
      this->m_statsPerSession.m_data = v4;
      this->m_statsPerSession.m_capacity = v16;
      v13 = this->m_statsPerSession.m_size;
    }
    else
    {
      v4 = this->m_statsPerSession.m_data;
    }
    v23 = v13;
    if ( &v4[v13] )
    {
      __asm
      {
        vmovups ymm0, [rsp+0B8h+var_68]
        vmovups ymmword ptr [rdx], ymm0
        vmovups ymm1, [rsp+0B8h+var_48]
        vmovups ymmword ptr [rdx+20h], ymm1
        vmovsd  xmm0, [rsp+0B8h+var_28]
        vmovsd  qword ptr [rdx+40h], xmm0
      }
      v23 = this->m_statsPerSession.m_size;
    }
    this->m_statsPerSession.m_size = v23 + 1;
  }
}

/*
==============
bdQoSProbe::sendReply
==============
*/
char bdQoSProbe::sendReply(bdQoSProbe *this, const bdAddr *addr, const bdQoSProbe::bdQosProbeHost *probe)
{
  bool v8; 
  unsigned int v9; 
  bool v11; 
  bool m_needToSendData; 
  unsigned int m_secid; 
  int v14; 
  unsigned int v16; 
  unsigned int v17; 
  unsigned int __formal; 
  unsigned int length[3]; 
  char data[1296]; 
  char v21[1296]; 

  bdQoSReplyPacket::setId(&this->m_replyData, probe->m_id);
  bdQoSReplyPacket::setTimestamp(&this->m_replyData, probe->m_probeTimestamp);
  bdQoSReplyPacket::setBandwidth(&this->m_replyData, probe->m_bandwidth);
  *(double *)&_XMM0 = bdStopwatch::getElapsedTimeInSeconds(&probe->m_holdTimePacket1);
  __asm { vmovaps xmm1, xmm0; hostProcessingTime }
  bdQoSReplyPacket::setHostProcessingTime(&this->m_replyData, *(float *)&_XMM1);
  bdQoSReplyPacket::setHasData(&this->m_replyData, probe->m_needToSendData);
  __formal = 0;
  length[0] = 0;
  v8 = bdQoSReplyPacket::serialize(&this->m_replyData, data, 0x508u, 0, &__formal);
  v9 = __formal;
  if ( this->m_useMultiplePacketsPerProbe )
  {
    if ( !v8 )
    {
LABEL_5:
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/qos", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdqos\\bdqosprobe.cpp", "bdQoSProbe::sendReply", 0x1F0u, "Failed to put the reply packet into a buffer.");
      return 0;
    }
    *(double *)&_XMM0 = bdStopwatch::getElapsedTimeInSeconds(&probe->m_holdTimePacket2);
    __asm { vmovaps xmm1, xmm0; hostProcessingTime }
    bdQoSReplyPacket::setHostProcessingTime(&this->m_replyData, *(float *)&_XMM1);
    v8 = bdQoSReplyPacket::serialize(&this->m_replyData, v21, 0x508u, 0, length);
    v9 += length[0];
  }
  if ( !v8 )
    goto LABEL_5;
  v11 = bdServiceBandwidthArbitrator::allowedSend(this->m_bandArb, v9);
  m_needToSendData = probe->m_needToSendData;
  m_secid = probe->m_secid;
  if ( !v11 )
  {
    bdQoSProbe::logProbeReplyFailures(this, m_secid, m_needToSendData);
    v17 = v9;
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/qos", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdqos\\bdqosprobe.cpp", "bdQoSProbe::sendReply", 0x20Cu, "[QOS] Fail. Unable to send QoS reply with %d bytes of data\n", v17);
    return 0;
  }
  bdQoSProbe::logProbeReplys(this, m_secid, m_needToSendData);
  v14 = bdRoutingLayer::sendTo(this->m_routingLayer, addr, data, __formal);
  if ( !this->m_useMultiplePacketsPerProbe )
    goto LABEL_11;
  if ( v14 > 0 )
  {
    bdQoSProbe::logProbeReplys(this, probe->m_secid, probe->m_needToSendData);
    v14 = bdRoutingLayer::sendTo(this->m_routingLayer, addr, v21, length[0]);
LABEL_11:
    if ( v14 > 0 )
    {
      v16 = v9;
      bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/qos", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdqos\\bdqosprobe.cpp", "bdQoSProbe::sendReply", 0x1FFu, "[QOS] Success. Sent QoS reply with %d bytes of data\n", v16);
      bdServiceBandwidthArbitrator::send(this->m_bandArb, v9);
      return 1;
    }
  }
  bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/qos", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdqos\\bdqosprobe.cpp", "bdQoSProbe::sendReply", 0x205u, "Failed to send reply.");
  return 0;
}

/*
==============
bdQoSProbe::sendRequest
==============
*/
void bdQoSProbe::sendRequest(bdQoSProbe *this, bool *stopProcessing, bdQoSProbe::bdQoSProbeEntryWrapper *entry, unsigned int id)
{
  int v4; 
  unsigned int v8; 
  unsigned int m_numRepliesExpected; 
  bool v10; 
  unsigned int v11; 
  unsigned int v12; 
  unsigned int v13; 
  unsigned int offset; 
  bdQoSRequestPacket v15; 
  char str[24]; 
  char data[1296]; 

  v4 = 0;
  offset = 0;
  v8 = 0;
  if ( entry != (bdQoSProbe::bdQoSProbeEntryWrapper *)-8i64 )
    v8 = *(_DWORD *)entry->m_id.ab;
  bdQoSRequestPacket::bdQoSRequestPacket(&v15, v8, id);
  m_numRepliesExpected = entry->m_numRepliesExpected;
  if ( m_numRepliesExpected )
  {
    if ( m_numRepliesExpected - 1 == entry->m_numRepliesReceived )
      bdQoSRequestPacket::setRequestingData(&v15, 1);
  }
  v10 = bdQoSRequestPacket::serialize(&v15, data, 0x508u, offset, &offset);
  v11 = this->m_useMultiplePacketsPerProbe + 1;
  v12 = v11 * (offset + 28);
  if ( v10 )
  {
    if ( bdServiceBandwidthArbitrator::allowedSend(this->m_bandArb, v12) )
    {
      bdAddr::toString(&entry->m_realAddr, str, 0x16ui64);
      v13 = v8;
      bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/qos", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdqos\\bdqosprobe.cpp", "bdQoSProbe::sendRequest", 0x22Eu, "Sending QOS packet to %s secId %u", str, v13);
      while ( bdRoutingLayer::sendTo(this->m_routingLayer, &entry->m_realAddr, data, offset) >= 0 )
      {
        if ( ++v4 >= v11 )
          goto LABEL_14;
      }
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/qos", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdqos\\bdqosprobe.cpp", "bdQoSProbe::sendRequest", 0x236u, " Failed to send QOS packet");
LABEL_14:
      ++entry->m_retries;
      bdStopwatch::start(&entry->m_lastTry);
      bdServiceBandwidthArbitrator::send(this->m_bandArb, v12);
    }
    else
    {
      *stopProcessing = 1;
      bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/qos", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdqos\\bdqosprobe.cpp", "bdQoSProbe::sendRequest", 0x242u, " bandwidth arbitration prevents the sending of anymore data right now");
    }
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/qos", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdqos\\bdqosprobe.cpp", "bdQoSProbe::sendRequest", 0x226u, "Failed to put the probe packet into a buffer.");
    *stopProcessing = 1;
  }
}

/*
==============
bdQoSProbe::setData
==============
*/
bool bdQoSProbe::setData(bdQoSProbe *this, unsigned __int8 *data, unsigned int dataSize)
{
  return bdQoSReplyPacket::setData(&this->m_replyData, data, dataSize);
}

/*
==============
bdQoSProbe::setMaxBandwidth
==============
*/
void bdQoSProbe::setMaxBandwidth(bdQoSProbe *this, const unsigned int maxBandwidth)
{
  if ( this->m_status )
  {
    this->m_maxBandwidth = maxBandwidth;
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/qos", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdqos\\bdqosprobe.cpp", "bdQoSProbe::setMaxBandwidth", 0x8Cu, "Max bandwidth will be reset when this class is initialized.");
    this->m_maxBandwidth = maxBandwidth;
  }
}

/*
==============
bdQoSProbe::setMaxConcurrentProbes
==============
*/
void bdQoSProbe::setMaxConcurrentProbes(bdQoSProbe *this, unsigned int maxConcurrentProbes)
{
  this->m_maxConcurrentProbes = maxConcurrentProbes;
}

/*
==============
bdQoSProbe::setMaxRetries
==============
*/
void bdQoSProbe::setMaxRetries(bdQoSProbe *this, unsigned int numProbeRetries)
{
  this->m_maxRetries = numProbeRetries;
}

/*
==============
bdQoSProbe::setProbeAsFailed
==============
*/
_BOOL8 bdQoSProbe::setProbeAsFailed(bdQoSProbe *this, bdReference<bdCommonAddr> remote, bool didUseRelay)
{
  const bdReference<bdCommonAddr> *m_ptr; 
  bdHashMap<bdReference<bdCommonAddr>,bdArray<bdQoSProbe::bdQoSProbeEntryWrapper>,bdCommonAddrHash> *p_m_probesResolving; 
  bool v6; 
  bdCommonAddr *v7; 
  unsigned int v8; 
  bdQoSProbe::bdQoSProbeEntryWrapper *m_data; 
  bool v10; 
  bdQoSTelemetry::bdQoSTelemetryResultType v11; 
  bdCommonAddr *v12; 
  bdQoSProbe::bdQoSProbeEntryWrapper *v20; 
  bdQoSProbe::bdQoSProbeEntryWrapper *v21; 
  __int64 m_size; 
  bool v24; 
  bdArray<bdQoSProbe::bdQoSProbeEntryWrapper> value; 
  bdReference<bdCommonAddr> addr; 
  bdCommonAddr *v27; 
  bdHashMap<bdReference<bdCommonAddr>,bdArray<bdQoSProbe::bdQoSProbeEntryWrapper>,bdCommonAddrHash> *v28; 
  __int64 v29; 
  bdCommonAddr *v30; 
  bdQoSProbeInfo v31; 
  char buf[1024]; 

  v29 = -2i64;
  m_ptr = (const bdReference<bdCommonAddr> *)remote.m_ptr;
  v27 = remote.m_ptr;
  v30 = remote.m_ptr;
  p_m_probesResolving = &this->m_probesResolving;
  v28 = &this->m_probesResolving;
  v6 = bdHashMap<bdReference<bdCommonAddr>,bdArray<bdQoSProbe::bdQoSProbeEntryWrapper>,bdCommonAddrHash>::containsKey(&this->m_probesResolving, (const bdReference<bdCommonAddr> *)remote.m_ptr);
  v24 = v6;
  if ( v6 )
  {
    v7 = m_ptr->m_ptr;
    addr.m_ptr = v7;
    if ( v7 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v7->m_refCount, 1u);
    bdCommonAddrInfo::getBriefInfo((const bdReference<bdCommonAddr>)&addr, buf, 0x400u);
    if ( didUseRelay )
      bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/qos", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdqos\\bdqosprobe.cpp", "bdQoSProbe::setProbeAsFailed", 0xFCu, " Relay connect failed to %s . QoS has therefore failed", buf);
    else
      bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/qos", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdqos\\bdqosprobe.cpp", "bdQoSProbe::setProbeAsFailed", 0x100u, " NAT addr discovery failed to %s . QoS has therefore failed", buf);
    value.m_data = NULL;
    *(_QWORD *)&value.m_capacity = 0i64;
    bdHashMap<bdReference<bdCommonAddr>,bdArray<bdQoSProbe::bdQoSProbeEntryWrapper>,bdCommonAddrHash>::get(p_m_probesResolving, m_ptr, &value);
    v8 = 0;
    if ( value.m_size )
    {
      m_data = value.m_data;
      do
      {
        bdQoSProbeInfo::bdQoSProbeInfo(&v31);
        if ( didUseRelay )
        {
          v31.m_failureReason = BD_QOS_PROBE_FAILURE_RELAY;
          v10 = v8 < value.m_size;
          bdHandleAssert(v8 < value.m_size, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<struct bdQoSProbe::bdQoSProbeEntryWrapper>::operator []", 0x68u, "bdArray<T>::operator[], rangecheck failed");
          v11 = 4;
        }
        else
        {
          v31.m_failureReason = BD_QOS_PROBE_FAILURE_NAT_TRAVERSAL;
          v10 = v8 < value.m_size;
          bdHandleAssert(v8 < value.m_size, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<struct bdQoSProbe::bdQoSProbeEntryWrapper>::operator []", 0x68u, "bdArray<T>::operator[], rangecheck failed");
          v11 = BD_FAILURE|BD_SUCCESS;
        }
        bdQoSTelemetry::setResult(&m_data->m_telemetry, v11);
        bdHandleAssert(v10, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<struct bdQoSProbe::bdQoSProbeEntryWrapper>::operator []", 0x68u, "bdArray<T>::operator[], rangecheck failed");
        if ( m_data != (bdQoSProbe::bdQoSProbeEntryWrapper *)&v31 )
        {
          if ( v31.m_addr.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v31.m_addr.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v31.m_addr.m_ptr )
            ((void (__fastcall *)(bdCommonAddr *, __int64))v31.m_addr.m_ptr->~bdReferencable)(v31.m_addr.m_ptr, 1i64);
          v12 = m_data->m_addr.m_ptr;
          v31.m_addr.m_ptr = v12;
          if ( v12 )
            _InterlockedExchangeAdd((volatile signed __int32 *)&v12->m_refCount, 1u);
        }
        bdHandleAssert(v10, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<struct bdQoSProbe::bdQoSProbeEntryWrapper>::operator []", 0x68u, "bdArray<T>::operator[], rangecheck failed");
        _RAX = bdCommonAddr::getPublicAddr(m_data->m_addr.m_ptr);
        __asm
        {
          vmovups ymm0, ymmword ptr [rax]
          vmovups ymmword ptr [rbp+4F0h+var_560.m_realAddr.m_address.inUn], ymm0
          vmovups ymm1, ymmword ptr [rax+20h]
          vmovups ymmword ptr [rbp+4F0h+var_560.m_realAddr.m_address.inUn+20h], ymm1
          vmovups ymm0, ymmword ptr [rax+40h]
          vmovups ymmword ptr [rbp+4F0h+var_560.m_realAddr.m_address.inUn+40h], ymm0
          vmovups ymm1, ymmword ptr [rax+60h]
          vmovups ymmword ptr [rbp+4F0h+var_560.m_realAddr.m_address.inUn+60h], ymm1
          vmovups xmm0, xmmword ptr [rax+80h]
          vmovups xmmword ptr [rbp+4F0h+var_560.m_realAddr.m_relayRoute.m_relayID], xmm0
          vmovsd  xmm1, qword ptr [rax+90h]
          vmovsd  qword ptr [rbp+4F0h+var_560.m_realAddr.m_type], xmm1
        }
        bdHandleAssert(v10, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<struct bdQoSProbe::bdQoSProbeEntryWrapper>::operator []", 0x68u, "bdArray<T>::operator[], rangecheck failed");
        m_data->m_listener->onQoSProbeFail(m_data->m_listener, &v31);
        bdHandleAssert(v10, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<struct bdQoSProbe::bdQoSProbeEntryWrapper>::operator []", 0x68u, "bdArray<T>::operator[], rangecheck failed");
        bdTelemetry::addQoS(&m_data->m_telemetry);
        if ( v31.m_addr.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v31.m_addr.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v31.m_addr.m_ptr )
          ((void (__fastcall *)(bdCommonAddr *, __int64))v31.m_addr.m_ptr->~bdReferencable)(v31.m_addr.m_ptr, 1i64);
        ++v8;
        ++m_data;
      }
      while ( v8 < value.m_size );
      m_ptr = (const bdReference<bdCommonAddr> *)v27;
    }
    bdHashMap<bdReference<bdCommonAddr>,bdArray<bdQoSProbe::bdQoSProbeEntryWrapper>,bdCommonAddrHash>::remove(v28, m_ptr);
    v20 = value.m_data;
    if ( value.m_size )
    {
      v21 = value.m_data;
      m_size = value.m_size;
      do
      {
        bdQoSProbe::bdQoSProbeEntryWrapper::~bdQoSProbeEntryWrapper(v21++);
        --m_size;
      }
      while ( m_size );
    }
    bdMemory::deallocate(v20);
    v6 = v24;
  }
  if ( m_ptr->m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
  {
    if ( m_ptr->m_ptr )
      ((void (__fastcall *)(bdCommonAddr *, __int64))m_ptr->m_ptr->~bdReferencable)(m_ptr->m_ptr, 1i64);
    m_ptr->m_ptr = NULL;
  }
  return v6;
}

/*
==============
bdQoSProbe::setProbeAsProbing
==============
*/
_BOOL8 bdQoSProbe::setProbeAsProbing(bdQoSProbe *this, bdReference<bdCommonAddr> remote, const bdAddr *realAddr, bool didUseRelay)
{
  bdHashMap<bdReference<bdCommonAddr>,bdArray<bdQoSProbe::bdQoSProbeEntryWrapper>,bdCommonAddrHash> *p_m_probesResolving; 
  bool v9; 
  unsigned int v10; 
  bdQoSProbe::bdQoSProbeEntryWrapper *m_data; 
  __int64 m_size; 
  bool v20; 
  unsigned int v28; 
  bool v35; 
  bdQoSProbe::bdQoSProbeEntryWrapper *v43; 
  unsigned int v45; 
  unsigned int v46; 
  unsigned int key[2]; 
  bdArray<bdQoSProbe::bdQoSProbeEntryWrapper> value; 
  bdHashMap<bdReference<bdCommonAddr>,bdArray<bdQoSProbe::bdQoSProbeEntryWrapper>,bdCommonAddrHash> *v49; 
  __int64 v51; 
  bool v56; 

  v51 = -2i64;
  _R14 = realAddr;
  p_m_probesResolving = &this->m_probesResolving;
  v49 = &this->m_probesResolving;
  v9 = bdHashMap<bdReference<bdCommonAddr>,bdArray<bdQoSProbe::bdQoSProbeEntryWrapper>,bdCommonAddrHash>::containsKey(&this->m_probesResolving, (const bdReference<bdCommonAddr> *)remote.m_ptr);
  v56 = v9;
  if ( v9 )
  {
    value.m_data = NULL;
    *(_QWORD *)&value.m_capacity = 0i64;
    bdHashMap<bdReference<bdCommonAddr>,bdArray<bdQoSProbe::bdQoSProbeEntryWrapper>,bdCommonAddrHash>::get(p_m_probesResolving, (const bdReference<bdCommonAddr> *)remote.m_ptr, &value);
    v10 = 0;
    v45 = 0;
    m_data = value.m_data;
    m_size = value.m_size;
    if ( value.m_size )
    {
      _R13 = value.m_data;
      if ( didUseRelay )
      {
        do
        {
          __asm
          {
            vmovups ymm0, ymmword ptr [r14]
            vmovups [rsp+128h+var_B8], ymm0
            vmovups ymm0, ymmword ptr [r14+20h]
            vmovups [rsp+128h+var_98], ymm0
            vmovups ymm0, ymmword ptr [r14+40h]
            vmovups [rsp+128h+var_78], ymm0
            vmovups ymm0, ymmword ptr [r14+60h]
            vmovups [rsp+128h+var_58], ymm0
            vmovups xmm0, xmmword ptr [r14+80h]
            vmovups [rsp+128h+var_D0], xmm0
            vmovsd  xmm0, qword ptr [r14+90h]
            vmovsd  qword ptr [rsp+128h+key], xmm0
          }
          v20 = v10 < (unsigned int)m_size;
          bdHandleAssert(v10 < (unsigned int)m_size, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<struct bdQoSProbe::bdQoSProbeEntryWrapper>::operator []", 0x68u, "bdArray<T>::operator[], rangecheck failed");
          __asm { vmovups ymm0, [rsp+128h+var_B8] }
          _RAX = 40i64;
          __asm
          {
            vmovups ymmword ptr [rax+r13], ymm0
            vmovups ymm1, [rsp+128h+var_98]
            vmovups ymmword ptr [rax+r13+20h], ymm1
            vmovups ymm0, [rsp+128h+var_78]
            vmovups ymmword ptr [rax+r13+40h], ymm0
            vmovups ymm1, [rsp+128h+var_58]
            vmovups ymmword ptr [rax+r13+60h], ymm1
            vmovups xmm0, [rsp+128h+var_D0]
            vmovups xmmword ptr [rax+r13+80h], xmm0
            vmovsd  xmm0, qword ptr [rsp+128h+key]
            vmovsd  qword ptr [rax+r13+90h], xmm0
          }
          bdHandleAssert(v20, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<struct bdQoSProbe::bdQoSProbeEntryWrapper>::operator []", 0x68u, "bdArray<T>::operator[], rangecheck failed");
          key[0] = this->m_nextProbeId;
          this->m_nextProbeId = key[0] + 1;
          bdHashMap<unsigned int,bdQoSProbe::bdQoSProbeEntryWrapper,bdHashingClass>::put(&this->m_probesProbing, key, _R13);
          bdHandleAssert(v20, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<struct bdQoSProbe::bdQoSProbeEntryWrapper>::operator []", 0x68u, "bdArray<T>::operator[], rangecheck failed");
          bdQoSTelemetry::setRelayEstablished(&_R13->m_telemetry, (const bdReference<bdCommonAddr> *)remote.m_ptr, _R14);
          v10 = v45 + 1;
          v45 = v10;
          ++_R13;
        }
        while ( v10 < (unsigned int)m_size );
      }
      else
      {
        v28 = 0;
        v46 = 0;
        do
        {
          __asm
          {
            vmovups ymm0, ymmword ptr [r14]
            vmovups [rsp+128h+var_58], ymm0
            vmovups ymm0, ymmword ptr [r14+20h]
            vmovups [rsp+128h+var_78], ymm0
            vmovups ymm0, ymmword ptr [r14+40h]
            vmovups [rsp+128h+var_98], ymm0
            vmovups ymm0, ymmword ptr [r14+60h]
            vmovups [rsp+128h+var_B8], ymm0
            vmovups xmm0, xmmword ptr [r14+80h]
            vmovups [rsp+128h+var_D0], xmm0
            vmovsd  xmm0, qword ptr [r14+90h]
            vmovsd  qword ptr [rsp+128h+key], xmm0
          }
          v35 = v28 < (unsigned int)m_size;
          bdHandleAssert(v28 < (unsigned int)m_size, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<struct bdQoSProbe::bdQoSProbeEntryWrapper>::operator []", 0x68u, "bdArray<T>::operator[], rangecheck failed");
          __asm { vmovups ymm0, [rsp+128h+var_58] }
          _RAX = 40i64;
          __asm
          {
            vmovups ymmword ptr [rax+r13], ymm0
            vmovups ymm1, [rsp+128h+var_78]
            vmovups ymmword ptr [rax+r13+20h], ymm1
            vmovups ymm0, [rsp+128h+var_98]
            vmovups ymmword ptr [rax+r13+40h], ymm0
            vmovups ymm1, [rsp+128h+var_B8]
            vmovups ymmword ptr [rax+r13+60h], ymm1
            vmovups xmm0, [rsp+128h+var_D0]
            vmovups xmmword ptr [rax+r13+80h], xmm0
            vmovsd  xmm0, qword ptr [rsp+128h+key]
            vmovsd  qword ptr [rax+r13+90h], xmm0
          }
          bdHandleAssert(v35, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<struct bdQoSProbe::bdQoSProbeEntryWrapper>::operator []", 0x68u, "bdArray<T>::operator[], rangecheck failed");
          key[0] = this->m_nextProbeId;
          this->m_nextProbeId = key[0] + 1;
          bdHashMap<unsigned int,bdQoSProbe::bdQoSProbeEntryWrapper,bdHashingClass>::put(&this->m_probesProbing, key, _R13);
          bdHandleAssert(v35, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<struct bdQoSProbe::bdQoSProbeEntryWrapper>::operator []", 0x68u, "bdArray<T>::operator[], rangecheck failed");
          bdQoSTelemetry::setResolved(&_R13->m_telemetry, (const bdReference<bdCommonAddr> *)remote.m_ptr, _R14);
          v28 = v46 + 1;
          v46 = v28;
          ++_R13;
        }
        while ( v28 < (unsigned int)m_size );
      }
      v9 = v56;
      m_data = value.m_data;
    }
    bdHashMap<bdReference<bdCommonAddr>,bdArray<bdQoSProbe::bdQoSProbeEntryWrapper>,bdCommonAddrHash>::remove(v49, (const bdReference<bdCommonAddr> *)remote.m_ptr);
    if ( (_DWORD)m_size )
    {
      v43 = m_data;
      do
      {
        bdQoSProbe::bdQoSProbeEntryWrapper::~bdQoSProbeEntryWrapper(v43++);
        --m_size;
      }
      while ( m_size );
    }
    bdMemory::deallocate(m_data);
  }
  if ( remote.m_ptr->__vftable && !_InterlockedDecrement((volatile signed __int32 *)&remote.m_ptr->__vftable[1]) )
  {
    if ( remote.m_ptr->__vftable )
      (*(void (__fastcall **)(bdCommonAddr_vtbl *, __int64))remote.m_ptr->~bdReferencable)(remote.m_ptr->__vftable, 1i64);
    remote.m_ptr->__vftable = NULL;
  }
  return v9;
}

/*
==============
bdQoSProbe::setProbeTimeout
==============
*/

void __fastcall bdQoSProbe::setProbeTimeout(bdQoSProbe *this, double probeTimeout)
{
  __asm { vmovss  dword ptr [rcx+9Ch], xmm1 }
}

/*
==============
bdQoSProbe::shrinkSecId
==============
*/
__int64 bdQoSProbe::shrinkSecId(bdQoSProbe *this, const bdSecurityID *id)
{
  if ( id )
    return *(unsigned int *)id->ab;
  else
    return 0i64;
}

/*
==============
bdQoSProbe::shutdownListener
==============
*/
void bdQoSProbe::shutdownListener(bdQoSProbe *this)
{
  this->m_listenState = BD_QOS_OFF;
}

/*
==============
bdQoSProbe::singleProbeComplete
==============
*/
void bdQoSProbe::singleProbeComplete(bdQoSProbe *this, bdQoSReplyPacket *packet, bdQoSProbe::bdQoSProbeEntryWrapper *entry, unsigned int packetSize)
{
  char v10; 
  unsigned int v15; 
  unsigned int m_numRepliesReceived; 
  unsigned int v17; 
  bdCommonAddr *m_ptr; 
  unsigned int v26; 
  unsigned int key; 
  __int64 v34; 
  bdQoSProbeInfo __that; 

  v34 = -2i64;
  _RBX = entry;
  *(double *)&_XMM0 = bdStopwatch::getElapsedTimeInSeconds(&entry->m_currentProbe.m_timer);
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vucomiss xmm0, xmm1
  }
  if ( v10 || !this->m_useMultiplePacketsPerProbe )
  {
    LODWORD(_RCX) = -1;
  }
  else
  {
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, rcx
      vdivss  xmm0, xmm1, xmm0
      vcvttss2si rcx, xmm0
    }
  }
  _RBX->m_bandwidthDown += _RCX;
  _RBX->m_bandwidthUp += bdQoSReplyPacket::getBandwidth(packet);
  v15 = this->m_useMultiplePacketsPerProbe + 1;
  m_numRepliesReceived = _RBX->m_numRepliesReceived;
  if ( m_numRepliesReceived < _RBX->m_numRepliesExpected )
  {
    _RBX->m_retries = 0;
    *(_QWORD *)&_RBX->m_currentProbe.m_numPacketsReceived = 0i64;
    *(_QWORD *)&_RBX->m_currentProbe.m_bandwidthDown = 0i64;
    _RBX->m_currentProbe.m_minLatency = 2147483600.0;
    _RBX->m_currentProbe.m_latency = 2147483600.0;
    bdStopwatch::reset(&_RBX->m_currentProbe.m_timer);
    bdStopwatch::reset(&_RBX->m_lastTry);
    key = this->m_nextProbeId;
    this->m_nextProbeId = key + 1;
    bdHashMap<unsigned int,bdQoSProbe::bdQoSProbeEntryWrapper,bdHashingClass>::put(&this->m_probesProbing, &key, _RBX);
  }
  else
  {
    v17 = m_numRepliesReceived / v15;
    bdQoSProbeInfo::bdQoSProbeInfo(&__that);
    __that.m_failureReason = BD_QOS_PROBE_SUCCESS;
    __asm
    {
      vmovups ymm0, ymmword ptr [rbx+28h]
      vmovups ymmword ptr [rsp+190h+__that.m_realAddr.m_address.inUn], ymm0
      vmovups ymm1, ymmword ptr [rbx+48h]
      vmovups ymmword ptr [rsp+190h+__that.m_realAddr.m_address.inUn+20h], ymm1
      vmovups ymm0, ymmword ptr [rbx+68h]
      vmovups ymmword ptr [rsp+190h+__that.m_realAddr.m_address.inUn+40h], ymm0
      vmovups ymm1, ymmword ptr [rbx+88h]
      vmovups ymmword ptr [rbp+90h+__that.m_realAddr.m_address.inUn+60h], ymm1
      vmovups xmm0, xmmword ptr [rbx+0A8h]
      vmovups xmmword ptr [rbp+90h+__that.m_realAddr.m_relayRoute.m_relayID], xmm0
      vmovsd  xmm1, qword ptr [rbx+0B8h]
      vmovsd  qword ptr [rbp+90h+__that.m_realAddr.m_type], xmm1
    }
    if ( _RBX != (bdQoSProbe::bdQoSProbeEntryWrapper *)&__that )
    {
      if ( __that.m_addr.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&__that.m_addr.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && __that.m_addr.m_ptr )
        ((void (__fastcall *)(bdCommonAddr *, __int64))__that.m_addr.m_ptr->~bdReferencable)(__that.m_addr.m_ptr, 1i64);
      m_ptr = _RBX->m_addr.m_ptr;
      __that.m_addr.m_ptr = m_ptr;
      if ( m_ptr )
        _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
    }
    __that.m_data = bdQoSReplyPacket::getData(packet);
    __that.m_dataSize = bdQoSReplyPacket::getDataSize(packet);
    __that.m_disabled = !bdQoSReplyPacket::getEnabled(packet);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+0DCh]
      vmovss  [rbp+90h+__that.m_minLatency], xmm0
    }
    v26 = _RBX->m_numRepliesReceived;
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, rax
      vmovss  xmm0, dword ptr [rbx+0D8h]
      vdivss  xmm1, xmm0, xmm1
      vmovss  [rbp+90h+__that.m_latency], xmm1
      vmovups ymm0, ymmword ptr [rbx+0E0h]
      vmovups ymmword ptr [rbp+90h+__that.m_replies], ymm0
      vmovups ymm1, ymmword ptr [rbx+100h]
      vmovups ymmword ptr [rbp+90h+__that.m_replies+20h], ymm1
    }
    __that.m_numReplies = v26;
    __that.m_numProbesReceived = v17;
    __that.m_numProbesExpected = _RBX->m_numRepliesExpected / v15;
    __that.m_numRetries = _RBX->m_retries;
    if ( this->m_useMultiplePacketsPerProbe )
    {
      __that.m_bandwidthUp = _RBX->m_bandwidthUp / v17;
      __that.m_bandwidthDown = _RBX->m_bandwidthDown / v17;
    }
    else
    {
      *(_QWORD *)&__that.m_bandwidthDown = -1i64;
    }
    bdQoSProbeInfo::operator=(&_RBX->m_telemetry.m_probeInfo, &__that);
    _RBX->m_listener->onQoSProbeSuccess(_RBX->m_listener, &__that);
    if ( __that.m_addr.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&__that.m_addr.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
    {
      if ( __that.m_addr.m_ptr )
        ((void (__fastcall *)(bdCommonAddr *, __int64))__that.m_addr.m_ptr->~bdReferencable)(__that.m_addr.m_ptr, 1i64);
    }
  }
}

/*
==============
bdQoSProbe::useMultiplePacketsPerProbe
==============
*/
void bdQoSProbe::useMultiplePacketsPerProbe(bdQoSProbe *this, bool useMultiplePacketsPerProbe)
{
  this->m_useMultiplePacketsPerProbe = useMultiplePacketsPerProbe;
}

