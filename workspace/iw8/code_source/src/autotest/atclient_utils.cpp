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
  float v8; 
  int integer; 
  const dvar_t *v10; 
  vec3_t v16; 
  AutomatedInput_Record records; 

  v3 = DVARINT_ATClient_MoveToTargetInputDurationMS;
  _RSI = destination;
  if ( !DVARINT_ATClient_MoveToTargetInputDurationMS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_MoveToTargetInputDurationMS") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  __asm { vmovsd  xmm0, qword ptr [rsi] }
  v8 = _RSI->v[2];
  integer = v3->current.integer;
  __asm { vmovsd  [rsp+0B8h+var_78], xmm0 }
  v16.v[2] = v8;
  ATClient_GenerateInputsToMoveToPos(localClientNum, &v16, integer, ATClient_MoveInput_Orientation, 0, 0);
  if ( ads )
  {
    v10 = DVARINT_ATClient_MoveToTargetInputDurationMS;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vmovss  [rsp+0B8h+records.deferTimeSeconds], xmm0
    }
    if ( !DVARINT_ATClient_MoveToTargetInputDurationMS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_MoveToTargetInputDurationMS") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v10);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, dword ptr [rbx+28h]
      vmulss  xmm1, xmm0, cs:__real@3a83126f
      vxorps  xmm0, xmm0, xmm0
    }
    memset(&records.keys.keyBits.array[1], 0, 24);
    __asm
    {
      vmovups xmmword ptr [rsp+0B8h+records.moveStick], xmm0
      vmovss  [rsp+0B8h+records.holdTimeSeconds], xmm1
    }
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
  int v8; 
  int v9; 
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
  _RAX = BG_AmmoStoreForWeapon(&result, weapon, v4);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rsp+0F8h+r_ammo2.weapon.weaponIdx], ymm0
    vmovups ymm1, ymmword ptr [rax+20h]
    vmovups ymmword ptr [rsp+0F8h+r_ammo2.weapon.attachmentVariationIndices+5], ymm1
  }
  if ( !playerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1304, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v8 = 0;
  v9 = 0;
  while ( !BG_IsAmmoCompatible(&playerState->weapCommon.ammoNotInClip[v9].ammoType, &r_ammo2) )
  {
    if ( (unsigned int)++v9 >= 0xF )
      goto LABEL_17;
  }
  if ( (const playerState_s *)((char *)playerState + 68 * v9) == (const playerState_s *)-1912i64 )
  {
LABEL_17:
    ammoCount = 0;
    goto LABEL_18;
  }
  ammoCount = playerState->weapCommon.ammoNotInClip[v9].ammoCount;
LABEL_18:
  if ( !playerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1257, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  _RAX = BG_AmmoStoreForWeapon(&result, weapon, v4);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rsp+0F8h+r_ammo2.weapon.weaponIdx], ymm0
    vmovups ymm1, ymmword ptr [rax+20h]
    vmovups ymmword ptr [rsp+0F8h+r_ammo2.weapon.attachmentVariationIndices+5], ymm1
  }
  while ( !BG_IsClipCompatible(&playerState->weapCommon.ammoInClip[v8].clipIndex, &r_ammo2) )
  {
    if ( (unsigned int)++v8 >= 0xF )
      return ammoCount > 0;
  }
  if ( playerState->weapCommon.ammoInClip[v8].ammoCount[0] + playerState->weapCommon.ammoInClip[v8].ammoCount[1] > 0 )
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
  const dvar_t *v2; 
  AutomatedInput_Record records; 

  v2 = DVARINT_ATClient_MoveToTargetInputDurationMS;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  [rsp+88h+records.deferTimeSeconds], xmm0
  }
  if ( !DVARINT_ATClient_MoveToTargetInputDurationMS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_MoveToTargetInputDurationMS") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, dword ptr [rbx+28h]
    vmulss  xmm1, xmm0, cs:__real@3a83126f
    vxorps  xmm0, xmm0, xmm0
  }
  memset(&records.keys.keyBits.array[1], 0, 24);
  __asm
  {
    vmovups xmmword ptr [rsp+88h+records.moveStick], xmm0
    vmovss  [rsp+88h+records.holdTimeSeconds], xmm1
  }
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
  const vec3_t *v4; 
  __int64 v5; 
  float v7; 
  const dvar_t *v8; 
  ClActiveClientMP *ClientMP; 
  nav_space_s *DefaultSpace; 
  int NumSegments; 
  bfx::PolylinePathRCPtr v22; 
  __int64 v23; 
  const dvar_t *v38; 
  char *fmt; 
  bfx::PolylinePathRCPtr result; 
  bfx::PolylinePathRCPtr v42; 
  __int64 v43; 
  vec3_t startPos; 
  vec3_t outPath; 
  float v47; 
  void *retaddr; 

  _RAX = &retaddr;
  v43 = -2i64;
  __asm { vmovaps xmmword ptr [rax-48h], xmm6 }
  v4 = destination;
  v5 = localClientNum;
  __asm { vmovsd  xmm6, qword ptr [rdx] }
  v7 = destination->v[2];
  v8 = DVARBOOL_ATClient_Pathing;
  if ( !DVARBOOL_ATClient_Pathing && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_Pathing") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  if ( v8->current.enabled && s_ATClientNavPathInitialized )
  {
    ClientMP = ClActiveClientMP::GetClientMP((const LocalClientNum_t)v5);
    _RBX = (__int64)ClientMP->GetPlayerState(ClientMP);
    __asm
    {
      vmovss  xmm0, dword ptr [rax+38h]
      vcvtss2sd xmm0, xmm0, xmm0
      vmovss  xmm3, dword ptr [rax+34h]
      vcvtss2sd xmm3, xmm3, xmm3
      vmovss  xmm2, dword ptr [rax+30h]
      vcvtss2sd xmm2, xmm2, xmm2
      vmovsd  [rsp+6C8h+fmt], xmm0
      vmovq   r9, xmm3
      vmovq   r8, xmm2
    }
    Com_Printf(14, "player: %f, %f, %f\n", *(double *)&_XMM2, *(double *)&_XMM3, *(double *)&fmt);
    __asm
    {
      vmovsd  xmm0, qword ptr [rbx+30h]
      vmovsd  qword ptr [rsp+6C8h+startPos], xmm0
    }
    startPos.v[2] = *(float *)(_RBX + 56);
    DefaultSpace = Nav_GetDefaultSpace();
    Nav_FindPath(&result, DefaultSpace, &startPos, v4, 0);
    NumSegments = bfx::PolylinePathRCPtr::GetNumSegments(&result);
    if ( NumSegments > 0 )
    {
      bfx::PolylinePathRCPtr::PolylinePathRCPtr(&v42, &result);
      v23 = (unsigned int)Nav_SimplifyPath(DefaultSpace, &startPos, v22, NAV_LAYER_HUMAN, NULL, 128, &outPath);
      Com_Printf(14, "segmentCount %d, numPathPoints %d\n", (unsigned int)NumSegments, v23);
      if ( (int)v23 > 1 )
      {
        __asm { vmovsd  xmm6, [rsp+6C8h+var_64C] }
        v7 = v47;
        _RDX = 3 * v5;
        _RCX = s_previousClientPosition_0;
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+6C8h+startPos]
          vsubss  xmm3, xmm0, dword ptr [rcx+rdx*4]
          vmovss  xmm1, dword ptr [rsp+6C8h+startPos+4]
          vsubss  xmm2, xmm1, dword ptr [rcx+rdx*4+4]
          vmovss  xmm0, dword ptr [rsp+6C8h+startPos+8]
          vsubss  xmm4, xmm0, dword ptr [rcx+rdx*4+8]
          vmulss  xmm2, xmm2, xmm2
          vmulss  xmm1, xmm3, xmm3
          vaddss  xmm3, xmm2, xmm1
          vmulss  xmm0, xmm4, xmm4
          vaddss  xmm2, xmm3, xmm0
          vcomiss xmm2, cs:__real@41200000
          vmovsd  xmm0, qword ptr [rsp+6C8h+startPos]
          vmovsd  qword ptr [rcx+rdx*4], xmm0
        }
        s_previousClientPosition_0[v5].v[2] = startPos.v[2];
      }
    }
    bfx::PolylinePathRCPtr::~PolylinePathRCPtr(&result);
  }
  __asm { vmovsd  qword ptr [rsp+6C8h+startPos], xmm6 }
  startPos.v[2] = v7;
  v38 = DVARINT_ATClient_DriveToTargetInputDurationMS;
  if ( !DVARINT_ATClient_DriveToTargetInputDurationMS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_DriveToTargetInputDurationMS") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v38);
  ATClient_GenerateInputsToDriveToPos((const LocalClientNum_t)v5, &startPos, v38->current.integer, 1);
  __asm { vmovaps xmm6, [rsp+6C8h+var_48] }
}

/*
==============
ATClient_GenerateInputsToDriveToPos
==============
*/
void ATClient_GenerateInputsToDriveToPos(const LocalClientNum_t localClientNum, const vec3_t *targetPos, const int durationMS, const bool scaleDownInputsBasedOnTargetProximity)
{
  ClActiveClientMP *ClientMP; 
  __int16 remoteControlEnt; 
  const entityState_t *EntityState; 
  bool v18; 
  bool v19; 
  const VehicleDef *ClientDef; 
  char v68; 
  char v69; 
  char v96; 
  char v97; 
  const dvar_t *v100; 
  float c; 
  float s; 
  float v111[2]; 
  vec2_t v; 
  vec3_t forward; 
  AutomatedInput_Record records; 
  char v119; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-88h], xmm10
  }
  _RDI = targetPos;
  ClientMP = ClActiveClientMP::GetClientMP(localClientNum);
  ClientMP->GetPlayerState(ClientMP);
  remoteControlEnt = ClientMP->snap.ps.remoteControlEnt;
  EntityState = NULL;
  v18 = (unsigned __int16)remoteControlEnt < 0xF8u;
  v19 = remoteControlEnt == 248;
  if ( remoteControlEnt >= 248 )
    EntityState = ATClient_GetEntityState(localClientNum, remoteControlEnt);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vsubss  xmm7, xmm0, dword ptr [rsi+30h]
    vmovss  xmm0, dword ptr [rdi+4]
    vsubss  xmm6, xmm0, dword ptr [rsi+34h]
    vmovss  xmm2, cs:__real@358637be
    vmovss  xmm0, dword ptr [rdi+8]
    vsubss  xmm10, xmm0, dword ptr [rsi+38h]
    vmulss  xmm1, xmm7, xmm7
    vcomiss xmm1, xmm2
  }
  if ( !v18 && !v19 )
    goto LABEL_5;
  __asm
  {
    vmulss  xmm0, xmm6, xmm6
    vcomiss xmm0, xmm2
  }
  if ( !v18 && !v19 )
  {
LABEL_5:
    __asm
    {
      vmovaps xmmword ptr [rsp+150h+var_68+8], xmm8
      vmovaps [rsp+150h+var_78+8], xmm9
      vmulss  xmm1, xmm6, xmm6
      vmulss  xmm0, xmm7, xmm7
      vaddss  xmm9, xmm1, xmm0
      vxorps  xmm8, xmm8, xmm8
      vcomiss xmm9, xmm8
      vmovaps xmmword ptr [rsp+150h+var_98+8], xmm11
      vmovaps [rsp+150h+var_A8+8], xmm12
    }
    if ( (v18 || v19) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 639, ASSERT_TYPE_SANITY, "( val > 0 )", (const char *)&queryFormat, "val > 0") )
      __debugbreak();
    memset(&records.keys, 0, sizeof(records.keys));
    __asm
    {
      vmovaps xmm1, xmm9
      vrsqrtss xmm2, xmm1, xmm1
      vmulss  xmm0, xmm10, xmm10
      vmulss  xmm12, xmm6, xmm2
      vaddss  xmm6, xmm0, xmm9
      vmovss  xmm9, cs:__real@3f800000
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, r12d
      vmulss  xmm1, xmm0, cs:__real@3a83126f
      vmovss  [rsp+150h+records.holdTimeSeconds], xmm1
      vmovss  [rsp+150h+records.deferTimeSeconds], xmm8
      vmulss  xmm11, xmm7, xmm2
    }
    if ( EntityState )
    {
      ClientDef = CgVehicleSystem::GetClientDef((unsigned int)EntityState->lerp.u.anonymous.data[0] >> 7);
      if ( ClientDef )
      {
        AngleVectors(&EntityState->lerp.apos.trBase, &forward, NULL, NULL);
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+150h+forward]
          vmovss  xmm1, dword ptr [rsp+150h+forward+4]
          vmovss  dword ptr [rsp+150h+v], xmm0
          vmovss  dword ptr [rsp+150h+v+4], xmm1
        }
        Vec2NormalizeFast(&v);
        __asm
        {
          vmulss  xmm1, xmm11, dword ptr [rsp+150h+v+4]
          vmulss  xmm2, xmm11, dword ptr [rsp+150h+v]
          vmulss  xmm0, xmm12, dword ptr [rsp+150h+v]
          vsubss  xmm0, xmm1, xmm0; Y
          vmulss  xmm1, xmm12, dword ptr [rsp+150h+v+4]
          vaddss  xmm1, xmm2, xmm1; X
        }
        *(float *)&_XMM0 = atan2f_0(*(float *)&_XMM0, *(float *)&_XMM1);
        FastSinCos(*(const float *)&_XMM0, &s, &c);
        __asm
        {
          vmovss  xmm1, [rsp+150h+c]
          vmovss  xmm0, [rsp+150h+s]
          vmovss  dword ptr [rbp+50h+records.moveStick], xmm1
          vmovss  dword ptr [rbp+50h+records.moveStick+4], xmm0
        }
        if ( ClientDef->type == VEH_CAR )
        {
          __asm
          {
            vmovss  xmm0, cs:__real@bf800000
            vcmpltss xmm1, xmm8, xmm1
            vblendvps xmm1, xmm0, xmm9, xmm1
            vmovss  dword ptr [rbp+50h+records.moveStick], xmm1
            vmovaps xmm1, xmm11; X
            vmovaps xmm0, xmm12; Y
          }
          *(float *)&_XMM0 = atan2f_0(*(float *)&_XMM0, *(float *)&_XMM1);
          __asm
          {
            vmulss  xmm5, xmm0, cs:__real@3e22f983
            vaddss  xmm2, xmm5, cs:__real@3f000000
            vxorps  xmm1, xmm1, xmm1
            vmovss  xmm3, xmm1, xmm2
            vxorps  xmm0, xmm0, xmm0
            vroundss xmm4, xmm0, xmm3, 1
            vsubss  xmm1, xmm5, xmm4
            vmulss  xmm0, xmm1, cs:__real@40000000
            vmovss  dword ptr [rbp+50h+records.moveStick+4], xmm0
          }
        }
      }
    }
    if ( scaleDownInputsBasedOnTargetProximity )
    {
      _RBX = DVARFLT_ATClient_DriveToTargetInputScaleDistanceSq;
      if ( !DVARFLT_ATClient_DriveToTargetInputScaleDistanceSq && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_DriveToTargetInputScaleDistanceSq") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+28h]
        vcomiss xmm6, xmm0
      }
      if ( v68 )
      {
        __asm { vcomiss xmm0, xmm8 }
        if ( !(v68 | v69) )
        {
          __asm
          {
            vdivss  xmm3, xmm6, xmm0
            vmulss  xmm1, xmm3, dword ptr [rbp+50h+records.moveStick]
            vmulss  xmm0, xmm3, dword ptr [rbp+50h+records.moveStick+4]
            vmovss  dword ptr [rbp+50h+records.moveStick], xmm1
            vmovss  dword ptr [rbp+50h+records.moveStick+4], xmm0
          }
        }
      }
    }
    _RAX = ATClient_GetPlayerForwardVector(&forward, localClientNum);
    __asm
    {
      vmovsd  xmm6, qword ptr [rax]
      vshufps xmm7, xmm6, xmm6, 55h ; 'U'
      vmulss  xmm1, xmm7, xmm7
      vmulss  xmm0, xmm6, xmm6
      vaddss  xmm10, xmm1, xmm0
      vcomiss xmm10, xmm8
    }
    if ( (v18 || v19) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 639, ASSERT_TYPE_SANITY, "( val > 0 )", (const char *)&queryFormat, "val > 0") )
      __debugbreak();
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vmovaps xmm1, xmm10
      vmovss  xmm2, xmm0, xmm1
      vrsqrtss xmm2, xmm2, xmm2
      vmulss  xmm4, xmm2, xmm7
      vmulss  xmm3, xmm6, xmm2
      vmulss  xmm1, xmm4, xmm11
      vmulss  xmm0, xmm3, xmm12
      vsubss  xmm0, xmm1, xmm0; Y
      vmulss  xmm1, xmm4, xmm12
      vmulss  xmm2, xmm3, xmm11
      vaddss  xmm1, xmm2, xmm1; X
    }
    *(float *)&_XMM0 = atan2f_0(*(float *)&_XMM0, *(float *)&_XMM1);
    __asm { vmovaps xmm6, xmm0 }
    FastSinCos(*(const float *)&_XMM0, &v111[1], v111);
    __asm
    {
      vmovaps xmm12, [rsp+150h+var_A8+8]
      vmovaps xmm11, xmmword ptr [rsp+150h+var_98+8]
    }
    if ( scaleDownInputsBasedOnTargetProximity )
    {
      _RBX = DVARFLT_ATClient_MoveToTargetInputScaleAngle;
      if ( !DVARFLT_ATClient_MoveToTargetInputScaleAngle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_MoveToTargetInputScaleAngle") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm
      {
        vmovss  xmm1, dword ptr [rbx+28h]
        vandps  xmm0, xmm6, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
        vcomiss xmm0, xmm1
      }
      if ( v96 )
      {
        __asm { vcomiss xmm1, xmm8 }
        if ( !(v96 | v97) )
          __asm { vdivss  xmm9, xmm0, xmm1 }
      }
    }
    v100 = DVARBOOL_ATClient_DriveToTargetGenerateInput;
    __asm
    {
      vmulss  xmm0, xmm9, xmm6
      vmovaps xmm9, [rsp+150h+var_78+8]
      vmulss  xmm1, xmm0, cs:__real@3ea2f983
      vmovss  dword ptr [rbp+50h+records.lookStick], xmm8
      vmovaps xmm8, xmmword ptr [rsp+150h+var_68+8]
      vmovss  dword ptr [rbp+50h+records.lookStick+4], xmm1
    }
    if ( !DVARBOOL_ATClient_DriveToTargetGenerateInput && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_DriveToTargetGenerateInput") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v100);
    if ( v100->current.enabled )
      CL_Input_AddAutomatedSequence(localClientNum, &records, 1);
  }
  _R11 = &v119;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm10, xmmword ptr [r11-50h]
  }
}

/*
==============
ATClient_GenerateInputsToMoveToPos
==============
*/
void ATClient_GenerateInputsToMoveToPos(const LocalClientNum_t localClientNum, const vec3_t *targetPos, const int durationMS, const ATClient_MoveInput moveInput, const bool scaleDownInputsBasedOnTargetProximity, const bool jump)
{
  ClActiveClientMP *ClientMP; 
  char v18; 
  char v19; 
  char v39; 
  char v40; 
  char v59; 
  char v60; 
  char v65; 
  char v66; 
  const dvar_t *v70; 
  float c; 
  float s; 
  vec3_t result; 
  vec2_t v; 
  AutomatedInput_Record records; 
  char v86; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-98h], xmm12
  }
  _RBX = targetPos;
  ClientMP = ClActiveClientMP::GetClientMP(localClientNum);
  ClientMP->GetPlayerState(ClientMP);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vmovss  xmm9, cs:__real@358637be
    vsubss  xmm8, xmm0, dword ptr [rax+30h]
    vmovss  xmm0, dword ptr [rbx+4]
    vsubss  xmm7, xmm0, dword ptr [rax+34h]
    vmovss  xmm0, dword ptr [rbx+8]
    vsubss  xmm12, xmm0, dword ptr [rax+38h]
    vmulss  xmm1, xmm8, xmm8
    vcomiss xmm1, xmm9
  }
  if ( !(v18 | v19) )
    goto LABEL_3;
  __asm
  {
    vmulss  xmm0, xmm7, xmm7
    vcomiss xmm0, xmm9
  }
  if ( !(v18 | v19) )
  {
LABEL_3:
    __asm
    {
      vmovaps xmmword ptr [rsp+130h+var_38+8], xmm6
      vmovaps xmmword ptr [rsp+130h+var_78+8], xmm10
      vmulss  xmm1, xmm8, xmm8
      vmulss  xmm0, xmm7, xmm7
      vaddss  xmm10, xmm1, xmm0
      vxorps  xmm6, xmm6, xmm6
      vcomiss xmm10, xmm6
      vmovaps [rsp+130h+var_88+8], xmm11
    }
    if ( v18 | v19 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 639, ASSERT_TYPE_SANITY, "( val > 0 )", (const char *)&queryFormat, "val > 0") )
      __debugbreak();
    __asm
    {
      vmovaps xmm1, xmm10
      vrsqrtss xmm2, xmm1, xmm1
      vmulss  xmm0, xmm12, xmm12
      vmulss  xmm11, xmm7, xmm2
      vaddss  xmm7, xmm0, xmm10
      vmulss  xmm8, xmm8, xmm2
    }
    _RAX = ATClient_GetPlayerForwardVector(&result, localClientNum);
    __asm
    {
      vmovaps xmm10, xmmword ptr [rsp+130h+var_78+8]
      vmovsd  xmm1, qword ptr [rax]
      vshufps xmm0, xmm1, xmm1, 55h ; 'U'
      vmovss  dword ptr [rsp+130h+v+4], xmm0
      vmovss  dword ptr [rsp+130h+v], xmm1
      vmovss  xmm0, dword ptr [rsp+130h+v]
      vmulss  xmm1, xmm0, xmm0
      vcomiss xmm1, xmm9
    }
    if ( !(v39 | v40) )
      goto LABEL_8;
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+130h+v+4]
      vmulss  xmm1, xmm0, xmm0
      vcomiss xmm1, xmm9
    }
    if ( !(v39 | v40) )
    {
LABEL_8:
      Vec2NormalizeFast(&v);
      __asm
      {
        vmulss  xmm2, xmm8, dword ptr [rsp+130h+v+4]
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, edi
        vmulss  xmm1, xmm0, cs:__real@3a83126f
        vmulss  xmm0, xmm11, dword ptr [rsp+130h+v]
        vmovss  [rsp+130h+records.holdTimeSeconds], xmm1
        vmulss  xmm1, xmm11, dword ptr [rsp+130h+v+4]
        vsubss  xmm0, xmm2, xmm0; Y
        vmulss  xmm2, xmm8, dword ptr [rsp+130h+v]
        vaddss  xmm1, xmm2, xmm1; X
        vmovss  [rsp+130h+records.deferTimeSeconds], xmm6
      }
      memset(&records.keys, 0, sizeof(records.keys));
      *(float *)&_XMM0 = atan2f_0(*(float *)&_XMM0, *(float *)&_XMM1);
      __asm { vmovaps xmm8, xmm0 }
      FastSinCos(*(const float *)&_XMM0, &s, &c);
      if ( (unsigned int)moveInput <= ATClient_MoveInput_Position )
      {
        __asm
        {
          vmovss  xmm0, [rsp+130h+c]
          vmovss  xmm1, [rsp+130h+s]
          vmovss  dword ptr [rbp+30h+records.moveStick], xmm0
          vmovss  dword ptr [rbp+30h+records.moveStick+4], xmm1
        }
        if ( scaleDownInputsBasedOnTargetProximity )
        {
          *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_ATClient_MoveToTargetInputScaleDistanceSq, "ATClient_MoveToTargetInputScaleDistanceSq");
          __asm { vcomiss xmm7, xmm0 }
          if ( v59 )
          {
            __asm { vcomiss xmm0, xmm6 }
            if ( !(v59 | v60) )
            {
              __asm
              {
                vdivss  xmm3, xmm7, xmm0
                vmulss  xmm1, xmm3, dword ptr [rbp+30h+records.moveStick]
                vmulss  xmm0, xmm3, dword ptr [rbp+30h+records.moveStick+4]
                vmovss  dword ptr [rbp+30h+records.moveStick], xmm1
                vmovss  dword ptr [rbp+30h+records.moveStick+4], xmm0
              }
            }
          }
        }
        _RBX = DVARFLT_ATClient_MoveToTargetInputRunDistanceSq;
        if ( !DVARFLT_ATClient_MoveToTargetInputRunDistanceSq && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_MoveToTargetInputRunDistanceSq") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(_RBX);
        __asm { vcomiss xmm7, dword ptr [rbx+28h] }
        if ( !(v18 | v19) )
          bitarray_base<bitarray<224>>::setBit((bitarray_base<bitarray<224> > *)&records.keys, 0x10u);
        if ( jump )
          bitarray_base<bitarray<224>>::setBit((bitarray_base<bitarray<224> > *)&records.keys, 1u);
      }
      else
      {
        __asm
        {
          vmovss  dword ptr [rbp+30h+records.moveStick], xmm6
          vmovss  dword ptr [rbp+30h+records.moveStick+4], xmm6
        }
      }
      if ( (moveInput & 0xFFFFFFFD) != 0 )
      {
        __asm { vmovss  dword ptr [rbp+30h+records.lookStick+4], xmm6 }
      }
      else
      {
        __asm { vmovss  xmm7, cs:__real@3f800000 }
        if ( scaleDownInputsBasedOnTargetProximity )
        {
          *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_ATClient_MoveToTargetInputScaleAngle, "ATClient_MoveToTargetInputScaleAngle");
          __asm
          {
            vandps  xmm1, xmm8, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
            vcomiss xmm1, xmm0
          }
          if ( v65 )
          {
            __asm { vcomiss xmm0, xmm6 }
            if ( !(v65 | v66) )
              __asm { vdivss  xmm7, xmm1, xmm0 }
          }
        }
        __asm
        {
          vmulss  xmm0, xmm7, xmm8
          vmulss  xmm1, xmm0, cs:__real@3ea2f983
          vmovss  dword ptr [rbp+30h+records.lookStick+4], xmm1
        }
      }
      v70 = DVARBOOL_ATClient_MoveToTargetGenerateInput;
      __asm { vmovss  dword ptr [rbp+30h+records.lookStick], xmm6 }
      if ( !DVARBOOL_ATClient_MoveToTargetGenerateInput && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_MoveToTargetGenerateInput") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v70);
      if ( v70->current.enabled )
        CL_Input_AddAutomatedSequence(localClientNum, &records, 1);
    }
    __asm
    {
      vmovaps xmm6, xmmword ptr [rsp+130h+var_38+8]
      vmovaps xmm11, [rsp+130h+var_88+8]
    }
  }
  _R11 = &v86;
  __asm
  {
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm12, xmmword ptr [r11-70h]
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
  unsigned int v10; 
  ClActiveClientMP *v12; 
  team_t LocalPlayerTeam; 
  __int64 v15; 
  __int64 v16; 
  unsigned int *v21; 
  unsigned int v22; 
  const entityState_t *RemotePlayerEntityState; 
  unsigned int v25; 
  char v36; 
  __int64 result; 
  vec3_t trBase; 
  char v49; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-28h], xmm6 }
  ClientMP = ClActiveClientMP::GetClientMP(localClientNum);
  _RAX = (__int64)ClientMP->GetPlayerState(ClientMP);
  v10 = -1;
  __asm { vmovsd  xmm0, qword ptr [rax+30h] }
  LODWORD(_RAX) = *(_DWORD *)(_RAX + 56);
  __asm { vmovsd  qword ptr [rsp+0A8h+trBase], xmm0 }
  LODWORD(trBase.v[2]) = _RAX;
  v12 = ClActiveClientMP::GetClientMP(localClientNum);
  LocalPlayerTeam = ATClient_GetLocalPlayerTeam(localClientNum);
  __asm { vmovss  xmm6, cs:__real@7f7fffff }
  v15 = 0i64;
  v16 = (__int64)v12->GetPlayerState(v12);
  if ( v12->snap.numClients )
  {
    __asm
    {
      vmovaps [rsp+0A8h+var_38], xmm7
      vmovaps [rsp+0A8h+var_48], xmm8
      vmovss  xmm8, dword ptr [rsp+0A8h+trBase+8]
      vmovaps [rsp+0A8h+var_58], xmm9
      vmovss  xmm9, dword ptr [rsp+0A8h+trBase+4]
      vmovaps [rsp+0A8h+var_68], xmm10
      vmovss  xmm10, dword ptr [rsp+0A8h+trBase]
      vxorps  xmm7, xmm7, xmm7
    }
    do
    {
      v21 = (unsigned int *)&v12->parseClients[(v15 + v12->snap.parseClientsIndex) % v12->parseClientsCount];
      v22 = *v21;
      if ( *v21 != *(_DWORD *)(v16 + 460) )
      {
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, dword ptr [rbx+0A0h]
          vcomiss xmm0, xmm7
        }
        if ( v22 > *(_DWORD *)(v16 + 460) )
        {
          RemotePlayerEntityState = ATClient_GetRemotePlayerEntityState(v12, v22);
          if ( RemotePlayerEntityState )
          {
            v25 = v21[1];
            if ( !v25 || v25 != LocalPlayerTeam )
            {
              Trajectory_GetTrBase(&RemotePlayerEntityState->lerp.pos, &trBase);
              __asm
              {
                vmovss  xmm0, dword ptr [rsp+0A8h+trBase]
                vmovss  xmm1, dword ptr [rsp+0A8h+trBase+4]
                vsubss  xmm3, xmm0, xmm10
                vmovss  xmm0, dword ptr [rsp+0A8h+trBase+8]
                vsubss  xmm2, xmm1, xmm9
                vsubss  xmm4, xmm0, xmm8
                vmulss  xmm2, xmm2, xmm2
                vmulss  xmm1, xmm3, xmm3
                vmulss  xmm0, xmm4, xmm4
                vaddss  xmm3, xmm2, xmm1
                vaddss  xmm5, xmm3, xmm0
                vcomiss xmm5, xmm6
              }
              if ( v36 )
              {
                v10 = *v21;
                __asm { vmovaps xmm6, xmm5 }
              }
            }
          }
        }
      }
      ++v15;
    }
    while ( v15 < v12->snap.numClients );
    __asm
    {
      vmovaps xmm10, [rsp+0A8h+var_68]
      vmovaps xmm9, [rsp+0A8h+var_58]
      vmovaps xmm8, [rsp+0A8h+var_48]
      vmovaps xmm7, [rsp+0A8h+var_38]
    }
  }
  result = v10;
  _R11 = &v49;
  __asm { vmovaps xmm6, xmmword ptr [r11-10h] }
  return result;
}

/*
==============
ATClient_GetClosestEnemyToPos
==============
*/
__int64 ATClient_GetClosestEnemyToPos(const LocalClientNum_t localClientNum, const vec3_t *pos)
{
  unsigned int v6; 
  ClActiveClientMP *ClientMP; 
  team_t LocalPlayerTeam; 
  __int64 v10; 
  __int64 v11; 
  unsigned int *v13; 
  unsigned int v14; 
  const entityState_t *RemotePlayerEntityState; 
  unsigned int v17; 
  char v28; 
  __int64 result; 
  vec3_t trBase; 

  __asm { vmovaps [rsp+88h+var_38], xmm6 }
  v6 = -1;
  ClientMP = ClActiveClientMP::GetClientMP(localClientNum);
  LocalPlayerTeam = ATClient_GetLocalPlayerTeam(localClientNum);
  __asm { vmovss  xmm6, cs:__real@7f7fffff }
  v10 = 0i64;
  v11 = (__int64)ClientMP->GetPlayerState(ClientMP);
  if ( ClientMP->snap.numClients )
  {
    __asm
    {
      vmovaps [rsp+88h+var_48], xmm7
      vxorps  xmm7, xmm7, xmm7
    }
    do
    {
      v13 = (unsigned int *)&ClientMP->parseClients[(v10 + ClientMP->snap.parseClientsIndex) % ClientMP->parseClientsCount];
      v14 = *v13;
      if ( *v13 != *(_DWORD *)(v11 + 460) )
      {
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, dword ptr [rbx+0A0h]
          vcomiss xmm0, xmm7
        }
        if ( v14 > *(_DWORD *)(v11 + 460) )
        {
          RemotePlayerEntityState = ATClient_GetRemotePlayerEntityState(ClientMP, v14);
          if ( RemotePlayerEntityState )
          {
            v17 = v13[1];
            if ( !v17 || v17 != LocalPlayerTeam )
            {
              Trajectory_GetTrBase(&RemotePlayerEntityState->lerp.pos, &trBase);
              __asm
              {
                vmovss  xmm0, dword ptr [rsp+88h+trBase]
                vsubss  xmm3, xmm0, dword ptr [r15]
                vmovss  xmm1, dword ptr [rsp+88h+trBase+4]
                vmovss  xmm0, dword ptr [rsp+88h+trBase+8]
                vsubss  xmm2, xmm1, dword ptr [r15+4]
                vsubss  xmm4, xmm0, dword ptr [r15+8]
                vmulss  xmm2, xmm2, xmm2
                vmulss  xmm1, xmm3, xmm3
                vmulss  xmm0, xmm4, xmm4
                vaddss  xmm3, xmm2, xmm1
                vaddss  xmm5, xmm3, xmm0
                vcomiss xmm5, xmm6
              }
              if ( v28 )
              {
                v6 = *v13;
                __asm { vmovaps xmm6, xmm5 }
              }
            }
          }
        }
      }
      ++v10;
    }
    while ( v10 < ClientMP->snap.numClients );
    __asm { vmovaps xmm7, [rsp+88h+var_48] }
  }
  result = v6;
  __asm { vmovaps xmm6, [rsp+88h+var_38] }
  return result;
}

/*
==============
ATClient_GetClosestEnemyVehicle
==============
*/
__int64 ATClient_GetClosestEnemyVehicle(const LocalClientNum_t localClientNum)
{
  signed __int64 v1; 
  void *v3; 
  unsigned __int16 v5; 
  ClActiveClientMP *ClientMP; 
  team_t LocalPlayerTeam; 
  __int64 v9; 
  __int64 v10; 
  ClActiveClientMP *v11; 
  __int64 v12; 
  __int64 numEntities; 
  __int64 parseEntitiesIndex; 
  entityState_t *parseEntities; 
  __int64 v17; 
  __int64 parseEntitiesCount; 
  __int64 v28; 
  char *v29; 
  int v30; 
  ClActiveClientMP *v31; 
  __int64 v32; 
  __int64 numClients; 
  __int64 parseClientsIndex; 
  clientState_t *parseClients; 
  __int64 parseClientsCount; 
  clientState_t *v37; 
  team_t team; 
  char v50; 
  __int64 result; 
  vec3_t trBase; 
  char v55; 
  char v56; 
  char v58; 

  v3 = alloca(v1);
  __asm { vmovaps [rsp+6168h+var_38], xmm6 }
  v5 = 2047;
  ClientMP = ClActiveClientMP::GetClientMP(localClientNum);
  LocalPlayerTeam = ATClient_GetLocalPlayerTeam(localClientNum);
  __asm { vmovss  xmm6, cs:__real@7f7fffff }
  v9 = (__int64)ClientMP->GetPlayerState(ClientMP);
  LODWORD(v10) = 0;
  v11 = ClActiveClientMP::GetClientMP(localClientNum);
  v12 = 0i64;
  numEntities = v11->snap.numEntities;
  if ( v11->snap.numEntities )
  {
    parseEntitiesIndex = v11->snap.parseEntitiesIndex;
    _RBP = &v55;
    parseEntities = v11->parseEntities;
    v17 = 0i64;
    parseEntitiesCount = v11->parseEntitiesCount;
    do
    {
      _RAX = &parseEntities[(parseEntitiesIndex + v12) % parseEntitiesCount];
      if ( _RAX->eType == ET_VEHICLE )
      {
        if ( v17 >= 100 )
          break;
        __asm
        {
          vmovups ymm0, ymmword ptr [rax]
          vmovups ymmword ptr [rbp+0], ymm0
          vmovups ymm0, ymmword ptr [rax+20h]
          vmovups ymmword ptr [rbp+20h], ymm0
          vmovups ymm0, ymmword ptr [rax+40h]
          vmovups ymmword ptr [rbp+40h], ymm0
          vmovups ymm0, ymmword ptr [rax+60h]
          vmovups ymmword ptr [rbp+60h], ymm0
          vmovups ymm0, ymmword ptr [rax+80h]
          vmovups ymmword ptr [rbp+80h], ymm0
          vmovups ymm0, ymmword ptr [rax+0A0h]
          vmovups ymmword ptr [rbp+0A0h], ymm0
          vmovups ymm0, ymmword ptr [rax+0C0h]
          vmovups ymmword ptr [rbp+0C0h], ymm0
          vmovups xmm0, xmmword ptr [rax+0E0h]
        }
        v28 = *(_QWORD *)&_RAX->partBits.array[6];
        LODWORD(v10) = v10 + 1;
        __asm { vmovups xmmword ptr [rbp+0E0h], xmm0 }
        ++v17;
        *((_QWORD *)_RBP + 30) = v28;
        _RBP += 248;
      }
      ++v12;
    }
    while ( v12 < numEntities );
  }
  v10 = (int)v10;
  if ( (int)v10 > 0 )
  {
    v29 = &v56;
    do
    {
      if ( *v29 )
      {
        v30 = (unsigned __int8)*v29 - 1;
        v31 = ClActiveClientMP::GetClientMP(localClientNum);
        v32 = 0i64;
        numClients = v31->snap.numClients;
        if ( v31->snap.numClients )
        {
          parseClientsIndex = v31->snap.parseClientsIndex;
          parseClients = v31->parseClients;
          parseClientsCount = v31->parseClientsCount;
          while ( 1 )
          {
            v37 = &parseClients[(parseClientsIndex + v32) % parseClientsCount];
            if ( v37->clientIndex == v30 )
              break;
            if ( ++v32 >= numClients )
              goto LABEL_22;
          }
          team = v37->team;
          if ( team == TEAM_ZERO || team != LocalPlayerTeam )
          {
            if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_utils.cpp", 236, ASSERT_TYPE_ASSERT, "(playerState)", (const char *)&queryFormat, "playerState") )
              __debugbreak();
            Trajectory_GetTrBase((const trajectory_t_secure *)v29 - 3, &trBase);
            __asm
            {
              vmovss  xmm0, dword ptr [rsp+6168h+trBase]
              vsubss  xmm3, xmm0, dword ptr [r14+30h]
              vmovss  xmm1, dword ptr [rsp+6168h+trBase+4]
              vmovss  xmm0, dword ptr [rsp+6168h+trBase+8]
              vsubss  xmm2, xmm1, dword ptr [r14+34h]
              vsubss  xmm4, xmm0, dword ptr [r14+38h]
              vmulss  xmm2, xmm2, xmm2
              vmulss  xmm1, xmm3, xmm3
              vmulss  xmm0, xmm4, xmm4
              vaddss  xmm3, xmm2, xmm1
              vaddss  xmm5, xmm3, xmm0
              vcomiss xmm5, xmm6
            }
            if ( v50 )
            {
              v5 = *((_WORD *)v29 - 62);
              __asm { vmovaps xmm6, xmm5 }
            }
          }
        }
      }
LABEL_22:
      v29 += 248;
      --v10;
    }
    while ( v10 );
  }
  result = v5;
  _R11 = &v58;
  __asm { vmovaps xmm6, xmmword ptr [r11-10h] }
  return result;
}

/*
==============
ATClient_GetClosestObjective
==============
*/
__int64 ATClient_GetClosestObjective(const LocalClientNum_t localClientNum, const int sideFlags)
{
  unsigned int v6; 
  ClActiveClientMP *ClientMP; 
  __int64 v8; 
  unsigned int i; 
  char v11; 
  unsigned int v12; 
  bool v13; 
  const entityState_t *EntityState; 
  float v16; 
  __int64 result; 
  float v31; 
  vec3_t trBase; 

  __asm
  {
    vmovaps [rsp+0C8h+var_38], xmm6
    vmovss  xmm6, cs:__real@7f7fffff
  }
  v6 = -1;
  ClientMP = ClActiveClientMP::GetClientMP(localClientNum);
  if ( ClientMP )
  {
    v8 = (__int64)ClientMP->GetPlayerState(ClientMP);
    if ( v8 )
    {
      _RBX = (unsigned __int8 *)(v8 + 4881);
      for ( i = 0; i < 0x20; ++i )
      {
        v11 = *(_RBX - 2);
        if ( (v11 == 1 || v11 == 4) && _bittest(&sideFlags, *_RBX) )
        {
          v12 = *(_DWORD *)(_RBX - 161);
          v13 = v12 < 0x7FF;
          if ( v12 == 2047 )
            goto LABEL_13;
          if ( v12 + 0x8000 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)v12, "signed", *(int *)(_RBX - 161)) )
            __debugbreak();
          EntityState = ATClient_GetEntityState(localClientNum, v12);
          v13 = 0;
          if ( !EntityState )
          {
LABEL_13:
            __asm { vmovsd  xmm0, qword ptr [rbx-81h] }
            v16 = *(float *)(_RBX - 121);
          }
          else
          {
            Trajectory_GetTrBase(&EntityState->lerp.pos, &trBase);
            __asm { vmovsd  xmm0, qword ptr [rsp+0C8h+trBase] }
            v16 = trBase.v[2];
          }
          __asm
          {
            vmovsd  [rsp+0C8h+var_78], xmm0
            vmovss  xmm0, dword ptr [rsp+0C8h+var_78]
            vsubss  xmm2, xmm0, dword ptr [r14+30h]
            vmovss  xmm1, dword ptr [rsp+0C8h+var_78+4]
            vsubss  xmm3, xmm1, dword ptr [r14+34h]
          }
          v31 = v16;
          __asm
          {
            vmovss  xmm0, [rsp+0C8h+var_70]
            vsubss  xmm4, xmm0, dword ptr [r14+38h]
            vmulss  xmm2, xmm2, xmm2
            vmulss  xmm1, xmm3, xmm3
            vmulss  xmm0, xmm4, xmm4
            vaddss  xmm3, xmm2, xmm1
            vaddss  xmm5, xmm3, xmm0
            vcomiss xmm5, xmm6
          }
          if ( v13 )
          {
            __asm { vmovaps xmm6, xmm5 }
            v6 = i;
          }
        }
        _RBX += 172;
      }
      result = v6;
    }
    else
    {
      result = 0xFFFFFFFFi64;
    }
  }
  else
  {
    result = 0xFFFFFFFFi64;
  }
  __asm { vmovaps xmm6, [rsp+0C8h+var_38] }
  return result;
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
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+58h+trBase]
    vsubss  xmm3, xmm0, dword ptr [rbx+30h]
    vmovss  xmm1, dword ptr [rsp+58h+trBase+4]
    vmovss  xmm0, dword ptr [rsp+58h+trBase+8]
    vsubss  xmm2, xmm1, dword ptr [rbx+34h]
    vsubss  xmm4, xmm0, dword ptr [rbx+38h]
    vmulss  xmm2, xmm2, xmm2
    vmulss  xmm1, xmm3, xmm3
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm3, xmm2, xmm1
    vaddss  xmm0, xmm3, xmm0
  }
  return *(float *)&_XMM0;
}

/*
==============
ATClient_GetEnemyList
==============
*/
__int64 ATClient_GetEnemyList(const LocalClientNum_t localClientNum, int *clientNums, const int maxClientNums)
{
  __int64 v5; 
  unsigned int v8; 
  ClActiveClientMP *ClientMP; 
  team_t LocalPlayerTeam; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 
  clientState_t *v16; 
  unsigned int clientIndex; 
  team_t team; 

  v5 = maxClientNums;
  if ( !clientNums && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_utils.cpp", 464, ASSERT_TYPE_ASSERT, "(clientNums != nullptr)", (const char *)&queryFormat, "clientNums != nullptr") )
    __debugbreak();
  if ( (int)v5 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_utils.cpp", 465, ASSERT_TYPE_ASSERT, "(maxClientNums > 0)", (const char *)&queryFormat, "maxClientNums > 0") )
    __debugbreak();
  v8 = 0;
  ClientMP = ClActiveClientMP::GetClientMP(localClientNum);
  LocalPlayerTeam = ATClient_GetLocalPlayerTeam(localClientNum);
  v11 = (__int64)ClientMP->GetPlayerState(ClientMP);
  v12 = 0i64;
  v13 = v11;
  if ( ClientMP->snap.numClients )
  {
    v14 = 0i64;
    __asm { vxorps  xmm1, xmm1, xmm1 }
    do
    {
      v16 = &ClientMP->parseClients[(v12 + ClientMP->snap.parseClientsIndex) % ClientMP->parseClientsCount];
      clientIndex = v16->clientIndex;
      if ( v16->clientIndex != *(_DWORD *)(v13 + 460) )
      {
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, dword ptr [rax+0A0h]
          vcomiss xmm0, xmm1
        }
        if ( clientIndex > *(_DWORD *)(v13 + 460) )
        {
          team = v16->team;
          if ( (team == TEAM_ZERO || team != LocalPlayerTeam) && v14 < v5 )
          {
            ++v8;
            clientNums[v14++] = clientIndex;
          }
        }
      }
      ++v12;
    }
    while ( v12 < ClientMP->snap.numClients );
  }
  return v8;
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
  float v9; 
  vec3_t trBase; 

  _RSI = (int *)objective;
  _RBX = result;
  if ( !objective && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_utils.cpp", 305, ASSERT_TYPE_ASSERT, "(objective != nullptr)", (const char *)&queryFormat, "objective != nullptr") )
    __debugbreak();
  v6 = *_RSI;
  if ( *_RSI == 2047 )
    goto LABEL_10;
  if ( (unsigned int)(v6 + 0x8000) > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)v6, "signed", *_RSI) )
    __debugbreak();
  EntityState = ATClient_GetEntityState(localClientNum, v6);
  if ( !EntityState )
  {
LABEL_10:
    __asm { vmovsd  xmm0, qword ptr [rsi+20h] }
    v9 = *((float *)_RSI + 10);
  }
  else
  {
    Trajectory_GetTrBase(&EntityState->lerp.pos, &trBase);
    __asm { vmovsd  xmm0, qword ptr [rsp+88h+trBase] }
    v9 = trBase.v[2];
  }
  __asm { vmovsd  qword ptr [rbx], xmm0 }
  _RBX->v[2] = v9;
  return _RBX;
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
  __int64 v13; 

  v4 = maxObjectives;
  _RDI = objectives;
  if ( maxObjectives <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_utils.cpp", 270, ASSERT_TYPE_ASSERT, "(maxObjectives > 0)", (const char *)&queryFormat, "maxObjectives > 0") )
    __debugbreak();
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_utils.cpp", 271, ASSERT_TYPE_ASSERT, "(objectives != nullptr)", (const char *)&queryFormat, "objectives != nullptr") )
    __debugbreak();
  v8 = 0;
  ClientMP = ClActiveClientMP::GetClientMP(localClientNum);
  if ( ClientMP )
  {
    v10 = (__int64)ClientMP->GetPlayerState(ClientMP);
    if ( v10 )
    {
      v11 = 0;
      _R8 = v10 + 4720;
      v13 = 0i64;
      do
      {
        if ( *(_BYTE *)(_R8 + 159) == state )
        {
          if ( v13 >= v4 )
            return v8;
          __asm
          {
            vmovups xmm0, xmmword ptr [r8]
            vmovups xmmword ptr [rdi], xmm0
            vmovups xmm1, xmmword ptr [r8+10h]
            vmovups xmmword ptr [rdi+10h], xmm1
            vmovups xmm0, xmmword ptr [r8+20h]
            vmovups xmmword ptr [rdi+20h], xmm0
            vmovups xmm1, xmmword ptr [r8+30h]
            vmovups xmmword ptr [rdi+30h], xmm1
            vmovups xmm0, xmmword ptr [r8+40h]
            vmovups xmmword ptr [rdi+40h], xmm0
            vmovups xmm1, xmmword ptr [r8+50h]
            vmovups xmmword ptr [rdi+50h], xmm1
            vmovups xmm0, xmmword ptr [r8+60h]
            vmovups xmmword ptr [rdi+60h], xmm0
            vmovups xmm1, xmmword ptr [r8+70h]
            vmovups xmmword ptr [rdi+70h], xmm1
            vmovups xmm0, xmmword ptr [r8+80h]
            vmovups xmmword ptr [rdi+80h], xmm0
            vmovups xmm1, xmmword ptr [r8+90h]
            vmovups xmmword ptr [rdi+90h], xmm1
          }
          ++v8;
          *(_QWORD *)&_RDI->size = *(_QWORD *)(_R8 + 160);
          ++v13;
          *(_DWORD *)&_RDI->mlgBackground = *(_DWORD *)(_R8 + 168);
          ++_RDI;
        }
        ++v11;
        _R8 += 172i64;
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
  vec3_t clViewangles; 
  __int64 v13; 
  float v14; 

  v13 = -2i64;
  _RSI = result;
  ClientMP = ClActiveClientMP::GetClientMP(localClientNum);
  ClientMP->GetPlayerState(ClientMP);
  ClActiveClient_GetCLViewangles(ClientMP, &clViewangles);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+58h+clViewangles]
    vaddss  xmm4, xmm0, dword ptr [rbx+0B4h]
    vmovss  xmm1, dword ptr [rsp+58h+clViewangles+4]
    vaddss  xmm3, xmm1, dword ptr [rbx+0B8h]
    vmovss  xmm0, dword ptr [rsp+58h+clViewangles+8]
    vaddss  xmm2, xmm0, dword ptr [rbx+0BCh]
    vmovss  [rsp+58h+var_18], xmm2
    vunpcklps xmm0, xmm4, xmm3
    vmovsd  qword ptr [rsi], xmm0
  }
  _RSI->v[2] = v14;
  memset(&clViewangles, 0, sizeof(clViewangles));
  return _RSI;
}

/*
==============
ATClient_GetPlayerForwardVector
==============
*/
vec3_t *ATClient_GetPlayerForwardVector(vec3_t *result, const LocalClientNum_t localClientNum)
{
  ClActiveClientMP *ClientMP; 
  vec3_t clViewangles; 
  __int64 v13; 
  vec3_t angles; 
  vec3_t forward; 

  v13 = -2i64;
  _RSI = result;
  ClientMP = ClActiveClientMP::GetClientMP(localClientNum);
  ClientMP->GetPlayerState(ClientMP);
  ClActiveClient_GetCLViewangles(ClientMP, &clViewangles);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+68h+clViewangles]
    vaddss  xmm1, xmm0, dword ptr [rbx+0B4h]
    vmovss  dword ptr [rsp+68h+angles], xmm1
    vmovss  xmm2, dword ptr [rsp+68h+clViewangles+4]
    vaddss  xmm0, xmm2, dword ptr [rbx+0B8h]
    vmovss  dword ptr [rsp+68h+angles+4], xmm0
    vmovss  xmm1, dword ptr [rsp+68h+clViewangles+8]
    vaddss  xmm2, xmm1, dword ptr [rbx+0BCh]
    vmovss  dword ptr [rsp+68h+angles+8], xmm2
  }
  AngleVectors(&angles, &forward, NULL, NULL);
  __asm
  {
    vmovsd  xmm0, qword ptr [rsp+68h+forward]
    vmovsd  qword ptr [rsi], xmm0
  }
  _RSI->v[2] = forward.v[2];
  memset(&clViewangles, 0, sizeof(clViewangles));
  return _RSI;
}

/*
==============
ATClient_GetRandomEnemy
==============
*/

__int64 __fastcall ATClient_GetRandomEnemy(const LocalClientNum_t localClientNum, double _XMM1_8)
{
  int v4; 
  ClActiveClientMP *ClientMP; 
  team_t LocalPlayerTeam; 
  __int64 v7; 
  unsigned int numClients; 
  __int64 parseClientsCount; 
  __int64 v10; 
  __int64 parseClientsIndex; 
  __int64 v12; 
  clientState_t *parseClients; 
  unsigned int v14; 
  __int64 v16; 
  unsigned int clientIndex; 
  team_t team; 
  int v20; 
  __int64 v21; 
  int v23[200]; 

  v4 = 0;
  ClientMP = ClActiveClientMP::GetClientMP(localClientNum);
  LocalPlayerTeam = ATClient_GetLocalPlayerTeam(localClientNum);
  v7 = (__int64)ClientMP->GetPlayerState(ClientMP);
  numClients = ClientMP->snap.numClients;
  if ( !numClients )
    return 0xFFFFFFFFi64;
  parseClientsCount = ClientMP->parseClientsCount;
  v10 = 0i64;
  parseClientsIndex = ClientMP->snap.parseClientsIndex;
  v12 = numClients;
  parseClients = ClientMP->parseClients;
  v14 = *(_DWORD *)(v7 + 460);
  __asm { vxorps  xmm1, xmm1, xmm1 }
  do
  {
    v16 = parseClientsIndex % parseClientsCount;
    clientIndex = parseClients[v16].clientIndex;
    if ( clientIndex != v14 )
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, dword ptr [rax+rbp+0A0h]
        vcomiss xmm0, xmm1
      }
      if ( clientIndex > v14 )
      {
        team = parseClients[v16].team;
        if ( (team == TEAM_ZERO || team != LocalPlayerTeam) && v10 < 200 )
        {
          ++v4;
          v23[v10++] = clientIndex;
        }
      }
    }
    ++parseClientsIndex;
    --v12;
  }
  while ( v12 );
  if ( v4 <= 0 )
    return 0xFFFFFFFFi64;
  v20 = I_irand(0, v4);
  v21 = v20;
  if ( (unsigned int)v20 >= 0xC8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_utils.cpp", 509, ASSERT_TYPE_ASSERT, "(unsigned)( enemyIndex ) < (unsigned)( ( sizeof( *array_counter( enemies ) ) + 0 ) )", "enemyIndex doesn't index ARRAY_COUNT( enemies )\n\t%i not in [0, %i)", v20, 200) )
    __debugbreak();
  return (unsigned int)v23[v21];
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
  unsigned int v6; 
  ClActiveClientMP *ClientMP; 
  __int64 v8; 
  __int64 v9; 

  v3 = maxVehicles;
  _RSI = vehicles;
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
      _RAX = (__int64)&ClientMP->parseEntities[(v8 + ClientMP->snap.parseEntitiesIndex) % ClientMP->parseEntitiesCount];
      if ( *(_WORD *)(_RAX + 8) == 14 )
      {
        if ( v9 >= v3 )
          return v6;
        __asm
        {
          vmovups xmm0, xmmword ptr [rax]
          vmovups xmmword ptr [rsi], xmm0
          vmovups xmm1, xmmword ptr [rax+10h]
          vmovups xmmword ptr [rsi+10h], xmm1
          vmovups xmm0, xmmword ptr [rax+20h]
          vmovups xmmword ptr [rsi+20h], xmm0
          vmovups xmm1, xmmword ptr [rax+30h]
          vmovups xmmword ptr [rsi+30h], xmm1
          vmovups xmm0, xmmword ptr [rax+40h]
          vmovups xmmword ptr [rsi+40h], xmm0
          vmovups xmm1, xmmword ptr [rax+50h]
          vmovups xmmword ptr [rsi+50h], xmm1
          vmovups xmm0, xmmword ptr [rax+60h]
          vmovups xmmword ptr [rsi+60h], xmm0
          vmovups xmm1, xmmword ptr [rax+70h]
          vmovups xmmword ptr [rsi+70h], xmm1
          vmovups xmm0, xmmword ptr [rax+80h]
          vmovups xmmword ptr [rsi+80h], xmm0
          vmovups xmm1, xmmword ptr [rax+90h]
          vmovups xmmword ptr [rsi+90h], xmm1
          vmovups xmm0, xmmword ptr [rax+0A0h]
          vmovups xmmword ptr [rsi+0A0h], xmm0
          vmovups xmm1, xmmword ptr [rax+0B0h]
          vmovups xmmword ptr [rsi+0B0h], xmm1
          vmovups xmm0, xmmword ptr [rax+0C0h]
          vmovups xmmword ptr [rsi+0C0h], xmm0
          vmovups xmm1, xmmword ptr [rax+0D0h]
          vmovups xmmword ptr [rsi+0D0h], xmm1
          vmovups xmm0, xmmword ptr [rax+0E0h]
          vmovups xmmword ptr [rsi+0E0h], xmm0
        }
        ++v6;
        ++v9;
        *(_QWORD *)&_RSI->partBits.array[6] = *(_QWORD *)(_RAX + 240);
        ++_RSI;
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

bool __fastcall ATClient_IsClientAlive(const clientState_t *const clientState, double _XMM1_8)
{
  bool v3; 
  bool v4; 

  v3 = clientState == NULL;
  if ( !clientState )
  {
    v4 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_utils.cpp", 191, ASSERT_TYPE_ASSERT, "(clientState != nullptr)", (const char *)&queryFormat, "clientState != nullptr");
    v3 = !v4;
    if ( v4 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, dword ptr [rbx+0A0h]
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm1, xmm0
  }
  return !v3;
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
bool ATClient_IsTargetingEnemy(const LocalClientNum_t localClientNum)
{
  ClActiveClientMP *ClientMP; 
  __int64 v12; 
  team_t LocalPlayerTeam; 
  __int64 numClients; 
  __int64 v16; 
  clientState_t *v23; 
  __int64 v24; 
  entityState_t *v25; 
  team_t team; 
  const dvar_t *v33; 
  char v41; 
  bool v55; 
  vec3_t result; 
  vec3_t trBase; 

  ClientMP = ClActiveClientMP::GetClientMP(localClientNum);
  v12 = (__int64)ClientMP->GetPlayerState(ClientMP);
  LocalPlayerTeam = ATClient_GetLocalPlayerTeam(localClientNum);
  _RAX = ATClient_GetPlayerForwardVector(&result, localClientNum);
  numClients = ClientMP->snap.numClients;
  v16 = 0i64;
  __asm { vmovsd  xmm0, qword ptr [rax] }
  trBase.v[2] = _RAX->v[2];
  __asm { vmovsd  qword ptr [rsp+128h+trBase], xmm0 }
  if ( !(_DWORD)numClients )
    return 0;
  __asm
  {
    vmovaps [rsp+128h+var_78], xmm10
    vmovss  xmm10, cs:__real@3f800000
    vmovaps [rsp+128h+var_88], xmm11
    vmovss  xmm11, dword ptr [rsp+128h+trBase+8]
    vmovaps [rsp+128h+var_98], xmm12
    vmovss  xmm12, dword ptr [rsp+128h+trBase+4]
    vmovaps [rsp+128h+var_A8], xmm13
    vmovss  xmm13, dword ptr [rsp+128h+trBase]
    vmovaps [rsp+128h+var_B8], xmm14
    vmovss  xmm14, cs:__real@80000000
    vmovaps [rsp+128h+var_38], xmm6
    vmovaps [rsp+128h+var_48], xmm7
    vmovaps [rsp+128h+var_58], xmm8
    vmovaps [rsp+128h+var_68], xmm9
  }
  do
  {
    v23 = &ClientMP->parseClients[(v16 + ClientMP->snap.parseClientsIndex) % ClientMP->parseClientsCount];
    if ( v23->clientIndex != *(_DWORD *)(v12 + 460) )
    {
      v24 = 0i64;
      if ( numClients )
      {
        do
        {
          v25 = &ClientMP->parseEntities[(ClientMP->snap.parseEntitiesIndex + v24) % ClientMP->parseEntitiesCount];
          if ( v25->eType != ET_PLAYER )
            break;
          if ( v25->number == v23->clientIndex )
          {
            if ( v25 )
            {
              team = v23->team;
              if ( team == TEAM_ZERO || team != LocalPlayerTeam )
              {
                Trajectory_GetTrBase(&v25->lerp.pos, &trBase);
                __asm
                {
                  vmovss  xmm0, dword ptr [rsp+128h+trBase]
                  vsubss  xmm7, xmm0, dword ptr [r15+30h]
                  vmovss  xmm1, dword ptr [rsp+128h+trBase+4]
                  vmovss  xmm0, dword ptr [rsp+128h+trBase+8]
                  vsubss  xmm8, xmm1, dword ptr [r15+34h]
                  vsubss  xmm9, xmm0, dword ptr [r15+38h]
                }
                v33 = DVARINT_ATClient_ShootDistanceSq;
                __asm
                {
                  vmulss  xmm1, xmm8, xmm8
                  vmulss  xmm0, xmm7, xmm7
                  vaddss  xmm2, xmm1, xmm0
                  vmulss  xmm1, xmm9, xmm9
                  vaddss  xmm6, xmm2, xmm1
                }
                if ( !DVARINT_ATClient_ShootDistanceSq && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_ShootDistanceSq") )
                  __debugbreak();
                Dvar_CheckFrontendServerThread(v33);
                __asm
                {
                  vxorps  xmm0, xmm0, xmm0
                  vcvtsi2ss xmm0, xmm0, dword ptr [rbx+28h]
                  vcomiss xmm6, xmm0
                }
                if ( v41 )
                {
                  _RBX = DVARFLT_ATClient_ShootDotProduct;
                  __asm
                  {
                    vsqrtss xmm1, xmm6, xmm6
                    vcmpless xmm0, xmm1, xmm14
                    vblendvps xmm0, xmm1, xmm10, xmm0
                    vdivss  xmm5, xmm10, xmm0
                    vmulss  xmm0, xmm7, xmm5
                    vmulss  xmm1, xmm8, xmm5
                    vmulss  xmm3, xmm0, xmm13
                    vmulss  xmm2, xmm1, xmm12
                    vmulss  xmm0, xmm9, xmm5
                    vmulss  xmm1, xmm0, xmm11
                    vaddss  xmm4, xmm3, xmm2
                    vaddss  xmm6, xmm4, xmm1
                  }
                  if ( !DVARFLT_ATClient_ShootDotProduct && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_ShootDotProduct") )
                    __debugbreak();
                  Dvar_CheckFrontendServerThread(_RBX);
                  __asm { vcomiss xmm6, dword ptr [rbx+28h] }
                  if ( !v41 )
                  {
                    v55 = 1;
                    goto LABEL_22;
                  }
                }
              }
            }
            break;
          }
          ++v24;
        }
        while ( v24 < numClients );
      }
    }
    ++v16;
    numClients = ClientMP->snap.numClients;
  }
  while ( v16 < numClients );
  v55 = 0;
LABEL_22:
  __asm
  {
    vmovaps xmm7, [rsp+128h+var_48]
    vmovaps xmm8, [rsp+128h+var_58]
    vmovaps xmm9, [rsp+128h+var_68]
    vmovaps xmm6, [rsp+128h+var_38]
    vmovaps xmm10, [rsp+128h+var_78]
    vmovaps xmm11, [rsp+128h+var_88]
    vmovaps xmm12, [rsp+128h+var_98]
    vmovaps xmm13, [rsp+128h+var_A8]
    vmovaps xmm14, [rsp+128h+var_B8]
  }
  return v55;
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
  __int64 v6; 
  bool v8; 
  bool v9; 
  char v10; 
  ClActiveClientMP *ClientMP; 
  const dvar_t *v25; 
  nav_space_s *DefaultSpace; 
  bfx::PolylinePathRCPtr v27; 
  int v28; 
  char v29; 
  int v43; 
  const dvar_t *v44; 
  const dvar_t *v46; 
  float v50; 
  bfx::PolylinePathRCPtr result; 
  vec3_t v53; 
  __int64 v54; 
  vec3_t outPath; 
  float v57; 
  char v58; 
  void *retaddr; 

  _RAX = &retaddr;
  v54 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
  }
  _R14 = destination;
  v6 = localClientNum;
  __asm { vmovsd  xmm7, qword ptr [rdx] }
  v50 = destination->v[2];
  v8 = 1;
  v9 = 0;
  v10 = 0;
  ClientMP = ClActiveClientMP::GetClientMP(localClientNum);
  _R15 = 3 * v6;
  _RBP = &ClientMP->GetPlayerState(ClientMP)->origin;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+0]
    vsubss  xmm3, xmm0, dword ptr rva s_previousClientPosition[rcx+r15*4]
    vmovss  xmm1, dword ptr [rbp+4]
    vsubss  xmm2, xmm1, dword ptr (rva s_previousClientPosition+4)[rcx+r15*4]
    vmovss  xmm0, dword ptr [rbp+8]
    vsubss  xmm4, xmm0, dword ptr (rva s_previousClientPosition+8)[rcx+r15*4]
    vmulss  xmm2, xmm2, xmm2
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm6, xmm3, xmm0
  }
  v25 = DVARBOOL_ATClient_Pathing;
  if ( !DVARBOOL_ATClient_Pathing && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_Pathing") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v25);
  if ( !v25->current.enabled || !s_ATClientNavPathInitialized )
    goto LABEL_25;
  DefaultSpace = Nav_GetDefaultSpace();
  Nav_FindPath(&result, DefaultSpace, _RBP, _R14, 0);
  if ( bfx::PolylinePathRCPtr::GetNumSegments(&result) <= 0 )
  {
    _RDI = DVARFLT_ATClient_NegligeableMovementSq;
    if ( !DVARFLT_ATClient_NegligeableMovementSq && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_NegligeableMovementSq") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm { vcomiss xmm6, dword ptr [rdi+28h] }
    if ( v29 )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [r14]
        vsubss  xmm3, xmm0, dword ptr [rbp+0]
        vmovss  xmm1, dword ptr [r14+4]
        vsubss  xmm2, xmm1, dword ptr [rbp+4]
        vmovss  xmm0, dword ptr [r14+8]
        vsubss  xmm4, xmm0, dword ptr [rbp+8]
        vmulss  xmm2, xmm2, xmm2
        vmulss  xmm1, xmm3, xmm3
        vaddss  xmm3, xmm2, xmm1
        vmulss  xmm0, xmm4, xmm4
        vaddss  xmm6, xmm3, xmm0
      }
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_ATClient_MinDistSqToReachDestination, "ATClient_MinDistSqToReachDestination");
      v10 = 0;
      __asm { vcomiss xmm6, xmm0 }
      if ( !v29 )
        v10 = 1;
    }
  }
  else
  {
    bfx::PolylinePathRCPtr::PolylinePathRCPtr((bfx::PolylinePathRCPtr *)&v53, &result);
    v28 = Nav_SimplifyPath(DefaultSpace, _RBP, v27, NAV_LAYER_HUMAN, NULL, 128, &outPath);
    if ( v28 > 1 )
    {
      __asm { vmovsd  xmm7, [rsp+6D8h+var_65C] }
      v50 = v57;
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_ATClient_NegligeableMovementSq, "ATClient_NegligeableMovementSq");
      __asm { vcomiss xmm6, xmm0 }
      if ( v29 )
      {
        if ( v28 > 2 )
          v10 = 1;
      }
    }
  }
  bfx::PolylinePathRCPtr::~PolylinePathRCPtr(&result);
  if ( v10 )
  {
    v8 = 0;
    _R14 = 0x140000000ui64;
    if ( !s_stuckStartTimeInMs[v6] )
      s_stuckStartTimeInMs[v6] = Sys_Milliseconds();
    v43 = Sys_Milliseconds() - s_stuckStartTimeInMs[v6];
    v44 = DVARINT_ATClient_JumpWhenStuckForXMs;
    if ( !DVARINT_ATClient_JumpWhenStuckForXMs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_JumpWhenStuckForXMs") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v44);
    if ( v43 >= v44->current.integer )
    {
      v9 = 1;
      s_stuckStartTimeInMs[v6] = 0;
    }
  }
  else
  {
LABEL_25:
    _R14 = 0x140000000ui64;
    s_stuckStartTimeInMs[v6] = 0;
  }
  __asm
  {
    vmovsd  xmm0, qword ptr [rbp+0]
    vmovsd  qword ptr rva s_previousClientPosition[r14+r15*4], xmm0
  }
  s_previousClientPosition[v6].v[2] = _RBP->v[2];
  __asm { vmovsd  [rsp+6D8h+var_688.m_pProxy], xmm7 }
  v53.v[2] = v50;
  v46 = DVARINT_ATClient_MoveToTargetInputDurationMS;
  if ( !DVARINT_ATClient_MoveToTargetInputDurationMS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_MoveToTargetInputDurationMS") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v46);
  ATClient_GenerateInputsToMoveToPos(localClientNum, &v53, v46->current.integer, ATClient_MoveInput_All, v8, v9);
  _R11 = &v58;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
}

