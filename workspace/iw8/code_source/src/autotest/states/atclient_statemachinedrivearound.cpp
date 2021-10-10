/*
==============
ATClient_StateMachineDriveAroundEnter
==============
*/

void __fastcall ATClient_StateMachineDriveAroundEnter(const LocalClientNum_t localClientNum)
{
  ?ATClient_StateMachineDriveAroundEnter@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
ATClient_StateMachineDriveAroundUpdate
==============
*/

void __fastcall ATClient_StateMachineDriveAroundUpdate(const LocalClientNum_t localClientNum, const int msec)
{
  ?ATClient_StateMachineDriveAroundUpdate@@YAXW4LocalClientNum_t@@H@Z(localClientNum, msec);
}

/*
==============
ATClient_StateMachineDriveAroundTransition
==============
*/

bool __fastcall ATClient_StateMachineDriveAroundTransition(const LocalClientNum_t localClientNum, unsigned int *outNewState)
{
  return ?ATClient_StateMachineDriveAroundTransition@@YA_NW4LocalClientNum_t@@AEAI@Z(localClientNum, outNewState);
}

/*
==============
ATClient_StateMachineDriveAroundEnter
==============
*/
void ATClient_StateMachineDriveAroundEnter(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  ClActiveClientMP *ClientMP; 
  __int64 v3; 
  __int16 v4; 
  const dvar_t *v5; 

  v1 = localClientNum;
  ClientMP = ClActiveClientMP::GetClientMP(localClientNum);
  v3 = v1;
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ClientMP->snap.ps.pm_flags, ACTIVE, 0x1Cu) )
  {
    s_durationMS_0[v3] = 0;
    s_targetVehicle[v1] = 2047;
    if ( s_exitVehicleTimeMS[v3] )
    {
      if ( Sys_Milliseconds() - s_exitVehicleTimeMS[v3] >= 4000 )
        ExitVehicle((const LocalClientNum_t)v1);
    }
  }
  else
  {
    s_internalState[v3] = DriveAroundInternalState_GoToVehicle;
    v4 = SelectClosestVehicle((const LocalClientNum_t)v1);
    s_targetVehicle[v1] = v4;
    if ( v4 == 2047 )
    {
      s_durationMS_0[v3] = 0;
    }
    else
    {
      v5 = DVARINT_ATClient_DriveAroundDurationMS;
      if ( !DVARINT_ATClient_DriveAroundDurationMS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_DriveAroundDurationMS") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v5);
      s_durationMS_0[v3] = v5->current.integer;
    }
  }
}

/*
==============
ATClient_StateMachineDriveAroundTransition
==============
*/
char ATClient_StateMachineDriveAroundTransition(const LocalClientNum_t localClientNum, unsigned int *outNewState)
{
  ClActiveClientMP *ClientMP; 

  if ( s_durationMS_0[localClientNum] > 0 )
    return 0;
  if ( ATClient_GetEntityState(localClientNum, s_targetVehicle[localClientNum]) )
  {
    ClientMP = ClActiveClientMP::GetClientMP(localClientNum);
    if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ClientMP->snap.ps.pm_flags, ACTIVE, 0x1Cu) )
      ExitVehicle(localClientNum);
  }
  *outNewState = 0;
  return 1;
}

/*
==============
ATClient_StateMachineDriveAroundUpdate
==============
*/
void ATClient_StateMachineDriveAroundUpdate(const LocalClientNum_t localClientNum, const int msec)
{
  __int64 v2; 
  DriveAroundInternalState v4; 
  ClActiveClientMP *ClientMP; 
  __int16 v6; 
  int RandomEnemy; 
  DriveAroundInternalState v8; 

  v2 = localClientNum;
  s_durationMS_0[localClientNum] -= msec;
  if ( !ATClient_GetEntityState(localClientNum, s_targetVehicle[localClientNum]) )
  {
LABEL_13:
    s_durationMS_0[v2] = 0;
    return;
  }
  v4 = s_internalState[v2];
  if ( v4 == DriveAroundInternalState_GoToVehicle )
  {
    UpdateGoToVehicleState((const LocalClientNum_t)v2);
    return;
  }
  if ( v4 != DriveAroundInternalState_EnterVehicle )
  {
    if ( v4 == DriveAroundInternalState_DriveVehicle )
    {
      UpdateDriveVehicleState((const LocalClientNum_t)v2, msec);
    }
    else
    {
      v8 = s_internalState[v2];
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\states\\atclient_statemachinedrivearound.cpp", 280, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unknown state %d", v8) )
        __debugbreak();
    }
    return;
  }
  ClientMP = ClActiveClientMP::GetClientMP((const LocalClientNum_t)v2);
  if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ClientMP->snap.ps.pm_flags, ACTIVE, 0x1Cu) )
  {
    s_enterVehicleTimerMS[v2] -= msec;
    if ( s_enterVehicleTimerMS[v2] > 0 )
      return;
    goto LABEL_13;
  }
  s_internalState[v2] = DriveAroundInternalState_DriveVehicle;
  s_driveInputTimerMS[v2] = 0.0;
  v6 = 2047;
  RandomEnemy = ATClient_GetRandomEnemy((const LocalClientNum_t)v2);
  if ( RandomEnemy != -1 )
    v6 = RandomEnemy;
  s_destination[v2] = v6;
}

/*
==============
ExitVehicle
==============
*/
void ExitVehicle(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  AutomatedInput_Record records; 

  v1 = localClientNum;
  Com_Printf(14, "Exit Vehicle\n");
  records.keys.keyBits.array[0] = 0x10000000;
  memset(&records.keys.keyBits.array[1], 0, 40);
  records.deferTimeSeconds = 0.0;
  records.holdTimeSeconds = FLOAT_1_0;
  CL_Input_AddAutomatedSequence((LocalClientNum_t)v1, &records, 1);
  s_exitVehicleTimeMS[v1] = Sys_Milliseconds();
}

/*
==============
SelectClosestVehicle
==============
*/
__int64 SelectClosestVehicle(const LocalClientNum_t localClientNum)
{
  signed __int64 v1; 
  void *v2; 
  float v3; 
  unsigned __int16 number; 
  __int64 VehicleList; 
  ClActiveClientMP *ClientMP; 
  __int64 v8; 
  const playerState_s *v9; 
  entityState_t *p_vehicles; 
  double DistSqToEntity; 
  entityState_t vehicles; 

  v2 = alloca(v1);
  v3 = FLOAT_3_4028235e38;
  number = 2047;
  VehicleList = ATClient_GetVehicleList(localClientNum, &vehicles, 50);
  ClientMP = ClActiveClientMP::GetClientMP(localClientNum);
  v8 = VehicleList;
  v9 = ClientMP->GetPlayerState(ClientMP);
  if ( (int)VehicleList > 0 )
  {
    p_vehicles = &vehicles;
    do
    {
      if ( !p_vehicles->staticState.vehiclePlayer.playerIndex )
      {
        DistSqToEntity = ATClient_GetDistSqToEntity(v9, p_vehicles);
        if ( *(float *)&DistSqToEntity < v3 )
        {
          number = p_vehicles->number;
          v3 = *(float *)&DistSqToEntity;
        }
      }
      ++p_vehicles;
      --v8;
    }
    while ( v8 );
  }
  return number;
}

/*
==============
UpdateDriveVehicleState
==============
*/
void UpdateDriveVehicleState(const LocalClientNum_t localClientNum, int msec)
{
  __int64 v2; 
  const dvar_t *v4; 
  __int16 v5; 
  LocalClientNum_t v6; 
  float integer; 
  __int16 v8; 
  const entityState_t *EntityState; 
  int RandomEnemy; 
  vec3_t v11; 
  vec3_t trBase; 
  AutomatedInput_Record records; 

  v2 = localClientNum;
  if ( s_internalState[localClientNum] != DriveAroundInternalState_DriveVehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\states\\atclient_statemachinedrivearound.cpp", 218, ASSERT_TYPE_ASSERT, "(s_internalState[localClientNum] == DriveAroundInternalState_DriveVehicle)", (const char *)&queryFormat, "s_internalState[localClientNum] == DriveAroundInternalState_DriveVehicle") )
    __debugbreak();
  s_driveInputTimerMS[v2] = s_driveInputTimerMS[v2] - (float)msec;
  if ( ATClient_IsTargetingEnemy((const LocalClientNum_t)v2) )
  {
    records.keys.keyBits.array[0] = 4096;
    records.holdTimeSeconds = FLOAT_0_5;
    memset(&records.keys.keyBits.array[1], 0, 40);
    records.deferTimeSeconds = 0.0;
    CL_Input_AddAutomatedSequence((LocalClientNum_t)v2, &records, 1);
  }
  if ( s_driveInputTimerMS[v2] <= 0.0 )
  {
    v4 = DVARINT_ATClient_DriveToTargetInputDurationMS;
    if ( !DVARINT_ATClient_DriveToTargetInputDurationMS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_DriveToTargetInputDurationMS") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v4);
    v5 = s_destination[v2];
    v6 = (int)v2;
    integer = (float)v4->current.integer;
    v8 = 2047;
    s_driveInputTimerMS[v2] = integer;
    if ( v5 != 2047 )
    {
      EntityState = ATClient_GetEntityState((const LocalClientNum_t)v2, v5);
      if ( EntityState )
      {
        Trajectory_GetTrBase(&EntityState->lerp.pos, &trBase);
        v11 = trBase;
        ATClient_DriveTo((const LocalClientNum_t)v2, &v11);
        return;
      }
      v6 = (int)v2;
    }
    RandomEnemy = ATClient_GetRandomEnemy(v6);
    if ( RandomEnemy != -1 )
      v8 = RandomEnemy;
    s_destination[v2] = v8;
  }
}

/*
==============
UpdateGoToVehicleState
==============
*/
void UpdateGoToVehicleState(const LocalClientNum_t localClientNum)
{
  __int128 v1; 
  __int64 v2; 
  const entityState_t *EntityState; 
  ClActiveClientMP *ClientMP; 
  float *v5; 
  float v6; 
  float v7; 
  float v8; 
  const dvar_t *v9; 
  float v10; 
  const dvar_t *v11; 
  vec3_t v12; 
  vec3_t trBase; 
  AutomatedInput_Record records; 
  __int128 v15; 

  v2 = localClientNum;
  if ( s_internalState[localClientNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\states\\atclient_statemachinedrivearound.cpp", 151, ASSERT_TYPE_ASSERT, "(s_internalState[localClientNum] == DriveAroundInternalState_GoToVehicle)", (const char *)&queryFormat, "s_internalState[localClientNum] == DriveAroundInternalState_GoToVehicle") )
    __debugbreak();
  EntityState = ATClient_GetEntityState((const LocalClientNum_t)v2, s_targetVehicle[v2]);
  if ( !EntityState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\states\\atclient_statemachinedrivearound.cpp", 154, ASSERT_TYPE_ASSERT, "(vehicle != nullptr)", (const char *)&queryFormat, "vehicle != nullptr") )
    __debugbreak();
  if ( EntityState->staticState.vehiclePlayer.playerIndex )
  {
    s_targetVehicle[v2] = SelectClosestVehicle((const LocalClientNum_t)v2);
  }
  else
  {
    v15 = v1;
    ClientMP = ClActiveClientMP::GetClientMP((const LocalClientNum_t)v2);
    v5 = (float *)ClientMP->GetPlayerState(ClientMP);
    Trajectory_GetTrBase(&EntityState->lerp.pos, &trBase);
    v6 = trBase.v[0] - v5[12];
    v7 = trBase.v[1] - v5[13];
    v8 = trBase.v[2] - v5[14];
    v9 = DVARFLT_ATClient_MaxDistSqToEnterVehicle;
    v10 = (float)((float)(v7 * v7) + (float)(v6 * v6)) + (float)(v8 * v8);
    if ( !DVARFLT_ATClient_MaxDistSqToEnterVehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_MaxDistSqToEnterVehicle") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    if ( v10 >= v9->current.value )
    {
      v12 = trBase;
      ATClient_WalkTo((const LocalClientNum_t)v2, &v12);
    }
    else
    {
      Com_Printf(14, "Enter Vehicle\n");
      records.keys.keyBits.array[0] = 0x10000000;
      memset(&records.keys.keyBits.array[1], 0, 40);
      records.deferTimeSeconds = 0.0;
      records.holdTimeSeconds = FLOAT_0_5;
      CL_Input_AddAutomatedSequence((LocalClientNum_t)v2, &records, 1);
      v11 = DVARINT_ATClient_EnterVehicleDurationMS;
      s_internalState[v2] = DriveAroundInternalState_EnterVehicle;
      if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_EnterVehicleDurationMS") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v11);
      s_enterVehicleTimerMS[v2] = v11->current.integer;
    }
  }
}

