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
  __int64 v4; 
  unsigned int v6; 
  const dvar_t *v41; 
  float v57; 
  float v59; 
  int v60; 
  int *tileIdX; 
  int *tileIdXa; 
  int *tileIdXb; 
  int *tileIdY; 
  int *tileIdYa; 
  int *tileIdYb; 
  __int64 v67; 
  double v68; 
  __int64 v69; 
  __int64 v70; 
  double v71; 
  double v72; 
  double v73; 
  double v74; 
  double v75; 
  double v76; 
  int v77; 
  int v78[3]; 
  vec3_t v79; 
  vec3_t v80; 
  vec3_t outPosition; 
  vec3_t outAngles; 
  vec3_t outMin; 
  vec3_t outMax; 

  v4 = localClientNum;
  ATClient_PrintPerf(localClientNum, " @CHANGE_POSITION\n");
  ATClient_NavGetLocalClientPosition((const LocalClientNum_t)v4, &outPosition, &outAngles);
  _R14 = 0x140000000ui64;
  v6 = s_stateBatch[v4].samplePosIndex + 1;
  if ( ATClient_TraverseGetByIndex(v6, &outPosition, &outAngles) )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+30h+outAngles]
      vmovss  xmm1, dword ptr [rbp+30h+outAngles+4]
      vmovss  xmm2, dword ptr [rbp+30h+outPosition+8]
      vmovss  xmm3, dword ptr [rbp+30h+outPosition]
      vmovss  xmm4, dword ptr [rbp+30h+outPosition+4]
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rsp+130h+var_F8], xmm0
      vcvtss2sd xmm1, xmm1, xmm1
      vmovsd  [rsp+130h+var_100], xmm1
      vcvtss2sd xmm2, xmm2, xmm2
      vcvtss2sd xmm3, xmm3, xmm3
      vcvtss2sd xmm4, xmm4, xmm4
      vmovsd  [rsp+130h+tileIdY], xmm2
      vmovq   r9, xmm3
      vmovsd  [rsp+130h+tileIdX], xmm4
    }
    ATClient_PrintPerf((const LocalClientNum_t)v4, "requested %d sample position [%.0f,%.0f,%.0f] angles %.0f,%.0f\n", v6, _R9, tileIdX, tileIdY, v67, v70);
    _RDI = v4;
    if ( ATClient_NavGetTileCollisionBounds((const LocalClientNum_t)v4, &outPosition, &outMin, &outMax, v78, &v77) )
    {
      __asm
      {
        vmovss  xmm4, dword ptr [rbp+30h+outMax+8]
        vmovss  xmm5, dword ptr [rbp+30h+outMin+8]
        vmovss  xmm1, dword ptr [rbp+30h+outMax]
        vmovss  xmm2, dword ptr [rbp+30h+outMin]
        vmovaps [rsp+130h+var_20], xmm6
        vmovss  xmm6, dword ptr [rbp+30h+outMax+4]
        vsubss  xmm0, xmm4, xmm5
        vmovaps [rsp+130h+var_30], xmm8
        vcvtss2sd xmm4, xmm4, xmm4
        vcvtss2sd xmm5, xmm5, xmm5
        vmovaps [rsp+130h+var_40], xmm9
        vcvtss2sd xmm9, xmm0, xmm0
        vsubss  xmm0, xmm6, dword ptr [rbp+30h+outMin+4]
        vmovsd  [rsp+130h+var_D0], xmm9
        vcvtss2sd xmm8, xmm0, xmm0
        vmovsd  [rsp+130h+var_D8], xmm8
        vsubss  xmm0, xmm1, xmm2
        vcvtss2sd xmm3, xmm0, xmm0
        vmovsd  [rsp+130h+var_E0], xmm3
        vmovsd  [rsp+130h+var_E8], xmm4
        vmovsd  [rsp+130h+var_F0], xmm5
        vcvtss2sd xmm0, xmm6, xmm6
        vmovss  xmm6, dword ptr [rbp+30h+outMin+4]
        vmovsd  [rsp+130h+var_F8], xmm0
        vcvtss2sd xmm1, xmm1, xmm1
        vmovsd  [rsp+130h+var_100], xmm1
        vcvtss2sd xmm2, xmm2, xmm2
        vcvtss2sd xmm6, xmm6, xmm6
        vmovsd  [rsp+130h+tileIdY], xmm6
        vmovsd  [rsp+130h+tileIdX], xmm2
      }
      ATClient_PrintPerf((const LocalClientNum_t)v4, "collision tile %d,%d bounds [%.0f,%.0f] to [%.0f,%.0f], height [%.0f,-%.0f] %.0fx%.0fx%.0f\n", (unsigned int)v78[0], (unsigned int)v77, *(double *)&tileIdXa, *(double *)&tileIdYa, v68, v71, v72, v73, v74, v75, v76);
      __asm
      {
        vmovaps xmm9, [rsp+130h+var_40]
        vmovaps xmm8, [rsp+130h+var_30]
        vmovaps xmm6, [rsp+130h+var_20]
      }
    }
    else
    {
      ATClient_PrintPerf((const LocalClientNum_t)v4, "no collision tile, using noclip...\n");
      ATClient_NavSetNoClip((const LocalClientNum_t)v4, 1);
      *((_BYTE *)&s_state[_RDI] + 148) |= 0x10u;
    }
    v41 = DVARFLT_ATClient_PerfSampleTeleportHeightAdjustment;
    if ( !DVARFLT_ATClient_PerfSampleTeleportHeightAdjustment && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_PerfSampleTeleportHeightAdjustment") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v41);
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+30h+outPosition+8]
      vaddss  xmm1, xmm0, dword ptr [rsi+28h]
      vmovss  xmm4, dword ptr [rbp+30h+outAngles+4]
      vmovss  xmm3, dword ptr [rbp+30h+outPosition+4]
      vmovss  xmm2, dword ptr [rbp+30h+outPosition]
      vxorps  xmm0, xmm0, xmm0
      vmovsd  [rsp+130h+var_100], xmm0
      vcvtss2sd xmm4, xmm4, xmm4
      vcvtss2sd xmm3, xmm3, xmm3
      vcvtss2sd xmm2, xmm2, xmm2
      vcvtss2sd xmm5, xmm1, xmm1
      vmovsd  [rsp+130h+tileIdY], xmm4
      vmovq   r9, xmm3
      vmovq   r8, xmm2
      vmovsd  [rsp+130h+tileIdX], xmm5
      vmovss  dword ptr [rbp+30h+outPosition+8], xmm1
      vmovss  dword ptr [rbp+30h+outAngles], xmm0
    }
    ATClient_PrintPerf((const LocalClientNum_t)v4, "teleport target [%.0f,%.0f,%.0f] angles %.0f,%.0f\n", _R8, _R9, tileIdXb, tileIdYb, v69);
    ATClient_SetPerfTestSafeties((const LocalClientNum_t)v4, 1);
    __asm
    {
      vmovsd  xmm0, qword ptr [rbp+30h+outAngles]
      vmovsd  [rbp+30h+var_B0], xmm0
      vmovsd  xmm0, qword ptr [rbp+30h+outPosition]
    }
    v79.v[2] = outAngles.v[2];
    __asm { vmovsd  [rbp+30h+var_A0], xmm0 }
    v80.v[2] = outPosition.v[2];
    ATClient_NavTeleport((const LocalClientNum_t)v4, &v80, &v79);
    __asm { vmovsd  xmm0, qword ptr [rbp+30h+outPosition] }
    v57 = outPosition.v[2];
    __asm
    {
      vmovsd  qword ptr [rdi+r14+89B80F8h], xmm0
      vmovsd  xmm0, qword ptr [rbp+30h+outAngles]
    }
    s_state[_RDI].pendingTeleportPos.v[2] = v57;
    v59 = outAngles.v[2];
    __asm { vmovsd  qword ptr [rdi+r14+89B8104h], xmm0 }
    s_state[_RDI].pendingTeleportAngle.v[2] = v59;
    v60 = Sys_Milliseconds();
    *((_BYTE *)&s_state[_RDI] + 148) |= 1u;
    s_state[_RDI].timeSinceTeleportMS = v60;
    return 2i64;
  }
  else
  {
    ATClient_PrintPerf((const LocalClientNum_t)v4, "failed to get next sample position %d, assuming exit\n", v6);
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
  __int64 v4; 
  __int64 result; 
  char v25; 
  char v26; 
  const dvar_t *v27; 
  int integer; 
  int v59; 
  char *fmt; 
  char *fmta; 
  char *fmtb; 
  char *fmtc; 
  __int64 v66; 
  __int64 v67; 
  __int64 v68; 
  __int64 v69; 
  __int64 v70; 
  vec3_t outPosition; 
  vec3_t outAngles; 

  v4 = localClientNum;
  ATClient_PrintPerf(localClientNum, "@TELEPORT WAIT\n");
  ATClient_NavGetLocalClientPosition((const LocalClientNum_t)v4, &outPosition, &outAngles);
  _RDI = v4;
  _RBP = 0x140000000ui64;
  if ( (*((_BYTE *)&s_state[v4] + 148) & 1) == 0 )
  {
    __asm
    {
      vmovss  xmm3, dword ptr [rsp+0C8h+outPosition+4]
      vmovss  xmm2, dword ptr [rsp+0C8h+outPosition]
      vmovss  xmm0, dword ptr [rsp+0C8h+outPosition+8]
      vcvtss2sd xmm3, xmm3, xmm3
      vcvtss2sd xmm2, xmm2, xmm2
      vcvtss2sd xmm0, xmm0, xmm0
      vmovq   r9, xmm3
      vmovq   r8, xmm2
      vmovsd  [rsp+0C8h+fmt], xmm0
    }
    ATClient_PrintPerf((const LocalClientNum_t)v4, "no teleport to wait for at [%.0f,%.0f,%.0f] wtf?\n", _R8, _R9, fmt);
    s_state[_RDI].timeSinceTeleportMS = 0;
    return 1i64;
  }
  __asm { vmovss  xmm0, dword ptr [rdi+rbp+89B80F8h] }
  _RBX = DVARFLT_ATClient_PerfSampleTeleport2dDeviation;
  __asm
  {
    vmovaps [rsp+0C8h+var_38], xmm6
    vmovaps [rsp+0C8h+var_48], xmm7
    vmovaps [rsp+0C8h+var_58], xmm8
    vsubss  xmm6, xmm0, dword ptr [rsp+0C8h+outPosition]
    vmovss  xmm0, dword ptr [rdi+rbp+89B80FCh]
    vsubss  xmm7, xmm0, dword ptr [rsp+0C8h+outPosition+4]
    vmulss  xmm2, xmm7, xmm7
    vmulss  xmm1, xmm6, xmm6
    vaddss  xmm8, xmm2, xmm1
  }
  if ( !DVARFLT_ATClient_PerfSampleTeleport2dDeviation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_PerfSampleTeleport2dDeviation") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vcomiss xmm8, dword ptr [rbx+28h]
    vmovaps xmm8, [rsp+0C8h+var_58]
  }
  if ( v25 | v26 )
  {
    __asm
    {
      vmovss  xmm3, dword ptr [rsp+0C8h+outPosition+4]
      vmovss  xmm2, dword ptr [rsp+0C8h+outPosition]
      vmovss  xmm4, dword ptr [rsp+0C8h+outPosition+8]
      vcvtss2sd xmm0, xmm7, xmm7
      vmovsd  [rsp+0C8h+var_98], xmm0
      vcvtss2sd xmm3, xmm3, xmm3
      vcvtss2sd xmm2, xmm2, xmm2
      vcvtss2sd xmm1, xmm6, xmm6
      vcvtss2sd xmm4, xmm4, xmm4
      vmovsd  [rsp+0C8h+var_A0], xmm1
      vmovq   r9, xmm3
      vmovq   r8, xmm2
      vmovsd  [rsp+0C8h+fmt], xmm4
    }
    ATClient_PrintPerf((const LocalClientNum_t)v4, "teleport result [%.0f,%.0f,%.0f] deviation %.0f|%.0f\n", _R8, _R9, fmtb, v67, v70);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+0C8h+outAngles]
      vmovss  xmm3, dword ptr [rdi+rbp+89B8104h]
      vmovss  xmm2, dword ptr [rdi+rbp+89B8108h]
      vmovss  xmm1, dword ptr [rsp+0C8h+outAngles+4]
      vcvtss2sd xmm0, xmm0, xmm0
      vcvtss2sd xmm3, xmm3, xmm3
      vcvtss2sd xmm2, xmm2, xmm2
      vcvtss2sd xmm1, xmm1, xmm1
      vmovsd  [rsp+0C8h+var_A0], xmm0
      vmovq   r9, xmm3
      vmovq   r8, xmm2
      vmovsd  [rsp+0C8h+fmt], xmm1
    }
    ATClient_PrintPerf((const LocalClientNum_t)v4, "teleport angles - requested %.0fx%.0f  got %.0fx%.0f\n", _R8, _R9, fmtc, v68);
    s_state[_RDI].stats.streamImageMemorySurplus = 0x7FFFFFFFi64;
    *(_QWORD *)&s_state[_RDI].timeSinceLastRecordingMS = 0i64;
    s_state[_RDI].stats.streamImageMemoryWanted = 0x7FFFFFFFi64;
    v59 = Sys_Milliseconds();
    *((_BYTE *)&s_state[_RDI] + 148) &= ~1u;
    s_state[_RDI].timeAtPositionMS = v59;
    ++s_stateBatch[v4].samplePosIndex;
    ATClient_PrintPerf((const LocalClientNum_t)v4, "@NOCLIP WAIT\n");
    goto LABEL_14;
  }
  v27 = DVARINT_ATClient_PerfSampleTeleportWaitTimeMaxSeconds;
  if ( !DVARINT_ATClient_PerfSampleTeleportWaitTimeMaxSeconds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_PerfSampleTeleportWaitTimeMaxSeconds") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v27);
  integer = v27->current.integer;
  if ( (Sys_Milliseconds() - s_state[_RDI].timeSinceTeleportMS) / 1000 > integer )
  {
    __asm
    {
      vmovss  xmm3, dword ptr [rsp+0C8h+outPosition+4]
      vmovss  xmm2, dword ptr [rsp+0C8h+outPosition]
      vmovss  xmm4, dword ptr [rsp+0C8h+outPosition+8]
      vcvtss2sd xmm0, xmm7, xmm7
      vmovsd  [rsp+0C8h+var_98], xmm0
      vcvtss2sd xmm3, xmm3, xmm3
      vcvtss2sd xmm2, xmm2, xmm2
      vcvtss2sd xmm1, xmm6, xmm6
      vcvtss2sd xmm4, xmm4, xmm4
      vmovsd  [rsp+0C8h+var_A0], xmm1
      vmovq   r9, xmm3
      vmovq   r8, xmm2
      vmovsd  [rsp+0C8h+fmt], xmm4
    }
    ATClient_PrintPerf((const LocalClientNum_t)v4, "teleport timeout [%.0f,%.0f,%.0f] deviation %.0f|%.0f\n", _R8, _R9, fmta, v66, v69);
LABEL_14:
    result = 3i64;
    goto LABEL_15;
  }
  result = 2i64;
LABEL_15:
  __asm
  {
    vmovaps xmm6, [rsp+0C8h+var_38]
    vmovaps xmm7, [rsp+0C8h+var_48]
  }
  return result;
}

/*
==============
ATClient_PerfTryEventSampling
==============
*/
char ATClient_PerfTryEventSampling(const LocalClientNum_t localClientNum)
{
  __int64 v4; 
  char v7; 
  unsigned __int64 streamImageMemoryWanted; 
  int v13; 
  int v14; 
  const dvar_t *v15; 
  int v16; 
  unsigned __int64 v20; 
  signed __int64 v21; 
  const char *v32; 
  bool v33; 
  unsigned __int64 v34; 
  unsigned int v35; 
  unsigned __int64 v36; 
  unsigned int v37; 
  unsigned __int64 v38; 
  unsigned int v39; 
  unsigned __int64 v40; 
  const char *v41; 
  unsigned int v43; 
  int v47; 
  int v56; 
  const char *v57; 
  const char *v58; 
  const char *v61; 
  int v62; 
  char *fmt; 
  double v67; 
  double v68; 
  double v69; 
  double v70; 
  double v71; 
  double v72; 
  double v73; 
  double v74; 
  char v75; 
  char v76; 
  int onGround; 
  int tileIdY; 
  int tileIdX; 
  __int64 v80; 
  const char *v81; 
  __int64 v82; 
  const char *AreaName; 
  const char *v84; 
  signed __int64 streamImageMemorySurplus; 
  signed __int64 v86; 
  vec3_t outPosition; 
  vec3_t outAngles; 
  ATClientPerfStats stats; 

  v4 = localClientNum;
  if ( localClientNum < LOCAL_CLIENT_0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\states\\atclient_statemachineperftest.cpp", 665, ASSERT_TYPE_ASSERT, "(localClientNum >= 0)", (const char *)&queryFormat, "localClientNum >= 0") )
    __debugbreak();
  if ( (int)v4 >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\states\\atclient_statemachineperftest.cpp", 666, ASSERT_TYPE_ASSERT, "(localClientNum < LOCAL_CLIENT_COUNT)", (const char *)&queryFormat, "localClientNum < LOCAL_CLIENT_COUNT") )
    __debugbreak();
  _R13 = v4;
  _R12 = 0x140000000ui64;
  v82 = v4;
  v7 = 0;
  v80 = _R13 * 152;
  v75 = 0;
  __asm
  {
    vmovups ymm0, ymmword ptr rva s_state.stats.renderFramerate[r12+r13]
    vmovups ymm1, ymmword ptr (rva s_state.stats.counts+4)[r12+r13]
    vmovups ymmword ptr [rsp+248h+stats.renderFramerate], ymm0
    vmovups xmm0, xmmword ptr (rva s_state.stats.memory+10h)[r12+r13]
    vmovups ymmword ptr [rsp+248h+stats.counts+4], ymm1
    vmovsd  xmm1, qword ptr rva s_state.stats.canStreamMore[r12+r13]
    vmovups xmmword ptr [rsp+248h+stats.memory+10h], xmm0
    vmovsd  qword ptr [rsp+248h+stats.canStreamMore], xmm1
  }
  ATClient_PerfGetStats((const LocalClientNum_t)v4, &stats);
  streamImageMemoryWanted = s_state[v4].stats.streamImageMemoryWanted;
  if ( !streamImageMemoryWanted )
    LODWORD(streamImageMemoryWanted) = -LODWORD(s_state[v4].stats.streamImageMemorySurplus);
  if ( stats.streamImageMemoryWanted )
    v13 = stats.streamImageMemoryWanted;
  else
    v13 = -LODWORD(stats.streamImageMemorySurplus);
  if ( v13 == (_DWORD)streamImageMemoryWanted )
  {
    v14 = Sys_Milliseconds();
    v15 = DVARINT_ATClient_PerfSampleTimeNoChangeMaxSeconds;
    v16 = (v14 - s_state[v4].timeSinceLastRecordingMS) / 1000;
    if ( !DVARINT_ATClient_PerfSampleTimeNoChangeMaxSeconds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_PerfSampleTimeNoChangeMaxSeconds") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v15);
    if ( v16 < v15->current.integer )
    {
      v7 = 0;
    }
    else
    {
      ATClient_PrintPerf((const LocalClientNum_t)v4, "time w/o perf stat change %dsec exceeds limit, moving on...\n", (unsigned int)v16);
      v7 = 1;
      v75 = 1;
    }
  }
  else
  {
    __asm
    {
      vmovups ymm0, ymmword ptr [rsp+248h+stats.renderFramerate]
      vmovups ymm1, ymmword ptr [rsp+248h+stats.counts+4]
      vmovups ymmword ptr rva s_state.stats.renderFramerate[r12+r13], ymm0
      vmovups xmm0, xmmword ptr [rsp+248h+stats.memory+10h]
      vmovups ymmword ptr (rva s_state.stats.counts+4)[r12+r13], ymm1
      vmovsd  xmm1, qword ptr [rsp+248h+stats.canStreamMore]
      vmovups xmmword ptr (rva s_state.stats.memory+10h)[r12+r13], xmm0
      vmovsd  qword ptr rva s_state.stats.canStreamMore[r12+r13], xmm1
    }
    s_state[v4].timeSinceLastRecordingMS = Sys_Milliseconds();
  }
  if ( v13 == (_DWORD)streamImageMemoryWanted && !v7 )
    return 0;
  v20 = s_state[v4].stats.streamImageMemoryWanted;
  __asm
  {
    vmovaps [rsp+248h+var_38], xmm6
    vmovaps [rsp+248h+var_48], xmm7
    vmovaps [rsp+248h+var_58], xmm8
  }
  ATClient_PrintPerf((const LocalClientNum_t)v4, "recording sample (imageMem %zu)\n", v20);
  AreaName = ATClient_PerfGetAreaName((const LocalClientNum_t)v4);
  ATClient_NavGetLocalClientPosition((const LocalClientNum_t)v4, &outPosition, &outAngles);
  v21 = s_state[v4].stats.streamImageMemoryWanted;
  v86 = v21;
  streamImageMemorySurplus = s_state[v4].stats.streamImageMemorySurplus;
  __asm
  {
    vmovss  xmm2, cs:__real@5f800000
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rcx
  }
  if ( streamImageMemorySurplus < 0 )
    __asm { vaddss  xmm0, xmm0, xmm2 }
  if ( v21 )
  {
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, rax
    }
    if ( v21 < 0 )
      __asm { vaddss  xmm1, xmm1, xmm2 }
    __asm { vmovaps xmm2, xmm1 }
  }
  else
  {
    __asm
    {
      vxorps  xmm1, xmm0, cs:__xmm@80000000800000008000000080000000
      vxorps  xmm2, xmm2, xmm2
    }
  }
  v76 = *((_BYTE *)&s_state[v4] + 148);
  __asm
  {
    vmulss  xmm1, xmm1, cs:__real@35800000
    vsubss  xmm0, xmm2, xmm0
    vcvtss2sd xmm7, xmm0, xmm0
    vcvtss2sd xmm8, xmm1, xmm1
  }
  if ( v7 )
  {
    v32 = "final";
  }
  else
  {
    v32 = (char *)&queryFormat.fmt + 3;
    if ( (*((_BYTE *)&s_state[v4] + 148) & 0x20) != 0 )
      v32 = "timeout";
  }
  v33 = !s_state[v4].stats.canStreamMore;
  v34 = s_state[v4].stats.memory[3];
  v35 = s_state[_R13].stats.counts[3];
  v36 = s_state[_R13].stats.memory[2];
  v37 = s_state[_R13].stats.counts[2];
  v38 = s_state[_R13].stats.memory[1];
  v39 = s_state[_R13].stats.counts[1];
  v81 = v32;
  onGround = s_state[_R13].onGround;
  tileIdY = s_state[_R13].tileIdY;
  v40 = s_state[_R13].stats.memory[0];
  tileIdX = s_state[_R13].tileIdX;
  v41 = (char *)&queryFormat.fmt + 3;
  if ( !v33 )
    v41 = "canStream";
  _RCX = 0x140000000ui64;
  v43 = s_state[_R13].stats.counts[0];
  v84 = v41;
  _RAX = v80;
  __asm
  {
    vmovss  xmm6, dword ptr [rax+rcx+89B80A8h]
    vcvtss2sd xmm6, xmm6, xmm6
  }
  v47 = Sys_Milliseconds();
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+248h+outAngles]
    vmovss  xmm1, dword ptr [rsp+248h+outAngles+4]
    vmovss  xmm2, dword ptr [rsp+248h+outPosition+8]
    vmovss  xmm3, dword ptr [rsp+248h+outPosition+4]
    vmovss  xmm4, dword ptr [rsp+248h+outPosition]
    vmovsd  [rsp+248h+var_148], xmm7
    vmovsd  [rsp+248h+var_150], xmm8
    vcvtss2sd xmm0, xmm0, xmm0
    vcvtss2sd xmm1, xmm1, xmm1
    vcvtss2sd xmm2, xmm2, xmm2
  }
  v56 = v47 - *(int *)((char *)&s_state[0].timeAtPositionMS + v80);
  v57 = (char *)&queryFormat.fmt + 3;
  v58 = (char *)&queryFormat.fmt + 3;
  __asm
  {
    vcvtss2sd xmm3, xmm3, xmm3
    vcvtss2sd xmm4, xmm4, xmm4
  }
  if ( onGround == 2047 )
    v58 = "offGround";
  v61 = "moving";
  if ( (v76 & 0x10) != 0 )
    v57 = "noClip";
  if ( (v76 & 2) != 0 )
    v61 = (char *)&queryFormat.fmt + 3;
  __asm
  {
    vmovsd  [rsp+248h+var_1E0], xmm6
    vmovsd  [rsp+248h+var_200], xmm0
    vmovsd  [rsp+248h+var_208], xmm1
    vmovsd  [rsp+248h+var_210], xmm2
    vmovsd  [rsp+248h+var_218], xmm3
    vmovsd  [rsp+248h+var_220], xmm4
  }
  LODWORD(fmt) = *(int *)((char *)&s_state[0].numPositionRecordings + v80);
  ATClient_CsvLine("%s, %d,%d,%d , %.0f,%.0f,%.0f, %0.f,%.0f, %d,  %zu,%zu, %.4f, %u,%zu, %u,%zu, %u,%zu, %u,%zu, %s,%s,%s, %d,%d, %s,%d, %s, %s, %.2f, %.2f \n", s_stateBatch[v82].clientUID, (unsigned int)s_stateBatch[v82].batchIndex, (unsigned int)s_stateBatch[v82].samplePosIndex, fmt, v67, v68, v69, v70, v71, v56, v86, streamImageMemorySurplus, v72, v43, v40, v39, v38, v37, v36, v35, v34, v84, v61, v57, tileIdX, tileIdY, v58, onGround, AreaName, v81, v73, v74);
  ATClient_CsvFlush();
  ++*(int *)((char *)&s_state[0].numPositionRecordings + v80);
  v62 = Sys_Milliseconds();
  __asm
  {
    vmovaps xmm8, [rsp+248h+var_58]
    vmovaps xmm7, [rsp+248h+var_48]
    vmovaps xmm6, [rsp+248h+var_38]
  }
  *(int *)((char *)&s_state[0].timeSinceLastRecordingMS + v80) = v62;
  return v75;
}

/*
==============
ATClient_PrintPerf
==============
*/
void ATClient_PrintPerf(const LocalClientNum_t localClientNum, const char *msg, ...)
{
  __int64 v3; 
  int samplePosIndex; 
  int batchIndex; 
  int numPositionRecordings; 
  int TimeInBatchSeconds; 
  int v12; 
  size_t v13; 
  char *v14; 
  unsigned __int64 *v15; 
  __int64 v16; 
  unsigned __int64 v17; 
  char *fmt; 
  va_list ArgList; 
  double v20; 
  double v21; 
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
  samplePosIndex = s_stateBatch[v3].samplePosIndex;
  batchIndex = s_stateBatch[v3].batchIndex;
  numPositionRecordings = s_state[v3].numPositionRecordings;
  TimeInBatchSeconds = ATClient_GetTimeInBatchSeconds((const LocalClientNum_t)v3);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+8B8h+outPosition+4]
    vmovss  xmm1, dword ptr [rsp+8B8h+outPosition]
    vcvtss2sd xmm0, xmm0, xmm0
    vmovsd  [rsp+8B8h+var_870], xmm0
    vcvtss2sd xmm1, xmm1, xmm1
    vmovsd  [rsp+8B8h+var_878], xmm1
  }
  LODWORD(ArgList) = batchIndex;
  LODWORD(fmt) = TimeInBatchSeconds;
  v12 = Com_sprintf_truncate(dest, 0x800ui64, "PERF[%s:%d]:%d:%d:%d @ %.0f|%.0f ", s_stateBatch[v3].clientUID, fmt, ArgList, samplePosIndex, numPositionRecordings, v20, v21);
  v13 = 2046i64 - v12;
  v14 = &dest[v12];
  v15 = j___local_stdio_printf_options();
  __stdio_common_vsprintf(*v15 | 2, v14, v13, msg, NULL, va);
  v16 = -1i64;
  do
    ++v16;
  while ( dest[v16] );
  if ( dest[v16 - 1] != 10 )
  {
    dest[v16] = 10;
    v17 = v16 + 1;
    if ( v17 >= 0x800 )
    {
      j___report_rangecheckfailure(dest);
      JUMPOUT(0x140232D09i64);
    }
    dest[v17] = 0;
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

