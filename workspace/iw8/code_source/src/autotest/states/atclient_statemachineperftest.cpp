/*
==============
ATClient_StateMachinePerfTestUpdate
==============
*/

void __fastcall ATClient_StateMachinePerfTestUpdate(LocalClientNum_t localClientNum, int msec)
{
  ?ATClient_StateMachinePerfTestUpdate@@YAXW4LocalClientNum_t@@H@Z(localClientNum, msec);
}

/*
==============
ATClient_StateMachinePerfTestExit
==============
*/

void __fastcall ATClient_StateMachinePerfTestExit(LocalClientNum_t localClientNum)
{
  ?ATClient_StateMachinePerfTestExit@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
ATClient_StateMachinePerfTestReset
==============
*/

void __fastcall ATClient_StateMachinePerfTestReset(LocalClientNum_t localClientNum, const errorParm_t errorcode)
{
  ?ATClient_StateMachinePerfTestReset@@YAXW4LocalClientNum_t@@W4errorParm_t@@@Z(localClientNum, errorcode);
}

/*
==============
ATClient_StateMachinePerfTestTransition
==============
*/

bool __fastcall ATClient_StateMachinePerfTestTransition(LocalClientNum_t localClientNum, unsigned int *outNewState)
{
  return ?ATClient_StateMachinePerfTestTransition@@YA_NW4LocalClientNum_t@@AEAI@Z(localClientNum, outNewState);
}

/*
==============
ATClient_StateMachinePerfTestEnter
==============
*/

void __fastcall ATClient_StateMachinePerfTestEnter(LocalClientNum_t localClientNum)
{
  ?ATClient_StateMachinePerfTestEnter@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
ATClient_GetTimeInBatchSeconds
==============
*/
__int64 ATClient_GetTimeInBatchSeconds(const LocalClientNum_t localClientNum)
{
  __int64 v1; 

  v1 = localClientNum;
  if ( localClientNum < LOCAL_CLIENT_0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\states\\atclient_statemachineperftest.cpp", 89, ASSERT_TYPE_ASSERT, "(localClientNum >= 0)", (const char *)&queryFormat, "localClientNum >= 0") )
    __debugbreak();
  if ( (int)v1 >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\states\\atclient_statemachineperftest.cpp", 90, ASSERT_TYPE_ASSERT, "(localClientNum < LOCAL_CLIENT_COUNT)", (const char *)&queryFormat, "localClientNum < LOCAL_CLIENT_COUNT") )
    __debugbreak();
  return (unsigned int)((Sys_Milliseconds() - s_stateBatch[v1].timeStartMS) / 1000);
}

/*
==============
ATClient_PerfTestInternal_ResetState
==============
*/
void ATClient_PerfTestInternal_ResetState(const LocalClientNum_t localClientNum)
{
  __int64 v1; 

  v1 = localClientNum;
  if ( localClientNum < LOCAL_CLIENT_0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\states\\atclient_statemachineperftest.cpp", 179, ASSERT_TYPE_ASSERT, "(localClientNum >= 0)", (const char *)&queryFormat, "localClientNum >= 0") )
    __debugbreak();
  if ( (int)v1 >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\states\\atclient_statemachineperftest.cpp", 180, ASSERT_TYPE_ASSERT, "(localClientNum < LOCAL_CLIENT_COUNT)", (const char *)&queryFormat, "localClientNum < LOCAL_CLIENT_COUNT") )
    __debugbreak();
  memset_0(&s_state[v1], 0, sizeof(ATClient_StatePerfTest_t));
}

/*
==============
ATClient_PerfTest_StateFuncChangePosition
==============
*/
__int64 ATClient_PerfTest_StateFuncChangePosition(const LocalClientNum_t localClientNum)
{
  __int128 v1; 
  __int128 v2; 
  __int128 v3; 
  __int64 v4; 
  unsigned int v5; 
  __int64 v7; 
  const dvar_t *v8; 
  float v9; 
  double v10; 
  float v11; 
  int v12; 
  int tileIdY; 
  int tileIdX[3]; 
  vec3_t v15; 
  vec3_t v16; 
  vec3_t outPosition; 
  vec3_t outAngles; 
  vec3_t outMin; 
  vec3_t outMax; 
  __int128 v21; 
  __int128 v22; 
  __int128 v23; 

  v4 = localClientNum;
  ATClient_PrintPerf(localClientNum, " @CHANGE_POSITION\n");
  ATClient_NavGetLocalClientPosition((const LocalClientNum_t)v4, &outPosition, &outAngles);
  v5 = s_stateBatch[v4].samplePosIndex + 1;
  if ( ATClient_TraverseGetByIndex(v5, &outPosition, &outAngles) )
  {
    ATClient_PrintPerf((const LocalClientNum_t)v4, "requested %d sample position [%.0f,%.0f,%.0f] angles %.0f,%.0f\n", v5, outPosition.v[0], outPosition.v[1], outPosition.v[2], outAngles.v[1], outAngles.v[0]);
    v7 = v4;
    if ( ATClient_NavGetTileCollisionBounds((const LocalClientNum_t)v4, &outPosition, &outMin, &outMax, tileIdX, &tileIdY) )
    {
      v23 = v1;
      v22 = v2;
      v21 = v3;
      ATClient_PrintPerf((const LocalClientNum_t)v4, "collision tile %d,%d bounds [%.0f,%.0f] to [%.0f,%.0f], height [%.0f,-%.0f] %.0fx%.0fx%.0f\n", (unsigned int)tileIdX[0], (unsigned int)tileIdY, outMin.v[0], outMin.v[1], outMax.v[0], outMax.v[1], outMin.v[2], outMax.v[2], (float)(outMax.v[0] - outMin.v[0]), (float)(outMax.v[1] - outMin.v[1]), (float)(outMax.v[2] - outMin.v[2]));
    }
    else
    {
      ATClient_PrintPerf((const LocalClientNum_t)v4, "no collision tile, using noclip...\n");
      ATClient_NavSetNoClip((const LocalClientNum_t)v4, 1);
      *((_BYTE *)&s_state[v7] + 148) |= 0x10u;
    }
    v8 = DVARFLT_ATClient_PerfSampleTeleportHeightAdjustment;
    if ( !DVARFLT_ATClient_PerfSampleTeleportHeightAdjustment && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_PerfSampleTeleportHeightAdjustment") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v8);
    outPosition.v[2] = outPosition.v[2] + v8->current.value;
    outAngles.v[0] = 0.0;
    ATClient_PrintPerf((const LocalClientNum_t)v4, "teleport target [%.0f,%.0f,%.0f] angles %.0f,%.0f\n", outPosition.v[0], outPosition.v[1], outPosition.v[2], outAngles.v[1], 0i64);
    ATClient_SetPerfTestSafeties((const LocalClientNum_t)v4, 1);
    v15 = outAngles;
    v16 = outPosition;
    ATClient_NavTeleport((const LocalClientNum_t)v4, &v16, &v15);
    v9 = outPosition.v[2];
    *(double *)s_state[v7].pendingTeleportPos.v = *(double *)outPosition.v;
    v10 = *(double *)outAngles.v;
    s_state[v7].pendingTeleportPos.v[2] = v9;
    v11 = outAngles.v[2];
    *(double *)s_state[v7].pendingTeleportAngle.v = v10;
    s_state[v7].pendingTeleportAngle.v[2] = v11;
    v12 = Sys_Milliseconds();
    *((_BYTE *)&s_state[v7] + 148) |= 1u;
    s_state[v7].timeSinceTeleportMS = v12;
    return 2i64;
  }
  else
  {
    ATClient_PrintPerf((const LocalClientNum_t)v4, "failed to get next sample position %d, assuming exit\n", v5);
    return 6i64;
  }
}

/*
==============
ATClient_PerfTest_StateFuncTeleportWait
==============
*/
__int64 ATClient_PerfTest_StateFuncTeleportWait(const LocalClientNum_t localClientNum)
{
  __int128 v1; 
  __int64 v2; 
  __int64 v3; 
  float v5; 
  const dvar_t *v6; 
  float v7; 
  float v8; 
  const dvar_t *v9; 
  int integer; 
  int v11; 
  vec3_t outPosition; 
  vec3_t outAngles; 
  __int128 v14; 

  v2 = localClientNum;
  ATClient_PrintPerf(localClientNum, "@TELEPORT WAIT\n");
  ATClient_NavGetLocalClientPosition((const LocalClientNum_t)v2, &outPosition, &outAngles);
  v3 = v2;
  if ( (*((_BYTE *)&s_state[v2] + 148) & 1) == 0 )
  {
    ATClient_PrintPerf((const LocalClientNum_t)v2, "no teleport to wait for at [%.0f,%.0f,%.0f] wtf?\n", outPosition.v[0], outPosition.v[1], outPosition.v[2]);
    s_state[v3].timeSinceTeleportMS = 0;
    return 1i64;
  }
  v5 = s_state[v3].pendingTeleportPos.v[0];
  v6 = DVARFLT_ATClient_PerfSampleTeleport2dDeviation;
  v14 = v1;
  v7 = v5 - outPosition.v[0];
  v8 = s_state[v3].pendingTeleportPos.v[1] - outPosition.v[1];
  if ( !DVARFLT_ATClient_PerfSampleTeleport2dDeviation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_PerfSampleTeleport2dDeviation") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( (float)((float)(v8 * v8) + (float)(v7 * v7)) <= v6->current.value )
  {
    ATClient_PrintPerf((const LocalClientNum_t)v2, "teleport result [%.0f,%.0f,%.0f] deviation %.0f|%.0f\n", outPosition.v[0], outPosition.v[1], outPosition.v[2], v7, v8);
    ATClient_PrintPerf((const LocalClientNum_t)v2, "teleport angles - requested %.0fx%.0f  got %.0fx%.0f\n", s_state[v3].pendingTeleportAngle.v[1], s_state[v3].pendingTeleportAngle.v[0], outAngles.v[1], outAngles.v[0]);
    s_state[v3].stats.streamImageMemorySurplus = 0x7FFFFFFFi64;
    *(_QWORD *)&s_state[v3].timeSinceLastRecordingMS = 0i64;
    s_state[v3].stats.streamImageMemoryWanted = 0x7FFFFFFFi64;
    v11 = Sys_Milliseconds();
    *((_BYTE *)&s_state[v3] + 148) &= ~1u;
    s_state[v3].timeAtPositionMS = v11;
    ++s_stateBatch[v2].samplePosIndex;
    ATClient_PrintPerf((const LocalClientNum_t)v2, "@NOCLIP WAIT\n");
  }
  else
  {
    v9 = DVARINT_ATClient_PerfSampleTeleportWaitTimeMaxSeconds;
    if ( !DVARINT_ATClient_PerfSampleTeleportWaitTimeMaxSeconds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_PerfSampleTeleportWaitTimeMaxSeconds") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    integer = v9->current.integer;
    if ( (Sys_Milliseconds() - s_state[v3].timeSinceTeleportMS) / 1000 <= integer )
      return 2i64;
    ATClient_PrintPerf((const LocalClientNum_t)v2, "teleport timeout [%.0f,%.0f,%.0f] deviation %.0f|%.0f\n", outPosition.v[0], outPosition.v[1], outPosition.v[2], v7, v8);
  }
  return 3i64;
}

/*
==============
ATClient_PerfTryEventSampling
==============
*/
char ATClient_PerfTryEventSampling(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  __int64 v2; 
  char v3; 
  __m256i v4; 
  __int128 v5; 
  double v6; 
  unsigned __int64 streamImageMemoryWanted; 
  int v8; 
  int v9; 
  const dvar_t *v10; 
  int v11; 
  __m256i v12; 
  __int128 v13; 
  double v14; 
  signed __int64 v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  const char *v22; 
  bool v23; 
  unsigned __int64 v24; 
  unsigned int v25; 
  unsigned __int64 v26; 
  unsigned int v27; 
  unsigned __int64 v28; 
  unsigned int v29; 
  unsigned __int64 v30; 
  const char *v31; 
  unsigned int v32; 
  double streamImageStreamingQuality; 
  int v34; 
  const char *v35; 
  const char *v36; 
  const char *v37; 
  char *fmt; 
  char v39; 
  char v40; 
  int onGround; 
  int tileIdY; 
  int tileIdX; 
  __int64 v44; 
  const char *v45; 
  __int64 v46; 
  const char *AreaName; 
  const char *v48; 
  signed __int64 streamImageMemorySurplus; 
  signed __int64 v50; 
  vec3_t outPosition; 
  vec3_t outAngles; 
  ATClientPerfStats stats; 

  v1 = localClientNum;
  if ( localClientNum < LOCAL_CLIENT_0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\states\\atclient_statemachineperftest.cpp", 665, ASSERT_TYPE_ASSERT, "(localClientNum >= 0)", (const char *)&queryFormat, "localClientNum >= 0") )
    __debugbreak();
  if ( (int)v1 >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\states\\atclient_statemachineperftest.cpp", 666, ASSERT_TYPE_ASSERT, "(localClientNum < LOCAL_CLIENT_COUNT)", (const char *)&queryFormat, "localClientNum < LOCAL_CLIENT_COUNT") )
    __debugbreak();
  v2 = v1;
  v46 = v1;
  v3 = 0;
  v44 = v1;
  v39 = 0;
  v4 = *(__m256i *)&s_state[v1].stats.counts[1];
  *(__m256i *)&stats.renderFramerate = *(__m256i *)&s_state[v1].stats.renderFramerate;
  v5 = *(_OWORD *)&s_state[v1].stats.memory[2];
  *(__m256i *)&stats.counts[1] = v4;
  v6 = *(double *)&s_state[v1].stats.canStreamMore;
  *(_OWORD *)&stats.memory[2] = v5;
  *(double *)&stats.canStreamMore = v6;
  ATClient_PerfGetStats((const LocalClientNum_t)v1, &stats);
  streamImageMemoryWanted = s_state[v1].stats.streamImageMemoryWanted;
  if ( !streamImageMemoryWanted )
    LODWORD(streamImageMemoryWanted) = -LODWORD(s_state[v1].stats.streamImageMemorySurplus);
  if ( stats.streamImageMemoryWanted )
    v8 = stats.streamImageMemoryWanted;
  else
    v8 = -LODWORD(stats.streamImageMemorySurplus);
  if ( v8 == (_DWORD)streamImageMemoryWanted )
  {
    v9 = Sys_Milliseconds();
    v10 = DVARINT_ATClient_PerfSampleTimeNoChangeMaxSeconds;
    v11 = (v9 - s_state[v1].timeSinceLastRecordingMS) / 1000;
    if ( !DVARINT_ATClient_PerfSampleTimeNoChangeMaxSeconds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_PerfSampleTimeNoChangeMaxSeconds") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v10);
    if ( v11 < v10->current.integer )
    {
      v3 = 0;
    }
    else
    {
      ATClient_PrintPerf((const LocalClientNum_t)v1, "time w/o perf stat change %dsec exceeds limit, moving on...\n", (unsigned int)v11);
      v3 = 1;
      v39 = 1;
    }
  }
  else
  {
    v12 = *(__m256i *)&stats.counts[1];
    *(__m256i *)&s_state[v1].stats.renderFramerate = *(__m256i *)&stats.renderFramerate;
    v13 = *(_OWORD *)&stats.memory[2];
    *(__m256i *)&s_state[v1].stats.counts[1] = v12;
    v14 = *(double *)&stats.canStreamMore;
    *(_OWORD *)&s_state[v1].stats.memory[2] = v13;
    *(double *)&s_state[v1].stats.canStreamMore = v14;
    s_state[v1].timeSinceLastRecordingMS = Sys_Milliseconds();
  }
  if ( v8 == (_DWORD)streamImageMemoryWanted && !v3 )
    return 0;
  ATClient_PrintPerf((const LocalClientNum_t)v1, "recording sample (imageMem %zu)\n", s_state[v1].stats.streamImageMemoryWanted);
  AreaName = ATClient_PerfGetAreaName((const LocalClientNum_t)v1);
  ATClient_NavGetLocalClientPosition((const LocalClientNum_t)v1, &outPosition, &outAngles);
  v16 = s_state[v1].stats.streamImageMemoryWanted;
  v50 = v16;
  streamImageMemorySurplus = s_state[v1].stats.streamImageMemorySurplus;
  v17 = (float)streamImageMemorySurplus;
  if ( streamImageMemorySurplus < 0 )
  {
    v18 = (float)streamImageMemorySurplus;
    v17 = v18 + 1.8446744e19;
  }
  if ( v16 )
  {
    v19 = (float)v16;
    if ( v16 < 0 )
    {
      v21 = (float)v16;
      v19 = v21 + 1.8446744e19;
    }
    v20 = v19;
  }
  else
  {
    LODWORD(v19) = LODWORD(v17) ^ _xmm;
    v20 = 0.0;
  }
  v40 = *((_BYTE *)&s_state[v1] + 148);
  if ( v3 )
  {
    v22 = "final";
  }
  else
  {
    v22 = (char *)&queryFormat.fmt + 3;
    if ( (*((_BYTE *)&s_state[v1] + 148) & 0x20) != 0 )
      v22 = "timeout";
  }
  v23 = !s_state[v1].stats.canStreamMore;
  v24 = s_state[v1].stats.memory[3];
  v25 = s_state[v2].stats.counts[3];
  v26 = s_state[v2].stats.memory[2];
  v27 = s_state[v2].stats.counts[2];
  v28 = s_state[v2].stats.memory[1];
  v29 = s_state[v2].stats.counts[1];
  v45 = v22;
  onGround = s_state[v2].onGround;
  tileIdY = s_state[v2].tileIdY;
  v30 = s_state[v2].stats.memory[0];
  tileIdX = s_state[v2].tileIdX;
  v31 = (char *)&queryFormat.fmt + 3;
  if ( !v23 )
    v31 = "canStream";
  v32 = s_state[v2].stats.counts[0];
  v48 = v31;
  streamImageStreamingQuality = s_state[v44].stats.streamImageStreamingQuality;
  v34 = Sys_Milliseconds() - s_state[v44].timeAtPositionMS;
  v35 = (char *)&queryFormat.fmt + 3;
  v36 = (char *)&queryFormat.fmt + 3;
  if ( onGround == 2047 )
    v36 = "offGround";
  v37 = "moving";
  if ( (v40 & 0x10) != 0 )
    v35 = "noClip";
  if ( (v40 & 2) != 0 )
    v37 = (char *)&queryFormat.fmt + 3;
  LODWORD(fmt) = s_state[v44].numPositionRecordings;
  ATClient_CsvLine("%s, %d,%d,%d , %.0f,%.0f,%.0f, %0.f,%.0f, %d,  %zu,%zu, %.4f, %u,%zu, %u,%zu, %u,%zu, %u,%zu, %s,%s,%s, %d,%d, %s,%d, %s, %s, %.2f, %.2f \n", s_stateBatch[v46].clientUID, (unsigned int)s_stateBatch[v46].batchIndex, (unsigned int)s_stateBatch[v46].samplePosIndex, fmt, outPosition.v[0], outPosition.v[1], outPosition.v[2], outAngles.v[1], outAngles.v[0], v34, v50, streamImageMemorySurplus, streamImageStreamingQuality, v32, v30, v29, v28, v27, v26, v25, v24, v48, v37, v35, tileIdX, tileIdY, v36, onGround, AreaName, v45, (float)(v19 * 0.00000095367432), (float)(v20 - v17));
  ATClient_CsvFlush();
  ++s_state[v44].numPositionRecordings;
  s_state[v44].timeSinceLastRecordingMS = Sys_Milliseconds();
  return v39;
}

/*
==============
ATClient_PrintPerf
==============
*/
void ATClient_PrintPerf(const LocalClientNum_t localClientNum, const char *msg, ...)
{
  __int64 v3; 
  int v4; 
  size_t v5; 
  char *v6; 
  unsigned __int64 *v7; 
  __int64 v8; 
  unsigned __int64 v9; 
  char *fmt; 
  va_list ArgList; 
  int samplePosIndex; 
  int numPositionRecordings; 
  vec3_t outPosition; 
  vec3_t outAngles; 
  char dest[2048]; 
  va_list va; 

  va_start(va, msg);
  v3 = localClientNum;
  memset_0(dest, 0, sizeof(dest));
  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\states\\atclient_statemachineperftest.cpp", 772, ASSERT_TYPE_ASSERT, "(msg != nullptr)", (const char *)&queryFormat, "msg != nullptr") )
    __debugbreak();
  ATClient_NavGetLocalClientPosition((const LocalClientNum_t)v3, &outPosition, &outAngles);
  numPositionRecordings = s_state[v3].numPositionRecordings;
  samplePosIndex = s_stateBatch[v3].samplePosIndex;
  LODWORD(ArgList) = s_stateBatch[v3].batchIndex;
  LODWORD(fmt) = ATClient_GetTimeInBatchSeconds((const LocalClientNum_t)v3);
  v4 = Com_sprintf_truncate(dest, 0x800ui64, "PERF[%s:%d]:%d:%d:%d @ %.0f|%.0f ", s_stateBatch[v3].clientUID, fmt, ArgList, samplePosIndex, numPositionRecordings, outPosition.v[0], outPosition.v[1]);
  v5 = 2046i64 - v4;
  v6 = &dest[v4];
  v7 = j___local_stdio_printf_options();
  __stdio_common_vsprintf(*v7 | 2, v6, v5, msg, NULL, va);
  v8 = -1i64;
  do
    ++v8;
  while ( dest[v8] );
  if ( dest[v8 - 1] != 10 )
  {
    dest[v8] = 10;
    v9 = v8 + 1;
    if ( v9 >= 0x800 )
    {
      j___report_rangecheckfailure(dest);
      JUMPOUT(0x140232D09i64);
    }
    dest[v9] = 0;
  }
  Com_Printf(14, (const char *)&queryFormat, dest);
}

/*
==============
ATClient_StateMachinePerfTestEnter
==============
*/
void ATClient_StateMachinePerfTestEnter(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  __int64 v2; 
  const char *v3; 
  const char *MapName; 
  signed __int64 v5; 
  char v6; 
  __int64 v7; 
  char v8; 
  const dvar_t *v9; 
  __int64 v10; 
  const char *ClientID; 
  int v12; 
  int batchIndex; 
  const char *v14; 
  const dvar_t *v15; 
  unsigned int TimeInBatchSeconds; 

  v1 = localClientNum;
  if ( localClientNum < LOCAL_CLIENT_0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\states\\atclient_statemachineperftest.cpp", 430, ASSERT_TYPE_ASSERT, "(localClientNum >= 0)", (const char *)&queryFormat, "localClientNum >= 0") )
    __debugbreak();
  if ( (int)v1 >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\states\\atclient_statemachineperftest.cpp", 431, ASSERT_TYPE_ASSERT, "(localClientNum < LOCAL_CLIENT_COUNT)", (const char *)&queryFormat, "localClientNum < LOCAL_CLIENT_COUNT") )
    __debugbreak();
  v2 = 10i64;
  v3 = "mp_donetsk";
  MapName = ATClient_GetMapName();
  if ( !MapName && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  v5 = MapName - "mp_donetsk";
  do
  {
    v6 = v3[v5];
    v7 = v2;
    v8 = *v3++;
    --v2;
    if ( !v7 )
      break;
    if ( v6 != v8 )
      return;
  }
  while ( v6 );
  v9 = DVARBOOL_ATClient_AllowPerfTestBehavior;
  v10 = v1;
  s_stateBatch[v1].exitFromBatch = 1;
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_AllowPerfTestBehavior") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  if ( v9->current.enabled && ATClient_PerfTestReady((const LocalClientNum_t)v1) )
  {
    ClientID = ATClient_NavGetClientID((const LocalClientNum_t)v1);
    ++s_stateBatch[v10].batchIndex;
    s_stateBatch[v10].clientUID = ClientID;
    s_stateBatch[v10].samplePosIndex = -1;
    v12 = Sys_Milliseconds();
    batchIndex = s_stateBatch[v10].batchIndex;
    s_stateBatch[v10].timeStartMS = v12;
    s_stateBatch[v10].exitFromBatch = 0;
    v14 = ATClient_CsvFileName((const LocalClientNum_t)v1, batchIndex);
    ATClient_CsvInit(v14);
    ATClient_CsvLine("Client UID , Batch , Position , Sample , X,Y,Z , Yaw,Pitch , TimeAtPos , ImgMemWanted , ImgMemSurplus , StreamQuality , SKBI Terrain Mem , SKBI Terrain Count , SKBI Sound Mem , SKBI Sound Count , SKBI Tree Mem , SKBI Tree Count , SKBI CBM Mem , SKBI CBM Count , canStream , moving , noClip , Tile X , Tile Y , onGround , groundEntNum , areaName , changePosition , HUD MissingImgMem , HUD CombinedImgMem ");
    ATClient_CsvFlush();
    v15 = DVARINT_ATClient_PerfMode;
    if ( !DVARINT_ATClient_PerfMode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_PerfMode") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v15);
    ATCLient_TraverseInit(v15->current.integer == 1);
    if ( (int)v1 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\states\\atclient_statemachineperftest.cpp", 151, ASSERT_TYPE_ASSERT, "(localClientNum >= 0)", (const char *)&queryFormat, "localClientNum >= 0") )
      __debugbreak();
    if ( (int)v1 >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\states\\atclient_statemachineperftest.cpp", 152, ASSERT_TYPE_ASSERT, "(localClientNum < LOCAL_CLIENT_COUNT)", (const char *)&queryFormat, "localClientNum < LOCAL_CLIENT_COUNT") )
      __debugbreak();
    memset_0(&s_state[v1], 0, sizeof(ATClient_StatePerfTest_t));
    s_state[v1].ptState = ATCPT_STATE_INITIAL_WAIT;
    s_state[v1].timeAtPositionMS = Sys_Milliseconds();
    TimeInBatchSeconds = ATClient_GetTimeInBatchSeconds((const LocalClientNum_t)v1);
    ATClient_PrintPerf((const LocalClientNum_t)v1, "entering batch %d initial wait at %dsec, logged as %s ....\n", (unsigned int)s_stateBatch[v10].batchIndex, TimeInBatchSeconds, v14);
  }
}

/*
==============
ATClient_StateMachinePerfTestExit
==============
*/
void ATClient_StateMachinePerfTestExit(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  int batchIndex; 
  int TimeInBatchSeconds; 

  v1 = localClientNum;
  if ( localClientNum < LOCAL_CLIENT_0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\states\\atclient_statemachineperftest.cpp", 480, ASSERT_TYPE_ASSERT, "(localClientNum >= 0)", (const char *)&queryFormat, "localClientNum >= 0") )
    __debugbreak();
  if ( (int)v1 >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\states\\atclient_statemachineperftest.cpp", 481, ASSERT_TYPE_ASSERT, "(localClientNum < LOCAL_CLIENT_COUNT)", (const char *)&queryFormat, "localClientNum < LOCAL_CLIENT_COUNT") )
    __debugbreak();
  batchIndex = s_stateBatch[v1].batchIndex;
  if ( batchIndex > 0 )
  {
    TimeInBatchSeconds = ATClient_GetTimeInBatchSeconds((const LocalClientNum_t)v1);
    if ( TimeInBatchSeconds > 0 )
      ATClient_PrintPerf((const LocalClientNum_t)v1, "exiting %d after %dsec total.\n", (unsigned int)batchIndex, (unsigned int)TimeInBatchSeconds);
  }
  ATClient_CsvShutdown();
  ATClient_PerfTestInternal_ResetState((const LocalClientNum_t)v1);
}

/*
==============
ATClient_StateMachinePerfTestReset
==============
*/
void ATClient_StateMachinePerfTestReset(LocalClientNum_t localClientNum, const errorParm_t errorcode)
{
  __int64 v2; 
  int batchIndex; 
  int TimeInBatchSeconds; 
  char *fmt; 

  v2 = localClientNum;
  if ( localClientNum < LOCAL_CLIENT_0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\states\\atclient_statemachineperftest.cpp", 506, ASSERT_TYPE_ASSERT, "(localClientNum >= 0)", (const char *)&queryFormat, "localClientNum >= 0") )
    __debugbreak();
  if ( (int)v2 >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\states\\atclient_statemachineperftest.cpp", 507, ASSERT_TYPE_ASSERT, "(localClientNum < LOCAL_CLIENT_COUNT)", (const char *)&queryFormat, "localClientNum < LOCAL_CLIENT_COUNT") )
    __debugbreak();
  batchIndex = s_stateBatch[v2].batchIndex;
  if ( batchIndex > 0 )
  {
    TimeInBatchSeconds = ATClient_GetTimeInBatchSeconds((const LocalClientNum_t)v2);
    if ( TimeInBatchSeconds > 0 )
    {
      LODWORD(fmt) = TimeInBatchSeconds;
      ATClient_PrintPerf((const LocalClientNum_t)v2, "batch %d error reset (%d) after %dsec...\n", (unsigned int)batchIndex, (unsigned int)errorcode, fmt);
    }
  }
  ATClient_CsvShutdown();
  ATClient_PerfTestInternal_ResetState((const LocalClientNum_t)v2);
}

/*
==============
ATClient_StateMachinePerfTestTransition
==============
*/
char ATClient_StateMachinePerfTestTransition(LocalClientNum_t localClientNum, unsigned int *outNewState)
{
  __int64 v2; 
  int batchIndex; 
  int TimeInBatchSeconds; 

  v2 = localClientNum;
  if ( localClientNum < LOCAL_CLIENT_0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\states\\atclient_statemachineperftest.cpp", 526, ASSERT_TYPE_ASSERT, "(localClientNum >= 0)", (const char *)&queryFormat, "localClientNum >= 0") )
    __debugbreak();
  if ( (int)v2 >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\states\\atclient_statemachineperftest.cpp", 527, ASSERT_TYPE_ASSERT, "(localClientNum < LOCAL_CLIENT_COUNT)", (const char *)&queryFormat, "localClientNum < LOCAL_CLIENT_COUNT") )
    __debugbreak();
  if ( !s_stateBatch[v2].exitFromBatch )
    return 0;
  batchIndex = s_stateBatch[v2].batchIndex;
  if ( batchIndex > 0 )
  {
    TimeInBatchSeconds = ATClient_GetTimeInBatchSeconds((const LocalClientNum_t)v2);
    if ( TimeInBatchSeconds > 0 )
      ATClient_PrintPerf((const LocalClientNum_t)v2, "transitioning batch %d to exit after %dsec ....\n", (unsigned int)batchIndex, (unsigned int)TimeInBatchSeconds);
  }
  *outNewState = 0;
  return 1;
}

/*
==============
ATClient_StateMachinePerfTestUpdate
==============
*/
void ATClient_StateMachinePerfTestUpdate(LocalClientNum_t localClientNum, int msec)
{
  __int64 v2; 
  __int64 v4; 
  bool IsClientOutOfBounds; 
  __int64 v6; 
  bool IsClientAtRest; 
  bool IsClientInGulag; 
  bool IsNoClip; 
  int v10; 
  const dvar_t *v11; 
  int v12; 
  ATClient_PT_States_t v13; 
  bool v14; 
  char v15; 
  ATClient_PT_States_t ptState; 
  char v17; 
  bool v18; 
  int v19; 
  int v20; 
  const dvar_t *v21; 
  const dvar_t *v22; 
  int integer; 
  int v24; 
  char v25; 
  ATClient_PT_States_t v26; 
  int v27; 
  int samplePosIndex; 
  const dvar_t *v29; 
  const dvar_t *v30; 
  int v31; 
  int tileIdX; 
  int tileIdY; 
  vec3_t outPosition; 
  vec3_t outAngles; 
  vec3_t outMax; 
  vec3_t outMin; 

  v2 = localClientNum;
  if ( localClientNum < LOCAL_CLIENT_0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\states\\atclient_statemachineperftest.cpp", 556, ASSERT_TYPE_ASSERT, "(localClientNum >= 0)", (const char *)&queryFormat, "localClientNum >= 0") )
    __debugbreak();
  if ( (int)v2 >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\states\\atclient_statemachineperftest.cpp", 557, ASSERT_TYPE_ASSERT, "(localClientNum < LOCAL_CLIENT_COUNT)", (const char *)&queryFormat, "localClientNum < LOCAL_CLIENT_COUNT") )
    __debugbreak();
  if ( msec < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\states\\atclient_statemachineperftest.cpp", 558, ASSERT_TYPE_ASSERT, "(msec >= 0)", (const char *)&queryFormat, "msec >= 0") )
    __debugbreak();
  v4 = v2;
  if ( !s_stateBatch[v2].exitFromBatch )
  {
    s_stateBatch[v4].exitFromBatch = 0;
    if ( (int)v2 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\states\\atclient_statemachineperftest.cpp", 162, ASSERT_TYPE_ASSERT, "(localClientNum >= 0)", (const char *)&queryFormat, "localClientNum >= 0") )
      __debugbreak();
    if ( (int)v2 >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\states\\atclient_statemachineperftest.cpp", 163, ASSERT_TYPE_ASSERT, "(localClientNum < LOCAL_CLIENT_COUNT)", (const char *)&queryFormat, "localClientNum < LOCAL_CLIENT_COUNT") )
      __debugbreak();
    IsClientOutOfBounds = ATClient_NavIsClientOutOfBounds((const LocalClientNum_t)v2);
    v6 = v2;
    *((_BYTE *)&s_state[v6] + 148) &= ~4u;
    *((_BYTE *)&s_state[v6] + 148) |= 4 * IsClientOutOfBounds;
    s_state[v6].onGround = ATCliet_NavIsClientOnGround((const LocalClientNum_t)v2);
    IsClientAtRest = ATCliet_NavIsClientAtRest((const LocalClientNum_t)v2);
    *((_BYTE *)&s_state[v6] + 148) &= ~2u;
    *((_BYTE *)&s_state[v6] + 148) |= 2 * IsClientAtRest;
    IsClientInGulag = ATClient_NavIsClientInGulag((const LocalClientNum_t)v2);
    *((_BYTE *)&s_state[v6] + 148) &= ~8u;
    *((_BYTE *)&s_state[v6] + 148) |= 8 * IsClientInGulag;
    IsNoClip = ATClient_NavIsNoClip((const LocalClientNum_t)v2);
    *((_BYTE *)&s_state[v6] + 148) &= ~0x10u;
    *((_BYTE *)&s_state[v6] + 148) |= 16 * IsNoClip;
    v10 = Sys_Milliseconds();
    v11 = DVARINT_ATClient_PerfSampleTimeMaxSeconds;
    v12 = (v10 - s_state[v2].timeAtPositionMS) / 1000;
    if ( !DVARINT_ATClient_PerfSampleTimeMaxSeconds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_PerfSampleTimeMaxSeconds") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    v13 = ATCPT_STATE_INITIAL_WAIT;
    v14 = v12 < v11->current.integer;
    v15 = 0;
    ptState = s_state[v6].ptState;
    if ( !v14 )
      v15 = 32;
    v17 = 0;
    *((_BYTE *)&s_state[v6] + 148) = *((_BYTE *)&s_state[v6] + 148) & 0xDF | v15;
    if ( (unsigned int)(ptState - 3) <= 2 )
      v17 = ATClient_PerfTryEventSampling((const LocalClientNum_t)v2);
    switch ( ptState )
    {
      case ATCPT_STATE_INITIAL_WAIT:
        v18 = ATClient_PerfTestReady((const LocalClientNum_t)v2);
        v19 = Sys_Milliseconds();
        v20 = v19;
        if ( v18 )
        {
          if ( s_initTimeMS == -1 )
          {
            ATClient_PrintPerf((const LocalClientNum_t)v2, "initial wait - setting time at %dsec ..\n", (unsigned int)(v19 / 1000));
            s_initTimeMS = v20;
          }
          v21 = DVARINT_ATClient_PerfProbeInitialWaitSeconds;
          if ( !DVARINT_ATClient_PerfProbeInitialWaitSeconds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_PerfProbeInitialWaitSeconds") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v21);
          if ( v20 >= s_initTimeMS + 1000 * v21->current.integer )
          {
            v22 = DVARINT_ATClient_PerfProbeSampleIndexStart;
            if ( !DVARINT_ATClient_PerfProbeSampleIndexStart && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_PerfProbeSampleIndexStart") )
              __debugbreak();
            Dvar_CheckFrontendServerThread(v22);
            integer = v22->current.integer;
            if ( integer < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\states\\atclient_statemachineperftest.cpp", 213, ASSERT_TYPE_ASSERT, "(startIndex >= 0)", (const char *)&queryFormat, "startIndex >= 0") )
              __debugbreak();
            v24 = v20 - s_initTimeMS;
            s_stateBatch[v4].samplePosIndex = integer - 1;
            ATClient_PrintPerf((const LocalClientNum_t)v2, "initial wait - ends after %dsec, starting at %d ..\n", (unsigned int)(v24 / 1000), (unsigned int)integer);
            v13 = ATCPT_STATE_CHANGE_POSITION;
          }
          s_state[v6].ptState = v13;
        }
        else
        {
          s_initTimeMS = v19;
          s_state[v6].ptState = ATCPT_STATE_INITIAL_WAIT;
        }
        goto LABEL_60;
      case ATCPT_STATE_CHANGE_POSITION:
        s_state[v6].ptState = ATClient_PerfTest_StateFuncChangePosition((const LocalClientNum_t)v2);
        goto LABEL_60;
      case ATCPT_STATE_TELEPORT_WAIT:
        s_state[v6].ptState = ATClient_PerfTest_StateFuncTeleportWait((const LocalClientNum_t)v2);
        goto LABEL_60;
      case ATCPT_STATE_NOCLIP_WAIT:
        if ( !ATClient_NavIsNoClip((const LocalClientNum_t)v2) )
          goto LABEL_47;
        ATClient_NavGetLocalClientPosition((const LocalClientNum_t)v2, &outPosition, &outAngles);
        if ( ATClient_NavGetTileCollisionBounds((const LocalClientNum_t)v2, &outPosition, &outMin, &outMax, &tileIdX, &tileIdY) )
        {
          ATClient_PrintPerf((const LocalClientNum_t)v2, "have collision tile, no longer using noclip...\n");
          ATClient_NavSetNoClip((const LocalClientNum_t)v2, 0);
          s_state[v6].tileIdX = tileIdX;
          s_state[v6].tileIdY = tileIdY;
LABEL_47:
          s_state[v6].ptState = ATCPT_STATE_DROP_WAIT;
        }
        else
        {
          ATClient_PrintPerf((const LocalClientNum_t)v2, "waiting for collision tile, still using noclip...\n");
          s_state[v6].ptState = ATCPT_STATE_NOCLIP_WAIT;
        }
LABEL_60:
        if ( (int)v2 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\states\\atclient_statemachineperftest.cpp", 112, ASSERT_TYPE_ASSERT, "(localClientNum >= 0)", (const char *)&queryFormat, "localClientNum >= 0") )
          __debugbreak();
        if ( (int)v2 >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\states\\atclient_statemachineperftest.cpp", 113, ASSERT_TYPE_ASSERT, "(localClientNum < LOCAL_CLIENT_COUNT)", (const char *)&queryFormat, "localClientNum < LOCAL_CLIENT_COUNT") )
          __debugbreak();
        samplePosIndex = s_stateBatch[v4].samplePosIndex;
        if ( samplePosIndex > ATCLient_TraverseGetIndexMax() )
          goto LABEL_81;
        v29 = DVARINT_ATClient_PerfProbeSampleCountMax;
        if ( !DVARINT_ATClient_PerfProbeSampleCountMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_PerfProbeSampleCountMax") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v29);
        if ( samplePosIndex > v29->current.integer )
          goto LABEL_81;
        if ( (int)v2 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\states\\atclient_statemachineperftest.cpp", 97, ASSERT_TYPE_ASSERT, "(localClientNum >= 0)", (const char *)&queryFormat, "localClientNum >= 0") )
          __debugbreak();
        if ( (int)v2 >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\states\\atclient_statemachineperftest.cpp", 98, ASSERT_TYPE_ASSERT, "(localClientNum < LOCAL_CLIENT_COUNT)", (const char *)&queryFormat, "localClientNum < LOCAL_CLIENT_COUNT") )
          __debugbreak();
        v30 = DVARINT_ATClient_PerfProbeTimeMaxSeconds;
        if ( !DVARINT_ATClient_PerfProbeTimeMaxSeconds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_PerfProbeTimeMaxSeconds") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v30);
        v31 = v30->current.integer;
        if ( (int)ATClient_GetTimeInBatchSeconds((const LocalClientNum_t)v2) > v31 )
LABEL_81:
          s_stateBatch[v4].exitFromBatch = 1;
        break;
      case ATCPT_STATE_DROP_WAIT:
        ATClient_PrintPerf((const LocalClientNum_t)v2, "@DROP WAIT\n");
        ATClient_CutParachute((const LocalClientNum_t)v2);
        ATClient_PrintPerf((const LocalClientNum_t)v2, "@SAMPLING begin ....\n");
        s_state[v6].timeSinceLastRecordingMS = Sys_Milliseconds();
        s_state[v6].ptState = ATCPT_STATE_SAMPLE_WAIT;
        goto LABEL_60;
      case ATCPT_STATE_SAMPLE_WAIT:
        v25 = *((_BYTE *)&s_state[v6] + 148);
        if ( (v25 & 8) != 0 )
        {
          ATClient_PrintPerf((const LocalClientNum_t)v2, "stuck in gulag, moving on...\n");
          v26 = ATCPT_STATE_CHANGE_POSITION;
        }
        else if ( (v25 & 4) != 0 )
        {
          ATClient_PrintPerf((const LocalClientNum_t)v2, "out of bounds in restricted area, moving on...\n");
          v26 = ATCPT_STATE_CHANGE_POSITION;
        }
        else if ( (v25 & 0x20) != 0 )
        {
          v27 = Sys_Milliseconds();
          ATClient_PrintPerf((const LocalClientNum_t)v2, "recording time %dsec exceeds limit, moving on...\n", (unsigned int)((v27 - s_state[v6].timeAtPositionMS) / 1000));
          ATClient_PrintPerf((const LocalClientNum_t)v2, "@SAMPLING time out\n");
          v26 = ATCPT_STATE_CHANGE_POSITION;
        }
        else
        {
          v26 = ATCPT_STATE_SAMPLE_WAIT;
        }
        s_state[v6].ptState = v26;
        if ( v17 )
          s_state[v6].ptState = ATCPT_STATE_CHANGE_POSITION;
        goto LABEL_60;
      case ATCPT_STATE_TERMINATE:
        ATClient_PrintPerf((const LocalClientNum_t)v2, "@TERMINATE\n");
        goto LABEL_59;
      default:
LABEL_59:
        s_stateBatch[v4].exitFromBatch = 1;
        goto LABEL_60;
    }
  }
}

