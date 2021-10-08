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
  __int64 v2; 
  AutomatedInput_Record records; 

  v2 = localClientNum;
  Com_Printf(14, "Exit Vehicle\n");
  __asm { vmovss  xmm1, cs:__real@3f800000 }
  records.keys.keyBits.array[0] = 0x10000000;
  __asm { vxorps  xmm0, xmm0, xmm0 }
  memset(&records.keys.keyBits.array[1], 0, 24);
  __asm
  {
    vmovss  [rsp+68h+records.deferTimeSeconds], xmm0
    vmovss  [rsp+68h+records.holdTimeSeconds], xmm1
    vmovups xmmword ptr [rsp+68h+records.moveStick], xmm0
  }
  CL_Input_AddAutomatedSequence((LocalClientNum_t)v2, &records, 1);
  s_exitVehicleTimeMS[v2] = Sys_Milliseconds();
}

/*
==============
SelectClosestVehicle
==============
*/
__int64 SelectClosestVehicle(const LocalClientNum_t localClientNum)
{
  signed __int64 v1; 
  void *v4; 
  unsigned __int16 number; 
  __int64 VehicleList; 
  ClActiveClientMP *ClientMP; 
  __int64 v10; 
  const playerState_s *v11; 
  entityState_t *p_vehicles; 
  char v13; 
  __int64 result; 
  entityState_t vehicles; 
  char v19; 

  v4 = alloca(v1);
  __asm
  {
    vmovaps [rsp+30B8h+var_18], xmm6
    vmovss  xmm6, cs:__real@7f7fffff
  }
  number = 2047;
  VehicleList = ATClient_GetVehicleList(localClientNum, &vehicles, 50);
  ClientMP = ClActiveClientMP::GetClientMP(localClientNum);
  v10 = VehicleList;
  v11 = ClientMP->GetPlayerState(ClientMP);
  if ( (int)VehicleList > 0 )
  {
    p_vehicles = &vehicles;
    do
    {
      if ( !p_vehicles->staticState.vehiclePlayer.playerIndex )
      {
        *(double *)&_XMM0 = ATClient_GetDistSqToEntity(v11, p_vehicles);
        __asm { vcomiss xmm0, xmm6 }
        if ( v13 )
        {
          number = p_vehicles->number;
          __asm { vmovaps xmm6, xmm0 }
        }
      }
      ++p_vehicles;
      --v10;
    }
    while ( v10 );
  }
  result = number;
  _R11 = &v19;
  __asm { vmovaps xmm6, xmmword ptr [r11-10h] }
  return result;
}

/*
==============
UpdateDriveVehicleState
==============
*/
void UpdateDriveVehicleState(const LocalClientNum_t localClientNum, int msec)
{
  bool IsTargetingEnemy; 
  char v13; 
  const dvar_t *v15; 
  __int16 v16; 
  LocalClientNum_t v17; 
  __int16 v20; 
  const entityState_t *EntityState; 
  int RandomEnemy; 
  vec3_t v26; 
  vec3_t trBase; 
  AutomatedInput_Record records; 
  char v29; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-18h], xmm6 }
  _RBX = localClientNum;
  _R14 = 0x140000000ui64;
  if ( s_internalState[localClientNum] != DriveAroundInternalState_DriveVehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\states\\atclient_statemachinedrivearound.cpp", 218, ASSERT_TYPE_ASSERT, "(s_internalState[localClientNum] == DriveAroundInternalState_DriveVehicle)", (const char *)&queryFormat, "s_internalState[localClientNum] == DriveAroundInternalState_DriveVehicle") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, rva s_driveInputTimerMS[r14+rbx*4]
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, esi
    vsubss  xmm1, xmm0, xmm1
    vmovss  rva s_driveInputTimerMS[r14+rbx*4], xmm1
  }
  IsTargetingEnemy = ATClient_IsTargetingEnemy((const LocalClientNum_t)_RBX);
  __asm { vxorps  xmm6, xmm6, xmm6 }
  v13 = 0;
  if ( IsTargetingEnemy )
  {
    __asm { vmovss  xmm0, cs:__real@3f000000 }
    records.keys.keyBits.array[0] = 4096;
    __asm
    {
      vmovss  [rsp+0B8h+records.holdTimeSeconds], xmm0
      vxorps  xmm0, xmm0, xmm0
    }
    memset(&records.keys.keyBits.array[1], 0, 24);
    __asm
    {
      vmovss  [rsp+0B8h+records.deferTimeSeconds], xmm6
      vmovups xmmword ptr [rsp+0B8h+records.moveStick], xmm0
    }
    CL_Input_AddAutomatedSequence((LocalClientNum_t)_RBX, &records, 1);
  }
  __asm { vcomiss xmm6, rva s_driveInputTimerMS[r14+rbx*4] }
  if ( !v13 )
  {
    v15 = DVARINT_ATClient_DriveToTargetInputDurationMS;
    if ( !DVARINT_ATClient_DriveToTargetInputDurationMS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_DriveToTargetInputDurationMS") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v15);
    v16 = s_destination[_RBX];
    v17 = (int)_RBX;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, dword ptr [rsi+28h]
    }
    v20 = 2047;
    __asm { vmovss  rva s_driveInputTimerMS[r14+rbx*4], xmm0 }
    if ( v16 != 2047 )
    {
      EntityState = ATClient_GetEntityState((const LocalClientNum_t)_RBX, v16);
      if ( EntityState )
      {
        Trajectory_GetTrBase(&EntityState->lerp.pos, &trBase);
        __asm { vmovsd  xmm0, qword ptr [rsp+0B8h+trBase] }
        v26.v[2] = trBase.v[2];
        __asm { vmovsd  [rsp+0B8h+var_78], xmm0 }
        ATClient_DriveTo((const LocalClientNum_t)_RBX, &v26);
        goto LABEL_17;
      }
      v17 = (int)_RBX;
    }
    RandomEnemy = ATClient_GetRandomEnemy(v17);
    if ( RandomEnemy != -1 )
      v20 = RandomEnemy;
    s_destination[_RBX] = v20;
  }
LABEL_17:
  _R11 = &v29;
  __asm { vmovaps xmm6, xmmword ptr [r11-10h] }
}

/*
==============
UpdateGoToVehicleState
==============
*/
void UpdateGoToVehicleState(const LocalClientNum_t localClientNum)
{
  __int64 v2; 
  const entityState_t *EntityState; 
  ClActiveClientMP *ClientMP; 
  char v18; 
  const dvar_t *v21; 
  vec3_t v23; 
  vec3_t trBase; 
  AutomatedInput_Record records; 

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
    __asm { vmovaps [rsp+0C8h+var_28], xmm6 }
    ClientMP = ClActiveClientMP::GetClientMP((const LocalClientNum_t)v2);
    ClientMP->GetPlayerState(ClientMP);
    Trajectory_GetTrBase(&EntityState->lerp.pos, &trBase);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+0C8h+trBase]
      vsubss  xmm3, xmm0, dword ptr [rbx+30h]
      vmovss  xmm1, dword ptr [rsp+0C8h+trBase+4]
      vsubss  xmm2, xmm1, dword ptr [rbx+34h]
      vmovss  xmm0, dword ptr [rsp+0C8h+trBase+8]
      vsubss  xmm4, xmm0, dword ptr [rbx+38h]
    }
    _RBX = DVARFLT_ATClient_MaxDistSqToEnterVehicle;
    __asm
    {
      vmulss  xmm2, xmm2, xmm2
      vmulss  xmm1, xmm3, xmm3
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm3, xmm2, xmm1
      vaddss  xmm6, xmm3, xmm0
    }
    if ( !DVARFLT_ATClient_MaxDistSqToEnterVehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_MaxDistSqToEnterVehicle") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm
    {
      vcomiss xmm6, dword ptr [rbx+28h]
      vmovaps xmm6, [rsp+0C8h+var_28]
    }
    if ( v18 )
    {
      Com_Printf(14, "Enter Vehicle\n");
      __asm { vmovss  xmm1, cs:__real@3f000000 }
      records.keys.keyBits.array[0] = 0x10000000;
      __asm { vxorps  xmm0, xmm0, xmm0 }
      memset(&records.keys.keyBits.array[1], 0, 24);
      __asm
      {
        vmovss  [rsp+0C8h+records.deferTimeSeconds], xmm0
        vmovss  [rsp+0C8h+records.holdTimeSeconds], xmm1
        vmovups xmmword ptr [rsp+0C8h+records.moveStick], xmm0
      }
      CL_Input_AddAutomatedSequence((LocalClientNum_t)v2, &records, 1);
      v21 = DVARINT_ATClient_EnterVehicleDurationMS;
      s_internalState[v2] = DriveAroundInternalState_EnterVehicle;
      if ( !v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_EnterVehicleDurationMS") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v21);
      s_enterVehicleTimerMS[v2] = v21->current.integer;
    }
    else
    {
      __asm { vmovsd  xmm0, qword ptr [rsp+0C8h+trBase] }
      v23.v[2] = trBase.v[2];
      __asm { vmovsd  [rsp+0C8h+var_88], xmm0 }
      ATClient_WalkTo((const LocalClientNum_t)v2, &v23);
    }
  }
}

