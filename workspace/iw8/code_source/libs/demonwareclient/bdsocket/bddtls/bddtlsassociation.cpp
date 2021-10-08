/*
==============
bdDTLSAssociation::connect
==============
*/

void __fastcall bdDTLSAssociation::connect(bdDTLSAssociation *this)
{
  ?connect@bdDTLSAssociation@@QEAAXXZ(this);
}

/*
==============
bdDTLSAssociation::getTelemetry
==============
*/

bdDTLSAssociationTelemetry *__fastcall bdDTLSAssociation::getTelemetry(bdDTLSAssociation *this, bdDTLSAssociationTelemetry *result)
{
  return ?getTelemetry@bdDTLSAssociation@@QEBA?AVbdDTLSAssociationTelemetry@@XZ(this, result);
}

/*
==============
bdDTLSAssociation::~bdDTLSAssociation
==============
*/

void __fastcall bdDTLSAssociation::~bdDTLSAssociation(bdDTLSAssociation *this)
{
  ??1bdDTLSAssociation@@UEAA@XZ(this);
}

/*
==============
bdDTLSAssociation::pump
==============
*/

void __fastcall bdDTLSAssociation::pump(bdDTLSAssociation *this)
{
  ?pump@bdDTLSAssociation@@QEAAXXZ(this);
}

/*
==============
bdDTLSAssociation::handleInit
==============
*/

int __fastcall bdDTLSAssociation::handleInit(bdDTLSAssociation *this, const bdAddr *addr, const void *data, const unsigned int size)
{
  return ?handleInit@bdDTLSAssociation@@IEAAHAEBVbdAddr@@PEBXI@Z(this, addr, data, size);
}

/*
==============
bdDTLSAssociation::sendError
==============
*/

void __fastcall bdDTLSAssociation::sendError(bdDTLSAssociation *this, const bdAddr *addr, const bdSecurityID *secID, const bdDTLSError::bdDTLSErrorType *type)
{
  ?sendError@bdDTLSAssociation@@IEAAXAEBVbdAddr@@AEBVbdSecurityID@@AEBW4bdDTLSErrorType@bdDTLSError@@@Z(this, addr, secID, type);
}

/*
==============
bdDTLSAssociation::updateTelemetry
==============
*/

void __fastcall bdDTLSAssociation::updateTelemetry(bdDTLSAssociation *this)
{
  ?updateTelemetry@bdDTLSAssociation@@QEAAXXZ(this);
}

/*
==============
bdDTLSAssociation::handleError
==============
*/

int __fastcall bdDTLSAssociation::handleError(bdDTLSAssociation *this, const bdAddr *addr, const void *data, const unsigned int size)
{
  return ?handleError@bdDTLSAssociation@@IEAAHAEBVbdAddr@@PEBXI@Z(this, addr, data, size);
}

/*
==============
bdDTLSAssociation::sendCookieAck
==============
*/

void __fastcall bdDTLSAssociation::sendCookieAck(bdDTLSAssociation *this, const bdAddr *addr, const bdDTLSCookieEcho *__formal)
{
  ?sendCookieAck@bdDTLSAssociation@@IEAAXAEBVbdAddr@@AEBVbdDTLSCookieEcho@@@Z(this, addr, __formal);
}

/*
==============
bdDTLSAssociation::handleInitAck
==============
*/

int __fastcall bdDTLSAssociation::handleInitAck(bdDTLSAssociation *this, const bdAddr *addr, const void *data, const unsigned int size)
{
  return ?handleInitAck@bdDTLSAssociation@@IEAAHAEBVbdAddr@@PEBXI@Z(this, addr, data, size);
}

/*
==============
bdDTLSAssociation::getAddrHandle
==============
*/

bdReference<bdAddrHandle> *__fastcall bdDTLSAssociation::getAddrHandle(bdDTLSAssociation *this, bdReference<bdAddrHandle> *result)
{
  return ?getAddrHandle@bdDTLSAssociation@@QEAA?AV?$bdReference@VbdAddrHandle@@@@XZ(this, result);
}

/*
==============
bdDTLSAssociation::verify
==============
*/

bool __fastcall bdDTLSAssociation::verify(bdDTLSAssociation *this, const bdDTLSData *dataPacket)
{
  return ?verify@bdDTLSAssociation@@IEAA_NAEBVbdDTLSData@@@Z(this, dataPacket);
}

/*
==============
bdDTLSAssociation::getLocalSecurityId
==============
*/

const bdSecurityID *__fastcall bdDTLSAssociation::getLocalSecurityId(bdDTLSAssociation *this)
{
  return ?getLocalSecurityId@bdDTLSAssociation@@QEAAPEBVbdSecurityID@@XZ(this);
}

/*
==============
bdDTLSAssociation::getLocalTag
==============
*/

unsigned __int16 __fastcall bdDTLSAssociation::getLocalTag(bdDTLSAssociation *this)
{
  return ?getLocalTag@bdDTLSAssociation@@QEAAGXZ(this);
}

/*
==============
bdDTLSAssociation::sendInitAck
==============
*/

void __fastcall bdDTLSAssociation::sendInitAck(bdDTLSAssociation *this, const bdAddr *addr, const bdDTLSInit *init)
{
  ?sendInitAck@bdDTLSAssociation@@IEAAXAEBVbdAddr@@AEBVbdDTLSInit@@@Z(this, addr, init);
}

/*
==============
bdDTLSAssociation::finalizeTelemetry
==============
*/

void __fastcall bdDTLSAssociation::finalizeTelemetry(bdDTLSAssociation *this)
{
  ?finalizeTelemetry@bdDTLSAssociation@@IEAAXXZ(this);
}

/*
==============
bdDTLSAssociation::sendInit
==============
*/

void __fastcall bdDTLSAssociation::sendInit(bdDTLSAssociation *this)
{
  ?sendInit@bdDTLSAssociation@@IEAAXXZ(this);
}

/*
==============
bdDTLSAssociation::reset
==============
*/

void __fastcall bdDTLSAssociation::reset(bdDTLSAssociation *this)
{
  ?reset@bdDTLSAssociation@@IEAAXXZ(this);
}

/*
==============
bdDTLSAssociation::bdDTLSAssociation
==============
*/

void __fastcall bdDTLSAssociation::bdDTLSAssociation(bdDTLSAssociation *this, bdRoutingLayer *routingLayer, bdSecurityKeyMap *keyMap, bdECCKey *ECCkey, const bdAddr *addr, bdReference<bdAddrHandle> addrHandle, bdReference<bdCommonAddr> localCommonAddr, bdAddressMap *addrMap, float receiveTimeout, const unsigned __int16 cypherSuite)
{
  ??0bdDTLSAssociation@@QEAA@AEAVbdRoutingLayer@@PEAVbdSecurityKeyMap@@PEAVbdECCKey@@AEBVbdAddr@@V?$bdReference@VbdAddrHandle@@@@V?$bdReference@VbdCommonAddr@@@@PEAVbdAddressMap@@MG@Z(this, routingLayer, keyMap, ECCkey, addr, addrHandle, localCommonAddr, addrMap, receiveTimeout, cypherSuite);
}

/*
==============
bdDTLSAssociation::setState
==============
*/

void __fastcall bdDTLSAssociation::setState(bdDTLSAssociation *this, bdDTLSAssociation::bdDTLSStatus status)
{
  ?setState@bdDTLSAssociation@@IEAAXW4bdDTLSStatus@1@@Z(this, status);
}

/*
==============
bdDTLSAssociation::sendCookieEcho
==============
*/

void __fastcall bdDTLSAssociation::sendCookieEcho(bdDTLSAssociation *this, const bdAddr *addr)
{
  ?sendCookieEcho@bdDTLSAssociation@@IEAAXAEBVbdAddr@@@Z(this, addr);
}

/*
==============
bdDTLSAssociation::checkCookieValidity
==============
*/

bool __fastcall bdDTLSAssociation::checkCookieValidity(bdDTLSAssociation *this, const bdAddr *peerAddr, const bdDTLSCookieEcho *cookiePacket)
{
  return ?checkCookieValidity@bdDTLSAssociation@@IEBA_NAEBVbdAddr@@AEBVbdDTLSCookieEcho@@@Z(this, peerAddr, cookiePacket);
}

/*
==============
bdDTLSAssociation::sendTo
==============
*/

int __fastcall bdDTLSAssociation::sendTo(bdDTLSAssociation *this, const bdAddr *addr, const void *data, const unsigned int length)
{
  return ?sendTo@bdDTLSAssociation@@UEAAHAEBVbdAddr@@PEBXI@Z(this, addr, data, length);
}

/*
==============
bdDTLSAssociation::updateAddress
==============
*/

void __fastcall bdDTLSAssociation::updateAddress(bdDTLSAssociation *this, const bdSecurityID *secID, const bdReference<bdCommonAddr> *commonAddr, const bdAddr *addr)
{
  ?updateAddress@bdDTLSAssociation@@IEAAXAEBVbdSecurityID@@AEBV?$bdReference@VbdCommonAddr@@@@AEBVbdAddr@@@Z(this, secID, commonAddr, addr);
}

/*
==============
bdDTLSAssociation::calculateSharedKey
==============
*/

bool __fastcall bdDTLSAssociation::calculateSharedKey(bdDTLSAssociation *this, const unsigned __int8 *const pubKey, const unsigned int keylen, const bdSecurityID *secID)
{
  return ?calculateSharedKey@bdDTLSAssociation@@IEAA_NQEBEIAEBVbdSecurityID@@@Z(this, pubKey, keylen, secID);
}

/*
==============
bdDTLSAssociation::getRealAddr
==============
*/

const bdAddr *__fastcall bdDTLSAssociation::getRealAddr(bdDTLSAssociation *this)
{
  return ?getRealAddr@bdDTLSAssociation@@QEBAAEBVbdAddr@@XZ(this);
}

/*
==============
bdDTLSAssociation::migrate
==============
*/

void __fastcall bdDTLSAssociation::migrate(bdDTLSAssociation *this, const bdReference<bdCommonAddr> *newCommonAddr, const bdAddr *newRealAddr)
{
  ?migrate@bdDTLSAssociation@@QEAAXAEBV?$bdReference@VbdCommonAddr@@@@AEBVbdAddr@@@Z(this, newCommonAddr, newRealAddr);
}

/*
==============
bdDTLSAssociation::makeTag
==============
*/

unsigned __int16 __fastcall bdDTLSAssociation::makeTag(bdDTLSAssociation *this)
{
  return ?makeTag@bdDTLSAssociation@@IEBAGXZ(this);
}

/*
==============
bdDTLSAssociation::handleCookieEcho
==============
*/

int __fastcall bdDTLSAssociation::handleCookieEcho(bdDTLSAssociation *this, const bdAddr *addr, const void *data, const unsigned int size)
{
  return ?handleCookieEcho@bdDTLSAssociation@@IEAAHAEBVbdAddr@@PEBXI@Z(this, addr, data, size);
}

/*
==============
bdDTLSAssociation::receiveFrom
==============
*/

int __fastcall bdDTLSAssociation::receiveFrom(bdDTLSAssociation *this, bdAddr *addr, const void *data, const unsigned int size, bdReference<bdAddrHandle> *addrHandle, void *buffer, const unsigned int bufferSize)
{
  return ?receiveFrom@bdDTLSAssociation@@UEAAHAEAVbdAddr@@PEBXIAEAV?$bdReference@VbdAddrHandle@@@@PEAXI@Z(this, addr, data, size, addrHandle, buffer, bufferSize);
}

/*
==============
bdDTLSAssociation::prepareData
==============
*/

int __fastcall bdDTLSAssociation::prepareData(bdDTLSAssociation *this, const void *data, const unsigned int length, void *outData, const unsigned int outDataSize)
{
  return ?prepareData@bdDTLSAssociation@@QEAAHPEBXIPEAXI@Z(this, data, length, outData, outDataSize);
}

/*
==============
bdDTLSAssociation::handleCookieAck
==============
*/

int __fastcall bdDTLSAssociation::handleCookieAck(bdDTLSAssociation *this, const void *data, const unsigned int size)
{
  return ?handleCookieAck@bdDTLSAssociation@@IEAAHPEBXI@Z(this, data, size);
}

/*
==============
bdDTLSAssociation::getStatus
==============
*/

bdDTLSAssociationStatus __fastcall bdDTLSAssociation::getStatus(bdDTLSAssociation *this)
{
  return ?getStatus@bdDTLSAssociation@@QEAA?AW4bdDTLSAssociationStatus@@XZ(this);
}

/*
==============
bdDTLSAssociation::handleData
==============
*/

int __fastcall bdDTLSAssociation::handleData(bdDTLSAssociation *this, bdAddr *addr, const unsigned __int8 *data, const unsigned int size, bdReference<bdAddrHandle> *addrHandle, const unsigned __int16 vtag, unsigned __int8 *buffer, const unsigned int bufferSize)
{
  return ?handleData@bdDTLSAssociation@@IEAAHAEAVbdAddr@@PEBEIAEAV?$bdReference@VbdAddrHandle@@@@GPEAEI@Z(this, addr, data, size, addrHandle, vtag, buffer, bufferSize);
}

/*
==============
bdDTLSAssociation::sendData
==============
*/

int __fastcall bdDTLSAssociation::sendData(bdDTLSAssociation *this, const bdAddr *addr, const void *data, const unsigned int length)
{
  return ?sendData@bdDTLSAssociation@@IEAAHAEBVbdAddr@@PEBXI@Z(this, addr, data, length);
}

/*
==============
bdDTLSAssociation::bdDTLSAssociation
==============
*/
void bdDTLSAssociation::bdDTLSAssociation(bdDTLSAssociation *this, bdRoutingLayer *routingLayer, bdSecurityKeyMap *keyMap, bdECCKey *ECCkey, const bdAddr *addr, bdReference<bdAddrHandle> addrHandle, bdReference<bdCommonAddr> localCommonAddr, bdAddressMap *addrMap, float receiveTimeout, bdSequenceNumber cypherSuite)
{
  unsigned __int16 m_seqNum; 
  bdCypherAlgorithms CypherFromSuite; 
  bdCypherAlgorithms v13; 
  bdHashAlgorithms HashFromSuite; 
  bdAddrHandle_vtbl *v15; 
  bdCommonAddr_vtbl *v16; 
  bdTrulyRandomImpl *Instance; 

  _RSI = this;
  this->m_refCount.m_value._My_val = 0;
  this->__vftable = (bdDTLSAssociation_vtbl *)&bdDTLSAssociation::`vftable';
  this->m_routingLayer = routingLayer;
  this->m_keyMap = keyMap;
  this->m_ECCKey = ECCkey;
  m_seqNum = cypherSuite.m_seqNum;
  this->m_cypherSuite = cypherSuite.m_seqNum;
  this->m_cypherAlgorithm = bdCypherSuites::getCypherFromSuite(m_seqNum);
  CypherFromSuite = bdCypherSuites::getCypherFromSuite(m_seqNum);
  bdDynamicCypher::bdDynamicCypher(&_RSI->m_sendingCypher, CypherFromSuite);
  v13 = bdCypherSuites::getCypherFromSuite(m_seqNum);
  bdDynamicCypher::bdDynamicCypher(&_RSI->m_receivingCypher, v13);
  _RSI->m_hashAlgorithm = bdCypherSuites::getHashFromSuite(m_seqNum);
  HashFromSuite = bdCypherSuites::getHashFromSuite(m_seqNum);
  bdDynamicHash::bdDynamicHash(&_RSI->m_hash, HashFromSuite);
  bdAddr::bdAddr(&_RSI->m_addr, addr);
  v15 = addrHandle.m_ptr->__vftable;
  _RSI->m_addrHandle.m_ptr = (bdAddrHandle *)addrHandle.m_ptr->__vftable;
  if ( v15 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v15[1], 1u);
  _RSI->m_state = BD_DTLS_CLOSED;
  bdGlobalStopwatch::bdGlobalStopwatch(&_RSI->m_lastReceived);
  bdStopwatch::bdStopwatch(&_RSI->m_initTimer);
  _RSI->m_initResends = 0;
  bdStopwatch::bdStopwatch(&_RSI->m_cookieTimer);
  _RSI->m_cookieResends = 0;
  _RSI->m_localRandom.m_initialized = 0;
  *(_QWORD *)_RSI->m_localRandom.m_dtlsRandom = 0i64;
  *(_QWORD *)&_RSI->m_localRandom.m_dtlsRandom[8] = 0i64;
  *(_QWORD *)&_RSI->m_localRandom.m_dtlsRandom[16] = 0i64;
  *(_QWORD *)&_RSI->m_localRandom.m_dtlsRandom[24] = 0i64;
  _RSI->m_peerRandom.m_initialized = 0;
  *(_QWORD *)_RSI->m_peerRandom.m_dtlsRandom = 0i64;
  *(_QWORD *)&_RSI->m_peerRandom.m_dtlsRandom[8] = 0i64;
  *(_QWORD *)&_RSI->m_peerRandom.m_dtlsRandom[16] = 0i64;
  *(_QWORD *)&_RSI->m_peerRandom.m_dtlsRandom[24] = 0i64;
  bdSequenceNumber::bdSequenceNumber(&_RSI->m_seqNum, -1);
  bdSequenceNumber::bdSequenceNumber(&cypherSuite, -1);
  bdSequenceNumberStore::bdSequenceNumberStore(&_RSI->m_incomingSeqNums, &cypherSuite);
  bdDTLSInitAck::bdDTLSInitAck(&_RSI->m_initAck);
  bdSecurityID::bdSecurityID(&_RSI->m_localId);
  v16 = localCommonAddr.m_ptr->__vftable;
  _RSI->m_localCommonAddr.m_ptr = (bdCommonAddr *)localCommonAddr.m_ptr->__vftable;
  if ( v16 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v16[1], 1u);
  _RSI->m_addrMap = addrMap;
  __asm
  {
    vmovss  xmm0, [rsp+48h+receiveTimeout]
    vmovss  dword ptr [rsi+3A8h], xmm0
  }
  bdDTLSAssociationTelemetry::bdDTLSAssociationTelemetry(&_RSI->m_telemetry);
  bdMutex::bdMutex(&_RSI->m_mutex);
  bdDTLSAssociation::reset(_RSI);
  if ( !bdDTLSAssociation::m_cookieKey.m_initialised )
  {
    Instance = bdSingleton<bdTrulyRandomImpl>::getInstance();
    bdTrulyRandomImpl::getRandomUByte8(Instance, bdDTLSAssociation::m_cookieKey.m_nonce, 0x10u);
    bdDTLSAssociation::m_cookieKey.m_initialised = 1;
  }
  if ( addrHandle.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&addrHandle.m_ptr->__vftable[1], 0xFFFFFFFF) == 1 )
  {
    if ( addrHandle.m_ptr->__vftable )
      (*(void (__fastcall **)(bdAddrHandle_vtbl *, __int64))addrHandle.m_ptr->~bdReferencable)(addrHandle.m_ptr->__vftable, 1i64);
    addrHandle.m_ptr->__vftable = NULL;
  }
  if ( localCommonAddr.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&localCommonAddr.m_ptr->__vftable[1], 0xFFFFFFFF) == 1 )
  {
    if ( localCommonAddr.m_ptr->__vftable )
      (*(void (__fastcall **)(bdCommonAddr_vtbl *, __int64))localCommonAddr.m_ptr->~bdReferencable)(localCommonAddr.m_ptr->__vftable, 1i64);
    localCommonAddr.m_ptr->__vftable = NULL;
  }
}

/*
==============
bdDTLSAssociation::~bdDTLSAssociation
==============
*/
void bdDTLSAssociation::~bdDTLSAssociation(bdDTLSAssociation *this)
{
  bdCommonAddr *m_ptr; 
  bdCommonAddr *v3; 
  bdAddrHandle *v4; 
  bdAddrHandle *v5; 

  this->__vftable = (bdDTLSAssociation_vtbl *)&bdDTLSAssociation::`vftable';
  bdMutex::lock(&this->m_mutex);
  bdDTLSAssociation::finalizeTelemetry(this);
  bdCryptoUtils::zeroBuffer(this->m_sendingIVMaterial, 0x20ui64);
  bdCryptoUtils::zeroBuffer(this->m_receivingIVMaterial, 0x20ui64);
  this->m_ECCKey = NULL;
  this->m_keyMap = NULL;
  bdMutex::unlock(&this->m_mutex);
  bdMutex::~bdMutex(&this->m_mutex);
  m_ptr = this->m_localCommonAddr.m_ptr;
  if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
  {
    v3 = this->m_localCommonAddr.m_ptr;
    if ( v3 )
      ((void (__fastcall *)(bdCommonAddr *, __int64))v3->~bdReferencable)(v3, 1i64);
    this->m_localCommonAddr.m_ptr = NULL;
  }
  bdSecurityID::~bdSecurityID(&this->m_localId);
  bdDTLSInitAck::~bdDTLSInitAck(&this->m_initAck);
  bdCryptoUtils::zeroBuffer(&this->m_peerRandom, 0x20ui64);
  bdCryptoUtils::zeroBuffer(&this->m_localRandom, 0x20ui64);
  v4 = this->m_addrHandle.m_ptr;
  if ( v4 && _InterlockedExchangeAdd((volatile signed __int32 *)&v4->m_refCount, 0xFFFFFFFF) == 1 )
  {
    v5 = this->m_addrHandle.m_ptr;
    if ( v5 )
      ((void (__fastcall *)(bdAddrHandle *, __int64))v5->~bdReferencable)(v5, 1i64);
    this->m_addrHandle.m_ptr = NULL;
  }
  bdDynamicHash::~bdDynamicHash(&this->m_hash);
  bdDynamicCypher::~bdDynamicCypher(&this->m_receivingCypher);
  bdDynamicCypher::~bdDynamicCypher(&this->m_sendingCypher);
  bdReferencable::~bdReferencable(this);
}

/*
==============
bdDTLSAssociation::calculateSharedKey
==============
*/
__int64 bdDTLSAssociation::calculateSharedKey(bdDTLSAssociation *this, const unsigned __int8 *const pubKey, const unsigned int keylen, const bdSecurityID *secID)
{
  const char *v8; 
  bdLogMessageType v9; 
  unsigned int CypherAlgorithmKeySize; 
  unsigned int m_blockSize; 
  bdHash *Hash; 
  bdCypher *Cypher; 
  bdCypher *v16; 
  bdHash *v17; 
  bool v18; 
  bool v19; 
  const unsigned __int8 (*Data)[32]; 
  const unsigned __int8 (*v21)[32]; 
  __int64 v22; 
  unsigned int v23; 
  __int64 v24; 
  unsigned int v25; 
  char v26; 
  const unsigned __int8 (*v27)[32]; 
  const unsigned __int8 (*v28)[32]; 
  __int64 v29; 
  unsigned int v30; 
  __int64 v31; 
  unsigned int v32; 
  bdCypher *v35; 
  bdCypher *v36; 
  char v37; 
  unsigned __int8 v38; 
  unsigned int format; 
  char *v41; 
  unsigned int newOffset; 
  unsigned int offset; 
  __int64 v44; 
  bdSecurityKey key; 
  unsigned __int8 inSecret[32]; 
  __int64 dest[8]; 
  int v48; 
  unsigned __int8 inMessages[8]; 
  __int64 v50; 
  __int64 v51; 
  __int64 v52; 
  __int64 v53; 
  __int64 v54; 
  __int64 v55; 
  __int64 v56; 
  int v57; 
  unsigned __int8 inSalt[32]; 
  unsigned __int8 secretBuffer[28]; 
  unsigned __int8 outBuffer[32]; 
  unsigned __int8 v62[32]; 
  unsigned __int8 outPRK[32]; 
  unsigned __int8 buffer[32]; 
  unsigned __int8 v65[32]; 
  unsigned __int8 v66[32]; 
  unsigned __int8 v67[32]; 
  unsigned __int8 v68[32]; 

  v44 = -2i64;
  _RDI = this;
  bdSecurityKey::bdSecurityKey(&key);
  if ( !bdSecurityKeyMap::get(_RDI->m_keyMap, secID, &key) )
  {
    v41 = "bdDTLSAssociation: secID not in m_keyMap";
    format = 1353;
LABEL_3:
    v8 = "warn/";
    v9 = BD_LOG_WARNING;
LABEL_48:
    bdLogMessage(v9, v8, "bdSocket/dtls", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bddtlsassociation.cpp", "bdDTLSAssociation::calculateSharedKey", format, v41);
    goto LABEL_49;
  }
  if ( !bdECCKey::generateSharedSecret(_RDI->m_ECCKey, pubKey, keylen, secretBuffer, 0x2Cu) )
  {
    v41 = "bdDTLSAssociation: Couldn't generate shared secret";
    format = 1364;
    goto LABEL_3;
  }
  memset(inSecret, 0, sizeof(inSecret));
  CypherAlgorithmKeySize = bdCryptoDynamic::getCypherAlgorithmKeySize((bdCypherAlgorithms)_RDI->m_cypherAlgorithm);
  m_blockSize = bdDynamicCypher::getCypher(&_RDI->m_sendingCypher)->m_blockSize;
  bdHandleAssert(CypherAlgorithmKeySize <= 0x20, "cypherKeySize <= BD_DTLS_SECRET_SIZE", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bddtlsassociation.cpp", "bdDTLSAssociation::calculateSharedKey", 0x55Fu, "bdDTLSAssociation: cypherKeySize too large");
  bdHandleAssert(m_blockSize <= 0x20, "cypherBlockSize <= BD_DTLS_SECRET_SIZE", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bddtlsassociation.cpp", "bdDTLSAssociation::calculateSharedKey", 0x560u, "bdDTLSAssociation: cypherBlockSize too large");
  if ( BD_DTLS_VERSION == 2 )
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rsp+2C0h+key.ab]
      vmovups [rbp+1C0h+var_164], xmm0
    }
    newOffset = 32;
    Hash = bdDynamicHash::getHash(&_RDI->m_hash);
    if ( !Hash->hash(Hash, secretBuffer, 44u, inSecret, &newOffset) )
    {
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/dtls", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bddtlsassociation.cpp", "bdDTLSAssociation::calculateSharedKey", 0x56Fu, "bdDTLSAssociation: Unable to hash the shared secret");
LABEL_49:
      v38 = 0;
      goto LABEL_50;
    }
    bdCryptoUtils::zeroBuffer(secretBuffer, 0x2Cui64);
    __asm
    {
      vmovups ymm0, ymmword ptr [rsp+2C0h+inSecret]
      vmovups ymmword ptr [rdi+120h], ymm0
      vmovups ymmword ptr [rdi+140h], ymm0
    }
    Cypher = bdDynamicCypher::getCypher(&_RDI->m_sendingCypher);
    if ( !Cypher->init(Cypher, inSecret, CypherAlgorithmKeySize) || (v16 = bdDynamicCypher::getCypher(&_RDI->m_receivingCypher), !v16->init(v16, inSecret, CypherAlgorithmKeySize)) )
    {
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/dtls", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bddtlsassociation.cpp", "bdDTLSAssociation::calculateSharedKey", 0x57Fu, "bdDTLSAssociation: Cypher->init() failed");
LABEL_45:
      bdCryptoUtils::zeroBuffer(inSecret, 0x20ui64);
      goto LABEL_49;
    }
  }
  else
  {
    if ( BD_DTLS_VERSION < 3u )
    {
      v41 = "bdDTLSAssociation: Unknown BD_DTLS_VERSION";
      format = 1552;
      v8 = (const char *)&other;
      v9 = BD_LOG_ERROR;
      goto LABEL_48;
    }
    v17 = bdDynamicHash::getHash(&_RDI->m_hash);
    bdHandleAssert(v17->m_digestSize == 32, "hashSize == BD_SHA256_HASH_SIZE", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bddtlsassociation.cpp", "bdDTLSAssociation::calculateSharedKey", 0x5A3u, "bdDTLSAssociation: DTLS_V3 only SHA256 HKDF is supported");
    memset(inSalt, 0, sizeof(inSalt));
    v18 = bdCryptoUtils::hkdfExtractSHA256((const unsigned __int8 (*)[32])inSalt, key.ab, 0x10u, (unsigned __int8 (*)[32])outPRK) && bdCryptoUtils::hkdfExtractSHA256((const unsigned __int8 (*)[32])outPRK, secretBuffer, 0x1Cu, (unsigned __int8 (*)[32])buffer);
    bdCryptoUtils::zeroBuffer(secretBuffer, 0x2Cui64);
    v19 = v18 && bdCryptoUtils::hkdfExtractSHA256((const unsigned __int8 (*)[32])buffer, inSalt, 0x20u, (unsigned __int8 (*)[32])inSecret);
    offset = 0;
    memset(dest, 0, sizeof(dest));
    v48 = 0;
    if ( !v19 )
      goto LABEL_30;
    Data = bdDTLSRandom::getData(&_RDI->m_peerRandom);
    if ( !bdBytePacker::appendBuffer(dest, 0x44u, offset, &offset, Data, 0x20u) )
      goto LABEL_30;
    v21 = bdDTLSRandom::getData(&_RDI->m_localRandom);
    if ( !bdBytePacker::appendBuffer(dest, 0x44u, offset, &offset, v21, 0x20u) )
      goto LABEL_30;
    v22 = offset;
    v23 = offset + 2;
    offset = v23;
    bdHandleAssert(v23 <= 0x44, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 2i64);
    if ( v23 > 0x44 )
      goto LABEL_30;
    *(_WORD *)((char *)dest + v22) = _RDI->m_peerTag;
    v24 = offset;
    v25 = offset + 2;
    offset = v25;
    bdHandleAssert(v25 <= 0x44, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 2i64);
    if ( v25 <= 0x44 && (*(_WORD *)((char *)dest + v24) = _RDI->m_localTag, bdDTLSUtils::deriveSecret((const unsigned __int8 (*)[32])inSecret, "nN<0dtEg1xrlhp8OS18Uuu=0YxuM2zk2!", (const unsigned __int8 *)dest, 0x44u, (unsigned __int8 (*)[32])outBuffer)) && bdDTLSUtils::hkdfExpandLabel((const unsigned __int8 (*)[32])outBuffer, "VI)", NULL, 0, v65, CypherAlgorithmKeySize) && bdDTLSUtils::hkdfExpandLabel((const unsigned __int8 (*)[32])outBuffer, "ti", NULL, 0, v67, 0x20u) )
      v26 = 1;
    else
LABEL_30:
      v26 = 0;
    newOffset = 0;
    *(_QWORD *)inMessages = 0i64;
    v50 = 0i64;
    v51 = 0i64;
    v52 = 0i64;
    v53 = 0i64;
    v54 = 0i64;
    v55 = 0i64;
    v56 = 0i64;
    v57 = 0;
    if ( !v26 )
      goto LABEL_42;
    v27 = bdDTLSRandom::getData(&_RDI->m_localRandom);
    if ( !bdBytePacker::appendBuffer(inMessages, 0x44u, newOffset, &newOffset, v27, 0x20u) )
      goto LABEL_42;
    v28 = bdDTLSRandom::getData(&_RDI->m_peerRandom);
    if ( !bdBytePacker::appendBuffer(inMessages, 0x44u, newOffset, &newOffset, v28, 0x20u) )
      goto LABEL_42;
    v29 = newOffset;
    v30 = newOffset + 2;
    newOffset = v30;
    bdHandleAssert(v30 <= 0x44, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 2i64);
    if ( v30 > 0x44 )
      goto LABEL_42;
    *(_WORD *)&inMessages[v29] = _RDI->m_localTag;
    v31 = newOffset;
    v32 = newOffset + 2;
    newOffset = v32;
    bdHandleAssert(v32 <= 0x44, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 2i64);
    if ( v32 > 0x44 )
      goto LABEL_42;
    *(_WORD *)&inMessages[v31] = _RDI->m_peerTag;
    if ( !bdDTLSUtils::deriveSecret((const unsigned __int8 (*)[32])inSecret, "nN<0dtEg1xrlhp8OS18Uuu=0YxuM2zk2!", inMessages, 0x44u, (unsigned __int8 (*)[32])v62) )
      goto LABEL_42;
    if ( !bdDTLSUtils::hkdfExpandLabel((const unsigned __int8 (*)[32])v62, "VI)", NULL, 0, v66, CypherAlgorithmKeySize) )
      goto LABEL_42;
    if ( !bdDTLSUtils::hkdfExpandLabel((const unsigned __int8 (*)[32])v62, "ti", NULL, 0, v68, 0x20u) )
      goto LABEL_42;
    __asm
    {
      vmovups ymm0, ymmword ptr [rbp+1C0h+var_90]
      vmovups ymmword ptr [rdi+120h], ymm0
      vmovups ymm1, ymmword ptr [rbp+1C0h+var_70]
      vmovups ymmword ptr [rdi+140h], ymm1
    }
    v35 = bdDynamicCypher::getCypher(&_RDI->m_sendingCypher);
    if ( !v35->init(v35, v65, CypherAlgorithmKeySize) )
      goto LABEL_42;
    v36 = bdDynamicCypher::getCypher(&_RDI->m_receivingCypher);
    if ( v36->init(v36, v66, CypherAlgorithmKeySize) )
      v37 = 1;
    else
LABEL_42:
      v37 = 0;
    bdCryptoUtils::zeroBuffer(outPRK, 0x20ui64);
    bdCryptoUtils::zeroBuffer(buffer, 0x20ui64);
    bdCryptoUtils::zeroBuffer(dest, 0x44ui64);
    bdCryptoUtils::zeroBuffer(inMessages, 0x44ui64);
    bdCryptoUtils::zeroBuffer(outBuffer, 0x20ui64);
    bdCryptoUtils::zeroBuffer(v62, 0x20ui64);
    bdCryptoUtils::zeroBuffer(v65, 0x20ui64);
    bdCryptoUtils::zeroBuffer(v66, 0x20ui64);
    bdCryptoUtils::zeroBuffer(v67, 0x20ui64);
    bdCryptoUtils::zeroBuffer(v68, 0x20ui64);
    if ( !v37 )
    {
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/dtls", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bddtlsassociation.cpp", "bdDTLSAssociation::calculateSharedKey", 0x609u, "bdDTLSAssociation: Cypher->init() failed");
      goto LABEL_45;
    }
  }
  bdCryptoUtils::zeroBuffer(secretBuffer, 0x2Cui64);
  bdCryptoUtils::zeroBuffer(inSecret, 0x20ui64);
  v38 = 1;
LABEL_50:
  bdSecurityKey::~bdSecurityKey(&key);
  return v38;
}

/*
==============
bdDTLSAssociation::checkCookieValidity
==============
*/
bool bdDTLSAssociation::checkCookieValidity(bdDTLSAssociation *this, const bdAddr *peerAddr, const bdDTLSCookieEcho *cookiePacket)
{
  unsigned int LoResTimeStamp; 
  bdDTLSInitAck *Cookie; 
  unsigned int Timestamp; 
  unsigned int LoResElapsedTime; 
  bdDTLSInitAck *v10; 
  bdAddr *v11; 
  bdDTLSInitAck *v12; 
  bool v13; 
  bdDTLSAssociationTelemetry::bdDTLSAssociationState v15; 
  bdDynamicHMAC v16; 

  LoResTimeStamp = bdPlatformTiming::getLoResTimeStamp();
  Cookie = (bdDTLSInitAck *)bdDTLSCookieEcho::getCookie((bdDTLSCookieEcho *)cookiePacket);
  Timestamp = bdDTLSInitAck::getTimestamp(Cookie);
  LoResElapsedTime = bdPlatformTiming::getLoResElapsedTime(Timestamp, LoResTimeStamp);
  if ( LoResElapsedTime >= 0xE10 )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/dtls", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bddtlsassociation.cpp", "bdDTLSAssociation::checkCookieValidity", 0x68Bu, "bdDTLSAssociation: Cookie expired. Age: %us", LoResElapsedTime);
    v15 = 53;
    goto LABEL_8;
  }
  v10 = (bdDTLSInitAck *)bdDTLSCookieEcho::getCookie((bdDTLSCookieEcho *)cookiePacket);
  v11 = (bdAddr *)bdDTLSInitAck::getPeerAddr(v10);
  if ( !bdSockAddr::compare(&v11->m_address, &peerAddr->m_address, 1) )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/dtls", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bddtlsassociation.cpp", "bdDTLSAssociation::checkCookieValidity", 0x685u, "bdDTLSAssociation: Wrong peer address");
    v15 = 52;
LABEL_8:
    bdDTLSAssociationTelemetry::setState(&this->m_telemetry, v15);
    return 0;
  }
  bdHandleAssert(bdDTLSAssociation::m_cookieKey.m_initialised, "m_initialised", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdnonce.inl", "bdNonce<16>::getData", 0x26u, "Attempted to retrieve a nonce without initialising it first");
  bdDynamicHMAC::bdDynamicHMAC(&v16, this->m_hashAlgorithm, bdDTLSAssociation::m_cookieKey.m_nonce, 0x10u);
  v12 = (bdDTLSInitAck *)bdDTLSCookieEcho::getCookie((bdDTLSCookieEcho *)cookiePacket);
  bdHandleAssert(v16.m_hmac != NULL, "(m_hmac != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcryptodynamic.h", "bdDynamicHMAC::getHMAC", 0xB9u, "HMac Object is NULL");
  v13 = bdDTLSInitAck::verify(v12, v16.m_hmac);
  if ( !v13 )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/dtls", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bddtlsassociation.cpp", "bdDTLSAssociation::checkCookieValidity", 0x67Du, "bdDTLSAssociation: HMac Verification failed.");
    bdDTLSAssociationTelemetry::setState(&this->m_telemetry, (const bdDTLSAssociationTelemetry::bdDTLSAssociationState)51);
  }
  bdDynamicHMAC::~bdDynamicHMAC(&v16);
  return v13;
}

/*
==============
bdDTLSAssociation::connect
==============
*/
void bdDTLSAssociation::connect(bdDTLSAssociation *this)
{
  bdMutex *p_m_mutex; 

  p_m_mutex = &this->m_mutex;
  bdMutex::lock(&this->m_mutex);
  bdDTLSAssociation::sendInit(this);
  this->m_state = BD_DTLS_COOKIE_WAIT;
  bdMutex::unlock(p_m_mutex);
}

/*
==============
bdDTLSAssociation::finalizeTelemetry
==============
*/
void bdDTLSAssociation::finalizeTelemetry(bdDTLSAssociation *this)
{
  const bdAddr *v2; 
  bdSequenceNumber *LastSequenceNumber; 
  int Value; 
  int v5; 
  bdAddr v6; 

  if ( this->m_telemetry.m_telemetryPending )
  {
    bdDTLSAssociationTelemetry::setLifetime(&this->m_telemetry);
    bdAddr::bdAddr(&v6, &this->m_addr);
    bdDTLSAssociationTelemetry::setPeerAddr(&this->m_telemetry, v2);
    bdDTLSAssociationTelemetry::setInitResends(&this->m_telemetry, this->m_initResends);
    bdDTLSAssociationTelemetry::setCookieResends(&this->m_telemetry, this->m_cookieResends);
    LastSequenceNumber = (bdSequenceNumber *)bdSequenceNumberStore::getLastSequenceNumber(&this->m_incomingSeqNums);
    Value = bdSequenceNumber::getValue(LastSequenceNumber);
    v5 = bdSequenceNumber::getValue(&this->m_seqNum);
    bdDTLSAssociationTelemetry::setSeqNums(&this->m_telemetry, v5, Value);
    bdTelemetry::addDTLSAssociation(&this->m_telemetry);
    this->m_telemetry.m_telemetryPending = 0;
  }
}

/*
==============
bdDTLSAssociation::getAddrHandle
==============
*/
bdReference<bdAddrHandle> *bdDTLSAssociation::getAddrHandle(bdDTLSAssociation *this, bdReference<bdAddrHandle> *result)
{
  bdAddrHandle *m_ptr; 

  m_ptr = this->m_addrHandle.m_ptr;
  result->m_ptr = m_ptr;
  if ( m_ptr )
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
  return result;
}

/*
==============
bdDTLSAssociation::getLocalSecurityId
==============
*/
bdSecurityID *bdDTLSAssociation::getLocalSecurityId(bdDTLSAssociation *this)
{
  return &this->m_localId;
}

/*
==============
bdDTLSAssociation::getLocalTag
==============
*/
__int64 bdDTLSAssociation::getLocalTag(bdDTLSAssociation *this)
{
  return this->m_localTag;
}

/*
==============
bdDTLSAssociation::getRealAddr
==============
*/
bdAddr *bdDTLSAssociation::getRealAddr(bdDTLSAssociation *this)
{
  return &this->m_addrHandle.m_ptr->m_realAddr;
}

/*
==============
bdDTLSAssociation::getStatus
==============
*/
__int64 bdDTLSAssociation::getStatus(bdDTLSAssociation *this)
{
  unsigned int v2; 
  bdMutex *p_m_mutex; 
  bdDTLSAssociation::bdDTLSStatus m_state; 
  bdCommonAddr *m_ptr; 
  bdReference<bdCommonAddr> addr; 
  bdMutex *v8; 
  __int64 v9; 
  char buf[1024]; 

  v9 = -2i64;
  v2 = 3;
  p_m_mutex = &this->m_mutex;
  v8 = &this->m_mutex;
  bdMutex::lock(&this->m_mutex);
  m_state = this->m_state;
  if ( m_state )
  {
    if ( m_state <= BD_DTLS_CLOSED )
      goto LABEL_7;
    if ( m_state <= BD_DTLS_COOKIE_ECHOED )
    {
      v2 = 1;
      goto LABEL_10;
    }
    if ( m_state == BD_DTLS_ESTABLISHED )
    {
      v2 = 2;
    }
    else
    {
LABEL_7:
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdSocket/dtls", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bddtlsassociation.cpp", "bdDTLSAssociation::getStatus", 0x73u, "DTLS getStatus(): Bad state!");
      m_ptr = this->m_addrHandle.m_ptr->m_endpoint.m_ca.m_ptr;
      addr.m_ptr = m_ptr;
      if ( m_ptr )
      {
        _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
        p_m_mutex = v8;
      }
      bdCommonAddrInfo::getBriefInfo((const bdReference<bdCommonAddr>)&addr, buf, 0x400u);
      bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/dtls", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bddtlsassociation.cpp", "bdDTLSAssociation::getStatus", 0x76u, buf);
    }
  }
LABEL_10:
  bdMutex::unlock(p_m_mutex);
  return v2;
}

/*
==============
bdDTLSAssociation::getTelemetry
==============
*/
bdDTLSAssociationTelemetry *bdDTLSAssociation::getTelemetry(bdDTLSAssociation *this, bdDTLSAssociationTelemetry *result)
{
  bdMutex *p_m_mutex; 

  p_m_mutex = &this->m_mutex;
  bdMutex::lock(&this->m_mutex);
  result->m_lastState = this->m_telemetry.m_lastState;
  result->m_lifetimeMs = this->m_telemetry.m_lifetimeMs;
  result->m_stageInitMsSinceStart = this->m_telemetry.m_stageInitMsSinceStart;
  result->m_stageInitAckMsSinceStart = this->m_telemetry.m_stageInitAckMsSinceStart;
  result->m_stageCookieEchoMsSinceStart = this->m_telemetry.m_stageCookieEchoMsSinceStart;
  result->m_stageCookieAckMsSinceStart = this->m_telemetry.m_stageCookieAckMsSinceStart;
  result->m_establishedMsSinceStart = this->m_telemetry.m_establishedMsSinceStart;
  bdAddr::bdAddr(&result->m_peerAddr, &this->m_telemetry.m_peerAddr);
  result->m_initResends = this->m_telemetry.m_initResends;
  result->m_cookieResends = this->m_telemetry.m_cookieResends;
  result->m_sendSeqNum = this->m_telemetry.m_sendSeqNum;
  result->m_recvSeqNum = this->m_telemetry.m_recvSeqNum;
  result->m_telemetryPending = this->m_telemetry.m_telemetryPending;
  result->m_age.m_start = this->m_telemetry.m_age.m_start;
  bdMutex::unlock(p_m_mutex);
  return result;
}

/*
==============
bdDTLSAssociation::handleCookieAck
==============
*/
__int64 bdDTLSAssociation::handleCookieAck(bdDTLSAssociation *this, const void *data, const unsigned int size)
{
  bdDTLSAssociation::bdDTLSStatus m_state; 
  bdDTLSAssociationTelemetry::bdDTLSAssociationState v7; 
  const unsigned __int8 *ECCKey; 
  bdDTLSAssociationTelemetry *p_m_telemetry; 
  bdDTLSAssociationTelemetry::bdDTLSAssociationState v10; 
  bdDTLSAssociation::bdDTLSStatus v12; 
  unsigned int newOffset; 
  __int64 v14; 
  bdSecurityID secID; 
  bdDTLSCookieAck v16; 
  char str[24]; 

  v14 = -2i64;
  bdDTLSCookieAck::bdDTLSCookieAck(&v16);
  if ( !bdDTLSCookieAck::deserialize(&v16, data, size, 0, &newOffset) )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/dtls", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bddtlsassociation.cpp", "bdDTLSAssociation::handleCookieAck", 0x347u, "Handle DTLS CookieAck: Failed to deserialize CookieAck. Ignoring");
    v10 = 26;
    goto LABEL_16;
  }
  if ( v16.m_vtag != this->m_localTag )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/dtls", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bddtlsassociation.cpp", "bdDTLSAssociation::handleCookieAck", 0x341u, "Handle DTLS CookieAck: Received CookieAck with invalid vtag. Ignoring");
    v10 = 25;
LABEL_16:
    p_m_telemetry = &this->m_telemetry;
    bdDTLSAssociationTelemetry::setState(p_m_telemetry, v10);
    goto LABEL_17;
  }
  bdSecurityID::bdSecurityID(&secID);
  bdDTLSCookieAck::getSecID(&v16, &secID);
  m_state = this->m_state;
  if ( m_state >= BD_DTLS_CLOSED )
  {
    if ( m_state <= BD_DTLS_COOKIE_WAIT )
    {
      v12 = this->m_state;
      bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/dtls", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bddtlsassociation.cpp", "bdDTLSAssociation::handleCookieAck", 0x31Du, "Handle DTLS CookieAck: Received cookie ack when in unexpected state[%u]", v12);
      v7 = 23;
      goto LABEL_12;
    }
    if ( m_state == BD_DTLS_COOKIE_ECHOED )
    {
      ECCKey = bdDTLSCookieAck::getECCKey(&v16);
      if ( bdDTLSAssociation::calculateSharedKey(this, ECCKey, 0x64u, &secID) )
      {
        bdGlobalStopwatch::start(&this->m_lastReceived);
        this->m_state = BD_DTLS_ESTABLISHED;
        bdDTLSAssociationTelemetry::setEstablishedTime(&this->m_telemetry);
        bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/dtls", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bddtlsassociation.cpp", "bdDTLSAssociation::handleCookieAck", 0x327u, "Handle DTLS CookieAck: Handled. DTLS established");
        this->m_localId = secID;
        v7 = 28;
      }
      else
      {
        bdAddr::toString(&this->m_addr, str, 0x16ui64);
        bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/dtls", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bddtlsassociation.cpp", "bdDTLSAssociation::handleCookieAck", 0x331u, "Handle DTLS CookieAck: Failed to calculate shared key for[%s]", str);
        v7 = 24;
      }
      goto LABEL_12;
    }
    if ( m_state == BD_DTLS_ESTABLISHED )
    {
      bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/dtls", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bddtlsassociation.cpp", "bdDTLSAssociation::handleCookieAck", 0x339u, "Handle DTLS CookieAck: Received CookieAck for already established DTLS. Ignoring");
      v7 = 27;
LABEL_12:
      bdDTLSAssociationTelemetry::setState(&this->m_telemetry, v7);
    }
  }
  bdSecurityID::~bdSecurityID(&secID);
  p_m_telemetry = &this->m_telemetry;
LABEL_17:
  bdDTLSAssociationTelemetry::setCookieAckStageTime(p_m_telemetry);
  bdDTLSCookieAck::~bdDTLSCookieAck(&v16);
  return 4294967294i64;
}

/*
==============
bdDTLSAssociation::handleCookieEcho
==============
*/
__int64 bdDTLSAssociation::handleCookieEcho(bdDTLSAssociation *this, const bdAddr *addr, const void *data, const unsigned int size)
{
  bdDTLSInitAck *Cookie; 
  unsigned __int16 LocalTag; 
  bdDTLSInitAck *v10; 
  unsigned __int16 PeerTag; 
  bdDTLSInitAck *v12; 
  bdDTLSInitAck *v13; 
  bdDTLSInitAck *v14; 
  bdDTLSInitAck *v16; 
  bdCommonAddr *v17; 
  bdCommonAddr *v18; 
  bdCommonAddr *v19; 
  const unsigned __int8 *Ca; 
  bdCommonAddr *m_ptr; 
  bool v24; 
  unsigned __int16 m_localTag; 
  unsigned __int16 m_peerTag; 
  bdDTLSError::bdDTLSErrorType *p_type; 
  bdDTLSAssociationTelemetry::bdDTLSAssociationState v28; 
  const unsigned __int8 *v32; 
  const unsigned __int8 *v36; 
  bdDTLSAssociationTelemetry *v37; 
  const unsigned __int8 *v41; 
  bdDTLSAssociationTelemetry *p_m_telemetry; 
  const unsigned __int8 *ECCKey; 
  unsigned int expectedCypherSuite; 
  unsigned __int16 LocalTieTag; 
  unsigned __int16 PeerTieTag; 
  bdReference<bdCommonAddr> commonAddr; 
  const bdDTLSRandom *PeerRandom; 
  bdReference<bdCommonAddr> me; 
  bdDTLSError::bdDTLSErrorType type; 
  int v55; 
  bdDTLSError::bdDTLSErrorType v56; 
  int v57; 
  unsigned int newOffset; 
  __int64 v59; 
  bdSecurityID id; 
  bdDTLSCookieEcho cookiePacket; 

  v59 = -2i64;
  _RSI = this;
  bdDTLSCookieEcho::bdDTLSCookieEcho(&cookiePacket);
  if ( !bdDTLSCookieEcho::deserialize(&cookiePacket, data, size, 0, &newOffset, _RSI->m_cypherSuite) )
  {
LABEL_65:
    bdDTLSAssociationTelemetry::setCookieEchoStageTime(&_RSI->m_telemetry);
    goto LABEL_66;
  }
  if ( bdDTLSAssociation::checkCookieValidity(_RSI, addr, &cookiePacket) )
  {
    Cookie = (bdDTLSInitAck *)bdDTLSCookieEcho::getCookie(&cookiePacket);
    LocalTag = bdDTLSInitAck::getLocalTag(Cookie);
    v10 = (bdDTLSInitAck *)bdDTLSCookieEcho::getCookie(&cookiePacket);
    PeerTag = bdDTLSInitAck::getPeerTag(v10);
    v12 = (bdDTLSInitAck *)bdDTLSCookieEcho::getCookie(&cookiePacket);
    LocalTieTag = bdDTLSInitAck::getLocalTieTag(v12);
    v13 = (bdDTLSInitAck *)bdDTLSCookieEcho::getCookie(&cookiePacket);
    PeerTieTag = bdDTLSInitAck::getPeerTieTag(v13);
    v14 = (bdDTLSInitAck *)bdDTLSCookieEcho::getCookie(&cookiePacket);
    _R13 = bdDTLSInitAck::getLocalRandom(v14);
    v16 = (bdDTLSInitAck *)bdDTLSCookieEcho::getCookie(&cookiePacket);
    PeerRandom = bdDTLSInitAck::getPeerRandom(v16);
    bdSecurityID::bdSecurityID(&id);
    v17 = (bdCommonAddr *)bdMemory::allocate(0x4E0ui64);
    me.m_ptr = v17;
    if ( v17 )
    {
      bdCommonAddr::bdCommonAddr(v17);
      v19 = v18;
    }
    else
    {
      v19 = NULL;
    }
    commonAddr.m_ptr = v19;
    if ( v19 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v19->m_refCount, 1u);
    _RAX = bdDTLSCookieEcho::getSecID(&cookiePacket);
    __asm
    {
      vmovsd  xmm0, qword ptr [rax]
      vmovsd  qword ptr [rbp+1E0h+id.ab], xmm0
    }
    Ca = bdDTLSCookieEcho::getCa(&cookiePacket);
    m_ptr = _RSI->m_localCommonAddr.m_ptr;
    me.m_ptr = m_ptr;
    if ( m_ptr )
      _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
    v24 = bdCommonAddr::deserialize(v19, (bdReference<bdCommonAddr>)&me, Ca);
    if ( !v24 )
      goto LABEL_60;
    if ( _RSI->m_state == BD_DTLS_CLOSED )
    {
      _RSI->m_localTag = LocalTag;
      _RSI->m_peerTag = PeerTag;
      if ( BD_DTLS_VERSION >= 3u )
      {
        __asm
        {
          vmovups ymm0, ymmword ptr [r13+0]
          vmovups ymmword ptr [rsi+226h], ymm0
        }
        _RSI->m_localRandom.m_initialized = 1;
        _RAX = PeerRandom;
        __asm
        {
          vmovups ymm0, ymmword ptr [rax]
          vmovups ymmword ptr [rsi+247h], ymm0
        }
        _RSI->m_peerRandom.m_initialized = 1;
      }
      if ( !bdSecurityKeyMap::contains(_RSI->m_keyMap, &id) )
      {
        bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/dtls", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bddtlsassociation.cpp", "bdDTLSAssociation::handleCookieEcho", 0x1ECu, "Handle DTLS CookieEcho: secID not in keymap");
        v57 = 0;
        p_type = (bdDTLSError::bdDTLSErrorType *)&v57;
        goto LABEL_19;
      }
      ECCKey = bdDTLSCookieEcho::getECCKey(&cookiePacket);
      if ( bdDTLSAssociation::calculateSharedKey(_RSI, ECCKey, 0x64u, &id) )
      {
        bdHandleAssert(_RSI->m_addrHandle.m_ptr == NULL, "m_addrHandle.isNull()", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bddtlsassociation.cpp", "bdDTLSAssociation::handleCookieEcho", 0x1F6u, "Address handle expected to be null when DTLS closed");
        bdDTLSAssociation::updateAddress(_RSI, &id, &commonAddr, addr);
        bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/dtls", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bddtlsassociation.cpp", "bdDTLSAssociation::handleCookieEcho", 0x1FBu, "Handle DTLS CookieEcho: Handling CookieEcho (Expected) m_localTag/m_peerTag: %X/%X", _RSI->m_localTag, _RSI->m_peerTag);
        bdDTLSAssociation::sendCookieAck(_RSI, addr, &cookiePacket);
        _RSI->m_state = BD_DTLS_ESTABLISHED;
        bdDTLSAssociationTelemetry::setEstablishedTime(&_RSI->m_telemetry);
        bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/dtls", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bddtlsassociation.cpp", "bdDTLSAssociation::handleCookieEcho", 0x1FFu, "Handle DTLS CookieEcho: DTLS established");
        goto LABEL_24;
      }
      expectedCypherSuite = 521;
      goto LABEL_56;
    }
    m_localTag = _RSI->m_localTag;
    m_peerTag = _RSI->m_peerTag;
    if ( m_localTag != LocalTag )
    {
      if ( m_peerTag != PeerTag )
      {
        if ( m_localTag == LocalTieTag && m_peerTag == PeerTieTag )
        {
          if ( !bdSecurityKeyMap::contains(_RSI->m_keyMap, &id) )
          {
            bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/dtls", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bddtlsassociation.cpp", "bdDTLSAssociation::handleCookieEcho", 0x245u, "Handle DTLS CookieEcho: secID not in keymap");
            type = BD_DTLS_ERROR_BAD_SECID;
            p_type = &type;
LABEL_19:
            bdDTLSAssociation::sendError(_RSI, addr, &id, p_type);
            _RSI->m_state = BD_DTLS_CLOSED;
            bdDTLSAssociation::finalizeTelemetry(_RSI);
            v28 = 17;
LABEL_58:
            p_m_telemetry = &_RSI->m_telemetry;
            goto LABEL_59;
          }
          bdDTLSAssociation::reset(_RSI);
          _RSI->m_localTag = LocalTag;
          _RSI->m_peerTag = PeerTag;
          if ( BD_DTLS_VERSION >= 3u )
          {
            __asm
            {
              vmovups ymm0, ymmword ptr [r13+0]
              vmovups ymmword ptr [rsi+226h], ymm0
            }
            _RSI->m_localRandom.m_initialized = 1;
            _RAX = PeerRandom;
            __asm
            {
              vmovups ymm0, ymmword ptr [rax]
              vmovups ymmword ptr [rsi+247h], ymm0
            }
            _RSI->m_peerRandom.m_initialized = 1;
          }
          v32 = bdDTLSCookieEcho::getECCKey(&cookiePacket);
          if ( bdDTLSAssociation::calculateSharedKey(_RSI, v32, 0x64u, &id) )
          {
            bdDTLSAssociation::updateAddress(_RSI, &id, &commonAddr, addr);
            bdDTLSAssociation::sendCookieAck(_RSI, addr, &cookiePacket);
            bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/dtls", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bddtlsassociation.cpp", "bdDTLSAssociation::handleCookieEcho", 0x25Cu, "Handle DTLS CookieEcho: Handling CookiEcho (A): m_localTag/m_peerTag: %X/%X", _RSI->m_localTag, _RSI->m_peerTag);
            _RSI->m_state = BD_DTLS_ESTABLISHED;
            bdDTLSAssociationTelemetry::setEstablishedTime(&_RSI->m_telemetry);
            bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/dtls", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bddtlsassociation.cpp", "bdDTLSAssociation::handleCookieEcho", 0x260u, "Handle DTLS CookieEcho: DTLS established");
LABEL_24:
            v24 = 1;
            _RSI->m_localId = id;
            v28 = 22;
            goto LABEL_58;
          }
          expectedCypherSuite = 617;
          goto LABEL_56;
        }
        if ( m_peerTag != PeerTag )
        {
          bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/dtls", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bddtlsassociation.cpp", "bdDTLSAssociation::handleCookieEcho", 0x2F7u, "Handle DTLS CookieEcho: Handling CookieEcho (E): m_localTag/m_peerTag: %X/%X", m_localTag, m_peerTag);
          v28 = 21;
LABEL_57:
          v24 = 0;
          goto LABEL_58;
        }
      }
      bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/dtls", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bddtlsassociation.cpp", "bdDTLSAssociation::handleCookieEcho", 0x2B7u, "Handle DTLS CookieEcho: Handling CookieEcho (C): m_localTag/m_peerTag: %X/%X", m_localTag, m_peerTag);
      v28 = 20;
      goto LABEL_58;
    }
    if ( m_peerTag != PeerTag || !m_peerTag )
    {
      if ( bdAddrHandle::isResolved(_RSI->m_addrHandle.m_ptr) )
      {
        v37 = &_RSI->m_telemetry;
      }
      else
      {
        bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/dtls", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bddtlsassociation.cpp", "bdDTLSAssociation::handleCookieEcho", 0x281u, "Handle DTLS CookieEcho: Invalid addr handle!");
        v37 = &_RSI->m_telemetry;
        bdDTLSAssociationTelemetry::setState(&_RSI->m_telemetry, BD_DTLS_ESTABLISHED|0x10);
      }
      _RSI->m_peerTag = PeerTag;
      bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/dtls", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bddtlsassociation.cpp", "bdDTLSAssociation::handleCookieEcho", 0x289u, "Handle DTLS CookieEcho: Handling CookieEcho (B): m_localTag/m_peerTag: %X/%X", _RSI->m_localTag, PeerTag);
      if ( BD_DTLS_VERSION >= 3u )
      {
        __asm
        {
          vmovups ymm0, ymmword ptr [r13+0]
          vmovups ymmword ptr [rsi+226h], ymm0
        }
        _RSI->m_localRandom.m_initialized = 1;
        _RAX = PeerRandom;
        __asm
        {
          vmovups ymm0, ymmword ptr [rax]
          vmovups ymmword ptr [rsi+247h], ymm0
        }
        _RSI->m_peerRandom.m_initialized = 1;
      }
      if ( !bdSecurityKeyMap::contains(_RSI->m_keyMap, &id) )
      {
        bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/dtls", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bddtlsassociation.cpp", "bdDTLSAssociation::handleCookieEcho", 0x295u, "Handle DTLS CookieEcho: secID not in keymap.");
        v56 = BD_DTLS_ERROR_BAD_SECID;
        bdDTLSAssociation::sendError(_RSI, addr, &id, &v56);
        _RSI->m_state = BD_DTLS_CLOSED;
        bdDTLSAssociation::finalizeTelemetry(_RSI);
        goto LABEL_60;
      }
      v41 = bdDTLSCookieEcho::getECCKey(&cookiePacket);
      if ( bdDTLSAssociation::calculateSharedKey(_RSI, v41, 0x64u, &id) )
      {
        bdDTLSAssociation::updateAddress(_RSI, &id, &commonAddr, addr);
        bdDTLSAssociation::sendCookieAck(_RSI, addr, &cookiePacket);
        _RSI->m_state = BD_DTLS_ESTABLISHED;
        bdDTLSAssociationTelemetry::setEstablishedTime(v37);
        bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/dtls", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bddtlsassociation.cpp", "bdDTLSAssociation::handleCookieEcho", 0x29Fu, "Handle DTLS CookieEcho: DTLS established");
        _RSI->m_localId = id;
        v24 = 1;
        v28 = 22;
      }
      else
      {
        bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/dtls", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bddtlsassociation.cpp", "bdDTLSAssociation::handleCookieEcho", 0x2A7u, "Handle DTLS CookieEcho: Failed to generate shared secret");
        v24 = 0;
        v28 = 18;
      }
      p_m_telemetry = v37;
LABEL_59:
      bdDTLSAssociationTelemetry::setState(p_m_telemetry, v28);
LABEL_60:
      if ( commonAddr.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&commonAddr.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
        ((void (__fastcall *)(bdCommonAddr *, __int64))commonAddr.m_ptr->~bdReferencable)(commonAddr.m_ptr, 1i64);
      bdSecurityID::~bdSecurityID(&id);
      if ( v24 )
        bdGlobalStopwatch::start(&_RSI->m_lastReceived);
      goto LABEL_65;
    }
    if ( !bdSecurityKeyMap::contains(_RSI->m_keyMap, &id) )
    {
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/dtls", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bddtlsassociation.cpp", "bdDTLSAssociation::handleCookieEcho", 0x2CFu, "Handle DTLS CookieEcho(D): secID not in keymap.");
      v55 = 0;
      p_type = (bdDTLSError::bdDTLSErrorType *)&v55;
      goto LABEL_19;
    }
    if ( BD_DTLS_VERSION >= 3u )
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [r13+0]
        vmovups ymmword ptr [rsi+226h], ymm0
      }
      _RSI->m_localRandom.m_initialized = 1;
      _RAX = PeerRandom;
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovups ymmword ptr [rsi+247h], ymm0
      }
      _RSI->m_peerRandom.m_initialized = 1;
    }
    v36 = bdDTLSCookieEcho::getECCKey(&cookiePacket);
    if ( bdDTLSAssociation::calculateSharedKey(_RSI, v36, 0x64u, &id) )
    {
      bdDTLSAssociation::updateAddress(_RSI, &id, &commonAddr, addr);
      bdDTLSAssociation::sendCookieAck(_RSI, addr, &cookiePacket);
      _RSI->m_state = BD_DTLS_ESTABLISHED;
      bdDTLSAssociationTelemetry::setEstablishedTime(&_RSI->m_telemetry);
      _RSI->m_localId = id;
      v24 = 1;
      bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/dtls", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bddtlsassociation.cpp", "bdDTLSAssociation::handleCookieEcho", 0x2E6u, "Handle DTLS CookieEcho: Handling CookieEcho (D): m_localTag/m_peerTag: %X/%X", _RSI->m_localTag, _RSI->m_peerTag);
      v28 = 22;
      goto LABEL_58;
    }
    expectedCypherSuite = 747;
LABEL_56:
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/dtls", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bddtlsassociation.cpp", "bdDTLSAssociation::handleCookieEcho", expectedCypherSuite, "Handle DTLS CookieEcho: Failed to generate shared secret");
    v28 = 18;
    goto LABEL_57;
  }
  bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/dtls", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bddtlsassociation.cpp", "bdDTLSAssociation::handleCookieEcho", 0x1C8u, "Handle DTLS CookieEcho: Received bad cookie. Ignoring");
  bdDTLSAssociationTelemetry::setState(&_RSI->m_telemetry, (const bdDTLSAssociationTelemetry::bdDTLSAssociationState)16);
LABEL_66:
  bdDTLSCookieEcho::~bdDTLSCookieEcho(&cookiePacket);
  return 4294967294i64;
}

/*
==============
bdDTLSAssociation::handleData
==============
*/
__int64 bdDTLSAssociation::handleData(bdDTLSAssociation *this, bdAddr *addr, const unsigned __int8 *data, const unsigned int size, bdReference<bdAddrHandle> *addrHandle, const unsigned __int16 vtag, unsigned __int8 *buffer, const unsigned int bufferSize)
{
  unsigned int v10; 
  bdReference<bdAddrHandle> *p_m_addrHandle; 
  bdCommonAddr *m_ptr; 
  unsigned __int16 cypherSuite; 
  bdHash *hash; 
  bdCypher *cypher; 
  const bdSequenceNumber *lastSequenceNumber; 
  bdSequenceNumberStore::bdSequenceStatus v17; 
  const bdSockAddr *p_m_address; 
  bdReference<bdAddrHandle> *v31; 
  bdAddrHandle *v32; 
  unsigned __int8 *outData; 
  __int64 outDataMaxSize; 
  unsigned int Size; 
  bdSequenceNumber Size_4; 
  bdSequenceNumber thisSeq; 
  unsigned int inDataSize; 
  unsigned int inDataNewOffset; 
  bdSequenceNumber v41; 
  void *inData; 
  bdReference<bdAddrHandle> *v43; 
  void *v44; 
  __int64 v45; 
  bdDTLSData v46; 
  unsigned __int8 Src[1296]; 

  v45 = -2i64;
  inDataSize = size;
  inData = (void *)data;
  _R14 = addr;
  _RBP = this;
  v43 = addrHandle;
  v44 = buffer;
  v10 = -2;
  if ( this->m_state == BD_DTLS_ESTABLISHED )
  {
    p_m_addrHandle = &this->m_addrHandle;
    m_ptr = this->m_addrHandle.m_ptr->m_endpoint.m_ca.m_ptr;
    if ( m_ptr )
    {
      _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
        ((void (__fastcall *)(bdCommonAddr *, __int64))m_ptr->~bdReferencable)(m_ptr, 1i64);
      if ( vtag == _RBP->m_localTag )
      {
        bdDTLSData::bdDTLSData(&v46);
        cypherSuite = _RBP->m_cypherSuite;
        hash = bdDynamicHash::getHash(&_RBP->m_hash);
        cypher = bdDynamicCypher::getCypher(&_RBP->m_receivingCypher);
        lastSequenceNumber = bdSequenceNumberStore::getLastSequenceNumber(&_RBP->m_incomingSeqNums);
        if ( bdDTLSData::deserialize(&v46, inData, inDataSize, 0, &inDataNewOffset, lastSequenceNumber, (const unsigned __int8 (*)[32])_RBP->m_receivingIVMaterial, Src, 0x508u, &Size, cypher, hash, cypherSuite) )
        {
          bdSequenceNumber::bdSequenceNumber(&v41, -1);
          if ( v46.m_vtag == _RBP->m_localTag )
          {
            Size_4.m_seqNum = bdSequenceNumberStore::getLastSequenceNumber(&_RBP->m_incomingSeqNums)->m_seqNum;
            bdSequenceNumber::bdSequenceNumber(&thisSeq, &Size_4, v46.m_counter, 0x10u);
            v17 = bdSequenceNumberStore::check(&_RBP->m_incomingSeqNums, &thisSeq);
            if ( v17 == BD_SN_INVALID_SMALLER )
            {
              LODWORD(outDataMaxSize) = bdSequenceNumber::getValue(&Size_4);
              LODWORD(outData) = bdSequenceNumber::getValue(&thisSeq);
              bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/dtls", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bddtlsassociation.cpp", "bdDTLSAssociation::verify", 0x638u, "bdDTLSAssociation: Invalid seq num (%u) is smaller than last (%u).", outData, outDataMaxSize);
            }
            else if ( v17 == BD_SN_VALID_SMALLER || (unsigned int)(v17 - 1) <= 1 )
            {
              if ( Size > bufferSize )
              {
                bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/dtls", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bddtlsassociation.cpp", "bdDTLSAssociation::handleData", 0x3BDu, "Insufficient space in the destination buffer.");
              }
              else
              {
                p_m_address = &p_m_addrHandle->m_ptr->m_realAddr.m_address;
                if ( _RBP->m_migrating )
                {
                  if ( bdSockAddr::compare(&_R14->m_address, p_m_address, 1) )
                    _RBP->m_migrating = 0;
                }
                else if ( !bdSockAddr::compare(&_R14->m_address, p_m_address, 1) )
                {
                  bdAddrHandle::setRealAddr(p_m_addrHandle->m_ptr, _R14);
                  __asm
                  {
                    vmovups ymm0, ymmword ptr [r14]
                    vmovups ymmword ptr [rbp+160h], ymm0
                    vmovups ymm1, ymmword ptr [r14+20h]
                    vmovups ymmword ptr [rbp+180h], ymm1
                    vmovups ymm0, ymmword ptr [r14+40h]
                    vmovups ymmword ptr [rbp+1A0h], ymm0
                    vmovups ymm1, ymmword ptr [r14+60h]
                    vmovups ymmword ptr [rbp+1C0h], ymm1
                    vmovups xmm0, xmmword ptr [r14+80h]
                    vmovups xmmword ptr [rbp+1E0h], xmm0
                    vmovsd  xmm1, qword ptr [r14+90h]
                    vmovsd  qword ptr [rbp+1F0h], xmm1
                  }
                }
                v10 = Size;
                __asm
                {
                  vmovups ymm0, ymmword ptr [rbp+160h]
                  vmovups ymmword ptr [r14], ymm0
                  vmovups ymm1, ymmword ptr [rbp+180h]
                  vmovups ymmword ptr [r14+20h], ymm1
                  vmovups ymm0, ymmword ptr [rbp+1A0h]
                  vmovups ymmword ptr [r14+40h], ymm0
                  vmovups ymm1, ymmword ptr [rbp+1C0h]
                  vmovups ymmword ptr [r14+60h], ymm1
                  vmovups xmm0, xmmword ptr [rbp+1E0h]
                  vmovups xmmword ptr [r14+80h], xmm0
                  vmovsd  xmm1, qword ptr [rbp+1F0h]
                  vmovsd  qword ptr [r14+90h], xmm1
                }
                v31 = v43;
                if ( p_m_addrHandle != v43 )
                {
                  if ( v43->m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v43->m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v31->m_ptr )
                    ((void (__fastcall *)(bdAddrHandle *, __int64))v31->m_ptr->~bdReferencable)(v31->m_ptr, 1i64);
                  v32 = p_m_addrHandle->m_ptr;
                  v31->m_ptr = p_m_addrHandle->m_ptr;
                  if ( v32 )
                    _InterlockedExchangeAdd((volatile signed __int32 *)&v32->m_refCount, 1u);
                }
                bdGlobalStopwatch::start(&_RBP->m_lastReceived);
                memcpy_0(v44, Src, Size);
              }
            }
            else
            {
              LODWORD(outDataMaxSize) = bdSequenceNumber::getValue(&Size_4);
              LODWORD(outData) = bdSequenceNumber::getValue(&thisSeq);
              bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/dtls", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bddtlsassociation.cpp", "bdDTLSAssociation::verify", 0x63Eu, "bdDTLSAssociation: Invalid seq num (%u) is a duplicate of the last (%u).", outData, outDataMaxSize);
            }
          }
          else
          {
            bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/dtls", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bddtlsassociation.cpp", "bdDTLSAssociation::verify", 0x645u, "bdDTLSAssociation: vtag not the same as local tag.");
          }
        }
        bdDTLSData::~bdDTLSData(&v46);
      }
    }
    else
    {
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/dtls", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bddtlsassociation.cpp", "bdDTLSAssociation::handleData", 0x3CDu, "Receiving data before m_addrHandle is set!");
    }
  }
  return v10;
}

/*
==============
bdDTLSAssociation::handleError
==============
*/
__int64 bdDTLSAssociation::handleError(bdDTLSAssociation *this, const bdAddr *addr, const void *data, const unsigned int size)
{
  bdDTLSAssociationTelemetry::bdDTLSAssociationState v8; 
  unsigned int newOffset; 
  __int64 v11; 
  bdDTLSError v12; 
  char str[24]; 

  v11 = -2i64;
  bdDTLSError::bdDTLSError(&v12);
  if ( bdDTLSError::deserialize(&v12, data, size, 0, &newOffset) && v12.m_vtag == this->m_localTag )
  {
    if ( bdDTLSError::getEtype(&v12) )
    {
      bdAddr::toString((bdAddr *)addr, str, 0x16ui64);
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/dtls", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bddtlsassociation.cpp", "bdDTLSAssociation::handleError", 0x36Du, "Received unrecognized error message from %s. Ignoring.", str);
      v8 = 30;
    }
    else
    {
      bdAddr::toString((bdAddr *)addr, str, 0x16ui64);
      bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/dtls", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bddtlsassociation.cpp", "bdDTLSAssociation::handleError", 0x362u, "Received bad_security_id error reset from %s. Closing the association.", str);
      this->m_state = BD_DTLS_CLOSED;
      bdDTLSAssociation::finalizeTelemetry(this);
      v8 = 29;
    }
    bdDTLSAssociationTelemetry::setState(&this->m_telemetry, v8);
  }
  bdDTLSError::~bdDTLSError(&v12);
  return 4294967294i64;
}

/*
==============
bdDTLSAssociation::handleInit
==============
*/
__int64 bdDTLSAssociation::handleInit(bdDTLSAssociation *this, const bdAddr *addr, const void *data, const unsigned int size)
{
  bdDTLSAssociationTelemetry::bdDTLSAssociationState v8; 
  int m_localTag; 
  int InitTag; 
  unsigned int newOffset; 
  __int64 v13; 
  bdDTLSInit init; 

  v13 = -2i64;
  bdDTLSInit::bdDTLSInit(&init);
  if ( bdDTLSInit::deserialize(&init, data, size, 0, &newOffset, this->m_cypherSuite) )
  {
    InitTag = bdDTLSInit::getInitTag(&init);
    m_localTag = this->m_localTag;
    bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/dtls", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bddtlsassociation.cpp", "bdDTLSAssociation::handleInit", 0x151u, "Handle DTLS init: m_localTag: %X, init->m_initTag: %X", m_localTag, InitTag);
    bdDTLSAssociation::sendInitAck(this, addr, &init);
    bdGlobalStopwatch::start(&this->m_lastReceived);
    v8 = BD_DTLS_ESTABLISHED|0x8;
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/dtls", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bddtlsassociation.cpp", "bdDTLSAssociation::handleInit", 0x15Cu, "Handle DTLS Init: Bad Init packet.");
    v8 = 10;
  }
  bdDTLSAssociationTelemetry::setState(&this->m_telemetry, v8);
  bdDTLSAssociationTelemetry::setInitStageTime(&this->m_telemetry);
  bdDTLSInit::~bdDTLSInit(&init);
  return 4294967294i64;
}

/*
==============
bdDTLSAssociation::handleInitAck
==============
*/
__int64 bdDTLSAssociation::handleInitAck(bdDTLSAssociation *this, const bdAddr *addr, const void *data, const unsigned int size)
{
  bdDTLSAssociationTelemetry::bdDTLSAssociationState v16; 
  bdDTLSAssociationTelemetry *p_m_telemetry; 
  const bdDTLSRandom *PeerRandom; 
  int m_localTag; 
  int m_peerTag; 
  unsigned int newOffset; 
  __int64 v25; 
  bdDTLSInitAck v26; 

  v25 = -2i64;
  _RSI = this;
  if ( this->m_state != BD_DTLS_COOKIE_WAIT )
  {
    p_m_telemetry = &this->m_telemetry;
    goto LABEL_13;
  }
  bdDTLSInitAck::bdDTLSInitAck(&v26);
  if ( bdDTLSInitAck::deserialize(&v26, data, size, 0, &newOffset, _RSI->m_cypherSuite) )
  {
    _RSI->m_initAck.m_type = v26.m_type;
    _RSI->m_initAck.m_version = v26.m_version;
    _RSI->m_initAck.m_vtag = v26.m_vtag;
    _RSI->m_initAck.m_counter = v26.m_counter;
    _RSI->m_initAck.m_cypherSuite = v26.m_cypherSuite;
    _RSI->m_initAck.m_timestamp = v26.m_timestamp;
    _RSI->m_initAck.m_signature[0] = v26.m_signature[0];
    _RSI->m_initAck.m_signature[1] = v26.m_signature[1];
    _RSI->m_initAck.m_signature[2] = v26.m_signature[2];
    _RSI->m_initAck.m_signature[3] = v26.m_signature[3];
    _RSI->m_initAck.m_signature[4] = v26.m_signature[4];
    _RSI->m_initAck.m_signature[5] = v26.m_signature[5];
    _RSI->m_initAck.m_signature[6] = v26.m_signature[6];
    _RSI->m_initAck.m_signature[7] = v26.m_signature[7];
    _RSI->m_initAck.m_signature[8] = v26.m_signature[8];
    _RSI->m_initAck.m_signature[9] = v26.m_signature[9];
    _RSI->m_initAck.m_signature[10] = v26.m_signature[10];
    _RSI->m_initAck.m_signature[11] = v26.m_signature[11];
    _RSI->m_initAck.m_signature[12] = v26.m_signature[12];
    _RSI->m_initAck.m_signature[13] = v26.m_signature[13];
    _RSI->m_initAck.m_signature[14] = v26.m_signature[14];
    _RSI->m_initAck.m_signature[15] = v26.m_signature[15];
    _RSI->m_initAck.m_initTag = v26.m_initTag;
    _RSI->m_initAck.m_localTag = v26.m_localTag;
    _RSI->m_initAck.m_peerTag = v26.m_peerTag;
    _RSI->m_initAck.m_localTieTag = v26.m_localTieTag;
    _RSI->m_initAck.m_peerTieTag = v26.m_peerTieTag;
    __asm
    {
      vmovups ymm0, ymmword ptr [rbp+0C0h+var_160.m_localRandom.m_dtlsRandom]
      vmovups ymmword ptr [rsi+2AAh], ymm0
    }
    _RSI->m_initAck.m_localRandom.m_initialized = 1;
    __asm
    {
      vmovups ymm0, ymmword ptr [rbp+0C0h+var_160.m_peerRandom.m_dtlsRandom]
      vmovups ymmword ptr [rsi+2CBh], ymm0
    }
    _RSI->m_initAck.m_peerRandom.m_initialized = 1;
    __asm
    {
      vmovups ymm0, ymmword ptr [rbp+0C0h+var_160.m_peerAddr.m_address.inUn]
      vmovups ymmword ptr [rsi+2F0h], ymm0
      vmovups ymm1, ymmword ptr [rbp+0C0h+var_160.m_peerAddr.m_address.inUn+20h]
      vmovups ymmword ptr [rsi+310h], ymm1
      vmovups ymm0, ymmword ptr [rbp+0C0h+var_160.m_peerAddr.m_address.inUn+40h]
      vmovups ymmword ptr [rsi+330h], ymm0
      vmovups ymm1, ymmword ptr [rbp+0C0h+var_160.m_peerAddr.m_address.inUn+60h]
      vmovups ymmword ptr [rsi+350h], ymm1
      vmovups xmm0, xmmword ptr [rbp+0C0h+var_160.m_peerAddr.m_relayRoute.m_relayID]
      vmovups xmmword ptr [rsi+370h], xmm0
      vmovsd  xmm1, qword ptr [rbp+0C0h+var_160.m_peerAddr.m_type]
      vmovsd  qword ptr [rsi+380h], xmm1
    }
    _RSI->m_initAck.m_secID = v26.m_secID;
    if ( _RSI->m_initAck.m_vtag == _RSI->m_localTag )
    {
      p_m_telemetry = &_RSI->m_telemetry;
      if ( BD_DTLS_VERSION < 3u || (PeerRandom = bdDTLSInitAck::getPeerRandom(&_RSI->m_initAck), bdHandleAssert(_RSI->m_localRandom.m_initialized, "m_initialized", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bddtlsrandom.h", "bdDTLSRandom::operator ==", 0x50u, "bdDTLSRandom not initialized before access"), bdCryptoUtils::constTimeCompare(_RSI->m_localRandom.m_dtlsRandom, PeerRandom->m_dtlsRandom, 0x20ui64)) )
      {
        _RSI->m_peerTag = bdDTLSInitAck::getInitTag(&_RSI->m_initAck);
        _RAX = bdDTLSInitAck::getLocalRandom(&_RSI->m_initAck);
        __asm
        {
          vmovups ymm0, ymmword ptr [rax]
          vmovups ymmword ptr [rsi+247h], ymm0
        }
        _RSI->m_peerRandom.m_initialized = 1;
        m_peerTag = _RSI->m_peerTag;
        m_localTag = _RSI->m_localTag;
        bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/dtls", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bddtlsassociation.cpp", "bdDTLSAssociation::handleInitAck", 0x18Du, "Handle DTLS InitAck: Handling m_localTag/m_peerTag: %X/%X", m_localTag, m_peerTag);
        bdDTLSAssociation::sendCookieEcho(_RSI, addr);
        bdGlobalStopwatch::start(&_RSI->m_lastReceived);
        _RSI->m_state = BD_DTLS_COOKIE_ECHOED;
        v16 = 15;
      }
      else
      {
        bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/dtls", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bddtlsassociation.cpp", "bdDTLSAssociation::handleInitAck", 0x182u, "Handle DTLS InitAck: Received InitAck with invalid localExtraRandom. Ignoring");
        v16 = 13;
      }
      goto LABEL_11;
    }
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/dtls", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bddtlsassociation.cpp", "bdDTLSAssociation::handleInitAck", 0x178u, "Handle DTLS InitAck: Received InitAck with invalid vtag. Ignoring");
    v16 = 12;
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/dtls", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bddtlsassociation.cpp", "bdDTLSAssociation::handleInitAck", 0x19Au, "Handle DTLS InitAck: Failed to deserialize InitAck. Ignoring");
    v16 = 14;
  }
  p_m_telemetry = &_RSI->m_telemetry;
LABEL_11:
  bdDTLSAssociationTelemetry::setState(p_m_telemetry, v16);
  bdDTLSInitAck::~bdDTLSInitAck(&v26);
LABEL_13:
  bdDTLSAssociationTelemetry::setInitAckStageTime(p_m_telemetry);
  return 4294967294i64;
}

/*
==============
bdDTLSAssociation::makeTag
==============
*/
unsigned int bdDTLSAssociation::makeTag(bdDTLSAssociation *this)
{
  bdTrulyRandomImpl *v1; 
  bdTrulyRandomImpl *v2; 
  bdSingletonRegistryImpl *Instance; 
  unsigned int result; 

  do
  {
    if ( bdSingleton<bdTrulyRandomImpl>::m_instance )
      goto LABEL_9;
    v1 = (bdTrulyRandomImpl *)bdMemory::allocate(1ui64);
    if ( v1 )
      bdTrulyRandomImpl::bdTrulyRandomImpl(v1);
    else
      v2 = NULL;
    bdSingleton<bdTrulyRandomImpl>::m_instance = v2;
    if ( v2 )
    {
      Instance = bdSingleton<bdSingletonRegistryImpl>::getInstance();
      if ( bdSingletonRegistryImpl::add(Instance, bdSingleton<bdTrulyRandomImpl>::destroyInstance) )
        goto LABEL_9;
      bdMemory::deallocate(bdSingleton<bdTrulyRandomImpl>::m_instance);
      bdSingleton<bdTrulyRandomImpl>::m_instance = NULL;
    }
    DebugBreak();
LABEL_9:
    result = bdTrulyRandomImpl::getRandomUInt(bdSingleton<bdTrulyRandomImpl>::m_instance);
  }
  while ( !(_WORD)result );
  return result;
}

/*
==============
bdDTLSAssociation::migrate
==============
*/
void bdDTLSAssociation::migrate(bdDTLSAssociation *this, const bdReference<bdCommonAddr> *newCommonAddr, const bdAddr *newRealAddr)
{
  bdHandleAssert(this->m_state == BD_DTLS_ESTABLISHED, "m_state == BD_DTLS_ESTABLISHED", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bddtlsassociation.cpp", "bdDTLSAssociation::migrate", 0x50Du, "Reconnect supported only for established DTLS", -2i64);
  bdMutex::lock(&this->m_mutex);
  bdDTLSAssociation::updateAddress(this, &this->m_addrHandle.m_ptr->m_endpoint.m_secID, newCommonAddr, newRealAddr);
  this->m_migrating = 1;
  bdMutex::unlock(&this->m_mutex);
}

/*
==============
bdDTLSAssociation::prepareData
==============
*/
__int64 bdDTLSAssociation::prepareData(bdDTLSAssociation *this, const void *data, const unsigned int length, void *outData, const unsigned int outDataSize)
{
  unsigned int v7; 
  bdMutex *p_m_mutex; 
  unsigned __int16 Value; 
  unsigned __int16 cypherSuite; 
  bdHash *hash; 
  bdCypher *cypher; 
  bdDTLSAssociationTelemetry::bdDTLSAssociationState v13; 
  unsigned __int8 (*keyingMaterials)[32]; 
  unsigned int outDataNewOffset; 
  bdSequenceNumber result; 
  unsigned __int8 *inData; 
  void *outDataa; 
  __int64 v20; 
  bdMutex *v21; 
  bdDTLSData v22; 

  v20 = -2i64;
  outDataa = outData;
  inData = (unsigned __int8 *)data;
  v7 = -1;
  if ( this->m_state != BD_DTLS_ESTABLISHED )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/dtls", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bddtlsassociation.cpp", "bdDTLSAssociation::prepareData", 0x502u, "Not connected. Cannot send.");
LABEL_9:
    bdDTLSAssociationTelemetry::setState(&this->m_telemetry, (const bdDTLSAssociationTelemetry::bdDTLSAssociationState)49);
    return v7;
  }
  if ( length > 0x4F6 || outDataSize < length + 18 )
    goto LABEL_9;
  p_m_mutex = &this->m_mutex;
  v21 = &this->m_mutex;
  bdMutex::lock(&this->m_mutex);
  bdSequenceNumber::operator++(&this->m_seqNum, &result, 0);
  Value = bdSequenceNumber::getValue(&this->m_seqNum);
  bdDTLSData::bdDTLSData(&v22, this->m_peerTag, Value);
  outDataNewOffset = 0;
  cypherSuite = this->m_cypherSuite;
  hash = bdDynamicHash::getHash(&this->m_hash);
  cypher = bdDynamicCypher::getCypher(&this->m_sendingCypher);
  if ( bdDTLSData::serialize(&v22, outDataa, outDataSize, 0, &outDataNewOffset, &this->m_seqNum, (const unsigned __int8 (*)[32])this->m_sendingIVMaterial, inData, length, cypher, hash, cypherSuite) )
  {
    v7 = outDataNewOffset;
    v13 = 50;
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/dtls", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bddtlsassociation.cpp", "bdDTLSAssociation::prepareData", 0x4F2u, "Prepare DTLS Data: Packet creation failed.");
    v13 = 48;
  }
  bdDTLSAssociationTelemetry::setState(&this->m_telemetry, v13);
  LODWORD(keyingMaterials) = outDataNewOffset;
  bdHandleAssert(outDataNewOffset < 0x508, "packetLength < BD_MAX_DATAGRAM_SIZE", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bddtlsassociation.cpp", "bdDTLSAssociation::prepareData", 0x4FCu, "Prepare DTLS Data: Packet Length[%u] > BD_MAX_DATAGRAM_SIZE", keyingMaterials);
  bdDTLSData::~bdDTLSData(&v22);
  bdMutex::unlock(p_m_mutex);
  return v7;
}

/*
==============
bdDTLSAssociation::pump
==============
*/
void bdDTLSAssociation::pump(bdDTLSAssociation *this)
{
  bdMutex *p_m_mutex; 
  bdAddrHandle::bdAddrHandleStatus m_status; 
  __int32 v5; 
  __int32 v6; 
  bdDTLSAssociationTelemetry::bdDTLSAssociationState v7; 
  bdAddr *RealAddr; 
  bdAddr *v9; 
  char v10; 
  char v11; 
  bdAddr *v12; 
  bdDTLSAssociationTelemetry::bdDTLSAssociationState v13; 
  bdDTLSAssociation::bdDTLSStatus m_state; 
  __int32 v15; 
  __int32 v16; 
  bdAddr result; 
  char str[24]; 

  _RDI = this;
  p_m_mutex = &this->m_mutex;
  bdMutex::lock(&this->m_mutex);
  m_status = _RDI->m_addrHandle.m_ptr->m_status;
  if ( m_status )
  {
    v5 = m_status - 1;
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( v6 )
      {
        if ( v6 != 4 )
          goto LABEL_10;
        bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/dtls", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bddtlsassociation.cpp", "bdDTLSAssociation::pump", 0xFDu, "Address unregistered. Closing DTLS.");
        _RDI->m_state = BD_DTLS_CLOSED;
        bdDTLSAssociation::finalizeTelemetry(_RDI);
        v7 = 5;
      }
      else
      {
        bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/dtls", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bddtlsassociation.cpp", "bdDTLSAssociation::pump", 0xF4u, "Address error.");
        _RDI->m_state = BD_DTLS_CLOSED;
        bdDTLSAssociation::finalizeTelemetry(_RDI);
        v7 = 4;
      }
    }
    else
    {
      RealAddr = (bdAddr *)bdAddrHandle::getRealAddr(_RDI->m_addrHandle.m_ptr, &result);
      bdAddr::toString(RealAddr, str, 0x16ui64);
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/dtls", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bddtlsassociation.cpp", "bdDTLSAssociation::pump", 0xECu, "Address not resolved (%s). Shouldn't be here. Closing.", str);
      _RDI->m_state = BD_DTLS_CLOSED;
      bdDTLSAssociation::finalizeTelemetry(_RDI);
      v7 = BD_DTLS_ESTABLISHED;
    }
  }
  else
  {
    v9 = (bdAddr *)bdAddrHandle::getRealAddr(_RDI->m_addrHandle.m_ptr, &result);
    bdAddr::toString(v9, str, 0x16ui64);
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/dtls", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bddtlsassociation.cpp", "bdDTLSAssociation::pump", 0xDFu, "Address not constructed (%s). Shouldn't be here. Closing.", str);
    _RDI->m_state = BD_DTLS_CLOSED;
    bdDTLSAssociation::finalizeTelemetry(_RDI);
    v7 = BD_DTLS_COOKIE_ECHOED;
  }
  bdDTLSAssociationTelemetry::setState(&_RDI->m_telemetry, v7);
LABEL_10:
  *(double *)&_XMM0 = bdGlobalStopwatch::getElapsedTimeInSeconds(&_RDI->m_lastReceived);
  __asm { vcomiss xmm0, dword ptr [rdi+3A8h] }
  if ( !(v10 | v11) )
  {
    v12 = (bdAddr *)bdAddrHandle::getRealAddr(_RDI->m_addrHandle.m_ptr, &result);
    bdAddr::toString(v12, str, 0x16ui64);
    bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/dtls", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bddtlsassociation.cpp", "bdDTLSAssociation::pump", 0x10Au, "DTLS receive timeout. Closing connection to %s", str);
    _RDI->m_state = BD_DTLS_CLOSED;
    bdDTLSAssociation::finalizeTelemetry(_RDI);
    v13 = 6;
LABEL_22:
    bdDTLSAssociationTelemetry::setState(&_RDI->m_telemetry, v13);
    goto LABEL_23;
  }
  m_state = _RDI->m_state;
  if ( m_state == BD_DTLS_CLOSED )
  {
    v13 = BD_DTLS_COOKIE_WAIT;
    goto LABEL_22;
  }
  v15 = m_state - 1;
  if ( v15 )
  {
    v16 = v15 - 1;
    if ( v16 )
    {
      if ( v16 == 1 )
      {
        v13 = 9;
        goto LABEL_22;
      }
    }
    else
    {
      *(double *)&_XMM0 = bdStopwatch::getElapsedTimeInSeconds(&_RDI->m_cookieTimer);
      __asm { vcomiss xmm0, cs:__real@3f800000 }
      if ( !(v10 | v11) )
      {
        bdDTLSAssociation::sendCookieEcho(_RDI, &_RDI->m_addr);
        v13 = 8;
        goto LABEL_22;
      }
    }
  }
  else
  {
    *(double *)&_XMM0 = bdStopwatch::getElapsedTimeInSeconds(&_RDI->m_initTimer);
    __asm { vcomiss xmm0, cs:__real@3f800000 }
    if ( !(v10 | v11) )
    {
      bdDTLSAssociation::sendInit(_RDI);
      v13 = BD_DTLS_ESTABLISHED|0x4;
      goto LABEL_22;
    }
  }
LABEL_23:
  bdMutex::unlock(p_m_mutex);
}

/*
==============
bdDTLSAssociation::receiveFrom
==============
*/
__int64 bdDTLSAssociation::receiveFrom(bdDTLSAssociation *this, bdAddr *addr, const void *data, const unsigned int size, bdReference<bdAddrHandle> *addrHandle, void *buffer, const unsigned int bufferSize)
{
  unsigned int v11; 
  bdMutex *p_m_mutex; 
  bdDTLSAssociationTelemetry::bdDTLSAssociationState v13; 
  bdDTLSAssociationTelemetry *p_m_telemetry; 
  int inited; 
  bdDTLSAssociationTelemetry::bdDTLSAssociationState v16; 
  unsigned int m_localTag; 
  int InitTag; 
  unsigned __int8 *v20; 
  bdDTLSHeader v21; 
  unsigned int newOffset; 
  __int64 v23; 
  bdMutex *v24; 
  bdDTLSInit init; 
  char str[24]; 
  char v27[24]; 

  v23 = -2i64;
  v20 = (unsigned __int8 *)buffer;
  v11 = -2;
  bdDTLSHeader::bdDTLSHeader(&v21);
  if ( bdDTLSHeader::deserialize(&v21, data, size, 0, &newOffset) )
  {
    p_m_mutex = &this->m_mutex;
    v24 = &this->m_mutex;
    bdMutex::lock(&this->m_mutex);
    switch ( v21.m_type )
    {
      case 1u:
        bdDTLSInit::bdDTLSInit(&init);
        if ( bdDTLSInit::deserialize(&init, data, size, 0, (unsigned int *)&v20, this->m_cypherSuite) )
        {
          InitTag = bdDTLSInit::getInitTag(&init);
          m_localTag = this->m_localTag;
          bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/dtls", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bddtlsassociation.cpp", "bdDTLSAssociation::handleInit", 0x151u, "Handle DTLS init: m_localTag: %X, init->m_initTag: %X", m_localTag, InitTag);
          bdDTLSAssociation::sendInitAck(this, addr, &init);
          bdGlobalStopwatch::start(&this->m_lastReceived);
          v13 = BD_DTLS_ESTABLISHED|0x8;
        }
        else
        {
          bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/dtls", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bddtlsassociation.cpp", "bdDTLSAssociation::handleInit", 0x15Cu, "Handle DTLS Init: Bad Init packet.");
          v13 = 10;
        }
        p_m_telemetry = &this->m_telemetry;
        bdDTLSAssociationTelemetry::setState(p_m_telemetry, v13);
        bdDTLSAssociationTelemetry::setInitStageTime(p_m_telemetry);
        bdDTLSInit::~bdDTLSInit(&init);
        break;
      case 2u:
        inited = bdDTLSAssociation::handleInitAck(this, addr, data, size);
        goto LABEL_18;
      case 3u:
        inited = bdDTLSAssociation::handleCookieEcho(this, addr, data, size);
        goto LABEL_18;
      case 4u:
        inited = bdDTLSAssociation::handleCookieAck(this, data, size);
        goto LABEL_18;
      case 5u:
        bdDTLSError::bdDTLSError((bdDTLSError *)&init);
        if ( bdDTLSError::deserialize((bdDTLSError *)&init, data, size, 0, (unsigned int *)&v20) && init.m_vtag == this->m_localTag )
        {
          if ( bdDTLSError::getEtype((bdDTLSError *)&init) )
          {
            bdAddr::toString(addr, str, 0x16ui64);
            bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/dtls", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bddtlsassociation.cpp", "bdDTLSAssociation::handleError", 0x36Du, "Received unrecognized error message from %s. Ignoring.", str);
            v16 = 30;
          }
          else
          {
            bdAddr::toString(addr, v27, 0x16ui64);
            bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/dtls", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bddtlsassociation.cpp", "bdDTLSAssociation::handleError", 0x362u, "Received bad_security_id error reset from %s. Closing the association.", v27);
            this->m_state = BD_DTLS_CLOSED;
            bdDTLSAssociation::finalizeTelemetry(this);
            v16 = 29;
          }
          bdDTLSAssociationTelemetry::setState(&this->m_telemetry, v16);
        }
        bdDTLSError::~bdDTLSError((bdDTLSError *)&init);
        break;
      case 6u:
        inited = bdDTLSAssociation::handleData(this, addr, (const unsigned __int8 *)data, size, addrHandle, v21.m_vtag, v20, bufferSize);
LABEL_18:
        v11 = inited;
        break;
      default:
        break;
    }
    bdMutex::unlock(p_m_mutex);
  }
  bdDTLSHeader::~bdDTLSHeader(&v21);
  return v11;
}

/*
==============
bdDTLSAssociation::reset
==============
*/
void bdDTLSAssociation::reset(bdDTLSAssociation *this)
{
  bdMutex *p_m_mutex; 
  bdTrulyRandomImpl *Instance; 
  bdTrulyRandomImpl *v4; 
  bdSequenceNumberStore *v5; 
  bdSequenceNumber inital; 
  bdMutex *v7; 
  bdSequenceNumberStore v8; 

  p_m_mutex = &this->m_mutex;
  v7 = &this->m_mutex;
  bdMutex::lock(&this->m_mutex);
  this->m_initResends = 0;
  this->m_cookieResends = 0;
  bdSequenceNumber::bdSequenceNumber(&inital, 0);
  this->m_seqNum = inital;
  this->m_localTag = bdDTLSAssociation::makeTag(this);
  this->m_peerTag = 0;
  Instance = bdSingleton<bdTrulyRandomImpl>::getInstance();
  bdTrulyRandomImpl::getRandomUByte8(Instance, this->m_localRandom.m_dtlsRandom, 0x20u);
  this->m_localRandom.m_initialized = 1;
  v4 = bdSingleton<bdTrulyRandomImpl>::getInstance();
  bdTrulyRandomImpl::getRandomUByte8(v4, this->m_peerRandom.m_dtlsRandom, 0x20u);
  this->m_peerRandom.m_initialized = 1;
  bdCryptoUtils::zeroBuffer(this->m_sendingIVMaterial, 0x20ui64);
  bdCryptoUtils::zeroBuffer(this->m_receivingIVMaterial, 0x20ui64);
  bdGlobalStopwatch::start(&this->m_lastReceived);
  bdSequenceNumber::bdSequenceNumber(&inital, -1);
  bdSequenceNumberStore::bdSequenceNumberStore(&v8, &inital);
  this->m_incomingSeqNums = *v5;
  bdDTLSAssociationTelemetry::setState(&this->m_telemetry, BD_DTLS_CLOSED);
  this->m_migrating = 0;
  bdMutex::unlock(p_m_mutex);
}

/*
==============
bdDTLSAssociation::sendCookieAck
==============
*/
void bdDTLSAssociation::sendCookieAck(bdDTLSAssociation *this, const bdAddr *addr, const bdDTLSCookieEcho *__formal)
{
  bdDTLSAssociationTelemetry *p_m_telemetry; 
  bdSecurityID v6; 
  int v7; 
  bdDTLSAssociationTelemetry::bdDTLSAssociationState v8; 
  unsigned int keylen; 
  unsigned int newOffset; 
  bdSecurityID v11; 
  __int64 v12; 
  bdDTLSCookieAck v13; 
  unsigned __int8 pubKey[112]; 
  char data[1296]; 

  v12 = -2i64;
  keylen = 100;
  if ( bdECCKey::exportKey(this->m_ECCKey, pubKey, &keylen) && keylen == 100 )
  {
    p_m_telemetry = &this->m_telemetry;
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/dtls", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bddtlsassociation.cpp", "bdDTLSAssociation::sendCookieAck", 0x48Bu, "Sending DTLS CookieAck: Problem with DH ECC key");
    p_m_telemetry = &this->m_telemetry;
    bdDTLSAssociationTelemetry::setState(&this->m_telemetry, (const bdDTLSAssociationTelemetry::bdDTLSAssociationState)40);
  }
  bdSecurityID::bdSecurityID(&v11, &this->m_addrHandle.m_ptr->m_endpoint.m_secID);
  bdDTLSCookieAck::bdDTLSCookieAck(&v13, this->m_peerTag, pubKey, v6);
  bdDTLSCookieAck::serialize(&v13, data, 0x508u, 0, &newOffset);
  v7 = bdRoutingLayer::sendTo(this->m_routingLayer, addr, data, newOffset);
  if ( v7 == newOffset )
  {
    v8 = 42;
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdSocket/dtls", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bddtlsassociation.cpp", "bdDTLSAssociation::sendCookieAck", 0x49Au, "Sending DTLS CookieAck: Failed to send CookieAck");
    v8 = 41;
  }
  bdDTLSAssociationTelemetry::setState(p_m_telemetry, v8);
  bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/dtls", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bddtlsassociation.cpp", "bdDTLSAssociation::sendCookieAck", 0x4A2u, "Sending DTLS CookieAck: m_localTag/m_peerTag: %X/%X", this->m_localTag, this->m_peerTag);
  bdDTLSCookieAck::~bdDTLSCookieAck(&v13);
}

/*
==============
bdDTLSAssociation::sendCookieEcho
==============
*/
void bdDTLSAssociation::sendCookieEcho(bdDTLSAssociation *this, const bdAddr *addr)
{
  unsigned __int8 m_cookieResends; 
  bdECCKey *ECCKey; 
  bdCommonAddr *m_ptr; 
  int v7; 
  bdDTLSAssociationTelemetry::bdDTLSAssociationState v8; 
  int m_localTag; 
  int m_peerTag; 
  unsigned int newOffset; 
  bdReference<bdCommonAddr> localCommonAddr; 
  __int64 v13; 
  bdDTLSCookieEcho v14; 
  char data[1296]; 

  v13 = -2i64;
  m_cookieResends = this->m_cookieResends;
  this->m_cookieResends = m_cookieResends + 1;
  if ( m_cookieResends > 0xF0u )
  {
    bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/dtls", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bddtlsassociation.cpp", "bdDTLSAssociation::sendCookieEcho", 0x47Eu, "Sending DTLS CookieEcho: Too many retries, closing");
    this->m_state = BD_DTLS_CLOSED;
    bdDTLSAssociation::finalizeTelemetry(this);
    bdDTLSAssociationTelemetry::setState(&this->m_telemetry, (const bdDTLSAssociationTelemetry::bdDTLSAssociationState)37);
  }
  else
  {
    ECCKey = this->m_ECCKey;
    m_ptr = this->m_localCommonAddr.m_ptr;
    localCommonAddr.m_ptr = m_ptr;
    if ( m_ptr )
      _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
    bdDTLSCookieEcho::bdDTLSCookieEcho(&v14, this->m_peerTag, &this->m_initAck, (bdReference<bdCommonAddr>)&localCommonAddr, ECCKey);
    bdDTLSCookieEcho::serialize(&v14, data, 0x508u, 0, &newOffset);
    v7 = bdRoutingLayer::sendTo(this->m_routingLayer, addr, data, newOffset);
    if ( v7 == newOffset )
    {
      m_peerTag = this->m_peerTag;
      m_localTag = this->m_localTag;
      bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/dtls", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bddtlsassociation.cpp", "bdDTLSAssociation::sendCookieEcho", 0x475u, "Sending DTLS CookieEcho: m_localTag/m_peerTag: %X/%X", m_localTag, m_peerTag);
      this->m_state = BD_DTLS_COOKIE_ECHOED;
      v8 = 39;
    }
    else
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdSocket/dtls", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bddtlsassociation.cpp", "bdDTLSAssociation::sendCookieEcho", 0x470u, "Sending DTLS CookieEcho: Failed to send cookie echo");
      v8 = 38;
    }
    bdDTLSAssociationTelemetry::setState(&this->m_telemetry, v8);
    bdStopwatch::start(&this->m_cookieTimer);
    bdDTLSCookieEcho::~bdDTLSCookieEcho(&v14);
  }
}

/*
==============
bdDTLSAssociation::sendData
==============
*/
__int64 bdDTLSAssociation::sendData(bdDTLSAssociation *this, const bdAddr *addr, const void *data, const unsigned int length)
{
  signed int v6; 
  unsigned int v7; 
  bdDTLSAssociationTelemetry::bdDTLSAssociationState v8; 
  char outData[1296]; 

  if ( length > 0x4F6 )
  {
    bdDTLSAssociationTelemetry::setState(&this->m_telemetry, (const bdDTLSAssociationTelemetry::bdDTLSAssociationState)46);
    return 4294967290i64;
  }
  else
  {
    v6 = bdDTLSAssociation::prepareData(this, data, length, outData, 0x508u);
    v7 = v6;
    if ( v6 < 0 )
    {
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/dtls", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bddtlsassociation.cpp", "bdDTLSAssociation::sendData", 0x4CFu, "Send DTLS Data: Packet creation failed.");
      v8 = 45;
    }
    else
    {
      v7 = bdRoutingLayer::sendTo(this->m_routingLayer, addr, outData, v6);
      v8 = 47;
    }
    bdDTLSAssociationTelemetry::setState(&this->m_telemetry, v8);
    return v7;
  }
}

/*
==============
bdDTLSAssociation::sendError
==============
*/
void bdDTLSAssociation::sendError(bdDTLSAssociation *this, const bdAddr *addr, const bdSecurityID *secID, const bdDTLSError::bdDTLSErrorType *type)
{
  int v7; 
  bdDTLSAssociationTelemetry::bdDTLSAssociationState v8; 
  bdDTLSError::bdDTLSErrorType v9; 
  unsigned int length; 
  __int64 v11; 
  bdDTLSError v12; 
  char data[1296]; 

  v11 = -2i64;
  bdDTLSError::bdDTLSError(&v12, this->m_peerTag, *type, secID);
  bdDTLSError::serialize(&v12, data, 0x508u, 0, &length);
  v7 = bdRoutingLayer::sendTo(this->m_routingLayer, addr, data, length);
  if ( v7 == length )
  {
    v8 = 44;
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdSocket/dtls", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bddtlsassociation.cpp", "bdDTLSAssociation::sendError", 0x4B3u, "Sending DTLS Error: Failed to send Error");
    v8 = 43;
  }
  bdDTLSAssociationTelemetry::setState(&this->m_telemetry, v8);
  v9 = *type;
  bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/dtls", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bddtlsassociation.cpp", "bdDTLSAssociation::sendError", 0x4BBu, "Sending DTLS Error: etype[%d]", v9);
  bdDTLSError::~bdDTLSError(&v12);
}

/*
==============
bdDTLSAssociation::sendInit
==============
*/
void bdDTLSAssociation::sendInit(bdDTLSAssociation *this)
{
  unsigned __int8 m_initResends; 
  bdRoutingLayer *m_routingLayer; 
  unsigned int v4; 
  bdAddrHandle *m_ptr; 
  int v6; 
  bdDTLSAssociationTelemetry::bdDTLSAssociationState v7; 
  int m_localTag; 
  unsigned int newOffset; 
  bdReference<bdAddrHandle> addrHandle; 
  __int64 v11; 
  bdSecurityID secID; 
  bdDTLSInit v13; 
  char data[1296]; 

  v11 = -2i64;
  m_initResends = this->m_initResends;
  this->m_initResends = m_initResends + 1;
  if ( m_initResends > 0xF0u )
  {
    bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/dtls", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bddtlsassociation.cpp", "bdDTLSAssociation::sendInit", 0x3F6u, "Sending DTLS Init: too many retries, closing");
    this->m_state = BD_DTLS_CLOSED;
    bdDTLSAssociation::finalizeTelemetry(this);
    bdDTLSAssociationTelemetry::setState(&this->m_telemetry, (const bdDTLSAssociationTelemetry::bdDTLSAssociationState)32);
  }
  else
  {
    bdSecurityID::bdSecurityID(&secID, &this->m_addrHandle.m_ptr->m_endpoint.m_secID);
    bdDTLSInit::bdDTLSInit(&v13, this->m_localTag, &secID, &this->m_localRandom, &this->m_cypherSuite);
    bdDTLSInit::serialize(&v13, data, 0x508u, 0, &newOffset);
    m_routingLayer = this->m_routingLayer;
    v4 = newOffset;
    m_ptr = this->m_addrHandle.m_ptr;
    addrHandle.m_ptr = m_ptr;
    if ( m_ptr )
      _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
    v6 = bdRoutingLayer::sendTo(m_routingLayer, (const bdReference<bdAddrHandle>)&addrHandle, data, v4);
    if ( v6 == newOffset )
    {
      v7 = 33;
    }
    else
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdSocket/dtls", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bddtlsassociation.cpp", "bdDTLSAssociation::sendInit", 0x3E7u, "Sending DTLS Init: Failed to send Init");
      v7 = 31;
    }
    bdDTLSAssociationTelemetry::setState(&this->m_telemetry, v7);
    bdStopwatch::start(&this->m_initTimer);
    m_localTag = this->m_localTag;
    bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/dtls", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bddtlsassociation.cpp", "bdDTLSAssociation::sendInit", 0x3F2u, "Sending DTLS Init: m_localTag: %X", m_localTag);
    bdDTLSInit::~bdDTLSInit(&v13);
    bdSecurityID::~bdSecurityID(&secID);
  }
}

/*
==============
bdDTLSAssociation::sendInitAck
==============
*/
void bdDTLSAssociation::sendInitAck(bdDTLSAssociation *this, const bdAddr *addr, const bdDTLSInit *init)
{
  unsigned __int16 peerTag; 
  unsigned __int16 peerTieTag; 
  unsigned __int16 localTieTag; 
  bdDTLSAssociation::bdDTLSStatus m_state; 
  __int32 v13; 
  __int32 v14; 
  unsigned __int16 m_localTag; 
  bdTrulyRandomImpl *Instance; 
  bdSecurityID v17; 
  bdSecurityID v18; 
  unsigned int timestamp; 
  int v20; 
  bdDTLSAssociationTelemetry::bdDTLSAssociationState v21; 
  __int64 cypherSuite; 
  bdDTLSRandom *localRandom; 
  bdDTLSRandom *peerRandom; 
  bdSecurityID v25; 
  __int64 v26; 
  bdSecurityID *v27; 
  bdDynamicHMAC v28; 
  bdSecurityID secID; 
  bdDTLSRandom in; 
  bdDTLSRandom buffer; 
  bdDTLSInitAck v32; 
  char data[1296]; 

  v26 = -2i64;
  _RDI = this;
  peerTag = bdDTLSInit::getInitTag((bdDTLSInit *)init);
  peerTieTag = 0;
  localTieTag = 0;
  _RAX = bdDTLSInit::getRandomData((bdDTLSInit *)init);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rbp+680h+buffer.m_dtlsRandom], ymm0
  }
  buffer.m_initialized = 1;
  __asm
  {
    vmovups ymm0, ymmword ptr [rdi+226h]
    vmovups ymmword ptr [rbp+680h+in], ymm0
  }
  in.m_initialized = 1;
  m_state = _RDI->m_state;
  if ( m_state == BD_DTLS_CLOSED )
    goto LABEL_7;
  v13 = m_state - 1;
  if ( !v13 )
    goto LABEL_7;
  v14 = v13 - 1;
  if ( !v14 )
  {
    peerTieTag = _RDI->m_peerTag;
    localTieTag = _RDI->m_localTag;
LABEL_7:
    m_localTag = _RDI->m_localTag;
    goto LABEL_8;
  }
  if ( v14 != 1 )
    goto LABEL_15;
  m_localTag = bdDTLSAssociation::makeTag(_RDI);
  Instance = bdSingleton<bdTrulyRandomImpl>::getInstance();
  bdTrulyRandomImpl::getRandomUByte8(Instance, in.m_dtlsRandom, 0x20u);
  in.m_initialized = 1;
  peerTieTag = _RDI->m_peerTag;
  localTieTag = _RDI->m_localTag;
LABEL_8:
  bdSecurityID::bdSecurityID(&secID);
  bdDTLSInit::getSecID((bdDTLSInit *)init, &secID);
  v27 = &v25;
  bdSecurityID::bdSecurityID(&v25, &secID);
  v18 = v17;
  timestamp = bdPlatformTiming::getLoResTimeStamp();
  bdDTLSInitAck::bdDTLSInitAck(&v32, peerTag, m_localTag, m_localTag, peerTag, localTieTag, peerTieTag, _RDI->m_cypherSuite, &in, &buffer, timestamp, addr, v18);
  bdHandleAssert(bdDTLSAssociation::m_cookieKey.m_initialised, "m_initialised", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdnonce.inl", "bdNonce<16>::getData", 0x26u, "Attempted to retrieve a nonce without initialising it first");
  bdDynamicHMAC::bdDynamicHMAC(&v28, _RDI->m_hashAlgorithm, bdDTLSAssociation::m_cookieKey.m_nonce, 0x10u);
  bdHandleAssert(v28.m_hmac != NULL, "(m_hmac != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcryptodynamic.h", "bdDynamicHMAC::getHMAC", 0xB9u, "HMac Object is NULL");
  if ( bdDTLSInitAck::sign(&v32, v28.m_hmac) )
  {
    bdDTLSInitAck::serialize(&v32, data, 0x508u, 0, (unsigned int *)&v25);
    v20 = bdRoutingLayer::sendTo(_RDI->m_routingLayer, addr, data, *(const unsigned int *)v25.ab);
    if ( v20 == *(_DWORD *)v25.ab )
    {
      v21 = 36;
    }
    else
    {
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/dtls", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bddtlsassociation.cpp", "bdDTLSAssociation::sendInitAck", 0x44Eu, "Sending DTLS InitAck: Problem sending");
      v21 = BD_DTLS_ESTABLISHED|0x20;
    }
    bdDTLSAssociationTelemetry::setState(&_RDI->m_telemetry, v21);
    LODWORD(peerRandom) = peerTag;
    LODWORD(localRandom) = m_localTag;
    LODWORD(cypherSuite) = _RDI->m_localTag;
    bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/dtls", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bddtlsassociation.cpp", "bdDTLSAssociation::sendInitAck", 0x456u, "Sending DTLS InitAck: m_localTag/localTag/m_peerTag: %X/%X/%X", cypherSuite, localRandom, peerRandom);
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdSocket/dtls", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bddtlsassociation.cpp", "bdDTLSAssociation::sendInitAck", 0x45Au, "Failed to sign DTLS InitAck message.");
    bdDTLSAssociationTelemetry::setState(&_RDI->m_telemetry, (const bdDTLSAssociationTelemetry::bdDTLSAssociationState)34);
  }
  bdDynamicHMAC::~bdDynamicHMAC(&v28);
  bdDTLSInitAck::~bdDTLSInitAck(&v32);
  bdSecurityID::~bdSecurityID(&secID);
LABEL_15:
  bdCryptoUtils::zeroBuffer(&in, 0x20ui64);
  bdCryptoUtils::zeroBuffer(&buffer, 0x20ui64);
}

/*
==============
bdDTLSAssociation::sendTo
==============
*/
__int64 bdDTLSAssociation::sendTo(bdDTLSAssociation *this, const bdAddr *addr, const void *data, const unsigned int length)
{
  bdDTLSAssociation::bdDTLSStatus m_state; 
  signed int v7; 
  unsigned int v8; 
  bdDTLSAssociationTelemetry::bdDTLSAssociationState v9; 
  char outData[1296]; 

  m_state = this->m_state;
  if ( m_state < BD_DTLS_CLOSED )
    return 0xFFFFFFFFi64;
  if ( m_state <= BD_DTLS_COOKIE_ECHOED )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/dtls", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bddtlsassociation.cpp", "bdDTLSAssociation::sendTo", 0x90u, "Not connected. Cannot send.");
    return 0xFFFFFFFFi64;
  }
  if ( m_state != BD_DTLS_ESTABLISHED )
    return 0xFFFFFFFFi64;
  if ( length > 0x4F6 )
  {
    v8 = -6;
    v9 = 46;
  }
  else
  {
    v7 = bdDTLSAssociation::prepareData(this, data, length, outData, 0x508u);
    v8 = v7;
    if ( v7 < 0 )
    {
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/dtls", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bddtlsassociation.cpp", "bdDTLSAssociation::sendData", 0x4CFu, "Send DTLS Data: Packet creation failed.");
      v9 = 45;
    }
    else
    {
      v8 = bdRoutingLayer::sendTo(this->m_routingLayer, addr, outData, v7);
      v9 = 47;
    }
  }
  bdDTLSAssociationTelemetry::setState(&this->m_telemetry, v9);
  return v8;
}

/*
==============
bdDTLSAssociation::setState
==============
*/
void bdDTLSAssociation::setState(bdDTLSAssociation *this, bdDTLSAssociation::bdDTLSStatus status)
{
  this->m_state = status;
  if ( status )
  {
    if ( status == BD_DTLS_ESTABLISHED )
      bdDTLSAssociationTelemetry::setEstablishedTime(&this->m_telemetry);
  }
  else
  {
    bdDTLSAssociation::finalizeTelemetry(this);
  }
}

/*
==============
bdDTLSAssociation::updateAddress
==============
*/
void bdDTLSAssociation::updateAddress(bdDTLSAssociation *this, const bdSecurityID *secID, const bdReference<bdCommonAddr> *commonAddr, const bdAddr *addr)
{
  bdAddrHandle *m_ptr; 
  bdAddressMap *m_addrMap; 
  bdCommonAddr *v9; 
  bdCommonAddr *v10; 
  const bdCommonAddr *v11; 
  bool v12; 
  bool v13; 
  bdCommonAddr *v14; 
  const bdEndpoint *v15; 
  bdReference<bdCommonAddr> ca; 
  bdReference<bdCommonAddr> addra; 
  __int64 v25; 
  const bdCommonAddr *v26; 
  bdEndpoint v27; 

  v25 = -2i64;
  _RBP = addr;
  _RSI = this;
  m_ptr = this->m_addrHandle.m_ptr;
  if ( m_ptr )
  {
    v10 = commonAddr->m_ptr;
    v11 = m_ptr->m_endpoint.m_ca.m_ptr;
    v26 = v11;
    if ( v11 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v11->m_refCount, 1u);
    v12 = bdCommonAddr::operator!=(v10, v11);
    if ( v11 && _InterlockedExchangeAdd((volatile signed __int32 *)&v11->m_refCount, 0xFFFFFFFF) == 1 )
      ((void (__fastcall *)(const bdCommonAddr *, __int64))v11->~bdReferencable)(v11, 1i64);
    if ( v12 )
    {
      v13 = bdSecurityID::operator==((bdSecurityID *)secID, &_RSI->m_addrHandle.m_ptr->m_endpoint.m_secID);
      bdHandleAssert(v13, "secID == m_addrHandle->m_endpoint.getSecID()", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bddtlsassociation.cpp", "bdDTLSAssociation::updateAddress", 0x1B3u, "Security ids expected to match when updating DTLS address");
      v14 = commonAddr->m_ptr;
      addra.m_ptr = v14;
      if ( v14 )
        _InterlockedExchangeAdd((volatile signed __int32 *)&v14->m_refCount, 1u);
      bdEndpoint::bdEndpoint(&v27, (const bdReference<bdCommonAddr>)&addra, secID);
      bdEndpoint::operator=(&_RSI->m_addrHandle.m_ptr->m_endpoint, v15);
      bdSecurityID::~bdSecurityID(&v27.m_secID);
      if ( v27.m_ca.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v27.m_ca.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v27.m_ca.m_ptr )
        ((void (__fastcall *)(bdCommonAddr *, __int64))v27.m_ca.m_ptr->~bdReferencable)(v27.m_ca.m_ptr, 1i64);
    }
  }
  else
  {
    m_addrMap = this->m_addrMap;
    v9 = commonAddr->m_ptr;
    ca.m_ptr = v9;
    if ( v9 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v9->m_refCount, 1u);
    bdAddressMap::getAddrHandle(m_addrMap, (const bdReference<bdCommonAddr>)&ca, secID, &_RSI->m_addrHandle);
  }
  bdAddrHandle::setRealAddr(_RSI->m_addrHandle.m_ptr, _RBP);
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+0]
    vmovups ymmword ptr [rsi+160h], ymm0
    vmovups ymm1, ymmword ptr [rbp+20h]
    vmovups ymmword ptr [rsi+180h], ymm1
    vmovups ymm0, ymmword ptr [rbp+40h]
    vmovups ymmword ptr [rsi+1A0h], ymm0
    vmovups ymm1, ymmword ptr [rbp+60h]
    vmovups ymmword ptr [rsi+1C0h], ymm1
    vmovups xmm0, xmmword ptr [rbp+80h]
    vmovups xmmword ptr [rsi+1E0h], xmm0
    vmovsd  xmm1, qword ptr [rbp+90h]
    vmovsd  qword ptr [rsi+1F0h], xmm1
  }
}

/*
==============
bdDTLSAssociation::updateTelemetry
==============
*/
void bdDTLSAssociation::updateTelemetry(bdDTLSAssociation *this)
{
  const bdAddr *v2; 
  bdSequenceNumber *LastSequenceNumber; 
  int Value; 
  int v5; 
  bdAddr v6; 

  bdDTLSAssociationTelemetry::setLifetime(&this->m_telemetry);
  bdAddr::bdAddr(&v6, &this->m_addr);
  bdDTLSAssociationTelemetry::setPeerAddr(&this->m_telemetry, v2);
  bdDTLSAssociationTelemetry::setInitResends(&this->m_telemetry, this->m_initResends);
  bdDTLSAssociationTelemetry::setCookieResends(&this->m_telemetry, this->m_cookieResends);
  LastSequenceNumber = (bdSequenceNumber *)bdSequenceNumberStore::getLastSequenceNumber(&this->m_incomingSeqNums);
  Value = bdSequenceNumber::getValue(LastSequenceNumber);
  v5 = bdSequenceNumber::getValue(&this->m_seqNum);
  bdDTLSAssociationTelemetry::setSeqNums(&this->m_telemetry, v5, Value);
}

/*
==============
bdDTLSAssociation::verify
==============
*/
char bdDTLSAssociation::verify(bdDTLSAssociation *this, const bdDTLSData *dataPacket)
{
  const bdSequenceNumber *LastSequenceNumber; 
  unsigned int m_counter; 
  bdSequenceNumberStore::bdSequenceStatus v6; 
  int v8; 
  int v9; 
  int v10; 
  int Value; 
  bdSequenceNumber last; 
  bdSequenceNumber thisSeq; 
  bdSequenceNumber v14; 

  bdSequenceNumber::bdSequenceNumber(&v14, -1);
  if ( dataPacket->m_vtag == this->m_localTag )
  {
    LastSequenceNumber = bdSequenceNumberStore::getLastSequenceNumber(&this->m_incomingSeqNums);
    m_counter = dataPacket->m_counter;
    last.m_seqNum = LastSequenceNumber->m_seqNum;
    bdSequenceNumber::bdSequenceNumber(&thisSeq, &last, m_counter, 0x10u);
    v6 = bdSequenceNumberStore::check(&this->m_incomingSeqNums, &thisSeq);
    if ( v6 == BD_SN_INVALID_SMALLER )
    {
      Value = bdSequenceNumber::getValue(&last);
      v9 = bdSequenceNumber::getValue(&thisSeq);
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/dtls", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bddtlsassociation.cpp", "bdDTLSAssociation::verify", 0x638u, "bdDTLSAssociation: Invalid seq num (%u) is smaller than last (%u).", v9, Value);
      return 0;
    }
    if ( v6 != BD_SN_VALID_SMALLER && (unsigned int)(v6 - 1) > 1 )
    {
      v10 = bdSequenceNumber::getValue(&last);
      v8 = bdSequenceNumber::getValue(&thisSeq);
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/dtls", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bddtlsassociation.cpp", "bdDTLSAssociation::verify", 0x63Eu, "bdDTLSAssociation: Invalid seq num (%u) is a duplicate of the last (%u).", v8, v10);
      return 0;
    }
    return 1;
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/dtls", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bddtlsassociation.cpp", "bdDTLSAssociation::verify", 0x645u, "bdDTLSAssociation: vtag not the same as local tag.");
    return 0;
  }
}

