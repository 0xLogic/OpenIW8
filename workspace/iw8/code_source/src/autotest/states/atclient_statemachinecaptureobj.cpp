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
  int ClosestEnemyToPos; 
  const ClActiveClientMP *ClientMP; 
  const entityState_t *RemotePlayerEntityState; 
  const dvar_t *v14; 
  bool enabled; 
  vec3_t v17; 
  vec3_t v18; 

  __asm { vmovsd  xmm0, qword ptr [rdx] }
  v18.v[2] = pos->v[2];
  __asm { vmovsd  [rsp+78h+var_28], xmm0 }
  ClosestEnemyToPos = ATClient_GetClosestEnemyToPos(localClientNum, &v18);
  if ( ClosestEnemyToPos != -1 )
  {
    ClientMP = ClActiveClientMP::GetClientMP(localClientNum);
    RemotePlayerEntityState = ATClient_GetRemotePlayerEntityState(ClientMP, ClosestEnemyToPos);
    if ( RemotePlayerEntityState )
    {
      _RDI = &RemotePlayerEntityState->lerp.pos;
      if ( RemotePlayerEntityState == (const entityState_t *)-16i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 107, ASSERT_TYPE_ASSERT, "(traj)", (const char *)&queryFormat, "traj") )
        __debugbreak();
      if ( _RDI->trType == TR_LINEAR_STOP_SECURE )
      {
        *(_QWORD *)v17.v = &v18;
        *(_QWORD *)&v18.y = *(_QWORD *)_RDI->trBase.v ^ __PAIR64__(s_trbase_aab_Z ^ LODWORD(_RDI->trBase.v[2]), LODWORD(_RDI->trBase.v[1]) ^ s_trbase_aab_Y);
        LODWORD(v18.v[0]) = LODWORD(_RDI->trBase.v[0]) ^ ~s_trbase_aab_X;
        __asm { vmovss  xmm0, dword ptr [rsp+78h+var_28] }
        memset(&v17, 0, 8ui64);
        __asm { vmovss  dword ptr [rsp+78h+var_38], xmm0 }
        if ( (LODWORD(v17.v[0]) & 0x7F800000) == 2139095040 )
          goto LABEL_19;
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+78h+var_28+4]
          vmovss  dword ptr [rsp+78h+var_38], xmm0
        }
        if ( (LODWORD(v17.v[0]) & 0x7F800000) == 2139095040 )
          goto LABEL_19;
        __asm
        {
          vmovss  xmm0, [rsp+78h+var_20]
          vmovss  dword ptr [rsp+78h+var_38], xmm0
        }
        if ( (LODWORD(v17.v[0]) & 0x7F800000) == 2139095040 )
        {
LABEL_19:
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 74, ASSERT_TYPE_SANITY, "( !IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] )") )
            __debugbreak();
        }
      }
      else
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+0Ch]
          vmovss  xmm1, dword ptr [rdi+10h]
          vmovss  dword ptr [rsp+78h+var_28], xmm0
          vmovss  xmm0, dword ptr [rdi+14h]
          vmovss  [rsp+78h+var_20], xmm0
          vmovss  dword ptr [rsp+78h+var_28+4], xmm1
        }
      }
      v14 = DVARBOOL_ATClient_CaptureObjectiveUseADS;
      if ( !DVARBOOL_ATClient_CaptureObjectiveUseADS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_CaptureObjectiveUseADS") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v14);
      __asm { vmovsd  xmm0, [rsp+78h+var_28] }
      enabled = v14->current.enabled;
      __asm { vmovsd  [rsp+78h+var_38], xmm0 }
      v17.v[2] = v18.v[2];
      ATClient_AimAt(localClientNum, &v17, enabled);
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
  __int64 v5; 
  unsigned int v7; 
  const dvar_t *v9; 
  char v11; 
  char v12; 
  int RandomObjective; 
  __int64 v17; 
  const dvar_t *v18; 
  int integer; 
  void *retaddr; 

  _RAX = &retaddr;
  v5 = localClientNum;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
  }
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\states\\atclient_statemachinecaptureobj.cpp", 17, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_durationMS ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_durationMS )\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  _RSI = DVARFLT_ATClient_ChanceCaptureRandomObjective;
  v7 = -1;
  if ( !DVARFLT_ATClient_ChanceCaptureRandomObjective && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_ChanceCaptureRandomObjective") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RSI);
  __asm { vmovss  xmm7, dword ptr [rsi+28h] }
  v9 = DVARFLT_ATClient_ChanceCaptureClosestObjective;
  if ( !DVARFLT_ATClient_ChanceCaptureClosestObjective && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_ChanceCaptureClosestObjective") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  __asm
  {
    vaddss  xmm6, xmm7, dword ptr [rsi+28h]
    vucomiss xmm6, cs:__real@3f800000
  }
  if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\states\\atclient_statemachinecaptureobj.cpp", 23, ASSERT_TYPE_ASSERT, "(chanceToSelectRandom + chanceToSelectClosest == 1.0f)", (const char *)&queryFormat, "chanceToSelectRandom + chanceToSelectClosest == 1.0f") )
    __debugbreak();
  rand();
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm1, xmm0, cs:__real@38000100
    vcomiss xmm1, xmm7
  }
  if ( v11 | v12 )
  {
    RandomObjective = ATClient_GetRandomObjective((const LocalClientNum_t)v5, 13);
  }
  else
  {
    __asm { vcomiss xmm1, xmm6 }
    if ( !(v11 | v12) )
      goto LABEL_18;
    RandomObjective = ATClient_GetClosestObjective((const LocalClientNum_t)v5, 13);
  }
  v7 = RandomObjective;
LABEL_18:
  v17 = v5;
  s_targetObjective[v5] = v7;
  if ( v7 == -1 )
  {
    integer = 0;
  }
  else
  {
    Com_Printf(14, "Selected objective %d\n", v7);
    v18 = DVARINT_ATClient_CaptureObjectiveDurationMS;
    if ( !DVARINT_ATClient_CaptureObjectiveDurationMS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_CaptureObjectiveDurationMS") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v18);
    integer = v18->current.integer;
  }
  s_durationMS[v17] = integer;
  __asm
  {
    vmovaps xmm6, [rsp+78h+var_28]
    vmovaps xmm7, [rsp+78h+var_38]
  }
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
  const dvar_t *v6; 
  __int64 v8; 
  int v9; 
  const ObjectiveView *v10; 
  const ObjectiveView *LocalPlayerObjective; 
  ClActiveClientMP *ClientMP; 
  float v18; 
  float v43; 
  vec3_t result; 

  v6 = DVARINT_ATClient_MoveToTargetInputDurationMS;
  _R13 = 0x140000000ui64;
  v8 = localClientNum;
  s_durationMS[localClientNum] -= msec;
  s_timeSinceLastPositionCachedInMS[localClientNum] += msec;
  s_timeSinceLastInputInMS[localClientNum] += msec;
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_MoveToTargetInputDurationMS") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( s_timeSinceLastInputInMS[v8] >= v6->current.integer )
  {
    v9 = s_targetObjective[v8];
    if ( v9 == -1 || (v10 = ATClient_GetLocalPlayerObjective((const LocalClientNum_t)v8, v9)) == NULL || v10->side == FRIENDLY )
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vmovss  dword ptr [rsp+120h+result+8], xmm0
      }
      v43 = result.v[2];
      _RCX = v8;
      __asm
      {
        vunpcklps xmm0, xmm0, xmm0
        vmovsd  qword ptr rva s_previousPosition[r13+rcx*4], xmm0
      }
      s_previousPosition[_RCX].v[2] = v43;
      s_durationMS[v8] = 0;
    }
    else
    {
      LocalPlayerObjective = ATClient_GetLocalPlayerObjective((const LocalClientNum_t)v8, s_targetObjective[v8]);
      if ( LocalPlayerObjective )
      {
        __asm
        {
          vmovaps [rsp+120h+var_30], xmm6
          vmovaps [rsp+120h+var_40], xmm7
          vmovaps [rsp+120h+var_50], xmm8
        }
        ClientMP = ClActiveClientMP::GetClientMP((const LocalClientNum_t)v8);
        _R15 = (__int64)ClientMP->GetPlayerState(ClientMP);
        __asm
        {
          vmovss  xmm6, dword ptr [rax+30h]
          vmovss  xmm7, dword ptr [rax+34h]
        }
        _RAX = ATClient_GetObjectivePosition(&result, (const LocalClientNum_t)v8, LocalPlayerObjective);
        _R14 = DVARFLT_ATClient_CaptureObjectiveMaxDistanceSq;
        v18 = _RAX->v[2];
        __asm
        {
          vmovsd  xmm8, qword ptr [rax]
          vsubss  xmm1, xmm8, xmm6
          vshufps xmm0, xmm8, xmm8, 55h ; 'U'
          vsubss  xmm0, xmm0, xmm7
          vmovaps xmm7, [rsp+120h+var_40]
          vmulss  xmm2, xmm0, xmm0
          vmulss  xmm1, xmm1, xmm1
          vaddss  xmm6, xmm2, xmm1
          vmovsd  qword ptr [rsp+120h+result], xmm8
        }
        if ( !DVARFLT_ATClient_CaptureObjectiveMaxDistanceSq && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_CaptureObjectiveMaxDistanceSq") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(_R14);
        __asm
        {
          vcomiss xmm6, dword ptr [r14+28h]
          vmovaps xmm6, [rsp+120h+var_30]
          vmovss  xmm0, dword ptr [r15+30h]
          vmovss  xmm1, dword ptr [r15+34h]
        }
        _R14 = 3 * v8;
        __asm
        {
          vsubss  xmm3, xmm0, dword ptr rva s_previousPosition[r13+r14*4]
          vsubss  xmm2, xmm1, dword ptr (rva s_previousPosition+4)[r13+r14*4]
          vmovss  xmm0, dword ptr [r15+38h]
          vsubss  xmm4, xmm0, dword ptr (rva s_previousPosition+8)[r13+r14*4]
          vmulss  xmm2, xmm2, xmm2
          vmulss  xmm1, xmm3, xmm3
          vmulss  xmm0, xmm4, xmm4
          vaddss  xmm3, xmm2, xmm1
          vaddss  xmm2, xmm3, xmm0
          vcomiss xmm2, cs:__real@41200000
        }
        result.v[2] = v18;
        __asm { vmovsd  qword ptr [rsp+120h+result], xmm8 }
        ATClient_WalkTo((const LocalClientNum_t)v8, &result);
        if ( s_timeSinceLastPositionCachedInMS[v8] > 1000 )
        {
          __asm
          {
            vmovsd  xmm0, qword ptr [r15+30h]
            vmovsd  qword ptr rva s_previousPosition[r13+r14*4], xmm0
          }
          s_previousPosition[v8].v[2] = *(float *)(_R15 + 56);
          s_timeSinceLastPositionCachedInMS[v8] = 0;
        }
        __asm { vmovaps xmm8, [rsp+120h+var_50] }
        s_timeSinceLastInputInMS[v8] = 0;
      }
    }
  }
}

