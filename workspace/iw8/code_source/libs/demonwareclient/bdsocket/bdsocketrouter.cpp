/*
==============
bdSocketRouter::updateAddrHandle
==============
*/

bool __fastcall bdSocketRouter::updateAddrHandle(bdSocketRouter *this, bdReference<bdAddrHandle> addrHandle, bdReference<bdCommonAddr> newCommonAddr)
{
  return ?updateAddrHandle@bdSocketRouter@@QEAA_NV?$bdReference@VbdAddrHandle@@@@V?$bdReference@VbdCommonAddr@@@@@Z(this, addrHandle, newCommonAddr);
}

/*
==============
bdSocketRouter::unregisterInterceptor
==============
*/

void __fastcall bdSocketRouter::unregisterInterceptor(bdSocketRouter *this, bdPacketInterceptor *const interceptor)
{
  ?unregisterInterceptor@bdSocketRouter@@QEAAXQEAVbdPacketInterceptor@@@Z(this, interceptor);
}

/*
==============
bdSocketRouter::getPayloadSize
==============
*/

unsigned int __fastcall bdSocketRouter::getPayloadSize(bdSocketRouter *this, const bdReference<bdAddrHandle> addrHandle)
{
  return ?getPayloadSize@bdSocketRouter@@UEBAIV?$bdReference@VbdAddrHandle@@@@@Z(this, addrHandle);
}

/*
==============
bdSocketRouter::disconnect
==============
*/

bool __fastcall bdSocketRouter::disconnect(bdSocketRouter *this, bdReference<bdAddrHandle> *addrHandle)
{
  return ?disconnect@bdSocketRouter@@UEAA_NAEAV?$bdReference@VbdAddrHandle@@@@@Z(this, addrHandle);
}

/*
==============
bdSocketRouter::getLocalCommonAddr
==============
*/

bdReference<bdCommonAddr> *__fastcall bdSocketRouter::getLocalCommonAddr(bdSocketRouter *this, bdReference<bdCommonAddr> *result)
{
  return ?getLocalCommonAddr@bdSocketRouter@@QEBA?AV?$bdReference@VbdCommonAddr@@@@XZ(this, result);
}

/*
==============
bdSocketRouter::setupIntroducers
==============
*/

bool __fastcall bdSocketRouter::setupIntroducers(bdSocketRouter *this, const bdArray<bdAddr> *introducers)
{
  return ?setupIntroducers@bdSocketRouter@@QEAA_NAEBV?$bdArray@VbdAddr@@@@@Z(this, introducers);
}

/*
==============
bdSocketRouter::getNumBoundRelays
==============
*/

unsigned int __fastcall bdSocketRouter::getNumBoundRelays(bdSocketRouter *this)
{
  return ?getNumBoundRelays@bdSocketRouter@@QEAAIXZ(this);
}

/*
==============
bdSocketRouter::getRelayStatus
==============
*/

bdRelayAssociationStatus __fastcall bdSocketRouter::getRelayStatus(bdSocketRouter *this)
{
  return ?getRelayStatus@bdSocketRouter@@UEBA?AW4bdRelayAssociationStatus@@XZ(this);
}

/*
==============
bdSocketRouter::onNATAddrDiscoveryFailed
==============
*/

void __fastcall bdSocketRouter::onNATAddrDiscoveryFailed(bdSocketRouter *this, bdReference<bdCommonAddr> remote)
{
  ?onNATAddrDiscoveryFailed@bdSocketRouter@@UEAAXV?$bdReference@VbdCommonAddr@@@@@Z(this, remote);
}

/*
==============
bdSocketRouter::sendTo
==============
*/

int __fastcall bdSocketRouter::sendTo(bdSocketRouter *this, const bdReference<bdAddrHandle> addrHandle, void *data, const unsigned int length)
{
  return ?sendTo@bdSocketRouter@@UEAAHV?$bdReference@VbdAddrHandle@@@@PEAXI@Z(this, addrHandle, data, length);
}

/*
==============
bdSocketRouter::receiveFrom
==============
*/

int __fastcall bdSocketRouter::receiveFrom(bdSocketRouter *this, bdReference<bdAddrHandle> *addrHandle, void *data, const unsigned int size)
{
  return ?receiveFrom@bdSocketRouter@@UEAAHAEAV?$bdReference@VbdAddrHandle@@@@PEAXI@Z(this, addrHandle, data, size);
}

/*
==============
bdSocketRouter::pump
==============
*/

void __fastcall bdSocketRouter::pump(bdSocketRouter *this)
{
  ?pump@bdSocketRouter@@UEAAXXZ(this);
}

/*
==============
bdSocketRouter::onRelayUpgradeFailure
==============
*/

void __fastcall bdSocketRouter::onRelayUpgradeFailure(bdSocketRouter *this, const bdRelayAssociation *assoc)
{
  ?onRelayUpgradeFailure@bdSocketRouter@@UEAAXAEBVbdRelayAssociation@@@Z(this, assoc);
}

/*
==============
bdSocketRouter::getRelayPing
==============
*/

double __fastcall bdSocketRouter::getRelayPing(bdSocketRouter *this)
{
  double result; 

  *(float *)&result = ?getRelayPing@bdSocketRouter@@UEBAMXZ(this);
  return result;
}

/*
==============
bdSocketRouter::getTelemetry
==============
*/

bdDTLSAssociationTelemetry *__fastcall bdSocketRouter::getTelemetry(bdSocketRouter *this, bdDTLSAssociationTelemetry *result, const bdReference<bdAddrHandle> addrHandle)
{
  return ?getTelemetry@bdSocketRouter@@QEAA?AVbdDTLSAssociationTelemetry@@V?$bdReference@VbdAddrHandle@@@@@Z(this, result, addrHandle);
}

/*
==============
bdSocketRouter::shouldUseRelay
==============
*/

bool __fastcall bdSocketRouter::shouldUseRelay(bdSocketRouter *this, const bdReference<bdAddrHandle> *addrHandle)
{
  return ?shouldUseRelay@bdSocketRouter@@UEBA_NAEBV?$bdReference@VbdAddrHandle@@@@@Z(this, addrHandle);
}

/*
==============
bdSocketRouter::processError
==============
*/

void __fastcall bdSocketRouter::processError(bdSocketRouter *this, bdAddr *realAddr, int val, unsigned int *resetCount, bool *receiving)
{
  ?processError@bdSocketRouter@@IEAAXAEAVbdAddr@@HAEAIAEA_N@Z(this, realAddr, val, resetCount, receiving);
}

/*
==============
bdSocketRouter::getProtocolOverhead
==============
*/

unsigned int __fastcall bdSocketRouter::getProtocolOverhead(bdSocketRouter *this, const bdReference<bdAddrHandle> addrHandle)
{
  return ?getProtocolOverhead@bdSocketRouter@@QEBAIV?$bdReference@VbdAddrHandle@@@@@Z(this, addrHandle);
}

/*
==============
bdSocketRouter::processPacket
==============
*/

int __fastcall bdSocketRouter::processPacket(bdSocketRouter *this, bdReference<bdAddrHandle> *addrHandle, bdAddr *realAddr, void *data, const unsigned int size, const unsigned int bytesTransferred, bool *receiving)
{
  return ?processPacket@bdSocketRouter@@IEAAHAEAV?$bdReference@VbdAddrHandle@@@@AEAVbdAddr@@PEAXIIAEA_N@Z(this, addrHandle, realAddr, data, size, bytesTransferred, receiving);
}

/*
==============
bdSocketRouter::getStatus
==============
*/

bdDTLSAssociationStatus __fastcall bdSocketRouter::getStatus(bdSocketRouter *this, const bdReference<bdAddrHandle> addrHandle)
{
  return ?getStatus@bdSocketRouter@@UEAA?AW4bdDTLSAssociationStatus@@V?$bdReference@VbdAddrHandle@@@@@Z(this, addrHandle);
}

/*
==============
bdSocketRouter::onRelayConnectionFailure
==============
*/

void __fastcall bdSocketRouter::onRelayConnectionFailure(bdSocketRouter *this, const bdReference<bdCommonAddr> remote)
{
  ?onRelayConnectionFailure@bdSocketRouter@@UEAAXV?$bdReference@VbdCommonAddr@@@@@Z(this, remote);
}

/*
==============
bdSocketRouter::disconnectExcessRelays
==============
*/

void __fastcall bdSocketRouter::disconnectExcessRelays(bdSocketRouter *this)
{
  ?disconnectExcessRelays@bdSocketRouter@@QEAAXXZ(this);
}

/*
==============
bdSocketRouter::init
==============
*/

bool __fastcall bdSocketRouter::init(bdSocketRouter *this, bdSocket *socket, const bdReference<bdCommonAddr> localCommonAddr, const bdSocketRouterConfig *config)
{
  return ?init@bdSocketRouter@@UEAA_NPEAVbdSocket@@V?$bdReference@VbdCommonAddr@@@@AEBVbdSocketRouterConfig@@@Z(this, socket, localCommonAddr, config);
}

/*
==============
bdSocketRouter::tryDecryptPacket
==============
*/

bool __fastcall bdSocketRouter::tryDecryptPacket(bdSocketRouter *this, void *data, const unsigned int *size, const bdSecurityID *secID, bdAddr *realAddr, bdReference<bdAddrHandle> *addrHandle, int *val, bool checkSecID)
{
  return ?tryDecryptPacket@bdSocketRouter@@AEAA_NPEAXAEBIAEBVbdSecurityID@@AEAVbdAddr@@AEAV?$bdReference@VbdAddrHandle@@@@AEAH_N@Z(this, data, size, secID, realAddr, addrHandle, val, checkSecID);
}

/*
==============
bdSocketRouter::~bdSocketRouter
==============
*/

void __fastcall bdSocketRouter::~bdSocketRouter(bdSocketRouter *this)
{
  ??1bdSocketRouter@@UEAA@XZ(this);
}

/*
==============
bdSocketRouter::onRelayAssociationError
==============
*/

void __fastcall bdSocketRouter::onRelayAssociationError(bdSocketRouter *this, const bdRelayAssociation *assoc)
{
  ?onRelayAssociationError@bdSocketRouter@@UEAAXAEBVbdRelayAssociation@@@Z(this, assoc);
}

/*
==============
bdSocketRouter::setSendtoBuffer
==============
*/

void __fastcall bdSocketRouter::setSendtoBuffer(bdSocketRouter *this, bdPacketBuffer *buffer)
{
  ?setSendtoBuffer@bdSocketRouter@@QEAAXPEAVbdPacketBuffer@@@Z(this, buffer);
}

/*
==============
bdSocketRouter::quit
==============
*/

bool __fastcall bdSocketRouter::quit(bdSocketRouter *this)
{
  return ?quit@bdSocketRouter@@UEAA_NXZ(this);
}

/*
==============
bdSocketRouter::getAddressMap
==============
*/

bdAddressMap *__fastcall bdSocketRouter::getAddressMap(bdSocketRouter *this)
{
  return ?getAddressMap@bdSocketRouter@@QEAAPEAVbdAddressMap@@XZ(this);
}

/*
==============
bdSocketRouter::cacheSendTo
==============
*/

bool __fastcall bdSocketRouter::cacheSendTo(bdSocketRouter *this, const bdReference<bdAddrHandle> addrHandle, const bdReference<bdDTLSAssociation> *dtlsSocket, void *data, const unsigned int length)
{
  return ?cacheSendTo@bdSocketRouter@@QEAA_NV?$bdReference@VbdAddrHandle@@@@AEBV?$bdReference@VbdDTLSAssociation@@@@PEAXI@Z(this, addrHandle, dtlsSocket, data, length);
}

/*
==============
bdSocketRouter::getStatus
==============
*/

bdSocketRouter::bdSocketRouterStatus __fastcall bdSocketRouter::getStatus(bdSocketRouter *this)
{
  return ?getStatus@bdSocketRouter@@UEAA?AW4bdSocketRouterStatus@1@XZ(this);
}

/*
==============
bdSocketRouter::bindToRelay
==============
*/

bool __fastcall bdSocketRouter::bindToRelay(bdSocketRouter *this, const bdRelayAuthToken *authToken)
{
  return ?bindToRelay@bdSocketRouter@@QEAA_NAEBVbdRelayAuthToken@@@Z(this, authToken);
}

/*
==============
bdSocketRouter::onRelayBindSuccess
==============
*/

void __fastcall bdSocketRouter::onRelayBindSuccess(bdSocketRouter *this, const bdRelayAssociation *assoc)
{
  ?onRelayBindSuccess@bdSocketRouter@@UEAAXAEBVbdRelayAssociation@@@Z(this, assoc);
}

/*
==============
bdSocketRouter::shouldUseRelay
==============
*/

bool __fastcall bdSocketRouter::shouldUseRelay(bdSocketRouter *this, const bdReference<bdCommonAddr> *remote)
{
  return ?shouldUseRelay@bdSocketRouter@@UEBA_NAEBV?$bdReference@VbdCommonAddr@@@@@Z(this, remote);
}

/*
==============
bdSocketRouter::getSendtoBuffer
==============
*/

bdPacketBuffer *__fastcall bdSocketRouter::getSendtoBuffer(bdSocketRouter *this)
{
  return ?getSendtoBuffer@bdSocketRouter@@QEAAPEAVbdPacketBuffer@@XZ(this);
}

/*
==============
bdSocketRouter::updateDtls
==============
*/

void __fastcall bdSocketRouter::updateDtls(bdSocketRouter *this, const bdEndpoint *oldEndpoint, const bdReference<bdDTLSAssociation> *dtls)
{
  ?updateDtls@bdSocketRouter@@AEAAXAEBVbdEndpoint@@AEBV?$bdReference@VbdDTLSAssociation@@@@@Z(this, oldEndpoint, dtls);
}

/*
==============
bdSocketRouter::getLastReceived
==============
*/

double __fastcall bdSocketRouter::getLastReceived(bdSocketRouter *this)
{
  double result; 

  *(float *)&result = ?getLastReceived@bdSocketRouter@@QEBAMXZ(this);
  return result;
}

/*
==============
bdSocketRouter::shouldUseRelayIfNatTravFails
==============
*/

bool __fastcall bdSocketRouter::shouldUseRelayIfNatTravFails(bdSocketRouter *this, const bdReference<bdCommonAddr> *remote)
{
  return ?shouldUseRelayIfNatTravFails@bdSocketRouter@@UEBA_NAEBV?$bdReference@VbdCommonAddr@@@@@Z(this, remote);
}

/*
==============
bdSocketRouter::updateLocalCommonAddr
==============
*/

bool __fastcall bdSocketRouter::updateLocalCommonAddr(bdSocketRouter *this, const bdReference<bdCommonAddr> newLocalCommonAddr)
{
  return ?updateLocalCommonAddr@bdSocketRouter@@QEAA_NV?$bdReference@VbdCommonAddr@@@@@Z(this, newLocalCommonAddr);
}

/*
==============
bdSocketRouter::registerInterceptor
==============
*/

void __fastcall bdSocketRouter::registerInterceptor(bdSocketRouter *this, bdPacketInterceptor *const interceptor)
{
  ?registerInterceptor@bdSocketRouter@@QEAAXQEAVbdPacketInterceptor@@@Z(this, interceptor);
}

/*
==============
bdSocketRouter::onRelayConnectionSuccess
==============
*/

void __fastcall bdSocketRouter::onRelayConnectionSuccess(bdSocketRouter *this, const bdReference<bdCommonAddr> remote, const bdAddr *realAddr)
{
  ?onRelayConnectionSuccess@bdSocketRouter@@UEAAXV?$bdReference@VbdCommonAddr@@@@AEBVbdAddr@@@Z(this, remote, realAddr);
}

/*
==============
bdSocketRouter::prepareSendToData
==============
*/

int __fastcall bdSocketRouter::prepareSendToData(bdSocketRouter *this, const bdReference<bdAddrHandle> addrHandle, const void *data, const unsigned int length, void *outBuffer, const unsigned int outBufferLength, bdSocketRouterData *outData)
{
  return ?prepareSendToData@bdSocketRouter@@UEAAHV?$bdReference@VbdAddrHandle@@@@PEBXIPEAXIAEAVbdSocketRouterData@@@Z(this, addrHandle, data, length, outBuffer, outBufferLength, outData);
}

/*
==============
bdSocketRouter::bdSocketRouter
==============
*/

void __fastcall bdSocketRouter::bdSocketRouter(bdSocketRouter *this)
{
  ??0bdSocketRouter@@QEAA@XZ(this);
}

/*
==============
bdSocketRouter::onNATAddrDiscovery
==============
*/

void __fastcall bdSocketRouter::onNATAddrDiscovery(bdSocketRouter *this, bdReference<bdCommonAddr> remote, const bdAddr *realAddr)
{
  ?onNATAddrDiscovery@bdSocketRouter@@UEAAXV?$bdReference@VbdCommonAddr@@@@AEBVbdAddr@@@Z(this, remote, realAddr);
}

/*
==============
bdSocketRouter::tryToFindConnection
==============
*/

bool __fastcall bdSocketRouter::tryToFindConnection(bdSocketRouter *this, void *data, const unsigned int *size, const bdSecurityID *secID, bdAddr *realAddr, bdReference<bdAddrHandle> *addrHandle, int *val)
{
  return ?tryToFindConnection@bdSocketRouter@@AEAA_NPEAXAEBIAEBVbdSecurityID@@AEAVbdAddr@@AEAV?$bdReference@VbdAddrHandle@@@@AEAH@Z(this, data, size, secID, realAddr, addrHandle, val);
}

/*
==============
bdSocketRouter::removeFromVtagToDtlsMap
==============
*/

bool __fastcall bdSocketRouter::removeFromVtagToDtlsMap(bdSocketRouter *this, bdReference<bdDTLSAssociation> value)
{
  return ?removeFromVtagToDtlsMap@bdSocketRouter@@IEAA_NV?$bdReference@VbdDTLSAssociation@@@@@Z(this, value);
}

/*
==============
bdSocketRouter::getConfig
==============
*/

void __fastcall bdSocketRouter::getConfig(bdSocketRouter *this, bdSocketRouterConfig *config)
{
  ?getConfig@bdSocketRouter@@QEBAXAEAVbdSocketRouterConfig@@@Z(this, config);
}

/*
==============
bdSocketRouter::setClientAuthToken
==============
*/

void __fastcall bdSocketRouter::setClientAuthToken(bdSocketRouter *this, const bdClientAuthToken *clientAuthToken, unsigned int titleID, unsigned __int64 userID)
{
  ?setClientAuthToken@bdSocketRouter@@QEAAXAEBVbdClientAuthToken@@I_K@Z(this, clientAuthToken, titleID, userID);
}

/*
==============
bdSocketRouter::sendPreparedData
==============
*/

int __fastcall bdSocketRouter::sendPreparedData(bdSocketRouter *this, bdSocketRouterData *preparedData, const unsigned int preparedDataLength, unsigned int *outDataLength)
{
  return ?sendPreparedData@bdSocketRouter@@UEAAHQEAVbdSocketRouterData@@IAEAI@Z(this, preparedData, preparedDataLength, outDataLength);
}

/*
==============
bdSocketRouter::updateVtagToDtlsMap
==============
*/

bool __fastcall bdSocketRouter::updateVtagToDtlsMap(bdSocketRouter *this, unsigned __int16 oldTag, bdReference<bdDTLSAssociation> value)
{
  return ?updateVtagToDtlsMap@bdSocketRouter@@IEAA_NGV?$bdReference@VbdDTLSAssociation@@@@@Z(this, oldTag, value);
}

/*
==============
bdSocketRouter::isCrossNetwork
==============
*/

bool __fastcall bdSocketRouter::isCrossNetwork(bdSocketRouter *this, const bdReference<bdCommonAddr> *remote)
{
  return ?isCrossNetwork@bdSocketRouter@@UEBA_NAEBV?$bdReference@VbdCommonAddr@@@@@Z(this, remote);
}

/*
==============
bdSocketRouter::addToVtagToDtlsMap
==============
*/

bool __fastcall bdSocketRouter::addToVtagToDtlsMap(bdSocketRouter *this, bdReference<bdDTLSAssociation> value)
{
  return ?addToVtagToDtlsMap@bdSocketRouter@@IEAA_NV?$bdReference@VbdDTLSAssociation@@@@@Z(this, value);
}

/*
==============
bdSocketRouter::getNATTravClient
==============
*/

bdNATTravClient *__fastcall bdSocketRouter::getNATTravClient(bdSocketRouter *this)
{
  return ?getNATTravClient@bdSocketRouter@@QEAAPEAVbdNATTravClient@@XZ(this);
}

/*
==============
bdSocketRouter::onRelayAssociationMigrate
==============
*/

void __fastcall bdSocketRouter::onRelayAssociationMigrate(bdSocketRouter *this, const bdRelayAssociation *assoc)
{
  ?onRelayAssociationMigrate@bdSocketRouter@@UEAAXAEBVbdRelayAssociation@@@Z(this, assoc);
}

/*
==============
bdSocketRouter::getKeyMap
==============
*/

bdSecurityKeyMap *__fastcall bdSocketRouter::getKeyMap(bdSocketRouter *this)
{
  return ?getKeyMap@bdSocketRouter@@QEAAPEAVbdSecurityKeyMap@@XZ(this);
}

/*
==============
bdSocketRouter::getQoSProber
==============
*/

bdQoSProbe *__fastcall bdSocketRouter::getQoSProber(bdSocketRouter *this)
{
  return ?getQoSProber@bdSocketRouter@@QEAAPEAVbdQoSProbe@@XZ(this);
}

/*
==============
bdSocketRouter::connect
==============
*/

bool __fastcall bdSocketRouter::connect(bdSocketRouter *this, bdReference<bdAddrHandle> *addrHandle)
{
  return ?connect@bdSocketRouter@@UEAA_NAEAV?$bdReference@VbdAddrHandle@@@@@Z(this, addrHandle);
}

/*
==============
bdSocketRouter::onRelayUpgradeSuccess
==============
*/

void __fastcall bdSocketRouter::onRelayUpgradeSuccess(bdSocketRouter *this, const bdRelayAssociation *assoc)
{
  ?onRelayUpgradeSuccess@bdSocketRouter@@UEAAXAEBVbdRelayAssociation@@@Z(this, assoc);
}

/*
==============
bdSocketRouter::onSecurityKeyRemove
==============
*/

void __fastcall bdSocketRouter::onSecurityKeyRemove(bdSocketRouter *this, const bdSecurityID *id)
{
  ?onSecurityKeyRemove@bdSocketRouter@@UEAAXAEBVbdSecurityID@@@Z(this, id);
}

/*
==============
bdSocketRouter::bdSocketRouter
==============
*/
void bdSocketRouter::bdSocketRouter(bdSocketRouter *this)
{
  unsigned int PowerOf2; 
  float v3; 
  bdHashMap<bdEndpoint,bdReference<bdDTLSAssociation>,bdEndpointHashingClass>::Node **v4; 
  unsigned int v5; 
  float v6; 
  bdHashMap<unsigned short,bdLinkedList<bdReference<bdDTLSAssociation> > *,bdHashingClass>::Node **v7; 
  unsigned int v8; 
  float v9; 
  bdHashMap<bdReference<bdCommonAddr>,bdReference<bdDTLSAssociation>,bdHashingClass>::Node **v10; 
  unsigned int v11; 
  float v12; 
  bdHashMap<bdEndpoint,bdReference<bdAddrHandle>,bdEndpointHashingClass>::Node **v13; 

  bdNATTravListener::bdNATTravListener(this);
  this->bdNATTravListener::__vftable = (bdSocketRouter_vtbl *)&bdSocketRouter::`vftable'{for `bdNATTravListener'};
  this->bdSecurityKeyMapListener::__vftable = (bdSecurityKeyMapListener_vtbl *)&bdSocketRouter::`vftable'{for `bdSecurityKeyMapListener'};
  this->bdRelayAssociationListener::__vftable = (bdRelayAssociationListener_vtbl *)&bdSocketRouter::`vftable'{for `bdRelayAssociationListener'};
  this->m_socket = NULL;
  this->m_interceptors.m_data = NULL;
  *(_QWORD *)&this->m_interceptors.m_capacity = 0i64;
  this->m_status = BD_SOCKET_ROUTER_UNINITIALIZED;
  bdSocketRouterConfig::bdSocketRouterConfig(&this->m_config);
  this->m_localCommonAddr.m_ptr = NULL;
  bdAddressMap::bdAddressMap(&this->m_addrMap);
  bdSecurityKeyMap::bdSecurityKeyMap(&this->m_keyStore);
  bdRoutingLayer::bdRoutingLayer(&this->m_routingLayer);
  this->m_relayManager = NULL;
  bdNATTravClient::bdNATTravClient(&this->m_natTrav);
  bdECCKey::bdECCKey(&this->m_ECCKey);
  bdServiceBandwidthArbitrator::bdServiceBandwidthArbitrator(&this->m_qosBandwidth);
  this->m_endpointToDtlsMap.m_numIterators.m_value._My_val = 0;
  this->m_endpointToDtlsMap.m_size = 0;
  PowerOf2 = bdBitOperations::nextPowerOf2(4u);
  this->m_endpointToDtlsMap.m_capacity = PowerOf2;
  this->m_endpointToDtlsMap.m_loadFactor = 0.75;
  v3 = (float)PowerOf2;
  this->m_endpointToDtlsMap.m_threshold = (int)(float)(v3 * 0.75);
  v4 = (bdHashMap<bdEndpoint,bdReference<bdDTLSAssociation>,bdEndpointHashingClass>::Node **)bdMemory::allocate(8i64 * PowerOf2);
  this->m_endpointToDtlsMap.m_map = v4;
  memset_0(v4, 0, 8i64 * this->m_endpointToDtlsMap.m_capacity);
  this->m_vtagToDtlsMap.m_numIterators.m_value._My_val = 0;
  this->m_vtagToDtlsMap.m_size = 0;
  v5 = bdBitOperations::nextPowerOf2(4u);
  this->m_vtagToDtlsMap.m_capacity = v5;
  this->m_vtagToDtlsMap.m_loadFactor = 0.75;
  v6 = (float)v5;
  this->m_vtagToDtlsMap.m_threshold = (int)(float)(v6 * 0.75);
  v7 = (bdHashMap<unsigned short,bdLinkedList<bdReference<bdDTLSAssociation> > *,bdHashingClass>::Node **)bdMemory::allocate(8i64 * v5);
  this->m_vtagToDtlsMap.m_map = v7;
  memset_0(v7, 0, 8i64 * this->m_vtagToDtlsMap.m_capacity);
  this->m_migratingDtlsMap.m_numIterators.m_value._My_val = 0;
  this->m_migratingDtlsMap.m_size = 0;
  v8 = bdBitOperations::nextPowerOf2(4u);
  this->m_migratingDtlsMap.m_capacity = v8;
  this->m_migratingDtlsMap.m_loadFactor = 0.75;
  v9 = (float)v8;
  this->m_migratingDtlsMap.m_threshold = (int)(float)(v9 * 0.75);
  v10 = (bdHashMap<bdReference<bdCommonAddr>,bdReference<bdDTLSAssociation>,bdHashingClass>::Node **)bdMemory::allocate(8i64 * v8);
  this->m_migratingDtlsMap.m_map = v10;
  memset_0(v10, 0, 8i64 * this->m_migratingDtlsMap.m_capacity);
  this->m_sendtoBuffer = NULL;
  bdQoSProbe::bdQoSProbe(&this->m_qosProber);
  this->m_endpointToAddrMap.m_numIterators.m_value._My_val = 0;
  this->m_endpointToAddrMap.m_size = 0;
  v11 = bdBitOperations::nextPowerOf2(4u);
  this->m_endpointToAddrMap.m_capacity = v11;
  this->m_endpointToAddrMap.m_loadFactor = 0.75;
  v12 = (float)v11;
  this->m_endpointToAddrMap.m_threshold = (int)(float)(v12 * 0.75);
  v13 = (bdHashMap<bdEndpoint,bdReference<bdAddrHandle>,bdEndpointHashingClass>::Node **)bdMemory::allocate(8i64 * v11);
  this->m_endpointToAddrMap.m_map = v13;
  memset_0(v13, 0, 8i64 * this->m_endpointToAddrMap.m_capacity);
  bdSharedMutex::bdSharedMutex(&this->m_endpointToDTLSMutex);
  bdSharedMutex::bdSharedMutex(&this->m_endpointToAddrMutex);
  bdSharedMutex::bdSharedMutex(&this->m_vtagToDTLSMutex);
  bdSharedMutex::bdSharedMutex(&this->m_migratingDtlsMutex);
}

/*
==============
bdSocketRouter::~bdSocketRouter
==============
*/
void bdSocketRouter::~bdSocketRouter(bdSocketRouter *this)
{
  unsigned int v2; 
  unsigned int m_capacity; 
  __int64 v4; 
  bdHashMap<unsigned short,bdLinkedList<bdReference<bdDTLSAssociation> > *,bdHashingClass>::Node **m_map; 
  bdHashMap<unsigned short,bdLinkedList<bdReference<bdDTLSAssociation> > *,bdHashingClass>::Node *v6; 
  bdLinkedList<bdReference<bdDTLSAssociation> > *m_data; 
  bdLinkedList<bdReference<bdDTLSAssociation> >::Node *m_head; 
  bdLinkedList<bdReference<bdDTLSAssociation> >::Node *m_next; 
  unsigned int v10; 
  __int64 v11; 
  bdCommonAddr *m_ptr; 
  bdCommonAddr *v13; 

  this->bdNATTravListener::__vftable = (bdSocketRouter_vtbl *)&bdSocketRouter::`vftable'{for `bdNATTravListener'};
  this->bdSecurityKeyMapListener::__vftable = (bdSecurityKeyMapListener_vtbl *)&bdSocketRouter::`vftable'{for `bdSecurityKeyMapListener'};
  this->bdRelayAssociationListener::__vftable = (bdRelayAssociationListener_vtbl *)&bdSocketRouter::`vftable'{for `bdRelayAssociationListener'};
  bdSecurityKeyMap::unregisterListener(&this->m_keyStore);
  bdSharedMutex::lock(&this->m_endpointToDTLSMutex);
  bdHashMap<bdEndpoint,bdReference<bdDTLSAssociation>,bdEndpointHashingClass>::clear(&this->m_endpointToDtlsMap);
  bdSharedMutex::unlock(&this->m_endpointToDTLSMutex);
  bdSharedMutex::lock(&this->m_vtagToDTLSMutex);
  if ( this->m_vtagToDtlsMap.m_size )
  {
    v2 = 0;
    m_capacity = this->m_vtagToDtlsMap.m_capacity;
    if ( m_capacity )
    {
      do
      {
        if ( this->m_vtagToDtlsMap.m_map[v2] )
          break;
        ++v2;
      }
      while ( v2 < m_capacity );
    }
    v4 = v2;
    m_map = this->m_vtagToDtlsMap.m_map;
    if ( m_map[v4] )
    {
      _InterlockedExchangeAdd((volatile signed __int32 *)&this->m_vtagToDtlsMap.m_numIterators, 1u);
      m_map = this->m_vtagToDtlsMap.m_map;
    }
    v6 = m_map[v4];
LABEL_8:
    if ( v6 )
    {
      while ( 1 )
      {
        m_data = v6->m_data;
        if ( v6->m_data )
        {
          m_head = m_data->m_head;
          if ( m_data->m_head )
          {
            do
            {
              m_next = m_head->m_next;
              if ( m_head->m_data.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_head->m_data.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
              {
                if ( m_head->m_data.m_ptr )
                  ((void (__fastcall *)(bdDTLSAssociation *, __int64))m_head->m_data.m_ptr->~bdReferencable)(m_head->m_data.m_ptr, 1i64);
                m_head->m_data.m_ptr = NULL;
              }
              bdMemory::deallocate(m_head);
              m_data->m_head = m_next;
              m_head = m_next;
            }
            while ( m_next );
          }
          m_data->m_tail = NULL;
          m_data->m_size = 0;
          bdMemory::deallocate(m_data);
        }
        if ( v6->m_next )
        {
          v6 = v6->m_next;
          goto LABEL_8;
        }
        v10 = this->m_vtagToDtlsMap.m_capacity;
        v11 = ((HIBYTE(v6->m_key) ^ (16777619 * LOBYTE(v6->m_key))) & (v10 - 1)) + 1;
        if ( (unsigned int)v11 >= v10 )
          break;
        while ( 1 )
        {
          v6 = this->m_vtagToDtlsMap.m_map[v11];
          if ( v6 )
            break;
          v11 = (unsigned int)(v11 + 1);
          if ( (unsigned int)v11 >= v10 )
            goto LABEL_23;
        }
      }
LABEL_23:
      _InterlockedExchangeAdd((volatile signed __int32 *)&this->m_vtagToDtlsMap.m_numIterators, 0xFFFFFFFF);
    }
  }
  bdSharedMutex::unlock(&this->m_vtagToDTLSMutex);
  bdSharedMutex::~bdSharedMutex(&this->m_migratingDtlsMutex);
  bdSharedMutex::~bdSharedMutex(&this->m_vtagToDTLSMutex);
  bdSharedMutex::~bdSharedMutex(&this->m_endpointToAddrMutex);
  bdSharedMutex::~bdSharedMutex(&this->m_endpointToDTLSMutex);
  bdHashMap<bdEndpoint,bdReference<bdAddrHandle>,bdEndpointHashingClass>::clear(&this->m_endpointToAddrMap);
  bdMemory::deallocate(this->m_endpointToAddrMap.m_map);
  bdQoSProbe::~bdQoSProbe(&this->m_qosProber);
  bdHashMap<bdReference<bdCommonAddr>,bdReference<bdDTLSAssociation>,bdHashingClass>::clear(&this->m_migratingDtlsMap);
  bdMemory::deallocate(this->m_migratingDtlsMap.m_map);
  bdHashMap<unsigned short,bdLinkedList<bdReference<bdDTLSAssociation>> *,bdHashingClass>::clear(&this->m_vtagToDtlsMap);
  bdMemory::deallocate(this->m_vtagToDtlsMap.m_map);
  bdHashMap<bdEndpoint,bdReference<bdDTLSAssociation>,bdEndpointHashingClass>::clear(&this->m_endpointToDtlsMap);
  bdMemory::deallocate(this->m_endpointToDtlsMap.m_map);
  bdECCKey::~bdECCKey(&this->m_ECCKey);
  bdNATTravClient::~bdNATTravClient(&this->m_natTrav);
  bdRoutingLayer::~bdRoutingLayer(&this->m_routingLayer);
  bdSecurityKeyMap::~bdSecurityKeyMap(&this->m_keyStore);
  bdAddressMap::~bdAddressMap(&this->m_addrMap);
  m_ptr = this->m_localCommonAddr.m_ptr;
  if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
  {
    v13 = this->m_localCommonAddr.m_ptr;
    if ( v13 )
      ((void (__fastcall *)(bdCommonAddr *, __int64))v13->~bdReferencable)(v13, 1i64);
    this->m_localCommonAddr.m_ptr = NULL;
  }
  bdMemory::deallocate(this->m_interceptors.m_data);
  this->m_interceptors.m_data = NULL;
  *(_QWORD *)&this->m_interceptors.m_capacity = 0i64;
  this->bdRelayAssociationListener::__vftable = (bdRelayAssociationListener_vtbl *)&bdRelayAssociationListener::`vftable';
  this->bdSecurityKeyMapListener::__vftable = (bdSecurityKeyMapListener_vtbl *)&bdSecurityKeyMapListener::`vftable';
  bdNATTravListener::~bdNATTravListener(this);
}

/*
==============
bdSocketRouter::addToVtagToDtlsMap
==============
*/
_BOOL8 bdSocketRouter::addToVtagToDtlsMap(bdSocketRouter *this, bdReference<bdDTLSAssociation> value)
{
  bdSharedMutex *p_m_vtagToDTLSMutex; 
  bool v5; 
  unsigned __int16 LocalTag; 
  bdHashMap<unsigned short,bdLinkedList<bdReference<bdDTLSAssociation> > *,bdHashingClass>::Node *v7; 
  bdLinkedList<bdReference<bdDTLSAssociation> > *v8; 
  bdLinkedList<bdReference<bdDTLSAssociation> >::Node *m_head; 
  bdSharedMutex *v11; 
  bdLinkedList<bdReference<bdDTLSAssociation> > *key; 
  bdLinkedList<bdReference<bdDTLSAssociation> > *valuea; 

  p_m_vtagToDTLSMutex = &this->m_vtagToDTLSMutex;
  v11 = &this->m_vtagToDTLSMutex;
  bdSharedMutex::lock(&this->m_vtagToDTLSMutex);
  v5 = 1;
  LocalTag = bdDTLSAssociation::getLocalTag((bdDTLSAssociation *)value.m_ptr->__vftable);
  if ( this->m_vtagToDtlsMap.m_size && (v7 = this->m_vtagToDtlsMap.m_map[(this->m_vtagToDtlsMap.m_capacity - 1) & (HIBYTE(LocalTag) ^ (16777619 * (unsigned __int8)LocalTag))]) != NULL )
  {
    while ( LocalTag != v7->m_key )
    {
      v7 = v7->m_next;
      if ( !v7 )
        goto LABEL_5;
    }
    _InterlockedExchangeAdd((volatile signed __int32 *)&this->m_vtagToDtlsMap.m_numIterators, 1u);
    valuea = v7->m_data;
    bdHandleAssert(this->m_vtagToDtlsMap.m_numIterators.m_value._My_val != 0, "m_numIterators != 0", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdhashmap.inl", "bdHashMap<unsigned short,class bdLinkedList<class bdReference<class bdDTLSAssociation> > *,class bdHashingClass>::releaseIterator", 0x18Au, "bdHashMap::releaseIterator Iterator count reached 0, can't release iterator");
    _InterlockedExchangeAdd((volatile signed __int32 *)&this->m_vtagToDtlsMap.m_numIterators, 0xFFFFFFFF);
    m_head = valuea->m_head;
    if ( valuea->m_head )
    {
      while ( m_head->m_data.m_ptr != (bdDTLSAssociation *)value.m_ptr->__vftable )
      {
        m_head = m_head->m_next;
        if ( !m_head )
          goto LABEL_10;
      }
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/bdSocketRouter", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouter.cpp", "bdSocketRouter::addToVtagToDtlsMap", 0x8A1u, "vtag for association already existing in m_vtagToDtlsMap.");
      v5 = 0;
      p_m_vtagToDTLSMutex = v11;
    }
    else
    {
LABEL_10:
      bdLinkedList<bdReference<bdDTLSAssociation>>::addHead(valuea, (const bdReference<bdDTLSAssociation> *)value.m_ptr);
      p_m_vtagToDTLSMutex = v11;
    }
  }
  else
  {
LABEL_5:
    v8 = (bdLinkedList<bdReference<bdDTLSAssociation> > *)bdMemory::allocate(0x18ui64);
    key = v8;
    if ( v8 )
    {
      v8->m_head = NULL;
      v8->m_tail = NULL;
      v8->m_size = 0;
    }
    else
    {
      v8 = NULL;
    }
    valuea = v8;
    bdLinkedList<bdReference<bdDTLSAssociation>>::addHead(v8, (const bdReference<bdDTLSAssociation> *)value.m_ptr);
    LOWORD(key) = bdDTLSAssociation::getLocalTag((bdDTLSAssociation *)value.m_ptr->__vftable);
    v5 = bdHashMap<unsigned short,bdLinkedList<bdReference<bdDTLSAssociation>> *,bdHashingClass>::put(&this->m_vtagToDtlsMap, (const unsigned __int16 *)&key, &valuea);
  }
  bdSharedMutex::unlock(p_m_vtagToDTLSMutex);
  if ( value.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&value.m_ptr->sendTo, 0xFFFFFFFF) == 1 )
  {
    if ( value.m_ptr->__vftable )
      (*(void (__fastcall **)(bdDTLSAssociation_vtbl *, __int64))value.m_ptr->~bdReferencable)(value.m_ptr->__vftable, 1i64);
    value.m_ptr->__vftable = NULL;
  }
  return v5;
}

/*
==============
bdSocketRouter::bindToRelay
==============
*/
bool bdSocketRouter::bindToRelay(bdSocketRouter *this, const bdRelayAuthToken *authToken)
{
  bdRelayAssociationListener *v2; 

  v2 = &this->bdRelayAssociationListener;
  if ( !this )
    v2 = NULL;
  return bdRoutingLayer::bindToRelay(&this->m_routingLayer, authToken, v2);
}

/*
==============
bdSocketRouter::cacheSendTo
==============
*/
_BOOL8 bdSocketRouter::cacheSendTo(bdSocketRouter *this, const bdReference<bdAddrHandle> addrHandle, const bdReference<bdDTLSAssociation> *dtlsSocket, void *data, const unsigned int length)
{
  bool v9; 
  unsigned int Hash; 
  bdDTLSAssociationStatus Status; 
  unsigned int v12; 
  bdPacketBuffer *m_sendtoBuffer; 
  bdNATTravClient *p_m_natTrav; 
  bdCommonAddr *v15; 
  bdCommonAddr *v16; 
  bdReference<bdCommonAddr> v18; 
  __int64 v19; 
  bdReference<bdCommonAddr> remote; 

  v19 = -2i64;
  v9 = 0;
  if ( dtlsSocket->m_ptr )
  {
    if ( this->m_sendtoBuffer )
    {
      Hash = bdEndpoint::getHash((bdEndpoint *)&addrHandle.m_ptr->__vftable[2]);
      Status = bdDTLSAssociation::getStatus(dtlsSocket->m_ptr);
      v12 = Hash;
      m_sendtoBuffer = this->m_sendtoBuffer;
      if ( Status == BD_SOCKET_CONNECTED )
      {
        bdPacketBuffer::flushBuffer(m_sendtoBuffer, Hash, dtlsSocket->m_ptr, (const bdAddr *)&addrHandle.m_ptr->__vftable[5]);
        goto LABEL_16;
      }
      if ( Status != BD_SOCKET_PENDING )
      {
        bdPacketBuffer::clearBuffer(m_sendtoBuffer, Hash);
        goto LABEL_16;
      }
LABEL_15:
      v9 = bdPacketBuffer::bufferPacket(m_sendtoBuffer, v12, data, length);
    }
  }
  else
  {
    p_m_natTrav = &this->m_natTrav;
    v15 = (bdCommonAddr *)addrHandle.m_ptr->__vftable[2].~bdReferencable;
    remote.m_ptr = v15;
    if ( v15 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v15->m_refCount, 1u);
    if ( bdNATTravClient::isConnectInProgress(p_m_natTrav, (const bdReference<bdCommonAddr>)&remote) )
      goto LABEL_24;
    v16 = (bdCommonAddr *)addrHandle.m_ptr->__vftable[2].~bdReferencable;
    v18.m_ptr = v16;
    if ( v16 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v16->m_refCount, 1u);
    if ( bdRoutingLayer::isConnectInProgress(&this->m_routingLayer, (const bdReference<bdCommonAddr>)&v18) )
    {
LABEL_24:
      if ( this->m_sendtoBuffer )
      {
        v12 = bdEndpoint::getHash((bdEndpoint *)&addrHandle.m_ptr->__vftable[2]);
        m_sendtoBuffer = this->m_sendtoBuffer;
        goto LABEL_15;
      }
    }
  }
LABEL_16:
  if ( addrHandle.m_ptr->__vftable && !_InterlockedDecrement((volatile signed __int32 *)&addrHandle.m_ptr->__vftable[1]) )
  {
    if ( addrHandle.m_ptr->__vftable )
      (*(void (__fastcall **)(bdAddrHandle_vtbl *, __int64))addrHandle.m_ptr->~bdReferencable)(addrHandle.m_ptr->__vftable, 1i64);
    addrHandle.m_ptr->__vftable = NULL;
  }
  return v9;
}

/*
==============
bdSocketRouter::connect
==============
*/
char bdSocketRouter::connect(bdSocketRouter *this, bdReference<bdAddrHandle> *addrHandle)
{
  bdSocketRouter *v3; 
  bdCommonAddr *m_ptr; 
  volatile signed __int32 *p_m_refCount; 
  bdAddrHandle::bdAddrHandleStatus m_status; 
  bdSecurityID *p_m_secID; 
  bool v9; 
  __int64 v10; 
  bdHashMap<bdEndpoint,bdReference<bdAddrHandle>,bdEndpointHashingClass>::Node *v11; 
  bdHashMap<bdEndpoint,bdReference<bdAddrHandle>,bdEndpointHashingClass>::Node *v12; 
  bdHashMap<bdEndpoint,bdReference<bdAddrHandle>,bdEndpointHashingClass>::Node *m_next; 
  bdReference<bdAddrHandle> *v14; 
  bool v15; 
  char v16; 
  bdSharedMutex *p_m_endpointToDTLSMutex; 
  bdReference<bdAddrHandle> *v18; 
  bdHashMap<bdEndpoint,bdReference<bdDTLSAssociation>,bdEndpointHashingClass> *v19; 
  bdDTLSAssociation *v20; 
  bdCommonAddr *v21; 
  const bdCommonAddr *v22; 
  bool v23; 
  void (__fastcall *onNATAddrDiscovery)(bdNATTravListener *, bdReference<bdCommonAddr>, const bdAddr *); 
  bdReference<bdAddrHandle> *v25; 
  const bdAddr *RealAddr; 
  bool v27; 
  bdRelayAssociationListener *v28; 
  unsigned int v29; 
  unsigned int line; 
  char *format; 
  char v32; 
  bdCommonAddr *v33; 
  bdDTLSAssociation *v34; 
  void *iterator; 
  __int64 v36; 
  bdReference<bdAddrHandle> *value; 
  bdHashMap<bdEndpoint,bdReference<bdDTLSAssociation>,bdEndpointHashingClass> *p_m_endpointToDtlsMap; 
  bdSocketRouter *v39; 
  bdReference<bdAddrHandle> result; 
  bdReference<bdCommonAddr> addr; 
  bdReference<bdCommonAddr> v42; 
  bdReference<bdCommonAddr> remote; 
  bdCommonAddr *v44; 
  bdCommonAddr *v45; 
  bdReference<bdAddrHandle> v46; 
  bdReference<bdCommonAddr> v47; 
  bdReference<bdCommonAddr> v48; 
  bdAtomic<int> *v49; 
  bdSharedMutex *v50; 
  bdSharedMutex *v51; 
  __int64 v52; 
  bdSharedMutex *p_m_endpointToAddrMutex; 
  const bdCommonAddr *v54; 
  bdEndpoint key; 
  bdAddr v56; 
  char buffer[32]; 
  char buf[1024]; 

  v52 = -2i64;
  value = addrHandle;
  v3 = this;
  v39 = this;
  v32 = 0;
  if ( this->m_status != BD_SOCKET_ROUTER_INITIALIZED )
  {
    format = "Cannot connect before class has been initialized";
    line = 385;
LABEL_5:
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/bdSocketRouter", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouter.cpp", "bdSocketRouter::connect", line, format);
    return 0;
  }
  if ( !addrHandle->m_ptr )
  {
    format = "Cannot connect using null addr handle ref";
    line = 390;
    goto LABEL_5;
  }
  m_ptr = addrHandle->m_ptr->m_endpoint.m_ca.m_ptr;
  v33 = m_ptr;
  p_m_refCount = (volatile signed __int32 *)&m_ptr->m_refCount;
  v49 = &m_ptr->m_refCount;
  if ( m_ptr )
    _InterlockedExchangeAdd(p_m_refCount, 1u);
  bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/bdSocketRouter", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouter.cpp", "bdSocketRouter::connect", 0x18Bu, "Connecting to address.");
  addr.m_ptr = m_ptr;
  if ( m_ptr )
    _InterlockedExchangeAdd(p_m_refCount, 1u);
  bdCommonAddrInfo::getInfo((const bdReference<bdCommonAddr>)&addr, buf, 0x400u);
  bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/bdSocketRouter", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouter.cpp", "bdSocketRouter::connect", 0x190u, buf);
  bdSecurityInfo::toString(&addrHandle->m_ptr->m_endpoint.m_secID, buffer, 0x12u);
  bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/bdSocketRouter", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouter.cpp", "bdSocketRouter::connect", 0x194u, "Using security ID: %s", buffer);
  if ( !bdSecurityKeyMap::contains(&v3->m_keyStore, &addrHandle->m_ptr->m_endpoint.m_secID) )
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/bdSocketRouter", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouter.cpp", "bdSocketRouter::connect", 0x19Au, "Security ID is not registered. ");
  m_status = addrHandle->m_ptr->m_status;
  switch ( m_status )
  {
    case BD_ADDR_NOT_CONSTRUCTED:
    case BD_ADDR_NOT_RESOLVED:
    case BD_ADDR_ERROR:
    case BD_ADDR_UNRESOLVED:
      if ( m_status == BD_ADDR_ERROR )
      {
        bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/bdSocketRouter", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouter.cpp", "bdSocketRouter::connect", 0x1A8u, "Address resolution failed. Trying again.");
      }
      else if ( m_status == BD_ADDR_UNRESOLVED )
      {
        bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/bdSocketRouter", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouter.cpp", "bdSocketRouter::connect", 0x1ACu, "Address has been unregistered. Starting again.");
      }
      else
      {
        bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/bdSocketRouter", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouter.cpp", "bdSocketRouter::connect", 0x1B0u, "Address not resolved. Sending to NAT Trav.");
      }
      p_m_secID = &addrHandle->m_ptr->m_endpoint.m_secID;
      v42.m_ptr = m_ptr;
      if ( m_ptr )
      {
        _InterlockedExchangeAdd(p_m_refCount, 1u);
        v36 = (__int64)&m_ptr->m_refCount;
      }
      else
      {
        v36 = 8i64;
      }
      bdEndpoint::bdEndpoint(&key, (const bdReference<bdCommonAddr>)&v42, p_m_secID);
      p_m_endpointToAddrMutex = &v3->m_endpointToAddrMutex;
      bdSharedMutex::lock(&v3->m_endpointToAddrMutex);
      v9 = bdHashMap<bdEndpoint,bdReference<bdAddrHandle>,bdEndpointHashingClass>::put(&v3->m_endpointToAddrMap, &key, addrHandle);
      bdSharedMutex::unlock(&v3->m_endpointToAddrMutex);
      if ( v9 )
      {
        v14 = value;
      }
      else
      {
        bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/bdSocketRouter", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouter.cpp", "bdSocketRouter::connect", 0x1BFu, "Remote addr already exists in map");
        bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/bdSocketRouter", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouter.cpp", "bdSocketRouter::connect", 0x1C2u, "Cancelling existing NAT Trav if any....");
        remote.m_ptr = m_ptr;
        if ( m_ptr )
          _InterlockedExchangeAdd((volatile signed __int32 *)v36, 1u);
        bdNATTravClient::cancelConnect(&v3->m_natTrav, (bdReference<bdCommonAddr>)&remote);
        v50 = &v3->m_endpointToAddrMutex;
        bdSharedMutex::lock(&v3->m_endpointToAddrMutex);
        bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/bdSocketRouter", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouter.cpp", "bdSocketRouter::connect", 0x1C8u, "Removing addr from map .... and re-adding");
        bdHandleAssert(v3->m_endpointToAddrMap.m_numIterators.m_value._My_val == 0, "(m_numIterators == 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdhashmap.inl", "bdHashMap<class bdEndpoint,class bdReference<class bdAddrHandle>,class bdEndpointHashingClass>::remove", 0xA5u, "bdHashMap::remove, another iterator is being held while removing from hashmap");
        v10 = bdEndpointHashingClass::getHash(&v3->m_endpointToAddrMap.m_hashClass, &key) & (v3->m_endpointToAddrMap.m_capacity - 1);
        v11 = v3->m_endpointToAddrMap.m_map[v10];
        v12 = NULL;
        if ( v11 )
        {
          while ( !bdEndpoint::operator==(&key, &v11->m_key) )
          {
            v12 = v11;
            v11 = v11->m_next;
            if ( !v11 )
              goto LABEL_32;
          }
          m_next = v11->m_next;
          if ( v12 )
            v12->m_next = m_next;
          else
            v3->m_endpointToAddrMap.m_map[v10] = m_next;
          bdHashMap<bdEndpoint,bdReference<bdAddrHandle>,bdEndpointHashingClass>::Node::`scalar deleting destructor'(v11, 1u);
          --v3->m_endpointToAddrMap.m_size;
        }
LABEL_32:
        v14 = value;
        v15 = bdHashMap<bdEndpoint,bdReference<bdAddrHandle>,bdEndpointHashingClass>::put(&v3->m_endpointToAddrMap, &key, value);
        bdSharedMutex::unlock(v50);
        if ( !v15 )
        {
          bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdSocket/bdSocketRouter", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouter.cpp", "bdSocketRouter::connect", 0x20Du, "Repeated failure to add addr to map");
          v32 = 0;
          m_ptr = v33;
LABEL_93:
          bdSecurityID::~bdSecurityID(&key.m_secID);
          if ( key.m_ca.m_ptr )
          {
            if ( !_InterlockedDecrement((volatile signed __int32 *)&key.m_ca.m_ptr->m_refCount) && key.m_ca.m_ptr )
              ((void (__fastcall *)(bdCommonAddr *, __int64))key.m_ca.m_ptr->~bdReferencable)(key.m_ca.m_ptr, 1i64);
            m_ptr = v33;
          }
          goto LABEL_101;
        }
        m_ptr = v33;
      }
      v34 = NULL;
      v16 = 0;
      p_m_endpointToDTLSMutex = &v3->m_endpointToDTLSMutex;
      v51 = &v3->m_endpointToDTLSMutex;
      bdSharedMutex::lock_shared(&v3->m_endpointToDTLSMutex);
      p_m_endpointToDtlsMap = &v3->m_endpointToDtlsMap;
      iterator = bdHashMap<bdEndpoint,bdReference<bdDTLSAssociation>,bdEndpointHashingClass>::getIterator(&v3->m_endpointToDtlsMap);
      if ( iterator )
      {
        v18 = value;
        v19 = p_m_endpointToDtlsMap;
        do
        {
          if ( v16 )
            break;
          if ( iterator != &v34 )
          {
            if ( v34 && _InterlockedExchangeAdd((volatile signed __int32 *)&v34->m_refCount, 0xFFFFFFFF) == 1 )
              ((void (__fastcall *)(bdDTLSAssociation *, __int64))v34->~bdReferencable)(v34, 1i64);
            v20 = *(bdDTLSAssociation **)iterator;
            v34 = v20;
            if ( v20 )
              _InterlockedExchangeAdd((volatile signed __int32 *)&v20->m_refCount, 1u);
          }
          v21 = bdDTLSAssociation::getAddrHandle(v34, &result)->m_ptr->m_endpoint.m_ca.m_ptr;
          v44 = v21;
          if ( v21 )
            _InterlockedExchangeAdd((volatile signed __int32 *)&v21->m_refCount, 1u);
          v22 = v18->m_ptr->m_endpoint.m_ca.m_ptr;
          v54 = v22;
          if ( v22 )
            _InterlockedExchangeAdd((volatile signed __int32 *)&v22->m_refCount, 1u);
          v23 = bdCommonAddr::operator==(v21, v22);
          if ( v22 && _InterlockedExchangeAdd((volatile signed __int32 *)&v22->m_refCount, 0xFFFFFFFF) == 1 )
            ((void (__fastcall *)(const bdCommonAddr *, __int64))v22->~bdReferencable)(v22, 1i64);
          if ( v44 && _InterlockedExchangeAdd((volatile signed __int32 *)&v21->m_refCount, 0xFFFFFFFF) == 1 )
            ((void (__fastcall *)(bdCommonAddr *, __int64))v44->~bdReferencable)(v44, 1i64);
          if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
          {
            if ( result.m_ptr )
              ((void (__fastcall *)(bdAddrHandle *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
            result.m_ptr = NULL;
          }
          if ( v23 )
            v16 = 1;
          else
            bdHashMap<bdEndpoint,bdReference<bdDTLSAssociation>,bdEndpointHashingClass>::next(v19, &iterator);
        }
        while ( iterator );
        m_ptr = v33;
        p_m_endpointToDTLSMutex = v51;
        v3 = v39;
        v14 = value;
      }
      bdHashMap<bdEndpoint,bdReference<bdDTLSAssociation>,bdEndpointHashingClass>::releaseIterator(&v3->m_endpointToDtlsMap, iterator);
      bdSharedMutex::unlock_shared(p_m_endpointToDTLSMutex);
      if ( v16 )
      {
        bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/bdSocketRouter", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouter.cpp", "bdSocketRouter::connect", 0x1E9u, "Connection already exists in m_endpointToDtlsMap and we bypass NAT discovery");
        if ( v34 )
        {
          onNATAddrDiscovery = v3->onNATAddrDiscovery;
          v25 = bdDTLSAssociation::getAddrHandle(v34, &v46);
          RealAddr = bdAddrHandle::getRealAddr(v25->m_ptr, &v56);
          v45 = m_ptr;
          if ( m_ptr )
          {
            _InterlockedExchangeAdd((volatile signed __int32 *)v36, 1u);
            m_ptr = v33;
          }
          ((void (__fastcall *)(bdSocketRouter *, bdCommonAddr **, const bdAddr *))onNATAddrDiscovery)(v3, &v45, RealAddr);
          if ( v46.m_ptr )
          {
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v46.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v46.m_ptr )
              ((void (__fastcall *)(bdAddrHandle *, __int64))v46.m_ptr->~bdReferencable)(v46.m_ptr, 1i64);
            m_ptr = v33;
          }
          v27 = 1;
          v32 = 1;
        }
        else
        {
          v27 = 0;
        }
      }
      else if ( v3->shouldUseRelay(v3, v14) )
      {
        bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/bdSocketRouter", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouter.cpp", "bdSocketRouter::connect", 0x1F7u, "Using relay to connect");
        v28 = &v3->bdRelayAssociationListener;
        if ( !v3 )
          v28 = NULL;
        v47.m_ptr = m_ptr;
        if ( m_ptr )
        {
          _InterlockedExchangeAdd((volatile signed __int32 *)v36, 1u);
          m_ptr = v33;
        }
        v27 = bdRoutingLayer::connect(&v3->m_routingLayer, (const bdReference<bdCommonAddr>)&v47, v28);
        v32 = v27;
      }
      else
      {
        bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/bdSocketRouter", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouter.cpp", "bdSocketRouter::connect", 0x1FEu, "Performing NAT discovery");
        v48.m_ptr = m_ptr;
        if ( m_ptr )
        {
          _InterlockedExchangeAdd((volatile signed __int32 *)v36, 1u);
          m_ptr = v33;
        }
        v27 = bdNATTravClient::connect(&v3->m_natTrav, (bdReference<bdCommonAddr>)&v48, v3, 0);
        v32 = v27;
      }
      if ( v34 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v34->m_refCount, 0xFFFFFFFF) == 1 )
          ((void (__fastcall *)(bdDTLSAssociation *, __int64))v34->~bdReferencable)(v34, 1i64);
        m_ptr = v33;
      }
      if ( v27 )
      {
        v29 = v14->m_ptr->m_status;
        if ( v29 <= 2 || v29 == 6 )
          v14->m_ptr->m_status = BD_ADDR_RESOLVING;
      }
      goto LABEL_93;
    case BD_ADDR_RESOLVING:
      bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/bdSocketRouter", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouter.cpp", "bdSocketRouter::connect", 0x229u, "Address already resolving. Nothing to do.");
      goto LABEL_101;
    case BD_ADDR_RESOLVED:
      bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/bdSocketRouter", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouter.cpp", "bdSocketRouter::connect", 0x230u, "Address already resolved. Nothing to do.");
      goto LABEL_101;
    case BD_ADDR_CONNECTED:
      bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/bdSocketRouter", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouter.cpp", "bdSocketRouter::connect", 0x236u, "Address already connected. Nothing to do.");
      goto LABEL_101;
    default:
LABEL_101:
      if ( m_ptr )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v49, 0xFFFFFFFF) == 1 )
          ((void (__fastcall *)(bdCommonAddr *, __int64))v33->~bdReferencable)(v33, 1i64);
      }
      return v32;
  }
}

/*
==============
bdSocketRouter::disconnect
==============
*/
bool bdSocketRouter::disconnect(bdSocketRouter *this, bdReference<bdAddrHandle> *addrHandle)
{
  unsigned int v5; 
  bdSharedMutex *p_m_endpointToDTLSMutex; 
  bdDTLSAssociation *v7; 
  volatile signed __int32 *p_m_refCount; 
  bdReference<bdAddrHandle> *v9; 
  bool v10; 
  unsigned int Hash; 
  unsigned int m_capacity; 
  __int64 v13; 
  bdHashMap<bdEndpoint,bdReference<bdDTLSAssociation>,bdEndpointHashingClass>::Node **m_map; 
  unsigned int v15; 
  bdReference<bdDTLSAssociation> value; 
  bdSharedMutex *v17; 
  __int64 v18; 
  void *iterator; 
  bdDTLSAssociation *v20; 
  bdReference<bdAddrHandle> result; 

  v18 = -2i64;
  if ( this->m_status != BD_SOCKET_ROUTER_INITIALIZED )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/bdSocketRouter", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouter.cpp", "bdSocketRouter::disconnect", 0x245u, "Cannot disconnect unless class is initialized");
    return 0;
  }
  if ( !addrHandle->m_ptr )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/bdSocketRouter", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouter.cpp", "bdSocketRouter::disconnect", 0x249u, "Cannot disconnect using null addr handle ref");
    return 0;
  }
  v5 = 0;
  p_m_endpointToDTLSMutex = &this->m_endpointToDTLSMutex;
  v17 = &this->m_endpointToDTLSMutex;
  bdSharedMutex::lock(&this->m_endpointToDTLSMutex);
  iterator = bdHashMap<bdEndpoint,bdReference<bdDTLSAssociation>,bdEndpointHashingClass>::getIterator(&this->m_endpointToDtlsMap);
  if ( iterator )
  {
    do
    {
      v7 = *(bdDTLSAssociation **)iterator;
      v20 = v7;
      p_m_refCount = (volatile signed __int32 *)&v7->m_refCount;
      if ( v7 )
      {
        _InterlockedExchangeAdd(p_m_refCount, 1u);
        v7 = v20;
      }
      v9 = bdDTLSAssociation::getAddrHandle(v7, &result);
      v10 = bdAddrHandle::operator==(v9->m_ptr, addrHandle->m_ptr);
      if ( result.m_ptr )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
        {
          if ( result.m_ptr )
            ((void (__fastcall *)(bdAddrHandle *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
          result.m_ptr = NULL;
        }
        v7 = v20;
      }
      if ( v10 )
      {
        bdHashMap<bdEndpoint,bdReference<bdDTLSAssociation>,bdEndpointHashingClass>::remove(&this->m_endpointToDtlsMap, &iterator);
        value.m_ptr = v7;
        if ( v7 )
        {
          _InterlockedExchangeAdd((volatile signed __int32 *)&v7->m_refCount, 1u);
          v7 = v20;
        }
        bdSocketRouter::removeFromVtagToDtlsMap(this, (bdReference<bdDTLSAssociation>)&value);
        ++v5;
      }
      else if ( *((_QWORD *)iterator + 3) )
      {
        iterator = (void *)*((_QWORD *)iterator + 3);
      }
      else
      {
        Hash = bdEndpointHashingClass::getHash(&this->m_endpointToDtlsMap.m_hashClass, (const bdEndpoint *)((char *)iterator + 8));
        m_capacity = this->m_endpointToDtlsMap.m_capacity;
        v13 = (Hash & (m_capacity - 1)) + 1;
        if ( (unsigned int)v13 >= m_capacity )
        {
LABEL_25:
          iterator = NULL;
          _InterlockedExchangeAdd((volatile signed __int32 *)&this->m_endpointToDtlsMap.m_numIterators, 0xFFFFFFFF);
          v7 = v20;
        }
        else
        {
          m_map = this->m_endpointToDtlsMap.m_map;
          while ( !m_map[v13] )
          {
            v13 = (unsigned int)(v13 + 1);
            if ( (unsigned int)v13 >= m_capacity )
              goto LABEL_25;
          }
          iterator = m_map[v13];
        }
      }
      if ( v7 && _InterlockedExchangeAdd(p_m_refCount, 0xFFFFFFFF) == 1 )
        ((void (__fastcall *)(bdDTLSAssociation *, __int64))v20->~bdReferencable)(v20, 1i64);
    }
    while ( iterator );
    p_m_endpointToDTLSMutex = v17;
  }
  bdHashMap<bdEndpoint,bdReference<bdDTLSAssociation>,bdEndpointHashingClass>::releaseIterator(&this->m_endpointToDtlsMap, iterator);
  bdSharedMutex::unlock(p_m_endpointToDTLSMutex);
  if ( v5 > 1 )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdSocket/bdSocketRouter", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouter.cpp", "bdSocketRouter::disconnect", 0x266u, "More than one DTLS connection found for an addrHandle");
  if ( this->m_sendtoBuffer )
  {
    v15 = bdEndpoint::getHash(&addrHandle->m_ptr->m_endpoint);
    bdPacketBuffer::clearBuffer(this->m_sendtoBuffer, v15);
  }
  return bdAddressMap::unregisterAddr(&this->m_addrMap, addrHandle);
}

/*
==============
bdSocketRouter::disconnectExcessRelays
==============
*/
void bdSocketRouter::disconnectExcessRelays(bdSocketRouter *this)
{
  bdRoutingLayer::disconnectExcessRelays(&this->m_routingLayer);
}

/*
==============
bdSocketRouter::getAddressMap
==============
*/
bdAddressMap *bdSocketRouter::getAddressMap(bdSocketRouter *this)
{
  return &this->m_addrMap;
}

/*
==============
bdSocketRouter::getConfig
==============
*/
void bdSocketRouter::getConfig(bdSocketRouter *this, bdSocketRouterConfig *config)
{
  *config = this->m_config;
}

/*
==============
bdSocketRouter::getKeyMap
==============
*/
bdSecurityKeyMap *bdSocketRouter::getKeyMap(bdSocketRouter *this)
{
  return &this->m_keyStore;
}

/*
==============
bdSocketRouter::getLastReceived
==============
*/
double bdSocketRouter::getLastReceived(bdSocketRouter *this)
{
  return bdRoutingLayer::getLastReceived(&this->m_routingLayer);
}

/*
==============
bdSocketRouter::getLocalCommonAddr
==============
*/
bdReference<bdCommonAddr> *bdSocketRouter::getLocalCommonAddr(bdSocketRouter *this, bdReference<bdCommonAddr> *result)
{
  bdCommonAddr *m_ptr; 

  m_ptr = this->m_localCommonAddr.m_ptr;
  result->m_ptr = m_ptr;
  if ( m_ptr )
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
  return result;
}

/*
==============
bdSocketRouter::getNATTravClient
==============
*/
bdNATTravClient *bdSocketRouter::getNATTravClient(bdSocketRouter *this)
{
  return &this->m_natTrav;
}

/*
==============
bdSocketRouter::getNumBoundRelays
==============
*/
unsigned int bdSocketRouter::getNumBoundRelays(bdSocketRouter *this)
{
  return bdRoutingLayer::getNumBindingAssociations(&this->m_routingLayer);
}

/*
==============
bdSocketRouter::getPayloadSize
==============
*/
__int64 bdSocketRouter::getPayloadSize(bdSocketRouter *this, const bdReference<bdAddrHandle> addrHandle)
{
  unsigned int v3; 
  bdAddr result; 

  if ( bdAddrHandle::getRealAddr((bdAddrHandle *)addrHandle.m_ptr->__vftable, &result)->m_type == BD_ADDR_RELAYED )
  {
    v3 = 1270 - bdRelayData::getWrapperSize();
    if ( addrHandle.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&addrHandle.m_ptr->__vftable[1], 0xFFFFFFFF) == 1 )
    {
      if ( addrHandle.m_ptr->__vftable )
        (*(void (__fastcall **)(bdAddrHandle_vtbl *, __int64))addrHandle.m_ptr->~bdReferencable)(addrHandle.m_ptr->__vftable, 1i64);
      addrHandle.m_ptr->__vftable = NULL;
    }
    return v3;
  }
  else
  {
    if ( addrHandle.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&addrHandle.m_ptr->__vftable[1], 0xFFFFFFFF) == 1 )
    {
      if ( addrHandle.m_ptr->__vftable )
        (*(void (__fastcall **)(bdAddrHandle_vtbl *, __int64))addrHandle.m_ptr->~bdReferencable)(addrHandle.m_ptr->__vftable, 1i64);
      addrHandle.m_ptr->__vftable = NULL;
    }
    return 1270i64;
  }
}

/*
==============
bdSocketRouter::getProtocolOverhead
==============
*/
__int64 bdSocketRouter::getProtocolOverhead(bdSocketRouter *this, const bdReference<bdAddrHandle> addrHandle)
{
  unsigned int v3; 
  bdAddr result; 

  if ( bdAddrHandle::getRealAddr((bdAddrHandle *)addrHandle.m_ptr->__vftable, &result)->m_type == BD_ADDR_RELAYED )
  {
    v3 = bdRelayData::getWrapperSize() + 18;
    if ( addrHandle.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&addrHandle.m_ptr->__vftable[1], 0xFFFFFFFF) == 1 )
    {
      if ( addrHandle.m_ptr->__vftable )
        (*(void (__fastcall **)(bdAddrHandle_vtbl *, __int64))addrHandle.m_ptr->~bdReferencable)(addrHandle.m_ptr->__vftable, 1i64);
      addrHandle.m_ptr->__vftable = NULL;
    }
    return v3;
  }
  else
  {
    if ( addrHandle.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&addrHandle.m_ptr->__vftable[1], 0xFFFFFFFF) == 1 )
    {
      if ( addrHandle.m_ptr->__vftable )
        (*(void (__fastcall **)(bdAddrHandle_vtbl *, __int64))addrHandle.m_ptr->~bdReferencable)(addrHandle.m_ptr->__vftable, 1i64);
      addrHandle.m_ptr->__vftable = NULL;
    }
    return 18i64;
  }
}

/*
==============
bdSocketRouter::getQoSProber
==============
*/
bdQoSProbe *bdSocketRouter::getQoSProber(bdSocketRouter *this)
{
  return &this->m_qosProber;
}

/*
==============
bdSocketRouter::getRelayPing
==============
*/
double bdSocketRouter::getRelayPing(bdSocketRouter *this)
{
  return bdRoutingLayer::getRelayPing(&this->m_routingLayer);
}

/*
==============
bdSocketRouter::getRelayStatus
==============
*/
bdRelayAssociationStatus bdSocketRouter::getRelayStatus(bdSocketRouter *this)
{
  return bdRoutingLayer::getRelayStatus(&this->m_routingLayer);
}

/*
==============
bdSocketRouter::getSendtoBuffer
==============
*/
bdPacketBuffer *bdSocketRouter::getSendtoBuffer(bdSocketRouter *this)
{
  return this->m_sendtoBuffer;
}

/*
==============
bdSocketRouter::getStatus
==============
*/
__int64 bdSocketRouter::getStatus(bdSocketRouter *this, const bdReference<bdAddrHandle> addrHandle)
{
  bdDTLSAssociationStatus Status; 
  bool v5; 
  bdDTLSAssociation *v6; 
  bdReference<bdDTLSAssociation> value; 
  __int64 v9; 
  bdAddrHandle *m_ptr; 
  bdSharedMutex *p_m_endpointToDTLSMutex; 
  char str[24]; 
  char v13[24]; 
  char v14[24]; 
  char v15[24]; 

  v9 = -2i64;
  m_ptr = addrHandle.m_ptr;
  Status = BD_SOCKET_IDLE;
  if ( addrHandle.m_ptr->__vftable )
  {
    switch ( LODWORD(addrHandle.m_ptr->__vftable[4].~bdReferencable) )
    {
      case 1:
        goto $LN7_918;
      case 2:
        bdAddressMap::addrToString((const bdReference<bdAddrHandle> *)addrHandle.m_ptr, str, 0x16ui64);
        bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/bdSocketRouter", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouter.cpp", "bdSocketRouter::getStatus", 0x299u, "Address handle error. Socket lost. %s", str);
        goto $LN7_918;
      case 3:
        Status = BD_SOCKET_PENDING;
        break;
      case 4:
      case 5:
        value.m_ptr = NULL;
        p_m_endpointToDTLSMutex = &this->m_endpointToDTLSMutex;
        bdSharedMutex::lock_shared(&this->m_endpointToDTLSMutex);
        v5 = bdHashMap<bdEndpoint,bdReference<bdDTLSAssociation>,bdEndpointHashingClass>::get(&this->m_endpointToDtlsMap, (const bdEndpoint *)&addrHandle.m_ptr->__vftable[2], &value);
        bdSharedMutex::unlock_shared(&this->m_endpointToDTLSMutex);
        v6 = value.m_ptr;
        if ( v5 )
        {
          if ( value.m_ptr )
          {
            Status = bdDTLSAssociation::getStatus(value.m_ptr);
            goto LABEL_12;
          }
          bdAddressMap::addrToString((const bdReference<bdAddrHandle> *)addrHandle.m_ptr, v13, 0x16ui64);
          bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdSocket/bdSocketRouter", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouter.cpp", "bdSocketRouter::getStatus", 0x2C4u, "Invalid state! %s", v13);
        }
        else
        {
          bdAddressMap::addrToString((const bdReference<bdAddrHandle> *)addrHandle.m_ptr, v14, 0x16ui64);
          bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdSocket/bdSocketRouter", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouter.cpp", "bdSocketRouter::getStatus", 0x2BAu, "DTLS not found for %s", v14);
        }
        Status = BD_SOCKET_LOST;
LABEL_12:
        if ( v6 && _InterlockedExchangeAdd((volatile signed __int32 *)&v6->m_refCount, 0xFFFFFFFF) == 1 )
          ((void (__fastcall *)(bdDTLSAssociation *, __int64))value.m_ptr->~bdReferencable)(value.m_ptr, 1i64);
        break;
      case 6:
        bdAddressMap::addrToString((const bdReference<bdAddrHandle> *)addrHandle.m_ptr, v15, 0x16ui64);
        bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/bdSocketRouter", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouter.cpp", "bdSocketRouter::getStatus", 0x2D0u, "Address handle unresolved. Socket lost. %s", v15);
$LN7_918:
        Status = BD_SOCKET_LOST;
        break;
      default:
        break;
    }
  }
  else
  {
    Status = BD_SOCKET_LOST;
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/bdSocketRouter", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouter.cpp", "bdSocketRouter::getStatus", 0x27Cu, "Cannot get status of null addr handle ref");
  }
  if ( addrHandle.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&addrHandle.m_ptr->__vftable[1], 0xFFFFFFFF) == 1 )
  {
    if ( addrHandle.m_ptr->__vftable )
      (*(void (__fastcall **)(bdAddrHandle_vtbl *, __int64))addrHandle.m_ptr->~bdReferencable)(addrHandle.m_ptr->__vftable, 1i64);
    addrHandle.m_ptr->__vftable = NULL;
  }
  return (unsigned int)Status;
}

/*
==============
bdSocketRouter::getStatus
==============
*/
__int64 bdSocketRouter::getStatus(bdSocketRouter *this)
{
  return (unsigned int)this->m_status;
}

/*
==============
bdSocketRouter::getTelemetry
==============
*/
bdDTLSAssociationTelemetry *bdSocketRouter::getTelemetry(bdSocketRouter *this, bdDTLSAssociationTelemetry *result, const bdReference<bdAddrHandle> addrHandle)
{
  bdSharedMutex *p_m_endpointToDTLSMutex; 
  bool v7; 
  bdDTLSAssociation *v8; 
  bdReference<bdDTLSAssociation> value; 
  bdSharedMutex *v11; 
  __int64 v12; 
  bdAddrHandle *m_ptr; 
  bdDTLSAssociationTelemetry resulta; 

  v12 = -2i64;
  m_ptr = addrHandle.m_ptr;
  bdDTLSAssociationTelemetry::bdDTLSAssociationTelemetry(result);
  if ( bdAddrHandle::isResolved((bdAddrHandle *)addrHandle.m_ptr->__vftable) )
  {
    p_m_endpointToDTLSMutex = &this->m_endpointToDTLSMutex;
    v11 = &this->m_endpointToDTLSMutex;
    bdSharedMutex::lock_shared(&this->m_endpointToDTLSMutex);
    value.m_ptr = NULL;
    v7 = bdHashMap<bdEndpoint,bdReference<bdDTLSAssociation>,bdEndpointHashingClass>::get(&this->m_endpointToDtlsMap, (const bdEndpoint *)&addrHandle.m_ptr->__vftable[2], &value);
    v8 = value.m_ptr;
    if ( v7 && value.m_ptr )
    {
      bdDTLSAssociation::updateTelemetry(value.m_ptr);
      *result = *bdDTLSAssociation::getTelemetry(v8, &resulta);
    }
    if ( v8 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v8->m_refCount, 0xFFFFFFFF) == 1 )
        ((void (__fastcall *)(bdDTLSAssociation *, __int64))value.m_ptr->~bdReferencable)(value.m_ptr, 1i64);
      p_m_endpointToDTLSMutex = v11;
    }
    bdSharedMutex::unlock_shared(p_m_endpointToDTLSMutex);
  }
  if ( addrHandle.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&addrHandle.m_ptr->__vftable[1], 0xFFFFFFFF) == 1 )
  {
    if ( addrHandle.m_ptr->__vftable )
      (*(void (__fastcall **)(bdAddrHandle_vtbl *, __int64))addrHandle.m_ptr->~bdReferencable)(addrHandle.m_ptr->__vftable, 1i64);
    addrHandle.m_ptr->__vftable = NULL;
  }
  return result;
}

/*
==============
bdSocketRouter::init
==============
*/
_BOOL8 bdSocketRouter::init(bdSocketRouter *this, bdSocket *socket, const bdReference<bdCommonAddr> localCommonAddr, const bdSocketRouterConfig *config)
{
  const char *v8; 
  bdLogMessageType v9; 
  bool v10; 
  bdCommonAddr *v11; 
  bdPacketInterceptor *v12; 
  unsigned int line; 
  char *format; 
  bdReference<bdCommonAddr> localCommonAddra; 
  bdCommonAddr *m_ptr; 

  m_ptr = localCommonAddr.m_ptr;
  if ( this->m_status )
  {
    format = "init() called multiple times.";
    line = 69;
    v8 = "warn/";
    v9 = BD_LOG_WARNING;
LABEL_8:
    v10 = 0;
    bdLogMessage(v9, v8, "bdSocket/bdSocketRouter", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouter.cpp", "bdSocketRouter::init", line, format);
    goto LABEL_24;
  }
  if ( !socket )
  {
    format = "A valid socket pointer is required by this class";
    line = 74;
LABEL_7:
    v8 = (const char *)&other;
    v9 = BD_LOG_ERROR;
    goto LABEL_8;
  }
  if ( !localCommonAddr.m_ptr->__vftable )
  {
    format = "A valid local common addr ref is required by this class";
    line = 79;
    goto LABEL_7;
  }
  this->m_socket = socket;
  bdReference<bdCommonAddr>::operator=(&this->m_localCommonAddr, (const bdReference<bdCommonAddr> *)localCommonAddr.m_ptr);
  if ( bdECCKey::getStatus(&this->m_ECCKey) == BD_ECC_KEY_UNINITIALIZED && !bdECCKey::init(&this->m_ECCKey) )
    goto LABEL_22;
  v11 = this->m_localCommonAddr.m_ptr;
  localCommonAddra.m_ptr = v11;
  if ( v11 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v11->m_refCount, 1u);
  if ( !bdNATTravClient::init(&this->m_natTrav, socket, &this->m_qosBandwidth, (bdReference<bdCommonAddr>)&localCommonAddra, 1, 0) || !bdRoutingLayer::init(&this->m_routingLayer, socket) || !bdQoSProbe::init(&this->m_qosProber, socket, &this->m_natTrav, &this->m_qosBandwidth, &this->m_routingLayer) )
  {
LABEL_22:
    v10 = 0;
LABEL_23:
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdSocket/bdSocketRouter", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouter.cpp", "bdSocketRouter::init", 0x7Eu, "Socket Router initialization failed.");
    this->m_status = BD_SOCKET_ROUTER_ERROR;
    goto LABEL_24;
  }
  this->m_status = BD_SOCKET_ROUTER_INITIALIZED;
  bdSocketRouter::registerInterceptor(this, &this->m_natTrav);
  v12 = &this->m_qosProber.bdPacketInterceptor;
  if ( this == (bdSocketRouter *)-816i64 )
    v12 = NULL;
  bdSocketRouter::registerInterceptor(this, v12);
  bdSecurityKeyMap::registerListener(&this->m_keyStore, &this->bdSecurityKeyMapListener);
  bdNATTravClient::setSimulateNAT(&this->m_natTrav, config->m_simulateNAT);
  if ( config->m_simulateNAT )
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/bdSocketRouter", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouter.cpp", "bdSocketRouter::init", 0x71u, "Using NAT simulation. This will affect connectivity between clients, and should be used for testing purposes only!");
  this->m_config = *config;
  this->m_relayManager = config->m_relayManager;
  v10 = bdSocketRouterConfig::sanityCheckConfig(&this->m_config);
  if ( !v10 )
    goto LABEL_23;
LABEL_24:
  if ( localCommonAddr.m_ptr->__vftable && !_InterlockedDecrement((volatile signed __int32 *)&localCommonAddr.m_ptr->__vftable[1]) )
  {
    if ( localCommonAddr.m_ptr->__vftable )
      (*(void (__fastcall **)(bdCommonAddr_vtbl *, __int64))localCommonAddr.m_ptr->~bdReferencable)(localCommonAddr.m_ptr->__vftable, 1i64);
    localCommonAddr.m_ptr->__vftable = NULL;
  }
  return v10;
}

/*
==============
bdSocketRouter::isCrossNetwork
==============
*/
bool bdSocketRouter::isCrossNetwork(bdSocketRouter *this, const bdReference<bdCommonAddr> *remote)
{
  bdPlatformID m_platformID; 

  m_platformID = remote->m_ptr->m_platformID;
  return (unsigned int)(m_platformID - 1) > 0x30 && m_platformID != this->m_localCommonAddr.m_ptr->m_platformID;
}

/*
==============
bdSocketRouter::onNATAddrDiscovery
==============
*/
void bdSocketRouter::onNATAddrDiscovery(bdSocketRouter *this, bdReference<bdCommonAddr> remote, const bdAddr *realAddr)
{
  const bdCommonAddr **m_ptr; 
  __int64 v5; 
  unsigned int m_capacity; 
  bdHashMap<bdEndpoint,bdReference<bdAddrHandle>,bdEndpointHashingClass>::Node **m_map; 
  const bdEndpoint *v8; 
  bdAddrHandle *v9; 
  bdCommonAddr *v10; 
  bool v11; 
  bdAddrHandle *v12; 
  bdEndpoint *p_m_endpoint; 
  bdDTLSAssociation *v14; 
  unsigned __int16 cypherSuite; 
  float m_DTLSAssociationReceiveTimeout; 
  bdCommonAddr *v17; 
  bdDTLSAssociation *v18; 
  bdDTLSAssociation *v19; 
  bdCommonAddr *v20; 
  bdCommonAddr *v21; 
  unsigned int Hash; 
  unsigned int v23; 
  __int64 v24; 
  bdHashMap<bdEndpoint,bdReference<bdAddrHandle>,bdEndpointHashingClass>::Node **v25; 
  bdCommonAddr *v26; 
  char v27; 
  bdAddrHandle *v28; 
  bdReference<bdDTLSAssociation> value; 
  void *iterator; 
  bdAddr *realAddra; 
  bdCommonAddr *v32; 
  bdReference<bdCommonAddr> localCommonAddr; 
  bdReference<bdAddrHandle> addrHandle; 
  bdReference<bdCommonAddr> addr; 
  bdReference<bdDTLSAssociation> v36; 
  bdReference<bdCommonAddr> v37; 
  bdReference<bdCommonAddr> v38; 
  bdSharedMutex *v39; 
  bdSharedMutex *p_m_endpointToAddrMutex; 
  bdDTLSAssociation *v41; 
  __int64 v42; 
  bdCommonAddr *v43; 
  bdCommonAddr *v44; 
  bdSharedMutex *p_m_endpointToDTLSMutex; 
  char buffer[24]; 
  char v47[24]; 
  char str[24]; 
  char buf[1024]; 
  char v50[1024]; 
  char format[1024]; 

  v42 = -2i64;
  realAddra = (bdAddr *)realAddr;
  m_ptr = (const bdCommonAddr **)remote.m_ptr;
  v32 = remote.m_ptr;
  v43 = remote.m_ptr;
  v28 = NULL;
  if ( this->m_status != BD_SOCKET_ROUTER_INITIALIZED )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/bdSocketRouter", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouter.cpp", "bdSocketRouter::onNATAddrDiscovery", 0x5C3u, "Cannot react to NAT addr discovery event before class has been initialized");
    goto LABEL_63;
  }
  v27 = 0;
  p_m_endpointToAddrMutex = &this->m_endpointToAddrMutex;
  bdSharedMutex::lock(&this->m_endpointToAddrMutex);
  if ( !this->m_endpointToAddrMap.m_size )
    goto LABEL_59;
  v5 = 0i64;
  m_capacity = this->m_endpointToAddrMap.m_capacity;
  if ( m_capacity )
  {
    do
    {
      if ( this->m_endpointToAddrMap.m_map[v5] )
        break;
      v5 = (unsigned int)(v5 + 1);
    }
    while ( (unsigned int)v5 < m_capacity );
  }
  m_map = this->m_endpointToAddrMap.m_map;
  if ( m_map[v5] )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)&this->m_endpointToAddrMap.m_numIterators, 1u);
    m_map = this->m_endpointToAddrMap.m_map;
  }
  iterator = m_map[v5];
  if ( !iterator )
    goto LABEL_59;
  while ( 1 )
  {
    v8 = (const bdEndpoint *)((char *)iterator + 8);
    if ( iterator != &v28 )
    {
      if ( v28 && _InterlockedExchangeAdd((volatile signed __int32 *)&v28->m_refCount, 0xFFFFFFFF) == 1 )
        ((void (__fastcall *)(bdAddrHandle *, __int64))v28->~bdReferencable)(v28, 1i64);
      v9 = *(bdAddrHandle **)iterator;
      v28 = v9;
      if ( v9 )
        _InterlockedExchangeAdd((volatile signed __int32 *)&v9->m_refCount, 1u);
    }
    v10 = v8->m_ca.m_ptr;
    v44 = v10;
    if ( v10 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v10->m_refCount, 1u);
    v11 = bdCommonAddr::operator==(v10, *m_ptr);
    if ( v10 && _InterlockedExchangeAdd((volatile signed __int32 *)&v10->m_refCount, 0xFFFFFFFF) == 1 )
      ((void (__fastcall *)(bdCommonAddr *, __int64))v10->~bdReferencable)(v10, 1i64);
    if ( v11 )
    {
      v27 = 1;
      v12 = v28;
      bdAddrHandle::setRealAddr(v28, realAddra);
      p_m_endpoint = &v12->m_endpoint;
      value.m_ptr = NULL;
      p_m_endpointToDTLSMutex = &this->m_endpointToDTLSMutex;
      bdSharedMutex::lock_shared(&this->m_endpointToDTLSMutex);
      LOBYTE(v12) = bdHashMap<bdEndpoint,bdReference<bdDTLSAssociation>,bdEndpointHashingClass>::get(&this->m_endpointToDtlsMap, &v12->m_endpoint, &value);
      bdSharedMutex::unlock_shared(&this->m_endpointToDTLSMutex);
      if ( (_BYTE)v12 )
      {
        bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/bdSocketRouter", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouter.cpp", "bdSocketRouter::onNATAddrDiscovery", 0x617u, "already connected.");
      }
      else
      {
        bdAddr::toString(realAddra, str, 0x16ui64);
        bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/bdSocketRouter", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouter.cpp", "bdSocketRouter::onNATAddrDiscovery", 0x5E2u, "Address lookup succeeded. Creating DTLS conn to %s.", str);
        v14 = (bdDTLSAssociation *)bdMemory::allocate(0x4B8ui64);
        v41 = v14;
        if ( v14 )
        {
          cypherSuite = this->m_config.m_cypherSuite;
          m_DTLSAssociationReceiveTimeout = this->m_config.m_DTLSAssociationReceiveTimeout;
          v17 = this->m_localCommonAddr.m_ptr;
          localCommonAddr.m_ptr = v17;
          if ( v17 )
            _InterlockedExchangeAdd((volatile signed __int32 *)&v17->m_refCount, 1u);
          addrHandle.m_ptr = v28;
          if ( v28 )
            _InterlockedExchangeAdd((volatile signed __int32 *)&v28->m_refCount, 1u);
          bdDTLSAssociation::bdDTLSAssociation(v14, &this->m_routingLayer, &this->m_keyStore, &this->m_ECCKey, realAddra, (bdReference<bdAddrHandle>)&addrHandle, (bdReference<bdCommonAddr>)&localCommonAddr, &this->m_addrMap, m_DTLSAssociationReceiveTimeout, cypherSuite);
          v19 = v18;
        }
        else
        {
          v19 = NULL;
        }
        if ( value.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&value.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
          ((void (__fastcall *)(bdDTLSAssociation *, __int64))value.m_ptr->~bdReferencable)(value.m_ptr, 1i64);
        value.m_ptr = v19;
        if ( v19 )
          _InterlockedExchangeAdd((volatile signed __int32 *)&v19->m_refCount, 1u);
        bdDTLSAssociation::connect(v19);
        v39 = &this->m_endpointToDTLSMutex;
        bdSharedMutex::lock(&this->m_endpointToDTLSMutex);
        if ( bdHashMap<bdEndpoint,bdReference<bdDTLSAssociation>,bdEndpointHashingClass>::put(&this->m_endpointToDtlsMap, v8, &value) )
        {
          v36.m_ptr = v19;
          if ( v19 )
            _InterlockedExchangeAdd((volatile signed __int32 *)&v19->m_refCount, 1u);
          if ( !bdSocketRouter::addToVtagToDtlsMap(this, (bdReference<bdDTLSAssociation>)&v36) )
          {
            v21 = p_m_endpoint->m_ca.m_ptr;
            v37.m_ptr = v21;
            if ( v21 )
              _InterlockedExchangeAdd((volatile signed __int32 *)&v21->m_refCount, 1u);
            bdCommonAddrInfo::getInfo((const bdReference<bdCommonAddr>)&v37, v50, 0x400u);
            bdSecurityInfo::toString(&p_m_endpoint->m_secID, v47, 0x12u);
            bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdSocket/bdSocketRouter", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouter.cpp", "bdSocketRouter::onNATAddrDiscovery", 0x60Bu, "New DTLS with secID %s NOT added to the list.", v47);
            bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdSocket/bdSocketRouter", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouter.cpp", "bdSocketRouter::onNATAddrDiscovery", 0x60Cu, "Address: %s", v50);
            bdHashMap<bdEndpoint,bdReference<bdDTLSAssociation>,bdEndpointHashingClass>::remove(&this->m_endpointToDtlsMap, v8);
          }
        }
        else
        {
          v20 = p_m_endpoint->m_ca.m_ptr;
          addr.m_ptr = v20;
          if ( v20 )
            _InterlockedExchangeAdd((volatile signed __int32 *)&v20->m_refCount, 1u);
          bdCommonAddrInfo::getInfo((const bdReference<bdCommonAddr>)&addr, buf, 0x400u);
          bdSecurityInfo::toString(&p_m_endpoint->m_secID, buffer, 0x12u);
          bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdSocket/bdSocketRouter", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouter.cpp", "bdSocketRouter::onNATAddrDiscovery", 0x5FAu, "New DTLS with secID %s NOT added to the list.", buffer);
          bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdSocket/bdSocketRouter", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouter.cpp", "bdSocketRouter::onNATAddrDiscovery", 0x5FBu, "Address: %s", buf);
        }
        bdSharedMutex::unlock(v39);
      }
      bdHashMap<bdEndpoint,bdReference<bdAddrHandle>,bdEndpointHashingClass>::remove(&this->m_endpointToAddrMap, &iterator);
      if ( value.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&value.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
        ((void (__fastcall *)(bdDTLSAssociation *, __int64))value.m_ptr->~bdReferencable)(value.m_ptr, 1i64);
      m_ptr = (const bdCommonAddr **)v32;
      goto LABEL_73;
    }
    if ( !*((_QWORD *)iterator + 3) )
      break;
    iterator = (void *)*((_QWORD *)iterator + 3);
LABEL_73:
    if ( !iterator )
      goto LABEL_58;
  }
  Hash = bdEndpointHashingClass::getHash(&this->m_endpointToAddrMap.m_hashClass, v8);
  v23 = this->m_endpointToAddrMap.m_capacity;
  v24 = (Hash & (v23 - 1)) + 1;
  if ( (unsigned int)v24 < v23 )
  {
    v25 = this->m_endpointToAddrMap.m_map;
    while ( !v25[v24] )
    {
      v24 = (unsigned int)(v24 + 1);
      if ( (unsigned int)v24 >= v23 )
        goto LABEL_57;
    }
    iterator = v25[v24];
    goto LABEL_73;
  }
LABEL_57:
  _InterlockedExchangeAdd((volatile signed __int32 *)&this->m_endpointToAddrMap.m_numIterators, 0xFFFFFFFF);
LABEL_58:
  if ( !v27 )
  {
LABEL_59:
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdSocket/bdSocketRouter", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouter.cpp", "bdSocketRouter::onNATAddrDiscovery", 0x625u, "Address lookup failed.");
    v26 = (bdCommonAddr *)*m_ptr;
    v38.m_ptr = v26;
    if ( v26 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v26->m_refCount, 1u);
    bdCommonAddrInfo::getBriefInfo((const bdReference<bdCommonAddr>)&v38, format, 0x400u);
    bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/bdSocketRouter", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouter.cpp", "bdSocketRouter::onNATAddrDiscovery", 0x628u, format);
  }
  bdSharedMutex::unlock(p_m_endpointToAddrMutex);
LABEL_63:
  if ( v28 && _InterlockedExchangeAdd((volatile signed __int32 *)&v28->m_refCount, 0xFFFFFFFF) == 1 )
    ((void (__fastcall *)(bdAddrHandle *, __int64))v28->~bdReferencable)(v28, 1i64);
  if ( *m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&(*m_ptr)->m_refCount, 0xFFFFFFFF) == 1 )
  {
    if ( *m_ptr )
      ((void (__fastcall *)(const bdCommonAddr *, __int64))(*m_ptr)->~bdReferencable)(*m_ptr, 1i64);
    *m_ptr = NULL;
  }
}

/*
==============
bdSocketRouter::onNATAddrDiscoveryFailed
==============
*/
void bdSocketRouter::onNATAddrDiscoveryFailed(bdSocketRouter *this, bdReference<bdCommonAddr> remote)
{
  bdCommonAddr *v4; 
  bdCommonAddr *v5; 
  bdRelayAssociationListener *v6; 
  bdCommonAddr *v7; 
  bool v8; 
  unsigned int v9; 
  unsigned int m_capacity; 
  __int64 v11; 
  bdHashMap<bdEndpoint,bdReference<bdAddrHandle>,bdEndpointHashingClass>::Node **m_map; 
  bdEndpoint *v13; 
  __int64 v14; 
  bdCommonAddr *v15; 
  bool v16; 
  bdPacketBuffer *m_sendtoBuffer; 
  unsigned int Hash; 
  unsigned int v19; 
  unsigned int v20; 
  __int64 v21; 
  bdHashMap<bdEndpoint,bdReference<bdAddrHandle>,bdEndpointHashingClass>::Node **v22; 
  char v23; 
  void *iterator; 
  __int64 v25; 
  bdReference<bdCommonAddr> v26; 
  bdReference<bdCommonAddr> remotea; 
  bdReference<bdCommonAddr> addr; 
  bdSharedMutex *p_m_endpointToAddrMutex; 
  __int64 v30; 
  bdCommonAddr *m_ptr; 
  bdCommonAddr *v32; 
  char buf[1024]; 

  v30 = -2i64;
  m_ptr = remote.m_ptr;
  bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/bdSocketRouter", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouter.cpp", "bdSocketRouter::onNATAddrDiscoveryFailed", 0x632u, "NAT Discovery Failed - Local addr:");
  v4 = this->m_localCommonAddr.m_ptr;
  addr.m_ptr = v4;
  if ( v4 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v4->m_refCount, 1u);
  bdCommonAddrInfo::getInfo((const bdReference<bdCommonAddr>)&addr, buf, 0x400u);
  bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/bdSocketRouter", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouter.cpp", "bdSocketRouter::onNATAddrDiscoveryFailed", 0x634u, buf);
  bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/bdSocketRouter", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouter.cpp", "bdSocketRouter::onNATAddrDiscoveryFailed", 0x635u, "NAT Discovery Failed - Remote addr:");
  v5 = (bdCommonAddr *)remote.m_ptr->__vftable;
  v26.m_ptr = v5;
  if ( v5 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v5->m_refCount, 1u);
  bdCommonAddrInfo::getInfo((const bdReference<bdCommonAddr>)&v26, buf, 0x400u);
  bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/bdSocketRouter", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouter.cpp", "bdSocketRouter::onNATAddrDiscoveryFailed", 0x637u, buf);
  if ( this->shouldUseRelayIfNatTravFails(this, (const bdReference<bdCommonAddr> *)remote.m_ptr) )
  {
    bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/bdSocketRouter", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouter.cpp", "bdSocketRouter::onNATAddrDiscoveryFailed", 0x63Cu, "Attempting to connect via relay instead.");
    v6 = &this->bdRelayAssociationListener;
    if ( !this )
      v6 = NULL;
    v7 = (bdCommonAddr *)remote.m_ptr->__vftable;
    remotea.m_ptr = v7;
    if ( v7 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v7->m_refCount, 1u);
    v8 = bdRoutingLayer::connect(&this->m_routingLayer, (const bdReference<bdCommonAddr>)&remotea, v6);
    bdTelemetry::addRelayFallback(&this->m_localCommonAddr, (const bdReference<bdCommonAddr> *)remote.m_ptr, v8);
    if ( v8 )
    {
      if ( remote.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&remote.m_ptr->__vftable[1], 0xFFFFFFFF) == 1 )
      {
        if ( remote.m_ptr->__vftable )
          (*(void (__fastcall **)(bdCommonAddr_vtbl *, __int64))remote.m_ptr->~bdReferencable)(remote.m_ptr->__vftable, 1i64);
        remote.m_ptr->__vftable = NULL;
      }
      return;
    }
  }
  v25 = 0i64;
  v23 = 0;
  p_m_endpointToAddrMutex = &this->m_endpointToAddrMutex;
  bdSharedMutex::lock(&this->m_endpointToAddrMutex);
  if ( !this->m_endpointToAddrMap.m_size )
    goto LABEL_47;
  v9 = 0;
  m_capacity = this->m_endpointToAddrMap.m_capacity;
  if ( m_capacity )
  {
    do
    {
      if ( this->m_endpointToAddrMap.m_map[v9] )
        break;
      ++v9;
    }
    while ( v9 < m_capacity );
  }
  v11 = v9;
  m_map = this->m_endpointToAddrMap.m_map;
  if ( m_map[v11] )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)&this->m_endpointToAddrMap.m_numIterators, 1u);
    m_map = this->m_endpointToAddrMap.m_map;
  }
  iterator = m_map[v11];
  if ( !iterator )
    goto LABEL_47;
  while ( 1 )
  {
    v13 = (bdEndpoint *)((char *)iterator + 8);
    if ( iterator != &v25 )
    {
      if ( v25 && _InterlockedExchangeAdd((volatile signed __int32 *)(v25 + 8), 0xFFFFFFFF) == 1 )
        (**(void (__fastcall ***)(__int64, __int64))v25)(v25, 1i64);
      v14 = *(_QWORD *)iterator;
      v25 = v14;
      if ( v14 )
        _InterlockedExchangeAdd((volatile signed __int32 *)(v14 + 8), 1u);
    }
    v15 = v13->m_ca.m_ptr;
    v32 = v15;
    if ( v15 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v15->m_refCount, 1u);
    v16 = bdCommonAddr::operator==(v15, (const bdCommonAddr *)remote.m_ptr->__vftable);
    if ( v15 && _InterlockedExchangeAdd((volatile signed __int32 *)&v15->m_refCount, 0xFFFFFFFF) == 1 )
      ((void (__fastcall *)(bdCommonAddr *, __int64))v15->~bdReferencable)(v15, 1i64);
    if ( v16 )
    {
      v23 = 1;
      m_sendtoBuffer = this->m_sendtoBuffer;
      if ( m_sendtoBuffer )
      {
        Hash = bdEndpoint::getHash(v13);
        bdPacketBuffer::clearBuffer(m_sendtoBuffer, Hash);
      }
      bdHashMap<bdEndpoint,bdReference<bdAddrHandle>,bdEndpointHashingClass>::remove(&this->m_endpointToAddrMap, &iterator);
      if ( *(_DWORD *)(v25 + 32) == 3 )
        *(_DWORD *)(v25 + 32) = 2;
      goto LABEL_58;
    }
    if ( !*((_QWORD *)iterator + 3) )
      break;
    iterator = (void *)*((_QWORD *)iterator + 3);
LABEL_58:
    if ( !iterator )
      goto LABEL_46;
  }
  v19 = bdEndpointHashingClass::getHash(&this->m_endpointToAddrMap.m_hashClass, v13);
  v20 = this->m_endpointToAddrMap.m_capacity;
  v21 = (v19 & (v20 - 1)) + 1;
  if ( (unsigned int)v21 < v20 )
  {
    v22 = this->m_endpointToAddrMap.m_map;
    while ( !v22[v21] )
    {
      v21 = (unsigned int)(v21 + 1);
      if ( (unsigned int)v21 >= v20 )
        goto LABEL_45;
    }
    iterator = v22[v21];
    goto LABEL_58;
  }
LABEL_45:
  _InterlockedExchangeAdd((volatile signed __int32 *)&this->m_endpointToAddrMap.m_numIterators, 0xFFFFFFFF);
LABEL_46:
  if ( !v23 )
LABEL_47:
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdSocket/bdSocketRouter", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouter.cpp", "bdSocketRouter::onNATAddrDiscoveryFailed", 0x668u, "Address lookup failed.");
  bdSharedMutex::unlock(p_m_endpointToAddrMutex);
  if ( v25 && _InterlockedExchangeAdd((volatile signed __int32 *)(v25 + 8), 0xFFFFFFFF) == 1 )
    (**(void (__fastcall ***)(__int64, __int64))v25)(v25, 1i64);
  if ( remote.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&remote.m_ptr->__vftable[1], 0xFFFFFFFF) == 1 )
  {
    if ( remote.m_ptr->__vftable )
      (*(void (__fastcall **)(bdCommonAddr_vtbl *, __int64))remote.m_ptr->~bdReferencable)(remote.m_ptr->__vftable, 1i64);
    remote.m_ptr->__vftable = NULL;
  }
}

/*
==============
bdSocketRouter::onRelayAssociationError
==============
*/
void bdSocketRouter::onRelayAssociationError(bdSocketRouter *this, const bdRelayAssociation *assoc)
{
  bdRelayAssociation *m_ptr; 
  unsigned __int64 RelayID; 
  bdCommonAddr *m_listener; 
  const bdRelayJoinData *v7; 
  void *Ptr; 
  bdRelayJoinData v9; 

  if ( bdRoutingLayer::getBoundAssociation((bdRoutingLayer *)&this->m_keyStore.m_mutex)->m_ptr )
  {
    m_ptr = bdRoutingLayer::getBoundAssociation((bdRoutingLayer *)&this->m_keyStore.m_mutex)->m_ptr;
    RelayID = bdRelayAssociation::getRelayID((bdRelayAssociation *)assoc);
    if ( RelayID == bdRelayAssociation::getRelayID(m_ptr) )
    {
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/bdSocketRouter", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouter.cpp", "bdSocketRouter::onRelayAssociationError", 0x735u, "Bound association disconnected, unvalidating join data.");
      m_listener = (bdCommonAddr *)this->m_config.m_listener;
      bdRelayJoinData::bdRelayJoinData(&v9);
      bdCommonAddr::setRelayJoinData(m_listener, v7);
      Ptr = this->m_routingLayer.m_mutex.m_mutexData.Ptr;
      if ( Ptr )
        (*(void (__fastcall **)(void *))(*(_QWORD *)Ptr + 48i64))(Ptr);
    }
  }
}

/*
==============
bdSocketRouter::onRelayAssociationMigrate
==============
*/
void bdSocketRouter::onRelayAssociationMigrate(bdSocketRouter *this, const bdRelayAssociation *assoc)
{
  void *Ptr; 
  void (__fastcall *v3)(void *, const bdAddr *); 
  const bdAddr *RelayAddr; 

  Ptr = this->m_routingLayer.m_mutex.m_mutexData.Ptr;
  if ( Ptr )
  {
    v3 = *(void (__fastcall **)(void *, const bdAddr *))(*(_QWORD *)Ptr + 24i64);
    RelayAddr = bdRelayAssociation::getRelayAddr((bdRelayAssociation *)assoc);
    v3(Ptr, RelayAddr);
  }
}

/*
==============
bdSocketRouter::onRelayBindSuccess
==============
*/
void bdSocketRouter::onRelayBindSuccess(bdSocketRouter *this, const bdRelayAssociation *assoc)
{
  unsigned __int64 RelayID; 
  bdCommonAddr *m_listener; 
  const bdRelayJoinData *LocalJoinData; 

  RelayID = bdRelayAssociation::getRelayID((bdRelayAssociation *)assoc);
  bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/bdSocketRouter", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouter.cpp", "bdSocketRouter::onRelayBindSuccess", 0x66Fu, "Bound association is now [%llu]", RelayID);
  m_listener = (bdCommonAddr *)this->m_config.m_listener;
  LocalJoinData = bdRelayAssociation::getLocalJoinData((bdRelayAssociation *)assoc);
  bdCommonAddr::setRelayJoinData(m_listener, LocalJoinData);
}

/*
==============
bdSocketRouter::onRelayConnectionFailure
==============
*/
void bdSocketRouter::onRelayConnectionFailure(bdSocketRouter *this, const bdReference<bdCommonAddr> remote)
{
  bdCommonAddr *m_listener; 
  bdCommonAddr *v5; 
  char v6; 
  __int64 v7; 
  unsigned int m_size; 
  __int64 v9; 
  bdEndpoint *v10; 
  __int64 v11; 
  bdCommonAddr *v12; 
  bool v13; 
  bdHashMap<bdReference<bdCommonAddr>,bdReference<bdDTLSAssociation>,bdHashingClass>::Node **m_map; 
  unsigned int Hash; 
  unsigned int v16; 
  unsigned int v17; 
  __int64 v18; 
  __int64 v19; 
  char v20; 
  void *iterator; 
  __int64 v22; 
  bdReference<bdCommonAddr> v23; 
  bdReference<bdCommonAddr> addr; 
  bdSharedMutex *p_m_endpointToDTLSMutex; 
  __int64 v26; 
  bdCommonAddr *m_ptr; 
  bdCommonAddr *v28; 
  __int64 v29; 
  bdSharedMutex *p_m_vtagToDTLSMutex; 
  char buf[1024]; 

  v26 = -2i64;
  m_ptr = remote.m_ptr;
  bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/bdSocketRouter", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouter.cpp", "bdSocketRouter::onRelayConnectionFailure", 0x6F9u, "Relay connection failed");
  bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/bdSocketRouter", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouter.cpp", "bdSocketRouter::onRelayConnectionFailure", 0x6FDu, "Relay connection failed - Local addr:");
  m_listener = (bdCommonAddr *)this->m_config.m_listener;
  addr.m_ptr = m_listener;
  if ( m_listener )
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_listener->m_refCount, 1u);
  bdCommonAddrInfo::getInfo((const bdReference<bdCommonAddr>)&addr, buf, 0x400u);
  bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/bdSocketRouter", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouter.cpp", "bdSocketRouter::onRelayConnectionFailure", 0x6FFu, buf);
  bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/bdSocketRouter", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouter.cpp", "bdSocketRouter::onRelayConnectionFailure", 0x700u, "Relay connection failed - Remote addr:");
  v5 = (bdCommonAddr *)remote.m_ptr->__vftable;
  v23.m_ptr = v5;
  if ( v5 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v5->m_refCount, 1u);
  bdCommonAddrInfo::getInfo((const bdReference<bdCommonAddr>)&v23, buf, 0x400u);
  bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/bdSocketRouter", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouter.cpp", "bdSocketRouter::onRelayConnectionFailure", 0x702u, buf);
  v22 = 0i64;
  v6 = 0;
  v20 = 0;
  p_m_endpointToDTLSMutex = &this->m_endpointToDTLSMutex;
  bdSharedMutex::lock(&this->m_endpointToDTLSMutex);
  if ( !this->m_qosProber.m_statsPerSession.m_capacity )
    goto LABEL_36;
  v7 = 0i64;
  m_size = this->m_qosProber.m_statsPerSession.m_size;
  if ( m_size )
  {
    do
    {
      if ( *(_QWORD *)(*(_QWORD *)&this->m_endpointToAddrMap.m_size + 8 * v7) )
        break;
      v7 = (unsigned int)(v7 + 1);
    }
    while ( (unsigned int)v7 < m_size );
  }
  v9 = *(_QWORD *)&this->m_endpointToAddrMap.m_size;
  if ( *(_QWORD *)(v9 + 8 * v7) )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)&this->m_endpointToAddrMap.m_threshold, 1u);
    v9 = *(_QWORD *)&this->m_endpointToAddrMap.m_size;
  }
  iterator = *(void **)(v9 + 8 * v7);
  if ( !iterator )
    goto LABEL_36;
  while ( 1 )
  {
    v10 = (bdEndpoint *)((char *)iterator + 8);
    if ( iterator != &v22 )
    {
      if ( v22 && _InterlockedExchangeAdd((volatile signed __int32 *)(v22 + 8), 0xFFFFFFFF) == 1 )
        (**(void (__fastcall ***)(__int64, __int64))v22)(v22, 1i64);
      v11 = *(_QWORD *)iterator;
      v22 = v11;
      if ( v11 )
        _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 8), 1u);
    }
    v12 = v10->m_ca.m_ptr;
    v28 = v12;
    if ( v12 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v12->m_refCount, 1u);
    v13 = bdCommonAddr::operator==(v12, (const bdCommonAddr *)remote.m_ptr->__vftable);
    if ( v12 && _InterlockedExchangeAdd((volatile signed __int32 *)&v12->m_refCount, 0xFFFFFFFF) == 1 )
      ((void (__fastcall *)(bdCommonAddr *, __int64))v12->~bdReferencable)(v12, 1i64);
    if ( v13 )
    {
      v20 = 1;
      m_map = this->m_migratingDtlsMap.m_map;
      if ( m_map )
      {
        Hash = bdEndpoint::getHash(v10);
        bdPacketBuffer::clearBuffer((bdPacketBuffer *)m_map, Hash);
      }
      bdHashMap<bdEndpoint,bdReference<bdAddrHandle>,bdEndpointHashingClass>::remove((bdHashMap<bdEndpoint,bdReference<bdAddrHandle>,bdEndpointHashingClass> *)&this->m_qosProber.m_statsPerSession.m_capacity, &iterator);
      if ( *(_DWORD *)(v22 + 32) == 3 )
        *(_DWORD *)(v22 + 32) = 2;
      goto LABEL_49;
    }
    if ( !*((_QWORD *)iterator + 3) )
      break;
    iterator = (void *)*((_QWORD *)iterator + 3);
LABEL_49:
    if ( !iterator )
      goto LABEL_35;
  }
  v16 = bdEndpointHashingClass::getHash((bdEndpointHashingClass *)&this->m_endpointToAddrMap.m_loadFactor, v10);
  v17 = this->m_qosProber.m_statsPerSession.m_size;
  v18 = (v16 & (v17 - 1)) + 1;
  if ( (unsigned int)v18 < v17 )
  {
    v19 = *(_QWORD *)&this->m_endpointToAddrMap.m_size;
    while ( !*(_QWORD *)(v19 + 8 * v18) )
    {
      v18 = (unsigned int)(v18 + 1);
      if ( (unsigned int)v18 >= v17 )
        goto LABEL_34;
    }
    iterator = *(void **)(v19 + 8 * v18);
    goto LABEL_49;
  }
LABEL_34:
  _InterlockedExchangeAdd((volatile signed __int32 *)&this->m_endpointToAddrMap.m_threshold, 0xFFFFFFFF);
LABEL_35:
  v6 = v20;
LABEL_36:
  v29 = 0i64;
  p_m_vtagToDTLSMutex = &this->m_vtagToDTLSMutex;
  bdSharedMutex::lock(&this->m_vtagToDTLSMutex);
  if ( !v6 && !bdHashMap<bdReference<bdCommonAddr>,bdReference<bdDTLSAssociation>,bdHashingClass>::remove((bdHashMap<bdReference<bdCommonAddr>,bdReference<bdDTLSAssociation>,bdHashingClass> *)&this->m_vtagToDtlsMap.m_map, (const bdReference<bdCommonAddr> *)remote.m_ptr) )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdSocket/bdSocketRouter", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouter.cpp", "bdSocketRouter::onRelayConnectionFailure", 0x72Du, "address lookup failed.");
  bdSharedMutex::unlock(&this->m_vtagToDTLSMutex);
  bdSharedMutex::unlock(p_m_endpointToDTLSMutex);
  if ( v22 && _InterlockedExchangeAdd((volatile signed __int32 *)(v22 + 8), 0xFFFFFFFF) == 1 )
    (**(void (__fastcall ***)(__int64, __int64))v22)(v22, 1i64);
  if ( remote.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&remote.m_ptr->__vftable[1], 0xFFFFFFFF) == 1 )
  {
    if ( remote.m_ptr->__vftable )
      (*(void (__fastcall **)(bdCommonAddr_vtbl *, __int64))remote.m_ptr->~bdReferencable)(remote.m_ptr->__vftable, 1i64);
    remote.m_ptr->__vftable = NULL;
  }
}

/*
==============
bdSocketRouter::onRelayConnectionSuccess
==============
*/
void bdSocketRouter::onRelayConnectionSuccess(bdSocketRouter *this, const bdReference<bdCommonAddr> remote, const bdAddr *realAddr)
{
  const bdAddr *v3; 
  __int64 i; 
  const bdEndpoint *v7; 
  bdCommonAddr *v8; 
  bool v9; 
  bdAddrHandle *v10; 
  bdAddrHandle *v11; 
  bdEndpoint *p_m_endpoint; 
  bdDTLSAssociation *v13; 
  unsigned __int16 cypherSuite; 
  float v15; 
  bdCommonAddr *m_listener; 
  bdDTLSAssociation *v17; 
  bdDTLSAssociation *v18; 
  bdDTLSAssociation *v19; 
  unsigned __int64 RelayID; 
  bdReference<bdAddrHandle> *v21; 
  const bdAddr *v22; 
  unsigned __int64 v23; 
  const bdEndpoint **v24; 
  bdCommonAddr *v25; 
  unsigned int Hash; 
  unsigned int m_size; 
  __int64 v28; 
  __int64 v29; 
  bdCommonAddr *v30; 
  char v31; 
  bdReference<bdDTLSAssociation> dtls; 
  void *iterator; 
  bdAddrHandle *v34; 
  bdReference<bdDTLSAssociation> value; 
  bdReference<bdAddrHandle> v36; 
  bdAddr *addr; 
  bdReference<bdCommonAddr> localCommonAddr; 
  bdReference<bdAddrHandle> addrHandle; 
  bdReference<bdDTLSAssociation> v40; 
  bdReference<bdCommonAddr> v41; 
  bdReference<bdAddrHandle> result; 
  bdReference<bdCommonAddr> v43; 
  bdSharedMutex *p_m_vtagToDTLSMutex; 
  bdSharedMutex *p_m_map; 
  bdSharedMutex *p_m_endpointToDTLSMutex; 
  bdDTLSAssociation *v47; 
  __int64 v48; 
  bdCommonAddr *m_ptr; 
  bdCommonAddr *v50; 
  bdEndpoint oldEndpoint; 
  bdAddr v52; 
  char buffer[24]; 
  char str[24]; 
  char buf[1024]; 
  char format[1024]; 

  v48 = -2i64;
  v3 = realAddr;
  addr = (bdAddr *)realAddr;
  m_ptr = remote.m_ptr;
  bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/bdSocketRouter", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouter.cpp", "bdSocketRouter::onRelayConnectionSuccess", 0x689u, "onRelayConnectionSuccess");
  v34 = NULL;
  if ( LODWORD(this->m_interceptors.m_data) != 1 )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/bdSocketRouter", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouter.cpp", "bdSocketRouter::onRelayConnectionSuccess", 0x68Eu, "Cannot react to relay connection success event before class has been initialized");
    goto LABEL_83;
  }
  dtls.m_ptr = NULL;
  p_m_vtagToDTLSMutex = &this->m_vtagToDTLSMutex;
  bdSharedMutex::lock(&this->m_vtagToDTLSMutex);
  if ( LODWORD(this->m_vtagToDtlsMap.m_map) )
  {
    for ( i = *(_QWORD *)(*(_QWORD *)&this->m_migratingDtlsMap.m_size + 8i64 * ((HIBYTE(remote.m_ptr->__vftable) ^ (16777619 * (BYTE6(remote.m_ptr->__vftable) ^ (16777619 * (BYTE5(remote.m_ptr->__vftable) ^ (16777619 * (BYTE4(remote.m_ptr->__vftable) ^ (16777619 * (BYTE3(remote.m_ptr->__vftable) ^ (16777619 * (BYTE2(remote.m_ptr->__vftable) ^ (16777619 * ((16777619 * LOBYTE(remote.m_ptr->__vftable)) ^ BYTE1(remote.m_ptr->__vftable)))))))))))))) & (unsigned int)(HIDWORD(this->m_vtagToDtlsMap.m_map) - 1))); i; i = *(_QWORD *)(i + 16) )
    {
      if ( remote.m_ptr->__vftable == *(bdCommonAddr_vtbl **)(i + 8) )
      {
        _InterlockedExchangeAdd((volatile signed __int32 *)&this->m_migratingDtlsMap.m_threshold, 1u);
        if ( (bdReference<bdDTLSAssociation> *)i != &dtls )
        {
          v19 = *(bdDTLSAssociation **)i;
          dtls.m_ptr = v19;
          if ( v19 )
            _InterlockedExchangeAdd((volatile signed __int32 *)&v19->m_refCount, 1u);
        }
        bdHandleAssert(this->m_migratingDtlsMap.m_threshold != 0, "m_numIterators != 0", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdhashmap.inl", "bdHashMap<class bdReference<class bdCommonAddr>,class bdReference<class bdDTLSAssociation>,class bdHashingClass>::releaseIterator", 0x18Au, "bdHashMap::releaseIterator Iterator count reached 0, can't release iterator");
        _InterlockedExchangeAdd((volatile signed __int32 *)&this->m_migratingDtlsMap.m_threshold, 0xFFFFFFFF);
        RelayID = bdRelayRoute::getRelayID(&v3->m_relayRoute);
        v21 = bdDTLSAssociation::getAddrHandle(dtls.m_ptr, &result);
        v22 = bdAddrHandle::getRealAddr(v21->m_ptr, &v52);
        v23 = bdRelayRoute::getRelayID(&v22->m_relayRoute);
        bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/bdSocketRouter", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouter.cpp", "bdSocketRouter::onRelayConnectionSuccess", 0x69Au, "Migrating DTLS association from relay %u to relay %u.", v23, RelayID);
        if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result.m_ptr )
          ((void (__fastcall *)(bdAddrHandle *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
        v24 = (const bdEndpoint **)bdDTLSAssociation::getAddrHandle(dtls.m_ptr, &v36);
        bdEndpoint::bdEndpoint(&oldEndpoint, *v24 + 1);
        if ( v36.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v36.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
        {
          if ( v36.m_ptr )
            ((void (__fastcall *)(bdAddrHandle *, __int64))v36.m_ptr->~bdReferencable)(v36.m_ptr, 1i64);
          v36.m_ptr = NULL;
        }
        bdDTLSAssociation::migrate(dtls.m_ptr, (const bdReference<bdCommonAddr> *)remote.m_ptr, v3);
        bdSocketRouter::updateDtls((bdSocketRouter *)((char *)this - 16), &oldEndpoint, &dtls);
        bdHashMap<bdReference<bdCommonAddr>,bdReference<bdDTLSAssociation>,bdHashingClass>::remove((bdHashMap<bdReference<bdCommonAddr>,bdReference<bdDTLSAssociation>,bdHashingClass> *)&this->m_vtagToDtlsMap.m_map, (const bdReference<bdCommonAddr> *)remote.m_ptr);
        bdSecurityID::~bdSecurityID(&oldEndpoint.m_secID);
        if ( oldEndpoint.m_ca.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&oldEndpoint.m_ca.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
        {
          if ( oldEndpoint.m_ca.m_ptr )
            ((void (__fastcall *)(bdCommonAddr *, __int64))oldEndpoint.m_ca.m_ptr->~bdReferencable)(oldEndpoint.m_ca.m_ptr, 1i64);
          oldEndpoint.m_ca.m_ptr = NULL;
        }
        bdSharedMutex::unlock(p_m_vtagToDTLSMutex);
        if ( dtls.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&dtls.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
          ((void (__fastcall *)(bdDTLSAssociation *, __int64))dtls.m_ptr->~bdReferencable)(dtls.m_ptr, 1i64);
        if ( remote.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&remote.m_ptr->__vftable[1], 0xFFFFFFFF) == 1 )
        {
          if ( remote.m_ptr->__vftable )
            (*(void (__fastcall **)(bdCommonAddr_vtbl *, __int64))remote.m_ptr->~bdReferencable)(remote.m_ptr->__vftable, 1i64);
          remote.m_ptr->__vftable = NULL;
        }
        return;
      }
    }
  }
  p_m_endpointToDTLSMutex = &this->m_endpointToDTLSMutex;
  bdSharedMutex::lock(&this->m_endpointToDTLSMutex);
  v31 = 0;
  iterator = bdHashMap<bdEndpoint,bdReference<bdAddrHandle>,bdEndpointHashingClass>::getIterator((bdHashMap<bdEndpoint,bdReference<bdAddrHandle>,bdEndpointHashingClass> *)&this->m_qosProber.m_statsPerSession.m_capacity);
  if ( !iterator )
    goto LABEL_79;
  while ( 1 )
  {
    v7 = (const bdEndpoint *)((char *)iterator + 8);
    v8 = (bdCommonAddr *)*((_QWORD *)iterator + 1);
    v50 = v8;
    if ( v8 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v8->m_refCount, 1u);
    v9 = bdCommonAddr::operator==(v8, (const bdCommonAddr *)remote.m_ptr->__vftable);
    if ( v8 && _InterlockedExchangeAdd((volatile signed __int32 *)&v8->m_refCount, 0xFFFFFFFF) == 1 )
      ((void (__fastcall *)(bdCommonAddr *, __int64))v8->~bdReferencable)(v8, 1i64);
    if ( v9 )
    {
      v31 = 1;
      if ( iterator != &v34 )
      {
        if ( v34 && _InterlockedExchangeAdd((volatile signed __int32 *)&v34->m_refCount, 0xFFFFFFFF) == 1 )
          ((void (__fastcall *)(bdAddrHandle *, __int64))v34->~bdReferencable)(v34, 1i64);
        v10 = *(bdAddrHandle **)iterator;
        v34 = v10;
        if ( v10 )
          _InterlockedExchangeAdd((volatile signed __int32 *)&v10->m_refCount, 1u);
      }
      v11 = v34;
      bdAddrHandle::setRealAddr(v34, v3);
      p_m_endpoint = &v11->m_endpoint;
      p_m_map = (bdSharedMutex *)&this->m_endpointToAddrMap.m_map;
      bdSharedMutex::lock((bdSharedMutex *)&this->m_endpointToAddrMap.m_map);
      value.m_ptr = NULL;
      if ( bdHashMap<bdEndpoint,bdReference<bdDTLSAssociation>,bdEndpointHashingClass>::get((bdHashMap<bdEndpoint,bdReference<bdDTLSAssociation>,bdEndpointHashingClass> *)&this->m_ECCKey.m_key.k, &v11->m_endpoint, &value) )
      {
        bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/bdSocketRouter", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouter.cpp", "bdSocketRouter::onRelayConnectionSuccess", 0x6E1u, "Already connected.");
      }
      else
      {
        bdAddr::toString(addr, str, 0x16ui64);
        bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/bdSocketRouter", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouter.cpp", "bdSocketRouter::onRelayConnectionSuccess", 0x6BBu, "Address lookup succeeded. Creating DTLS conn to %s.", str);
        v13 = (bdDTLSAssociation *)bdMemory::allocate(0x4B8ui64);
        v47 = v13;
        if ( v13 )
        {
          cypherSuite = *((_WORD *)&this->m_status + 3);
          v15 = *(float *)&this->m_interceptors.m_size;
          m_listener = (bdCommonAddr *)this->m_config.m_listener;
          localCommonAddr.m_ptr = m_listener;
          if ( m_listener )
            _InterlockedExchangeAdd((volatile signed __int32 *)&m_listener->m_refCount, 1u);
          addrHandle.m_ptr = v34;
          if ( v34 )
            _InterlockedExchangeAdd((volatile signed __int32 *)&v34->m_refCount, 1u);
          bdDTLSAssociation::bdDTLSAssociation(v13, (bdRoutingLayer *)&this->m_keyStore.m_mutex, (bdSecurityKeyMap *)&this->m_addrMap.m_mutex, (bdECCKey *)&this->m_natTrav.m_natTravTimeout, addr, (bdReference<bdAddrHandle>)&addrHandle, (bdReference<bdCommonAddr>)&localCommonAddr, (bdAddressMap *)&this->m_config.m_relayManager, v15, cypherSuite);
          v18 = v17;
        }
        else
        {
          v18 = NULL;
        }
        if ( value.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&value.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
          ((void (__fastcall *)(bdDTLSAssociation *, __int64))value.m_ptr->~bdReferencable)(value.m_ptr, 1i64);
        value.m_ptr = v18;
        if ( v18 )
          _InterlockedExchangeAdd((volatile signed __int32 *)&v18->m_refCount, 1u);
        bdDTLSAssociation::connect(v18);
        if ( bdHashMap<bdEndpoint,bdReference<bdDTLSAssociation>,bdEndpointHashingClass>::put((bdHashMap<bdEndpoint,bdReference<bdDTLSAssociation>,bdEndpointHashingClass> *)&this->m_ECCKey.m_key.k, v7, &value) )
        {
          v40.m_ptr = v18;
          if ( v18 )
            _InterlockedExchangeAdd((volatile signed __int32 *)&v18->m_refCount, 1u);
          if ( bdSocketRouter::addToVtagToDtlsMap((bdSocketRouter *)((char *)this - 16), (bdReference<bdDTLSAssociation>)&v40) )
            goto LABEL_67;
          bdHashMap<bdEndpoint,bdReference<bdDTLSAssociation>,bdEndpointHashingClass>::remove((bdHashMap<bdEndpoint,bdReference<bdDTLSAssociation>,bdEndpointHashingClass> *)&this->m_ECCKey.m_key.k, v7);
        }
        v25 = p_m_endpoint->m_ca.m_ptr;
        v41.m_ptr = v25;
        if ( v25 )
          _InterlockedExchangeAdd((volatile signed __int32 *)&v25->m_refCount, 1u);
        bdCommonAddrInfo::getInfo((const bdReference<bdCommonAddr>)&v41, buf, 0x400u);
        bdSecurityInfo::toString(&p_m_endpoint->m_secID, buffer, 0x12u);
        bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdSocket/bdSocketRouter", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouter.cpp", "bdSocketRouter::onRelayConnectionSuccess", 0x6DBu, "New DTLS with secID %s NOT added to the list.", buffer);
        bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdSocket/bdSocketRouter", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouter.cpp", "bdSocketRouter::onRelayConnectionSuccess", 0x6DCu, "Address: %s", buf);
      }
LABEL_67:
      bdHashMap<bdEndpoint,bdReference<bdAddrHandle>,bdEndpointHashingClass>::remove((bdHashMap<bdEndpoint,bdReference<bdAddrHandle>,bdEndpointHashingClass> *)&this->m_qosProber.m_statsPerSession.m_capacity, &iterator);
      if ( value.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&value.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
        ((void (__fastcall *)(bdDTLSAssociation *, __int64))value.m_ptr->~bdReferencable)(value.m_ptr, 1i64);
      bdSharedMutex::unlock(p_m_map);
      v3 = addr;
      goto LABEL_89;
    }
    if ( !*((_QWORD *)iterator + 3) )
      break;
    iterator = (void *)*((_QWORD *)iterator + 3);
LABEL_89:
    if ( !iterator )
      goto LABEL_78;
  }
  Hash = bdEndpointHashingClass::getHash((bdEndpointHashingClass *)&this->m_endpointToAddrMap.m_loadFactor, v7);
  m_size = this->m_qosProber.m_statsPerSession.m_size;
  v28 = (Hash & (m_size - 1)) + 1;
  if ( (unsigned int)v28 < m_size )
  {
    v29 = *(_QWORD *)&this->m_endpointToAddrMap.m_size;
    while ( !*(_QWORD *)(v29 + 8 * v28) )
    {
      v28 = (unsigned int)(v28 + 1);
      if ( (unsigned int)v28 >= m_size )
        goto LABEL_77;
    }
    iterator = *(void **)(v29 + 8 * v28);
    goto LABEL_89;
  }
LABEL_77:
  _InterlockedExchangeAdd((volatile signed __int32 *)&this->m_endpointToAddrMap.m_threshold, 0xFFFFFFFF);
LABEL_78:
  if ( !v31 )
  {
LABEL_79:
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdSocket/bdSocketRouter", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouter.cpp", "bdSocketRouter::onRelayConnectionSuccess", 0x6EFu, "Address lookup failed.");
    v30 = (bdCommonAddr *)remote.m_ptr->__vftable;
    v43.m_ptr = v30;
    if ( v30 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v30->m_refCount, 1u);
    bdCommonAddrInfo::getBriefInfo((const bdReference<bdCommonAddr>)&v43, format, 0x400u);
    bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/bdSocketRouter", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouter.cpp", "bdSocketRouter::onRelayConnectionSuccess", 0x6F2u, format);
  }
  bdSharedMutex::unlock(p_m_endpointToDTLSMutex);
  bdSharedMutex::unlock(p_m_vtagToDTLSMutex);
LABEL_83:
  if ( v34 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v34->m_refCount, 0xFFFFFFFF) == 1 )
      ((void (__fastcall *)(bdAddrHandle *, __int64))v34->~bdReferencable)(v34, 1i64);
  }
  bdReference<bdCommonAddr>::~bdReference<bdCommonAddr>((bdReference<bdCommonAddr> *)remote.m_ptr);
}

/*
==============
bdSocketRouter::onRelayUpgradeFailure
==============
*/
void bdSocketRouter::onRelayUpgradeFailure(bdSocketRouter *this, const bdRelayAssociation *assoc)
{
  unsigned __int64 RelayID; 
  void *Ptr; 

  RelayID = bdRelayAssociation::getRelayID((bdRelayAssociation *)assoc);
  bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/bdSocketRouter", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouter.cpp", "bdSocketRouter::onRelayUpgradeFailure", 0x67Fu, "Association [%llu] failed to upgrade", RelayID);
  Ptr = this->m_routingLayer.m_mutex.m_mutexData.Ptr;
  if ( Ptr )
    (*(void (__fastcall **)(void *))(*(_QWORD *)Ptr + 40i64))(Ptr);
}

/*
==============
bdSocketRouter::onRelayUpgradeSuccess
==============
*/
void bdSocketRouter::onRelayUpgradeSuccess(bdSocketRouter *this, const bdRelayAssociation *assoc)
{
  unsigned __int64 RelayID; 
  bdCommonAddr *m_listener; 
  const bdRelayJoinData *LocalJoinData; 
  void *Ptr; 

  RelayID = bdRelayAssociation::getRelayID((bdRelayAssociation *)assoc);
  bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/bdSocketRouter", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouter.cpp", "bdSocketRouter::onRelayUpgradeSuccess", 0x675u, "Bound association is now [%llu]", RelayID);
  m_listener = (bdCommonAddr *)this->m_config.m_listener;
  LocalJoinData = bdRelayAssociation::getLocalJoinData((bdRelayAssociation *)assoc);
  bdCommonAddr::setRelayJoinData(m_listener, LocalJoinData);
  Ptr = this->m_routingLayer.m_mutex.m_mutexData.Ptr;
  if ( Ptr )
    (*(void (__fastcall **)(void *))(*(_QWORD *)Ptr + 32i64))(Ptr);
}

/*
==============
bdSocketRouter::onSecurityKeyRemove
==============
*/
void bdSocketRouter::onSecurityKeyRemove(bdSocketRouter *this, const bdSecurityID *id)
{
  bdEndpointHashingClass *p_m_hashClass; 
  unsigned int v5; 
  unsigned int v6; 
  __int64 v7; 
  __int64 v8; 
  bdDTLSAssociation *v9; 
  volatile signed __int32 *p_m_refCount; 
  bdSecurityID *LocalSecurityId; 
  unsigned int Hash; 
  unsigned int v13; 
  unsigned int v14; 
  __int64 v15; 
  __int64 v16; 
  bdReference<bdDTLSAssociation> value; 
  bdEndpointHashingClass *v18; 
  __int64 v19; 
  void *iterator; 
  bdReference<bdAddrHandle> result; 
  bdDTLSAssociation *v22; 

  v19 = -2i64;
  p_m_hashClass = &this->m_endpointToAddrMap.m_hashClass;
  v18 = &this->m_endpointToAddrMap.m_hashClass;
  bdSharedMutex::lock((bdSharedMutex *)&this->m_endpointToAddrMap.m_hashClass);
  if ( this->m_qosBandwidth.m_allowedSend )
  {
    v5 = 0;
    v6 = *(_DWORD *)&this->m_qosBandwidth.m_sentThisSlice;
    if ( v6 )
    {
      do
      {
        if ( *(_QWORD *)(*(_QWORD *)&this->m_endpointToDtlsMap.m_loadFactor + 8i64 * v5) )
          break;
        ++v5;
      }
      while ( v5 < v6 );
    }
    v7 = 8i64 * v5;
    v8 = *(_QWORD *)&this->m_endpointToDtlsMap.m_loadFactor;
    if ( *(_QWORD *)(v7 + v8) )
    {
      _InterlockedExchangeAdd((volatile signed __int32 *)&this->m_endpointToDtlsMap.m_map + 1, 1u);
      v8 = *(_QWORD *)&this->m_endpointToDtlsMap.m_loadFactor;
      p_m_hashClass = v18;
    }
    iterator = *(void **)(v7 + v8);
    if ( iterator )
    {
      while ( 1 )
      {
        v9 = *(bdDTLSAssociation **)iterator;
        v22 = v9;
        p_m_refCount = (volatile signed __int32 *)&v9->m_refCount;
        if ( v9 )
        {
          _InterlockedExchangeAdd(p_m_refCount, 1u);
          v9 = v22;
        }
        LocalSecurityId = (bdSecurityID *)bdDTLSAssociation::getLocalSecurityId(v9);
        if ( bdSecurityID::operator==(LocalSecurityId, id) )
        {
          bdDTLSAssociation::getAddrHandle(v9, &result);
          result.m_ptr->m_status = BD_ADDR_UNRESOLVED;
          value.m_ptr = v9;
          if ( v9 )
          {
            _InterlockedExchangeAdd(p_m_refCount, 1u);
            v9 = v22;
          }
          bdSocketRouter::removeFromVtagToDtlsMap((bdSocketRouter *)((char *)this - 8), (bdReference<bdDTLSAssociation>)&value);
          bdHashMap<bdEndpoint,bdReference<bdDTLSAssociation>,bdEndpointHashingClass>::remove((bdHashMap<bdEndpoint,bdReference<bdDTLSAssociation>,bdEndpointHashingClass> *)&this->m_qosBandwidth, &iterator);
          bdAddressMap::unregisterAddr((bdAddressMap *)&this->m_localCommonAddr, &result);
          if ( *(_QWORD *)&this->m_migratingDtlsMap.m_hashClass )
          {
            Hash = bdEndpoint::getHash(&result.m_ptr->m_endpoint);
            bdPacketBuffer::clearBuffer(*(bdPacketBuffer **)&this->m_migratingDtlsMap.m_hashClass, Hash);
          }
          if ( !result.m_ptr )
            goto LABEL_28;
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
          {
            if ( result.m_ptr )
              ((void (__fastcall *)(bdAddrHandle *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
            result.m_ptr = NULL;
          }
        }
        else
        {
          if ( *((_QWORD *)iterator + 3) )
          {
            iterator = (void *)*((_QWORD *)iterator + 3);
            goto LABEL_28;
          }
          v13 = bdEndpointHashingClass::getHash((bdEndpointHashingClass *)&this->m_endpointToDtlsMap.m_map, (const bdEndpoint *)((char *)iterator + 8));
          v14 = *(_DWORD *)&this->m_qosBandwidth.m_sentThisSlice;
          v15 = (v13 & (v14 - 1)) + 1;
          if ( (unsigned int)v15 < v14 )
          {
            v16 = *(_QWORD *)&this->m_endpointToDtlsMap.m_loadFactor;
            while ( !*(_QWORD *)(v16 + 8 * v15) )
            {
              v15 = (unsigned int)(v15 + 1);
              if ( (unsigned int)v15 >= v14 )
                goto LABEL_26;
            }
            iterator = *(void **)(v16 + 8 * v15);
            goto LABEL_28;
          }
LABEL_26:
          iterator = NULL;
          _InterlockedExchangeAdd((volatile signed __int32 *)&this->m_endpointToDtlsMap.m_map + 1, 0xFFFFFFFF);
        }
        v9 = v22;
LABEL_28:
        if ( v9 && _InterlockedExchangeAdd(p_m_refCount, 0xFFFFFFFF) == 1 )
          ((void (__fastcall *)(bdDTLSAssociation *, __int64))v22->~bdReferencable)(v22, 1i64);
        if ( !iterator )
        {
          p_m_hashClass = v18;
          break;
        }
      }
    }
  }
  bdSharedMutex::unlock((bdSharedMutex *)p_m_hashClass);
}

/*
==============
bdSocketRouter::prepareSendToData
==============
*/
__int64 bdSocketRouter::prepareSendToData(bdSocketRouter *this, const bdReference<bdAddrHandle> addrHandle, const void *data, const unsigned int length, void *outBuffer, const unsigned int outBufferLength, bdSocketRouterData *outData)
{
  unsigned int (__fastcall *getPayloadSize)(bdSocketRouter *, const bdReference<bdAddrHandle>); 
  bdAddrHandle_vtbl *v12; 
  unsigned int v13; 
  bdAddrHandle *v14; 
  unsigned int ProtocolOverhead; 
  unsigned int v16; 
  unsigned int (__fastcall *v17)(bdSocketRouter *, const bdReference<bdAddrHandle>); 
  bdAddrHandle_vtbl *v18; 
  bdAddrHandle *v19; 
  bdDTLSAssociation *v20; 
  void *v21; 
  signed int v22; 
  signed int v23; 
  bdRoutingLayer *p_m_routingLayer; 
  char v25; 
  bdCommonAddr *v26; 
  unsigned int format; 
  const char *outMsg; 
  const bdAddr *v30; 
  bdReference<bdDTLSAssociation> value; 
  void *dataa; 
  void *v33; 
  bdAddrHandle_vtbl *v34; 
  bdReference<bdAddrHandle> addrHandlea; 
  bdAddrHandle_vtbl *v36; 
  bdReference<bdAddrHandle> v37; 
  bdReference<bdCommonAddr> addr; 
  __int64 v39; 
  bdAddrHandle *m_ptr; 
  bdSharedMutex *p_m_endpointToDTLSMutex; 
  char buf[1024]; 
  char v43[1296]; 

  v39 = -2i64;
  dataa = (void *)data;
  m_ptr = addrHandle.m_ptr;
  v33 = outBuffer;
  bdHandleAssert(this->m_sendtoBuffer == NULL, "(m_sendtoBuffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouter.cpp", "bdSocketRouter::prepareSendToData", 0x3CBu, "prepareSendToData(): Cannot be used with m_sendtoBuffer");
  bdHandleAssert(data != NULL, "(data != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouter.cpp", "bdSocketRouter::prepareSendToData", 0x3CCu, "prepareSendToData(): data cannot be NULL");
  bdHandleAssert(outBuffer != NULL, "(outBuffer != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouter.cpp", "bdSocketRouter::prepareSendToData", 0x3CDu, "prepareSendToData(): outBuffer cannot be NULL");
  getPayloadSize = this->getPayloadSize;
  v12 = addrHandle.m_ptr->__vftable;
  v34 = v12;
  if ( v12 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v12[1], 1u);
  v13 = ((__int64 (__fastcall *)(bdSocketRouter *, bdAddrHandle_vtbl **))getPayloadSize)(this, &v34);
  bdHandleAssert(length <= v13, "(length <= getPayloadSize(addrHandle))", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouter.cpp", "bdSocketRouter::prepareSendToData", 0x3CEu, "prepareSendToData(): Length >= BD_MAX_SOCKET_ROUTER_PAYLOAD_SIZE");
  v14 = (bdAddrHandle *)addrHandle.m_ptr->__vftable;
  addrHandlea.m_ptr = v14;
  if ( v14 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v14->m_refCount, 1u);
  ProtocolOverhead = bdSocketRouter::getProtocolOverhead(this, (const bdReference<bdAddrHandle>)&addrHandlea);
  bdHandleAssert(outBufferLength >= length + ProtocolOverhead, "(outBufferLength >= length + getProtocolOverhead(addrHandle))", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouter.cpp", "bdSocketRouter::prepareSendToData", 0x3CFu, "prepareSendToData(): outBufferLength < BD_MAX_DATAGRAM_SIZE");
  v16 = -1;
  if ( !dataa || !v33 )
    goto LABEL_34;
  v17 = this->getPayloadSize;
  v18 = addrHandle.m_ptr->__vftable;
  v36 = v18;
  if ( v18 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v18[1], 1u);
  if ( length > ((unsigned int (__fastcall *)(bdSocketRouter *, bdAddrHandle_vtbl **))v17)(this, &v36) )
    goto LABEL_34;
  v19 = (bdAddrHandle *)addrHandle.m_ptr->__vftable;
  v37.m_ptr = v19;
  if ( v19 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v19->m_refCount, 1u);
  if ( outBufferLength < length + bdSocketRouter::getProtocolOverhead(this, (const bdReference<bdAddrHandle>)&v37) || this->m_sendtoBuffer )
    goto LABEL_34;
  if ( this->m_status != BD_SOCKET_ROUTER_INITIALIZED )
  {
    outMsg = "Cannot send data before class has been initialized";
    format = 983;
LABEL_16:
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/bdSocketRouter", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouter.cpp", "bdSocketRouter::prepareSendToData", format, outMsg);
LABEL_34:
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdSocket/bdSocketRouter", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouter.cpp", "bdSocketRouter::prepareSendToData", 0x420u, "prepareSendToData(): Error preparing packet");
    goto LABEL_35;
  }
  if ( !addrHandle.m_ptr->__vftable )
  {
    outMsg = "Cannot send data to null addr handle ref";
    format = 988;
    goto LABEL_16;
  }
  value.m_ptr = NULL;
  p_m_endpointToDTLSMutex = &this->m_endpointToDTLSMutex;
  bdSharedMutex::lock_shared(&this->m_endpointToDTLSMutex);
  bdHashMap<bdEndpoint,bdReference<bdDTLSAssociation>,bdEndpointHashingClass>::get(&this->m_endpointToDtlsMap, (const bdEndpoint *)&addrHandle.m_ptr->__vftable[2], &value);
  bdSharedMutex::unlock_shared(&this->m_endpointToDTLSMutex);
  v20 = value.m_ptr;
  if ( value.m_ptr )
  {
    v30 = (const bdAddr *)&addrHandle.m_ptr->__vftable[5];
    if ( LODWORD(addrHandle.m_ptr->__vftable[23].~bdReferencable) )
    {
      v23 = bdDTLSAssociation::prepareData(value.m_ptr, dataa, length, v43, 0x508u);
      if ( v23 < 0 )
        goto LABEL_26;
      p_m_routingLayer = &this->m_routingLayer;
      v21 = v33;
      v22 = bdRoutingLayer::prepareSendTo(p_m_routingLayer, (const bdAddr *)&addrHandle.m_ptr->__vftable[5], v43, v23, v33, outBufferLength, &outData->m_msgHdr);
    }
    else
    {
      v21 = v33;
      v22 = bdDTLSAssociation::prepareData(value.m_ptr, dataa, length, v33, outBufferLength);
    }
    if ( v22 >= 0 )
    {
      v16 = v22;
      outData->m_msgHdr.m_addr = v30;
      outData->m_msgHdr.m_data = v21;
      outData->m_msgHdr.m_dataLen = v22;
      outData->m_bytesSent = 0;
      v25 = 1;
      goto LABEL_30;
    }
LABEL_26:
    v25 = 0;
    goto LABEL_30;
  }
  v25 = 0;
  bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdSocket/bdSocketRouter", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouter.cpp", "bdSocketRouter::prepareSendToData", 0x412u, "DTLS Not established! Call connect() first.");
  v26 = (bdCommonAddr *)addrHandle.m_ptr->__vftable[2].~bdReferencable;
  addr.m_ptr = v26;
  if ( v26 )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)&v26->m_refCount, 1u);
    v20 = value.m_ptr;
  }
  bdCommonAddrInfo::getBriefInfo((const bdReference<bdCommonAddr>)&addr, buf, 0x400u);
  bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/bdSocketRouter", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouter.cpp", "bdSocketRouter::prepareSendToData", 0x417u, buf);
LABEL_30:
  if ( v20 && _InterlockedExchangeAdd((volatile signed __int32 *)&v20->m_refCount, 0xFFFFFFFF) == 1 )
    ((void (__fastcall *)(bdDTLSAssociation *, __int64))value.m_ptr->~bdReferencable)(value.m_ptr, 1i64);
  if ( !v25 )
    goto LABEL_34;
LABEL_35:
  if ( addrHandle.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&addrHandle.m_ptr->__vftable[1], 0xFFFFFFFF) == 1 )
  {
    if ( addrHandle.m_ptr->__vftable )
      (*(void (__fastcall **)(bdAddrHandle_vtbl *, __int64))addrHandle.m_ptr->~bdReferencable)(addrHandle.m_ptr->__vftable, 1i64);
    addrHandle.m_ptr->__vftable = NULL;
  }
  return v16;
}

/*
==============
bdSocketRouter::processError
==============
*/
void bdSocketRouter::processError(bdSocketRouter *this, bdAddr *realAddr, int val, unsigned int *resetCount, bool *receiving)
{
  unsigned int v8; 
  unsigned int m_maxConnectionResets; 
  bdLogMessageType v10; 
  const char *v11; 
  unsigned int line; 
  char *format; 
  __int64 v14; 
  char str[112]; 

  *receiving = 0;
  switch ( val )
  {
    case -13:
    case -12:
    case -11:
    case -10:
    case -9:
    case -8:
    case -7:
    case -4:
    case -3:
    case -1:
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/bdSocketRouter", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouter.cpp", "bdSocketRouter::processError", 0x5A2u, "Encountered error: %i while receiving from the socket router ", val);
      break;
    case -6:
      v10 = BD_LOG_WARNING;
      format = "Couldn't receive message. Buffer too small?";
      v11 = "warn/";
      line = 1426;
      goto LABEL_12;
    case -5:
      if ( this->m_config.m_ignoreConnectionReset )
      {
        bdAddr::toString(realAddr, str, 0x64ui64);
        bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/bdSocketRouter", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouter.cpp", "bdSocketRouter::processError", 0x572u, "Connection reset packet received for %s. Ignoring.", str);
      }
      else
      {
        bdAddressMap::unregisterRealAddr(&this->m_addrMap, realAddr);
      }
      v8 = *resetCount;
      m_maxConnectionResets = this->m_config.m_maxConnectionResets;
      ++*resetCount;
      if ( v8 >= m_maxConnectionResets )
      {
        bdAddr::toString(realAddr, str, 0x64ui64);
        LODWORD(v14) = *resetCount;
        bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/bdSocketRouter", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouter.cpp", "bdSocketRouter::processError", 0x584u, "Exiting receiveAll loop after receiving %u connection resets.", v14);
        bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/bdSocketRouter", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouter.cpp", "bdSocketRouter::processError", 0x585u, "Last reset was received for addr %s ", str);
      }
      else
      {
        *receiving = 1;
      }
      break;
    case 0:
    case 1:
      v10 = BD_LOG_ERROR;
      format = "These cannot occur";
      v11 = (const char *)&other;
      line = 1448;
LABEL_12:
      bdLogMessage(v10, v11, "bdSocket/bdSocketRouter", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouter.cpp", "bdSocketRouter::processError", line, format);
      break;
    default:
      return;
  }
}

/*
==============
bdSocketRouter::processPacket
==============
*/
__int64 bdSocketRouter::processPacket(bdSocketRouter *this, bdReference<bdAddrHandle> *addrHandle, bdAddr *realAddr, void *data, const unsigned int size, const unsigned int bytesTransferred, bool *receiving)
{
  bool *v11; 
  unsigned int v12; 
  bool v13; 
  unsigned __int16 cypherSuite; 
  float m_DTLSAssociationReceiveTimeout; 
  bdCommonAddr *m_ptr; 
  unsigned __int16 m_cypherSuite; 
  float v18; 
  bdCommonAddr *v19; 
  unsigned __int16 v20; 
  float v21; 
  bdCommonAddr *v22; 
  bdDTLSAssociation *v23; 
  unsigned __int16 v24; 
  float v25; 
  bdCommonAddr *v26; 
  bdDTLSAssociation *v27; 
  bdDTLSAssociation *v28; 
  bdAddrHandle *v29; 
  bdCommonAddr *v30; 
  unsigned int v32; 
  bdPacketInterceptor *v33; 
  bool (__fastcall *acceptPacket)(bdPacketInterceptor *, bdSocket *, bdAddr, void *, const unsigned int, const unsigned __int8); 
  __int64 v35; 
  int expectedCypherSuite; 
  unsigned int val; 
  char v38; 
  bdSharedMutex *p_m_endpointToDTLSMutex; 
  unsigned int newOffset; 
  unsigned int v41; 
  unsigned int v42; 
  unsigned int v43; 
  unsigned int v44; 
  bdReference<bdCommonAddr> v45; 
  bdReference<bdAddrHandle> addrHandlea; 
  bdReference<bdAddrHandle> v47; 
  bdReference<bdAddrHandle> result; 
  bdReference<bdAddrHandle> v49; 
  bdReference<bdDTLSAssociation> v50; 
  bdReference<bdCommonAddr> addr; 
  bdReference<bdDTLSAssociation> value; 
  bdDTLSAssociation *v53; 
  bdReference<bdCommonAddr> localCommonAddr; 
  bdReference<bdCommonAddr> v55; 
  bdReference<bdCommonAddr> v56; 
  bdReference<bdAddrHandle> v57; 
  bool *v58; 
  __int64 v59; 
  bdAddr v60; 
  bdSecurityID secID; 
  bdSecurityID v62; 
  bdSecurityID v63; 
  bdSecurityID v64; 
  bdSecurityID v65; 
  bdSecurityID v66; 
  bdDTLSError v67; 
  bdDTLSInit v68; 
  bdDTLSCookieAck v69; 
  bdDTLSInitAck v70; 
  bdDTLSCookieEcho v71; 
  bdDTLSAssociation v72; 
  bdDTLSAssociation v73; 
  bdDTLSAssociation v74; 
  char buffer[24]; 
  char str[24]; 
  char buf[1024]; 

  v59 = -2i64;
  v11 = receiving;
  v58 = receiving;
  v12 = bytesTransferred;
  val = bytesTransferred;
  v38 = *(_BYTE *)data;
  v13 = 0;
  switch ( v38 )
  {
    case 1:
      bdDTLSInit::bdDTLSInit(&v68);
      newOffset = 0;
      if ( bdDTLSInit::deserialize(&v68, data, v12, 0, &newOffset, this->m_config.m_cypherSuite) )
      {
        bdSecurityID::bdSecurityID(&secID);
        bdDTLSInit::getSecID(&v68, &secID);
        if ( bdSocketRouter::tryToFindConnection(this, data, &size, &secID, realAddr, addrHandle, (int *)&val) )
        {
          v12 = val;
        }
        else
        {
          cypherSuite = this->m_config.m_cypherSuite;
          m_DTLSAssociationReceiveTimeout = this->m_config.m_DTLSAssociationReceiveTimeout;
          m_ptr = this->m_localCommonAddr.m_ptr;
          localCommonAddr.m_ptr = m_ptr;
          if ( m_ptr )
            _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
          addrHandlea.m_ptr = NULL;
          bdDTLSAssociation::bdDTLSAssociation(&v72, &this->m_routingLayer, &this->m_keyStore, &this->m_ECCKey, realAddr, (bdReference<bdAddrHandle>)&addrHandlea, (bdReference<bdCommonAddr>)&localCommonAddr, &this->m_addrMap, m_DTLSAssociationReceiveTimeout, cypherSuite);
          v12 = bdDTLSAssociation::receiveFrom(&v72, realAddr, data, val, addrHandle, data, size);
          val = v12;
          v13 = bdDTLSAssociation::getStatus(&v72) == BD_SOCKET_CONNECTED;
          bdDTLSAssociation::~bdDTLSAssociation(&v72);
        }
        bdSecurityID::~bdSecurityID(&secID);
      }
      bdDTLSInit::~bdDTLSInit(&v68);
      goto LABEL_26;
    case 2:
      bdDTLSInitAck::bdDTLSInitAck(&v70);
      v43 = 0;
      if ( bdDTLSInitAck::deserialize(&v70, data, v12, 0, &v43, this->m_config.m_cypherSuite) )
      {
        bdSecurityID::bdSecurityID(&v64);
        bdDTLSInitAck::getSecID(&v70, &v64);
        bdSocketRouter::tryDecryptPacket(this, data, &size, &v64, realAddr, addrHandle, (int *)&val, 1);
        bdSecurityID::~bdSecurityID(&v64);
        v12 = val;
      }
      bdDTLSInitAck::~bdDTLSInitAck(&v70);
      return v12;
    case 3:
      bdDTLSCookieEcho::bdDTLSCookieEcho(&v71);
      v41 = 0;
      if ( bdDTLSCookieEcho::deserialize(&v71, data, v12, 0, &v41, this->m_config.m_cypherSuite) )
      {
        bdSecurityID::bdSecurityID(&v62);
        v62 = *(bdSecurityID *)bdDTLSCookieEcho::getSecID(&v71);
        if ( bdSocketRouter::tryToFindConnection(this, data, &size, &v62, realAddr, addrHandle, (int *)&val) )
        {
          v12 = val;
        }
        else
        {
          m_cypherSuite = this->m_config.m_cypherSuite;
          v18 = this->m_config.m_DTLSAssociationReceiveTimeout;
          v19 = this->m_localCommonAddr.m_ptr;
          v55.m_ptr = v19;
          if ( v19 )
            _InterlockedExchangeAdd((volatile signed __int32 *)&v19->m_refCount, 1u);
          v49.m_ptr = NULL;
          bdDTLSAssociation::bdDTLSAssociation(&v73, &this->m_routingLayer, &this->m_keyStore, &this->m_ECCKey, realAddr, (bdReference<bdAddrHandle>)&v49, (bdReference<bdCommonAddr>)&v55, &this->m_addrMap, v18, m_cypherSuite);
          v12 = bdDTLSAssociation::receiveFrom(&v73, realAddr, data, val, addrHandle, data, size);
          val = v12;
          v13 = bdDTLSAssociation::getStatus(&v73) == BD_SOCKET_CONNECTED;
          bdDTLSAssociation::~bdDTLSAssociation(&v73);
        }
        bdSecurityID::~bdSecurityID(&v62);
      }
      bdDTLSCookieEcho::~bdDTLSCookieEcho(&v71);
      goto LABEL_26;
    case 4:
      bdDTLSCookieAck::bdDTLSCookieAck(&v69);
      v44 = 0;
      if ( bdDTLSCookieAck::deserialize(&v69, data, v12, 0, &v44) )
      {
        bdSecurityID::bdSecurityID(&v65);
        bdDTLSCookieAck::getSecID(&v69, &v65);
        bdSocketRouter::tryDecryptPacket(this, data, &size, &v65, realAddr, addrHandle, (int *)&val, 1);
        bdSecurityID::~bdSecurityID(&v65);
        v12 = val;
      }
      bdDTLSCookieAck::~bdDTLSCookieAck(&v69);
      return v12;
    case 5:
      bdDTLSError::bdDTLSError(&v67);
      v42 = 0;
      if ( bdDTLSError::deserialize(&v67, data, v12, 0, &v42) )
      {
        bdSecurityID::bdSecurityID(&v63);
        bdDTLSError::getSecID(&v67, &v63);
        if ( bdSocketRouter::tryToFindConnection(this, data, &size, &v63, realAddr, addrHandle, (int *)&val) )
        {
          v12 = val;
        }
        else
        {
          v20 = this->m_config.m_cypherSuite;
          v21 = this->m_config.m_DTLSAssociationReceiveTimeout;
          v22 = this->m_localCommonAddr.m_ptr;
          v56.m_ptr = v22;
          if ( v22 )
            _InterlockedExchangeAdd((volatile signed __int32 *)&v22->m_refCount, 1u);
          v47.m_ptr = NULL;
          bdDTLSAssociation::bdDTLSAssociation(&v74, &this->m_routingLayer, &this->m_keyStore, &this->m_ECCKey, realAddr, (bdReference<bdAddrHandle>)&v47, (bdReference<bdCommonAddr>)&v56, &this->m_addrMap, v21, v20);
          v12 = bdDTLSAssociation::receiveFrom(&v74, realAddr, data, val, addrHandle, data, size);
          val = v12;
          v13 = bdDTLSAssociation::getStatus(&v74) == BD_SOCKET_CONNECTED;
          bdDTLSAssociation::~bdDTLSAssociation(&v74);
        }
        bdSecurityID::~bdSecurityID(&v63);
      }
      bdDTLSError::~bdDTLSError(&v67);
LABEL_26:
      if ( !v13 )
        return v12;
      v23 = (bdDTLSAssociation *)bdMemory::allocate(0x4B8ui64);
      v53 = v23;
      if ( v23 )
      {
        v24 = this->m_config.m_cypherSuite;
        v25 = this->m_config.m_DTLSAssociationReceiveTimeout;
        v26 = this->m_localCommonAddr.m_ptr;
        v45.m_ptr = v26;
        if ( v26 )
        {
          _InterlockedExchangeAdd((volatile signed __int32 *)&v26->m_refCount, 1u);
          v12 = val;
        }
        v57.m_ptr = NULL;
        bdDTLSAssociation::bdDTLSAssociation(v23, &this->m_routingLayer, &this->m_keyStore, &this->m_ECCKey, realAddr, (bdReference<bdAddrHandle>)&v57, (bdReference<bdCommonAddr>)&v45, &this->m_addrMap, v25, v24);
        v28 = v27;
      }
      else
      {
        v28 = NULL;
      }
      value.m_ptr = v28;
      if ( v28 )
      {
        _InterlockedExchangeAdd((volatile signed __int32 *)&v28->m_refCount, 1u);
        v12 = val;
      }
      val = v28->receiveFrom(v28, realAddr, data, v12, addrHandle, data, size);
      bdAddr::toString(realAddr, str, 0x16ui64);
      bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/bdSocketRouter", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouter.cpp", "bdSocketRouter::processPacket", 0x52Du, "New incoming DTLS connection from %s.", str);
      p_m_endpointToDTLSMutex = &this->m_endpointToDTLSMutex;
      bdSharedMutex::lock(&this->m_endpointToDTLSMutex);
      v29 = bdDTLSAssociation::getAddrHandle(v28, &result)->m_ptr;
      if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
      {
        if ( result.m_ptr )
          ((void (__fastcall *)(bdAddrHandle *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
        result.m_ptr = NULL;
      }
      if ( !bdHashMap<bdEndpoint,bdReference<bdDTLSAssociation>,bdEndpointHashingClass>::put(&this->m_endpointToDtlsMap, &v29->m_endpoint, &value) )
        goto LABEL_42;
      v50.m_ptr = v28;
      _InterlockedExchangeAdd((volatile signed __int32 *)&v28->m_refCount, 1u);
      if ( !bdSocketRouter::addToVtagToDtlsMap(this, (bdReference<bdDTLSAssociation>)&v50) )
      {
        bdHashMap<bdEndpoint,bdReference<bdDTLSAssociation>,bdEndpointHashingClass>::remove(&this->m_endpointToDtlsMap, &v29->m_endpoint);
LABEL_42:
        v30 = v29->m_endpoint.m_ca.m_ptr;
        addr.m_ptr = v30;
        if ( v30 )
          _InterlockedExchangeAdd((volatile signed __int32 *)&v30->m_refCount, 1u);
        bdCommonAddrInfo::getInfo((const bdReference<bdCommonAddr>)&addr, buf, 0x400u);
        bdSecurityInfo::toString(&v29->m_endpoint.m_secID, buffer, 0x12u);
        bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdSocket/bdSocketRouter", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouter.cpp", "bdSocketRouter::processPacket", 0x545u, "New DTLS with secID %s NOT added to the list.", buffer);
        bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdSocket/bdSocketRouter", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouter.cpp", "bdSocketRouter::processPacket", 0x546u, "addrString %s", buf);
      }
      if ( (val & 0x80000000) == 0 )
        *v58 = 0;
      bdSharedMutex::unlock(p_m_endpointToDTLSMutex);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v28->m_refCount, 0xFFFFFFFF) != 1 )
        return val;
      ((void (__fastcall *)(bdDTLSAssociation *, __int64))v28->~bdReferencable)(v28, 1i64);
      return val;
    case 6:
      bdSecurityID::bdSecurityID(&v66);
      *v11 = !bdSocketRouter::tryDecryptPacket(this, data, &size, &v66, realAddr, addrHandle, (int *)&val, 0);
      bdSecurityID::~bdSecurityID(&v66);
      return val;
    default:
      v32 = 0;
      do
      {
        if ( v32 >= this->m_interceptors.m_size )
          break;
        bdHandleAssert(v32 < this->m_interceptors.m_size, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdfastarray.inl", "bdFastArray<class bdPacketInterceptor *>::operator []", 0x50u, "bdFastArray<T>::operator[], rangecheck failed");
        v33 = this->m_interceptors.m_data[v32];
        acceptPacket = v33->acceptPacket;
        bdAddr::bdAddr(&v60, realAddr);
        LOBYTE(expectedCypherSuite) = v38;
        ++v32;
      }
      while ( !((unsigned __int8 (__fastcall *)(bdPacketInterceptor *, bdSocket *, __int64, void *, unsigned int, int))acceptPacket)(v33, this->m_socket, v35, data, v12, expectedCypherSuite) );
      return v12;
  }
}

/*
==============
bdSocketRouter::pump
==============
*/
void bdSocketRouter::pump(bdSocketRouter *this)
{
  bdSharedMutex *p_m_endpointToDTLSMutex; 
  unsigned int v3; 
  unsigned int m_capacity; 
  __int64 v5; 
  bdHashMap<bdEndpoint,bdReference<bdDTLSAssociation>,bdEndpointHashingClass>::Node **m_map; 
  bdDTLSAssociation *v7; 
  bdDTLSAssociationStatus Status; 
  __int32 v9; 
  bdAddr *RealAddr; 
  char *v11; 
  bdSocketRouterListener *m_listener; 
  bdPacketBuffer *m_sendtoBuffer; 
  unsigned int v14; 
  unsigned int Hash; 
  unsigned int v16; 
  __int64 v17; 
  bdHashMap<bdEndpoint,bdReference<bdDTLSAssociation>,bdEndpointHashingClass>::Node **v18; 
  void *iterator; 
  bdDTLSAssociation *v20; 
  bdReference<bdAddrHandle> result; 
  bdReference<bdDTLSAssociation> value; 
  bdSharedMutex *v23; 
  __int64 v24; 
  bdAddr v25; 
  char buffer[24]; 
  char str[24]; 

  v24 = -2i64;
  bdGlobalStopwatch::pump();
  bdNATTravClient::pump(&this->m_natTrav);
  bdQoSProbe::pump(&this->m_qosProber);
  bdRoutingLayer::pump(&this->m_routingLayer);
  p_m_endpointToDTLSMutex = &this->m_endpointToDTLSMutex;
  v23 = &this->m_endpointToDTLSMutex;
  bdSharedMutex::lock(&this->m_endpointToDTLSMutex);
  if ( this->m_endpointToDtlsMap.m_size )
  {
    v3 = 0;
    m_capacity = this->m_endpointToDtlsMap.m_capacity;
    if ( m_capacity )
    {
      do
      {
        if ( this->m_endpointToDtlsMap.m_map[v3] )
          break;
        ++v3;
      }
      while ( v3 < m_capacity );
    }
    v5 = v3;
    m_map = this->m_endpointToDtlsMap.m_map;
    if ( m_map[v5] )
    {
      _InterlockedExchangeAdd((volatile signed __int32 *)&this->m_endpointToDtlsMap.m_numIterators, 1u);
      m_map = this->m_endpointToDtlsMap.m_map;
      p_m_endpointToDTLSMutex = v23;
    }
    iterator = m_map[v5];
    if ( iterator )
    {
      while ( 1 )
      {
        v7 = *(bdDTLSAssociation **)iterator;
        v20 = v7;
        if ( v7 )
        {
          _InterlockedExchangeAdd((volatile signed __int32 *)&v7->m_refCount, 1u);
          v7 = v20;
        }
        bdDTLSAssociation::pump(v7);
        bdDTLSAssociation::getAddrHandle(v20, &result);
        Status = bdDTLSAssociation::getStatus(v20);
        if ( Status == BD_SOCKET_IDLE )
          break;
        v9 = Status - 2;
        if ( !v9 )
        {
          if ( result.m_ptr->m_status == BD_ADDR_RESOLVED )
            result.m_ptr->m_status = BD_ADDR_CONNECTED;
LABEL_23:
          if ( *((_QWORD *)iterator + 3) )
          {
            iterator = (void *)*((_QWORD *)iterator + 3);
          }
          else
          {
            Hash = bdEndpointHashingClass::getHash(&this->m_endpointToDtlsMap.m_hashClass, (const bdEndpoint *)((char *)iterator + 8));
            v16 = this->m_endpointToDtlsMap.m_capacity;
            v17 = (Hash & (v16 - 1)) + 1;
            if ( (unsigned int)v17 >= v16 )
            {
LABEL_29:
              iterator = NULL;
              _InterlockedExchangeAdd((volatile signed __int32 *)&this->m_endpointToDtlsMap.m_numIterators, 0xFFFFFFFF);
            }
            else
            {
              v18 = this->m_endpointToDtlsMap.m_map;
              while ( !v18[v17] )
              {
                v17 = (unsigned int)(v17 + 1);
                if ( (unsigned int)v17 >= v16 )
                  goto LABEL_29;
              }
              iterator = v18[v17];
            }
          }
          goto LABEL_30;
        }
        if ( v9 != 1 )
          goto LABEL_23;
        RealAddr = (bdAddr *)bdAddrHandle::getRealAddr(result.m_ptr, &v25);
        bdAddr::toString(RealAddr, str, 0x16ui64);
        v11 = (char *)iterator;
        bdSecurityInfo::toString((const bdSecurityID *)iterator + 2, buffer, 0x12u);
        bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/bdSocketRouter", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouter.cpp", "bdSocketRouter::pump", 0xB5u, "DTLS closed. Removing address %s on security ID %s.", str, buffer);
        m_listener = this->m_config.m_listener;
        if ( m_listener )
          m_listener->onDtlsClose(m_listener, (const bdReference<bdDTLSAssociation> *)&v20);
        result.m_ptr->m_status = BD_ADDR_UNRESOLVED;
        bdAddressMap::unregisterAddr(&this->m_addrMap, &result);
        m_sendtoBuffer = this->m_sendtoBuffer;
        if ( m_sendtoBuffer )
        {
          v14 = bdEndpoint::getHash((bdEndpoint *)(v11 + 8));
          bdPacketBuffer::clearBuffer(m_sendtoBuffer, v14);
        }
        value.m_ptr = v20;
        if ( v20 )
          _InterlockedExchangeAdd((volatile signed __int32 *)&v20->m_refCount, 1u);
        bdSocketRouter::removeFromVtagToDtlsMap(this, (bdReference<bdDTLSAssociation>)&value);
        bdHashMap<bdEndpoint,bdReference<bdDTLSAssociation>,bdEndpointHashingClass>::remove(&this->m_endpointToDtlsMap, &iterator);
LABEL_30:
        if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
        {
          if ( result.m_ptr )
            ((void (__fastcall *)(bdAddrHandle *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
          result.m_ptr = NULL;
        }
        if ( v20 && _InterlockedExchangeAdd((volatile signed __int32 *)&v20->m_refCount, 0xFFFFFFFF) == 1 )
        {
          if ( v20 )
            ((void (__fastcall *)(bdDTLSAssociation *, __int64))v20->~bdReferencable)(v20, 1i64);
          v20 = NULL;
        }
        if ( !iterator )
        {
          p_m_endpointToDTLSMutex = v23;
          goto LABEL_42;
        }
      }
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/bdSocketRouter", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouter.cpp", "bdSocketRouter::pump", 0x9Fu, "Invalid state!");
      goto LABEL_23;
    }
  }
LABEL_42:
  bdSharedMutex::unlock(p_m_endpointToDTLSMutex);
}

/*
==============
bdSocketRouter::quit
==============
*/
bool bdSocketRouter::quit(bdSocketRouter *this)
{
  bdSocket *v3; 
  unsigned int v4; 
  unsigned int m_capacity; 
  __int64 v6; 
  bdHashMap<unsigned short,bdLinkedList<bdReference<bdDTLSAssociation> > *,bdHashingClass>::Node **m_map; 
  bdHashMap<unsigned short,bdLinkedList<bdReference<bdDTLSAssociation> > *,bdHashingClass>::Node *v8; 
  bdLinkedList<bdReference<bdDTLSAssociation> > *m_data; 
  bdSocket *m_head; 
  unsigned int v11; 
  __int64 v12; 
  bdPacketBuffer *m_sendtoBuffer; 
  bool v14; 
  bool v15; 
  bdPacketInterceptor *v16; 

  if ( this->m_status )
  {
    v3 = NULL;
    this->m_status = BD_SOCKET_ROUTER_UNINITIALIZED;
    bdSecurityKeyMap::unregisterListener(&this->m_keyStore);
    bdSharedMutex::lock(&this->m_endpointToDTLSMutex);
    bdHashMap<bdEndpoint,bdReference<bdDTLSAssociation>,bdEndpointHashingClass>::clear(&this->m_endpointToDtlsMap);
    bdSharedMutex::unlock(&this->m_endpointToDTLSMutex);
    bdSharedMutex::lock(&this->m_vtagToDTLSMutex);
    if ( this->m_vtagToDtlsMap.m_size )
    {
      v4 = 0;
      m_capacity = this->m_vtagToDtlsMap.m_capacity;
      if ( m_capacity )
      {
        do
        {
          if ( this->m_vtagToDtlsMap.m_map[v4] )
            break;
          ++v4;
        }
        while ( v4 < m_capacity );
      }
      v6 = v4;
      m_map = this->m_vtagToDtlsMap.m_map;
      if ( m_map[v6] )
      {
        _InterlockedExchangeAdd((volatile signed __int32 *)&this->m_vtagToDtlsMap.m_numIterators, 1u);
        m_map = this->m_vtagToDtlsMap.m_map;
      }
      v8 = m_map[v6];
      if ( v8 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            m_data = v8->m_data;
            if ( v8->m_data )
            {
              m_head = (bdSocket *)m_data->m_head;
              if ( m_data->m_head )
              {
                do
                {
                  v3 = *(bdSocket **)&m_head->m_handle;
                  if ( m_head->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&m_head->create, 0xFFFFFFFF) == 1 )
                  {
                    if ( m_head->__vftable )
                      (*(void (__fastcall **)(bdSocket_vtbl *, __int64))m_head->~bdSocket)(m_head->__vftable, 1i64);
                    m_head->__vftable = NULL;
                  }
                  bdMemory::deallocate(m_head);
                  m_data->m_head = (bdLinkedList<bdReference<bdDTLSAssociation> >::Node *)v3;
                  m_head = v3;
                }
                while ( v3 );
              }
              m_data->m_tail = (bdLinkedList<bdReference<bdDTLSAssociation> >::Node *)v3;
              m_data->m_size = (unsigned int)v3;
              bdMemory::deallocate(m_data);
            }
            if ( !v8->m_next )
              break;
            v8 = v8->m_next;
          }
          v11 = this->m_vtagToDtlsMap.m_capacity;
          v12 = (((16777619 * LOBYTE(v8->m_key)) ^ HIBYTE(v8->m_key)) & (v11 - 1)) + 1;
          if ( (unsigned int)v12 >= v11 )
            break;
          while ( 1 )
          {
            v8 = this->m_vtagToDtlsMap.m_map[v12];
            if ( v8 )
              break;
            v12 = (unsigned int)(v12 + 1);
            if ( (unsigned int)v12 >= v11 )
              goto LABEL_24;
          }
        }
LABEL_24:
        _InterlockedExchangeAdd((volatile signed __int32 *)&this->m_vtagToDtlsMap.m_numIterators, 0xFFFFFFFF);
      }
    }
    bdHashMap<unsigned short,bdLinkedList<bdReference<bdDTLSAssociation>> *,bdHashingClass>::clear(&this->m_vtagToDtlsMap);
    bdSharedMutex::unlock(&this->m_vtagToDTLSMutex);
    m_sendtoBuffer = this->m_sendtoBuffer;
    if ( m_sendtoBuffer )
      bdPacketBuffer::clearAll(m_sendtoBuffer);
    this->m_socket = v3;
    v14 = bdNATTravClient::quit(&this->m_natTrav);
    v15 = bdQoSProbe::quit(&this->m_qosProber) && v14;
    bdSocketRouter::unregisterInterceptor(this, &this->m_natTrav);
    v16 = &this->m_qosProber.bdPacketInterceptor;
    if ( this == (bdSocketRouter *)-816i64 )
      v16 = NULL;
    bdSocketRouter::unregisterInterceptor(this, v16);
    bdMemory::deallocate(this->m_interceptors.m_data);
    this->m_interceptors.m_data = NULL;
    *(_QWORD *)&this->m_interceptors.m_capacity = 0i64;
    bdSharedMutex::lock(&this->m_endpointToAddrMutex);
    bdHashMap<bdEndpoint,bdReference<bdAddrHandle>,bdEndpointHashingClass>::clear(&this->m_endpointToAddrMap);
    bdSharedMutex::unlock(&this->m_endpointToAddrMutex);
    bdSharedMutex::lock(&this->m_migratingDtlsMutex);
    bdHashMap<bdReference<bdCommonAddr>,bdReference<bdDTLSAssociation>,bdHashingClass>::clear(&this->m_migratingDtlsMap);
    bdSharedMutex::unlock(&this->m_migratingDtlsMutex);
    bdSecurityKeyMap::clear(&this->m_keyStore);
    bdSocketRouterConfig::reset(&this->m_config);
    return v15;
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/bdSocketRouter", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouter.cpp", "bdSocketRouter::quit", 0xE1u, "quit() called multiple times.");
    return 0;
  }
}

/*
==============
bdSocketRouter::receiveFrom
==============
*/
__int64 bdSocketRouter::receiveFrom(bdSocketRouter *this, bdReference<bdAddrHandle> *addrHandle, void *data, const unsigned int size)
{
  unsigned int v8; 
  unsigned int v9; 
  signed int v10; 
  unsigned int v11; 
  __int64 v13; 
  bool receiving; 
  bdAddr realAddr; 
  char str[112]; 

  v8 = -2;
  if ( this->m_status == BD_SOCKET_ROUTER_INITIALIZED )
  {
    receiving = 1;
    bdAddr::bdAddr(&realAddr);
    v9 = 0;
    while ( 2 )
    {
      while ( 1 )
      {
        v10 = bdRoutingLayer::receiveFrom(&this->m_routingLayer, &realAddr, data, size);
        v8 = v10;
        if ( v10 <= 0 )
          break;
        v8 = bdSocketRouter::processPacket(this, addrHandle, &realAddr, data, size, v10, &receiving);
        if ( !receiving )
          return v8;
      }
      if ( v10 >= 0 )
      {
        bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdSocket/bdSocketRouter", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouter.cpp", "bdSocketRouter::receiveFrom", 0x478u, "socket receiveFrom returned 0 ");
      }
      else
      {
        switch ( v10 )
        {
          case -13:
          case -12:
          case -11:
          case -10:
          case -9:
          case -8:
          case -7:
          case -4:
          case -3:
          case -1:
            LODWORD(v13) = v10;
            bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/bdSocketRouter", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouter.cpp", "bdSocketRouter::processError", 0x5A2u, "Encountered error: %i while receiving from the socket router ", v13);
            break;
          case -6:
            bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/bdSocketRouter", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouter.cpp", "bdSocketRouter::processError", 0x592u, "Couldn't receive message. Buffer too small?");
            break;
          case -5:
            if ( this->m_config.m_ignoreConnectionReset )
            {
              bdAddr::toString(&realAddr, str, 0x64ui64);
              bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/bdSocketRouter", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouter.cpp", "bdSocketRouter::processError", 0x572u, "Connection reset packet received for %s. Ignoring.", str);
            }
            else
            {
              bdAddressMap::unregisterRealAddr(&this->m_addrMap, &realAddr);
            }
            v11 = v9++;
            if ( v11 < this->m_config.m_maxConnectionResets )
            {
              receiving = 1;
              continue;
            }
            bdAddr::toString(&realAddr, str, 0x64ui64);
            LODWORD(v13) = v9;
            bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/bdSocketRouter", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouter.cpp", "bdSocketRouter::processError", 0x584u, "Exiting receiveAll loop after receiving %u connection resets.", v13);
            bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/bdSocketRouter", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouter.cpp", "bdSocketRouter::processError", 0x585u, "Last reset was received for addr %s ", str);
            break;
          case 0:
          case 1:
            bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdSocket/bdSocketRouter", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouter.cpp", "bdSocketRouter::processError", 0x5A8u, "These cannot occur");
            break;
          default:
            return v8;
        }
      }
      break;
    }
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/bdSocketRouter", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouter.cpp", "bdSocketRouter::receiveFrom", 0x461u, "Cannot receive data before class has been initialized");
  }
  return v8;
}

/*
==============
bdSocketRouter::registerInterceptor
==============
*/
void bdSocketRouter::registerInterceptor(bdSocketRouter *this, bdPacketInterceptor *const interceptor)
{
  unsigned int m_size; 
  bdPacketInterceptor **m_data; 
  int v5; 
  unsigned int m_capacity; 
  unsigned int v7; 
  unsigned int v8; 
  unsigned int v9; 

  if ( this->m_status == BD_SOCKET_ROUTER_INITIALIZED )
  {
    m_size = this->m_interceptors.m_size;
    m_data = NULL;
    v5 = 0;
    if ( m_size )
    {
      while ( interceptor != this->m_interceptors.m_data[v5] )
      {
        if ( ++v5 >= m_size )
          goto LABEL_7;
      }
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/bdSocketRouter", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouter.cpp", "bdSocketRouter::registerInterceptor", 0x74Eu, "same listener registered multiple times.");
    }
LABEL_7:
    m_capacity = this->m_interceptors.m_capacity;
    if ( this->m_interceptors.m_size == m_capacity )
    {
      v7 = this->m_interceptors.m_capacity;
      if ( !m_capacity )
        v7 = 1;
      v8 = m_capacity + v7;
      if ( m_capacity + v7 )
      {
        m_data = (bdPacketInterceptor **)bdMemory::allocate(8i64 * v8);
        v9 = this->m_interceptors.m_size;
        if ( v9 )
          memcpy_0(m_data, this->m_interceptors.m_data, 8i64 * v9);
      }
      bdMemory::deallocate(this->m_interceptors.m_data);
      this->m_interceptors.m_data = m_data;
      this->m_interceptors.m_capacity = v8;
    }
    else
    {
      m_data = this->m_interceptors.m_data;
    }
    m_data[this->m_interceptors.m_size++] = interceptor;
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdSocket/bdSocketRouter", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouter.cpp", "bdSocketRouter::registerInterceptor", 0x756u, "Cannot register interceptors until this class is initialized");
  }
}

/*
==============
bdSocketRouter::removeFromVtagToDtlsMap
==============
*/
char bdSocketRouter::removeFromVtagToDtlsMap(bdSocketRouter *this, bdReference<bdDTLSAssociation> value)
{
  bdSharedMutex *p_m_vtagToDTLSMutex; 
  unsigned __int16 LocalTag; 
  bdHashMap<unsigned short,bdLinkedList<bdReference<bdDTLSAssociation> > *,bdHashingClass>::Node *v6; 
  bdLinkedList<bdReference<bdDTLSAssociation> > *m_data; 
  bdLinkedList<bdReference<bdDTLSAssociation> >::Node *m_head; 
  bdLinkedList<bdReference<bdDTLSAssociation> >::Node *v10; 
  bdSharedMutex *v11; 
  void *position; 

  p_m_vtagToDTLSMutex = &this->m_vtagToDTLSMutex;
  v11 = &this->m_vtagToDTLSMutex;
  bdSharedMutex::lock(&this->m_vtagToDTLSMutex);
  LocalTag = bdDTLSAssociation::getLocalTag((bdDTLSAssociation *)value.m_ptr->__vftable);
  if ( !this->m_vtagToDtlsMap.m_size || (v6 = this->m_vtagToDtlsMap.m_map[(HIBYTE(LocalTag) ^ (16777619 * (unsigned __int8)LocalTag)) & (this->m_vtagToDtlsMap.m_capacity - 1)]) == NULL )
  {
LABEL_5:
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/bdSocketRouter", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouter.cpp", "bdSocketRouter::removeFromVtagToDtlsMap", 0x8C9u, "Could not find DTLSAssociation in the tag map.");
    bdSharedMutex::unlock(p_m_vtagToDTLSMutex);
    if ( !value.m_ptr->__vftable || _InterlockedExchangeAdd((volatile signed __int32 *)&value.m_ptr->sendTo, 0xFFFFFFFF) != 1 )
      return 0;
    if ( value.m_ptr->__vftable )
      (*(void (__fastcall **)(bdDTLSAssociation_vtbl *, __int64))value.m_ptr->~bdReferencable)(value.m_ptr->__vftable, 1i64);
LABEL_9:
    value.m_ptr->__vftable = NULL;
    return 0;
  }
  while ( LocalTag != v6->m_key )
  {
    v6 = v6->m_next;
    if ( !v6 )
      goto LABEL_5;
  }
  _InterlockedExchangeAdd((volatile signed __int32 *)&this->m_vtagToDtlsMap.m_numIterators, 1u);
  m_data = v6->m_data;
  bdHandleAssert(this->m_vtagToDtlsMap.m_numIterators.m_value._My_val != 0, "m_numIterators != 0", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdhashmap.inl", "bdHashMap<unsigned short,class bdLinkedList<class bdReference<class bdDTLSAssociation> > *,class bdHashingClass>::releaseIterator", 0x18Au, "bdHashMap::releaseIterator Iterator count reached 0, can't release iterator");
  _InterlockedExchangeAdd((volatile signed __int32 *)&this->m_vtagToDtlsMap.m_numIterators, 0xFFFFFFFF);
  m_head = m_data->m_head;
  v10 = NULL;
  if ( m_data->m_head )
  {
    while ( m_head->m_data.m_ptr != (bdDTLSAssociation *)value.m_ptr->__vftable )
    {
      m_head = m_head->m_next;
      if ( !m_head )
        goto LABEL_16;
    }
    v10 = m_head;
  }
LABEL_16:
  position = v10;
  if ( !v10 )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/bdSocketRouter", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouter.cpp", "bdSocketRouter::removeFromVtagToDtlsMap", 0x8D1u, "Could not find DTLSAssociation in the tag list.");
    bdSharedMutex::unlock(v11);
    if ( !value.m_ptr->__vftable || _InterlockedExchangeAdd((volatile signed __int32 *)&value.m_ptr->sendTo, 0xFFFFFFFF) != 1 )
      return 0;
    if ( value.m_ptr->__vftable )
    {
      (*(void (__fastcall **)(bdDTLSAssociation_vtbl *, __int64))value.m_ptr->~bdReferencable)(value.m_ptr->__vftable, 1i64);
      value.m_ptr->__vftable = NULL;
      return 0;
    }
    goto LABEL_9;
  }
  bdLinkedList<bdReference<bdDTLSAssociation>>::removeAt(m_data, &position);
  bdSharedMutex::unlock(v11);
  if ( value.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&value.m_ptr->sendTo, 0xFFFFFFFF) == 1 )
  {
    if ( value.m_ptr->__vftable )
      (*(void (__fastcall **)(bdDTLSAssociation_vtbl *, __int64))value.m_ptr->~bdReferencable)(value.m_ptr->__vftable, 1i64);
    value.m_ptr->__vftable = NULL;
  }
  return 1;
}

/*
==============
bdSocketRouter::sendPreparedData
==============
*/
__int64 bdSocketRouter::sendPreparedData(bdSocketRouter *this, bdSocketRouterData *preparedData, const unsigned int preparedDataLength, unsigned int *outDataLength)
{
  unsigned int v8; 
  __int64 v9; 
  bdMsgHdr *v10; 
  __int64 v11; 
  __int128 v12; 
  double v13; 
  __int64 v14; 
  int v15; 
  unsigned int v16; 
  unsigned int numSent[4]; 
  bdMsgHdr msgVec[128]; 

  v8 = 128;
  bdHandleAssert(preparedDataLength <= 0x80, "(preparedDataLength <= BD_SOCKETROUTER_SEND_PREPARED_DATA_MAX)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouter.cpp", "bdSocketRouter::sendPreparedData", 0x42Du, "sendPreparedData(): Too many packets to send [%u]", preparedDataLength);
  v9 = 0i64;
  v10 = msgVec;
  v11 = 128i64;
  do
  {
    bdMsgHdr::`default constructor closure'(v10++);
    --v11;
  }
  while ( v11 );
  if ( preparedDataLength < 0x80 )
    v8 = preparedDataLength;
  if ( v8 )
  {
    do
    {
      v12 = *(_OWORD *)&preparedData->m_msgHdr.m_addr;
      v13 = *(double *)&preparedData->m_msgHdr.m_dataLen;
      v14 = v9;
      v9 = (unsigned int)(v9 + 1);
      ++preparedData;
      *(_OWORD *)&msgVec[v14].m_addr = v12;
      *(double *)&msgVec[v14].m_dataLen = v13;
    }
    while ( (unsigned int)v9 < v8 );
  }
  numSent[0] = 0;
  v15 = bdRoutingLayer::sendMMsgRaw(&this->m_routingLayer, msgVec, v9, numSent);
  if ( v15 < 0 || (v16 = numSent[0], numSent[0] < preparedDataLength) )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/bdSocketRouter", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouter.cpp", "bdSocketRouter::sendPreparedData", 0x442u, "sendPreparedData(): Not all packets sent");
    v16 = numSent[0];
  }
  *outDataLength = v16;
  return (unsigned int)v15;
}

/*
==============
bdSocketRouter::sendTo
==============
*/
__int64 bdSocketRouter::sendTo(bdSocketRouter *this, const bdReference<bdAddrHandle> addrHandle, void *data, const unsigned int length)
{
  int v8; 
  bdSharedMutex *p_m_endpointToDTLSMutex; 
  bdAddrHandle *v10; 
  bool v11; 
  bdDTLSAssociation *v12; 
  bdAddrHandle *v13; 
  bdCommonAddr *v14; 
  unsigned int line; 
  char *format; 
  bdReference<bdDTLSAssociation> value; 
  bdReference<bdAddrHandle> v19; 
  bdReference<bdCommonAddr> addr; 
  bdReference<bdAddrHandle> addrHandlea; 
  __int64 v22; 
  bdAddrHandle *m_ptr; 
  bdSharedMutex *v24; 
  char buf[1024]; 
  char outData[1296]; 

  v22 = -2i64;
  m_ptr = addrHandle.m_ptr;
  v8 = -1;
  if ( this->m_status != BD_SOCKET_ROUTER_INITIALIZED )
  {
    format = "Cannot send data before class has been initialized";
    line = 869;
LABEL_5:
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/bdSocketRouter", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouter.cpp", "bdSocketRouter::sendTo", line, format);
    goto LABEL_21;
  }
  if ( !addrHandle.m_ptr->__vftable )
  {
    format = "Cannot send data to null addr handle ref";
    line = 873;
    goto LABEL_5;
  }
  value.m_ptr = NULL;
  p_m_endpointToDTLSMutex = &this->m_endpointToDTLSMutex;
  v24 = &this->m_endpointToDTLSMutex;
  bdSharedMutex::lock_shared(&this->m_endpointToDTLSMutex);
  bdHashMap<bdEndpoint,bdReference<bdDTLSAssociation>,bdEndpointHashingClass>::get(&this->m_endpointToDtlsMap, (const bdEndpoint *)&addrHandle.m_ptr->__vftable[2], &value);
  bdSharedMutex::unlock_shared(p_m_endpointToDTLSMutex);
  v10 = (bdAddrHandle *)addrHandle.m_ptr->__vftable;
  addrHandlea.m_ptr = v10;
  if ( v10 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v10->m_refCount, 1u);
  v11 = bdSocketRouter::cacheSendTo(this, (const bdReference<bdAddrHandle>)&addrHandlea, &value, data, length);
  v12 = value.m_ptr;
  if ( v11 )
  {
    v8 = length;
  }
  else if ( value.m_ptr )
  {
    v8 = bdDTLSAssociation::prepareData(value.m_ptr, data, length, outData, 0x508u);
    if ( v8 >= 0 )
    {
      v13 = (bdAddrHandle *)addrHandle.m_ptr->__vftable;
      v19.m_ptr = v13;
      if ( v13 )
      {
        _InterlockedExchangeAdd((volatile signed __int32 *)&v13->m_refCount, 1u);
        v12 = value.m_ptr;
      }
      v8 = bdRoutingLayer::sendTo(&this->m_routingLayer, (const bdReference<bdAddrHandle>)&v19, outData, v8);
    }
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdSocket/bdSocketRouter", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouter.cpp", "bdSocketRouter::sendTo", 0x386u, "Not established! Call connect() first.");
    v14 = (bdCommonAddr *)addrHandle.m_ptr->__vftable[2].~bdReferencable;
    addr.m_ptr = v14;
    if ( v14 )
    {
      _InterlockedExchangeAdd((volatile signed __int32 *)&v14->m_refCount, 1u);
      v12 = value.m_ptr;
    }
    bdCommonAddrInfo::getBriefInfo((const bdReference<bdCommonAddr>)&addr, buf, 0x400u);
    bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/bdSocketRouter", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouter.cpp", "bdSocketRouter::sendTo", 0x38Bu, buf);
  }
  if ( v12 && _InterlockedExchangeAdd((volatile signed __int32 *)&v12->m_refCount, 0xFFFFFFFF) == 1 )
    ((void (__fastcall *)(bdDTLSAssociation *, __int64))value.m_ptr->~bdReferencable)(value.m_ptr, 1i64);
LABEL_21:
  if ( addrHandle.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&addrHandle.m_ptr->__vftable[1], 0xFFFFFFFF) == 1 )
  {
    if ( addrHandle.m_ptr->__vftable )
      (*(void (__fastcall **)(bdAddrHandle_vtbl *, __int64))addrHandle.m_ptr->~bdReferencable)(addrHandle.m_ptr->__vftable, 1i64);
    addrHandle.m_ptr->__vftable = NULL;
  }
  return (unsigned int)v8;
}

/*
==============
bdSocketRouter::setClientAuthToken
==============
*/
void bdSocketRouter::setClientAuthToken(bdSocketRouter *this, const bdClientAuthToken *clientAuthToken, unsigned int titleID, unsigned __int64 userID)
{
  bdRoutingLayer::setClientAuthToken(&this->m_routingLayer, clientAuthToken, titleID, userID);
}

/*
==============
bdSocketRouter::setSendtoBuffer
==============
*/
void bdSocketRouter::setSendtoBuffer(bdSocketRouter *this, bdPacketBuffer *buffer)
{
  this->m_sendtoBuffer = buffer;
}

/*
==============
bdSocketRouter::setupIntroducers
==============
*/
bool bdSocketRouter::setupIntroducers(bdSocketRouter *this, const bdArray<bdAddr> *introducers)
{
  return this->m_status == BD_SOCKET_ROUTER_INITIALIZED && bdNATTravClient::setupIntroducers(&this->m_natTrav, introducers);
}

/*
==============
bdSocketRouter::shouldUseRelay
==============
*/
_BOOL8 bdSocketRouter::shouldUseRelay(bdSocketRouter *this, const bdReference<bdAddrHandle> *addrHandle)
{
  bdCommonAddr *m_ptr; 
  bool v3; 
  bdCommonAddr *v5; 

  m_ptr = addrHandle->m_ptr->m_endpoint.m_ca.m_ptr;
  v5 = m_ptr;
  if ( m_ptr )
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
  v3 = this->shouldUseRelay(this, (const bdReference<bdCommonAddr> *)&v5);
  if ( v5 && _InterlockedExchangeAdd((volatile signed __int32 *)&v5->m_refCount, 0xFFFFFFFF) == 1 && v5 )
    ((void (__fastcall *)(bdCommonAddr *, __int64))v5->~bdReferencable)(v5, 1i64);
  return v3;
}

/*
==============
bdSocketRouter::shouldUseRelay
==============
*/
__int64 bdSocketRouter::shouldUseRelay(bdSocketRouter *this, const bdReference<bdCommonAddr> *remote)
{
  char v4; 
  bdSocketRouterRelayManager *m_relayManager; 
  _BOOL8 v6; 
  bdSocketRouterRelayManager_vtbl *v7; 
  bdCommonAddr *m_ptr; 
  bool (__fastcall *shouldUseRelay)(bdSocketRouterRelayManager *, bdReference<bdCommonAddr>, bdReference<bdCommonAddr>, bool); 
  bdCommonAddr *v10; 
  bdCommonAddr *v12; 
  bdCommonAddr *v13; 

  v4 = ((__int64 (__fastcall *)(bdSocketRouter *))this->isCrossNetwork)(this);
  m_relayManager = this->m_relayManager;
  v6 = v4 != 0;
  if ( !m_relayManager )
    return v6;
  v7 = m_relayManager->__vftable;
  m_ptr = remote->m_ptr;
  v12 = m_ptr;
  shouldUseRelay = v7->shouldUseRelay;
  if ( m_ptr )
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
  v10 = this->m_localCommonAddr.m_ptr;
  v13 = v10;
  if ( v10 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v10->m_refCount, 1u);
  return ((__int64 (__fastcall *)(bdSocketRouterRelayManager *, bdCommonAddr **, bdCommonAddr **, _BOOL8))shouldUseRelay)(m_relayManager, &v13, &v12, v6);
}

/*
==============
bdSocketRouter::shouldUseRelayIfNatTravFails
==============
*/
char bdSocketRouter::shouldUseRelayIfNatTravFails(bdSocketRouter *this, const bdReference<bdCommonAddr> *remote)
{
  bdSocketRouter *v2; 
  bdSocketRouterRelayManager *m_relayManager; 
  bdCommonAddr *m_ptr; 
  bdSocketRouterRelayManager_vtbl *v5; 
  bool (__fastcall *shouldUseRelayIfNatTravFails)(bdSocketRouterRelayManager *, bdReference<bdCommonAddr>, bdReference<bdCommonAddr>, bool); 
  __int64 v7; 
  bdCommonAddr *v9; 
  __int64 v10; 

  v2 = this;
  m_relayManager = this->m_relayManager;
  if ( !m_relayManager )
    return 1;
  m_ptr = remote->m_ptr;
  v5 = m_relayManager->__vftable;
  v9 = m_ptr;
  shouldUseRelayIfNatTravFails = v5->shouldUseRelayIfNatTravFails;
  if ( m_ptr )
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
  v7 = (__int64)v2->m_localCommonAddr.m_ptr;
  v10 = v7;
  if ( v7 )
    _InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 8), 1u);
  LOBYTE(v2) = 1;
  return ((__int64 (__fastcall *)(bdSocketRouterRelayManager *, __int64 *, bdCommonAddr **, bdSocketRouter *))shouldUseRelayIfNatTravFails)(m_relayManager, &v10, &v9, v2);
}

/*
==============
bdSocketRouter::tryDecryptPacket
==============
*/
__int64 bdSocketRouter::tryDecryptPacket(bdSocketRouter *this, void *data, const unsigned int *size, const bdSecurityID *secID, bdAddr *realAddr, bdReference<bdAddrHandle> *addrHandle, int *val, bool checkSecID)
{
  unsigned __int8 v11; 
  bdLinkedList<bdReference<bdDTLSAssociation> > *m_data; 
  bdSharedMutex *p_m_vtagToDTLSMutex; 
  bdHashMap<unsigned short,bdLinkedList<bdReference<bdDTLSAssociation> > *,bdHashingClass>::Node *v14; 
  char v15; 
  bdLinkedList<bdReference<bdDTLSAssociation> >::Node *m_head; 
  bdDTLSAssociation *m_ptr; 
  bdSecurityID **v18; 
  bool v19; 
  int v20; 
  int v22; 
  unsigned int newOffset; 
  bdDTLSAssociation *v24; 
  bdReference<bdAddrHandle> result; 
  bdSharedMutex *v26; 
  __int64 v27; 
  bdDTLSHeader v28; 

  v27 = -2i64;
  v22 = 0;
  bdDTLSHeader::bdDTLSHeader(&v28);
  v11 = 0;
  if ( bdDTLSHeader::deserialize(&v28, data, *size, 0, &newOffset) )
  {
    m_data = NULL;
    p_m_vtagToDTLSMutex = &this->m_vtagToDTLSMutex;
    v26 = &this->m_vtagToDTLSMutex;
    bdSharedMutex::lock_shared(&this->m_vtagToDTLSMutex);
    if ( this->m_vtagToDtlsMap.m_size && (v14 = this->m_vtagToDtlsMap.m_map[(this->m_vtagToDtlsMap.m_capacity - 1) & (HIBYTE(v28.m_vtag) ^ (16777619 * LOBYTE(v28.m_vtag)))]) != NULL )
    {
      while ( v28.m_vtag != v14->m_key )
      {
        v14 = v14->m_next;
        if ( !v14 )
          goto LABEL_6;
      }
      _InterlockedExchangeAdd((volatile signed __int32 *)&this->m_vtagToDtlsMap.m_numIterators, 1u);
      m_data = v14->m_data;
      bdHandleAssert(this->m_vtagToDtlsMap.m_numIterators.m_value._My_val != 0, "m_numIterators != 0", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdhashmap.inl", "bdHashMap<unsigned short,class bdLinkedList<class bdReference<class bdDTLSAssociation> > *,class bdHashingClass>::releaseIterator", 0x18Au, "bdHashMap::releaseIterator Iterator count reached 0, can't release iterator");
      _InterlockedExchangeAdd((volatile signed __int32 *)&this->m_vtagToDtlsMap.m_numIterators, 0xFFFFFFFF);
      v15 = 1;
      p_m_vtagToDTLSMutex = v26;
    }
    else
    {
LABEL_6:
      v15 = 0;
    }
    bdSharedMutex::unlock_shared(p_m_vtagToDTLSMutex);
    if ( v15 )
    {
      if ( m_data->m_size > 1 )
        bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/bdSocketRouter", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouter.cpp", "bdSocketRouter::tryDecryptPacket", 0x7E9u, "tryDecryptPacket(): Collision detected, [%u] matching vtags.", m_data->m_size);
      m_head = m_data->m_head;
      while ( m_head )
      {
        if ( v11 )
          break;
        m_ptr = m_head->m_data.m_ptr;
        v24 = m_ptr;
        if ( m_ptr )
        {
          _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
          m_ptr = v24;
        }
        v19 = 1;
        if ( checkSecID )
        {
          if ( !m_ptr || (v18 = (bdSecurityID **)bdDTLSAssociation::getAddrHandle(m_ptr, &result), v22 |= 1u, !bdSecurityID::operator==(*v18 + 3, secID)) )
            v19 = 0;
        }
        if ( (v22 & 1) != 0 )
        {
          v22 &= ~1u;
          if ( result.m_ptr )
          {
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
            {
              if ( result.m_ptr )
                ((void (__fastcall *)(bdAddrHandle *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
              result.m_ptr = NULL;
            }
            m_ptr = v24;
          }
        }
        if ( v19 )
        {
          v20 = m_ptr->receiveFrom(m_ptr, realAddr, data, *val, addrHandle, data, *size);
          if ( v20 >= 0 )
          {
            v11 = 1;
            *val = v20;
          }
        }
        m_head = m_head->m_next;
        if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
          ((void (__fastcall *)(bdDTLSAssociation *, __int64))v24->~bdReferencable)(v24, 1i64);
      }
    }
    else
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdSocket/bdSocketRouter", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouter.cpp", "bdSocketRouter::tryDecryptPacket", 0x802u, "tryDecryptPacket(): Did not find matching DTLS for tag [%X]", v28.m_vtag);
    }
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/bdSocketRouter", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouter.cpp", "bdSocketRouter::tryDecryptPacket", 0x807u, "tryDecryptPacket(): Failed to deserialize header");
  }
  bdDTLSHeader::~bdDTLSHeader(&v28);
  return v11;
}

/*
==============
bdSocketRouter::tryToFindConnection
==============
*/
__int64 bdSocketRouter::tryToFindConnection(bdSocketRouter *this, void *data, const unsigned int *size, const bdSecurityID *secID, bdAddr *realAddr, bdReference<bdAddrHandle> *addrHandle, int *val)
{
  const bdSecurityID *v7; 
  __int64 v9; 
  unsigned int m_capacity; 
  bdHashMap<bdEndpoint,bdReference<bdDTLSAssociation>,bdEndpointHashingClass>::Node **m_map; 
  bdHashMap<bdEndpoint,bdReference<bdDTLSAssociation>,bdEndpointHashingClass>::Node *v12; 
  const bdEndpoint *p_m_key; 
  bdDTLSAssociation *m_ptr; 
  bdDTLSAssociation *v15; 
  bool v16; 
  bdAddr *v17; 
  const bdAddr *v18; 
  unsigned __int16 LocalTag; 
  int v20; 
  unsigned int Hash; 
  unsigned int v22; 
  __int64 v23; 
  char v25; 
  bdEndpoint **v26; 
  bool v27; 
  __int64 v28; 
  __int64 v29; 
  int v30; 
  bdReference<bdDTLSAssociation> dtls; 
  bdReference<bdAddrHandle> result; 
  bdReference<bdAddrHandle> v33; 
  bdReference<bdDTLSAssociation> value; 
  bdReference<bdAddrHandle> v35; 
  bdSharedMutex *p_m_endpointToDTLSMutex; 
  __int64 v37; 
  unsigned __int8 v38; 

  v37 = -2i64;
  v7 = secID;
  v30 = 0;
  p_m_endpointToDTLSMutex = &this->m_endpointToDTLSMutex;
  bdSharedMutex::lock(&this->m_endpointToDTLSMutex);
  v38 = 0;
  if ( this->m_endpointToDtlsMap.m_size )
  {
    v9 = 0i64;
    m_capacity = this->m_endpointToDtlsMap.m_capacity;
    if ( m_capacity )
    {
      do
      {
        if ( this->m_endpointToDtlsMap.m_map[v9] )
          break;
        v9 = (unsigned int)(v9 + 1);
      }
      while ( (unsigned int)v9 < m_capacity );
    }
    m_map = this->m_endpointToDtlsMap.m_map;
    if ( m_map[v9] )
    {
      _InterlockedExchangeAdd((volatile signed __int32 *)&this->m_endpointToDtlsMap.m_numIterators, 1u);
      m_map = this->m_endpointToDtlsMap.m_map;
    }
    v12 = m_map[v9];
    if ( v12 )
    {
      while ( 1 )
      {
        p_m_key = &v12->m_key;
        m_ptr = v12->m_data.m_ptr;
        v15 = m_ptr;
        dtls.m_ptr = v12->m_data.m_ptr;
        if ( m_ptr )
        {
          _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
          v15 = dtls.m_ptr;
        }
        v16 = 1;
        if ( m_ptr )
        {
          v30 |= 1u;
          if ( bdDTLSAssociation::getAddrHandle(v15, &result)->m_ptr )
            v16 = 0;
        }
        if ( (v30 & 1) != 0 )
        {
          v30 &= ~1u;
          if ( result.m_ptr )
          {
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
            {
              if ( result.m_ptr )
                ((void (__fastcall *)(bdAddrHandle *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
              result.m_ptr = NULL;
            }
            v15 = dtls.m_ptr;
          }
        }
        if ( !v16 )
        {
          v17 = (bdAddr *)bdDTLSAssociation::getRealAddr(v15);
          if ( bdSockAddr::compare(&v17->m_address, &realAddr->m_address, 1) )
          {
            v18 = bdDTLSAssociation::getRealAddr(v15);
            if ( bdRelayRoute::operator==(&v18->m_relayRoute, &realAddr->m_relayRoute) && bdSecurityID::operator==(&v12->m_key.m_secID, v7) )
            {
              LocalTag = bdDTLSAssociation::getLocalTag(v15);
              v20 = v15->receiveFrom(v15, realAddr, data, *val, addrHandle, data, *size);
              if ( LocalTag != bdDTLSAssociation::getLocalTag(v15) )
              {
                value.m_ptr = v15;
                _InterlockedExchangeAdd((volatile signed __int32 *)&v15->m_refCount, 1u);
                v15 = dtls.m_ptr;
                if ( !bdSocketRouter::updateVtagToDtlsMap(this, LocalTag, (bdReference<bdDTLSAssociation>)&value) )
                {
                  LODWORD(v29) = bdDTLSAssociation::getLocalTag(dtls.m_ptr);
                  LODWORD(v28) = LocalTag;
                  bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "BD_LOG_LEVEL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouter.cpp", "bdSocketRouter::tryToFindConnection", 0x83Bu, "Could not update vtag change for a dtls association, old vtag [%X] new vtag [%X]", v28, v29);
                }
              }
              if ( (int)(v20 + 0x80000000) < 0 || v20 == -2 )
              {
                v38 = 1;
                *val = v20;
                bdHandleAssert(this->m_endpointToDtlsMap.m_numIterators.m_value._My_val != 0, "m_numIterators != 0", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdhashmap.inl", "bdHashMap<class bdEndpoint,class bdReference<class bdDTLSAssociation>,class bdEndpointHashingClass>::releaseIterator", 0x18Au, "bdHashMap::releaseIterator Iterator count reached 0, can't release iterator");
                _InterlockedExchangeAdd((volatile signed __int32 *)&this->m_endpointToDtlsMap.m_numIterators, 0xFFFFFFFF);
                v25 = v30 | 2;
                v27 = 0;
                if ( bdDTLSAssociation::getAddrHandle(dtls.m_ptr, &v35)->m_ptr )
                {
                  v26 = (bdEndpoint **)bdDTLSAssociation::getAddrHandle(dtls.m_ptr, &v33);
                  v25 = v30 | 6;
                  if ( !bdEndpoint::operator==(*v26 + 1, p_m_key) )
                    v27 = 1;
                }
                if ( (v25 & 4) != 0 && v33.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v33.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
                {
                  if ( v33.m_ptr )
                    ((void (__fastcall *)(bdAddrHandle *, __int64))v33.m_ptr->~bdReferencable)(v33.m_ptr, 1i64);
                  v33.m_ptr = NULL;
                }
                if ( v35.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v35.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v35.m_ptr )
                  ((void (__fastcall *)(bdAddrHandle *, __int64))v35.m_ptr->~bdReferencable)(v35.m_ptr, 1i64);
                if ( v27 )
                  bdSocketRouter::updateDtls(this, p_m_key, &dtls);
                if ( dtls.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&dtls.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
                  ((void (__fastcall *)(bdDTLSAssociation *, __int64))dtls.m_ptr->~bdReferencable)(dtls.m_ptr, 1i64);
                break;
              }
              v7 = secID;
            }
          }
        }
        if ( v15 && _InterlockedExchangeAdd((volatile signed __int32 *)&v15->m_refCount, 0xFFFFFFFF) == 1 )
          ((void (__fastcall *)(bdDTLSAssociation *, __int64))dtls.m_ptr->~bdReferencable)(dtls.m_ptr, 1i64);
        v12 = v12->m_next;
        if ( !v12 )
        {
          Hash = bdEndpointHashingClass::getHash(&this->m_endpointToDtlsMap.m_hashClass, p_m_key);
          v22 = this->m_endpointToDtlsMap.m_capacity;
          v23 = (Hash & (v22 - 1)) + 1;
          if ( (unsigned int)v23 >= v22 )
          {
LABEL_38:
            _InterlockedExchangeAdd((volatile signed __int32 *)&this->m_endpointToDtlsMap.m_numIterators, 0xFFFFFFFF);
            break;
          }
          while ( 1 )
          {
            v12 = this->m_endpointToDtlsMap.m_map[v23];
            if ( v12 )
              break;
            v23 = (unsigned int)(v23 + 1);
            if ( (unsigned int)v23 >= v22 )
              goto LABEL_38;
          }
        }
      }
    }
  }
  bdSharedMutex::unlock(p_m_endpointToDTLSMutex);
  return v38;
}

/*
==============
bdSocketRouter::unregisterInterceptor
==============
*/
void bdSocketRouter::unregisterInterceptor(bdSocketRouter *this, bdPacketInterceptor *const interceptor)
{
  unsigned int m_size; 
  unsigned int v5; 
  unsigned int v6; 
  bdPacketInterceptor **m_data; 
  unsigned int m_capacity; 
  unsigned int v9; 
  unsigned int v10; 
  bdPacketInterceptor **v11; 
  unsigned int v12; 

  m_size = this->m_interceptors.m_size;
  v5 = 0;
  if ( m_size )
  {
    v6 = 1;
    do
    {
      m_data = this->m_interceptors.m_data;
      if ( interceptor == m_data[v5] )
      {
        if ( v5 < m_size && v6 <= m_size && v5 < v6 )
        {
          memmove_0(&m_data[v5], &m_data[v6], 8i64 * (m_size - v6));
          m_capacity = this->m_interceptors.m_capacity;
          v9 = v5 + this->m_interceptors.m_size - v6;
          this->m_interceptors.m_size = v9;
          if ( m_capacity > 4 * v9 )
          {
            v10 = m_capacity - v9;
            if ( m_capacity != v9 )
              v10 = 0;
            if ( v10 <= m_capacity >> 1 )
              v10 = m_capacity >> 1;
            v11 = NULL;
            v12 = m_capacity - v10;
            this->m_interceptors.m_capacity = v12;
            if ( v12 )
              v11 = (bdPacketInterceptor **)bdMemory::reallocate(this->m_interceptors.m_data, 8i64 * v12);
            this->m_interceptors.m_data = v11;
          }
        }
        --v5;
        --v6;
      }
      m_size = this->m_interceptors.m_size;
      ++v5;
      ++v6;
    }
    while ( v5 < m_size );
  }
}

/*
==============
bdSocketRouter::updateAddrHandle
==============
*/
char bdSocketRouter::updateAddrHandle(bdSocketRouter *this, bdReference<bdAddrHandle> addrHandle, bdReference<bdCommonAddr> newCommonAddr)
{
  void (__fastcall *v6)(bdReferencable *); 
  bdAddrHandle_vtbl *v7; 
  void (__fastcall *v8)(bdReferencable *); 
  bdCommonAddr_vtbl *v9; 
  bdDTLSAssociation *m_ptr; 
  void (__fastcall *v12)(bdReferencable *); 
  bdCommonAddr_vtbl *v13; 
  bdSharedMutex *p_m_migratingDtlsMutex; 
  bdRelayAssociationListener *v15; 
  bdCommonAddr *v16; 
  bool v17; 
  bdReference<bdCommonAddr> remote; 
  bdSharedMutex *v19; 
  __int64 v20; 
  void (__fastcall *v21)(bdReferencable *); 
  bdSharedMutex *p_m_endpointToDTLSMutex; 
  bdReference<bdDTLSAssociation> value; 

  v20 = -2i64;
  bdHandleAssert(LODWORD(addrHandle.m_ptr->__vftable[23].~bdReferencable) == 1, "addrHandle->getRefRealAddr().getType() == bdAddr::bdAddrType::BD_ADDR_RELAYED", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouter.cpp", "bdSocketRouter::updateAddrHandle", 0x300u, "This should only be called on relayed addresses.");
  bdHandleAssert(LODWORD(addrHandle.m_ptr->__vftable[4].~bdReferencable) == 5, "addrHandle->getStatus() == bdAddrHandle::BD_ADDR_CONNECTED", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouter.cpp", "bdSocketRouter::updateAddrHandle", 0x301u, "Cannot migrate a non-resolved addrHandle.");
  v6 = addrHandle.m_ptr->__vftable[2].~bdReferencable;
  v21 = v6;
  if ( v6 )
    _InterlockedExchangeAdd((volatile signed __int32 *)v6 + 2, 1u);
  bdHandleAssert(v6 != (void (__fastcall *)(bdReferencable *))newCommonAddr.m_ptr->__vftable, "addrHandle->getEndPoint().getCommonAddr() != newCommonAddr", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouter.cpp", "bdSocketRouter::updateAddrHandle", 0x302u, "addrHandle->getEndPoint().getCommonAddr() and newCommonAddr are the same. No update needed.");
  if ( v6 && !_InterlockedDecrement((volatile signed __int32 *)v6 + 2) )
    (**(void (__fastcall ***)(void (__fastcall *)(bdReferencable *), __int64))v6)(v6, 1i64);
  v7 = addrHandle.m_ptr->__vftable;
  if ( LODWORD(addrHandle.m_ptr->__vftable[23].~bdReferencable) != 1 )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdSocket/bdSocketRouter", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouter.cpp", "bdSocketRouter::updateAddrHandle", 0x306u, "updateAddrHandle can only be called on relayed addresses.");
    goto LABEL_8;
  }
  if ( LODWORD(v7[4].~bdReferencable) != 5 )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdSocket/bdSocketRouter", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouter.cpp", "bdSocketRouter::updateAddrHandle", 0x30Cu, "Cannot migrate a non-resolved addrHandle.");
LABEL_8:
    if ( addrHandle.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&addrHandle.m_ptr->__vftable[1], 0xFFFFFFFF) == 1 )
    {
      if ( addrHandle.m_ptr->__vftable )
        (*(void (__fastcall **)(bdAddrHandle_vtbl *, __int64))addrHandle.m_ptr->~bdReferencable)(addrHandle.m_ptr->__vftable, 1i64);
      addrHandle.m_ptr->__vftable = NULL;
    }
    if ( newCommonAddr.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&newCommonAddr.m_ptr->__vftable[1], 0xFFFFFFFF) == 1 )
    {
      if ( newCommonAddr.m_ptr->__vftable )
        (*(void (__fastcall **)(bdCommonAddr_vtbl *, __int64))newCommonAddr.m_ptr->~bdReferencable)(newCommonAddr.m_ptr->__vftable, 1i64);
      newCommonAddr.m_ptr->__vftable = NULL;
    }
    return 0;
  }
  v8 = v7[2].~bdReferencable;
  if ( v8 )
    _InterlockedExchangeAdd((volatile signed __int32 *)v8 + 2, 1u);
  v9 = newCommonAddr.m_ptr->__vftable;
  if ( v8 && !_InterlockedDecrement((volatile signed __int32 *)v8 + 2) )
    (**(void (__fastcall ***)(void (__fastcall *)(bdReferencable *), __int64))v8)(v8, 1i64);
  if ( (char *)v8 == (char *)v9 )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/bdSocketRouter", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouter.cpp", "bdSocketRouter::updateAddrHandle", 0x312u, "addrHandle->getEndPoint().getCommonAddr() and newCommonAddr are the same. No update needed.");
LABEL_27:
    bdReference<bdAddrHandle>::~bdReference<bdAddrHandle>((bdReference<bdAddrHandle> *)addrHandle.m_ptr);
    bdReference<bdCommonAddr>::~bdReference<bdCommonAddr>((bdReference<bdCommonAddr> *)newCommonAddr.m_ptr);
    return 1;
  }
  value.m_ptr = NULL;
  p_m_endpointToDTLSMutex = &this->m_endpointToDTLSMutex;
  bdSharedMutex::lock_shared(&this->m_endpointToDTLSMutex);
  bdHashMap<bdEndpoint,bdReference<bdDTLSAssociation>,bdEndpointHashingClass>::get(&this->m_endpointToDtlsMap, (const bdEndpoint *)&addrHandle.m_ptr->__vftable[2], &value);
  bdSharedMutex::unlock_shared(&this->m_endpointToDTLSMutex);
  m_ptr = value.m_ptr;
  if ( !value.m_ptr || bdDTLSAssociation::getStatus(value.m_ptr) != BD_SOCKET_CONNECTED )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdSocket/bdSocketRouter", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouter.cpp", "bdSocketRouter::updateAddrHandle", 0x334u, "No live DTLS association was found for this address handle.");
    if ( !m_ptr )
    {
LABEL_51:
      bdReference<bdAddrHandle>::~bdReference<bdAddrHandle>((bdReference<bdAddrHandle> *)addrHandle.m_ptr);
      bdReference<bdCommonAddr>::~bdReference<bdCommonAddr>((bdReference<bdCommonAddr> *)newCommonAddr.m_ptr);
      return 0;
    }
LABEL_49:
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
      ((void (__fastcall *)(bdDTLSAssociation *, __int64))value.m_ptr->~bdReferencable)(value.m_ptr, 1i64);
    goto LABEL_51;
  }
  v12 = addrHandle.m_ptr->__vftable[2].~bdReferencable;
  if ( v12 )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)v12 + 2, 1u);
    m_ptr = value.m_ptr;
  }
  v13 = newCommonAddr.m_ptr->__vftable;
  if ( v12 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v12 + 2, 0xFFFFFFFF) == 1 )
      (**(void (__fastcall ***)(void (__fastcall *)(bdReferencable *), __int64))v12)(v12, 1i64);
    m_ptr = value.m_ptr;
  }
  if ( (char *)v12 == (char *)v13 )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/bdSocketRouter", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouter.cpp", "bdSocketRouter::updateAddrHandle", 0x32Eu, "The new common addr is on the same relay as the old one.");
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
      ((void (__fastcall *)(bdDTLSAssociation *, __int64))value.m_ptr->~bdReferencable)(value.m_ptr, 1i64);
    goto LABEL_27;
  }
  p_m_migratingDtlsMutex = &this->m_migratingDtlsMutex;
  v19 = &this->m_migratingDtlsMutex;
  bdSharedMutex::lock(&this->m_migratingDtlsMutex);
  if ( !bdHashMap<bdReference<bdCommonAddr>,bdReference<bdDTLSAssociation>,bdHashingClass>::put(&this->m_migratingDtlsMap, (const bdReference<bdCommonAddr> *)newCommonAddr.m_ptr, &value) )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdSocket/bdSocketRouter", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouter.cpp", "bdSocketRouter::updateAddrHandle", 0x328u, "There was an error inserting the dtls association to the migration map.");
    bdSharedMutex::unlock(&this->m_migratingDtlsMutex);
    goto LABEL_49;
  }
  v15 = &this->bdRelayAssociationListener;
  if ( !this )
    v15 = NULL;
  v16 = (bdCommonAddr *)newCommonAddr.m_ptr->__vftable;
  remote.m_ptr = v16;
  if ( v16 )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)&v16->m_refCount, 1u);
    m_ptr = value.m_ptr;
    p_m_migratingDtlsMutex = v19;
  }
  v17 = bdRoutingLayer::connect(&this->m_routingLayer, (const bdReference<bdCommonAddr>)&remote, v15);
  bdSharedMutex::unlock(p_m_migratingDtlsMutex);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
    ((void (__fastcall *)(bdDTLSAssociation *, __int64))value.m_ptr->~bdReferencable)(value.m_ptr, 1i64);
  bdReference<bdAddrHandle>::~bdReference<bdAddrHandle>((bdReference<bdAddrHandle> *)addrHandle.m_ptr);
  bdReference<bdCommonAddr>::~bdReference<bdCommonAddr>((bdReference<bdCommonAddr> *)newCommonAddr.m_ptr);
  return v17;
}

/*
==============
bdSocketRouter::updateDtls
==============
*/
void bdSocketRouter::updateDtls(bdSocketRouter *this, const bdEndpoint *oldEndpoint, const bdReference<bdDTLSAssociation> *dtls)
{
  bdAddrHandle *m_ptr; 
  bdCommonAddr *v7; 
  bdCommonAddr *v8; 
  bdCommonAddr *v9; 
  bdReference<bdAddrHandle> result; 
  bdReference<bdCommonAddr> addr; 
  bdReference<bdCommonAddr> v12; 
  bdReference<bdCommonAddr> v13; 
  char buffer[32]; 
  char v15[1024]; 
  char buf[1024]; 
  char v17[1024]; 

  m_ptr = bdDTLSAssociation::getAddrHandle(dtls->m_ptr, &result)->m_ptr;
  if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
  {
    if ( result.m_ptr )
      ((void (__fastcall *)(bdAddrHandle *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
    result.m_ptr = NULL;
  }
  v7 = oldEndpoint->m_ca.m_ptr;
  addr.m_ptr = v7;
  if ( v7 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v7->m_refCount, 1u);
  bdCommonAddrInfo::getInfo((const bdReference<bdCommonAddr>)&addr, buf, 0x400u);
  v8 = m_ptr->m_endpoint.m_ca.m_ptr;
  v12.m_ptr = v8;
  if ( v8 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v8->m_refCount, 1u);
  bdCommonAddrInfo::getInfo((const bdReference<bdCommonAddr>)&v12, v15, 0x400u);
  bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/bdSocketRouter", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouter.cpp", "bdSocketRouter::updateDtls", 0x85Fu, "DTLS Association has changed its endpoint. Remote common addr has changed (old public address %s, new %s).", buf, v15);
  if ( !bdHashMap<bdEndpoint,bdReference<bdDTLSAssociation>,bdEndpointHashingClass>::remove(&this->m_endpointToDtlsMap, oldEndpoint) )
    bdHandleAssert(0, "removed", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouter.cpp", "bdSocketRouter::updateDtls", 0x868u, "Failed to remove DTLS with a known existant key.");
  if ( !bdHashMap<bdEndpoint,bdReference<bdDTLSAssociation>,bdEndpointHashingClass>::put(&this->m_endpointToDtlsMap, &m_ptr->m_endpoint, dtls) )
  {
    v9 = m_ptr->m_endpoint.m_ca.m_ptr;
    v13.m_ptr = v9;
    if ( v9 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v9->m_refCount, 1u);
    bdCommonAddrInfo::getInfo((const bdReference<bdCommonAddr>)&v13, v17, 0x400u);
    bdSecurityInfo::toString(&m_ptr->m_endpoint.m_secID, buffer, 0x12u);
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdSocket/bdSocketRouter", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouter.cpp", "bdSocketRouter::updateDtls", 0x874u, "Failed to move DTLS with secID %s.", buffer);
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdSocket/bdSocketRouter", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouter.cpp", "bdSocketRouter::updateDtls", 0x875u, "addrString %s", v17);
  }
}

/*
==============
bdSocketRouter::updateLocalCommonAddr
==============
*/
_BOOL8 bdSocketRouter::updateLocalCommonAddr(bdSocketRouter *this, const bdReference<bdCommonAddr> newLocalCommonAddr)
{
  bool updated; 
  bdReference<bdCommonAddr> *p_m_localCommonAddr; 
  bdCommonAddr *v6; 
  bdReference<bdCommonAddr> newLocalCommonAddra; 
  bdCommonAddr *m_ptr; 

  m_ptr = newLocalCommonAddr.m_ptr;
  updated = 0;
  if ( this->m_status == BD_SOCKET_ROUTER_INITIALIZED )
  {
    p_m_localCommonAddr = &this->m_localCommonAddr;
    if ( p_m_localCommonAddr->m_ptr )
    {
      bdReference<bdCommonAddr>::operator=(p_m_localCommonAddr, (const bdReference<bdCommonAddr> *)newLocalCommonAddr.m_ptr);
      v6 = (bdCommonAddr *)newLocalCommonAddr.m_ptr->__vftable;
      newLocalCommonAddra.m_ptr = v6;
      if ( v6 )
        _InterlockedExchangeAdd((volatile signed __int32 *)&v6->m_refCount, 1u);
      updated = bdNATTravClient::updateLocalCommonAddr(&this->m_natTrav, (const bdReference<bdCommonAddr>)&newLocalCommonAddra);
    }
    else
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdSocket/bdSocketRouter", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouter.cpp", "bdSocketRouter::updateLocalCommonAddr", 0x7A0u, "Null common addr cannot be used to setup socket router");
    }
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/bdSocketRouter", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouter.cpp", "bdSocketRouter::updateLocalCommonAddr", 0x7B2u, "Updating local common addr has no effect unless class is initialized");
  }
  if ( newLocalCommonAddr.m_ptr->__vftable && !_InterlockedDecrement((volatile signed __int32 *)&newLocalCommonAddr.m_ptr->__vftable[1]) )
  {
    if ( newLocalCommonAddr.m_ptr->__vftable )
      (*(void (__fastcall **)(bdCommonAddr_vtbl *, __int64))newLocalCommonAddr.m_ptr->~bdReferencable)(newLocalCommonAddr.m_ptr->__vftable, 1i64);
    newLocalCommonAddr.m_ptr->__vftable = NULL;
  }
  return updated;
}

/*
==============
bdSocketRouter::updateVtagToDtlsMap
==============
*/
_BOOL8 bdSocketRouter::updateVtagToDtlsMap(bdSocketRouter *this, unsigned __int16 oldTag, bdReference<bdDTLSAssociation> value)
{
  bdSharedMutex *p_m_vtagToDTLSMutex; 
  bdHashMap<unsigned short,bdLinkedList<bdReference<bdDTLSAssociation> > *,bdHashingClass>::Node *v7; 
  bdLinkedList<bdReference<bdDTLSAssociation> > *m_data; 
  bdLinkedList<bdReference<bdDTLSAssociation> >::Node *m_head; 
  bdLinkedList<bdReference<bdDTLSAssociation> >::Node *v10; 
  bdDTLSAssociation *v11; 
  bool v12; 
  void *position[7]; 
  bdSharedMutex *v15; 
  unsigned __int8 v16; 
  bdReference<bdDTLSAssociation> valuea; 

  v16 = HIBYTE(oldTag);
  position[1] = (void *)-2i64;
  p_m_vtagToDTLSMutex = &this->m_vtagToDTLSMutex;
  v15 = &this->m_vtagToDTLSMutex;
  bdSharedMutex::lock(&this->m_vtagToDTLSMutex);
  if ( this->m_vtagToDtlsMap.m_size )
  {
    v7 = this->m_vtagToDtlsMap.m_map[(this->m_vtagToDtlsMap.m_capacity - 1) & (v16 ^ (16777619 * (unsigned __int8)oldTag))];
    if ( v7 )
    {
      while ( oldTag != v7->m_key )
      {
        v7 = v7->m_next;
        if ( !v7 )
          goto LABEL_15;
      }
      _InterlockedExchangeAdd((volatile signed __int32 *)&this->m_vtagToDtlsMap.m_numIterators, 1u);
      m_data = v7->m_data;
      bdHandleAssert(this->m_vtagToDtlsMap.m_numIterators.m_value._My_val != 0, "m_numIterators != 0", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdhashmap.inl", "bdHashMap<unsigned short,class bdLinkedList<class bdReference<class bdDTLSAssociation> > *,class bdHashingClass>::releaseIterator", 0x18Au, "bdHashMap::releaseIterator Iterator count reached 0, can't release iterator");
      _InterlockedExchangeAdd((volatile signed __int32 *)&this->m_vtagToDtlsMap.m_numIterators, 0xFFFFFFFF);
      m_head = m_data->m_head;
      v10 = NULL;
      if ( m_data->m_head )
      {
        while ( m_head->m_data.m_ptr != (bdDTLSAssociation *)value.m_ptr->__vftable )
        {
          m_head = m_head->m_next;
          if ( !m_head )
            goto LABEL_11;
        }
        v10 = m_head;
      }
LABEL_11:
      position[0] = v10;
      if ( v10 )
        bdLinkedList<bdReference<bdDTLSAssociation>>::removeAt(m_data, position);
      else
        bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/bdSocketRouter", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsocketrouter.cpp", "bdSocketRouter::updateVtagToDtlsMap", 0x8B9u, "Could not find DTLSAssociation in the tag list when updating mappings.");
      p_m_vtagToDTLSMutex = v15;
    }
  }
LABEL_15:
  bdSharedMutex::unlock(p_m_vtagToDTLSMutex);
  v11 = (bdDTLSAssociation *)value.m_ptr->__vftable;
  valuea.m_ptr = v11;
  if ( v11 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v11->m_refCount, 1u);
  v12 = bdSocketRouter::addToVtagToDtlsMap(this, (bdReference<bdDTLSAssociation>)&valuea);
  if ( value.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&value.m_ptr->sendTo, 0xFFFFFFFF) == 1 )
  {
    if ( value.m_ptr->__vftable )
      (*(void (__fastcall **)(bdDTLSAssociation_vtbl *, __int64))value.m_ptr->~bdReferencable)(value.m_ptr->__vftable, 1i64);
    value.m_ptr->__vftable = NULL;
  }
  return v12;
}

