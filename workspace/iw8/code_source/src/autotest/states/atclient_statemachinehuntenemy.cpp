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
  LocalClientNum_t v2; 
  int v3; 
  const dvar_t *v4; 
  float value; 
  const dvar_t *v6; 
  float v7; 
  float v8; 
  float v10; 
  float v11; 
  int ClosestEnemyToLocalPlayer; 

  v2 = localClientNum;
  v3 = -1;
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
  }
  else
  {
    v4 = DVARFLT_ATClient_ChanceHuntRandomEnemy;
    if ( !DVARFLT_ATClient_ChanceHuntRandomEnemy && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_ChanceHuntRandomEnemy") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v4);
    value = v4->current.value;
    v6 = DVARFLT_ATClient_ChanceHuntClosestEnemy;
    if ( !DVARFLT_ATClient_ChanceHuntClosestEnemy && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_ChanceHuntClosestEnemy") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    v7 = v6->current.value;
    v8 = v7 + value;
    if ( (float)(v7 + value) <= 0.0 )
      return 1;
    v10 = value * (float)(1.0 / v8);
    v11 = (float)rand() * 0.000030518509;
    if ( v11 <= v10 )
    {
      localClientNum = v2;
LABEL_12:
      ClosestEnemyToLocalPlayer = ATClient_GetRandomEnemy(localClientNum);
LABEL_18:
      v3 = ClosestEnemyToLocalPlayer;
      goto LABEL_19;
    }
    if ( v11 <= (float)((float)((float)(1.0 / v8) * v7) + v10) )
    {
      localClientNum = v2;
      goto LABEL_17;
    }
  }
LABEL_19:
  ATClient_GetBlackboard(v2)->targetEnemyClientNum = v3;
  return v3 != -1;
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
  trajectory_t_secure *p_pos; 
  float v15; 
  vec3_t v16; 
  vec3_t v17; 

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
        p_pos = &RemotePlayerEntityState->lerp.pos;
        if ( RemotePlayerEntityState == (const entityState_t *)-16i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", (_DWORD)RemotePlayerEntityState + 123, ASSERT_TYPE_ASSERT, "(traj)", (const char *)&queryFormat, "traj") )
          __debugbreak();
        if ( p_pos->trType == TR_LINEAR_STOP_SECURE )
        {
          *(_QWORD *)v16.v = &v17;
          *(_QWORD *)&v17.y = *(_QWORD *)p_pos->trBase.v ^ __PAIR64__(s_trbase_aab_Z ^ LODWORD(p_pos->trBase.v[2]), LODWORD(p_pos->trBase.v[1]) ^ s_trbase_aab_Y);
          LODWORD(v17.v[0]) = LODWORD(p_pos->trBase.v[0]) ^ ~s_trbase_aab_X;
          memset(&v16, 0, 8ui64);
          v16.v[0] = v17.v[0];
          if ( (LODWORD(v17.v[0]) & 0x7F800000) == 2139095040 || (v16.v[0] = v17.v[1], (LODWORD(v17.v[1]) & 0x7F800000) == 2139095040) || (v16.v[0] = v17.v[2], (LODWORD(v17.v[2]) & 0x7F800000) == 2139095040) )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 74, ASSERT_TYPE_SANITY, "( !IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] )") )
              __debugbreak();
          }
        }
        else
        {
          v15 = p_pos->trBase.v[1];
          v17.v[0] = p_pos->trBase.v[0];
          v17.v[2] = p_pos->trBase.v[2];
          v17.v[1] = v15;
        }
        v16 = v17;
        ATClient_WalkTo((const LocalClientNum_t)v2, &v16);
      }
    }
    s_timeSinceLastInputInMS_0[v2] = 0;
  }
}

