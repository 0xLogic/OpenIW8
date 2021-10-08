/*
==============
bdBandwidthTestClient::pumpDownloadReceive
==============
*/

void __fastcall bdBandwidthTestClient::pumpDownloadReceive(bdBandwidthTestClient *this)
{
  ?pumpDownloadReceive@bdBandwidthTestClient@@IEAAXXZ(this);
}

/*
==============
bdBandwidthTestClient::getTestType
==============
*/

bdBandwidthTestType __fastcall bdBandwidthTestClient::getTestType(bdBandwidthTestClient *this)
{
  return ?getTestType@bdBandwidthTestClient@@QEBA?AW4bdBandwidthTestType@@XZ(this);
}

/*
==============
bdBandwidthTestClient::stop
==============
*/

void __fastcall bdBandwidthTestClient::stop(bdBandwidthTestClient *this)
{
  ?stop@bdBandwidthTestClient@@QEAAXXZ(this);
}

/*
==============
bdBandwidthTestClient::bdBandwidthTestClient
==============
*/

void __fastcall bdBandwidthTestClient::bdBandwidthTestClient(bdBandwidthTestClient *this)
{
  ??0bdBandwidthTestClient@@QEAA@XZ(this);
}

/*
==============
bdBandwidthTestClient::~bdBandwidthTestClient
==============
*/

void __fastcall bdBandwidthTestClient::~bdBandwidthTestClient(bdBandwidthTestClient *this)
{
  ??1bdBandwidthTestClient@@QEAA@XZ(this);
}

/*
==============
bdBandwidthTestClient::getStatus
==============
*/

bdBandwidthTestStatus __fastcall bdBandwidthTestClient::getStatus(bdBandwidthTestClient *this)
{
  return ?getStatus@bdBandwidthTestClient@@QEBA?AW4bdBandwidthTestStatus@@XZ(this);
}

/*
==============
bdBandwidthTestClient::startUploadTest
==============
*/

void __fastcall bdBandwidthTestClient::startUploadTest(bdBandwidthTestClient *this)
{
  ?startUploadTest@bdBandwidthTestClient@@IEAAXXZ(this);
}

/*
==============
bdBandwidthTestClient::start
==============
*/

void __fastcall bdBandwidthTestClient::start(bdBandwidthTestClient *this, const bdBandwidthTestType type)
{
  ?start@bdBandwidthTestClient@@QEAAXW4bdBandwidthTestType@@@Z(this, type);
}

/*
==============
bdBandwidthTestClient::init
==============
*/

bool __fastcall bdBandwidthTestClient::init(bdBandwidthTestClient *this, bdLobbyService *const lobbyService)
{
  return ?init@bdBandwidthTestClient@@QEAA_NQEAVbdLobbyService@@@Z(this, lobbyService);
}

/*
==============
bdBandwidthTestClient::pumpUploadWait
==============
*/

void __fastcall bdBandwidthTestClient::pumpUploadWait(bdBandwidthTestClient *this)
{
  ?pumpUploadWait@bdBandwidthTestClient@@IEAAXXZ(this);
}

/*
==============
bdBandwidthTestClient::getErrorCode
==============
*/

bdLobbyErrorCode __fastcall bdBandwidthTestClient::getErrorCode(bdBandwidthTestClient *this)
{
  return ?getErrorCode@bdBandwidthTestClient@@QEBA?AW4bdLobbyErrorCode@@XZ(this);
}

/*
==============
bdBandwidthTestClient::finalizeTest
==============
*/

void __fastcall bdBandwidthTestClient::finalizeTest(bdBandwidthTestClient *this)
{
  ?finalizeTest@bdBandwidthTestClient@@IEAAXXZ(this);
}

/*
==============
bdBandwidthTestClient::handleFinalizeReply
==============
*/

void __fastcall bdBandwidthTestClient::handleFinalizeReply(bdBandwidthTestClient *this, const bdReference<bdByteBuffer> replyBuffer)
{
  ?handleFinalizeReply@bdBandwidthTestClient@@IEAAXV?$bdReference@VbdByteBuffer@@@@@Z(this, replyBuffer);
}

/*
==============
bdBandwidthTestClient::handleRequestReply
==============
*/

void __fastcall bdBandwidthTestClient::handleRequestReply(bdBandwidthTestClient *this, const bdReference<bdByteBuffer> replyBuffer)
{
  ?handleRequestReply@bdBandwidthTestClient@@IEAAXV?$bdReference@VbdByteBuffer@@@@@Z(this, replyBuffer);
}

/*
==============
bdBandwidthTestClient::pumpUploadSend
==============
*/

void __fastcall bdBandwidthTestClient::pumpUploadSend(bdBandwidthTestClient *this)
{
  ?pumpUploadSend@bdBandwidthTestClient@@IEAAXXZ(this);
}

/*
==============
bdBandwidthTestClient::getDownloadResults
==============
*/

bdBandwidthTestResults *__fastcall bdBandwidthTestClient::getDownloadResults(bdBandwidthTestClient *this)
{
  return ?getDownloadResults@bdBandwidthTestClient@@QEAAAEAVbdBandwidthTestResults@@XZ(this);
}

/*
==============
bdBandwidthTestClient::getUploadResults
==============
*/

bdBandwidthTestResults *__fastcall bdBandwidthTestClient::getUploadResults(bdBandwidthTestClient *this)
{
  return ?getUploadResults@bdBandwidthTestClient@@QEAAAEAVbdBandwidthTestResults@@XZ(this);
}

/*
==============
bdBandwidthTestClient::pumpFinalize
==============
*/

void __fastcall bdBandwidthTestClient::pumpFinalize(bdBandwidthTestClient *this)
{
  ?pumpFinalize@bdBandwidthTestClient@@IEAAXXZ(this);
}

/*
==============
bdBandwidthTestClient::quit
==============
*/

void __fastcall bdBandwidthTestClient::quit(bdBandwidthTestClient *this)
{
  ?quit@bdBandwidthTestClient@@QEAAXXZ(this);
}

/*
==============
bdBandwidthTestClient::startDownloadTest
==============
*/

void __fastcall bdBandwidthTestClient::startDownloadTest(bdBandwidthTestClient *this)
{
  ?startDownloadTest@bdBandwidthTestClient@@IEAAXXZ(this);
}

/*
==============
bdBandwidthTestClient::getInitStatus
==============
*/

bdBandwidthTestInitStatus __fastcall bdBandwidthTestClient::getInitStatus(bdBandwidthTestClient *this)
{
  return ?getInitStatus@bdBandwidthTestClient@@QEBA?AW4bdBandwidthTestInitStatus@@XZ(this);
}

/*
==============
bdBandwidthTestClient::pump
==============
*/

void __fastcall bdBandwidthTestClient::pump(bdBandwidthTestClient *this)
{
  ?pump@bdBandwidthTestClient@@QEAAXXZ(this);
}

/*
==============
bdBandwidthTestClient::pumpRequest
==============
*/

void __fastcall bdBandwidthTestClient::pumpRequest(bdBandwidthTestClient *this)
{
  ?pumpRequest@bdBandwidthTestClient@@IEAAXXZ(this);
}

/*
==============
bdBandwidthTestClient::bdBandwidthTestClient
==============
*/
void bdBandwidthTestClient::bdBandwidthTestClient(bdBandwidthTestClient *this)
{
  bdSocket::bdSocket(&this->m_socket);
  this->m_remoteTask.m_ptr = NULL;
  bdStopwatch::bdStopwatch(&this->m_timer);
  bdStopwatch::bdStopwatch(&this->m_recvTimeoutTimer);
  this->m_packetBuffer = NULL;
  *(_QWORD *)&this->m_nextPacketNum = 0i64;
  *(_QWORD *)&this->m_initStatus = 0i64;
  bdBandwidthTestResults::bdBandwidthTestResults(&this->m_uploadResults);
  bdBandwidthTestResults::bdBandwidthTestResults(&this->m_downloadResults);
  *(_QWORD *)&this->m_error = 0i64;
}

/*
==============
bdBandwidthTestClient::~bdBandwidthTestClient
==============
*/
void bdBandwidthTestClient::~bdBandwidthTestClient(bdBandwidthTestClient *this)
{
  bdRemoteTask *m_ptr; 
  bdRemoteTask *v3; 

  bdBandwidthTestClient::stop(this);
  bdBandwidthTestClient::quit(this);
  m_ptr = this->m_remoteTask.m_ptr;
  if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
  {
    v3 = this->m_remoteTask.m_ptr;
    if ( v3 )
      ((void (__fastcall *)(bdRemoteTask *, __int64))v3->~bdReferencable)(v3, 1i64);
    this->m_remoteTask.m_ptr = NULL;
  }
  bdSocket::~bdSocket(&this->m_socket);
}

/*
==============
bdBandwidthTestClient::finalizeTest
==============
*/
void bdBandwidthTestClient::finalizeTest(bdBandwidthTestClient *this)
{
  bdLobbyService *m_lobbyService; 
  bdRemoteTaskManager *TaskManager; 
  bdLobbyErrorCode started; 
  unsigned int line; 
  char *format; 
  char queryParams; 
  unsigned __int8 buffer[23]; 

  this->m_error = BD_START_TASK_FAILED;
  this->m_testStatus = BD_BANDWIDTH_TEST_FINALIZING;
  m_lobbyService = this->m_lobbyService;
  if ( !m_lobbyService )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdBandwidthTestClient", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlsgservices\\bdbandwidthtest.cpp", "bdBandwidthTestClient::finalizeTest", 0x26Bu, "Finalize bandwidth test failed, lobby service invalid.");
    return;
  }
  TaskManager = bdLobbyService::getTaskManager(m_lobbyService);
  if ( !TaskManager )
  {
    format = "Failed to retreive task manager from lobby service.";
    line = 655;
    goto LABEL_10;
  }
  bdHandleAssert(1, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 1i64);
  queryParams = 1;
  if ( !bdBandwidthTestResults::serialize(&this->m_downloadResults, buffer, 0x14u) )
  {
    format = "Failed to pack request buffer for finalize bandwidth test.";
    line = 650;
LABEL_10:
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdBandwidthTestClient", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlsgservices\\bdbandwidthtest.cpp", "bdBandwidthTestClient::finalizeTest", line, format);
    return;
  }
  started = bdRemoteTaskManager::startLSGTask(TaskManager, &this->m_remoteTask, 0x12u, 1u, &queryParams, 0x15u);
  this->m_error = started;
  if ( started )
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdBandwidthTestClient", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlsgservices\\bdbandwidthtest.cpp", "bdBandwidthTestClient::finalizeTest", 0x285u, "Failed to start task for finalize bandwidth test.");
  else
    bdLogMessage(BD_LOG_INFO, "info/", "bdBandwidthTestClient", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlsgservices\\bdbandwidthtest.cpp", "bdBandwidthTestClient::finalizeTest", 0x281u, "Finalize bandwidth test task started.");
}

/*
==============
bdBandwidthTestClient::getDownloadResults
==============
*/
bdBandwidthTestResults *bdBandwidthTestClient::getDownloadResults(bdBandwidthTestClient *this)
{
  return &this->m_downloadResults;
}

/*
==============
bdBandwidthTestClient::getErrorCode
==============
*/
__int64 bdBandwidthTestClient::getErrorCode(bdBandwidthTestClient *this)
{
  return (unsigned int)this->m_error;
}

/*
==============
bdBandwidthTestClient::getInitStatus
==============
*/
__int64 bdBandwidthTestClient::getInitStatus(bdBandwidthTestClient *this)
{
  return (unsigned int)this->m_initStatus;
}

/*
==============
bdBandwidthTestClient::getStatus
==============
*/
__int64 bdBandwidthTestClient::getStatus(bdBandwidthTestClient *this)
{
  return (unsigned int)this->m_testStatus;
}

/*
==============
bdBandwidthTestClient::getTestType
==============
*/
__int64 bdBandwidthTestClient::getTestType(bdBandwidthTestClient *this)
{
  return (unsigned int)this->m_type;
}

/*
==============
bdBandwidthTestClient::getUploadResults
==============
*/
bdBandwidthTestResults *bdBandwidthTestClient::getUploadResults(bdBandwidthTestClient *this)
{
  return &this->m_uploadResults;
}

/*
==============
bdBandwidthTestClient::handleFinalizeReply
==============
*/
void bdBandwidthTestClient::handleFinalizeReply(bdBandwidthTestClient *this, const bdReference<bdByteBuffer> replyBuffer)
{
  bdLobbyErrorCode m_error; 
  bdByteBuffer *v5; 
  __int64 v6; 
  char data; 
  bdByteBuffer *m_ptr; 
  unsigned __int16 v9; 
  bdReference<bdByteBuffer> buffer; 

  m_ptr = replyBuffer.m_ptr;
  this->m_error = BD_HANDLE_TASK_FAILED;
  if ( replyBuffer.m_ptr->__vftable && bdByteBuffer::read((bdByteBuffer *)replyBuffer.m_ptr->__vftable, &data, 1u) )
  {
    if ( data == 1 )
    {
      if ( bdByteBuffer::read((bdByteBuffer *)replyBuffer.m_ptr->__vftable, &v9, 2u) )
      {
        m_error = v9;
        this->m_error = v9;
      }
      else
      {
        bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdBandwidthTestClient", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlsgservices\\bdbandwidthtest.cpp", "bdBandwidthTestClient::handleFinalizeReply", 0x2DBu, "Failed to parse bandwidth test error code.");
        m_error = this->m_error;
      }
      bdLogMessage(BD_LOG_INFO, "info/", "bdBandwidthTestClient", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlsgservices\\bdbandwidthtest.cpp", "bdBandwidthTestClient::handleFinalizeReply", 0x2DEu, "Request for bandwidth finalize rejected (%u).", m_error);
    }
    if ( !data )
    {
      v5 = (bdByteBuffer *)replyBuffer.m_ptr->__vftable;
      buffer.m_ptr = v5;
      if ( v5 )
        _InterlockedExchangeAdd((volatile signed __int32 *)&v5->m_refCount, 1u);
      if ( bdBandwidthTestResults::deserialize(&this->m_uploadResults, (const bdReference<bdByteBuffer>)&buffer) )
      {
        LODWORD(v6) = this->m_error;
        bdLogMessage(BD_LOG_INFO, "info/", "bdBandwidthTestClient", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlsgservices\\bdbandwidthtest.cpp", "bdBandwidthTestClient::handleFinalizeReply", 0x2E6u, "Bandwidth test finalize complete.", v6, -2i64);
        this->m_error = BD_NO_ERROR;
        this->m_testStatus = BD_BANDWIDTH_TEST_DONE;
      }
    }
  }
  if ( replyBuffer.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&replyBuffer.m_ptr->allocateBuffer, 0xFFFFFFFF) == 1 )
  {
    if ( replyBuffer.m_ptr->__vftable )
      (*(void (__fastcall **)(bdByteBuffer_vtbl *, __int64))replyBuffer.m_ptr->~bdReferencable)(replyBuffer.m_ptr->__vftable, 1i64);
    replyBuffer.m_ptr->__vftable = NULL;
  }
}

/*
==============
bdBandwidthTestClient::handleRequestReply
==============
*/
void bdBandwidthTestClient::handleRequestReply(bdBandwidthTestClient *this, const bdReference<bdByteBuffer> replyBuffer)
{
  char v4; 
  bdLobbyErrorCode m_error; 
  unsigned int v6; 
  bool v7; 
  __int64 i; 
  unsigned __int8 *v9; 
  __int64 v10; 
  unsigned __int16 v11[2]; 
  unsigned int v12; 
  unsigned int v13; 
  unsigned int v14; 
  unsigned int v15; 
  unsigned int v16; 
  unsigned int v17; 
  unsigned int v18; 
  unsigned int v19; 
  __int64 v20; 
  char data; 
  bdByteBuffer *m_ptr; 
  unsigned __int8 v23; 
  unsigned __int16 v24; 

  m_ptr = replyBuffer.m_ptr;
  v20 = -2i64;
  this->m_error = BD_HANDLE_TASK_FAILED;
  if ( replyBuffer.m_ptr->__vftable && bdByteBuffer::read((bdByteBuffer *)replyBuffer.m_ptr->__vftable, &data, 1u) )
  {
    v4 = data;
    if ( data == 1 )
    {
      if ( bdByteBuffer::read((bdByteBuffer *)replyBuffer.m_ptr->__vftable, &v24, 2u) )
      {
        m_error = v24;
        this->m_error = v24;
      }
      else
      {
        bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdBandwidthTestClient", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlsgservices\\bdbandwidthtest.cpp", "bdBandwidthTestClient::handleRequestReply", 0x14Eu, "Failed to parse bandwidth test error code.");
        m_error = this->m_error;
      }
      bdLogMessage(BD_LOG_INFO, "info/", "bdBandwidthTestClient", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlsgservices\\bdbandwidthtest.cpp", "bdBandwidthTestClient::handleRequestReply", 0x151u, "Request for bandwidth test rejected (%u).", m_error);
    }
    if ( !v4 )
    {
      v6 = 0;
      if ( !bdByteBuffer::read((bdByteBuffer *)replyBuffer.m_ptr->__vftable, &v12, 4u) )
        goto LABEL_19;
      this->m_packetSize = v12;
      if ( !bdByteBuffer::read((bdByteBuffer *)replyBuffer.m_ptr->__vftable, &v13, 4u) )
        goto LABEL_19;
      this->m_numPackets = v13;
      if ( bdByteBuffer::read((bdByteBuffer *)replyBuffer.m_ptr->__vftable, &v14, 4u) && (this->m_senderInitialWait = v14, bdByteBuffer::read((bdByteBuffer *)replyBuffer.m_ptr->__vftable, &v15, 4u)) && (this->m_sendDuration = v15, bdByteBuffer::read((bdByteBuffer *)replyBuffer.m_ptr->__vftable, &v16, 4u)) && (this->m_receiverInitialWait = v16, bdByteBuffer::read((bdByteBuffer *)replyBuffer.m_ptr->__vftable, &v17, 4u)) && (this->m_receiveDuration = v17, bdByteBuffer::read((bdByteBuffer *)replyBuffer.m_ptr->__vftable, &v18, 4u)) && (this->m_lingerDuration = v18, bdByteBuffer::read((bdByteBuffer *)replyBuffer.m_ptr->__vftable, v11, 2u)) && (this->m_lsgPort = v11[0], bdByteBuffer::read((bdByteBuffer *)replyBuffer.m_ptr->__vftable, &v19, 4u)) )
      {
        v6 = v19;
        v7 = 1;
      }
      else
      {
LABEL_19:
        v7 = 0;
      }
      this->m_lsgAddr = v6;
      *(_QWORD *)this->m_cookie = 0i64;
      for ( i = 0i64; v7; i = (unsigned int)(i + 1) )
      {
        if ( (unsigned int)i >= 8 )
          break;
        v7 = bdByteBuffer::read((bdByteBuffer *)replyBuffer.m_ptr->__vftable, &v23, 1u);
        if ( v7 )
          this->m_cookie[i] = v23;
      }
      v9 = (unsigned __int8 *)bdMemory::reallocate(this->m_packetBuffer, this->m_packetSize);
      this->m_packetBuffer = v9;
      if ( v7 && v9 )
      {
        this->m_error = BD_NO_ERROR;
        LODWORD(v10) = this->m_packetSize;
        bdLogMessage(BD_LOG_INFO, "info/", "bdBandwidthTestClient", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlsgservices\\bdbandwidthtest.cpp", "bdBandwidthTestClient::startUploadTest", 0x180u, "Starting upload test: m_packetSize:%u m_numPackets:%u m_senderInitialWait:%u m_sendDuration:%u m_receiverInitialWait:%u m_receiveDuration:%u m_lingerDuration:%u m_lsgPort:%u m_lsgAddr:%u ", v10, this->m_numPackets, this->m_senderInitialWait, this->m_sendDuration, this->m_receiverInitialWait, this->m_receiveDuration, this->m_lingerDuration, this->m_lsgPort, this->m_lsgAddr);
        bdStopwatch::start(&this->m_timer);
        this->m_testStatus = BD_BANDWIDTH_TEST_UPLOAD_WAITING;
      }
      else
      {
        bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdBandwidthTestClient", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlsgservices\\bdbandwidthtest.cpp", "bdBandwidthTestClient::handleRequestReply", 0x175u, "Failed to parse bandwidth test reply.");
      }
    }
  }
  if ( replyBuffer.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&replyBuffer.m_ptr->allocateBuffer, 0xFFFFFFFF) == 1 )
  {
    if ( replyBuffer.m_ptr->__vftable )
      (*(void (__fastcall **)(bdByteBuffer_vtbl *, __int64))replyBuffer.m_ptr->~bdReferencable)(replyBuffer.m_ptr->__vftable, 1i64);
    replyBuffer.m_ptr->__vftable = NULL;
  }
}

/*
==============
bdBandwidthTestClient::init
==============
*/
bool bdBandwidthTestClient::init(bdBandwidthTestClient *this, bdLobbyService *const lobbyService, __int64 a3, _BOOL8 a4)
{
  bool v4; 
  bool v8; 

  v4 = this->m_initStatus == BD_BANDWIDTH_TEST_UNINITIALIZED;
  this->m_error = BD_BANDWIDTH_TEST_SOCKET_ERROR;
  if ( v4 )
  {
    LOBYTE(a4) = 1;
    v8 = this->m_socket.create((bdSocket *)this, 0, 0, a4);
    if ( v8 )
    {
      this->m_error = BD_NO_ERROR;
      this->m_initStatus = BD_BANDWIDTH_TEST_INITIALIZED;
      this->m_lobbyService = lobbyService;
      bdLogMessage(BD_LOG_INFO, "info/", "bdBandwidthTestClient", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlsgservices\\bdbandwidthtest.cpp", "bdBandwidthTestClient::init", 0x41u, "Initialised client.");
    }
    else
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdBandwidthTestClient", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlsgservices\\bdbandwidthtest.cpp", "bdBandwidthTestClient::init", 0x45u, "bdBandwidthTestClient failed to create UDP socket.");
    }
    return v8;
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdBandwidthTestClient", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlsgservices\\bdbandwidthtest.cpp", "bdBandwidthTestClient::init", 0x32u, "bdBandwidthTestClient already initialized.");
    return 0;
  }
}

/*
==============
bdBandwidthTestClient::pump
==============
*/

void __fastcall bdBandwidthTestClient::pump(bdBandwidthTestClient *this, double _XMM1_8)
{
  char v7; 

  if ( this->m_initStatus != BD_BANDWIDTH_TEST_INITIALIZED )
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdBandwidthTestClient", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlsgservices\\bdbandwidthtest.cpp", "bdBandwidthTestClient::pump", 0xC7u, "Pumping uninitialized bdBandwidthTestClient.");
  switch ( this->m_testStatus )
  {
    case BD_BANDWIDTH_TEST_IDLE:
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdBandwidthTestClient", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlsgservices\\bdbandwidthtest.cpp", "bdBandwidthTestClient::pump", 0xCEu, "Pumping idle bdBandwidthTestClient.");
      break;
    case BD_BANDWIDTH_TEST_REQUESTING_TEST:
      bdBandwidthTestClient::pumpRequest(this);
      break;
    case BD_BANDWIDTH_TEST_UPLOAD_WAITING:
      *(double *)&_XMM0 = bdStopwatch::getElapsedTimeInSeconds(&this->m_timer);
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, rax
        vmulss  xmm2, xmm1, cs:__real@3a83126f
        vcomiss xmm0, xmm2
      }
      if ( !v7 )
      {
        this->m_testStatus = BD_BANDWIDTH_TEST_UPLOAD_SENDING;
        this->m_nextPacketNum = 0;
        bdStopwatch::start(&this->m_timer);
      }
      break;
    case BD_BANDWIDTH_TEST_UPLOAD_SENDING:
      bdBandwidthTestClient::pumpUploadSend(this);
      break;
    case BD_BANDWIDTH_TEST_DOWNLOAD_WAITING:
    case BD_BANDWIDTH_TEST_DOWNLOAD_RECEIVING:
      bdBandwidthTestClient::pumpDownloadReceive(this);
      break;
    case BD_BANDWIDTH_TEST_FINALIZING:
      bdBandwidthTestClient::pumpFinalize(this);
      break;
    default:
      return;
  }
}

/*
==============
bdBandwidthTestClient::pumpDownloadReceive
==============
*/

void __fastcall bdBandwidthTestClient::pumpDownloadReceive(bdBandwidthTestClient *this, double _XMM1_8)
{
  bdStopwatch *p_m_timer; 
  unsigned int v9; 
  unsigned __int16 m_lsgPort; 
  bool v11; 
  unsigned int m_numPackets; 
  unsigned __int8 *m_packetBuffer; 
  unsigned int v14; 
  __int64 i; 
  unsigned __int8 *v16; 
  unsigned __int8 v17; 
  __int64 v18; 
  unsigned int m_bytesReceived; 
  unsigned int m_packetSize; 
  unsigned int m_minSeqNumber; 
  unsigned int m_maxSeqNumber; 
  char v27; 
  unsigned int m_receivePeriodMs; 
  __int64 v41; 
  double v42; 
  double v43; 
  bdAddr v44; 
  bdSockAddr address; 
  bdAddr v46; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-38h], xmm6
    vmovss  xmm6, cs:__real@447a0000
  }
  p_m_timer = &this->m_timer;
  while ( 1 )
  {
    bdAddr::bdAddr(&v44);
    v9 = this->m_socket.receiveFrom((bdSocket *)this, &v44, this->m_packetBuffer, this->m_packetSize);
    if ( (int)v9 <= 0 )
      break;
    m_lsgPort = this->m_lsgPort;
    bdSockAddr::bdSockAddr(&address, this->m_lsgAddr);
    bdAddr::bdAddr(&v46, &address, m_lsgPort);
    v11 = v9 == this->m_packetSize && bdSockAddr::compare(&v44.m_address, &v46.m_address, 1);
    m_numPackets = this->m_numPackets;
    if ( !v11 )
    {
LABEL_32:
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdBandwidthTestClient", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlsgservices\\bdbandwidthtest.cpp", "bdBandwidthTestClient::pumpDownloadReceive", 0x23Cu, "Received malformed bandwidth test packet.");
      p_m_timer = &this->m_timer;
      continue;
    }
    m_packetBuffer = this->m_packetBuffer;
    v14 = 4;
    if ( m_packetBuffer )
    {
      if ( v9 < 4 )
      {
        bdLogMessage(BD_LOG_WARNING, "warn/", "byte packer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::removeBasicType", 0xA2u, "Not enough data left to read %u bytes.", 4i64);
LABEL_12:
        if ( m_packetBuffer )
          goto LABEL_32;
        goto LABEL_13;
      }
      m_numPackets = *(_DWORD *)m_packetBuffer;
    }
    if ( v9 < 4 )
      goto LABEL_12;
LABEL_13:
    if ( m_numPackets >= this->m_numPackets )
      goto LABEL_32;
    for ( i = 0i64; (unsigned int)i < 8; i = (unsigned int)(i + 1) )
    {
      v16 = this->m_packetBuffer;
      v17 = 0;
      v18 = v14++;
      if ( !v16 )
        goto LABEL_19;
      if ( v14 <= v9 )
      {
        v17 = v16[v18];
LABEL_19:
        if ( v14 <= v9 )
          goto LABEL_21;
        goto LABEL_20;
      }
      bdLogMessage(BD_LOG_WARNING, "warn/", "byte packer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::removeBasicType", 0xA2u, "Not enough data left to read %u bytes.", 1i64);
LABEL_20:
      if ( v16 )
        goto LABEL_32;
LABEL_21:
      if ( v17 != this->m_cookie[i] )
        goto LABEL_32;
    }
    m_bytesReceived = this->m_downloadResults.m_bytesReceived;
    p_m_timer = &this->m_timer;
    if ( !m_bytesReceived )
    {
      this->m_testStatus = BD_BANDWIDTH_TEST_DOWNLOAD_RECEIVING;
      bdStopwatch::start(&this->m_timer);
      bdHandleAssert(this->m_downloadResults.m_bytesReceived == 0, "m_downloadResults.m_bytesReceived == 0", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlsgservices\\bdbandwidthtest.cpp", "bdBandwidthTestClient::pumpDownloadReceive", 0x222u, "Bandwidth test download results not cleared.");
      bdHandleAssert(this->m_downloadResults.m_receivePeriodMs == 1, "m_downloadResults.m_receivePeriodMs == 1", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlsgservices\\bdbandwidthtest.cpp", "bdBandwidthTestClient::pumpDownloadReceive", 0x223u, "Bandwidth test download results not cleared.");
      bdHandleAssert(this->m_seqNumberTotal == 0, "m_seqNumberTotal == 0", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlsgservices\\bdbandwidthtest.cpp", "bdBandwidthTestClient::pumpDownloadReceive", 0x224u, "Bandwidth test download results not cleared.");
      m_bytesReceived = this->m_downloadResults.m_bytesReceived;
      this->m_downloadResults.m_avgSeqNumber = m_numPackets;
      this->m_downloadResults.m_minSeqNumber = m_numPackets;
      this->m_downloadResults.m_maxSeqNumber = m_numPackets;
    }
    this->m_downloadResults.m_bytesReceived = m_bytesReceived + v9 + 8;
    *(double *)&_XMM0 = bdStopwatch::getElapsedTimeInSeconds(&this->m_timer);
    m_packetSize = this->m_packetSize;
    __asm
    {
      vmulss  xmm1, xmm0, xmm6
      vcvttss2si rax, xmm1
    }
    this->m_downloadResults.m_receivePeriodMs = _RAX;
    m_minSeqNumber = this->m_downloadResults.m_minSeqNumber;
    if ( m_minSeqNumber >= m_numPackets )
      m_minSeqNumber = m_numPackets;
    this->m_downloadResults.m_minSeqNumber = m_minSeqNumber;
    m_maxSeqNumber = this->m_downloadResults.m_maxSeqNumber;
    if ( m_maxSeqNumber <= m_numPackets )
      m_maxSeqNumber = m_numPackets;
    this->m_seqNumberTotal += m_numPackets;
    this->m_downloadResults.m_maxSeqNumber = m_maxSeqNumber;
    this->m_downloadResults.m_avgSeqNumber = this->m_seqNumberTotal / (this->m_downloadResults.m_bytesReceived / (m_packetSize + 8));
    bdStopwatch::start(&this->m_recvTimeoutTimer);
  }
  __asm { vmovss  xmm6, cs:__real@3a83126f }
  if ( this->m_testStatus == BD_BANDWIDTH_TEST_DOWNLOAD_WAITING )
  {
    p_m_timer = &this->m_timer;
    __asm
    {
      vmovaps [rsp+268h+var_48], xmm7
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rax
      vmulss  xmm7, xmm0, xmm6
    }
    *(double *)&_XMM0 = bdStopwatch::getElapsedTimeInSeconds(&this->m_timer);
    __asm { vcomiss xmm0, xmm7 }
    if ( !v27 )
    {
      __asm
      {
        vcvtss2sd xmm0, xmm7, xmm7
        vmovsd  [rsp+268h+var_230], xmm0
      }
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdBandwidthTestClient", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlsgservices\\bdbandwidthtest.cpp", "bdBandwidthTestClient::pumpDownloadReceive", 0x250u, "Download test timed out. Failed to receive any download packets in %.2fs.", v42);
      bdBandwidthTestClient::finalizeTest(this);
    }
    __asm { vmovaps xmm7, [rsp+268h+var_48] }
  }
  if ( this->m_testStatus == BD_BANDWIDTH_TEST_DOWNLOAD_RECEIVING )
  {
    *(double *)&_XMM0 = bdStopwatch::getElapsedTimeInSeconds(p_m_timer);
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, rax
      vmulss  xmm2, xmm1, xmm6
      vcomiss xmm0, xmm2
    }
    if ( !v27 )
    {
      m_receivePeriodMs = this->m_downloadResults.m_receivePeriodMs;
      *(double *)&_XMM0 = bdStopwatch::getElapsedTimeInSeconds(&this->m_recvTimeoutTimer);
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, rax
        vmulss  xmm2, xmm1, xmm6
        vcomiss xmm0, xmm2
      }
      if ( !__CFADD__(m_receivePeriodMs, this->m_lingerDuration) )
      {
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, rbx
          vmulss  xmm1, xmm0, xmm6
          vcvtss2sd xmm2, xmm1, xmm1
          vmovsd  [rsp+268h+var_228], xmm2
        }
        LODWORD(v41) = this->m_downloadResults.m_bytesReceived;
        bdLogMessage(BD_LOG_INFO, "info/", "bdBandwidthTestClient", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlsgservices\\bdbandwidthtest.cpp", "bdBandwidthTestClient::pumpDownloadReceive", 0x25Bu, "Download test complete. Received %u bytes in %.2fs.", v41, v43);
        bdBandwidthTestClient::finalizeTest(this);
      }
    }
  }
  __asm { vmovaps xmm6, [rsp+268h+var_38] }
}

/*
==============
bdBandwidthTestClient::pumpFinalize
==============
*/
void bdBandwidthTestClient::pumpFinalize(bdBandwidthTestClient *this)
{
  bdRemoteTask *m_ptr; 
  bdTask::bdStatus v3; 
  __int32 v4; 
  __int32 v5; 
  int v6; 
  bdRemoteTask *v7; 
  bdRemoteTask *v8; 
  unsigned int format; 
  char *v10; 
  bdReference<bdByteBuffer> result; 
  bdReference<bdByteBuffer> replyBuffer; 

  bdHandleAssert(this->m_remoteTask.m_ptr != NULL, "m_remoteTask != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlsgservices\\bdbandwidthtest.cpp", "bdBandwidthTestClient::pumpFinalize", 0x296u, "bdBandwidthTestClient status is BD_BANDWIDTH_TEST_FINALIZING with null task handle.");
  bdHandleAssert(this->m_testStatus == BD_BANDWIDTH_TEST_FINALIZING, "m_testStatus == BD_BANDWIDTH_TEST_FINALIZING", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlsgservices\\bdbandwidthtest.cpp", "bdBandwidthTestClient::pumpFinalize", 0x297u, "bdBandwidthTestClient::pumpFinalize called in incorrect state.");
  this->m_error = BD_HANDLE_TASK_FAILED;
  m_ptr = this->m_remoteTask.m_ptr;
  if ( m_ptr && this->m_testStatus == BD_BANDWIDTH_TEST_FINALIZING )
  {
    v3 = m_ptr->getStatus(m_ptr);
    if ( v3 == BD_EMPTY )
    {
      v10 = "bdBandwidthTestClient status is BD_BANDWIDTH_TEST_FINALIZING but task is bdRemoteTask::BD_EMPTY.";
      format = 675;
LABEL_22:
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdBandwidthTestClient", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlsgservices\\bdbandwidthtest.cpp", "bdBandwidthTestClient::pumpFinalize", format, v10);
      return;
    }
    v4 = v3 - 1;
    if ( !v4 )
    {
      this->m_error = BD_NO_ERROR;
      return;
    }
    v5 = v4 - 1;
    if ( v5 )
    {
      v6 = v5 - 2;
      if ( !v6 )
      {
        bdLogMessage(BD_LOG_WARNING, "warn/", "bdBandwidthTestClient", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlsgservices\\bdbandwidthtest.cpp", "bdBandwidthTestClient::pumpFinalize", 0x2B8u, "bdBandwidthTestClient finalize request timed out.");
        return;
      }
      if ( v6 != 2 )
        return;
      v10 = "bdBandwidthTestClient finalize request invalid remote task state (bdRemoteTask::BD_MAX_STATUS).";
      format = 701;
      goto LABEL_22;
    }
    this->m_error = BD_NO_ERROR;
    bdRemoteTask::getByteResults(this->m_remoteTask.m_ptr, &result);
    v7 = this->m_remoteTask.m_ptr;
    if ( v7 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v7->m_refCount, 0xFFFFFFFF) == 1 )
      {
        v8 = this->m_remoteTask.m_ptr;
        if ( v8 )
          ((void (__fastcall *)(bdRemoteTask *, __int64))v8->~bdReferencable)(v8, 1i64);
      }
    }
    this->m_remoteTask.m_ptr = NULL;
    replyBuffer.m_ptr = result.m_ptr;
    if ( result.m_ptr )
      _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 1u);
    bdBandwidthTestClient::handleFinalizeReply(this, (const bdReference<bdByteBuffer>)&replyBuffer);
    if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
    {
      if ( result.m_ptr )
        ((void (__fastcall *)(bdByteBuffer *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
    }
  }
}

/*
==============
bdBandwidthTestClient::pumpRequest
==============
*/
void bdBandwidthTestClient::pumpRequest(bdBandwidthTestClient *this)
{
  bdRemoteTask *m_ptr; 
  bdTask::bdStatus v3; 
  __int32 v4; 
  __int32 v5; 
  int v6; 
  bdRemoteTask *v7; 
  bdRemoteTask *v8; 
  unsigned int format; 
  char *v10; 
  bdReference<bdByteBuffer> result; 
  bdReference<bdByteBuffer> replyBuffer; 

  bdHandleAssert(this->m_remoteTask.m_ptr != NULL, "m_remoteTask != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlsgservices\\bdbandwidthtest.cpp", "bdBandwidthTestClient::pumpRequest", 0x109u, "bdBandwidthTestClient status is BD_REQUESTING_TEST with null task handle.");
  bdHandleAssert(this->m_testStatus == BD_BANDWIDTH_TEST_REQUESTING_TEST, "m_testStatus == BD_BANDWIDTH_TEST_REQUESTING_TEST", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlsgservices\\bdbandwidthtest.cpp", "bdBandwidthTestClient::pumpRequest", 0x10Au, "bdBandwidthTestClient::pumpRequest called in incorrect status.");
  this->m_error = BD_HANDLE_TASK_FAILED;
  m_ptr = this->m_remoteTask.m_ptr;
  if ( m_ptr && this->m_testStatus == BD_BANDWIDTH_TEST_REQUESTING_TEST )
  {
    v3 = m_ptr->getStatus(m_ptr);
    if ( v3 == BD_EMPTY )
    {
      v10 = "bdBandwidthTestClient status is BD_BANDWIDTH_TEST_REQUESTING_TEST but task is bdRemoteTask::BD_EMPTY.";
      format = 278;
LABEL_22:
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdBandwidthTestClient", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlsgservices\\bdbandwidthtest.cpp", "bdBandwidthTestClient::pumpRequest", format, v10);
      return;
    }
    v4 = v3 - 1;
    if ( !v4 )
    {
      this->m_error = BD_NO_ERROR;
      return;
    }
    v5 = v4 - 1;
    if ( v5 )
    {
      v6 = v5 - 2;
      if ( !v6 )
      {
        bdLogMessage(BD_LOG_WARNING, "warn/", "bdBandwidthTestClient", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlsgservices\\bdbandwidthtest.cpp", "bdBandwidthTestClient::pumpRequest", 0x12Bu, "bdBandwidthTestClient test request timed out.");
        return;
      }
      if ( v6 != 2 )
        return;
      v10 = "bdBandwidthTestClient test request invalid remote task state (bdRemoteTask::BD_MAX_STATUS).";
      format = 304;
      goto LABEL_22;
    }
    this->m_error = BD_NO_ERROR;
    bdRemoteTask::getByteResults(this->m_remoteTask.m_ptr, &result);
    v7 = this->m_remoteTask.m_ptr;
    if ( v7 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v7->m_refCount, 0xFFFFFFFF) == 1 )
      {
        v8 = this->m_remoteTask.m_ptr;
        if ( v8 )
          ((void (__fastcall *)(bdRemoteTask *, __int64))v8->~bdReferencable)(v8, 1i64);
      }
    }
    this->m_remoteTask.m_ptr = NULL;
    replyBuffer.m_ptr = result.m_ptr;
    if ( result.m_ptr )
      _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 1u);
    bdBandwidthTestClient::handleRequestReply(this, (const bdReference<bdByteBuffer>)&replyBuffer);
    if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
    {
      if ( result.m_ptr )
        ((void (__fastcall *)(bdByteBuffer *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
    }
  }
}

/*
==============
bdBandwidthTestClient::pumpUploadSend
==============
*/

void __fastcall bdBandwidthTestClient::pumpUploadSend(bdBandwidthTestClient *this, double _XMM1_8)
{
  bool v11; 
  unsigned int m_nextPacketNum; 
  unsigned int m_packetSize; 
  unsigned __int8 *m_packetBuffer; 
  bool v23; 
  unsigned __int16 m_lsgPort; 
  signed int v25; 
  unsigned int m_numPackets; 
  unsigned int v34; 
  unsigned int v35; 
  unsigned int v36; 
  unsigned int m_actualNumSent; 
  bdBandwidthTestType m_type; 
  double v44; 
  __int64 v45; 
  unsigned int v46; 
  __int64 v47; 
  unsigned int v48; 
  __int64 v49; 
  unsigned int v50; 
  __int64 v51; 
  unsigned int m_receiverInitialWait; 
  unsigned int m_receiveDuration; 
  unsigned int m_lingerDuration; 
  int v55; 
  unsigned int m_lsgAddr; 
  unsigned int offset; 
  bdRandom v58; 
  __int64 v59; 
  bdSockAddr address; 
  bdAddr v61; 
  char v62; 
  void *retaddr; 

  _RAX = &retaddr;
  v59 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, rax
    vmovss  xmm0, cs:__real@447a0000
    vdivss  xmm7, xmm0, xmm1
  }
  *(double *)&_XMM0 = bdStopwatch::getElapsedTimeInSeconds(&this->m_timer);
  __asm
  {
    vmulss  xmm1, xmm0, xmm7
    vxorps  xmm8, xmm8, xmm8
    vmaxss  xmm0, xmm1, xmm8
    vminss  xmm2, xmm0, cs:__real@3f800000
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm6, xmm0, xmm2
  }
  m_nextPacketNum = this->m_nextPacketNum;
  while ( 1 )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rax
      vcomiss xmm0, xmm6
    }
    if ( !v11 )
      break;
    m_packetSize = this->m_packetSize;
    m_packetBuffer = this->m_packetBuffer;
    offset = 4;
    v23 = m_packetSize >= 4 || !m_packetBuffer;
    bdHandleAssert(v23, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 4i64);
    if ( !m_packetBuffer )
      goto LABEL_10;
    if ( m_packetSize >= 4 )
    {
      *(_DWORD *)m_packetBuffer = this->m_nextPacketNum;
LABEL_10:
      if ( m_packetSize >= 4 )
        goto LABEL_12;
    }
    if ( m_packetBuffer )
      goto LABEL_18;
LABEL_12:
    if ( !bdBytePacker::appendBuffer(this->m_packetBuffer, this->m_packetSize, offset, &offset, this->m_cookie, 8u) )
    {
LABEL_18:
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdBandwidthTestClient", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlsgservices\\bdbandwidthtest.cpp", "bdBandwidthTestClient::pumpUploadSend", 0x1AEu, "Failed to create UDP packet.");
      break;
    }
    if ( offset < this->m_packetSize )
    {
      bdRandom::bdRandom(&v58);
      bdRandom::nextUBytes(&v58, &this->m_packetBuffer[offset], this->m_packetSize - offset);
      bdRandom::~bdRandom(&v58);
    }
    m_lsgPort = this->m_lsgPort;
    bdSockAddr::bdSockAddr(&address, this->m_lsgAddr);
    bdAddr::bdAddr(&v61, &address, m_lsgPort);
    v25 = this->m_socket.sendTo((bdSocket *)this, &v61, this->m_packetBuffer, this->m_packetSize);
    if ( v25 <= 0 )
      break;
    v11 = this->m_packetSize < v25;
    if ( this->m_packetSize != v25 )
      break;
    ++this->m_nextPacketNum;
    ++this->m_actualNumSent;
  }
  *(double *)&_XMM0 = bdStopwatch::getElapsedTimeInSeconds(&this->m_timer);
  __asm
  {
    vmulss  xmm1, xmm0, xmm7
    vmaxss  xmm1, xmm1, xmm8
    vminss  xmm2, xmm1, cs:__real@3f800000
  }
  m_numPackets = this->m_numPackets;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rbp
    vmulss  xmm1, xmm0, xmm2
    vcvttss2si r8, xmm1
  }
  v34 = this->m_nextPacketNum;
  v35 = v34;
  if ( v34 != m_nextPacketNum && v34 < (unsigned int)_R8 && v34 - m_nextPacketNum < (unsigned int)_R8 - v34 )
  {
    this->m_nextPacketNum = _R8;
    v35 = _R8;
  }
  if ( v35 == m_numPackets )
  {
    v36 = this->m_packetSize;
    m_actualNumSent = this->m_actualNumSent;
    *(double *)&_XMM0 = bdStopwatch::getElapsedTimeInSeconds(&this->m_timer);
    __asm { vcvtss2sd xmm1, xmm0, xmm0 }
    v50 = v36;
    v48 = m_numPackets;
    v46 = m_actualNumSent;
    __asm { vmovsd  [rsp+218h+var_1E0], xmm1 }
    bdLogMessage(BD_LOG_INFO, "info/", "bdBandwidthTestClient", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlsgservices\\bdbandwidthtest.cpp", "bdBandwidthTestClient::pumpUploadSend", 0x1D1u, "Upload bandwidth test took %.2fs to send %u/%u packets of %u bytes each.", v44, v46, v48, v50);
    m_type = this->m_type;
    if ( m_type == BD_UPLOAD_TEST )
    {
      bdBandwidthTestClient::finalizeTest(this);
      m_type = this->m_type;
    }
    if ( m_type == BD_UPLOAD_DOWNLOAD_TEST )
    {
      m_lsgAddr = this->m_lsgAddr;
      v55 = this->m_lsgPort;
      m_lingerDuration = this->m_lingerDuration;
      m_receiveDuration = this->m_receiveDuration;
      m_receiverInitialWait = this->m_receiverInitialWait;
      LODWORD(v51) = this->m_sendDuration;
      LODWORD(v49) = this->m_senderInitialWait;
      LODWORD(v47) = this->m_numPackets;
      LODWORD(v45) = this->m_packetSize;
      bdLogMessage(BD_LOG_INFO, "info/", "bdBandwidthTestClient", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlsgservices\\bdbandwidthtest.cpp", "bdBandwidthTestClient::startDownloadTest", 0x1E6u, "Starting download test: m_packetSize:%u m_numPackets:%u m_senderInitialWait:%u m_sendDuration:%u m_receiverInitialWait:%u m_receiveDuration:%u m_lingerDuration:%u m_lsgPort:%u m_lsgAddr:%u ", v45, v47, v49, v51, m_receiverInitialWait, m_receiveDuration, m_lingerDuration, v55, m_lsgAddr);
      this->m_testStatus = BD_BANDWIDTH_TEST_DOWNLOAD_WAITING;
      bdStopwatch::start(&this->m_timer);
      this->m_seqNumberTotal = 0;
    }
  }
  _R11 = &v62;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
}

/*
==============
bdBandwidthTestClient::pumpUploadWait
==============
*/

void __fastcall bdBandwidthTestClient::pumpUploadWait(bdBandwidthTestClient *this, double _XMM1_8)
{
  char v7; 

  *(double *)&_XMM0 = bdStopwatch::getElapsedTimeInSeconds(&this->m_timer);
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, rax
    vmulss  xmm2, xmm1, cs:__real@3a83126f
    vcomiss xmm0, xmm2
  }
  if ( !v7 )
  {
    this->m_testStatus = BD_BANDWIDTH_TEST_UPLOAD_SENDING;
    this->m_nextPacketNum = 0;
    bdStopwatch::start(&this->m_timer);
  }
}

/*
==============
bdBandwidthTestClient::quit
==============
*/
void bdBandwidthTestClient::quit(bdBandwidthTestClient *this)
{
  if ( this->m_initStatus )
  {
    if ( !this->m_socket.close((bdSocket *)this) )
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdBandwidthTestClient", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlsgservices\\bdbandwidthtest.cpp", "bdBandwidthTestClient::quit", 0x57u, "bdBandwidthTestClient failed to close UDP socket.");
    this->m_initStatus = BD_BANDWIDTH_TEST_UNINITIALIZED;
    bdLogMessage(BD_LOG_INFO, "info/", "bdBandwidthTestClient", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlsgservices\\bdbandwidthtest.cpp", "bdBandwidthTestClient::quit", 0x5Bu, "Quit client.");
  }
  else
  {
    bdLogMessage(BD_LOG_INFO, "info/", "bdBandwidthTestClient", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlsgservices\\bdbandwidthtest.cpp", "bdBandwidthTestClient::quit", 0x50u, "quit called on uninitialized bdBandwidthTestClient instance.");
  }
}

/*
==============
bdBandwidthTestClient::start
==============
*/
void bdBandwidthTestClient::start(bdBandwidthTestClient *this, const bdBandwidthTestType type)
{
  bool v2; 
  bdBandwidthTestStatus m_testStatus; 
  bdLobbyService *m_lobbyService; 
  bdRemoteTaskManager *TaskManager; 
  bdLobbyErrorCode started; 
  char queryParams[16]; 

  v2 = this->m_initStatus == BD_BANDWIDTH_TEST_UNINITIALIZED;
  this->m_error = BD_START_TASK_FAILED;
  if ( v2 )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdBandwidthTestClient", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlsgservices\\bdbandwidthtest.cpp", "bdBandwidthTestClient::start", 0x66u, "bdBandwidthTestClient not initialized.");
  }
  else
  {
    m_testStatus = this->m_testStatus;
    if ( m_testStatus == BD_BANDWIDTH_TEST_IDLE || m_testStatus == BD_BANDWIDTH_TEST_DONE )
    {
      m_lobbyService = this->m_lobbyService;
      if ( m_lobbyService )
      {
        TaskManager = bdLobbyService::getTaskManager(m_lobbyService);
        if ( TaskManager )
        {
          bdHandleAssert(1, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 1i64);
          queryParams[0] = 0;
          bdHandleAssert(1, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 1i64);
          queryParams[1] = type;
          started = bdRemoteTaskManager::startLSGTask(TaskManager, &this->m_remoteTask, 0x12u, 1u, queryParams, 0x10u);
          this->m_error = started;
          if ( started )
          {
            bdLogMessage(BD_LOG_WARNING, "warn/", "bdBandwidthTestClient", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlsgservices\\bdbandwidthtest.cpp", "bdBandwidthTestClient::start", 0x92u, "Failed to start task for bandwidth test of type: %u.", this->m_type);
          }
          else
          {
            this->m_testStatus = BD_BANDWIDTH_TEST_REQUESTING_TEST;
            this->m_type = type;
            bdBandwidthTestResults::clear(&this->m_uploadResults);
            bdBandwidthTestResults::clear(&this->m_downloadResults);
            bdLogMessage(BD_LOG_INFO, "info/", "bdBandwidthTestClient", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlsgservices\\bdbandwidthtest.cpp", "bdBandwidthTestClient::start", 0x8Eu, "Started bandwidth test of type: %u.", this->m_type);
          }
        }
        else
        {
          bdLogMessage(BD_LOG_WARNING, "warn/", "bdBandwidthTestClient", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlsgservices\\bdbandwidthtest.cpp", "bdBandwidthTestClient::start", 0x9Cu, "Failed to retreive task manager from lobby service.");
        }
      }
      else
      {
        bdLogMessage(BD_LOG_WARNING, "warn/", "bdBandwidthTestClient", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlsgservices\\bdbandwidthtest.cpp", "bdBandwidthTestClient::start", 0x6Eu, "Cannot start test as lobby service pointer is invalid.");
      }
    }
    else
    {
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdBandwidthTestClient", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlsgservices\\bdbandwidthtest.cpp", "bdBandwidthTestClient::start", 0x6Au, "bdBandwidthTestClient already in use.");
    }
  }
  if ( this->m_error == BD_START_TASK_FAILED )
  {
    bdBandwidthTestClient::stop(this);
    bdBandwidthTestClient::quit(this);
  }
}

/*
==============
bdBandwidthTestClient::startDownloadTest
==============
*/
void bdBandwidthTestClient::startDownloadTest(bdBandwidthTestClient *this)
{
  unsigned int m_packetSize; 
  unsigned int m_numPackets; 
  unsigned int m_senderInitialWait; 
  unsigned int m_sendDuration; 
  unsigned int m_receiverInitialWait; 
  unsigned int m_receiveDuration; 
  unsigned int m_lingerDuration; 
  int m_lsgPort; 
  unsigned int m_lsgAddr; 

  m_lsgAddr = this->m_lsgAddr;
  m_lsgPort = this->m_lsgPort;
  m_lingerDuration = this->m_lingerDuration;
  m_receiveDuration = this->m_receiveDuration;
  m_receiverInitialWait = this->m_receiverInitialWait;
  m_sendDuration = this->m_sendDuration;
  m_senderInitialWait = this->m_senderInitialWait;
  m_numPackets = this->m_numPackets;
  m_packetSize = this->m_packetSize;
  bdLogMessage(BD_LOG_INFO, "info/", "bdBandwidthTestClient", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlsgservices\\bdbandwidthtest.cpp", "bdBandwidthTestClient::startDownloadTest", 0x1E6u, "Starting download test: m_packetSize:%u m_numPackets:%u m_senderInitialWait:%u m_sendDuration:%u m_receiverInitialWait:%u m_receiveDuration:%u m_lingerDuration:%u m_lsgPort:%u m_lsgAddr:%u ", m_packetSize, m_numPackets, m_senderInitialWait, m_sendDuration, m_receiverInitialWait, m_receiveDuration, m_lingerDuration, m_lsgPort, m_lsgAddr);
  this->m_testStatus = BD_BANDWIDTH_TEST_DOWNLOAD_WAITING;
  bdStopwatch::start(&this->m_timer);
  this->m_seqNumberTotal = 0;
}

/*
==============
bdBandwidthTestClient::startUploadTest
==============
*/
void bdBandwidthTestClient::startUploadTest(bdBandwidthTestClient *this)
{
  unsigned int m_packetSize; 
  unsigned int m_numPackets; 
  unsigned int m_senderInitialWait; 
  unsigned int m_sendDuration; 
  unsigned int m_receiverInitialWait; 
  unsigned int m_receiveDuration; 
  unsigned int m_lingerDuration; 
  int m_lsgPort; 
  unsigned int m_lsgAddr; 

  m_lsgAddr = this->m_lsgAddr;
  m_lsgPort = this->m_lsgPort;
  m_lingerDuration = this->m_lingerDuration;
  m_receiveDuration = this->m_receiveDuration;
  m_receiverInitialWait = this->m_receiverInitialWait;
  m_sendDuration = this->m_sendDuration;
  m_senderInitialWait = this->m_senderInitialWait;
  m_numPackets = this->m_numPackets;
  m_packetSize = this->m_packetSize;
  bdLogMessage(BD_LOG_INFO, "info/", "bdBandwidthTestClient", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlsgservices\\bdbandwidthtest.cpp", "bdBandwidthTestClient::startUploadTest", 0x180u, "Starting upload test: m_packetSize:%u m_numPackets:%u m_senderInitialWait:%u m_sendDuration:%u m_receiverInitialWait:%u m_receiveDuration:%u m_lingerDuration:%u m_lsgPort:%u m_lsgAddr:%u ", m_packetSize, m_numPackets, m_senderInitialWait, m_sendDuration, m_receiverInitialWait, m_receiveDuration, m_lingerDuration, m_lsgPort, m_lsgAddr);
  bdStopwatch::start(&this->m_timer);
  this->m_testStatus = BD_BANDWIDTH_TEST_UPLOAD_WAITING;
}

/*
==============
bdBandwidthTestClient::stop
==============
*/
void bdBandwidthTestClient::stop(bdBandwidthTestClient *this)
{
  bdRemoteTask *m_ptr; 
  bdRemoteTask *v3; 
  unsigned __int8 *m_packetBuffer; 
  bdBandwidthTestType m_type; 

  m_type = this->m_type;
  bdLogMessage(BD_LOG_INFO, "info/", "bdBandwidthTestClient", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlsgservices\\bdbandwidthtest.cpp", "bdBandwidthTestClient::stop", 0xA8u, "Stopping bandwidth test of type: %u.", m_type);
  m_ptr = this->m_remoteTask.m_ptr;
  if ( m_ptr )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
    {
      v3 = this->m_remoteTask.m_ptr;
      if ( v3 )
        ((void (__fastcall *)(bdRemoteTask *, __int64))v3->~bdReferencable)(v3, 1i64);
    }
    this->m_remoteTask.m_ptr = NULL;
  }
  m_packetBuffer = this->m_packetBuffer;
  if ( m_packetBuffer )
  {
    bdMemory::deallocate(m_packetBuffer);
    this->m_packetBuffer = NULL;
  }
  this->m_error = BD_NO_ERROR;
  this->m_testStatus = BD_BANDWIDTH_TEST_IDLE;
}

