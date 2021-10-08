/*
==============
bdPendingBufferTransfer::bdPendingBufferTransfer
==============
*/

void __fastcall bdPendingBufferTransfer::bdPendingBufferTransfer(bdPendingBufferTransfer *this, bdReference<bdByteBuffer> buffer, unsigned int totalSize, bool isThrottled)
{
  ??0bdPendingBufferTransfer@@QEAA@V?$bdReference@VbdByteBuffer@@@@I_N@Z(this, buffer, totalSize, isThrottled);
}

/*
==============
bdLobbyConnection::parse220MigrateAck
==============
*/

bool __fastcall bdLobbyConnection::parse220MigrateAck(bdLobbyConnection *this, unsigned __int8 *const readPtr, const unsigned int validBytes, unsigned int *offset)
{
  return ?parse220MigrateAck@bdLobbyConnection@@IEAA_NQEAEIAEAI@Z(this, readPtr, validBytes, offset);
}

/*
==============
bdLobbyConnection::setTasksAreThrottled
==============
*/

void __fastcall bdLobbyConnection::setTasksAreThrottled(bdLobbyConnection *this, bool areThrottled)
{
  ?setTasksAreThrottled@bdLobbyConnection@@QEAAX_N@Z(this, areThrottled);
}

/*
==============
bdLobbyConnection::getMaxSendMessageSizeWithoutOverhead
==============
*/

unsigned int __fastcall bdLobbyConnection::getMaxSendMessageSizeWithoutOverhead(bdLobbyConnection *this)
{
  return ?getMaxSendMessageSizeWithoutOverhead@bdLobbyConnection@@QEBAIXZ(this);
}

/*
==============
bdLobbyConnection::getThrottleBucket
==============
*/

bdTokenBucket *__fastcall bdLobbyConnection::getThrottleBucket(bdLobbyConnection *this)
{
  return ?getThrottleBucket@bdLobbyConnection@@QEAAAEAVbdTokenBucket@@XZ(this);
}

/*
==============
bdLobbyConnection::getStatus
==============
*/

bdLobbyConnection::Status __fastcall bdLobbyConnection::getStatus(bdLobbyConnection *this)
{
  return ?getStatus@bdLobbyConnection@@QEBA?AW4Status@1@XZ(this);
}

/*
==============
bdLobbyConnection::receivedFullMessage
==============
*/

bool __fastcall bdLobbyConnection::receivedFullMessage(bdLobbyConnection *this)
{
  return ?receivedFullMessage@bdLobbyConnection@@IEAA_NXZ(this);
}

/*
==============
bdLobbyConnection::getHandleInfo
==============
*/

void __fastcall bdLobbyConnection::getHandleInfo(bdLobbyConnection *this, int *handle, bool *read, bool *write, float *timeout)
{
  ?getHandleInfo@bdLobbyConnection@@QEAAXAEAHAEA_N1AEAM@Z(this, handle, read, write, timeout);
}

/*
==============
bdLobbyConnection::prepare2x0ClientAuthAndDeriveCrypto
==============
*/

bool __fastcall bdLobbyConnection::prepare2x0ClientAuthAndDeriveCrypto(bdLobbyConnection *this, unsigned __int8 *const replyPacketPtr, unsigned int *replyPacketOffset, const unsigned int replyPacketMaxSize, const unsigned __int8 *const serverHeaderAckReadPtr, const unsigned int serverHeaderAckReadOffset, const unsigned int serverHeaderAckEndOffset)
{
  return ?prepare2x0ClientAuthAndDeriveCrypto@bdLobbyConnection@@IEAA_NQEAEAEAIIQEBEII@Z(this, replyPacketPtr, replyPacketOffset, replyPacketMaxSize, serverHeaderAckReadPtr, serverHeaderAckReadOffset, serverHeaderAckEndOffset);
}

/*
==============
bdLobbyConnection::process220MigrateInit
==============
*/

bool __fastcall bdLobbyConnection::process220MigrateInit(bdLobbyConnection *this, unsigned __int8 *const readPtr, const unsigned int validBytes, unsigned int *offset)
{
  return ?process220MigrateInit@bdLobbyConnection@@IEAA_NQEAEIAEAI@Z(this, readPtr, validBytes, offset);
}

/*
==============
bdLobbyConnection::getMessageToDispatch
==============
*/

bool __fastcall bdLobbyConnection::getMessageToDispatch(bdLobbyConnection *this, unsigned __int8 *type, bdReference<bdByteBuffer> *payload)
{
  return ?getMessageToDispatch@bdLobbyConnection@@QEAA_NAEAEAEAV?$bdReference@VbdByteBuffer@@@@@Z(this, type, payload);
}

/*
==============
bdLobbyConnection::sendRaw
==============
*/

void __fastcall bdLobbyConnection::sendRaw(bdLobbyConnection *this, void *buffer, const unsigned int bufferSize)
{
  ?sendRaw@bdLobbyConnection@@QEAAXPEAXI@Z(this, buffer, bufferSize);
}

/*
==============
bdLobbyConnection::~bdLobbyConnection
==============
*/

void __fastcall bdLobbyConnection::~bdLobbyConnection(bdLobbyConnection *this)
{
  ??1bdLobbyConnection@@UEAA@XZ(this);
}

/*
==============
bdPendingBufferTransfer::bdPendingBufferTransfer
==============
*/

void __fastcall bdPendingBufferTransfer::bdPendingBufferTransfer(bdPendingBufferTransfer *this, const bdPendingBufferTransfer *other)
{
  ??0bdPendingBufferTransfer@@QEAA@AEBV0@@Z(this, other);
}

/*
==============
bdLobbyConnection::recvMessageSize
==============
*/

int __fastcall bdLobbyConnection::recvMessageSize(bdLobbyConnection *this)
{
  return ?recvMessageSize@bdLobbyConnection@@IEAAHXZ(this);
}

/*
==============
bdLobbyConnection::recvEncryptType
==============
*/

int __fastcall bdLobbyConnection::recvEncryptType(bdLobbyConnection *this)
{
  return ?recvEncryptType@bdLobbyConnection@@IEAAHXZ(this);
}

/*
==============
bdLobbyConnection::setSessionKey
==============
*/

bool __fastcall bdLobbyConnection::setSessionKey(bdLobbyConnection *this, const unsigned __int8 *sessionKey, const unsigned int encryptionMethod)
{
  return ?setSessionKey@bdLobbyConnection@@QEAA_NQEBEI@Z(this, sessionKey, encryptionMethod);
}

/*
==============
bdLobbyConnection::send200ClientHeader
==============
*/

bool __fastcall bdLobbyConnection::send200ClientHeader(bdLobbyConnection *this)
{
  return ?send200ClientHeader@bdLobbyConnection@@IEAA_NXZ(this);
}

/*
==============
bdLobbyConnection::getSendMessageOverheadSize
==============
*/

unsigned int __fastcall bdLobbyConnection::getSendMessageOverheadSize()
{
  return ?getSendMessageOverheadSize@bdLobbyConnection@@KAIXZ();
}

/*
==============
bdLobbyConnection::getMessageToDispatch200
==============
*/

bool __fastcall bdLobbyConnection::getMessageToDispatch200(bdLobbyConnection *this, unsigned __int8 *type, bdReference<bdByteBuffer> *payload)
{
  return ?getMessageToDispatch200@bdLobbyConnection@@IEAA_NAEAEAEAV?$bdReference@VbdByteBuffer@@@@@Z(this, type, payload);
}

/*
==============
bdPendingBufferTransfer::getIsThrottled
==============
*/

bool __fastcall bdPendingBufferTransfer::getIsThrottled(bdPendingBufferTransfer *this)
{
  return ?getIsThrottled@bdPendingBufferTransfer@@QEBA_NXZ(this);
}

/*
==============
bdPendingBufferTransfer::~bdPendingBufferTransfer
==============
*/

void __fastcall bdPendingBufferTransfer::~bdPendingBufferTransfer(bdPendingBufferTransfer *this)
{
  ??1bdPendingBufferTransfer@@UEAA@XZ(this);
}

/*
==============
bdLobbyConnection::callListenersDisconnect
==============
*/

void __fastcall bdLobbyConnection::callListenersDisconnect(bdLobbyConnection *this)
{
  ?callListenersDisconnect@bdLobbyConnection@@IEAAXXZ(this);
}

/*
==============
bdLobbyConnection::sendTask200
==============
*/

bool __fastcall bdLobbyConnection::sendTask200(bdLobbyConnection *this, bdReference<bdTaskByteBuffer> message, unsigned int messageSize, const bool encrypt)
{
  return ?sendTask200@bdLobbyConnection@@IEAA_NV?$bdReference@VbdTaskByteBuffer@@@@I_N@Z(this, message, messageSize, encrypt);
}

/*
==============
bdLobbyConnection::recvMessageData
==============
*/

bool __fastcall bdLobbyConnection::recvMessageData(bdLobbyConnection *this)
{
  return ?recvMessageData@bdLobbyConnection@@IEAA_NXZ(this);
}

/*
==============
bdLobbyConnection::process210ExpectedRecord
==============
*/

bool __fastcall bdLobbyConnection::process210ExpectedRecord(bdLobbyConnection *this, unsigned __int8 *const readPtr, const unsigned int readOffset, const unsigned int validBytes, unsigned __int8 *returnMsgType, bdReference<bdByteBuffer> *returnPayload)
{
  return ?process210ExpectedRecord@bdLobbyConnection@@IEAA_NQEAEIIAEAEAEAV?$bdReference@VbdByteBuffer@@@@@Z(this, readPtr, readOffset, validBytes, returnMsgType, returnPayload);
}

/*
==============
bdLobbyConnection::pump
==============
*/

bool __fastcall bdLobbyConnection::pump(bdLobbyConnection *this)
{
  return ?pump@bdLobbyConnection@@QEAA_NXZ(this);
}

/*
==============
bdLobbyConnection::onTcpConnect
==============
*/

void __fastcall bdLobbyConnection::onTcpConnect(bdLobbyConnection *this, const bool success)
{
  ?onTcpConnect@bdLobbyConnection@@IEAAX_N@Z(this, success);
}

/*
==============
bdLobbyConnection::sendTask210
==============
*/

bool __fastcall bdLobbyConnection::sendTask210(bdLobbyConnection *this, bdReference<bdTaskByteBuffer> message, unsigned int messageSize, const bool __formal, const unsigned __int8 payloadType)
{
  return ?sendTask210@bdLobbyConnection@@IEAA_NV?$bdReference@VbdTaskByteBuffer@@@@I_NE@Z(this, message, messageSize, __formal, payloadType);
}

/*
==============
bdLobbyConnection::sendFramedMessage
==============
*/

void __fastcall bdLobbyConnection::sendFramedMessage(bdLobbyConnection *this, const void *buffer, const unsigned int bufferSize)
{
  ?sendFramedMessage@bdLobbyConnection@@IEAAXPEBXI@Z(this, buffer, bufferSize);
}

/*
==============
bdLobbyConnection::getReceiveBufferSize
==============
*/

unsigned int __fastcall bdLobbyConnection::getReceiveBufferSize(bdLobbyConnection *this)
{
  return ?getReceiveBufferSize@bdLobbyConnection@@QEBAIXZ(this);
}

/*
==============
bdLobbyConnection::sendTask
==============
*/

bool __fastcall bdLobbyConnection::sendTask(bdLobbyConnection *this, bdReference<bdTaskByteBuffer> message, unsigned int messageSize, const bool encrypt)
{
  return ?sendTask@bdLobbyConnection@@UEAA_NV?$bdReference@VbdTaskByteBuffer@@@@I_N@Z(this, message, messageSize, encrypt);
}

/*
==============
bdLobbyConnection::getMessageToDispatch210
==============
*/

bool __fastcall bdLobbyConnection::getMessageToDispatch210(bdLobbyConnection *this, unsigned __int8 *type, bdReference<bdByteBuffer> *payload)
{
  return ?getMessageToDispatch210@bdLobbyConnection@@IEAA_NAEAEAEAV?$bdReference@VbdByteBuffer@@@@@Z(this, type, payload);
}

/*
==============
bdLobbyConnection::getAuthFramedMessage
==============
*/

bool __fastcall bdLobbyConnection::getAuthFramedMessage(bdLobbyConnection *this, unsigned __int8 *type, bdReference<bdBitBuffer> *payload)
{
  return ?getAuthFramedMessage@bdLobbyConnection@@QEAA_NAEAEAEAV?$bdReference@VbdBitBuffer@@@@@Z(this, type, payload);
}

/*
==============
bdLobbyConnection::process220MigrateAck
==============
*/

bool __fastcall bdLobbyConnection::process220MigrateAck(bdLobbyConnection *this, unsigned __int8 *const readPtr, const unsigned int validBytes, unsigned int *offset)
{
  return ?process220MigrateAck@bdLobbyConnection@@IEAA_NQEAEIAEAI@Z(this, readPtr, validBytes, offset);
}

/*
==============
bdLobbyConnection::extract210ExpectedServerError
==============
*/

bool __fastcall bdLobbyConnection::extract210ExpectedServerError(bdLobbyConnection *this, const unsigned __int8 *const readPtr, const unsigned int readOffset, const unsigned int validBytes, unsigned int *returnErrorReason)
{
  return ?extract210ExpectedServerError@bdLobbyConnection@@IEAA_NQEBEIIAEAI@Z(this, readPtr, readOffset, validBytes, returnErrorReason);
}

/*
==============
bdPendingBufferTransfer::bdPendingBufferTransfer
==============
*/

void __fastcall bdPendingBufferTransfer::bdPendingBufferTransfer(bdPendingBufferTransfer *this, bdReference<bdTaskByteBuffer> buffer, unsigned int totalSize, bool isThrottled)
{
  ??0bdPendingBufferTransfer@@QEAA@V?$bdReference@VbdTaskByteBuffer@@@@I_N@Z(this, buffer, totalSize, isThrottled);
}

/*
==============
bdLobbyConnection::process210ExpectedServerAuthDone
==============
*/

bool __fastcall bdLobbyConnection::process210ExpectedServerAuthDone(bdLobbyConnection *this, const unsigned __int8 *const readPtr, const unsigned int readOffset, const unsigned int validBytes)
{
  return ?process210ExpectedServerAuthDone@bdLobbyConnection@@IEAA_NQEBEII@Z(this, readPtr, readOffset, validBytes);
}

/*
==============
bdLobbyConnection::send220MigrateInitAck
==============
*/

bool __fastcall bdLobbyConnection::send220MigrateInitAck(bdLobbyConnection *this)
{
  return ?send220MigrateInitAck@bdLobbyConnection@@IEAA_NXZ(this);
}

/*
==============
bdLobbyConnection::bdLobbyConnection
==============
*/

void __fastcall bdLobbyConnection::bdLobbyConnection(bdLobbyConnection *this, bdAddr *lobbyAddr, bdLobbyConnectionListener *connectionListener, bool isLSGConnection, bool isPlaintext, unsigned __int64 sendBufSize, unsigned __int64 recvBufSize)
{
  ??0bdLobbyConnection@@QEAA@VbdAddr@@PEAVbdLobbyConnectionListener@@_N2_K3@Z(this, lobbyAddr, connectionListener, isLSGConnection, isPlaintext, sendBufSize, recvBufSize);
}

/*
==============
bdLobbyConnection::process210ExpectedServerHeader
==============
*/

bool __fastcall bdLobbyConnection::process210ExpectedServerHeader(bdLobbyConnection *this, const unsigned __int8 *const readPtr, const unsigned int readOffset, const unsigned int validBytes)
{
  return ?process210ExpectedServerHeader@bdLobbyConnection@@IEAA_NQEBEII@Z(this, readPtr, readOffset, validBytes);
}

/*
==============
bdLobbyConnection::send210ClientHeader
==============
*/

bool __fastcall bdLobbyConnection::send210ClientHeader(bdLobbyConnection *this)
{
  return ?send210ClientHeader@bdLobbyConnection@@IEAA_NXZ(this);
}

/*
==============
bdPendingBufferTransfer::getAvail
==============
*/

unsigned int __fastcall bdPendingBufferTransfer::getAvail(bdPendingBufferTransfer *this)
{
  return ?getAvail@bdPendingBufferTransfer@@QEBAIXZ(this);
}

/*
==============
bdPendingBufferTransfer::updateTransfer
==============
*/

unsigned int __fastcall bdPendingBufferTransfer::updateTransfer(bdPendingBufferTransfer *this, unsigned int amountTransfered)
{
  return ?updateTransfer@bdPendingBufferTransfer@@QEAAII@Z(this, amountTransfered);
}

/*
==============
bdLobbyConnection::disconnect
==============
*/

void __fastcall bdLobbyConnection::disconnect(bdLobbyConnection *this)
{
  ?disconnect@bdLobbyConnection@@QEAAXXZ(this);
}

/*
==============
bdLobbyConnection::connect
==============
*/

bool __fastcall bdLobbyConnection::connect(bdLobbyConnection *this, bdAuthInfo *authInfo)
{
  return ?connect@bdLobbyConnection@@QEAA_NAEAVbdAuthInfo@@@Z(this, authInfo);
}

/*
==============
bdLobbyConnection::process220MigrationServerAuthDone
==============
*/

bool __fastcall bdLobbyConnection::process220MigrationServerAuthDone(bdLobbyConnection *this)
{
  return ?process220MigrationServerAuthDone@bdLobbyConnection@@IEAA_NXZ(this);
}

/*
==============
bdLobbyConnection::close
==============
*/

void __fastcall bdLobbyConnection::close(bdLobbyConnection *this)
{
  ?close@bdLobbyConnection@@QEAAXXZ(this);
}

/*
==============
bdLobbyConnection::isConnectionMigrationSupported
==============
*/

bool __fastcall bdLobbyConnection::isConnectionMigrationSupported(bdLobbyConnection *this)
{
  return ?isConnectionMigrationSupported@bdLobbyConnection@@QEBA_NXZ(this);
}

/*
==============
bdPendingBufferTransfer::getData
==============
*/

unsigned __int8 *__fastcall bdPendingBufferTransfer::getData(bdPendingBufferTransfer *this)
{
  return ?getData@bdPendingBufferTransfer@@QEBAPEAEXZ(this);
}

/*
==============
bdLobbyConnection::bdLobbyConnection
==============
*/
void bdLobbyConnection::bdLobbyConnection(bdLobbyConnection *this, bdAddr *lobbyAddr, bdLobbyConnectionListener *connectionListener, bool isLSGConnection, bool isPlaintext, unsigned __int64 sendBufSize, unsigned __int64 recvBufSize)
{
  this->m_refCount.m_value._My_val = 0;
  this->__vftable = (bdLobbyConnection_vtbl *)&bdLobbyConnection::`vftable';
  bdAddr::bdAddr(&this->m_lobbyAddr, lobbyAddr);
  this->m_isLSGConnection = isLSGConnection;
  this->m_isPlaintext = isPlaintext;
  this->m_maxSendMessageSize = sendBufSize;
  this->m_maxRecvMessageSize = recvBufSize;
  this->m_recvState = BD_READ_INIT;
  this->m_recvCount = 0;
  this->m_recvEncryptType = 0;
  this->m_messageSize = 0;
  this->m_recvMessage.m_ptr = NULL;
  this->m_recvTransfer.m_ptr = NULL;
  this->m_outgoingBuffers.m_list.m_head = NULL;
  this->m_outgoingBuffers.m_list.m_tail = NULL;
  this->m_outgoingBuffers.m_list.m_size = 0;
  bdStreamSocket::bdStreamSocket(&this->m_socket);
  this->m_status = BD_NO_ERROR;
  this->m_connectionListener = connectionListener;
  this->m_encryptionType = 0;
  this->m_cypher = NULL;
  this->m_messageCount = 0;
  bdStopwatch::bdStopwatch(&this->m_keepAliveTimer);
  bdStopwatch::bdStopwatch(&this->m_lastReceivedTimer);
  bdStopwatch::bdStopwatch(&this->m_asyncConnectTimer);
  bdTokenBucket::bdTokenBucket(&this->m_throttleBucket, 0x28u);
  this->m_tasksAreThrottled = 0;
  *(_QWORD *)&this->m_authInfo.m_titleID = 0i64;
  this->m_authInfo.m_userID = 0i64;
  this->m_authInfo.m_authSessionKeyKDF = 0;
  memset_0(this->m_authInfo.m_data, 0, 0x98ui64);
  *(_QWORD *)this->m_authInfo.m_accountType = 0i64;
  *(_WORD *)&this->m_authInfo.m_accountType[8] = 0;
  *(_QWORD *)this->m_authInfo.m_clientID = 0i64;
  *(_QWORD *)&this->m_authInfo.m_clientID[8] = 0i64;
  *(_QWORD *)&this->m_authInfo.m_clientID[16] = 0i64;
  *(_QWORD *)&this->m_authInfo.m_clientID[24] = 0i64;
  *(_QWORD *)&this->m_authInfo.m_clientID[32] = 0i64;
  *(_QWORD *)&this->m_authInfo.m_clientID[40] = 0i64;
  *(_QWORD *)&this->m_authInfo.m_clientID[48] = 0i64;
  *(_QWORD *)&this->m_authInfo.m_clientID[56] = 0i64;
  this->m_cryptoState = BD_CRYPTO210_INVALID;
  this->m_cypher210Client = NULL;
  this->m_cypher210Server = NULL;
  *(_QWORD *)&this->m_serverSelectedProto = 0i64;
  bdAddr::bdAddr(&this->m_lobbyMigrationAddr, lobbyAddr);
  this->m_migrationOutgoingTaskQueue.m_list.m_head = NULL;
  this->m_migrationOutgoingTaskQueue.m_list.m_tail = NULL;
  this->m_migrationOutgoingTaskQueue.m_list.m_size = 0;
  this->m_migrationTicketLen = 0;
  this->m_migrationReconnectTimeout = 30.0;
  bdHandleAssert(this->m_maxSendMessageSize != 0, "m_maxSendMessageSize > getSendMessageOverheadSize()", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobbyconnection\\bdlobbyconnection.cpp", "bdLobbyConnection::bdLobbyConnection", 0x5Bu, "Maximum message size is too small.", -2i64, this);
  bdStreamSocket::create(&this->m_socket, this->m_lobbyAddr.m_address.inUn.m_sockaddrStorage.ss_family, 0);
}

/*
==============
bdPendingBufferTransfer::bdPendingBufferTransfer
==============
*/
void bdPendingBufferTransfer::bdPendingBufferTransfer(bdPendingBufferTransfer *this, const bdPendingBufferTransfer *other)
{
  bdByteBuffer *m_ptr; 

  this->m_refCount.m_value._My_val = 0;
  this->__vftable = (bdPendingBufferTransfer_vtbl *)&bdPendingBufferTransfer::`vftable';
  m_ptr = other->m_buffer.m_ptr;
  this->m_buffer.m_ptr = m_ptr;
  if ( m_ptr )
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
  this->m_txPtr = other->m_txPtr;
  this->m_txAvail = other->m_txAvail;
  this->m_isThrottled = other->m_isThrottled;
}

/*
==============
bdPendingBufferTransfer::bdPendingBufferTransfer
==============
*/
void bdPendingBufferTransfer::bdPendingBufferTransfer(bdPendingBufferTransfer *this, bdReference<bdByteBuffer> buffer, __int64 totalSize, bool isThrottled)
{
  bdByteBuffer_vtbl *v5; 
  unsigned __int8 *resizeToFit; 
  unsigned int v8; 

  this->m_refCount.m_value._My_val = 0;
  this->__vftable = (bdPendingBufferTransfer_vtbl *)&bdPendingBufferTransfer::`vftable';
  v5 = buffer.m_ptr->__vftable;
  this->m_buffer.m_ptr = (bdByteBuffer *)buffer.m_ptr->__vftable;
  if ( v5 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v5->allocateBuffer, 1u);
  resizeToFit = (unsigned __int8 *)buffer.m_ptr->resizeToFit;
  v8 = 0;
  this->m_txPtr = resizeToFit;
  this->m_isThrottled = isThrottled;
  if ( resizeToFit )
    v8 = totalSize;
  this->m_txAvail = v8;
  if ( buffer.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->allocateBuffer, 0xFFFFFFFF) == 1 )
  {
    if ( buffer.m_ptr->__vftable )
      (*(void (__fastcall **)(bdByteBuffer_vtbl *, __int64, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr->__vftable, 1i64, totalSize);
    buffer.m_ptr->__vftable = NULL;
  }
}

/*
==============
bdPendingBufferTransfer::bdPendingBufferTransfer
==============
*/
void bdPendingBufferTransfer::bdPendingBufferTransfer(bdPendingBufferTransfer *this, bdReference<bdTaskByteBuffer> buffer, unsigned int totalSize, bool isThrottled)
{
  bdTaskByteBuffer_vtbl *v8; 
  unsigned __int8 *HeaderStart; 
  unsigned int v10; 

  this->m_refCount.m_value._My_val = 0;
  this->__vftable = (bdPendingBufferTransfer_vtbl *)&bdPendingBufferTransfer::`vftable';
  v8 = buffer.m_ptr->__vftable;
  this->m_buffer.m_ptr = (bdByteBuffer *)buffer.m_ptr->__vftable;
  if ( v8 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v8->allocateBuffer, 1u);
  HeaderStart = bdTaskByteBuffer::getHeaderStart((bdTaskByteBuffer *)buffer.m_ptr->__vftable);
  this->m_txPtr = HeaderStart;
  this->m_isThrottled = isThrottled;
  v10 = 0;
  if ( HeaderStart )
    v10 = totalSize;
  this->m_txAvail = v10;
  if ( buffer.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->allocateBuffer, 0xFFFFFFFF) == 1 )
  {
    if ( buffer.m_ptr->__vftable )
      (*(void (__fastcall **)(bdTaskByteBuffer_vtbl *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr->__vftable, 1i64);
    buffer.m_ptr->__vftable = NULL;
  }
}

/*
==============
bdLobbyConnection::~bdLobbyConnection
==============
*/
void bdLobbyConnection::~bdLobbyConnection(bdLobbyConnection *this)
{
  bdCypher *m_cypher; 
  bdCypherAES *m_cypher210Client; 
  bdCypherAES *m_cypher210Server; 
  bdPendingBufferTransfer *m_ptr; 
  bdPendingBufferTransfer *v6; 
  bdTaskByteBuffer *v7; 
  bdTaskByteBuffer *v8; 

  this->__vftable = (bdLobbyConnection_vtbl *)&bdLobbyConnection::`vftable';
  this->m_socket.close(&this->m_socket);
  m_cypher = this->m_cypher;
  if ( m_cypher )
  {
    ((void (__fastcall *)(bdCypher *, __int64))m_cypher->~bdCypher)(m_cypher, 1i64);
    this->m_cypher = NULL;
  }
  m_cypher210Client = this->m_cypher210Client;
  if ( m_cypher210Client )
  {
    ((void (__fastcall *)(bdCypherAES *, __int64))m_cypher210Client->~bdCypher)(m_cypher210Client, 1i64);
    this->m_cypher210Client = NULL;
  }
  m_cypher210Server = this->m_cypher210Server;
  if ( m_cypher210Server )
  {
    ((void (__fastcall *)(bdCypherAES *, __int64))m_cypher210Server->~bdCypher)(m_cypher210Server, 1i64);
    this->m_cypher210Server = NULL;
  }
  bdLinkedList<bdLobbyConnectionMigrationHeldBackTask>::~bdLinkedList<bdLobbyConnectionMigrationHeldBackTask>(&this->m_migrationOutgoingTaskQueue.m_list);
  bdStreamSocket::~bdStreamSocket(&this->m_socket);
  bdLinkedList<bdPendingBufferTransfer>::~bdLinkedList<bdPendingBufferTransfer>(&this->m_outgoingBuffers.m_list);
  m_ptr = this->m_recvTransfer.m_ptr;
  if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
  {
    v6 = this->m_recvTransfer.m_ptr;
    if ( v6 )
      ((void (__fastcall *)(bdPendingBufferTransfer *, __int64))v6->~bdReferencable)(v6, 1i64);
    this->m_recvTransfer.m_ptr = NULL;
  }
  v7 = this->m_recvMessage.m_ptr;
  if ( v7 && _InterlockedExchangeAdd((volatile signed __int32 *)&v7->m_refCount, 0xFFFFFFFF) == 1 )
  {
    v8 = this->m_recvMessage.m_ptr;
    if ( v8 )
      ((void (__fastcall *)(bdTaskByteBuffer *, __int64))v8->~bdReferencable)(v8, 1i64);
    this->m_recvMessage.m_ptr = NULL;
  }
  bdReferencable::~bdReferencable(this);
}

/*
==============
bdPendingBufferTransfer::~bdPendingBufferTransfer
==============
*/
void bdPendingBufferTransfer::~bdPendingBufferTransfer(bdPendingBufferTransfer *this)
{
  bdByteBuffer *m_ptr; 
  bdByteBuffer *v3; 

  this->__vftable = (bdPendingBufferTransfer_vtbl *)&bdPendingBufferTransfer::`vftable';
  m_ptr = this->m_buffer.m_ptr;
  if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
  {
    v3 = this->m_buffer.m_ptr;
    if ( v3 )
      ((void (__fastcall *)(bdByteBuffer *, __int64))v3->~bdReferencable)(v3, 1i64);
    this->m_buffer.m_ptr = NULL;
  }
  bdReferencable::~bdReferencable(this);
}

/*
==============
bdLobbyConnection::callListenersDisconnect
==============
*/
void bdLobbyConnection::callListenersDisconnect(bdLobbyConnection *this)
{
  bdLobbyConnectionListener *m_connectionListener; 
  bdLobbyConnectionListener_vtbl *v2; 
  void (__fastcall *onDisconnect)(bdLobbyConnectionListener *, bdReference<bdLobbyConnection>); 
  bdLobbyConnection *v4; 

  m_connectionListener = this->m_connectionListener;
  if ( m_connectionListener )
  {
    v2 = m_connectionListener->__vftable;
    v4 = this;
    onDisconnect = v2->onDisconnect;
    _InterlockedExchangeAdd((volatile signed __int32 *)&this->m_refCount, 1u);
    ((void (__fastcall *)(bdLobbyConnectionListener *, bdLobbyConnection **))onDisconnect)(m_connectionListener, &v4);
  }
}

/*
==============
bdLobbyConnection::close
==============
*/
void bdLobbyConnection::close(bdLobbyConnection *this)
{
  bdLobbyConnection::Status m_status; 
  bdLobbyConnectionListener *m_connectionListener; 
  bdLobbyConnectionListener_vtbl *v5; 
  bdLobbyConnectionListener *v6; 
  bdLobbyConnectionListener_vtbl *v7; 
  bdStreamSocket_vtbl *v8; 
  bdLinkedList<bdLobbyConnectionMigrationHeldBackTask> v13; 
  bdLinkedList<bdPendingBufferTransfer> v14; 
  bdLobbyConnection *v15; 
  bdLobbyConnection *v16; 

  m_status = this->m_status;
  _RBX = this;
  if ( m_status == BD_TOO_MANY_TASKS )
  {
    if ( this->m_migrationState == BD_MIGRATION220_IDLE )
    {
      m_connectionListener = this->m_connectionListener;
      if ( m_connectionListener )
      {
        v5 = m_connectionListener->__vftable;
        v15 = _RBX;
        _InterlockedExchangeAdd((volatile signed __int32 *)&_RBX->m_refCount, 1u);
        ((void (__fastcall *)(bdLobbyConnectionListener *, bdLobbyConnection **))v5->onConnectFailed)(m_connectionListener, &v15);
      }
      goto LABEL_8;
    }
  }
  else if ( m_status == BD_HANDLE_TASK_FAILED )
  {
    goto LABEL_8;
  }
  v6 = this->m_connectionListener;
  if ( v6 )
  {
    v7 = v6->__vftable;
    v16 = _RBX;
    _InterlockedExchangeAdd((volatile signed __int32 *)&_RBX->m_refCount, 1u);
    ((void (__fastcall *)(bdLobbyConnectionListener *, bdLobbyConnection **))v7->onDisconnect)(v6, &v16);
  }
LABEL_8:
  _RBX->m_status = BD_HANDLE_TASK_FAILED;
  v8 = _RBX->m_socket.__vftable;
  _RBX->m_cryptoState = BD_CRYPTO210_INVALID;
  _RBX->m_migrationState = BD_MIGRATION220_IDLE;
  *(double *)&_XMM0 = ((double (*)(void))v8->close)();
  *(_QWORD *)&v13.m_size = 0i64;
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovups xmmword ptr [rbx+378h], xmm0
    vmovdqu xmmword ptr [rsp+58h+var_38.m_head], xmm0
    vmovsd  xmm0, qword ptr [rsp+58h+var_38.m_size]
    vmovsd  qword ptr [rbx+388h], xmm0
  }
  bdLinkedList<bdLobbyConnectionMigrationHeldBackTask>::~bdLinkedList<bdLobbyConnectionMigrationHeldBackTask>(&v13);
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovups xmmword ptr [rbx+0D8h], xmm0
    vmovdqu xmmword ptr [rsp+58h+var_20.m_head], xmm0
  }
  *(_QWORD *)&v14.m_size = 0i64;
  __asm
  {
    vmovsd  xmm0, qword ptr [rsp+58h+var_20.m_size]
    vmovsd  qword ptr [rbx+0E8h], xmm0
  }
  bdLinkedList<bdPendingBufferTransfer>::~bdLinkedList<bdPendingBufferTransfer>(&v14);
}

/*
==============
bdLobbyConnection::connect
==============
*/
char bdLobbyConnection::connect(bdLobbyConnection *this, bdAuthInfo *authInfo)
{
  bdTrulyRandomImpl *Instance; 
  const bdAddr *v22; 
  bdSocketStatusCode v23; 
  bdAddr v25; 

  this->m_status = BD_TOO_MANY_TASKS;
  _RBX = authInfo;
  this->m_cryptoState = BD_CRYPTO210_INVALID;
  _RDI = this;
  __asm
  {
    vmovups xmm0, xmmword ptr [rdx]
    vmovups xmmword ptr [rcx+180h], xmm0
    vmovups xmm1, xmmword ptr [rdx+10h]
    vmovups xmmword ptr [rcx+190h], xmm1
    vmovups xmm0, xmmword ptr [rdx+20h]
    vmovups xmmword ptr [rcx+1A0h], xmm0
    vmovups xmm1, xmmword ptr [rdx+30h]
    vmovups xmmword ptr [rcx+1B0h], xmm1
    vmovups xmm0, xmmword ptr [rdx+40h]
    vmovups xmmword ptr [rcx+1C0h], xmm0
    vmovups xmm1, xmmword ptr [rdx+50h]
    vmovups xmmword ptr [rcx+1D0h], xmm1
    vmovups xmm0, xmmword ptr [rdx+60h]
    vmovups xmmword ptr [rcx+1E0h], xmm0
    vmovups xmm0, xmmword ptr [rdx+70h]
    vmovups xmmword ptr [rcx+1F0h], xmm0
    vmovups xmm1, xmmword ptr [rdx+80h]
    vmovups xmmword ptr [rcx+200h], xmm1
    vmovups xmm0, xmmword ptr [rdx+90h]
    vmovups xmmword ptr [rcx+210h], xmm0
    vmovups xmm1, xmmword ptr [rdx+0A0h]
    vmovups xmmword ptr [rcx+220h], xmm1
    vmovups xmm0, xmmword ptr [rdx+0B0h]
    vmovups xmmword ptr [rcx+230h], xmm0
    vmovups xmm1, xmmword ptr [rdx+0C0h]
    vmovups xmmword ptr [rcx+240h], xmm1
    vmovups xmm0, xmmword ptr [rdx+0D0h]
    vmovups xmmword ptr [rcx+250h], xmm0
    vmovups xmm1, xmmword ptr [rdx+0E0h]
    vmovups xmmword ptr [rcx+260h], xmm1
  }
  *(_QWORD *)&this->m_authInfo.m_clientID[62] = *(_QWORD *)&authInfo->m_clientID[62];
  Instance = bdSingleton<bdTrulyRandomImpl>::getInstance();
  bdTrulyRandomImpl::getRandomUByte8(Instance, _RDI->m_clientNonce, 8u);
  bdHandleAssert(1, "sizeof(m_sessionKey) <= sizeof(authInfo.m_sessionKey)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobbyconnection\\bdlobbyconnection.cpp", "bdLobbyConnection::connect", 0x759u, "Session key size constants invalid.");
  __asm
  {
    vmovups xmm0, xmmword ptr [rbx+88h]
    vmovups xmmword ptr [rdi+120h], xmm0
    vmovsd  xmm1, qword ptr [rbx+98h]
    vmovsd  qword ptr [rdi+130h], xmm1
  }
  bdAddr::bdAddr(&v25, &_RDI->m_lobbyAddr);
  v23 = bdStreamSocket::connect(&_RDI->m_socket, v22);
  if ( v23 == BD_NET_SUCCESS )
  {
    _RDI->m_status = BD_NOT_CONNECTED;
    bdLobbyConnection::onTcpConnect(_RDI, 1);
    return 1;
  }
  else if ( v23 == BD_NET_WOULD_BLOCK )
  {
    bdStopwatch::reset(&_RDI->m_asyncConnectTimer);
    bdStopwatch::start(&_RDI->m_asyncConnectTimer);
    return 1;
  }
  else
  {
    bdLobbyConnection::close(_RDI);
    return 0;
  }
}

/*
==============
bdLobbyConnection::disconnect
==============
*/

void __fastcall bdLobbyConnection::disconnect(bdLobbyConnection *this)
{
  bdLobbyConnection::close(this);
}

/*
==============
bdLobbyConnection::extract210ExpectedServerError
==============
*/
bool bdLobbyConnection::extract210ExpectedServerError(bdLobbyConnection *this, const unsigned __int8 *const readPtr, const unsigned int readOffset, const unsigned int validBytes, unsigned int *returnErrorReason)
{
  unsigned int v5; 
  unsigned int v6; 
  bool result; 

  v5 = 0;
  v6 = readOffset + 4;
  if ( readPtr )
  {
    if ( v6 > validBytes )
      bdLogMessage(BD_LOG_WARNING, "warn/", "byte packer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::removeBasicType", 0xA2u, "Not enough data left to read %u bytes.", 4i64);
    else
      v5 = *(_DWORD *)&readPtr[readOffset];
  }
  if ( v6 > validBytes && readPtr )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdLobby/bdLobbyConnection", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobbyconnection\\bdlobbyconnection.cpp", "bdLobbyConnection::extract210ExpectedServerError", 0x3EBu, "Failed to parse lobby error message.");
    return 0;
  }
  else
  {
    result = 1;
    *returnErrorReason = v5;
  }
  return result;
}

/*
==============
bdLobbyConnection::getAuthFramedMessage
==============
*/
char bdLobbyConnection::getAuthFramedMessage(bdLobbyConnection *this, unsigned __int8 *type, bdReference<bdBitBuffer> *payload)
{
  char v7; 
  unsigned __int8 *HeaderStart; 
  unsigned int m_messageSize; 
  unsigned int v10; 
  unsigned __int8 v11; 
  bdBitBuffer *v12; 

  bdHandleAssert(!this->m_isLSGConnection, "!m_isLSGConnection", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobbyconnection\\bdlobbyconnection.cpp", "bdLobbyConnection::getAuthFramedMessage", 0x23Au, "Auth-only method called on an LSG connection.");
  if ( this->m_status == BD_HANDLE_TASK_FAILED )
    return 0;
  bdLobbyConnection::pump(this);
  v7 = 0;
  if ( this->m_status == BD_NOT_CONNECTED && bdLobbyConnection::recvMessageData(this) && this->m_recvState == BD_READ_COMPLETE )
  {
    HeaderStart = bdTaskByteBuffer::getHeaderStart(this->m_recvMessage.m_ptr);
    m_messageSize = this->m_messageSize;
    v10 = m_messageSize - 1;
    v11 = 0;
    if ( this->m_recvEncryptType )
    {
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdLobby/bdLobbyConnection", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobbyconnection\\bdlobbyconnection.cpp", "bdLobbyConnection::getAuthFramedMessage", 0x261u, "Got Auth reply with encrypt flag set.");
    }
    else
    {
      bdHandleAssert(this->m_recvMessage.m_ptr->m_size == m_messageSize - 2, "m_recvMessage->getSize() == payloadSize", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobbyconnection\\bdlobbyconnection.cpp", "bdLobbyConnection::getAuthFramedMessage", 0x251u, "Invalid recv'd message");
      if ( HeaderStart )
      {
        if ( v10 )
          v11 = *HeaderStart;
        else
          bdLogMessage(BD_LOG_WARNING, "warn/", "byte packer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::removeBasicType", 0xA2u, "Not enough data left to read %u bytes.", 1i64);
      }
      if ( (v10 || !HeaderStart) && this->m_recvMessage.m_ptr )
      {
        *type = v11;
        v12 = (bdBitBuffer *)bdMemory::allocate(0x30ui64);
        if ( v12 )
          bdBitBuffer::bdBitBuffer(v12, this->m_recvMessage.m_ptr->m_data, 8 * this->m_recvMessage.m_ptr->m_size, 1);
        bdReference<bdBitBuffer>::operator=(payload, v12);
        v7 = 1;
      }
      else
      {
        bdLogMessage(BD_LOG_WARNING, "warn/", "bdLobby/bdLobbyConnection", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobbyconnection\\bdlobbyconnection.cpp", "bdLobbyConnection::getAuthFramedMessage", 0x25Cu, "Got malformed auth reply.");
      }
    }
    this->m_recvState = BD_READ_INIT;
  }
  return v7;
}

/*
==============
bdPendingBufferTransfer::getAvail
==============
*/
__int64 bdPendingBufferTransfer::getAvail(bdPendingBufferTransfer *this)
{
  return this->m_txAvail;
}

/*
==============
bdPendingBufferTransfer::getData
==============
*/
unsigned __int8 *bdPendingBufferTransfer::getData(bdPendingBufferTransfer *this)
{
  return this->m_txPtr;
}

/*
==============
bdLobbyConnection::getHandleInfo
==============
*/
void bdLobbyConnection::getHandleInfo(bdLobbyConnection *this, int *handle, bool *read, bool *write, float *timeout)
{
  bdLobbyConnection::Status m_status; 

  if ( (unsigned int)(this->m_status - 1) <= 1 )
  {
    *handle = bdStreamSocket::getHandle(&this->m_socket);
    m_status = this->m_status;
    if ( m_status == BD_NOT_CONNECTED )
    {
      *read = 1;
      m_status = this->m_status;
    }
    if ( m_status == BD_TOO_MANY_TASKS || this->m_outgoingBuffers.m_list.m_size )
      *write = 1;
  }
  else
  {
    *handle = -1;
    *read = 0;
    *write = 0;
  }
  if ( this->m_status == BD_NOT_CONNECTED )
  {
    __asm { vmovaps [rsp+38h+var_18], xmm6 }
    bdStopwatch::getElapsedTimeInSeconds(&this->m_keepAliveTimer);
    __asm
    {
      vmovss  xmm1, cs:__real@44160000
      vsubss  xmm6, xmm1, xmm0
    }
    bdStopwatch::getElapsedTimeInSeconds(&this->m_keepAliveTimer);
    __asm { vmovss  xmm1, cs:__real@44e10000 }
    _RAX = timeout;
    __asm
    {
      vsubss  xmm0, xmm1, xmm0
      vminss  xmm3, xmm0, xmm6
      vxorps  xmm2, xmm2, xmm2
      vcmpltss xmm0, xmm3, xmm2
      vblendvps xmm1, xmm3, xmm2, xmm0
      vmovss  dword ptr [rax], xmm1
      vmovaps xmm6, [rsp+38h+var_18]
      vmovss  [rsp+38h+arg_0], xmm1
    }
  }
  else
  {
    _RAX = timeout;
    __asm
    {
      vmovss  xmm0, cs:__real@bf800000
      vmovss  dword ptr [rax], xmm0
    }
  }
}

/*
==============
bdPendingBufferTransfer::getIsThrottled
==============
*/
_BOOL8 bdPendingBufferTransfer::getIsThrottled(bdPendingBufferTransfer *this)
{
  return this->m_isThrottled;
}

/*
==============
bdLobbyConnection::getMaxSendMessageSizeWithoutOverhead
==============
*/
__int64 bdLobbyConnection::getMaxSendMessageSizeWithoutOverhead(bdLobbyConnection *this)
{
  return this->m_maxSendMessageSize;
}

/*
==============
bdLobbyConnection::getMessageToDispatch200
==============
*/
char bdLobbyConnection::getMessageToDispatch200(bdLobbyConnection *this, unsigned __int8 *type, bdReference<bdByteBuffer> *payload)
{
  bdReference<bdByteBuffer> *v3; 
  unsigned __int8 *v4; 
  char v7; 
  unsigned __int8 *HeaderStart; 
  unsigned __int8 v9; 
  __int64 m_messageSize; 
  bdTaskByteBuffer *m_ptr; 
  unsigned int v12; 
  unsigned int v13; 
  bool v14; 
  unsigned __int8 *v15; 
  bdCypher *m_cypher; 
  char v17; 
  int v18; 
  unsigned int v19; 
  unsigned __int8 iv[24]; 

  v3 = payload;
  v4 = type;
  bdHandleAssert(this->m_isLSGConnection, "m_isLSGConnection", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobbyconnection\\bdlobbyconnection.cpp", "bdLobbyConnection::getMessageToDispatch200", 0x61Au, "LSG-only method called on an Auth connection.");
  if ( this->m_status == BD_HANDLE_TASK_FAILED )
    return 0;
  bdLobbyConnection::pump(this);
  v7 = 0;
  if ( this->m_status == BD_NOT_CONNECTED && bdLobbyConnection::recvMessageData(this) && this->m_recvState == BD_READ_COMPLETE )
  {
    HeaderStart = bdTaskByteBuffer::getHeaderStart(this->m_recvMessage.m_ptr);
    v9 = 0;
    m_messageSize = this->m_messageSize;
    m_ptr = this->m_recvMessage.m_ptr;
    v12 = m_messageSize - 1;
    if ( (unsigned __int8)(this->m_recvEncryptType - 1) > 1u )
    {
      bdHandleAssert(m_ptr->m_size == m_messageSize - 2, "m_recvMessage->getSize() == (m_messageSize - (sizeof(m_recvEncryptType) + sizeof(msgType)))", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobbyconnection\\bdlobbyconnection.cpp", "bdLobbyConnection::getMessageToDispatch200", 0x674u, "Invalid recv'd message");
      if ( HeaderStart )
      {
        if ( v12 )
        {
          v9 = *HeaderStart;
        }
        else
        {
          bdLogMessage(BD_LOG_WARNING, "warn/", "byte packer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::removeBasicType", 0xA2u, "Not enough data left to read %u bytes.", 1i64);
          v4 = type;
          v3 = payload;
        }
      }
      if ( v12 || !HeaderStart )
      {
        *v4 = v9;
        v7 = 1;
        bdReference<bdByteBuffer>::operator=<bdTaskByteBuffer>(v3, &this->m_recvMessage);
LABEL_38:
        this->m_recvState = BD_READ_INIT;
        return v7;
      }
LABEL_37:
      v7 = 0;
      goto LABEL_38;
    }
    v19 = m_messageSize - 5;
    v18 = 0;
    bdHandleAssert(m_ptr->m_size == (_DWORD)m_messageSize - 10, "m_recvMessage->getSize() == (plainTextSize - plaintextHeaderSize)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobbyconnection\\bdlobbyconnection.cpp", "bdLobbyConnection::getMessageToDispatch200", 0x64Au, "Invalid recv'd message");
    if ( HeaderStart )
    {
      if ( v12 >= 4 )
      {
        v13 = *(_DWORD *)HeaderStart;
LABEL_19:
        v14 = v12 >= 4 || !HeaderStart;
        v15 = HeaderStart + 4;
        bdCryptoUtils::calculateInitialVector(v13, iv);
        m_cypher = this->m_cypher;
        if ( m_cypher )
        {
          if ( v14 && m_cypher->decrypt(m_cypher, iv, v15, v15, v19) )
          {
            if ( v15 )
            {
              if ( v12 < 4 )
                bdLogMessage(BD_LOG_WARNING, "warn/", "byte packer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::removeBasicType", 0xA2u, "Not enough data left to read %u bytes.", 4i64);
              else
                v18 = *(_DWORD *)v15;
            }
            if ( v12 >= 4 || !v15 )
            {
              v17 = 1;
              goto LABEL_35;
            }
          }
        }
        else
        {
          bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobby/bdLobbyConnection", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobbyconnection\\bdlobbyconnection.cpp", "bdLobbyConnection::getMessageToDispatch200", 0x658u, "Trying to use a bdLobbyConnection without having called setSessionKey");
        }
        v17 = 0;
LABEL_35:
        if ( v18 == -559038737 )
        {
          if ( v17 )
          {
            if ( v15 )
            {
              if ( v12 < 5 )
                bdLogMessage(BD_LOG_WARNING, "warn/", "byte packer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::removeBasicType", 0xA2u, "Not enough data left to read %u bytes.", 1i64);
              else
                v9 = v15[4];
            }
            if ( v12 >= 5 || !v15 )
            {
              v7 = 1;
              *type = v9;
              bdReference<bdByteBuffer>::operator=<bdTaskByteBuffer>(payload, &this->m_recvMessage);
              goto LABEL_38;
            }
          }
        }
        else
        {
          bdLogMessage(BD_LOG_WARNING, "warn/", "bdLobby/bdLobbyConnection", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobbyconnection\\bdlobbyconnection.cpp", "bdLobbyConnection::getMessageToDispatch200", 0x660u, "Decryption failed.");
        }
        goto LABEL_37;
      }
      bdLogMessage(BD_LOG_WARNING, "warn/", "byte packer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::removeBasicType", 0xA2u, "Not enough data left to read %u bytes.", 4i64);
    }
    v13 = 0;
    goto LABEL_19;
  }
  return v7;
}

/*
==============
bdLobbyConnection::getMessageToDispatch210
==============
*/
bool bdLobbyConnection::getMessageToDispatch210(bdLobbyConnection *this, unsigned __int8 *type, bdReference<bdByteBuffer> *payload)
{
  bool v6; 
  unsigned __int8 *HeaderStart; 
  unsigned __int8 *v8; 
  unsigned int v9; 
  unsigned __int8 v10; 
  bdLobbyConnection::Crypto210State m_cryptoState; 
  bdLobbyConnection::Migration220State m_migrationState; 
  bdByteBuffer *v13; 
  bool v15; 
  unsigned int v16; 
  bdByteBuffer *v17; 
  const char *v18; 
  bdLogMessageType v19; 
  bool v20; 
  unsigned int format; 
  char *v22; 
  __int64 v23; 
  unsigned int newOffset; 
  __int64 v25; 
  bdByteBuffer *dest; 

  v25 = -2i64;
  bdHandleAssert(this->m_isLSGConnection, "m_isLSGConnection", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobbyconnection\\bdlobbyconnection.cpp", "bdLobbyConnection::getMessageToDispatch210", 0x57Cu, "LSG-only method called on an Auth connection.");
  if ( this->m_status == BD_HANDLE_TASK_FAILED )
    return 0;
  bdLobbyConnection::pump(this);
  v6 = 0;
  if ( this->m_status != BD_NOT_CONNECTED || !bdLobbyConnection::recvMessageData(this) || this->m_recvState != BD_READ_COMPLETE )
    return v6;
  HeaderStart = bdTaskByteBuffer::getHeaderStart(this->m_recvMessage.m_ptr);
  v8 = HeaderStart;
  v9 = this->m_messageSize - 1;
  v10 = 0;
  if ( HeaderStart )
  {
    if ( this->m_messageSize == 1 )
      bdLogMessage(BD_LOG_WARNING, "warn/", "byte packer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::removeBasicType", 0xA2u, "Not enough data left to read %u bytes.", 1i64);
    else
      v10 = *HeaderStart;
  }
  if ( v9 || !v8 )
  {
    m_cryptoState = this->m_cryptoState;
    switch ( m_cryptoState )
    {
      case BD_CRYPTO210_WAIT_SERVER_ACK:
        if ( v10 == 0x81 )
        {
          bdLobbyConnection::process210ExpectedServerHeader(this, v8, 1u, v9);
          goto LABEL_54;
        }
        if ( v10 != 4 )
        {
          bdLogMessage(BD_LOG_WARNING, "warn/", "bdLobby/bdLobbyConnection", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobbyconnection\\bdlobbyconnection.cpp", "bdLobbyConnection::getMessageToDispatch210", 0x5ABu, "Received unexpected message while waiting for server_header_ack.  Killing the connection.");
LABEL_53:
          bdLobbyConnection::close(this);
          goto LABEL_54;
        }
        bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobby/bdLobbyConnection", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobbyconnection\\bdlobbyconnection.cpp", "bdLobbyConnection::getMessageToDispatch210", 0x5A3u, "ERR: The DemonWare LSG server being communicated to is too old for this client's protocol.");
        v22 = "ERR: Please contact DemonWare Support. Killing the connection.";
        format = 1445;
        goto LABEL_51;
      case BD_CRYPTO210_WAIT_SERVER_AUTH_DONE:
        if ( v10 == 0x83 )
        {
          newOffset = 1;
          if ( bdBytePacker::removeBuffer(v8, v9, 1u, &newOffset, &dest, 8u) )
          {
            if ( *(bdByteBuffer **)this->m_expectedServerVerify == dest )
            {
              m_migrationState = this->m_migrationState;
              if ( m_migrationState == BD_MIGRATION220_IDLE )
              {
                LODWORD(v23) = this->m_serverSelectedProto;
                bdLogMessage(BD_LOG_INFO, "info/", "bdLobby/bdLobbyConnection", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobbyconnection\\bdlobbyconnection.cpp", "bdLobbyConnection::process210ExpectedServerAuthDone", 0x405u, "Completed authentication procedure. Connected to MatchMaking. Proto version %i", v23);
                m_migrationState = this->m_migrationState;
              }
              this->m_cryptoState = BD_CRYPTO210_READY;
              this->m_cypher210RecvCounter = 1;
              this->m_cypher210SendCounter = 1;
              if ( m_migrationState == BD_MIGRATION220_IDLE )
              {
                v13 = (bdByteBuffer *)bdMemory::allocate(0x38ui64);
                dest = v13;
                if ( v13 )
                  bdByteBuffer::bdByteBuffer(v13, 8u, 0);
                bdReference<bdByteBuffer>::operator=(payload, v13);
                bdByteBuffer::writeUInt64(payload->m_ptr, this->m_cypher210ConnID);
                *type = 4;
                v6 = 1;
                goto LABEL_54;
              }
              if ( m_migrationState == BD_MIGRATION220_RECONNECTED )
              {
                bdLobbyConnection::process220MigrationServerAuthDone(this);
                goto LABEL_54;
              }
              return 0;
            }
            bdLogMessage(BD_LOG_WARNING, "warn/", "bdLobby/bdLobbyConnection", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobbyconnection\\bdlobbyconnection.cpp", "bdLobbyConnection::process210ExpectedServerAuthDone", 0x40Fu, "Server replied with an invalid verify. Killing the connection.");
          }
          else
          {
            bdLogMessage(BD_LOG_WARNING, "warn/", "bdLobby/bdLobbyConnection", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobbyconnection\\bdlobbyconnection.cpp", "bdLobbyConnection::process210ExpectedServerAuthDone", 0x415u, "Failed to parse server_auth_done. Killing the connection.");
          }
          bdLobbyConnection::close(this);
          return 0;
        }
        if ( v10 == 0x84 )
        {
          newOffset = 0;
          v15 = bdLobbyConnection::extract210ExpectedServerError(this, v8, 1u, v9, &newOffset);
          v16 = newOffset;
          LODWORD(v23) = newOffset;
          bdLogMessage(BD_LOG_WARNING, "warn/", "bdLobby/bdLobbyConnection", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobbyconnection\\bdlobbyconnection.cpp", "bdLobbyConnection::getMessageToDispatch210", 0x5CEu, "Server rejected our credentials. Reason: %u. Killing the connection.", v23);
          bdLobbyConnection::close(this);
          if ( !v15 )
            goto LABEL_54;
          v17 = (bdByteBuffer *)bdMemory::allocate(0x38ui64);
          dest = v17;
          if ( v17 )
            bdByteBuffer::bdByteBuffer(v17, 8u, 1);
LABEL_48:
          bdReference<bdByteBuffer>::operator=(payload, v17);
          bdByteBuffer::writeUInt32(payload->m_ptr, v16);
          *type = 3;
          v6 = 1;
          goto LABEL_54;
        }
        v22 = "Received unexpected message while waiting for server_auth_done. Killing the connection.";
        format = 1501;
        break;
      case BD_CRYPTO210_READY:
        if ( v10 == 0x85 )
        {
          v6 = bdLobbyConnection::process210ExpectedRecord(this, v8, 1u, v9, type, payload);
          goto LABEL_54;
        }
        if ( v10 == 0x84 )
        {
          newOffset = 0;
          v20 = bdLobbyConnection::extract210ExpectedServerError(this, v8, 1u, v9, &newOffset);
          v16 = newOffset;
          LODWORD(v23) = newOffset;
          bdLogMessage(BD_LOG_WARNING, "warn/", "bdLobby/bdLobbyConnection", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobbyconnection\\bdlobbyconnection.cpp", "bdLobbyConnection::getMessageToDispatch210", 0x5F2u, "Recved BD_LOBBY_PROTO_SERVER_ERROR %u. Closing the connection.", v23);
          bdLobbyConnection::close(this);
          if ( !v20 )
            goto LABEL_54;
          v17 = (bdByteBuffer *)bdMemory::allocate(0x38ui64);
          dest = v17;
          if ( v17 )
            bdByteBuffer::bdByteBuffer(v17, 8u, 1);
          goto LABEL_48;
        }
        v22 = "Received unexpected message while in READY state.";
        format = 1537;
        break;
      default:
        v22 = "Invalid crypto state. Connection unusuable.";
        format = 1543;
LABEL_51:
        v18 = (const char *)&other;
        v19 = BD_LOG_ERROR;
        goto LABEL_52;
    }
    v18 = "warn/";
    v19 = BD_LOG_WARNING;
LABEL_52:
    bdLogMessage(v19, v18, "bdLobby/bdLobbyConnection", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobbyconnection\\bdlobbyconnection.cpp", "bdLobbyConnection::getMessageToDispatch210", format, v22);
    goto LABEL_53;
  }
  bdLogMessage(BD_LOG_WARNING, "warn/", "bdLobby/bdLobbyConnection", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobbyconnection\\bdlobbyconnection.cpp", "bdLobbyConnection::getMessageToDispatch210", 0x60Du, "Failed to read frame type.");
  bdLobbyConnection::close(this);
  v6 = 0;
LABEL_54:
  this->m_recvState = BD_READ_INIT;
  return v6;
}

/*
==============
bdLobbyConnection::getMessageToDispatch
==============
*/
bool bdLobbyConnection::getMessageToDispatch(bdLobbyConnection *this, unsigned __int8 *type, bdReference<bdByteBuffer> *payload)
{
  bdHandleAssert(this->m_isLSGConnection, "m_isLSGConnection", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobbyconnection\\bdlobbyconnection.cpp", "bdLobbyConnection::getMessageToDispatch", 0x26Bu, "LSG-only method called on an Auth connection.");
  return bdLobbyConnection::getMessageToDispatch210(this, type, payload);
}

/*
==============
bdLobbyConnection::getReceiveBufferSize
==============
*/
__int64 bdLobbyConnection::getReceiveBufferSize(bdLobbyConnection *this)
{
  return this->m_maxRecvMessageSize;
}

/*
==============
bdLobbyConnection::getSendMessageOverheadSize
==============
*/
__int64 bdLobbyConnection::getSendMessageOverheadSize()
{
  return 0i64;
}

/*
==============
bdLobbyConnection::getStatus
==============
*/
__int64 bdLobbyConnection::getStatus(bdLobbyConnection *this)
{
  bdLobbyConnection::Status m_status; 

  m_status = this->m_status;
  if ( this->m_migrationState )
  {
    if ( (unsigned int)(m_status - 1) > 1 )
      return (unsigned int)m_status;
    return 2i64;
  }
  if ( m_status != BD_NOT_CONNECTED )
    return (unsigned int)m_status;
  if ( this->m_cryptoState == BD_CRYPTO210_READY )
    return 2i64;
  return 1i64;
}

/*
==============
bdLobbyConnection::getThrottleBucket
==============
*/
bdTokenBucket *bdLobbyConnection::getThrottleBucket(bdLobbyConnection *this)
{
  return &this->m_throttleBucket;
}

/*
==============
bdLobbyConnection::isConnectionMigrationSupported
==============
*/
bool bdLobbyConnection::isConnectionMigrationSupported(bdLobbyConnection *this)
{
  return this->m_serverSelectedProto >= 0xDC;
}

/*
==============
bdLobbyConnection::onTcpConnect
==============
*/
void bdLobbyConnection::onTcpConnect(bdLobbyConnection *this, const bool success)
{
  bdLobbyConnectionListener *m_connectionListener; 
  bdLobbyConnectionListener_vtbl *v4; 
  bdLobbyConnectionListener *v5; 
  bdLobbyConnectionListener_vtbl *v6; 
  bdLobbyConnection *v7; 
  bdLobbyConnection *v8; 

  if ( success )
  {
    bdStopwatch::reset(&this->m_keepAliveTimer);
    bdStopwatch::start(&this->m_keepAliveTimer);
    bdStopwatch::reset(&this->m_lastReceivedTimer);
    bdStopwatch::start(&this->m_lastReceivedTimer);
    m_connectionListener = this->m_connectionListener;
    if ( m_connectionListener && this->m_migrationState == BD_MIGRATION220_IDLE )
    {
      v4 = m_connectionListener->__vftable;
      v7 = this;
      _InterlockedExchangeAdd((volatile signed __int32 *)&this->m_refCount, 1u);
      ((void (__fastcall *)(bdLobbyConnectionListener *, bdLobbyConnection **))v4->onConnect)(m_connectionListener, &v7);
    }
    if ( this->m_isLSGConnection && !bdLobbyConnection::send210ClientHeader(this) )
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobby/bdLobbyConnection", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobbyconnection\\bdlobbyconnection.cpp", "bdLobbyConnection::onTcpConnect", 0x82Bu, "Failed to serialize and send 210 client header.");
  }
  else
  {
    v5 = this->m_connectionListener;
    if ( v5 )
    {
      v6 = v5->__vftable;
      v8 = this;
      _InterlockedExchangeAdd((volatile signed __int32 *)&this->m_refCount, 1u);
      ((void (__fastcall *)(bdLobbyConnectionListener *, bdLobbyConnection **))v6->onConnectFailed)(v5, &v8);
    }
  }
}

/*
==============
bdLobbyConnection::parse220MigrateAck
==============
*/
bool bdLobbyConnection::parse220MigrateAck(bdLobbyConnection *this, unsigned __int8 *const readPtr, const unsigned int validBytes, unsigned int *offset)
{
  unsigned int v9; 
  unsigned int v10; 
  unsigned __int8 v11; 
  unsigned int v12; 
  unsigned __int8 v13; 
  char v14; 
  __int64 v20; 
  unsigned __int16 v21; 
  unsigned int v22; 
  unsigned int v23; 
  char v24; 
  bool result; 
  __int64 v30; 
  unsigned __int8 var[4]; 
  unsigned int newOffset[3]; 
  bdAddr v33; 
  char v34[32]; 
  char str[32]; 

  _R13 = this;
  if ( this->m_migrationState != BD_MIGRATION220_INIT_ACK_SENT )
    goto LABEL_16;
  v9 = *offset;
  var[0] = 0;
  if ( !bdBytePacker::removeBasicType<unsigned char>(readPtr, validBytes, v9, offset, var) || var[0] != 1 || (v10 = *offset, var[0] = 0, !bdBytePacker::removeBasicType<unsigned char>(readPtr, validBytes, v10, offset, var)) || (v11 = var[0], (unsigned __int8)(var[0] - 1) > 1u) || (v12 = *offset, var[0] = 0, !bdBytePacker::removeBasicType<unsigned char>(readPtr, validBytes, v12, offset, var)) || (v13 = var[0]) != 0 && v11 != 2 )
  {
LABEL_16:
    v14 = 0;
    goto LABEL_17;
  }
  v14 = 1;
  if ( v11 == 2 )
  {
    bdAddr::bdAddr(&v33);
    newOffset[0] = *offset;
    if ( bdAddr::deserialize(&v33, readPtr, validBytes, newOffset[0], newOffset) && newOffset[0] - *offset == v13 )
    {
      *offset = newOffset[0];
      str[0] = 0;
      bdAddr::toString(&v33, str, 0x20ui64);
      v34[0] = 0;
      bdAddr::toString(&_R13->m_lobbyMigrationAddr, v34, 0x20ui64);
      bdLogMessage(BD_LOG_INFO, "info/", "bdLobby/bdLobbyConnection", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobbyconnection\\bdlobbyconnection.cpp", "bdLobbyConnection::parse220MigrateAck", 0x2D7u, "Asked to migrate to a new address %s (old %s)", str, v34);
      __asm
      {
        vmovups ymm0, ymmword ptr [rsp+190h+var_130.m_address.inUn]
        vmovups ymm1, ymmword ptr [rbp+90h+var_130.m_address.inUn+20h]
        vmovups ymmword ptr [r13+2E0h], ymm0
        vmovups ymm0, ymmword ptr [rbp+90h+var_130.m_address.inUn+40h]
        vmovups ymmword ptr [r13+300h], ymm1
        vmovups ymm1, ymmword ptr [rbp+90h+var_130.m_address.inUn+60h]
        vmovups ymmword ptr [r13+320h], ymm0
        vmovups xmm0, xmmword ptr [rbp+90h+var_130.m_relayRoute.m_relayID]
        vmovups ymmword ptr [r13+340h], ymm1
        vmovsd  xmm1, qword ptr [rbp+90h+var_130.m_type]
        vmovups xmmword ptr [r13+360h], xmm0
        vmovsd  qword ptr [r13+370h], xmm1
      }
      goto LABEL_17;
    }
    goto LABEL_16;
  }
  if ( v11 == 1 )
  {
    if ( !var[0] )
      goto LABEL_18;
    v14 = 0;
  }
LABEL_17:
  if ( !v14 )
  {
LABEL_27:
    v24 = 0;
    goto LABEL_28;
  }
LABEL_18:
  v20 = *offset;
  v21 = 0;
  v22 = v20 + 2;
  *offset = v20 + 2;
  if ( readPtr )
  {
    if ( v22 > validBytes )
    {
      bdLogMessage(BD_LOG_WARNING, "warn/", "byte packer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::removeBasicType", 0xA2u, "Not enough data left to read %u bytes.", 2i64);
      v21 = 0;
    }
    else
    {
      v21 = *(_WORD *)&readPtr[v20];
    }
  }
  if ( v22 > validBytes && readPtr )
    goto LABEL_27;
  if ( v21 > 0x400u )
    goto LABEL_27;
  v23 = v21;
  if ( !bdBytePacker::removeBuffer(readPtr, validBytes, *offset, offset, _R13->m_migrationTicket, v21) )
    goto LABEL_27;
  v24 = 1;
  _R13->m_migrationTicketLen = v23;
LABEL_28:
  newOffset[0] = 0;
  if ( v24 && bdBytePacker::removeBasicType<unsigned int>(readPtr, validBytes, *offset, offset, newOffset) )
  {
    result = 1;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rcx
      vmulss  xmm1, xmm0, cs:__real@3a83126f
      vminss  xmm2, xmm1, cs:__real@41f00000
      vmovss  dword ptr [r13+794h], xmm2
    }
  }
  else
  {
    LODWORD(v30) = *offset;
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdLobby/bdLobbyConnection", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobbyconnection\\bdlobbyconnection.cpp", "bdLobbyConnection::parse220MigrateAck", 0x2F9u, "Failed to parse a MIGRATE_ACK message. Last offset %u.", v30);
    return 0;
  }
  return result;
}

/*
==============
bdLobbyConnection::prepare2x0ClientAuthAndDeriveCrypto
==============
*/
__int64 bdLobbyConnection::prepare2x0ClientAuthAndDeriveCrypto(bdLobbyConnection *this, unsigned __int8 *const replyPacketPtr, unsigned int *replyPacketOffset, const unsigned int replyPacketMaxSize, const unsigned __int8 *const serverHeaderAckReadPtr, const unsigned int serverHeaderAckReadOffset, const unsigned int serverHeaderAckEndOffset)
{
  __int64 v11; 
  unsigned int v12; 
  bool v13; 
  bdBitBuffer *v14; 
  __int64 v15; 
  unsigned int v16; 
  bool v17; 
  char v18; 
  bdLobbyConnection::Migration220State m_migrationState; 
  __int64 v20; 
  unsigned int v21; 
  bool v22; 
  unsigned int v23; 
  unsigned int v24; 
  char v25; 
  unsigned int v26; 
  bool v27; 
  bdBitBuffer *v28; 
  bdBitBuffer *v29; 
  int m_titleID; 
  unsigned int m_IVSeed; 
  char v32; 
  bool appended; 
  unsigned int v34; 
  unsigned int v35; 
  char v36; 
  unsigned int v37; 
  unsigned int v38; 
  unsigned int v39; 
  char v40; 
  bool v41; 
  const unsigned __int8 *m_sessionKey; 
  char v43; 
  bool v44; 
  bdCypherAES *m_cypher210Client; 
  bdCypherAES *v49; 
  bdCypherAES *v50; 
  bdCypherAES *v51; 
  bool v52; 
  bdCypherAES *m_cypher210Server; 
  bdCypherAES *v54; 
  bdBitBuffer *v55; 
  unsigned __int8 v56; 
  unsigned int offset; 
  unsigned __int8 var; 
  unsigned __int8 bits; 
  char v61; 
  unsigned __int8 v62; 
  unsigned int v63; 
  bdBitBuffer *v64; 
  unsigned int m_maxRecvMessageSize; 
  unsigned int resultSize; 
  char v67; 
  int v68; 
  unsigned int v69; 
  const unsigned __int8 *v70; 
  int v71; 
  bdBitBuffer *v72; 
  __int64 v73; 
  bdHashSHA1 v74; 
  char src[8]; 
  unsigned __int8 result[20]; 
  unsigned __int8 outPRK[20]; 
  __int128 buffer; 
  int v80; 
  int v82; 
  char v83[16]; 
  char v84[24]; 
  char outBuffer[32]; 
  int dest[276]; 
  unsigned int serverHeaderAckEndOffseta; 

  v73 = -2i64;
  _RSI = this;
  v70 = serverHeaderAckReadPtr;
  v63 = serverHeaderAckReadOffset;
  v11 = *replyPacketOffset;
  v68 = v11;
  v12 = v11 + 4;
  v69 = v11 + 4;
  *replyPacketOffset = v11 + 4;
  v13 = (int)v11 + 4 <= replyPacketMaxSize || !replyPacketPtr;
  bdHandleAssert(v13, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 4i64);
  v14 = NULL;
  if ( !replyPacketPtr )
  {
LABEL_8:
    if ( v12 <= replyPacketMaxSize )
      goto LABEL_10;
    goto LABEL_9;
  }
  if ( v12 <= replyPacketMaxSize )
  {
    v71 = 0;
    *(_DWORD *)&replyPacketPtr[v11] = 0;
    goto LABEL_8;
  }
LABEL_9:
  if ( replyPacketPtr )
  {
LABEL_19:
    v18 = 0;
    goto LABEL_21;
  }
LABEL_10:
  v15 = *replyPacketOffset;
  v16 = v15 + 1;
  *replyPacketOffset = v15 + 1;
  v17 = (int)v15 + 1 <= replyPacketMaxSize || !replyPacketPtr;
  bdHandleAssert(v17, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 1i64);
  if ( !replyPacketPtr )
  {
LABEL_17:
    if ( v16 <= replyPacketMaxSize )
      goto LABEL_20;
    goto LABEL_18;
  }
  if ( v16 <= replyPacketMaxSize )
  {
    v67 = -85;
    replyPacketPtr[v15] = -85;
    goto LABEL_17;
  }
LABEL_18:
  if ( replyPacketPtr )
    goto LABEL_19;
LABEL_20:
  v18 = 1;
LABEL_21:
  m_migrationState = _RSI->m_migrationState;
  if ( m_migrationState != BD_MIGRATION220_RECONNECTED )
  {
    if ( !v18 )
      goto LABEL_36;
    bdHandleAssert(m_migrationState == BD_MIGRATION220_IDLE, "m_migrationState == BD_MIGRATION220_IDLE", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobbyconnection\\bdlobbyconnection.cpp", "bdLobbyConnection::prepare2x0ClientAuthAndDeriveCrypto", 0x447u, "Unexpected migration state.");
    v72 = NULL;
    bits = 7;
    v28 = (bdBitBuffer *)bdMemory::allocate(0x30ui64);
    v64 = v28;
    if ( v28 )
    {
      bdBitBuffer::bdBitBuffer(v28, &bits, 8u, 1);
      v14 = v29;
    }
    v72 = v14;
    if ( !v14 )
      goto LABEL_50;
    _InterlockedExchangeAdd((volatile signed __int32 *)&v14->m_refCount, 1u);
    bdBitBuffer::setTypeCheck(v14, 0);
    bdBitBuffer::writeDataType(v14, BD_BB_BOOL_TYPE);
    v61 = -1;
    bdBitBuffer::writeBits(v14, &v61, 1u);
    bdBitBuffer::setTypeCheck(v14, 1);
    m_titleID = _RSI->m_authInfo.m_titleID;
    bdBitBuffer::writeDataType(v14, BD_BB_UNSIGNED_INTEGER32_TYPE);
    m_maxRecvMessageSize = m_titleID;
    bdBitBuffer::writeBits(v14, &m_maxRecvMessageSize, 0x20u);
    m_IVSeed = _RSI->m_authInfo.m_IVSeed;
    bdBitBuffer::writeDataType(v14, BD_BB_UNSIGNED_INTEGER32_TYPE);
    LODWORD(v64) = m_IVSeed;
    bdBitBuffer::writeBits(v14, &v64, 0x20u);
    bdBitBuffer::writeBits(v14, _RSI->m_authInfo.m_data, 0x400u);
    v62 = -126;
    if ( !bdBytePacker::appendBasicType<unsigned char>(replyPacketPtr, replyPacketMaxSize, *replyPacketOffset, replyPacketOffset, &v62) )
      goto LABEL_50;
    if ( bdBytePacker::appendBuffer(replyPacketPtr, replyPacketMaxSize, *replyPacketOffset, replyPacketOffset, v14->m_data.m_data, v14->m_data.m_size) && bdBytePacker::skipBytes(replyPacketPtr, replyPacketMaxSize, *replyPacketOffset, replyPacketOffset, 8u) )
      v32 = 1;
    else
LABEL_50:
      v32 = 0;
    if ( v14 && !_InterlockedDecrement((volatile signed __int32 *)&v14->m_refCount) )
      ((void (__fastcall *)(bdBitBuffer *, __int64))v14->~bdReferencable)(v14, 1i64);
    v14 = NULL;
    if ( !v32 )
      goto LABEL_36;
    goto LABEL_55;
  }
  if ( !v18 )
    goto LABEL_36;
  var = -112;
  if ( !bdBytePacker::appendBasicType<unsigned char>(replyPacketPtr, replyPacketMaxSize, *replyPacketOffset, replyPacketOffset, &var) )
    goto LABEL_36;
  resultSize = _RSI->m_migrationTicketLen;
  if ( resultSize >= 0x400 )
    goto LABEL_36;
  v20 = *replyPacketOffset;
  v21 = v20 + 2;
  *replyPacketOffset = v20 + 2;
  v22 = (int)v20 + 2 <= replyPacketMaxSize || !replyPacketPtr;
  bdHandleAssert(v22, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 2i64);
  if ( replyPacketPtr )
  {
    if ( v21 > replyPacketMaxSize )
      goto LABEL_33;
    *(_WORD *)&replyPacketPtr[v20] = resultSize;
  }
  if ( v21 > replyPacketMaxSize )
  {
LABEL_33:
    if ( replyPacketPtr )
    {
LABEL_36:
      v23 = *replyPacketOffset;
      v24 = v69;
LABEL_37:
      v25 = 0;
      goto LABEL_38;
    }
  }
  if ( !bdBytePacker::appendBuffer(replyPacketPtr, replyPacketMaxSize, *replyPacketOffset, replyPacketOffset, _RSI->m_migrationTicket, _RSI->m_migrationTicketLen) || !bdBytePacker::skipBytes(replyPacketPtr, replyPacketMaxSize, *replyPacketOffset, replyPacketOffset, 8u) )
    goto LABEL_36;
LABEL_55:
  v23 = *replyPacketOffset;
  v24 = v69;
  if ( *replyPacketOffset <= v69 )
    goto LABEL_37;
  v25 = 1;
LABEL_38:
  v26 = v23 - v68 - 4;
  if ( !v25 )
    goto LABEL_68;
  v27 = v24 <= replyPacketMaxSize || !replyPacketPtr;
  bdHandleAssert(v27, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 4i64);
  if ( replyPacketPtr )
  {
    if ( v24 > replyPacketMaxSize )
      goto LABEL_62;
    *(_DWORD *)&replyPacketPtr[v68] = v26;
  }
  if ( v24 > replyPacketMaxSize )
  {
LABEL_62:
    if ( !replyPacketPtr )
      goto LABEL_63;
LABEL_68:
    offset = 0;
LABEL_69:
    v34 = v63;
LABEL_70:
    v36 = 0;
    v35 = serverHeaderAckEndOffset;
    goto LABEL_71;
  }
LABEL_63:
  bdHandleAssert(1, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 4i64);
  dest[0] = 210;
  LODWORD(v64) = 4;
  offset = 8;
  bdHandleAssert(1, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 4i64);
  *(int *)((char *)dest + (unsigned int)v64) = 220;
  m_maxRecvMessageSize = _RSI->m_maxRecvMessageSize;
  LODWORD(v64) = offset;
  offset += 4;
  bdHandleAssert(offset <= 0x44A, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 4i64);
  if ( offset > 0x44A )
    goto LABEL_69;
  *(int *)((char *)dest + (unsigned int)v64) = m_maxRecvMessageSize;
  appended = bdBytePacker::appendBuffer(dest, 0x44Au, offset, &offset, _RSI->m_clientNonce, 8u);
  v34 = v63;
  if ( !appended )
    goto LABEL_70;
  v35 = serverHeaderAckEndOffset;
  if ( serverHeaderAckEndOffset <= v63 )
    goto LABEL_70;
  v36 = 1;
LABEL_71:
  serverHeaderAckEndOffseta = v35 - v34;
  m_maxRecvMessageSize = v35 - v34 + 2;
  if ( !v36 )
    goto LABEL_79;
  LODWORD(v64) = offset;
  v37 = offset + 4;
  offset = v37;
  bdHandleAssert(v37 <= 0x44A, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 4i64);
  if ( v37 > 0x44A )
    goto LABEL_79;
  *(int *)((char *)dest + (unsigned int)v64) = m_maxRecvMessageSize;
  LODWORD(v64) = offset;
  v38 = offset + 1;
  offset = v38;
  bdHandleAssert(v38 <= 0x44A, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 1i64);
  if ( v38 > 0x44A )
    goto LABEL_79;
  *((_BYTE *)dest + (unsigned int)v64) = -85;
  LODWORD(v64) = offset;
  v39 = offset + 1;
  offset = v39;
  bdHandleAssert(v39 <= 0x44A, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 1i64);
  if ( v39 <= 0x44A && (*((_BYTE *)dest + (unsigned int)v64) = -127, bdBytePacker::appendBuffer(dest, 0x44Au, offset, &offset, &v70[v63], serverHeaderAckEndOffseta)) && v26 > 0xC && bdBytePacker::appendBuffer(dest, 0x44Au, offset, &offset, &replyPacketPtr[v68], v26 - 4) )
    v40 = 1;
  else
LABEL_79:
    v40 = 0;
  bdHashSHA1::bdHashSHA1(&v74);
  resultSize = 20;
  v41 = v40 && bdHashSHA1::hash(&v74, (const unsigned __int8 *)dest, offset, result, &resultSize);
  bdHandleAssert(resultSize == 20, "hashSize == BD_SHA1_HASH_SIZE", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobbyconnection\\bdlobbyconnection.cpp", "bdLobbyConnection::prepare2x0ClientAuthAndDeriveCrypto", 0x4B7u, "SHA1 Result size unexpected");
  if ( _RSI->m_authInfo.m_authSessionKeyKDF )
  {
    if ( !v41 || !bdCryptoUtils::hkdfExpand(_RSI->m_sessionKey, 0x18u, BD_AUTH_TRAFFIC_SIGNING_KEY_3, 0x126u, outBuffer, 0x18u, BD_HASH_SHA1) )
      goto LABEL_92;
    m_sessionKey = (const unsigned __int8 *)outBuffer;
  }
  else
  {
    if ( !v41 )
      goto LABEL_92;
    m_sessionKey = _RSI->m_sessionKey;
  }
  if ( bdCryptoUtils::hkdfExtractSHA1((const unsigned __int8 (*)[20])result, m_sessionKey, 0x18u, (unsigned __int8 (*)[20])outPRK) )
  {
    v43 = 1;
    goto LABEL_93;
  }
LABEL_92:
  v43 = 0;
LABEL_93:
  bdCryptoUtils::zeroBuffer(result, 0x14ui64);
  bdHashSHA1::~bdHashSHA1(&v74);
  v44 = v43 && bdCryptoUtils::hkdfExpand(outPRK, 0x14u, "CLIENTCHAL", 0xAu, src, 0x10u, BD_HASH_SHA1) && bdBytePacker::rewindBytes(replyPacketPtr, replyPacketMaxSize, *replyPacketOffset, replyPacketOffset, 8u) && bdBytePacker::appendBuffer(replyPacketPtr, replyPacketMaxSize, *replyPacketOffset, replyPacketOffset, src, 8u);
  __asm
  {
    vmovsd  xmm0, [rbp+500h+var_550]
    vmovsd  qword ptr [rsi+28Ch], xmm0
  }
  bdCryptoUtils::zeroBuffer(src, 0x10ui64);
  if ( !v44 || !bdCryptoUtils::hkdfExpand(outPRK, 0x14u, "BDDATA", 6u, &buffer, 0x48u, BD_HASH_SHA1) )
    goto LABEL_113;
  __asm
  {
    vmovups xmm0, [rbp+500h+buffer]
    vmovups xmmword ptr [rsi+2A8h], xmm0
  }
  *(_DWORD *)&_RSI->m_cypher210ClientMacKey[16] = v80;
  __asm
  {
    vmovups xmm0, [rbp+500h+var_4FC]
    vmovups xmmword ptr [rsi+2BCh], xmm0
  }
  *(_DWORD *)&_RSI->m_cypher210ServerMacKey[16] = v82;
  m_cypher210Client = _RSI->m_cypher210Client;
  if ( m_cypher210Client )
  {
    ((void (__fastcall *)(bdCypherAES *, __int64))m_cypher210Client->~bdCypher)(m_cypher210Client, 1i64);
    _RSI->m_cypher210Client = NULL;
  }
  v49 = (bdCypherAES *)bdMemory::allocate(0x20ui64);
  v70 = (const unsigned __int8 *)v49;
  if ( v49 )
  {
    bdCypherAES::bdCypherAES(v49);
    v51 = v50;
  }
  else
  {
    v51 = NULL;
  }
  _RSI->m_cypher210Client = v51;
  v52 = v51->init(v51, (const unsigned __int8 *)v83, 16u);
  m_cypher210Server = _RSI->m_cypher210Server;
  if ( m_cypher210Server )
  {
    ((void (__fastcall *)(bdCypherAES *, __int64))m_cypher210Server->~bdCypher)(m_cypher210Server, 1i64);
    _RSI->m_cypher210Server = NULL;
  }
  v54 = (bdCypherAES *)bdMemory::allocate(0x20ui64);
  v70 = (const unsigned __int8 *)v54;
  if ( v54 )
  {
    bdCypherAES::bdCypherAES(v54);
    v14 = v55;
  }
  _RSI->m_cypher210Server = (bdCypherAES *)v14;
  if ( v52 && ((unsigned __int8 (__fastcall *)(bdBitBuffer *, char *, __int64))v14->__vftable[1].~bdReferencable)(v14, v84, 16i64) )
    v56 = 1;
  else
LABEL_113:
    v56 = 0;
  bdCryptoUtils::zeroBuffer(&buffer, 0x48ui64);
  return v56;
}

/*
==============
bdLobbyConnection::process210ExpectedRecord
==============
*/
char bdLobbyConnection::process210ExpectedRecord(bdLobbyConnection *this, unsigned __int8 *const readPtr, const unsigned int readOffset, const unsigned int validBytes, unsigned __int8 *returnMsgType, bdReference<bdByteBuffer> *returnPayload)
{
  __int64 v6; 
  unsigned int v9; 
  unsigned int v10; 
  bool v11; 
  bool v12; 
  unsigned __int8 *v13; 
  bool v14; 
  unsigned int v17; 
  unsigned int m_cypher210RecvCounter; 
  const char *v19; 
  bdTaskByteBuffer *m_ptr; 
  unsigned __int64 m_taskData; 
  bool v22; 
  const char *v23; 
  unsigned int v24; 
  unsigned int v25; 
  unsigned int v26; 
  unsigned __int8 v27; 
  unsigned int v28; 
  unsigned int v29; 
  unsigned int v30; 
  unsigned int length; 
  unsigned int newOffset; 
  unsigned int v34; 
  const char *v35; 
  unsigned int v36; 
  unsigned int m_taskDataSize; 
  unsigned __int8 *data; 
  bdReference<bdByteBuffer> *v39; 
  unsigned __int8 *v40; 
  bdHMacSHA1 v41; 
  __int64 v42; 
  unsigned __int8 buffer2[8]; 
  char dest[16]; 
  unsigned __int8 digest[24]; 

  v42 = -2i64;
  v6 = validBytes;
  v40 = returnMsgType;
  v39 = returnPayload;
  v35 = "???";
  v34 = 0;
  length = 0;
  v9 = readOffset + 4;
  v10 = readOffset + 4;
  newOffset = readOffset + 4;
  if ( readPtr )
  {
    if ( v9 > validBytes )
    {
      bdLogMessage(BD_LOG_WARNING, "warn/", "byte packer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::removeBasicType", 0xA2u, "Not enough data left to read %u bytes.", 4i64);
      v10 = newOffset;
    }
    else
    {
      length = *(_DWORD *)&readPtr[readOffset];
    }
  }
  v12 = 0;
  if ( v9 <= (unsigned int)v6 || !readPtr )
  {
    v11 = bdBytePacker::removeBuffer(readPtr, v6, v10, &newOffset, dest, 0x10u);
    v10 = newOffset;
    if ( v11 )
      v12 = 1;
  }
  v13 = &readPtr[v10];
  v14 = v12 && (unsigned int)v6 > 8;
  _R13 = &readPtr[v6 - 8];
  __asm
  {
    vmovsd  xmm0, qword ptr [r13+0]
    vmovsd  qword ptr [rbp+47h+buffer2], xmm0
  }
  if ( v14 )
  {
    if ( _R13 > v13 && (((((_R13 - v13) >> 63) & 0xF) + (unsigned __int8)_R13 - (unsigned __int8)v13) & 0xF) == (((_R13 - v13) >> 63) & 0xF) && _R13 - v13 < 0xFFFFFF )
    {
      v14 = 1;
    }
    else
    {
      v14 = 0;
      v35 = "Bad frame/payload size";
    }
  }
  v17 = (_DWORD)_R13 - (_DWORD)v13;
  if ( !v14 )
    goto LABEL_64;
  m_cypher210RecvCounter = this->m_cypher210RecvCounter;
  this->m_cypher210RecvCounter = m_cypher210RecvCounter + 1;
  if ( length != m_cypher210RecvCounter )
  {
    v14 = 0;
    v19 = "Bad recv counter";
LABEL_65:
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdLobby/bdLobbyConnection", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobbyconnection\\bdlobbyconnection.cpp", "bdLobbyConnection::process210ExpectedRecord", 0x3D0u, "Received corrupted record. Reason: %s", v19);
    bdLobbyConnection::close(this);
    return v14;
  }
  data = bdTaskByteBuffer::getHeaderStart(this->m_recvMessage.m_ptr) - 5;
  bdHandleAssert(data >= this->m_recvMessage.m_ptr->m_taskData, "bufferFrameStart >= m_recvMessage->getStartOfTaskDataBuffer()", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobbyconnection\\bdlobbyconnection.cpp", "bdLobbyConnection::process210ExpectedRecord", 0x380u, "Pointer arith fail.");
  m_ptr = this->m_recvMessage.m_ptr;
  m_taskData = (unsigned __int64)m_ptr->m_taskData;
  m_taskDataSize = m_ptr->m_taskDataSize;
  v36 = this->m_messageSize - 4;
  bdHandleAssert(v36 <= m_taskDataSize, "endPtrInRange", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobbyconnection\\bdlobbyconnection.cpp", "bdLobbyConnection::process210ExpectedRecord", 0x383u, "Pointer arith fail.");
  v22 = (unsigned __int64)data >= m_taskData && v36 <= m_taskDataSize;
  bdHandleAssert(1, "sizeof(m_cypher210ServerMacKey) == 20", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobbyconnection\\bdlobbyconnection.cpp", "bdLobbyConnection::process210ExpectedRecord", 0x386u, "Unexpected HMAC key size.");
  bdHMacSHA1::bdHMacSHA1(&v41, this->m_cypher210ServerMacKey, 0x14u);
  if ( v22 && bdHMacSHA1::process(&v41, data, this->m_messageSize - 4) )
  {
    length = 20;
    if ( bdHMacSHA1::getData(&v41, digest, &length) )
    {
      v14 = 1;
      goto LABEL_33;
    }
  }
  else
  {
    length = 20;
  }
  v14 = 0;
LABEL_33:
  bdHandleAssert(length == 20, "sz == hmacFullResultSize", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobbyconnection\\bdlobbyconnection.cpp", "bdLobbyConnection::process210ExpectedRecord", 0x38Du, "HMAC produced unexpected data size?");
  v23 = "HMAC calculation";
  if ( v14 )
    v23 = v35;
  v35 = v23;
  bdHMacSHA1::~bdHMacSHA1(&v41);
  if ( !v14 )
  {
LABEL_64:
    v19 = v35;
    goto LABEL_65;
  }
  if ( !bdCryptoUtils::constTimeCompare(digest, buffer2, 8ui64) )
  {
    v14 = 0;
    v19 = "HMAC mismatch";
    goto LABEL_65;
  }
  if ( !this->m_cypher210Server->decrypt(this->m_cypher210Server, (const unsigned __int8 *)dest, &readPtr[v10], &readPtr[v10], v17) )
  {
    length = v10;
LABEL_63:
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdLobby/bdLobbyConnection", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobbyconnection\\bdlobbyconnection.cpp", "bdLobbyConnection::process210ExpectedRecord", 0x3CAu, "Failed to decrypt the message.");
    bdLobbyConnection::close(this);
    return 0;
  }
  v24 = v10 + 4;
  v25 = v10 + 4;
  length = v10 + 4;
  if ( !readPtr )
    goto LABEL_43;
  if ( v24 > (unsigned int)v6 )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "byte packer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::removeBasicType", 0xA2u, "Not enough data left to read %u bytes.", 4i64);
    v25 = length;
LABEL_43:
    v26 = 0;
    goto LABEL_44;
  }
  v26 = *(_DWORD *)&readPtr[v10];
  v34 = v26;
LABEL_44:
  if ( v24 > (unsigned int)v6 && readPtr || v26 > v17 )
    goto LABEL_63;
  v27 = 0;
  v28 = v25 + 1;
  v29 = v25 + 1;
  length = v25 + 1;
  if ( readPtr )
  {
    if ( v28 > (unsigned int)v6 )
    {
      bdLogMessage(BD_LOG_WARNING, "warn/", "byte packer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::removeBasicType", 0xA2u, "Not enough data left to read %u bytes.", 1i64);
      v29 = length;
    }
    else
    {
      v27 = readPtr[v25];
    }
    v26 = v34;
  }
  if ( v28 > (unsigned int)v6 && readPtr )
    goto LABEL_63;
  v30 = v26 + v29;
  if ( v26 + v29 > (unsigned int)v6 )
    goto LABEL_63;
  if ( v27 == 0x87 )
  {
    if ( this->m_serverSelectedProto >= 0xDC )
    {
      bdLobbyConnection::process220MigrateInit(this, readPtr, v30, &length);
      return 0;
    }
  }
  else if ( v27 == 0x89 && this->m_serverSelectedProto >= 0xDC )
  {
    bdLobbyConnection::process220MigrateAck(this, readPtr, v30, &length);
    return 0;
  }
  bdTaskByteBuffer::adjustPayload(this->m_recvMessage.m_ptr, &readPtr[v29], v26);
  bdReference<bdByteBuffer>::operator=<bdTaskByteBuffer>(v39, &this->m_recvMessage);
  *v40 = v27;
  return 1;
}

/*
==============
bdLobbyConnection::process210ExpectedServerAuthDone
==============
*/
bool bdLobbyConnection::process210ExpectedServerAuthDone(bdLobbyConnection *this, const unsigned __int8 *const readPtr, const unsigned int readOffset, const unsigned int validBytes)
{
  bool result; 
  unsigned int m_serverSelectedProto; 
  unsigned int newOffset; 
  __int64 dest; 

  newOffset = readOffset;
  if ( !bdBytePacker::removeBuffer(readPtr, validBytes, readOffset, &newOffset, &dest, 8u) )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdLobby/bdLobbyConnection", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobbyconnection\\bdlobbyconnection.cpp", "bdLobbyConnection::process210ExpectedServerAuthDone", 0x415u, "Failed to parse server_auth_done. Killing the connection.");
LABEL_8:
    bdLobbyConnection::close(this);
    return 0;
  }
  if ( *(_QWORD *)this->m_expectedServerVerify != dest )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdLobby/bdLobbyConnection", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobbyconnection\\bdlobbyconnection.cpp", "bdLobbyConnection::process210ExpectedServerAuthDone", 0x40Fu, "Server replied with an invalid verify. Killing the connection.");
    goto LABEL_8;
  }
  if ( this->m_migrationState == BD_MIGRATION220_IDLE )
  {
    m_serverSelectedProto = this->m_serverSelectedProto;
    bdLogMessage(BD_LOG_INFO, "info/", "bdLobby/bdLobbyConnection", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobbyconnection\\bdlobbyconnection.cpp", "bdLobbyConnection::process210ExpectedServerAuthDone", 0x405u, "Completed authentication procedure. Connected to MatchMaking. Proto version %i", m_serverSelectedProto);
  }
  this->m_cryptoState = BD_CRYPTO210_READY;
  result = 1;
  this->m_cypher210RecvCounter = 1;
  this->m_cypher210SendCounter = 1;
  return result;
}

/*
==============
bdLobbyConnection::process210ExpectedServerHeader
==============
*/
char bdLobbyConnection::process210ExpectedServerHeader(bdLobbyConnection *this, const unsigned __int8 *const readPtr, const unsigned int readOffset, const unsigned int validBytes)
{
  unsigned int v8; 
  unsigned int v9; 
  unsigned int v10; 
  unsigned int v11; 
  unsigned int v12; 
  char v15; 
  __int64 v17; 
  int v18; 
  int v19; 
  unsigned int newOffset; 
  unsigned int replyPacketOffset[2]; 
  __int64 v22; 
  __int64 v23; 
  unsigned __int8 replyPacketPtr[1056]; 

  v22 = -2i64;
  _RDI = readPtr;
  v8 = 0;
  v9 = readOffset + 4;
  v10 = readOffset + 4;
  newOffset = readOffset + 4;
  if ( readPtr )
  {
    if ( v9 > validBytes )
    {
      bdLogMessage(BD_LOG_WARNING, "warn/", "byte packer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::removeBasicType", 0xA2u, "Not enough data left to read %u bytes.", 4i64);
      v10 = newOffset;
    }
    else
    {
      v8 = *(_DWORD *)&readPtr[readOffset];
    }
  }
  if ( v9 > validBytes && _RDI )
    goto LABEL_20;
  v11 = v10 + 8;
  v12 = v10 + 8;
  newOffset = v10 + 8;
  if ( _RDI )
  {
    if ( v11 > validBytes )
    {
      bdLogMessage(BD_LOG_WARNING, "warn/", "byte packer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::removeBasicType", 0xA2u, "Not enough data left to read %u bytes.", 8i64);
      v12 = newOffset;
    }
    else
    {
      _RAX = v10;
      __asm
      {
        vmovsd  xmm0, qword ptr [rax+rdi]
        vmovsd  qword ptr [rsp+4D8h+replyPacketOffset], xmm0
      }
      this->m_cypher210ConnID = *(_QWORD *)replyPacketOffset;
    }
  }
  if ( v11 > validBytes && _RDI || !bdBytePacker::skipBytes(_RDI, validBytes, v12, &newOffset, 8u) )
  {
LABEL_20:
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdLobby/bdLobbyConnection", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobbyconnection\\bdlobbyconnection.cpp", "bdLobbyConnection::process210ExpectedServerHeader", 0x551u, "Failed to parse server_header_ack. Killing the connection.");
    goto LABEL_21;
  }
  if ( v8 - 210 > 0xA )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobby/bdLobbyConnection", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobbyconnection\\bdlobbyconnection.cpp", "bdLobbyConnection::process210ExpectedServerHeader", 0x545u, "ERR: The DemonWare LSG server being communicated to doesn't support this client's protocol.");
    v19 = 220;
    v18 = 210;
    LODWORD(v17) = v8;
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobby/bdLobbyConnection", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobbyconnection\\bdlobbyconnection.cpp", "bdLobbyConnection::process210ExpectedServerHeader", 0x549u, "ERR: Server selected protocol %i, client requires %i-%i.", v17, v18, v19);
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobby/bdLobbyConnection", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobbyconnection\\bdlobbyconnection.cpp", "bdLobbyConnection::process210ExpectedServerHeader", 0x54Au, "ERR: Please contact DemonWare Support. Killing the connection.");
LABEL_21:
    bdLobbyConnection::close(this);
    return 0;
  }
  replyPacketOffset[0] = 0;
  this->m_serverSelectedProto = v8;
  v23 = 0i64;
  if ( bdLobbyConnection::prepare2x0ClientAuthAndDeriveCrypto(this, replyPacketPtr, replyPacketOffset, 0x418u, _RDI, readOffset, newOffset) )
  {
    v15 = 1;
    bdLobbyConnection::sendFramedMessage(this, replyPacketPtr, replyPacketOffset[0]);
    this->m_cryptoState = BD_CRYPTO210_WAIT_SERVER_AUTH_DONE;
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobby/bdLobbyConnection", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobbyconnection\\bdlobbyconnection.cpp", "bdLobbyConnection::process210ExpectedServerHeader", 0x53Eu, "Failed to derive crypto keys. Killing the connection.");
    v15 = 0;
    bdLobbyConnection::close(this);
  }
  return v15;
}

/*
==============
bdLobbyConnection::process220MigrateAck
==============
*/
char bdLobbyConnection::process220MigrateAck(bdLobbyConnection *this, unsigned __int8 *const readPtr, const unsigned int validBytes, unsigned int *offset)
{
  bdStreamSocket_vtbl *v6; 
  bdTrulyRandomImpl *Instance; 
  const bdAddr *v15; 
  bdSocketStatusCode v16; 
  bdAddr v17; 

  _RDI = this;
  if ( this->m_migrationState != BD_MIGRATION220_INIT_ACK_SENT )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdLobby/bdLobbyConnection", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobbyconnection\\bdlobbyconnection.cpp", "bdLobbyConnection::process220MigrateAck", 0x307u, "Received unexpected migration INIT_ACK");
LABEL_3:
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdLobby/bdLobbyConnection", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobbyconnection\\bdlobbyconnection.cpp", "bdLobbyConnection::process220MigrateAck", 0x338u, "Received unexpected or corrupted MIGRATE_ACK.");
    bdLobbyConnection::close(_RDI);
    return 0;
  }
  if ( !bdLobbyConnection::parse220MigrateAck(this, readPtr, validBytes, offset) )
    goto LABEL_3;
  bdLogMessage(BD_LOG_INFO, "info/", "bdLobby/bdLobbyConnection", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobbyconnection\\bdlobbyconnection.cpp", "bdLobbyConnection::process220MigrateAck", 0x310u, "Starting migration reconnect process...");
  bdHandleAssert(_RDI->m_outgoingBuffers.m_list.m_size == 0, "m_outgoingBuffers.isEmpty()", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobbyconnection\\bdlobbyconnection.cpp", "bdLobbyConnection::process220MigrateAck", 0x312u, "Unexpected data found in m_outgoingBuffers after MIGRATE_ACK");
  bdHandleAssert(_RDI->m_status == BD_NOT_CONNECTED, "m_status == BD_CONNECTED", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobbyconnection\\bdlobbyconnection.cpp", "bdLobbyConnection::process220MigrateAck", 0x313u, "Unexpected state when processing MIGRATE_ACK");
  bdHandleAssert(_RDI->m_cryptoState == BD_CRYPTO210_READY, "m_cryptoState == BD_CRYPTO210_READY", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobbyconnection\\bdlobbyconnection.cpp", "bdLobbyConnection::process220MigrateAck", 0x314u, "Unexpected crypto state when processing MIGRATE_ACK");
  v6 = _RDI->m_socket.__vftable;
  _RDI->m_status = BD_TOO_MANY_TASKS;
  _RDI->m_migrationState = BD_MIGRATION220_RECONNECTING;
  _RDI->m_cryptoState = BD_CRYPTO210_INVALID;
  v6->close(&_RDI->m_socket);
  bdStreamSocket::create(&_RDI->m_socket, 0);
  Instance = bdSingleton<bdTrulyRandomImpl>::getInstance();
  bdTrulyRandomImpl::getRandomUByte8(Instance, _RDI->m_clientNonce, 8u);
  _RDX = &_RDI->m_lobbyMigrationAddr;
  __asm
  {
    vmovups ymm0, ymmword ptr [rdx]
    vmovups ymm1, ymmword ptr [rdx+20h]
    vmovups ymmword ptr [rdi+10h], ymm0
    vmovups ymm0, ymmword ptr [rdx+40h]
    vmovups ymmword ptr [rdi+30h], ymm1
    vmovups ymm1, ymmword ptr [rdx+60h]
    vmovups ymmword ptr [rdi+50h], ymm0
    vmovups xmm0, xmmword ptr [rdx+80h]
    vmovups ymmword ptr [rdi+70h], ymm1
    vmovsd  xmm1, qword ptr [rdx+90h]
    vmovups xmmword ptr [rdi+90h], xmm0
    vmovsd  qword ptr [rdi+0A0h], xmm1
  }
  bdAddr::bdAddr(&v17, &_RDI->m_lobbyMigrationAddr);
  v16 = bdStreamSocket::connect(&_RDI->m_socket, v15);
  if ( v16 == BD_NET_SUCCESS )
  {
    _RDI->m_status = BD_NOT_CONNECTED;
    bdLobbyConnection::onTcpConnect(_RDI, 1);
  }
  else
  {
    if ( v16 != BD_NET_WOULD_BLOCK )
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobby/bdLobbyConnection", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobbyconnection\\bdlobbyconnection.cpp", "bdLobbyConnection::process220MigrateAck", 0x330u, "Failed to start connect() for a migration.");
      bdLobbyConnection::close(_RDI);
      return 0;
    }
    bdStopwatch::reset(&_RDI->m_asyncConnectTimer);
    bdStopwatch::start(&_RDI->m_asyncConnectTimer);
  }
  return 1;
}

/*
==============
bdLobbyConnection::process220MigrateInit
==============
*/
char bdLobbyConnection::process220MigrateInit(bdLobbyConnection *this, unsigned __int8 *const readPtr, const unsigned int validBytes, unsigned int *offset)
{
  char v5; 
  bdTaskByteBuffer *v6; 
  bdTaskByteBuffer *v7; 
  bdTaskByteBuffer *v8; 
  unsigned int DataSize; 
  bool v10; 
  unsigned __int8 var[8]; 
  bdReference<bdTaskByteBuffer> message; 
  __int64 v14; 
  bdTaskByteBuffer *v15; 

  v14 = -2i64;
  var[0] = 0;
  if ( !bdBytePacker::removeBasicType<unsigned char>(readPtr, validBytes, *offset, offset, var) || var[0] != 1 )
  {
    v5 = 0;
    goto LABEL_21;
  }
  v5 = 1;
  if ( this->m_migrationState )
  {
LABEL_21:
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdLobby/bdLobbyConnection", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobbyconnection\\bdlobbyconnection.cpp", "bdLobbyConnection::process220MigrateInit", 0x29Cu, "Invalid MIGRATE_INIT packet.");
    bdLobbyConnection::close(this);
    return v5;
  }
  v6 = (bdTaskByteBuffer *)bdMemory::allocate(0x58ui64);
  message.m_ptr = v6;
  if ( v6 )
  {
    bdTaskByteBuffer::bdTaskByteBuffer(v6, 1u, 0);
    v8 = v7;
  }
  else
  {
    v8 = NULL;
  }
  v15 = v8;
  if ( v8 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v8->m_refCount, 1u);
  v10 = 0;
  if ( v8 )
  {
    if ( bdByteBuffer::writeUByte8(v8, 1u) )
    {
      DataSize = bdByteBuffer::getDataSize(v8);
      message.m_ptr = v8;
      _InterlockedExchangeAdd((volatile signed __int32 *)&v8->m_refCount, 1u);
      if ( bdLobbyConnection::sendTask210(this, (bdReference<bdTaskByteBuffer>)&message, DataSize, 1, 0x88u) )
        v10 = 1;
    }
  }
  if ( v8 && !_InterlockedDecrement((volatile signed __int32 *)&v8->m_refCount) )
    ((void (__fastcall *)(bdTaskByteBuffer *, __int64))v8->~bdReferencable)(v8, 1i64);
  if ( v10 )
  {
    this->m_migrationState = BD_MIGRATION220_INIT_ACK_SENT;
    bdLogMessage(BD_LOG_INFO, "info/", "bdLobby/bdLobbyConnection", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobbyconnection\\bdlobbyconnection.cpp", "bdLobbyConnection::process220MigrateInit", 0x290u, "LSG initiated migration. Future tasks will be queued until migration is complete.");
    return 1;
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdLobby/bdLobbyConnection", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobbyconnection\\bdlobbyconnection.cpp", "bdLobbyConnection::process220MigrateInit", 0x296u, "Failed to reply to MIGRATE_INIT");
    bdLobbyConnection::close(this);
    return 0;
  }
}

/*
==============
bdLobbyConnection::process220MigrationServerAuthDone
==============
*/
_BOOL8 bdLobbyConnection::process220MigrationServerAuthDone(bdLobbyConnection *this)
{
  bool v2; 
  bdLinkedList<bdLobbyConnectionMigrationHeldBackTask>::Node *m_head; 
  bdTaskByteBuffer *m_ptr; 
  bdLinkedList<bdLobbyConnectionMigrationHeldBackTask>::Node *v5; 
  bdLinkedList<bdLobbyConnectionMigrationHeldBackTask>::Node *m_prev; 
  bdTaskByteBuffer *v8; 
  unsigned int messageSize; 
  bdReference<bdTaskByteBuffer> message; 

  v2 = 1;
  bdLogMessage(BD_LOG_INFO, "info/", "bdLobby/bdLobbyConnection", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobbyconnection\\bdlobbyconnection.cpp", "bdLobbyConnection::process220MigrationServerAuthDone", 0x55Fu, "Completed LSG migration reconnect. There are %i tasks in the migration queue to be dispatched.", this->m_migrationOutgoingTaskQueue.m_list.m_size);
  this->m_migrationState = BD_MIGRATION220_IDLE;
  while ( this->m_migrationOutgoingTaskQueue.m_list.m_size )
  {
    bdHandleAssert(this->m_migrationOutgoingTaskQueue.m_list.m_size != 0, "getSize() > 0", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdqueue.inl", "bdQueue<class bdLobbyConnectionMigrationHeldBackTask>::peek", 0x19u, "bdQueue::dequeue, queue empty, can't peek.");
    bdHandleAssert(this->m_migrationOutgoingTaskQueue.m_list.m_head != NULL, "m_head != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdlinkedlist.inl", "bdLinkedList<class bdLobbyConnectionMigrationHeldBackTask>::getHead", 0x42u, "bdLinkedList::GetHead, list is empty so has no head.");
    m_head = this->m_migrationOutgoingTaskQueue.m_list.m_head;
    m_ptr = m_head->m_data.m_task.m_ptr;
    v8 = m_head->m_data.m_task.m_ptr;
    if ( m_head->m_data.m_task.m_ptr )
    {
      _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
      m_ptr = v8;
    }
    messageSize = m_head->m_data.m_messageSize;
    bdHandleAssert(this->m_migrationOutgoingTaskQueue.m_list.m_size != 0, "getSize() > 0", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdqueue.inl", "bdQueue<class bdLobbyConnectionMigrationHeldBackTask>::dequeue", 0x12u, "bdQueue::dequeue, queue empty, can't dequeue.");
    v5 = this->m_migrationOutgoingTaskQueue.m_list.m_head;
    if ( v5 )
    {
      this->m_migrationOutgoingTaskQueue.m_list.m_head = v5->m_next;
      m_prev = v5->m_prev;
      if ( v5 == this->m_migrationOutgoingTaskQueue.m_list.m_tail )
        this->m_migrationOutgoingTaskQueue.m_list.m_tail = m_prev;
      else
        v5->m_next->m_prev = m_prev;
      if ( v5->m_data.m_task.m_ptr )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v5->m_data.m_task.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
        {
          if ( v5->m_data.m_task.m_ptr )
            ((void (__fastcall *)(bdTaskByteBuffer *, __int64))v5->m_data.m_task.m_ptr->~bdReferencable)(v5->m_data.m_task.m_ptr, 1i64);
          v5->m_data.m_task.m_ptr = NULL;
        }
        m_ptr = v8;
      }
      bdMemory::deallocate(v5);
      --this->m_migrationOutgoingTaskQueue.m_list.m_size;
    }
    message.m_ptr = m_ptr;
    if ( m_ptr )
    {
      _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
      m_ptr = v8;
    }
    v2 = bdLobbyConnection::sendTask210(this, (bdReference<bdTaskByteBuffer>)&message, messageSize, 1, 0x86u);
    if ( !v2 )
    {
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdLobby/bdLobbyConnection", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobbyconnection\\bdlobbyconnection.cpp", "bdLobbyConnection::process220MigrationServerAuthDone", 0x56Du, "After migration, failed to dispatched a task from the migration queue.");
      bdLobbyConnection::close(this);
    }
    if ( m_ptr && !_InterlockedDecrement((volatile signed __int32 *)&m_ptr->m_refCount) )
      ((void (__fastcall *)(bdTaskByteBuffer *, __int64))v8->~bdReferencable)(v8, 1i64);
    if ( !v2 )
      return v2;
  }
  bdLogMessage(BD_LOG_INFO, "info/", "bdLobby/bdLobbyConnection", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobbyconnection\\bdlobbyconnection.cpp", "bdLobbyConnection::process220MigrationServerAuthDone", 0x574u, "Migration process fully complete.");
  return v2;
}

/*
==============
bdLobbyConnection::pump
==============
*/
bool bdLobbyConnection::pump(bdLobbyConnection *this)
{
  bdLobbyConnection::Status m_status; 
  bdLinkedList<bdPendingBufferTransfer>::Node *m_head; 
  signed int m_txAvail; 
  int AvailTokens; 
  int v8; 
  int v9; 
  unsigned int v10; 
  unsigned int v11; 
  unsigned int v12; 
  bdLinkedList<bdPendingBufferTransfer>::Node *v13; 
  bdLinkedList<bdPendingBufferTransfer>::Node *m_prev; 
  bool result; 
  char v16; 
  char v17; 
  bdByteBuffer *m_ptr; 
  bdByteBuffer *v20; 
  int v21; 
  bdSocketStatusCode error; 
  int data; 

  __asm { vmovaps [rsp+98h+var_48], xmm6 }
  _RBX = this;
  bdTokenBucket::fillBucket(&this->m_throttleBucket);
  m_status = _RBX->m_status;
  if ( m_status != BD_TOO_MANY_TASKS )
    goto LABEL_5;
  error = BD_NET_SUCCESS;
  if ( bdStreamSocket::isWritable(&_RBX->m_socket, &error) )
  {
    if ( error == BD_NET_SUCCESS )
    {
      _RBX->m_status = BD_NOT_CONNECTED;
      bdLobbyConnection::onTcpConnect(_RBX, 1);
      m_status = _RBX->m_status;
LABEL_5:
      if ( m_status == BD_NOT_CONNECTED )
      {
        do
        {
          if ( !_RBX->m_outgoingBuffers.m_list.m_size )
            break;
          bdHandleAssert(_RBX->m_outgoingBuffers.m_list.m_size != 0, "getSize() > 0", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdqueue.inl", "bdQueue<class bdPendingBufferTransfer>::peek", 0x19u, "bdQueue::dequeue, queue empty, can't peek.");
          bdHandleAssert(_RBX->m_outgoingBuffers.m_list.m_head != NULL, "m_head != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdlinkedlist.inl", "bdLinkedList<class bdPendingBufferTransfer>::getHead", 0x42u, "bdLinkedList::GetHead, list is empty so has no head.");
          m_head = _RBX->m_outgoingBuffers.m_list.m_head;
          m_txAvail = m_head->m_data.m_txAvail;
          if ( m_head->m_data.m_isThrottled )
          {
            AvailTokens = bdTokenBucket::getAvailTokens(&_RBX->m_throttleBucket, m_txAvail + 40);
            v8 = AvailTokens;
            if ( AvailTokens <= 0 )
              goto LABEL_40;
            bdHandleAssert(AvailTokens > 40, "bytesToSend > BD_LOBBY_CONNECTION_ESTIMATED_TCP_HEADER_BYTES", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobbyconnection\\bdlobbyconnection.cpp", "bdLobbyConnection::pump", 0x87Fu, "minFragmentTokens in the throttled bucket is too low.");
            m_txAvail = v8 - 40;
          }
          if ( m_txAvail <= 0 )
          {
LABEL_40:
            v9 = -2;
LABEL_41:
            switch ( v9 )
            {
              case -11:
                bdLogMessage(BD_LOG_WARNING, "warn/", "bdLobby/bdLobbyConnection", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobbyconnection\\bdlobbyconnection.cpp", "bdLobbyConnection::pump", 0x8B7u, "not connected to host!");
                goto $LN321_1;
              case -10:
                bdLogMessage(BD_LOG_WARNING, "warn/", "bdLobby/bdLobbyConnection", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobbyconnection\\bdlobbyconnection.cpp", "bdLobbyConnection::pump", 0x8B3u, "invalid handle.");
                goto $LN321_1;
              case -7:
                bdLogMessage(BD_LOG_INFO, "info/", "bdLobby/bdLobbyConnection", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobbyconnection\\bdlobbyconnection.cpp", "bdLobbyConnection::pump", 0x89Eu, "Invalid address. Closing connection.");
                goto $LN321_1;
              case -6:
              case -5:
                goto $LN321_1;
              case -4:
              case -2:
                goto $LN4_289;
              case -3:
                bdLogMessage(BD_LOG_WARNING, "warn/", "bdLobby/bdLobbyConnection", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobbyconnection\\bdlobbyconnection.cpp", "bdLobbyConnection::pump", 0x89Au, "net subsystem error!");
                goto $LN321_1;
              case -1:
                bdLogMessage(BD_LOG_WARNING, "warn/", "bdLobby/bdLobbyConnection", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobbyconnection\\bdlobbyconnection.cpp", "bdLobbyConnection::pump", 0x8A3u, "unknown error.");
                goto $LN321_1;
              default:
                bdLogMessage(BD_LOG_WARNING, "warn/", "bdLobby/bdLobbyConnection", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobbyconnection\\bdlobbyconnection.cpp", "bdLobbyConnection::pump", 0x8BBu, "unknown error %i.", v9);
$LN321_1:
                bdLobbyConnection::close(_RBX);
$LN4_289:
                result = _RBX->m_status == BD_NOT_CONNECTED;
                break;
            }
            goto LABEL_55;
          }
          v9 = bdStreamSocket::send(&_RBX->m_socket, m_head->m_data.m_txPtr, m_txAvail);
          if ( v9 <= 0 )
            goto LABEL_41;
          bdStopwatch::start(&_RBX->m_keepAliveTimer);
          bdTokenBucket::removeTokens(&_RBX->m_throttleBucket, v9 + 40);
          bdHandleAssert(v9 <= m_head->m_data.m_txAvail, "amountTransfered <= m_txAvail", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobbyconnection\\bdlobbyconnection.cpp", "bdPendingBufferTransfer::updateTransfer", 0x947u, "Transfered too much on lobby task");
          v10 = m_head->m_data.m_txAvail;
          v11 = v10;
          if ( v10 > v9 )
            v11 = v9;
          m_head->m_data.m_txPtr += v11;
          v12 = v10 - v11;
          m_head->m_data.m_txAvail = v12;
          if ( !v12 )
          {
            bdHandleAssert(_RBX->m_outgoingBuffers.m_list.m_size != 0, "getSize() > 0", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdqueue.inl", "bdQueue<class bdPendingBufferTransfer>::dequeue", 0x12u, "bdQueue::dequeue, queue empty, can't dequeue.");
            v13 = _RBX->m_outgoingBuffers.m_list.m_head;
            if ( v13 )
            {
              _RBX->m_outgoingBuffers.m_list.m_head = v13->m_next;
              m_prev = v13->m_prev;
              if ( v13 == _RBX->m_outgoingBuffers.m_list.m_tail )
                _RBX->m_outgoingBuffers.m_list.m_tail = m_prev;
              else
                v13->m_next->m_prev = m_prev;
              v13->m_data.__vftable = (bdPendingBufferTransfer_vtbl *)&bdPendingBufferTransfer::`vftable';
              m_ptr = v13->m_data.m_buffer.m_ptr;
              if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
              {
                v20 = v13->m_data.m_buffer.m_ptr;
                if ( v20 )
                  ((void (__fastcall *)(bdByteBuffer *, __int64))v20->~bdReferencable)(v20, 1i64);
                v13->m_data.m_buffer.m_ptr = NULL;
              }
              bdReferencable::~bdReferencable(&v13->m_data);
              bdMemory::deallocate(v13);
              --_RBX->m_outgoingBuffers.m_list.m_size;
            }
          }
          m_status = _RBX->m_status;
        }
        while ( m_status == BD_NOT_CONNECTED );
        if ( m_status == BD_NOT_CONNECTED && _RBX->m_cryptoState == BD_CRYPTO210_READY && !_RBX->m_outgoingBuffers.m_list.m_size )
        {
          *(double *)&_XMM0 = bdStopwatch::getElapsedTimeInSeconds(&_RBX->m_keepAliveTimer);
          __asm { vcomiss xmm0, cs:__real@44160000 }
          if ( !(v16 | v17) )
          {
            data = 0;
            v21 = bdStreamSocket::send(&_RBX->m_socket, &data, 4u);
            if ( (int)(v21 + 0x80000000) >= 0 && v21 != -2 )
            {
              bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobby/bdLobbyConnection", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobbyconnection\\bdlobbyconnection.cpp", "bdLobbyConnection::pump", 0x8D1u, "KeepAlive packet failed to send! Closing.");
              bdLobbyConnection::close(_RBX);
              result = 0;
              goto LABEL_55;
            }
            bdStopwatch::start(&_RBX->m_keepAliveTimer);
          }
        }
      }
      *(double *)&_XMM0 = bdStopwatch::getElapsedTimeInSeconds(&_RBX->m_lastReceivedTimer);
      __asm { vcomiss xmm0, cs:__real@44e10000 }
      if ( !(v16 | v17) )
      {
        bdLogMessage(BD_LOG_WARNING, "warn/", "bdLobby/bdLobbyConnection", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobbyconnection\\bdlobbyconnection.cpp", "bdLobbyConnection::pump", 0x8DBu, "Connection timed out\n");
        bdLobbyConnection::close(_RBX);
      }
      goto LABEL_54;
    }
    goto LABEL_19;
  }
  if ( error == BD_NET_SUCCESS )
  {
    if ( _RBX->m_migrationState )
      goto LABEL_23;
    *(double *)&_XMM0 = bdStopwatch::getElapsedTimeInSeconds(&_RBX->m_asyncConnectTimer);
    __asm { vcomiss xmm0, cs:__real@41f00000 }
    if ( !(v16 | v17) )
    {
LABEL_24:
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdLobby/bdLobbyConnection", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobbyconnection\\bdlobbyconnection.cpp", "bdLobbyConnection::pump", 0x85Fu, "Failed to establish connection due to timeout");
      bdLobbyConnection::close(_RBX);
      result = 0;
      goto LABEL_55;
    }
    if ( _RBX->m_migrationState )
    {
LABEL_23:
      __asm { vmovss  xmm6, dword ptr [rbx+794h] }
      *(double *)&_XMM0 = bdStopwatch::getElapsedTimeInSeconds(&_RBX->m_asyncConnectTimer);
      __asm { vcomiss xmm6, xmm0 }
      if ( v16 )
        goto LABEL_24;
    }
LABEL_54:
    result = 1;
    goto LABEL_55;
  }
LABEL_19:
  bdLogMessage(BD_LOG_WARNING, "warn/", "bdLobby/bdLobbyConnection", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobbyconnection\\bdlobbyconnection.cpp", "bdLobbyConnection::pump", 0x858u, "Failed to establish connection due to socket error %d", error);
  bdLobbyConnection::close(_RBX);
  result = 0;
LABEL_55:
  __asm { vmovaps xmm6, [rsp+98h+var_48] }
  return result;
}

/*
==============
bdLobbyConnection::receivedFullMessage
==============
*/
bool bdLobbyConnection::receivedFullMessage(bdLobbyConnection *this)
{
  return this->m_recvState == BD_READ_COMPLETE;
}

/*
==============
bdLobbyConnection::recvEncryptType
==============
*/
int bdLobbyConnection::recvEncryptType(bdLobbyConnection *this)
{
  unsigned __int8 *p_m_recvEncryptType; 
  int result; 
  int v4; 
  bool v5; 
  int v6; 
  int v7; 
  unsigned int *p_m_messageSize; 
  bdTaskByteBuffer *v9; 
  bdPendingBufferTransfer *v10; 
  bdTaskByteBuffer *v11; 
  bdTaskByteBuffer *v12; 
  bdTaskByteBuffer *m_ptr; 
  bdTaskByteBuffer *v14; 
  unsigned __int8 *HeaderStart; 
  bool v16; 
  bdPendingBufferTransfer *v17; 
  unsigned int v18; 
  bdTaskByteBuffer *v19; 
  bdPendingBufferTransfer *v20; 
  bdPendingBufferTransfer *v21; 
  bdPendingBufferTransfer *v22; 
  bdTaskByteBuffer *newOffset; 
  bdPendingBufferTransfer *size; 
  bdReference<bdTaskByteBuffer> buffer; 

  p_m_recvEncryptType = &this->m_recvEncryptType;
  result = bdStreamSocket::recv(&this->m_socket, &this->m_recvEncryptType, 1u);
  v4 = result;
  if ( result > 0 )
  {
    v5 = !this->m_recvMessage.m_ptr && !this->m_recvTransfer.m_ptr;
    bdHandleAssert(v5, "m_recvMessage == BD_NULL && m_recvTransfer == BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobbyconnection\\bdlobbyconnection.cpp", "bdLobbyConnection::recvEncryptType", 0x70Eu, "BD_READ_ENCRYPT state error", -2i64);
    v6 = 1;
    if ( (unsigned __int8)(*p_m_recvEncryptType - 1) <= 1u )
      v6 = 9;
    LODWORD(size) = v6;
    v7 = v6 + 1;
    p_m_messageSize = &this->m_messageSize;
    bdHandleAssert(this->m_messageSize >= v6 + 1, "m_messageSize >= headerSize", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobbyconnection\\bdlobbyconnection.cpp", "bdLobbyConnection::recvEncryptType", 0x728u, "Message body too small.");
    v9 = (bdTaskByteBuffer *)bdMemory::allocate(0x58ui64);
    newOffset = v9;
    v10 = NULL;
    if ( v9 )
    {
      bdTaskByteBuffer::bdTaskByteBuffer(v9, *p_m_messageSize - v7, 1);
      v12 = v11;
    }
    else
    {
      v12 = NULL;
    }
    m_ptr = this->m_recvMessage.m_ptr;
    if ( m_ptr )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
      {
        v14 = this->m_recvMessage.m_ptr;
        if ( v14 )
          ((void (__fastcall *)(bdTaskByteBuffer *, __int64))v14->~bdReferencable)(v14, 1i64);
      }
    }
    this->m_recvMessage.m_ptr = v12;
    if ( v12 )
    {
      _InterlockedExchangeAdd((volatile signed __int32 *)&v12->m_refCount, 1u);
      v12 = this->m_recvMessage.m_ptr;
    }
    bdTaskByteBuffer::setHeaderSize(v12, (_DWORD)size + 5);
    HeaderStart = bdTaskByteBuffer::getHeaderStart(this->m_recvMessage.m_ptr);
    LODWORD(newOffset) = 0;
    v16 = bdBytePacker::appendBasicType<unsigned int>(HeaderStart, 5u, 0, (unsigned int *)&newOffset, &this->m_messageSize) && bdBytePacker::appendBasicType<unsigned char>(HeaderStart, 5u, (const unsigned int)newOffset, (unsigned int *)&newOffset, &this->m_recvEncryptType);
    bdHandleAssert(v16, "ok", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobbyconnection\\bdlobbyconnection.cpp", "bdLobbyConnection::recvEncryptType", 0x73Du, "Pointer arithmetic failure");
    bdTaskByteBuffer::setHeaderSize(this->m_recvMessage.m_ptr, (unsigned int)size);
    v17 = (bdPendingBufferTransfer *)bdMemory::allocate(0x28ui64);
    size = v17;
    if ( v17 )
    {
      v18 = *p_m_messageSize - 1;
      v19 = this->m_recvMessage.m_ptr;
      buffer.m_ptr = v19;
      if ( v19 )
        _InterlockedExchangeAdd((volatile signed __int32 *)&v19->m_refCount, 1u);
      bdPendingBufferTransfer::bdPendingBufferTransfer(v17, (bdReference<bdTaskByteBuffer>)&buffer, v18, 0);
      v10 = v20;
    }
    v21 = this->m_recvTransfer.m_ptr;
    if ( v21 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v21->m_refCount, 0xFFFFFFFF) == 1 )
      {
        v22 = this->m_recvTransfer.m_ptr;
        if ( v22 )
          ((void (__fastcall *)(bdPendingBufferTransfer *, __int64))v22->~bdReferencable)(v22, 1i64);
      }
    }
    this->m_recvTransfer.m_ptr = v10;
    if ( v10 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v10->m_refCount, 1u);
    this->m_recvState = BD_READ_MESSAGE;
    return v4;
  }
  return result;
}

/*
==============
bdLobbyConnection::recvMessageData
==============
*/
char bdLobbyConnection::recvMessageData(bdLobbyConnection *this)
{
  bdLobbyConnection::RecvState m_recvState; 
  const char *v3; 
  bdLobbyConnection::RecvState v4; 
  __int32 v5; 
  __int32 v6; 
  signed int v7; 
  int v8; 
  bdTaskByteBuffer *m_ptr; 
  bdTaskByteBuffer *v10; 
  bdPendingBufferTransfer *v11; 
  bdPendingBufferTransfer *v12; 
  bool v13; 
  int v14; 
  unsigned int m_messageSize; 
  char result; 

  if ( this->m_status != BD_NOT_CONNECTED )
    return 0;
  m_recvState = this->m_recvState;
  while ( 1 )
  {
    v3 = "BD_READ_SIZE state error";
    v4 = m_recvState;
    if ( m_recvState == BD_READ_INIT )
    {
      this->m_recvCount = 0;
      this->m_recvEncryptType = 0;
      this->m_messageSize = 0;
      m_ptr = this->m_recvMessage.m_ptr;
      if ( m_ptr )
      {
        if ( !_InterlockedDecrement((volatile signed __int32 *)&m_ptr->m_refCount) )
        {
          v10 = this->m_recvMessage.m_ptr;
          if ( v10 )
            ((void (__fastcall *)(bdTaskByteBuffer *, __int64, const char *))v10->~bdReferencable)(v10, 1i64, "BD_READ_SIZE state error");
        }
      }
      this->m_recvMessage.m_ptr = NULL;
      v11 = this->m_recvTransfer.m_ptr;
      if ( v11 )
      {
        if ( !_InterlockedDecrement((volatile signed __int32 *)&v11->m_refCount) )
        {
          v12 = this->m_recvTransfer.m_ptr;
          if ( v12 )
            ((void (__fastcall *)(bdPendingBufferTransfer *, __int64, const char *))v12->~bdReferencable)(v12, 1i64, v3);
        }
      }
      this->m_recvTransfer.m_ptr = NULL;
      this->m_recvState = BD_READ_SIZE;
      v4 = BD_READ_INIT;
LABEL_20:
      v13 = !this->m_messageSize && this->m_recvCount < 4;
      bdHandleAssert(v13, "!m_messageSize && m_recvCount < BD_MSG_SIZE_BUFFER_SIZE", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobbyconnection\\bdlobbyconnection.cpp", "bdLobbyConnection::recvMessageSize", 0x6E7u, "BD_READ_SIZE state error");
      v14 = bdStreamSocket::recv(&this->m_socket, &this->m_msgSizeBuffer[this->m_recvCount], 4 - this->m_recvCount);
      v8 = v14;
      if ( v14 > 0 )
      {
        this->m_recvCount += v14;
        if ( this->m_recvCount == 4 )
        {
          if ( this != (bdLobbyConnection *)-184i64 )
            this->m_messageSize = *(_DWORD *)this->m_msgSizeBuffer;
          m_messageSize = this->m_messageSize;
          if ( m_messageSize )
          {
            if ( m_messageSize <= this->m_maxRecvMessageSize )
            {
              this->m_recvState = BD_READ_ENCRYPT;
            }
            else
            {
              bdLogMessage(BD_LOG_WARNING, "warn/", "bdLobby/bdLobbyConnection", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobbyconnection\\bdlobbyconnection.cpp", "bdLobbyConnection::recvMessageSize", 0x6FBu, "Message received is too large to fit in the receive buffer.");
              bdLobbyConnection::close(this);
              v8 = -11;
            }
          }
          else
          {
            this->m_recvState = BD_READ_INIT;
          }
        }
      }
LABEL_33:
      if ( v8 > 0 )
      {
        bdStopwatch::reset(&this->m_lastReceivedTimer);
        bdStopwatch::start(&this->m_lastReceivedTimer);
      }
      goto LABEL_35;
    }
    v5 = m_recvState - 1;
    if ( !v5 )
      goto LABEL_20;
    v6 = v5 - 1;
    if ( !v6 )
    {
      v8 = bdLobbyConnection::recvEncryptType(this);
      goto LABEL_33;
    }
    if ( v6 != 1 )
      return 1;
    bdHandleAssert(this->m_recvTransfer.m_ptr->m_txAvail != 0, "m_recvTransfer->getAvail() > 0", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobbyconnection\\bdlobbyconnection.cpp", "bdLobbyConnection::recvMessageData", 0x6A4u, "BD_READ_MESSAGE state error");
    v7 = bdStreamSocket::recv(&this->m_socket, this->m_recvTransfer.m_ptr->m_txPtr, this->m_recvTransfer.m_ptr->m_txAvail);
    v8 = v7;
    if ( v7 > 0 )
    {
      if ( !bdPendingBufferTransfer::updateTransfer(this->m_recvTransfer.m_ptr, v7) )
        this->m_recvState = BD_READ_COMPLETE;
      goto LABEL_33;
    }
LABEL_35:
    m_recvState = this->m_recvState;
    if ( m_recvState == v4 )
      break;
    if ( this->m_status != BD_NOT_CONNECTED )
      return 0;
  }
  if ( v8 > 0 || m_recvState == BD_READ_COMPLETE )
    return this->m_status == BD_NOT_CONNECTED;
  switch ( v8 )
  {
    case -11:
    case -9:
    case -8:
    case -2:
      return this->m_status == BD_NOT_CONNECTED;
    case -6:
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdLobby/bdLobbyConnection", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobbyconnection\\bdlobbyconnection.cpp", "bdLobbyConnection::recvMessageData", 0x6D0u, "Couldn't receive message. Buffer too small?");
      result = this->m_status == BD_NOT_CONNECTED;
      break;
    case -5:
      bdLogMessage(BD_LOG_INFO, "info/", "bdLobby/bdLobbyConnection", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobbyconnection\\bdlobbyconnection.cpp", "bdLobbyConnection::recvMessageData", 0x6CBu, "Received 'connection reset'. Closing connection.");
      bdLobbyConnection::close(this);
      result = this->m_status == BD_NOT_CONNECTED;
      break;
    case 0:
      this->m_status = BD_SEND_FAILED;
      bdLobbyConnection::close(this);
      result = this->m_status == BD_NOT_CONNECTED;
      break;
    default:
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdLobby/bdLobbyConnection", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobbyconnection\\bdlobbyconnection.cpp", "bdLobbyConnection::recvMessageData", 0x6DDu, "net error. status : %i", v8);
      return this->m_status == BD_NOT_CONNECTED;
  }
  return result;
}

/*
==============
bdLobbyConnection::recvMessageSize
==============
*/
int bdLobbyConnection::recvMessageSize(bdLobbyConnection *this)
{
  bool v2; 
  int result; 
  unsigned int m_messageSize; 

  v2 = !this->m_messageSize && this->m_recvCount < 4;
  bdHandleAssert(v2, "!m_messageSize && m_recvCount < BD_MSG_SIZE_BUFFER_SIZE", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobbyconnection\\bdlobbyconnection.cpp", "bdLobbyConnection::recvMessageSize", 0x6E7u, "BD_READ_SIZE state error");
  result = bdStreamSocket::recv(&this->m_socket, &this->m_msgSizeBuffer[this->m_recvCount], 4 - this->m_recvCount);
  if ( result > 0 )
  {
    this->m_recvCount += result;
    if ( this->m_recvCount == 4 )
    {
      if ( this != (bdLobbyConnection *)-184i64 )
        this->m_messageSize = *(_DWORD *)this->m_msgSizeBuffer;
      m_messageSize = this->m_messageSize;
      if ( m_messageSize )
      {
        if ( m_messageSize <= this->m_maxRecvMessageSize )
        {
          this->m_recvState = BD_READ_ENCRYPT;
        }
        else
        {
          bdLogMessage(BD_LOG_WARNING, "warn/", "bdLobby/bdLobbyConnection", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobbyconnection\\bdlobbyconnection.cpp", "bdLobbyConnection::recvMessageSize", 0x6FBu, "Message received is too large to fit in the receive buffer.");
          bdLobbyConnection::close(this);
          return -11;
        }
      }
      else
      {
        this->m_recvState = BD_READ_INIT;
      }
    }
  }
  return result;
}

/*
==============
bdLobbyConnection::send200ClientHeader
==============
*/
_BOOL8 bdLobbyConnection::send200ClientHeader(bdLobbyConnection *this)
{
  bdByteBuffer *v2; 
  bdByteBuffer *v3; 
  bdByteBuffer *v4; 
  unsigned __int8 *m_data; 
  bool v6; 
  unsigned int DataSize; 
  bdBitBuffer *v8; 
  bdBitBuffer *v9; 
  bdBitBuffer *v10; 
  unsigned int m_titleID; 
  unsigned int m_IVSeed; 
  bdByteBuffer *v13; 
  bdByteBuffer *v14; 
  unsigned int v15; 
  signed __int32 v16; 
  int data; 
  unsigned int m_maxRecvMessageSize; 
  unsigned int v20; 
  unsigned int v21; 
  unsigned int v22; 
  bdBitBuffer *v23; 
  bdByteBuffer *v24; 
  __int64 v25; 
  bdByteBuffer *v26; 
  bdByteBuffer *bits; 
  char v28; 
  char v29; 

  v25 = -2i64;
  v2 = (bdByteBuffer *)bdMemory::allocate(0x38ui64);
  v3 = v2;
  bits = v2;
  v4 = NULL;
  if ( v2 )
  {
    v2->m_refCount.m_value._My_val = 0;
    v2->__vftable = (bdByteBuffer_vtbl *)&bdByteBuffer::`vftable';
    v2->m_size = 8;
    v2->m_data = NULL;
    *(_WORD *)&v2->m_typeChecked = 0;
    v2->m_allocatedData = 0;
    bdHandleAssert(1, "m_data == BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdbytebuffer.inl", "bdByteBuffer::init", 0x31u, "Buffer already allocated. init() called twice?");
    v3->m_size = 8;
    v3->allocateBuffer(v3);
    m_data = v3->m_data;
    v3->m_writePtr = m_data;
    v3->m_readPtr = m_data;
  }
  else
  {
    v3 = NULL;
  }
  v26 = v3;
  if ( v3 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v3->m_refCount, 1u);
  v6 = 0;
  if ( v3 )
  {
    data = 220;
    if ( bdByteBuffer::write(v3, &data, 4u) )
    {
      m_maxRecvMessageSize = this->m_maxRecvMessageSize;
      if ( bdByteBuffer::write(v3, &m_maxRecvMessageSize, 4u) )
        v6 = 1;
    }
  }
  bdHandleAssert(v6, "ok", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobbyconnection\\bdlobbyconnection.cpp", "bdLobbyConnection::send200ClientHeader", 0x7B2u, "Failed to prepare client hello header.");
  if ( v6 )
  {
    DataSize = bdByteBuffer::getDataSize(v3);
    bdLobbyConnection::sendFramedMessage(this, v3->m_data, DataSize);
  }
  if ( v3 && !_InterlockedDecrement((volatile signed __int32 *)&v3->m_refCount) )
    ((void (__fastcall *)(bdByteBuffer *, __int64))v3->~bdReferencable)(v3, 1i64);
  if ( v6 )
  {
    LOBYTE(bits) = 7;
    v8 = (bdBitBuffer *)bdMemory::allocate(0x30ui64);
    v23 = v8;
    if ( v8 )
    {
      bdBitBuffer::bdBitBuffer(v8, (const unsigned __int8 *)&bits, 8u, 1);
      v10 = v9;
    }
    else
    {
      v10 = NULL;
    }
    v23 = v10;
    if ( v10 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v10->m_refCount, 1u);
    if ( v10 )
    {
      bdBitBuffer::setTypeCheck(v10, 0);
      bdBitBuffer::writeDataType(v10, BD_BB_BOOL_TYPE);
      v28 = -1;
      bdBitBuffer::writeBits(v10, &v28, 1u);
      bdBitBuffer::setTypeCheck(v10, 1);
      m_titleID = this->m_authInfo.m_titleID;
      bdBitBuffer::writeDataType(v10, BD_BB_UNSIGNED_INTEGER32_TYPE);
      v20 = m_titleID;
      bdBitBuffer::writeBits(v10, &v20, 0x20u);
      m_IVSeed = this->m_authInfo.m_IVSeed;
      bdBitBuffer::writeDataType(v10, BD_BB_UNSIGNED_INTEGER32_TYPE);
      v21 = m_IVSeed;
      bdBitBuffer::writeBits(v10, &v21, 0x20u);
      bdBitBuffer::writeBits(v10, this->m_authInfo.m_data, 0x400u);
      v13 = (bdByteBuffer *)bdMemory::allocate(0x38ui64);
      v24 = v13;
      if ( v13 )
      {
        bdByteBuffer::bdByteBuffer(v13, v10->m_data.m_size + 5, 0);
        v4 = v14;
      }
      v24 = v4;
      if ( v4 )
        _InterlockedExchangeAdd((volatile signed __int32 *)&v4->m_refCount, 1u);
      v6 = 0;
      if ( v4 )
      {
        v22 = v10->m_data.m_size + 1;
        if ( bdByteBuffer::write(v4, &v22, 4u) )
        {
          v29 = 0;
          if ( bdByteBuffer::write(v4, &v29, 1u) && bdByteBuffer::write(v4, v10->m_data.m_data, v10->m_data.m_size) )
            v6 = 1;
        }
      }
      bdHandleAssert(v6, "ok", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobbyconnection\\bdlobbyconnection.cpp", "bdLobbyConnection::send200ClientHeader", 0x7D5u, "Failed to prepare client auth header");
      if ( v6 )
      {
        v15 = bdByteBuffer::getDataSize(v4);
        bdLobbyConnection::sendFramedMessage(this, v4->m_data, v15);
      }
      if ( v4 && !_InterlockedDecrement((volatile signed __int32 *)&v4->m_refCount) )
        ((void (__fastcall *)(bdByteBuffer *, __int64))v4->~bdReferencable)(v4, 1i64);
    }
    if ( v10 )
    {
      v16 = _InterlockedExchangeAdd((volatile signed __int32 *)&v10->m_refCount, 0xFFFFFFFF);
      if ( v16 == 1 )
        ((void (__fastcall *)(bdBitBuffer *, __int64))v10->~bdReferencable)(v10, 1i64);
    }
  }
  return v6;
}

/*
==============
bdLobbyConnection::send210ClientHeader
==============
*/
_BOOL8 bdLobbyConnection::send210ClientHeader(bdLobbyConnection *this)
{
  bdByteBuffer *v2; 
  bdByteBuffer *v3; 
  unsigned __int8 *m_data; 
  bool v5; 
  unsigned int DataSize; 
  unsigned int m_maxRecvMessageSize; 
  __int64 v9; 
  bdByteBuffer *v10; 
  bdByteBuffer *data; 
  int v12; 
  int v13; 
  int v14; 

  v9 = -2i64;
  v2 = (bdByteBuffer *)bdMemory::allocate(0x38ui64);
  v3 = v2;
  data = v2;
  if ( v2 )
  {
    v2->m_refCount.m_value._My_val = 0;
    v2->__vftable = (bdByteBuffer_vtbl *)&bdByteBuffer::`vftable';
    v2->m_size = 28;
    v2->m_data = NULL;
    *(_WORD *)&v2->m_typeChecked = 0;
    v2->m_allocatedData = 0;
    bdHandleAssert(1, "m_data == BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdbytebuffer.inl", "bdByteBuffer::init", 0x31u, "Buffer already allocated. init() called twice?");
    v3->m_size = 28;
    v3->allocateBuffer(v3);
    m_data = v3->m_data;
    v3->m_writePtr = m_data;
    v3->m_readPtr = m_data;
  }
  else
  {
    v3 = NULL;
  }
  v10 = v3;
  if ( v3 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v3->m_refCount, 1u);
  v5 = 0;
  if ( v3 )
  {
    LODWORD(data) = 200;
    if ( bdByteBuffer::write(v3, &data, 4u) )
    {
      v12 = 200;
      if ( bdByteBuffer::write(v3, &v12, 4u) )
      {
        v13 = 210;
        if ( bdByteBuffer::write(v3, &v13, 4u) )
        {
          v14 = 220;
          if ( bdByteBuffer::write(v3, &v14, 4u) )
          {
            m_maxRecvMessageSize = this->m_maxRecvMessageSize;
            if ( bdByteBuffer::write(v3, &m_maxRecvMessageSize, 4u) && bdByteBuffer::write(v3, this->m_clientNonce, 8u) )
              v5 = 1;
          }
        }
      }
    }
  }
  bdHandleAssert(v5, "ok", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobbyconnection\\bdlobbyconnection.cpp", "bdLobbyConnection::send210ClientHeader", 0x7F6u, "Failed to prepare client_header.");
  DataSize = bdByteBuffer::getDataSize(v3);
  bdLobbyConnection::sendFramedMessage(this, v3->m_data, DataSize);
  if ( this->m_status == BD_NOT_CONNECTED )
  {
    this->m_cryptoState = BD_CRYPTO210_WAIT_SERVER_ACK;
    if ( this->m_migrationState )
      this->m_migrationState = BD_MIGRATION220_RECONNECTED;
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v3->m_refCount, 0xFFFFFFFF) == 1 )
    ((void (__fastcall *)(bdByteBuffer *, __int64))v3->~bdReferencable)(v3, 1i64);
  return v5;
}

/*
==============
bdLobbyConnection::send220MigrateInitAck
==============
*/
_BOOL8 bdLobbyConnection::send220MigrateInitAck(bdLobbyConnection *this)
{
  bdTaskByteBuffer *v2; 
  bdTaskByteBuffer *v3; 
  bdTaskByteBuffer *v4; 
  unsigned int DataSize; 
  bool v6; 
  bdReference<bdTaskByteBuffer> message; 
  bdTaskByteBuffer *v9; 

  v2 = (bdTaskByteBuffer *)bdMemory::allocate(0x58ui64);
  message.m_ptr = v2;
  if ( v2 )
  {
    bdTaskByteBuffer::bdTaskByteBuffer(v2, 1u, 0);
    v4 = v3;
  }
  else
  {
    v4 = NULL;
  }
  v9 = v4;
  if ( v4 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v4->m_refCount, 1u);
  v6 = 0;
  if ( v4 )
  {
    if ( bdByteBuffer::writeUByte8(v4, 1u) )
    {
      DataSize = bdByteBuffer::getDataSize(v4);
      message.m_ptr = v4;
      _InterlockedExchangeAdd((volatile signed __int32 *)&v4->m_refCount, 1u);
      if ( bdLobbyConnection::sendTask210(this, (bdReference<bdTaskByteBuffer>)&message, DataSize, 1, 0x88u) )
        v6 = 1;
    }
  }
  if ( v4 && _InterlockedExchangeAdd((volatile signed __int32 *)&v4->m_refCount, 0xFFFFFFFF) == 1 )
    ((void (__fastcall *)(bdTaskByteBuffer *, __int64))v4->~bdReferencable)(v4, 1i64);
  return v6;
}

/*
==============
bdLobbyConnection::sendFramedMessage
==============
*/
void bdLobbyConnection::sendFramedMessage(bdLobbyConnection *this, const void *buffer, const unsigned int bufferSize)
{
  size_t v3; 
  bdByteBuffer *v6; 
  bdByteBuffer *v7; 
  unsigned int v8; 
  bdPendingBufferTransfer item; 

  v3 = bufferSize;
  v6 = (bdByteBuffer *)bdMemory::allocate(0x38ui64);
  v7 = v6;
  if ( v6 )
  {
    v6->m_refCount.m_value._My_val = 0;
    v6->__vftable = (bdByteBuffer_vtbl *)&bdByteBuffer::`vftable';
    v6->m_size = v3;
    v6->m_data = NULL;
    *(_WORD *)&v6->m_typeChecked = 0;
    v6->m_allocatedData = 0;
    if ( buffer )
    {
      bdByteBuffer::init(v6, v3);
      memcpy_0(v7->m_data, buffer, v3);
    }
    else
    {
      bdHandleAssert(0, "bytesToCopy != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdbytebuffer.inl", "bdByteBuffer::init", 0x41u, "Buffer bytestToCopy should not be null", -2i64);
    }
  }
  else
  {
    v7 = NULL;
  }
  if ( v7 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v7->m_refCount, 1u);
  if ( v7 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v7->m_refCount, 1u);
  item.m_refCount.m_value._My_val = 0;
  item.__vftable = (bdPendingBufferTransfer_vtbl *)&bdPendingBufferTransfer::`vftable';
  item.m_buffer.m_ptr = v7;
  if ( v7 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v7->m_refCount, 1u);
  item.m_txPtr = v7->m_data;
  item.m_isThrottled = 0;
  v8 = 0;
  if ( item.m_txPtr )
    v8 = v3;
  item.m_txAvail = v8;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v7->m_refCount, 0xFFFFFFFF) == 1 )
    ((void (__fastcall *)(bdByteBuffer *, __int64))v7->~bdReferencable)(v7, 1i64);
  bdQueue<bdPendingBufferTransfer>::enqueue(&this->m_outgoingBuffers, &item);
  bdLobbyConnection::pump(this);
  item.__vftable = (bdPendingBufferTransfer_vtbl *)&bdPendingBufferTransfer::`vftable';
  if ( item.m_buffer.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&item.m_buffer.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
  {
    if ( item.m_buffer.m_ptr )
      ((void (__fastcall *)(bdByteBuffer *, __int64))item.m_buffer.m_ptr->~bdReferencable)(item.m_buffer.m_ptr, 1i64);
    item.m_buffer.m_ptr = NULL;
  }
  bdReferencable::~bdReferencable(&item);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v7->m_refCount, 0xFFFFFFFF) == 1 )
    ((void (__fastcall *)(bdByteBuffer *, __int64))v7->~bdReferencable)(v7, 1i64);
}

/*
==============
bdLobbyConnection::sendRaw
==============
*/
void bdLobbyConnection::sendRaw(bdLobbyConnection *this, void *buffer, const unsigned int bufferSize)
{
  bdHandleAssert(!this->m_isLSGConnection, "!m_isLSGConnection", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobbyconnection\\bdlobbyconnection.cpp", "bdLobbyConnection::sendRaw", 0x228u, "Auth-only method used on an LSG connection instance.");
  bdLobbyConnection::sendFramedMessage(this, buffer, bufferSize);
}

/*
==============
bdLobbyConnection::sendTask200
==============
*/
char bdLobbyConnection::sendTask200(bdLobbyConnection *this, bdReference<bdTaskByteBuffer> message, unsigned int messageSize, const bool encrypt)
{
  bdReference<bdTaskByteBuffer> *m_ptr; 
  bdLobbyConnection *v7; 
  char v8; 
  char m_encryptionType; 
  int v10; 
  unsigned int v11; 
  unsigned int m_size; 
  unsigned int PaddingSize; 
  unsigned int v14; 
  bdTaskByteBuffer *p_m_messageCount; 
  unsigned __int8 *v17; 
  unsigned __int8 *v18; 
  bool v19; 
  unsigned int v20; 
  bool v21; 
  char v22; 
  unsigned __int8 *v23; 
  unsigned int v24; 
  bool appended; 
  unsigned int v26; 
  unsigned int v27; 
  unsigned int v28; 
  __int64 v29; 
  bdTaskByteBuffer *v30; 
  char v31; 
  bool v32; 
  bdCypher *m_cypher; 
  bool v34; 
  bdTaskByteBuffer *v35; 
  unsigned __int8 *HeaderStart; 
  bool m_tasksAreThrottled; 
  bdTaskByteBuffer *v38; 
  char v39; 
  char v40; 
  unsigned int offset; 
  unsigned int writeSize; 
  char v43; 
  char v44; 
  bdReference<bdTaskByteBuffer> v45; 
  unsigned int v46; 
  unsigned __int8 src[4]; 
  unsigned int v48; 
  bdReference<bdTaskByteBuffer> buffer; 
  bdLobbyConnection *v50; 
  unsigned int v51; 
  bdTaskByteBuffer *v52; 
  bdHMacSHA1 v53; 
  bdPendingBufferTransfer item; 
  bdPendingBufferTransfer v55; 
  __int64 v56; 
  bdTaskByteBuffer *v57; 
  unsigned __int8 iv[8]; 
  __int64 v59; 
  __int64 v60; 

  v56 = -2i64;
  v46 = messageSize;
  m_ptr = (bdReference<bdTaskByteBuffer> *)message.m_ptr;
  v52 = message.m_ptr;
  v7 = this;
  v50 = this;
  v57 = message.m_ptr;
  bdHandleAssert(this->m_isLSGConnection, "m_isLSGConnection", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobbyconnection\\bdlobbyconnection.cpp", "bdLobbyConnection::sendTask200", 0x199u, "LSG-only method used on an auth connection instance.");
  v8 = 0;
  if ( messageSize > v7->m_maxSendMessageSize )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobby/bdLobbyConnection", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobbyconnection\\bdlobbyconnection.cpp", "bdLobbyConnection::sendTask200", 0x19Fu, "Message too big for outgoing buffer");
    goto LABEL_73;
  }
  if ( (unsigned int)(v7->m_status - 1) <= 1 )
  {
    if ( !encrypt )
    {
      bdTaskByteBuffer::setHeaderSize(m_ptr->m_ptr, 5u);
      HeaderStart = bdTaskByteBuffer::getHeaderStart(m_ptr->m_ptr);
      bdHandleAssert(1, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 4i64);
      if ( HeaderStart )
      {
        v48 = messageSize + 1;
        *(_DWORD *)HeaderStart = messageSize + 1;
      }
      bdHandleAssert(1, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 1i64);
      if ( HeaderStart )
        HeaderStart[4] = 0;
      v8 = 1;
      m_tasksAreThrottled = v7->m_tasksAreThrottled;
      v38 = m_ptr->m_ptr;
      v45.m_ptr = v38;
      if ( v38 )
        _InterlockedExchangeAdd((volatile signed __int32 *)&v38->m_refCount, 1u);
      bdPendingBufferTransfer::bdPendingBufferTransfer(&v55, (bdReference<bdTaskByteBuffer>)&v45, messageSize + 5, m_tasksAreThrottled);
      bdQueue<bdPendingBufferTransfer>::enqueue(&v7->m_outgoingBuffers, &v55);
      v55.__vftable = (bdPendingBufferTransfer_vtbl *)&bdPendingBufferTransfer::`vftable';
      if ( v55.m_buffer.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v55.m_buffer.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
      {
        if ( v55.m_buffer.m_ptr )
          ((void (__fastcall *)(bdByteBuffer *, __int64))v55.m_buffer.m_ptr->~bdReferencable)(v55.m_buffer.m_ptr, 1i64);
        v55.m_buffer.m_ptr = NULL;
      }
      bdReferencable::~bdReferencable(&v55);
      goto LABEL_73;
    }
    m_encryptionType = v7->m_encryptionType;
    v39 = m_encryptionType;
    bdHMacSHA1::bdHMacSHA1(&v53, v7->m_sessionKey, 0x18u);
    writeSize = 4;
    v10 = 16;
    if ( m_encryptionType != 2 )
      v10 = 8;
    v11 = -v10 & (v10 + messageSize + 3);
    m_size = m_ptr->m_ptr->m_size;
    PaddingSize = bdTaskByteBuffer::getPaddingSize(m_ptr->m_ptr);
    bdHandleAssert(writeSize + m_size + PaddingSize >= v11, "(signatureSize + message->getSize() + message->getPaddingSize()) >= cypherSize", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobbyconnection\\bdlobbyconnection.cpp", "bdLobbyConnection::sendTask200", 0x1BEu, "bdTaskBuffer allocation too small");
    v14 = writeSize + 9;
    bdTaskByteBuffer::setHeaderSize(m_ptr->m_ptr, writeSize + 9);
    if ( writeSize + 9 != bdTaskByteBuffer::getHeaderSize(m_ptr->m_ptr) )
    {
      bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobbyconnection\\bdlobbyconnection.cpp", "bdLobbyConnection::sendTask200", 0x1C6u, "Memory size for encrypted header invalid");
      bdHMacSHA1::~bdHMacSHA1(&v53);
      bdReference<bdTaskByteBuffer>::~bdReference<bdTaskByteBuffer>(m_ptr);
      return 0;
    }
    *(_QWORD *)iv = 0i64;
    v59 = 0i64;
    v60 = 0i64;
    p_m_messageCount = (bdTaskByteBuffer *)&v7->m_messageCount;
    buffer.m_ptr = (bdTaskByteBuffer *)&v7->m_messageCount;
    bdCryptoUtils::calculateInitialVector(v7->m_messageCount, iv);
    v17 = bdTaskByteBuffer::getHeaderStart(m_ptr->m_ptr);
    v18 = v17;
    offset = 4;
    v19 = v14 >= 4 || !v17;
    bdHandleAssert(v19, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 4i64);
    if ( v18 )
    {
      if ( v14 < 4 )
      {
LABEL_17:
        if ( v18 )
          goto LABEL_29;
LABEL_18:
        LODWORD(v45.m_ptr) = offset;
        v20 = offset + 1;
        offset = v20;
        v21 = v20 <= v14 || !v18;
        bdHandleAssert(v21, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 1i64);
        if ( v18 )
        {
          if ( v20 > v14 )
            goto LABEL_26;
          v43 = v39;
          v18[LODWORD(v45.m_ptr)] = v39;
        }
        if ( v20 <= v14 )
        {
LABEL_27:
          if ( bdBytePacker::appendBasicType<unsigned int>(v18, v14, offset, &offset, &v7->m_messageCount) )
          {
            v22 = 1;
LABEL_30:
            bdHandleAssert(m_ptr->m_ptr->m_data == &v18[offset + writeSize], "message->getData() == (writePtr + offset + signatureSize)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobbyconnection\\bdlobbyconnection.cpp", "bdLobbyConnection::sendTask200", 0x1D9u, "Remote task serialization error");
            v23 = &v18[offset];
            v24 = 0;
            offset = 0;
            if ( !v22 || (appended = bdBytePacker::appendBuffer(v23, v11, 0, &offset, src, writeSize), v24 = offset, v40 = 1, !appended) )
              v40 = 0;
            v48 = v24 + 1;
            v26 = v46;
            v27 = v46 + v24;
            offset = v27;
            v28 = v11 - v46 - writeSize;
            LODWORD(v45.m_ptr) = v28;
            if ( v11 - v46 != writeSize )
            {
              v29 = v28;
              v30 = buffer.m_ptr;
              while ( 1 )
              {
                v31 = (char)v30->__vftable;
                offset = v27 + 1;
                v32 = v27 + 1 <= v11 || !v23;
                bdHandleAssert(v32, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 1i64);
                if ( v23 && v27 + 1 <= v11 )
                {
                  v44 = v31;
                  v23[v27] = v31;
                }
                if ( !--v29 )
                  break;
                v27 = offset;
              }
              m_ptr = (bdReference<bdTaskByteBuffer> *)v52;
              v7 = v50;
              p_m_messageCount = buffer.m_ptr;
              v28 = (unsigned int)v45.m_ptr;
              v26 = v46;
            }
            bdHMacSHA1::process(&v53, &v23[v48], v26 + v28 - 1);
            bdHMacSHA1::getData(&v53, src, &writeSize);
            bdBytePacker::appendBuffer(v23, v11, 0, &offset, src, writeSize);
            m_cypher = v7->m_cypher;
            if ( m_cypher )
            {
              if ( v40 && m_cypher->encrypt(m_cypher, iv, v23, v23, v11) )
              {
                v8 = 1;
LABEL_51:
                ++LODWORD(p_m_messageCount->__vftable);
                if ( v8 )
                {
                  v34 = v7->m_tasksAreThrottled;
                  v35 = m_ptr->m_ptr;
                  buffer.m_ptr = v35;
                  if ( v35 )
                    _InterlockedExchangeAdd((volatile signed __int32 *)&v35->m_refCount, 1u);
                  bdPendingBufferTransfer::bdPendingBufferTransfer(&item, (bdReference<bdTaskByteBuffer>)&buffer, v11 + 9, v34);
                  bdQueue<bdPendingBufferTransfer>::enqueue(&v7->m_outgoingBuffers, &item);
                  item.__vftable = (bdPendingBufferTransfer_vtbl *)&bdPendingBufferTransfer::`vftable';
                  if ( item.m_buffer.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&item.m_buffer.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
                  {
                    if ( item.m_buffer.m_ptr )
                      ((void (__fastcall *)(bdByteBuffer *, __int64))item.m_buffer.m_ptr->~bdReferencable)(item.m_buffer.m_ptr, 1i64);
                    item.m_buffer.m_ptr = NULL;
                  }
                  bdReferencable::~bdReferencable(&item);
                }
                bdHMacSHA1::~bdHMacSHA1(&v53);
                goto LABEL_73;
              }
            }
            else
            {
              bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobby/bdLobbyConnection", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobbyconnection\\bdlobbyconnection.cpp", "bdLobbyConnection::sendTask200", 0x1FBu, "Trying to use a bdLobbyConnection without having called setSessionKey");
            }
            v8 = 0;
            goto LABEL_51;
          }
LABEL_29:
          v22 = 0;
          goto LABEL_30;
        }
LABEL_26:
        if ( v18 )
          goto LABEL_29;
        goto LABEL_27;
      }
      v51 = v11 + 5;
      *(_DWORD *)v18 = v11 + 5;
    }
    if ( v14 >= 4 )
      goto LABEL_18;
    goto LABEL_17;
  }
LABEL_73:
  bdLobbyConnection::pump(v7);
  if ( m_ptr->m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
  {
    if ( m_ptr->m_ptr )
      ((void (__fastcall *)(bdTaskByteBuffer *, __int64))m_ptr->m_ptr->~bdReferencable)(m_ptr->m_ptr, 1i64);
    m_ptr->m_ptr = NULL;
  }
  return v8;
}

/*
==============
bdLobbyConnection::sendTask210
==============
*/
__int64 bdLobbyConnection::sendTask210(bdLobbyConnection *this, bdReference<bdTaskByteBuffer> message, unsigned int messageSize, const bool __formal, ...)
{
  unsigned __int8 v7; 
  bdTaskByteBuffer_vtbl *v8; 
  __int64 v9; 
  bdLinkedList<bdLobbyConnectionMigrationHeldBackTask>::Node *m_tail; 
  bdLinkedList<bdLobbyConnectionMigrationHeldBackTask>::Node *v11; 
  bdLinkedList<bdLobbyConnectionMigrationHeldBackTask>::Node *v12; 
  bdLinkedList<bdLobbyConnectionMigrationHeldBackTask>::Node *m_next; 
  bdLinkedList<bdLobbyConnectionMigrationHeldBackTask>::Node *v14; 
  unsigned __int8 *HeaderStart; 
  __int64 v16; 
  unsigned int v17; 
  bool v18; 
  __int64 v19; 
  unsigned int v20; 
  bool v21; 
  char v22; 
  bdTrulyRandomImpl *Instance; 
  bool v24; 
  unsigned int v25; 
  unsigned __int8 *v26; 
  char v27; 
  bool v28; 
  bdTaskByteBuffer_vtbl *v29; 
  void (__fastcall *v30)(bdReferencable *); 
  __int64 v31; 
  void (__fastcall *v32)(bdReferencable *); 
  bool v33; 
  size_t v34; 
  bool v35; 
  bool v36; 
  bool v37; 
  unsigned int v38; 
  void (__fastcall *v39)(bdReferencable *); 
  char v40; 
  bool m_tasksAreThrottled; 
  bdTaskByteBuffer_vtbl *v42; 
  unsigned int offset; 
  unsigned int length; 
  unsigned int totalSize[2]; 
  char v47; 
  char v48; 
  size_t Size; 
  unsigned __int8 *digest; 
  unsigned int var[4]; 
  bdPendingBufferTransfer item; 
  bdHMacSHA1 v53; 
  __int64 v54; 
  bdTaskByteBuffer *m_ptr; 
  __int64 v56; 
  unsigned int v57; 
  unsigned __int8 in[16]; 
  va_list va; 

  va_start(va, __formal);
  v54 = -2i64;
  m_ptr = message.m_ptr;
  var[0] = messageSize;
  bdHandleAssert(this->m_isLSGConnection, "m_isLSGConnection", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobbyconnection\\bdlobbyconnection.cpp", "bdLobbyConnection::sendTask210", 0x118u, "LSG-only method used on an auth connection instance.");
  v7 = 0;
  if ( messageSize > this->m_maxSendMessageSize )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobby/bdLobbyConnection", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobbyconnection\\bdlobbyconnection.cpp", "bdLobbyConnection::sendTask210", 0x11Eu, "Message too big for outgoing buffer.");
    goto LABEL_101;
  }
  if ( this->m_migrationState )
  {
    v8 = message.m_ptr->__vftable;
    v9 = (__int64)v8;
    *(_QWORD *)totalSize = message.m_ptr->__vftable;
    if ( v8 )
    {
      _InterlockedExchangeAdd((volatile signed __int32 *)&v8->allocateBuffer, 1u);
      v9 = *(_QWORD *)totalSize;
    }
    v56 = v9;
    if ( v8 )
    {
      _InterlockedExchangeAdd((volatile signed __int32 *)&v8->allocateBuffer, 1u);
      v9 = *(_QWORD *)totalSize;
    }
    v57 = messageSize;
    if ( v8 )
    {
      v9 = *(_QWORD *)totalSize;
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v8->allocateBuffer, 0xFFFFFFFF) == 1 )
        (***(void (__fastcall ****)(_QWORD, __int64))totalSize)(*(_QWORD *)totalSize, 1i64);
    }
    m_tail = this->m_migrationOutgoingTaskQueue.m_list.m_tail;
    v11 = (bdLinkedList<bdLobbyConnectionMigrationHeldBackTask>::Node *)bdMemory::allocate(0x20ui64);
    v12 = v11;
    digest = (unsigned __int8 *)v11;
    if ( v11 )
    {
      v11->m_data.m_task.m_ptr = (bdTaskByteBuffer *)v9;
      if ( v8 )
      {
        _InterlockedExchangeAdd((volatile signed __int32 *)&v8->allocateBuffer, 1u);
        v9 = *(_QWORD *)totalSize;
      }
      v11->m_data.m_messageSize = messageSize;
    }
    else
    {
      v12 = NULL;
    }
    if ( m_tail )
    {
      v12->m_next = m_tail->m_next;
      v12->m_prev = m_tail;
      m_next = m_tail->m_next;
      if ( m_next )
      {
        m_next->m_prev = v12;
      }
      else
      {
        bdHandleAssert(m_tail == this->m_migrationOutgoingTaskQueue.m_list.m_tail, "node == m_tail", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdlinkedlist.inl", "bdLinkedList<class bdLobbyConnectionMigrationHeldBackTask>::insertAfter", 0x176u, "bdLinkedList::insertAfter, node has no next entry, but is not the tail.");
        this->m_migrationOutgoingTaskQueue.m_list.m_tail = v12;
      }
      m_tail->m_next = v12;
    }
    else
    {
      v12->m_next = NULL;
      v12->m_prev = this->m_migrationOutgoingTaskQueue.m_list.m_tail;
      v14 = this->m_migrationOutgoingTaskQueue.m_list.m_tail;
      if ( v14 )
        v14->m_next = v12;
      else
        this->m_migrationOutgoingTaskQueue.m_list.m_head = v12;
      this->m_migrationOutgoingTaskQueue.m_list.m_tail = v12;
    }
    ++this->m_migrationOutgoingTaskQueue.m_list.m_size;
    if ( v9 && _InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 8), 0xFFFFFFFF) == 1 )
      (***(void (__fastcall ****)(_QWORD, __int64))totalSize)(*(_QWORD *)totalSize, 1i64);
    v7 = 1;
    goto LABEL_101;
  }
  if ( this->m_status != BD_NOT_CONNECTED || this->m_cryptoState != BD_CRYPTO210_READY )
    goto LABEL_101;
  length = (messageSize + 20) & 0xFFFFFFF0;
  LODWORD(Size) = length - messageSize - 5;
  totalSize[0] = length + 34;
  bdTaskByteBuffer::setHeaderSize((bdTaskByteBuffer *)message.m_ptr->__vftable, 0x1Fu);
  HeaderStart = bdTaskByteBuffer::getHeaderStart((bdTaskByteBuffer *)message.m_ptr->__vftable);
  offset = 4;
  bdHandleAssert(1, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 4i64);
  if ( HeaderStart )
  {
    var[2] = length + 30;
    *(_DWORD *)HeaderStart = length + 30;
  }
  v16 = offset;
  v17 = offset + 1;
  offset = v17;
  v18 = v17 <= 0x1F || !HeaderStart;
  bdHandleAssert(v18, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 1i64);
  if ( !HeaderStart )
  {
LABEL_40:
    if ( v17 <= 0x1F )
      goto LABEL_42;
    goto LABEL_41;
  }
  if ( v17 <= 0x1F )
  {
    v47 = -85;
    HeaderStart[v16] = -85;
    goto LABEL_40;
  }
LABEL_41:
  if ( HeaderStart )
  {
LABEL_53:
    v22 = 0;
    goto LABEL_54;
  }
LABEL_42:
  v19 = offset;
  v20 = offset + 1;
  offset = v20;
  v21 = v20 <= 0x1F || !HeaderStart;
  bdHandleAssert(v21, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 1i64);
  if ( HeaderStart )
  {
    if ( v20 > 0x1F )
      goto LABEL_50;
    v48 = -123;
    HeaderStart[v19] = -123;
  }
  if ( v20 <= 0x1F )
    goto LABEL_51;
LABEL_50:
  if ( HeaderStart )
    goto LABEL_53;
LABEL_51:
  if ( !bdBytePacker::appendBasicType<unsigned int>(HeaderStart, 0x1Fu, offset, &offset, &this->m_cypher210SendCounter) )
    goto LABEL_53;
  v22 = 1;
LABEL_54:
  Instance = bdSingleton<bdTrulyRandomImpl>::getInstance();
  bdTrulyRandomImpl::getRandomUByte8(Instance, in, 0x10u);
  v24 = v22 && bdBytePacker::appendBuffer(HeaderStart, 0x1Fu, offset, &offset, in, 0x10u);
  v25 = offset;
  v26 = &HeaderStart[offset];
  if ( !v24 )
    goto LABEL_63;
  if ( !bdBytePacker::appendBasicType<unsigned int>(HeaderStart, 0x1Fu, offset, &offset, var) || !bdBytePacker::appendBasicType<unsigned char>(HeaderStart, 0x1Fu, offset, &offset, (const unsigned __int8 *)va) )
  {
    v25 = offset;
LABEL_63:
    v27 = 0;
    goto LABEL_64;
  }
  v27 = 1;
  v25 = offset;
LABEL_64:
  bdHandleAssert(&HeaderStart[v25] == (unsigned __int8 *)message.m_ptr->resizeToFit, "headerPtr + headerOffset == message->getData()", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobbyconnection\\bdlobbyconnection.cpp", "bdLobbyConnection::sendTask210", 0x160u, "Pointer arithmetic error.");
  v28 = v27 && &HeaderStart[offset] == (unsigned __int8 *)message.m_ptr->resizeToFit;
  v29 = message.m_ptr->__vftable;
  v30 = message.m_ptr->__vftable[2].~bdReferencable;
  v31 = length;
  digest = &v26[length];
  v32 = (void (__fastcall *)(bdReferencable *))(digest + 8);
  bdHandleAssert(digest + 8 <= (unsigned __int8 *)v30 + LODWORD(v29[2].allocateBuffer), "payloadStartPtr + plainPayloadTotal + 8 <= message->getStartOfTaskDataBuffer() + message->getSizeOfTaskDataBuffer()", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobbyconnection\\bdlobbyconnection.cpp", "bdLobbyConnection::sendTask210", 0x166u, "Pointer arithmetic error.");
  v33 = v28 && (char *)v32 <= (char *)((char *)message.m_ptr->__vftable[2].~bdReferencable + LODWORD(message.m_ptr->__vftable[2].allocateBuffer));
  v34 = (unsigned int)Size;
  bdHandleAssert((unsigned int)Size < 0x10, "plainPayloadPad < 16", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobbyconnection\\bdlobbyconnection.cpp", "bdLobbyConnection::sendTask210", 0x16Bu, "Pointer arithmetic errors.");
  v35 = v33 && (unsigned int)v34 < 0x10;
  bdHandleAssert((unsigned int)v34 <= length, "plainPayloadPad <= plainPayloadTotal", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobbyconnection\\bdlobbyconnection.cpp", "bdLobbyConnection::sendTask210", 0x16Du, "Pointer arithmetic errors.");
  v36 = v35 && (unsigned int)v34 <= length;
  memset_0(&v26[v31 - v34], 0, v34);
  v37 = v36 && this->m_cypher210Client->encrypt(this->m_cypher210Client, in, v26, v26, length);
  bdHMacSHA1::bdHMacSHA1(&v53, this->m_cypher210ClientMacKey, 0x14u);
  v38 = totalSize[0];
  v39 = (void (__fastcall *)(bdReferencable *))&HeaderStart[totalSize[0] - 20];
  bdHandleAssert((char *)v39 < (char *)((char *)message.m_ptr->__vftable[2].~bdReferencable + LODWORD(message.m_ptr->__vftable[2].allocateBuffer)), "headerPtr + (recordTotalSize - BD_SHA1_HASH_SIZE) < message->getStartOfTaskDataBuffer() + message->getSizeOfTaskDataBuffer()", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobbyconnection\\bdlobbyconnection.cpp", "bdLobbyConnection::sendTask210", 0x179u, "Pointer arithmetic error.");
  if ( v37 && (char *)v39 < (char *)((char *)message.m_ptr->__vftable[2].~bdReferencable + LODWORD(message.m_ptr->__vftable[2].allocateBuffer)) && bdHMacSHA1::process(&v53, HeaderStart, v38 - 8) )
  {
    length = 8;
    if ( bdHMacSHA1::getData(&v53, digest, &length) )
    {
      v40 = 1;
      goto LABEL_91;
    }
  }
  else
  {
    length = 8;
  }
  v40 = 0;
LABEL_91:
  bdHandleAssert(length == 8, "hmacSize == 8", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobbyconnection\\bdlobbyconnection.cpp", "bdLobbyConnection::sendTask210", 0x17Fu, "Unexpected hmac size.");
  bdHMacSHA1::~bdHMacSHA1(&v53);
  if ( v40 )
  {
    ++this->m_cypher210SendCounter;
    m_tasksAreThrottled = this->m_tasksAreThrottled;
    v42 = message.m_ptr->__vftable;
    Size = (size_t)v42;
    if ( v42 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v42->allocateBuffer, 1u);
    bdPendingBufferTransfer::bdPendingBufferTransfer(&item, (bdReference<bdTaskByteBuffer>)&Size, v38, m_tasksAreThrottled);
    bdQueue<bdPendingBufferTransfer>::enqueue(&this->m_outgoingBuffers, &item);
    v7 = 1;
    item.__vftable = (bdPendingBufferTransfer_vtbl *)&bdPendingBufferTransfer::`vftable';
    if ( item.m_buffer.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&item.m_buffer.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
    {
      if ( item.m_buffer.m_ptr )
        ((void (__fastcall *)(bdByteBuffer *, __int64))item.m_buffer.m_ptr->~bdReferencable)(item.m_buffer.m_ptr, 1i64);
      item.m_buffer.m_ptr = NULL;
    }
    bdReferencable::~bdReferencable(&item);
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobby/bdLobbyConnection", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobbyconnection\\bdlobbyconnection.cpp", "bdLobbyConnection::sendTask210", 0x18Bu, "Failed to serialize and encrypt record frame.");
    v7 = 0;
  }
LABEL_101:
  bdLobbyConnection::pump(this);
  if ( message.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&message.m_ptr->allocateBuffer, 0xFFFFFFFF) == 1 )
  {
    if ( message.m_ptr->__vftable )
      (*(void (__fastcall **)(bdTaskByteBuffer_vtbl *, __int64))message.m_ptr->~bdReferencable)(message.m_ptr->__vftable, 1i64);
    message.m_ptr->__vftable = NULL;
  }
  return v7;
}

/*
==============
bdLobbyConnection::sendTask
==============
*/
_BOOL8 bdLobbyConnection::sendTask(bdLobbyConnection *this, bdReference<bdTaskByteBuffer> message, unsigned int messageSize, const bool encrypt)
{
  bdTaskByteBuffer *v8; 
  bool v9; 
  bdReference<bdTaskByteBuffer> messagea; 
  bdTaskByteBuffer *m_ptr; 

  m_ptr = message.m_ptr;
  bdHandleAssert(this->m_isLSGConnection, "m_isLSGConnection", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobbyconnection\\bdlobbyconnection.cpp", "bdLobbyConnection::sendTask", 0xE5u, "LSG-only method used on an auth connection instance.", -2i64);
  v8 = (bdTaskByteBuffer *)message.m_ptr->__vftable;
  messagea.m_ptr = v8;
  if ( v8 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v8->m_refCount, 1u);
  v9 = bdLobbyConnection::sendTask210(this, (bdReference<bdTaskByteBuffer>)&messagea, messageSize, encrypt, 0x86u);
  if ( message.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&message.m_ptr->allocateBuffer, 0xFFFFFFFF) == 1 )
  {
    if ( message.m_ptr->__vftable )
      (*(void (__fastcall **)(bdTaskByteBuffer_vtbl *, __int64))message.m_ptr->~bdReferencable)(message.m_ptr->__vftable, 1i64);
    message.m_ptr->__vftable = NULL;
  }
  return v9;
}

/*
==============
bdLobbyConnection::setSessionKey
==============
*/
char bdLobbyConnection::setSessionKey(bdLobbyConnection *this, const unsigned __int8 *sessionKey, const unsigned int encryptionMethod)
{
  return 1;
}

/*
==============
bdLobbyConnection::setTasksAreThrottled
==============
*/
void bdLobbyConnection::setTasksAreThrottled(bdLobbyConnection *this, bool areThrottled)
{
  this->m_tasksAreThrottled = areThrottled;
}

/*
==============
bdPendingBufferTransfer::updateTransfer
==============
*/
__int64 bdPendingBufferTransfer::updateTransfer(bdPendingBufferTransfer *this, unsigned int amountTransfered)
{
  unsigned int v3; 
  unsigned int m_txAvail; 
  __int64 result; 

  v3 = amountTransfered;
  bdHandleAssert(amountTransfered <= this->m_txAvail, "amountTransfered <= m_txAvail", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobbyconnection\\bdlobbyconnection.cpp", "bdPendingBufferTransfer::updateTransfer", 0x947u, "Transfered too much on lobby task");
  m_txAvail = this->m_txAvail;
  if ( m_txAvail <= v3 )
    v3 = this->m_txAvail;
  this->m_txPtr += v3;
  result = m_txAvail - v3;
  this->m_txAvail = result;
  return result;
}

