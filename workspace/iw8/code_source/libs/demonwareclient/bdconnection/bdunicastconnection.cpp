/*
==============
bdUnicastConnection::handleCookieAck
==============
*/

bool __fastcall bdUnicastConnection::handleCookieAck(bdUnicastConnection *this, bdReference<bdChunk> *__formal, const unsigned int vtag)
{
  return ?handleCookieAck@bdUnicastConnection@@IEAA_NAEAV?$bdReference@VbdChunk@@@@I@Z(this, __formal, vtag);
}

/*
==============
bdUnicastConnection::handleShutdownAck
==============
*/

bool __fastcall bdUnicastConnection::handleShutdownAck(bdUnicastConnection *this, bdReference<bdChunk> *__formal)
{
  return ?handleShutdownAck@bdUnicastConnection@@IEAA_NAEAV?$bdReference@VbdChunk@@@@@Z(this, __formal);
}

/*
==============
bdUnicastConnection::handleInitAck
==============
*/

bool __fastcall bdUnicastConnection::handleInitAck(bdUnicastConnection *this, bdReference<bdChunk> *chunk, const unsigned int vtag)
{
  return ?handleInitAck@bdUnicastConnection@@IEAA_NAEAV?$bdReference@VbdChunk@@@@I@Z(this, chunk, vtag);
}

/*
==============
bdUnicastConnection::handleCookieEcho
==============
*/

bool __fastcall bdUnicastConnection::handleCookieEcho(bdUnicastConnection *this, bdReference<bdChunk> *chunk, const unsigned int __formal)
{
  return ?handleCookieEcho@bdUnicastConnection@@IEAA_NAEAV?$bdReference@VbdChunk@@@@I@Z(this, chunk, __formal);
}

/*
==============
bdUnicastConnection::sendHeartbeat
==============
*/

bool __fastcall bdUnicastConnection::sendHeartbeat(bdUnicastConnection *this, bdReference<bdInitChunk> __formal)
{
  return ?sendHeartbeat@bdUnicastConnection@@IEAA_NV?$bdReference@VbdInitChunk@@@@@Z(this, __formal);
}

/*
==============
bdUnicastConnection::send
==============
*/

bool __fastcall bdUnicastConnection::send(bdUnicastConnection *this, const bdReference<bdMessage> message, const bool reliable)
{
  return ?send@bdUnicastConnection@@UEAA_NV?$bdReference@VbdMessage@@@@_N@Z(this, message, reliable);
}

/*
==============
bdUnicastConnection::callListenersDisconnect
==============
*/

void __fastcall bdUnicastConnection::callListenersDisconnect(bdUnicastConnection *this)
{
  ?callListenersDisconnect@bdUnicastConnection@@IEAAXXZ(this);
}

/*
==============
bdUnicastConnection::sendInit
==============
*/

bool __fastcall bdUnicastConnection::sendInit(bdUnicastConnection *this)
{
  return ?sendInit@bdUnicastConnection@@IEAA_NXZ(this);
}

/*
==============
bdUnicastConnection::setAcceptOutOfOrder
==============
*/

void __fastcall bdUnicastConnection::setAcceptOutOfOrder(bdUnicastConnection *this, bool acceptOutOfOrder)
{
  ?setAcceptOutOfOrder@bdUnicastConnection@@IEAAX_N@Z(this, acceptOutOfOrder);
}

/*
==============
bdUnicastConnection::handleHeartbeatAck
==============
*/

bool __fastcall bdUnicastConnection::handleHeartbeatAck(bdUnicastConnection *this, bdReference<bdChunk> *__formal)
{
  return ?handleHeartbeatAck@bdUnicastConnection@@IEAA_NAEAV?$bdReference@VbdChunk@@@@@Z(this, __formal);
}

/*
==============
bdUnicastConnection::getStatus
==============
*/

bdConnection::Status __fastcall bdUnicastConnection::getStatus(bdUnicastConnection *this)
{
  return ?getStatus@bdUnicastConnection@@UEBA?AW4Status@bdConnection@@XZ(this);
}

/*
==============
bdUnicastConnection::handleInit
==============
*/

bool __fastcall bdUnicastConnection::handleInit(bdUnicastConnection *this, bdReference<bdChunk> *chunk)
{
  return ?handleInit@bdUnicastConnection@@IEAA_NAEAV?$bdReference@VbdChunk@@@@@Z(this, chunk);
}

/*
==============
bdUnicastConnection::callListenersConnect
==============
*/

void __fastcall bdUnicastConnection::callListenersConnect(bdUnicastConnection *this, const bool success)
{
  ?callListenersConnect@bdUnicastConnection@@IEAAX_N@Z(this, success);
}

/*
==============
bdUnicastConnection::reset
==============
*/

void __fastcall bdUnicastConnection::reset(bdUnicastConnection *this)
{
  ?reset@bdUnicastConnection@@IEAAXXZ(this);
}

/*
==============
bdUnicastConnection::bdUnicastConnection
==============
*/

void __fastcall bdUnicastConnection::bdUnicastConnection(bdUnicastConnection *this, bdReference<bdCommonAddr> dest, bdAddressMap *addrMap, bool acceptOutOfOrder)
{
  ??0bdUnicastConnection@@IEAA@V?$bdReference@VbdCommonAddr@@@@PEAVbdAddressMap@@_N@Z(this, dest, addrMap, acceptOutOfOrder);
}

/*
==============
bdUnicastConnection::windowsEmpty
==============
*/

bool __fastcall bdUnicastConnection::windowsEmpty(bdUnicastConnection *this)
{
  return ?windowsEmpty@bdUnicastConnection@@IEBA_NXZ(this);
}

/*
==============
bdUnicastConnection::handleSAck
==============
*/

bool __fastcall bdUnicastConnection::handleSAck(bdUnicastConnection *this, bdReference<bdChunk> *chunk)
{
  return ?handleSAck@bdUnicastConnection@@IEAA_NAEAV?$bdReference@VbdChunk@@@@@Z(this, chunk);
}

/*
==============
bdUnicastConnection::sendShutdownComplete
==============
*/

bool __fastcall bdUnicastConnection::sendShutdownComplete(bdUnicastConnection *this)
{
  return ?sendShutdownComplete@bdUnicastConnection@@IEAA_NXZ(this);
}

/*
==============
bdUnicastConnection::sendHeartbeatAck
==============
*/

bool __fastcall bdUnicastConnection::sendHeartbeatAck(bdUnicastConnection *this, bdReference<bdInitChunk> __formal)
{
  return ?sendHeartbeatAck@bdUnicastConnection@@IEAA_NV?$bdReference@VbdInitChunk@@@@@Z(this, __formal);
}

/*
==============
bdUnicastConnection::connect
==============
*/

bool __fastcall bdUnicastConnection::connect(bdUnicastConnection *this)
{
  return ?connect@bdUnicastConnection@@UEAA_NXZ(this);
}

/*
==============
bdUnicastConnection::sendCookieEcho
==============
*/

bool __fastcall bdUnicastConnection::sendCookieEcho(bdUnicastConnection *this, bdReference<bdInitAckChunk> chunk)
{
  return ?sendCookieEcho@bdUnicastConnection@@IEAA_NV?$bdReference@VbdInitAckChunk@@@@@Z(this, chunk);
}

/*
==============
bdUnicastConnection::getMessageToDispatch
==============
*/

bool __fastcall bdUnicastConnection::getMessageToDispatch(bdUnicastConnection *this, bdReference<bdMessage> *message)
{
  return ?getMessageToDispatch@bdUnicastConnection@@MEAA_NAEAV?$bdReference@VbdMessage@@@@@Z(this, message);
}

/*
==============
bdUnicastConnection::handleData
==============
*/

bool __fastcall bdUnicastConnection::handleData(bdUnicastConnection *this, bdReference<bdChunk> *chunk)
{
  return ?handleData@bdUnicastConnection@@IEAA_NAEAV?$bdReference@VbdChunk@@@@@Z(this, chunk);
}

/*
==============
bdUnicastConnection::close
==============
*/

void __fastcall bdUnicastConnection::close(bdUnicastConnection *this)
{
  ?close@bdUnicastConnection@@UEAAXXZ(this);
}

/*
==============
bdUnicastConnection::callListenersReconnect
==============
*/

void __fastcall bdUnicastConnection::callListenersReconnect(bdUnicastConnection *this)
{
  ?callListenersReconnect@bdUnicastConnection@@IEAAXXZ(this);
}

/*
==============
bdUnicastConnection::disconnect
==============
*/

void __fastcall bdUnicastConnection::disconnect(bdUnicastConnection *this)
{
  ?disconnect@bdUnicastConnection@@UEAAXXZ(this);
}

/*
==============
bdUnicastConnection::sendShutdownAck
==============
*/

bool __fastcall bdUnicastConnection::sendShutdownAck(bdUnicastConnection *this)
{
  return ?sendShutdownAck@bdUnicastConnection@@IEAA_NXZ(this);
}

/*
==============
bdUnicastConnection::getStats
==============
*/

bdConnectionStatistics *__fastcall bdUnicastConnection::getStats(bdUnicastConnection *this)
{
  return ?getStats@bdUnicastConnection@@QEAAAEAVbdConnectionStatistics@@XZ(this);
}

/*
==============
bdUnicastConnection::bdUnicastConnection
==============
*/

void __fastcall bdUnicastConnection::bdUnicastConnection(bdUnicastConnection *this, bdAddressMap *addrMap, bool acceptOutOfOrder)
{
  ??0bdUnicastConnection@@IEAA@PEAVbdAddressMap@@_N@Z(this, addrMap, acceptOutOfOrder);
}

/*
==============
bdUnicastConnection::getDataToSend
==============
*/

unsigned int __fastcall bdUnicastConnection::getDataToSend(bdUnicastConnection *this, unsigned __int8 *const buffer, const unsigned int bufferSize)
{
  return ?getDataToSend@bdUnicastConnection@@MEAAIQEAEI@Z(this, buffer, bufferSize);
}

/*
==============
bdUnicastConnection::handleHeartbeat
==============
*/

bool __fastcall bdUnicastConnection::handleHeartbeat(bdUnicastConnection *this, bdReference<bdChunk> *chunk)
{
  return ?handleHeartbeat@bdUnicastConnection@@IEAA_NAEAV?$bdReference@VbdChunk@@@@@Z(this, chunk);
}

/*
==============
bdUnicastConnection::handleShutdownComplete
==============
*/

bool __fastcall bdUnicastConnection::handleShutdownComplete(bdUnicastConnection *this, bdReference<bdChunk> *__formal)
{
  return ?handleShutdownComplete@bdUnicastConnection@@IEAA_NAEAV?$bdReference@VbdChunk@@@@@Z(this, __formal);
}

/*
==============
bdUnicastConnection::receive
==============
*/

bool __fastcall bdUnicastConnection::receive(bdUnicastConnection *this, const unsigned __int8 *buffer, const unsigned int bufferSize)
{
  return ?receive@bdUnicastConnection@@MEAA_NPEBEI@Z(this, buffer, bufferSize);
}

/*
==============
bdUnicastConnection::sendInitAck
==============
*/

bool __fastcall bdUnicastConnection::sendInitAck(bdUnicastConnection *this, bdReference<bdInitChunk> chunk)
{
  return ?sendInitAck@bdUnicastConnection@@IEAA_NV?$bdReference@VbdInitChunk@@@@@Z(this, chunk);
}

/*
==============
bdUnicastConnection::~bdUnicastConnection
==============
*/

void __fastcall bdUnicastConnection::~bdUnicastConnection(bdUnicastConnection *this)
{
  ??1bdUnicastConnection@@MEAA@XZ(this);
}

/*
==============
bdUnicastConnection::sendShutdown
==============
*/

bool __fastcall bdUnicastConnection::sendShutdown(bdUnicastConnection *this)
{
  return ?sendShutdown@bdUnicastConnection@@IEAA_NXZ(this);
}

/*
==============
bdUnicastConnection::getOutOfOrderMessageToDispatch
==============
*/

bool __fastcall bdUnicastConnection::getOutOfOrderMessageToDispatch(bdUnicastConnection *this, bdReference<bdMessage> *message)
{
  return ?getOutOfOrderMessageToDispatch@bdUnicastConnection@@MEAA_NAEAV?$bdReference@VbdMessage@@@@@Z(this, message);
}

/*
==============
bdUnicastConnection::sendCookieAck
==============
*/

bool __fastcall bdUnicastConnection::sendCookieAck(bdUnicastConnection *this)
{
  return ?sendCookieAck@bdUnicastConnection@@IEAA_NXZ(this);
}

/*
==============
bdUnicastConnection::handleShutdown
==============
*/

bool __fastcall bdUnicastConnection::handleShutdown(bdUnicastConnection *this, bdReference<bdChunk> *__formal)
{
  return ?handleShutdown@bdUnicastConnection@@IEAA_NAEAV?$bdReference@VbdChunk@@@@@Z(this, __formal);
}

/*
==============
bdUnicastConnection::bdUnicastConnection
==============
*/
void bdUnicastConnection::bdUnicastConnection(bdUnicastConnection *this, bdAddressMap *addrMap, bool acceptOutOfOrder)
{
  bdConnection::bdConnection(this);
  this->__vftable = (bdUnicastConnection_vtbl *)&bdUnicastConnection::`vftable';
  bdConnectionStatistics::bdConnectionStatistics(&this->m_stats);
  this->m_reliableSendWindow = NULL;
  this->m_reliableRecvWindow = NULL;
  bdUnreliableSendWindow::bdUnreliableSendWindow(&this->m_unreliableSendWindow);
  bdUnreliableReceiveWindow::bdUnreliableReceiveWindow(&this->m_unreliableReceiveWindow);
  this->m_outQueue.m_list.m_head = NULL;
  this->m_outQueue.m_list.m_tail = NULL;
  this->m_outQueue.m_list.m_size = 0;
  bdStopwatch::bdStopwatch(&this->m_sendTimer);
  bdStopwatch::bdStopwatch(&this->m_receiveTimer);
  this->m_state = BD_UC_CLOSED;
  bdStopwatch::bdStopwatch(&this->m_initTimer);
  bdStopwatch::bdStopwatch(&this->m_cookieTimer);
  bdStopwatch::bdStopwatch(&this->m_shutdownTimer);
  bdStopwatch::bdStopwatch(&this->m_shutdownGuard);
  this->m_initAckChunk.m_ptr = NULL;
  this->m_addrMap = addrMap;
  this->m_acceptOutOfOrder = acceptOutOfOrder;
  if ( !addrMap )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdConnection/connections", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdunicastconnection.cpp", "bdUnicastConnection::bdUnicastConnection", 0x163u, "Addr map pointer not initialised.");
  bdUnicastConnection::reset(this);
}

/*
==============
bdUnicastConnection::bdUnicastConnection
==============
*/
void bdUnicastConnection::bdUnicastConnection(bdUnicastConnection *this, bdReference<bdCommonAddr> dest, bdAddressMap *addrMap, bool acceptOutOfOrder)
{
  bdReference<bdCommonAddr> addr; 

  addr.m_ptr = (bdCommonAddr *)dest.m_ptr->__vftable;
  if ( addr.m_ptr )
    _InterlockedExchangeAdd((volatile signed __int32 *)&addr.m_ptr->m_refCount, 1u);
  bdConnection::bdConnection(this, (bdReference<bdCommonAddr>)&addr);
  this->__vftable = (bdUnicastConnection_vtbl *)&bdUnicastConnection::`vftable';
  bdConnectionStatistics::bdConnectionStatistics(&this->m_stats);
  this->m_reliableSendWindow = NULL;
  this->m_reliableRecvWindow = NULL;
  bdUnreliableSendWindow::bdUnreliableSendWindow(&this->m_unreliableSendWindow);
  bdUnreliableReceiveWindow::bdUnreliableReceiveWindow(&this->m_unreliableReceiveWindow);
  this->m_outQueue.m_list.m_head = NULL;
  this->m_outQueue.m_list.m_tail = NULL;
  this->m_outQueue.m_list.m_size = 0;
  bdStopwatch::bdStopwatch(&this->m_sendTimer);
  bdStopwatch::bdStopwatch(&this->m_receiveTimer);
  this->m_state = BD_UC_CLOSED;
  bdStopwatch::bdStopwatch(&this->m_initTimer);
  bdStopwatch::bdStopwatch(&this->m_cookieTimer);
  bdStopwatch::bdStopwatch(&this->m_shutdownTimer);
  bdStopwatch::bdStopwatch(&this->m_shutdownGuard);
  this->m_initAckChunk.m_ptr = NULL;
  this->m_addrMap = addrMap;
  this->m_acceptOutOfOrder = acceptOutOfOrder;
  if ( !addrMap )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdConnection/connections", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdunicastconnection.cpp", "bdUnicastConnection::bdUnicastConnection", 0x154u, "Addr map pointer not initialised.");
  bdUnicastConnection::reset(this);
  if ( dest.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&dest.m_ptr->__vftable[1], 0xFFFFFFFF) == 1 )
  {
    if ( dest.m_ptr->__vftable )
      (*(void (__fastcall **)(bdCommonAddr_vtbl *, __int64))dest.m_ptr->~bdReferencable)(dest.m_ptr->__vftable, 1i64);
    dest.m_ptr->__vftable = NULL;
  }
}

/*
==============
bdUnicastConnection::~bdUnicastConnection
==============
*/
void bdUnicastConnection::~bdUnicastConnection(bdUnicastConnection *this)
{
  bdReliableReceiveWindow *m_reliableRecvWindow; 
  bdReliableSendWindow *m_reliableSendWindow; 
  bdInitAckChunk *m_ptr; 
  bdInitAckChunk *v5; 

  this->__vftable = (bdUnicastConnection_vtbl *)&bdUnicastConnection::`vftable';
  m_reliableRecvWindow = this->m_reliableRecvWindow;
  if ( m_reliableRecvWindow )
  {
    bdReliableReceiveWindow::~bdReliableReceiveWindow(this->m_reliableRecvWindow);
    bdMemory::deallocate(m_reliableRecvWindow);
  }
  m_reliableSendWindow = this->m_reliableSendWindow;
  if ( m_reliableSendWindow )
  {
    bdReliableSendWindow::~bdReliableSendWindow(this->m_reliableSendWindow);
    bdMemory::deallocate(m_reliableSendWindow);
  }
  m_ptr = this->m_initAckChunk.m_ptr;
  if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
  {
    v5 = this->m_initAckChunk.m_ptr;
    if ( v5 )
      ((void (__fastcall *)(bdInitAckChunk *, __int64))v5->~bdReferencable)(v5, 1i64);
    this->m_initAckChunk.m_ptr = NULL;
  }
  bdLinkedList<bdUnicastConnection::bdControlChunkStore>::~bdLinkedList<bdUnicastConnection::bdControlChunkStore>(&this->m_outQueue.m_list);
  bdUnreliableReceiveWindow::~bdUnreliableReceiveWindow(&this->m_unreliableReceiveWindow);
  bdUnreliableSendWindow::~bdUnreliableSendWindow(&this->m_unreliableSendWindow);
  bdConnection::~bdConnection(this);
}

/*
==============
bdUnicastConnection::callListenersConnect
==============
*/
void bdUnicastConnection::callListenersConnect(bdUnicastConnection *this, const bool success)
{
  __int64 i; 
  bdUnicastConnection **v5; 
  bdConnectionListener *v6; 
  bdConnectionListener_vtbl *v7; 
  void (__fastcall *onConnect)(bdConnectionListener *, bdReference<bdConnection>); 
  bdConnectionListener_vtbl *v9; 
  bdUnicastConnection *v10; 
  bdUnicastConnection *v11; 

  for ( i = 0i64; (unsigned int)i < this->m_listeners.m_size; i = (unsigned int)(i + 1) )
  {
    bdHandleAssert((unsigned int)i < this->m_listeners.m_size, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdfastarray.inl", "bdFastArray<class bdConnectionListener *>::operator []", 0x50u, "bdFastArray<T>::operator[], rangecheck failed");
    if ( success )
    {
      v5 = &v10;
      v6 = this->m_listeners.m_data[i];
      v7 = v6->__vftable;
      v10 = this;
      onConnect = v7->onConnect;
    }
    else
    {
      v5 = &v11;
      v6 = this->m_listeners.m_data[i];
      v9 = v6->__vftable;
      v11 = this;
      onConnect = v9->onConnectFailed;
    }
    _InterlockedExchangeAdd((volatile signed __int32 *)&this->m_refCount, 1u);
    ((void (__fastcall *)(bdConnectionListener *, bdUnicastConnection **))onConnect)(v6, v5);
  }
}

/*
==============
bdUnicastConnection::callListenersDisconnect
==============
*/
void bdUnicastConnection::callListenersDisconnect(bdUnicastConnection *this)
{
  __int64 m_capacity; 
  unsigned int m_size; 
  void *v4; 
  void *v5; 
  unsigned int v6; 
  unsigned int v7; 
  bdConnectionListener **v8; 
  bool v9; 
  bool v10; 
  __int64 v11; 
  unsigned int v12; 
  bdConnectionListener *v13; 
  void (__fastcall *onDisconnect)(bdConnectionListener *, bdReference<bdConnection>); 
  __int64 v15; 
  void *v16; 
  __int64 v17; 
  bdUnicastConnection *v18; 

  v15 = -2i64;
  m_capacity = this->m_listeners.m_capacity;
  LODWORD(v17) = m_capacity;
  m_size = this->m_listeners.m_size;
  HIDWORD(v17) = m_size;
  v4 = NULL;
  if ( (_DWORD)m_capacity )
  {
    v5 = bdMemory::allocate(8 * m_capacity);
    v4 = v5;
    v6 = this->m_listeners.m_size;
    if ( v6 )
      memcpy_0(v5, this->m_listeners.m_data, 8i64 * v6);
  }
  v16 = v4;
  v7 = 0;
  if ( m_size )
  {
    v8 = (bdConnectionListener **)v4;
    v9 = m_size != 0;
    do
    {
      v10 = v9;
      bdHandleAssert(v9, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdfastarray.inl", "bdFastArray<class bdConnectionListener *>::operator []", 0x50u, "bdFastArray<T>::operator[], rangecheck failed", v15, v16, v17);
      v11 = 0i64;
      v12 = this->m_listeners.m_size;
      if ( v12 )
      {
        while ( *v8 != this->m_listeners.m_data[v11] )
        {
          v11 = (unsigned int)(v11 + 1);
          if ( (unsigned int)v11 >= v12 )
            goto LABEL_13;
        }
        bdHandleAssert(v10, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdfastarray.inl", "bdFastArray<class bdConnectionListener *>::operator []", 0x50u, "bdFastArray<T>::operator[], rangecheck failed");
        v13 = *v8;
        onDisconnect = (*v8)->onDisconnect;
        v18 = this;
        if ( this )
        {
          _InterlockedExchangeAdd((volatile signed __int32 *)&this->m_refCount, 1u);
          m_size = HIDWORD(v17);
        }
        ((void (__fastcall *)(bdConnectionListener *, bdUnicastConnection **))onDisconnect)(v13, &v18);
      }
LABEL_13:
      ++v7;
      ++v8;
      v9 = v7 < m_size;
    }
    while ( v7 < m_size );
  }
  bdMemory::deallocate(v4);
}

/*
==============
bdUnicastConnection::callListenersReconnect
==============
*/
void bdUnicastConnection::callListenersReconnect(bdUnicastConnection *this)
{
  __int64 v1; 
  bool v3; 
  bdConnectionListener *v4; 
  bdConnectionListener_vtbl *v5; 
  void (__fastcall *onReconnect)(bdConnectionListener *, bdReference<bdConnection>); 
  bdUnicastConnection *v7; 

  v1 = 0i64;
  if ( this->m_listeners.m_size )
  {
    v3 = this->m_listeners.m_size != 0;
    do
    {
      bdHandleAssert(v3, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdfastarray.inl", "bdFastArray<class bdConnectionListener *>::operator []", 0x50u, "bdFastArray<T>::operator[], rangecheck failed");
      v4 = this->m_listeners.m_data[v1];
      v5 = v4->__vftable;
      v7 = this;
      onReconnect = v5->onReconnect;
      _InterlockedExchangeAdd((volatile signed __int32 *)&this->m_refCount, 1u);
      ((void (__fastcall *)(bdConnectionListener *, bdUnicastConnection **))onReconnect)(v4, &v7);
      v1 = (unsigned int)(v1 + 1);
      v3 = (unsigned int)v1 < this->m_listeners.m_size;
    }
    while ( (unsigned int)v1 < this->m_listeners.m_size );
  }
}

/*
==============
bdUnicastConnection::close
==============
*/
void bdUnicastConnection::close(bdUnicastConnection *this)
{
  bdUnicastConnection::bdUnicastConnectionStatus m_state; 
  __int64 v3; 
  bool v4; 
  bdConnectionListener *v5; 
  bdConnectionListener_vtbl *v6; 
  void (__fastcall *onConnectFailed)(bdConnectionListener *, bdReference<bdConnection>); 
  bdUnicastConnection *v8; 

  m_state = this->m_state;
  if ( m_state )
  {
    if ( m_state >= BD_UC_ESTABLISHED )
    {
      bdUnicastConnection::callListenersDisconnect(this);
      this->m_state = BD_UC_CLOSED;
    }
    else
    {
      v3 = 0i64;
      if ( this->m_listeners.m_size )
      {
        v4 = this->m_listeners.m_size != 0;
        do
        {
          bdHandleAssert(v4, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdfastarray.inl", "bdFastArray<class bdConnectionListener *>::operator []", 0x50u, "bdFastArray<T>::operator[], rangecheck failed");
          v5 = this->m_listeners.m_data[v3];
          v6 = v5->__vftable;
          v8 = this;
          onConnectFailed = v6->onConnectFailed;
          _InterlockedExchangeAdd((volatile signed __int32 *)&this->m_refCount, 1u);
          ((void (__fastcall *)(bdConnectionListener *, bdUnicastConnection **))onConnectFailed)(v5, &v8);
          v3 = (unsigned int)(v3 + 1);
          v4 = (unsigned int)v3 < this->m_listeners.m_size;
        }
        while ( (unsigned int)v3 < this->m_listeners.m_size );
        this->m_state = BD_UC_CLOSED;
      }
      else
      {
        this->m_state = BD_UC_CLOSED;
      }
    }
  }
  else
  {
    this->m_state = BD_UC_CLOSED;
  }
}

/*
==============
bdUnicastConnection::connect
==============
*/
char bdUnicastConnection::connect(bdUnicastConnection *this)
{
  if ( this->m_state == BD_UC_CLOSED && bdConnection::connect(this) && bdUnicastConnection::sendInit(this) )
  {
    this->m_state = BD_UC_COOKIE_WAIT;
    return 1;
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdConnection/connections", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdunicastconnection.cpp", "bdUnicastConnection::connect", 0xB5u, "failed to connect!");
    return 0;
  }
}

/*
==============
bdUnicastConnection::disconnect
==============
*/
void bdUnicastConnection::disconnect(bdUnicastConnection *this)
{
  bdUnicastConnection::bdUnicastConnectionStatus m_state; 

  m_state = this->m_state;
  if ( m_state > BD_UC_CLOSED )
  {
    if ( m_state <= BD_UC_COOKIE_ECHOED )
    {
      this->close(this);
    }
    else if ( m_state == BD_UC_ESTABLISHED )
    {
      this->m_state = BD_UC_SHUTDOWN_PENDING;
      bdStopwatch::start(&this->m_shutdownGuard);
    }
  }
}

/*
==============
bdUnicastConnection::getDataToSend
==============
*/
__int64 bdUnicastConnection::getDataToSend(bdUnicastConnection *this, unsigned __int8 *const buffer, const unsigned int bufferSize)
{
  unsigned __int8 *v4; 
  bdUnicastConnection *v5; 
  double ElapsedTimeInSeconds; 
  unsigned int v7; 
  double v8; 
  bool v9; 
  double v10; 
  bdInitAckChunk *m_ptr; 
  double v12; 
  bdUnicastConnection::bdUnicastConnectionStatus m_state; 
  bdQueue<bdUnicastConnection::bdControlChunkStore> *p_m_outQueue; 
  bdLinkedList<bdUnicastConnection::bdControlChunkStore>::Node *m_head; 
  bdChunk *v16; 
  bdLinkedList<bdUnicastConnection::bdControlChunkStore>::Node *v17; 
  bdLinkedList<bdUnicastConnection::bdControlChunkStore>::Node *m_prev; 
  double v19; 
  bdChunk *v20; 
  signed __int32 v21; 
  bdLinkedList<bdUnicastConnection::bdControlChunkStore>::Node *m_tail; 
  bdLinkedList<bdUnicastConnection::bdControlChunkStore>::Node *v23; 
  bdLinkedList<bdUnicastConnection::bdControlChunkStore>::Node *v24; 
  bdLinkedList<bdUnicastConnection::bdControlChunkStore>::Node *m_next; 
  bdLinkedList<bdUnicastConnection::bdControlChunkStore>::Node *v26; 
  unsigned int m_peerTag; 
  bdInitAckChunk *v28; 
  bdChunk *v29; 
  unsigned int v30; 
  bdReliableReceiveWindow *m_reliableRecvWindow; 
  bdReliableSendWindow *m_reliableSendWindow; 
  bdUnicastConnection::bdUnicastConnectionStatus v33; 
  double v34; 
  bdHeartbeatChunk *v35; 
  bdChunk *v36; 
  bdChunk *v37; 
  bdReference<bdChunk> v39; 
  bdReference<bdInitAckChunk> chunk; 
  bdReference<bdChunk> v41; 
  bdReference<bdChunk> v42; 
  bdReference<bdChunk> v43; 
  bdLinkedList<bdUnicastConnection::bdControlChunkStore>::Node *v44; 
  bdPacket packet; 
  bdChunk *v46; 
  char v47; 
  __int64 v48; 
  bdLinkedList<bdUnicastConnection::bdControlChunkStore>::Node *v49; 
  bdInitAckChunk *v50; 
  bdChunk *v51; 
  bdPacket v52; 
  bdChunk *v56; 

  v48 = -2i64;
  v4 = buffer;
  v5 = this;
  bdPacket::bdPacket(&packet, this->m_peerTag, bufferSize);
  ElapsedTimeInSeconds = bdStopwatch::getElapsedTimeInSeconds(&v5->m_shutdownGuard);
  if ( *(float *)&ElapsedTimeInSeconds > 5.0 )
  {
    v5->close(v5);
    v7 = 0;
    goto LABEL_112;
  }
  if ( !v5->m_outQueue.m_list.m_size )
  {
    v8 = bdStopwatch::getElapsedTimeInSeconds(&v5->m_initTimer);
    if ( *(float *)&v8 <= 0.5 )
    {
      v10 = bdStopwatch::getElapsedTimeInSeconds(&v5->m_cookieTimer);
      if ( *(float *)&v10 <= 0.5 )
      {
        v12 = bdStopwatch::getElapsedTimeInSeconds(&v5->m_shutdownTimer);
        if ( *(float *)&v12 <= 0.5 )
          goto LABEL_17;
        m_state = v5->m_state;
        if ( m_state == BD_UC_SHUTDOWN_SENT )
        {
          v9 = bdUnicastConnection::sendShutdown(v5);
        }
        else
        {
          if ( (unsigned int)(m_state - 6) > 1 )
            goto LABEL_17;
          v9 = bdUnicastConnection::sendShutdownAck(v5);
        }
      }
      else
      {
        m_ptr = v5->m_initAckChunk.m_ptr;
        chunk.m_ptr = m_ptr;
        if ( m_ptr )
          _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
        v9 = bdUnicastConnection::sendCookieEcho(v5, (bdReference<bdInitAckChunk>)&chunk);
      }
    }
    else
    {
      v9 = bdUnicastConnection::sendInit(v5);
    }
    if ( !v9 )
      v5->close(v5);
  }
LABEL_17:
  v7 = 0;
  if ( !v5->m_outQueue.m_list.m_size )
  {
LABEL_35:
    v19 = bdStopwatch::getElapsedTimeInSeconds(&v5->m_receiveTimer);
    if ( (unsigned int)(v5->m_state - 3) <= 3 )
    {
      if ( *(float *)&v19 <= 1800.0 )
      {
        m_reliableRecvWindow = v5->m_reliableRecvWindow;
        if ( m_reliableRecvWindow )
          bdReliableReceiveWindow::getDataToSend(m_reliableRecvWindow, &packet);
        m_reliableSendWindow = v5->m_reliableSendWindow;
        if ( m_reliableSendWindow )
          bdReliableSendWindow::getDataToSend(m_reliableSendWindow, &packet);
        bdUnreliableSendWindow::getDataToSend(&v5->m_unreliableSendWindow, &packet);
      }
      else
      {
        bdLogMessage(BD_LOG_WARNING, "warn/", "bdConnection/connections", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdunicastconnection.cpp", "bdUnicastConnection::getDataToSend", 0x281u, "bdUnicastConnection: Connection timed out.");
        v5->close(v5);
      }
    }
    v33 = v5->m_state;
    if ( v33 == BD_UC_SHUTDOWN_PENDING )
    {
      if ( !bdPacket::isEmpty(&packet) || !bdUnicastConnection::windowsEmpty(v5) )
        goto LABEL_94;
      if ( bdUnicastConnection::sendShutdown(v5) )
      {
        v5->m_state = BD_UC_SHUTDOWN_SENT;
        goto LABEL_94;
      }
    }
    else
    {
      if ( v33 != BD_UC_SHUTDOWN_RECEIVED || !bdPacket::isEmpty(&packet) || !bdUnicastConnection::windowsEmpty(v5) )
        goto LABEL_94;
      if ( bdUnicastConnection::sendShutdownAck(v5) )
      {
        v5->m_state = BD_UC_SHUTDOWN_ACK_SENT;
        goto LABEL_94;
      }
    }
    v5->close(v5);
LABEL_94:
    if ( v5->m_state == BD_UC_ESTABLISHED && bdPacket::isEmpty(&packet) )
    {
      v34 = bdStopwatch::getElapsedTimeInSeconds(&v5->m_sendTimer);
      if ( *(float *)&v34 > 10.0 )
      {
        bdLogMessage(BD_LOG_INFO, "info/", "bdConnection/connections", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdunicastconnection.cpp", "bdUnicastConnection::getDataToSend", 0x2CFu, "Sending Heartbeat. Last send %.2fs ago.", *(float *)&v34);
        v35 = (bdHeartbeatChunk *)bdMemory::allocate(0x20ui64);
        if ( v35 )
        {
          bdHeartbeatChunk::bdHeartbeatChunk(v35);
          v37 = v36;
        }
        else
        {
          v37 = NULL;
        }
        v51 = v37;
        if ( v37 )
          _InterlockedExchangeAdd((volatile signed __int32 *)&v37->m_refCount, 1u);
        v43.m_ptr = v37;
        if ( v37 )
          _InterlockedExchangeAdd((volatile signed __int32 *)&v37->m_refCount, 1u);
        bdPacket::addChunk(&packet, (bdReference<bdChunk>)&v43);
        if ( v37 && _InterlockedExchangeAdd((volatile signed __int32 *)&v37->m_refCount, 0xFFFFFFFF) == 1 )
          ((void (__fastcall *)(bdChunk *, __int64))v37->~bdReferencable)(v37, 1i64);
      }
    }
    if ( !bdPacket::isEmpty(&packet) )
    {
      v7 = bdPacket::serialize(&packet, v4, bufferSize);
      if ( v7 > bufferSize )
        bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdConnection/connections", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdunicastconnection.cpp", "bdUnicastConnection::getDataToSend", 0x2E3u, "buffer overflow!");
      bdStopwatch::start(&v5->m_sendTimer);
      if ( v7 )
      {
        bdConnectionStatistics::addBytesSent(&v5->m_stats, v7 + 28);
        bdConnectionStatistics::addPacketsSent(&v5->m_stats, 1u);
        bdConnectionStatistics::addPacketSizeSent(&v5->m_stats, v7);
      }
    }
    goto LABEL_112;
  }
  p_m_outQueue = &v5->m_outQueue;
  while ( 1 )
  {
    bdHandleAssert(v5->m_outQueue.m_list.m_size != 0, "getSize() > 0", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdqueue.inl", "bdQueue<class bdUnicastConnection::bdControlChunkStore>::peek", 0x19u, "bdQueue::dequeue, queue empty, can't peek.");
    bdHandleAssert(p_m_outQueue->m_list.m_head != NULL, "m_head != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdlinkedlist.inl", "bdLinkedList<class bdUnicastConnection::bdControlChunkStore>::getHead", 0x42u, "bdLinkedList::GetHead, list is empty so has no head.");
    m_head = p_m_outQueue->m_list.m_head;
    v44 = m_head;
    if ( m_head->m_data.m_lone )
      break;
    v16 = m_head->m_data.m_chunk.m_ptr;
    v41.m_ptr = v16;
    if ( v16 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v16->m_refCount, 1u);
    if ( bdPacket::addChunk(&packet, (bdReference<bdChunk>)&v41) )
    {
      bdHandleAssert(v5->m_outQueue.m_list.m_size != 0, "getSize() > 0", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdqueue.inl", "bdQueue<class bdUnicastConnection::bdControlChunkStore>::dequeue", 0x12u, "bdQueue::dequeue, queue empty, can't dequeue.");
      v17 = p_m_outQueue->m_list.m_head;
      if ( p_m_outQueue->m_list.m_head )
      {
        p_m_outQueue->m_list.m_head = v17->m_next;
        m_prev = v17->m_prev;
        if ( v17 == v5->m_outQueue.m_list.m_tail )
          v5->m_outQueue.m_list.m_tail = m_prev;
        else
          v17->m_next->m_prev = m_prev;
        if ( v17->m_data.m_chunk.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v17->m_data.m_chunk.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
        {
          if ( v17->m_data.m_chunk.m_ptr )
            ((void (__fastcall *)(bdChunk *, __int64))v17->m_data.m_chunk.m_ptr->~bdReferencable)(v17->m_data.m_chunk.m_ptr, 1i64);
          v17->m_data.m_chunk.m_ptr = NULL;
        }
        bdMemory::deallocate(v17);
        --v5->m_outQueue.m_list.m_size;
      }
      if ( v5->m_outQueue.m_list.m_size )
        continue;
    }
    v4 = buffer;
    goto LABEL_35;
  }
  v39.m_ptr = NULL;
  if ( bdPacket::getNextChunk(&packet, &v39) )
  {
    do
    {
      v20 = v39.m_ptr;
      v56 = v39.m_ptr;
      if ( v39.m_ptr )
      {
        _InterlockedExchangeAdd((volatile signed __int32 *)&v39.m_ptr->m_refCount, 1u);
        v20 = v56;
      }
      v46 = v20;
      if ( v20 )
      {
        _InterlockedExchangeAdd((volatile signed __int32 *)&v20->m_refCount, 1u);
        v20 = v56;
      }
      v47 = 0;
      if ( v20 )
      {
        v21 = _InterlockedExchangeAdd((volatile signed __int32 *)&v20->m_refCount, 0xFFFFFFFF);
        v20 = v56;
        if ( v21 == 1 )
          ((void (__fastcall *)(bdChunk *, __int64))v56->~bdReferencable)(v56, 1i64);
      }
      m_tail = v5->m_outQueue.m_list.m_tail;
      v23 = (bdLinkedList<bdUnicastConnection::bdControlChunkStore>::Node *)bdMemory::allocate(0x20ui64);
      v24 = v23;
      v49 = v23;
      if ( v23 )
      {
        v23->m_data.m_chunk.m_ptr = v20;
        if ( v20 )
        {
          _InterlockedExchangeAdd((volatile signed __int32 *)&v20->m_refCount, 1u);
          v20 = v56;
        }
        v23->m_data.m_lone = 0;
      }
      else
      {
        v24 = NULL;
      }
      if ( m_tail )
      {
        v24->m_next = m_tail->m_next;
        v24->m_prev = m_tail;
        m_next = m_tail->m_next;
        if ( m_next )
        {
          m_next->m_prev = v24;
        }
        else
        {
          bdHandleAssert(m_tail == v5->m_outQueue.m_list.m_tail, "node == m_tail", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdlinkedlist.inl", "bdLinkedList<class bdUnicastConnection::bdControlChunkStore>::insertAfter", 0x176u, "bdLinkedList::insertAfter, node has no next entry, but is not the tail.");
          v5->m_outQueue.m_list.m_tail = v24;
        }
        m_tail->m_next = v24;
      }
      else
      {
        v24->m_next = NULL;
        v24->m_prev = v5->m_outQueue.m_list.m_tail;
        v26 = v5->m_outQueue.m_list.m_tail;
        if ( v26 )
          v26->m_next = v24;
        else
          p_m_outQueue->m_list.m_head = v24;
        v5->m_outQueue.m_list.m_tail = v24;
      }
      ++v5->m_outQueue.m_list.m_size;
      if ( v20 && _InterlockedExchangeAdd((volatile signed __int32 *)&v20->m_refCount, 0xFFFFFFFF) == 1 )
      {
        ((void (__fastcall *)(bdChunk *, __int64))v56->~bdReferencable)(v56, 1i64);
        v46 = NULL;
      }
    }
    while ( bdPacket::getNextChunk(&packet, &v39) );
    v5 = this;
    m_head = v44;
  }
  m_peerTag = v5->m_peerTag;
  if ( m_head->m_data.m_chunk.m_ptr->getType(m_head->m_data.m_chunk.m_ptr) == BD_CT_INIT_ACK )
  {
    v28 = (bdInitAckChunk *)m_head->m_data.m_chunk.m_ptr;
    v50 = v28;
    if ( v28 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v28->m_refCount, 1u);
    m_peerTag = bdInitAckChunk::getPeerTag(v28);
    if ( v28 && _InterlockedExchangeAdd((volatile signed __int32 *)&v28->m_refCount, 0xFFFFFFFF) == 1 )
      ((void (__fastcall *)(bdInitAckChunk *, __int64))v28->~bdReferencable)(v28, 1i64);
  }
  bdPacket::bdPacket(&v52, m_peerTag, bufferSize);
  v29 = m_head->m_data.m_chunk.m_ptr;
  v42.m_ptr = v29;
  if ( v29 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v29->m_refCount, 1u);
  bdPacket::addChunk(&v52, (bdReference<bdChunk>)&v42);
  bdQueue<bdUnicastConnection::bdControlChunkStore>::dequeue(p_m_outQueue);
  v30 = bdPacket::serialize(&v52, buffer, bufferSize);
  bdPacket::~bdPacket(&v52);
  if ( v39.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v39.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v39.m_ptr )
    ((void (__fastcall *)(bdChunk *, __int64))v39.m_ptr->~bdReferencable)(v39.m_ptr, 1i64);
  v7 = v30;
LABEL_112:
  bdPacket::~bdPacket(&packet);
  return v7;
}

/*
==============
bdUnicastConnection::getMessageToDispatch
==============
*/
__int64 bdUnicastConnection::getMessageToDispatch(bdUnicastConnection *this, bdReference<bdMessage> *message)
{
  unsigned __int8 v4; 
  bdReliableReceiveWindow *m_reliableRecvWindow; 
  bdDataChunk *m_ptr; 
  __int64 *v7; 
  bdMessage *v8; 
  bdDataChunk *v9; 
  __int64 *v10; 
  bdMessage *v11; 
  bdMessage *v12; 
  bdReference<bdMessage> v14; 
  bdReference<bdMessage> v15; 
  __int64 v16; 
  bdMessage *v17; 
  bdReference<bdDataChunk> result; 
  bdReference<bdDataChunk> v19; 

  v16 = -2i64;
  v4 = 0;
  v17 = NULL;
  m_reliableRecvWindow = this->m_reliableRecvWindow;
  if ( m_reliableRecvWindow )
  {
    bdReliableReceiveWindow::getNextToRead(m_reliableRecvWindow, &result);
    m_ptr = result.m_ptr;
    if ( result.m_ptr )
    {
      v7 = (__int64 *)bdDataChunk::getMessage(result.m_ptr, &v14);
      if ( v7 != (__int64 *)&v17 )
      {
        v8 = (bdMessage *)*v7;
        v17 = v8;
        if ( v8 )
          _InterlockedExchangeAdd((volatile signed __int32 *)&v8->m_refCount, 1u);
      }
      if ( v14.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v14.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v14.m_ptr )
        ((void (__fastcall *)(bdMessage *, __int64))v14.m_ptr->~bdReferencable)(v14.m_ptr, 1i64);
      v4 = 1;
      m_ptr = result.m_ptr;
    }
    if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result.m_ptr )
      ((void (__fastcall *)(bdDataChunk *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
    if ( v4 )
      goto LABEL_33;
  }
  bdUnreliableReceiveWindow::getNextToRead(&this->m_unreliableReceiveWindow, &v19);
  v9 = v19.m_ptr;
  if ( v19.m_ptr )
  {
    v10 = (__int64 *)bdDataChunk::getMessage(v19.m_ptr, &v15);
    if ( v10 != (__int64 *)&v17 )
    {
      if ( v17 && _InterlockedExchangeAdd((volatile signed __int32 *)&v17->m_refCount, 0xFFFFFFFF) == 1 )
        ((void (__fastcall *)(bdMessage *, __int64))v17->~bdReferencable)(v17, 1i64);
      v11 = (bdMessage *)*v10;
      v17 = v11;
      if ( v11 )
        _InterlockedExchangeAdd((volatile signed __int32 *)&v11->m_refCount, 1u);
    }
    if ( v15.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v15.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v15.m_ptr )
      ((void (__fastcall *)(bdMessage *, __int64))v15.m_ptr->~bdReferencable)(v15.m_ptr, 1i64);
    v4 = 1;
    v9 = v19.m_ptr;
  }
  if ( v9 && _InterlockedExchangeAdd((volatile signed __int32 *)&v9->m_refCount, 0xFFFFFFFF) == 1 && v19.m_ptr )
    ((void (__fastcall *)(bdDataChunk *, __int64))v19.m_ptr->~bdReferencable)(v19.m_ptr, 1i64);
  if ( v4 )
  {
LABEL_33:
    if ( &v17 != (bdMessage **)message )
    {
      if ( message->m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&message->m_ptr->m_refCount, 0xFFFFFFFF) == 1 && message->m_ptr )
        ((void (__fastcall *)(bdMessage *, __int64))message->m_ptr->~bdReferencable)(message->m_ptr, 1i64);
      v12 = v17;
      message->m_ptr = v17;
      if ( v12 )
        _InterlockedExchangeAdd((volatile signed __int32 *)&v12->m_refCount, 1u);
    }
  }
  if ( v17 && _InterlockedExchangeAdd((volatile signed __int32 *)&v17->m_refCount, 0xFFFFFFFF) == 1 )
    ((void (__fastcall *)(bdMessage *, __int64))v17->~bdReferencable)(v17, 1i64);
  return v4;
}

/*
==============
bdUnicastConnection::getOutOfOrderMessageToDispatch
==============
*/
__int64 bdUnicastConnection::getOutOfOrderMessageToDispatch(bdUnicastConnection *this, bdReference<bdMessage> *message)
{
  unsigned __int8 v3; 
  bdDataChunk *m_ptr; 
  const bdReference<bdMessage> *v5; 
  bdReference<bdDataChunk> result; 
  bdReference<bdMessage> v8; 

  v3 = 0;
  bdUnreliableReceiveWindow::getNextOutOfOrderToRead(&this->m_unreliableReceiveWindow, &result);
  m_ptr = result.m_ptr;
  if ( result.m_ptr )
  {
    v5 = bdDataChunk::getMessage(result.m_ptr, &v8);
    bdReference<bdMessage>::operator=(message, v5);
    if ( v8.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v8.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v8.m_ptr )
      ((void (__fastcall *)(bdMessage *, __int64))v8.m_ptr->~bdReferencable)(v8.m_ptr, 1i64);
    v3 = 1;
    m_ptr = result.m_ptr;
  }
  if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result.m_ptr )
    ((void (__fastcall *)(bdDataChunk *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
  return v3;
}

/*
==============
bdUnicastConnection::getStats
==============
*/
bdConnectionStatistics *bdUnicastConnection::getStats(bdUnicastConnection *this)
{
  return &this->m_stats;
}

/*
==============
bdUnicastConnection::getStatus
==============
*/
__int64 bdUnicastConnection::getStatus(bdUnicastConnection *this)
{
  __int64 result; 

  switch ( this->m_state )
  {
    case BD_UC_CLOSED:
      goto $LN4_291;
    case BD_UC_COOKIE_WAIT:
    case BD_UC_COOKIE_ECHOED:
      result = 1i64;
      break;
    case BD_UC_ESTABLISHED:
      result = 2i64;
      break;
    case BD_UC_SHUTDOWN_PENDING:
    case BD_UC_SHUTDOWN_SENT:
    case BD_UC_SHUTDOWN_RECEIVED:
    case BD_UC_SHUTDOWN_ACK_SENT:
      result = 3i64;
      break;
    default:
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdConnection/connections", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdunicastconnection.cpp", "bdUnicastConnection::getStatus", 0x122u, "Unknown state");
$LN4_291:
      result = 4i64;
      break;
  }
  return result;
}

/*
==============
bdUnicastConnection::handleCookieAck
==============
*/
char bdUnicastConnection::handleCookieAck(bdUnicastConnection *this, bdReference<bdChunk> *__formal, const unsigned int vtag)
{
  unsigned int m_localTag; 
  __int64 v5; 
  bool v6; 
  bdConnectionListener *v7; 
  bdConnectionListener_vtbl *v8; 
  void (__fastcall *onConnect)(bdConnectionListener *, bdReference<bdConnection>); 
  unsigned int v11; 
  bdUnicastConnection::bdUnicastConnectionStatus m_state; 
  unsigned int m_peerTag; 
  bdUnicastConnection *v15; 

  m_localTag = this->m_localTag;
  if ( vtag != m_localTag )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdConnection/connections", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdunicastconnection.cpp", "bdUnicastConnection::handleCookieAck", 0x4C7u, "Invalid verification tag on cookie ack. (%X)", vtag);
    return 0;
  }
  if ( this->m_state != BD_UC_COOKIE_ECHOED )
  {
    m_state = this->m_state;
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdConnection/connections", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdunicastconnection.cpp", "bdUnicastConnection::handleCookieAck", 0x4C2u, "Cookie ack received in invalid state: %u", m_state);
    return 0;
  }
  m_peerTag = this->m_peerTag;
  v11 = m_localTag;
  bdLogMessage(BD_LOG_INFO, "info/", "bdConnection/connections", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdunicastconnection.cpp", "bdUnicastConnection::handleCookieAck", 0x4B7u, "uc::handling cookie ack: m_localTag/m_peerTag: %X/%X", v11, m_peerTag);
  v5 = 0i64;
  this->m_state = BD_UC_ESTABLISHED;
  if ( this->m_listeners.m_size )
  {
    v6 = this->m_listeners.m_size != 0;
    do
    {
      bdHandleAssert(v6, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdfastarray.inl", "bdFastArray<class bdConnectionListener *>::operator []", 0x50u, "bdFastArray<T>::operator[], rangecheck failed");
      v7 = this->m_listeners.m_data[v5];
      v8 = v7->__vftable;
      v15 = this;
      onConnect = v8->onConnect;
      _InterlockedExchangeAdd((volatile signed __int32 *)&this->m_refCount, 1u);
      ((void (__fastcall *)(bdConnectionListener *, bdUnicastConnection **))onConnect)(v7, &v15);
      v5 = (unsigned int)(v5 + 1);
      v6 = (unsigned int)v5 < this->m_listeners.m_size;
    }
    while ( (unsigned int)v5 < this->m_listeners.m_size );
  }
  bdStopwatch::reset(&this->m_cookieTimer);
  return 1;
}

/*
==============
bdUnicastConnection::handleCookieEcho
==============
*/
_BOOL8 bdUnicastConnection::handleCookieEcho(bdUnicastConnection *this, bdReference<bdChunk> *chunk, const unsigned int __formal)
{
  bool v4; 
  bdCookieEchoChunk *m_ptr; 
  unsigned int LocalTag; 
  unsigned int PeerTag; 
  unsigned int LocalTieTag; 
  unsigned int PeerTieTag; 
  bdUnicastConnection::bdUnicastConnectionStatus m_state; 
  unsigned int m_localTag; 
  unsigned int m_peerTag; 
  bdAddressMap *v13; 
  __int64 v14; 
  bool v15; 
  bdConnectionListener *v16; 
  void (__fastcall *onReconnect)(bdConnectionListener *, bdReference<bdConnection>); 
  bdSecurityID *p_id; 
  __int64 v19; 
  bool v20; 
  bdConnectionListener *v21; 
  void (__fastcall *v22)(bdConnectionListener *, bdReference<bdConnection>); 
  __int64 v23; 
  bool v24; 
  bdConnectionListener *v25; 
  void (__fastcall *v26)(bdConnectionListener *, bdReference<bdConnection>); 
  bdAddressMap *m_addrMap; 
  __int64 v28; 
  bool v29; 
  bdConnectionListener *v30; 
  void (__fastcall *onConnect)(bdConnectionListener *, bdReference<bdConnection>); 
  unsigned int v33; 
  unsigned int v34; 
  unsigned int v35; 
  unsigned int v36; 
  bdReference<bdCookie> cookie; 
  bdCookieEchoChunk *v38; 
  bdUnicastConnection *v39; 
  bdUnicastConnection *v40; 
  bdUnicastConnection *v41; 
  __int64 v42[3]; 
  bdSecurityID v43; 
  bdSecurityID id; 

  v42[1] = -2i64;
  v4 = 0;
  m_ptr = (bdCookieEchoChunk *)chunk->m_ptr;
  v38 = m_ptr;
  if ( m_ptr )
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
  if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
    ((void (__fastcall *)(bdCookieEchoChunk *, __int64))v38->~bdReferencable)(v38, 1i64);
  v42[2] = (__int64)v38;
  if ( v38 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v38->m_refCount, 1u);
  cookie.m_ptr = NULL;
  if ( bdCookieEchoChunk::getCookie(v38, &cookie) )
  {
    LocalTag = bdCookie::getLocalTag(cookie.m_ptr);
    PeerTag = bdCookie::getPeerTag(cookie.m_ptr);
    LocalTieTag = bdCookie::getLocalTieTag(cookie.m_ptr);
    PeerTieTag = bdCookie::getPeerTieTag(cookie.m_ptr);
    m_state = this->m_state;
    if ( m_state == BD_UC_CLOSED )
    {
      bdSecurityID::bdSecurityID(&v43);
      m_addrMap = this->m_addrMap;
      if ( m_addrMap )
      {
        bdAddressMap::addrToCommonAddr(m_addrMap, &this->m_addrHandle, &this->m_addr, &v43);
        this->m_localTag = LocalTag;
        this->m_peerTag = PeerTag;
        v36 = PeerTag;
        v34 = LocalTag;
        bdLogMessage(BD_LOG_INFO, "info/", "bdConnection/connections", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdunicastconnection.cpp", "bdUnicastConnection::handleCookieEcho", 0x413u, "uc::handling cookie echo: m_localTag/m_peerTag: %X/%X", v34, v36);
        if ( bdUnicastConnection::sendCookieAck(this) )
        {
          this->m_state = BD_UC_ESTABLISHED;
          v28 = 0i64;
          if ( this->m_listeners.m_size )
          {
            v29 = this->m_listeners.m_size != 0;
            do
            {
              bdHandleAssert(v29, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdfastarray.inl", "bdFastArray<class bdConnectionListener *>::operator []", 0x50u, "bdFastArray<T>::operator[], rangecheck failed");
              v30 = this->m_listeners.m_data[v28];
              onConnect = v30->onConnect;
              v42[0] = (__int64)this;
              if ( this )
                _InterlockedExchangeAdd((volatile signed __int32 *)&this->m_refCount, 1u);
              ((void (__fastcall *)(bdConnectionListener *, __int64 *))onConnect)(v30, v42);
              v28 = (unsigned int)(v28 + 1);
              v29 = (unsigned int)v28 < this->m_listeners.m_size;
            }
            while ( (unsigned int)v28 < this->m_listeners.m_size );
          }
          v4 = 1;
        }
      }
      else
      {
        bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdConnection/connections", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdunicastconnection.cpp", "bdUnicastConnection::handleCookieEcho", 0x40Bu, "Addr map pointer not initialised.");
      }
      p_id = &v43;
      goto LABEL_52;
    }
    m_localTag = this->m_localTag;
    if ( m_localTag == LocalTag )
    {
      if ( this->m_peerTag == PeerTag && PeerTieTag )
      {
        if ( m_state != BD_UC_ESTABLISHED )
        {
          this->m_state = BD_UC_ESTABLISHED;
          v19 = 0i64;
          if ( this->m_listeners.m_size )
          {
            v20 = this->m_listeners.m_size != 0;
            do
            {
              bdHandleAssert(v20, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdfastarray.inl", "bdFastArray<class bdConnectionListener *>::operator []", 0x50u, "bdFastArray<T>::operator[], rangecheck failed");
              v21 = this->m_listeners.m_data[v19];
              v22 = v21->onConnect;
              v40 = this;
              if ( this )
                _InterlockedExchangeAdd((volatile signed __int32 *)&this->m_refCount, 1u);
              ((void (__fastcall *)(bdConnectionListener *, bdUnicastConnection **))v22)(v21, &v40);
              v19 = (unsigned int)(v19 + 1);
              v20 = (unsigned int)v19 < this->m_listeners.m_size;
            }
            while ( (unsigned int)v19 < this->m_listeners.m_size );
          }
        }
      }
      else
      {
        if ( m_state != BD_UC_ESTABLISHED )
        {
          this->m_state = BD_UC_ESTABLISHED;
          v23 = 0i64;
          if ( this->m_listeners.m_size )
          {
            v24 = this->m_listeners.m_size != 0;
            do
            {
              bdHandleAssert(v24, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdfastarray.inl", "bdFastArray<class bdConnectionListener *>::operator []", 0x50u, "bdFastArray<T>::operator[], rangecheck failed");
              v25 = this->m_listeners.m_data[v23];
              v26 = v25->onConnect;
              v41 = this;
              if ( this )
                _InterlockedExchangeAdd((volatile signed __int32 *)&this->m_refCount, 1u);
              ((void (__fastcall *)(bdConnectionListener *, bdUnicastConnection **))v26)(v25, &v41);
              v23 = (unsigned int)(v23 + 1);
              v24 = (unsigned int)v23 < this->m_listeners.m_size;
            }
            while ( (unsigned int)v23 < this->m_listeners.m_size );
          }
        }
        this->m_peerTag = PeerTag;
      }
      bdStopwatch::reset(&this->m_initTimer);
      bdStopwatch::reset(&this->m_cookieTimer);
      v4 = bdUnicastConnection::sendCookieAck(this);
    }
    else
    {
      m_peerTag = this->m_peerTag;
      if ( m_peerTag != PeerTag )
      {
        if ( m_localTag == LocalTieTag && m_peerTag == PeerTieTag )
        {
          bdUnicastConnection::reset(this);
          if ( bdUnicastConnection::sendCookieAck(this) )
          {
            v35 = this->m_peerTag;
            v33 = this->m_localTag;
            bdLogMessage(BD_LOG_INFO, "info/", "bdConnection/connections", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdunicastconnection.cpp", "bdUnicastConnection::handleCookieEcho", 0x456u, "uc::handling cookie echo: m_localTag/m_peerTag: %X/%X", v33, v35);
            bdSecurityID::bdSecurityID(&id);
            v13 = this->m_addrMap;
            if ( v13 )
            {
              bdAddressMap::addrToCommonAddr(v13, &this->m_addrHandle, &this->m_addr, &id);
              this->m_localTag = LocalTag;
              this->m_peerTag = PeerTag;
              this->m_state = BD_UC_ESTABLISHED;
              v14 = 0i64;
              if ( this->m_listeners.m_size )
              {
                v15 = this->m_listeners.m_size != 0;
                do
                {
                  bdHandleAssert(v15, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdfastarray.inl", "bdFastArray<class bdConnectionListener *>::operator []", 0x50u, "bdFastArray<T>::operator[], rangecheck failed");
                  v16 = this->m_listeners.m_data[v14];
                  onReconnect = v16->onReconnect;
                  v39 = this;
                  if ( this )
                    _InterlockedExchangeAdd((volatile signed __int32 *)&this->m_refCount, 1u);
                  ((void (__fastcall *)(bdConnectionListener *, bdUnicastConnection **))onReconnect)(v16, &v39);
                  v14 = (unsigned int)(v14 + 1);
                  v15 = (unsigned int)v14 < this->m_listeners.m_size;
                }
                while ( (unsigned int)v14 < this->m_listeners.m_size );
              }
              v4 = 1;
            }
            else
            {
              bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdConnection/connections", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdunicastconnection.cpp", "bdUnicastConnection::handleCookieEcho", 0x45Au, "Addr map pointer not initialised.");
            }
            p_id = &id;
LABEL_52:
            bdSecurityID::~bdSecurityID(p_id);
          }
        }
        else if ( m_peerTag != PeerTag )
        {
          v4 = 1;
        }
      }
    }
  }
  if ( cookie.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&cookie.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
  {
    if ( cookie.m_ptr )
      ((void (__fastcall *)(bdCookie *, __int64))cookie.m_ptr->~bdReferencable)(cookie.m_ptr, 1i64);
    cookie.m_ptr = NULL;
  }
  if ( v38 && _InterlockedExchangeAdd((volatile signed __int32 *)&v38->m_refCount, 0xFFFFFFFF) == 1 )
    ((void (__fastcall *)(bdCookieEchoChunk *, __int64))v38->~bdReferencable)(v38, 1i64);
  return v4;
}

/*
==============
bdUnicastConnection::handleData
==============
*/
_BOOL8 bdUnicastConnection::handleData(bdUnicastConnection *this, bdReference<bdChunk> *chunk)
{
  bdChunk *m_ptr; 
  bdDataChunk *v4; 
  bdDataChunk *v5; 
  bool m_acceptOutOfOrder; 
  bool v7; 
  bdReliableReceiveWindow *m_reliableRecvWindow; 
  bdDataChunk *v9; 
  bdReliableReceiveWindow *v10; 
  bdChunk *v12; 
  bdReference<bdDataChunk> chunka; 
  bdReference<bdDataChunk> v14; 

  m_ptr = chunk->m_ptr;
  v4 = (bdDataChunk *)chunk->m_ptr;
  v12 = chunk->m_ptr;
  if ( chunk->m_ptr )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
    v4 = (bdDataChunk *)v12;
  }
  if ( m_ptr )
  {
    v4 = (bdDataChunk *)v12;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
      ((void (__fastcall *)(bdChunk *, __int64))v12->~bdReferencable)(v12, 1i64);
  }
  v5 = v4;
  if ( v4 )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)&v4->m_refCount, 1u);
    v4 = (bdDataChunk *)v12;
  }
  if ( (bdDataChunk::getFlags(v4) & 1) != 0 )
  {
    m_acceptOutOfOrder = this->m_acceptOutOfOrder;
    chunka.m_ptr = v4;
    if ( v5 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v5->m_refCount, 1u);
    v7 = bdUnreliableReceiveWindow::add(&this->m_unreliableReceiveWindow, (bdReference<bdDataChunk>)&chunka, m_acceptOutOfOrder);
  }
  else
  {
    m_reliableRecvWindow = this->m_reliableRecvWindow;
    if ( !m_reliableRecvWindow )
    {
      v9 = (bdDataChunk *)bdMemory::allocate(0x430ui64);
      v14.m_ptr = v9;
      if ( v9 )
      {
        bdReliableReceiveWindow::bdReliableReceiveWindow((bdReliableReceiveWindow *)v9);
        m_reliableRecvWindow = v10;
      }
      else
      {
        m_reliableRecvWindow = NULL;
      }
      this->m_reliableRecvWindow = m_reliableRecvWindow;
    }
    v14.m_ptr = v4;
    if ( v5 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v5->m_refCount, 1u);
    v7 = bdReliableReceiveWindow::add(m_reliableRecvWindow, (bdReference<bdDataChunk>)&v14);
    if ( !v7 )
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdConnection/connections", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdunicastconnection.cpp", "bdUnicastConnection::handleData", 0x342u, "receive window full.");
  }
  if ( v5 && _InterlockedExchangeAdd((volatile signed __int32 *)&v5->m_refCount, 0xFFFFFFFF) == 1 )
    ((void (__fastcall *)(bdChunk *, __int64))v12->~bdReferencable)(v12, 1i64);
  return v7;
}

/*
==============
bdUnicastConnection::handleHeartbeat
==============
*/
bool bdUnicastConnection::handleHeartbeat(bdUnicastConnection *this, bdReference<bdChunk> *chunk)
{
  bdInitChunk *m_ptr; 
  bdReference<bdInitChunk> __formal; 

  bdStopwatch::start(&this->m_receiveTimer);
  m_ptr = (bdInitChunk *)chunk->m_ptr;
  __formal.m_ptr = m_ptr;
  if ( m_ptr )
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
  return bdUnicastConnection::sendHeartbeatAck(this, (bdReference<bdInitChunk>)&__formal);
}

/*
==============
bdUnicastConnection::handleHeartbeatAck
==============
*/
char bdUnicastConnection::handleHeartbeatAck(bdUnicastConnection *this, bdReference<bdChunk> *__formal)
{
  bdStopwatch::start(&this->m_receiveTimer);
  return 1;
}

/*
==============
bdUnicastConnection::handleInit
==============
*/
_BOOL8 bdUnicastConnection::handleInit(bdUnicastConnection *this, bdReference<bdChunk> *chunk)
{
  bool inited; 
  bdChunk *m_ptr; 
  bdInitChunk *v6; 
  bdInitChunk *v7; 
  bdAddressMap *m_addrMap; 
  bdInitChunk *v9; 
  unsigned int m_localTag; 
  unsigned int InitTag; 
  bdChunk *v13; 
  bdReference<bdInitChunk> chunka; 
  __int64 v15; 
  bdInitChunk *v16; 
  bdSecurityID id; 

  v15 = -2i64;
  inited = 0;
  m_ptr = chunk->m_ptr;
  v6 = (bdInitChunk *)chunk->m_ptr;
  v13 = chunk->m_ptr;
  if ( chunk->m_ptr )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
    v6 = (bdInitChunk *)v13;
  }
  if ( m_ptr )
  {
    v6 = (bdInitChunk *)v13;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
      ((void (__fastcall *)(bdChunk *, __int64))v13->~bdReferencable)(v13, 1i64);
  }
  v16 = v6;
  v7 = v6;
  if ( v6 )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)&v6->m_refCount, 1u);
    v6 = (bdInitChunk *)v13;
  }
  bdSecurityID::bdSecurityID(&id);
  m_addrMap = this->m_addrMap;
  if ( m_addrMap )
  {
    bdAddressMap::addrToCommonAddr(m_addrMap, &this->m_addrHandle, &this->m_addr, &id);
    if ( bdInitChunk::getInitTag(v6) )
    {
      m_localTag = this->m_localTag;
      bdLogMessage(BD_LOG_INFO, "info/", "bdConnection/connections", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdunicastconnection.cpp", "bdUnicastConnection::handleInit", 0x3BCu, "uc::handling init: m_localTag: %X", m_localTag);
      v9 = (bdInitChunk *)chunk->m_ptr;
      chunka.m_ptr = v9;
      if ( v9 )
        _InterlockedExchangeAdd((volatile signed __int32 *)&v9->m_refCount, 1u);
      inited = bdUnicastConnection::sendInitAck(this, (bdReference<bdInitChunk>)&chunka);
    }
    else
    {
      InitTag = bdInitChunk::getInitTag(v6);
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdConnection/connections", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdunicastconnection.cpp", "bdUnicastConnection::handleInit", 0x3C1u, "handleInit: invalid init tag (%X)", InitTag);
      inited = 0;
    }
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdConnection/connections", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdunicastconnection.cpp", "bdUnicastConnection::handleInit", 0x3B5u, "Addr map pointer not initialised.");
  }
  bdSecurityID::~bdSecurityID(&id);
  if ( v7 && _InterlockedExchangeAdd((volatile signed __int32 *)&v7->m_refCount, 0xFFFFFFFF) == 1 )
    ((void (__fastcall *)(bdChunk *, __int64))v13->~bdReferencable)(v13, 1i64);
  return inited;
}

/*
==============
bdUnicastConnection::handleInitAck
==============
*/
__int64 bdUnicastConnection::handleInitAck(bdUnicastConnection *this, bdReference<bdChunk> *chunk, const unsigned int vtag)
{
  unsigned __int8 v4; 
  bdChunk *m_ptr; 
  bdInitAckChunk *v6; 
  bdInitAckChunk *v7; 
  unsigned int InitTag; 
  unsigned int m_localTag; 
  int v11; 
  unsigned int v12; 
  bdInitAckChunk *v13; 
  bdReference<bdInitAckChunk> chunka; 

  v4 = 0;
  if ( this->m_state == BD_UC_COOKIE_WAIT )
  {
    if ( vtag == this->m_localTag )
    {
      m_ptr = chunk->m_ptr;
      v6 = (bdInitAckChunk *)m_ptr;
      v13 = (bdInitAckChunk *)m_ptr;
      if ( m_ptr )
      {
        _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
        v6 = (bdInitAckChunk *)m_ptr;
      }
      if ( m_ptr )
      {
        v6 = (bdInitAckChunk *)m_ptr;
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
          ((void (__fastcall *)(bdChunk *, __int64))m_ptr->~bdReferencable)(m_ptr, 1i64);
      }
      v7 = v6;
      if ( v6 )
      {
        _InterlockedExchangeAdd((volatile signed __int32 *)&v6->m_refCount, 1u);
        v6 = v13;
      }
      InitTag = bdInitAckChunk::getInitTag(v6);
      this->m_peerTag = InitTag;
      if ( InitTag )
      {
        v12 = InitTag;
        m_localTag = this->m_localTag;
        bdLogMessage(BD_LOG_INFO, "info/", "bdConnection/connections", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdunicastconnection.cpp", "bdUnicastConnection::handleInitAck", 0x3DBu, "uc::handling init ack: m_localTag/m_peerTag: %X/%X", m_localTag, v12);
        chunka.m_ptr = v6;
        if ( v7 )
          _InterlockedExchangeAdd((volatile signed __int32 *)&v7->m_refCount, 1u);
        if ( bdUnicastConnection::sendCookieEcho(this, (bdReference<bdInitAckChunk>)&chunka) )
        {
          bdStopwatch::reset(&this->m_initTimer);
          this->m_state = BD_UC_COOKIE_ECHOED;
          v4 = 1;
        }
      }
      else
      {
        v11 = 0;
        bdLogMessage(BD_LOG_WARNING, "warn/", "bdConnection/connections", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdunicastconnection.cpp", "bdUnicastConnection::handleInitAck", 0x3E7u, "handleInitAck: invalid init tag (%X)", v11);
      }
      if ( v7 && _InterlockedExchangeAdd((volatile signed __int32 *)&v7->m_refCount, 0xFFFFFFFF) == 1 )
        ((void (__fastcall *)(bdInitAckChunk *, __int64))v13->~bdReferencable)(v13, 1i64);
    }
    else
    {
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdConnection/connections", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdunicastconnection.cpp", "bdUnicastConnection::handleInitAck", 0x3ECu, "Invalid verification tag on init ack.");
    }
  }
  return v4;
}

/*
==============
bdUnicastConnection::handleSAck
==============
*/
_BOOL8 bdUnicastConnection::handleSAck(bdUnicastConnection *this, bdReference<bdChunk> *chunk)
{
  bool v3; 
  bdChunk *m_ptr; 
  bdSAckChunk *v5; 
  signed __int32 v6; 
  bdSAckChunk *v7; 
  bdReliableSendWindow *m_reliableSendWindow; 
  float v9; 
  float m_smoothedRTT; 
  float *p_m_RTTVariation; 
  float v12; 
  __int128 v13; 
  __int128 v14; 
  float rtt; 
  bdChunk *v19; 
  bdReference<bdSAckChunk> chunka; 
  bdSAckChunk *v21; 

  v3 = 0;
  m_ptr = chunk->m_ptr;
  v5 = (bdSAckChunk *)m_ptr;
  v19 = chunk->m_ptr;
  if ( m_ptr )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
    v5 = (bdSAckChunk *)v19;
  }
  if ( m_ptr )
  {
    v6 = _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF);
    v5 = (bdSAckChunk *)v19;
    if ( v6 == 1 )
      ((void (__fastcall *)(bdChunk *, __int64))v19->~bdReferencable)(v19, 1i64);
  }
  v21 = v5;
  v7 = v5;
  if ( v5 )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)&v5->m_refCount, 1u);
    v5 = (bdSAckChunk *)v19;
  }
  m_reliableSendWindow = this->m_reliableSendWindow;
  if ( m_reliableSendWindow )
  {
    chunka.m_ptr = v5;
    if ( v7 )
    {
      _InterlockedExchangeAdd((volatile signed __int32 *)&v7->m_refCount, 1u);
      v5 = (bdSAckChunk *)v19;
    }
    v3 = bdReliableSendWindow::handleAck(m_reliableSendWindow, (bdReference<bdSAckChunk>)&chunka, &rtt);
    if ( v3 )
    {
      v9 = rtt;
      if ( rtt > 0.0 )
      {
        m_smoothedRTT = this->m_smoothedRTT;
        p_m_RTTVariation = &this->m_RTTVariation;
        if ( m_smoothedRTT == 0.0 && *p_m_RTTVariation == 0.0 )
        {
          *p_m_RTTVariation = rtt * 0.5;
        }
        else
        {
          if ( m_smoothedRTT <= rtt )
            v12 = rtt - m_smoothedRTT;
          else
            v12 = m_smoothedRTT - rtt;
          *p_m_RTTVariation = (float)(*p_m_RTTVariation * 0.75) + (float)(v12 * 0.25);
          v9 = (float)(m_smoothedRTT * 0.875) + (float)(v9 * 0.125);
        }
        this->m_smoothedRTT = v9;
        bdConnectionStatistics::setLastRTT(&this->m_stats, v9);
        v13 = *(unsigned int *)p_m_RTTVariation;
        if ( *(float *)&v13 == 0.0 )
        {
          *p_m_RTTVariation = 100.0;
          v13 = LODWORD(FLOAT_100_0);
        }
        v14 = v13;
        *(float *)&v14 = (float)(*(float *)&v13 * 2.0) + this->m_smoothedRTT;
        _XMM3 = v14;
        *(float *)&_XMM1 = FLOAT_0_02;
        if ( *(float *)&v14 >= 0.02 )
          __asm { vminss  xmm1, xmm3, xmm2; secs }
        bdReliableSendWindow::setTimeoutPeriod(this->m_reliableSendWindow, *(const float *)&_XMM1);
      }
    }
    else
    {
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdConnection/connections", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdunicastconnection.cpp", "bdUnicastConnection::handleSAck", 0x3A0u, "Unable to handle ack. disconnecting connection.");
      this->disconnect(this);
    }
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdConnection/connections", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdunicastconnection.cpp", "bdUnicastConnection::handleSAck", 0x3A6u, "invalid stream id.");
  }
  if ( v5 && _InterlockedExchangeAdd((volatile signed __int32 *)&v5->m_refCount, 0xFFFFFFFF) == 1 )
    ((void (__fastcall *)(bdChunk *, __int64))v19->~bdReferencable)(v19, 1i64);
  return v3;
}

/*
==============
bdUnicastConnection::handleShutdown
==============
*/
char bdUnicastConnection::handleShutdown(bdUnicastConnection *this, bdReference<bdChunk> *__formal)
{
  bdUnicastConnection::bdUnicastConnectionStatus m_state; 
  bdUnicastConnection::bdUnicastConnectionStatus v5; 

  m_state = this->m_state;
  if ( m_state == BD_UC_ESTABLISHED )
  {
    bdLogMessage(BD_LOG_INFO, "info/", "bdConnection/connections", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdunicastconnection.cpp", "bdUnicastConnection::handleShutdown", 0x4E2u, "uc::handling shutdown (a)");
    this->m_state = BD_UC_SHUTDOWN_RECEIVED;
  }
  else
  {
    if ( m_state != BD_UC_SHUTDOWN_SENT )
    {
      v5 = this->m_state;
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdConnection/connections", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdunicastconnection.cpp", "bdUnicastConnection::handleShutdown", 0x4ECu, "uc::handling shutdown (c) - unexpected (%u)!", v5);
      return 1;
    }
    bdLogMessage(BD_LOG_INFO, "info/", "bdConnection/connections", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdunicastconnection.cpp", "bdUnicastConnection::handleShutdown", 0x4E7u, "uc::handling shutdown (b)");
    this->m_state = BD_UC_SHUTDOWN_RECEIVED;
    if ( !bdUnicastConnection::sendShutdownAck(this) )
      return 1;
  }
  bdLogMessage(BD_LOG_INFO, "info/", "bdConnection/connections", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdunicastconnection.cpp", "bdUnicastConnection::handleShutdown", 0x4F2u, "uc::handling shutdown.");
  bdStopwatch::start(&this->m_shutdownGuard);
  return 1;
}

/*
==============
bdUnicastConnection::handleShutdownAck
==============
*/
char bdUnicastConnection::handleShutdownAck(bdUnicastConnection *this, bdReference<bdChunk> *__formal)
{
  bdUnicastConnection::bdUnicastConnectionStatus m_state; 
  bdUnicastConnection::bdUnicastConnectionStatus v5; 

  m_state = this->m_state;
  if ( m_state == BD_UC_SHUTDOWN_SENT )
  {
    bdLogMessage(BD_LOG_INFO, "info/", "bdConnection/connections", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdunicastconnection.cpp", "bdUnicastConnection::handleShutdownAck", 0x500u, "uc::handling shutdown ack (a)");
  }
  else
  {
    if ( m_state != BD_UC_SHUTDOWN_ACK_SENT )
    {
      v5 = this->m_state;
      bdLogMessage(BD_LOG_INFO, "info/", "bdConnection/connections", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdunicastconnection.cpp", "bdUnicastConnection::handleShutdownAck", 0x50Eu, "uc::handling shutdown ack (c) - unexpected (%u).", v5);
      return 0;
    }
    bdLogMessage(BD_LOG_INFO, "info/", "bdConnection/connections", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdunicastconnection.cpp", "bdUnicastConnection::handleShutdownAck", 0x507u, "uc::handling shutdown ack (b)");
  }
  bdUnicastConnection::sendShutdownComplete(this);
  this->close(this);
  bdStopwatch::reset(&this->m_shutdownTimer);
  return 1;
}

/*
==============
bdUnicastConnection::handleShutdownComplete
==============
*/
char bdUnicastConnection::handleShutdownComplete(bdUnicastConnection *this, bdReference<bdChunk> *__formal)
{
  if ( this->m_state == BD_UC_SHUTDOWN_ACK_SENT )
  {
    bdLogMessage(BD_LOG_INFO, "info/", "bdConnection/connections", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdunicastconnection.cpp", "bdUnicastConnection::handleShutdownComplete", 0x51Cu, "uc::handling shutdown complete (a)");
    bdStopwatch::reset(&this->m_shutdownTimer);
    this->close(this);
    return 1;
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdConnection/connections", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdunicastconnection.cpp", "bdUnicastConnection::handleShutdownComplete", 0x522u, "uc::handling shutdown complete (b) - unexpected!");
    return 0;
  }
}

/*
==============
bdUnicastConnection::receive
==============
*/
bool bdUnicastConnection::receive(bdUnicastConnection *this, const unsigned __int8 *buffer, const unsigned int bufferSize)
{
  double ElapsedTimeInSeconds; 
  char v8; 
  bool v9; 
  bool v10; 
  bdChunkTypes v11; 
  unsigned int v12; 
  unsigned int v13; 
  bool v14; 
  bdConnectionListener *v15; 
  void (__fastcall *onConnect)(bdConnectionListener *, bdReference<bdConnection>); 
  unsigned int v17; 
  bool inited; 
  unsigned int VerificationTag; 
  bdUnicastConnection::bdUnicastConnectionStatus m_state; 
  bdUnicastConnection::bdUnicastConnectionStatus v21; 
  __int64 v22; 
  bdReference<bdInitChunk> __formal; 
  __int64 v24; 
  bdPacket v25; 
  bdReference<bdChunk> chunk; 
  bdUnicastConnection *v27; 

  v24 = -2i64;
  ElapsedTimeInSeconds = bdStopwatch::getElapsedTimeInSeconds(&this->m_shutdownGuard);
  if ( *(float *)&ElapsedTimeInSeconds > 5.0 )
  {
    this->close(this);
    return 0;
  }
  if ( !bufferSize )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdConnection/connections", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdunicastconnection.cpp", "bdUnicastConnection::receive", 0x17Du, "Received zero size packet passed.");
    return 0;
  }
  v8 = 0;
  v9 = 0;
  bdPacket::bdPacket(&v25);
  v10 = bdPacket::deserialize(&v25, buffer, bufferSize);
  bdConnectionStatistics::addBytesRecv(&this->m_stats, bufferSize + 28);
  if ( v10 )
  {
    bdConnectionStatistics::addPacketsRecv(&this->m_stats, 1u);
    bdConnectionStatistics::addPacketSizeRecv(&this->m_stats, bufferSize);
    chunk.m_ptr = NULL;
    bdPacket::getNextChunk(&v25, &chunk);
    if ( !chunk.m_ptr || !bdChunk::isControl(chunk.m_ptr) )
      goto LABEL_30;
    v11 = chunk.m_ptr->getType(chunk.m_ptr);
    switch ( v11 )
    {
      case BD_CT_INIT:
        inited = bdUnicastConnection::handleInit(this, &chunk);
        break;
      case BD_CT_INIT_ACK:
        VerificationTag = bdPacket::getVerificationTag(&v25);
        inited = bdUnicastConnection::handleInitAck(this, &chunk, VerificationTag);
        break;
      case BD_CT_COOKIE_ECHO:
        v17 = bdPacket::getVerificationTag(&v25);
        inited = bdUnicastConnection::handleCookieEcho(this, &chunk, v17);
        break;
      case BD_CT_COOKIE_ACK:
        v12 = bdPacket::getVerificationTag(&v25);
        if ( v12 == this->m_localTag )
        {
          if ( this->m_state == BD_UC_COOKIE_ECHOED )
          {
            bdLogMessage(BD_LOG_INFO, "info/", "bdConnection/connections", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdunicastconnection.cpp", "bdUnicastConnection::handleCookieAck", 0x4B7u, "uc::handling cookie ack: m_localTag/m_peerTag: %X/%X", this->m_localTag, this->m_peerTag);
            this->m_state = BD_UC_ESTABLISHED;
            v13 = 0;
            if ( this->m_listeners.m_size )
            {
              v14 = this->m_listeners.m_size != 0;
              do
              {
                bdHandleAssert(v14, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdfastarray.inl", "bdFastArray<class bdConnectionListener *>::operator []", 0x50u, "bdFastArray<T>::operator[], rangecheck failed");
                v15 = this->m_listeners.m_data[v13];
                onConnect = v15->onConnect;
                v27 = this;
                _InterlockedExchangeAdd((volatile signed __int32 *)&this->m_refCount, 1u);
                ((void (__fastcall *)(bdConnectionListener *, bdUnicastConnection **))onConnect)(v15, &v27);
                v14 = ++v13 < this->m_listeners.m_size;
              }
              while ( v13 < this->m_listeners.m_size );
            }
            bdStopwatch::reset(&this->m_cookieTimer);
            v9 = 1;
          }
          else
          {
            bdLogMessage(BD_LOG_WARNING, "warn/", "bdConnection/connections", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdunicastconnection.cpp", "bdUnicastConnection::handleCookieAck", 0x4C2u, "Cookie ack received in invalid state: %u", this->m_state);
          }
        }
        else
        {
          bdLogMessage(BD_LOG_WARNING, "warn/", "bdConnection/connections", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdunicastconnection.cpp", "bdUnicastConnection::handleCookieAck", 0x4C7u, "Invalid verification tag on cookie ack. (%X)", v12);
        }
        goto LABEL_24;
      default:
LABEL_30:
        if ( this->m_localTag == bdPacket::getVerificationTag(&v25) )
        {
          do
          {
            if ( chunk.m_ptr )
            {
              switch ( chunk.m_ptr->getType(chunk.m_ptr) )
              {
                case BD_CT_DATA:
                  v9 = bdUnicastConnection::handleData(this, &chunk);
                  v8 |= v9;
                  break;
                case BD_CT_SACK:
                  v9 = bdUnicastConnection::handleSAck(this, &chunk);
                  break;
                case BD_CT_HEARTBEAT:
                  bdStopwatch::start(&this->m_receiveTimer);
                  __formal.m_ptr = (bdInitChunk *)chunk.m_ptr;
                  if ( chunk.m_ptr )
                    _InterlockedExchangeAdd((volatile signed __int32 *)&chunk.m_ptr->m_refCount, 1u);
                  v9 = bdUnicastConnection::sendHeartbeatAck(this, (bdReference<bdInitChunk>)&__formal);
                  break;
                case BD_CT_HEARTBEAT_ACK:
                  bdStopwatch::start(&this->m_receiveTimer);
                  goto LABEL_55;
                case BD_CT_SHUTDOWN:
                  m_state = this->m_state;
                  if ( m_state == BD_UC_ESTABLISHED )
                  {
                    bdLogMessage(BD_LOG_INFO, "info/", "bdConnection/connections", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdunicastconnection.cpp", "bdUnicastConnection::handleShutdown", 0x4E2u, "uc::handling shutdown (a)");
                    this->m_state = BD_UC_SHUTDOWN_RECEIVED;
LABEL_45:
                    bdLogMessage(BD_LOG_INFO, "info/", "bdConnection/connections", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdunicastconnection.cpp", "bdUnicastConnection::handleShutdown", 0x4F2u, "uc::handling shutdown.");
                    bdStopwatch::start(&this->m_shutdownGuard);
                    goto LABEL_55;
                  }
                  if ( m_state != BD_UC_SHUTDOWN_SENT )
                  {
                    LODWORD(v22) = this->m_state;
                    bdLogMessage(BD_LOG_WARNING, "warn/", "bdConnection/connections", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdunicastconnection.cpp", "bdUnicastConnection::handleShutdown", 0x4ECu, "uc::handling shutdown (c) - unexpected (%u)!", v22);
                    goto LABEL_55;
                  }
                  bdLogMessage(BD_LOG_INFO, "info/", "bdConnection/connections", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdunicastconnection.cpp", "bdUnicastConnection::handleShutdown", 0x4E7u, "uc::handling shutdown (b)");
                  this->m_state = BD_UC_SHUTDOWN_RECEIVED;
                  if ( bdUnicastConnection::sendShutdownAck(this) )
                    goto LABEL_45;
LABEL_55:
                  v9 = 1;
                  break;
                case BD_CT_SHUTDOWN_ACK:
                  v9 = 0;
                  v21 = this->m_state;
                  if ( v21 == BD_UC_SHUTDOWN_SENT )
                  {
                    bdLogMessage(BD_LOG_INFO, "info/", "bdConnection/connections", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdunicastconnection.cpp", "bdUnicastConnection::handleShutdownAck", 0x500u, "uc::handling shutdown ack (a)");
                  }
                  else
                  {
                    if ( v21 != BD_UC_SHUTDOWN_ACK_SENT )
                    {
                      LODWORD(v22) = this->m_state;
                      bdLogMessage(BD_LOG_INFO, "info/", "bdConnection/connections", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdunicastconnection.cpp", "bdUnicastConnection::handleShutdownAck", 0x50Eu, "uc::handling shutdown ack (c) - unexpected (%u).", v22);
                      break;
                    }
                    bdLogMessage(BD_LOG_INFO, "info/", "bdConnection/connections", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdunicastconnection.cpp", "bdUnicastConnection::handleShutdownAck", 0x507u, "uc::handling shutdown ack (b)");
                  }
                  bdUnicastConnection::sendShutdownComplete(this);
                  this->close(this);
                  bdStopwatch::reset(&this->m_shutdownTimer);
                  goto LABEL_55;
                case BD_CT_SHUTDOWN_COMPLETE:
                  v9 = 0;
                  if ( this->m_state != BD_UC_SHUTDOWN_ACK_SENT )
                  {
                    bdLogMessage(BD_LOG_WARNING, "warn/", "bdConnection/connections", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdunicastconnection.cpp", "bdUnicastConnection::handleShutdownComplete", 0x522u, "uc::handling shutdown complete (b) - unexpected!");
                    break;
                  }
                  bdLogMessage(BD_LOG_INFO, "info/", "bdConnection/connections", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdunicastconnection.cpp", "bdUnicastConnection::handleShutdownComplete", 0x51Cu, "uc::handling shutdown complete (a)");
                  bdStopwatch::reset(&this->m_shutdownTimer);
                  this->close(this);
                  goto LABEL_55;
                default:
                  break;
              }
            }
          }
          while ( bdPacket::getNextChunk(&v25, &chunk) );
        }
        if ( v9 )
          bdStopwatch::start(&this->m_receiveTimer);
        if ( chunk.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&chunk.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && chunk.m_ptr )
          ((void (__fastcall *)(bdChunk *, __int64))chunk.m_ptr->~bdReferencable)(chunk.m_ptr, 1i64);
        goto LABEL_64;
    }
    v9 = inited;
LABEL_24:
    if ( v9 )
    {
      if ( chunk.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&chunk.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && chunk.m_ptr )
        ((void (__fastcall *)(bdChunk *, __int64))chunk.m_ptr->~bdReferencable)(chunk.m_ptr, 1i64);
      chunk.m_ptr = NULL;
    }
    goto LABEL_30;
  }
  bdLogMessage(BD_LOG_WARNING, "warn/", "bdConnection/connections", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdunicastconnection.cpp", "bdUnicastConnection::receive", 0x1ECu, "bdUnicastConnection::receive(): Invalid packet received.");
LABEL_64:
  if ( this->m_state == BD_UC_SHUTDOWN_SENT && v8 && !bdUnicastConnection::sendShutdown(this) )
    this->close(this);
  bdPacket::~bdPacket(&v25);
  return v9;
}

/*
==============
bdUnicastConnection::reset
==============
*/
void bdUnicastConnection::reset(bdUnicastConnection *this)
{
  bdReliableReceiveWindow *m_reliableRecvWindow; 
  bdReliableSendWindow *m_reliableSendWindow; 
  bool v4; 
  bdLinkedList<bdUnicastConnection::bdControlChunkStore>::Node *m_head; 
  bdLinkedList<bdUnicastConnection::bdControlChunkStore>::Node *m_prev; 
  bdTrulyRandomImpl *Instance; 
  __int64 v8; 

  v8 = -2i64;
  m_reliableRecvWindow = this->m_reliableRecvWindow;
  if ( m_reliableRecvWindow )
  {
    bdReliableReceiveWindow::~bdReliableReceiveWindow(this->m_reliableRecvWindow);
    bdMemory::deallocate(m_reliableRecvWindow);
  }
  m_reliableSendWindow = this->m_reliableSendWindow;
  if ( m_reliableSendWindow )
  {
    bdReliableSendWindow::~bdReliableSendWindow(this->m_reliableSendWindow);
    bdMemory::deallocate(m_reliableSendWindow);
  }
  this->m_reliableRecvWindow = NULL;
  this->m_reliableSendWindow = NULL;
  if ( this->m_outQueue.m_list.m_size )
  {
    v4 = this->m_outQueue.m_list.m_size == 0;
    do
    {
      bdHandleAssert(!v4, "getSize() > 0", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdqueue.inl", "bdQueue<class bdUnicastConnection::bdControlChunkStore>::dequeue", 0x12u, "bdQueue::dequeue, queue empty, can't dequeue.", v8);
      m_head = this->m_outQueue.m_list.m_head;
      if ( m_head )
      {
        this->m_outQueue.m_list.m_head = m_head->m_next;
        m_prev = m_head->m_prev;
        if ( m_head == this->m_outQueue.m_list.m_tail )
          this->m_outQueue.m_list.m_tail = m_prev;
        else
          m_head->m_next->m_prev = m_prev;
        if ( m_head->m_data.m_chunk.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_head->m_data.m_chunk.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
        {
          if ( m_head->m_data.m_chunk.m_ptr )
            ((void (__fastcall *)(bdChunk *, __int64))m_head->m_data.m_chunk.m_ptr->~bdReferencable)(m_head->m_data.m_chunk.m_ptr, 1i64);
          m_head->m_data.m_chunk.m_ptr = NULL;
        }
        bdMemory::deallocate(m_head);
        --this->m_outQueue.m_list.m_size;
      }
      v4 = this->m_outQueue.m_list.m_size == 0;
    }
    while ( this->m_outQueue.m_list.m_size );
  }
  bdUnreliableReceiveWindow::reset(&this->m_unreliableReceiveWindow);
  bdUnreliableSendWindow::reset(&this->m_unreliableSendWindow);
  bdStopwatch::start(&this->m_sendTimer);
  bdStopwatch::start(&this->m_receiveTimer);
  this->m_initResends = 0;
  this->m_cookieResends = 0;
  this->m_shutdownResends = 0;
  Instance = bdSingleton<bdTrulyRandomImpl>::getInstance();
  this->m_localTag = bdTrulyRandomImpl::getRandomUInt(Instance);
  this->m_peerTag = 0;
  *(_QWORD *)&this->m_smoothedRTT = 0i64;
}

/*
==============
bdUnicastConnection::send
==============
*/
_BOOL8 bdUnicastConnection::send(bdUnicastConnection *this, const bdReference<bdMessage> message, const bool reliable)
{
  bool v6; 
  unsigned int m_size; 
  bdReference<bdByteBuffer> *UnencryptedPayload; 
  bdDataChunk *v9; 
  bdMessage *v10; 
  bdDataChunk *v11; 
  bdDataChunk *v12; 
  bdReliableSendWindow *m_reliableSendWindow; 
  bdReliableSendWindow *v14; 
  bdReliableSendWindow *v15; 
  bdReference<bdMessage> data; 
  bdReference<bdDataChunk> chunk; 
  bdReference<bdDataChunk> v19; 
  __int64 v20; 
  void *v21; 
  bdDataChunk *v22; 
  bdReference<bdBitBuffer> result; 
  bdMessage *m_ptr; 
  bdReference<bdByteBuffer> v25; 

  m_ptr = message.m_ptr;
  v20 = -2i64;
  v6 = 0;
  if ( this->m_state == BD_UC_ESTABLISHED )
  {
    m_size = 0;
    if ( bdMessage::hasPayload((bdMessage *)message.m_ptr->__vftable) )
    {
      m_size = bdMessage::getPayload((bdMessage *)message.m_ptr->__vftable, &result)->m_ptr->m_data.m_size;
      if ( result.m_ptr )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result.m_ptr )
          ((void (__fastcall *)(bdBitBuffer *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
      }
    }
    if ( bdMessage::hasUnencryptedPayload((bdMessage *)message.m_ptr->__vftable) )
    {
      UnencryptedPayload = bdMessage::getUnencryptedPayload((bdMessage *)message.m_ptr->__vftable, &v25);
      m_size += bdByteBuffer::getDataSize(UnencryptedPayload->m_ptr);
      if ( v25.m_ptr )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v25.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v25.m_ptr )
          ((void (__fastcall *)(bdByteBuffer *, __int64))v25.m_ptr->~bdReferencable)(v25.m_ptr, 1i64);
      }
    }
    if ( m_size > 0x4E2 )
    {
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdConnection/connections", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdunicastconnection.cpp", "bdUnicastConnection::send", 0xFFu, "Message size > BD_MAX_MESSAGE_SIZE (%u > %u).", m_size, 1250);
    }
    else
    {
      v9 = (bdDataChunk *)bdMemory::allocate(0x28ui64);
      v21 = v9;
      if ( v9 )
      {
        v10 = (bdMessage *)message.m_ptr->__vftable;
        data.m_ptr = v10;
        if ( v10 )
          _InterlockedExchangeAdd((volatile signed __int32 *)&v10->m_refCount, 1u);
        bdDataChunk::bdDataChunk(v9, (bdReference<bdMessage>)&data, (const bdDataChunk::bdDataFlags)!reliable);
        v12 = v11;
      }
      else
      {
        v12 = NULL;
      }
      v22 = v12;
      if ( v12 )
        _InterlockedExchangeAdd((volatile signed __int32 *)&v12->m_refCount, 1u);
      if ( reliable )
      {
        m_reliableSendWindow = this->m_reliableSendWindow;
        if ( !m_reliableSendWindow )
        {
          v14 = (bdReliableSendWindow *)bdMemory::allocate(0xC40ui64);
          v21 = v14;
          if ( v14 )
          {
            bdReliableSendWindow::bdReliableSendWindow(v14);
            m_reliableSendWindow = v15;
          }
          else
          {
            m_reliableSendWindow = NULL;
          }
          this->m_reliableSendWindow = m_reliableSendWindow;
        }
        chunk.m_ptr = v12;
        if ( v12 )
          _InterlockedExchangeAdd((volatile signed __int32 *)&v12->m_refCount, 1u);
        v6 = bdReliableSendWindow::add(m_reliableSendWindow, (bdReference<bdDataChunk>)&chunk);
        if ( !v6 )
          bdLogMessage(BD_LOG_WARNING, "warn/", "bdConnection/connections", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdunicastconnection.cpp", "bdUnicastConnection::send", 0xF4u, "Failed to add message to reliable send window.");
      }
      else
      {
        v19.m_ptr = v12;
        if ( v12 )
          _InterlockedExchangeAdd((volatile signed __int32 *)&v12->m_refCount, 1u);
        bdUnreliableSendWindow::add(&this->m_unreliableSendWindow, (bdReference<bdDataChunk>)&v19);
        v6 = 1;
      }
      if ( v12 && _InterlockedExchangeAdd((volatile signed __int32 *)&v12->m_refCount, 0xFFFFFFFF) == 1 )
        ((void (__fastcall *)(bdDataChunk *, __int64))v12->~bdReferencable)(v12, 1i64);
    }
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdConnection/connections", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdunicastconnection.cpp", "bdUnicastConnection::send", 0x104u, "connection not established.");
  }
  if ( message.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&message.m_ptr->__vftable[1], 0xFFFFFFFF) == 1 )
  {
    if ( message.m_ptr->__vftable )
      (*(void (__fastcall **)(bdMessage_vtbl *, __int64))message.m_ptr->~bdReferencable)(message.m_ptr->__vftable, 1i64);
    message.m_ptr->__vftable = NULL;
  }
  return v6;
}

/*
==============
bdUnicastConnection::sendCookieAck
==============
*/
char bdUnicastConnection::sendCookieAck(bdUnicastConnection *this)
{
  bdCookieAckChunk *v2; 
  bdChunk *v3; 
  bdChunk *v4; 
  bdUnicastConnection::bdControlChunkStore item; 

  v2 = (bdCookieAckChunk *)bdMemory::allocate(0x20ui64);
  if ( v2 )
  {
    bdCookieAckChunk::bdCookieAckChunk(v2);
    v4 = v3;
  }
  else
  {
    v4 = NULL;
  }
  if ( v4 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v4->m_refCount, 1u);
  if ( v4 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v4->m_refCount, 1u);
  item.m_chunk.m_ptr = v4;
  if ( v4 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v4->m_refCount, 1u);
  item.m_lone = 0;
  if ( v4 && _InterlockedExchangeAdd((volatile signed __int32 *)&v4->m_refCount, 0xFFFFFFFF) == 1 )
    ((void (__fastcall *)(bdChunk *, __int64))v4->~bdReferencable)(v4, 1i64);
  bdQueue<bdUnicastConnection::bdControlChunkStore>::enqueue(&this->m_outQueue, &item);
  if ( v4 && _InterlockedExchangeAdd((volatile signed __int32 *)&v4->m_refCount, 0xFFFFFFFF) == 1 )
    ((void (__fastcall *)(bdChunk *, __int64))v4->~bdReferencable)(v4, 1i64);
  bdLogMessage(BD_LOG_INFO, "info/", "bdConnection/connections", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdunicastconnection.cpp", "bdUnicastConnection::sendCookieAck", 0x5B6u, "uc::sending cookie ack: m_localTag/m_peerTag: %X/%X", this->m_localTag, this->m_peerTag);
  if ( v4 && _InterlockedExchangeAdd((volatile signed __int32 *)&v4->m_refCount, 0xFFFFFFFF) == 1 )
    ((void (__fastcall *)(bdChunk *, __int64))v4->~bdReferencable)(v4, 1i64);
  return 1;
}

/*
==============
bdUnicastConnection::sendCookieEcho
==============
*/
__int64 bdUnicastConnection::sendCookieEcho(bdUnicastConnection *this, bdReference<bdInitAckChunk> chunk)
{
  unsigned __int8 v4; 
  bdReference<bdInitAckChunk> *p_m_initAckChunk; 
  bdInitAckChunk_vtbl *v6; 
  unsigned __int8 m_cookieResends; 
  bdCookieEchoChunk *v8; 
  bdChunk *v9; 
  bdChunk *v10; 
  bdUnicastConnection::bdControlChunkStore item; 
  bdReference<bdByteBuffer> cookie; 
  bdInitAckChunk *m_ptr; 
  bdReference<bdByteBuffer> cookieBuffer; 
  bdCookieEchoChunk *v16; 

  m_ptr = chunk.m_ptr;
  v4 = 1;
  p_m_initAckChunk = &this->m_initAckChunk;
  if ( (bdReference<bdInitAckChunk> *)chunk.m_ptr != &this->m_initAckChunk )
  {
    if ( p_m_initAckChunk->m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&p_m_initAckChunk->m_ptr->m_refCount, 0xFFFFFFFF) == 1 && p_m_initAckChunk->m_ptr )
      ((void (__fastcall *)(bdInitAckChunk *, __int64))p_m_initAckChunk->m_ptr->~bdReferencable)(p_m_initAckChunk->m_ptr, 1i64);
    v6 = chunk.m_ptr->__vftable;
    p_m_initAckChunk->m_ptr = (bdInitAckChunk *)chunk.m_ptr->__vftable;
    if ( v6 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v6->getType, 1u);
  }
  m_cookieResends = this->m_cookieResends;
  this->m_cookieResends = m_cookieResends + 1;
  if ( m_cookieResends >= 0xC8u )
  {
    v4 = 0;
  }
  else
  {
    cookie.m_ptr = NULL;
    if ( bdInitAckChunk::getCookie((bdInitAckChunk *)chunk.m_ptr->__vftable, &cookie) )
    {
      bdStopwatch::start(&this->m_cookieTimer);
      v8 = (bdCookieEchoChunk *)bdMemory::allocate(0x30ui64);
      v16 = v8;
      if ( v8 )
      {
        cookieBuffer.m_ptr = cookie.m_ptr;
        if ( cookie.m_ptr )
          _InterlockedExchangeAdd((volatile signed __int32 *)&cookie.m_ptr->m_refCount, 1u);
        bdCookieEchoChunk::bdCookieEchoChunk(v8, (bdReference<bdByteBuffer>)&cookieBuffer);
        v10 = v9;
      }
      else
      {
        v10 = NULL;
      }
      if ( v10 )
        _InterlockedExchangeAdd((volatile signed __int32 *)&v10->m_refCount, 1u);
      if ( v10 )
        _InterlockedExchangeAdd((volatile signed __int32 *)&v10->m_refCount, 1u);
      item.m_chunk.m_ptr = v10;
      if ( v10 )
        _InterlockedExchangeAdd((volatile signed __int32 *)&v10->m_refCount, 1u);
      item.m_lone = 0;
      if ( v10 && _InterlockedExchangeAdd((volatile signed __int32 *)&v10->m_refCount, 0xFFFFFFFF) == 1 )
        ((void (__fastcall *)(bdChunk *, __int64))v10->~bdReferencable)(v10, 1i64);
      bdQueue<bdUnicastConnection::bdControlChunkStore>::enqueue(&this->m_outQueue, &item);
      if ( v10 && _InterlockedExchangeAdd((volatile signed __int32 *)&v10->m_refCount, 0xFFFFFFFF) == 1 )
        ((void (__fastcall *)(bdChunk *, __int64))v10->~bdReferencable)(v10, 1i64);
      bdLogMessage(BD_LOG_INFO, "info/", "bdConnection/connections", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdunicastconnection.cpp", "bdUnicastConnection::sendCookieEcho", 0x5A3u, "uc::sending cookie echo: m_localTag/m_peerTag: %X/%X", this->m_localTag, this->m_peerTag);
      if ( v10 && _InterlockedExchangeAdd((volatile signed __int32 *)&v10->m_refCount, 0xFFFFFFFF) == 1 )
        ((void (__fastcall *)(bdChunk *, __int64))v10->~bdReferencable)(v10, 1i64);
    }
    if ( cookie.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&cookie.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && cookie.m_ptr )
      ((void (__fastcall *)(bdByteBuffer *, __int64))cookie.m_ptr->~bdReferencable)(cookie.m_ptr, 1i64);
  }
  if ( chunk.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&chunk.m_ptr->getType, 0xFFFFFFFF) == 1 )
  {
    if ( chunk.m_ptr->__vftable )
      (*(void (__fastcall **)(bdInitAckChunk_vtbl *, __int64))chunk.m_ptr->~bdReferencable)(chunk.m_ptr->__vftable, 1i64);
    chunk.m_ptr->__vftable = NULL;
  }
  return v4;
}

/*
==============
bdUnicastConnection::sendHeartbeat
==============
*/
char bdUnicastConnection::sendHeartbeat(bdUnicastConnection *this, bdReference<bdInitChunk> __formal)
{
  bdHeartbeatChunk *v4; 
  bdChunk *v5; 
  bdChunk *v6; 
  bdUnicastConnection::bdControlChunkStore item; 

  v4 = (bdHeartbeatChunk *)bdMemory::allocate(0x20ui64);
  if ( v4 )
  {
    bdHeartbeatChunk::bdHeartbeatChunk(v4);
    v6 = v5;
  }
  else
  {
    v6 = NULL;
  }
  if ( v6 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v6->m_refCount, 1u);
  if ( v6 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v6->m_refCount, 1u);
  item.m_chunk.m_ptr = v6;
  if ( v6 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v6->m_refCount, 1u);
  item.m_lone = 0;
  if ( v6 && _InterlockedExchangeAdd((volatile signed __int32 *)&v6->m_refCount, 0xFFFFFFFF) == 1 )
    ((void (__fastcall *)(bdChunk *, __int64))v6->~bdReferencable)(v6, 1i64);
  bdQueue<bdUnicastConnection::bdControlChunkStore>::enqueue(&this->m_outQueue, &item);
  if ( v6 && _InterlockedExchangeAdd((volatile signed __int32 *)&v6->m_refCount, 0xFFFFFFFF) == 1 )
    ((void (__fastcall *)(bdChunk *, __int64))v6->~bdReferencable)(v6, 1i64);
  if ( v6 && _InterlockedExchangeAdd((volatile signed __int32 *)&v6->m_refCount, 0xFFFFFFFF) == 1 )
    ((void (__fastcall *)(bdChunk *, __int64))v6->~bdReferencable)(v6, 1i64);
  if ( __formal.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&__formal.m_ptr->getType, 0xFFFFFFFF) == 1 )
  {
    if ( __formal.m_ptr->__vftable )
      (*(void (__fastcall **)(bdInitChunk_vtbl *, __int64))__formal.m_ptr->~bdReferencable)(__formal.m_ptr->__vftable, 1i64);
    __formal.m_ptr->__vftable = NULL;
  }
  return 1;
}

/*
==============
bdUnicastConnection::sendHeartbeatAck
==============
*/
char bdUnicastConnection::sendHeartbeatAck(bdUnicastConnection *this, bdReference<bdInitChunk> __formal)
{
  bdReliableSendWindow *m_reliableSendWindow; 
  bdHeartbeatAckChunk *v5; 
  bdChunk *v6; 
  bdChunk *v7; 
  bdUnicastConnection::bdControlChunkStore item; 

  if ( !this->m_outQueue.m_list.m_size )
  {
    m_reliableSendWindow = this->m_reliableSendWindow;
    if ( !m_reliableSendWindow || bdReliableSendWindow::isEmpty(m_reliableSendWindow) )
    {
      v5 = (bdHeartbeatAckChunk *)bdMemory::allocate(0x20ui64);
      if ( v5 )
      {
        bdHeartbeatAckChunk::bdHeartbeatAckChunk(v5);
        v7 = v6;
      }
      else
      {
        v7 = NULL;
      }
      if ( v7 )
        _InterlockedExchangeAdd((volatile signed __int32 *)&v7->m_refCount, 1u);
      if ( v7 )
        _InterlockedExchangeAdd((volatile signed __int32 *)&v7->m_refCount, 1u);
      item.m_chunk.m_ptr = v7;
      if ( v7 )
        _InterlockedExchangeAdd((volatile signed __int32 *)&v7->m_refCount, 1u);
      item.m_lone = 0;
      if ( v7 && _InterlockedExchangeAdd((volatile signed __int32 *)&v7->m_refCount, 0xFFFFFFFF) == 1 )
        ((void (__fastcall *)(bdChunk *, __int64))v7->~bdReferencable)(v7, 1i64);
      bdQueue<bdUnicastConnection::bdControlChunkStore>::enqueue(&this->m_outQueue, &item);
      if ( v7 && _InterlockedExchangeAdd((volatile signed __int32 *)&v7->m_refCount, 0xFFFFFFFF) == 1 )
        ((void (__fastcall *)(bdChunk *, __int64))v7->~bdReferencable)(v7, 1i64);
      if ( v7 && _InterlockedExchangeAdd((volatile signed __int32 *)&v7->m_refCount, 0xFFFFFFFF) == 1 )
        ((void (__fastcall *)(bdChunk *, __int64))v7->~bdReferencable)(v7, 1i64);
    }
  }
  if ( __formal.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&__formal.m_ptr->getType, 0xFFFFFFFF) == 1 )
  {
    if ( __formal.m_ptr->__vftable )
      (*(void (__fastcall **)(bdInitChunk_vtbl *, __int64))__formal.m_ptr->~bdReferencable)(__formal.m_ptr->__vftable, 1i64);
    __formal.m_ptr->__vftable = NULL;
  }
  return 1;
}

/*
==============
bdUnicastConnection::sendInit
==============
*/
bool bdUnicastConnection::sendInit(bdUnicastConnection *this)
{
  bool v2; 
  unsigned __int8 m_initResends; 
  bdInitChunk *v4; 
  bdChunk *v5; 
  bdChunk *v6; 
  signed __int32 v7; 
  bdUnicastConnection::bdControlChunkStore item; 

  v2 = this->m_state <= (unsigned int)BD_UC_COOKIE_WAIT;
  bdHandleAssert(v2, "result", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdunicastconnection.cpp", "bdUnicastConnection::sendInit", 0x52Eu, "invalid state to send init from.");
  m_initResends = this->m_initResends;
  this->m_initResends = m_initResends + 1;
  if ( m_initResends >= 0xC8u )
    return 0;
  bdStopwatch::start(&this->m_initTimer);
  v4 = (bdInitChunk *)bdMemory::allocate(0x38ui64);
  if ( v4 )
  {
    bdInitChunk::bdInitChunk(v4, this->m_localTag, 15000i64);
    v6 = v5;
  }
  else
  {
    v6 = NULL;
  }
  if ( v6 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v6->m_refCount, 1u);
  if ( v6 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v6->m_refCount, 1u);
  item.m_chunk.m_ptr = v6;
  if ( v6 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v6->m_refCount, 1u);
  item.m_lone = 0;
  if ( v6 && _InterlockedExchangeAdd((volatile signed __int32 *)&v6->m_refCount, 0xFFFFFFFF) == 1 )
    ((void (__fastcall *)(bdChunk *, __int64))v6->~bdReferencable)(v6, 1i64);
  bdQueue<bdUnicastConnection::bdControlChunkStore>::enqueue(&this->m_outQueue, &item);
  if ( v6 && _InterlockedExchangeAdd((volatile signed __int32 *)&v6->m_refCount, 0xFFFFFFFF) == 1 )
    ((void (__fastcall *)(bdChunk *, __int64))v6->~bdReferencable)(v6, 1i64);
  bdLogMessage(BD_LOG_INFO, "info/", "bdConnection/connections", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdunicastconnection.cpp", "bdUnicastConnection::sendInit", 0x538u, "uc::sending init: m_localTag: %X", this->m_localTag);
  if ( v6 )
  {
    v7 = _InterlockedExchangeAdd((volatile signed __int32 *)&v6->m_refCount, 0xFFFFFFFF);
    if ( v7 == 1 )
      ((void (__fastcall *)(bdChunk *, __int64))v6->~bdReferencable)(v6, 1i64);
  }
  return v2;
}

/*
==============
bdUnicastConnection::sendInitAck
==============
*/
__int64 bdUnicastConnection::sendInitAck(bdUnicastConnection *this, bdReference<bdInitChunk> chunk)
{
  unsigned __int8 v4; 
  unsigned int InitTag; 
  unsigned int peerTieTag; 
  unsigned int v7; 
  unsigned int m_localTag; 
  bdTrulyRandomImpl *Instance; 
  bdCookie *v10; 
  bdCookie *v11; 
  bdCookie *v12; 
  bdInitAckChunk *v13; 
  bdChunk *v14; 
  bdChunk *v15; 
  bdUnicastConnection::bdControlChunkStore item; 
  bdReference<bdCookie> cookie; 
  bdInitChunk *m_ptr; 
  bdCookie *v20; 
  bdInitAckChunk *v21; 

  m_ptr = chunk.m_ptr;
  v4 = 1;
  InitTag = bdInitChunk::getInitTag((bdInitChunk *)chunk.m_ptr->__vftable);
  peerTieTag = 0;
  v7 = 0;
  switch ( this->m_state )
  {
    case BD_UC_CLOSED:
    case BD_UC_SHUTDOWN_ACK_SENT:
      this->m_peerTag = InitTag;
      m_localTag = this->m_localTag;
      goto LABEL_6;
    case BD_UC_COOKIE_WAIT:
      goto $LN6_327;
    case BD_UC_COOKIE_ECHOED:
      peerTieTag = this->m_peerTag;
      v7 = this->m_localTag;
$LN6_327:
      m_localTag = this->m_localTag;
      goto LABEL_6;
    case BD_UC_ESTABLISHED:
    case BD_UC_SHUTDOWN_PENDING:
    case BD_UC_SHUTDOWN_SENT:
    case BD_UC_SHUTDOWN_RECEIVED:
      Instance = bdSingleton<bdTrulyRandomImpl>::getInstance();
      m_localTag = bdTrulyRandomImpl::getRandomUInt(Instance);
      peerTieTag = this->m_peerTag;
      v7 = this->m_localTag;
LABEL_6:
      v10 = (bdCookie *)bdMemory::allocate(0x20ui64);
      cookie.m_ptr = v10;
      if ( v10 )
      {
        bdCookie::bdCookie(v10, m_localTag, InitTag, v7, peerTieTag);
        v12 = v11;
      }
      else
      {
        v12 = NULL;
      }
      v20 = v12;
      if ( v12 )
        _InterlockedExchangeAdd((volatile signed __int32 *)&v12->m_refCount, 1u);
      v13 = (bdInitAckChunk *)bdMemory::allocate(0x40ui64);
      v21 = v13;
      if ( v13 )
      {
        cookie.m_ptr = v12;
        if ( v12 )
          _InterlockedExchangeAdd((volatile signed __int32 *)&v12->m_refCount, 1u);
        bdInitAckChunk::bdInitAckChunk(v13, m_localTag, (bdReference<bdCookie>)&cookie, 15000i64, InitTag);
        v15 = v14;
      }
      else
      {
        v15 = NULL;
      }
      if ( v15 )
        _InterlockedExchangeAdd((volatile signed __int32 *)&v15->m_refCount, 1u);
      if ( v15 )
        _InterlockedExchangeAdd((volatile signed __int32 *)&v15->m_refCount, 1u);
      item.m_chunk.m_ptr = v15;
      if ( v15 )
        _InterlockedExchangeAdd((volatile signed __int32 *)&v15->m_refCount, 1u);
      item.m_lone = 1;
      if ( v15 && _InterlockedExchangeAdd((volatile signed __int32 *)&v15->m_refCount, 0xFFFFFFFF) == 1 )
        ((void (__fastcall *)(bdChunk *, __int64))v15->~bdReferencable)(v15, 1i64);
      bdQueue<bdUnicastConnection::bdControlChunkStore>::enqueue(&this->m_outQueue, &item);
      if ( v15 && _InterlockedExchangeAdd((volatile signed __int32 *)&v15->m_refCount, 0xFFFFFFFF) == 1 )
        ((void (__fastcall *)(bdChunk *, __int64))v15->~bdReferencable)(v15, 1i64);
      bdLogMessage(BD_LOG_INFO, "info/", "bdConnection/connections", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdunicastconnection.cpp", "bdUnicastConnection::sendInitAck", 0x588u, "uc::sending init ack: m_localTag/localTag/m_peerTag: %X/%X/%X", this->m_localTag, m_localTag, this->m_peerTag);
      if ( v15 && _InterlockedExchangeAdd((volatile signed __int32 *)&v15->m_refCount, 0xFFFFFFFF) == 1 )
        ((void (__fastcall *)(bdChunk *, __int64))v15->~bdReferencable)(v15, 1i64);
      if ( v12 && _InterlockedExchangeAdd((volatile signed __int32 *)&v12->m_refCount, 0xFFFFFFFF) == 1 )
        ((void (__fastcall *)(bdCookie *, __int64))v12->~bdReferencable)(v12, 1i64);
      break;
    default:
      v4 = 0;
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdConnection/connections", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdunicastconnection.cpp", "bdUnicastConnection::sendInitAck", 0x58Cu, "bdUnicastConnection::sendInitAck(): Failed to send init ack.");
      break;
  }
  if ( chunk.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&chunk.m_ptr->getType, 0xFFFFFFFF) == 1 )
  {
    if ( chunk.m_ptr->__vftable )
      (*(void (__fastcall **)(bdInitChunk_vtbl *, __int64))chunk.m_ptr->~bdReferencable)(chunk.m_ptr->__vftable, 1i64);
    chunk.m_ptr->__vftable = NULL;
  }
  return v4;
}

/*
==============
bdUnicastConnection::sendShutdown
==============
*/
char bdUnicastConnection::sendShutdown(bdUnicastConnection *this)
{
  unsigned __int8 m_shutdownResends; 
  bdShutdownChunk *v3; 
  bdChunk *v4; 
  bdChunk *v5; 
  signed __int32 v6; 
  bdUnicastConnection::bdControlChunkStore item; 

  m_shutdownResends = this->m_shutdownResends;
  this->m_shutdownResends = m_shutdownResends + 1;
  if ( m_shutdownResends >= 5u )
    return 0;
  bdLogMessage(BD_LOG_INFO, "info/", "bdConnection/connections", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdunicastconnection.cpp", "bdUnicastConnection::sendShutdown", 0x5D7u, "uc::sending shutdown (%u/%u)", (unsigned __int8)(m_shutdownResends + 1), 5);
  v3 = (bdShutdownChunk *)bdMemory::allocate(0x20ui64);
  if ( v3 )
  {
    bdShutdownChunk::bdShutdownChunk(v3);
    v5 = v4;
  }
  else
  {
    v5 = NULL;
  }
  if ( v5 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v5->m_refCount, 1u);
  if ( v5 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v5->m_refCount, 1u);
  item.m_chunk.m_ptr = v5;
  if ( v5 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v5->m_refCount, 1u);
  item.m_lone = 0;
  if ( v5 && !_InterlockedDecrement((volatile signed __int32 *)&v5->m_refCount) )
    ((void (__fastcall *)(bdChunk *, __int64))v5->~bdReferencable)(v5, 1i64);
  bdQueue<bdUnicastConnection::bdControlChunkStore>::enqueue(&this->m_outQueue, &item);
  if ( v5 && !_InterlockedDecrement((volatile signed __int32 *)&v5->m_refCount) )
    ((void (__fastcall *)(bdChunk *, __int64))v5->~bdReferencable)(v5, 1i64);
  bdStopwatch::start(&this->m_shutdownTimer);
  if ( v5 )
  {
    v6 = _InterlockedExchangeAdd((volatile signed __int32 *)&v5->m_refCount, 0xFFFFFFFF);
    if ( v6 == 1 )
      ((void (__fastcall *)(bdChunk *, __int64))v5->~bdReferencable)(v5, 1i64);
  }
  return 1;
}

/*
==============
bdUnicastConnection::sendShutdownAck
==============
*/
char bdUnicastConnection::sendShutdownAck(bdUnicastConnection *this)
{
  unsigned __int8 m_shutdownResends; 
  bdShutdownAckChunk *v3; 
  bdChunk *v4; 
  bdChunk *v5; 
  signed __int32 v6; 
  bdUnicastConnection::bdControlChunkStore item; 

  m_shutdownResends = this->m_shutdownResends;
  this->m_shutdownResends = m_shutdownResends + 1;
  if ( m_shutdownResends >= 5u )
    return 0;
  bdLogMessage(BD_LOG_INFO, "info/", "bdConnection/connections", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdunicastconnection.cpp", "bdUnicastConnection::sendShutdownAck", 0x5EBu, "uc::sending shutdown ack (%u/%u)", (unsigned __int8)(m_shutdownResends + 1), 5);
  v3 = (bdShutdownAckChunk *)bdMemory::allocate(0x20ui64);
  if ( v3 )
  {
    bdShutdownAckChunk::bdShutdownAckChunk(v3);
    v5 = v4;
  }
  else
  {
    v5 = NULL;
  }
  if ( v5 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v5->m_refCount, 1u);
  if ( v5 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v5->m_refCount, 1u);
  item.m_chunk.m_ptr = v5;
  if ( v5 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v5->m_refCount, 1u);
  item.m_lone = 0;
  if ( v5 && !_InterlockedDecrement((volatile signed __int32 *)&v5->m_refCount) )
    ((void (__fastcall *)(bdChunk *, __int64))v5->~bdReferencable)(v5, 1i64);
  bdQueue<bdUnicastConnection::bdControlChunkStore>::enqueue(&this->m_outQueue, &item);
  if ( v5 && !_InterlockedDecrement((volatile signed __int32 *)&v5->m_refCount) )
    ((void (__fastcall *)(bdChunk *, __int64))v5->~bdReferencable)(v5, 1i64);
  bdStopwatch::start(&this->m_shutdownTimer);
  if ( v5 )
  {
    v6 = _InterlockedExchangeAdd((volatile signed __int32 *)&v5->m_refCount, 0xFFFFFFFF);
    if ( v6 == 1 )
      ((void (__fastcall *)(bdChunk *, __int64))v5->~bdReferencable)(v5, 1i64);
  }
  return 1;
}

/*
==============
bdUnicastConnection::sendShutdownComplete
==============
*/
char bdUnicastConnection::sendShutdownComplete(bdUnicastConnection *this)
{
  bdShutdownCompleteChunk *v2; 
  bdChunk *v3; 
  bdChunk *v4; 
  bdUnicastConnection::bdControlChunkStore item; 

  bdLogMessage(BD_LOG_INFO, "info/", "bdConnection/connections", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdunicastconnection.cpp", "bdUnicastConnection::sendShutdownComplete", 0x5FDu, "uc::sending shutdown complete");
  v2 = (bdShutdownCompleteChunk *)bdMemory::allocate(0x20ui64);
  if ( v2 )
  {
    bdShutdownCompleteChunk::bdShutdownCompleteChunk(v2);
    v4 = v3;
  }
  else
  {
    v4 = NULL;
  }
  if ( v4 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v4->m_refCount, 1u);
  if ( v4 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v4->m_refCount, 1u);
  item.m_chunk.m_ptr = v4;
  if ( v4 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v4->m_refCount, 1u);
  item.m_lone = 0;
  if ( v4 && !_InterlockedDecrement((volatile signed __int32 *)&v4->m_refCount) )
    ((void (__fastcall *)(bdChunk *, __int64))v4->~bdReferencable)(v4, 1i64);
  bdQueue<bdUnicastConnection::bdControlChunkStore>::enqueue(&this->m_outQueue, &item);
  if ( v4 && !_InterlockedDecrement((volatile signed __int32 *)&v4->m_refCount) )
    ((void (__fastcall *)(bdChunk *, __int64))v4->~bdReferencable)(v4, 1i64);
  if ( v4 && _InterlockedExchangeAdd((volatile signed __int32 *)&v4->m_refCount, 0xFFFFFFFF) == 1 )
    ((void (__fastcall *)(bdChunk *, __int64))v4->~bdReferencable)(v4, 1i64);
  return 1;
}

/*
==============
bdUnicastConnection::setAcceptOutOfOrder
==============
*/
void bdUnicastConnection::setAcceptOutOfOrder(bdUnicastConnection *this, bool acceptOutOfOrder)
{
  this->m_acceptOutOfOrder = acceptOutOfOrder;
}

/*
==============
bdUnicastConnection::windowsEmpty
==============
*/
_BOOL8 bdUnicastConnection::windowsEmpty(bdUnicastConnection *this)
{
  bdReliableSendWindow *m_reliableSendWindow; 

  m_reliableSendWindow = this->m_reliableSendWindow;
  return !m_reliableSendWindow || bdReliableSendWindow::isEmpty(m_reliableSendWindow);
}

