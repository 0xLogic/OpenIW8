/*
==============
ATClient_StateMachineHuntEnemyTransition
==============
*/

bool __fastcall ATClient_StateMachineHuntEnemyTransition(const LocalClientNum_t localClientNum, unsigned int *outNewState)
{
  return ?ATClient_StateMachineHuntEnemyTransition@@YA_NW4LocalClientNum_t@@AEAI@Z(localClientNum, outNewState);
}

/*
==============
ATClient_StateMachineHuntEnemyEnter
==============
*/

void __fastcall ATClient_StateMachineHuntEnemyEnter(const LocalClientNum_t localClientNum)
{
  ?ATClient_StateMachineHuntEnemyEnter@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
ATClient_StateMachineHuntEnemyUpdate
==============
*/

void __fastcall ATClient_StateMachineHuntEnemyUpdate(const LocalClientNum_t localClientNum, const int msec)
{
  ?ATClient_StateMachineHuntEnemyUpdate@@YAXW4LocalClientNum_t@@H@Z(localClientNum, msec);
}

/*
==============
ATClient_SelectTarget
==============
*/
bool ATClient_SelectTarget(LocalClientNum_t localClientNum, eTargetSelection selection)
{
  LocalClientNum_t v7; 
  int v8; 
  bool result; 
  char v19; 
  char v20; 
  int ClosestEnemyToLocalPlayer; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm { vmovaps [rsp+78h+var_18], xmm6 }
  v7 = localClientNum;
  __asm { vmovaps [rsp+78h+var_28], xmm7 }
  v8 = -1;
  __asm { vmovaps xmmword ptr [r11-38h], xmm8 }
  if ( selection )
  {
    if ( selection == eTargetSelection_Random )
      goto LABEL_12;
    if ( selection == eTargetSelection_Closest )
    {
LABEL_17:
      ClosestEnemyToLocalPlayer = ATClient_GetClosestEnemyToLocalPlayer(localClientNum);
      goto LABEL_18;
    }
LABEL_19:
    ATClient_GetBlackboard(v7)->targetEnemyClientNum = v8;
    result = v8 != -1;
    goto LABEL_20;
  }
  _RSI = DVARFLT_ATClient_ChanceHuntRandomEnemy;
  if ( !DVARFLT_ATClient_ChanceHuntRandomEnemy && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_ChanceHuntRandomEnemy") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RSI);
  __asm { vmovss  xmm8, dword ptr [rsi+28h] }
  _RSI = DVARFLT_ATClient_ChanceHuntClosestEnemy;
  if ( !DVARFLT_ATClient_ChanceHuntClosestEnemy && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_ChanceHuntClosestEnemy") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RSI);
  __asm
  {
    vmovss  xmm6, dword ptr [rsi+28h]
    vaddss  xmm1, xmm6, xmm8
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm1, xmm0
  }
  if ( !(v19 | v20) )
  {
    __asm
    {
      vmovss  xmm0, cs:__real@3f800000
      vdivss  xmm7, xmm0, xmm1
      vmulss  xmm8, xmm8, xmm7
    }
    rand();
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm2, xmm0, cs:__real@38000100
      vcomiss xmm2, xmm8
    }
    if ( v19 | v20 )
    {
      localClientNum = v7;
LABEL_12:
      ClosestEnemyToLocalPlayer = ATClient_GetRandomEnemy(localClientNum);
LABEL_18:
      v8 = ClosestEnemyToLocalPlayer;
      goto LABEL_19;
    }
    __asm
    {
      vmulss  xmm0, xmm7, xmm6
      vaddss  xmm1, xmm0, xmm8
      vcomiss xmm2, xmm1
    }
    if ( v19 | v20 )
    {
      localClientNum = v7;
      goto LABEL_17;
    }
    goto LABEL_19;
  }
  result = 1;
LABEL_20:
  __asm
  {
    vmovaps xmm6, [rsp+78h+var_18]
    vmovaps xmm7, [rsp+78h+var_28]
    vmovaps xmm8, [rsp+78h+var_38]
  }
  return result;
}

/*
==============
ATClient_StateMachineHuntEnemyEnter
==============
*/
void ATClient_StateMachineHuntEnemyEnter(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  const dvar_t *v2; 
  int v4; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v4 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\states\\atclient_statemachinehuntenemy.cpp", 66, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_durationMS ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_durationMS )\n\t%i not in [0, %i)", localClientNum, v4) )
      __debugbreak();
  }
  if ( ATClient_SelectTarget((LocalClientNum_t)v1, eTargetSelection_Roll) )
  {
    v2 = DVARINT_ATClient_HuntEnemyDurationMS;
    if ( !DVARINT_ATClient_HuntEnemyDurationMS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_HuntEnemyDurationMS") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v2);
    s_durationMS_2[v1] = v2->current.integer;
  }
  else
  {
    s_durationMS_2[v1] = 0;
  }
}

/*
==============
ATClient_StateMachineHuntEnemyTransition
==============
*/
bool ATClient_StateMachineHuntEnemyTransition(const LocalClientNum_t localClientNum, unsigned int *outNewState)
{
  __int64 v2; 
  int targetEnemyClientNum; 
  const clientState_t *RemotePlayerClientState; 
  bool result; 
  int v8; 

  v2 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v8 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\states\\atclient_statemachinehuntenemy.cpp", 158, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_durationMS ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_durationMS )\n\t%i not in [0, %i)", localClientNum, v8) )
      __debugbreak();
  }
  if ( s_durationMS_2[v2] <= 0 || (targetEnemyClientNum = ATClient_GetBlackboard((const LocalClientNum_t)v2)->targetEnemyClientNum, targetEnemyClientNum == -1) || (RemotePlayerClientState = ATClient_GetRemotePlayerClientState((const LocalClientNum_t)v2, targetEnemyClientNum)) == NULL || !ATClient_IsClientAlive(RemotePlayerClientState) || (result = ATClient_IsLocalClientSkydiving((const LocalClientNum_t)v2)) )
  {
    ATClient_GetBlackboard((const LocalClientNum_t)v2)->targetEnemyClientNum = -1;
    result = 1;
    *outNewState = 0;
  }
  return result;
}

/*
==============
ATClient_StateMachineHuntEnemyUpdate
==============
*/
void ATClient_StateMachineHuntEnemyUpdate(const LocalClientNum_t localClientNum, const int msec)
{
  __int64 v2; 
  const dvar_t *v4; 
  ClActiveClientMP *ClientMP; 
  __int64 v6; 
  unsigned __int8 v7; 
  bool v8; 
  int ClosestEnemyToLocalPlayer; 
  const dvar_t *v10; 
  int targetEnemyClientNum; 
  const ClActiveClientMP *v12; 
  const entityState_t *RemotePlayerEntityState; 
  vec3_t v22; 
  __int64 v23; 
  unsigned int v24; 

  v2 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\states\\atclient_statemachinehuntenemy.cpp", 101, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_durationMS ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_durationMS )\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  v4 = DVARBOOL_ATClient_SwitchToClosestEnemyOnDamageReceived;
  s_durationMS_2[v2] -= msec;
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_SwitchToClosestEnemyOnDamageReceived") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( v4->current.enabled )
  {
    ClientMP = ClActiveClientMP::GetClientMP((const LocalClientNum_t)v2);
    v6 = (__int64)ClientMP->GetPlayerState(ClientMP);
    v7 = *(_BYTE *)(v6 + 592);
    if ( v7 != algn_1489B7FF8[v2 + 4] )
    {
      v8 = *(_DWORD *)(v6 + 596) == 0;
      algn_1489B7FF8[v2 + 4] = v7;
      if ( v8 )
      {
        Com_Printf(14, "Received blood damage %d\n", v7);
        ClosestEnemyToLocalPlayer = ATClient_GetClosestEnemyToLocalPlayer((const LocalClientNum_t)v2);
        ATClient_GetBlackboard((const LocalClientNum_t)v2)->targetEnemyClientNum = ClosestEnemyToLocalPlayer;
      }
    }
  }
  s_timeSinceLastInputInMS_0[v2] += msec;
  v10 = DVARINT_ATClient_MoveToTargetInputDurationMS;
  if ( !DVARINT_ATClient_MoveToTargetInputDurationMS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_MoveToTargetInputDurationMS") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  if ( s_timeSinceLastInputInMS_0[v2] >= v10->current.integer )
  {
    targetEnemyClientNum = ATClient_GetBlackboard((const LocalClientNum_t)v2)->targetEnemyClientNum;
    if ( targetEnemyClientNum != -1 )
    {
      v12 = ClActiveClientMP::GetClientMP((const LocalClientNum_t)v2);
      RemotePlayerEntityState = ATClient_GetRemotePlayerEntityState(v12, targetEnemyClientNum);
      if ( RemotePlayerEntityState )
      {
        _RDI = &RemotePlayerEntityState->lerp.pos;
        if ( RemotePlayerEntityState == (const entityState_t *)-16i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", (_DWORD)RemotePlayerEntityState + 123, ASSERT_TYPE_ASSERT, "(traj)", (const char *)&queryFormat, "traj") )
          __debugbreak();
        if ( _RDI->trType == TR_LINEAR_STOP_SECURE )
        {
          *(_QWORD *)v22.v = &v23;
          v24 = LODWORD(_RDI->trBase.v[1]) ^ s_trbase_aab_Z ^ LODWORD(_RDI->trBase.v[2]);
          HIDWORD(v23) = LODWORD(_RDI->trBase.v[0]) ^ LODWORD(_RDI->trBase.v[1]) ^ s_trbase_aab_Y;
          LODWORD(v23) = LODWORD(_RDI->trBase.v[0]) ^ ~s_trbase_aab_X;
          __asm { vmovss  xmm0, dword ptr [rsp+98h+var_48] }
          memset(&v22, 0, 8ui64);
          __asm { vmovss  dword ptr [rsp+98h+var_58], xmm0 }
          if ( (LODWORD(v22.v[0]) & 0x7F800000) == 2139095040 )
            goto LABEL_31;
          __asm
          {
            vmovss  xmm0, dword ptr [rsp+98h+var_48+4]
            vmovss  dword ptr [rsp+98h+var_58], xmm0
          }
          if ( (LODWORD(v22.v[0]) & 0x7F800000) == 2139095040 )
            goto LABEL_31;
          __asm
          {
            vmovss  xmm0, [rsp+98h+var_40]
            vmovss  dword ptr [rsp+98h+var_58], xmm0
          }
          if ( (LODWORD(v22.v[0]) & 0x7F800000) == 2139095040 )
          {
LABEL_31:
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
            vmovss  dword ptr [rsp+98h+var_48], xmm0
            vmovss  xmm0, dword ptr [rdi+14h]
            vmovss  [rsp+98h+var_40], xmm0
            vmovss  dword ptr [rsp+98h+var_48+4], xmm1
          }
        }
        __asm { vmovsd  xmm0, [rsp+98h+var_48] }
        LODWORD(v22.v[2]) = v24;
        __asm { vmovsd  [rsp+98h+var_58], xmm0 }
        ATClient_WalkTo((const LocalClientNum_t)v2, &v22);
      }
    }
    s_timeSinceLastInputInMS_0[v2] = 0;
  }
}

