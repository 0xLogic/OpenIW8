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
  double LastReceived; 
  signed __int64 m_ticks; 
  __int128 v10; 
  __int128 v12; 
  signed __int64 v14; 
  __int128 v17; 
  __int128 v19; 
  bool v21; 
  unsigned int v22; 
  const char **v23; 
  unsigned __int64 v24; 
  __int64 v26; 
  __int64 v27; 
  unsigned __int8 outBuffer[1024]; 

  if ( !DLog_BeginRow(context, name) )
    goto LABEL_14;
  SocketRouter = dwGetSocketRouter();
  LastReceived = bdSocketRouter::getLastReceived(SocketRouter);
  if ( !DLog_Float32(context, "last_sock_recv", *(float *)&LastReceived) )
    goto LABEL_14;
  m_ticks = this->m_lastNetRecv.m_ticks;
  if ( this->m_lastNetRecv.m_started )
    m_ticks = __rdtsc() - m_ticks;
  _XMM0 = 0i64;
  __asm { vcvtsi2sd xmm0, xmm0, rcx }
  if ( m_ticks < 0 )
  {
    *((_QWORD *)&v10 + 1) = *((_QWORD *)&_XMM0 + 1);
    *(double *)&v10 = *(double *)&_XMM0 + 1.844674407370955e19;
    _XMM0 = v10;
  }
  *((_QWORD *)&v12 + 1) = *((_QWORD *)&_XMM0 + 1);
  *(double *)&v12 = *(double *)&_XMM0 * msecPerRawTimerTick;
  _XMM0 = v12;
  __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
  if ( !DLog_Float32(context, "last_net_recv", *(float *)&_XMM1 * 0.001) )
    goto LABEL_14;
  v14 = this->m_lastGameRecv.m_ticks;
  if ( this->m_lastGameRecv.m_started )
    v14 = __rdtsc() - v14;
  _XMM0 = 0i64;
  __asm { vcvtsi2sd xmm0, xmm0, rcx }
  if ( v14 < 0 )
  {
    *((_QWORD *)&v17 + 1) = *((_QWORD *)&_XMM0 + 1);
    *(double *)&v17 = *(double *)&_XMM0 + 1.844674407370955e19;
    _XMM0 = v17;
  }
  *((_QWORD *)&v19 + 1) = *((_QWORD *)&_XMM0 + 1);
  *(double *)&v19 = *(double *)&_XMM0 * msecPerRawTimerTick;
  _XMM0 = v19;
  __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
  if ( DLog_Float32(context, "last_game_recv", *(float *)&_XMM1 * 0.001) )
    v21 = 1;
  else
LABEL_14:
    v21 = 0;
  v22 = 0;
  v23 = s_statNames_1;
  do
  {
    DLogTDigest<20,8>::ProcessBufferedCentroids(&this->m_stats[v22].digest);
    v24 = DLogTDigest<20,8>::SerializeToProtobuf(&this->m_stats[v22].digest, outBuffer, 0x400ui64);
    if ( v24 > 0x400 )
    {
      LODWORD(v27) = 1024;
      LODWORD(v26) = v24;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_telemetry.cpp", 181, ASSERT_TYPE_ASSERT, "( digestSize ) <= ( sizeof( digestBuffer ) )", "%s <= %s\n\t%i, %i", "digestSize", "sizeof( digestBuffer )", v26, v27) )
        __debugbreak();
    }
    v21 = v21 && DLog_UInt8Array(context, *v23, outBuffer, v24);
    ++v22;
    ++v23;
  }
  while ( v22 < 0xD );
  return v21 && DLog_EndRow(context);
}

/*
==============
NetTelemetry::EndPump
==============
*/
void NetTelemetry::EndPump(NetTelemetry *this)
{
  _XMM0 = 0i64;
  __asm { vcvtsi2sd xmm0, xmm0, rax }
  if ( (Stopwatch::Restart(&this->m_pumpTimer) & 0x8000000000000000ui64) != 0i64 )
    *(double *)&_XMM0 = *(double *)&_XMM0 + 1.844674407370955e19;
  NetTelemetry::Track(this, STAT_PACKET_OOO, *(double *)&_XMM0 * msecPerRawTimerTick);
}

/*
==============
NetTelemetry::EndRecv
==============
*/
void NetTelemetry::EndRecv(NetTelemetry *this, const int recvSize, const int packetCount)
{
  _XMM0 = 0i64;
  __asm { vcvtsi2sd xmm0, xmm0, rax }
  if ( (Stopwatch::Restart(&this->m_recvTimer) & 0x8000000000000000ui64) != 0i64 )
    *(double *)&_XMM0 = *(double *)&_XMM0 + 1.844674407370955e19;
  NetTelemetry::Track(this, STAT_PACKET_LOSS, *(double *)&_XMM0 * msecPerRawTimerTick);
  _XMM0 = 0i64;
  __asm { vcvtsi2sd xmm0, xmm0, edi }
  this->m_accums[1] = *(double *)&_XMM0 + this->m_accums[1];
  this->m_bandwidthRx.m_bins[this->m_bandwidthRx.m_binIndex].value += recvSize;
}

/*
==============
NetTelemetry::EndSend
==============
*/
void NetTelemetry::EndSend(NetTelemetry *this, const int sendSize, const int packetCount)
{
  _XMM0 = 0i64;
  __asm { vcvtsi2sd xmm0, xmm0, rax }
  if ( (Stopwatch::Restart(&this->m_sendTimer) & 0x8000000000000000ui64) != 0i64 )
    *(double *)&_XMM0 = *(double *)&_XMM0 + 1.844674407370955e19;
  NetTelemetry::Track(this, STAT_MESSAGE_INTERVAL_RX, *(double *)&_XMM0 * msecPerRawTimerTick);
  _XMM0 = 0i64;
  __asm { vcvtsi2sd xmm0, xmm0, edi }
  this->m_accums[0] = *(double *)&_XMM0 + this->m_accums[0];
  this->m_bandwidthTx.m_bins[this->m_bandwidthTx.m_binIndex].value += sendSize;
}

/*
==============
NetTelemetry::Frame
==============
*/
void NetTelemetry::Frame(NetTelemetry *this)
{
  int v2; 
  float TotalUsage; 
  float v6; 
  int v7; 
  int v8; 

  v2 = Sys_Milliseconds();
  _XMM0 = 0i64;
  __asm { vcvtsi2sd xmm0, xmm0, rax }
  if ( (Stopwatch::Restart(&this->m_lastFrame) & 0x8000000000000000ui64) != 0i64 )
    *(double *)&_XMM0 = *(double *)&_XMM0 + 1.844674407370955e19;
  NetTelemetry::Track(this, STAT_MESSAGE_LOSS, *(double *)&_XMM0 * msecPerRawTimerTick);
  TotalUsage = (float)BandwidthCounter<60>::GetTotalUsage(&this->m_bandwidthTx);
  NetTelemetry::Track(this, STAT_PACKET_INTERVAL_TX, (float)(TotalUsage * 0.00000095367432));
  v6 = (float)BandwidthCounter<60>::GetTotalUsage(&this->m_bandwidthRx);
  NetTelemetry::Track(this, STAT_PACKET_INTERVAL_RX, (float)(v6 * 0.00000095367432));
  if ( v2 - this->m_accumStart >= 1000 )
  {
    NetTelemetry::Track(this, STAT_COUNT, this->m_accums[0]);
    NetTelemetry::Track(this, STAT_PACKET_INVALID|STAT_MESSAGE_INTERVAL_RX, this->m_accums[1]);
    this->m_accums[0] = 0.0;
    this->m_accums[1] = 0.0;
    this->m_accumStart = v2;
  }
  v7 = (this->m_bandwidthTx.m_binIndex + 1) % this->m_bandwidthTx.m_binCount;
  this->m_bandwidthTx.m_bins[v7].timestamp = v2;
  this->m_bandwidthTx.m_bins[v7].value = 0;
  this->m_bandwidthTx.m_binIndex = v7;
  v8 = (this->m_bandwidthRx.m_binIndex + 1) % this->m_bandwidthRx.m_binCount;
  this->m_bandwidthRx.m_bins[v8].timestamp = v2;
  this->m_bandwidthRx.m_bins[v8].value = 0;
  this->m_bandwidthRx.m_binIndex = v8;
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
  const char *v6; 
  double m_sum; 
  double *v8; 
  __int128 v9; 
  unsigned int i; 
  int v13; 
  long double *p_m_min; 
  const char **v15; 
  unsigned int j; 
  const char *v17; 
  double v18; 
  double *v19; 
  __int128 v20; 
  unsigned int k; 
  const char *v24; 
  unsigned int v25; 
  const char **v26; 
  const char *v27; 
  int headerColWidtha; 
  __int64 headerColWidth; 
  int dataColWidtha; 
  __int64 dataColWidth; 
  int percentilesb; 
  unsigned int *percentilesa; 
  int percentileCountb; 
  __int64 percentileCounta; 
  __int128 v38; 
  double v39; 
  double v40; 
  char dest[40]; 
  char v42[64]; 
  char v43[65]; 
  char v44[65]; 
  char v45[65]; 
  char v46[65]; 
  char v47[77]; 
  char buffer[1024]; 

  v6 = j_va("%s_%s", name, s_statNames_1[0]);
  Core_strcpy(dest, 0x20ui64, v6);
  m_sum = this->m_stats[0].counter.m_sum;
  v8 = (double *)&v38;
  v9 = *(_OWORD *)&this->m_stats[0].counter.m_min;
  _XMM0 = 0i64;
  __asm { vcvtsi2sd xmm0, xmm0, rax }
  v39 = this->m_stats[0].counter.m_sum / *(double *)&_XMM0;
  v40 = m_sum;
  v38 = v9;
  for ( i = 0; i < 4; ++i )
    Com_sprintf_truncate<65>((char (*)[65])&v44[65 * i], "%.1f", *v8++);
  Com_sprintf<65>((char (*)[65])v43, "%u", this->m_stats[0].counter.m_count);
  percentileCountb = 10;
  percentilesb = 10;
  dataColWidtha = 10;
  headerColWidtha = 10;
  Com_sprintf<64>((char (*)[64])v42, "%%-%us%%-%us%%-%us%%-%us%%-%us%%-%us\n", 20i64, 10i64, headerColWidtha, dataColWidtha, percentilesb, percentileCountb);
  v13 = Com_sprintf(buffer, 0x400ui64, v42, "COUNTERS", "min", "max", "avg", "total", "count");
  Com_sprintf(&buffer[v13], 1024 - v13, v42, dest, v44, v45, v46, v47, v43);
  Com_Printf(131097, (const char *)&queryFormat, buffer);
  p_m_min = &this->m_stats[1].counter.m_min;
  v15 = &s_statNames_1[1];
  for ( j = 1; j < 0xD; ++j )
  {
    v17 = j_va("%s_%s", name, *v15);
    Core_strcpy(dest, 0x20ui64, v17);
    v18 = *(p_m_min - 1);
    v19 = (double *)&v38;
    v20 = *(_OWORD *)p_m_min;
    _XMM0 = 0i64;
    __asm { vcvtsi2sd xmm0, xmm0, rax }
    v39 = v18 / *(double *)&_XMM0;
    v40 = v18;
    v38 = v20;
    for ( k = 0; k < 4; ++k )
      Com_sprintf_truncate<65>((char (*)[65])&v44[65 * k], "%.1f", *v19++);
    Com_sprintf<65>((char (*)[65])v43, "%u", *((unsigned int *)p_m_min + 4));
    LODWORD(percentileCounta) = 10;
    LODWORD(percentilesa) = 10;
    LODWORD(dataColWidth) = 10;
    LODWORD(headerColWidth) = 10;
    Com_sprintf<64>((char (*)[64])v42, "%%-%us%%-%us%%-%us%%-%us%%-%us%%-%us\n", 20i64, 10i64, headerColWidth, dataColWidth, percentilesa, percentileCounta);
    Com_sprintf(buffer, 0x400ui64, v42, dest, v44, v45, v46, v47, v43);
    Com_Printf(131097, (const char *)&queryFormat, buffer);
    ++v15;
    p_m_min += 370;
  }
  Com_Printf(131097, "------------------\n");
  v24 = j_va("%s_%s", name, s_statNames_1[0]);
  Core_strcpy(dest, 0x20ui64, v24);
  DLogTDigest<20,8>::GetString<double>(&this->m_stats[0].digest, "PERCENTILE", dest, "%.1f", 20, 10, percentiles, percentileCount, buffer, 0x400ui64);
  Com_Printf(131097, (const char *)&queryFormat, buffer);
  v25 = 1;
  v26 = &s_statNames_1[1];
  do
  {
    v27 = j_va("%s_%s", name, *v26);
    Core_strcpy(dest, 0x20ui64, v27);
    DLogTDigest<20,8>::GetString<double>(&this->m_stats[v25].digest, NULL, dest, "%.1f", 20, 10, percentiles, percentileCount, buffer, 0x400ui64);
    Com_Printf(131097, (const char *)&queryFormat, buffer);
    ++v25;
    ++v26;
  }
  while ( v25 < 0xD );
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
  unsigned __int64 v2; 
  signed __int64 v3; 

  if ( this->m_pumpTimer.m_started )
  {
    v2 = __rdtsc();
    this->m_pumpTimer.m_started = 0;
    v3 = (((unsigned __int64)HIDWORD(v2) << 32) | (unsigned int)v2) - this->m_pumpTimer.m_ticks;
    this->m_pumpTimer.m_ticks = v3;
    _XMM0 = 0i64;
    __asm { vcvtsi2sd xmm0, xmm0, rax }
    if ( v3 < 0 )
      *(double *)&_XMM0 = *(double *)&_XMM0 + 1.844674407370955e19;
    NetTelemetry::Track(this, STAT_MESSAGE_INTERVAL_TX, *(double *)&_XMM0 * msecPerRawTimerTick);
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
    _XMM0 = 0i64;
    __asm { vcvtsi2sd xmm0, xmm0, rax }
    if ( v5 < 0 )
      *(double *)&_XMM0 = *(double *)&_XMM0 + 1.844674407370955e19;
    NetTelemetry::Track(this, STAT_MESSAGE_SIZE_RX, *(double *)&_XMM0 * msecPerRawTimerTick);
  }
  this->m_recvTimer.m_started = 1;
  this->m_recvTimer.m_ticks = __rdtsc();
  NetTelemetry::Track(this, STAT_PACKET_INVALID, (float)((float)recvqSize * 0.0009765625));
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
    _XMM0 = 0i64;
    __asm { vcvtsi2sd xmm0, xmm0, rax }
    if ( v5 < 0 )
      *(double *)&_XMM0 = *(double *)&_XMM0 + 1.844674407370955e19;
    NetTelemetry::Track(this, STAT_MESSAGE_SIZE_TX, *(double *)&_XMM0 * msecPerRawTimerTick);
  }
  this->m_sendTimer.m_started = 1;
  this->m_sendTimer.m_ticks = __rdtsc();
  NetTelemetry::Track(this, STAT_PACKET_DUPLICATE, (float)((float)sendqSize * 0.0009765625));
}

/*
==============
NetTelemetry::Track
==============
*/

void __fastcall NetTelemetry::Track(NetTelemetry *this, NetTelemetry::StatType stat, double value)
{
  __int64 v3; 
  long double v5; 
  DLogTDigest<20,8> *p_digest; 
  int m_unprocessedCentroidBufferIndex; 
  __int64 v15; 

  v3 = stat;
  _XMM6 = *(_OWORD *)&value;
  v5 = value + this->m_stats[v3].counter.m_sum;
  ++this->m_stats[v3].counter.m_count;
  p_digest = &this->m_stats[v3].digest;
  this->m_stats[v3].counter.m_sum = v5;
  _XMM0 = *(unsigned __int64 *)&this->m_stats[v3].counter.m_min;
  __asm { vminsd  xmm1, xmm0, xmm2 }
  _XMM0 = *(unsigned __int64 *)&this->m_stats[v3].counter.m_max;
  this->m_stats[v3].counter.m_min = *(double *)&_XMM1;
  __asm { vmaxsd  xmm1, xmm0, xmm2 }
  this->m_stats[v3].counter.m_max = *(double *)&_XMM1;
  m_unprocessedCentroidBufferIndex = this->m_stats[v3].digest.m_unprocessedCentroidBufferIndex;
  if ( (unsigned int)m_unprocessedCentroidBufferIndex < 0x8C )
    goto LABEL_4;
  if ( !this->m_stats[v3].digest.m_disableAutoMerge )
  {
    DLogTDigest<20,8>::ProcessBufferedCentroids(&this->m_stats[v3].digest);
    m_unprocessedCentroidBufferIndex = p_digest->m_unprocessedCentroidBufferIndex;
LABEL_4:
    __asm { vminsd  xmm0, xmm6, qword ptr [rbx] }
    p_digest->m_min = *(double *)&_XMM0;
    _XMM1 = *(unsigned __int64 *)&p_digest->m_max;
    __asm { vmaxsd  xmm0, xmm1, xmm6 }
    p_digest->m_max = *(double *)&_XMM0;
    v15 = 2 * (m_unprocessedCentroidBufferIndex + 23i64);
    *((double *)&p_digest->m_min + v15) = value;
    *((_QWORD *)&p_digest->m_max + v15) = 0x3FF0000000000000i64;
    *(long double *)&_XMM0 = p_digest->m_unprocessedWeightTotal;
    ++p_digest->m_unprocessedCentroidBufferIndex;
    p_digest->m_unprocessedWeightTotal = *(double *)&_XMM0 + 1.0;
    return;
  }
  DLog_PrintError("Auto merge disabled - centroid buffer overflow\n");
}

