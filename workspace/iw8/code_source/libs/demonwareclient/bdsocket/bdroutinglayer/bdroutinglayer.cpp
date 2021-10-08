/*
==============
bdRoutingLayer::getBoundAssociation
==============
*/

const bdReference<bdRelayAssociation> *__fastcall bdRoutingLayer::getBoundAssociation(bdRoutingLayer *this)
{
  return ?getBoundAssociation@bdRoutingLayer@@QEBAAEBV?$bdReference@VbdRelayAssociation@@@@XZ(this);
}

/*
==============
bdRoutingLayer::sendTo
==============
*/

int __fastcall bdRoutingLayer::sendTo(bdRoutingLayer *this, const bdReference<bdAddrHandle> addrHandle, const void *data, const unsigned int length)
{
  return ?sendTo@bdRoutingLayer@@QEAAHV?$bdReference@VbdAddrHandle@@@@PEBXI@Z(this, addrHandle, data, length);
}

/*
==============
bdRoutingLayer::getNumBindingAssociations
==============
*/

unsigned int __fastcall bdRoutingLayer::getNumBindingAssociations(bdRoutingLayer *this)
{
  return ?getNumBindingAssociations@bdRoutingLayer@@QEBAIXZ(this);
}

/*
==============
bdRoutingLayer::connect
==============
*/

bool __fastcall bdRoutingLayer::connect(bdRoutingLayer *this, const bdReference<bdCommonAddr> remote, bdRelayAssociationListener *listener)
{
  return ?connect@bdRoutingLayer@@QEAA_NV?$bdReference@VbdCommonAddr@@@@PEAVbdRelayAssociationListener@@@Z(this, remote, listener);
}

/*
==============
bdRoutingLayer::pump
==============
*/

void __fastcall bdRoutingLayer::pump(bdRoutingLayer *this)
{
  ?pump@bdRoutingLayer@@QEAAXXZ(this);
}

/*
==============
bdRoutingLayer::setClientAuthToken
==============
*/

void __fastcall bdRoutingLayer::setClientAuthToken(bdRoutingLayer *this, const bdClientAuthToken *clientAuthToken, const unsigned int titleID, const unsigned __int64 userID)
{
  ?setClientAuthToken@bdRoutingLayer@@QEAAXAEBVbdClientAuthToken@@I_K@Z(this, clientAuthToken, titleID, userID);
}

/*
==============
bdRoutingLayer::~bdRoutingLayer
==============
*/

void __fastcall bdRoutingLayer::~bdRoutingLayer(bdRoutingLayer *this)
{
  ??1bdRoutingLayer@@QEAA@XZ(this);
}

/*
==============
bdRoutingLayer::isConnectInProgress
==============
*/

bool __fastcall bdRoutingLayer::isConnectInProgress(bdRoutingLayer *this, const bdReference<bdCommonAddr> remote)
{
  return ?isConnectInProgress@bdRoutingLayer@@QEBA_NV?$bdReference@VbdCommonAddr@@@@@Z(this, remote);
}

/*
==============
bdRoutingLayer::sendMMsgRaw
==============
*/

int __fastcall bdRoutingLayer::sendMMsgRaw(bdRoutingLayer *this, const bdMsgHdr *msgVec, const unsigned int msgVecLen, unsigned int *numSent)
{
  return ?sendMMsgRaw@bdRoutingLayer@@QEAAHQEBVbdMsgHdr@@IAEAI@Z(this, msgVec, msgVecLen, numSent);
}

/*
==============
bdRoutingLayer::bdRoutingLayer
==============
*/

void __fastcall bdRoutingLayer::bdRoutingLayer(bdRoutingLayer *this)
{
  ??0bdRoutingLayer@@QEAA@XZ(this);
}

/*
==============
bdRoutingLayer::getLastReceived
==============
*/

double __fastcall bdRoutingLayer::getLastReceived(bdRoutingLayer *this)
{
  double result; 

  *(float *)&result = ?getLastReceived@bdRoutingLayer@@QEBAMXZ(this);
  return result;
}

/*
==============
bdRoutingLayer::init
==============
*/

bool __fastcall bdRoutingLayer::init(bdRoutingLayer *this, bdSocket *socket)
{
  return ?init@bdRoutingLayer@@QEAA_NPEAVbdSocket@@@Z(this, socket);
}

/*
==============
bdRoutingLayer::getRelayPing
==============
*/

double __fastcall bdRoutingLayer::getRelayPing(bdRoutingLayer *this)
{
  double result; 

  *(float *)&result = ?getRelayPing@bdRoutingLayer@@QEBAMXZ(this);
  return result;
}

/*
==============
bdRoutingLayer::disconnectExcessRelays
==============
*/

void __fastcall bdRoutingLayer::disconnectExcessRelays(bdRoutingLayer *this)
{
  ?disconnectExcessRelays@bdRoutingLayer@@QEBAXXZ(this);
}

/*
==============
bdRoutingLayer::receiveFrom
==============
*/

int __fastcall bdRoutingLayer::receiveFrom(bdRoutingLayer *this, bdAddr *realAddr, void *data, const unsigned int dataSize)
{
  return ?receiveFrom@bdRoutingLayer@@QEAAHAEAVbdAddr@@PEAXI@Z(this, realAddr, data, dataSize);
}

/*
==============
bdRoutingLayer::getRelayStatus
==============
*/

bdRelayAssociationStatus __fastcall bdRoutingLayer::getRelayStatus(bdRoutingLayer *this)
{
  return ?getRelayStatus@bdRoutingLayer@@QEBA?AW4bdRelayAssociationStatus@@XZ(this);
}

/*
==============
bdRoutingLayer::bindToRelay
==============
*/

bool __fastcall bdRoutingLayer::bindToRelay(bdRoutingLayer *this, const bdRelayAuthToken *authToken, bdRelayAssociationListener *listener)
{
  return ?bindToRelay@bdRoutingLayer@@QEAA_NAEBVbdRelayAuthToken@@PEAVbdRelayAssociationListener@@@Z(this, authToken, listener);
}

/*
==============
bdRoutingLayer::sendTo
==============
*/

int __fastcall bdRoutingLayer::sendTo(bdRoutingLayer *this, const bdAddr *addr, const void *data, const unsigned int length)
{
  return ?sendTo@bdRoutingLayer@@QEAAHAEBVbdAddr@@PEBXI@Z(this, addr, data, length);
}

/*
==============
bdRoutingLayer::disconnected
==============
*/

void __fastcall bdRoutingLayer::disconnected(bdRoutingLayer *this, const bdAddr *addr)
{
  ?disconnected@bdRoutingLayer@@QEAAXAEBVbdAddr@@@Z(this, addr);
}

/*
==============
bdRoutingLayer::prepareSendTo
==============
*/

int __fastcall bdRoutingLayer::prepareSendTo(bdRoutingLayer *this, const bdAddr *addr, const void *data, const unsigned int length, void *outData, const unsigned int outDataLength, bdMsgHdr *outMsg)
{
  return ?prepareSendTo@bdRoutingLayer@@QEAAHAEBVbdAddr@@PEBXIPEAXIAEAVbdMsgHdr@@@Z(this, addr, data, length, outData, outDataLength, outMsg);
}

/*
==============
bdRoutingLayer::bdRoutingLayer
==============
*/
void bdRoutingLayer::bdRoutingLayer(bdRoutingLayer *this)
{
  unsigned int PowerOf2; 
  bdHashMap<bdAddr,bdReference<bdRelayAssociation>,bdAddrHash>::Node **v8; 

  this->m_associations.m_numIterators.m_value._My_val = 0;
  this->m_associations.m_size = 0;
  PowerOf2 = bdBitOperations::nextPowerOf2(4u);
  this->m_associations.m_capacity = PowerOf2;
  this->m_associations.m_loadFactor = 0.75;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rdx
    vmulss  xmm1, xmm0, cs:__real@3f400000
    vcvttss2si rcx, xmm1
  }
  this->m_associations.m_threshold = _RCX;
  v8 = (bdHashMap<bdAddr,bdReference<bdRelayAssociation>,bdAddrHash>::Node **)bdMemory::allocate(8i64 * PowerOf2);
  this->m_associations.m_map = v8;
  memset_0(v8, 0, 8i64 * this->m_associations.m_capacity);
  this->m_boundAssociation.m_ptr = NULL;
  this->m_socket = NULL;
  bdClientAuthToken::bdClientAuthToken(&this->m_clientAuthToken);
  bdSharedMutex::bdSharedMutex(&this->m_mutex);
  bdGlobalStopwatch::bdGlobalStopwatch(&this->m_lastReceived);
}

/*
==============
bdRoutingLayer::~bdRoutingLayer
==============
*/
void bdRoutingLayer::~bdRoutingLayer(bdRoutingLayer *this)
{
  bdRelayAssociation *m_ptr; 
  bdRelayAssociation *v3; 

  bdSharedMutex::lock(&this->m_mutex);
  bdHashMap<bdAddr,bdReference<bdRelayAssociation>,bdAddrHash>::clear(&this->m_associations);
  bdSharedMutex::unlock(&this->m_mutex);
  bdSharedMutex::~bdSharedMutex(&this->m_mutex);
  bdClientAuthToken::~bdClientAuthToken(&this->m_clientAuthToken);
  m_ptr = this->m_boundAssociation.m_ptr;
  if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
  {
    v3 = this->m_boundAssociation.m_ptr;
    if ( v3 )
      ((void (__fastcall *)(bdRelayAssociation *, __int64))v3->~bdReferencable)(v3, 1i64);
    this->m_boundAssociation.m_ptr = NULL;
  }
  bdHashMap<bdAddr,bdReference<bdRelayAssociation>,bdAddrHash>::clear(&this->m_associations);
  bdMemory::deallocate(this->m_associations.m_map);
}

/*
==============
bdRoutingLayer::bindToRelay
==============
*/
bool bdRoutingLayer::bindToRelay(bdRoutingLayer *this, const bdRelayAuthToken *authToken, bdRelayAssociationListener *listener)
{
  unsigned __int64 RelayID; 
  const bdAddr *RelayAddr; 
  bdAddrString *v8; 
  const char *String; 
  bool v10; 
  bdAddr *v11; 
  bdRelayAssociation *v12; 
  const bdAddr *v13; 
  bdRelayAssociation *m_ptr; 
  unsigned __int64 v15; 
  const bdAddr *v16; 
  bool v17; 
  bdRelayAssociation *v18; 
  bdRelayAssociation *v19; 
  const bdAddr *v20; 
  __int32 v21; 
  bdRelayAssociationType Type; 
  unsigned __int64 v23; 
  unsigned __int64 v24; 
  bdRelayAssociation *v25; 
  bdRelayAssociation *v26; 
  const bdAddr *v27; 
  bdReference<bdRelayAssociation> *p_m_boundAssociation; 
  __int64 v30; 
  bdReference<bdRelayAssociation> value; 
  bdReference<bdRelayAssociation> v32; 
  bdSharedMutex *p_m_mutex; 
  __int64 v34; 
  bdAddrString v35; 

  v34 = -2i64;
  RelayID = bdRelayAuthToken::getRelayID((bdRelayAuthToken *)authToken);
  bdLogMessage(BD_LOG_INFO, "info/", "routing-layer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdroutinglayer.cpp", "bdRoutingLayer::bindToRelay", 0x2Cu, "Trying to bind to relay [%llu].", RelayID);
  RelayAddr = bdRelayAuthToken::getRelayAddr((bdRelayAuthToken *)authToken);
  bdAddrString::bdAddrString(&v35, RelayAddr);
  String = bdAddrString::getString(v8);
  bdLogMessage(BD_LOG_INFO, "info/", "routing-layer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdroutinglayer.cpp", "bdRoutingLayer::bindToRelay", 0x2Fu, "Relay addr is [%s].", String);
  v10 = 1;
  v11 = (bdAddr *)bdRelayAuthToken::getRelayAddr((bdRelayAuthToken *)authToken);
  if ( !bdAddr::isValid(v11) || !bdRelayAuthToken::getRelayID((bdRelayAuthToken *)authToken) )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "routing-layer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdroutinglayer.cpp", "bdRoutingLayer::bindToRelay", 0x35u, "Auth token relay address/id is invalid.");
    return 0;
  }
  p_m_mutex = &this->m_mutex;
  bdSharedMutex::lock(&this->m_mutex);
  v12 = NULL;
  value.m_ptr = NULL;
  v13 = bdRelayAuthToken::getRelayAddr((bdRelayAuthToken *)authToken);
  if ( !bdHashMap<bdAddr,bdReference<bdRelayAssociation>,bdAddrHash>::get(&this->m_associations, v13, &value) )
  {
    v24 = bdRelayAuthToken::getRelayID((bdRelayAuthToken *)authToken);
    bdLogMessage(BD_LOG_INFO, "info/", "routing-layer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdroutinglayer.cpp", "bdRoutingLayer::bindToRelay", 0x6Cu, "Setting bound relay with id [%llu].", v24);
    v25 = (bdRelayAssociation *)bdMemory::allocate(0x588ui64);
    v32.m_ptr = v25;
    if ( v25 )
    {
      bdRelayAssociation::bdRelayAssociation(v25, this->m_socket, authToken, &this->m_clientAuthToken, this->m_titleID, this->m_userID, listener);
      v12 = v26;
    }
    v32.m_ptr = v12;
    if ( v12 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v12->m_refCount, 1u);
    v27 = bdRelayAuthToken::getRelayAddr((bdRelayAuthToken *)authToken);
    if ( bdHashMap<bdAddr,bdReference<bdRelayAssociation>,bdAddrHash>::put(&this->m_associations, v27, &v32) )
    {
      p_m_boundAssociation = &this->m_boundAssociation;
      if ( &v32 != p_m_boundAssociation )
      {
        if ( p_m_boundAssociation->m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&p_m_boundAssociation->m_ptr->m_refCount, 0xFFFFFFFF) == 1 && p_m_boundAssociation->m_ptr )
          ((void (__fastcall *)(bdRelayAssociation *, __int64))p_m_boundAssociation->m_ptr->~bdReferencable)(p_m_boundAssociation->m_ptr, 1i64);
        p_m_boundAssociation->m_ptr = v12;
        if ( v12 )
          _InterlockedExchangeAdd((volatile signed __int32 *)&v12->m_refCount, 1u);
      }
      v10 = bdRelayAssociation::start(v12);
    }
    else
    {
      v10 = 0;
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "routing-layer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdroutinglayer.cpp", "bdRoutingLayer::bindToRelay", 0x71u, "Failed to put new association in map.");
    }
    if ( v12 && _InterlockedExchangeAdd((volatile signed __int32 *)&v12->m_refCount, 0xFFFFFFFF) == 1 )
      ((void (__fastcall *)(bdRelayAssociation *, __int64))v12->~bdReferencable)(v12, 1i64);
    m_ptr = value.m_ptr;
    goto LABEL_41;
  }
  m_ptr = value.m_ptr;
  if ( bdRelayAssociation::getStatus(value.m_ptr) )
  {
    v21 = bdRelayAssociation::getType(m_ptr) - 1;
    if ( v21 )
    {
      if ( v21 == 1 )
      {
        bdLogMessage(BD_LOG_INFO, "info/", "routing-layer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdroutinglayer.cpp", "bdRoutingLayer::bindToRelay", 0x60u, "Found existing open JOIN, asking for upgrade.");
        bdReference<bdRelayAssociation>::operator=(&this->m_boundAssociation, &value);
        v10 = bdRelayAssociation::upgradeToBind(m_ptr, authToken);
      }
      else
      {
        Type = bdRelayAssociation::getType(m_ptr);
        v23 = bdRelayAssociation::getRelayID(m_ptr);
        LODWORD(v30) = Type;
        bdHandleAssert(1, "true", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdroutinglayer.cpp", "bdRoutingLayer::bindToRelay", 0x65u, "Unknown association [%llu] type [%u] in bindToRelay.", v23, v30);
      }
    }
    else
    {
      bdLogMessage(BD_LOG_INFO, "info/", "routing-layer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdroutinglayer.cpp", "bdRoutingLayer::bindToRelay", 0x5Cu, "There already is an active bind association to the relay.");
      v10 = 0;
    }
    goto LABEL_41;
  }
  v15 = bdRelayAssociation::getRelayID(m_ptr);
  bdLogMessage(BD_LOG_INFO, "info/", "routing-layer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdroutinglayer.cpp", "bdRoutingLayer::bindToRelay", 0x48u, "Found existing closed association [%llu]. Deleting and restarting.", v15);
  v16 = bdRelayAuthToken::getRelayAddr((bdRelayAuthToken *)authToken);
  v17 = bdHashMap<bdAddr,bdReference<bdRelayAssociation>,bdAddrHash>::remove(&this->m_associations, v16);
  v18 = (bdRelayAssociation *)bdMemory::allocate(0x588ui64);
  v32.m_ptr = v18;
  if ( v18 )
  {
    bdRelayAssociation::bdRelayAssociation(v18, this->m_socket, authToken, &this->m_clientAuthToken, this->m_titleID, this->m_userID, listener);
    v12 = v19;
  }
  if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
    ((void (__fastcall *)(bdRelayAssociation *, __int64))value.m_ptr->~bdReferencable)(value.m_ptr, 1i64);
  m_ptr = v12;
  value.m_ptr = v12;
  if ( v12 )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)&v12->m_refCount, 1u);
    m_ptr = value.m_ptr;
  }
  if ( !v17 || (v20 = bdRelayAuthToken::getRelayAddr((bdRelayAuthToken *)authToken), !bdHashMap<bdAddr,bdReference<bdRelayAssociation>,bdAddrHash>::put(&this->m_associations, v20, &value)) )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "routing-layer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdroutinglayer.cpp", "bdRoutingLayer::bindToRelay", 0x4Fu, "Failed to replace dead association with a new one.");
    goto LABEL_17;
  }
  bdReference<bdRelayAssociation>::operator=(&this->m_boundAssociation, &value);
  if ( !bdRelayAssociation::start(v12) )
  {
LABEL_17:
    v10 = 0;
    goto LABEL_41;
  }
  v10 = 1;
LABEL_41:
  if ( m_ptr )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
      ((void (__fastcall *)(bdRelayAssociation *, __int64))value.m_ptr->~bdReferencable)(value.m_ptr, 1i64);
  }
  bdSharedMutex::unlock(p_m_mutex);
  return v10;
}

/*
==============
bdRoutingLayer::connect
==============
*/
bool bdRoutingLayer::connect(bdRoutingLayer *this, const bdReference<bdCommonAddr> remote, bdRelayAssociationListener *listener)
{
  bdRelayJoinData *v6; 
  bdAddr *RelayAddr; 
  unsigned __int64 RelayID; 
  bool v9; 
  bdSharedMutex *p_m_mutex; 
  const bdAddr *v11; 
  bdRelayAssociation *v12; 
  const bdAddr *v13; 
  unsigned __int64 v14; 
  bdRelayAssociation *v15; 
  bdRelayAssociation *v16; 
  bdRelayAssociation *v17; 
  const bdAddr *v18; 
  const bdAddr *v19; 
  const bdAddr *v20; 
  bdAddrString *v21; 
  const char *String; 
  bdRelayAssociationStatus Status; 
  bdRelayAssociationStatus v24; 
  const bdAddr *v26; 
  unsigned int RoutingID; 
  unsigned __int64 v28; 
  const bdRelayRoute *v29; 
  void (__fastcall *onRelayConnectionSuccess)(bdRelayAssociationListener *, const bdReference<bdCommonAddr>, const bdAddr *); 
  bdCommonAddr_vtbl *v31; 
  bdCommonAddr *v32; 
  bdCommonAddr *v33; 
  char *format; 
  __int64 v35; 
  bdReference<bdRelayAssociation> value; 
  bdHashMap<bdAddr,bdReference<bdRelayAssociation>,bdAddrHash> *p_m_associations; 
  bdRelayAssociation *v38; 
  bdCommonAddr_vtbl *v39; 
  bdReference<bdCommonAddr> remotea; 
  bdReference<bdCommonAddr> v41; 
  bdSharedMutex *v42; 
  __int64 v43; 
  bdCommonAddr *m_ptr; 
  bdSharedMutex *v45; 
  bdSharedMutex *v46; 
  bdRelayRoute v47; 
  bdAddrString v48; 
  bdAddr v49; 

  v43 = -2i64;
  p_m_associations = &this->m_associations;
  m_ptr = remote.m_ptr;
  v6 = (bdRelayJoinData *)&remote.m_ptr->__vftable[119];
  RelayAddr = (bdAddr *)bdRelayJoinData::getRelayAddr(v6);
  if ( bdAddr::isValid(RelayAddr) && bdRelayJoinData::getRelayID(v6) && bdRelayJoinData::getRoutingID(v6) )
  {
    RelayID = bdRelayJoinData::getRelayID((bdRelayJoinData *)&remote.m_ptr->__vftable[119]);
    bdLogMessage(BD_LOG_INFO, "info/", "routing-layer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdroutinglayer.cpp", "bdRoutingLayer::connect", 0x88u, "Creating association for relay connection to relay [%llu].", RelayID);
    v9 = 1;
    value.m_ptr = NULL;
    p_m_mutex = &this->m_mutex;
    v45 = &this->m_mutex;
    bdSharedMutex::lock_shared(&this->m_mutex);
    v11 = bdRelayJoinData::getRelayAddr((bdRelayJoinData *)&remote.m_ptr->__vftable[119]);
    bdHashMap<bdAddr,bdReference<bdRelayAssociation>,bdAddrHash>::get(&this->m_associations, v11, &value);
    bdSharedMutex::unlock_shared(&this->m_mutex);
    v12 = value.m_ptr;
    if ( value.m_ptr )
    {
      if ( bdRelayAssociation::getStatus(value.m_ptr) )
        goto LABEL_24;
      v42 = &this->m_mutex;
      bdSharedMutex::lock(p_m_mutex);
      v13 = bdRelayAssociation::getRelayAddr(v12);
      v9 = bdHashMap<bdAddr,bdReference<bdRelayAssociation>,bdAddrHash>::remove(p_m_associations, v13);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v12->m_refCount, 0xFFFFFFFF) == 1 )
        ((void (__fastcall *)(bdRelayAssociation *, __int64))value.m_ptr->~bdReferencable)(value.m_ptr, 1i64);
      v12 = NULL;
      value.m_ptr = NULL;
      if ( !v9 )
      {
        v14 = bdRelayAssociation::getRelayID(NULL);
        bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "routing-layer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdroutinglayer.cpp", "bdRoutingLayer::connect", 0x9Au, "Could not remove association [%llu] from the map.", v14);
      }
      bdSharedMutex::unlock(v42);
    }
    v15 = (bdRelayAssociation *)bdMemory::allocate(0x588ui64);
    v38 = v15;
    if ( v15 )
    {
      bdRelayAssociation::bdRelayAssociation(v15, *(bdSocket **)&p_m_associations[1].m_loadFactor, (const bdRelayJoinData *)&remote.m_ptr->__vftable[119], (const bdClientAuthToken *)&p_m_associations[1].m_map, LODWORD(p_m_associations[4].m_loadFactor), (const unsigned __int64)p_m_associations[4].m_map, listener);
      v17 = v16;
    }
    else
    {
      v17 = NULL;
    }
    if ( v12 && _InterlockedExchangeAdd((volatile signed __int32 *)&v12->m_refCount, 0xFFFFFFFF) == 1 )
      ((void (__fastcall *)(bdRelayAssociation *, __int64))value.m_ptr->~bdReferencable)(value.m_ptr, 1i64);
    v12 = v17;
    value.m_ptr = v17;
    if ( v17 )
    {
      _InterlockedExchangeAdd((volatile signed __int32 *)&v17->m_refCount, 1u);
      v12 = value.m_ptr;
    }
    v46 = &this->m_mutex;
    bdSharedMutex::lock(p_m_mutex);
    if ( v9 && (v18 = bdRelayJoinData::getRelayAddr((bdRelayJoinData *)&remote.m_ptr->__vftable[119]), bdHashMap<bdAddr,bdReference<bdRelayAssociation>,bdAddrHash>::put(p_m_associations, v18, &value)) )
    {
      v9 = 1;
    }
    else
    {
      v19 = bdRelayJoinData::getRelayAddr((bdRelayJoinData *)&remote.m_ptr->__vftable[119]);
      v9 = bdHashMap<bdAddr,bdReference<bdRelayAssociation>,bdAddrHash>::get(p_m_associations, v19, &value);
      v12 = value.m_ptr;
    }
    bdSharedMutex::unlock(p_m_mutex);
    v20 = bdRelayJoinData::getRelayAddr((bdRelayJoinData *)&remote.m_ptr->__vftable[119]);
    bdAddrString::bdAddrString(&v48, v20);
    String = bdAddrString::getString(v21);
    bdLogMessage(BD_LOG_INFO, "info/", "routing-layer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdroutinglayer.cpp", "bdRoutingLayer::connect", 0xB5u, "Trying to join relay [%s]", String);
    if ( !v12 )
    {
LABEL_28:
      if ( v9 )
        goto LABEL_30;
      goto LABEL_29;
    }
LABEL_24:
    Status = bdRelayAssociation::getStatus(v12);
    v24 = Status;
    if ( Status )
    {
      if ( Status != BD_RELAY_STATUS_CONNECTING )
      {
        if ( Status == BD_RELAY_STATUS_CONNECTED )
        {
          bdLogMessage(BD_LOG_INFO, "info/", "routing-layer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdroutinglayer.cpp", "bdRoutingLayer::connect", 0xC4u, "Found existing open association. Firing callback.");
          v26 = bdRelayAssociation::getRelayAddr(v12);
          bdAddr::bdAddr(&v49, v26);
          RoutingID = bdRelayJoinData::getRoutingID((bdRelayJoinData *)&remote.m_ptr->__vftable[119]);
          v28 = bdRelayAssociation::getRelayID(v12);
          bdRelayRoute::bdRelayRoute(&v47, v28, RoutingID);
          bdAddr::setRelayRoute(&v49, v29);
          if ( listener )
          {
            onRelayConnectionSuccess = listener->onRelayConnectionSuccess;
            v31 = remote.m_ptr->__vftable;
            v39 = v31;
            if ( v31 )
            {
              _InterlockedExchangeAdd((volatile signed __int32 *)&v31[1], 1u);
              v12 = value.m_ptr;
            }
            ((void (__fastcall *)(bdRelayAssociationListener *, bdCommonAddr_vtbl **, bdAddr *))onRelayConnectionSuccess)(listener, &v39, &v49);
          }
        }
        else
        {
          LODWORD(format) = Status;
          bdHandleAssert(0, "\"false\" && false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdroutinglayer.cpp", "bdRoutingLayer::connect", 0xE3u, "Unexpected bdRelayAssociation status: [%d]", format);
          LODWORD(v35) = v24;
          bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "BD_ASSERT", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdroutinglayer.cpp", "bdRoutingLayer::connect", 0xE3u, "Unexpected bdRelayAssociation status: [%d]", v35);
        }
        goto LABEL_28;
      }
      bdLogMessage(BD_LOG_INFO, "info/", "routing-layer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdroutinglayer.cpp", "bdRoutingLayer::connect", 0xCFu, "Found existing association not fully established. Adding to list of callbacks.");
      if ( listener )
        bdRelayAssociation::setListener(v12, listener);
      if ( v9 )
      {
        v32 = (bdCommonAddr *)remote.m_ptr->__vftable;
        remotea.m_ptr = v32;
        if ( v32 )
        {
          _InterlockedExchangeAdd((volatile signed __int32 *)&v32->m_refCount, 1u);
          v12 = value.m_ptr;
        }
        if ( bdRelayAssociation::notifyWhenComplete(v12, (const bdReference<bdCommonAddr>)&remotea) )
        {
          v9 = 1;
          goto LABEL_30;
        }
      }
    }
    else
    {
      bdLogMessage(BD_LOG_INFO, "info/", "routing-layer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdroutinglayer.cpp", "bdRoutingLayer::connect", 0xD9u, "Found a closed association. Starting it.");
      if ( listener )
        bdRelayAssociation::setListener(v12, listener);
      if ( v9 )
      {
        v33 = (bdCommonAddr *)remote.m_ptr->__vftable;
        v41.m_ptr = v33;
        if ( v33 )
        {
          _InterlockedExchangeAdd((volatile signed __int32 *)&v33->m_refCount, 1u);
          v12 = value.m_ptr;
        }
        if ( bdRelayAssociation::notifyWhenComplete(v12, (const bdReference<bdCommonAddr>)&v41) && bdRelayAssociation::start(v12) )
        {
          v9 = 1;
LABEL_30:
          if ( v12 && _InterlockedExchangeAdd((volatile signed __int32 *)&v12->m_refCount, 0xFFFFFFFF) == 1 )
            ((void (__fastcall *)(bdRelayAssociation *, __int64))value.m_ptr->~bdReferencable)(value.m_ptr, 1i64);
          if ( remote.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&remote.m_ptr->__vftable[1], 0xFFFFFFFF) == 1 )
          {
            if ( remote.m_ptr->__vftable )
              (*(void (__fastcall **)(bdCommonAddr_vtbl *, __int64))remote.m_ptr->~bdReferencable)(remote.m_ptr->__vftable, 1i64);
            remote.m_ptr->__vftable = NULL;
          }
          return v9;
        }
      }
    }
    v9 = 0;
LABEL_29:
    bdLogMessage(BD_LOG_WARNING, "warn/", "routing-layer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdroutinglayer.cpp", "bdRoutingLayer::connect", 0xEAu, "Could not connect an association.");
    goto LABEL_30;
  }
  bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "routing-layer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdroutinglayer.cpp", "bdRoutingLayer::connect", 0x83u, "Cannot connect: invalid relayJoinData in remote object.");
  if ( remote.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&remote.m_ptr->__vftable[1], 0xFFFFFFFF) == 1 )
  {
    if ( remote.m_ptr->__vftable )
      (*(void (__fastcall **)(bdCommonAddr_vtbl *, __int64))remote.m_ptr->~bdReferencable)(remote.m_ptr->__vftable, 1i64);
    remote.m_ptr->__vftable = NULL;
  }
  return 0;
}

/*
==============
bdRoutingLayer::disconnectExcessRelays
==============
*/
void bdRoutingLayer::disconnectExcessRelays(bdRoutingLayer *this)
{
  bdSharedMutex *p_m_mutex; 
  __int64 v3; 
  unsigned int m_capacity; 
  bdHashMap<bdAddr,bdReference<bdRelayAssociation>,bdAddrHash>::Node **m_map; 
  bdHashMap<bdAddr,bdReference<bdRelayAssociation>,bdAddrHash>::Node *v6; 
  unsigned int Hash; 
  unsigned int v8; 
  __int64 v9; 
  bdSharedMutex *v10; 

  p_m_mutex = &this->m_mutex;
  v10 = &this->m_mutex;
  bdSharedMutex::lock_shared(&this->m_mutex);
  if ( this->m_associations.m_size )
  {
    v3 = 0i64;
    m_capacity = this->m_associations.m_capacity;
    if ( m_capacity )
    {
      do
      {
        if ( this->m_associations.m_map[v3] )
          break;
        v3 = (unsigned int)(v3 + 1);
      }
      while ( (unsigned int)v3 < m_capacity );
    }
    m_map = this->m_associations.m_map;
    if ( m_map[v3] )
    {
      _InterlockedExchangeAdd((volatile signed __int32 *)&this->m_associations.m_numIterators, 1u);
      m_map = this->m_associations.m_map;
      p_m_mutex = v10;
    }
    v6 = m_map[v3];
    if ( v6 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          if ( bdRelayAssociation::getType(v6->m_data.m_ptr) == BD_ASSOC_TYPE_BINDING && v6->m_data.m_ptr != this->m_boundAssociation.m_ptr && !bdRelayAssociation::disconnect(v6->m_data.m_ptr) )
            bdLogMessage(BD_LOG_INFO, "info/", "routing-layer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdroutinglayer.cpp", "bdRoutingLayer::disconnectExcessRelays", 0x1B6u, "There was an issue starting the disconnect process with an association.");
          if ( !v6->m_next )
            break;
          v6 = v6->m_next;
        }
        Hash = bdAddr::getHash((bdAddr *)&v6->m_key);
        v8 = this->m_associations.m_capacity;
        v9 = (Hash & (v8 - 1)) + 1;
        if ( (unsigned int)v9 >= v8 )
          break;
        while ( 1 )
        {
          v6 = this->m_associations.m_map[v9];
          if ( v6 )
            break;
          v9 = (unsigned int)(v9 + 1);
          if ( (unsigned int)v9 >= v8 )
            goto LABEL_17;
        }
      }
LABEL_17:
      _InterlockedExchangeAdd((volatile signed __int32 *)&this->m_associations.m_numIterators, 0xFFFFFFFF);
      p_m_mutex = v10;
    }
  }
  bdSharedMutex::unlock_shared(p_m_mutex);
}

/*
==============
bdRoutingLayer::disconnected
==============
*/
void bdRoutingLayer::disconnected(bdRoutingLayer *this, const bdAddr *addr)
{
  bdSharedMutex *p_m_mutex; 
  bool v5; 
  bdRelayAssociation *m_ptr; 
  unsigned __int64 RelayID; 
  bdAddrString *v8; 
  const char *String; 
  bdReference<bdRelayAssociation> value; 
  bdSharedMutex *v11; 
  __int64 v12; 
  bdAddrString v13; 

  v12 = -2i64;
  p_m_mutex = &this->m_mutex;
  v11 = &this->m_mutex;
  bdSharedMutex::lock(&this->m_mutex);
  value.m_ptr = NULL;
  v5 = bdHashMap<bdAddr,bdReference<bdRelayAssociation>,bdAddrHash>::get(&this->m_associations, addr, &value);
  m_ptr = value.m_ptr;
  if ( v5 )
  {
    RelayID = bdRelayAssociation::getRelayID(value.m_ptr);
    bdLogMessage(BD_LOG_INFO, "info/", "routing-layer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdroutinglayer.cpp", "bdRoutingLayer::disconnected", 0x1A0u, "Removing relay association to %i", RelayID);
    bdHashMap<bdAddr,bdReference<bdRelayAssociation>,bdAddrHash>::remove(&this->m_associations, addr);
  }
  else
  {
    bdAddrString::bdAddrString(&v13, addr);
    String = bdAddrString::getString(v8);
    bdLogMessage(BD_LOG_INFO, "info/", "routing-layer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdroutinglayer.cpp", "bdRoutingLayer::disconnected", 0x1A6u, "Could not find disconnected association at [%s]", String);
  }
  if ( m_ptr )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
      ((void (__fastcall *)(bdRelayAssociation *, __int64))value.m_ptr->~bdReferencable)(value.m_ptr, 1i64);
    p_m_mutex = v11;
  }
  bdSharedMutex::unlock(p_m_mutex);
}

/*
==============
bdRoutingLayer::getBoundAssociation
==============
*/
bdReference<bdRelayAssociation> *bdRoutingLayer::getBoundAssociation(bdRoutingLayer *this)
{
  return &this->m_boundAssociation;
}

/*
==============
bdRoutingLayer::getLastReceived
==============
*/
double bdRoutingLayer::getLastReceived(bdRoutingLayer *this)
{
  return bdGlobalStopwatch::getElapsedTimeInSeconds(&this->m_lastReceived);
}

/*
==============
bdRoutingLayer::getNumBindingAssociations
==============
*/
__int64 bdRoutingLayer::getNumBindingAssociations(bdRoutingLayer *this)
{
  bdSharedMutex *p_m_mutex; 
  unsigned int v3; 
  unsigned int v4; 
  unsigned int m_capacity; 
  __int64 v6; 
  bdHashMap<bdAddr,bdReference<bdRelayAssociation>,bdAddrHash>::Node **m_map; 
  bdHashMap<bdAddr,bdReference<bdRelayAssociation>,bdAddrHash>::Node *v8; 
  unsigned int Hash; 
  unsigned int v10; 
  __int64 v11; 
  bdSharedMutex *v13; 

  p_m_mutex = &this->m_mutex;
  v13 = &this->m_mutex;
  bdSharedMutex::lock_shared(&this->m_mutex);
  v3 = 0;
  if ( this->m_associations.m_size )
  {
    v4 = 0;
    m_capacity = this->m_associations.m_capacity;
    if ( m_capacity )
    {
      do
      {
        if ( this->m_associations.m_map[v4] )
          break;
        ++v4;
      }
      while ( v4 < m_capacity );
    }
    v6 = v4;
    m_map = this->m_associations.m_map;
    if ( m_map[v6] )
    {
      _InterlockedExchangeAdd((volatile signed __int32 *)&this->m_associations.m_numIterators, 1u);
      m_map = this->m_associations.m_map;
      p_m_mutex = v13;
    }
    v8 = m_map[v6];
LABEL_8:
    if ( v8 )
    {
      while ( 1 )
      {
        if ( bdRelayAssociation::getType(v8->m_data.m_ptr) == BD_ASSOC_TYPE_BINDING && bdRelayAssociation::getStatus(v8->m_data.m_ptr) == BD_RELAY_STATUS_CONNECTED )
          ++v3;
        if ( v8->m_next )
        {
          v8 = v8->m_next;
          goto LABEL_8;
        }
        Hash = bdAddr::getHash((bdAddr *)&v8->m_key);
        v10 = this->m_associations.m_capacity;
        v11 = (Hash & (v10 - 1)) + 1;
        if ( (unsigned int)v11 >= v10 )
          break;
        while ( 1 )
        {
          v8 = this->m_associations.m_map[v11];
          if ( v8 )
            break;
          v11 = (unsigned int)(v11 + 1);
          if ( (unsigned int)v11 >= v10 )
            goto LABEL_17;
        }
      }
LABEL_17:
      _InterlockedExchangeAdd((volatile signed __int32 *)&this->m_associations.m_numIterators, 0xFFFFFFFF);
      p_m_mutex = v13;
    }
  }
  bdSharedMutex::unlock_shared(p_m_mutex);
  return v3;
}

/*
==============
bdRoutingLayer::getRelayPing
==============
*/
float bdRoutingLayer::getRelayPing(bdRoutingLayer *this)
{
  bdSharedMutex *p_m_mutex; 
  bdRelayAssociation *m_ptr; 

  __asm { vmovaps [rsp+48h+var_18], xmm6 }
  p_m_mutex = &this->m_mutex;
  bdSharedMutex::lock_shared(&this->m_mutex);
  __asm { vmovss  xmm6, cs:__real@bf800000 }
  m_ptr = this->m_boundAssociation.m_ptr;
  if ( m_ptr )
  {
    *(double *)&_XMM0 = bdRelayAssociation::getLastPing(m_ptr);
    __asm { vmovaps xmm6, xmm0 }
  }
  bdSharedMutex::unlock_shared(p_m_mutex);
  __asm
  {
    vmovaps xmm0, xmm6
    vmovaps xmm6, [rsp+48h+var_18]
  }
  return *(float *)&_XMM0;
}

/*
==============
bdRoutingLayer::getRelayStatus
==============
*/
__int64 bdRoutingLayer::getRelayStatus(bdRoutingLayer *this)
{
  bdSharedMutex *p_m_mutex; 
  bdRelayAssociationStatus Status; 
  bdRelayAssociation *m_ptr; 

  p_m_mutex = &this->m_mutex;
  bdSharedMutex::lock_shared(&this->m_mutex);
  Status = BD_RELAY_STATUS_DISCONNECTED;
  m_ptr = this->m_boundAssociation.m_ptr;
  if ( m_ptr )
    Status = bdRelayAssociation::getStatus(m_ptr);
  bdSharedMutex::unlock_shared(p_m_mutex);
  return (unsigned int)Status;
}

/*
==============
bdRoutingLayer::init
==============
*/
char bdRoutingLayer::init(bdRoutingLayer *this, bdSocket *socket)
{
  bdSharedMutex *p_m_mutex; 

  p_m_mutex = &this->m_mutex;
  bdSharedMutex::lock(&this->m_mutex);
  bdHandleAssert(socket != NULL, "socket != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdroutinglayer.cpp", "bdRoutingLayer::init", 0x21u, "Cannot initialize bdRoutingLayer with a NULL socket.");
  bdLogMessage(BD_LOG_INFO, "info/", "routing-layer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdroutinglayer.cpp", "bdRoutingLayer::init", 0x23u, "Initializing RelayLayer.");
  this->m_socket = socket;
  bdSharedMutex::unlock(p_m_mutex);
  return 1;
}

/*
==============
bdRoutingLayer::isConnectInProgress
==============
*/
bool bdRoutingLayer::isConnectInProgress(bdRoutingLayer *this, const bdReference<bdCommonAddr> remote)
{
  const bdAddr *RelayAddr; 
  bdCommonAddr *v5; 
  bdRelayAssociation *v6; 
  bool v7; 
  bdReference<bdRelayAssociation> value; 
  bdCommonAddr *m_ptr; 
  bdReference<bdCommonAddr> remotea; 
  bdSharedMutex *p_m_mutex; 

  m_ptr = remote.m_ptr;
  p_m_mutex = &this->m_mutex;
  bdSharedMutex::lock_shared(&this->m_mutex);
  RelayAddr = bdRelayJoinData::getRelayAddr((bdRelayJoinData *)&remote.m_ptr->__vftable[119]);
  value.m_ptr = NULL;
  if ( bdHashMap<bdAddr,bdReference<bdRelayAssociation>,bdAddrHash>::get(&this->m_associations, RelayAddr, &value) )
  {
    v5 = (bdCommonAddr *)remote.m_ptr->__vftable;
    remotea.m_ptr = v5;
    if ( v5 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v5->m_refCount, 1u);
    v6 = value.m_ptr;
    v7 = bdRelayAssociation::inProgress(value.m_ptr, (const bdReference<bdCommonAddr>)&remotea);
    if ( v6 && _InterlockedExchangeAdd((volatile signed __int32 *)&v6->m_refCount, 0xFFFFFFFF) == 1 )
      ((void (__fastcall *)(bdRelayAssociation *, __int64))value.m_ptr->~bdReferencable)(value.m_ptr, 1i64);
    bdSharedMutex::unlock_shared(p_m_mutex);
    if ( remote.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&remote.m_ptr->__vftable[1], 0xFFFFFFFF) == 1 )
    {
      if ( remote.m_ptr->__vftable )
        (*(void (__fastcall **)(bdCommonAddr_vtbl *, __int64))remote.m_ptr->~bdReferencable)(remote.m_ptr->__vftable, 1i64);
      remote.m_ptr->__vftable = NULL;
    }
    return v7;
  }
  else
  {
    if ( value.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&value.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
      ((void (__fastcall *)(bdRelayAssociation *, __int64))value.m_ptr->~bdReferencable)(value.m_ptr, 1i64);
    bdSharedMutex::unlock_shared(p_m_mutex);
    if ( remote.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&remote.m_ptr->__vftable[1], 0xFFFFFFFF) == 1 )
    {
      if ( remote.m_ptr->__vftable )
        (*(void (__fastcall **)(bdCommonAddr_vtbl *, __int64))remote.m_ptr->~bdReferencable)(remote.m_ptr->__vftable, 1i64);
      remote.m_ptr->__vftable = NULL;
    }
    return 0;
  }
}

/*
==============
bdRoutingLayer::prepareSendTo
==============
*/
__int64 bdRoutingLayer::prepareSendTo(bdRoutingLayer *this, const bdAddr *addr, const void *data, const unsigned int length, void *outData, const unsigned int outDataLength, bdMsgHdr *outMsg)
{
  size_t v7; 
  unsigned int v11; 
  bdSharedMutex *p_m_mutex; 
  bdRelayAssociation *m_ptr; 
  const bdAddr *RelayAddr; 
  bdMsgHdr *v15; 
  void *v16; 
  int v17; 
  bdReference<bdRelayAssociation> value; 

  v7 = length;
  v11 = -1;
  if ( addr->m_type == BD_ADDR_RELAYED )
  {
    value.m_ptr = NULL;
    p_m_mutex = &this->m_mutex;
    bdSharedMutex::lock_shared(&this->m_mutex);
    bdHashMap<bdAddr,bdReference<bdRelayAssociation>,bdAddrHash>::get(&this->m_associations, addr, &value);
    bdSharedMutex::unlock_shared(p_m_mutex);
    m_ptr = value.m_ptr;
    if ( value.m_ptr )
    {
      RelayAddr = bdRelayAssociation::getRelayAddr(value.m_ptr);
      v15 = outMsg;
      outMsg->m_addr = RelayAddr;
      v16 = outData;
      v15->m_data = outData;
      LODWORD(RelayAddr) = outDataLength;
      v15->m_dataLen = outDataLength;
      v17 = bdRelayAssociation::prepareData(m_ptr, &addr->m_relayRoute, data, v7, v16, (const unsigned int)RelayAddr);
      v11 = v17;
      if ( v17 < 0 )
      {
        bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "routing-layer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdroutinglayer.cpp", "bdRoutingLayer::prepareSendTo", 0x10Au, "Failed to prepareData");
      }
      else
      {
        v15->m_data = v16;
        v15->m_dataLen = v17;
      }
    }
    else
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "routing-layer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdroutinglayer.cpp", "bdRoutingLayer::prepareSendTo", 0x10Fu, "Failed to find bdRelayAssociation for BD_ADDR_RELAYED addr");
    }
    if ( m_ptr )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
        ((void (__fastcall *)(bdRelayAssociation *, __int64))value.m_ptr->~bdReferencable)(value.m_ptr, 1i64);
    }
    return v11;
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "routing-layer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdroutinglayer.cpp", "bdRoutingLayer::prepareSendTo", 0x116u, "Should not call prepareSendTo() on a non-relayed socket");
    memcpy_0(outData, data, v7);
    return (unsigned int)v7;
  }
}

/*
==============
bdRoutingLayer::pump
==============
*/
void bdRoutingLayer::pump(bdRoutingLayer *this)
{
  bdSharedMutex *p_m_mutex; 
  __int64 v3; 
  unsigned int m_capacity; 
  bdHashMap<bdAddr,bdReference<bdRelayAssociation>,bdAddrHash>::Node **m_map; 
  bdHashMap<bdAddr,bdReference<bdRelayAssociation>,bdAddrHash>::Node *v6; 
  unsigned int Hash; 
  unsigned int v8; 
  __int64 v9; 
  bdSharedMutex *v10; 

  p_m_mutex = &this->m_mutex;
  v10 = &this->m_mutex;
  bdSharedMutex::lock_shared(&this->m_mutex);
  if ( this->m_associations.m_size )
  {
    v3 = 0i64;
    m_capacity = this->m_associations.m_capacity;
    if ( m_capacity )
    {
      do
      {
        if ( this->m_associations.m_map[v3] )
          break;
        v3 = (unsigned int)(v3 + 1);
      }
      while ( (unsigned int)v3 < m_capacity );
    }
    m_map = this->m_associations.m_map;
    if ( m_map[v3] )
    {
      _InterlockedExchangeAdd((volatile signed __int32 *)&this->m_associations.m_numIterators, 1u);
      m_map = this->m_associations.m_map;
      p_m_mutex = v10;
    }
    v6 = m_map[v3];
LABEL_8:
    if ( v6 )
    {
      while ( 1 )
      {
        bdRelayAssociation::pump(v6->m_data.m_ptr);
        if ( v6->m_next )
        {
          v6 = v6->m_next;
          goto LABEL_8;
        }
        Hash = bdAddr::getHash((bdAddr *)&v6->m_key);
        v8 = this->m_associations.m_capacity;
        v9 = (Hash & (v8 - 1)) + 1;
        if ( (unsigned int)v9 >= v8 )
          break;
        while ( 1 )
        {
          v6 = this->m_associations.m_map[v9];
          if ( v6 )
            break;
          v9 = (unsigned int)(v9 + 1);
          if ( (unsigned int)v9 >= v8 )
            goto LABEL_14;
        }
      }
LABEL_14:
      _InterlockedExchangeAdd((volatile signed __int32 *)&this->m_associations.m_numIterators, 0xFFFFFFFF);
      p_m_mutex = v10;
    }
  }
  bdSharedMutex::unlock_shared(p_m_mutex);
}

/*
==============
bdRoutingLayer::receiveFrom
==============
*/
__int64 bdRoutingLayer::receiveFrom(bdRoutingLayer *this, bdAddr *realAddr, void *data, __int64 dataSize)
{
  __int64 result; 
  unsigned int v8; 
  bdRelayAssociation *m_ptr; 
  bdReference<bdRelayAssociation> value; 

  result = ((__int64 (__fastcall *)(bdSocket *, bdAddr *, void *, __int64, __int64))this->m_socket->receiveFrom)(this->m_socket, realAddr, data, dataSize, -2i64);
  v8 = result;
  if ( (int)result > 0 )
  {
    value.m_ptr = NULL;
    bdSharedMutex::lock_shared(&this->m_mutex);
    bdHashMap<bdAddr,bdReference<bdRelayAssociation>,bdAddrHash>::get(&this->m_associations, realAddr, &value);
    bdSharedMutex::unlock_shared(&this->m_mutex);
    m_ptr = value.m_ptr;
    if ( value.m_ptr )
      v8 = bdRelayAssociation::processPacket(value.m_ptr, realAddr, data, v8);
    bdGlobalStopwatch::start(&this->m_lastReceived);
    if ( m_ptr )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
        ((void (__fastcall *)(bdRelayAssociation *, __int64))value.m_ptr->~bdReferencable)(value.m_ptr, 1i64);
    }
    return v8;
  }
  return result;
}

/*
==============
bdRoutingLayer::sendMMsgRaw
==============
*/
__int64 bdRoutingLayer::sendMMsgRaw(bdRoutingLayer *this, const bdMsgHdr *msgVec, __int64 msgVecLen, unsigned int *numSent)
{
  return ((__int64 (__fastcall *)(bdSocket *, const bdMsgHdr *, __int64, unsigned int *))this->m_socket->sendMMsg)(this->m_socket, msgVec, msgVecLen, numSent);
}

/*
==============
bdRoutingLayer::sendTo
==============
*/
__int64 bdRoutingLayer::sendTo(bdRoutingLayer *this, const bdAddr *addr, const void *data, const unsigned int length)
{
  bdSharedMutex *p_m_mutex; 
  bool v10; 
  bdRelayAssociation *m_ptr; 
  unsigned int v12; 
  bdSharedMutex *v13; 
  bdReference<bdRelayAssociation> value; 

  if ( addr->m_type == BD_ADDR_DIRECT )
    return ((__int64 (__fastcall *)(bdSocket *))this->m_socket->sendTo)(this->m_socket);
  p_m_mutex = &this->m_mutex;
  v13 = &this->m_mutex;
  bdSharedMutex::lock_shared(&this->m_mutex);
  value.m_ptr = NULL;
  v10 = bdHashMap<bdAddr,bdReference<bdRelayAssociation>,bdAddrHash>::get(&this->m_associations, addr, &value);
  m_ptr = value.m_ptr;
  if ( v10 )
  {
    v12 = bdRelayAssociation::sendData(value.m_ptr, &addr->m_relayRoute, data, length);
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "routing-layer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdroutinglayer.cpp", "bdRoutingLayer::sendTo", 0x13Bu, "Failed to find bdRelayAssociation for BD_ADDR_RELAYED addr");
    v12 = -1;
  }
  if ( m_ptr )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
      ((void (__fastcall *)(bdRelayAssociation *, __int64))value.m_ptr->~bdReferencable)(value.m_ptr, 1i64);
    p_m_mutex = v13;
  }
  bdSharedMutex::unlock_shared(p_m_mutex);
  return v12;
}

/*
==============
bdRoutingLayer::sendTo
==============
*/
__int64 bdRoutingLayer::sendTo(bdRoutingLayer *this, const bdReference<bdAddrHandle> addrHandle, const void *data, const unsigned int length)
{
  bdAddrHandle_vtbl *v8; 
  unsigned int v9; 
  const bdRelayRoute *v10; 
  bdRelayAssociation *m_ptr; 
  bdReference<bdRelayAssociation> value; 
  bdSharedMutex *p_m_mutex; 
  __int64 v15; 

  v15 = -2i64;
  v8 = addrHandle.m_ptr->__vftable;
  if ( LODWORD(addrHandle.m_ptr->__vftable[23].~bdReferencable) )
  {
    p_m_mutex = &this->m_mutex;
    bdSharedMutex::lock_shared(&this->m_mutex);
    value.m_ptr = NULL;
    if ( bdHashMap<bdAddr,bdReference<bdRelayAssociation>,bdAddrHash>::get(&this->m_associations, (const bdAddr *)&v8[5], &value) )
    {
      v10 = (const bdRelayRoute *)&v8[21];
      m_ptr = value.m_ptr;
      v9 = bdRelayAssociation::sendData(value.m_ptr, v10, data, length);
      if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
        ((void (__fastcall *)(bdRelayAssociation *, __int64))value.m_ptr->~bdReferencable)(value.m_ptr, 1i64);
      bdSharedMutex::unlock_shared(p_m_mutex);
    }
    else
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "routing-layer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdroutinglayer.cpp", "bdRoutingLayer::sendTo", 0x13Bu, "Failed to find bdRelayAssociation for BD_ADDR_RELAYED addr");
      if ( value.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&value.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
        ((void (__fastcall *)(bdRelayAssociation *, __int64))value.m_ptr->~bdReferencable)(value.m_ptr, 1i64);
      bdSharedMutex::unlock_shared(p_m_mutex);
      v9 = -1;
    }
  }
  else
  {
    v9 = ((__int64 (__fastcall *)(bdSocket *, bdAddrHandle_vtbl *))this->m_socket->sendTo)(this->m_socket, &v8[5]);
  }
  if ( addrHandle.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&addrHandle.m_ptr->__vftable[1], 0xFFFFFFFF) == 1 )
  {
    if ( addrHandle.m_ptr->__vftable )
      (*(void (__fastcall **)(bdAddrHandle_vtbl *, __int64))addrHandle.m_ptr->~bdReferencable)(addrHandle.m_ptr->__vftable, 1i64);
    addrHandle.m_ptr->__vftable = NULL;
  }
  return v9;
}

/*
==============
bdRoutingLayer::setClientAuthToken
==============
*/
void bdRoutingLayer::setClientAuthToken(bdRoutingLayer *this, const bdClientAuthToken *clientAuthToken, const unsigned int titleID, const unsigned __int64 userID)
{
  bdSharedMutex *p_m_mutex; 

  p_m_mutex = &this->m_mutex;
  bdSharedMutex::lock(&this->m_mutex);
  this->m_clientAuthToken.operator=(&this->m_clientAuthToken, clientAuthToken);
  this->m_titleID = titleID;
  this->m_userID = userID;
  bdSharedMutex::unlock(p_m_mutex);
}

