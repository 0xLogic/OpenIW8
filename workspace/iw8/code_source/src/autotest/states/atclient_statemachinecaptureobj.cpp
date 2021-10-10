/*
==============
ATClient_StateMachineCaptureObjUpdate
==============
*/

void __fastcall ATClient_StateMachineCaptureObjUpdate(LocalClientNum_t localClientNum, int msec)
{
  ?ATClient_StateMachineCaptureObjUpdate@@YAXW4LocalClientNum_t@@H@Z(localClientNum, msec);
}

/*
==============
ATClient_StateMachineCaptureObjEnter
==============
*/

void __fastcall ATClient_StateMachineCaptureObjEnter(LocalClientNum_t localClientNum)
{
  ?ATClient_StateMachineCaptureObjEnter@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
ATClient_StateMachineCaptureObjTransition
==============
*/

bool __fastcall ATClient_StateMachineCaptureObjTransition(LocalClientNum_t localClientNum, unsigned int *outNewState)
{
  return ?ATClient_StateMachineCaptureObjTransition@@YA_NW4LocalClientNum_t@@AEAI@Z(localClientNum, outNewState);
}

/*
==============
ATClient_DefendPosition
==============
*/
void ATClient_DefendPosition(const LocalClientNum_t localClientNum, const vec3_t *pos)
{
  double v2; 
  int ClosestEnemyToPos; 
  const ClActiveClientMP *ClientMP; 
  const entityState_t *RemotePlayerEntityState; 
  trajectory_t_secure *p_pos; 
  float v8; 
  const dvar_t *v9; 
  bool enabled; 
  vec3_t v11; 
  vec3_t v12; 

  v2 = *(double *)pos->v;
  v12.v[2] = pos->v[2];
  *(double *)v12.v = v2;
  ClosestEnemyToPos = ATClient_GetClosestEnemyToPos(localClientNum, &v12);
  if ( ClosestEnemyToPos != -1 )
  {
    ClientMP = ClActiveClientMP::GetClientMP(localClientNum);
    RemotePlayerEntityState = ATClient_GetRemotePlayerEntityState(ClientMP, ClosestEnemyToPos);
    if ( RemotePlayerEntityState )
    {
      p_pos = &RemotePlayerEntityState->lerp.pos;
      if ( RemotePlayerEntityState == (const entityState_t *)-16i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 107, ASSERT_TYPE_ASSERT, "(traj)", (const char *)&queryFormat, "traj") )
        __debugbreak();
      if ( p_pos->trType == TR_LINEAR_STOP_SECURE )
      {
        *(_QWORD *)v11.v = &v12;
        *(_QWORD *)&v12.y = *(_QWORD *)p_pos->trBase.v ^ __PAIR64__(s_trbase_aab_Z ^ LODWORD(p_pos->trBase.v[2]), LODWORD(p_pos->trBase.v[1]) ^ s_trbase_aab_Y);
        LODWORD(v12.v[0]) = LODWORD(p_pos->trBase.v[0]) ^ ~s_trbase_aab_X;
        memset(&v11, 0, 8ui64);
        v11.v[0] = v12.v[0];
        if ( (LODWORD(v12.v[0]) & 0x7F800000) == 2139095040 || (v11.v[0] = v12.v[1], (LODWORD(v12.v[1]) & 0x7F800000) == 2139095040) || (v11.v[0] = v12.v[2], (LODWORD(v12.v[2]) & 0x7F800000) == 2139095040) )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 74, ASSERT_TYPE_SANITY, "( !IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] )") )
            __debugbreak();
        }
      }
      else
      {
        v8 = p_pos->trBase.v[1];
        v12.v[0] = p_pos->trBase.v[0];
        v12.v[2] = p_pos->trBase.v[2];
        v12.v[1] = v8;
      }
      v9 = DVARBOOL_ATClient_CaptureObjectiveUseADS;
      if ( !DVARBOOL_ATClient_CaptureObjectiveUseADS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_CaptureObjectiveUseADS") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v9);
      enabled = v9->current.enabled;
      v11 = v12;
      ATClient_AimAt(localClientNum, &v11, enabled);
    }
  }
}

/*
==============
ATClient_StateMachineCaptureObjEnter
==============
*/
void ATClient_StateMachineCaptureObjEnter(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  const dvar_t *v2; 
  unsigned int v3; 
  float value; 
  const dvar_t *v5; 
  float v6; 
  float v7; 
  int ClosestObjective; 
  __int64 v9; 
  const dvar_t *v10; 
  int integer; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\states\\atclient_statemachinecaptureobj.cpp", 17, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_durationMS ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_durationMS )\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  v2 = DVARFLT_ATClient_ChanceCaptureRandomObjective;
  v3 = -1;
  if ( !DVARFLT_ATClient_ChanceCaptureRandomObjective && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_ChanceCaptureRandomObjective") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  value = v2->current.value;
  v5 = DVARFLT_ATClient_ChanceCaptureClosestObjective;
  if ( !DVARFLT_ATClient_ChanceCaptureClosestObjective && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_ChanceCaptureClosestObjective") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  v6 = value + v5->current.value;
  if ( v6 != 1.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\states\\atclient_statemachinecaptureobj.cpp", 23, ASSERT_TYPE_ASSERT, "(chanceToSelectRandom + chanceToSelectClosest == 1.0f)", (const char *)&queryFormat, "chanceToSelectRandom + chanceToSelectClosest == 1.0f") )
    __debugbreak();
  v7 = (float)rand() * 0.000030518509;
  if ( v7 > value )
  {
    if ( v7 > v6 )
      goto LABEL_18;
    ClosestObjective = ATClient_GetClosestObjective((const LocalClientNum_t)v1, 13);
  }
  else
  {
    ClosestObjective = ATClient_GetRandomObjective((const LocalClientNum_t)v1, 13);
  }
  v3 = ClosestObjective;
LABEL_18:
  v9 = v1;
  s_targetObjective[v1] = v3;
  if ( v3 == -1 )
  {
    integer = 0;
  }
  else
  {
    Com_Printf(14, "Selected objective %d\n", v3);
    v10 = DVARINT_ATClient_CaptureObjectiveDurationMS;
    if ( !DVARINT_ATClient_CaptureObjectiveDurationMS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_CaptureObjectiveDurationMS") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v10);
    integer = v10->current.integer;
  }
  s_durationMS[v9] = integer;
}

/*
==============
ATClient_StateMachineCaptureObjTransition
==============
*/
char ATClient_StateMachineCaptureObjTransition(LocalClientNum_t localClientNum, unsigned int *outNewState)
{
  if ( s_durationMS[localClientNum] > 0 )
    return 0;
  *outNewState = 0;
  return 1;
}

/*
==============
ATClient_StateMachineCaptureObjUpdate
==============
*/
void ATClient_StateMachineCaptureObjUpdate(LocalClientNum_t localClientNum, int msec)
{
  __int128 v2; 
  const dvar_t *v3; 
  __int64 v4; 
  int v5; 
  const ObjectiveView *v6; 
  const ObjectiveView *LocalPlayerObjective; 
  ClActiveClientMP *ClientMP; 
  float *v9; 
  float v10; 
  float v11; 
  vec3_t *ObjectivePosition; 
  const dvar_t *v13; 
  float v14; 
  __m128 v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  __int64 v22; 
  vec3_t result; 
  AutomatedInput_Record records; 
  float v26; 
  float v27; 
  int v28; 
  __int64 v29; 
  __int64 v30; 
  __int64 v31; 
  __int128 v32; 
  __int128 v33; 

  v3 = DVARINT_ATClient_MoveToTargetInputDurationMS;
  v4 = localClientNum;
  s_durationMS[localClientNum] -= msec;
  s_timeSinceLastPositionCachedInMS[localClientNum] += msec;
  s_timeSinceLastInputInMS[localClientNum] += msec;
  if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_MoveToTargetInputDurationMS") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( s_timeSinceLastInputInMS[v4] >= v3->current.integer )
  {
    v5 = s_targetObjective[v4];
    if ( v5 == -1 || (v6 = ATClient_GetLocalPlayerObjective((const LocalClientNum_t)v4, v5)) == NULL || v6->side == FRIENDLY )
    {
      _XMM0 = 0i64;
      v22 = v4;
      __asm { vunpcklps xmm0, xmm0, xmm0 }
      *(double *)s_previousPosition[v22].v = *(double *)&_XMM0;
      s_previousPosition[v22].v[2] = 0.0;
      s_durationMS[v4] = 0;
    }
    else
    {
      LocalPlayerObjective = ATClient_GetLocalPlayerObjective((const LocalClientNum_t)v4, s_targetObjective[v4]);
      if ( LocalPlayerObjective )
      {
        v33 = v2;
        ClientMP = ClActiveClientMP::GetClientMP((const LocalClientNum_t)v4);
        v9 = (float *)ClientMP->GetPlayerState(ClientMP);
        v10 = v9[12];
        v11 = v9[13];
        ObjectivePosition = ATClient_GetObjectivePosition(&result, (const LocalClientNum_t)v4, LocalPlayerObjective);
        v13 = DVARFLT_ATClient_CaptureObjectiveMaxDistanceSq;
        v14 = ObjectivePosition->v[2];
        v15 = (__m128)*(unsigned __int64 *)ObjectivePosition->v;
        v16 = _mm_shuffle_ps(v15, v15, 85).m128_f32[0] - v11;
        v17 = (float)(v16 * v16) + (float)((float)(v15.m128_f32[0] - v10) * (float)(v15.m128_f32[0] - v10));
        *(_QWORD *)result.v = *(_QWORD *)ObjectivePosition->v;
        if ( !DVARFLT_ATClient_CaptureObjectiveMaxDistanceSq && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_CaptureObjectiveMaxDistanceSq") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v13);
        if ( v17 >= v13->current.value )
        {
          v18 = v9[12] - s_previousPosition[v4].v[0];
          v19 = v9[13] - s_previousPosition[v4].v[1];
          v20 = v9[14] - s_previousPosition[v4].v[2];
          if ( (float)((float)((float)(v19 * v19) + (float)(v18 * v18)) + (float)(v20 * v20)) < 10.0 )
          {
            records.holdTimeSeconds = FLOAT_1_0;
            v26 = FLOAT_1_0;
            memset(&records.keys.keyBits.array[1], 0, 40);
            v27 = FLOAT_0_1;
            records.deferTimeSeconds = 0.0;
            records.keys.keyBits.array[0] = 4096;
            v29 = 0i64;
            v30 = 0i64;
            v31 = 0i64;
            v28 = 0x10000000;
            v32 = 0i64;
            CL_Input_AddAutomatedSequence((LocalClientNum_t)v4, &records, 2);
          }
          result.v[2] = v14;
          *(double *)result.v = *(double *)v15.m128_u64;
          ATClient_WalkTo((const LocalClientNum_t)v4, &result);
          if ( s_timeSinceLastPositionCachedInMS[v4] > 1000 )
          {
            *(double *)s_previousPosition[v4].v = *((double *)v9 + 6);
            s_previousPosition[v4].v[2] = v9[14];
            s_timeSinceLastPositionCachedInMS[v4] = 0;
          }
        }
        else
        {
          result.v[2] = v14;
          *(double *)result.v = *(double *)v15.m128_u64;
          ATClient_DefendPosition((const LocalClientNum_t)v4, &result);
        }
        s_timeSinceLastInputInMS[v4] = 0;
      }
    }
  }
}

