/*
==============
bdRelayAssociation::reset
==============
*/

void __fastcall bdRelayAssociation::reset(bdRelayAssociation *this)
{
  ?reset@bdRelayAssociation@@IEAAXXZ(this);
}

/*
==============
bdRelayAssociation::getStatus
==============
*/

bdRelayAssociationStatus __fastcall bdRelayAssociation::getStatus(bdRelayAssociation *this)
{
  return ?getStatus@bdRelayAssociation@@QEBA?AW4bdRelayAssociationStatus@@XZ(this);
}

/*
==============
bdRelayAssociation::sendKeepAlive
==============
*/

void __fastcall bdRelayAssociation::sendKeepAlive(bdRelayAssociation *this)
{
  ?sendKeepAlive@bdRelayAssociation@@IEAAXXZ(this);
}

/*
==============
bdRelayAssociation::pump
==============
*/

void __fastcall bdRelayAssociation::pump(bdRelayAssociation *this)
{
  ?pump@bdRelayAssociation@@QEAAXXZ(this);
}

/*
==============
bdRelayAssociation::setRemoteJoinData
==============
*/

void __fastcall bdRelayAssociation::setRemoteJoinData(bdRelayAssociation *this, const bdRelayJoinData *joinData)
{
  ?setRemoteJoinData@bdRelayAssociation@@QEAAXAEBVbdRelayJoinData@@@Z(this, joinData);
}

/*
==============
bdRelayAssociation::sendUpgradeRequest
==============
*/

void __fastcall bdRelayAssociation::sendUpgradeRequest(bdRelayAssociation *this)
{
  ?sendUpgradeRequest@bdRelayAssociation@@IEAAXXZ(this);
}

/*
==============
bdRelayAssociation::getRelayID
==============
*/

unsigned __int64 __fastcall bdRelayAssociation::getRelayID(bdRelayAssociation *this)
{
  return ?getRelayID@bdRelayAssociation@@QEBA_KXZ(this);
}

/*
==============
bdRelayAssociation::notifyWhenComplete
==============
*/

bool __fastcall bdRelayAssociation::notifyWhenComplete(bdRelayAssociation *this, const bdReference<bdCommonAddr> remote)
{
  return ?notifyWhenComplete@bdRelayAssociation@@QEAA_NV?$bdReference@VbdCommonAddr@@@@@Z(this, remote);
}

/*
==============
bdRelayAssociation::sendVerify
==============
*/

void __fastcall bdRelayAssociation::sendVerify(bdRelayAssociation *this)
{
  ?sendVerify@bdRelayAssociation@@IEAAXXZ(this);
}

/*
==============
bdRelayAssociation::getLastError
==============
*/

bdRelayAssociationError __fastcall bdRelayAssociation::getLastError(bdRelayAssociation *this)
{
  return ?getLastError@bdRelayAssociation@@QEBA?AW4bdRelayAssociationError@@XZ(this);
}

/*
==============
bdRelayAssociation::processPacket
==============
*/

int __fastcall bdRelayAssociation::processPacket(bdRelayAssociation *this, bdAddr *realAddr, void *data, const unsigned int dataLength)
{
  return ?processPacket@bdRelayAssociation@@QEAAHAEAVbdAddr@@PEAXI@Z(this, realAddr, data, dataLength);
}

/*
==============
bdRelayAssociation::handleData
==============
*/

int __fastcall bdRelayAssociation::handleData(bdRelayAssociation *this, bdAddr *realAddr, void *data, const unsigned int dataLength)
{
  return ?handleData@bdRelayAssociation@@IEAAHAEAVbdAddr@@PEAXI@Z(this, realAddr, data, dataLength);
}

/*
==============
bdRelayAssociation::start
==============
*/

bool __fastcall bdRelayAssociation::start(bdRelayAssociation *this)
{
  return ?start@bdRelayAssociation@@QEAA_NXZ(this);
}

/*
==============
bdRelayAssociation::getType
==============
*/

bdRelayAssociationType __fastcall bdRelayAssociation::getType(bdRelayAssociation *this)
{
  return ?getType@bdRelayAssociation@@QEBA?AW4bdRelayAssociationType@@XZ(this);
}

/*
==============
bdRelayAssociation::handleInitAck
==============
*/

void __fastcall bdRelayAssociation::handleInitAck(bdRelayAssociation *this, const void *data, const unsigned int dataLength)
{
  ?handleInitAck@bdRelayAssociation@@IEAAXPEBXI@Z(this, data, dataLength);
}

/*
==============
bdRelayAssociation::upgradeToBind
==============
*/

bool __fastcall bdRelayAssociation::upgradeToBind(bdRelayAssociation *this, const bdRelayAuthToken *authToken)
{
  return ?upgradeToBind@bdRelayAssociation@@QEAA_NAEBVbdRelayAuthToken@@@Z(this, authToken);
}

/*
==============
bdRelayAssociation::prepareData
==============
*/

int __fastcall bdRelayAssociation::prepareData(bdRelayAssociation *this, const bdRelayRoute *relayRoute, const void *data, const unsigned int length, void *outData, const unsigned int outDataLength)
{
  return ?prepareData@bdRelayAssociation@@QEAAHAEBVbdRelayRoute@@PEBXIPEAXI@Z(this, relayRoute, data, length, outData, outDataLength);
}

/*
==============
bdRelayAssociation::handleEstablished
==============
*/

void __fastcall bdRelayAssociation::handleEstablished(bdRelayAssociation *this, const void *data, const unsigned int dataLength)
{
  ?handleEstablished@bdRelayAssociation@@IEAAXPEBXI@Z(this, data, dataLength);
}

/*
==============
bdRelayAssociation::handleDisconnectAck
==============
*/

void __fastcall bdRelayAssociation::handleDisconnectAck(bdRelayAssociation *this, const void *data, const unsigned int dataLength)
{
  ?handleDisconnectAck@bdRelayAssociation@@IEAAXPEBXI@Z(this, data, dataLength);
}

/*
==============
bdRelayAssociation::bdRelayAssociation
==============
*/

void __fastcall bdRelayAssociation::bdRelayAssociation(bdRelayAssociation *this, bdSocket *socket, const bdRelayJoinData *joinData, const bdClientAuthToken *clientToken, const unsigned int titleID, const unsigned __int64 userID, bdRelayAssociationListener *listener)
{
  ??0bdRelayAssociation@@QEAA@PEAVbdSocket@@AEBVbdRelayJoinData@@AEBVbdClientAuthToken@@I_KPEAVbdRelayAssociationListener@@@Z(this, socket, joinData, clientToken, titleID, userID, listener);
}

/*
==============
bdRelayAssociation::handleMigrate
==============
*/

void __fastcall bdRelayAssociation::handleMigrate(bdRelayAssociation *this, const void *data, const unsigned int dataLength)
{
  ?handleMigrate@bdRelayAssociation@@IEAAXPEBXI@Z(this, data, dataLength);
}

/*
==============
bdRelayAssociation::handleRelayPing
==============
*/

void __fastcall bdRelayAssociation::handleRelayPing(bdRelayAssociation *this, void *data, const unsigned int dataLength)
{
  ?handleRelayPing@bdRelayAssociation@@IEAAXPEAXI@Z(this, data, dataLength);
}

/*
==============
bdRelayAssociation::disconnect
==============
*/

bool __fastcall bdRelayAssociation::disconnect(bdRelayAssociation *this)
{
  return ?disconnect@bdRelayAssociation@@QEAA_NXZ(this);
}

/*
==============
bdRelayAssociation::sendInitBind
==============
*/

void __fastcall bdRelayAssociation::sendInitBind(bdRelayAssociation *this)
{
  ?sendInitBind@bdRelayAssociation@@IEAAXXZ(this);
}

/*
==============
bdRelayAssociation::bdRelayAssociation
==============
*/

void __fastcall bdRelayAssociation::bdRelayAssociation(bdRelayAssociation *this, bdSocket *socket, const bdRelayAuthToken *relayToken, const bdClientAuthToken *clientToken, const unsigned int titleID, const unsigned __int64 userID, bdRelayAssociationListener *listener)
{
  ??0bdRelayAssociation@@QEAA@PEAVbdSocket@@AEBVbdRelayAuthToken@@AEBVbdClientAuthToken@@I_KPEAVbdRelayAssociationListener@@@Z(this, socket, relayToken, clientToken, titleID, userID, listener);
}

/*
==============
bdRelayAssociation::getRelayAddr
==============
*/

const bdAddr *__fastcall bdRelayAssociation::getRelayAddr(bdRelayAssociation *this)
{
  return ?getRelayAddr@bdRelayAssociation@@QEBAAEBVbdAddr@@XZ(this);
}

/*
==============
bdRelayAssociation::sendInitJoin
==============
*/

void __fastcall bdRelayAssociation::sendInitJoin(bdRelayAssociation *this)
{
  ?sendInitJoin@bdRelayAssociation@@IEAAXXZ(this);
}

/*
==============
bdRelayAssociation::finalizeTelemetry
==============
*/

void __fastcall bdRelayAssociation::finalizeTelemetry(bdRelayAssociation *this)
{
  ?finalizeTelemetry@bdRelayAssociation@@IEAAXXZ(this);
}

/*
==============
bdRelayAssociation::sendDisconnectRequest
==============
*/

void __fastcall bdRelayAssociation::sendDisconnectRequest(bdRelayAssociation *this)
{
  ?sendDisconnectRequest@bdRelayAssociation@@IEAAXXZ(this);
}

/*
==============
bdRelayAssociation::inProgress
==============
*/

bool __fastcall bdRelayAssociation::inProgress(bdRelayAssociation *this, const bdReference<bdCommonAddr> remote)
{
  return ?inProgress@bdRelayAssociation@@QEBA_NV?$bdReference@VbdCommonAddr@@@@@Z(this, remote);
}

/*
==============
bdRelayAssociation::getLastPing
==============
*/

double __fastcall bdRelayAssociation::getLastPing(bdRelayAssociation *this)
{
  double result; 

  *(float *)&result = ?getLastPing@bdRelayAssociation@@QEBAMXZ(this);
  return result;
}

/*
==============
bdRelayAssociation::getLocalJoinData
==============
*/

const bdRelayJoinData *__fastcall bdRelayAssociation::getLocalJoinData(bdRelayAssociation *this)
{
  return ?getLocalJoinData@bdRelayAssociation@@QEBAAEBVbdRelayJoinData@@XZ(this);
}

/*
==============
bdRelayAssociation::handleBindUpgradeAck
==============
*/

void __fastcall bdRelayAssociation::handleBindUpgradeAck(bdRelayAssociation *this, const void *data, const unsigned int dataLength)
{
  ?handleBindUpgradeAck@bdRelayAssociation@@IEAAXPEBXI@Z(this, data, dataLength);
}

/*
==============
bdRelayAssociation::setListener
==============
*/

void __fastcall bdRelayAssociation::setListener(bdRelayAssociation *this, bdRelayAssociationListener *listener)
{
  ?setListener@bdRelayAssociation@@QEAAXPEAVbdRelayAssociationListener@@@Z(this, listener);
}

/*
==============
bdRelayAssociation::onFailedConnection
==============
*/

void __fastcall bdRelayAssociation::onFailedConnection(bdRelayAssociation *this)
{
  ?onFailedConnection@bdRelayAssociation@@IEAAXXZ(this);
}

/*
==============
bdRelayAssociation::sendData
==============
*/

int __fastcall bdRelayAssociation::sendData(bdRelayAssociation *this, const bdRelayRoute *relayRoute, const void *data, const unsigned int length)
{
  return ?sendData@bdRelayAssociation@@QEAAHAEBVbdRelayRoute@@PEBXI@Z(this, relayRoute, data, length);
}

/*
==============
bdRelayAssociation::~bdRelayAssociation
==============
*/

void __fastcall bdRelayAssociation::~bdRelayAssociation(bdRelayAssociation *this)
{
  ??1bdRelayAssociation@@UEAA@XZ(this);
}

/*
==============
bdRelayAssociation::bdRelayAssociation
==============
*/
void bdRelayAssociation::bdRelayAssociation(bdRelayAssociation *this, bdSocket *socket, const bdRelayAuthToken *relayToken, const bdClientAuthToken *clientToken, const unsigned int titleID, const unsigned __int64 userID, bdRelayAssociationListener *listener)
{
  const bdAddr *RelayAddr; 

  this->m_refCount.m_value._My_val = 0;
  this->__vftable = (bdRelayAssociation_vtbl *)&bdRelayAssociation::`vftable';
  this->m_clientToken.__vftable = (bdClientAuthToken_vtbl *)&bdClientAuthToken::`vftable';
  *(__m256i *)this->m_clientToken.m_encrypted = *(__m256i *)clientToken->m_encrypted;
  *(_OWORD *)&this->m_clientToken.m_encrypted[32] = *(_OWORD *)&clientToken->m_encrypted[32];
  *(double *)&this->m_clientToken.m_encrypted[48] = *(double *)&clientToken->m_encrypted[48];
  this->m_clientToken.m_version = clientToken->m_version;
  this->m_clientToken.m_expiresIn = clientToken->m_expiresIn;
  *(_OWORD *)this->m_clientToken.m_secret = *(_OWORD *)clientToken->m_secret;
  this->m_relayToken.__vftable = (bdRelayAuthToken_vtbl *)&bdRelayAuthToken::`vftable';
  *(__m256i *)this->m_relayToken.m_encrypted = *(__m256i *)relayToken->m_encrypted;
  *(_OWORD *)&this->m_relayToken.m_encrypted[32] = *(_OWORD *)&relayToken->m_encrypted[32];
  *(_DWORD *)&this->m_relayToken.m_encrypted[48] = *(_DWORD *)&relayToken->m_encrypted[48];
  this->m_relayToken.m_version = relayToken->m_version;
  bdAddr::bdAddr(&this->m_relayToken.m_relayAddr, &relayToken->m_relayAddr);
  this->m_relayToken.m_relayID = relayToken->m_relayID;
  *(_OWORD *)this->m_relayToken.m_secret = *(_OWORD *)relayToken->m_secret;
  this->m_titleID = titleID;
  this->m_userID = userID;
  bdSequenceNumber::bdSequenceNumber(&this->m_clientSeqNum, 0);
  bdSequenceNumber::bdSequenceNumber((bdSequenceNumber *)&titleID, -1);
  bdSequenceNumberStore::bdSequenceNumberStore(&this->m_incomingSeqNum, (const bdSequenceNumber *)&titleID);
  this->m_notifyList.m_data = NULL;
  *(_QWORD *)&this->m_notifyList.m_capacity = 2i64;
  this->m_notifyList.m_data = (bdReference<bdCommonAddr> *)bdMemory::allocate(0x10ui64);
  this->m_listener = listener;
  this->m_socket = socket;
  RelayAddr = bdRelayAuthToken::getRelayAddr((bdRelayAuthToken *)relayToken);
  bdAddr::bdAddr(&this->m_relayAddr, RelayAddr);
  this->m_relayID = bdRelayAuthToken::getRelayID((bdRelayAuthToken *)relayToken);
  bdRelayJoinData::bdRelayJoinData(&this->m_remoteJoinData);
  bdRelayJoinData::bdRelayJoinData(&this->m_localJoinData);
  this->m_status = BD_RELAY_ASSOC_STATUS_CLOSED;
  this->m_type = BD_ASSOC_TYPE_BINDING;
  this->m_upgradeAfterJoin = 0;
  this->m_lastError = BD_ASSOC_E_OK;
  this->m_initResends = 0;
  bdGlobalStopwatch::bdGlobalStopwatch(&this->m_initResendsTimer);
  this->m_verifyResends = 0;
  bdGlobalStopwatch::bdGlobalStopwatch(&this->m_verifyResendsTimer);
  this->m_upgradeResends = 0;
  bdGlobalStopwatch::bdGlobalStopwatch(&this->m_upgradeResendsTimer);
  this->m_disconnectResends = 0;
  bdGlobalStopwatch::bdGlobalStopwatch(&this->m_disconnectResendsTimer);
  bdGlobalStopwatch::bdGlobalStopwatch(&this->m_keepAliveTimer);
  bdGlobalStopwatch::bdGlobalStopwatch(&this->m_lastValidPacketTimer);
  bdGlobalStopwatch::bdGlobalStopwatch(&this->m_lastReceivedPacketTimer);
  bdGlobalStopwatch::bdGlobalStopwatch(&this->m_telemetryTimer);
  bdRelayAssociationTelemetry::bdRelayAssociationTelemetry(&this->m_telemetry, 1u, this->m_relayID, &this->m_relayAddr);
  bdMutex::bdMutex(&this->m_mutex);
  this->m_lastPing = 0.0;
}

/*
==============
bdRelayAssociation::bdRelayAssociation
==============
*/
void bdRelayAssociation::bdRelayAssociation(bdRelayAssociation *this, bdSocket *socket, const bdRelayJoinData *joinData, const bdClientAuthToken *clientToken, const unsigned int titleID, const unsigned __int64 userID, bdRelayAssociationListener *listener)
{
  const bdAddr *RelayAddr; 

  this->m_refCount.m_value._My_val = 0;
  this->__vftable = (bdRelayAssociation_vtbl *)&bdRelayAssociation::`vftable';
  this->m_clientToken.__vftable = (bdClientAuthToken_vtbl *)&bdClientAuthToken::`vftable';
  *(__m256i *)this->m_clientToken.m_encrypted = *(__m256i *)clientToken->m_encrypted;
  *(_OWORD *)&this->m_clientToken.m_encrypted[32] = *(_OWORD *)&clientToken->m_encrypted[32];
  *(double *)&this->m_clientToken.m_encrypted[48] = *(double *)&clientToken->m_encrypted[48];
  this->m_clientToken.m_version = clientToken->m_version;
  this->m_clientToken.m_expiresIn = clientToken->m_expiresIn;
  *(_OWORD *)this->m_clientToken.m_secret = *(_OWORD *)clientToken->m_secret;
  bdRelayAuthToken::bdRelayAuthToken(&this->m_relayToken);
  this->m_titleID = titleID;
  this->m_userID = userID;
  bdSequenceNumber::bdSequenceNumber(&this->m_clientSeqNum, 0);
  bdSequenceNumber::bdSequenceNumber((bdSequenceNumber *)&titleID, -1);
  bdSequenceNumberStore::bdSequenceNumberStore(&this->m_incomingSeqNum, (const bdSequenceNumber *)&titleID);
  this->m_notifyList.m_data = NULL;
  *(_QWORD *)&this->m_notifyList.m_capacity = 2i64;
  this->m_notifyList.m_data = (bdReference<bdCommonAddr> *)bdMemory::allocate(0x10ui64);
  this->m_listener = listener;
  this->m_socket = socket;
  RelayAddr = bdRelayJoinData::getRelayAddr((bdRelayJoinData *)joinData);
  bdAddr::bdAddr(&this->m_relayAddr, RelayAddr);
  this->m_relayID = bdRelayJoinData::getRelayID((bdRelayJoinData *)joinData);
  *(__m256i *)this->m_remoteJoinData.m_encrypted = *(__m256i *)joinData->m_encrypted;
  *(__m256i *)&this->m_remoteJoinData.m_encrypted[32] = *(__m256i *)&joinData->m_encrypted[32];
  *(_OWORD *)&this->m_remoteJoinData.m_encrypted[64] = *(_OWORD *)&joinData->m_encrypted[64];
  *(_DWORD *)&this->m_remoteJoinData.m_encrypted[80] = *(_DWORD *)&joinData->m_encrypted[80];
  *(_WORD *)&this->m_remoteJoinData.m_encrypted[84] = *(_WORD *)&joinData->m_encrypted[84];
  this->m_remoteJoinData.m_version = joinData->m_version;
  *(_OWORD *)this->m_remoteJoinData.m_secret = *(_OWORD *)joinData->m_secret;
  this->m_remoteJoinData.m_relayID = joinData->m_relayID;
  this->m_remoteJoinData.m_routingID = joinData->m_routingID;
  this->m_remoteJoinData.m_joinID = joinData->m_joinID;
  bdAddr::bdAddr(&this->m_remoteJoinData.m_relayAddr, &joinData->m_relayAddr);
  *(_OWORD *)this->m_remoteJoinData.m_verification = *(_OWORD *)joinData->m_verification;
  bdRelayJoinData::bdRelayJoinData(&this->m_localJoinData);
  this->m_status = BD_RELAY_ASSOC_STATUS_CLOSED;
  this->m_type = BD_ASSOC_TYPE_JOINING;
  this->m_upgradeAfterJoin = 0;
  this->m_lastError = BD_ASSOC_E_OK;
  this->m_initResends = 0;
  bdGlobalStopwatch::bdGlobalStopwatch(&this->m_initResendsTimer);
  this->m_verifyResends = 0;
  bdGlobalStopwatch::bdGlobalStopwatch(&this->m_verifyResendsTimer);
  this->m_upgradeResends = 0;
  bdGlobalStopwatch::bdGlobalStopwatch(&this->m_upgradeResendsTimer);
  this->m_disconnectResends = 0;
  bdGlobalStopwatch::bdGlobalStopwatch(&this->m_disconnectResendsTimer);
  bdGlobalStopwatch::bdGlobalStopwatch(&this->m_keepAliveTimer);
  bdGlobalStopwatch::bdGlobalStopwatch(&this->m_lastValidPacketTimer);
  bdGlobalStopwatch::bdGlobalStopwatch(&this->m_lastReceivedPacketTimer);
  bdGlobalStopwatch::bdGlobalStopwatch(&this->m_telemetryTimer);
  bdRelayAssociationTelemetry::bdRelayAssociationTelemetry(&this->m_telemetry, 2u, this->m_relayID, &this->m_relayAddr);
  bdMutex::bdMutex(&this->m_mutex);
  this->m_lastPing = 0.0;
}

/*
==============
bdRelayAssociation::~bdRelayAssociation
==============
*/
void bdRelayAssociation::~bdRelayAssociation(bdRelayAssociation *this)
{
  this->__vftable = (bdRelayAssociation_vtbl *)&bdRelayAssociation::`vftable';
  if ( this->m_status )
    bdRelayAssociation::finalizeTelemetry(this);
  bdMutex::~bdMutex(&this->m_mutex);
  bdMemory::deallocate(this->m_notifyList.m_data);
  this->m_notifyList.m_data = NULL;
  *(_QWORD *)&this->m_notifyList.m_capacity = 0i64;
  bdRelayAuthToken::~bdRelayAuthToken(&this->m_relayToken);
  bdClientAuthToken::~bdClientAuthToken(&this->m_clientToken);
  bdReferencable::~bdReferencable(this);
}

/*
==============
bdRelayAssociation::disconnect
==============
*/
__int64 bdRelayAssociation::disconnect(bdRelayAssociation *this)
{
  bdMutex *p_m_mutex; 
  unsigned __int8 v3; 
  bdRelayAssociationStatus Status; 
  unsigned int RoutingID; 

  p_m_mutex = &this->m_mutex;
  bdMutex::lock(&this->m_mutex);
  v3 = 1;
  Status = bdRelayAssociation::getStatus(this);
  if ( Status == BD_RELAY_STATUS_CONNECTED )
  {
    bdRelayAssociation::sendDisconnectRequest(this);
  }
  else if ( Status == BD_RELAY_STATUS_CONNECTING )
  {
    this->m_status = BD_RELAY_ASSOC_STATUS_CLOSED;
    bdRelayAssociation::reset(this);
  }
  else
  {
    RoutingID = bdRelayJoinData::getRoutingID(&this->m_localJoinData);
    bdLogMessage(BD_LOG_INFO, "info/", "client-association", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdrelayassociation.cpp", "bdRelayAssociation::disconnect", 0xB5u, "Disconnect call failed, the association [%llu:%u] is not open.", this->m_relayID, RoutingID);
    v3 = 0;
  }
  bdMutex::unlock(p_m_mutex);
  return v3;
}

/*
==============
bdRelayAssociation::finalizeTelemetry
==============
*/
void bdRelayAssociation::finalizeTelemetry(bdRelayAssociation *this)
{
  bdSequenceNumber *LastSequenceNumber; 
  int Value; 
  int v4; 

  bdRelayAssociationTelemetry::setLifetime(&this->m_telemetry);
  bdRelayAssociationTelemetry::setInitResends(&this->m_telemetry, this->m_initResends);
  bdRelayAssociationTelemetry::setVerifyResends(&this->m_telemetry, this->m_verifyResends);
  bdRelayAssociationTelemetry::setUpgradeResends(&this->m_telemetry, this->m_upgradeResends);
  bdRelayAssociationTelemetry::setDisconnectResends(&this->m_telemetry, this->m_disconnectResends);
  LastSequenceNumber = (bdSequenceNumber *)bdSequenceNumberStore::getLastSequenceNumber(&this->m_incomingSeqNum);
  Value = bdSequenceNumber::getValue(LastSequenceNumber);
  bdRelayAssociationTelemetry::setRecvSeqNum(&this->m_telemetry, Value);
  v4 = bdSequenceNumber::getValue(&this->m_clientSeqNum);
  bdRelayAssociationTelemetry::setSendSeqNum(&this->m_telemetry, v4);
  bdRelayAssociationTelemetry::setLastError(&this->m_telemetry, (const bdRelayAssociationError)this->m_lastError);
  bdTelemetry::addRelayAssociation(&this->m_telemetry);
  bdGlobalStopwatch::start(&this->m_telemetryTimer);
}

/*
==============
bdRelayAssociation::getLastError
==============
*/
__int64 bdRelayAssociation::getLastError(bdRelayAssociation *this)
{
  return (unsigned int)this->m_lastError;
}

/*
==============
bdRelayAssociation::getLastPing
==============
*/
float bdRelayAssociation::getLastPing(bdRelayAssociation *this)
{
  return this->m_lastPing;
}

/*
==============
bdRelayAssociation::getLocalJoinData
==============
*/
bdRelayJoinData *bdRelayAssociation::getLocalJoinData(bdRelayAssociation *this)
{
  return &this->m_localJoinData;
}

/*
==============
bdRelayAssociation::getRelayAddr
==============
*/
bdAddr *bdRelayAssociation::getRelayAddr(bdRelayAssociation *this)
{
  return &this->m_relayAddr;
}

/*
==============
bdRelayAssociation::getRelayID
==============
*/
unsigned __int64 bdRelayAssociation::getRelayID(bdRelayAssociation *this)
{
  return this->m_relayID;
}

/*
==============
bdRelayAssociation::getStatus
==============
*/
__int64 bdRelayAssociation::getStatus(bdRelayAssociation *this)
{
  __int64 result; 
  unsigned int RoutingID; 
  bdRelayAssociation::bdRelayAssociationInternalStatus m_status; 

  switch ( this->m_status )
  {
    case BD_RELAY_ASSOC_STATUS_CLOSED:
    case BD_RELAY_ASSOC_STATUS_WAITING_DISCONNECT:
      goto $LN4_258;
    case BD_RELAY_ASSOC_STATUS_WAITING_INIT_ACK:
    case BD_RELAY_ASSOC_STATUS_WAITING_ESTABLISHED:
      result = 1i64;
      break;
    case BD_RELAY_ASSOC_STATUS_OPEN:
    case BD_RELAY_ASSOC_STATUS_WAITING_UPGRADE:
      result = 2i64;
      break;
    default:
      m_status = this->m_status;
      RoutingID = bdRelayJoinData::getRoutingID(&this->m_localJoinData);
      bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdrelayassociation.cpp", "bdRelayAssociation::getStatus", 0x34Bu, "Association [%llu:%u]: unhandled status [%u].", this->m_relayID, RoutingID, m_status);
$LN4_258:
      result = 0i64;
      break;
  }
  return result;
}

/*
==============
bdRelayAssociation::getType
==============
*/
__int64 bdRelayAssociation::getType(bdRelayAssociation *this)
{
  return (unsigned int)this->m_type;
}

/*
==============
bdRelayAssociation::handleBindUpgradeAck
==============
*/
void bdRelayAssociation::handleBindUpgradeAck(bdRelayAssociation *this, const void *data, const unsigned int dataLength)
{
  unsigned __int64 JoinID; 
  bdRelayAssociationListener *m_listener; 
  unsigned int RoutingID; 
  __int64 v9; 
  bdRelayBindUpgradeAck v10; 
  unsigned int offset; 

  RoutingID = bdRelayJoinData::getRoutingID(&this->m_localJoinData);
  bdLogMessage(BD_LOG_INFO, "info/", "client-association", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdrelayassociation.cpp", "bdRelayAssociation::handleBindUpgradeAck", 0x24Du, "Association [%llu:%u] got BIND_UPGRADE_ACK message from relay.", this->m_relayID, RoutingID);
  if ( this->m_status == BD_RELAY_ASSOC_STATUS_WAITING_UPGRADE )
  {
    offset = 0;
    bdRelayBindUpgradeAck::bdRelayBindUpgradeAck(&v10, 0, 0, 0i64);
    if ( bdRelayBindUpgradeAck::deserialize(&v10, data, dataLength, offset, &offset) && bdRelayBasePacket::verifySeqNum(&v10, &this->m_incomingSeqNum) && bdRelayBasePacket::verifyHmac(&v10, data, dataLength, offset, this->m_serverToClientHmacSecret) )
    {
      JoinID = bdRelayBindUpgradeAck::getJoinID(&v10);
      bdRelayJoinData::setJoinID(&this->m_localJoinData, JoinID);
      this->m_type = BD_ASSOC_TYPE_BINDING;
      this->m_status = BD_RELAY_ASSOC_STATUS_OPEN;
      LODWORD(v9) = bdRelayJoinData::getRoutingID(&this->m_localJoinData);
      bdLogMessage(BD_LOG_INFO, "info/", "client-association", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdrelayassociation.cpp", "bdRelayAssociation::handleBindUpgradeAck", 0x262u, "Association [%llu:%u] has been upgraded to BIND.", this->m_relayID, v9);
      m_listener = this->m_listener;
      if ( m_listener )
        m_listener->onRelayUpgradeSuccess(m_listener, this);
      bdGlobalStopwatch::start(&this->m_lastValidPacketTimer);
    }
    else
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "client-association", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdrelayassociation.cpp", "bdRelayAssociation::handleBindUpgradeAck", 0x26Bu, "Failed to deserialize BIND_UPGRADE_ACK.");
    }
    bdRelayBasePacket::~bdRelayBasePacket(&v10);
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "client-association", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdrelayassociation.cpp", "bdRelayAssociation::handleBindUpgradeAck", 0x251u, "Association was not waiting for a BIND_UPGRADE_ACK message, ignoring.");
  }
}

/*
==============
bdRelayAssociation::handleData
==============
*/
__int64 bdRelayAssociation::handleData(bdRelayAssociation *this, bdAddr *realAddr, void *data, const unsigned int dataLength)
{
  unsigned int v8; 
  bool v9; 
  unsigned int RoutingID; 
  unsigned int v11; 
  const bdRelayRoute *v12; 
  unsigned int DataSize; 
  const unsigned __int8 *v14; 
  unsigned int DestinationRoutingID; 
  unsigned int v17; 
  unsigned int v18; 
  unsigned int newOffset; 
  __int64 v20; 
  bdRelayRoute v21; 
  bdRelayData v22; 

  v20 = -2i64;
  v8 = -2;
  if ( bdRelayAssociation::getStatus(this) == BD_RELAY_STATUS_CONNECTED )
  {
    bdRelayData::bdRelayData(&v22, 0, 0, 0, NULL, 0);
    newOffset = 0;
    v9 = bdRelayData::deserialize(&v22, data, dataLength, 0, &newOffset);
    RoutingID = bdRelayJoinData::getRoutingID(&this->m_localJoinData);
    if ( bdRelayData::getDestinationRoutingID(&v22) == RoutingID )
    {
      if ( v9 && bdRelayBasePacket::verifySeqNum(&v22, &this->m_incomingSeqNum) && bdRelayBasePacket::verifyHmac(&v22, data, dataLength, newOffset, this->m_serverToClientHmacSecret) )
      {
        v11 = bdRelayBasePacket::getRoutingID(&v22);
        bdRelayRoute::bdRelayRoute(&v21, this->m_relayID, v11);
        bdAddr::setRelayRoute(realAddr, v12);
        DataSize = bdRelayData::getDataSize(&v22);
        v14 = bdRelayData::getData(&v22);
        memmove_0(data, v14, DataSize);
        v8 = bdRelayData::getDataSize(&v22);
        bdGlobalStopwatch::start(&this->m_lastValidPacketTimer);
        bdGlobalStopwatch::start(&this->m_lastReceivedPacketTimer);
        bdRelayAssociationTelemetry::addReceivedData(&this->m_telemetry, dataLength);
      }
      else
      {
        v17 = bdRelayJoinData::getRoutingID(&this->m_localJoinData);
        bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "client-association", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdrelayassociation.cpp", "bdRelayAssociation::handleData", 0x2D0u, "Association [%llu:%u] failed to deserialize DATA packet from relay.", this->m_relayID, v17);
      }
    }
    else
    {
      v18 = bdRelayJoinData::getRoutingID(&this->m_localJoinData);
      DestinationRoutingID = bdRelayData::getDestinationRoutingID(&v22);
      bdLogMessage(BD_LOG_WARNING, "warn/", "client-association", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdrelayassociation.cpp", "bdRelayAssociation::handleData", 0x2BEu, "Association [%llu] received packet not bound to this association (dest [%u] our [%u]). Ignoring.", this->m_relayID, DestinationRoutingID, v18);
    }
    bdRelayBasePacket::~bdRelayBasePacket(&v22);
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "client-association", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdrelayassociation.cpp", "bdRelayAssociation::handleData", 0x2B3u, "Association [%llu] is not connected. Ignoring DATA message.", this->m_relayID);
  }
  return v8;
}

/*
==============
bdRelayAssociation::handleDisconnectAck
==============
*/
void bdRelayAssociation::handleDisconnectAck(bdRelayAssociation *this, const void *data, const unsigned int dataLength)
{
  unsigned int RoutingID; 
  bdRelayBasePacket v7; 
  unsigned int offset; 

  RoutingID = bdRelayJoinData::getRoutingID(&this->m_localJoinData);
  bdLogMessage(BD_LOG_INFO, "info/", "client-association", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdrelayassociation.cpp", "bdRelayAssociation::handleDisconnectAck", 0x271u, "Association [%llu:%u] got DISCONNECTED message from relay.", this->m_relayID, RoutingID);
  if ( this->m_status == BD_RELAY_ASSOC_STATUS_WAITING_DISCONNECT )
  {
    offset = 0;
    bdRelayBasePacket::bdRelayBasePacket(&v7, BD_RELAY_PACKET_DISCONNECT_ACK, 0x10u);
    if ( bdRelayBasePacket::deserialize(&v7, data, dataLength, offset, &offset) && bdRelayBasePacket::verifySeqNum(&v7, &this->m_incomingSeqNum) && bdRelayBasePacket::verifyHmac(&v7, data, dataLength, offset, this->m_serverToClientHmacSecret) )
    {
      this->m_status = BD_RELAY_ASSOC_STATUS_CLOSED;
      bdRelayAssociation::reset(this);
    }
    else
    {
      bdLogMessage(BD_LOG_INFO, "info/", "client-association", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdrelayassociation.cpp", "bdRelayAssociation::handleDisconnectAck", 0x287u, "Error deserializing/decrypting disconnectAck packet.");
    }
    bdRelayBasePacket::~bdRelayBasePacket(&v7);
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "client-association", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdrelayassociation.cpp", "bdRelayAssociation::handleDisconnectAck", 0x276u, "Association was not waiting for a DISCONNECTED message, ignoring.");
  }
}

/*
==============
bdRelayAssociation::handleEstablished
==============
*/
void bdRelayAssociation::handleEstablished(bdRelayAssociation *this, const void *data, const unsigned int dataLength)
{
  bdRelayAssociationListener *m_listener; 
  __int64 v7; 
  unsigned int v8; 
  __int64 v9; 
  unsigned __int64 RelayID; 
  const bdRelayRoute *v11; 
  unsigned __int64 v12; 
  bdRelayAssociationListener *v13; 
  void (__fastcall *onRelayConnectionSuccess)(bdRelayAssociationListener *, const bdReference<bdCommonAddr>, const bdAddr *); 
  __int64 v15; 
  bdCommonAddr *m_ptr; 
  unsigned int m_size; 
  unsigned int v18; 
  unsigned int m_capacity; 
  unsigned int v20; 
  unsigned int v21; 
  bdReference<bdCommonAddr> *v22; 
  unsigned int RoutingID; 
  __int64 v24; 
  __int64 v25; 
  unsigned int offset; 
  bdCommonAddr *v27; 
  bdRelayBasePacket v28; 
  __int64 v29; 
  bdRelayRoute v30; 
  bdAddr v31; 

  v29 = -2i64;
  RoutingID = bdRelayJoinData::getRoutingID(&this->m_localJoinData);
  bdLogMessage(BD_LOG_INFO, "info/", "client-association", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdrelayassociation.cpp", "bdRelayAssociation::handleEstablished", 0x1D0u, "Association [%llu:%u] got ESTABLISHED message from relay.", this->m_relayID, RoutingID);
  if ( this->m_status == BD_RELAY_ASSOC_STATUS_WAITING_ESTABLISHED )
  {
    offset = 0;
    bdRelayBasePacket::bdRelayBasePacket(&v28, BD_RELAY_PACKET_ESTABLISHED, 0x10u);
    if ( bdRelayBasePacket::deserialize(&v28, data, dataLength, 0, &offset) && bdRelayBasePacket::verifySeqNum(&v28, &this->m_incomingSeqNum) && bdRelayBasePacket::verifyHmac(&v28, data, dataLength, offset, this->m_serverToClientHmacSecret) )
    {
      LODWORD(v24) = bdRelayJoinData::getRoutingID(&this->m_localJoinData);
      bdLogMessage(BD_LOG_INFO, "info/", "client-association", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdrelayassociation.cpp", "bdRelayAssociation::handleEstablished", 0x1E4u, "Association [%llu:%u] successfully established to the relay.", this->m_relayID, v24);
      this->m_status = BD_RELAY_ASSOC_STATUS_OPEN;
      bdGlobalStopwatch::start(&this->m_keepAliveTimer);
      bdGlobalStopwatch::start(&this->m_lastValidPacketTimer);
      bdGlobalStopwatch::start(&this->m_lastReceivedPacketTimer);
      bdRelayAssociationTelemetry::setEstablishedStageTime(&this->m_telemetry);
      m_listener = this->m_listener;
      if ( m_listener )
      {
        if ( this->m_type == BD_ASSOC_TYPE_BINDING )
          m_listener->onRelayBindSuccess(m_listener, this);
        while ( this->m_notifyList.m_size )
        {
          bdAddr::bdAddr(&v31, &this->m_relayAddr);
          v7 = this->m_notifyList.m_size - 1;
          bdHandleAssert((unsigned int)v7 < this->m_notifyList.m_size, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdfastarray.inl", "bdFastArray<class bdReference<class bdCommonAddr> >::operator []", 0x50u, "bdFastArray<T>::operator[], rangecheck failed");
          v8 = bdRelayJoinData::getRoutingID(&this->m_notifyList.m_data[v7].m_ptr->m_joinData);
          v9 = this->m_notifyList.m_size - 1;
          bdHandleAssert((unsigned int)v9 < this->m_notifyList.m_size, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdfastarray.inl", "bdFastArray<class bdReference<class bdCommonAddr> >::operator []", 0x50u, "bdFastArray<T>::operator[], rangecheck failed");
          RelayID = bdRelayJoinData::getRelayID(&this->m_notifyList.m_data[v9].m_ptr->m_joinData);
          bdRelayRoute::bdRelayRoute(&v30, RelayID, v8);
          bdAddr::setRelayRoute(&v31, v11);
          LODWORD(v9) = bdRelayRoute::getRoutingID(&v31.m_relayRoute);
          v12 = bdRelayRoute::getRelayID(&v31.m_relayRoute);
          LODWORD(v25) = v9;
          bdLogMessage(BD_LOG_INFO, "info/", "client-association", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdrelayassociation.cpp", "bdRelayAssociation::handleEstablished", 0x1F6u, "Successful connection through relay, id=[%llu] rid=[%u]", v12, v25);
          v13 = this->m_listener;
          onRelayConnectionSuccess = v13->onRelayConnectionSuccess;
          v15 = this->m_notifyList.m_size - 1;
          bdHandleAssert((unsigned int)v15 < this->m_notifyList.m_size, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdfastarray.inl", "bdFastArray<class bdReference<class bdCommonAddr> >::operator []", 0x50u, "bdFastArray<T>::operator[], rangecheck failed");
          m_ptr = this->m_notifyList.m_data[v15].m_ptr;
          v27 = m_ptr;
          if ( m_ptr )
            _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
          ((void (__fastcall *)(bdRelayAssociationListener *, bdCommonAddr **, bdAddr *))onRelayConnectionSuccess)(v13, &v27, &v31);
          m_size = this->m_notifyList.m_size;
          if ( m_size )
          {
            v18 = m_size - 1;
            this->m_notifyList.m_size = v18;
            m_capacity = this->m_notifyList.m_capacity;
            if ( m_capacity > 4 * v18 )
            {
              v20 = m_capacity - v18;
              if ( m_capacity != v18 )
                v20 = 0;
              if ( v20 <= m_capacity >> 1 )
                v20 = m_capacity >> 1;
              v21 = m_capacity - v20;
              this->m_notifyList.m_capacity = v21;
              v22 = NULL;
              if ( v21 )
                v22 = (bdReference<bdCommonAddr> *)bdMemory::reallocate(this->m_notifyList.m_data, 8i64 * v21);
              this->m_notifyList.m_data = v22;
            }
          }
        }
      }
      bdMemory::deallocate(this->m_notifyList.m_data);
      this->m_notifyList.m_data = NULL;
      *(_QWORD *)&this->m_notifyList.m_capacity = 0i64;
      if ( this->m_upgradeAfterJoin )
      {
        bdLogMessage(BD_LOG_INFO, "info/", "client-association", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdrelayassociation.cpp", "bdRelayAssociation::handleEstablished", 0x1FFu, "Association has an upgrade queued, starting upgrade process now.");
        bdRelayAssociation::sendUpgradeRequest(this);
      }
      bdRelayAssociation::finalizeTelemetry(this);
    }
    else
    {
      bdLogMessage(BD_LOG_INFO, "info/", "client-association", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdrelayassociation.cpp", "bdRelayAssociation::handleEstablished", 0x1E0u, "Invalid ESTABLISHED packet. Dropping.");
    }
    bdRelayBasePacket::~bdRelayBasePacket(&v28);
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "client-association", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdrelayassociation.cpp", "bdRelayAssociation::handleEstablished", 0x1D4u, "Association was not expecting an ESTABLISHED message, ignoring.");
  }
}

/*
==============
bdRelayAssociation::handleInitAck
==============
*/
void bdRelayAssociation::handleInitAck(bdRelayAssociation *this, const void *data, const unsigned int dataLength)
{
  unsigned __int8 *ClientRandom; 
  const unsigned __int8 *ServerRandom; 
  const unsigned __int8 *Secret; 
  const unsigned __int8 *v9; 
  const unsigned __int8 *v10; 
  unsigned int RoutingID; 
  unsigned int line; 
  char *format; 
  unsigned int cToSHmac; 
  unsigned int newOffset; 
  __int64 v16; 
  bdRelayInitAck v17; 
  bdRelayJoinData relayJoinData; 
  unsigned __int8 sToCHmac[16]; 
  unsigned __int8 sToCCipher[16]; 
  unsigned __int8 v21[16]; 

  v16 = -2i64;
  cToSHmac = bdRelayJoinData::getRoutingID(&this->m_localJoinData);
  bdLogMessage(BD_LOG_INFO, "info/", "client-association", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdrelayassociation.cpp", "bdRelayAssociation::handleInitAck", 0x17Au, "Association [%llu:%u] got INIT_ACK message from relay.", this->m_relayID, cToSHmac);
  if ( this->m_status != BD_RELAY_ASSOC_STATUS_WAITING_INIT_ACK )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "client-association", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdrelayassociation.cpp", "bdRelayAssociation::handleInitAck", 0x17Eu, "Association was not expecting an INIT_ACK message, ignoring.");
    return;
  }
  bdRelayJoinData::bdRelayJoinData(&relayJoinData);
  bdRelayInitAck::bdRelayInitAck(&v17, &relayJoinData, NULL, NULL);
  newOffset = 0;
  if ( bdRelayInitAck::deserialize(&v17, data, dataLength, 0, &newOffset) )
  {
    ClientRandom = bdRelayInitAck::getClientRandom(&v17);
    if ( *(_QWORD *)ClientRandom == *(_QWORD *)this->m_clientRandom && *((_QWORD *)ClientRandom + 1) == *(_QWORD *)&this->m_clientRandom[8] )
    {
      if ( this->m_type == BD_ASSOC_TYPE_BINDING )
      {
        ServerRandom = bdRelayInitAck::getServerRandom(&v17);
        Secret = bdRelayAuthToken::getSecret(&this->m_relayToken);
      }
      else
      {
        ServerRandom = bdRelayInitAck::getServerRandom(&v17);
        Secret = bdRelayJoinData::getSecret(&this->m_remoteJoinData);
      }
      v9 = Secret;
      v10 = bdClientAuthToken::getSecret(&this->m_clientToken);
      if ( bdRelayFunctions::deriveSecrets(this->m_titleID, this->m_userID, v10, v9, this->m_clientRandom, ServerRandom, sToCHmac, sToCCipher, v21) && bdRelayInitAck::verifyHmac(&v17, data, dataLength, newOffset, sToCHmac) )
      {
        *(_OWORD *)this->m_serverToClientHmacSecret = *(_OWORD *)sToCHmac;
        *(_OWORD *)this->m_serverToClientCipherSecret = *(_OWORD *)sToCCipher;
        *(_OWORD *)this->m_clientToServerHmacSecret = *(_OWORD *)v21;
        if ( bdRelayJoinData::decrypt(&relayJoinData, this->m_serverToClientCipherSecret) )
        {
          bdRelayJoinData::operator=(&this->m_localJoinData, &relayJoinData);
          RoutingID = bdRelayJoinData::getRoutingID(&this->m_localJoinData);
          bdRelayAssociationTelemetry::setRoutingID(&this->m_telemetry, RoutingID);
          bdRelayAssociationTelemetry::setInitAckStageTime(&this->m_telemetry);
          bdRelayAssociation::sendVerify(this);
        }
        else
        {
          bdLogMessage(BD_LOG_INFO, "info/", "client-association", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdrelayassociation.cpp", "bdRelayAssociation::handleInitAck", 0x1C2u, "Joindata decrypt failed.");
        }
      }
      else
      {
        bdLogMessage(BD_LOG_INFO, "info/", "client-association", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdrelayassociation.cpp", "bdRelayAssociation::handleInitAck", 0x1B6u, "InitAck hmac verification failed.");
      }
      goto LABEL_18;
    }
    format = "Client random mismatch. Dropping packet.";
    line = 401;
  }
  else
  {
    format = "InitAck deserialize failed.";
    line = 394;
  }
  bdLogMessage(BD_LOG_INFO, "info/", "client-association", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdrelayassociation.cpp", "bdRelayAssociation::handleInitAck", line, format);
LABEL_18:
  bdRelayBasePacket::~bdRelayBasePacket(&v17);
}

/*
==============
bdRelayAssociation::handleMigrate
==============
*/
void bdRelayAssociation::handleMigrate(bdRelayAssociation *this, const void *data, const unsigned int dataLength)
{
  bdRelayAssociationListener *m_listener; 
  unsigned int RoutingID; 
  bdRelayBasePacket v8; 
  unsigned int offset; 

  RoutingID = bdRelayJoinData::getRoutingID(&this->m_localJoinData);
  bdLogMessage(BD_LOG_INFO, "info/", "client-association", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdrelayassociation.cpp", "bdRelayAssociation::handleMigrate", 0x28Du, "Association [%llu:%u] got MIGRATE from relay.", this->m_relayID, RoutingID);
  if ( bdRelayAssociation::getStatus(this) == BD_RELAY_STATUS_CONNECTED )
  {
    offset = 0;
    bdRelayBasePacket::bdRelayBasePacket(&v8, BD_RELAY_PACKET_MIGRATE, 0x10u);
    if ( bdRelayBasePacket::deserialize(&v8, data, dataLength, offset, &offset) )
    {
      if ( bdRelayBasePacket::verifySeqNum(&v8, &this->m_incomingSeqNum) && bdRelayBasePacket::verifyHmac(&v8, data, dataLength, offset, this->m_serverToClientHmacSecret) )
      {
        m_listener = this->m_listener;
        if ( m_listener )
          m_listener->onRelayAssociationMigrate(m_listener, this);
      }
      else
      {
        bdLogMessage(BD_LOG_INFO, "info/", "client-association", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdrelayassociation.cpp", "bdRelayAssociation::handleMigrate", 0x2A3u, "Failed to decrypt migrate packet.");
      }
    }
    else
    {
      bdLogMessage(BD_LOG_INFO, "info/", "client-association", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdrelayassociation.cpp", "bdRelayAssociation::handleMigrate", 0x29Au, "Failed to deserialize migrate packet.");
    }
    bdRelayBasePacket::~bdRelayBasePacket(&v8);
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "client-association", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdrelayassociation.cpp", "bdRelayAssociation::handleMigrate", 0x291u, "Association is not connected. Ignoring migrate.");
  }
}

/*
==============
bdRelayAssociation::handleRelayPing
==============
*/
void bdRelayAssociation::handleRelayPing(bdRelayAssociation *this, void *data, const unsigned int dataLength)
{
  unsigned int v6; 
  unsigned int Value; 
  int v8; 
  unsigned __int64 HiResTimeStamp; 
  unsigned __int64 Time; 
  double ElapsedTime; 
  __int64 v12; 
  unsigned int RoutingID; 
  bdRelayPing v14; 
  unsigned int offset; 
  bdSequenceNumber result; 

  RoutingID = bdRelayJoinData::getRoutingID(&this->m_localJoinData);
  bdLogMessage(BD_LOG_INFO, "info/", "client-association", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdrelayassociation.cpp", "bdRelayAssociation::handleRelayPing", 0x207u, "Association [%llu:%u] got PING from relay.", this->m_relayID, RoutingID);
  if ( bdRelayAssociation::getStatus(this) == BD_RELAY_STATUS_CONNECTED )
  {
    offset = 0;
    bdRelayPing::bdRelayPing(&v14, 0i64, EVALUATION, 0, 0);
    if ( bdRelayPing::deserialize(&v14, data, dataLength, offset, &offset) )
    {
      v6 = bdRelayJoinData::getRoutingID(&this->m_localJoinData);
      if ( bdRelayBasePacket::getRoutingID(&v14) == v6 )
      {
        if ( bdRelayBasePacket::verifySeqNum(&v14, &this->m_incomingSeqNum) && bdRelayBasePacket::verifyHmac(&v14, data, dataLength, offset, this->m_serverToClientHmacSecret) )
        {
          bdGlobalStopwatch::start(&this->m_lastValidPacketTimer);
          if ( bdRelayPing::getInitiator(&v14) )
          {
            HiResTimeStamp = bdPlatformTiming::getHiResTimeStamp();
            Time = bdRelayPing::getTime(&v14);
            ElapsedTime = bdPlatformTiming::getElapsedTime(Time, HiResTimeStamp);
            this->m_lastPing = *(float *)&ElapsedTime;
          }
          else
          {
            bdSequenceNumber::operator++(&this->m_clientSeqNum, &result, 0);
            Value = bdSequenceNumber::getValue(&this->m_clientSeqNum);
            if ( bdRelayBasePacket::rewrite(&v14, data, dataLength, Value, this->m_clientToServerHmacSecret) )
            {
              v8 = this->m_socket->sendTo(this->m_socket, &this->m_relayAddr, data, dataLength);
              if ( v8 <= 0 )
              {
                LODWORD(v12) = v8;
                bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "client-association", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdrelayassociation.cpp", "bdRelayAssociation::handleRelayPing", 0x23Du, "Could not send back PING to relay, socket sendTo returned [%d].", v12);
              }
            }
            else
            {
              bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "client-association", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdrelayassociation.cpp", "bdRelayAssociation::handleRelayPing", 0x242u, "PING rewrite failed.");
            }
          }
        }
        else
        {
          bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "client-association", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdrelayassociation.cpp", "bdRelayAssociation::handleRelayPing", 0x224u, "PING deserialize/decrypt failed.");
        }
      }
      else
      {
        bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "client-association", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdrelayassociation.cpp", "bdRelayAssociation::handleRelayPing", 0x21Bu, "PING routingID mismatch: dropping.");
      }
    }
    else
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "client-association", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdrelayassociation.cpp", "bdRelayAssociation::handleRelayPing", 0x215u, "Failed to deserialize ping packet.");
    }
    bdRelayBasePacket::~bdRelayBasePacket(&v14);
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "client-association", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdrelayassociation.cpp", "bdRelayAssociation::handleRelayPing", 0x20Bu, "Association is not connected. Ignoring PING.");
  }
}

/*
==============
bdRelayAssociation::inProgress
==============
*/
__int64 bdRelayAssociation::inProgress(bdRelayAssociation *this, const bdReference<bdCommonAddr> remote)
{
  bdMutex *p_m_mutex; 
  __int64 v5; 
  unsigned int m_size; 
  unsigned __int8 v7; 

  p_m_mutex = &this->m_mutex;
  bdMutex::lock(&this->m_mutex);
  v5 = 0i64;
  m_size = this->m_notifyList.m_size;
  if ( m_size )
  {
    while ( remote.m_ptr->__vftable != (bdCommonAddr_vtbl *)this->m_notifyList.m_data[v5].m_ptr )
    {
      v5 = (unsigned int)(v5 + 1);
      if ( (unsigned int)v5 >= m_size )
        goto LABEL_4;
    }
    v7 = 1;
  }
  else
  {
LABEL_4:
    v7 = 0;
  }
  bdMutex::unlock(p_m_mutex);
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
bdRelayAssociation::notifyWhenComplete
==============
*/
char bdRelayAssociation::notifyWhenComplete(bdRelayAssociation *this, const bdReference<bdCommonAddr> remote)
{
  bdMutex *p_m_mutex; 
  bdCommonAddr_vtbl *v5; 
  bdReference<bdCommonAddr> *m_data; 
  int v7; 
  unsigned int m_size; 
  unsigned int m_capacity; 
  unsigned int v10; 
  unsigned int v11; 
  unsigned int v12; 
  __int64 v14; 
  __int64 v15; 
  unsigned int RoutingID; 
  unsigned int v17; 

  p_m_mutex = &this->m_mutex;
  bdMutex::lock(&this->m_mutex);
  if ( this->m_status == BD_RELAY_ASSOC_STATUS_OPEN )
  {
    RoutingID = bdRelayJoinData::getRoutingID(&this->m_localJoinData);
    bdLogMessage(BD_LOG_WARNING, "warn/", "client-association", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdrelayassociation.cpp", "bdRelayAssociation::notifyWhenComplete", 0x308u, "Association [%llu:%u] did not add the remote to the notify list: association already OPEN.", this->m_relayID, RoutingID);
    bdMutex::unlock(p_m_mutex);
    if ( !remote.m_ptr->__vftable || _InterlockedDecrement((volatile signed __int32 *)&remote.m_ptr->__vftable[1]) )
      return 0;
    v5 = remote.m_ptr->__vftable;
    if ( !remote.m_ptr->__vftable )
    {
LABEL_24:
      remote.m_ptr->__vftable = NULL;
      return 0;
    }
LABEL_23:
    (*(void (__fastcall **)(bdCommonAddr_vtbl *, __int64))v5->~bdReferencable)(v5, 1i64);
    goto LABEL_24;
  }
  if ( !this->m_listener )
  {
    v17 = bdRelayJoinData::getRoutingID(&this->m_localJoinData);
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "client-association", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdrelayassociation.cpp", "bdRelayAssociation::notifyWhenComplete", 0x319u, "notifyWhenComplete was called but association [%llu:%u] has no registered listener.", this->m_relayID, v17);
    bdMutex::unlock(p_m_mutex);
    if ( !remote.m_ptr->__vftable || _InterlockedDecrement((volatile signed __int32 *)&remote.m_ptr->__vftable[1]) )
      return 0;
    v5 = remote.m_ptr->__vftable;
    if ( !remote.m_ptr->__vftable )
      goto LABEL_24;
    goto LABEL_23;
  }
  m_data = NULL;
  v7 = 0;
  m_size = this->m_notifyList.m_size;
  if ( m_size )
  {
    while ( remote.m_ptr->__vftable != (bdCommonAddr_vtbl *)this->m_notifyList.m_data[v7].m_ptr )
    {
      if ( ++v7 >= m_size )
        goto LABEL_10;
    }
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "client-association", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdrelayassociation.cpp", "bdRelayAssociation::notifyWhenComplete", 0x314u, "Association [%llu:%u] did not add the remote to the notify list: remote already present.", v14, v15);
    bdMutex::unlock(p_m_mutex);
    bdReference<bdCommonAddr>::~bdReference<bdCommonAddr>((bdReference<bdCommonAddr> *)remote.m_ptr);
    return 0;
  }
LABEL_10:
  m_capacity = this->m_notifyList.m_capacity;
  if ( m_size == m_capacity )
  {
    v10 = this->m_notifyList.m_capacity;
    if ( !m_capacity )
      v10 = 1;
    v11 = m_capacity + v10;
    if ( m_capacity + v10 )
    {
      m_data = (bdReference<bdCommonAddr> *)bdMemory::allocate(8i64 * v11);
      v12 = this->m_notifyList.m_size;
      if ( v12 )
        memcpy_0(m_data, this->m_notifyList.m_data, 8i64 * v12);
    }
    bdMemory::deallocate(this->m_notifyList.m_data);
    this->m_notifyList.m_data = m_data;
    this->m_notifyList.m_capacity = v11;
  }
  else
  {
    m_data = this->m_notifyList.m_data;
  }
  m_data[this->m_notifyList.m_size++] = (bdReference<bdCommonAddr>)remote.m_ptr->__vftable;
  bdMutex::unlock(p_m_mutex);
  bdReference<bdCommonAddr>::~bdReference<bdCommonAddr>((bdReference<bdCommonAddr> *)remote.m_ptr);
  return 1;
}

/*
==============
bdRelayAssociation::onFailedConnection
==============
*/
void bdRelayAssociation::onFailedConnection(bdRelayAssociation *this)
{
  unsigned int i; 
  bdRelayAssociationListener *m_listener; 
  __int64 v4; 
  void (__fastcall *onRelayConnectionFailure)(bdRelayAssociationListener *, const bdReference<bdCommonAddr>); 
  bdCommonAddr *m_ptr; 
  unsigned int m_size; 
  unsigned int m_capacity; 
  unsigned int v9; 
  unsigned int v10; 
  bdReference<bdCommonAddr> *v11; 
  unsigned int v12; 
  bdRelayAssociationListener *v13; 
  bdRelayAssociationListener_vtbl *v14; 
  bdCommonAddr *v15; 

  if ( this->m_listener )
  {
    for ( i = this->m_notifyList.m_size; i; i = this->m_notifyList.m_size )
    {
      m_listener = this->m_listener;
      v4 = i - 1;
      onRelayConnectionFailure = m_listener->onRelayConnectionFailure;
      bdHandleAssert((unsigned int)v4 < this->m_notifyList.m_size, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdfastarray.inl", "bdFastArray<class bdReference<class bdCommonAddr> >::operator []", 0x50u, "bdFastArray<T>::operator[], rangecheck failed");
      m_ptr = this->m_notifyList.m_data[v4].m_ptr;
      v15 = m_ptr;
      if ( m_ptr )
        _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
      ((void (__fastcall *)(bdRelayAssociationListener *, bdCommonAddr **))onRelayConnectionFailure)(m_listener, &v15);
      m_size = this->m_notifyList.m_size;
      if ( m_size )
      {
        m_capacity = this->m_notifyList.m_capacity;
        v9 = m_size - 1;
        this->m_notifyList.m_size = v9;
        if ( m_capacity > 4 * v9 )
        {
          v10 = m_capacity - v9;
          if ( m_capacity != v9 )
            v10 = 0;
          if ( v10 <= m_capacity >> 1 )
            v10 = m_capacity >> 1;
          v11 = NULL;
          v12 = m_capacity - v10;
          this->m_notifyList.m_capacity = v12;
          if ( v12 )
            v11 = (bdReference<bdCommonAddr> *)bdMemory::reallocate(this->m_notifyList.m_data, 8i64 * v12);
          this->m_notifyList.m_data = v11;
        }
      }
    }
    bdMemory::deallocate(this->m_notifyList.m_data);
    this->m_notifyList.m_data = NULL;
    *(_QWORD *)&this->m_notifyList.m_capacity = 0i64;
    v13 = this->m_listener;
    v14 = v13->__vftable;
    if ( this->m_type == BD_ASSOC_TYPE_BINDING )
      v14->onRelayBindFailure(v13, this);
    else
      v14->onRelayAssociationError(v13, this);
  }
}

/*
==============
bdRelayAssociation::prepareData
==============
*/
__int64 bdRelayAssociation::prepareData(bdRelayAssociation *this, const bdRelayRoute *relayRoute, const void *data, const unsigned int length, void *outData, const unsigned int outDataLength)
{
  unsigned int v9; 
  unsigned __int64 RelayID; 
  unsigned int RoutingID; 
  unsigned int v12; 
  unsigned int v13; 
  unsigned int v14; 
  unsigned int Value; 
  unsigned int v17; 
  unsigned int v18; 
  unsigned int v19; 
  unsigned int offset; 
  unsigned int v21; 
  bdSequenceNumber result; 
  __int64 v23; 
  bdRelayData v24; 

  v23 = -2i64;
  v9 = -1;
  if ( bdRelayAssociation::getStatus(this) == BD_RELAY_STATUS_CONNECTED )
  {
    v21 = length + bdRelayData::getWrapperSize();
    bdHandleAssert(v21 <= 0x508, "newPacketSize <= BD_MAX_DATAGRAM_SIZE", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdrelayassociation.cpp", "bdRelayAssociation::prepareData", 0x161u, "Not enough space to put relay header.");
    bdHandleAssert(v21 <= outDataLength, "newPacketSize <= outDataLength", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdrelayassociation.cpp", "bdRelayAssociation::prepareData", 0x162u, "Not enough space to put relay header.");
    RelayID = bdRelayRoute::getRelayID((bdRelayRoute *)relayRoute);
    bdHandleAssert(RelayID != 0, "relayRoute.getRelayID() != 0", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdrelayassociation.cpp", "bdRelayAssociation::prepareData", 0x163u, "Destination relay ID is 0.");
    RoutingID = bdRelayRoute::getRoutingID((bdRelayRoute *)relayRoute);
    bdHandleAssert(RoutingID != 0, "relayRoute.getRoutingID() != 0", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdrelayassociation.cpp", "bdRelayAssociation::prepareData", 0x164u, "Destination routing ID is 0.");
    v12 = bdRelayJoinData::getRoutingID(&this->m_localJoinData);
    bdHandleAssert(v12 != 0, "m_localJoinData.getRoutingID() != 0", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdrelayassociation.cpp", "bdRelayAssociation::prepareData", 0x165u, "Local routingID is 0. Association is probably not open.");
    offset = 0;
    bdSequenceNumber::operator++(&this->m_clientSeqNum, &result, 0);
    v13 = bdRelayRoute::getRoutingID((bdRelayRoute *)relayRoute);
    v14 = bdRelayJoinData::getRoutingID(&this->m_localJoinData);
    Value = bdSequenceNumber::getValue(&this->m_clientSeqNum);
    bdRelayData::bdRelayData(&v24, Value, v14, v13, (const unsigned __int8 *)data, length);
    if ( bdRelayData::serialize(&v24, outData, outDataLength, 0, &offset, this->m_clientToServerHmacSecret) )
    {
      v9 = v21;
    }
    else
    {
      v19 = bdRelayRoute::getRoutingID((bdRelayRoute *)relayRoute);
      v18 = bdRelayJoinData::getRoutingID(&this->m_localJoinData);
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "client-association", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdrelayassociation.cpp", "bdRelayAssociation::prepareData", 0x16Eu, "Association [%llu:%u] failed to serialize data packet for [%u].", this->m_relayID, v18, v19);
    }
    bdRelayBasePacket::~bdRelayBasePacket(&v24);
  }
  else
  {
    v17 = bdRelayJoinData::getRoutingID(&this->m_localJoinData);
    bdLogMessage(BD_LOG_WARNING, "warn/", "client-association", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdrelayassociation.cpp", "bdRelayAssociation::prepareData", 0x15Cu, "Association [%llu:%u] cannot send data: it is not connected.", this->m_relayID, v17);
  }
  return v9;
}

/*
==============
bdRelayAssociation::processPacket
==============
*/
__int64 bdRelayAssociation::processPacket(bdRelayAssociation *this, bdAddr *realAddr, void *data, const unsigned int dataLength)
{
  bdMutex *p_m_mutex; 
  unsigned int v9; 
  bdRelayAssociationListener *m_listener; 
  unsigned int v12; 
  unsigned int RoutingID; 
  unsigned int v14; 
  int v15; 
  bdRelayBasePacket v16; 
  unsigned int offset; 

  p_m_mutex = &this->m_mutex;
  bdMutex::lock(&this->m_mutex);
  bdHandleAssert(dataLength != 0, "dataLength > 0", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdrelayassociation.cpp", "bdRelayAssociation::processPacket", 0x2DAu, "ProcessPacket should not be given a 0 length buffer.");
  v9 = -2;
  switch ( *(_BYTE *)data )
  {
    case 2:
      bdRelayAssociation::handleInitAck(this, data, dataLength);
      break;
    case 4:
      bdRelayAssociation::handleEstablished(this, data, dataLength);
      break;
    case 5:
      v9 = bdRelayAssociation::handleData(this, realAddr, data, dataLength);
      break;
    case 6:
      bdRelayAssociation::handleRelayPing(this, data, dataLength);
      break;
    case 7:
      RoutingID = bdRelayJoinData::getRoutingID(&this->m_localJoinData);
      bdLogMessage(BD_LOG_INFO, "info/", "client-association", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdrelayassociation.cpp", "bdRelayAssociation::handleMigrate", 0x28Du, "Association [%llu:%u] got MIGRATE from relay.", this->m_relayID, RoutingID);
      if ( bdRelayAssociation::getStatus(this) == BD_RELAY_STATUS_CONNECTED )
      {
        offset = 0;
        bdRelayBasePacket::bdRelayBasePacket(&v16, BD_RELAY_PACKET_MIGRATE, 0x10u);
        if ( bdRelayBasePacket::deserialize(&v16, data, dataLength, offset, &offset) )
        {
          if ( bdRelayBasePacket::verifySeqNum(&v16, &this->m_incomingSeqNum) && bdRelayBasePacket::verifyHmac(&v16, data, dataLength, offset, this->m_serverToClientHmacSecret) )
          {
            m_listener = this->m_listener;
            if ( m_listener )
              m_listener->onRelayAssociationMigrate(m_listener, this);
          }
          else
          {
            bdLogMessage(BD_LOG_INFO, "info/", "client-association", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdrelayassociation.cpp", "bdRelayAssociation::handleMigrate", 0x2A3u, "Failed to decrypt migrate packet.");
          }
        }
        else
        {
          bdLogMessage(BD_LOG_INFO, "info/", "client-association", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdrelayassociation.cpp", "bdRelayAssociation::handleMigrate", 0x29Au, "Failed to deserialize migrate packet.");
        }
        goto LABEL_22;
      }
      bdLogMessage(BD_LOG_WARNING, "warn/", "client-association", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdrelayassociation.cpp", "bdRelayAssociation::handleMigrate", 0x291u, "Association is not connected. Ignoring migrate.");
      break;
    case 9:
      bdRelayAssociation::handleBindUpgradeAck(this, data, dataLength);
      break;
    case 0xB:
      v12 = bdRelayJoinData::getRoutingID(&this->m_localJoinData);
      bdLogMessage(BD_LOG_INFO, "info/", "client-association", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdrelayassociation.cpp", "bdRelayAssociation::handleDisconnectAck", 0x271u, "Association [%llu:%u] got DISCONNECTED message from relay.", this->m_relayID, v12);
      if ( this->m_status == BD_RELAY_ASSOC_STATUS_WAITING_DISCONNECT )
      {
        offset = 0;
        bdRelayBasePacket::bdRelayBasePacket(&v16, BD_RELAY_PACKET_DISCONNECT_ACK, 0x10u);
        if ( bdRelayBasePacket::deserialize(&v16, data, dataLength, offset, &offset) && bdRelayBasePacket::verifySeqNum(&v16, &this->m_incomingSeqNum) && bdRelayBasePacket::verifyHmac(&v16, data, dataLength, offset, this->m_serverToClientHmacSecret) )
        {
          this->m_status = BD_RELAY_ASSOC_STATUS_CLOSED;
          bdRelayAssociation::reset(this);
        }
        else
        {
          bdLogMessage(BD_LOG_INFO, "info/", "client-association", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdrelayassociation.cpp", "bdRelayAssociation::handleDisconnectAck", 0x287u, "Error deserializing/decrypting disconnectAck packet.");
        }
LABEL_22:
        bdRelayBasePacket::~bdRelayBasePacket(&v16);
      }
      else
      {
        bdLogMessage(BD_LOG_WARNING, "warn/", "client-association", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdrelayassociation.cpp", "bdRelayAssociation::handleDisconnectAck", 0x276u, "Association was not waiting for a DISCONNECTED message, ignoring.");
      }
      break;
    default:
      v15 = *(char *)data;
      v14 = bdRelayJoinData::getRoutingID(&this->m_localJoinData);
      bdLogMessage(BD_LOG_WARNING, "warn/", "client-association", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdrelayassociation.cpp", "bdRelayAssociation::processPacket", 0x2FCu, "Association [%llu:%u] got unexpected relay packet of type [%d].", this->m_relayID, v14, v15);
      break;
  }
  bdMutex::unlock(p_m_mutex);
  return v9;
}

/*
==============
bdRelayAssociation::pump
==============
*/
void bdRelayAssociation::pump(bdRelayAssociation *this)
{
  bdMutex *p_m_mutex; 
  double v3; 
  double ElapsedTimeInSeconds; 
  bdRelayAssociationType m_type; 
  double v6; 
  double v7; 
  bdRelayJoinData *p_m_localJoinData; 
  unsigned int v9; 
  unsigned int Value; 
  unsigned __int64 HiResTimeStamp; 
  int v12; 
  double v13; 
  bdRelayAssociationListener *m_listener; 
  double v15; 
  bdRelayAssociationListener *v16; 
  double v17; 
  double v18; 
  __int64 v19; 
  unsigned int v20; 
  unsigned int RoutingID; 
  unsigned int v22; 
  unsigned int v23; 
  unsigned int v24; 
  unsigned int v25; 
  unsigned int v26; 
  int v27; 
  bdRelayAssociation::bdRelayAssociationInternalStatus m_status; 
  unsigned int offset; 
  bdSequenceNumber result; 
  __int64 v31; 
  bdMutex *v32; 
  bdRelayPing v33; 
  char data[1296]; 

  v31 = -2i64;
  p_m_mutex = &this->m_mutex;
  v32 = &this->m_mutex;
  bdMutex::lock(&this->m_mutex);
  switch ( this->m_status )
  {
    case BD_RELAY_ASSOC_STATUS_CLOSED:
      break;
    case BD_RELAY_ASSOC_STATUS_WAITING_INIT_ACK:
      ElapsedTimeInSeconds = bdGlobalStopwatch::getElapsedTimeInSeconds(&this->m_initResendsTimer);
      if ( *(float *)&ElapsedTimeInSeconds > 2.0 )
      {
        RoutingID = bdRelayJoinData::getRoutingID(&this->m_localJoinData);
        bdLogMessage(BD_LOG_INFO, "info/", "client-association", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdrelayassociation.cpp", "bdRelayAssociation::pump", 0xEEu, "initResendsTimer elapsed for [%llu:%u], resending INIT.", this->m_relayID, RoutingID);
        m_type = this->m_type;
        if ( m_type == BD_ASSOC_TYPE_BINDING )
        {
          bdRelayAssociation::sendInitBind(this);
        }
        else if ( m_type == BD_ASSOC_TYPE_JOINING )
        {
          bdRelayAssociation::sendInitJoin(this);
        }
      }
      break;
    case BD_RELAY_ASSOC_STATUS_WAITING_ESTABLISHED:
      v6 = bdGlobalStopwatch::getElapsedTimeInSeconds(&this->m_verifyResendsTimer);
      if ( *(float *)&v6 > 2.0 )
      {
        v22 = bdRelayJoinData::getRoutingID(&this->m_localJoinData);
        bdLogMessage(BD_LOG_INFO, "info/", "client-association", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdrelayassociation.cpp", "bdRelayAssociation::pump", 0xFCu, "verifyResendsTimer elapsed for [%llu:%u], resending VERIFY.", this->m_relayID, v22);
        bdRelayAssociation::sendVerify(this);
      }
      break;
    case BD_RELAY_ASSOC_STATUS_OPEN:
      v7 = bdGlobalStopwatch::getElapsedTimeInSeconds(&this->m_keepAliveTimer);
      if ( *(float *)&v7 <= 10.0 )
      {
        p_m_localJoinData = &this->m_localJoinData;
      }
      else
      {
        offset = 0;
        bdSequenceNumber::operator++(&this->m_clientSeqNum, &result, 0);
        p_m_localJoinData = &this->m_localJoinData;
        v9 = bdRelayJoinData::getRoutingID(&this->m_localJoinData);
        Value = bdSequenceNumber::getValue(&this->m_clientSeqNum);
        HiResTimeStamp = bdPlatformTiming::getHiResTimeStamp();
        bdRelayPing::bdRelayPing(&v33, HiResTimeStamp, CLIENT, Value, v9);
        if ( bdRelayPing::serialize(&v33, data, 0x508u, 0, &offset, this->m_clientToServerHmacSecret) )
        {
          v12 = this->m_socket->sendTo(this->m_socket, &this->m_relayAddr, data, offset);
          if ( v12 <= 0 )
          {
            v27 = v12;
            v23 = bdRelayJoinData::getRoutingID(&this->m_localJoinData);
            bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "client-association", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdrelayassociation.cpp", "bdRelayAssociation::sendKeepAlive", 0x424u, "Could not send PING to relay for association [%llu:%u], socket sendTo returned [%d].", this->m_relayID, v23, v27);
          }
        }
        else
        {
          v24 = bdRelayJoinData::getRoutingID(&this->m_localJoinData);
          bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "client-association", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdrelayassociation.cpp", "bdRelayAssociation::sendKeepAlive", 0x429u, "Serialization of PING failed for relay [%llu:%u].", this->m_relayID, v24);
        }
        bdGlobalStopwatch::start(&this->m_keepAliveTimer);
        bdRelayBasePacket::~bdRelayBasePacket(&v33);
      }
      v13 = bdGlobalStopwatch::getElapsedTimeInSeconds(&this->m_lastValidPacketTimer);
      if ( *(float *)&v13 > 1800.0 )
      {
        LODWORD(v19) = bdRelayJoinData::getRoutingID(p_m_localJoinData);
        bdLogMessage(BD_LOG_INFO, "info/", "client-association", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdrelayassociation.cpp", "bdRelayAssociation::pump", 0x108u, "Association [%llu:%u] timed out.", this->m_relayID, v19);
        this->m_status = BD_RELAY_ASSOC_STATUS_CLOSED;
        this->m_lastError = BD_ASSOC_E_TIMEOUT;
        m_listener = this->m_listener;
        if ( m_listener )
          m_listener->onRelayAssociationError(m_listener, this);
        bdRelayAssociation::reset(this);
      }
      if ( this->m_type == BD_ASSOC_TYPE_JOINING )
      {
        v15 = bdGlobalStopwatch::getElapsedTimeInSeconds(&this->m_lastReceivedPacketTimer);
        if ( *(float *)&v15 > 1800.0 )
        {
          LODWORD(v19) = bdRelayJoinData::getRoutingID(p_m_localJoinData);
          bdLogMessage(BD_LOG_INFO, "info/", "client-association", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdrelayassociation.cpp", "bdRelayAssociation::pump", 0x113u, "Association [%llu:%u] timed out: no data received for too long.", this->m_relayID, v19);
          this->m_status = BD_RELAY_ASSOC_STATUS_CLOSED;
          this->m_lastError = BD_ASSOC_E_TIMEOUT_NO_DATA;
          v16 = this->m_listener;
          if ( v16 )
            v16->onRelayAssociationError(v16, this);
          bdRelayAssociation::reset(this);
        }
      }
      break;
    case BD_RELAY_ASSOC_STATUS_WAITING_UPGRADE:
      v17 = bdGlobalStopwatch::getElapsedTimeInSeconds(&this->m_upgradeResendsTimer);
      if ( *(float *)&v17 > 2.0 )
      {
        v25 = bdRelayJoinData::getRoutingID(&this->m_localJoinData);
        bdLogMessage(BD_LOG_INFO, "info/", "client-association", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdrelayassociation.cpp", "bdRelayAssociation::pump", 0x120u, "upgradeResendsTimer elapsed for [%llu:%u], resending UPGRADE.", this->m_relayID, v25);
        bdRelayAssociation::sendUpgradeRequest(this);
      }
      break;
    case BD_RELAY_ASSOC_STATUS_WAITING_DISCONNECT:
      v3 = bdGlobalStopwatch::getElapsedTimeInSeconds(&this->m_disconnectResendsTimer);
      if ( *(float *)&v3 > 2.0 )
      {
        v20 = bdRelayJoinData::getRoutingID(&this->m_localJoinData);
        bdLogMessage(BD_LOG_INFO, "info/", "client-association", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdrelayassociation.cpp", "bdRelayAssociation::pump", 0xE7u, "disconnectResendsTimer elapsed for [%llu:%u], resending DISCONNECT.", this->m_relayID, v20);
        bdRelayAssociation::sendDisconnectRequest(this);
      }
      break;
    default:
      m_status = this->m_status;
      v26 = bdRelayJoinData::getRoutingID(&this->m_localJoinData);
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "client-association", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdrelayassociation.cpp", "bdRelayAssociation::pump", 0x125u, "Association [%llu:%u] pump: unknown state [%u].", this->m_relayID, v26, m_status);
      break;
  }
  v18 = bdGlobalStopwatch::getElapsedTimeInSeconds(&this->m_telemetryTimer);
  if ( *(float *)&v18 > 1800.0 )
    bdRelayAssociation::finalizeTelemetry(this);
  bdMutex::unlock(p_m_mutex);
}

/*
==============
bdRelayAssociation::reset
==============
*/
void bdRelayAssociation::reset(bdRelayAssociation *this)
{
  bdSequenceNumber inital; 

  bdRelayAssociation::finalizeTelemetry(this);
  bdSequenceNumber::bdSequenceNumber(&inital, 0);
  this->m_clientSeqNum = inital;
  bdSequenceNumber::bdSequenceNumber(&inital, -1);
  bdSequenceNumberStore::reset(&this->m_incomingSeqNum, &inital);
  bdMemory::deallocate(this->m_notifyList.m_data);
  this->m_notifyList.m_data = NULL;
  *(_QWORD *)&this->m_notifyList.m_capacity = 0i64;
  this->m_upgradeAfterJoin = 0;
  this->m_initResends = 0;
  this->m_verifyResends = 0;
  this->m_upgradeResends = 0;
  this->m_disconnectResends = 0;
  this->m_lastPing = 0.0;
}

/*
==============
bdRelayAssociation::sendData
==============
*/
__int64 bdRelayAssociation::sendData(bdRelayAssociation *this, const bdRelayRoute *relayRoute, const void *data, const unsigned int length)
{
  unsigned int v5; 
  __int64 result; 
  unsigned int v7; 
  unsigned int RoutingID; 
  char outData[1296]; 

  v5 = bdRelayAssociation::prepareData(this, relayRoute, data, length, outData, 0x508u);
  if ( v5 == -1 )
  {
    RoutingID = bdRelayJoinData::getRoutingID(&this->m_localJoinData);
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "client-association", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdrelayassociation.cpp", "bdRelayAssociation::sendData", 0x13Cu, "Association [%llu:%u] failed to prepare data packet for relay association.", this->m_relayID, RoutingID);
    return 0xFFFFFFFFi64;
  }
  else
  {
    result = ((__int64 (__fastcall *)(bdSocket *, bdAddr *, char *, _QWORD))this->m_socket->sendTo)(this->m_socket, &this->m_relayAddr, outData, v5);
    if ( (int)result > 0 )
    {
      v7 = result - bdRelayData::getWrapperSize();
      bdRelayAssociationTelemetry::addSentData(&this->m_telemetry, v5);
      return v7;
    }
  }
  return result;
}

/*
==============
bdRelayAssociation::sendDisconnectRequest
==============
*/
void bdRelayAssociation::sendDisconnectRequest(bdRelayAssociation *this)
{
  unsigned __int8 m_disconnectResends; 
  unsigned int v3; 
  unsigned int Value; 
  int v5; 
  __int64 v6; 
  unsigned int v7; 
  unsigned int RoutingID; 
  int v9; 
  unsigned int v10; 
  int v11; 
  int Port; 
  unsigned int offset; 
  bdSequenceNumber result; 
  __int64 v15; 
  bdRelayBasePacket v16; 
  char data[1296]; 

  v15 = -2i64;
  this->m_status = BD_RELAY_ASSOC_STATUS_WAITING_DISCONNECT;
  m_disconnectResends = this->m_disconnectResends;
  this->m_disconnectResends = m_disconnectResends + 1;
  if ( m_disconnectResends >= 5u )
  {
    Port = bdSockAddr::getPort(&this->m_relayAddr.m_address);
    v10 = bdSockAddr::toUInt32(&this->m_relayAddr.m_address);
    RoutingID = bdRelayJoinData::getRoutingID(&this->m_localJoinData);
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "client-association", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdrelayassociation.cpp", "bdRelayAssociation::sendDisconnectRequest", 0x44Fu, "Association [%llu:%u]: DISCONNECT retries exceeded, closing. RelayIP [%u:%u]", this->m_relayID, RoutingID, v10, Port);
    this->m_lastError = BD_ASSOC_E_DISCONNECT_RETRIES_EXCEEDED;
    this->m_status = BD_RELAY_ASSOC_STATUS_CLOSED;
    bdRelayAssociation::reset(this);
  }
  else
  {
    v11 = 5;
    v9 = (unsigned __int8)(m_disconnectResends + 1);
    v7 = bdRelayJoinData::getRoutingID(&this->m_localJoinData);
    bdLogMessage(BD_LOG_INFO, "info/", "client-association", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdrelayassociation.cpp", "bdRelayAssociation::sendDisconnectRequest", 0x436u, "Sending DISCONNECT_REQUEST message to relay for association [%llu:%u] (%u/%u).", this->m_relayID, v7, v9, v11);
    offset = 0;
    bdSequenceNumber::operator++(&this->m_clientSeqNum, &result, 0);
    v3 = bdRelayJoinData::getRoutingID(&this->m_localJoinData);
    Value = bdSequenceNumber::getValue(&this->m_clientSeqNum);
    bdRelayBasePacket::bdRelayBasePacket(&v16, BD_RELAY_PACKET_DISCONNECT_REQUEST, Value, v3, 0x10u);
    if ( bdRelayBasePacket::serialize(&v16, data, 0x508u, 0, &offset, this->m_clientToServerHmacSecret) )
    {
      v5 = this->m_socket->sendTo(this->m_socket, &this->m_relayAddr, data, offset);
      if ( v5 <= 0 )
      {
        LODWORD(v6) = v5;
        bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "client-association", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdrelayassociation.cpp", "bdRelayAssociation::sendDisconnectRequest", 0x443u, "Could not send DISCONNECT_REQUEST to relay: socket sendTo returned [%d].", v6);
      }
    }
    else
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "client-association", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdrelayassociation.cpp", "bdRelayAssociation::sendDisconnectRequest", 0x448u, "Serialization of DISCONNECT_REQUEST message failed.");
    }
    bdGlobalStopwatch::start(&this->m_disconnectResendsTimer);
    bdRelayBasePacket::~bdRelayBasePacket(&v16);
  }
}

/*
==============
bdRelayAssociation::sendInitBind
==============
*/
void bdRelayAssociation::sendInitBind(bdRelayAssociation *this)
{
  unsigned __int8 m_initResends; 
  int v3; 
  __int64 v4; 
  unsigned int v5; 
  unsigned int RoutingID; 
  int v7; 
  unsigned int v8; 
  int v9; 
  int Port; 
  unsigned int offset; 
  __int64 v12; 
  bdRelayInitBind v13; 
  char data[1296]; 

  v12 = -2i64;
  this->m_status = BD_RELAY_ASSOC_STATUS_WAITING_INIT_ACK;
  m_initResends = this->m_initResends;
  this->m_initResends = m_initResends + 1;
  if ( m_initResends >= 5u )
  {
    Port = bdSockAddr::getPort(&this->m_relayAddr.m_address);
    v8 = bdSockAddr::toUInt32(&this->m_relayAddr.m_address);
    RoutingID = bdRelayJoinData::getRoutingID(&this->m_localJoinData);
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "client-association", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdrelayassociation.cpp", "bdRelayAssociation::sendInitBind", 0x3B9u, "Association [%llu:%u]: INIT_BIND retries exceeded, closing. RelayIP [%u:%u]", this->m_relayID, RoutingID, v8, Port);
    this->m_status = BD_RELAY_ASSOC_STATUS_CLOSED;
    this->m_lastError = BD_ASSOC_E_INIT_RETRIES_EXCEEDED;
    bdRelayAssociation::onFailedConnection(this);
    bdRelayAssociation::reset(this);
  }
  else
  {
    v9 = 5;
    v7 = (unsigned __int8)(m_initResends + 1);
    v5 = bdRelayJoinData::getRoutingID(&this->m_localJoinData);
    bdLogMessage(BD_LOG_INFO, "info/", "client-association", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdrelayassociation.cpp", "bdRelayAssociation::sendInitBind", 0x3A1u, "Sending INIT_BIND message to relay for association [%llu:%u] (%u/%u).", this->m_relayID, v5, v7, v9);
    offset = 0;
    bdRelayInitBind::bdRelayInitBind(&v13, &this->m_relayToken, &this->m_clientToken, this->m_clientRandom);
    if ( bdRelayInitBind::serialize(&v13, data, 0x508u, 0, &offset) )
    {
      v3 = this->m_socket->sendTo(this->m_socket, &this->m_relayAddr, data, offset);
      if ( v3 <= 0 )
      {
        LODWORD(v4) = v3;
        bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "client-association", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdrelayassociation.cpp", "bdRelayAssociation::sendInitBind", 0x3ADu, "Could not send INIT_BIND to relay: socket sendTo returned [%d].", v4);
      }
    }
    else
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "client-association", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdrelayassociation.cpp", "bdRelayAssociation::sendInitBind", 0x3B2u, "Serialization of INIT_BIND message failed.");
    }
    bdGlobalStopwatch::start(&this->m_initResendsTimer);
    bdRelayBasePacket::~bdRelayBasePacket(&v13);
  }
}

/*
==============
bdRelayAssociation::sendInitJoin
==============
*/
void bdRelayAssociation::sendInitJoin(bdRelayAssociation *this)
{
  unsigned __int8 m_initResends; 
  unsigned int v3; 
  unsigned int RoutingID; 
  int v5; 
  unsigned int v6; 
  int v7; 
  int Port; 
  unsigned int offset; 
  __int64 v10; 
  bdRelayInitJoin v11; 
  char data[1296]; 

  v10 = -2i64;
  this->m_status = BD_RELAY_ASSOC_STATUS_WAITING_INIT_ACK;
  m_initResends = this->m_initResends;
  this->m_initResends = m_initResends + 1;
  if ( m_initResends >= 5u )
  {
    Port = bdSockAddr::getPort(&this->m_relayAddr.m_address);
    v6 = bdSockAddr::toUInt32(&this->m_relayAddr.m_address);
    RoutingID = bdRelayJoinData::getRoutingID(&this->m_localJoinData);
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "client-association", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdrelayassociation.cpp", "bdRelayAssociation::sendInitJoin", 0x3E2u, "Association [%llu:%u]: INIT_JOIN retries exceeded, closing. RelayIP [%u:%u]", this->m_relayID, RoutingID, v6, Port);
    this->m_status = BD_RELAY_ASSOC_STATUS_CLOSED;
    this->m_lastError = BD_ASSOC_E_INIT_RETRIES_EXCEEDED;
    bdRelayAssociation::onFailedConnection(this);
    bdRelayAssociation::reset(this);
  }
  else
  {
    v7 = 5;
    v5 = (unsigned __int8)(m_initResends + 1);
    v3 = bdRelayJoinData::getRoutingID(&this->m_localJoinData);
    bdLogMessage(BD_LOG_INFO, "info/", "client-association", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdrelayassociation.cpp", "bdRelayAssociation::sendInitJoin", 0x3CAu, "Sending INIT_JOIN message to relay for association [%llu:%u] (%u/%u).", this->m_relayID, v3, v5, v7);
    offset = 0;
    bdRelayInitJoin::bdRelayInitJoin(&v11, &this->m_remoteJoinData, &this->m_clientToken, this->m_clientRandom);
    if ( bdRelayInitJoin::serialize(&v11, data, 0x508u, 0, &offset) )
    {
      if ( this->m_socket->sendTo(this->m_socket, &this->m_relayAddr, data, offset) <= 0 )
        bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "client-association", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdrelayassociation.cpp", "bdRelayAssociation::sendInitJoin", 0x3D6u, "Could not send INIT_JOIN to relay: socket sendTo returned [%d].", this->m_relayID);
    }
    else
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "client-association", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdrelayassociation.cpp", "bdRelayAssociation::sendInitJoin", 0x3DBu, "Serialization of INIT_JOIN message failed.");
    }
    bdGlobalStopwatch::start(&this->m_initResendsTimer);
    bdRelayBasePacket::~bdRelayBasePacket(&v11);
  }
}

/*
==============
bdRelayAssociation::sendKeepAlive
==============
*/
void bdRelayAssociation::sendKeepAlive(bdRelayAssociation *this)
{
  unsigned int routingID; 
  unsigned int Value; 
  unsigned __int64 HiResTimeStamp; 
  int v5; 
  unsigned int v6; 
  unsigned int v7; 
  int v8; 
  unsigned int offset; 
  bdSequenceNumber result; 
  __int64 v11; 
  bdRelayPing v12; 
  char data[1296]; 

  v11 = -2i64;
  offset = 0;
  bdSequenceNumber::operator++(&this->m_clientSeqNum, &result, 0);
  routingID = bdRelayJoinData::getRoutingID(&this->m_localJoinData);
  Value = bdSequenceNumber::getValue(&this->m_clientSeqNum);
  HiResTimeStamp = bdPlatformTiming::getHiResTimeStamp();
  bdRelayPing::bdRelayPing(&v12, HiResTimeStamp, CLIENT, Value, routingID);
  if ( bdRelayPing::serialize(&v12, data, 0x508u, 0, &offset, this->m_clientToServerHmacSecret) )
  {
    v5 = this->m_socket->sendTo(this->m_socket, &this->m_relayAddr, data, offset);
    if ( v5 <= 0 )
    {
      v8 = v5;
      v6 = bdRelayJoinData::getRoutingID(&this->m_localJoinData);
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "client-association", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdrelayassociation.cpp", "bdRelayAssociation::sendKeepAlive", 0x424u, "Could not send PING to relay for association [%llu:%u], socket sendTo returned [%d].", this->m_relayID, v6, v8);
    }
  }
  else
  {
    v7 = bdRelayJoinData::getRoutingID(&this->m_localJoinData);
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "client-association", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdrelayassociation.cpp", "bdRelayAssociation::sendKeepAlive", 0x429u, "Serialization of PING failed for relay [%llu:%u].", this->m_relayID, v7);
  }
  bdGlobalStopwatch::start(&this->m_keepAliveTimer);
  bdRelayBasePacket::~bdRelayBasePacket(&v12);
}

/*
==============
bdRelayAssociation::sendUpgradeRequest
==============
*/
void bdRelayAssociation::sendUpgradeRequest(bdRelayAssociation *this)
{
  unsigned __int8 m_upgradeResends; 
  unsigned int v3; 
  unsigned int Value; 
  int v5; 
  bdRelayAssociationListener *m_listener; 
  __int64 v7; 
  unsigned int v8; 
  unsigned int RoutingID; 
  int v10; 
  unsigned int v11; 
  int v12; 
  int Port; 
  unsigned int offset; 
  bdSequenceNumber result; 
  __int64 v16; 
  bdRelayBindUpgrade v17; 
  char data[1296]; 

  v16 = -2i64;
  this->m_status = BD_RELAY_ASSOC_STATUS_WAITING_UPGRADE;
  m_upgradeResends = this->m_upgradeResends;
  this->m_upgradeResends = m_upgradeResends + 1;
  if ( m_upgradeResends >= 5u )
  {
    Port = bdSockAddr::getPort(&this->m_relayAddr.m_address);
    v11 = bdSockAddr::toUInt32(&this->m_relayAddr.m_address);
    RoutingID = bdRelayJoinData::getRoutingID(&this->m_localJoinData);
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "client-association", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdrelayassociation.cpp", "bdRelayAssociation::sendUpgradeRequest", 0x38Eu, "Association [%llu:%u]: UPGRADE retries exceeded, maintaining as JOIN. RelayIP [%u:%u]", this->m_relayID, RoutingID, v11, Port);
    this->m_lastError = BD_ASSOC_E_UPGRADE_RETRIES_EXCEEDED;
    this->m_status = BD_RELAY_ASSOC_STATUS_OPEN;
    m_listener = this->m_listener;
    if ( m_listener )
      m_listener->onRelayUpgradeFailure(m_listener, this);
  }
  else
  {
    v12 = 5;
    v10 = (unsigned __int8)(m_upgradeResends + 1);
    v8 = bdRelayJoinData::getRoutingID(&this->m_localJoinData);
    bdLogMessage(BD_LOG_INFO, "info/", "client-association", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdrelayassociation.cpp", "bdRelayAssociation::sendUpgradeRequest", 0x374u, "Sending UPGRADE message to relay for association [%llu:%u] (%u/%u).", this->m_relayID, v8, v10, v12);
    offset = 0;
    bdSequenceNumber::operator++(&this->m_clientSeqNum, &result, 0);
    v3 = bdRelayJoinData::getRoutingID(&this->m_localJoinData);
    Value = bdSequenceNumber::getValue(&this->m_clientSeqNum);
    bdRelayBindUpgrade::bdRelayBindUpgrade(&v17, &this->m_relayToken, Value, v3);
    if ( bdRelayBindUpgrade::serialize(&v17, data, 0x508u, 0, &offset, this->m_clientToServerHmacSecret) )
    {
      v5 = this->m_socket->sendTo(this->m_socket, &this->m_relayAddr, data, offset);
      if ( v5 <= 0 )
      {
        LODWORD(v7) = v5;
        bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "client-association", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdrelayassociation.cpp", "bdRelayAssociation::sendUpgradeRequest", 0x382u, "Could not send UPGRADE: socket sendTo returned [%d].", v7);
      }
    }
    else
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "client-association", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdrelayassociation.cpp", "bdRelayAssociation::sendUpgradeRequest", 0x387u, "Serialization of UPGRADE message failed.");
    }
    bdGlobalStopwatch::start(&this->m_upgradeResendsTimer);
    bdRelayBasePacket::~bdRelayBasePacket(&v17);
  }
}

/*
==============
bdRelayAssociation::sendVerify
==============
*/
void bdRelayAssociation::sendVerify(bdRelayAssociation *this)
{
  unsigned __int8 m_verifyResends; 
  const unsigned __int8 *Verification; 
  unsigned int v4; 
  unsigned int Value; 
  int v6; 
  __int64 v7; 
  unsigned int v8; 
  unsigned int RoutingID; 
  int v10; 
  unsigned int v11; 
  int v12; 
  int Port; 
  unsigned int offset; 
  bdSequenceNumber result; 
  __int64 v16; 
  bdRelayVerify v17; 
  char data[1296]; 

  v16 = -2i64;
  this->m_status = BD_RELAY_ASSOC_STATUS_WAITING_ESTABLISHED;
  m_verifyResends = this->m_verifyResends;
  this->m_verifyResends = m_verifyResends + 1;
  if ( m_verifyResends >= 5u )
  {
    Port = bdSockAddr::getPort(&this->m_relayAddr.m_address);
    v11 = bdSockAddr::toUInt32(&this->m_relayAddr.m_address);
    RoutingID = bdRelayJoinData::getRoutingID(&this->m_localJoinData);
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "client-association", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdrelayassociation.cpp", "bdRelayAssociation::sendVerify", 0x40Bu, "Association [%llu:%u]: VERIFY retries exceeded, closing. RelayIP [%u:%u]", this->m_relayID, RoutingID, v11, Port);
    this->m_status = BD_RELAY_ASSOC_STATUS_CLOSED;
    this->m_lastError = BD_ASSOC_E_VERIFY_RETRIES_EXCEEDED;
    bdRelayAssociation::onFailedConnection(this);
    bdRelayAssociation::reset(this);
  }
  else
  {
    v12 = 5;
    v10 = (unsigned __int8)(m_verifyResends + 1);
    v8 = bdRelayJoinData::getRoutingID(&this->m_localJoinData);
    bdLogMessage(BD_LOG_INFO, "info/", "client-association", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdrelayassociation.cpp", "bdRelayAssociation::sendVerify", 0x3F3u, "Sending VERIFY message to relay for association [%llu:%u] (%u/%u).", this->m_relayID, v8, v10, v12);
    offset = 0;
    bdSequenceNumber::operator++(&this->m_clientSeqNum, &result, 0);
    Verification = bdRelayJoinData::getVerification(&this->m_localJoinData);
    v4 = bdRelayJoinData::getRoutingID(&this->m_localJoinData);
    Value = bdSequenceNumber::getValue(&this->m_clientSeqNum);
    bdRelayVerify::bdRelayVerify(&v17, Value, v4, Verification);
    if ( bdRelayVerify::serialize(&v17, data, 0x508u, 0, &offset, this->m_clientToServerHmacSecret) )
    {
      v6 = this->m_socket->sendTo(this->m_socket, &this->m_relayAddr, data, offset);
      if ( v6 <= 0 )
      {
        LODWORD(v7) = v6;
        bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "client-association", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdrelayassociation.cpp", "bdRelayAssociation::sendVerify", 0x400u, "Could not send VERIFY to relay: socket sendTo returned [%d].", v7);
      }
    }
    else
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "client-association", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdrelayassociation.cpp", "bdRelayAssociation::sendVerify", 0x405u, "Serialization of VERIFY message failed.");
    }
    bdGlobalStopwatch::start(&this->m_verifyResendsTimer);
    bdRelayBasePacket::~bdRelayBasePacket(&v17);
  }
}

/*
==============
bdRelayAssociation::setListener
==============
*/
void bdRelayAssociation::setListener(bdRelayAssociation *this, bdRelayAssociationListener *listener)
{
  bdMutex::lock(&this->m_mutex);
  this->m_listener = listener;
  bdMutex::unlock(&this->m_mutex);
}

/*
==============
bdRelayAssociation::setRemoteJoinData
==============
*/
void bdRelayAssociation::setRemoteJoinData(bdRelayAssociation *this, const bdRelayJoinData *joinData)
{
  bdMutex *p_m_mutex; 

  p_m_mutex = &this->m_mutex;
  bdMutex::lock(&this->m_mutex);
  bdRelayJoinData::operator=(&this->m_remoteJoinData, joinData);
  bdMutex::unlock(p_m_mutex);
}

/*
==============
bdRelayAssociation::start
==============
*/
__int64 bdRelayAssociation::start(bdRelayAssociation *this)
{
  bdMutex *p_m_mutex; 
  unsigned __int8 v3; 
  bdTrulyRandomImpl *v4; 
  bdSingletonRegistryImpl *Instance; 
  bdRelayAssociationType m_type; 
  unsigned int RoutingID; 

  p_m_mutex = &this->m_mutex;
  bdMutex::lock(&this->m_mutex);
  bdHandleAssert(this->m_type != BD_ASSOC_TYPE_UNSET, "m_type != BD_ASSOC_TYPE_UNSET", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdrelayassociation.cpp", "bdRelayAssociation::start", 0xBFu, "Cannot start association of type unset.");
  v3 = 1;
  if ( bdRelayAssociation::getStatus(this) )
  {
    RoutingID = bdRelayJoinData::getRoutingID(&this->m_localJoinData);
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "client-association", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdrelayassociation.cpp", "bdRelayAssociation::start", 0xC4u, "Cannot start association [%llu:%u]: it is not closed.", this->m_relayID, RoutingID);
    v3 = 0;
    goto LABEL_14;
  }
  bdRelayAssociationTelemetry::setStartStageTime(&this->m_telemetry);
  if ( !bdSingleton<bdTrulyRandomImpl>::m_instance )
  {
    v4 = (bdTrulyRandomImpl *)bdMemory::allocate(1ui64);
    if ( v4 )
      bdTrulyRandomImpl::bdTrulyRandomImpl(v4);
    bdSingleton<bdTrulyRandomImpl>::m_instance = v4;
    if ( v4 )
    {
      Instance = bdSingleton<bdSingletonRegistryImpl>::getInstance();
      if ( bdSingletonRegistryImpl::add(Instance, bdSingleton<bdTrulyRandomImpl>::destroyInstance) )
        goto LABEL_10;
      bdMemory::deallocate(bdSingleton<bdTrulyRandomImpl>::m_instance);
      bdSingleton<bdTrulyRandomImpl>::m_instance = NULL;
    }
    DebugBreak();
  }
LABEL_10:
  bdTrulyRandomImpl::getRandomUByte8(bdSingleton<bdTrulyRandomImpl>::m_instance, this->m_clientRandom, 0x10u);
  bdLogMessage(BD_LOG_INFO, "info/", "client-association", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdrelayassociation.cpp", "bdRelayAssociation::start", 0xCDu, "Starting bind association to relay [%llu].", this->m_relayID);
  m_type = this->m_type;
  if ( m_type == BD_ASSOC_TYPE_BINDING )
  {
    bdRelayAssociation::sendInitBind(this);
  }
  else if ( m_type == BD_ASSOC_TYPE_JOINING )
  {
    bdRelayAssociation::sendInitJoin(this);
  }
LABEL_14:
  bdMutex::unlock(p_m_mutex);
  return v3;
}

/*
==============
bdRelayAssociation::upgradeToBind
==============
*/
__int64 bdRelayAssociation::upgradeToBind(bdRelayAssociation *this, const bdRelayAuthToken *authToken)
{
  bdMutex *p_m_mutex; 
  unsigned __int8 v5; 
  bdRelayAssociationStatus Status; 
  bdRelayJoinData *p_m_localJoinData; 
  unsigned int v9; 
  unsigned int v10; 
  unsigned int v11; 
  unsigned int RoutingID; 

  p_m_mutex = &this->m_mutex;
  bdMutex::lock(&this->m_mutex);
  v5 = 0;
  Status = bdRelayAssociation::getStatus(this);
  if ( Status == BD_RELAY_STATUS_DISCONNECTED || this->m_type == BD_ASSOC_TYPE_BINDING || this->m_status == BD_RELAY_ASSOC_STATUS_WAITING_UPGRADE )
  {
    RoutingID = bdRelayJoinData::getRoutingID(&this->m_localJoinData);
    bdLogMessage(BD_LOG_WARNING, "warn/", "client-association", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdrelayassociation.cpp", "bdRelayAssociation::upgradeToBind", 0x8Au, "Cannot upgrade association [%llu:%u], invalid state.", this->m_relayID, RoutingID);
  }
  else if ( Status == BD_RELAY_STATUS_CONNECTING )
  {
    p_m_localJoinData = &this->m_localJoinData;
    if ( this->m_upgradeAfterJoin )
    {
      v10 = bdRelayJoinData::getRoutingID(p_m_localJoinData);
      bdLogMessage(BD_LOG_WARNING, "warn/", "client-association", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdrelayassociation.cpp", "bdRelayAssociation::upgradeToBind", 0x97u, "Upgrade already queued on association [%llu:%u].", this->m_relayID, v10);
    }
    else
    {
      v9 = bdRelayJoinData::getRoutingID(p_m_localJoinData);
      bdLogMessage(BD_LOG_INFO, "info/", "client-association", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdrelayassociation.cpp", "bdRelayAssociation::upgradeToBind", 0x90u, "Queuing upgrade for association [%llu:%u]", this->m_relayID, v9);
      this->m_relayToken.operator=(&this->m_relayToken, authToken);
      this->m_upgradeAfterJoin = 1;
      v5 = 1;
    }
  }
  else if ( Status == BD_RELAY_STATUS_CONNECTED )
  {
    v11 = bdRelayJoinData::getRoutingID(&this->m_localJoinData);
    bdLogMessage(BD_LOG_INFO, "info/", "client-association", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdrelayassociation.cpp", "bdRelayAssociation::upgradeToBind", 0x9Cu, "Upgrading association [%llu:%u].", this->m_relayID, v11);
    this->m_relayToken.operator=(&this->m_relayToken, authToken);
    bdRelayAssociation::sendUpgradeRequest(this);
    v5 = 1;
  }
  bdMutex::unlock(p_m_mutex);
  return v5;
}

