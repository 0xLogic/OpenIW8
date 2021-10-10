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
float ComputeStandardDeviation(float *data, int count, float *avg_out)
{
  __int64 v4; 
  __int64 v6; 
  int v7; 
  __m128 v8; 
  __m128 v9; 
  __m128 v10; 
  __m128 v11; 
  __int64 v12; 
  __m128 v15; 
  __int64 v16; 
  __int64 v17; 
  float *v18; 
  unsigned __int64 v19; 
  __m128 v20; 
  __m128 v21; 
  float v22; 
  float v23; 
  __m128 v24; 
  __m128 v25; 
  __int64 v26; 
  __m128 v27; 
  __m128 v28; 
  int v29; 
  __m128 v30; 
  __m128 v31; 
  __m128 v34; 
  float *v35; 
  unsigned __int64 v36; 
  float v37; 
  __m128 v38; 
  float v39; 
  float v40; 
  __m128 v41; 

  v4 = count;
  if ( count <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_connection_history.cpp", 792, ASSERT_TYPE_ASSERT, "(count > 0)", (const char *)&queryFormat, "count > 0") )
    __debugbreak();
  v6 = 0i64;
  v7 = 0;
  v8 = 0i64;
  v9 = 0i64;
  if ( (int)v4 > 0 && (unsigned int)v4 >= 8 )
  {
    v10 = 0i64;
    v11 = 0i64;
    v12 = 0i64;
    do
    {
      v10 = _mm128_add_ps(v10, *(__m128 *)&data[v12]);
      v11 = _mm128_add_ps(v11, *(__m128 *)&data[v12 + 4]);
      v12 += 8i64;
      v7 += 8;
    }
    while ( v12 < (int)v4 - (int)v4 % 8 );
    _XMM1 = _mm128_add_ps(v11, v10);
    __asm { vmovhlps xmm0, xmm1, xmm1 }
    v15 = _mm128_add_ps(_XMM0, _XMM1);
    v15.m128_f32[0] = v15.m128_f32[0] + _mm_shuffle_ps(v15, v15, 245).m128_f32[0];
    v9 = v15;
  }
  v16 = v7;
  v17 = v4;
  if ( v16 < v4 )
  {
    if ( v4 - v16 >= 4 )
    {
      v18 = &data[v16 + 2];
      v19 = ((unsigned __int64)(v4 - v16 - 4) >> 2) + 1;
      v16 += 4 * v19;
      do
      {
        v20 = v9;
        v20.m128_f32[0] = (float)((float)((float)(v9.m128_f32[0] + *(v18 - 2)) + *(v18 - 1)) + *v18) + v18[1];
        v9 = v20;
        v18 += 4;
        --v19;
      }
      while ( v19 );
    }
    for ( ; v16 < v4; ++v16 )
    {
      v21 = v9;
      v21.m128_f32[0] = v9.m128_f32[0] + data[v16];
      v9 = v21;
    }
  }
  v24 = (__m128)LODWORD(FLOAT_1_0);
  v22 = 1.0 / (float)(int)v4;
  v24.m128_f32[0] = v22 * v9.m128_f32[0];
  v23 = v22 * v9.m128_f32[0];
  v25 = _mm_shuffle_ps(v24, v24, 0);
  if ( avg_out )
    *avg_out = v24.m128_f32[0];
  LODWORD(v26) = 0;
  if ( (int)v4 > 0 && (unsigned int)v4 >= 8 )
  {
    v27 = 0i64;
    v28 = 0i64;
    v29 = v4 - (int)v4 % 8;
    do
    {
      v30 = _mm128_sub_ps(*(__m128 *)&data[v6], v25);
      v27 = _mm128_add_ps(_mm128_mul_ps(v30, v30), v27);
      v31 = _mm128_sub_ps(*(__m128 *)&data[v6 + 4], v25);
      LODWORD(v26) = v26 + 8;
      v6 += 8i64;
      v28 = _mm128_add_ps(_mm128_mul_ps(v31, v31), v28);
    }
    while ( v6 < v29 );
    _XMM1 = _mm128_add_ps(v28, v27);
    __asm { vmovhlps xmm0, xmm1, xmm1 }
    v34 = _mm128_add_ps(_XMM0, _XMM1);
    v34.m128_f32[0] = v34.m128_f32[0] + _mm_shuffle_ps(v34, v34, 245).m128_f32[0];
    v8 = v34;
  }
  v26 = (int)v26;
  if ( (int)v26 < v17 )
  {
    if ( v17 - (int)v26 >= 4 )
    {
      v35 = &data[(int)v26 + 2];
      v36 = ((unsigned __int64)(v17 - (int)v26 - 4) >> 2) + 1;
      v26 = (int)v26 + 4 * v36;
      do
      {
        v37 = *(v35 - 2);
        v35 += 4;
        v38 = v8;
        v38.m128_f32[0] = (float)((float)((float)(v8.m128_f32[0] + (float)((float)(v37 - v23) * (float)(v37 - v23))) + (float)((float)(*(v35 - 5) - v23) * (float)(*(v35 - 5) - v23))) + (float)((float)(*(v35 - 4) - v23) * (float)(*(v35 - 4) - v23))) + (float)((float)(*(v35 - 3) - v23) * (float)(*(v35 - 3) - v23));
        v8 = v38;
        --v36;
      }
      while ( v36 );
    }
    for ( ; v26 < v17; v8 = v41 )
    {
      v39 = data[v26++] - v23;
      v40 = v39 * v39;
      v41 = v8;
      v41.m128_f32[0] = v8.m128_f32[0] + v40;
    }
  }
  return fsqrt(v22 * v8.m128_f32[0]);
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
  *(_OWORD *)&state.member = _XMM0;
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
  *(_OWORD *)&v22.member = _XMM0;
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
  *(_OWORD *)&state.member = _XMM0;
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

  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&state.member = _XMM0;
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

float __fastcall Live_ComputeMinUploadBandwidthProbability(double uploadRate, double _XMM1_8)
{
  int v3; 
  int ControllerFromClient; 
  StatsSource ActiveStatsSource; 
  const DDLDef *def; 
  int CurrentDeviceIndex; 
  int v10; 
  unsigned __int16 Short; 
  __int64 v13; 
  int v14; 
  int Int; 
  __int128 v16; 
  float v17; 
  unsigned int v18; 
  float v19; 
  float v21; 
  float v22; 
  float avg_out; 
  DDLState state; 
  DDLState toState; 
  DDLContext context; 
  float data[16]; 

  state.isValid = 0;
  __asm { vpxor   xmm1, xmm1, xmm1 }
  v3 = 0;
  state.arrayIndex = -1;
  state.offset = 0;
  *(_OWORD *)&state.member = _XMM1;
  _XMM8 = *(_OWORD *)&uploadRate;
  ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
  ActiveStatsSource = LiveStorage_GetActiveStatsSource(ControllerFromClient);
  if ( CL_PlayerData_GetDDLBuffer(&context, ControllerFromClient, ActiveStatsSource, STATSGROUP_NONGAME) )
  {
    def = context.def;
    CurrentDeviceIndex = Live_GetCurrentDeviceIndex();
    if ( Live_FindDeviceConnectionHistoryField(def, CurrentDeviceIndex, (const scr_string_t)scr_const.bandwidthTestCount, &state) && (v10 = DDL_GetInt(&state, &context), v10 > 0) )
    {
      Short = 0;
      if ( v10 > 16 )
        v10 = 16;
      if ( Live_FindDeviceConnectionHistoryField(def, CurrentDeviceIndex, (const scr_string_t)scr_const.suckedAsHost, &state) )
        Short = DDL_GetShort(&state, &context);
      if ( Live_FindDeviceConnectionHistoryField(def, CurrentDeviceIndex, (const scr_string_t)scr_const.bandwidthUp, &state) )
      {
        _XMM6 = 0i64;
        v13 = 0i64;
        v14 = 1;
        do
        {
          __asm { vpxor   xmm0, xmm0, xmm0 }
          toState.isValid = 0;
          toState.offset = 0;
          toState.arrayIndex = -1;
          *(_OWORD *)&toState.member = *(_OWORD *)&uploadRate;
          DDL_MoveToIndex(&state, &toState, v3);
          Int = DDL_GetInt(&toState, &context);
          if ( (Short & (unsigned __int16)v14) != 0 )
          {
            v17 = 0.0;
          }
          else
          {
            v16 = 0i64;
            *(float *)&v16 = (float)Int;
            *(_OWORD *)&uploadRate = v16;
            v17 = *(float *)&v16 * 16384.0;
          }
          data[v13++] = v17;
          v14 = __ROL4__(v14, 1);
          ++v3;
        }
        while ( v13 < v10 );
        v18 = 1;
        v19 = ComputeStandardDeviation(data, v10, &avg_out);
        if ( v19 > 0.0 )
        {
          v21 = (float)(*(float *)&_XMM8 - avg_out) / v19;
          if ( v21 < 0.0 )
            v18 = -1;
          v22 = (float)(COERCE_FLOAT(LODWORD(v21) & _xmm) * 0.23164189) + 1.0;
          *(float *)&_XMM0 = 0.5 - (float)((float)((float)(1.0 - (float)(expf_0((float)(COERCE_FLOAT(LODWORD(v21) & _xmm) * COERCE_FLOAT(LODWORD(v21) & _xmm)) * -0.5) * (float)((float)((float)((float)((float)((float)((float)((float)((float)((float)(1.0 / v22) * 1.0614054) - 1.4531521) * (float)(1.0 / v22)) + 1.4214138) * (float)(1.0 / v22)) - 0.28449672) * (float)(1.0 / v22)) + 0.25482959) * (float)(1.0 / v22)))) * _mm_cvtepi32_ps((__m128i)v18).m128_f32[0]) * 0.5);
        }
        else
        {
          __asm
          {
            vcmpless xmm1, xmm8, [rsp+140h+avg_out]
            vblendvps xmm0, xmm6, xmm0, xmm1
          }
        }
      }
      else
      {
        LODWORD(_XMM0) = 0;
      }
    }
    else
    {
      Com_Printf(1, "Could not compute bandwidth probability.  No data.\n");
      LODWORD(_XMM0) = 0;
    }
  }
  else
  {
    Com_Printf(1, "Could not get player data buffer\n");
    LODWORD(_XMM0) = 0;
  }
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
  *(_OWORD *)&state.member = _XMM0;
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
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&state.member = _XMM0;
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
    __asm { vpxor   xmm0, xmm0, xmm0 }
    *(_OWORD *)&v36.member = _XMM0;
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

  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&state.member = _XMM0;
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

  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&state.member = _XMM0;
  state.isValid = 0;
  state.offset = 0;
  state.arrayIndex = -1;
  ActiveStatsSource = LiveStorage_GetActiveStatsSource(controllerIndex);
  if ( !CL_PlayerData_GetDDLBuffer(&context, controllerIndex, ActiveStatsSource, STATSGROUP_NONGAME) )
  {
    Com_Printf(1, "Could not get player data buffer\n");
    return FLOAT_1_0;
  }
  if ( !Live_FindPlayerConnectionHistoryField(context.def, (const scr_string_t)scr_const.migrateableQuits, &state) )
    return FLOAT_1_0;
  return (float)(int)__popcnt(DDL_GetInt(&state, &context)) * 0.03125;
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

  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&state.member = _XMM0;
  state.isValid = 0;
  state.offset = 0;
  state.arrayIndex = -1;
  ActiveStatsSource = LiveStorage_GetActiveStatsSource(controllerIndex);
  if ( !CL_PlayerData_GetDDLBuffer(&context, controllerIndex, ActiveStatsSource, STATSGROUP_NONGAME) )
  {
    Com_Printf(1, "Could not get player data buffer\n");
    return FLOAT_1_0;
  }
  if ( !Live_FindPlayerConnectionHistoryField(context.def, (const scr_string_t)scr_const.nonMigrateableQuits, &state) )
    return FLOAT_1_0;
  return (float)(int)__popcnt(DDL_GetInt(&state, &context)) * 0.03125;
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
  *(_OWORD *)&state.member = _XMM0;
  state.arrayIndex = -1;
  ActiveStatsSource = LiveStorage_GetActiveStatsSource(controllerIndex);
  if ( CL_PlayerData_GetDDLBuffer(&context, controllerIndex, ActiveStatsSource, STATSGROUP_NONGAME) )
  {
    def = context.def;
    if ( Live_FindPlayerConnectionHistoryField(context.def, (const scr_string_t)scr_const.migrateableQuits, &state) )
      Int = DDL_GetInt(&state, &context);
    if ( Live_FindPlayerConnectionHistoryField(def, (const scr_string_t)scr_const.nonMigrateableQuits, &state) )
      v4 = DDL_GetInt(&state, &context);
    return (float)(int)__popcnt(Int | v4) * 0.03125;
  }
  else
  {
    Com_Printf(1, "Could not get player data buffer\n");
    return FLOAT_1_0;
  }
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
  *(_OWORD *)&state.member = _XMM0;
  state.offset = 0;
  state.arrayIndex = -1;
  ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
  ActiveStatsSource = LiveStorage_GetActiveStatsSource(ControllerFromClient);
  if ( !CL_PlayerData_GetDDLBuffer(&context, ControllerFromClient, ActiveStatsSource, STATSGROUP_NONGAME) )
  {
    Com_Printf(1, "Could not get player data buffer\n");
    return FLOAT_1_0;
  }
  def = context.def;
  CurrentDeviceIndex = Live_GetCurrentDeviceIndex();
  if ( !Live_FindDeviceConnectionHistoryField(def, CurrentDeviceIndex, (const scr_string_t)scr_const.suckedAsHost, &state) )
    return FLOAT_1_0;
  return (float)(int)__popcnt(DDL_GetShort(&state, &context)) * 0.0625;
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

  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&state.member = _XMM0;
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

  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&state.member = _XMM0;
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

  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&state.member = _XMM0;
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

  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&state.member = _XMM0;
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
  *(_OWORD *)&state.member = _XMM0;
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
  *(_OWORD *)&state.member = _XMM0;
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

