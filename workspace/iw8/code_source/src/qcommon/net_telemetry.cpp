/*
==============
NetTelemetry::StartSend
==============
*/

void __fastcall NetTelemetry::StartSend(NetTelemetry *this, const int sendqSize)
{
  ?StartSend@NetTelemetry@@QEAAXH@Z(this, sendqSize);
}

/*
==============
NetTelemetry::Track
==============
*/

void __fastcall NetTelemetry::Track(NetTelemetry *this, NetTelemetry::StatType stat, long double value)
{
  ?Track@NetTelemetry@@AEAAXW4StatType@1@N@Z(this, stat, value);
}

/*
==============
NetTelemetry::Dlog
==============
*/

bool __fastcall NetTelemetry::Dlog(NetTelemetry *this, DLogContext *context, const char *name)
{
  return ?Dlog@NetTelemetry@@QEAA_NPEAUDLogContext@@PEBD@Z(this, context, name);
}

/*
==============
NetTelemetry::StartRecv
==============
*/

void __fastcall NetTelemetry::StartRecv(NetTelemetry *this, const int recvqSize)
{
  ?StartRecv@NetTelemetry@@QEAAXH@Z(this, recvqSize);
}

/*
==============
NetTelemetry::GameRecv
==============
*/

void __fastcall NetTelemetry::GameRecv(NetTelemetry *this)
{
  ?GameRecv@NetTelemetry@@QEAAXXZ(this);
}

/*
==============
NetTelemetry::Print
==============
*/

void __fastcall NetTelemetry::Print(NetTelemetry *this, unsigned int *percentiles, int percentileCount, const char *name)
{
  ?Print@NetTelemetry@@QEAAXPEAIHPEBD@Z(this, percentiles, percentileCount, name);
}

/*
==============
NetTelemetry::Frame
==============
*/

void __fastcall NetTelemetry::Frame(NetTelemetry *this)
{
  ?Frame@NetTelemetry@@QEAAXXZ(this);
}

/*
==============
NetTelemetry::EndPump
==============
*/

void __fastcall NetTelemetry::EndPump(NetTelemetry *this)
{
  ?EndPump@NetTelemetry@@QEAAXXZ(this);
}

/*
==============
NetTelemetry::NetRecv
==============
*/

void __fastcall NetTelemetry::NetRecv(NetTelemetry *this)
{
  ?NetRecv@NetTelemetry@@QEAAXXZ(this);
}

/*
==============
NetTelemetry::EndSend
==============
*/

void __fastcall NetTelemetry::EndSend(NetTelemetry *this, const int sendSize, const int packetCount)
{
  ?EndSend@NetTelemetry@@QEAAXHH@Z(this, sendSize, packetCount);
}

/*
==============
NetTelemetry::EndRecv
==============
*/

void __fastcall NetTelemetry::EndRecv(NetTelemetry *this, const int recvSize, const int packetCount)
{
  ?EndRecv@NetTelemetry@@QEAAXHH@Z(this, recvSize, packetCount);
}

/*
==============
NetTelemetry::StartPump
==============
*/

void __fastcall NetTelemetry::StartPump(NetTelemetry *this)
{
  ?StartPump@NetTelemetry@@QEAAXXZ(this);
}

/*
==============
NetTelemetry::Reset
==============
*/

void __fastcall NetTelemetry::Reset(NetTelemetry *this)
{
  ?Reset@NetTelemetry@@QEAAXXZ(this);
}

/*
==============
NetTelemetry::Dlog
==============
*/
bool NetTelemetry::Dlog(NetTelemetry *this, DLogContext *context, const char *name)
{
  bdSocketRouter *SocketRouter; 
  signed __int64 m_ticks; 
  signed __int64 v14; 
  bool v20; 
  unsigned int v21; 
  const char **v22; 
  unsigned __int64 v23; 
  __int64 v25; 
  __int64 v26; 
  unsigned __int8 outBuffer[1024]; 

  if ( !DLog_BeginRow(context, name) )
    goto LABEL_14;
  SocketRouter = dwGetSocketRouter();
  *(double *)&_XMM0 = bdSocketRouter::getLastReceived(SocketRouter);
  __asm { vmovaps xmm2, xmm0; value }
  if ( !DLog_Float32(context, "last_sock_recv", *(float *)&_XMM2) )
    goto LABEL_14;
  m_ticks = this->m_lastNetRecv.m_ticks;
  if ( this->m_lastNetRecv.m_started )
    m_ticks = __rdtsc() - m_ticks;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2sd xmm0, xmm0, rcx
  }
  if ( m_ticks < 0 )
    __asm { vaddsd  xmm0, xmm0, cs:__real@43f0000000000000 }
  __asm
  {
    vmulsd  xmm0, xmm0, cs:?msecPerRawTimerTick@@3NA; double msecPerRawTimerTick
    vcvtsd2ss xmm1, xmm0, xmm0
    vmulss  xmm2, xmm1, cs:__real@3a83126f; value
  }
  if ( !DLog_Float32(context, "last_net_recv", *(float *)&_XMM2) )
    goto LABEL_14;
  v14 = this->m_lastGameRecv.m_ticks;
  if ( this->m_lastGameRecv.m_started )
    v14 = __rdtsc() - v14;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2sd xmm0, xmm0, rcx
  }
  if ( v14 < 0 )
    __asm { vaddsd  xmm0, xmm0, cs:__real@43f0000000000000 }
  __asm
  {
    vmulsd  xmm0, xmm0, cs:?msecPerRawTimerTick@@3NA; double msecPerRawTimerTick
    vcvtsd2ss xmm1, xmm0, xmm0
    vmulss  xmm2, xmm1, cs:__real@3a83126f; value
  }
  if ( DLog_Float32(context, "last_game_recv", *(float *)&_XMM2) )
    v20 = 1;
  else
LABEL_14:
    v20 = 0;
  v21 = 0;
  v22 = s_statNames_1;
  do
  {
    DLogTDigest<20,8>::ProcessBufferedCentroids(&this->m_stats[v21].digest);
    v23 = DLogTDigest<20,8>::SerializeToProtobuf(&this->m_stats[v21].digest, outBuffer, 0x400ui64);
    if ( v23 > 0x400 )
    {
      LODWORD(v26) = 1024;
      LODWORD(v25) = v23;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_telemetry.cpp", 181, ASSERT_TYPE_ASSERT, "( digestSize ) <= ( sizeof( digestBuffer ) )", "%s <= %s\n\t%i, %i", "digestSize", "sizeof( digestBuffer )", v25, v26) )
        __debugbreak();
    }
    v20 = v20 && DLog_UInt8Array(context, *v22, outBuffer, v23);
    ++v21;
    ++v22;
  }
  while ( v21 < 0xD );
  return v20 && DLog_EndRow(context);
}

/*
==============
NetTelemetry::EndPump
==============
*/
void NetTelemetry::EndPump(NetTelemetry *this)
{
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2sd xmm0, xmm0, rax
  }
  if ( (Stopwatch::Restart(&this->m_pumpTimer) & 0x8000000000000000ui64) != 0i64 )
    __asm { vaddsd  xmm0, xmm0, cs:__real@43f0000000000000 }
  __asm { vmulsd  xmm2, xmm0, cs:?msecPerRawTimerTick@@3NA; value }
  NetTelemetry::Track(this, STAT_PACKET_OOO, *(long double *)&_XMM2);
}

/*
==============
NetTelemetry::EndRecv
==============
*/
void NetTelemetry::EndRecv(NetTelemetry *this, const int recvSize, const int packetCount)
{
  _RBX = this;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2sd xmm0, xmm0, rax
  }
  if ( (Stopwatch::Restart(&this->m_recvTimer) & 0x8000000000000000ui64) != 0i64 )
    __asm { vaddsd  xmm0, xmm0, cs:__real@43f0000000000000 }
  __asm { vmulsd  xmm2, xmm0, cs:?msecPerRawTimerTick@@3NA; value }
  NetTelemetry::Track(_RBX, STAT_PACKET_LOSS, *(long double *)&_XMM2);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2sd xmm0, xmm0, edi
    vaddsd  xmm1, xmm0, qword ptr [rbx+9A90h]
    vmovsd  qword ptr [rbx+9A90h], xmm1
  }
  _RBX->m_bandwidthRx.m_bins[_RBX->m_bandwidthRx.m_binIndex].value += recvSize;
}

/*
==============
NetTelemetry::EndSend
==============
*/
void NetTelemetry::EndSend(NetTelemetry *this, const int sendSize, const int packetCount)
{
  _RBX = this;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2sd xmm0, xmm0, rax
  }
  if ( (Stopwatch::Restart(&this->m_sendTimer) & 0x8000000000000000ui64) != 0i64 )
    __asm { vaddsd  xmm0, xmm0, cs:__real@43f0000000000000 }
  __asm { vmulsd  xmm2, xmm0, cs:?msecPerRawTimerTick@@3NA; value }
  NetTelemetry::Track(_RBX, STAT_MESSAGE_INTERVAL_RX, *(long double *)&_XMM2);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2sd xmm0, xmm0, edi
    vaddsd  xmm1, xmm0, qword ptr [rbx+9A88h]
    vmovsd  qword ptr [rbx+9A88h], xmm1
  }
  _RBX->m_bandwidthTx.m_bins[_RBX->m_bandwidthTx.m_binIndex].value += sendSize;
}

/*
==============
NetTelemetry::Frame
==============
*/
void NetTelemetry::Frame(NetTelemetry *this)
{
  int v3; 
  int v17; 
  int v18; 

  _RBX = this;
  v3 = Sys_Milliseconds();
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2sd xmm0, xmm0, rax
  }
  if ( (Stopwatch::Restart(&_RBX->m_lastFrame) & 0x8000000000000000ui64) != 0i64 )
    __asm { vaddsd  xmm0, xmm0, cs:__real@43f0000000000000 }
  __asm { vmulsd  xmm2, xmm0, cs:?msecPerRawTimerTick@@3NA; value }
  NetTelemetry::Track(_RBX, STAT_MESSAGE_LOSS, *(long double *)&_XMM2);
  BandwidthCounter<60>::GetTotalUsage(&_RBX->m_bandwidthTx);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm0, xmm0, cs:__real@35800000
    vcvtss2sd xmm2, xmm0, xmm0; value
  }
  NetTelemetry::Track(_RBX, STAT_PACKET_INTERVAL_TX, *(long double *)&_XMM2);
  BandwidthCounter<60>::GetTotalUsage(&_RBX->m_bandwidthRx);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm1, xmm0, cs:__real@35800000
    vcvtss2sd xmm2, xmm1, xmm1; value
  }
  NetTelemetry::Track(_RBX, STAT_PACKET_INTERVAL_RX, *(long double *)&_XMM2);
  if ( v3 - _RBX->m_accumStart >= 1000 )
  {
    __asm { vmovsd  xmm2, qword ptr [rbx+9A88h]; value }
    NetTelemetry::Track(_RBX, STAT_COUNT, *(long double *)&_XMM2);
    __asm { vmovsd  xmm2, qword ptr [rbx+9A90h]; value }
    NetTelemetry::Track(_RBX, STAT_PACKET_INVALID|STAT_MESSAGE_INTERVAL_RX, *(long double *)&_XMM2);
    _RBX->m_accums[0] = 0.0;
    _RBX->m_accums[1] = 0.0;
    _RBX->m_accumStart = v3;
  }
  v17 = (_RBX->m_bandwidthTx.m_binIndex + 1) % _RBX->m_bandwidthTx.m_binCount;
  _RBX->m_bandwidthTx.m_bins[v17].timestamp = v3;
  _RBX->m_bandwidthTx.m_bins[v17].value = 0;
  _RBX->m_bandwidthTx.m_binIndex = v17;
  v18 = (_RBX->m_bandwidthRx.m_binIndex + 1) % _RBX->m_bandwidthRx.m_binCount;
  _RBX->m_bandwidthRx.m_bins[v18].timestamp = v3;
  _RBX->m_bandwidthRx.m_bins[v18].value = 0;
  _RBX->m_bandwidthRx.m_binIndex = v18;
}

/*
==============
NetTelemetry::GameRecv
==============
*/
void NetTelemetry::GameRecv(NetTelemetry *this)
{
  this->m_lastGameRecv.m_started = 1;
  this->m_lastGameRecv.m_ticks = __rdtsc();
}

/*
==============
NetTelemetry::NetRecv
==============
*/
void NetTelemetry::NetRecv(NetTelemetry *this)
{
  this->m_lastNetRecv.m_started = 1;
  this->m_lastNetRecv.m_ticks = __rdtsc();
}

/*
==============
NetTelemetry::Print
==============
*/
void NetTelemetry::Print(NetTelemetry *this, unsigned int *percentiles, int percentileCount, const char *name)
{
  const char *v7; 
  unsigned int i; 
  int v17; 
  const char **v19; 
  unsigned int j; 
  const char *v21; 
  unsigned int k; 
  const char *v30; 
  unsigned int v31; 
  const char **v32; 
  const char *v33; 
  int headerColWidtha; 
  __int64 headerColWidth; 
  int dataColWidtha; 
  __int64 dataColWidth; 
  int percentilesb; 
  unsigned int *percentilesa; 
  int percentileCountb; 
  __int64 percentileCounta; 
  __int128 v44; 
  char dest[40]; 
  char v48[64]; 
  char v49[65]; 
  char v50[65]; 
  char v51[65]; 
  char v52[65]; 
  char v53[77]; 
  char buffer[1024]; 

  _R13 = this;
  v7 = j_va("%s_%s", name, s_statNames_1[0]);
  Core_strcpy(dest, 0x20ui64, v7);
  __asm { vmovsd  xmm3, qword ptr [r13+0] }
  _RDI = &v44;
  __asm
  {
    vmovups xmm1, xmmword ptr [r13+8]
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2sd xmm0, xmm0, rax
    vdivsd  xmm2, xmm3, xmm0
    vmovsd  [rsp+690h+var_618], xmm2
    vmovsd  [rbp+590h+var_610], xmm3
    vmovups [rsp+690h+var_628], xmm1
  }
  for ( i = 0; i < 4; ++i )
  {
    __asm
    {
      vmovsd  xmm2, qword ptr [rdi]
      vmovq   r8, xmm2
    }
    Com_sprintf_truncate<65>((char (*)[65])&v50[65 * i], "%.1f", *(double *)&_XMM2);
    _RDI = (__int128 *)((char *)_RDI + 8);
  }
  Com_sprintf<65>((char (*)[65])v49, "%u", _R13->m_stats[0].counter.m_count);
  percentileCountb = 10;
  percentilesb = 10;
  dataColWidtha = 10;
  headerColWidtha = 10;
  Com_sprintf<64>((char (*)[64])v48, "%%-%us%%-%us%%-%us%%-%us%%-%us%%-%us\n", 20i64, 10i64, headerColWidtha, dataColWidtha, percentilesb, percentileCountb);
  v17 = Com_sprintf(buffer, 0x400ui64, v48, "COUNTERS", "min", "max", "avg", "total", "count");
  Com_sprintf(&buffer[v17], 1024 - v17, v48, dest, v50, v51, v52, v53, v49);
  Com_Printf(131097, (const char *)&queryFormat, buffer);
  _RSI = &_R13->m_stats[1].counter.m_min;
  v19 = &s_statNames_1[1];
  for ( j = 1; j < 0xD; ++j )
  {
    v21 = j_va("%s_%s", name, *v19);
    Core_strcpy(dest, 0x20ui64, v21);
    __asm { vmovsd  xmm3, qword ptr [rsi-8] }
    _RDI = &v44;
    __asm
    {
      vmovups xmm1, xmmword ptr [rsi]
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2sd xmm0, xmm0, rax
      vdivsd  xmm2, xmm3, xmm0
      vmovsd  [rsp+690h+var_618], xmm2
      vmovsd  [rbp+590h+var_610], xmm3
      vmovups [rsp+690h+var_628], xmm1
    }
    for ( k = 0; k < 4; ++k )
    {
      __asm
      {
        vmovsd  xmm2, qword ptr [rdi]
        vmovq   r8, xmm2
      }
      Com_sprintf_truncate<65>((char (*)[65])&v50[65 * k], "%.1f", *(double *)&_XMM2);
      _RDI = (__int128 *)((char *)_RDI + 8);
    }
    Com_sprintf<65>((char (*)[65])v49, "%u", *((unsigned int *)_RSI + 4));
    LODWORD(percentileCounta) = 10;
    LODWORD(percentilesa) = 10;
    LODWORD(dataColWidth) = 10;
    LODWORD(headerColWidth) = 10;
    Com_sprintf<64>((char (*)[64])v48, "%%-%us%%-%us%%-%us%%-%us%%-%us%%-%us\n", 20i64, 10i64, headerColWidth, dataColWidth, percentilesa, percentileCounta);
    Com_sprintf(buffer, 0x400ui64, v48, dest, v50, v51, v52, v53, v49);
    Com_Printf(131097, (const char *)&queryFormat, buffer);
    ++v19;
    _RSI += 370;
  }
  Com_Printf(131097, "------------------\n");
  v30 = j_va("%s_%s", name, s_statNames_1[0]);
  Core_strcpy(dest, 0x20ui64, v30);
  DLogTDigest<20,8>::GetString<double>(&_R13->m_stats[0].digest, "PERCENTILE", dest, "%.1f", 20, 10, percentiles, percentileCount, buffer, 0x400ui64);
  Com_Printf(131097, (const char *)&queryFormat, buffer);
  v31 = 1;
  v32 = &s_statNames_1[1];
  do
  {
    v33 = j_va("%s_%s", name, *v32);
    Core_strcpy(dest, 0x20ui64, v33);
    DLogTDigest<20,8>::GetString<double>(&_R13->m_stats[v31].digest, NULL, dest, "%.1f", 20, 10, percentiles, percentileCount, buffer, 0x400ui64);
    Com_Printf(131097, (const char *)&queryFormat, buffer);
    ++v31;
    ++v32;
  }
  while ( v31 < 0xD );
}

/*
==============
NetTelemetry::Reset
==============
*/
void NetTelemetry::Reset(NetTelemetry *this)
{
  unsigned int v2; 
  long double *p_m_processedWeightTotal; 

  this->m_bandwidthTx.m_binCount = 60;
  this->m_bandwidthTx.m_binIndex = 0;
  memset_0(this->m_bandwidthTx.m_bins, 0, sizeof(this->m_bandwidthTx.m_bins));
  this->m_bandwidthRx.m_binCount = 60;
  this->m_bandwidthRx.m_binIndex = 0;
  memset_0(this->m_bandwidthRx.m_bins, 0, sizeof(this->m_bandwidthRx.m_bins));
  this->m_accumStart = 0;
  this->m_accums[0] = 0.0;
  this->m_accums[1] = 0.0;
  this->m_lastFrame.m_started = 1;
  this->m_lastFrame.m_ticks = __rdtsc();
  this->m_lastNetRecv.m_started = 1;
  this->m_lastNetRecv.m_ticks = __rdtsc();
  this->m_lastGameRecv.m_started = 1;
  this->m_lastGameRecv.m_ticks = __rdtsc();
  if ( this->m_recvTimer.m_started )
  {
    this->m_recvTimer.m_started = 0;
    this->m_recvTimer.m_ticks = __rdtsc() - this->m_recvTimer.m_ticks;
  }
  if ( this->m_sendTimer.m_started )
  {
    this->m_sendTimer.m_started = 0;
    this->m_sendTimer.m_ticks = __rdtsc() - this->m_sendTimer.m_ticks;
  }
  if ( this->m_pumpTimer.m_started )
  {
    this->m_pumpTimer.m_started = 0;
    this->m_pumpTimer.m_ticks = __rdtsc() - this->m_pumpTimer.m_ticks;
  }
  v2 = 0;
  p_m_processedWeightTotal = &this->m_stats[0].digest.m_processedWeightTotal;
  do
  {
    *(p_m_processedWeightTotal - 7) = 0.0;
    *(p_m_processedWeightTotal - 6) = 1.797693134862316e308;
    *(p_m_processedWeightTotal - 5) = 2.225073858507201e-308;
    *((_DWORD *)p_m_processedWeightTotal - 8) = 0;
    *(p_m_processedWeightTotal - 3) = 1.797693134862316e308;
    *(p_m_processedWeightTotal - 2) = 2.225073858507201e-308;
    *p_m_processedWeightTotal = 0.0;
    p_m_processedWeightTotal[1] = 0.0;
    p_m_processedWeightTotal[2] = 0.0;
    memset_0(p_m_processedWeightTotal + 3, 0, 0x140ui64);
    memset_0(p_m_processedWeightTotal + 43, 0, 0xA00ui64);
    ++v2;
    p_m_processedWeightTotal += 370;
  }
  while ( v2 < 0xD );
}

/*
==============
NetTelemetry::StartPump
==============
*/
void NetTelemetry::StartPump(NetTelemetry *this)
{
  unsigned __int64 v3; 
  signed __int64 v4; 

  if ( this->m_pumpTimer.m_started )
  {
    v3 = __rdtsc();
    this->m_pumpTimer.m_started = 0;
    v4 = (((unsigned __int64)HIDWORD(v3) << 32) | (unsigned int)v3) - this->m_pumpTimer.m_ticks;
    this->m_pumpTimer.m_ticks = v4;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2sd xmm0, xmm0, rax
    }
    if ( v4 < 0 )
      __asm { vaddsd  xmm0, xmm0, cs:__real@43f0000000000000 }
    __asm { vmulsd  xmm2, xmm0, cs:?msecPerRawTimerTick@@3NA; value }
    NetTelemetry::Track(this, STAT_MESSAGE_INTERVAL_TX, *(long double *)&_XMM2);
  }
  this->m_pumpTimer.m_started = 1;
  this->m_pumpTimer.m_ticks = __rdtsc();
}

/*
==============
NetTelemetry::StartRecv
==============
*/
void NetTelemetry::StartRecv(NetTelemetry *this, const int recvqSize)
{
  unsigned __int64 v4; 
  signed __int64 v5; 

  if ( this->m_recvTimer.m_started )
  {
    v4 = __rdtsc();
    this->m_recvTimer.m_started = 0;
    v5 = (((unsigned __int64)HIDWORD(v4) << 32) | (unsigned int)v4) - this->m_recvTimer.m_ticks;
    this->m_recvTimer.m_ticks = v5;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2sd xmm0, xmm0, rax
    }
    if ( v5 < 0 )
      __asm { vaddsd  xmm0, xmm0, cs:__real@43f0000000000000 }
    __asm { vmulsd  xmm2, xmm0, cs:?msecPerRawTimerTick@@3NA; value }
    NetTelemetry::Track(this, STAT_MESSAGE_SIZE_RX, *(long double *)&_XMM2);
  }
  this->m_recvTimer.m_started = 1;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, edi
    vmulss  xmm1, xmm0, cs:__real@3a800000
    vcvtss2sd xmm2, xmm1, xmm1; value
  }
  this->m_recvTimer.m_ticks = __rdtsc();
  NetTelemetry::Track(this, STAT_PACKET_INVALID, *(long double *)&_XMM2);
}

/*
==============
NetTelemetry::StartSend
==============
*/
void NetTelemetry::StartSend(NetTelemetry *this, const int sendqSize)
{
  unsigned __int64 v4; 
  signed __int64 v5; 

  if ( this->m_sendTimer.m_started )
  {
    v4 = __rdtsc();
    this->m_sendTimer.m_started = 0;
    v5 = (((unsigned __int64)HIDWORD(v4) << 32) | (unsigned int)v4) - this->m_sendTimer.m_ticks;
    this->m_sendTimer.m_ticks = v5;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2sd xmm0, xmm0, rax
    }
    if ( v5 < 0 )
      __asm { vaddsd  xmm0, xmm0, cs:__real@43f0000000000000 }
    __asm { vmulsd  xmm2, xmm0, cs:?msecPerRawTimerTick@@3NA; value }
    NetTelemetry::Track(this, STAT_MESSAGE_SIZE_TX, *(long double *)&_XMM2);
  }
  this->m_sendTimer.m_started = 1;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, edi
    vmulss  xmm1, xmm0, cs:__real@3a800000
    vcvtss2sd xmm2, xmm1, xmm1; value
  }
  this->m_sendTimer.m_ticks = __rdtsc();
  NetTelemetry::Track(this, STAT_PACKET_DUPLICATE, *(long double *)&_XMM2);
}

/*
==============
NetTelemetry::Track
==============
*/

void __fastcall NetTelemetry::Track(NetTelemetry *this, NetTelemetry::StatType stat, double value)
{
  int m_unprocessedCentroidBufferIndex; 

  _RDX = stat;
  __asm
  {
    vmovaps [rsp+38h+var_18], xmm6
    vmovaps xmm6, xmm2
    vaddsd  xmm0, xmm2, qword ptr [rdx+rcx]
  }
  ++this->m_stats[_RDX].counter.m_count;
  _RBX = &this->m_stats[_RDX].digest;
  __asm
  {
    vmovsd  qword ptr [rdx+rcx], xmm0
    vmovsd  xmm0, qword ptr [rdx+rcx+8]
    vminsd  xmm1, xmm0, xmm2
    vmovsd  xmm0, qword ptr [rdx+rcx+10h]
    vmovsd  qword ptr [rdx+rcx+8], xmm1
    vmaxsd  xmm1, xmm0, xmm2
    vmovsd  qword ptr [rdx+rcx+10h], xmm1
  }
  m_unprocessedCentroidBufferIndex = this->m_stats[_RDX].digest.m_unprocessedCentroidBufferIndex;
  if ( (unsigned int)m_unprocessedCentroidBufferIndex < 0x8C )
    goto LABEL_4;
  if ( !this->m_stats[_RDX].digest.m_disableAutoMerge )
  {
    DLogTDigest<20,8>::ProcessBufferedCentroids(&this->m_stats[_RDX].digest);
    m_unprocessedCentroidBufferIndex = _RBX->m_unprocessedCentroidBufferIndex;
LABEL_4:
    __asm
    {
      vminsd  xmm0, xmm6, qword ptr [rbx]
      vmovsd  qword ptr [rbx], xmm0
      vmovsd  xmm1, qword ptr [rbx+8]
      vmaxsd  xmm0, xmm1, xmm6
      vmovsd  qword ptr [rbx+8], xmm0
    }
    _RAX = 2 * (m_unprocessedCentroidBufferIndex + 23i64);
    __asm { vmovsd  qword ptr [rbx+rax*8], xmm6 }
    *((_QWORD *)&_RBX->m_max + _RAX) = 0x3FF0000000000000i64;
    __asm
    {
      vmovsd  xmm0, qword ptr [rbx+20h]
      vaddsd  xmm1, xmm0, cs:__real@3ff0000000000000
    }
    ++_RBX->m_unprocessedCentroidBufferIndex;
    __asm
    {
      vmovsd  qword ptr [rbx+20h], xmm1
      vmovaps xmm6, [rsp+38h+var_18]
    }
    return;
  }
  __asm { vmovaps xmm6, [rsp+38h+var_18] }
  DLog_PrintError("Auto merge disabled - centroid buffer overflow\n");
}

