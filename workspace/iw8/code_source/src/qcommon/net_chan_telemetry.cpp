/*
==============
NetchanTelemetry::TrackMessageRx
==============
*/

void __fastcall NetchanTelemetry::TrackMessageRx(NetchanTelemetry *this, int size, int dropCount, bool fragmented)
{
  ?TrackMessageRx@NetchanTelemetry@@QEAAXHH_N@Z(this, size, dropCount, fragmented);
}

/*
==============
NetchanTelemetry::TrackPacketRx
==============
*/

void __fastcall NetchanTelemetry::TrackPacketRx(NetchanTelemetry *this, int size, int dropCount, int oooCount)
{
  ?TrackPacketRx@NetchanTelemetry@@QEAAXHHH@Z(this, size, dropCount, oooCount);
}

/*
==============
NetchanTelemetry::Accumulate
==============
*/

void __fastcall NetchanTelemetry::Accumulate(NetchanTelemetry *this, NetchanTelemetry::AccumType accum, int value)
{
  ?Accumulate@NetchanTelemetry@@QEAAXW4AccumType@1@H@Z(this, accum, value);
}

/*
==============
NetchanTelemetry::Dlog
==============
*/

bool __fastcall NetchanTelemetry::Dlog(NetchanTelemetry *this, DLogContext *context, const char *name)
{
  return ?Dlog@NetchanTelemetry@@QEAA_NPEAUDLogContext@@PEBD@Z(this, context, name);
}

/*
==============
NetchanTelemetry::Print
==============
*/

void __fastcall NetchanTelemetry::Print(NetchanTelemetry *this, unsigned int *percentiles, const int percentileCount, const char *name)
{
  ?Print@NetchanTelemetry@@QEAAXPEAIHPEBD@Z(this, percentiles, percentileCount, name);
}

/*
==============
NetchanTelemetry::TrackMessageTx
==============
*/

void __fastcall NetchanTelemetry::TrackMessageTx(NetchanTelemetry *this, int size)
{
  ?TrackMessageTx@NetchanTelemetry@@QEAAXH@Z(this, size);
}

/*
==============
NetchanTelemetry::Init
==============
*/

void __fastcall NetchanTelemetry::Init(NetchanTelemetry *this)
{
  ?Init@NetchanTelemetry@@QEAAXXZ(this);
}

/*
==============
NetchanTelemetry::Frame
==============
*/

void __fastcall NetchanTelemetry::Frame(NetchanTelemetry *this)
{
  ?Frame@NetchanTelemetry@@QEAAXXZ(this);
}

/*
==============
NetchanTelemetry::Track
==============
*/

void __fastcall NetchanTelemetry::Track(NetchanTelemetry *this, NetchanTelemetry::StatType stat, long double value)
{
  ?Track@NetchanTelemetry@@AEAAXW4StatType@1@N@Z(this, stat, value);
}

/*
==============
NetchanTelemetry::TrackPacketTx
==============
*/

void __fastcall NetchanTelemetry::TrackPacketTx(NetchanTelemetry *this, int size, bool success)
{
  ?TrackPacketTx@NetchanTelemetry@@QEAAXH_N@Z(this, size, success);
}

/*
==============
NetchanTelemetry::GetStat
==============
*/

long double __fastcall NetchanTelemetry::GetStat(NetchanTelemetry *this, NetchanTelemetry::StatType stat)
{
  return ?GetStat@NetchanTelemetry@@QEBANW4StatType@1@@Z(this, stat);
}

/*
==============
NetchanTelemetry::Accumulate
==============
*/
void NetchanTelemetry::Accumulate(NetchanTelemetry *this, NetchanTelemetry::AccumType accum, int value)
{
  __int64 v3; 
  int v7; 

  v3 = accum;
  if ( (unsigned int)accum >= ACCUM_COUNT )
  {
    v7 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_chan_telemetry.cpp", 189, ASSERT_TYPE_ASSERT, "(unsigned)( accum ) < (unsigned)( ACCUM_COUNT )", "accum doesn't index ACCUM_COUNT\n\t%i not in [0, %i)", accum, v7) )
      __debugbreak();
  }
  this->m_frameAccums[v3] += value;
  this->m_totalAccums[v3] += value;
}

/*
==============
NetchanTelemetry::Dlog
==============
*/
bool NetchanTelemetry::Dlog(NetchanTelemetry *this, DLogContext *context, const char *name)
{
  unsigned int v5; 
  const char **v6; 
  unsigned int v7; 
  unsigned int *m_totalAccums; 
  bool v9; 
  const char **v10; 
  unsigned __int64 v11; 
  __int64 v13; 
  __int64 v14; 
  unsigned __int8 outBuffer[1024]; 

  v5 = 0;
  v6 = s_accumNames;
  v7 = 0;
  m_totalAccums = this->m_totalAccums;
  v9 = DLog_BeginRow(context, name);
  do
  {
    v9 = v9 && DLog_UInt32(context, *v6, *m_totalAccums);
    ++v7;
    ++m_totalAccums;
    ++v6;
  }
  while ( v7 < 8 );
  v10 = s_statNames_0;
  do
  {
    DLogTDigest<20,8>::ProcessBufferedCentroids(&this->m_stats[v5].digest);
    v11 = DLogTDigest<20,8>::SerializeToProtobuf(&this->m_stats[v5].digest, outBuffer, 0x400ui64);
    if ( v11 > 0x400 )
    {
      LODWORD(v14) = 1024;
      LODWORD(v13) = v11;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_chan_telemetry.cpp", 115, ASSERT_TYPE_ASSERT, "( digestSize ) <= ( sizeof( digestBuffer ) )", "%s <= %s\n\t%i, %i", "digestSize", "sizeof( digestBuffer )", v13, v14) )
        __debugbreak();
    }
    v9 = v9 && DLog_UInt8Array(context, *v10, outBuffer, v11);
    ++v5;
    ++v10;
  }
  while ( v5 < 0xB );
  return v9 && DLog_EndRow(context);
}

/*
==============
NetchanTelemetry::Frame
==============
*/
void NetchanTelemetry::Frame(NetchanTelemetry *this)
{
  int v3; 

  v3 = Sys_Milliseconds();
  if ( v3 > this->m_lastAccumFrame + 1000 )
  {
    _XMM1 = 0i64;
    __asm
    {
      vcvtsi2sd xmm1, xmm1, rdx
      vxorpd  xmm6, xmm6, xmm6
    }
    _XMM7 = 0i64;
    __asm { vcvtsi2sd xmm7, xmm7, rdx }
    if ( *(double *)&_XMM1 > *(double *)&_XMM6 )
    {
      _XMM0 = 0i64;
      __asm { vcvtsi2sd xmm0, xmm0, rax }
      NetchanTelemetry::Track(this, STAT_MESSAGE_LOSS, *(double *)&_XMM0 / *(double *)&_XMM1);
    }
    if ( *(double *)&_XMM7 > *(double *)&_XMM6 )
    {
      _XMM1 = 0i64;
      __asm { vcvtsi2sd xmm1, xmm1, rax }
      NetchanTelemetry::Track(this, STAT_PACKET_LOSS, *(double *)&_XMM1 * (1.0 / *(double *)&_XMM7));
      _XMM0 = 0i64;
      __asm { vcvtsi2sd xmm0, xmm0, rax }
      NetchanTelemetry::Track(this, STAT_PACKET_OOO, *(double *)&_XMM0 * (1.0 / *(double *)&_XMM7));
      _XMM0 = 0i64;
      __asm { vcvtsi2sd xmm0, xmm0, rax }
      NetchanTelemetry::Track(this, STAT_PACKET_DUPLICATE, *(double *)&_XMM0 * (1.0 / *(double *)&_XMM7));
      _XMM0 = 0i64;
      __asm { vcvtsi2sd xmm0, xmm0, rax }
      NetchanTelemetry::Track(this, STAT_PACKET_INVALID, *(double *)&_XMM0 * (1.0 / *(double *)&_XMM7));
      _XMM1 = COERCE_UNSIGNED_INT64(this->m_currStats[5] * 100.0);
      __asm { vcvttsd2si edx, xmm1 }
      if ( _EDX > 100 )
        _EDX = 100;
      if ( _EDX < 0 )
        _EDX = 0;
      NetStats_LogStat(NETSTATS_PACKETLOSS, _EDX);
    }
    *(_QWORD *)this->m_frameAccums = 0i64;
    *(_QWORD *)&this->m_frameAccums[2] = 0i64;
    *(_QWORD *)&this->m_frameAccums[4] = 0i64;
    *(_QWORD *)&this->m_frameAccums[6] = 0i64;
    this->m_lastAccumFrame = v3;
  }
}

/*
==============
NetchanTelemetry::GetStat
==============
*/
long double NetchanTelemetry::GetStat(NetchanTelemetry *this, NetchanTelemetry::StatType stat)
{
  __int64 v2; 
  int v6; 

  v2 = stat;
  if ( (unsigned int)stat < STAT_COUNT )
    return this->m_currStats[stat];
  v6 = 11;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_chan_telemetry.cpp", 182, ASSERT_TYPE_ASSERT, "(unsigned)( stat ) < (unsigned)( STAT_COUNT )", "stat doesn't index STAT_COUNT\n\t%i not in [0, %i)", stat, v6) )
    __debugbreak();
  return this->m_currStats[v2];
}

/*
==============
NetchanTelemetry::Init
==============
*/
void NetchanTelemetry::Init(NetchanTelemetry *this)
{
  unsigned int v2; 
  long double *p_m_max; 

  this->m_lastAccumFrame = Sys_Milliseconds();
  v2 = 0;
  p_m_max = &this->m_stats[1].counter.m_max;
  do
  {
    *(p_m_max - 372) = 0.0;
    *(p_m_max - 371) = 1.797693134862316e308;
    *(p_m_max - 370) = 2.225073858507201e-308;
    *((_DWORD *)p_m_max - 738) = 0;
    *(p_m_max - 368) = 1.797693134862316e308;
    *(p_m_max - 367) = 2.225073858507201e-308;
    *(p_m_max - 365) = 0.0;
    *(p_m_max - 364) = 0.0;
    *(p_m_max - 363) = 0.0;
    memset_0(p_m_max - 362, 0, 0x140ui64);
    memset_0(p_m_max - 322, 0, 0xA00ui64);
    *(p_m_max - 2) = 0.0;
    *(p_m_max - 1) = 1.797693134862316e308;
    *p_m_max = 2.225073858507201e-308;
    *((_DWORD *)p_m_max + 2) = 0;
    p_m_max[2] = 1.797693134862316e308;
    p_m_max[3] = 2.225073858507201e-308;
    p_m_max[5] = 0.0;
    p_m_max[6] = 0.0;
    p_m_max[7] = 0.0;
    memset_0(p_m_max + 8, 0, 0x140ui64);
    memset_0(p_m_max + 48, 0, 0xA00ui64);
    p_m_max[368] = 0.0;
    p_m_max[369] = 1.797693134862316e308;
    p_m_max[370] = 2.225073858507201e-308;
    *((_DWORD *)p_m_max + 742) = 0;
    p_m_max[372] = 1.797693134862316e308;
    p_m_max[373] = 2.225073858507201e-308;
    p_m_max[375] = 0.0;
    p_m_max[376] = 0.0;
    p_m_max[377] = 0.0;
    memset_0(p_m_max + 378, 0, 0x140ui64);
    memset_0(p_m_max + 418, 0, 0xA00ui64);
    p_m_max[738] = 0.0;
    p_m_max[739] = 1.797693134862316e308;
    p_m_max[740] = 2.225073858507201e-308;
    *((_DWORD *)p_m_max + 1482) = 0;
    p_m_max[742] = 1.797693134862316e308;
    p_m_max[743] = 2.225073858507201e-308;
    p_m_max[745] = 0.0;
    p_m_max[746] = 0.0;
    p_m_max[747] = 0.0;
    memset_0(p_m_max + 748, 0, 0x140ui64);
    memset_0(p_m_max + 788, 0, 0xA00ui64);
    p_m_max[1108] = 0.0;
    p_m_max[1109] = 1.797693134862316e308;
    p_m_max[1110] = 2.225073858507201e-308;
    *((_DWORD *)p_m_max + 2222) = 0;
    p_m_max[1112] = 1.797693134862316e308;
    p_m_max[1113] = 2.225073858507201e-308;
    p_m_max[1115] = 0.0;
    p_m_max[1116] = 0.0;
    p_m_max[1117] = 0.0;
    memset_0(p_m_max + 1118, 0, 0x140ui64);
    memset_0(p_m_max + 1158, 0, 0xA00ui64);
    p_m_max[1478] = 0.0;
    p_m_max[1479] = 1.797693134862316e308;
    p_m_max[1480] = 2.225073858507201e-308;
    *((_DWORD *)p_m_max + 2962) = 0;
    p_m_max[1482] = 1.797693134862316e308;
    p_m_max[1483] = 2.225073858507201e-308;
    p_m_max[1485] = 0.0;
    p_m_max[1486] = 0.0;
    p_m_max[1487] = 0.0;
    memset_0(p_m_max + 1488, 0, 0x140ui64);
    memset_0(p_m_max + 1528, 0, 0xA00ui64);
    p_m_max[1848] = 0.0;
    p_m_max[1849] = 1.797693134862316e308;
    p_m_max[1850] = 2.225073858507201e-308;
    *((_DWORD *)p_m_max + 3702) = 0;
    p_m_max[1852] = 1.797693134862316e308;
    p_m_max[1853] = 2.225073858507201e-308;
    p_m_max[1855] = 0.0;
    p_m_max[1856] = 0.0;
    p_m_max[1857] = 0.0;
    memset_0(p_m_max + 1858, 0, 0x140ui64);
    memset_0(p_m_max + 1898, 0, 0xA00ui64);
    p_m_max[2218] = 0.0;
    p_m_max[2219] = 1.797693134862316e308;
    p_m_max[2220] = 2.225073858507201e-308;
    *((_DWORD *)p_m_max + 4442) = 0;
    p_m_max[2222] = 1.797693134862316e308;
    p_m_max[2223] = 2.225073858507201e-308;
    p_m_max[2225] = 0.0;
    p_m_max[2226] = 0.0;
    p_m_max[2227] = 0.0;
    memset_0(p_m_max + 2228, 0, 0x140ui64);
    memset_0(p_m_max + 2268, 0, 0xA00ui64);
    p_m_max[2588] = 0.0;
    p_m_max[2589] = 1.797693134862316e308;
    p_m_max[2590] = 2.225073858507201e-308;
    *((_DWORD *)p_m_max + 5182) = 0;
    p_m_max[2592] = 1.797693134862316e308;
    p_m_max[2593] = 2.225073858507201e-308;
    p_m_max[2595] = 0.0;
    p_m_max[2596] = 0.0;
    p_m_max[2597] = 0.0;
    memset_0(p_m_max + 2598, 0, 0x140ui64);
    memset_0(p_m_max + 2638, 0, 0xA00ui64);
    p_m_max[2958] = 0.0;
    p_m_max[2959] = 1.797693134862316e308;
    p_m_max[2960] = 2.225073858507201e-308;
    *((_DWORD *)p_m_max + 5922) = 0;
    p_m_max[2962] = 1.797693134862316e308;
    p_m_max[2963] = 2.225073858507201e-308;
    p_m_max[2965] = 0.0;
    p_m_max[2966] = 0.0;
    p_m_max[2967] = 0.0;
    memset_0(p_m_max + 2968, 0, 0x140ui64);
    memset_0(p_m_max + 3008, 0, 0xA00ui64);
    p_m_max[3328] = 0.0;
    p_m_max[3329] = 1.797693134862316e308;
    p_m_max[3330] = 2.225073858507201e-308;
    *((_DWORD *)p_m_max + 6662) = 0;
    p_m_max[3332] = 1.797693134862316e308;
    p_m_max[3333] = 2.225073858507201e-308;
    p_m_max[3335] = 0.0;
    p_m_max[3336] = 0.0;
    p_m_max[3337] = 0.0;
    memset_0(p_m_max + 3338, 0, 0x140ui64);
    memset_0(p_m_max + 3378, 0, 0xA00ui64);
    v2 += 11;
    p_m_max += 4070;
  }
  while ( v2 < 0xB );
  *(_QWORD *)this->m_frameAccums = 0i64;
  *(_QWORD *)&this->m_frameAccums[2] = 0i64;
  *(_QWORD *)&this->m_frameAccums[4] = 0i64;
  *(_QWORD *)&this->m_frameAccums[6] = 0i64;
  *(_QWORD *)this->m_totalAccums = 0i64;
  *(_QWORD *)&this->m_totalAccums[2] = 0i64;
  *(_QWORD *)&this->m_totalAccums[4] = 0i64;
  *(_QWORD *)&this->m_totalAccums[6] = 0i64;
  this->m_lastPacketTx.m_started = 1;
  this->m_lastPacketTx.m_ticks = __rdtsc();
  this->m_lastPacketRx.m_started = 1;
  this->m_lastPacketRx.m_ticks = __rdtsc();
  this->m_lastMessageTx.m_started = 1;
  this->m_lastMessageTx.m_ticks = __rdtsc();
  this->m_lastMessageRx.m_started = 1;
  this->m_lastMessageRx.m_ticks = __rdtsc();
}

/*
==============
NetchanTelemetry::Print
==============
*/
void NetchanTelemetry::Print(NetchanTelemetry *this, unsigned int *percentiles, const int percentileCount, const char *name)
{
  unsigned int v6; 
  const char **v7; 
  unsigned int *m_totalAccums; 
  const char *v9; 
  double m_sum; 
  double *v11; 
  __int128 v12; 
  unsigned int i; 
  int v16; 
  const char **v17; 
  const char **v18; 
  unsigned int v19; 
  unsigned int *p_m_count; 
  const char *v21; 
  double v22; 
  double *v23; 
  __int128 v24; 
  unsigned int j; 
  const char *v28; 
  unsigned int v29; 
  DLogTDigest<20,8> *p_digest; 
  const char *v31; 
  int headerColWidtha; 
  __int64 headerColWidth; 
  int dataColWidtha; 
  __int64 dataColWidth; 
  int percentilesb; 
  unsigned int *percentilesa; 
  int percentileCountb; 
  __int64 percentileCounta; 
  __int128 v44; 
  double v45; 
  double v46; 
  char rowTitle[32]; 
  char v48[64]; 
  char dest[32]; 
  char v50[65]; 
  char v51[65]; 
  char v52[65]; 
  char v53[65]; 
  char v54[77]; 
  char buffer[1024]; 

  Com_Printf(131097, "TOTALS\n");
  Com_sprintf<32>((char (*)[32])dest, "%%-%us%%u\n", 25i64);
  v6 = 0;
  v7 = s_accumNames;
  m_totalAccums = this->m_totalAccums;
  do
  {
    Com_Printf(131097, dest, *v7, *m_totalAccums);
    ++v6;
    ++m_totalAccums;
    ++v7;
  }
  while ( v6 < 8 );
  Com_Printf(131097, "------------------\n");
  v9 = j_va("%s_%s", name, s_statNames_0[0]);
  Core_strcpy(rowTitle, 0x20ui64, v9);
  m_sum = this->m_stats[0].counter.m_sum;
  v11 = (double *)&v44;
  v12 = *(_OWORD *)&this->m_stats[0].counter.m_min;
  _XMM0 = 0i64;
  __asm { vcvtsi2sd xmm0, xmm0, rax }
  v45 = m_sum / *(double *)&_XMM0;
  v46 = m_sum;
  v44 = v12;
  for ( i = 0; i < 4; ++i )
    Com_sprintf_truncate<65>((char (*)[65])&v51[65 * i], "%.1f", *v11++);
  Com_sprintf<65>((char (*)[65])v50, "%u", this->m_stats[0].counter.m_count);
  percentileCountb = 10;
  percentilesb = 10;
  dataColWidtha = 10;
  headerColWidtha = 10;
  Com_sprintf<64>((char (*)[64])v48, "%%-%us%%-%us%%-%us%%-%us%%-%us%%-%us\n", 25i64, 10i64, headerColWidtha, dataColWidtha, percentilesb, percentileCountb);
  v16 = Com_sprintf(buffer, 0x400ui64, v48, "COUNTERS", "min", "max", "avg", "total", "count");
  Com_sprintf(&buffer[v16], 1024 - v16, v48, rowTitle, v51, v52, v53, v54, v50);
  Com_Printf(131097, (const char *)&queryFormat, buffer);
  v17 = &s_statNames_0[1];
  v18 = &s_statNames_0[1];
  v19 = 1;
  p_m_count = &this->m_stats[1].counter.m_count;
  do
  {
    if ( *p_m_count )
    {
      v21 = j_va("%s_%s", name, *v18);
      Core_strcpy(rowTitle, 0x20ui64, v21);
      v22 = *((double *)p_m_count - 3);
      v23 = (double *)&v44;
      v24 = *((_OWORD *)p_m_count - 1);
      _XMM0 = 0i64;
      __asm { vcvtsi2sd xmm0, xmm0, rax }
      v45 = v22 / *(double *)&_XMM0;
      v46 = v22;
      v44 = v24;
      for ( j = 0; j < 4; ++j )
        Com_sprintf_truncate<65>((char (*)[65])&v51[65 * j], "%.1f", *v23++);
      Com_sprintf<65>((char (*)[65])v50, "%u", *p_m_count);
      LODWORD(percentileCounta) = 10;
      LODWORD(percentilesa) = 10;
      LODWORD(dataColWidth) = 10;
      LODWORD(headerColWidth) = 10;
      Com_sprintf<64>((char (*)[64])v48, "%%-%us%%-%us%%-%us%%-%us%%-%us%%-%us\n", 25i64, 10i64, headerColWidth, dataColWidth, percentilesa, percentileCounta);
      Com_sprintf(buffer, 0x400ui64, v48, rowTitle, v51, v52, v53, v54, v50);
      Com_Printf(131097, (const char *)&queryFormat, buffer);
    }
    ++v19;
    p_m_count += 740;
    ++v18;
  }
  while ( v19 < 0xB );
  Com_Printf(131097, "------------------\n");
  v28 = j_va("%s_%s", name, s_statNames_0[0]);
  Core_strcpy(rowTitle, 0x20ui64, v28);
  DLogTDigest<20,8>::GetString<double>(&this->m_stats[0].digest, "PERCENTILE", rowTitle, "%.1f", 25, 10, percentiles, percentileCount, buffer, 0x400ui64);
  Com_Printf(131097, (const char *)&queryFormat, buffer);
  v29 = 1;
  p_digest = &this->m_stats[1].digest;
  do
  {
    if ( LODWORD(p_digest[-1].m_unprocessedCentroidBuffer[159].m_weight) )
    {
      v31 = j_va("%s_%s", name, *v17);
      Core_strcpy(rowTitle, 0x20ui64, v31);
      DLogTDigest<20,8>::GetString<double>(p_digest, NULL, rowTitle, "%.1f", 25, 10, percentiles, percentileCount, buffer, 0x400ui64);
      Com_Printf(131097, (const char *)&queryFormat, buffer);
    }
    ++v29;
    p_digest = (DLogTDigest<20,8> *)((char *)p_digest + 2960);
    ++v17;
  }
  while ( v29 < 0xB );
}

/*
==============
NetchanTelemetry::Track
==============
*/

void __fastcall NetchanTelemetry::Track(NetchanTelemetry *this, NetchanTelemetry::StatType stat, double value)
{
  __int64 v3; 
  __int64 v6; 
  long double v7; 
  int m_unprocessedCentroidBufferIndex; 
  DLogTDigest<20,8> *p_digest; 
  __int64 v17; 
  int v19; 

  v3 = stat;
  _XMM6 = *(_OWORD *)&value;
  if ( (unsigned int)stat >= STAT_COUNT )
  {
    v19 = 11;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_chan_telemetry.cpp", 235, ASSERT_TYPE_ASSERT, "(unsigned)( stat ) < (unsigned)( STAT_COUNT )", "stat doesn't index STAT_COUNT\n\t%i not in [0, %i)", stat, v19) )
      __debugbreak();
  }
  v6 = v3;
  this->m_currStats[v3] = value;
  v7 = value + this->m_stats[v3].counter.m_sum;
  ++this->m_stats[v6].counter.m_count;
  this->m_stats[v6].counter.m_sum = v7;
  _XMM0 = *(unsigned __int64 *)&this->m_stats[v3].counter.m_min;
  __asm { vminsd  xmm1, xmm0, xmm6 }
  _XMM0 = *(unsigned __int64 *)&this->m_stats[v3].counter.m_max;
  this->m_stats[v6].counter.m_min = *(double *)&_XMM1;
  __asm { vmaxsd  xmm1, xmm0, xmm6 }
  this->m_stats[v6].counter.m_max = *(double *)&_XMM1;
  m_unprocessedCentroidBufferIndex = this->m_stats[v3].digest.m_unprocessedCentroidBufferIndex;
  p_digest = &this->m_stats[v3].digest;
  if ( (unsigned int)m_unprocessedCentroidBufferIndex < 0x8C )
    goto LABEL_7;
  if ( !p_digest->m_disableAutoMerge )
  {
    DLogTDigest<20,8>::ProcessBufferedCentroids(p_digest);
    m_unprocessedCentroidBufferIndex = p_digest->m_unprocessedCentroidBufferIndex;
LABEL_7:
    _XMM0 = *(unsigned __int64 *)&p_digest->m_min;
    __asm { vminsd  xmm1, xmm0, xmm6 }
    p_digest->m_min = *(double *)&_XMM1;
    __asm { vmaxsd  xmm0, xmm6, qword ptr [rbx+8] }
    p_digest->m_max = *(double *)&_XMM0;
    v17 = 2 * (m_unprocessedCentroidBufferIndex + 23i64);
    *((double *)&p_digest->m_min + v17) = value;
    *((_QWORD *)&p_digest->m_max + v17) = 0x3FF0000000000000i64;
    *(long double *)&_XMM0 = p_digest->m_unprocessedWeightTotal;
    ++p_digest->m_unprocessedCentroidBufferIndex;
    p_digest->m_unprocessedWeightTotal = *(double *)&_XMM0 + 1.0;
    return;
  }
  DLog_PrintError("Auto merge disabled - centroid buffer overflow\n");
}

/*
==============
NetchanTelemetry::TrackMessageRx
==============
*/
void NetchanTelemetry::TrackMessageRx(NetchanTelemetry *this, int size, int dropCount, bool fragmented)
{
  ++this->m_frameAccums[0];
  ++this->m_totalAccums[0];
  this->m_frameAccums[1] += dropCount;
  this->m_totalAccums[1] += dropCount;
  this->m_frameAccums[2] += fragmented;
  this->m_totalAccums[2] += fragmented;
  _XMM0 = 0i64;
  __asm { vcvtsi2sd xmm0, xmm0, rax }
  if ( (Stopwatch::Restart(&this->m_lastMessageRx) & 0x8000000000000000ui64) != 0i64 )
    *(double *)&_XMM0 = *(double *)&_XMM0 + 1.844674407370955e19;
  NetchanTelemetry::Track(this, STAT_MESSAGE_INTERVAL_RX, *(double *)&_XMM0 * msecPerRawTimerTick);
  NetchanTelemetry::Track(this, STAT_MESSAGE_SIZE_RX, (float)((float)size * 0.0009765625));
}

/*
==============
NetchanTelemetry::TrackMessageTx
==============
*/
void NetchanTelemetry::TrackMessageTx(NetchanTelemetry *this, int size)
{
  _XMM0 = 0i64;
  __asm { vcvtsi2sd xmm0, xmm0, rax }
  if ( (Stopwatch::Restart(&this->m_lastMessageTx) & 0x8000000000000000ui64) != 0i64 )
    *(double *)&_XMM0 = *(double *)&_XMM0 + 1.844674407370955e19;
  NetchanTelemetry::Track(this, STAT_MESSAGE_INTERVAL_TX, *(double *)&_XMM0 * msecPerRawTimerTick);
  NetchanTelemetry::Track(this, STAT_MESSAGE_SIZE_TX, (float)((float)size * 0.0009765625));
}

/*
==============
NetchanTelemetry::TrackPacketRx
==============
*/
void NetchanTelemetry::TrackPacketRx(NetchanTelemetry *this, int size, int dropCount, int oooCount)
{
  ++this->m_frameAccums[3];
  ++this->m_totalAccums[3];
  this->m_frameAccums[4] += dropCount;
  this->m_totalAccums[4] += dropCount;
  this->m_frameAccums[5] += oooCount;
  this->m_totalAccums[5] += oooCount;
  _XMM0 = 0i64;
  __asm { vcvtsi2sd xmm0, xmm0, rax }
  if ( (Stopwatch::Restart(&this->m_lastPacketRx) & 0x8000000000000000ui64) != 0i64 )
    *(double *)&_XMM0 = *(double *)&_XMM0 + 1.844674407370955e19;
  NetchanTelemetry::Track(this, STAT_PACKET_INTERVAL_RX, *(double *)&_XMM0 * msecPerRawTimerTick);
}

/*
==============
NetchanTelemetry::TrackPacketTx
==============
*/
void NetchanTelemetry::TrackPacketTx(NetchanTelemetry *this, int size, bool success)
{
  _XMM0 = 0i64;
  __asm { vcvtsi2sd xmm0, xmm0, rax }
  if ( (Stopwatch::Restart(&this->m_lastPacketTx) & 0x8000000000000000ui64) != 0i64 )
    *(double *)&_XMM0 = *(double *)&_XMM0 + 1.844674407370955e19;
  NetchanTelemetry::Track(this, STAT_PACKET_INTERVAL_TX, *(double *)&_XMM0 * msecPerRawTimerTick);
}

