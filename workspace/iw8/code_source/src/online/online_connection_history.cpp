/*
==============
Live_FindDeviceConnectionHistoryField
==============
*/

bool __fastcall Live_FindDeviceConnectionHistoryField(const DDLDef *def, const int deviceIndex, const scr_string_t fieldName, DDLState *state)
{
  return ?Live_FindDeviceConnectionHistoryField@@YA_NPEBUDDLDef@@HW4scr_string_t@@PEAUDDLState@@@Z(def, deviceIndex, fieldName, state);
}

/*
==============
Live_ClearNonMigrateableQuit
==============
*/

void __fastcall Live_ClearNonMigrateableQuit(const int controllerIndex)
{
  ?Live_ClearNonMigrateableQuit@@YAXH@Z(controllerIndex);
}

/*
==============
Live_IncrementGameCount
==============
*/

void __fastcall Live_IncrementGameCount(const int controllerIndex)
{
  ?Live_IncrementGameCount@@YAXH@Z(controllerIndex);
}

/*
==============
Live_TrackSuckedAsHostAddedBandwidthTest
==============
*/

void __fastcall Live_TrackSuckedAsHostAddedBandwidthTest(int historyIndex)
{
  ?Live_TrackSuckedAsHostAddedBandwidthTest@@YAXH@Z(historyIndex);
}

/*
==============
Live_GetGameCount
==============
*/

int __fastcall Live_GetGameCount(const int controllerIndex)
{
  return ?Live_GetGameCount@@YAHH@Z(controllerIndex);
}

/*
==============
Live_QueueBandwidthSample
==============
*/

void __fastcall Live_QueueBandwidthSample(int downloadRate, int uploadRate)
{
  ?Live_QueueBandwidthSample@@YAXHH@Z(downloadRate, uploadRate);
}

/*
==============
Live_ComputeMinUploadBandwidthProbability
==============
*/

double __fastcall Live_ComputeMinUploadBandwidthProbability(float uploadRate)
{
  double result; 

  *(float *)&result = ?Live_ComputeMinUploadBandwidthProbability@@YAMM@Z(uploadRate);
  return result;
}

/*
==============
Live_TrackSuckedAsHost
==============
*/

void Live_TrackSuckedAsHost(void)
{
  ?Live_TrackSuckedAsHost@@YAXXZ();
}

/*
==============
Live_GetNonMigrateableQuitRate
==============
*/

double __fastcall Live_GetNonMigrateableQuitRate(const int controllerIndex)
{
  double result; 

  *(float *)&result = ?Live_GetNonMigrateableQuitRate@@YAMH@Z(controllerIndex);
  return result;
}

/*
==============
Live_GetMigrateableQuitRate
==============
*/

double __fastcall Live_GetMigrateableQuitRate(const int controllerIndex)
{
  double result; 

  *(float *)&result = ?Live_GetMigrateableQuitRate@@YAMH@Z(controllerIndex);
  return result;
}

/*
==============
Live_DebugSuckedAsHost
==============
*/

void __fastcall Live_DebugSuckedAsHost()
{
  ?Live_DebugSuckedAsHost@@YAXXZ();
}

/*
==============
Live_TrackNonMigrateableQuitBeginGame
==============
*/

void __fastcall Live_TrackNonMigrateableQuitBeginGame(const int controllerIndex)
{
  ?Live_TrackNonMigrateableQuitBeginGame@@YAXH@Z(controllerIndex);
}

/*
==============
Live_ShouldTrackConnectionHistory
==============
*/

bool __fastcall Live_ShouldTrackConnectionHistory(LocalClientNum_t localClientNum)
{
  return ?Live_ShouldTrackConnectionHistory@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
Live_ConfirmNonMigrateableQuit
==============
*/

void __fastcall Live_ConfirmNonMigrateableQuit(const int controllerIndex)
{
  ?Live_ConfirmNonMigrateableQuit@@YAXH@Z(controllerIndex);
}

/*
==============
Live_GetCurrentDeviceIndex
==============
*/

unsigned __int8 __fastcall Live_GetCurrentDeviceIndex()
{
  return ?Live_GetCurrentDeviceIndex@@YAEXZ();
}

/*
==============
Live_GetOverallQuitRate
==============
*/

double __fastcall Live_GetOverallQuitRate(const int controllerIndex)
{
  double result; 

  *(float *)&result = ?Live_GetOverallQuitRate@@YAMH@Z(controllerIndex);
  return result;
}

/*
==============
Live_TrackMigrateableQuit
==============
*/

void __fastcall Live_TrackMigrateableQuit(const int controllerIndex)
{
  ?Live_TrackMigrateableQuit@@YAXH@Z(controllerIndex);
}

/*
==============
Live_ForceFlushPlayerData
==============
*/

void __fastcall Live_ForceFlushPlayerData(const int controllerIndex)
{
  ?Live_ForceFlushPlayerData@@YAXH@Z(controllerIndex);
}

/*
==============
Live_GetSuckedAsHostRate
==============
*/

double __fastcall Live_GetSuckedAsHostRate()
{
  double result; 

  *(float *)&result = ?Live_GetSuckedAsHostRate@@YAMXZ();
  return result;
}

/*
==============
Live_AddBandwidthSample
==============
*/

bool __fastcall Live_AddBandwidthSample(int downloadRate, int uploadRate)
{
  return ?Live_AddBandwidthSample@@YA_NHH@Z(downloadRate, uploadRate);
}

/*
==============
Live_ClearDeviceConnectionHistory
==============
*/

bool __fastcall Live_ClearDeviceConnectionHistory(unsigned __int8 deviceIndex)
{
  return ?Live_ClearDeviceConnectionHistory@@YA_NE@Z(deviceIndex);
}

/*
==============
Live_HistoryPump
==============
*/

void __fastcall Live_HistoryPump(const int controllerIndex)
{
  ?Live_HistoryPump@@YAXH@Z(controllerIndex);
}

/*
==============
Live_TrackMigrateableQuitBeginGame
==============
*/

void __fastcall Live_TrackMigrateableQuitBeginGame(const int controllerIndex)
{
  ?Live_TrackMigrateableQuitBeginGame@@YAXH@Z(controllerIndex);
}

/*
==============
ComputeStandardDeviation
==============
*/

float __fastcall ComputeStandardDeviation(float *data, int count, float *avg_out, double _XMM3_8)
{
  __int64 v9; 
  int v12; 
  __int64 v17; 
  __int64 v21; 
  __int64 v22; 
  __int64 v23; 
  unsigned __int64 v24; 
  int v37; 
  unsigned __int64 v51; 

  __asm { vmovaps [rsp+48h+var_18], xmm6 }
  _RSI = avg_out;
  v9 = count;
  _RBX = data;
  if ( count <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_connection_history.cpp", 792, ASSERT_TYPE_ASSERT, "(count > 0)", (const char *)&queryFormat, "count > 0") )
    __debugbreak();
  _R9 = 0i64;
  v12 = 0;
  __asm
  {
    vxorps  xmm3, xmm3, xmm3
    vxorps  xmm2, xmm2, xmm2
  }
  if ( (int)v9 > 0 && (unsigned int)v9 >= 8 )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vxorps  xmm1, xmm1, xmm1
    }
    v17 = 0i64;
    do
    {
      __asm
      {
        vaddps  xmm0, xmm0, xmmword ptr [rbx+rax*4]
        vaddps  xmm1, xmm1, xmmword ptr [rbx+rax*4+10h]
      }
      v17 += 8i64;
      v12 += 8;
    }
    while ( v17 < (int)v9 - (int)v9 % 8 );
    __asm
    {
      vaddps  xmm1, xmm1, xmm0
      vmovhlps xmm0, xmm1, xmm1
      vaddps  xmm2, xmm0, xmm1
      vshufps xmm0, xmm2, xmm2, 0F5h ; 'õ'
      vaddss  xmm2, xmm2, xmm0
    }
  }
  v21 = v12;
  v22 = v9;
  if ( v21 < v9 )
  {
    if ( v9 - v21 >= 4 )
    {
      v23 = (__int64)&_RBX[v21 + 2];
      v24 = ((unsigned __int64)(v9 - v21 - 4) >> 2) + 1;
      v21 += 4 * v24;
      do
      {
        __asm
        {
          vaddss  xmm0, xmm2, dword ptr [rax-8]
          vaddss  xmm1, xmm0, dword ptr [rax-4]
          vaddss  xmm2, xmm1, dword ptr [rax]
          vaddss  xmm2, xmm2, dword ptr [rax+4]
        }
        v23 += 16i64;
        --v24;
      }
      while ( v24 );
    }
    for ( ; v21 < v9; ++v21 )
      __asm { vaddss  xmm2, xmm2, dword ptr [rbx+rcx*4] }
  }
  __asm
  {
    vmovss  xmm0, cs:__real@3f800000
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, edi
    vdivss  xmm6, xmm0, xmm1
    vmulss  xmm5, xmm6, xmm2
    vmovaps xmm4, xmm5
    vshufps xmm4, xmm4, xmm4, 0
  }
  if ( _RSI )
    __asm { vmovss  dword ptr [rsi], xmm5 }
  LODWORD(_RCX) = 0;
  if ( (int)v9 > 0 && (unsigned int)v9 >= 8 )
  {
    __asm
    {
      vxorps  xmm2, xmm2, xmm2
      vxorps  xmm3, xmm3, xmm3
    }
    v37 = v9 - (int)v9 % 8;
    do
    {
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx+r9*4]
        vsubps  xmm1, xmm0, xmm4
        vmovups xmm0, xmmword ptr [rbx+r9*4+10h]
        vmulps  xmm1, xmm1, xmm1
        vaddps  xmm2, xmm1, xmm2
        vsubps  xmm1, xmm0, xmm4
      }
      LODWORD(_RCX) = _RCX + 8;
      _R9 += 8i64;
      __asm
      {
        vmulps  xmm1, xmm1, xmm1
        vaddps  xmm3, xmm1, xmm3
      }
    }
    while ( _R9 < v37 );
    __asm
    {
      vaddps  xmm1, xmm3, xmm2
      vmovhlps xmm0, xmm1, xmm1
      vaddps  xmm3, xmm0, xmm1
      vshufps xmm0, xmm3, xmm3, 0F5h ; 'õ'
      vaddss  xmm3, xmm3, xmm0
    }
  }
  _RCX = (int)_RCX;
  if ( (int)_RCX < v22 )
  {
    if ( v22 - (int)_RCX >= 4 )
    {
      _R8 = (__int64)&_RBX[(int)_RCX + 2];
      v51 = ((unsigned __int64)(v22 - (int)_RCX - 4) >> 2) + 1;
      _RCX = (int)_RCX + 4 * v51;
      do
      {
        __asm { vmovss  xmm0, dword ptr [r8-8] }
        _R8 += 16i64;
        __asm
        {
          vsubss  xmm1, xmm0, xmm5
          vmovss  xmm0, dword ptr [r8-14h]
          vmulss  xmm2, xmm1, xmm1
          vaddss  xmm3, xmm3, xmm2
          vsubss  xmm1, xmm0, xmm5
          vmovss  xmm0, dword ptr [r8-10h]
          vmulss  xmm2, xmm1, xmm1
          vaddss  xmm4, xmm3, xmm2
          vsubss  xmm1, xmm0, xmm5
          vmovss  xmm0, dword ptr [r8-0Ch]
          vmulss  xmm2, xmm1, xmm1
          vaddss  xmm3, xmm4, xmm2
          vsubss  xmm1, xmm0, xmm5
          vmulss  xmm2, xmm1, xmm1
          vaddss  xmm3, xmm3, xmm2
        }
        --v51;
      }
      while ( v51 );
    }
    while ( _RCX < v22 )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+rcx*4]
        vsubss  xmm1, xmm0, xmm5
      }
      ++_RCX;
      __asm
      {
        vmulss  xmm2, xmm1, xmm1
        vaddss  xmm3, xmm3, xmm2
      }
    }
  }
  __asm
  {
    vmulss  xmm0, xmm6, xmm3
    vmovaps xmm6, [rsp+48h+var_18]
    vsqrtss xmm0, xmm0, xmm0
  }
  return *(float *)&_XMM0;
}

/*
==============
Live_AddBandwidthSample
==============
*/
char Live_AddBandwidthSample(int downloadRate, int uploadRate)
{
  int ControllerFromClient; 
  StatsSource ActiveStatsSource; 
  const DDLDef *def; 
  int v9; 
  int v10; 
  int v11; 
  unsigned __int8 CurrentDeviceIndex; 
  int Int; 
  int v15; 
  StatsSource v16; 
  const DDLDef *v17; 
  unsigned __int8 v18; 
  unsigned __int16 Short; 
  DDLState state; 
  DDLState v22; 
  DDLContext context; 
  DDLContext ddlContext; 

  state.isValid = 0;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  state.offset = 0;
  __asm { vmovdqu xmmword ptr [rbp+57h+state.member], xmm0 }
  state.arrayIndex = -1;
  if ( !CL_Mgr_IsClientActive(LOCAL_CLIENT_0) )
    return 0;
  ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
  ActiveStatsSource = LiveStorage_GetActiveStatsSource(ControllerFromClient);
  if ( !CL_PlayerData_GetDDLBuffer(&context, ControllerFromClient, ActiveStatsSource, STATSGROUP_NONGAME) )
    return 0;
  def = context.def;
  v9 = 4177920;
  v10 = 0;
  v11 = 4177920;
  CurrentDeviceIndex = Live_GetCurrentDeviceIndex();
  if ( downloadRate <= 4177920 )
    v11 = downloadRate;
  if ( uploadRate <= 4177920 )
    v9 = uploadRate;
  if ( v11 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_connection_history.cpp", 685, ASSERT_TYPE_ASSERT, "(downloadRate >= 0)", (const char *)&queryFormat, "downloadRate >= 0", *(_QWORD *)&state.isValid, *(_QWORD *)&state.arrayIndex, state.member, state.ddlDef) )
    __debugbreak();
  if ( v9 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_connection_history.cpp", 686, ASSERT_TYPE_ASSERT, "(uploadRate >= 0)", (const char *)&queryFormat, "uploadRate >= 0") )
    __debugbreak();
  if ( Live_FindDeviceConnectionHistoryField(def, CurrentDeviceIndex, (const scr_string_t)scr_const.bandwidthTestCount, &state) )
  {
    Int = DDL_GetInt(&state, &context);
    v10 = Int % 16;
    DDL_SetInt(&state, &context, Int + 1);
    if ( v10 >= 16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_connection_history.cpp", 698, ASSERT_TYPE_ASSERT, "(bandwidthHistoryIndex < 16)", (const char *)&queryFormat, "bandwidthHistoryIndex < BANDWIDTH_HISTORY_COUNT") )
      __debugbreak();
  }
  if ( Live_FindDeviceConnectionHistoryField(def, CurrentDeviceIndex, (const scr_string_t)scr_const.bandwidthUp, &state) )
  {
    DDL_MoveToIndex(&state, &state, v10);
    DDL_SetInt(&state, &context, v9 / 0x4000);
  }
  if ( Live_FindDeviceConnectionHistoryField(def, CurrentDeviceIndex, (const scr_string_t)scr_const.bandwidthDown, &state) )
  {
    DDL_MoveToIndex(&state, &state, v10);
    DDL_SetInt(&state, &context, v11 / 0x4000);
  }
  __asm { vpxor   xmm0, xmm0, xmm0 }
  v22.isValid = 0;
  __asm { vmovdqu xmmword ptr [rbp+57h+var_A0.member], xmm0 }
  v22.offset = 0;
  v22.arrayIndex = -1;
  v15 = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
  v16 = LiveStorage_GetActiveStatsSource(v15);
  if ( CL_PlayerData_GetDDLBuffer(&ddlContext, v15, v16, STATSGROUP_NONGAME) )
  {
    v17 = ddlContext.def;
    v18 = Live_GetCurrentDeviceIndex();
    if ( Live_FindDeviceConnectionHistoryField(v17, v18, (const scr_string_t)scr_const.suckedAsHost, &v22) )
    {
      Short = DDL_GetShort(&v22, &ddlContext);
      if ( !DDL_SetShort(&v22, &ddlContext, Short & ~(1 << v10)) )
        Com_Printf(1, "Failed setting sucked as host quit.\n");
    }
  }
  else
  {
    Com_Printf(1, "Could not get player data buffer\n");
  }
  return 1;
}

/*
==============
Live_ClearDeviceConnectionHistory
==============
*/
char Live_ClearDeviceConnectionHistory(unsigned __int8 deviceIndex)
{
  int ControllerFromClient; 
  StatsSource ActiveStatsSource; 
  const DDLDef *def; 
  DDLState state; 
  DDLContext context; 

  state.isValid = 0;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  state.offset = 0;
  __asm { vmovdqu xmmword ptr [rsp+78h+state.member], xmm0 }
  state.arrayIndex = -1;
  ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
  ActiveStatsSource = LiveStorage_GetActiveStatsSource(ControllerFromClient);
  if ( CL_PlayerData_GetDDLBuffer(&context, ControllerFromClient, ActiveStatsSource, STATSGROUP_NONGAME) )
  {
    def = context.def;
    Live_FindDeviceConnectionHistoryField(context.def, deviceIndex, (const scr_string_t)scr_const.deviceUseFrequency, &state);
    DDL_SetInt(&state, &context, 0);
    Live_FindDeviceConnectionHistoryField(def, deviceIndex, (const scr_string_t)scr_const.bandwidthTestCount, &state);
    DDL_SetInt(&state, &context, 0);
    return 1;
  }
  else
  {
    Com_Printf(1, "Could not get player data buffer\n");
    return 0;
  }
}

/*
==============
Live_ClearNonMigrateableQuit
==============
*/
void Live_ClearNonMigrateableQuit(const int controllerIndex)
{
  StatsSource ActiveStatsSource; 
  int Int; 
  DDLState state; 
  DDLContext context; 

  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rsp+78h+state.member], xmm0
  }
  state.isValid = 0;
  state.offset = 0;
  state.arrayIndex = -1;
  ActiveStatsSource = LiveStorage_GetActiveStatsSource(controllerIndex);
  if ( CL_PlayerData_GetDDLBuffer(&context, controllerIndex, ActiveStatsSource, STATSGROUP_NONGAME) )
  {
    if ( ((unsigned __int8)(1 << controllerIndex) & s_confirmedUnmigrateableQuit) == 0 && Live_FindPlayerConnectionHistoryField(context.def, (const scr_string_t)scr_const.nonMigrateableQuits, &state) )
    {
      Int = DDL_GetInt(&state, &context);
      if ( !DDL_SetInt(&state, &context, Int & 0xFFFFFFFE) )
        Com_Printf(1, "Failed clearing non migrateable quit.\n");
    }
  }
  else
  {
    Com_Printf(1, "Could not get player data buffer\n");
  }
}

/*
==============
Live_ComputeMinUploadBandwidthProbability
==============
*/

float __fastcall Live_ComputeMinUploadBandwidthProbability(double uploadRate, double _XMM1_8, __int64 a3, double a4)
{
  int v8; 
  int ControllerFromClient; 
  StatsSource ActiveStatsSource; 
  const DDLDef *def; 
  int CurrentDeviceIndex; 
  int Int; 
  unsigned __int16 Short; 
  int v20; 
  char v24; 
  char v26; 
  float avg_out; 
  DDLState state; 
  DDLState toState; 
  DDLContext context; 
  float data[16]; 

  __asm { vmovaps [rsp+140h+var_50], xmm8 }
  state.isValid = 0;
  __asm { vpxor   xmm1, xmm1, xmm1 }
  v8 = 0;
  state.arrayIndex = -1;
  state.offset = 0;
  __asm
  {
    vmovdqu xmmword ptr [rsp+140h+state.member], xmm1
    vmovaps xmm8, xmm0
  }
  ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
  ActiveStatsSource = LiveStorage_GetActiveStatsSource(ControllerFromClient);
  if ( CL_PlayerData_GetDDLBuffer(&context, ControllerFromClient, ActiveStatsSource, STATSGROUP_NONGAME) )
  {
    def = context.def;
    CurrentDeviceIndex = Live_GetCurrentDeviceIndex();
    if ( Live_FindDeviceConnectionHistoryField(def, CurrentDeviceIndex, (const scr_string_t)scr_const.bandwidthTestCount, &state) && (Int = DDL_GetInt(&state, &context), Int > 0) )
    {
      Short = 0;
      if ( Int > 16 )
        Int = 16;
      if ( Live_FindDeviceConnectionHistoryField(def, CurrentDeviceIndex, (const scr_string_t)scr_const.suckedAsHost, &state) )
        Short = DDL_GetShort(&state, &context);
      if ( Live_FindDeviceConnectionHistoryField(def, CurrentDeviceIndex, (const scr_string_t)scr_const.bandwidthUp, &state) )
      {
        __asm
        {
          vmovaps [rsp+140h+var_30], xmm6
          vmovaps [rsp+140h+var_40], xmm7
          vxorps  xmm6, xmm6, xmm6
          vmovss  xmm7, cs:__real@46800000
        }
        _RDI = 0i64;
        v20 = 1;
        do
        {
          __asm { vpxor   xmm0, xmm0, xmm0 }
          toState.isValid = 0;
          toState.offset = 0;
          toState.arrayIndex = -1;
          __asm { vmovdqu xmmword ptr [rsp+140h+toState.member], xmm0 }
          DDL_MoveToIndex(&state, &toState, v8);
          DDL_GetInt(&toState, &context);
          if ( (Short & (unsigned __int16)v20) != 0 )
          {
            __asm { vmovaps xmm1, xmm6 }
          }
          else
          {
            __asm
            {
              vxorps  xmm0, xmm0, xmm0
              vcvtsi2ss xmm0, xmm0, eax
              vmulss  xmm1, xmm0, xmm7
            }
          }
          __asm { vmovss  [rbp+rdi*4+40h+data], xmm1 }
          ++_RDI;
          v20 = __ROL4__(v20, 1);
          ++v8;
        }
        while ( _RDI < Int );
        _ER14 = 1;
        *(float *)&uploadRate = ComputeStandardDeviation(data, Int, &avg_out, a4);
        __asm
        {
          vcomiss xmm0, xmm6
          vmovaps xmm1, xmm0
        }
        if ( v24 | v26 )
        {
          __asm
          {
            vcmpless xmm1, xmm8, [rsp+140h+avg_out]
            vmovss  xmm0, cs:__real@3f800000
            vblendvps xmm0, xmm6, xmm0, xmm1
          }
        }
        else
        {
          __asm
          {
            vsubss  xmm0, xmm8, [rsp+140h+avg_out]
            vmovss  xmm7, cs:__real@3f800000
            vdivss  xmm2, xmm0, xmm1
            vcomiss xmm2, xmm6
            vandps  xmm2, xmm2, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
            vmulss  xmm0, xmm2, cs:__real@3e6d3388
            vaddss  xmm1, xmm0, xmm7
            vmulss  xmm0, xmm2, xmm2
            vmulss  xmm0, xmm0, cs:__real@bf000000; X
          }
          if ( v24 )
            _ER14 = -1;
          __asm { vdivss  xmm6, xmm7, xmm1 }
          *(float *)&_XMM0 = expf_0(*(float *)&_XMM0);
          __asm
          {
            vmulss  xmm1, xmm6, cs:__real@3f87dc22
            vsubss  xmm2, xmm1, cs:__real@3fba00e3
            vmulss  xmm3, xmm2, xmm6
            vaddss  xmm4, xmm3, cs:__real@3fb5f0e3
            vmulss  xmm1, xmm4, xmm6
            vsubss  xmm2, xmm1, cs:__real@3e91a98e
            vmulss  xmm3, xmm2, xmm6
            vaddss  xmm4, xmm3, cs:__real@3e827906
            vmulss  xmm1, xmm4, xmm6
            vmovss  xmm4, cs:__real@3f000000
            vmulss  xmm0, xmm0, xmm1
            vsubss  xmm2, xmm7, xmm0
            vmovd   xmm0, r14d
            vcvtdq2ps xmm0, xmm0
            vmulss  xmm1, xmm2, xmm0
            vmulss  xmm3, xmm1, xmm4
            vsubss  xmm0, xmm4, xmm3
          }
        }
        __asm
        {
          vmovaps xmm7, [rsp+140h+var_40]
          vmovaps xmm6, [rsp+140h+var_30]
        }
      }
      else
      {
        __asm { vxorps  xmm0, xmm0, xmm0 }
      }
    }
    else
    {
      Com_Printf(1, "Could not compute bandwidth probability.  No data.\n");
      __asm { vxorps  xmm0, xmm0, xmm0 }
    }
  }
  else
  {
    Com_Printf(1, "Could not get player data buffer\n");
    __asm { vxorps  xmm0, xmm0, xmm0 }
  }
  __asm { vmovaps xmm8, [rsp+140h+var_50] }
  return *(float *)&_XMM0;
}

/*
==============
Live_ConfirmNonMigrateableQuit
==============
*/
void Live_ConfirmNonMigrateableQuit(const int controllerIndex)
{
  s_confirmedUnmigrateableQuit |= 1 << controllerIndex;
}

/*
==============
Live_DebugSuckedAsHost
==============
*/

void __fastcall Live_DebugSuckedAsHost(double _XMM0_8)
{
  int Int; 
  int ControllerFromClient; 
  int CurrentDeviceIndex; 
  StatsSource ActiveStatsSource; 
  const DDLDef *def; 
  unsigned __int16 Short; 
  DDLState state; 
  DDLContext context; 

  Com_Printf(25, "Faking sucking as host.\n");
  __asm { vpxor   xmm0, xmm0, xmm0 }
  Int = 0;
  state.isValid = 0;
  state.offset = 0;
  __asm { vmovdqu xmmword ptr [rsp+78h+state.member], xmm0 }
  state.arrayIndex = -1;
  ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
  CurrentDeviceIndex = Live_GetCurrentDeviceIndex();
  ActiveStatsSource = LiveStorage_GetActiveStatsSource(ControllerFromClient);
  if ( CL_PlayerData_GetDDLBuffer(&context, ControllerFromClient, ActiveStatsSource, STATSGROUP_NONGAME) )
  {
    def = context.def;
    if ( Live_FindDeviceConnectionHistoryField(context.def, CurrentDeviceIndex, (const scr_string_t)scr_const.bandwidthTestCount, &state) )
      Int = DDL_GetInt(&state, &context);
    if ( Live_FindDeviceConnectionHistoryField(def, CurrentDeviceIndex, (const scr_string_t)scr_const.suckedAsHost, &state) )
    {
      Short = DDL_GetShort(&state, &context);
      if ( !DDL_SetShort(&state, &context, Short | (1 << ((Int - 1) % 16))) )
        Com_Printf(1, "Failed setting sucked as host quit.\n");
    }
  }
  else
  {
    Com_Printf(1, "Could not get player data buffer\n");
  }
}

/*
==============
Live_FindDeviceConnectionHistoryField
==============
*/
char Live_FindDeviceConnectionHistoryField(const DDLDef *def, const int deviceIndex, const scr_string_t fieldName, DDLState *state)
{
  unsigned int RawHash; 
  const char *v8; 
  const char *v10; 
  unsigned int v11; 
  const char *v12; 

  LiveStorage_InitializeDDLStateForStatsGroup(def, state, STATSGROUP_NONGAME);
  RawHash = j_SL_GetRawHash(scr_const.deviceConnectionHistory);
  if ( DDL_MoveToNameByHash(state, state, RawHash, NULL) )
  {
    if ( DDL_MoveToIndex(state, state, deviceIndex) )
    {
      v11 = j_SL_GetRawHash(fieldName);
      if ( DDL_MoveToNameByHash(state, state, v11, NULL) )
      {
        return 1;
      }
      else
      {
        v12 = SL_ConvertToString(scr_const.gameCount);
        Com_Printf(1, "Expected \"%s\" to be an int in playerdata.ddl\n", v12);
        return 0;
      }
    }
    else
    {
      v10 = SL_ConvertToString(scr_const.deviceConnectionHistory);
      Com_Printf(1, "Index %d was not available in %s in playerdata.ddl\n", (unsigned int)deviceIndex, v10);
      return 0;
    }
  }
  else
  {
    v8 = SL_ConvertToString(scr_const.deviceConnectionHistory);
    Com_Printf(1, "Expected \"%s\" to be in playerdata.ddl\n", v8);
    return 0;
  }
}

/*
==============
Live_FindPlayerConnectionHistoryField
==============
*/
char Live_FindPlayerConnectionHistoryField(const DDLDef *def, const scr_string_t fieldName, DDLState *state)
{
  unsigned int RawHash; 
  const char *v6; 
  unsigned int v7; 
  const char *v9; 

  LiveStorage_InitializeDDLStateForStatsGroup(def, state, STATSGROUP_NONGAME);
  RawHash = j_SL_GetRawHash(scr_const.playerConnectionHistory);
  if ( DDL_MoveToNameByHash(state, state, RawHash, NULL) )
  {
    v7 = j_SL_GetRawHash(fieldName);
    if ( DDL_MoveToNameByHash(state, state, v7, NULL) && DDL_StateIsLeaf(state) )
      return 1;
    v9 = SL_ConvertToString(fieldName);
    Com_Printf(1, "Expected \"%s\" to be an int in playerdata.ddl\n", v9);
  }
  else
  {
    v6 = SL_ConvertToString(scr_const.playerConnectionHistory);
    Com_Printf(1, "Expected \"%s\" to be in playerdata.ddl\n", v6);
  }
  return 0;
}

/*
==============
Live_ForceFlushPlayerData
==============
*/

void __fastcall Live_ForceFlushPlayerData(const int controllerIndex)
{
  LiveStorage_SaveStats(controllerIndex);
}

/*
==============
Live_GetCurrentDeviceIndex
==============
*/

unsigned __int8 __fastcall Live_GetCurrentDeviceIndex(double _XMM0_8)
{
  unsigned __int8 result; 
  int ControllerFromClient; 
  StatsSource ActiveStatsSource; 
  unsigned __int8 v5; 
  unsigned __int8 v6; 
  const DDLDef *def; 
  bool v8; 
  char *v9; 
  bdNetImpl *v10; 
  bdSingletonRegistryImpl *Instance; 
  unsigned __int8 i; 
  bool Bool; 
  unsigned int Int; 
  unsigned __int64 v15; 
  const char *String; 
  __int64 v17; 
  char *v18; 
  char v19; 
  char v20; 
  unsigned __int8 v22; 
  unsigned __int8 v23; 
  unsigned __int8 v24; 
  int v26; 
  StatsSource v27; 
  int v28; 
  const DDLDef *v29; 
  int v30; 
  int v31; 
  DDLState state; 
  char *UPnPDeviceDescriptor; 
  unsigned __int64 machineIDLow; 
  unsigned __int64 machineIDHigh; 
  DDLState v36; 
  DDLContext context; 
  __int64 v38; 
  DDLContext ddlContext; 
  bool v40; 
  int consoleExternalIP; 
  int consoleInternalIP; 
  unsigned __int64 val; 

  v38 = -2i64;
  consoleInternalIP = 0;
  consoleExternalIP = 0;
  result = s_deviceIndex;
  if ( s_deviceIndex != 0xFF )
    return result;
  if ( !Live_CanGetConsoleDetails() )
    return -1;
  machineIDHigh = 0i64;
  machineIDLow = 0i64;
  val = 0i64;
  if ( !Live_GetConsoleDetails(1, (unsigned __int8 *)&consoleInternalIP, (unsigned __int8 *)&consoleExternalIP, &machineIDHigh, &machineIDLow, &val) )
    return s_deviceIndex;
  state.isValid = 0;
  state.offset = 0;
  state.arrayIndex = -1;
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rsp+130h+state.member], xmm0
  }
  ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
  ActiveStatsSource = LiveStorage_GetActiveStatsSource(ControllerFromClient);
  if ( !CL_PlayerData_GetDDLBuffer(&context, ControllerFromClient, ActiveStatsSource, STATSGROUP_NONGAME) )
  {
    Com_Printf(1, "Could not get player data buffer\n");
    return -1;
  }
  v5 = -1;
  v6 = -1;
  def = context.def;
  v8 = Live_IsOnWifi();
  v40 = v8;
  if ( bdSingleton<bdNetImpl>::m_instance )
    goto LABEL_17;
  v9 = (char *)bdMemory::allocate(0x6020ui64);
  UPnPDeviceDescriptor = v9;
  if ( v9 )
    bdNetImpl::bdNetImpl((bdNetImpl *)v9);
  else
    v10 = NULL;
  bdSingleton<bdNetImpl>::m_instance = v10;
  if ( !v10 )
    goto LABEL_16;
  Instance = bdSingleton<bdSingletonRegistryImpl>::getInstance();
  if ( !bdSingletonRegistryImpl::add(Instance, bdSingleton<bdNetImpl>::destroyInstance) )
  {
    if ( bdSingleton<bdNetImpl>::m_instance )
      ((void (__fastcall *)(bdNetImpl *, __int64))bdSingleton<bdNetImpl>::m_instance->~bdNetImpl)(bdSingleton<bdNetImpl>::m_instance, 1i64);
    bdSingleton<bdNetImpl>::m_instance = NULL;
LABEL_16:
    DebugBreak();
  }
LABEL_17:
  UPnPDeviceDescriptor = (char *)bdNetImpl::getUPnPDeviceDescriptor(bdSingleton<bdNetImpl>::m_instance);
  for ( i = 0; i < 3u; ++i )
  {
    if ( !Live_FindDeviceConnectionHistoryField(def, i, (const scr_string_t)scr_const.onWifi, &state) )
      goto LABEL_38;
    Bool = DDL_GetBool(&state, &context);
    if ( v8 )
    {
      if ( !Bool )
        goto LABEL_38;
    }
    else if ( Bool )
    {
      goto LABEL_38;
    }
    if ( Live_FindDeviceConnectionHistoryField(def, i, (const scr_string_t)scr_const.device_id_high, &state) )
    {
      Int = DDL_GetInt(&state, &context);
      if ( Live_FindDeviceConnectionHistoryField(def, i, (const scr_string_t)scr_const.device_id_low, &state) )
      {
        v15 = ((unsigned __int64)Int << 32) | (unsigned int)DDL_GetInt(&state, &context);
        if ( Live_FindDeviceConnectionHistoryField(def, i, (const scr_string_t)scr_const.deviceDescriptor, &state) )
        {
          String = DDL_GetString(&state, &context);
          if ( v15 == val )
          {
            v17 = 0x7FFFFFFFi64;
            if ( !UPnPDeviceDescriptor && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0", *(_QWORD *)&state.isValid, *(_QWORD *)&state.arrayIndex, state.member, state.ddlDef) )
              __debugbreak();
            if ( !String && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
              __debugbreak();
            v18 = (char *)(UPnPDeviceDescriptor - String);
            do
            {
              v19 = String[(_QWORD)v18];
              v20 = *String++;
              if ( !v17-- )
                break;
              if ( v19 != v20 )
                goto LABEL_38;
            }
            while ( v19 );
            s_deviceIndex = i;
          }
        }
      }
    }
LABEL_38:
    if ( Live_FindDeviceConnectionHistoryField(def, i, (const scr_string_t)scr_const.deviceUseFrequency, &state) )
    {
      v22 = DDL_GetInt(&state, &context);
      v23 = v22;
      if ( v22 > v6 )
        v23 = v6;
      v24 = i;
      if ( v22 > v6 )
        v24 = v5;
      v5 = v24;
      if ( s_deviceIndex == i )
      {
        if ( v22 <= 0xFCu )
          v22 += 2;
        else
          v22 = -1;
      }
      else if ( v22 )
      {
        --v22;
      }
      v6 = v23;
      if ( !DDL_SetInt(&state, &context, v22) )
        Com_Printf(1, "Failed setting device use frequency.\n");
    }
    v8 = v40;
  }
  if ( v5 == 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_connection_history.cpp", 609, ASSERT_TYPE_ASSERT, "(leastFrequentlyUsedIndex != 0xFF)", (const char *)&queryFormat, "leastFrequentlyUsedIndex != UNKNOWN_DEVICE") )
    __debugbreak();
  if ( s_deviceIndex == 0xFF && v5 != 0xFF )
  {
    v36.isValid = 0;
    v36.offset = 0;
    v36.arrayIndex = -1;
    __asm
    {
      vpxor   xmm0, xmm0, xmm0
      vmovdqu xmmword ptr [rbp+57h+var_C8.member], xmm0
    }
    v26 = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
    v27 = LiveStorage_GetActiveStatsSource(v26);
    if ( CL_PlayerData_GetDDLBuffer(&ddlContext, v26, v27, STATSGROUP_NONGAME) )
    {
      v29 = ddlContext.def;
      v28 = v5;
      Live_FindDeviceConnectionHistoryField(ddlContext.def, v5, (const scr_string_t)scr_const.deviceUseFrequency, &v36);
      DDL_SetInt(&v36, &ddlContext, 0);
      Live_FindDeviceConnectionHistoryField(v29, v5, (const scr_string_t)scr_const.bandwidthTestCount, &v36);
      DDL_SetInt(&v36, &ddlContext, 0);
    }
    else
    {
      Com_Printf(1, "Could not get player data buffer\n");
      v28 = v5;
    }
    s_deviceIndex = v5;
    v30 = truncate_cast<unsigned int,unsigned __int64>(HIDWORD(val));
    v31 = truncate_cast<unsigned int,unsigned __int64>((unsigned int)val);
    Live_FindDeviceConnectionHistoryField(def, v28, (const scr_string_t)scr_const.device_id_high, &state);
    DDL_SetInt(&state, &context, v30);
    Live_FindDeviceConnectionHistoryField(def, v28, (const scr_string_t)scr_const.device_id_low, &state);
    DDL_SetInt(&state, &context, v31);
    Live_FindDeviceConnectionHistoryField(def, v28, (const scr_string_t)scr_const.onWifi, &state);
    DDL_SetBool(&state, &context, v40);
    Live_FindDeviceConnectionHistoryField(def, v28, (const scr_string_t)scr_const.deviceDescriptor, &state);
    DDL_SetString(&state, &context, UPnPDeviceDescriptor);
  }
  return s_deviceIndex;
}

/*
==============
Live_GetGameCount
==============
*/
int Live_GetGameCount(const int controllerIndex)
{
  StatsSource ActiveStatsSource; 
  DDLState state; 
  DDLContext context; 

  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rsp+78h+state.member], xmm0
  }
  state.isValid = 0;
  state.offset = 0;
  state.arrayIndex = -1;
  ActiveStatsSource = LiveStorage_GetActiveStatsSource(controllerIndex);
  if ( !CL_PlayerData_GetDDLBuffer(&context, controllerIndex, ActiveStatsSource, STATSGROUP_NONGAME) )
  {
    Com_Printf(1, "Could not get player data buffer\n");
    return 0;
  }
  if ( !Live_FindPlayerConnectionHistoryField(context.def, (const scr_string_t)scr_const.gameCount, &state) )
    return 0;
  return DDL_GetInt(&state, &context);
}

/*
==============
Live_GetMigrateableQuitRate
==============
*/
float Live_GetMigrateableQuitRate(const int controllerIndex)
{
  StatsSource ActiveStatsSource; 
  DDLState state; 
  DDLContext context; 

  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rsp+78h+state.member], xmm0
  }
  state.isValid = 0;
  state.offset = 0;
  state.arrayIndex = -1;
  ActiveStatsSource = LiveStorage_GetActiveStatsSource(controllerIndex);
  if ( CL_PlayerData_GetDDLBuffer(&context, controllerIndex, ActiveStatsSource, STATSGROUP_NONGAME) )
  {
    if ( Live_FindPlayerConnectionHistoryField(context.def, (const scr_string_t)scr_const.migrateableQuits, &state) )
    {
      __asm { vxorps  xmm0, xmm0, xmm0 }
      __popcnt(DDL_GetInt(&state, &context));
      __asm
      {
        vcvtsi2ss xmm0, xmm0, ecx
        vmulss  xmm0, xmm0, cs:__real@3d000000
      }
      return *(float *)&_XMM0;
    }
  }
  else
  {
    Com_Printf(1, "Could not get player data buffer\n");
  }
  __asm { vmovss  xmm0, cs:__real@3f800000 }
  return *(float *)&_XMM0;
}

/*
==============
Live_GetNonMigrateableQuitRate
==============
*/
float Live_GetNonMigrateableQuitRate(const int controllerIndex)
{
  StatsSource ActiveStatsSource; 
  DDLState state; 
  DDLContext context; 

  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rsp+78h+state.member], xmm0
  }
  state.isValid = 0;
  state.offset = 0;
  state.arrayIndex = -1;
  ActiveStatsSource = LiveStorage_GetActiveStatsSource(controllerIndex);
  if ( CL_PlayerData_GetDDLBuffer(&context, controllerIndex, ActiveStatsSource, STATSGROUP_NONGAME) )
  {
    if ( Live_FindPlayerConnectionHistoryField(context.def, (const scr_string_t)scr_const.nonMigrateableQuits, &state) )
    {
      __asm { vxorps  xmm0, xmm0, xmm0 }
      __popcnt(DDL_GetInt(&state, &context));
      __asm
      {
        vcvtsi2ss xmm0, xmm0, ecx
        vmulss  xmm0, xmm0, cs:__real@3d000000
      }
      return *(float *)&_XMM0;
    }
  }
  else
  {
    Com_Printf(1, "Could not get player data buffer\n");
  }
  __asm { vmovss  xmm0, cs:__real@3f800000 }
  return *(float *)&_XMM0;
}

/*
==============
Live_GetOverallQuitRate
==============
*/
float Live_GetOverallQuitRate(const int controllerIndex)
{
  int Int; 
  int v4; 
  StatsSource ActiveStatsSource; 
  const DDLDef *def; 
  DDLState state; 
  DDLContext context; 

  Int = 0;
  state.isValid = 0;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  state.offset = 0;
  v4 = 0;
  __asm { vmovdqu xmmword ptr [rsp+78h+state.member], xmm0 }
  state.arrayIndex = -1;
  ActiveStatsSource = LiveStorage_GetActiveStatsSource(controllerIndex);
  if ( CL_PlayerData_GetDDLBuffer(&context, controllerIndex, ActiveStatsSource, STATSGROUP_NONGAME) )
  {
    def = context.def;
    if ( Live_FindPlayerConnectionHistoryField(context.def, (const scr_string_t)scr_const.migrateableQuits, &state) )
      Int = DDL_GetInt(&state, &context);
    if ( Live_FindPlayerConnectionHistoryField(def, (const scr_string_t)scr_const.nonMigrateableQuits, &state) )
      v4 = DDL_GetInt(&state, &context);
    __asm { vxorps  xmm0, xmm0, xmm0 }
    __popcnt(Int | v4);
    __asm
    {
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm0, xmm0, cs:__real@3d000000
    }
  }
  else
  {
    Com_Printf(1, "Could not get player data buffer\n");
    __asm { vmovss  xmm0, cs:__real@3f800000 }
  }
  return *(float *)&_XMM0;
}

/*
==============
Live_GetSuckedAsHostRate
==============
*/

float __fastcall Live_GetSuckedAsHostRate(double _XMM0_8)
{
  int ControllerFromClient; 
  StatsSource ActiveStatsSource; 
  const DDLDef *def; 
  unsigned __int8 CurrentDeviceIndex; 
  DDLState state; 
  DDLContext context; 

  __asm { vpxor   xmm0, xmm0, xmm0 }
  state.isValid = 0;
  __asm { vmovdqu xmmword ptr [rsp+78h+state.member], xmm0 }
  state.offset = 0;
  state.arrayIndex = -1;
  ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
  ActiveStatsSource = LiveStorage_GetActiveStatsSource(ControllerFromClient);
  if ( CL_PlayerData_GetDDLBuffer(&context, ControllerFromClient, ActiveStatsSource, STATSGROUP_NONGAME) )
  {
    def = context.def;
    CurrentDeviceIndex = Live_GetCurrentDeviceIndex();
    if ( Live_FindDeviceConnectionHistoryField(def, CurrentDeviceIndex, (const scr_string_t)scr_const.suckedAsHost, &state) )
    {
      __asm { vxorps  xmm0, xmm0, xmm0 }
      __popcnt(DDL_GetShort(&state, &context));
      __asm
      {
        vcvtsi2ss xmm0, xmm0, ecx
        vmulss  xmm0, xmm0, cs:__real@3d800000
      }
      return *(float *)&_XMM0;
    }
  }
  else
  {
    Com_Printf(1, "Could not get player data buffer\n");
  }
  __asm { vmovss  xmm0, cs:__real@3f800000 }
  return *(float *)&_XMM0;
}

/*
==============
Live_HistoryPump
==============
*/
void Live_HistoryPump(const int controllerIndex)
{
  if ( Com_FrontEnd_IsInFrontEnd() && s_queuedDownloadRate >= 0 && s_queuedUploadRate >= 0 && Live_AddBandwidthSample(s_queuedDownloadRate, s_queuedUploadRate) )
  {
    s_queuedDownloadRate = -1;
    s_queuedUploadRate = -1;
  }
}

/*
==============
Live_IncrementGameCount
==============
*/
void Live_IncrementGameCount(const int controllerIndex)
{
  StatsSource ActiveStatsSource; 
  int Int; 
  DDLState state; 
  DDLContext context; 

  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rsp+78h+state.member], xmm0
  }
  state.isValid = 0;
  state.offset = 0;
  state.arrayIndex = -1;
  ActiveStatsSource = LiveStorage_GetActiveStatsSource(controllerIndex);
  if ( CL_PlayerData_GetDDLBuffer(&context, controllerIndex, ActiveStatsSource, STATSGROUP_NONGAME) )
  {
    if ( Live_FindPlayerConnectionHistoryField(context.def, (const scr_string_t)scr_const.gameCount, &state) )
    {
      Int = DDL_GetInt(&state, &context);
      if ( !DDL_SetInt(&state, &context, Int + 1) )
        Com_Printf(1, "Failed setting game count.\n");
    }
  }
  else
  {
    Com_Printf(1, "Could not get player data buffer\n");
  }
}

/*
==============
Live_QueueBandwidthSample
==============
*/
void Live_QueueBandwidthSample(int downloadRate, int uploadRate)
{
  s_queuedDownloadRate = downloadRate;
  s_queuedUploadRate = uploadRate;
}

/*
==============
Live_ShouldTrackConnectionHistory
==============
*/
bool Live_ShouldTrackConnectionHistory(LocalClientNum_t localClientNum)
{
  const dvar_t *v2; 
  const dvar_t *v3; 
  const dvar_t *v4; 

  if ( Com_FrontEndScene_IsActive() )
    return 0;
  v2 = DVARBOOL_onlinegame;
  if ( !DVARBOOL_onlinegame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "onlinegame") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( !v2->current.enabled )
    return 0;
  v3 = DVARBOOL_xblive_privatematch;
  if ( !DVARBOOL_xblive_privatematch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xblive_privatematch") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( v3->current.enabled )
    return 0;
  v4 = DVARBOOL_systemlink;
  if ( !DVARBOOL_systemlink && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "systemlink") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  return !v4->current.enabled;
}

/*
==============
Live_TrackMigrateableQuit
==============
*/
void Live_TrackMigrateableQuit(const int controllerIndex)
{
  StatsSource ActiveStatsSource; 
  int Int; 
  DDLState state; 
  DDLContext context; 

  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rsp+78h+state.member], xmm0
  }
  state.isValid = 0;
  state.offset = 0;
  state.arrayIndex = -1;
  ActiveStatsSource = LiveStorage_GetActiveStatsSource(controllerIndex);
  if ( CL_PlayerData_GetDDLBuffer(&context, controllerIndex, ActiveStatsSource, STATSGROUP_NONGAME) )
  {
    if ( ((unsigned __int8)(1 << controllerIndex) & s_confirmedUnmigrateableQuit) == 0 && Live_FindPlayerConnectionHistoryField(context.def, (const scr_string_t)scr_const.migrateableQuits, &state) )
    {
      Int = DDL_GetInt(&state, &context);
      if ( !DDL_SetInt(&state, &context, Int | 1) )
        Com_Printf(1, "Failed clearing migrateable quit.\n");
    }
  }
  else
  {
    Com_Printf(1, "Could not get player data buffer\n");
  }
}

/*
==============
Live_TrackMigrateableQuitBeginGame
==============
*/
void Live_TrackMigrateableQuitBeginGame(const int controllerIndex)
{
  StatsSource ActiveStatsSource; 
  int Int; 
  DDLState state; 
  DDLContext context; 

  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rsp+78h+state.member], xmm0
  }
  state.isValid = 0;
  state.offset = 0;
  state.arrayIndex = -1;
  ActiveStatsSource = LiveStorage_GetActiveStatsSource(controllerIndex);
  if ( CL_PlayerData_GetDDLBuffer(&context, controllerIndex, ActiveStatsSource, STATSGROUP_NONGAME) )
  {
    if ( Live_FindPlayerConnectionHistoryField(context.def, (const scr_string_t)scr_const.migrateableQuits, &state) )
    {
      Int = DDL_GetInt(&state, &context);
      if ( !DDL_SetInt(&state, &context, 2 * Int) )
        Com_Printf(1, "Failed setting migrateable quit.\n");
    }
  }
  else
  {
    Com_Printf(1, "Could not get player data buffer\n");
  }
}

/*
==============
Live_TrackNonMigrateableQuitBeginGame
==============
*/
void Live_TrackNonMigrateableQuitBeginGame(const int controllerIndex)
{
  StatsSource ActiveStatsSource; 
  int Int; 
  DDLState state; 
  DDLContext context; 

  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rsp+78h+state.member], xmm0
  }
  state.isValid = 0;
  state.offset = 0;
  state.arrayIndex = -1;
  ActiveStatsSource = LiveStorage_GetActiveStatsSource(controllerIndex);
  if ( CL_PlayerData_GetDDLBuffer(&context, controllerIndex, ActiveStatsSource, STATSGROUP_NONGAME) )
  {
    if ( Live_FindPlayerConnectionHistoryField(context.def, (const scr_string_t)scr_const.nonMigrateableQuits, &state) )
    {
      Int = DDL_GetInt(&state, &context);
      s_confirmedUnmigrateableQuit &= ~(1 << controllerIndex);
      if ( !DDL_SetInt(&state, &context, (2 * Int) | 1) )
        Com_Printf(1, "Failed setting non migrateable quit.\n");
    }
  }
  else
  {
    Com_Printf(1, "Could not get player data buffer\n");
  }
}

/*
==============
Live_TrackSuckedAsHost
==============
*/

void __fastcall Live_TrackSuckedAsHost(double _XMM0_8)
{
  int Int; 
  int ControllerFromClient; 
  int CurrentDeviceIndex; 
  StatsSource ActiveStatsSource; 
  const DDLDef *def; 
  unsigned __int16 Short; 
  DDLState state; 
  DDLContext context; 

  __asm { vpxor   xmm0, xmm0, xmm0 }
  Int = 0;
  state.isValid = 0;
  state.offset = 0;
  __asm { vmovdqu xmmword ptr [rsp+78h+state.member], xmm0 }
  state.arrayIndex = -1;
  ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
  CurrentDeviceIndex = Live_GetCurrentDeviceIndex();
  ActiveStatsSource = LiveStorage_GetActiveStatsSource(ControllerFromClient);
  if ( CL_PlayerData_GetDDLBuffer(&context, ControllerFromClient, ActiveStatsSource, STATSGROUP_NONGAME) )
  {
    def = context.def;
    if ( Live_FindDeviceConnectionHistoryField(context.def, CurrentDeviceIndex, (const scr_string_t)scr_const.bandwidthTestCount, &state) )
      Int = DDL_GetInt(&state, &context);
    if ( Live_FindDeviceConnectionHistoryField(def, CurrentDeviceIndex, (const scr_string_t)scr_const.suckedAsHost, &state) )
    {
      Short = DDL_GetShort(&state, &context);
      if ( !DDL_SetShort(&state, &context, Short | (1 << ((Int - 1) % 16))) )
        Com_Printf(1, "Failed setting sucked as host quit.\n");
    }
  }
  else
  {
    Com_Printf(1, "Could not get player data buffer\n");
  }
}

/*
==============
Live_TrackSuckedAsHostAddedBandwidthTest
==============
*/
void Live_TrackSuckedAsHostAddedBandwidthTest(int historyIndex)
{
  char v2; 
  int ControllerFromClient; 
  StatsSource ActiveStatsSource; 
  const DDLDef *def; 
  unsigned __int8 CurrentDeviceIndex; 
  unsigned __int16 Short; 
  DDLState state; 
  DDLContext context; 

  v2 = historyIndex;
  state.isValid = 0;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  state.offset = 0;
  __asm { vmovdqu xmmword ptr [rsp+78h+state.member], xmm0 }
  state.arrayIndex = -1;
  ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
  ActiveStatsSource = LiveStorage_GetActiveStatsSource(ControllerFromClient);
  if ( CL_PlayerData_GetDDLBuffer(&context, ControllerFromClient, ActiveStatsSource, STATSGROUP_NONGAME) )
  {
    def = context.def;
    CurrentDeviceIndex = Live_GetCurrentDeviceIndex();
    if ( Live_FindDeviceConnectionHistoryField(def, CurrentDeviceIndex, (const scr_string_t)scr_const.suckedAsHost, &state) )
    {
      Short = DDL_GetShort(&state, &context);
      if ( !DDL_SetShort(&state, &context, Short & ~(1 << v2)) )
        Com_Printf(1, "Failed setting sucked as host quit.\n");
    }
  }
  else
  {
    Com_Printf(1, "Could not get player data buffer\n");
  }
}

