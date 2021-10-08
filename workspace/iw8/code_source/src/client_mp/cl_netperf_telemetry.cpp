/*
==============
ClNetperfTelemetry::TrackPing
==============
*/

void __fastcall ClNetperfTelemetry::TrackPing(ClNetperfTelemetry *this, int value)
{
  ?TrackPing@ClNetperfTelemetry@@QEAAXH@Z(this, value);
}

/*
==============
ClNetperfTelemetry::TrackUsercmd
==============
*/

void __fastcall ClNetperfTelemetry::TrackUsercmd(ClNetperfTelemetry *this, int count, int size, bool valid)
{
  ?TrackUsercmd@ClNetperfTelemetry@@QEAAXHH_N@Z(this, count, size, valid);
}

/*
==============
ClNetperfTelemetry::IsEnabled
==============
*/

bool __fastcall ClNetperfTelemetry::IsEnabled(ClNetperfTelemetry *this)
{
  return ?IsEnabled@ClNetperfTelemetry@@QEBA_NXZ(this);
}

/*
==============
ClNetperfTelemetry::Frame
==============
*/

void __fastcall ClNetperfTelemetry::Frame(ClNetperfTelemetry *this)
{
  ?Frame@ClNetperfTelemetry@@QEAAXXZ(this);
}

/*
==============
ClNetperfTelemetry::Dlog
==============
*/

bool __fastcall ClNetperfTelemetry::Dlog(ClNetperfTelemetry *this, DLogContext *context)
{
  return ?Dlog@ClNetperfTelemetry@@QEAA_NPEAUDLogContext@@@Z(this, context);
}

/*
==============
ClNetperfTelemetry::TrackSnapshot
==============
*/

void __fastcall ClNetperfTelemetry::TrackSnapshot(ClNetperfTelemetry *this, int size, bool valid)
{
  ?TrackSnapshot@ClNetperfTelemetry@@QEAAXH_N@Z(this, size, valid);
}

/*
==============
ClNetperfTelemetry::Reset
==============
*/

void __fastcall ClNetperfTelemetry::Reset(ClNetperfTelemetry *this, ClConnectionMP *conn)
{
  ?Reset@ClNetperfTelemetry@@QEAAXPEAVClConnectionMP@@@Z(this, conn);
}

/*
==============
ClNetperfTelemetry::Dlog
==============
*/
bool ClNetperfTelemetry::Dlog(ClNetperfTelemetry *this, DLogContext *context)
{
  bool result; 
  bool v5; 
  unsigned int v6; 
  const char **v7; 
  unsigned __int64 v8; 
  ClConnectionMP *m_conn; 
  __int64 v10; 
  __int64 v11; 
  unsigned __int8 outBuffer[1024]; 

  result = ClNetperfTelemetry::IsEnabled(this);
  if ( result )
  {
    v5 = DLog_UInt32(context, "snapshots_invalid", this->m_snapshotsInvalid) && DLog_UInt32(context, "usercmds_invalid", this->m_usercmdsInvalid);
    v6 = 0;
    v7 = s_statNames;
    do
    {
      DLogTDigest<20,8>::ProcessBufferedCentroids(&this->m_digests[v6]);
      v8 = DLogTDigest<20,8>::SerializeToProtobuf(&this->m_digests[v6], outBuffer, 0x400ui64);
      if ( v8 > 0x400 )
      {
        LODWORD(v11) = 1024;
        LODWORD(v10) = v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_netperf_telemetry.cpp", 151, ASSERT_TYPE_ASSERT, "( digestSize ) <= ( sizeof( digestBuffer ) )", "%s <= %s\n\t%i, %i", "digestSize", "sizeof( digestBuffer )", v10, v11) )
          __debugbreak();
      }
      v5 = v5 && DLog_UInt8Array(context, *v7, outBuffer, v8);
      ++v6;
      ++v7;
    }
    while ( v6 < 6 );
    m_conn = this->m_conn;
    if ( !BG_GameInterface_GameModeIsMP((GameModeType)(unsigned __int8)ClConnection::ms_activeConnectionType) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_connection_mp.h", 157, ASSERT_TYPE_ASSERT, "(BG_GameInterface_GameModeIsMP( ms_activeConnectionType ))", (const char *)&queryFormat, "BG_GameInterface_GameModeIsMP( ms_activeConnectionType )") )
      __debugbreak();
    return v5 && NetchanTelemetry::Dlog(&m_conn->m_connectionData.netchan.clientTelemetry, context, "chan");
  }
  return result;
}

/*
==============
ClNetperfTelemetry::Frame
==============
*/
void ClNetperfTelemetry::Frame(ClNetperfTelemetry *this)
{
  unsigned __int64 v3; 
  bool v4; 
  ClConnectionDataMP *ConnectionDataMP; 

  if ( ClNetperfTelemetry::IsEnabled(this) )
  {
    v3 = __rdtsc();
    if ( this->m_frameTimer.m_started )
    {
      v4 = (__int64)(v3 - this->m_frameTimer.m_ticks) < 0;
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2sd xmm0, xmm0, rcx
      }
      this->m_frameTimer.m_ticks = v3;
      if ( v4 )
        __asm { vaddsd  xmm0, xmm0, cs:__real@43f0000000000000 }
      __asm
      {
        vmulsd  xmm1, xmm0, cs:?msecPerRawTimerTick@@3NA; value
        vmovsd  xmm2, cs:__real@3ff0000000000000; weight
      }
      DLogTDigest<20,8>::Add(&this->m_digests[4], *(long double *)&_XMM1, *(long double *)&_XMM2);
    }
    else
    {
      this->m_frameTimer.m_ticks = v3;
      this->m_frameTimer.m_started = 1;
    }
    ConnectionDataMP = ClConnectionMP::GetConnectionDataMP(this->m_conn);
    NetchanTelemetry::Frame(&ConnectionDataMP->netchan.clientTelemetry);
  }
}

/*
==============
ClNetperfTelemetry::IsEnabled
==============
*/
bool ClNetperfTelemetry::IsEnabled(ClNetperfTelemetry *this)
{
  const dvar_t *v1; 
  __int64 v3; 
  __int64 v4; 

  if ( !this->m_conn || this->m_conn->m_localClientNum )
    return 0;
  v1 = DVARINT_cl_netperf_telemetry_mode;
  if ( !DVARINT_cl_netperf_telemetry_mode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_netperf_telemetry_mode") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( v1->current.integer != 1 )
    return v1->current.integer == 2;
  if ( !LODWORD(cl_maxLocalClients) )
  {
    *(float *)&v4 = cl_maxLocalClients;
    *(float *)&v3 = cl_maxLocalClients;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_connection_mp.h", 138, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( (cl_maxLocalClients) )", "localClientNum doesn't index MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  if ( !BG_GameInterface_GameModeIsMP((GameModeType)(unsigned __int8)ClConnection::ms_activeConnectionType) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_connection_mp.h", 139, ASSERT_TYPE_ASSERT, "(BG_GameInterface_GameModeIsMP( ms_activeConnectionType ))", (const char *)&queryFormat, "BG_GameInterface_GameModeIsMP( ms_activeConnectionType )") )
    __debugbreak();
  if ( !ClConnection::ms_connections[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_connection_mp.h", 140, ASSERT_TYPE_ASSERT, "(ms_connections[localClientNum])", (const char *)&queryFormat, "ms_connections[localClientNum]") )
    __debugbreak();
  return NetConnection::IsDedicated((NetConnection *)&ClConnection::ms_connections[0][8259].m_localClientNum);
}

/*
==============
ClNetperfTelemetry::Reset
==============
*/
void ClNetperfTelemetry::Reset(ClNetperfTelemetry *this, ClConnectionMP *conn)
{
  unsigned int v2; 
  long double *p_m_processedWeightTotal; 

  this->m_conn = conn;
  v2 = 0;
  p_m_processedWeightTotal = &this->m_digests[1].m_processedWeightTotal;
  do
  {
    *(p_m_processedWeightTotal - 369) = 1.797693134862316e308;
    *(p_m_processedWeightTotal - 368) = 2.225073858507201e-308;
    *(p_m_processedWeightTotal - 366) = 0.0;
    *(p_m_processedWeightTotal - 365) = 0.0;
    *(p_m_processedWeightTotal - 364) = 0.0;
    memset_0(p_m_processedWeightTotal - 363, 0, 0x140ui64);
    memset_0(p_m_processedWeightTotal - 323, 0, 0xA00ui64);
    *(p_m_processedWeightTotal - 3) = 1.797693134862316e308;
    *(p_m_processedWeightTotal - 2) = 2.225073858507201e-308;
    *p_m_processedWeightTotal = 0.0;
    p_m_processedWeightTotal[1] = 0.0;
    p_m_processedWeightTotal[2] = 0.0;
    memset_0(p_m_processedWeightTotal + 3, 0, 0x140ui64);
    memset_0(p_m_processedWeightTotal + 43, 0, 0xA00ui64);
    p_m_processedWeightTotal[363] = 1.797693134862316e308;
    p_m_processedWeightTotal[364] = 2.225073858507201e-308;
    p_m_processedWeightTotal[366] = 0.0;
    p_m_processedWeightTotal[367] = 0.0;
    p_m_processedWeightTotal[368] = 0.0;
    memset_0(p_m_processedWeightTotal + 369, 0, 0x140ui64);
    memset_0(p_m_processedWeightTotal + 409, 0, 0xA00ui64);
    p_m_processedWeightTotal[729] = 1.797693134862316e308;
    p_m_processedWeightTotal[730] = 2.225073858507201e-308;
    p_m_processedWeightTotal[732] = 0.0;
    p_m_processedWeightTotal[733] = 0.0;
    p_m_processedWeightTotal[734] = 0.0;
    memset_0(p_m_processedWeightTotal + 735, 0, 0x140ui64);
    memset_0(p_m_processedWeightTotal + 775, 0, 0xA00ui64);
    p_m_processedWeightTotal[1095] = 1.797693134862316e308;
    p_m_processedWeightTotal[1096] = 2.225073858507201e-308;
    p_m_processedWeightTotal[1098] = 0.0;
    p_m_processedWeightTotal[1099] = 0.0;
    p_m_processedWeightTotal[1100] = 0.0;
    memset_0(p_m_processedWeightTotal + 1101, 0, 0x140ui64);
    memset_0(p_m_processedWeightTotal + 1141, 0, 0xA00ui64);
    p_m_processedWeightTotal[1461] = 1.797693134862316e308;
    p_m_processedWeightTotal[1462] = 2.225073858507201e-308;
    p_m_processedWeightTotal[1464] = 0.0;
    p_m_processedWeightTotal[1465] = 0.0;
    p_m_processedWeightTotal[1466] = 0.0;
    memset_0(p_m_processedWeightTotal + 1467, 0, 0x140ui64);
    memset_0(p_m_processedWeightTotal + 1507, 0, 0xA00ui64);
    v2 += 6;
    p_m_processedWeightTotal += 2196;
  }
  while ( v2 < 6 );
  if ( this->m_frameTimer.m_started )
  {
    this->m_frameTimer.m_started = 0;
    this->m_frameTimer.m_ticks = __rdtsc() - this->m_frameTimer.m_ticks;
  }
  if ( this->m_usercmdTimer.m_started )
  {
    this->m_usercmdTimer.m_started = 0;
    this->m_usercmdTimer.m_ticks = __rdtsc() - this->m_usercmdTimer.m_ticks;
  }
  *(_QWORD *)&this->m_snapshotsInvalid = 0i64;
}

/*
==============
ClNetperfTelemetry::TrackPing
==============
*/
void ClNetperfTelemetry::TrackPing(ClNetperfTelemetry *this, int value)
{
  __asm
  {
    vmovsd  xmm2, cs:__real@3ff0000000000000; weight
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2sd xmm1, xmm1, edx; value
  }
  DLogTDigest<20,8>::Add(&this->m_digests[5], *(long double *)&_XMM1, *(long double *)&_XMM2);
}

/*
==============
ClNetperfTelemetry::TrackSnapshot
==============
*/
void ClNetperfTelemetry::TrackSnapshot(ClNetperfTelemetry *this, int size, bool valid)
{
  if ( ClNetperfTelemetry::IsEnabled(this) )
    this->m_snapshotsInvalid += !valid;
}

/*
==============
ClNetperfTelemetry::TrackUsercmd
==============
*/
void ClNetperfTelemetry::TrackUsercmd(ClNetperfTelemetry *this, int count, int size, bool valid)
{
  unsigned __int64 v9; 
  bool v10; 

  if ( ClNetperfTelemetry::IsEnabled(this) )
  {
    __asm
    {
      vmovaps [rsp+48h+var_18], xmm6
      vmovsd  xmm6, cs:__real@3ff0000000000000
    }
    v9 = __rdtsc();
    if ( this->m_usercmdTimer.m_started )
    {
      v10 = (__int64)(v9 - this->m_usercmdTimer.m_ticks) < 0;
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2sd xmm0, xmm0, rcx
      }
      this->m_usercmdTimer.m_ticks = v9;
      if ( v10 )
        __asm { vaddsd  xmm0, xmm0, cs:__real@43f0000000000000 }
      __asm
      {
        vmulsd  xmm1, xmm0, cs:?msecPerRawTimerTick@@3NA; value
        vmovaps xmm2, xmm6; weight
      }
      DLogTDigest<20,8>::Add(&this->m_digests[1], *(long double *)&_XMM1, *(long double *)&_XMM2);
    }
    else
    {
      this->m_usercmdTimer.m_ticks = v9;
      this->m_usercmdTimer.m_started = 1;
    }
    ClConnectionMP::GetConnectionDataMP(this->m_conn);
    __asm { vxorps  xmm0, xmm0, xmm0 }
    this->m_usercmdsInvalid += !valid;
    __asm
    {
      vcvtsi2ss xmm0, xmm0, ebp
      vmulss  xmm1, xmm0, cs:__real@3a800000
      vcvtss2sd xmm1, xmm1, xmm1; value
      vmovaps xmm2, xmm6; weight
    }
    DLogTDigest<20,8>::Add(&this->m_digests[3], *(long double *)&_XMM1, *(long double *)&_XMM2);
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2sd xmm1, xmm1, r14d; value
      vmovaps xmm2, xmm6; weight
    }
    DLogTDigest<20,8>::Add(&this->m_digests[2], *(long double *)&_XMM1, *(long double *)&_XMM2);
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2sd xmm1, xmm1, eax; value
      vmovaps xmm2, xmm6; weight
    }
    DLogTDigest<20,8>::Add(this->m_digests, *(long double *)&_XMM1, *(long double *)&_XMM2);
    __asm { vmovaps xmm6, [rsp+48h+var_18] }
  }
}

