/*
==============
ATClient_StateMachineHuntEnemyVehicleTransition
==============
*/

bool __fastcall ATClient_StateMachineHuntEnemyVehicleTransition(const LocalClientNum_t localClientNum, unsigned int *outNewState)
{
  return ?ATClient_StateMachineHuntEnemyVehicleTransition@@YA_NW4LocalClientNum_t@@AEAI@Z(localClientNum, outNewState);
}

/*
==============
ATClient_StateMachineHuntEnemyVehicleUpdate
==============
*/

void __fastcall ATClient_StateMachineHuntEnemyVehicleUpdate(const LocalClientNum_t localClientNum, const int msec)
{
  ?ATClient_StateMachineHuntEnemyVehicleUpdate@@YAXW4LocalClientNum_t@@H@Z(localClientNum, msec);
}

/*
==============
ATClient_StateMachineHuntEnemyVehicleEnter
==============
*/

void __fastcall ATClient_StateMachineHuntEnemyVehicleEnter(const LocalClientNum_t localClientNum)
{
  ?ATClient_StateMachineHuntEnemyVehicleEnter@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
ATClient_StateMachineHuntEnemyVehicleEnter
==============
*/
void ATClient_StateMachineHuntEnemyVehicleEnter(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  __int16 ClosestEnemyVehicle; 
  __int64 v3; 
  const dvar_t *v4; 
  int integer; 
  int v7; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v7 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\states\\atclient_statemachinehuntenemyvehicle.cpp", 53, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_durationMS ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_durationMS )\n\t%i not in [0, %i)", localClientNum, v7) )
      __debugbreak();
  }
  ClosestEnemyVehicle = ATClient_GetClosestEnemyVehicle((const LocalClientNum_t)v1);
  s_enemyTarget[v1] = ClosestEnemyVehicle;
  v3 = v1;
  if ( ClosestEnemyVehicle == 2047 )
  {
    integer = 0;
  }
  else
  {
    v4 = DVARINT_ATClient_HuntEnemyVehicleDurationMS;
    if ( !DVARINT_ATClient_HuntEnemyVehicleDurationMS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_HuntEnemyVehicleDurationMS") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v4);
    integer = v4->current.integer;
  }
  s_durationMS_3[v3] = integer;
}

/*
==============
ATClient_StateMachineHuntEnemyVehicleTransition
==============
*/
char ATClient_StateMachineHuntEnemyVehicleTransition(const LocalClientNum_t localClientNum, unsigned int *outNewState)
{
  __int64 v2; 
  int v6; 

  v2 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v6 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\states\\atclient_statemachinehuntenemyvehicle.cpp", 124, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_durationMS ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_durationMS )\n\t%i not in [0, %i)", localClientNum, v6) )
      __debugbreak();
  }
  if ( s_durationMS_3[v2] > 0 )
    return 0;
  *outNewState = 0;
  return 1;
}

/*
==============
ATClient_StateMachineHuntEnemyVehicleUpdate
==============
*/
void ATClient_StateMachineHuntEnemyVehicleUpdate(const LocalClientNum_t localClientNum, const int msec)
{
  __int64 v3; 
  __int16 v5; 
  const entityState_t *v6; 
  unsigned __int8 playerIndex; 
  const clientState_t *RemotePlayerClientState; 
  team_t LocalPlayerTeam; 
  team_t team; 
  __int16 ClosestEnemyVehicle; 
  const dvar_t *v14; 
  __int16 v15; 
  const entityState_t *EntityState; 
  float v18; 
  int v19; 
  unsigned int v20; 
  vec3_t v28; 
  __int64 v29; 
  unsigned int v30; 
  AutomatedInput_Record records; 

  v3 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\states\\atclient_statemachinehuntenemyvehicle.cpp", 68, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_durationMS ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_durationMS )\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  s_durationMS_3[v3] -= msec;
  if ( ATClient_IsLocalClientInVehicle((const LocalClientNum_t)v3) )
  {
    v5 = s_enemyTarget[v3];
    if ( (v5 == 2047 || (v6 = ATClient_GetEntityState((const LocalClientNum_t)v3, v5)) == NULL || (playerIndex = v6->staticState.vehiclePlayer.playerIndex) == 0 || (RemotePlayerClientState = ATClient_GetRemotePlayerClientState((const LocalClientNum_t)v3, (unsigned int)playerIndex - 1)) == NULL || (LocalPlayerTeam = ATClient_GetLocalPlayerTeam((const LocalClientNum_t)v3), (team = RemotePlayerClientState->team) != TEAM_ZERO) && team == LocalPlayerTeam) && (ClosestEnemyVehicle = ATClient_GetClosestEnemyVehicle((const LocalClientNum_t)v3), s_enemyTarget[v3] = ClosestEnemyVehicle, ClosestEnemyVehicle == 2047) )
    {
      Com_Printf(14, "Player can't find enemy vehicle target anymore => exit state\n");
      s_durationMS_3[v3] = 0;
    }
    else
    {
      if ( ATClient_IsTargetingEnemy((const LocalClientNum_t)v3) )
      {
        __asm
        {
          vmovss  xmm1, cs:__real@3f000000
          vxorps  xmm0, xmm0, xmm0
        }
        memset(&records.keys.keyBits.array[1], 0, 24);
        __asm
        {
          vmovss  [rbp+57h+records.deferTimeSeconds], xmm0
          vmovss  [rbp+57h+records.holdTimeSeconds], xmm1
          vmovups xmmword ptr [rbp+57h+records.moveStick], xmm0
        }
        records.keys.keyBits.array[0] = 4096;
        CL_Input_AddAutomatedSequence((LocalClientNum_t)v3, &records, 1);
      }
      s_timeSinceLastInputInMS_1[v3] += msec;
      v14 = DVARINT_ATClient_DriveToTargetInputDurationMS;
      if ( !DVARINT_ATClient_DriveToTargetInputDurationMS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_DriveToTargetInputDurationMS") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v14);
      if ( s_timeSinceLastInputInMS_1[v3] >= v14->current.integer )
      {
        v15 = s_enemyTarget[v3];
        if ( v15 != 2047 )
        {
          EntityState = ATClient_GetEntityState((const LocalClientNum_t)v3, v15);
          if ( EntityState )
          {
            _RDI = &EntityState->lerp.pos;
            if ( EntityState == (const entityState_t *)-16i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 107, ASSERT_TYPE_ASSERT, "(traj)", (const char *)&queryFormat, "traj") )
              __debugbreak();
            if ( _RDI->trType == TR_LINEAR_STOP_SECURE )
            {
              v18 = _RDI->trBase.v[1];
              *(_QWORD *)v28.v = &v29;
              v19 = LODWORD(v18) ^ LODWORD(_RDI->trBase.v[2]);
              v20 = s_trbase_aab_Y ^ LODWORD(_RDI->trBase.v[0]) ^ LODWORD(v18);
              v30 = s_trbase_aab_Z ^ v19;
              HIDWORD(v29) = v20;
              LODWORD(v29) = LODWORD(_RDI->trBase.v[0]) ^ ~s_trbase_aab_X;
              __asm { vmovss  xmm0, dword ptr [rbp+57h+var_70] }
              memset(&v28, 0, 8ui64);
              __asm { vmovss  dword ptr [rbp+57h+var_80], xmm0 }
              if ( (LODWORD(v28.v[0]) & 0x7F800000) == 2139095040 )
                goto LABEL_36;
              __asm
              {
                vmovss  xmm0, dword ptr [rbp+57h+var_70+4]
                vmovss  dword ptr [rbp+57h+var_80], xmm0
              }
              if ( (LODWORD(v28.v[0]) & 0x7F800000) == 2139095040 )
                goto LABEL_36;
              __asm
              {
                vmovss  xmm0, [rbp+57h+var_68]
                vmovss  dword ptr [rbp+57h+var_80], xmm0
              }
              if ( (LODWORD(v28.v[0]) & 0x7F800000) == 2139095040 )
              {
LABEL_36:
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
                vmovss  dword ptr [rbp+57h+var_70], xmm0
                vmovss  xmm0, dword ptr [rdi+14h]
                vmovss  [rbp+57h+var_68], xmm0
                vmovss  dword ptr [rbp+57h+var_70+4], xmm1
              }
            }
            __asm { vmovsd  xmm0, [rbp+57h+var_70] }
            LODWORD(v28.v[2]) = v30;
            __asm { vmovsd  [rbp+57h+var_80], xmm0 }
            ATClient_DriveTo((const LocalClientNum_t)v3, &v28);
          }
        }
        s_timeSinceLastInputInMS_1[v3] = 0;
      }
    }
  }
  else
  {
    Com_Printf(14, "Player not in vehicle anymore => exit state\n");
    s_durationMS_3[v3] = 0;
  }
}

