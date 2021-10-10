/*
==============
ATClient_GetOmnvarValueInt32
==============
*/

bool __fastcall ATClient_GetOmnvarValueInt32(const LocalClientNum_t localClientNum, const char *const omnvarName, const int defaultValue, int *outResult)
{
  return ?ATClient_GetOmnvarValueInt32@@YA_NW4LocalClientNum_t@@QEBDHAEAH@Z(localClientNum, omnvarName, defaultValue, outResult);
}

/*
==============
ATClient_GetPlayerAngles
==============
*/

vec3_t *__fastcall ATClient_GetPlayerAngles(vec3_t *result, const LocalClientNum_t localClientNum)
{
  return ?ATClient_GetPlayerAngles@@YA?ATvec3_t@@W4LocalClientNum_t@@@Z(result, localClientNum);
}

/*
==============
ATClient_GetPlayerForwardVector
==============
*/

vec3_t *__fastcall ATClient_GetPlayerForwardVector(vec3_t *result, const LocalClientNum_t localClientNum)
{
  return ?ATClient_GetPlayerForwardVector@@YA?ATvec3_t@@W4LocalClientNum_t@@@Z(result, localClientNum);
}

/*
==============
ATClient_GetClosestObjective
==============
*/

int __fastcall ATClient_GetClosestObjective(const LocalClientNum_t localClientNum, const int sideFlags)
{
  return ?ATClient_GetClosestObjective@@YAHW4LocalClientNum_t@@H@Z(localClientNum, sideFlags);
}

/*
==============
ATClient_GetObjectivesWithState
==============
*/

int __fastcall ATClient_GetObjectivesWithState(const LocalClientNum_t localClientNum, const objectiveState_t state, ObjectiveView *objectives, const int maxObjectives)
{
  return ?ATClient_GetObjectivesWithState@@YAHW4LocalClientNum_t@@W4objectiveState_t@@PEAUObjectiveView@@H@Z(localClientNum, state, objectives, maxObjectives);
}

/*
==============
ATClient_GetLocalPlayerObjective
==============
*/

const ObjectiveView *__fastcall ATClient_GetLocalPlayerObjective(const LocalClientNum_t localClientNum, const int index)
{
  return ?ATClient_GetLocalPlayerObjective@@YAPEBUObjectiveView@@W4LocalClientNum_t@@H@Z(localClientNum, index);
}

/*
==============
ATClient_GetRandomEnemy
==============
*/

int __fastcall ATClient_GetRandomEnemy(const LocalClientNum_t localClientNum)
{
  return ?ATClient_GetRandomEnemy@@YAHW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
ATClient_GetOmnvarValueBool
==============
*/

bool __fastcall ATClient_GetOmnvarValueBool(const LocalClientNum_t localClientNum, const char *const omnvarName, const bool defaultValue, bool *outResult)
{
  return ?ATClient_GetOmnvarValueBool@@YA_NW4LocalClientNum_t@@QEBD_NAEA_N@Z(localClientNum, omnvarName, defaultValue, outResult);
}

/*
==============
ATClient_GenerateInputsToMoveToPos
==============
*/

void __fastcall ATClient_GenerateInputsToMoveToPos(const LocalClientNum_t localClientNum, const vec3_t *targetPos, const int durationMS, const ATClient_MoveInput moveInput, const bool scaleDownInputsBasedOnTargetProximity, const bool jump)
{
  ?ATClient_GenerateInputsToMoveToPos@@YAXW4LocalClientNum_t@@Tvec3_t@@HW4ATClient_MoveInput@@_N3@Z(localClientNum, targetPos, durationMS, moveInput, scaleDownInputsBasedOnTargetProximity, jump);
}

/*
==============
ATClient_AmmoAvailableForWeapon
==============
*/

bool __fastcall ATClient_AmmoAvailableForWeapon(const playerState_s *playerState, const Weapon *weapon)
{
  return ?ATClient_AmmoAvailableForWeapon@@YA_NPEBUplayerState_s@@PEBUWeapon@@@Z(playerState, weapon);
}

/*
==============
ATClient_IsTargetingEnemy
==============
*/

bool __fastcall ATClient_IsTargetingEnemy(const LocalClientNum_t localClientNum)
{
  return ?ATClient_IsTargetingEnemy@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
ATClient_GetClosestEnemyVehicle
==============
*/

__int16 __fastcall ATClient_GetClosestEnemyVehicle(const LocalClientNum_t localClientNum)
{
  return ?ATClient_GetClosestEnemyVehicle@@YAFW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
ATClient_GetBlackboard
==============
*/

ATClientBlackboard *__fastcall ATClient_GetBlackboard(const LocalClientNum_t localClientNum)
{
  return ?ATClient_GetBlackboard@@YAPEAUATClientBlackboard@@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
ATClient_DevHost_UnsubscribeToStates
==============
*/

void ATClient_DevHost_UnsubscribeToStates(void)
{
  ?ATClient_DevHost_UnsubscribeToStates@@YAXXZ();
}

/*
==============
ATClient_DevHost_SubscribeToStates
==============
*/

void ATClient_DevHost_SubscribeToStates(void)
{
  ?ATClient_DevHost_SubscribeToStates@@YAXXZ();
}

/*
==============
ATClient_InitNav
==============
*/

void ATClient_InitNav(void)
{
  ?ATClient_InitNav@@YAXXZ();
}

/*
==============
ATClient_IsLocalClientWounded
==============
*/

bool __fastcall ATClient_IsLocalClientWounded(const LocalClientNum_t localClientNum)
{
  return ?ATClient_IsLocalClientWounded@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
ATClient_IsLocalClientSkydiving
==============
*/

bool __fastcall ATClient_IsLocalClientSkydiving(const LocalClientNum_t localClientNum)
{
  return ?ATClient_IsLocalClientSkydiving@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
ATClient_UiNavConfigReset
==============
*/

void ATClient_UiNavConfigReset(void)
{
  ?ATClient_UiNavConfigReset@@YAXXZ();
}

/*
==============
ATClient_GetClosestEnemyToLocalPlayer
==============
*/

int __fastcall ATClient_GetClosestEnemyToLocalPlayer(const LocalClientNum_t localClientNum)
{
  return ?ATClient_GetClosestEnemyToLocalPlayer@@YAHW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
ATClient_NavIsInitialized
==============
*/

bool __fastcall ATClient_NavIsInitialized()
{
  return ?ATClient_NavIsInitialized@@YA_NXZ();
}

/*
==============
ATClient_GetObjectivePosition
==============
*/

vec3_t *__fastcall ATClient_GetObjectivePosition(vec3_t *result, const LocalClientNum_t localClientNum, const ObjectiveView *const objective)
{
  return ?ATClient_GetObjectivePosition@@YA?ATvec3_t@@W4LocalClientNum_t@@QEBUObjectiveView@@@Z(result, localClientNum, objective);
}

/*
==============
ATClient_IsClientAlive
==============
*/

bool __fastcall ATClient_IsClientAlive(const clientState_t *const clientState)
{
  return ?ATClient_IsClientAlive@@YA_NQEBUclientState_t@@@Z(clientState);
}

/*
==============
ATClient_GetLocalClientState
==============
*/

const clientState_t *__fastcall ATClient_GetLocalClientState(const LocalClientNum_t localClientNum)
{
  return ?ATClient_GetLocalClientState@@YAPEBUclientState_t@@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
ATClient_DriveTo
==============
*/

void __fastcall ATClient_DriveTo(const LocalClientNum_t localClientNum, const vec3_t *destination)
{
  ?ATClient_DriveTo@@YAXW4LocalClientNum_t@@Tvec3_t@@@Z(localClientNum, destination);
}

/*
==============
ATClient_GetMapName
==============
*/

const char *__fastcall ATClient_GetMapName()
{
  return ?ATClient_GetMapName@@YAPEBDXZ();
}

/*
==============
ATClient_GetDistSqToEntity
==============
*/

double __fastcall ATClient_GetDistSqToEntity(const playerState_s *playerState, const entityState_t *entity)
{
  double result; 

  *(float *)&result = ?ATClient_GetDistSqToEntity@@YAMPEBUplayerState_s@@PEBUentityState_t@@@Z(playerState, entity);
  return result;
}

/*
==============
ATClient_CutParachute
==============
*/

void __fastcall ATClient_CutParachute(const LocalClientNum_t localClientNum)
{
  ?ATClient_CutParachute@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
ATClient_IsLocalClientInInfil
==============
*/

bool __fastcall ATClient_IsLocalClientInInfil(const LocalClientNum_t localClientNum)
{
  return ?ATClient_IsLocalClientInInfil@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
ATClient_GetLocalPlayerTeam
==============
*/

team_t __fastcall ATClient_GetLocalPlayerTeam(const LocalClientNum_t localClientNum)
{
  return ?ATClient_GetLocalPlayerTeam@@YA?AW4team_t@@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
ATClient_AimAt
==============
*/

void __fastcall ATClient_AimAt(const LocalClientNum_t localClientNum, const vec3_t *destination, const bool ads)
{
  ?ATClient_AimAt@@YAXW4LocalClientNum_t@@Tvec3_t@@_N@Z(localClientNum, destination, ads);
}

/*
==============
ATClient_ShutdownNav
==============
*/

void ATClient_ShutdownNav(void)
{
  ?ATClient_ShutdownNav@@YAXXZ();
}

/*
==============
ATClient_GetRemotePlayerEntityState
==============
*/

const entityState_t *__fastcall ATClient_GetRemotePlayerEntityState(const ClActiveClientMP *const cl, const int clientNum)
{
  return ?ATClient_GetRemotePlayerEntityState@@YAPEBUentityState_t@@QEBVClActiveClientMP@@H@Z(cl, clientNum);
}

/*
==============
ATClient_GetRandomObjective
==============
*/

int __fastcall ATClient_GetRandomObjective(const LocalClientNum_t localClientNum, const int sideFlags)
{
  return ?ATClient_GetRandomObjective@@YAHW4LocalClientNum_t@@H@Z(localClientNum, sideFlags);
}

/*
==============
ATClient_GetVehicleDef
==============
*/

const VehicleDef *__fastcall ATClient_GetVehicleDef(const entityState_t *vehicleES)
{
  return ?ATClient_GetVehicleDef@@YAPEBUVehicleDef@@PEBUentityState_t@@@Z(vehicleES);
}

/*
==============
ATClient_GetClosestEnemyToPos
==============
*/

int __fastcall ATClient_GetClosestEnemyToPos(const LocalClientNum_t localClientNum, const vec3_t *pos)
{
  return ?ATClient_GetClosestEnemyToPos@@YAHW4LocalClientNum_t@@Tvec3_t@@@Z(localClientNum, pos);
}

/*
==============
ATClient_GetEnemyList
==============
*/

int __fastcall ATClient_GetEnemyList(const LocalClientNum_t localClientNum, int *clientNums, const int maxClientNums)
{
  return ?ATClient_GetEnemyList@@YAHW4LocalClientNum_t@@PEAHH@Z(localClientNum, clientNums, maxClientNums);
}

/*
==============
ATClient_WalkTo
==============
*/

void __fastcall ATClient_WalkTo(const LocalClientNum_t localClientNum, const vec3_t *destination)
{
  ?ATClient_WalkTo@@YAXW4LocalClientNum_t@@Tvec3_t@@@Z(localClientNum, destination);
}

/*
==============
ATClient_UiNavConfigGet
==============
*/

const char *__fastcall ATClient_UiNavConfigGet()
{
  return ?ATClient_UiNavConfigGet@@YAPEBDXZ();
}

/*
==============
ATClient_ResetBlackboard
==============
*/

void __fastcall ATClient_ResetBlackboard(const LocalClientNum_t localClientNum)
{
  ?ATClient_ResetBlackboard@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
ATClient_OnSnapshotApplied
==============
*/

void __fastcall ATClient_OnSnapshotApplied(const LocalClientNum_t localClientNum)
{
  ?ATClient_OnSnapshotApplied@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
ATClient_GetVehicleList
==============
*/

int __fastcall ATClient_GetVehicleList(const LocalClientNum_t localClientNum, entityState_t *vehicles, const int maxVehicles)
{
  return ?ATClient_GetVehicleList@@YAHW4LocalClientNum_t@@PEAUentityState_t@@H@Z(localClientNum, vehicles, maxVehicles);
}

/*
==============
ATClient_DevHost_ShouldSendStates
==============
*/

bool __fastcall ATClient_DevHost_ShouldSendStates()
{
  return ?ATClient_DevHost_ShouldSendStates@@YA_NXZ();
}

/*
==============
ATClient_GetEntityState
==============
*/

const entityState_t *__fastcall ATClient_GetEntityState(const LocalClientNum_t localClientNum, const __int16 entityNum)
{
  return ?ATClient_GetEntityState@@YAPEBUentityState_t@@W4LocalClientNum_t@@F@Z(localClientNum, entityNum);
}

/*
==============
ATClient_GetRemotePlayerClientState
==============
*/

const clientState_t *__fastcall ATClient_GetRemotePlayerClientState(const LocalClientNum_t localClientNum, const int clientNum)
{
  return ?ATClient_GetRemotePlayerClientState@@YAPEBUclientState_t@@W4LocalClientNum_t@@H@Z(localClientNum, clientNum);
}

/*
==============
ATClient_IsLocalClientInVehicle
==============
*/

bool __fastcall ATClient_IsLocalClientInVehicle(const LocalClientNum_t localClientNum)
{
  return ?ATClient_IsLocalClientInVehicle@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
ATClient_GenerateInputsToDriveToPos
==============
*/

void __fastcall ATClient_GenerateInputsToDriveToPos(const LocalClientNum_t localClientNum, const vec3_t *targetPos, const int durationMS, const bool scaleDownInputsBasedOnTargetProximity)
{
  ?ATClient_GenerateInputsToDriveToPos@@YAXW4LocalClientNum_t@@Tvec3_t@@H_N@Z(localClientNum, targetPos, durationMS, scaleDownInputsBasedOnTargetProximity);
}

/*
==============
ATClient_AimAt
==============
*/
void ATClient_AimAt(const LocalClientNum_t localClientNum, const vec3_t *destination, const bool ads)
{
  const dvar_t *v3; 
  float v7; 
  int integer; 
  const dvar_t *v9; 
  float v10; 
  vec3_t v11; 
  AutomatedInput_Record records; 

  v3 = DVARINT_ATClient_MoveToTargetInputDurationMS;
  if ( !DVARINT_ATClient_MoveToTargetInputDurationMS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_MoveToTargetInputDurationMS") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  v7 = destination->v[2];
  integer = v3->current.integer;
  *(_QWORD *)v11.v = *(_QWORD *)destination->v;
  v11.v[2] = v7;
  ATClient_GenerateInputsToMoveToPos(localClientNum, &v11, integer, ATClient_MoveInput_Orientation, 0, 0);
  if ( ads )
  {
    v9 = DVARINT_ATClient_MoveToTargetInputDurationMS;
    records.deferTimeSeconds = 0.0;
    if ( !DVARINT_ATClient_MoveToTargetInputDurationMS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_MoveToTargetInputDurationMS") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    v10 = (float)v9->current.integer * 0.001;
    memset(&records.keys.keyBits.array[1], 0, 40);
    records.holdTimeSeconds = v10;
    records.keys.keyBits.array[0] = 0x2000;
    CL_Input_AddAutomatedSequence(localClientNum, &records, 1);
  }
}

/*
==============
ATClient_AmmoAvailableForWeapon
==============
*/
char ATClient_AmmoAvailableForWeapon(const playerState_s *playerState, const Weapon *weapon)
{
  bool v4; 
  int v5; 
  int v6; 
  int ammoCount; 
  AmmoStore result; 
  AmmoStore r_ammo2; 

  if ( playerState )
  {
    if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&playerState->weapCommon.weapFlags, ACTIVE, 0x22u) )
      goto LABEL_7;
    if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&playerState->weapCommon.weapFlags, ACTIVE, 0x11u) )
    {
LABEL_6:
      v4 = 1;
      goto LABEL_8;
    }
  }
  if ( playerState && GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&playerState->weapCommon.weapFlags, ACTIVE, 0x1Bu) )
    goto LABEL_6;
LABEL_7:
  v4 = 0;
LABEL_8:
  if ( !playerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1322, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  r_ammo2 = *BG_AmmoStoreForWeapon(&result, weapon, v4);
  if ( !playerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1304, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v5 = 0;
  v6 = 0;
  while ( !BG_IsAmmoCompatible(&playerState->weapCommon.ammoNotInClip[v6].ammoType, &r_ammo2) )
  {
    if ( (unsigned int)++v6 >= 0xF )
      goto LABEL_17;
  }
  if ( (const playerState_s *)((char *)playerState + 68 * v6) == (const playerState_s *)-1912i64 )
  {
LABEL_17:
    ammoCount = 0;
    goto LABEL_18;
  }
  ammoCount = playerState->weapCommon.ammoNotInClip[v6].ammoCount;
LABEL_18:
  if ( !playerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1257, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  r_ammo2 = *BG_AmmoStoreForWeapon(&result, weapon, v4);
  while ( !BG_IsClipCompatible(&playerState->weapCommon.ammoInClip[v5].clipIndex, &r_ammo2) )
  {
    if ( (unsigned int)++v5 >= 0xF )
      return ammoCount > 0;
  }
  if ( playerState->weapCommon.ammoInClip[v5].ammoCount[0] + playerState->weapCommon.ammoInClip[v5].ammoCount[1] > 0 )
    return 1;
  return ammoCount > 0;
}

/*
==============
ATClient_CutParachute
==============
*/
void ATClient_CutParachute(const LocalClientNum_t localClientNum)
{
  const dvar_t *v1; 
  float v3; 
  AutomatedInput_Record records; 

  v1 = DVARINT_ATClient_MoveToTargetInputDurationMS;
  records.deferTimeSeconds = 0.0;
  if ( !DVARINT_ATClient_MoveToTargetInputDurationMS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_MoveToTargetInputDurationMS") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  v3 = (float)v1->current.integer * 0.001;
  memset(&records.keys.keyBits.array[1], 0, 40);
  records.holdTimeSeconds = v3;
  records.keys.keyBits.array[0] = 0x20000000;
  CL_Input_AddAutomatedSequence(localClientNum, &records, 1);
}

/*
==============
ATClient_DevHost_ShouldSendStates
==============
*/
_BOOL8 ATClient_DevHost_ShouldSendStates()
{
  return s_devhostShouldSendStates;
}

/*
==============
ATClient_DevHost_SubscribeToStates
==============
*/
void ATClient_DevHost_SubscribeToStates(void)
{
  s_devhostShouldSendStates = 1;
  Cbuf_ExecuteBufferInternal(LOCAL_CLIENT_0, 0, "ATClient_DevHost_SendState", 0, 0);
}

/*
==============
ATClient_DevHost_UnsubscribeToStates
==============
*/
void ATClient_DevHost_UnsubscribeToStates(void)
{
  s_devhostShouldSendStates = 0;
}

/*
==============
ATClient_DriveTo
==============
*/
void ATClient_DriveTo(const LocalClientNum_t localClientNum, const vec3_t *destination)
{
  __int64 v3; 
  double v4; 
  float v5; 
  bool v6; 
  const dvar_t *v7; 
  ClActiveClientMP *ClientMP; 
  vec3_t *v9; 
  nav_space_s *DefaultSpace; 
  int NumSegments; 
  bfx::PolylinePathRCPtr v12; 
  __int64 v13; 
  float v14; 
  float v15; 
  const dvar_t *v16; 
  bfx::PolylinePathRCPtr result; 
  bfx::PolylinePathRCPtr v18; 
  __int64 v19; 
  vec3_t startPos; 
  vec3_t outPath; 
  double v22; 
  float v23; 

  v19 = -2i64;
  v3 = localClientNum;
  v4 = *(double *)destination->v;
  v5 = destination->v[2];
  v6 = 1;
  v7 = DVARBOOL_ATClient_Pathing;
  if ( !DVARBOOL_ATClient_Pathing && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_Pathing") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  if ( v7->current.enabled && s_ATClientNavPathInitialized )
  {
    ClientMP = ClActiveClientMP::GetClientMP((const LocalClientNum_t)v3);
    v9 = (vec3_t *)ClientMP->GetPlayerState(ClientMP);
    Com_Printf(14, "player: %f, %f, %f\n", v9[4].v[0], v9[4].v[1], v9[4].v[2]);
    startPos = v9[4];
    DefaultSpace = Nav_GetDefaultSpace();
    Nav_FindPath(&result, DefaultSpace, &startPos, destination, 0);
    NumSegments = bfx::PolylinePathRCPtr::GetNumSegments(&result);
    if ( NumSegments > 0 )
    {
      bfx::PolylinePathRCPtr::PolylinePathRCPtr(&v18, &result);
      v13 = (unsigned int)Nav_SimplifyPath(DefaultSpace, &startPos, v12, NAV_LAYER_HUMAN, NULL, 128, &outPath);
      Com_Printf(14, "segmentCount %d, numPathPoints %d\n", (unsigned int)NumSegments, v13);
      if ( (int)v13 > 1 )
      {
        v4 = v22;
        v5 = v23;
        v14 = startPos.v[1] - s_previousClientPosition_0[v3].v[1];
        v15 = startPos.v[2] - s_previousClientPosition_0[v3].v[2];
        if ( (float)((float)((float)(v14 * v14) + (float)((float)(startPos.v[0] - s_previousClientPosition_0[v3].v[0]) * (float)(startPos.v[0] - s_previousClientPosition_0[v3].v[0]))) + (float)(v15 * v15)) < 10.0 )
          v6 = (int)v13 <= 2;
        s_previousClientPosition_0[v3] = startPos;
      }
    }
    bfx::PolylinePathRCPtr::~PolylinePathRCPtr(&result);
  }
  *(double *)startPos.v = v4;
  startPos.v[2] = v5;
  v16 = DVARINT_ATClient_DriveToTargetInputDurationMS;
  if ( !DVARINT_ATClient_DriveToTargetInputDurationMS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_DriveToTargetInputDurationMS") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v16);
  ATClient_GenerateInputsToDriveToPos((const LocalClientNum_t)v3, &startPos, v16->current.integer, v6);
}

/*
==============
ATClient_GenerateInputsToDriveToPos
==============
*/
void ATClient_GenerateInputsToDriveToPos(const LocalClientNum_t localClientNum, const vec3_t *targetPos, const int durationMS, const bool scaleDownInputsBasedOnTargetProximity)
{
  __int128 v4; 
  __int128 v5; 
  __int128 v6; 
  __int128 v7; 
  ClActiveClientMP *ClientMP; 
  __int64 v13; 
  __int16 remoteControlEnt; 
  const entityState_t *EntityState; 
  float *v16; 
  float v17; 
  float v18; 
  __int128 v19; 
  float v20; 
  float v24; 
  float v25; 
  float v26; 
  float v27; 
  const VehicleDef *ClientDef; 
  float v29; 
  float v33; 
  const dvar_t *v36; 
  float value; 
  __m128 v38; 
  float v39; 
  float v40; 
  __int128 v42; 
  float v44; 
  const dvar_t *v45; 
  float v46; 
  const dvar_t *v47; 
  float c; 
  float s; 
  float v50[2]; 
  vec2_t v; 
  vec3_t forward; 
  AutomatedInput_Record records; 
  _OWORD v54[7]; 

  ClientMP = ClActiveClientMP::GetClientMP(localClientNum);
  v13 = (__int64)ClientMP->GetPlayerState(ClientMP);
  remoteControlEnt = ClientMP->snap.ps.remoteControlEnt;
  EntityState = NULL;
  v16 = (float *)v13;
  if ( remoteControlEnt >= 248 )
    EntityState = ATClient_GetEntityState(localClientNum, remoteControlEnt);
  v17 = targetPos->v[0] - v16[12];
  v19 = LODWORD(targetPos->v[1]);
  *(float *)&v19 = targetPos->v[1] - v16[13];
  v18 = *(float *)&v19;
  v20 = targetPos->v[2] - v16[14];
  if ( (float)(v17 * v17) > 0.0000010000001 || (float)(*(float *)&v19 * *(float *)&v19) > 0.0000010000001 )
  {
    v54[4] = v4;
    v54[3] = v5;
    _XMM8 = 0i64;
    v54[1] = v6;
    v54[0] = v7;
    if ( (float)((float)(*(float *)&v19 * *(float *)&v19) + (float)(v17 * v17)) <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 639, ASSERT_TYPE_SANITY, "( val > 0 )", (const char *)&queryFormat, "val > 0") )
      __debugbreak();
    memset(&records.keys, 0, sizeof(records.keys));
    *(float *)&v19 = (float)(*(float *)&v19 * *(float *)&v19) + (float)(v17 * v17);
    _XMM1 = v19;
    __asm { vrsqrtss xmm2, xmm1, xmm1 }
    v24 = v18 * *(float *)&_XMM2;
    v25 = (float)(v20 * v20) + *(float *)&v19;
    v26 = FLOAT_1_0;
    records.holdTimeSeconds = (float)durationMS * 0.001;
    records.deferTimeSeconds = 0.0;
    v27 = v17 * *(float *)&_XMM2;
    if ( EntityState )
    {
      ClientDef = CgVehicleSystem::GetClientDef((unsigned int)EntityState->lerp.u.anonymous.data[0] >> 7);
      if ( ClientDef )
      {
        AngleVectors(&EntityState->lerp.apos.trBase, &forward, NULL, NULL);
        v.v[0] = forward.v[0];
        v.v[1] = forward.v[1];
        Vec2NormalizeFast(&v);
        v29 = atan2f_0((float)((float)(v17 * *(float *)&_XMM2) * v.v[1]) - (float)(v24 * v.v[0]), (float)(v27 * v.v[0]) + (float)(v24 * v.v[1]));
        FastSinCos(v29, &s, &c);
        records.moveStick.v[0] = c;
        records.moveStick.v[1] = s;
        if ( ClientDef->type == VEH_CAR )
        {
          _XMM0 = LODWORD(FLOAT_N1_0);
          __asm
          {
            vcmpltss xmm1, xmm8, xmm1
            vblendvps xmm1, xmm0, xmm9, xmm1
          }
          records.moveStick.v[0] = *(float *)&_XMM1;
          v33 = atan2f_0(v24, v27) * 0.15915494;
          _XMM0 = 0i64;
          __asm { vroundss xmm4, xmm0, xmm3, 1 }
          records.moveStick.v[1] = (float)(v33 - *(float *)&_XMM4) * 2.0;
        }
      }
    }
    if ( scaleDownInputsBasedOnTargetProximity )
    {
      v36 = DVARFLT_ATClient_DriveToTargetInputScaleDistanceSq;
      if ( !DVARFLT_ATClient_DriveToTargetInputScaleDistanceSq && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_DriveToTargetInputScaleDistanceSq") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v36);
      value = v36->current.value;
      if ( v25 < value && value > 0.0 )
      {
        records.moveStick.v[0] = (float)(v25 / value) * records.moveStick.v[0];
        records.moveStick.v[1] = (float)(v25 / value) * records.moveStick.v[1];
      }
    }
    v38 = (__m128)*(unsigned __int64 *)ATClient_GetPlayerForwardVector(&forward, localClientNum)->v;
    v39 = _mm_shuffle_ps(v38, v38, 85).m128_f32[0];
    v40 = (float)(v39 * v39) + (float)(v38.m128_f32[0] * v38.m128_f32[0]);
    if ( v40 <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 639, ASSERT_TYPE_SANITY, "( val > 0 )", (const char *)&queryFormat, "val > 0") )
      __debugbreak();
    v42 = 0i64;
    *(float *)&v42 = v40;
    _XMM2 = v42;
    __asm { vrsqrtss xmm2, xmm2, xmm2 }
    v44 = atan2f_0((float)((float)(*(float *)&_XMM2 * v39) * v27) - (float)((float)(v38.m128_f32[0] * *(float *)&_XMM2) * v24), (float)((float)(v38.m128_f32[0] * *(float *)&_XMM2) * v27) + (float)((float)(*(float *)&_XMM2 * v39) * v24));
    FastSinCos(v44, &v50[1], v50);
    if ( scaleDownInputsBasedOnTargetProximity )
    {
      v45 = DVARFLT_ATClient_MoveToTargetInputScaleAngle;
      if ( !DVARFLT_ATClient_MoveToTargetInputScaleAngle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_MoveToTargetInputScaleAngle") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v45);
      v46 = v45->current.value;
      if ( COERCE_FLOAT(LODWORD(v44) & _xmm) < v46 && v46 > 0.0 )
        v26 = COERCE_FLOAT(LODWORD(v44) & _xmm) / v46;
    }
    v47 = DVARBOOL_ATClient_DriveToTargetGenerateInput;
    records.lookStick.v[0] = 0.0;
    records.lookStick.v[1] = (float)(v26 * v44) * 0.31830987;
    if ( !DVARBOOL_ATClient_DriveToTargetGenerateInput && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_DriveToTargetGenerateInput") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v47);
    if ( v47->current.enabled )
      CL_Input_AddAutomatedSequence(localClientNum, &records, 1);
  }
}

/*
==============
ATClient_GenerateInputsToMoveToPos
==============
*/
void ATClient_GenerateInputsToMoveToPos(const LocalClientNum_t localClientNum, const vec3_t *targetPos, const int durationMS, const ATClient_MoveInput moveInput, const bool scaleDownInputsBasedOnTargetProximity, const bool jump)
{
  __int128 v6; 
  ClActiveClientMP *ClientMP; 
  float *v12; 
  float v13; 
  __int128 v14; 
  float v15; 
  float v16; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  __m128 v23; 
  float v24; 
  double Float_Internal_DebugName; 
  const dvar_t *v26; 
  float v27; 
  double v28; 
  const dvar_t *v29; 
  float c; 
  float s; 
  vec3_t result; 
  vec2_t v; 
  AutomatedInput_Record records; 
  _QWORD v35[3]; 

  ClientMP = ClActiveClientMP::GetClientMP(localClientNum);
  v12 = (float *)ClientMP->GetPlayerState(ClientMP);
  v14 = LODWORD(targetPos->v[0]);
  *(float *)&v14 = targetPos->v[0] - v12[12];
  v13 = *(float *)&v14;
  v15 = targetPos->v[1] - v12[13];
  v16 = targetPos->v[2] - v12[14];
  if ( (float)(v13 * v13) > 0.0000010000001 || (float)(v15 * v15) > 0.0000010000001 )
  {
    *(_OWORD *)&v35[1] = v6;
    if ( (float)((float)(*(float *)&v14 * *(float *)&v14) + (float)(v15 * v15)) <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 639, ASSERT_TYPE_SANITY, "( val > 0 )", (const char *)&queryFormat, "val > 0") )
      __debugbreak();
    *(float *)&v14 = (float)(*(float *)&v14 * *(float *)&v14) + (float)(v15 * v15);
    _XMM1 = v14;
    __asm { vrsqrtss xmm2, xmm1, xmm1 }
    v19 = v15 * *(float *)&_XMM2;
    v20 = (float)(v16 * v16) + (float)((float)(v13 * v13) + (float)(v15 * v15));
    v22 = v13 * *(float *)&_XMM2;
    v21 = v13 * *(float *)&_XMM2;
    v23 = (__m128)*(unsigned __int64 *)ATClient_GetPlayerForwardVector(&result, localClientNum)->v;
    LODWORD(v.v[1]) = _mm_shuffle_ps(v23, v23, 85).m128_u32[0];
    v.v[0] = v23.m128_f32[0];
    if ( (float)(v23.m128_f32[0] * v23.m128_f32[0]) > 0.0000010000001 || (float)(v.v[1] * v.v[1]) > 0.0000010000001 )
    {
      Vec2NormalizeFast(&v);
      records.holdTimeSeconds = (float)durationMS * 0.001;
      records.deferTimeSeconds = 0.0;
      memset(&records.keys, 0, sizeof(records.keys));
      v24 = atan2f_0((float)(v22 * v.v[1]) - (float)(v19 * v.v[0]), (float)(v21 * v.v[0]) + (float)(v19 * v.v[1]));
      FastSinCos(v24, &s, &c);
      if ( (unsigned int)moveInput <= ATClient_MoveInput_Position )
      {
        records.moveStick.v[0] = c;
        records.moveStick.v[1] = s;
        if ( scaleDownInputsBasedOnTargetProximity )
        {
          Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DVARFLT_ATClient_MoveToTargetInputScaleDistanceSq, "ATClient_MoveToTargetInputScaleDistanceSq");
          if ( v20 < *(float *)&Float_Internal_DebugName && *(float *)&Float_Internal_DebugName > 0.0 )
          {
            records.moveStick.v[0] = (float)(v20 / *(float *)&Float_Internal_DebugName) * records.moveStick.v[0];
            records.moveStick.v[1] = (float)(v20 / *(float *)&Float_Internal_DebugName) * records.moveStick.v[1];
          }
        }
        v26 = DVARFLT_ATClient_MoveToTargetInputRunDistanceSq;
        if ( !DVARFLT_ATClient_MoveToTargetInputRunDistanceSq && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_MoveToTargetInputRunDistanceSq") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v26);
        if ( v20 > v26->current.value )
          bitarray_base<bitarray<224>>::setBit((bitarray_base<bitarray<224> > *)&records.keys, 0x10u);
        if ( jump )
          bitarray_base<bitarray<224>>::setBit((bitarray_base<bitarray<224> > *)&records.keys, 1u);
      }
      else
      {
        records.moveStick.v[0] = 0.0;
        records.moveStick.v[1] = 0.0;
      }
      if ( (moveInput & 0xFFFFFFFD) != 0 )
      {
        records.lookStick.v[1] = 0.0;
      }
      else
      {
        v27 = FLOAT_1_0;
        if ( scaleDownInputsBasedOnTargetProximity )
        {
          v28 = Dvar_GetFloat_Internal_DebugName(DVARFLT_ATClient_MoveToTargetInputScaleAngle, "ATClient_MoveToTargetInputScaleAngle");
          if ( COERCE_FLOAT(LODWORD(v24) & _xmm) < *(float *)&v28 && *(float *)&v28 > 0.0 )
            v27 = COERCE_FLOAT(LODWORD(v24) & _xmm) / *(float *)&v28;
        }
        records.lookStick.v[1] = (float)(v27 * v24) * 0.31830987;
      }
      v29 = DVARBOOL_ATClient_MoveToTargetGenerateInput;
      records.lookStick.v[0] = 0.0;
      if ( !DVARBOOL_ATClient_MoveToTargetGenerateInput && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_MoveToTargetGenerateInput") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v29);
      if ( v29->current.enabled )
        CL_Input_AddAutomatedSequence(localClientNum, &records, 1);
    }
  }
}

/*
==============
ATClient_GetBlackboard
==============
*/
ATClientBlackboard *ATClient_GetBlackboard(const LocalClientNum_t localClientNum)
{
  return &s_blackboards[localClientNum];
}

/*
==============
ATClient_GetClosestEnemyToLocalPlayer
==============
*/
__int64 ATClient_GetClosestEnemyToLocalPlayer(const LocalClientNum_t localClientNum)
{
  ClActiveClientMP *ClientMP; 
  __int64 v3; 
  unsigned int v4; 
  double v5; 
  ClActiveClientMP *v6; 
  team_t LocalPlayerTeam; 
  float v8; 
  __int64 v9; 
  __int64 v10; 
  float v11; 
  float v12; 
  float v13; 
  __int64 v14; 
  const entityState_t *RemotePlayerEntityState; 
  int v16; 
  float v17; 
  float v18; 
  vec3_t trBase; 

  ClientMP = ClActiveClientMP::GetClientMP(localClientNum);
  v3 = (__int64)ClientMP->GetPlayerState(ClientMP);
  v4 = -1;
  v5 = *(double *)(v3 + 48);
  LODWORD(v3) = *(_DWORD *)(v3 + 56);
  *(double *)trBase.v = v5;
  LODWORD(trBase.v[2]) = v3;
  v6 = ClActiveClientMP::GetClientMP(localClientNum);
  LocalPlayerTeam = ATClient_GetLocalPlayerTeam(localClientNum);
  v8 = FLOAT_3_4028235e38;
  v9 = 0i64;
  v10 = (__int64)v6->GetPlayerState(v6);
  if ( v6->snap.numClients )
  {
    v11 = trBase.v[2];
    v12 = trBase.v[1];
    v13 = trBase.v[0];
    do
    {
      v14 = (__int64)&v6->parseClients[(v9 + v6->snap.parseClientsIndex) % v6->parseClientsCount];
      if ( *(_DWORD *)v14 != *(_DWORD *)(v10 + 460) && (float)*(int *)(v14 + 160) > 0.0 )
      {
        RemotePlayerEntityState = ATClient_GetRemotePlayerEntityState(v6, *(_DWORD *)v14);
        if ( RemotePlayerEntityState )
        {
          v16 = *(_DWORD *)(v14 + 4);
          if ( !v16 || v16 != LocalPlayerTeam )
          {
            Trajectory_GetTrBase(&RemotePlayerEntityState->lerp.pos, &trBase);
            v17 = (float)(trBase.v[1] - v12) * (float)(trBase.v[1] - v12);
            v18 = (float)(trBase.v[2] - v11) * (float)(trBase.v[2] - v11);
            if ( (float)((float)(v17 + (float)((float)(trBase.v[0] - v13) * (float)(trBase.v[0] - v13))) + v18) < v8 )
            {
              v4 = *(_DWORD *)v14;
              v8 = (float)(v17 + (float)((float)(trBase.v[0] - v13) * (float)(trBase.v[0] - v13))) + v18;
            }
          }
        }
      }
      ++v9;
    }
    while ( v9 < v6->snap.numClients );
  }
  return v4;
}

/*
==============
ATClient_GetClosestEnemyToPos
==============
*/
__int64 ATClient_GetClosestEnemyToPos(const LocalClientNum_t localClientNum, const vec3_t *pos)
{
  unsigned int v4; 
  ClActiveClientMP *ClientMP; 
  team_t LocalPlayerTeam; 
  float v7; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 
  const entityState_t *RemotePlayerEntityState; 
  int v12; 
  float v13; 
  float v14; 
  vec3_t trBase; 

  v4 = -1;
  ClientMP = ClActiveClientMP::GetClientMP(localClientNum);
  LocalPlayerTeam = ATClient_GetLocalPlayerTeam(localClientNum);
  v7 = FLOAT_3_4028235e38;
  v8 = 0i64;
  v9 = (__int64)ClientMP->GetPlayerState(ClientMP);
  if ( ClientMP->snap.numClients )
  {
    do
    {
      v10 = (__int64)&ClientMP->parseClients[(v8 + ClientMP->snap.parseClientsIndex) % ClientMP->parseClientsCount];
      if ( *(_DWORD *)v10 != *(_DWORD *)(v9 + 460) && (float)*(int *)(v10 + 160) > 0.0 )
      {
        RemotePlayerEntityState = ATClient_GetRemotePlayerEntityState(ClientMP, *(_DWORD *)v10);
        if ( RemotePlayerEntityState )
        {
          v12 = *(_DWORD *)(v10 + 4);
          if ( !v12 || v12 != LocalPlayerTeam )
          {
            Trajectory_GetTrBase(&RemotePlayerEntityState->lerp.pos, &trBase);
            v13 = (float)(trBase.v[1] - pos->v[1]) * (float)(trBase.v[1] - pos->v[1]);
            v14 = (float)(trBase.v[2] - pos->v[2]) * (float)(trBase.v[2] - pos->v[2]);
            if ( (float)((float)(v13 + (float)((float)(trBase.v[0] - pos->v[0]) * (float)(trBase.v[0] - pos->v[0]))) + v14) < v7 )
            {
              v4 = *(_DWORD *)v10;
              v7 = (float)(v13 + (float)((float)(trBase.v[0] - pos->v[0]) * (float)(trBase.v[0] - pos->v[0]))) + v14;
            }
          }
        }
      }
      ++v8;
    }
    while ( v8 < ClientMP->snap.numClients );
  }
  return v4;
}

/*
==============
ATClient_GetClosestEnemyVehicle
==============
*/
__int64 ATClient_GetClosestEnemyVehicle(const LocalClientNum_t localClientNum)
{
  signed __int64 v1; 
  void *v2; 
  unsigned __int16 v4; 
  ClActiveClientMP *ClientMP; 
  team_t LocalPlayerTeam; 
  float v7; 
  float *v8; 
  __int64 v9; 
  ClActiveClientMP *v10; 
  __int64 v11; 
  __int64 numEntities; 
  __int64 parseEntitiesIndex; 
  char *v14; 
  entityState_t *parseEntities; 
  __int64 v16; 
  __int64 parseEntitiesCount; 
  entityState_t *v18; 
  __int128 v19; 
  __int64 v20; 
  char *v21; 
  int v22; 
  ClActiveClientMP *v23; 
  __int64 v24; 
  __int64 numClients; 
  __int64 parseClientsIndex; 
  clientState_t *parseClients; 
  __int64 parseClientsCount; 
  clientState_t *v29; 
  team_t team; 
  vec3_t trBase; 
  char v33; 
  char v34; 

  v2 = alloca(v1);
  v4 = 2047;
  ClientMP = ClActiveClientMP::GetClientMP(localClientNum);
  LocalPlayerTeam = ATClient_GetLocalPlayerTeam(localClientNum);
  v7 = FLOAT_3_4028235e38;
  v8 = (float *)ClientMP->GetPlayerState(ClientMP);
  LODWORD(v9) = 0;
  v10 = ClActiveClientMP::GetClientMP(localClientNum);
  v11 = 0i64;
  numEntities = v10->snap.numEntities;
  if ( v10->snap.numEntities )
  {
    parseEntitiesIndex = v10->snap.parseEntitiesIndex;
    v14 = &v33;
    parseEntities = v10->parseEntities;
    v16 = 0i64;
    parseEntitiesCount = v10->parseEntitiesCount;
    do
    {
      v18 = &parseEntities[(parseEntitiesIndex + v11) % parseEntitiesCount];
      if ( v18->eType == ET_VEHICLE )
      {
        if ( v16 >= 100 )
          break;
        *(__m256i *)v14 = *(__m256i *)&v18->number;
        *((__m256i *)v14 + 1) = *(__m256i *)&v18->lerp.pos.trBase.y;
        *((__m256i *)v14 + 2) = *(__m256i *)v18->lerp.apos.trBase.v;
        *((__m256i *)v14 + 3) = *(__m256i *)&v18->lerp.u.vehicle.bodyPitch;
        *((__m256i *)v14 + 4) = *(__m256i *)&v18->staticState.turret.carrierEntNum;
        *((__m256i *)v14 + 5) = *(__m256i *)&v18->events[0].eventType;
        *((__m256i *)v14 + 6) = *(__m256i *)&v18->index.brushModel;
        v19 = *(_OWORD *)&v18->partBits.array[2];
        v20 = *(_QWORD *)&v18->partBits.array[6];
        LODWORD(v9) = v9 + 1;
        *((_OWORD *)v14 + 14) = v19;
        ++v16;
        *((_QWORD *)v14 + 30) = v20;
        v14 += 248;
      }
      ++v11;
    }
    while ( v11 < numEntities );
  }
  v9 = (int)v9;
  if ( (int)v9 > 0 )
  {
    v21 = &v34;
    do
    {
      if ( *v21 )
      {
        v22 = (unsigned __int8)*v21 - 1;
        v23 = ClActiveClientMP::GetClientMP(localClientNum);
        v24 = 0i64;
        numClients = v23->snap.numClients;
        if ( v23->snap.numClients )
        {
          parseClientsIndex = v23->snap.parseClientsIndex;
          parseClients = v23->parseClients;
          parseClientsCount = v23->parseClientsCount;
          while ( 1 )
          {
            v29 = &parseClients[(parseClientsIndex + v24) % parseClientsCount];
            if ( v29->clientIndex == v22 )
              break;
            if ( ++v24 >= numClients )
              goto LABEL_22;
          }
          team = v29->team;
          if ( team == TEAM_ZERO || team != LocalPlayerTeam )
          {
            if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_utils.cpp", 236, ASSERT_TYPE_ASSERT, "(playerState)", (const char *)&queryFormat, "playerState") )
              __debugbreak();
            Trajectory_GetTrBase((const trajectory_t_secure *)v21 - 3, &trBase);
            if ( (float)((float)((float)((float)(trBase.v[1] - v8[13]) * (float)(trBase.v[1] - v8[13])) + (float)((float)(trBase.v[0] - v8[12]) * (float)(trBase.v[0] - v8[12]))) + (float)((float)(trBase.v[2] - v8[14]) * (float)(trBase.v[2] - v8[14]))) < v7 )
            {
              v4 = *((_WORD *)v21 - 62);
              v7 = (float)((float)((float)(trBase.v[1] - v8[13]) * (float)(trBase.v[1] - v8[13])) + (float)((float)(trBase.v[0] - v8[12]) * (float)(trBase.v[0] - v8[12]))) + (float)((float)(trBase.v[2] - v8[14]) * (float)(trBase.v[2] - v8[14]));
            }
          }
        }
      }
LABEL_22:
      v21 += 248;
      --v9;
    }
    while ( v9 );
  }
  return v4;
}

/*
==============
ATClient_GetClosestObjective
==============
*/
__int64 ATClient_GetClosestObjective(const LocalClientNum_t localClientNum, const int sideFlags)
{
  float v2; 
  unsigned int v5; 
  ClActiveClientMP *ClientMP; 
  __int64 v7; 
  float *v8; 
  unsigned __int8 *v9; 
  unsigned int i; 
  char v11; 
  int v12; 
  const entityState_t *EntityState; 
  double v14; 
  float v15; 
  double v17; 
  vec3_t trBase; 

  v2 = FLOAT_3_4028235e38;
  v5 = -1;
  ClientMP = ClActiveClientMP::GetClientMP(localClientNum);
  if ( !ClientMP )
    return 0xFFFFFFFFi64;
  v7 = (__int64)ClientMP->GetPlayerState(ClientMP);
  v8 = (float *)v7;
  if ( !v7 )
    return 0xFFFFFFFFi64;
  v9 = (unsigned __int8 *)(v7 + 4881);
  for ( i = 0; i < 0x20; ++i )
  {
    v11 = *(v9 - 2);
    if ( (v11 == 1 || v11 == 4) && _bittest(&sideFlags, *v9) )
    {
      v12 = *(_DWORD *)(v9 - 161);
      if ( v12 == 2047 )
        goto LABEL_13;
      if ( (unsigned int)(v12 + 0x8000) > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)v12, "signed", *(int *)(v9 - 161)) )
        __debugbreak();
      EntityState = ATClient_GetEntityState(localClientNum, v12);
      if ( !EntityState )
      {
LABEL_13:
        v14 = *(double *)(v9 - 129);
        v15 = *(float *)(v9 - 121);
      }
      else
      {
        Trajectory_GetTrBase(&EntityState->lerp.pos, &trBase);
        v14 = *(double *)trBase.v;
        v15 = trBase.v[2];
      }
      v17 = v14;
      if ( (float)((float)((float)((float)(*(float *)&v17 - v8[12]) * (float)(*(float *)&v17 - v8[12])) + (float)((float)(*((float *)&v17 + 1) - v8[13]) * (float)(*((float *)&v17 + 1) - v8[13]))) + (float)((float)(v15 - v8[14]) * (float)(v15 - v8[14]))) < v2 )
      {
        v2 = (float)((float)((float)(*(float *)&v17 - v8[12]) * (float)(*(float *)&v17 - v8[12])) + (float)((float)(*((float *)&v17 + 1) - v8[13]) * (float)(*((float *)&v17 + 1) - v8[13]))) + (float)((float)(v15 - v8[14]) * (float)(v15 - v8[14]));
        v5 = i;
      }
    }
    v9 += 172;
  }
  return v5;
}

/*
==============
ATClient_GetDistSqToEntity
==============
*/
float ATClient_GetDistSqToEntity(const playerState_s *playerState, const entityState_t *entity)
{
  vec3_t trBase; 

  if ( !playerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_utils.cpp", 236, ASSERT_TYPE_ASSERT, "(playerState)", (const char *)&queryFormat, "playerState") )
    __debugbreak();
  if ( !entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_utils.cpp", 237, ASSERT_TYPE_ASSERT, "(entity)", (const char *)&queryFormat, "entity") )
    __debugbreak();
  Trajectory_GetTrBase(&entity->lerp.pos, &trBase);
  return (float)((float)((float)(trBase.v[1] - playerState->origin.v[1]) * (float)(trBase.v[1] - playerState->origin.v[1])) + (float)((float)(trBase.v[0] - playerState->origin.v[0]) * (float)(trBase.v[0] - playerState->origin.v[0]))) + (float)((float)(trBase.v[2] - playerState->origin.v[2]) * (float)(trBase.v[2] - playerState->origin.v[2]));
}

/*
==============
ATClient_GetEnemyList
==============
*/
__int64 ATClient_GetEnemyList(const LocalClientNum_t localClientNum, int *clientNums, const int maxClientNums)
{
  __int64 v3; 
  unsigned int v6; 
  ClActiveClientMP *ClientMP; 
  team_t LocalPlayerTeam; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 
  int *p_clientIndex; 
  int v14; 

  v3 = maxClientNums;
  if ( !clientNums && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_utils.cpp", 464, ASSERT_TYPE_ASSERT, "(clientNums != nullptr)", (const char *)&queryFormat, "clientNums != nullptr") )
    __debugbreak();
  if ( (int)v3 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_utils.cpp", 465, ASSERT_TYPE_ASSERT, "(maxClientNums > 0)", (const char *)&queryFormat, "maxClientNums > 0") )
    __debugbreak();
  v6 = 0;
  ClientMP = ClActiveClientMP::GetClientMP(localClientNum);
  LocalPlayerTeam = ATClient_GetLocalPlayerTeam(localClientNum);
  v9 = (__int64)ClientMP->GetPlayerState(ClientMP);
  v10 = 0i64;
  v11 = v9;
  if ( ClientMP->snap.numClients )
  {
    v12 = 0i64;
    do
    {
      p_clientIndex = &ClientMP->parseClients[(v10 + ClientMP->snap.parseClientsIndex) % ClientMP->parseClientsCount].clientIndex;
      if ( *p_clientIndex != *(_DWORD *)(v11 + 460) && (float)p_clientIndex[40] > 0.0 )
      {
        v14 = p_clientIndex[1];
        if ( (!v14 || v14 != LocalPlayerTeam) && v12 < v3 )
        {
          ++v6;
          clientNums[v12++] = *p_clientIndex;
        }
      }
      ++v10;
    }
    while ( v10 < ClientMP->snap.numClients );
  }
  return v6;
}

/*
==============
ATClient_GetEntityState
==============
*/
entityState_t *ATClient_GetEntityState(const LocalClientNum_t localClientNum, const __int16 entityNum)
{
  ClActiveClientMP *ClientMP; 
  __int64 v4; 
  __int64 numEntities; 
  __int64 parseEntitiesIndex; 
  entityState_t *parseEntities; 
  __int64 parseEntitiesCount; 
  entityState_t *result; 

  if ( entityNum == 2047 )
    return 0i64;
  ClientMP = ClActiveClientMP::GetClientMP(localClientNum);
  v4 = 0i64;
  numEntities = ClientMP->snap.numEntities;
  if ( !ClientMP->snap.numEntities )
    return 0i64;
  parseEntitiesIndex = ClientMP->snap.parseEntitiesIndex;
  parseEntities = ClientMP->parseEntities;
  parseEntitiesCount = ClientMP->parseEntitiesCount;
  while ( 1 )
  {
    result = &parseEntities[(parseEntitiesIndex + v4) % parseEntitiesCount];
    if ( result->number == entityNum )
      break;
    if ( ++v4 >= numEntities )
      return 0i64;
  }
  return result;
}

/*
==============
ATClient_GetLocalClientState
==============
*/
clientState_t *ATClient_GetLocalClientState(const LocalClientNum_t localClientNum)
{
  const clientState_t **v1; 
  ClActiveClientMP *ClientMP; 
  __int64 v3; 
  __int64 numClients; 
  __int64 v5; 
  __int64 parseClientsIndex; 
  clientState_t *parseClients; 
  __int64 parseClientsCount; 
  __int64 v9; 
  const clientState_t *v10; 
  clientState_t *result; 

  v1 = &s_localClientState[localClientNum];
  if ( *v1 )
    return (clientState_t *)*v1;
  ClientMP = ClActiveClientMP::GetClientMP(localClientNum);
  v3 = (__int64)ClientMP->GetPlayerState(ClientMP);
  numClients = ClientMP->snap.numClients;
  v5 = 0i64;
  if ( !ClientMP->snap.numClients )
    return (clientState_t *)*v1;
  parseClientsIndex = ClientMP->snap.parseClientsIndex;
  parseClients = ClientMP->parseClients;
  parseClientsCount = ClientMP->parseClientsCount;
  while ( 1 )
  {
    v9 = (parseClientsIndex + v5) % parseClientsCount;
    v10 = &parseClients[v9];
    if ( v10->clientIndex == *(_DWORD *)(v3 + 460) )
      break;
    if ( ++v5 >= numClients )
      return (clientState_t *)*v1;
  }
  result = &parseClients[v9];
  *v1 = v10;
  return result;
}

/*
==============
ATClient_GetLocalPlayerObjective
==============
*/
ClActiveClientMP *ATClient_GetLocalPlayerObjective(const LocalClientNum_t localClientNum, const int index)
{
  __int64 v2; 
  ClActiveClientMP *result; 
  const ObjectiveView *v4; 

  v2 = index;
  result = ClActiveClientMP::GetClientMP(localClientNum);
  if ( result )
  {
    result = (ClActiveClientMP *)result->GetPlayerState(result);
    v4 = (const ObjectiveView *)result;
    if ( result )
    {
      if ( (unsigned int)v2 >= 0x20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_utils.cpp", 411, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( sizeof( *array_counter( ps->objectives ) ) + 0 ) )", "index doesn't index ARRAY_COUNT( ps->objectives )\n\t%i not in [0, %i)", v2, 32) )
        __debugbreak();
      return (ClActiveClientMP *)&v4[v2 + 27].origin[3].z;
    }
  }
  return result;
}

/*
==============
ATClient_GetLocalPlayerTeam
==============
*/
const clientState_t *ATClient_GetLocalPlayerTeam(const LocalClientNum_t localClientNum)
{
  const clientState_t **v1; 
  ClActiveClientMP *ClientMP; 
  __int64 v3; 
  __int64 numClients; 
  __int64 v5; 
  __int64 parseClientsIndex; 
  clientState_t *parseClients; 
  __int64 parseClientsCount; 
  int v9; 
  const clientState_t *v10; 
  const clientState_t *result; 

  v1 = &s_localClientState[localClientNum];
  if ( !*v1 )
  {
    ClientMP = ClActiveClientMP::GetClientMP(localClientNum);
    v3 = (__int64)ClientMP->GetPlayerState(ClientMP);
    numClients = ClientMP->snap.numClients;
    v5 = 0i64;
    if ( ClientMP->snap.numClients )
    {
      parseClientsIndex = ClientMP->snap.parseClientsIndex;
      parseClients = ClientMP->parseClients;
      parseClientsCount = ClientMP->parseClientsCount;
      v9 = *(_DWORD *)(v3 + 460);
      while ( 1 )
      {
        v10 = &parseClients[(parseClientsIndex + v5) % parseClientsCount];
        if ( v10->clientIndex == v9 )
          break;
        if ( ++v5 >= numClients )
          goto LABEL_8;
      }
      *v1 = v10;
    }
  }
LABEL_8:
  result = *v1;
  if ( *v1 )
    return (const clientState_t *)(unsigned int)result->team;
  return result;
}

/*
==============
ATClient_GetMapName
==============
*/
char *ATClient_GetMapName()
{
  if ( !cls.m_activeGameMapName[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 295, ASSERT_TYPE_ASSERT, "(m_activeGameMapName[0])", "%s\n\tRequested mapname before it was set", "m_activeGameMapName[0]") )
    __debugbreak();
  return cls.m_activeGameMapName;
}

/*
==============
ATClient_GetObjectivePosition
==============
*/
vec3_t *ATClient_GetObjectivePosition(vec3_t *result, const LocalClientNum_t localClientNum, const ObjectiveView *const objective)
{
  int v6; 
  const entityState_t *EntityState; 
  double v8; 
  float v9; 
  vec3_t trBase; 

  if ( !objective && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_utils.cpp", 305, ASSERT_TYPE_ASSERT, "(objective != nullptr)", (const char *)&queryFormat, "objective != nullptr") )
    __debugbreak();
  v6 = objective->entNum[0];
  if ( objective->entNum[0] == 2047 )
    goto LABEL_10;
  if ( (unsigned int)(v6 + 0x8000) > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)v6, "signed", objective->entNum[0]) )
    __debugbreak();
  EntityState = ATClient_GetEntityState(localClientNum, v6);
  if ( !EntityState )
  {
LABEL_10:
    v8 = *(double *)objective->origin[0].v;
    v9 = objective->origin[0].v[2];
  }
  else
  {
    Trajectory_GetTrBase(&EntityState->lerp.pos, &trBase);
    v8 = *(double *)trBase.v;
    v9 = trBase.v[2];
  }
  *(double *)result->v = v8;
  result->v[2] = v9;
  return result;
}

/*
==============
ATClient_GetObjectivesWithState
==============
*/
__int64 ATClient_GetObjectivesWithState(const LocalClientNum_t localClientNum, const objectiveState_t state, ObjectiveView *objectives, const int maxObjectives)
{
  __int64 v4; 
  unsigned int v8; 
  ClActiveClientMP *ClientMP; 
  __int64 v10; 
  unsigned int v11; 
  __int64 v12; 
  __int64 v13; 

  v4 = maxObjectives;
  if ( maxObjectives <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_utils.cpp", 270, ASSERT_TYPE_ASSERT, "(maxObjectives > 0)", (const char *)&queryFormat, "maxObjectives > 0") )
    __debugbreak();
  if ( !objectives && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_utils.cpp", 271, ASSERT_TYPE_ASSERT, "(objectives != nullptr)", (const char *)&queryFormat, "objectives != nullptr") )
    __debugbreak();
  v8 = 0;
  ClientMP = ClActiveClientMP::GetClientMP(localClientNum);
  if ( ClientMP )
  {
    v10 = (__int64)ClientMP->GetPlayerState(ClientMP);
    if ( v10 )
    {
      v11 = 0;
      v12 = v10 + 4720;
      v13 = 0i64;
      do
      {
        if ( *(_BYTE *)(v12 + 159) == state )
        {
          if ( v13 >= v4 )
            return v8;
          *(_OWORD *)objectives->entNum = *(_OWORD *)v12;
          *(_OWORD *)&objectives->entNum[4] = *(_OWORD *)(v12 + 16);
          *(_OWORD *)objectives->origin[0].v = *(_OWORD *)(v12 + 32);
          *(_OWORD *)&objectives->origin[1].y = *(_OWORD *)(v12 + 48);
          *(_OWORD *)&objectives->origin[2].z = *(_OWORD *)(v12 + 64);
          *(_OWORD *)objectives->origin[4].v = *(_OWORD *)(v12 + 80);
          *(_OWORD *)&objectives->origin[5].y = *(_OWORD *)(v12 + 96);
          *(_OWORD *)&objectives->origin[6].z = *(_OWORD *)(v12 + 112);
          *(_OWORD *)&objectives->validLocations = *(_OWORD *)(v12 + 128);
          *(_OWORD *)&objectives->icon = *(_OWORD *)(v12 + 144);
          ++v8;
          *(_QWORD *)&objectives->size = *(_QWORD *)(v12 + 160);
          ++v13;
          *(_DWORD *)&objectives->mlgBackground = *(_DWORD *)(v12 + 168);
          ++objectives;
        }
        ++v11;
        v12 += 172i64;
      }
      while ( v11 < 0x20 );
    }
  }
  return v8;
}

/*
==============
ATClient_GetOmnvarValueBool
==============
*/
bool ATClient_GetOmnvarValueBool(const LocalClientNum_t localClientNum, const char *const omnvarName, const bool defaultValue, bool *outResult)
{
  int Omnvar_BooleanByName; 

  if ( !BG_Omnvar_GetDataChecksum() || !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_MID_AIR_DETACH|0x80) || (Omnvar_BooleanByName = CG_GetOmnvar_BooleanByName(localClientNum, omnvarName, outResult, NULL, NULL), Omnvar_BooleanByName != 1) )
  {
    *outResult = defaultValue;
    LOBYTE(Omnvar_BooleanByName) = 0;
  }
  return Omnvar_BooleanByName;
}

/*
==============
ATClient_GetOmnvarValueInt32
==============
*/
bool ATClient_GetOmnvarValueInt32(const LocalClientNum_t localClientNum, const char *const omnvarName, const int defaultValue, int *outResult)
{
  int Omnvar_IntegerByName; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_MID_AIR_DETACH|0x80) || (Omnvar_IntegerByName = CG_GetOmnvar_IntegerByName(localClientNum, omnvarName, outResult, NULL, NULL), Omnvar_IntegerByName != 1) )
  {
    *outResult = defaultValue;
    LOBYTE(Omnvar_IntegerByName) = 0;
  }
  return Omnvar_IntegerByName;
}

/*
==============
ATClient_GetPlayerAngles
==============
*/
vec3_t *ATClient_GetPlayerAngles(vec3_t *result, const LocalClientNum_t localClientNum)
{
  ClActiveClientMP *ClientMP; 
  __int64 v4; 
  __int128 v6; 
  vec3_t clViewangles; 
  __int64 v10; 
  float v11; 

  v10 = -2i64;
  ClientMP = ClActiveClientMP::GetClientMP(localClientNum);
  v4 = (__int64)ClientMP->GetPlayerState(ClientMP);
  ClActiveClient_GetCLViewangles(ClientMP, &clViewangles);
  v6 = LODWORD(clViewangles.v[0]);
  *(float *)&v6 = clViewangles.v[0] + *(float *)(v4 + 180);
  _XMM4 = v6;
  v11 = clViewangles.v[2] + *(float *)(v4 + 188);
  __asm { vunpcklps xmm0, xmm4, xmm3 }
  *(double *)result->v = *(double *)&_XMM0;
  result->v[2] = v11;
  memset(&clViewangles, 0, sizeof(clViewangles));
  return result;
}

/*
==============
ATClient_GetPlayerForwardVector
==============
*/
vec3_t *ATClient_GetPlayerForwardVector(vec3_t *result, const LocalClientNum_t localClientNum)
{
  ClActiveClientMP *ClientMP; 
  float *v4; 
  vec3_t clViewangles; 
  __int64 v7; 
  vec3_t angles; 
  vec3_t forward; 

  v7 = -2i64;
  ClientMP = ClActiveClientMP::GetClientMP(localClientNum);
  v4 = (float *)ClientMP->GetPlayerState(ClientMP);
  ClActiveClient_GetCLViewangles(ClientMP, &clViewangles);
  angles.v[0] = clViewangles.v[0] + v4[45];
  angles.v[1] = clViewangles.v[1] + v4[46];
  angles.v[2] = clViewangles.v[2] + v4[47];
  AngleVectors(&angles, &forward, NULL, NULL);
  *result = forward;
  memset(&clViewangles, 0, sizeof(clViewangles));
  return result;
}

/*
==============
ATClient_GetRandomEnemy
==============
*/
__int64 ATClient_GetRandomEnemy(const LocalClientNum_t localClientNum)
{
  int v2; 
  ClActiveClientMP *ClientMP; 
  team_t LocalPlayerTeam; 
  __int64 v5; 
  unsigned int numClients; 
  __int64 parseClientsCount; 
  __int64 v8; 
  __int64 parseClientsIndex; 
  __int64 v10; 
  clientState_t *parseClients; 
  int v12; 
  __int64 v13; 
  int clientIndex; 
  team_t team; 
  int v16; 
  __int64 v17; 
  int v19[200]; 

  v2 = 0;
  ClientMP = ClActiveClientMP::GetClientMP(localClientNum);
  LocalPlayerTeam = ATClient_GetLocalPlayerTeam(localClientNum);
  v5 = (__int64)ClientMP->GetPlayerState(ClientMP);
  numClients = ClientMP->snap.numClients;
  if ( !numClients )
    return 0xFFFFFFFFi64;
  parseClientsCount = ClientMP->parseClientsCount;
  v8 = 0i64;
  parseClientsIndex = ClientMP->snap.parseClientsIndex;
  v10 = numClients;
  parseClients = ClientMP->parseClients;
  v12 = *(_DWORD *)(v5 + 460);
  do
  {
    v13 = parseClientsIndex % parseClientsCount;
    clientIndex = parseClients[v13].clientIndex;
    if ( clientIndex != v12 && (float)parseClients[v13].healthRatio > 0.0 )
    {
      team = parseClients[v13].team;
      if ( (team == TEAM_ZERO || team != LocalPlayerTeam) && v8 < 200 )
      {
        ++v2;
        v19[v8++] = clientIndex;
      }
    }
    ++parseClientsIndex;
    --v10;
  }
  while ( v10 );
  if ( v2 <= 0 )
    return 0xFFFFFFFFi64;
  v16 = I_irand(0, v2);
  v17 = v16;
  if ( (unsigned int)v16 >= 0xC8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_utils.cpp", 509, ASSERT_TYPE_ASSERT, "(unsigned)( enemyIndex ) < (unsigned)( ( sizeof( *array_counter( enemies ) ) + 0 ) )", "enemyIndex doesn't index ARRAY_COUNT( enemies )\n\t%i not in [0, %i)", v16, 200) )
    __debugbreak();
  return (unsigned int)v19[v17];
}

/*
==============
ATClient_GetRandomObjective
==============
*/
__int64 ATClient_GetRandomObjective(const LocalClientNum_t localClientNum, const int sideFlags)
{
  int v3; 
  ClActiveClientMP *ClientMP; 
  __int64 v5; 
  unsigned int v6; 
  int *v7; 
  unsigned __int8 *v8; 
  char v9; 
  int v11[32]; 

  v3 = 0;
  ClientMP = ClActiveClientMP::GetClientMP(localClientNum);
  if ( !ClientMP )
    return 0xFFFFFFFFi64;
  v5 = (__int64)ClientMP->GetPlayerState(ClientMP);
  if ( !v5 )
    return 0xFFFFFFFFi64;
  v6 = 0;
  v7 = v11;
  v8 = (unsigned __int8 *)(v5 + 4881);
  while ( 1 )
  {
    v9 = *(v8 - 2);
    if ( v9 != 1 && v9 != 4 || !_bittest(&sideFlags, *v8) )
      goto LABEL_9;
    if ( (unsigned int)v3 >= 0x20 )
      break;
    ++v3;
    *v7++ = v6;
LABEL_9:
    ++v6;
    v8 += 172;
    if ( v6 >= 0x20 )
      goto LABEL_13;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_utils.cpp", 382, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "increase objectives array size") )
    __debugbreak();
LABEL_13:
  if ( v3 > 0 )
    return (unsigned int)v11[rand() % v3];
  return 0xFFFFFFFFi64;
}

/*
==============
ATClient_GetRemotePlayerClientState
==============
*/
clientState_t *ATClient_GetRemotePlayerClientState(const LocalClientNum_t localClientNum, const int clientNum)
{
  ClActiveClientMP *ClientMP; 
  __int64 v5; 
  __int64 numClients; 
  __int64 parseClientsIndex; 
  clientState_t *parseClients; 
  __int64 parseClientsCount; 
  clientState_t *result; 

  if ( clientNum == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_utils.cpp", 445, ASSERT_TYPE_ASSERT, "(clientNum != -1)", (const char *)&queryFormat, "clientNum != INVALID_CLIENTNUM") )
    __debugbreak();
  ClientMP = ClActiveClientMP::GetClientMP(localClientNum);
  v5 = 0i64;
  numClients = ClientMP->snap.numClients;
  if ( !ClientMP->snap.numClients )
    return 0i64;
  parseClientsIndex = ClientMP->snap.parseClientsIndex;
  parseClients = ClientMP->parseClients;
  parseClientsCount = ClientMP->parseClientsCount;
  while ( 1 )
  {
    result = &parseClients[(parseClientsIndex + v5) % parseClientsCount];
    if ( result->clientIndex == clientNum )
      break;
    if ( ++v5 >= numClients )
      return 0i64;
  }
  return result;
}

/*
==============
ATClient_GetRemotePlayerEntityState
==============
*/
entityState_t *ATClient_GetRemotePlayerEntityState(const ClActiveClientMP *const cl, const int clientNum)
{
  __int64 v2; 
  entityState_t *result; 

  v2 = 0i64;
  if ( !cl->snap.numClients )
    return 0i64;
  do
  {
    result = &cl->parseEntities[(cl->snap.parseEntitiesIndex + v2) % cl->parseEntitiesCount];
    if ( result->eType != ET_PLAYER )
      break;
    if ( result->number == clientNum )
      return result;
    ++v2;
  }
  while ( v2 < cl->snap.numClients );
  return 0i64;
}

/*
==============
ATClient_GetVehicleDef
==============
*/
const VehicleDef *ATClient_GetVehicleDef(const entityState_t *vehicleES)
{
  return CgVehicleSystem::GetClientDef((unsigned int)vehicleES->lerp.u.anonymous.data[0] >> 7);
}

/*
==============
ATClient_GetVehicleList
==============
*/
__int64 ATClient_GetVehicleList(const LocalClientNum_t localClientNum, entityState_t *vehicles, const int maxVehicles)
{
  __int64 v3; 
  entityState_t *v4; 
  unsigned int v6; 
  ClActiveClientMP *ClientMP; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 

  v3 = maxVehicles;
  v4 = vehicles;
  if ( !vehicles && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_utils.cpp", 575, ASSERT_TYPE_ASSERT, "(vehicles != nullptr)", (const char *)&queryFormat, "vehicles != nullptr") )
    __debugbreak();
  if ( (int)v3 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_utils.cpp", 576, ASSERT_TYPE_ASSERT, "(maxVehicles > 0)", (const char *)&queryFormat, "maxVehicles > 0") )
    __debugbreak();
  v6 = 0;
  ClientMP = ClActiveClientMP::GetClientMP(localClientNum);
  v8 = 0i64;
  if ( ClientMP->snap.numEntities )
  {
    v9 = 0i64;
    do
    {
      v10 = (__int64)&ClientMP->parseEntities[(v8 + ClientMP->snap.parseEntitiesIndex) % ClientMP->parseEntitiesCount];
      if ( *(_WORD *)(v10 + 8) == 14 )
      {
        if ( v9 >= v3 )
          return v6;
        *(_OWORD *)&v4->number = *(_OWORD *)v10;
        *(_OWORD *)&v4->lerp.pos.trType = *(_OWORD *)(v10 + 16);
        *(_OWORD *)&v4->lerp.pos.trBase.y = *(_OWORD *)(v10 + 32);
        *(_OWORD *)&v4->lerp.pos.trDelta.z = *(_OWORD *)(v10 + 48);
        *(_OWORD *)v4->lerp.apos.trBase.v = *(_OWORD *)(v10 + 64);
        *(_OWORD *)&v4->lerp.apos.trDelta.y = *(_OWORD *)(v10 + 80);
        *(_OWORD *)&v4->lerp.u.vehicle.bodyPitch = *(_OWORD *)(v10 + 96);
        *(LerpEntityStateInfoVolumeGrapple *)((char *)&v4->lerp.u.infoVolumeGrapple + 24) = *(LerpEntityStateInfoVolumeGrapple *)(v10 + 112);
        *(_OWORD *)&v4->staticState.turret.carrierEntNum = *(_OWORD *)(v10 + 128);
        *(_OWORD *)&v4->clientNum = *(_OWORD *)(v10 + 144);
        *(_OWORD *)&v4->events[0].eventType = *(_OWORD *)(v10 + 160);
        *(_OWORD *)&v4->events[2].eventType = *(_OWORD *)(v10 + 176);
        *(_OWORD *)&v4->index.brushModel = *(_OWORD *)(v10 + 192);
        *(_OWORD *)&v4->animInfo.selectAnim = *(_OWORD *)(v10 + 208);
        *(_OWORD *)&v4->partBits.array[2] = *(_OWORD *)(v10 + 224);
        ++v6;
        ++v9;
        *(_QWORD *)&v4->partBits.array[6] = *(_QWORD *)(v10 + 240);
        ++v4;
      }
      ++v8;
    }
    while ( v8 < ClientMP->snap.numEntities );
  }
  return v6;
}

/*
==============
ATClient_InitNav
==============
*/
void ATClient_InitNav(void)
{
  const dvar_t *v0; 

  v0 = DVARBOOL_ATClient_Enabled;
  if ( !DVARBOOL_ATClient_Enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_Enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  if ( v0->current.enabled && !Com_IsAnyLocalServerRunning() && !s_ATClientNavPathInitialized )
  {
    if ( s_ATClientHunkUser )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_utils.cpp", 1261, ASSERT_TYPE_ASSERT, "(s_ATClientHunkUser == nullptr)", (const char *)&queryFormat, "s_ATClientHunkUser == nullptr") )
        __debugbreak();
    }
    s_ATClientHunkUser = Mem_HunkUser_Create(0x1800000ui64, "s_ATClientHunkUser", TRACK_ATCLIENT, MEM_ALLOC_FLAG_NO_MEM_CLEAR);
    Nav_AllocNavPower(s_ATClientHunkUser);
    Path_Init(0, 0);
    Path_ResolveParentIndices();
    Path_PostSpawnInitPaths(0, 0);
    s_ATClientNavPathInitialized = 1;
  }
}

/*
==============
ATClient_IsClientAlive
==============
*/
bool ATClient_IsClientAlive(const clientState_t *const clientState)
{
  if ( !clientState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_utils.cpp", 191, ASSERT_TYPE_ASSERT, "(clientState != nullptr)", (const char *)&queryFormat, "clientState != nullptr") )
    __debugbreak();
  return (float)clientState->healthRatio > 0.0;
}

/*
==============
ATClient_IsLocalClientInInfil
==============
*/
bool ATClient_IsLocalClientInInfil(const LocalClientNum_t localClientNum)
{
  int v2; 
  int result; 
  int v5; 

  v2 = 0;
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_MID_AIR_DETACH|0x80) || CG_GetOmnvar_IntegerByName(localClientNum, "ui_br_infil_started", &result, NULL, NULL) != 1 )
    result = 0;
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_MID_AIR_DETACH|0x80) && CG_GetOmnvar_IntegerByName(localClientNum, "ui_br_infiled", &v5, NULL, NULL) == 1 )
    v2 = v5;
  return result == 1 && !v2;
}

/*
==============
ATClient_IsLocalClientInVehicle
==============
*/
bool ATClient_IsLocalClientInVehicle(const LocalClientNum_t localClientNum)
{
  ClActiveClientMP *ClientMP; 
  __int16 remoteControlEnt; 
  const entityState_t *EntityState; 
  bool result; 

  ClientMP = ClActiveClientMP::GetClientMP(localClientNum);
  result = 0;
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ClientMP->snap.ps.pm_flags, ACTIVE, 0x1Cu) )
  {
    remoteControlEnt = ClientMP->snap.ps.remoteControlEnt;
    if ( remoteControlEnt >= 248 )
    {
      EntityState = ATClient_GetEntityState(localClientNum, remoteControlEnt);
      if ( EntityState )
      {
        if ( EntityState->eType == ET_VEHICLE )
          return 1;
      }
    }
  }
  return result;
}

/*
==============
ATClient_IsLocalClientSkydiving
==============
*/
bool ATClient_IsLocalClientSkydiving(const LocalClientNum_t localClientNum)
{
  ClActiveClientMP *ClientMP; 
  const playerState_s *v2; 

  ClientMP = ClActiveClientMP::GetClientMP(localClientNum);
  v2 = ClientMP->GetPlayerState(ClientMP);
  return BG_Skydive_IsSkydiving(v2);
}

/*
==============
ATClient_IsLocalClientWounded
==============
*/
bool ATClient_IsLocalClientWounded(const LocalClientNum_t localClientNum)
{
  ClActiveClientMP *ClientMP; 
  __int64 v2; 

  ClientMP = ClActiveClientMP::GetClientMP(localClientNum);
  return ClientMP && (v2 = (__int64)ClientMP->GetPlayerState(ClientMP)) != 0 && *(_DWORD *)(v2 + 600) < *(_DWORD *)(v2 + 608);
}

/*
==============
ATClient_IsTargetingEnemy
==============
*/
char ATClient_IsTargetingEnemy(const LocalClientNum_t localClientNum)
{
  ClActiveClientMP *ClientMP; 
  __int64 v3; 
  team_t LocalPlayerTeam; 
  vec3_t *PlayerForwardVector; 
  __int64 numClients; 
  __int64 v7; 
  double v8; 
  float v9; 
  float v10; 
  float v11; 
  clientState_t *v12; 
  __int64 v13; 
  entityState_t *v14; 
  team_t team; 
  float v16; 
  float v17; 
  float v18; 
  const dvar_t *v19; 
  __int128 v20; 
  const dvar_t *v21; 
  vec3_t result; 
  vec3_t trBase; 

  ClientMP = ClActiveClientMP::GetClientMP(localClientNum);
  v3 = (__int64)ClientMP->GetPlayerState(ClientMP);
  LocalPlayerTeam = ATClient_GetLocalPlayerTeam(localClientNum);
  PlayerForwardVector = ATClient_GetPlayerForwardVector(&result, localClientNum);
  numClients = ClientMP->snap.numClients;
  v7 = 0i64;
  v8 = *(double *)PlayerForwardVector->v;
  trBase.v[2] = PlayerForwardVector->v[2];
  *(double *)trBase.v = v8;
  if ( !(_DWORD)numClients )
    return 0;
  v9 = trBase.v[2];
  v10 = trBase.v[1];
  v11 = trBase.v[0];
  do
  {
    v12 = &ClientMP->parseClients[(v7 + ClientMP->snap.parseClientsIndex) % ClientMP->parseClientsCount];
    if ( v12->clientIndex != *(_DWORD *)(v3 + 460) )
    {
      v13 = 0i64;
      if ( numClients )
      {
        do
        {
          v14 = &ClientMP->parseEntities[(ClientMP->snap.parseEntitiesIndex + v13) % ClientMP->parseEntitiesCount];
          if ( v14->eType != ET_PLAYER )
            break;
          if ( v14->number == v12->clientIndex )
          {
            if ( v14 )
            {
              team = v12->team;
              if ( team == TEAM_ZERO || team != LocalPlayerTeam )
              {
                Trajectory_GetTrBase(&v14->lerp.pos, &trBase);
                v16 = trBase.v[0] - *(float *)(v3 + 48);
                v20 = LODWORD(trBase.v[1]);
                v17 = trBase.v[1] - *(float *)(v3 + 52);
                v18 = trBase.v[2] - *(float *)(v3 + 56);
                v19 = DVARINT_ATClient_ShootDistanceSq;
                *(float *)&v20 = (float)((float)(v17 * v17) + (float)(v16 * v16)) + (float)(v18 * v18);
                if ( !DVARINT_ATClient_ShootDistanceSq && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_ShootDistanceSq") )
                  __debugbreak();
                Dvar_CheckFrontendServerThread(v19);
                if ( *(float *)&v20 < (float)v19->current.integer )
                {
                  v21 = DVARFLT_ATClient_ShootDotProduct;
                  *(float *)&v20 = fsqrt(*(float *)&v20);
                  _XMM1 = v20;
                  __asm
                  {
                    vcmpless xmm0, xmm1, xmm14
                    vblendvps xmm0, xmm1, xmm10, xmm0
                  }
                  if ( !DVARFLT_ATClient_ShootDotProduct && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_ShootDotProduct") )
                    __debugbreak();
                  Dvar_CheckFrontendServerThread(v21);
                  if ( (float)((float)((float)((float)(v16 * (float)(1.0 / *(float *)&_XMM0)) * v11) + (float)((float)(v17 * (float)(1.0 / *(float *)&_XMM0)) * v10)) + (float)((float)(v18 * (float)(1.0 / *(float *)&_XMM0)) * v9)) >= v21->current.value )
                    return 1;
                }
              }
            }
            break;
          }
          ++v13;
        }
        while ( v13 < numClients );
      }
    }
    ++v7;
    numClients = ClientMP->snap.numClients;
  }
  while ( v7 < numClients );
  return 0;
}

/*
==============
ATClient_NavIsInitialized
==============
*/
_BOOL8 ATClient_NavIsInitialized()
{
  return s_ATClientNavPathInitialized;
}

/*
==============
ATClient_OnSnapshotApplied
==============
*/
void ATClient_OnSnapshotApplied(const LocalClientNum_t localClientNum)
{
  s_localClientState[localClientNum] = NULL;
}

/*
==============
ATClient_ResetBlackboard
==============
*/
void ATClient_ResetBlackboard(const LocalClientNum_t localClientNum)
{
  s_blackboards[localClientNum].targetEnemyClientNum = -1;
}

/*
==============
ATClient_ShutdownNav
==============
*/
void ATClient_ShutdownNav(void)
{
  if ( s_ATClientNavPathInitialized )
  {
    Path_Shutdown(0);
    Nav_FreeNavPower();
    if ( s_ATClientHunkUser )
    {
      Mem_HunkUser_Destroy(s_ATClientHunkUser);
      s_ATClientHunkUser = NULL;
    }
    s_ATClientNavPathInitialized = 0;
  }
}

/*
==============
ATClient_UiNavConfigGet
==============
*/
const char *ATClient_UiNavConfigGet()
{
  const dvar_t *v0; 
  _BYTE *integer64; 

  if ( s_commandlineDeferredTestDone )
    return 0i64;
  v0 = DVARSTR_ATClient_DeferredUiNav;
  if ( !DVARSTR_ATClient_DeferredUiNav )
    return 0i64;
  Dvar_CheckFrontendServerThread(DVARSTR_ATClient_DeferredUiNav);
  integer64 = (_BYTE *)v0->current.integer64;
  if ( !integer64 || !*integer64 || !LUI_GetVisibleMenu(LOCAL_CLIENT_0, (char (*)[1024])screen_name) || strcmp_0(screen_name, "MainLockoutMenu") )
    return 0i64;
  s_commandlineDeferredTestDone = 1;
  return integer64;
}

/*
==============
ATClient_UiNavConfigReset
==============
*/
void ATClient_UiNavConfigReset(void)
{
  Dvar_SetString_Internal(DVARSTR_ATClient_DeferredUiNav, (const char *)&queryFormat.fmt + 3);
}

/*
==============
ATClient_WalkTo
==============
*/
void ATClient_WalkTo(const LocalClientNum_t localClientNum, const vec3_t *destination)
{
  __int64 v3; 
  double v4; 
  bool v5; 
  bool v6; 
  bool v7; 
  ClActiveClientMP *ClientMP; 
  float *v9; 
  const vec3_t *v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  const dvar_t *v15; 
  nav_space_s *DefaultSpace; 
  bfx::PolylinePathRCPtr v17; 
  int v18; 
  double v19; 
  const dvar_t *v20; 
  float v21; 
  float v22; 
  float v23; 
  double Float_Internal_DebugName; 
  int v25; 
  const dvar_t *v26; 
  const dvar_t *v27; 
  float v28; 
  bfx::PolylinePathRCPtr result; 
  vec3_t v31; 
  __int64 v32; 
  vec3_t outPath; 
  double v34; 
  float v35; 

  v32 = -2i64;
  v3 = localClientNum;
  v4 = *(double *)destination->v;
  v28 = destination->v[2];
  v5 = 1;
  v6 = 0;
  v7 = 0;
  ClientMP = ClActiveClientMP::GetClientMP(localClientNum);
  v9 = (float *)ClientMP->GetPlayerState(ClientMP);
  v10 = (const vec3_t *)(v9 + 12);
  v11 = v9[12] - s_previousClientPosition[v3].v[0];
  v12 = v9[13] - s_previousClientPosition[v3].v[1];
  v13 = v9[14] - s_previousClientPosition[v3].v[2];
  v14 = (float)((float)(v12 * v12) + (float)(v11 * v11)) + (float)(v13 * v13);
  v15 = DVARBOOL_ATClient_Pathing;
  if ( !DVARBOOL_ATClient_Pathing && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_Pathing") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v15);
  if ( !v15->current.enabled || !s_ATClientNavPathInitialized )
    goto LABEL_24;
  DefaultSpace = Nav_GetDefaultSpace();
  Nav_FindPath(&result, DefaultSpace, v10, destination, 0);
  if ( bfx::PolylinePathRCPtr::GetNumSegments(&result) <= 0 )
  {
    v20 = DVARFLT_ATClient_NegligeableMovementSq;
    if ( !DVARFLT_ATClient_NegligeableMovementSq && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_NegligeableMovementSq") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v20);
    if ( v14 < v20->current.value )
    {
      v21 = destination->v[1] - v10->v[1];
      v22 = destination->v[2] - v10->v[2];
      v23 = (float)((float)(v21 * v21) + (float)((float)(destination->v[0] - v10->v[0]) * (float)(destination->v[0] - v10->v[0]))) + (float)(v22 * v22);
      Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DVARFLT_ATClient_MinDistSqToReachDestination, "ATClient_MinDistSqToReachDestination");
      v7 = v23 >= *(float *)&Float_Internal_DebugName;
    }
  }
  else
  {
    bfx::PolylinePathRCPtr::PolylinePathRCPtr((bfx::PolylinePathRCPtr *)&v31, &result);
    v18 = Nav_SimplifyPath(DefaultSpace, v10, v17, NAV_LAYER_HUMAN, NULL, 128, &outPath);
    if ( v18 > 1 )
    {
      v4 = v34;
      v28 = v35;
      v19 = Dvar_GetFloat_Internal_DebugName(DVARFLT_ATClient_NegligeableMovementSq, "ATClient_NegligeableMovementSq");
      if ( v14 < *(float *)&v19 && v18 > 2 )
        v7 = 1;
    }
  }
  bfx::PolylinePathRCPtr::~PolylinePathRCPtr(&result);
  if ( v7 )
  {
    v5 = 0;
    if ( !s_stuckStartTimeInMs[v3] )
      s_stuckStartTimeInMs[v3] = Sys_Milliseconds();
    v25 = Sys_Milliseconds() - s_stuckStartTimeInMs[v3];
    v26 = DVARINT_ATClient_JumpWhenStuckForXMs;
    if ( !DVARINT_ATClient_JumpWhenStuckForXMs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_JumpWhenStuckForXMs") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v26);
    if ( v25 >= v26->current.integer )
    {
      v6 = 1;
      s_stuckStartTimeInMs[v3] = 0;
    }
  }
  else
  {
LABEL_24:
    s_stuckStartTimeInMs[v3] = 0;
  }
  *(double *)s_previousClientPosition[v3].v = *(double *)v10->v;
  s_previousClientPosition[v3].v[2] = v10->v[2];
  *(double *)v31.v = v4;
  v31.v[2] = v28;
  v27 = DVARINT_ATClient_MoveToTargetInputDurationMS;
  if ( !DVARINT_ATClient_MoveToTargetInputDurationMS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_MoveToTargetInputDurationMS") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v27);
  ATClient_GenerateInputsToMoveToPos(localClientNum, &v31, v27->current.integer, ATClient_MoveInput_All, v5, v6);
}

