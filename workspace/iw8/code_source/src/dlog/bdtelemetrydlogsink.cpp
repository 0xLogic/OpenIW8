/*
==============
bdTelemetryDLogSink::addrToIPv4
==============
*/

unsigned int __fastcall bdTelemetryDLogSink::addrToIPv4(bdTelemetryDLogSink *this, const bdSockAddr *addr)
{
  return ?addrToIPv4@bdTelemetryDLogSink@@IEBAIAEBVbdSockAddr@@@Z(this, addr);
}

/*
==============
bdTelemetryDLogSink::record
==============
*/

void __fastcall bdTelemetryDLogSink::record(bdTelemetryDLogSink *this)
{
  ?record@bdTelemetryDLogSink@@UEAAXXZ(this);
}

/*
==============
bdTelemetryDLogSink::setLobbyID
==============
*/

void __fastcall bdTelemetryDLogSink::setLobbyID(bdTelemetryDLogSink *this, const unsigned __int64 *lobbyID)
{
  ?setLobbyID@bdTelemetryDLogSink@@UEAAXAEB_K@Z(this, lobbyID);
}

/*
==============
bdTelemetryDLogSink::addQoS
==============
*/

void __fastcall bdTelemetryDLogSink::addQoS(bdTelemetryDLogSink *this, const bdQoSTelemetry *tel)
{
  ?addQoS@bdTelemetryDLogSink@@UEAAXAEBVbdQoSTelemetry@@@Z(this, tel);
}

/*
==============
bdTelemetryDLogSink::init
==============
*/

void __fastcall bdTelemetryDLogSink::init(bdTelemetryDLogSink *this, unsigned int titleID, unsigned __int64 userID, void **buffers, int *bufferSizes)
{
  ?init@bdTelemetryDLogSink@@QEAAXI_KQEAPEAXQEAH@Z(this, titleID, userID, buffers, bufferSizes);
}

/*
==============
bdTelemetryDLogSink::bdTelemetryDLogSink
==============
*/

void __fastcall bdTelemetryDLogSink::bdTelemetryDLogSink(bdTelemetryDLogSink *this)
{
  ??0bdTelemetryDLogSink@@QEAA@XZ(this);
}

/*
==============
bdTelemetryDLogSink::addrToIPv4
==============
*/

unsigned int __fastcall bdTelemetryDLogSink::addrToIPv4(bdTelemetryDLogSink *this, const bdAddr *addr)
{
  return ?addrToIPv4@bdTelemetryDLogSink@@IEBAIAEBVbdAddr@@@Z(this, addr);
}

/*
==============
bdTelemetryDLogSink::addNatTypeDiscovery
==============
*/

void __fastcall bdTelemetryDLogSink::addNatTypeDiscovery(bdTelemetryDLogSink *this, const bdNATTypeDiscoveryTelemetry *tel)
{
  ?addNatTypeDiscovery@bdTelemetryDLogSink@@UEAAXAEBVbdNATTypeDiscoveryTelemetry@@@Z(this, tel);
}

/*
==============
bdTelemetryDLogSink::commonAddrRecord
==============
*/

void __fastcall bdTelemetryDLogSink::commonAddrRecord(bdTelemetryDLogSink *this, DLogContext *context, const char *name, const char *arrayName, const bdCommonAddr *caddr)
{
  ?commonAddrRecord@bdTelemetryDLogSink@@IEAAXPEAUDLogContext@@PEBD1AEBVbdCommonAddr@@@Z(this, context, name, arrayName, caddr);
}

/*
==============
bdTelemetryDLogSink::addRelayAssociation
==============
*/

void __fastcall bdTelemetryDLogSink::addRelayAssociation(bdTelemetryDLogSink *this, const bdRelayAssociationTelemetry *tel)
{
  ?addRelayAssociation@bdTelemetryDLogSink@@UEAAXAEBVbdRelayAssociationTelemetry@@@Z(this, tel);
}

/*
==============
bdTelemetryDLogSink::header
==============
*/

void __fastcall bdTelemetryDLogSink::header(bdTelemetryDLogSink *this, DLogContext *context, const DLogEvent *event)
{
  ?header@bdTelemetryDLogSink@@QEBAXPEAUDLogContext@@PEBUDLogEvent@@@Z(this, context, event);
}

/*
==============
bdTelemetryDLogSink::addNet
==============
*/

void __fastcall bdTelemetryDLogSink::addNet(bdTelemetryDLogSink *this, const bdNetTelemetry *tel)
{
  ?addNet@bdTelemetryDLogSink@@UEAAXAEBVbdNetTelemetry@@@Z(this, tel);
}

/*
==============
bdTelemetryDLogSink::getInstance
==============
*/

const bdTelemetryDLogSink *__fastcall bdTelemetryDLogSink::getInstance()
{
  return ?getInstance@bdTelemetryDLogSink@@SAPEBV1@XZ();
}

/*
==============
bdTelemetryDLogSink::event
==============
*/

void __fastcall bdTelemetryDLogSink::event(bdTelemetryDLogSink *this, bdTelemetry::bdTelemetryContextID context, const char *name)
{
  ?event@bdTelemetryDLogSink@@IEAAXW4bdTelemetryContextID@bdTelemetry@@PEBD@Z(this, context, name);
}

/*
==============
bdTelemetryDLogSink::addNatTrav
==============
*/

void __fastcall bdTelemetryDLogSink::addNatTrav(bdTelemetryDLogSink *this, const bdNATTravTelemetry *tel)
{
  ?addNatTrav@bdTelemetryDLogSink@@UEAAXAEBVbdNATTravTelemetry@@@Z(this, tel);
}

/*
==============
bdTelemetryDLogSink::addRelayFallback
==============
*/

void __fastcall bdTelemetryDLogSink::addRelayFallback(bdTelemetryDLogSink *this, const bdReference<bdCommonAddr> *local, const bdReference<bdCommonAddr> *remote, const bool initialResult)
{
  ?addRelayFallback@bdTelemetryDLogSink@@UEAAXAEBV?$bdReference@VbdCommonAddr@@@@0_N@Z(this, local, remote, initialResult);
}

/*
==============
bdTelemetryDLogSink::addUPnP
==============
*/

void __fastcall bdTelemetryDLogSink::addUPnP(bdTelemetryDLogSink *this, const bdUPnPTelemetry *tel)
{
  ?addUPnP@bdTelemetryDLogSink@@UEAAXAEBVbdUPnPTelemetry@@@Z(this, tel);
}

/*
==============
bdTelemetryDLogSink::discard
==============
*/

void __fastcall bdTelemetryDLogSink::discard(bdTelemetryDLogSink *this, bdTelemetry::bdTelemetryContextID contextID)
{
  ?discard@bdTelemetryDLogSink@@UEAAXW4bdTelemetryContextID@bdTelemetry@@@Z(this, contextID);
}

/*
==============
bdTelemetryDLogSink::setContextUserId
==============
*/

void __fastcall bdTelemetryDLogSink::setContextUserId(bdTelemetryDLogSink *this, unsigned __int64 userId)
{
  ?setContextUserId@bdTelemetryDLogSink@@QEAAX_K@Z(this, userId);
}

/*
==============
bdTelemetryDLogSink::setRegion
==============
*/

void __fastcall bdTelemetryDLogSink::setRegion(bdTelemetryDLogSink *this, const bdDMLInfo *info)
{
  ?setRegion@bdTelemetryDLogSink@@UEAAXAEBVbdDMLInfo@@@Z(this, info);
}

/*
==============
bdTelemetryDLogSink::currentTimestamp
==============
*/

__int64 __fastcall bdTelemetryDLogSink::currentTimestamp(bdTelemetryDLogSink *this)
{
  return ?currentTimestamp@bdTelemetryDLogSink@@MEBA_JXZ(this);
}

/*
==============
bdTelemetryDLogSink::addIPDisco
==============
*/

void __fastcall bdTelemetryDLogSink::addIPDisco(bdTelemetryDLogSink *this, const bdIPDiscoveryTelemetry *tel)
{
  ?addIPDisco@bdTelemetryDLogSink@@UEAAXAEBVbdIPDiscoveryTelemetry@@@Z(this, tel);
}

/*
==============
bdTelemetryDLogSink::setMatchMakingID
==============
*/

void __fastcall bdTelemetryDLogSink::setMatchMakingID(bdTelemetryDLogSink *this, const unsigned __int64 *matchMakingID)
{
  ?setMatchMakingID@bdTelemetryDLogSink@@UEAAXAEB_K@Z(this, matchMakingID);
}

/*
==============
bdTelemetryDLogSink::addDTLSAssociation
==============
*/

void __fastcall bdTelemetryDLogSink::addDTLSAssociation(bdTelemetryDLogSink *this, const bdDTLSAssociationTelemetry *tel)
{
  ?addDTLSAssociation@bdTelemetryDLogSink@@UEAAXAEBVbdDTLSAssociationTelemetry@@@Z(this, tel);
}

/*
==============
bdTelemetryDLogSink::recordSampled
==============
*/

void __fastcall bdTelemetryDLogSink::recordSampled(bdTelemetryDLogSink *this, float sampleRate)
{
  ?recordSampled@bdTelemetryDLogSink@@UEAAXM@Z(this, sampleRate);
}

/*
==============
bdTelemetryDLogSink::checkAndLogErrors
==============
*/

void __fastcall bdTelemetryDLogSink::checkAndLogErrors(bdTelemetryDLogSink *this)
{
  ?checkAndLogErrors@bdTelemetryDLogSink@@IEAAXXZ(this);
}

/*
==============
bdTelemetryDLogSink::bdTelemetryDLogSink
==============
*/
void bdTelemetryDLogSink::bdTelemetryDLogSink(bdTelemetryDLogSink *this)
{
  this->__vftable = (bdTelemetryDLogSink_vtbl *)&bdTelemetryDLogSink::`vftable';
  this->m_initialized = 0;
  bdDMLInfo::bdDMLInfo(&this->m_dml);
  bdMutex::bdMutex(&this->m_mutex);
  bdHandleAssert(bdTelemetryDLogSink::m_instance == NULL, "m_instance == NULL", "c:\\workspace\\iw8\\code_source\\src\\dlog\\bdtelemetrydlogsink.cpp", "bdTelemetryDLogSink::bdTelemetryDLogSink", 0x21u, "bdTelemetryDLogSink already has an instance", -2i64);
  bdTelemetryDLogSink::m_instance = this;
}

/*
==============
bdTelemetryDLogSink::addDTLSAssociation
==============
*/
void bdTelemetryDLogSink::addDTLSAssociation(bdTelemetryDLogSink *this, const bdDTLSAssociationTelemetry *tel)
{
  unsigned int v4; 
  unsigned int m_stageInitMsSinceStart; 
  unsigned int m_lifetimeMs; 
  unsigned __int8 m_lastState; 
  unsigned int v8; 
  unsigned int value; 
  unsigned int m_stageCookieEchoMsSinceStart; 
  unsigned int m_stageCookieAckMsSinceStart; 
  unsigned int m_establishedMsSinceStart; 
  int m_sendSeqNum; 
  int m_recvSeqNum; 
  unsigned __int8 m_initResends; 
  unsigned __int8 m_cookieResends; 
  unsigned __int16 Port; 

  bdMutex::lock(&this->m_mutex);
  if ( DLog_BeginEvent(&this->m_contexts[1], "dw_event_dtls_association") )
  {
    m_recvSeqNum = tel->m_recvSeqNum;
    m_sendSeqNum = tel->m_sendSeqNum;
    m_cookieResends = tel->m_cookieResends;
    m_initResends = tel->m_initResends;
    Port = bdSockAddr::getPort(&tel->m_peerAddr.m_address);
    v4 = bdSockAddr::toUInt32(&tel->m_peerAddr.m_address);
    m_stageInitMsSinceStart = tel->m_stageInitMsSinceStart;
    m_lifetimeMs = tel->m_lifetimeMs;
    m_lastState = tel->m_lastState;
    m_establishedMsSinceStart = tel->m_establishedMsSinceStart;
    m_stageCookieAckMsSinceStart = tel->m_stageCookieAckMsSinceStart;
    m_stageCookieEchoMsSinceStart = tel->m_stageCookieEchoMsSinceStart;
    value = tel->m_stageInitAckMsSinceStart;
    v8 = _byteswap_ulong(v4);
    if ( DLog_IsActive() )
    {
      if ( DLog_BeginRow(&this->m_contexts[1], "dtls_association") && DLog_UInt8(&this->m_contexts[1], "last_state", m_lastState) && DLog_UInt32(&this->m_contexts[1], "lifetime_ms", m_lifetimeMs) && DLog_UInt32(&this->m_contexts[1], "stage_init_ms_since_start", m_stageInitMsSinceStart) && DLog_UInt32(&this->m_contexts[1], "stage_init_ack_ms_since_start", value) && DLog_UInt32(&this->m_contexts[1], "stage_cookie_echo_ms_since_start", m_stageCookieEchoMsSinceStart) && DLog_UInt32(&this->m_contexts[1], "stage_cookie_ack_ms_since_start", m_stageCookieAckMsSinceStart) && DLog_UInt32(&this->m_contexts[1], "established_ms_since_start", m_establishedMsSinceStart) && DLog_UInt32(&this->m_contexts[1], "peer_ip", v8) && DLog_UInt16(&this->m_contexts[1], "peer_port", Port) && DLog_UInt8(&this->m_contexts[1], "init_resends", m_initResends) && DLog_UInt8(&this->m_contexts[1], "cookie_resends", m_cookieResends) && DLog_Int32(&this->m_contexts[1], "send_seq_num", m_sendSeqNum) && DLog_Int32(&this->m_contexts[1], "recv_seq_num", m_recvSeqNum) )
        DLog_EndRow(&this->m_contexts[1]);
    }
    else
    {
      this->m_contexts[1].error = DLOG_ERROR_NOT_ACTIVE;
    }
    DLog_EndEvent(&this->m_contexts[1]);
    bdMutex::unlock(&this->m_mutex);
    bdTelemetryDLogSink::checkAndLogErrors(this);
  }
  else
  {
    bdMutex::unlock(&this->m_mutex);
  }
}

/*
==============
bdTelemetryDLogSink::addIPDisco
==============
*/
void bdTelemetryDLogSink::addIPDisco(bdTelemetryDLogSink *this, const bdIPDiscoveryTelemetry *tel)
{
  bdMutex *p_m_mutex; 
  DLogContext *m_contexts; 
  unsigned int m_duration; 
  unsigned __int16 Port; 
  unsigned int v8; 
  unsigned __int16 v9; 
  unsigned int v10; 
  unsigned __int8 m_result; 
  unsigned int v12; 
  unsigned int *m_retryTimes; 
  signed int v14; 
  signed int m_retryTimesCount; 
  unsigned int v16; 
  unsigned int value; 

  p_m_mutex = &this->m_mutex;
  bdMutex::lock(&this->m_mutex);
  m_contexts = this->m_contexts;
  if ( DLog_BeginEvent(m_contexts, "dw_event_ip_discovery") )
  {
    m_duration = tel->m_duration;
    value = tel->m_retries;
    Port = bdSockAddr::getPort(&tel->m_publicAddr.m_address);
    v8 = _byteswap_ulong(bdSockAddr::toUInt32(&tel->m_publicAddr.m_address));
    v9 = bdSockAddr::getPort(&tel->m_serverAddr.m_address);
    v10 = bdSockAddr::toUInt32(&tel->m_serverAddr.m_address);
    m_result = tel->m_result;
    v12 = _byteswap_ulong(v10);
    if ( DLog_IsActive() )
    {
      if ( DLog_BeginRow(m_contexts, "ip_discovery_result") && DLog_UInt8(m_contexts, "result", m_result) && DLog_UInt32(m_contexts, "server_addr", v12) && DLog_UInt16(m_contexts, "server_port", v9) && DLog_UInt32(m_contexts, "public_addr", v8) && DLog_UInt16(m_contexts, "public_port", Port) && DLog_UInt32(m_contexts, "duration_ms", m_duration) && DLog_UInt32(m_contexts, "retries", value) )
        DLog_EndRow(m_contexts);
    }
    else
    {
      m_contexts->error = DLOG_ERROR_NOT_ACTIVE;
    }
    m_retryTimes = tel->m_retryTimes;
    v14 = 0;
    while ( 1 )
    {
      m_retryTimesCount = tel->m_retryTimesCount;
      if ( m_retryTimesCount <= 10 )
      {
        if ( m_retryTimesCount < 1 )
          m_retryTimesCount = 1;
      }
      else
      {
        m_retryTimesCount = 10;
      }
      if ( v14 >= m_retryTimesCount )
        break;
      v16 = *m_retryTimes;
      if ( DLog_IsActive() )
      {
        if ( DLog_BeginRow(m_contexts, "retry_times_ms") && DLog_UInt32(m_contexts, "retry_time_ms", v16) )
          DLog_EndRow(m_contexts);
        ++v14;
        ++m_retryTimes;
      }
      else
      {
        ++v14;
        m_contexts->error = DLOG_ERROR_NOT_ACTIVE;
        ++m_retryTimes;
      }
    }
    DLog_EndEvent(m_contexts);
    bdMutex::unlock(&this->m_mutex);
    bdTelemetryDLogSink::checkAndLogErrors(this);
  }
  else
  {
    bdMutex::unlock(p_m_mutex);
  }
}

/*
==============
bdTelemetryDLogSink::addNatTrav
==============
*/
void bdTelemetryDLogSink::addNatTrav(bdTelemetryDLogSink *this, const bdNATTravTelemetry *tel)
{
  bdMutex *p_m_mutex; 
  DLogContext *v5; 
  unsigned int v6; 
  unsigned int v7; 
  unsigned __int16 v8; 
  unsigned __int8 m_triesStage3; 
  unsigned __int8 m_triesStage2; 
  unsigned __int8 m_triesStage1; 
  unsigned __int8 m_result; 
  bdSockAddr *p_m_address; 
  unsigned int v14; 
  unsigned __int16 v15; 
  unsigned int v16; 
  unsigned __int8 v17; 
  unsigned int v18; 
  unsigned int v19; 
  unsigned __int16 Port; 
  unsigned int value; 
  bdMutex *v22; 
  bool m_throttled; 
  char v25; 
  unsigned __int16 v26; 
  unsigned __int16 v27; 

  p_m_mutex = &this->m_mutex;
  v22 = &this->m_mutex;
  bdMutex::lock(&this->m_mutex);
  v5 = &this->m_contexts[1];
  if ( DLog_BeginEvent(v5, "dw_event_nat_trav") )
  {
    v6 = _byteswap_ulong(bdSockAddr::toUInt32(&tel->m_realAddr.m_address));
    Port = bdSockAddr::getPort(&tel->m_realAddr.m_address);
    v7 = _byteswap_ulong(bdSockAddr::toUInt32(&tel->m_stunAddr.m_address));
    v8 = bdSockAddr::getPort(&tel->m_stunAddr.m_address);
    m_triesStage3 = tel->m_triesStage3;
    m_triesStage2 = tel->m_triesStage2;
    m_triesStage1 = tel->m_triesStage1;
    m_result = tel->m_result;
    v26 = v8;
    value = tel->m_duration;
    m_throttled = tel->m_throttled;
    if ( DLog_IsActive() )
    {
      if ( DLog_BeginRow(v5, "nat_trav_result") && DLog_UInt8(v5, "result", m_result) && DLog_UInt8(v5, "stage_1_tries", m_triesStage1) && DLog_UInt8(v5, "stage_2_tries", m_triesStage2) && DLog_UInt8(v5, "stage_3_tries", m_triesStage3) && DLog_Bool(v5, "throttled", m_throttled) && DLog_UInt32(v5, "duration_ms", value) && DLog_UInt16(v5, "stun_port", v26) && DLog_UInt32(v5, "stun_addr", v7) && DLog_UInt16(v5, "real_port", Port) && DLog_UInt32(v5, "real_addr", v6) )
        DLog_EndRow(v5);
    }
    else
    {
      v5->error = DLOG_ERROR_NOT_ACTIVE;
    }
    if ( tel->m_localCommonAddr.m_ptr )
      bdTelemetryDLogSink::commonAddrRecord(this, v5, "local_common_addr", "local_addrs_array", tel->m_localCommonAddr.m_ptr);
    if ( tel->m_remoteCommonAddr.m_ptr )
      bdTelemetryDLogSink::commonAddrRecord(this, v5, "remote_common_addr", "remote_addrs_array", tel->m_remoteCommonAddr.m_ptr);
    if ( tel < (const bdNATTravTelemetry *)&tel->m_attemptRecords[tel->m_attemptRecordsCount] )
    {
      p_m_address = &tel->m_attemptRecords[0].dst.m_address;
      do
      {
        v25 = p_m_address[1].inUn.m_sockaddrStorage.__ss_pad2[9];
        v27 = bdSockAddr::getPort(p_m_address);
        v14 = _byteswap_ulong(bdSockAddr::toUInt32(p_m_address));
        v15 = bdSockAddr::getPort((bdSockAddr *)((char *)p_m_address - 152));
        v16 = bdSockAddr::toUInt32((bdSockAddr *)((char *)p_m_address - 152));
        v17 = p_m_address[1].inUn.m_sockaddrStorage.__ss_pad2[8];
        v18 = *((_DWORD *)&p_m_address[-2].inUn.m_ipv6Sockaddr + 24);
        v19 = _byteswap_ulong(v16);
        if ( DLog_IsActive() )
        {
          if ( DLog_BeginRow(v5, "nat_trav_attempts") && DLog_UInt32(v5, "ms_since_start", v18) && DLog_UInt8(v5, "type", v17) && DLog_UInt32(v5, "src_addr", v19) && DLog_UInt16(v5, "src_port", v15) && DLog_UInt32(v5, "dst_addr", v14) && DLog_UInt16(v5, "dst_port", v27) && DLog_Bool(v5, "send_success", v25) )
            DLog_EndRow(v5);
        }
        else
        {
          v5->error = DLOG_ERROR_NOT_ACTIVE;
        }
        p_m_address = (bdSockAddr *)((char *)p_m_address + 320);
      }
      while ( (char *)&p_m_address[-2].inUn.m_ipv6Sockaddr + 96 < (char *)&tel->m_attemptRecords[tel->m_attemptRecordsCount] );
    }
    DLog_EndEvent(v5);
    bdMutex::unlock(v22);
    bdTelemetryDLogSink::checkAndLogErrors(this);
  }
  else
  {
    bdMutex::unlock(p_m_mutex);
  }
}

/*
==============
bdTelemetryDLogSink::addNatTypeDiscovery
==============
*/
void bdTelemetryDLogSink::addNatTypeDiscovery(bdTelemetryDLogSink *this, const bdNATTypeDiscoveryTelemetry *tel)
{
  bdTelemetryDLogSink *v3; 
  DLogContext *m_contexts; 
  unsigned int v6; 
  unsigned int m_configMaxResends; 
  unsigned int m_duration; 
  unsigned __int8 m_natType; 
  unsigned __int8 m_result; 
  unsigned int v12; 
  bdSockAddr *p_m_address; 
  char v16; 
  unsigned __int8 v17; 
  unsigned __int16 v18; 
  unsigned int v19; 
  unsigned int v20; 
  unsigned int v21; 
  unsigned __int16 v22; 
  unsigned __int16 v23; 
  unsigned __int16 v24; 
  unsigned __int16 v25; 
  unsigned __int16 Port; 
  unsigned int value; 
  unsigned __int32 v28; 
  unsigned __int32 v29; 
  unsigned __int32 v30; 
  unsigned int v31; 
  unsigned __int32 v32; 
  unsigned int msSinceStart; 
  unsigned __int32 v34; 
  unsigned __int32 v35; 
  unsigned __int16 v38; 
  unsigned __int16 v39; 

  v3 = this;
  _RBP = tel;
  bdMutex::lock(&this->m_mutex);
  m_contexts = v3->m_contexts;
  if ( DLog_BeginEvent(v3->m_contexts, "dw_event_nat_discovery") )
  {
    __asm { vmovaps [rsp+98h+var_48], xmm6 }
    Port = bdSockAddr::getPort(&_RBP->m_test3Result.mappedAddr.m_address);
    v35 = _byteswap_ulong(bdSockAddr::toUInt32(&_RBP->m_test3Result.mappedAddr.m_address));
    v25 = bdSockAddr::getPort(&_RBP->m_test3Result.fromAddr.m_address);
    v34 = _byteswap_ulong(bdSockAddr::toUInt32(&_RBP->m_test3Result.fromAddr.m_address));
    msSinceStart = _RBP->m_test3Result.msSinceStart;
    v24 = bdSockAddr::getPort(&_RBP->m_test2Result.fromAddr.m_address);
    v32 = _byteswap_ulong(bdSockAddr::toUInt32(&_RBP->m_test2Result.fromAddr.m_address));
    v31 = _RBP->m_test2Result.msSinceStart;
    v23 = bdSockAddr::getPort(&_RBP->m_test1Result.secAddr.m_address);
    v30 = _byteswap_ulong(bdSockAddr::toUInt32(&_RBP->m_test1Result.secAddr.m_address));
    v22 = bdSockAddr::getPort(&_RBP->m_test1Result.mappedAddr.m_address);
    v29 = _byteswap_ulong(bdSockAddr::toUInt32(&_RBP->m_test1Result.mappedAddr.m_address));
    v39 = bdSockAddr::getPort(&_RBP->m_test1Result.fromAddr.m_address);
    v28 = _byteswap_ulong(bdSockAddr::toUInt32(&_RBP->m_test1Result.fromAddr.m_address));
    value = _RBP->m_test1Result.msSinceStart;
    v38 = bdSockAddr::getPort(&_RBP->m_serverAddr1.m_address);
    v6 = bdSockAddr::toUInt32(&_RBP->m_serverAddr1.m_address);
    __asm { vmovss  xmm6, dword ptr [rbp+0A94h] }
    m_configMaxResends = _RBP->m_configMaxResends;
    m_duration = _RBP->m_duration;
    m_natType = _RBP->m_natType;
    m_result = _RBP->m_result;
    v12 = _byteswap_ulong(v6);
    if ( DLog_IsActive() )
    {
      if ( DLog_BeginRow(v3->m_contexts, "nat_discovery_result") && DLog_UInt8(v3->m_contexts, "result", m_result) && DLog_UInt8(v3->m_contexts, "nat_type", m_natType) && DLog_UInt32(v3->m_contexts, "duration_ms", m_duration) && DLog_UInt32(v3->m_contexts, "max_resends", m_configMaxResends) )
      {
        __asm { vmovaps xmm2, xmm6; value }
        if ( DLog_Float32(v3->m_contexts, "send_timeout", *(float *)&_XMM2) && DLog_UInt32(v3->m_contexts, "server1_addr", v12) && DLog_UInt16(v3->m_contexts, "server1_port", v38) && DLog_UInt32(v3->m_contexts, "test1_ms_since_start", value) && DLog_UInt32(v3->m_contexts, "test1_from_addr", v28) && DLog_UInt16(v3->m_contexts, "test1_from_port", v39) && DLog_UInt32(v3->m_contexts, "test1_mapped_addr", v29) && DLog_UInt16(v3->m_contexts, "test1_mapped_port", v22) && DLog_UInt32(v3->m_contexts, "test1_sec_addr", v30) && DLog_UInt16(v3->m_contexts, "test1_sec_port", v23) && DLog_UInt32(v3->m_contexts, "test2_ms_since_start", v31) && DLog_UInt32(v3->m_contexts, "test2_from_addr", v32) && DLog_UInt16(v3->m_contexts, "test2_from_port", v24) && DLog_UInt32(v3->m_contexts, "test3_ms_since_start", msSinceStart) && DLog_UInt32(v3->m_contexts, "test3_from_addr", v34) && DLog_UInt16(v3->m_contexts, "test3_from_port", v25) && DLog_UInt32(v3->m_contexts, "test3_mapped_addr", v35) && DLog_UInt16(v3->m_contexts, "test3_mapped_port", Port) )
          DLog_EndRow(v3->m_contexts);
      }
    }
    else
    {
      v3->m_contexts[0].error = DLOG_ERROR_NOT_ACTIVE;
    }
    __asm { vmovaps xmm6, [rsp+98h+var_48] }
    if ( _RBP < (const bdNATTypeDiscoveryTelemetry *)&_RBP->m_sends[_RBP->m_sendCount] )
    {
      p_m_address = &_RBP->m_sends[0].dst.m_address;
      do
      {
        v16 = p_m_address[1].inUn.m_sockaddrStorage.__ss_pad2[9];
        v17 = p_m_address[1].inUn.m_sockaddrStorage.__ss_pad2[8];
        v18 = bdSockAddr::getPort(p_m_address);
        v19 = bdSockAddr::toUInt32(p_m_address);
        v20 = *((_DWORD *)&p_m_address[-1].inUn.m_ipv6Sockaddr + 30);
        v21 = _byteswap_ulong(v19);
        if ( DLog_IsActive() )
        {
          if ( DLog_BeginRow(m_contexts, "nat_discovery_sends") && DLog_UInt32(m_contexts, "ms_since_start", v20) && DLog_UInt32(m_contexts, "dst_addr", v21) && DLog_UInt16(m_contexts, "dst_port", v18) && DLog_UInt8(m_contexts, "packet_type", v17) && DLog_Bool(m_contexts, "send_success", v16) )
            DLog_EndRow(m_contexts);
        }
        else
        {
          m_contexts->error = DLOG_ERROR_NOT_ACTIVE;
        }
        p_m_address = (bdSockAddr *)((char *)p_m_address + 168);
      }
      while ( (char *)&p_m_address[-1].inUn.m_ipv6Sockaddr + 120 < (char *)&_RBP->m_sends[_RBP->m_sendCount] );
      v3 = this;
    }
    DLog_EndEvent(m_contexts);
    bdMutex::unlock(&v3->m_mutex);
    bdTelemetryDLogSink::checkAndLogErrors(v3);
  }
  else
  {
    bdMutex::unlock(&v3->m_mutex);
  }
}

/*
==============
bdTelemetryDLogSink::addNet
==============
*/
void bdTelemetryDLogSink::addNet(bdTelemetryDLogSink *this, const bdNetTelemetry *tel)
{
  __int64 v2; 
  bdTelemetryDLogSink *v4; 
  int v5; 
  unsigned int v6; 
  __int64 v7; 
  unsigned int v8; 
  bdMutex *p_m_mutex; 
  DLogContext *m_contexts; 
  char m_result; 
  unsigned int m_getHostInfoCount; 
  unsigned int m_msToResult; 
  bdNetTelemetry::GetHostInfo *i; 
  unsigned int msToResolution; 
  unsigned int v16; 
  unsigned int value[10]; 

  v2 = 0i64;
  v4 = this;
  v5 = 0;
  v6 = 0;
  if ( tel->m_localAddrCount )
  {
    do
    {
      if ( v6 >= 0xA )
        break;
      v7 = v6;
      v8 = bdSockAddr::toUInt32(&tel->m_localAddrs[(unsigned __int64)v6++]);
      ++v5;
      value[v7] = _byteswap_ulong(v8);
    }
    while ( v6 < tel->m_localAddrCount );
    v4 = this;
  }
  p_m_mutex = &v4->m_mutex;
  bdMutex::lock(&v4->m_mutex);
  m_contexts = v4->m_contexts;
  if ( DLog_BeginEvent(m_contexts, "dw_event_net") )
  {
    m_result = tel->m_result;
    m_getHostInfoCount = tel->m_getHostInfoCount;
    m_msToResult = tel->m_msToResult;
    if ( DLog_IsActive() )
    {
      if ( DLog_BeginRow(m_contexts, "net_result") && DLog_Int8(m_contexts, "result", m_result) && DLog_UInt32(m_contexts, "duration_ms", m_msToResult) && DLog_Int32(m_contexts, "local_addrs_count", v5) && DLog_UInt32(m_contexts, "get_host_by_names_count", m_getHostInfoCount) )
        DLog_EndRow(m_contexts);
    }
    else
    {
      m_contexts->error = DLOG_ERROR_NOT_ACTIVE;
    }
    if ( v5 > 0 )
    {
      do
      {
        if ( DLog_IsActive() )
        {
          if ( DLog_BeginRow(m_contexts, "local_addr_array") && DLog_UInt32(m_contexts, "local_addr", value[v2]) )
            DLog_EndRow(m_contexts);
        }
        else
        {
          m_contexts->error = DLOG_ERROR_NOT_ACTIVE;
        }
        ++v2;
      }
      while ( v2 < v5 );
    }
    for ( i = tel->m_getHostInfo; i < &tel->m_getHostInfo[tel->m_getHostInfoCount]; ++i )
    {
      msToResolution = i->msToResolution;
      v16 = _byteswap_ulong(bdSockAddr::toUInt32(&i->addr));
      if ( DLog_IsActive() )
      {
        if ( DLog_BeginRow(m_contexts, "get_host_by_names") && DLog_String(m_contexts, "hostname", i->hostname, 0) && DLog_UInt32(m_contexts, "addr", v16) && DLog_UInt32(m_contexts, "time_to_resolution_ms", msToResolution) )
          DLog_EndRow(m_contexts);
      }
      else
      {
        m_contexts->error = DLOG_ERROR_NOT_ACTIVE;
      }
    }
    DLog_EndEvent(m_contexts);
    bdMutex::unlock(p_m_mutex);
    bdTelemetryDLogSink::checkAndLogErrors(this);
  }
  else
  {
    bdMutex::unlock(p_m_mutex);
  }
}

/*
==============
bdTelemetryDLogSink::addQoS
==============
*/
void bdTelemetryDLogSink::addQoS(bdTelemetryDLogSink *this, const bdQoSTelemetry *tel)
{
  unsigned int m_msToNatTravResolve; 
  unsigned int m_duration; 
  unsigned __int8 m_result; 
  bdCommonAddr *m_ptr; 
  unsigned __int16 Port; 
  unsigned int v16; 
  unsigned int v17; 
  unsigned int v19; 
  char v29; 
  int v30; 
  int v31; 
  bdCommonAddr *caddr; 
  bdAddr v33; 
  unsigned __int8 *m_data; 
  unsigned int value; 
  bool m_disabled; 
  int m_bandwidthDown; 
  int m_bandwidthUp; 
  unsigned int m_numReplies; 
  unsigned int m_numProbesReceived; 
  unsigned int m_numProbesExpected; 
  unsigned int m_numRetries; 
  bdQoSProbeFailureReason m_failureReason; 
  char v47; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
  }
  _RDI = tel;
  bdMutex::lock(&this->m_mutex);
  if ( DLog_BeginEvent(&this->m_contexts[1], "dw_event_qos") )
  {
    m_msToNatTravResolve = _RDI->m_msToNatTravResolve;
    m_duration = _RDI->m_duration;
    m_result = _RDI->m_result;
    if ( DLog_IsActive() )
    {
      if ( DLog_BeginRow(&this->m_contexts[1], "qos_result") && DLog_UInt8(&this->m_contexts[1], "result", m_result) && DLog_UInt32(&this->m_contexts[1], "duration_ms", m_duration) && DLog_UInt32(&this->m_contexts[1], "ms_to_nat_trav_resolve", m_msToNatTravResolve) )
        DLog_EndRow(&this->m_contexts[1]);
    }
    else
    {
      this->m_contexts[1].error = DLOG_ERROR_NOT_ACTIVE;
    }
    m_ptr = _RDI->m_probeInfo.m_addr.m_ptr;
    caddr = m_ptr;
    if ( m_ptr )
      _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
    bdAddr::bdAddr(&v33, &_RDI->m_probeInfo.m_realAddr);
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+0B8h]
      vmovss  [rbp+0D0h+var_E0], xmm0
    }
    m_data = _RDI->m_probeInfo.m_data;
    value = _RDI->m_probeInfo.m_dataSize;
    m_disabled = _RDI->m_probeInfo.m_disabled;
    m_bandwidthDown = _RDI->m_probeInfo.m_bandwidthDown;
    m_bandwidthUp = _RDI->m_probeInfo.m_bandwidthUp;
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+0D8h]
      vmovss  [rbp+0D0h+var_C0], xmm0
    }
    m_numReplies = _RDI->m_probeInfo.m_numReplies;
    __asm
    {
      vmovups ymm0, ymmword ptr [rdi+0E0h]
      vmovups [rbp+0D0h+var_B8], ymm0
      vmovups ymm1, ymmword ptr [rdi+100h]
      vmovups [rbp+0D0h+var_98], ymm1
    }
    m_numProbesReceived = _RDI->m_probeInfo.m_numProbesReceived;
    m_numProbesExpected = _RDI->m_probeInfo.m_numProbesExpected;
    m_numRetries = _RDI->m_probeInfo.m_numRetries;
    m_failureReason = _RDI->m_probeInfo.m_failureReason;
    Port = bdSockAddr::getPort(&v33.m_address);
    v16 = _byteswap_ulong(bdSockAddr::toUInt32(&v33.m_address));
    v17 = m_numReplies;
    __asm { vmovss  xmm7, [rbp+0D0h+var_C0] }
    v31 = m_bandwidthDown;
    v30 = m_bandwidthUp;
    v29 = m_disabled;
    v19 = value;
    __asm { vmovss  xmm6, [rbp+0D0h+var_E0] }
    if ( DLog_IsActive() )
    {
      if ( DLog_BeginRow(&this->m_contexts[1], "qos_info") && DLog_UInt32(&this->m_contexts[1], "real_addr", v16) && DLog_UInt16(&this->m_contexts[1], "real_port", Port) )
      {
        __asm { vmovaps xmm2, xmm6; value }
        if ( DLog_Float32(&this->m_contexts[1], "latency", *(float *)&_XMM2) && DLog_UInt32(&this->m_contexts[1], "data_size", v19) && DLog_Bool(&this->m_contexts[1], "remote_disabled", v29) && DLog_UInt32(&this->m_contexts[1], "bandwidth_up", v30) && DLog_UInt32(&this->m_contexts[1], "bandwidth_down", v31) )
        {
          __asm { vmovaps xmm2, xmm7; value }
          if ( DLog_Float32(&this->m_contexts[1], "min_latency", *(float *)&_XMM2) && DLog_UInt32(&this->m_contexts[1], "num_replies", v17) && DLog_UInt32(&this->m_contexts[1], "reply_latency_count", v17) )
            DLog_EndRow(&this->m_contexts[1]);
        }
      }
    }
    else
    {
      this->m_contexts[1].error = DLOG_ERROR_NOT_ACTIVE;
    }
    for ( _RDI = 0i64; (unsigned int)_RDI < m_numReplies; _RDI = (unsigned int)(_RDI + 1) )
    {
      __asm { vmovss  xmm6, dword ptr [rbp+rdi*4+0D0h+var_B8] }
      if ( DLog_IsActive() )
      {
        if ( DLog_BeginRow(&this->m_contexts[1], "reply_latency_array") )
        {
          __asm { vmovaps xmm2, xmm6; value }
          if ( DLog_Float32(&this->m_contexts[1], "reply_latency", *(float *)&_XMM2) )
            DLog_EndRow(&this->m_contexts[1]);
        }
      }
      else
      {
        this->m_contexts[1].error = DLOG_ERROR_NOT_ACTIVE;
      }
    }
    if ( caddr )
      bdTelemetryDLogSink::commonAddrRecord(this, &this->m_contexts[1], "qos_remote_common_addr", "qos_remote_common_addrs_array", caddr);
    DLog_EndEvent(&this->m_contexts[1]);
    bdMutex::unlock(&this->m_mutex);
    bdTelemetryDLogSink::checkAndLogErrors(this);
    if ( caddr && _InterlockedExchangeAdd((volatile signed __int32 *)&caddr->m_refCount, 0xFFFFFFFF) == 1 )
      ((void (__fastcall *)(bdCommonAddr *, __int64))caddr->~bdReferencable)(caddr, 1i64);
  }
  else
  {
    bdMutex::unlock(&this->m_mutex);
  }
  _R11 = &v47;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
}

/*
==============
bdTelemetryDLogSink::addRelayAssociation
==============
*/
void bdTelemetryDLogSink::addRelayAssociation(bdTelemetryDLogSink *this, const bdRelayAssociationTelemetry *tel)
{
  unsigned int m_routingID; 
  unsigned __int16 Port; 
  unsigned int v6; 
  unsigned __int64 m_relayID; 
  unsigned __int8 m_associationType; 
  unsigned int v9; 
  unsigned __int8 m_disconnectResends; 
  unsigned __int8 m_lastError; 
  unsigned int value; 
  int m_sendSeqNum; 
  int m_recvSeqNum; 
  unsigned int m_timeToStartMs; 
  unsigned int m_timeToInitAckMs; 
  unsigned int m_timeToEstablishedMs; 
  unsigned int m_sentData; 
  unsigned int m_receivedData; 
  unsigned __int8 m_initResends; 
  unsigned __int8 m_verifyResends; 
  unsigned __int8 m_upgradeResends; 

  bdMutex::lock(&this->m_mutex);
  if ( DLog_BeginEvent(&this->m_contexts[1], "dw_event_relay_association") )
  {
    m_lastError = tel->m_lastError;
    m_receivedData = tel->m_receivedData;
    m_sentData = tel->m_sentData;
    m_timeToEstablishedMs = tel->m_timeToEstablishedMs;
    m_timeToInitAckMs = tel->m_timeToInitAckMs;
    m_timeToStartMs = tel->m_timeToStartMs;
    m_recvSeqNum = tel->m_recvSeqNum;
    m_sendSeqNum = tel->m_sendSeqNum;
    m_disconnectResends = tel->m_disconnectResends;
    m_upgradeResends = tel->m_upgradeResends;
    m_verifyResends = tel->m_verifyResends;
    m_routingID = tel->m_routingID;
    m_initResends = tel->m_initResends;
    value = tel->m_lifeTimeMs;
    Port = bdSockAddr::getPort(&tel->m_relayAddr->m_address);
    v6 = bdSockAddr::toUInt32(&tel->m_relayAddr->m_address);
    m_relayID = tel->m_relayID;
    m_associationType = tel->m_associationType;
    v9 = _byteswap_ulong(v6);
    if ( DLog_IsActive() )
    {
      if ( DLog_BeginRow(&this->m_contexts[1], "relay_association_result") && DLog_UInt8(&this->m_contexts[1], "type", m_associationType) && DLog_UInt64(&this->m_contexts[1], "relay_id", m_relayID) && DLog_UInt32(&this->m_contexts[1], "relay_addr", v9) && DLog_UInt16(&this->m_contexts[1], "relay_port", Port) && DLog_UInt32(&this->m_contexts[1], "routing_id", m_routingID) && DLog_UInt32(&this->m_contexts[1], "lifetime_ms", value) && DLog_UInt8(&this->m_contexts[1], "init_resends", m_initResends) && DLog_UInt8(&this->m_contexts[1], "verify_resends", m_verifyResends) && DLog_UInt8(&this->m_contexts[1], "upgrade_resends", m_upgradeResends) && DLog_UInt8(&this->m_contexts[1], "disconnect_resends", m_disconnectResends) && DLog_Int32(&this->m_contexts[1], "send_seq_num", m_sendSeqNum) && DLog_Int32(&this->m_contexts[1], "recv_seq_num", m_recvSeqNum) && DLog_UInt32(&this->m_contexts[1], "stage_start_ms", m_timeToStartMs) && DLog_UInt32(&this->m_contexts[1], "stage_init_ack_ms", m_timeToInitAckMs) && DLog_UInt32(&this->m_contexts[1], "stage_established_ms", m_timeToEstablishedMs) && DLog_UInt32(&this->m_contexts[1], "sent_bytes", m_sentData) && DLog_UInt32(&this->m_contexts[1], "recv_bytes", m_receivedData) && DLog_UInt8(&this->m_contexts[1], "last_error", m_lastError) && DLog_String(&this->m_contexts[1], "dml_region", this->m_dml.m_region, 0) && DLog_String(&this->m_contexts[1], "dml_city", this->m_dml.m_city, 0) )
        DLog_EndRow(&this->m_contexts[1]);
    }
    else
    {
      this->m_contexts[1].error = DLOG_ERROR_NOT_ACTIVE;
    }
    DLog_EndEvent(&this->m_contexts[1]);
    bdMutex::unlock(&this->m_mutex);
    bdTelemetryDLogSink::checkAndLogErrors(this);
  }
  else
  {
    bdMutex::unlock(&this->m_mutex);
  }
}

/*
==============
bdTelemetryDLogSink::addRelayFallback
==============
*/
void bdTelemetryDLogSink::addRelayFallback(bdTelemetryDLogSink *this, const bdReference<bdCommonAddr> *local, const bdReference<bdCommonAddr> *remote, const bool initialResult)
{
  unsigned __int64 m_lobbyID; 
  unsigned __int64 m_matchMakingID; 
  unsigned __int64 userId; 
  unsigned int m_titleID; 
  __int64 v9; 
  const bdReference<bdCommonAddr> *v10; 
  bdAddr *PublicAddr; 
  bdAddr *v12; 
  unsigned int v13; 
  unsigned __int8 v14; 
  unsigned __int8 v15; 
  bdAddr *v16; 
  unsigned __int16 v17; 
  bdAddr *v18; 
  unsigned int v19; 
  unsigned __int8 NATType; 
  unsigned __int16 Port; 
  unsigned __int8 m_platformID; 

  bdMutex::lock(&this->m_mutex);
  bdHandleAssert(this->m_initialized, "m_initialized", "c:\\workspace\\iw8\\code_source\\src\\dlog\\bdtelemetrydlogsink.cpp", "bdTelemetryDLogSink::event", 0x97u, "bdTelemetryDLogSink is not initialized. Call bdTelemetryDLogSink::init() first.");
  if ( DLog_IsActive() )
  {
    DLog_BeginEvent(&this->m_contexts[1], "dw_event_relay_fallback");
    this->m_contexts[1].autoEndEvent = 1;
  }
  else
  {
    this->m_contexts[1].error = DLOG_ERROR_NOT_ACTIVE;
  }
  m_lobbyID = this->m_lobbyID;
  m_matchMakingID = this->m_matchMakingID;
  userId = this->m_contexts[1].userId;
  m_titleID = this->m_titleID;
  v9 = this->currentTimestamp(this);
  if ( DLog_IsActive() )
  {
    if ( DLog_BeginRow(&this->m_contexts[1], "header") && DLog_Int64(&this->m_contexts[1], "ms_since_epoch", v9) && DLog_UInt32(&this->m_contexts[1], "title_id", m_titleID) && DLog_UInt64(&this->m_contexts[1], "user_id", userId) && DLog_UInt64(&this->m_contexts[1], "match_making_id", m_matchMakingID) && DLog_UInt64(&this->m_contexts[1], "lobby_id", m_lobbyID) && DLog_String(&this->m_contexts[1], "dml_country_code", (const char *)&this->m_dml.__vftable + 16, 0) )
      DLog_EndRow(&this->m_contexts[1]);
  }
  else
  {
    this->m_contexts[1].error = DLOG_ERROR_NOT_ACTIVE;
  }
  v10 = remote;
  NATType = bdCommonAddr::getNATType(remote->m_ptr);
  m_platformID = remote->m_ptr->m_platformID;
  PublicAddr = (bdAddr *)bdCommonAddr::getPublicAddr(v10->m_ptr);
  Port = bdSockAddr::getPort(&PublicAddr->m_address);
  v12 = (bdAddr *)bdCommonAddr::getPublicAddr(v10->m_ptr);
  v13 = _byteswap_ulong(bdSockAddr::toUInt32(&v12->m_address));
  v14 = bdCommonAddr::getNATType(local->m_ptr);
  v15 = local->m_ptr->m_platformID;
  v16 = (bdAddr *)bdCommonAddr::getPublicAddr(local->m_ptr);
  v17 = bdSockAddr::getPort(&v16->m_address);
  v18 = (bdAddr *)bdCommonAddr::getPublicAddr(local->m_ptr);
  v19 = _byteswap_ulong(bdSockAddr::toUInt32(&v18->m_address));
  if ( DLog_IsActive() )
  {
    if ( DLog_BeginRow(&this->m_contexts[1], "relay_fallback") && DLog_UInt32(&this->m_contexts[1], "local_addr", v19) && DLog_UInt16(&this->m_contexts[1], "local_port", v17) && DLog_UInt8(&this->m_contexts[1], "local_platform", v15) && DLog_UInt8(&this->m_contexts[1], "local_nat_type", v14) && DLog_UInt32(&this->m_contexts[1], "remote_addr", v13) && DLog_UInt16(&this->m_contexts[1], "remote_port", Port) && DLog_UInt8(&this->m_contexts[1], "remote_platform", m_platformID) && DLog_UInt8(&this->m_contexts[1], "remote_nat_type", NATType) && DLog_Bool(&this->m_contexts[1], "initial_result", initialResult) )
      DLog_EndRow(&this->m_contexts[1]);
  }
  else
  {
    this->m_contexts[1].error = DLOG_ERROR_NOT_ACTIVE;
  }
  bdMutex::unlock(&this->m_mutex);
  bdTelemetryDLogSink::checkAndLogErrors(this);
}

/*
==============
bdTelemetryDLogSink::addUPnP
==============
*/
void bdTelemetryDLogSink::addUPnP(bdTelemetryDLogSink *this, const bdUPnPTelemetry *tel)
{
  bdMutex *p_m_mutex; 
  DLogContext *m_contexts; 
  bool m_onlyUseGateway; 
  bdSockAddr *v10; 
  unsigned int v11; 
  unsigned int v15; 
  unsigned int v16; 
  unsigned int m_numDiscoveryAttempts; 
  unsigned __int16 m_gamePort; 
  unsigned int m_duration; 
  unsigned __int8 m_result; 
  unsigned int v21; 
  unsigned int *p_msSinceStart; 
  bdSockAddr *p_m_address; 
  unsigned __int16 v30; 
  unsigned int v31; 
  unsigned int v32; 
  unsigned int v33; 
  unsigned __int8 portStatus; 
  unsigned __int8 m_runMode; 
  unsigned __int8 m_portSelectionMode; 
  bool v37; 
  unsigned __int16 v38; 
  unsigned __int16 Port; 
  unsigned int value; 
  unsigned int m_mappingRetries; 
  unsigned int m_portPoolSize; 
  unsigned __int32 v43; 
  bdAddr v45; 

  p_m_mutex = &this->m_mutex;
  _R14 = tel;
  bdMutex::lock(&this->m_mutex);
  m_contexts = this->m_contexts;
  if ( DLog_BeginEvent(m_contexts, "dw_event_upnp") )
  {
    m_onlyUseGateway = _R14->m_config.m_onlyUseGateway;
    __asm
    {
      vmovaps [rsp+158h+var_48], xmm6
      vmovaps [rsp+158h+var_58], xmm7
      vmovaps [rsp+158h+var_68], xmm8
    }
    v37 = m_onlyUseGateway;
    bdAddr::bdAddr(&v45, &_R14->m_config.m_gatewayAddr, 0);
    v11 = bdSockAddr::toUInt32(v10);
    __asm
    {
      vmovss  xmm8, dword ptr [r14+5E0h]
      vmovss  xmm7, dword ptr [r14+5DCh]
      vmovss  xmm6, dword ptr [r14+5D8h]
    }
    v43 = _byteswap_ulong(v11);
    m_portPoolSize = _R14->m_config.m_portPoolSize;
    m_portSelectionMode = _R14->m_config.m_portSelectionMode;
    m_mappingRetries = _R14->m_config.m_mappingRetries;
    value = _R14->m_config.m_discoveryRetries;
    m_runMode = _R14->m_config.m_runMode;
    portStatus = _R14->m_device.portStatus;
    Port = bdSockAddr::getPort(&_R14->m_device.externalAddr.m_address);
    v15 = _byteswap_ulong(bdSockAddr::toUInt32(&_R14->m_device.externalAddr.m_address));
    v38 = bdSockAddr::getPort(&_R14->m_device.addr.m_address);
    v16 = bdSockAddr::toUInt32(&_R14->m_device.addr.m_address);
    m_numDiscoveryAttempts = _R14->m_numDiscoveryAttempts;
    m_gamePort = _R14->m_gamePort;
    m_duration = _R14->m_duration;
    m_result = _R14->m_result;
    v21 = _byteswap_ulong(v16);
    if ( DLog_IsActive() )
    {
      if ( DLog_BeginRow(m_contexts, "upnp_result") && DLog_UInt8(m_contexts, "result", m_result) && DLog_UInt32(m_contexts, "duration_ms", m_duration) && DLog_UInt16(m_contexts, "game_port", m_gamePort) && DLog_UInt32(m_contexts, "discovery_attempts", m_numDiscoveryAttempts) && DLog_UInt32(m_contexts, "device_addr", v21) && DLog_UInt16(m_contexts, "device_port", v38) && DLog_UInt32(m_contexts, "device_external_addr", v15) && DLog_UInt16(m_contexts, "device_external_port", Port) && DLog_UInt8(m_contexts, "device_port_status", portStatus) )
      {
        __asm { vmovaps xmm2, xmm6; value }
        if ( DLog_Float32(m_contexts, "conf_discovery_timeout", *(float *)&_XMM2) )
        {
          __asm { vmovaps xmm2, xmm7; value }
          if ( DLog_Float32(m_contexts, "conf_response_timeout", *(float *)&_XMM2) )
          {
            __asm { vmovaps xmm2, xmm8; value }
            if ( DLog_Float32(m_contexts, "conf_connect_timeout", *(float *)&_XMM2) && DLog_UInt8(m_contexts, "conf_run_mode", m_runMode) && DLog_UInt32(m_contexts, "conf_discovery_retries", value) && DLog_UInt32(m_contexts, "conf_mapping_retries", m_mappingRetries) && DLog_UInt8(m_contexts, "conf_port_selection_mode", m_portSelectionMode) && DLog_UInt32(m_contexts, "conf_port_pool_size", m_portPoolSize) && DLog_UInt32(m_contexts, "conf_gateway_addr", v43) && DLog_Bool(m_contexts, "conf_only_use_gateway", v37) )
              DLog_EndRow(m_contexts);
          }
        }
      }
    }
    else
    {
      m_contexts->error = DLOG_ERROR_NOT_ACTIVE;
    }
    p_msSinceStart = &_R14->m_discoveredDevices[0].msSinceStart;
    __asm
    {
      vmovaps xmm8, [rsp+158h+var_68]
      vmovaps xmm7, [rsp+158h+var_58]
      vmovaps xmm6, [rsp+158h+var_48]
    }
    if ( _R14->m_discoveredDevices < &_R14->m_discoveredDevices[_R14->m_discoveredDeviceCount] )
    {
      p_m_address = &_R14->m_discoveredDevices[0].address.m_address;
      do
      {
        v30 = bdSockAddr::getPort(p_m_address);
        v31 = bdSockAddr::toUInt32(p_m_address);
        v32 = *p_msSinceStart;
        v33 = _byteswap_ulong(v31);
        if ( DLog_IsActive() )
        {
          if ( DLog_BeginRow(m_contexts, "upnp_discovered_device") && DLog_UInt32(m_contexts, "ms_since_start", v32) && DLog_UInt32(m_contexts, "addr", v33) && DLog_UInt16(m_contexts, "port", v30) && DLog_String(m_contexts, "notify_server_field", &p_m_address[1].inUn.m_sockaddrStorage.__ss_pad2[8], 0) )
            DLog_EndRow(m_contexts);
        }
        else
        {
          m_contexts->error = DLOG_ERROR_NOT_ACTIVE;
        }
        p_msSinceStart += 72;
        p_m_address = (bdSockAddr *)((char *)p_m_address + 288);
      }
      while ( p_msSinceStart < &_R14->m_discoveredDevices[_R14->m_discoveredDeviceCount].msSinceStart );
    }
    DLog_EndEvent(m_contexts);
    bdMutex::unlock(&this->m_mutex);
    bdTelemetryDLogSink::checkAndLogErrors(this);
  }
  else
  {
    bdMutex::unlock(p_m_mutex);
  }
}

/*
==============
bdTelemetryDLogSink::addrToIPv4
==============
*/
__int64 bdTelemetryDLogSink::addrToIPv4(bdTelemetryDLogSink *this, const bdAddr *addr)
{
  return _byteswap_ulong(bdSockAddr::toUInt32(&addr->m_address));
}

/*
==============
bdTelemetryDLogSink::addrToIPv4
==============
*/
__int64 bdTelemetryDLogSink::addrToIPv4(bdTelemetryDLogSink *this, const bdSockAddr *addr)
{
  return _byteswap_ulong(bdSockAddr::toUInt32((bdSockAddr *)addr));
}

/*
==============
bdTelemetryDLogSink::checkAndLogErrors
==============
*/
void bdTelemetryDLogSink::checkAndLogErrors(bdTelemetryDLogSink *this)
{
  DLogError *p_error; 
  int i; 
  __int64 v4; 
  __int64 v5; 

  p_error = &this->m_contexts[0].error;
  for ( i = 0; i < 2; ++i )
  {
    if ( *p_error )
    {
      SLODWORD(v5) = *p_error;
      LODWORD(v4) = i;
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdTelemetry", "c:\\workspace\\iw8\\code_source\\src\\dlog\\bdtelemetrydlogsink.cpp", "bdTelemetryDLogSink::checkAndLogErrors", 0x86u, "error state set in dlog sink context[%d] DLogError[%d]", v4, v5);
      if ( *p_error == DLOG_ERROR_OUT_OF_MEMORY )
        DLog_CreateContext((DLogContext *)(p_error - 15), *(_QWORD *)(p_error + 1), *(void **)(p_error - 13), *((_DWORD *)p_error - 11));
    }
    if ( *((_DWORD *)p_error - 11) - *((_DWORD *)p_error - 15) <= this->m_flushAtRemainingBytes )
      this->record(this);
    p_error += 88;
  }
}

/*
==============
bdTelemetryDLogSink::commonAddrRecord
==============
*/
void bdTelemetryDLogSink::commonAddrRecord(bdTelemetryDLogSink *this, DLogContext *context, const char *name, const char *arrayName, const bdCommonAddr *caddr)
{
  int m_size; 
  __int64 v8; 
  unsigned int v9; 
  __int64 i; 
  bdAddr *LocalAddrByIndex; 
  bdAddr *v12; 
  bdAddr *PublicAddr; 
  bdAddr *v14; 
  unsigned int v15; 
  unsigned __int8 NATType; 
  unsigned __int16 Port; 
  unsigned int value[12]; 

  if ( (int)bdCommonAddr::getLocalAddrs((bdCommonAddr *)caddr)->m_size >= 8 )
    m_size = 8;
  else
    m_size = bdCommonAddr::getLocalAddrs((bdCommonAddr *)caddr)->m_size;
  v8 = 0i64;
  v9 = 0;
  if ( m_size > 0 )
  {
    for ( i = 0i64; i < m_size; ++i )
    {
      LocalAddrByIndex = (bdAddr *)bdCommonAddr::getLocalAddrByIndex((bdCommonAddr *)caddr, v9);
      value[i] = _byteswap_ulong(bdSockAddr::toUInt32(&LocalAddrByIndex->m_address));
      v12 = (bdAddr *)bdCommonAddr::getLocalAddrByIndex((bdCommonAddr *)caddr, v9);
      *((_WORD *)&value[8] + i) = bdSockAddr::getPort(&v12->m_address);
      ++v9;
    }
  }
  PublicAddr = (bdAddr *)bdCommonAddr::getPublicAddr((bdCommonAddr *)caddr);
  Port = bdSockAddr::getPort(&PublicAddr->m_address);
  v14 = (bdAddr *)bdCommonAddr::getPublicAddr((bdCommonAddr *)caddr);
  v15 = _byteswap_ulong(bdSockAddr::toUInt32(&v14->m_address));
  NATType = bdCommonAddr::getNATType((bdCommonAddr *)caddr);
  if ( DLog_IsActive() )
  {
    if ( DLog_BeginRow(context, name) && DLog_UInt8(context, "nat_type", NATType) && DLog_UInt32(context, "public_addr", v15) && DLog_UInt16(context, "public_port", Port) && DLog_Int32(context, "local_addr_count", m_size) )
      DLog_EndRow(context);
  }
  else
  {
    context->error = DLOG_ERROR_NOT_ACTIVE;
  }
  if ( m_size > 0 )
  {
    do
    {
      if ( DLog_IsActive() )
      {
        if ( DLog_BeginRow(context, arrayName) && DLog_UInt32(context, "local_addr", value[v8]) && DLog_UInt16(context, "local_port", *((_WORD *)&value[8] + v8)) )
          DLog_EndRow(context);
      }
      else
      {
        context->error = DLOG_ERROR_NOT_ACTIVE;
      }
      ++v8;
    }
    while ( v8 < m_size );
  }
}

/*
==============
bdTelemetryDLogSink::currentTimestamp
==============
*/
__int64 bdTelemetryDLogSink::currentTimestamp(bdTelemetryDLogSink *this)
{
  return Xtime_get_ticks_0() / 10000;
}

/*
==============
bdTelemetryDLogSink::discard
==============
*/
void bdTelemetryDLogSink::discard(bdTelemetryDLogSink *this, bdTelemetry::bdTelemetryContextID contextID)
{
  __int64 v2; 
  int v4; 

  v2 = contextID;
  bdHandleAssert(this->m_initialized, "m_initialized", "c:\\workspace\\iw8\\code_source\\src\\dlog\\bdtelemetrydlogsink.cpp", "bdTelemetryDLogSink::discard", 0x71u, "bdTelemetryDLogSink is not initialized. Call bdTelemetryDLogSink::init() first.");
  if ( (unsigned int)v2 > 1 )
  {
    v4 = v2;
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdTelemetry", "c:\\workspace\\iw8\\code_source\\src\\dlog\\bdtelemetrydlogsink.cpp", "bdTelemetryDLogSink::discard", 0x7Au, "Invalid bdTelemetryContextID [%d]", v4);
  }
  else
  {
    DLog_CreateContext(&this->m_contexts[v2], this->m_contexts[v2].userId, this->m_contexts[v2].buffer, this->m_contexts[v2].bufferSize);
  }
}

/*
==============
bdTelemetryDLogSink::event
==============
*/
void bdTelemetryDLogSink::event(bdTelemetryDLogSink *this, bdTelemetry::bdTelemetryContextID context, const char *name)
{
  __int64 v3; 
  __int64 v6; 
  DLogContext *v7; 
  unsigned __int64 m_lobbyID; 
  unsigned __int64 m_matchMakingID; 
  unsigned __int64 userId; 
  unsigned int m_titleID; 
  __int64 v12; 

  v3 = context;
  bdHandleAssert(this->m_initialized, "m_initialized", "c:\\workspace\\iw8\\code_source\\src\\dlog\\bdtelemetrydlogsink.cpp", "bdTelemetryDLogSink::event", 0x97u, "bdTelemetryDLogSink is not initialized. Call bdTelemetryDLogSink::init() first.");
  v6 = v3;
  v7 = &this->m_contexts[v3];
  if ( DLog_IsActive() )
  {
    DLog_BeginEvent(v7, name);
    v7->autoEndEvent = 1;
  }
  else
  {
    v7->error = DLOG_ERROR_NOT_ACTIVE;
  }
  m_lobbyID = this->m_lobbyID;
  m_matchMakingID = this->m_matchMakingID;
  userId = this->m_contexts[v6].userId;
  m_titleID = this->m_titleID;
  v12 = this->currentTimestamp(this);
  if ( DLog_IsActive() )
  {
    if ( DLog_BeginRow(v7, "header") && DLog_Int64(v7, "ms_since_epoch", v12) && DLog_UInt32(v7, "title_id", m_titleID) && DLog_UInt64(v7, "user_id", userId) && DLog_UInt64(v7, "match_making_id", m_matchMakingID) && DLog_UInt64(v7, "lobby_id", m_lobbyID) && DLog_String(v7, "dml_country_code", (const char *)&this->m_dml.__vftable + 16, 0) )
      DLog_EndRow(v7);
  }
  else
  {
    v7->error = DLOG_ERROR_NOT_ACTIVE;
  }
}

/*
==============
bdTelemetryDLogSink::getInstance
==============
*/
bdTelemetryDLogSink *bdTelemetryDLogSink::getInstance()
{
  return bdTelemetryDLogSink::m_instance;
}

/*
==============
bdTelemetryDLogSink::header
==============
*/
void bdTelemetryDLogSink::header(bdTelemetryDLogSink *this, DLogContext *context, const DLogEvent *event)
{
  unsigned __int64 m_lobbyID; 
  unsigned __int64 m_matchMakingID; 
  unsigned __int64 userId; 
  unsigned int m_titleID; 
  __int64 v9; 

  m_lobbyID = this->m_lobbyID;
  m_matchMakingID = this->m_matchMakingID;
  userId = context->userId;
  m_titleID = this->m_titleID;
  v9 = ((__int64 (__fastcall *)(bdTelemetryDLogSink *, DLogContext *, const DLogEvent *))this->currentTimestamp)(this, context, event);
  if ( DLog_IsActive() )
  {
    if ( DLog_BeginRow(context, "header") && DLog_Int64(context, "ms_since_epoch", v9) && DLog_UInt32(context, "title_id", m_titleID) && DLog_UInt64(context, "user_id", userId) && DLog_UInt64(context, "match_making_id", m_matchMakingID) && DLog_UInt64(context, "lobby_id", m_lobbyID) && DLog_String(context, "dml_country_code", (const char *)&this->m_dml.__vftable + 16, 0) )
      DLog_EndRow(context);
  }
  else
  {
    context->error = DLOG_ERROR_NOT_ACTIVE;
  }
}

/*
==============
bdTelemetryDLogSink::init
==============
*/
void bdTelemetryDLogSink::init(bdTelemetryDLogSink *this, unsigned int titleID, unsigned __int64 userID, void **buffers, int *bufferSizes)
{
  DLogContext *m_contexts; 
  __int64 v10; 

  m_contexts = this->m_contexts;
  this->m_titleID = titleID;
  this->m_matchMakingID = 0i64;
  this->m_lobbyID = 0i64;
  this->m_currentEventType = 0;
  v10 = 2i64;
  this->m_flushAtRemainingBytes = 0x4000;
  do
  {
    DLog_CreateContext(m_contexts++, userID, *buffers++, *bufferSizes++);
    --v10;
  }
  while ( v10 );
  this->m_initialized = 1;
}

/*
==============
bdTelemetryDLogSink::record
==============
*/
void bdTelemetryDLogSink::record(bdTelemetryDLogSink *this)
{
  bdMutex *p_m_mutex; 
  bdTelemetry::bdTelemetryContextID v3; 
  DLogContext *m_contexts; 

  bdHandleAssert(this->m_initialized, "m_initialized", "c:\\workspace\\iw8\\code_source\\src\\dlog\\bdtelemetrydlogsink.cpp", "bdTelemetryDLogSink::record", 0x4Au, "bdTelemetryDLogSink is not initialized. Call bdTelemetryDLogSink::init() first.");
  p_m_mutex = &this->m_mutex;
  bdMutex::lock(&this->m_mutex);
  v3 = BD_TELEMETRY_CONTEXT_STARTUP;
  m_contexts = this->m_contexts;
  do
  {
    if ( DLog_GetContextSize(m_contexts) )
    {
      DLog_RecordContext(m_contexts);
      bdTelemetry::discard(v3);
    }
    ++v3;
    ++m_contexts;
  }
  while ( (unsigned int)v3 < BD_TELEMETRY_NUM_CONTEXTS );
  bdMutex::unlock(p_m_mutex);
}

/*
==============
bdTelemetryDLogSink::recordSampled
==============
*/

void __fastcall bdTelemetryDLogSink::recordSampled(bdTelemetryDLogSink *this, double sampleRate)
{
  bdTelemetry::bdTelemetryContextID v6; 
  bdTrulyRandomImpl *v7; 
  bdTrulyRandomImpl *v8; 
  bdSingletonRegistryImpl *Instance; 
  char v13; 
  char v14; 
  int in; 

  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps xmm6, xmm1
  }
  bdHandleAssert(this->m_initialized, "m_initialized", "c:\\workspace\\iw8\\code_source\\src\\dlog\\bdtelemetrydlogsink.cpp", "bdTelemetryDLogSink::recordSampled", 0x5Au, "bdTelemetryDLogSink is not initialized. Call bdTelemetryDLogSink::init() first.", -2i64);
  v6 = BD_TELEMETRY_CONTEXT_STARTUP;
  in = 0;
  if ( bdSingleton<bdTrulyRandomImpl>::m_instance )
    goto LABEL_9;
  v7 = (bdTrulyRandomImpl *)bdMemory::allocate(1ui64);
  if ( v7 )
    bdTrulyRandomImpl::bdTrulyRandomImpl(v7);
  else
    v8 = NULL;
  bdSingleton<bdTrulyRandomImpl>::m_instance = v8;
  if ( v8 )
  {
    Instance = bdSingleton<bdSingletonRegistryImpl>::getInstance();
    if ( bdSingletonRegistryImpl::add(Instance, bdSingleton<bdTrulyRandomImpl>::destroyInstance) )
      goto LABEL_9;
    bdMemory::deallocate(bdSingleton<bdTrulyRandomImpl>::m_instance);
    bdSingleton<bdTrulyRandomImpl>::m_instance = NULL;
  }
  DebugBreak();
LABEL_9:
  bdTrulyRandomImpl::getRandomUByte8(bdSingleton<bdTrulyRandomImpl>::m_instance, (unsigned __int8 *)&in, 4u);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm1, xmm0, cs:__real@2f800000
    vcomiss xmm1, xmm6
  }
  if ( v13 | v14 )
  {
    this->record(this);
    __asm { vmovaps xmm6, [rsp+58h+var_18] }
  }
  else
  {
    bdMutex::lock(&this->m_mutex);
    do
      bdTelemetry::discard(v6++);
    while ( (unsigned int)v6 < BD_TELEMETRY_NUM_CONTEXTS );
    bdMutex::unlock(&this->m_mutex);
    __asm { vmovaps xmm6, [rsp+58h+var_18] }
  }
}

/*
==============
bdTelemetryDLogSink::setContextUserId
==============
*/
void bdTelemetryDLogSink::setContextUserId(bdTelemetryDLogSink *this, unsigned __int64 userId)
{
  this->m_contexts[0].userId = userId;
  this->m_contexts[1].userId = userId;
}

/*
==============
bdTelemetryDLogSink::setLobbyID
==============
*/
void bdTelemetryDLogSink::setLobbyID(bdTelemetryDLogSink *this, const unsigned __int64 *lobbyID)
{
  this->m_lobbyID = *lobbyID;
}

/*
==============
bdTelemetryDLogSink::setMatchMakingID
==============
*/
void bdTelemetryDLogSink::setMatchMakingID(bdTelemetryDLogSink *this, const unsigned __int64 *matchMakingID)
{
  this->m_matchMakingID = *matchMakingID;
}

/*
==============
bdTelemetryDLogSink::setRegion
==============
*/
void bdTelemetryDLogSink::setRegion(bdTelemetryDLogSink *this, const bdDMLInfo *info)
{
  bdDMLInfo::operator=(&this->m_dml, info);
}

