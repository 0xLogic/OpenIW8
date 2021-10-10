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
  __int64 v2; 
  __int16 v4; 
  const entityState_t *v5; 
  unsigned __int8 playerIndex; 
  const clientState_t *RemotePlayerClientState; 
  team_t LocalPlayerTeam; 
  team_t team; 
  __int16 ClosestEnemyVehicle; 
  const dvar_t *v11; 
  __int16 v12; 
  const entityState_t *EntityState; 
  float *p_pos; 
  int v15; 
  int v16; 
  unsigned int v17; 
  float v18; 
  vec3_t v19; 
  vec3_t v20; 
  AutomatedInput_Record records; 

  v2 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\states\\atclient_statemachinehuntenemyvehicle.cpp", 68, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_durationMS ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_durationMS )\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  s_durationMS_3[v2] -= msec;
  if ( ATClient_IsLocalClientInVehicle((const LocalClientNum_t)v2) )
  {
    v4 = s_enemyTarget[v2];
    if ( (v4 == 2047 || (v5 = ATClient_GetEntityState((const LocalClientNum_t)v2, v4)) == NULL || (playerIndex = v5->staticState.vehiclePlayer.playerIndex) == 0 || (RemotePlayerClientState = ATClient_GetRemotePlayerClientState((const LocalClientNum_t)v2, (unsigned int)playerIndex - 1)) == NULL || (LocalPlayerTeam = ATClient_GetLocalPlayerTeam((const LocalClientNum_t)v2), (team = RemotePlayerClientState->team) != TEAM_ZERO) && team == LocalPlayerTeam) && (ClosestEnemyVehicle = ATClient_GetClosestEnemyVehicle((const LocalClientNum_t)v2), s_enemyTarget[v2] = ClosestEnemyVehicle, ClosestEnemyVehicle == 2047) )
    {
      Com_Printf(14, "Player can't find enemy vehicle target anymore => exit state\n");
      s_durationMS_3[v2] = 0;
    }
    else
    {
      if ( ATClient_IsTargetingEnemy((const LocalClientNum_t)v2) )
      {
        memset(&records.keys.keyBits.array[1], 0, 40);
        records.deferTimeSeconds = 0.0;
        records.holdTimeSeconds = FLOAT_0_5;
        records.keys.keyBits.array[0] = 4096;
        CL_Input_AddAutomatedSequence((LocalClientNum_t)v2, &records, 1);
      }
      s_timeSinceLastInputInMS_1[v2] += msec;
      v11 = DVARINT_ATClient_DriveToTargetInputDurationMS;
      if ( !DVARINT_ATClient_DriveToTargetInputDurationMS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_DriveToTargetInputDurationMS") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v11);
      if ( s_timeSinceLastInputInMS_1[v2] >= v11->current.integer )
      {
        v12 = s_enemyTarget[v2];
        if ( v12 != 2047 )
        {
          EntityState = ATClient_GetEntityState((const LocalClientNum_t)v2, v12);
          if ( EntityState )
          {
            p_pos = (float *)&EntityState->lerp.pos;
            if ( EntityState == (const entityState_t *)-16i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 107, ASSERT_TYPE_ASSERT, "(traj)", (const char *)&queryFormat, "traj") )
              __debugbreak();
            if ( *(_DWORD *)p_pos == 4 )
            {
              v15 = *((_DWORD *)p_pos + 4);
              *(_QWORD *)v19.v = &v20;
              v16 = v15 ^ *((_DWORD *)p_pos + 5);
              v17 = s_trbase_aab_Y ^ *((_DWORD *)p_pos + 3) ^ v15;
              LODWORD(v20.v[2]) = s_trbase_aab_Z ^ v16;
              LODWORD(v20.v[1]) = v17;
              LODWORD(v20.v[0]) = *((_DWORD *)p_pos + 3) ^ ~s_trbase_aab_X;
              memset(&v19, 0, 8ui64);
              v19.v[0] = v20.v[0];
              if ( (LODWORD(v20.v[0]) & 0x7F800000) == 2139095040 || (v19.v[0] = v20.v[1], (LODWORD(v20.v[1]) & 0x7F800000) == 2139095040) || (v19.v[0] = v20.v[2], (LODWORD(v20.v[2]) & 0x7F800000) == 2139095040) )
              {
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 74, ASSERT_TYPE_SANITY, "( !IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] )") )
                  __debugbreak();
              }
            }
            else
            {
              v18 = p_pos[4];
              v20.v[0] = p_pos[3];
              v20.v[2] = p_pos[5];
              v20.v[1] = v18;
            }
            v19 = v20;
            ATClient_DriveTo((const LocalClientNum_t)v2, &v19);
          }
        }
        s_timeSinceLastInputInMS_1[v2] = 0;
      }
    }
  }
  else
  {
    Com_Printf(14, "Player not in vehicle anymore => exit state\n");
    s_durationMS_3[v2] = 0;
  }
}

